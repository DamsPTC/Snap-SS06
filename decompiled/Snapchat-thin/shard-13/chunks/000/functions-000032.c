/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109dad9a8; end: 109dad9ef;  */

undefined1  [16] FUN_109dad9a8(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 < 0x333333333333334) {
    plVar1 = param_1;
    FUN_109dada04();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 10);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_109dad9f0();
  func_0x000104c4f6cc(&UNK_10f5fa81e);
  if (param_2 < 0x333333333333334) {
    lVar2 = param_2 * 0x50;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000104c4f740();
  uVar3 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x50) {
    uVar3 = param_2;
    FUN_109dadacc(param_4,param_2);
    param_4 = param_4 + 0x50;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 109dad9f0; end: 109dada03;  */

undefined1  [16] FUN_109dad9f0(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  func_0x000104c4f6cc(&UNK_10f5fa81e);
  if (param_2 < 0x333333333333334) {
    lVar1 = param_2 * 0x50;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x50) {
    uVar2 = param_2;
    FUN_109dadacc(param_4,param_2);
    param_4 = param_4 + 0x50;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 109dada04; end: 109dada47;  */

undefined1  [16] FUN_109dada04(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 < 0x333333333333334) {
    lVar1 = param_2 * 0x50;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x50) {
    uVar2 = param_2;
    FUN_109dadacc(param_4,param_2);
    param_4 = param_4 + 0x50;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 109dada48; end: 109dadacb;  */

long FUN_109dada48(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x50) {
    FUN_109dadacc(param_4,param_2);
    param_4 = param_4 + 0x50;
  }
  return param_4;
}



/* Entry: 109dadacc; end: 109dadb6b;  */

undefined8 * FUN_109dadacc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 109dadb6c; end: 109dadbe3;  */

void FUN_109dadb6c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    func_0x000109274904(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 109dadbe4; end: 109dadc27;  */

void FUN_109dadbe4(long param_1)

{
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109dadc28; end: 109dadc97;  */

void FUN_109dadc28(long *param_1)

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
        FUN_109dadbe4(lVar2);
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



/* Entry: 109dadc98; end: 109dadccb;  */

long FUN_109dadc98(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_109dadccc(param_1);
  }
  return param_1;
}



/* Entry: 109dadccc; end: 109dadd1f;  */

void FUN_109dadccc(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x58) {
    lStack_28 = lVar1 + -0x38;
    FUN_109dadc28(&lStack_28);
  }
  return;
}



/* Entry: 109dadd20; end: 109dadd97;  */

void FUN_109dadd20(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_38;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    lVar1 = plVar2[1];
    if (plVar2[1] != lVar3) {
      do {
        lVar4 = lVar1 + -0x58;
        lStack_38 = lVar1 + -0x38;
        FUN_109dadc28(&lStack_38);
        lVar1 = lVar4;
      } while (lVar4 != lVar3);
      lVar4 = *(long *)*param_1;
    }
    plVar2[1] = lVar3;
    __ZdlPv(lVar4);
  }
  return;
}



/* Entry: 109dadd98; end: 109dade2f;  */

undefined8 FUN_109dadd98(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = ((uint)(uVar5 >> 4) & 0xfffffff ^ (uint)uVar5 >> 9) & uVar2;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 8);
    uVar8 = *puVar4;
    if (uVar5 != uVar8) {
      iVar9 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar3 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar4 = puVar7;
          }
          goto LAB_109daddd8;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 8);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109daddd8:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109dade30; end: 109dae7ab;  */

undefined *** FUN_109dade30(byte *param_1,undefined ***param_2,long param_3,byte param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  undefined ***pppuVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined ***pppuVar9;
  undefined8 uVar10;
  byte bVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined1 uVar15;
  undefined2 uVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  undefined8 unaff_x19;
  ulong unaff_x20;
  ulong uVar20;
  ulong unaff_x21;
  undefined1 *unaff_x22;
  undefined1 *puVar21;
  ulong uVar22;
  undefined8 unaff_x23;
  ulong unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 *puStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined1 *puStack_78;
  undefined2 uStack_68;
  
  bVar11 = *param_1;
  do {
    while (pbVar4 = param_1, 1 < bVar11) {
      if (bVar11 != 3) {
        if (bVar11 != 2) {
          pppuVar5 = (undefined ***)(pbVar4 + -8);
                    /* WARNING: Could not recover jumptable at 0x000109dae460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(*pppuVar5)[3])(pppuVar5,param_2,param_3);
          return pppuVar5;
        }
        pppuVar5 = *(undefined ****)(pbVar4 + 0x10);
        pppuVar9 = param_2;
        if ((((param_3 == 0) || (((param_4 | *(byte *)(param_3 + 0x1b7) ^ 0xff) & 1) != 0)) ||
            ((*(byte *)pppuVar5 >> 2 & 1) == 0)) ||
           ((*pppuVar5[-1] == (undefined *)0x0 || (*(char *)(pppuVar5[-1] + 2) != '$')))) {
          FUN_109de22a8(pppuVar5,param_2,param_3);
        }
        else {
          ppuVar14 = param_2[4];
          if (ppuVar14 < param_2[3]) {
            param_2[4] = (undefined **)((long)ppuVar14 + 1);
            *(undefined1 *)ppuVar14 = 0x28;
          }
          else {
            FUN_109e05570(param_2,0x28);
          }
          FUN_109de22a8(pppuVar5,param_2,param_3);
          ppuVar14 = param_2[4];
          if (ppuVar14 < param_2[3]) {
            param_2[4] = (undefined **)((long)ppuVar14 + 1);
            *(undefined1 *)ppuVar14 = 0x29;
          }
          else {
            pppuVar9 = (undefined ***)0x29;
            pppuVar5 = param_2;
            FUN_109e05570(param_2);
          }
        }
        uVar6 = *(uint *)(pbVar4 + 1);
        if ((uVar6 & 0xffff) == 0) {
          return pppuVar5;
        }
        if ((param_3 == 0) || (*(char *)(param_3 + 0x1b6) != '\x01')) {
          ppuVar14 = param_2[4];
          if (ppuVar14 < param_2[3]) {
            param_2[4] = (undefined **)((long)ppuVar14 + 1);
            *(undefined1 *)ppuVar14 = 0x40;
          }
          else {
            pppuVar9 = (undefined ***)0x40;
            FUN_109e05570(param_2);
          }
          uVar22 = (ulong)(uVar6 & 0xffff);
          FUN_109dae7ac(uVar22);
          if ((undefined ***)((long)param_2[3] - (long)param_2[4]) < pppuVar9) {
            FUN_109e0560c(param_2,uVar22,pppuVar9);
          }
          else if (pppuVar9 != (undefined ***)0x0) {
            _memcpy(param_2[4],uVar22,pppuVar9);
            param_2[4] = (undefined **)((long)pppuVar9 + (long)param_2[4]);
          }
          return param_2;
        }
        ppuVar14 = param_2[4];
        if (ppuVar14 < param_2[3]) {
          param_2[4] = (undefined **)((long)ppuVar14 + 1);
          *(undefined1 *)ppuVar14 = 0x28;
        }
        else {
          pppuVar9 = (undefined ***)0x28;
          FUN_109e05570(param_2,0x28);
        }
        uVar22 = (ulong)(uVar6 & 0xffff);
        FUN_109dae7ac(uVar22);
        FUN_109d2f728(param_2,uVar22,pppuVar9);
        ppuVar14 = param_2[4];
        if (param_2[3] <= ppuVar14) goto LAB_109dae540;
        param_2[4] = (undefined **)((long)ppuVar14 + 1);
        pppuVar5 = param_2;
        goto LAB_109dae530;
      }
      uVar6 = *(uint *)(pbVar4 + 1) & 0xffffff;
      if (uVar6 < 2) {
        if (uVar6 == 0) {
          ppuVar14 = param_2[4];
          if (ppuVar14 < param_2[3]) {
            param_2[4] = (undefined **)((long)ppuVar14 + 1);
            *(undefined1 *)ppuVar14 = 0x21;
          }
          else {
            uVar7 = 0x21;
LAB_109dae028:
            FUN_109e05570(param_2,uVar7);
          }
        }
        else if (uVar6 == 1) {
          ppuVar14 = param_2[4];
          if (param_2[3] <= ppuVar14) {
            uVar7 = 0x2d;
            goto LAB_109dae028;
          }
          param_2[4] = (undefined **)((long)ppuVar14 + 1);
          *(undefined1 *)ppuVar14 = 0x2d;
        }
      }
      else if (uVar6 == 2) {
        ppuVar14 = param_2[4];
        if (param_2[3] <= ppuVar14) {
          uVar7 = 0x7e;
          goto LAB_109dae028;
        }
        param_2[4] = (undefined **)((long)ppuVar14 + 1);
        *(undefined1 *)ppuVar14 = 0x7e;
      }
      else if (uVar6 == 3) {
        ppuVar14 = param_2[4];
        if (param_2[3] <= ppuVar14) {
          uVar7 = 0x2b;
          goto LAB_109dae028;
        }
        param_2[4] = (undefined **)((long)ppuVar14 + 1);
        *(undefined1 *)ppuVar14 = 0x2b;
      }
      param_4 = 0;
      bVar11 = **(byte **)(pbVar4 + 0x10);
      param_1 = *(byte **)(pbVar4 + 0x10);
      if (bVar11 == 0) {
        if (param_2[3] == param_2[4]) {
          FUN_109e0560c(param_2,&DAT_10f68e8ec,1);
        }
        else {
          *(undefined1 *)param_2[4] = 0x28;
          param_2[4] = (undefined **)((long)param_2[4] + 1);
        }
        pppuVar5 = *(undefined ****)(pbVar4 + 0x10);
        FUN_109dade30(pppuVar5,param_2,param_3,0);
        if (param_2[3] != param_2[4]) {
          *(undefined1 *)param_2[4] = 0x29;
          param_2[4] = (undefined **)((long)param_2[4] + 1);
          return pppuVar5;
        }
        puVar8 = &DAT_10f684600;
        uVar20 = 1;
        ppuVar14 = param_2[4];
        uVar22 = 0;
        if (param_2[3] != ppuVar14) goto LAB_109e05640;
        goto LAB_109e056c4;
      }
    }
    if (bVar11 != 0) {
      puVar21 = *(undefined1 **)(pbVar4 + 0x10);
      if ((((param_3 != 0) && ((long)puVar21 < 0)) && (*(char *)(param_3 + 0x118) != '\x01')) ||
         ((*(uint *)(pbVar4 + 1) >> 8 & 1) != 0)) {
        uVar6 = *(uint *)(pbVar4 + 1) & 0xff;
        if (uVar6 < 4) {
          if (uVar6 == 1) {
            puStack_80 = &UNK_10f5fa825;
          }
          else {
            if (uVar6 != 2) {
LAB_109dae664:
              if ((ulong)((long)param_2[3] - (long)param_2[4]) < 2) {
                FUN_109e0560c(param_2,&DAT_10f519110,2);
              }
              else {
                *(undefined2 *)param_2[4] = 0x7830;
                param_2[4] = (undefined **)((long)param_2[4] + 2);
              }
              puStack_78 = (undefined1 *)0x0;
              uStack_68 = 0x10e;
              pppuVar5 = &ppuStack_88;
              puStack_90 = puVar21;
              ppuStack_88 = &puStack_90;
              FUN_109e046a0(pppuVar5,param_2);
              return pppuVar5;
            }
            puStack_80 = &UNK_10f5af2b0;
          }
        }
        else if (uVar6 == 4) {
          puStack_80 = &UNK_10f5af2a0;
        }
        else {
          if (uVar6 != 8) goto LAB_109dae664;
          puStack_80 = &UNK_10f5af2c0;
        }
        ppuStack_88 = &PTR_DAT_110b40f58;
        puStack_78 = puVar21;
        FUN_109e053d0(param_2,&ppuStack_88);
        return param_2;
      }
code_r0x000109dae408:
      puVar3 = (undefined1 *)register0x00000008;
      uVar22 = 0;
      uVar7 = 0;
      do {
        uVar10 = uVar7;
        uVar20 = uVar22;
        bVar2 = (long)puVar21 < 0;
        if (bVar2) {
          puVar21 = (undefined1 *)-(long)puVar21;
        }
        *(ulong *)(puVar3 + -0x40) = unaff_x24;
        *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
        *(undefined1 **)(puVar3 + -0x30) = unaff_x22;
        *(ulong *)(puVar3 + -0x28) = unaff_x21;
        *(ulong *)(puVar3 + -0x20) = unaff_x20;
        *(undefined8 *)(puVar3 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
        *(code **)(puVar3 + -8) = unaff_x30;
        unaff_x29 = puVar3 + -0x10;
        *(undefined8 *)(puVar3 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        iVar19 = (int)uVar10;
        uVar7 = uVar10;
        if ((ulong)puVar21 >> 0x20 == 0) {
          uVar22 = uVar20;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar3 + -0x48)) {
            *(undefined8 *)(puVar3 + -0x40) = *(undefined8 *)(puVar3 + -0x40);
            *(undefined8 *)(puVar3 + -0x38) = *(undefined8 *)(puVar3 + -0x38);
            *(undefined8 *)(puVar3 + -0x30) = *(undefined8 *)(puVar3 + -0x30);
            *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
            *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
            *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
            *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
            *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
            lVar12 = 0;
            *(undefined8 *)(puVar3 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            *(undefined8 *)(puVar3 + -0x68) = 0x3030303030303030;
            *(undefined8 *)(puVar3 + -0x70) = 0x3030303030303030;
            *(undefined8 *)(puVar3 + -0x58) = 0x3030303030303030;
            *(undefined8 *)(puVar3 + -0x60) = 0x3030303030303030;
            *(undefined8 *)(puVar3 + -0x88) = 0x3030303030303030;
            *(undefined8 *)(puVar3 + -0x90) = 0x3030303030303030;
            *(undefined8 *)(puVar3 + -0x78) = 0x3030303030303030;
            *(undefined8 *)(puVar3 + -0x80) = 0x3030303030303030;
            *(undefined8 *)(puVar3 + -0xa8) = 0x3030303030303030;
            *(undefined8 *)(puVar3 + -0xb0) = 0x3030303030303030;
            *(undefined8 *)(puVar3 + -0x98) = 0x3030303030303030;
            *(undefined8 *)(puVar3 + -0xa0) = 0x3030303030303030;
            *(undefined8 *)(puVar3 + -200) = 0x3030303030303030;
            *(undefined8 *)(puVar3 + -0xd0) = 0x3030303030303030;
            *(undefined8 *)(puVar3 + -0xb8) = 0x3030303030303030;
            *(undefined8 *)(puVar3 + -0xc0) = 0x3030303030303030;
            lVar18 = 0x7f;
            do {
              uVar6 = (uint)puVar21;
              puVar3[lVar18 + -0xd0] =
                   (char)puVar21 + (char)(((ulong)puVar21 & 0xffffffff) / 10) * -10 | 0x30;
              lVar12 = lVar12 + 0x100000000;
              lVar18 = lVar18 + -1;
              puVar21 = (undefined1 *)(((ulong)puVar21 & 0xffffffff) / 10);
            } while (9 < uVar6);
            uVar22 = lVar12 >> 0x20;
            if (bVar2) {
              ppuVar14 = param_2[4];
              if (ppuVar14 < param_2[3]) {
                param_2[4] = (undefined **)((long)ppuVar14 + 1);
                *(undefined1 *)ppuVar14 = 0x2d;
              }
              else {
                FUN_109e05570();
              }
            }
            uVar17 = uVar22;
            if (iVar19 != 1) {
              for (; uVar17 < uVar20; uVar17 = uVar17 + 1) {
                ppuVar14 = param_2[4];
                if (ppuVar14 < param_2[3]) {
                  param_2[4] = (undefined **)((long)ppuVar14 + 1);
                  *(undefined1 *)ppuVar14 = 0x30;
                }
                else {
                  FUN_109e05570();
                }
              }
            }
            uVar17 = uVar22;
            if (iVar19 == 1) {
              FUN_109dfa43c();
            }
            else {
              FUN_109e0560c();
            }
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar3 + -0x48)) {
              return param_2;
            }
            ___stack_chk_fail();
            *(undefined1 **)(puVar3 + -0x100) = puVar3 + -0x50;
            *(ulong *)(puVar3 + -0xf8) = uVar22;
            *(ulong *)(puVar3 + -0xf0) = uVar20;
            *(undefined8 *)(puVar3 + -0xe8) = uVar10;
            *(undefined1 **)(puVar3 + -0xe0) = puVar3 + -0x10;
            *(code **)(puVar3 + -0xd8) = FUN_109dfa43c;
            uVar22 = uVar17 - 1;
            FUN_109e0560c();
            if (uVar17 != (uVar22 - ((uVar22 / 3) * 2 + uVar22 / 3)) + 1) {
              lVar12 = (uVar22 / 3) * -3;
              do {
                ppuVar14 = param_2[4];
                if (ppuVar14 < param_2[3]) {
                  param_2[4] = (undefined **)((long)ppuVar14 + 1);
                  *(undefined1 *)ppuVar14 = 0x2c;
                }
                else {
                  FUN_109e05570();
                }
                FUN_109e0560c();
                lVar12 = lVar12 + 3;
              } while (lVar12 != 0);
            }
            return param_2;
          }
        }
        else {
          lVar12 = 0;
          *(undefined8 *)(puVar3 + -0x68) = 0x3030303030303030;
          *(undefined8 *)(puVar3 + -0x70) = 0x3030303030303030;
          *(undefined8 *)(puVar3 + -0x58) = 0x3030303030303030;
          *(undefined8 *)(puVar3 + -0x60) = 0x3030303030303030;
          *(undefined8 *)(puVar3 + -0x88) = 0x3030303030303030;
          *(undefined8 *)(puVar3 + -0x90) = 0x3030303030303030;
          *(undefined8 *)(puVar3 + -0x78) = 0x3030303030303030;
          *(undefined8 *)(puVar3 + -0x80) = 0x3030303030303030;
          *(undefined8 *)(puVar3 + -0xa8) = 0x3030303030303030;
          *(undefined8 *)(puVar3 + -0xb0) = 0x3030303030303030;
          *(undefined8 *)(puVar3 + -0x98) = 0x3030303030303030;
          *(undefined8 *)(puVar3 + -0xa0) = 0x3030303030303030;
          unaff_x22 = puVar3 + -0x50;
          lVar18 = 0x7f;
          *(undefined8 *)(puVar3 + -200) = 0x3030303030303030;
          *(undefined8 *)(puVar3 + -0xd0) = 0x3030303030303030;
          *(undefined8 *)(puVar3 + -0xb8) = 0x3030303030303030;
          *(undefined8 *)(puVar3 + -0xc0) = 0x3030303030303030;
          do {
            puVar3[lVar18 + -0xd0] =
                 (char)puVar21 + (char)(undefined1 *)((ulong)puVar21 / 10) * -10 | 0x30;
            lVar12 = lVar12 + 0x100000000;
            lVar18 = lVar18 + -1;
            bVar1 = (undefined1 *)0x9 < puVar21;
            puVar21 = (undefined1 *)((ulong)puVar21 / 10);
          } while (bVar1);
          unaff_x21 = lVar12 >> 0x20;
          if (bVar2) {
            ppuVar14 = param_2[4];
            if (ppuVar14 < param_2[3]) {
              param_2[4] = (undefined **)((long)ppuVar14 + 1);
              *(undefined1 *)ppuVar14 = 0x2d;
            }
            else {
              FUN_109e05570();
            }
          }
          if ((iVar19 != 1) && (unaff_x21 < uVar20)) {
            unaff_x23 = 0x30;
            unaff_x24 = unaff_x21;
            do {
              ppuVar14 = param_2[4];
              if (ppuVar14 < param_2[3]) {
                param_2[4] = (undefined **)((long)ppuVar14 + 1);
                *(undefined1 *)ppuVar14 = 0x30;
              }
              else {
                FUN_109e05570();
              }
              unaff_x24 = unaff_x24 + 1;
            } while (unaff_x24 < uVar20);
          }
          puVar21 = unaff_x22 + -unaff_x21;
          uVar22 = unaff_x21;
          if (iVar19 == 1) {
            FUN_109dfa43c();
          }
          else {
            FUN_109e0560c();
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar3 + -0x48)) {
            return param_2;
          }
        }
        unaff_x30 = FUN_109df9ee0;
        ___stack_chk_fail();
        puVar3 = puVar3 + -0xd0;
        unaff_x19 = uVar10;
        unaff_x20 = uVar20;
      } while( true );
    }
    if (**(byte **)(pbVar4 + 0x10) - 1 < 2) {
      FUN_109dade30(*(byte **)(pbVar4 + 0x10),param_2,param_3,0);
    }
    else {
      ppuVar14 = param_2[4];
      if (ppuVar14 < param_2[3]) {
        param_2[4] = (undefined **)((long)ppuVar14 + 1);
        *(undefined1 *)ppuVar14 = 0x28;
      }
      else {
        FUN_109e05570(param_2,0x28);
      }
      FUN_109dade30(*(undefined8 *)(pbVar4 + 0x10),param_2,param_3,0);
      ppuVar14 = param_2[4];
      if (ppuVar14 < param_2[3]) {
        param_2[4] = (undefined **)((long)ppuVar14 + 1);
        *(undefined1 *)ppuVar14 = 0x29;
      }
      else {
        FUN_109e05570(param_2,0x29);
      }
    }
    switch(*(uint *)(pbVar4 + 1) & 0xffffff) {
    case 0:
      if ((**(char **)(pbVar4 + 0x18) == '\x01') &&
         (puVar21 = *(undefined1 **)(*(char **)(pbVar4 + 0x18) + 0x10), (long)puVar21 < 0))
      goto code_r0x000109dae408;
      ppuVar14 = param_2[4];
      if (param_2[3] <= ppuVar14) {
        uVar7 = 0x2b;
        break;
      }
      param_2[4] = (undefined **)((long)ppuVar14 + 1);
      *(undefined1 *)ppuVar14 = 0x2b;
      goto LAB_109dae34c;
    case 1:
      ppuVar14 = param_2[4];
      if (param_2[3] <= ppuVar14) {
        uVar7 = 0x26;
        break;
      }
      param_2[4] = (undefined **)((long)ppuVar14 + 1);
      uVar15 = 0x26;
code_r0x000109dae278:
      *(undefined1 *)ppuVar14 = uVar15;
      goto LAB_109dae34c;
    case 2:
      ppuVar14 = param_2[4];
      if (ppuVar14 < param_2[3]) {
        param_2[4] = (undefined **)((long)ppuVar14 + 1);
        uVar15 = 0x2f;
        goto code_r0x000109dae278;
      }
      uVar7 = 0x2f;
      break;
    case 3:
      ppuVar14 = param_2[4];
      if ((ulong)((long)param_2[3] - (long)ppuVar14) < 2) {
        puVar8 = &DAT_10f2f497c;
        goto code_r0x000109dae200;
      }
      uVar16 = 0x3d3d;
code_r0x000109dae2fc:
      *(undefined2 *)ppuVar14 = uVar16;
      param_2[4] = (undefined **)((long)param_2[4] + 2);
      goto LAB_109dae34c;
    case 4:
      ppuVar14 = param_2[4];
      if (ppuVar14 < param_2[3]) {
        param_2[4] = (undefined **)((long)ppuVar14 + 1);
        uVar15 = 0x3e;
        goto code_r0x000109dae278;
      }
      uVar7 = 0x3e;
      break;
    case 5:
      ppuVar14 = param_2[4];
      if (1 < (ulong)((long)param_2[3] - (long)ppuVar14)) {
        uVar16 = 0x3d3e;
        goto code_r0x000109dae2fc;
      }
      puVar8 = &DAT_10f41676e;
      goto code_r0x000109dae200;
    case 6:
      ppuVar14 = param_2[4];
      if (1 < (ulong)((long)param_2[3] - (long)ppuVar14)) {
        uVar16 = 0x2626;
        goto code_r0x000109dae2fc;
      }
      puVar8 = &DAT_10f5af57c;
      goto code_r0x000109dae200;
    case 7:
      ppuVar14 = param_2[4];
      if (1 < (ulong)((long)param_2[3] - (long)ppuVar14)) {
        uVar16 = 0x7c7c;
        goto code_r0x000109dae2fc;
      }
      puVar8 = &DAT_10f5fa831;
      goto code_r0x000109dae200;
    case 8:
      ppuVar14 = param_2[4];
      if (ppuVar14 < param_2[3]) {
        param_2[4] = (undefined **)((long)ppuVar14 + 1);
        uVar15 = 0x3c;
        goto code_r0x000109dae278;
      }
      uVar7 = 0x3c;
      break;
    case 9:
      ppuVar14 = param_2[4];
      if (1 < (ulong)((long)param_2[3] - (long)ppuVar14)) {
        uVar16 = 0x3d3c;
        goto code_r0x000109dae2fc;
      }
      puVar8 = &DAT_10f41676b;
      goto code_r0x000109dae200;
    case 10:
      ppuVar14 = param_2[4];
      if (ppuVar14 < param_2[3]) {
        param_2[4] = (undefined **)((long)ppuVar14 + 1);
        uVar15 = 0x25;
        goto code_r0x000109dae278;
      }
      uVar7 = 0x25;
      break;
    case 0xb:
      ppuVar14 = param_2[4];
      if (ppuVar14 < param_2[3]) {
        param_2[4] = (undefined **)((long)ppuVar14 + 1);
        uVar15 = 0x2a;
        goto code_r0x000109dae278;
      }
      uVar7 = 0x2a;
      break;
    case 0xc:
      ppuVar14 = param_2[4];
      if (1 < (ulong)((long)param_2[3] - (long)ppuVar14)) {
        uVar16 = 0x3d21;
        goto code_r0x000109dae2fc;
      }
      puVar8 = &DAT_10f416771;
      goto code_r0x000109dae200;
    case 0xd:
      ppuVar14 = param_2[4];
      if (ppuVar14 < param_2[3]) {
        param_2[4] = (undefined **)((long)ppuVar14 + 1);
        uVar15 = 0x7c;
        goto code_r0x000109dae278;
      }
      uVar7 = 0x7c;
      break;
    case 0xe:
      ppuVar14 = param_2[4];
      if (param_2[3] <= ppuVar14) {
        uVar7 = 0x21;
        break;
      }
      param_2[4] = (undefined **)((long)ppuVar14 + 1);
      *(undefined1 *)ppuVar14 = 0x21;
      goto LAB_109dae34c;
    case 0xf:
      ppuVar14 = param_2[4];
      if (1 < (ulong)((long)param_2[3] - (long)ppuVar14)) {
        uVar16 = 0x3c3c;
        goto code_r0x000109dae2fc;
      }
      puVar8 = &DAT_10f5ad81e;
      goto code_r0x000109dae200;
    case 0x10:
    case 0x11:
      ppuVar14 = param_2[4];
      if (1 < (ulong)((long)param_2[3] - (long)ppuVar14)) {
        uVar16 = 0x3e3e;
        goto code_r0x000109dae2fc;
      }
      puVar8 = &DAT_10f5fa82e;
code_r0x000109dae200:
      FUN_109e0560c(param_2,puVar8,2);
      goto LAB_109dae34c;
    case 0x12:
      ppuVar14 = param_2[4];
      if (param_2[3] <= ppuVar14) {
        uVar7 = 0x2d;
        break;
      }
      param_2[4] = (undefined **)((long)ppuVar14 + 1);
      *(undefined1 *)ppuVar14 = 0x2d;
      goto LAB_109dae34c;
    case 0x13:
      ppuVar14 = param_2[4];
      if (ppuVar14 < param_2[3]) {
        param_2[4] = (undefined **)((long)ppuVar14 + 1);
        uVar15 = 0x5e;
        goto code_r0x000109dae278;
      }
      uVar7 = 0x5e;
      break;
    default:
      goto LAB_109dae34c;
    }
    FUN_109e05570(param_2,uVar7);
LAB_109dae34c:
    param_4 = 0;
    bVar11 = **(byte **)(pbVar4 + 0x18);
    param_1 = *(byte **)(pbVar4 + 0x18);
  } while (bVar11 - 1 < 2);
  ppuVar14 = param_2[4];
  if (ppuVar14 < param_2[3]) {
    param_2[4] = (undefined **)((long)ppuVar14 + 1);
    *(undefined1 *)ppuVar14 = 0x28;
  }
  else {
    FUN_109e05570(param_2,0x28);
  }
  pppuVar5 = *(undefined ****)(pbVar4 + 0x18);
  FUN_109dade30(pppuVar5,param_2,param_3,0);
  ppuVar14 = param_2[4];
  if (ppuVar14 < param_2[3]) {
    param_2[4] = (undefined **)((long)ppuVar14 + 1);
LAB_109dae530:
    *(undefined1 *)ppuVar14 = 0x29;
    return pppuVar5;
  }
LAB_109dae540:
  ppuVar14 = param_2[3];
  ppuVar13 = param_2[4];
  do {
    if (ppuVar13 < ppuVar14) {
LAB_109e055c0:
      param_2[4] = (undefined **)((long)ppuVar13 + 1);
      *(undefined1 *)ppuVar13 = 0x29;
      return param_2;
    }
    if (param_2[2] != (undefined **)0x0) {
      FUN_109e05520(param_2);
      ppuVar13 = param_2[4];
      goto LAB_109e055c0;
    }
    if (*(int *)(param_2 + 7) == 0) {
      if (param_2[6] != (undefined **)0x0) {
        FUN_109e057dc();
      }
      (*(code *)(*param_2)[9])(param_2,&stack0xffffffffffffffdf,1);
      return param_2;
    }
    FUN_109e0538c(param_2);
    ppuVar14 = param_2[3];
    ppuVar13 = param_2[4];
  } while( true );
LAB_109e056c4:
  if (param_2[2] != (undefined **)0x0) {
    if (ppuVar14 == param_2[2]) {
      if (param_2[6] != (undefined **)0x0) {
        FUN_109e057dc();
      }
      uVar17 = 0;
      if (uVar22 != 0) {
        uVar17 = uVar20 / uVar22;
      }
      uVar22 = uVar17 * uVar22;
      uVar20 = uVar20 - uVar22;
      (*(code *)(*param_2)[9])(param_2,puVar8,uVar22);
      ppuVar14 = param_2[4];
      uVar17 = (long)param_2[3] - (long)ppuVar14;
      if (uVar20 <= uVar17) {
        puVar8 = puVar8 + uVar22;
        goto LAB_109e05640;
      }
    }
    else {
      FUN_109e05740(param_2,puVar8,uVar22);
      FUN_109e05520(param_2);
      uVar20 = uVar20 - uVar22;
      ppuVar14 = param_2[4];
      uVar17 = (long)param_2[3] - (long)ppuVar14;
    }
    puVar8 = puVar8 + uVar22;
    uVar22 = uVar17;
    if (uVar20 <= uVar17) goto LAB_109e05640;
    goto LAB_109e056c4;
  }
  if (*(int *)(param_2 + 7) == 0) {
    if (param_2[6] != (undefined **)0x0) {
      FUN_109e057dc();
    }
    (*(code *)(*param_2)[9])(param_2,puVar8,uVar20);
    return param_2;
  }
  FUN_109e0538c(param_2);
  ppuVar14 = param_2[4];
  uVar22 = (long)param_2[3] - (long)ppuVar14;
  if (uVar20 <= uVar22) {
LAB_109e05640:
    FUN_109e05740(param_2,puVar8,uVar20);
    return param_2;
  }
  goto LAB_109e056c4;
}



/* Entry: 109dae7ac; end: 109dae7d3;  */

undefined1  [16] FUN_109dae7ac(int param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = (ulong)(param_1 * 8 - 8) & 0x7fff8;
  auVar2._8_8_ = *(undefined8 *)(&UNK_10e059ea8 + uVar1);
  auVar2._0_8_ = *(undefined8 *)((long)&PTR_DAT_110b58608 + uVar1);
  return auVar2;
}



/* Entry: 109dae7d4; end: 109dae82f;  */

void FUN_109dae7d4(uint param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(param_4 + 0xb8);
  FUN_109d34148(puVar1,0x20,3);
  *puVar1 = 0;
  *(uint *)(puVar1 + 1) = param_1 & 0xffffff | (uint)(byte)puVar1[4] << 0x18;
  *(undefined8 *)(puVar1 + 8) = param_5;
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  return;
}



/* Entry: 109dae830; end: 109dae887;  */

void FUN_109dae830(uint param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(param_3 + 0xb8);
  FUN_109d34148(puVar1,0x18,3);
  *puVar1 = 3;
  *(uint *)(puVar1 + 1) = param_1 & 0xffffff | (uint)(byte)puVar1[4] << 0x18;
  *(undefined8 *)(puVar1 + 8) = param_4;
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  return;
}



/* Entry: 109dae888; end: 109dae8f3;  */

void FUN_109dae888(undefined8 param_1,long param_2,int param_3,uint param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined1 *)(param_2 + 0xb8);
  FUN_109d34148(puVar1,0x18,3);
  uVar2 = 0x100;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  *puVar1 = 1;
  *(uint *)(puVar1 + 1) = param_4 & 0xffffff | uVar2 | (uint)(byte)puVar1[4] << 0x18;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  return;
}



/* Entry: 109dae8f4; end: 109dae95b;  */

void FUN_109dae8f4(undefined8 param_1,uint param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(param_3 + 0xb8);
  FUN_109d34148(puVar2,0x18,3);
  bVar1 = *(byte *)(*(long *)(param_3 + 0x90) + 0x12);
  *puVar2 = 2;
  *(uint *)(puVar2 + 1) = param_2 | (uint)bVar1 << 0x10 | (uint)(byte)puVar2[4] << 0x18;
  *(undefined8 *)(puVar2 + 8) = param_4;
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  return;
}



/* Entry: 109dae95c; end: 109daffe3;  */

undefined4 FUN_109dae95c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  long ***ppplStack_48;
  long lStack_40;
  char cStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_1;
  uStack_28 = param_2;
  FUN_109e037bc(&ppplStack_48,&uStack_30);
  if (-1 < (long)cStack_31) {
    ppplStack_48 = (long ***)&ppplStack_48;
  }
  if (-1 < cStack_31) {
    lStack_40 = (long)cStack_31;
  }
  switch(lStack_40) {
  case 1:
    cVar1 = *(char *)ppplStack_48;
    if (cVar1 == 'h') {
      uVar2 = 0x31;
      goto code_r0x000109daf648;
    }
    if (cVar1 == 'l') {
      uVar2 = 0x30;
      goto code_r0x000109daf648;
    }
    if (cVar1 == 'u') {
      uVar2 = 0x41;
      goto code_r0x000109daf648;
    }
    break;
  case 2:
    if (*(short *)ppplStack_48 == 0x6168) {
      uVar2 = 0x32;
      goto code_r0x000109daf648;
    }
    if (*(short *)ppplStack_48 == 0x6569) {
      uVar2 = 0x7b;
      goto code_r0x000109daf648;
    }
    if (*(short *)ppplStack_48 == 0x6968) {
      uVar2 = 0x89;
      goto code_r0x000109daf648;
    }
    if (*(short *)ppplStack_48 == 0x6f6c) {
      uVar2 = 0x8a;
      goto code_r0x000109daf648;
    }
    break;
  case 3:
    if (*(short *)ppplStack_48 == 0x6f67 && *(char *)((long)ppplStack_48 + 2) == 't') {
      uVar2 = 2;
      goto code_r0x000109daf648;
    }
    if (*(short *)ppplStack_48 == 0x6c70 && *(char *)((long)ppplStack_48 + 2) == 't') {
      uVar2 = 0xc;
      goto code_r0x000109daf648;
    }
    if (*(short *)ppplStack_48 == 0x6f74 && *(char *)((long)ppplStack_48 + 2) == 'c') {
      uVar2 = 0x3d;
      goto code_r0x000109daf648;
    }
    if (*(short *)ppplStack_48 == 0x6c74 && *(char *)((long)ppplStack_48 + 2) == 's') {
      uVar2 = 0x5e;
      goto code_r0x000109daf648;
    }
    if (*(short *)ppplStack_48 == 0x6f6c && *(char *)((long)ppplStack_48 + 2) == '8') {
      uVar2 = 0x29;
      goto code_r0x000109daf648;
    }
    if (*(short *)ppplStack_48 == 0x6968 && *(char *)((long)ppplStack_48 + 2) == '8') {
      uVar2 = 0x2a;
      goto code_r0x000109daf648;
    }
    break;
  case 4:
    if (*(int *)ppplStack_48 == 0x70766c74) {
      uVar2 = 0x14;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x65676170) {
      uVar2 = 0x17;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x657a6973) {
      uVar2 = 0x1c;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x38736261) {
      uVar2 = 0x1e;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x68676968) {
      uVar2 = 0x33;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x656e6f6e) {
      uVar2 = 0x20;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x386f6c68) {
      uVar2 = 0x2b;
      goto code_r0x000109daf648;
    }
    break;
  case 5:
    if (*(int *)ppplStack_48 == 0x65726370 && *(char *)((long)ppplStack_48 + 4) == 'l') {
      uVar2 = 5;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x67736c74 && *(char *)((long)ppplStack_48 + 4) == 'd') {
      uVar2 = 0xd;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x6c736c74 && *(char *)((long)ppplStack_48 + 4) == 'd') {
      uVar2 = 0xe;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x666f7074 && *(char *)((long)ppplStack_48 + 4) == 'f') {
      uVar2 = 0x10;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x65727074 && *(char *)((long)ppplStack_48 + 4) == 'l') {
      uVar2 = 0x97;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x68676968 && *(char *)((long)ppplStack_48 + 4) == 'a') {
      uVar2 = 0x34;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x40746f67 && *(char *)((long)ppplStack_48 + 4) == 'l') {
      uVar2 = 0x39;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x40746f67 && *(char *)((long)ppplStack_48 + 4) == 'h') {
      uVar2 = 0x3a;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x61636f6c && *(char *)((long)ppplStack_48 + 4) == 'l') {
      uVar2 = 0x70;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x40636f74 && *(char *)((long)ppplStack_48 + 4) == 'l') {
      uVar2 = 0x3e;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x40636f74 && *(char *)((long)ppplStack_48 + 4) == 'h') {
      uVar2 = 0x3f;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x6f746f6e && *(char *)((long)ppplStack_48 + 4) == 'c') {
      uVar2 = 0x71;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x6f676467 && *(char *)((long)ppplStack_48 + 4) == 't') {
      uVar2 = 0x77;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x6c706467 && *(char *)((long)ppplStack_48 + 4) == 't') {
      uVar2 = 0x79;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x6f676569 && *(char *)((long)ppplStack_48 + 4) == 't') {
      uVar2 = 0x7c;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x6f67646c && *(char *)((long)ppplStack_48 + 4) == 't') {
      uVar2 = 0x78;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x6c70646c && *(char *)((long)ppplStack_48 + 4) == 't') {
      uVar2 = 0x7a;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x65726273 && *(char *)((long)ppplStack_48 + 4) == 'l') {
      uVar2 = 0x25;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x65726274 && *(char *)((long)ppplStack_48 + 4) == 'l') {
      uVar2 = 0x80;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x6572626d && *(char *)((long)ppplStack_48 + 4) == 'l') {
      uVar2 = 0x7f;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x366c6572 && *(char *)((long)ppplStack_48 + 4) == '4') {
      uVar2 = 0x86;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x685f6370 && *(char *)((long)ppplStack_48 + 4) == 'i') {
      uVar2 = 0x8b;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x6c5f6370 && *(char *)((long)ppplStack_48 + 4) == 'o') {
      uVar2 = 0x8c;
      goto code_r0x000109daf648;
    }
    break;
  case 6:
    if (*(int *)ppplStack_48 == 0x72707464 && *(short *)((long)ppplStack_48 + 4) == 0x6c65) {
      uVar2 = 0x98;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x6f707464 && *(short *)((long)ppplStack_48 + 4) == 0x6666) {
      uVar2 = 0x11;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x6f746f67 && *(short *)((long)ppplStack_48 + 4) == 0x6666) {
      uVar2 = 3;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x72746f67 && *(short *)((long)ppplStack_48 + 4) == 0x6c65) {
      uVar2 = 4;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x6f70746e && *(short *)((long)ppplStack_48 + 4) == 0x6666) {
      uVar2 = 10;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x6c736c74 && *(short *)((long)ppplStack_48 + 4) == 0x6d64) {
      uVar2 = 0xf;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x72676d69 && *(short *)((long)ppplStack_48 + 4) == 0x6c65) {
      uVar2 = 0x73;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x6f746c70 && *(short *)((long)ppplStack_48 + 4) == 0x6666) {
      uVar2 = 0x1f;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x68676968 && *(short *)((long)ppplStack_48 + 4) == 0x7265) {
      uVar2 = 0x35;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x40746f67 && *(short *)((long)ppplStack_48 + 4) == 0x6168) {
      uVar2 = 0x3b;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x40636f74 && *(short *)((long)ppplStack_48 + 4) == 0x6168) {
      uVar2 = 0x40;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x6d707464 && *(short *)((long)ppplStack_48 + 4) == 0x646f) {
      uVar2 = 0x43;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x6c657270 && *(short *)((long)ppplStack_48 + 4) == 0x3133) {
      uVar2 = 0x24;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x6c736c74 && *(short *)((long)ppplStack_48 + 4) == 0x6f64) {
      uVar2 = 0x26;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x72736c74 && *(short *)((long)ppplStack_48 + 4) == 0x6c65) {
      uVar2 = 0x7e;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x5f746f67 && *(short *)((long)ppplStack_48 + 4) == 0x6968) {
      uVar2 = 0x8d;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x5f746f67 && *(short *)((long)ppplStack_48 + 4) == 0x6f6c) {
      uVar2 = 0x8e;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x5f746c70 && *(short *)((long)ppplStack_48 + 4) == 0x6968) {
      uVar2 = 0x91;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x5f746c70 && *(short *)((long)ppplStack_48 + 4) == 0x6f6c) {
      uVar2 = 0x92;
      goto code_r0x000109daf648;
    }
    break;
  case 7:
    if (*(int *)ppplStack_48 == 0x63736c74 && *(int *)((long)ppplStack_48 + 3) == 0x6c6c6163) {
      uVar2 = 0x12;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x64736c74 && *(int *)((long)ppplStack_48 + 3) == 0x63736564) {
      uVar2 = 0x13;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x65676170 && *(int *)((long)ppplStack_48 + 3) == 0x66666f65) {
      uVar2 = 0x18;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x70746f67 && *(int *)((long)ppplStack_48 + 3) == 0x65676170) {
      uVar2 = 0x19;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x68676968 && *(int *)((long)ppplStack_48 + 3) == 0x61726568) {
      uVar2 = 0x36;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x68676968 && *(int *)((long)ppplStack_48 + 3) == 0x74736568) {
      uVar2 = 0x37;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x62636f74 && *(int *)((long)ppplStack_48 + 3) == 0x65736162) {
      uVar2 = 0x3c;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x65727074 && *(int *)((long)ppplStack_48 + 3) == 0x6c406c65) {
      uVar2 = 0x44;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x65727074 && *(int *)((long)ppplStack_48 + 3) == 0x68406c65) {
      uVar2 = 0x45;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x67726174 && *(int *)((long)ppplStack_48 + 3) == 0x31746567) {
      uVar2 = 0x22;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x67726174 && *(int *)((long)ppplStack_48 + 3) == 0x32746567) {
      uVar2 = 0x23;
      goto code_r0x000109daf648;
    }
    if (*(int *)ppplStack_48 == 0x40746f67 && *(int *)((long)ppplStack_48 + 3) == 0x736c7440) {
      uVar2 = 0x81;
      goto code_r0x000109daf648;
    }
    break;
  case 8:
    if ((long ***)*ppplStack_48 == (long ***)0x6c65726370746f67) {
      uVar2 = 6;
    }
    else if ((long ***)*ppplStack_48 == (long ***)0x66666f7074746f67) {
      uVar2 = 8;
    }
    else if ((long ***)*ppplStack_48 == (long ***)0x6567617070766c74) {
      uVar2 = 0x15;
    }
    else if ((long ***)*ppplStack_48 == (long ***)0x32336c6572636573) {
      uVar2 = 0x1b;
    }
    else if ((long ***)*ppplStack_48 == (long ***)0x6174736568676968) {
      uVar2 = 0x38;
    }
    else if ((long ***)*ppplStack_48 == (long ***)0x6168406c65727074) {
      uVar2 = 0x46;
    }
    else if ((long ***)*ppplStack_48 == (long ***)0x6c406c6572707464) {
      uVar2 = 0x4d;
    }
    else if ((long ***)*ppplStack_48 == (long ***)0x68406c6572707464) {
      uVar2 = 0x4e;
    }
    else if ((long ***)*ppplStack_48 == (long ***)0x6c6572705f746f67) {
      uVar2 = 0x21;
    }
    else if ((long ***)*ppplStack_48 == (long ***)0x6f6c4032336c6572) {
      uVar2 = 0x84;
    }
    else if ((long ***)*ppplStack_48 == (long ***)0x69684032336c6572) {
      uVar2 = 0x85;
    }
    else if ((long ***)*ppplStack_48 == (long ***)0x6f6c403233736261) {
      uVar2 = 0x87;
    }
    else if ((long ***)*ppplStack_48 == (long ***)0x6968403233736261) {
      uVar2 = 0x88;
    }
    else if ((long ***)*ppplStack_48 == (long ***)0x69685f66666f7074) {
      uVar2 = 0x95;
    }
    else {
      uVar2 = 0x96;
      if ((long ***)*ppplStack_48 != (long ***)0x6f6c5f66666f7074) {
        uVar2 = 1;
      }
    }
    goto code_r0x000109daf648;
  case 9:
    if ((long ***)*ppplStack_48 == (long ***)0x666f70746e646e69 &&
        *(char *)(ppplStack_48 + 1) == 'f') {
      uVar2 = 9;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x666f70746e746f67 &&
        *(char *)(ppplStack_48 + 1) == 'f') {
      uVar2 = 0xb;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x68406c6572707464 &&
        *(char *)(ppplStack_48 + 1) == 'a') {
      uVar2 = 0x4f;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x6572707440746f67 &&
        *(char *)(ppplStack_48 + 1) == 'l') {
      uVar2 = 0x56;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x67736c7440746f67 &&
        *(char *)(ppplStack_48 + 1) == 'd') {
      uVar2 = 0x5f;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x6c736c7440746f67 &&
        *(char *)(ppplStack_48 + 1) == 'd') {
      uVar2 = 0x66;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x6572637040746f67 &&
        *(char *)(ppplStack_48 + 1) == 'l') {
      uVar2 = 0x6a;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x6572637040736c74 &&
        *(char *)(ppplStack_48 + 1) == 'l') {
      uVar2 = 0x6e;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x65646e6965707974 &&
        *(char *)(ppplStack_48 + 1) == 'x') {
      uVar2 = 0x7d;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x685f66666f746f67 &&
        *(char *)(ppplStack_48 + 1) == 'i') {
      uVar2 = 0x8f;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x6c5f66666f746f67 &&
        *(char *)(ppplStack_48 + 1) == 'o') {
      uVar2 = 0x90;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x685f64675f736c74 &&
        *(char *)(ppplStack_48 + 1) == 'i') {
      uVar2 = 0x93;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x6c5f64675f736c74 &&
        *(char *)(ppplStack_48 + 1) == 'o') {
      uVar2 = 0x94;
      goto code_r0x000109daf648;
    }
    break;
  case 10:
    if ((long ***)*ppplStack_48 == (long ***)0x6f65676170746f67 &&
        *(short *)(ppplStack_48 + 1) == 0x6666) {
      uVar2 = 0x1a;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x6968406c65727074 &&
        *(short *)(ppplStack_48 + 1) == 0x6867) {
      uVar2 = 0x47;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x7270746440746f67 &&
        *(short *)(ppplStack_48 + 1) == 0x6c65) {
      uVar2 = 0x5a;
      goto code_r0x000109daf648;
    }
    break;
  case 0xb:
    if ((long ***)*ppplStack_48 == (long ***)0x6567617070766c74 &&
        *(long *)((long)ppplStack_48 + 3) == 0x66666f6567617070) {
      uVar2 = 0x16;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x6968406c65727074 &&
        *(long *)((long)ppplStack_48 + 3) == 0x6168676968406c65) {
      uVar2 = 0x48;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x68406c6572707464 &&
        *(long *)((long)ppplStack_48 + 3) == 0x68676968406c6572) {
      uVar2 = 0x50;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x6572707440746f67 &&
        *(long *)((long)ppplStack_48 + 3) == 0x6c406c6572707440) {
      uVar2 = 0x57;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x6572707440746f67 &&
        *(long *)((long)ppplStack_48 + 3) == 0x68406c6572707440) {
      uVar2 = 0x58;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x67736c7440746f67 &&
        *(long *)((long)ppplStack_48 + 3) == 0x6c406467736c7440) {
      uVar2 = 0x60;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x67736c7440746f67 &&
        *(long *)((long)ppplStack_48 + 3) == 0x68406467736c7440) {
      uVar2 = 0x61;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x6c736c7440746f67 &&
        *(long *)((long)ppplStack_48 + 3) == 0x6c40646c736c7440) {
      uVar2 = 0x67;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x6c736c7440746f67 &&
        *(long *)((long)ppplStack_48 + 3) == 0x6840646c736c7440) {
      uVar2 = 0x68;
      goto code_r0x000109daf648;
    }
    break;
  case 0xc:
    if ((long ***)*ppplStack_48 == (long ***)0x6968406c65727074 &&
        *(int *)(ppplStack_48 + 1) == 0x72656867) {
      uVar2 = 0x49;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x68406c6572707464 &&
        *(int *)(ppplStack_48 + 1) == 0x61686769) {
      uVar2 = 0x51;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x6572707440746f67 &&
        *(int *)(ppplStack_48 + 1) == 0x6168406c) {
      uVar2 = 0x59;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x7270746440746f67 &&
        *(int *)(ppplStack_48 + 1) == 0x6c406c65) {
      uVar2 = 0x5b;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x7270746440746f67 &&
        *(int *)(ppplStack_48 + 1) == 0x68406c65) {
      uVar2 = 0x5c;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x67736c7440746f67 &&
        *(int *)(ppplStack_48 + 1) == 0x61684064) {
      uVar2 = 0x62;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x6c736c7440746f67 &&
        *(int *)(ppplStack_48 + 1) == 0x61684064) {
      uVar2 = 0x69;
      goto code_r0x000109daf648;
    }
    break;
  case 0xd:
    if ((long ***)*ppplStack_48 == (long ***)0x6968406c65727074 &&
        *(long *)((long)ppplStack_48 + 5) == 0x6172656867696840) {
      uVar2 = 0x4a;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x6968406c65727074 &&
        *(long *)((long)ppplStack_48 + 5) == 0x7473656867696840) {
      uVar2 = 0x4b;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x68406c6572707464 &&
        *(long *)((long)ppplStack_48 + 5) == 0x726568676968406c) {
      uVar2 = 0x52;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x7270746440746f67 &&
        *(long *)((long)ppplStack_48 + 5) == 0x6168406c65727074) {
      uVar2 = 0x5d;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x6c65726370746f67 &&
        *(long *)((long)ppplStack_48 + 5) == 0x6f6c4032336c6572) {
      uVar2 = 0x82;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x6c65726370746f67 &&
        *(long *)((long)ppplStack_48 + 5) == 0x69684032336c6572) {
      uVar2 = 0x83;
      goto code_r0x000109daf648;
    }
    break;
  case 0xe:
    if ((long ***)*ppplStack_48 == (long ***)0x6968406c65727074 &&
        *(long *)((long)ppplStack_48 + 6) == 0x6174736568676968) {
      uVar2 = 0x4c;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x68406c6572707464 &&
        *(long *)((long)ppplStack_48 + 6) == 0x6172656867696840) {
      uVar2 = 0x53;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x68406c6572707464 &&
        *(long *)((long)ppplStack_48 + 6) == 0x7473656867696840) {
      uVar2 = 0x54;
      goto code_r0x000109daf648;
    }
    break;
  case 0xf:
    if ((long ***)*ppplStack_48 == (long ***)0x68406c6572707464 &&
        *(long *)((long)ppplStack_48 + 7) == 0x6174736568676968) {
      uVar2 = 0x55;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x67736c7440746f67 &&
        *(long *)((long)ppplStack_48 + 7) == 0x6c65726370406467) {
      uVar2 = 0x6b;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x6c736c7440746f67 &&
        *(long *)((long)ppplStack_48 + 7) == 0x6c6572637040646c) {
      uVar2 = 0x6c;
      goto code_r0x000109daf648;
    }
    if ((long ***)*ppplStack_48 == (long ***)0x6572707440746f67 &&
        *(long *)((long)ppplStack_48 + 7) == 0x6c65726370406c65) {
      uVar2 = 0x6d;
      goto code_r0x000109daf648;
    }
    break;
  case 0x10:
    if ((long ***)*ppplStack_48 == (long ***)0x6c65726370746f67 &&
        (long ***)ppplStack_48[1] == (long ***)0x78616c65726f6e5f) {
      uVar2 = 7;
      goto code_r0x000109daf648;
    }
  }
  uVar2 = 1;
code_r0x000109daf648:
  if (cStack_31 < '\0') {
    __ZdlPv();
  }
  return uVar2;
}



/* Entry: 109daffe4; end: 109db0553;  */

void FUN_109daffe4(byte *param_1,long *param_2,undefined8 *param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,ulong param_7)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  undefined8 uVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined4 uStack_88;
  long lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  bVar3 = *param_1;
  if (1 < bVar3) {
    if (bVar3 != 2) {
      if (bVar3 != 3) {
                    /* WARNING: Could not recover jumptable at 0x000109db0204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(param_1 + -8) + 0x20))(param_1 + -8,param_2,param_4,param_5);
        return;
      }
      lStack_80 = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      FUN_109daffe4(uVar6,&lStack_80,param_3,param_4,param_5,param_6,param_7);
      if ((int)uVar6 == 0) {
        return;
      }
      uVar1 = *(uint *)(param_1 + 1) & 0xffffff;
      if (uVar1 < 2) {
        if (uVar1 != 0) {
          if (uVar1 != 1) {
            return;
          }
          if ((lStack_80 != 0) && (CONCAT44(uStack_74,uStack_78) == 0)) {
            return;
          }
          *param_2 = CONCAT44(uStack_74,uStack_78);
          param_2[1] = lStack_80;
          param_2[2] = -CONCAT44(uStack_6c,uStack_70);
          goto LAB_109db0348;
        }
        if (lStack_80 != 0 || CONCAT44(uStack_74,uStack_78) != 0) {
          return;
        }
        uVar12 = (ulong)(CONCAT44(uStack_6c,uStack_70) == 0);
      }
      else {
        if (uVar1 != 2) {
          if (uVar1 != 3) {
            return;
          }
          param_2[1] = CONCAT44(uStack_74,uStack_78);
          *param_2 = lStack_80;
          *(ulong *)((long)param_2 + 0x14) = CONCAT44(uStack_68,uStack_6c);
          *(ulong *)((long)param_2 + 0xc) = CONCAT44(uStack_70,uStack_74);
          return;
        }
        if (lStack_80 != 0 || CONCAT44(uStack_74,uStack_78) != 0) {
          return;
        }
        uVar12 = ~CONCAT44(uStack_6c,uStack_70);
      }
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = uVar12;
      goto LAB_109db0348;
    }
    uVar12 = *(ulong *)(param_1 + 0x10);
    if (((*(ulong *)(uVar12 + 8) & 0x1c00) == 0x800) &&
       ((uVar1 = *(uint *)(param_1 + 1), param_4 != 0 || ((uVar1 & 0xffff) == 0)))) {
      uVar11 = *(ulong *)(uVar12 + 8) | 4;
      *(ulong *)(uVar12 + 8) = uVar11;
      pcVar7 = *(char **)(uVar12 + 0x18);
      if (*pcVar7 == '\x02') {
        if (((param_7 & 1) == 0) && (*(short *)(pcVar7 + 1) != 0x1d)) goto LAB_109db028c;
        if (*(short *)(pcVar7 + 1) != 0x1d) goto LAB_109db02a4;
      }
      else {
        if ((param_7 & 1) == 0) {
LAB_109db028c:
          uVar11 = uVar12;
          func_0x000109da4450();
          if ((uVar11 & 1) != 0) goto LAB_109db033c;
          pcVar7 = *(char **)(uVar12 + 0x18);
          uVar11 = *(ulong *)(uVar12 + 8) | 4;
        }
LAB_109db02a4:
        uVar2 = *(uint *)(param_1 + 1);
        *(ulong *)(uVar12 + 8) = uVar11;
        FUN_109daffe4(pcVar7,param_2,param_3,param_4,param_5,param_6,
                      (uint)param_7 | (uVar2 & 0x10000) >> 0x10);
        if ((int)pcVar7 != 0) {
          if ((uVar1 & 0xffff) != 0) {
            if (*param_2 == 0) {
              if (param_2[1] != 0) {
                return;
              }
              *param_2 = (long)param_1;
              param_2[1] = 0;
              param_2[2] = 0;
              *(undefined4 *)(param_2 + 3) = 0;
              return;
            }
            if ((int)param_2[3] != 0) {
              return;
            }
            if (param_2[1] != 0) {
              return;
            }
            if (param_2[2] != 0) {
              return;
            }
            lVar9 = *(long *)(*param_2 + 0x10);
            FUN_109dae8f4(lVar9,uVar1 & 0xffff,*param_3,0);
            *param_2 = lVar9;
          }
          if ((uVar2 >> 0x10 & 1) == 0) {
            return;
          }
          if (*param_2 == 0 && param_2[1] == 0) {
            return;
          }
          if ((param_2[2] == 0) && (*param_2 == 0 || param_2[1] == 0)) {
            return;
          }
        }
      }
    }
LAB_109db033c:
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = (long)param_1;
    goto LAB_109db0348;
  }
  if (bVar3 != 0) {
    lVar9 = *(long *)(param_1 + 0x10);
    goto LAB_109db020c;
  }
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  FUN_109daffe4(uVar6,&lStack_80,param_3,param_4,param_5,param_6,param_7);
  if ((int)uVar6 == 0) {
LAB_109db0220:
    plVar8 = (long *)(*(char **)(param_1 + 0x10) + -8);
    if (**(char **)(param_1 + 0x10) != '\x04') {
      return;
    }
    lVar9 = *(long *)(param_1 + 0x18);
    if (lVar9 == 0) {
      return;
    }
    if ((*(uint *)(param_1 + 1) & 0xffffff) == 0xc) {
      uVar12 = lVar9 - 8;
      (**(code **)(*(long *)(lVar9 + -8) + 0x28))();
      *param_2 = 0;
      param_2[1] = 0;
      lVar9 = (uVar12 & 0xffffffff) - 1;
      goto LAB_109db0210;
    }
    if ((*(uint *)(param_1 + 1) & 0xffffff) != 3) {
      return;
    }
    (**(code **)(*plVar8 + 0x28))();
    lVar9 = -((ulong)plVar8 & 1);
    goto LAB_109db020c;
  }
  uVar12 = *(ulong *)(param_1 + 0x18);
  FUN_109daffe4(uVar12,&lStack_a0,param_3,param_4,param_5,param_6,param_7);
  if ((uVar12 & 1) == 0) goto LAB_109db0220;
  lVar13 = -(ulong)(lStack_a0 == 0);
  lVar14 = -(ulong)(lStack_98 == 0);
  lVar9 = -(ulong)(lStack_80 == 0);
  lVar10 = -(ulong)(CONCAT44(uStack_74,uStack_78) == 0);
  auVar4[1] = ~(byte)((ulong)lVar9 >> 8);
  auVar4[0] = ~(byte)lVar9;
  auVar4[2] = ~(byte)((ulong)lVar9 >> 0x10);
  auVar4[3] = ~(byte)((ulong)lVar9 >> 0x18);
  auVar4[4] = ~(byte)lVar10;
  auVar4[5] = ~(byte)((ulong)lVar10 >> 8);
  auVar4[6] = ~(byte)((ulong)lVar10 >> 0x10);
  auVar4[7] = ~(byte)((ulong)lVar10 >> 0x18);
  auVar4[8] = ~(byte)lVar13;
  auVar4[9] = ~(byte)((ulong)lVar13 >> 8);
  auVar4[10] = ~(byte)((ulong)lVar13 >> 0x10);
  auVar4[0xb] = ~(byte)((ulong)lVar13 >> 0x18);
  auVar4[0xc] = ~(byte)lVar14;
  auVar4[0xd] = ~(byte)((ulong)lVar14 >> 8);
  auVar4[0xe] = ~(byte)((ulong)lVar14 >> 0x10);
  auVar4[0xf] = ~(byte)((ulong)lVar14 >> 0x18);
  uVar1 = NEON_umaxv(auVar4,4);
  if ((uVar1 & 1) != 0) {
    lVar9 = lStack_a0;
    lVar10 = lStack_98;
    uVar12 = uStack_90;
    if ((*(uint *)(param_1 + 1) & 0xffffff) != 0) {
      if ((*(uint *)(param_1 + 1) & 0xffffff) != 0x12) {
        return;
      }
      lVar9 = lStack_98;
      lVar10 = lStack_a0;
      uVar12 = -uStack_90;
    }
    FUN_109db0554(param_3,param_4,param_6,param_7,&lStack_80,lVar9,lVar10,uVar12,param_2);
    return;
  }
  uVar1 = *(uint *)(param_1 + 1) & 0xffffff;
  if (0x13 < uVar1) {
    uVar12 = 0;
LAB_109db052c:
    if ((uVar1 < 0xd) && ((1 << (ulong)(*(uint *)(param_1 + 1) & 0x1f) & 0x1338U) != 0))
    goto code_r0x000109db0548;
    goto LAB_109db0518;
  }
  uVar11 = CONCAT44(uStack_6c,uStack_70);
  switch(uVar1) {
  case 0:
    uVar12 = uStack_90 + uVar11;
    break;
  case 1:
    uVar12 = uStack_90 & uVar11;
    break;
  default:
    if (uStack_90 == 0) {
      return;
    }
    if (uVar1 != 2) {
      lVar9 = 0;
      if (uStack_90 != 0) {
        lVar9 = (long)uVar11 / (long)uStack_90;
      }
      uVar12 = uVar11 - lVar9 * uStack_90;
      goto LAB_109db052c;
    }
    uVar12 = 0;
    if (uStack_90 != 0) {
      uVar12 = (long)uVar11 / (long)uStack_90;
    }
    break;
  case 3:
    uVar12 = (ulong)(uVar11 == uStack_90);
    goto code_r0x000109db0548;
  case 4:
    uVar12 = (ulong)((long)uStack_90 < (long)uVar11);
    goto code_r0x000109db0548;
  case 5:
    uVar12 = (ulong)((long)uStack_90 <= (long)uVar11);
    goto code_r0x000109db0548;
  case 6:
    bVar5 = uVar11 == 0 || uStack_90 == 0;
    goto code_r0x000109db04c8;
  case 7:
    bVar5 = uVar11 == 0 && uStack_90 == 0;
code_r0x000109db04c8:
    uVar12 = (ulong)!bVar5;
    break;
  case 8:
    uVar12 = (ulong)((long)uVar11 < (long)uStack_90);
    goto code_r0x000109db0548;
  case 9:
    uVar12 = (ulong)((long)uVar11 <= (long)uStack_90);
    goto code_r0x000109db0548;
  case 0xb:
    uVar12 = uStack_90 * uVar11;
    break;
  case 0xc:
    uVar12 = (ulong)(uVar11 != uStack_90);
code_r0x000109db0548:
    lVar9 = -(ulong)(uVar12 != 0);
LAB_109db020c:
    *param_2 = 0;
    param_2[1] = 0;
LAB_109db0210:
    param_2[2] = lVar9;
    *(undefined4 *)(param_2 + 3) = 0;
    return;
  case 0xd:
    uVar12 = uStack_90 | uVar11;
    break;
  case 0xe:
    uVar12 = uVar11 | uStack_90 ^ 0xffffffffffffffff;
    break;
  case 0xf:
    uVar12 = uVar11 << (uStack_90 & 0x3f);
    break;
  case 0x10:
    uVar12 = (long)uVar11 >> (uStack_90 & 0x3f);
    break;
  case 0x11:
    uVar12 = uVar11 >> (uStack_90 & 0x3f);
    break;
  case 0x12:
    uVar12 = uVar11 - uStack_90;
    break;
  case 0x13:
    uVar12 = uStack_90 ^ uVar11;
  }
LAB_109db0518:
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = uVar12;
LAB_109db0348:
  *(undefined4 *)(param_2 + 3) = 0;
  return;
}



/* Entry: 109db0554; end: 109db0667;  */

undefined8
FUN_109db0554(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long *param_5,
             long param_6,long param_7,long param_8,long *param_9)

{
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_48 = *param_5;
  lStack_50 = param_5[1];
  lStack_58 = param_5[2] + param_8;
  lStack_40 = param_7;
  if (param_1 != 0) {
    lStack_38 = param_6;
    FUN_109db0730();
    FUN_109db0730(param_1,param_2,param_3,param_4,&lStack_48,&lStack_40,&lStack_58);
    FUN_109db0730(param_1,param_2,param_3,param_4,&lStack_38,&lStack_50,&lStack_58);
    FUN_109db0730(param_1,param_2,param_3,param_4,&lStack_38,&lStack_40,&lStack_58);
    param_6 = lStack_38;
  }
  if (((lStack_48 == 0) || (param_6 == 0)) && ((lStack_50 == 0 || (lStack_40 == 0)))) {
    if (lStack_48 == 0) {
      lStack_48 = param_6;
    }
    if (lStack_50 == 0) {
      lStack_50 = lStack_40;
    }
    *param_9 = lStack_48;
    param_9[1] = lStack_50;
    param_9[2] = lStack_58;
    *(undefined4 *)(param_9 + 3) = 0;
    return 1;
  }
  return 0;
}



/* Entry: 109db0668; end: 109db072f;  */

/* WARNING: Removing unreachable block (ram,0x000109da44d0) */

void FUN_109db0668(byte *param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong *puVar3;
  
  for (; bVar1 = *param_1, bVar1 == 3; param_1 = *(byte **)(param_1 + 0x10)) {
  }
  if (1 < bVar1) {
    if (bVar1 != 2) {
                    /* WARNING: Could not recover jumptable at 0x000109db0724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + -8) + 0x40))(param_1 + -8);
      return;
    }
    puVar3 = *(ulong **)(param_1 + 0x10);
    if (((*puVar3 & 0xfffffffffffffff8) == 0) && ((puVar3[1] & 0x1c00) == 0x800)) {
      puVar3[1] = puVar3[1] & 0xffffffffffffebfb | 4;
      uVar2 = puVar3[3];
      FUN_109db0668();
      *puVar3 = *puVar3 & 7 | uVar2;
    }
    return;
  }
  if (bVar1 == 0) {
    FUN_109db0668();
    FUN_109db0668();
  }
  return;
}



/* Entry: 109db0730; end: 109db09d3;  */

void FUN_109db0730(long param_1,long param_2,undefined8 *param_3,undefined8 param_4,long *param_5,
                  long *param_6,long *param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long lStack_68;
  
  if (*param_5 == 0 || *param_6 == 0) {
    return;
  }
  lVar5 = *(long *)(*param_5 + 0x10);
  lVar4 = *(long *)(*param_6 + 0x10);
  lVar3 = lVar5;
  lStack_70 = param_1;
  func_0x000109da4494(lVar5,1);
  if (lVar3 == 0) {
    return;
  }
  lVar3 = lVar4;
  func_0x000109da4494(lVar4,1);
  if (lVar3 == 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_109db4cec(uVar1,param_1,*param_5,*param_6,param_4);
  if ((int)uVar1 == 0) {
    return;
  }
  plStack_98 = &lStack_70;
  lVar3 = lVar5;
  lStack_90 = lVar5;
  plStack_88 = param_7;
  plStack_80 = param_5;
  plStack_78 = param_6;
  func_0x000109da4494(lVar5,1);
  lVar7 = lVar4;
  func_0x000109da4494(lVar4,1);
  if (((lVar3 == lVar7) && ((*(byte *)(lVar5 + 9) & 0x14) != 0)) &&
     ((*(byte *)(lVar4 + 9) & 0x14) != 0)) {
    lVar3 = *(long *)(lVar5 + 0x18) - *(long *)(lVar4 + 0x18);
LAB_109db0998:
    lVar4 = *param_7;
  }
  else {
    lVar2 = *(long *)(lVar3 + 0x10);
    lVar6 = *(long *)(lVar7 + 0x10);
    if ((param_3 == (undefined8 *)0x0) && (lVar2 != lVar6)) {
      return;
    }
    if (param_2 != 0) {
      lVar4 = param_2;
      func_0x000109db0b3c(param_2,lVar3);
      if ((int)lVar4 == 0) {
        return;
      }
      lVar3 = param_2;
      func_0x000109db0b3c(param_2,lVar7);
      if ((int)lVar3 == 0) {
        return;
      }
      FUN_109db0c44(param_2,*(undefined8 *)(*param_5 + 0x10),1,&lStack_68);
      lVar3 = lStack_68;
      FUN_109db0c44(param_2,*(undefined8 *)(*param_6 + 0x10),1,&lStack_68);
      *param_7 = (lVar3 - lStack_68) + *param_7;
      if ((lVar2 == lVar6) || (param_3 == (undefined8 *)0x0)) goto LAB_109db09a4;
      uVar1 = *param_3;
      FUN_109db0a4c(uVar1,*(undefined4 *)(param_3 + 2),lVar2,&lStack_68);
      if ((int)uVar1 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(long *)(lStack_68 + 8);
      }
      uVar1 = *param_3;
      FUN_109db0a4c(uVar1,*(undefined4 *)(param_3 + 2),lVar6,&lStack_68);
      if ((int)uVar1 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(lStack_68 + 8);
      }
      lVar3 = lVar3 - lVar4;
      goto LAB_109db0998;
    }
    if ((*(byte *)(lVar5 + 9) & 0x14) == 0) {
      return;
    }
    if ((*(byte *)(lVar4 + 9) & 0x14) == 0) {
      return;
    }
    if (*(char *)(lVar3 + 0x30) != '\x01') {
      return;
    }
    if (*(char *)(lVar7 + 0x30) != '\x01') {
      return;
    }
    if (*(int *)(lVar3 + 0x2c) != *(int *)(lVar7 + 0x2c)) {
      return;
    }
    if (lVar7 == lVar2 + 0x68) {
      return;
    }
    lVar4 = *(long *)(lVar5 + 0x18) - *(long *)(lVar4 + 0x18);
    while (lVar7 != lVar3) {
      if (*(char *)(lVar7 + 0x30) != '\x01') {
        return;
      }
      lVar4 = *(long *)(lVar7 + 0x48) + lVar4;
      lVar7 = *(long *)(lVar7 + 8);
      if (lVar7 == lVar2 + 0x68) {
        return;
      }
    }
    lVar3 = *param_7;
  }
  *param_7 = lVar3 + lVar4;
LAB_109db09a4:
  FUN_109db09d4(&plStack_98);
  return;
}



/* Entry: 109db09d4; end: 109db0a4b;  */

void FUN_109db09d4(undefined8 *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  uVar1 = *(undefined8 *)*param_1;
  FUN_109da42e4(uVar1,param_1[1]);
  if ((int)uVar1 != 0) {
    *(ulong *)param_1[2] = *(ulong *)param_1[2] | 1;
  }
  plVar2 = *(long **)(*(long *)*param_1 + 8);
  (**(code **)(*plVar2 + 0xe0))(plVar2,param_1[1]);
  if ((int)plVar2 != 0) {
    *(ulong *)param_1[2] = *(ulong *)param_1[2] | 1;
  }
  *(undefined8 *)param_1[4] = 0;
  *(undefined8 *)param_1[3] = 0;
  return;
}



/* Entry: 109db0a4c; end: 109db0ad7;  */

undefined8 FUN_109db0a4c(long param_1,int param_2,long param_3,long *param_4)

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
          goto LAB_109db0a80;
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
LAB_109db0a80:
  *param_4 = (long)plVar3;
  return uVar2;
}



/* Entry: 109db0ad8; end: 109db0bb3;  */

bool FUN_109db0ad8(long param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  long lStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = param_1 + 0x98;
  FUN_109da4ad4(uVar2,&uStack_28,&lStack_30);
  if (((uVar2 & 1) == 0) || (*(long *)(lStack_30 + 8) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = *(uint *)(param_2 + 0x28) <= *(uint *)(*(long *)(lStack_30 + 8) + 0x28);
  }
  return bVar1;
}



/* Entry: 109db0bb4; end: 109db0c43;  */

void FUN_109db0bb4(ulong param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lStack_38;
  
  lStack_38 = *(long *)(param_2 + 0x10);
  lVar3 = param_1 + 0x98;
  func_0x000109db0ee4(lVar3,&lStack_38);
  plVar1 = (long *)(lStack_38 + 0x70);
  if (*(long *)(lVar3 + 8) != 0) {
    plVar1 = (long *)(*(long *)(lVar3 + 8) + 8);
  }
  lVar3 = *plVar1;
  uVar2 = param_1;
  FUN_109db0ad8(param_1,param_2);
  if ((uVar2 & 1) == 0) {
    do {
      FUN_109da482c(param_1,lVar3);
      lVar3 = *(long *)(lVar3 + 8);
      uVar2 = param_1;
      FUN_109db0ad8(param_1,param_2);
    } while ((int)uVar2 == 0);
  }
  return;
}



/* Entry: 109db0c44; end: 109db0deb;  */

undefined1  [16] FUN_109db0c44(undefined8 *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  byte *pbVar4;
  long *plVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined4 uStack_c0;
  undefined *apuStack_b8 [4];
  undefined2 uStack_98;
  undefined *apuStack_90 [2];
  long *plStack_80;
  long *plStack_78;
  undefined2 uStack_70;
  long alStack_68 [5];
  
  if ((param_2[1] & 0x1c00U) != 0x800) {
    plVar5 = (long *)0x1;
    plVar3 = param_2;
    func_0x000109da4494();
    if (plVar3 == (long *)0x0) {
      if ((int)param_3 != 0) {
        FUN_109db0dec();
        apuStack_90[0] = &UNK_10f5fad07;
        goto LAB_109db0db4;
      }
    }
    else {
      param_3 = 1;
      plVar3 = param_2;
      func_0x000109da4494(param_2,1);
      plVar5 = plVar3;
      FUN_109db0bb4(param_1,plVar3);
      *param_4 = param_2[3] + plVar3[4];
    }
    goto LAB_109db0d64;
  }
  lStack_d8 = 0;
  lStack_d0 = 0;
  uStack_c0 = 0;
  lStack_c8 = 0;
  param_2[1] = param_2[1] | 4;
  uVar1 = param_2[3];
  plVar5 = &lStack_d8;
  FUN_109daffe4(uVar1,plVar5,*param_1,param_1,0,0,1);
  lVar6 = lStack_c8;
  if ((uVar1 & 1) == 0) {
    FUN_109db0dec();
    apuStack_90[0] = &UNK_10f5facde;
LAB_109db0db4:
    uStack_70 = 0x503;
    apuStack_b8[0] = &DAT_10f638984;
    uStack_98 = 0x103;
    plStack_80 = param_2;
    plStack_78 = plVar5;
    FUN_109d35b30(alStack_68,apuStack_90,apuStack_b8);
    pbVar4 = (byte *)alStack_68;
    FUN_109df7858(pbVar4,1);
    if ((*pbVar4 >> 2 & 1) == 0) {
      return ZEXT816(0);
    }
    auVar8._0_8_ = *(undefined8 **)(pbVar4 + -8) + 2;
    auVar8._8_8_ = **(undefined8 **)(pbVar4 + -8);
    return auVar8;
  }
  if (lStack_d8 == 0) {
LAB_109db0ce0:
    if (lStack_d0 != 0) {
      plVar5 = *(long **)(lStack_d0 + 0x10);
      FUN_109db0c44(param_1,plVar5,param_3,alStack_68);
      if ((int)param_1 == 0) goto LAB_109db0d58;
      lVar6 = lVar6 - alStack_68[0];
    }
    *param_4 = lVar6;
    param_3 = 1;
  }
  else {
    plVar5 = *(long **)(lStack_d8 + 0x10);
    puVar2 = param_1;
    FUN_109db0c44(param_1,plVar5,param_3,alStack_68);
    if ((int)puVar2 != 0) {
      lVar6 = alStack_68[0] + lVar6;
      goto LAB_109db0ce0;
    }
LAB_109db0d58:
    param_3 = 0;
  }
LAB_109db0d64:
  auVar7._8_8_ = plVar5;
  auVar7._0_8_ = param_3;
  return auVar7;
}



/* Entry: 109db0dec; end: 109db0e0b;  */

undefined1  [16] FUN_109db0dec(byte *param_1)

{
  undefined1 auVar1 [16];
  
  if ((*param_1 >> 2 & 1) == 0) {
    return ZEXT816(0);
  }
  auVar1._0_8_ = *(undefined8 **)(param_1 + -8) + 2;
  auVar1._8_8_ = **(undefined8 **)(param_1 + -8);
  return auVar1;
}



/* Entry: 109db0e0c; end: 109db0f3b;  */

void FUN_109db0e0c(long param_1)

{
  long lVar1;
  long lVar2;
  
  switch(*(char *)(param_1 + 0x30)) {
  case '\0':
  case '\x03':
  case '\x04':
  case '\x06':
  case '\n':
  case '\v':
  case '\x0f':
    goto LAB_109db0ebc;
  case '\x02':
  case '\t':
    goto code_r0x000109db0ea8;
  case '\x05':
    if (*(long *)(param_1 + 0x98) != param_1 + 0xa8) {
      _free();
    }
  case '\a':
  case '\b':
  case '\x0e':
    lVar1 = *(long *)(param_1 + 0x60);
    lVar2 = param_1 + 0x70;
    break;
  case '\f':
    lVar1 = *(long *)(param_1 + 0x50);
    lVar2 = param_1 + 0x68;
    goto code_r0x000109db0eb0;
  case '\r':
    if (*(long *)(param_1 + 0x118) != param_1 + 0x130) {
      _free();
    }
    if (*(long *)(param_1 + 0xe8) != param_1 + 0xf8) {
      _free();
    }
  case '\x01':
    lVar1 = *(long *)(param_1 + 0x78);
    lVar2 = param_1 + 0x88;
    break;
  default:
    if (*(char *)(param_1 + 0x30) != -1) {
      return;
    }
    goto LAB_109db0ebc;
  }
  if (lVar1 != lVar2) {
    _free();
  }
code_r0x000109db0ea8:
  lVar1 = *(long *)(param_1 + 0x40);
  lVar2 = param_1 + 0x58;
code_r0x000109db0eb0:
  if (lVar1 != lVar2) {
    _free();
  }
LAB_109db0ebc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109db0f3c; end: 109db1f73;  */

void FUN_109db0f3c(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  
  *(undefined1 *)(param_1 + 8) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f3b2cbe,6,&UNK_10f5fad37,10,0x6800000b,0,4,0);
  *(undefined8 *)(param_1 + 0x1c8) = uVar2;
  uVar7 = *(uint *)(param_2 + 0x24);
  if ((((uVar7 & 0xfffffff7) == 3) ||
      ((uVar7 < 0x1f && ((1 << (ulong)(uVar7 & 0x1f) & 0x70000080U) != 0)))) &&
     (*(int *)(param_2 + 0x18) == 5 || *(int *)(param_2 + 0x18) == 3)) {
    *(undefined1 *)(param_1 + 9) = 1;
  }
  lVar3 = *(long *)(param_1 + 0x360);
  if ((*(long *)(lVar3 + 0x800) == 0) ||
     (iVar1 = *(int *)(*(long *)(lVar3 + 0x800) + 4), iVar1 == 2)) {
    if (*(int *)(param_2 + 0x1c) == 0x18) {
      bVar5 = 1;
    }
    else {
      bVar5 = *(byte *)(param_1 + 9);
    }
    bVar5 = bVar5 & 1;
LAB_109db1028:
    *(byte *)(param_1 + 10) = bVar5;
  }
  else {
    bVar5 = 1;
    if (iVar1 == 1) goto LAB_109db1028;
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0x10;
  FUN_109da85ec(lVar3,&UNK_10f3b2cbe,6,&UNK_10f5fad42,6,0x80000000,0,2,0);
  *(long *)(param_1 + 0x18) = lVar3;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f3b2c13,6,&UNK_10f5fad49,6,0,0,0x13,0);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f3b2c13,6,&UNK_10f5fad50,0xd,0x11,0,0x13,0);
  *(undefined8 *)(param_1 + 0x1a0) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f3b2c13,6,&UNK_10f5fad5e,0xc,0x12,0,0xc,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f3b2c13,6,&UNK_10f5fad6b,0xd,0x13,0,0x13,0);
  *(undefined8 *)(param_1 + 0x218) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f3b2c13,6,&UNK_10f5fad79,0xd,0x15,0,0x13,0);
  *(undefined8 *)(param_1 + 0x220) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f3b2cbe,6,&UNK_10f5fad87,9,2,0,5,0);
  *(undefined8 *)(param_1 + 0x228) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f3b2cbe,6,&UNK_10f5fad91,9,0,0,6,0);
  *(undefined8 *)(param_1 + 0x230) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f3b2cbe,6,&UNK_10f5fad9b,10,3,0,8,0);
  *(undefined8 *)(param_1 + 0x270) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f3b2cbe,6,&UNK_10f5fada6,10,4,0,9,0);
  *(undefined8 *)(param_1 + 0x278) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f3b2cbe,6,&UNK_10f5fadb1,0xb,0xe,0,10,0);
  *(undefined8 *)(param_1 + 0x280) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f3b2cbe,6,&UNK_10f5fadbd,7,0,0,4,0);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  uVar7 = *(uint *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f3b2c13,6,&UNK_10f5fadbd,7,0,0,0x14,0);
  *(undefined8 *)(param_1 + 0x248) = uVar2;
  if ((uVar7 & 0xfffffffd) == 0x15) {
    uVar2 = *(undefined8 *)(param_1 + 0x360);
    FUN_109da85ec(uVar2,&UNK_10f3b2cbe,6,&UNK_10f5fadc5,0xd,0x8000000b,0,2,0);
    *(undefined8 *)(param_1 + 0x238) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x360);
    FUN_109da85ec(uVar2,&UNK_10f3b2cbe,6,&UNK_10f5fadd3,0xc,0xb,0,4,0);
    *(undefined8 *)(param_1 + 0x240) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x360);
    FUN_109da85ec(uVar2,&UNK_10f3b2c13,6,&UNK_10f5fade0,0xd,0xb,0,0x13,0);
    uVar8 = uVar2;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_1 + 0x30);
  }
  *(undefined8 *)(param_1 + 0x250) = uVar8;
  *(undefined8 *)(param_1 + 600) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f3b2c13,6,&UNK_10f5fadee,8,1,0,0xf,0);
  *(undefined8 *)(param_1 + 0x260) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f3b2c13,6,&UNK_10f5fadf7,5,1,0,0xf,0);
  *(undefined8 *)(param_1 + 0x268) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f3b2c13,6,&UNK_10f5fadfd,0xf,7,0,0,0);
  *(undefined8 *)(param_1 + 0x288) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f3b2c13,6,&UNK_10f5fae0d,0xf,6,0,0,0);
  *(undefined8 *)(param_1 + 0x290) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f3b2c13,6,&UNK_10f5fae1d,0xc,0x14,0,0,0);
  *(undefined8 *)(param_1 + 0x298) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f3b2c13,6,&UNK_10f5fae2a,0xe,0,0,0x13,0);
  *(undefined8 *)(param_1 + 0x2a0) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f3b2cbe,6,&UNK_10f5fae39,0x10,0,0,0x14,0);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  uVar7 = *(uint *)(param_2 + 0x24);
  if (((uVar7 & 0xfffffff7) != 3) &&
     ((0x1e < uVar7 || ((1 << (ulong)(uVar7 & 0x1f) & 0x70000080U) == 0)))) goto LAB_109db157c;
  if ((*(int *)(param_2 + 0x18) != 3) &&
     ((*(int *)(param_2 + 0x18) != 5 && (*(int *)(param_2 + 0x1c) != 0x18)))) {
    if ((uVar7 & 0xfffffff7) == 3) {
      lVar3 = param_2;
      FUN_109e0ed2c(param_2,10,6,0);
      if ((int)lVar3 == 0) goto LAB_109db1530;
      uVar7 = *(uint *)(param_2 + 0x24);
    }
    if (((uVar7 != 0x1c) && (uVar7 != 7)) || (1 < *(int *)(param_2 + 0x18) - 0x25U))
    goto LAB_109db157c;
  }
LAB_109db1530:
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae4a,4,&UNK_10f5fae4f,0x10,0x2000000,0,4,0);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 - 0x25U < 2) {
LAB_109db1574:
    uVar6 = 0x4000000;
  }
  else {
    uVar6 = 0x3000000;
    if (iVar1 < 5) {
      if (iVar1 == 1) goto LAB_109db1574;
      if (iVar1 != 3) goto LAB_109db157c;
    }
    else if (iVar1 != 5) {
      if (iVar1 != 0x23) goto LAB_109db157c;
      goto LAB_109db1574;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = uVar6;
LAB_109db157c:
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5fae68,0xd,0x2000000,0,0,&UNK_10f5fae76);
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5fae88,0xd,0x2000000,0,0,&UNK_10f5fae96);
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5faea2,0xc,0x2000000,0,0,&UNK_10f5faeaf);
  *(undefined8 *)(param_1 + 200) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5faeba,0x10,0x2000000,0,0,&UNK_10f5faecb);
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5faeda,0xd,0x2000000,0,0,&UNK_10f5faee8);
  *(undefined8 *)(param_1 + 0xd8) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5faef4,0xb,0x2000000,0,0,0);
  *(undefined8 *)(param_1 + 0x178) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5faf00,0xe,0x2000000,0,0,&UNK_10f5faf0f);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5faf1e,0xc,0x2000000,0,0,&DAT_10f5faf2b);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5faf38,0xc,0x2000000,0,0,&UNK_10f5faf45);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5faf52,0x10,0x2000000,0,0,&UNK_10f5faf63);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5faf74,0xd,0x2000000,0,0,0);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5faf82,0x10,0x2000000,0,0,0);
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5faf93,0x10,0x2000000,0,0,0);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5fafa4,0x10,0x2000000,0,0,0);
  *(undefined8 *)(param_1 + 0x168) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5fafb5,0x10,0x2000000,0,0,0);
  *(undefined8 *)(param_1 + 0x170) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5fafc6,0xb,0x2000000,0,0,&UNK_10f5fafd2);
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5fafde,0x10,0x2000000,0,0,&UNK_10f5fafef);
  *(undefined8 *)(param_1 + 0x128) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5fafff,0xc,0x2000000,0,0,&DAT_10f5faf2b);
  *(undefined8 *)(param_1 + 0x130) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5fb00c,0xb,0x2000000,0,0,&UNK_10f5fb018);
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5fb02a,0x10,0x2000000,0,0,&UNK_10f5fb018);
  *(undefined8 *)(param_1 + 0x140) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5fb03b,0xf,0x2000000,0,0,0);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5fb04b,0xe,0x2000000,0,0,&UNK_10f5fb05a);
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5fb066,0x10,0x2000000,0,0,&UNK_10f5fb05a);
  *(undefined8 *)(param_1 + 0x138) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5fb077,0xf,0x2000000,0,0,&UNK_10f5af519);
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5fb087,0xd,0x2000000,0,0,&UNK_10f5af558);
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5fb095,0xf,0x2000000,0,0,0);
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5fb0a5,0x10,0x2000000,0,0,0);
  *(undefined8 *)(param_1 + 0x158) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fae60,7,&UNK_10f5fb0b6,0x10,0x2000000,0,0,0);
  *(undefined8 *)(param_1 + 0x160) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fb0c7,0x10,&UNK_10f5fb0d8,0x10,0,0,0,0);
  *(undefined8 *)(param_1 + 0x1b0) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fb0e9,0x10,&UNK_10f5fb0fa,0x10,0,0,0,0);
  *(undefined8 *)(param_1 + 0x1b8) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da85ec(uVar2,&UNK_10f5fb10b,6,&UNK_10f5fb112,9,0x2000000,0,0,0);
  *(undefined8 *)(param_1 + 0x1c0) = uVar2;
  lVar3 = *(long *)(param_1 + 0x360);
  if (*(long *)(lVar3 + 0x10) != 0) {
    lVar9 = *(long *)(lVar3 + 8);
    if (lVar9 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar9;
      _strlen(lVar9);
    }
    FUN_109da85ec(lVar3,lVar9,lVar4,&UNK_10f5fb11c,0x10,0,0,0,0);
    *(long *)(param_1 + 0x308) = lVar3;
    lVar3 = *(long *)(param_1 + 0x360);
    lVar9 = *(long *)(lVar3 + 8);
    if (lVar9 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar9;
      _strlen(lVar9);
    }
    FUN_109da85ec(lVar3,lVar9,lVar4,&UNK_10f5fb12d,0x10,0,0,0,0);
    *(long *)(param_1 + 0x310) = lVar3;
    lVar3 = *(long *)(param_1 + 0x360);
    lVar9 = *(long *)(lVar3 + 8);
    if (lVar9 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar9;
      _strlen(lVar9);
    }
    FUN_109da85ec(lVar3,lVar9,lVar4,&UNK_10f5fb13e,0x10,0,0,0,0);
    *(long *)(param_1 + 0x318) = lVar3;
    lVar3 = *(long *)(param_1 + 0x360);
    lVar9 = *(long *)(lVar3 + 8);
    if (lVar9 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar9;
      _strlen(lVar9);
    }
    FUN_109da85ec(lVar3,lVar9,lVar4,&UNK_10f5fb14f,0x10,0,0,0,0);
    *(long *)(param_1 + 800) = lVar3;
    lVar3 = *(long *)(param_1 + 0x360);
    lVar9 = *(long *)(lVar3 + 8);
    if (lVar9 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar9;
      _strlen(lVar9);
    }
    FUN_109da85ec(lVar3,lVar9,lVar4,&UNK_10f5fb160,0x10,0,0,0,0);
    *(long *)(param_1 + 0x328) = lVar3;
    lVar3 = *(long *)(param_1 + 0x360);
    lVar9 = *(long *)(lVar3 + 8);
    if (lVar9 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar9;
      _strlen(lVar9);
    }
    FUN_109da85ec(lVar3,lVar9,lVar4,&UNK_10f5fb171,0x10,0,0,0,0);
    *(long *)(param_1 + 0x330) = lVar3;
    lVar3 = *(long *)(param_1 + 0x360);
    lVar9 = *(long *)(lVar3 + 8);
    if (lVar9 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar9;
      _strlen(lVar9);
    }
    FUN_109da85ec(lVar3,lVar9,lVar4,&UNK_10f5fb182,0xe,0,0,0,0);
    *(long *)(param_1 + 0x338) = lVar3;
    lVar3 = *(long *)(param_1 + 0x360);
    lVar9 = *(long *)(lVar3 + 8);
    if (lVar9 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar9;
      _strlen(lVar9);
    }
    FUN_109da85ec(lVar3,lVar9,lVar4,&UNK_10f5fb191,0xf,0,0,0,0);
    *(long *)(param_1 + 0x340) = lVar3;
    lVar3 = *(long *)(param_1 + 0x360);
    lVar9 = *(long *)(lVar3 + 8);
    if (lVar9 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar9;
      _strlen(lVar9);
    }
    FUN_109da85ec(lVar3,lVar9,lVar4,&UNK_10f5fb1a1,0x10,0,0,0,0);
    *(long *)(param_1 + 0x348) = lVar3;
    lVar3 = *(long *)(param_1 + 0x360);
    lVar9 = *(long *)(lVar3 + 8);
    if (lVar9 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar9;
      _strlen(lVar9);
    }
    FUN_109da85ec(lVar3,lVar9,lVar4,&UNK_10f5fb1b2,0xf,0,0,0,0);
    *(long *)(param_1 + 0x350) = lVar3;
  }
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x218);
  return;
}



/* Entry: 109db1f74; end: 109db2f33;  */

void FUN_109db1f74(long param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  int iVar8;
  undefined *apuStack_b0 [4];
  undefined2 uStack_90;
  undefined1 auStack_88 [32];
  undefined2 uStack_68;
  
  uVar2 = *(uint *)(param_2 + 0x18);
  uVar7 = (ulong)uVar2;
  if ((int)uVar2 < 0x10) {
    if (uVar2 - 3 < 2) {
LAB_109db2008:
      bVar4 = param_3 == 0;
      iVar8 = 0x1b;
LAB_109db203c:
      if (!bVar4) {
        iVar8 = iVar8 + 1;
      }
      goto LAB_109db2040;
    }
    if (uVar2 - 8 < 2) {
      iVar8 = 0xc;
      goto LAB_109db2040;
    }
    if (uVar2 == 0xc) {
      iVar8 = (uint)*(byte *)(param_1 + 0x358) << 4;
      goto LAB_109db2040;
    }
  }
  else if (uVar2 < 0x29) {
    if ((1L << (uVar7 & 0x3f) & 0xf0000U) == 0) {
      if ((1L << (uVar7 & 0x3f) & 0x4001800000U) != 0) goto LAB_109db2008;
      if (uVar7 == 0x28) {
        iVar8 = 0xb;
        goto LAB_109db2040;
      }
    }
    else if (((param_3 & 1) != 0) || ((*(byte *)(param_1 + 0x358) & 1) == 0)) {
      bVar4 = *(int *)(*(long *)(*(long *)(param_1 + 0x360) + 0x90) + 8) == 4;
      iVar8 = 0xb;
      goto LAB_109db203c;
    }
  }
  iVar8 = 0x1b;
LAB_109db2040:
  *(int *)(param_1 + 0xc) = iVar8;
  uVar6 = 2;
  if (uVar2 != 0x26) {
    uVar6 = 3;
  }
  uVar3 = 0x70000001;
  if (uVar2 != 0x26) {
    uVar3 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5fb1c2;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  if (*(int *)(param_2 + 0x24) != 0xe) {
    uVar6 = 2;
  }
  FUN_109da8870(uVar5,apuStack_b0,8,3,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5fb1c7;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,1,6,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5fa793;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,1,3,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5fa7a6;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,1,2,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5fa7b4;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,1,0x403,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x1a0) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5fa7ae;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,8,0x403,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5fa799;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,1,3,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x1f0) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5fb1cd;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,1,0x12,4,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x1f8) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5fb1da;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,1,0x12,8,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x200) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5fb1e7;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,1,0x12,0x10,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x208) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5fb1f5;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,1,0x12,0x20,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x210) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5fb203;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,1,2,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  uVar1 = 0x7000001e;
  if ((*(uint *)(param_2 + 0x18) & 0xfffffffc) != 0x10) {
    uVar1 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af2cd;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af2ed;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af3be;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af414;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0x30,1,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af358;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af462;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0xb0) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af472;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af482;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x168) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af496;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x170) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af3fa;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0x30,1,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x80) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af31a;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af3af;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af430;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af38d;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0xa0) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af36f;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af50c;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0xb8) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af4d4;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af500;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 200) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af4ee;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af4e1;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0xd8) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af4aa;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x128) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af424;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x130) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af43e;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x138) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af325;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x140) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af2f9;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0x80000000,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af309;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0x80000000,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af2db;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0x80000000,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0xf0) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af405;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0x80000030,1,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0xf8) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af3ca;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0x80000000,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x100) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af349;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0x80000000,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x108) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af4bd;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0x80000000,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x110) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af44e;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0x80000000,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x148) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af39c;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0x80000000,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x118) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af37c;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0x80000000,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x120) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af335;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0x80000000,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x150) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af3da;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x158) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af3ea;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x160) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5fb215;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,1,2,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x1b0) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5fb225;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,1,2,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x1b8) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5af365;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar3,uVar6,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x1c8) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5fb235;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x1d0) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5fb242;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x1d8) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5fb250;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,uVar1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x1e0) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x360);
  apuStack_b0[0] = &UNK_10f5fb263;
  uStack_90 = 0x103;
  uStack_68 = 0x101;
  FUN_109da8870(uVar5,apuStack_b0,1,0,0,auStack_88,0,0xffffffff,0);
  *(undefined8 *)(param_1 + 0x1e8) = uVar5;
  return;
}



/* Entry: 109db2f34; end: 109db2fdf;  */

void FUN_109db2f34(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da9574(uVar1,&UNK_10f5fb1c7,5,2,0,0);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da9574(uVar1,&UNK_10f5fb1c2,4,0xf,0,0);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = 2;
  FUN_109dae888(2,uVar2,0,0);
  FUN_109da9574(uVar2,&UNK_10f5fb26f,5,0,uVar3,uVar1);
  *(undefined8 *)(param_1 + 0x2e8) = uVar2;
  return;
}



/* Entry: 109db2fe0; end: 109db459f;  */

void FUN_109db2fe0(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af365,9,0x40000040,0x13,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x1c8) = uVar3;
  iVar2 = *(int *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5fb1c2,4,0xc0000080,0xf,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  uVar1 = 0x60020020;
  if (iVar2 != 0x23) {
    uVar1 = 0x60000020;
  }
  FUN_109da967c(uVar3,&UNK_10f5fb1c7,5,uVar1,2,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5fa793,5,0xc0000040,0x13,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5fb275,6,0x40000040,4,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  if (*(uint *)(param_2 + 0x18) < 0x27) {
    uVar3 = 0;
    if ((1L << ((ulong)*(uint *)(param_2 + 0x18) & 0x3f) & 0x480000000aU) != 0) goto LAB_109db3160;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5fb203,0x11,0x40000040,4,&UNK_10f5fa6c9,0,0,0xffffffff);
LAB_109db3160:
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5fb27c,8,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x180) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5fb285,8,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x188) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5fb28e,8,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 400) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af2cd,0xd,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af2ed,0xb,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af3be,0xb,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af414,0xf,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af358,0xc,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af462,0xf,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af472,0xf,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af482,0x13,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x168) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af496,0x13,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x170) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af3fa,10,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af4aa,0x12,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x128) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af31a,10,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af325,0xf,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x140) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af3af,0xe,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af430,0xd,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af43e,0xf,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x138) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af38d,0xe,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af36f,0xc,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af39c,0x12,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x118) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af37c,0x10,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x120) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af2f9,0xf,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0xe0) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af309,0x10,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0xe8) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af2db,0x11,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0xf0) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af405,0xe,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0xf8) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af3ca,0xf,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x100) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af349,0xe,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x108) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af4bd,0x16,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x110) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af424,0xb,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x130) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af3da,0xf,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x158) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af3ea,0xf,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x160) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af50c,0xc,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0xb8) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af4d4,0xc,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af4ee,0x11,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0xd0) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af4e1,0xc,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0xd8) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5af500,0xb,0x42000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 200) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5fb316,8,0xa00,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x2a8) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5fb31f,6,0x40000040,0x13,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x2b0) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5fb326,6,0x40000040,0x13,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x2b8) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5fb32d,7,0x200,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x2c0) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5fb335,10,0x40000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x2c8) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5fb340,8,0x40000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x2d0) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5fb349,8,0x40000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x2d8) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5fb352,8,0x40000040,0,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x2e0) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5fb35b,5,0xc0000040,0x13,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x1a0) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da967c(uVar3,&UNK_10f5fb215,0xf,0x40000040,4,&UNK_10f5fa6c9,0,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x1b0) = uVar3;
  return;
}



/* Entry: 109db45a0; end: 109db4977;  */

void FUN_109db45a0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da9ea4(uVar1,&UNK_10f5fb1c7,5,2,0x10100,1,0,0);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da9ea4(uVar1,&UNK_10f5fa793,5,0x13,0x10105,1,0,0);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  lVar2 = *(long *)(param_1 + 0x360);
  FUN_109da9ea4(lVar2,&UNK_10f5fa7a6,7,4,0x10101,1,0,0);
  *(long *)(param_1 + 0x30) = lVar2;
  *(undefined1 *)(lVar2 + 0x18) = 2;
  lVar2 = *(long *)(param_1 + 0x360);
  FUN_109da9ea4(lVar2,&UNK_10f5fb37a,9,4,0x10101,1,0,0);
  *(long *)(param_1 + 0x2f8) = lVar2;
  *(undefined1 *)(lVar2 + 0x18) = 3;
  lVar2 = *(long *)(param_1 + 0x360);
  FUN_109da9ea4(lVar2,&UNK_10f5fb384,10,4,0x10101,1,0,0);
  *(long *)(param_1 + 0x300) = lVar2;
  *(undefined1 *)(lVar2 + 0x18) = 4;
  uVar1 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da9ea4(uVar1,&UNK_10f5fa7b4,6,0xd,0x10114,1,0,0);
  *(undefined8 *)(param_1 + 0x1a0) = uVar1;
  lVar2 = *(long *)(param_1 + 0x360);
  FUN_109da9ea4(lVar2,&UNK_10f5fb38f,3,0x13,0x1010f,0,0,0);
  *(long *)(param_1 + 0x2f0) = lVar2;
  *(undefined1 *)(lVar2 + 0x18) = 2;
  uVar1 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da9ea4(uVar1,&UNK_10f5fb203,0x11,4,0x10101,0,0,0);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da9ea4(uVar1,&UNK_10f5fb393,0xe,0x13,0x10105,0,0,0);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da9ea4(uVar1,&UNK_10f5fb3a2,8,0,0,1,&UNK_10f5fb3a2,&UNK_100060000);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da9ea4(uVar1,&UNK_10f5fb3ab,7,0,0,1,&UNK_10f5fb3ab,&UNK_100010000);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da9ea4(uVar1,&UNK_10f5fb3b3,7,0,0,1,&UNK_10f5fb3b3,&UNK_100020000);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da9ea4(uVar1,&UNK_10f5fb3bb,8,0,0,1,&UNK_10f5fb3bb,&UNK_1000a0000);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da9ea4(uVar1,&UNK_10f5fb3c4,8,0,0,1,&UNK_10f5fb3c4,&UNK_100030000);
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da9ea4(uVar1,&UNK_10f5fb3cd,8,0,0,1,&UNK_10f5fb3cd,&UNK_100040000);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da9ea4(uVar1,&UNK_10f5fb3d6,6,0,0,1,&UNK_10f5fb3d6,&UNK_100070000);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da9ea4(uVar1,&UNK_10f5fb3dd,6,0,0,1,&UNK_10f5fb3dd,&UNK_100090000);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da9ea4(uVar1,&UNK_10f5fb3e4,8,0,0,1,&UNK_10f5fb3e4,&UNK_100050000);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da9ea4(uVar1,&UNK_10f5fb3ed,8,0,0,1,&UNK_10f5fb3ed,&UNK_100080000);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x360);
  FUN_109da9ea4(uVar1,&UNK_10f5fb3f6,6,0,0,1,&UNK_10f5fb3f6,&UNK_1000b0000);
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  return;
}



/* Entry: 109db4978; end: 109db4a07;  */

undefined8 * FUN_109db4978(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b58ad8;
  if ((*(char *)(param_1 + 0x75) == '\x01') && (*(char *)((long)param_1 + 0x38f) < '\0')) {
    __ZdlPv(param_1[0x6f]);
  }
  return param_1;
}



/* Entry: 109db4a08; end: 109db4b9f;  */

void FUN_109db4a08(long param_1,int *param_2,undefined1 param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *(undefined1 *)(param_1 + 0x358) = param_3;
  *(int **)(param_1 + 0x360) = param_2;
  *(undefined2 *)(param_1 + 8) = 1;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(&uStack_60,*(undefined8 *)(param_2 + 6),*(undefined8 *)(param_2 + 8));
    piVar2 = *(int **)(param_1 + 0x360);
  }
  else {
    uStack_58 = *(undefined8 *)(param_2 + 8);
    uStack_60 = *(undefined8 *)(param_2 + 6);
    lStack_50 = *(long *)(param_2 + 10);
    piVar2 = param_2;
  }
  uStack_40 = *(undefined8 *)(param_2 + 0xe);
  uStack_48 = *(undefined8 *)(param_2 + 0xc);
  uStack_38 = *(undefined8 *)(param_2 + 0x10);
  iVar1 = *piVar2;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        FUN_109db0f3c(param_1,&uStack_60);
      }
      else if (iVar1 == 1) {
        FUN_109db1f74(param_1,&uStack_60,param_4);
      }
    }
    else if (iVar1 == 2) {
      FUN_109db2f34(param_1);
    }
    else if (iVar1 == 3) {
      FUN_109db2fe0(param_1,&uStack_60);
    }
    goto LAB_109db4b60;
  }
  if (iVar1 < 6) {
    if (iVar1 != 4) {
      if (iVar1 == 5) {
        func_0x000109db3d0c(param_1);
      }
      goto LAB_109db4b60;
    }
    FUN_109daa4f0();
  }
  else {
    if (iVar1 == 6) {
      FUN_109db45a0(param_1);
      goto LAB_109db4b60;
    }
    if (iVar1 != 7) goto LAB_109db4b60;
    FUN_109daa5ac(piVar2,&UNK_10f5fb3fd,4,2);
  }
  *(int **)(param_1 + 0x18) = piVar2;
LAB_109db4b60:
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  return;
}



/* Entry: 109db4ba0; end: 109db4ba7;  */

undefined8 FUN_109db4ba0(void)

{
  return 4;
}



/* Entry: 109db4ba8; end: 109db4c23;  */

void FUN_109db4ba8(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_3 - param_2;
  lVar1 = param_1[1];
  if ((ulong)param_1[2] < (ulong)(lVar1 + lVar2)) {
    FUN_109dffce4(param_1,param_1 + 3,lVar1 + lVar2,1);
    lVar1 = param_1[1];
  }
  if (param_2 != param_3) {
    _memcpy(*param_1 + lVar1,param_2,lVar2);
    lVar1 = param_1[1];
  }
  param_1[1] = lVar1 + lVar2;
  return;
}



/* Entry: 109db4c24; end: 109db4c8b;  */

undefined8 FUN_109db4c24(void)

{
  return 0;
}



/* Entry: 109db4c8c; end: 109db4ceb;  */

/* WARNING: Removing unreachable block (ram,0x000109db4cb8) */

long * FUN_109db4c8c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x20;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109db4cec; end: 109db4dab;  */

long * FUN_109db4cec(long *param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((*(short *)(param_3 + 1) == 0) && (*(short *)(param_4 + 1) == 0)) {
    lVar2 = *(long *)(param_3 + 0x10);
    lVar3 = *(long *)(param_4 + 0x10);
    lVar1 = lVar2;
    func_0x000109da4494(lVar2,1);
    if ((lVar1 != 0) &&
       (((lVar1 = lVar3, func_0x000109da4494(lVar3,1), lVar1 != 0 &&
         (lVar1 = lVar2, func_0x000109da4494(lVar2,1), lVar1 != 0)) &&
        (lVar1 = lVar3, func_0x000109da4494(lVar3,1), lVar1 != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x000109db4da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x28))(param_1,param_2,lVar2,lVar3,param_5);
      return param_1;
    }
  }
  return (long *)0x0;
}



/* Entry: 109db4dac; end: 109db4e17;  */

void FUN_109db4dac(undefined8 *param_1,long param_2)

{
  bool bVar1;
  
  FUN_109dd959c();
  *param_1 = &PTR_FUN_110b58b10;
  param_1[0x11] = param_2;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x1000101;
  if (*(long *)(param_2 + 0x38) == 0) {
    bVar1 = true;
  }
  else {
    bVar1 = **(char **)(param_2 + 0x30) != '@';
  }
  *(bool *)((long)param_1 + 0x69) = bVar1;
  *(undefined1 *)((long)param_1 + 0x6f) = *(undefined1 *)(param_2 + 0x1eb);
  return;
}



/* Entry: 109db4e18; end: 109db4e1b;  */

undefined8 * FUN_109db4e18(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_110b58ef0;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  FUN_109dd9724(param_1 + 1);
  return param_1;
}



/* Entry: 109db4e1c; end: 109db4e2f;  */

void FUN_109db4e1c(void)

{
  func_0x000109dd96e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109db4e30; end: 109db4e8f;  */

void FUN_109db4e30(undefined4 *param_1,long param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  
  *(long *)(param_2 + 0x40) = param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_2 + 0x48,param_4);
  lVar3 = *(long *)(param_2 + 0x90);
  *param_1 = 1;
  *(long *)(param_1 + 2) = param_3;
  *(long *)(param_1 + 4) = lVar3 - param_3;
  param_1[8] = 0x40;
  puVar4 = (ulong *)(param_1 + 6);
  *puVar4 = 0;
  uVar1 = param_1[8];
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffffffffffff >> ((ulong)-uVar1 & 0x3f);
    if (0x40 < uVar1) {
      puVar4 = (ulong *)(*puVar4 + (ulong)((int)((ulong)uVar1 + 0x3f >> 6) - 1) * 8);
    }
  }
  *puVar4 = *puVar4 & uVar2;
  return;
}



/* Entry: 109db4e90; end: 109db5017;  */

void FUN_109db4e90(undefined4 *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  ulong *puVar6;
  byte *pbVar7;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  pbVar7 = *(byte **)(param_2 + 0x90);
  bVar2 = *pbVar7;
  while (bVar2 - 0x30 < 10) {
    pbVar7 = pbVar7 + 1;
    *(byte **)(param_2 + 0x90) = pbVar7;
    bVar2 = *pbVar7;
  }
  if (bVar2 < 0x45) {
    if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) {
      func_0x000107c31940(auStack_48,&UNK_10f5fb402);
      *(byte **)(param_2 + 0x40) = pbVar7;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_2 + 0x48,auStack_48);
      lVar4 = *(long *)(param_2 + 0x90);
      *param_1 = 1;
      *(byte **)(param_1 + 2) = pbVar7;
      *(long *)(param_1 + 4) = lVar4 - (long)pbVar7;
      param_1[8] = 0x40;
      *(undefined8 *)(param_1 + 6) = 0;
      FUN_109d301fc(param_1 + 6);
      if (cStack_31 < '\0') {
        __ZdlPv(auStack_48[0]);
      }
      return;
    }
  }
  else if ((bVar2 == 0x45) || (bVar2 == 0x65)) {
    *(byte **)(param_2 + 0x90) = pbVar7 + 1;
    bVar2 = pbVar7[1];
    if ((bVar2 == 0x2d) || (pbVar5 = pbVar7 + 1, bVar2 == 0x2b)) {
      *(byte **)(param_2 + 0x90) = pbVar7 + 2;
      bVar2 = pbVar7[2];
      pbVar5 = pbVar7 + 2;
    }
    while (pbVar7 = pbVar5, bVar2 - 0x30 < 10) {
      pbVar5 = pbVar7 + 1;
      *(byte **)(param_2 + 0x90) = pbVar5;
      bVar2 = *pbVar5;
    }
  }
  lVar4 = *(long *)(param_2 + 0x60);
  *param_1 = 6;
  *(long *)(param_1 + 2) = lVar4;
  *(long *)(param_1 + 4) = (long)pbVar7 - lVar4;
  param_1[8] = 0x40;
  puVar6 = (ulong *)(param_1 + 6);
  *puVar6 = 0;
  uVar1 = param_1[8];
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffffffffffff >> ((ulong)-uVar1 & 0x3f);
    if (0x40 < uVar1) {
      puVar6 = (ulong *)(*puVar6 + (ulong)((int)((ulong)uVar1 + 0x3f >> 6) - 1) * 8);
    }
  }
  *puVar6 = *puVar6 & uVar3;
  return;
}



/* Entry: 109db5018; end: 109db5197;  */

void FUN_109db5018(undefined4 *param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong *puVar8;
  char *pcVar9;
  uint uVar10;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  pbVar7 = *(byte **)(param_2 + 0x90);
  if ((pbVar7[-1] != 0x2e) || (9 < *pbVar7 - 0x30)) goto LAB_109db5098;
  do {
    pbVar7 = pbVar7 + 1;
    *(byte **)(param_2 + 0x90) = pbVar7;
    bVar3 = *pbVar7;
  } while (bVar3 - 0x30 < 10);
  uVar10 = (uint)bVar3;
  if ((bVar3 & 0xffffffdf) - 0x41 < 0x1a) {
    if ((uVar10 | 0x20) != 0x65) goto LAB_109db5098;
  }
  else {
    if (uVar10 - 0x24 < 0x3c && (1L << ((ulong)(uVar10 - 0x24) & 0x3f) & 0x800000008000401U) != 0) {
LAB_109db5098:
      lVar5 = -(long)pbVar7;
      do {
        bVar3 = *pbVar7;
        if ((9 < bVar3 - 0x30 && 0x19 < (bVar3 & 0xffffffdf) - 0x41) &&
           (uVar10 = (uint)bVar3,
           0x3b < uVar10 - 0x24 || (1L << ((ulong)(uVar10 - 0x24) & 0x3f) & 0x800000008000401U) == 0
           )) {
          bVar3 = 0;
          if (uVar10 == 0x40) {
            bVar3 = *(byte *)(param_2 + 0x69);
          }
          cVar1 = '\0';
          if (uVar10 == 0x23) {
            cVar1 = *(char *)(param_2 + 0x6a);
          }
          if (((bVar3 & 1) == 0) && (cVar1 == '\0')) goto code_r0x000109db510c;
        }
        pbVar7 = pbVar7 + 1;
        *(byte **)(param_2 + 0x90) = pbVar7;
        lVar5 = lVar5 + -1;
      } while( true );
    }
    bVar3 = 0;
    if (uVar10 == 0x40) {
      bVar3 = *(byte *)(param_2 + 0x69);
    }
    bVar2 = 0;
    if (uVar10 == 0x23) {
      bVar2 = *(byte *)(param_2 + 0x6a);
    }
    if (((bVar3 & 1) != 0) || ((bVar2 & 1) != 0)) goto LAB_109db5098;
  }
  pbVar7 = *(byte **)(param_2 + 0x90);
  bVar3 = *pbVar7;
  while (bVar3 - 0x30 < 10) {
    pbVar7 = pbVar7 + 1;
    *(byte **)(param_2 + 0x90) = pbVar7;
    bVar3 = *pbVar7;
  }
  if (bVar3 < 0x45) {
    if ((bVar3 == 0x2b) || (bVar3 == 0x2d)) {
      func_0x000107c31940(auStack_48,&UNK_10f5fb402);
      *(byte **)(param_2 + 0x40) = pbVar7;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_2 + 0x48,auStack_48);
      lVar5 = *(long *)(param_2 + 0x90);
      *param_1 = 1;
      *(byte **)(param_1 + 2) = pbVar7;
      *(long *)(param_1 + 4) = lVar5 - (long)pbVar7;
      param_1[8] = 0x40;
      *(undefined8 *)(param_1 + 6) = 0;
      FUN_109d301fc(param_1 + 6);
      if (cStack_31 < '\0') {
        __ZdlPv(auStack_48[0]);
      }
      return;
    }
  }
  else if ((bVar3 == 0x45) || (bVar3 == 0x65)) {
    *(byte **)(param_2 + 0x90) = pbVar7 + 1;
    bVar3 = pbVar7[1];
    if ((bVar3 == 0x2d) || (pbVar6 = pbVar7 + 1, bVar3 == 0x2b)) {
      *(byte **)(param_2 + 0x90) = pbVar7 + 2;
      bVar3 = pbVar7[2];
      pbVar6 = pbVar7 + 2;
    }
    while (pbVar7 = pbVar6, bVar3 - 0x30 < 10) {
      pbVar6 = pbVar7 + 1;
      *(byte **)(param_2 + 0x90) = pbVar6;
      bVar3 = *pbVar6;
    }
  }
  lVar5 = *(long *)(param_2 + 0x60);
  *param_1 = 6;
  *(long *)(param_1 + 2) = lVar5;
  *(long *)(param_1 + 4) = (long)pbVar7 - lVar5;
  param_1[8] = 0x40;
  *(undefined8 *)(param_1 + 6) = 0;
  goto code_r0x000109d301fc;
code_r0x000109db510c:
  pcVar9 = *(char **)(param_2 + 0x60);
  if ((pbVar7 == (byte *)(pcVar9 + 1)) && (*pcVar9 == '.')) {
    *param_1 = 0x18;
    *(char **)(param_1 + 2) = pcVar9;
    param_1[8] = 0x40;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 4) = 1;
  }
  else {
    *param_1 = 2;
    *(char **)(param_1 + 2) = pcVar9;
    *(long *)(param_1 + 4) = -(long)pcVar9 - lVar5;
    param_1[8] = 0x40;
    *(undefined8 *)(param_1 + 6) = 0;
  }
code_r0x000109d301fc:
  puVar8 = (ulong *)(param_1 + 6);
  uVar10 = param_1[8];
  if (uVar10 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffffffffffff >> ((ulong)-uVar10 & 0x3f);
    if (0x40 < uVar10) {
      puVar8 = (ulong *)(*puVar8 + (ulong)((int)((ulong)uVar10 + 0x3f >> 6) - 1) * 8);
    }
  }
  *puVar8 = *puVar8 & uVar4;
  return;
}



/* Entry: 109db5198; end: 109db536f;  */

void FUN_109db5198(undefined4 *param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  byte *pbVar4;
  long *plVar5;
  byte *pbVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  byte *pbVar10;
  ulong *puVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  if ((*(byte *)(*(long *)(param_2 + 0x88) + 0x41) & 1) != 0) {
    pcVar8 = *(char **)(param_2 + 0x90);
    if (*pcVar8 == '/') {
      *(char **)(param_2 + 0x90) = pcVar8 + 1;
      pbVar6 = *(byte **)(param_2 + 0x90);
      pbVar4 = (byte *)(*(long *)(param_2 + 0x98) + *(long *)(param_2 + 0xa0));
      pbVar10 = pbVar6;
      if (pbVar6 != pbVar4) goto LAB_109db53a8;
      uVar12 = 0xffffffff;
      while (0xe < uVar12 + 1 || (1 << (ulong)(uVar12 + 1 & 0x1f) & 0x4801U) == 0) {
        uVar12 = 0xffffffff;
        if (pbVar10 != pbVar4) {
LAB_109db53a8:
          *(byte **)(param_2 + 0x90) = pbVar10 + 1;
          uVar12 = (uint)*pbVar10;
          pbVar10 = pbVar10 + 1;
        }
      }
      if (((uVar12 == 0xd) && (pbVar10 != pbVar4)) && (*pbVar10 == 10)) {
        *(byte **)(param_2 + 0x90) = pbVar10 + 1;
      }
      plVar5 = *(long **)(param_2 + 0x80);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,pbVar6,pbVar6,pbVar10 + ~(ulong)pbVar6);
      }
      *(undefined1 *)(param_2 + 0xa8) = 1;
      if (*(char *)(param_2 + 0xa9) == '\x01') {
        lVar13 = *(long *)(param_2 + 0x90);
      }
      else {
        *(undefined1 *)(param_2 + 0xa9) = 1;
        lVar13 = *(long *)(param_2 + 0x90) + -1;
      }
      lVar14 = *(long *)(param_2 + 0x60);
      *param_1 = 9;
      *(long *)(param_1 + 2) = lVar14;
      *(long *)(param_1 + 4) = lVar13 - lVar14;
      param_1[8] = 0x40;
      *(undefined8 *)(param_1 + 6) = 0;
      goto code_r0x000109d301fc;
    }
    if (*pcVar8 == '*') {
      *(undefined1 *)(param_2 + 0xa9) = 0;
      pcVar1 = pcVar8 + 1;
      *(char **)(param_2 + 0x90) = pcVar1;
      pcVar3 = (char *)(*(long *)(param_2 + 0x98) + *(long *)(param_2 + 0xa0));
      if (pcVar1 != pcVar3) {
        lVar13 = 0;
        do {
          pcVar2 = pcVar8 + 2;
          *(char **)(param_2 + 0x90) = pcVar2;
          if ((pcVar8[1] == '*') && (*pcVar2 == '/')) {
            plVar5 = *(long **)(param_2 + 0x80);
            if (plVar5 == (long *)0x0) {
              pcVar8 = pcVar8 + 2;
            }
            else {
              (**(code **)(*plVar5 + 0x10))(plVar5,pcVar1,pcVar1,-lVar13);
              pcVar8 = *(char **)(param_2 + 0x90);
            }
            *(char **)(param_2 + 0x90) = pcVar8 + 1;
            lVar13 = *(long *)(param_2 + 0x60);
            *param_1 = 7;
            *(long *)(param_1 + 2) = lVar13;
            *(long *)(param_1 + 4) = (long)(pcVar8 + 1) - lVar13;
            param_1[8] = 0x40;
            *(undefined8 *)(param_1 + 6) = 0;
            goto code_r0x000109d301fc;
          }
          lVar13 = lVar13 + -1;
          pcVar8 = pcVar8 + 1;
        } while (pcVar2 != pcVar3);
      }
      lVar14 = *(long *)(param_2 + 0x60);
      func_0x000107c31940(auStack_48,&UNK_10f5fb50f);
      *(long *)(param_2 + 0x40) = lVar14;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_2 + 0x48,auStack_48);
      lVar13 = *(long *)(param_2 + 0x90);
      *param_1 = 1;
      *(long *)(param_1 + 2) = lVar14;
      *(long *)(param_1 + 4) = lVar13 - lVar14;
      param_1[8] = 0x40;
      *(undefined8 *)(param_1 + 6) = 0;
      FUN_109d301fc(param_1 + 6);
      if (cStack_31 < '\0') {
        __ZdlPv(auStack_48[0]);
      }
      return;
    }
  }
  *(undefined1 *)(param_2 + 0xa9) = 0;
  uVar9 = *(undefined8 *)(param_2 + 0x60);
  *param_1 = 0xf;
  *(undefined8 *)(param_1 + 2) = uVar9;
  param_1[8] = 0x40;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 4) = 1;
code_r0x000109d301fc:
  puVar11 = (ulong *)(param_1 + 6);
  uVar12 = param_1[8];
  if (uVar12 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0xffffffffffffffff >> ((ulong)-uVar12 & 0x3f);
    if (0x40 < uVar12) {
      puVar11 = (ulong *)(*puVar11 + (ulong)((int)((ulong)uVar12 + 0x3f >> 6) - 1) * 8);
    }
  }
  *puVar11 = *puVar11 & uVar7;
  return;
}



/* Entry: 109db5370; end: 109db5483;  */

void FUN_109db5370(undefined4 *param_1,long param_2)

{
  byte *pbVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  uint uVar9;
  
  pbVar3 = *(byte **)(param_2 + 0x90);
  pbVar1 = (byte *)(*(long *)(param_2 + 0x98) + *(long *)(param_2 + 0xa0));
  pbVar5 = pbVar3;
  if (pbVar3 != pbVar1) goto LAB_109db53a8;
  uVar9 = 0xffffffff;
  while (0xe < uVar9 + 1 || (1 << (ulong)(uVar9 + 1 & 0x1f) & 0x4801U) == 0) {
    uVar9 = 0xffffffff;
    if (pbVar5 != pbVar1) {
LAB_109db53a8:
      *(byte **)(param_2 + 0x90) = pbVar5 + 1;
      uVar9 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
    }
  }
  if (((uVar9 == 0xd) && (pbVar5 != pbVar1)) && (*pbVar5 == 10)) {
    *(byte **)(param_2 + 0x90) = pbVar5 + 1;
  }
  plVar2 = *(long **)(param_2 + 0x80);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,pbVar3,pbVar3,pbVar5 + ~(ulong)pbVar3);
  }
  *(undefined1 *)(param_2 + 0xa8) = 1;
  if (*(char *)(param_2 + 0xa9) == '\x01') {
    lVar6 = *(long *)(param_2 + 0x90);
  }
  else {
    *(undefined1 *)(param_2 + 0xa9) = 1;
    lVar6 = *(long *)(param_2 + 0x90) + -1;
  }
  lVar8 = *(long *)(param_2 + 0x60);
  *param_1 = 9;
  *(long *)(param_1 + 2) = lVar8;
  *(long *)(param_1 + 4) = lVar6 - lVar8;
  param_1[8] = 0x40;
  puVar7 = (ulong *)(param_1 + 6);
  *puVar7 = 0;
  uVar9 = param_1[8];
  if (uVar9 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffffffffffff >> ((ulong)-uVar9 & 0x3f);
    if (0x40 < uVar9) {
      puVar7 = (ulong *)(*puVar7 + (ulong)((int)((ulong)uVar9 + 0x3f >> 6) - 1) * 8);
    }
  }
  *puVar7 = *puVar7 & uVar4;
  return;
}



/* Entry: 109db5484; end: 109db64d7;  */

/* WARNING: Removing unreachable block (ram,0x000109db5fa8) */
/* WARNING: Removing unreachable block (ram,0x000109db5a00) */
/* WARNING: Removing unreachable block (ram,0x000109db62cc) */
/* WARNING: Removing unreachable block (ram,0x000109db5878) */

void FUN_109db5484(undefined4 *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  bool bVar5;
  undefined8 *puVar6;
  byte **ppbVar7;
  undefined8 **ppuVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  ulong *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  long unaff_x23;
  ulong uVar22;
  byte *pbVar23;
  undefined8 *puStack_b8;
  long lStack_b0;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 *puStack_70;
  long lStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  bVar2 = *(byte *)(param_2 + 0x6d);
  if (bVar2 == 1) {
    plVar19 = (long *)(param_2 + 0x90);
    pbVar14 = (byte *)*plVar19;
    pbVar16 = pbVar14 + -1;
    bVar3 = *pbVar16;
    if (((char)bVar3 < '\0') ||
       ((*(uint *)(PTR___DefaultRuneLocale_11034bcf8 + (ulong)bVar3 * 4 + 0x3c) >> 10 & 1) == 0)) {
LAB_109db54dc:
      if (*(char *)(param_2 + 0x70) != '\x01') goto LAB_109db55f0;
      pbVar14 = pbVar14 + -1;
      pbVar16 = pbVar14;
      do {
        pbVar14 = pbVar14 + 1;
        pbVar16 = pbVar16 + 1;
      } while (*(ushort *)(&UNK_10e0431c0 + (ulong)*pbVar14 * 2) < 0x10);
      *(byte **)(param_2 + 0x90) = pbVar14;
      puStack_70 = *(undefined8 **)(param_2 + 0x60);
      lStack_68 = (long)pbVar16 - (long)puStack_70;
      lStack_b0 = CONCAT44(lStack_b0._4_4_,0x80);
      puVar6 = (undefined8 *)0x10;
      __Znam();
      *puVar6 = 0;
      puVar6[1] = 0;
      ppuVar8 = &puStack_70;
      puStack_b8 = puVar6;
      FUN_109e04094(ppuVar8,*(undefined4 *)(param_2 + 0x74),&puStack_b8);
      if ((int)ppuVar8 != 0) {
        lVar21 = *(long *)(param_2 + 0x60);
        FUN_109db64d8(auStack_a8,*(undefined4 *)(param_2 + 0x74));
        puVar6 = auStack_a8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (puVar6,0,&UNK_10f5fa5cc,8);
        uStack_88 = puVar6[1];
        puStack_90 = (undefined8 *)*puVar6;
        lStack_80 = puVar6[2];
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        ppuVar8 = &puStack_90;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppuVar8,&UNK_10f5fb524,7);
        pbStack_58 = (byte *)ppuVar8[1];
        pbStack_60 = (byte *)*ppuVar8;
        puStack_50 = ppuVar8[2];
        ppuVar8[1] = (undefined8 *)0x0;
        ppuVar8[2] = (undefined8 *)0x0;
        *ppuVar8 = (undefined8 *)0x0;
        *(long *)(param_2 + 0x40) = lVar21;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (param_2 + 0x48,&pbStack_60);
        lVar11 = *plVar19;
        *param_1 = 1;
        *(long *)(param_1 + 2) = lVar21;
        *(long *)(param_1 + 4) = lVar11 - lVar21;
        param_1[8] = 0x40;
        *(undefined8 *)(param_1 + 6) = 0;
        FUN_109d301fc(param_1 + 6);
        goto LAB_109db5870;
      }
      FUN_109db6628(param_1,puStack_70,lStack_68,&puStack_b8);
      goto LAB_109db5a24;
    }
    pbVar12 = (byte *)0x0;
    if ((bVar3 & 0x7e) != 0x30) {
      pbVar12 = pbVar16;
    }
    if (0xfffffff5 < bVar3 - 0x3a) {
      pbVar16 = (byte *)0x0;
    }
    bVar3 = *pbVar14;
    uVar10 = (ulong)bVar3;
    sVar4 = *(short *)(&UNK_10e0431c0 + uVar10 * 2);
    pbVar23 = pbVar14;
    while (sVar4 != -1) {
      pbVar18 = pbVar23 + 1;
      pbVar17 = pbVar16;
      if ((int)uVar10 - 0x32U < 8) {
LAB_109db58ec:
        pbVar15 = pbVar23;
        if (pbVar12 != (byte *)0x0) {
          pbVar15 = pbVar12;
        }
      }
      else {
        pbVar15 = pbVar12;
        if (1 < (int)uVar10 - 0x30U) {
          pbVar17 = pbVar23;
          if (pbVar16 != (byte *)0x0) {
            pbVar17 = pbVar16;
          }
          goto LAB_109db58ec;
        }
      }
      *plVar19 = (long)pbVar18;
      bVar3 = *pbVar18;
      uVar10 = (ulong)bVar3;
      pbVar23 = pbVar18;
      pbVar16 = pbVar17;
      pbVar12 = pbVar15;
      sVar4 = *(short *)(&UNK_10e0431c0 + uVar10 * 2);
    }
    if (bVar3 == 0x2e) {
      *(byte **)(param_2 + 0x90) = pbVar23 + 1;
      goto FUN_109db4e90;
    }
    uVar20 = 0x10;
    if (*(char *)(param_2 + 0x6c) != '\x01') {
      if (0x67 < bVar3) {
        if (bVar3 < 0x71) {
          if (bVar3 == 0x68) goto LAB_109db5eb0;
          if (bVar3 == 0x6f) goto LAB_109db5eac;
        }
        else {
          if (bVar3 == 0x71) goto LAB_109db5eac;
          if (bVar3 == 0x79) goto LAB_109db5e48;
          if (bVar3 == 0x74) goto LAB_109db5e50;
        }
        goto LAB_109db5e68;
      }
      if (bVar3 < 0x51) {
        if (bVar3 == 0x48) goto LAB_109db5eb0;
        if (bVar3 != 0x4f) goto LAB_109db5e68;
      }
      else if (bVar3 != 0x51) goto LAB_109db5dfc;
LAB_109db5eac:
      uVar20 = 8;
      goto LAB_109db5eb0;
    }
    if (0x67 < bVar3) {
      if (0x71 < bVar3) {
        if (bVar3 != 0x79) {
          if (bVar3 == 0x74) goto LAB_109db5e50;
          if (bVar3 == 0x72) goto LAB_109db5e28;
          goto LAB_109db5e68;
        }
LAB_109db5e48:
        uVar20 = 2;
        goto LAB_109db5eb0;
      }
      if (bVar3 == 0x68) goto LAB_109db5eb0;
      if ((bVar3 == 0x6f) || (bVar3 == 0x71)) goto LAB_109db5eac;
LAB_109db5e68:
      if ((((pbVar16 == (byte *)0x0) || (pbVar16 + 1 != pbVar23)) ||
          (0xd < *(uint *)(param_2 + 0x74))) || ((*pbVar16 | 0x20) != 100)) {
        if (((pbVar12 == (byte *)0x0) || (pbVar12 + 1 != pbVar23)) ||
           ((0xb < *(uint *)(param_2 + 0x74) || ((*pbVar12 | 0x20) != 0x62)))) {
          *plVar19 = (long)pbVar14;
          goto LAB_109db54dc;
        }
        uVar20 = 2;
      }
      else {
        uVar20 = 10;
      }
LAB_109db5eb8:
      pbVar16 = *(byte **)(param_2 + 0x60);
      pbVar23 = pbVar23 + -(long)pbVar16;
      lStack_68 = CONCAT44(lStack_68._4_4_,0x80);
      puVar6 = (undefined8 *)0x10;
      __Znam();
      *puVar6 = 0;
      puVar6[1] = 0;
      pbStack_58 = pbVar23;
      if (pbVar23 + -1 <= pbVar23) {
        pbStack_58 = pbVar23 + -1;
      }
      ppbVar7 = &pbStack_60;
      puStack_70 = puVar6;
      pbStack_60 = pbVar16;
      FUN_109e04094(ppbVar7,uVar20,&puStack_70);
      if ((int)ppbVar7 != 0) {
        lVar21 = *(long *)(param_2 + 0x60);
        FUN_109db64d8(auStack_a8,uVar20);
        puVar6 = auStack_a8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (puVar6,0,&UNK_10f5fa5cc,8);
        uStack_88 = puVar6[1];
        puStack_90 = (undefined8 *)*puVar6;
        lStack_80 = puVar6[2];
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        ppuVar8 = &puStack_90;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppuVar8,&UNK_10f5fb524,7);
        pbStack_58 = (byte *)ppuVar8[1];
        pbStack_60 = (byte *)*ppuVar8;
        puStack_50 = ppuVar8[2];
        ppuVar8[1] = (undefined8 *)0x0;
        ppuVar8[2] = (undefined8 *)0x0;
        *ppuVar8 = (undefined8 *)0x0;
        *(long *)(param_2 + 0x40) = lVar21;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (param_2 + 0x48,&pbStack_60);
        lVar11 = *plVar19;
        *param_1 = 1;
        *(long *)(param_1 + 2) = lVar21;
        *(long *)(param_1 + 4) = lVar11 - lVar21;
        param_1[8] = 0x40;
        *(undefined8 *)(param_1 + 6) = 0;
        FUN_109d301fc(param_1 + 6);
        goto LAB_109db5fa0;
      }
      FUN_109db65d0(plVar19);
      FUN_109db6628(param_1,pbVar16,pbVar23,&puStack_70);
      goto LAB_109db5ff0;
    }
    if (bVar3 < 0x52) {
      if (bVar3 != 0x48) {
        if ((bVar3 == 0x4f) || (bVar3 == 0x51)) goto LAB_109db5eac;
        goto LAB_109db5e68;
      }
LAB_109db5eb0:
      pbVar23 = pbVar23 + 1;
      *plVar19 = (long)pbVar23;
      goto LAB_109db5eb8;
    }
    if (bVar3 != 0x52) {
LAB_109db5dfc:
      if (bVar3 != 0x54) {
        if (bVar3 == 0x59) goto LAB_109db5e48;
        goto LAB_109db5e68;
      }
LAB_109db5e50:
      uVar20 = 10;
      goto LAB_109db5eb0;
    }
LAB_109db5e28:
    pbVar23 = pbVar23 + 1;
    *(byte **)(param_2 + 0x90) = pbVar23;
LAB_109db5e30:
    lVar11 = *(long *)(param_2 + 0x60);
    *param_1 = 6;
    *(long *)(param_1 + 2) = lVar11;
    *(long *)(param_1 + 4) = (long)pbVar23 - lVar11;
LAB_109db616c:
    param_1[8] = 0x40;
    *(undefined8 *)(param_1 + 6) = 0;
code_r0x000109d301fc:
    puVar13 = (ulong *)(param_1 + 6);
    uVar1 = param_1[8];
    if (uVar1 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0xffffffffffffffff >> ((ulong)-uVar1 & 0x3f);
      if (0x40 < uVar1) {
        puVar13 = (ulong *)(*puVar13 + (ulong)((int)((ulong)uVar1 + 0x3f >> 6) - 1) * 8);
      }
    }
    *puVar13 = *puVar13 & uVar10;
    return;
  }
LAB_109db55f0:
  plVar19 = (long *)(param_2 + 0x90);
  pbVar16 = (byte *)*plVar19;
  if (*(char *)(param_2 + 0x6f) == '\x01') {
    if (pbVar16[-1] == 0x25) {
      bVar2 = *pbVar16;
      pbVar14 = pbVar16;
      while ((bVar2 & 0xfe) == 0x30) {
        pbVar14 = pbVar14 + 1;
        *plVar19 = (long)pbVar14;
        bVar2 = *pbVar14;
      }
      uStack_88 = CONCAT44(uStack_88._4_4_,0x80);
      puVar6 = (undefined8 *)0x10;
      __Znam();
      *puVar6 = 0;
      puVar6[1] = 0;
      pbStack_58 = pbVar14 + -(long)pbVar16;
      ppbVar7 = &pbStack_60;
      puStack_90 = puVar6;
      pbStack_60 = pbVar16;
      FUN_109e04094(ppbVar7,2,&puStack_90);
      lVar11 = *(long *)(param_2 + 0x60);
      if ((int)ppbVar7 == 0) {
        FUN_109db6628(param_1,lVar11,*plVar19 - lVar11,&puStack_90);
      }
      else {
        func_0x000107c31940(&pbStack_60,&UNK_10f5fb547);
        *(long *)(param_2 + 0x40) = lVar11;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (param_2 + 0x48,&pbStack_60);
        lVar21 = *plVar19;
        *param_1 = 1;
        *(long *)(param_1 + 2) = lVar11;
        *(long *)(param_1 + 4) = lVar21 - lVar11;
        param_1[8] = 0x40;
        *(undefined8 *)(param_1 + 6) = 0;
        FUN_109d301fc(param_1 + 6);
      }
    }
    else {
      if (pbVar16[-1] != 0x24) goto LAB_109db56d4;
      sVar4 = *(short *)(&UNK_10e0431c0 + (ulong)*pbVar16 * 2);
      pbVar14 = pbVar16;
      while (sVar4 != -1) {
        pbVar14 = pbVar14 + 1;
        *plVar19 = (long)pbVar14;
        sVar4 = *(short *)(&UNK_10e0431c0 + (ulong)*pbVar14 * 2);
      }
      uStack_88 = CONCAT44(uStack_88._4_4_,0x80);
      puVar6 = (undefined8 *)0x10;
      __Znam();
      *puVar6 = 0;
      puVar6[1] = 0;
      pbStack_58 = pbVar14 + -(long)pbVar16;
      ppbVar7 = &pbStack_60;
      puStack_90 = puVar6;
      pbStack_60 = pbVar16;
      FUN_109e04094(ppbVar7,0x10,&puStack_90);
      lVar11 = *(long *)(param_2 + 0x60);
      if ((int)ppbVar7 == 0) {
        FUN_109db6628(param_1,lVar11,*plVar19 - lVar11,&puStack_90);
      }
      else {
        func_0x000107c31940(&pbStack_60,&UNK_10f5fb52c);
        *(long *)(param_2 + 0x40) = lVar11;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (param_2 + 0x48,&pbStack_60);
        lVar21 = *plVar19;
        *param_1 = 1;
        *(long *)(param_1 + 2) = lVar11;
        *(long *)(param_1 + 4) = lVar21 - lVar11;
        param_1[8] = 0x40;
        *(undefined8 *)(param_1 + 6) = 0;
        FUN_109d301fc(param_1 + 6);
      }
    }
  }
  else {
LAB_109db56d4:
    if ((((*(byte *)(param_2 + 0x78) & 1) != 0) || (pbVar16[-1] != 0x30)) ||
       (bVar3 = *pbVar16, bVar3 == 0x2e)) {
      pbVar14 = (byte *)0x0;
      do {
        bVar3 = *pbVar16;
        pbVar12 = pbVar14;
        if (9 < (byte)(bVar3 - 0x30)) {
          pbVar12 = pbVar16;
          if (pbVar14 != (byte *)0x0) {
            pbVar12 = pbVar14;
          }
          if (bVar2 == 0) {
            iVar9 = 10;
            pbVar16 = pbVar12;
            goto LAB_109db575c;
          }
          if (*(short *)(&UNK_10e0431c0 + (ulong)bVar3 * 2) == -1) goto LAB_109db5740;
        }
        pbVar16 = pbVar16 + 1;
        pbVar14 = pbVar12;
      } while( true );
    }
    if ((bVar2 & 1) == 0) {
      if (0x61 < bVar3) {
        if (bVar3 != 0x78) {
          if (bVar3 != 0x62) goto LAB_109db5cd4;
          goto LAB_109db5b9c;
        }
        goto LAB_109db5c58;
      }
      if (bVar3 != 0x42) {
        if (bVar3 != 0x58) goto LAB_109db5cd4;
        goto LAB_109db5c58;
      }
LAB_109db5b9c:
      *plVar19 = (long)(pbVar16 + 1);
      if (pbVar16[1] - 0x30 < 10) {
        if ((pbVar16[1] & 0x3e) != 0x30) {
          uVar20 = *(undefined8 *)(param_2 + 0x60);
          func_0x000107c31940(&pbStack_60,&UNK_10f5fb547);
          FUN_109db4e30(param_1,param_2,uVar20,&pbStack_60);
          return;
        }
        pbVar14 = pbVar16 + 1;
        pbVar16 = pbVar16 + 2;
        do {
          *plVar19 = (long)pbVar16;
          bVar2 = *pbVar16;
          pbVar14 = pbVar14 + 1;
          pbVar16 = pbVar16 + 1;
        } while ((bVar2 & 0xfe) == 0x30);
        lVar11 = *(long *)(param_2 + 0x60);
        uVar22 = (long)pbVar14 - lVar11;
        uStack_88 = CONCAT44(uStack_88._4_4_,0x80);
        FUN_109defdd8(&puStack_90,0,1);
        uVar10 = uVar22;
        if (1 < uVar22) {
          uVar10 = 2;
        }
        pbStack_60 = (byte *)(lVar11 + uVar10);
        pbStack_58 = (byte *)(uVar22 - uVar10);
        ppbVar7 = &pbStack_60;
        FUN_109e04094(ppbVar7,2,&puStack_90);
        if ((int)ppbVar7 == 0) {
          FUN_109db65d0(plVar19);
          FUN_109db6628(param_1,lVar11,uVar22,&puStack_90);
        }
        else {
          uVar20 = *(undefined8 *)(param_2 + 0x60);
          func_0x000107c31940(&pbStack_60,&UNK_10f5fb547);
          FUN_109db4e30(param_1,param_2,uVar20,&pbStack_60);
        }
        goto LAB_109db5af4;
      }
      *(byte **)(param_2 + 0x90) = pbVar16;
      lVar11 = *(long *)(param_2 + 0x60);
      *param_1 = 4;
      *(long *)(param_1 + 2) = lVar11;
      *(long *)(param_1 + 4) = (long)pbVar16 - lVar11;
      goto LAB_109db616c;
    }
    if ((bVar3 | 0x20) != 0x78) {
LAB_109db5cd4:
      lStack_68 = CONCAT44(lStack_68._4_4_,0x80);
      FUN_109defdd8(&puStack_70,0,1);
      pbVar16 = *(byte **)(param_2 + 0x90);
      pbVar14 = (byte *)0x0;
      do {
        bVar2 = *pbVar16;
        pbVar12 = pbVar14;
        if (9 < (byte)(bVar2 - 0x30)) {
          pbVar12 = pbVar16;
          if (pbVar14 != (byte *)0x0) {
            pbVar12 = pbVar14;
          }
          if (*(char *)(param_2 + 0x6d) == '\0') {
            iVar9 = 8;
            pbVar16 = pbVar12;
            goto LAB_109db60b0;
          }
          if (*(short *)(&UNK_10e0431c0 + (ulong)bVar2 * 2) == -1) goto LAB_109db6094;
        }
        pbVar16 = pbVar16 + 1;
        pbVar14 = pbVar12;
      } while( true );
    }
LAB_109db5c58:
    lVar11 = 1;
    do {
      pbVar14 = pbVar16;
      pbVar16 = pbVar14 + 1;
      *plVar19 = (long)pbVar16;
      bVar2 = *pbVar16;
      lVar11 = lVar11 + -1;
    } while (*(short *)(&UNK_10e0431c0 + (ulong)bVar2 * 2) != -1);
    if (((bVar2 == 0x2e) || (bVar2 == 0x70)) || (bVar2 == 0x50)) {
      if (bVar2 == 0x2e) {
        lVar21 = 1;
        pbVar14 = pbVar16;
        do {
          pbVar16 = pbVar14 + 1;
          *plVar19 = (long)pbVar16;
          bVar2 = pbVar14[1];
          lVar21 = lVar21 + -1;
          pbVar14 = pbVar16;
        } while (*(short *)(&UNK_10e0431c0 + (ulong)bVar2 * 2) != -1);
        bVar5 = lVar21 != 0;
      }
      else {
        bVar5 = false;
      }
      if ((lVar11 == 0) && (!bVar5)) {
        lVar21 = *(long *)(param_2 + 0x60);
        func_0x000107c31940(&pbStack_60,&UNK_10f5fb420);
        *(long *)(param_2 + 0x40) = lVar21;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (param_2 + 0x48,&pbStack_60);
        lVar11 = *plVar19;
        *param_1 = 1;
        *(long *)(param_1 + 2) = lVar21;
        *(long *)(param_1 + 4) = lVar11 - lVar21;
        param_1[8] = 0x40;
        *(undefined8 *)(param_1 + 6) = 0;
        FUN_109d301fc(param_1 + 6);
        return;
      }
      if ((bVar2 | 0x20) != 0x70) {
        lVar21 = *(long *)(param_2 + 0x60);
        func_0x000107c31940(&pbStack_60,&UNK_10f5fb475);
        *(long *)(param_2 + 0x40) = lVar21;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (param_2 + 0x48,&pbStack_60);
        lVar11 = *plVar19;
        *param_1 = 1;
        *(long *)(param_1 + 2) = lVar21;
        *(long *)(param_1 + 4) = lVar11 - lVar21;
        param_1[8] = 0x40;
        *(undefined8 *)(param_1 + 6) = 0;
        FUN_109d301fc(param_1 + 6);
        return;
      }
      pbVar23 = pbVar16 + 1;
      *plVar19 = (long)pbVar23;
      bVar2 = pbVar16[1];
      if ((bVar2 == 0x2d) || (bVar2 == 0x2b)) {
        pbVar23 = pbVar16 + 2;
        *plVar19 = (long)pbVar23;
        bVar2 = pbVar16[2];
      }
      pbVar16 = pbVar23;
      if (9 < bVar2 - 0x30) {
        lVar21 = *(long *)(param_2 + 0x60);
        func_0x000107c31940(&pbStack_60,&UNK_10f5fb4bd);
        *(long *)(param_2 + 0x40) = lVar21;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (param_2 + 0x48,&pbStack_60);
        lVar11 = *plVar19;
        *param_1 = 1;
        *(long *)(param_1 + 2) = lVar21;
        *(long *)(param_1 + 4) = lVar11 - lVar21;
        param_1[8] = 0x40;
        *(undefined8 *)(param_1 + 6) = 0;
        FUN_109d301fc(param_1 + 6);
        return;
      }
      do {
        pbVar16 = pbVar16 + 1;
        *plVar19 = (long)pbVar16;
        pbVar23 = pbVar23 + 1;
      } while (*pbVar16 - 0x30 < 10);
      goto LAB_109db5e30;
    }
    if (lVar11 == 0) {
      func_0x000107c31940(&pbStack_60,&UNK_10f5fb52c);
      FUN_109db4e30(param_1,param_2,pbVar14 + -1,&pbStack_60);
      return;
    }
    uStack_88 = CONCAT44(uStack_88._4_4_,0x80);
    FUN_109defdd8(&puStack_90,0,0);
    pbStack_60 = *(byte **)(param_2 + 0x60);
    pbStack_58 = (byte *)(*(long *)(param_2 + 0x90) - (long)pbStack_60);
    ppbVar7 = &pbStack_60;
    FUN_109e04094(ppbVar7,0,&puStack_90);
    if ((int)ppbVar7 == 0) {
      if ((*(char *)(param_2 + 0x6d) == '\x01') && ((*(byte *)*plVar19 | 0x20) == 0x68)) {
        *plVar19 = (long)((byte *)*plVar19 + 1);
      }
      FUN_109db65d0(plVar19);
      FUN_109db6628(param_1,*(long *)(param_2 + 0x60),
                    *(long *)(param_2 + 0x90) - *(long *)(param_2 + 0x60),&puStack_90);
    }
    else {
      uVar20 = *(undefined8 *)(param_2 + 0x60);
      func_0x000107c31940(&pbStack_60,&UNK_10f5fb52c);
      FUN_109db4e30(param_1,param_2,uVar20,&pbStack_60);
    }
  }
LAB_109db5af4:
  puVar6 = puStack_90;
  uVar1 = (uint)uStack_88;
  goto joined_r0x000109db5a2c;
LAB_109db6094:
  bVar5 = (bVar2 & 0xdf) != 0x48;
  if (bVar5) {
    pbVar16 = pbVar12;
  }
  iVar9 = 0x10;
  if (bVar5) {
    iVar9 = 8;
  }
LAB_109db60b0:
  *(byte **)(param_2 + 0x90) = pbVar16;
  puStack_b8 = *(undefined8 **)(param_2 + 0x60);
  lStack_b0 = (long)pbVar16 - (long)puStack_b8;
  ppuVar8 = &puStack_b8;
  FUN_109e04094(ppuVar8,iVar9,&puStack_70);
  if ((int)ppuVar8 == 0) {
    if (iVar9 == 0x10) {
      *plVar19 = *plVar19 + 1;
    }
    FUN_109db65d0(plVar19);
    FUN_109db6628(param_1,puStack_b8,lStack_b0,&puStack_70);
  }
  else {
    uVar20 = *(undefined8 *)(param_2 + 0x60);
    FUN_109db64d8(auStack_a8,iVar9);
    func_0x00010928a5e0(&puStack_90,&UNK_10f5fa5cc,auStack_a8);
    func_0x000109259240(&pbStack_60,&puStack_90,&UNK_10f5fb524);
    FUN_109db4e30(param_1,param_2,uVar20,&pbStack_60);
LAB_109db5fa0:
    if (lStack_80 < 0) {
      __ZdlPv(puStack_90);
    }
    if (cStack_91 < '\0') {
      __ZdlPv(auStack_a8[0]);
    }
  }
LAB_109db5ff0:
  if ((uint)lStack_68 < 0x41) {
    return;
  }
  if (puStack_70 == (undefined8 *)0x0) {
    return;
  }
  goto LAB_109db6004;
LAB_109db5740:
  bVar5 = (bVar3 & 0xdf) != 0x48;
  if (bVar5) {
    pbVar16 = pbVar12;
  }
  iVar9 = 0x10;
  if (bVar5) {
    iVar9 = 10;
  }
LAB_109db575c:
  *plVar19 = (long)pbVar16;
  if ((iVar9 != 0x10) && ((*(byte *)(param_2 + 0x78) & 1) == 0)) {
    bVar2 = *pbVar16;
    if ((bVar2 != 0x65) && (bVar2 != 0x45)) {
      if (bVar2 != 0x2e) goto LAB_109db5794;
      *plVar19 = (long)(pbVar16 + 1);
    }
FUN_109db4e90:
    pbVar16 = *(byte **)(param_2 + 0x90);
    bVar2 = *pbVar16;
    while (bVar2 - 0x30 < 10) {
      pbVar16 = pbVar16 + 1;
      *(byte **)(param_2 + 0x90) = pbVar16;
      bVar2 = *pbVar16;
    }
    if (bVar2 < 0x45) {
      if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) {
        func_0x000107c31940(&uStack_48,&UNK_10f5fb402);
        *(byte **)(param_2 + 0x40) = pbVar16;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (param_2 + 0x48,&uStack_48);
        lVar11 = *(long *)(param_2 + 0x90);
        *param_1 = 1;
        *(byte **)(param_1 + 2) = pbVar16;
        *(long *)(param_1 + 4) = lVar11 - (long)pbVar16;
        param_1[8] = 0x40;
        *(undefined8 *)(param_1 + 6) = 0;
        FUN_109d301fc(param_1 + 6);
        if (unaff_x23 < 0) {
          __ZdlPv(uStack_48);
        }
        return;
      }
    }
    else if ((bVar2 == 0x45) || (bVar2 == 0x65)) {
      *(byte **)(param_2 + 0x90) = pbVar16 + 1;
      bVar2 = pbVar16[1];
      if ((bVar2 == 0x2d) || (pbVar14 = pbVar16 + 1, bVar2 == 0x2b)) {
        *(byte **)(param_2 + 0x90) = pbVar16 + 2;
        bVar2 = pbVar16[2];
        pbVar14 = pbVar16 + 2;
      }
      while (pbVar16 = pbVar14, bVar2 - 0x30 < 10) {
        pbVar14 = pbVar16 + 1;
        *(byte **)(param_2 + 0x90) = pbVar14;
        bVar2 = *pbVar14;
      }
    }
    lVar11 = *(long *)(param_2 + 0x60);
    *param_1 = 6;
    *(long *)(param_1 + 2) = lVar11;
    *(long *)(param_1 + 4) = (long)pbVar16 - lVar11;
    param_1[8] = 0x40;
    *(undefined8 *)(param_1 + 6) = 0;
    goto code_r0x000109d301fc;
  }
LAB_109db5794:
  puStack_70 = *(undefined8 **)(param_2 + 0x60);
  lStack_68 = (long)pbVar16 - (long)puStack_70;
  lStack_b0 = CONCAT44(lStack_b0._4_4_,0x80);
  puVar6 = (undefined8 *)0x10;
  __Znam();
  *puVar6 = 0;
  puVar6[1] = 0;
  ppuVar8 = &puStack_70;
  puStack_b8 = puVar6;
  FUN_109e04094(ppuVar8,iVar9,&puStack_b8);
  if ((int)ppuVar8 == 0) {
    if ((*(byte *)(param_2 + 0x78) & 1) == 0) {
      FUN_109db65d0(plVar19);
    }
    FUN_109db6628(param_1,puStack_70,lStack_68,&puStack_b8);
  }
  else {
    lVar21 = *(long *)(param_2 + 0x60);
    FUN_109db64d8(auStack_a8,iVar9);
    puVar6 = auStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar6,0,&UNK_10f5fa5cc,8);
    uStack_88 = puVar6[1];
    puStack_90 = (undefined8 *)*puVar6;
    lStack_80 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    ppuVar8 = &puStack_90;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppuVar8,&UNK_10f5fb524,7);
    pbStack_58 = (byte *)ppuVar8[1];
    pbStack_60 = (byte *)*ppuVar8;
    puStack_50 = ppuVar8[2];
    ppuVar8[1] = (undefined8 *)0x0;
    ppuVar8[2] = (undefined8 *)0x0;
    *ppuVar8 = (undefined8 *)0x0;
    *(long *)(param_2 + 0x40) = lVar21;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_2 + 0x48,&pbStack_60);
    lVar11 = *plVar19;
    *param_1 = 1;
    *(long *)(param_1 + 2) = lVar21;
    *(long *)(param_1 + 4) = lVar11 - lVar21;
    param_1[8] = 0x40;
    *(undefined8 *)(param_1 + 6) = 0;
    FUN_109d301fc(param_1 + 6);
LAB_109db5870:
    if (lStack_80 < 0) {
      __ZdlPv(puStack_90);
    }
    if (cStack_91 < '\0') {
      __ZdlPv(auStack_a8[0]);
    }
  }
LAB_109db5a24:
  puVar6 = puStack_b8;
  uVar1 = (uint)lStack_b0;
joined_r0x000109db5a2c:
  if ((0x40 < uVar1) && (puVar6 != (undefined8 *)0x0)) {
LAB_109db6004:
    __ZdaPv();
  }
  return;
}



/* Entry: 109db64d8; end: 109db65cf;  */

/* WARNING: Possible PIC construction at 0x00010002d5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002d5bc) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */

ulong ***** FUN_109db64d8(ulong *****param_1,undefined8 param_2)

{
  ulong *****pppppuVar1;
  uint uVar2;
  ulong *****pppppuVar3;
  ulong *****pppppuVar4;
  ulong *****pppppuVar5;
  ulong *****pppppuVar6;
  ulong *****unaff_x19;
  undefined8 unaff_x20;
  ulong *****unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  ulong ****ppppuVar7;
  ulong ****ppppuVar8;
  ulong ****appppuStack_38 [2];
  char cStack_21;
  
  uVar2 = (int)param_2 - 2U >> 1 | (int)param_2 << 0x1f;
  if ((int)uVar2 < 4) {
    if (uVar2 == 0) {
      pppppuVar5 = (ulong *****)&DAT_10f56745e;
    }
    else {
      if (uVar2 != 3) {
LAB_109db6530:
        __ZNSt3__19to_stringEj(appppuStack_38,param_2);
        pppppuVar5 = appppuStack_38;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (pppppuVar5,0,&UNK_10f5fb620,5);
        ppppuVar8 = pppppuVar5[1];
        ppppuVar7 = *pppppuVar5;
        param_1[2] = pppppuVar5[2];
        param_1[1] = ppppuVar8;
        *param_1 = ppppuVar7;
        pppppuVar5[1] = (ulong ****)0x0;
        pppppuVar5[2] = (ulong ****)0x0;
        *pppppuVar5 = (ulong ****)0x0;
        if (cStack_21 < '\0') {
          __ZdlPv(appppuStack_38[0]);
          pppppuVar5 = (ulong *****)appppuStack_38[0];
        }
        return pppppuVar5;
      }
      pppppuVar5 = (ulong *****)&UNK_10f5fb60e;
    }
  }
  else if (uVar2 == 4) {
    pppppuVar5 = (ulong *****)&UNK_10f58828b;
  }
  else {
    if (uVar2 != 7) goto LAB_109db6530;
    pppppuVar5 = (ulong *****)&UNK_10f5fb614;
  }
  while( true ) {
    pppppuVar6 = pppppuVar5;
    pppppuVar3 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong ******)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong ******)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    pppppuVar5 = pppppuVar6;
    func_0x000107c613d0();
    if (pppppuVar5 < (ulong *****)0x7ffffffffffffff8) break;
    func_0x000104c4f6b8();
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x20;
    *(ulong ******)((long)register0x00000008 + -0x58) = pppppuVar3;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_10002d57c;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x50);
    if ((bRam00000001132dfb00 & 1) != 0) {
      return pppppuVar5;
    }
    pppppuVar5 = (ulong *****)0x1132dfb00;
    func_0x000107c60e48();
    if ((int)pppppuVar5 == 0) {
      return pppppuVar5;
    }
    unaff_x30 = &UNK_10002d5bc;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = (ulong *****)0x1132dfae8;
    pppppuVar5 = (ulong *****)&UNK_10f5738ce;
    unaff_x19 = pppppuVar3;
    unaff_x21 = pppppuVar6;
  }
  if (pppppuVar5 < (ulong *****)0x17) {
    *(char *)((long)pppppuVar3 + 0x17) = (char)pppppuVar5;
    pppppuVar4 = pppppuVar3;
    if (pppppuVar5 == (ulong *****)0x0) goto code_r0x00010002d55c;
  }
  else {
    pppppuVar1 = (ulong *****)0x19;
    if (((ulong)pppppuVar5 | 7) != 0x17) {
      pppppuVar1 = (ulong *****)(((ulong)pppppuVar5 | 7) + 1);
    }
    pppppuVar4 = pppppuVar1;
    func_0x000107c60e20();
    pppppuVar3[1] = (ulong ****)pppppuVar5;
    pppppuVar3[2] = (ulong ****)((ulong)pppppuVar1 | 0x8000000000000000);
    *pppppuVar3 = (ulong ****)pppppuVar4;
  }
  func_0x000107c610b8(pppppuVar4,pppppuVar6,pppppuVar5);
code_r0x00010002d55c:
  *(undefined1 *)((long)pppppuVar4 + (long)pppppuVar5) = 0;
  return pppppuVar3;
}



/* Entry: 109db65d0; end: 109db6627;  */

void FUN_109db65d0(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  
  pbVar1 = (byte *)*param_1;
  bVar3 = *pbVar1;
  pbVar2 = pbVar1;
  if ((bVar3 | 0x20) == 0x75) {
    pbVar2 = pbVar1 + 1;
    *param_1 = (long)pbVar2;
    bVar3 = pbVar1[1];
  }
  pbVar1 = pbVar2;
  if ((bVar3 | 0x20) == 0x6c) {
    pbVar1 = pbVar2 + 1;
    *param_1 = (long)pbVar1;
    bVar3 = pbVar2[1];
  }
  if ((bVar3 | 0x20) == 0x6c) {
    *param_1 = (long)(pbVar1 + 1);
  }
  return;
}



/* Entry: 109db6628; end: 109db66c7;  */

void FUN_109db6628(undefined4 *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  uVar1 = (uint)param_4[1];
  if (uVar1 < 0x41) {
    uVar3 = *param_4;
    uVar2 = 4;
  }
  else {
    func_0x000109df08dc();
    uVar3 = (ulong)uVar1 + 0x3f >> 3 & 0x3ffffff8;
    __Znam();
    _memcpy();
    uVar2 = 4;
    if (0x40 < uVar1 - (int)param_4) {
      uVar2 = 5;
    }
  }
  *param_1 = uVar2;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined8 *)(param_1 + 4) = param_3;
  param_1[8] = uVar1;
  *(ulong *)(param_1 + 6) = uVar3;
  return;
}



/* Entry: 109db66c8; end: 109db6a2b;  */

void FUN_109db66c8(undefined4 *param_1,long param_2)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  short *psVar7;
  byte *pbVar8;
  ulong *puVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  pbVar8 = *(byte **)(param_2 + 0x90);
  pbVar1 = (byte *)(*(long *)(param_2 + 0x98) + *(long *)(param_2 + 0xa0));
  if (pbVar8 == pbVar1) {
    uVar11 = 0xffffffff;
  }
  else {
    *(byte **)(param_2 + 0x90) = pbVar8 + 1;
    uVar11 = (uint)*pbVar8;
    pbVar8 = pbVar8 + 1;
  }
  if (*(char *)(param_2 + 0x79) == '\x01') {
    lVar13 = *(long *)(param_2 + 0x60);
    func_0x000107c31940(auStack_48,&UNK_10f5fb55d);
    *(long *)(param_2 + 0x40) = lVar13;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_2 + 0x48,auStack_48);
    lVar6 = *(long *)(param_2 + 0x90);
    *param_1 = 1;
    *(long *)(param_1 + 2) = lVar13;
    *(long *)(param_1 + 4) = lVar6 - lVar13;
    param_1[8] = 0x40;
    *(undefined8 *)(param_1 + 6) = 0;
    FUN_109d301fc(param_1 + 6);
    goto LAB_109db694c;
  }
  if (*(char *)(param_2 + 0x6e) == '\x01') {
LAB_109db677c:
    while (pbVar10 = pbVar8, uVar11 != 0xffffffff) {
      if (uVar11 == 0x27) {
        pbVar8 = pbVar1;
        if ((pbVar10 != pbVar1) && (pbVar8 = pbVar10, *pbVar10 == 0x27)) goto code_r0x000109db67b8;
        lVar6 = *(long *)(param_2 + 0x60);
        *param_1 = 3;
        *(long *)(param_1 + 2) = lVar6;
        *(long *)(param_1 + 4) = (long)pbVar8 - lVar6;
        param_1[8] = 0x40;
        *(undefined8 *)(param_1 + 6) = 0;
        goto LAB_109db69ec;
      }
      uVar11 = 0xffffffff;
      pbVar8 = pbVar10;
      if (pbVar10 != pbVar1) {
        lVar6 = 1;
        goto LAB_109db67d0;
      }
    }
    lVar13 = *(long *)(param_2 + 0x60);
    func_0x000107c31940(auStack_48,&UNK_10f5fb581);
    *(long *)(param_2 + 0x40) = lVar13;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_2 + 0x48,auStack_48);
    lVar6 = *(long *)(param_2 + 0x90);
    *param_1 = 1;
    *(long *)(param_1 + 2) = lVar13;
    *(long *)(param_1 + 4) = lVar6 - lVar13;
    param_1[8] = 0x40;
    *(undefined8 *)(param_1 + 6) = 0;
    FUN_109d301fc(param_1 + 6);
    goto LAB_109db694c;
  }
  if (uVar11 == 0xffffffff) {
LAB_109db68b0:
    lVar13 = *(long *)(param_2 + 0x60);
    func_0x000107c31940(auStack_48,&UNK_10f5fb59e);
    *(long *)(param_2 + 0x40) = lVar13;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_2 + 0x48,auStack_48);
    lVar6 = *(long *)(param_2 + 0x90);
    *param_1 = 1;
    *(long *)(param_1 + 2) = lVar13;
    *(long *)(param_1 + 4) = lVar6 - lVar13;
    param_1[8] = 0x40;
    *(undefined8 *)(param_1 + 6) = 0;
    FUN_109d301fc(param_1 + 6);
  }
  else {
    if (uVar11 == 0x5c) {
      if (pbVar8 == pbVar1) goto LAB_109db68b0;
      pbVar8 = pbVar8 + 1;
      *(byte **)(param_2 + 0x90) = pbVar8;
    }
    if (pbVar8 != pbVar1) {
      *(byte **)(param_2 + 0x90) = pbVar8 + 1;
      if (*pbVar8 == 0x27) {
        psVar7 = *(short **)(param_2 + 0x60);
        uVar5 = (long)(pbVar8 + 1) - (long)psVar7;
        if ((uVar5 < 2) || (*psVar7 != 0x5c27)) {
          uVar12 = (long)*(char *)((long)psVar7 + 1);
        }
        else {
          bVar4 = *(byte *)(psVar7 + 1);
          uVar12 = 9;
          if (bVar4 != 0x74) {
            uVar12 = (long)(char)bVar4;
          }
          uVar3 = 0xd;
          if (bVar4 != 0x72) {
            uVar3 = uVar12;
          }
          uVar12 = 10;
          if (bVar4 != 0x6e) {
            uVar12 = uVar3;
          }
          uVar3 = 0xc;
          if (bVar4 != 0x66) {
            uVar3 = (long)(char)bVar4;
          }
          uVar2 = 8;
          if (bVar4 != 0x62) {
            uVar2 = uVar3;
          }
          uVar3 = (ulong)bVar4;
          if (bVar4 != 0x27) {
            uVar3 = uVar2;
          }
          if (bVar4 < 0x6e) {
            uVar12 = uVar3;
          }
        }
        *param_1 = 4;
        *(short **)(param_1 + 2) = psVar7;
        *(ulong *)(param_1 + 4) = uVar5;
        param_1[8] = 0x40;
        *(ulong *)(param_1 + 6) = uVar12;
LAB_109db69ec:
        puVar9 = (ulong *)(param_1 + 6);
        uVar11 = param_1[8];
        if (uVar11 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0xffffffffffffffff >> ((ulong)-uVar11 & 0x3f);
          if (0x40 < uVar11) {
            puVar9 = (ulong *)(*puVar9 + (ulong)((int)((ulong)uVar11 + 0x3f >> 6) - 1) * 8);
          }
        }
        *puVar9 = *puVar9 & uVar5;
        return;
      }
    }
    lVar13 = *(long *)(param_2 + 0x60);
    func_0x000107c31940(auStack_48,&UNK_10f5fb5b8);
    *(long *)(param_2 + 0x40) = lVar13;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_2 + 0x48,auStack_48);
    lVar6 = *(long *)(param_2 + 0x90);
    *param_1 = 1;
    *(long *)(param_1 + 2) = lVar13;
    *(long *)(param_1 + 4) = lVar6 - lVar13;
    param_1[8] = 0x40;
    *(undefined8 *)(param_1 + 6) = 0;
    FUN_109d301fc(param_1 + 6);
  }
LAB_109db694c:
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return;
code_r0x000109db67b8:
  pbVar8 = pbVar10 + 1;
  *(byte **)(param_2 + 0x90) = pbVar8;
  uVar11 = 0xffffffff;
  lVar6 = 2;
  if (pbVar8 != pbVar1) {
LAB_109db67d0:
    *(byte **)(param_2 + 0x90) = pbVar10 + lVar6;
    uVar11 = (uint)*pbVar8;
    pbVar8 = pbVar10 + lVar6;
  }
  goto LAB_109db677c;
}



/* Entry: 109db6a2c; end: 109db6cc7;  */

void FUN_109db6a2c(undefined4 *param_1,long param_2)

{
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  ulong *puVar5;
  byte *pbVar6;
  uint uVar7;
  long lVar8;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  pbVar4 = *(byte **)(param_2 + 0x90);
  pbVar1 = (byte *)(*(long *)(param_2 + 0x98) + *(long *)(param_2 + 0xa0));
  if (pbVar4 == pbVar1) {
    uVar7 = 0xffffffff;
  }
  else {
    *(byte **)(param_2 + 0x90) = pbVar4 + 1;
    uVar7 = (uint)*pbVar4;
    pbVar4 = pbVar4 + 1;
  }
  if (*(char *)(param_2 + 0x79) == '\x01') {
    lVar8 = *(long *)(param_2 + 0x60);
    func_0x000107c31940(auStack_48,&UNK_10f5fb5d2);
    *(long *)(param_2 + 0x40) = lVar8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_2 + 0x48,auStack_48);
    lVar3 = *(long *)(param_2 + 0x90);
    *param_1 = 1;
    *(long *)(param_1 + 2) = lVar8;
    *(long *)(param_1 + 4) = lVar3 - lVar8;
    param_1[8] = 0x40;
    *(undefined8 *)(param_1 + 6) = 0;
    FUN_109d301fc(param_1 + 6);
  }
  else {
    if ((*(byte *)(param_2 + 0x6e) & 1) == 0) {
      do {
        if (uVar7 == 0x5c) {
          if (pbVar4 == pbVar1) goto LAB_109db6be0;
          *(byte **)(param_2 + 0x90) = pbVar4 + 1;
          pbVar6 = pbVar4 + 1;
        }
        else {
          if (uVar7 == 0xffffffff) {
LAB_109db6be0:
            lVar8 = *(long *)(param_2 + 0x60);
            func_0x000107c31940(auStack_48,&UNK_10f5fb581);
            *(long *)(param_2 + 0x40) = lVar8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (param_2 + 0x48,auStack_48);
            lVar3 = *(long *)(param_2 + 0x90);
            *param_1 = 1;
            *(long *)(param_1 + 2) = lVar8;
            *(long *)(param_1 + 4) = lVar3 - lVar8;
            param_1[8] = 0x40;
            *(undefined8 *)(param_1 + 6) = 0;
            FUN_109d301fc(param_1 + 6);
            goto LAB_109db6c2c;
          }
          pbVar6 = pbVar4;
          if (uVar7 == 0x22) {
            lVar3 = *(long *)(param_2 + 0x60);
            *param_1 = 3;
            *(long *)(param_1 + 2) = lVar3;
            *(long *)(param_1 + 4) = (long)pbVar4 - lVar3;
LAB_109db6c64:
            param_1[8] = 0x40;
            puVar5 = (ulong *)(param_1 + 6);
            *puVar5 = 0;
            uVar7 = param_1[8];
            if (uVar7 == 0) {
              uVar2 = 0;
            }
            else {
              uVar2 = 0xffffffffffffffff >> ((ulong)-uVar7 & 0x3f);
              if (0x40 < uVar7) {
                puVar5 = (ulong *)(*puVar5 + (ulong)((int)((ulong)uVar7 + 0x3f >> 6) - 1) * 8);
              }
            }
            *puVar5 = *puVar5 & uVar2;
            return;
          }
        }
        uVar7 = 0xffffffff;
        pbVar4 = pbVar6;
        if (pbVar6 != pbVar1) {
          pbVar4 = pbVar6 + 1;
          *(byte **)(param_2 + 0x90) = pbVar4;
          uVar7 = (uint)*pbVar6;
        }
      } while( true );
    }
LAB_109db6adc:
    while (pbVar6 = pbVar4, uVar7 != 0xffffffff) {
      if (uVar7 == 0x22) {
        pbVar4 = pbVar1;
        if ((pbVar6 != pbVar1) && (pbVar4 = pbVar6, *pbVar6 == 0x22)) goto code_r0x000109db6b18;
        lVar3 = *(long *)(param_2 + 0x60);
        *param_1 = 3;
        *(long *)(param_1 + 2) = lVar3;
        *(long *)(param_1 + 4) = (long)pbVar4 - lVar3;
        goto LAB_109db6c64;
      }
      uVar7 = 0xffffffff;
      pbVar4 = pbVar6;
      if (pbVar6 != pbVar1) {
        lVar3 = 1;
        goto LAB_109db6b30;
      }
    }
    lVar8 = *(long *)(param_2 + 0x60);
    func_0x000107c31940(auStack_48,&UNK_10f5fb581);
    *(long *)(param_2 + 0x40) = lVar8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_2 + 0x48,auStack_48);
    lVar3 = *(long *)(param_2 + 0x90);
    *param_1 = 1;
    *(long *)(param_1 + 2) = lVar8;
    *(long *)(param_1 + 4) = lVar3 - lVar8;
    param_1[8] = 0x40;
    *(undefined8 *)(param_1 + 6) = 0;
    FUN_109d301fc(param_1 + 6);
  }
LAB_109db6c2c:
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return;
code_r0x000109db6b18:
  pbVar4 = pbVar6 + 1;
  *(byte **)(param_2 + 0x90) = pbVar4;
  uVar7 = 0xffffffff;
  lVar3 = 2;
  if (pbVar4 != pbVar1) {
LAB_109db6b30:
    *(byte **)(param_2 + 0x90) = pbVar6 + lVar3;
    uVar7 = (uint)*pbVar4;
    pbVar4 = pbVar6 + lVar3;
  }
  goto LAB_109db6adc;
}



/* Entry: 109db6cc8; end: 109db6d6f;  */

undefined1  [16] FUN_109db6cc8(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  pcVar4 = *(char **)(param_1 + 0x90);
  *(char **)(param_1 + 0x60) = pcVar4;
  uVar1 = param_1;
  FUN_109db6d70(param_1,pcVar4);
  pcVar5 = pcVar4;
  if ((uVar1 & 1) == 0) {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x28);
    do {
      uVar2 = uVar6;
      _strlen(uVar6);
      pcVar3 = pcVar5;
      _strncmp(pcVar5,uVar6,uVar2);
      if ((((int)pcVar3 == 0) || (*pcVar5 == '\n' || *pcVar5 == '\r')) ||
         (pcVar5 == (char *)(*(long *)(param_1 + 0x98) + *(long *)(param_1 + 0xa0)))) break;
      pcVar5 = pcVar5 + 1;
      *(char **)(param_1 + 0x90) = pcVar5;
      uVar1 = param_1;
      FUN_109db6d70(param_1,pcVar5);
    } while ((int)uVar1 == 0);
  }
  auVar7._8_8_ = (long)pcVar5 - (long)pcVar4;
  auVar7._0_8_ = pcVar4;
  return auVar7;
}



/* Entry: 109db6d70; end: 109db6de3;  */

bool FUN_109db6d70(long param_1,char *param_2)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x88);
  if ((*(char *)(lVar2 + 0x40) == '\x01') && (*(char *)(param_1 + 0xa9) != '\x01')) {
    return false;
  }
  pcVar1 = *(char **)(lVar2 + 0x30);
  if ((*(long *)(lVar2 + 0x38) != 1) && (pcVar1[1] != '#')) {
    _strncmp(param_2,pcVar1);
    return (int)param_2 == 0;
  }
  return *pcVar1 == *param_2;
}



/* Entry: 109db6de4; end: 109db6fbb;  */

long FUN_109db6de4(undefined8 *param_1,long param_2,long param_3,undefined1 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  uint uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uVar9 = param_1[0xc];
  uVar10 = param_1[0x12];
  uVar1 = *(undefined1 *)(param_1 + 0x15);
  uVar2 = *(undefined1 *)((long)param_1 + 0xa9);
  uVar3 = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xd) = param_4;
  uVar4 = *(undefined1 *)((long)param_1 + 0xaa);
  *(undefined1 *)((long)param_1 + 0xaa) = 1;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    func_0x000107c3192c(&uStack_80,param_1[9],param_1[10]);
  }
  else {
    uStack_78 = param_1[10];
    uStack_80 = param_1[9];
    lStack_70 = param_1[0xb];
  }
  uVar8 = param_1[8];
  if (param_3 == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = 0;
    param_2 = param_2 + 0x18;
    do {
      (**(code **)*param_1)(&iStack_a8,param_1);
      *(undefined8 *)(param_2 + -8) = uStack_98;
      *(undefined8 *)(param_2 + -0x10) = uStack_a0;
      *(ulong *)(param_2 + -0x18) = CONCAT44(uStack_a4,iStack_a8);
      func_0x000109d3015c(param_2,&lStack_90);
      iVar5 = iStack_a8;
      if ((0x40 < uStack_88) && (lStack_90 != 0)) {
        __ZdaPv();
      }
      lVar7 = lVar6;
      if (iVar5 == 0) break;
      lVar6 = lVar6 + 1;
      param_2 = param_2 + 0x28;
      lVar7 = param_3;
    } while (param_3 != lVar6);
  }
  param_1[8] = uVar8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 9,&uStack_80);
  if (lStack_70 < 0) {
    __ZdlPv(uStack_80);
  }
  *(undefined1 *)((long)param_1 + 0xaa) = uVar4;
  *(undefined1 *)(param_1 + 0xd) = uVar3;
  *(undefined1 *)((long)param_1 + 0xa9) = uVar2;
  *(undefined1 *)(param_1 + 0x15) = uVar1;
  param_1[0x12] = uVar10;
  param_1[0xc] = uVar9;
  return lVar7;
}



/* Entry: 109db6fbc; end: 109db8163;  */

void FUN_109db6fbc(undefined8 *param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  byte *pbVar5;
  undefined1 uVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  uint uStack_88;
  int aiStack_80 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  uint auStack_60 [2];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar10 = (byte *)param_2[0x12];
  param_2[0xc] = (long)pbVar10;
  if (pbVar10 == (byte *)(param_2[0x13] + param_2[0x14])) {
    plVar12 = (long *)0xffffffff;
  }
  else {
    param_2[0x12] = (long)(pbVar10 + 1);
    plVar12 = (long *)(ulong)*pbVar10;
    if (((*(byte *)((long)param_2 + 0xaa) & 1) == 0) && (*pbVar10 == 0x23)) {
      bVar1 = *(byte *)((long)param_2 + 0xa9);
      if (bVar1 == 1) {
        uStack_a0 = 0;
        lStack_98 = 0;
        uStack_90 = 0;
        uStack_70 = 0;
        lStack_68 = 0;
        uStack_78 = 0;
        auStack_60[0] = (uint)bVar1;
        plVar4 = param_2;
        uStack_88 = (uint)bVar1;
        (**(code **)(*param_2 + 0x20))(param_2,&iStack_a8,2,1);
        if (((((char)param_2[0x15] == '\x01') && (plVar4 == (long *)0x2)) && (iStack_a8 == 4)) &&
           (aiStack_80[0] == 3)) {
          lVar15 = 0;
          pcVar14 = (char *)param_2[0xc];
          for (pcVar7 = pcVar14;
              (param_2[0x12] = (long)pcVar7, *pcVar7 != '\n' && *pcVar7 != '\r' &&
              (pcVar7 != (char *)(param_2[0x13] + param_2[0x14]))); pcVar7 = pcVar7 + 1) {
            lVar15 = lVar15 + -1;
          }
          plVar4 = param_2 + 1;
          *(undefined1 *)((long)param_2 + 0x6b) = 0;
          FUN_109db8164(plVar4,*plVar4,aiStack_80);
          *(undefined1 *)((long)param_2 + 0x6b) = 0;
          FUN_109db8164(plVar4,param_2[1],&iStack_a8);
          *(undefined4 *)param_1 = 8;
          param_1[1] = pcVar14;
          param_1[2] = -lVar15;
          *(undefined4 *)(param_1 + 4) = 0x40;
          param_1[3] = 0;
          FUN_109d301fc();
LAB_109db7150:
          pbVar10 = (byte *)0x0;
        }
        else {
          if (*(char *)(param_2[0x11] + 0x41) == '\x01') {
            FUN_109db5370(param_1,param_2);
            goto LAB_109db7150;
          }
          pbVar10 = (byte *)0x1;
        }
        lVar15 = 0;
        do {
          if ((0x40 < *(uint *)((long)auStack_60 + lVar15)) &&
             (*(long *)((long)auStack_60 + lVar15 + -8) != 0)) {
            __ZdaPv();
          }
          lVar15 = lVar15 + -0x28;
        } while (lVar15 != -0x50);
        if ((int)pbVar10 == 0) goto LAB_109db72e0;
        pbVar10 = (byte *)param_2[0xc];
      }
      else {
        plVar12 = (long *)0x23;
      }
    }
  }
  plVar4 = param_2;
  FUN_109db6d70(param_2,pbVar10);
  if ((int)plVar4 != 0) {
    FUN_109db5370(param_1,param_2);
    goto LAB_109db72e0;
  }
  lVar16 = param_2[0x11];
  lVar13 = *(long *)(lVar16 + 0x28);
  lVar15 = lVar13;
  _strlen();
  pbVar5 = pbVar10;
  _strncmp(pbVar10,lVar13,lVar15);
  if ((int)pbVar5 == 0) {
    param_2[0x12] = param_2[0x12] + lVar15 + -1;
    *(undefined2 *)(param_2 + 0x15) = 0x101;
    _strlen();
    *(undefined4 *)param_1 = 9;
    param_1[1] = pbVar10;
    param_1[2] = lVar13;
    *(undefined4 *)(param_1 + 4) = 0x40;
    param_1 = param_1 + 3;
    *param_1 = 0;
    FUN_109d301fc(param_1);
    goto LAB_109db72e0;
  }
  uVar11 = (uint)plVar12;
  if (uVar11 != 0xffffffff) {
    *(undefined2 *)(param_2 + 0x15) = 0;
    if ((int)uVar11 < 0x7b) {
      switch(plVar12) {
      case (long *)0x0:
      case (long *)0x9:
      case (long *)0x20:
        *(undefined1 *)((long)param_2 + 0xa9) = *(undefined1 *)((long)param_2 + 0xa9);
        lVar15 = param_2[0x12] - (long)pbVar10;
        pcVar7 = (char *)param_2[0x12];
        while (*pcVar7 == ' ' || *pcVar7 == '\t') {
          param_2[0x12] = (long)(pcVar7 + 1);
          lVar15 = lVar15 + 1;
          pcVar7 = pcVar7 + 1;
        }
        if ((char)param_2[0xd] == '\x01') {
          (**(code **)*param_2)(param_1,param_2);
        }
        else {
          *(undefined4 *)param_1 = 0xb;
          param_1[1] = pbVar10;
          param_1[2] = lVar15;
          *(undefined4 *)(param_1 + 4) = 0x40;
          param_1 = param_1 + 3;
          *param_1 = 0;
          FUN_109d301fc(param_1);
        }
        break;
      default:
        goto LAB_109db792c;
      case (long *)0xa:
        *(undefined2 *)(param_2 + 0x15) = 0x101;
        *(undefined4 *)param_1 = 9;
        param_1[1] = pbVar10;
        *(undefined4 *)(param_1 + 4) = 0x40;
        param_1[3] = 0;
        param_1[2] = 1;
        FUN_109d301fc(param_1 + 3);
        break;
      case (long *)0xd:
        *(undefined2 *)(param_2 + 0x15) = 0x101;
        pcVar7 = (char *)param_2[0x12];
        if ((pcVar7 != (char *)(param_2[0x13] + param_2[0x14])) && (*pcVar7 == '\n')) {
          pcVar7 = pcVar7 + 1;
          param_2[0x12] = (long)pcVar7;
        }
        *(undefined4 *)param_1 = 9;
        param_1[1] = pbVar10;
        param_1[2] = (long)pcVar7 - (long)pbVar10;
        *(undefined4 *)(param_1 + 4) = 0x40;
        param_1 = param_1 + 3;
        *param_1 = 0;
        FUN_109d301fc(param_1);
        break;
      case (long *)0x21:
        if (*(char *)param_2[0x12] == '=') {
          param_2[0x12] = (long)((char *)param_2[0x12] + 1);
          *(undefined4 *)param_1 = 0x23;
          param_1[1] = pbVar10;
          *(undefined4 *)(param_1 + 4) = 0x40;
          param_1[3] = 0;
          param_1[2] = 2;
          FUN_109d301fc(param_1 + 3);
        }
        else {
          *(undefined4 *)param_1 = 0x22;
          param_1[1] = pbVar10;
          *(undefined4 *)(param_1 + 4) = 0x40;
          param_1[3] = 0;
          param_1[2] = 1;
          FUN_109d301fc(param_1 + 3);
        }
        break;
      case (long *)0x22:
        FUN_109db6a2c(param_1,param_2);
        break;
      case (long *)0x23:
        if (*(char *)(lVar16 + 0xb8) == '\x01') {
          FUN_109db5018(param_1,param_2);
        }
        else {
          *(undefined4 *)param_1 = 0x25;
          param_1[1] = pbVar10;
          *(undefined4 *)(param_1 + 4) = 0x40;
          param_1[3] = 0;
          param_1[2] = 1;
          FUN_109d301fc(param_1 + 3);
        }
        break;
      case (long *)0x24:
        if ((*(char *)((long)param_2 + 0x6f) == '\x01') &&
           (*(short *)(&UNK_10e0431c0 + (ulong)*(byte *)param_2[0x12] * 2) != -1)) {
          FUN_109db5484(param_1,param_2);
        }
        else if (*(char *)(lVar16 + 0xb6) == '\x01') {
          FUN_109db5018(param_1,param_2);
        }
        else {
          *(undefined4 *)param_1 = 0x1a;
          param_1[1] = pbVar10;
          *(undefined4 *)(param_1 + 4) = 0x40;
          param_1[3] = 0;
          param_1[2] = 1;
          FUN_109d301fc(param_1 + 3);
        }
        break;
      case (long *)0x25:
        if ((*(char *)((long)param_2 + 0x6f) == '\x01') && ((*(byte *)param_2[0x12] & 0xfe) == 0x30)
           ) {
          FUN_109db5484(param_1,param_2);
          break;
        }
        if ((*(char *)(lVar16 + 0x1ea) == '\x01') &&
           (plVar12 = (long *)param_2[0x12], plVar12 != (long *)0x0)) {
          plVar4 = plVar12;
          _strlen();
          if (plVar4 < (long *)0x6) {
            if (plVar4 < (long *)0x3) {
              if (plVar4 != (long *)0x2) goto code_r0x000109db7dc4;
            }
            else if ((short)*plVar12 == 0x6f67 && *(char *)((long)plVar12 + 2) == 't') {
code_r0x000109db7e44:
              uVar8 = 0x400000034;
code_r0x000109db7e4c:
              uVar9 = uVar8 >> 0x20;
              goto LAB_109db80cc;
            }
          }
          else {
            uVar8 = 0x70000002f;
            if ((int)*plVar12 == 0x6c6c6163 && *(short *)((long)plVar12 + 4) == 0x3631)
            goto code_r0x000109db80c8;
            if (plVar4 != (long *)0x6) {
              if ((int)*plVar12 == 0x6c6c6163 && *(int *)((long)plVar12 + 3) == 0x69685f6c) {
                uVar8 = 0x800000030;
                goto code_r0x000109db80c8;
              }
              if ((int)*plVar12 == 0x6c6c6163 && *(int *)((long)plVar12 + 3) == 0x6f6c5f6c) {
                uVar8 = 0x800000031;
                goto code_r0x000109db80c8;
              }
              if (plVar4 < (long *)0x9) {
                if (plVar4 != (long *)0x8) goto code_r0x000109db7ca8;
              }
              else {
                if (*plVar12 == 0x685f6c6572707464 && (char)plVar12[1] == 'i') {
                  uVar8 = 0x32;
code_r0x000109db808c:
                  uVar9 = 10;
                  goto LAB_109db80cc;
                }
                if (*plVar12 == 0x6c5f6c6572707464 && (char)plVar12[1] == 'o') {
                  uVar8 = 0x33;
                  goto code_r0x000109db808c;
                }
              }
              if (*plVar12 == 0x707369645f746f67) {
                uVar8 = 0x900000035;
                goto code_r0x000109db80c8;
              }
            }
code_r0x000109db7ca8:
            if ((int)*plVar12 == 0x5f746f67 && *(short *)((long)plVar12 + 4) == 0x6968) {
              uVar8 = 0x700000036;
              goto code_r0x000109db80c8;
            }
            if ((int)*plVar12 == 0x5f746f67 && *(short *)((long)plVar12 + 4) == 0x6f6c) {
              uVar8 = 0x37;
code_r0x000109db7ea4:
              uVar9 = 7;
              goto LAB_109db80cc;
            }
            if ((long *)0x7 < plVar4) {
              if (*plVar12 == 0x7473666f5f746f67) {
                uVar8 = 0x38;
                goto LAB_109db80b4;
              }
              if (*plVar12 == 0x656761705f746f67) {
                uVar8 = 0x39;
                goto LAB_109db80b4;
              }
              if (*plVar12 == 0x6c65727074746f67) {
                uVar8 = 0x3a;
                goto LAB_109db80b4;
              }
            }
            if ((short)*plVar12 == 0x6f67 && *(char *)((long)plVar12 + 2) == 't')
            goto code_r0x000109db7e44;
            if ((int)*plVar12 == 0x725f7067 && *(short *)((long)plVar12 + 4) == 0x6c65) {
              uVar8 = 0x70000003b;
              goto code_r0x000109db7e4c;
            }
            if ((int)*plVar12 == 0x68676968 && *(short *)((long)plVar12 + 4) == 0x7265) {
              uVar8 = 0x3d;
              goto code_r0x000109db7ea4;
            }
            if ((plVar4 != (long *)0x6) &&
               ((int)*plVar12 == 0x68676968 && *(int *)((long)plVar12 + 3) == 0x74736568)) {
              uVar8 = 0x80000003e;
              goto code_r0x000109db80c8;
            }
          }
          uVar8 = 0x30000003c;
          if ((short)*plVar12 == 0x6968) goto code_r0x000109db80c8;
          if ((short)*plVar12 == 0x6f6c) {
            uVar8 = 0x30000003f;
            goto code_r0x000109db80c8;
          }
          if (plVar4 != (long *)0x2) {
            if ((short)*plVar12 == 0x656e && *(char *)((long)plVar12 + 2) == 'g') {
              uVar8 = 0x400000040;
              goto code_r0x000109db80c8;
            }
            if (plVar4 < (long *)0x8) {
              if (plVar4 < (long *)0x5) goto code_r0x000109db7dc4;
            }
            else {
              if (*plVar12 == 0x69685f6c65726370) {
                uVar8 = 0x41;
                goto LAB_109db80b4;
              }
              if (*plVar12 == 0x6f6c5f6c65726370) {
                uVar8 = 0x42;
                goto LAB_109db80b4;
              }
            }
            if ((int)*plVar12 == 0x67736c74 && *(char *)((long)plVar12 + 4) == 'd') {
              uVar8 = 0x600000043;
code_r0x000109db80c8:
              uVar9 = uVar8 >> 0x20;
              goto LAB_109db80cc;
            }
            if ((long *)0x5 < plVar4) {
              if ((int)*plVar12 == 0x6c736c74 && *(short *)((long)plVar12 + 4) == 0x6d64) {
                uVar8 = 0x700000044;
                goto code_r0x000109db80c8;
              }
              if ((long *)0x7 < plVar4) {
                if (*plVar12 == 0x69685f6c65727074) goto code_r0x000109db80fc;
                if (*plVar12 == 0x6f6c5f6c65727074) {
                  uVar8 = 0x46;
                  goto LAB_109db80b4;
                }
              }
            }
          }
        }
code_r0x000109db7dc4:
        *(undefined4 *)param_1 = 0x24;
        param_1[1] = pbVar10;
        *(undefined4 *)(param_1 + 4) = 0x40;
        param_1[3] = 0;
        param_1[2] = 1;
        FUN_109d301fc(param_1 + 3);
        break;
      case (long *)0x26:
        if (*(char *)param_2[0x12] == '&') {
          param_2[0x12] = (long)((char *)param_2[0x12] + 1);
          *(undefined4 *)param_1 = 0x21;
          param_1[1] = pbVar10;
          *(undefined4 *)(param_1 + 4) = 0x40;
          param_1[3] = 0;
          param_1[2] = 2;
          FUN_109d301fc(param_1 + 3);
        }
        else {
          *(undefined4 *)param_1 = 0x20;
          param_1[1] = pbVar10;
          *(undefined4 *)(param_1 + 4) = 0x40;
          param_1[3] = 0;
          param_1[2] = 1;
          FUN_109d301fc(param_1 + 3);
        }
        break;
      case (long *)0x27:
        FUN_109db66c8(param_1,param_2);
        break;
      case (long *)0x28:
        *(undefined4 *)param_1 = 0x11;
        param_1[1] = pbVar10;
        *(undefined4 *)(param_1 + 4) = 0x40;
        param_1[3] = 0;
        param_1[2] = 1;
        FUN_109d301fc(param_1 + 3);
        break;
      case (long *)0x29:
        *(undefined4 *)param_1 = 0x12;
        param_1[1] = pbVar10;
        *(undefined4 *)(param_1 + 4) = 0x40;
        param_1[3] = 0;
        param_1[2] = 1;
        FUN_109d301fc(param_1 + 3);
        break;
      case (long *)0x2a:
        *(undefined4 *)param_1 = 0x17;
        param_1[1] = pbVar10;
        *(undefined4 *)(param_1 + 4) = 0x40;
        param_1[3] = 0;
        param_1[2] = 1;
        FUN_109d301fc(param_1 + 3);
        break;
      case (long *)0x2b:
        *(undefined4 *)param_1 = 0xc;
        param_1[1] = pbVar10;
        *(undefined4 *)(param_1 + 4) = 0x40;
        param_1[3] = 0;
        param_1[2] = 1;
        FUN_109d301fc(param_1 + 3);
        break;
      case (long *)0x2c:
        *(undefined4 *)param_1 = 0x19;
        param_1[1] = pbVar10;
        *(undefined4 *)(param_1 + 4) = 0x40;
        param_1[3] = 0;
        param_1[2] = 1;
        FUN_109d301fc(param_1 + 3);
        break;
      case (long *)0x2d:
        if (*(char *)param_2[0x12] == '>') {
          param_2[0x12] = (long)((char *)param_2[0x12] + 1);
          *(undefined4 *)param_1 = 0x2e;
          param_1[1] = pbVar10;
          *(undefined4 *)(param_1 + 4) = 0x40;
          param_1[3] = 0;
          param_1[2] = 2;
          FUN_109d301fc(param_1 + 3);
        }
        else {
          *(undefined4 *)param_1 = 0xd;
          param_1[1] = pbVar10;
          *(undefined4 *)(param_1 + 4) = 0x40;
          param_1[3] = 0;
          param_1[2] = 1;
          FUN_109d301fc(param_1 + 3);
        }
        break;
      case (long *)0x2f:
        *(undefined1 *)((long)param_2 + 0xa9) = *(undefined1 *)((long)param_2 + 0xa9);
        FUN_109db5198(param_1,param_2);
        break;
      case (long *)0x30:
      case (long *)0x31:
      case (long *)0x32:
      case (long *)0x33:
      case (long *)0x34:
      case (long *)0x35:
      case (long *)0x36:
      case (long *)0x37:
      case (long *)0x38:
      case (long *)0x39:
        FUN_109db5484(param_1,param_2);
        break;
      case (long *)0x3a:
        *(undefined4 *)param_1 = 10;
        param_1[1] = pbVar10;
        *(undefined4 *)(param_1 + 4) = 0x40;
        param_1[3] = 0;
        param_1[2] = 1;
        FUN_109d301fc(param_1 + 3);
        break;
      case (long *)0x3c:
        pcVar7 = (char *)param_2[0x12];
        cVar2 = *pcVar7;
        if (cVar2 == '>') {
          param_2[0x12] = (long)(pcVar7 + 1);
          *(undefined4 *)param_1 = 0x29;
          param_1[1] = pbVar10;
          *(undefined4 *)(param_1 + 4) = 0x40;
          param_1[3] = 0;
          param_1[2] = 2;
          FUN_109d301fc(param_1 + 3);
        }
        else if (cVar2 == '=') {
          param_2[0x12] = (long)(pcVar7 + 1);
          *(undefined4 *)param_1 = 0x27;
          param_1[1] = pbVar10;
          *(undefined4 *)(param_1 + 4) = 0x40;
          param_1[3] = 0;
          param_1[2] = 2;
          FUN_109d301fc(param_1 + 3);
        }
        else if (cVar2 == '<') {
          param_2[0x12] = (long)(pcVar7 + 1);
          *(undefined4 *)param_1 = 0x28;
          param_1[1] = pbVar10;
          *(undefined4 *)(param_1 + 4) = 0x40;
          param_1[3] = 0;
          param_1[2] = 2;
          FUN_109d301fc(param_1 + 3);
        }
        else {
          *(undefined4 *)param_1 = 0x26;
          param_1[1] = pbVar10;
          *(undefined4 *)(param_1 + 4) = 0x40;
          param_1[3] = 0;
          param_1[2] = 1;
          FUN_109d301fc(param_1 + 3);
        }
        break;
      case (long *)0x3d:
        if (*(char *)param_2[0x12] == '=') {
          param_2[0x12] = (long)((char *)param_2[0x12] + 1);
          *(undefined4 *)param_1 = 0x1c;
          param_1[1] = pbVar10;
          *(undefined4 *)(param_1 + 4) = 0x40;
          param_1[3] = 0;
          param_1[2] = 2;
          FUN_109d301fc(param_1 + 3);
        }
        else {
          *(undefined4 *)param_1 = 0x1b;
          param_1[1] = pbVar10;
          *(undefined4 *)(param_1 + 4) = 0x40;
          param_1[3] = 0;
          param_1[2] = 1;
          FUN_109d301fc(param_1 + 3);
        }
        break;
      case (long *)0x3e:
        pcVar7 = (char *)param_2[0x12];
        if (*pcVar7 == '=') {
          param_2[0x12] = (long)(pcVar7 + 1);
          *(undefined4 *)param_1 = 0x2b;
          param_1[1] = pbVar10;
          *(undefined4 *)(param_1 + 4) = 0x40;
          param_1[3] = 0;
          param_1[2] = 2;
          FUN_109d301fc(param_1 + 3);
        }
        else if (*pcVar7 == '>') {
          param_2[0x12] = (long)(pcVar7 + 1);
          *(undefined4 *)param_1 = 0x2c;
          param_1[1] = pbVar10;
          *(undefined4 *)(param_1 + 4) = 0x40;
          param_1[3] = 0;
          param_1[2] = 2;
          FUN_109d301fc(param_1 + 3);
        }
        else {
          *(undefined4 *)param_1 = 0x2a;
          param_1[1] = pbVar10;
          *(undefined4 *)(param_1 + 4) = 0x40;
          param_1[3] = 0;
          param_1[2] = 1;
          FUN_109d301fc(param_1 + 3);
        }
        break;
      case (long *)0x40:
        if (*(char *)(lVar16 + 0xb7) == '\x01') {
          FUN_109db5018(param_1,param_2);
        }
        else {
          *(undefined4 *)param_1 = 0x2d;
          param_1[1] = pbVar10;
          *(undefined4 *)(param_1 + 4) = 0x40;
          param_1[3] = 0;
          param_1[2] = 1;
          FUN_109d301fc(param_1 + 3);
        }
        break;
      case (long *)0x5b:
        *(undefined4 *)param_1 = 0x13;
        param_1[1] = pbVar10;
        *(undefined4 *)(param_1 + 4) = 0x40;
        param_1[3] = 0;
        param_1[2] = 1;
        FUN_109d301fc(param_1 + 3);
        break;
      case (long *)0x5c:
        *(undefined4 *)param_1 = 0x10;
        param_1[1] = pbVar10;
        *(undefined4 *)(param_1 + 4) = 0x40;
        param_1[3] = 0;
        param_1[2] = 1;
        FUN_109d301fc(param_1 + 3);
        break;
      case (long *)0x5d:
        *(undefined4 *)param_1 = 0x14;
        param_1[1] = pbVar10;
        *(undefined4 *)(param_1 + 4) = 0x40;
        param_1[3] = 0;
        param_1[2] = 1;
        FUN_109d301fc(param_1 + 3);
        break;
      case (long *)0x5e:
        *(undefined4 *)param_1 = 0x1f;
        param_1[1] = pbVar10;
        *(undefined4 *)(param_1 + 4) = 0x40;
        param_1[3] = 0;
        param_1[2] = 1;
        FUN_109d301fc(param_1 + 3);
      }
    }
    else {
      if ((int)uVar11 < 0x7d) {
        if (uVar11 == 0x7b) {
          *(undefined4 *)param_1 = 0x15;
          param_1[1] = pbVar10;
          *(undefined4 *)(param_1 + 4) = 0x40;
          param_1[3] = 0;
          param_1[2] = 1;
          FUN_109d301fc(param_1 + 3);
          goto LAB_109db72e0;
        }
        if (uVar11 == 0x7c) {
          if (*(char *)param_2[0x12] == '|') {
            param_2[0x12] = (long)((char *)param_2[0x12] + 1);
            *(undefined4 *)param_1 = 0x1e;
            param_1[1] = pbVar10;
            *(undefined4 *)(param_1 + 4) = 0x40;
            param_1[3] = 0;
            param_1[2] = 2;
            FUN_109d301fc(param_1 + 3);
          }
          else {
            *(undefined4 *)param_1 = 0x1d;
            param_1[1] = pbVar10;
            *(undefined4 *)(param_1 + 4) = 0x40;
            param_1[3] = 0;
            param_1[2] = 1;
            FUN_109d301fc(param_1 + 3);
          }
          goto LAB_109db72e0;
        }
      }
      else {
        if (uVar11 == 0x7d) {
          *(undefined4 *)param_1 = 0x16;
          param_1[1] = pbVar10;
          *(undefined4 *)(param_1 + 4) = 0x40;
          param_1[3] = 0;
          param_1[2] = 1;
          FUN_109d301fc(param_1 + 3);
          goto LAB_109db72e0;
        }
        if (uVar11 == 0x7e) {
          *(undefined4 *)param_1 = 0xe;
          param_1[1] = pbVar10;
          *(undefined4 *)(param_1 + 4) = 0x40;
          param_1[3] = 0;
          param_1[2] = 1;
          FUN_109d301fc(param_1 + 3);
          goto LAB_109db72e0;
        }
      }
LAB_109db792c:
      if (uVar11 < 0x80) {
        uVar3 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + (long)plVar12 * 4 + 0x3c) & 0x100;
      }
      else {
        plVar4 = plVar12;
        ___maskrune(plVar12,0x100);
        uVar3 = (uint)plVar4;
      }
      if ((((uVar3 == 0) && (uVar11 != 0x2e)) && (uVar11 != 0x5f)) &&
         ((*(char *)(param_2[0x11] + 0xb5) != '\x01' || (uVar11 != 0x3f)))) {
        pbVar10 = (byte *)param_2[0xc];
        func_0x000107c31940(&iStack_a8,&UNK_10f5fb5f3);
        FUN_109db4e30(param_1,param_2,pbVar10,&iStack_a8);
        if (lStack_98 < 0) {
          __ZdlPv(CONCAT44(uStack_a4,iStack_a8));
        }
      }
      else {
        FUN_109db5018(param_1,param_2);
      }
    }
    goto LAB_109db72e0;
  }
  if (*(char *)((long)param_2 + 0xa9) == '\x01') {
    *(undefined2 *)(param_2 + 0x15) = 0;
    if ((*(byte *)((long)param_2 + 0xab) & 1) != 0) {
      uVar6 = 1;
      goto LAB_109db72bc;
    }
  }
  else {
    uVar6 = 0;
    if (*(byte *)((long)param_2 + 0xab) != 0) {
      *(undefined2 *)(param_2 + 0x15) = 0x101;
      *(undefined4 *)param_1 = 9;
      *(undefined4 *)(param_1 + 4) = 0x40;
      param_1[1] = pbVar10;
      param_1[2] = 0;
      param_1 = param_1 + 3;
      *param_1 = 0;
      FUN_109d301fc(param_1);
      goto LAB_109db72e0;
    }
LAB_109db72bc:
    *(undefined1 *)(param_2 + 0x15) = uVar6;
    *(undefined1 *)((long)param_2 + 0xa9) = uVar6;
  }
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0x40;
  param_1[1] = pbVar10;
  param_1[2] = 0;
  param_1 = param_1 + 3;
  *param_1 = 0;
  FUN_109d301fc(param_1);
LAB_109db72e0:
  while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
code_r0x000109db80fc:
    uVar8 = 0x45;
LAB_109db80b4:
    uVar9 = 9;
LAB_109db80cc:
    param_2[0x12] = (long)plVar12 + (uVar9 - 1);
    *(int *)param_1 = (int)uVar8;
    param_1[1] = pbVar10;
    param_1[2] = uVar9;
    *(undefined4 *)(param_1 + 4) = 0x40;
    param_1 = param_1 + 3;
    *param_1 = 0;
    FUN_109d301fc(param_1);
  }
  return;
}



/* Entry: 109db8164; end: 109db829b;  */

long * FUN_109db8164(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  lVar2 = *param_1;
  if (lVar2 + (ulong)*(uint *)(param_1 + 1) * 0x28 == param_2) {
    FUN_109db829c(param_1,param_3);
    plVar6 = (long *)((*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x28) - 0x28);
  }
  else {
    plVar1 = param_1;
    FUN_109db8334(param_1,param_3,1);
    plVar6 = (long *)(*param_1 + (param_2 - lVar2));
    puVar3 = (undefined8 *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x28);
    puVar3[1] = puVar3[-4];
    *puVar3 = puVar3[-5];
    *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar3 + -1);
    puVar3[2] = puVar3[-3];
    puVar3[3] = puVar3[-2];
    *(undefined4 *)(puVar3 + -1) = 0;
    lVar2 = *param_1;
    uVar4 = *(uint *)(param_1 + 1);
    plVar5 = (long *)((lVar2 + (ulong)uVar4 * 0x28) - 0x28);
    if (plVar5 != plVar6) {
      do {
        plVar7 = plVar5 + -5;
        plVar5[1] = plVar5[-4];
        *plVar5 = plVar5[-5];
        plVar5[2] = plVar5[-3];
        func_0x000109d2fe60(plVar5 + 3,plVar5 + -2);
        plVar5 = plVar7;
      } while (plVar7 != plVar6);
      uVar4 = *(uint *)(param_1 + 1);
      lVar2 = *param_1;
    }
    *(uint *)(param_1 + 1) = uVar4 + 1;
    lVar8 = 0x28;
    if ((long *)(lVar2 + (ulong)(uVar4 + 1) * 0x28) <= plVar1 || plVar1 < plVar6) {
      lVar8 = 0;
    }
    plVar1 = (long *)((long)plVar1 + lVar8);
    lVar8 = plVar1[1];
    lVar2 = *plVar1;
    plVar6[2] = plVar1[2];
    plVar6[1] = lVar8;
    *plVar6 = lVar2;
    func_0x000109d3015c(plVar6 + 3,plVar1 + 3);
  }
  return plVar6;
}



/* Entry: 109db829c; end: 109db8333;  */

void FUN_109db829c(long *param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar2 = param_1;
  FUN_109db8334(param_1,param_2,1);
  plVar5 = (long *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x28);
  lVar4 = plVar2[2];
  lVar6 = *plVar2;
  plVar5[1] = plVar2[1];
  *plVar5 = lVar6;
  plVar5[2] = lVar4;
  uVar1 = *(uint *)(plVar2 + 4);
  *(uint *)(plVar5 + 4) = uVar1;
  if (uVar1 < 0x41) {
    plVar5[3] = plVar2[3];
  }
  else {
    uVar3 = (ulong)uVar1 + 0x3f >> 3 & 0x3ffffff8;
    __Znam();
    plVar5[3] = uVar3;
    _memcpy();
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



/* Entry: 109db8334; end: 109db839b;  */

ulong FUN_109db8334(ulong *param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((ulong)*(uint *)((long)param_1 + 0xc) < param_3 + (ulong)(uint)param_1[1]) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (ulong)(uint)param_1[1] * 0x28;
    if ((param_2 >= uVar2 && param_2 <= uVar1) && (param_2 < uVar2 || uVar1 != param_2)) {
      FUN_109db839c();
      param_2 = *param_1 + (param_2 - uVar2);
    }
    else {
      FUN_109db839c();
    }
  }
  return param_2;
}



/* Entry: 109db839c; end: 109db840b;  */

void FUN_109db839c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 auStack_38 [2];
  
  plVar1 = param_1;
  FUN_109dffb24(param_1,param_1 + 2,param_2,0x28,auStack_38);
  FUN_109db840c(param_1,plVar1);
  if ((long *)*param_1 != param_1 + 2) {
    _free();
  }
  *param_1 = (long)plVar1;
  *(undefined4 *)((long)param_1 + 0xc) = auStack_38[0];
  return;
}



/* Entry: 109db840c; end: 109db854b;  */

void FUN_109db840c(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(uint *)(param_1 + 1) != 0) {
    puVar2 = (undefined8 *)*param_1;
    puVar3 = puVar2 + (ulong)*(uint *)(param_1 + 1) * 5;
    do {
      uVar7 = puVar2[1];
      uVar6 = *puVar2;
      param_2[2] = puVar2[2];
      param_2[1] = uVar7;
      *param_2 = uVar6;
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar2 + 4);
      param_2[3] = puVar2[3];
      *(undefined4 *)(puVar2 + 4) = 0;
      param_2 = param_2 + 5;
      puVar2 = puVar2 + 5;
    } while (puVar2 != puVar3);
    uVar1 = *(uint *)(param_1 + 1);
    if (uVar1 != 0) {
      puVar4 = (uint *)(*param_1 + (ulong)uVar1 * 0x28 + -8);
      lVar5 = (ulong)uVar1 * -0x28;
      do {
        if ((0x40 < *puVar4) && (*(long *)(puVar4 + -2) != 0)) {
          __ZdaPv();
        }
        puVar4 = puVar4 + -10;
        lVar5 = lVar5 + 0x28;
      } while (lVar5 != 0);
    }
  }
  return;
}



/* Entry: 109db854c; end: 109db862f;  */

undefined8 * FUN_109db854c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_2 + 0x30) == 0x20 && *(int *)(param_2 + 0x3c) == 0x10) {
    puVar1 = (undefined8 *)0x360;
    __Znwm();
    FUN_109db8630();
    *puVar1 = &PTR_FUN_110b58b60;
    puVar1[0x6a] = puVar1 + 5;
    puVar1[0x6b] = param_3;
    *(undefined1 *)(puVar1 + 0x12) = 0;
    *(undefined1 *)((long)puVar1 + 0x92) = 1;
    *(undefined2 *)(puVar1 + 0x14) = 0x101;
  }
  else {
    puVar1 = (undefined8 *)0x350;
    __Znwm(0x350);
    FUN_109db8630();
  }
  return puVar1;
}



/* Entry: 109db8630; end: 109db9bf7;  */

undefined8 *
FUN_109db8630(undefined8 *param_1,long *param_2,int *param_3,long param_4,undefined8 param_5,
             uint param_6)

{
  int iVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[2] = param_1 + 4;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_110b58cc0;
  param_1[1] = 0;
  FUN_109db4dac(param_1 + 5,param_5);
  param_1[0x1b] = param_3;
  param_1[0x1c] = param_4;
  param_1[0x1d] = param_5;
  param_1[0x1e] = param_2;
  puVar4 = param_1 + 0x21;
  if (param_6 < 2) {
    param_6 = 1;
  }
  param_1[0x22] = 0;
  *puVar4 = 0;
  *(uint *)(param_1 + 0x23) = param_6;
  *(undefined4 *)((long)param_1 + 0x11c) = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 0x18;
  param_1[0x33] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 1;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3c] = param_1 + 0x3e;
  param_1[0x3d] = 0x400000000;
  param_1[0x5a] = param_1 + 0x5c;
  param_1[0x5b] = 0x200000000;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = param_1 + 0x61;
  *(undefined4 *)(param_1 + 99) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x32c) = 0;
  *(undefined8 *)((long)param_1 + 0x324) = 0;
  *(undefined8 *)((long)param_1 + 0x31c) = 0;
  *(undefined4 *)((long)param_1 + 0x334) = 0x10;
  puVar5 = param_1 + 0x67;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x68] = 0;
  *puVar5 = 0;
  *(undefined4 *)((long)param_1 + 0x34c) = 0x10;
  *(undefined1 *)(param_1 + 4) = 0;
  lVar8 = param_2[6];
  param_1[0x20] = param_2[7];
  param_1[0x1f] = lVar8;
  param_2[6] = (long)FUN_109dbe284;
  param_2[7] = (long)param_1;
  lVar6 = *(long *)(*param_2 + (ulong)(param_6 - 1) * 0x18);
  lVar8 = *(long *)(lVar6 + 8);
  lVar6 = *(long *)(lVar6 + 0x10);
  param_1[0x18] = lVar8;
  param_1[0x19] = lVar6 - lVar8;
  param_1[0x17] = lVar8;
  param_1[0x11] = 0;
  *(undefined1 *)((long)param_1 + 0xd3) = 1;
  *(undefined8 **)(param_4 + 0x100) = param_1 + 0x22;
  iVar1 = *param_3;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      puVar3 = (undefined8 *)0x20;
      __Znwm();
      ppuVar7 = &PTR_FUN_110b58e30;
      *(undefined1 *)(puVar3 + 2) = 0;
      *puVar3 = &PTR_FUN_110b58e30;
      puVar3[3] = 0;
      *puVar4 = puVar3;
      *(undefined1 *)((long)param_1 + 0x31c) = 1;
      goto LAB_109db8894;
    }
    if (iVar1 == 1) {
      puVar3 = (undefined8 *)0x18;
      __Znwm();
      ppuVar7 = &PTR_DAT_110b58e70;
      *puVar3 = &PTR_DAT_110b58e70;
      goto LAB_109db8800;
    }
    puVar3 = (undefined8 *)0x18;
    __Znwm();
    *(undefined1 *)(puVar3 + 2) = 0;
    ppuVar7 = &PTR_DAT_110b58eb0;
LAB_109db888c:
    *puVar3 = ppuVar7;
  }
  else {
    if (iVar1 < 5) {
      if (iVar1 != 3) {
        FUN_109df7828(&UNK_10f5fb6a6,1);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109db9b54);
        (*pcVar2)();
      }
      puVar3 = (undefined8 *)0x18;
      __Znwm();
      *(undefined1 *)(puVar3 + 2) = 0;
      ppuVar7 = &PTR_FUN_110b58df0;
      goto LAB_109db888c;
    }
    if (iVar1 == 5) {
      puVar3 = (undefined8 *)0x28;
      __Znwm();
      ppuVar7 = &PTR_FUN_110b59080;
      *puVar3 = &PTR_FUN_110b59080;
      puVar3[3] = 0;
      puVar3[4] = 0;
LAB_109db8800:
      *(undefined1 *)(puVar3 + 2) = 1;
    }
    else {
      puVar3 = (undefined8 *)0x28;
      __Znwm();
      *(undefined1 *)(puVar3 + 2) = 0;
      ppuVar7 = &PTR_FUN_110b590c0;
      *puVar3 = &PTR_FUN_110b590c0;
      puVar3[3] = 0;
      puVar3[4] = 0;
    }
  }
  *puVar4 = puVar3;
LAB_109db8894:
  (*(code *)ppuVar7[2])();
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb6df,4);
  *(undefined4 *)puVar4 = 1;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb6e4,4);
  *(undefined4 *)puVar4 = 2;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb6e9,6);
  *(undefined4 *)puVar4 = 3;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb6f0,6);
  *(undefined4 *)puVar4 = 4;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb6f7,6);
  *(undefined4 *)puVar4 = 5;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb6fe,7);
  *(undefined4 *)puVar4 = 6;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb706,5);
  *(undefined4 *)puVar4 = 7;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb70c,6);
  *(undefined4 *)puVar4 = 8;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb713,6);
  *(undefined4 *)puVar4 = 10;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb71a,6);
  *(undefined4 *)puVar4 = 0xb;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb721,5);
  *(undefined4 *)puVar4 = 0xc;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb727,4);
  *(undefined4 *)puVar4 = 0xd;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb72c,6);
  *(undefined4 *)puVar4 = 0xe;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb733,5);
  *(undefined4 *)puVar4 = 0xf;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb739,6);
  *(undefined4 *)puVar4 = 0x10;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb740,5);
  *(undefined4 *)puVar4 = 0x11;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb746,7);
  *(undefined4 *)puVar4 = 0x29;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb74e,6);
  *(undefined4 *)puVar4 = 0x2a;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb755,7);
  *(undefined4 *)puVar4 = 0x2b;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb75d,6);
  *(undefined4 *)puVar4 = 0x2c;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb764,8);
  *(undefined4 *)puVar4 = 0x2d;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb76d,7);
  *(undefined4 *)puVar4 = 0x2e;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb775,8);
  *(undefined4 *)puVar4 = 0x2f;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb77e,8);
  *(undefined4 *)puVar4 = 0x30;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb787,8);
  *(undefined4 *)puVar4 = 0x31;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb790,9);
  *(undefined4 *)puVar4 = 0x32;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb79a,9);
  *(undefined4 *)puVar4 = 0x33;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb7a4,4);
  *(undefined4 *)puVar4 = 0x34;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb7a9,5);
  *(undefined4 *)puVar4 = 0x35;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb7af,5);
  *(undefined4 *)puVar4 = 0x3a;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb7b5,7);
  *(undefined4 *)puVar4 = 0x3b;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb7bd,6);
  *(undefined4 *)puVar4 = 0x3c;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb7c4,7);
  *(undefined4 *)puVar4 = 0x3d;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb7cc,0xf);
  *(undefined4 *)puVar4 = 0x3e;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb7dc,0xe);
  *(undefined4 *)puVar4 = 0x3f;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb7eb,0x10);
  *(undefined4 *)puVar4 = 0x40;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb7fc,0xf);
  *(undefined4 *)puVar4 = 0x41;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb80c,10);
  *(undefined4 *)puVar4 = 0x42;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb817,0x10);
  *(undefined4 *)puVar4 = 0x43;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb828,0xf);
  *(undefined4 *)puVar4 = 0x44;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb838,0x17);
  *(undefined4 *)puVar4 = 0x45;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb850,5);
  *(undefined4 *)puVar4 = 0x46;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb856,5);
  *(undefined4 *)puVar4 = 0x47;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb85c,7);
  *(undefined4 *)puVar4 = 0x48;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb864,6);
  *(undefined4 *)puVar4 = 0x49;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb86b,6);
  *(undefined4 *)puVar4 = 0x4a;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb872,8);
  *(undefined4 *)puVar4 = 0x4b;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb87b,7);
  *(undefined4 *)puVar4 = 0x4c;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb883,7);
  *(undefined4 *)puVar4 = 0x4d;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb88b,10);
  *(undefined4 *)puVar4 = 0x4e;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb896,5);
  *(undefined4 *)puVar4 = 0x4f;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb89c,4);
  *(undefined4 *)puVar4 = 0x4f;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb8a1,4);
  *(undefined4 *)puVar4 = 0x50;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb8a6,5);
  *(undefined4 *)puVar4 = 0x51;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb8ac,5);
  *(undefined4 *)puVar4 = 0x36;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb8b2,0x12);
  *(undefined4 *)puVar4 = 0x37;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb8c5,0xc);
  *(undefined4 *)puVar4 = 0x38;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb8d2,0xe);
  *(undefined4 *)puVar4 = 0x39;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb8e1,3);
  *(undefined4 *)puVar4 = 0x52;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb8e5,5);
  *(undefined4 *)puVar4 = 0x53;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb8eb,5);
  *(undefined4 *)puVar4 = 0x54;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb8f1,5);
  *(undefined4 *)puVar4 = 0x55;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb8f7,5);
  *(undefined4 *)puVar4 = 0x56;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb8fd,5);
  *(undefined4 *)puVar4 = 0x57;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb903,5);
  *(undefined4 *)puVar4 = 0x58;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb909,4);
  *(undefined4 *)puVar4 = 0x59;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb90e,5);
  *(undefined4 *)puVar4 = 0x5a;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb914,4);
  *(undefined4 *)puVar4 = 0x5b;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb919,6);
  *(undefined4 *)puVar4 = 0x5c;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb920,5);
  *(undefined4 *)puVar4 = 0x5d;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb926,6);
  *(undefined4 *)puVar4 = 0x5e;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb92d,6);
  *(undefined4 *)puVar4 = 0x5f;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb934,7);
  *(undefined4 *)puVar4 = 0x60;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb93c,9);
  *(undefined4 *)puVar4 = 0x61;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb946,7);
  *(undefined4 *)puVar4 = 0x62;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb94e,5);
  *(undefined4 *)puVar4 = 99;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb954,4);
  *(undefined4 *)puVar4 = 0xa4;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb959,6);
  *(undefined4 *)puVar4 = 100;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb960,5);
  *(undefined4 *)puVar4 = 0x66;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb966,6);
  *(undefined4 *)puVar4 = 0x65;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb96d,5);
  *(undefined4 *)puVar4 = 0x67;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb973,5);
  *(undefined4 *)puVar4 = 0x68;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb979,4);
  *(undefined4 *)puVar4 = 0x69;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb97e,6);
  *(undefined4 *)puVar4 = 0x6a;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb985,8);
  *(undefined4 *)puVar4 = 0x6b;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb98e,0xb);
  *(undefined4 *)puVar4 = 0x6c;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb99a,7);
  *(undefined4 *)puVar4 = 0x6e;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb9a2,0xd);
  *(undefined4 *)puVar4 = 0x6f;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb9b0,0x14);
  *(undefined4 *)puVar4 = 0x70;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb9c5,0x12);
  *(undefined4 *)puVar4 = 0x6d;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb9d8,0xd);
  *(undefined4 *)puVar4 = 0x71;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb9e6,10);
  *(undefined4 *)puVar4 = 0x73;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fb9f1,0xf);
  *(undefined4 *)puVar4 = 0x72;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fba01,0x11);
  *(undefined4 *)puVar4 = 0x74;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fba13,0x16);
  *(undefined4 *)puVar4 = 0x75;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fba2a,0xc);
  *(undefined4 *)puVar4 = 0x76;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fba37,8);
  *(undefined4 *)puVar4 = 0x97;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fba40,8);
  *(undefined4 *)puVar4 = 0x98;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fba49,0xd);
  *(undefined4 *)puVar4 = 0x77;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fba57,0xe);
  *(undefined4 *)puVar4 = 0x78;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fba66,0xc);
  *(undefined4 *)puVar4 = 0x79;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fba73,0xc);
  *(undefined4 *)puVar4 = 0x7a;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fba80,0x13);
  *(undefined4 *)puVar4 = 0x7b;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fba94,0x16);
  *(undefined4 *)puVar4 = 0x7c;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbaab,0x15);
  *(undefined4 *)puVar4 = 0x7d;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbac1,0x18);
  *(undefined4 *)puVar4 = 0x7e;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbada,0xb);
  *(undefined4 *)puVar4 = 0x7f;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbae6,0xf);
  *(undefined4 *)puVar4 = 0x80;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbaf6,0x10);
  *(undefined4 *)puVar4 = 0x81;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbb07,9);
  *(undefined4 *)puVar4 = 0x82;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbb11,0x13);
  *(undefined4 *)puVar4 = 0x83;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbb25,0x12);
  *(undefined4 *)puVar4 = 0x84;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbb38,0xf);
  *(undefined4 *)puVar4 = 0x85;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbb48,0xc);
  *(undefined4 *)puVar4 = 0x86;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbb55,0xb);
  *(undefined4 *)puVar4 = 0x87;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbb61,0x12);
  *(undefined4 *)puVar4 = 0x88;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbb74,0x11);
  *(undefined4 *)puVar4 = 0x89;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbb86,0xe);
  *(undefined4 *)puVar4 = 0x8a;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbb95,0xd);
  *(undefined4 *)puVar4 = 0x8b;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbba3,0x10);
  *(undefined4 *)puVar4 = 0x8c;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbbb4,0x10);
  *(undefined4 *)puVar4 = 0x8d;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbbc5,0x15);
  *(undefined4 *)puVar4 = 0xa2;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbbdb,10);
  *(undefined4 *)puVar4 = 0x8e;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbbe6,0xb);
  *(undefined4 *)puVar4 = 0x8f;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbbf2,6);
  *(undefined4 *)puVar4 = 0x92;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbbf9,6);
  *(undefined4 *)puVar4 = 0x93;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbc00,5);
  *(undefined4 *)puVar4 = 0x94;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbc06,9);
  *(undefined4 *)puVar4 = 0x95;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbc10,7);
  *(undefined4 *)puVar4 = 0x96;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbc18,4);
  *(undefined4 *)puVar4 = 0x99;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbc1d,6);
  *(undefined4 *)puVar4 = 0x9a;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbc24,8);
  *(undefined4 *)puVar4 = 0x9b;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbc2d,9);
  *(undefined4 *)puVar4 = 0x90;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbc37,0xb);
  *(undefined4 *)puVar4 = 0x91;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbc43,6);
  *(undefined4 *)puVar4 = 9;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbc4a,3);
  *(undefined4 *)puVar4 = 0x12;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbc4e,5);
  *(undefined4 *)puVar4 = 0x13;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbc54,5);
  *(undefined4 *)puVar4 = 0x14;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbc5a,5);
  *(undefined4 *)puVar4 = 0x15;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbc60,5);
  *(undefined4 *)puVar4 = 0x16;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbc66,5);
  *(undefined4 *)puVar4 = 0x17;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbc6c,5);
  *(undefined4 *)puVar4 = 0x18;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbc72,5);
  *(undefined4 *)puVar4 = 0x19;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbc78,4);
  *(undefined4 *)puVar4 = 0x1a;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbc7d,6);
  *(undefined4 *)puVar4 = 0x1b;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbc84,6);
  *(undefined4 *)puVar4 = 0x1c;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbc8b,6);
  *(undefined4 *)puVar4 = 0x1d;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbc92,6);
  *(undefined4 *)puVar4 = 0x1e;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbc99,6);
  *(undefined4 *)puVar4 = 0x1f;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbca0,6);
  *(undefined4 *)puVar4 = 0x20;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbca7,3);
  *(undefined4 *)puVar4 = 0x21;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbcab,5);
  *(undefined4 *)puVar4 = 0x22;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbcb1,5);
  *(undefined4 *)puVar4 = 0x23;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbcb7,5);
  *(undefined4 *)puVar4 = 0x24;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbcbd,5);
  *(undefined4 *)puVar4 = 0x25;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbcc3,5);
  *(undefined4 *)puVar4 = 0x26;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbcc9,5);
  *(undefined4 *)puVar4 = 0x27;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbccf,5);
  *(undefined4 *)puVar4 = 0x28;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbcd5,6);
  *(undefined4 *)puVar4 = 0x9c;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbcdc,8);
  *(undefined4 *)puVar4 = 0x9d;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbce5,0xc);
  *(undefined4 *)puVar4 = 0x9e;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbcf2,0xc);
  *(undefined4 *)puVar4 = 0x9f;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbcff,0xc);
  *(undefined4 *)puVar4 = 0xa0;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbd0c,0x14);
  *(undefined4 *)puVar4 = 0xa1;
  puVar4 = param_1 + 100;
  FUN_109dc03d8(puVar4,&UNK_10f5fbd21,7);
  *(undefined4 *)puVar4 = 0xa3;
  puVar4 = puVar5;
  func_0x000109dc04cc(puVar5,&DAT_10f2ebf86,3);
  *(undefined4 *)puVar4 = 1;
  puVar4 = puVar5;
  func_0x000109dc04cc(puVar5,&UNK_10f5fbd29,0xd);
  *(undefined4 *)puVar4 = 2;
  puVar4 = puVar5;
  func_0x000109dc04cc(puVar5,&UNK_10f5fbd37,0xc);
  *(undefined4 *)puVar4 = 3;
  func_0x000109dc04cc(puVar5,&UNK_10f5fbd44,7);
  *(undefined4 *)puVar5 = 4;
  *(undefined4 *)((long)param_1 + 0x1a4) = 0;
  return param_1;
}



/* Entry: 109db9bf8; end: 109db9bff;  */

long FUN_109db9bf8(long param_1)

{
  return param_1 + 0x28;
}



/* Entry: 109db9c00; end: 109db9ce7;  */

undefined8 * FUN_109db9c00(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_110b58cc0;
  *(undefined8 *)(param_1[0x1c] + 0x100) = 0;
  lVar2 = param_1[0x1e];
  uVar3 = param_1[0x1f];
  *(undefined8 *)(lVar2 + 0x38) = param_1[0x20];
  *(undefined8 *)(lVar2 + 0x30) = uVar3;
  FUN_109dbe5e0(param_1 + 0x67);
  func_0x000109dbe650(param_1 + 100);
  FUN_109dc05c0(param_1 + 0x60,param_1[0x61]);
  if ((undefined8 *)param_1[0x5a] != param_1 + 0x5c) {
    _free();
  }
  if ((undefined8 *)param_1[0x3c] != param_1 + 0x3e) {
    _free();
  }
  FUN_109dc0600(param_1 + 0x2e);
  if (param_1[0x2b] != 0) {
    param_1[0x2c] = param_1[0x2b];
    __ZdlPv();
  }
  FUN_109dc07e4(param_1 + 0x28);
  if (param_1[0x25] != 0) {
    param_1[0x26] = param_1[0x25];
    __ZdlPv();
  }
  plVar1 = (long *)param_1[0x21];
  param_1[0x21] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x000109dd96e0(param_1 + 5);
  *param_1 = &PTR_DAT_110b58f38;
  FUN_109dd9e14(param_1 + 2);
  return param_1;
}



/* Entry: 109db9ce8; end: 109db9cf7;  */

undefined8 * FUN_109db9ce8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1[0x6a] + 0x68) = 1;
  *param_1 = &PTR_FUN_110b58cc0;
  *(undefined8 *)(param_1[0x1c] + 0x100) = 0;
  lVar2 = param_1[0x1e];
  uVar3 = param_1[0x1f];
  *(undefined8 *)(lVar2 + 0x38) = param_1[0x20];
  *(undefined8 *)(lVar2 + 0x30) = uVar3;
  FUN_109dbe5e0(param_1 + 0x67);
  func_0x000109dbe650(param_1 + 100);
  FUN_109dc05c0(param_1 + 0x60,param_1[0x61]);
  if ((undefined8 *)param_1[0x5a] != param_1 + 0x5c) {
    _free();
  }
  if ((undefined8 *)param_1[0x3c] != param_1 + 0x3e) {
    _free();
  }
  FUN_109dc0600(param_1 + 0x2e);
  if (param_1[0x2b] != 0) {
    param_1[0x2c] = param_1[0x2b];
    __ZdlPv();
  }
  FUN_109dc07e4(param_1 + 0x28);
  if (param_1[0x25] != 0) {
    param_1[0x26] = param_1[0x25];
    __ZdlPv();
  }
  plVar1 = (long *)param_1[0x21];
  param_1[0x21] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x000109dd96e0(param_1 + 5);
  *param_1 = &PTR_DAT_110b58f38;
  FUN_109dd9e14(param_1 + 2);
  return param_1;
}



/* Entry: 109db9cf8; end: 109db9d17;  */

void FUN_109db9cf8(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x350) + 0x68) = 1;
  FUN_109db9c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109db9d18; end: 109db9e1f;  */

void FUN_109db9d18(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = param_1 + 0x140;
  func_0x000107c2b020();
  lVar5 = *(long *)(param_1 + 0x140);
  uVar4 = uVar1 & 0xffffffff;
  lVar3 = *(long *)(lVar5 + (uVar1 & 0xffffffff) * 8);
  if (lVar3 == -8) {
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + -1;
  }
  else if (lVar3 != 0) {
    plVar2 = (long *)(lVar5 + uVar4 * 8 + 8);
    while ((lVar3 == 0 || (lVar3 == -8))) {
      lVar3 = *plVar2;
      plVar2 = plVar2 + 1;
    }
    goto LAB_109db9e00;
  }
  plVar2 = (long *)(param_3 + 0x19);
  __ZnwmSt11align_val_t(plVar2,8);
  if (param_3 != 0) {
    _memcpy(plVar2 + 3,param_2,param_3);
  }
  *(undefined1 *)((long)(plVar2 + 3) + param_3) = 0;
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = param_3;
  *(long **)(lVar5 + uVar4 * 8) = plVar2;
  *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
  uVar1 = param_1 + 0x140;
  func_0x000107c2b028(uVar1,uVar4);
  plVar2 = (long *)(*(long *)(param_1 + 0x140) + (uVar1 & 0xffffffff) * 8);
  do {
    lVar3 = *plVar2;
    plVar2 = plVar2 + 1;
  } while (lVar3 == 0 || lVar3 == -8);
LAB_109db9e00:
  *(undefined8 *)(lVar3 + 8) = param_4;
  *(undefined8 *)(lVar3 + 0x10) = param_5;
  return;
}



/* Entry: 109db9e20; end: 109db9f13;  */

void FUN_109db9e20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 ***pppuVar1;
  undefined1 **ppuVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *puStack_80;
  long lStack_78;
  char cStack_69;
  undefined8 **ppuStack_68;
  long lStack_60;
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = param_4;
  uStack_48 = param_5;
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_109e037bc(&ppuStack_68,&uStack_50);
  pppuVar1 = (undefined8 ***)ppuStack_68;
  if (-1 < (long)cStack_51) {
    pppuVar1 = &ppuStack_68;
  }
  if (-1 < cStack_51) {
    lStack_60 = (long)cStack_51;
  }
  puVar4 = (undefined4 *)(param_1 + 800);
  FUN_109dc03d8(puVar4,pppuVar1,lStack_60);
  uVar3 = *puVar4;
  FUN_109e037bc(&puStack_80,&uStack_40);
  ppuVar2 = (undefined1 **)puStack_80;
  if (-1 < (long)cStack_69) {
    ppuVar2 = &puStack_80;
  }
  if (-1 < cStack_69) {
    lStack_78 = (long)cStack_69;
  }
  puVar4 = (undefined4 *)(param_1 + 800);
  FUN_109dc03d8(puVar4,ppuVar2,lStack_78);
  *puVar4 = uVar3;
  if (cStack_69 < '\0') {
    __ZdlPv(puStack_80);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(ppuStack_68);
  }
  return;
}



/* Entry: 109db9f14; end: 109db9f53;  */

undefined8 FUN_109db9f14(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 109db9f54; end: 109dba5d7;  */

undefined1 * FUN_109db9f54(long *param_1,ulong param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  undefined **ppuVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  char *pcVar17;
  long lVar18;
  long lVar19;
  undefined *apuStack_318 [2];
  undefined **ppuStack_308;
  undefined8 uStack_300;
  undefined2 uStack_2f8;
  undefined **ppuStack_2f0;
  undefined8 uStack_2e8;
  undefined *apuStack_2e0 [2];
  undefined2 uStack_2d0;
  undefined4 uStack_2a0;
  undefined1 uStack_29c;
  undefined1 **ppuStack_298;
  undefined1 *puStack_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [512];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  ppuVar12 = (undefined **)(param_1 + 0x61);
  FUN_109dc05c0(param_1 + 0x60,param_1[0x61]);
  param_1[0x60] = (long)ppuVar12;
  param_1[0x62] = 0;
  *ppuVar12 = (undefined *)0x0;
  if ((param_2 & 1) == 0) {
    (**(code **)(*(long *)param_1[0x1c] + 0xb0))
              ((long *)param_1[0x1c],0,*(undefined8 *)(param_1[1] + 0xe8));
  }
  (**(code **)(*param_1 + 0xb8))(param_1);
  *(undefined1 *)(param_1 + 4) = 0;
  iVar1 = *(int *)((long)param_1 + 0x11c);
  bVar2 = *(byte *)((long)param_1 + 0x121);
  uStack_288 = 0x400000000;
  plVar10 = param_1;
  puStack_290 = auStack_280;
  (**(code **)(*param_1 + 0x30))();
  if (*(char *)((long)plVar10 + 0x641) == '\x01') {
    plVar10 = param_1;
    (**(code **)(*param_1 + 0x38))();
    if (*(uint *)(plVar10 + 0xf) == 0) {
      ppuVar12 = (undefined **)0x0;
    }
    else {
      ppuVar12 = *(undefined ***)(plVar10[0xe] + (ulong)*(uint *)(plVar10 + 0xf) * 0x20 + -0x20);
    }
    if (ppuVar12[1] == (undefined *)0x0) {
      plVar10 = param_1;
      (**(code **)(*param_1 + 0x30))();
      ppuStack_2f0 = (undefined **)&UNK_10f5fa737;
      uStack_2d0 = 0x103;
      FUN_109da7f80();
      plVar6 = param_1;
      (**(code **)(*param_1 + 0x38))();
      (**(code **)(*plVar6 + 0xc0))();
      ppuVar12[1] = (undefined *)plVar10;
    }
    plVar10 = param_1;
    (**(code **)(*param_1 + 0x30))(param_1);
    ppuStack_2f0 = ppuVar12;
    FUN_109dce3e0(plVar10 + 0xc9,&ppuStack_2f0);
  }
  (**(code **)(*(long *)param_1[1] + 0xc0))();
  if (*(int *)param_1[6] != 0) {
    do {
      uStack_2e8 = 0x800000000;
      uStack_2a0 = 0xffffffff;
      uStack_29c = 0;
      plVar10 = param_1;
      ppuStack_2f0 = apuStack_2e0;
      ppuStack_298 = &puStack_290;
      (**(code **)(*param_1 + 0x118))(param_1,&ppuStack_2f0,0);
      if ((((int)plVar10 != 0) && ((int)param_1[3] == 0)) && (*(int *)param_1[6] == 1)) {
        (**(code **)(*param_1 + 0xb8))(param_1);
      }
      FUN_109dce280(param_1);
      if (((int)plVar10 != 0) &&
         (plVar10 = param_1, (**(code **)(*param_1 + 0x28))(),
         (*(byte *)((long)plVar10 + 0x6b) & 1) == 0)) {
        (**(code **)(*param_1 + 0xe0))(param_1);
      }
      FUN_109dce7e0(&ppuStack_2f0);
    } while (*(int *)param_1[6] != 0);
  }
  (**(code **)(*(long *)param_1[1] + 200))();
  FUN_109dce280(param_1);
  plVar10 = (long *)param_1[1];
  plVar6 = param_1;
  (**(code **)(*param_1 + 0x38))();
  (**(code **)(*plVar10 + 0xb0))(plVar10);
  if ((*(int *)((long)param_1 + 0x11c) != iVar1) ||
     (*(byte *)((long)param_1 + 0x121) != (bVar2 & 1))) {
    plVar10 = param_1;
    (**(code **)(*param_1 + 0x28))();
    plVar6 = *(long **)(plVar10[1] + 8);
    ppuStack_2f0 = (undefined **)&UNK_10f5fd440;
    uStack_2d0 = 0x103;
    (**(code **)(*param_1 + 0xb0))(param_1,plVar6,&ppuStack_2f0,0,0);
  }
  plVar10 = param_1;
  (**(code **)(*param_1 + 0x30))();
  if (plVar10[0xc5] != 0) {
    uVar11 = *(uint *)(plVar10[0xc3] + 0x90);
    if (uVar11 != 0) {
      lVar15 = 0;
      lVar16 = (ulong)uVar11 * 0x48;
      pcVar17 = (char *)(*(long *)(plVar10[0xc3] + 0x88) + 0x17);
      do {
        lVar8 = (long)*pcVar17;
        if (lVar8 < 0) {
          lVar8 = *(long *)(pcVar17 + -0xf);
        }
        if (lVar8 == 0 && lVar15 != 0) {
          plVar10 = param_1;
          (**(code **)(*param_1 + 0x28))();
          plVar6 = *(long **)(plVar10[1] + 8);
          ppuVar12 = (undefined **)(lVar15 + ((ulong)ppuVar12 & 0xffffffff00000000));
          apuStack_318[0] = &UNK_10f5fd459;
          uStack_2f8 = 0x803;
          apuStack_2e0[0] = &UNK_10f5fd472;
          uStack_2d0 = 0x302;
          ppuStack_308 = ppuVar12;
          ppuStack_2f0 = apuStack_318;
          (**(code **)(*param_1 + 0xb0))(param_1,plVar6,&ppuStack_2f0,0,0);
        }
        lVar15 = lVar15 + 1;
        pcVar17 = pcVar17 + 0x48;
        lVar16 = lVar16 + -0x48;
      } while (lVar16 != 0);
    }
  }
  uVar5 = SUB81(plVar6,0);
  if ((param_3 & 1) == 0) {
    if (*(char *)(param_1[0x1d] + 0x12) == '\x01') {
      plVar10 = param_1;
      (**(code **)(*param_1 + 0x30))();
      uVar5 = SUB81(plVar6,0);
      plVar9 = (long *)plVar10[0x8f];
      uVar11 = *(uint *)(plVar10 + 0x90);
      plVar10 = plVar9;
      if (uVar11 != 0) {
        for (; *plVar10 == 0 || *plVar10 == -8; plVar10 = plVar10 + 1) {
        }
      }
      if (plVar10 != plVar9 + uVar11) {
        lVar15 = *plVar10;
        do {
          pbVar13 = *(byte **)(lVar15 + 8);
          if (((*(ulong *)(pbVar13 + 8) & 1) != 0) && ((*(ulong *)(pbVar13 + 8) & 0x1c00) != 0x800))
          {
            plVar6 = (long *)0x1;
            pbVar3 = pbVar13;
            func_0x000109da4494();
            if (pbVar3 == (byte *)0x0) {
              plVar6 = param_1;
              (**(code **)(*param_1 + 0x28))();
              if ((*pbVar13 >> 2 & 1) == 0) {
                ppuStack_308 = (undefined **)0x0;
                uStack_300 = 0;
              }
              else {
                ppuStack_308 = (undefined **)(*(undefined8 **)(pbVar13 + -8) + 2);
                uStack_300 = **(undefined8 **)(pbVar13 + -8);
              }
              plVar6 = *(long **)(plVar6[1] + 8);
              uStack_2f8 = 0x503;
              apuStack_318[0] = &UNK_10f5fd488;
              apuStack_2e0[0] = &UNK_10f5fd4a1;
              uStack_2d0 = 0x302;
              ppuStack_2f0 = apuStack_318;
              (**(code **)(*param_1 + 0xb0))(param_1,plVar6,&ppuStack_2f0,0,0);
            }
          }
          do {
            uVar5 = SUB81(plVar6,0);
            plVar10 = plVar10 + 1;
            lVar15 = *plVar10;
          } while (lVar15 == 0 || lVar15 == -8);
        } while (plVar10 != plVar9 + uVar11);
      }
    }
    if (*(uint *)(param_1 + 0x3d) != 0) {
      puVar14 = (undefined8 *)param_1[0x3c];
      lVar15 = (ulong)*(uint *)(param_1 + 0x3d) * 0x38;
      do {
        lVar16 = puVar14[6];
        uVar5 = 1;
        func_0x000109da4494();
        if (lVar16 == 0) {
          lVar8 = puVar14[2];
          lVar16 = puVar14[1];
          lVar19 = puVar14[4];
          lVar18 = puVar14[3];
          *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(puVar14 + 5);
          param_1[0x36] = lVar8;
          param_1[0x35] = lVar16;
          param_1[0x38] = lVar19;
          param_1[0x37] = lVar18;
          uVar7 = *puVar14;
          ppuStack_2f0 = (undefined **)&UNK_10f5fd4af;
          uStack_2d0 = 0x103;
          (**(code **)(*param_1 + 0xb0))(param_1,uVar7,&ppuStack_2f0,0,0);
          uVar5 = (undefined1)uVar7;
        }
        puVar14 = puVar14 + 7;
        lVar15 = lVar15 + -0x38;
      } while (lVar15 != 0);
    }
    if ((*(byte *)(param_1 + 4) & 1) == 0) {
      lVar15 = param_1[0x1c];
      plVar10 = *(long **)(lVar15 + 0x10);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x48))(plVar10);
        lVar15 = param_1[0x1c];
      }
      uVar5 = (undefined1)param_1[0x11];
      FUN_109de12dc(lVar15);
    }
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    (**(code **)(*param_1 + 0x30))();
    uVar11 = (uint)*(byte *)(param_1 + 0x101);
  }
  else {
    uVar11 = 1;
  }
  puVar4 = puStack_290;
  if (puStack_290 != auStack_280) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return (undefined1 *)(ulong)(uVar11 & 1);
  }
  ___stack_chk_fail();
  if (puStack_290 != auStack_280) {
    _free();
  }
  __Unwind_Resume();
  puVar4[0x31d] = uVar5;
  puVar4[0x95] = uVar5;
  return puVar4;
}



/* Entry: 109dba5d8; end: 109dba5eb;  */

void FUN_109dba5d8(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x31d) = param_2;
  *(undefined1 *)(param_1 + 0x95) = param_2;
  return;
}



/* Entry: 109dba5ec; end: 109dba6c7;  */

bool FUN_109dba5ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  iVar2 = (int)&uStack_50;
  if (*(long *)(param_1 + 0x310) == 0) {
    lVar7 = *(long *)(param_1 + 0x2d0);
    uVar1 = *(uint *)(param_1 + 0x2d8);
    lVar5 = lVar7;
    func_0x000109dcdea0(lVar7,(ulong)uVar1,param_2,param_3);
    bVar3 = lVar5 == lVar7 + (ulong)uVar1 * 0x10;
  }
  else {
    lVar5 = param_1 + 0x308;
    lVar8 = *(long *)(param_1 + 0x308);
    lVar6 = lVar5;
    lVar7 = lVar5;
    if (lVar8 != 0) {
      do {
        uStack_48 = *(undefined8 *)(lVar8 + 0x28);
        uStack_50 = *(undefined8 *)(lVar8 + 0x20);
        puVar4 = &uStack_50;
        func_0x000109d31f54(&uStack_50,param_2,param_3);
        if (-1 < (int)puVar4) {
          lVar7 = lVar8;
        }
        lVar8 = *(long *)(lVar8 + ((ulong)puVar4 >> 0x1c & 8));
      } while (lVar8 != 0);
      if ((lVar5 != lVar7) &&
         (uStack_50 = param_2, uStack_48 = param_3,
         func_0x000109d31f54(&uStack_50,*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x28))
         , -1 < iVar2)) {
        lVar6 = lVar7;
      }
    }
    bVar3 = lVar5 == lVar6;
  }
  return !bVar3;
}



/* Entry: 109dba6c8; end: 109dba6ef;  */

undefined8 FUN_109dba6c8(void)

{
  return 0;
}



/* Entry: 109dba6f0; end: 109dbbf03;  */

void FUN_109dba6f0(long *param_1,undefined8 param_2,ulong *param_3,code *param_4,char **param_5,
                  long *param_6,ulong *param_7,long *param_8,undefined ***param_9,ulong *param_10)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  code cVar4;
  char cVar5;
  int *piVar6;
  bool bVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined1 **ppuVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined ***pppuVar13;
  char **ppcVar14;
  uint uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  uint *puVar18;
  ulong *puVar19;
  ulong uVar20;
  ushort *puVar21;
  int *piVar22;
  long lVar23;
  char *pcVar24;
  char *pcVar25;
  int iVar26;
  int *piVar27;
  uint uVar28;
  long *plVar29;
  undefined *puVar30;
  undefined8 uVar31;
  undefined **unaff_x22;
  ulong *puVar32;
  byte bVar33;
  undefined4 uVar34;
  undefined ***pppuVar35;
  long lVar36;
  long lVar37;
  undefined **ppuVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  undefined ***pppuStack_5d0;
  char **ppcStack_5c8;
  undefined ***pppuStack_5c0;
  undefined ***pppuStack_5b8;
  undefined **ppuStack_5b0;
  long *plStack_5a8;
  ulong uStack_5a0;
  ulong *puStack_598;
  undefined1 *puStack_590;
  code *pcStack_588;
  char **ppcStack_578;
  long *plStack_570;
  long *plStack_568;
  undefined **ppuStack_560;
  ulong *puStack_558;
  undefined8 uStack_550;
  undefined ***pppuStack_548;
  undefined1 *puStack_540;
  undefined1 *puStack_538;
  undefined1 *puStack_530;
  undefined1 *puStack_528;
  int *piStack_520;
  int *piStack_518;
  long lStack_510;
  undefined ***pppuStack_508;
  undefined ***pppuStack_500;
  ulong uStack_4f8;
  int iStack_4ec;
  undefined ***pppuStack_4e8;
  ulong *puStack_4e0;
  ulong *puStack_4d8;
  char *pcStack_4d0;
  undefined8 uStack_4c8;
  undefined ***pppuStack_4c0;
  undefined **ppuStack_4b8;
  undefined2 uStack_4b0;
  undefined8 auStack_4a8 [2];
  char cStack_491;
  undefined1 *puStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined1 auStack_478 [8];
  undefined1 *puStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined1 auStack_458 [8];
  undefined **ppuStack_450;
  ulong *puStack_448;
  undefined *puStack_440;
  undefined4 *puStack_438;
  undefined4 *puStack_430;
  int iStack_418;
  undefined ***pppuStack_410;
  uint uStack_400;
  byte bStack_3fc;
  int **ppiStack_3f8;
  int *piStack_3f0;
  undefined8 uStack_3e8;
  int aiStack_3e0 [128];
  int *piStack_1e0;
  ulong uStack_1d8;
  int aiStack_1d0 [4];
  undefined1 *puStack_1c0;
  ulong uStack_1b8;
  undefined1 auStack_1b0 [96];
  undefined1 *puStack_150;
  ulong uStack_148;
  undefined1 auStack_140 [96];
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [32];
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [32];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_528 = auStack_a0;
  uStack_a8 = 0x400000000;
  puStack_530 = auStack_d0;
  uStack_d8 = 0x400000000;
  puStack_538 = auStack_458;
  uStack_460 = 4;
  uStack_468 = 0;
  puStack_540 = auStack_478;
  uStack_480 = 4;
  uStack_488 = 0;
  puStack_150 = auStack_140;
  uStack_148 = 0x400000000;
  puStack_1c0 = auStack_1b0;
  uStack_1b8 = 0x400000000;
  piStack_518 = aiStack_1d0;
  uStack_1d8 = 0x400000000;
  piStack_520 = aiStack_3e0;
  uStack_3e8 = 0x400000000;
  ppcVar14 = param_5;
  plStack_568 = param_8;
  uStack_550 = param_2;
  pppuStack_4e8 = (undefined ***)param_4;
  puStack_4e0 = param_3;
  puStack_490 = puStack_540;
  puStack_470 = puStack_538;
  piStack_3f0 = piStack_520;
  piStack_1e0 = piStack_518;
  puStack_e0 = puStack_530;
  puStack_b0 = puStack_528;
  (**(code **)(*param_1 + 0xb8))();
  iStack_4ec = 0;
  puStack_558 = param_10;
  ppuStack_560 = &puStack_440;
  pppuStack_548 = param_9;
  puStack_4d8 = param_7;
  while( true ) {
    pppuVar35 = (undefined ***)0x9;
    plVar29 = param_1;
    (**(code **)(*param_1 + 0x28))();
    iVar2 = *(int *)plVar29[1];
    if (iVar2 == 0) break;
    if (*(int *)param_1[6] - 0x15U < 2) {
      param_7 = (ulong *)param_1[0x11];
      (**(code **)(*param_1 + 0xb8))(param_1);
      if (*(int *)param_1[6] == 9) {
        (**(code **)(*param_1 + 0xb8))(param_1);
      }
      param_4 = (code *)(param_1[0x11] - (long)param_7);
      if ((uint)uStack_3e8 < uStack_3e8._4_4_) {
        piVar27 = piStack_3f0 + (uStack_3e8 & 0xffffffff) * 0x20;
        *piVar27 = 9;
        *(ulong **)(piVar27 + 2) = param_7;
        piVar27[4] = (int)param_4;
        *(undefined1 *)(piVar27 + 5) = 0;
        piVar27[0x10] = 0;
        piVar27[0x11] = 0;
        piVar27[0xe] = 0;
        piVar27[0xf] = 0;
        piVar27[0x14] = 0;
        piVar27[0x15] = 0;
        piVar27[0x12] = 0;
        piVar27[0x13] = 0;
        piVar27[0x18] = 0;
        piVar27[0x19] = 0;
        piVar27[0x16] = 0;
        piVar27[0x17] = 0;
        piVar27[0x1a] = 0;
        piVar27[0x1b] = 0;
        piVar27[8] = 0;
        piVar27[9] = 0;
        piVar27[10] = 0;
        piVar27[0xb] = 0;
        piVar27[6] = 0;
        piVar27[7] = 0;
        *(undefined1 *)(piVar27 + 0xc) = 0;
        piVar27[0x1c] = 1;
        *(undefined1 *)(piVar27 + 0x1e) = 0;
        uStack_3e8 = CONCAT44(uStack_3e8._4_4_,(uint)uStack_3e8 + 1);
      }
      else {
        param_3 = param_7;
        FUN_109dce964(&piStack_3f0,9);
      }
    }
    else {
      ppuStack_450 = ppuStack_560;
      puStack_448 = (ulong *)0x800000000;
      uStack_400 = 0xffffffff;
      bStack_3fc = 0;
      ppiStack_3f8 = &piStack_3f0;
      pppuVar13 = &ppuStack_450;
      plVar29 = param_1;
      param_3 = puStack_558;
      (**(code **)(*param_1 + 0x118))(param_1,pppuVar13,puStack_558);
      if ((((uint)plVar29 | (uint)bStack_3fc) & 1) != 0) {
        FUN_109dce280(param_1);
        FUN_109dce7e0(&ppuStack_450);
        goto LAB_109dbbbd8;
      }
      if (uStack_400 != 0xffffffff) {
        lStack_510 = *plStack_568 + (ulong)uStack_400 * -0x30;
        uStack_4f8 = (ulong)puStack_448 & 0xffffffff;
        ppcStack_578 = param_5;
        plStack_570 = param_6;
        if ((int)puStack_448 != 1) {
          lVar36 = 2;
          lVar37 = 1;
          do {
            param_9 = (undefined ***)ppuStack_450[lVar37];
            pppuVar35 = param_9;
            (*(code *)(*param_9)[6])();
            pppuVar9 = pppuVar13;
            if (((int)pppuVar35 == 0) ||
               (pppuVar35 = param_9, (*(code *)(*param_9)[0xc])(), pppuVar9 = pppuVar13,
               ((ulong)pppuVar35 & 1) != 0)) {
LAB_109dba9d4:
              pppuVar35 = param_9;
              (*(code *)(*param_9)[2])();
              pppuVar13 = pppuVar9;
              if ((pppuVar9 != (undefined ***)0x0) &&
                 (pppuVar8 = param_9, pppuStack_500 = pppuVar35, (*(code *)(*param_9)[3])(),
                 pppuVar8 != (undefined ***)0x0)) {
                pppuVar35 = (undefined ***)param_9[2];
                cVar4 = *(code *)((long)param_9 + 0x27);
                ppuVar38 = param_9[3];
                pppuVar13 = param_9;
                pppuStack_508 = pppuVar9;
                (*(code *)(*param_9)[5])();
                if (-1 < (char)cVar4) {
                  pppuVar35 = param_9 + 2;
                  ppuVar38 = (undefined **)(ulong)(byte)cVar4;
                }
                if ((int)pppuVar13 != 0) {
                  pppuVar13 = param_9;
                  (*(code *)(*param_9)[0xd])();
                  pppuVar35 = (undefined ***)"r";
                  if ((int)pppuVar13 == 0) {
                    pppuVar35 = (undefined ***)"i";
                  }
                  ppuVar38 = (undefined **)0x1;
                }
                if (lVar37 == 1) {
                  bVar33 = *(byte *)(lStack_510 + 0x12) >> 4 & 1;
                }
                else {
                  bVar33 = 0;
                }
                pppuVar9 = param_9;
                (*(code *)(*param_9)[9])(param_9);
                if (bVar33 == 0) {
                  FUN_109d342e4(&puStack_b0,pppuVar8);
                  pppuVar13 = param_9;
                  (*(code *)(*param_9)[0xc])(param_9);
                  FUN_109dce850(&puStack_470,pppuVar13);
                  if (pppuVar35 == (undefined ***)0x0) {
                    pcStack_4d0 = (char *)0x0;
                    uStack_4c8 = 0;
                    pppuStack_4c0 = (undefined ***)0x0;
                  }
                  else {
                    func_0x000104c54c8c(&pcStack_4d0,pppuVar35,ppuVar38);
                  }
                  ppuVar10 = &puStack_150;
                  FUN_109d37bcc(ppuVar10,&pcStack_4d0,1);
                  puVar16 = (undefined8 *)(puStack_150 + (uStack_148 & 0xffffffff) * 0x18);
                  puVar40 = ppuVar10[1];
                  puVar39 = *ppuVar10;
                  puVar16[2] = ppuVar10[2];
                  puVar16[1] = puVar40;
                  *puVar16 = puVar39;
                  ppuVar10[1] = (undefined1 *)0x0;
                  ppuVar10[2] = (undefined1 *)0x0;
                  *ppuVar10 = (undefined1 *)0x0;
                  uStack_148 = CONCAT44(uStack_148._4_4_,(int)uStack_148 + 1);
                  if ((long)pppuStack_4c0 < 0) {
                    __ZdlPv(pcStack_4d0);
                  }
                  param_4 = (code *)pppuStack_508;
                  if ((*(byte *)(*(long *)(lStack_510 + 0x28) + lVar36) >> 3 & 1) == 0) {
                    pppuVar13 = (undefined ***)0x4;
                    ppcVar14 = (char **)0x0;
                    FUN_109dce8ac(&piStack_3f0,4,pppuStack_500,pppuStack_508,0,pppuVar9);
                  }
                  else {
                    pppuVar13 = (undefined ***)0x3;
                    ppcVar14 = (char **)0x0;
                    FUN_109dce8ac(&piStack_3f0,3,pppuStack_500,pppuStack_508,0,pppuVar9);
                  }
                }
                else {
                  FUN_109d342e4(&puStack_e0,pppuVar8);
                  pppuVar13 = param_9;
                  (*(code *)(*param_9)[0xc])(param_9);
                  FUN_109dce850(&puStack_490,pppuVar13);
                  uStack_4b0 = 0x503;
                  pcStack_4d0 = "=";
                  pppuStack_4c0 = pppuVar35;
                  ppuStack_4b8 = ppuVar38;
                  FUN_109e04498(auStack_4a8,&pcStack_4d0);
                  ppuVar10 = &puStack_1c0;
                  FUN_109d37bcc(ppuVar10,auStack_4a8,1);
                  puVar16 = (undefined8 *)(puStack_1c0 + (uStack_1b8 & 0xffffffff) * 0x18);
                  puVar40 = ppuVar10[1];
                  puVar39 = *ppuVar10;
                  puVar16[2] = ppuVar10[2];
                  puVar16[1] = puVar40;
                  *puVar16 = puVar39;
                  ppuVar10[1] = (undefined1 *)0x0;
                  ppuVar10[2] = (undefined1 *)0x0;
                  *ppuVar10 = (undefined1 *)0x0;
                  uStack_1b8 = CONCAT44(uStack_1b8._4_4_,(int)uStack_1b8 + 1);
                  if (cStack_491 < '\0') {
                    __ZdlPv(auStack_4a8[0]);
                  }
                  pppuVar13 = (undefined ***)0x5;
                  ppcVar14 = (char **)0x0;
                  param_4 = (code *)pppuStack_508;
                  FUN_109dce8ac(&piStack_3f0,5,pppuStack_500,pppuStack_508,0,pppuVar9);
                  iStack_4ec = iStack_4ec + 1;
                }
              }
            }
            else {
              plVar29 = (long *)param_1[1];
              pppuVar13 = param_9;
              (*(code *)(*param_9)[7])();
              (**(code **)(*plVar29 + 0x50))();
              pppuVar9 = pppuVar13;
              if (((ulong)plVar29 & 1) != 0) goto LAB_109dba9d4;
              if ((*(byte *)(lStack_510 + 4) != 0) &&
                 (*(uint *)(param_9 + 1) < (uint)*(byte *)(lStack_510 + 4))) {
                pppuVar13 = param_9;
                (*(code *)(*param_9)[7])();
                func_0x000109d31b50(&piStack_1e0);
              }
            }
            lVar37 = lVar37 + 1;
            lVar36 = lVar36 + 6;
          } while ((int)uStack_4f8 != (int)lVar37);
        }
        param_6 = plStack_570;
        param_5 = ppcStack_578;
        lVar37 = *(long *)(lStack_510 + 0x20);
        unaff_x22 = (undefined **)(ulong)*(byte *)(lStack_510 + 8);
        bVar33 = *(byte *)(lStack_510 + 9);
        param_7 = (ulong *)(ulong)bVar33;
        uVar17 = uStack_1d8 & 0xffffffff;
        param_3 = (ulong *)(uVar17 + (long)param_7);
        if ((ulong *)(uStack_1d8 >> 0x20) < param_3) {
          param_4 = (code *)0x4;
          func_0x000107c2b01c(&piStack_1e0,piStack_518);
          uVar17 = uStack_1d8 & 0xffffffff;
        }
        if (bVar33 != 0) {
          lVar36 = (long)param_7 << 1;
          puVar18 = (uint *)(piStack_1e0 + uVar17);
          puVar21 = (ushort *)(lVar37 + (long)unaff_x22 * 2);
          do {
            *puVar18 = (uint)*puVar21;
            lVar36 = lVar36 + -2;
            puVar18 = puVar18 + 1;
            puVar21 = puVar21 + 1;
          } while (lVar36 != 0);
          uVar17 = uStack_1d8 & 0xffffffff;
        }
        uStack_1d8 = CONCAT44(uStack_1d8._4_4_,(int)uVar17 + (uint)bVar33);
      }
      FUN_109dce7e0(&ppuStack_450);
    }
  }
  *(uint *)puStack_4e0 = (uint)uStack_d8;
  *(undefined4 *)pppuStack_4e8 = (undefined4)uStack_a8;
  uVar17 = uStack_1d8 & 0xffffffff;
  if (1 < (uint)uStack_1d8) {
    param_4 = FUN_109dceab4;
    param_3 = (ulong *)0x4;
    _qsort(piStack_1e0,uVar17,4);
    uVar17 = uStack_1d8 & 0xffffffff;
  }
  piVar27 = piStack_1e0 + uVar17;
  if ((int)uVar17 != 0) {
    piVar6 = piStack_1e0;
    lVar37 = uVar17 * 4 + -8;
    do {
      lVar36 = lVar37;
      piVar22 = piVar6;
      piVar6 = piVar22 + 1;
      if (piVar6 == piVar27) goto LAB_109dbadd8;
      lVar37 = lVar36 + -4;
    } while (*piVar22 != piVar22[1]);
    if (piVar22 + 2 != piVar27) {
      lVar37 = 4;
      iVar26 = *piVar22;
      do {
        iVar3 = *(int *)((long)piVar6 + lVar37);
        if (iVar26 != iVar3) {
          piVar22 = piVar22 + 1;
          *piVar22 = iVar3;
        }
        lVar37 = lVar37 + 4;
        lVar36 = lVar36 + -4;
        iVar26 = iVar3;
      } while (lVar36 != 0);
    }
    piVar27 = piVar22 + 1;
  }
LAB_109dbadd8:
  pppuVar35 = (undefined ***)((ulong)((long)piVar27 - (long)piStack_1e0) >> 2);
  uVar34 = SUB84(pppuVar35,0);
  uStack_1d8 = CONCAT44(uStack_1d8._4_4_,uVar34);
  puVar32 = (ulong *)((ulong)((long)piVar27 - (long)piStack_1e0) >> 2 & 0xffffffff);
  ppuStack_450 = (undefined **)0x0;
  puStack_448 = (ulong *)0x0;
  puStack_440 = (undefined *)0x0;
  if ((ulong *)(ulong)*(uint *)((long)puStack_4d8 + 0xc) < puVar32) {
    puVar1 = puStack_4d8 + 2;
    ppcVar14 = &pcStack_4d0;
    param_4 = (code *)0x18;
    puVar19 = puStack_4d8;
    param_3 = puVar32;
    FUN_109dffb24(puStack_4d8,puVar1,puVar32);
    lVar37 = 0;
    do {
      puVar16 = (undefined8 *)((long)puVar19 + lVar37);
      if ((long)puStack_440 < 0) {
        param_3 = puStack_448;
        func_0x000107c3192c(puVar16,ppuStack_450,puStack_448);
      }
      else {
        puVar16[2] = puStack_440;
        puVar16[1] = puStack_448;
        *puVar16 = ppuStack_450;
      }
      lVar37 = lVar37 + 0x18;
    } while ((long)puVar32 * 0x18 - lVar37 != 0);
    puVar32 = (ulong *)*puStack_4d8;
    uVar28 = (uint)puStack_4d8[1];
    if (uVar28 != 0) {
      lVar37 = (ulong)uVar28 * -0x18;
      pcVar25 = (char *)((long)puVar32 + (ulong)uVar28 * 0x18 + -1);
      do {
        if (*pcVar25 < '\0') {
          __ZdlPv(*(undefined8 *)(pcVar25 + -0x17));
        }
        lVar37 = lVar37 + 0x18;
        pcVar25 = pcVar25 + -0x18;
      } while (lVar37 != 0);
      puVar32 = (ulong *)*puStack_4d8;
    }
    pcVar25 = pcStack_4d0;
    param_9 = pppuStack_548;
    if (puVar32 != puVar1) {
      _free();
    }
    *puStack_4d8 = (ulong)puVar19;
    *(undefined4 *)(puStack_4d8 + 1) = uVar34;
    *(int *)((long)puStack_4d8 + 0xc) = (int)pcVar25;
  }
  else {
    puVar19 = (ulong *)(ulong)(uint)puStack_4d8[1];
    puVar1 = puVar19;
    if (puVar32 <= puVar19) {
      puVar1 = puVar32;
    }
    if (puVar1 != (ulong *)0x0) {
      uVar17 = *puStack_4d8;
      lVar37 = -(long)puVar1;
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (uVar17,&ppuStack_450);
        uVar17 = uVar17 + 0x18;
        bVar7 = lVar37 != -1;
        lVar37 = lVar37 + 1;
      } while (bVar7);
      puVar19 = (ulong *)(ulong)(uint)puStack_4d8[1];
    }
    lVar37 = (long)puVar19 - (long)puVar32;
    if (puVar19 < puVar32) {
      puVar16 = (undefined8 *)(*puStack_4d8 + (long)puVar19 * 0x18);
      do {
        if ((long)puStack_440 < 0) {
          param_3 = puStack_448;
          func_0x000107c3192c(puVar16,ppuStack_450,puStack_448);
        }
        else {
          puVar16[2] = puStack_440;
          puVar16[1] = puStack_448;
          *puVar16 = ppuStack_450;
        }
        puVar16 = puVar16 + 3;
        bVar7 = lVar37 != -1;
        lVar37 = lVar37 + 1;
      } while (bVar7);
    }
    else if (lVar37 != 0) {
      lVar37 = (long)puVar32 * 0x18 + (long)puVar19 * -0x18;
      pcVar25 = (char *)(*puStack_4d8 + (long)puVar19 * 0x18 + -1);
      do {
        if (*pcVar25 < '\0') {
          __ZdlPv(*(undefined8 *)(pcVar25 + -0x17));
        }
        lVar37 = lVar37 + 0x18;
        pcVar25 = pcVar25 + -0x18;
      } while (lVar37 != 0);
    }
    *(undefined4 *)(puStack_4d8 + 1) = uVar34;
    param_9 = pppuStack_548;
  }
  if ((long)puStack_440 < 0) {
    __ZdlPv(ppuStack_450);
  }
  unaff_x22 = &PTR_DAT_110b5c4a0;
  if ((uint)uStack_1d8 != 0) {
    lVar36 = 0;
    lVar37 = 0;
    pppuVar35 = (undefined ***)((uStack_1d8 & 0xffffffff) * 0x18);
    do {
      FUN_109d31714(&ppuStack_450,*puStack_4d8 + lVar37);
      param_3 = (ulong *)(ulong)*(uint *)((long)piStack_1e0 + lVar36);
      (*(code *)(*param_9)[5])(param_9,&ppuStack_450,param_3);
      ppuStack_450 = &PTR_DAT_110b5c4a0;
      if ((iStack_418 == 1) && (puStack_440 != (undefined *)0x0)) {
        __ZdaPv();
      }
      lVar37 = lVar37 + 0x18;
      lVar36 = lVar36 + 4;
    } while ((long)pppuVar35 - lVar37 != 0);
  }
  if ((uint)*puStack_4e0 != 0 || *(int *)pppuStack_4e8 != 0) {
    uVar28 = *(int *)pppuStack_4e8 + (uint)*puStack_4e0;
    puVar32 = (ulong *)(ulong)uVar28;
    uVar15 = *(uint *)(param_5 + 1);
    if (uVar28 != uVar15) {
      if (uVar15 <= uVar28) {
        if (*(uint *)((long)param_5 + 0xc) < uVar28) {
          param_4 = (code *)0x10;
          param_3 = puVar32;
          func_0x000107c2b01c(param_5,param_5 + 2,puVar32);
          uVar15 = *(uint *)(param_5 + 1);
        }
        if (uVar15 != uVar28) {
          pcVar24 = *param_5;
          pcVar25 = pcVar24 + (ulong)uVar15 * 0x10;
          do {
            pcVar25[0] = '\0';
            pcVar25[1] = '\0';
            pcVar25[2] = '\0';
            pcVar25[3] = '\0';
            pcVar25[4] = '\0';
            pcVar25[5] = '\0';
            pcVar25[6] = '\0';
            pcVar25[7] = '\0';
            pcVar25[8] = '\0';
            pcVar25 = pcVar25 + 0x10;
          } while (pcVar25 != pcVar24 + (long)puVar32 * 0x10);
        }
      }
      *(uint *)(param_5 + 1) = uVar28;
    }
    uVar15 = *(uint *)(param_6 + 1);
    uVar17 = (ulong)uVar15;
    if (uVar28 != uVar15) {
      if (uVar28 < uVar15) {
        lVar37 = (long)puVar32 * 0x18 + uVar17 * -0x18;
        pppuVar13 = (undefined ***)(*param_6 + uVar17 * 0x18 + -1);
        do {
          pppuVar35 = pppuVar13 + -3;
          if ((char)*(code *)pppuVar13 < '\0') {
            __ZdlPv(*(undefined8 *)((long)pppuVar13 + -0x17));
          }
          lVar37 = lVar37 + 0x18;
          pppuVar13 = pppuVar35;
        } while (lVar37 != 0);
      }
      else {
        if (*(uint *)((long)param_6 + 0xc) < uVar28) {
          FUN_109d37c34(param_6,puVar32);
          uVar17 = (ulong)*(uint *)(param_6 + 1);
        }
        if ((long)puVar32 - uVar17 != 0) {
          _bzero(*param_6 + uVar17 * 0x18,
                 ((((long)puVar32 - uVar17) * 0x18 - 0x18) / 0x18) * 0x18 + 0x18);
        }
      }
      *(uint *)(param_6 + 1) = uVar28;
    }
    pppuVar13 = (undefined ***)(ulong)(uint)*puStack_4e0;
    if ((uint)*puStack_4e0 != 0) {
      lVar36 = 0;
      lVar37 = 0;
      pppuVar35 = (undefined ***)0x0;
      do {
        cVar5 = puStack_490[(long)pppuVar35];
        pcVar25 = *param_5;
        *(undefined8 *)(pcVar25 + lVar36) = *(undefined8 *)(puStack_e0 + (long)pppuVar35 * 8);
        (pcVar25 + lVar36)[8] = cVar5;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (*param_6 + lVar37,puStack_1c0 + lVar37);
        pppuVar35 = (undefined ***)((long)pppuVar35 + 1);
        pppuVar13 = (undefined ***)(ulong)(uint)*puStack_4e0;
        lVar37 = lVar37 + 0x18;
        lVar36 = lVar36 + 0x10;
      } while (pppuVar35 < pppuVar13);
    }
    if (*(int *)pppuStack_4e8 != 0) {
      lVar37 = 0;
      uVar17 = 0;
      pppuVar35 = (undefined ***)0x18;
      do {
        uVar20 = (ulong)(uint)((int)pppuVar13 + (int)uVar17);
        cVar5 = puStack_470[uVar17];
        pcVar25 = *param_5;
        *(undefined8 *)(pcVar25 + uVar20 * 0x10) = *(undefined8 *)(puStack_b0 + uVar17 * 8);
        (pcVar25 + uVar20 * 0x10)[8] = cVar5;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (*param_6 + uVar20 * 0x18,puStack_150 + lVar37);
        uVar17 = uVar17 + 1;
        lVar37 = lVar37 + 0x18;
        param_9 = pppuVar13;
      } while (uVar17 < *(uint *)pppuStack_4e8);
    }
  }
  pcStack_4d0 = (char *)0x0;
  uStack_4c8 = 0;
  pppuStack_4c0 = (undefined ***)0x0;
  FUN_109d31714(&ppuStack_450,&pcStack_4d0);
  param_7 = *(ulong **)(**(long **)param_1[0x1e] + 8);
  puVar32 = *(ulong **)(**(long **)param_1[0x1e] + 0x10);
  if (1 < (uint)uStack_3e8) {
    param_4 = (code *)0x109dce914;
    param_3 = (ulong *)0x80;
    _qsort(piStack_3f0,uStack_3e8 & 0xffffffff,0x80);
  }
  puStack_4e0 = puVar32;
  if ((uint)uStack_3e8 != 0) {
    puStack_4d8 = (ulong *)((ulong)puStack_4d8 & 0xffffffff00000000);
    pppuVar35 = (undefined ***)&UNK_10f5fb706;
    param_9 = (undefined ***)&UNK_10e05a4b0;
    piVar27 = piStack_3f0;
    do {
      if ((*(byte *)(piVar27 + 5) & 1) != 0) goto LAB_109dbb9a4;
      iVar26 = *piVar27;
      lVar37 = *(long *)(piVar27 + 2);
      uVar28 = (int)lVar37 - (int)param_7;
      puVar32 = (ulong *)(ulong)uVar28;
      if (uVar28 != 0) {
        FUN_109d2f728(&ppuStack_450,param_7,puVar32);
      }
      param_3 = (ulong *)0x5;
      switch(iVar26) {
      case 0:
        if ((ulong)((long)puStack_438 - (long)puStack_430) < 6) {
          puVar32 = (ulong *)0x6;
          FUN_109e0560c(&ppuStack_450,&UNK_10f5fb75d,6);
        }
        else {
          *(undefined2 *)(puStack_430 + 1) = 0x6e67;
          *puStack_430 = 0x696c612e;
          puStack_430 = (undefined4 *)((long)puStack_430 + 6);
          puVar32 = param_3;
        }
        plVar29 = param_1;
        (**(code **)(*param_1 + 0x30))();
        if ((*(byte *)(plVar29[0x12] + 0x153) & 1) != 0) break;
        uVar17 = *(ulong *)(piVar27 + 6);
        if (puStack_430 < puStack_438) {
          *(undefined1 *)puStack_430 = 0x20;
          puStack_430 = (undefined4 *)((long)puStack_430 + 1);
        }
        else {
          FUN_109e05570(&ppuStack_450,0x20);
        }
        param_3 = (ulong *)0x0;
        param_4 = (code *)0x0;
        ppcVar14 = (char **)0x0;
        FUN_109df9d4c(&ppuStack_450,uVar17 & 0xffffffff,0);
        uVar28 = (uint)uVar17;
        lVar23 = 3;
        if (6 < uVar28) {
          lVar23 = 4;
        }
        lVar36 = 2;
        if (3 < uVar28) {
          lVar36 = lVar23;
        }
        goto code_r0x000109dbb998;
      case 1:
        param_3 = (ulong *)0x5;
      case 2:
        goto code_r0x000109dbb990;
      case 3:
        if ((ulong)((long)puStack_438 - (long)puStack_430) < 2) {
          FUN_109e0560c(&ppuStack_450,&UNK_10f5fd4d9,2);
        }
        else {
          *(undefined2 *)puStack_430 = 0x7b24;
          puStack_430 = (undefined4 *)((long)puStack_430 + 2);
        }
        puVar32 = (ulong *)0x0;
        param_4 = (code *)0x0;
        ppcVar14 = (char **)0x0;
        FUN_109df9d4c(&ppuStack_450,iStack_4ec,0);
        iStack_4ec = iStack_4ec + 1;
        if (2 < (ulong)((long)puStack_438 - (long)puStack_430)) {
code_r0x000109dbb6a4:
          *(undefined1 *)((long)puStack_430 + 2) = 0x7d;
          *(undefined2 *)puStack_430 = 0x503a;
          puStack_430 = (undefined4 *)((long)puStack_430 + 3);
code_r0x000109dbbb38:
          param_3 = puVar32;
          lVar36 = 0;
          goto code_r0x000109dbb998;
        }
        puVar32 = (ulong *)0x3;
        FUN_109e0560c(&ppuStack_450,&UNK_10f5fd4dc,3);
        break;
      case 4:
        if ((char)piVar27[0x1e] != '\x01') {
          if (puStack_430 < puStack_438) {
            *(undefined1 *)puStack_430 = 0x24;
            puStack_430 = (undefined4 *)((long)puStack_430 + 1);
          }
          else {
            FUN_109e05570(&ppuStack_450,0x24,5);
          }
          param_3 = (ulong *)0x0;
          param_4 = (code *)0x0;
          ppcVar14 = (char **)0x0;
          FUN_109df9d4c(&ppuStack_450,iStack_4ec,0);
          iStack_4ec = iStack_4ec + 1;
          lVar36 = 0;
          goto code_r0x000109dbb998;
        }
        if ((ulong)((long)puStack_438 - (long)puStack_430) < 2) {
          FUN_109e0560c(&ppuStack_450,&UNK_10f5fd4d9,2);
        }
        else {
          *(undefined2 *)puStack_430 = 0x7b24;
          puStack_430 = (undefined4 *)((long)puStack_430 + 2);
        }
        puVar32 = (ulong *)0x0;
        param_4 = (code *)0x0;
        ppcVar14 = (char **)0x0;
        FUN_109df9d4c(&ppuStack_450,iStack_4ec,0);
        iStack_4ec = iStack_4ec + 1;
        if (2 < (ulong)((long)puStack_438 - (long)puStack_430)) goto code_r0x000109dbb6a4;
        puVar32 = (ulong *)0x3;
        FUN_109e0560c(&ppuStack_450,&UNK_10f5fd4dc,3);
        break;
      case 5:
        if ((char)piVar27[0x1e] != '\x01') {
          if (puStack_430 < puStack_438) {
            *(undefined1 *)puStack_430 = 0x24;
            puStack_430 = (undefined4 *)((long)puStack_430 + 1);
          }
          else {
            FUN_109e05570(&ppuStack_450,0x24,5);
          }
          param_3 = (ulong *)0x0;
          param_4 = (code *)0x0;
          ppcVar14 = (char **)0x0;
          FUN_109df9d4c(&ppuStack_450,(ulong)puStack_4d8 & 0xffffffff,0);
          puStack_4d8 = (ulong *)CONCAT44(puStack_4d8._4_4_,(int)puStack_4d8 + 1);
          lVar36 = 0;
          goto code_r0x000109dbb998;
        }
        if ((ulong)((long)puStack_438 - (long)puStack_430) < 2) {
          FUN_109e0560c(&ppuStack_450,&UNK_10f5fd4d9,2);
        }
        else {
          *(undefined2 *)puStack_430 = 0x7b24;
          puStack_430 = (undefined4 *)((long)puStack_430 + 2);
        }
        puVar32 = (ulong *)0x0;
        param_4 = (code *)0x0;
        ppcVar14 = (char **)0x0;
        FUN_109df9d4c(&ppuStack_450,(ulong)puStack_4d8 & 0xffffffff,0);
        puStack_4d8 = (ulong *)CONCAT44(puStack_4d8._4_4_,(int)puStack_4d8 + 1);
        if (2 < (ulong)((long)puStack_438 - (long)puStack_430)) goto code_r0x000109dbb6a4;
        puVar32 = (ulong *)0x3;
        FUN_109e0560c(&ppuStack_450,&UNK_10f5fd4dc,3);
        break;
      case 6:
        lVar36 = 0;
        lVar23 = *(long *)(piVar27 + 6);
        if (0x3f < lVar23) {
          if (lVar23 < 0x80) {
            if ((lVar23 == 0x40) || (lVar23 == 0x50)) goto code_r0x000109dbb964;
          }
          else if ((lVar23 == 0x80) || (lVar23 == 0x100)) {
            param_3 = (ulong *)0xc;
            goto code_r0x000109dbb990;
          }
          goto code_r0x000109dbb998;
        }
        if ((lVar23 == 8) || (lVar23 == 0x10)) {
          param_3 = (ulong *)0x9;
        }
        else {
          if (lVar23 != 0x20) goto code_r0x000109dbb998;
code_r0x000109dbb964:
          param_3 = (ulong *)0xa;
        }
        goto code_r0x000109dbb990;
      case 7:
        FUN_109d2f728(&ppuStack_450,*(undefined8 *)(*(long *)(param_1[0x1b] + 0x90) + 0x68),
                      *(undefined8 *)(*(long *)(param_1[0x1b] + 0x90) + 0x70));
        param_3 = *(ulong **)(piVar27 + 10);
        goto code_r0x000109dbb990;
      case 8:
        param_3 = (ulong *)0x2;
code_r0x000109dbb990:
        puVar32 = param_3;
        FUN_109d2f728();
        break;
      case 9:
        param_7 = (ulong *)(lVar37 + (ulong)(uint)piVar27[4]);
        goto LAB_109dbb9a4;
      case 10:
        if ((char)piVar27[0xc] == '\x01') {
          if (puStack_438 == puStack_430) {
            FUN_109e0560c(&ppuStack_450,&DAT_10f62a9e8,1);
          }
          else {
            *(undefined1 *)puStack_430 = 0x5b;
            puStack_430 = (undefined4 *)((long)puStack_430 + 1);
          }
        }
        puVar32 = *(ulong **)(piVar27 + 0x12);
        if (puVar32 != (ulong *)0x0) {
          FUN_109d2f728(&ppuStack_450,*(undefined8 *)(piVar27 + 0x10));
        }
        if (*(long *)(piVar27 + 0x16) != 0) {
          uVar31 = 0;
          if (*(long *)(piVar27 + 0x12) != 0) {
            uVar31 = 3;
          }
          pcVar25 = "";
          if (*(long *)(piVar27 + 0x12) != 0) {
            pcVar25 = " + ";
          }
          FUN_109d2f728(&ppuStack_450,pcVar25,uVar31);
          puVar32 = *(ulong **)(piVar27 + 0x16);
          FUN_109d2f728();
        }
        if (1 < (uint)piVar27[0x1c]) {
          if ((ulong)((long)puStack_438 - (long)puStack_430) < 5) {
            FUN_109e0560c(&ppuStack_450,&UNK_10f5fd4cb,5);
          }
          else {
            *(undefined1 *)(puStack_430 + 1) = 0x24;
            *puStack_430 = 0x24202a20;
            puStack_430 = (undefined4 *)((long)puStack_430 + 5);
          }
          puVar32 = (ulong *)0x0;
          param_4 = (code *)0x0;
          ppcVar14 = (char **)0x0;
          FUN_109df9d4c(&ppuStack_450,piVar27[0x1c],0);
        }
        if (*(ulong **)(piVar27 + 0x1a) != (ulong *)0x0) {
          if ((*(long *)(piVar27 + 0x12) != 0) ||
             (puVar32 = *(ulong **)(piVar27 + 0x1a), *(long *)(piVar27 + 0x16) != 0)) {
            if ((ulong)((long)puStack_438 - (long)puStack_430) < 3) {
              FUN_109e0560c(&ppuStack_450,&UNK_10f5aeb6c,3);
            }
            else {
              *(undefined1 *)((long)puStack_430 + 2) = 0x20;
              *(undefined2 *)puStack_430 = 0x2b20;
              puStack_430 = (undefined4 *)((long)puStack_430 + 3);
            }
            puVar32 = *(ulong **)(piVar27 + 0x1a);
          }
          lVar36 = *(long *)(piVar27 + 0x18);
          for (piVar6 = piVar27;
              (piVar6 != piStack_3f0 + (uStack_3e8 & 0xffffffff) * 0x20 &&
              (((*(long *)(piVar6 + 2) != lVar36 || (puVar32 != (ulong *)(ulong)(uint)piVar6[4])) ||
               (1 < *piVar6 - 3U)))); piVar6 = piVar6 + 0x20) {
          }
          if (piVar6 == piStack_3f0 + (uStack_3e8 & 0xffffffff) * 0x20) {
            if ((ulong)((long)puStack_438 - (long)puStack_430) < 7) {
              FUN_109e0560c(&ppuStack_450,&UNK_10f5fd4d1,7);
            }
            else {
              *(undefined4 *)((long)puStack_430 + 3) = 0x20746573;
              *puStack_430 = 0x7366666f;
              puStack_430 = (undefined4 *)((long)puStack_430 + 7);
            }
            FUN_109d2f728(&ppuStack_450,lVar36,puVar32);
          }
          else {
            if (*piVar6 == 3) {
              if ((ulong)((long)puStack_438 - (long)puStack_430) < 2) {
                FUN_109e0560c(&ppuStack_450,&UNK_10f5fd4d9,2);
              }
              else {
                *(undefined2 *)puStack_430 = 0x7b24;
                puStack_430 = (undefined4 *)((long)puStack_430 + 2);
              }
              puVar32 = (ulong *)0x0;
              param_4 = (code *)0x0;
              ppcVar14 = (char **)0x0;
              FUN_109df9d4c(&ppuStack_450,iStack_4ec,0);
              if ((ulong)((long)puStack_438 - (long)puStack_430) < 3) {
                puVar32 = (ulong *)0x3;
                FUN_109e0560c(&ppuStack_450,&UNK_10f5fd4dc,3);
              }
              else {
                *(undefined1 *)((long)puStack_430 + 2) = 0x7d;
                *(undefined2 *)puStack_430 = 0x503a;
                puStack_430 = (undefined4 *)((long)puStack_430 + 3);
              }
            }
            else {
              if (puStack_430 < puStack_438) {
                *(undefined1 *)puStack_430 = 0x24;
                puStack_430 = (undefined4 *)((long)puStack_430 + 1);
              }
              else {
                FUN_109e05570(&ppuStack_450,0x24);
              }
              puVar32 = (ulong *)0x0;
              param_4 = (code *)0x0;
              ppcVar14 = (char **)0x0;
              FUN_109df9d4c(&ppuStack_450,iStack_4ec,0);
            }
            iStack_4ec = iStack_4ec + 1;
            *(undefined1 *)(piVar6 + 5) = 1;
          }
        }
        if (*(long *)(piVar27 + 0xe) == 0) {
          if (((*(long *)(piVar27 + 0x12) == 0) && (*(long *)(piVar27 + 0x16) == 0)) &&
             (*(long *)(piVar27 + 0x1a) == 0)) {
            puVar30 = &UNK_10f5fd4e0;
            goto code_r0x000109dbbacc;
          }
        }
        else {
          if ((*(long *)(piVar27 + 0x12) == 0) && (*(long *)(piVar27 + 0x16) == 0)) {
            puVar30 = &UNK_10f5fd4e0;
            if (*(long *)(piVar27 + 0x1a) != 0) {
              puVar30 = &UNK_10f5fd4e3;
            }
          }
          else {
            puVar30 = &UNK_10f5fd4e3;
          }
code_r0x000109dbbacc:
          puVar11 = puVar30;
          _strlen(puVar30);
          FUN_109d2f728(&ppuStack_450,puVar30,puVar11);
          puVar32 = (ulong *)0x0;
          param_4 = (code *)0x0;
          FUN_109df9ee0();
        }
        if ((char)piVar27[0xc] == '\x01') {
          if (puStack_438 != puStack_430) {
            *(undefined1 *)puStack_430 = 0x5d;
            puStack_430 = (undefined4 *)((long)puStack_430 + 1);
            goto code_r0x000109dbbb38;
          }
          puVar32 = (ulong *)0x1;
          FUN_109e0560c(&ppuStack_450,&DAT_10f62a9ea,1);
        }
      }
      param_3 = puVar32;
      lVar36 = 0;
code_r0x000109dbb998:
      param_7 = (ulong *)(lVar37 + (ulong)(uint)piVar27[4] + lVar36);
LAB_109dbb9a4:
      piVar27 = piVar27 + 0x20;
    } while (piVar27 != piStack_3f0 + (uStack_3e8 & 0xffffffff) * 0x20);
  }
  if (param_7 != puStack_4e0) {
    param_3 = (ulong *)((long)puStack_4e0 - (long)param_7);
    FUN_109d2f728(&ppuStack_450,param_7,param_3);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(uStack_550,pppuStack_410)
  ;
  ppuStack_450 = &PTR_DAT_110b5c4a0;
  pppuVar13 = pppuStack_410;
  if ((iStack_418 == 1) && (puStack_440 != (undefined *)0x0)) {
    __ZdaPv();
    pppuVar13 = pppuStack_410;
  }
  if ((long)pppuStack_4c0 < 0) {
    __ZdlPv(pcStack_4d0);
  }
LAB_109dbbbd8:
  if (piStack_3f0 != piStack_520) {
    _free();
  }
  if (piStack_1e0 != piStack_518) {
    _free();
  }
  FUN_109dceacc(&puStack_1c0);
  FUN_109dceacc(&puStack_150);
  if (puStack_490 != puStack_540) {
    _free();
  }
  if (puStack_470 != puStack_538) {
    _free();
  }
  if (puStack_e0 != puStack_530) {
    _free();
  }
  if (puStack_b0 != puStack_528) {
    _free();
  }
  uVar17 = (ulong)(iVar2 != 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    FUN_109dce7e0(&ppuStack_450);
    if (piStack_3f0 != piStack_520) {
      _free();
    }
    if (piStack_1e0 != piStack_518) {
      _free();
    }
    FUN_109dceacc(&puStack_1c0);
    FUN_109dceacc(&puStack_150);
    if (puStack_490 != puStack_540) {
      _free();
    }
    if (puStack_470 != puStack_538) {
      _free();
    }
    if (puStack_e0 != puStack_530) {
      _free();
    }
    if (puStack_b0 != puStack_528) {
      _free();
    }
    uVar20 = uVar17;
    __Unwind_Resume();
    pcStack_588 = FUN_109dbbf04;
    uVar12 = uVar20;
    pppuStack_5c0 = param_9;
    pppuStack_5b8 = pppuVar35;
    ppuStack_5b0 = unaff_x22;
    plStack_5a8 = param_1;
    uStack_5a0 = uVar17;
    puStack_598 = param_7;
    puStack_590 = &stack0xfffffffffffffff0;
    FUN_109dce280();
    uVar31 = *(undefined8 *)(uVar20 + 0xf0);
    pppuStack_5d0 = (undefined ***)param_4;
    ppcStack_5c8 = ppcVar14;
    func_0x000107c2b034();
    FUN_109e01664(uVar31,uVar12,pppuVar13,3,param_3,&pppuStack_5d0,1);
    FUN_109dceb48(uVar20);
    return;
  }
  return;
}



/* Entry: 109dbbf04; end: 109dbbf8b;  */

void FUN_109dbbf04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1;
  FUN_109dce280();
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  uStack_50 = param_4;
  uStack_48 = param_5;
  func_0x000107c2b034();
  FUN_109e01664(uVar2,lVar1,param_2,3,param_3,&uStack_50,1,param_8,0,0,1);
  FUN_109dceb48(param_1);
  return;
}



/* Entry: 109dbbf8c; end: 109dbc11b;  */

void FUN_109dbbf8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  undefined1 **ppuVar2;
  undefined8 uVar3;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 **ppuStack_e8;
  char cStack_d1;
  undefined1 **ppuStack_d0;
  char cStack_b9;
  undefined1 **ppuStack_b8;
  char cStack_a1;
  undefined1 **ppuStack_a0;
  char cStack_89;
  undefined1 auStack_70 [24];
  undefined1 *puStack_58;
  
  FUN_109dcebec(&uStack_f8,*(long *)(param_1 + 8) + 0x48);
  uVar1 = (ushort)uStack_f8;
  puStack_58 = auStack_70;
  func_0x000104c607c8(&puStack_58);
  if (cStack_89 < '\0') {
    __ZdlPv(ppuStack_a0);
  }
  if (cStack_a1 < '\0') {
    __ZdlPv(ppuStack_b8);
  }
  if (cStack_b9 < '\0') {
    __ZdlPv(ppuStack_d0);
  }
  if (cStack_d1 < '\0') {
    __ZdlPv(ppuStack_e8);
  }
  if ((uVar1 >> 3 & 1) == 0) {
    FUN_109dcebec(&uStack_f8,*(long *)(param_1 + 8) + 0x48);
    puStack_58 = auStack_70;
    ppuVar2 = &puStack_58;
    func_0x000104c607c8(ppuVar2);
    if (cStack_89 < '\0') {
      __ZdlPv(ppuStack_a0);
      ppuVar2 = ppuStack_a0;
    }
    if (cStack_a1 < '\0') {
      __ZdlPv(ppuStack_b8);
      ppuVar2 = ppuStack_b8;
    }
    if (cStack_b9 < '\0') {
      __ZdlPv(ppuStack_d0);
      ppuVar2 = ppuStack_d0;
    }
    if (cStack_d1 < '\0') {
      __ZdlPv(ppuStack_e8);
      ppuVar2 = ppuStack_e8;
    }
    if (((ushort)uStack_f8 >> 2 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0xf0);
      uStack_f8 = param_4;
      uStack_f0 = param_5;
      func_0x000107c2b034();
      FUN_109e01664(uVar3,ppuVar2,param_2,1,param_3,&uStack_f8,1,param_8,0,0,1);
      FUN_109dceb48(param_1);
    }
    else {
      FUN_109dd98f8(param_1,param_2,param_3,param_4,param_5);
    }
  }
  return;
}



/* Entry: 109dbc11c; end: 109dbc19f;  */

undefined8
FUN_109dbc11c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  *(undefined1 *)(param_1 + 0x20) = 1;
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  lVar1 = param_1;
  uStack_50 = param_4;
  uStack_48 = param_5;
  func_0x000107c2b034();
  FUN_109e01664(uVar2,lVar1,param_2,0,param_3,&uStack_50,1,param_8,0,0,1);
  FUN_109dceb48(param_1);
  return 1;
}



/* Entry: 109dbc1a0; end: 109dbc363;  */

void FUN_109dbc1a0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plStack_48;
  long lStack_40;
  undefined2 uStack_28;
  
  if (*(int *)param_1[6] == 1) {
    plStack_48 = param_1 + 0xe;
    uStack_28 = 0x104;
    FUN_109dd98f8(param_1,param_1[0xd],&plStack_48,0,0);
  }
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if ((((*(int *)plVar1[1] == 9) &&
       (plVar1 = param_1, (**(code **)(*param_1 + 0x28))(), *(long *)(plVar1[1] + 0x10) != 0)) &&
      (plVar1 = param_1, (**(code **)(*param_1 + 0x28))(), **(char **)(plVar1[1] + 8) != '\n')) &&
     ((plVar1 = param_1, (**(code **)(*param_1 + 0x28))(), **(char **)(plVar1[1] + 8) != '\r' &&
      (*(char *)(param_1[0x1d] + 0x1e2) == '\x01')))) {
    plVar3 = (long *)param_1[0x1c];
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x28))();
    plStack_48 = *(long **)(plVar1[1] + 8);
    lStack_40 = *(long *)(plVar1[1] + 0x10);
    uStack_28 = 0x105;
    (**(code **)(*plVar3 + 0x88))(plVar3,&plStack_48);
  }
  plVar1 = param_1 + 5;
  FUN_109dc0bd8();
  while ((int)*plVar1 == 7) {
    if (*(char *)(param_1[0x1d] + 0x1e2) == '\x01') {
      plStack_48 = (long *)plVar1[1];
      lStack_40 = plVar1[2];
      uStack_28 = 0x105;
      (**(code **)(*(long *)param_1[0x1c] + 0x88))((long *)param_1[0x1c],&plStack_48);
    }
    plVar1 = param_1 + 5;
    FUN_109dc0bd8();
  }
  if ((int)*plVar1 == 0) {
    lVar2 = *(long *)(*(long *)param_1[0x1e] + (ulong)((int)param_1[0x23] - 1) * 0x18 + 0x10);
    if (lVar2 != 0) {
      FUN_109dcacec(param_1,lVar2,0);
      (**(code **)(*param_1 + 0xb8))(param_1);
    }
  }
  return;
}



/* Entry: 109dbc364; end: 109dbc533;  */

undefined1  [16] FUN_109dbc364(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int aiStack_60 [2];
  long lStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  uint uStack_40;
  long lStack_38;
  
  plVar5 = (long *)aiStack_60;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar3 = *(int *)param_1[6];
  if (iVar3 - 2U < 2) {
    plVar4 = param_1;
    plVar5 = param_2;
    (**(code **)(*param_1 + 0x28))();
    piVar7 = (int *)plVar4[1];
    if (*piVar7 == 2) {
      lVar10 = *(long *)(piVar7 + 2);
      lVar6 = *(long *)(piVar7 + 4);
    }
    else {
      lVar10 = *(long *)(piVar7 + 2);
      lVar6 = *(long *)(piVar7 + 4);
      uVar8 = (ulong)(lVar6 != 0);
      if (lVar6 != 0) {
        lVar10 = lVar10 + 1;
      }
      uVar1 = uVar8;
      if (uVar8 <= lVar6 - 1U) {
        uVar1 = lVar6 - 1U;
      }
      uVar2 = 0;
      if (lVar6 != 0) {
        uVar2 = uVar1;
      }
      lVar6 = uVar2 - uVar8;
    }
    *param_2 = lVar10;
    param_2[1] = lVar6;
    (**(code **)(*param_1 + 0xb8))();
    uVar9 = 0;
  }
  else if (iVar3 == 0x2d || iVar3 == 0x1a) {
    plVar4 = param_1;
    (**(code **)(*param_1 + 0x28))();
    lVar10 = plVar4[0xc];
    lStack_58 = 0;
    uStack_50 = 0;
    uStack_40 = 1;
    plStack_48 = (long *)0x0;
    plVar4 = param_1 + 5;
    FUN_109db6de4(plVar4,aiStack_60,1,0);
    if (((aiStack_60[0] == 2) || (aiStack_60[0] == 4)) && (lVar10 + 1 == lStack_58)) {
      FUN_109dc0bd8(param_1 + 5);
      plVar4 = param_1;
      (**(code **)(*param_1 + 0x28))();
      lVar6 = *(long *)(plVar4[1] + 0x10);
      *param_2 = lVar10;
      param_2[1] = lVar6 + 1;
      (**(code **)(*param_1 + 0xb8))();
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
      param_1 = plVar4;
    }
    if ((0x40 < uStack_40) && (param_1 = plStack_48, plStack_48 != (long *)0x0)) {
      __ZdaPv();
    }
  }
  else {
    uVar9 = 1;
    plVar5 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar11._8_8_ = plVar5;
    auVar11._0_8_ = uVar9;
    return auVar11;
  }
  ___stack_chk_fail();
  if ((0x40 < uStack_40) && (plStack_48 != (long *)0x0)) {
    __ZdaPv();
  }
  __Unwind_Resume();
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x28))();
  lVar10 = *(long *)(plVar5[1] + 8);
  while (*(int *)param_1[6] != 0 && *(int *)param_1[6] != 9) {
    FUN_109dc0bd8(param_1 + 5);
  }
  (**(code **)(*param_1 + 0x28))();
  auVar12._8_8_ = *(long *)(param_1[1] + 8) - lVar10;
  auVar12._0_8_ = lVar10;
  return auVar12;
}



/* Entry: 109dbc534; end: 109dbc5af;  */

undefined1  [16] FUN_109dbc534(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x28))();
  lVar2 = *(long *)(plVar1[1] + 8);
  while (*(int *)param_1[6] != 0 && *(int *)param_1[6] != 9) {
    FUN_109dc0bd8(param_1 + 5);
  }
  (**(code **)(*param_1 + 0x28))();
  auVar3._8_8_ = *(long *)(param_1[1] + 8) - lVar2;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 109dbc5b0; end: 109dbc88b;  */

undefined8 FUN_109dbc5b0(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  byte bVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  undefined *apuStack_78 [4];
  undefined2 uStack_58;
  
  plVar6 = param_1;
  (**(code **)(*param_1 + 0x28))();
  iVar4 = *(int *)plVar6[1];
  apuStack_78[0] = &UNK_10f5aef1d;
  uStack_58 = 0x103;
  plVar6 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (iVar4 == 3) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      param_2[1] = 0;
      puVar10 = (undefined8 *)*param_2;
    }
    else {
      *(undefined1 *)((long)param_2 + 0x17) = 0;
      puVar10 = param_2;
    }
    *(undefined1 *)puVar10 = 0;
    plVar6 = param_1;
    (**(code **)(*param_1 + 0x28))();
    lVar8 = *(long *)(plVar6[1] + 8);
    lVar3 = *(long *)(plVar6[1] + 0x10);
    uVar12 = (ulong)(lVar3 != 0);
    if (lVar3 != 0) {
      lVar8 = lVar8 + 1;
    }
    uVar2 = uVar12;
    if (uVar12 <= lVar3 - 1U) {
      uVar2 = lVar3 - 1U;
    }
    uVar14 = 0;
    if (lVar3 != 0) {
      uVar14 = uVar2;
    }
    uVar14 = uVar14 - uVar12;
    uVar13 = (uint)uVar14;
    if (uVar13 != 0) {
      uVar12 = 0;
      do {
        uVar11 = (uint)uVar12;
        uVar9 = (uint)*(byte *)(lVar8 + uVar12);
        uVar15 = uVar11;
        if (*(byte *)(lVar8 + uVar12) == 0x5c) {
          uVar15 = uVar11 + 1;
          if (uVar15 == uVar13) {
            apuStack_78[0] = &UNK_10f5fd55b;
LAB_109dbc820:
            uStack_58 = 0x103;
            plVar6 = param_1;
            (**(code **)(*param_1 + 0x28))();
            lVar8 = plVar6[0xc];
            goto LAB_109dbc840;
          }
          bVar5 = *(byte *)(lVar8 + (ulong)uVar15);
          uVar9 = (uint)bVar5;
          if ((bVar5 | 0x20) == 0x78) {
            uVar12 = (ulong)(uVar11 + 2);
            if ((uVar14 <= uVar12) ||
               (uVar11 = (uint)*(ushort *)(&UNK_10e0431c0 + (ulong)*(byte *)(lVar8 + uVar12) * 2),
               *(ushort *)(&UNK_10e0431c0 + (ulong)*(byte *)(lVar8 + uVar12) * 2) == 0xffff)) {
              apuStack_78[0] = &UNK_10f5fd581;
              goto LAB_109dbc820;
            }
            uVar9 = 0;
            do {
              uVar15 = (uint)uVar12;
              uVar9 = uVar11 + uVar9 * 0x10;
              uVar12 = (ulong)(uVar15 + 1);
              if (uVar14 <= uVar12) break;
              uVar11 = (uint)*(ushort *)(&UNK_10e0431c0 + (ulong)*(byte *)(lVar8 + uVar12) * 2);
            } while (uVar11 != 0xffff);
          }
          else if ((bVar5 & 0xf8) == 0x30) {
            uVar9 = bVar5 - 0x30;
            uVar1 = uVar11 + 2;
            if ((uVar1 != uVar13) && ((*(byte *)(lVar8 + (ulong)uVar1) & 0xf8) == 0x30)) {
              uVar9 = ((uint)*(byte *)(lVar8 + (ulong)uVar1) + uVar9 * 8) - 0x30;
              uVar11 = uVar11 + 3;
              uVar15 = uVar1;
              if ((uVar11 != uVar13) &&
                 (((*(byte *)(lVar8 + (ulong)uVar11) & 0xf8) == 0x30 &&
                  (uVar9 = ((uint)*(byte *)(lVar8 + (ulong)uVar11) + uVar9 * 8) - 0x30,
                  uVar15 = uVar11, 0xff < uVar9)))) {
                apuStack_78[0] = &UNK_10f5fd5a5;
                goto LAB_109dbc820;
              }
            }
          }
          else if (bVar5 < 0x66) {
            if ((bVar5 != 0x22) && (bVar5 != 0x5c)) {
              if (bVar5 != 0x62) goto LAB_109dbc874;
              uVar9 = 8;
            }
          }
          else if (bVar5 < 0x72) {
            if (bVar5 == 0x66) {
              uVar9 = 0xc;
            }
            else {
              if (bVar5 != 0x6e) {
LAB_109dbc874:
                apuStack_78[0] = &UNK_10f5fd5d2;
                goto LAB_109dbc820;
              }
              uVar9 = 10;
            }
          }
          else if (bVar5 == 0x72) {
            uVar9 = 0xd;
          }
          else {
            if (bVar5 != 0x74) goto LAB_109dbc874;
            uVar9 = 9;
          }
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_2,(int)(char)uVar9);
        uVar12 = (ulong)(uVar15 + 1);
      } while (uVar15 + 1 != uVar13);
    }
    (**(code **)(*param_1 + 0xb8))(param_1);
    uVar7 = 0;
  }
  else {
    lVar8 = *(long *)(plVar6[1] + 8);
LAB_109dbc840:
    FUN_109dd98f8(param_1,lVar8,apuStack_78,0,0);
    uVar7 = 1;
  }
  return uVar7;
}



/* Entry: 109dbc88c; end: 109dbc97b;  */

bool FUN_109dbc88c(long *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  long *plVar3;
  byte *pbVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x28))();
  pbVar4 = *(byte **)(plVar3[1] + 8);
  do {
    bVar2 = *pbVar4;
    if (bVar2 < 0x3f) {
      if ((ulong)bVar2 == 0x21) {
        pbVar4 = pbVar4 + 1;
      }
      else if ((1L << ((ulong)bVar2 & 0x3f) & 0x4000000000002401U) != 0) {
        if (bVar2 == 0x3e) {
          pbVar1 = *(byte **)(plVar3[1] + 8) + 1;
          FUN_109dcacec(param_1,pbVar4 + 1,(int)param_1[0x23]);
          (**(code **)(*param_1 + 0xb8))(param_1);
          FUN_109dcb6b8(&uStack_58,pbVar1,(long)pbVar4 - (long)pbVar1);
          if (*(char *)((long)param_2 + 0x17) < '\0') {
            __ZdlPv(*param_2);
          }
          param_2[1] = uStack_50;
          *param_2 = uStack_58;
          param_2[2] = uStack_48;
        }
        return bVar2 != 0x3e;
      }
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}



/* Entry: 109dbc97c; end: 109dbc9c7;  */

long FUN_109dbc97c(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_48 [24];
  long lStack_30;
  uint uStack_28;
  
  lVar1 = param_1;
  while( true ) {
    if (**(int **)(param_1 + 0x30) == 0) {
      return lVar1;
    }
    if (**(int **)(param_1 + 0x30) == 9) break;
    lVar1 = param_1 + 0x28;
    FUN_109dc0bd8(lVar1);
  }
  plVar2 = (long *)(param_1 + 0x30);
  *(bool *)(param_1 + 0x93) = *(int *)*plVar2 == 9;
  FUN_109dc9a3c(plVar2);
  if (*(int *)(param_1 + 0x38) == 0) {
    (*(code *)**(undefined8 **)(param_1 + 0x28))(auStack_48,(undefined8 *)(param_1 + 0x28));
    FUN_109db8164(plVar2,*(undefined8 *)(param_1 + 0x30),auStack_48);
    if ((0x40 < uStack_28) && (lStack_30 != 0)) {
      __ZdaPv();
    }
  }
  return *plVar2;
}



/* Entry: 109dbc9c8; end: 109dbcc7f;  */

undefined8 FUN_109dbc9c8(long *param_1,ulong *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *apuStack_a8 [4];
  undefined2 uStack_88;
  undefined *apuStack_80 [2];
  long lStack_70;
  long lStack_68;
  undefined2 uStack_60;
  undefined **appuStack_58 [2];
  undefined *puStack_48;
  undefined2 uStack_38;
  
  *param_2 = 0;
  plVar3 = (long *)param_1[1];
  (**(code **)(*plVar3 + 0x18))();
  uVar8 = 1;
  if (((ulong)plVar3 & 1) != 0) {
    return 1;
  }
  plVar3 = param_1;
  FUN_109dced54(param_1,1,param_2,param_3);
  if (((ulong)plVar3 & 1) != 0) {
    return 1;
  }
  if (*(int *)param_1[6] == 0x2d) {
    (**(code **)(*param_1 + 0xb8))(param_1);
    if (*(int *)param_1[6] == 2) {
      plVar3 = param_1;
      (**(code **)(*param_1 + 0x28))();
      piVar6 = (int *)plVar3[1];
      if (*piVar6 == 2) {
        lVar4 = *(long *)(piVar6 + 2);
        lVar5 = *(long *)(piVar6 + 4);
      }
      else {
        lVar4 = *(long *)(piVar6 + 2);
        lVar5 = *(long *)(piVar6 + 4);
        uVar7 = (ulong)(lVar5 != 0);
        if (lVar5 != 0) {
          lVar4 = lVar4 + 1;
        }
        uVar1 = uVar7;
        if (uVar7 <= lVar5 - 1U) {
          uVar1 = lVar5 - 1U;
        }
        uVar2 = 0;
        if (lVar5 != 0) {
          uVar2 = uVar1;
        }
        lVar5 = uVar2 - uVar7;
      }
      FUN_109dae95c(lVar4,lVar5);
      if ((int)lVar4 == 1) {
        plVar3 = param_1;
        (**(code **)(*param_1 + 0x28))();
        piVar6 = (int *)plVar3[1];
        if (*piVar6 == 2) {
          lStack_70 = *(long *)(piVar6 + 2);
          lStack_68 = *(long *)(piVar6 + 4);
        }
        else {
          lStack_70 = *(long *)(piVar6 + 2);
          lVar4 = *(long *)(piVar6 + 4);
          uVar7 = (ulong)(lVar4 != 0);
          if (lVar4 != 0) {
            lStack_70 = lStack_70 + 1;
          }
          uVar1 = uVar7;
          if (uVar7 <= lVar4 - 1U) {
            uVar1 = lVar4 - 1U;
          }
          uVar2 = 0;
          if (lVar4 != 0) {
            uVar2 = uVar1;
          }
          lStack_68 = uVar2 - uVar7;
        }
        uStack_60 = 0x503;
        apuStack_80[0] = &UNK_10f5fd62c;
        appuStack_58[0] = apuStack_80;
        puStack_48 = &DAT_10f638984;
        uStack_38 = 0x302;
      }
      else {
        plVar3 = param_1;
        FUN_109dcee98(param_1,*param_2,lVar4);
        if (plVar3 != (long *)0x0) {
          *param_2 = (ulong)plVar3;
          (**(code **)(*param_1 + 0xb8))(param_1);
          goto LAB_109dbcb08;
        }
        plVar3 = param_1;
        (**(code **)(*param_1 + 0x28))();
        piVar6 = (int *)plVar3[1];
        if (*piVar6 == 2) {
          lStack_70 = *(long *)(piVar6 + 2);
          lStack_68 = *(long *)(piVar6 + 4);
        }
        else {
          lStack_70 = *(long *)(piVar6 + 2);
          lVar4 = *(long *)(piVar6 + 4);
          uVar7 = (ulong)(lVar4 != 0);
          if (lVar4 != 0) {
            lStack_70 = lStack_70 + 1;
          }
          uVar1 = uVar7;
          if (uVar7 <= lVar4 - 1U) {
            uVar1 = lVar4 - 1U;
          }
          uVar2 = 0;
          if (lVar4 != 0) {
            uVar2 = uVar1;
          }
          lStack_68 = uVar2 - uVar7;
        }
        uStack_60 = 0x503;
        apuStack_80[0] = &UNK_10f5fd63e;
        apuStack_a8[0] = &UNK_10f5fd651;
        uStack_88 = 0x103;
        FUN_109d35b30(appuStack_58,apuStack_80,apuStack_a8);
      }
    }
    else {
      appuStack_58[0] = (undefined **)&UNK_10f5fd603;
      uStack_38 = 0x103;
    }
    plVar3 = param_1;
    (**(code **)(*param_1 + 0x28))();
    FUN_109dd98f8(param_1,plVar3[0xc],appuStack_58,0,0);
  }
  else {
LAB_109dbcb08:
    uVar7 = *param_2;
    func_0x000109daff5c(uVar7,appuStack_58,0,0,0,0);
    if ((int)uVar7 != 0) {
      (**(code **)(*param_1 + 0x30))(param_1);
      FUN_109dae888(appuStack_58[0],param_1,0,0);
      *param_2 = (ulong)appuStack_58[0];
    }
    uVar8 = 0;
  }
  return uVar8;
}



/* Entry: 109dbcc80; end: 109dbda57;  */

/* WARNING: Possible PIC construction at 0x000109dbda78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109dbda7c) */
/* WARNING: Removing unreachable block (ram,0x000109dbda94) */
/* WARNING: Removing unreachable block (ram,0x000109dced54) */
/* WARNING: Removing unreachable block (ram,0x000109dceda8) */
/* WARNING: Removing unreachable block (ram,0x000109dcedac) */
/* WARNING: Removing unreachable block (ram,0x000109dcedd8) */
/* WARNING: Removing unreachable block (ram,0x000109dcedf8) */
/* WARNING: Removing unreachable block (ram,0x000109dcee78) */
/* WARNING: Removing unreachable block (ram,0x000109dcee10) */
/* WARNING: Removing unreachable block (ram,0x000109dcee70) */
/* WARNING: Removing unreachable block (ram,0x000109dcee7c) */
/* WARNING: Removing unreachable block (ram,0x000109dbda80) */

void FUN_109dbcc80(byte ******param_1,byte ******param_2,byte ******param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte *****pppppbVar5;
  byte *****pppppbVar6;
  byte ******ppppppbVar7;
  byte ******ppppppbVar8;
  byte ******unaff_x19;
  byte ******unaff_x20;
  byte ******ppppppbVar9;
  byte ******unaff_x22;
  byte ******ppppppbVar10;
  byte ******ppppppbVar11;
  byte ******ppppppbVar12;
  uint unaff_w27;
  undefined1 **unaff_x29;
  undefined8 unaff_x30;
  byte *****pppppbStack_160;
  byte *****pppppbStack_158;
  byte *****pppppbStack_150;
  byte *****pppppbStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  byte *****pppppbStack_130;
  byte *****pppppbStack_128;
  byte *****pppppbStack_120;
  byte *****pppppbStack_118;
  undefined *apuStack_110 [4];
  undefined2 uStack_f0;
  byte *****pppppbStack_e8;
  byte *****pppppbStack_e0;
  undefined8 uStack_d8;
  byte *****pppppbStack_d0;
  undefined2 uStack_c8;
  byte *****pppppbStack_c0;
  byte *****pppppbStack_b8;
  byte *****pppppbStack_b0;
  byte *****pppppbStack_a8;
  byte *****pppppbStack_a0;
  byte *****pppppbStack_98;
  byte *****pppppbStack_90;
  byte *****pppppbStack_88;
  byte ****ppppbStack_80;
  byte ****ppppbStack_78;
  byte ****ppppbStack_70;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppbVar8 = param_1;
  ppppppbVar7 = param_2;
  ppppppbVar12 = param_3;
  (*(code *)(*param_1)[5])();
  uVar2 = *(uint *)param_1[6];
  ppppppbVar10 = (byte ******)(ulong)uVar2;
  if (0x45 < uVar2 - 1) {
LAB_109dbd4a4:
    pppppbStack_a0 = (byte *****)&UNK_10f5fc1b4;
    ppppbStack_80 = (byte ****)CONCAT62(ppppbStack_80._2_6_,0x103);
    ppppppbVar12 = param_1;
    (*(code *)(*param_1)[5])();
    ppppppbVar7 = (byte ******)ppppppbVar12[0xc];
    ppppppbVar12 = &pppppbStack_a0;
    FUN_109dd98f8(param_1,ppppppbVar7,ppppppbVar12,0,0);
    goto LAB_109dbcddc;
  }
  unaff_x22 = (byte ******)ppppppbVar8[0xc];
  ppppppbVar8 = (byte ******)0x1;
  ppppppbVar9 = param_3;
  switch(uVar2) {
  case 1:
    goto code_r0x000109dbcde0;
  case 2:
  case 3:
  case 0x17:
  case 0x1a:
  case 0x2d:
    pppppbStack_130 = (byte *****)0x0;
    pppppbStack_128 = (byte *****)0x0;
    ppppppbVar12 = param_1;
    (*(code *)(*param_1)[0x18])(param_1,&pppppbStack_130);
    if (((int)ppppppbVar12 == 0) ||
       ((ppppppbVar12 = param_1, (*(code *)(*param_1)[5])(), *(int *)ppppppbVar12[1] != 0x1a &&
        (ppppppbVar12 = param_1, (*(code *)(*param_1)[5])(), *(int *)ppppppbVar12[1] != 0x17)))) {
      pppppbStack_b0 = (byte *****)0x0;
      pppppbStack_a8 = (byte *****)0x0;
      if ((*(byte *)((long)param_1[0x1d] + 0x1b6) & 1) == 0) {
        if (uVar2 == 3) {
          if (*(int *)param_1[6] != 0x2d) goto code_r0x000109dbd054;
          (*(code *)(*param_1)[0x17])(param_1);
          ppppppbVar12 = param_1;
          (*(code *)(*param_1)[5])();
          ppppppbVar7 = (byte ******)ppppppbVar12[0xc];
          pppppbStack_e8 = (byte *****)0x0;
          pppppbStack_e0 = (byte *****)0x0;
          ppppppbVar12 = param_1;
          (*(code *)(*param_1)[0x18])(param_1,&pppppbStack_e8);
          if ((int)ppppppbVar12 == 0) goto code_r0x000109dbd510;
          pppppbStack_a0 = (byte *****)&UNK_10f5fd6b9;
          ppppbStack_80 = (byte ****)CONCAT62(ppppbStack_80._2_6_,0x103);
          ppppppbVar12 = &pppppbStack_a0;
          FUN_109dd98f8();
          ppppppbVar8 = param_1;
          goto code_r0x000109dbcde0;
        }
        pppppbStack_e8 = (byte *****)CONCAT71(pppppbStack_e8._1_7_,0x40);
        func_0x000109d39ec8(&pppppbStack_a0,&pppppbStack_130,&pppppbStack_e8,1);
        pppppbStack_a8 = pppppbStack_98;
        pppppbStack_b0 = pppppbStack_a0;
        ppppppbVar7 = (byte ******)pppppbStack_90;
        ppppppbVar12 = (byte ******)pppppbStack_88;
      }
      else if (*(int *)param_1[6] == 0x11) {
        (*(code *)(*param_1)[0x17])(param_1);
        pppppbStack_e8 = (byte *****)0x0;
        pppppbStack_e0 = (byte *****)0x0;
        (*(code *)(*param_1)[0x18])(param_1,&pppppbStack_e8);
        pppppbStack_a0 = (byte *****)&UNK_10f5aef10;
        ppppbStack_80 = (byte ****)CONCAT62(ppppbStack_80._2_6_,0x103);
        ppppppbVar12 = &pppppbStack_a0;
        ppppppbVar7 = (byte ******)0x12;
        ppppppbVar8 = param_1;
        func_0x000109dd9a7c();
        if (((ulong)ppppppbVar8 & 1) != 0) break;
code_r0x000109dbd510:
        pppppbStack_a8 = pppppbStack_128;
        pppppbStack_b0 = pppppbStack_130;
        ppppppbVar7 = (byte ******)pppppbStack_e8;
        ppppppbVar12 = (byte ******)pppppbStack_e0;
      }
      else {
code_r0x000109dbd054:
        ppppppbVar12 = (byte ******)0x0;
        ppppppbVar7 = (byte ******)0x0;
      }
      ppppppbVar8 = (byte ******)pppppbStack_128;
      *param_3 = (byte *****)((long)pppppbStack_130 + (long)pppppbStack_128);
      pppppbStack_b8 = pppppbStack_128;
      pppppbStack_c0 = pppppbStack_130;
      if ((byte ******)pppppbStack_128 == (byte ******)0x0) {
        ppppppbVar12 = param_1;
        (*(code *)(*param_1)[5])();
        ppppppbVar7 = (byte ******)ppppppbVar12[0xc];
        pppppbStack_a0 = (byte *****)&UNK_10f5fd6db;
        ppppbStack_80 = (byte ****)CONCAT62(ppppbStack_80._2_6_,0x103);
        ppppppbVar12 = &pppppbStack_a0;
        FUN_109dd98f8();
        ppppppbVar8 = param_1;
      }
      else {
        if (ppppppbVar12 == (byte ******)0x0) {
code_r0x000109dbd608:
          ppppppbVar10 = (byte ******)0x0;
        }
        else {
          ppppppbVar10 = ppppppbVar7;
          FUN_109dae95c(ppppppbVar7,ppppppbVar12);
          if ((int)ppppppbVar10 == 1) {
            if ((*(char *)((long)param_1[0x1d] + 0xb4) != '\x01') ||
               (*(char *)((long)param_1[0x1d] + 0x1b6) == '\x01')) {
              uStack_c8 = 0x503;
              pppppbStack_e8 = (byte *****)&UNK_10f5fd62c;
              apuStack_110[0] = &DAT_10f638984;
              uStack_f0 = 0x103;
              uStack_d8 = ppppppbVar7;
              pppppbStack_d0 = (byte *****)ppppppbVar12;
              FUN_109d35b30(&pppppbStack_a0,&pppppbStack_e8,apuStack_110);
              ppppppbVar12 = &pppppbStack_a0;
              FUN_109dd98f8();
              ppppppbVar8 = param_1;
              goto code_r0x000109dbcde0;
            }
            goto code_r0x000109dbd608;
          }
          pppppbStack_b8 = pppppbStack_a8;
          pppppbStack_c0 = pppppbStack_b0;
          ppppppbVar8 = (byte ******)pppppbStack_a8;
        }
        ppppppbVar11 = param_1;
        (*(code *)(*param_1)[6])();
        ppppppbVar9 = (byte ******)pppppbStack_c0;
        iVar4 = (int)ppppppbVar11 + 0x4d0;
        ppppppbVar7 = (byte ******)pppppbStack_c0;
        ppppppbVar12 = ppppppbVar8;
        FUN_109e03610();
        if (((iVar4 == -1) || ((long)iVar4 == (ulong)*(uint *)(ppppppbVar11 + 0x9b))) ||
           (ppppppbVar11 = (byte ******)ppppppbVar11[0x9a][iVar4][1],
           ppppppbVar11 == (byte ******)0x0)) {
          ppppppbVar11 = param_1;
          (*(code *)(*param_1)[6])();
          bVar3 = *(byte *)(param_1[0x1d] + 10);
          unaff_w27 = (uint)bVar3;
          pppppbStack_98 = (byte *****)ppppppbVar8;
          if (bVar3 == 1) {
            func_0x000109e03858(&pppppbStack_e8,&pppppbStack_c0);
            ppppppbVar9 = (byte ******)pppppbStack_e8;
            if (-1 < (long)uStack_d8._7_1_) {
              ppppppbVar9 = &pppppbStack_e8;
            }
            pppppbStack_98 = pppppbStack_e0;
            if (-1 < (long)uStack_d8) {
              pppppbStack_98 = (byte *****)(long)uStack_d8._7_1_;
            }
          }
          ppppbStack_80 = (byte ****)CONCAT62(ppppbStack_80._2_6_,0x105);
          ppppppbVar7 = &pppppbStack_a0;
          pppppbStack_a0 = (byte *****)ppppppbVar9;
          FUN_109da7538();
          if ((bVar3 != 0) && ((long)uStack_d8 < 0)) {
            __ZdlPv(pppppbStack_e8);
          }
        }
        if (((ulong)ppppppbVar11[1] & 0x1c00) == 0x800) {
          ppppppbVar8 = (byte ******)ppppppbVar11[3];
          if (*(byte *)ppppppbVar8 == 4) {
            ppppppbVar8 = ppppppbVar8 + -1;
            (*(code *)(*ppppppbVar8)[6])();
            if (((ulong)ppppppbVar8 & 1) == 0) goto code_r0x000109dbd844;
            if ((int)ppppppbVar10 != 0) {
              ppppppbVar7 = (byte ******)*param_3;
              pppppbStack_a0 = (byte *****)&UNK_10f5fd6f7;
              ppppbStack_80 = (byte ****)CONCAT62(ppppbStack_80._2_6_,0x103);
              ppppppbVar12 = &pppppbStack_a0;
              FUN_109dd98f8();
              ppppppbVar8 = param_1;
              goto code_r0x000109dbcde0;
            }
            ppppppbVar8 = (byte ******)ppppppbVar11[3];
          }
          else if (((int)ppppppbVar10 != 0) || (*(byte *)ppppppbVar8 != 1))
          goto code_r0x000109dbd844;
        }
        else {
code_r0x000109dbd844:
          (*(code *)(*param_1)[6])();
          FUN_109dae8f4();
          ppppppbVar7 = ppppppbVar10;
          ppppppbVar12 = param_1;
          ppppppbVar8 = ppppppbVar11;
        }
code_r0x000109dbd86c:
        *param_2 = (byte *****)ppppppbVar8;
        ppppppbVar8 = (byte ******)0x0;
      }
    }
    else {
      ppppppbVar12 = param_1;
      (*(code *)(*param_1)[5])();
      if (((*(int *)ppppppbVar12[1] == 0x1a) && (((ulong)param_1[0x1d][4] & 1) != 0)) ||
         ((ppppppbVar12 = param_1, (*(code *)(*param_1)[5])(), *(int *)ppppppbVar12[1] == 0x17 &&
          (*(char *)((long)param_1[0x1d] + 0x22) == '\x01')))) {
        (*(code *)(*param_1)[0x17])(param_1);
        pppppbVar5 = param_1[0x1b];
        pppppbStack_a0 = (byte *****)&UNK_10f5fa737;
        ppppbStack_80 = (byte ****)CONCAT62(ppppbStack_80._2_6_,0x103);
        FUN_109da7f80(pppppbVar5,&pppppbStack_a0,1);
        (*(code *)(*param_1[0x1c])[0x18])(param_1[0x1c],pppppbVar5,0);
        (*(code *)(*param_1)[6])();
        ppppppbVar7 = (byte ******)0x0;
        FUN_109dae8f4();
        *param_2 = pppppbVar5;
        *param_3 = (byte *****)unaff_x22;
        ppppppbVar8 = (byte ******)0x0;
        ppppppbVar12 = param_1;
      }
      else {
        pppppbStack_a0 = (byte *****)&UNK_10f5fd69d;
        ppppbStack_80 = (byte ****)CONCAT62(ppppbStack_80._2_6_,0x103);
        ppppppbVar12 = &pppppbStack_a0;
        ppppppbVar7 = unaff_x22;
        FUN_109dd98f8();
        ppppppbVar8 = param_1;
      }
    }
    goto code_r0x000109dbcde0;
  case 4:
    ppppppbVar12 = param_1;
    (*(code *)(*param_1)[5])();
    unaff_x22 = (byte ******)ppppppbVar12[1][1];
    ppppppbVar12 = param_1;
    (*(code *)(*param_1)[5])();
    pppppbVar5 = ppppppbVar12[1] + 3;
    if (0x40 < *(uint *)(ppppppbVar12[1] + 4)) {
      pppppbVar5 = (byte *****)*pppppbVar5;
    }
    pppppbVar5 = (byte *****)*pppppbVar5;
    ppppppbVar7 = param_1;
    (*(code *)(*param_1)[6])();
    ppppppbVar12 = (byte ******)0x0;
    pppppbVar6 = pppppbVar5;
    FUN_109dae888();
    *param_2 = pppppbVar6;
    *param_3 = (byte *****)((long)param_1[6][1] + (long)param_1[6][2]);
    (*(code *)(*param_1)[0x17])(param_1);
    ppppppbVar8 = (byte ******)0x0;
    if (*(int *)param_1[6] == 2) {
      ppppppbVar12 = param_1;
      (*(code *)(*param_1)[5])();
      pppppbStack_a8 = (byte *****)ppppppbVar12[1][2];
      pppppbStack_b0 = (byte *****)ppppppbVar12[1][1];
      pppppbStack_a0 = (byte *****)CONCAT71(pppppbStack_a0._1_7_,0x40);
      ppppppbVar7 = &pppppbStack_a0;
      ppppppbVar12 = (byte ******)0x1;
      func_0x000109d39ec8(&pppppbStack_130,&pppppbStack_b0);
      if ((byte ******)pppppbStack_128 == *(byte *******)((ulong)&pppppbStack_b0 | 8)) {
        ppppppbVar8 = (byte ******)0x0;
      }
      else {
        ppppppbVar8 = (byte ******)pppppbStack_120;
        ppppppbVar7 = (byte ******)pppppbStack_118;
        FUN_109dae95c();
        if ((int)ppppppbVar8 == 1) {
          uStack_c8 = 0x503;
          pppppbStack_e8 = (byte *****)&UNK_10f5fd62c;
          uStack_d8 = (byte ******)pppppbStack_120;
          pppppbStack_d0 = pppppbStack_118;
          apuStack_110[0] = &DAT_10f638984;
          uStack_f0 = 0x103;
          FUN_109d35b30(&pppppbStack_a0,&pppppbStack_e8,apuStack_110);
          ppppppbVar12 = param_1;
          (*(code *)(*param_1)[5])();
          ppppppbVar7 = (byte ******)ppppppbVar12[0xc];
          ppppppbVar12 = &pppppbStack_a0;
          FUN_109dd98f8(param_1,ppppppbVar7,ppppppbVar12,0,0);
          break;
        }
        pppppbStack_a8 = pppppbStack_128;
        pppppbStack_b0 = pppppbStack_130;
      }
      if (((byte ******)pppppbStack_128 == (byte ******)0x1) &&
         ((*(byte *)pppppbStack_b0 | 4) == 0x66)) {
        pppppbVar6 = param_1[0x1b];
        FUN_109da8378(pppppbVar6,pppppbVar5,*(byte *)pppppbStack_b0 == 0x62);
        ppppppbVar12 = param_1;
        (*(code *)(*param_1)[6])();
        pppppbVar5 = pppppbVar6;
        FUN_109dae8f4(pppppbVar6,ppppppbVar8,ppppppbVar12,0);
        *param_2 = pppppbVar5;
        if (((byte ******)pppppbStack_a8 == (byte ******)0x1) &&
           ((*(byte *)pppppbStack_b0 == 0x62 &&
            (pppppbVar5 = pppppbVar6, func_0x000109da4494(pppppbVar6,1),
            pppppbVar5 == (byte *****)0x0)))) {
          pppppbStack_a0 = (byte *****)&UNK_10f5fd4af;
          ppppbStack_80 = (byte ****)CONCAT62(ppppbStack_80._2_6_,0x103);
          ppppppbVar12 = &pppppbStack_a0;
          ppppppbVar7 = unaff_x22;
          FUN_109dd98f8();
          ppppppbVar8 = param_1;
          goto code_r0x000109dbcde0;
        }
        ppppbStack_78 = (byte ****)param_1[0x39];
        pppppbStack_90 = param_1[0x36];
        pppppbStack_98 = param_1[0x35];
        ppppbStack_80 = (byte ****)param_1[0x38];
        pppppbStack_88 = param_1[0x37];
        ppppppbVar7 = &pppppbStack_a0;
        pppppbStack_a0 = (byte *****)unaff_x22;
        ppppbStack_70 = (byte ****)pppppbVar6;
        func_0x000109dcf284(param_1 + 0x3c);
        *param_3 = (byte *****)((long)param_1[6][1] + (long)param_1[6][2]);
        (*(code *)(*param_1)[0x17])(param_1);
      }
      goto code_r0x000109dbd6f0;
    }
    goto code_r0x000109dbcde0;
  case 5:
    pppppbStack_a0 = (byte *****)&UNK_10f5fd338;
    ppppbStack_80 = (byte ****)CONCAT62(ppppbStack_80._2_6_,0x103);
    ppppppbVar12 = param_1;
    (*(code *)(*param_1)[5])();
    ppppppbVar7 = (byte ******)ppppppbVar12[0xc];
    ppppppbVar12 = &pppppbStack_a0;
    FUN_109dd98f8(param_1,ppppppbVar7,ppppppbVar12,0,0);
    break;
  case 6:
    ppppppbVar12 = param_1;
    (*(code *)(*param_1)[5])();
    FUN_109def6e8(&pppppbStack_a0,&DAT_10e05ae44,ppppppbVar12[1][1],ppppppbVar12[1][2]);
    FUN_109d323e4(&pppppbStack_e8,&pppppbStack_a0);
    unaff_x22 = (byte ******)pppppbStack_e8;
    if (0x40 < (uint)pppppbStack_e0) {
      unaff_x22 = (byte ******)*pppppbStack_e8;
      __ZdaPv();
    }
    ppppppbVar7 = param_1;
    (*(code *)(*param_1)[6])();
    ppppppbVar12 = (byte ******)0x0;
    ppppppbVar8 = unaff_x22;
    FUN_109dae888();
    *param_2 = (byte *****)ppppppbVar8;
    *param_3 = (byte *****)((long)param_1[6][1] + (long)param_1[6][2]);
    (*(code *)(*param_1)[0x17])(param_1);
    FUN_109d32234(&pppppbStack_98);
code_r0x000109dbd6f0:
    ppppppbVar8 = (byte ******)0x0;
    goto code_r0x000109dbcde0;
  default:
    goto LAB_109dbd4a4;
  case 0xc:
    (*(code *)(*param_1)[0x17])(param_1);
    ppppppbVar8 = param_1;
    ppppppbVar7 = param_2;
    ppppppbVar12 = param_3;
    (*(code *)(*param_1)[0x1e])();
    if (((ulong)ppppppbVar8 & 1) == 0) {
      param_3 = (byte ******)*param_2;
      (*(code *)(*param_1)[6])();
      ppppppbVar8 = (byte ******)0x3;
      ppppppbVar12 = param_1;
code_r0x000109dbd494:
      ppppppbVar7 = param_3;
      FUN_109dae830();
      goto code_r0x000109dbd86c;
    }
    break;
  case 0xd:
    (*(code *)(*param_1)[0x17])(param_1);
    ppppppbVar8 = param_1;
    ppppppbVar7 = param_2;
    ppppppbVar12 = param_3;
    (*(code *)(*param_1)[0x1e])();
    if (((ulong)ppppppbVar8 & 1) == 0) {
      param_3 = (byte ******)*param_2;
      (*(code *)(*param_1)[6])();
      ppppppbVar8 = (byte ******)0x1;
      ppppppbVar12 = param_1;
      goto code_r0x000109dbd494;
    }
    break;
  case 0xe:
    (*(code *)(*param_1)[0x17])(param_1);
    ppppppbVar8 = param_1;
    ppppppbVar7 = param_2;
    ppppppbVar12 = param_3;
    (*(code *)(*param_1)[0x1e])();
    if (((ulong)ppppppbVar8 & 1) == 0) {
      param_3 = (byte ******)*param_2;
      (*(code *)(*param_1)[6])();
      ppppppbVar8 = (byte ******)0x2;
      ppppppbVar12 = param_1;
      goto code_r0x000109dbd494;
    }
    break;
  case 0x11:
    ppppppbVar8 = param_1;
    (*(code *)(*param_1)[0x17])();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto SUB_109dcf338;
    goto LAB_109dbda14;
  case 0x13:
    if (((ulong)param_1[0x21][2] & 1) == 0) {
      pppppbStack_a0 = (byte *****)&UNK_10f5fd73c;
      ppppbStack_80 = (byte ****)CONCAT62(ppppbStack_80._2_6_,0x103);
      ppppppbVar12 = param_1;
      (*(code *)(*param_1)[5])();
      ppppppbVar7 = (byte ******)ppppppbVar12[0xc];
      ppppppbVar12 = &pppppbStack_a0;
      FUN_109dd98f8(param_1,ppppppbVar7,ppppppbVar12,0,0);
      break;
    }
    ppppppbVar8 = param_1;
    (*(code *)(*param_1)[0x17])();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      ppppppbVar12 = param_1;
      (*(code *)(*param_1)[0x1d])(param_1,param_2,&stack0xffffffffffffffb8);
      if (((ulong)ppppppbVar12 & 1) == 0) {
        ppppppbVar12 = param_1;
        (*(code *)(*param_1)[5])();
        *param_3 = (byte *****)((long)ppppppbVar12[1][1] + (long)ppppppbVar12[1][2]);
        func_0x000109dd9a7c(param_1,0x14,&stack0xffffffffffffffb8);
      }
      return;
    }
    goto LAB_109dbda14;
  case 0x18:
    if ((*(byte *)((long)param_1[0x1d] + 0x21) & 1) != 0) {
      unaff_x22 = (byte ******)param_1[0x1b];
      pppppbStack_a0 = (byte *****)&UNK_10f5fa737;
      ppppbStack_80 = (byte ****)CONCAT62(ppppbStack_80._2_6_,0x103);
      FUN_109da7f80(unaff_x22,&pppppbStack_a0,1);
      (*(code *)(*param_1[0x1c])[0x18])(param_1[0x1c],unaff_x22,0);
      ppppppbVar12 = param_1;
      (*(code *)(*param_1)[6])();
      ppppppbVar7 = (byte ******)0x0;
      ppppppbVar8 = unaff_x22;
      FUN_109dae8f4();
      *param_2 = (byte *****)ppppppbVar8;
      *param_3 = (byte *****)((long)param_1[6][1] + (long)param_1[6][2]);
      (*(code *)(*param_1)[0x17])(param_1);
      goto code_r0x000109dbd6f0;
    }
    pppppbStack_a0 = (byte *****)&UNK_10f5fd721;
    ppppbStack_80 = (byte ****)CONCAT62(ppppbStack_80._2_6_,0x103);
    ppppppbVar12 = param_1;
    (*(code *)(*param_1)[5])();
    ppppppbVar7 = (byte ******)ppppppbVar12[0xc];
    ppppppbVar12 = &pppppbStack_a0;
    FUN_109dd98f8(param_1,ppppppbVar7,ppppppbVar12,0,0);
    break;
  case 0x22:
    (*(code *)(*param_1)[0x17])(param_1);
    ppppppbVar8 = param_1;
    ppppppbVar7 = param_2;
    ppppppbVar12 = param_3;
    (*(code *)(*param_1)[0x1e])();
    if (((ulong)ppppppbVar8 & 1) == 0) {
      param_3 = (byte ******)*param_2;
      (*(code *)(*param_1)[6])();
      ppppppbVar8 = (byte ******)0x0;
      ppppppbVar12 = param_1;
      goto code_r0x000109dbd494;
    }
    break;
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
    (*(code *)(*param_1)[0x17])(param_1);
    if (*(int *)param_1[6] == 0x11) {
      (*(code *)(*param_1)[0x17])(param_1);
      ppppppbVar8 = param_1;
      ppppppbVar7 = param_2;
      ppppppbVar12 = param_3;
      (*(code *)(*param_1)[0x1d])();
      if (((ulong)ppppppbVar8 & 1) == 0) {
        pppppbStack_a0 = (byte *****)&UNK_10f5aef10;
        ppppbStack_80 = (byte ****)CONCAT62(ppppbStack_80._2_6_,0x103);
        ppppppbVar12 = &pppppbStack_a0;
        ppppppbVar7 = (byte ******)0x12;
        ppppppbVar8 = param_1;
        func_0x000109dd9a7c();
        if (((ulong)ppppppbVar8 & 1) == 0) {
          pppppbVar5 = param_1[1];
          ppppppbVar7 = (byte ******)*param_2;
          (*(code *)(*pppppbVar5)[0x17])();
          *param_2 = pppppbVar5;
          ppppppbVar8 = (byte ******)(ulong)(pppppbVar5 == (byte *****)0x0);
          ppppppbVar12 = ppppppbVar10;
          goto code_r0x000109dbcde0;
        }
      }
    }
    else {
      pppppbStack_a0 = (byte *****)&UNK_10f5fd76d;
      ppppbStack_80 = (byte ****)CONCAT62(ppppbStack_80._2_6_,0x103);
      ppppppbVar12 = param_1;
      (*(code *)(*param_1)[5])();
      ppppppbVar7 = (byte ******)ppppppbVar12[0xc];
      ppppppbVar12 = &pppppbStack_a0;
      FUN_109dd98f8(param_1,ppppppbVar7,ppppppbVar12,0,0);
    }
  }
LAB_109dbcddc:
  ppppppbVar8 = (byte ******)0x1;
code_r0x000109dbcde0:
  ppppppbVar9 = param_3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
LAB_109dbda14:
  ___stack_chk_fail();
  if ((unaff_w27 != 0) && ((long)uStack_d8 < 0)) {
    __ZdlPv(pppppbStack_e8);
  }
  param_1 = ppppppbVar8;
  __Unwind_Resume();
  pcStack_138 = FUN_109dbda58;
  unaff_x29 = &puStack_140;
  *ppppppbVar7 = (byte *****)0x0;
  unaff_x30 = 0x109dbda7c;
  register0x00000008 = (BADSPACEBASE *)&pppppbStack_160;
  param_3 = ppppppbVar12;
  unaff_x19 = ppppppbVar12;
  unaff_x20 = ppppppbVar7;
  pppppbStack_160 = (byte *****)unaff_x22;
  pppppbStack_158 = (byte *****)ppppppbVar9;
  pppppbStack_150 = (byte *****)param_2;
  pppppbStack_148 = (byte *****)ppppppbVar8;
  puStack_140 = puVar1;
SUB_109dcf338:
  *(byte *******)((long)register0x00000008 + -0x20) = unaff_x20;
  *(byte *******)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
  ppppppbVar12 = param_1;
  (*(code *)(*param_1)[0x1d])();
  if (((ulong)ppppppbVar12 & 1) == 0) {
    *param_3 = (byte *****)((long)param_1[6][1] + (long)param_1[6][2]);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_10f5aef10;
    *(undefined2 *)((long)register0x00000008 + -0x28) = 0x103;
    func_0x000109dd9a7c(param_1,0x12,(undefined1 *)((long)register0x00000008 + -0x48));
  }
  return;
}



/* Entry: 109dbda58; end: 109dbdb7f;  */

undefined8 FUN_109dbda58(long *param_1,ulong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_64 [4];
  undefined8 uStack_60;
  uint uStack_54;
  
  *param_2 = 0;
  plVar4 = param_1;
  func_0x000109dcf338();
  if (((ulong)plVar4 & 1) != 0) {
    return 1;
  }
  lVar6 = param_1[0x11];
  uStack_54 = 0;
  lVar3 = param_1[0x1d];
  FUN_109dcf0c8(lVar3,*(undefined1 *)((long)param_1 + 0x31c),*(undefined4 *)param_1[6],&uStack_54);
  iVar2 = (int)lVar3;
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    (**(code **)(*param_1 + 0xb8))(param_1);
    plVar4 = (long *)param_1[1];
    (**(code **)(*plVar4 + 0x18))(plVar4,&uStack_60,param_3);
    if (((ulong)plVar4 & 1) != 0) break;
    lVar5 = param_1[0x1d];
    FUN_109dcf0c8(lVar5,*(undefined1 *)((long)param_1 + 0x31c),*(undefined4 *)param_1[6],auStack_64)
    ;
    if (((uint)lVar3 < (uint)lVar5) &&
       (plVar4 = param_1, FUN_109dced54(param_1,(uint)lVar3 + 1,&uStack_60,param_3),
       (int)plVar4 != 0)) {
      return 1;
    }
    uVar1 = uStack_60;
    uVar7 = (ulong)uStack_54;
    uVar8 = *param_2;
    plVar4 = param_1;
    (**(code **)(*param_1 + 0x30))(param_1);
    FUN_109dae7d4(uVar7,uVar8,uVar1,plVar4,lVar6);
    *param_2 = uVar7;
    uStack_54 = 0;
    lVar3 = param_1[0x1d];
    FUN_109dcf0c8(lVar3,*(undefined1 *)((long)param_1 + 0x31c),*(undefined4 *)param_1[6],&uStack_54)
    ;
    iVar2 = (int)lVar3;
  }
  return 1;
}



/* Entry: 109dbdb80; end: 109dbdc3b;  */

long * FUN_109dbdb80(long *param_1)

{
  long *plVar1;
  undefined *apuStack_48 [4];
  undefined2 uStack_28;
  
  if ((*(byte *)((long)param_1 + 0x31d) & 1) != 0) {
    return (long *)0x0;
  }
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x38))();
  if ((*(uint *)(plVar1 + 0xf) == 0) ||
     (*(long *)(plVar1[0xe] + (ulong)*(uint *)(plVar1 + 0xf) * 0x20 + -0x20) == 0)) {
    (**(code **)(*(long *)param_1[0x1c] + 0xb0))
              ((long *)param_1[0x1c],0,*(undefined8 *)(param_1[1] + 0xe8));
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x28))();
    apuStack_48[0] = &UNK_10f5fd7ad;
    uStack_28 = 0x103;
    FUN_109dd98f8(param_1,*(undefined8 *)(plVar1[1] + 8),apuStack_48,0,0);
  }
  else {
    param_1 = (long *)0x0;
  }
  return param_1;
}



/* Entry: 109dbdc3c; end: 109dbdd33;  */

bool FUN_109dbdc3c(long *param_1,int param_2,undefined8 param_3,long *param_4)

{
  bool bVar1;
  long *plVar2;
  undefined *apuStack_78 [4];
  undefined2 uStack_58;
  
  plVar2 = param_1;
  func_0x000109dcf338(param_1,param_3,param_4);
  if (((ulong)plVar2 & 1) == 0) {
    if (param_2 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      plVar2 = param_1;
      FUN_109dced54(param_1,1,param_3,param_4);
      if (((ulong)plVar2 & 1) == 0) {
        while( true ) {
          param_2 = param_2 + -1;
          bVar1 = param_2 != 0;
          if (param_2 == 0) break;
          plVar2 = param_1;
          (**(code **)(*param_1 + 0x28))();
          *param_4 = *(long *)(plVar2[1] + 8) + *(long *)(plVar2[1] + 0x10);
          apuStack_78[0] = &UNK_10f5aef10;
          uStack_58 = 0x103;
          plVar2 = param_1;
          func_0x000109dd9a7c(param_1,0x12,apuStack_78);
          if ((int)plVar2 != 0) {
            return bVar1;
          }
          plVar2 = param_1;
          FUN_109dced54(param_1,1,param_3,param_4);
          if (((ulong)plVar2 & 1) != 0) {
            return bVar1;
          }
        }
      }
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 109dbdd34; end: 109dbe283;  */

long * FUN_109dbdd34(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  undefined8 ******ppppppuVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 ******ppppppuStack_e8;
  long lStack_e0;
  char cStack_d1;
  undefined8 ******ppppppuStack_d0;
  long lStack_c8;
  undefined2 uStack_b0;
  undefined8 ******ppppppuStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  uint uStack_70;
  
  plVar7 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (**(int **)(param_1[0x6a] + 8) == 9) {
    plVar7 = param_1;
    (**(code **)(*param_1 + 0x28))();
    if (((*(long *)(plVar7[1] + 0x10) != 0) &&
        (plVar7 = param_1, (**(code **)(*param_1 + 0x28))(), **(char **)(plVar7[1] + 8) != '\r')) &&
       (plVar7 = param_1, (**(code **)(*param_1 + 0x28))(), **(char **)(plVar7[1] + 8) != '\n'))
    goto LAB_109dbde60;
  }
  else {
    iVar9 = *(int *)plVar7[1];
    func_0x000109dcf440(param_1);
    if ((**(int **)(param_1[0x6a] + 8) != 9) ||
       ((plVar7 = param_1, (**(code **)(*param_1 + 0x28))(), **(char **)(plVar7[1] + 8) != '\n' &&
        (plVar7 = param_1, (**(code **)(*param_1 + 0x28))(), **(char **)(plVar7[1] + 8) != '\r'))))
    {
      if (iVar9 != 0xb) {
        plVar7 = param_1;
        (**(code **)(*param_1 + 0x28))();
        puVar10 = (undefined8 *)plVar7[1];
        uStack_88 = puVar10[1];
        puStack_90 = (undefined *)*puVar10;
        uStack_80 = puVar10[2];
        uStack_70 = *(uint *)(puVar10 + 4);
        if (uStack_70 < 0x41) {
          uStack_78 = puVar10[3];
        }
        else {
          uVar11 = (ulong)uStack_70 + 0x3f >> 3 & 0x3ffffff8;
          __Znam();
          uStack_78 = uVar11;
          _memcpy();
        }
        uVar2 = uStack_88;
        lStack_a0 = 0;
        uStack_98 = uStack_88;
        ppppppuStack_a8 = (undefined8 *******)0x0;
        plVar7 = param_1;
        FUN_109dbc364(param_1,&ppppppuStack_a8);
        if ((int)plVar7 == 0) {
          plVar7 = (long *)param_1[1];
          (**(code **)(*plVar7 + 0x88))(plVar7,&puStack_90);
          if (((int)plVar7 == 0) || (plVar7 = param_1, FUN_109dbdb80(), ((ulong)plVar7 & 1) != 0)) {
            iVar9 = 1;
          }
          else {
            func_0x000109dcf440(param_1);
            plVar7 = param_1;
            (**(code **)(*param_1 + 0x28))();
            if (*(int *)plVar7[1] == 9) {
              ppppppuStack_d0 = (undefined8 ******)&UNK_10f5fd80a;
              uStack_b0 = 0x103;
              plVar7 = param_1;
              FUN_109dd98f8(param_1,uVar2,&ppppppuStack_d0,0,0);
              iVar9 = (int)plVar7;
            }
            else {
              lVar12 = param_1[0x1b];
              cVar4 = *(char *)(*(long *)(lVar12 + 0x90) + 0x50);
              ppppppuStack_d0 = ppppppuStack_a8;
              lStack_c8 = lStack_a0;
              if (cVar4 == '\x01') {
                func_0x000109e03858(&ppppppuStack_e8,&ppppppuStack_a8);
                ppppppuStack_d0 = ppppppuStack_e8;
                if (-1 < (long)cStack_d1) {
                  ppppppuStack_d0 = &ppppppuStack_e8;
                }
                lStack_c8 = lStack_e0;
                if (-1 < cStack_d1) {
                  lStack_c8 = (long)cStack_d1;
                }
              }
              uStack_b0 = 0x105;
              FUN_109da7538(lVar12,&ppppppuStack_d0);
              if ((cVar4 != '\0') && (cStack_d1 < '\0')) {
                __ZdlPv(ppppppuStack_e8);
              }
              (**(code **)(*(long *)param_1[1] + 0xa0))((long *)param_1[1],lVar12,uVar2);
              (**(code **)(*(long *)param_1[0x6b] + 0xc0))((long *)param_1[0x6b],lVar12,uVar2);
              plVar7 = param_1;
              FUN_109dc0c88();
              if ((int)plVar7 != 0) {
                FUN_109dad5f4(lVar12,param_1[0x1c],param_1[0x1e],&uStack_98);
              }
              (**(code **)(*(long *)param_1[1] + 0xa8))((long *)param_1[1],lVar12);
              iVar9 = 0;
            }
          }
        }
        else {
          ppppppuStack_d0 = (undefined8 ******)&UNK_10f5fd7e2;
          uStack_b0 = 0x103;
          plVar7 = param_1;
          FUN_109dd98f8(param_1,uVar2,&ppppppuStack_d0,0,0);
          iVar9 = (int)plVar7;
        }
        if ((0x40 < uStack_70) && (uStack_78 != 0)) {
          __ZdaPv();
        }
        if (iVar9 != 0) {
          FUN_109dbc97c(param_1);
          return (long *)0x1;
        }
      }
      puVar10 = *(undefined8 **)(param_1[0x6a] + 8);
      puVar1 = (undefined *)*puVar10;
      uVar2 = puVar10[1];
      uVar13 = puVar10[2];
      uVar3 = *(uint *)(puVar10 + 4);
      if (uVar3 < 0x41) {
        uVar11 = puVar10[3];
      }
      else {
        uVar11 = (ulong)uVar3 + 0x3f >> 3 & 0x3ffffff8;
        __Znam();
        _memcpy();
      }
      ppppppuStack_d0 = (undefined8 ******)0x0;
      lStack_c8 = 0;
      plVar7 = param_1;
      FUN_109dbc364(param_1,&ppppppuStack_d0);
      if ((int)plVar7 == 0) {
        func_0x000109dcf440(param_1);
        lVar12 = lStack_c8;
        ppppppuVar5 = ppppppuStack_d0;
        uVar8 = uVar11;
        puStack_90 = puVar1;
        uStack_88 = uVar2;
        uStack_80 = uVar13;
        uVar6 = uVar11;
        uStack_70 = uVar3;
        if (0x40 < uVar3) {
          uVar8 = (ulong)uVar3 + 0x3f >> 3 & 0x3ffffff8;
          __Znam();
          uStack_78 = uVar8;
          _memcpy();
          uVar6 = uStack_78;
        }
        uStack_78 = uVar6;
        FUN_109dc92bc(param_1,param_2,ppppppuVar5,lVar12,&puStack_90,uVar2);
        if (uVar3 < 0x41) {
          return param_1;
        }
        if (uVar8 != 0) {
          __ZdaPv(uVar8);
        }
      }
      else {
        puStack_90 = &UNK_10f5fbd4c;
        uStack_70 = CONCAT22(uStack_70._2_2_,0x103);
        FUN_109dd98f8(param_1,uVar2,&puStack_90,0,0);
        if (uVar3 < 0x41) {
          return param_1;
        }
      }
      if (uVar11 == 0) {
        return param_1;
      }
      __ZdaPv(uVar11);
      return param_1;
    }
  }
  (**(code **)(*(long *)param_1[0x6b] + 0x98))();
LAB_109dbde60:
  FUN_109dbc1a0(param_1);
  return (long *)0x0;
}



/* Entry: 109dbe284; end: 109dbe5df;  */

ulong ****** FUN_109dbe284(ulong ******param_1,ulong ******param_2)

{
  char cVar1;
  code *pcVar2;
  ulong ****ppppuVar3;
  ulong ******ppppppuVar4;
  ulong ******ppppppuVar5;
  ulong ******ppppppuVar6;
  ulong ******ppppppuVar7;
  ulong *****UNRECOVERED_JUMPTABLE;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong ******ppppppuVar11;
  long lVar12;
  uint uVar13;
  undefined1 uVar14;
  ulong *****pppppuVar15;
  ulong *****pppppuVar16;
  ulong *****pppppuStack_1f0;
  ulong ****ppppuStack_1e8;
  ulong *****pppppuStack_1e0;
  ulong ****ppppuStack_1d8;
  ulong ****ppppuStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong *****pppppuStack_1b0;
  ulong ****ppppuStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong *****pppppuStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_168;
  ulong *****pppppuStack_160;
  long lStack_158;
  undefined8 uStack_150;
  ulong *****pppppuStack_148;
  long lStack_140;
  undefined8 uStack_138;
  ulong *****pppppuStack_130;
  ulong *****pppppuStack_128;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [168];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar4 = param_1;
  func_0x000107c2b034();
  ppppppuVar11 = (ulong ******)*param_1;
  UNRECOVERED_JUMPTABLE = param_1[1];
  ppppppuVar5 = ppppppuVar11;
  FUN_109e00498(ppppppuVar11,UNRECOVERED_JUMPTABLE);
  ppppppuVar6 = (ulong ******)param_2[0x1e];
  FUN_109e00498(ppppppuVar6,param_2[0x38]);
  uVar13 = (uint)ppppppuVar5;
  ppppppuVar7 = ppppppuVar6;
  if (param_2[0x1f] == (ulong *****)0x0 && 1 < uVar13) {
    ppppppuVar7 = ppppppuVar11;
    FUN_109e00808(ppppppuVar11,(*ppppppuVar11)[(ulong)(uVar13 - 1) * 3 + 2],ppppppuVar4);
  }
  if ((param_2[0x37] == (ulong *****)0x0) || (uVar13 != (uint)ppppppuVar6)) {
    UNRECOVERED_JUMPTABLE = param_2[0x1f];
    if (UNRECOVERED_JUMPTABLE == (ulong *****)0x0) {
      (*(code *)(*param_2)[6])();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        pppppuVar15 = param_2[9];
        if (pppppuVar15 == (ulong *****)0x0) {
          pppppuVar15 = param_2[10];
        }
        ppppppuVar11 = (ulong ******)param_2[0x11];
        if (ppppppuVar11 != (ulong ******)0x0) {
          (*(code *)(*ppppppuVar11)[6])
                    (ppppppuVar11,param_1,&stack0xffffffffffffffef,pppppuVar15,param_2 + 0xb);
          return ppppppuVar11;
        }
        func_0x000104c501e4();
        ppppppuVar11 = &pppppuStack_1f0;
        lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_1c8 = 0;
        ppppuStack_1d0 = (ulong ****)0x0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        ppppuStack_1e8 = (ulong ****)0x0;
        pppppuStack_1f0 = (ulong *****)0x0;
        ppppuStack_1d8 = (ulong ****)0x0;
        pppppuStack_1e0 = (ulong *****)0x0;
        if (param_1 == (ulong ******)0x0) {
          uVar14 = 0;
        }
        else {
          ppppppuVar11 = (ulong ******)param_2[9];
          if (ppppppuVar11 == (ulong ******)0x0) {
            ppppppuVar11 = (ulong ******)param_2[10];
            uVar14 = 1;
          }
          else {
            uVar14 = 0;
          }
        }
        puStack_120 = auStack_110;
        uStack_170 = 0;
        pppppuStack_188 = (ulong *****)0x0;
        uStack_190 = 0;
        uStack_178 = 0;
        lStack_180 = 0;
        uStack_198 = 0;
        uStack_1a0 = (ulong ******)0x0;
        pppppuStack_160 = (ulong *****)0x0;
        uStack_168 = 0;
        uStack_150 = 0;
        lStack_158 = 0;
        lStack_140 = 0;
        pppppuStack_148 = (ulong *****)0x0;
        pppppuStack_130 = (ulong *****)0x0;
        uStack_138 = 0;
        pppppuStack_128 = (ulong *****)0x0;
        uStack_118 = 0x400000000;
        ppppuVar3 = UNRECOVERED_JUMPTABLE[3];
        ppppuStack_1a8 = (ulong ****)ppppppuVar11;
        if (ppppuVar3 != (ulong ****)0x0) {
          (*(code *)(*ppppuVar3)[6])(ppppuVar3,&uStack_1a0,&ppppuStack_1a8);
          ppppuStack_1a8 = (ulong ****)CONCAT71(ppppuStack_1a8._1_7_,uVar14);
          UNRECOVERED_JUMPTABLE = param_2[0x11];
          if (UNRECOVERED_JUMPTABLE != (ulong *****)0x0) {
            puVar10 = &uStack_1a0;
            (*(code *)(*UNRECOVERED_JUMPTABLE)[6])
                      (UNRECOVERED_JUMPTABLE,puVar10,&ppppuStack_1a8,ppppppuVar11,param_2 + 0xb);
            iVar9 = (int)puVar10;
            FUN_109d3865c(&puStack_120);
            if (uStack_138 != 0) {
              pppppuStack_130 = (ulong *****)uStack_138;
              __ZdlPv();
            }
            if (lStack_140 < 0) {
              __ZdlPv(uStack_150);
            }
            if (lStack_158 < 0) {
              __ZdlPv(uStack_168);
            }
            if (lStack_180 < 0) {
              __ZdlPv(uStack_190);
            }
            uStack_1a0 = (ulong ******)&ppppuStack_1d8;
            func_0x000104c607c8(&uStack_1a0);
            ppppppuVar11 = (ulong ******)&uStack_1a0;
            uStack_1a0 = &pppppuStack_1f0;
            FUN_109d3a718();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
              return ppppppuVar11;
            }
            ___stack_chk_fail();
            func_0x000109d38208(&uStack_1a0);
            FUN_109d3a460(&pppppuStack_1f0);
            __Unwind_Resume();
            if (iVar9 == 0) {
              *ppppppuVar11 = (ulong *****)0x0;
              ppppppuVar11[1] = (ulong *****)0x0;
              *(undefined4 *)(ppppppuVar11 + 2) = 0;
            }
            else {
              uVar13 = (uint)(iVar9 << 2) / 3 + 1;
              uVar13 = uVar13 | uVar13 >> 1;
              uVar13 = uVar13 | uVar13 >> 2;
              uVar13 = uVar13 | uVar13 >> 4;
              uVar13 = uVar13 | uVar13 >> 8;
              uVar13 = (uVar13 >> 0x10 | uVar13) + 1;
              *(uint *)(ppppppuVar11 + 2) = uVar13;
              ppppppuVar5 = (ulong ******)((ulong)uVar13 << 4);
              __ZnwmSt11align_val_t(ppppppuVar5,8);
              *ppppppuVar11 = (ulong *****)ppppppuVar5;
              ppppppuVar11[1] = (ulong *****)0x0;
              ppppppuVar4 = ppppppuVar11 + 2;
              ppppppuVar11 = ppppppuVar5;
              if (*(uint *)ppppppuVar4 != 0) {
                lVar12 = (ulong)*(uint *)ppppppuVar4 << 4;
                do {
                  ppppppuVar11 = ppppppuVar5 + 2;
                  ppppppuVar5[1] = (ulong *****)0x0;
                  *ppppppuVar5 = (ulong *****)0xffffffffffffffff;
                  lVar12 = lVar12 + -0x10;
                  ppppppuVar5 = ppppppuVar11;
                } while (lVar12 != 0);
              }
            }
            return ppppppuVar11;
          }
        }
        func_0x000104c501e4();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109daac50);
        (*pcVar2)();
      }
    }
    else {
      ppppppuVar11 = param_2 + 0x20;
      param_2 = ppppppuVar7;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x000109dbe398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)UNRECOVERED_JUMPTABLE)(param_1,*ppppppuVar11);
        return param_1;
      }
    }
  }
  else {
    pppppuVar15 = param_2[0x36];
    if ((ulong *****)0x7ffffffffffffff7 < pppppuVar15) goto LAB_109dbe5a8;
    pppppuVar16 = param_2[0x35];
    if (pppppuVar15 < (ulong *****)0x17) {
      uStack_1a0 = (ulong ******)CONCAT17((char)pppppuVar15,(undefined7)uStack_1a0);
      ppppppuVar7 = &pppppuStack_1b0;
      if (pppppuVar15 != (ulong *****)0x0) goto LAB_109dbe3c4;
    }
    else {
      ppppppuVar4 = (ulong ******)0x19;
      if (((ulong)pppppuVar15 | 7) != 0x17) {
        ppppppuVar4 = (ulong ******)(((ulong)pppppuVar15 | 7) + 1);
      }
      ppppppuVar7 = ppppppuVar4;
      __Znwm();
      uStack_1a0 = (ulong ******)((ulong)ppppppuVar4 | 0x8000000000000000);
      pppppuStack_1b0 = (ulong *****)ppppppuVar7;
      ppppuStack_1a8 = (ulong ****)pppppuVar15;
LAB_109dbe3c4:
      _memmove(ppppppuVar7,pppppuVar16,pppppuVar15);
    }
    *(undefined1 *)((long)ppppppuVar7 + (long)pppppuVar15) = 0;
    FUN_109e00770(ppppppuVar11,UNRECOVERED_JUMPTABLE,ppppppuVar5);
    UNRECOVERED_JUMPTABLE = param_2[0x1e];
    FUN_109e00770(UNRECOVERED_JUMPTABLE,param_2[0x38],ppppppuVar5);
    ppppppuVar4 = (ulong ******)pppppuStack_1b0;
    if (-1 < (long)uStack_1a0._7_1_) {
      ppppppuVar4 = &pppppuStack_1b0;
    }
    pppppuVar15 = (ulong *****)ppppuStack_1a8;
    if (-1 < (long)uStack_1a0) {
      pppppuVar15 = (ulong *****)(long)uStack_1a0._7_1_;
    }
    cVar1 = *(char *)((long)param_1 + 0x4f);
    pppppuStack_1f0 = param_1[7];
    if (-1 < (long)cVar1) {
      pppppuStack_1f0 = (ulong *****)(param_1 + 7);
    }
    ppppuStack_1e8 = (ulong ****)param_1[8];
    if (-1 < cVar1) {
      ppppuStack_1e8 = (ulong ****)(long)cVar1;
    }
    cVar1 = *(char *)((long)param_1 + 0x67);
    pppppuStack_1e0 = param_1[10];
    if (-1 < (long)cVar1) {
      pppppuStack_1e0 = (ulong *****)(param_1 + 10);
    }
    ppppuStack_1d8 = (ulong ****)param_1[0xb];
    if (-1 < cVar1) {
      ppppuStack_1d8 = (ulong ****)(long)cVar1;
    }
    ppppuStack_1d0 = (ulong ****)param_1[0xd];
    lStack_1c8 = (long)param_1[0xe] - (long)ppppuStack_1d0 >> 3;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    FUN_109e01760(&uStack_198,*param_1,param_1[1],ppppppuVar4,pppppuVar15,
                  ~(uint)UNRECOVERED_JUMPTABLE + (int)ppppppuVar11 + *(int *)(param_2 + 0x37),
                  *(undefined4 *)((long)param_1 + 0x2c),*(undefined4 *)(param_1 + 6));
    if (param_2[0x1f] == (ulong *****)0x0) {
      (*(code *)(*param_2)[6])(param_2);
      FUN_109daaa7c();
    }
    else {
      (*(code *)param_2[0x1f])(param_1,param_2[0x20]);
    }
    FUN_109d3865c(&uStack_118);
    if ((ulong ******)pppppuStack_130 != (ulong ******)0x0) {
      pppppuStack_128 = pppppuStack_130;
      __ZdlPv();
    }
    if (uStack_138._7_1_ < '\0') {
      __ZdlPv();
      pppppuStack_130 = pppppuStack_148;
    }
    if (uStack_150._7_1_ < '\0') {
      __ZdlPv();
      pppppuStack_130 = pppppuStack_160;
    }
    if (uStack_178._7_1_ < '\0') {
      __ZdlPv();
      pppppuStack_130 = pppppuStack_188;
    }
    if ((long)uStack_1a0 < 0) {
      pppppuStack_130 = pppppuStack_1b0;
      __ZdlPv();
    }
    param_2 = (ulong ******)pppppuStack_130;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return (ulong ******)pppppuStack_130;
    }
  }
  ___stack_chk_fail();
  ppppppuVar7 = param_2;
LAB_109dbe5a8:
  func_0x000104c4f6b8();
  if ((long)uStack_1a0 < 0) {
    __ZdlPv(pppppuStack_1b0);
  }
  __Unwind_Resume();
  if ((*(int *)((long)ppppppuVar7 + 0xc) != 0) && (uVar13 = *(uint *)(ppppppuVar7 + 1), uVar13 != 0)
     ) {
    lVar12 = 0;
    do {
      lVar8 = *(long *)((long)*ppppppuVar7 + lVar12);
      if (lVar8 != -8 && lVar8 != 0) {
        __ZdlPvSt11align_val_t(lVar8,8);
      }
      lVar12 = lVar12 + 8;
    } while ((ulong)uVar13 * 8 - lVar12 != 0);
  }
  _free(*ppppppuVar7);
  return ppppppuVar7;
}



/* Entry: 109dbe5e0; end: 109dbe6bf;  */

long * FUN_109dbe5e0(long *param_1)

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



/* Entry: 109dbe6c0; end: 109dbe6ff;  */

long * FUN_109dbe6c0(long *param_1)

{
  FUN_109dc05c0(param_1 + 6,param_1[7]);
  if ((long *)*param_1 != param_1 + 2) {
    _free();
  }
  return param_1;
}



/* Entry: 109dbe700; end: 109dbe703;  */

undefined8 * FUN_109dbe700(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_110b58cc0;
  *(undefined8 *)(param_1[0x1c] + 0x100) = 0;
  lVar2 = param_1[0x1e];
  uVar3 = param_1[0x1f];
  *(undefined8 *)(lVar2 + 0x38) = param_1[0x20];
  *(undefined8 *)(lVar2 + 0x30) = uVar3;
  FUN_109dbe5e0(param_1 + 0x67);
  func_0x000109dbe650(param_1 + 100);
  FUN_109dc05c0(param_1 + 0x60,param_1[0x61]);
  if ((undefined8 *)param_1[0x5a] != param_1 + 0x5c) {
    _free();
  }
  if ((undefined8 *)param_1[0x3c] != param_1 + 0x3e) {
    _free();
  }
  FUN_109dc0600(param_1 + 0x2e);
  if (param_1[0x2b] != 0) {
    param_1[0x2c] = param_1[0x2b];
    __ZdlPv();
  }
  FUN_109dc07e4(param_1 + 0x28);
  if (param_1[0x25] != 0) {
    param_1[0x26] = param_1[0x25];
    __ZdlPv();
  }
  plVar1 = (long *)param_1[0x21];
  param_1[0x21] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x000109dd96e0(param_1 + 5);
  *param_1 = &PTR_DAT_110b58f38;
  FUN_109dd9e14(param_1 + 2);
  return param_1;
}



/* Entry: 109dbe704; end: 109dbe717;  */

void FUN_109dbe704(void)

{
  FUN_109db9c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109dbe718; end: 109dc03d7;  */

/* WARNING: Type propagation algorithm not settling */

code ******* FUN_109dbe718(code *******param_1,long param_2,code *******param_3)

{
  char *pcVar1;
  code ******ppppppcVar2;
  code *******pppppppcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  uint uVar8;
  code *******pppppppcVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  code *******pppppppcVar13;
  code *******pppppppcVar14;
  code *****pppppcVar15;
  char *pcVar16;
  code *******pppppppcVar17;
  undefined *puVar18;
  code *******pppppppcVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  code ******ppppppcVar24;
  undefined8 uVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  code ******ppppppcVar30;
  code *******pppppppcVar31;
  code *****pppppcVar32;
  int iVar33;
  ulong uVar34;
  code *****pppppcStack_190;
  code ******ppppppcStack_188;
  code *****pppppcStack_180;
  code *****pppppcStack_178;
  uint uStack_170;
  undefined *apuStack_160 [4];
  undefined2 uStack_140;
  code *******pppppppcStack_138;
  code *******pppppppcStack_130;
  undefined2 uStack_118;
  code *****pppppcStack_110;
  code ******ppppppcStack_108;
  code *****pppppcStack_100;
  code *****pppppcStack_f8;
  uint uStack_f0;
  code *******pppppppcStack_e0;
  code *******pppppppcStack_d8;
  code ******ppppppcStack_c8;
  code *****pppppcStack_c0;
  code ******ppppppcStack_b8;
  code *****pppppcStack_b0;
  code *****pppppcStack_a8;
  uint uStack_a0;
  code *******pppppppcStack_90;
  code *******pppppppcStack_88;
  undefined8 uStack_80;
  long lStack_78;
  uint uStack_70;
  
  while (*(int *)param_1[6] == 0xb) {
    (*(code *)(*param_1)[0x17])(param_1);
  }
  if (*(int *)param_1[6] == 9) {
    pppppppcVar31 = param_1;
    (*(code *)(*param_1)[5])();
    if (((pppppppcVar31[1][2] == (code *****)0x0) ||
        (pppppppcVar31 = param_1, (*(code *)(*param_1)[5])(), *(char *)pppppppcVar31[1][1] == '\r'))
       || (pppppppcVar31 = param_1, (*(code *)(*param_1)[5])(), *(char *)pppppppcVar31[1][1] == '\n'
          )) {
      (*(code *)(*param_1[0x1c])[0x13])();
    }
    (*(code *)(*param_1)[0x17])(param_1);
    return (code *******)0x0;
  }
  pppppppcVar31 = param_1;
  (*(code *)(*param_1)[5])();
  ppppppcVar30 = pppppppcVar31[1];
  ppppppcStack_b8 = (code ******)ppppppcVar30[1];
  pppppcStack_c0 = *ppppppcVar30;
  pppppcStack_b0 = ppppppcVar30[2];
  uStack_a0 = *(uint *)(ppppppcVar30 + 4);
  if (uStack_a0 < 0x41) {
    pppppcStack_a8 = ppppppcVar30[3];
  }
  else {
    pppppcVar32 = (code *****)((ulong)uStack_a0 + 0x3f >> 3 & 0x3ffffff8);
    __Znam();
    pppppcStack_a8 = pppppcVar32;
    _memcpy();
  }
  ppppppcVar30 = ppppppcStack_b8;
  ppppppcStack_c8 = ppppppcStack_b8;
  pppppppcStack_e0 = (code *******)0x0;
  pppppppcStack_d8 = (code *******)0x0;
  param_1[0x22] = ppppppcStack_b8;
  iVar33 = *(int *)param_1[6];
  if (iVar33 < 0x16) {
    if (iVar33 == 4) {
      pppppppcVar31 = param_1;
      (*(code *)(*param_1)[5])();
      ppppppcVar24 = pppppppcVar31[1] + 3;
      if (0x40 < *(uint *)(pppppppcVar31[1] + 4)) {
        ppppppcVar24 = (code ******)*ppppppcVar24;
      }
      pppppppcVar31 = (code *******)*ppppppcVar24;
      if ((long)pppppppcVar31 < 0) {
        if ((*(byte *)((long)param_1 + 0x121) & 1) == 0) {
          (*(code *)(*param_1)[0x17])(param_1);
          pppppppcStack_90 = (code *******)&UNK_10f5fbd4c;
          uStack_70 = CONCAT22(uStack_70._2_2_,0x103);
          FUN_109dd98f8(param_1,ppppppcVar30,&pppppppcStack_90,0,0);
          pppppppcVar31 = param_1;
          goto LAB_109dbf898;
        }
LAB_109dbec18:
        pppppppcStack_d8 = (code *******)0x0;
        pppppppcStack_e0 = (code *******)0x10ef12930;
      }
      else {
        pppppppcVar14 = param_1;
        (*(code *)(*param_1)[5])();
        pppppppcStack_d8 = (code *******)pppppppcVar14[1][2];
        pppppppcStack_e0 = (code *******)pppppppcVar14[1][1];
        (*(code *)(*param_1)[0x17])(param_1);
        if ((*(int *)param_1[6] != 10) && ((*(byte *)((long)param_1 + 0x121) & 1) == 0)) {
          (*(code *)(*param_1)[0x17])(param_1);
          pppppppcStack_90 = (code *******)&UNK_10f5fbd4c;
          uStack_70 = CONCAT22(uStack_70._2_2_,0x103);
          FUN_109dd98f8(param_1,ppppppcVar30,&pppppppcStack_90,0,0);
          pppppppcVar31 = param_1;
          goto LAB_109dbf898;
        }
      }
      goto LAB_109dbea14;
    }
    if (iVar33 != 8) {
      if (iVar33 != 0x15) goto LAB_109dbeb44;
      (*(code *)(*param_1)[0x17])(param_1);
      pppppppcStack_e0 = (code *******)&DAT_10f2da0fd;
      goto LAB_109dbea0c;
    }
    FUN_109dc0854(param_1,ppppppcStack_b8,param_1[0x2b] == param_1[0x2c]);
    goto LAB_109dbeb3c;
  }
  if (iVar33 == 0x16) {
    (*(code *)(*param_1)[0x17])(param_1);
    pppppppcStack_e0 = (code *******)&DAT_10f2da10d;
  }
  else if (iVar33 == 0x17) {
    ppppppcVar24 = param_1[1];
    (*(code *)(*ppppppcVar24)[0x12])();
    if ((int)ppppppcVar24 == 0) goto LAB_109dbeb44;
    (*(code *)(*param_1)[0x17])(param_1);
    pppppppcStack_e0 = (code *******)0x10f2b3b49;
  }
  else {
    if (iVar33 != 0x18) {
LAB_109dbeb44:
      pppppppcVar31 = param_1;
      (*(code *)(*param_1)[0x18])(param_1,&pppppppcStack_e0);
      if ((int)pppppppcVar31 != 0) {
        if ((*(byte *)((long)param_1 + 0x121) & 1) == 0) {
          (*(code *)(*param_1)[0x17])(param_1);
          pppppppcStack_90 = (code *******)&UNK_10f5fbd4c;
          uStack_70 = CONCAT22(uStack_70._2_2_,0x103);
          FUN_109dd98f8(param_1,ppppppcVar30,&pppppppcStack_90,0,0);
          pppppppcVar31 = param_1;
          goto LAB_109dbf898;
        }
        pppppppcVar31 = (code *******)0xffffffffffffffff;
        goto LAB_109dbec18;
      }
      pppppppcVar31 = (code *******)0xffffffffffffffff;
      goto LAB_109dbea14;
    }
    (*(code *)(*param_1)[0x17])(param_1);
    pppppppcStack_e0 = (code *******)&DAT_10f62a9de;
  }
LAB_109dbea0c:
  pppppppcVar31 = (code *******)0xffffffffffffffff;
  pppppppcStack_d8 = (code *******)0x1;
LAB_109dbea14:
  FUN_109e037bc(&pppppppcStack_90,&pppppppcStack_e0);
  pppppppcVar9 = uStack_80;
  pppppppcVar19 = pppppppcStack_90;
  pppppppcVar14 = param_1 + 100;
  pppppppcVar17 = pppppppcStack_90;
  if (-1 < (long)uStack_80._7_1_) {
    pppppppcVar17 = (code *******)&pppppppcStack_90;
  }
  pppppppcVar3 = pppppppcStack_88;
  if (-1 < (long)uStack_80) {
    pppppppcVar3 = (code *******)(long)uStack_80._7_1_;
  }
  pppppppcVar13 = pppppppcVar14;
  FUN_109e03610(pppppppcVar14,pppppppcVar17,pppppppcVar3);
  ppppppcVar24 = *pppppppcVar14;
  if ((int)pppppppcVar13 == -1) {
    uVar26 = (ulong)*(uint *)(param_1 + 0x65);
  }
  else {
    uVar26 = (ulong)(int)pppppppcVar13;
  }
  ppppppcVar2 = ppppppcVar24 + uVar26;
  if ((long)pppppppcVar9 < 0) {
    __ZdlPv(pppppppcVar19);
    ppppppcVar24 = *pppppppcVar14;
  }
  if (ppppppcVar2 != ppppppcVar24 + *(uint *)(param_1 + 0x65)) {
    iVar33 = *(int *)(*ppppppcVar2 + 1);
    bVar11 = true;
    switch(iVar33) {
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
      FUN_109dc9828(param_1 + 0x25,(char *)((long)param_1 + 0x11c));
      pcVar1 = (char *)((long)param_1 + 0x11c);
      pcVar1[0] = '\x01';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      if (*(char *)((long)param_1 + 0x121) == '\x01') goto code_r0x000109dbeb2c;
      pppppppcVar31 = param_1;
      (*(code *)(*param_1)[0x20])(param_1,&pppppppcStack_90);
      if ((((ulong)pppppppcVar31 & 1) != 0) ||
         (pppppppcVar31 = param_1, FUN_109dd9860(), ((ulong)pppppppcVar31 & 1) != 0))
      goto LAB_109dbf840;
      if (iVar33 < 0x55) {
        if (iVar33 != 0x52) {
          if (iVar33 != 0x53) {
            pppppppcStack_90 = (code *******)~(ulong)pppppppcStack_90;
            goto code_r0x000109dbf850;
          }
          pppppppcStack_90 = (code *******)(ulong)(pppppppcStack_90 == (code *******)0x0);
        }
      }
      else if (iVar33 < 0x57) {
        if (iVar33 == 0x55) {
          pppppppcStack_90 = (code *******)(ulong)(0 < (long)pppppppcStack_90);
        }
        else {
          pppppppcStack_90 = (code *******)(ulong)((long)pppppppcStack_90 < 1);
        }
      }
      else if (iVar33 == 0x57) {
code_r0x000109dbf850:
        pppppppcStack_90 = (code *******)((ulong)pppppppcStack_90 >> 0x3f);
      }
      bVar11 = pppppppcStack_90 == (code *******)0x0;
      bVar10 = !bVar11;
      goto code_r0x000109dbf890;
    case 0x59:
      goto code_r0x000109dbf0a0;
    case 0x5a:
      bVar11 = false;
code_r0x000109dbf0a0:
      pcVar16 = (char *)((long)param_1 + 0x11c);
      FUN_109dc9828(param_1 + 0x25);
      pcVar1 = (char *)((long)param_1 + 0x11c);
      pcVar1[0] = '\x01';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      ppppppcVar30 = *param_1;
      if ((*(byte *)((long)param_1 + 0x121) & 1) == 0) {
        (*(code *)ppppppcVar30[0x19])(param_1);
        pppppppcVar31 = param_1;
        FUN_109dd9860();
        if (((ulong)pppppppcVar31 & 1) == 0) {
          bVar10 = pcVar16 == (char *)0x0;
code_r0x000109dbf888:
          bVar11 = (bool)(bVar11 ^ bVar10);
          bVar10 = (bool)(bVar11 ^ 1);
code_r0x000109dbf890:
          *(bool *)(param_1 + 0x24) = bVar10;
code_r0x000109dbf894:
          *(bool *)((long)param_1 + 0x121) = bVar11;
          pppppppcVar31 = (code *******)0x0;
          break;
        }
        goto LAB_109dbf840;
      }
code_r0x000109dbeb30:
      (*(code *)ppppppcVar30[0x1c])(param_1);
      goto LAB_109dbeb3c;
    case 0x5b:
      goto code_r0x000109dbef18;
    case 0x5c:
      if (*(int *)param_1[6] != 3) {
        pppppppcStack_90 = (code *******)&UNK_10f5fbdda;
        uStack_70 = CONCAT22(uStack_70._2_2_,0x103);
        pppppppcVar31 = param_1;
        (*(code *)(*param_1)[5])();
        FUN_109dd98f8(param_1,pppppppcVar31[0xc],&pppppppcStack_90,0,0);
        goto LAB_109dbf840;
      }
code_r0x000109dbefa8:
      pppppppcVar14 = param_1;
      (*(code *)(*param_1)[5])();
      pppppppcVar31 = (code *******)pppppppcVar14[1][1];
      pppppcVar32 = pppppppcVar14[1][2];
      uVar26 = (ulong)(pppppcVar32 != (code *****)0x0);
      if (pppppcVar32 != (code *****)0x0) {
        pppppppcVar31 = (code *******)((long)pppppppcVar31 + 1);
      }
      uVar34 = uVar26;
      if (uVar26 <= (long)pppppcVar32 - 1U) {
        uVar34 = (long)pppppcVar32 - 1U;
      }
      uVar4 = 0;
      if (pppppcVar32 != (code *****)0x0) {
        uVar4 = uVar34;
      }
      (*(code *)(*param_1)[0x17])(param_1);
      if (*(int *)param_1[6] != 0x19) {
        if (bVar11) {
          pppppppcStack_90 = (code *******)&UNK_10f5fbe3c;
          uStack_70 = CONCAT22(uStack_70._2_2_,0x103);
          pppppppcVar31 = param_1;
          (*(code *)(*param_1)[5])();
          FUN_109dd98f8(param_1,pppppppcVar31[0xc],&pppppppcStack_90,0,0);
        }
        else {
          pppppppcStack_90 = (code *******)&UNK_10f5fbe75;
          uStack_70 = CONCAT22(uStack_70._2_2_,0x103);
          pppppppcVar31 = param_1;
          (*(code *)(*param_1)[5])();
          FUN_109dd98f8(param_1,pppppppcVar31[0xc],&pppppppcStack_90,0,0);
        }
        goto LAB_109dbf840;
      }
      (*(code *)(*param_1)[0x17])(param_1);
      if (*(int *)param_1[6] != 3) {
        if (bVar11) {
          pppppppcStack_90 = (code *******)&UNK_10f5fbdda;
          uStack_70 = CONCAT22(uStack_70._2_2_,0x103);
          pppppppcVar31 = param_1;
          (*(code *)(*param_1)[5])();
          FUN_109dd98f8(param_1,pppppppcVar31[0xc],&pppppppcStack_90,0,0);
        }
        else {
          pppppppcStack_90 = (code *******)&UNK_10f5fbe0b;
          uStack_70 = CONCAT22(uStack_70._2_2_,0x103);
          pppppppcVar31 = param_1;
          (*(code *)(*param_1)[5])();
          FUN_109dd98f8(param_1,pppppppcVar31[0xc],&pppppppcStack_90,0,0);
        }
        goto LAB_109dbf840;
      }
      pppppppcVar17 = param_1;
      (*(code *)(*param_1)[5])();
      pppppppcVar14 = (code *******)pppppppcVar17[1][1];
      pppppcVar32 = pppppppcVar17[1][2];
      uVar34 = (ulong)(pppppcVar32 != (code *****)0x0);
      if (pppppcVar32 != (code *****)0x0) {
        pppppppcVar14 = (code *******)((long)pppppppcVar14 + 1);
      }
      uVar5 = uVar34;
      if (uVar34 <= (long)pppppcVar32 - 1U) {
        uVar5 = (long)pppppcVar32 - 1U;
      }
      uVar6 = 0;
      if (pppppcVar32 != (code *****)0x0) {
        uVar6 = uVar5;
      }
      (*(code *)(*param_1)[0x17])(param_1);
      pcVar1 = (char *)((long)param_1 + 0x11c);
      FUN_109dc9828(param_1 + 0x25,pcVar1);
      puVar21 = (undefined *)(uVar4 - uVar26);
      pcVar1[0] = '\x01';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      if (puVar21 != (undefined *)(uVar6 - uVar34)) goto code_r0x000109dbf5ec;
      if (uVar4 == uVar26) goto code_r0x000109dbf880;
      goto code_r0x000109dbf1d0;
    case 0x5d:
      bVar11 = false;
code_r0x000109dbef18:
      FUN_109dc9828(param_1 + 0x25,(char *)((long)param_1 + 0x11c));
      pcVar1 = (char *)((long)param_1 + 0x11c);
      pcVar1[0] = '\x01';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      if ((*(byte *)((long)param_1 + 0x121) & 1) == 0) {
        pppppppcVar31 = param_1;
        (*(code *)(*param_1)[5])();
        pppppppcVar31 = (code *******)pppppppcVar31[1][1];
        while (0x19 < *(uint *)param_1[6] ||
               (1 << (ulong)(*(uint *)param_1[6] & 0x1f) & 0x2000201U) == 0) {
          FUN_109dc0bd8(param_1 + 5);
        }
        pppppppcVar14 = param_1;
        (*(code *)(*param_1)[5])();
        pppppppcStack_130 = (code *******)((long)pppppppcVar14[1][1] - (long)pppppppcVar31);
        pppppppcStack_90 = (code *******)&UNK_10f5aef41;
        uStack_70 = CONCAT22(uStack_70._2_2_,0x103);
        pppppppcVar17 = (code *******)0x19;
        pppppppcVar14 = param_1;
        pppppppcStack_138 = pppppppcVar31;
        func_0x000109dd9a7c(param_1,0x19,&pppppppcStack_90);
        if ((int)pppppppcVar14 != 0) goto LAB_109dbf840;
        pppppppcVar31 = param_1;
        (*(code *)(*param_1)[0x19])();
        pppppppcVar14 = param_1;
        pppppppcStack_90 = pppppppcVar31;
        pppppppcStack_88 = pppppppcVar17;
        FUN_109dd9860();
        if (((ulong)pppppppcVar14 & 1) != 0) goto LAB_109dbf840;
        puVar21 = &UNK_10f57e81c;
        pppppppcVar31 = (code *******)&pppppppcStack_138;
        func_0x000109d5d4c8(pppppppcVar31,&UNK_10f57e81c,6);
        puVar18 = &UNK_10f57e81c;
        pppppppcVar14 = (code *******)&pppppppcStack_90;
        func_0x000109d5d4c8(pppppppcVar14,&UNK_10f57e81c,6);
        if (puVar21 == puVar18) {
          if (puVar21 == (undefined *)0x0) {
code_r0x000109dbf880:
            bVar10 = true;
          }
          else {
code_r0x000109dbf1d0:
            _memcmp(pppppppcVar31,pppppppcVar14,puVar21);
            bVar10 = (int)pppppppcVar31 == 0;
          }
        }
        else {
code_r0x000109dbf5ec:
          bVar10 = false;
        }
        goto code_r0x000109dbf888;
      }
code_r0x000109dbeb2c:
      ppppppcVar30 = *param_1;
      goto code_r0x000109dbeb30;
    case 0x5e:
      if (*(int *)param_1[6] == 3) {
        bVar11 = false;
        goto code_r0x000109dbefa8;
      }
      pppppppcStack_90 = (code *******)&UNK_10f5fbe0b;
      uStack_70 = CONCAT22(uStack_70._2_2_,0x103);
      pppppppcVar31 = param_1;
      (*(code *)(*param_1)[5])();
      FUN_109dd98f8(param_1,pppppppcVar31[0xc],&pppppppcStack_90,0,0);
      goto LAB_109dbf840;
    case 0x5f:
      goto code_r0x000109dbec68;
    case 0x60:
    case 0x61:
      bVar11 = false;
code_r0x000109dbec68:
      pppppppcStack_138 = (code *******)0x0;
      pppppppcStack_130 = (code *******)0x0;
      FUN_109dc9828(param_1 + 0x25,(char *)((long)param_1 + 0x11c));
      pcVar1 = (char *)((long)param_1 + 0x11c);
      pcVar1[0] = '\x01';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      if (*(char *)((long)param_1 + 0x121) != '\x01') {
        pppppppcVar31 = param_1;
        (*(code *)(*param_1)[0x18])(param_1,&pppppppcStack_138);
        pppppppcStack_90 = (code *******)&UNK_10f5fbeae;
        uStack_70 = CONCAT22(uStack_70._2_2_,0x103);
        pppppppcVar14 = param_1;
        (*(code *)(*param_1)[5])();
        if (((ulong)pppppppcVar31 & 1) != 0) {
          FUN_109dd98f8(param_1,pppppppcVar14[1][1],&pppppppcStack_90,0,0);
          goto LAB_109dbf840;
        }
        pppppppcVar31 = param_1;
        FUN_109dd9860();
        if (((ulong)pppppppcVar31 & 1) != 0) goto LAB_109dbf840;
        pppppppcVar31 = param_1;
        (*(code *)(*param_1)[6])();
        uStack_70 = CONCAT22(uStack_70._2_2_,0x105);
        pppppppcStack_90 = pppppppcStack_138;
        pppppppcStack_88 = pppppppcStack_130;
        FUN_109da83b8();
        if (bVar11) {
          if (pppppppcVar31 == (code *******)0x0) {
            bVar11 = false;
          }
          else {
            func_0x000109da4494();
            bVar11 = pppppppcVar31 != (code *******)0x0;
          }
        }
        else if (pppppppcVar31 == (code *******)0x0) {
          bVar11 = true;
        }
        else {
          func_0x000109da4494();
          bVar11 = pppppppcVar31 == (code *******)0x0;
        }
        *(bool *)(param_1 + 0x24) = bVar11;
        bVar11 = (bool)(bVar11 ^ 1);
        goto code_r0x000109dbf894;
      }
      (*(code *)(*param_1)[0x1c])(param_1);
      goto LAB_109dbeb3c;
    case 0x62:
      func_0x000109dc0930(param_1,ppppppcVar30);
      pppppppcVar31 = param_1;
      break;
    case 99:
      func_0x000109dc0a20(param_1,ppppppcVar30);
      pppppppcVar31 = param_1;
      break;
    case 100:
      func_0x000109dc0ad8(param_1,ppppppcVar30);
      pppppppcVar31 = param_1;
      break;
    default:
      goto LAB_109dbeb24;
    }
    goto LAB_109dbf898;
  }
  iVar33 = 0;
LAB_109dbeb24:
  if ((*(byte *)((long)param_1 + 0x121) & 1) != 0) goto code_r0x000109dbeb2c;
  iVar12 = *(int *)param_1[6];
  if (iVar12 == 10) {
    ppppppcVar24 = param_1[1];
    (*(code *)(*ppppppcVar24)[0x11])(ppppppcVar24,&pppppcStack_c0);
    if (((ulong)ppppppcVar24 & 1) != 0) {
      pppppppcVar14 = param_1;
      (*(code *)(*param_1)[0x21])();
      if (((ulong)pppppppcVar14 & 1) == 0) {
        (*(code *)(*param_1)[0x17])(param_1);
        pppppppcVar17 = pppppppcStack_d8;
        pppppppcVar14 = pppppppcStack_e0;
        if ((pppppppcStack_d8 == (code *******)0x1) && (*(char *)pppppppcStack_e0 == '.')) {
          pppppppcStack_90 = (code *******)&UNK_10f5fbd73;
          uStack_70 = CONCAT22(uStack_70._2_2_,0x103);
          FUN_109dd98f8(param_1,ppppppcVar30,&pppppppcStack_90,0,0);
          pppppppcVar31 = param_1;
          goto LAB_109dbf898;
        }
        if (pppppppcVar31 == (code *******)0xffffffffffffffff) {
          if ((param_3 != (code *******)0x0) && ((*(byte *)((long)param_1 + 0x31d) & 1) != 0)) {
            pppppppcVar31 = param_1;
            (*(code *)(*param_1)[4])(param_1);
            (*(code *)(*param_3)[3])
                      (param_3,pppppppcVar14,pppppppcVar17,pppppppcVar31,ppppppcVar30,1);
            FUN_109dc0b70(*(undefined8 *)(param_2 + 0x58),7,ppppppcVar30,pppppppcStack_d8,param_3,
                          pppppppcVar14);
            pppppppcStack_e0 = param_3;
            pppppppcStack_d8 = pppppppcVar14;
          }
          pppppppcVar14 = param_1;
          (*(code *)(*param_1)[6])(param_1);
          uStack_70 = CONCAT22(uStack_70._2_2_,0x105);
          pppppppcStack_90 = pppppppcStack_e0;
          pppppppcStack_88 = pppppppcStack_d8;
          pppppppcVar31 = (code *******)&pppppppcStack_90;
          FUN_109da7538();
        }
        else {
          pppppppcVar14 = (code *******)param_1[0x1b];
          func_0x000109da8348(pppppppcVar14);
        }
        pppppppcVar17 = param_1;
        (*(code *)(*param_1)[5])();
        if (*(int *)pppppppcVar17[1] == 0x25) {
          pppppppcVar17 = param_1;
          (*(code *)(*param_1)[0x19])();
          FUN_109dc0bd8(param_1 + 5);
          pppppppcStack_90 = (code *******)CONCAT44(pppppppcStack_90._4_4_,9);
          uStack_70 = 0x40;
          lStack_78 = 0;
          *(char *)((long)param_1 + 0x93) = '\0';
          pppppppcStack_88 = pppppppcVar17;
          uStack_80 = pppppppcVar31;
          FUN_109db8164(param_1 + 6,param_1[6],&pppppppcStack_90);
          if ((0x40 < uStack_70) && (lStack_78 != 0)) {
            __ZdaPv();
          }
        }
        pppppppcVar31 = param_1;
        (*(code *)(*param_1)[5])();
        if (*(int *)pppppppcVar31[1] == 9) {
          (*(code *)(*param_1)[0x17])(param_1);
        }
        pppppppcVar31 = param_1;
        (*(code *)(*param_1)[0xd])(param_1,pppppppcStack_e0,pppppppcStack_d8);
        if (((ulong)pppppppcVar31 & 1) == 0) {
          (*(code *)(*param_1[1])[0x14])(param_1[1],pppppppcVar14,ppppppcVar30);
          if (((ulong)param_1[1][7] & 1) == 0) {
            (*(code *)(*param_1[0x1c])[0x18])(param_1[0x1c],pppppppcVar14,ppppppcVar30);
          }
          pppppppcVar31 = param_1;
          FUN_109dc0c88();
          if ((int)pppppppcVar31 != 0) {
            pppppppcVar31 = param_1;
            (*(code *)(*param_1)[7])(param_1);
            pppppppcVar17 = param_1;
            (*(code *)(*param_1)[4])(param_1);
            FUN_109dad5f4(pppppppcVar14,pppppppcVar31,pppppppcVar17,&ppppppcStack_c8);
          }
          (*(code *)(*param_1[1])[0x15])(param_1[1],pppppppcVar14);
        }
        goto LAB_109dbeb3c;
      }
      goto LAB_109dbf840;
    }
    iVar12 = *(int *)param_1[6];
  }
  if (iVar12 == 0x1b) {
    ppppppcVar24 = param_1[1];
    (*(code *)(*ppppppcVar24)[0x10])();
    if ((int)ppppppcVar24 != 0) {
      (*(code *)(*param_1)[0x17])(param_1);
      FUN_109dc0e68(param_1,pppppppcStack_e0,pppppppcStack_d8,2);
      pppppppcVar31 = param_1;
      goto LAB_109dbf898;
    }
  }
  pppppppcVar31 = pppppppcStack_d8;
  if (((ulong)param_1[0x34] & 1) != 0) {
    pppppppcVar17 = param_1;
    (*(code *)(*param_1)[6])();
    pppppppcVar31 = pppppppcStack_d8;
    pppppppcVar14 = pppppppcVar17 + 0x102;
    FUN_109e03610(pppppppcVar14,pppppppcStack_e0,pppppppcStack_d8);
    iVar12 = (int)pppppppcVar14;
    if ((iVar12 != -1) && ((long)iVar12 != (ulong)*(uint *)(pppppppcVar17 + 0x103))) {
      FUN_109dc122c(param_1,pppppppcVar17[0x102][iVar12] + 1,ppppppcVar30);
      pppppppcVar31 = param_1;
      goto LAB_109dbf898;
    }
  }
  if (((pppppppcVar31 == (code *******)0x0) || (pppppppcVar31 == (code *******)0x1)) ||
     (*(char *)pppppppcStack_e0 != '.')) {
    if (*(char *)((long)param_1 + 0x31d) == '\x01') {
      if (pppppppcVar31 == (code *******)0x4) {
        if ((*(int *)pppppppcStack_e0 == 0x6e657665) || (*(int *)pppppppcStack_e0 == 0x4e455645)) {
          FUN_109dc9258(*(undefined8 *)(param_2 + 0x58),1,ppppppcVar30,4);
        }
      }
      else if (pppppppcVar31 == (code *******)0x6) {
        if ((*(int *)pppppppcStack_e0 == 0x6d655f5f &&
             *(short *)((long)pppppppcStack_e0 + 4) == 0x7469) ||
           (*(int *)pppppppcStack_e0 == 0x4d455f5f &&
            *(short *)((long)pppppppcStack_e0 + 4) == 0x5449)) {
LAB_109dbf460:
          FUN_109dc8fa4(param_1,ppppppcVar30,param_2,pppppppcVar31);
          pppppppcVar31 = param_1;
          goto LAB_109dbf898;
        }
      }
      else if (pppppppcVar31 == (code *******)0x5) {
        if ((*(int *)pppppppcStack_e0 == 0x696d655f && *(char *)((long)pppppppcStack_e0 + 4) == 't')
           || (*(int *)pppppppcStack_e0 == 0x494d455f &&
               *(char *)((long)pppppppcStack_e0 + 4) == 'T')) goto LAB_109dbf460;
        if ((*(int *)pppppppcStack_e0 == 0x67696c61 && *(char *)((long)pppppppcStack_e0 + 4) == 'n')
           || (*(int *)pppppppcStack_e0 == 0x47494c41 &&
               *(char *)((long)pppppppcStack_e0 + 4) == 'N')) {
          FUN_109dc90fc(param_1,ppppppcVar30,param_2);
          pppppppcVar31 = param_1;
          goto LAB_109dbf898;
        }
      }
    }
    pppppppcVar17 = param_1;
    (*(code *)(*param_1)[0x21])();
    uVar8 = uStack_a0;
    pppppppcVar14 = pppppppcStack_d8;
    pppppppcVar31 = pppppppcStack_e0;
    if (((ulong)pppppppcVar17 & 1) == 0) {
      ppppppcStack_188 = ppppppcStack_b8;
      pppppcStack_190 = pppppcStack_c0;
      pppppcStack_180 = pppppcStack_b0;
      uStack_170 = uStack_a0;
      if (uStack_a0 < 0x41) {
        pppppcStack_178 = pppppcStack_a8;
        pppppcVar32 = pppppcStack_a8;
      }
      else {
        pppppcVar32 = (code *****)((ulong)uStack_a0 + 0x3f >> 3 & 0x3ffffff8);
        __Znam();
        pppppcStack_178 = pppppcVar32;
        _memcpy();
      }
      FUN_109dc92bc(param_1,param_2,pppppppcVar31,pppppppcVar14,&pppppcStack_190,ppppppcVar30);
      pppppppcVar31 = param_1;
      if ((0x40 < uVar8) && (pppppcVar32 != (code *****)0x0)) {
        __ZdaPv(pppppcVar32);
      }
      goto LAB_109dbf898;
    }
    goto LAB_109dbf840;
  }
  ppppppcVar24 = param_1[1];
  pppppppcVar31 = param_1;
  (*(code *)(*param_1)[7])(param_1);
  (*(code *)(*ppppppcVar24)[0x16])(ppppppcVar24,pppppppcVar31);
  pppppppcVar31 = param_1;
  (*(code *)(*param_1)[5])();
  pppppcVar32 = pppppppcVar31[1][1];
  ppppppcVar24 = param_1[1];
  ppppppcStack_108 = ppppppcStack_b8;
  pppppcStack_110 = pppppcStack_c0;
  pppppcStack_100 = pppppcStack_b0;
  uStack_f0 = uStack_a0;
  if (uStack_a0 < 0x41) {
    pppppcStack_f8 = pppppcStack_a8;
  }
  else {
    pppppcVar15 = (code *****)((ulong)uStack_a0 + 0x3f >> 3 & 0x3ffffff8);
    __Znam();
    pppppcStack_f8 = pppppcVar15;
    _memcpy();
  }
  (*(code *)(*ppppppcVar24)[8])(ppppppcVar24,&pppppcStack_110);
  if ((0x40 < uStack_f0) && (pppppcStack_f8 != (code *****)0x0)) {
    __ZdaPv();
  }
  pppppppcVar31 = (code *******)(ulong)(*(int *)(param_1 + 3) != 0);
  if ((*(int *)(param_1 + 3) != 0) || ((((uint)ppppppcVar24 ^ 1) & 1) != 0)) goto LAB_109dbf898;
  pppppppcVar31 = param_1;
  (*(code *)(*param_1)[5])();
  if (pppppppcVar31[1][1] != pppppcVar32) goto LAB_109dbf840;
  pppppppcVar31 = param_1;
  (*(code *)(*param_1)[5])();
  pppppppcVar17 = pppppppcStack_d8;
  pppppppcVar14 = pppppppcStack_e0;
  if (pppppppcVar31[1][1] != pppppcVar32) goto LAB_109dbeb3c;
  pppppppcVar31 = param_1 + 0x28;
  pppppppcVar19 = pppppppcStack_e0;
  FUN_109dc16fc(pppppppcVar31,pppppppcStack_e0,pppppppcStack_d8);
  if (pppppppcVar31 != (code *******)0x0) {
    (*(code *)pppppppcVar19)();
    goto LAB_109dbf898;
  }
  uVar25 = 0;
  uVar20 = 0;
  uVar27 = 0;
  uVar28 = 0;
  puVar21 = &DAT_10e05ae44;
  uVar23 = 2;
  uVar22 = 1;
  lVar29 = 0xe0;
  uVar7 = pppppppcStack_138._4_4_;
  switch(iVar33) {
  case 1:
  case 2:
    goto code_r0x000109dbfea0;
  case 3:
    uVar25 = 1;
    goto code_r0x000109dbfea0;
  case 4:
    pppppppcStack_138 = (code *******)((ulong)pppppppcStack_138._1_7_ << 8);
    pppppppcStack_88 = (code *******)&pppppppcStack_138;
    pppppppcStack_90 = param_1;
    FUN_109dd9d40(param_1,FUN_109dcb7b0,&pppppppcStack_90,1);
    pppppppcVar31 = param_1;
    break;
  case 5:
  case 6:
    pppppppcStack_138 = (code *******)CONCAT71(pppppppcStack_138._1_7_,1);
    pppppppcStack_88 = (code *******)&pppppppcStack_138;
    pppppppcStack_90 = param_1;
    FUN_109dd9d40(param_1,FUN_109dcb7b0,&pppppppcStack_90,1);
    pppppppcVar31 = param_1;
    break;
  case 7:
  case 0x14:
    pppppppcStack_138 = (code *******)CONCAT44(uVar7,1);
    pppppppcStack_88 = (code *******)&pppppppcStack_138;
    pppppppcStack_90 = param_1;
    FUN_109dd9d40(param_1,FUN_109dcb8f0,&pppppppcStack_90,1);
    pppppppcVar31 = param_1;
    break;
  case 8:
  case 10:
  case 0xb:
  case 0x12:
  case 0x18:
    pppppppcStack_138 = (code *******)CONCAT44(uVar7,2);
    pppppppcStack_88 = (code *******)&pppppppcStack_138;
    pppppppcStack_90 = param_1;
    FUN_109dd9d40(param_1,FUN_109dcb8f0,&pppppppcStack_90,1);
    pppppppcVar31 = param_1;
    break;
  case 9:
    FUN_109dc80c8(param_1,ppppppcVar30);
    pppppppcVar31 = param_1;
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x16:
    pppppppcStack_138 = (code *******)CONCAT44(uVar7,4);
    pppppppcStack_88 = (code *******)&pppppppcStack_138;
    pppppppcStack_90 = param_1;
    FUN_109dd9d40(param_1,FUN_109dcb8f0,&pppppppcStack_90,1);
    pppppppcVar31 = param_1;
    break;
  case 0xf:
  case 0x10:
    pppppppcStack_138 = (code *******)CONCAT44(uVar7,8);
    pppppppcStack_88 = (code *******)&pppppppcStack_138;
    pppppppcStack_90 = param_1;
    FUN_109dd9d40(param_1,FUN_109dcb8f0,&pppppppcStack_90,1);
    pppppppcVar31 = param_1;
    break;
  case 0x11:
    pppppppcStack_90 = param_1;
    FUN_109dd9d40(param_1,FUN_109dcba4c,&pppppppcStack_90,1);
    pppppppcVar31 = param_1;
    break;
  case 0x13:
    pppppppcVar31 = param_1;
    (*(code *)(*param_1)[6])();
    pppppppcStack_138 =
         (code *******)CONCAT44(pppppppcStack_138._4_4_,*(undefined4 *)(pppppppcVar31[0x12] + 1));
    pppppppcStack_88 = (code *******)&pppppppcStack_138;
    pppppppcStack_90 = param_1;
    FUN_109dd9d40(param_1,FUN_109dcb8f0,&pppppppcStack_90,1);
    pppppppcVar31 = param_1;
    break;
  case 0x15:
  case 0x2b:
    pppppppcStack_88 = (code *******)&DAT_10e05ae44;
    pppppppcStack_90 = param_1;
    FUN_109dd9d40(param_1,FUN_109dcbd88,&pppppppcStack_90,1);
    pppppppcVar31 = param_1;
    break;
  case 0x17:
  case 0x29:
  case 0x2a:
    pppppppcStack_88 = (code *******)&DAT_10e05ae30;
    pppppppcStack_90 = param_1;
    FUN_109dd9d40(param_1,FUN_109dcbd88,&pppppppcStack_90,1);
    pppppppcVar31 = param_1;
    break;
  case 0x19:
  case 0x20:
    uStack_118 = 0x105;
    pppppppcStack_138 = pppppppcVar14;
    pppppppcStack_130 = pppppppcVar17;
    apuStack_160[0] = &UNK_10f5fbd9f;
    uStack_140 = 0x103;
    FUN_109d35b30(&pppppppcStack_90,&pppppppcStack_138,apuStack_160);
    pppppppcVar31 = param_1;
    (*(code *)(*param_1)[5])();
    FUN_109dd98f8(param_1,pppppppcVar31[0xc],&pppppppcStack_90,0,0);
    goto LAB_109dbf840;
  case 0x1a:
  case 0x1f:
    goto code_r0x000109dc0010;
  case 0x1b:
    uVar23 = 1;
    goto code_r0x000109dc0010;
  case 0x1c:
    goto code_r0x000109dbfd2c;
  case 0x1d:
    uVar23 = 4;
code_r0x000109dc0010:
    FUN_109dc8384(param_1,pppppppcVar14,pppppppcVar17,uVar23);
    pppppppcVar31 = param_1;
    break;
  case 0x1e:
    puVar21 = &DAT_10e05ae30;
code_r0x000109dbfd2c:
    FUN_109dc85a8(param_1,pppppppcVar14,pppppppcVar17,puVar21);
    pppppppcVar31 = param_1;
    break;
  case 0x21:
  case 0x27:
    goto code_r0x000109dc0058;
  case 0x22:
    uVar23 = 1;
    goto code_r0x000109dc0058;
  case 0x23:
    uVar23 = 8;
    goto code_r0x000109dc0058;
  case 0x24:
  case 0x26:
    uVar23 = 4;
    goto code_r0x000109dc0058;
  case 0x25:
  case 0x28:
    uVar23 = 0xc;
code_r0x000109dc0058:
    FUN_109dc8764(param_1,pppppppcVar14,pppppppcVar17,uVar23);
    pppppppcVar31 = param_1;
    break;
  case 0x2c:
    pppppppcVar31 = param_1;
    (*(code *)(*param_1)[6])();
    FUN_109dc1818(param_1,(*(byte *)((long)pppppppcVar31[0x12] + 0x153) ^ 0xff) & 1,1);
    pppppppcVar31 = param_1;
    break;
  case 0x2d:
    pppppppcVar31 = param_1;
    (*(code *)(*param_1)[6])();
    FUN_109dc1818(param_1,(*(byte *)((long)pppppppcVar31[0x12] + 0x153) ^ 0xff) & 1,4);
    pppppppcVar31 = param_1;
    break;
  case 0x2e:
    goto code_r0x000109dc0038;
  case 0x2f:
    uVar20 = 0;
    uVar22 = 2;
    goto code_r0x000109dc0038;
  case 0x30:
    uVar20 = 0;
    uVar22 = 4;
    goto code_r0x000109dc0038;
  case 0x31:
    goto code_r0x000109dbfe48;
  case 0x32:
    uVar22 = 2;
    goto code_r0x000109dbfe48;
  case 0x33:
    uVar22 = 4;
code_r0x000109dbfe48:
    uVar20 = 1;
code_r0x000109dc0038:
    FUN_109dc1818(param_1,uVar20,uVar22);
    pppppppcVar31 = param_1;
    break;
  case 0x34:
    FUN_109dc1c2c(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x35:
    FUN_109dc1cf0(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x36:
    FUN_109dc3444(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x37:
    FUN_109dc34cc(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x38:
    FUN_109dc359c(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x39:
    func_0x000109dc36e4(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x3a:
    FUN_109dc1ef8(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x3b:
    goto code_r0x000109dc0254;
  case 0x3c:
  case 0x3d:
    pppppppcStack_138 = (code *******)CONCAT44(uVar7,9);
    pppppppcStack_88 = (code *******)&pppppppcStack_138;
    pppppppcStack_90 = param_1;
    FUN_109dd9d40(param_1,FUN_109dcc270,&pppppppcStack_90,1);
    pppppppcVar31 = param_1;
    break;
  case 0x3e:
    pppppppcStack_138 = (code *******)CONCAT44(uVar7,0x10);
    pppppppcStack_88 = (code *******)&pppppppcStack_138;
    pppppppcStack_90 = param_1;
    FUN_109dd9d40(param_1,FUN_109dcc270,&pppppppcStack_90,1);
    pppppppcVar31 = param_1;
    break;
  case 0x3f:
    pppppppcStack_138 = (code *******)CONCAT44(uVar7,0x12);
    pppppppcStack_88 = (code *******)&pppppppcStack_138;
    pppppppcStack_90 = param_1;
    FUN_109dd9d40(param_1,FUN_109dcc270,&pppppppcStack_90,1);
    pppppppcVar31 = param_1;
    break;
  case 0x40:
    pppppppcStack_138 = (code *******)CONCAT44(uVar7,0x13);
    pppppppcStack_88 = (code *******)&pppppppcStack_138;
    pppppppcStack_90 = param_1;
    FUN_109dd9d40(param_1,FUN_109dcc270,&pppppppcStack_90,1);
    pppppppcVar31 = param_1;
    break;
  case 0x41:
    pppppppcStack_138 = (code *******)CONCAT44(uVar7,0x15);
    pppppppcStack_88 = (code *******)&pppppppcStack_138;
    pppppppcStack_90 = param_1;
    FUN_109dd9d40(param_1,FUN_109dcc270,&pppppppcStack_90,1);
    pppppppcVar31 = param_1;
    break;
  case 0x42:
    pppppppcStack_138 = (code *******)CONCAT44(uVar7,0x17);
    pppppppcStack_88 = (code *******)&pppppppcStack_138;
    pppppppcStack_90 = param_1;
    FUN_109dd9d40(param_1,FUN_109dcc270,&pppppppcStack_90,1);
    pppppppcVar31 = param_1;
    break;
  case 0x43:
    pppppppcStack_138 = (code *******)CONCAT44(uVar7,0x19);
    pppppppcStack_88 = (code *******)&pppppppcStack_138;
    pppppppcStack_90 = param_1;
    FUN_109dd9d40(param_1,FUN_109dcc270,&pppppppcStack_90,1);
    pppppppcVar31 = param_1;
    break;
  case 0x44:
    pppppppcStack_138 = (code *******)CONCAT44(uVar7,0x1a);
    pppppppcStack_88 = (code *******)&pppppppcStack_138;
    pppppppcStack_90 = param_1;
    FUN_109dd9d40(param_1,FUN_109dcc270,&pppppppcStack_90,1);
    pppppppcVar31 = param_1;
    break;
  case 0x45:
    pppppppcStack_138 = (code *******)CONCAT44(uVar7,0x1b);
    pppppppcStack_88 = (code *******)&pppppppcStack_138;
    pppppppcStack_90 = param_1;
    FUN_109dd9d40(param_1,FUN_109dcc270,&pppppppcStack_90,1);
    pppppppcVar31 = param_1;
    break;
  case 0x46:
    pppppppcStack_138 = (code *******)CONCAT44(uVar7,1);
    pppppppcStack_88 = (code *******)&pppppppcStack_138;
    pppppppcStack_90 = param_1;
    FUN_109dd9d40(param_1,FUN_109dcc270,&pppppppcStack_90,1);
    pppppppcVar31 = param_1;
    break;
  case 0x47:
  case 0x48:
    goto code_r0x000109dbfcd0;
  case 0x49:
    uVar27 = 1;
code_r0x000109dbfcd0:
    FUN_109dc1fd8(param_1,uVar27);
    pppppppcVar31 = param_1;
    break;
  case 0x4a:
    FUN_109dc22d0(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x4b:
    FUN_109dc239c(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x4c:
    FUN_109dc2650(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x4d:
  case 0x4e:
    uStack_118 = 0x105;
    pppppppcStack_138 = pppppppcVar14;
    pppppppcStack_130 = pppppppcVar17;
    apuStack_160[0] = &UNK_10f5fbd9f;
    uStack_140 = 0x103;
    FUN_109d35b30(&pppppppcStack_90,&pppppppcStack_138,apuStack_160);
    pppppppcVar31 = param_1;
    (*(code *)(*param_1)[5])();
    FUN_109dd98f8(param_1,pppppppcVar31[0xc],&pppppppcStack_90,0,0);
    goto LAB_109dbf840;
  case 0x4f:
    FUN_109dc2aac(param_1,ppppppcVar30,pppppppcVar14,pppppppcVar17);
    pppppppcVar31 = param_1;
    break;
  case 0x50:
    FUN_109dc2d70(param_1,ppppppcVar30);
    pppppppcVar31 = param_1;
    break;
  case 0x51:
    FUN_109dc3034(param_1,ppppppcVar30);
    pppppppcVar31 = param_1;
    break;
  default:
    pppppppcStack_90 = (code *******)&UNK_10f5fbdc8;
    uStack_70 = CONCAT22(uStack_70._2_2_,0x103);
    FUN_109dd98f8(param_1,ppppppcVar30,&pppppppcStack_90,0,0);
    pppppppcVar31 = param_1;
    break;
  case 0x65:
  case 0x66:
    func_0x000109dc37a4(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x67:
    FUN_109dc3864(param_1,ppppppcVar30);
    pppppppcVar31 = param_1;
    break;
  case 0x68:
    FUN_109dc41d4(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x69:
    FUN_109dc424c(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x6a:
    pppppppcStack_90 = (code *******)&UNK_10f5fc9be;
    uStack_70 = CONCAT22(uStack_70._2_2_,0x103);
    pppppppcVar31 = param_1;
    (*(code *)(*param_1)[5])();
    FUN_109dd98f8(param_1,pppppppcVar31[0xc],&pppppppcStack_90,0,0);
LAB_109dbf840:
    pppppppcVar31 = (code *******)0x1;
    break;
  case 0x6b:
    FUN_109dc44e0(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x6c:
    FUN_109dc4954(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x6d:
    FUN_109dc4a14(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x6e:
    func_0x000109dc4d9c(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x6f:
    func_0x000109dc4fb4(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x70:
    FUN_109dc5184(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x71:
    FUN_109dc53ec(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x72:
    (*(code *)(*param_1)[7])();
    lVar29 = 800;
    goto code_r0x000109dc0254;
  case 0x73:
    FUN_109dc5bb0(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x74:
    (*(code *)(*param_1)[7])();
    lVar29 = 0x328;
code_r0x000109dc0254:
    (**(code **)((long)*param_1 + lVar29))(param_1);
LAB_109dbeb3c:
    pppppppcVar31 = (code *******)0x0;
    break;
  case 0x75:
    FUN_109dc5c94(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x76:
    FUN_109dc5d14(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x77:
    FUN_109dc5e14(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x78:
    func_0x000109dc5fa4(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x79:
    func_0x000109dc60c8(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x7a:
    func_0x000109dc6124(param_1,ppppppcVar30);
    pppppppcVar31 = param_1;
    break;
  case 0x7b:
    func_0x000109dc61d4(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x7c:
    func_0x000109dc6248(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x7d:
    func_0x000109dc62bc(param_1,ppppppcVar30);
    pppppppcVar31 = param_1;
    break;
  case 0x7e:
    func_0x000109dc632c(param_1,ppppppcVar30);
    pppppppcVar31 = param_1;
    break;
  case 0x7f:
    func_0x000109dc641c(param_1,ppppppcVar30);
    pppppppcVar31 = param_1;
    break;
  case 0x80:
    func_0x000109dc64cc(param_1,ppppppcVar30);
    pppppppcVar31 = param_1;
    break;
  case 0x81:
    goto code_r0x000109dbffe4;
  case 0x82:
    uVar22 = 0;
code_r0x000109dbffe4:
    FUN_109dc657c(param_1,uVar22);
    pppppppcVar31 = param_1;
    break;
  case 0x83:
    func_0x000109dc6760(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x84:
    func_0x000109dc67a8(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x85:
    func_0x000109dc67f0(param_1,ppppppcVar30);
    pppppppcVar31 = param_1;
    break;
  case 0x86:
    func_0x000109dc6860(param_1,ppppppcVar30);
    pppppppcVar31 = param_1;
    break;
  case 0x87:
    FUN_109dc68d0(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x88:
    func_0x000109dc69e8(param_1,ppppppcVar30);
    pppppppcVar31 = param_1;
    break;
  case 0x89:
    func_0x000109dc6a58(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x8a:
    func_0x000109dc6aa0(param_1,ppppppcVar30);
    pppppppcVar31 = param_1;
    break;
  case 0x8b:
    func_0x000109dc6b10(param_1,ppppppcVar30);
    pppppppcVar31 = param_1;
    break;
  case 0x8c:
    func_0x000109dc6bc0(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x8e:
  case 0x8f:
    FUN_109dc6c08(param_1,pppppppcVar14,pppppppcVar17);
    pppppppcVar31 = param_1;
    break;
  case 0x90:
  case 0x91:
    func_0x000109dc79c8(param_1,pppppppcVar14,pppppppcVar17);
    pppppppcVar31 = param_1;
    break;
  case 0x92:
    FUN_109dc6c84(param_1,ppppppcVar30);
    pppppppcVar31 = param_1;
    break;
  case 0x93:
    func_0x000109dc7a38(param_1,pppppppcVar14,pppppppcVar17);
    pppppppcVar31 = param_1;
    break;
  case 0x94:
  case 0x95:
    func_0x000109dc7b40(param_1,pppppppcVar14,pppppppcVar17);
    pppppppcVar31 = param_1;
    break;
  case 0x96:
    FUN_109dc7c34(param_1,ppppppcVar30);
    pppppppcVar31 = param_1;
    break;
  case 0x97:
    goto code_r0x000109dbfc4c;
  case 0x98:
    uVar22 = 0;
code_r0x000109dbfc4c:
    func_0x000109dc3744(param_1,uVar22);
    pppppppcVar31 = param_1;
    break;
  case 0x99:
    goto code_r0x000109dc0178;
  case 0x9a:
    uVar28 = 1;
code_r0x000109dc0178:
    FUN_109dc7e18(param_1,ppppppcVar30,uVar28);
    pppppppcVar31 = param_1;
    break;
  case 0x9b:
    FUN_109dc7f6c(param_1,ppppppcVar30);
    pppppppcVar31 = param_1;
    break;
  case 0x9c:
    FUN_109dc889c(param_1,ppppppcVar30);
    pppppppcVar31 = param_1;
    break;
  case 0x9d:
    func_0x000109dc8a30(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x9e:
    func_0x000109dc8a78(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0x9f:
    FUN_109dc8b60(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0xa0:
    FUN_109dc8f44(param_1);
    pppppppcVar31 = param_1;
    break;
  case 0xa1:
    uVar25 = 3;
code_r0x000109dbfea0:
    FUN_109dc174c(param_1,uVar25);
    pppppppcVar31 = param_1;
    break;
  case 0xa3:
    pppppppcStack_138 = (code *******)CONCAT44(uVar7,0x1c);
    pppppppcStack_88 = (code *******)&pppppppcStack_138;
    pppppppcStack_90 = param_1;
    FUN_109dd9d40(param_1,FUN_109dcc270,&pppppppcStack_90,1);
    pppppppcVar31 = param_1;
    break;
  case 0xa4:
    FUN_109dc7dd4(param_1,0,1,2);
    pppppppcVar31 = param_1;
  }
LAB_109dbf898:
  if ((0x40 < uStack_a0) && (pppppcStack_a8 != (code *****)0x0)) {
    __ZdaPv();
  }
  return pppppppcVar31;
}


