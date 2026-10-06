/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1093a5560; end: 1093a559f;  */

void FUN_1093a5560(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_1093a55a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1093a55a0; end: 1093a56c3;  */

void FUN_1093a55a0(long *param_1)

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



/* Entry: 1093a56c4; end: 1093a5847;  */

long * FUN_1093a56c4(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    plVar3 = (long *)*param_1;
    *param_1 = 0;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      plVar3 = (long *)param_1[2];
      while (plVar3 != (long *)0x0) {
        plVar3 = (long *)*plVar3;
        __ZdlPv();
      }
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    plVar3 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar4 = plVar6[1];
      uVar5 = param_2 - 1;
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar9 = 0;
        if (param_2 != 0) {
          uVar9 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar9 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar6;
      while (plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (param_2 <= uVar9) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar1 * param_2;
        }
        plVar8 = plVar7;
        if (uVar9 != uVar4) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar9 * 8) == 0) {
            *(long **)(lVar2 + uVar9 * 8) = plVar6;
            uVar4 = uVar9;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + uVar9 * 8);
            **(long **)(lVar2 + uVar9 * 8) = (long)plVar7;
            plVar8 = plVar6;
          }
        }
        plVar6 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
  }
  return plVar3;
}



/* Entry: 1093a5848; end: 1093a59a7;  */

undefined8 * FUN_1093a5848(undefined8 *param_1)

{
  double dVar1;
  
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
  *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
  _bzero(param_1 + 0x23,0x111a);
  *(undefined1 *)((long)param_1 + 0x1232) = 1;
  param_1[0x248] = 0;
  param_1[0x247] = 0;
  param_1[0x24a] = 0;
  param_1[0x249] = 0;
  *(undefined4 *)(param_1 + 0x24b) = 0x3f800000;
  param_1[0x24c] = 0x80017fff7fff7fff;
  *(undefined4 *)(param_1 + 0x24d) = 0x80018001;
  *(undefined8 *)((long)param_1 + 0x1274) = 0;
  *(undefined8 *)((long)param_1 + 0x126c) = 0;
  *(undefined8 *)((long)param_1 + 0x1284) = 0;
  *(undefined8 *)((long)param_1 + 0x127c) = 0;
  *(undefined4 *)((long)param_1 + 0x128c) = 8;
  *(undefined4 *)(param_1 + 0x252) = 0x101;
  param_1[0x254] = 0;
  param_1[0x253] = 0;
  param_1[0x256] = 0;
  param_1[0x255] = 0;
  FUN_1093a5a40(param_1 + 0x253,0x200);
  param_1[600] = 0;
  param_1[599] = 0;
  param_1[0x25a] = 0;
  param_1[0x259] = 0;
  *(undefined4 *)(param_1 + 0x25b) = 0x3f800000;
  param_1[0x25d] = 0;
  param_1[0x25c] = 0;
  param_1[0x25f] = 0;
  param_1[0x25e] = 0;
  *(undefined4 *)(param_1 + 0x260) = 0x3f800000;
  param_1[0x262] = 0;
  param_1[0x261] = 0;
  param_1[0x264] = 0;
  param_1[0x263] = 0;
  *(undefined4 *)(param_1 + 0x265) = 0x3f800000;
  dVar1 = (double)*(int *)((long)param_1 + 0x128c);
  _log2();
  *(int *)(param_1 + 0x266) = (int)dVar1;
  param_1[0x268] = 0;
  param_1[0x267] = 0;
  *(undefined4 *)(param_1 + 0x269) = 0;
  *(undefined8 *)((long)param_1 + 0x1354) = 0x100000001;
  *(undefined8 *)((long)param_1 + 0x134c) = 0x200000001;
  *(undefined4 *)((long)param_1 + 0x135c) = 1;
  FUN_1093a59a8(param_1);
  return param_1;
}



/* Entry: 1093a59a8; end: 1093a5a3f;  */

void FUN_1093a59a8(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x1232) == '\x01') {
    param_1[1] = *param_1;
    param_1[4] = param_1[3];
    param_1[7] = 0;
    param_1[10] = param_1[9];
    param_1[0xd] = param_1[0xc];
    param_1[0x10] = param_1[0xf];
    param_1[0x13] = param_1[0x12];
    param_1[0x16] = 0;
    param_1[0x19] = param_1[0x18];
    param_1[0x1c] = param_1[0x1b];
    FUN_1093a5e24(param_1 + 0x1e);
    *(undefined4 *)(param_1 + 0x23) = 0x7f7fffff;
    _memset((long)param_1 + 0x11c,0xff,0x1116);
    *(undefined1 *)((long)param_1 + 0x1232) = 0;
  }
  return;
}



/* Entry: 1093a5a40; end: 1093a5b33;  */

void FUN_1093a5a40(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lStack_38;
  
  lVar5 = *param_1;
  lVar6 = param_1[2];
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[3] = (long)((float)param_2 * 0.9);
  lStack_38 = 0;
  plVar2 = &lStack_38;
  _posix_memalign(plVar2,8,param_2 * 0x38);
  lVar3 = lStack_38;
  if ((int)plVar2 != 0) {
    lVar3 = 0;
  }
  *param_1 = lVar3;
  if ((lVar3 != 0) && (param_1[2] != 0)) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      puVar1 = (undefined8 *)(*param_1 + lVar3);
      uVar4 = uVar4 + 1;
      puVar1[6] = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      lVar3 = lVar3 + 0x38;
    } while (uVar4 < (ulong)param_1[2]);
  }
  if (lVar5 != 0) {
    if (lVar6 != 0) {
      lVar3 = lVar5 + 0x10;
      do {
        if (0 < *(int *)(lVar3 + -0x10)) {
          FUN_1093a5b34(param_1,lVar3 + -0xc,lVar3);
        }
        lVar3 = lVar3 + 0x38;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    _free(lVar5);
  }
  return;
}



/* Entry: 1093a5b34; end: 1093a5e23;  */

long * FUN_1093a5b34(long *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  long *plVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uStack_90;
  uint uStack_88;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = (ulong)param_4;
  lVar12 = param_1[2];
  uVar16 = (ulong)((int)lVar12 - 1U & param_4);
  lVar8 = *param_1;
  puVar5 = (uint *)(lVar8 + uVar16 * 0x38);
  uVar1 = *puVar5;
  uVar15 = uVar16;
  if (uVar1 != 0) {
    uVar10 = 0;
    uVar14 = 0xffffffffffffffff;
LAB_1093a5ba8:
    uVar17 = (ulong)uVar1;
    uVar15 = uVar16;
    if ((((uVar17 != uVar7) || (puVar5[1] != *param_2)) || (puVar5[2] != param_2[1])) ||
       (puVar5[3] != param_2[2])) {
      lVar13 = param_1[2];
      uVar18 = (lVar13 + uVar16) - (lVar13 + 0xffffffffU & uVar17) & lVar13 - 1U;
      if (uVar10 <= uVar18) goto LAB_1093a5ce0;
      if (uVar14 != 0xffffffffffffffff) {
        uVar15 = uVar14;
      }
      puVar9 = puVar5 + 1;
      *puVar5 = (uint)uVar7;
      if (-1 < (int)uVar1) {
        uStack_88 = param_2[2];
        uStack_90 = *(undefined8 *)param_2;
        uVar11 = *(undefined8 *)puVar9;
        param_2[2] = puVar5[3];
        *(undefined8 *)param_2 = uVar11;
        puVar5[3] = uStack_88;
        *(undefined8 *)puVar9 = uStack_90;
        lVar8 = *param_1 + uVar16 * 0x38;
        puVar5 = (uint *)(lVar8 + 0x10);
        lVar13 = *(long *)(param_3 + 8);
        if (lVar13 == 0) {
          if (puVar5 != param_3) goto LAB_1093a5c84;
        }
        else {
          _memcpy(&uStack_90,param_3,lVar13 << 3);
          if (puVar5 != param_3) {
            param_3[8] = 0;
            param_3[9] = 0;
LAB_1093a5c84:
            lVar6 = *(long *)(lVar8 + 0x30);
            puVar9 = puVar5;
            puVar3 = param_3;
            for (lVar2 = lVar6; lVar2 != 0; lVar2 = lVar2 + -1) {
              *(undefined8 *)puVar3 = *(undefined8 *)puVar9;
              puVar9 = puVar9 + 2;
              puVar3 = puVar3 + 2;
            }
            *(long *)(param_3 + 8) = lVar6;
            if (lVar13 == 0) goto LAB_1093a5cc0;
          }
          _memcpy(puVar5,&uStack_90,lVar13 << 3);
        }
LAB_1093a5cc0:
        *(long *)(lVar8 + 0x30) = lVar13;
        lVar8 = *param_1;
        uVar7 = uVar17;
        uVar10 = uVar18;
        uVar14 = uVar15;
        goto LAB_1093a5ce0;
      }
      uVar11 = *(undefined8 *)param_2;
      puVar5[3] = param_2[2];
      *(undefined8 *)puVar9 = uVar11;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0;
      if (puVar5 + 4 != param_3) {
        lVar12 = *(long *)(param_3 + 8);
        puVar9 = puVar5 + 4;
        for (lVar8 = lVar12; lVar8 != 0; lVar8 = lVar8 + -1) {
          *(undefined8 *)puVar9 = *(undefined8 *)param_3;
          puVar9 = puVar9 + 2;
          param_3 = param_3 + 2;
        }
        goto LAB_1093a5d88;
      }
      goto LAB_1093a5d8c;
    }
    if (uVar14 != 0xffffffffffffffff) {
      uVar15 = uVar14;
    }
    if (puVar5 + 4 != param_3) {
      if (*(long *)(puVar5 + 0xc) != 0) {
        puVar5[0xc] = 0;
        puVar5[0xd] = 0;
      }
      lVar12 = *(long *)(param_3 + 8);
      puVar9 = puVar5 + 4;
      for (lVar8 = lVar12; lVar8 != 0; lVar8 = lVar8 + -1) {
        *(undefined8 *)puVar9 = *(undefined8 *)param_3;
        puVar9 = puVar9 + 2;
        param_3 = param_3 + 2;
      }
      *(long *)(puVar5 + 0xc) = lVar12;
    }
    goto LAB_1093a5d98;
  }
LAB_1093a5d08:
  *puVar5 = param_4;
  uVar11 = *(undefined8 *)param_2;
  puVar5[3] = param_2[2];
  *(undefined8 *)(puVar5 + 1) = uVar11;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  if (puVar5 + 4 != param_3) {
    lVar12 = *(long *)(param_3 + 8);
    puVar9 = puVar5 + 4;
    for (lVar8 = lVar12; lVar8 != 0; lVar8 = lVar8 + -1) {
      *(undefined8 *)puVar9 = *(undefined8 *)param_3;
      puVar9 = puVar9 + 2;
      param_3 = param_3 + 2;
    }
LAB_1093a5d88:
    *(long *)(puVar5 + 0xc) = lVar12;
  }
LAB_1093a5d8c:
  param_1[1] = param_1[1] + 1;
LAB_1093a5d98:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if (param_1[3] != 0) {
      plVar4 = (long *)param_1[2];
      while (plVar4 != (long *)0x0) {
        plVar4 = (long *)*plVar4;
        __ZdlPv();
      }
      param_1[2] = 0;
      lVar8 = param_1[1];
      if (lVar8 != 0) {
        lVar12 = 0;
        do {
          *(undefined8 *)(*param_1 + lVar12 * 8) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar8 != lVar12);
      }
      param_1[3] = 0;
      param_1 = (long *)0x0;
    }
    return param_1;
  }
  return (long *)(*param_1 + uVar15 * 0x38);
LAB_1093a5ce0:
  param_4 = (uint)uVar7;
  uVar10 = uVar10 + 1;
  uVar16 = uVar16 + 1 & lVar12 - 1U;
  puVar5 = (uint *)(lVar8 + uVar16 * 0x38);
  uVar1 = *puVar5;
  if (uVar1 == 0) goto code_r0x0001093a5cf8;
  goto LAB_1093a5ba8;
code_r0x0001093a5cf8:
  uVar15 = uVar16;
  if (uVar14 != 0xffffffffffffffff) {
    uVar15 = uVar14;
  }
  goto LAB_1093a5d08;
}



/* Entry: 1093a5e24; end: 1093a6377;  */

void FUN_1093a5e24(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (param_1[3] != 0) {
    plVar1 = (long *)param_1[2];
    while (plVar1 != (long *)0x0) {
      plVar1 = (long *)*plVar1;
      __ZdlPv();
    }
    param_1[2] = 0;
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 1093a6378; end: 1093a658f;  */

long FUN_1093a6378(long param_1,short *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_40;
  float fStack_38;
  undefined1 uStack_31;
  
  lVar1 = param_1 + 0x50;
  uStack_40 = param_2;
  FUN_1093a6a24(lVar1,param_2,&UNK_10dd5b8f9,&uStack_40,&uStack_31);
  lVar2 = *(long *)(lVar1 + 0x18);
  if (lVar2 == 0) {
    lVar2 = param_1 + 0x78;
    FUN_1093a6590();
    *(long *)(lVar1 + 0x18) = lVar2;
    fStack_38 = *(float *)(param_1 + 0x20);
    uStack_40 = (short *)CONCAT44(fStack_38 * (float)(int)param_2[1],
                                  fStack_38 * (float)(int)*param_2);
    fStack_38 = fStack_38 * (float)(int)param_2[2];
    FUN_1093a67a4();
    if (*(char *)(param_1 + 0x10) == '\x01') {
      lVar2 = (*(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78) >> 3) * -0x5555555555555555 +
              -1;
      plVar3 = (long *)(*(long *)(param_1 + 0x78) + lVar2 * 0x18);
      FUN_1093a6810(param_1 + 0x28,param_2,
                    (int)((ulong)(plVar3[1] - *plVar3) >> 2) * 0x594287b7 + (int)lVar2 * 0x1000 + -1
                   );
    }
    lVar2 = *(long *)(lVar1 + 0x18);
  }
  return lVar2;
}



/* Entry: 1093a6590; end: 1093a67a3;  */

undefined8 * FUN_1093a6590(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  if (param_1[4] == param_1[3]) {
    lVar2 = param_1[1];
    puVar4 = *(undefined8 **)(lVar2 + -0x10);
    puVar1 = *(undefined8 **)(lVar2 + -8);
    if (puVar4 == puVar1) {
      if (lVar2 == param_1[2]) {
        uStack_90 = 0;
        uStack_38 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_40 = 0;
        FUN_1099a9f0c(&uStack_90,&UNK_10f568e28,0x70,2,FUN_1099aa768,0);
        FUN_1092b4db8(lStack_88 + 0x7540,&UNK_10f568ef0,0x46);
        FUN_1099ab3b0(&uStack_90);
        FUN_1093a4fe8(param_1,(param_1[2] - *param_1 >> 3) * 0x5555555555555556);
        lVar2 = param_1[1];
      }
      func_0x0001093a50a0(param_1,(lVar2 - *param_1 >> 3) * -0x5555555555555555 + 1);
      FUN_1093a5134(param_1[1] + -0x18,0x1000);
      lVar2 = param_1[1];
      puVar4 = *(undefined8 **)(lVar2 + -0x10);
      puVar1 = *(undefined8 **)(lVar2 + -8);
    }
    if (puVar4 < puVar1) {
      _bzero(puVar4,0x1814);
      lVar3 = 0x200;
      puVar1 = puVar4;
      do {
        puVar1[3] = 0x1001;
        puVar1[2] = 0;
        puVar1[5] = 0;
        puVar1[4] = 0x100100000000;
        puVar1[1] = 0x100100000000;
        *puVar1 = 0x1001;
        lVar3 = lVar3 + -4;
        puVar1 = puVar1 + 6;
      } while (lVar3 != 0);
      *(undefined8 *)((long)puVar4 + 0x1814) = 0x4e6e6b2800000000;
      lVar3 = (long)puVar4 + 0x181c;
    }
    else {
      lVar3 = lVar2 + -0x18;
      FUN_1093a6c88();
    }
    *(long *)(lVar2 + -0x10) = lVar3;
    param_1[6] = param_1[6] + 1;
    puVar4 = (undefined8 *)(lVar3 + -0x181c);
  }
  else {
    puVar1 = (undefined8 *)(param_1[4] + -8);
    puVar4 = (undefined8 *)*puVar1;
    param_1[4] = (long)puVar1;
    _bzero(puVar4,0x181c);
    lVar2 = 0x200;
    puVar1 = puVar4;
    do {
      puVar1[3] = 0x1001;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0x100100000000;
      puVar1[1] = 0x100100000000;
      *puVar1 = 0x1001;
      lVar2 = lVar2 + -4;
      puVar1 = puVar1 + 6;
    } while (lVar2 != 0);
    *(undefined8 *)((long)puVar4 + 0x1814) = 0x4e6e6b2800000000;
    param_1[6] = param_1[6] + 1;
  }
  return puVar4;
}



/* Entry: 1093a67a4; end: 1093a680f;  */

void FUN_1093a67a4(long param_1,undefined8 *param_2,undefined2 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = 0x200;
  puVar1 = (undefined4 *)(param_1 + 8);
  do {
    puVar1[-2] = *param_4;
    *(undefined1 *)(puVar1 + -1) = *(undefined1 *)(param_4 + 1);
    *(undefined1 *)((long)puVar1 + -3) = *(undefined1 *)((long)param_4 + 5);
    *(undefined1 *)((long)puVar1 + -2) = *(undefined1 *)((long)param_4 + 6);
    *(undefined1 *)((long)puVar1 + -1) = *(undefined1 *)((long)param_4 + 7);
    *puVar1 = param_4[2];
    lVar2 = lVar2 + -1;
    puVar1 = puVar1 + 3;
  } while (lVar2 != 0);
  *(undefined8 *)(param_1 + 0x1800) = *param_2;
  *(undefined4 *)(param_1 + 0x1808) = *(undefined4 *)(param_2 + 1);
  *(undefined2 *)(param_1 + 0x180c) = *param_3;
  *(undefined2 *)(param_1 + 0x180e) = param_3[1];
  *(undefined2 *)(param_1 + 0x1810) = param_3[2];
  return;
}



/* Entry: 1093a6810; end: 1093a6a23;  */

bool FUN_1093a6810(long *param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  short sVar2;
  ulong uVar3;
  ulong uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  uint uVar14;
  long *plVar15;
  int iVar16;
  short sVar17;
  short *psVar18;
  short *psVar19;
  
  psVar18 = *(short **)*param_1;
  psVar19 = psVar18 + 3;
  iVar16 = (int)param_1[4];
  if ((int)*psVar19 < iVar16 + -1) {
    do {
      sVar8 = *param_2;
      sVar9 = *psVar18;
      sVar17 = param_2[1];
      sVar10 = psVar18[1];
      sVar11 = param_2[2];
      sVar12 = psVar18[2];
      uVar3 = 0;
      if (sVar10 <= sVar17) {
        uVar3 = 2;
      }
      uVar4 = 0;
      if (sVar12 <= sVar11) {
        uVar4 = 4;
      }
      if (sVar9 <= sVar8) {
        uVar3 = uVar3 + 1;
      }
      uVar14 = *(uint *)(psVar18 + (uVar3 | uVar4) * 2 + 4);
      if (uVar14 == 0xffffffff) {
        plVar15 = param_1;
        FUN_1093a4bb4();
        uVar14 = (uint)plVar15;
        *(uint *)(psVar18 + (uVar3 | uVar4) * 2 + 4) = uVar14;
        sVar5 = *psVar18;
        sVar6 = psVar18[1];
        sVar7 = psVar18[2];
        psVar18 = (short *)(*(long *)(*param_1 + (ulong)(uVar14 >> 0xd) * 0x18) +
                           (ulong)(uVar14 & 0x1fff) * 0x28);
        iVar13 = 1 << (ulong)((int)param_1[4] - (int)*psVar19 & 0x1f);
        iVar16 = iVar13 + 3;
        if (-1 < iVar13) {
          iVar16 = iVar13;
        }
        sVar1 = (short)(iVar16 >> 2);
        sVar2 = -sVar1;
        if (sVar9 <= sVar8) {
          sVar2 = sVar1;
        }
        sVar8 = -sVar1;
        if (sVar10 <= sVar17) {
          sVar8 = sVar1;
        }
        sVar9 = -sVar1;
        if (sVar12 <= sVar11) {
          sVar9 = sVar1;
        }
        sVar17 = *psVar19 + 1;
        *psVar18 = sVar5 + sVar2;
        psVar18[1] = sVar6 + sVar8;
        psVar18[2] = sVar7 + sVar9;
        psVar18[3] = sVar17;
        psVar18[8] = -1;
        psVar18[9] = -1;
        psVar18[10] = -1;
        psVar18[0xb] = -1;
        psVar18[4] = -1;
        psVar18[5] = -1;
        psVar18[6] = -1;
        psVar18[7] = -1;
        psVar18[0x10] = -1;
        psVar18[0x11] = -1;
        psVar18[0x12] = -1;
        psVar18[0x13] = -1;
        psVar18[0xc] = -1;
        psVar18[0xd] = -1;
        psVar18[0xe] = -1;
        psVar18[0xf] = -1;
        iVar16 = (int)param_1[4];
      }
      else {
        psVar18 = (short *)(*(long *)(*param_1 + (ulong)(uVar14 >> 0xd) * 0x18) +
                           (ulong)(uVar14 & 0x1fff) * 0x28);
        sVar17 = psVar18[3];
      }
      psVar19 = psVar18 + 3;
    } while ((int)sVar17 < iVar16 + -1);
  }
  uVar3 = 0;
  if (psVar18[1] <= param_2[1]) {
    uVar3 = 2;
  }
  if (*psVar18 <= *param_2) {
    uVar3 = uVar3 + 1;
  }
  uVar4 = 0;
  if (psVar18[2] <= param_2[2]) {
    uVar4 = 4;
  }
  iVar16 = *(int *)(psVar18 + (uVar3 | uVar4) * 2 + 4);
  *(undefined4 *)(psVar18 + (uVar3 | uVar4) * 2 + 4) = param_3;
  param_1[3] = param_1[3] + 1;
  return iVar16 != -1;
}



/* Entry: 1093a6a24; end: 1093a6c87;  */

undefined1  [16] FUN_1093a6a24(long *param_1,short *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  
  uVar11 = (long)(int)*param_2 * 0x466f45d + (long)(int)param_2[1] * 0x12740a5 +
           (long)(int)param_2[2] * 0x4f9ffb7;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar4 = uVar10 - 1;
    if ((uVar10 & uVar4) == 0) {
      unaff_x24 = uVar11 & uVar4;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar8 * uVar10;
      }
    }
    puVar7 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      for (plVar9 = (long *)*puVar7; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar8 = plVar9[1];
        if (uVar8 == uVar11) {
          if ((((short)plVar9[2] == *param_2) && (*(short *)((long)plVar9 + 0x12) == param_2[1])) &&
             (*(short *)((long)plVar9 + 0x14) == param_2[2])) {
            uVar3 = 0;
            goto LAB_1093a6c54;
          }
        }
        else {
          if ((uVar10 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (uVar10 <= uVar8) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar2 * uVar10;
          }
          if (uVar8 != unaff_x24) break;
        }
      }
    }
  }
  plVar9 = (long *)0x20;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = uVar11;
  uVar1 = *(undefined4 *)*param_4;
  *(undefined2 *)((long)plVar9 + 0x14) = *(undefined2 *)((undefined4 *)*param_4 + 1);
  *(undefined4 *)(plVar9 + 2) = uVar1;
  plVar9[3] = 0;
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar10) {
      uVar4 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar4 = uVar4 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar10) {
      uVar4 = uVar10;
    }
    func_0x0001093a55f4(param_1,uVar4);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar4 * uVar10;
      }
    }
  }
  lVar6 = *param_1;
  plVar5 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar9 = *plVar5;
    *plVar5 = (long)plVar9;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar5;
    if (*plVar9 == 0) goto LAB_1093a6c44;
    uVar11 = *(ulong *)(*plVar9 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar11 = uVar11 & uVar10 - 1;
    }
    else if (uVar10 <= uVar11) {
      uVar4 = 0;
      if (uVar10 != 0) {
        uVar4 = uVar11 / uVar10;
      }
      uVar11 = uVar11 - uVar4 * uVar10;
    }
    plVar5 = (long *)(*param_1 + uVar11 * 8);
  }
  else {
    *plVar9 = *plVar5;
  }
  *plVar5 = (long)plVar9;
LAB_1093a6c44:
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
LAB_1093a6c54:
  auVar12._8_8_ = uVar3;
  auVar12._0_8_ = plVar9;
  return auVar12;
}



/* Entry: 1093a6c88; end: 1093a6ddb;  */

undefined1  [16] FUN_1093a6c88(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uStack_84;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  lVar10 = param_1[1] - *param_1;
  uVar8 = (lVar10 >> 2) * 0x6a2ec96a594287b7 + 1;
  if (uVar8 < 0xa9e47576f5374) {
    lVar7 = param_1[2] - *param_1 >> 2;
    uVar9 = lVar7 * -0x2ba26d2b4d7af092;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0x54f23abb7a9b8 < (ulong)(lVar7 * 0x6a2ec96a594287b7)) {
      uVar9 = 0xa9e47576f5373;
    }
    plVar2 = param_1;
    FUN_1093a5478();
    lVar7 = (long)plVar2 + lVar10;
    _bzero(lVar7,0x1814);
    lVar6 = 0x200;
    do {
      puVar1 = (undefined8 *)((long)plVar2 + lVar10);
      puVar1[3] = 0x1001;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0x100100000000;
      puVar1[1] = 0x100100000000;
      *puVar1 = 0x1001;
      lVar10 = lVar10 + 0x30;
      lVar6 = lVar6 + -4;
    } while (lVar6 != 0);
    *(undefined8 *)(lVar7 + 0x1814) = 0x4e6e6b2800000000;
    lVar6 = *param_1;
    lVar10 = lVar7 + (lVar6 - param_1[1]);
    FUN_1093a54c0(param_1,lVar6,param_1[1],lVar10);
    lVar3 = *param_1;
    *param_1 = lVar10;
    param_1[1] = lVar7 + 0x181c;
    param_1[2] = (long)plVar2 + uVar9 * 0x181c;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    auVar11._8_8_ = lVar6;
    auVar11._0_8_ = lVar7 + 0x181c;
    return auVar11;
  }
  FUN_1093a5464();
  __ZdlPv();
  __Unwind_Resume(param_1);
  pcStack_48 = FUN_1093a6ddc;
  puVar4 = &DAT_10f62a4d8;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x000104c4f6cc();
  pcStack_58 = FUN_1093a6df0;
  ppuStack_80 = &puStack_60;
  if (param_2 < 0x2aaaaaaaaaaaaaab) {
    lVar10 = param_2 * 6;
    puStack_60 = (undefined1 *)&puStack_50;
    __Znwm(lVar10);
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = lVar10;
    return auVar12;
  }
  puStack_60 = (undefined1 *)&puStack_50;
  func_0x000104c4f740();
  pcStack_78 = FUN_1093a6e30;
  uStack_84 = (undefined4)param_2;
  ppuVar5 = (undefined **)&uStack_84;
  FUN_1093a6e78();
  lVar10 = 0;
  if ((puVar4 != (undefined *)0x0) && (lVar10 = *(long *)(puVar4 + 0x18), lVar10 != 0)) {
    ppuVar5 = &PTR_DAT_110af53f8;
    ___dynamic_cast(lVar10,&PTR_DAT_110af53f8,&PTR_DAT_110af5408,0);
  }
  auVar13._8_8_ = ppuVar5;
  auVar13._0_8_ = lVar10;
  return auVar13;
}



/* Entry: 1093a6ddc; end: 1093a6def;  */

void FUN_1093a6ddc(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0x2aaaaaaaaaaaaaab) {
    __Znwm(param_2 * 6);
    return;
  }
  func_0x000104c4f740();
  FUN_1093a6e78();
  if ((puVar1 != (undefined *)0x0) && (*(long *)(puVar1 + 0x18) != 0)) {
    ___dynamic_cast(*(long *)(puVar1 + 0x18),&PTR_DAT_110af53f8,&PTR_DAT_110af5408,0);
  }
  return;
}



/* Entry: 1093a6df0; end: 1093a6e2f;  */

void FUN_1093a6df0(long param_1,ulong param_2)

{
  if (param_2 < 0x2aaaaaaaaaaaaaab) {
    __Znwm(param_2 * 6);
    return;
  }
  func_0x000104c4f740();
  FUN_1093a6e78();
  if ((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    ___dynamic_cast(*(long *)(param_1 + 0x18),&PTR_DAT_110af53f8,&PTR_DAT_110af5408,0);
  }
  return;
}



/* Entry: 1093a6e30; end: 1093a6e77;  */

void FUN_1093a6e30(long param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  FUN_1093a6e78(param_1,&uStack_14);
  if ((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    ___dynamic_cast(*(long *)(param_1 + 0x18),&PTR_DAT_110af53f8,&PTR_DAT_110af5408,0);
  }
  return;
}



/* Entry: 1093a6e78; end: 1093a6f17;  */

long * FUN_1093a6e78(long *param_1,int *param_2)

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
    uVar3 = (ulong)*param_2;
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
          if (*(int *)(plVar6 + 2) == *param_2) {
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



/* Entry: 1093a6f18; end: 1093a6fdf;  */

uint * FUN_1093a6f18(uint *param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  float fVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  long *plVar10;
  long lVar11;
  long unaff_x24;
  int iVar12;
  undefined8 unaff_x25;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 unaff_x28;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  int iStack_2744;
  undefined8 uStack_2740;
  undefined8 uStack_2738;
  uint *puStack_2730;
  undefined8 uStack_2728;
  long lStack_2720;
  uint *puStack_2718;
  uint *puStack_2710;
  undefined8 uStack_2708;
  undefined8 uStack_2700;
  uint *puStack_26f8;
  undefined1 **ppuStack_26f0;
  code *pcStack_26e8;
  ulong uStack_26e0;
  undefined8 uStack_26d8;
  undefined1 auStack_26d0 [740];
  undefined1 auStack_23ec [8];
  undefined4 auStack_23e4 [2185];
  long lStack_1c0;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [256];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_150 = param_6;
  _snprintf(auStack_148,0x100,&UNK_10f568f37);
  puVar6 = param_2;
  FUN_1093a6fe0(param_1,param_2,param_3);
  puVar3 = param_1;
  FUN_1093a7228();
  if (*(char *)((long)param_1 + 0x1291) == '\x01') {
    puVar3 = param_1;
    FUN_1093a73b4();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1 + 0x4b8;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_1093a6fe0;
  puStack_160 = &stack0xfffffffffffffff0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_26e0 = (ulong)*puVar6;
  uStack_26d8 = 0;
  lVar11 = 0x222c;
  puVar9 = auStack_23e4;
  do {
    *(undefined8 *)(puVar9 + -2) = 0x1001;
    *puVar9 = 0;
    lVar11 = lVar11 + -0xc;
    puVar9 = puVar9 + 3;
  } while (lVar11 != 0);
  puVar3[0x4d0] = 0;
  puVar3[0x4d1] = 0;
  puVar3[0x4ce] = 0;
  puVar3[0x4cf] = 0;
  puVar4 = puVar3;
  FUN_1093a7ad8(puVar3,puVar6);
  plVar14 = *(long **)(puVar3 + 0x4b2);
  if (plVar14 != (long *)0x0) {
    unaff_x28 = 1;
    do {
      puVar4 = puVar6 + 0x14;
      FUN_1093a8f80(puVar4,plVar14 + 2);
      if ((puVar4 != (uint *)0x0) && (unaff_x24 = *(long *)(puVar4 + 6), unaff_x24 != 0)) {
        FUN_1093a59a8(puVar3);
        puVar4 = puVar3;
        FUN_1093a7cd8(puVar3,puVar6,unaff_x24,param_4,param_5,auStack_23ec,auStack_26d0);
        if ((int)puVar4 != 0) {
          param_2 = (uint *)0x0;
          *(undefined1 *)((long)puVar3 + 0x1232) = 1;
          fVar21 = (float)puVar3[0x4a2];
          if (*(float *)(unaff_x24 + 0x1818) <= (float)puVar3[0x4a2]) {
            fVar21 = *(float *)(unaff_x24 + 0x1818);
          }
          fVar2 = (float)puVar3[0x4a1];
          if ((float)puVar3[0x4a1] <= fVar21) {
            fVar2 = fVar21;
          }
          puVar3[0x46] = (uint)fVar2;
          do {
            iVar13 = 0;
            do {
              iVar12 = 0;
              do {
                FUN_1093a803c(uStack_26e0,puVar3,plVar14 + 2,auStack_23ec,auStack_26d0,iVar12,iVar13
                              ,param_2);
                iVar12 = iVar12 + 1;
              } while (iVar12 != 8);
              iVar13 = iVar13 + 1;
            } while (iVar13 != 8);
            uVar1 = (int)param_2 + 1;
            param_2 = (uint *)(ulong)uVar1;
            unaff_x25 = 8;
            unaff_x24 = 8;
          } while (uVar1 != 8);
        }
        puVar4 = puVar3;
        FUN_1093a8798(puVar3,plVar14 + 2);
      }
      plVar14 = (long *)*plVar14;
    } while (plVar14 != (long *)0x0);
  }
  auVar17._0_4_ = (int)(short)puVar3[0x498];
  auVar17._4_4_ = (int)(short)(puVar3[0x498] >> 0x10);
  auVar17._8_4_ = (int)(short)puVar3[0x499];
  auVar17._12_4_ = (int)(short)(*(short *)((long)puVar3 + 0x1266) + 1);
  auVar17 = NEON_scvtf(auVar17,4);
  fVar21 = (float)uStack_26e0;
  auVar18._0_8_ = CONCAT44(auVar17._4_4_ * 8.0 * fVar21,auVar17._0_4_ * 8.0 * fVar21);
  auVar18._8_4_ = auVar17._8_4_ * 8.0 * fVar21;
  auVar18._12_4_ = auVar17._12_4_ * 8.0 * fVar21;
  *(long *)(puVar3 + 0x49d) = auVar18._8_8_;
  *(undefined8 *)(puVar3 + 0x49b) = auVar18._0_8_;
  auVar19._2_14_ = auVar18._2_14_;
  auVar19._0_2_ = (undefined2)puVar3[0x49a];
  auVar20._6_10_ = auVar18._6_10_;
  auVar20._0_4_ = auVar19._0_4_;
  auVar20._4_2_ = *(undefined2 *)((long)puVar3 + 0x126a);
  uVar16 = NEON_scvtf(CONCAT44((auVar20._4_4_ + 1) * 0x10000 >> 0x10,
                               (auVar20._0_4_ + 1) * 0x10000 >> 0x10),4);
  *(ulong *)(puVar3 + 0x49f) =
       CONCAT44(fVar21 * (float)((ulong)uVar16 >> 0x20) * 8.0,fVar21 * (float)uVar16 * 8.0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return puVar4;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_26e8 = FUN_1093a7228;
  puVar5 = puVar4 + 0x4b8;
  uStack_2740 = unaff_x28;
  uStack_2738 = 0;
  puStack_2730 = puVar3 + 0x400;
  uStack_2728 = unaff_x25;
  lStack_2720 = unaff_x24;
  puStack_2718 = param_2;
  puStack_2710 = puVar6;
  uStack_2708 = param_4;
  uStack_2700 = param_5;
  puStack_26f8 = puVar3;
  ppuStack_26f0 = &puStack_160;
  func_0x0001093a8858(puVar5);
  for (plVar14 = *(long **)(puVar4 + 0x492); plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
    lVar11 = plVar14[3];
    if (*(char *)(lVar11 + 6) == '\x01') {
      *(undefined1 *)(lVar11 + 6) = 0;
      if (*(char *)((long)puVar4 + 0x1291) == '\x01') {
        FUN_1093a8ac8(puVar4 + 0x4b8,plVar14 + 2,plVar14 + 2);
      }
      func_0x0001093ac858(lVar11 + 0x48);
      plVar10 = *(long **)(lVar11 + 0x18);
      if (plVar10 == (long *)0x0) {
        lVar7 = 0;
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        lVar7 = 0;
        do {
          lVar8 = lVar8 + (plVar10[5] - plVar10[4] >> 5);
          lVar7 = lVar7 + (plVar10[8] - plVar10[7] >> 2);
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      FUN_1093ac8e4(lVar11,lVar7,lVar8);
      lVar8 = lVar11 + 0x48;
      FUN_1093ad6a4(lVar8,3);
      FUN_1093ada18(lVar11 + 0x48,0);
      FUN_1093ada18(lVar11 + 0x48,1);
      puVar5 = (uint *)(lVar11 + 0x48);
      FUN_1093adf30(puVar5,0xc);
      plVar10 = *(long **)(lVar11 + 0x18);
      if (plVar10 != (long *)0x0) {
        iVar13 = 0;
        do {
          if (plVar10[8] != plVar10[7]) {
            puVar5 = (uint *)(plVar10 + 4);
            FUN_1093ac9a8(puVar5,lVar11);
            lVar7 = plVar10[7];
            if (plVar10[8] != lVar7) {
              uVar15 = 0;
              do {
                iStack_2744 = *(int *)(lVar7 + uVar15 * 4) + iVar13;
                puVar5 = (uint *)(lVar8 + 0x10);
                func_0x0001093aa148(puVar5,&iStack_2744);
                uVar15 = uVar15 + 1;
                lVar7 = plVar10[7];
              } while (uVar15 < (ulong)(plVar10[8] - lVar7 >> 2));
            }
            iVar13 = iVar13 + (int)((ulong)(plVar10[5] - plVar10[4]) >> 5);
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  return puVar5;
}



/* Entry: 1093a6fe0; end: 1093a7227;  */

void FUN_1093a6fe0(uint *param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  float fVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  long *plVar7;
  long lVar8;
  ulong unaff_x23;
  long unaff_x24;
  int iVar9;
  undefined8 unaff_x25;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 unaff_x28;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  int iStack_25f4;
  undefined8 uStack_25f0;
  undefined8 uStack_25e8;
  uint *puStack_25e0;
  undefined8 uStack_25d8;
  long lStack_25d0;
  ulong uStack_25c8;
  uint *puStack_25c0;
  undefined8 uStack_25b8;
  undefined8 uStack_25b0;
  uint *puStack_25a8;
  undefined1 *puStack_25a0;
  code *pcStack_2598;
  ulong uStack_2590;
  undefined8 uStack_2588;
  undefined1 auStack_2580 [740];
  undefined1 auStack_229c [8];
  undefined4 auStack_2294 [2185];
  long lStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2590 = (ulong)*param_2;
  uStack_2588 = 0;
  lVar8 = 0x222c;
  puVar6 = auStack_2294;
  do {
    *(undefined8 *)(puVar6 + -2) = 0x1001;
    *puVar6 = 0;
    lVar8 = lVar8 + -0xc;
    puVar6 = puVar6 + 3;
  } while (lVar8 != 0);
  param_1[0x4d0] = 0;
  param_1[0x4d1] = 0;
  param_1[0x4ce] = 0;
  param_1[0x4cf] = 0;
  puVar3 = param_1;
  FUN_1093a7ad8(param_1,param_2);
  plVar11 = *(long **)(param_1 + 0x4b2);
  if (plVar11 != (long *)0x0) {
    unaff_x28 = 1;
    do {
      puVar3 = param_2 + 0x14;
      FUN_1093a8f80(puVar3,plVar11 + 2);
      if ((puVar3 != (uint *)0x0) && (unaff_x24 = *(long *)(puVar3 + 6), unaff_x24 != 0)) {
        FUN_1093a59a8(param_1);
        puVar3 = param_1;
        FUN_1093a7cd8(param_1,param_2,unaff_x24,param_4,param_5,auStack_229c,auStack_2580);
        if ((int)puVar3 != 0) {
          unaff_x23 = 0;
          *(undefined1 *)((long)param_1 + 0x1232) = 1;
          fVar18 = (float)param_1[0x4a2];
          if (*(float *)(unaff_x24 + 0x1818) <= (float)param_1[0x4a2]) {
            fVar18 = *(float *)(unaff_x24 + 0x1818);
          }
          fVar2 = (float)param_1[0x4a1];
          if ((float)param_1[0x4a1] <= fVar18) {
            fVar2 = fVar18;
          }
          param_1[0x46] = (uint)fVar2;
          do {
            iVar10 = 0;
            do {
              iVar9 = 0;
              do {
                FUN_1093a803c(uStack_2590,param_1,plVar11 + 2,auStack_229c,auStack_2580,iVar9,iVar10
                              ,unaff_x23);
                iVar9 = iVar9 + 1;
              } while (iVar9 != 8);
              iVar10 = iVar10 + 1;
            } while (iVar10 != 8);
            uVar1 = (int)unaff_x23 + 1;
            unaff_x23 = (ulong)uVar1;
            unaff_x25 = 8;
            unaff_x24 = 8;
          } while (uVar1 != 8);
        }
        puVar3 = param_1;
        FUN_1093a8798(param_1,plVar11 + 2);
      }
      plVar11 = (long *)*plVar11;
    } while (plVar11 != (long *)0x0);
  }
  auVar14._0_4_ = (int)(short)param_1[0x498];
  auVar14._4_4_ = (int)(short)(param_1[0x498] >> 0x10);
  auVar14._8_4_ = (int)(short)param_1[0x499];
  auVar14._12_4_ = (int)(short)(*(short *)((long)param_1 + 0x1266) + 1);
  auVar14 = NEON_scvtf(auVar14,4);
  fVar18 = (float)uStack_2590;
  auVar15._0_8_ = CONCAT44(auVar14._4_4_ * 8.0 * fVar18,auVar14._0_4_ * 8.0 * fVar18);
  auVar15._8_4_ = auVar14._8_4_ * 8.0 * fVar18;
  auVar15._12_4_ = auVar14._12_4_ * 8.0 * fVar18;
  *(long *)(param_1 + 0x49d) = auVar15._8_8_;
  *(undefined8 *)(param_1 + 0x49b) = auVar15._0_8_;
  auVar16._2_14_ = auVar15._2_14_;
  auVar16._0_2_ = (undefined2)param_1[0x49a];
  auVar17._6_10_ = auVar15._6_10_;
  auVar17._0_4_ = auVar16._0_4_;
  auVar17._4_2_ = *(undefined2 *)((long)param_1 + 0x126a);
  uVar13 = NEON_scvtf(CONCAT44((auVar17._4_4_ + 1) * 0x10000 >> 0x10,
                               (auVar17._0_4_ + 1) * 0x10000 >> 0x10),4);
  *(ulong *)(param_1 + 0x49f) =
       CONCAT44(fVar18 * (float)((ulong)uVar13 >> 0x20) * 8.0,fVar18 * (float)uVar13 * 8.0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_2598 = FUN_1093a7228;
  uStack_25f0 = unaff_x28;
  uStack_25e8 = 0;
  puStack_25e0 = param_1 + 0x400;
  uStack_25d8 = unaff_x25;
  lStack_25d0 = unaff_x24;
  uStack_25c8 = unaff_x23;
  puStack_25c0 = param_2;
  uStack_25b8 = param_4;
  uStack_25b0 = param_5;
  puStack_25a8 = param_1;
  puStack_25a0 = &stack0xfffffffffffffff0;
  func_0x0001093a8858(puVar3 + 0x4b8);
  for (plVar11 = *(long **)(puVar3 + 0x492); plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
    lVar8 = plVar11[3];
    if (*(char *)(lVar8 + 6) == '\x01') {
      *(undefined1 *)(lVar8 + 6) = 0;
      if (*(char *)((long)puVar3 + 0x1291) == '\x01') {
        FUN_1093a8ac8(puVar3 + 0x4b8,plVar11 + 2,plVar11 + 2);
      }
      func_0x0001093ac858(lVar8 + 0x48);
      plVar7 = *(long **)(lVar8 + 0x18);
      if (plVar7 == (long *)0x0) {
        lVar4 = 0;
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        lVar4 = 0;
        do {
          lVar5 = lVar5 + (plVar7[5] - plVar7[4] >> 5);
          lVar4 = lVar4 + (plVar7[8] - plVar7[7] >> 2);
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      FUN_1093ac8e4(lVar8,lVar4,lVar5);
      lVar5 = lVar8 + 0x48;
      FUN_1093ad6a4(lVar5,3);
      FUN_1093ada18(lVar8 + 0x48,0);
      FUN_1093ada18(lVar8 + 0x48,1);
      FUN_1093adf30(lVar8 + 0x48,0xc);
      plVar7 = *(long **)(lVar8 + 0x18);
      if (plVar7 != (long *)0x0) {
        iVar10 = 0;
        do {
          if (plVar7[8] != plVar7[7]) {
            FUN_1093ac9a8(plVar7 + 4,lVar8);
            lVar4 = plVar7[7];
            if (plVar7[8] != lVar4) {
              uVar12 = 0;
              do {
                iStack_25f4 = *(int *)(lVar4 + uVar12 * 4) + iVar10;
                func_0x0001093aa148(lVar5 + 0x10,&iStack_25f4);
                uVar12 = uVar12 + 1;
                lVar4 = plVar7[7];
              } while (uVar12 < (ulong)(plVar7[8] - lVar4 >> 2));
            }
            iVar10 = iVar10 + (int)((ulong)(plVar7[5] - plVar7[4]) >> 5);
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
}



/* Entry: 1093a7228; end: 1093a73b3;  */

void FUN_1093a7228(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  int iStack_64;
  
  func_0x0001093a8858(param_1 + 0x12e0);
  for (plVar5 = *(long **)(param_1 + 0x1248); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    lVar4 = plVar5[3];
    if (*(char *)(lVar4 + 6) == '\x01') {
      *(undefined1 *)(lVar4 + 6) = 0;
      if (*(char *)(param_1 + 0x1291) == '\x01') {
        FUN_1093a8ac8(param_1 + 0x12e0,plVar5 + 2,plVar5 + 2);
      }
      func_0x0001093ac858(lVar4 + 0x48);
      plVar3 = *(long **)(lVar4 + 0x18);
      if (plVar3 == (long *)0x0) {
        lVar1 = 0;
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        lVar1 = 0;
        do {
          lVar2 = lVar2 + (plVar3[5] - plVar3[4] >> 5);
          lVar1 = lVar1 + (plVar3[8] - plVar3[7] >> 2);
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      FUN_1093ac8e4(lVar4,lVar1,lVar2);
      lVar2 = lVar4 + 0x48;
      FUN_1093ad6a4(lVar2,3);
      FUN_1093ada18(lVar4 + 0x48,0);
      FUN_1093ada18(lVar4 + 0x48,1);
      FUN_1093adf30(lVar4 + 0x48,0xc);
      plVar3 = *(long **)(lVar4 + 0x18);
      if (plVar3 != (long *)0x0) {
        iVar6 = 0;
        do {
          if (plVar3[8] != plVar3[7]) {
            FUN_1093ac9a8(plVar3 + 4,lVar4);
            lVar1 = plVar3[7];
            if (plVar3[8] != lVar1) {
              uVar7 = 0;
              do {
                iStack_64 = *(int *)(lVar1 + uVar7 * 4) + iVar6;
                func_0x0001093aa148(lVar2 + 0x10,&iStack_64);
                uVar7 = uVar7 + 1;
                lVar1 = plVar3[7];
              } while (uVar7 < (ulong)(plVar3[8] - lVar1 >> 2));
            }
            iVar6 = iVar6 + (int)((ulong)(plVar3[5] - plVar3[4]) >> 5);
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
    }
  }
  return;
}



/* Entry: 1093a73b4; end: 1093a7ad7;  */

void FUN_1093a73b4(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  long lStack_a8;
  undefined8 uStack_a0;
  int iStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  plVar18 = *(long **)(param_1 + 0x12f0);
  if (plVar18 != (long *)0x0) {
    lVar14 = 0;
    do {
      plStack_90 = plVar18 + 2;
      lVar5 = param_1 + 0x1238;
      FUN_1093abc6c(lVar5,plStack_90,&UNK_10dd5b8f9,&plStack_90,&uStack_a0);
      plVar1 = (long *)(*(long *)(lVar5 + 0x18) + 0x48);
      FUN_1093ada18(plVar1,1);
      (**(code **)(*plVar1 + 0x18))();
      lVar14 = (long)plVar1 + lVar14;
      plVar18 = (long *)*plVar18;
    } while (plVar18 != (long *)0x0);
    if (lVar14 != 0) {
      lVar5 = *(long *)(param_1 + 0x12a8);
      if (lVar5 != 0) {
        piVar8 = *(int **)(param_1 + 0x1298);
        do {
          if (*piVar8 != 0) {
            *piVar8 = 0;
          }
          piVar8 = piVar8 + 0xe;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      *(undefined8 *)(param_1 + 0x12a0) = 0;
      func_0x0001093a8858(param_1 + 0x1308);
      FUN_1093ae4d8(param_1 + 0x1298,lVar14);
      lStack_88 = 0;
      plStack_90 = (long *)0x0;
      uStack_78 = 0;
      lStack_80 = 0;
      func_0x0001093ae724(&plStack_90,0x200);
      for (plVar18 = *(long **)(param_1 + 0x12f0); plVar18 != (long *)0x0;
          plVar18 = (long *)*plVar18) {
        uStack_a0 = (long)(plVar18 + 2);
        lVar14 = param_1 + 0x1238;
        FUN_1093abc6c(lVar14,uStack_a0,&UNK_10dd5b8f9,&uStack_a0,&lStack_a8);
        lVar15 = *(long *)(lVar14 + 0x18);
        lVar14 = lVar15 + 0x48;
        FUN_1093ada18(lVar14,0);
        lVar5 = lVar15 + 0x48;
        FUN_1093ada18(lVar5,1);
        lVar2 = *(long *)(lVar14 + 0x10);
        lVar9 = *(long *)(lVar14 + 0x18);
        if (lVar9 != lVar2) {
          lVar20 = 0;
          uVar19 = 0;
          do {
            if ((*(ulong *)(*(long *)(lVar15 + 0x30) + (uVar19 >> 6) * 8) >> (uVar19 & 0x3f) & 1) !=
                0) {
              uVar24 = *(undefined8 *)(lVar2 + lVar20);
              uStack_a0 = CONCAT44((int)(long)((float)((ulong)uVar24 >> 0x20) * 100000.0),
                                   (int)(long)((float)uVar24 * 100000.0));
              iStack_98 = (int)(*(float *)((undefined8 *)(lVar2 + lVar20) + 1) * 100000.0);
              lVar2 = param_1 + 0x1298;
              FUN_1093ae53c(lVar2,&uStack_a0);
              uVar6 = *(ulong *)(lVar2 + 0x20);
              if (uVar6 < 4) {
                lVar9 = *(long *)(lVar5 + 0x10);
                *(ulong *)(lVar2 + 0x20) = uVar6 + 1;
                *(long *)(lVar2 + uVar6 * 8) = lVar9 + lVar20;
              }
              else {
                FUN_1093ae5d0(&plStack_90,&uStack_a0);
                lStack_a8 = *(long *)(lVar5 + 0x10) + lVar20;
                func_0x0001093ae660();
              }
              lVar2 = *(long *)(lVar14 + 0x10);
              lVar9 = *(long *)(lVar14 + 0x18);
            }
            uVar19 = uVar19 + 1;
            lVar20 = lVar20 + 0xc;
          } while (uVar19 < (ulong)((lVar9 - lVar2 >> 2) * -0x5555555555555555));
        }
        iVar13 = -1;
        do {
          iVar16 = -1;
          do {
            iVar17 = -1;
            do {
              lVar14 = uStack_a0;
              uStack_a0._0_4_ =
                   CONCAT22(*(short *)((long)plVar18 + 0x12) + (short)iVar16,
                            *(short *)(plVar18 + 2) + (short)iVar13);
              uStack_a0._6_2_ = SUB82(lVar14,6);
              uStack_a0._0_6_ =
                   CONCAT24(*(short *)((long)plVar18 + 0x14) + (short)iVar17,(undefined4)uStack_a0);
              lVar14 = param_1 + 0x12e0;
              FUN_1093aedec(lVar14,&uStack_a0);
              lVar5 = uStack_a0;
              if (lVar14 == 0) {
                uStack_a0._0_4_ =
                     CONCAT22(*(short *)((long)plVar18 + 0x12) + (short)iVar16,
                              *(short *)(plVar18 + 2) + (short)iVar13);
                uStack_a0._6_2_ = SUB82(lVar5,6);
                uStack_a0._0_6_ =
                     CONCAT24(*(short *)((long)plVar18 + 0x14) + (short)iVar17,(undefined4)uStack_a0
                             );
                FUN_1093a8d24(param_1 + 0x1308,&uStack_a0,&uStack_a0);
              }
              iVar17 = iVar17 + 1;
            } while (iVar17 != 2);
            iVar16 = iVar16 + 1;
          } while (iVar16 != 2);
          iVar13 = iVar13 + 1;
        } while (iVar13 != 2);
      }
      for (plVar18 = *(long **)(param_1 + 0x1318); plVar18 != (long *)0x0;
          plVar18 = (long *)*plVar18) {
        lVar14 = (long)(plVar18 + 2);
        lVar5 = param_1 + 0x1238;
        func_0x0001093aeedc(lVar5,lVar14);
        if (lVar5 != 0) {
          lVar5 = param_1 + 0x1238;
          uStack_a0 = lVar14;
          FUN_1093abc6c(lVar5,lVar14,&UNK_10dd5b8f9,&uStack_a0,&lStack_a8);
          lVar15 = *(long *)(lVar5 + 0x18);
          lVar14 = lVar15 + 0x48;
          FUN_1093ada18(lVar14,0);
          lVar5 = lVar15 + 0x48;
          FUN_1093ada18(lVar5,1);
          lVar2 = *(long *)(lVar14 + 0x10);
          lVar9 = *(long *)(lVar14 + 0x18);
          if (lVar9 != lVar2) {
            lVar20 = 0;
            uVar19 = 0;
            do {
              if ((*(ulong *)(*(long *)(lVar15 + 0x30) + (uVar19 >> 6) * 8) >> (uVar19 & 0x3f) & 1)
                  != 0) {
                uVar24 = *(undefined8 *)(lVar2 + lVar20);
                uStack_a0 = CONCAT44((int)(long)((float)((ulong)uVar24 >> 0x20) * 100000.0),
                                     (int)(long)((float)uVar24 * 100000.0));
                iStack_98 = (int)(*(float *)((undefined8 *)(lVar2 + lVar20) + 1) * 100000.0);
                lVar2 = param_1 + 0x1298;
                FUN_1093aeaac(lVar2,&uStack_a0);
                if (lVar2 != 0) {
                  uVar6 = *(ulong *)(lVar2 + 0x30);
                  if (uVar6 < 4) {
                    lVar9 = *(long *)(lVar5 + 0x10);
                    *(ulong *)(lVar2 + 0x30) = uVar6 + 1;
                    *(long *)(lVar2 + 0x10 + uVar6 * 8) = lVar9 + lVar20;
                  }
                  else {
                    FUN_1093ae5d0(&plStack_90,&uStack_a0);
                    lStack_a8 = *(long *)(lVar5 + 0x10) + lVar20;
                    func_0x0001093ae660();
                  }
                }
                lVar2 = *(long *)(lVar14 + 0x10);
                lVar9 = *(long *)(lVar14 + 0x18);
              }
              uVar19 = uVar19 + 1;
              lVar20 = lVar20 + 0xc;
            } while (uVar19 < (ulong)((lVar9 - lVar2 >> 2) * -0x5555555555555555));
          }
        }
      }
      if (lStack_88 != 0) {
        plVar1 = plStack_90 + lStack_80 * 5;
        plVar18 = plStack_90;
        if (0 < lStack_80) {
          do {
            if (0 < (int)*plVar18) break;
            plVar18 = plVar18 + 5;
          } while (plVar18 < plVar1);
        }
LAB_1093a7964:
        if (plVar18 != plVar1) {
          plVar3 = (long *)(param_1 + 0x1298);
          FUN_1093ae53c(plVar3,(int *)((long)plVar18 + 4));
          plVar7 = (long *)plVar18[2];
          uVar24 = *(undefined8 *)*plVar7;
          fVar23 = *(float *)((undefined8 *)*plVar7 + 1);
          uVar19 = plVar18[3] - (long)plVar7 >> 3;
          if (1 < uVar19) {
            lVar14 = uVar19 - 1;
            plVar11 = plVar7;
            do {
              plVar11 = plVar11 + 1;
              uVar26 = *(undefined8 *)*plVar11;
              uVar24 = CONCAT44((float)((ulong)uVar24 >> 0x20) + (float)((ulong)uVar26 >> 0x20),
                                (float)uVar24 + (float)uVar26);
              fVar23 = fVar23 + *(float *)((undefined8 *)*plVar11 + 1);
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
          lVar5 = plVar3[4];
          lVar14 = lVar5;
          plVar11 = plVar3;
          while( true ) {
            fVar21 = (float)uVar24;
            fVar22 = (float)((ulong)uVar24 >> 0x20);
            if (lVar14 == 0) break;
            uVar24 = *(undefined8 *)*plVar11;
            uVar24 = CONCAT44(fVar22 + (float)((ulong)uVar24 >> 0x20),fVar21 + (float)uVar24);
            fVar23 = fVar23 + *(float *)((undefined8 *)*plVar11 + 1);
            lVar14 = lVar14 + -1;
            plVar11 = plVar11 + 1;
          }
          fVar25 = fVar23 * fVar23 + fVar21 * fVar21 + fVar22 * fVar22;
          if (0.0 < fVar25) {
            fVar25 = SQRT(fVar25);
            uVar24 = CONCAT44(fVar22 / fVar25,fVar21 / fVar25);
            fVar23 = fVar23 / fVar25;
          }
          if ((long *)plVar18[3] != plVar7) {
            uVar19 = 0;
            do {
              puVar12 = (undefined8 *)plVar7[uVar19];
              *puVar12 = uVar24;
              *(float *)(puVar12 + 1) = fVar23;
              uVar19 = uVar19 + 1;
              plVar7 = (long *)plVar18[2];
            } while (uVar19 < (ulong)(plVar18[3] - (long)plVar7 >> 3));
            lVar5 = plVar3[4];
          }
          if (lVar5 != 0) {
            uVar19 = 0;
            do {
              puVar12 = (undefined8 *)plVar3[uVar19];
              *puVar12 = uVar24;
              *(float *)(puVar12 + 1) = fVar23;
              uVar19 = uVar19 + 1;
            } while (uVar19 < (ulong)plVar3[4]);
          }
          puVar4 = (uint *)(param_1 + 0x1298);
          FUN_1093aeaac(puVar4,(int *)((long)plVar18 + 4));
          if (puVar4 != (uint *)0x0) {
            *puVar4 = *puVar4 | 0x80000000;
            *(long *)(param_1 + 0x12a0) = *(long *)(param_1 + 0x12a0) + -1;
          }
          do {
            plVar18 = plVar18 + 5;
            if (plVar1 <= plVar18) break;
          } while ((int)*plVar18 < 1);
          goto LAB_1093a7964;
        }
      }
      if (*(long *)(param_1 + 0x12a0) != 0) {
        piVar8 = *(int **)(param_1 + 0x1298);
        piVar10 = piVar8 + *(long *)(param_1 + 0x12a8) * 0xe;
        if (0 < *(long *)(param_1 + 0x12a8)) {
          do {
            if (0 < *piVar8) break;
            piVar8 = piVar8 + 0xe;
          } while (piVar8 < piVar10);
        }
LAB_1093a7a50:
        if (piVar8 != piVar10) {
          if (1 < *(ulong *)(piVar8 + 0xc)) {
            uVar24 = **(undefined8 **)(piVar8 + 4);
            fVar23 = *(float *)(*(undefined8 **)(piVar8 + 4) + 1);
            lVar14 = *(ulong *)(piVar8 + 0xc) - 1;
            plVar18 = (long *)(piVar8 + 6);
            do {
              uVar26 = *(undefined8 *)*plVar18;
              fVar21 = (float)uVar24 + (float)uVar26;
              fVar22 = (float)((ulong)uVar24 >> 0x20) + (float)((ulong)uVar26 >> 0x20);
              uVar24 = CONCAT44(fVar22,fVar21);
              fVar23 = fVar23 + *(float *)((undefined8 *)*plVar18 + 1);
              lVar14 = lVar14 + -1;
              plVar18 = plVar18 + 1;
            } while (lVar14 != 0);
            fVar25 = fVar23 * fVar23 + fVar21 * fVar21 + fVar22 * fVar22;
            if (0.0 < fVar25) {
              fVar25 = SQRT(fVar25);
              uVar24 = CONCAT44(fVar22 / fVar25,fVar21 / fVar25);
              fVar23 = fVar23 / fVar25;
            }
            uVar19 = 0;
            do {
              puVar12 = *(undefined8 **)(piVar8 + uVar19 * 2 + 4);
              *puVar12 = uVar24;
              *(float *)(puVar12 + 1) = fVar23;
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(ulong *)(piVar8 + 0xc));
          }
          do {
            piVar8 = piVar8 + 0xe;
            if (piVar10 <= piVar8) break;
          } while (*piVar8 < 1);
          goto LAB_1093a7a50;
        }
      }
      FUN_1093aefcc(&plStack_90);
    }
  }
  return;
}



/* Entry: 1093a7ad8; end: 1093a7cd7;  */

void FUN_1093a7ad8(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  short *psVar1;
  short *psVar2;
  long lVar3;
  short sStack_46;
  short sStack_44;
  short sStack_42;
  
  func_0x0001093a8858(param_4);
  FUN_1093a88bc(param_4,(long)((float)(ulong)((param_3[1] - *param_3 >> 1) * -0x5555555555555553) /
                              *(float *)(param_4 + 0x20)));
  psVar2 = (short *)param_3[1];
  for (psVar1 = (short *)*param_3; psVar1 != psVar2; psVar1 = psVar1 + 3) {
    lVar3 = param_2 + 0x50;
    FUN_1093a8f80(lVar3,psVar1);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x18) == 0)) {
      _puts(&UNK_10f569046);
    }
    else {
      FUN_1093a8ac8(param_4,psVar1,psVar1);
      sStack_46 = *psVar1 + -1;
      sStack_44 = (short)*(undefined4 *)(psVar1 + 1);
      sStack_42 = (short)((uint)*(undefined4 *)(psVar1 + 1) >> 0x10);
      FUN_1093a8d24(param_4,&sStack_46,&sStack_46);
      sStack_46 = *psVar1;
      sStack_44 = psVar1[1] + -1;
      sStack_42 = psVar1[2];
      FUN_1093a8d24(param_4,&sStack_46,&sStack_46);
      sStack_42 = psVar1[2] + -1;
      sStack_46 = (short)*(undefined4 *)psVar1;
      sStack_44 = (short)((uint)*(undefined4 *)psVar1 >> 0x10);
      FUN_1093a8d24(param_4,&sStack_46,&sStack_46);
      sStack_46 = *psVar1 + -1;
      sStack_44 = psVar1[1] + -1;
      sStack_42 = psVar1[2];
      FUN_1093a8d24(param_4,&sStack_46,&sStack_46);
      sStack_46 = *psVar1 + -1;
      sStack_44 = psVar1[1];
      sStack_42 = psVar1[2] + -1;
      FUN_1093a8d24(param_4,&sStack_46,&sStack_46);
      sStack_46 = *psVar1;
      sStack_44 = psVar1[1] + -1;
      sStack_42 = psVar1[2] + -1;
      FUN_1093a8d24(param_4,&sStack_46,&sStack_46);
      sStack_46 = *psVar1 + -1;
      sStack_44 = psVar1[1] + -1;
      sStack_42 = psVar1[2] + -1;
      FUN_1093a8d24(param_4,&sStack_46,&sStack_46);
    }
  }
  return;
}



/* Entry: 1093a7cd8; end: 1093a803b;  */

/* WARNING: Removing unreachable block (ram,0x0001093a7ec0) */
/* WARNING: Removing unreachable block (ram,0x0001093a7f38) */

void FUN_1093a7cd8(undefined8 param_1,long param_2,undefined8 param_3,ulong *param_4,int param_5,
                  long param_6,long param_7,long param_8)

{
  short sVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  ushort uVar12;
  short sVar13;
  bool bVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  ulong *puVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  short sVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  short sVar33;
  ulong uVar34;
  ushort *puVar35;
  uint uVar36;
  short *psVar37;
  long lVar38;
  uint *puVar39;
  byte *pbVar40;
  long *plVar41;
  undefined8 uStack_7cc;
  int iStack_7c4;
  int aiStack_7c0 [14];
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  uint uStack_770;
  uint uStack_76c;
  undefined2 uStack_768;
  undefined1 uStack_766;
  undefined1 uStack_765;
  uint uStack_764;
  uint uStack_760;
  uint uStack_75c;
  uint uStack_758;
  uint uStack_754;
  uint uStack_750;
  uint uStack_74c;
  uint uStack_748;
  uint uStack_744;
  uint uStack_740;
  uint uStack_73c;
  uint uStack_738;
  uint uStack_734;
  long lStack_730;
  long lStack_698;
  long lStack_690;
  long lStack_688;
  long lStack_680;
  long lStack_678;
  long alStack_670 [8];
  undefined1 uStack_629;
  byte abStack_628 [736];
  ulong auStack_348 [91];
  char cStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_629 = 0;
  alStack_670[6] = 0;
  alStack_670[7] = 0;
  alStack_670[4] = 0;
  alStack_670[5] = 0;
  alStack_670[2] = 0;
  alStack_670[3] = 0;
  alStack_670[1] = 0;
  FUN_1093a9070(param_3,(short *)((long)param_4 + 0x180c),alStack_670 + 7,alStack_670 + 6,
                alStack_670 + 5,alStack_670 + 4,alStack_670 + 3,alStack_670 + 2);
  puVar18 = param_4;
  lVar32 = alStack_670[7];
  lVar20 = alStack_670[6];
  lVar38 = alStack_670[5];
  lVar31 = alStack_670[4];
  lVar24 = alStack_670[3];
  FUN_1093a9274(param_7);
  iVar23 = (int)lVar24;
  iVar21 = (int)lVar38;
  iVar22 = (int)lVar31;
  if (*(char *)(param_2 + 0x1290) == '\x01') {
    sVar33 = 0x7fff;
    iVar26 = 0x8001;
    lVar38 = 0x2d9;
    psVar37 = (short *)(param_7 + 2);
    do {
      sVar13 = psVar37[-1];
      sVar1 = sVar13;
      if (sVar33 <= sVar13) {
        sVar1 = sVar33;
      }
      sVar25 = (short)iVar26;
      if (sVar13 <= sVar25) {
        sVar13 = sVar25;
      }
      if (*psVar37 != 0) {
        sVar25 = sVar13;
        sVar33 = sVar1;
      }
      iVar26 = (int)sVar25;
      lVar38 = lVar38 + -1;
      psVar37 = psVar37 + 6;
    } while (lVar38 != 0);
    if (sVar33 < 1) {
      if ((sVar33 != 0) && (iVar26 < 0)) goto LAB_1093a7e00;
    }
    else if (iVar26 != 0) {
LAB_1093a7e00:
      plVar16 = (long *)0x0;
      goto LAB_1093a7ffc;
    }
  }
  if (param_6 == 0) {
LAB_1093a7f8c:
    lVar38 = 0;
    puVar35 = (ushort *)(param_7 + 2);
    do {
      *(bool *)(param_8 + lVar38) = param_5 <= (int)(uint)*puVar35;
      lVar38 = lVar38 + 1;
      puVar35 = puVar35 + 6;
    } while (lVar38 != 0x2d9);
  }
  else {
    puVar18 = (ulong *)((long)param_4 + 0x180c);
    lVar38 = param_6;
    func_0x0001093a9c0c();
    if ((lVar38 == 0) || (lVar38 = *(long *)(lVar38 + 0x18), lVar38 == 0)) goto LAB_1093a7f8c;
    lStack_678 = 0;
    alStack_670[0] = 0;
    lStack_688 = 0;
    lStack_680 = 0;
    lStack_698 = 0;
    lStack_690 = 0;
    FUN_1093a936c(param_6,(short *)((long)param_4 + 0x180c),alStack_670,&lStack_678,&lStack_680,
                  &lStack_688,&lStack_690,&lStack_698);
    lVar32 = 0;
    if (alStack_670[0] != 0) {
      lVar32 = alStack_670[0] + 0x400;
    }
    lVar20 = 0;
    if (lStack_678 != 0) {
      lVar20 = lStack_678 + 0x400;
    }
    lVar31 = 0;
    if (lStack_680 != 0) {
      lVar31 = lStack_680 + 0x400;
    }
    lVar24 = 0;
    if (lStack_688 != 0) {
      lVar24 = lStack_688 + 0x400;
    }
    lVar2 = 0;
    if (lStack_690 != 0) {
      lVar2 = lStack_690 + 0x400;
    }
    lVar3 = 0;
    if (lStack_698 != 0) {
      lVar3 = lStack_698 + 0x400;
    }
    func_0x0001093a956c(auStack_348,lVar38 + 0x400,lVar32,lVar20,lVar31,lVar24,lVar2,lVar3);
    lVar32 = 0;
    if (alStack_670[0] != 0) {
      lVar32 = alStack_670[0] + 0x200;
    }
    lVar20 = 0;
    if (lStack_678 != 0) {
      lVar20 = lStack_678 + 0x200;
    }
    iVar21 = 0;
    if (lStack_680 != 0) {
      iVar21 = (int)lStack_680 + 0x200;
    }
    iVar22 = 0;
    if (lStack_688 != 0) {
      iVar22 = (int)lStack_688 + 0x200;
    }
    iVar23 = 0;
    if (lStack_690 != 0) {
      iVar23 = (int)lStack_690 + 0x200;
    }
    func_0x0001093a956c(abStack_628,lVar38 + 0x200);
    uVar34 = 0;
    uVar30 = 0;
    do {
      uVar30 = *(ulong *)((long)auStack_348 + uVar34) | uVar30;
      bVar14 = uVar34 < 0x2ca;
      uVar34 = uVar34 + 8;
    } while (bVar14);
    if (uVar30 == 0 && cStack_70 == '\0') {
      puVar18 = auStack_348;
      lVar32 = 0x2d9;
      _memcpy(param_8);
      lVar38 = 0x1340;
    }
    else {
      puVar18 = auStack_348;
      FUN_1098ed944(param_8);
      lVar38 = 0x1338;
    }
    lVar31 = 0;
    *(long *)(param_2 + lVar38) = *(long *)(param_2 + lVar38) + 1;
    do {
      *(byte *)(param_8 + lVar31) = *(byte *)(param_8 + lVar31) & abStack_628[lVar31];
      lVar31 = lVar31 + 1;
    } while (lVar31 != 0x2d9);
  }
  plVar16 = (long *)0x1;
LAB_1093a7ffc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_730 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar26 = iVar22 * 9 + iVar21 + iVar23 * 0x51;
  puVar39 = (uint *)(lVar32 + (long)iVar26 * 0xc);
  aiStack_7c0[0xc] = *puVar39;
  aiStack_7c0[0xd] = puVar39[1];
  uStack_788 = *(undefined8 *)(puVar39 + 2);
  pbVar40 = (byte *)(lVar20 + iVar26);
  uStack_780 = *(undefined8 *)(puVar39 + 4);
  uStack_778 = *(undefined8 *)(puVar39 + 0x1e);
  uStack_770 = puVar39[0x20];
  uStack_76c = puVar39[0x1b];
  uStack_766 = *(undefined1 *)((long)puVar39 + 0x72);
  uStack_768 = (short)puVar39[0x1c];
  uStack_765 = *(undefined1 *)((long)puVar39 + 0x73);
  uStack_764 = puVar39[0x1d];
  uStack_760 = puVar39[0xf3];
  uStack_75c = puVar39[0xf4];
  uStack_758 = puVar39[0xf5];
  uStack_754 = puVar39[0xf6];
  uStack_750 = puVar39[0xf7];
  uStack_74c = puVar39[0xf8];
  uStack_748 = puVar39[0x111];
  uStack_744 = puVar39[0x112];
  uStack_740 = puVar39[0x113];
  uStack_73c = puVar39[0x10e];
  uStack_738 = puVar39[0x10f];
  uStack_734 = puVar39[0x110];
  bVar4 = *pbVar40;
  bVar5 = pbVar40[1];
  bVar6 = pbVar40[10];
  bVar7 = pbVar40[9];
  bVar8 = pbVar40[0x51];
  bVar9 = pbVar40[0x52];
  bVar10 = pbVar40[0x5b];
  bVar11 = pbVar40[0x5a];
  plVar17 = (long *)(ulong)bVar11;
  if ((((bVar5 != 0 || bVar4 != 0) || (bVar6 != 0 || bVar7 != 0)) ||
      ((bVar8 != 0 || bVar9 != 0) || bVar10 != 0)) || bVar11 != 0) {
    uStack_788._4_2_ = (ushort)((ulong)*(undefined8 *)(puVar39 + 2) >> 0x20);
    uStack_778._0_2_ = (ushort)*(undefined8 *)(puVar39 + 0x1e);
    uVar34 = (ulong)(puVar39[0xf6] >> 10 & 0x20 | puVar39[0xf3] >> 0xb & 0x10 |
                     puVar39[0x111] >> 9 & 0x40 | puVar39[0x10e] >> 8 & 0x80 | *puVar39 >> 0xf & 1 |
                    uStack_788._4_2_ >> 0xe & 2 | (ushort)uStack_778 >> 0xd & 4 |
                    puVar39[0x1b] >> 0xc & 8);
    uVar12 = *(ushort *)(uVar34 * 2 + 0x1132e6e60);
    if (uVar12 != 0) {
      lVar32 = (long)iVar26;
      uVar27 = 8;
      if (iVar21 != 0) {
        uVar27 = 0;
      }
      uVar28 = 0x10;
      if (iVar22 != 0) {
        uVar28 = 0;
      }
      uVar36 = 0x20;
      if (iVar23 != 0) {
        uVar36 = 0;
      }
      if (iVar21 == 7) {
        uVar27 = uVar27 + 1;
      }
      uVar36 = uVar27 | uVar28 | uVar36;
      uVar28 = 2;
      if (iVar22 != 7) {
        uVar28 = 0;
      }
      uVar29 = 4;
      if (iVar23 != 7) {
        uVar29 = 0;
      }
      iVar21 = iVar21 + (short)*puVar18 * 8;
      iVar22 = iVar22 + *(short *)((long)puVar18 + 2) * 8;
      aiStack_7c0[6] = -1;
      aiStack_7c0[7] = -1;
      aiStack_7c0[4] = -1;
      aiStack_7c0[5] = -1;
      aiStack_7c0[10] = -1;
      aiStack_7c0[0xb] = -1;
      aiStack_7c0[8] = -1;
      aiStack_7c0[9] = -1;
      iVar23 = iVar23 + *(short *)((long)puVar18 + 4) * 8;
      aiStack_7c0[2] = -1;
      aiStack_7c0[3] = -1;
      aiStack_7c0[0] = -1;
      aiStack_7c0[1] = -1;
      if (((uVar12 & 1) != 0) && ((bVar5 & bVar4) != 0)) {
        puVar18 = &uStack_7cc;
        plVar17 = plVar16;
        uStack_7cc._0_4_ = iVar21;
        uStack_7cc._4_4_ = iVar22;
        iStack_7c4 = iVar23;
        FUN_1093a9d68(param_1,plVar16,puVar18,aiStack_7c0 + 0xc,(long)&uStack_788 + 4,0,uVar36,
                      (long)plVar16 + lVar32 * 2 + 0x11c);
        aiStack_7c0[0] = (int)plVar17;
      }
      uVar29 = uVar29 | uVar28;
      uVar28 = uVar29 | uVar36;
      if (((uVar12 >> 1 & 1) != 0) && ((bVar6 & bVar5) != 0)) {
        uStack_7cc._0_4_ = iVar21 + 1;
        puVar18 = &uStack_7cc;
        plVar17 = plVar16;
        uStack_7cc._4_4_ = iVar22;
        iStack_7c4 = iVar23;
        FUN_1093a9d68(param_1,plVar16,puVar18,(long)&uStack_788 + 4,&uStack_778,1,
                      uVar28 & 0xfffffff3,(long)plVar16 + lVar32 * 2 + 0x6d0);
        aiStack_7c0[1] = (int)plVar17;
      }
      if (((uVar12 >> 2 & 1) != 0) && ((bVar7 & bVar6) != 0)) {
        uStack_7cc._4_4_ = iVar22 + 1;
        puVar18 = &uStack_7cc;
        plVar17 = plVar16;
        uStack_7cc._0_4_ = iVar21;
        iStack_7c4 = iVar23;
        FUN_1093a9d68(param_1,plVar16,puVar18,&uStack_76c,&uStack_778,0,uVar28 & 0x2b,
                      (long)plVar16 + lVar32 * 2 + 0x12e);
        aiStack_7c0[2] = (int)plVar17;
      }
      if (((uVar12 >> 3 & 1) != 0) && ((bVar7 & bVar4) != 0)) {
        puVar18 = &uStack_7cc;
        plVar17 = plVar16;
        uStack_7cc._0_4_ = iVar21;
        uStack_7cc._4_4_ = iVar22;
        iStack_7c4 = iVar23;
        FUN_1093a9d68(param_1,plVar16,puVar18,aiStack_7c0 + 0xc,&uStack_76c,1,uVar28 & 0x3a,
                      (long)plVar16 + lVar32 * 2 + 0x6ce);
        aiStack_7c0[3] = (int)plVar17;
      }
      if (((bVar9 & bVar8) != 0) && ((uVar12 >> 4 & 1) != 0)) {
        iStack_7c4 = iVar23 + 1;
        puVar18 = &uStack_7cc;
        plVar17 = plVar16;
        uStack_7cc._0_4_ = iVar21;
        uStack_7cc._4_4_ = iVar22;
        FUN_1093a9d68(param_1,plVar16,puVar18,&uStack_760,&uStack_754,0,uVar28 & 0xdddddddd,
                      (long)plVar16 + lVar32 * 2 + 0x1be);
        aiStack_7c0[4] = (int)plVar17;
      }
      if (((bVar10 & bVar9) != 0) && ((uVar12 >> 5 & 1) != 0)) {
        uStack_7cc._0_4_ = iVar21 + 1;
        iStack_7c4 = iVar23 + 1;
        puVar18 = &uStack_7cc;
        plVar17 = plVar16;
        uStack_7cc._4_4_ = iVar22;
        FUN_1093a9d68(param_1,plVar16,puVar18,&uStack_754,&uStack_748,1,uVar29 | uVar36 & 0x17,
                      (long)plVar16 + lVar32 * 2 + 0x772);
        aiStack_7c0[5] = (int)plVar17;
      }
      if (((bVar11 & bVar10) != 0) && ((uVar12 >> 6 & 1) != 0)) {
        uStack_7cc._4_4_ = iVar22 + 1;
        iStack_7c4 = iVar23 + 1;
        puVar18 = &uStack_7cc;
        plVar17 = plVar16;
        uStack_7cc._0_4_ = iVar21;
        FUN_1093a9d68(param_1,plVar16,puVar18,&uStack_73c,&uStack_748,0,uVar29 | uVar27,
                      (long)plVar16 + lVar32 * 2 + 0x1d0);
        aiStack_7c0[6] = (int)plVar17;
      }
      if (((bVar11 & bVar8) != 0) && ((uVar12 >> 7 & 1) != 0)) {
        iStack_7c4 = iVar23 + 1;
        puVar18 = &uStack_7cc;
        plVar17 = plVar16;
        uStack_7cc._0_4_ = iVar21;
        uStack_7cc._4_4_ = iVar22;
        FUN_1093a9d68(param_1,plVar16,puVar18,&uStack_760,&uStack_73c,1,uVar29 | uVar36 & 0x1e,
                      (long)plVar16 + lVar32 * 2 + 0x770);
        aiStack_7c0[7] = (int)plVar17;
      }
      if (((uVar12 >> 8 & 1) != 0) && ((bVar8 & bVar4) != 0)) {
        puVar18 = &uStack_7cc;
        plVar17 = plVar16;
        uStack_7cc._0_4_ = iVar21;
        uStack_7cc._4_4_ = iVar22;
        iStack_7c4 = iVar23;
        FUN_1093a9d68(param_1,plVar16,puVar18,aiStack_7c0 + 0xc,&uStack_760,2,uVar28 & 0x3c,
                      (long)plVar16 + lVar32 * 2 + 0xc80);
        aiStack_7c0[8] = (int)plVar17;
      }
      if (((uVar12 >> 9 & 1) != 0) && ((bVar9 & bVar5) != 0)) {
        uStack_7cc._0_4_ = iVar21 + 1;
        puVar18 = &uStack_7cc;
        plVar17 = plVar16;
        uStack_7cc._4_4_ = iVar22;
        iStack_7c4 = iVar23;
        FUN_1093a9d68(param_1,plVar16,puVar18,(long)&uStack_788 + 4,&uStack_754,2,uVar28 & 0x35,
                      (long)plVar16 + lVar32 * 2 + 0xc82);
        aiStack_7c0[9] = (int)plVar17;
      }
      if (((uVar12 >> 10 & 1) != 0) && ((bVar10 & bVar6) != 0)) {
        uStack_7cc._0_4_ = iVar21 + 1;
        uStack_7cc._4_4_ = iVar22 + 1;
        puVar18 = &uStack_7cc;
        plVar17 = plVar16;
        iStack_7c4 = iVar23;
        FUN_1093a9d68(param_1,plVar16,puVar18,&uStack_778,&uStack_748,2,uVar29 | uVar36 & 0xffffffe7
                      ,(long)plVar16 + lVar32 * 2 + 0xc94);
        aiStack_7c0[10] = (int)plVar17;
      }
      if (((uVar12 >> 0xb & 1) != 0) && ((bVar11 & bVar7) != 0)) {
        uStack_7cc._4_4_ = iVar22 + 1;
        puVar18 = &uStack_7cc;
        plVar17 = plVar16;
        uStack_7cc._0_4_ = iVar21;
        iStack_7c4 = iVar23;
        FUN_1093a9d68(param_1,plVar16,puVar18,&uStack_76c,&uStack_73c,2,uVar29 | uVar36 & 0xeeeeeeee
                      ,(long)plVar16 + lVar32 * 2 + 0xc92);
        aiStack_7c0[0xb] = (int)plVar17;
      }
      bVar4 = *(byte *)(uVar34 * 0x10 + 0x1132e7060);
      if (bVar4 != 0xff) {
        pbVar40 = (byte *)(uVar34 * 0x10 + 0x1132e7063);
        do {
          iVar21 = aiStack_7c0[bVar4];
          iVar22 = aiStack_7c0[pbVar40[-2]];
          iVar23 = aiStack_7c0[pbVar40[-1]];
          if ((iVar21 != -1 && iVar22 != -1) && iVar23 != -1) {
            puVar18 = (ulong *)plVar16[1];
            uStack_7cc._4_4_ = iVar22;
            if (*(char *)((long)plVar16 + 0x1293) == '\x01') {
              plVar17 = plVar16;
              uStack_7cc._0_4_ = iVar21;
              iStack_7c4 = iVar23;
              FUN_1093aa648(plVar16,puVar18,&uStack_7cc,aiStack_7c0,3);
            }
            else {
              plVar17 = plVar16;
              uStack_7cc._0_4_ = iVar23;
              iStack_7c4 = iVar21;
              FUN_1093aa648(plVar16,puVar18,&uStack_7cc,aiStack_7c0,3);
            }
          }
          bVar4 = *pbVar40;
          pbVar40 = pbVar40 + 3;
        } while (bVar4 != 0xff);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_730) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  FUN_1093aa840();
  FUN_1093aa9a0(plVar17);
  FUN_1093aac14(plVar17);
  if (plVar17[1] != *plVar17) {
    sVar33 = (short)*puVar18;
    if ((short)plVar17[0x24c] <= (short)*puVar18) {
      sVar33 = (short)plVar17[0x24c];
    }
    *(short *)(plVar17 + 0x24c) = sVar33;
    sVar33 = *(short *)((long)puVar18 + 2);
    if (*(short *)((long)plVar17 + 0x1262) <= *(short *)((long)puVar18 + 2)) {
      sVar33 = *(short *)((long)plVar17 + 0x1262);
    }
    *(short *)((long)plVar17 + 0x1262) = sVar33;
    sVar33 = *(short *)((long)puVar18 + 4);
    if (*(short *)((long)plVar17 + 0x1264) <= *(short *)((long)puVar18 + 4)) {
      sVar33 = *(short *)((long)plVar17 + 0x1264);
    }
    *(short *)((long)plVar17 + 0x1264) = sVar33;
    sVar33 = *(short *)((long)plVar17 + 0x1266);
    if (*(short *)((long)plVar17 + 0x1266) <= (short)*puVar18) {
      sVar33 = (short)*puVar18;
    }
    *(short *)((long)plVar17 + 0x1266) = sVar33;
    sVar33 = (short)plVar17[0x24d];
    if ((short)plVar17[0x24d] <= *(short *)((long)puVar18 + 2)) {
      sVar33 = *(short *)((long)puVar18 + 2);
    }
    *(short *)(plVar17 + 0x24d) = sVar33;
    sVar33 = *(short *)((long)plVar17 + 0x126a);
    if (*(short *)((long)plVar17 + 0x126a) <= *(short *)((long)puVar18 + 4)) {
      sVar33 = *(short *)((long)puVar18 + 4);
    }
    *(short *)((long)plVar17 + 0x126a) = sVar33;
  }
  plVar16 = plVar17;
  func_0x0001093aba24(plVar17,puVar18);
  if (plVar17[1] == *plVar17) {
    plVar16[2] = plVar16[1];
    plVar16[5] = plVar16[4];
  }
  else {
    plVar41 = plVar17 + 0xc;
    if ((plVar17[0xd] == *plVar41) &&
       (lVar32 = (plVar17[4] - plVar17[3] >> 2) * -0x5555555555555555, lVar32 != 0)) {
      func_0x000105343774(plVar41,lVar32,&UNK_10dfc8d94);
    }
    plVar15 = plVar16 + 1;
    plVar16[2] = *plVar15;
    FUN_1093abaa4(plVar15,(plVar17[4] - plVar17[3] >> 2) * -0x5555555555555555);
    func_0x0001093abad4(plVar15,plVar17 + 3,plVar17 + 6,plVar17 + 0xf,plVar17 + 9,plVar41);
    plVar41 = plVar16 + 4;
    if (plVar41 != plVar17) {
      lVar32 = *plVar17;
      lVar20 = plVar17[1];
      uVar34 = lVar20 - lVar32 >> 2;
      uVar30 = plVar16[6];
      plVar17 = (long *)*plVar41;
      if ((ulong)((long)(uVar30 - (long)plVar17) >> 2) < uVar34) {
        plVar15 = plVar41;
        lVar31 = lVar32;
        lVar38 = lVar20;
        uVar19 = uVar34;
        if (plVar17 != (long *)0x0) {
          plVar16[5] = (long)plVar17;
          __ZdlPv();
          uVar30 = 0;
          *plVar41 = 0;
          plVar16[5] = 0;
          plVar16[6] = 0;
          plVar15 = plVar17;
        }
        if (uVar34 >> 0x3e != 0) {
          FUN_109231bc0();
          if (uVar19 != 0) {
            FUN_109265f60();
            lVar32 = plVar15[1];
            lVar38 = lVar38 - lVar31;
            if (lVar38 != 0) {
              _memmove(lVar32,lVar31,lVar38);
            }
            plVar15[1] = lVar32 + lVar38;
          }
          return;
        }
        uVar19 = (long)uVar30 >> 1;
        if ((ulong)((long)uVar30 >> 1) <= uVar34) {
          uVar19 = uVar34;
        }
        if (0x7ffffffffffffffb < uVar30) {
          uVar19 = 0x3fffffffffffffff;
        }
        FUN_109265f60(plVar41,uVar19);
        lVar38 = plVar16[5];
        lVar20 = lVar20 - lVar32;
        if (lVar20 != 0) {
          _memmove(lVar38,lVar32,lVar20);
        }
        lVar38 = lVar38 + lVar20;
      }
      else {
        plVar41 = (long *)plVar16[5];
        if ((ulong)((long)plVar41 - (long)plVar17 >> 2) < uVar34) {
          lVar38 = lVar32 + ((long)plVar41 - (long)plVar17);
          if (plVar41 != plVar17) {
            _memmove(plVar17,lVar32);
            plVar41 = (long *)plVar16[5];
          }
          lVar20 = lVar20 - lVar38;
          if (lVar20 != 0) {
            _memmove(plVar41,lVar38,lVar20);
          }
          lVar38 = (long)plVar41 + lVar20;
        }
        else {
          lVar20 = lVar20 - lVar32;
          if (lVar20 != 0) {
            _memmove(plVar17,lVar32,lVar20);
          }
          lVar38 = (long)plVar17 + lVar20;
        }
      }
      plVar16[5] = lVar38;
      return;
    }
  }
  return;
}



/* Entry: 1093a803c; end: 1093a8797;  */

void FUN_1093a803c(undefined8 param_1,long *param_2,int *param_3,long param_4,long param_5,
                  int param_6,int param_7,int param_8)

{
  short sVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  ushort uVar13;
  int iVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  uint *puVar27;
  long lVar28;
  byte *pbVar29;
  long *plVar30;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int aiStack_110 [13];
  uint uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  uint uStack_c0;
  uint uStack_bc;
  undefined2 uStack_b8;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar14 = param_7 * 9 + param_6 + param_8 * 0x51;
  puVar27 = (uint *)(param_4 + (long)iVar14 * 0xc);
  aiStack_110[0xc] = *puVar27;
  uStack_dc = puVar27[1];
  uStack_d8 = *(undefined8 *)(puVar27 + 2);
  pbVar29 = (byte *)(param_5 + iVar14);
  uStack_d0 = *(undefined8 *)(puVar27 + 4);
  uStack_c8 = *(undefined8 *)(puVar27 + 0x1e);
  uStack_c0 = puVar27[0x20];
  uStack_bc = puVar27[0x1b];
  uStack_b6 = *(undefined1 *)((long)puVar27 + 0x72);
  uStack_b8 = (short)puVar27[0x1c];
  uStack_b5 = *(undefined1 *)((long)puVar27 + 0x73);
  uStack_b4 = puVar27[0x1d];
  uStack_b0 = puVar27[0xf3];
  uStack_ac = puVar27[0xf4];
  uStack_a8 = puVar27[0xf5];
  uStack_a4 = puVar27[0xf6];
  uStack_a0 = puVar27[0xf7];
  uStack_9c = puVar27[0xf8];
  uStack_98 = puVar27[0x111];
  uStack_94 = puVar27[0x112];
  uStack_90 = puVar27[0x113];
  uStack_8c = puVar27[0x10e];
  uStack_88 = puVar27[0x10f];
  uStack_84 = puVar27[0x110];
  bVar5 = *pbVar29;
  bVar6 = pbVar29[1];
  bVar7 = pbVar29[10];
  bVar8 = pbVar29[9];
  bVar9 = pbVar29[0x51];
  bVar10 = pbVar29[0x52];
  bVar11 = pbVar29[0x5b];
  bVar12 = pbVar29[0x5a];
  plVar16 = (long *)(ulong)bVar12;
  if ((((bVar6 != 0 || bVar5 != 0) || (bVar7 != 0 || bVar8 != 0)) ||
      ((bVar9 != 0 || bVar10 != 0) || bVar11 != 0)) || bVar12 != 0) {
    uStack_d8._4_2_ = (ushort)((ulong)*(undefined8 *)(puVar27 + 2) >> 0x20);
    uStack_c8._0_2_ = (ushort)*(undefined8 *)(puVar27 + 0x1e);
    uVar25 = (ulong)(puVar27[0xf6] >> 10 & 0x20 | puVar27[0xf3] >> 0xb & 0x10 |
                     puVar27[0x111] >> 9 & 0x40 | puVar27[0x10e] >> 8 & 0x80 | *puVar27 >> 0xf & 1 |
                    uStack_d8._4_2_ >> 0xe & 2 | (ushort)uStack_c8 >> 0xd & 4 |
                    puVar27[0x1b] >> 0xc & 8);
    uVar13 = *(ushort *)(uVar25 * 2 + 0x1132e6e60);
    if (uVar13 != 0) {
      lVar24 = (long)iVar14;
      uVar20 = 8;
      if (param_6 != 0) {
        uVar20 = 0;
      }
      uVar21 = 0x10;
      if (param_7 != 0) {
        uVar21 = 0;
      }
      uVar26 = 0x20;
      if (param_8 != 0) {
        uVar26 = 0;
      }
      if (param_6 == 7) {
        uVar20 = uVar20 + 1;
      }
      uVar26 = uVar20 | uVar21 | uVar26;
      uVar21 = 2;
      if (param_7 != 7) {
        uVar21 = 0;
      }
      uVar22 = 4;
      if (param_8 != 7) {
        uVar22 = 0;
      }
      param_6 = param_6 + (short)*param_3 * 8;
      param_7 = param_7 + *(short *)((long)param_3 + 2) * 8;
      aiStack_110[6] = -1;
      aiStack_110[7] = -1;
      aiStack_110[4] = -1;
      aiStack_110[5] = -1;
      aiStack_110[10] = -1;
      aiStack_110[0xb] = -1;
      aiStack_110[8] = -1;
      aiStack_110[9] = -1;
      param_8 = param_8 + (short)param_3[1] * 8;
      aiStack_110[2] = -1;
      aiStack_110[3] = -1;
      aiStack_110[0] = -1;
      aiStack_110[1] = -1;
      if (((uVar13 & 1) != 0) && ((bVar6 & bVar5) != 0)) {
        param_3 = &iStack_11c;
        plVar16 = param_2;
        iStack_11c = param_6;
        iStack_118 = param_7;
        iStack_114 = param_8;
        FUN_1093a9d68(param_1,param_2,param_3,aiStack_110 + 0xc,(long)&uStack_d8 + 4,0,uVar26,
                      (long)param_2 + lVar24 * 2 + 0x11c);
        aiStack_110[0] = (int)plVar16;
      }
      uVar22 = uVar22 | uVar21;
      uVar21 = uVar22 | uVar26;
      if (((uVar13 >> 1 & 1) != 0) && ((bVar7 & bVar6) != 0)) {
        iStack_11c = param_6 + 1;
        param_3 = &iStack_11c;
        plVar16 = param_2;
        iStack_118 = param_7;
        iStack_114 = param_8;
        FUN_1093a9d68(param_1,param_2,param_3,(long)&uStack_d8 + 4,&uStack_c8,1,uVar21 & 0xfffffff3,
                      (long)param_2 + lVar24 * 2 + 0x6d0);
        aiStack_110[1] = (int)plVar16;
      }
      if (((uVar13 >> 2 & 1) != 0) && ((bVar8 & bVar7) != 0)) {
        iStack_118 = param_7 + 1;
        param_3 = &iStack_11c;
        plVar16 = param_2;
        iStack_11c = param_6;
        iStack_114 = param_8;
        FUN_1093a9d68(param_1,param_2,param_3,&uStack_bc,&uStack_c8,0,uVar21 & 0x2b,
                      (long)param_2 + lVar24 * 2 + 0x12e);
        aiStack_110[2] = (int)plVar16;
      }
      if (((uVar13 >> 3 & 1) != 0) && ((bVar8 & bVar5) != 0)) {
        param_3 = &iStack_11c;
        plVar16 = param_2;
        iStack_11c = param_6;
        iStack_118 = param_7;
        iStack_114 = param_8;
        FUN_1093a9d68(param_1,param_2,param_3,aiStack_110 + 0xc,&uStack_bc,1,uVar21 & 0x3a,
                      (long)param_2 + lVar24 * 2 + 0x6ce);
        aiStack_110[3] = (int)plVar16;
      }
      if (((bVar10 & bVar9) != 0) && ((uVar13 >> 4 & 1) != 0)) {
        iStack_114 = param_8 + 1;
        param_3 = &iStack_11c;
        plVar16 = param_2;
        iStack_11c = param_6;
        iStack_118 = param_7;
        FUN_1093a9d68(param_1,param_2,param_3,&uStack_b0,&uStack_a4,0,uVar21 & 0xdddddddd,
                      (long)param_2 + lVar24 * 2 + 0x1be);
        aiStack_110[4] = (int)plVar16;
      }
      if (((bVar11 & bVar10) != 0) && ((uVar13 >> 5 & 1) != 0)) {
        iStack_11c = param_6 + 1;
        iStack_114 = param_8 + 1;
        param_3 = &iStack_11c;
        plVar16 = param_2;
        iStack_118 = param_7;
        FUN_1093a9d68(param_1,param_2,param_3,&uStack_a4,&uStack_98,1,uVar22 | uVar26 & 0x17,
                      (long)param_2 + lVar24 * 2 + 0x772);
        aiStack_110[5] = (int)plVar16;
      }
      if (((bVar12 & bVar11) != 0) && ((uVar13 >> 6 & 1) != 0)) {
        iStack_118 = param_7 + 1;
        iStack_114 = param_8 + 1;
        param_3 = &iStack_11c;
        plVar16 = param_2;
        iStack_11c = param_6;
        FUN_1093a9d68(param_1,param_2,param_3,&uStack_8c,&uStack_98,0,uVar22 | uVar20,
                      (long)param_2 + lVar24 * 2 + 0x1d0);
        aiStack_110[6] = (int)plVar16;
      }
      if (((bVar12 & bVar9) != 0) && ((uVar13 >> 7 & 1) != 0)) {
        iStack_114 = param_8 + 1;
        param_3 = &iStack_11c;
        plVar16 = param_2;
        iStack_11c = param_6;
        iStack_118 = param_7;
        FUN_1093a9d68(param_1,param_2,param_3,&uStack_b0,&uStack_8c,1,uVar22 | uVar26 & 0x1e,
                      (long)param_2 + lVar24 * 2 + 0x770);
        aiStack_110[7] = (int)plVar16;
      }
      if (((uVar13 >> 8 & 1) != 0) && ((bVar9 & bVar5) != 0)) {
        param_3 = &iStack_11c;
        plVar16 = param_2;
        iStack_11c = param_6;
        iStack_118 = param_7;
        iStack_114 = param_8;
        FUN_1093a9d68(param_1,param_2,param_3,aiStack_110 + 0xc,&uStack_b0,2,uVar21 & 0x3c,
                      (long)param_2 + lVar24 * 2 + 0xc80);
        aiStack_110[8] = (int)plVar16;
      }
      if (((uVar13 >> 9 & 1) != 0) && ((bVar10 & bVar6) != 0)) {
        iStack_11c = param_6 + 1;
        param_3 = &iStack_11c;
        plVar16 = param_2;
        iStack_118 = param_7;
        iStack_114 = param_8;
        FUN_1093a9d68(param_1,param_2,param_3,(long)&uStack_d8 + 4,&uStack_a4,2,uVar21 & 0x35,
                      (long)param_2 + lVar24 * 2 + 0xc82);
        aiStack_110[9] = (int)plVar16;
      }
      if (((uVar13 >> 10 & 1) != 0) && ((bVar11 & bVar7) != 0)) {
        iStack_11c = param_6 + 1;
        iStack_118 = param_7 + 1;
        param_3 = &iStack_11c;
        plVar16 = param_2;
        iStack_114 = param_8;
        FUN_1093a9d68(param_1,param_2,param_3,&uStack_c8,&uStack_98,2,uVar22 | uVar26 & 0xffffffe7,
                      (long)param_2 + lVar24 * 2 + 0xc94);
        aiStack_110[10] = (int)plVar16;
      }
      if (((uVar13 >> 0xb & 1) != 0) && ((bVar12 & bVar8) != 0)) {
        iStack_118 = param_7 + 1;
        param_3 = &iStack_11c;
        plVar16 = param_2;
        iStack_11c = param_6;
        iStack_114 = param_8;
        FUN_1093a9d68(param_1,param_2,param_3,&uStack_bc,&uStack_8c,2,uVar22 | uVar26 & 0xeeeeeeee,
                      (long)param_2 + lVar24 * 2 + 0xc92);
        aiStack_110[0xb] = (int)plVar16;
      }
      bVar5 = *(byte *)(uVar25 * 0x10 + 0x1132e7060);
      if (bVar5 != 0xff) {
        pbVar29 = (byte *)(uVar25 * 0x10 + 0x1132e7063);
        do {
          iVar14 = aiStack_110[bVar5];
          iVar3 = aiStack_110[pbVar29[-2]];
          iVar4 = aiStack_110[pbVar29[-1]];
          if ((iVar14 != -1 && iVar3 != -1) && iVar4 != -1) {
            param_3 = (int *)param_2[1];
            iStack_118 = iVar3;
            if (*(char *)((long)param_2 + 0x1293) == '\x01') {
              plVar16 = param_2;
              iStack_11c = iVar14;
              iStack_114 = iVar4;
              FUN_1093aa648(param_2,param_3,&iStack_11c,aiStack_110,3);
            }
            else {
              plVar16 = param_2;
              iStack_11c = iVar4;
              iStack_114 = iVar14;
              FUN_1093aa648(param_2,param_3,&iStack_11c,aiStack_110,3);
            }
          }
          bVar5 = *pbVar29;
          pbVar29 = pbVar29 + 3;
        } while (bVar5 != 0xff);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  FUN_1093aa840();
  FUN_1093aa9a0(plVar16);
  FUN_1093aac14(plVar16);
  if (plVar16[1] != *plVar16) {
    sVar1 = (short)*param_3;
    if ((short)plVar16[0x24c] <= (short)*param_3) {
      sVar1 = (short)plVar16[0x24c];
    }
    *(short *)(plVar16 + 0x24c) = sVar1;
    sVar1 = *(short *)((long)param_3 + 2);
    if (*(short *)((long)plVar16 + 0x1262) <= *(short *)((long)param_3 + 2)) {
      sVar1 = *(short *)((long)plVar16 + 0x1262);
    }
    *(short *)((long)plVar16 + 0x1262) = sVar1;
    sVar1 = (short)param_3[1];
    if (*(short *)((long)plVar16 + 0x1264) <= (short)param_3[1]) {
      sVar1 = *(short *)((long)plVar16 + 0x1264);
    }
    *(short *)((long)plVar16 + 0x1264) = sVar1;
    sVar1 = *(short *)((long)plVar16 + 0x1266);
    if (*(short *)((long)plVar16 + 0x1266) <= (short)*param_3) {
      sVar1 = (short)*param_3;
    }
    *(short *)((long)plVar16 + 0x1266) = sVar1;
    sVar1 = (short)plVar16[0x24d];
    if ((short)plVar16[0x24d] <= *(short *)((long)param_3 + 2)) {
      sVar1 = *(short *)((long)param_3 + 2);
    }
    *(short *)(plVar16 + 0x24d) = sVar1;
    sVar1 = *(short *)((long)plVar16 + 0x126a);
    if (*(short *)((long)plVar16 + 0x126a) <= (short)param_3[1]) {
      sVar1 = (short)param_3[1];
    }
    *(short *)((long)plVar16 + 0x126a) = sVar1;
  }
  plVar17 = plVar16;
  func_0x0001093aba24(plVar16,param_3);
  if (plVar16[1] == *plVar16) {
    plVar17[2] = plVar17[1];
    plVar17[5] = plVar17[4];
  }
  else {
    plVar30 = plVar16 + 0xc;
    if ((plVar16[0xd] == *plVar30) &&
       (lVar24 = (plVar16[4] - plVar16[3] >> 2) * -0x5555555555555555, lVar24 != 0)) {
      func_0x000105343774(plVar30,lVar24,&UNK_10dfc8d94);
    }
    plVar15 = plVar17 + 1;
    plVar17[2] = *plVar15;
    FUN_1093abaa4(plVar15,(plVar16[4] - plVar16[3] >> 2) * -0x5555555555555555);
    func_0x0001093abad4(plVar15,plVar16 + 3,plVar16 + 6,plVar16 + 0xf,plVar16 + 9,plVar30);
    plVar30 = plVar17 + 4;
    if (plVar30 != plVar16) {
      lVar24 = *plVar16;
      lVar2 = plVar16[1];
      uVar25 = lVar2 - lVar24 >> 2;
      uVar23 = plVar17[6];
      plVar16 = (long *)*plVar30;
      if ((ulong)((long)(uVar23 - (long)plVar16) >> 2) < uVar25) {
        plVar15 = plVar30;
        lVar18 = lVar24;
        lVar28 = lVar2;
        uVar19 = uVar25;
        if (plVar16 != (long *)0x0) {
          plVar17[5] = (long)plVar16;
          __ZdlPv();
          uVar23 = 0;
          *plVar30 = 0;
          plVar17[5] = 0;
          plVar17[6] = 0;
          plVar15 = plVar16;
        }
        if (uVar25 >> 0x3e != 0) {
          FUN_109231bc0();
          if (uVar19 != 0) {
            FUN_109265f60();
            lVar24 = plVar15[1];
            lVar28 = lVar28 - lVar18;
            if (lVar28 != 0) {
              _memmove(lVar24,lVar18,lVar28);
            }
            plVar15[1] = lVar24 + lVar28;
          }
          return;
        }
        uVar19 = (long)uVar23 >> 1;
        if ((ulong)((long)uVar23 >> 1) <= uVar25) {
          uVar19 = uVar25;
        }
        if (0x7ffffffffffffffb < uVar23) {
          uVar19 = 0x3fffffffffffffff;
        }
        FUN_109265f60(plVar30,uVar19);
        lVar28 = plVar17[5];
        lVar2 = lVar2 - lVar24;
        if (lVar2 != 0) {
          _memmove(lVar28,lVar24,lVar2);
        }
        lVar28 = lVar28 + lVar2;
      }
      else {
        plVar30 = (long *)plVar17[5];
        if ((ulong)((long)plVar30 - (long)plVar16 >> 2) < uVar25) {
          lVar28 = lVar24 + ((long)plVar30 - (long)plVar16);
          if (plVar30 != plVar16) {
            _memmove(plVar16,lVar24);
            plVar30 = (long *)plVar17[5];
          }
          lVar2 = lVar2 - lVar28;
          if (lVar2 != 0) {
            _memmove(plVar30,lVar28,lVar2);
          }
          lVar28 = (long)plVar30 + lVar2;
        }
        else {
          lVar2 = lVar2 - lVar24;
          if (lVar2 != 0) {
            _memmove(plVar16,lVar24,lVar2);
          }
          lVar28 = (long)plVar16 + lVar2;
        }
      }
      plVar17[5] = lVar28;
      return;
    }
  }
  return;
}



/* Entry: 1093a8798; end: 1093a88bb;  */

void FUN_1093a8798(long *param_1,short *param_2)

{
  short sVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  
  FUN_1093aa840();
  FUN_1093aa9a0(param_1);
  FUN_1093aac14(param_1);
  if (param_1[1] != *param_1) {
    sVar1 = *param_2;
    if ((short)param_1[0x24c] <= *param_2) {
      sVar1 = (short)param_1[0x24c];
    }
    *(short *)(param_1 + 0x24c) = sVar1;
    sVar1 = param_2[1];
    if (*(short *)((long)param_1 + 0x1262) <= param_2[1]) {
      sVar1 = *(short *)((long)param_1 + 0x1262);
    }
    *(short *)((long)param_1 + 0x1262) = sVar1;
    sVar1 = param_2[2];
    if (*(short *)((long)param_1 + 0x1264) <= param_2[2]) {
      sVar1 = *(short *)((long)param_1 + 0x1264);
    }
    *(short *)((long)param_1 + 0x1264) = sVar1;
    sVar1 = *(short *)((long)param_1 + 0x1266);
    if (*(short *)((long)param_1 + 0x1266) <= *param_2) {
      sVar1 = *param_2;
    }
    *(short *)((long)param_1 + 0x1266) = sVar1;
    sVar1 = (short)param_1[0x24d];
    if ((short)param_1[0x24d] <= param_2[1]) {
      sVar1 = param_2[1];
    }
    *(short *)(param_1 + 0x24d) = sVar1;
    sVar1 = *(short *)((long)param_1 + 0x126a);
    if (*(short *)((long)param_1 + 0x126a) <= param_2[2]) {
      sVar1 = param_2[2];
    }
    *(short *)((long)param_1 + 0x126a) = sVar1;
  }
  plVar4 = param_1;
  func_0x0001093aba24(param_1,param_2);
  if (param_1[1] == *param_1) {
    plVar4[2] = plVar4[1];
    plVar4[5] = plVar4[4];
  }
  else {
    plVar12 = param_1 + 0xc;
    if ((param_1[0xd] == *plVar12) &&
       (lVar9 = (param_1[4] - param_1[3] >> 2) * -0x5555555555555555, lVar9 != 0)) {
      func_0x000105343774(plVar12,lVar9,&UNK_10dfc8d94);
    }
    plVar11 = plVar4 + 1;
    plVar4[2] = *plVar11;
    FUN_1093abaa4(plVar11,(param_1[4] - param_1[3] >> 2) * -0x5555555555555555);
    func_0x0001093abad4(plVar11,param_1 + 3,param_1 + 6,param_1 + 0xf,param_1 + 9,plVar12);
    plVar12 = plVar4 + 4;
    if (plVar12 != param_1) {
      lVar9 = *param_1;
      lVar2 = param_1[1];
      uVar7 = lVar2 - lVar9 >> 2;
      uVar8 = plVar4[6];
      plVar11 = (long *)*plVar12;
      if ((ulong)((long)(uVar8 - (long)plVar11) >> 2) < uVar7) {
        plVar3 = plVar12;
        lVar5 = lVar9;
        lVar10 = lVar2;
        uVar6 = uVar7;
        if (plVar11 != (long *)0x0) {
          plVar4[5] = (long)plVar11;
          __ZdlPv();
          uVar8 = 0;
          *plVar12 = 0;
          plVar4[5] = 0;
          plVar4[6] = 0;
          plVar3 = plVar11;
        }
        if (uVar7 >> 0x3e != 0) {
          FUN_109231bc0();
          if (uVar6 != 0) {
            FUN_109265f60();
            lVar9 = plVar3[1];
            lVar10 = lVar10 - lVar5;
            if (lVar10 != 0) {
              _memmove(lVar9,lVar5,lVar10);
            }
            plVar3[1] = lVar9 + lVar10;
          }
          return;
        }
        uVar6 = (long)uVar8 >> 1;
        if ((ulong)((long)uVar8 >> 1) <= uVar7) {
          uVar6 = uVar7;
        }
        if (0x7ffffffffffffffb < uVar8) {
          uVar6 = 0x3fffffffffffffff;
        }
        FUN_109265f60(plVar12,uVar6);
        lVar10 = plVar4[5];
        lVar2 = lVar2 - lVar9;
        if (lVar2 != 0) {
          _memmove(lVar10,lVar9,lVar2);
        }
        lVar10 = lVar10 + lVar2;
      }
      else {
        plVar12 = (long *)plVar4[5];
        if ((ulong)((long)plVar12 - (long)plVar11 >> 2) < uVar7) {
          lVar10 = lVar9 + ((long)plVar12 - (long)plVar11);
          if (plVar12 != plVar11) {
            _memmove(plVar11,lVar9);
            plVar12 = (long *)plVar4[5];
          }
          lVar2 = lVar2 - lVar10;
          if (lVar2 != 0) {
            _memmove(plVar12,lVar10,lVar2);
          }
          lVar10 = (long)plVar12 + lVar2;
        }
        else {
          lVar2 = lVar2 - lVar9;
          if (lVar2 != 0) {
            _memmove(plVar11,lVar9,lVar2);
          }
          lVar10 = (long)plVar11 + lVar2;
        }
      }
      plVar4[5] = lVar10;
      return;
    }
  }
  return;
}



/* Entry: 1093a88bc; end: 1093a898b;  */

undefined1  [16] FUN_1093a88bc(long *param_1,long *param_2,undefined4 *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong unaff_x24;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  plVar13 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar13 = param_2;
  }
  plVar14 = (long *)param_1[1];
  if (plVar14 > param_2 || param_2 == plVar14) {
    if (plVar14 <= param_2) {
LAB_1093a897c:
      auVar16._8_8_ = plVar5;
      auVar16._0_8_ = plVar13;
      return auVar16;
    }
    plVar13 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar14 < (long *)0x3) || (((ulong)plVar14 & (long)plVar14 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar13) {
      plVar13 = (long *)(1L << (-LZCOUNT((long)plVar13 + -1) & 0x3fU));
    }
    if (param_2 <= plVar13) {
      param_2 = plVar13;
    }
    if (plVar14 <= param_2) goto LAB_1093a897c;
  }
  plVar13 = param_2;
  if (param_2 == (long *)0x0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
      plVar13 = param_2;
    }
    param_1[1] = 0;
LAB_1093a8ab8:
    auVar17._8_8_ = plVar13;
    auVar17._0_8_ = lVar3;
    return auVar17;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
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
      plVar14 = (long *)plVar5[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        plVar14 = (long *)((ulong)plVar14 & uVar6);
      }
      else if (param_2 <= plVar14) {
        uVar15 = 0;
        if (param_2 != (long *)0x0) {
          uVar15 = (ulong)plVar14 / (ulong)param_2;
        }
        plVar14 = (long *)((long)plVar14 - uVar15 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar14 * 8) = param_1 + 2;
      plVar8 = (long *)*plVar5;
      while (plVar8 != (long *)0x0) {
        plVar10 = (long *)plVar8[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar6);
        }
        else if (param_2 <= plVar10) {
          uVar15 = 0;
          if (param_2 != (long *)0x0) {
            uVar15 = (ulong)plVar10 / (ulong)param_2;
          }
          plVar10 = (long *)((long)plVar10 - uVar15 * (long)param_2);
        }
        plVar9 = plVar8;
        if (plVar10 != plVar14) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar10 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar10 * 8) = plVar5;
            plVar14 = plVar10;
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
    goto LAB_1093a8ab8;
  }
  func_0x000104c4f740();
  uVar15 = (long)(int)(short)*param_2 * 0x466f45d +
           (long)(int)*(short *)((long)param_2 + 2) * 0x12740a5 +
           (long)(int)*(short *)((long)param_2 + 4) * 0x4f9ffb7;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      unaff_x24 = uVar15 & uVar7;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar6 <= uVar15) {
        uVar12 = 0;
        if (uVar6 != 0) {
          uVar12 = uVar15 / uVar6;
        }
        unaff_x24 = uVar15 - uVar12 * uVar6;
      }
    }
    puVar11 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar11 != (undefined8 *)0x0) {
      for (plVar13 = (long *)*puVar11; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
        uVar12 = plVar13[1];
        if (uVar12 == uVar15) {
          if ((((short)plVar13[2] == (short)*param_2) &&
              (*(short *)((long)plVar13 + 0x12) == *(short *)((long)param_2 + 2))) &&
             (*(short *)((long)plVar13 + 0x14) == *(short *)((long)param_2 + 4))) {
            uVar4 = 0;
            goto LAB_1093a8cf0;
          }
        }
        else {
          if ((uVar6 & uVar7) == 0) {
            uVar12 = uVar12 & uVar7;
          }
          else if (uVar6 <= uVar12) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar12 / uVar6;
            }
            uVar12 = uVar12 - uVar1 * uVar6;
          }
          if (uVar12 != unaff_x24) break;
        }
      }
    }
  }
  plVar13 = (long *)0x18;
  __Znwm();
  *plVar13 = 0;
  plVar13[1] = uVar15;
  *(undefined4 *)(plVar13 + 2) = *param_3;
  *(undefined2 *)((long)plVar13 + 0x14) = *(undefined2 *)(param_3 + 1);
  if ((uVar6 == 0) || (*(float *)(param_1 + 4) * (float)uVar6 < (float)(param_1[3] + 1))) {
    uVar7 = 1;
    if (2 < uVar6) {
      uVar7 = (ulong)((uVar6 & uVar6 - 1) != 0);
    }
    uVar7 = uVar7 | uVar6 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar6) {
      uVar7 = uVar6;
    }
    FUN_1093a88bc(param_1,uVar7);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x24 = uVar6 - 1 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar6 <= uVar15) {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = uVar15 / uVar6;
        }
        unaff_x24 = uVar15 - uVar7 * uVar6;
      }
    }
  }
  lVar3 = *param_1;
  plVar5 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar13 = *plVar5;
    *plVar5 = (long)plVar13;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar5;
    if (*plVar13 == 0) goto LAB_1093a8ce0;
    uVar15 = *(ulong *)(*plVar13 + 8);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar15 = uVar15 & uVar6 - 1;
    }
    else if (uVar6 <= uVar15) {
      uVar7 = 0;
      if (uVar6 != 0) {
        uVar7 = uVar15 / uVar6;
      }
      uVar15 = uVar15 - uVar7 * uVar6;
    }
    plVar5 = (long *)(*param_1 + uVar15 * 8);
  }
  else {
    *plVar13 = *plVar5;
  }
  *plVar5 = (long)plVar13;
LAB_1093a8ce0:
  param_1[3] = param_1[3] + 1;
  uVar4 = 1;
LAB_1093a8cf0:
  auVar18._8_8_ = uVar4;
  auVar18._0_8_ = plVar13;
  return auVar18;
}



/* Entry: 1093a898c; end: 1093a8ac7;  */

undefined1  [16] FUN_1093a898c(long *param_1,short *param_2,undefined4 *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  short *psVar4;
  undefined8 uVar5;
  short *psVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  short *psVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x24;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  psVar4 = param_2;
  if (param_2 == (short *)0x0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
      psVar4 = param_2;
    }
    param_1[1] = 0;
LAB_1093a8ab8:
    auVar16._8_8_ = psVar4;
    auVar16._0_8_ = lVar3;
    return auVar16;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    psVar6 = (short *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)psVar6 * 8) = 0;
      psVar6 = (short *)((long)psVar6 + 1);
    } while (param_2 != psVar6);
    plVar9 = (long *)param_1[2];
    if (plVar9 != (long *)0x0) {
      psVar6 = (short *)plVar9[1];
      uVar7 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar7) == 0) {
        psVar6 = (short *)((ulong)psVar6 & uVar7);
      }
      else if (param_2 <= psVar6) {
        uVar15 = 0;
        if (param_2 != (short *)0x0) {
          uVar15 = (ulong)psVar6 / (ulong)param_2;
        }
        psVar6 = (short *)((long)psVar6 - uVar15 * (long)param_2);
      }
      *(long **)(*param_1 + (long)psVar6 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar9;
      while (plVar10 != (long *)0x0) {
        psVar12 = (short *)plVar10[1];
        if (((ulong)param_2 & uVar7) == 0) {
          psVar12 = (short *)((ulong)psVar12 & uVar7);
        }
        else if (param_2 <= psVar12) {
          uVar15 = 0;
          if (param_2 != (short *)0x0) {
            uVar15 = (ulong)psVar12 / (ulong)param_2;
          }
          psVar12 = (short *)((long)psVar12 - uVar15 * (long)param_2);
        }
        plVar11 = plVar10;
        if (psVar12 != psVar6) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)psVar12 * 8) == 0) {
            *(long **)(lVar2 + (long)psVar12 * 8) = plVar9;
            psVar6 = psVar12;
          }
          else {
            *plVar9 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar2 + (long)psVar12 * 8);
            **(long **)(lVar2 + (long)psVar12 * 8) = (long)plVar10;
            plVar11 = plVar9;
          }
        }
        plVar9 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
    goto LAB_1093a8ab8;
  }
  func_0x000104c4f740();
  uVar15 = (long)(int)*param_2 * 0x466f45d + (long)(int)param_2[1] * 0x12740a5 +
           (long)(int)param_2[2] * 0x4f9ffb7;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    if ((uVar7 & uVar8) == 0) {
      unaff_x24 = uVar15 & uVar8;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar7 <= uVar15) {
        uVar14 = 0;
        if (uVar7 != 0) {
          uVar14 = uVar15 / uVar7;
        }
        unaff_x24 = uVar15 - uVar14 * uVar7;
      }
    }
    puVar13 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar13 != (undefined8 *)0x0) {
      for (plVar9 = (long *)*puVar13; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar14 = plVar9[1];
        if (uVar14 == uVar15) {
          if ((((short)plVar9[2] == *param_2) && (*(short *)((long)plVar9 + 0x12) == param_2[1])) &&
             (*(short *)((long)plVar9 + 0x14) == param_2[2])) {
            uVar5 = 0;
            goto LAB_1093a8cf0;
          }
        }
        else {
          if ((uVar7 & uVar8) == 0) {
            uVar14 = uVar14 & uVar8;
          }
          else if (uVar7 <= uVar14) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar14 / uVar7;
            }
            uVar14 = uVar14 - uVar1 * uVar7;
          }
          if (uVar14 != unaff_x24) break;
        }
      }
    }
  }
  plVar9 = (long *)0x18;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = uVar15;
  *(undefined4 *)(plVar9 + 2) = *param_3;
  *(undefined2 *)((long)plVar9 + 0x14) = *(undefined2 *)(param_3 + 1);
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar8 = 1;
    if (2 < uVar7) {
      uVar8 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar8 = uVar8 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar8 <= uVar7) {
      uVar8 = uVar7;
    }
    FUN_1093a88bc(param_1,uVar8);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar7 <= uVar15) {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = uVar15 / uVar7;
        }
        unaff_x24 = uVar15 - uVar8 * uVar7;
      }
    }
  }
  lVar3 = *param_1;
  plVar10 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    *plVar9 = *plVar10;
    *plVar10 = (long)plVar9;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar10;
    if (*plVar9 == 0) goto LAB_1093a8ce0;
    uVar15 = *(ulong *)(*plVar9 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar15 = uVar15 & uVar7 - 1;
    }
    else if (uVar7 <= uVar15) {
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar15 / uVar7;
      }
      uVar15 = uVar15 - uVar8 * uVar7;
    }
    plVar10 = (long *)(*param_1 + uVar15 * 8);
  }
  else {
    *plVar9 = *plVar10;
  }
  *plVar10 = (long)plVar9;
LAB_1093a8ce0:
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_1093a8cf0:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar9;
  return auVar17;
}



/* Entry: 1093a8ac8; end: 1093a8d23;  */

undefined1  [16] FUN_1093a8ac8(long *param_1,short *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined1 auVar11 [16];
  
  uVar10 = (long)(int)*param_2 * 0x466f45d + (long)(int)param_2[1] * 0x12740a5 +
           (long)(int)param_2[2] * 0x4f9ffb7;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = uVar10 & uVar3;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar7 * uVar9;
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar6; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar7 = plVar8[1];
        if (uVar7 == uVar10) {
          if ((((short)plVar8[2] == *param_2) && (*(short *)((long)plVar8 + 0x12) == param_2[1])) &&
             (*(short *)((long)plVar8 + 0x14) == param_2[2])) {
            uVar2 = 0;
            goto LAB_1093a8cf0;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar7 = uVar7 & uVar3;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar1 * uVar9;
          }
          if (uVar7 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = (long *)0x18;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  *(undefined4 *)(plVar8 + 2) = *param_3;
  *(undefined2 *)((long)plVar8 + 0x14) = *(undefined2 *)(param_3 + 1);
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
    FUN_1093a88bc(param_1,uVar3);
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
  lVar5 = *param_1;
  plVar4 = *(long **)(lVar5 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar4;
    if (*plVar8 == 0) goto LAB_1093a8ce0;
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
LAB_1093a8ce0:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_1093a8cf0:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 1093a8d24; end: 1093a8f7f;  */

undefined1  [16] FUN_1093a8d24(long *param_1,short *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined1 auVar11 [16];
  
  uVar10 = (long)(int)*param_2 * 0x466f45d + (long)(int)param_2[1] * 0x12740a5 +
           (long)(int)param_2[2] * 0x4f9ffb7;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = uVar10 & uVar3;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar7 * uVar9;
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar6; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar7 = plVar8[1];
        if (uVar7 == uVar10) {
          if ((((short)plVar8[2] == *param_2) && (*(short *)((long)plVar8 + 0x12) == param_2[1])) &&
             (*(short *)((long)plVar8 + 0x14) == param_2[2])) {
            uVar2 = 0;
            goto LAB_1093a8f4c;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar7 = uVar7 & uVar3;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar1 * uVar9;
          }
          if (uVar7 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = (long *)0x18;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  *(undefined4 *)(plVar8 + 2) = *param_3;
  *(undefined2 *)((long)plVar8 + 0x14) = *(undefined2 *)(param_3 + 1);
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
    FUN_1093a88bc(param_1,uVar3);
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
  lVar5 = *param_1;
  plVar4 = *(long **)(lVar5 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar4;
    if (*plVar8 == 0) goto LAB_1093a8f3c;
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
LAB_1093a8f3c:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_1093a8f4c:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 1093a8f80; end: 1093a906f;  */

long * FUN_1093a8f80(long *param_1,short *param_2)

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
    uVar3 = (long)(int)*param_2 * 0x466f45d + (long)(int)param_2[1] * 0x12740a5 +
            (long)(int)param_2[2] * 0x4f9ffb7;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar3 & uVar4;
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
        if (uVar3 == uVar7) {
          if (((*(short *)(plVar6 + 2) == *param_2) &&
              (*(short *)((long)plVar6 + 0x12) == param_2[1])) &&
             (*(short *)((long)plVar6 + 0x14) == param_2[2])) {
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



/* Entry: 1093a9070; end: 1093a9273;  */

void FUN_1093a9070(long param_1,short *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9)

{
  long lVar1;
  undefined8 uVar2;
  short sStack_56;
  short sStack_54;
  short sStack_52;
  
  sStack_56 = *param_2 + 1;
  sStack_54 = (short)*(undefined4 *)(param_2 + 1);
  sStack_52 = (short)((uint)*(undefined4 *)(param_2 + 1) >> 0x10);
  lVar1 = param_1 + 0x50;
  FUN_1093a8f80(lVar1,&sStack_56);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  *param_3 = uVar2;
  sStack_56 = *param_2;
  sStack_54 = param_2[1] + 1;
  sStack_52 = param_2[2];
  lVar1 = param_1 + 0x50;
  FUN_1093a8f80(lVar1,&sStack_56);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  *param_4 = uVar2;
  sStack_52 = param_2[2] + 1;
  sStack_56 = (short)*(undefined4 *)param_2;
  sStack_54 = (short)((uint)*(undefined4 *)param_2 >> 0x10);
  lVar1 = param_1 + 0x50;
  FUN_1093a8f80(lVar1,&sStack_56);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  *param_5 = uVar2;
  sStack_56 = *param_2 + 1;
  sStack_54 = param_2[1] + 1;
  sStack_52 = param_2[2];
  lVar1 = param_1 + 0x50;
  FUN_1093a8f80(lVar1,&sStack_56);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  *param_6 = uVar2;
  sStack_56 = *param_2 + 1;
  sStack_54 = param_2[1];
  sStack_52 = param_2[2] + 1;
  lVar1 = param_1 + 0x50;
  FUN_1093a8f80(lVar1,&sStack_56);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  *param_7 = uVar2;
  sStack_56 = *param_2;
  sStack_54 = param_2[1] + 1;
  sStack_52 = param_2[2] + 1;
  lVar1 = param_1 + 0x50;
  FUN_1093a8f80(lVar1,&sStack_56);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  *param_8 = uVar2;
  sStack_56 = *param_2 + 1;
  sStack_54 = param_2[1] + 1;
  sStack_52 = param_2[2] + 1;
  param_1 = param_1 + 0x50;
  FUN_1093a8f80(param_1,&sStack_56);
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  *param_9 = uVar2;
  return;
}



/* Entry: 1093a9274; end: 1093a936b;  */

void FUN_1093a9274(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 *param_9,undefined4 *param_10)

{
  FUN_1093a977c();
  func_0x0001093a97f8(param_1,param_3,param_10);
  func_0x0001093a98bc(param_1,param_4,param_10);
  func_0x0001093a9980(param_1,param_5,param_10);
  func_0x0001093a9a44(param_1,param_6,param_10);
  func_0x0001093a9ad4(param_1,param_7,param_10);
  func_0x0001093a9b70(param_1,param_8,param_10);
  if (param_9 != (undefined4 *)0x0) {
    param_10 = param_9;
  }
  *(undefined4 *)(param_1 + 0x2220) = *param_10;
  *(undefined1 *)(param_1 + 0x2224) = *(undefined1 *)(param_10 + 1);
  *(undefined1 *)(param_1 + 0x2225) = *(undefined1 *)((long)param_10 + 5);
  *(undefined1 *)(param_1 + 0x2226) = *(undefined1 *)((long)param_10 + 6);
  *(undefined1 *)(param_1 + 0x2227) = *(undefined1 *)((long)param_10 + 7);
  *(undefined4 *)(param_1 + 0x2228) = param_10[2];
  return;
}



/* Entry: 1093a936c; end: 1093a977b;  */

void FUN_1093a936c(long param_1,short *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9)

{
  long lVar1;
  undefined8 uVar2;
  short sStack_56;
  short sStack_54;
  short sStack_52;
  
  sStack_56 = *param_2 + 1;
  sStack_54 = (short)*(undefined4 *)(param_2 + 1);
  sStack_52 = (short)((uint)*(undefined4 *)(param_2 + 1) >> 0x10);
  lVar1 = param_1;
  func_0x0001093a9c0c(param_1,&sStack_56);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  *param_3 = uVar2;
  sStack_56 = *param_2;
  sStack_54 = param_2[1] + 1;
  sStack_52 = param_2[2];
  lVar1 = param_1;
  func_0x0001093a9c0c(param_1,&sStack_56);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  *param_4 = uVar2;
  sStack_52 = param_2[2] + 1;
  sStack_56 = (short)*(undefined4 *)param_2;
  sStack_54 = (short)((uint)*(undefined4 *)param_2 >> 0x10);
  lVar1 = param_1;
  func_0x0001093a9c0c(param_1,&sStack_56);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  *param_5 = uVar2;
  sStack_56 = *param_2 + 1;
  sStack_54 = param_2[1] + 1;
  sStack_52 = param_2[2];
  lVar1 = param_1;
  func_0x0001093a9c0c(param_1,&sStack_56);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  *param_6 = uVar2;
  sStack_56 = *param_2 + 1;
  sStack_54 = param_2[1];
  sStack_52 = param_2[2] + 1;
  lVar1 = param_1;
  func_0x0001093a9c0c(param_1,&sStack_56);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  *param_7 = uVar2;
  sStack_56 = *param_2;
  sStack_54 = param_2[1] + 1;
  sStack_52 = param_2[2] + 1;
  lVar1 = param_1;
  func_0x0001093a9c0c(param_1,&sStack_56);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  *param_8 = uVar2;
  sStack_56 = *param_2 + 1;
  sStack_54 = param_2[1] + 1;
  sStack_52 = param_2[2] + 1;
  func_0x0001093a9c0c(param_1,&sStack_56);
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  *param_9 = uVar2;
  return;
}



/* Entry: 1093a977c; end: 1093a9d67;  */

void FUN_1093a977c(long param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  
  iVar1 = 0;
  do {
    iVar2 = 0;
    lVar4 = param_1;
    do {
      iVar3 = 8;
      param_1 = lVar4 + 0x78;
      puVar5 = param_2;
      do {
        lVar4 = param_1;
        param_2 = puVar5 + 3;
        *(undefined4 *)(lVar4 + -0x78) = *puVar5;
        *(undefined1 *)(lVar4 + -0x74) = *(undefined1 *)(puVar5 + 1);
        *(undefined1 *)(lVar4 + -0x73) = *(undefined1 *)((long)puVar5 + 5);
        *(undefined1 *)(lVar4 + -0x72) = *(undefined1 *)((long)puVar5 + 6);
        *(undefined1 *)(lVar4 + -0x71) = *(undefined1 *)((long)puVar5 + 7);
        *(undefined4 *)(lVar4 + -0x70) = puVar5[2];
        param_1 = lVar4 + 0xc;
        iVar3 = iVar3 + -1;
        puVar5 = param_2;
      } while (iVar3 != 0);
      lVar4 = lVar4 + -0x60;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 8);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  return;
}



/* Entry: 1093a9d68; end: 1093aa033;  */

/* WARNING: Possible PIC construction at 0x0001093a9fd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001093a9ed0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001093a9ed4) */
/* WARNING: Type propagation algorithm not settling */

ushort * FUN_1093a9d68(float param_1,long param_2,uint *param_3,short *param_4,uint *param_5,
                      int param_6,int param_7,ushort *param_8)

{
  float *pfVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  short sVar8;
  int iVar9;
  long *plVar10;
  bool bVar11;
  bool bVar12;
  ushort *puVar13;
  undefined8 *puVar14;
  ushort *puVar15;
  ushort *puVar16;
  uint *puVar17;
  short *psVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 *puVar25;
  long *plVar26;
  uint *puVar27;
  ushort *puVar28;
  long lVar29;
  float *pfVar30;
  undefined8 *******pppppppuVar31;
  undefined8 uVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  float fVar36;
  undefined1 auStack_139 [89];
  long lStack_e0;
  short *psStack_d8;
  uint *puStack_d0;
  ushort *puStack_c8;
  undefined8 *******pppppppuStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [12];
  uint uStack_a4;
  undefined8 uStack_a0;
  float fStack_98;
  double adStack_90 [3];
  undefined1 uStack_71;
  
  plVar10 = (long *)auStack_b0;
  pppppppuVar31 = (undefined8 *******)&stack0xfffffffffffffff0;
  puVar13 = (ushort *)(ulong)*param_8;
  if (*param_8 != 0xffff) {
    return puVar13;
  }
  sVar8 = *param_4;
  dVar35 = 0.0;
  if (sVar8 != 0) {
    if ((short)*param_5 == 0) {
      dVar35 = 1.0;
    }
    else {
      iVar9 = (int)sVar8 - (int)(short)*param_5;
      if (iVar9 != 0) {
        dVar35 = (double)(int)sVar8 / (double)iVar9;
      }
    }
  }
  auVar34._0_8_ = (long)(int)*(undefined8 *)param_3;
  auVar34._8_8_ = (long)(int)((ulong)*(undefined8 *)param_3 >> 0x20);
  auVar34 = NEON_scvtf(auVar34,8);
  adStack_90[1] = auVar34._8_8_;
  adStack_90[0] = auVar34._0_8_;
  adStack_90[2] = (double)(int)param_3[2];
  adStack_90[param_6] = dVar35 + adStack_90[param_6];
  dVar33 = (double)param_1;
  param_1 = param_1 * 0.5;
  uStack_a0 = CONCAT44(param_1 + (float)(adStack_90[1] * dVar33),
                       param_1 + (float)(adStack_90[0] * dVar33));
  fStack_98 = param_1 + (float)(adStack_90[2] * dVar33);
  puVar28 = (ushort *)(param_2 + 0x18);
  lVar19 = *(long *)puVar28;
  pfVar30 = *(float **)(param_2 + 0x20);
  lVar29 = (long)pfVar30 - lVar19;
  lVar22 = (lVar29 >> 2) * -0x5555555555555555;
  *param_8 = (ushort)lVar22;
  psVar18 = param_4;
  if (*(char *)(param_2 + 0x1292) != '\x01') {
    param_3 = (uint *)&uStack_a0;
    uVar32 = 0x1093a9ed4;
FUN_1093aa034:
    plVar10 = &lStack_e0;
    lStack_e0 = param_2;
    psStack_d8 = param_4;
    puStack_d0 = param_5;
    puStack_c8 = param_8;
    pppppppuStack_c0 = pppppppuVar31;
    uStack_b8 = uVar32;
    pppppppuVar31 = &pppppppuStack_c0;
    puVar14 = *(undefined8 **)(puVar28 + 4);
    if (puVar14 < *(undefined8 **)(puVar28 + 8)) {
      uVar32 = *(undefined8 *)param_3;
      *(uint *)(puVar14 + 1) = param_3[2];
      *puVar14 = uVar32;
      lVar19 = (long)puVar14 + 0xc;
      puVar13 = puVar28;
    }
    else {
      param_4 = (short *)((long)puVar14 - *(long *)puVar28);
      uVar23 = ((long)param_4 >> 2) * -0x5555555555555555 + 1;
      if (0x1555555555555555 < uVar23) {
        uVar32 = 0x1093aa148;
        puVar13 = puVar28;
        puVar17 = param_3;
        func_0x0001093aa314();
        goto SUB_1093aa148;
      }
      lVar19 = (long)*(undefined8 **)(puVar28 + 8) - *(long *)puVar28 >> 2;
      uVar24 = lVar19 * 0x5555555555555556;
      if (uVar24 < uVar23 || uVar24 - uVar23 == 0) {
        uVar24 = uVar23;
      }
      if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar19 * -0x5555555555555555)) {
        uVar24 = 0x1555555555555555;
      }
      puVar15 = puVar28;
      FUN_1093aa328();
      puVar14 = (undefined8 *)((long)puVar15 + (long)param_4);
      uVar32 = *(undefined8 *)param_3;
      *(uint *)(puVar14 + 1) = param_3[2];
      *puVar14 = uVar32;
      lVar19 = (long)puVar14 + 0xc;
      puVar13 = *(ushort **)puVar28;
      puVar16 = *(ushort **)(puVar28 + 4);
      lVar22 = (long)puVar13 - (long)puVar16;
      plVar3 = (long *)((long)puVar14 + lVar22);
      plVar26 = plVar3;
      if (lVar22 != 0) {
        do {
          lVar22 = *(long *)puVar13;
          *(undefined4 *)(plVar26 + 1) = *(undefined4 *)(puVar13 + 4);
          *plVar26 = lVar22;
          puVar13 = puVar13 + 6;
          plVar26 = (long *)((long)plVar26 + 0xc);
        } while (puVar13 != puVar16);
        puVar13 = *(ushort **)puVar28;
      }
      *(long **)puVar28 = plVar3;
      *(long *)(puVar28 + 4) = lVar19;
      *(ushort **)(puVar28 + 8) = puVar15 + uVar24 * 6;
      if (puVar13 != (ushort *)0x0) {
        __ZdlPv();
      }
    }
    *(long *)(puVar28 + 4) = lVar19;
    return puVar13;
  }
  fVar36 = *(float *)((long)&uStack_a0 + (long)*(int *)(param_2 + 0x1348) * 4) *
           (float)*(int *)(param_2 + 0x1354);
  uVar32 = NEON_scvtf(*(undefined8 *)(param_2 + 0x1358),4);
  uVar32 = CONCAT44(*(float *)((long)&uStack_a0 + (long)*(int *)(param_2 + 0x1350) * 4) *
                    (float)((ulong)uVar32 >> 0x20),
                    *(float *)((long)&uStack_a0 + (long)*(int *)(param_2 + 0x134c) * 4) *
                    (float)uVar32);
  if (pfVar30 < *(float **)(param_2 + 0x28)) {
    *pfVar30 = fVar36;
    *(undefined8 *)(pfVar30 + 1) = uVar32;
    pfVar30 = pfVar30 + 3;
  }
  else {
    uVar23 = lVar22 + 1;
    if (0x1555555555555555 < uVar23) {
      uVar32 = 0x1093aa034;
      func_0x0001093aa314();
      puVar28 = puVar13;
      goto FUN_1093aa034;
    }
    lVar19 = (long)*(float **)(param_2 + 0x28) - lVar19 >> 2;
    uVar24 = lVar19 * 0x5555555555555556;
    if (uVar24 < uVar23 || uVar24 - uVar23 == 0) {
      uVar24 = uVar23;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar19 * -0x5555555555555555)) {
      uVar24 = 0x1555555555555555;
    }
    puVar13 = puVar28;
    FUN_1093aa328();
    pfVar1 = (float *)((long)puVar13 + lVar29);
    *pfVar1 = fVar36;
    *(undefined8 *)(pfVar1 + 1) = uVar32;
    pfVar30 = pfVar1 + 3;
    puVar14 = *(undefined8 **)(param_2 + 0x18);
    puVar6 = *(undefined8 **)(param_2 + 0x20);
    lVar19 = (long)puVar14 - (long)puVar6;
    puVar2 = (undefined8 *)((long)pfVar1 + lVar19);
    puVar25 = puVar2;
    if (lVar19 != 0) {
      do {
        uVar32 = *puVar14;
        *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar14 + 1);
        *puVar25 = uVar32;
        puVar14 = (undefined8 *)((long)puVar14 + 0xc);
        puVar25 = (undefined8 *)((long)puVar25 + 0xc);
      } while (puVar14 != puVar6);
      puVar14 = *(undefined8 **)puVar28;
    }
    *(undefined8 **)(param_2 + 0x18) = puVar2;
    *(float **)(param_2 + 0x20) = pfVar30;
    *(ushort **)(param_2 + 0x28) = puVar13 + uVar24 * 6;
    if (puVar14 != (undefined8 *)0x0) {
      __ZdlPv();
    }
  }
  *(float **)(param_2 + 0x20) = pfVar30;
  uStack_a4 = CONCAT31(uStack_a4._1_3_,param_7 != 0);
  func_0x0001078db3d4(param_2 + 0x30,&uStack_a4);
  dVar33 = ABS(dVar35 + -1.0);
  bVar11 = false;
  bVar12 = false;
  if (2.220446049250313e-16 < ABS(dVar35)) {
    bVar11 = false;
    bVar12 = true;
    if (!NAN(dVar33)) {
      bVar11 = dVar33 == 2.220446049250313e-16;
      bVar12 = 2.220446049250313e-16 <= dVar33;
    }
  }
  if (bVar12 && !bVar11) {
    FUN_1093aa47c(dVar35,&uStack_71,param_4,param_5,&uStack_a4);
    FUN_1093aa36c(param_2 + 0x48,&uStack_a4);
    FUN_1093aa20c(param_2,param_4,param_5);
    return (ushort *)(ulong)*param_8;
  }
  uStack_a4 = (uint)*param_8;
  puVar13 = (ushort *)(param_2 + 0xd8);
  puVar17 = &uStack_a4;
  uVar32 = 0x1093a9fd4;
  puVar28 = param_8;
  param_3 = param_5;
SUB_1093aa148:
  *(long *)((long)plVar10 + -0x30) = param_2;
  *(short **)((long)plVar10 + -0x28) = param_4;
  *(uint **)((long)plVar10 + -0x20) = param_3;
  *(ushort **)((long)plVar10 + -0x18) = puVar28;
  *(undefined8 ********)((long)plVar10 + -0x10) = pppppppuVar31;
  *(undefined8 *)((long)plVar10 + -8) = uVar32;
  puVar5 = *(uint **)(puVar13 + 4);
  if (puVar5 < *(uint **)(puVar13 + 8)) {
    puVar27 = puVar5 + 1;
    *puVar5 = *puVar17;
    puVar16 = puVar13;
  }
  else {
    lVar19 = (long)puVar5 - *(long *)puVar13;
    uVar23 = (lVar19 >> 2) + 1;
    if (uVar23 >> 0x3e != 0) {
      FUN_109231bc0();
      *(undefined1 **)((long)plVar10 + -0x40) = (undefined1 *)((long)plVar10 + -0x10);
      *(code **)((long)plVar10 + -0x38) = FUN_1093aa20c;
      *(undefined8 *)((long)plVar10 + -0x58) = 0;
      *(undefined8 *)((long)plVar10 + -0x50) = 0;
      *(undefined8 *)((long)plVar10 + -0x48) = 0;
      uVar23 = (ulong)(byte)puVar17[2];
      if (uVar23 < 6 && *(byte *)((long)puVar17 + 9) != 0) {
        *(uint *)((long)plVar10 + uVar23 * 4 + -0x58) =
             *(int *)((long)plVar10 + uVar23 * 4 + -0x58) + (uint)*(byte *)((long)puVar17 + 9);
      }
      uVar23 = (ulong)*(byte *)((long)puVar17 + 10);
      if (uVar23 < 6 && *(byte *)((long)puVar17 + 0xb) != 0) {
        *(uint *)((long)plVar10 + uVar23 * 4 + -0x58) =
             *(int *)((long)plVar10 + uVar23 * 4 + -0x58) + (uint)*(byte *)((long)puVar17 + 0xb);
      }
      uVar23 = (ulong)*(byte *)(psVar18 + 4);
      if (uVar23 < 6 && *(byte *)((long)psVar18 + 9) != 0) {
        *(uint *)((long)plVar10 + uVar23 * 4 + -0x58) =
             *(int *)((long)plVar10 + uVar23 * 4 + -0x58) + (uint)*(byte *)((long)psVar18 + 9);
      }
      uVar23 = (ulong)*(byte *)(psVar18 + 5);
      if ((uVar23 < 6) && (*(byte *)((long)psVar18 + 0xb) != 0)) {
        *(uint *)((long)plVar10 + uVar23 * 4 + -0x58) =
             *(int *)((long)plVar10 + uVar23 * 4 + -0x58) + (uint)*(byte *)((long)psVar18 + 0xb);
      }
      uVar21 = *(uint *)((long)plVar10 + -0x58);
      lVar19 = 4;
      puVar17 = (uint *)((long)plVar10 + -0x58);
      do {
        uVar7 = *(uint *)((long)plVar10 + lVar19 + -0x58);
        bVar11 = uVar7 <= uVar21;
        if (uVar21 <= uVar7) {
          uVar21 = uVar7;
        }
        puVar5 = (uint *)((long)plVar10 + lVar19 + -0x58);
        if (bVar11) {
          puVar5 = puVar17;
        }
        lVar19 = lVar19 + 4;
        puVar17 = puVar5;
      } while (lVar19 != 0x18);
      uVar4 = 0;
      if (*puVar5 != 0) {
        uVar4 = (char)((uint)((int)puVar5 - (int)(undefined1 *)((long)plVar10 + -0x58)) >> 2);
      }
      *(undefined1 *)((long)plVar10 + -0x59) = uVar4;
      puVar13 = puVar13 + 0x30;
      FUN_1093aa574(puVar13,(undefined1 *)((long)plVar10 + -0x59));
      return puVar13;
    }
    uVar20 = (long)*(uint **)(puVar13 + 8) - *(long *)puVar13;
    uVar24 = (long)uVar20 >> 1;
    if (uVar24 <= uVar23) {
      uVar24 = uVar23;
    }
    if (0x7ffffffffffffffb < uVar20) {
      uVar24 = 0x3fffffffffffffff;
    }
    puVar28 = puVar13;
    func_0x000107c2ab8c();
    lVar22 = *(long *)puVar13;
    puVar5 = (uint *)((long)puVar28 + lVar19);
    lVar19 = (long)puVar5 - (*(long *)(puVar13 + 4) - lVar22);
    puVar27 = puVar5 + 1;
    *puVar5 = *puVar17;
    _memcpy(lVar19,lVar22);
    puVar16 = *(ushort **)puVar13;
    *(long *)puVar13 = lVar19;
    *(uint **)(puVar13 + 4) = puVar27;
    *(ushort **)(puVar13 + 8) = puVar28 + uVar24 * 2;
    if (puVar16 != (ushort *)0x0) {
      __ZdlPv();
    }
  }
  *(uint **)(puVar13 + 4) = puVar27;
  return puVar16;
}



/* Entry: 1093aa034; end: 1093aa20b;  */

void FUN_1093aa034(long *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  bool bVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  undefined4 *puVar19;
  undefined1 uStack_89;
  uint auStack_88 [6];
  undefined1 **ppuStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 < (undefined8 *)param_1[2]) {
    uVar9 = *param_2;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar7 = uVar9;
    lVar18 = (long)puVar7 + 0xc;
  }
  else {
    lVar18 = (long)puVar7 - *param_1;
    uVar13 = (lVar18 >> 2) * -0x5555555555555555 + 1;
    if (0x1555555555555555 < uVar13) {
      func_0x0001093aa314();
      uStack_38 = 0x1093aa148;
      puVar3 = (undefined4 *)param_1[1];
      if (puVar3 < (undefined4 *)param_1[2]) {
        puVar19 = puVar3 + 1;
        *puVar3 = *(undefined4 *)param_2;
      }
      else {
        lVar18 = (long)puVar3 - *param_1;
        uVar13 = (lVar18 >> 2) + 1;
        puStack_40 = &stack0xfffffffffffffff0;
        if (uVar13 >> 0x3e != 0) {
          FUN_109231bc0();
          ppuStack_70 = &puStack_40;
          uStack_68 = 0x1093aa20c;
          auStack_88[0] = 0;
          auStack_88[1] = 0;
          auStack_88[2] = 0;
          auStack_88[3] = 0;
          auStack_88[4] = 0;
          auStack_88[5] = 0;
          uVar13 = (ulong)*(byte *)(param_2 + 1);
          if (uVar13 < 6 && *(byte *)((long)param_2 + 9) != 0) {
            auStack_88[uVar13] = auStack_88[uVar13] + (uint)*(byte *)((long)param_2 + 9);
          }
          uVar13 = (ulong)*(byte *)((long)param_2 + 10);
          if (uVar13 < 6 && *(byte *)((long)param_2 + 0xb) != 0) {
            auStack_88[uVar13] = auStack_88[uVar13] + (uint)*(byte *)((long)param_2 + 0xb);
          }
          uVar13 = (ulong)*(byte *)(param_3 + 8);
          if (uVar13 < 6 && *(byte *)(param_3 + 9) != 0) {
            auStack_88[uVar13] = auStack_88[uVar13] + (uint)*(byte *)(param_3 + 9);
          }
          uVar13 = (ulong)*(byte *)(param_3 + 10);
          if ((uVar13 < 6) && (*(byte *)(param_3 + 0xb) != 0)) {
            auStack_88[uVar13] = auStack_88[uVar13] + (uint)*(byte *)(param_3 + 0xb);
          }
          lVar18 = 4;
          puVar14 = auStack_88;
          uVar11 = auStack_88[0];
          do {
            uVar5 = *(uint *)((long)auStack_88 + lVar18);
            bVar6 = uVar5 <= uVar11;
            if (uVar11 <= uVar5) {
              uVar11 = uVar5;
            }
            puVar2 = (uint *)((long)auStack_88 + lVar18);
            if (bVar6) {
              puVar2 = puVar14;
            }
            lVar18 = lVar18 + 4;
            puVar14 = puVar2;
          } while (lVar18 != 0x18);
          uStack_89 = 0;
          if (*puVar2 != 0) {
            uStack_89 = (char)((uint)((int)puVar2 - (int)auStack_88) >> 2);
          }
          FUN_1093aa574(param_1 + 0xc,&uStack_89);
          return;
        }
        uVar10 = param_1[2] - *param_1;
        uVar15 = (long)uVar10 >> 1;
        if (uVar15 <= uVar13) {
          uVar15 = uVar13;
        }
        if (0x7ffffffffffffffb < uVar10) {
          uVar15 = 0x3fffffffffffffff;
        }
        plVar8 = param_1;
        func_0x000107c2ab8c();
        lVar12 = *param_1;
        puVar3 = (undefined4 *)((long)plVar8 + lVar18);
        lVar17 = (long)puVar3 - (param_1[1] - lVar12);
        puVar19 = puVar3 + 1;
        *puVar3 = *(undefined4 *)param_2;
        _memcpy(lVar17,lVar12);
        lVar18 = *param_1;
        *param_1 = lVar17;
        param_1[1] = (long)puVar19;
        param_1[2] = (long)plVar8 + uVar15 * 4;
        if (lVar18 != 0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)puVar19;
      return;
    }
    lVar12 = param_1[2] - *param_1 >> 2;
    uVar15 = lVar12 * 0x5555555555555556;
    if (uVar15 < uVar13 || uVar15 - uVar13 == 0) {
      uVar15 = uVar13;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar12 * -0x5555555555555555)) {
      uVar15 = 0x1555555555555555;
    }
    plVar8 = param_1;
    FUN_1093aa328();
    puVar1 = (undefined8 *)((long)plVar8 + lVar18);
    uVar9 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar1 = uVar9;
    lVar18 = (long)puVar1 + 0xc;
    puVar7 = (undefined8 *)*param_1;
    puVar4 = (undefined8 *)param_1[1];
    lVar12 = (long)puVar7 - (long)puVar4;
    puVar1 = (undefined8 *)((long)puVar1 + lVar12);
    puVar16 = puVar1;
    if (lVar12 != 0) {
      do {
        uVar9 = *puVar7;
        *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
        *puVar16 = uVar9;
        puVar7 = (undefined8 *)((long)puVar7 + 0xc);
        puVar16 = (undefined8 *)((long)puVar16 + 0xc);
      } while (puVar7 != puVar4);
      puVar7 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar1;
    param_1[1] = lVar18;
    param_1[2] = (long)plVar8 + uVar15 * 0xc;
    if (puVar7 != (undefined8 *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = lVar18;
  return;
}



/* Entry: 1093aa20c; end: 1093aa327;  */

void FUN_1093aa20c(long param_1,long param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  undefined1 uStack_29;
  uint auStack_28 [6];
  
  auStack_28[0] = 0;
  auStack_28[1] = 0;
  auStack_28[2] = 0;
  auStack_28[3] = 0;
  auStack_28[4] = 0;
  auStack_28[5] = 0;
  uVar4 = (ulong)*(byte *)(param_2 + 8);
  if (uVar4 < 6 && *(byte *)(param_2 + 9) != 0) {
    auStack_28[uVar4] = auStack_28[uVar4] + (uint)*(byte *)(param_2 + 9);
  }
  uVar4 = (ulong)*(byte *)(param_2 + 10);
  if (uVar4 < 6 && *(byte *)(param_2 + 0xb) != 0) {
    auStack_28[uVar4] = auStack_28[uVar4] + (uint)*(byte *)(param_2 + 0xb);
  }
  uVar4 = (ulong)*(byte *)(param_3 + 8);
  if (uVar4 < 6 && *(byte *)(param_3 + 9) != 0) {
    auStack_28[uVar4] = auStack_28[uVar4] + (uint)*(byte *)(param_3 + 9);
  }
  uVar4 = (ulong)*(byte *)(param_3 + 10);
  if ((uVar4 < 6) && (*(byte *)(param_3 + 0xb) != 0)) {
    auStack_28[uVar4] = auStack_28[uVar4] + (uint)*(byte *)(param_3 + 0xb);
  }
  lVar7 = 4;
  puVar6 = auStack_28;
  uVar5 = auStack_28[0];
  do {
    uVar2 = *(uint *)((long)auStack_28 + lVar7);
    bVar3 = uVar2 <= uVar5;
    if (uVar5 <= uVar2) {
      uVar5 = uVar2;
    }
    puVar1 = (uint *)((long)auStack_28 + lVar7);
    if (bVar3) {
      puVar1 = puVar6;
    }
    lVar7 = lVar7 + 4;
    puVar6 = puVar1;
  } while (lVar7 != 0x18);
  uStack_29 = 0;
  if (*puVar1 != 0) {
    uStack_29 = (char)((uint)((int)puVar1 - (int)auStack_28) >> 2);
  }
  FUN_1093aa574(param_1 + 0x60,&uStack_29);
  return;
}



/* Entry: 1093aa328; end: 1093aa36b;  */

void FUN_1093aa328(double param_1,long *param_2,undefined2 *param_3,long param_4,undefined1 *param_5
                  )

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined2 uVar7;
  long *plVar8;
  undefined2 *puVar9;
  undefined1 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined2 *puVar14;
  long lVar15;
  
  if (param_3 < (undefined2 *)0x1555555555555556) {
    __Znwm((long)param_3 * 0xc);
    return;
  }
  func_0x000104c4f740();
  puVar9 = (undefined2 *)param_2[1];
  if (puVar9 < (undefined2 *)param_2[2]) {
    uVar7 = *param_3;
    *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(param_3 + 1);
    *puVar9 = uVar7;
    lVar15 = (long)puVar9 + 3;
  }
  else {
    lVar15 = (long)puVar9 - *param_2;
    uVar12 = lVar15 * -0x5555555555555555 + 1;
    if (0x5555555555555555 < uVar12) {
      FUN_1093aa524();
      if (*(char *)((long)param_3 + 7) == '\0') {
        *param_5 = *(undefined1 *)(param_4 + 4);
        param_5[1] = *(undefined1 *)(param_4 + 5);
        uVar10 = *(undefined1 *)(param_4 + 6);
      }
      else {
        if (*(char *)(param_4 + 7) != '\0') {
          bVar3 = *(byte *)((long)param_3 + 5);
          bVar4 = *(byte *)(param_4 + 5);
          bVar5 = *(byte *)(param_3 + 3);
          bVar6 = *(byte *)(param_4 + 6);
          *param_5 = (char)(int)((double)*(byte *)(param_3 + 2) +
                                (double)(int)((uint)*(byte *)(param_4 + 4) -
                                             (uint)*(byte *)(param_3 + 2)) * param_1);
          param_5[1] = (char)(int)((double)bVar3 +
                                  (double)(int)((uint)bVar4 - (uint)bVar3) * param_1);
          param_5[2] = (char)(int)((double)bVar5 +
                                  (double)(int)((uint)bVar6 - (uint)bVar5) * param_1);
          return;
        }
        *param_5 = *(undefined1 *)(param_3 + 2);
        param_5[1] = *(undefined1 *)((long)param_3 + 5);
        uVar10 = *(undefined1 *)(param_3 + 3);
      }
      param_5[2] = uVar10;
      return;
    }
    lVar11 = param_2[2] - *param_2;
    uVar13 = lVar11 * 0x5555555555555556;
    if (uVar13 < uVar12 || uVar13 - uVar12 == 0) {
      uVar13 = uVar12;
    }
    if (0x2aaaaaaaaaaaaaa9 < (ulong)(lVar11 * -0x5555555555555555)) {
      uVar13 = 0x5555555555555555;
    }
    plVar8 = param_2;
    FUN_1093aa538();
    puVar1 = (undefined2 *)((long)plVar8 + lVar15);
    uVar7 = *param_3;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_3 + 1);
    *puVar1 = uVar7;
    lVar15 = (long)puVar1 + 3;
    puVar9 = (undefined2 *)*param_2;
    puVar2 = (undefined2 *)param_2[1];
    lVar11 = (long)puVar9 - (long)puVar2;
    puVar1 = (undefined2 *)((long)puVar1 + lVar11);
    puVar14 = puVar1;
    if (lVar11 != 0) {
      do {
        uVar7 = *puVar9;
        *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar9 + 1);
        *puVar14 = uVar7;
        puVar9 = (undefined2 *)((long)puVar9 + 3);
        puVar14 = (undefined2 *)((long)puVar14 + 3);
      } while (puVar9 != puVar2);
      puVar9 = (undefined2 *)*param_2;
    }
    *param_2 = (long)puVar1;
    param_2[1] = lVar15;
    param_2[2] = (long)plVar8 + uVar13 * 3;
    if (puVar9 != (undefined2 *)0x0) {
      __ZdlPv();
    }
  }
  param_2[1] = lVar15;
  return;
}



/* Entry: 1093aa36c; end: 1093aa47b;  */

void FUN_1093aa36c(double param_1,long *param_2,undefined2 *param_3,long param_4,undefined1 *param_5
                  )

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined2 uVar7;
  long *plVar8;
  undefined2 *puVar9;
  undefined1 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined2 *puVar14;
  long lVar15;
  
  puVar9 = (undefined2 *)param_2[1];
  if (puVar9 < (undefined2 *)param_2[2]) {
    uVar7 = *param_3;
    *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(param_3 + 1);
    *puVar9 = uVar7;
    lVar15 = (long)puVar9 + 3;
  }
  else {
    lVar15 = (long)puVar9 - *param_2;
    uVar12 = lVar15 * -0x5555555555555555 + 1;
    if (0x5555555555555555 < uVar12) {
      FUN_1093aa524();
      if (*(char *)((long)param_3 + 7) == '\0') {
        *param_5 = *(undefined1 *)(param_4 + 4);
        param_5[1] = *(undefined1 *)(param_4 + 5);
        uVar10 = *(undefined1 *)(param_4 + 6);
      }
      else {
        if (*(char *)(param_4 + 7) != '\0') {
          bVar3 = *(byte *)((long)param_3 + 5);
          bVar4 = *(byte *)(param_4 + 5);
          bVar5 = *(byte *)(param_3 + 3);
          bVar6 = *(byte *)(param_4 + 6);
          *param_5 = (char)(int)((double)*(byte *)(param_3 + 2) +
                                (double)(int)((uint)*(byte *)(param_4 + 4) -
                                             (uint)*(byte *)(param_3 + 2)) * param_1);
          param_5[1] = (char)(int)((double)bVar3 +
                                  (double)(int)((uint)bVar4 - (uint)bVar3) * param_1);
          param_5[2] = (char)(int)((double)bVar5 +
                                  (double)(int)((uint)bVar6 - (uint)bVar5) * param_1);
          return;
        }
        *param_5 = *(undefined1 *)(param_3 + 2);
        param_5[1] = *(undefined1 *)((long)param_3 + 5);
        uVar10 = *(undefined1 *)(param_3 + 3);
      }
      param_5[2] = uVar10;
      return;
    }
    lVar11 = param_2[2] - *param_2;
    uVar13 = lVar11 * 0x5555555555555556;
    if (uVar13 < uVar12 || uVar13 - uVar12 == 0) {
      uVar13 = uVar12;
    }
    if (0x2aaaaaaaaaaaaaa9 < (ulong)(lVar11 * -0x5555555555555555)) {
      uVar13 = 0x5555555555555555;
    }
    plVar8 = param_2;
    FUN_1093aa538();
    puVar1 = (undefined2 *)((long)plVar8 + lVar15);
    uVar7 = *param_3;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_3 + 1);
    *puVar1 = uVar7;
    lVar15 = (long)puVar1 + 3;
    puVar9 = (undefined2 *)*param_2;
    puVar2 = (undefined2 *)param_2[1];
    lVar11 = (long)puVar9 - (long)puVar2;
    puVar1 = (undefined2 *)((long)puVar1 + lVar11);
    puVar14 = puVar1;
    if (lVar11 != 0) {
      do {
        uVar7 = *puVar9;
        *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar9 + 1);
        *puVar14 = uVar7;
        puVar9 = (undefined2 *)((long)puVar9 + 3);
        puVar14 = (undefined2 *)((long)puVar14 + 3);
      } while (puVar9 != puVar2);
      puVar9 = (undefined2 *)*param_2;
    }
    *param_2 = (long)puVar1;
    param_2[1] = lVar15;
    param_2[2] = (long)plVar8 + uVar13 * 3;
    if (puVar9 != (undefined2 *)0x0) {
      __ZdlPv();
    }
  }
  param_2[1] = lVar15;
  return;
}



/* Entry: 1093aa47c; end: 1093aa523;  */

void FUN_1093aa47c(double param_1,undefined8 param_2,long param_3,long param_4,undefined1 *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  
  if (*(char *)(param_3 + 7) == '\0') {
    *param_5 = *(undefined1 *)(param_4 + 4);
    param_5[1] = *(undefined1 *)(param_4 + 5);
    uVar5 = *(undefined1 *)(param_4 + 6);
  }
  else {
    if (*(char *)(param_4 + 7) != '\0') {
      bVar1 = *(byte *)(param_3 + 5);
      bVar2 = *(byte *)(param_4 + 5);
      bVar3 = *(byte *)(param_3 + 6);
      bVar4 = *(byte *)(param_4 + 6);
      *param_5 = (char)(int)((double)*(byte *)(param_3 + 4) +
                            (double)(int)((uint)*(byte *)(param_4 + 4) -
                                         (uint)*(byte *)(param_3 + 4)) * param_1);
      param_5[1] = (char)(int)((double)bVar1 + (double)(int)((uint)bVar2 - (uint)bVar1) * param_1);
      param_5[2] = (char)(int)((double)bVar3 + (double)(int)((uint)bVar4 - (uint)bVar3) * param_1);
      return;
    }
    *param_5 = *(undefined1 *)(param_3 + 4);
    param_5[1] = *(undefined1 *)(param_3 + 5);
    uVar5 = *(undefined1 *)(param_3 + 6);
  }
  param_5[2] = uVar5;
  return;
}



/* Entry: 1093aa524; end: 1093aa537;  */

undefined1  [16]
FUN_1093aa524(undefined8 param_1,uint *param_2,uint *param_3,uint *param_4,long param_5)

{
  undefined1 *puVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  float *pfVar8;
  uint *puVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  uint uVar13;
  uint *puVar14;
  long lVar15;
  uint *puVar16;
  float *pfVar17;
  undefined *puVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uStack_118;
  uint uStack_114;
  
  puVar2 = (uint *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < (uint *)0x5555555555555556) {
    lVar15 = (long)param_2 * 3;
    __Znwm(lVar15);
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = lVar15;
    return auVar19;
  }
  func_0x000104c4f740();
  puVar1 = *(undefined1 **)(puVar2 + 2);
  if (puVar1 < *(undefined1 **)(puVar2 + 4)) {
    puVar18 = puVar1 + 1;
    *puVar1 = (char)*param_2;
    puVar3 = puVar2;
  }
  else {
    puVar14 = *(uint **)puVar2;
    lVar15 = (long)puVar1 - (long)puVar14;
    puVar16 = (uint *)(lVar15 + 1);
    if ((long)puVar16 < 0) {
      func_0x000104c591bc();
      puVar14 = param_2;
      puVar16 = param_2;
      if (0 < param_5) {
        puVar9 = *(uint **)(puVar2 + 2);
        if (*(long *)(puVar2 + 4) - (long)puVar9 >> 2 < param_5) {
          lVar15 = *(long *)puVar2;
          uVar5 = param_5 + ((long)puVar9 - lVar15 >> 2);
          if (uVar5 >> 0x3e != 0) {
            FUN_109231bc0();
            lVar15 = *(long *)(puVar2 + 0x36);
            lVar4 = *(long *)(puVar2 + 0x38);
            puVar16 = puVar2;
            if (lVar4 != lVar15) {
              uStack_114 = 0;
              uVar13 = (uint)((ulong)(*(long *)(puVar2 + 2) - *(long *)puVar2) >> 2);
              if (uVar13 != 0) {
                uVar5 = 0;
                do {
                  param_2 = (uint *)(*(long *)puVar2 + uVar5 * 4);
                  puVar16 = puVar2 + 0x3c;
                  FUN_1093aafd0(puVar16,param_2,&uStack_114);
                  uStack_114 = uStack_114 + 1;
                  uVar5 = (ulong)uStack_114;
                } while (uStack_114 < uVar13);
                lVar15 = *(long *)(puVar2 + 0x36);
                lVar4 = *(long *)(puVar2 + 0x38);
              }
              if (lVar4 != lVar15) {
                uVar5 = 0;
                do {
                  uVar13 = *(uint *)(lVar15 + uVar5 * 4);
                  uVar5 = uVar5 + 1;
                  lVar12 = lVar4 - lVar15;
                  if ((uVar13 != 0xffff) && (uVar5 < (ulong)(lVar12 >> 2))) {
                    pfVar17 = (float *)(*(long *)(puVar2 + 6) + (ulong)uVar13 * 0xc);
                    uVar10 = uVar5;
                    do {
                      uStack_118 = *(uint *)(lVar15 + uVar10 * 4);
                      if ((((uStack_118 != 0xffff) &&
                           (pfVar8 = (float *)(*(long *)(puVar2 + 6) + (ulong)uStack_118 * 0xc),
                           *pfVar17 == *pfVar8)) && (pfVar17[1] == pfVar8[1])) &&
                         (pfVar17[2] == pfVar8[2])) {
                        *(undefined4 *)(lVar15 + uVar10 * 4) = 0xffff;
                        puVar16 = puVar2 + 0x3c;
                        param_2 = &uStack_118;
                        func_0x0001093ab484();
                        if (puVar16 != param_2) {
                          lVar15 = *(long *)puVar2;
                          do {
                            *(uint *)(lVar15 + (ulong)puVar16[5] * 4) = uVar13;
                            puVar16 = *(uint **)puVar16;
                          } while (puVar16 != param_2);
                        }
                      }
                      uVar10 = uVar10 + 1;
                      lVar15 = *(long *)(puVar2 + 0x36);
                      lVar4 = *(long *)(puVar2 + 0x38);
                      lVar12 = lVar4 - lVar15;
                    } while (uVar10 < (ulong)(lVar12 >> 2));
                  }
                } while (uVar5 < (ulong)(lVar12 >> 2));
              }
            }
            auVar22._8_8_ = param_2;
            auVar22._0_8_ = puVar16;
            return auVar22;
          }
          uVar6 = *(long *)(puVar2 + 4) - lVar15;
          uVar10 = (long)uVar6 >> 1;
          if (uVar10 <= uVar5) {
            uVar10 = uVar5;
          }
          if (0x7ffffffffffffffb < uVar6) {
            uVar10 = 0x3fffffffffffffff;
          }
          if (uVar10 == 0) {
            puVar9 = (uint *)0x0;
          }
          else {
            puVar9 = puVar2;
            func_0x000107c2ab8c();
          }
          puVar16 = (uint *)((long)puVar9 + ((long)param_2 - lVar15));
          lVar15 = param_5 << 2;
          puVar14 = puVar16;
          do {
            *puVar14 = *param_3;
            lVar15 = lVar15 + -4;
            puVar14 = puVar14 + 1;
            param_3 = param_3 + 1;
          } while (lVar15 != 0);
          _memcpy(puVar16 + param_5,param_2,*(long *)(puVar2 + 2) - (long)param_2);
          puVar14 = *(uint **)puVar2;
          lVar15 = *(long *)(puVar2 + 2);
          *(uint **)(puVar2 + 2) = param_2;
          lVar12 = (long)puVar16 - ((long)param_2 - (long)puVar14);
          _memcpy(lVar12);
          lVar4 = *(long *)puVar2;
          *(long *)puVar2 = lVar12;
          *(undefined **)(puVar2 + 2) =
               (undefined *)((long)(puVar16 + param_5) + (lVar15 - (long)param_2));
          *(uint **)(puVar2 + 4) = puVar9 + uVar10;
          if (lVar4 != 0) {
            __ZdlPv();
          }
        }
        else {
          lVar15 = (long)puVar9 - (long)param_2;
          if (lVar15 >> 2 < param_5) {
            puVar3 = puVar9;
            puVar7 = puVar9;
            for (puVar11 = (uint *)((long)param_3 + lVar15); puVar11 != param_4;
                puVar11 = puVar11 + 1) {
              *puVar7 = *puVar11;
              puVar3 = puVar3 + 1;
              puVar7 = puVar7 + 1;
            }
            *(uint **)(puVar2 + 2) = puVar3;
            if (lVar15 >> 2 < 1) goto LAB_1093aa824;
            puVar11 = puVar3 + -param_5;
            for (; puVar11 < puVar9; puVar11 = puVar11 + 1) {
              *puVar3 = *puVar11;
              puVar3 = puVar3 + 1;
            }
            *(uint **)(puVar2 + 2) = puVar3;
            if (puVar7 != param_2 + param_5) {
              _memmove(param_2 + param_5,param_2);
            }
            if (puVar9 == param_2) goto LAB_1093aa824;
          }
          else {
            puVar14 = puVar9;
            for (puVar3 = puVar9 + -param_5; puVar3 < puVar9; puVar3 = puVar3 + 1) {
              *puVar14 = *puVar3;
              puVar14 = puVar14 + 1;
            }
            *(uint **)(puVar2 + 2) = puVar14;
            if (puVar9 != param_2 + param_5) {
              _memmove(param_2 + param_5,param_2);
            }
            lVar15 = param_5 << 2;
          }
          _memmove(param_2,param_3,lVar15);
          puVar14 = param_3;
        }
      }
LAB_1093aa824:
      auVar21._8_8_ = puVar14;
      auVar21._0_8_ = puVar16;
      return auVar21;
    }
    uVar5 = (long)*(undefined1 **)(puVar2 + 4) - (long)puVar14;
    puVar9 = (uint *)(uVar5 * 2);
    if (puVar9 < puVar16 || (long)puVar9 - (long)puVar16 == 0) {
      puVar9 = puVar16;
    }
    if (0x3ffffffffffffffe < uVar5) {
      puVar9 = (uint *)0x7fffffffffffffff;
    }
    if (puVar9 == (uint *)0x0) {
      puVar16 = (uint *)0x0;
    }
    else {
      puVar16 = puVar9;
      __Znwm();
    }
    puVar18 = (undefined *)((long)puVar16 + lVar15) + 1;
    *(undefined *)((long)puVar16 + lVar15) = (char)*param_2;
    puVar3 = puVar16;
    param_2 = puVar14;
    _memcpy(puVar16,puVar14,lVar15);
    *(uint **)puVar2 = puVar16;
    *(undefined **)(puVar2 + 2) = puVar18;
    *(undefined **)(puVar2 + 4) = (undefined *)((long)puVar16 + (long)puVar9);
    if (puVar14 != (uint *)0x0) {
      __ZdlPv(puVar14);
      puVar3 = puVar14;
    }
  }
  *(undefined **)(puVar2 + 2) = puVar18;
  auVar20._8_8_ = param_2;
  auVar20._0_8_ = puVar3;
  return auVar20;
}



/* Entry: 1093aa538; end: 1093aa573;  */

undefined1  [16]
FUN_1093aa538(ulong *param_1,ulong *param_2,ulong *param_3,undefined4 *param_4,long param_5)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  float *pfVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  ulong *puVar12;
  uint uVar13;
  ulong *puVar14;
  long lVar15;
  ulong *puVar16;
  float *pfVar17;
  undefined1 *puVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uStack_108;
  uint uStack_104;
  
  if (param_2 < (ulong *)0x5555555555555556) {
    lVar15 = (long)param_2 * 3;
    __Znwm(lVar15);
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = lVar15;
    return auVar19;
  }
  func_0x000104c4f740();
  puVar2 = (undefined1 *)param_1[1];
  if (puVar2 < (undefined1 *)param_1[2]) {
    puVar18 = puVar2 + 1;
    *puVar2 = (char)*param_2;
    puVar3 = param_1;
  }
  else {
    puVar14 = (ulong *)*param_1;
    lVar15 = (long)puVar2 - (long)puVar14;
    puVar16 = (ulong *)(lVar15 + 1);
    if ((long)puVar16 < 0) {
      func_0x000104c591bc();
      puVar14 = param_2;
      puVar16 = param_2;
      if (0 < param_5) {
        puVar8 = (ulong *)param_1[1];
        if ((long)(param_1[2] - (long)puVar8) >> 2 < param_5) {
          uVar9 = *param_1;
          uVar4 = param_5 + ((long)((long)puVar8 - uVar9) >> 2);
          if (uVar4 >> 0x3e != 0) {
            FUN_109231bc0();
            uVar4 = param_1[0x1b];
            uVar9 = param_1[0x1c];
            puVar16 = param_1;
            if (uVar9 != uVar4) {
              uStack_104 = 0;
              uVar13 = (uint)(param_1[1] - *param_1 >> 2);
              if (uVar13 != 0) {
                uVar4 = 0;
                do {
                  param_2 = (ulong *)(*param_1 + uVar4 * 4);
                  puVar16 = param_1 + 0x1e;
                  FUN_1093aafd0(puVar16,param_2,&uStack_104);
                  uStack_104 = uStack_104 + 1;
                  uVar4 = (ulong)uStack_104;
                } while (uStack_104 < uVar13);
                uVar4 = param_1[0x1b];
                uVar9 = param_1[0x1c];
              }
              if (uVar9 != uVar4) {
                uVar10 = 0;
                do {
                  uVar13 = *(uint *)(uVar4 + uVar10 * 4);
                  uVar10 = uVar10 + 1;
                  lVar15 = uVar9 - uVar4;
                  if ((uVar13 != 0xffff) && (uVar10 < (ulong)(lVar15 >> 2))) {
                    pfVar17 = (float *)(param_1[3] + (ulong)uVar13 * 0xc);
                    uVar5 = uVar10;
                    do {
                      uStack_108 = *(uint *)(uVar4 + uVar5 * 4);
                      if ((((uStack_108 != 0xffff) &&
                           (pfVar7 = (float *)(param_1[3] + (ulong)uStack_108 * 0xc),
                           *pfVar17 == *pfVar7)) && (pfVar17[1] == pfVar7[1])) &&
                         (pfVar17[2] == pfVar7[2])) {
                        *(undefined4 *)(uVar4 + uVar5 * 4) = 0xffff;
                        puVar16 = param_1 + 0x1e;
                        param_2 = (ulong *)&uStack_108;
                        func_0x0001093ab484();
                        if (puVar16 != param_2) {
                          uVar4 = *param_1;
                          do {
                            *(uint *)(uVar4 + (ulong)*(uint *)((long)puVar16 + 0x14) * 4) = uVar13;
                            puVar16 = (ulong *)*puVar16;
                          } while (puVar16 != param_2);
                        }
                      }
                      uVar5 = uVar5 + 1;
                      uVar4 = param_1[0x1b];
                      uVar9 = param_1[0x1c];
                      lVar15 = uVar9 - uVar4;
                    } while (uVar5 < (ulong)(lVar15 >> 2));
                  }
                } while (uVar10 < (ulong)(lVar15 >> 2));
              }
            }
            auVar22._8_8_ = param_2;
            auVar22._0_8_ = puVar16;
            return auVar22;
          }
          uVar5 = param_1[2] - uVar9;
          uVar10 = (long)uVar5 >> 1;
          if (uVar10 <= uVar4) {
            uVar10 = uVar4;
          }
          if (0x7ffffffffffffffb < uVar5) {
            uVar10 = 0x3fffffffffffffff;
          }
          if (uVar10 == 0) {
            puVar8 = (ulong *)0x0;
          }
          else {
            puVar8 = param_1;
            func_0x000107c2ab8c();
          }
          puVar16 = (ulong *)((long)puVar8 + ((long)param_2 - uVar9));
          lVar15 = (long)puVar16 + param_5 * 4;
          param_5 = param_5 << 2;
          puVar14 = puVar16;
          do {
            *(int *)puVar14 = (int)*param_3;
            param_5 = param_5 + -4;
            puVar14 = (ulong *)((long)puVar14 + 4);
            param_3 = (ulong *)((long)param_3 + 4);
          } while (param_5 != 0);
          _memcpy(lVar15,param_2,param_1[1] - (long)param_2);
          puVar14 = (ulong *)*param_1;
          uVar4 = param_1[1];
          param_1[1] = (ulong)param_2;
          uVar5 = (long)puVar16 - ((long)param_2 - (long)puVar14);
          _memcpy(uVar5);
          uVar9 = *param_1;
          *param_1 = uVar5;
          param_1[1] = lVar15 + (uVar4 - (long)param_2);
          param_1[2] = (long)puVar8 + uVar10 * 4;
          if (uVar9 != 0) {
            __ZdlPv();
          }
        }
        else {
          lVar15 = (long)puVar8 - (long)param_2;
          if (lVar15 >> 2 < param_5) {
            puVar3 = puVar8;
            puVar6 = puVar8;
            for (puVar11 = (undefined4 *)((long)param_3 + lVar15); puVar11 != param_4;
                puVar11 = puVar11 + 1) {
              *(undefined4 *)puVar6 = *puVar11;
              puVar3 = (ulong *)((long)puVar3 + 4);
              puVar6 = (ulong *)((long)puVar6 + 4);
            }
            param_1[1] = (ulong)puVar3;
            if (lVar15 >> 2 < 1) goto LAB_1093aa824;
            puVar1 = (ulong *)((long)param_2 + param_5 * 4);
            puVar12 = (ulong *)((long)puVar3 + param_5 * -4);
            for (; puVar12 < puVar8; puVar12 = (ulong *)((long)puVar12 + 4)) {
              *(int *)puVar3 = (int)*puVar12;
              puVar3 = (ulong *)((long)puVar3 + 4);
            }
            param_1[1] = (ulong)puVar3;
            if (puVar6 != puVar1) {
              _memmove(puVar1,param_2);
            }
            if (puVar8 == param_2) goto LAB_1093aa824;
          }
          else {
            puVar14 = (ulong *)((long)param_2 + param_5 * 4);
            puVar3 = puVar8;
            for (puVar6 = (ulong *)((long)puVar8 + param_5 * -4); puVar6 < puVar8;
                puVar6 = (ulong *)((long)puVar6 + 4)) {
              *(int *)puVar3 = (int)*puVar6;
              puVar3 = (ulong *)((long)puVar3 + 4);
            }
            param_1[1] = (ulong)puVar3;
            if (puVar8 != puVar14) {
              _memmove(puVar14,param_2);
            }
            lVar15 = param_5 << 2;
          }
          _memmove(param_2,param_3,lVar15);
          puVar14 = param_3;
        }
      }
LAB_1093aa824:
      auVar21._8_8_ = puVar14;
      auVar21._0_8_ = puVar16;
      return auVar21;
    }
    uVar4 = (long)param_1[2] - (long)puVar14;
    puVar8 = (ulong *)(uVar4 * 2);
    if (puVar8 < puVar16 || (long)puVar8 - (long)puVar16 == 0) {
      puVar8 = puVar16;
    }
    if (0x3ffffffffffffffe < uVar4) {
      puVar8 = (ulong *)0x7fffffffffffffff;
    }
    if (puVar8 == (ulong *)0x0) {
      puVar16 = (ulong *)0x0;
    }
    else {
      puVar16 = puVar8;
      __Znwm();
    }
    puVar18 = (undefined1 *)((long)puVar16 + lVar15) + 1;
    *(undefined1 *)((long)puVar16 + lVar15) = (char)*param_2;
    puVar3 = puVar16;
    param_2 = puVar14;
    _memcpy(puVar16,puVar14,lVar15);
    *param_1 = (ulong)puVar16;
    param_1[1] = (ulong)puVar18;
    param_1[2] = (long)puVar16 + (long)puVar8;
    if (puVar14 != (ulong *)0x0) {
      __ZdlPv(puVar14);
      puVar3 = puVar14;
    }
  }
  param_1[1] = (ulong)puVar18;
  auVar20._8_8_ = param_2;
  auVar20._0_8_ = puVar3;
  return auVar20;
}



/* Entry: 1093aa574; end: 1093aa647;  */

ulong * FUN_1093aa574(ulong *param_1,ulong *param_2,undefined4 *param_3,undefined4 *param_4,
                     long param_5)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  float *pfVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  ulong *puVar11;
  uint uVar12;
  ulong *puVar13;
  long lVar14;
  ulong *puVar15;
  float *pfVar16;
  undefined1 *puVar17;
  uint uStack_e8;
  uint uStack_e4;
  
  puVar1 = (undefined1 *)param_1[1];
  if (puVar1 < (undefined1 *)param_1[2]) {
    puVar17 = puVar1 + 1;
    *puVar1 = (char)*param_2;
    puVar2 = param_1;
  }
  else {
    puVar13 = (ulong *)*param_1;
    lVar14 = (long)puVar1 - (long)puVar13;
    puVar15 = (ulong *)(lVar14 + 1);
    if ((long)puVar15 < 0) {
      func_0x000104c591bc();
      puVar15 = param_2;
      if (0 < param_5) {
        puVar13 = (ulong *)param_1[1];
        if ((long)(param_1[2] - (long)puVar13) >> 2 < param_5) {
          uVar8 = *param_1;
          uVar3 = param_5 + ((long)((long)puVar13 - uVar8) >> 2);
          if (uVar3 >> 0x3e != 0) {
            FUN_109231bc0();
            uVar3 = param_1[0x1b];
            uVar8 = param_1[0x1c];
            puVar15 = param_1;
            if (uVar8 != uVar3) {
              uStack_e4 = 0;
              uVar12 = (uint)(param_1[1] - *param_1 >> 2);
              if (uVar12 != 0) {
                uVar3 = 0;
                do {
                  puVar15 = param_1 + 0x1e;
                  FUN_1093aafd0(puVar15,*param_1 + uVar3 * 4,&uStack_e4);
                  uStack_e4 = uStack_e4 + 1;
                  uVar3 = (ulong)uStack_e4;
                } while (uStack_e4 < uVar12);
                uVar3 = param_1[0x1b];
                uVar8 = param_1[0x1c];
              }
              if (uVar8 != uVar3) {
                uVar9 = 0;
                do {
                  uVar12 = *(uint *)(uVar3 + uVar9 * 4);
                  uVar9 = uVar9 + 1;
                  lVar14 = uVar8 - uVar3;
                  if ((uVar12 != 0xffff) && (uVar9 < (ulong)(lVar14 >> 2))) {
                    pfVar16 = (float *)(param_1[3] + (ulong)uVar12 * 0xc);
                    uVar4 = uVar9;
                    do {
                      uStack_e8 = *(uint *)(uVar3 + uVar4 * 4);
                      if ((((uStack_e8 != 0xffff) &&
                           (pfVar6 = (float *)(param_1[3] + (ulong)uStack_e8 * 0xc),
                           *pfVar16 == *pfVar6)) && (pfVar16[1] == pfVar6[1])) &&
                         (pfVar16[2] == pfVar6[2])) {
                        *(undefined4 *)(uVar3 + uVar4 * 4) = 0xffff;
                        puVar15 = param_1 + 0x1e;
                        puVar13 = (ulong *)&uStack_e8;
                        func_0x0001093ab484();
                        if (puVar15 != puVar13) {
                          uVar3 = *param_1;
                          do {
                            *(uint *)(uVar3 + (ulong)*(uint *)((long)puVar15 + 0x14) * 4) = uVar12;
                            puVar15 = (ulong *)*puVar15;
                          } while (puVar15 != puVar13);
                        }
                      }
                      uVar4 = uVar4 + 1;
                      uVar3 = param_1[0x1b];
                      uVar8 = param_1[0x1c];
                      lVar14 = uVar8 - uVar3;
                    } while (uVar4 < (ulong)(lVar14 >> 2));
                  }
                } while (uVar9 < (ulong)(lVar14 >> 2));
              }
            }
            return puVar15;
          }
          uVar4 = param_1[2] - uVar8;
          uVar9 = (long)uVar4 >> 1;
          if (uVar9 <= uVar3) {
            uVar9 = uVar3;
          }
          if (0x7ffffffffffffffb < uVar4) {
            uVar9 = 0x3fffffffffffffff;
          }
          if (uVar9 == 0) {
            puVar13 = (ulong *)0x0;
          }
          else {
            puVar13 = param_1;
            func_0x000107c2ab8c();
          }
          puVar15 = (ulong *)((long)puVar13 + ((long)param_2 - uVar8));
          puVar10 = (undefined4 *)((long)puVar15 + param_5 * 4);
          param_5 = param_5 << 2;
          puVar7 = puVar15;
          do {
            *(undefined4 *)puVar7 = *param_3;
            param_5 = param_5 + -4;
            puVar7 = (ulong *)((long)puVar7 + 4);
            param_3 = param_3 + 1;
          } while (param_5 != 0);
          _memcpy(puVar10,param_2,param_1[1] - (long)param_2);
          uVar3 = param_1[1];
          param_1[1] = (ulong)param_2;
          uVar4 = (long)puVar15 - ((long)param_2 - *param_1);
          _memcpy(uVar4);
          uVar8 = *param_1;
          *param_1 = uVar4;
          param_1[1] = (long)puVar10 + (uVar3 - (long)param_2);
          param_1[2] = (long)puVar13 + uVar9 * 4;
          if (uVar8 != 0) {
            __ZdlPv();
          }
        }
        else {
          lVar14 = (long)puVar13 - (long)param_2;
          if (lVar14 >> 2 < param_5) {
            puVar7 = puVar13;
            puVar2 = puVar13;
            for (puVar10 = (undefined4 *)((long)param_3 + lVar14); puVar10 != param_4;
                puVar10 = puVar10 + 1) {
              *(undefined4 *)puVar2 = *puVar10;
              puVar7 = (ulong *)((long)puVar7 + 4);
              puVar2 = (ulong *)((long)puVar2 + 4);
            }
            param_1[1] = (ulong)puVar7;
            if (lVar14 >> 2 < 1) {
              return param_2;
            }
            puVar5 = (ulong *)((long)param_2 + param_5 * 4);
            puVar11 = (ulong *)((long)puVar7 + param_5 * -4);
            for (; puVar11 < puVar13; puVar11 = (ulong *)((long)puVar11 + 4)) {
              *(int *)puVar7 = (int)*puVar11;
              puVar7 = (ulong *)((long)puVar7 + 4);
            }
            param_1[1] = (ulong)puVar7;
            if (puVar2 != puVar5) {
              _memmove(puVar5,param_2);
            }
            if (puVar13 == param_2) {
              return param_2;
            }
          }
          else {
            puVar7 = (ulong *)((long)param_2 + param_5 * 4);
            puVar2 = puVar13;
            for (puVar5 = (ulong *)((long)puVar13 + param_5 * -4); puVar5 < puVar13;
                puVar5 = (ulong *)((long)puVar5 + 4)) {
              *(int *)puVar2 = (int)*puVar5;
              puVar2 = (ulong *)((long)puVar2 + 4);
            }
            param_1[1] = (ulong)puVar2;
            if (puVar13 != puVar7) {
              _memmove(puVar7,param_2);
            }
            lVar14 = param_5 << 2;
          }
          _memmove(param_2,param_3,lVar14);
        }
      }
      return puVar15;
    }
    uVar3 = (long)param_1[2] - (long)puVar13;
    puVar7 = (ulong *)(uVar3 * 2);
    if (puVar7 < puVar15 || (long)puVar7 - (long)puVar15 == 0) {
      puVar7 = puVar15;
    }
    if (0x3ffffffffffffffe < uVar3) {
      puVar7 = (ulong *)0x7fffffffffffffff;
    }
    if (puVar7 == (ulong *)0x0) {
      puVar15 = (ulong *)0x0;
    }
    else {
      puVar15 = puVar7;
      __Znwm();
    }
    puVar17 = (undefined1 *)((long)puVar15 + lVar14) + 1;
    *(undefined1 *)((long)puVar15 + lVar14) = (char)*param_2;
    puVar2 = puVar15;
    _memcpy(puVar15,puVar13,lVar14);
    *param_1 = (ulong)puVar15;
    param_1[1] = (ulong)puVar17;
    param_1[2] = (long)puVar15 + (long)puVar7;
    if (puVar13 != (ulong *)0x0) {
      __ZdlPv(puVar13);
      puVar2 = puVar13;
    }
  }
  param_1[1] = (ulong)puVar17;
  return puVar2;
}



/* Entry: 1093aa648; end: 1093aa83f;  */

uint * FUN_1093aa648(uint *param_1,uint *param_2,uint *param_3,uint *param_4,long param_5)

{
  uint *puVar1;
  long lVar2;
  uint *puVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  float *pfVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  float *pfVar14;
  uint uStack_98;
  uint uStack_94;
  
  puVar3 = param_2;
  if (0 < param_5) {
    puVar1 = *(uint **)(param_1 + 2);
    if (*(long *)(param_1 + 4) - (long)puVar1 >> 2 < param_5) {
      lVar10 = *(long *)param_1;
      uVar6 = param_5 + ((long)puVar1 - lVar10 >> 2);
      if (uVar6 >> 0x3e != 0) {
        FUN_109231bc0();
        lVar10 = *(long *)(param_1 + 0x36);
        lVar2 = *(long *)(param_1 + 0x38);
        puVar3 = param_1;
        if (lVar2 != lVar10) {
          uStack_94 = 0;
          uVar13 = (uint)((ulong)(*(long *)(param_1 + 2) - *(long *)param_1) >> 2);
          if (uVar13 != 0) {
            uVar6 = 0;
            do {
              puVar3 = param_1 + 0x3c;
              FUN_1093aafd0(puVar3,*(long *)param_1 + uVar6 * 4,&uStack_94);
              uStack_94 = uStack_94 + 1;
              uVar6 = (ulong)uStack_94;
            } while (uStack_94 < uVar13);
            lVar10 = *(long *)(param_1 + 0x36);
            lVar2 = *(long *)(param_1 + 0x38);
          }
          if (lVar2 != lVar10) {
            uVar6 = 0;
            do {
              uVar13 = *(uint *)(lVar10 + uVar6 * 4);
              uVar6 = uVar6 + 1;
              lVar12 = lVar2 - lVar10;
              if ((uVar13 != 0xffff) && (uVar6 < (ulong)(lVar12 >> 2))) {
                pfVar14 = (float *)(*(long *)(param_1 + 6) + (ulong)uVar13 * 0xc);
                uVar11 = uVar6;
                do {
                  uStack_98 = *(uint *)(lVar10 + uVar11 * 4);
                  if ((((uStack_98 != 0xffff) &&
                       (pfVar9 = (float *)(*(long *)(param_1 + 6) + (ulong)uStack_98 * 0xc),
                       *pfVar14 == *pfVar9)) && (pfVar14[1] == pfVar9[1])) &&
                     (pfVar14[2] == pfVar9[2])) {
                    *(undefined4 *)(lVar10 + uVar11 * 4) = 0xffff;
                    puVar3 = param_1 + 0x3c;
                    puVar1 = &uStack_98;
                    func_0x0001093ab484();
                    if (puVar3 != puVar1) {
                      lVar10 = *(long *)param_1;
                      do {
                        *(uint *)(lVar10 + (ulong)puVar3[5] * 4) = uVar13;
                        puVar3 = *(uint **)puVar3;
                      } while (puVar3 != puVar1);
                    }
                  }
                  uVar11 = uVar11 + 1;
                  lVar10 = *(long *)(param_1 + 0x36);
                  lVar2 = *(long *)(param_1 + 0x38);
                  lVar12 = lVar2 - lVar10;
                } while (uVar11 < (ulong)(lVar12 >> 2));
              }
            } while (uVar6 < (ulong)(lVar12 >> 2));
          }
        }
        return puVar3;
      }
      uVar4 = *(long *)(param_1 + 4) - lVar10;
      uVar11 = (long)uVar4 >> 1;
      if (uVar11 <= uVar6) {
        uVar11 = uVar6;
      }
      if (0x7ffffffffffffffb < uVar4) {
        uVar11 = 0x3fffffffffffffff;
      }
      if (uVar11 == 0) {
        puVar1 = (uint *)0x0;
      }
      else {
        puVar1 = param_1;
        func_0x000107c2ab8c();
      }
      puVar3 = (uint *)((long)puVar1 + ((long)param_2 - lVar10));
      lVar10 = param_5 << 2;
      puVar5 = puVar3;
      do {
        *puVar5 = *param_3;
        lVar10 = lVar10 + -4;
        puVar5 = puVar5 + 1;
        param_3 = param_3 + 1;
      } while (lVar10 != 0);
      _memcpy(puVar3 + param_5,param_2,*(long *)(param_1 + 2) - (long)param_2);
      lVar10 = *(long *)(param_1 + 2);
      *(uint **)(param_1 + 2) = param_2;
      lVar12 = (long)puVar3 - ((long)param_2 - *(long *)param_1);
      _memcpy(lVar12);
      lVar2 = *(long *)param_1;
      *(long *)param_1 = lVar12;
      *(long *)(param_1 + 2) = (long)(puVar3 + param_5) + (lVar10 - (long)param_2);
      *(uint **)(param_1 + 4) = puVar1 + uVar11;
      if (lVar2 != 0) {
        __ZdlPv();
      }
    }
    else {
      lVar10 = (long)puVar1 - (long)param_2;
      if (lVar10 >> 2 < param_5) {
        puVar5 = puVar1;
        puVar7 = puVar1;
        for (puVar8 = (uint *)((long)param_3 + lVar10); puVar8 != param_4; puVar8 = puVar8 + 1) {
          *puVar7 = *puVar8;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        *(uint **)(param_1 + 2) = puVar5;
        if (lVar10 >> 2 < 1) {
          return param_2;
        }
        puVar8 = puVar5 + -param_5;
        for (; puVar8 < puVar1; puVar8 = puVar8 + 1) {
          *puVar5 = *puVar8;
          puVar5 = puVar5 + 1;
        }
        *(uint **)(param_1 + 2) = puVar5;
        if (puVar7 != param_2 + param_5) {
          _memmove(param_2 + param_5,param_2);
        }
        if (puVar1 == param_2) {
          return param_2;
        }
      }
      else {
        puVar5 = puVar1;
        for (puVar8 = puVar1 + -param_5; puVar8 < puVar1; puVar8 = puVar8 + 1) {
          *puVar5 = *puVar8;
          puVar5 = puVar5 + 1;
        }
        *(uint **)(param_1 + 2) = puVar5;
        if (puVar1 != param_2 + param_5) {
          _memmove(param_2 + param_5,param_2);
        }
        lVar10 = param_5 << 2;
      }
      _memmove(param_2,param_3,lVar10);
    }
  }
  return puVar3;
}



/* Entry: 1093aa840; end: 1093aa99f;  */

void FUN_1093aa840(long *param_1)

{
  uint *puVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  float *pfVar9;
  ulong uVar10;
  uint uStack_58;
  uint uStack_54;
  
  lVar4 = param_1[0x1b];
  lVar6 = param_1[0x1c];
  if (lVar6 != lVar4) {
    uStack_54 = 0;
    uVar8 = (uint)((ulong)(param_1[1] - *param_1) >> 2);
    if (uVar8 != 0) {
      uVar3 = 0;
      do {
        FUN_1093aafd0(param_1 + 0x1e,*param_1 + uVar3 * 4,&uStack_54);
        uStack_54 = uStack_54 + 1;
        uVar3 = (ulong)uStack_54;
      } while (uStack_54 < uVar8);
      lVar4 = param_1[0x1b];
      lVar6 = param_1[0x1c];
    }
    if (lVar6 != lVar4) {
      uVar3 = 0;
      do {
        uVar8 = *(uint *)(lVar4 + uVar3 * 4);
        uVar3 = uVar3 + 1;
        lVar7 = lVar6 - lVar4;
        if ((uVar8 != 0xffff) && (uVar3 < (ulong)(lVar7 >> 2))) {
          pfVar9 = (float *)(param_1[3] + (ulong)uVar8 * 0xc);
          uVar10 = uVar3;
          do {
            uStack_58 = *(uint *)(lVar4 + uVar10 * 4);
            if ((((uStack_58 != 0xffff) &&
                 (pfVar5 = (float *)(param_1[3] + (ulong)uStack_58 * 0xc), *pfVar9 == *pfVar5)) &&
                (pfVar9[1] == pfVar5[1])) && (pfVar9[2] == pfVar5[2])) {
              *(undefined4 *)(lVar4 + uVar10 * 4) = 0xffff;
              puVar1 = (uint *)(param_1 + 0x1e);
              puVar2 = &uStack_58;
              func_0x0001093ab484();
              if (puVar1 != puVar2) {
                lVar4 = *param_1;
                do {
                  *(uint *)(lVar4 + (ulong)puVar1[5] * 4) = uVar8;
                  puVar1 = *(uint **)puVar1;
                } while (puVar1 != puVar2);
              }
            }
            uVar10 = uVar10 + 1;
            lVar4 = param_1[0x1b];
            lVar6 = param_1[0x1c];
            lVar7 = lVar6 - lVar4;
          } while (uVar10 < (ulong)(lVar7 >> 2));
        }
      } while (uVar3 < (ulong)(lVar7 >> 2));
    }
  }
  return;
}



/* Entry: 1093aa9a0; end: 1093aac13;  */

void FUN_1093aa9a0(long *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined1 uStack_61;
  
  if (param_1[1] != *param_1) {
    uStack_61 = 0;
    func_0x000108adee10(param_1 + 0x15,(param_1[4] - param_1[3] >> 2) * -0x5555555555555555,
                        &uStack_61);
    lVar5 = param_1[1] - *param_1;
    if (lVar5 != 0) {
      lVar5 = lVar5 >> 2;
      lVar7 = param_1[0x15];
      puVar4 = (uint *)*param_1;
      do {
        uVar9 = (ulong)(*puVar4 >> 3) & 0x1ffffff8;
        *(ulong *)(lVar7 + uVar9) = 1L << ((ulong)*puVar4 & 0x3f) | *(ulong *)(lVar7 + uVar9);
        lVar5 = lVar5 + -1;
        puVar4 = puVar4 + 1;
      } while (lVar5 != 0);
    }
    func_0x0001074287b0(param_1 + 0x18,(param_1[4] - param_1[3] >> 2) * -0x5555555555555555);
    plVar16 = param_1 + 9;
    lVar5 = *plVar16;
    lVar7 = param_1[10];
    plVar14 = param_1 + 0xc;
    lVar17 = *plVar14;
    lVar18 = param_1[0xd];
    uVar9 = param_1[0x16];
    if (uVar9 == 0) {
      uVar15 = 0;
    }
    else {
      lVar3 = 0;
      lVar6 = 0;
      uVar8 = 0;
      uVar15 = 0;
      do {
        uVar11 = 1L << (uVar8 & 0x3f);
        if ((*(ulong *)(param_1[0x15] + (uVar8 >> 6) * 8) & uVar11) == 0) {
          *(undefined4 *)(param_1[0x18] + uVar8 * 4) = 0xffff;
        }
        else {
          lVar10 = param_1[3];
          puVar12 = (undefined8 *)(lVar10 + uVar15 * 0xc);
          *puVar12 = *(undefined8 *)(lVar10 + lVar3);
          *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(lVar10 + lVar6 * 4 + 8);
          lVar10 = param_1[6];
          uVar13 = uVar15 >> 6;
          uVar9 = 1L << (uVar15 & 0x3f);
          if ((*(ulong *)(lVar10 + (uVar8 >> 6) * 8) & uVar11) == 0) {
            uVar9 = *(ulong *)(lVar10 + uVar13 * 8) & (uVar9 ^ 0xffffffffffffffff);
          }
          else {
            uVar9 = *(ulong *)(lVar10 + uVar13 * 8) | uVar9;
          }
          *(ulong *)(lVar10 + uVar13 * 8) = uVar9;
          if (lVar7 != lVar5) {
            puVar1 = (undefined1 *)(*plVar16 + lVar6);
            puVar2 = (undefined1 *)(*plVar16 + uVar15 * 3);
            *puVar2 = *puVar1;
            puVar2[1] = puVar1[1];
            puVar2[2] = puVar1[2];
          }
          if (lVar18 != lVar17) {
            *(undefined1 *)(*plVar14 + uVar15) = *(undefined1 *)(*plVar14 + uVar8);
          }
          *(int *)(param_1[0x18] + uVar8 * 4) = (int)uVar15;
          uVar15 = uVar15 + 1;
          uVar9 = param_1[0x16];
        }
        uVar8 = uVar8 + 1;
        lVar6 = lVar6 + 3;
        lVar3 = lVar3 + 0xc;
      } while (uVar8 < uVar9);
    }
    func_0x0001093ab570(param_1 + 3,uVar15);
    func_0x000104bec9f0(param_1 + 6,uVar15,0);
    if (lVar7 != lVar5) {
      func_0x0001093ab5ac(plVar16,uVar15);
    }
    if (lVar18 != lVar17) {
      uVar9 = param_1[0xd] - param_1[0xc];
      if (uVar15 < uVar9 || uVar15 - uVar9 == 0) {
        if (uVar15 < uVar9) {
          param_1[0xd] = param_1[0xc] + uVar15;
        }
      }
      else {
        func_0x000107c27d58(plVar14,uVar15 - uVar9);
      }
    }
    lVar5 = param_1[1] - *param_1;
    if (lVar5 != 0) {
      lVar5 = lVar5 >> 2;
      lVar7 = param_1[0x18];
      puVar4 = (uint *)*param_1;
      do {
        *puVar4 = *(uint *)(lVar7 + (ulong)*puVar4 * 4);
        lVar5 = lVar5 + -1;
        puVar4 = puVar4 + 1;
      } while (lVar5 != 0);
    }
  }
  return;
}



/* Entry: 1093aac14; end: 1093aafcf;  */

void FUN_1093aac14(long *param_1)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  float *pfVar10;
  long *plVar11;
  ulong uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uStack_40;
  float fStack_38;
  
  uStack_40 = 0;
  fStack_38 = 0.0;
  func_0x0001093ab878(param_1 + 0xf,(param_1[4] - param_1[3] >> 2) * -0x5555555555555555,&uStack_40)
  ;
  lVar6 = *param_1;
  if (param_1[1] != lVar6) {
    uVar12 = 0;
    plVar11 = param_1 + 0x12;
    param_1[0x13] = *plVar11;
    do {
      puVar1 = (uint *)(lVar6 + uVar12 * 4);
      lVar6 = param_1[3];
      puVar7 = (undefined8 *)(lVar6 + (ulong)*puVar1 * 0xc);
      puVar9 = (undefined8 *)(lVar6 + (ulong)puVar1[1] * 0xc);
      puVar4 = (undefined8 *)(lVar6 + (ulong)puVar1[2] * 0xc);
      uVar14 = *puVar9;
      uVar15 = *puVar7;
      fVar20 = (float)uVar15;
      fVar17 = (float)uVar14 - fVar20;
      fVar21 = (float)((ulong)uVar15 >> 0x20);
      fVar18 = (float)((ulong)uVar14 >> 0x20) - fVar21;
      fVar16 = *(float *)(puVar7 + 1);
      fVar19 = *(float *)(puVar9 + 1) - fVar16;
      uVar14 = *puVar4;
      fVar20 = (float)uVar14 - fVar20;
      fVar21 = (float)((ulong)uVar14 >> 0x20) - fVar21;
      fVar16 = *(float *)(puVar4 + 1) - fVar16;
      fVar13 = -fVar19 * fVar21 + fVar16 * fVar18;
      fVar16 = -(fVar17 * fVar16) + fVar20 * fVar19;
      fStack_38 = -fVar18 * fVar20 + fVar17 * fVar21;
      bVar2 = true;
      if ((!NAN(fVar13 - fVar13)) && (bVar2 = true, !NAN(fVar16 - fVar16))) {
        bVar2 = false;
      }
      bVar3 = true;
      if ((!bVar2) && (bVar3 = true, !NAN(fStack_38 - fStack_38))) {
        bVar3 = false;
      }
      if ((bVar3) ||
         (fVar20 = fStack_38 * fStack_38 + fVar13 * fVar13 + fVar16 * fVar16, fVar20 <= 0.0)) {
        uStack_40 = 0;
        fStack_38 = 0.0;
      }
      else {
        fVar20 = SQRT(fVar20);
        uStack_40 = CONCAT44(fVar16 / fVar20,fVar13 / fVar20);
        fStack_38 = fStack_38 / fVar20;
      }
      FUN_1093aa034(plVar11,&uStack_40);
      uVar12 = uVar12 + 3;
      lVar6 = *param_1;
      lVar8 = param_1[1];
    } while (uVar12 < (ulong)(lVar8 - lVar6 >> 2));
    if (lVar8 != lVar6) {
      lVar5 = 0;
      uVar12 = 0;
      do {
        pfVar10 = (float *)(*plVar11 + lVar5 * 0xc);
        if (((!NAN(*pfVar10)) && (!NAN(pfVar10[1]))) && (!NAN(pfVar10[2]))) {
          puVar4 = (undefined8 *)(param_1[0xf] + (ulong)*(uint *)(lVar6 + uVar12 * 4) * 0xc);
          *puVar4 = CONCAT44((float)((ulong)*(undefined8 *)pfVar10 >> 0x20) +
                             (float)((ulong)*puVar4 >> 0x20),
                             (float)*(undefined8 *)pfVar10 + (float)*puVar4);
          *(float *)(puVar4 + 1) = pfVar10[2] + *(float *)(puVar4 + 1);
          puVar4 = (undefined8 *)(param_1[0xf] + (ulong)*(uint *)(*param_1 + uVar12 * 4 + 4) * 0xc);
          *puVar4 = CONCAT44((float)((ulong)*(undefined8 *)pfVar10 >> 0x20) +
                             (float)((ulong)*puVar4 >> 0x20),
                             (float)*(undefined8 *)pfVar10 + (float)*puVar4);
          *(float *)(puVar4 + 1) = pfVar10[2] + *(float *)(puVar4 + 1);
          puVar4 = (undefined8 *)(param_1[0xf] + (ulong)*(uint *)(*param_1 + uVar12 * 4 + 8) * 0xc);
          *puVar4 = CONCAT44((float)((ulong)*(undefined8 *)pfVar10 >> 0x20) +
                             (float)((ulong)*puVar4 >> 0x20),
                             (float)*(undefined8 *)pfVar10 + (float)*puVar4);
          *(float *)(puVar4 + 1) = pfVar10[2] + *(float *)(puVar4 + 1);
          lVar6 = *param_1;
          lVar8 = param_1[1];
        }
        uVar12 = uVar12 + 3;
        lVar5 = lVar5 + 1;
      } while (uVar12 < (ulong)(lVar8 - lVar6 >> 2));
    }
    lVar6 = param_1[0xf];
    lVar8 = param_1[0x10];
    if (lVar8 != lVar6) {
      lVar5 = 0;
      uVar12 = 0;
      do {
        puVar4 = (undefined8 *)(lVar6 + lVar5);
        fVar13 = (float)*puVar4;
        fVar20 = (float)((ulong)*puVar4 >> 0x20);
        fVar16 = *(float *)(puVar4 + 1);
        fVar21 = fVar13 * fVar13 + fVar20 * fVar20 + fVar16 * fVar16;
        if (0.0 < fVar21) {
          fVar21 = SQRT(fVar21);
          *puVar4 = CONCAT44(fVar20 / fVar21,fVar13 / fVar21);
          *(float *)(puVar4 + 1) = fVar16 / fVar21;
          lVar6 = param_1[0xf];
          lVar8 = param_1[0x10];
        }
        uVar12 = uVar12 + 1;
        lVar5 = lVar5 + 0xc;
      } while (uVar12 < (ulong)((lVar8 - lVar6 >> 2) * -0x5555555555555555));
    }
  }
  return;
}



/* Entry: 1093aafd0; end: 1093ab04f;  */

undefined8 * FUN_1093aafd0(undefined8 param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)0x18;
  __Znwm();
  uVar1 = *param_2;
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = *param_3;
  *puVar2 = 0;
  puVar2[1] = (ulong)uVar1;
  uVar3 = param_1;
  FUN_1093ab050(param_1);
  FUN_1093ab198(param_1,puVar2,uVar3);
  return puVar2;
}



/* Entry: 1093ab050; end: 1093ab197;  */

long * FUN_1093ab050(long *param_1,ulong param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar5 = param_1[1];
  if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar5) {
      uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
    }
    uVar6 = uVar6 | uVar5 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    FUN_1093ab268(param_1,uVar6);
    uVar5 = param_1[1];
  }
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar7 = uVar6 & param_2;
  }
  else {
    uVar7 = param_2;
    if (uVar5 <= param_2) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = param_2 / uVar5;
      }
      uVar7 = param_2 - uVar7 * uVar5;
    }
  }
  plVar8 = *(long **)(*param_1 + uVar7 * 8);
  if (plVar8 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    bVar9 = false;
    bVar1 = 0;
    do {
      plVar4 = plVar8;
      plVar8 = (long *)*plVar4;
      if (plVar8 == (long *)0x0) {
        return plVar4;
      }
      uVar10 = plVar8[1];
      if ((uVar5 & uVar6) == 0) {
        uVar11 = uVar10 & uVar6;
      }
      else {
        uVar11 = uVar10;
        if (uVar5 <= uVar10) {
          uVar11 = 0;
          if (uVar5 != 0) {
            uVar11 = uVar10 / uVar5;
          }
          uVar11 = uVar10 - uVar11 * uVar5;
        }
      }
      if (uVar11 != uVar7) {
        return plVar4;
      }
      if (uVar10 == param_2) {
        bVar2 = *(int *)(plVar8 + 2) == *param_3;
      }
      else {
        bVar2 = false;
      }
      bVar3 = bVar2 != bVar9;
      bVar2 = (bool)(bVar1 & bVar3);
      bVar9 = (bool)(bVar9 | bVar3);
      bVar1 = bVar1 | bVar3;
    } while (!bVar2);
  }
  return plVar4;
}



/* Entry: 1093ab198; end: 1093ab267;  */

void FUN_1093ab198(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
    if (param_3 != (long *)0x0) goto LAB_1093ab1c0;
LAB_1093ab1fc:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_1093ab258;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar2 * uVar1;
    }
  }
  else {
    if (uVar1 <= uVar2) {
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      uVar2 = uVar2 - uVar4 * uVar1;
    }
    if (param_3 == (long *)0x0) goto LAB_1093ab1fc;
LAB_1093ab1c0:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_1093ab258;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar3 * uVar1;
    }
    if (uVar4 == uVar2) goto LAB_1093ab258;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_1093ab258:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 1093ab268; end: 1093ab337;  */

void FUN_1093ab268(long *param_1,int *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  int *piVar10;
  
  if ((long)param_2 - 1U == 0) {
    param_2 = (int *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  piVar10 = (int *)param_1[1];
  if (piVar10 < param_2) {
LAB_1093ab2b0:
    if (param_2 == (int *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        FUN_1093ab4cc();
        if (param_1 != (long *)0x0) {
          do {
            param_1 = (long *)*param_1;
            if (param_1 == (long *)0x0) {
              return;
            }
          } while ((int)param_1[2] == *param_2);
        }
        return;
      }
      lVar2 = (long)param_2 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar2;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      piVar10 = (int *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)piVar10 * 8) = 0;
        piVar10 = (int *)((long)piVar10 + 1);
      } while (param_2 != piVar10);
      plVar4 = (long *)param_1[2];
      if (plVar4 != (long *)0x0) {
        piVar10 = (int *)plVar4[1];
        uVar6 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar6) == 0) {
          piVar10 = (int *)((ulong)piVar10 & uVar6);
        }
        else if (param_2 <= piVar10) {
          uVar1 = 0;
          if (param_2 != (int *)0x0) {
            uVar1 = (ulong)piVar10 / (ulong)param_2;
          }
          piVar10 = (int *)((long)piVar10 - uVar1 * (long)param_2);
        }
        *(long **)(*param_1 + (long)piVar10 * 8) = param_1 + 2;
        while (plVar5 = plVar4, plVar4 = (long *)*plVar5, plVar4 != (long *)0x0) {
          piVar7 = (int *)plVar4[1];
          if (((ulong)param_2 & uVar6) == 0) {
            piVar7 = (int *)((ulong)piVar7 & uVar6);
          }
          else if (param_2 <= piVar7) {
            uVar1 = 0;
            if (param_2 != (int *)0x0) {
              uVar1 = (ulong)piVar7 / (ulong)param_2;
            }
            piVar7 = (int *)((long)piVar7 - uVar1 * (long)param_2);
          }
          if (piVar7 != piVar10) {
            lVar2 = *param_1;
            plVar9 = plVar4;
            if (*(long *)(lVar2 + (long)piVar7 * 8) == 0) {
              *(long **)(lVar2 + (long)piVar7 * 8) = plVar5;
              piVar10 = piVar7;
            }
            else {
              do {
                plVar8 = plVar9;
                plVar9 = (long *)*plVar8;
                if (plVar9 == (long *)0x0) break;
              } while (*(int *)(plVar4 + 2) == *(int *)(plVar9 + 2));
              *plVar5 = (long)plVar9;
              *plVar8 = **(long **)(lVar2 + (long)piVar7 * 8);
              **(long **)(lVar2 + (long)piVar7 * 8) = (long)plVar4;
              plVar4 = plVar5;
            }
          }
        }
      }
    }
    return;
  }
  if (param_2 < piVar10) {
    piVar7 = (int *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((piVar10 < (int *)0x3) || (((ulong)piVar10 & (long)piVar10 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((int *)0x1 < piVar7) {
      piVar7 = (int *)(1L << (-LZCOUNT((long)piVar7 + -1) & 0x3fU));
    }
    if (param_2 <= piVar7) {
      param_2 = piVar7;
    }
    if (param_2 < piVar10) goto LAB_1093ab2b0;
  }
  return;
}



/* Entry: 1093ab338; end: 1093ab4cb;  */

void FUN_1093ab338(long *param_1,int *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  
  if (param_2 == (int *)0x0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      FUN_1093ab4cc();
      if (param_1 != (long *)0x0) {
        do {
          param_1 = (long *)*param_1;
          if (param_1 == (long *)0x0) {
            return;
          }
        } while ((int)param_1[2] == *param_2);
      }
      return;
    }
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    piVar4 = (int *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)piVar4 * 8) = 0;
      piVar4 = (int *)((long)piVar4 + 1);
    } while (param_2 != piVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      piVar4 = (int *)plVar5[1];
      uVar7 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar7) == 0) {
        piVar4 = (int *)((ulong)piVar4 & uVar7);
      }
      else if (param_2 <= piVar4) {
        uVar1 = 0;
        if (param_2 != (int *)0x0) {
          uVar1 = (ulong)piVar4 / (ulong)param_2;
        }
        piVar4 = (int *)((long)piVar4 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)piVar4 * 8) = param_1 + 2;
      while (plVar6 = plVar5, plVar5 = (long *)*plVar6, plVar5 != (long *)0x0) {
        piVar8 = (int *)plVar5[1];
        if (((ulong)param_2 & uVar7) == 0) {
          piVar8 = (int *)((ulong)piVar8 & uVar7);
        }
        else if (param_2 <= piVar8) {
          uVar1 = 0;
          if (param_2 != (int *)0x0) {
            uVar1 = (ulong)piVar8 / (ulong)param_2;
          }
          piVar8 = (int *)((long)piVar8 - uVar1 * (long)param_2);
        }
        if (piVar8 != piVar4) {
          lVar2 = *param_1;
          plVar10 = plVar5;
          if (*(long *)(lVar2 + (long)piVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)piVar8 * 8) = plVar6;
            piVar4 = piVar8;
          }
          else {
            do {
              plVar9 = plVar10;
              plVar10 = (long *)*plVar9;
              if (plVar10 == (long *)0x0) break;
            } while (*(int *)(plVar5 + 2) == *(int *)(plVar10 + 2));
            *plVar6 = (long)plVar10;
            *plVar9 = **(long **)(lVar2 + (long)piVar8 * 8);
            **(long **)(lVar2 + (long)piVar8 * 8) = (long)plVar5;
            plVar5 = plVar6;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1093ab4cc; end: 1093ab5e3;  */

long * FUN_1093ab4cc(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar1 = *param_2;
    uVar6 = (ulong)uVar1;
    uVar7 = uVar5 - 1;
    uVar4 = (uint)uVar5;
    if ((uVar5 & uVar7) == 0) {
      uVar8 = (ulong)(uVar4 - 1 & uVar1);
    }
    else {
      uVar8 = uVar6;
      if (uVar5 <= uVar6) {
        uVar2 = 0;
        if (uVar4 != 0) {
          uVar2 = uVar1 / uVar4;
        }
        uVar8 = (ulong)(uVar1 - uVar2 * uVar4);
      }
    }
    plVar9 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)*plVar9;
      do {
        if (plVar9 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          if (*(uint *)(plVar9 + 2) == uVar1) {
            return plVar9;
          }
        }
        else {
          if ((uVar5 & uVar7) == 0) {
            uVar10 = uVar10 & uVar7;
          }
          else if (uVar5 <= uVar10) {
            uVar3 = 0;
            if (uVar5 != 0) {
              uVar3 = uVar10 / uVar5;
            }
            uVar10 = uVar10 - uVar3 * uVar5;
          }
          if (uVar10 != uVar8) {
            return (long *)0x0;
          }
        }
        plVar9 = (long *)*plVar9;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 1093ab5e4; end: 1093ab9db;  */

void FUN_1093ab5e4(long *param_1,undefined2 *param_2,long *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined2 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined1 uStack_d9;
  undefined2 *puStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined1 ***pppuStack_a0;
  code *pcStack_98;
  undefined1 **ppuStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puVar7 = (undefined8 *)param_1[1];
  if ((undefined2 *)((param_1[2] - (long)puVar7 >> 2) * -0x5555555555555555) < param_2) {
    puVar3 = (undefined8 *)*param_1;
    lVar17 = (long)puVar7 - (long)puVar3;
    uVar10 = (long)param_2 + (lVar17 >> 2) * -0x5555555555555555;
    if (0x1555555555555555 < uVar10) {
      func_0x0001093aa314();
      uStack_38 = 0x1093ab730;
      ppuStack_70 = &puStack_40;
      plVar6 = (long *)puVar3[1];
      if ((undefined2 *)((puVar3[2] - (long)plVar6) * -0x5555555555555555) < param_2) {
        plVar4 = (long *)*puVar3;
        lVar17 = (long)plVar6 - (long)plVar4;
        uVar10 = (long)param_2 + lVar17 * -0x5555555555555555;
        puStack_40 = &stack0xfffffffffffffff0;
        if (0x5555555555555555 < uVar10) {
          FUN_1093aa524();
          uStack_68 = 0x1093ab878;
          lVar17 = plVar4[2];
          plVar6 = (long *)*plVar4;
          if ((undefined2 *)((lVar17 - (long)plVar6 >> 2) * -0x5555555555555555) < param_2) {
            puVar9 = param_2;
            if (plVar6 != (long *)0x0) {
              plVar4[1] = (long)plVar6;
              __ZdlPv();
              lVar17 = 0;
              *plVar4 = 0;
              plVar4[1] = 0;
              plVar4[2] = 0;
            }
            if ((undefined2 *)0x1555555555555555 < param_2) {
              func_0x0001093aa314();
              pcStack_98 = FUN_1093ab9dc;
              pppuStack_c0 = &pppuStack_a0;
              plStack_b0 = param_3;
              plStack_a8 = plVar4;
              pppuStack_a0 = &ppuStack_70;
              if (puVar9 < (undefined2 *)0x1555555555555556) {
                plVar4 = plVar6;
                FUN_1093aa328();
                *plVar6 = (long)plVar4;
                plVar6[1] = (long)plVar4;
                plVar6[2] = (long)plVar4 + (long)puVar9 * 0xc;
                return;
              }
              func_0x0001093aa314();
              uStack_b8 = 0x1093aba24;
              plStack_d0 = param_3;
              plStack_c8 = plVar4;
              FUN_1093abba0();
              plVar4 = plVar6 + 1;
              puStack_d8 = puVar9;
              FUN_1093ac14c(plVar4,puVar9,&UNK_10dd5b8f9,&puStack_d8,&uStack_d9);
              if ((short)plVar4[3] == 0x7fff) {
                *(undefined2 *)(plVar4 + 3) = *puVar9;
                *(undefined2 *)((long)plVar4 + 0x1a) = puVar9[1];
                *(undefined2 *)((long)plVar4 + 0x1c) = puVar9[2];
              }
              *(undefined1 *)((long)plVar6 + 6) = 1;
              return;
            }
            puVar9 = (undefined2 *)((lVar17 >> 2) * 0x5555555555555556);
            if (puVar9 < param_2 || (long)puVar9 - (long)param_2 == 0) {
              puVar9 = param_2;
            }
            if (0xaaaaaaaaaaaaaa9 < (ulong)((lVar17 >> 2) * -0x5555555555555555)) {
              puVar9 = (undefined2 *)0x1555555555555555;
            }
            FUN_1093ab9dc(plVar4,puVar9);
            plVar8 = (long *)plVar4[1];
            lVar17 = (long)param_2 * 0xc;
            plVar6 = plVar8;
            do {
              lVar5 = *param_3;
              *(int *)(plVar6 + 1) = (int)param_3[1];
              *plVar6 = lVar5;
              lVar17 = lVar17 + -0xc;
              plVar6 = (long *)((long)plVar6 + 0xc);
            } while (lVar17 != 0);
            plVar4[1] = (long)plVar8 + (long)param_2 * 0xc;
          }
          else {
            lVar17 = plVar4[1] - (long)plVar6 >> 2;
            puVar12 = (undefined2 *)(lVar17 * -0x5555555555555555);
            puVar9 = puVar12;
            if (param_2 <= puVar12) {
              puVar9 = param_2;
            }
            for (; puVar9 != (undefined2 *)0x0; puVar9 = (undefined2 *)((long)puVar9 + -1)) {
              *plVar6 = *param_3;
              *(int *)(plVar6 + 1) = (int)param_3[1];
              plVar6 = (long *)((long)plVar6 + 0xc);
            }
            lVar5 = (long)param_2 + lVar17 * 0x5555555555555555;
            if (param_2 < puVar12 || lVar5 == 0) {
              plVar4[1] = *plVar4 + (long)param_2 * 0xc;
            }
            else {
              plVar8 = (long *)plVar4[1];
              lVar17 = (long)param_2 * 0xc + lVar17 * -4;
              plVar6 = plVar8;
              do {
                lVar13 = *param_3;
                *(int *)(plVar6 + 1) = (int)param_3[1];
                *plVar6 = lVar13;
                lVar17 = lVar17 + -0xc;
                plVar6 = (long *)((long)plVar6 + 0xc);
              } while (lVar17 != 0);
              plVar4[1] = (long)plVar8 + lVar5 * 0xc;
            }
          }
          return;
        }
        lVar5 = puVar3[2] - (long)plVar4;
        uVar14 = lVar5 * 0x5555555555555556;
        if (uVar14 < uVar10 || uVar14 - uVar10 == 0) {
          uVar14 = uVar10;
        }
        if (0x2aaaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
          uVar14 = 0x5555555555555555;
        }
        if (uVar14 == 0) {
          puVar7 = (undefined8 *)0x0;
          lVar5 = lVar17;
        }
        else {
          puVar7 = puVar3;
          FUN_1093aa538();
          plVar4 = (long *)*puVar3;
          plVar6 = (long *)puVar3[1];
          lVar5 = (long)plVar6 - (long)plVar4;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (long)param_2 * 3;
        puVar12 = (undefined2 *)((long)puVar7 + (lVar17 - lVar5));
        puVar9 = puVar12;
        if (plVar4 != plVar6) {
          do {
            lVar5 = *plVar4;
            *(undefined1 *)(puVar9 + 1) = *(undefined1 *)((long)plVar4 + 2);
            *puVar9 = (short)lVar5;
            plVar4 = (long *)((long)plVar4 + 3);
            puVar9 = (undefined2 *)((long)puVar9 + 3);
          } while (plVar4 != plVar6);
          plVar4 = (long *)*puVar3;
        }
        *puVar3 = puVar12;
        puVar3[1] = (long)puVar7 +
                    (SUB168(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) +
                    (ulong)((long)param_2 * 3) / 3 + lVar17;
        puVar3[2] = (long)puVar7 + uVar14 * 3;
        if (plVar4 != (long *)0x0) goto code_r0x00010bdbd7ac;
      }
      else {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = (long)param_2 * 3;
        puVar3[1] = (long)plVar6 +
                    (SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) +
                    (ulong)((long)param_2 * 3) / 3;
      }
      return;
    }
    lVar5 = param_1[2] - (long)puVar3 >> 2;
    uVar14 = lVar5 * 0x5555555555555556;
    if (uVar14 < uVar10 || uVar14 - uVar10 == 0) {
      uVar14 = uVar10;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar14 = 0x1555555555555555;
    }
    if (uVar14 == 0) {
      plVar6 = (long *)0x0;
      lVar5 = lVar17;
    }
    else {
      plVar6 = param_1;
      FUN_1093aa328();
      puVar3 = (undefined8 *)*param_1;
      puVar7 = (undefined8 *)param_1[1];
      lVar5 = (long)puVar7 - (long)puVar3;
    }
    puVar11 = (undefined8 *)((long)plVar6 + (lVar17 - lVar5));
    puVar15 = puVar11;
    if (puVar3 != puVar7) {
      do {
        uVar16 = *puVar3;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar3 + 1);
        *puVar15 = uVar16;
        puVar3 = (undefined8 *)((long)puVar3 + 0xc);
        puVar15 = (undefined8 *)((long)puVar15 + 0xc);
      } while (puVar3 != puVar7);
      puVar3 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar11;
    param_1[1] = (long)plVar6 + ((ulong)((long)param_2 * 0xc) / 0xc) * 0xc + lVar17;
    param_1[2] = (long)plVar6 + uVar14 * 0xc;
    if (puVar3 != (undefined8 *)0x0) {
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  else {
    param_1[1] = (long)puVar7 + ((ulong)((long)param_2 * 0xc) / 0xc) * 0xc;
  }
  return;
}



/* Entry: 1093ab9dc; end: 1093abaa3;  */

void FUN_1093ab9dc(long *param_1,undefined2 *param_2)

{
  long *plVar1;
  undefined1 uStack_49;
  undefined2 *puStack_48;
  
  if (param_2 < (undefined2 *)0x1555555555555556) {
    plVar1 = param_1;
    FUN_1093aa328();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + (long)param_2 * 0xc;
    return;
  }
  func_0x0001093aa314();
  FUN_1093abba0();
  plVar1 = param_1 + 1;
  puStack_48 = param_2;
  FUN_1093ac14c(plVar1,param_2,&UNK_10dd5b8f9,&puStack_48,&uStack_49);
  if ((short)plVar1[3] == 0x7fff) {
    *(undefined2 *)(plVar1 + 3) = *param_2;
    *(undefined2 *)((long)plVar1 + 0x1a) = param_2[1];
    *(undefined2 *)((long)plVar1 + 0x1c) = param_2[2];
  }
  *(undefined1 *)((long)param_1 + 6) = 1;
  return;
}



/* Entry: 1093abaa4; end: 1093abb9f;  */

void FUN_1093abaa4(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  uVar8 = param_1[1] - *param_1 >> 5;
  if (param_2 <= uVar8) {
    if (param_2 < uVar8) {
      param_1[1] = *param_1 + param_2 * 0x20;
    }
    return;
  }
  puVar5 = (undefined8 *)(param_2 - uVar8);
  lVar12 = param_1[1];
  if ((undefined8 *)(param_1[2] - lVar12 >> 5) < puVar5) {
    lVar12 = lVar12 - *param_1;
    uVar8 = (long)puVar5 + (lVar12 >> 5);
    if (uVar8 >> 0x3b != 0) {
      FUN_1093ac810();
      if (lStack_48 != lStack_50) {
        lStack_48 = lStack_48 + ((lStack_50 - lStack_48) + 0x1fU & 0xffffffffffffffe0);
      }
      if (plStack_58 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      puVar7 = (undefined8 *)*param_1;
      puVar2 = (undefined8 *)param_1[1];
      puVar1 = (undefined8 *)((long)puVar7 + (puVar5[1] - (long)puVar2));
      puVar10 = puVar1;
      if (puVar2 != puVar7) {
        do {
          uVar11 = *puVar7;
          *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar7 + 1);
          *puVar10 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar7 + 0xc);
          *(undefined4 *)((long)puVar10 + 0x14) = *(undefined4 *)((long)puVar7 + 0x14);
          *(undefined8 *)((long)puVar10 + 0xc) = uVar11;
          uVar3 = *(undefined2 *)(puVar7 + 3);
          *(undefined1 *)((long)puVar10 + 0x1a) = *(undefined1 *)((long)puVar7 + 0x1a);
          *(undefined2 *)(puVar10 + 3) = uVar3;
          *(undefined2 *)((long)puVar10 + 0x1b) = *(undefined2 *)((long)puVar7 + 0x1b);
          puVar7 = puVar7 + 4;
          puVar10 = puVar10 + 4;
        } while (puVar7 != puVar2);
        puVar7 = (undefined8 *)*param_1;
      }
      puVar5[1] = puVar1;
      *param_1 = (long)puVar1;
      param_1[1] = (long)puVar7;
      puVar5[1] = puVar7;
      lVar12 = param_1[1];
      param_1[1] = puVar5[2];
      puVar5[2] = lVar12;
      lVar12 = param_1[2];
      param_1[2] = puVar5[3];
      puVar5[3] = lVar12;
      *puVar5 = puVar5[1];
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar9 = (long)uVar6 >> 4;
    if (uVar9 <= uVar8) {
      uVar9 = uVar8;
    }
    if (0x7fffffffffffffdf < uVar6) {
      uVar9 = 0x7ffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar9 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = param_1;
      FUN_1093ac824();
    }
    lVar12 = (long)plVar4 + lVar12;
    plStack_40 = plVar4 + uVar9 * 4;
    plStack_58 = plVar4;
    lStack_50 = lVar12;
    _bzero(lVar12,(long)puVar5 * 0x20);
    lStack_48 = lVar12 + (long)puVar5 * 0x20;
    FUN_1093ac770(param_1,&plStack_58);
    if (lStack_48 != lStack_50) {
      lStack_48 = lStack_48 + ((lStack_50 - lStack_48) + 0x1fU & 0xffffffffffffffe0);
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
  }
  else {
    if (puVar5 != (undefined8 *)0x0) {
      _bzero(lVar12,(long)puVar5 * 0x20);
      lVar12 = lVar12 + (long)puVar5 * 0x20;
    }
    param_1[1] = lVar12;
  }
  return;
}



/* Entry: 1093abba0; end: 1093abc6b;  */

void FUN_1093abba0(long param_1,short *param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 uStack_30;
  undefined4 uStack_2e;
  undefined1 uStack_29;
  undefined1 *puStack_28;
  
  puStack_28 = (undefined1 *)&uStack_30;
  uVar1 = *(uint *)(param_1 + 0x1330);
  uStack_30 = (undefined2)((int)*param_2 >> (uVar1 & 0x1f));
  uStack_2e = CONCAT22((short)((int)param_2[2] >> (uVar1 & 0x1f)),
                       (short)((int)param_2[1] >> (uVar1 & 0x1f)));
  param_1 = param_1 + 0x1238;
  FUN_1093abc6c(param_1,&uStack_30,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar2 = (undefined2 *)0x78;
    __Znwm();
    *(undefined1 *)(puVar2 + 3) = 1;
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0xc) = 0;
    *(undefined4 *)(puVar2 + 0x14) = 0x3f800000;
    *(undefined8 *)(puVar2 + 0x1c) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 0x24) = 0;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    *(undefined8 *)(puVar2 + 0x2c) = 0;
    *(undefined8 *)(puVar2 + 0x28) = 0;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined4 *)(puVar2 + 0x34) = 0x3f800000;
    *(undefined4 *)(puVar2 + 0x38) = 4;
    *puVar2 = uStack_30;
    *(undefined4 *)(puVar2 + 1) = uStack_2e;
    *(undefined2 **)(param_1 + 0x18) = puVar2;
  }
  return;
}



/* Entry: 1093abc6c; end: 1093abeeb;  */

undefined1  [16] FUN_1093abc6c(long *param_1,short *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  
  uVar11 = (long)(int)*param_2 * 0x466f45d + (long)(int)param_2[1] * 0x12740a5 +
           (long)(int)param_2[2] * 0x4f9ffb7;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar4 = uVar10 - 1;
    if ((uVar10 & uVar4) == 0) {
      unaff_x24 = uVar11 & uVar4;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar8 * uVar10;
      }
    }
    puVar7 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      for (plVar9 = (long *)*puVar7; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar8 = plVar9[1];
        if (uVar8 == uVar11) {
          if ((((short)plVar9[2] == *param_2) && (*(short *)((long)plVar9 + 0x12) == param_2[1])) &&
             (*(short *)((long)plVar9 + 0x14) == param_2[2])) {
            uVar3 = 0;
            goto LAB_1093abeac;
          }
        }
        else {
          if ((uVar10 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (uVar10 <= uVar8) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar2 * uVar10;
          }
          if (uVar8 != unaff_x24) break;
        }
      }
    }
  }
  plVar9 = (long *)0x20;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = uVar11;
  uVar1 = *(undefined4 *)*param_4;
  *(undefined2 *)((long)plVar9 + 0x14) = *(undefined2 *)((undefined4 *)*param_4 + 1);
  *(undefined4 *)(plVar9 + 2) = uVar1;
  plVar9[3] = 0;
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar10) {
      uVar4 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar4 = uVar4 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar10) {
      uVar4 = uVar10;
    }
    FUN_1093abeec(param_1,uVar4);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar4 * uVar10;
      }
    }
  }
  lVar6 = *param_1;
  plVar5 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar9 = *plVar5;
    *plVar5 = (long)plVar9;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar5;
    if (*plVar9 == 0) goto LAB_1093abe9c;
    uVar11 = *(ulong *)(*plVar9 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar11 = uVar11 & uVar10 - 1;
    }
    else if (uVar10 <= uVar11) {
      uVar4 = 0;
      if (uVar10 != 0) {
        uVar4 = uVar11 / uVar10;
      }
      uVar11 = uVar11 - uVar4 * uVar10;
    }
    plVar5 = (long *)(*param_1 + uVar11 * 8);
  }
  else {
    *plVar9 = *plVar5;
  }
  *plVar5 = (long)plVar9;
LAB_1093abe9c:
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
LAB_1093abeac:
  auVar12._8_8_ = uVar3;
  auVar12._0_8_ = plVar9;
  return auVar12;
}



/* Entry: 1093abeec; end: 1093abfbb;  */

void FUN_1093abeec(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar9 = param_1[1];
  if (uVar9 < param_2) {
LAB_1093abf34:
    if (param_2 == 0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        if ((char)param_1[1] == '\x01') {
          lVar2 = *(long *)(param_2 + 0x18);
          *(long *)(param_2 + 0x18) = 0;
          if (lVar2 != 0) {
            func_0x0001093a5f50();
          }
        }
        else if (param_2 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(param_2);
        return;
      }
      lVar2 = param_2 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar2;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      uVar9 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (param_2 != uVar9);
      plVar5 = (long *)param_1[2];
      if (plVar5 != (long *)0x0) {
        uVar9 = plVar5[1];
        uVar4 = param_2 - 1;
        if ((param_2 & uVar4) == 0) {
          uVar9 = uVar9 & uVar4;
        }
        else if (param_2 <= uVar9) {
          uVar8 = 0;
          if (param_2 != 0) {
            uVar8 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar8 * param_2;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar6 = (long *)*plVar5;
        while (plVar6 != (long *)0x0) {
          uVar8 = plVar6[1];
          if ((param_2 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          plVar7 = plVar6;
          if (uVar8 != uVar9) {
            lVar2 = *param_1;
            if (*(long *)(lVar2 + uVar8 * 8) == 0) {
              *(long **)(lVar2 + uVar8 * 8) = plVar5;
              uVar9 = uVar8;
            }
            else {
              *plVar5 = *plVar6;
              *plVar6 = **(undefined8 **)(lVar2 + uVar8 * 8);
              **(long **)(lVar2 + uVar8 * 8) = (long)plVar6;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar6 = (long *)*plVar7;
        }
      }
    }
    return;
  }
  if (param_2 < uVar9) {
    uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar4) {
      uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
    }
    if (param_2 <= uVar4) {
      param_2 = uVar4;
    }
    if (param_2 < uVar9) goto LAB_1093abf34;
  }
  return;
}



/* Entry: 1093abfbc; end: 1093ac14b;  */

void FUN_1093abfbc(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      if ((char)param_1[1] == '\x01') {
        lVar2 = *(long *)(param_2 + 0x18);
        *(long *)(param_2 + 0x18) = 0;
        if (lVar2 != 0) {
          func_0x0001093a5f50();
        }
      }
      else if (param_2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_2);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar4 = plVar6[1];
      uVar5 = param_2 - 1;
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar9 = 0;
        if (param_2 != 0) {
          uVar9 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar9 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar6;
      while (plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (param_2 <= uVar9) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar1 * param_2;
        }
        plVar8 = plVar7;
        if (uVar9 != uVar4) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar9 * 8) == 0) {
            *(long **)(lVar2 + uVar9 * 8) = plVar6;
            uVar4 = uVar9;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + uVar9 * 8);
            **(long **)(lVar2 + uVar9 * 8) = (long)plVar7;
            plVar8 = plVar6;
          }
        }
        plVar6 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
  }
  return;
}



/* Entry: 1093ac14c; end: 1093ac3db;  */

undefined1  [16] FUN_1093ac14c(long *param_1,short *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  
  uVar11 = (long)(int)*param_2 * 0x466f45d + (long)(int)param_2[1] * 0x12740a5 +
           (long)(int)param_2[2] * 0x4f9ffb7;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar4 = uVar10 - 1;
    if ((uVar10 & uVar4) == 0) {
      unaff_x24 = uVar11 & uVar4;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar8 * uVar10;
      }
    }
    puVar7 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      for (plVar9 = (long *)*puVar7; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar8 = plVar9[1];
        if (uVar8 == uVar11) {
          if ((((short)plVar9[2] == *param_2) && (*(short *)((long)plVar9 + 0x12) == param_2[1])) &&
             (*(short *)((long)plVar9 + 0x14) == param_2[2])) {
            uVar3 = 0;
            goto LAB_1093ac3a0;
          }
        }
        else {
          if ((uVar10 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (uVar10 <= uVar8) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar2 * uVar10;
          }
          if (uVar8 != unaff_x24) break;
        }
      }
    }
  }
  plVar9 = (long *)0x50;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = uVar11;
  uVar1 = *(undefined4 *)*param_4;
  *(undefined2 *)((long)plVar9 + 0x14) = *(undefined2 *)((undefined4 *)*param_4 + 1);
  *(undefined4 *)(plVar9 + 2) = uVar1;
  plVar9[3] = 0x7fff7fff7fff;
  plVar9[5] = 0;
  plVar9[4] = 0;
  plVar9[7] = 0;
  plVar9[6] = 0;
  plVar9[9] = 0;
  plVar9[8] = 0;
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar10) {
      uVar4 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar4 = uVar4 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar10) {
      uVar4 = uVar10;
    }
    FUN_1093ac3dc(param_1,uVar4);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar4 * uVar10;
      }
    }
  }
  lVar6 = *param_1;
  plVar5 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar9 = *plVar5;
    *plVar5 = (long)plVar9;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar5;
    if (*plVar9 == 0) goto LAB_1093ac390;
    uVar11 = *(ulong *)(*plVar9 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar11 = uVar11 & uVar10 - 1;
    }
    else if (uVar10 <= uVar11) {
      uVar4 = 0;
      if (uVar10 != 0) {
        uVar4 = uVar11 / uVar10;
      }
      uVar11 = uVar11 - uVar4 * uVar10;
    }
    plVar5 = (long *)(*param_1 + uVar11 * 8);
  }
  else {
    *plVar9 = *plVar5;
  }
  *plVar5 = (long)plVar9;
LAB_1093ac390:
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
LAB_1093ac3a0:
  auVar12._8_8_ = uVar3;
  auVar12._0_8_ = plVar9;
  return auVar12;
}



/* Entry: 1093ac3dc; end: 1093ac4ab;  */

void FUN_1093ac3dc(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (uVar7 < param_2) {
LAB_1093ac424:
    if (param_2 == 0) {
      uVar7 = *param_1;
      *param_1 = 0;
      if (uVar7 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        uVar7 = *param_1;
        *param_1 = param_2;
        if (uVar7 != 0) {
          if ((char)param_1[2] == '\x01') {
            func_0x0001093a60d4(uVar7 + 0x10);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(uVar7);
          return;
        }
        return;
      }
      uVar7 = param_2 << 3;
      __Znwm();
      uVar1 = *param_1;
      *param_1 = uVar7;
      if (uVar1 != 0) {
        __ZdlPv();
      }
      uVar7 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (param_2 != uVar7);
      plVar2 = (long *)param_1[2];
      if (plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        uVar1 = param_2 - 1;
        if ((param_2 & uVar1) == 0) {
          uVar7 = uVar7 & uVar1;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        *(ulong **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar3 = (long *)*plVar2;
        while (plVar3 != (long *)0x0) {
          uVar5 = plVar3[1];
          if ((param_2 & uVar1) == 0) {
            uVar5 = uVar5 & uVar1;
          }
          else if (param_2 <= uVar5) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar6 * param_2;
          }
          plVar4 = plVar3;
          if (uVar5 != uVar7) {
            uVar6 = *param_1;
            if (*(long *)(uVar6 + uVar5 * 8) == 0) {
              *(long **)(uVar6 + uVar5 * 8) = plVar2;
              uVar7 = uVar5;
            }
            else {
              *plVar2 = *plVar3;
              *plVar3 = **(undefined8 **)(uVar6 + uVar5 * 8);
              **(long **)(uVar6 + uVar5 * 8) = (long)plVar3;
              plVar4 = plVar2;
            }
          }
          plVar2 = plVar4;
          plVar3 = (long *)*plVar4;
        }
      }
    }
    return;
  }
  if (param_2 < uVar7) {
    uVar1 = (ulong)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
    if (param_2 <= uVar1) {
      param_2 = uVar1;
    }
    if (param_2 < uVar7) goto LAB_1093ac424;
  }
  return;
}



/* Entry: 1093ac4ac; end: 1093ac62f;  */

void FUN_1093ac4ac(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
    *param_1 = 0;
    if (uVar1 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      uVar1 = *param_1;
      *param_1 = param_2;
      if (uVar1 != 0) {
        if ((char)param_1[2] == '\x01') {
          func_0x0001093a60d4(uVar1 + 0x10);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(uVar1);
        return;
      }
      return;
    }
    uVar1 = param_2 << 3;
    __Znwm();
    uVar2 = *param_1;
    *param_1 = uVar1;
    if (uVar2 != 0) {
      __ZdlPv();
    }
    uVar1 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar1 = plVar3[1];
      uVar2 = param_2 - 1;
      if ((param_2 & uVar2) == 0) {
        uVar1 = uVar1 & uVar2;
      }
      else if (param_2 <= uVar1) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar1 / param_2;
        }
        uVar1 = uVar1 - uVar6 * param_2;
      }
      *(ulong **)(*param_1 + uVar1 * 8) = param_1 + 2;
      plVar4 = (long *)*plVar3;
      while (plVar4 != (long *)0x0) {
        uVar6 = plVar4[1];
        if ((param_2 & uVar2) == 0) {
          uVar6 = uVar6 & uVar2;
        }
        else if (param_2 <= uVar6) {
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = uVar6 / param_2;
          }
          uVar6 = uVar6 - uVar7 * param_2;
        }
        plVar5 = plVar4;
        if (uVar6 != uVar1) {
          uVar7 = *param_1;
          if (*(long *)(uVar7 + uVar6 * 8) == 0) {
            *(long **)(uVar7 + uVar6 * 8) = plVar3;
            uVar1 = uVar6;
          }
          else {
            *plVar3 = *plVar4;
            *plVar4 = **(undefined8 **)(uVar7 + uVar6 * 8);
            **(long **)(uVar7 + uVar6 * 8) = (long)plVar4;
            plVar5 = plVar3;
          }
        }
        plVar3 = plVar5;
        plVar4 = (long *)*plVar5;
      }
    }
  }
  return;
}



/* Entry: 1093ac630; end: 1093ac76f;  */

void FUN_1093ac630(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined2 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar11 = param_1[1];
  if ((undefined8 *)(param_1[2] - lVar11 >> 5) < param_2) {
    lVar11 = lVar11 - *param_1;
    uVar1 = (long)param_2 + (lVar11 >> 5);
    if (uVar1 >> 0x3b != 0) {
      FUN_1093ac810();
      if (lStack_48 != lStack_50) {
        lStack_48 = lStack_48 + ((lStack_50 - lStack_48) + 0x1fU & 0xffffffffffffffe0);
      }
      if (plStack_58 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      puVar7 = (undefined8 *)*param_1;
      puVar3 = (undefined8 *)param_1[1];
      puVar2 = (undefined8 *)((long)puVar7 + (param_2[1] - (long)puVar3));
      puVar9 = puVar2;
      if (puVar3 != puVar7) {
        do {
          uVar10 = *puVar7;
          *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar7 + 1);
          *puVar9 = uVar10;
          uVar10 = *(undefined8 *)((long)puVar7 + 0xc);
          *(undefined4 *)((long)puVar9 + 0x14) = *(undefined4 *)((long)puVar7 + 0x14);
          *(undefined8 *)((long)puVar9 + 0xc) = uVar10;
          uVar4 = *(undefined2 *)(puVar7 + 3);
          *(undefined1 *)((long)puVar9 + 0x1a) = *(undefined1 *)((long)puVar7 + 0x1a);
          *(undefined2 *)(puVar9 + 3) = uVar4;
          *(undefined2 *)((long)puVar9 + 0x1b) = *(undefined2 *)((long)puVar7 + 0x1b);
          puVar7 = puVar7 + 4;
          puVar9 = puVar9 + 4;
        } while (puVar7 != puVar3);
        puVar7 = (undefined8 *)*param_1;
      }
      param_2[1] = puVar2;
      *param_1 = (long)puVar2;
      param_1[1] = (long)puVar7;
      param_2[1] = puVar7;
      lVar11 = param_1[1];
      param_1[1] = param_2[2];
      param_2[2] = lVar11;
      lVar11 = param_1[2];
      param_1[2] = param_2[3];
      param_2[3] = lVar11;
      *param_2 = param_2[1];
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar8 = (long)uVar6 >> 4;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar6) {
      uVar8 = 0x7ffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar8 == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = param_1;
      FUN_1093ac824();
    }
    lVar11 = (long)plVar5 + lVar11;
    plStack_40 = plVar5 + uVar8 * 4;
    plStack_58 = plVar5;
    lStack_50 = lVar11;
    _bzero(lVar11,(long)param_2 << 5);
    lStack_48 = lVar11 + (long)param_2 * 0x20;
    FUN_1093ac770(param_1,&plStack_58);
    if (lStack_48 != lStack_50) {
      lStack_48 = lStack_48 + ((lStack_50 - lStack_48) + 0x1fU & 0xffffffffffffffe0);
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      _bzero(lVar11,(long)param_2 << 5);
      lVar11 = lVar11 + (long)param_2 * 0x20;
    }
    param_1[1] = lVar11;
  }
  return;
}



/* Entry: 1093ac770; end: 1093ac80f;  */

void FUN_1093ac770(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar4 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar4 + (param_2[1] - (long)puVar2));
  puVar6 = puVar1;
  if (puVar2 != puVar4) {
    do {
      uVar7 = *puVar4;
      *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
      *puVar6 = uVar7;
      uVar7 = *(undefined8 *)((long)puVar4 + 0xc);
      *(undefined4 *)((long)puVar6 + 0x14) = *(undefined4 *)((long)puVar4 + 0x14);
      *(undefined8 *)((long)puVar6 + 0xc) = uVar7;
      uVar3 = *(undefined2 *)(puVar4 + 3);
      *(undefined1 *)((long)puVar6 + 0x1a) = *(undefined1 *)((long)puVar4 + 0x1a);
      *(undefined2 *)(puVar6 + 3) = uVar3;
      *(undefined2 *)((long)puVar6 + 0x1b) = *(undefined2 *)((long)puVar4 + 0x1b);
      puVar4 = puVar4 + 4;
      puVar6 = puVar6 + 4;
    } while (puVar4 != puVar2);
    puVar4 = (undefined8 *)*param_1;
  }
  param_2[1] = puVar1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar4;
  param_2[1] = puVar4;
  lVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1093ac810; end: 1093ac823;  */

void FUN_1093ac810(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  
  puVar5 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3b != 0) {
    func_0x000104c4f740();
    for (plVar7 = *(long **)(puVar5 + 0x10); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      lVar6 = plVar7[3];
      plVar2 = (long *)plVar7[4];
      if (plVar2 == (long *)0x0) {
        *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
      }
      else {
        plVar1 = plVar2 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
        do {
          lVar6 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
    }
    return;
  }
  __Znwm(param_2 << 5);
  return;
}



/* Entry: 1093ac824; end: 1093ac8e3;  */

void FUN_1093ac824(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  if (param_2 >> 0x3b != 0) {
    func_0x000104c4f740();
    for (plVar6 = *(long **)(param_1 + 0x10); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      lVar5 = plVar6[3];
      plVar2 = (long *)plVar6[4];
      if (plVar2 == (long *)0x0) {
        *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
      }
      else {
        plVar1 = plVar2 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
        do {
          lVar5 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
    }
    return;
  }
  __Znwm(param_2 << 5);
  return;
}



/* Entry: 1093ac8e4; end: 1093ac9a7;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1093ac8e4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined2 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined2 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long *plStack_70;
  long *plStack_68;
  undefined1 auStack_60 [8];
  long *aplStack_58 [5];
  
  *(undefined8 *)(param_1 + 0x38) = 0;
  func_0x000104becb10(param_1 + 0x30,param_3);
  lVar11 = param_1 + 0x48;
  FUN_1093ad6a4(lVar11,3);
  *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(lVar11 + 0x10);
  func_0x0001056c5718((undefined8 *)(lVar11 + 0x10),param_2);
  lVar11 = param_1 + 0x48;
  FUN_1093ada18(lVar11,0);
  *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(lVar11 + 0x10);
  FUN_1093aca70((undefined8 *)(lVar11 + 0x10),param_3);
  lVar11 = param_1 + 0x48;
  FUN_1093ada18(lVar11,1);
  *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(lVar11 + 0x10);
  FUN_1093aca70((undefined8 *)(lVar11 + 0x10),param_3);
  lVar11 = param_1 + 0x48;
  FUN_1093adf30(lVar11,0xc);
  *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(lVar11 + 0x10);
  func_0x000107c31950((undefined8 *)(lVar11 + 0x10),param_3);
  lVar11 = param_1 + 0x48;
  FUN_1093acbe0(lVar11,*(undefined4 *)(param_1 + 0x70));
  plVar4 = (long *)(lVar11 + 0x10);
  *(long *)(lVar11 + 0x18) = *plVar4;
  lVar9 = *plVar4;
  if ((ulong)((*(long *)(lVar11 + 0x20) - lVar9) * -0x5555555555555555) < param_3) {
    if (0x5555555555555555 < param_3) {
      FUN_1093ad184();
      auStack_60._0_4_ = (undefined4)param_3;
      plVar6 = plVar4;
      FUN_1093acd78();
      if (plVar6 == (long *)0x0) {
        plVar7 = (long *)0x40;
        __Znwm();
        plVar7[1] = 0;
        plVar7[2] = 0;
        *plVar7 = (long)&PTR_DAT_110af5448;
        plVar7[4] = 0;
        plVar7[5] = 0;
        plVar7[6] = 0;
        plVar7[7] = 0;
        plStack_70 = plVar7 + 3;
        *plStack_70 = (long)&PTR_FUN_110af5498;
        plVar6 = plVar4;
        plStack_68 = plVar7;
        aplStack_58[0] = (long *)auStack_60;
        FUN_1093ad1d4(plVar4,auStack_60,&UNK_10dd5b8f9,aplStack_58,auStack_60 + 7);
        FUN_1093acd14(plVar6 + 3,&plStack_70);
        plVar6 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar7 = plStack_68 + 1;
          do {
            lVar11 = *plVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
      }
      plStack_70 = (long *)auStack_60;
      FUN_1093ad1d4(plVar4,auStack_60,&UNK_10dd5b8f9,&plStack_70,aplStack_58);
      plVar4 = (long *)plVar4[3];
      ppuVar8 = &PTR_DAT_110af53f8;
      ___dynamic_cast(plVar4,&PTR_DAT_110af53f8,&PTR_DAT_110af5420,0);
      if (plVar4 == (long *)0x0) {
        ___cxa_bad_cast();
        func_0x0001093ad64c(&plStack_70);
        __Unwind_Resume();
        puVar14 = ppuVar8[1];
        puVar13 = *ppuVar8;
        *ppuVar8 = (undefined *)0x0;
        ppuVar8[1] = (undefined *)0x0;
        plVar6 = (long *)plVar4[1];
        plVar4[1] = (long)puVar14;
        *plVar4 = (long)puVar13;
        if (plVar6 != (long *)0x0) {
          plVar7 = plVar6 + 1;
          do {
            lVar11 = *plVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        return plVar4;
      }
      return plVar4;
    }
    lVar10 = *(long *)(lVar11 + 0x18);
    plVar5 = plVar4;
    FUN_1093ad198();
    lVar9 = (long)plVar5 + (lVar10 - lVar9);
    plVar6 = (long *)*plVar4;
    plVar7 = *(long **)(lVar11 + 0x18);
    lVar10 = (long)plVar6 - (long)plVar7;
    puVar1 = (undefined2 *)(lVar9 + lVar10);
    puVar12 = puVar1;
    if (lVar10 != 0) {
      do {
        lVar10 = *plVar6;
        *(undefined1 *)(puVar12 + 1) = *(undefined1 *)((long)plVar6 + 2);
        *puVar12 = (short)lVar10;
        plVar6 = (long *)((long)plVar6 + 3);
        puVar12 = (undefined2 *)((long)puVar12 + 3);
      } while (plVar6 != plVar7);
      plVar6 = (long *)*plVar4;
    }
    *plVar4 = (long)puVar1;
    *(long *)(lVar11 + 0x18) = lVar9;
    *(ulong *)(lVar11 + 0x20) = (long)plVar5 + param_3 * 3;
    plVar4 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar6;
    }
  }
  return plVar4;
}



/* Entry: 1093ac9a8; end: 1093aca6f;  */

void FUN_1093ac9a8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uStack_51;
  
  lVar3 = param_2 + 0x48;
  FUN_1093ada18(lVar3,0);
  lVar4 = param_2 + 0x48;
  FUN_1093ada18(lVar4,1);
  lVar5 = param_2 + 0x48;
  FUN_1093adf30(lVar5,0xc);
  lVar2 = param_1[1];
  for (lVar1 = *param_1; lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
    FUN_1093aa034(lVar3 + 0x10,lVar1);
    FUN_1093aa034(lVar4 + 0x10,lVar1 + 0xc);
    func_0x0001078db3d4(param_2 + 0x30,lVar1 + 0x1c);
    FUN_1093ae29c(lVar5 + 0x10,lVar1 + 0x1b);
  }
  FUN_1093ae370(&uStack_51,param_1,param_2);
  return;
}



/* Entry: 1093aca70; end: 1093acbdf;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1093aca70(long *param_1,ulong param_2)

{
  undefined2 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined2 *puVar11;
  long *plVar12;
  undefined *puVar13;
  undefined *puVar14;
  long *plStack_90;
  long *plStack_88;
  undefined1 auStack_80 [8];
  long *plStack_78;
  
  lVar8 = *param_1;
  if ((ulong)((param_1[2] - lVar8 >> 2) * -0x5555555555555555) < param_2) {
    if (0x1555555555555555 < param_2) {
      func_0x0001093aa314();
      lVar8 = *param_1;
      if ((ulong)((param_1[2] - lVar8) * -0x5555555555555555) < param_2) {
        if (0x5555555555555555 < param_2) {
          FUN_1093ad184();
          auStack_80._0_4_ = (undefined4)param_2;
          plVar5 = param_1;
          FUN_1093acd78();
          if (plVar5 == (long *)0x0) {
            plVar12 = (long *)0x40;
            __Znwm();
            plVar12[1] = 0;
            plVar12[2] = 0;
            *plVar12 = (long)&PTR_DAT_110af5448;
            plVar12[4] = 0;
            plVar12[5] = 0;
            plVar12[6] = 0;
            plVar12[7] = 0;
            plStack_90 = plVar12 + 3;
            *plStack_90 = (long)&PTR_FUN_110af5498;
            plVar5 = param_1;
            plStack_88 = plVar12;
            plStack_78 = (long *)auStack_80;
            FUN_1093ad1d4(param_1,auStack_80,&UNK_10dd5b8f9,&plStack_78,auStack_80 + 7);
            FUN_1093acd14(plVar5 + 3,&plStack_90);
            plVar5 = plStack_88;
            if (plStack_88 != (long *)0x0) {
              plVar12 = plStack_88 + 1;
              do {
                lVar8 = *plVar12;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar3) {
                  *plVar12 = lVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar8 == 0) {
                (**(code **)(*plStack_88 + 0x10))(plStack_88);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
              }
            }
          }
          plStack_90 = (long *)auStack_80;
          FUN_1093ad1d4(param_1,auStack_80,&UNK_10dd5b8f9,&plStack_90,&plStack_78);
          plVar5 = (long *)param_1[3];
          ppuVar7 = &PTR_DAT_110af53f8;
          ___dynamic_cast(plVar5,&PTR_DAT_110af53f8,&PTR_DAT_110af5420,0);
          if (plVar5 == (long *)0x0) {
            ___cxa_bad_cast();
            func_0x0001093ad64c(&plStack_90);
            __Unwind_Resume();
            puVar14 = ppuVar7[1];
            puVar13 = *ppuVar7;
            *ppuVar7 = (undefined *)0x0;
            ppuVar7[1] = (undefined *)0x0;
            plVar12 = (long *)plVar5[1];
            plVar5[1] = (long)puVar14;
            *plVar5 = (long)puVar13;
            if (plVar12 != (long *)0x0) {
              plVar6 = plVar12 + 1;
              do {
                lVar8 = *plVar6;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = lVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar8 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
              }
            }
            return plVar5;
          }
          return plVar5;
        }
        lVar9 = param_1[1];
        plVar6 = param_1;
        FUN_1093ad198();
        lVar8 = (long)plVar6 + (lVar9 - lVar8);
        plVar5 = (long *)*param_1;
        plVar12 = (long *)param_1[1];
        lVar9 = (long)plVar5 - (long)plVar12;
        puVar1 = (undefined2 *)(lVar8 + lVar9);
        puVar11 = puVar1;
        if (lVar9 != 0) {
          do {
            lVar9 = *plVar5;
            *(undefined1 *)(puVar11 + 1) = *(undefined1 *)((long)plVar5 + 2);
            *puVar11 = (short)lVar9;
            plVar5 = (long *)((long)plVar5 + 3);
            puVar11 = (undefined2 *)((long)puVar11 + 3);
          } while (plVar5 != plVar12);
          plVar5 = (long *)*param_1;
        }
        *param_1 = (long)puVar1;
        param_1[1] = lVar8;
        param_1[2] = (long)plVar6 + param_2 * 3;
        param_1 = (long *)0x0;
        if (plVar5 != (long *)0x0) goto __ZdlPv;
      }
      return param_1;
    }
    lVar9 = param_1[1];
    plVar4 = param_1;
    FUN_1093aa328();
    lVar8 = (long)plVar4 + (lVar9 - lVar8);
    plVar5 = (long *)*param_1;
    plVar6 = (long *)param_1[1];
    lVar9 = (long)plVar5 - (long)plVar6;
    plVar12 = (long *)(lVar8 + lVar9);
    plVar10 = plVar12;
    if (lVar9 != 0) {
      do {
        lVar9 = *plVar5;
        *(int *)(plVar10 + 1) = (int)plVar5[1];
        *plVar10 = lVar9;
        plVar5 = (long *)((long)plVar5 + 0xc);
        plVar10 = (long *)((long)plVar10 + 0xc);
      } while (plVar5 != plVar6);
      plVar5 = (long *)*param_1;
    }
    *param_1 = (long)plVar12;
    param_1[1] = lVar8;
    param_1[2] = (long)plVar4 + param_2 * 0xc;
    param_1 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
__ZdlPv:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar5;
    }
  }
  return param_1;
}



/* Entry: 1093acbe0; end: 1093acd13;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1093acbe0(long param_1,undefined4 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plStack_50;
  long *plStack_48;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  lVar6 = param_1;
  auStack_40._0_4_ = param_2;
  FUN_1093acd78(param_1,auStack_40);
  if (lVar6 == 0) {
    plVar7 = (long *)0x40;
    __Znwm();
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_DAT_110af5448;
    plVar7[4] = 0;
    plVar7[5] = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plStack_50 = plVar7 + 3;
    *plStack_50 = (long)&PTR_FUN_110af5498;
    lVar6 = param_1;
    plStack_48 = plVar7;
    plStack_38 = (long *)auStack_40;
    FUN_1093ad1d4(param_1,auStack_40,&UNK_10dd5b8f9,&plStack_38,auStack_40 + 7);
    FUN_1093acd14(lVar6 + 0x18,&plStack_50);
    plVar7 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  plStack_50 = (long *)auStack_40;
  FUN_1093ad1d4(param_1,auStack_40,&UNK_10dd5b8f9,&plStack_50,&plStack_38);
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  ppuVar5 = &PTR_DAT_110af53f8;
  ___dynamic_cast(puVar4,&PTR_DAT_110af53f8,&PTR_DAT_110af5420,0);
  if (puVar4 != (undefined8 *)0x0) {
    return puVar4;
  }
  ___cxa_bad_cast();
  func_0x0001093ad64c(&plStack_50);
  __Unwind_Resume();
  puVar9 = ppuVar5[1];
  puVar8 = *ppuVar5;
  *ppuVar5 = (undefined *)0x0;
  ppuVar5[1] = (undefined *)0x0;
  plVar7 = (long *)puVar4[1];
  puVar4[1] = puVar9;
  *puVar4 = puVar8;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return puVar4;
}



/* Entry: 1093acd14; end: 1093acd77;  */

undefined8 * FUN_1093acd14(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 1093acd78; end: 1093ace27;  */

long * FUN_1093acd78(long *param_1,int *param_2)

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
    uVar3 = (ulong)*param_2;
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
          if (*(int *)(plVar6 + 2) == *param_2) {
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



/* Entry: 1093ace28; end: 1093ace47;  */

void FUN_1093ace28(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110af5448;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093ace48; end: 1093ace57;  */

void FUN_1093ace48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001093ace50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1093ace58; end: 1093acecf;  */

undefined8 * FUN_1093ace58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af5498;
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1093aced0; end: 1093acefb;  */

long FUN_1093aced0(long param_1)

{
  return *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
}



/* Entry: 1093acefc; end: 1093acfab;  */

void FUN_1093acefc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110af5448;
  puVar1[3] = &PTR_FUN_110af5498;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  if (puVar1 + 5 != (undefined8 *)(param_2 + 0x10)) {
    FUN_1093acfac();
  }
  puVar1[4] = *(undefined8 *)(param_2 + 8);
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 1093acfac; end: 1093ad13f;  */

undefined1  [16] FUN_1093acfac(undefined8 *param_1,int *param_2,int *param_3,int *param_4)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  int *piVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x24;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  lVar7 = param_1[2];
  puVar3 = (undefined8 *)*param_1;
  if ((int *)((lVar7 - (long)puVar3) * -0x5555555555555555) < param_4) {
    piVar11 = param_2;
    piVar6 = param_4;
    if (puVar3 != (undefined8 *)0x0) {
      param_1[1] = puVar3;
      __ZdlPv();
      lVar7 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if ((int *)0x5555555555555555 < param_4) {
      FUN_1093ad184();
      if (piVar11 < (int *)0x5555555555555556) {
        puVar12 = puVar3;
        FUN_1093ad198();
        *puVar3 = puVar12;
        puVar3[1] = puVar12;
        puVar3[2] = (long)puVar12 + (long)piVar11 * 3;
        auVar18._8_8_ = piVar11;
        auVar18._0_8_ = puVar12;
        return auVar18;
      }
      FUN_1093ad184();
      plVar4 = (long *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      if (piVar11 < (int *)0x5555555555555556) {
        lVar7 = (long)piVar11 * 3;
        __Znwm(lVar7);
        auVar19._8_8_ = piVar11;
        auVar19._0_8_ = lVar7;
        return auVar19;
      }
      func_0x000104c4f740();
      uVar16 = (ulong)*piVar11;
      uVar15 = plVar4[1];
      if (uVar15 != 0) {
        uVar9 = uVar15 - 1;
        if ((uVar15 & uVar9) == 0) {
          unaff_x24 = uVar9 & uVar16;
        }
        else {
          unaff_x24 = uVar16;
          if (uVar15 <= uVar16) {
            uVar13 = 0;
            if (uVar15 != 0) {
              uVar13 = uVar16 / uVar15;
            }
            unaff_x24 = uVar16 - uVar13 * uVar15;
          }
        }
        puVar3 = *(undefined8 **)(*plVar4 + unaff_x24 * 8);
        if (puVar3 != (undefined8 *)0x0) {
          for (plVar14 = (long *)*puVar3; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
            uVar13 = plVar14[1];
            if (uVar13 == uVar16) {
              if ((int)plVar14[2] == *piVar11) {
                uVar5 = 0;
                goto LAB_1093ad3bc;
              }
            }
            else {
              if ((uVar15 & uVar9) == 0) {
                uVar13 = uVar13 & uVar9;
              }
              else if (uVar15 <= uVar13) {
                uVar1 = 0;
                if (uVar15 != 0) {
                  uVar1 = uVar13 / uVar15;
                }
                uVar13 = uVar13 - uVar1 * uVar15;
              }
              if (uVar13 != unaff_x24) break;
            }
          }
        }
      }
      plVar14 = (long *)0x28;
      __Znwm();
      *plVar14 = 0;
      plVar14[1] = uVar16;
      *(undefined4 *)(plVar14 + 2) = **(undefined4 **)piVar6;
      plVar14[3] = 0;
      plVar14[4] = 0;
      if ((uVar15 == 0) || (*(float *)(plVar4 + 4) * (float)uVar15 < (float)(plVar4[3] + 1))) {
        uVar9 = 1;
        if (2 < uVar15) {
          uVar9 = (ulong)((uVar15 & uVar15 - 1) != 0);
        }
        uVar9 = uVar9 | uVar15 << 1;
        uVar15 = (ulong)((float)(plVar4[3] + 1) / *(float *)(plVar4 + 4));
        if (uVar9 <= uVar15) {
          uVar9 = uVar15;
        }
        FUN_1093ad3f8(plVar4,uVar9);
        uVar15 = plVar4[1];
        if ((uVar15 & uVar15 - 1) == 0) {
          unaff_x24 = uVar15 - 1 & uVar16;
        }
        else {
          unaff_x24 = uVar16;
          if (uVar15 <= uVar16) {
            uVar9 = 0;
            if (uVar15 != 0) {
              uVar9 = uVar16 / uVar15;
            }
            unaff_x24 = uVar16 - uVar9 * uVar15;
          }
        }
      }
      lVar7 = *plVar4;
      plVar10 = *(long **)(lVar7 + unaff_x24 * 8);
      if (plVar10 == (long *)0x0) {
        plVar10 = plVar4 + 2;
        *plVar14 = *plVar10;
        *plVar10 = (long)plVar14;
        *(long **)(lVar7 + unaff_x24 * 8) = plVar10;
        if (*plVar14 == 0) goto LAB_1093ad3ac;
        uVar16 = *(ulong *)(*plVar14 + 8);
        if ((uVar15 & uVar15 - 1) == 0) {
          uVar16 = uVar16 & uVar15 - 1;
        }
        else if (uVar15 <= uVar16) {
          uVar9 = 0;
          if (uVar15 != 0) {
            uVar9 = uVar16 / uVar15;
          }
          uVar16 = uVar16 - uVar9 * uVar15;
        }
        plVar10 = (long *)(*plVar4 + uVar16 * 8);
      }
      else {
        *plVar14 = *plVar10;
      }
      *plVar10 = (long)plVar14;
LAB_1093ad3ac:
      plVar4[3] = plVar4[3] + 1;
      uVar5 = 1;
LAB_1093ad3bc:
      auVar20._8_8_ = uVar5;
      auVar20._0_8_ = plVar14;
      return auVar20;
    }
    piVar11 = (int *)(lVar7 * 0x5555555555555556);
    if (piVar11 < param_4 || (long)piVar11 - (long)param_4 == 0) {
      piVar11 = param_4;
    }
    if (0x2aaaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
      piVar11 = (int *)0x5555555555555555;
    }
    puVar3 = param_1;
    FUN_1093ad140(param_1,piVar11);
    puVar8 = (undefined8 *)param_1[1];
    for (piVar6 = param_2; param_2 = piVar11, piVar6 != param_3; piVar6 = (int *)((long)piVar6 + 3))
    {
      iVar2 = *piVar6;
      *(undefined1 *)((long)puVar8 + 2) = *(undefined1 *)((long)piVar6 + 2);
      *(short *)puVar8 = (short)iVar2;
      puVar8 = (undefined8 *)((long)puVar8 + 3);
    }
  }
  else {
    puVar12 = (undefined8 *)param_1[1];
    piVar11 = param_2;
    if (param_4 <= (int *)(((long)puVar12 - (long)puVar3) * -0x5555555555555555)) {
      for (; piVar11 != param_3; piVar11 = (int *)((long)piVar11 + 3)) {
        *(char *)puVar3 = (char)*piVar11;
        *(undefined1 *)((long)puVar3 + 1) = *(undefined1 *)((long)piVar11 + 1);
        *(undefined1 *)((long)puVar3 + 2) = *(undefined1 *)((long)piVar11 + 2);
        puVar3 = (undefined8 *)((long)puVar3 + 3);
      }
      param_1[1] = puVar3;
      goto LAB_1093ad12c;
    }
    piVar6 = (int *)((long)param_2 + ((long)puVar12 - (long)puVar3));
    puVar8 = puVar12;
    if (puVar12 != puVar3) {
      do {
        *(char *)puVar3 = (char)*piVar11;
        *(undefined1 *)((long)puVar3 + 1) = *(undefined1 *)((long)piVar11 + 1);
        *(undefined1 *)((long)puVar3 + 2) = *(undefined1 *)((long)piVar11 + 2);
        piVar11 = (int *)((long)piVar11 + 3);
        puVar3 = (undefined8 *)((long)puVar3 + 3);
      } while (piVar11 != piVar6);
      puVar12 = (undefined8 *)param_1[1];
      puVar8 = puVar12;
    }
    for (; piVar6 != param_3; piVar6 = (int *)((long)piVar6 + 3)) {
      iVar2 = *piVar6;
      *(undefined1 *)((long)puVar12 + 2) = *(undefined1 *)((long)piVar6 + 2);
      *(short *)puVar12 = (short)iVar2;
      puVar12 = (undefined8 *)((long)puVar12 + 3);
      puVar8 = (undefined8 *)((long)puVar8 + 3);
    }
  }
  param_1[1] = puVar8;
LAB_1093ad12c:
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = puVar3;
  return auVar17;
}



/* Entry: 1093ad140; end: 1093ad183;  */

undefined1  [16] FUN_1093ad140(long *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if (param_2 < (int *)0x5555555555555556) {
    plVar2 = param_1;
    FUN_1093ad198();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)plVar2 + (long)param_2 * 3;
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = plVar2;
    return auVar12;
  }
  FUN_1093ad184();
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < (int *)0x5555555555555556) {
    lVar8 = (long)param_2 * 3;
    __Znwm(lVar8);
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = lVar8;
    return auVar13;
  }
  func_0x000104c4f740();
  uVar11 = (ulong)*param_2;
  uVar10 = plVar2[1];
  if (uVar10 != 0) {
    uVar4 = uVar10 - 1;
    if ((uVar10 & uVar4) == 0) {
      unaff_x24 = uVar4 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar7 * uVar10;
      }
    }
    puVar6 = *(undefined8 **)(*plVar2 + unaff_x24 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar9 = (long *)*puVar6; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar7 = plVar9[1];
        if (uVar7 == uVar11) {
          if ((int)plVar9[2] == *param_2) {
            uVar3 = 0;
            goto LAB_1093ad3bc;
          }
        }
        else {
          if ((uVar10 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar10 <= uVar7) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar7 / uVar10;
            }
            uVar7 = uVar7 - uVar1 * uVar10;
          }
          if (uVar7 != unaff_x24) break;
        }
      }
    }
  }
  plVar9 = (long *)0x28;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = uVar11;
  *(undefined4 *)(plVar9 + 2) = *(undefined4 *)*param_4;
  plVar9[3] = 0;
  plVar9[4] = 0;
  if ((uVar10 == 0) || (*(float *)(plVar2 + 4) * (float)uVar10 < (float)(plVar2[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar10) {
      uVar4 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar4 = uVar4 | uVar10 << 1;
    uVar10 = (ulong)((float)(plVar2[3] + 1) / *(float *)(plVar2 + 4));
    if (uVar4 <= uVar10) {
      uVar4 = uVar10;
    }
    FUN_1093ad3f8(plVar2,uVar4);
    uVar10 = plVar2[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar4 * uVar10;
      }
    }
  }
  lVar8 = *plVar2;
  plVar5 = *(long **)(lVar8 + unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = plVar2 + 2;
    *plVar9 = *plVar5;
    *plVar5 = (long)plVar9;
    *(long **)(lVar8 + unaff_x24 * 8) = plVar5;
    if (*plVar9 == 0) goto LAB_1093ad3ac;
    uVar11 = *(ulong *)(*plVar9 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar11 = uVar11 & uVar10 - 1;
    }
    else if (uVar10 <= uVar11) {
      uVar4 = 0;
      if (uVar10 != 0) {
        uVar4 = uVar11 / uVar10;
      }
      uVar11 = uVar11 - uVar4 * uVar10;
    }
    plVar5 = (long *)(*plVar2 + uVar11 * 8);
  }
  else {
    *plVar9 = *plVar5;
  }
  *plVar5 = (long)plVar9;
LAB_1093ad3ac:
  plVar2[3] = plVar2[3] + 1;
  uVar3 = 1;
LAB_1093ad3bc:
  auVar14._8_8_ = uVar3;
  auVar14._0_8_ = plVar9;
  return auVar14;
}



/* Entry: 1093ad184; end: 1093ad197;  */

undefined1  [16]
FUN_1093ad184(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < (int *)0x5555555555555556) {
    lVar8 = (long)param_2 * 3;
    __Znwm(lVar8);
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = lVar8;
    return auVar12;
  }
  func_0x000104c4f740();
  uVar11 = (ulong)*param_2;
  uVar10 = plVar2[1];
  if (uVar10 != 0) {
    uVar4 = uVar10 - 1;
    if ((uVar10 & uVar4) == 0) {
      unaff_x24 = uVar4 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar7 * uVar10;
      }
    }
    puVar6 = *(undefined8 **)(*plVar2 + unaff_x24 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar9 = (long *)*puVar6; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar7 = plVar9[1];
        if (uVar7 == uVar11) {
          if ((int)plVar9[2] == *param_2) {
            uVar3 = 0;
            goto LAB_1093ad3bc;
          }
        }
        else {
          if ((uVar10 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar10 <= uVar7) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar7 / uVar10;
            }
            uVar7 = uVar7 - uVar1 * uVar10;
          }
          if (uVar7 != unaff_x24) break;
        }
      }
    }
  }
  plVar9 = (long *)0x28;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = uVar11;
  *(undefined4 *)(plVar9 + 2) = *(undefined4 *)*param_4;
  plVar9[3] = 0;
  plVar9[4] = 0;
  if ((uVar10 == 0) || (*(float *)(plVar2 + 4) * (float)uVar10 < (float)(plVar2[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar10) {
      uVar4 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar4 = uVar4 | uVar10 << 1;
    uVar10 = (ulong)((float)(plVar2[3] + 1) / *(float *)(plVar2 + 4));
    if (uVar4 <= uVar10) {
      uVar4 = uVar10;
    }
    FUN_1093ad3f8(plVar2,uVar4);
    uVar10 = plVar2[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar4 * uVar10;
      }
    }
  }
  lVar8 = *plVar2;
  plVar5 = *(long **)(lVar8 + unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = plVar2 + 2;
    *plVar9 = *plVar5;
    *plVar5 = (long)plVar9;
    *(long **)(lVar8 + unaff_x24 * 8) = plVar5;
    if (*plVar9 == 0) goto LAB_1093ad3ac;
    uVar11 = *(ulong *)(*plVar9 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar11 = uVar11 & uVar10 - 1;
    }
    else if (uVar10 <= uVar11) {
      uVar4 = 0;
      if (uVar10 != 0) {
        uVar4 = uVar11 / uVar10;
      }
      uVar11 = uVar11 - uVar4 * uVar10;
    }
    plVar5 = (long *)(*plVar2 + uVar11 * 8);
  }
  else {
    *plVar9 = *plVar5;
  }
  *plVar5 = (long)plVar9;
LAB_1093ad3ac:
  plVar2[3] = plVar2[3] + 1;
  uVar3 = 1;
LAB_1093ad3bc:
  auVar13._8_8_ = uVar3;
  auVar13._0_8_ = plVar9;
  return auVar13;
}



/* Entry: 1093ad198; end: 1093ad1d3;  */

undefined1  [16] FUN_1093ad198(long *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

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
  undefined1 auVar12 [16];
  
  if (param_2 < (int *)0x5555555555555556) {
    lVar7 = (long)param_2 * 3;
    __Znwm(lVar7);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = lVar7;
    return auVar11;
  }
  func_0x000104c4f740();
  uVar10 = (ulong)*param_2;
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
          if ((int)plVar8[2] == *param_2) {
            uVar2 = 0;
            goto LAB_1093ad3bc;
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
  plVar8 = (long *)0x28;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  *(undefined4 *)(plVar8 + 2) = *(undefined4 *)*param_4;
  plVar8[3] = 0;
  plVar8[4] = 0;
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
    FUN_1093ad3f8(param_1,uVar3);
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
    if (*plVar8 == 0) goto LAB_1093ad3ac;
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
LAB_1093ad3ac:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_1093ad3bc:
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar8;
  return auVar12;
}



/* Entry: 1093ad1d4; end: 1093ad3f7;  */

undefined1  [16] FUN_1093ad1d4(long *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

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
  
  uVar10 = (ulong)*param_2;
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
          if ((int)plVar8[2] == *param_2) {
            uVar2 = 0;
            goto LAB_1093ad3bc;
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
  plVar8 = (long *)0x28;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  *(undefined4 *)(plVar8 + 2) = *(undefined4 *)*param_4;
  plVar8[3] = 0;
  plVar8[4] = 0;
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
    FUN_1093ad3f8(param_1,uVar3);
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
    if (*plVar8 == 0) goto LAB_1093ad3ac;
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
LAB_1093ad3ac:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_1093ad3bc:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 1093ad3f8; end: 1093ad4c7;  */

void FUN_1093ad3f8(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (uVar7 < param_2) {
LAB_1093ad440:
    if (param_2 == 0) {
      uVar7 = *param_1;
      *param_1 = 0;
      if (uVar7 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        uVar7 = *param_1;
        *param_1 = param_2;
        if (uVar7 != 0) {
          if ((char)param_1[2] == '\x01') {
            func_0x0001093a6008(uVar7 + 0x18);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(uVar7);
          return;
        }
        return;
      }
      uVar7 = param_2 << 3;
      __Znwm();
      uVar1 = *param_1;
      *param_1 = uVar7;
      if (uVar1 != 0) {
        __ZdlPv();
      }
      uVar7 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (param_2 != uVar7);
      plVar2 = (long *)param_1[2];
      if (plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        uVar1 = param_2 - 1;
        if ((param_2 & uVar1) == 0) {
          uVar7 = uVar7 & uVar1;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        *(ulong **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar3 = (long *)*plVar2;
        while (plVar3 != (long *)0x0) {
          uVar5 = plVar3[1];
          if ((param_2 & uVar1) == 0) {
            uVar5 = uVar5 & uVar1;
          }
          else if (param_2 <= uVar5) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar6 * param_2;
          }
          plVar4 = plVar3;
          if (uVar5 != uVar7) {
            uVar6 = *param_1;
            if (*(long *)(uVar6 + uVar5 * 8) == 0) {
              *(long **)(uVar6 + uVar5 * 8) = plVar2;
              uVar7 = uVar5;
            }
            else {
              *plVar2 = *plVar3;
              *plVar3 = **(undefined8 **)(uVar6 + uVar5 * 8);
              **(long **)(uVar6 + uVar5 * 8) = (long)plVar3;
              plVar4 = plVar2;
            }
          }
          plVar2 = plVar4;
          plVar3 = (long *)*plVar4;
        }
      }
    }
    return;
  }
  if (param_2 < uVar7) {
    uVar1 = (ulong)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
    if (param_2 <= uVar1) {
      param_2 = uVar1;
    }
    if (param_2 < uVar7) goto LAB_1093ad440;
  }
  return;
}



/* Entry: 1093ad4c8; end: 1093ad6a3;  */

void FUN_1093ad4c8(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
    *param_1 = 0;
    if (uVar1 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      uVar1 = *param_1;
      *param_1 = param_2;
      if (uVar1 != 0) {
        if ((char)param_1[2] == '\x01') {
          func_0x0001093a6008(uVar1 + 0x18);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(uVar1);
        return;
      }
      return;
    }
    uVar1 = param_2 << 3;
    __Znwm();
    uVar2 = *param_1;
    *param_1 = uVar1;
    if (uVar2 != 0) {
      __ZdlPv();
    }
    uVar1 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar1 = plVar3[1];
      uVar2 = param_2 - 1;
      if ((param_2 & uVar2) == 0) {
        uVar1 = uVar1 & uVar2;
      }
      else if (param_2 <= uVar1) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar1 / param_2;
        }
        uVar1 = uVar1 - uVar6 * param_2;
      }
      *(ulong **)(*param_1 + uVar1 * 8) = param_1 + 2;
      plVar4 = (long *)*plVar3;
      while (plVar4 != (long *)0x0) {
        uVar6 = plVar4[1];
        if ((param_2 & uVar2) == 0) {
          uVar6 = uVar6 & uVar2;
        }
        else if (param_2 <= uVar6) {
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = uVar6 / param_2;
          }
          uVar6 = uVar6 - uVar7 * param_2;
        }
        plVar5 = plVar4;
        if (uVar6 != uVar1) {
          uVar7 = *param_1;
          if (*(long *)(uVar7 + uVar6 * 8) == 0) {
            *(long **)(uVar7 + uVar6 * 8) = plVar3;
            uVar1 = uVar6;
          }
          else {
            *plVar3 = *plVar4;
            *plVar4 = **(undefined8 **)(uVar7 + uVar6 * 8);
            **(long **)(uVar7 + uVar6 * 8) = (long)plVar4;
            plVar5 = plVar3;
          }
        }
        plVar3 = plVar5;
        plVar4 = (long *)*plVar5;
      }
    }
  }
  return;
}



/* Entry: 1093ad6a4; end: 1093ad7d7;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1093ad6a4(long param_1,undefined4 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plStack_50;
  long *plStack_48;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  lVar6 = param_1;
  auStack_40._0_4_ = param_2;
  FUN_1093acd78(param_1,auStack_40);
  if (lVar6 == 0) {
    plVar7 = (long *)0x40;
    __Znwm();
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_FUN_110af54f0;
    plVar7[4] = 0;
    plVar7[5] = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plStack_50 = plVar7 + 3;
    *plStack_50 = (long)&PTR_FUN_110af5540;
    lVar6 = param_1;
    plStack_48 = plVar7;
    plStack_38 = (long *)auStack_40;
    FUN_1093ad1d4(param_1,auStack_40,&UNK_10dd5b8f9,&plStack_38,auStack_40 + 7);
    FUN_1093ad7d8(lVar6 + 0x18,&plStack_50);
    plVar7 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  plStack_50 = (long *)auStack_40;
  FUN_1093ad1d4(param_1,auStack_40,&UNK_10dd5b8f9,&plStack_50,&plStack_38);
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  ppuVar5 = &PTR_DAT_110af53f8;
  ___dynamic_cast(puVar4,&PTR_DAT_110af53f8,&PTR_DAT_110af54c8,0);
  if (puVar4 != (undefined8 *)0x0) {
    return puVar4;
  }
  ___cxa_bad_cast();
  FUN_1093ad9c0(&plStack_50);
  __Unwind_Resume();
  puVar9 = ppuVar5[1];
  puVar8 = *ppuVar5;
  *ppuVar5 = (undefined *)0x0;
  ppuVar5[1] = (undefined *)0x0;
  plVar7 = (long *)puVar4[1];
  puVar4[1] = puVar9;
  *puVar4 = puVar8;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return puVar4;
}



/* Entry: 1093ad7d8; end: 1093ad83b;  */

undefined8 * FUN_1093ad7d8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 1093ad83c; end: 1093ad84b;  */

void FUN_1093ad83c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af54f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1093ad84c; end: 1093ad86b;  */

void FUN_1093ad84c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af54f0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093ad86c; end: 1093ad87b;  */

void FUN_1093ad86c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001093ad874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1093ad87c; end: 1093ad8f3;  */

undefined8 * FUN_1093ad87c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af5540;
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1093ad8f4; end: 1093ad917;  */

long FUN_1093ad8f4(long param_1)

{
  return *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
}



/* Entry: 1093ad918; end: 1093ad9bf;  */

void FUN_1093ad918(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110af54f0;
  puVar1[3] = &PTR_FUN_110af5540;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  if (puVar1 + 5 != (undefined8 *)(param_2 + 0x10)) {
    FUN_1093784d8();
  }
  puVar1[4] = *(undefined8 *)(param_2 + 8);
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 1093ad9c0; end: 1093ada17;  */

long FUN_1093ad9c0(long param_1)

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



/* Entry: 1093ada18; end: 1093adb4b;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1093ada18(long param_1,undefined4 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plStack_50;
  long *plStack_48;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  lVar6 = param_1;
  auStack_40._0_4_ = param_2;
  FUN_1093acd78(param_1,auStack_40);
  if (lVar6 == 0) {
    plVar7 = (long *)0x40;
    __Znwm();
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_FUN_110af5580;
    plVar7[4] = 0;
    plVar7[5] = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plStack_50 = plVar7 + 3;
    *plStack_50 = (long)&PTR_FUN_110af55d0;
    lVar6 = param_1;
    plStack_48 = plVar7;
    plStack_38 = (long *)auStack_40;
    FUN_1093ad1d4(param_1,auStack_40,&UNK_10dd5b8f9,&plStack_38,auStack_40 + 7);
    FUN_1093adb4c(lVar6 + 0x18,&plStack_50);
    plVar7 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  plStack_50 = (long *)auStack_40;
  FUN_1093ad1d4(param_1,auStack_40,&UNK_10dd5b8f9,&plStack_50,&plStack_38);
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  ppuVar5 = &PTR_DAT_110af53f8;
  ___dynamic_cast(puVar4,&PTR_DAT_110af53f8,&PTR_DAT_110af5408,0);
  if (puVar4 != (undefined8 *)0x0) {
    return puVar4;
  }
  ___cxa_bad_cast();
  FUN_1093aded8(&plStack_50);
  __Unwind_Resume();
  puVar9 = ppuVar5[1];
  puVar8 = *ppuVar5;
  *ppuVar5 = (undefined *)0x0;
  ppuVar5[1] = (undefined *)0x0;
  plVar7 = (long *)puVar4[1];
  puVar4[1] = puVar9;
  *puVar4 = puVar8;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return puVar4;
}



/* Entry: 1093adb4c; end: 1093adbaf;  */

undefined8 * FUN_1093adb4c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 1093adbb0; end: 1093adbbf;  */

void FUN_1093adbb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af5580;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1093adbc0; end: 1093adbdf;  */

void FUN_1093adbc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af5580;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093adbe0; end: 1093adbef;  */

void FUN_1093adbe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001093adbe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


