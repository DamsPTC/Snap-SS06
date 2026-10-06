/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 003ab5b8; end: 003ab60b;  */

long FUN_003ab5b8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00353254();
  FUN_00357f88(lVar1 + 0x18,*param_3,0);
  return param_1;
}



/* Entry: 003ab60c; end: 003ab6c7;  */

undefined8 * FUN_003ab60c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009df5c0;
  plVar4 = (long *)param_1[0x17];
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
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(char *)((long)param_1 + 0xb7) < '\0') {
    __ZdlPv(param_1[0x14]);
  }
  if (*(char *)((long)param_1 + 0x9f) < '\0') {
    __ZdlPv(param_1[0x11]);
  }
  *param_1 = &PTR_FUN_009df558;
  FUN_003abd20();
  FUN_003abe50();
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  return param_1;
}



/* Entry: 003ab6c8; end: 003ab6db;  */

void FUN_003ab6c8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  
  pcVar2 = "vector";
  FUN_0033b32c();
  lVar3 = *(long *)pcVar2;
  puVar1 = (undefined8 *)param_2[1];
  for (lVar4 = *(long *)((long)pcVar2 + 8); lVar4 != lVar3; lVar4 = lVar4 + -0x40) {
    puVar1[-8] = *(undefined8 *)(lVar4 + -0x40);
    puVar1[-7] = *(undefined8 *)(lVar4 + -0x38);
    puVar1[-6] = *(undefined8 *)(lVar4 + -0x30);
    puVar1[-5] = *(undefined8 *)(lVar4 + -0x28);
    puVar1 = puVar1 + -8;
  }
  param_2[1] = puVar1;
  lVar3 = *(long *)pcVar2;
  *(undefined8 **)pcVar2 = puVar1;
  param_2[1] = lVar3;
  lVar3 = *(long *)((long)pcVar2 + 8);
  *(undefined8 *)((long)pcVar2 + 8) = param_2[2];
  param_2[2] = lVar3;
  lVar3 = *(long *)((long)pcVar2 + 0x10);
  *(undefined8 *)((long)pcVar2 + 0x10) = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 003ab6dc; end: 003ab757;  */

void FUN_003ab6dc(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  puVar1 = (undefined8 *)param_2[1];
  for (lVar3 = param_1[1]; lVar3 != lVar2; lVar3 = lVar3 + -0x40) {
    puVar1[-8] = *(undefined8 *)(lVar3 + -0x40);
    puVar1[-7] = *(undefined8 *)(lVar3 + -0x38);
    puVar1[-6] = *(undefined8 *)(lVar3 + -0x30);
    puVar1[-5] = *(undefined8 *)(lVar3 + -0x28);
    puVar1 = puVar1 + -8;
  }
  param_2[1] = puVar1;
  lVar2 = *param_1;
  *param_1 = (long)puVar1;
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



/* Entry: 003ab758; end: 003ab78b;  */

undefined1  [16] FUN_003ab758(long *param_1,long *param_2,qword *param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  long **pplVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  char *pcVar12;
  char *pcVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if ((ulong)param_2 >> 0x3a == 0) {
    lVar2 = (long)param_2 << 6;
    __Znwm(lVar2);
    auVar14._8_8_ = param_2;
    auVar14._0_8_ = lVar2;
    return auVar14;
  }
  FUN_00349558();
  lVar2 = param_1[1] - *param_1 >> 6;
  uVar1 = lVar2 + 1;
  if (uVar1 >> 0x3a == 0) {
    plVar3 = param_1 + 2;
    uVar7 = *plVar3 - *param_1;
    uVar9 = (long)uVar7 >> 5;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar7) {
      uVar9 = 0x3ffffffffffffff;
    }
    plStack_48 = plVar3;
    if (uVar9 == 0) {
      plStack_68 = (long *)0x0;
    }
    else {
      FUN_003ab758();
      plStack_68 = plVar3;
    }
    plStack_60 = plStack_68 + lVar2 * 8;
    plStack_50 = plStack_68 + uVar9 * 8;
    plStack_60[1] = 0;
    *plStack_60 = 0;
    plStack_60[3] = 0;
    plStack_60[2] = 0;
    plStack_60[5] = 0;
    plStack_60[4] = 0;
    plStack_60[7] = 0;
    plStack_60[6] = 0;
    plStack_58 = plStack_60 + 8;
    pplVar5 = &plStack_68;
    FUN_003ab6dc(param_1,pplVar5);
    lVar2 = param_1[1];
    if (plStack_58 != plStack_60) {
      plStack_58 = (long *)((long)plStack_58 +
                           ((long)plStack_60 + (0x3f - (long)plStack_58) & 0xffffffffffffffc0U));
    }
    if (plStack_68 != (long *)0x0) {
      __ZdlPv();
    }
    auVar15._8_8_ = pplVar5;
    auVar15._0_8_ = lVar2;
    return auVar15;
  }
  FUN_003ab6c8();
  if (plStack_58 != plStack_60) {
    plStack_58 = (long *)((long)plStack_58 +
                         (((long)plStack_60 - (long)plStack_58) + 0x3fU & 0xffffffffffffffc0));
  }
  if (plStack_68 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  lVar2 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar2 * -0x3333333333333333 + 1;
  if (uVar1 < 0x333333333333334) {
    plVar3 = param_1 + 2;
    lVar8 = *plVar3 - *param_1 >> 4;
    uVar9 = lVar8 * -0x6666666666666666;
    if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
      uVar9 = uVar1;
    }
    if (0x199999999999998 < (ulong)(lVar8 * -0x3333333333333333)) {
      uVar9 = 0x333333333333333;
    }
    plStack_a8 = plVar3;
    if (uVar9 == 0) {
      plStack_c8 = (long *)0x0;
    }
    else {
      FUN_00349f28();
      plStack_c8 = plVar3;
    }
    plStack_c0 = plStack_c8 + lVar2 * 2;
    plStack_b0 = plStack_c8 + uVar9 * 10;
    *(undefined4 *)plStack_c0 = 5;
    plStack_c0[2] = 0;
    plStack_c0[3] = 0;
    plStack_c0[1] = 0;
    plStack_c0[4] = *param_2;
    plVar3 = param_2 + 1;
    lVar8 = *plVar3;
    plVar10 = plStack_c0 + 5;
    *plVar10 = lVar8;
    lVar11 = param_2[2];
    plStack_c0[6] = lVar11;
    if (lVar11 == 0) {
      plStack_c0[4] = (long)plVar10;
    }
    else {
      *(long **)(lVar8 + 0x10) = plVar10;
      *param_2 = (long)plVar3;
      *plVar3 = 0;
      param_2[2] = 0;
    }
    plStack_c8[lVar2 * 2 + 7] = 0;
    plStack_c8[lVar2 * 2 + 8] = 0;
    plStack_c8[lVar2 * 2 + 9] = 0;
    plStack_b8 = plStack_c0 + 10;
    pplVar5 = &plStack_c8;
    FUN_003a8184(param_1,pplVar5);
    lVar2 = param_1[1];
    FUN_003a833c(&plStack_c8);
    auVar16._8_8_ = pplVar5;
    auVar16._0_8_ = lVar2;
    return auVar16;
  }
  FUN_00349f14();
  FUN_003a833c(&plStack_c8);
  __Unwind_Resume();
  pcVar12 = (char *)(param_1 + 1);
  pcVar13 = pcVar12;
  if (*(char **)pcVar12 != (char *)0x0) {
    pcVar4 = *(char **)pcVar12;
    do {
      while (pcVar12 = pcVar4, (long)*(qword *)(pcVar12 + 0x20) <= *param_2) {
        if (*param_2 <= (long)*(qword *)(pcVar12 + 0x20)) {
          uVar6 = 0;
          goto LAB_003aba98;
        }
        pcVar4 = *(char **)(pcVar12 + 8);
        if (*(char **)(pcVar12 + 8) == (char *)0x0) {
          pcVar13 = pcVar12 + 8;
          goto LAB_003aba60;
        }
      }
      pcVar4 = *(char **)pcVar12;
      pcVar13 = pcVar12;
    } while (*(char **)pcVar12 != (char *)0x0);
  }
LAB_003aba60:
  pcVar4 = segment_command_00000020.segname;
  __Znwm();
  *(qword *)(pcVar4 + 0x20) = *param_3;
  FUN_003abab0(param_1,pcVar12,pcVar13,pcVar4);
  uVar6 = 1;
  pcVar12 = pcVar4;
LAB_003aba98:
  auVar17._8_8_ = uVar6;
  auVar17._0_8_ = pcVar12;
  return auVar17;
}



/* Entry: 003ab78c; end: 003ab8a7;  */

undefined1  [16] FUN_003ab78c(long *param_1,long *param_2,qword *param_3)

{
  ulong uVar1;
  long *plVar2;
  char *pcVar3;
  long **pplVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  char *pcVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  lVar11 = param_1[1] - *param_1 >> 6;
  uVar1 = lVar11 + 1;
  if (uVar1 >> 0x3a == 0) {
    plVar2 = param_1 + 2;
    uVar6 = *plVar2 - *param_1;
    uVar8 = (long)uVar6 >> 5;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar6) {
      uVar8 = 0x3ffffffffffffff;
    }
    plStack_28 = plVar2;
    if (uVar8 == 0) {
      plStack_48 = (long *)0x0;
    }
    else {
      FUN_003ab758();
      plStack_48 = plVar2;
    }
    plStack_40 = plStack_48 + lVar11 * 8;
    plStack_30 = plStack_48 + uVar8 * 8;
    plStack_40[1] = 0;
    *plStack_40 = 0;
    plStack_40[3] = 0;
    plStack_40[2] = 0;
    plStack_40[5] = 0;
    plStack_40[4] = 0;
    plStack_40[7] = 0;
    plStack_40[6] = 0;
    plStack_38 = plStack_40 + 8;
    pplVar4 = &plStack_48;
    FUN_003ab6dc(param_1,pplVar4);
    lVar11 = param_1[1];
    if (plStack_38 != plStack_40) {
      plStack_38 = (long *)((long)plStack_38 +
                           ((long)plStack_40 + (0x3f - (long)plStack_38) & 0xffffffffffffffc0U));
    }
    if (plStack_48 != (long *)0x0) {
      __ZdlPv();
    }
    auVar14._8_8_ = pplVar4;
    auVar14._0_8_ = lVar11;
    return auVar14;
  }
  FUN_003ab6c8();
  if (plStack_38 != plStack_40) {
    plStack_38 = (long *)((long)plStack_38 +
                         (((long)plStack_40 - (long)plStack_38) + 0x3fU & 0xffffffffffffffc0));
  }
  if (plStack_48 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  lVar11 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar11 * -0x3333333333333333 + 1;
  if (uVar1 < 0x333333333333334) {
    plVar2 = param_1 + 2;
    lVar7 = *plVar2 - *param_1 >> 4;
    uVar8 = lVar7 * -0x6666666666666666;
    if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
      uVar8 = uVar1;
    }
    if (0x199999999999998 < (ulong)(lVar7 * -0x3333333333333333)) {
      uVar8 = 0x333333333333333;
    }
    plStack_88 = plVar2;
    if (uVar8 == 0) {
      plStack_a8 = (long *)0x0;
    }
    else {
      FUN_00349f28();
      plStack_a8 = plVar2;
    }
    plStack_a0 = plStack_a8 + lVar11 * 2;
    plStack_90 = plStack_a8 + uVar8 * 10;
    *(undefined4 *)plStack_a0 = 5;
    plStack_a0[2] = 0;
    plStack_a0[3] = 0;
    plStack_a0[1] = 0;
    plStack_a0[4] = *param_2;
    plVar2 = param_2 + 1;
    lVar7 = *plVar2;
    plVar9 = plStack_a0 + 5;
    *plVar9 = lVar7;
    lVar10 = param_2[2];
    plStack_a0[6] = lVar10;
    if (lVar10 == 0) {
      plStack_a0[4] = (long)plVar9;
    }
    else {
      *(long **)(lVar7 + 0x10) = plVar9;
      *param_2 = (long)plVar2;
      *plVar2 = 0;
      param_2[2] = 0;
    }
    plStack_a8[lVar11 * 2 + 7] = 0;
    plStack_a8[lVar11 * 2 + 8] = 0;
    plStack_a8[lVar11 * 2 + 9] = 0;
    plStack_98 = plStack_a0 + 10;
    pplVar4 = &plStack_a8;
    FUN_003a8184(param_1,pplVar4);
    lVar11 = param_1[1];
    FUN_003a833c(&plStack_a8);
    auVar15._8_8_ = pplVar4;
    auVar15._0_8_ = lVar11;
    return auVar15;
  }
  FUN_00349f14();
  FUN_003a833c(&plStack_a8);
  __Unwind_Resume();
  pcVar12 = (char *)(param_1 + 1);
  pcVar13 = pcVar12;
  if (*(char **)pcVar12 != (char *)0x0) {
    pcVar3 = *(char **)pcVar12;
    do {
      while (pcVar12 = pcVar3, (long)*(qword *)(pcVar12 + 0x20) <= *param_2) {
        if (*param_2 <= (long)*(qword *)(pcVar12 + 0x20)) {
          uVar5 = 0;
          goto LAB_003aba98;
        }
        pcVar3 = *(char **)(pcVar12 + 8);
        if (*(char **)(pcVar12 + 8) == (char *)0x0) {
          pcVar13 = pcVar12 + 8;
          goto LAB_003aba60;
        }
      }
      pcVar3 = *(char **)pcVar12;
      pcVar13 = pcVar12;
    } while (*(char **)pcVar12 != (char *)0x0);
  }
LAB_003aba60:
  pcVar3 = segment_command_00000020.segname;
  __Znwm();
  *(qword *)(pcVar3 + 0x20) = *param_3;
  FUN_003abab0(param_1,pcVar12,pcVar13,pcVar3);
  uVar5 = 1;
  pcVar12 = pcVar3;
LAB_003aba98:
  auVar16._8_8_ = uVar5;
  auVar16._0_8_ = pcVar12;
  return auVar16;
}



/* Entry: 003ab8a8; end: 003ab9f7;  */

undefined1  [16] FUN_003ab8a8(long *param_1,long *param_2,qword *param_3)

{
  ulong uVar1;
  long *plVar2;
  char *pcVar3;
  long **pplVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar7 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar7 * -0x3333333333333333 + 1;
  if (uVar1 < 0x333333333333334) {
    plVar2 = param_1 + 2;
    lVar6 = *plVar2 - *param_1 >> 4;
    uVar8 = lVar6 * -0x6666666666666666;
    if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
      uVar8 = uVar1;
    }
    if (0x199999999999998 < (ulong)(lVar6 * -0x3333333333333333)) {
      uVar8 = 0x333333333333333;
    }
    plStack_38 = plVar2;
    if (uVar8 == 0) {
      plStack_58 = (long *)0x0;
    }
    else {
      FUN_00349f28();
      plStack_58 = plVar2;
    }
    plStack_50 = plStack_58 + lVar7 * 2;
    plStack_40 = plStack_58 + uVar8 * 10;
    *(undefined4 *)plStack_50 = 5;
    plStack_50[2] = 0;
    plStack_50[3] = 0;
    plStack_50[1] = 0;
    plStack_50[4] = *param_2;
    plVar2 = param_2 + 1;
    lVar6 = *plVar2;
    plVar9 = plStack_50 + 5;
    *plVar9 = lVar6;
    lVar10 = param_2[2];
    plStack_50[6] = lVar10;
    if (lVar10 == 0) {
      plStack_50[4] = (long)plVar9;
    }
    else {
      *(long **)(lVar6 + 0x10) = plVar9;
      *param_2 = (long)plVar2;
      *plVar2 = 0;
      param_2[2] = 0;
    }
    plStack_58[lVar7 * 2 + 7] = 0;
    plStack_58[lVar7 * 2 + 8] = 0;
    plStack_58[lVar7 * 2 + 9] = 0;
    plStack_48 = plStack_50 + 10;
    pplVar4 = &plStack_58;
    FUN_003a8184(param_1,pplVar4);
    lVar7 = param_1[1];
    FUN_003a833c(&plStack_58);
    auVar13._8_8_ = pplVar4;
    auVar13._0_8_ = lVar7;
    return auVar13;
  }
  FUN_00349f14();
  FUN_003a833c(&plStack_58);
  __Unwind_Resume();
  pcVar11 = (char *)(param_1 + 1);
  pcVar12 = pcVar11;
  if (*(char **)pcVar11 != (char *)0x0) {
    pcVar3 = *(char **)pcVar11;
    do {
      while (pcVar11 = pcVar3, (long)*(qword *)(pcVar11 + 0x20) <= *param_2) {
        if (*param_2 <= (long)*(qword *)(pcVar11 + 0x20)) {
          uVar5 = 0;
          goto LAB_003aba98;
        }
        pcVar3 = *(char **)(pcVar11 + 8);
        if (*(char **)(pcVar11 + 8) == (char *)0x0) {
          pcVar12 = pcVar11 + 8;
          goto LAB_003aba60;
        }
      }
      pcVar3 = *(char **)pcVar11;
      pcVar12 = pcVar11;
    } while (*(char **)pcVar11 != (char *)0x0);
  }
LAB_003aba60:
  pcVar3 = segment_command_00000020.segname;
  __Znwm();
  *(qword *)(pcVar3 + 0x20) = *param_3;
  FUN_003abab0(param_1,pcVar11,pcVar12,pcVar3);
  uVar5 = 1;
  pcVar11 = pcVar3;
LAB_003aba98:
  auVar14._8_8_ = uVar5;
  auVar14._0_8_ = pcVar11;
  return auVar14;
}



/* Entry: 003ab9f8; end: 003abaaf;  */

undefined1  [16] FUN_003ab9f8(long param_1,long *param_2,qword *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  
  pcVar3 = (char *)(param_1 + 8);
  pcVar4 = pcVar3;
  if (*(char **)pcVar3 != (char *)0x0) {
    pcVar1 = *(char **)pcVar3;
    do {
      while (pcVar3 = pcVar1, (long)*(qword *)(pcVar3 + 0x20) <= *param_2) {
        if (*param_2 <= (long)*(qword *)(pcVar3 + 0x20)) {
          uVar2 = 0;
          goto LAB_003aba98;
        }
        pcVar1 = *(char **)(pcVar3 + 8);
        if (*(char **)(pcVar3 + 8) == (char *)0x0) {
          pcVar4 = pcVar3 + 8;
          goto LAB_003aba60;
        }
      }
      pcVar1 = *(char **)pcVar3;
      pcVar4 = pcVar3;
    } while (*(char **)pcVar3 != (char *)0x0);
  }
LAB_003aba60:
  pcVar1 = segment_command_00000020.segname;
  __Znwm();
  *(qword *)(pcVar1 + 0x20) = *param_3;
  FUN_003abab0(param_1,pcVar3,pcVar4,pcVar1);
  uVar2 = 1;
  pcVar3 = pcVar1;
LAB_003aba98:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = pcVar3;
  return auVar5;
}



/* Entry: 003abab0; end: 003abbeb;  */

void FUN_003abab0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_00340874(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 003abbec; end: 003abc4f;  */

undefined8 FUN_003abbec(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar3;
  if (plVar4 != (long *)0x0) {
    plVar2 = plVar3;
    do {
      plVar1 = plVar4 + 1;
      if (*param_2 <= plVar4[4]) {
        plVar2 = plVar4;
        plVar1 = plVar4;
      }
      plVar4 = (long *)*plVar1;
    } while (plVar4 != (long *)0x0);
    if ((plVar2 != plVar3) && (plVar2[4] <= *param_2)) {
      FUN_003abc50();
      return 1;
    }
  }
  return 0;
}



/* Entry: 003abc50; end: 003abd1f;  */

undefined8 FUN_003abc50(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  func_0x003abcb0();
  plVar4 = *(long **)(param_2 + 0x28);
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
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  __ZdlPv(param_2);
  return param_1;
}



/* Entry: 003abd20; end: 003abdcb;  */

dword * FUN_003abd20(void)

{
  int iVar1;
  dword *pdVar2;
  
  if ((bRam0000000000b5e798 & 1) == 0) {
    iVar1 = 0xb5e798;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      pdVar2 = &segment_command_00000020.nsects;
      __Znwm();
      *(undefined8 *)(pdVar2 + 0x12) = 0;
      *(undefined8 *)(pdVar2 + 0x10) = 0;
      *(undefined8 *)(pdVar2 + 0x16) = 0;
      *(undefined8 *)(pdVar2 + 0x14) = 0;
      *(undefined8 *)(pdVar2 + 10) = 0;
      *(undefined8 *)(pdVar2 + 8) = 0;
      *(undefined8 *)(pdVar2 + 0xe) = 0;
      *(undefined8 *)(pdVar2 + 0xc) = 0;
      *(undefined8 *)(pdVar2 + 2) = 0;
      *(undefined8 *)pdVar2 = 0;
      *(undefined8 *)(pdVar2 + 6) = 0;
      *(undefined8 *)(pdVar2 + 4) = 0;
      FUN_00339d50();
      *(undefined8 *)(pdVar2 + 0x12) = 0;
      *(dword **)(pdVar2 + 0x10) = pdVar2 + 0x12;
      *(undefined8 *)(pdVar2 + 0x14) = 0;
      *(undefined8 *)(pdVar2 + 0x16) = 0;
      pdRam0000000000b5e790 = pdVar2;
      ___cxa_guard_release(0xb5e798);
    }
  }
  return pdRam0000000000b5e790;
}



/* Entry: 003abdcc; end: 003abe4f;  */

void FUN_003abdcc(long param_1,long param_2)

{
  long lVar1;
  undefined1 uStack_29;
  long *plStack_28;
  
  func_0x00339d8c();
  lVar1 = *(long *)(param_1 + 0x58) + 1;
  *(long *)(param_1 + 0x58) = lVar1;
  plStack_28 = (long *)(param_2 + 0x18);
  *plStack_28 = lVar1;
  lVar1 = param_1 + 0x40;
  FUN_003abef8(lVar1,plStack_28,&UNK_008000a0,&plStack_28,&uStack_29);
  *(long *)(lVar1 + 0x28) = param_2;
  func_0x00339da8(param_1);
  return;
}



/* Entry: 003abe50; end: 003abef7;  */

void FUN_003abe50(long param_1,long param_2)

{
  code *pcVar1;
  long lStack_28;
  
  lStack_28 = param_2;
  if (param_2 < 1) {
    func_0x007734ec();
  }
  else {
    func_0x00339d8c();
    if (param_2 <= *(long *)(param_1 + 0x58)) {
      func_0x003ac008(param_1 + 0x40,&lStack_28);
      func_0x00339da8(param_1);
      return;
    }
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channelz_registry.cc"
               ,0x3c,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3abedc);
  (*pcVar1)();
}



/* Entry: 003abef8; end: 003abfb3;  */

undefined1  [16] FUN_003abef8(long param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  qword *pqVar1;
  undefined8 uVar2;
  qword *pqVar3;
  qword *pqVar4;
  undefined1 auVar5 [16];
  
  pqVar3 = (qword *)(param_1 + 8);
  pqVar4 = pqVar3;
  if ((qword *)*pqVar3 != (qword *)0x0) {
    pqVar1 = (qword *)*pqVar3;
    do {
      while (pqVar3 = pqVar1, (long)pqVar3[4] <= *param_2) {
        if (*param_2 <= (long)pqVar3[4]) {
          uVar2 = 0;
          goto LAB_003abf9c;
        }
        pqVar1 = (qword *)pqVar3[1];
        if ((qword *)pqVar3[1] == (qword *)0x0) {
          pqVar4 = pqVar3 + 1;
          goto LAB_003abf60;
        }
      }
      pqVar1 = (qword *)*pqVar3;
      pqVar4 = pqVar3;
    } while ((qword *)*pqVar3 != (qword *)0x0);
  }
LAB_003abf60:
  pqVar1 = (qword *)(segment_command_00000020.segname + 8);
  __Znwm();
  pqVar1[4] = *(qword *)*param_4;
  pqVar1[5] = 0;
  FUN_003abfb4(param_1,pqVar3,pqVar4,pqVar1);
  uVar2 = 1;
  pqVar3 = pqVar1;
LAB_003abf9c:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = pqVar3;
  return auVar5;
}



/* Entry: 003abfb4; end: 003ac0ef;  */

void FUN_003abfb4(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_00340874(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 003ac0f0; end: 003ac297;  */

void FUN_003ac0f0(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  qword *pqVar5;
  char *pcVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  code *pcVar12;
  undefined8 uVar13;
  char *pcVar14;
  bool bVar15;
  ulong unaff_x22;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 uStack_79;
  ulong auStack_78 [4];
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_38 [8];
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  bVar3 = *(byte *)(param_2 + 2);
  if ((bVar3 >> 3 & 1) == 0) {
    if ((bVar3 >> 4 & 1) == 0) goto LAB_003ac114;
LAB_003ac17c:
    lVar9 = param_2[1];
    uVar13 = *(undefined8 *)(lVar9 + 0x78);
    puVar2[0x37] = *puVar2;
    puVar2[0x38] = "recv_message_ready";
    puVar2[0x33] = FUN_003ac4bc;
    puVar2[0x34] = puVar2 + 0x32;
    puVar2[0x35] = 0;
    puVar2[0x36] = uVar13;
    *(undefined8 **)(lVar9 + 0x78) = puVar2 + 0x32;
    bVar3 = *(byte *)(param_2 + 2);
    if ((bVar3 >> 5 & 1) != 0) goto LAB_003ac1b4;
LAB_003ac118:
    if ((bVar3 >> 6 & 1) == 0) goto LAB_003ac11c;
LAB_003ac1ec:
    pqVar5 = &segment_command_00000020.vmaddr;
    FUN_00338c74();
    lVar9 = *param_2;
    pcVar12 = FUN_003ac444;
    pcVar6 = "on_complete (cancel_stream)";
  }
  else {
    lVar9 = param_2[1];
    uVar13 = *(undefined8 *)(lVar9 + 0x48);
    puVar2[0x30] = *puVar2;
    puVar2[0x31] = "recv_initial_metadata_ready";
    puVar2[0x2c] = FUN_003ac4bc;
    puVar2[0x2d] = puVar2 + 0x2b;
    puVar2[0x2e] = 0;
    puVar2[0x2f] = uVar13;
    *(undefined8 **)(lVar9 + 0x48) = puVar2 + 0x2b;
    bVar3 = *(byte *)(param_2 + 2);
    if ((bVar3 >> 4 & 1) != 0) goto LAB_003ac17c;
LAB_003ac114:
    if ((bVar3 >> 5 & 1) == 0) goto LAB_003ac118;
LAB_003ac1b4:
    lVar9 = param_2[1];
    uVar13 = *(undefined8 *)(lVar9 + 0x90);
    puVar2[0x3e] = *puVar2;
    puVar2[0x3f] = "recv_trailing_metadata_ready";
    puVar2[0x3a] = FUN_003ac4bc;
    puVar2[0x3b] = puVar2 + 0x39;
    puVar2[0x3c] = 0;
    puVar2[0x3d] = uVar13;
    *(undefined8 **)(lVar9 + 0x90) = puVar2 + 0x39;
    bVar3 = *(byte *)(param_2 + 2);
    if ((bVar3 >> 6 & 1) != 0) goto LAB_003ac1ec;
LAB_003ac11c:
    lVar9 = *param_2;
    if (lVar9 == 0) goto LAB_003ac254;
    if ((bVar3 & 1) == 0) {
      if ((bVar3 >> 2 & 1) == 0) {
        if ((bVar3 >> 1 & 1) == 0) {
          if ((bVar3 >> 3 & 1) == 0) {
            if ((bVar3 >> 4 & 1) == 0) {
              if ((bVar3 >> 5 & 1) == 0) {
                pcVar6 = "return nullptr";
                func_0x00338df0("return nullptr",
                                "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/connected_channel.cc"
                                ,0x59);
                    /* WARNING: Could not recover jumptable at 0x00400768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*(long *)**(undefined8 **)(pcVar6 + 8) + 0x38))();
                return;
              }
              pqVar5 = puVar2 + 0x24;
            }
            else {
              pqVar5 = puVar2 + 0x1d;
            }
          }
          else {
            pqVar5 = puVar2 + 0x16;
          }
        }
        else {
          pqVar5 = puVar2 + 0xf;
        }
      }
      else {
        pqVar5 = puVar2 + 8;
      }
    }
    else {
      pqVar5 = puVar2 + 1;
    }
    pcVar12 = FUN_003ac4bc;
    pcVar6 = "on_complete";
  }
  pqVar5[5] = *puVar2;
  pqVar5[6] = (qword)pcVar6;
  pqVar5[1] = (qword)pcVar12;
  pqVar5[2] = (qword)pqVar5;
  pqVar5[3] = 0;
  pqVar5[4] = lVar9;
  *param_2 = (long)pqVar5;
LAB_003ac254:
  func_0x00400754(*puVar1,puVar2 + 0x40,param_2);
  plStack_58 = (long *)*puVar2;
  pcVar6 = "passed batch to transport";
  puStack_50 = &stack0xfffffffffffffff0;
  do {
    lVar10 = *plStack_58;
    lVar9 = lVar10 + -1;
    cVar4 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plStack_58,0x10);
    if (bVar15) {
      *plStack_58 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar9 != 0) {
    if (lVar10 == 0) {
      func_0x00773d94();
      func_0x0040cf10();
      func_0x0040cf10();
      FUN_0033c494(auStack_38);
      FUN_0033c494(&stack0xffffffffffffffd0);
      plVar8 = plStack_58;
      __Unwind_Resume();
      pcStack_48 = FUN_003bba54;
      plVar8 = plVar8 + 0xb;
      do {
        pcVar14 = (char *)*plVar8;
        if (((ulong)pcVar14 & 1) == 0) {
          auStack_78[0] = 0;
LAB_003bbad0:
          do {
            if ((char *)*plVar8 != pcVar14) {
              ClearExclusiveLocal();
              bVar15 = true;
              goto LAB_003bbb24;
            }
            cVar4 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar15) {
              *plVar8 = (long)pcVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pcVar14 == (char *)0x0) goto LAB_003bbb14;
          uStack_90 = 0;
          FUN_003c1e6c(&uStack_79,pcVar14,&uStack_90);
          if ((uStack_90 & 1) != 0) {
            FUN_0055293c();
          }
          bVar15 = false;
          pcVar6 = pcVar14;
        }
        else {
          FUN_003b7b3c(auStack_78,(ulong)pcVar14 & 0xfffffffffffffffe);
          if (auStack_78[0] == 0) goto LAB_003bbad0;
          uStack_88 = auStack_78[0];
          if ((auStack_78[0] & 1) != 0) {
            piVar11 = (int *)(auStack_78[0] - 1);
            do {
              cVar4 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar15) {
                *piVar11 = *piVar11 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          FUN_003c1e6c(&uStack_79,pcVar6,&uStack_88);
          if ((uStack_88 & 1) != 0) {
            FUN_0055293c();
          }
LAB_003bbb14:
          bVar15 = false;
        }
LAB_003bbb24:
        if ((auStack_78[0] & 1) != 0) {
          FUN_0055293c();
        }
        if (!bVar15) {
          return;
        }
      } while( true );
    }
    plVar8 = plStack_58 + 1;
    plVar7 = plVar8;
    FUN_0033b3e4(plVar8,&stack0xffffffffffffffdf);
    while (plVar7 == (long *)0x0) {
      plVar7 = plVar8;
      FUN_0033b3e4(plVar8,&stack0xffffffffffffffdf);
    }
    FUN_003b7b6c(&stack0xffffffffffffffd0,plVar7[3]);
    plVar7[3] = 0;
    if ((unaff_x22 & 1) != 0) {
      piVar11 = (int *)(unaff_x22 - 1);
      do {
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar15) {
          *piVar11 = *piVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_003bb81c();
    if ((unaff_x22 & 1) != 0) {
      FUN_0055293c(unaff_x22);
    }
    if ((unaff_x22 & 1) != 0) {
      FUN_0055293c();
    }
  }
  return;
}



/* Entry: 003ac298; end: 003ac2a3;  */

void FUN_003ac298(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00400768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x38))();
  return;
}



/* Entry: 003ac2a4; end: 003ac347;  */

void FUN_003ac2a4(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_29;
  undefined8 *puStack_28;
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  *puVar2 = param_3[7];
  uVar3 = *puVar1;
  func_0x00400748(uVar3,puVar2 + 0x40,*param_3,param_3[1],param_3[6]);
  if ((int)uVar3 == 0) {
    *param_1 = 0;
  }
  else {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    FUN_003b646c(param_1,2,"transport stream initialization failed",0x26,&uStack_29,&uStack_48);
    puStack_28 = &uStack_48;
    FUN_0033d548(&puStack_28);
  }
  return;
}



/* Entry: 003ac348; end: 003ac36b;  */

void FUN_003ac348(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar1 = *(long *)(param_1 + 0x10);
  plVar2 = (long *)**(undefined8 **)(param_1 + 8);
  lVar3 = param_2;
  func_0x003c3d38();
  if (lVar3 == 0) {
    func_0x003c3d54();
    if (param_2 == 0) {
      return;
    }
    puVar4 = (undefined8 *)(*plVar2 + 0x28);
  }
  else {
    puVar4 = (undefined8 *)(*plVar2 + 0x20);
    param_2 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x004007d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar2,lVar1 + 0x200,param_2);
  return;
}



/* Entry: 003ac36c; end: 003ac3ff;  */

void FUN_003ac36c(undefined8 *param_1,long param_2,long param_3)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_3 + 0x14) != 0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    piVar1 = *(int **)(param_3 + 8);
    FUN_003a28d0(piVar1,"grpc.internal.transport");
    if ((piVar1 == (int *)0x0) || (*piVar1 != 2)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(piVar1 + 4);
    }
    *puVar4 = uVar3;
    *param_1 = 0;
    return;
  }
  func_0x00773524();
  lVar2 = **(long **)(param_3 + 8);
  func_0x00400728();
  *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + lVar2;
  return;
}



/* Entry: 003ac400; end: 003ac417;  */

void FUN_003ac400(long param_1)

{
  if ((long *)**(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00400744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)**(long **)(param_1 + 8) + 0x48))();
    return;
  }
  return;
}



/* Entry: 003ac418; end: 003ac443;  */

long FUN_003ac418(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uStack_38;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_003a6e14(param_1,&PTR_FUN_009df660);
    return 1;
  }
  func_0x0077355c();
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_38 = uVar4;
  FUN_003ac4bc(param_1,&uStack_38);
  if ((uVar4 & 1) != 0) {
    FUN_0055293c(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return param_1;
}



/* Entry: 003ac444; end: 003ac4bb;  */

void FUN_003ac444(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uStack_28;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar4;
  FUN_003ac4bc(param_1,&uStack_28);
  if ((uVar4 & 1) != 0) {
    FUN_0055293c(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return;
}



/* Entry: 003ac4bc; end: 003ac53b;  */

void FUN_003ac4bc(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar5 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003bb88c(uVar3,uVar4,&uStack_28,*(undefined8 *)(param_1 + 0x30));
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003ac53c; end: 003ac5cf;  */

undefined8 * FUN_003ac53c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,uint param_4)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong *puVar6;
  
  *param_1 = &PTR_FUN_009df6d8;
  param_1[1] = &PTR_FUN_009df730;
  param_1[2] = *param_3;
  param_1[3] = param_2;
  puVar6 = (ulong *)param_3[6];
  param_1[5] = param_3[7];
  param_1[4] = puVar6;
  param_1[6] = param_3[5];
  param_1[7] = 0;
  uVar4 = param_3[2];
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = uVar4;
  if ((param_4 & 1) != 0) {
    do {
      uVar5 = *puVar6;
      uVar1 = uVar5 + 0x10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar3) {
        *puVar6 = uVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar6[2] < uVar1) {
      func_0x003d6048(puVar6,0x10);
    }
    else {
      puVar6 = (ulong *)((long)puVar6 + uVar5 + 0x30);
    }
    *puVar6 = 0;
    puVar6[1] = 0;
    param_1[10] = puVar6;
  }
  return param_1;
}



/* Entry: 003ac5d0; end: 003ac5d7;  */

void FUN_003ac5d0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3ac5d4);
  (*pcVar1)();
}



/* Entry: 003ac5d8; end: 003ac5e3;  */

void FUN_003ac5d8(long param_1)

{
  char cVar1;
  bool bVar2;
  long *extraout_x8;
  long *plVar3;
  
  _abort();
  plVar3 = *(long **)(param_1 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = *plVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *extraout_x8 = param_1 + 8;
  return;
}



/* Entry: 003ac5e4; end: 003ac623;  */

void FUN_003ac5e4(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_2 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = *plVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *param_1 = param_2 + 8;
  return;
}



/* Entry: 003ac624; end: 003ac6ab;  */

void FUN_003ac624(qword param_1)

{
  char *pcVar1;
  ulong uStack_28;
  
  pcVar1 = segment_command_00000020.segname + 8;
  FUN_00338c74();
  *(code **)pcVar1 = FUN_003afa20;
  *(qword *)(pcVar1 + 8) = param_1;
  *(code **)(pcVar1 + 0x18) = FUN_0033df34;
  *(char **)(pcVar1 + 0x20) = pcVar1;
  *(undefined8 *)(pcVar1 + 0x28) = 0;
  uStack_28 = 0;
  FUN_003bb88c(*(undefined8 *)(param_1 + 0x28),pcVar1 + 0x10,&uStack_28,"wakeup");
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003ac6ac; end: 003ac6f3;  */

void FUN_003ac6ac(long param_1)

{
  char *pcVar1;
  ulong uStack_28;
  
  pcVar1 = segment_command_00000020.segname + 8;
  FUN_00338c74();
  *(code **)pcVar1 = FUN_003afa20;
  *(qword *)(pcVar1 + 8) = param_1 - 8;
  *(code **)(pcVar1 + 0x18) = FUN_0033df34;
  *(char **)(pcVar1 + 0x20) = pcVar1;
  *(undefined8 *)(pcVar1 + 0x28) = 0;
  uStack_28 = 0;
  FUN_003bb88c(*(undefined8 *)(param_1 + 0x20),pcVar1 + 0x10,&uStack_28,"wakeup");
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003ac6f4; end: 003ac75b;  */

void FUN_003ac6f4(long *param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (((lVar3 != 0) && (*(long *)(lVar3 + 0x38) != 0)) &&
     (lVar1 = *(long *)(lVar3 + 0x38) + -1, *(long *)(lVar3 + 0x38) = lVar1, lVar1 == 0)) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                 ,0x6b,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x3ac758);
    (*pcVar2)();
  }
  return;
}



/* Entry: 003ac75c; end: 003ac7af;  */

long * FUN_003ac75c(long *param_1,long *param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_2;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x38) != 0)) {
    *(long *)(lVar1 + 0x38) = *(long *)(lVar1 + 0x38) + 1;
  }
  lStack_28 = *param_1;
  *param_1 = lVar1;
  FUN_003ac6f4(&lStack_28);
  return param_1;
}



/* Entry: 003ac7b0; end: 003ac7f3;  */

void FUN_003ac7b0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar7;
  undefined1 *unaff_x29;
  undefined1 *puVar8;
  code *unaff_x30;
  code *pcVar9;
  
  puVar2 = &stack0xfffffffffffffff0;
  puVar5 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar5 == (undefined8 *)0x0) {
    unaff_x30 = FUN_003ac7f4;
    puVar5 = param_2;
    func_0x00773594();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    param_2 = param_1;
    unaff_x29 = puVar2;
  }
  else if ((puVar5[7] == 0) || (lVar7 = puVar5[7] + -1, puVar5[7] = lVar7, lVar7 != 0)) {
    return;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 **)((long)register0x00000008 + -0x28) = puVar5;
  lVar7 = param_2[0x16];
  puVar5 = *(undefined8 **)(lVar7 + 0x10);
  puVar4 = (undefined8 *)(puVar5[5] + -1);
  func_0x003a6564();
  if (puVar5 != *(undefined8 **)(lVar7 + 0x18)) {
    FUN_003afa6c(param_2,(undefined1 *)((long)register0x00000008 + -0x28));
    return;
  }
  func_0x007735c8();
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x40);
  puVar8 = (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x38) = FUN_003ac84c;
  puVar6 = (undefined8 *)*puVar5;
  *puVar5 = 0;
  if (puVar6 == (undefined8 *)0x0) {
    pcVar9 = FUN_003ac890;
    func_0x007735fc();
  }
  else {
    if ((puVar6[7] == 0) || (lVar1 = puVar6[7] + -1, puVar6[7] = lVar1, lVar1 != 0)) {
      return;
    }
    puVar8 = *(undefined1 **)((long)register0x00000008 + -0x40);
    pcVar9 = *(code **)((long)register0x00000008 + -0x38);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x30);
    puVar5 = puVar4;
    puVar4 = puVar6;
  }
  *(long *)(puVar3 + -0x20) = lVar7;
  *(undefined8 **)(puVar3 + -0x18) = param_2;
  *(undefined1 **)(puVar3 + -0x10) = puVar8;
  *(code **)(puVar3 + -8) = pcVar9;
  *(undefined8 *)(puVar3 + -0x28) = *puVar4;
  *(undefined8 *)(puVar3 + -0x38) = 0;
  *(char **)(puVar3 + -0x30) = "Flusher::Complete";
  FUN_0034accc(puVar5 + 3,puVar3 + -0x28,puVar3 + -0x38,puVar3 + -0x30);
  if ((*(ulong *)(puVar3 + -0x38) & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003ac7f4; end: 003ac84b;  */

void FUN_003ac7f4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 **ppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 **ppuVar7;
  code *pcVar8;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  lVar6 = *(long *)(param_1 + 0xb0);
  puVar3 = *(undefined8 **)(lVar6 + 0x10);
  puVar4 = (undefined8 *)(puVar3[5] + -1);
  uStack_28 = param_2;
  func_0x003a6564();
  if (puVar3 != *(undefined8 **)(lVar6 + 0x18)) {
    FUN_003afa6c(param_1,&uStack_28);
    return;
  }
  func_0x007735c8();
  ppuVar2 = &puStack_40;
  ppuVar7 = &puStack_40;
  pcStack_38 = FUN_003ac84c;
  puVar5 = (undefined8 *)*puVar3;
  *puVar3 = 0;
  puStack_40 = &stack0xfffffffffffffff0;
  if (puVar5 == (undefined8 *)0x0) {
    pcVar8 = FUN_003ac890;
    func_0x007735fc();
  }
  else {
    if ((puVar5[7] == 0) || (lVar1 = puVar5[7] + -1, puVar5[7] = lVar1, lVar1 != 0)) {
      return;
    }
    pcVar8 = FUN_003ac84c;
    ppuVar2 = (undefined1 **)auStack_30;
    puVar3 = puVar4;
    puVar4 = puVar5;
    ppuVar7 = (undefined1 **)&stack0xfffffffffffffff0;
  }
  *(long *)((long)ppuVar2 + -0x20) = lVar6;
  *(long *)((long)ppuVar2 + -0x18) = param_1;
  *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar7;
  *(code **)((long)ppuVar2 + -8) = pcVar8;
  *(undefined8 *)((long)ppuVar2 + -0x28) = *puVar4;
  *(undefined8 *)((long)ppuVar2 + -0x38) = 0;
  *(char **)((long)ppuVar2 + -0x30) = "Flusher::Complete";
  FUN_0034accc(puVar3 + 3,(undefined1 *)((long)ppuVar2 + -0x28),
               (undefined1 *)((long)ppuVar2 + -0x38),(undefined1 *)((long)ppuVar2 + -0x30));
  if ((*(ulong *)((long)ppuVar2 + -0x38) & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003ac84c; end: 003ac88f;  */

void FUN_003ac84c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar2 = &stack0xfffffffffffffff0;
  puVar3 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar3 == (undefined8 *)0x0) {
    unaff_x30 = FUN_003ac890;
    puVar3 = param_2;
    func_0x007735fc();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    param_2 = param_1;
    unaff_x29 = puVar2;
  }
  else if ((puVar3[7] == 0) || (lVar1 = puVar3[7] + -1, puVar3[7] = lVar1, lVar1 != 0)) {
    return;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *puVar3;
  *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
  *(char **)((long)register0x00000008 + -0x30) = "Flusher::Complete";
  FUN_0034accc(param_2 + 3,(undefined1 *)((long)register0x00000008 + -0x28),
               (undefined1 *)((long)register0x00000008 + -0x38),
               (undefined1 *)((long)register0x00000008 + -0x30));
  if ((*(ulong *)((long)register0x00000008 + -0x38) & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003ac890; end: 003ac8fb;  */

void FUN_003ac890(long param_1,undefined8 *param_2)

{
  ulong uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *param_2;
  uStack_38 = 0;
  pcStack_30 = "Flusher::Complete";
  FUN_0034accc(param_1 + 0x18,&uStack_28,&uStack_38,&pcStack_30);
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003ac8fc; end: 003ac98f;  */

void FUN_003ac8fc(long *param_1,ulong *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  ulong uStack_58;
  ulong uStack_28;
  
  lVar3 = *param_1;
  *param_1 = 0;
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x38) != 0) {
      *(undefined8 *)(lVar3 + 0x38) = 0;
      uStack_28 = *param_2;
      if ((uStack_28 & 1) != 0) {
        piVar4 = (int *)(uStack_28 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar2) {
            *piVar4 = *piVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003ac990(param_3,lVar3,&uStack_28);
      if ((uStack_28 & 1) != 0) {
        FUN_0055293c();
      }
    }
    return;
  }
  func_0x00773630();
  func_0x0040cf10();
  FUN_0033c494(&uStack_28);
  __Unwind_Resume(param_1);
  uStack_58 = *param_3;
  if ((uStack_58 & 1) != 0) {
    piVar4 = (int *)(uStack_58 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_004008c4(lVar3,&uStack_58,param_1 + 3);
  if ((uStack_58 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003ac990; end: 003aca07;  */

void FUN_003ac990(long param_1,undefined8 param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_28;
  
  uStack_28 = *param_3;
  if ((uStack_28 & 1) != 0) {
    piVar3 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_004008c4(param_2,&uStack_28,param_1 + 0x18);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003aca08; end: 003acbc3;  */

ulong * FUN_003aca08(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uStack_58;
  char *pcStack_50;
  long lStack_48;
  
  uVar5 = *param_1;
  if (uVar5 < 2) {
    if (param_1[3] < 2) {
      FUN_003bb974(*(undefined8 *)(param_1[0x16] + 0x28),"nothing to flush");
      plVar4 = *(long **)(param_1[0x16] + 0x10);
      do {
        bVar3 = *plVar4 + -1 == 0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    else {
      FUN_00346f8c(param_1 + 3,*(undefined8 *)(param_1[0x16] + 0x28));
      plVar4 = *(long **)(param_1[0x16] + 0x10);
      do {
        bVar3 = *plVar4 + -1 == 0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  else {
    if (3 < uVar5) {
      uVar7 = 1;
      do {
        puVar6 = param_1 + 1;
        if ((uVar5 & 1) != 0) {
          puVar6 = (ulong *)param_1[1];
        }
        uVar5 = puVar6[uVar7];
        *(ulong *)(uVar5 + 0x18) = param_1[0x16];
        lStack_48 = uVar5 + 0x20;
        *(undefined8 *)(uVar5 + 0x28) = 0x3afbbc;
        *(ulong *)(uVar5 + 0x30) = uVar5;
        *(undefined8 *)(uVar5 + 0x38) = 0;
        plVar4 = *(long **)(param_1[0x16] + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uStack_58 = 0;
        pcStack_50 = "flusher_batch";
        FUN_0034accc(param_1 + 3,&lStack_48,&uStack_58,&pcStack_50);
        if ((uStack_58 & 1) != 0) {
          FUN_0055293c();
        }
        uVar7 = uVar7 + 1;
        uVar5 = *param_1;
      } while (uVar7 < uVar5 >> 1);
    }
    FUN_003470dc(param_1 + 3,*(undefined8 *)(param_1[0x16] + 0x28));
    puVar6 = param_1 + 1;
    if ((*param_1 & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    FUN_003a6a04(*(undefined8 *)(param_1[0x16] + 0x18),*puVar6);
    plVar4 = *(long **)(param_1[0x16] + 0x10);
    do {
      bVar3 = *plVar4 + -1 == 0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (bVar3) {
    FUN_004005ec();
  }
  FUN_0034afe4(param_1 + 3);
  if ((*param_1 & 1) != 0) {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 003acbc4; end: 003accc3;  */

undefined8 * FUN_003acbc4(undefined8 *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  
  puVar4 = param_1;
  FUN_003ac53c();
  *puVar4 = &PTR_FUN_009df750;
  puVar4[1] = &PTR_FUN_009df7a8;
  puVar4[0xb] = &PTR_PTR_00afa4e0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0x14] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x15] = 0;
  puVar4[0x16] = 0;
  puVar4[0x11] = FUN_003accc4;
  puVar4[0x12] = puVar4;
  puVar4[0x13] = 0;
  if (puVar4[10] != 0) {
    puVar5 = (ulong *)param_1[4];
    do {
      uVar6 = *puVar5;
      uVar1 = uVar6 + 0x40;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar3) {
        *puVar5 = uVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar5[2] < uVar1) {
      func_0x003d6048(puVar5,0x40);
    }
    else {
      puVar5 = (ulong *)((long)puVar5 + uVar6 + 0x30);
    }
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    param_1[0xe] = puVar5;
  }
  return param_1;
}



/* Entry: 003accc4; end: 003acd2f;  */

void FUN_003accc4(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uStack_28;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar4;
  FUN_003ae568(param_1,&uStack_28);
  if ((uVar4 & 1) != 0) {
    FUN_0055293c(uVar4);
  }
  return;
}



/* Entry: 003acd30; end: 003acddf;  */

undefined8 * FUN_003acd30(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_009df750;
  param_1[1] = &PTR_FUN_009df7a8;
  if (param_1[0x16] == 0) {
    if ((param_1[0x14] & 1) != 0) {
      FUN_0055293c();
    }
    FUN_003ac6f4(param_1 + 0xc);
    (**(code **)(*(long *)param_1[0xb] + 8))();
    *param_1 = &PTR_FUN_009df6d8;
    param_1[1] = &PTR_FUN_009df730;
    return param_1;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
               ,0x1e5,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3acdd4);
  (*pcVar1)();
}



/* Entry: 003acde0; end: 003acde3;  */

undefined8 * FUN_003acde0(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_009df750;
  param_1[1] = &PTR_FUN_009df7a8;
  if (param_1[0x16] == 0) {
    if ((param_1[0x14] & 1) != 0) {
      FUN_0055293c();
    }
    FUN_003ac6f4(param_1 + 0xc);
    (**(code **)(*(long *)param_1[0xb] + 8))();
    *param_1 = &PTR_FUN_009df6d8;
    param_1[1] = &PTR_FUN_009df730;
    return param_1;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
               ,0x1e5,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3acdd4);
  (*pcVar1)();
}



/* Entry: 003acde4; end: 003ace1b;  */

void FUN_003acde4(void)

{
  FUN_003acd30();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003ace1c; end: 003ad2f3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003ace1c(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  long *plVar11;
  long lVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uStack_160;
  ulong uStack_158;
  long lStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  long alStack_130 [4];
  undefined8 uStack_110;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar5 = &PTR___tlv_bootstrap_00b2c390;
  (*(code *)PTR___tlv_bootstrap_00b2c390)(*(undefined8 *)(param_1 + 0x20));
  puVar17 = *ppuVar5;
  *ppuVar5 = extraout_x8;
  ppuVar6 = &PTR___tlv_bootstrap_00b2c3a8;
  (*(code *)PTR___tlv_bootstrap_00b2c3a8)(*(undefined8 *)(param_1 + 0x40));
  puVar18 = *ppuVar6;
  *ppuVar6 = extraout_x8_00;
  ppuVar7 = &PTR___tlv_bootstrap_00b2c3c0;
  (*(code *)PTR___tlv_bootstrap_00b2c3c0)(*(undefined8 *)(param_1 + 0x48));
  puVar19 = *ppuVar7;
  *ppuVar7 = extraout_x8_01;
  ppuVar8 = &PTR___tlv_bootstrap_00b2c3d8;
  (*(code *)PTR___tlv_bootstrap_00b2c3d8)(param_1 + 0x38);
  puVar20 = *ppuVar8;
  *ppuVar8 = extraout_x8_02;
  *(undefined8 *)(param_2 + 0x38) = 1;
  alStack_130[1] = 0;
  uStack_110 = 0;
  plVar11 = *(long **)(param_1 + 0x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = *plVar11 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar1 = *(byte *)(param_2 + 0x10);
  uVar10 = (uint)bVar1;
  alStack_130[0] = param_2;
  lStack_78 = param_1;
  if ((bVar1 >> 6 & 1) == 0) {
    if (((bVar1 >> 3 & 1) == 0) ||
       (puVar14 = *(undefined4 **)(param_1 + 0x70), puVar14 == (undefined4 *)0x0))
    goto LAB_003acf78;
    uVar15 = 3;
    switch(*puVar14) {
    case 1:
      uVar15 = 4;
    case 0:
      *puVar14 = uVar15;
      break;
    case 2:
      goto LAB_003acf78;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      goto code_r0x003ad260;
    }
    lVar12 = *(long *)(param_2 + 8);
    *(undefined8 *)(puVar14 + 0xc) = *(undefined8 *)(lVar12 + 0x38);
    *(undefined8 *)(puVar14 + 2) = *(undefined8 *)(lVar12 + 0x48);
    *(code **)(puVar14 + 6) = FUN_003afc08;
    *(long *)(puVar14 + 8) = param_1;
    *(undefined8 *)(puVar14 + 10) = 0;
    *(long *)(*(long *)(param_2 + 8) + 0x48) = *(long *)(param_1 + 0x70) + 0x10;
    uVar10 = (uint)*(byte *)(param_2 + 0x10);
LAB_003acf78:
    if ((uVar10 & 1) == 0) {
      if ((uVar10 >> 5 & 1) == 0) {
        uVar16 = *(ulong *)(param_1 + 0xa0);
        if (uVar16 != 0) {
          if ((uVar16 & 1) != 0) {
            piVar13 = (int *)(uVar16 - 1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar3) {
                *piVar13 = *piVar13 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          uStack_158 = uVar16;
          FUN_003ac8fc(alStack_130,&uStack_158,alStack_130 + 1);
          if ((uVar16 & 1) != 0) {
            FUN_0055293c(uVar16);
          }
        }
      }
      else if (*(int *)(param_1 + 0xac) == 5) {
        uVar16 = *(ulong *)(param_1 + 0xa0);
        if ((uVar16 & 1) != 0) {
          piVar13 = (int *)(uVar16 - 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar3) {
              *piVar13 = *piVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_148 = uVar16;
        FUN_003ac8fc(alStack_130,&uStack_148,alStack_130 + 1);
        if ((uVar16 & 1) != 0) {
          FUN_0055293c(uVar16);
        }
      }
      else {
        if (*(int *)(param_1 + 0xac) != 0) {
          uVar9 = 0x24a;
          goto LAB_003ad208;
        }
        *(undefined4 *)(param_1 + 0xac) = 2;
        if (*(long *)(param_2 + 0x38) != 0) {
          *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 1;
        }
        lVar12 = *(long *)(param_2 + 8);
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar12 + 0x80);
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar12 + 0x90);
        *(long *)(lVar12 + 0x90) = param_1 + 0x80;
        lStack_150 = param_2;
        FUN_003ac6f4(&lStack_150);
      }
    }
    else if ((*(int *)(param_1 + 0xa8) == 3) || (*(int *)(param_1 + 0xac) == 5)) {
      uVar16 = *(ulong *)(param_1 + 0xa0);
      if ((uVar16 & 1) != 0) {
        piVar13 = (int *)(uVar16 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = *piVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_140 = uVar16;
      FUN_003ac8fc(alStack_130,&uStack_140,alStack_130 + 1);
      if ((uVar16 & 1) != 0) {
        FUN_0055293c(uVar16);
      }
    }
    else {
      if (*(int *)(param_1 + 0xa8) != 0) {
        uVar9 = 0x237;
LAB_003ad208:
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                     ,uVar9,2,"assertion failed: %s");
        _abort();
        goto LAB_003ad264;
      }
      *(undefined4 *)(param_1 + 0xa8) = 1;
      if ((*(byte *)(param_2 + 0x10) >> 5 & 1) != 0) {
        if (*(int *)(param_1 + 0xac) != 0) {
          uVar9 = 0x23c;
          goto LAB_003ad208;
        }
        *(undefined4 *)(param_1 + 0xac) = 1;
      }
      FUN_003ac75c(param_1 + 0x60,alStack_130);
      FUN_003ad4b8(param_1,alStack_130 + 1);
    }
    if (alStack_130[0] != 0) {
      lVar12 = *(long *)(param_1 + 0x10);
      func_0x003a6564(lVar12,*(long *)(lVar12 + 0x28) + -1);
      if (lVar12 == *(long *)(param_1 + 0x18)) {
        uStack_160 = 4;
        FUN_003ac8fc(alStack_130,&uStack_160,alStack_130 + 1);
      }
      else {
LAB_003ad17c:
        FUN_003ac7b0(alStack_130,alStack_130 + 1);
      }
    }
  }
  else {
    if ((bVar1 & 0x3f) != 0) {
      uVar9 = 0x1ff;
      goto LAB_003ad208;
    }
    uVar16 = *(ulong *)(*(long *)(param_2 + 8) + 0x98);
    if ((uVar16 & 1) != 0) {
      piVar13 = (int *)(uVar16 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar3) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_138 = uVar16;
    FUN_003ad2f4(param_1,&uStack_138);
    if ((uVar16 & 1) != 0) {
      FUN_0055293c(uVar16);
    }
    lVar12 = *(long *)(param_1 + 0x10);
    func_0x003a6564(lVar12,*(long *)(lVar12 + 0x28) + -1);
    if (lVar12 != *(long *)(param_1 + 0x18)) goto LAB_003ad17c;
    FUN_003ac84c(alStack_130,alStack_130 + 1);
  }
  FUN_003aca08(alStack_130 + 1);
  FUN_003ac6f4(alStack_130);
  *ppuVar8 = puVar20;
  *ppuVar7 = puVar19;
  *ppuVar6 = puVar18;
  *ppuVar5 = puVar17;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
code_r0x003ad260:
  _abort();
LAB_003ad264:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x3ad268);
  (*pcVar4)();
}



/* Entry: 003ad2f4; end: 003ad4b7;  */

void FUN_003ad2f4(long param_1,ulong *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  qword qVar10;
  long *plVar11;
  ulong uStack_30;
  ulong uStack_28;
  
  uVar4 = *(ulong *)(param_1 + 0xa0);
  uVar8 = *param_2;
  if (uVar8 != uVar4) {
    if ((uVar8 & 1) != 0) {
      piVar9 = (int *)(uVar8 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = *piVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar8 = *param_2;
    }
    *(ulong *)(param_1 + 0xa0) = uVar8;
    if ((uVar4 & 1) != 0) {
      FUN_0055293c();
    }
  }
  (**(code **)(**(long **)(param_1 + 0x58) + 8))();
  *(undefined ***)(param_1 + 0x58) = &PTR_PTR_00afa4e0;
  (**(code **)(PTR_PTR_00afa4e0 + 8))();
  iVar1 = *(int *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa8) = 3;
  if (iVar1 == 1) {
    if (*(int *)(param_1 + 0xac) == 1) {
      *(undefined4 *)(param_1 + 0xac) = 5;
    }
    pcVar5 = segment_command_00000020.segname + 8;
    __Znwm();
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5[4] = '\0';
    pcVar5[5] = '\0';
    pcVar5[6] = '\0';
    pcVar5[7] = '\0';
    *(code **)(pcVar5 + 8) = FUN_003afc7c;
    *(char **)(pcVar5 + 0x10) = pcVar5;
    *(qword *)(pcVar5 + 0x18) = 0;
    qVar10 = *(qword *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(qword *)(pcVar5 + 0x20) = qVar10;
    *(long *)(pcVar5 + 0x28) = param_1;
    plVar11 = *(long **)(param_1 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uStack_28 = *(ulong *)(param_1 + 0xa0);
    if ((uStack_28 & 1) != 0) {
      piVar9 = (int *)(uStack_28 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = *piVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003bb88c(uVar6,pcVar5,&uStack_28,"cancel pending batch");
    if ((uStack_28 & 1) != 0) {
      FUN_0055293c();
    }
  }
  piVar9 = *(int **)(param_1 + 0x70);
  if ((piVar9 != (int *)0x0) && (*piVar9 - 5U < 3)) {
    *piVar9 = 8;
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uVar7 = *(undefined8 *)(piVar9 + 2);
    piVar9[2] = 0;
    piVar9[3] = 0;
    uStack_30 = *param_2;
    if ((uStack_30 & 1) != 0) {
      piVar9 = (int *)(uStack_30 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = *piVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003bb88c(uVar6,uVar7,&uStack_30,"propagate cancellation");
    if ((uStack_30 & 1) != 0) {
      FUN_0055293c();
    }
  }
  return;
}



/* Entry: 003ad4b8; end: 003ad643;  */

void FUN_003ad4b8(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined ***pppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  char *pcVar11;
  qword *pqVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined4 *puVar18;
  uint *puVar19;
  undefined8 extraout_x8;
  int *piVar20;
  long *plVar21;
  undefined8 *puVar22;
  qword qVar23;
  ulong uStack_128;
  qword *pqStack_120;
  qword *pqStack_118;
  qword *pqStack_110;
  qword *pqStack_108;
  qword aqStack_100 [3];
  undefined1 uStack_e1;
  ulong uStack_e0;
  qword *pqStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  ulong uStack_c0;
  qword *pqStack_b8;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  undefined ***pppuStack_60;
  undefined8 auStack_58 [4];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  if (*(int *)(param_1 + 0xa8) != 1) {
    func_0x00773698();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x3ad5e4);
    (*pcVar5)();
  }
  plVar21 = *(long **)(*(long *)(param_1 + 0x18) + 8);
  FUN_003afdb4(auStack_58,param_1,param_2);
  uVar14 = **(undefined8 **)(*(long *)(param_1 + 0x60) + 8);
  ppuStack_78 = &PTR_FUN_009df8e0;
  pppuStack_60 = &ppuStack_78;
  lStack_70 = param_1;
  (**(code **)(*plVar21 + 8))
            (&ppuStack_80,plVar21,uVar14,*(undefined8 *)(param_1 + 0x50),&ppuStack_78);
  iVar13 = (int)uVar14;
  (**(code **)(**(long **)(param_1 + 0x58) + 8))();
  *(undefined ***)(param_1 + 0x58) = ppuStack_80;
  ppuStack_80 = &PTR_PTR_00afa4e0;
  (**(code **)(PTR_PTR_00afa4e0 + 8))();
  if (pppuStack_60 == &ppuStack_78) {
    lVar17 = 4;
    pppuVar6 = &ppuStack_78;
LAB_003ad594:
    (*(code *)(*pppuVar6)[lVar17])();
  }
  else if (pppuStack_60 != (undefined ***)0x0) {
    lVar17 = 5;
    pppuVar6 = pppuStack_60;
    goto LAB_003ad594;
  }
  FUN_003ad644(auStack_58);
  puVar7 = auStack_58;
  FUN_003afe10();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_003afe10(auStack_58);
  __Unwind_Resume();
  __Unwind_Resume();
  if (*(char *)((long)puVar7 + 0x19) != '\0') {
    *(undefined1 *)(puVar7 + 3) = 0;
    lVar17 = puVar7[1];
    plVar21 = *(long **)(lVar17 + 0x50);
    if (plVar21 != (long *)0x0) {
      piVar20 = *(int **)(lVar17 + 0x70);
      if (*piVar20 != 7) {
        if (*piVar20 != 6) goto LAB_003ad738;
        *piVar20 = 7;
        puVar8 = *(undefined8 **)(piVar20 + 0xe);
        *puVar8 = *(undefined8 *)(piVar20 + 0xc);
        *(undefined1 *)(puVar8 + 1) = 1;
        if (*(char *)((long)puVar8 + 9) != '\0') {
          *(undefined1 *)((long)puVar8 + 9) = 0;
          puVar8 = puVar7;
          FUN_003d3424();
          (**(code **)(*(long *)*puVar8 + 0x18))();
          lVar17 = puVar7[1];
          plVar21 = *(long **)(lVar17 + 0x50);
        }
      }
      if ((char)plVar21[1] == '\0') {
        *(undefined1 *)((long)plVar21 + 9) = 1;
      }
      else {
        puVar18 = *(undefined4 **)(lVar17 + 0x70);
        if (*(long *)(puVar18 + 0xc) != *plVar21) {
          FUN_0036a260();
          puVar18 = *(undefined4 **)(puVar7[1] + 0x70);
        }
        *puVar18 = 8;
        uVar14 = puVar7[2];
        uVar15 = *(undefined8 *)(puVar18 + 2);
        *(undefined8 *)(puVar18 + 2) = 0;
        uStack_c0 = 0;
        FUN_003adfa8(uVar14,uVar15,&uStack_c0,"wake_inside_combiner:recv_initial_metadata_ready");
        iVar13 = (int)uVar15;
        if ((uStack_c0 & 1) != 0) {
          FUN_0055293c();
        }
      }
      lVar17 = puVar7[1];
    }
LAB_003ad738:
    if ((*(uint *)(lVar17 + 0xac) & 0xfffffffe) == 4) {
      return;
    }
    iVar1 = *(int *)(lVar17 + 0xa8);
    if (1 < iVar1 - 1U) {
      if (iVar1 != 0 && iVar1 != 3 || *(uint *)(lVar17 + 0xac) != 3) {
        return;
      }
      *(undefined4 *)(lVar17 + 0xac) = 4;
      uVar14 = puVar7[2];
      uVar15 = *(undefined8 *)(lVar17 + 0x78);
      *(undefined8 *)(lVar17 + 0x78) = 0;
      uStack_128 = 0;
      FUN_003adfa8(uVar14,uVar15,&uStack_128,"wake_inside_combiner:recv_trailing_ready:2");
      if ((uStack_128 & 1) == 0) {
        return;
      }
      FUN_0055293c();
      return;
    }
    puVar8 = *(undefined8 **)(lVar17 + 0x58);
    (**(code **)*puVar8)();
    if (iVar13 != 1) {
      return;
    }
    lVar17 = puVar7[1];
    if (*(int *)(lVar17 + 0xac) == 3) {
      puVar22 = *(undefined8 **)(lVar17 + 0x68);
      if (puVar22 != puVar8) {
        FUN_0036a260(puVar22,puVar8);
        lVar17 = puVar7[1];
      }
      *(undefined4 *)(lVar17 + 0xac) = 4;
      uVar14 = puVar7[2];
      uVar15 = *(undefined8 *)(lVar17 + 0x78);
      *(undefined8 *)(lVar17 + 0x78) = 0;
      puStack_c8 = (undefined8 *)0x0;
      FUN_003adfa8(uVar14,uVar15,&puStack_c8,"wake_inside_combiner:recv_trailing_ready:1");
      puVar9 = puStack_c8;
      if (((ulong)puStack_c8 & 1) != 0) {
        FUN_0055293c();
      }
      puVar19 = *(uint **)(puVar7[1] + 0x70);
      if (puVar19 != (uint *)0x0) {
        uVar2 = *puVar19;
        if (uVar2 < 2) {
          *puVar19 = 2;
        }
        else if (uVar2 == 5) {
          *puVar19 = 8;
          uVar14 = puVar7[2];
          uVar15 = *(undefined8 *)(puVar19 + 2);
          puVar19[2] = 0;
          puVar19[3] = 0;
          uStack_d0 = 4;
          FUN_003adfa8(uVar14,uVar15,&uStack_d0,"wake_inside_combiner:recv_initial_metadata_ready");
          puVar9 = &uStack_d0;
          FUN_0033c494();
        }
        else if (uVar2 == 2) {
          _abort();
          goto LAB_003ad848;
        }
      }
      if (puVar22 == puVar8) goto LAB_003adb9c;
    }
    else {
LAB_003ad848:
      if (*(int *)(puVar8 + 0x31) == 0) goto LAB_003adbf0;
      aqStack_100[1] = 0;
      aqStack_100[2] = 0;
      aqStack_100[0] = 0;
      FUN_003b646c(&uStack_e0,2,"early return from promise based filter",0x26,&uStack_e1,aqStack_100
                  );
      FUN_003be104(&pqStack_d8,&uStack_e0,3,(long)*(int *)(puVar8 + 0x31));
      if ((uStack_e0 & 1) != 0) {
        FUN_0055293c();
      }
      pqStack_b8 = aqStack_100;
      FUN_0033d548(&pqStack_b8);
      if (*(char *)((long)puVar8 + 1) < '\0') {
        pqStack_108 = pqStack_d8;
        if (((ulong)pqStack_d8 & 1) != 0) {
          piVar20 = (int *)((long)pqStack_d8 + -1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar4) {
              *piVar20 = *piVar20 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (puVar8[0x26] == 0) {
          lVar17 = (long)puVar8 + 0x139;
          uVar16 = (ulong)*(byte *)(puVar8 + 0x27);
        }
        else {
          uVar16 = puVar8[0x27];
          lVar17 = puVar8[0x28];
        }
        FUN_003be254(&pqStack_b8,&pqStack_108,5,lVar17,uVar16);
        pqVar12 = pqStack_d8;
        if (pqStack_b8 == pqStack_d8) {
LAB_003ad92c:
          if (((ulong)pqVar12 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          pqStack_d8 = pqStack_b8;
          pqStack_b8 = (qword *)(segment_command_00000020.segname + 0xe);
          if (((ulong)pqVar12 & 1) != 0) {
            FUN_0055293c();
            pqVar12 = pqStack_b8;
            goto LAB_003ad92c;
          }
        }
        if (((ulong)pqStack_108 & 1) != 0) {
          FUN_0055293c();
        }
      }
      lVar17 = puVar7[1];
      puVar10 = *(undefined1 **)(lVar17 + 0xa0);
      if (pqStack_d8 != (qword *)puVar10) {
        if (((ulong)pqStack_d8 & 1) != 0) {
          piVar20 = (int *)((long)pqStack_d8 + -1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar4) {
              *piVar20 = *piVar20 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        *(qword **)(lVar17 + 0xa0) = pqStack_d8;
        if (((ulong)puVar10 & 1) != 0) {
          FUN_0055293c();
        }
      }
      lVar17 = puVar7[1];
      puVar19 = *(uint **)(lVar17 + 0x70);
      if (puVar19 != (uint *)0x0) {
        uVar2 = *puVar19;
        if (uVar2 - 5 < 3) {
          *puVar19 = 8;
          uVar14 = puVar7[2];
          uVar15 = *(undefined8 *)(puVar19 + 2);
          puVar19[2] = 0;
          puVar19[3] = 0;
          pqStack_110 = pqStack_d8;
          if (((ulong)pqStack_d8 & 1) != 0) {
            piVar20 = (int *)((long)pqStack_d8 + -1);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
              if (bVar4) {
                *piVar20 = *piVar20 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          FUN_003adfa8(uVar14,uVar15,&pqStack_110,"wake_inside_combiner:recv_initial_metadata_ready"
                      );
          FUN_0033c494(&pqStack_110);
          lVar17 = puVar7[1];
        }
        else if (uVar2 < 2) {
          *puVar19 = 2;
        }
        else if (uVar2 == 2) goto LAB_003adc1c;
      }
      if (*(int *)(lVar17 + 0xa8) == 1) {
        *(undefined4 *)(lVar17 + 0xa8) = 3;
        pqStack_118 = pqStack_d8;
        if (((ulong)pqStack_d8 & 1) != 0) {
          piVar20 = (int *)((long)pqStack_d8 + -1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar4) {
              *piVar20 = *piVar20 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_003ac8fc(lVar17 + 0x60,&pqStack_118,puVar7[2]);
        if (((ulong)pqStack_118 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        if ((*(uint *)(lVar17 + 0xac) & 0xfffffffd) != 0) goto LAB_003adbf4;
        uVar14 = *(undefined8 *)(lVar17 + 0x28);
        pqStack_120 = pqStack_d8;
        if (((ulong)pqStack_d8 & 1) != 0) {
          piVar20 = (int *)((long)pqStack_d8 + -1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar4) {
              *piVar20 = *piVar20 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_003bbb7c(uVar14,&pqStack_120);
        if (((ulong)pqStack_120 & 1) != 0) {
          FUN_0055293c();
        }
        qVar23 = *(qword *)(puVar7[1] + 0x28);
        pcVar11 = segment_command_00000020.segname + 8;
        FUN_00338c74();
        *(code **)pcVar11 = FUN_003afe04;
        *(qword *)(pcVar11 + 8) = qVar23;
        pqVar12 = (qword *)(pcVar11 + 0x10);
        *(code **)(pcVar11 + 0x18) = FUN_0033df34;
        *(char **)(pcVar11 + 0x20) = pcVar11;
        *(undefined8 *)(pcVar11 + 0x28) = 0;
        FUN_00400bf0();
        pqVar12[7] = 1;
        *(byte *)(pqVar12 + 2) = (byte)pqVar12[2] | 0x40;
        qVar23 = pqVar12[1];
        puVar10 = *(undefined1 **)(qVar23 + 0x98);
        pqStack_b8 = pqVar12;
        if (pqStack_d8 != (qword *)puVar10) {
          if (((ulong)pqStack_d8 & 1) != 0) {
            piVar20 = (int *)((long)pqStack_d8 + -1);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
              if (bVar4) {
                *piVar20 = *piVar20 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          *(qword **)(qVar23 + 0x98) = pqStack_d8;
          if (((ulong)puVar10 & 1) != 0) {
            FUN_0055293c();
          }
        }
        FUN_003ac7b0(&pqStack_b8,puVar7[2]);
        FUN_003ac6f4(&pqStack_b8);
      }
      *(undefined4 *)(puVar7[1] + 0xac) = 5;
      if (((ulong)pqStack_d8 & 1) != 0) {
        FUN_0055293c();
      }
    }
    FUN_0036d7cc();
    puVar9 = puVar8;
LAB_003adb9c:
    FUN_003d3424(*puVar7);
    *puVar9 = extraout_x8;
    *(undefined1 *)((long)puVar7 + 0x19) = 0;
    lVar17 = puVar7[1];
    (**(code **)(**(long **)(lVar17 + 0x58) + 8))();
    *(undefined ***)(lVar17 + 0x58) = &PTR_PTR_00afa4e0;
    (**(code **)(PTR_PTR_00afa4e0 + 8))();
    return;
  }
  func_0x007736cc();
LAB_003adbf0:
  func_0x00773700();
LAB_003adbf4:
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
               ,0x188,2,"assertion failed: %s");
LAB_003adc1c:
  _abort();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x3adc24);
  (*pcVar5)();
}



/* Entry: 003ad644; end: 003add13;  */

void FUN_003ad644(undefined8 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  char *pcVar10;
  qword *pqVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 extraout_x8;
  long *plVar17;
  int *piVar18;
  undefined8 *puVar19;
  qword qVar20;
  ulong uStack_a8;
  qword *pqStack_a0;
  qword *pqStack_98;
  qword *pqStack_90;
  qword *pqStack_88;
  qword aqStack_80 [3];
  undefined1 uStack_61;
  ulong uStack_60;
  qword *pqStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  ulong uStack_40;
  qword *pqStack_38;
  
  if (*(char *)((long)param_1 + 0x19) != '\0') {
    *(undefined1 *)(param_1 + 3) = 0;
    lVar14 = param_1[1];
    plVar17 = *(long **)(lVar14 + 0x50);
    if (plVar17 != (long *)0x0) {
      piVar18 = *(int **)(lVar14 + 0x70);
      if (*piVar18 != 7) {
        if (*piVar18 != 6) goto LAB_003ad738;
        *piVar18 = 7;
        puVar7 = *(undefined8 **)(piVar18 + 0xe);
        *puVar7 = *(undefined8 *)(piVar18 + 0xc);
        *(undefined1 *)(puVar7 + 1) = 1;
        if (*(char *)((long)puVar7 + 9) != '\0') {
          *(undefined1 *)((long)puVar7 + 9) = 0;
          puVar7 = param_1;
          FUN_003d3424();
          (**(code **)(*(long *)*puVar7 + 0x18))();
          lVar14 = param_1[1];
          plVar17 = *(long **)(lVar14 + 0x50);
        }
      }
      if ((char)plVar17[1] == '\0') {
        *(undefined1 *)((long)plVar17 + 9) = 1;
      }
      else {
        puVar15 = *(undefined4 **)(lVar14 + 0x70);
        if (*(long *)(puVar15 + 0xc) != *plVar17) {
          FUN_0036a260();
          puVar15 = *(undefined4 **)(param_1[1] + 0x70);
        }
        *puVar15 = 8;
        uVar6 = param_1[2];
        uVar12 = *(undefined8 *)(puVar15 + 2);
        *(undefined8 *)(puVar15 + 2) = 0;
        uStack_40 = 0;
        FUN_003adfa8(uVar6,uVar12,&uStack_40,"wake_inside_combiner:recv_initial_metadata_ready");
        param_2 = (int)uVar12;
        if ((uStack_40 & 1) != 0) {
          FUN_0055293c();
        }
      }
      lVar14 = param_1[1];
    }
LAB_003ad738:
    if ((*(uint *)(lVar14 + 0xac) & 0xfffffffe) == 4) {
      return;
    }
    iVar1 = *(int *)(lVar14 + 0xa8);
    if (1 < iVar1 - 1U) {
      if (iVar1 != 0 && iVar1 != 3 || *(uint *)(lVar14 + 0xac) != 3) {
        return;
      }
      *(undefined4 *)(lVar14 + 0xac) = 4;
      uVar6 = param_1[2];
      uVar12 = *(undefined8 *)(lVar14 + 0x78);
      *(undefined8 *)(lVar14 + 0x78) = 0;
      uStack_a8 = 0;
      FUN_003adfa8(uVar6,uVar12,&uStack_a8,"wake_inside_combiner:recv_trailing_ready:2");
      if ((uStack_a8 & 1) == 0) {
        return;
      }
      FUN_0055293c();
      return;
    }
    puVar7 = *(undefined8 **)(lVar14 + 0x58);
    (**(code **)*puVar7)();
    if (param_2 != 1) {
      return;
    }
    lVar14 = param_1[1];
    if (*(int *)(lVar14 + 0xac) == 3) {
      puVar19 = *(undefined8 **)(lVar14 + 0x68);
      if (puVar19 != puVar7) {
        FUN_0036a260(puVar19,puVar7);
        lVar14 = param_1[1];
      }
      *(undefined4 *)(lVar14 + 0xac) = 4;
      uVar6 = param_1[2];
      uVar12 = *(undefined8 *)(lVar14 + 0x78);
      *(undefined8 *)(lVar14 + 0x78) = 0;
      puStack_48 = (undefined8 *)0x0;
      FUN_003adfa8(uVar6,uVar12,&puStack_48,"wake_inside_combiner:recv_trailing_ready:1");
      puVar8 = puStack_48;
      if (((ulong)puStack_48 & 1) != 0) {
        FUN_0055293c();
      }
      puVar16 = *(uint **)(param_1[1] + 0x70);
      if (puVar16 != (uint *)0x0) {
        uVar2 = *puVar16;
        if (uVar2 < 2) {
          *puVar16 = 2;
        }
        else if (uVar2 == 5) {
          *puVar16 = 8;
          uVar6 = param_1[2];
          uVar12 = *(undefined8 *)(puVar16 + 2);
          puVar16[2] = 0;
          puVar16[3] = 0;
          uStack_50 = 4;
          FUN_003adfa8(uVar6,uVar12,&uStack_50,"wake_inside_combiner:recv_initial_metadata_ready");
          puVar8 = &uStack_50;
          FUN_0033c494();
        }
        else if (uVar2 == 2) {
          _abort();
          goto LAB_003ad848;
        }
      }
      if (puVar19 == puVar7) goto LAB_003adb9c;
    }
    else {
LAB_003ad848:
      if (*(int *)(puVar7 + 0x31) == 0) goto LAB_003adbf0;
      aqStack_80[1] = 0;
      aqStack_80[2] = 0;
      aqStack_80[0] = 0;
      FUN_003b646c(&uStack_60,2,"early return from promise based filter",0x26,&uStack_61,aqStack_80)
      ;
      FUN_003be104(&pqStack_58,&uStack_60,3,(long)*(int *)(puVar7 + 0x31));
      if ((uStack_60 & 1) != 0) {
        FUN_0055293c();
      }
      pqStack_38 = aqStack_80;
      FUN_0033d548(&pqStack_38);
      if (*(char *)((long)puVar7 + 1) < '\0') {
        pqStack_88 = pqStack_58;
        if (((ulong)pqStack_58 & 1) != 0) {
          piVar18 = (int *)((long)pqStack_58 + -1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar4) {
              *piVar18 = *piVar18 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (puVar7[0x26] == 0) {
          lVar14 = (long)puVar7 + 0x139;
          uVar13 = (ulong)*(byte *)(puVar7 + 0x27);
        }
        else {
          uVar13 = puVar7[0x27];
          lVar14 = puVar7[0x28];
        }
        FUN_003be254(&pqStack_38,&pqStack_88,5,lVar14,uVar13);
        pqVar11 = pqStack_58;
        if (pqStack_38 == pqStack_58) {
LAB_003ad92c:
          if (((ulong)pqVar11 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          pqStack_58 = pqStack_38;
          pqStack_38 = (qword *)(segment_command_00000020.segname + 0xe);
          if (((ulong)pqVar11 & 1) != 0) {
            FUN_0055293c();
            pqVar11 = pqStack_38;
            goto LAB_003ad92c;
          }
        }
        if (((ulong)pqStack_88 & 1) != 0) {
          FUN_0055293c();
        }
      }
      lVar14 = param_1[1];
      puVar9 = *(undefined1 **)(lVar14 + 0xa0);
      if (pqStack_58 != (qword *)puVar9) {
        if (((ulong)pqStack_58 & 1) != 0) {
          piVar18 = (int *)((long)pqStack_58 + -1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar4) {
              *piVar18 = *piVar18 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        *(qword **)(lVar14 + 0xa0) = pqStack_58;
        if (((ulong)puVar9 & 1) != 0) {
          FUN_0055293c();
        }
      }
      lVar14 = param_1[1];
      puVar16 = *(uint **)(lVar14 + 0x70);
      if (puVar16 != (uint *)0x0) {
        uVar2 = *puVar16;
        if (uVar2 - 5 < 3) {
          *puVar16 = 8;
          uVar6 = param_1[2];
          uVar12 = *(undefined8 *)(puVar16 + 2);
          puVar16[2] = 0;
          puVar16[3] = 0;
          pqStack_90 = pqStack_58;
          if (((ulong)pqStack_58 & 1) != 0) {
            piVar18 = (int *)((long)pqStack_58 + -1);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar4) {
                *piVar18 = *piVar18 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          FUN_003adfa8(uVar6,uVar12,&pqStack_90,"wake_inside_combiner:recv_initial_metadata_ready");
          FUN_0033c494(&pqStack_90);
          lVar14 = param_1[1];
        }
        else if (uVar2 < 2) {
          *puVar16 = 2;
        }
        else if (uVar2 == 2) goto LAB_003adc1c;
      }
      if (*(int *)(lVar14 + 0xa8) == 1) {
        *(undefined4 *)(lVar14 + 0xa8) = 3;
        pqStack_98 = pqStack_58;
        if (((ulong)pqStack_58 & 1) != 0) {
          piVar18 = (int *)((long)pqStack_58 + -1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar4) {
              *piVar18 = *piVar18 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_003ac8fc(lVar14 + 0x60,&pqStack_98,param_1[2]);
        if (((ulong)pqStack_98 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        if ((*(uint *)(lVar14 + 0xac) & 0xfffffffd) != 0) goto LAB_003adbf4;
        uVar6 = *(undefined8 *)(lVar14 + 0x28);
        pqStack_a0 = pqStack_58;
        if (((ulong)pqStack_58 & 1) != 0) {
          piVar18 = (int *)((long)pqStack_58 + -1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar4) {
              *piVar18 = *piVar18 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_003bbb7c(uVar6,&pqStack_a0);
        if (((ulong)pqStack_a0 & 1) != 0) {
          FUN_0055293c();
        }
        qVar20 = *(qword *)(param_1[1] + 0x28);
        pcVar10 = segment_command_00000020.segname + 8;
        FUN_00338c74();
        *(code **)pcVar10 = FUN_003afe04;
        *(qword *)(pcVar10 + 8) = qVar20;
        pqVar11 = (qword *)(pcVar10 + 0x10);
        *(code **)(pcVar10 + 0x18) = FUN_0033df34;
        *(char **)(pcVar10 + 0x20) = pcVar10;
        *(undefined8 *)(pcVar10 + 0x28) = 0;
        FUN_00400bf0();
        pqVar11[7] = 1;
        *(byte *)(pqVar11 + 2) = (byte)pqVar11[2] | 0x40;
        qVar20 = pqVar11[1];
        puVar9 = *(undefined1 **)(qVar20 + 0x98);
        pqStack_38 = pqVar11;
        if (pqStack_58 != (qword *)puVar9) {
          if (((ulong)pqStack_58 & 1) != 0) {
            piVar18 = (int *)((long)pqStack_58 + -1);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar4) {
                *piVar18 = *piVar18 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          *(qword **)(qVar20 + 0x98) = pqStack_58;
          if (((ulong)puVar9 & 1) != 0) {
            FUN_0055293c();
          }
        }
        FUN_003ac7b0(&pqStack_38,param_1[2]);
        FUN_003ac6f4(&pqStack_38);
      }
      *(undefined4 *)(param_1[1] + 0xac) = 5;
      if (((ulong)pqStack_58 & 1) != 0) {
        FUN_0055293c();
      }
    }
    FUN_0036d7cc();
    puVar8 = puVar7;
LAB_003adb9c:
    FUN_003d3424(*param_1);
    *puVar8 = extraout_x8;
    *(undefined1 *)((long)param_1 + 0x19) = 0;
    lVar14 = param_1[1];
    (**(code **)(**(long **)(lVar14 + 0x58) + 8))();
    *(undefined ***)(lVar14 + 0x58) = &PTR_PTR_00afa4e0;
    (**(code **)(PTR_PTR_00afa4e0 + 8))();
    return;
  }
  func_0x007736cc();
LAB_003adbf0:
  func_0x00773700();
LAB_003adbf4:
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
               ,0x188,2,"assertion failed: %s");
LAB_003adc1c:
  _abort();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x3adc24);
  (*pcVar5)();
}



/* Entry: 003add14; end: 003adfa7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003add14(long param_1,ulong *param_2,ulong *param_3,char *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong *puVar10;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  long *plVar11;
  ulong uVar12;
  int *piVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong uStack_168;
  char *pcStack_160;
  ulong *puStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  ulong uStack_130;
  ulong auStack_128 [4];
  undefined8 uStack_108;
  long lStack_70;
  long lStack_68;
  
  puVar10 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar4 = &PTR___tlv_bootstrap_00b2c390;
  (*(code *)PTR___tlv_bootstrap_00b2c390)(*(undefined8 *)(param_1 + 0x20));
  puVar16 = *ppuVar4;
  *ppuVar4 = extraout_x8;
  ppuVar5 = &PTR___tlv_bootstrap_00b2c3a8;
  (*(code *)PTR___tlv_bootstrap_00b2c3a8)(*(undefined8 *)(param_1 + 0x40));
  puVar17 = *ppuVar5;
  *ppuVar5 = extraout_x8_00;
  ppuVar6 = &PTR___tlv_bootstrap_00b2c3c0;
  (*(code *)PTR___tlv_bootstrap_00b2c3c0)(*(undefined8 *)(param_1 + 0x48));
  puVar18 = *ppuVar6;
  *ppuVar6 = extraout_x8_01;
  ppuVar7 = &PTR___tlv_bootstrap_00b2c3d8;
  (*(code *)PTR___tlv_bootstrap_00b2c3d8)(param_1 + 0x38);
  puVar19 = *ppuVar7;
  *ppuVar7 = extraout_x8_02;
  uVar14 = **(uint **)(param_1 + 0x70);
  if (uVar14 < 9) {
    if (uVar14 == 3) {
      uVar14 = 5;
    }
    else {
      if (uVar14 != 4) {
        _abort();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x3adf48);
        (*pcVar3)();
      }
      uVar14 = 6;
    }
    **(uint **)(param_1 + 0x70) = uVar14;
  }
  auStack_128[1] = 0;
  uStack_108 = 0;
  plVar11 = *(long **)(param_1 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar2) {
      *plVar11 = *plVar11 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar12 = *param_2;
  lStack_70 = param_1;
  if (uVar12 == 0) {
    if ((*(int *)(param_1 + 0xa8) == 3) || (*(int *)(param_1 + 0xac) == 4)) {
      puVar15 = *(undefined4 **)(param_1 + 0x70);
      *puVar15 = 8;
      uVar9 = *(undefined8 *)(puVar15 + 2);
      *(undefined8 *)(puVar15 + 2) = 0;
      uStack_130 = *(ulong *)(param_1 + 0xa0);
      if ((uStack_130 & 1) != 0) {
        piVar13 = (int *)(uStack_130 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar2) {
            *piVar13 = *piVar13 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      param_4 = "propagate cancellation";
      FUN_003adfa8(auStack_128 + 1,uVar9);
      param_3 = puVar10;
      if ((uStack_130 & 1) != 0) {
        FUN_0055293c();
        param_3 = puVar10;
      }
    }
  }
  else {
    puVar15 = *(undefined4 **)(param_1 + 0x70);
    *puVar15 = 8;
    uVar9 = *(undefined8 *)(puVar15 + 2);
    *(undefined8 *)(puVar15 + 2) = 0;
    if ((uVar12 & 1) != 0) {
      piVar13 = (int *)(uVar12 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = *piVar13 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4 = "propagate cancellation";
    param_3 = auStack_128;
    auStack_128[0] = uVar12;
    FUN_003adfa8(auStack_128 + 1,uVar9);
    if ((auStack_128[0] & 1) != 0) {
      FUN_0055293c();
    }
  }
  puVar10 = auStack_128 + 1;
  FUN_003ae024(param_1);
  puVar8 = auStack_128 + 1;
  FUN_003aca08(puVar8);
  *ppuVar7 = puVar19;
  *ppuVar6 = puVar18;
  *ppuVar5 = puVar17;
  *ppuVar4 = puVar16;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar10 != 0) {
    func_0x0040cf10(puVar8);
    FUN_0033c494(auStack_128);
    FUN_003aca08(auStack_128 + 1);
    *ppuVar7 = puVar19;
    *ppuVar6 = puVar18;
    *ppuVar5 = puVar17;
    *ppuVar4 = puVar16;
  }
  __Unwind_Resume(puVar8);
  pcStack_138 = FUN_003adfa8;
  uStack_168 = *param_3;
  if ((uStack_168 & 1) != 0) {
    piVar13 = (int *)(uStack_168 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar2) {
        *piVar13 = *piVar13 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  pcStack_160 = param_4;
  puStack_158 = puVar10;
  ppuStack_150 = ppuVar5;
  ppuStack_148 = ppuVar4;
  puStack_140 = &stack0xfffffffffffffff0;
  FUN_0034accc(puVar8 + 3,&puStack_158,&uStack_168,&pcStack_160);
  if ((uStack_168 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003adfa8; end: 003ae023;  */

void FUN_003adfa8(long param_1,undefined8 param_2,ulong *param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = *param_3;
  if ((uStack_38 & 1) != 0) {
    piVar3 = (int *)(uStack_38 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_30 = param_4;
  uStack_28 = param_2;
  FUN_0034accc(param_1 + 0x18,&uStack_28,&uStack_38,&uStack_30);
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003ae024; end: 003ae0ab;  */

/* WARNING: Removing unreachable block (ram,0x003ae488) */
/* WARNING: Removing unreachable block (ram,0x003ae504) */

undefined1  [16] FUN_003ae024(undefined8 param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 *puVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  char *pcVar8;
  char *pcVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long **pplVar14;
  segment_command *psVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  char *pcVar18;
  long **pplVar19;
  segment_command *psVar20;
  dword *pdVar21;
  undefined8 *extraout_x8;
  long lVar22;
  long extraout_x8_00;
  ulong uVar23;
  int *piVar24;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  undefined *extraout_x8_03;
  undefined *extraout_x8_04;
  undefined8 extraout_x8_05;
  int iVar25;
  undefined4 *puVar26;
  undefined4 *extraout_x9;
  long lVar27;
  long *plVar28;
  undefined *extraout_x9_00;
  undefined *extraout_x9_01;
  undefined *extraout_x9_02;
  undefined *extraout_x9_03;
  undefined4 uVar29;
  uint *puVar30;
  undefined1 *unaff_x20;
  ulong uVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  segment_command asStack_3b0 [2];
  long **pplStack_300;
  long lStack_2f8;
  long *plStack_280;
  long *plStack_278;
  long *aplStack_270 [3];
  undefined8 uStack_258;
  ulong uStack_1c0;
  long lStack_1b8;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  uint uStack_fc;
  long *aplStack_f8 [4];
  long lStack_d8;
  undefined1 *puStack_d0;
  char *pcStack_c8;
  undefined1 ***pppuStack_c0;
  code *pcStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003afdb4(auStack_48);
  FUN_003ad644(auStack_48);
  puVar5 = auStack_48;
  FUN_003afe10();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    auVar36._8_8_ = param_1;
    auVar36._0_8_ = puVar5;
    return auVar36;
  }
  ___stack_chk_fail();
  FUN_003afe10(auStack_48);
  __Unwind_Resume();
  pcStack_58 = FUN_003ae0ac;
  lVar22 = *(long *)(puVar5 + 0xb0);
  puStack_60 = &stack0xfffffffffffffff0;
  if (lVar22 == 0) {
    func_0x00773734();
LAB_003ae1a4:
    func_0x007737d0();
  }
  else {
    unaff_x20 = puVar5;
    if (*(int *)(puVar5 + 0xa8) != 1) goto LAB_003ae1a4;
    **(undefined8 **)(*(long *)(puVar5 + 0x60) + 8) = param_1;
    puVar26 = *(undefined4 **)(puVar5 + 0x70);
    if (puVar26 == (undefined4 *)0x0) {
      if (param_2 == 0) goto LAB_003ae140;
      func_0x00773768();
      lVar22 = extraout_x8_00;
      puVar26 = extraout_x9;
code_r0x003ae128:
      uVar29 = 4;
LAB_003ae134:
      *puVar26 = uVar29;
      *(undefined1 *)(lVar22 + 0x18) = 1;
      goto LAB_003ae140;
    }
    if (param_2 != 0) {
      *(long *)(puVar26 + 0xe) = param_2;
      switch(*puVar26) {
      case 0:
        *puVar26 = 1;
      default:
LAB_003ae140:
        ppuVar10 = &PTR___tlv_bootstrap_00b2c390;
        (*(code *)PTR___tlv_bootstrap_00b2c390)();
        puVar6 = (ulong *)*ppuVar10;
        do {
          uVar23 = *puVar6;
          uVar31 = uVar23 + 0x10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar3) {
            *puVar6 = uVar31;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar6[2] < uVar31) {
          param_1 = 0x10;
          func_0x003d6048(puVar6,0x10);
        }
        else {
          puVar6 = (ulong *)((long)puVar6 + uVar23 + 0x30);
        }
        *puVar6 = (ulong)&PTR_FUN_009df960;
        puVar6[1] = (ulong)puVar5;
        *extraout_x8 = puVar6;
        auVar37._8_8_ = param_1;
        auVar37._0_8_ = puVar6;
        return auVar37;
      case 1:
      case 2:
      case 4:
      case 6:
      case 7:
      case 8:
        goto code_r0x003ae1ac;
      case 3:
        goto code_r0x003ae128;
      case 5:
        uVar29 = 6;
        goto LAB_003ae134;
      }
    }
  }
  func_0x0077379c();
code_r0x003ae1ac:
  _abort();
  ppuStack_80 = &puStack_60;
  pcStack_78 = FUN_003ae1b0;
  lVar22 = *(long *)(puVar5 + 0xb0);
  if (lVar22 == 0) {
    func_0x00773804();
LAB_003ae2ec:
    func_0x00773838();
code_r0x003ae2f0:
    _abort();
    goto LAB_003ae2f4;
  }
  puVar7 = puVar5;
  if (*(int *)(puVar5 + 0xa8) == 1) {
    lVar27 = *(long *)(puVar5 + 0x60);
    if (lVar27 == 0) goto LAB_003ae2ec;
    *(undefined4 *)(puVar5 + 0xa8) = 2;
    if (*(int *)(puVar5 + 0xac) == 1) {
      if (*(long *)(lVar27 + 0x38) != 0) {
        *(long *)(lVar27 + 0x38) = *(long *)(lVar27 + 0x38) + 1;
      }
      lVar22 = *(long *)(lVar27 + 8);
      *(undefined8 *)(puVar5 + 0x68) = *(undefined8 *)(lVar22 + 0x80);
      *(undefined8 *)(puVar5 + 0x78) = *(undefined8 *)(lVar22 + 0x90);
      *(undefined1 **)(lVar22 + 0x90) = puVar5 + 0x80;
      lStack_a8 = lVar27;
      FUN_003ac6f4(&lStack_a8);
      *(undefined4 *)(puVar5 + 0xac) = 2;
      lVar22 = *(long *)(puVar5 + 0xb0);
    }
    puVar7 = (undefined1 *)(*(long *)(lVar22 + 8) + 0x60);
    FUN_003ac7b0(puVar7,*(undefined8 *)(lVar22 + 0x10));
  }
  uVar17 = 0;
  switch(*(undefined4 *)(puVar5 + 0xac)) {
  case 0:
  case 1:
  case 2:
    goto code_r0x003ae2d4;
  case 3:
    break;
  case 4:
    goto code_r0x003ae2f0;
  case 5:
    lVar22 = *(long *)(puVar5 + 0x68);
    FUN_00366e68(lVar22,0);
    FUN_00367130(lVar22 + 0x1f0);
    lVar22 = *(long *)(puVar5 + 0x68);
    uVar31 = *(ulong *)(puVar5 + 0xa0);
    if ((uVar31 & 1) != 0) {
      piVar24 = (int *)(uVar31 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar24,0x10);
        if (bVar3) {
          *piVar24 = *piVar24 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_b0 = uVar31;
    FUN_003ae324(puVar5,lVar22,&uStack_b0);
    if ((uVar31 & 1) != 0) {
      FUN_0055293c(uVar31);
    }
    break;
  default:
LAB_003ae2f4:
    pcVar8 = "return Pending{}";
    pcVar18 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
    ;
    pdVar21 = &section_000002e8.reserved2;
    func_0x00338df0();
    func_0x0040cf10();
    FUN_0033c494(&uStack_b0);
    pcVar9 = pcVar8;
    __Unwind_Resume();
    pcStack_b8 = FUN_003ae324;
    lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
    uStack_fc = 2;
    uStack_118 = 0;
    uStack_110 = 0;
    lStack_108 = 0;
    uStack_120 = *(ulong *)pdVar21;
    if ((uStack_120 & 1) != 0) {
      piVar24 = (int *)(uStack_120 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar24,0x10);
        if (bVar3) {
          *piVar24 = *piVar24 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_d0 = unaff_x20;
    pcStack_c8 = pcVar8;
    pppuStack_c0 = &ppuStack_80;
    FUN_003fb7d8(&uStack_120,*(undefined8 *)(pcVar9 + 0x30),&uStack_fc,&uStack_118,0,0);
    if ((uStack_120 & 1) != 0) {
      FUN_0055293c();
    }
    *(uint *)pcVar18 = *(uint *)pcVar18 | 0x400;
    *(uint *)((long)pcVar18 + 0x188) = uStack_fc;
    if (lStack_108 < 0) {
      FUN_002971d4(&uStack_140,uStack_118,uStack_110);
    }
    else {
      uStack_138 = uStack_110;
      uStack_140 = uStack_118;
      lStack_130 = lStack_108;
    }
    FUN_0037b4bc(aplStack_f8,&uStack_140);
    FUN_0034ce60(pcVar18,aplStack_f8);
    if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_f8[0]) {
      do {
        lVar22 = *aplStack_f8[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(aplStack_f8[0],0x10);
        if (bVar3) {
          *aplStack_f8[0] = lVar22 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar22 + -1 == 0) {
        (*(code *)aplStack_f8[0][1])();
      }
    }
    if (lStack_130 < 0) {
      __ZdlPv(uStack_140);
    }
    uVar1 = *(uint *)pcVar18;
    puVar30 = (uint *)((long)pcVar18 + 8);
    *(uint *)pcVar18 = uVar1 | 0x4000000;
    if ((uVar1 >> 0x1a & 1) == 0) {
      *(uint *)((long)pcVar18 + 0x10) = 0;
      *(uint *)((long)pcVar18 + 0x14) = 0;
      puVar30[0] = 0;
      puVar30[1] = 0;
      *(uint *)((long)pcVar18 + 0x20) = 0;
      *(uint *)((long)pcVar18 + 0x24) = 0;
      *(uint *)((long)pcVar18 + 0x18) = 0;
      *(uint *)((long)pcVar18 + 0x1c) = 0;
    }
    uStack_148 = *(ulong *)pdVar21;
    if ((uStack_148 & 1) != 0) {
      piVar24 = (int *)(uStack_148 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar24,0x10);
        if (bVar3) {
          *piVar24 = *piVar24 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003be004(aplStack_f8,&uStack_148);
    pplVar14 = aplStack_f8;
    FUN_003b02f0(puVar30);
    uVar31 = uStack_148;
    if ((uStack_148 & 1) != 0) {
      FUN_0055293c();
    }
    if (lStack_108 < 0) {
      uVar31 = uStack_118;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
      auVar39._8_8_ = pplVar14;
      auVar39._0_8_ = uVar31;
      return auVar39;
    }
    ___stack_chk_fail();
    if ((int)pplVar14 != 0) {
      func_0x0040cf10();
      FUN_0033c494(&uStack_148);
      if (lStack_108 < 0) {
        __ZdlPv(uStack_118);
      }
    }
    __Unwind_Resume();
    lStack_1b8 = *(long *)PTR____stack_chk_guard_00999f88;
    aplStack_270[0] = (long *)0x0;
    uStack_258 = 0;
    uStack_1c0 = uVar31;
    plVar28 = *(long **)(uVar31 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar3) {
        *plVar28 = *plVar28 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    iVar25 = *(int *)(uVar31 + 0xac);
    if (iVar25 == 5) {
      pplVar19 = *(long ***)(uVar31 + 0x78);
      *(undefined8 *)(uVar31 + 0x78) = 0;
      if (pplVar19 != (long **)0x0) {
        plStack_278 = *pplVar14;
        if (((ulong)plStack_278 & 1) != 0) {
          piVar24 = (int *)((long)plStack_278 + -1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar3) {
              *piVar24 = *piVar24 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_003adfa8(aplStack_270,pplVar19,&plStack_278,"propagate failure");
        if (((ulong)plStack_278 & 1) != 0) {
          FUN_0055293c();
        }
      }
    }
    else {
      plVar28 = *pplVar14;
      if (plVar28 != (long *)0x0) {
        uVar17 = *(undefined8 *)(uVar31 + 0x68);
        if (((ulong)plVar28 & 1) != 0) {
          piVar24 = (int *)((long)plVar28 + -1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar3) {
              *piVar24 = *piVar24 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plStack_280 = plVar28;
        FUN_003ae324(uVar31,uVar17,&plStack_280);
        if (((ulong)plVar28 & 1) != 0) {
          FUN_0055293c(plVar28);
        }
        iVar25 = *(int *)(uVar31 + 0xac);
      }
      if (iVar25 != 2) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                     ,0x34a,2,"assertion failed: %s");
        _abort();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x3ae780);
        (*pcVar4)();
      }
      *(undefined4 *)(uVar31 + 0xac) = 3;
      ppuVar10 = &PTR___tlv_bootstrap_00b2c390;
      (*(code *)PTR___tlv_bootstrap_00b2c390)(*(undefined8 *)(uVar31 + 0x20));
      puVar32 = *ppuVar10;
      *ppuVar10 = extraout_x8_01;
      ppuVar11 = &PTR___tlv_bootstrap_00b2c3a8;
      (*(code *)PTR___tlv_bootstrap_00b2c3a8)(*(undefined8 *)(uVar31 + 0x40));
      puVar33 = *ppuVar11;
      *ppuVar11 = extraout_x8_02;
      ppuVar12 = &PTR___tlv_bootstrap_00b2c3c0;
      (*(code *)PTR___tlv_bootstrap_00b2c3c0)(*(undefined8 *)(uVar31 + 0x48));
      puVar34 = *ppuVar12;
      *ppuVar12 = extraout_x8_03;
      ppuVar13 = &PTR___tlv_bootstrap_00b2c3d8;
      (*(code *)PTR___tlv_bootstrap_00b2c3d8)(uVar31 + 0x38);
      puVar35 = *ppuVar13;
      *ppuVar13 = extraout_x8_04;
      pplVar19 = aplStack_270;
      FUN_003ae024(uVar31);
      *ppuVar13 = puVar35;
      *ppuVar12 = puVar34;
      *ppuVar11 = puVar33;
      *ppuVar10 = puVar32;
    }
    pplVar14 = aplStack_270;
    FUN_003aca08();
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1b8) {
      auVar40._8_8_ = pplVar19;
      auVar40._0_8_ = pplVar14;
      return auVar40;
    }
    ___stack_chk_fail();
    if ((int)pplVar19 != 0) {
      func_0x0040cf10();
      FUN_0033c494(&plStack_280);
      FUN_003aca08(aplStack_270);
    }
    __Unwind_Resume();
    psVar20 = asStack_3b0;
    psVar15 = asStack_3b0;
    lStack_2f8 = *(long *)PTR____stack_chk_guard_00999f88;
    asStack_3b0[0].cmd = 0;
    asStack_3b0[0].cmdsize = 0;
    asStack_3b0[0].vmaddr = 0;
    plVar28 = pplVar14[2];
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar3) {
        *plVar28 = *plVar28 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    ppuVar10 = &PTR___tlv_bootstrap_00b2c390;
    pplStack_300 = pplVar14;
    (*(code *)PTR___tlv_bootstrap_00b2c390)();
    puVar32 = *ppuVar10;
    *ppuVar10 = extraout_x9_00;
    ppuVar11 = &PTR___tlv_bootstrap_00b2c3a8;
    (*(code *)PTR___tlv_bootstrap_00b2c3a8)();
    puVar33 = *ppuVar11;
    *ppuVar11 = extraout_x9_01;
    ppuVar12 = &PTR___tlv_bootstrap_00b2c3c0;
    (*(code *)PTR___tlv_bootstrap_00b2c3c0)();
    puVar34 = *ppuVar12;
    *ppuVar12 = extraout_x9_02;
    ppuVar13 = &PTR___tlv_bootstrap_00b2c3d8;
    (*(code *)PTR___tlv_bootstrap_00b2c3d8)();
    puVar35 = *ppuVar13;
    *ppuVar13 = extraout_x9_03;
    FUN_003ae024(extraout_x8_05,asStack_3b0);
    *ppuVar13 = puVar35;
    *ppuVar12 = puVar34;
    *ppuVar11 = puVar33;
    *ppuVar10 = puVar32;
    FUN_003aca08();
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_2f8) {
      auVar41._8_8_ = psVar20;
      auVar41._0_8_ = psVar15;
      return auVar41;
    }
    ___stack_chk_fail();
    *ppuVar13 = puVar35;
    *ppuVar12 = puVar34;
    *ppuVar11 = puVar33;
    *ppuVar10 = puVar32;
    FUN_003aca08(asStack_3b0);
    __Unwind_Resume();
    puVar16 = (undefined8 *)psVar15;
    FUN_003ac53c();
    *puVar16 = &PTR_FUN_009df7c8;
    puVar16[1] = &PTR_FUN_009df820;
    puVar16[0x14] = 0;
    puVar16[0x13] = 0;
    puVar16[0xb] = &PTR_PTR_00afa4e0;
    puVar16[0xc] = 0;
    puVar16[0xd] = 0;
    puVar16[0xe] = 0;
    puVar16[0x16] = 0;
    puVar16[0x15] = 0;
    *(undefined1 *)(puVar16 + 0x17) = 0;
    if (puVar16[10] != 0) {
      puVar6 = *(ulong **)((long)psVar15 + 0x20);
      do {
        uVar23 = *puVar6;
        uVar31 = uVar23 + 0x20;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar3) {
          *puVar6 = uVar31;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar6[2] < uVar31) {
        psVar20 = &segment_command_00000020;
        func_0x003d6048(puVar6,0x20);
      }
      else {
        puVar6 = (ulong *)((long)puVar6 + uVar23 + 0x30);
      }
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      *(ulong **)((long)psVar15 + 0x68) = puVar6;
    }
    *(code **)((long)psVar15 + 0x80) = FUN_003aea3c;
    *(segment_command **)((long)psVar15 + 0x88) = psVar15;
    *(undefined8 *)((long)psVar15 + 0x90) = 0;
    auVar42._8_8_ = psVar20;
    auVar42._0_8_ = psVar15;
    return auVar42;
  }
  puVar7 = *(undefined1 **)(puVar5 + 0x68);
  uVar17 = 1;
code_r0x003ae2d4:
  auVar38._8_8_ = uVar17;
  auVar38._0_8_ = puVar7;
  return auVar38;
}



/* Entry: 003ae0ac; end: 003ae1af;  */

/* WARNING: Removing unreachable block (ram,0x003ae488) */
/* WARNING: Removing unreachable block (ram,0x003ae504) */

undefined1  [16] FUN_003ae0ac(undefined8 *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long **pplVar12;
  segment_command *psVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  char *pcVar16;
  long **pplVar17;
  segment_command *psVar18;
  dword *pdVar19;
  long lVar20;
  long extraout_x8;
  ulong uVar21;
  int *piVar22;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  undefined *extraout_x8_03;
  undefined8 extraout_x8_04;
  int iVar23;
  undefined4 *puVar24;
  undefined4 *extraout_x9;
  long lVar25;
  long *plVar26;
  undefined *extraout_x9_00;
  undefined *extraout_x9_01;
  undefined *extraout_x9_02;
  undefined *extraout_x9_03;
  undefined4 uVar27;
  uint *puVar28;
  ulong unaff_x20;
  ulong uVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  segment_command asStack_360 [2];
  long **pplStack_2b0;
  long lStack_2a8;
  long *plStack_230;
  long *plStack_228;
  long *aplStack_220 [3];
  undefined8 uStack_208;
  ulong uStack_170;
  long lStack_168;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  uint uStack_ac;
  long *aplStack_a8 [4];
  long lStack_88;
  ulong uStack_80;
  char *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  ulong uStack_60;
  long lStack_58;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  lVar20 = *(long *)(param_2 + 0xb0);
  if (lVar20 == 0) {
    func_0x00773734();
LAB_003ae1a4:
    func_0x007737d0();
  }
  else {
    unaff_x20 = param_2;
    if (*(int *)(param_2 + 0xa8) != 1) goto LAB_003ae1a4;
    **(undefined8 **)(*(long *)(param_2 + 0x60) + 8) = param_3;
    puVar24 = *(undefined4 **)(param_2 + 0x70);
    if (puVar24 == (undefined4 *)0x0) {
      if (param_4 == 0) goto LAB_003ae140;
      func_0x00773768();
      lVar20 = extraout_x8;
      puVar24 = extraout_x9;
code_r0x003ae128:
      uVar27 = 4;
LAB_003ae134:
      *puVar24 = uVar27;
      *(undefined1 *)(lVar20 + 0x18) = 1;
      goto LAB_003ae140;
    }
    if (param_4 != 0) {
      *(long *)(puVar24 + 0xe) = param_4;
      switch(*puVar24) {
      case 0:
        *puVar24 = 1;
      default:
LAB_003ae140:
        ppuVar8 = &PTR___tlv_bootstrap_00b2c390;
        (*(code *)PTR___tlv_bootstrap_00b2c390)();
        puVar5 = (ulong *)*ppuVar8;
        do {
          uVar21 = *puVar5;
          uVar29 = uVar21 + 0x10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar3) {
            *puVar5 = uVar29;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar5[2] < uVar29) {
          param_3 = 0x10;
          func_0x003d6048(puVar5,0x10);
        }
        else {
          puVar5 = (ulong *)((long)puVar5 + uVar21 + 0x30);
        }
        *puVar5 = (ulong)&PTR_FUN_009df960;
        puVar5[1] = param_2;
        *param_1 = puVar5;
        auVar34._8_8_ = param_3;
        auVar34._0_8_ = puVar5;
        return auVar34;
      case 1:
      case 2:
      case 4:
      case 6:
      case 7:
      case 8:
        goto code_r0x003ae1ac;
      case 3:
        goto code_r0x003ae128;
      case 5:
        uVar27 = 6;
        goto LAB_003ae134;
      }
    }
  }
  func_0x0077379c();
code_r0x003ae1ac:
  _abort();
  pcStack_28 = FUN_003ae1b0;
  lVar20 = *(long *)(param_2 + 0xb0);
  puStack_30 = &stack0xfffffffffffffff0;
  if (lVar20 == 0) {
    func_0x00773804();
LAB_003ae2ec:
    func_0x00773838();
code_r0x003ae2f0:
    _abort();
    goto LAB_003ae2f4;
  }
  uVar29 = param_2;
  if (*(int *)(param_2 + 0xa8) == 1) {
    lVar25 = *(long *)(param_2 + 0x60);
    if (lVar25 == 0) goto LAB_003ae2ec;
    *(undefined4 *)(param_2 + 0xa8) = 2;
    if (*(int *)(param_2 + 0xac) == 1) {
      if (*(long *)(lVar25 + 0x38) != 0) {
        *(long *)(lVar25 + 0x38) = *(long *)(lVar25 + 0x38) + 1;
      }
      lVar20 = *(long *)(lVar25 + 8);
      *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(lVar20 + 0x80);
      *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(lVar20 + 0x90);
      *(ulong *)(lVar20 + 0x90) = param_2 + 0x80;
      lStack_58 = lVar25;
      FUN_003ac6f4(&lStack_58);
      *(undefined4 *)(param_2 + 0xac) = 2;
      lVar20 = *(long *)(param_2 + 0xb0);
    }
    uVar29 = *(long *)(lVar20 + 8) + 0x60;
    FUN_003ac7b0(uVar29,*(undefined8 *)(lVar20 + 0x10));
  }
  uVar15 = 0;
  switch(*(undefined4 *)(param_2 + 0xac)) {
  case 0:
  case 1:
  case 2:
    goto code_r0x003ae2d4;
  case 3:
    break;
  case 4:
    goto code_r0x003ae2f0;
  case 5:
    lVar20 = *(long *)(param_2 + 0x68);
    FUN_00366e68(lVar20,0);
    FUN_00367130(lVar20 + 0x1f0);
    lVar20 = *(long *)(param_2 + 0x68);
    uVar29 = *(ulong *)(param_2 + 0xa0);
    if ((uVar29 & 1) != 0) {
      piVar22 = (int *)(uVar29 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar3) {
          *piVar22 = *piVar22 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_60 = uVar29;
    FUN_003ae324(param_2,lVar20,&uStack_60);
    if ((uVar29 & 1) != 0) {
      FUN_0055293c(uVar29);
    }
    break;
  default:
LAB_003ae2f4:
    pcVar6 = "return Pending{}";
    pcVar16 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
    ;
    pdVar19 = &section_000002e8.reserved2;
    func_0x00338df0();
    func_0x0040cf10();
    FUN_0033c494(&uStack_60);
    pcVar7 = pcVar6;
    __Unwind_Resume();
    pcStack_68 = FUN_003ae324;
    lStack_88 = *(long *)PTR____stack_chk_guard_00999f88;
    uStack_ac = 2;
    uStack_c8 = 0;
    uStack_c0 = 0;
    lStack_b8 = 0;
    uStack_d0 = *(ulong *)pdVar19;
    if ((uStack_d0 & 1) != 0) {
      piVar22 = (int *)(uStack_d0 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar3) {
          *piVar22 = *piVar22 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_80 = unaff_x20;
    pcStack_78 = pcVar6;
    ppuStack_70 = &puStack_30;
    FUN_003fb7d8(&uStack_d0,*(undefined8 *)(pcVar7 + 0x30),&uStack_ac,&uStack_c8,0,0);
    if ((uStack_d0 & 1) != 0) {
      FUN_0055293c();
    }
    *(uint *)pcVar16 = *(uint *)pcVar16 | 0x400;
    *(uint *)((long)pcVar16 + 0x188) = uStack_ac;
    if (lStack_b8 < 0) {
      FUN_002971d4(&uStack_f0,uStack_c8,uStack_c0);
    }
    else {
      uStack_e8 = uStack_c0;
      uStack_f0 = uStack_c8;
      lStack_e0 = lStack_b8;
    }
    FUN_0037b4bc(aplStack_a8,&uStack_f0);
    FUN_0034ce60(pcVar16,aplStack_a8);
    if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_a8[0]) {
      do {
        lVar20 = *aplStack_a8[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(aplStack_a8[0],0x10);
        if (bVar3) {
          *aplStack_a8[0] = lVar20 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar20 + -1 == 0) {
        (*(code *)aplStack_a8[0][1])();
      }
    }
    if (lStack_e0 < 0) {
      __ZdlPv(uStack_f0);
    }
    uVar1 = *(uint *)pcVar16;
    puVar28 = (uint *)((long)pcVar16 + 8);
    *(uint *)pcVar16 = uVar1 | 0x4000000;
    if ((uVar1 >> 0x1a & 1) == 0) {
      *(uint *)((long)pcVar16 + 0x10) = 0;
      *(uint *)((long)pcVar16 + 0x14) = 0;
      puVar28[0] = 0;
      puVar28[1] = 0;
      *(uint *)((long)pcVar16 + 0x20) = 0;
      *(uint *)((long)pcVar16 + 0x24) = 0;
      *(uint *)((long)pcVar16 + 0x18) = 0;
      *(uint *)((long)pcVar16 + 0x1c) = 0;
    }
    uStack_f8 = *(ulong *)pdVar19;
    if ((uStack_f8 & 1) != 0) {
      piVar22 = (int *)(uStack_f8 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar3) {
          *piVar22 = *piVar22 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003be004(aplStack_a8,&uStack_f8);
    pplVar12 = aplStack_a8;
    FUN_003b02f0(puVar28);
    uVar29 = uStack_f8;
    if ((uStack_f8 & 1) != 0) {
      FUN_0055293c();
    }
    if (lStack_b8 < 0) {
      uVar29 = uStack_c8;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_88) {
      auVar36._8_8_ = pplVar12;
      auVar36._0_8_ = uVar29;
      return auVar36;
    }
    ___stack_chk_fail();
    if ((int)pplVar12 != 0) {
      func_0x0040cf10();
      FUN_0033c494(&uStack_f8);
      if (lStack_b8 < 0) {
        __ZdlPv(uStack_c8);
      }
    }
    __Unwind_Resume();
    lStack_168 = *(long *)PTR____stack_chk_guard_00999f88;
    aplStack_220[0] = (long *)0x0;
    uStack_208 = 0;
    uStack_170 = uVar29;
    plVar26 = *(long **)(uVar29 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar3) {
        *plVar26 = *plVar26 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    iVar23 = *(int *)(uVar29 + 0xac);
    if (iVar23 == 5) {
      pplVar17 = *(long ***)(uVar29 + 0x78);
      *(undefined8 *)(uVar29 + 0x78) = 0;
      if (pplVar17 != (long **)0x0) {
        plStack_228 = *pplVar12;
        if (((ulong)plStack_228 & 1) != 0) {
          piVar22 = (int *)((long)plStack_228 + -1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar22,0x10);
            if (bVar3) {
              *piVar22 = *piVar22 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_003adfa8(aplStack_220,pplVar17,&plStack_228,"propagate failure");
        if (((ulong)plStack_228 & 1) != 0) {
          FUN_0055293c();
        }
      }
    }
    else {
      plVar26 = *pplVar12;
      if (plVar26 != (long *)0x0) {
        uVar15 = *(undefined8 *)(uVar29 + 0x68);
        if (((ulong)plVar26 & 1) != 0) {
          piVar22 = (int *)((long)plVar26 + -1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar22,0x10);
            if (bVar3) {
              *piVar22 = *piVar22 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plStack_230 = plVar26;
        FUN_003ae324(uVar29,uVar15,&plStack_230);
        if (((ulong)plVar26 & 1) != 0) {
          FUN_0055293c(plVar26);
        }
        iVar23 = *(int *)(uVar29 + 0xac);
      }
      if (iVar23 != 2) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                     ,0x34a,2,"assertion failed: %s");
        _abort();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x3ae780);
        (*pcVar4)();
      }
      *(undefined4 *)(uVar29 + 0xac) = 3;
      ppuVar8 = &PTR___tlv_bootstrap_00b2c390;
      (*(code *)PTR___tlv_bootstrap_00b2c390)(*(undefined8 *)(uVar29 + 0x20));
      puVar30 = *ppuVar8;
      *ppuVar8 = extraout_x8_00;
      ppuVar9 = &PTR___tlv_bootstrap_00b2c3a8;
      (*(code *)PTR___tlv_bootstrap_00b2c3a8)(*(undefined8 *)(uVar29 + 0x40));
      puVar31 = *ppuVar9;
      *ppuVar9 = extraout_x8_01;
      ppuVar10 = &PTR___tlv_bootstrap_00b2c3c0;
      (*(code *)PTR___tlv_bootstrap_00b2c3c0)(*(undefined8 *)(uVar29 + 0x48));
      puVar32 = *ppuVar10;
      *ppuVar10 = extraout_x8_02;
      ppuVar11 = &PTR___tlv_bootstrap_00b2c3d8;
      (*(code *)PTR___tlv_bootstrap_00b2c3d8)(uVar29 + 0x38);
      puVar33 = *ppuVar11;
      *ppuVar11 = extraout_x8_03;
      pplVar17 = aplStack_220;
      FUN_003ae024(uVar29);
      *ppuVar11 = puVar33;
      *ppuVar10 = puVar32;
      *ppuVar9 = puVar31;
      *ppuVar8 = puVar30;
    }
    pplVar12 = aplStack_220;
    FUN_003aca08();
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_168) {
      auVar37._8_8_ = pplVar17;
      auVar37._0_8_ = pplVar12;
      return auVar37;
    }
    ___stack_chk_fail();
    if ((int)pplVar17 != 0) {
      func_0x0040cf10();
      FUN_0033c494(&plStack_230);
      FUN_003aca08(aplStack_220);
    }
    __Unwind_Resume();
    psVar18 = asStack_360;
    psVar13 = asStack_360;
    lStack_2a8 = *(long *)PTR____stack_chk_guard_00999f88;
    asStack_360[0].cmd = 0;
    asStack_360[0].cmdsize = 0;
    asStack_360[0].vmaddr = 0;
    plVar26 = pplVar12[2];
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar3) {
        *plVar26 = *plVar26 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    ppuVar8 = &PTR___tlv_bootstrap_00b2c390;
    pplStack_2b0 = pplVar12;
    (*(code *)PTR___tlv_bootstrap_00b2c390)();
    puVar30 = *ppuVar8;
    *ppuVar8 = extraout_x9_00;
    ppuVar9 = &PTR___tlv_bootstrap_00b2c3a8;
    (*(code *)PTR___tlv_bootstrap_00b2c3a8)();
    puVar31 = *ppuVar9;
    *ppuVar9 = extraout_x9_01;
    ppuVar10 = &PTR___tlv_bootstrap_00b2c3c0;
    (*(code *)PTR___tlv_bootstrap_00b2c3c0)();
    puVar32 = *ppuVar10;
    *ppuVar10 = extraout_x9_02;
    ppuVar11 = &PTR___tlv_bootstrap_00b2c3d8;
    (*(code *)PTR___tlv_bootstrap_00b2c3d8)();
    puVar33 = *ppuVar11;
    *ppuVar11 = extraout_x9_03;
    FUN_003ae024(extraout_x8_04,asStack_360);
    *ppuVar11 = puVar33;
    *ppuVar10 = puVar32;
    *ppuVar9 = puVar31;
    *ppuVar8 = puVar30;
    FUN_003aca08();
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_2a8) {
      auVar38._8_8_ = psVar18;
      auVar38._0_8_ = psVar13;
      return auVar38;
    }
    ___stack_chk_fail();
    *ppuVar11 = puVar33;
    *ppuVar10 = puVar32;
    *ppuVar9 = puVar31;
    *ppuVar8 = puVar30;
    FUN_003aca08(asStack_360);
    __Unwind_Resume();
    puVar14 = (undefined8 *)psVar13;
    FUN_003ac53c();
    *puVar14 = &PTR_FUN_009df7c8;
    puVar14[1] = &PTR_FUN_009df820;
    puVar14[0x14] = 0;
    puVar14[0x13] = 0;
    puVar14[0xb] = &PTR_PTR_00afa4e0;
    puVar14[0xc] = 0;
    puVar14[0xd] = 0;
    puVar14[0xe] = 0;
    puVar14[0x16] = 0;
    puVar14[0x15] = 0;
    *(undefined1 *)(puVar14 + 0x17) = 0;
    if (puVar14[10] != 0) {
      puVar5 = *(ulong **)((long)psVar13 + 0x20);
      do {
        uVar21 = *puVar5;
        uVar29 = uVar21 + 0x20;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *puVar5 = uVar29;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar5[2] < uVar29) {
        psVar18 = &segment_command_00000020;
        func_0x003d6048(puVar5,0x20);
      }
      else {
        puVar5 = (ulong *)((long)puVar5 + uVar21 + 0x30);
      }
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *(ulong **)((long)psVar13 + 0x68) = puVar5;
    }
    *(code **)((long)psVar13 + 0x80) = FUN_003aea3c;
    *(segment_command **)((long)psVar13 + 0x88) = psVar13;
    *(undefined8 *)((long)psVar13 + 0x90) = 0;
    auVar39._8_8_ = psVar18;
    auVar39._0_8_ = psVar13;
    return auVar39;
  }
  uVar29 = *(ulong *)(param_2 + 0x68);
  uVar15 = 1;
code_r0x003ae2d4:
  auVar35._8_8_ = uVar15;
  auVar35._0_8_ = uVar29;
  return auVar35;
}



/* Entry: 003ae1b0; end: 003ae323;  */

/* WARNING: Removing unreachable block (ram,0x003ae488) */
/* WARNING: Removing unreachable block (ram,0x003ae504) */

undefined1  [16] FUN_003ae1b0(long param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  char *pcVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long **pplVar10;
  segment_command *psVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  undefined8 uVar14;
  char *pcVar15;
  long **pplVar16;
  segment_command *psVar17;
  dword *pdVar18;
  long lVar19;
  int *piVar20;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  undefined8 extraout_x8_03;
  ulong uVar21;
  int iVar22;
  long lVar23;
  long *plVar24;
  undefined *extraout_x9;
  undefined *extraout_x9_00;
  undefined *extraout_x9_01;
  undefined *extraout_x9_02;
  uint *puVar25;
  ulong uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  segment_command asStack_340 [2];
  long **pplStack_290;
  long lStack_288;
  long *plStack_210;
  long *plStack_208;
  long *aplStack_200 [3];
  undefined8 uStack_1e8;
  ulong uStack_150;
  long lStack_148;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  uint uStack_8c;
  long *aplStack_88 [4];
  long lStack_68;
  ulong uStack_40;
  long lStack_38;
  
  lVar19 = *(long *)(param_1 + 0xb0);
  if (lVar19 == 0) {
    func_0x00773804();
LAB_003ae2ec:
    func_0x00773838();
code_r0x003ae2f0:
    _abort();
    goto LAB_003ae2f4;
  }
  lVar23 = param_1;
  if (*(int *)(param_1 + 0xa8) == 1) {
    lVar23 = *(long *)(param_1 + 0x60);
    if (lVar23 == 0) goto LAB_003ae2ec;
    *(undefined4 *)(param_1 + 0xa8) = 2;
    if (*(int *)(param_1 + 0xac) == 1) {
      if (*(long *)(lVar23 + 0x38) != 0) {
        *(long *)(lVar23 + 0x38) = *(long *)(lVar23 + 0x38) + 1;
      }
      lVar19 = *(long *)(lVar23 + 8);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar19 + 0x80);
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar19 + 0x90);
      *(long *)(lVar19 + 0x90) = param_1 + 0x80;
      lStack_38 = lVar23;
      FUN_003ac6f4(&lStack_38);
      *(undefined4 *)(param_1 + 0xac) = 2;
      lVar19 = *(long *)(param_1 + 0xb0);
    }
    lVar23 = *(long *)(lVar19 + 8) + 0x60;
    FUN_003ac7b0(lVar23,*(undefined8 *)(lVar19 + 0x10));
  }
  uVar14 = 0;
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 0:
  case 1:
  case 2:
    goto code_r0x003ae2d4;
  case 3:
    break;
  case 4:
    goto code_r0x003ae2f0;
  case 5:
    lVar19 = *(long *)(param_1 + 0x68);
    FUN_00366e68(lVar19,0);
    FUN_00367130(lVar19 + 0x1f0);
    lVar19 = *(long *)(param_1 + 0x68);
    uVar26 = *(ulong *)(param_1 + 0xa0);
    if ((uVar26 & 1) != 0) {
      piVar20 = (int *)(uVar26 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar3) {
          *piVar20 = *piVar20 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_40 = uVar26;
    FUN_003ae324(param_1,lVar19,&uStack_40);
    if ((uVar26 & 1) != 0) {
      FUN_0055293c(uVar26);
    }
    break;
  default:
LAB_003ae2f4:
    pcVar5 = "return Pending{}";
    pcVar15 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
    ;
    pdVar18 = &section_000002e8.reserved2;
    func_0x00338df0();
    func_0x0040cf10();
    FUN_0033c494(&uStack_40);
    __Unwind_Resume();
    lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
    uStack_8c = 2;
    uStack_a8 = 0;
    uStack_a0 = 0;
    lStack_98 = 0;
    uStack_b0 = *(ulong *)pdVar18;
    if ((uStack_b0 & 1) != 0) {
      piVar20 = (int *)(uStack_b0 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar3) {
          *piVar20 = *piVar20 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003fb7d8(&uStack_b0,*(undefined8 *)(pcVar5 + 0x30),&uStack_8c,&uStack_a8,0,0);
    if ((uStack_b0 & 1) != 0) {
      FUN_0055293c();
    }
    *(uint *)pcVar15 = *(uint *)pcVar15 | 0x400;
    *(uint *)((long)pcVar15 + 0x188) = uStack_8c;
    if (lStack_98 < 0) {
      FUN_002971d4(&uStack_d0,uStack_a8,uStack_a0);
    }
    else {
      uStack_c8 = uStack_a0;
      uStack_d0 = uStack_a8;
      lStack_c0 = lStack_98;
    }
    FUN_0037b4bc(aplStack_88,&uStack_d0);
    FUN_0034ce60(pcVar15,aplStack_88);
    if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_88[0]) {
      do {
        lVar19 = *aplStack_88[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(aplStack_88[0],0x10);
        if (bVar3) {
          *aplStack_88[0] = lVar19 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar19 + -1 == 0) {
        (*(code *)aplStack_88[0][1])();
      }
    }
    if (lStack_c0 < 0) {
      __ZdlPv(uStack_d0);
    }
    uVar1 = *(uint *)pcVar15;
    puVar25 = (uint *)((long)pcVar15 + 8);
    *(uint *)pcVar15 = uVar1 | 0x4000000;
    if ((uVar1 >> 0x1a & 1) == 0) {
      *(uint *)((long)pcVar15 + 0x10) = 0;
      *(uint *)((long)pcVar15 + 0x14) = 0;
      puVar25[0] = 0;
      puVar25[1] = 0;
      *(uint *)((long)pcVar15 + 0x20) = 0;
      *(uint *)((long)pcVar15 + 0x24) = 0;
      *(uint *)((long)pcVar15 + 0x18) = 0;
      *(uint *)((long)pcVar15 + 0x1c) = 0;
    }
    uStack_d8 = *(ulong *)pdVar18;
    if ((uStack_d8 & 1) != 0) {
      piVar20 = (int *)(uStack_d8 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar3) {
          *piVar20 = *piVar20 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003be004(aplStack_88,&uStack_d8);
    pplVar10 = aplStack_88;
    FUN_003b02f0(puVar25);
    uVar26 = uStack_d8;
    if ((uStack_d8 & 1) != 0) {
      FUN_0055293c();
    }
    if (lStack_98 < 0) {
      uVar26 = uStack_a8;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
      auVar32._8_8_ = pplVar10;
      auVar32._0_8_ = uVar26;
      return auVar32;
    }
    ___stack_chk_fail();
    if ((int)pplVar10 != 0) {
      func_0x0040cf10();
      FUN_0033c494(&uStack_d8);
      if (lStack_98 < 0) {
        __ZdlPv(uStack_a8);
      }
    }
    __Unwind_Resume();
    lStack_148 = *(long *)PTR____stack_chk_guard_00999f88;
    aplStack_200[0] = (long *)0x0;
    uStack_1e8 = 0;
    uStack_150 = uVar26;
    plVar24 = *(long **)(uVar26 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar3) {
        *plVar24 = *plVar24 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    iVar22 = *(int *)(uVar26 + 0xac);
    if (iVar22 == 5) {
      pplVar16 = *(long ***)(uVar26 + 0x78);
      *(undefined8 *)(uVar26 + 0x78) = 0;
      if (pplVar16 != (long **)0x0) {
        plStack_208 = *pplVar10;
        if (((ulong)plStack_208 & 1) != 0) {
          piVar20 = (int *)((long)plStack_208 + -1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar3) {
              *piVar20 = *piVar20 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_003adfa8(aplStack_200,pplVar16,&plStack_208,"propagate failure");
        if (((ulong)plStack_208 & 1) != 0) {
          FUN_0055293c();
        }
      }
    }
    else {
      plVar24 = *pplVar10;
      if (plVar24 != (long *)0x0) {
        uVar14 = *(undefined8 *)(uVar26 + 0x68);
        if (((ulong)plVar24 & 1) != 0) {
          piVar20 = (int *)((long)plVar24 + -1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar3) {
              *piVar20 = *piVar20 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plStack_210 = plVar24;
        FUN_003ae324(uVar26,uVar14,&plStack_210);
        if (((ulong)plVar24 & 1) != 0) {
          FUN_0055293c(plVar24);
        }
        iVar22 = *(int *)(uVar26 + 0xac);
      }
      if (iVar22 != 2) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                     ,0x34a,2,"assertion failed: %s");
        _abort();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x3ae780);
        (*pcVar4)();
      }
      *(undefined4 *)(uVar26 + 0xac) = 3;
      ppuVar6 = &PTR___tlv_bootstrap_00b2c390;
      (*(code *)PTR___tlv_bootstrap_00b2c390)(*(undefined8 *)(uVar26 + 0x20));
      puVar27 = *ppuVar6;
      *ppuVar6 = extraout_x8;
      ppuVar7 = &PTR___tlv_bootstrap_00b2c3a8;
      (*(code *)PTR___tlv_bootstrap_00b2c3a8)(*(undefined8 *)(uVar26 + 0x40));
      puVar28 = *ppuVar7;
      *ppuVar7 = extraout_x8_00;
      ppuVar8 = &PTR___tlv_bootstrap_00b2c3c0;
      (*(code *)PTR___tlv_bootstrap_00b2c3c0)(*(undefined8 *)(uVar26 + 0x48));
      puVar29 = *ppuVar8;
      *ppuVar8 = extraout_x8_01;
      ppuVar9 = &PTR___tlv_bootstrap_00b2c3d8;
      (*(code *)PTR___tlv_bootstrap_00b2c3d8)(uVar26 + 0x38);
      puVar30 = *ppuVar9;
      *ppuVar9 = extraout_x8_02;
      pplVar16 = aplStack_200;
      FUN_003ae024(uVar26);
      *ppuVar9 = puVar30;
      *ppuVar8 = puVar29;
      *ppuVar7 = puVar28;
      *ppuVar6 = puVar27;
    }
    pplVar10 = aplStack_200;
    FUN_003aca08();
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_148) {
      auVar33._8_8_ = pplVar16;
      auVar33._0_8_ = pplVar10;
      return auVar33;
    }
    ___stack_chk_fail();
    if ((int)pplVar16 != 0) {
      func_0x0040cf10();
      FUN_0033c494(&plStack_210);
      FUN_003aca08(aplStack_200);
    }
    __Unwind_Resume();
    psVar17 = asStack_340;
    psVar11 = asStack_340;
    lStack_288 = *(long *)PTR____stack_chk_guard_00999f88;
    asStack_340[0].cmd = 0;
    asStack_340[0].cmdsize = 0;
    asStack_340[0].vmaddr = 0;
    plVar24 = pplVar10[2];
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar3) {
        *plVar24 = *plVar24 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    ppuVar6 = &PTR___tlv_bootstrap_00b2c390;
    pplStack_290 = pplVar10;
    (*(code *)PTR___tlv_bootstrap_00b2c390)();
    puVar27 = *ppuVar6;
    *ppuVar6 = extraout_x9;
    ppuVar7 = &PTR___tlv_bootstrap_00b2c3a8;
    (*(code *)PTR___tlv_bootstrap_00b2c3a8)();
    puVar28 = *ppuVar7;
    *ppuVar7 = extraout_x9_00;
    ppuVar8 = &PTR___tlv_bootstrap_00b2c3c0;
    (*(code *)PTR___tlv_bootstrap_00b2c3c0)();
    puVar29 = *ppuVar8;
    *ppuVar8 = extraout_x9_01;
    ppuVar9 = &PTR___tlv_bootstrap_00b2c3d8;
    (*(code *)PTR___tlv_bootstrap_00b2c3d8)();
    puVar30 = *ppuVar9;
    *ppuVar9 = extraout_x9_02;
    FUN_003ae024(extraout_x8_03,asStack_340);
    *ppuVar9 = puVar30;
    *ppuVar8 = puVar29;
    *ppuVar7 = puVar28;
    *ppuVar6 = puVar27;
    FUN_003aca08();
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_288) {
      auVar34._8_8_ = psVar17;
      auVar34._0_8_ = psVar11;
      return auVar34;
    }
    ___stack_chk_fail();
    *ppuVar9 = puVar30;
    *ppuVar8 = puVar29;
    *ppuVar7 = puVar28;
    *ppuVar6 = puVar27;
    FUN_003aca08(asStack_340);
    __Unwind_Resume();
    puVar12 = (undefined8 *)psVar11;
    FUN_003ac53c();
    *puVar12 = &PTR_FUN_009df7c8;
    puVar12[1] = &PTR_FUN_009df820;
    puVar12[0x14] = 0;
    puVar12[0x13] = 0;
    puVar12[0xb] = &PTR_PTR_00afa4e0;
    puVar12[0xc] = 0;
    puVar12[0xd] = 0;
    puVar12[0xe] = 0;
    puVar12[0x16] = 0;
    puVar12[0x15] = 0;
    *(undefined1 *)(puVar12 + 0x17) = 0;
    if (puVar12[10] != 0) {
      puVar13 = *(ulong **)((long)psVar11 + 0x20);
      do {
        uVar21 = *puVar13;
        uVar26 = uVar21 + 0x20;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar3) {
          *puVar13 = uVar26;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar13[2] < uVar26) {
        psVar17 = &segment_command_00000020;
        func_0x003d6048(puVar13,0x20);
      }
      else {
        puVar13 = (ulong *)((long)puVar13 + uVar21 + 0x30);
      }
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      *(ulong **)((long)psVar11 + 0x68) = puVar13;
    }
    *(code **)((long)psVar11 + 0x80) = FUN_003aea3c;
    *(segment_command **)((long)psVar11 + 0x88) = psVar11;
    *(undefined8 *)((long)psVar11 + 0x90) = 0;
    auVar35._8_8_ = psVar17;
    auVar35._0_8_ = psVar11;
    return auVar35;
  }
  lVar23 = *(long *)(param_1 + 0x68);
  uVar14 = 1;
code_r0x003ae2d4:
  auVar31._8_8_ = uVar14;
  auVar31._0_8_ = lVar23;
  return auVar31;
}



/* Entry: 003ae324; end: 003ae567;  */

/* WARNING: Removing unreachable block (ram,0x003ae488) */
/* WARNING: Removing unreachable block (ram,0x003ae504) */

long ** FUN_003ae324(long param_1,uint *param_2,ulong *param_3)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long **pplVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long **pplVar11;
  ulong *puVar12;
  long **pplVar13;
  long *plVar14;
  int *piVar15;
  long lVar16;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  undefined8 extraout_x8_03;
  ulong uVar17;
  int iVar18;
  long *plVar19;
  undefined *extraout_x9;
  undefined *extraout_x9_00;
  undefined *extraout_x9_01;
  undefined *extraout_x9_02;
  uint *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  long *aplStack_300 [3];
  undefined8 uStack_2e8;
  long **pplStack_250;
  long lStack_248;
  long *plStack_1d0;
  long *plStack_1c8;
  long *aplStack_1c0 [3];
  undefined8 uStack_1a8;
  long **pplStack_110;
  long lStack_108;
  long **pplStack_98;
  long **pplStack_90;
  undefined8 uStack_88;
  long lStack_80;
  ulong uStack_70;
  long **pplStack_68;
  undefined8 uStack_60;
  long lStack_58;
  uint uStack_4c;
  long *aplStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_4c = 2;
  pplStack_68 = (long **)0x0;
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_70 = *param_3;
  if ((uStack_70 & 1) != 0) {
    piVar15 = (int *)(uStack_70 - 1);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar4) {
        *piVar15 = *piVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_003fb7d8(&uStack_70,*(undefined8 *)(param_1 + 0x30),&uStack_4c,&pplStack_68,0,0);
  if ((uStack_70 & 1) != 0) {
    FUN_0055293c();
  }
  *param_2 = *param_2 | 0x400;
  param_2[0x62] = uStack_4c;
  if (lStack_58 < 0) {
    FUN_002971d4(&pplStack_90,pplStack_68,uStack_60);
  }
  else {
    uStack_88 = uStack_60;
    pplStack_90 = pplStack_68;
    lStack_80 = lStack_58;
  }
  FUN_0037b4bc(aplStack_48,&pplStack_90);
  FUN_0034ce60(param_2,aplStack_48);
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_48[0]) {
    do {
      lVar16 = *aplStack_48[0];
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(aplStack_48[0],0x10);
      if (bVar4) {
        *aplStack_48[0] = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 + -1 == 0) {
      (*(code *)aplStack_48[0][1])();
    }
  }
  if (lStack_80 < 0) {
    __ZdlPv(pplStack_90);
  }
  uVar2 = *param_2;
  puVar20 = param_2 + 2;
  *param_2 = uVar2 | 0x4000000;
  if ((uVar2 >> 0x1a & 1) == 0) {
    param_2[4] = 0;
    param_2[5] = 0;
    puVar20[0] = 0;
    puVar20[1] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
  }
  pplStack_98 = (long **)*param_3;
  if (((ulong)pplStack_98 & 1) != 0) {
    piVar15 = (int *)((long)pplStack_98 - 1);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar4) {
        *piVar15 = *piVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_003be004(aplStack_48,&pplStack_98);
  pplVar11 = aplStack_48;
  FUN_003b02f0(puVar20);
  pplVar6 = pplStack_98;
  if (((ulong)pplStack_98 & 1) != 0) {
    FUN_0055293c();
  }
  if (lStack_58 < 0) {
    pplVar6 = pplStack_68;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return pplVar6;
  }
  ___stack_chk_fail();
  if ((int)pplVar11 != 0) {
    func_0x0040cf10();
    FUN_0033c494(&pplStack_98);
    if (lStack_58 < 0) {
      __ZdlPv(pplStack_68);
    }
  }
  __Unwind_Resume();
  lStack_108 = *(long *)PTR____stack_chk_guard_00999f88;
  aplStack_1c0[0] = (long *)0x0;
  uStack_1a8 = 0;
  pplStack_110 = pplVar6;
  plVar19 = pplVar6[2];
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar4) {
      *plVar19 = *plVar19 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  iVar18 = *(int *)((long)pplVar6 + 0xac);
  if (iVar18 == 5) {
    pplVar13 = (long **)pplVar6[0xf];
    pplVar6[0xf] = (long *)0x0;
    if (pplVar13 != (long **)0x0) {
      plStack_1c8 = *pplVar11;
      if (((ulong)plStack_1c8 & 1) != 0) {
        piVar15 = (int *)((long)plStack_1c8 + -1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar4) {
            *piVar15 = *piVar15 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_003adfa8(aplStack_1c0,pplVar13,&plStack_1c8,"propagate failure");
      if (((ulong)plStack_1c8 & 1) != 0) {
        FUN_0055293c();
      }
    }
  }
  else {
    plVar19 = *pplVar11;
    if (plVar19 != (long *)0x0) {
      plVar14 = pplVar6[0xd];
      if (((ulong)plVar19 & 1) != 0) {
        piVar15 = (int *)((long)plVar19 + -1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar4) {
            *piVar15 = *piVar15 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plStack_1d0 = plVar19;
      FUN_003ae324(pplVar6,plVar14,&plStack_1d0);
      if (((ulong)plVar19 & 1) != 0) {
        FUN_0055293c(plVar19);
      }
      iVar18 = *(int *)((long)pplVar6 + 0xac);
    }
    if (iVar18 != 2) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                   ,0x34a,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x3ae780);
      (*pcVar5)();
    }
    *(undefined4 *)((long)pplVar6 + 0xac) = 3;
    ppuVar7 = &PTR___tlv_bootstrap_00b2c390;
    (*(code *)PTR___tlv_bootstrap_00b2c390)(pplVar6[4]);
    puVar21 = *ppuVar7;
    *ppuVar7 = extraout_x8;
    ppuVar8 = &PTR___tlv_bootstrap_00b2c3a8;
    (*(code *)PTR___tlv_bootstrap_00b2c3a8)(pplVar6[8]);
    puVar22 = *ppuVar8;
    *ppuVar8 = extraout_x8_00;
    ppuVar9 = &PTR___tlv_bootstrap_00b2c3c0;
    (*(code *)PTR___tlv_bootstrap_00b2c3c0)(pplVar6[9]);
    puVar23 = *ppuVar9;
    *ppuVar9 = extraout_x8_01;
    ppuVar10 = &PTR___tlv_bootstrap_00b2c3d8;
    (*(code *)PTR___tlv_bootstrap_00b2c3d8)(pplVar6 + 7);
    puVar24 = *ppuVar10;
    *ppuVar10 = extraout_x8_02;
    pplVar13 = aplStack_1c0;
    FUN_003ae024(pplVar6);
    *ppuVar10 = puVar24;
    *ppuVar9 = puVar23;
    *ppuVar8 = puVar22;
    *ppuVar7 = puVar21;
  }
  iVar18 = (int)pplVar13;
  pplVar6 = aplStack_1c0;
  FUN_003aca08();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_108) {
    return pplVar6;
  }
  ___stack_chk_fail();
  if (iVar18 != 0) {
    func_0x0040cf10();
    FUN_0033c494(&plStack_1d0);
    FUN_003aca08(aplStack_1c0);
  }
  __Unwind_Resume();
  pplVar11 = aplStack_300;
  lStack_248 = *(long *)PTR____stack_chk_guard_00999f88;
  aplStack_300[0] = (long *)0x0;
  uStack_2e8 = 0;
  plVar19 = pplVar6[2];
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar4) {
      *plVar19 = *plVar19 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  ppuVar7 = &PTR___tlv_bootstrap_00b2c390;
  pplStack_250 = pplVar6;
  (*(code *)PTR___tlv_bootstrap_00b2c390)();
  puVar21 = *ppuVar7;
  *ppuVar7 = extraout_x9;
  ppuVar8 = &PTR___tlv_bootstrap_00b2c3a8;
  (*(code *)PTR___tlv_bootstrap_00b2c3a8)();
  puVar22 = *ppuVar8;
  *ppuVar8 = extraout_x9_00;
  ppuVar9 = &PTR___tlv_bootstrap_00b2c3c0;
  (*(code *)PTR___tlv_bootstrap_00b2c3c0)();
  puVar23 = *ppuVar9;
  *ppuVar9 = extraout_x9_01;
  ppuVar10 = &PTR___tlv_bootstrap_00b2c3d8;
  (*(code *)PTR___tlv_bootstrap_00b2c3d8)();
  puVar24 = *ppuVar10;
  *ppuVar10 = extraout_x9_02;
  FUN_003ae024(extraout_x8_03,aplStack_300);
  *ppuVar10 = puVar24;
  *ppuVar9 = puVar23;
  *ppuVar8 = puVar22;
  *ppuVar7 = puVar21;
  FUN_003aca08();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_248) {
    ___stack_chk_fail();
    *ppuVar10 = puVar24;
    *ppuVar9 = puVar23;
    *ppuVar8 = puVar22;
    *ppuVar7 = puVar21;
    FUN_003aca08(aplStack_300);
    __Unwind_Resume();
    pplVar6 = pplVar11;
    FUN_003ac53c();
    *pplVar6 = (long *)&PTR_FUN_009df7c8;
    pplVar6[1] = (long *)&PTR_FUN_009df820;
    pplVar6[0x14] = (long *)0x0;
    pplVar6[0x13] = (long *)0x0;
    pplVar6[0xb] = (long *)&PTR_PTR_00afa4e0;
    pplVar6[0xc] = (long *)0x0;
    pplVar6[0xd] = (long *)0x0;
    pplVar6[0xe] = (long *)0x0;
    pplVar6[0x16] = (long *)0x0;
    pplVar6[0x15] = (long *)0x0;
    *(undefined1 *)(pplVar6 + 0x17) = 0;
    if (pplVar6[10] != (long *)0x0) {
      puVar12 = (ulong *)pplVar11[4];
      do {
        uVar17 = *puVar12;
        uVar1 = uVar17 + 0x20;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar4) {
          *puVar12 = uVar1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar12[2] < uVar1) {
        func_0x003d6048(puVar12,0x20);
      }
      else {
        puVar12 = (ulong *)((long)puVar12 + uVar17 + 0x30);
      }
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      pplVar11[0xd] = (long *)puVar12;
    }
    pplVar11[0x10] = (long *)FUN_003aea3c;
    pplVar11[0x11] = (long *)pplVar11;
    pplVar11[0x12] = (long *)0x0;
    return pplVar11;
  }
  return pplVar11;
}



/* Entry: 003ae568; end: 003ae7df;  */

/* WARNING: Type propagation algorithm not settling */

ulong * FUN_003ae568(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  int *piVar11;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  undefined8 extraout_x8_03;
  ulong uVar12;
  int iVar13;
  long *plVar14;
  undefined *extraout_x9;
  undefined *extraout_x9_00;
  undefined *extraout_x9_01;
  undefined *extraout_x9_02;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong auStack_260 [3];
  undefined8 uStack_248;
  ulong *puStack_1b0;
  long lStack_1a8;
  ulong uStack_130;
  ulong auStack_128 [4];
  undefined8 uStack_108;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  auStack_128[1] = 0;
  uStack_108 = 0;
  plVar14 = *(long **)(param_1 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar2) {
      *plVar14 = *plVar14 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  iVar13 = *(int *)(param_1 + 0xac);
  lStack_70 = param_1;
  if (iVar13 == 5) {
    puVar9 = *(ulong **)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (puVar9 != (ulong *)0x0) {
      auStack_128[0] = *param_2;
      if ((auStack_128[0] & 1) != 0) {
        piVar11 = (int *)(auStack_128[0] - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar2) {
            *piVar11 = *piVar11 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003adfa8(auStack_128 + 1,puVar9,auStack_128,"propagate failure");
      if ((auStack_128[0] & 1) != 0) {
        FUN_0055293c();
      }
    }
  }
  else {
    uVar15 = *param_2;
    if (uVar15 != 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x68);
      if ((uVar15 & 1) != 0) {
        piVar11 = (int *)(uVar15 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar2) {
            *piVar11 = *piVar11 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uStack_130 = uVar15;
      FUN_003ae324(param_1,uVar10,&uStack_130);
      if ((uVar15 & 1) != 0) {
        FUN_0055293c(uVar15);
      }
      iVar13 = *(int *)(param_1 + 0xac);
    }
    if (iVar13 != 2) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                   ,0x34a,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x3ae780);
      (*pcVar3)();
    }
    *(undefined4 *)(param_1 + 0xac) = 3;
    ppuVar4 = &PTR___tlv_bootstrap_00b2c390;
    (*(code *)PTR___tlv_bootstrap_00b2c390)(*(undefined8 *)(param_1 + 0x20));
    puVar16 = *ppuVar4;
    *ppuVar4 = extraout_x8;
    ppuVar5 = &PTR___tlv_bootstrap_00b2c3a8;
    (*(code *)PTR___tlv_bootstrap_00b2c3a8)(*(undefined8 *)(param_1 + 0x40));
    puVar17 = *ppuVar5;
    *ppuVar5 = extraout_x8_00;
    ppuVar6 = &PTR___tlv_bootstrap_00b2c3c0;
    (*(code *)PTR___tlv_bootstrap_00b2c3c0)(*(undefined8 *)(param_1 + 0x48));
    puVar18 = *ppuVar6;
    *ppuVar6 = extraout_x8_01;
    ppuVar7 = &PTR___tlv_bootstrap_00b2c3d8;
    (*(code *)PTR___tlv_bootstrap_00b2c3d8)(param_1 + 0x38);
    puVar19 = *ppuVar7;
    *ppuVar7 = extraout_x8_02;
    puVar9 = auStack_128 + 1;
    FUN_003ae024(param_1);
    *ppuVar7 = puVar19;
    *ppuVar6 = puVar18;
    *ppuVar5 = puVar17;
    *ppuVar4 = puVar16;
  }
  iVar13 = (int)puVar9;
  puVar9 = auStack_128 + 1;
  FUN_003aca08();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return puVar9;
  }
  ___stack_chk_fail();
  if (iVar13 != 0) {
    func_0x0040cf10();
    FUN_0033c494(&uStack_130);
    FUN_003aca08(auStack_128 + 1);
  }
  __Unwind_Resume();
  puVar8 = auStack_260;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_00999f88;
  auStack_260[0] = 0;
  uStack_248 = 0;
  plVar14 = (long *)puVar9[2];
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar2) {
      *plVar14 = *plVar14 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  ppuVar4 = &PTR___tlv_bootstrap_00b2c390;
  puStack_1b0 = puVar9;
  (*(code *)PTR___tlv_bootstrap_00b2c390)();
  puVar16 = *ppuVar4;
  *ppuVar4 = extraout_x9;
  ppuVar5 = &PTR___tlv_bootstrap_00b2c3a8;
  (*(code *)PTR___tlv_bootstrap_00b2c3a8)();
  puVar17 = *ppuVar5;
  *ppuVar5 = extraout_x9_00;
  ppuVar6 = &PTR___tlv_bootstrap_00b2c3c0;
  (*(code *)PTR___tlv_bootstrap_00b2c3c0)();
  puVar18 = *ppuVar6;
  *ppuVar6 = extraout_x9_01;
  ppuVar7 = &PTR___tlv_bootstrap_00b2c3d8;
  (*(code *)PTR___tlv_bootstrap_00b2c3d8)();
  puVar19 = *ppuVar7;
  *ppuVar7 = extraout_x9_02;
  FUN_003ae024(extraout_x8_03,auStack_260);
  *ppuVar7 = puVar19;
  *ppuVar6 = puVar18;
  *ppuVar5 = puVar17;
  *ppuVar4 = puVar16;
  FUN_003aca08();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1a8) {
    return puVar8;
  }
  ___stack_chk_fail();
  *ppuVar7 = puVar19;
  *ppuVar6 = puVar18;
  *ppuVar5 = puVar17;
  *ppuVar4 = puVar16;
  FUN_003aca08(auStack_260);
  __Unwind_Resume();
  puVar9 = puVar8;
  FUN_003ac53c();
  *puVar9 = (ulong)&PTR_FUN_009df7c8;
  puVar9[1] = (ulong)&PTR_FUN_009df820;
  puVar9[0x14] = 0;
  puVar9[0x13] = 0;
  puVar9[0xb] = (ulong)&PTR_PTR_00afa4e0;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0;
  puVar9[0xe] = 0;
  puVar9[0x16] = 0;
  puVar9[0x15] = 0;
  *(undefined1 *)(puVar9 + 0x17) = 0;
  if (puVar9[10] != 0) {
    puVar9 = (ulong *)puVar8[4];
    do {
      uVar12 = *puVar9;
      uVar15 = uVar12 + 0x20;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar9,0x10);
      if (bVar2) {
        *puVar9 = uVar15;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar9[2] < uVar15) {
      func_0x003d6048(puVar9,0x20);
    }
    else {
      puVar9 = (ulong *)((long)puVar9 + uVar12 + 0x30);
    }
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar8[0xd] = (ulong)puVar9;
  }
  puVar8[0x10] = (ulong)FUN_003aea3c;
  puVar8[0x11] = (ulong)puVar8;
  puVar8[0x12] = 0;
  return puVar8;
}



/* Entry: 003ae7e0; end: 003ae93f;  */

undefined8 * FUN_003ae7e0(long param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  long *plVar12;
  undefined *extraout_x9;
  undefined *extraout_x9_00;
  undefined *extraout_x9_01;
  undefined *extraout_x9_02;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 auStack_120 [3];
  undefined8 uStack_108;
  long lStack_70;
  long lStack_68;
  
  puVar8 = auStack_120;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  auStack_120[0] = 0;
  uStack_108 = 0;
  plVar12 = *(long **)(param_1 + 0x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = *plVar12 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  ppuVar4 = &PTR___tlv_bootstrap_00b2c390;
  lStack_70 = param_1;
  (*(code *)PTR___tlv_bootstrap_00b2c390)();
  puVar13 = *ppuVar4;
  *ppuVar4 = extraout_x9;
  ppuVar5 = &PTR___tlv_bootstrap_00b2c3a8;
  (*(code *)PTR___tlv_bootstrap_00b2c3a8)();
  puVar14 = *ppuVar5;
  *ppuVar5 = extraout_x9_00;
  ppuVar6 = &PTR___tlv_bootstrap_00b2c3c0;
  (*(code *)PTR___tlv_bootstrap_00b2c3c0)();
  puVar15 = *ppuVar6;
  *ppuVar6 = extraout_x9_01;
  ppuVar7 = &PTR___tlv_bootstrap_00b2c3d8;
  (*(code *)PTR___tlv_bootstrap_00b2c3d8)();
  puVar16 = *ppuVar7;
  *ppuVar7 = extraout_x9_02;
  FUN_003ae024(extraout_x8,auStack_120);
  *ppuVar7 = puVar16;
  *ppuVar6 = puVar15;
  *ppuVar5 = puVar14;
  *ppuVar4 = puVar13;
  FUN_003aca08();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return puVar8;
  }
  ___stack_chk_fail();
  *ppuVar7 = puVar16;
  *ppuVar6 = puVar15;
  *ppuVar5 = puVar14;
  *ppuVar4 = puVar13;
  FUN_003aca08(auStack_120);
  __Unwind_Resume();
  puVar9 = puVar8;
  FUN_003ac53c();
  *puVar9 = &PTR_FUN_009df7c8;
  puVar9[1] = &PTR_FUN_009df820;
  puVar9[0x14] = 0;
  puVar9[0x13] = 0;
  puVar9[0xb] = &PTR_PTR_00afa4e0;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0;
  puVar9[0xe] = 0;
  puVar9[0x16] = 0;
  puVar9[0x15] = 0;
  *(undefined1 *)(puVar9 + 0x17) = 0;
  if (puVar9[10] != 0) {
    puVar10 = (ulong *)puVar8[4];
    do {
      uVar11 = *puVar10;
      uVar1 = uVar11 + 0x20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar10,0x10);
      if (bVar3) {
        *puVar10 = uVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar10[2] < uVar1) {
      func_0x003d6048(puVar10,0x20);
    }
    else {
      puVar10 = (ulong *)((long)puVar10 + uVar11 + 0x30);
    }
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar8[0xd] = puVar10;
  }
  puVar8[0x10] = FUN_003aea3c;
  puVar8[0x11] = puVar8;
  puVar8[0x12] = 0;
  return puVar8;
}



/* Entry: 003ae940; end: 003aea3b;  */

undefined8 * FUN_003ae940(undefined8 *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  
  puVar4 = param_1;
  FUN_003ac53c();
  *puVar4 = &PTR_FUN_009df7c8;
  puVar4[1] = &PTR_FUN_009df820;
  puVar4[0x14] = 0;
  puVar4[0x13] = 0;
  puVar4[0xb] = &PTR_PTR_00afa4e0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0x16] = 0;
  puVar4[0x15] = 0;
  *(undefined1 *)(puVar4 + 0x17) = 0;
  if (puVar4[10] != 0) {
    puVar5 = (ulong *)param_1[4];
    do {
      uVar6 = *puVar5;
      uVar1 = uVar6 + 0x20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar3) {
        *puVar5 = uVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar5[2] < uVar1) {
      func_0x003d6048(puVar5,0x20);
    }
    else {
      puVar5 = (ulong *)((long)puVar5 + uVar6 + 0x30);
    }
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    param_1[0xd] = puVar5;
  }
  param_1[0x10] = FUN_003aea3c;
  param_1[0x11] = param_1;
  param_1[0x12] = 0;
  return param_1;
}



/* Entry: 003aea3c; end: 003aeaa7;  */

void FUN_003aea3c(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uStack_28;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar4;
  FUN_003af6dc(param_1,&uStack_28);
  if ((uVar4 & 1) != 0) {
    FUN_0055293c(uVar4);
  }
  return;
}



/* Entry: 003aeaa8; end: 003aeb57;  */

undefined8 * FUN_003aeaa8(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_009df7c8;
  param_1[1] = &PTR_FUN_009df820;
  if (param_1[0x16] == 0) {
    FUN_003ac6f4(param_1 + 0x14);
    if ((param_1[0x13] & 1) != 0) {
      FUN_0055293c();
    }
    (**(code **)(*(long *)param_1[0xb] + 8))();
    *param_1 = &PTR_FUN_009df6d8;
    param_1[1] = &PTR_FUN_009df730;
    return param_1;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
               ,0x3ba,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3aeb4c);
  (*pcVar1)();
}



/* Entry: 003aeb58; end: 003aeb5b;  */

undefined8 * FUN_003aeb58(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_009df7c8;
  param_1[1] = &PTR_FUN_009df820;
  if (param_1[0x16] == 0) {
    FUN_003ac6f4(param_1 + 0x14);
    if ((param_1[0x13] & 1) != 0) {
      FUN_0055293c();
    }
    (**(code **)(*(long *)param_1[0xb] + 8))();
    *param_1 = &PTR_FUN_009df6d8;
    param_1[1] = &PTR_FUN_009df730;
    return param_1;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
               ,0x3ba,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3aeb4c);
  (*pcVar1)();
}



/* Entry: 003aeb5c; end: 003aeb93;  */

void FUN_003aeb5c(void)

{
  FUN_003aeaa8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003aeb94; end: 003aef93;  */

void FUN_003aeb94(long param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  ulong **ppuVar12;
  ulong *puVar13;
  ulong *puVar14;
  undefined8 uVar15;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  long *plVar16;
  ulong uVar17;
  undefined4 *puVar18;
  ulong *puVar19;
  int *piVar20;
  undefined4 uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  char *pcStack_160;
  undefined *puStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong *puStack_130;
  ulong auStack_128 [3];
  undefined8 uStack_110;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar7 = &PTR___tlv_bootstrap_00b2c390;
  (*(code *)PTR___tlv_bootstrap_00b2c390)(*(undefined8 *)(param_1 + 0x20));
  puStack_150 = *ppuVar7;
  *ppuVar7 = extraout_x8;
  ppuVar8 = &PTR___tlv_bootstrap_00b2c3a8;
  (*(code *)PTR___tlv_bootstrap_00b2c3a8)(*(undefined8 *)(param_1 + 0x40));
  puVar22 = *ppuVar8;
  *ppuVar8 = extraout_x8_00;
  ppuVar9 = &PTR___tlv_bootstrap_00b2c3c0;
  (*(code *)PTR___tlv_bootstrap_00b2c3c0)(*(undefined8 *)(param_1 + 0x48));
  puVar23 = *ppuVar9;
  *ppuVar9 = extraout_x8_01;
  ppuVar10 = &PTR___tlv_bootstrap_00b2c3d8;
  (*(code *)PTR___tlv_bootstrap_00b2c3d8)(param_1 + 0x38);
  puVar24 = *ppuVar10;
  *ppuVar10 = extraout_x8_02;
  param_2[7] = 1;
  auStack_128[0] = 0;
  uStack_110 = 0;
  plVar16 = *(long **)(param_1 + 0x10);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar4) {
      *plVar16 = *plVar16 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar2 = (byte)param_2[2];
  puStack_130 = param_2;
  lStack_78 = param_1;
  if ((bVar2 >> 6 & 1) != 0) {
    if ((bVar2 & 0x3f) != 0) {
      pcStack_160 = 
      "!batch->send_initial_metadata && !batch->send_trailing_metadata && !batch->send_message && !batch->recv_initial_metadata && !batch->recv_message && !batch->recv_trailing_metadata"
      ;
      uVar15 = 0x3d2;
      goto LAB_003aeeec;
    }
    uVar17 = *(ulong *)(param_2[1] + 0x98);
    if ((uVar17 & 1) != 0) {
      piVar20 = (int *)(uVar17 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar4) {
          *piVar20 = *piVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    param_3 = auStack_128;
    uStack_138 = uVar17;
    FUN_003aef94(param_1,&uStack_138,param_3);
    if ((uVar17 & 1) != 0) {
      FUN_0055293c(uVar17);
    }
    lVar11 = *(long *)(param_1 + 0x10);
    func_0x003a6564(lVar11,*(long *)(lVar11 + 0x28) + -1);
    if (lVar11 == *(long *)(param_1 + 0x18)) {
      puVar14 = auStack_128;
      FUN_003ac84c(&puStack_130);
      goto LAB_003aee34;
    }
    goto LAB_003aee28;
  }
  if ((bVar2 >> 3 & 1) != 0) {
    if ((bVar2 & 0x37) == 0) {
      if (*(int *)(param_1 + 0xa8) == 0) {
        uVar17 = param_2[1];
        *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(uVar17 + 0x38);
        *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(uVar17 + 0x48);
        *(long *)(uVar17 + 0x48) = param_1 + 0x78;
        *(undefined4 *)(param_1 + 0xa8) = 1;
        goto LAB_003aecbc;
      }
      pcStack_160 = "recv_initial_state_ == RecvInitialState::kInitial";
      uVar15 = 0x3e5;
    }
    else {
      pcStack_160 = 
      "!batch->send_initial_metadata && !batch->send_trailing_metadata && !batch->send_message && !batch->recv_message && !batch->recv_trailing_metadata"
      ;
      uVar15 = 0x3e3;
    }
LAB_003aeeec:
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                 ,uVar15,2,"assertion failed: %s");
    goto LAB_003aef08;
  }
LAB_003aecbc:
  puVar18 = *(undefined4 **)(param_1 + 0x68);
  if ((puVar18 == (undefined4 *)0x0) || ((param_2[2] & 1) == 0)) {
    bVar4 = false;
    goto LAB_003aed94;
  }
  uVar21 = 2;
  switch(*puVar18) {
  case 1:
    uVar21 = 3;
  case 0:
    *puVar18 = uVar21;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    goto LAB_003aef08;
  case 6:
    uVar17 = *(ulong *)(param_1 + 0x98);
    if ((uVar17 & 1) != 0) {
      piVar20 = (int *)(uVar17 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar4) {
          *piVar20 = *piVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    param_3 = auStack_128;
    uStack_140 = uVar17;
    FUN_003ac8fc(&puStack_130,&uStack_140,param_3);
    if ((uVar17 & 1) != 0) {
      FUN_0055293c(uVar17);
    }
  }
  FUN_003ac75c(*(long *)(param_1 + 0x68) + 8,&puStack_130);
  if (puStack_130 == (ulong *)0x0) {
LAB_003aee14:
    puVar14 = auStack_128;
    FUN_003af164(param_1);
  }
  else {
    bVar4 = true;
LAB_003aed94:
    puVar14 = puStack_130;
    if (((byte)puStack_130[2] >> 1 & 1) != 0) {
      iVar1 = *(int *)(param_1 + 0xac);
      if (iVar1 == 0) {
        FUN_003ac75c(param_1 + 0xa0,&puStack_130);
        *(undefined4 *)(param_1 + 0xac) = 1;
        goto LAB_003aee14;
      }
      if (iVar1 == 3) {
        uVar17 = *(ulong *)(param_1 + 0x98);
        if ((uVar17 & 1) != 0) {
          piVar20 = (int *)(uVar17 - 1);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar5) {
              *piVar20 = *piVar20 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar14 = &uStack_148;
        param_3 = auStack_128;
        uStack_148 = uVar17;
        FUN_003ac8fc(&puStack_130,puVar14,param_3);
        if ((uVar17 & 1) != 0) {
          FUN_0055293c(uVar17);
        }
      }
      else if (iVar1 - 1U < 2) {
LAB_003aef08:
        _abort();
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x3aef10);
        (*pcVar6)();
      }
    }
    if (bVar4) goto LAB_003aee14;
  }
  if (puStack_130 != (ulong *)0x0) {
LAB_003aee28:
    puVar14 = auStack_128;
    FUN_003ac7b0(&puStack_130);
  }
LAB_003aee34:
  FUN_003aca08(auStack_128);
  ppuVar12 = &puStack_130;
  FUN_003ac6f4();
  *ppuVar10 = puVar24;
  *ppuVar9 = puVar23;
  *ppuVar8 = puVar22;
  *ppuVar7 = puStack_150;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_70) {
    ___stack_chk_fail();
    if ((int)puVar14 != 0) {
      func_0x0040cf10();
      FUN_0033c494(&uStack_138);
      FUN_003aca08(auStack_128);
      FUN_003ac6f4(&puStack_130);
      *ppuVar10 = puVar24;
      *ppuVar9 = puVar23;
      *ppuVar8 = puVar22;
      *ppuVar7 = puStack_150;
    }
    __Unwind_Resume();
    pcStack_168 = FUN_003aef94;
    puVar13 = ppuVar12[0x13];
    puVar19 = (ulong *)*puVar14;
    ppuStack_190 = ppuVar10;
    ppuStack_188 = ppuVar9;
    ppuStack_180 = ppuVar8;
    ppuStack_178 = ppuVar7;
    puStack_170 = &stack0xfffffffffffffff0;
    if (puVar19 != puVar13) {
      if (((ulong)puVar19 & 1) != 0) {
        piVar20 = (int *)((long)puVar19 + -1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar4) {
            *piVar20 = *piVar20 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar19 = (ulong *)*puVar14;
      }
      ppuVar12[0x13] = puVar19;
      if (((ulong)puVar13 & 1) != 0) {
        FUN_0055293c();
      }
    }
    (**(code **)(*ppuVar12[0xb] + 8))();
    ppuVar12[0xb] = (ulong *)&PTR_PTR_00afa4e0;
    (**(code **)(PTR_PTR_00afa4e0 + 8))();
    iVar1 = *(int *)((long)ppuVar12 + 0xac);
    *(undefined4 *)((long)ppuVar12 + 0xac) = 3;
    if (iVar1 == 1) {
      uVar17 = *puVar14;
      if ((uVar17 & 1) != 0) {
        piVar20 = (int *)(uVar17 - 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar4) {
            *piVar20 = *piVar20 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uStack_198 = uVar17;
      FUN_003ac8fc(ppuVar12 + 0x14,&uStack_198,param_3);
      if ((uVar17 & 1) != 0) {
        FUN_0055293c(uVar17);
      }
    }
    puVar13 = ppuVar12[0xd];
    if (puVar13 != (ulong *)0x0) {
      if ((int)*puVar13 - 2U < 3) {
        uVar17 = *puVar14;
        if ((uVar17 & 1) != 0) {
          piVar20 = (int *)(uVar17 - 1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar4) {
              *piVar20 = *piVar20 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uStack_1a0 = uVar17;
        FUN_003ac8fc(puVar13 + 1,&uStack_1a0,param_3);
        if ((uVar17 & 1) != 0) {
          FUN_0055293c(uVar17);
        }
      }
      *(undefined4 *)ppuVar12[0xd] = 6;
    }
    puVar13 = ppuVar12[0xe];
    ppuVar12[0xe] = (ulong *)0x0;
    if (puVar13 != (ulong *)0x0) {
      uStack_1a8 = *puVar14;
      if ((uStack_1a8 & 1) != 0) {
        piVar20 = (int *)(uStack_1a8 - 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar4) {
            *piVar20 = *piVar20 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_003adfa8(param_3,puVar13,&uStack_1a8,"original_recv_initial_metadata");
      if ((uStack_1a8 & 1) != 0) {
        FUN_0055293c();
      }
    }
    return;
  }
  return;
}



/* Entry: 003aef94; end: 003af163;  */

void FUN_003aef94(long param_1,ulong *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar4 = *(ulong *)(param_1 + 0x98);
  uVar6 = *param_2;
  if (uVar6 != uVar4) {
    if ((uVar6 & 1) != 0) {
      piVar7 = (int *)(uVar6 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar6 = *param_2;
    }
    *(ulong *)(param_1 + 0x98) = uVar6;
    if ((uVar4 & 1) != 0) {
      FUN_0055293c();
    }
  }
  (**(code **)(**(long **)(param_1 + 0x58) + 8))();
  *(undefined ***)(param_1 + 0x58) = &PTR_PTR_00afa4e0;
  (**(code **)(PTR_PTR_00afa4e0 + 8))();
  iVar1 = *(int *)(param_1 + 0xac);
  *(undefined4 *)(param_1 + 0xac) = 3;
  if (iVar1 == 1) {
    uVar4 = *param_2;
    if ((uVar4 & 1) != 0) {
      piVar7 = (int *)(uVar4 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_38 = uVar4;
    FUN_003ac8fc(param_1 + 0xa0,&uStack_38,param_3);
    if ((uVar4 & 1) != 0) {
      FUN_0055293c(uVar4);
    }
  }
  piVar7 = *(int **)(param_1 + 0x68);
  if (piVar7 != (int *)0x0) {
    if (*piVar7 - 2U < 3) {
      uVar4 = *param_2;
      if ((uVar4 & 1) != 0) {
        piVar8 = (int *)(uVar4 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = *piVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_40 = uVar4;
      FUN_003ac8fc(piVar7 + 2,&uStack_40,param_3);
      if ((uVar4 & 1) != 0) {
        FUN_0055293c(uVar4);
      }
    }
    **(undefined4 **)(param_1 + 0x68) = 6;
  }
  lVar5 = *(long *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (lVar5 != 0) {
    uStack_48 = *param_2;
    if ((uStack_48 & 1) != 0) {
      piVar7 = (int *)(uStack_48 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003adfa8(param_3,lVar5,&uStack_48,"original_recv_initial_metadata");
    if ((uStack_48 & 1) != 0) {
      FUN_0055293c();
    }
  }
  return;
}



/* Entry: 003af164; end: 003af577;  */

undefined1  [16] FUN_003af164(dword *param_1,dword *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  dword *pdVar6;
  char *pcVar7;
  ulong *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined ***pppuVar12;
  dword *pdVar13;
  char *pcVar14;
  undefined *puVar15;
  dword *pdVar16;
  undefined *puVar17;
  int *piVar18;
  long *plVar19;
  undefined **extraout_x8;
  undefined4 *puVar20;
  ulong uVar21;
  ulong uVar22;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  undefined *extraout_x8_03;
  long lVar23;
  undefined4 uVar24;
  undefined **unaff_x22;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined ***unaff_x28;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  ulong uStack_2b8;
  undefined1 uStack_2a9;
  ulong uStack_2a8;
  dword *pdStack_2a0;
  undefined **ppuStack_298;
  undefined1 *puStack_290;
  code *pcStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  char *pcStack_270;
  ulong uStack_260;
  undefined **ppuStack_258;
  ulong uStack_250;
  undefined **ppuStack_248;
  dword *pdStack_240;
  undefined ***pppuStack_230;
  long alStack_228 [3];
  undefined8 uStack_210;
  dword *pdStack_178;
  long lStack_170;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  dword *pdStack_f0;
  dword *pdStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char acStack_b8 [31];
  undefined1 uStack_99;
  ulong uStack_98;
  char *pcStack_90;
  char *pcStack_88;
  dword *pdStack_80;
  undefined **ppuStack_78;
  int iStack_70;
  dword adStack_68 [6];
  undefined1 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pdVar6 = adStack_68;
  pdVar13 = param_1;
  pdVar16 = param_2;
  FUN_003aff90();
  piVar18 = *(int **)(param_1 + 0x1a);
  if ((piVar18 != (int *)0x0) && (*piVar18 == 3)) {
    *piVar18 = 4;
    puVar1 = *(undefined8 **)(piVar18 + 4);
    *puVar1 = **(undefined8 **)(*(long *)(piVar18 + 2) + 8);
    *(undefined1 *)(puVar1 + 1) = 1;
    if (*(char *)((long)puVar1 + 9) != '\0') {
      *(undefined1 *)((long)puVar1 + 9) = 0;
      FUN_003d3424();
      (**(code **)(**(long **)pdVar6 + 0x18))();
    }
  }
  uStack_50 = 0;
  pcVar7 = *(char **)(param_1 + 0x16);
  ppuVar11 = &PTR_PTR_00afa4e0;
  if ((undefined **)pcVar7 != &PTR_PTR_00afa4e0) {
    iStack_70 = 0;
    (*(code *)**(undefined8 **)pcVar7)();
    pdVar6 = (dword *)&pcStack_88;
    pcStack_88 = pcVar7;
    pdStack_80 = pdVar13;
    FUN_003affe0(&ppuStack_78);
    piVar18 = *(int **)(param_1 + 0x1a);
    pdVar13 = pdVar6;
    if ((piVar18 != (int *)0x0) && (*piVar18 == 4)) {
      plVar19 = *(long **)(param_1 + 0x14);
      if ((char)plVar19[1] == '\0') {
        *(undefined1 *)((long)plVar19 + 9) = 1;
      }
      else {
        if (**(long **)(*(long *)(piVar18 + 2) + 8) != *plVar19) {
          FUN_0036a260(**(long **)(*(long *)(piVar18 + 2) + 8));
          piVar18 = *(int **)(param_1 + 0x1a);
        }
        *piVar18 = 5;
        pdVar13 = param_2;
        FUN_003ac7b0(piVar18 + 2);
      }
    }
    if (iStack_70 == 1) {
      (**(code **)(**(long **)(param_1 + 0x16) + 8))();
      *(undefined ***)(param_1 + 0x16) = &PTR_PTR_00afa4e0;
      (**(code **)(PTR_PTR_00afa4e0 + 8))(&PTR_PTR_00afa4e0);
      ppuVar11 = ppuStack_78;
      ppuStack_78 = (undefined **)0x0;
      iVar2 = param_1[0x2b];
      if (iVar2 == 0) {
        if (*(int *)(ppuVar11 + 0x31) == 0) {
          pcStack_d0 = "*md->get_pointer(GrpcStatusMetadata()) != GRPC_STATUS_OK";
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                       ,0x4d5,2,"assertion failed: %s");
LAB_003af4c0:
          _abort();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x3af4c8);
          (*pcVar5)();
        }
        acStack_b8[8] = '\0';
        acStack_b8[9] = '\0';
        acStack_b8[10] = '\0';
        acStack_b8[0xb] = '\0';
        acStack_b8[0xc] = '\0';
        acStack_b8[0xd] = '\0';
        acStack_b8[0xe] = '\0';
        acStack_b8[0xf] = '\0';
        acStack_b8[0x10] = '\0';
        acStack_b8[0x11] = '\0';
        acStack_b8[0x12] = '\0';
        acStack_b8[0x13] = '\0';
        acStack_b8[0x14] = '\0';
        acStack_b8[0x15] = '\0';
        acStack_b8[0x16] = '\0';
        acStack_b8[0x17] = '\0';
        acStack_b8[0] = '\0';
        acStack_b8[1] = '\0';
        acStack_b8[2] = '\0';
        acStack_b8[3] = '\0';
        acStack_b8[4] = '\0';
        acStack_b8[5] = '\0';
        acStack_b8[6] = '\0';
        acStack_b8[7] = '\0';
        FUN_003b646c(&uStack_98,2,"early return from promise based filter",0x26,&uStack_99,
                     acStack_b8);
        FUN_003be104(&pcStack_90,&uStack_98,3,(long)*(int *)(ppuVar11 + 0x31));
        if ((uStack_98 & 1) != 0) {
          FUN_0055293c();
        }
        pcStack_88 = acStack_b8;
        FUN_0033d548(&pcStack_88);
        if (*(char *)((long)ppuVar11 + 1) < '\0') {
          pcStack_c0 = pcStack_90;
          if (((ulong)pcStack_90 & 1) != 0) {
            pcVar7 = pcStack_90 + -1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
              if (bVar4) {
                *(int *)pcVar7 = *(int *)pcVar7 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (ppuVar11[0x26] == (undefined *)0x0) {
            puVar15 = (undefined *)((long)ppuVar11 + 0x139);
            puVar17 = (undefined *)(ulong)*(byte *)(ppuVar11 + 0x27);
          }
          else {
            puVar17 = ppuVar11[0x27];
            puVar15 = ppuVar11[0x28];
          }
          FUN_003be254(&pcStack_88,&pcStack_c0,5,puVar15,puVar17);
          pcVar7 = pcStack_90;
          if (pcStack_88 == pcStack_90) {
LAB_003af3fc:
            if (((ulong)pcVar7 & 1) != 0) {
              FUN_0055293c();
            }
          }
          else {
            pcStack_90 = pcStack_88;
            pcStack_88 = segment_command_00000020.segname + 0xe;
            if (((ulong)pcVar7 & 1) != 0) {
              FUN_0055293c();
              pcVar7 = pcStack_88;
              goto LAB_003af3fc;
            }
          }
          if (((ulong)pcStack_c0 & 1) != 0) {
            FUN_0055293c();
          }
        }
        unaff_x22 = (undefined **)pcStack_90;
        pcStack_c8 = pcStack_90;
        if (((ulong)pcStack_90 & 1) != 0) {
          pcVar7 = pcStack_90 + -1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
            if (bVar4) {
              *(int *)pcVar7 = *(int *)pcVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        pdVar13 = (dword *)&pcStack_c8;
        pdVar16 = param_2;
        FUN_003aef94(param_1);
        if (((ulong)unaff_x22 & 1) != 0) {
          FUN_0055293c(unaff_x22);
        }
        if (((ulong)pcStack_90 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else if (iVar2 == 1) {
        unaff_x22 = *(undefined ***)(*(long *)(*(undefined **)(param_1 + 0x28) + 8) + 0x18);
        if (unaff_x22 != ppuVar11) {
          FUN_0036a260(unaff_x22,ppuVar11);
        }
        pdVar13 = param_2;
        FUN_003ac7b0(param_1 + 0x28);
        pcVar7 = (char *)(param_1 + 0x2b);
        pcVar7[0] = '\x02';
        pcVar7[1] = '\0';
        pcVar7[2] = '\0';
        pcVar7[3] = '\0';
        if (unaff_x22 == ppuVar11) goto LAB_003af460;
      }
      else if (iVar2 == 2) goto LAB_003af4c0;
      FUN_0036d7cc(ppuVar11);
    }
  }
LAB_003af460:
  pdVar6 = adStack_68;
  FUN_003b0094();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    auVar25._8_8_ = pdVar13;
    auVar25._0_8_ = pdVar6;
    return auVar25;
  }
  ___stack_chk_fail();
  FUN_0033c494(&pcStack_88);
  FUN_0033c494(&pcStack_c0);
  FUN_0033c494(&pcStack_90);
  FUN_003b0094(adStack_68);
  pcVar7 = (char *)pdVar6;
  __Unwind_Resume();
  pcStack_d8 = FUN_003af578;
  pdStack_f0 = param_2;
  pdStack_e8 = pdVar6;
  puStack_e0 = &stack0xfffffffffffffff0;
  if (*(int *)((long)pcVar7 + 0xa8) == 2) {
    ppuVar10 = (undefined **)pcVar7;
    if (*(undefined ***)((long)pcVar7 + 0x60) != (undefined **)pdVar13) goto LAB_003af660;
    *(char *)((long)pcVar7 + 0xb8) = '\x01';
    puVar20 = *(undefined4 **)((long)pcVar7 + 0x68);
    if (puVar20 != (undefined4 *)0x0) {
      if (*(long *)(puVar20 + 4) != 0) goto LAB_003af664;
      if (pdVar16 != (dword *)0x0) {
        *(dword **)(puVar20 + 4) = pdVar16;
        uVar24 = 1;
        switch(*puVar20) {
        case 1:
        case 3:
        case 4:
        case 5:
          goto code_r0x003af670;
        case 2:
          uVar24 = 3;
        case 0:
          *puVar20 = uVar24;
LAB_003af5fc:
          ppuVar11 = &PTR___tlv_bootstrap_00b2c390;
          (*(code *)PTR___tlv_bootstrap_00b2c390)();
          puVar8 = (ulong *)*ppuVar11;
          do {
            uVar21 = *puVar8;
            uVar22 = uVar21 + 0x10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar8,0x10);
            if (bVar4) {
              *puVar8 = uVar22;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (puVar8[2] < uVar22) {
            pdVar13 = &MACH_HEADER.ncmds;
            func_0x003d6048(puVar8,0x10);
          }
          else {
            puVar8 = (ulong *)((long)puVar8 + uVar21 + 0x30);
          }
          *puVar8 = (ulong)&PTR_FUN_009df998;
          puVar8[1] = (ulong)pcVar7;
          *extraout_x8 = (undefined *)puVar8;
          auVar26._8_8_ = pdVar13;
          auVar26._0_8_ = puVar8;
          return auVar26;
        default:
          goto LAB_003af5fc;
        }
      }
      goto LAB_003af668;
    }
    if (pdVar16 == (dword *)0x0) goto LAB_003af5fc;
  }
  else {
    func_0x00773970();
    ppuVar10 = (undefined **)param_2;
LAB_003af660:
    func_0x0077393c();
LAB_003af664:
    func_0x00773908();
LAB_003af668:
    func_0x007738d4();
  }
  func_0x007738a0();
code_r0x003af670:
  _abort();
  ppuStack_100 = &puStack_e0;
  pcStack_f8 = FUN_003af674;
  uVar22 = (ulong)*(uint *)((long)pcVar7 + 0xac);
  pcVar14 = (char *)0x0;
  switch(uVar22) {
  case 1:
    uVar22 = *(ulong *)(*(long *)(*(undefined **)((long)pcVar7 + 0xa0) + 8) + 0x18);
    pcVar14 = (char *)((long)&MACH_HEADER.magic + 1);
  case 0:
  case 3:
    auVar27._8_8_ = pcVar14;
    auVar27._0_8_ = uVar22;
    return auVar27;
  case 2:
    break;
  default:
    pcVar7 = "return Pending{}";
    pcVar14 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
    ;
    func_0x00338df0("return Pending{}",
                    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                    ,0x47a);
  }
  _abort();
  puStack_110 = (undefined1 *)&ppuStack_100;
  pcStack_108 = FUN_003af6dc;
  lStack_170 = *(long *)PTR____stack_chk_guard_00999f88;
  alStack_228[0] = 0;
  uStack_210 = 0;
  pdStack_178 = (dword *)pcVar7;
  plVar19 = *(long **)((long)pcVar7 + 0x10);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar4) {
      *plVar19 = *plVar19 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (*(int *)((long)pcVar7 + 0xa8) != 1) {
    pcStack_270 = "recv_initial_state_ == RecvInitialState::kForwarded";
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                 ,0x484,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x3af974);
    (*pcVar5)();
  }
  uVar22 = *(ulong *)pcVar14;
  if (uVar22 == 0) {
    *(undefined4 *)((long)pcVar7 + 0xa8) = 2;
    ppuVar9 = &PTR___tlv_bootstrap_00b2c390;
    (*(code *)PTR___tlv_bootstrap_00b2c390)(*(undefined **)((long)pcVar7 + 0x20));
    unaff_x24 = *ppuVar9;
    *ppuVar9 = extraout_x8_00;
    ppuVar10 = &PTR___tlv_bootstrap_00b2c3a8;
    (*(code *)PTR___tlv_bootstrap_00b2c3a8)(*(undefined **)((long)pcVar7 + 0x40));
    unaff_x25 = *ppuVar10;
    *ppuVar10 = extraout_x8_01;
    ppuVar11 = &PTR___tlv_bootstrap_00b2c3c0;
    (*(code *)PTR___tlv_bootstrap_00b2c3c0)(*(undefined **)((long)pcVar7 + 0x48));
    unaff_x26 = *ppuVar11;
    *ppuVar11 = extraout_x8_02;
    unaff_x22 = &PTR___tlv_bootstrap_00b2c3d8;
    (*(code *)PTR___tlv_bootstrap_00b2c3d8)((undefined **)((long)pcVar7 + 0x38));
    unaff_x27 = *unaff_x22;
    *unaff_x22 = extraout_x8_03;
    ppuStack_248 = &PTR_DAT_009df9d0;
    unaff_x28 = &ppuStack_248;
    pdStack_240 = (dword *)pcVar7;
    pppuStack_230 = unaff_x28;
    (**(code **)(**(long **)(*(undefined **)((long)pcVar7 + 0x18) + 8) + 8))
              (&ppuStack_258,*(long **)(*(undefined **)((long)pcVar7 + 0x18) + 8),
               *(undefined **)((long)pcVar7 + 0x60),*(undefined **)((long)pcVar7 + 0x50),
               &ppuStack_248);
    (**(code **)(**(long **)((long)pcVar7 + 0x58) + 8))();
    *(undefined ***)((long)pcVar7 + 0x58) = ppuStack_258;
    ppuStack_258 = &PTR_PTR_00afa4e0;
    (**(code **)(PTR_PTR_00afa4e0 + 8))();
    if (pppuStack_230 == &ppuStack_248) {
      lVar23 = 4;
      pppuVar12 = &ppuStack_248;
LAB_003af8ac:
      (*(code *)(*pppuVar12)[lVar23])();
    }
    else if (pppuStack_230 != (undefined ***)0x0) {
      lVar23 = 5;
      pppuVar12 = pppuStack_230;
      goto LAB_003af8ac;
    }
    FUN_003af164(pcVar7,alStack_228);
    puVar15 = *(undefined **)((long)pcVar7 + 0x70);
    *(undefined **)((long)pcVar7 + 0x70) = (undefined *)0x0;
    if (puVar15 != (undefined *)0x0) {
      uStack_260 = 0;
      FUN_003adfa8(alStack_228,puVar15,&uStack_260,"original_recv_initial_metadata");
      if ((uStack_260 & 1) != 0) {
        FUN_0055293c();
      }
    }
    *unaff_x22 = unaff_x27;
    *ppuVar11 = unaff_x26;
    *ppuVar10 = unaff_x25;
    *ppuVar9 = unaff_x24;
  }
  else {
    *(undefined4 *)((long)pcVar7 + 0xa8) = 3;
    puVar15 = *(undefined **)((long)pcVar7 + 0x70);
    *(undefined **)((long)pcVar7 + 0x70) = (undefined *)0x0;
    if ((uVar22 & 1) != 0) {
      piVar18 = (int *)(uVar22 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar4) {
          *piVar18 = *piVar18 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_250 = uVar22;
    FUN_003adfa8(alStack_228,puVar15,&uStack_250,"propagate error");
    ppuVar9 = extraout_x8;
    if ((uStack_250 & 1) != 0) {
      FUN_0055293c();
    }
  }
  plVar19 = alStack_228;
  FUN_003aca08();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_170) {
    auVar28._8_8_ = puVar15;
    auVar28._0_8_ = plVar19;
    return auVar28;
  }
  ___stack_chk_fail();
  if ((int)puVar15 == 0) goto LAB_003afa0c;
  func_0x0040cf10();
  if (pppuStack_230 == unaff_x28) {
    lVar23 = 4;
    pppuVar12 = &ppuStack_248;
LAB_003af9d0:
    (*(code *)(*pppuVar12)[lVar23])();
  }
  else if (pppuStack_230 != (undefined ***)0x0) {
    lVar23 = 5;
    pppuVar12 = pppuStack_230;
    goto LAB_003af9d0;
  }
  *unaff_x22 = unaff_x27;
  *ppuVar11 = unaff_x26;
  *ppuVar10 = unaff_x25;
  *ppuVar9 = unaff_x24;
  FUN_003aca08(alStack_228);
LAB_003afa0c:
  __Unwind_Resume();
  pcStack_278 = FUN_003afa14;
  ppuStack_280 = &puStack_110;
  _abort();
  pcStack_288 = FUN_003afa20;
  pdStack_2a0 = (dword *)ppuVar10;
  ppuStack_298 = ppuVar9;
  puStack_290 = (undefined1 *)&ppuStack_280;
  (**(code **)(*plVar19 + 0x40))();
  auVar29._0_8_ = (long *)plVar19[2];
  do {
    lVar23 = *auVar29._0_8_;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(auVar29._0_8_,0x10);
    if (bVar4) {
      *auVar29._0_8_ = lVar23 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar23 + -1 == 0) {
    plVar19 = auVar29._0_8_;
    FUN_003c3188();
    if ((((ulong)plVar19 & 1) == 0) &&
       (func_0x003c1f6c(), (*(byte *)(*plVar19 + 0x28) >> 1 & 1) != 0)) {
      uStack_2a8 = 0;
      puVar8 = &uStack_2a8;
      FUN_003c2968(auVar29._0_8_ + 1,puVar8,0,0);
      uStack_2b8 = uStack_2a8;
      if ((uStack_2a8 & 1) != 0) {
        FUN_0055293c();
        uStack_2b8 = uStack_2a8;
      }
    }
    else {
      puVar8 = (ulong *)(auVar29._0_8_ + 1);
      uStack_2b8 = 0;
      FUN_003c1e6c(&uStack_2a9,puVar8,&uStack_2b8);
      if ((uStack_2b8 & 1) != 0) {
        FUN_0055293c();
      }
    }
    auVar30._8_8_ = puVar8;
    auVar30._0_8_ = uStack_2b8;
    return auVar30;
  }
  auVar29._8_8_ = puVar15;
  return auVar29;
}



/* Entry: 003af578; end: 003af673;  */

undefined1  [16] FUN_003af578(undefined **param_1,char *param_2,undefined *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined **ppuVar4;
  ulong *puVar5;
  undefined ***pppuVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  int *piVar13;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  long lVar14;
  undefined4 uVar15;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined **unaff_x22;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined ***unaff_x28;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulong uStack_1e8;
  undefined1 uStack_1d9;
  ulong uStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  char *pcStack_1a0;
  ulong uStack_190;
  undefined **ppuStack_188;
  ulong uStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined ***pppuStack_160;
  long alStack_158 [3];
  undefined8 uStack_140;
  undefined **ppuStack_a8;
  long lStack_a0;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (*(int *)((long)param_2 + 0xa8) == 2) {
    unaff_x20 = (undefined **)param_2;
    if (*(undefined **)((long)param_2 + 0x60) != param_3) goto LAB_003af660;
    *(char *)((long)param_2 + 0xb8) = '\x01';
    puVar9 = *(undefined4 **)((long)param_2 + 0x68);
    if (puVar9 != (undefined4 *)0x0) {
      if (*(long *)(puVar9 + 4) != 0) goto LAB_003af664;
      if (param_4 != 0) {
        *(long *)(puVar9 + 4) = param_4;
        uVar15 = 1;
        switch(*puVar9) {
        case 1:
        case 3:
        case 4:
        case 5:
          goto code_r0x003af670;
        case 2:
          uVar15 = 3;
        case 0:
          *puVar9 = uVar15;
LAB_003af5fc:
          ppuVar4 = &PTR___tlv_bootstrap_00b2c390;
          (*(code *)PTR___tlv_bootstrap_00b2c390)();
          puVar5 = (ulong *)*ppuVar4;
          do {
            uVar10 = *puVar5;
            uVar11 = uVar10 + 0x10;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar2) {
              *puVar5 = uVar11;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (puVar5[2] < uVar11) {
            param_3 = (undefined *)0x10;
            func_0x003d6048(puVar5,0x10);
          }
          else {
            puVar5 = (ulong *)((long)puVar5 + uVar10 + 0x30);
          }
          *puVar5 = (ulong)&PTR_FUN_009df998;
          puVar5[1] = (ulong)param_2;
          *param_1 = (undefined *)puVar5;
          auVar16._8_8_ = param_3;
          auVar16._0_8_ = puVar5;
          return auVar16;
        default:
          goto LAB_003af5fc;
        }
      }
      goto LAB_003af668;
    }
    if (param_4 == 0) goto LAB_003af5fc;
  }
  else {
    func_0x00773970();
LAB_003af660:
    func_0x0077393c();
LAB_003af664:
    func_0x00773908();
LAB_003af668:
    func_0x007738d4();
  }
  func_0x007738a0();
code_r0x003af670:
  _abort();
  pcStack_28 = FUN_003af674;
  uVar11 = (ulong)*(uint *)((long)param_2 + 0xac);
  pcVar7 = (char *)0x0;
  puStack_30 = &stack0xfffffffffffffff0;
  switch(uVar11) {
  case 1:
    uVar11 = *(ulong *)(*(long *)(*(undefined **)((long)param_2 + 0xa0) + 8) + 0x18);
    pcVar7 = (char *)((long)&MACH_HEADER.magic + 1);
  case 0:
  case 3:
    auVar17._8_8_ = pcVar7;
    auVar17._0_8_ = uVar11;
    return auVar17;
  case 2:
    break;
  default:
    param_2 = "return Pending{}";
    pcVar7 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
    ;
    func_0x00338df0("return Pending{}",
                    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                    ,0x47a);
  }
  _abort();
  pcStack_38 = FUN_003af6dc;
  lStack_a0 = *(long *)PTR____stack_chk_guard_00999f88;
  alStack_158[0] = 0;
  uStack_140 = 0;
  plVar12 = *(long **)((long)param_2 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar2) {
      *plVar12 = *plVar12 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  ppuStack_a8 = (undefined **)param_2;
  if (*(int *)((long)param_2 + 0xa8) != 1) {
    pcStack_1a0 = "recv_initial_state_ == RecvInitialState::kForwarded";
    puStack_40 = (undefined1 *)&puStack_30;
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                 ,0x484,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x3af974);
    (*pcVar3)();
  }
  uVar11 = *(ulong *)pcVar7;
  if (uVar11 == 0) {
    *(undefined4 *)((long)param_2 + 0xa8) = 2;
    param_1 = &PTR___tlv_bootstrap_00b2c390;
    puStack_40 = (undefined1 *)&puStack_30;
    (*(code *)PTR___tlv_bootstrap_00b2c390)(*(undefined **)((long)param_2 + 0x20));
    unaff_x24 = *param_1;
    *param_1 = extraout_x8;
    unaff_x20 = &PTR___tlv_bootstrap_00b2c3a8;
    (*(code *)PTR___tlv_bootstrap_00b2c3a8)(*(undefined **)((long)param_2 + 0x40));
    unaff_x25 = *unaff_x20;
    *unaff_x20 = extraout_x8_00;
    unaff_x21 = &PTR___tlv_bootstrap_00b2c3c0;
    (*(code *)PTR___tlv_bootstrap_00b2c3c0)(*(undefined **)((long)param_2 + 0x48));
    unaff_x26 = *unaff_x21;
    *unaff_x21 = extraout_x8_01;
    unaff_x22 = &PTR___tlv_bootstrap_00b2c3d8;
    (*(code *)PTR___tlv_bootstrap_00b2c3d8)((undefined **)((long)param_2 + 0x38));
    unaff_x27 = *unaff_x22;
    *unaff_x22 = extraout_x8_02;
    ppuStack_178 = &PTR_DAT_009df9d0;
    unaff_x28 = &ppuStack_178;
    ppuStack_170 = (undefined **)param_2;
    pppuStack_160 = unaff_x28;
    (**(code **)(**(long **)(*(undefined **)((long)param_2 + 0x18) + 8) + 8))
              (&ppuStack_188,*(long **)(*(undefined **)((long)param_2 + 0x18) + 8),
               *(undefined **)((long)param_2 + 0x60),*(undefined **)((long)param_2 + 0x50),
               &ppuStack_178);
    (**(code **)(**(long **)((long)param_2 + 0x58) + 8))();
    *(undefined ***)((long)param_2 + 0x58) = ppuStack_188;
    ppuStack_188 = &PTR_PTR_00afa4e0;
    (**(code **)(PTR_PTR_00afa4e0 + 8))();
    if (pppuStack_160 == &ppuStack_178) {
      lVar14 = 4;
      pppuVar6 = &ppuStack_178;
LAB_003af8ac:
      (*(code *)(*pppuVar6)[lVar14])();
    }
    else if (pppuStack_160 != (undefined ***)0x0) {
      lVar14 = 5;
      pppuVar6 = pppuStack_160;
      goto LAB_003af8ac;
    }
    FUN_003af164(param_2,alStack_158);
    puVar8 = *(undefined **)((long)param_2 + 0x70);
    *(undefined **)((long)param_2 + 0x70) = (undefined *)0x0;
    if (puVar8 != (undefined *)0x0) {
      uStack_190 = 0;
      FUN_003adfa8(alStack_158,puVar8,&uStack_190,"original_recv_initial_metadata");
      if ((uStack_190 & 1) != 0) {
        FUN_0055293c();
      }
    }
    *unaff_x22 = unaff_x27;
    *unaff_x21 = unaff_x26;
    *unaff_x20 = unaff_x25;
    *param_1 = unaff_x24;
  }
  else {
    *(undefined4 *)((long)param_2 + 0xa8) = 3;
    puVar8 = *(undefined **)((long)param_2 + 0x70);
    *(undefined **)((long)param_2 + 0x70) = (undefined *)0x0;
    if ((uVar11 & 1) != 0) {
      piVar13 = (int *)(uVar11 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = *piVar13 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_180 = uVar11;
    puStack_40 = (undefined1 *)&puStack_30;
    FUN_003adfa8(alStack_158,puVar8,&uStack_180,"propagate error");
    if ((uStack_180 & 1) != 0) {
      FUN_0055293c();
    }
  }
  plVar12 = alStack_158;
  FUN_003aca08();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_a0) {
    auVar18._8_8_ = puVar8;
    auVar18._0_8_ = plVar12;
    return auVar18;
  }
  ___stack_chk_fail();
  if ((int)puVar8 == 0) goto LAB_003afa0c;
  func_0x0040cf10();
  if (pppuStack_160 == unaff_x28) {
    lVar14 = 4;
    pppuVar6 = &ppuStack_178;
LAB_003af9d0:
    (*(code *)(*pppuVar6)[lVar14])();
  }
  else if (pppuStack_160 != (undefined ***)0x0) {
    lVar14 = 5;
    pppuVar6 = pppuStack_160;
    goto LAB_003af9d0;
  }
  *unaff_x22 = unaff_x27;
  *unaff_x21 = unaff_x26;
  *unaff_x20 = unaff_x25;
  *param_1 = unaff_x24;
  FUN_003aca08(alStack_158);
LAB_003afa0c:
  __Unwind_Resume();
  pcStack_1a8 = FUN_003afa14;
  ppuStack_1b0 = &puStack_40;
  _abort();
  pcStack_1b8 = FUN_003afa20;
  ppuStack_1d0 = unaff_x20;
  ppuStack_1c8 = param_1;
  puStack_1c0 = (undefined1 *)&ppuStack_1b0;
  (**(code **)(*plVar12 + 0x40))();
  auVar19._0_8_ = (long *)plVar12[2];
  do {
    lVar14 = *auVar19._0_8_;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(auVar19._0_8_,0x10);
    if (bVar2) {
      *auVar19._0_8_ = lVar14 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar14 + -1 == 0) {
    plVar12 = auVar19._0_8_;
    FUN_003c3188();
    if ((((ulong)plVar12 & 1) == 0) &&
       (func_0x003c1f6c(), (*(byte *)(*plVar12 + 0x28) >> 1 & 1) != 0)) {
      uStack_1d8 = 0;
      puVar5 = &uStack_1d8;
      FUN_003c2968(auVar19._0_8_ + 1,puVar5,0,0);
      uStack_1e8 = uStack_1d8;
      if ((uStack_1d8 & 1) != 0) {
        FUN_0055293c();
        uStack_1e8 = uStack_1d8;
      }
    }
    else {
      puVar5 = (ulong *)(auVar19._0_8_ + 1);
      uStack_1e8 = 0;
      FUN_003c1e6c(&uStack_1d9,puVar5,&uStack_1e8);
      if ((uStack_1e8 & 1) != 0) {
        FUN_0055293c();
      }
    }
    auVar20._8_8_ = puVar5;
    auVar20._0_8_ = uStack_1e8;
    return auVar20;
  }
  auVar19._8_8_ = puVar8;
  return auVar19;
}



/* Entry: 003af674; end: 003af6db;  */

undefined1  [16] FUN_003af674(char *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined ***pppuVar4;
  char *pcVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  long *plVar9;
  int *piVar10;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  long lVar11;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined **unaff_x22;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined ***unaff_x28;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulong uStack_1c8;
  undefined1 uStack_1b9;
  ulong uStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char *pcStack_180;
  ulong uStack_170;
  undefined **ppuStack_168;
  ulong uStack_160;
  undefined **ppuStack_158;
  char *pcStack_150;
  undefined ***pppuStack_140;
  long alStack_138 [3];
  undefined8 uStack_120;
  char *pcStack_88;
  long lStack_80;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  uVar8 = (ulong)*(uint *)(param_1 + 0xac);
  pcVar5 = (char *)0x0;
  switch(uVar8) {
  case 1:
    uVar8 = *(ulong *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x18);
    pcVar5 = (char *)((long)&MACH_HEADER.magic + 1);
  case 0:
  case 3:
    auVar12._8_8_ = pcVar5;
    auVar12._0_8_ = uVar8;
    return auVar12;
  case 2:
    break;
  default:
    param_1 = "return Pending{}";
    pcVar5 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
    ;
    func_0x00338df0("return Pending{}",
                    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                    ,0x47a);
  }
  _abort();
  pcStack_18 = FUN_003af6dc;
  lStack_80 = *(long *)PTR____stack_chk_guard_00999f88;
  alStack_138[0] = 0;
  uStack_120 = 0;
  plVar9 = *(long **)(param_1 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = *plVar9 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  pcStack_88 = param_1;
  if (*(int *)(param_1 + 0xa8) != 1) {
    pcStack_180 = "recv_initial_state_ == RecvInitialState::kForwarded";
    puStack_20 = &stack0xfffffffffffffff0;
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                 ,0x484,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x3af974);
    (*pcVar3)();
  }
  uVar8 = *(ulong *)pcVar5;
  if (uVar8 == 0) {
    param_1[0xa8] = '\x02';
    param_1[0xa9] = '\0';
    param_1[0xaa] = '\0';
    param_1[0xab] = '\0';
    unaff_x19 = &PTR___tlv_bootstrap_00b2c390;
    puStack_20 = &stack0xfffffffffffffff0;
    (*(code *)PTR___tlv_bootstrap_00b2c390)(*(undefined8 *)(param_1 + 0x20));
    unaff_x24 = *unaff_x19;
    *unaff_x19 = extraout_x8;
    unaff_x20 = &PTR___tlv_bootstrap_00b2c3a8;
    (*(code *)PTR___tlv_bootstrap_00b2c3a8)(*(undefined8 *)(param_1 + 0x40));
    unaff_x25 = *unaff_x20;
    *unaff_x20 = extraout_x8_00;
    unaff_x21 = &PTR___tlv_bootstrap_00b2c3c0;
    (*(code *)PTR___tlv_bootstrap_00b2c3c0)(*(undefined8 *)(param_1 + 0x48));
    unaff_x26 = *unaff_x21;
    *unaff_x21 = extraout_x8_01;
    unaff_x22 = &PTR___tlv_bootstrap_00b2c3d8;
    (*(code *)PTR___tlv_bootstrap_00b2c3d8)(param_1 + 0x38);
    unaff_x27 = *unaff_x22;
    *unaff_x22 = extraout_x8_02;
    ppuStack_158 = &PTR_DAT_009df9d0;
    unaff_x28 = &ppuStack_158;
    pcStack_150 = param_1;
    pppuStack_140 = unaff_x28;
    (**(code **)(**(long **)(*(long *)(param_1 + 0x18) + 8) + 8))
              (&ppuStack_168,*(long **)(*(long *)(param_1 + 0x18) + 8),
               *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x50),&ppuStack_158);
    (**(code **)(**(long **)(param_1 + 0x58) + 8))();
    *(undefined ***)(param_1 + 0x58) = ppuStack_168;
    ppuStack_168 = &PTR_PTR_00afa4e0;
    (**(code **)(PTR_PTR_00afa4e0 + 8))();
    if (pppuStack_140 == &ppuStack_158) {
      lVar6 = 4;
      pppuVar4 = &ppuStack_158;
LAB_003af8ac:
      (*(code *)(*pppuVar4)[lVar6])();
    }
    else if (pppuStack_140 != (undefined ***)0x0) {
      lVar6 = 5;
      pppuVar4 = pppuStack_140;
      goto LAB_003af8ac;
    }
    FUN_003af164(param_1,alStack_138);
    lVar6 = *(long *)(param_1 + 0x70);
    param_1[0x70] = '\0';
    param_1[0x71] = '\0';
    param_1[0x72] = '\0';
    param_1[0x73] = '\0';
    param_1[0x74] = '\0';
    param_1[0x75] = '\0';
    param_1[0x76] = '\0';
    param_1[0x77] = '\0';
    if (lVar6 != 0) {
      uStack_170 = 0;
      FUN_003adfa8(alStack_138,lVar6,&uStack_170,"original_recv_initial_metadata");
      if ((uStack_170 & 1) != 0) {
        FUN_0055293c();
      }
    }
    *unaff_x22 = unaff_x27;
    *unaff_x21 = unaff_x26;
    *unaff_x20 = unaff_x25;
    *unaff_x19 = unaff_x24;
  }
  else {
    param_1[0xa8] = '\x03';
    param_1[0xa9] = '\0';
    param_1[0xaa] = '\0';
    param_1[0xab] = '\0';
    lVar6 = *(long *)(param_1 + 0x70);
    param_1[0x70] = '\0';
    param_1[0x71] = '\0';
    param_1[0x72] = '\0';
    param_1[0x73] = '\0';
    param_1[0x74] = '\0';
    param_1[0x75] = '\0';
    param_1[0x76] = '\0';
    param_1[0x77] = '\0';
    if ((uVar8 & 1) != 0) {
      piVar10 = (int *)(uVar8 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = *piVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_160 = uVar8;
    puStack_20 = &stack0xfffffffffffffff0;
    FUN_003adfa8(alStack_138,lVar6,&uStack_160,"propagate error");
    if ((uStack_160 & 1) != 0) {
      FUN_0055293c();
    }
  }
  plVar9 = alStack_138;
  FUN_003aca08();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_80) {
    auVar13._8_8_ = lVar6;
    auVar13._0_8_ = plVar9;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)lVar6 == 0) goto LAB_003afa0c;
  func_0x0040cf10();
  if (pppuStack_140 == unaff_x28) {
    lVar11 = 4;
    pppuVar4 = &ppuStack_158;
LAB_003af9d0:
    (*(code *)(*pppuVar4)[lVar11])();
  }
  else if (pppuStack_140 != (undefined ***)0x0) {
    lVar11 = 5;
    pppuVar4 = pppuStack_140;
    goto LAB_003af9d0;
  }
  *unaff_x22 = unaff_x27;
  *unaff_x21 = unaff_x26;
  *unaff_x20 = unaff_x25;
  *unaff_x19 = unaff_x24;
  FUN_003aca08(alStack_138);
LAB_003afa0c:
  __Unwind_Resume();
  pcStack_188 = FUN_003afa14;
  ppuStack_190 = &puStack_20;
  _abort();
  pcStack_198 = FUN_003afa20;
  ppuStack_1b0 = unaff_x20;
  ppuStack_1a8 = unaff_x19;
  puStack_1a0 = (undefined1 *)&ppuStack_190;
  (**(code **)(*plVar9 + 0x40))();
  auVar14._0_8_ = (long *)plVar9[2];
  do {
    lVar11 = *auVar14._0_8_;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(auVar14._0_8_,0x10);
    if (bVar2) {
      *auVar14._0_8_ = lVar11 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar11 + -1 == 0) {
    plVar9 = auVar14._0_8_;
    FUN_003c3188();
    if ((((ulong)plVar9 & 1) == 0) && (func_0x003c1f6c(), (*(byte *)(*plVar9 + 0x28) >> 1 & 1) != 0)
       ) {
      uStack_1b8 = 0;
      puVar7 = &uStack_1b8;
      FUN_003c2968(auVar14._0_8_ + 1,puVar7,0,0);
      uStack_1c8 = uStack_1b8;
      if ((uStack_1b8 & 1) != 0) {
        FUN_0055293c();
        uStack_1c8 = uStack_1b8;
      }
    }
    else {
      puVar7 = (ulong *)(auVar14._0_8_ + 1);
      uStack_1c8 = 0;
      FUN_003c1e6c(&uStack_1b9,puVar7,&uStack_1c8);
      if ((uStack_1c8 & 1) != 0) {
        FUN_0055293c();
      }
    }
    auVar15._8_8_ = puVar7;
    auVar15._0_8_ = uStack_1c8;
    return auVar15;
  }
  auVar14._8_8_ = lVar6;
  return auVar14;
}



/* Entry: 003af6dc; end: 003afa13;  */

void FUN_003af6dc(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined ***pppuVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  long lVar11;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined **unaff_x22;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined ***unaff_x28;
  ulong uStack_1b8;
  undefined1 uStack_1a9;
  ulong uStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  char *pcStack_170;
  ulong uStack_160;
  undefined **ppuStack_158;
  ulong uStack_150;
  undefined **ppuStack_148;
  long lStack_140;
  undefined ***pppuStack_130;
  long alStack_128 [3];
  undefined8 uStack_110;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  alStack_128[0] = 0;
  uStack_110 = 0;
  plVar8 = *(long **)(param_1 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = *plVar8 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lStack_78 = param_1;
  if (*(int *)(param_1 + 0xa8) != 1) {
    pcStack_170 = "recv_initial_state_ == RecvInitialState::kForwarded";
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                 ,0x484,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x3af974);
    (*pcVar3)();
  }
  uVar9 = *param_2;
  if (uVar9 == 0) {
    *(undefined4 *)(param_1 + 0xa8) = 2;
    unaff_x19 = &PTR___tlv_bootstrap_00b2c390;
    (*(code *)PTR___tlv_bootstrap_00b2c390)(*(undefined8 *)(param_1 + 0x20));
    unaff_x24 = *unaff_x19;
    *unaff_x19 = extraout_x8;
    unaff_x20 = &PTR___tlv_bootstrap_00b2c3a8;
    (*(code *)PTR___tlv_bootstrap_00b2c3a8)(*(undefined8 *)(param_1 + 0x40));
    unaff_x25 = *unaff_x20;
    *unaff_x20 = extraout_x8_00;
    unaff_x21 = &PTR___tlv_bootstrap_00b2c3c0;
    (*(code *)PTR___tlv_bootstrap_00b2c3c0)(*(undefined8 *)(param_1 + 0x48));
    unaff_x26 = *unaff_x21;
    *unaff_x21 = extraout_x8_01;
    unaff_x22 = &PTR___tlv_bootstrap_00b2c3d8;
    (*(code *)PTR___tlv_bootstrap_00b2c3d8)(param_1 + 0x38);
    unaff_x27 = *unaff_x22;
    *unaff_x22 = extraout_x8_02;
    plVar8 = *(long **)(*(long *)(param_1 + 0x18) + 8);
    ppuStack_148 = &PTR_DAT_009df9d0;
    unaff_x28 = &ppuStack_148;
    lStack_140 = param_1;
    pppuStack_130 = unaff_x28;
    (**(code **)(*plVar8 + 8))
              (&ppuStack_158,plVar8,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x50),
               &ppuStack_148);
    (**(code **)(**(long **)(param_1 + 0x58) + 8))();
    *(undefined ***)(param_1 + 0x58) = ppuStack_158;
    ppuStack_158 = &PTR_PTR_00afa4e0;
    (**(code **)(PTR_PTR_00afa4e0 + 8))();
    if (pppuStack_130 == &ppuStack_148) {
      lVar11 = 4;
      pppuVar4 = &ppuStack_148;
LAB_003af8ac:
      (*(code *)(*pppuVar4)[lVar11])();
    }
    else if (pppuStack_130 != (undefined ***)0x0) {
      lVar11 = 5;
      pppuVar4 = pppuStack_130;
      goto LAB_003af8ac;
    }
    FUN_003af164(param_1,alStack_128);
    lVar11 = *(long *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (lVar11 != 0) {
      uStack_160 = 0;
      FUN_003adfa8(alStack_128,lVar11,&uStack_160,"original_recv_initial_metadata");
      if ((uStack_160 & 1) != 0) {
        FUN_0055293c();
      }
    }
    iVar6 = (int)lVar11;
    *unaff_x22 = unaff_x27;
    *unaff_x21 = unaff_x26;
    *unaff_x20 = unaff_x25;
    *unaff_x19 = unaff_x24;
  }
  else {
    *(undefined4 *)(param_1 + 0xa8) = 3;
    uVar7 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    if ((uVar9 & 1) != 0) {
      piVar10 = (int *)(uVar9 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = *piVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_150 = uVar9;
    FUN_003adfa8(alStack_128,uVar7,&uStack_150,"propagate error");
    iVar6 = (int)uVar7;
    if ((uStack_150 & 1) != 0) {
      FUN_0055293c();
    }
  }
  plVar8 = alStack_128;
  FUN_003aca08();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) goto LAB_003afa0c;
  func_0x0040cf10();
  if (pppuStack_130 == unaff_x28) {
    lVar11 = 4;
    pppuVar4 = &ppuStack_148;
LAB_003af9d0:
    (*(code *)(*pppuVar4)[lVar11])();
  }
  else if (pppuStack_130 != (undefined ***)0x0) {
    lVar11 = 5;
    pppuVar4 = pppuStack_130;
    goto LAB_003af9d0;
  }
  *unaff_x22 = unaff_x27;
  *unaff_x21 = unaff_x26;
  *unaff_x20 = unaff_x25;
  *unaff_x19 = unaff_x24;
  FUN_003aca08(alStack_128);
LAB_003afa0c:
  __Unwind_Resume();
  pcStack_178 = FUN_003afa14;
  puStack_180 = &stack0xfffffffffffffff0;
  _abort();
  pcStack_188 = FUN_003afa20;
  ppuStack_1a0 = unaff_x20;
  ppuStack_198 = unaff_x19;
  puStack_190 = (undefined1 *)&puStack_180;
  (**(code **)(*plVar8 + 0x40))();
  plVar8 = (long *)plVar8[2];
  do {
    lVar11 = *plVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lVar11 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar11 + -1 == 0) {
    plVar5 = plVar8;
    FUN_003c3188();
    if ((((ulong)plVar5 & 1) == 0) && (func_0x003c1f6c(), (*(byte *)(*plVar5 + 0x28) >> 1 & 1) != 0)
       ) {
      uStack_1a8 = 0;
      FUN_003c2968(plVar8 + 1,&uStack_1a8,0,0);
      if ((uStack_1a8 & 1) == 0) {
        return;
      }
      FUN_0055293c();
      return;
    }
    uStack_1b8 = 0;
    FUN_003c1e6c(&uStack_1a9,plVar8 + 1,&uStack_1b8);
    if ((uStack_1b8 & 1) != 0) {
      FUN_0055293c();
    }
    return;
  }
  return;
}



/* Entry: 003afa14; end: 003afa1f;  */

void FUN_003afa14(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uStack_48;
  undefined1 uStack_39;
  ulong uStack_38;
  
  _abort();
  (**(code **)(*param_1 + 0x40))();
  plVar3 = (long *)param_1[2];
  do {
    lVar5 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    plVar4 = plVar3;
    FUN_003c3188();
    if ((((ulong)plVar4 & 1) == 0) && (func_0x003c1f6c(), (*(byte *)(*plVar4 + 0x28) >> 1 & 1) != 0)
       ) {
      uStack_38 = 0;
      FUN_003c2968(plVar3 + 1,&uStack_38,0,0);
      if ((uStack_38 & 1) == 0) {
        return;
      }
      FUN_0055293c();
      return;
    }
    uStack_48 = 0;
    FUN_003c1e6c(&uStack_39,plVar3 + 1,&uStack_48);
    if ((uStack_48 & 1) != 0) {
      FUN_0055293c();
    }
    return;
  }
  return;
}



/* Entry: 003afa20; end: 003afa6b;  */

void FUN_003afa20(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uStack_38;
  undefined1 uStack_29;
  ulong uStack_28;
  
  (**(code **)(*param_1 + 0x40))();
  plVar3 = (long *)param_1[2];
  do {
    lVar5 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    plVar4 = plVar3;
    FUN_003c3188();
    if ((((ulong)plVar4 & 1) == 0) && (func_0x003c1f6c(), (*(byte *)(*plVar4 + 0x28) >> 1 & 1) != 0)
       ) {
      uStack_28 = 0;
      FUN_003c2968(plVar3 + 1,&uStack_28,0,0);
      if ((uStack_28 & 1) == 0) {
        return;
      }
      FUN_0055293c();
      return;
    }
    uStack_38 = 0;
    FUN_003c1e6c(&uStack_29,plVar3 + 1,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
    return;
  }
  return;
}



/* Entry: 003afa6c; end: 003afaaf;  */

ulong * FUN_003afa6c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong **ppuVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puStack_50;
  ulong uStack_48;
  
  puVar3 = param_1 + 1;
  uVar5 = *param_1;
  if ((uVar5 & 1) == 0) {
    uVar7 = 2;
  }
  else {
    puVar3 = (ulong *)param_1[1];
    uVar7 = param_1[2];
  }
  if (uVar5 >> 1 == uVar7) {
    ppuVar2 = &puStack_50;
    puVar3 = param_1 + 1;
    uVar5 = *param_1;
    if ((uVar5 & 1) == 0) {
      uVar7 = 4;
    }
    else {
      puVar3 = (ulong *)param_1[1];
      uVar7 = param_1[2] << 1;
    }
    puStack_50 = (ulong *)0x0;
    uStack_48 = 0;
    FUN_003afb88();
    uVar4 = uVar5 >> 1;
    puVar1 = (ulong *)(ppuVar2 + uVar4);
    puStack_50 = (ulong *)ppuVar2;
    uStack_48 = uVar7;
    *puVar1 = *param_2;
    puVar6 = puStack_50;
    if (1 < uVar5) {
      do {
        *puVar6 = *puVar3;
        uVar4 = uVar4 - 1;
        puVar6 = puVar6 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar4 != 0);
    }
    uVar5 = *param_1;
    if ((uVar5 & 1) != 0) {
      __ZdlPv(param_1[1]);
      uVar5 = *param_1;
      uVar7 = uStack_48;
    }
    param_1[1] = (ulong)puStack_50;
    param_1[2] = uVar7;
    *param_1 = (uVar5 | 1) + 2;
    return puVar1;
  }
  puVar3[uVar5 >> 1] = *param_2;
  *param_1 = uVar5 + 2;
  return puVar3 + (uVar5 >> 1);
}



/* Entry: 003afab0; end: 003afb87;  */

ulong * FUN_003afab0(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puStack_50;
  ulong uStack_48;
  
  ppuVar2 = &puStack_50;
  puVar6 = param_1 + 1;
  uVar7 = *param_1;
  if ((uVar7 & 1) == 0) {
    uVar3 = 4;
  }
  else {
    puVar6 = (ulong *)param_1[1];
    uVar3 = param_1[2] << 1;
  }
  puStack_50 = (ulong *)0x0;
  uStack_48 = 0;
  FUN_003afb88();
  uVar4 = uVar7 >> 1;
  puVar1 = (ulong *)(ppuVar2 + uVar4);
  puStack_50 = (ulong *)ppuVar2;
  uStack_48 = uVar3;
  *puVar1 = *param_2;
  puVar5 = puStack_50;
  if (1 < uVar7) {
    do {
      *puVar5 = *puVar6;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar4 != 0);
  }
  uVar7 = *param_1;
  if ((uVar7 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar7 = *param_1;
    uVar3 = uStack_48;
  }
  param_1[1] = (ulong)puStack_50;
  param_1[2] = uVar3;
  *param_1 = (uVar7 | 1) + 2;
  return puVar1;
}



/* Entry: 003afb88; end: 003afc07;  */

void FUN_003afb88(long param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uStack_58;
  undefined1 uStack_49;
  ulong uStack_48;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  FUN_00349558();
  lVar5 = *(long *)(param_1 + 0x18);
  FUN_003a6a04(*(undefined8 *)(lVar5 + 0x18),param_1);
  plVar3 = *(long **)(lVar5 + 0x10);
  do {
    lVar5 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    plVar4 = plVar3;
    FUN_003c3188();
    if ((((ulong)plVar4 & 1) == 0) && (func_0x003c1f6c(), (*(byte *)(*plVar4 + 0x28) >> 1 & 1) != 0)
       ) {
      uStack_48 = 0;
      FUN_003c2968(plVar3 + 1,&uStack_48,0,0);
      if ((uStack_48 & 1) == 0) {
        return;
      }
      FUN_0055293c();
      return;
    }
    uStack_58 = 0;
    FUN_003c1e6c(&uStack_49,plVar3 + 1,&uStack_58);
    if ((uStack_58 & 1) != 0) {
      FUN_0055293c();
    }
    return;
  }
  return;
}



/* Entry: 003afc08; end: 003afc7b;  */

void FUN_003afc08(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uStack_28;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar4;
  FUN_003add14(param_1,&uStack_28);
  if ((uVar4 & 1) != 0) {
    FUN_0055293c(uVar4);
  }
  return;
}



/* Entry: 003afc7c; end: 003afdb3;  */

long * FUN_003afc7c(long *param_1,ulong *param_2)

{
  char cVar1;
  long *plVar2;
  ulong *puVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  long *extraout_x8;
  long *extraout_x8_00;
  long lVar9;
  long extraout_x10;
  char *pcVar10;
  ulong uVar11;
  bool bVar12;
  ulong uStack_1a0;
  long *plStack_198;
  undefined1 uStack_189;
  long *plStack_188;
  long *plStack_148;
  long *plStack_140;
  undefined1 uStack_131;
  long *plStack_130;
  long *plStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  ulong uStack_f8;
  undefined8 auStack_f0 [3];
  undefined8 uStack_d8;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_40 = param_1[5];
  auStack_f0[0] = 0;
  uStack_d8 = 0;
  plVar6 = *(long **)(lStack_40 + 0x10);
  do {
    cVar1 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar12) {
      *plVar6 = *plVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar11 = *param_2;
  if ((uVar11 & 1) != 0) {
    piVar7 = (int *)(uVar11 - 1);
    do {
      cVar1 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar12) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar6 = param_1 + 4;
  puVar3 = &uStack_f8;
  puVar5 = auStack_f0;
  uStack_f8 = uVar11;
  FUN_003ac8fc(plVar6);
  if ((uVar11 & 1) != 0) {
    FUN_0055293c(uVar11);
  }
  plVar2 = *(long **)(param_1[5] + 0x10);
  do {
    lVar8 = *plVar2;
    cVar1 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar12) {
      *plVar2 = lVar8 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar8 + -1 == 0) {
    FUN_004005ec();
  }
  FUN_003aca08(auStack_f0);
  FUN_003ac6f4(plVar6);
  __ZdlPv();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_003aca08(auStack_f0);
  __Unwind_Resume(param_1);
  plVar2 = param_1;
  func_0x0040cf10();
  pcStack_108 = FUN_003afdb4;
  plVar2[1] = (long)puVar3;
  plVar2[2] = (long)puVar5;
  *(undefined1 *)(plVar2 + 3) = 0;
  puStack_110 = &stack0xfffffffffffffff0;
  if (puVar3[0x16] == 0) {
    puVar3[0x16] = (ulong)plVar2;
    FUN_003d3424(plVar2);
    *extraout_x8 = *plVar2;
    FUN_003d3424();
    *plVar2 = extraout_x10;
    *(undefined1 *)((long)extraout_x8_00 + 0x19) = 1;
    return extraout_x8_00;
  }
  func_0x007739a4();
  pcVar4 = "finish_cancel";
  pcStack_118 = FUN_003afe04;
  do {
    lVar9 = *plVar2;
    lVar8 = lVar9 + -1;
    cVar1 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar12) {
      *plVar2 = lVar8;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar8 != 0) {
    plStack_130 = plVar6;
    plStack_128 = param_1;
    if (lVar9 == 0) {
      puStack_120 = (undefined1 *)&puStack_110;
      func_0x00773d94();
      func_0x0040cf10();
      func_0x0040cf10();
      FUN_0033c494(&plStack_148);
      FUN_0033c494(&plStack_140);
      __Unwind_Resume();
      plVar2 = plVar2 + 0xb;
      do {
        pcVar10 = (char *)*plVar2;
        if (((ulong)pcVar10 & 1) == 0) {
          plStack_188 = (long *)0x0;
LAB_003bbad0:
          do {
            if ((char *)*plVar2 != pcVar10) {
              ClearExclusiveLocal();
              bVar12 = true;
              goto LAB_003bbb24;
            }
            cVar1 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar12) {
              *plVar2 = (long)pcVar4;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (pcVar10 == (char *)0x0) goto LAB_003bbb14;
          uStack_1a0 = 0;
          FUN_003c1e6c(&uStack_189,pcVar10,&uStack_1a0);
          if ((uStack_1a0 & 1) != 0) {
            FUN_0055293c();
          }
          bVar12 = false;
          pcVar4 = pcVar10;
        }
        else {
          FUN_003b7b3c(&plStack_188,(ulong)pcVar10 & 0xfffffffffffffffe);
          if (plStack_188 == (long *)0x0) goto LAB_003bbad0;
          plStack_198 = plStack_188;
          if (((ulong)plStack_188 & 1) != 0) {
            piVar7 = (int *)((long)plStack_188 - 1);
            do {
              cVar1 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar7,0x10);
              if (bVar12) {
                *piVar7 = *piVar7 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          FUN_003c1e6c(&uStack_189,pcVar4,&plStack_198);
          if (((ulong)plStack_198 & 1) != 0) {
            FUN_0055293c();
          }
LAB_003bbb14:
          bVar12 = false;
        }
LAB_003bbb24:
        plVar6 = plStack_188;
        if (((ulong)plStack_188 & 1) != 0) {
          FUN_0055293c();
        }
        if (!bVar12) {
          return plVar6;
        }
      } while( true );
    }
    plVar2 = plVar2 + 1;
    plVar6 = plVar2;
    puStack_120 = (undefined1 *)&puStack_110;
    FUN_0033b3e4(plVar2,&uStack_131);
    while (plVar6 == (long *)0x0) {
      plVar6 = plVar2;
      FUN_0033b3e4(plVar2,&uStack_131);
    }
    FUN_003b7b6c(&plStack_140,plVar6[3]);
    plVar2 = plStack_140;
    plVar6[3] = 0;
    plStack_148 = plStack_140;
    if (((ulong)plStack_140 & 1) != 0) {
      piVar7 = (int *)((long)plStack_140 + -1);
      do {
        cVar1 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar12) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003bb81c();
    if (((ulong)plVar2 & 1) != 0) {
      FUN_0055293c(plVar2);
    }
    plVar2 = plStack_140;
    if (((ulong)plStack_140 & 1) != 0) {
      FUN_0055293c();
      plVar2 = plStack_140;
    }
  }
  return plVar2;
}



/* Entry: 003afdb4; end: 003afe03;  */

long * FUN_003afdb4(long *param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  char *pcVar5;
  long *extraout_x8;
  long *extraout_x8_00;
  long lVar6;
  int *piVar7;
  long extraout_x10;
  char *pcVar8;
  bool bVar9;
  ulong uStack_a0;
  long *plStack_98;
  undefined1 uStack_89;
  long *plStack_88;
  long *plStack_48;
  long *plStack_40;
  undefined1 uStack_31;
  
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  if (*(long *)(param_2 + 0xb0) == 0) {
    *(long **)(param_2 + 0xb0) = param_1;
    FUN_003d3424(param_1);
    *extraout_x8 = *param_1;
    FUN_003d3424();
    *param_1 = extraout_x10;
    *(undefined1 *)((long)extraout_x8_00 + 0x19) = 1;
    return extraout_x8_00;
  }
  func_0x007739a4();
  pcVar5 = "finish_cancel";
  do {
    lVar6 = *param_1;
    lVar2 = lVar6 + -1;
    cVar1 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar9) {
      *param_1 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar2 != 0) {
    if (lVar6 == 0) {
      func_0x00773d94();
      func_0x0040cf10();
      func_0x0040cf10();
      FUN_0033c494(&plStack_48);
      FUN_0033c494(&plStack_40);
      __Unwind_Resume();
      param_1 = param_1 + 0xb;
      do {
        pcVar8 = (char *)*param_1;
        if (((ulong)pcVar8 & 1) == 0) {
          plStack_88 = (long *)0x0;
LAB_003bbad0:
          do {
            if ((char *)*param_1 != pcVar8) {
              ClearExclusiveLocal();
              bVar9 = true;
              goto LAB_003bbb24;
            }
            cVar1 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(param_1,0x10);
            if (bVar9) {
              *param_1 = (long)pcVar5;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (pcVar8 == (char *)0x0) goto LAB_003bbb14;
          uStack_a0 = 0;
          FUN_003c1e6c(&uStack_89,pcVar8,&uStack_a0);
          if ((uStack_a0 & 1) != 0) {
            FUN_0055293c();
          }
          bVar9 = false;
          pcVar5 = pcVar8;
        }
        else {
          FUN_003b7b3c(&plStack_88,(ulong)pcVar8 & 0xfffffffffffffffe);
          if (plStack_88 == (long *)0x0) goto LAB_003bbad0;
          plStack_98 = plStack_88;
          if (((ulong)plStack_88 & 1) != 0) {
            piVar7 = (int *)((long)plStack_88 - 1);
            do {
              cVar1 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar7,0x10);
              if (bVar9) {
                *piVar7 = *piVar7 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          FUN_003c1e6c(&uStack_89,pcVar5,&plStack_98);
          if (((ulong)plStack_98 & 1) != 0) {
            FUN_0055293c();
          }
LAB_003bbb14:
          bVar9 = false;
        }
LAB_003bbb24:
        plVar4 = plStack_88;
        if (((ulong)plStack_88 & 1) != 0) {
          FUN_0055293c();
        }
        if (!bVar9) {
          return plVar4;
        }
      } while( true );
    }
    param_1 = param_1 + 1;
    plVar4 = param_1;
    FUN_0033b3e4(param_1,&uStack_31);
    while (plVar4 == (long *)0x0) {
      plVar4 = param_1;
      FUN_0033b3e4(param_1,&uStack_31);
    }
    FUN_003b7b6c(&plStack_40,plVar4[3]);
    plVar3 = plStack_40;
    plVar4[3] = 0;
    plStack_48 = plStack_40;
    if (((ulong)plStack_40 & 1) != 0) {
      piVar7 = (int *)((long)plStack_40 + -1);
      do {
        cVar1 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar9) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003bb81c();
    if (((ulong)plVar3 & 1) != 0) {
      FUN_0055293c(plVar3);
    }
    param_1 = plStack_40;
    if (((ulong)plStack_40 & 1) != 0) {
      FUN_0055293c();
      param_1 = plStack_40;
    }
  }
  return param_1;
}



/* Entry: 003afe04; end: 003afe0f;  */

void FUN_003afe04(long *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  char *pcVar5;
  long lVar6;
  int *piVar7;
  char *pcVar8;
  bool bVar9;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 uStack_79;
  ulong uStack_78;
  ulong uStack_38;
  ulong uStack_30;
  undefined1 uStack_21;
  
  pcVar5 = "finish_cancel";
  do {
    lVar6 = *param_1;
    lVar2 = lVar6 + -1;
    cVar1 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar9) {
      *param_1 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar2 != 0) {
    if (lVar6 == 0) {
      func_0x00773d94();
      func_0x0040cf10();
      func_0x0040cf10();
      FUN_0033c494(&uStack_38);
      FUN_0033c494(&uStack_30);
      __Unwind_Resume();
      param_1 = param_1 + 0xb;
      do {
        pcVar8 = (char *)*param_1;
        if (((ulong)pcVar8 & 1) == 0) {
          uStack_78 = 0;
LAB_003bbad0:
          do {
            if ((char *)*param_1 != pcVar8) {
              ClearExclusiveLocal();
              bVar9 = true;
              goto LAB_003bbb24;
            }
            cVar1 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(param_1,0x10);
            if (bVar9) {
              *param_1 = (long)pcVar5;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (pcVar8 == (char *)0x0) goto LAB_003bbb14;
          uStack_90 = 0;
          FUN_003c1e6c(&uStack_79,pcVar8,&uStack_90);
          if ((uStack_90 & 1) != 0) {
            FUN_0055293c();
          }
          bVar9 = false;
          pcVar5 = pcVar8;
        }
        else {
          FUN_003b7b3c(&uStack_78,(ulong)pcVar8 & 0xfffffffffffffffe);
          if (uStack_78 == 0) goto LAB_003bbad0;
          uStack_88 = uStack_78;
          if ((uStack_78 & 1) != 0) {
            piVar7 = (int *)(uStack_78 - 1);
            do {
              cVar1 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar7,0x10);
              if (bVar9) {
                *piVar7 = *piVar7 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          FUN_003c1e6c(&uStack_79,pcVar5,&uStack_88);
          if ((uStack_88 & 1) != 0) {
            FUN_0055293c();
          }
LAB_003bbb14:
          bVar9 = false;
        }
LAB_003bbb24:
        if ((uStack_78 & 1) != 0) {
          FUN_0055293c();
        }
        if (!bVar9) {
          return;
        }
      } while( true );
    }
    param_1 = param_1 + 1;
    plVar4 = param_1;
    FUN_0033b3e4(param_1,&uStack_21);
    while (plVar4 == (long *)0x0) {
      plVar4 = param_1;
      FUN_0033b3e4(param_1,&uStack_21);
    }
    FUN_003b7b6c(&uStack_30,plVar4[3]);
    uVar3 = uStack_30;
    plVar4[3] = 0;
    uStack_38 = uStack_30;
    if ((uStack_30 & 1) != 0) {
      piVar7 = (int *)(uStack_30 - 1);
      do {
        cVar1 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar9) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003bb81c();
    if ((uVar3 & 1) != 0) {
      FUN_0055293c(uVar3);
    }
    if ((uStack_30 & 1) != 0) {
      FUN_0055293c();
    }
  }
  return;
}



/* Entry: 003afe10; end: 003afec3;  */

undefined8 * FUN_003afe10(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 extraout_x8;
  long *plVar5;
  long lVar6;
  ulong uStack_28;
  
  *(undefined8 *)(param_1[1] + 0xb0) = 0;
  if (*(char *)((long)param_1 + 0x19) != '\0') {
    puVar3 = param_1;
    FUN_003d3424(*param_1);
    *puVar3 = extraout_x8;
  }
  if (*(char *)(param_1 + 3) != '\0') {
    pcVar4 = segment_command_00000020.segname + 8;
    __Znwm();
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4[4] = '\0';
    pcVar4[5] = '\0';
    pcVar4[6] = '\0';
    pcVar4[7] = '\0';
    *(qword *)(pcVar4 + 8) = 0;
    lVar6 = param_1[1];
    plVar5 = *(long **)(lVar6 + 0x10);
    *(long **)(pcVar4 + 0x20) = plVar5;
    *(long *)(pcVar4 + 0x28) = lVar6;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(code **)(pcVar4 + 8) = FUN_003afec4;
    *(char **)(pcVar4 + 0x10) = pcVar4;
    *(qword *)(pcVar4 + 0x18) = 0;
    uStack_28 = 0;
    FUN_003adfa8(param_1[2],pcVar4,&uStack_28,"re-poll");
    if ((uStack_28 & 1) != 0) {
      FUN_0055293c();
    }
  }
  return param_1;
}



/* Entry: 003afec4; end: 003aff8f;  */

undefined8 * FUN_003afec4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x10;
  undefined8 *puStack_118;
  undefined8 auStack_e0 [3];
  undefined8 uStack_c8;
  long lStack_30;
  long lStack_28;
  
  puVar4 = auStack_e0;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_30 = param_1[5];
  auStack_e0[0] = 0;
  uStack_c8 = 0;
  plVar5 = *(long **)(lStack_30 + 0x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_003ae024(param_1[5]);
  FUN_003aca08(auStack_e0);
  plVar5 = (long *)param_1[4];
  do {
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 + -1 == 0) {
    FUN_004005ec();
  }
  __ZdlPv();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  param_1[1] = puVar4;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  if (*(long *)((long)puVar4 + 0xb0) == 0) {
    *(undefined8 **)((long)puVar4 + 0xb0) = param_1;
    FUN_003d3424(param_1);
    *extraout_x8 = *param_1;
    FUN_003d3424();
    *param_1 = extraout_x10;
    *(undefined1 *)((long)extraout_x8_00 + 0x19) = 1;
    return extraout_x8_00;
  }
  func_0x007739d8();
  uVar1 = *(uint *)((long)puVar4 + 8);
  if (*(int *)(param_1 + 1) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      *(undefined4 *)(param_1 + 1) = 0xffffffff;
    }
    else {
      puStack_118 = param_1;
      (*(code *)(&PTR_FUN_009df8c0)[uVar1])(&puStack_118,param_1,puVar4);
    }
  }
  return param_1;
}



/* Entry: 003aff90; end: 003affdf;  */

undefined8 * FUN_003aff90(undefined8 *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x10;
  undefined8 *puStack_38;
  
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  if (*(long *)(param_2 + 0xb0) == 0) {
    *(undefined8 **)(param_2 + 0xb0) = param_1;
    FUN_003d3424(param_1);
    *extraout_x8 = *param_1;
    FUN_003d3424();
    *param_1 = extraout_x10;
    *(undefined1 *)((long)extraout_x8_00 + 0x19) = 1;
    return extraout_x8_00;
  }
  func_0x007739d8();
  uVar1 = *(uint *)(param_2 + 8);
  if (*(int *)(param_1 + 1) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      *(undefined4 *)(param_1 + 1) = 0xffffffff;
    }
    else {
      puStack_38 = param_1;
      (*(code *)(&PTR_FUN_009df8c0)[uVar1])(&puStack_38,param_1,param_2);
    }
  }
  return param_1;
}



/* Entry: 003affe0; end: 003b004f;  */

long FUN_003affe0(long param_1,long param_2)

{
  uint uVar1;
  long lStack_28;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (*(int *)(param_1 + 8) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
    }
    else {
      lStack_28 = param_1;
      (*(code *)(&PTR_FUN_009df8c0)[uVar1])(&lStack_28,param_1,param_2);
    }
  }
  return param_1;
}



/* Entry: 003b0050; end: 003b0093;  */

void FUN_003b0050(long *param_1)

{
  if (*(int *)(*param_1 + 8) != 0) {
    *(undefined4 *)(*param_1 + 8) = 0;
  }
  return;
}



/* Entry: 003b0094; end: 003b0147;  */

undefined8 * FUN_003b0094(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 extraout_x8;
  long *plVar5;
  long lVar6;
  ulong uStack_28;
  
  *(undefined8 *)(param_1[1] + 0xb0) = 0;
  if (*(char *)((long)param_1 + 0x19) != '\0') {
    puVar3 = param_1;
    FUN_003d3424(*param_1);
    *puVar3 = extraout_x8;
  }
  if (*(char *)(param_1 + 3) != '\0') {
    pcVar4 = segment_command_00000020.segname + 8;
    __Znwm();
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4[4] = '\0';
    pcVar4[5] = '\0';
    pcVar4[6] = '\0';
    pcVar4[7] = '\0';
    *(qword *)(pcVar4 + 8) = 0;
    lVar6 = param_1[1];
    plVar5 = *(long **)(lVar6 + 0x10);
    *(long **)(pcVar4 + 0x20) = plVar5;
    *(long *)(pcVar4 + 0x28) = lVar6;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(code **)(pcVar4 + 8) = FUN_003b0148;
    *(char **)(pcVar4 + 0x10) = pcVar4;
    *(qword *)(pcVar4 + 0x18) = 0;
    uStack_28 = 0;
    FUN_003adfa8(param_1[2],pcVar4,&uStack_28,"re-poll");
    if ((uStack_28 & 1) != 0) {
      FUN_0055293c();
    }
  }
  return param_1;
}



/* Entry: 003b0148; end: 003b0213;  */

void FUN_003b0148(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 auStack_e0 [3];
  undefined8 uStack_c8;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_30 = *(long *)(param_1 + 0x28);
  auStack_e0[0] = 0;
  uStack_c8 = 0;
  plVar3 = *(long **)(lStack_30 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = *plVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  FUN_003af164(*(undefined8 *)(param_1 + 0x28),auStack_e0);
  FUN_003aca08(auStack_e0);
  plVar3 = *(long **)(param_1 + 0x20);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    FUN_004005ec();
  }
  __ZdlPv(param_1);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume(param_1);
  return;
}



/* Entry: 003b0214; end: 003b021b;  */

void FUN_003b0214(void)

{
  return;
}



/* Entry: 003b021c; end: 003b024f;  */

void FUN_003b021c(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_FUN_009df8e0;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 003b0250; end: 003b027f;  */

void FUN_003b0250(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_009df8e0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 003b0280; end: 003b02bb;  */

long FUN_003b0280(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009df940);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 003b02bc; end: 003b02c7;  */

undefined ** FUN_003b02bc(void)

{
  return &PTR_DAT_009df940;
}



/* Entry: 003b02c8; end: 003b02ef;  */

void FUN_003b02c8(long param_1,ulong param_2)

{
  FUN_003ae1b0(*(undefined8 *)(param_1 + 8));
  if ((param_2 & 0xfffffffe) == 0) {
    return;
  }
  FUN_0033e178();
  return;
}



/* Entry: 003b02f0; end: 003b034f;  */

void FUN_003b02f0(void)

{
  return;
}



/* Entry: 003b0350; end: 003b0473;  */

ulong * FUN_003b0350(ulong *param_1,ulong *param_2)

{
  ulong **ppuVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puStack_50;
  ulong uStack_48;
  
  ppuVar1 = &puStack_50;
  puVar5 = param_1 + 1;
  uVar7 = *param_1;
  if ((uVar7 & 1) == 0) {
    uVar2 = 2;
  }
  else {
    puVar5 = (ulong *)param_1[1];
    uVar2 = param_1[2] << 1;
  }
  puStack_50 = (ulong *)0x0;
  uStack_48 = 0;
  FUN_0036b3e0();
  uVar6 = uVar7 >> 1;
  puVar4 = (ulong *)(ppuVar1 + uVar6 * 3);
  uVar9 = param_2[1];
  uVar8 = *param_2;
  puVar4[2] = param_2[2];
  uStack_48 = uVar2;
  puVar4[1] = uVar9;
  puStack_50 = (ulong *)ppuVar1;
  *puVar4 = uVar8;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = uVar6;
  puVar3 = puVar5;
  if (1 < uVar7) {
    do {
      uVar8 = puVar3[1];
      uVar7 = *puVar3;
      ppuVar1[2] = (ulong *)puVar3[2];
      ppuVar1[1] = (ulong *)uVar8;
      *ppuVar1 = (ulong *)uVar7;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      uVar2 = uVar2 - 1;
      ppuVar1 = ppuVar1 + 3;
      puVar3 = puVar3 + 3;
    } while (uVar2 != 0);
    puVar5 = puVar5 + uVar6 * 3;
    do {
      if (*(char *)((long)puVar5 + -1) < '\0') {
        __ZdlPv(puVar5[-3]);
      }
      uVar6 = uVar6 - 1;
      puVar5 = puVar5 + -3;
    } while (uVar6 != 0);
  }
  uVar7 = *param_1;
  if ((uVar7 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar7 = *param_1;
  }
  param_1[1] = (ulong)puStack_50;
  param_1[2] = uStack_48;
  *param_1 = (uVar7 | 1) + 2;
  return puVar4;
}



/* Entry: 003b0474; end: 003b049b;  */

void FUN_003b0474(long param_1,ulong param_2)

{
  FUN_003af674(*(undefined8 *)(param_1 + 8));
  if ((param_2 & 0xfffffffe) == 0) {
    return;
  }
  FUN_0033e178();
  return;
}



/* Entry: 003b049c; end: 003b04a7;  */

void FUN_003b049c(void)

{
  return;
}



/* Entry: 003b04a8; end: 003b04db;  */

void FUN_003b04a8(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_DAT_009df9d0;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 003b04dc; end: 003b050b;  */

void FUN_003b04dc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_009df9d0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 003b050c; end: 003b0547;  */

long FUN_003b050c(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009dfa30);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 003b0548; end: 003b055b;  */

undefined ** FUN_003b0548(void)

{
  return &PTR_DAT_009dfa30;
}



/* Entry: 003b055c; end: 003b05ef;  */

bool FUN_003b055c(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined **ppuVar6;
  
  uVar3 = param_1;
  _strcmp(param_1,"OK");
  if ((int)uVar3 == 0) {
    lVar4 = 0;
    bVar2 = true;
  }
  else {
    uVar1 = 0xffffffffffffffff;
    ppuVar6 = &PTR_s_CANCELLED_009dfa50;
    do {
      uVar5 = uVar1;
      if (uVar5 == 0xf) {
        return false;
      }
      uVar3 = param_1;
      _strcmp(param_1,*ppuVar6);
      uVar1 = uVar5 + 1;
      ppuVar6 = ppuVar6 + 2;
    } while ((int)uVar3 != 0);
    bVar2 = uVar5 + 1 < 0x10;
    lVar4 = uVar5 + 2;
  }
  *param_2 = *(undefined4 *)(&UNK_009dfa48 + lVar4 * 0x10);
  return bVar2;
}



/* Entry: 003b05f0; end: 003b061b;  */

void FUN_003b05f0(long param_1,long *param_2)

{
  func_0x003b0630();
  if (param_1 != 0) {
    *param_2 = param_1;
  }
  return;
}


