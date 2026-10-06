/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109de11c4; end: 109de126b;  */

void FUN_109de11c4(long *param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined2 uStack_38;
  
  plVar1 = param_1;
  FUN_109de04d4(param_1,param_3);
  if (plVar1 != (long *)0x0) {
    if (plVar1[0xb] == plVar1[0xc]) {
      (**(code **)(*param_1 + 0x50))();
      uStack_4c = 0xaffffffff;
      plStack_58 = param_1;
      uStack_50 = param_2;
      FUN_109de0ce0(plVar1 + 0xb,&plStack_58);
    }
    else {
      plStack_58 = (long *)&UNK_10f5ffcba;
      uStack_38 = 0x103;
      FUN_109da84a4(param_1[1],param_3,&plStack_58);
    }
  }
  return;
}



/* Entry: 109de126c; end: 109de12a7;  */

void FUN_109de126c(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  FUN_109de04d4();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x50))();
    plVar1[5] = (long)param_1;
  }
  return;
}



/* Entry: 109de12a8; end: 109de12bb;  */

void FUN_109de12a8(void)

{
  return;
}



/* Entry: 109de12bc; end: 109de12d3;  */

void FUN_109de12bc(void)

{
  FUN_109df7828(&UNK_10f5ffcea,1);
  return;
}



/* Entry: 109de12d4; end: 109de12db;  */

void FUN_109de12d4(void)

{
  return;
}



/* Entry: 109de12dc; end: 109de13ef;  */

void FUN_109de12dc(long *param_1,undefined8 param_2)

{
  undefined *apuStack_48 [4];
  undefined2 uStack_28;
  
  if (((param_1[3] == param_1[4]) || (*(long *)(param_1[4] + -0x50) != 0)) &&
     ((param_1[6] == param_1[7] || (*(long *)(*(long *)(param_1[7] + -8) + 8) != 0)))) {
    if ((long *)param_1[2] != (long *)0x0) {
      (**(code **)(*(long *)param_1[2] + 0x50))();
    }
                    /* WARNING: Could not recover jumptable at 0x000109de1348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x4c8))(param_1);
    return;
  }
  apuStack_48[0] = &UNK_10f5ffd67;
  uStack_28 = 0x103;
  FUN_109da84a4(param_1[1],param_2,apuStack_48);
  return;
}



/* Entry: 109de13f0; end: 109de15d3;  */

void FUN_109de13f0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  func_0x000109de137c();
  (**(code **)(*param_1 + 0x70))(param_1,param_3,1);
  uVar1 = 4;
  if (*(char *)(param_1[1] + 0x6b2) != '\0') {
    uVar1 = 8;
  }
                    /* WARNING: Could not recover jumptable at 0x000109de1458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1f8))(param_1,param_2,uVar1);
  return;
}



/* Entry: 109de15d4; end: 109de15e3;  */

void FUN_109de15d4(long *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000109de15e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc0))(param_1,param_2,0);
  return;
}



/* Entry: 109de15e4; end: 109de1657;  */

void FUN_109de15e4(long param_1,ulong *param_2,ulong param_3)

{
  long *plVar1;
  
  FUN_109de1658(param_1,param_3);
  param_2[3] = param_3;
  *param_2 = *param_2 & 7;
  param_2[1] = param_2[1] & 0xffffffffffffe3ff | 0x800;
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109de1644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 109de1658; end: 109de16ef;  */

void FUN_109de1658(byte *param_1,byte *param_2)

{
  byte bVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  byte *pbVar3;
  
  do {
    bVar1 = *param_2;
    if (bVar1 < 3) {
      if (bVar1 != 0) {
        if (bVar1 != 2) {
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0x38);
        pbVar3 = param_1;
        param_1 = *(byte **)(param_2 + 0x10);
LAB_109de16d8:
                    /* WARNING: Could not recover jumptable at 0x000109de16e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(pbVar3,param_1);
        return;
      }
      FUN_109de1658(param_1,*(undefined8 *)(param_2 + 0x10));
      lVar2 = 0x18;
    }
    else {
      if (bVar1 != 3) {
        if (bVar1 != 4) {
          return;
        }
        pbVar3 = param_2 + -8;
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pbVar3 + 0x38);
        goto LAB_109de16d8;
      }
      lVar2 = 0x10;
    }
    param_2 = *(byte **)(param_2 + lVar2);
  } while( true );
}



/* Entry: 109de16f0; end: 109de16f3;  */

void FUN_109de16f0(void)

{
  return;
}



/* Entry: 109de16f4; end: 109de174f;  */

void FUN_109de16f4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(uint *)(param_2 + 0x18) != 0) {
    lVar2 = (ulong)*(uint *)(param_2 + 0x18) << 4;
    do {
      lVar1 = *(long *)(param_2 + 0x10) + lVar2;
      if (*(char *)(lVar1 + -0x10) == '\x05') {
        FUN_109de1658(param_1,*(undefined8 *)(lVar1 + -8));
      }
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  return;
}



/* Entry: 109de1750; end: 109de18c7;  */

void FUN_109de1750(long *param_1,undefined *param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,ulong param_7)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_77;
  long lStack_70;
  undefined2 uStack_68;
  
  lVar4 = param_1[1];
  puStack_88 = &UNK_10f5fa737;
  uStack_68 = 0x103;
  lVar1 = lVar4;
  FUN_109da7f80(lVar4,&puStack_88,1);
  (**(code **)(*param_1 + 0xc0))(param_1,lVar1,0);
  puVar3 = *(undefined8 **)(lVar4 + 0x6c8);
  puStack_88 = param_2;
  uStack_80 = param_3;
  uStack_78 = param_5;
  uStack_77 = param_4;
  lStack_70 = lVar1;
  if (*(undefined8 **)(lVar4 + 0x6c8) == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)(lVar4 + 0x6c8);
    puVar6 = (undefined8 *)(lVar4 + 0x6c8);
  }
  else {
    do {
      while (puVar2 = puVar3, puVar5 = puVar2, (ulong)puVar2[4] <= param_7) {
        if (param_7 <= (ulong)puVar2[4]) goto LAB_109de1898;
        puVar3 = (undefined8 *)puVar2[1];
        if ((undefined8 *)puVar2[1] == (undefined8 *)0x0) {
          puVar6 = puVar2 + 1;
          goto LAB_109de1828;
        }
      }
      puVar3 = (undefined8 *)*puVar2;
      puVar6 = puVar2;
    } while ((undefined8 *)*puVar2 != (undefined8 *)0x0);
  }
LAB_109de1828:
  puVar2 = (undefined8 *)0x78;
  __Znwm();
  puVar2[4] = param_7;
  puVar2[10] = 0;
  puVar2[9] = 0;
  puVar2[0xe] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xb] = 0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  puVar2[8] = 0;
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 9) = 0x3f800000;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = puVar5;
  *puVar6 = puVar2;
  puVar3 = puVar2;
  if (**(long **)(lVar4 + 0x6c0) != 0) {
    *(long *)(lVar4 + 0x6c0) = **(long **)(lVar4 + 0x6c0);
    puVar3 = (undefined8 *)*puVar6;
  }
  func_0x000107c27d40(*(undefined8 *)(lVar4 + 0x6c8),puVar3);
  *(long *)(lVar4 + 0x6d0) = *(long *)(lVar4 + 0x6d0) + 1;
LAB_109de1898:
  FUN_109ddb690(puVar2 + 5,&puStack_88,param_6);
  return;
}



/* Entry: 109de18c8; end: 109de1a67;  */

void FUN_109de18c8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *apuStack_58 [4];
  undefined2 uStack_38;
  
  FUN_109dae8f4(param_2,0,param_1[1],0);
  FUN_109dae8f4(param_3,0,param_1[1],0);
  uVar1 = 0x12;
  FUN_109dae7d4(0x12,param_2,param_3,param_1[1],0);
  lVar2 = param_1[1];
  if ((*(byte *)(*(long *)(lVar2 + 0x90) + 0x160) & 1) != 0) {
    apuStack_58[0] = &DAT_10f3dd81d;
    uStack_38 = 0x103;
    FUN_109da7f80(lVar2,apuStack_58,1);
    (**(code **)(*param_1 + 0x108))(param_1,lVar2,uVar1);
    FUN_109dae8f4(lVar2,0,param_1[1],0);
    (**(code **)(*param_1 + 0x1f0))(param_1,lVar2,param_4,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000109de19e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1f0))(param_1,uVar1,param_4,0);
  return;
}



/* Entry: 109de1a68; end: 109de1a9b;  */

void FUN_109de1a68(void)

{
  return;
}



/* Entry: 109de1a9c; end: 109de1ab3;  */

void FUN_109de1a9c(void)

{
  FUN_109df7828(&UNK_10f5ffd92,1);
  return;
}



/* Entry: 109de1ab4; end: 109de1b0b;  */

void FUN_109de1ab4(void)

{
  return;
}



/* Entry: 109de1b0c; end: 109de1bab;  */

void FUN_109de1b0c(long *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_1[0xe] + (ulong)*(uint *)(param_1 + 0xf) * 0x20;
  *(long *)(lVar1 + -0x10) = *(long *)(lVar1 + -0x20);
  *(long *)(lVar1 + -8) = *(long *)(lVar1 + -0x18);
  if (*(long *)(lVar1 + -0x20) != param_2 || *(long *)(lVar1 + -0x18) != param_3) {
    (**(code **)(*param_1 + 0xa0))();
    lVar1 = param_1[0xe] + (ulong)*(uint *)(param_1 + 0xf) * 0x20;
    *(long *)(lVar1 + -0x20) = param_2;
    *(long *)(lVar1 + -0x18) = param_3;
    uVar3 = *(ulong *)(param_2 + 8);
    if ((uVar3 != 0) && (uVar2 = uVar3, func_0x000109da4450(), (uVar2 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000109de1ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xc0))(param_1,uVar3,0);
      return;
    }
  }
  return;
}



/* Entry: 109de1bac; end: 109de1beb;  */

undefined8 FUN_109de1bac(void)

{
  return 0;
}



/* Entry: 109de1bec; end: 109de1c2b;  */

void FUN_109de1bec(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_109de1c2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 109de1c2c; end: 109de1c87;  */

void FUN_109de1c2c(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  while (plVar2 != param_2) {
    plVar2 = plVar2 + -1;
    lVar1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
      FUN_109de210c(plVar2);
    }
  }
  *(long **)(param_1 + 8) = param_2;
  return;
}



/* Entry: 109de1c88; end: 109de1d07;  */

void FUN_109de1c88(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[4] = 0;
  FUN_109dad924();
  uVar3 = param_2[8];
  uVar2 = param_2[7];
  uVar4 = *(undefined8 *)((long)param_2 + 0x42);
  *(undefined8 *)((long)puVar1 + 0x4a) = *(undefined8 *)((long)param_2 + 0x4a);
  *(undefined8 *)((long)puVar1 + 0x42) = uVar4;
  puVar1[8] = uVar3;
  puVar1[7] = uVar2;
  *(undefined8 **)(param_1 + 8) = puVar1 + 0xb;
  return;
}



/* Entry: 109de1d08; end: 109de1f0f;  */

long * FUN_109de1d08(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_c8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 **ppuStack_70;
  undefined8 **ppuStack_68;
  undefined1 uStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  lVar9 = param_1[1] - *param_1;
  uVar7 = (lVar9 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (0x2e8ba2e8ba2e8ba < uVar7) {
    FUN_109dad8c8();
    FUN_109de1f10(&plStack_a0);
    __Unwind_Resume();
    lVar9 = param_1[1];
    lVar5 = param_1[2];
    while (lVar5 != lVar9) {
      param_1[2] = lVar5 + -0x58;
      lStack_c8 = lVar5 + -0x38;
      FUN_109dadc28(&lStack_c8);
      lVar5 = param_1[2];
    }
    if (*param_1 != 0) {
      __ZdlPv();
    }
    return param_1;
  }
  lVar5 = param_1[2] - *param_1 >> 3;
  uVar8 = lVar5 * 0x5d1745d1745d1746;
  if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
    uVar8 = uVar7;
  }
  if (0x1745d1745d1745c < (ulong)(lVar5 * 0x2e8ba2e8ba2e8ba3)) {
    uVar8 = 0x2e8ba2e8ba2e8ba;
  }
  plStack_80 = param_1;
  if (uVar8 == 0) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = param_1;
    FUN_109dad8dc();
  }
  puVar1 = (undefined8 *)((long)plVar4 + lVar9);
  uVar13 = *param_2;
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  puVar1[1] = param_2[1];
  *puVar1 = uVar13;
  puVar1[3] = uVar12;
  puVar1[2] = uVar11;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[4] = 0;
  plStack_a0 = plVar4;
  plStack_98 = puVar1;
  plStack_90 = puVar1;
  plStack_88 = plVar4 + uVar8 * 0xb;
  FUN_109dad924();
  uVar12 = param_2[8];
  uVar11 = param_2[7];
  uVar13 = *(undefined8 *)((long)param_2 + 0x42);
  *(undefined8 *)((long)puVar1 + 0x4a) = *(undefined8 *)((long)param_2 + 0x4a);
  *(undefined8 *)((long)puVar1 + 0x42) = uVar13;
  puVar1[8] = uVar12;
  puVar1[7] = uVar11;
  puVar10 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  ppuStack_70 = &puStack_58;
  ppuStack_68 = &puStack_50;
  puVar2 = (undefined8 *)((long)puVar1 + ((long)puVar10 - (long)puVar3));
  puStack_50 = puVar2;
  puVar6 = puVar10;
  plStack_78 = param_1;
  puStack_58 = puVar2;
  if ((long)puVar10 - (long)puVar3 == 0) {
    uStack_60 = 1;
  }
  else {
    do {
      uVar11 = *puVar6;
      uVar13 = puVar6[3];
      uVar12 = puVar6[2];
      puStack_50[1] = puVar6[1];
      *puStack_50 = uVar11;
      puStack_50[3] = uVar13;
      puStack_50[2] = uVar12;
      puStack_50[5] = 0;
      puStack_50[6] = 0;
      puStack_50[4] = 0;
      uVar11 = puVar6[4];
      puStack_50[5] = puVar6[5];
      puStack_50[4] = uVar11;
      puStack_50[6] = puVar6[6];
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      uVar12 = puVar6[8];
      uVar11 = puVar6[7];
      uVar13 = *(undefined8 *)((long)puVar6 + 0x42);
      *(undefined8 *)((long)puStack_50 + 0x4a) = *(undefined8 *)((long)puVar6 + 0x4a);
      *(undefined8 *)((long)puStack_50 + 0x42) = uVar13;
      puStack_50[8] = uVar12;
      puStack_50[7] = uVar11;
      puVar6 = puVar6 + 0xb;
      puStack_50 = puStack_50 + 0xb;
    } while (puVar6 != puVar3);
    uStack_60 = 1;
    do {
      puStack_48 = puVar10 + 4;
      FUN_109dadc28(&puStack_48);
      puVar10 = puVar10 + 0xb;
    } while (puVar10 != puVar3);
  }
  FUN_109dadc98(&plStack_78);
  plStack_a0 = (long *)*param_1;
  *param_1 = (long)puVar2;
  param_1[1] = (long)(puVar1 + 0xb);
  plStack_88 = (long *)param_1[2];
  param_1[2] = (long)(plVar4 + uVar8 * 0xb);
  plStack_98 = plStack_a0;
  plStack_90 = plStack_a0;
  FUN_109de1f10(&plStack_a0);
  return puVar1 + 0xb;
}



/* Entry: 109de1f10; end: 109de1f6f;  */

long * FUN_109de1f10(long *param_1)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x58;
    lStack_28 = lVar2 + -0x38;
    FUN_109dadc28(&lStack_28);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109de1f70; end: 109de200f;  */

undefined8 * FUN_109de1f70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = *(undefined8 *)((long)param_2 + 0xc);
  *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)((long)param_2 + 0x14);
  *(undefined8 *)((long)param_1 + 0xc) = uVar3;
  param_1[4] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_109dadb6c(param_1 + 4,param_2[4],param_2[5],param_2[5] - param_2[4]);
  if (*(char *)((long)param_2 + 0x4f) < '\0') {
    func_0x000107c3192c(param_1 + 7,param_2[7],param_2[8]);
  }
  else {
    uVar2 = param_2[8];
    uVar1 = param_2[7];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[7] = uVar1;
  }
  return param_1;
}



/* Entry: 109de2010; end: 109de205b;  */

long * FUN_109de2010(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x50;
    FUN_109dadbe4();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109de205c; end: 109de206f;  */

undefined1  [16] FUN_109de205c(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)plVar2 >> 0x3d == 0) {
    lVar3 = (long)plVar2 << 3;
    __Znwm(lVar3);
    auVar5._8_8_ = plVar2;
    auVar5._0_8_ = lVar3;
    return auVar5;
  }
  func_0x000104c4f740();
  plVar1 = (long *)plVar2[1];
  plVar4 = (long *)plVar2[2];
  while (plVar4 != plVar1) {
    plVar4 = plVar4 + -1;
    param_2 = *plVar4;
    plVar2[2] = (long)plVar4;
    *plVar4 = 0;
    if (param_2 != 0) {
      FUN_109de210c();
      plVar4 = (long *)plVar2[2];
    }
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = plVar2;
  return auVar6;
}



/* Entry: 109de2070; end: 109de20f7;  */

undefined1  [16] FUN_109de2070(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar2 = (long)param_1 << 3;
    __Znwm(lVar2);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  plVar1 = (long *)param_1[1];
  plVar3 = (long *)param_1[2];
  while (plVar3 != plVar1) {
    plVar3 = plVar3 + -1;
    param_2 = *plVar3;
    param_1[2] = (long)plVar3;
    *plVar3 = 0;
    if (param_2 != 0) {
      FUN_109de210c();
      plVar3 = (long *)param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 109de20f8; end: 109de210b;  */

void FUN_109de20f8(undefined8 param_1,long param_2)

{
  long lStack_38;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 != 0) {
    lStack_38 = param_2 + 0xa0;
    FUN_109de2178(&lStack_38);
    lStack_38 = param_2 + 0x88;
    func_0x000109de221c(&lStack_38);
    __ZdlPvSt11align_val_t(*(undefined8 *)(param_2 + 0x70),8);
    if (*(long *)(param_2 + 0x58) != 0) {
      *(long *)(param_2 + 0x60) = *(long *)(param_2 + 0x58);
      __ZdlPv();
    }
    __ZdlPv(param_2);
  }
  return;
}



/* Entry: 109de210c; end: 109de2177;  */

void FUN_109de210c(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  if (param_2 != 0) {
    lStack_28 = param_2 + 0xa0;
    FUN_109de2178(&lStack_28);
    lStack_28 = param_2 + 0x88;
    func_0x000109de221c(&lStack_28);
    __ZdlPvSt11align_val_t(*(undefined8 *)(param_2 + 0x70),8);
    if (*(long *)(param_2 + 0x58) != 0) {
      *(long *)(param_2 + 0x60) = *(long *)(param_2 + 0x58);
      __ZdlPv();
    }
    __ZdlPv(param_2);
  }
  return;
}



/* Entry: 109de2178; end: 109de21e7;  */

void FUN_109de2178(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x50;
        FUN_109de21e8(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109de21e8; end: 109de225b;  */

void FUN_109de21e8(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(*(undefined8 *)(param_1 + 0x20),8);
  return;
}



/* Entry: 109de225c; end: 109de22a7;  */

void FUN_109de225c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x30) {
    if (*(long *)(lVar2 + -0x28) != 0) {
      *(long *)(lVar2 + -0x20) = *(long *)(lVar2 + -0x28);
      __ZdlPv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 109de22a8; end: 109de2483;  */

long * FUN_109de22a8(byte *param_1,long *param_2,long *param_3)

{
  char *pcVar1;
  char cVar2;
  long *plVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong *puVar7;
  ulong uVar8;
  
  if ((*param_1 >> 2 & 1) == 0) {
    puVar7 = (ulong *)0x0;
    uVar8 = 0;
  }
  else {
    puVar7 = *(ulong **)(param_1 + -8) + 2;
    uVar8 = **(ulong **)(param_1 + -8);
  }
  if ((param_3 == (long *)0x0) ||
     (plVar3 = param_3, (**(code **)(*param_3 + 0x38))(param_3,puVar7,uVar8), (int)plVar3 != 0)) {
    if ((ulong)(param_2[3] - param_2[4]) < uVar8) {
      FUN_109e0560c(param_2,puVar7,uVar8);
    }
    else if (uVar8 != 0) {
      _memcpy(param_2[4],puVar7,uVar8);
      param_2[4] = param_2[4] + uVar8;
    }
    return param_2;
  }
  if ((*(byte *)((long)param_3 + 0xb9) & 1) == 0) {
    plVar3 = (long *)&UNK_10f5ffdce;
    FUN_109df7828(&UNK_10f5ffdce,1);
    if (*(uint *)(plVar3 + 4) < 9) {
      plVar3[3] = *(long *)(&UNK_10e05aa10 + (ulong)*(uint *)(plVar3 + 4) * 8);
    }
    return plVar3;
  }
  puVar6 = (undefined1 *)param_2[4];
  if (puVar6 < (undefined1 *)param_2[3]) {
    param_2[4] = (long)(puVar6 + 1);
    *puVar6 = 0x22;
  }
  else {
    plVar3 = param_2;
    FUN_109e05570(param_2,0x22);
  }
  if (uVar8 != 0) {
    do {
      cVar2 = (char)*puVar7;
      if (cVar2 == '\"') {
        puVar4 = &UNK_10f5ffdf9;
        if ((ulong)(param_2[3] - param_2[4]) < 2) goto LAB_109de23c8;
        *(undefined2 *)param_2[4] = 0x225c;
LAB_109de23fc:
        param_2[4] = param_2[4] + 2;
      }
      else if (cVar2 == '\n') {
        puVar4 = &UNK_10f5ffdf6;
        if (1 < (ulong)(param_2[3] - param_2[4])) {
          *(undefined2 *)param_2[4] = 0x6e5c;
          goto LAB_109de23fc;
        }
LAB_109de23c8:
        plVar3 = param_2;
        FUN_109e0560c(param_2,puVar4,2);
      }
      else {
        pcVar1 = (char *)param_2[4];
        if (pcVar1 < (char *)param_2[3]) {
          param_2[4] = (long)(pcVar1 + 1);
          *pcVar1 = cVar2;
        }
        else {
          plVar3 = param_2;
          FUN_109e05570(param_2);
        }
      }
      puVar7 = (ulong *)((long)puVar7 + 1);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined1 *)param_2[4];
  if (puVar6 < (undefined1 *)param_2[3]) {
    param_2[4] = (long)(puVar6 + 1);
    *puVar6 = 0x22;
    return plVar3;
  }
  puVar6 = (undefined1 *)param_2[3];
  puVar5 = (undefined1 *)param_2[4];
  do {
    if (puVar5 < puVar6) {
LAB_109e055c0:
      param_2[4] = (long)(puVar5 + 1);
      *puVar5 = 0x22;
      return param_2;
    }
    if (param_2[2] != 0) {
      FUN_109e05520(param_2);
      puVar5 = (undefined1 *)param_2[4];
      goto LAB_109e055c0;
    }
    if ((int)param_2[7] == 0) {
      if (param_2[6] != 0) {
        FUN_109e057dc();
      }
      (**(code **)(*param_2 + 0x48))(param_2,&stack0xffffffffffffffdf,1);
      return param_2;
    }
    FUN_109e0538c(param_2);
    puVar6 = (undefined1 *)param_2[3];
    puVar5 = (undefined1 *)param_2[4];
  } while( true );
}



/* Entry: 109de2484; end: 109de24a3;  */

void FUN_109de2484(long param_1)

{
  if (*(uint *)(param_1 + 0x20) < 9) {
    *(undefined8 *)(param_1 + 0x18) =
         *(undefined8 *)(&UNK_10e05aa10 + (ulong)*(uint *)(param_1 + 0x20) * 8);
  }
  return;
}



/* Entry: 109de24a4; end: 109de25cb;  */

void FUN_109de24a4(undefined8 *param_1,uint *param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar3 = (long *)*param_1;
  uVar4 = (ulong)*(uint *)(param_1 + 2);
  plVar1 = plVar3 + uVar4 * 3;
  plVar7 = plVar1;
  if ((*(int *)(param_1 + 1) != 0) && (plVar7 = plVar3, *(uint *)(param_1 + 2) != 0)) {
    lVar5 = uVar4 * 0x18;
    plVar6 = plVar3;
    do {
      plVar7 = plVar6;
      if (*(int *)((long)plVar6 + 0xc) == 1) {
        if (*plVar6 != -2) break;
      }
      else if ((*(int *)((long)plVar6 + 0xc) != 0) || (*plVar6 != -1)) break;
      plVar6 = plVar6 + 3;
      lVar5 = lVar5 + -0x18;
      plVar7 = plVar1;
    } while (lVar5 != 0);
  }
joined_r0x000109de2534:
  do {
    if (plVar3 + uVar4 * 3 == plVar7) {
      if (*(int *)(param_1 + 4) == 1) {
        uVar2 = *(uint *)(param_1 + 3);
      }
      else {
        if (*(int *)(param_1 + 4) != 8) {
          return;
        }
        uVar2 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
        uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      }
      *param_2 = uVar2;
      return;
    }
    plVar6 = plVar7;
    if ((int)plVar7[1] != 0) {
      _memcpy((long)param_2 + plVar7[2],*plVar7);
    }
    do {
      while( true ) {
        plVar7 = plVar6 + 3;
        if (plVar7 == plVar1) goto joined_r0x000109de2534;
        if (*(int *)((long)plVar6 + 0x24) == 1) break;
        if ((*(int *)((long)plVar6 + 0x24) != 0) || (plVar6 = plVar7, *plVar7 != -1))
        goto joined_r0x000109de2534;
      }
      plVar6 = plVar7;
    } while (*plVar7 == -2);
  } while( true );
}



/* Entry: 109de25cc; end: 109de2967;  */

void FUN_109de25cc(long *param_1,long *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  char *pcStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  *(undefined1 *)((long)param_1 + 0x25) = 1;
  if ((int)param_2 != 0) {
    plVar3 = (long *)(ulong)*(uint *)(param_1 + 1);
    if (*(uint *)(param_1 + 1) == 0) {
      plVar13 = (long *)0x0;
      plVar3 = (long *)0x0;
      plVar6 = (long *)*param_1;
      uVar8 = (ulong)*(uint *)(param_1 + 2);
      plVar14 = plVar6 + uVar8 * 3;
      plVar18 = plVar14;
    }
    else {
      FUN_109de2b20();
      plVar13 = plVar3 + (long)param_2;
      plVar6 = (long *)*param_1;
      uVar8 = (ulong)*(uint *)(param_1 + 2);
      plVar14 = plVar6 + uVar8 * 3;
      plVar18 = plVar14;
      if ((int)param_1[1] != 0) {
        if (*(uint *)(param_1 + 2) == 0) {
          uVar8 = 0;
          plVar18 = plVar6;
        }
        else {
          lVar9 = uVar8 * 0x18;
          plVar16 = plVar6;
          do {
            plVar18 = plVar16;
            if (*(int *)((long)plVar16 + 0xc) == 1) {
              if (*plVar16 != -2) break;
            }
            else if ((*(int *)((long)plVar16 + 0xc) != 0) || (*plVar16 != -1)) break;
            plVar16 = plVar16 + 3;
            lVar9 = lVar9 + -0x18;
            plVar18 = plVar14;
          } while (lVar9 != 0);
        }
      }
    }
    plVar16 = plVar3;
joined_r0x000109de2698:
    plVar17 = plVar18;
    if (plVar17 != plVar6 + uVar8 * 3) {
      if (plVar16 < plVar13) {
        plVar15 = plVar16 + 1;
        *plVar16 = (long)plVar17;
        plVar10 = plVar3;
      }
      else {
        lVar9 = (long)plVar16 - (long)plVar3;
        uVar12 = (lVar9 >> 3) + 1;
        if (uVar12 >> 0x3d != 0) {
          FUN_109de2b0c();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x109de294c);
          (*pcVar2)();
        }
        uVar7 = (long)plVar13 - (long)plVar3 >> 2;
        if (uVar7 <= uVar12) {
          uVar7 = uVar12;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)plVar13 - (long)plVar3)) {
          uVar7 = 0x1fffffffffffffff;
        }
        FUN_109de2b20();
        plVar18 = (long *)(uVar7 + lVar9);
        plVar13 = (long *)(uVar7 + (long)param_2 * 8);
        plVar10 = plVar18 + -(lVar9 >> 3);
        plVar15 = plVar18 + 1;
        *plVar18 = (long)plVar17;
        param_2 = plVar3;
        _memcpy(plVar10,plVar3,lVar9);
        if (plVar3 != (long *)0x0) {
          __ZdlPv(plVar3);
        }
      }
      do {
        while( true ) {
          plVar18 = plVar17 + 3;
          plVar3 = plVar10;
          plVar16 = plVar15;
          if (plVar18 == plVar14) goto joined_r0x000109de2698;
          if (*(int *)((long)plVar17 + 0x24) == 1) break;
          if ((*(int *)((long)plVar17 + 0x24) != 0) || (plVar17 = plVar18, *plVar18 != -1))
          goto joined_r0x000109de2698;
        }
        plVar17 = plVar18;
      } while (*plVar18 == -2);
      goto joined_r0x000109de2698;
    }
    FUN_109de2968(plVar3,(long)plVar16 - (long)plVar3 >> 3,0);
    FUN_109de2484(param_1);
    if (plVar16 != plVar3) {
      plVar18 = plVar3;
      uVar8 = 0;
      lVar9 = 0;
      do {
        plVar14 = (long *)*plVar18;
        lVar11 = *plVar14;
        uVar12 = (ulong)*(uint *)(plVar14 + 1);
        if (uVar8 < uVar12) {
LAB_109de27f0:
          lVar9 = 1L << ((ulong)*(byte *)((long)param_1 + 0x24) & 0x3f);
          uVar8 = (param_1[3] + lVar9) - 1U & -lVar9;
          plVar14[2] = uVar8;
          lVar9 = uVar8 + uVar12;
          param_1[3] = lVar9;
          if ((int)param_1[4] != 6) {
            param_1[3] = lVar9 + 1;
          }
        }
        else {
          if (*(uint *)(plVar14 + 1) != 0) {
            lVar4 = (lVar9 + uVar8) - uVar12;
            _memcmp(lVar4,lVar11,uVar12);
            if ((int)lVar4 != 0) goto LAB_109de27f0;
          }
          uVar7 = (param_1[3] - uVar12) - (ulong)((int)param_1[4] != 6);
          if ((uVar7 & (-1L << ((ulong)*(byte *)((long)param_1 + 0x24) & 0x3f) ^ 0xffffffffffffffffU
                       )) != 0) goto LAB_109de27f0;
          plVar14[2] = uVar7;
          uVar12 = uVar8;
          lVar11 = lVar9;
        }
        plVar18 = plVar18 + 1;
        uVar8 = uVar12;
        lVar9 = lVar11;
      } while (plVar18 != plVar16);
    }
    if (plVar3 != (long *)0x0) {
      __ZdlPv(plVar3);
    }
  }
  uVar5 = *(uint *)(param_1 + 4);
  if ((int)uVar5 < 4) {
    if (uVar5 == 2) {
LAB_109de2880:
      param_1[3] = param_1[3] + 3U & 0xfffffffffffffffc;
    }
    if (uVar5 != 3) goto LAB_109de28a8;
  }
  else if (uVar5 != 5) {
    if (uVar5 != 4) goto LAB_109de28a8;
    goto LAB_109de2880;
  }
  param_1[3] = param_1[3] + 7U & 0xfffffffffffffff8;
LAB_109de28a8:
  if ((uVar5 & 0xfffffffe) == 4) {
    uStack_64 = 0xf271fc1;
    FUN_109e0438c(" ","");
    pcStack_70 = " ";
    uStack_68 = 1;
    plVar3 = param_1;
    FUN_109de2b88(param_1,&pcStack_70);
    plVar3[2] = 0;
    uVar5 = *(uint *)(param_1 + 4);
  }
  if (uVar5 == 0) {
    uVar1 = 0xef12930;
    FUN_109e0438c("","");
    uStack_64 = uVar1;
    pcStack_70 = "";
    uStack_68 = 0;
    FUN_109de2b88(param_1,&pcStack_70);
    param_1[2] = 0;
  }
  return;
}



/* Entry: 109de2968; end: 109de2a7b;  */

void FUN_109de2968(long *param_1,ulong param_2,int param_3)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  if (1 < param_2) {
    uVar6 = (ulong)param_3;
    do {
      uVar2 = (ulong)*(uint *)((long *)*param_1 + 1);
      if (uVar6 < uVar2) {
        uVar8 = (uint)*(byte *)(*(long *)*param_1 + uVar2 + ~uVar6);
      }
      else {
        uVar8 = 0xffffffff;
      }
      lVar7 = 0;
      uVar2 = 1;
      uVar9 = param_2;
      do {
        plVar3 = (long *)param_1[uVar2];
        if (uVar6 < *(uint *)(plVar3 + 1)) {
          bVar1 = *(byte *)(*plVar3 + (ulong)*(uint *)(plVar3 + 1) + ~uVar6);
          uVar4 = (uint)bVar1;
          if ((int)(uint)bVar1 <= (int)uVar8) goto LAB_109de2a04;
          lVar5 = param_1[lVar7];
          param_1[lVar7] = (long)plVar3;
          lVar7 = lVar7 + 1;
          param_1[uVar2] = lVar5;
LAB_109de2a20:
          uVar2 = uVar2 + 1;
        }
        else {
          uVar4 = 0xffffffff;
LAB_109de2a04:
          if ((int)uVar8 <= (int)uVar4) goto LAB_109de2a20;
          uVar9 = uVar9 - 1;
          lVar5 = param_1[uVar9];
          param_1[uVar9] = (long)plVar3;
          param_1[uVar2] = lVar5;
        }
      } while (uVar2 < uVar9);
      FUN_109de2968(param_1,lVar7,uVar6);
      FUN_109de2968(param_1 + uVar9,param_2 - uVar9,uVar6);
      if (uVar8 == 0xffffffff) {
        return;
      }
      param_2 = uVar9 - lVar7;
      param_1 = param_1 + lVar7;
      uVar6 = uVar6 + 1;
    } while (1 < param_2);
  }
  return;
}



/* Entry: 109de2a7c; end: 109de2b0b;  */

ulong FUN_109de2a7c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  long alStack_38 [2];
  byte bStack_28;
  
  uStack_40 = 0;
  uStack_50 = param_2;
  uStack_48 = param_3;
  func_0x000109de2f04(alStack_38,param_1,&uStack_50,&uStack_40);
  if ((bStack_28 & 1) == 0) {
    uVar1 = *(ulong *)(alStack_38[0] + 0x10);
  }
  else {
    lVar2 = 1L << ((ulong)*(byte *)(param_1 + 0x24) & 0x3f);
    uVar1 = (*(long *)(param_1 + 0x18) + lVar2) - 1U & -lVar2;
    *(ulong *)(alStack_38[0] + 0x10) = uVar1;
    lVar2 = uVar1 + (param_3 & 0xffffffff);
    if (*(int *)(param_1 + 0x20) != 6) {
      lVar2 = lVar2 + 1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  return uVar1;
}



/* Entry: 109de2b0c; end: 109de2b1f;  */

undefined1  [16] FUN_109de2b0c(undefined8 param_1,long *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  plVar4 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)plVar4 >> 0x3d == 0) {
    lVar5 = (long)plVar4 << 3;
    __Znwm(lVar5);
    auVar10._8_8_ = plVar4;
    auVar10._0_8_ = lVar5;
    return auVar10;
  }
  func_0x000104c4f740();
  if (*(int *)((long)plVar4 + 0xc) != *(int *)((long)param_2 + 0xc)) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_2;
    return auVar2 << 0x40;
  }
  lVar5 = *plVar4;
  uVar1 = *(uint *)(plVar4 + 1);
  lVar6 = *param_2;
  if (lVar6 == -2) {
    bVar3 = lVar5 == -2;
  }
  else {
    if (lVar6 != -1) {
      if (uVar1 != *(uint *)(param_2 + 1)) {
        return ZEXT416(uVar1) << 0x40;
      }
      if (uVar1 != 0) {
        _memcmp(lVar5,lVar6,uVar1);
        auVar8._1_7_ = 0;
        auVar8[0] = (int)lVar5 == 0;
        auVar8._8_8_ = lVar6;
        return auVar8;
      }
      auVar9._12_4_ = 0;
      auVar9._0_12_ = ZEXT812(1);
      return auVar9;
    }
    bVar3 = lVar5 == -1;
  }
  auVar7._1_7_ = 0;
  auVar7[0] = bVar3;
  auVar7._8_4_ = uVar1;
  auVar7._12_4_ = 0;
  return auVar7;
}



/* Entry: 109de2b20; end: 109de2b53;  */

undefined1  [16] FUN_109de2b20(long *param_1,long *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar4 = (long)param_1 << 3;
    __Znwm(lVar4);
    auVar9._8_8_ = param_1;
    auVar9._0_8_ = lVar4;
    return auVar9;
  }
  func_0x000104c4f740();
  if (*(int *)((long)param_1 + 0xc) != *(int *)((long)param_2 + 0xc)) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_2;
    return auVar2 << 0x40;
  }
  lVar4 = *param_1;
  uVar1 = *(uint *)(param_1 + 1);
  lVar5 = *param_2;
  if (lVar5 == -2) {
    bVar3 = lVar4 == -2;
  }
  else {
    if (lVar5 != -1) {
      if (uVar1 != *(uint *)(param_2 + 1)) {
        return ZEXT416(uVar1) << 0x40;
      }
      if (uVar1 != 0) {
        _memcmp(lVar4,lVar5,uVar1);
        auVar7._1_7_ = 0;
        auVar7[0] = (int)lVar4 == 0;
        auVar7._8_8_ = lVar5;
        return auVar7;
      }
      auVar8._12_4_ = 0;
      auVar8._0_12_ = ZEXT812(1);
      return auVar8;
    }
    bVar3 = lVar4 == -1;
  }
  auVar6._1_7_ = 0;
  auVar6[0] = bVar3;
  auVar6._8_4_ = uVar1;
  auVar6._12_4_ = 0;
  return auVar6;
}



/* Entry: 109de2b54; end: 109de2b87;  */

bool FUN_109de2b54(long *param_1,long *param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  if (*(int *)((long)param_1 + 0xc) != *(int *)((long)param_2 + 0xc)) {
    return false;
  }
  lVar4 = *param_1;
  iVar1 = (int)param_1[1];
  lVar3 = *param_2;
  if (lVar3 == -2) {
    bVar2 = lVar4 == -2;
  }
  else {
    if (lVar3 != -1) {
      if (iVar1 != (int)param_2[1]) {
        return false;
      }
      if (iVar1 != 0) {
        _memcmp(lVar4,lVar3,iVar1);
        return (int)lVar4 == 0;
      }
      return true;
    }
    bVar2 = lVar4 == -1;
  }
  return bVar2;
}



/* Entry: 109de2b88; end: 109de2be3;  */

undefined8 * FUN_109de2b88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109de2be4(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_109de2cf0(param_1,param_2,param_2);
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109de2be4; end: 109de2cef;  */

undefined8 FUN_109de2be4(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    *param_3 = 0;
  }
  else {
    lVar7 = *param_1;
    uStack_78 = 0x100000000;
    uStack_80 = 0xfffffffffffffffe;
    uStack_68 = 0;
    uStack_70 = 0xffffffffffffffff;
    uVar1 = (int)param_1[2] - 1;
    uVar8 = *(uint *)(param_2 + 0xc) & uVar1;
    lVar6 = lVar7 + (ulong)uVar8 * 0x18;
    uVar2 = param_2;
    FUN_109de2b54(param_2,lVar6);
    if ((uVar2 & 1) == 0) {
      lVar9 = 0;
      iVar10 = 1;
      do {
        lVar4 = lVar6;
        FUN_109de2b54(lVar6,&uStack_70);
        if ((int)lVar4 != 0) {
          uVar3 = 0;
          if (lVar9 != 0) {
            lVar6 = lVar9;
          }
          goto LAB_109de2c54;
        }
        lVar5 = lVar6;
        FUN_109de2b54(lVar6,&uStack_80);
        lVar4 = lVar6;
        if (((uint)lVar5 & (uint)(lVar9 == 0)) == 0) {
          lVar4 = lVar9;
        }
        uVar8 = uVar8 + iVar10 & uVar1;
        lVar6 = lVar7 + (ulong)uVar8 * 0x18;
        uVar2 = param_2;
        FUN_109de2b54(param_2,lVar6);
        lVar9 = lVar4;
        iVar10 = iVar10 + 1;
      } while ((int)uVar2 == 0);
    }
    uVar3 = 1;
LAB_109de2c54:
    *param_3 = lVar6;
  }
  return uVar3;
}



/* Entry: 109de2cf0; end: 109de2d9f;  */

long * FUN_109de2cf0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109de2d3c;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109de2da0(param_1,uVar1);
  FUN_109de2be4(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109de2d3c:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if ((*(int *)((long)param_4 + 0xc) != 0) || (*param_4 != -1)) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109de2da0; end: 109de2f93;  */

void FUN_109de2da0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  plVar6 = (long *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 * 0x18);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (plVar6 == (long *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) * 0x18;
      do {
        puVar3[1] = 0;
        *puVar3 = 0xffffffffffffffff;
        lVar4 = lVar4 + -0x18;
        puVar3 = puVar3 + 3;
      } while (lVar4 != 0);
    }
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) * 0x18;
    do {
      puVar3[1] = 0;
      *puVar3 = 0xffffffffffffffff;
      lVar4 = lVar4 + -0x18;
      puVar3 = puVar3 + 3;
    } while (lVar4 != 0);
  }
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 * 0x18;
    plVar7 = plVar6;
    do {
      if (*(int *)((long)plVar7 + 0xc) == 1) {
        if (*plVar7 != -2) goto LAB_109de2e5c;
      }
      else if ((*(int *)((long)plVar7 + 0xc) != 0) || (*plVar7 != -1)) {
LAB_109de2e5c:
        FUN_109de2be4(param_1,plVar7,&plStack_38);
        lVar8 = *plVar7;
        plStack_38[1] = plVar7[1];
        *plStack_38 = lVar8;
        plStack_38[2] = plVar7[2];
        *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
      }
      plVar7 = plVar7 + 3;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(plVar6,8);
  return;
}



/* Entry: 109de2f94; end: 109de2fbb;  */

undefined8 FUN_109de2f94(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c2c4d8(param_2,&UNK_10f5ffdfc,0x41);
  return 0;
}



/* Entry: 109de2fbc; end: 109de303b;  */

void FUN_109de2fbc(long param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  __ZNKSt3__110error_code7messageEv(&ppuStack_38,param_1 + 8);
  pppuVar1 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar1 = &ppuStack_38;
  }
  FUN_109e0560c(param_2,pppuVar1,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  return;
}



/* Entry: 109de303c; end: 109de30eb;  */

undefined1  [16] FUN_109de303c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 8);
}



/* Entry: 109de30ec; end: 109de312f;  */

long FUN_109de30ec(long param_1)

{
  __ZdlPvSt11align_val_t(*(undefined8 *)(param_1 + 0x80),8);
  if (*(long *)(param_1 + 0x68) != 0) {
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x68);
    __ZdlPv();
  }
  FUN_109de3130(param_1 + 8);
  return param_1;
}



/* Entry: 109de3130; end: 109de3157;  */

long FUN_109de3130(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  FUN_109de3158();
  if (*(uint *)(param_1 + 0x18) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x18) << 3;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    do {
      __ZdlPvSt11align_val_t(*puVar1,8);
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x48) << 4;
    do {
      __ZdlPvSt11align_val_t(*puVar1,8);
      lVar2 = lVar2 + -0x10;
      puVar1 = puVar1 + 2;
    } while (lVar2 != 0);
    puVar1 = *(undefined8 **)(param_1 + 0x40);
  }
  if (puVar1 != (undefined8 *)(param_1 + 0x50)) {
    _free(puVar1);
  }
  if (*(long *)(param_1 + 0x10) != param_1 + 0x20) {
    _free();
  }
  return param_1;
}



/* Entry: 109de3158; end: 109de326b;  */

/* WARNING: Removing unreachable block (ram,0x000109de3234) */
/* WARNING: Removing unreachable block (ram,0x000109de31e4) */

void FUN_109de3158(ulong *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  
  if ((uint)param_1[3] != 0) {
    plVar7 = (long *)param_1[2];
    plVar1 = plVar7 + (uint)param_1[3];
    do {
      lVar2 = *plVar7;
      if (lVar2 == *(long *)(param_1[2] + (ulong)(uint)param_1[3] * 8 + -8)) {
        uVar5 = *param_1;
      }
      else {
        uVar8 = (uint)((long)plVar7 - param_1[2] >> 10) & 0x1ffffff;
        if (0x1d < uVar8) {
          uVar8 = 0x1e;
        }
        uVar5 = lVar2 + (0x1000L << ((ulong)uVar8 & 0x3f));
      }
      uVar3 = lVar2 + 7U & 0xfffffffffffffff8;
      do {
        uVar3 = uVar3 + 0x20;
      } while (uVar3 <= uVar5);
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
  }
  if ((uint)param_1[9] != 0) {
    plVar7 = (long *)param_1[8];
    plVar1 = plVar7 + (ulong)(uint)param_1[9] * 2;
    do {
      uVar5 = *plVar7 + 7U & 0xfffffffffffffff8;
      do {
        uVar5 = uVar5 + 0x20;
      } while (uVar5 <= (ulong)(*plVar7 + plVar7[1]));
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar1);
  }
  if ((uint)param_1[9] != 0) {
    lVar2 = (ulong)(uint)param_1[9] << 4;
    puVar6 = (undefined8 *)param_1[8];
    do {
      __ZdlPvSt11align_val_t(*puVar6,8);
      lVar2 = lVar2 + -0x10;
      puVar6 = puVar6 + 2;
    } while (lVar2 != 0);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  uVar8 = (uint)param_1[3];
  if (uVar8 != 0) {
    param_1[10] = 0;
    puVar4 = (ulong *)param_1[2];
    uVar5 = *puVar4;
    *param_1 = uVar5;
    param_1[1] = uVar5 + 0x1000;
    if (uVar8 != 1) {
      lVar2 = (ulong)uVar8 * 8 + -8;
      do {
        puVar4 = puVar4 + 1;
        __ZdlPvSt11align_val_t(*puVar4,8);
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
    *(undefined4 *)(param_1 + 3) = 1;
  }
  return;
}



/* Entry: 109de326c; end: 109de4a97;  */

/* WARNING: Type propagation algorithm not settling */

long ** FUN_109de326c(long *param_1,long *param_2,long param_3,long *param_4,ulong param_5,
                     long param_6)

{
  long *plVar1;
  ulong uVar2;
  uint *puVar3;
  undefined8 *******pppppppuVar4;
  undefined ********ppppppppuVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  bool bVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  undefined *puVar24;
  long lVar25;
  undefined **ppuVar26;
  char *pcVar27;
  undefined ********ppppppppuVar28;
  undefined *******pppppppuVar29;
  undefined1 **ppuVar30;
  undefined8 **ppuVar31;
  undefined ********ppppppppuVar32;
  undefined ******ppppppuVar33;
  undefined ********ppppppppuVar34;
  long **pplVar35;
  uint uVar36;
  undefined4 uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  uint uVar41;
  ulong uVar42;
  ulong *puVar43;
  undefined4 *puVar44;
  ulong uVar45;
  ulong uVar46;
  int *piVar47;
  ulong uVar48;
  ulong *puVar49;
  undefined *****pppppuVar50;
  undefined ****ppppuVar51;
  uint uVar52;
  undefined ********ppppppppuVar53;
  undefined ****ppppuVar54;
  undefined8 *puVar55;
  ulong *puVar56;
  undefined *******pppppppuVar57;
  undefined *******pppppppuVar58;
  undefined8 *puVar59;
  ulong *puVar60;
  undefined **ppuVar61;
  undefined8 *puVar62;
  undefined8 *puStack_408;
  undefined *puStack_3f8;
  long *plStack_3c0;
  ulong uStack_3b8;
  long lStack_3b0;
  ulong uStack_3a8;
  undefined8 uStack_3a0;
  uint uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined4 uStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined *puStack_330;
  int *piStack_328;
  int *piStack_320;
  long lStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  long lStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 *******pppppppuStack_2e8;
  ulong uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [16];
  undefined1 *puStack_2c0;
  undefined1 *puStack_2b8;
  undefined1 *puStack_2b0;
  ulong *puStack_288;
  ulong *puStack_280;
  ulong *puStack_278;
  undefined1 *puStack_270;
  undefined1 *puStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined1 auStack_250 [32];
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  long **pplStack_220;
  undefined8 uStack_218;
  undefined ********ppppppppuStack_210;
  undefined *****pppppuStack_208;
  undefined8 uStack_200;
  undefined2 uStack_1f0;
  undefined6 uStack_1ee;
  int iStack_1d8;
  undefined8 *puStack_1c8;
  undefined ********ppppppppuStack_1c0;
  undefined *****pppppuStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 auStack_180 [4];
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong *puStack_140;
  ulong *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 *puStack_110;
  ulong uStack_108;
  undefined8 auStack_100 [4];
  undefined *puStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined auStack_c8 [8];
  undefined2 uStack_c0;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_3a8 = 0;
  uStack_3a0 = 0;
  uStack_398 = 0;
  uStack_390 = 0;
  uStack_388 = 0;
  uStack_380 = 0;
  uStack_370 = 0;
  puStack_378 = (undefined *)0x0;
  puStack_360 = (undefined8 *)0x0;
  lStack_368 = 0;
  uStack_350 = 0;
  uStack_358 = 0;
  puStack_340 = (undefined8 *)0x0;
  lStack_348 = 0;
  puStack_330 = (undefined *)0x0;
  puStack_338 = (undefined8 *)0x0;
  piStack_320 = (int *)0x0;
  piStack_328 = (int *)0x0;
  puStack_310 = (undefined8 *)0x0;
  lStack_318 = 0;
  lStack_300 = 0;
  puStack_308 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  lStack_2f8 = 0;
  uStack_2e0 = 0;
  pppppppuStack_2e8 = (undefined8 *******)0x0;
  uStack_2d8 = 0;
  plStack_3c0 = param_4;
  uStack_3b8 = param_5;
  lStack_3b0 = param_6;
  FUN_109d31714(auStack_2d0,&pppppppuStack_2e8);
  uVar22 = uRam00000001137e7568;
  puStack_288 = (ulong *)0x0;
  puStack_280 = (ulong *)0x0;
  puStack_278 = (ulong *)0x0;
  if (uRam00000001137e7568 == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = uRam00000001137e7568;
    _strlen();
  }
  uVar20 = uStack_3b8;
  uVar19 = uVar22;
  FUN_109e0438c(uVar22,uVar22 + uVar18);
  FUN_109de2a7c(uVar20,uVar22,uVar18 & 0xffffffff | uVar19 << 0x20);
  uVar22 = uStack_3b8;
  lVar38 = *param_2;
  cVar7 = *(char *)(lVar38 + 0xe7);
  plVar1 = (long *)*(long *)(lVar38 + 0xd0);
  if (-1 < (long)cVar7) {
    plVar1 = (long *)(lVar38 + 0xd0);
  }
  uVar19 = *(ulong *)(lVar38 + 0xd8);
  if (-1 < cVar7) {
    uVar19 = (long)cVar7;
  }
  plVar21 = plVar1;
  FUN_109e0438c(plVar1,(long)plVar1 + uVar19);
  FUN_109de2a7c(uVar22,plVar1,uVar19 & 0xffffffff | (long)plVar21 << 0x20);
  uVar23 = uStack_3b8;
  lVar38 = *param_2;
  cVar7 = *(char *)(lVar38 + 0xcf);
  plVar1 = (long *)*(long *)(lVar38 + 0xb8);
  if (-1 < (long)cVar7) {
    plVar1 = (long *)(lVar38 + 0xb8);
  }
  uVar2 = *(ulong *)(lVar38 + 0xc0);
  if (-1 < cVar7) {
    uVar2 = (long)cVar7;
  }
  plVar21 = plVar1;
  FUN_109e0438c(plVar1,(long)plVar1 + uVar2);
  FUN_109de2a7c(uVar23,plVar1,uVar2 & 0xffffffff | (long)plVar21 << 0x20);
  puStack_e0 = (undefined *)(*param_2 + 0xd0);
  uStack_c0 = 0x104;
  FUN_109e0c844(&puStack_1a8,&puStack_e0);
  if (lStack_368 < 0) {
    __ZdlPv(puStack_378);
  }
  uStack_370 = uStack_1a0;
  puStack_378 = puStack_1a8;
  lStack_368 = uStack_198;
  uStack_358 = uStack_188;
  puStack_360 = puStack_190;
  uStack_350 = auStack_180[0];
  if (param_3 != 0) {
    plVar1 = param_2 + param_3;
    puStack_408 = auStack_100;
    puStack_3f8 = auStack_c8;
    do {
      lVar38 = *param_2;
      lVar39 = (long)*(char *)(lVar38 + 0x1e7);
      if (lVar39 < 0) {
        lVar39 = *(long *)(lVar38 + 0x1d8);
      }
      if (lVar39 == 0) {
        func_0x000109df6eb4();
        puVar55 = (undefined8 *)0x38;
        __Znwm();
        puStack_1a8 = &UNK_10f5ffedd;
        uStack_188 = CONCAT62(uStack_188._2_6_,0x103);
        *puVar55 = &PTR_FUN_110b5c180;
        FUN_109e04498(puVar55 + 1,&puStack_1a8);
        puVar55[4] = 3;
        puVar55[5] = &PTR_PTR_1132fef20;
        *(undefined1 *)(puVar55 + 6) = 1;
        goto LAB_109de47ec;
      }
      uStack_108 = 0x400000000;
      puStack_110 = puStack_408;
      FUN_109d9dd3c(lVar38,&puStack_110,0);
      FUN_109d9dd3c(lVar38,&puStack_110,1);
      uStack_260 = 4;
      uStack_258 = 0;
      puStack_270 = auStack_250;
      puStack_268 = auStack_250;
      if ((int)uStack_108 != 0) {
        lVar39 = (uStack_108 & 0xffffffff) << 3;
        puVar55 = puStack_110;
        do {
          func_0x000109d35a48(&puStack_1a8,&puStack_270,*puVar55);
          lVar39 = lVar39 + -8;
          puVar55 = puVar55 + 1;
        } while (lVar39 != 0);
      }
      uStack_1a0 = 0;
      puStack_1a8 = (undefined *)0x0;
      uStack_198 = 0;
      uStack_188 = 0x400000000;
      uStack_150 = 0;
      uStack_158 = 0;
      puStack_140 = (ulong *)0x0;
      uStack_148 = 0;
      uStack_130 = 0;
      puStack_138 = (ulong *)0x0;
      uStack_120 = 0;
      uStack_128 = 0;
      uStack_118 = 0;
      puStack_190 = auStack_180;
      puStack_160 = &uStack_150;
      FUN_109de512c(&puStack_1a8,lVar38);
      puVar11 = puStack_330;
      iVar8 = (int)((ulong)((long)puStack_310 - lStack_318) >> 3) * -0x55555555;
      iVar17 = (int)((ulong)((long)puStack_138 - (long)puStack_140) >> 3) + iVar8;
      iVar9 = (int)((ulong)(lStack_2f8 - lStack_300) >> 3) * -0x55555555;
      if (piStack_328 < piStack_320) {
        *piStack_328 = iVar8;
        piStack_328[1] = iVar17;
        piVar47 = piStack_328 + 3;
        piStack_328[2] = iVar9;
      }
      else {
        lVar39 = (long)piStack_328 - (long)puStack_330;
        uVar48 = (lVar39 >> 2) * -0x5555555555555555 + 1;
        if (0x1555555555555555 < uVar48) {
          func_0x000109de4b64();
LAB_109de4878:
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x109de487c);
          (*pcVar15)();
        }
        lVar40 = (long)piStack_320 - (long)puStack_330 >> 2;
        uVar42 = lVar40 * 0x5555555555555556;
        if (uVar42 < uVar48 || uVar42 - uVar48 == 0) {
          uVar42 = uVar48;
        }
        if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar40 * -0x5555555555555555)) {
          uVar42 = 0x1555555555555555;
        }
        if (0x1555555555555555 < uVar42) {
          func_0x000104c4f740();
          goto LAB_109de4878;
        }
        puVar24 = (undefined *)(uVar42 * 0xc);
        __Znwm();
        piVar47 = (int *)(puVar24 + lVar39);
        *piVar47 = iVar8;
        piVar47[1] = iVar17;
        piVar47[2] = iVar9;
        piVar47 = piVar47 + 3;
        _memcpy();
        puStack_330 = puVar24;
        piStack_320 = (int *)(puVar24 + uVar42 * 0xc);
        if (puVar11 != (undefined *)0x0) {
          piStack_328 = piVar47;
          __ZdlPv(puVar11);
        }
      }
      piStack_328 = piVar47;
      if (uStack_350._4_4_ == 1) {
        if (*(long **)(lVar38 + 0x98) == (long *)0x0) {
          *param_1 = 0;
LAB_109de36c0:
          puStack_e0 = &UNK_10f5af082;
          uStack_c0 = 0x103;
          lVar39 = lVar38;
          FUN_109d9d514(lVar38,&puStack_e0);
          if ((lVar39 != 0) && (uVar52 = *(uint *)(*(long *)(lVar39 + 0x30) + 8), uVar52 != 0)) {
            uVar48 = 0;
            do {
              lVar40 = *(long *)(**(long **)(lVar39 + 0x30) + uVar48 * 8);
              uVar42 = *(ulong *)(lVar40 + -0x10);
              if (((uint)uVar42 >> 1 & 1) == 0) {
                puVar43 = (ulong *)(lVar40 + -0x10) + -(uVar42 >> 2 & 0xf);
                uVar42 = uVar42 >> 6 & 0xf;
              }
              else {
                puVar43 = *(ulong **)(lVar40 + -0x20);
                uVar42 = (ulong)*(uint *)(lVar40 + -0x18);
              }
              if (uVar42 != 0) {
                lVar40 = uVar42 << 3;
                do {
                  if (puStack_2b8 == puStack_2b0) {
                    FUN_109e0560c(auStack_2d0," ",1);
                  }
                  else {
                    *puStack_2b0 = 0x20;
                    puStack_2b0 = puStack_2b0 + 1;
                  }
                  FUN_109d2f728(auStack_2d0,*(undefined8 **)(*puVar43 + 8) + 3,
                                **(undefined8 **)(*puVar43 + 8));
                  lVar40 = lVar40 + -8;
                  puVar43 = puVar43 + 1;
                } while (lVar40 != 0);
              }
              uVar48 = uVar48 + 1;
            } while (uVar48 != uVar52);
          }
          goto LAB_109de3798;
        }
        (**(code **)(**(long **)(lVar38 + 0x98) + 0x20))(param_1);
        if (*param_1 == 0) goto LAB_109de36c0;
      }
      else {
LAB_109de3798:
        lVar39 = lStack_318;
        puVar43 = puStack_140;
        puVar49 = puStack_138;
        if (uStack_350._4_4_ == 3) {
          if (*(long **)(lVar38 + 0x98) == (long *)0x0) {
            *param_1 = 0;
          }
          else {
            (**(code **)(**(long **)(lVar38 + 0x98) + 0x20))(param_1);
            if (*param_1 != 0) goto LAB_109de4540;
          }
          puStack_e0 = &UNK_10f5ffefc;
          uStack_c0 = 0x103;
          FUN_109d9d514(lVar38,&puStack_e0);
          lVar39 = lStack_318;
          puVar43 = puStack_140;
          puVar49 = puStack_138;
          if ((lVar38 != 0) && (uVar52 = *(uint *)(*(long *)(lVar38 + 0x30) + 8), uVar52 != 0)) {
            lVar40 = 0;
            do {
              uVar48 = uStack_3b8;
              lVar39 = *(long *)(**(long **)(lVar38 + 0x30) + lVar40);
              puVar43 = (ulong *)(lVar39 + -0x10);
              uVar42 = *puVar43;
              if (((uint)uVar42 >> 1 & 1) == 0) {
                puVar43 = puVar43 + -(uVar42 >> 2 & 0xf);
              }
              else {
                puVar43 = *(ulong **)(lVar39 + -0x20);
              }
              puVar49 = *(ulong **)(*puVar43 + 8) + 3;
              uVar42 = **(ulong **)(*puVar43 + 8);
              puVar43 = puVar49;
              FUN_109e0438c(puVar49,(long)puVar49 + uVar42);
              FUN_109de2a7c(uVar48,puVar49,uVar42 & 0xffffffff | (long)puVar43 << 0x20);
              puVar43 = puStack_288;
              if (puStack_280 < puStack_278) {
                puVar60 = puStack_280 + 1;
                *puStack_280 = uVar48 & 0xffffffff | uVar42 << 0x20;
              }
              else {
                lVar39 = (long)puStack_280 - (long)puStack_288;
                uVar46 = (lVar39 >> 3) + 1;
                if (uVar46 >> 0x3d != 0) {
                  func_0x000109de4b78();
                  goto LAB_109de4878;
                }
                uVar45 = (long)puStack_278 - (long)puStack_288 >> 2;
                if (uVar45 <= uVar46) {
                  uVar45 = uVar46;
                }
                if (0x7ffffffffffffff7 < (ulong)((long)puStack_278 - (long)puStack_288)) {
                  uVar45 = 0x1fffffffffffffff;
                }
                if (uVar45 >> 0x3d != 0) {
                  func_0x000104c4f740();
                  goto LAB_109de4878;
                }
                lVar25 = uVar45 << 3;
                __Znwm();
                puVar49 = (ulong *)(lVar25 + lVar39);
                puVar56 = puVar49 + -(lVar39 >> 3);
                puVar60 = puVar49 + 1;
                *puVar49 = uVar48 & 0xffffffff | uVar42 << 0x20;
                puVar49 = (ulong *)(lVar25 + uVar45 * 8);
                _memcpy(puVar56,puVar43,lVar39);
                puStack_288 = puVar56;
                puStack_278 = puVar49;
                if (puVar43 != (ulong *)0x0) {
                  puStack_280 = puVar60;
                  __ZdlPv(puVar43);
                }
              }
              lVar40 = lVar40 + 8;
              puStack_280 = puVar60;
              lVar39 = lStack_318;
              puVar43 = puStack_140;
              puVar49 = puStack_138;
            } while ((ulong)uVar52 * 8 - lVar40 != 0);
          }
        }
        for (; puVar56 = puStack_138, lStack_318 = lVar39, puVar43 != puStack_138;
            puVar43 = puVar43 + 1) {
          uVar48 = *puVar43;
          if (puStack_310 < puStack_308) {
            *puStack_310 = 0;
            puStack_310[1] = 0;
            puVar55 = puStack_310 + 3;
            puStack_310[2] = 0;
            puStack_138 = puVar49;
          }
          else {
            lVar38 = (long)puStack_310 - lVar39;
            uVar42 = (lVar38 >> 3) * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar42) {
              puStack_138 = puVar49;
              FUN_109de4dcc();
              goto LAB_109de4878;
            }
            lVar40 = (long)puStack_308 - lVar39 >> 3;
            uVar46 = lVar40 * 0x5555555555555556;
            if (uVar46 < uVar42 || uVar46 - uVar42 == 0) {
              uVar46 = uVar42;
            }
            if (0x555555555555554 < (ulong)(lVar40 * -0x5555555555555555)) {
              uVar46 = 0xaaaaaaaaaaaaaaa;
            }
            if (0xaaaaaaaaaaaaaaa < uVar46) {
              puStack_138 = puVar49;
              func_0x000104c4f740();
              goto LAB_109de4878;
            }
            lVar40 = uVar46 * 0x18;
            puStack_138 = puVar49;
            __Znwm();
            puVar55 = (undefined8 *)(lVar40 + lVar38);
            puVar59 = (undefined8 *)(lVar40 + uVar46 * 0x18);
            *puVar55 = 0;
            puVar55[1] = 0;
            puVar55[2] = 0;
            puVar55 = puVar55 + 3;
            _memcpy();
            lStack_318 = lVar40;
            puStack_308 = puVar59;
            if (lVar39 != 0) {
              puStack_310 = puVar55;
              __ZdlPv(lVar39);
            }
          }
          puStack_228 = puVar55 + -3;
          *puStack_228 = 0;
          puVar55[-2] = 0;
          puVar55[-1] = 0;
          uStack_218 = 0;
          puStack_230 = &uStack_218;
          pplStack_220 = &plStack_3c0;
          uStack_d0 = 0x40;
          uStack_d8 = 0;
          puStack_310 = puVar55;
          puStack_e0 = puStack_3f8;
          FUN_109d37ad8(&ppppppppuStack_210,&puStack_e0);
          FUN_109de5a38(&puStack_1a8,&ppppppppuStack_210,uVar48);
          ppppppppuStack_210 = (undefined ********)&PTR_DAT_110b5c4a0;
          if ((iStack_1d8 == 1) && (uStack_200 != 0)) {
            __ZdaPv();
          }
          uVar42 = uStack_d8;
          puVar11 = puStack_e0;
          lVar38 = lStack_3b0;
          FUN_109d34148(lStack_3b0,uStack_d8 + 1,0);
          if (uVar42 != 0) {
            _memcpy(lVar38,puVar11,uVar42);
          }
          uVar46 = uStack_3b8;
          *(undefined1 *)(lVar38 + uVar42) = 0;
          lVar39 = lVar38;
          FUN_109e0438c(lVar38,lVar38 + uVar42);
          FUN_109de2a7c(uVar46,lVar38,uVar42 & 0xffffffff | lVar39 << 0x20);
          *(int *)(puVar55 + -3) = (int)uVar46;
          *(int *)((long)puVar55 + -0x14) = (int)uVar42;
          ppuVar26 = &puStack_1a8;
          func_0x000109de5afc(ppuVar26,uVar48);
          uVar42 = uStack_3b8;
          uVar52 = (uint)ppuVar26;
          if (((ulong)ppuVar26 & 1) != 0) {
            *(uint *)((long)puVar55 + -4) = *(uint *)((long)puVar55 + -4) | 8;
          }
          if ((uVar52 >> 2 & 1) != 0) {
            *(uint *)((long)puVar55 + -4) = *(uint *)((long)puVar55 + -4) | 0x10;
          }
          if ((uVar52 >> 4 & 1) != 0) {
            *(uint *)((long)puVar55 + -4) = *(uint *)((long)puVar55 + -4) | 0x20;
          }
          if ((uVar52 >> 5 & 1) != 0) {
            *(uint *)((long)puVar55 + -4) = *(uint *)((long)puVar55 + -4) | 0x40;
          }
          if ((uVar52 >> 1 & 1) != 0) {
            *(uint *)((long)puVar55 + -4) = *(uint *)((long)puVar55 + -4) | 0x400;
          }
          if ((uVar52 >> 7 & 1) != 0) {
            *(uint *)((long)puVar55 + -4) = *(uint *)((long)puVar55 + -4) | 0x800;
          }
          if ((uVar52 >> 0xb & 1) != 0) {
            *(uint *)((long)puVar55 + -4) = *(uint *)((long)puVar55 + -4) | 0x2000;
          }
          *(undefined4 *)(puVar55 + -1) = 0xffffffff;
          if ((((uint)uVar48 >> 2 & 1) == 0) &&
             (ppppppppuVar53 = (undefined ********)(uVar48 & 0xfffffffffffffff8),
             ppppppppuVar53 != (undefined ********)0x0)) {
            if ((*(byte *)((long)ppppppppuVar53 + 0x17) >> 4 & 1) == 0) {
              pppppppuVar57 = (undefined *******)0x0;
              ppppppppuVar32 = (undefined ********)&UNK_10f5fa524;
            }
            else {
              ppppppppuVar28 = ppppppppuVar53;
              func_0x000109da271c();
              ppppppppuVar32 = ppppppppuVar28 + 2;
              pppppppuVar57 = *ppppppppuVar28;
            }
            uVar48 = uStack_3b8;
            ppppppppuVar28 = ppppppppuVar32;
            FUN_109e0438c(ppppppppuVar32,(undefined *)((long)ppppppppuVar32 + (long)pppppppuVar57));
            FUN_109de2a7c(uVar48,ppppppppuVar32,
                          (ulong)pppppppuVar57 & 0xffffffff | (long)ppppppppuVar28 << 0x20);
            *(int *)(puVar55 + -2) = (int)uVar48;
            *(int *)((long)puVar55 + -0xc) = (int)pppppppuVar57;
            if ((*(byte *)((long)ppppppppuVar53 + 0x17) >> 4 & 1) == 0) {
              pppppppuVar57 = (undefined *******)0x0;
              ppppppppuVar32 = (undefined ********)&UNK_10f5fa524;
            }
            else {
              ppppppppuVar28 = ppppppppuVar53;
              func_0x000109da271c();
              ppppppppuVar32 = ppppppppuVar28 + 2;
              pppppppuVar57 = *ppppppppuVar28;
            }
            lVar38 = 0;
            ppuVar26 = &PTR_DAT_110b59cd8;
            lVar39 = 0x13d8;
            do {
              pppppppuVar58 = (undefined *******)*ppuVar26;
              ppuVar61 = (undefined **)((long)&PTR_DAT_110b59cd8 + lVar38);
              if (pppppppuVar58 == (undefined *******)0x0) {
                if (pppppppuVar57 == (undefined *******)0x0) goto LAB_109de3cac;
              }
              else {
                pppppppuVar29 = pppppppuVar58;
                _strlen();
                if ((pppppppuVar29 == pppppppuVar57) &&
                   ((pppppppuVar57 == (undefined *******)0x0 ||
                    (_memcmp(pppppppuVar58,ppppppppuVar32,pppppppuVar57), ppuVar61 = ppuVar26,
                    (int)pppppppuVar58 == 0)))) goto LAB_109de3cac;
              }
              lVar38 = lVar38 + 8;
              ppuVar26 = ppuVar26 + 1;
              lVar39 = lVar39 + -8;
            } while (lVar39 != 0);
            ppuVar61 = (undefined **)&UNK_110b5b0b0;
LAB_109de3cac:
            ppuVar30 = &puStack_270;
            FUN_109d2f848(ppuVar30,ppppppppuVar53);
            puVar3 = (uint *)((long)&uStack_260 + 4);
            if (puStack_268 != puStack_270) {
              puVar3 = (uint *)&uStack_260;
            }
            if (ppuVar30 != (undefined1 **)(puStack_268 + (ulong)*puVar3 * 8) ||
                ppuVar61 != (undefined **)&UNK_110b5b0b0) {
              *(uint *)((long)puVar55 + -4) = *(uint *)((long)puVar55 + -4) | 0x80;
            }
            uVar36 = *(uint *)(ppppppppuVar53 + 4);
            if ((uVar36 & 0x1c00) != 0) {
              *(uint *)((long)puVar55 + -4) = *(uint *)((long)puVar55 + -4) | 0x100;
              uVar36 = *(uint *)(ppppppppuVar53 + 4);
            }
            if ((uVar36 & 0xc0) == 0x80) {
              *(uint *)((long)puVar55 + -4) = *(uint *)((long)puVar55 + -4) | 0x1000;
              uVar36 = *(uint *)(ppppppppuVar53 + 4);
            }
            if ((uVar36 & 0xf) == 3) {
              if ((uVar36 & 0xc0) == 0x80) {
                uVar41 = *(uint *)((long)puVar55 + -4);
LAB_109de3d84:
                uVar41 = uVar41 | 0x200;
                *(uint *)((long)puVar55 + -4) = uVar41;
                uVar36 = *(uint *)(ppppppppuVar53 + 4);
              }
              else {
                if ((*(char *)(ppppppppuVar53 + 2) == '\x03') &&
                   (((ulong)ppppppppuVar53[10] & 1) == 0)) goto LAB_109de3d94;
                uVar41 = *(uint *)((long)puVar55 + -4);
                if ((uVar36 & 0xc0) != 0) goto LAB_109de3d84;
              }
            }
            else {
LAB_109de3d94:
              uVar41 = *(uint *)((long)puVar55 + -4);
            }
            *(uint *)((long)puVar55 + -4) = uVar36 >> 4 & 3 | uVar41;
            if ((uVar52 >> 4 & 1) != 0) {
              if (*(char *)(ppppppppuVar53 + 2) == '\x03') {
                pppppppuVar57 = ppppppppuVar53[3];
                iVar17 = (int)ppppppppuVar53[5] + 0x100;
                FUN_109d2feb0();
                if (((ulong)pppppppuVar57 & 1) != 0) {
                  FUN_109e0486c(&UNK_10f602449);
                }
                ppuVar31 = &puStack_230;
                FUN_109de4b8c();
                *(int *)ppuVar31 = iVar17;
                uVar41 = *(uint *)(ppppppppuVar53 + 4);
                ppuVar31 = &puStack_230;
                FUN_109de4b8c();
                bVar16 = (uVar41 >> 0x11 & 0x3f) != 0;
                uVar36 = 0;
                if (bVar16) {
                  uVar36 = (uVar41 >> 0x11 & 0x3f) - 1 & 0xff;
                }
                uVar37 = 0;
                if (bVar16) {
                  uVar37 = (undefined4)(1L << ((ulong)uVar36 & 0x3f));
                }
                *(undefined4 *)((long)ppuVar31 + 4) = uVar37;
                goto LAB_109de3e18;
              }
              func_0x000109df6eb4();
              puVar59 = (undefined8 *)0x38;
              __Znwm();
              ppppppppuStack_210 = (undefined ********)&UNK_10f5fff15;
              uStack_1f0 = 0x103;
              *puVar59 = &PTR_FUN_110b5c180;
              FUN_109e04498(puVar59 + 1,&ppppppppuStack_210);
LAB_109de3f04:
              puVar59[4] = 3;
              puVar59[5] = &PTR_PTR_1132fef20;
              *(undefined1 *)(puVar59 + 6) = 1;
              goto LAB_109de441c;
            }
LAB_109de3e18:
            ppppppppuVar32 = ppppppppuVar53;
            FUN_109d89110();
            if (ppppppppuVar32 == (undefined ********)0x0) {
              if (*(char *)(ppppppppuVar53 + 2) == '\x02') {
                ppppppppuVar32 = (undefined ********)ppppppppuVar53[-4];
                FUN_109da2ee0();
                if ((*(char *)(ppppppppuVar32 + 2) == '\0') &&
                   (ppppppppuVar32 != (undefined ********)0x0)) goto LAB_109de3e28;
              }
              func_0x000109df6eb4();
              puVar59 = (undefined8 *)0x38;
              __Znwm();
              ppppppppuStack_210 = (undefined ********)&UNK_10f5fff3d;
              uStack_1f0 = 0x103;
              *puVar59 = &PTR_FUN_110b5c180;
              FUN_109e04498(puVar59 + 1,&ppppppppuStack_210);
              goto LAB_109de3f04;
            }
LAB_109de3e28:
            puVar59 = puStack_340;
            lVar38 = lStack_348;
            pppppppuVar57 = ppppppppuVar32[6];
            if (pppppppuVar57 != (undefined *******)0x0) {
              pppppppuVar58 = ppppppppuVar53[5];
              uVar48 = uStack_3a8;
              FUN_109de4df4(uStack_3a8,uStack_398,pppppppuVar57,&ppppppppuStack_210);
              ppppppppuVar28 = ppppppppuStack_210;
              if ((uVar48 & 1) == 0) {
                if ((uint)uStack_3a0 * 4 + 4 < uStack_398 * 3) {
                  if ((uStack_398 + ~(uint)uStack_3a0) - uStack_3a0._4_4_ <= uStack_398 >> 3) {
                    FUN_109de4e80(&uStack_3a8);
                    goto LAB_109de451c;
                  }
                }
                else {
                  FUN_109de4e80(&uStack_3a8,uStack_398 << 1);
LAB_109de451c:
                  FUN_109de4df4(uStack_3a8,uStack_398,pppppppuVar57,&ppppppppuStack_210);
                }
                ppppppppuVar28 = ppppppppuStack_210;
                if (*ppppppppuStack_210 != (undefined *******)0xfffffffffffff000) {
                  uStack_3a0._4_4_ = uStack_3a0._4_4_ + -1;
                }
                uStack_3a0 = CONCAT44(uStack_3a0._4_4_,(uint)uStack_3a0 + 1);
                *ppppppppuStack_210 = pppppppuVar57;
                *(int *)(ppppppppuStack_210 + 1) =
                     (int)((ulong)((long)puVar59 - lVar38) >> 2) * -0x55555555;
                pppppuStack_1b8 = (undefined *****)0x0;
                ppppppppuStack_1c0 = (undefined ********)0x0;
                uStack_1b0 = 0;
                if (uStack_350._4_4_ != 1) {
                  ppppppuVar33 = *pppppppuVar57;
                  pppppuVar50 = *ppppppuVar33;
                  if (pppppuVar50 < (undefined *****)0x7ffffffffffffff8) {
                    if (pppppuVar50 < (undefined *****)0x17) {
                      uStack_200 = CONCAT17((char)pppppuVar50,(undefined7)uStack_200);
                      ppppppppuVar34 = (undefined ********)&ppppppppuStack_210;
                      if (pppppuVar50 != (undefined *****)0x0) goto LAB_109de4060;
                    }
                    else {
                      ppppppppuVar5 = (undefined ********)0x19;
                      if (((ulong)pppppuVar50 | 7) != 0x17) {
                        ppppppppuVar5 = (undefined ********)(((ulong)pppppuVar50 | 7) + 1);
                      }
                      ppppppppuVar34 = ppppppppuVar5;
                      __Znwm();
                      uStack_200 = (ulong)ppppppppuVar5 | 0x8000000000000000;
                      ppppppppuStack_210 = ppppppppuVar34;
                      pppppuStack_208 = pppppuVar50;
LAB_109de4060:
                      _memmove(ppppppppuVar34,ppppppuVar33 + 9,pppppuVar50);
                    }
                    *(undefined1 *)((long)ppppppppuVar34 + (long)pppppuVar50) = 0;
                    if ((long)uStack_1b0 < 0) {
                      __ZdlPv(ppppppppuStack_1c0);
                    }
                    pppppuStack_1b8 = pppppuStack_208;
                    ppppppppuStack_1c0 = ppppppppuStack_210;
                    uStack_1b0 = uStack_200;
LAB_109de4094:
                    ppppppppuVar5 = ppppppppuStack_1c0;
                    if (-1 < (long)uStack_1b0._7_1_) {
                      ppppppppuVar5 = (undefined ********)&ppppppppuStack_1c0;
                    }
                    pppppuVar50 = pppppuStack_1b8;
                    if (-1 < (long)uStack_1b0) {
                      pppppuVar50 = (undefined *****)(long)uStack_1b0._7_1_;
                    }
                    lVar38 = lStack_3b0;
                    FUN_109d34148(lStack_3b0,(long)pppppuVar50 + 1,0);
                    if (pppppuVar50 != (undefined *****)0x0) {
                      _memcpy(lVar38,ppppppppuVar5,pppppuVar50);
                    }
                    uVar48 = uStack_3b8;
                    *(undefined1 *)((long)pppppuVar50 + lVar38) = 0;
                    lVar39 = lVar38;
                    FUN_109e0438c(lVar38,(long)pppppuVar50 + lVar38);
                    FUN_109de2a7c(uVar48,lVar38,(ulong)pppppuVar50 & 0xffffffff | lVar39 << 0x20);
                    lVar38 = lStack_348;
                    uVar37 = *(undefined4 *)(pppppppuVar57 + 1);
                    if (puStack_340 < puStack_338) {
                      *(int *)puStack_340 = (int)uVar48;
                      *(int *)((long)puStack_340 + 4) = (int)pppppuVar50;
                      puVar59 = (undefined8 *)((long)puStack_340 + 0xc);
                      *(undefined4 *)(puStack_340 + 1) = uVar37;
                    }
                    else {
                      lVar39 = (long)puStack_340 - lStack_348;
                      uVar42 = (lVar39 >> 2) * -0x5555555555555555 + 1;
                      if (0x1555555555555555 < uVar42) {
                        FUN_109de4fac();
                        goto LAB_109de4878;
                      }
                      lVar40 = (long)puStack_338 - lStack_348 >> 2;
                      uVar46 = lVar40 * 0x5555555555555556;
                      if (uVar46 < uVar42 || uVar46 - uVar42 == 0) {
                        uVar46 = uVar42;
                      }
                      if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar40 * -0x5555555555555555)) {
                        uVar46 = 0x1555555555555555;
                      }
                      if (0x1555555555555555 < uVar46) {
                        func_0x000104c4f740();
                        goto LAB_109de4878;
                      }
                      lVar40 = uVar46 * 0xc;
                      __Znwm();
                      puVar44 = (undefined4 *)(lVar40 + lVar39);
                      puVar62 = (undefined8 *)(lVar40 + uVar46 * 0xc);
                      *puVar44 = (int)uVar48;
                      puVar44[1] = (int)pppppuVar50;
                      puVar44[2] = uVar37;
                      puVar59 = (undefined8 *)(puVar44 + 3);
                      _memcpy();
                      lStack_348 = lVar40;
                      puStack_338 = puVar62;
                      if (lVar38 != 0) {
                        puStack_340 = puVar59;
                        __ZdlPv(lVar38);
                      }
                    }
                    puStack_340 = puVar59;
                    if ((long)uStack_1b0 < 0) {
                      __ZdlPv(ppppppppuStack_1c0);
                    }
                    goto LAB_109de4208;
                  }
                  func_0x000104c4f6b8();
                  goto LAB_109de4878;
                }
                ppppppuVar33 = pppppppuVar58[0xe];
                FUN_109d388ac(ppppppuVar33,*pppppppuVar57 + 9,**pppppppuVar57);
                if (ppppppuVar33 == (undefined ******)0x0) {
                  func_0x000109df6eb4();
                  FUN_109de4d28(&puStack_1c8,&UNK_10f6015fb,3,&PTR_PTR_1132fef20);
                  puVar59 = puStack_1c8;
                }
                else {
                  if (1 < (*(uint *)(ppppppuVar33 + 4) & 0xf) - 7) {
                    FUN_109d31714(&ppppppppuStack_210,&ppppppppuStack_1c0);
                    FUN_109d93768(&uStack_390,&ppppppppuStack_210,ppppppuVar33,0);
                    ppppppppuStack_210 = (undefined ********)&PTR_DAT_110b5c4a0;
                    if ((iStack_1d8 == 1) && (uStack_200 != 0)) {
                      __ZdaPv();
                    }
                    goto LAB_109de4094;
                  }
                  *(undefined4 *)(ppppppppuVar28 + 1) = 0xffffffff;
                  puVar59 = (undefined8 *)0xffffffff;
                }
                if ((long)uStack_1b0 < 0) {
                  __ZdlPv(ppppppppuStack_1c0);
                }
                if (ppppppuVar33 == (undefined ******)0x0) goto LAB_109de441c;
              }
              else {
LAB_109de4208:
                puVar59 = (undefined8 *)(ulong)*(uint *)(ppppppppuVar28 + 1);
              }
              *(int *)(puVar55 + -1) = (int)puVar59;
            }
            if ((uStack_350._4_4_ != 1) ||
               (FUN_109d93c3c(auStack_2d0,ppppppppuVar53,&puStack_378,&uStack_390),
               ((uVar52 ^ 0xffffffff) & 0x24) != 0)) {
LAB_109de4350:
              if (*(char *)((long)ppppppppuVar32 + 0x22) < '\0') {
                pppppuVar50 = ***ppppppppuVar32 + 0x138;
                ppppppppuStack_210 = ppppppppuVar32;
                FUN_109d89ac0(pppppuVar50,&ppppppppuStack_210);
                if (pppppuVar50[2] != (undefined ****)0x0) {
                  ppuVar31 = &puStack_230;
                  FUN_109de4b8c();
                  if (*(char *)((long)ppppppppuVar32 + 0x22) < '\0') {
                    pppppuVar50 = ***ppppppppuVar32 + 0x138;
                    ppppppppuStack_210 = ppppppppuVar32;
                    FUN_109d89ac0(pppppuVar50,&ppppppppuStack_210);
                    ppppuVar54 = pppppuVar50[1];
                    ppppuVar51 = pppppuVar50[2];
                  }
                  else {
                    ppppuVar54 = (undefined ****)0x0;
                    ppppuVar51 = (undefined ****)0x0;
                  }
                  lVar38 = lStack_3b0;
                  FUN_109d34148(lStack_3b0,(long)ppppuVar51 + 1,0);
                  if (ppppuVar51 != (undefined ****)0x0) {
                    _memcpy(lVar38,ppppuVar54,ppppuVar51);
                  }
                  uVar48 = uStack_3b8;
                  *(undefined1 *)((long)ppppuVar51 + lVar38) = 0;
                  lVar39 = lVar38;
                  FUN_109e0438c(lVar38,(long)ppppuVar51 + lVar38);
                  FUN_109de2a7c(uVar48,lVar38,(ulong)ppppuVar51 & 0xffffffff | lVar39 << 0x20);
                  puVar59 = (undefined8 *)0x0;
                  *(int *)(ppuVar31 + 2) = (int)uVar48;
                  *(int *)((long)ppuVar31 + 0x14) = (int)ppppuVar51;
                  goto LAB_109de441c;
                }
              }
              puVar59 = (undefined8 *)0x0;
              goto LAB_109de441c;
            }
            pppppppuVar57 = ppppppppuVar53[-4];
            FUN_109da2d44();
            if ((*(byte *)(pppppppuVar57 + 2) < 4) && (pppppppuVar57 != (undefined *******)0x0)) {
              pppppuStack_1b8 = (undefined *****)0x0;
              ppppppppuStack_1c0 = (undefined ********)0x0;
              uStack_1b0 = 0;
              FUN_109d31714(&ppppppppuStack_210,&ppppppppuStack_1c0);
              FUN_109de5a38(&puStack_1a8,&ppppppppuStack_210,
                            (ulong)pppppppuVar57 & 0xfffffffffffffffb);
              if (CONCAT62(uStack_1ee,uStack_1f0) != uStack_200) {
                FUN_109e05520(&ppppppppuStack_210);
              }
              ppuVar31 = &puStack_230;
              FUN_109de4b8c();
              ppppppppuVar53 = ppppppppuStack_1c0;
              if (-1 < (long)uStack_1b0._7_1_) {
                ppppppppuVar53 = (undefined ********)&ppppppppuStack_1c0;
              }
              pppppuVar50 = pppppuStack_1b8;
              if (-1 < (long)uStack_1b0) {
                pppppuVar50 = (undefined *****)(long)uStack_1b0._7_1_;
              }
              lVar38 = lStack_3b0;
              FUN_109d34148(lStack_3b0,(long)pppppuVar50 + 1,0);
              if (pppppuVar50 != (undefined *****)0x0) {
                _memcpy(lVar38,ppppppppuVar53,pppppuVar50);
              }
              uVar48 = uStack_3b8;
              *(undefined1 *)((long)pppppuVar50 + lVar38) = 0;
              lVar39 = lVar38;
              FUN_109e0438c(lVar38,(long)pppppuVar50 + lVar38);
              FUN_109de2a7c(uVar48,lVar38,(ulong)pppppuVar50 & 0xffffffff | lVar39 << 0x20);
              *(int *)(ppuVar31 + 1) = (int)uVar48;
              *(int *)((long)ppuVar31 + 0xc) = (int)pppppuVar50;
              ppppppppuStack_210 = (undefined ********)&PTR_DAT_110b5c4a0;
              if ((iStack_1d8 == 1) && (uStack_200 != 0)) {
                __ZdaPv();
              }
              if ((long)uStack_1b0 < 0) {
                __ZdlPv(ppppppppuStack_1c0);
              }
              goto LAB_109de4350;
            }
            func_0x000109df6eb4();
            FUN_109de4d28(param_1,&UNK_10f5fff62,3,&PTR_PTR_1132fef20);
          }
          else {
            if (((ulong)ppuVar26 & 1) != 0) {
              *(uint *)((long)puVar55 + -4) = *(uint *)((long)puVar55 + -4) | 0x80;
            }
            pcVar27 = "";
            FUN_109e0438c("","");
            FUN_109de2a7c(uVar42,"",(long)pcVar27 << 0x20);
            puVar59 = (undefined8 *)0x0;
            *(int *)(puVar55 + -2) = (int)uVar42;
            *(undefined4 *)((long)puVar55 + -0xc) = 0;
LAB_109de441c:
            *param_1 = (long)puVar59;
          }
          if (puStack_e0 != puStack_3f8) {
            _free();
          }
          if (*param_1 != 0) goto LAB_109de4540;
          lVar39 = lStack_318;
          puVar49 = puStack_138;
          puStack_138 = puVar56;
        }
        *param_1 = 0;
        puStack_138 = puVar49;
      }
LAB_109de4540:
      __ZdlPvSt11align_val_t(uStack_128,8);
      if (puStack_140 != (ulong *)0x0) {
        puStack_138 = puStack_140;
        __ZdlPv();
      }
      FUN_109de3130(&uStack_1a0);
      if (puStack_268 != puStack_270) {
        _free();
      }
      if (puStack_110 != puStack_408) {
        _free();
      }
      if (*param_1 != 0) goto LAB_109de47f0;
      param_2 = param_2 + 1;
    } while (param_2 != plVar1);
  }
  if (puStack_2b0 != puStack_2c0) {
    FUN_109e05520(auStack_2d0);
  }
  pppppppuVar4 = pppppppuStack_2e8;
  if (-1 < (long)uStack_2d8._7_1_) {
    pppppppuVar4 = &pppppppuStack_2e8;
  }
  uVar48 = uStack_2e0;
  if (-1 < uStack_2d8) {
    uVar48 = (long)uStack_2d8._7_1_;
  }
  lVar38 = lStack_3b0;
  FUN_109d34148(lStack_3b0,uVar48 + 1,0);
  if (uVar48 != 0) {
    _memcpy(lVar38,pppppppuVar4,uVar48);
  }
  uVar42 = uStack_3b8;
  *(undefined1 *)(lVar38 + uVar48) = 0;
  lVar39 = lVar38;
  FUN_109e0438c(lVar38,lVar38 + uVar48);
  FUN_109de2a7c(uVar42,lVar38,uVar48 & 0xffffffff | lVar39 << 0x20);
  FUN_109d596f0(plStack_3c0,0x4c);
  piVar47 = piStack_328;
  puVar11 = puStack_330;
  lVar38 = plStack_3c0[1];
  puStack_3f8 = puStack_330;
  FUN_109de4fc0(plStack_3c0,*plStack_3c0 + lVar38);
  puVar59 = puStack_340;
  lVar10 = lStack_348;
  lVar39 = plStack_3c0[1];
  puStack_408 = puStack_340;
  FUN_109de4fc0(plStack_3c0,*plStack_3c0 + lVar39);
  puVar62 = puStack_310;
  lVar12 = lStack_318;
  lVar40 = plStack_3c0[1];
  FUN_109de4fc0(plStack_3c0,*plStack_3c0 + lVar40,lStack_318,puStack_310);
  lVar14 = lStack_2f8;
  lVar13 = lStack_300;
  lVar25 = plStack_3c0[1];
  FUN_109de4fc0(plStack_3c0,*plStack_3c0 + lVar25,lStack_300,lStack_2f8);
  puVar49 = puStack_280;
  puVar43 = puStack_288;
  lVar6 = plStack_3c0[1];
  FUN_109de4fc0(plStack_3c0,*plStack_3c0 + lVar6,puStack_288,puStack_280);
  puVar55 = (undefined8 *)0x0;
  puVar44 = (undefined4 *)*plStack_3c0;
  *puVar44 = 3;
  puVar44[1] = (int)uVar20;
  puVar44[2] = (int)uVar18;
  puVar44[3] = (int)lVar38;
  puVar44[4] = (int)((ulong)((long)piVar47 - (long)puVar11) >> 2) * -0x55555555;
  puVar44[5] = (int)lVar39;
  puVar44[6] = (int)((ulong)((long)puVar59 - lVar10) >> 2) * -0x55555555;
  puVar44[7] = (int)lVar40;
  puVar44[8] = (int)((ulong)((long)puVar62 - lVar12) >> 3) * -0x55555555;
  puVar44[9] = (int)lVar25;
  puVar44[10] = (int)((ulong)(lVar14 - lVar13) >> 3) * -0x55555555;
  puVar44[0xb] = (int)uVar22;
  puVar44[0xc] = (int)uVar19;
  puVar44[0xd] = (int)uVar23;
  puVar44[0xe] = (int)uVar2;
  puVar44[0xf] = (int)uVar42;
  puVar44[0x10] = (int)uVar48;
  puVar44[0x11] = (int)lVar6;
  puVar44[0x12] = (int)((ulong)((long)puVar49 - (long)puVar43) >> 3);
LAB_109de47ec:
  *param_1 = (long)puVar55;
LAB_109de47f0:
  pplVar35 = &plStack_3c0;
  FUN_109de4a98();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return pplVar35;
  }
  ___stack_chk_fail();
  if (puStack_e0 != puStack_3f8) {
    _free();
  }
  FUN_109de30ec(&puStack_1a8);
  if (puStack_268 != puStack_270) {
    _free();
  }
  if (puStack_110 != puStack_408) {
    _free();
  }
  FUN_109de4a98(&plStack_3c0);
  __Unwind_Resume();
  if (pplVar35[0x27] != (long *)0x0) {
    pplVar35[0x28] = pplVar35[0x27];
    __ZdlPv();
  }
  pplVar35[0x1e] = (long *)&PTR_DAT_110b5c4a0;
  if ((*(int *)(pplVar35 + 0x25) == 1) && (pplVar35[0x20] != (long *)0x0)) {
    __ZdaPv();
  }
  if (*(char *)((long)pplVar35 + 0xef) < '\0') {
    __ZdlPv(pplVar35[0x1b]);
  }
  if (pplVar35[0x18] != (long *)0x0) {
    pplVar35[0x19] = pplVar35[0x18];
    __ZdlPv();
  }
  if (pplVar35[0x15] != (long *)0x0) {
    pplVar35[0x16] = pplVar35[0x15];
    __ZdlPv();
  }
  if (pplVar35[0x12] != (long *)0x0) {
    pplVar35[0x13] = pplVar35[0x12];
    __ZdlPv();
  }
  if (pplVar35[0xf] != (long *)0x0) {
    pplVar35[0x10] = pplVar35[0xf];
    __ZdlPv();
  }
  if (*(char *)((long)pplVar35 + 0x5f) < '\0') {
    __ZdlPv(pplVar35[9]);
  }
  __ZdlPvSt11align_val_t(pplVar35[6],8);
  __ZdlPvSt11align_val_t(pplVar35[3],8);
  return pplVar35;
}



/* Entry: 109de4a98; end: 109de4b63;  */

long FUN_109de4a98(long param_1)

{
  if (*(long *)(param_1 + 0x138) != 0) {
    *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x138);
    __ZdlPv();
  }
  *(undefined ***)(param_1 + 0xf0) = &PTR_DAT_110b5c4a0;
  if ((*(int *)(param_1 + 0x128) == 1) && (*(long *)(param_1 + 0x100) != 0)) {
    __ZdaPv();
  }
  if (*(char *)(param_1 + 0xef) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xd8));
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    *(long *)(param_1 + 200) = *(long *)(param_1 + 0xc0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xa8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x90);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x78);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  __ZdlPvSt11align_val_t(*(undefined8 *)(param_1 + 0x30),8);
  __ZdlPvSt11align_val_t(*(undefined8 *)(param_1 + 0x18),8);
  return param_1;
}



/* Entry: 109de4b64; end: 109de4b8b;  */

char ** FUN_109de4b64(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  char **ppcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  char *apcStack_d8 [4];
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  ppcVar3 = *(char ***)*puVar2;
  if (ppcVar3 == (char **)0x0) {
    lVar1 = puVar2[2];
    *(uint *)(puVar2[1] + 0x14) = *(uint *)(puVar2[1] + 0x14) | 4;
    puVar7 = *(undefined8 **)(lVar1 + 200);
    if (puVar7 < *(undefined8 **)(lVar1 + 0xd0)) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar13 = puVar7 + 3;
      puVar7[2] = 0;
    }
    else {
      lVar12 = *(long *)(lVar1 + 0xc0);
      uVar9 = ((long)puVar7 - lVar12 >> 3) * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar9) {
        func_0x000109de4de0();
LAB_109de4d24:
        func_0x000104c4f740();
        pcVar5 = (char *)0x38;
        __Znwm();
        uStack_b8 = 1;
        uStack_b7 = 1;
        if (*param_2 != '\0') {
          uStack_b8 = 3;
          apcStack_d8[0] = param_2;
        }
        *(undefined ***)pcVar5 = &PTR_FUN_110b5c180;
        ppcVar6 = apcStack_d8;
        FUN_109e04498(pcVar5 + 8,ppcVar6);
        *(undefined8 *)(pcVar5 + 0x20) = param_3;
        *(undefined8 *)(pcVar5 + 0x28) = param_4;
        pcVar5[0x30] = '\x01';
        *ppcVar3 = pcVar5;
        return ppcVar6;
      }
      lVar8 = (long)*(undefined8 **)(lVar1 + 0xd0) - lVar12 >> 3;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
        uVar10 = uVar9;
      }
      if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = 0xaaaaaaaaaaaaaaa;
      }
      if (0xaaaaaaaaaaaaaaa < uVar10) goto LAB_109de4d24;
      lVar8 = uVar10 * 0x18;
      __Znwm();
      puVar13 = (undefined8 *)(lVar8 + ((long)puVar7 - lVar12));
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = 0;
      puVar13 = puVar13 + 3;
      _memcpy();
      *(long *)(lVar1 + 0xc0) = lVar8;
      *(undefined8 **)(lVar1 + 200) = puVar13;
      *(ulong *)(lVar1 + 0xd0) = lVar8 + uVar10 * 0x18;
      if (lVar12 != 0) {
        __ZdlPv(lVar12);
      }
    }
    *(undefined8 **)(lVar1 + 200) = puVar13;
    *(undefined8 **)*puVar2 = puVar13 + -3;
    puVar7 = *(undefined8 **)*puVar2;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    lVar12 = *(long *)*puVar2;
    uVar11 = *(undefined8 *)(lVar1 + 8);
    pcVar5 = "";
    pcVar4 = pcVar5;
    FUN_109e0438c("","");
    FUN_109de2a7c(uVar11,"",(long)pcVar4 << 0x20);
    *(int *)(lVar12 + 8) = (int)uVar11;
    *(undefined4 *)(lVar12 + 0xc) = 0;
    lVar12 = *(long *)*puVar2;
    uVar11 = *(undefined8 *)(lVar1 + 8);
    FUN_109e0438c("","");
    FUN_109de2a7c(uVar11,"",(long)pcVar5 << 0x20);
    *(int *)(lVar12 + 0x10) = (int)uVar11;
    *(undefined4 *)(lVar12 + 0x14) = 0;
    ppcVar3 = *(char ***)*puVar2;
  }
  return ppcVar3;
}



/* Entry: 109de4b8c; end: 109de4d27;  */

char ** FUN_109de4b8c(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char **ppcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  char *apcStack_b8 [4];
  undefined1 uStack_98;
  undefined1 uStack_97;
  
  ppcVar2 = *(char ***)*param_1;
  if (ppcVar2 == (char **)0x0) {
    lVar1 = param_1[2];
    *(uint *)(param_1[1] + 0x14) = *(uint *)(param_1[1] + 0x14) | 4;
    puVar6 = *(undefined8 **)(lVar1 + 200);
    if (puVar6 < *(undefined8 **)(lVar1 + 0xd0)) {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar12 = puVar6 + 3;
      puVar6[2] = 0;
    }
    else {
      lVar11 = *(long *)(lVar1 + 0xc0);
      uVar8 = ((long)puVar6 - lVar11 >> 3) * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar8) {
        func_0x000109de4de0();
LAB_109de4d24:
        func_0x000104c4f740();
        pcVar4 = (char *)0x38;
        __Znwm();
        uStack_98 = 1;
        uStack_97 = 1;
        if (*param_2 != '\0') {
          uStack_98 = 3;
          apcStack_b8[0] = param_2;
        }
        *(undefined ***)pcVar4 = &PTR_FUN_110b5c180;
        ppcVar5 = apcStack_b8;
        FUN_109e04498(pcVar4 + 8,ppcVar5);
        *(undefined8 *)(pcVar4 + 0x20) = param_3;
        *(undefined8 *)(pcVar4 + 0x28) = param_4;
        pcVar4[0x30] = '\x01';
        *ppcVar2 = pcVar4;
        return ppcVar5;
      }
      lVar7 = (long)*(undefined8 **)(lVar1 + 0xd0) - lVar11 >> 3;
      uVar9 = lVar7 * 0x5555555555555556;
      if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
        uVar9 = uVar8;
      }
      if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
        uVar9 = 0xaaaaaaaaaaaaaaa;
      }
      if (0xaaaaaaaaaaaaaaa < uVar9) goto LAB_109de4d24;
      lVar7 = uVar9 * 0x18;
      __Znwm();
      puVar12 = (undefined8 *)(lVar7 + ((long)puVar6 - lVar11));
      puVar12[1] = 0;
      puVar12[2] = 0;
      *puVar12 = 0;
      puVar12 = puVar12 + 3;
      _memcpy();
      *(long *)(lVar1 + 0xc0) = lVar7;
      *(undefined8 **)(lVar1 + 200) = puVar12;
      *(ulong *)(lVar1 + 0xd0) = lVar7 + uVar9 * 0x18;
      if (lVar11 != 0) {
        __ZdlPv(lVar11);
      }
    }
    *(undefined8 **)(lVar1 + 200) = puVar12;
    *(undefined8 **)*param_1 = puVar12 + -3;
    puVar6 = *(undefined8 **)*param_1;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    lVar11 = *(long *)*param_1;
    uVar10 = *(undefined8 *)(lVar1 + 8);
    pcVar4 = "";
    pcVar3 = pcVar4;
    FUN_109e0438c("","");
    FUN_109de2a7c(uVar10,"",(long)pcVar3 << 0x20);
    *(int *)(lVar11 + 8) = (int)uVar10;
    *(undefined4 *)(lVar11 + 0xc) = 0;
    lVar11 = *(long *)*param_1;
    uVar10 = *(undefined8 *)(lVar1 + 8);
    FUN_109e0438c("","");
    FUN_109de2a7c(uVar10,"",(long)pcVar4 << 0x20);
    *(int *)(lVar11 + 0x10) = (int)uVar10;
    *(undefined4 *)(lVar11 + 0x14) = 0;
    ppcVar2 = *(char ***)*param_1;
  }
  return ppcVar2;
}



/* Entry: 109de4d28; end: 109de4dcb;  */

void FUN_109de4d28(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char *apcStack_68 [4];
  undefined1 uStack_48;
  undefined1 uStack_47;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  uStack_48 = 1;
  uStack_47 = 1;
  if (*param_2 != '\0') {
    uStack_48 = 3;
    apcStack_68[0] = param_2;
  }
  *puVar1 = &PTR_FUN_110b5c180;
  FUN_109e04498(puVar1 + 1,apcStack_68);
  puVar1[4] = param_3;
  puVar1[5] = param_4;
  *(undefined1 *)(puVar1 + 6) = 1;
  *param_1 = puVar1;
  return;
}



/* Entry: 109de4dcc; end: 109de4df3;  */

undefined8 FUN_109de4dcc(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  long *plVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  
  uVar5 = (undefined4)((ulong)param_3 >> 0x20);
  uVar4 = (uint)param_3;
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 == 0) {
    uVar3 = 0;
    plVar6 = (long *)0x0;
  }
  else {
    uVar7 = (uVar4 >> 4 ^ uVar4 >> 9) & param_2 - 1U;
    plVar6 = (long *)(puVar2 + (ulong)uVar7 * 0x10);
    lVar9 = *plVar6;
    if (CONCAT44(uVar5,uVar4) != lVar9) {
      iVar10 = 1;
      plVar8 = (long *)0x0;
      do {
        if (lVar9 == -0x1000) {
          uVar3 = 0;
          if (plVar8 != (long *)0x0) {
            plVar6 = plVar8;
          }
          goto LAB_109de4e28;
        }
        plVar1 = plVar6;
        if (plVar8 != (long *)0x0 || lVar9 != -0x2000) {
          plVar1 = plVar8;
        }
        uVar7 = uVar7 + iVar10;
        iVar10 = iVar10 + 1;
        uVar7 = uVar7 & param_2 - 1U;
        plVar6 = (long *)(puVar2 + (ulong)uVar7 * 0x10);
        lVar9 = *plVar6;
        plVar8 = plVar1;
      } while (CONCAT44(uVar5,uVar4) != lVar9);
    }
    uVar3 = 1;
  }
LAB_109de4e28:
  *param_4 = plVar6;
  return uVar3;
}



/* Entry: 109de4df4; end: 109de4e7f;  */

undefined8 FUN_109de4df4(long param_1,int param_2,long param_3,long *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  
  if (param_2 == 0) {
    uVar2 = 0;
    plVar3 = (long *)0x0;
  }
  else {
    uVar4 = ((uint)param_3 >> 4 ^ (uint)param_3 >> 9) & param_2 - 1U;
    plVar3 = (long *)(param_1 + (ulong)uVar4 * 0x10);
    lVar6 = *plVar3;
    if (param_3 != lVar6) {
      iVar7 = 1;
      plVar5 = (long *)0x0;
      do {
        if (lVar6 == -0x1000) {
          uVar2 = 0;
          if (plVar5 != (long *)0x0) {
            plVar3 = plVar5;
          }
          goto LAB_109de4e28;
        }
        plVar1 = plVar3;
        if (plVar5 != (long *)0x0 || lVar6 != -0x2000) {
          plVar1 = plVar5;
        }
        uVar4 = uVar4 + iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 & param_2 - 1U;
        plVar3 = (long *)(param_1 + (ulong)uVar4 * 0x10);
        lVar6 = *plVar3;
        plVar5 = plVar1;
      } while (param_3 != lVar6);
    }
    uVar2 = 1;
  }
LAB_109de4e28:
  *param_4 = (long)plVar3;
  return uVar2;
}



/* Entry: 109de4e80; end: 109de4fab;  */

void FUN_109de4e80(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar6 = (ulong *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (puVar6 != (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 2;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 4;
      puVar7 = puVar6;
      do {
        if ((*puVar7 | 0x1000) != 0xfffffffffffff000) {
          FUN_109de4df4(*param_1,*(undefined4 *)(param_1 + 2),*puVar7,&puStack_38);
          *puStack_38 = *puVar7;
          *(int *)(puStack_38 + 1) = (int)puVar7[1];
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        puVar7 = puVar7 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar4 = lVar4 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109de4fac; end: 109de4fbf;  */

undefined1 * FUN_109de4fac(undefined8 param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar4 = *plVar2;
  lVar10 = plVar2[1];
  lVar9 = param_2 - lVar4;
  if (lVar4 + lVar10 == param_2) {
    FUN_109d3a7bc(plVar2,param_3,param_4);
    puVar3 = (undefined1 *)(*plVar2 + lVar9);
  }
  else {
    uVar7 = (long)param_4 - (long)param_3;
    if ((ulong)plVar2[2] < lVar10 + uVar7) {
      FUN_109dffce4(plVar2,plVar2 + 3,lVar10 + uVar7,1);
      lVar4 = *plVar2;
      lVar10 = plVar2[1];
    }
    puVar3 = (undefined1 *)(lVar4 + lVar9);
    lVar1 = lVar4 + lVar10;
    uVar8 = lVar10 - lVar9;
    if (uVar8 < uVar7) {
      plVar2[1] = lVar10 + uVar7;
      if (lVar10 != lVar9) {
        _memcpy((lVar4 + lVar10 + uVar7) - uVar8,puVar3,uVar8);
        puVar5 = puVar3;
        puVar6 = param_3;
        do {
          param_3 = puVar6 + 1;
          *puVar5 = *puVar6;
          uVar8 = uVar8 - 1;
          puVar5 = puVar5 + 1;
          puVar6 = param_3;
        } while (uVar8 != 0);
      }
      if (param_3 != param_4) {
        _memcpy(lVar1,param_3,(long)param_4 - (long)param_3);
      }
    }
    else {
      func_0x000109d4fa64(plVar2,(undefined1 *)(lVar1 - uVar7),lVar1);
      if ((undefined1 *)(lVar1 - uVar7) != puVar3) {
        _memmove(lVar1 - ((lVar10 - uVar7) - lVar9),puVar3);
      }
      if (param_4 != param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memmove_11034c660)(puVar3,param_3,uVar7);
        return puVar3;
      }
    }
  }
  return puVar3;
}



/* Entry: 109de4fc0; end: 109de512b;  */

undefined1 * FUN_109de4fc0(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar3 = *param_1;
  lVar9 = param_1[1];
  lVar8 = param_2 - lVar3;
  if (lVar3 + lVar9 == param_2) {
    FUN_109d3a7bc(param_1,param_3,param_4);
    puVar2 = (undefined1 *)(*param_1 + lVar8);
  }
  else {
    uVar6 = (long)param_4 - (long)param_3;
    if ((ulong)param_1[2] < lVar9 + uVar6) {
      FUN_109dffce4(param_1,param_1 + 3,lVar9 + uVar6,1);
      lVar3 = *param_1;
      lVar9 = param_1[1];
    }
    puVar2 = (undefined1 *)(lVar3 + lVar8);
    lVar1 = lVar3 + lVar9;
    uVar7 = lVar9 - lVar8;
    if (uVar7 < uVar6) {
      param_1[1] = lVar9 + uVar6;
      if (lVar9 != lVar8) {
        _memcpy((lVar3 + lVar9 + uVar6) - uVar7,puVar2,uVar7);
        puVar4 = puVar2;
        puVar5 = param_3;
        do {
          param_3 = puVar5 + 1;
          *puVar4 = *puVar5;
          uVar7 = uVar7 - 1;
          puVar4 = puVar4 + 1;
          puVar5 = param_3;
        } while (uVar7 != 0);
      }
      if (param_3 != param_4) {
        _memcpy(lVar1,param_3,(long)param_4 - (long)param_3);
      }
    }
    else {
      func_0x000109d4fa64(param_1,(undefined1 *)(lVar1 - uVar6),lVar1);
      if ((undefined1 *)(lVar1 - uVar6) != puVar2) {
        _memmove(lVar1 - ((lVar9 - uVar6) - lVar8),puVar2);
      }
      if (param_4 != param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memmove_11034c660)(puVar2,param_3,uVar6);
        return puVar2;
      }
    }
  }
  return puVar2;
}



/* Entry: 109de512c; end: 109de5267;  */

void FUN_109de512c(long *param_1,long param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  long lVar3;
  long lVar4;
  code **ppcVar5;
  long lVar6;
  long lVar7;
  long *plStack_90;
  code *pcStack_88;
  long **pplStack_80;
  long lStack_78;
  long lStack_70;
  code *pcStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  code **ppcStack_48;
  
  if (*param_1 == 0) {
    *param_1 = param_2;
  }
  pcStack_88 = *(code **)(param_2 + 0x20);
  pplStack_80 = *(long ***)(param_2 + 0x10);
  lStack_78 = *(long *)(param_2 + 0x30);
  lStack_70 = *(long *)(param_2 + 0x40);
  pcStack_68 = (code *)(param_2 + 0x18);
  lStack_60 = param_2 + 8;
  lStack_58 = param_2 + 0x28;
  lStack_50 = param_2 + 0x38;
  do {
    if ((((pcStack_88 == (code *)(param_2 + 0x18)) && (pplStack_80 == (long **)(param_2 + 8))) &&
        (lStack_78 == param_2 + 0x28)) && (lStack_70 == param_2 + 0x38)) {
      lVar3 = -(ulong)(lStack_58 == param_2 + 0x28);
      lVar4 = -(ulong)(lStack_50 == param_2 + 0x38);
      lVar6 = -(ulong)(pcStack_68 == (code *)(param_2 + 0x18));
      lVar7 = -(ulong)(lStack_60 == param_2 + 8);
      auVar1[1] = ~(byte)((ulong)lVar6 >> 8);
      auVar1[0] = ~(byte)lVar6;
      auVar1[2] = ~(byte)((ulong)lVar6 >> 0x10);
      auVar1[3] = ~(byte)((ulong)lVar6 >> 0x18);
      auVar1[4] = ~(byte)lVar7;
      auVar1[5] = ~(byte)((ulong)lVar7 >> 8);
      auVar1[6] = ~(byte)((ulong)lVar7 >> 0x10);
      auVar1[7] = ~(byte)((ulong)lVar7 >> 0x18);
      auVar1[8] = ~(byte)lVar3;
      auVar1[9] = ~(byte)((ulong)lVar3 >> 8);
      auVar1[10] = ~(byte)((ulong)lVar3 >> 0x10);
      auVar1[0xb] = ~(byte)((ulong)lVar3 >> 0x18);
      auVar1[0xc] = ~(byte)lVar4;
      auVar1[0xd] = ~(byte)((ulong)lVar4 >> 8);
      auVar1[0xe] = ~(byte)((ulong)lVar4 >> 0x10);
      auVar1[0xf] = ~(byte)((ulong)lVar4 >> 0x18);
      uVar2 = NEON_umaxv(auVar1,4);
      if ((uVar2 & 1) == 0) {
        pplStack_80 = &plStack_90;
        pcStack_88 = FUN_109de6218;
        ppcStack_48 = &pcStack_88;
        plStack_90 = param_1;
        FUN_109de532c(param_2,FUN_109de6300,&ppcStack_48);
        return;
      }
    }
    ppcVar5 = &pcStack_88;
    FUN_109de60e8();
    ppcStack_48 = ppcVar5;
    FUN_109de5268(param_1 + 0xd,&ppcStack_48);
    FUN_109de5f90(&pcStack_88);
  } while( true );
}



/* Entry: 109de5268; end: 109de532b;  */

/* WARNING: Removing unreachable block (ram,0x000109d937a0) */
/* WARNING: Type propagation algorithm not settling */

undefined ********
FUN_109de5268(undefined ********param_1,undefined ********param_2,undefined ********param_3)

{
  char *pcVar1;
  undefined ********ppppppppuVar2;
  int iVar3;
  bool bVar4;
  undefined ********ppppppppuVar5;
  long *plVar6;
  undefined ********ppppppppuVar7;
  undefined ********ppppppppuVar8;
  char cVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  undefined *******pppppppuVar13;
  undefined *******pppppppuVar14;
  undefined ********ppppppppuVar15;
  undefined ********ppppppppuVar16;
  undefined *******pppppppuVar17;
  undefined ********unaff_x22;
  undefined *******pppppppuVar18;
  undefined ********ppppppppuVar19;
  undefined ********unaff_x24;
  int iVar20;
  undefined ********unaff_x25;
  ulong uVar21;
  undefined ********unaff_x26;
  char *unaff_x27;
  undefined ********ppppppppuStack_c18;
  undefined *******pppppppuStack_c10;
  ulong uStack_c08;
  undefined2 uStack_bf8;
  undefined ********ppppppppuStack_bf0;
  undefined **ppuStack_be8;
  undefined ********ppppppppuStack_be0;
  undefined ********ppppppppuStack_bd8;
  undefined ********ppppppppuStack_bd0;
  undefined ********ppppppppuStack_bc8;
  undefined ********ppppppppuStack_bc0;
  undefined ********ppppppppuStack_bb8;
  undefined ********ppppppppuStack_bb0;
  undefined ********ppppppppuStack_ba8;
  undefined1 **ppuStack_ba0;
  code *pcStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined ********ppppppppuStack_b80;
  long *plStack_b78;
  undefined *******pppppppuStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined ******ppppppuStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined1 auStack_b30 [4];
  undefined8 uStack_b2c;
  undefined4 uStack_b24;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  long lStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  long lStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  long lStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  long lStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined *******pppppppuStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined ********ppppppppuStack_a90;
  undefined ********ppppppppuStack_a88;
  ulong uStack_a80;
  byte bStack_a71;
  undefined ********ppppppppuStack_a58;
  undefined8 uStack_a50;
  long lStack_a48;
  undefined ********ppppppppuStack_a40;
  ulong uStack_a38;
  undefined2 uStack_a20;
  undefined ********ppppppppuStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined4 uStack_900;
  undefined ********ppppppppuStack_8f8;
  undefined8 uStack_8f0;
  char cStack_8e1;
  undefined2 uStack_8d8;
  undefined ********ppppppppuStack_858;
  long lStack_a0;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  pppppppuVar14 = param_1[1];
  if (pppppppuVar14 < param_1[2]) {
    pppppppuVar17 = pppppppuVar14 + 1;
    *pppppppuVar14 = (undefined ******)*param_2;
    ppppppppuVar16 = param_1;
LAB_109de5314:
    param_1[1] = pppppppuVar17;
    return ppppppppuVar16;
  }
  ppppppppuVar16 = (undefined ********)((long)pppppppuVar14 - (long)*param_1);
  uVar21 = ((long)ppppppppuVar16 >> 3) + 1;
  if (uVar21 >> 0x3d == 0) {
    uVar10 = (long)param_1[2] - (long)*param_1;
    uVar12 = (long)uVar10 >> 2;
    if (uVar12 <= uVar21) {
      uVar12 = uVar21;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar12 = 0x1fffffffffffffff;
    }
    ppppppppuVar5 = param_1;
    FUN_109de5d60();
    pcVar1 = (char *)((long)ppppppppuVar5 + (long)ppppppppuVar16);
    pppppppuVar17 = (undefined *******)(pcVar1 + 8);
    *(undefined ********)pcVar1 = *param_2;
    pppppppuVar14 = *param_1;
    pppppppuVar18 = param_1[1];
    _memcpy(pcVar1 + -((long)pppppppuVar18 - (long)pppppppuVar14));
    ppppppppuVar16 = (undefined ********)*param_1;
    *param_1 = (undefined *******)(pcVar1 + -((long)pppppppuVar18 - (long)pppppppuVar14));
    param_1[1] = pppppppuVar17;
    param_1[2] = (undefined *******)(ppppppppuVar5 + uVar12);
    if (ppppppppuVar16 != (undefined ********)0x0) {
      __ZdlPv();
    }
    goto LAB_109de5314;
  }
  ppppppppuVar5 = param_1;
  FUN_109de5d4c();
  pcStack_38 = FUN_109de532c;
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar9 = *(char *)((long)ppppppppuVar5 + 0x6f);
  ppppppppuVar2 = (undefined ********)ppppppppuVar5[0xb];
  if (-1 < (long)cVar9) {
    ppppppppuVar2 = ppppppppuVar5 + 0xb;
  }
  ppppppppuVar19 = (undefined ********)ppppppppuVar5[0xc];
  if (-1 < cVar9) {
    ppppppppuVar19 = (undefined ********)(long)cVar9;
  }
  ppppppppuVar8 = param_3;
  puStack_40 = &stack0xfffffffffffffff0;
  if (ppppppppuVar19 != (undefined ********)0x0) {
    ppppppppuStack_a58 = (undefined ********)0x0;
    uStack_a50 = 0;
    lStack_a48 = 0;
    ppppppppuStack_8f8 = ppppppppuVar5 + 0x1a;
    uStack_8d8 = 0x104;
    FUN_109e0c844(&ppppppppuStack_a88,&ppppppppuStack_8f8);
    unaff_x24 = (undefined ********)&ppppppppuStack_a88;
    ppppppppuVar16 = (undefined ********)&ppppppppuStack_a58;
    FUN_109de2f94();
    param_1 = (undefined ********)unaff_x24[10];
    unaff_x25 = ppppppppuVar5;
    if (param_1 == (undefined ********)0x0) {
      ppppppppuStack_a90 = (undefined ********)0x0;
    }
    else {
      ppppppppuStack_a40 = ppppppppuStack_a88;
      uStack_a38 = uStack_a80;
      if (-1 < (char)bStack_a71) {
        ppppppppuStack_a40 = (undefined ********)&ppppppppuStack_a88;
        uStack_a38 = (ulong)bStack_a71;
      }
      uStack_a20 = 0x105;
      ppppppppuVar16 = (undefined ********)&ppppppppuStack_a40;
      FUN_109e0c844(&ppppppppuStack_8f8);
      unaff_x26 = (undefined ********)&ppppppppuStack_8f8;
      (*(code *)param_1)();
      if (cStack_8e1 < '\0') {
        __ZdlPv(ppppppppuStack_8f8);
      }
      ppppppppuStack_a90 = unaff_x26;
      if (unaff_x26 != (undefined ********)0x0) {
        auStack_b30._0_2_ = 0x800;
        uStack_b2c = 2;
        uStack_b24 = 2;
        uStack_b18 = 0;
        uStack_b20 = 0;
        uStack_b08 = 0;
        lStack_b10 = 0;
        lStack_af8 = 0;
        uStack_b00 = 0;
        uStack_ae8 = 0;
        uStack_af0 = 0;
        uStack_ad8 = 0;
        lStack_ae0 = 0;
        lStack_ac8 = 0;
        uStack_ad0 = 0;
        uStack_ab8 = 0;
        uStack_ac0 = 0;
        pppppppuStack_aa8 = (undefined *******)0x0;
        uStack_ab0 = 0;
        uStack_a98 = 0;
        uStack_aa0 = 0;
        pppppppuVar14 = unaff_x24[6];
        param_1 = (undefined ********)0x0;
        if (pppppppuVar14 != (undefined *******)0x0) {
          ppppppppuStack_a40 = ppppppppuStack_a88;
          uStack_a38 = uStack_a80;
          if (-1 < (char)bStack_a71) {
            ppppppppuStack_a40 = (undefined ********)&ppppppppuStack_a88;
            uStack_a38 = (ulong)bStack_a71;
          }
          uStack_a20 = 0x105;
          FUN_109e0c844(&ppppppppuStack_8f8,&ppppppppuStack_a40);
          ppppppppuVar16 = (undefined ********)&ppppppppuStack_8f8;
          ppppppppuVar8 = (undefined ********)auStack_b30;
          param_1 = unaff_x26;
          (*(code *)pppppppuVar14)();
          if (cStack_8e1 < '\0') {
            __ZdlPv(ppppppppuStack_8f8);
          }
          if (param_1 != (undefined ********)0x0) {
            pppppppuVar14 = unaff_x24[0xb];
            unaff_x22 = (undefined ********)0x0;
            if (pppppppuVar14 != (undefined *******)0x0) {
              ppppppppuStack_a40 = ppppppppuStack_a88;
              uStack_a38 = uStack_a80;
              if (-1 < (char)bStack_a71) {
                ppppppppuStack_a40 = (undefined ********)&ppppppppuStack_a88;
                uStack_a38 = (ulong)bStack_a71;
              }
              uStack_a20 = 0x105;
              FUN_109e0c844(&ppppppppuStack_8f8,&ppppppppuStack_a40);
              unaff_x27 = "";
              unaff_x22 = (undefined ********)&ppppppppuStack_8f8;
              ppppppppuVar8 = (undefined ********)0x0;
              ppppppppuVar16 = (undefined ********)unaff_x27;
              (*(code *)pppppppuVar14)();
              ppppppppuVar15 = unaff_x22;
              if (cStack_8e1 < '\0') {
                ppppppppuVar15 = ppppppppuStack_8f8;
                __ZdlPv();
              }
              if (unaff_x22 != (undefined ********)0x0) {
                if ((unaff_x24[8] != (undefined *******)0x0) &&
                   ((*(code *)unaff_x24[8])(), ppppppppuVar15 != (undefined ********)0x0)) {
                  uStack_8d8 = 0x105;
                  ppppppppuStack_8f8 = (undefined ********)0x10ef12930;
                  uStack_8f0 = 0;
                  ppppppppuStack_a40 = (undefined ********)&ppppppppuStack_8f8;
                  plVar6 = (long *)0x18;
                  ppppppppuStack_b80 = ppppppppuVar15;
                  FUN_109df91e8(0x18,&ppppppppuStack_a40);
                  *plVar6 = (long)&PTR_DAT_110b5c398;
                  plVar6[1] = (long)ppppppppuVar2;
                  plVar6[2] = (long)((long)ppppppppuVar2 + (long)ppppppppuVar19);
                  uStack_b48 = 0;
                  uStack_b50 = 0;
                  uStack_b38 = 0;
                  uStack_b40 = 0;
                  uStack_b68 = 0;
                  pppppppuStack_b70 = (undefined *******)0x0;
                  ppppppuStack_b58 = (undefined ******)0x0;
                  uStack_b60 = 0;
                  plStack_b78 = plVar6;
                  FUN_109d3a3ec(&pppppppuStack_b70,&plStack_b78,0);
                  plVar6 = plStack_b78;
                  plStack_b78 = (long *)0x0;
                  if (plVar6 != (long *)0x0) {
                    (**(code **)(*plVar6 + 8))();
                  }
                  uStack_b90 = 0;
                  uStack_b88 = 0;
                  FUN_109da5964(&ppppppppuStack_8f8,&ppppppppuStack_a88,param_1,unaff_x26,unaff_x22,
                                &pppppppuStack_b70,0,1);
                  if (unaff_x24[7] == (undefined *******)0x0) {
                    unaff_x26 = (undefined ********)0x3c0;
                    __Znwm();
                    _bzero();
                    *unaff_x26 = (undefined *******)&PTR_FUN_110b58ad8;
                    unaff_x26[0x77] = (undefined *******)0x0;
                    unaff_x26[0x76] = (undefined *******)0x0;
                    _bzero(unaff_x26 + 3,0x341);
                    *(char *)(unaff_x26 + 0x6f) = '\0';
                    unaff_x26[0x6e] = (undefined *******)0x0;
                    unaff_x26[0x6d] = (undefined *******)0x0;
                    unaff_x26[0x6c] = (undefined *******)0x0;
                    FUN_109db4a08(unaff_x26,&ppppppppuStack_8f8,0,0);
                  }
                  else {
                    unaff_x26 = (undefined ********)&ppppppppuStack_8f8;
                    (*(code *)unaff_x24[7])(unaff_x26,0,0);
                  }
                  pppppppuVar14 = (undefined *******)&UNK_10f5f9f7c;
                  ppppppppuVar16 = ppppppppuVar5;
                  FUN_109d9d8c0(ppppppppuVar5,&UNK_10f5f9f7c,0xb);
                  FUN_109d9dc60();
                  unaff_x26[0x6d] = (undefined *******)ppppppppuVar16;
                  unaff_x26[0x6e] = pppppppuVar14;
                  ppppppppuVar19 = (undefined ********)&ppppppppuStack_a40;
                  ppppppppuStack_858 = unaff_x26;
                  FUN_109dde824(&ppppppppuStack_a40,&ppppppppuStack_8f8);
                  ppppppppuStack_a40 = (undefined ********)&PTR_FUN_110b5b0c0;
                  uStack_920 = 0;
                  uStack_928 = 0;
                  uStack_908 = 0;
                  uStack_918 = 0x1000000000;
                  uStack_910 = 0;
                  uStack_900 = 0;
                  ppppppppuStack_930 = ppppppppuVar5;
                  if (unaff_x24[0x1a] != (undefined *******)0x0) {
                    (*(code *)unaff_x24[0x1a])(&ppppppppuStack_a40);
                  }
                  ppppppppuVar5 = &pppppppuStack_b70;
                  ppppppppuVar16 = (undefined ********)&ppppppppuStack_8f8;
                  ppppppppuVar8 = (undefined ********)&ppppppppuStack_a40;
                  FUN_109db854c();
                  ppppppppuVar15 = unaff_x24 + 0xe;
                  if ((*ppppppppuVar15 != (undefined *******)0x0) &&
                     (unaff_x24 = unaff_x22, ppppppppuVar16 = ppppppppuVar5,
                     ppppppppuVar8 = ppppppppuStack_b80, (*(code *)*ppppppppuVar15)(),
                     unaff_x24 != (undefined ********)0x0)) {
                    (*(code *)(*ppppppppuVar5)[9])(ppppppppuVar5,0);
                    ppppppppuVar5[1] = (undefined *******)unaff_x24;
                    (*(code *)(*unaff_x24)[2])(unaff_x24,ppppppppuVar5);
                    ppppppppuVar16 = (undefined ********)0x0;
                    ppppppppuVar8 = (undefined ********)0x0;
                    ppppppppuVar15 = ppppppppuVar5;
                    (*(code *)(*ppppppppuVar5)[10])();
                    if (((ulong)ppppppppuVar15 & 1) == 0) {
                      ppppppppuVar16 = (undefined ********)&ppppppppuStack_a40;
                      (*(code *)param_2)(param_3);
                    }
                    (*(code *)(*unaff_x24)[1])(unaff_x24);
                  }
                  (*(code *)(*ppppppppuVar5)[1])(ppppppppuVar5);
                  ppppppppuStack_a40 = (undefined ********)&PTR_FUN_110b5b0c0;
                  FUN_109de5e48(&uStack_910);
                  FUN_109de5ed4(&uStack_928);
                  FUN_109dde938(&ppppppppuStack_a40);
                  (*(code *)(*unaff_x26)[1])(unaff_x26);
                  FUN_109da6244(&ppppppppuStack_8f8);
                  ppppppppuStack_8f8 = (undefined ********)&ppppppuStack_b58;
                  func_0x000104c607c8(&ppppppppuStack_8f8);
                  ppppppppuStack_8f8 = &pppppppuStack_b70;
                  FUN_109d3a718(&ppppppppuStack_8f8);
                  __ZdlPv(ppppppppuStack_b80);
                  unaff_x27 = (char *)&PTR_FUN_110b5b0c0;
                }
                (*(code *)(*unaff_x22)[1])(unaff_x22);
              }
            }
            (*(code *)(*param_1)[1])(param_1);
          }
        }
        ppppppppuStack_8f8 = &pppppppuStack_aa8;
        func_0x000104c607c8(&ppppppppuStack_8f8);
        if (lStack_ac8 < 0) {
          __ZdlPv(uStack_ad8);
        }
        if (lStack_ae0 < 0) {
          __ZdlPv(uStack_af0);
        }
        if (lStack_af8 < 0) {
          __ZdlPv(uStack_b08);
        }
        unaff_x25 = ppppppppuVar5;
        if (lStack_b10 < 0) {
          __ZdlPv(uStack_b20);
        }
      }
    }
    ppppppppuVar5 = (undefined ********)&ppppppppuStack_a90;
    FUN_109de5f44();
    param_2 = ppppppppuVar16;
    if ((char)bStack_a71 < '\0') {
      ppppppppuVar5 = ppppppppuStack_a88;
      __ZdlPv();
      param_2 = ppppppppuVar16;
    }
    ppppppppuVar16 = param_3;
    if (lStack_a48 < 0) {
      ppppppppuVar5 = ppppppppuStack_a58;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return ppppppppuVar5;
  }
  ___stack_chk_fail();
  (*(code *)(*unaff_x25)[1])(unaff_x25);
  func_0x000109de5d94(&ppppppppuStack_a40);
  (*(code *)(*unaff_x26)[1])(unaff_x26);
  FUN_109da6244(&ppppppppuStack_8f8);
  FUN_109d3a460(&pppppppuStack_b70);
  __ZdlPv(ppppppppuStack_b80);
  (*(code *)(*unaff_x22)[1])(unaff_x22);
  (*(code *)(*param_1)[1])(param_1);
  func_0x000109de5dd0(auStack_b30);
  FUN_109de5f44(&ppppppppuStack_a90);
  if ((char)bStack_a71 < '\0') {
    __ZdlPv(ppppppppuStack_a88);
  }
  if (lStack_a48 < 0) {
    __ZdlPv(ppppppppuStack_a58);
  }
  ppppppppuVar7 = ppppppppuVar5;
  __Unwind_Resume();
  pcStack_b98 = FUN_109de5a38;
  ppppppppuVar15 = (undefined ********)((ulong)ppppppppuVar8 & 0xfffffffffffffff8);
  ppppppppuStack_bc0 = unaff_x22;
  ppppppppuStack_bb8 = ppppppppuVar16;
  ppppppppuStack_bb0 = ppppppppuVar5;
  ppppppppuStack_ba8 = param_1;
  ppuStack_ba0 = &puStack_40;
  if (((uint)ppppppppuVar8 >> 2 & 1) != 0) {
    pppppppuVar14 = ppppppppuVar15[1];
    ppppppppuVar16 = (undefined ********)*ppppppppuVar15;
    if (-1 < (char)*(byte *)((long)ppppppppuVar15 + 0x17)) {
      pppppppuVar14 = (undefined *******)(ulong)*(byte *)((long)ppppppppuVar15 + 0x17);
      ppppppppuVar16 = ppppppppuVar15;
    }
    pcStack_b98 = FUN_109de5a38;
    pppppppuVar17 = param_2[4];
    pppppppuVar18 = (undefined *******)((long)param_2[3] - (long)pppppppuVar17);
    if ((undefined *******)((long)param_2[3] - (long)pppppppuVar17) < pppppppuVar14) {
      do {
        while (param_2[2] == (undefined *******)0x0) {
          if (*(int *)(param_2 + 7) == 0) {
            if (param_2[6] != (undefined *******)0x0) {
              FUN_109e057dc();
            }
            (*(code *)(*param_2)[9])(param_2,ppppppppuVar16,pppppppuVar14);
            return param_2;
          }
          FUN_109e0538c(param_2);
          pppppppuVar17 = param_2[4];
          pppppppuVar18 = (undefined *******)((long)param_2[3] - (long)pppppppuVar17);
          if (pppppppuVar14 <= pppppppuVar18) goto LAB_109e05640;
        }
        if (pppppppuVar17 == param_2[2]) {
          if (param_2[6] != (undefined *******)0x0) {
            FUN_109e057dc();
          }
          uVar21 = 0;
          if (pppppppuVar18 != (undefined *******)0x0) {
            uVar21 = (ulong)pppppppuVar14 / (ulong)pppppppuVar18;
          }
          pppppppuVar18 = (undefined *******)(uVar21 * (long)pppppppuVar18);
          pppppppuVar14 = (undefined *******)((long)pppppppuVar14 - (long)pppppppuVar18);
          (*(code *)(*param_2)[9])(param_2,ppppppppuVar16,pppppppuVar18);
          pppppppuVar17 = param_2[4];
          pppppppuVar13 = (undefined *******)((long)param_2[3] - (long)pppppppuVar17);
          if (pppppppuVar14 <= pppppppuVar13) {
            ppppppppuVar16 = (undefined ********)((long)ppppppppuVar16 + (long)pppppppuVar18);
            break;
          }
        }
        else {
          FUN_109e05740(param_2,ppppppppuVar16,pppppppuVar18);
          FUN_109e05520(param_2);
          pppppppuVar14 = (undefined *******)((long)pppppppuVar14 - (long)pppppppuVar18);
          pppppppuVar17 = param_2[4];
          pppppppuVar13 = (undefined *******)((long)param_2[3] - (long)pppppppuVar17);
        }
        ppppppppuVar16 = (undefined ********)((long)ppppppppuVar16 + (long)pppppppuVar18);
        pppppppuVar18 = pppppppuVar13;
      } while (pppppppuVar13 < pppppppuVar14);
    }
LAB_109e05640:
    FUN_109e05740(param_2,ppppppppuVar16,pppppppuVar14);
    return param_2;
  }
  if (((ulong)ppppppppuVar15[4] & 0x300) == 0x100) {
    pppppppuVar14 = param_2[4];
    if ((ulong)((long)param_2[3] - (long)pppppppuVar14) < 6) {
      FUN_109e0560c(param_2,&UNK_10f601635,6);
    }
    else {
      *(undefined2 *)((long)pppppppuVar14 + 4) = 0x5f70;
      *(undefined4 *)pppppppuVar14 = 0x6d695f5f;
      param_2[4] = (undefined *******)((long)param_2[4] + 6);
    }
  }
  ppppppppuVar16 = ppppppppuVar7 + 0x10;
  bVar4 = ((ulong)ppppppppuVar15[4] & 0xf) == 8;
  pppppppuVar14 = ppppppppuVar15[5];
  ppppppppuStack_bf0 = ppppppppuVar2;
  ppuStack_be8 = (undefined **)unaff_x27;
  ppppppppuStack_be0 = unaff_x26;
  ppppppppuStack_bd8 = unaff_x25;
  ppppppppuStack_bd0 = unaff_x24;
  ppppppppuStack_bc8 = ppppppppuVar19;
  if ((*(byte *)((long)ppppppppuVar15 + 0x17) >> 4 & 1) != 0) {
    ppppppppuVar16 = ppppppppuVar15;
    func_0x000109da271c();
    ppppppppuVar5 = ppppppppuVar16 + 2;
    pppppppuVar17 = *ppppppppuVar16;
    uVar11 = *(uint *)((long)pppppppuVar14 + 0x11c);
    FUN_109d89110();
    if (ppppppppuVar15 == (undefined ********)0x0) {
      ppppppppuVar15 = (undefined ********)0x0;
    }
    else if (*(char *)(ppppppppuVar15 + 2) != '\0') {
      ppppppppuVar15 = (undefined ********)0x0;
    }
    cVar9 = (char)(0x5f005f0000 >> (((ulong)uVar11 & 7) << 3));
    ppppppppuStack_c18 = ppppppppuVar5;
    pppppppuStack_c10 = pppppppuVar17;
    if (pppppppuVar17 == (undefined *******)0x0) {
      iVar20 = *(int *)((long)pppppppuVar14 + 0x11c);
joined_r0x000109d93908:
      if ((ppppppppuVar15 != (undefined ********)0x0) &&
         ((uVar11 = *(ushort *)((long)ppppppppuVar15 + 0x12) >> 4 & 0x3ff, iVar20 == 4 ||
          (uVar11 == 0x50)))) {
        if (uVar11 == 0x41) {
          cVar9 = '@';
        }
        else if (uVar11 == 0x50) {
          cVar9 = '\0';
        }
        uStack_bf8 = 0x105;
        ppppppppuVar16 = (undefined ********)&ppppppppuStack_c18;
        ppppppppuVar5 = param_2;
        FUN_109d935d0(param_2,ppppppppuVar16,bVar4,pppppppuVar14 + 0x20,(int)cVar9);
        if (uVar11 == 0x50) {
          pppppppuVar17 = param_2[4];
          if (pppppppuVar17 < param_2[3]) {
            param_2[4] = (undefined *******)((long)pppppppuVar17 + 1);
            *(undefined1 *)pppppppuVar17 = 0x40;
          }
          else {
            ppppppppuVar16 = (undefined ********)0x40;
            ppppppppuVar5 = param_2;
            FUN_109e05570(param_2);
          }
        }
        else {
          if (0x10 < uVar11 - 0x40) {
            return ppppppppuVar5;
          }
          if ((1 << (ulong)(uVar11 - 0x40 & 0x1f) & 0x10003U) == 0) {
            return ppppppppuVar5;
          }
        }
        if ((0xff < *(uint *)(ppppppppuVar15[3] + 1)) &&
           (iVar20 = *(int *)((long)ppppppppuVar15[3] + 0xc), iVar20 != 1)) {
          if (iVar20 != 2) {
            return ppppppppuVar5;
          }
          ppppppppuVar5 = ppppppppuVar15;
          FUN_109d93b48();
          if ((int)ppppppppuVar5 == 0) {
            return ppppppppuVar5;
          }
        }
        uVar11 = *(uint *)((long)pppppppuVar14[0x3d] + 4);
        FUN_109d51754();
        if (ppppppppuVar15 == ppppppppuVar16) {
          iVar20 = 0;
        }
        else {
          iVar20 = 0;
          uVar21 = (ulong)uVar11 + 7 >> 3;
          do {
            ppppppppuVar5 = ppppppppuVar15;
            FUN_109d8199c();
            if (((ulong)ppppppppuVar5 & 1) == 0) {
              ppppppppuVar5 = ppppppppuVar15;
              FUN_109d817f8();
              if ((int)ppppppppuVar5 == 0) {
                pppppppuVar17 = *ppppppppuVar15;
                ppppppppuVar5 = (undefined ********)(pppppppuVar14 + 0x20);
                FUN_109d2feb0(ppppppppuVar5);
                if (((ulong)pppppppuVar17 & 1) != 0) {
                  FUN_109e0486c(&UNK_10f602449);
                }
              }
              else {
                ppppppppuVar5 = ppppppppuVar15;
                FUN_109d81870(ppppppppuVar15,pppppppuVar14 + 0x20);
              }
              iVar3 = 0;
              if (uVar21 != 0) {
                iVar3 = (int)((ulong)((long)ppppppppuVar5 + (uVar21 - 1)) / uVar21);
              }
              iVar20 = iVar20 + iVar3 * (int)uVar21;
            }
            ppppppppuVar15 = ppppppppuVar15 + 5;
          } while (ppppppppuVar15 != ppppppppuVar16);
        }
        pppppppuVar14 = param_2[4];
        if (pppppppuVar14 < param_2[3]) {
          param_2[4] = (undefined *******)((long)pppppppuVar14 + 1);
          *(undefined1 *)pppppppuVar14 = 0x40;
        }
        else {
          FUN_109e05570(param_2,0x40);
        }
        FUN_109df9d4c(param_2,iVar20,0,0,0);
        return param_2;
      }
    }
    else if ((*(char *)ppppppppuVar5 != '\x01') &&
            ((iVar20 = *(int *)((long)pppppppuVar14 + 0x11c), iVar20 - 5U < 0xfffffffe ||
             (*(char *)ppppppppuVar5 != '?')))) goto joined_r0x000109d93908;
    uStack_bf8 = 0x105;
    uVar11 = (uint)cVar9;
    goto LAB_109d9393c;
  }
  pppppppuVar17 = *ppppppppuVar16;
  FUN_109d94298(pppppppuVar17,*(undefined4 *)(ppppppppuVar7 + 0x12),ppppppppuVar15,
                &ppppppppuStack_c18);
  if (((ulong)pppppppuVar17 & 1) == 0) {
    uVar11 = *(uint *)(ppppppppuVar7 + 0x12);
    if (*(uint *)(ppppppppuVar7 + 0x11) * 4 + 4 < uVar11 * 3) {
      if ((uVar11 + ~*(uint *)(ppppppppuVar7 + 0x11)) - *(int *)((long)ppppppppuVar7 + 0x8c) <=
          uVar11 >> 3) goto LAB_109d93b24;
    }
    else {
      uVar11 = uVar11 << 1;
LAB_109d93b24:
      FUN_109d94324(ppppppppuVar16,uVar11);
      FUN_109d94298(*ppppppppuVar16,*(undefined4 *)(ppppppppuVar7 + 0x12),ppppppppuVar15,
                    &ppppppppuStack_c18);
    }
    *(int *)(ppppppppuVar7 + 0x11) = *(int *)(ppppppppuVar7 + 0x11) + 1;
    if (*ppppppppuStack_c18 != (undefined *******)0xfffffffffffff000) {
      *(int *)((long)ppppppppuVar7 + 0x8c) = *(int *)((long)ppppppppuVar7 + 0x8c) + -1;
    }
    *ppppppppuStack_c18 = (undefined *******)ppppppppuVar15;
    *(undefined4 *)(ppppppppuStack_c18 + 1) = 0;
LAB_109d93884:
    uVar11 = *(uint *)(ppppppppuVar7 + 0x11);
    *(uint *)(ppppppppuStack_c18 + 1) = uVar11;
  }
  else {
    uVar11 = *(uint *)(ppppppppuStack_c18 + 1);
    if (uVar11 == 0) goto LAB_109d93884;
  }
  uStack_c08 = (ulong)uVar11;
  ppppppppuStack_c18 = (undefined ********)&UNK_10f5f9efa;
  uStack_bf8 = 0x803;
  uVar11 = (uint)(0x5f005f0000 >> (((ulong)*(uint *)((long)pppppppuVar14 + 0x11c) & 7) << 3)) & 0xff
  ;
LAB_109d9393c:
  FUN_109d935d0(param_2,&ppppppppuStack_c18,bVar4,pppppppuVar14 + 0x20,uVar11);
  return param_2;
}



/* Entry: 109de532c; end: 109de5a37;  */

/* WARNING: Removing unreachable block (ram,0x000109d937a0) */
/* WARNING: Type propagation algorithm not settling */

undefined ********
FUN_109de532c(undefined ********param_1,undefined ********param_2,undefined ********param_3)

{
  int iVar1;
  bool bVar2;
  undefined *******pppppppuVar3;
  undefined ********ppppppppuVar4;
  long *plVar5;
  undefined ********ppppppppuVar6;
  undefined ********ppppppppuVar7;
  undefined ********ppppppppuVar8;
  char cVar9;
  uint uVar10;
  undefined *******pppppppuVar11;
  undefined ********unaff_x19;
  undefined *******pppppppuVar12;
  undefined ********ppppppppuVar13;
  undefined ********unaff_x21;
  undefined ********unaff_x22;
  undefined *******pppppppuVar14;
  undefined ********unaff_x24;
  int iVar15;
  undefined ********unaff_x25;
  ulong uVar16;
  undefined ********unaff_x26;
  char *unaff_x27;
  undefined ********ppppppppuStack_be8;
  undefined *******pppppppuStack_be0;
  ulong uStack_bd8;
  undefined2 uStack_bc8;
  undefined ********ppppppppuStack_bc0;
  undefined **ppuStack_bb8;
  undefined ********ppppppppuStack_bb0;
  undefined ********ppppppppuStack_ba8;
  undefined ********ppppppppuStack_ba0;
  undefined ********ppppppppuStack_b98;
  undefined ********ppppppppuStack_b90;
  undefined ********ppppppppuStack_b88;
  undefined ********ppppppppuStack_b80;
  undefined ********ppppppppuStack_b78;
  undefined1 *puStack_b70;
  code *pcStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined ********ppppppppuStack_b50;
  long *plStack_b48;
  undefined *******pppppppuStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined ******ppppppuStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined1 auStack_b00 [4];
  undefined8 uStack_afc;
  undefined4 uStack_af4;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  long lStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  long lStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  long lStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  long lStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined *******pppppppuStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined ********ppppppppuStack_a60;
  undefined ********ppppppppuStack_a58;
  ulong uStack_a50;
  byte bStack_a41;
  undefined ********ppppppppuStack_a28;
  undefined8 uStack_a20;
  long lStack_a18;
  undefined ********ppppppppuStack_a10;
  ulong uStack_a08;
  undefined2 uStack_9f0;
  undefined ********ppppppppuStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined4 uStack_8d0;
  undefined ********ppppppppuStack_8c8;
  undefined8 uStack_8c0;
  char cStack_8b1;
  undefined2 uStack_8a8;
  undefined ********ppppppppuStack_828;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar9 = *(char *)((long)param_1 + 0x6f);
  ppppppppuVar7 = (undefined ********)param_1[0xb];
  if (-1 < (long)cVar9) {
    ppppppppuVar7 = param_1 + 0xb;
  }
  ppppppppuVar6 = (undefined ********)param_1[0xc];
  if (-1 < cVar9) {
    ppppppppuVar6 = (undefined ********)(long)cVar9;
  }
  ppppppppuVar8 = param_3;
  if (ppppppppuVar6 != (undefined ********)0x0) {
    ppppppppuStack_a28 = (undefined ********)0x0;
    uStack_a20 = 0;
    lStack_a18 = 0;
    ppppppppuStack_8c8 = param_1 + 0x1a;
    uStack_8a8 = 0x104;
    FUN_109e0c844(&ppppppppuStack_a58,&ppppppppuStack_8c8);
    unaff_x24 = (undefined ********)&ppppppppuStack_a58;
    ppppppppuVar13 = (undefined ********)&ppppppppuStack_a28;
    FUN_109de2f94();
    unaff_x19 = (undefined ********)unaff_x24[10];
    unaff_x25 = param_1;
    if (unaff_x19 == (undefined ********)0x0) {
      ppppppppuStack_a60 = (undefined ********)0x0;
    }
    else {
      ppppppppuStack_a10 = ppppppppuStack_a58;
      uStack_a08 = uStack_a50;
      if (-1 < (char)bStack_a41) {
        ppppppppuStack_a10 = (undefined ********)&ppppppppuStack_a58;
        uStack_a08 = (ulong)bStack_a41;
      }
      uStack_9f0 = 0x105;
      ppppppppuVar13 = (undefined ********)&ppppppppuStack_a10;
      FUN_109e0c844(&ppppppppuStack_8c8);
      unaff_x26 = (undefined ********)&ppppppppuStack_8c8;
      (*(code *)unaff_x19)();
      if (cStack_8b1 < '\0') {
        __ZdlPv(ppppppppuStack_8c8);
      }
      ppppppppuStack_a60 = unaff_x26;
      if (unaff_x26 != (undefined ********)0x0) {
        auStack_b00._0_2_ = 0x800;
        uStack_afc = 2;
        uStack_af4 = 2;
        uStack_ae8 = 0;
        uStack_af0 = 0;
        uStack_ad8 = 0;
        lStack_ae0 = 0;
        lStack_ac8 = 0;
        uStack_ad0 = 0;
        uStack_ab8 = 0;
        uStack_ac0 = 0;
        uStack_aa8 = 0;
        lStack_ab0 = 0;
        lStack_a98 = 0;
        uStack_aa0 = 0;
        uStack_a88 = 0;
        uStack_a90 = 0;
        pppppppuStack_a78 = (undefined *******)0x0;
        uStack_a80 = 0;
        uStack_a68 = 0;
        uStack_a70 = 0;
        pppppppuVar12 = unaff_x24[6];
        unaff_x19 = (undefined ********)0x0;
        if (pppppppuVar12 != (undefined *******)0x0) {
          ppppppppuStack_a10 = ppppppppuStack_a58;
          uStack_a08 = uStack_a50;
          if (-1 < (char)bStack_a41) {
            ppppppppuStack_a10 = (undefined ********)&ppppppppuStack_a58;
            uStack_a08 = (ulong)bStack_a41;
          }
          uStack_9f0 = 0x105;
          FUN_109e0c844(&ppppppppuStack_8c8,&ppppppppuStack_a10);
          ppppppppuVar13 = (undefined ********)&ppppppppuStack_8c8;
          ppppppppuVar8 = (undefined ********)auStack_b00;
          unaff_x19 = unaff_x26;
          (*(code *)pppppppuVar12)();
          if (cStack_8b1 < '\0') {
            __ZdlPv(ppppppppuStack_8c8);
          }
          if (unaff_x19 != (undefined ********)0x0) {
            pppppppuVar12 = unaff_x24[0xb];
            unaff_x22 = (undefined ********)0x0;
            if (pppppppuVar12 != (undefined *******)0x0) {
              ppppppppuStack_a10 = ppppppppuStack_a58;
              uStack_a08 = uStack_a50;
              if (-1 < (char)bStack_a41) {
                ppppppppuStack_a10 = (undefined ********)&ppppppppuStack_a58;
                uStack_a08 = (ulong)bStack_a41;
              }
              uStack_9f0 = 0x105;
              FUN_109e0c844(&ppppppppuStack_8c8,&ppppppppuStack_a10);
              unaff_x27 = "";
              unaff_x22 = (undefined ********)&ppppppppuStack_8c8;
              ppppppppuVar8 = (undefined ********)0x0;
              ppppppppuVar13 = (undefined ********)unaff_x27;
              (*(code *)pppppppuVar12)();
              ppppppppuVar4 = unaff_x22;
              if (cStack_8b1 < '\0') {
                ppppppppuVar4 = ppppppppuStack_8c8;
                __ZdlPv();
              }
              if (unaff_x22 != (undefined ********)0x0) {
                if ((unaff_x24[8] != (undefined *******)0x0) &&
                   ((*(code *)unaff_x24[8])(), ppppppppuVar4 != (undefined ********)0x0)) {
                  uStack_8a8 = 0x105;
                  ppppppppuStack_8c8 = (undefined ********)0x10ef12930;
                  uStack_8c0 = 0;
                  ppppppppuStack_a10 = (undefined ********)&ppppppppuStack_8c8;
                  plVar5 = (long *)0x18;
                  ppppppppuStack_b50 = ppppppppuVar4;
                  FUN_109df91e8(0x18,&ppppppppuStack_a10);
                  *plVar5 = (long)&PTR_DAT_110b5c398;
                  plVar5[1] = (long)ppppppppuVar7;
                  plVar5[2] = (long)((long)ppppppppuVar7 + (long)ppppppppuVar6);
                  uStack_b18 = 0;
                  uStack_b20 = 0;
                  uStack_b08 = 0;
                  uStack_b10 = 0;
                  uStack_b38 = 0;
                  pppppppuStack_b40 = (undefined *******)0x0;
                  ppppppuStack_b28 = (undefined ******)0x0;
                  uStack_b30 = 0;
                  plStack_b48 = plVar5;
                  FUN_109d3a3ec(&pppppppuStack_b40,&plStack_b48,0);
                  plVar5 = plStack_b48;
                  plStack_b48 = (long *)0x0;
                  if (plVar5 != (long *)0x0) {
                    (**(code **)(*plVar5 + 8))();
                  }
                  uStack_b60 = 0;
                  uStack_b58 = 0;
                  FUN_109da5964(&ppppppppuStack_8c8,&ppppppppuStack_a58,unaff_x19,unaff_x26,
                                unaff_x22,&pppppppuStack_b40,0,1);
                  if (unaff_x24[7] == (undefined *******)0x0) {
                    unaff_x26 = (undefined ********)0x3c0;
                    __Znwm();
                    _bzero();
                    *unaff_x26 = (undefined *******)&PTR_FUN_110b58ad8;
                    unaff_x26[0x77] = (undefined *******)0x0;
                    unaff_x26[0x76] = (undefined *******)0x0;
                    _bzero(unaff_x26 + 3,0x341);
                    *(undefined1 *)(unaff_x26 + 0x6f) = 0;
                    unaff_x26[0x6e] = (undefined *******)0x0;
                    unaff_x26[0x6d] = (undefined *******)0x0;
                    unaff_x26[0x6c] = (undefined *******)0x0;
                    FUN_109db4a08(unaff_x26,&ppppppppuStack_8c8,0,0);
                  }
                  else {
                    unaff_x26 = (undefined ********)&ppppppppuStack_8c8;
                    (*(code *)unaff_x24[7])(unaff_x26,0,0);
                  }
                  pppppppuVar12 = (undefined *******)&UNK_10f5f9f7c;
                  ppppppppuVar6 = param_1;
                  FUN_109d9d8c0(param_1,&UNK_10f5f9f7c,0xb);
                  FUN_109d9dc60();
                  unaff_x26[0x6d] = (undefined *******)ppppppppuVar6;
                  unaff_x26[0x6e] = pppppppuVar12;
                  ppppppppuVar6 = (undefined ********)&ppppppppuStack_a10;
                  ppppppppuStack_828 = unaff_x26;
                  FUN_109dde824(&ppppppppuStack_a10,&ppppppppuStack_8c8);
                  ppppppppuStack_a10 = (undefined ********)&PTR_FUN_110b5b0c0;
                  uStack_8f0 = 0;
                  uStack_8f8 = 0;
                  uStack_8d8 = 0;
                  uStack_8e8 = 0x1000000000;
                  uStack_8e0 = 0;
                  uStack_8d0 = 0;
                  ppppppppuStack_900 = param_1;
                  if (unaff_x24[0x1a] != (undefined *******)0x0) {
                    (*(code *)unaff_x24[0x1a])(&ppppppppuStack_a10);
                  }
                  param_1 = &pppppppuStack_b40;
                  ppppppppuVar13 = (undefined ********)&ppppppppuStack_8c8;
                  ppppppppuVar8 = (undefined ********)&ppppppppuStack_a10;
                  FUN_109db854c();
                  ppppppppuVar4 = unaff_x24 + 0xe;
                  if ((*ppppppppuVar4 != (undefined *******)0x0) &&
                     (unaff_x24 = unaff_x22, ppppppppuVar13 = param_1,
                     ppppppppuVar8 = ppppppppuStack_b50, (*(code *)*ppppppppuVar4)(),
                     unaff_x24 != (undefined ********)0x0)) {
                    (*(code *)(*param_1)[9])(param_1,0);
                    param_1[1] = (undefined *******)unaff_x24;
                    (*(code *)(*unaff_x24)[2])(unaff_x24,param_1);
                    ppppppppuVar13 = (undefined ********)0x0;
                    ppppppppuVar8 = (undefined ********)0x0;
                    ppppppppuVar4 = param_1;
                    (*(code *)(*param_1)[10])();
                    if (((ulong)ppppppppuVar4 & 1) == 0) {
                      ppppppppuVar13 = (undefined ********)&ppppppppuStack_a10;
                      (*(code *)param_2)(param_3);
                    }
                    (*(code *)(*unaff_x24)[1])(unaff_x24);
                  }
                  (*(code *)(*param_1)[1])(param_1);
                  ppppppppuStack_a10 = (undefined ********)&PTR_FUN_110b5b0c0;
                  FUN_109de5e48(&uStack_8e0);
                  FUN_109de5ed4(&uStack_8f8);
                  FUN_109dde938(&ppppppppuStack_a10);
                  (*(code *)(*unaff_x26)[1])(unaff_x26);
                  FUN_109da6244(&ppppppppuStack_8c8);
                  ppppppppuStack_8c8 = (undefined ********)&ppppppuStack_b28;
                  func_0x000104c607c8(&ppppppppuStack_8c8);
                  ppppppppuStack_8c8 = &pppppppuStack_b40;
                  FUN_109d3a718(&ppppppppuStack_8c8);
                  __ZdlPv(ppppppppuStack_b50);
                  unaff_x27 = (char *)&PTR_FUN_110b5b0c0;
                }
                (*(code *)(*unaff_x22)[1])(unaff_x22);
              }
            }
            (*(code *)(*unaff_x19)[1])(unaff_x19);
          }
        }
        ppppppppuStack_8c8 = &pppppppuStack_a78;
        func_0x000104c607c8(&ppppppppuStack_8c8);
        if (lStack_a98 < 0) {
          __ZdlPv(uStack_aa8);
        }
        if (lStack_ab0 < 0) {
          __ZdlPv(uStack_ac0);
        }
        if (lStack_ac8 < 0) {
          __ZdlPv(uStack_ad8);
        }
        unaff_x25 = param_1;
        if (lStack_ae0 < 0) {
          __ZdlPv(uStack_af0);
        }
      }
    }
    param_1 = (undefined ********)&ppppppppuStack_a60;
    FUN_109de5f44();
    param_2 = ppppppppuVar13;
    if ((char)bStack_a41 < '\0') {
      param_1 = ppppppppuStack_a58;
      __ZdlPv();
      param_2 = ppppppppuVar13;
    }
    unaff_x21 = param_3;
    if (lStack_a18 < 0) {
      param_1 = ppppppppuStack_a28;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  (*(code *)(*unaff_x25)[1])(unaff_x25);
  func_0x000109de5d94(&ppppppppuStack_a10);
  (*(code *)(*unaff_x26)[1])(unaff_x26);
  FUN_109da6244(&ppppppppuStack_8c8);
  FUN_109d3a460(&pppppppuStack_b40);
  __ZdlPv(ppppppppuStack_b50);
  (*(code *)(*unaff_x22)[1])(unaff_x22);
  (*(code *)(*unaff_x19)[1])(unaff_x19);
  func_0x000109de5dd0(auStack_b00);
  FUN_109de5f44(&ppppppppuStack_a60);
  if ((char)bStack_a41 < '\0') {
    __ZdlPv(ppppppppuStack_a58);
  }
  if (lStack_a18 < 0) {
    __ZdlPv(ppppppppuStack_a28);
  }
  ppppppppuVar4 = param_1;
  __Unwind_Resume();
  pcStack_b68 = FUN_109de5a38;
  ppppppppuVar13 = (undefined ********)((ulong)ppppppppuVar8 & 0xfffffffffffffff8);
  ppppppppuStack_b90 = unaff_x22;
  ppppppppuStack_b88 = unaff_x21;
  ppppppppuStack_b80 = param_1;
  ppppppppuStack_b78 = unaff_x19;
  puStack_b70 = &stack0xfffffffffffffff0;
  if (((uint)ppppppppuVar8 >> 2 & 1) != 0) {
    pppppppuVar12 = ppppppppuVar13[1];
    ppppppppuVar7 = (undefined ********)*ppppppppuVar13;
    if (-1 < (char)*(byte *)((long)ppppppppuVar13 + 0x17)) {
      pppppppuVar12 = (undefined *******)(ulong)*(byte *)((long)ppppppppuVar13 + 0x17);
      ppppppppuVar7 = ppppppppuVar13;
    }
    pcStack_b68 = FUN_109de5a38;
    pppppppuVar3 = param_2[4];
    pppppppuVar14 = (undefined *******)((long)param_2[3] - (long)pppppppuVar3);
    if ((undefined *******)((long)param_2[3] - (long)pppppppuVar3) < pppppppuVar12) {
      do {
        while (param_2[2] == (undefined *******)0x0) {
          if (*(int *)(param_2 + 7) == 0) {
            if (param_2[6] != (undefined *******)0x0) {
              FUN_109e057dc();
            }
            (*(code *)(*param_2)[9])(param_2,ppppppppuVar7,pppppppuVar12);
            return param_2;
          }
          FUN_109e0538c(param_2);
          pppppppuVar3 = param_2[4];
          pppppppuVar14 = (undefined *******)((long)param_2[3] - (long)pppppppuVar3);
          if (pppppppuVar12 <= pppppppuVar14) goto LAB_109e05640;
        }
        if (pppppppuVar3 == param_2[2]) {
          if (param_2[6] != (undefined *******)0x0) {
            FUN_109e057dc();
          }
          uVar16 = 0;
          if (pppppppuVar14 != (undefined *******)0x0) {
            uVar16 = (ulong)pppppppuVar12 / (ulong)pppppppuVar14;
          }
          pppppppuVar14 = (undefined *******)(uVar16 * (long)pppppppuVar14);
          pppppppuVar12 = (undefined *******)((long)pppppppuVar12 - (long)pppppppuVar14);
          (*(code *)(*param_2)[9])(param_2,ppppppppuVar7,pppppppuVar14);
          pppppppuVar3 = param_2[4];
          pppppppuVar11 = (undefined *******)((long)param_2[3] - (long)pppppppuVar3);
          if (pppppppuVar12 <= pppppppuVar11) {
            ppppppppuVar7 = (undefined ********)((long)ppppppppuVar7 + (long)pppppppuVar14);
            break;
          }
        }
        else {
          FUN_109e05740(param_2,ppppppppuVar7,pppppppuVar14);
          FUN_109e05520(param_2);
          pppppppuVar12 = (undefined *******)((long)pppppppuVar12 - (long)pppppppuVar14);
          pppppppuVar3 = param_2[4];
          pppppppuVar11 = (undefined *******)((long)param_2[3] - (long)pppppppuVar3);
        }
        ppppppppuVar7 = (undefined ********)((long)ppppppppuVar7 + (long)pppppppuVar14);
        pppppppuVar14 = pppppppuVar11;
      } while (pppppppuVar11 < pppppppuVar12);
    }
LAB_109e05640:
    FUN_109e05740(param_2,ppppppppuVar7,pppppppuVar12);
    return param_2;
  }
  if (((ulong)ppppppppuVar13[4] & 0x300) == 0x100) {
    pppppppuVar12 = param_2[4];
    if ((ulong)((long)param_2[3] - (long)pppppppuVar12) < 6) {
      FUN_109e0560c(param_2,&UNK_10f601635,6);
    }
    else {
      *(undefined2 *)((long)pppppppuVar12 + 4) = 0x5f70;
      *(undefined4 *)pppppppuVar12 = 0x6d695f5f;
      param_2[4] = (undefined *******)((long)param_2[4] + 6);
    }
  }
  ppppppppuVar8 = ppppppppuVar4 + 0x10;
  bVar2 = ((ulong)ppppppppuVar13[4] & 0xf) == 8;
  pppppppuVar12 = ppppppppuVar13[5];
  ppppppppuStack_bc0 = ppppppppuVar7;
  ppuStack_bb8 = (undefined **)unaff_x27;
  ppppppppuStack_bb0 = unaff_x26;
  ppppppppuStack_ba8 = unaff_x25;
  ppppppppuStack_ba0 = unaff_x24;
  ppppppppuStack_b98 = ppppppppuVar6;
  if ((*(byte *)((long)ppppppppuVar13 + 0x17) >> 4 & 1) != 0) {
    ppppppppuVar7 = ppppppppuVar13;
    func_0x000109da271c();
    ppppppppuVar6 = ppppppppuVar7 + 2;
    pppppppuVar3 = *ppppppppuVar7;
    uVar10 = *(uint *)((long)pppppppuVar12 + 0x11c);
    FUN_109d89110();
    if (ppppppppuVar13 == (undefined ********)0x0) {
      ppppppppuVar13 = (undefined ********)0x0;
    }
    else if (*(char *)(ppppppppuVar13 + 2) != '\0') {
      ppppppppuVar13 = (undefined ********)0x0;
    }
    cVar9 = (char)(0x5f005f0000 >> (((ulong)uVar10 & 7) << 3));
    ppppppppuStack_be8 = ppppppppuVar6;
    pppppppuStack_be0 = pppppppuVar3;
    if (pppppppuVar3 == (undefined *******)0x0) {
      iVar15 = *(int *)((long)pppppppuVar12 + 0x11c);
joined_r0x000109d93908:
      if ((ppppppppuVar13 != (undefined ********)0x0) &&
         ((uVar10 = *(ushort *)((long)ppppppppuVar13 + 0x12) >> 4 & 0x3ff, iVar15 == 4 ||
          (uVar10 == 0x50)))) {
        if (uVar10 == 0x41) {
          cVar9 = '@';
        }
        else if (uVar10 == 0x50) {
          cVar9 = '\0';
        }
        uStack_bc8 = 0x105;
        ppppppppuVar7 = (undefined ********)&ppppppppuStack_be8;
        ppppppppuVar6 = param_2;
        FUN_109d935d0(param_2,ppppppppuVar7,bVar2,pppppppuVar12 + 0x20,(int)cVar9);
        if (uVar10 == 0x50) {
          pppppppuVar3 = param_2[4];
          if (pppppppuVar3 < param_2[3]) {
            param_2[4] = (undefined *******)((long)pppppppuVar3 + 1);
            *(undefined1 *)pppppppuVar3 = 0x40;
          }
          else {
            ppppppppuVar7 = (undefined ********)0x40;
            ppppppppuVar6 = param_2;
            FUN_109e05570(param_2);
          }
        }
        else {
          if (0x10 < uVar10 - 0x40) {
            return ppppppppuVar6;
          }
          if ((1 << (ulong)(uVar10 - 0x40 & 0x1f) & 0x10003U) == 0) {
            return ppppppppuVar6;
          }
        }
        if ((0xff < *(uint *)(ppppppppuVar13[3] + 1)) &&
           (iVar15 = *(int *)((long)ppppppppuVar13[3] + 0xc), iVar15 != 1)) {
          if (iVar15 != 2) {
            return ppppppppuVar6;
          }
          ppppppppuVar6 = ppppppppuVar13;
          FUN_109d93b48();
          if ((int)ppppppppuVar6 == 0) {
            return ppppppppuVar6;
          }
        }
        uVar10 = *(uint *)((long)pppppppuVar12[0x3d] + 4);
        FUN_109d51754();
        if (ppppppppuVar13 == ppppppppuVar7) {
          iVar15 = 0;
        }
        else {
          iVar15 = 0;
          uVar16 = (ulong)uVar10 + 7 >> 3;
          do {
            ppppppppuVar6 = ppppppppuVar13;
            FUN_109d8199c();
            if (((ulong)ppppppppuVar6 & 1) == 0) {
              ppppppppuVar6 = ppppppppuVar13;
              FUN_109d817f8();
              if ((int)ppppppppuVar6 == 0) {
                pppppppuVar3 = *ppppppppuVar13;
                ppppppppuVar6 = (undefined ********)(pppppppuVar12 + 0x20);
                FUN_109d2feb0(ppppppppuVar6);
                if (((ulong)pppppppuVar3 & 1) != 0) {
                  FUN_109e0486c(&UNK_10f602449);
                }
              }
              else {
                ppppppppuVar6 = ppppppppuVar13;
                FUN_109d81870(ppppppppuVar13,pppppppuVar12 + 0x20);
              }
              iVar1 = 0;
              if (uVar16 != 0) {
                iVar1 = (int)((ulong)((long)ppppppppuVar6 + (uVar16 - 1)) / uVar16);
              }
              iVar15 = iVar15 + iVar1 * (int)uVar16;
            }
            ppppppppuVar13 = ppppppppuVar13 + 5;
          } while (ppppppppuVar13 != ppppppppuVar7);
        }
        pppppppuVar12 = param_2[4];
        if (pppppppuVar12 < param_2[3]) {
          param_2[4] = (undefined *******)((long)pppppppuVar12 + 1);
          *(undefined1 *)pppppppuVar12 = 0x40;
        }
        else {
          FUN_109e05570(param_2,0x40);
        }
        FUN_109df9d4c(param_2,iVar15,0,0,0);
        return param_2;
      }
    }
    else if ((*(char *)ppppppppuVar6 != '\x01') &&
            ((iVar15 = *(int *)((long)pppppppuVar12 + 0x11c), iVar15 - 5U < 0xfffffffe ||
             (*(char *)ppppppppuVar6 != '?')))) goto joined_r0x000109d93908;
    uStack_bc8 = 0x105;
    uVar10 = (uint)cVar9;
    goto LAB_109d9393c;
  }
  pppppppuVar3 = *ppppppppuVar8;
  FUN_109d94298(pppppppuVar3,*(undefined4 *)(ppppppppuVar4 + 0x12),ppppppppuVar13,
                &ppppppppuStack_be8);
  if (((ulong)pppppppuVar3 & 1) == 0) {
    uVar10 = *(uint *)(ppppppppuVar4 + 0x12);
    if (*(uint *)(ppppppppuVar4 + 0x11) * 4 + 4 < uVar10 * 3) {
      if ((uVar10 + ~*(uint *)(ppppppppuVar4 + 0x11)) - *(int *)((long)ppppppppuVar4 + 0x8c) <=
          uVar10 >> 3) goto LAB_109d93b24;
    }
    else {
      uVar10 = uVar10 << 1;
LAB_109d93b24:
      FUN_109d94324(ppppppppuVar8,uVar10);
      FUN_109d94298(*ppppppppuVar8,*(undefined4 *)(ppppppppuVar4 + 0x12),ppppppppuVar13,
                    &ppppppppuStack_be8);
    }
    *(int *)(ppppppppuVar4 + 0x11) = *(int *)(ppppppppuVar4 + 0x11) + 1;
    if (*ppppppppuStack_be8 != (undefined *******)0xfffffffffffff000) {
      *(int *)((long)ppppppppuVar4 + 0x8c) = *(int *)((long)ppppppppuVar4 + 0x8c) + -1;
    }
    *ppppppppuStack_be8 = (undefined *******)ppppppppuVar13;
    *(undefined4 *)(ppppppppuStack_be8 + 1) = 0;
LAB_109d93884:
    uVar10 = *(uint *)(ppppppppuVar4 + 0x11);
    *(uint *)(ppppppppuStack_be8 + 1) = uVar10;
  }
  else {
    uVar10 = *(uint *)(ppppppppuStack_be8 + 1);
    if (uVar10 == 0) goto LAB_109d93884;
  }
  uStack_bd8 = (ulong)uVar10;
  ppppppppuStack_be8 = (undefined ********)&UNK_10f5f9efa;
  uStack_bc8 = 0x803;
  uVar10 = (uint)(0x5f005f0000 >> (((ulong)*(uint *)((long)pppppppuVar12 + 0x11c) & 7) << 3)) & 0xff
  ;
LAB_109d9393c:
  FUN_109d935d0(param_2,&ppppppppuStack_be8,bVar2,pppppppuVar12 + 0x20,uVar10);
  return param_2;
}



/* Entry: 109de5a38; end: 109de5d4b;  */

/* WARNING: Removing unreachable block (ram,0x000109d937a0) */
/* WARNING: Type propagation algorithm not settling */

ulong ******* FUN_109de5a38(long param_1,ulong *******param_2,ulong param_3)

{
  ulong *puVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  ulong *******pppppppuVar5;
  ulong *******pppppppuVar6;
  char cVar7;
  uint uVar8;
  ulong ******ppppppuVar9;
  ulong *******pppppppuVar10;
  ulong ******ppppppuVar11;
  ulong ******ppppppuVar12;
  ulong ******ppppppuVar13;
  int iVar14;
  ulong *******pppppppuStack_88;
  ulong ******ppppppuStack_80;
  ulong uStack_78;
  undefined2 uStack_68;
  
  pppppppuVar10 = (ulong *******)(param_3 & 0xfffffffffffffff8);
  if (((uint)param_3 >> 2 & 1) != 0) {
    ppppppuVar13 = pppppppuVar10[1];
    pppppppuVar6 = (ulong *******)*pppppppuVar10;
    if (-1 < (char)*(byte *)((long)pppppppuVar10 + 0x17)) {
      ppppppuVar13 = (ulong ******)(ulong)*(byte *)((long)pppppppuVar10 + 0x17);
      pppppppuVar6 = pppppppuVar10;
    }
    ppppppuVar12 = param_2[4];
    ppppppuVar11 = (ulong ******)((long)param_2[3] - (long)ppppppuVar12);
    if ((ulong ******)((long)param_2[3] - (long)ppppppuVar12) < ppppppuVar13) {
      do {
        while (param_2[2] == (ulong ******)0x0) {
          if (*(int *)(param_2 + 7) == 0) {
            if (param_2[6] != (ulong ******)0x0) {
              FUN_109e057dc();
            }
            (*(code *)(*param_2)[9])(param_2,pppppppuVar6,ppppppuVar13);
            return param_2;
          }
          FUN_109e0538c(param_2);
          ppppppuVar12 = param_2[4];
          ppppppuVar11 = (ulong ******)((long)param_2[3] - (long)ppppppuVar12);
          if (ppppppuVar13 <= ppppppuVar11) goto LAB_109e05640;
        }
        if (ppppppuVar12 == param_2[2]) {
          if (param_2[6] != (ulong ******)0x0) {
            FUN_109e057dc();
          }
          uVar4 = 0;
          if (ppppppuVar11 != (ulong ******)0x0) {
            uVar4 = (ulong)ppppppuVar13 / (ulong)ppppppuVar11;
          }
          ppppppuVar11 = (ulong ******)(uVar4 * (long)ppppppuVar11);
          ppppppuVar13 = (ulong ******)((long)ppppppuVar13 - (long)ppppppuVar11);
          (*(code *)(*param_2)[9])(param_2,pppppppuVar6,ppppppuVar11);
          ppppppuVar12 = param_2[4];
          ppppppuVar9 = (ulong ******)((long)param_2[3] - (long)ppppppuVar12);
          if (ppppppuVar13 <= ppppppuVar9) {
            pppppppuVar6 = (ulong *******)((long)pppppppuVar6 + (long)ppppppuVar11);
            break;
          }
        }
        else {
          FUN_109e05740(param_2,pppppppuVar6,ppppppuVar11);
          FUN_109e05520(param_2);
          ppppppuVar13 = (ulong ******)((long)ppppppuVar13 - (long)ppppppuVar11);
          ppppppuVar12 = param_2[4];
          ppppppuVar9 = (ulong ******)((long)param_2[3] - (long)ppppppuVar12);
        }
        pppppppuVar6 = (ulong *******)((long)pppppppuVar6 + (long)ppppppuVar11);
        ppppppuVar11 = ppppppuVar9;
      } while (ppppppuVar9 < ppppppuVar13);
    }
LAB_109e05640:
    FUN_109e05740(param_2,pppppppuVar6,ppppppuVar13);
    return param_2;
  }
  if (((ulong)pppppppuVar10[4] & 0x300) == 0x100) {
    ppppppuVar13 = param_2[4];
    if ((ulong)((long)param_2[3] - (long)ppppppuVar13) < 6) {
      FUN_109e0560c(param_2,&UNK_10f601635,6);
    }
    else {
      *(undefined2 *)((long)ppppppuVar13 + 4) = 0x5f70;
      *(undefined4 *)ppppppuVar13 = 0x6d695f5f;
      param_2[4] = (ulong ******)((long)param_2[4] + 6);
    }
  }
  puVar1 = (ulong *)(param_1 + 0x80);
  bVar3 = ((ulong)pppppppuVar10[4] & 0xf) == 8;
  ppppppuVar13 = pppppppuVar10[5];
  if ((*(byte *)((long)pppppppuVar10 + 0x17) >> 4 & 1) != 0) {
    pppppppuVar6 = pppppppuVar10;
    func_0x000109da271c();
    pppppppuVar5 = pppppppuVar6 + 2;
    ppppppuVar12 = *pppppppuVar6;
    uVar8 = *(uint *)((long)ppppppuVar13 + 0x11c);
    FUN_109d89110();
    if (pppppppuVar10 == (ulong *******)0x0) {
      pppppppuVar10 = (ulong *******)0x0;
    }
    else if (*(char *)(pppppppuVar10 + 2) != '\0') {
      pppppppuVar10 = (ulong *******)0x0;
    }
    cVar7 = (char)(0x5f005f0000 >> (((ulong)uVar8 & 7) << 3));
    pppppppuStack_88 = pppppppuVar5;
    ppppppuStack_80 = ppppppuVar12;
    if (ppppppuVar12 == (ulong ******)0x0) {
      iVar14 = *(int *)((long)ppppppuVar13 + 0x11c);
joined_r0x000109d93908:
      if ((pppppppuVar10 != (ulong *******)0x0) &&
         ((uVar8 = *(ushort *)((long)pppppppuVar10 + 0x12) >> 4 & 0x3ff, iVar14 == 4 ||
          (uVar8 == 0x50)))) {
        if (uVar8 == 0x41) {
          cVar7 = '@';
        }
        else if (uVar8 == 0x50) {
          cVar7 = '\0';
        }
        uStack_68 = 0x105;
        pppppppuVar6 = (ulong *******)&pppppppuStack_88;
        pppppppuVar5 = param_2;
        FUN_109d935d0(param_2,pppppppuVar6,bVar3,ppppppuVar13 + 0x20,(int)cVar7);
        if (uVar8 == 0x50) {
          ppppppuVar12 = param_2[4];
          if (ppppppuVar12 < param_2[3]) {
            param_2[4] = (ulong ******)((long)ppppppuVar12 + 1);
            *(undefined1 *)ppppppuVar12 = 0x40;
          }
          else {
            pppppppuVar6 = (ulong *******)0x40;
            pppppppuVar5 = param_2;
            FUN_109e05570(param_2);
          }
        }
        else {
          if (0x10 < uVar8 - 0x40) {
            return pppppppuVar5;
          }
          if ((1 << (ulong)(uVar8 - 0x40 & 0x1f) & 0x10003U) == 0) {
            return pppppppuVar5;
          }
        }
        if ((0xff < *(uint *)(pppppppuVar10[3] + 1)) &&
           (iVar14 = *(int *)((long)pppppppuVar10[3] + 0xc), iVar14 != 1)) {
          if (iVar14 != 2) {
            return pppppppuVar5;
          }
          pppppppuVar5 = pppppppuVar10;
          FUN_109d93b48();
          if ((int)pppppppuVar5 == 0) {
            return pppppppuVar5;
          }
        }
        uVar8 = *(uint *)((long)ppppppuVar13[0x3d] + 4);
        FUN_109d51754();
        if (pppppppuVar10 == pppppppuVar6) {
          iVar14 = 0;
        }
        else {
          iVar14 = 0;
          uVar4 = (ulong)uVar8 + 7 >> 3;
          do {
            pppppppuVar5 = pppppppuVar10;
            FUN_109d8199c();
            if (((ulong)pppppppuVar5 & 1) == 0) {
              pppppppuVar5 = pppppppuVar10;
              FUN_109d817f8();
              if ((int)pppppppuVar5 == 0) {
                ppppppuVar12 = *pppppppuVar10;
                pppppppuVar5 = (ulong *******)(ppppppuVar13 + 0x20);
                FUN_109d2feb0(pppppppuVar5);
                if (((ulong)ppppppuVar12 & 1) != 0) {
                  FUN_109e0486c(&UNK_10f602449);
                }
              }
              else {
                pppppppuVar5 = pppppppuVar10;
                FUN_109d81870(pppppppuVar10,ppppppuVar13 + 0x20);
              }
              iVar2 = 0;
              if (uVar4 != 0) {
                iVar2 = (int)(((uVar4 - 1) + (long)pppppppuVar5) / uVar4);
              }
              iVar14 = iVar14 + iVar2 * (int)uVar4;
            }
            pppppppuVar10 = pppppppuVar10 + 5;
          } while (pppppppuVar10 != pppppppuVar6);
        }
        ppppppuVar13 = param_2[4];
        if (ppppppuVar13 < param_2[3]) {
          param_2[4] = (ulong ******)((long)ppppppuVar13 + 1);
          *(undefined1 *)ppppppuVar13 = 0x40;
        }
        else {
          FUN_109e05570(param_2,0x40);
        }
        FUN_109df9d4c(param_2,iVar14,0,0,0);
        return param_2;
      }
    }
    else if ((*(char *)pppppppuVar5 != '\x01') &&
            ((iVar14 = *(int *)((long)ppppppuVar13 + 0x11c), iVar14 - 5U < 0xfffffffe ||
             (*(char *)pppppppuVar5 != '?')))) goto joined_r0x000109d93908;
    uStack_68 = 0x105;
    uVar8 = (uint)cVar7;
    goto LAB_109d9393c;
  }
  uVar4 = *puVar1;
  FUN_109d94298(uVar4,*(undefined4 *)(param_1 + 0x90),pppppppuVar10,&pppppppuStack_88);
  if ((uVar4 & 1) == 0) {
    uVar8 = *(uint *)(param_1 + 0x90);
    if (*(uint *)(param_1 + 0x88) * 4 + 4 < uVar8 * 3) {
      if ((uVar8 + ~*(uint *)(param_1 + 0x88)) - *(int *)(param_1 + 0x8c) <= uVar8 >> 3)
      goto LAB_109d93b24;
    }
    else {
      uVar8 = uVar8 << 1;
LAB_109d93b24:
      FUN_109d94324(puVar1,uVar8);
      FUN_109d94298(*puVar1,*(undefined4 *)(param_1 + 0x90),pppppppuVar10,&pppppppuStack_88);
    }
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
    if (*pppppppuStack_88 != (ulong ******)0xfffffffffffff000) {
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + -1;
    }
    *pppppppuStack_88 = (ulong ******)pppppppuVar10;
    *(undefined4 *)(pppppppuStack_88 + 1) = 0;
LAB_109d93884:
    uVar8 = *(uint *)(param_1 + 0x88);
    *(uint *)(pppppppuStack_88 + 1) = uVar8;
  }
  else {
    uVar8 = *(uint *)(pppppppuStack_88 + 1);
    if (uVar8 == 0) goto LAB_109d93884;
  }
  uStack_78 = (ulong)uVar8;
  pppppppuStack_88 = (ulong *******)&UNK_10f5f9efa;
  uStack_68 = 0x803;
  uVar8 = (uint)(0x5f005f0000 >> (((ulong)*(uint *)((long)ppppppuVar13 + 0x11c) & 7) << 3)) & 0xff;
LAB_109d9393c:
  FUN_109d935d0(param_2,&pppppppuStack_88,bVar3,ppppppuVar13 + 0x20,uVar8);
  return param_2;
}



/* Entry: 109de5d4c; end: 109de5d5f;  */

undefined1  [16] FUN_109de5d4c(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 *puStack_58;
  
  puVar2 = (undefined8 *)&UNK_10f60163c;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    lVar3 = param_2 << 3;
    __Znwm(lVar3);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000104c4f740();
  *puVar2 = &PTR_FUN_110b5b0c0;
  FUN_109de5e48(puVar2 + 0x26);
  FUN_109de5ed4(puVar2 + 0x23);
  *puVar2 = &PTR_FUN_110b597c0;
  if ((undefined8 *)puVar2[0xe] != puVar2 + 0x10) {
    _free();
  }
  uVar4 = 8;
  __ZdlPvSt11align_val_t(puVar2[0xb],8);
  puStack_58 = puVar2 + 6;
  FUN_109de1bec(&puStack_58);
  puStack_58 = puVar2 + 3;
  FUN_109dadd20(&puStack_58);
  plVar1 = (long *)puVar2[2];
  puVar2[2] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = puVar2;
  return auVar5;
}



/* Entry: 109de5d60; end: 109de5e47;  */

undefined1  [16] FUN_109de5d60(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 *puStack_48;
  
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000104c4f740();
  *param_1 = &PTR_FUN_110b5b0c0;
  FUN_109de5e48(param_1 + 0x26);
  FUN_109de5ed4(param_1 + 0x23);
  *param_1 = &PTR_FUN_110b597c0;
  if ((undefined8 *)param_1[0xe] != param_1 + 0x10) {
    _free();
  }
  uVar3 = 8;
  __ZdlPvSt11align_val_t(param_1[0xb],8);
  puStack_48 = param_1 + 6;
  FUN_109de1bec(&puStack_48);
  puStack_48 = param_1 + 3;
  FUN_109dadd20(&puStack_48);
  plVar1 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 109de5e48; end: 109de5e7b;  */

undefined8 * FUN_109de5e48(undefined8 *param_1)

{
  FUN_109de5e7c();
  __ZdlPvSt11align_val_t(*param_1,8);
  return param_1;
}



/* Entry: 109de5e7c; end: 109de5ed3;  */

void FUN_109de5e7c(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  if (*(uint *)(param_1 + 2) != 0) {
    lVar1 = (ulong)*(uint *)(param_1 + 2) << 5;
    plVar2 = (long *)(*param_1 + 0x10);
    do {
      if (((plVar2[-2] | 0x1000U) != 0xfffffffffffff000) && (plVar2[-1] != 0)) {
        *plVar2 = plVar2[-1];
        __ZdlPv();
      }
      plVar2 = plVar2 + 4;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 109de5ed4; end: 109de5f43;  */

long * FUN_109de5ed4(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if ((*(int *)((long)param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 1), uVar1 != 0)) {
    lVar3 = 0;
    do {
      lVar2 = *(long *)(*param_1 + lVar3);
      if (lVar2 != -8 && lVar2 != 0) {
        __ZdlPvSt11align_val_t(lVar2,8);
      }
      lVar3 = lVar3 + 8;
    } while ((ulong)uVar1 * 8 - lVar3 != 0);
  }
  _free(*param_1);
  return param_1;
}



/* Entry: 109de5f44; end: 109de5f8f;  */

void FUN_109de5f44(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPvSt11align_val_t(*(undefined8 *)(lVar1 + 0xb8),4);
    __ZdlPvSt11align_val_t(*(undefined8 *)(lVar1 + 0xa0),4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109de5f90; end: 109de6057;  */

long * FUN_109de5f90(long param_1)

{
  bool bVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  code *pcStack_78;
  ulong auStack_70 [8];
  
  lVar4 = 0;
  auStack_70[7] = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_70[0] = 0;
  auStack_70[2] = 0;
  auStack_70[4] = 0;
  pcStack_78 = FUN_109de6058;
  auStack_70[1] = 0x109de607c;
  auStack_70[3] = 0x109de60a0;
  auStack_70[5] = 0x109de60c4;
  auStack_70[6] = 0;
  do {
    pcVar3 = *(code **)((long)auStack_70 + lVar4 + -8);
    plVar2 = (long *)(param_1 + ((long)*(ulong *)((long)auStack_70 + lVar4) >> 1));
    if ((*(ulong *)((long)auStack_70 + lVar4) & 1) != 0) {
      pcVar3 = *(code **)(*plVar2 + ((ulong)pcVar3 & 0xffffffff));
    }
    (*pcVar3)();
  } while ((((ulong)plVar2 & 1) == 0) && (bVar1 = lVar4 != 0x30, lVar4 = lVar4 + 0x10, bVar1));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_70[7]) {
    return plVar2;
  }
  ___stack_chk_fail();
  lVar4 = *plVar2;
  if (lVar4 != plVar2[4]) {
    *plVar2 = *(long *)(lVar4 + 8);
  }
  return (long *)(ulong)(lVar4 != plVar2[4]);
}



/* Entry: 109de6058; end: 109de60e7;  */

bool FUN_109de6058(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != param_1[4]) {
    *param_1 = *(long *)(lVar1 + 8);
  }
  return lVar1 != param_1[4];
}



/* Entry: 109de60e8; end: 109de61a7;  */

long * FUN_109de60e8(long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  code *pcStack_78;
  ulong auStack_70 [8];
  
  lVar4 = 0;
  auStack_70[7] = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_70[0] = 0;
  auStack_70[2] = 0;
  auStack_70[4] = 0;
  pcStack_78 = FUN_109de61a8;
  auStack_70[1] = 0x109de61c4;
  auStack_70[3] = 0x109de61e0;
  auStack_70[5] = 0x109de61fc;
  auStack_70[6] = 0;
  do {
    pcVar3 = *(code **)((long)auStack_70 + lVar4 + -8);
    plVar2 = (long *)(param_1 + ((long)*(ulong *)((long)auStack_70 + lVar4) >> 1));
    if ((*(ulong *)((long)auStack_70 + lVar4) & 1) != 0) {
      pcVar3 = *(code **)(*plVar2 + ((ulong)pcVar3 & 0xffffffff));
    }
    (*pcVar3)();
    lVar4 = lVar4 + 0x10;
  } while (plVar2 == (long *)0x0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_70[7]) {
    return plVar2;
  }
  ___stack_chk_fail();
  lVar4 = *plVar2;
  plVar1 = (long *)0x0;
  if (lVar4 != plVar2[4] && lVar4 != 0) {
    plVar1 = (long *)(lVar4 + -0x38);
  }
  return plVar1;
}



/* Entry: 109de61a8; end: 109de6217;  */

long FUN_109de61a8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = 0;
  if (lVar2 != param_1[4] && lVar2 != 0) {
    lVar1 = lVar2 + -0x38;
  }
  return lVar1;
}



/* Entry: 109de6218; end: 109de62ff;  */

void FUN_109de6218(long *param_1,undefined8 param_2,ulong param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 **ppuVar4;
  long lVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined1 **ppuVar10;
  long lVar11;
  undefined1 *puStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  ppuVar4 = &puStack_70;
  ppuVar10 = &puStack_70;
  lVar11 = *param_1;
  puVar3 = (undefined8 *)(lVar11 + 8);
  lVar5 = 0x20;
  FUN_109d34148(puVar3,0x20,3);
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000104c4f6b8();
    FUN_109de6694(lVar5);
    plVar7 = *(long **)(lVar5 + 0x118);
    uVar2 = *(uint *)(lVar5 + 0x120);
    plVar9 = plVar7;
    if (uVar2 != 0) {
      for (; *plVar9 == 0 || *plVar9 == -8; plVar9 = plVar9 + 1) {
      }
    }
    if (plVar9 != plVar7 + uVar2) {
      puVar8 = (undefined8 *)*plVar9;
      do {
        if (*(int *)(puVar8 + 1) - 1U < 6) {
          uVar6 = *(undefined4 *)(&UNK_10e05aa70 + (ulong)(*(int *)(puVar8 + 1) - 1U) * 4);
        }
        else {
          uVar6 = 0x800;
        }
        (**(code **)*puVar3)(((undefined8 *)*puVar3)[1],puVar8 + 2,*puVar8,uVar6);
        do {
          plVar9 = plVar9 + 1;
          puVar8 = (undefined8 *)*plVar9;
        } while (puVar8 == (undefined8 *)0x0 || puVar8 == (undefined8 *)0xfffffffffffffff8);
      } while (plVar9 != plVar7 + uVar2);
    }
    return;
  }
  if (param_3 < 0x17) {
    uStack_60 = CONCAT17((char)param_3,(undefined7)uStack_60);
    if (param_3 == 0) goto LAB_109de62b4;
  }
  else {
    puVar1 = (undefined1 *)0x19;
    if ((param_3 | 7) != 0x17) {
      puVar1 = (undefined1 *)((param_3 | 7) + 1);
    }
    ppuVar4 = (undefined1 **)puVar1;
    __Znwm();
    uStack_60 = (ulong)puVar1 | 0x8000000000000000;
    puStack_70 = (undefined1 *)ppuVar4;
    uStack_68 = param_3;
  }
  _memmove(ppuVar4,param_2,param_3);
  ppuVar10 = ppuVar4;
LAB_109de62b4:
  *(undefined1 *)((long)ppuVar10 + param_3) = 0;
  puVar3[1] = uStack_68;
  *puVar3 = puStack_70;
  puVar3[2] = uStack_60;
  *(undefined4 *)(puVar3 + 3) = param_4;
  uStack_58 = (ulong)puVar3 | 4;
  FUN_109de5268(lVar11 + 0x68,&uStack_58);
  return;
}



/* Entry: 109de6300; end: 109de63bb;  */

void FUN_109de6300(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  FUN_109de6694(param_2);
  plVar3 = *(long **)(param_2 + 0x118);
  uVar1 = *(uint *)(param_2 + 0x120);
  plVar5 = plVar3;
  if (uVar1 != 0) {
    for (; *plVar5 == 0 || *plVar5 == -8; plVar5 = plVar5 + 1) {
    }
  }
  if (plVar5 != plVar3 + uVar1) {
    puVar4 = (undefined8 *)*plVar5;
    do {
      if (*(int *)(puVar4 + 1) - 1U < 6) {
        uVar2 = *(undefined4 *)(&UNK_10e05aa70 + (ulong)(*(int *)(puVar4 + 1) - 1U) * 4);
      }
      else {
        uVar2 = 0x800;
      }
      (**(code **)*param_1)(((undefined8 *)*param_1)[1],puVar4 + 2,*puVar4,uVar2);
      do {
        plVar5 = plVar5 + 1;
        puVar4 = (undefined8 *)*plVar5;
      } while (puVar4 == (undefined8 *)0x0 || puVar4 == (undefined8 *)0xfffffffffffffff8);
    } while (plVar5 != plVar3 + uVar1);
  }
  return;
}



/* Entry: 109de63bc; end: 109de646b;  */

void FUN_109de63bc(long param_1,byte *param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((*param_2 >> 2 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
    uVar4 = 0;
  }
  else {
    puVar3 = *(undefined8 **)(param_2 + -8) + 2;
    uVar4 = **(undefined8 **)(param_2 + -8);
  }
  plVar2 = (long *)(param_1 + 0x118);
  FUN_109de6e9c(plVar2,puVar3,uVar4);
  uVar1 = *(uint *)(*plVar2 + 8);
  if ((uVar1 < 7) && ((0x6fU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    *(undefined4 *)(*plVar2 + 8) = *(undefined4 *)(&UNK_10e05aaa0 + (ulong)uVar1 * 4);
  }
  return;
}



/* Entry: 109de646c; end: 109de6473;  */

void FUN_109de646c(long param_1,byte *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((*param_2 >> 2 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
    uVar4 = 0;
  }
  else {
    puVar3 = *(undefined8 **)(param_2 + -8) + 2;
    uVar4 = **(undefined8 **)(param_2 + -8);
  }
  plVar2 = (long *)(param_1 + 0x118);
  FUN_109de6e9c(plVar2,puVar3,uVar4);
  iVar1 = *(int *)(*plVar2 + 8);
  if (iVar1 == 5 || iVar1 == 0) {
    *(undefined4 *)(*plVar2 + 8) = 5;
  }
  return;
}



/* Entry: 109de6474; end: 109de64a3;  */

void FUN_109de6474(long param_1,byte *param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_109ddf680(param_1,param_2,0);
  if ((*param_2 >> 2 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
    uVar4 = 0;
  }
  else {
    puVar3 = *(undefined8 **)(param_2 + -8) + 2;
    uVar4 = **(undefined8 **)(param_2 + -8);
  }
  plVar2 = (long *)(param_1 + 0x118);
  FUN_109de6e9c(plVar2,puVar3,uVar4);
  uVar1 = *(uint *)(*plVar2 + 8);
  if ((uVar1 < 7) && ((0x6fU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    *(undefined4 *)(*plVar2 + 8) = *(undefined4 *)(&UNK_10e05aaa0 + (ulong)uVar1 * 4);
  }
  return;
}



/* Entry: 109de64a4; end: 109de65ab;  */

void FUN_109de64a4(long param_1,ulong *param_2,ulong param_3)

{
  long *plVar1;
  
  FUN_109de63bc();
  FUN_109de1658(param_1,param_3);
  param_2[3] = param_3;
  *param_2 = *param_2 & 7;
  param_2[1] = param_2[1] & 0xffffffffffffe3ff | 0x800;
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109de1644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 109de65ac; end: 109de65b7;  */

void FUN_109de65ac(long param_1,undefined8 param_2,byte *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((*param_3 >> 2 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
    uVar4 = 0;
  }
  else {
    puVar3 = *(undefined8 **)(param_3 + -8) + 2;
    uVar4 = **(undefined8 **)(param_3 + -8);
  }
  plVar2 = (long *)(param_1 + 0x118);
  FUN_109de6e9c(plVar2,puVar3,uVar4);
  uVar1 = *(uint *)(*plVar2 + 8);
  if ((uVar1 < 7) && ((0x6fU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    *(undefined4 *)(*plVar2 + 8) = *(undefined4 *)(&UNK_10e05aaa0 + (ulong)uVar1 * 4);
  }
  return;
}



/* Entry: 109de65b8; end: 109de6693;  */

void FUN_109de65b8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x130);
  uStack_38 = param_3;
  uStack_30 = param_4;
  FUN_109de6f8c(uVar2,*(undefined4 *)(param_1 + 0x140),param_2,&plStack_28);
  if ((uVar2 & 1) != 0) goto LAB_109de6650;
  uVar1 = *(uint *)(param_1 + 0x140);
  if (*(uint *)(param_1 + 0x138) * 4 + 4 < uVar1 * 3) {
    if ((uVar1 + ~*(uint *)(param_1 + 0x138)) - *(int *)(param_1 + 0x13c) <= uVar1 >> 3)
    goto LAB_109de6670;
  }
  else {
    uVar1 = uVar1 << 1;
LAB_109de6670:
    FUN_109de7018(param_1 + 0x130,uVar1);
    FUN_109de6f8c(*(undefined8 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x140),param_2,
                  &plStack_28);
  }
  *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
  if (*plStack_28 != -0x1000) {
    *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + -1;
  }
  *plStack_28 = param_2;
  plStack_28[1] = 0;
  plStack_28[2] = 0;
  plStack_28[3] = 0;
LAB_109de6650:
  func_0x000109d37d8c(plStack_28 + 1,&uStack_38);
  return;
}



/* Entry: 109de6694; end: 109de6e4b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109de6694(long *param_1)

{
  char *pcVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  undefined1 *puVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  char *******pppppppcVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  code **ppcVar16;
  undefined8 uVar17;
  code *pcVar18;
  long lVar19;
  ulong *puVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  int iVar25;
  byte *pbVar26;
  ulong *puVar27;
  long lVar28;
  char *****pppppcStack_238;
  undefined8 uStack_230;
  char *pcStack_228;
  undefined2 uStack_218;
  char *****pppppcStack_210;
  undefined8 uStack_208;
  char *pcStack_200;
  long lStack_1f8;
  char *******pppppppcStack_1f0;
  code **ppcStack_1e8;
  char *******pppppppcStack_1d8;
  code **ppcStack_1d0;
  char *pcStack_1c8;
  long lStack_1c0;
  char *******pppppppcStack_1b8;
  code **ppcStack_1b0;
  char *pcStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  ulong auStack_160 [2];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined1 auStack_b8 [64];
  long lStack_78;
  
  lVar28 = 0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_180 = 0;
  uStack_178 = 0;
  uStack_170 = 0x1000000000;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  puStack_d0 = auStack_b8;
  uStack_c0 = 0x40;
  lStack_c8 = 0;
  lVar22 = param_1[0x22];
  pppppppcStack_1d8 = *(char ********)(lVar22 + 0x20);
  ppcStack_1d0 = *(code ***)(lVar22 + 0x10);
  pcStack_1c8 = *(char **)(lVar22 + 0x30);
  lStack_1c0 = *(long *)(lVar22 + 0x40);
  pppppppcStack_1b8 = (char *******)(lVar22 + 0x18);
  ppcStack_1b0 = (code **)(lVar22 + 8);
  pcStack_1a8 = (char *)(lVar22 + 0x28);
  lStack_1a0 = lVar22 + 0x38;
  while ((((pppppppcStack_1d8 != (char *******)(lVar22 + 0x18) ||
           (ppcStack_1d0 != (code **)(lVar22 + 8))) || (pcStack_1c8 != (char *)(lVar22 + 0x28))) ||
         ((lStack_1c0 != lVar22 + 0x38 ||
          (sVar3 = -(ushort)(pcStack_1a8 == (char *)(lVar22 + 0x28)),
          sVar4 = -(ushort)(lStack_1a0 == lVar22 + 0x38),
          lVar24 = -(ulong)(ppcStack_1b0 == (code **)(lVar22 + 8)),
          uVar5 = NEON_uminv(CONCAT17((char)((ushort)sVar4 >> 8),
                                      CONCAT16((char)sVar4,
                                               CONCAT15((char)((ushort)sVar3 >> 8),
                                                        CONCAT14((char)sVar3,
                                                                 CONCAT13((char)((ulong)lVar24 >> 8)
                                                                          ,CONCAT12((char)lVar24,
                                                                                    -(ushort)(
                                                  pppppppcStack_1b8 == (char *******)(lVar22 + 0x18)
                                                  ))))))),2), (uVar5 & 1) == 0))))) {
    lVar24 = 0;
    uStack_130 = 0;
    uStack_140 = 0;
    uStack_150 = 0;
    auStack_160[0] = 0;
    pcStack_168 = (code *)0x109de7258;
    auStack_160[1] = 0x109de7274;
    uStack_148 = 0x109de7290;
    uStack_138 = 0x109de72ac;
    do {
      pcVar18 = *(code **)((long)auStack_160 + lVar24 + -8);
      plVar12 = (long *)((long)&pppppppcStack_1d8 +
                        ((long)*(ulong *)((long)auStack_160 + lVar24) >> 1));
      if ((*(ulong *)((long)auStack_160 + lVar24) & 1) != 0) {
        pcVar18 = *(code **)(*plVar12 + ((ulong)pcVar18 & 0xffffffff));
      }
      (*pcVar18)();
      lVar24 = lVar24 + 0x10;
    } while (plVar12 == (long *)0x0);
    if ((*(byte *)((long)plVar12 + 0x17) >> 4 & 1) != 0) {
      lStack_c8 = 0;
      plVar10 = plVar12;
      func_0x000109da271c();
      if (uStack_c0 < *plVar10 + 1U) {
        FUN_109dffce4(&puStack_d0,auStack_b8,*plVar10 + 1U,1);
      }
      FUN_109d93b98(&uStack_198,&puStack_d0,plVar12,0);
      lVar24 = lStack_c8;
      puVar6 = puStack_d0;
      plVar10 = &lStack_180;
      func_0x000107c2b020(plVar10,puStack_d0,lStack_c8);
      lVar28 = lStack_180;
      lVar19 = *(long *)(lStack_180 + ((ulong)plVar10 & 0xffffffff) * 8);
      if (lVar19 == -8) {
        uStack_170 = CONCAT44(uStack_170._4_4_,(int)uStack_170 + -1);
LAB_109de68d0:
        plVar11 = (long *)(lVar24 + 0x11);
        __ZnwmSt11align_val_t(plVar11,8);
        if (lVar24 != 0) {
          _memcpy(plVar11 + 2,puVar6,lVar24);
        }
        *(undefined1 *)((long)(plVar11 + 2) + lVar24) = 0;
        *plVar11 = lVar24;
        plVar11[1] = 0;
        *(long **)(lVar28 + ((ulong)plVar10 & 0xffffffff) * 8) = plVar11;
        uStack_178 = CONCAT44(uStack_178._4_4_ + 1,(undefined4)uStack_178);
        plVar11 = &lStack_180;
        func_0x000107c2b028(plVar11,plVar10);
        for (lVar28 = ((ulong)plVar11 & 0xffffffff) << 3; lVar19 = *(long *)(lStack_180 + lVar28),
            lVar19 == 0 || lVar19 == -8; lVar28 = lVar28 + 8) {
        }
      }
      else {
        if (lVar19 == 0) goto LAB_109de68d0;
        lVar28 = ((ulong)plVar10 & 0xffffffff) << 3;
        while ((lVar28 = lVar28 + 8, lVar19 == 0 || (lVar19 == -8))) {
          lVar19 = *(long *)(lStack_180 + lVar28);
        }
      }
      *(long **)(lVar19 + 8) = plVar12;
      lVar28 = lStack_180;
    }
    lVar24 = 0;
    uStack_130 = 0;
    uStack_140 = 0;
    uStack_150 = 0;
    auStack_160[0] = 0;
    pcStack_168 = FUN_109de71c8;
    auStack_160[1] = 0x109de71ec;
    uStack_148 = 0x109de7210;
    uStack_138 = 0x109de7234;
    do {
      pcVar18 = *(code **)((long)auStack_160 + lVar24 + -8);
      plVar12 = (long *)((long)&pppppppcStack_1d8 +
                        ((long)*(ulong *)((long)auStack_160 + lVar24) >> 1));
      if ((*(ulong *)((long)auStack_160 + lVar24) & 1) != 0) {
        pcVar18 = *(code **)(*plVar12 + ((ulong)pcVar18 & 0xffffffff));
      }
      (*pcVar18)();
      bVar8 = lVar24 == 0x30;
      lVar24 = lVar24 + 0x10;
      iVar9 = (int)plVar12;
      if (bVar8) {
        iVar9 = 1;
      }
    } while (iVar9 != 1);
  }
  if ((int)param_1[0x27] != 0) {
    puVar20 = (ulong *)param_1[0x26];
    uVar2 = *(uint *)(param_1 + 0x28);
    puVar27 = puVar20;
    if (uVar2 == 0) {
LAB_109de6a0c:
      puVar20 = puVar20 + (ulong)uVar2 * 4;
      if (puVar27 != puVar20) {
        pcVar18 = (code *)(auStack_160 + 2);
        uVar21 = uStack_178 & 0xffffffff;
        do {
          pbVar26 = (byte *)*puVar27;
          uVar23 = *(undefined8 *)pbVar26;
          if (((uint)uVar23 >> 2 & 1) == 0) {
            puVar15 = (undefined8 *)0x0;
            uVar17 = 0;
          }
          else {
            puVar15 = *(undefined8 **)(pbVar26 + -8) + 2;
            uVar17 = **(undefined8 **)(pbVar26 + -8);
          }
          plVar12 = param_1 + 0x23;
          FUN_109e03610(plVar12,puVar15,uVar17);
          iVar9 = (int)plVar12;
          if ((iVar9 == -1) || ((long)iVar9 == (ulong)*(uint *)(param_1 + 0x24))) {
            iVar9 = 0;
LAB_109de6a80:
            iVar25 = 0;
            bVar7 = iVar9 - 2U < 3;
            bVar8 = true;
joined_r0x000109de6ae8:
            if (((uint)uVar23 >> 2 & 1) == 0) {
              puVar15 = (undefined8 *)0x0;
              uVar23 = 0;
            }
            else {
              puVar15 = *(undefined8 **)(pbVar26 + -8) + 2;
              uVar23 = **(undefined8 **)(pbVar26 + -8);
            }
            lVar22 = *(long *)(param_1[0x22] + 0x70);
            FUN_109d388ac(lVar22,puVar15,uVar23);
            if (lVar22 == 0) {
              if ((*pbVar26 >> 2 & 1) == 0) {
                puVar15 = (undefined8 *)0x0;
                uVar23 = 0;
              }
              else {
                puVar15 = *(undefined8 **)(pbVar26 + -8) + 2;
                uVar23 = **(undefined8 **)(pbVar26 + -8);
              }
              plVar12 = &lStack_180;
              FUN_109e03610(plVar12,puVar15,uVar23);
              iVar9 = (int)plVar12;
              if (((iVar9 != -1) && ((long)iVar9 != uVar21)) &&
                 (lVar22 = *(long *)(*(long *)(lVar28 + (long)iVar9 * 8) + 8), lVar22 != 0))
              goto LAB_109de6b0c;
            }
            else {
LAB_109de6b0c:
              if (bVar8) {
                uVar2 = *(uint *)(lVar22 + 0x20) & 0xf;
                if (uVar2 == 0) {
                  iVar25 = 9;
                }
                else if (uVar2 - 7 < 2) {
                  iVar25 = 0x11;
                }
                else if (uVar2 - 2 < 9) {
                  iVar25 = *(int *)(&UNK_10e05aad4 + (ulong)(uVar2 - 2) * 4);
                }
                else {
                  iVar25 = 0;
                }
              }
              if (bVar7) goto LAB_109de6bac;
              if ((*(uint *)(lVar22 + 0x20) & 0xf) == 1) {
                bVar7 = false;
                goto LAB_109de6c08;
              }
              if (*(char *)(lVar22 + 0x10) == '\0') {
                if (*(long **)(lVar22 + 0x48) != (long *)(lVar22 + 0x48)) goto LAB_109de6bf4;
                uVar2 = *(uint *)(lVar22 + 0x20) & 0x1000000;
LAB_109de6c00:
                bVar7 = uVar2 == 0;
              }
              else {
                if (*(char *)(lVar22 + 0x10) == '\x03') {
                  uVar2 = *(uint *)(lVar22 + 0x14) & 0x7ffffff;
                  goto LAB_109de6c00;
                }
LAB_109de6bf4:
                bVar7 = false;
              }
              bVar7 = (bool)(bVar7 ^ 1);
            }
          }
          else {
            iVar9 = *(int *)(*(long *)(param_1[0x23] + (long)iVar9 * 8) + 8);
            uVar2 = iVar9 - 1;
            if ((5 < uVar2) || ((0x2dU >> (ulong)(uVar2 & 0x1f) & 1) == 0)) goto LAB_109de6a80;
            iVar25 = *(int *)(&UNK_10e05aabc + (ulong)uVar2 * 4);
            if (2 < iVar9 - 2U) {
              bVar7 = false;
              bVar8 = false;
              goto joined_r0x000109de6ae8;
            }
LAB_109de6bac:
            bVar7 = true;
          }
LAB_109de6c08:
          plVar12 = (long *)puVar27[1];
          plVar10 = (long *)puVar27[2];
          if (plVar12 != plVar10) {
            pcVar1 = "@@";
            if (!bVar7) {
              pcVar1 = "@";
            }
            do {
              ppcStack_1e8 = (code **)plVar12[1];
              pppppppcStack_1f0 = (char *******)*plVar12;
              func_0x000109d39ec8(&pppppcStack_210,&pppppppcStack_1f0,&UNK_10f5feed0,3);
              auStack_160[1] = 0x80;
              auStack_160[0] = 0;
              pcStack_168 = pcVar18;
              if ((lStack_1f8 != 0) && (*pcStack_200 != '@')) {
                uStack_218 = 0x305;
                pppppcStack_238 = pppppcStack_210;
                uStack_230 = uStack_208;
                pppppppcStack_1d8 = (char *******)&pppppcStack_238;
                pcStack_1c8 = pcStack_200;
                lStack_1c0 = lStack_1f8;
                pppppppcStack_1b8 = (char *******)CONCAT62(pppppppcStack_1b8._2_6_,0x502);
                pppppppcVar13 = (char *******)&pppppppcStack_1d8;
                ppcVar16 = &pcStack_168;
                pcStack_228 = pcVar1;
                func_0x000109d5975c();
                pppppppcStack_1f0 = pppppppcVar13;
                ppcStack_1e8 = ppcVar16;
              }
              lVar22 = param_1[1];
              pppppppcStack_1b8 = (char *******)CONCAT62(pppppppcStack_1b8._2_6_,0x105);
              pppppppcStack_1d8 = pppppppcStack_1f0;
              ppcStack_1d0 = ppcStack_1e8;
              FUN_109da7538(lVar22,&pppppppcStack_1d8);
              pbVar14 = pbVar26;
              FUN_109dae8f4(pbVar26,0,param_1[1],0);
              if (bVar7) {
                FUN_109de63bc(param_1,lVar22);
              }
              FUN_109de15e4(param_1,lVar22,pbVar14);
              if (iVar25 != 0) {
                (**(code **)(*param_1 + 0x120))(param_1,lVar22,iVar25);
              }
              if (pcStack_168 != pcVar18) {
                _free();
              }
              plVar12 = plVar12 + 2;
            } while (plVar12 != plVar10);
          }
          do {
            puVar27 = puVar27 + 4;
            if (puVar27 == puVar20) goto LAB_109de6d80;
          } while ((*puVar27 | 0x1000) == 0xfffffffffffff000);
        } while (puVar27 != puVar20);
      }
    }
    else {
      lVar22 = (ulong)uVar2 << 5;
      do {
        if ((*puVar27 | 0x1000) != 0xfffffffffffff000) goto LAB_109de6a0c;
        puVar27 = puVar27 + 4;
        lVar22 = lVar22 + -0x20;
      } while (lVar22 != 0);
    }
  }
LAB_109de6d80:
  if (puStack_d0 != auStack_b8) {
    _free();
  }
  __ZdlPvSt11align_val_t(uStack_198,8);
  plVar12 = &lStack_180;
  func_0x000109de7158();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (puStack_d0 != auStack_b8) {
    _free();
  }
  __ZdlPvSt11align_val_t(uStack_198,8);
  func_0x000109de7158(&lStack_180);
  __Unwind_Resume();
  *plVar12 = (long)&PTR_FUN_110b5b0c0;
  FUN_109de5e48(plVar12 + 0x26);
  FUN_109de5ed4(plVar12 + 0x23);
  FUN_109dde938(plVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109de6e4c; end: 109de6e8b;  */

void FUN_109de6e4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b5b0c0;
  FUN_109de5e48(param_1 + 0x26);
  FUN_109de5ed4(param_1 + 0x23);
  FUN_109dde938(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109de6e8c; end: 109de6e9b;  */

void FUN_109de6e8c(void)

{
  return;
}



/* Entry: 109de6e9c; end: 109de6f8b;  */

long * FUN_109de6e9c(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar1 = param_1;
  func_0x000107c2b020();
  plVar3 = (long *)(*param_1 + ((ulong)plVar1 & 0xffffffff) * 8);
  lVar4 = *plVar3;
  if (lVar4 == -8) {
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  }
  else if (lVar4 != 0) {
    while ((lVar4 == 0 || (lVar4 == -8))) {
      plVar3 = plVar3 + 1;
      lVar4 = *plVar3;
    }
    return plVar3;
  }
  plVar2 = (long *)(param_3 + 0x11);
  __ZnwmSt11align_val_t(plVar2,8);
  if (param_3 != 0) {
    _memcpy(plVar2 + 2,param_2,param_3);
  }
  *(undefined1 *)((long)(plVar2 + 2) + param_3) = 0;
  *plVar2 = param_3;
  *(undefined4 *)(plVar2 + 1) = 0;
  *plVar3 = (long)plVar2;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  plVar3 = param_1;
  func_0x000107c2b028(param_1,plVar1);
  for (plVar3 = (long *)(*param_1 + ((ulong)plVar3 & 0xffffffff) * 8); *plVar3 == 0 || *plVar3 == -8
      ; plVar3 = plVar3 + 1) {
  }
  return plVar3;
}



/* Entry: 109de6f8c; end: 109de7017;  */

undefined8 FUN_109de6f8c(long param_1,int param_2,long param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  
  if (param_2 == 0) {
    uVar3 = 0;
    plVar4 = (long *)0x0;
  }
  else {
    uVar7 = (ulong)(((uint)param_3 >> 4 ^ (uint)param_3 >> 9) & param_2 - 1U);
    plVar4 = (long *)(param_1 + uVar7 * 0x20);
    lVar6 = *plVar4;
    if (param_3 != lVar6) {
      iVar8 = 1;
      plVar5 = (long *)0x0;
      do {
        if (lVar6 == -0x1000) {
          uVar3 = 0;
          if (plVar5 != (long *)0x0) {
            plVar4 = plVar5;
          }
          goto LAB_109de6fc0;
        }
        plVar2 = plVar4;
        if (plVar5 != (long *)0x0 || lVar6 != -0x2000) {
          plVar2 = plVar5;
        }
        uVar1 = (int)uVar7 + iVar8;
        iVar8 = iVar8 + 1;
        uVar7 = (ulong)(uVar1 & param_2 - 1U);
        plVar4 = (long *)(param_1 + uVar7 * 0x20);
        lVar6 = *plVar4;
        plVar5 = plVar2;
      } while (param_3 != lVar6);
    }
    uVar3 = 1;
  }
LAB_109de6fc0:
  *param_4 = (long)plVar4;
  return uVar3;
}



/* Entry: 109de7018; end: 109de71c7;  */

void FUN_109de7018(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar6 = (ulong *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 << 5);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (puVar6 != (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 5;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -0x20;
        puVar3 = puVar3 + 4;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 5;
      puVar7 = puVar6;
      do {
        if ((*puVar7 | 0x1000) != 0xfffffffffffff000) {
          FUN_109de6f8c(*param_1,*(undefined4 *)(param_1 + 2),*puVar7,&puStack_38);
          *puStack_38 = *puVar7;
          puStack_38[1] = 0;
          puStack_38[2] = 0;
          puStack_38[3] = 0;
          uVar8 = puVar7[1];
          puStack_38[2] = puVar7[2];
          puStack_38[1] = uVar8;
          puStack_38[3] = puVar7[3];
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        puVar7 = puVar7 + 4;
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) << 5;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar4 = lVar4 + -0x20;
      puVar3 = puVar3 + 4;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109de71c8; end: 109de72c7;  */

bool FUN_109de71c8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != param_1[4]) {
    *param_1 = *(long *)(lVar1 + 8);
  }
  return lVar1 != param_1[4];
}



/* Entry: 109de72c8; end: 109de737f;  */

long * FUN_109de72c8(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)param_1[1];
  plVar4 = (long *)param_1[2];
  while (plVar3 = plVar4, plVar3 != plVar1) {
    plVar4 = plVar3 + -3;
    lVar2 = *plVar4;
    param_1[2] = (long)plVar4;
    if (lVar2 != 0) {
      plVar3[-2] = lVar2;
      __ZdlPv();
      plVar4 = (long *)param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109de7380; end: 109de73f7;  */

ulong FUN_109de7380(long param_1,undefined2 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  uVar1 = param_1 + 0xa0;
  FUN_109df3ba4(uVar1,param_1);
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x80) = uStack_38;
    *(undefined2 *)(param_1 + 0xc) = param_2;
    plVar2 = *(long **)(param_1 + 0xc0);
    if (plVar2 == (long *)0x0) {
      func_0x000104c501e4();
      return 2;
    }
    (**(code **)(*plVar2 + 0x30))(plVar2,&uStack_38);
  }
  return uVar1;
}



/* Entry: 109de73f8; end: 109de73ff;  */

undefined8 FUN_109de73f8(void)

{
  return 2;
}



/* Entry: 109de7400; end: 109de745b;  */

void FUN_109de7400(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b5b5f0;
  plVar1 = (long *)param_1[0x18];
  if (plVar1 == param_1 + 0x15) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109de7448;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109de7448:
  func_0x000109d2f664(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109de745c; end: 109de7477;  */

long FUN_109de745c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 7;
  if (*(long *)(param_1 + 0x18) != 1) {
    lVar3 = *(long *)(param_1 + 0x18) + 7;
  }
  lVar2 = param_1;
  (**(code **)(*(long *)(param_1 + 0xa0) + 0x10))();
  if (lVar2 != 0) {
    lVar1 = 3;
    if ((*(ushort *)(param_1 + 10) & 0x400) != 0) {
      lVar1 = 6;
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      lVar2 = *(long *)(param_1 + 0x38);
    }
    lVar3 = lVar1 + lVar3 + lVar2;
  }
  return lVar3;
}



/* Entry: 109de7478; end: 109de74e3;  */

void FUN_109de7478(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined **ppuStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  if (param_3 == 0) {
    if ((*(char *)(param_1 + 0x98) != '\x01') ||
       (lVar1 = *(long *)(param_1 + 0x80), *(long *)(param_1 + 0x90) == lVar1)) {
      return;
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x80);
  }
  uStack_20 = *(undefined8 *)(param_1 + 0x90);
  uStack_18 = *(undefined1 *)(param_1 + 0x98);
  ppuStack_28 = &PTR_DAT_110b5b6a0;
  FUN_109df4e30(param_1 + 0xa0,param_1,lVar1,&ppuStack_28,param_2);
  return;
}



/* Entry: 109de74e4; end: 109de7543;  */

void FUN_109de74e4(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x98) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
  }
  else {
    uVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  return;
}



/* Entry: 109de7544; end: 109de7567;  */

void FUN_109de7544(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110b5b708;
  return;
}



/* Entry: 109de7568; end: 109de7583;  */

void FUN_109de7568(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110b5b708;
  return;
}


