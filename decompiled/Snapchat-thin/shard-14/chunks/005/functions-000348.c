/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2ea03c; end: 10b2ea1fb;  */

bool FUN_10b2ea03c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  func_0x00010b2eb07c();
  switch((param_2 - param_1) / 0x28) {
  case 0:
  case 1:
    break;
  case 2:
    if ((long)(unaff_x20[-2] + unaff_x20[-3]) < (long)(unaff_x19[3] + unaff_x19[2])) {
      uVar14 = unaff_x19[1];
      uVar13 = *unaff_x19;
      uVar16 = unaff_x19[3];
      uVar15 = unaff_x19[2];
      uVar9 = unaff_x19[4];
      uVar5 = unaff_x20[-1];
      uVar18 = unaff_x20[-2];
      uVar17 = unaff_x20[-3];
      uVar19 = unaff_x20[-5];
      unaff_x19[1] = unaff_x20[-4];
      *unaff_x19 = uVar19;
      unaff_x19[3] = uVar18;
      unaff_x19[2] = uVar17;
      unaff_x19[4] = uVar5;
      unaff_x20[-1] = uVar9;
      unaff_x20[-2] = uVar16;
      unaff_x20[-3] = uVar15;
      unaff_x20[-4] = uVar14;
      unaff_x20[-5] = uVar13;
      return true;
    }
    return true;
  case 3:
    FUN_10b2e9e7c();
    break;
  case 4:
    FUN_10b2e9f60();
    break;
  case 5:
    FUN_10b2e9fac();
    break;
  default:
    FUN_10b2e9e7c();
    lVar3 = 0;
    iVar4 = 0;
    puVar10 = unaff_x19 + 0xf;
    puVar12 = unaff_x19 + 10;
    while (puVar6 = puVar10, puVar6 != unaff_x20) {
      lVar7 = puVar6[2];
      lVar8 = puVar6[3];
      lVar1 = lVar8 + lVar7;
      if (lVar1 < (long)(puVar12[3] + puVar12[2])) {
        uVar13 = puVar6[1];
        uVar5 = *puVar6;
        uVar9 = puVar6[4];
        lVar2 = lVar3;
        do {
          lVar11 = lVar2;
          *(undefined8 *)((long)unaff_x19 + lVar11 + 0x80) =
               *(undefined8 *)((long)unaff_x19 + lVar11 + 0x58);
          *(undefined8 *)((long)unaff_x19 + lVar11 + 0x78) =
               *(undefined8 *)((long)unaff_x19 + lVar11 + 0x50);
          *(undefined8 *)((long)unaff_x19 + lVar11 + 0x90) =
               *(undefined8 *)((long)unaff_x19 + lVar11 + 0x68);
          *(undefined8 *)((long)unaff_x19 + lVar11 + 0x88) =
               *(undefined8 *)((long)unaff_x19 + lVar11 + 0x60);
          *(undefined8 *)((long)unaff_x19 + lVar11 + 0x98) =
               *(undefined8 *)((long)unaff_x19 + lVar11 + 0x70);
          puVar10 = unaff_x19;
          if (lVar11 == -0x50) goto LAB_10b2ea194;
          lVar2 = lVar11 + -0x28;
        } while (lVar1 < *(long *)((long)unaff_x19 + lVar11 + 0x40) +
                         *(long *)((long)unaff_x19 + lVar11 + 0x38));
        puVar10 = (undefined8 *)((long)unaff_x19 + lVar11 + 0x50);
LAB_10b2ea194:
        puVar10[1] = uVar13;
        *puVar10 = uVar5;
        puVar10[2] = lVar7;
        puVar10[3] = lVar8;
        puVar10[4] = uVar9;
        iVar4 = iVar4 + 1;
        if (iVar4 == 8) {
          return puVar6 + 5 == unaff_x20;
        }
      }
      lVar3 = lVar3 + 0x28;
      puVar12 = puVar6;
      puVar10 = puVar6 + 5;
    }
  }
  return true;
}



/* Entry: 10b2ea1fc; end: 10b2ea313;  */

void FUN_10b2ea1fc(long param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  if (1 < param_2) {
    lVar10 = ((long)param_3 - param_1) / 0x28;
    uVar11 = param_2 - 2U >> 1;
    if (lVar10 <= (long)uVar11) {
      uVar4 = lVar10 << 1 | 1;
      puVar12 = (undefined8 *)(param_1 + uVar4 * 0x28);
      uVar3 = lVar10 * 2 + 2;
      uVar14 = uVar4;
      if ((long)uVar3 < param_2) {
        plVar1 = puVar12 + 2;
        plVar7 = puVar12 + 3;
        plVar2 = puVar12 + 7;
        plVar8 = puVar12 + 8;
        lVar10 = 0x28;
        if (*plVar8 + *plVar2 <= *plVar7 + *plVar1) {
          lVar10 = 0;
        }
        puVar12 = (undefined8 *)((long)puVar12 + lVar10);
        uVar14 = uVar3;
        if (*plVar8 + *plVar2 <= *plVar7 + *plVar1) {
          uVar14 = uVar4;
        }
      }
      lVar6 = param_3[2];
      lVar9 = param_3[3];
      lVar10 = lVar9 + lVar6;
      if (lVar10 <= (long)(puVar12[3] + puVar12[2])) {
        uVar18 = param_3[1];
        uVar16 = *param_3;
        uVar15 = param_3[4];
        do {
          puVar13 = puVar12;
          uVar19 = puVar13[1];
          uVar17 = *puVar13;
          uVar21 = puVar13[3];
          uVar20 = puVar13[2];
          param_3[4] = puVar13[4];
          param_3[1] = uVar19;
          *param_3 = uVar17;
          param_3[3] = uVar21;
          param_3[2] = uVar20;
          if ((long)uVar11 < (long)uVar14) break;
          uVar4 = uVar14 << 1 | 1;
          puVar12 = (undefined8 *)(param_1 + uVar4 * 0x28);
          uVar3 = uVar14 * 2 + 2;
          uVar14 = uVar4;
          if ((long)uVar3 < param_2) {
            plVar1 = puVar12 + 2;
            plVar7 = puVar12 + 3;
            plVar2 = puVar12 + 7;
            plVar8 = puVar12 + 8;
            lVar5 = 0x28;
            if (*plVar8 + *plVar2 <= *plVar7 + *plVar1) {
              lVar5 = 0;
            }
            puVar12 = (undefined8 *)((long)puVar12 + lVar5);
            uVar14 = uVar3;
            if (*plVar8 + *plVar2 <= *plVar7 + *plVar1) {
              uVar14 = uVar4;
            }
          }
          param_3 = puVar13;
        } while (lVar10 <= (long)(puVar12[3] + puVar12[2]));
        puVar13[1] = uVar18;
        *puVar13 = uVar16;
        puVar13[2] = lVar6;
        puVar13[3] = lVar9;
        puVar13[4] = uVar15;
      }
    }
  }
  return;
}



/* Entry: 10b2ea314; end: 10b2ea34f;  */

undefined8 * FUN_10b2ea314(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd4680;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 6);
  func_0x000107c2c9b4(param_1 + 2);
  return param_1;
}



/* Entry: 10b2ea350; end: 10b2ea36b;  */

void FUN_10b2ea350(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10b2ea36c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2ea36c; end: 10b2ea393;  */

undefined8 * FUN_10b2ea36c(undefined8 *param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0xc);
  *param_1 = &PTR_FUN_110cd46c8;
  FUN_10b2ea3ec(param_1 + 4);
  FUN_10b2ea48c(param_1 + 1);
  return param_1;
}



/* Entry: 10b2ea394; end: 10b2ea397;  */

undefined8 * FUN_10b2ea394(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd46c8;
  FUN_10b2ea3ec(param_1 + 4);
  FUN_10b2ea48c(param_1 + 1);
  return param_1;
}



/* Entry: 10b2ea398; end: 10b2ea3d3;  */

undefined8 * FUN_10b2ea398(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd46c8;
  FUN_10b2ea3ec(param_1 + 4);
  FUN_10b2ea48c(param_1 + 1);
  return param_1;
}



/* Entry: 10b2ea3d4; end: 10b2ea3d7;  */

undefined8 * FUN_10b2ea3d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd46c8;
  FUN_10b2ea3ec(param_1 + 4);
  FUN_10b2ea48c(param_1 + 1);
  return param_1;
}



/* Entry: 10b2ea3d8; end: 10b2ea3eb;  */

void FUN_10b2ea3d8(void)

{
  FUN_10b2ea398();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2ea3ec; end: 10b2ea473;  */

long FUN_10b2ea3ec(long param_1)

{
  func_0x00010b2ea414(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_10b2ea474(param_1,0);
  return param_1;
}



/* Entry: 10b2ea474; end: 10b2ea48b;  */

void FUN_10b2ea474(long *param_1)

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



/* Entry: 10b2ea48c; end: 10b2ea4e7;  */

void FUN_10b2ea48c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1[2] != 0) {
    plVar3 = (long *)param_1[1];
    plVar1 = *(long **)(*param_1 + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    param_1[2] = 0;
    while (plVar3 != param_1) {
      plVar3 = (long *)plVar3[1];
      func_0x00010b2e8e98(param_1);
    }
  }
  return;
}



/* Entry: 10b2ea4e8; end: 10b2ea527;  */

void FUN_10b2ea4e8(void)

{
  FUN_10b2ea398();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2ea528; end: 10b2ea53b;  */

void FUN_10b2ea528(void)

{
  return;
}



/* Entry: 10b2ea53c; end: 10b2eab4f;  */

void FUN_10b2ea53c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,uint param_4)

{
  double *pdVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *puVar11;
  long extraout_x8_02;
  long lVar12;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  undefined8 *extraout_x9_01;
  ulong uVar13;
  undefined8 *extraout_x9_02;
  undefined8 *extraout_x10;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  long extraout_x10_00;
  ulong uVar17;
  undefined8 *extraout_x11;
  long lVar18;
  long extraout_x12;
  long extraout_x13;
  long extraout_x14;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  func_0x00010b2eb07c();
LAB_10b2ea564:
  puVar9 = unaff_x20 + -2;
  puVar8 = unaff_x19;
LAB_10b2ea574:
  while( true ) {
    unaff_x19 = puVar8;
    uVar10 = (long)unaff_x20 - (long)unaff_x19 >> 4;
    switch(uVar10) {
    case 0:
    case 1:
      return;
    case 2:
      if ((double)unaff_x19[1] <= (double)unaff_x20[-1]) {
        return;
      }
      func_0x00010b2eaf84();
      return;
    case 3:
      puVar8 = unaff_x19 + 2;
      func_0x000107c35c2c();
      dVar19 = (double)puVar8[1];
      if ((double)unaff_x19[1] <= dVar19) {
        if ((double)puVar9[1] < dVar19) {
          uVar21 = *puVar8;
          *puVar8 = *puVar9;
          *puVar9 = uVar21;
          uVar21 = puVar8[1];
          puVar8[1] = puVar9[1];
          puVar9[1] = uVar21;
          if ((double)puVar8[1] < (double)unaff_x19[1]) {
            uVar21 = *unaff_x19;
            *unaff_x19 = *puVar8;
            *puVar8 = uVar21;
            uVar21 = unaff_x19[1];
            unaff_x19[1] = puVar8[1];
            puVar8[1] = uVar21;
            return;
          }
        }
      }
      else {
        uVar21 = *unaff_x19;
        if (dVar19 <= (double)puVar9[1]) {
          *unaff_x19 = *puVar8;
          *puVar8 = uVar21;
          dVar19 = (double)unaff_x19[1];
          unaff_x19[1] = puVar8[1];
          puVar8[1] = dVar19;
          if (dVar19 <= (double)puVar9[1]) {
            return;
          }
          uVar21 = *puVar8;
          *puVar8 = *puVar9;
          *puVar9 = uVar21;
          uVar21 = puVar8[1];
          puVar8[1] = puVar9[1];
        }
        else {
          *unaff_x19 = *puVar9;
          *puVar9 = uVar21;
          uVar21 = unaff_x19[1];
          unaff_x19[1] = puVar9[1];
        }
        puVar9[1] = uVar21;
      }
      return;
    case 4:
      func_0x00010b2eb0bc();
      func_0x000107c35c2c(unaff_x19);
      func_0x00010b2eae40();
      FUN_10b2eab50();
      bVar5 = (double)param_3[1] < (double)unaff_x20[-1];
      if (((bVar5) && (func_0x00010b2eaec4(), bVar5)) && (func_0x00010b2eaef4(), bVar5)) {
        func_0x00010b2eaf60();
      }
      return;
    case 5:
      func_0x00010b2eb0bc();
      func_0x000107c35c2c(unaff_x19);
      func_0x00010b2eae40();
      FUN_10b2eac34();
      if ((double)puVar9[1] < (double)param_3[1]) {
        uVar21 = *param_3;
        *param_3 = *puVar9;
        *puVar9 = uVar21;
        uVar21 = param_3[1];
        param_3[1] = puVar9[1];
        puVar9[1] = uVar21;
        bVar5 = (double)param_3[1] < (double)unaff_x20[-1];
        if (((bVar5) && (func_0x00010b2eaec4(), bVar5)) && (func_0x00010b2eaef4(), bVar5)) {
          func_0x00010b2eaf60();
        }
      }
      return;
    }
    if ((long)uVar10 < 0x18) {
      if ((param_4 & 1) == 0) {
        if (unaff_x19 == unaff_x20) {
          return;
        }
        puVar8 = unaff_x19 + 3;
        while (puVar9 = unaff_x19 + 2, puVar9 != unaff_x20) {
          dVar19 = (double)unaff_x19[3];
          if (dVar19 < (double)unaff_x19[1]) {
            uVar21 = *puVar9;
            puVar11 = puVar8;
            do {
              puVar6 = puVar11;
              puVar6[-1] = puVar6[-3];
              *puVar6 = puVar6[-2];
              puVar11 = puVar6 + -2;
            } while (dVar19 < (double)puVar6[-4]);
            puVar6[-3] = uVar21;
            puVar6[-2] = dVar19;
          }
          puVar8 = puVar8 + 2;
          unaff_x19 = puVar9;
        }
        return;
      }
      if (unaff_x19 == unaff_x20) {
        return;
      }
      lVar18 = 0;
      puVar8 = unaff_x19;
      goto LAB_10b2ea8b4;
    }
    if (param_3 == (undefined8 *)0x0) {
      if (unaff_x19 == unaff_x20) {
        return;
      }
      uVar13 = uVar10 - 2 >> 1;
      uVar16 = uVar13;
      goto LAB_10b2ea930;
    }
    puVar8 = unaff_x19 + (uVar10 & 0xfffffffffffffffe);
    if (uVar10 < 0x81) {
      func_0x00010b2eb024(puVar8,unaff_x19);
    }
    else {
      func_0x00010b2eb024(unaff_x19,puVar8);
      FUN_10b2eab50(unaff_x19 + 2,puVar8 + -2,unaff_x20 + -4);
      FUN_10b2eab50(unaff_x19 + 4,puVar8 + 2,unaff_x20 + -6);
      FUN_10b2eab50(puVar8 + -2,puVar8,puVar8 + 2);
      uVar22 = unaff_x19[1];
      uVar21 = *unaff_x19;
      uVar20 = *puVar8;
      unaff_x19[1] = puVar8[1];
      *unaff_x19 = uVar20;
      puVar8[1] = uVar22;
      *puVar8 = uVar21;
    }
    param_3 = (undefined8 *)((long)param_3 + -1);
    if ((param_4 & 1) != 0) break;
    dVar19 = (double)unaff_x19[1];
    if ((double)unaff_x19[-1] < dVar19) goto LAB_10b2ea624;
    puVar11 = unaff_x19;
    if ((double)unaff_x20[-1] <= dVar19) {
      do {
        puVar8 = puVar11 + 2;
        if (unaff_x20 <= puVar8) break;
        pdVar1 = (double *)(puVar11 + 3);
        puVar11 = puVar8;
      } while (*pdVar1 <= dVar19);
    }
    else {
      do {
        puVar8 = puVar11 + 2;
        pdVar1 = (double *)(puVar11 + 3);
        puVar11 = puVar8;
      } while (*pdVar1 <= dVar19);
    }
    puVar11 = unaff_x20;
    puVar6 = unaff_x20;
    if (puVar8 < unaff_x20) {
      do {
        puVar11 = puVar6 + -2;
        pdVar1 = (double *)(puVar6 + -1);
        puVar6 = puVar11;
      } while (dVar19 < *pdVar1);
    }
    uVar21 = *unaff_x19;
    while (puVar8 < puVar11) {
      uVar22 = *puVar8;
      *puVar8 = *puVar11;
      *puVar11 = uVar22;
      uVar22 = puVar8[1];
      puVar8[1] = puVar11[1];
      puVar11[1] = uVar22;
      do {
        pdVar1 = (double *)(puVar8 + 3);
        puVar8 = puVar8 + 2;
      } while (*pdVar1 <= dVar19);
      do {
        pdVar1 = (double *)(puVar11 + -1);
        puVar11 = puVar11 + -2;
      } while (dVar19 < *pdVar1);
    }
    if (unaff_x19 != puVar8 + -2) {
      func_0x00010b2eb040();
    }
    param_4 = 0;
    puVar8[-2] = uVar21;
    puVar8[-1] = dVar19;
  }
  dVar19 = (double)unaff_x19[1];
LAB_10b2ea624:
  uVar21 = *unaff_x19;
  lVar18 = 0;
  do {
    lVar12 = lVar18;
    lVar18 = lVar12 + 0x10;
  } while (*(double *)((long)unaff_x19 + lVar12 + 0x18) < dVar19);
  puVar8 = (undefined8 *)((long)unaff_x19 + lVar18);
  uVar4 = lVar12 < 0;
  puVar11 = unaff_x20;
  if (lVar18 == 0x10) {
    do {
      puVar14 = puVar11;
      bVar5 = (long)puVar8 - (long)puVar14 < 0;
      puVar7 = puVar14;
      puVar6 = puVar8;
      if (puVar14 <= puVar8) break;
      func_0x00010b2eb054();
      puVar8 = extraout_x8_00;
      puVar14 = extraout_x9_00;
      puVar11 = extraout_x10;
      puVar7 = extraout_x9_00;
      puVar6 = extraout_x8_00;
    } while (!bVar5);
  }
  else {
    do {
      func_0x00010b2eb054();
      puVar14 = extraout_x9;
      puVar8 = extraout_x8;
      puVar7 = extraout_x9;
      puVar6 = extraout_x8;
    } while (!(bool)uVar4);
  }
  while (puVar8 < puVar14) {
    uVar22 = *puVar8;
    *puVar8 = *puVar14;
    *puVar14 = uVar22;
    uVar22 = puVar8[1];
    puVar8[1] = puVar14[1];
    puVar14[1] = uVar22;
    do {
      pdVar1 = (double *)(puVar8 + 3);
      puVar8 = puVar8 + 2;
    } while (*pdVar1 < dVar19);
    do {
      pdVar1 = (double *)(puVar14 + -1);
      puVar14 = puVar14 + -2;
    } while (dVar19 <= *pdVar1);
  }
  puVar11 = puVar8 + -2;
  if (unaff_x19 != puVar11) {
    func_0x00010b2eb040();
    puVar6 = extraout_x8_01;
    puVar7 = extraout_x9_01;
  }
  puVar8[-2] = uVar21;
  puVar8[-1] = dVar19;
  if (puVar7 <= puVar6) {
    puVar6 = unaff_x19;
    FUN_10b2eacf4(unaff_x19,puVar11);
    puVar7 = puVar8;
    FUN_10b2eacf4(puVar8,unaff_x20);
    if ((int)puVar7 != 0) goto LAB_10b2ea800;
    if (((ulong)puVar6 & 1) != 0) goto LAB_10b2ea574;
  }
  FUN_10b2ea53c(unaff_x19,puVar11,param_3,param_4 & 1);
  param_4 = 0;
  goto LAB_10b2ea574;
LAB_10b2ea8b4:
  puVar9 = puVar8 + 2;
  if (puVar9 == unaff_x20) {
    return;
  }
  dVar19 = (double)puVar8[3];
  if (dVar19 < (double)puVar8[1]) {
    uVar21 = *puVar9;
    lVar12 = lVar18;
    do {
      lVar15 = lVar12;
      puVar8 = (undefined8 *)((long)unaff_x19 + lVar15);
      puVar8[2] = *puVar8;
      puVar8[3] = puVar8[1];
      puVar11 = unaff_x19;
      if (lVar15 == 0) goto LAB_10b2ea908;
      lVar12 = lVar15 + -0x10;
    } while (dVar19 < (double)puVar8[-1]);
    puVar11 = (undefined8 *)((long)unaff_x19 + lVar15);
LAB_10b2ea908:
    *puVar11 = uVar21;
    puVar11[1] = dVar19;
  }
  lVar18 = lVar18 + 0x10;
  puVar8 = puVar9;
  goto LAB_10b2ea8b4;
LAB_10b2ea930:
  do {
    if ((long)uVar16 <= (long)uVar13) {
      uVar17 = (uVar16 & 0x3fffffffffffffff) << 1 | 1;
      puVar8 = unaff_x19 + uVar17 * 2;
      uVar2 = uVar16 * 2 + 2;
      if (((long)uVar2 < (long)uVar10) && ((double)puVar8[1] < (double)puVar8[3])) {
        puVar8 = puVar8 + 2;
        uVar17 = uVar2;
      }
      puVar9 = unaff_x19 + uVar16 * 2;
      dVar19 = (double)puVar9[1];
      if (dVar19 <= (double)puVar8[1]) {
        uVar21 = *puVar9;
        do {
          puVar11 = puVar8;
          *puVar9 = *puVar11;
          puVar9[1] = puVar11[1];
          if ((long)uVar13 < (long)uVar17) break;
          uVar3 = uVar17 << 1 | 1;
          puVar8 = unaff_x19 + uVar3 * 2;
          uVar2 = uVar17 * 2 + 2;
          uVar17 = uVar3;
          if (((long)uVar2 < (long)uVar10) && ((double)puVar8[1] < (double)puVar8[3])) {
            puVar8 = puVar8 + 2;
            uVar17 = uVar2;
          }
          puVar9 = puVar11;
        } while (dVar19 <= (double)puVar8[1]);
        *puVar11 = uVar21;
        puVar11[1] = dVar19;
      }
    }
    uVar16 = uVar16 - 1;
  } while (-1 < (long)uVar16);
  do {
    if ((long)uVar10 < 2) {
      return;
    }
    uVar21 = *unaff_x19;
    dVar19 = (double)unaff_x19[1];
    do {
      func_0x00010b2eb0c8();
      puVar8 = extraout_x9_02;
      lVar18 = extraout_x13;
      if ((extraout_x12 < extraout_x8_02) &&
         (puVar8 = extraout_x9_02,
         *(double *)(extraout_x14 + 0x18) < *(double *)(extraout_x14 + 0x28))) {
        puVar8 = (undefined8 *)(extraout_x14 + 0x20);
        lVar18 = extraout_x12;
      }
      *extraout_x11 = *puVar8;
      extraout_x11[1] = puVar8[1];
    } while (lVar18 <= extraout_x10_00);
    if (puVar8 == unaff_x20 + -2) {
LAB_10b2eaadc:
      *puVar8 = uVar21;
      puVar8[1] = dVar19;
    }
    else {
      *puVar8 = unaff_x20[-2];
      puVar8[1] = unaff_x20[-1];
      unaff_x20[-2] = uVar21;
      unaff_x20[-1] = dVar19;
      lVar18 = (long)puVar8 + (0x10 - (long)unaff_x19) >> 4;
      if (1 < lVar18) {
        uVar10 = lVar18 - 2U >> 1;
        dVar19 = (double)puVar8[1];
        if ((double)(unaff_x19 + uVar10 * 2)[1] < dVar19) {
          uVar21 = *puVar8;
          puVar9 = puVar8;
          puVar11 = unaff_x19 + uVar10 * 2;
          do {
            puVar8 = puVar11;
            *puVar9 = *puVar8;
            puVar9[1] = puVar8[1];
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1 >> 1;
            puVar9 = puVar8;
            puVar11 = unaff_x19 + uVar10 * 2;
          } while ((double)(unaff_x19 + uVar10 * 2)[1] < dVar19);
          goto LAB_10b2eaadc;
        }
      }
    }
    uVar10 = extraout_x8_02 - 1;
    unaff_x20 = unaff_x20 + -2;
  } while( true );
LAB_10b2ea800:
  unaff_x20 = puVar11;
  if (((ulong)puVar6 & 1) != 0) {
    return;
  }
  goto LAB_10b2ea564;
}



/* Entry: 10b2eab50; end: 10b2eac33;  */

void FUN_10b2eab50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  double dVar2;
  
  dVar2 = (double)param_2[1];
  if ((double)param_1[1] <= dVar2) {
    if ((double)param_3[1] < dVar2) {
      uVar1 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar1;
      uVar1 = param_2[1];
      param_2[1] = param_3[1];
      param_3[1] = uVar1;
      if ((double)param_2[1] < (double)param_1[1]) {
        uVar1 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar1;
        uVar1 = param_1[1];
        param_1[1] = param_2[1];
        param_2[1] = uVar1;
        return;
      }
    }
  }
  else {
    uVar1 = *param_1;
    if (dVar2 <= (double)param_3[1]) {
      *param_1 = *param_2;
      *param_2 = uVar1;
      dVar2 = (double)param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = dVar2;
      if (dVar2 <= (double)param_3[1]) {
        return;
      }
      uVar1 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar1;
      uVar1 = param_2[1];
      param_2[1] = param_3[1];
    }
    else {
      *param_1 = *param_3;
      *param_3 = uVar1;
      uVar1 = param_1[1];
      param_1[1] = param_3[1];
    }
    param_3[1] = uVar1;
  }
  return;
}



/* Entry: 10b2eac34; end: 10b2eac77;  */

void FUN_10b2eac34(void)

{
  bool bVar1;
  long unaff_x21;
  long unaff_x22;
  
  FUN_10b2eae40();
  FUN_10b2eab50();
  bVar1 = *(double *)(unaff_x22 + 8) < *(double *)(unaff_x21 + 8);
  if (((bVar1) && (func_0x00010b2eaec4(), bVar1)) && (func_0x00010b2eaef4(), bVar1)) {
    func_0x00010b2eaf60();
  }
  return;
}



/* Entry: 10b2eac78; end: 10b2eacf3;  */

void FUN_10b2eac78(void)

{
  bool bVar1;
  undefined8 *in_x4;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar2;
  
  FUN_10b2eae40();
  FUN_10b2eac34();
  if ((double)in_x4[1] < (double)unaff_x22[1]) {
    uVar2 = *unaff_x22;
    *unaff_x22 = *in_x4;
    *in_x4 = uVar2;
    uVar2 = unaff_x22[1];
    unaff_x22[1] = in_x4[1];
    in_x4[1] = uVar2;
    bVar1 = (double)unaff_x22[1] < *(double *)(unaff_x21 + 8);
    if (((bVar1) && (func_0x00010b2eaec4(), bVar1)) && (func_0x00010b2eaef4(), bVar1)) {
      func_0x00010b2eaf60();
    }
  }
  return;
}



/* Entry: 10b2eacf4; end: 10b2eae3f;  */

void FUN_10b2eacf4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar7;
  double dVar8;
  undefined8 uVar9;
  
  func_0x00010b2eb07c();
  switch(param_2 - param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    if ((double)unaff_x20[-1] < (double)unaff_x19[1]) {
      func_0x00010b2eaf84();
    }
    break;
  case 3:
    FUN_10b2eab50();
    break;
  case 4:
    func_0x00010b2eb0bc(1);
    FUN_10b2eac34();
    break;
  case 5:
    func_0x00010b2eb0bc(1);
    FUN_10b2eac78();
    break;
  default:
    func_0x00010b2eb024();
    lVar2 = 0;
    iVar3 = 0;
    puVar6 = unaff_x19 + 6;
    puVar7 = unaff_x19 + 4;
    while (puVar4 = puVar6, puVar4 != unaff_x20) {
      dVar8 = (double)puVar4[1];
      if (dVar8 < (double)puVar7[1]) {
        uVar9 = *puVar4;
        lVar1 = lVar2;
        do {
          lVar5 = lVar1;
          *(undefined8 *)((long)unaff_x19 + lVar5 + 0x30) =
               *(undefined8 *)((long)unaff_x19 + lVar5 + 0x20);
          *(undefined8 *)((long)unaff_x19 + lVar5 + 0x38) =
               *(undefined8 *)((long)unaff_x19 + lVar5 + 0x28);
          puVar6 = unaff_x19;
          if (lVar5 == -0x20) goto LAB_10b2eadec;
          lVar1 = lVar5 + -0x10;
        } while (dVar8 < *(double *)((long)unaff_x19 + lVar5 + 0x18));
        puVar6 = (undefined8 *)((long)unaff_x19 + lVar5 + 0x20);
LAB_10b2eadec:
        *puVar6 = uVar9;
        puVar6[1] = dVar8;
        iVar3 = iVar3 + 1;
        if (iVar3 == 8) {
          return;
        }
      }
      lVar2 = lVar2 + 0x10;
      puVar7 = puVar4;
      puVar6 = puVar4 + 2;
    }
  }
  return;
}



/* Entry: 10b2eae40; end: 10b2eb0ff;  */

void FUN_10b2eae40(void)

{
  return;
}



/* Entry: 10b2eb100; end: 10b2eb517;  */

void FUN_10b2eb100(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long extraout_x8;
  long lVar12;
  undefined8 *puVar13;
  long extraout_x8_00;
  ulong uVar14;
  undefined8 *puVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uStack_d0;
  ulong *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  
  lVar12 = param_2;
  func_0x00010b479758();
  lVar2 = 0;
  if (param_2 != -1) {
    lVar2 = param_2;
  }
  lVar3 = 0;
  if (param_3 != -1) {
    lVar3 = param_3;
  }
  lVar4 = 0;
  if (param_4 != -1) {
    lVar4 = param_4;
  }
  puVar16 = (ulong *)(param_1 + 200);
  uVar14 = *puVar16;
  uVar10 = *(ulong *)(param_1 + 0xc0);
  if (*(uint *)(param_1 + 0xd0) < uVar14) {
    uVar14 = uVar14 - 1;
    uVar10 = uVar10 + 1;
    *(ulong *)(param_1 + 0xc0) = uVar10;
    *(ulong *)(param_1 + 200) = uVar14;
    if (0x153 < uVar10) {
      func_0x00010b2ecdd0(*(undefined8 *)(param_1 + 0xa8));
      *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + 8;
      uVar14 = *(ulong *)(param_1 + 200);
      uVar10 = *(long *)(param_1 + 0xc0) - 0xaa;
      *(ulong *)(param_1 + 0xc0) = uVar10;
    }
  }
  puVar21 = *(undefined8 **)(param_1 + 0xa8);
  puVar17 = *(undefined8 **)(param_1 + 0xb0);
  uVar5 = (long)puVar17 - (long)puVar21;
  lVar9 = 0;
  if (uVar5 != 0) {
    lVar9 = ((long)puVar17 - (long)puVar21 >> 3) * 0xaa + -1;
  }
  if (lVar9 == uVar10 + uVar14) {
    if (uVar10 < 0xaa) {
      puVar15 = (undefined8 *)(param_1 + 0xb8);
      puVar19 = (undefined8 *)*puVar15;
      puVar20 = *(undefined8 **)(param_1 + 0xa0);
      if (uVar5 < (ulong)((long)puVar19 - (long)puVar20)) {
        uVar8 = 0xff0;
        __Znwm();
        if (puVar19 == puVar17) {
          if (puVar21 == puVar20) {
            lVar12 = (long)puVar19 - (long)puVar21 >> 2;
            if (puVar17 == puVar21) {
              lVar12 = 1;
            }
            puStack_70 = puVar15;
            FUN_10b2ecc74();
            func_0x00010b2ecef8(lVar12 * 2 + 6);
            FUN_10b2ecc50(&puStack_90,*(undefined8 *)(param_1 + 0xa8),
                          *(undefined8 *)(param_1 + 0xb0));
            puVar17 = *(undefined8 **)(param_1 + 0xa8);
            puVar21 = *(undefined8 **)(param_1 + 0xa0);
            puVar19 = *(undefined8 **)(param_1 + 0xb8);
            puVar15 = *(undefined8 **)(param_1 + 0xb0);
            *(undefined8 **)(param_1 + 0xa8) = puStack_88;
            *(undefined8 **)(param_1 + 0xa0) = puStack_90;
            *(undefined8 **)(param_1 + 0xb8) = puStack_78;
            *(undefined8 **)(param_1 + 0xb0) = puStack_80;
            puStack_90 = puVar21;
            puStack_88 = puVar17;
            puStack_80 = puVar15;
            puStack_78 = puVar19;
            func_0x00010b2ecf6c();
            puVar21 = *(undefined8 **)(param_1 + 0xa8);
          }
          puVar21[-1] = uVar8;
          *(undefined8 **)(param_1 + 0xa8) = puVar21;
          FUN_10b2ecbc8(param_1 + 0xa0,uVar8);
        }
        else {
          *puVar17 = uVar8;
          *(undefined8 **)(param_1 + 0xb0) = puVar17 + 1;
        }
      }
      else {
        puVar11 = (undefined8 *)((long)puVar19 - (long)puVar20 >> 2);
        if (puVar19 == puVar20) {
          puVar11 = (undefined8 *)0x1;
        }
        puStack_98 = puVar15;
        FUN_10b2ecc74();
        puVar19 = (undefined8 *)((long)puVar11 + uVar5);
        puVar20 = puVar11 + lVar12;
        uVar8 = 0xff0;
        lVar9 = lVar12;
        puStack_b8 = puVar11;
        puStack_b0 = puVar19;
        puStack_a8 = puVar19;
        puStack_a0 = puVar20;
        __Znwm();
        uStack_c0 = 0xaa;
        puVar13 = puVar19;
        puStack_c8 = puVar16;
        if (uVar5 == lVar12 * 8) {
          uStack_d0 = uVar8;
          if (puVar17 == puVar21) {
            puVar21 = (undefined8 *)0x1;
            puStack_70 = puVar15;
            FUN_10b2ecc74();
            puStack_78 = puVar21 + lVar9;
            puStack_90 = puVar21;
            puStack_88 = puVar21;
            puStack_80 = puVar21;
            FUN_10b2ecc50(&puStack_90,puVar19,puVar19);
            puVar1 = puStack_78;
            puVar13 = puStack_80;
            puVar17 = puStack_88;
            puVar21 = puStack_90;
            puStack_b8 = puStack_90;
            puStack_b0 = puStack_88;
            puStack_a0 = puStack_78;
            puStack_90 = puVar11;
            puStack_88 = puVar19;
            puStack_80 = puVar19;
            puStack_78 = puVar20;
            func_0x00010b2ecf6c();
            puVar11 = puVar21;
            puVar19 = puVar17;
            puVar20 = puVar1;
          }
          else {
            func_0x00010b2ecdec((long)puVar19 - (long)puVar11);
            puStack_b0 = puVar19 + extraout_x8;
            puVar19 = puStack_b0;
            puVar13 = puStack_b0;
          }
        }
        puVar21 = puVar13 + 1;
        *puVar13 = uVar8;
        uStack_d0 = 0;
        puVar17 = *(undefined8 **)(param_1 + 0xb0);
        puStack_a8 = puVar21;
        while (puVar13 = *(undefined8 **)(param_1 + 0xa8), puVar17 != puVar13) {
          puVar13 = puVar19;
          if (puVar19 == puVar11) {
            if (puVar21 < puVar20) {
              func_0x00010b2ecdd8((long)puVar20 - (long)puVar21);
              lVar12 = (long)puVar21 - (long)puVar11;
              puVar1 = puVar21 + extraout_x8_00;
              puVar13 = (undefined8 *)((long)puVar1 - ((long)puVar21 - (long)puVar11));
              puVar21 = puVar1;
              if (lVar12 != 0) {
                _memmove(puVar13,puVar19,lVar12);
              }
            }
            else {
              lVar12 = (long)puVar20 - (long)puVar11 >> 2;
              if ((long)puVar20 - (long)puVar11 == 0) {
                lVar12 = 1;
              }
              puStack_70 = puVar15;
              FUN_10b2ecc74(lVar12);
              func_0x00010b2ecef8(lVar12 * 2 + 6);
              FUN_10b2ecc50(&puStack_90,puVar11,puVar21);
              puVar7 = puStack_78;
              puVar6 = puStack_80;
              puVar13 = puStack_88;
              puVar1 = puStack_90;
              puStack_90 = puVar11;
              puStack_88 = puVar19;
              puStack_80 = puVar21;
              puStack_78 = puVar20;
              func_0x00010b2ecf6c();
              puVar11 = puVar1;
              puVar21 = puVar6;
              puVar20 = puVar7;
            }
          }
          puVar17 = puVar17 + -1;
          puVar19 = puVar13 + -1;
          *puVar19 = *puVar17;
        }
        puStack_b8 = *(undefined8 **)(param_1 + 0xa0);
        *(undefined8 **)(param_1 + 0xa0) = puVar11;
        *(undefined8 **)(param_1 + 0xa8) = puVar19;
        puStack_a0 = *(undefined8 **)(param_1 + 0xb8);
        puStack_a8 = *(undefined8 **)(param_1 + 0xb0);
        *(undefined8 **)(param_1 + 0xb0) = puVar21;
        *(undefined8 **)(param_1 + 0xb8) = puVar20;
        puStack_b0 = puVar13;
        func_0x00010b2ecc9c(&uStack_d0);
        func_0x00010b2eccc0(&puStack_b8);
      }
    }
    else {
      *(ulong *)(param_1 + 0xc0) = uVar10 - 0xaa;
      uVar8 = *puVar21;
      *(undefined8 **)(param_1 + 0xa8) = puVar21 + 1;
      FUN_10b2ecbc8(param_1 + 0xa0,uVar8);
    }
  }
  plVar18 = (long *)(param_1 + 0xa0);
  FUN_10b2ec9fc();
  *plVar18 = lVar2;
  plVar18[1] = lVar3;
  plVar18[2] = lVar4;
  *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
  lVar12 = lVar4;
  func_0x000107c3016c(lVar4);
  plVar18 = (long *)(param_1 + 0x18);
  while (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0) {
    (**(code **)(*(long *)plVar18[2] + 0x18))((long *)plVar18[2],lVar12,lVar4);
  }
  plVar18 = *(long **)(param_1 + 0x30);
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))(plVar18,lVar2,lVar3,lVar4);
  }
  return;
}



/* Entry: 10b2eb518; end: 10b2eb583;  */

void FUN_10b2eb518(void)

{
  long *plVar1;
  long unaff_x22;
  undefined1 auStack_58 [24];
  undefined1 uStack_40;
  
  func_0x00010b2ece8c();
  func_0x00010b2ece20();
  func_0x00010b2ecf34();
  func_0x00010b2ecf28();
  plVar1 = *(long **)(unaff_x22 + 0x30);
  if (plVar1 != (long *)0x0) {
    auStack_58[0] = 0;
    uStack_40 = 0;
    (**(code **)(*plVar1 + 0x10))(plVar1,auStack_58);
    func_0x00010b2eceb4();
  }
  return;
}



/* Entry: 10b2eb584; end: 10b2eb5ef;  */

void FUN_10b2eb584(void)

{
  long *plVar1;
  long unaff_x22;
  undefined1 auStack_58 [24];
  undefined1 uStack_40;
  
  func_0x00010b2ece8c();
  func_0x00010b2ece20();
  func_0x00010b2ecf34();
  func_0x00010b2ecf28();
  plVar1 = *(long **)(unaff_x22 + 0x30);
  if (plVar1 != (long *)0x0) {
    auStack_58[0] = 0;
    uStack_40 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,auStack_58);
    func_0x00010b2eceb4();
  }
  return;
}



/* Entry: 10b2eb5f0; end: 10b2eb9f7;  */

void FUN_10b2eb5f0(long param_1,uint param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  uint *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long extraout_x8;
  long *plVar11;
  long extraout_x8_00;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 *puVar20;
  long *plVar21;
  uint *puVar22;
  ulong *puVar23;
  long *plVar24;
  long lStack_d0;
  ulong *puStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 *puStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 *puStack_70;
  
  func_0x00010b479758();
  puVar6 = (uint *)&UNK_10f743d6d;
  plVar7 = (long *)0x28;
  func_0x000107c30180(&UNK_10f743d6d,0x28,0);
  if (((ulong)puVar6 & 1) == 0) {
    if (*(long *)(param_1 + 0x70) != 0) {
      puVar6 = (uint *)(param_1 + 0x48);
      FUN_10b2eba34();
      if (*puVar6 == param_2) goto LAB_10b2eb650;
    }
    plVar10 = (long *)(param_1 + 0x18);
    while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
      plVar7 = (long *)(ulong)(1 < param_2);
      puVar6 = (uint *)plVar10[2];
      (**(code **)(*(long *)puVar6 + 0x10))();
    }
  }
LAB_10b2eb650:
  puVar23 = (ulong *)(param_1 + 0x70);
  uVar13 = *puVar23;
  puVar22 = (uint *)(param_1 + 0x48);
  uVar9 = *(ulong *)(param_1 + 0x68);
  if (*(uint *)(param_1 + 0xd0) < uVar13) {
    uVar13 = uVar13 - 1;
    uVar9 = uVar9 + 1;
    *(ulong *)(param_1 + 0x68) = uVar9;
    *(ulong *)(param_1 + 0x70) = uVar13;
    if (0x7ff < uVar9) {
      func_0x00010b2ecdd0(*(undefined8 *)(param_1 + 0x50));
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 8;
      uVar13 = *(ulong *)(param_1 + 0x70);
      uVar9 = *(long *)(param_1 + 0x68) - 0x400;
      *(ulong *)(param_1 + 0x68) = uVar9;
    }
  }
  puVar20 = *(undefined8 **)(param_1 + 0x50);
  puVar1 = *(undefined8 **)(param_1 + 0x58);
  uVar2 = (long)puVar1 - (long)puVar20;
  lVar12 = 0;
  if (uVar2 != 0) {
    lVar12 = ((long)puVar1 - (long)puVar20) * 0x80 + -1;
  }
  if (lVar12 != uVar9 + uVar13) goto LAB_10b2eb964;
  if (uVar9 < 0x400) {
    puVar14 = (undefined8 *)(param_1 + 0x60);
    puVar17 = (undefined8 *)*puVar14;
    puVar18 = *(undefined8 **)(param_1 + 0x48);
    if ((ulong)((long)puVar17 - (long)puVar18) <= uVar2) {
      plVar10 = (long *)((long)puVar17 - (long)puVar18 >> 2);
      if (puVar17 == puVar18) {
        plVar10 = (long *)0x1;
      }
      puStack_98 = puVar14;
      FUN_10b2ec970();
      plVar21 = (long *)((long)plVar10 + uVar2);
      plVar24 = plVar10 + (long)plVar7;
      plVar11 = plVar10;
      plStack_b8 = plVar10;
      plStack_b0 = plVar21;
      plStack_a8 = plVar21;
      plStack_a0 = plVar24;
      func_0x00010b2ece9c();
      uStack_c0 = 0x400;
      plVar16 = plVar10;
      plVar19 = plVar21;
      puStack_c8 = puVar23;
      if (uVar2 == (long)plVar7 * 8) {
        lStack_d0 = (long)plVar11;
        if (puVar1 == puVar20) {
          puStack_70 = puVar14;
          FUN_10b2ec970(1);
          func_0x00010b2ecebc();
          FUN_10b2ec94c();
          plVar21 = plStack_88;
          plVar16 = plStack_90;
          plStack_b8 = plStack_90;
          plStack_b0 = plStack_88;
          func_0x00010b2ecf10();
          func_0x00010b2ec9bc();
          plVar19 = plVar7;
          plVar24 = plVar10;
        }
        else {
          func_0x00010b2ecdec((long)plVar21 - (long)plVar10);
          plVar21 = plVar21 + extraout_x8;
          plVar19 = plVar21;
          plStack_b0 = plVar21;
        }
      }
      plVar7 = plVar19 + 1;
      *plVar19 = (long)plVar11;
      lStack_d0 = 0;
      plVar10 = *(long **)(param_1 + 0x58);
      plStack_a8 = plVar7;
      while (plVar11 = *(long **)(param_1 + 0x50), plVar10 != plVar11) {
        if (plVar21 == plVar16) {
          if (plVar7 < plVar24) {
            func_0x00010b2ecdd8((long)plVar24 - (long)plVar7);
            bVar5 = plVar7 != plVar16;
            plVar11 = plVar7 + extraout_x8_00;
            plVar21 = (long *)((long)plVar11 - ((long)plVar7 - (long)plVar16));
            plVar7 = plVar11;
            if (bVar5) {
              func_0x00010b2ecf48();
            }
          }
          else {
            lVar12 = (long)plVar24 - (long)plVar16 >> 2;
            if ((long)plVar24 - (long)plVar16 == 0) {
              lVar12 = 1;
            }
            puStack_70 = puVar14;
            FUN_10b2ec970(lVar12);
            func_0x00010b2ecd00(lVar12 * 2 + 6);
            FUN_10b2ec94c(&plStack_90,plVar16,plVar7);
            plVar4 = plStack_78;
            plVar3 = plStack_80;
            plVar19 = plStack_88;
            plVar11 = plStack_90;
            plStack_90 = plVar16;
            plStack_88 = plVar21;
            plStack_80 = plVar7;
            plStack_78 = plVar24;
            func_0x00010b2ec9bc(&plStack_90);
            plVar16 = plVar11;
            plVar7 = plVar3;
            plVar21 = plVar19;
            plVar24 = plVar4;
          }
        }
        plVar10 = plVar10 + -1;
        plVar21 = plVar21 + -1;
        *plVar21 = *plVar10;
      }
      plStack_b8 = *(long **)(param_1 + 0x48);
      *(long **)(param_1 + 0x48) = plVar16;
      *(long **)(param_1 + 0x50) = plVar21;
      plStack_a0 = *(long **)(param_1 + 0x60);
      plStack_a8 = *(long **)(param_1 + 0x58);
      *(long **)(param_1 + 0x58) = plVar7;
      *(long **)(param_1 + 0x60) = plVar24;
      plStack_b0 = plVar11;
      func_0x00010b2ec998(&lStack_d0);
      func_0x00010b2ec9bc(&plStack_b8);
      goto LAB_10b2eb964;
    }
    func_0x00010b2ece9c();
    if (puVar17 != puVar1) {
      *puVar1 = puVar6;
      *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 8;
      goto LAB_10b2eb964;
    }
    if (puVar20 == puVar18) {
      lVar12 = (long)puVar17 - (long)puVar20 >> 2;
      if (puVar1 == puVar20) {
        lVar12 = 1;
      }
      puStack_70 = puVar14;
      FUN_10b2ec970();
      func_0x00010b2ecd00(lVar12 * 2 + 6);
      FUN_10b2ec94c(&plStack_90,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
      plVar10 = *(long **)(param_1 + 0x50);
      plVar7 = *(long **)(param_1 + 0x48);
      *(long **)(param_1 + 0x50) = plStack_88;
      *(long **)(param_1 + 0x48) = plStack_90;
      plVar21 = *(long **)(param_1 + 0x60);
      plVar24 = *(long **)(param_1 + 0x58);
      *(long **)(param_1 + 0x60) = plStack_78;
      *(long **)(param_1 + 0x58) = plStack_80;
      plStack_90 = plVar7;
      plStack_88 = plVar10;
      plStack_80 = plVar24;
      plStack_78 = plVar21;
      func_0x00010b2ec9bc(&plStack_90);
      puVar20 = *(undefined8 **)(param_1 + 0x50);
    }
    puVar20[-1] = puVar6;
    lVar12 = *(long *)(param_1 + 0x50);
    *(long *)(param_1 + 0x50) = lVar12 + -8;
    uVar8 = *(undefined8 *)(lVar12 + -8);
    *(long *)(param_1 + 0x50) = lVar12;
  }
  else {
    *(ulong *)(param_1 + 0x68) = uVar9 - 0x400;
    uVar8 = *puVar20;
    *(undefined8 **)(param_1 + 0x50) = puVar20 + 1;
  }
  FUN_10b2ec8bc(puVar22,uVar8);
LAB_10b2eb964:
  FUN_10b2ec604();
  *puVar22 = param_2;
  *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
  if (*(long *)(param_1 + 0x90) != 0) {
    func_0x00010b2ec6ac(param_1 + 0x78,*(undefined8 *)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x88) = 0;
    lVar15 = *(long *)(param_1 + 0x80);
    for (lVar12 = 0; lVar15 != lVar12; lVar12 = lVar12 + 1) {
      *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar12 * 8) = 0;
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  FUN_10b2eba58(param_1 + 0xa0);
  return;
}



/* Entry: 10b2eb9f8; end: 10b2eba33;  */

undefined8 * FUN_10b2eb9f8(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_110cd47c8;
  func_0x000107c2c5c8(param_1 + 6);
  FUN_10b2ec488(param_1 + 1);
  return param_1;
}



/* Entry: 10b2eba34; end: 10b2eba57;  */

long FUN_10b2eba34(long param_1)

{
  ulong uVar1;
  
  uVar1 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
  return *(long *)(*(long *)(param_1 + 8) + (uVar1 >> 10) * 8) + (uVar1 & 0x3ff) * 4;
}



/* Entry: 10b2eba58; end: 10b2ebb87;  */

void FUN_10b2eba58(void)

{
  undefined1 in_CY;
  undefined8 uVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b2ecee8();
  while (func_0x00010b2ece00(), (bool)in_CY) {
    func_0x00010b2ecdd0();
    func_0x00010b2ecdc0();
  }
  if (extraout_x9 == 1) {
    uVar1 = 0x55;
  }
  else {
    if (extraout_x9 != 2) {
      return;
    }
    uVar1 = 0xaa;
  }
  *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
  return;
}



/* Entry: 10b2ebb88; end: 10b2ebed7;  */

long * FUN_10b2ebb88(long *param_1,uint *param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 in_ZR;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  ulong uVar9;
  ulong extraout_x9;
  ulong uVar10;
  ulong extraout_x9_00;
  long *plVar11;
  long *plVar12;
  long *extraout_x10;
  ulong uVar13;
  ulong uVar14;
  ulong extraout_x11;
  ulong uVar15;
  long *plVar16;
  ulong unaff_x21;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  uVar2 = *param_2;
  uVar17 = (ulong)uVar2;
  uVar19 = param_1[1];
  if (uVar19 != 0) {
    func_0x000107c35c4c();
    uVar18 = (uint)uVar19;
    if ((bool)in_ZR) {
      unaff_x21 = (ulong)(uVar18 - 1 & uVar2);
    }
    else {
      unaff_x21 = uVar17;
      if (uVar19 <= uVar17) {
        uVar3 = 0;
        if (uVar18 != 0) {
          uVar3 = uVar2 / uVar18;
        }
        unaff_x21 = (ulong)(uVar2 - uVar3 * uVar18);
      }
    }
    plVar16 = *(long **)(*param_1 + unaff_x21 * 8);
    if (plVar16 != (long *)0x0) {
      do {
        while( true ) {
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) goto LAB_10b2ebc34;
          uVar9 = plVar16[1];
          if (uVar9 != uVar17) break;
          if (*(uint *)(plVar16 + 2) == uVar2) goto LAB_10b2ebea4;
        }
        if ((uVar19 & extraout_x8) == 0) {
          uVar9 = uVar9 & extraout_x8;
        }
        else if (uVar19 <= uVar9) {
          uVar15 = 0;
          if (uVar19 != 0) {
            uVar15 = uVar9 / uVar19;
          }
          uVar9 = uVar9 - uVar15 * uVar19;
        }
      } while (uVar9 == unaff_x21);
    }
  }
LAB_10b2ebc34:
  plVar1 = param_1 + 2;
  plVar16 = (long *)0x48;
  __Znwm();
  uStack_48 = 1;
  *plVar16 = 0;
  plVar16[1] = uVar17;
  *(uint *)(plVar16 + 2) = uVar2;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[8] = 0;
  plVar16[7] = 0;
  plStack_50 = plVar1;
  if ((uVar19 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar19))
  goto LAB_10b2ebe2c;
  plStack_58 = plVar16;
  func_0x000107c35c44();
  bVar5 = 2 < uVar19;
  bVar6 = uVar19 == 3;
  func_0x000107c35c50();
  uVar9 = extraout_x8_00;
  if (!bVar5 || bVar6) {
    uVar9 = extraout_x9;
  }
  if (uVar9 - 1 == 0) {
    uVar9 = 2;
  }
  else if ((uVar9 & uVar9 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar19 = param_1[1];
  }
  uVar7 = uVar9 == uVar19;
  if (uVar19 < uVar9) {
LAB_10b2ebcd8:
    if (uVar9 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10b2ebec8);
      (*pcVar4)();
    }
    lVar8 = uVar9 << 3;
    __Znwm(lVar8);
    func_0x00010b2eca34(param_1,lVar8);
    param_1[1] = uVar9;
    lVar8 = *param_1;
    for (uVar19 = 0; uVar7 = uVar9 == uVar19, !(bool)uVar7; uVar19 = uVar19 + 1) {
      *(undefined8 *)(lVar8 + uVar19 * 8) = 0;
    }
    plVar11 = (long *)*plVar1;
    uVar19 = uVar9;
    if (plVar11 != (long *)0x0) {
      uVar13 = plVar11[1];
      uVar10 = uVar9 - 1;
      uVar15 = 0;
      if (uVar9 != 0) {
        uVar15 = uVar13 / uVar9;
      }
      uVar14 = uVar13;
      if (uVar9 <= uVar13) {
        uVar14 = uVar13 - uVar15 * uVar9;
      }
      uVar7 = (uVar9 & uVar10) == 0;
      if ((bool)uVar7) {
        uVar14 = uVar13 & uVar10;
      }
      *(long **)(lVar8 + uVar14 * 8) = plVar1;
      while (plVar12 = plVar11, plVar11 = (long *)*plVar12, plVar11 != (long *)0x0) {
        uVar15 = plVar11[1];
        if ((uVar9 & uVar10) == 0) {
          uVar15 = uVar15 & uVar10;
        }
        else if (uVar9 <= uVar15) {
          uVar13 = 0;
          if (uVar9 != 0) {
            uVar13 = uVar15 / uVar9;
          }
          uVar15 = uVar15 - uVar13 * uVar9;
        }
        uVar7 = uVar15 == uVar14;
        if (!(bool)uVar7) {
          if (*(long *)(lVar8 + uVar15 * 8) == 0) {
            *(long **)(lVar8 + uVar15 * 8) = plVar12;
            uVar14 = uVar15;
          }
          else {
            func_0x00010b2ece6c();
            lVar8 = extraout_x8_01;
            uVar10 = extraout_x9_00;
            plVar11 = extraout_x10;
            uVar14 = extraout_x11;
          }
        }
      }
    }
  }
  else if (uVar9 < uVar19) {
    uVar15 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar19 < 3) || ((uVar19 & uVar19 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010b2ece4c();
    }
    if (uVar9 <= uVar15) {
      uVar9 = uVar15;
    }
    uVar7 = uVar9 == uVar19;
    if (uVar9 < uVar19) {
      if (uVar9 != 0) goto LAB_10b2ebcd8;
      func_0x00010b2eca34(param_1,0);
      param_1[1] = 0;
      uVar19 = 0;
    }
    else {
      uVar19 = param_1[1];
    }
  }
  func_0x000107c35c4c();
  if ((bool)uVar7) {
    unaff_x21 = (ulong)((int)uVar19 - 1U & uVar2);
  }
  else {
    unaff_x21 = uVar17;
    if (uVar19 <= uVar17) {
      uVar9 = 0;
      if (uVar19 != 0) {
        uVar9 = uVar17 / uVar19;
      }
      unaff_x21 = uVar17 - uVar9 * uVar19;
    }
  }
LAB_10b2ebe2c:
  lVar8 = *param_1;
  plVar11 = *(long **)(lVar8 + unaff_x21 * 8);
  if (plVar11 == (long *)0x0) {
    *plVar16 = *plVar1;
    *plVar1 = (long)plVar16;
    *(long **)(lVar8 + unaff_x21 * 8) = plVar1;
    if (*plVar16 != 0) {
      uVar17 = *(ulong *)(*plVar16 + 8);
      if ((uVar19 & uVar19 - 1) == 0) {
        uVar17 = uVar17 & uVar19 - 1;
      }
      else if (uVar19 <= uVar17) {
        uVar9 = 0;
        if (uVar19 != 0) {
          uVar9 = uVar17 / uVar19;
        }
        uVar17 = uVar17 - uVar9 * uVar19;
      }
      *(long **)(lVar8 + uVar17 * 8) = plVar16;
    }
  }
  else {
    *plVar16 = *plVar11;
    *plVar11 = (long)plVar16;
  }
  plStack_58 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10b2eca4c(&plStack_58);
LAB_10b2ebea4:
  return plVar16 + 3;
}



/* Entry: 10b2ebed8; end: 10b2ebef7;  */

long FUN_10b2ebed8(long param_1)

{
  ulong uVar1;
  
  uVar1 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
  return *(long *)(*(long *)(param_1 + 8) + (uVar1 >> 8) * 8) + (uVar1 & 0xff) * 0x10;
}



/* Entry: 10b2ebef8; end: 10b2ebf7b;  */

void FUN_10b2ebef8(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1 + 0x78;
  func_0x00010b2ecf5c();
  if ((ulong)*(uint *)(param_1 + 0xd0) <= *(ulong *)(lVar1 + 0x28)) {
    param_1 = param_1 + 0x78;
    func_0x00010b2ecf5c();
    uVar2 = *(long *)(param_1 + 0x20) + 1;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
    *(ulong *)(param_1 + 0x20) = uVar2;
    if (0x1ff < uVar2) {
      func_0x00010b2ecdd0(*(undefined8 *)(param_1 + 8));
      func_0x00010b2ecdc0();
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x100;
    }
  }
  return;
}



/* Entry: 10b2ebf7c; end: 10b2ec27f;  */

void FUN_10b2ebf7c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long extraout_x8;
  long *plVar9;
  long extraout_x8_00;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  
  plVar18 = param_1 + 5;
  puVar17 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  uVar2 = (long)puVar1 - (long)puVar17;
  lVar10 = 0;
  if (uVar2 != 0) {
    lVar10 = ((long)puVar1 - (long)puVar17) * 0x20 + -1;
  }
  uVar7 = param_1[4];
  plVar5 = param_2;
  if (lVar10 == *plVar18 + uVar7) {
    if (uVar7 < 0x100) {
      plVar19 = param_1 + 3;
      puVar12 = (undefined8 *)*plVar19;
      puVar13 = (undefined8 *)*param_1;
      if (uVar2 < (ulong)((long)puVar12 - (long)puVar13)) {
        plVar5 = param_1;
        plVar18 = param_2;
        func_0x00010b2ece9c();
        if (puVar12 == puVar1) {
          if (puVar17 == puVar13) {
            lVar10 = (long)puVar12 - (long)puVar17 >> 2;
            if (puVar1 == puVar17) {
              lVar10 = 1;
            }
            plStack_70 = plVar19;
            FUN_10b2ecb3c();
            func_0x00010b2ecd00(lVar10 * 2 + 6);
            FUN_10b2ecb18(&plStack_90,param_1[1],param_1[2]);
            plVar19 = (long *)param_1[1];
            plVar18 = (long *)*param_1;
            plVar15 = (long *)param_1[3];
            plVar8 = (long *)param_1[2];
            param_1[1] = (long)plStack_88;
            *param_1 = (long)plStack_90;
            param_1[3] = (long)plStack_78;
            param_1[2] = (long)plStack_80;
            plStack_90 = plVar18;
            plStack_88 = plVar19;
            plStack_80 = plVar8;
            plStack_78 = plVar15;
            func_0x00010b2ecb88(&plStack_90);
            puVar17 = (undefined8 *)param_1[1];
          }
          puVar17[-1] = plVar5;
          param_1[1] = (long)puVar17;
          FUN_10b2eca90(param_1);
        }
        else {
          *puVar1 = plVar5;
          param_1[2] = (long)(puVar1 + 1);
          plVar5 = plVar18;
        }
      }
      else {
        plVar8 = (long *)((long)puVar12 - (long)puVar13 >> 2);
        if (puVar12 == puVar13) {
          plVar8 = (long *)0x1;
        }
        plVar6 = param_2;
        plStack_98 = plVar19;
        FUN_10b2ecb3c();
        plVar15 = (long *)((long)plVar8 + uVar2);
        plVar16 = plVar8 + (long)plVar6;
        plVar9 = plVar8;
        plVar5 = plVar6;
        plStack_b8 = plVar8;
        plStack_b0 = plVar15;
        plStack_a8 = plVar15;
        plStack_a0 = plVar16;
        func_0x00010b2ece9c();
        uStack_c0 = 0x100;
        plVar11 = plVar8;
        plVar14 = plVar15;
        plStack_c8 = plVar18;
        if (uVar2 == (long)plVar6 * 8) {
          plStack_d0 = plVar9;
          if (puVar1 == puVar17) {
            plStack_70 = plVar19;
            FUN_10b2ecb3c(1);
            func_0x00010b2ecebc();
            FUN_10b2ecb18();
            plVar15 = plStack_88;
            plVar11 = plStack_90;
            plStack_b8 = plStack_90;
            plStack_b0 = plStack_88;
            func_0x00010b2ecf10();
            func_0x00010b2ecb88();
            plVar14 = plVar6;
            plVar16 = plVar8;
          }
          else {
            func_0x00010b2ecdec((long)plVar15 - (long)plVar8);
            plVar15 = plVar15 + extraout_x8;
            plVar14 = plVar15;
            plStack_b0 = plVar15;
          }
        }
        plVar18 = plVar14 + 1;
        *plVar14 = (long)plVar9;
        plStack_d0 = (long *)0x0;
        plVar8 = (long *)param_1[2];
        plStack_a8 = plVar18;
        while (plVar9 = (long *)param_1[1], plVar8 != plVar9) {
          if (plVar15 == plVar11) {
            if (plVar18 < plVar16) {
              func_0x00010b2ecdd8((long)plVar16 - (long)plVar18);
              bVar4 = plVar18 != plVar11;
              plVar9 = plVar18 + extraout_x8_00;
              plVar15 = (long *)((long)plVar9 - ((long)plVar18 - (long)plVar11));
              plVar18 = plVar9;
              if (bVar4) {
                func_0x00010b2ecf48();
              }
            }
            else {
              lVar10 = (long)plVar16 - (long)plVar11 >> 2;
              if ((long)plVar16 - (long)plVar11 == 0) {
                lVar10 = 1;
              }
              plStack_70 = plVar19;
              FUN_10b2ecb3c(lVar10);
              func_0x00010b2ecd00(lVar10 * 2 + 6);
              plVar5 = plVar11;
              FUN_10b2ecb18(&plStack_90,plVar11,plVar18);
              plVar3 = plStack_78;
              plVar14 = plStack_80;
              plVar6 = plStack_88;
              plVar9 = plStack_90;
              plStack_90 = plVar11;
              plStack_88 = plVar15;
              plStack_80 = plVar18;
              plStack_78 = plVar16;
              func_0x00010b2ecb88(&plStack_90);
              plVar11 = plVar9;
              plVar18 = plVar14;
              plVar15 = plVar6;
              plVar16 = plVar3;
            }
          }
          plVar8 = plVar8 + -1;
          plVar15 = plVar15 + -1;
          *plVar15 = *plVar8;
        }
        plStack_b8 = (long *)*param_1;
        *param_1 = (long)plVar11;
        param_1[1] = (long)plVar15;
        plStack_a0 = (long *)param_1[3];
        plStack_a8 = (long *)param_1[2];
        param_1[2] = (long)plVar18;
        param_1[3] = (long)plVar16;
        plStack_b0 = plVar9;
        func_0x00010b2ecb64(&plStack_d0);
        func_0x00010b2ecb88(&plStack_b8);
      }
    }
    else {
      param_1[4] = uVar7 - 0x100;
      plVar5 = (long *)*puVar17;
      param_1[1] = (long)(puVar17 + 1);
      FUN_10b2eca90(param_1);
    }
  }
  FUN_10b2ec770(param_1);
  *plVar5 = (long)param_2;
  plVar5[1] = param_3;
  param_1[5] = param_1[5] + 1;
  return;
}



/* Entry: 10b2ec280; end: 10b2ec467;  */

void FUN_10b2ec280(long param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar11 = *(ulong *)(param_1 + 0x10);
  if ((uVar11 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    uVar3 = *param_2;
    func_0x000107c2c9c0();
    uVar6 = uVar11 - 1;
    if ((uVar11 & uVar6) == 0) {
      uVar8 = uVar3 & uVar6;
    }
    else {
      uVar8 = uVar3;
      if (uVar11 <= uVar3) {
        uVar8 = 0;
        if (uVar11 != 0) {
          uVar8 = uVar3 / uVar11;
        }
        uVar8 = uVar3 - uVar8 * uVar11;
      }
    }
    lVar5 = *(long *)(param_1 + 8);
    plVar4 = *(long **)(lVar5 + uVar8 * 8);
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) {
            return;
          }
          uVar10 = plVar4[1];
          if (uVar10 != uVar3) break;
          if (plVar4[2] == *param_2) {
            lVar7 = *plVar4;
            uVar11 = *(ulong *)(param_1 + 0x10);
            uVar6 = uVar11 - 1;
            if ((uVar11 & uVar6) == 0) {
              uVar3 = uVar6 & uVar3;
            }
            else if (uVar11 <= uVar3) {
              uVar8 = 0;
              if (uVar11 != 0) {
                uVar8 = uVar3 / uVar11;
              }
              uVar3 = uVar3 - uVar8 * uVar11;
            }
            plVar2 = *(long **)(lVar5 + uVar3 * 8);
            do {
              plVar9 = plVar2;
              plVar2 = (long *)*plVar9;
            } while ((long *)*plVar9 != plVar4);
            if (plVar9 == (long *)(param_1 + 0x18)) {
LAB_10b2ec3b4:
              if (lVar7 == 0) {
LAB_10b2ec3e8:
                *(undefined8 *)(lVar5 + uVar3 * 8) = 0;
                lVar7 = *plVar4;
                goto LAB_10b2ec3f0;
              }
              uVar8 = *(ulong *)(lVar7 + 8);
              if ((uVar11 & uVar6) == 0) {
                uVar10 = uVar8 & uVar6;
              }
              else {
                uVar10 = uVar8;
                if (uVar11 <= uVar8) {
                  uVar10 = 0;
                  if (uVar11 != 0) {
                    uVar10 = uVar8 / uVar11;
                  }
                  uVar10 = uVar8 - uVar10 * uVar11;
                }
              }
              if (uVar10 != uVar3) goto LAB_10b2ec3e8;
            }
            else {
              uVar8 = plVar9[1];
              if ((uVar11 & uVar6) == 0) {
                uVar8 = uVar8 & uVar6;
              }
              else if (uVar11 <= uVar8) {
                uVar10 = 0;
                if (uVar11 != 0) {
                  uVar10 = uVar8 / uVar11;
                }
                uVar8 = uVar8 - uVar10 * uVar11;
              }
              if (uVar8 != uVar3) goto LAB_10b2ec3b4;
LAB_10b2ec3f0:
              if (lVar7 == 0) goto LAB_10b2ec428;
              uVar8 = *(ulong *)(lVar7 + 8);
            }
            if ((uVar11 & uVar6) == 0) {
              uVar8 = uVar8 & uVar6;
            }
            else if (uVar11 <= uVar8) {
              uVar6 = 0;
              if (uVar11 != 0) {
                uVar6 = uVar8 / uVar11;
              }
              uVar8 = uVar8 - uVar6 * uVar11;
            }
            if (uVar8 != uVar3) {
              *(long **)(lVar5 + uVar8 * 8) = plVar9;
              lVar7 = *plVar4;
            }
LAB_10b2ec428:
            *plVar9 = lVar7;
            *plVar4 = 0;
            *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
            func_0x000107c35c48();
            return;
          }
        }
        if ((uVar11 & uVar6) == 0) {
          uVar10 = uVar10 & uVar6;
        }
        else if (uVar11 <= uVar10) {
          uVar1 = 0;
          if (uVar11 != 0) {
            uVar1 = uVar10 / uVar11;
          }
          uVar10 = uVar10 - uVar1 * uVar11;
        }
      } while (uVar10 == uVar8);
    }
  }
  return;
}



/* Entry: 10b2ec468; end: 10b2ec46b;  */

undefined8 * FUN_10b2ec468(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cd4748;
  func_0x00010b47974c(param_1[8]);
  func_0x000107c27e70(param_1 + 0x1b);
  FUN_10b2ec82c(param_1 + 0x14);
  FUN_10b2ec684(param_1 + 0xf);
  FUN_10b2ec578(param_1 + 9);
  *param_1 = &PTR____cxa_pure_virtual_110cd47c8;
  func_0x000107c2c5c8(param_1 + 6);
  FUN_10b2ec488(param_1 + 1);
  return param_1;
}



/* Entry: 10b2ec46c; end: 10b2ec47f;  */

void FUN_10b2ec46c(void)

{
  FUN_10b2ec524();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2ec480; end: 10b2ec487;  */

void FUN_10b2ec480(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b2ec484);
  (*pcVar1)();
}



/* Entry: 10b2ec488; end: 10b2ec50b;  */

long FUN_10b2ec488(long param_1)

{
  func_0x00010b2ec4b0(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_10b2ec50c(param_1,0);
  return param_1;
}



/* Entry: 10b2ec50c; end: 10b2ec523;  */

void FUN_10b2ec50c(long *param_1)

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



/* Entry: 10b2ec524; end: 10b2ec577;  */

undefined8 * FUN_10b2ec524(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cd4748;
  func_0x00010b47974c(param_1[8]);
  func_0x000107c27e70(param_1 + 0x1b);
  FUN_10b2ec82c(param_1 + 0x14);
  FUN_10b2ec684(param_1 + 0xf);
  FUN_10b2ec578(param_1 + 9);
  *param_1 = &PTR____cxa_pure_virtual_110cd47c8;
  func_0x000107c2c5c8(param_1 + 6);
  FUN_10b2ec488(param_1 + 1);
  return param_1;
}



/* Entry: 10b2ec578; end: 10b2ec5b7;  */

long * FUN_10b2ec578(long *param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_10b2ec5b8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar1 != lVar2) {
    func_0x00010b2ecf64();
  }
  FUN_10b2ec660();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b2ec5b8; end: 10b2ec603;  */

void FUN_10b2ec5b8(void)

{
  undefined1 in_CY;
  undefined8 uVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b2ecee8();
  while (func_0x00010b2ece00(), (bool)in_CY) {
    func_0x00010b2ecdd0();
    func_0x00010b2ecdc0();
  }
  if (extraout_x9 == 1) {
    uVar1 = 0x200;
  }
  else {
    if (extraout_x9 != 2) {
      return;
    }
    uVar1 = 0x400;
  }
  *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
  return;
}



/* Entry: 10b2ec604; end: 10b2ec633;  */

long FUN_10b2ec604(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    uVar1 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
    return *(long *)(*(long *)(param_1 + 8) + (uVar1 >> 10) * 8) + (uVar1 & 0x3ff) * 4;
  }
  return 0;
}



/* Entry: 10b2ec634; end: 10b2ec65f;  */

long * FUN_10b2ec634(long *param_1)

{
  FUN_10b2ec660();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b2ec660; end: 10b2ec683;  */

void FUN_10b2ec660(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10b2ec684; end: 10b2ec6e3;  */

long FUN_10b2ec684(long param_1)

{
  func_0x00010b2ec6ac(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_10b2ec814(param_1,0);
  return param_1;
}



/* Entry: 10b2ec6e4; end: 10b2ec723;  */

long * FUN_10b2ec6e4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_10b2ec724();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar1 != lVar2) {
    func_0x00010b2ecf64();
  }
  FUN_10b2ec7cc();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b2ec724; end: 10b2ec76f;  */

void FUN_10b2ec724(void)

{
  undefined1 in_CY;
  undefined8 uVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b2ecee8();
  while (func_0x00010b2ece00(), (bool)in_CY) {
    func_0x00010b2ecdd0();
    func_0x00010b2ecdc0();
  }
  if (extraout_x9 == 1) {
    uVar1 = 0x80;
  }
  else {
    if (extraout_x9 != 2) {
      return;
    }
    uVar1 = 0x100;
  }
  *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
  return;
}



/* Entry: 10b2ec770; end: 10b2ec79f;  */

void FUN_10b2ec770(long param_1)

{
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 10b2ec7a0; end: 10b2ec7cb;  */

long * FUN_10b2ec7a0(long *param_1)

{
  FUN_10b2ec7cc();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b2ec7cc; end: 10b2ec7ef;  */

void FUN_10b2ec7cc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10b2ec7f0; end: 10b2ec813;  */

undefined8 FUN_10b2ec7f0(undefined8 param_1)

{
  FUN_10b2ec814(param_1,0);
  return param_1;
}



/* Entry: 10b2ec814; end: 10b2ec82b;  */

void FUN_10b2ec814(long *param_1)

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



/* Entry: 10b2ec82c; end: 10b2ec86b;  */

long * FUN_10b2ec82c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_10b2eba58();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar1 != lVar2) {
    func_0x00010b2ecf64();
  }
  FUN_10b2ec898();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b2ec86c; end: 10b2ec897;  */

long * FUN_10b2ec86c(long *param_1)

{
  FUN_10b2ec898();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b2ec898; end: 10b2ec8bb;  */

void FUN_10b2ec898(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10b2ec8bc; end: 10b2ec94b;  */

void FUN_10b2ec8bc(void)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  ulong uVar3;
  undefined8 *extraout_x8;
  long lVar4;
  undefined8 *puVar5;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  func_0x00010b2ecd4c();
  puVar5 = extraout_x8;
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    uVar3 = unaff_x19[1];
    bVar2 = uVar3 == uVar1;
    if (uVar1 < uVar3) {
      func_0x00010b2ecd68();
      if (!bVar2) {
        func_0x00010b2ece38();
        uVar3 = unaff_x19[1];
      }
      puVar5 = (undefined8 *)(unaff_x21 + unaff_x22);
      unaff_x19[1] = uVar3 + unaff_x23 * 8;
      unaff_x19[2] = (ulong)puVar5;
    }
    else {
      lVar4 = (long)((long)extraout_x8 - uVar1) >> 2;
      if ((long)extraout_x8 - uVar1 == 0) {
        lVar4 = 1;
      }
      FUN_10b2ec970(lVar4);
      func_0x00010b2ecd18();
      FUN_10b2ec94c();
      func_0x00010b2ecd84();
      func_0x00010b2ec9bc();
      puVar5 = (undefined8 *)unaff_x19[2];
    }
  }
  *puVar5 = unaff_x20;
  unaff_x19[2] = unaff_x19[2] + 8;
  return;
}



/* Entry: 10b2ec94c; end: 10b2ec96f;  */

void FUN_10b2ec94c(long param_1,undefined8 *param_2,long param_3)

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



/* Entry: 10b2ec970; end: 10b2ec9fb;  */

void FUN_10b2ec970(ulong param_1)

{
  if (param_1 >> 0x3d == 0) {
    func_0x00010b2ece14();
    return;
  }
  func_0x000104bd35f4();
  func_0x00010b2eced8();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10b2ec9fc; end: 10b2eca4b;  */

long FUN_10b2ec9fc(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return 0;
  }
  uVar1 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
  return *(long *)(*(long *)(param_1 + 8) + (uVar1 / 0xaa) * 8) + (uVar1 % 0xaa) * 0x18;
}



/* Entry: 10b2eca4c; end: 10b2eca8f;  */

long * FUN_10b2eca4c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10b2ec6e4(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b2eca90; end: 10b2ecb17;  */

void FUN_10b2eca90(void)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  ulong uVar3;
  undefined8 *extraout_x8;
  long lVar4;
  undefined8 *puVar5;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  func_0x00010b2ecd4c();
  puVar5 = extraout_x8;
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    uVar3 = unaff_x19[1];
    bVar2 = uVar3 == uVar1;
    if (uVar1 < uVar3) {
      func_0x00010b2ecd68();
      if (!bVar2) {
        func_0x00010b2ece38();
        uVar3 = unaff_x19[1];
      }
      puVar5 = (undefined8 *)(unaff_x21 + unaff_x22);
      unaff_x19[1] = uVar3 + unaff_x23 * 8;
    }
    else {
      lVar4 = (long)((long)extraout_x8 - uVar1) >> 2;
      if ((long)extraout_x8 - uVar1 == 0) {
        lVar4 = 1;
      }
      FUN_10b2ecb3c(lVar4);
      func_0x00010b2ecd18();
      FUN_10b2ecb18();
      func_0x00010b2ecd84();
      func_0x00010b2ecb88();
      puVar5 = (undefined8 *)unaff_x19[2];
    }
  }
  *puVar5 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 10b2ecb18; end: 10b2ecb3b;  */

void FUN_10b2ecb18(long param_1,undefined8 *param_2,long param_3)

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



/* Entry: 10b2ecb3c; end: 10b2ecbc7;  */

void FUN_10b2ecb3c(ulong param_1)

{
  if (param_1 >> 0x3d == 0) {
    func_0x00010b2ece14();
    return;
  }
  func_0x000104bd35f4();
  func_0x00010b2eced8();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10b2ecbc8; end: 10b2ecc4f;  */

void FUN_10b2ecbc8(void)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  ulong uVar3;
  undefined8 *extraout_x8;
  long lVar4;
  undefined8 *puVar5;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  func_0x00010b2ecd4c();
  puVar5 = extraout_x8;
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    uVar3 = unaff_x19[1];
    bVar2 = uVar3 == uVar1;
    if (uVar1 < uVar3) {
      func_0x00010b2ecd68();
      if (!bVar2) {
        func_0x00010b2ece38();
        uVar3 = unaff_x19[1];
      }
      puVar5 = (undefined8 *)(unaff_x21 + unaff_x22);
      unaff_x19[1] = uVar3 + unaff_x23 * 8;
    }
    else {
      lVar4 = (long)((long)extraout_x8 - uVar1) >> 2;
      if ((long)extraout_x8 - uVar1 == 0) {
        lVar4 = 1;
      }
      FUN_10b2ecc74(lVar4);
      func_0x00010b2ecd18();
      FUN_10b2ecc50();
      func_0x00010b2ecd84();
      func_0x00010b2eccc0();
      puVar5 = (undefined8 *)unaff_x19[2];
    }
  }
  *puVar5 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 10b2ecc50; end: 10b2ecc73;  */

void FUN_10b2ecc50(long param_1,undefined8 *param_2,long param_3)

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



/* Entry: 10b2ecc74; end: 10b2eccff;  */

void FUN_10b2ecc74(ulong param_1)

{
  if (param_1 >> 0x3d == 0) {
    func_0x00010b2ece14();
    return;
  }
  func_0x000104bd35f4();
  func_0x00010b2eced8();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10b2ecd00; end: 10b2ecf73;  */

void FUN_10b2ecd00(void)

{
  return;
}



/* Entry: 10b2ecf74; end: 10b2ecf7f;  */

undefined8 * FUN_10b2ecf74(undefined8 *param_1)

{
  long lVar1;
  
  _abort();
  *param_1 = &PTR_DAT_110cd4860;
  func_0x0001001746b0(param_1 + 0xc);
  func_0x00010014f860(param_1 + 10);
  lVar1 = param_1[8];
  param_1[8] = 0;
  if (lVar1 != 0) {
    func_0x000107c35c6c();
  }
  func_0x000100833038(param_1 + 7);
  func_0x000100833038(param_1 + 6);
  func_0x000100833038(param_1 + 5);
  func_0x00010065f964(param_1 + 4);
  return param_1;
}



/* Entry: 10b2ecf80; end: 10b2ed347;  */

undefined8 * FUN_10b2ecf80(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_DAT_110cd4860;
  func_0x0001001746b0(param_1 + 0xc);
  func_0x00010014f860(param_1 + 10);
  lVar1 = param_1[8];
  param_1[8] = 0;
  if (lVar1 != 0) {
    func_0x000107c35c6c();
  }
  func_0x000100833038(param_1 + 7);
  func_0x000100833038(param_1 + 6);
  func_0x000100833038(param_1 + 5);
  func_0x00010065f964(param_1 + 4);
  return param_1;
}



/* Entry: 10b2ed348; end: 10b2ed6db;  */

ushort * FUN_10b2ed348(ushort *param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  ulong uVar7;
  ushort *puVar8;
  undefined1 *extraout_x8;
  ushort *puVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2 + 1;
  uVar7 = (SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0x7ffffffffffffffe) * 2;
  uVar11 = (ulong)(param_2 + 1) / 3 << 2 | 1;
  puVar4 = param_1;
  if (uVar7 < 0x16) {
LAB_10b2ed3ec:
    _bzero(puVar4,uVar11);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      *(ulong *)(param_1 + 4) = uVar11;
    }
    else {
      *(byte *)((long)param_1 + 0x17) = (byte)uVar11 & 0x7d;
    }
    *(undefined1 *)((long)puVar4 + uVar11) = 0;
    puVar4 = *(ushort **)param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      puVar4 = param_1;
    }
    func_0x000107c2d154(puVar4,param_3,param_2);
    puVar8 = (ushort *)(long)*(char *)((long)param_1 + 0x17);
    puVar5 = puVar4;
    if ((long)puVar8 < 0) {
      puVar8 = *(ushort **)(param_1 + 4);
      if (puVar8 < puVar4) {
        uVar7 = (*(ulong *)(param_1 + 8) & 0x7fffffffffffffff) - 1;
        uVar10 = (uint)(*(ulong *)(param_1 + 8) >> 0x3f);
        uVar11 = (long)puVar4 - (long)puVar8;
        if (uVar7 - (long)puVar8 < uVar11) goto LAB_10b2ed464;
LAB_10b2ed544:
        puVar9 = *(ushort **)param_1;
        if (uVar10 == 0) {
          puVar9 = param_1;
        }
        puVar5 = (ushort *)((long)puVar9 + (long)puVar8);
        _bzero(puVar5,uVar11);
        if (*(char *)((long)param_1 + 0x17) < '\0') goto LAB_10b2ed580;
LAB_10b2ed564:
        *(byte *)((long)param_1 + 0x17) = (byte)puVar4 & 0x7f;
        param_1 = puVar9;
        goto LAB_10b2ed584;
      }
      puVar9 = *(ushort **)param_1;
    }
    else {
      if (puVar4 <= puVar8) {
        *(byte *)((long)param_1 + 0x17) = (byte)puVar4;
        goto LAB_10b2ed584;
      }
      uVar10 = 0;
      uVar7 = 0x16;
      uVar11 = (long)puVar4 - (long)puVar8;
      if (uVar11 <= 0x16U - (long)puVar8) goto LAB_10b2ed544;
LAB_10b2ed464:
      if (0x7ffffffffffffff7 - uVar7 < (uVar11 - uVar7) + (long)puVar8) goto LAB_10b2ed5a0;
      puVar5 = *(ushort **)param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        puVar5 = param_1;
      }
      puVar6 = (ushort *)0x7ffffffffffffff7;
      if (uVar7 < 0x3ffffffffffffff3) {
        puVar9 = puVar4;
        if (puVar4 <= (ushort *)(uVar7 * 2)) {
          puVar9 = (ushort *)(uVar7 * 2);
        }
        puVar1 = (ushort *)0x19;
        if (((ulong)puVar9 | 7) != 0x17) {
          puVar1 = (ushort *)(((ulong)puVar9 | 7) + 1);
        }
        puVar6 = (ushort *)0x17;
        if ((ushort *)0x16 < puVar9) {
          puVar6 = puVar1;
        }
      }
      puVar9 = puVar6;
      __Znwm();
      if (puVar8 != (ushort *)0x0) {
        _memmove(puVar9,puVar5,puVar8);
      }
      if (uVar7 != 0x16) {
        __ZdlPv(puVar5);
      }
      *(ushort **)(param_1 + 4) = puVar8;
      *(ulong *)(param_1 + 8) = (ulong)puVar6 | 0x8000000000000000;
      *(ushort **)param_1 = puVar9;
      puVar5 = (ushort *)((long)puVar9 + (long)puVar8);
      _bzero(puVar5,uVar11);
      if (-1 < *(char *)((long)param_1 + 0x17)) goto LAB_10b2ed564;
    }
LAB_10b2ed580:
    *(ushort **)(param_1 + 4) = puVar4;
    param_1 = puVar9;
LAB_10b2ed584:
    *(undefined1 *)((long)param_1 + (long)puVar4) = 0;
    return puVar5;
  }
  puVar4 = param_2;
  if (0x800000000000001d < uVar7 + 0x8000000000000009) {
    uVar7 = uVar11;
    if (uVar11 < 0x2d) {
      uVar7 = 0x2c;
    }
    puVar5 = (ushort *)((uVar7 | 7) + 1);
    puVar4 = puVar5;
    __Znwm();
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *(ulong *)(param_1 + 8) = (ulong)puVar5 | 0x8000000000000000;
    *(ushort **)param_1 = puVar4;
    goto LAB_10b2ed3ec;
  }
LAB_10b2ed5a0:
  func_0x000104c4f6b8();
  puVar5 = (ushort *)(((ulong)param_3 >> 2) * 3 + 2);
  puVar8 = puVar4;
  puVar9 = param_3;
  if ((long)puVar5 < 0) {
LAB_10b2ed6d8:
    FUN_10b2ed6dc();
    _abort();
    uVar11 = *(long *)(puVar8 + 4) - (long)*(ushort **)puVar8;
    if (1 < uVar11) {
      uVar2 = **(ushort **)puVar8;
      *puVar9 = uVar2 >> 8 | uVar2 << 8;
      *(long *)puVar8 = *(long *)puVar8 + 2;
    }
    return (ushort *)(ulong)(1 < uVar11);
  }
  puVar6 = puVar5;
  __Znwm();
  _bzero();
  puVar8 = puVar6;
  func_0x000107c2d158(puVar6,puVar4,param_3);
  if (puVar8 == (ushort *)0xffffffffffffffff) {
    *extraout_x8 = 0;
    *(undefined8 *)(extraout_x8 + 0x10) = 0;
    *(undefined8 *)(extraout_x8 + 0x18) = 0;
    *(undefined8 *)(extraout_x8 + 8) = 0;
    if (puVar6 != (ushort *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar6);
      return puVar6;
    }
  }
  else {
    if (puVar8 < puVar5 || (long)puVar8 - (long)puVar5 == 0) {
      lVar12 = (long)puVar6 + (long)puVar5;
      puVar4 = puVar6;
      lVar13 = (long)puVar6 + (long)puVar8;
      if (puVar8 >= puVar5) {
        lVar13 = lVar12;
      }
    }
    else {
      puVar9 = puVar4;
      if ((long)puVar8 < 0) goto LAB_10b2ed6d8;
      puVar9 = (ushort *)((long)puVar5 * 2);
      if (puVar9 < puVar8 || (long)puVar9 - (long)puVar8 == 0) {
        puVar9 = puVar8;
      }
      if ((ushort *)0x5555555555555553 < param_3) {
        puVar9 = (ushort *)0x7fffffffffffffff;
      }
      puVar4 = puVar9;
      __Znwm();
      lVar12 = (long)puVar4 + (long)puVar9;
      lVar13 = (long)puVar4 + (long)puVar8;
      _bzero((long)puVar4 + (long)puVar5,(long)puVar8 - (long)puVar5);
      puVar8 = puVar4;
      _memcpy(puVar4,puVar6,puVar5);
      if (puVar6 != (ushort *)0x0) {
        __ZdlPv(puVar6);
        puVar8 = puVar6;
      }
    }
    *extraout_x8 = 1;
    *(ushort **)(extraout_x8 + 8) = puVar4;
    *(long *)(extraout_x8 + 0x10) = lVar13;
    *(long *)(extraout_x8 + 0x18) = lVar12;
  }
  return puVar8;
}



/* Entry: 10b2ed6dc; end: 10b2ed6e7;  */

bool FUN_10b2ed6dc(long *param_1,ushort *param_2)

{
  ushort uVar1;
  ulong uVar2;
  
  _abort();
  uVar2 = param_1[1] - *param_1;
  if (1 < uVar2) {
    uVar1 = *(ushort *)*param_1;
    *param_2 = uVar1 >> 8 | uVar1 << 8;
    *param_1 = *param_1 + 2;
  }
  return 1 < uVar2;
}



/* Entry: 10b2ed6e8; end: 10b2ed9e3;  */

bool FUN_10b2ed6e8(long *param_1,ushort *param_2)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar2 = param_1[1] - *param_1;
  if (1 < uVar2) {
    uVar1 = *(ushort *)*param_1;
    *param_2 = uVar1 >> 8 | uVar1 << 8;
    *param_1 = *param_1 + 2;
  }
  return 1 < uVar2;
}



/* Entry: 10b2ed9e4; end: 10b2edb1b;  */

long * FUN_10b2ed9e4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar12 = (undefined8 *)param_1[1];
  if (puVar12 < (undefined8 *)param_1[2]) {
    uVar15 = param_2[1];
    uVar14 = *param_2;
    puVar12[2] = param_2[2];
    puVar12[1] = uVar15;
    *puVar12 = uVar14;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar12 = puVar12 + 3;
    plVar13 = param_1;
  }
  else {
    lVar11 = (long)puVar12 - *param_1;
    uVar8 = (lVar11 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar8) {
      FUN_10b2edb1c();
LAB_10b2edb18:
      func_0x00010b2ed0ac();
      _abort();
      param_1 = param_1 + 1;
      plVar13 = (long *)*param_1;
      if (plVar13 != (long *)0x0) {
        uVar14 = *param_2;
        uVar8 = param_2[1];
        plVar5 = param_1;
        do {
          cVar4 = *(char *)((long)plVar13 + 0x37);
          plVar6 = (long *)plVar13[4];
          if (-1 < (long)cVar4) {
            plVar6 = plVar13 + 4;
          }
          uVar10 = plVar13[5];
          if (-1 < cVar4) {
            uVar10 = (long)cVar4;
          }
          uVar2 = uVar8;
          if (uVar10 <= uVar8) {
            uVar2 = uVar10;
          }
          _memcmp(plVar6,uVar14,uVar2);
          uVar7 = (uint)((ulong)plVar6 >> 0x1f) & 1;
          uVar2 = 8;
          if (uVar10 >= uVar8) {
            uVar2 = 0;
          }
          uVar3 = (ulong)((uint)((ulong)plVar6 >> 0x1c) & 8);
          if ((int)plVar6 == 0) {
            uVar7 = (uint)(uVar10 < uVar8);
            uVar3 = uVar2;
          }
          if (uVar7 == 0) {
            plVar5 = plVar13;
          }
          plVar13 = *(long **)((long)plVar13 + uVar3);
        } while (plVar13 != (long *)0x0);
        if (plVar5 != param_1) {
          cVar4 = *(char *)((long)plVar5 + 0x37);
          plVar13 = (long *)plVar5[4];
          if (-1 < (long)cVar4) {
            plVar13 = plVar5 + 4;
          }
          uVar10 = plVar5[5];
          if (-1 < cVar4) {
            uVar10 = (long)cVar4;
          }
          uVar2 = uVar10;
          if (uVar8 <= uVar10) {
            uVar2 = uVar8;
          }
          _memcmp(uVar14,plVar13,uVar2);
          if ((int)uVar14 == 0) {
            if (uVar10 <= uVar8) {
              return plVar5;
            }
          }
          else if (-1 < (int)uVar14) {
            return plVar5;
          }
        }
      }
      return param_1;
    }
    lVar9 = param_1[2] - *param_1 >> 3;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
      uVar10 = uVar8;
    }
    if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar10 == 0) {
      lVar9 = 0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar10) goto LAB_10b2edb18;
      lVar9 = uVar10 * 0x18;
      __Znwm();
    }
    puVar1 = (undefined8 *)(lVar9 + lVar11);
    uVar15 = param_2[1];
    uVar14 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar15;
    *puVar1 = uVar14;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar12 = puVar1 + 3;
    lVar11 = (long)puVar1 - (param_1[1] - *param_1);
    _memcpy(lVar11);
    plVar5 = (long *)*param_1;
    *param_1 = lVar11;
    param_1[1] = (long)puVar12;
    param_1[2] = lVar9 + uVar10 * 0x18;
    plVar13 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      __ZdlPv();
      param_1[1] = (long)puVar12;
      return plVar5;
    }
  }
  param_1[1] = (long)puVar12;
  return plVar13;
}



/* Entry: 10b2edb1c; end: 10b2edb27;  */

long * FUN_10b2edb1c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  ulong *puVar6;
  undefined8 uVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  _abort();
  plVar9 = (long *)(param_1 + 8);
  plVar11 = (long *)*plVar9;
  if (plVar11 != (long *)0x0) {
    uVar7 = *param_2;
    uVar4 = param_2[1];
    plVar10 = plVar9;
    do {
      cVar5 = *(char *)((long)plVar11 + 0x37);
      puVar6 = (ulong *)plVar11[4];
      if (-1 < (long)cVar5) {
        puVar6 = (ulong *)(plVar11 + 4);
      }
      uVar3 = plVar11[5];
      if (-1 < cVar5) {
        uVar3 = (long)cVar5;
      }
      uVar1 = uVar4;
      if (uVar3 <= uVar4) {
        uVar1 = uVar3;
      }
      _memcmp(puVar6,uVar7,uVar1);
      uVar8 = (uint)((ulong)puVar6 >> 0x1f) & 1;
      uVar1 = 8;
      if (uVar3 >= uVar4) {
        uVar1 = 0;
      }
      uVar2 = (ulong)((uint)((ulong)puVar6 >> 0x1c) & 8);
      if ((int)puVar6 == 0) {
        uVar8 = (uint)(uVar3 < uVar4);
        uVar2 = uVar1;
      }
      if (uVar8 == 0) {
        plVar10 = plVar11;
      }
      plVar11 = *(long **)((long)plVar11 + uVar2);
    } while (plVar11 != (long *)0x0);
    if (plVar10 != plVar9) {
      cVar5 = *(char *)((long)plVar10 + 0x37);
      plVar11 = (long *)plVar10[4];
      if (-1 < (long)cVar5) {
        plVar11 = plVar10 + 4;
      }
      uVar3 = plVar10[5];
      if (-1 < cVar5) {
        uVar3 = (long)cVar5;
      }
      uVar1 = uVar3;
      if (uVar4 <= uVar3) {
        uVar1 = uVar4;
      }
      _memcmp(uVar7,plVar11,uVar1);
      if ((int)uVar7 == 0) {
        if (uVar3 <= uVar4) {
          return plVar10;
        }
      }
      else if (-1 < (int)uVar7) {
        return plVar10;
      }
    }
  }
  return plVar9;
}



/* Entry: 10b2edb28; end: 10b2edc27;  */

long * FUN_10b2edb28(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  ulong *puVar6;
  undefined8 uVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  plVar9 = (long *)(param_1 + 8);
  plVar11 = (long *)*plVar9;
  if (plVar11 != (long *)0x0) {
    uVar7 = *param_2;
    uVar4 = param_2[1];
    plVar10 = plVar9;
    do {
      cVar5 = *(char *)((long)plVar11 + 0x37);
      puVar6 = (ulong *)plVar11[4];
      if (-1 < (long)cVar5) {
        puVar6 = (ulong *)(plVar11 + 4);
      }
      uVar3 = plVar11[5];
      if (-1 < cVar5) {
        uVar3 = (long)cVar5;
      }
      uVar1 = uVar4;
      if (uVar3 <= uVar4) {
        uVar1 = uVar3;
      }
      _memcmp(puVar6,uVar7,uVar1);
      uVar8 = (uint)((ulong)puVar6 >> 0x1f) & 1;
      uVar1 = 8;
      if (uVar3 >= uVar4) {
        uVar1 = 0;
      }
      uVar2 = (ulong)((uint)((ulong)puVar6 >> 0x1c) & 8);
      if ((int)puVar6 == 0) {
        uVar8 = (uint)(uVar3 < uVar4);
        uVar2 = uVar1;
      }
      if (uVar8 == 0) {
        plVar10 = plVar11;
      }
      plVar11 = *(long **)((long)plVar11 + uVar2);
    } while (plVar11 != (long *)0x0);
    if (plVar10 != plVar9) {
      cVar5 = *(char *)((long)plVar10 + 0x37);
      plVar11 = (long *)plVar10[4];
      if (-1 < (long)cVar5) {
        plVar11 = plVar10 + 4;
      }
      uVar3 = plVar10[5];
      if (-1 < cVar5) {
        uVar3 = (long)cVar5;
      }
      uVar1 = uVar3;
      if (uVar4 <= uVar3) {
        uVar1 = uVar4;
      }
      _memcmp(uVar7,plVar11,uVar1);
      if ((int)uVar7 == 0) {
        if (uVar3 <= uVar4) {
          return plVar10;
        }
      }
      else if (-1 < (int)uVar7) {
        return plVar10;
      }
    }
  }
  return plVar9;
}



/* Entry: 10b2edc28; end: 10b2ef21b;  */

long * FUN_10b2edc28(long *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  uint uStack_44;
  
  lVar7 = param_1[8];
  while (lVar7 != 0) {
    lVar7 = lVar7 + -1;
    param_1[8] = lVar7;
    uVar9 = *(uint *)(param_1[7] + lVar7 * 4);
    if (0x3f < uVar9 && (uVar9 & 7) == 0) {
      uVar8 = *(uint *)(*param_1 + 0x14);
      if (uVar9 + 0x10 <= uVar8) {
        uVar2 = *(uint *)(param_1 + 1);
        uVar3 = *(uint *)((long)param_1 + 0xc);
        puVar1 = (uint *)(*(long *)(*param_1 + 8) + (long)(ulong)uVar9);
        if (((puVar1[1] == 0xc8799269) && (0xf < *puVar1)) && (*puVar1 + uVar9 <= uVar8)) {
          puVar1 = puVar1 + 2;
          while (*puVar1 == uVar3) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar2;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              return (long *)(ulong)uVar9;
            }
          }
          ClearExclusiveLocal();
          lVar7 = param_1[8];
        }
      }
    }
  }
  uVar9 = 0;
  if (*(uint *)(param_1 + 6) != 0x30) {
    uVar9 = *(uint *)(param_1 + 6);
  }
  if (uVar9 == 0) {
    uStack_44 = 0xaaaaaaaa;
    plVar10 = param_1 + 5;
    FUN_10b2fe5d0(plVar10,&uStack_44);
    iVar6 = (int)plVar10;
    while (iVar6 != 0) {
      if (((uStack_44 == *(uint *)((long)param_1 + 0xc)) && (uVar9 = (uint)plVar10, 0x3f < uVar9))
         && (((ulong)plVar10 & 7) == 0)) {
        uVar8 = *(uint *)(*param_1 + 0x14);
        if (uVar9 + 0x10 <= uVar8) {
          uVar2 = *(uint *)(param_1 + 1);
          puVar1 = (uint *)(*(long *)(*param_1 + 8) + ((ulong)plVar10 & 0xffffffff));
          if (((puVar1[1] == 0xc8799269) && (0xf < *puVar1)) && (*puVar1 + uVar9 <= uVar8)) {
            puVar1 = puVar1 + 2;
            while (*puVar1 == uStack_44) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar2;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                return plVar10;
              }
            }
            ClearExclusiveLocal();
          }
        }
      }
      uStack_44 = 0xaaaaaaaa;
      plVar10 = param_1 + 5;
      FUN_10b2fe5d0(plVar10,&uStack_44);
      iVar6 = (int)plVar10;
    }
  }
  else {
    uStack_44 = 0xaaaaaaaa;
    plVar10 = param_1 + 5;
    FUN_10b2fe5d0(plVar10,&uStack_44);
    iVar6 = (int)plVar10;
    while( true ) {
      while (iVar6 == 0) {
        *(undefined4 *)(param_1 + 6) = 0x30;
        *(undefined4 *)((long)param_1 + 0x34) = 0;
        uStack_44 = 0xaaaaaaaa;
        plVar10 = param_1 + 5;
        FUN_10b2fe5d0(plVar10,&uStack_44);
        iVar6 = (int)plVar10;
      }
      uVar8 = (uint)plVar10;
      if (((uStack_44 == *(uint *)((long)param_1 + 0xc)) && (0x3f < uVar8)) &&
         (((ulong)plVar10 & 7) == 0)) {
        uVar2 = *(uint *)(*param_1 + 0x14);
        if (uVar8 + 0x10 <= uVar2) {
          uVar3 = *(uint *)(param_1 + 1);
          puVar1 = (uint *)(*(long *)(*param_1 + 8) + ((ulong)plVar10 & 0xffffffff));
          if (((puVar1[1] == 0xc8799269) && (0xf < *puVar1)) && (*puVar1 + uVar8 <= uVar2)) {
            puVar1 = puVar1 + 2;
            while (*puVar1 == uStack_44) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar3;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                return plVar10;
              }
            }
            ClearExclusiveLocal();
          }
        }
      }
      if (uVar8 == uVar9) break;
      uStack_44 = 0xaaaaaaaa;
      plVar10 = param_1 + 5;
      FUN_10b2fe5d0(plVar10,&uStack_44);
      iVar6 = (int)plVar10;
    }
  }
  plVar11 = (long *)*param_1;
  lVar7 = param_1[2];
  plVar10 = plVar11;
  FUN_10b2fe960(plVar11,lVar7,(int)param_1[1]);
  plVar11 = (long *)plVar11[6];
  if ((int)plVar10 == 0) {
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x30))(plVar11,0);
    }
    plVar10 = (long *)0x0;
  }
  else {
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x30))(plVar11,lVar7);
    }
    if ((char)param_1[4] == '\x01') {
      FUN_10b2febb8(*param_1,plVar10);
    }
  }
  return plVar10;
}



/* Entry: 10b2ef21c; end: 10b2ef24b;  */

long FUN_10b2ef21c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _backtrace(param_1,0xfa);
  *(ulong *)(param_1 + 2000) = (ulong)((uint)lVar1 & ((int)(uint)lVar1 >> 0x1f ^ 0xffffffffU));
  return param_1;
}



/* Entry: 10b2ef24c; end: 10b2ef253;  */

void FUN_10b2ef24c(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  code *pcVar2;
  undefined ***pppuVar3;
  int *piVar4;
  long *plStack_1c8;
  undefined8 uStack_1c0;
  undefined **ppuStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined ***pppuStack_190;
  undefined **ppuStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  uStack_e0 = 0xaaaaaaaaaaaaaaaa;
  uStack_110 = 0xaaaaaaaaaaaaaaaa;
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  uStack_90 = 0xaaaaaaaaaaaaaaaa;
  uStack_98 = 0xaaaaaaaaaaaaaaaa;
  uStack_a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_c0 = 0xaaaaaaaaaaaaaaaa;
  uStack_c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_d0 = 0xaaaaaaaaaaaaaaaa;
  uStack_e8 = 0xaaaaaaaaaaaaaaaa;
  uStack_f0 = 0xaaaaaaaaaaaaaaaa;
  uStack_f8 = 0xaaaaaaaaaaaaaaaa;
  uStack_100 = 0xaaaaaaaaaaaaaaaa;
  uStack_128 = 0xaaaaaaaaaaaaaaaa;
  uStack_130 = 0xaaaaaaaaaaaaaaaa;
  uStack_118 = 0xaaaaaaaaaaaaaaaa;
  lStack_120 = 0xaaaaaaaaaaaaaaaa;
  uStack_148 = 0xaaaaaaaaaaaaaaaa;
  uStack_150 = 0xaaaaaaaaaaaaaaaa;
  uStack_138 = 0xaaaaaaaaaaaaaaaa;
  uStack_140 = 0xaaaaaaaaaaaaaaaa;
  uStack_168 = 0xaaaaaaaaaaaaaaaa;
  ppuStack_170 = (undefined **)0xaaaaaaaaaaaaaaaa;
  uStack_158 = 0xaaaaaaaaaaaaaaaa;
  uStack_160 = 0xaaaaaaaaaaaaaaaa;
  ppuStack_178 = &PTR_DAT_1108a5a60;
  uStack_d8 = 0;
  ppuStack_108 = &PTR___ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108a5ba0;
  ppuStack_188 = &PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108a5b78;
  uStack_180 = 0;
  uStack_1a0 = param_1;
  __ZNSt3__18ios_base4initEPv(&ppuStack_108,&ppuStack_170);
  uStack_80 = 0;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  ppuStack_188 = &PTR_SUB_1108a5a38;
  ppuStack_178 = &PTR_DAT_1108a5a60;
  ppuVar1 = (undefined **)
            (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  ppuStack_108 = &PTR_DAT_1108a5a88;
  ppuStack_170 = ppuVar1;
  __ZNSt3__16localeC1Ev(&uStack_168);
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  ppuStack_170 = &PTR_DAT_11088d7b0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  lStack_120 = 0;
  uStack_110 = CONCAT44(uStack_110._4_4_,0x18);
  func_0x000107c2ca8c(&ppuStack_170);
  ppuStack_198 = &PTR_FUN_110cd6408;
  pppuStack_190 = &ppuStack_178;
  FUN_10b325008(param_2,*(undefined8 *)(param_2 + 2000),0,&ppuStack_198);
  func_0x000107c28540(uStack_1a0,&ppuStack_170);
  ppuStack_188 = &PTR_SUB_1108a5a38;
  ppuStack_178 = &PTR_DAT_1108a5a60;
  ppuStack_170 = &PTR_DAT_11088d7b0;
  ppuStack_108 = &PTR_DAT_1108a5a88;
  if (lStack_120 < 0) {
    __ZdlPv(uStack_130);
  }
  ppuStack_170 = ppuVar1;
  __ZNSt3__16localeD1Ev(&uStack_168);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_188,&PTR_PTR_1108a5aa0);
  pppuVar3 = &ppuStack_108;
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  *pppuVar3 = &PTR_FUN_110cd4978;
  if (*(char *)((long)pppuVar3 + 0xc) != '\x01') {
    piVar4 = (int *)(ulong)*(uint *)(pppuVar3 + 1);
    if (*(uint *)(pppuVar3 + 1) != 0xffffffff) {
      uStack_1c0 = 0;
      ppuStack_1b8 = &PTR_DAT_11088d7b0;
      pcStack_1a8 = FUN_10b2ef420;
      puStack_1b0 = &stack0xfffffffffffffff0;
      _close();
      if (((int)piVar4 != 0) &&
         ((((int)piVar4 != -1 || (___error(), *piVar4 != 4)) && (___error(), *piVar4 == 9)))) {
        func_0x00010b2ed86c(&plStack_1c8,&UNK_10f74421b,0x2b);
        if (plStack_1c8 != (long *)0x0) {
          (**(code **)(*plStack_1c8 + 8))();
        }
      }
      *(undefined4 *)(pppuVar3 + 1) = 0xffffffff;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(0,0x10b2ef4d8);
  (*pcVar2)();
}



/* Entry: 10b2ef254; end: 10b2ef41f;  */

void FUN_10b2ef254(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  code *pcVar2;
  undefined ***pppuVar3;
  int *piVar4;
  long *plStack_1c8;
  undefined8 uStack_1c0;
  undefined **ppuStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined ***pppuStack_190;
  undefined **ppuStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  uStack_e0 = 0xaaaaaaaaaaaaaaaa;
  uStack_110 = 0xaaaaaaaaaaaaaaaa;
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  uStack_90 = 0xaaaaaaaaaaaaaaaa;
  uStack_98 = 0xaaaaaaaaaaaaaaaa;
  uStack_a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_c0 = 0xaaaaaaaaaaaaaaaa;
  uStack_c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_d0 = 0xaaaaaaaaaaaaaaaa;
  uStack_e8 = 0xaaaaaaaaaaaaaaaa;
  uStack_f0 = 0xaaaaaaaaaaaaaaaa;
  uStack_f8 = 0xaaaaaaaaaaaaaaaa;
  uStack_100 = 0xaaaaaaaaaaaaaaaa;
  uStack_128 = 0xaaaaaaaaaaaaaaaa;
  uStack_130 = 0xaaaaaaaaaaaaaaaa;
  uStack_118 = 0xaaaaaaaaaaaaaaaa;
  lStack_120 = 0xaaaaaaaaaaaaaaaa;
  uStack_148 = 0xaaaaaaaaaaaaaaaa;
  uStack_150 = 0xaaaaaaaaaaaaaaaa;
  uStack_138 = 0xaaaaaaaaaaaaaaaa;
  uStack_140 = 0xaaaaaaaaaaaaaaaa;
  uStack_168 = 0xaaaaaaaaaaaaaaaa;
  ppuStack_170 = (undefined **)0xaaaaaaaaaaaaaaaa;
  uStack_158 = 0xaaaaaaaaaaaaaaaa;
  uStack_160 = 0xaaaaaaaaaaaaaaaa;
  ppuStack_178 = &PTR_DAT_1108a5a60;
  uStack_d8 = 0;
  ppuStack_108 = &PTR___ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108a5ba0;
  ppuStack_188 = &PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108a5b78;
  uStack_180 = 0;
  uStack_1a0 = param_1;
  __ZNSt3__18ios_base4initEPv(&ppuStack_108,&ppuStack_170);
  uStack_80 = 0;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  ppuStack_188 = &PTR_SUB_1108a5a38;
  ppuStack_178 = &PTR_DAT_1108a5a60;
  ppuVar1 = (undefined **)
            (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  ppuStack_108 = &PTR_DAT_1108a5a88;
  ppuStack_170 = ppuVar1;
  __ZNSt3__16localeC1Ev(&uStack_168);
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  ppuStack_170 = &PTR_DAT_11088d7b0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  lStack_120 = 0;
  uStack_110 = CONCAT44(uStack_110._4_4_,0x18);
  func_0x000107c2ca8c(&ppuStack_170);
  ppuStack_198 = &PTR_FUN_110cd6408;
  pppuStack_190 = &ppuStack_178;
  FUN_10b325008(param_2,*(undefined8 *)(param_2 + 2000),param_3,&ppuStack_198);
  func_0x000107c28540(uStack_1a0,&ppuStack_170);
  ppuStack_188 = &PTR_SUB_1108a5a38;
  ppuStack_178 = &PTR_DAT_1108a5a60;
  ppuStack_170 = &PTR_DAT_11088d7b0;
  ppuStack_108 = &PTR_DAT_1108a5a88;
  if (lStack_120 < 0) {
    __ZdlPv(uStack_130);
  }
  ppuStack_170 = ppuVar1;
  __ZNSt3__16localeD1Ev(&uStack_168);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_188,&PTR_PTR_1108a5aa0);
  pppuVar3 = &ppuStack_108;
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  *pppuVar3 = &PTR_FUN_110cd4978;
  if (*(char *)((long)pppuVar3 + 0xc) != '\x01') {
    piVar4 = (int *)(ulong)*(uint *)(pppuVar3 + 1);
    if (*(uint *)(pppuVar3 + 1) != 0xffffffff) {
      ppuStack_1b8 = &PTR_DAT_11088d7b0;
      pcStack_1a8 = FUN_10b2ef420;
      uStack_1c0 = param_3;
      puStack_1b0 = &stack0xfffffffffffffff0;
      _close();
      if (((int)piVar4 != 0) &&
         ((((int)piVar4 != -1 || (___error(), *piVar4 != 4)) && (___error(), *piVar4 == 9)))) {
        func_0x00010b2ed86c(&plStack_1c8,&UNK_10f74421b,0x2b);
        if (plStack_1c8 != (long *)0x0) {
          (**(code **)(*plStack_1c8 + 8))();
        }
      }
      *(undefined4 *)(pppuVar3 + 1) = 0xffffffff;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(0,0x10b2ef4d8);
  (*pcVar2)();
}



/* Entry: 10b2ef420; end: 10b2ef653;  */

undefined8 * FUN_10b2ef420(undefined8 *param_1)

{
  code *pcVar1;
  int *piVar2;
  long *plStack_28;
  
  *param_1 = &PTR_FUN_110cd4978;
  if (*(char *)((long)param_1 + 0xc) != '\x01') {
    piVar2 = (int *)(ulong)*(uint *)(param_1 + 1);
    if (*(uint *)(param_1 + 1) != 0xffffffff) {
      _close();
      if (((int)piVar2 != 0) &&
         ((((int)piVar2 != -1 || (___error(), *piVar2 != 4)) && (___error(), *piVar2 == 9)))) {
        func_0x00010b2ed86c(&plStack_28,&UNK_10f74421b,0x2b);
        if (plStack_28 != (long *)0x0) {
          (**(code **)(*plStack_28 + 8))();
        }
      }
      *(undefined4 *)(param_1 + 1) = 0xffffffff;
    }
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0,0x10b2ef4d8);
  (*pcVar1)();
}



/* Entry: 10b2ef654; end: 10b2ef6bf;  */

bool FUN_10b2ef654(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  
  bVar4 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar6 = (long *)*param_1;
    if (-1 < (char)bVar4) {
      plVar6 = param_1;
    }
    plVar3 = (long *)*param_2;
    if (-1 < (char)bVar5) {
      plVar3 = param_2;
    }
    _memcmp(plVar6,plVar3);
    return (int)plVar6 == 0;
  }
  return false;
}



/* Entry: 10b2ef6c0; end: 10b2efc3f;  */

/* WARNING: Removing unreachable block (ram,0x00010b2efeb4) */
/* WARNING: Removing unreachable block (ram,0x00010b2eff10) */
/* WARNING: Type propagation algorithm not settling */

long ******* FUN_10b2ef6c0(long *param_1,long *******param_2,long *******param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  bool bVar8;
  long *******ppppppplVar9;
  long lVar10;
  long ******pppppplVar11;
  long *******ppppppplVar12;
  undefined8 *puVar13;
  long ******pppppplVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long ******pppppplVar20;
  long *******ppppppplVar21;
  long *******ppppppplVar22;
  ulong unaff_x24;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long *****ppppplStack_158;
  long *****ppppplStack_150;
  long *****ppppplStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_110;
  long *******ppppppplStack_108;
  ulong uStack_100;
  long *******ppppppplStack_f8;
  long ******pppppplStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long *******ppppppplStack_b8;
  long ******pppppplStack_b0;
  undefined8 uStack_a8;
  long *******ppppppplStack_a0;
  long ******pppppplStack_98;
  long ******pppppplStack_90;
  long *******ppppppplStack_80;
  long ******pppppplStack_78;
  long ******pppppplStack_70;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    if (param_2[1] == (long ******)0x0) {
      return param_2;
    }
    pppppplStack_78 = (long ******)0xaaaaaaaaaaaaaaaa;
    pppppplStack_70 = (long ******)0xaaaaaaaaaaaaaaaa;
    ppppppplStack_80 = (long *******)0xaaaaaaaaaaaaaaaa;
    param_3 = (long *******)*param_2;
    func_0x000107c3192c(&ppppppplStack_80,param_3);
  }
  else {
    if (*(char *)((long)param_2 + 0x17) == '\0') {
      return param_2;
    }
    pppppplStack_78 = param_2[1];
    ppppppplStack_80 = (long *******)*param_2;
    pppppplStack_70 = param_2[2];
  }
  puVar23 = (undefined8 *)0x0;
  puVar18 = (undefined8 *)0x0;
  puVar17 = (undefined8 *)0x0;
  ppppppplStack_a0 = (long *******)0x0;
  pppppplStack_98 = (long ******)0x0;
  pppppplStack_90 = (long ******)0x0;
LAB_10b2ef78c:
  func_0x000107c2cab4(&ppppppplStack_b8,&ppppppplStack_80);
  pppppplVar11 = pppppplStack_78;
  if (-1 < (long)pppppplStack_70) {
    pppppplVar11 = (long ******)((ulong)pppppplStack_70 >> 0x38);
  }
  uVar7 = (uint)(char)uStack_a8._7_1_;
  pppppplVar20 = (long ******)(ulong)uVar7;
  pppppplVar14 = pppppplStack_b0;
  if (-1 < (int)uVar7) {
    pppppplVar14 = (long ******)(ulong)uStack_a8._7_1_;
  }
  if (pppppplVar11 == pppppplVar14) {
    ppppppplVar22 = ppppppplStack_80;
    if (-1 < (long)pppppplStack_70) {
      ppppppplVar22 = (long *******)&ppppppplStack_80;
    }
    param_3 = ppppppplStack_b8;
    if (-1 < (int)uVar7) {
      param_3 = (long *******)&ppppppplStack_b8;
    }
    _memcmp(ppppppplVar22,param_3);
    ppppppplVar22 = (long *******)(ulong)((int)ppppppplVar22 != 0);
  }
  else {
    ppppppplVar22 = (long *******)0x1;
  }
  if ((int)uVar7 < 0) {
    __ZdlPv(ppppppplStack_b8);
  }
  ppppppplVar21 = (long *******)&ppppppplStack_80;
  if ((int)ppppppplVar22 != 0) {
    func_0x000107c2cab8(&ppppppplStack_b8);
    if ((long)pppppplStack_90 < 0) {
      __ZdlPv();
      ppppppplVar21 = ppppppplStack_a0;
    }
    pppppplVar20 = pppppplStack_b0;
    ppppppplVar9 = ppppppplStack_b8;
    pppppplStack_98 = pppppplStack_b0;
    ppppppplStack_a0 = ppppppplStack_b8;
    pppppplStack_90 = uStack_a8;
    uVar7 = (uint)(char)((ulong)uStack_a8 >> 0x38);
    unaff_x24 = (ulong)uVar7;
    pppppplVar14 = pppppplStack_b0;
    ppppppplVar22 = ppppppplStack_b8;
    if (-1 < (int)uVar7) {
      pppppplVar14 = (long ******)((ulong)uStack_a8 >> 0x38);
      ppppppplVar22 = (long *******)&ppppppplStack_a0;
    }
    if (pppppplVar14 != (long ******)0x0) {
      ppppppplVar12 = ppppppplVar22;
      for (uVar1 = (ulong)pppppplVar14 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        if (*(char *)ppppppplVar12 != '/') goto LAB_10b2ef8cc;
        ppppppplVar12 = (long *******)((long)ppppppplVar12 + 1);
      }
      if ((long ******)0x3 < pppppplVar14) {
        do {
          if ((((*(char *)ppppppplVar12 != '/') || (*(char *)((long)ppppppplVar12 + 1) != '/')) ||
              (*(char *)((long)ppppppplVar12 + 2) != '/')) ||
             (*(char *)((long)ppppppplVar12 + 3) != '/')) goto LAB_10b2ef8cc;
          ppppppplVar12 = (long *******)((long)ppppppplVar12 + 4);
        } while (ppppppplVar12 != (long *******)((long)ppppppplVar22 + (long)pppppplVar14));
      }
    }
    goto LAB_10b2ef768;
  }
  func_0x000107c2cab8(&ppppppplStack_b8);
  if ((long)pppppplStack_90 < 0) {
    __ZdlPv(ppppppplStack_a0);
  }
  pppppplStack_90 = uStack_a8;
  pppppplStack_98 = pppppplStack_b0;
  ppppppplStack_a0 = ppppppplStack_b8;
  pppppplVar14 = pppppplStack_b0;
  if (-1 < (long)uStack_a8) {
    pppppplVar14 = (long ******)((ulong)uStack_a8 >> 0x38);
  }
  if (pppppplVar14 == (long ******)0x0) goto LAB_10b2efb7c;
  if ((long)uStack_a8 < 0) {
    if (pppppplStack_b0 == (long ******)0x1) {
      ppppppplStack_a0._0_1_ = *(char *)ppppppplStack_b8;
      goto joined_r0x00010b2efa3c;
    }
  }
  else if ((char)((ulong)uStack_a8 >> 0x38) == '\x01') {
    ppppppplStack_a0._0_1_ = (char)ppppppplStack_b8;
joined_r0x00010b2efa3c:
    bVar8 = (char)ppppppplStack_a0 == '.';
    if (bVar8) goto LAB_10b2efb7c;
  }
  ppppppplVar21 = (long *******)&ppppppplStack_80;
  func_0x000107c2cab8(&ppppppplStack_b8);
  if (puVar17 < puVar23) {
    if ((long)uStack_a8 < 0) {
      func_0x000107c3192c(puVar17,ppppppplStack_b8,pppppplStack_b0);
      puVar23 = puVar17 + 3;
    }
    else {
      puVar17[2] = uStack_a8;
      puVar23 = puVar17 + 3;
      puVar17[1] = pppppplStack_b0;
      *puVar17 = ppppppplStack_b8;
    }
  }
  else {
    puVar17 = (undefined8 *)((long)puVar17 - (long)puVar18);
    pppppplVar14 = (long ******)(((long)puVar17 >> 3) * -0x5555555555555555 + 1);
    if ((long ******)0xaaaaaaaaaaaaaaa < pppppplVar14) {
LAB_10b2efc38:
      FUN_10b2edb1c();
LAB_10b2efc3c:
      func_0x00010b2ed0ac();
      pcStack_c8 = FUN_10b2efc40;
      puStack_110 = puVar23;
      ppppppplStack_108 = (long *******)&ppppppplStack_a0;
      uStack_100 = unaff_x24;
      ppppppplStack_f8 = ppppppplVar22;
      pppppplStack_f0 = pppppplVar20;
      puStack_e8 = puVar18;
      puStack_e0 = puVar17;
      plStack_d8 = param_1;
      puStack_d0 = &stack0xfffffffffffffff0;
      FUN_10b2ef6c0(&puStack_128);
      FUN_10b2ef6c0(&puStack_140,param_3);
      puVar18 = puStack_138;
      if ((puStack_128 == puStack_120) ||
         ((ulong)((long)puStack_138 - (long)puStack_140) <=
          (ulong)((long)puStack_120 - (long)puStack_128))) goto LAB_10b2efe94;
      puVar17 = puStack_140;
      puVar23 = puStack_128;
      if ((char)*(byte *)((long)ppppppplVar21 + 0x17) < '\0') {
        if ((long ******)0x1 < ppppppplVar21[1]) {
          ppppppplVar21 = (long *******)*ppppppplVar21;
          cVar4 = *(char *)ppppppplVar21;
          goto joined_r0x00010b2efcfc;
        }
      }
      else if (1 < *(byte *)((long)ppppppplVar21 + 0x17)) {
        cVar4 = *(char *)ppppppplVar21;
joined_r0x00010b2efcfc:
        if (((cVar4 == '/') && (*(char *)((long)ppppppplVar21 + 1) == '/')) &&
           (1 < (ulong)(((long)puStack_120 - (long)puStack_128 >> 3) * -0x5555555555555555))) {
          bVar5 = *(byte *)((long)puStack_128 + 0x17);
          uVar1 = puStack_128[1];
          if (-1 < (char)bVar5) {
            uVar1 = (ulong)bVar5;
          }
          bVar6 = *(byte *)((long)puStack_140 + 0x17);
          uVar2 = puStack_140[1];
          if (-1 < (char)bVar6) {
            uVar2 = (ulong)bVar6;
          }
          if (uVar1 == uVar2) {
            puVar17 = (undefined8 *)*puStack_128;
            if (-1 < (char)bVar5) {
              puVar17 = puStack_128;
            }
            puVar23 = (undefined8 *)*puStack_140;
            if (-1 < (char)bVar6) {
              puVar23 = puStack_140;
            }
            _memcmp(puVar17,puVar23);
            if ((int)puVar17 == 0) {
              cVar4 = *(char *)((long)puStack_128 + 0x2f);
              puVar17 = (undefined8 *)puStack_128[3];
              if (-1 < (long)cVar4) {
                puVar17 = puStack_128 + 3;
              }
              lVar15 = puStack_128[4];
              if (-1 < cVar4) {
                lVar15 = (long)cVar4;
              }
              cVar4 = *(char *)((long)puStack_140 + 0x2f);
              puVar23 = (undefined8 *)puStack_140[3];
              if (-1 < (long)cVar4) {
                puVar23 = puStack_140 + 3;
              }
              lVar10 = puStack_140[4];
              if (-1 < cVar4) {
                lVar10 = (long)cVar4;
              }
              func_0x000107c2cc6c(puVar17,lVar15,puVar23,lVar10);
              if ((int)puVar17 != 0) {
                puVar17 = puStack_140 + 6;
                puVar23 = puStack_128 + 6;
                goto LAB_10b2efe28;
              }
            }
          }
LAB_10b2efe94:
          ppppppplVar22 = (long *******)0x0;
          goto joined_r0x00010b2efe38;
        }
      }
LAB_10b2efe28:
      for (; puVar23 != puStack_120; puVar23 = puVar23 + 3) {
        bVar5 = *(byte *)((long)puVar23 + 0x17);
        uVar1 = puVar23[1];
        if (-1 < (char)bVar5) {
          uVar1 = (ulong)bVar5;
        }
        bVar6 = *(byte *)((long)puVar17 + 0x17);
        uVar2 = puVar17[1];
        if (-1 < (char)bVar6) {
          uVar2 = (ulong)bVar6;
        }
        if (uVar1 != uVar2) goto LAB_10b2efe94;
        puVar13 = (undefined8 *)*puVar23;
        if (-1 < (char)bVar5) {
          puVar13 = puVar23;
        }
        puVar3 = (undefined8 *)*puVar17;
        if (-1 < (char)bVar6) {
          puVar3 = puVar17;
        }
        _memcmp(puVar13,puVar3);
        if ((int)puVar13 != 0) goto LAB_10b2efe94;
        puVar17 = puVar17 + 3;
      }
      if (pppppplVar11 != (long ******)0x0) {
        for (; puVar17 != puVar18; puVar17 = puVar17 + 3) {
          cVar4 = *(char *)((long)puVar17 + 0x17);
          puVar23 = (undefined8 *)*puVar17;
          if (-1 < (long)cVar4) {
            puVar23 = puVar17;
          }
          lVar15 = puVar17[1];
          if (-1 < cVar4) {
            lVar15 = (long)cVar4;
          }
          func_0x000107c2cabc(&ppppplStack_158,pppppplVar11,puVar23,lVar15);
          if (*(char *)((long)pppppplVar11 + 0x17) < '\0') {
            __ZdlPv(*pppppplVar11);
          }
          pppppplVar11[1] = ppppplStack_150;
          *pppppplVar11 = ppppplStack_158;
          pppppplVar11[2] = ppppplStack_148;
        }
      }
      ppppppplVar22 = (long *******)0x1;
joined_r0x00010b2efe38:
      if (puStack_140 != (undefined8 *)0x0) {
        for (; puStack_138 != puStack_140; puStack_138 = puStack_138 + -3) {
        }
        __ZdlPv(puStack_140);
      }
      if (puStack_128 != (undefined8 *)0x0) {
        for (; puStack_128 != puStack_120; puStack_120 = puStack_120 + -3) {
        }
        __ZdlPv(puStack_128);
      }
      return ppppppplVar22;
    }
    lVar15 = (long)puVar23 - (long)puVar18 >> 3;
    pppppplVar20 = (long ******)(lVar15 * 0x5555555555555556);
    if (pppppplVar20 < pppppplVar14 || (long)pppppplVar20 - (long)pppppplVar14 == 0) {
      pppppplVar20 = pppppplVar14;
    }
    if (0x555555555555554 < (ulong)(lVar15 * -0x5555555555555555)) {
      pppppplVar20 = (long ******)0xaaaaaaaaaaaaaaa;
    }
    if (pppppplVar20 == (long ******)0x0) {
      lVar15 = 0;
      if (-1 < (long)uStack_a8) goto LAB_10b2efaec;
LAB_10b2efb2c:
      func_0x000107c3192c(puVar17,ppppppplStack_b8,pppppplStack_b0);
    }
    else {
      if ((long ******)0xaaaaaaaaaaaaaaa < pppppplVar20) goto LAB_10b2efc3c;
      lVar15 = (long)pppppplVar20 * 0x18;
      __Znwm();
      puVar17 = (undefined8 *)(lVar15 + (long)puVar17);
      lVar15 = lVar15 + (long)pppppplVar20 * 0x18;
      if ((long)uStack_a8 < 0) goto LAB_10b2efb2c;
LAB_10b2efaec:
      puVar17[2] = uStack_a8;
      puVar17[1] = pppppplStack_b0;
      *puVar17 = ppppppplStack_b8;
    }
    puVar23 = puVar17 + 3;
    lVar19 = (long)puVar17 - (param_1[1] - *param_1);
    _memcpy(lVar19);
    lVar10 = *param_1;
    *param_1 = lVar19;
    param_1[2] = lVar15;
    if (lVar10 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar23;
  if ((long)uStack_a8 < 0) {
    __ZdlPv(ppppppplStack_b8);
  }
  puVar18 = (undefined8 *)*param_1;
  puVar17 = puVar23;
LAB_10b2efb7c:
  pppppplStack_b0 = (long ******)0xaaaaaaaaaaaaaaaa;
  uStack_a8 = (long ******)0xaaaaaaaaaaaaaaaa;
  ppppppplStack_b8 = (long *******)0xaaaaaaaaaaaaaaaa;
  ppppppplVar22 = (long *******)&ppppppplStack_80;
  func_0x000107c2cab4(&ppppppplStack_b8,ppppppplVar22);
  if ((puVar18 != puVar17) && (puVar17 = puVar17 + -3, puVar18 < puVar17)) {
    do {
      uVar16 = *puVar18;
      uVar25 = puVar18[2];
      uVar24 = puVar18[1];
      uVar27 = puVar17[1];
      uVar26 = *puVar17;
      puVar18[2] = puVar17[2];
      puVar23 = puVar18 + 3;
      puVar18[1] = uVar27;
      *puVar18 = uVar26;
      *puVar17 = uVar16;
      puVar17[2] = uVar25;
      puVar17[1] = uVar24;
      puVar17 = puVar17 + -3;
      puVar18 = puVar23;
    } while (puVar23 < puVar17);
  }
  ppppppplVar21 = ppppppplStack_a0;
  if ((long)uStack_a8 < 0) {
    ppppppplVar22 = ppppppplStack_b8;
    __ZdlPv(ppppppplStack_b8);
    ppppppplVar21 = ppppppplStack_a0;
  }
  ppppppplStack_a0 = ppppppplVar21;
  if ((long)pppppplStack_90 < 0) {
    __ZdlPv(ppppppplVar21);
    ppppppplVar22 = ppppppplVar21;
  }
  if ((long)pppppplStack_70 < 0) {
    __ZdlPv(ppppppplStack_80);
    ppppppplVar22 = ppppppplStack_80;
  }
  return ppppppplVar22;
LAB_10b2ef8cc:
  if (puVar17 < puVar23) {
    if ((int)uVar7 < 0) {
      param_3 = ppppppplStack_b8;
      func_0x000107c3192c(puVar17,ppppppplStack_b8,pppppplStack_b0);
      puVar13 = puVar17 + 3;
    }
    else {
      puVar17[2] = uStack_a8;
      puVar13 = puVar17 + 3;
      puVar17[1] = pppppplStack_b0;
      *puVar17 = ppppppplStack_b8;
    }
    goto LAB_10b2ef764;
  }
  puVar18 = (undefined8 *)((long)puVar17 - *param_1);
  puVar13 = (undefined8 *)(((long)puVar18 >> 3) * -0x5555555555555555 + 1);
  ppppppplVar22 = ppppppplStack_b8;
  if ((undefined8 *)0xaaaaaaaaaaaaaaa < puVar13) goto LAB_10b2efc38;
  lVar15 = (long)puVar23 - *param_1 >> 3;
  puVar23 = (undefined8 *)(lVar15 * 0x5555555555555556);
  if (puVar23 < puVar13 || (long)puVar23 - (long)puVar13 == 0) {
    puVar23 = puVar13;
  }
  if (0x555555555555554 < (ulong)(lVar15 * -0x5555555555555555)) {
    puVar23 = (undefined8 *)0xaaaaaaaaaaaaaaa;
  }
  if (puVar23 == (undefined8 *)0x0) {
    lVar15 = 0;
    if ((int)uVar7 < 0) goto LAB_10b2ef984;
LAB_10b2ef94c:
    puVar18[2] = pppppplStack_90;
    puVar18[1] = pppppplStack_98;
    *puVar18 = ppppppplStack_a0;
  }
  else {
    if ((undefined8 *)0xaaaaaaaaaaaaaaa < puVar23) goto LAB_10b2efc3c;
    lVar15 = (long)puVar23 * 0x18;
    __Znwm();
    puVar18 = (undefined8 *)(lVar15 + (long)puVar18);
    if (-1 < (int)uVar7) goto LAB_10b2ef94c;
LAB_10b2ef984:
    func_0x000107c3192c(puVar18,ppppppplVar9,pppppplVar20);
  }
  puVar23 = (undefined8 *)(lVar15 + (long)puVar23 * 0x18);
  puVar13 = puVar18 + 3;
  param_3 = (long *******)*param_1;
  puVar18 = (undefined8 *)((long)puVar18 - (param_1[1] - (long)param_3));
  _memcpy(puVar18);
  lVar15 = *param_1;
  *param_1 = (long)puVar18;
  param_1[2] = (long)puVar23;
  if (lVar15 != 0) {
    __ZdlPv();
  }
LAB_10b2ef764:
  param_1[1] = (long)puVar13;
  puVar17 = puVar13;
LAB_10b2ef768:
  func_0x000107c2cab4(&ppppppplStack_b8,&ppppppplStack_80);
  if ((long)pppppplStack_70 < 0) {
    __ZdlPv(ppppppplStack_80);
  }
  pppppplStack_78 = pppppplStack_b0;
  ppppppplStack_80 = ppppppplStack_b8;
  pppppplStack_70 = uStack_a8;
  goto LAB_10b2ef78c;
}



/* Entry: 10b2efc40; end: 10b2eff1b;  */

/* WARNING: Removing unreachable block (ram,0x00010b2efeb4) */
/* WARNING: Removing unreachable block (ram,0x00010b2eff10) */

undefined8 FUN_10b2efc40(char *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  
  FUN_10b2ef6c0(&puStack_68);
  FUN_10b2ef6c0(&puStack_80,param_2);
  puVar9 = puStack_78;
  if ((puStack_68 == puStack_60) ||
     ((ulong)((long)puStack_78 - (long)puStack_80) <= (ulong)((long)puStack_60 - (long)puStack_68)))
  goto LAB_10b2efe94;
  puVar10 = puStack_80;
  puVar13 = puStack_68;
  if (param_1[0x17] < '\0') {
    if (1 < *(ulong *)(param_1 + 8)) {
      param_1 = *(char **)param_1;
      cVar6 = *param_1;
      goto joined_r0x00010b2efcfc;
    }
  }
  else if (1 < (byte)param_1[0x17]) {
    cVar6 = *param_1;
joined_r0x00010b2efcfc:
    if (((cVar6 == '/') && (param_1[1] == '/')) &&
       (1 < (ulong)(((long)puStack_60 - (long)puStack_68 >> 3) * -0x5555555555555555))) {
      bVar7 = *(byte *)((long)puStack_68 + 0x17);
      uVar1 = puStack_68[1];
      if (-1 < (char)bVar7) {
        uVar1 = (ulong)bVar7;
      }
      bVar8 = *(byte *)((long)puStack_80 + 0x17);
      uVar2 = puStack_80[1];
      if (-1 < (char)bVar8) {
        uVar2 = (ulong)bVar8;
      }
      if (uVar1 == uVar2) {
        puVar10 = (undefined8 *)*puStack_68;
        if (-1 < (char)bVar7) {
          puVar10 = puStack_68;
        }
        puVar13 = (undefined8 *)*puStack_80;
        if (-1 < (char)bVar8) {
          puVar13 = puStack_80;
        }
        _memcmp(puVar10,puVar13);
        if ((int)puVar10 == 0) {
          cVar6 = *(char *)((long)puStack_68 + 0x2f);
          puVar10 = (undefined8 *)puStack_68[3];
          if (-1 < (long)cVar6) {
            puVar10 = puStack_68 + 3;
          }
          lVar3 = puStack_68[4];
          if (-1 < cVar6) {
            lVar3 = (long)cVar6;
          }
          cVar6 = *(char *)((long)puStack_80 + 0x2f);
          puVar13 = (undefined8 *)puStack_80[3];
          if (-1 < (long)cVar6) {
            puVar13 = puStack_80 + 3;
          }
          lVar4 = puStack_80[4];
          if (-1 < cVar6) {
            lVar4 = (long)cVar6;
          }
          func_0x000107c2cc6c(puVar10,lVar3,puVar13,lVar4);
          if ((int)puVar10 != 0) {
            puVar10 = puStack_80 + 6;
            puVar13 = puStack_68 + 6;
            goto LAB_10b2efe28;
          }
        }
      }
LAB_10b2efe94:
      uVar12 = 0;
      goto joined_r0x00010b2efe38;
    }
  }
LAB_10b2efe28:
  for (; puVar13 != puStack_60; puVar13 = puVar13 + 3) {
    bVar7 = *(byte *)((long)puVar13 + 0x17);
    uVar1 = puVar13[1];
    if (-1 < (char)bVar7) {
      uVar1 = (ulong)bVar7;
    }
    bVar8 = *(byte *)((long)puVar10 + 0x17);
    uVar2 = puVar10[1];
    if (-1 < (char)bVar8) {
      uVar2 = (ulong)bVar8;
    }
    if (uVar1 != uVar2) goto LAB_10b2efe94;
    puVar11 = (undefined8 *)*puVar13;
    if (-1 < (char)bVar7) {
      puVar11 = puVar13;
    }
    puVar5 = (undefined8 *)*puVar10;
    if (-1 < (char)bVar8) {
      puVar5 = puVar10;
    }
    _memcmp(puVar11,puVar5);
    if ((int)puVar11 != 0) goto LAB_10b2efe94;
    puVar10 = puVar10 + 3;
  }
  if (param_3 != (undefined8 *)0x0) {
    for (; puVar10 != puVar9; puVar10 = puVar10 + 3) {
      cVar6 = *(char *)((long)puVar10 + 0x17);
      puVar13 = (undefined8 *)*puVar10;
      if (-1 < (long)cVar6) {
        puVar13 = puVar10;
      }
      lVar3 = puVar10[1];
      if (-1 < cVar6) {
        lVar3 = (long)cVar6;
      }
      func_0x000107c2cabc(&uStack_98,param_3,puVar13,lVar3);
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        __ZdlPv(*param_3);
      }
      param_3[1] = uStack_90;
      *param_3 = uStack_98;
      param_3[2] = uStack_88;
    }
  }
  uVar12 = 1;
joined_r0x00010b2efe38:
  if (puStack_80 != (undefined8 *)0x0) {
    for (; puStack_78 != puStack_80; puStack_78 = puStack_78 + -3) {
    }
    __ZdlPv(puStack_80);
  }
  if (puStack_68 != (undefined8 *)0x0) {
    for (; puStack_68 != puStack_60; puStack_60 = puStack_60 + -3) {
    }
    __ZdlPv(puStack_68);
  }
  return uVar12;
}



/* Entry: 10b2eff1c; end: 10b2f005b;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001001483ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010014840c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010014819c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b2f0f40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b2f09f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b2f0f44) */
/* WARNING: Removing unreachable block (ram,0x00010014823c) */
/* WARNING: Removing unreachable block (ram,0x0001001481a0) */
/* WARNING: Removing unreachable block (ram,0x0001001481b4) */
/* WARNING: Removing unreachable block (ram,0x0001001481b8) */
/* WARNING: Removing unreachable block (ram,0x0001001481cc) */
/* WARNING: Removing unreachable block (ram,0x0001001481d8) */
/* WARNING: Removing unreachable block (ram,0x00010014832c) */
/* WARNING: Removing unreachable block (ram,0x000100148334) */
/* WARNING: Removing unreachable block (ram,0x0001001481dc) */
/* WARNING: Removing unreachable block (ram,0x0001001481e4) */
/* WARNING: Removing unreachable block (ram,0x000100148754) */
/* WARNING: Removing unreachable block (ram,0x000100148258) */
/* WARNING: Removing unreachable block (ram,0x000100148260) */
/* WARNING: Removing unreachable block (ram,0x00010014827c) */
/* WARNING: Removing unreachable block (ram,0x000100148340) */
/* WARNING: Removing unreachable block (ram,0x000100148284) */
/* WARNING: Removing unreachable block (ram,0x000100148264) */
/* WARNING: Removing unreachable block (ram,0x000100148268) */
/* WARNING: Removing unreachable block (ram,0x000100148298) */
/* WARNING: Removing unreachable block (ram,0x0001001482a4) */
/* WARNING: Removing unreachable block (ram,0x0001001482ac) */
/* WARNING: Removing unreachable block (ram,0x0001001482c0) */
/* WARNING: Removing unreachable block (ram,0x0001001482c8) */
/* WARNING: Removing unreachable block (ram,0x0001001482d4) */
/* WARNING: Removing unreachable block (ram,0x0001001482fc) */
/* WARNING: Removing unreachable block (ram,0x000100148308) */
/* WARNING: Removing unreachable block (ram,0x000100148348) */
/* WARNING: Removing unreachable block (ram,0x000100148320) */
/* WARNING: Removing unreachable block (ram,0x00010014834c) */
/* WARNING: Removing unreachable block (ram,0x000100148278) */
/* WARNING: Removing unreachable block (ram,0x000100148354) */
/* WARNING: Removing unreachable block (ram,0x000100148428) */
/* WARNING: Removing unreachable block (ram,0x00010014842c) */
/* WARNING: Removing unreachable block (ram,0x000100148358) */
/* WARNING: Removing unreachable block (ram,0x000100148448) */
/* WARNING: Removing unreachable block (ram,0x00010014844c) */
/* WARNING: Removing unreachable block (ram,0x000100148454) */
/* WARNING: Removing unreachable block (ram,0x000100148480) */
/* WARNING: Removing unreachable block (ram,0x000100148474) */
/* WARNING: Removing unreachable block (ram,0x000100148484) */
/* WARNING: Removing unreachable block (ram,0x000100148370) */
/* WARNING: Removing unreachable block (ram,0x000100148388) */
/* WARNING: Removing unreachable block (ram,0x000100148390) */
/* WARNING: Removing unreachable block (ram,0x0001001483a4) */
/* WARNING: Removing unreachable block (ram,0x0001001483b0) */
/* WARNING: Removing unreachable block (ram,0x0001001483c0) */
/* WARNING: Removing unreachable block (ram,0x0001001483cc) */
/* WARNING: Removing unreachable block (ram,0x0001001483d0) */
/* WARNING: Removing unreachable block (ram,0x0001001483f0) */
/* WARNING: Removing unreachable block (ram,0x000100148410) */
/* WARNING: Removing unreachable block (ram,0x000100148488) */
/* WARNING: Removing unreachable block (ram,0x00010014848c) */
/* WARNING: Removing unreachable block (ram,0x0001001484ac) */
/* WARNING: Removing unreachable block (ram,0x000100148490) */
/* WARNING: Removing unreachable block (ram,0x000100148408) */
/* WARNING: Removing unreachable block (ram,0x0001001483e0) */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */
/* WARNING: Removing unreachable block (ram,0x00010b2f09f8) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16]
FUN_10b2eff1c(ushort *******param_1,undefined8 param_2,ushort *******param_3,ushort *******param_4)

{
  byte *pbVar1;
  ushort uVar2;
  ushort *******pppppppuVar3;
  bool bVar4;
  undefined8 *******pppppppuVar5;
  ushort *******pppppppuVar6;
  ushort *******pppppppuVar7;
  ushort *******pppppppuVar8;
  ushort *******pppppppuVar9;
  ushort *******pppppppuVar10;
  ushort *******pppppppuVar11;
  ushort *******pppppppuVar12;
  ushort *******pppppppuVar13;
  uint uVar14;
  ushort ******ppppppuVar15;
  ushort *******pppppppuVar16;
  ushort *******extraout_x8;
  ushort ******ppppppuVar17;
  ushort *******extraout_x8_00;
  ushort *******extraout_x8_01;
  byte bVar18;
  byte *pbVar19;
  ulong uVar20;
  ushort *******pppppppuVar21;
  ushort *******unaff_x20;
  ushort *******unaff_x21;
  ushort *******pppppppuVar22;
  ushort *******pppppppuVar23;
  ushort *******pppppppuVar24;
  ushort *******unaff_x23;
  ushort *******pppppppuVar25;
  ulong uVar26;
  ushort ******ppppppuVar27;
  ushort *******pppppppuVar28;
  ushort *******unaff_x26;
  ushort *******unaff_x27;
  ushort ******ppppppuVar29;
  undefined *puVar30;
  code *pcVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  ushort *******pppppppuStack_2d8;
  ushort ******ppppppuStack_2d0;
  undefined8 uStack_2c8;
  ushort *******pppppppuStack_2c0;
  ushort ******ppppppuStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a0;
  ushort *******pppppppuStack_298;
  ushort *******pppppppuStack_290;
  ushort *******pppppppuStack_288;
  ushort *******pppppppuStack_280;
  ushort *******pppppppuStack_278;
  ushort *******pppppppuStack_270;
  undefined8 *******pppppppuStack_260;
  code *pcStack_258;
  ushort *******pppppppuStack_250;
  undefined6 uStack_248;
  undefined2 uStack_242;
  undefined6 uStack_240;
  undefined1 uStack_23a;
  byte bStack_239;
  ushort *******pppppppuStack_238;
  ushort *******pppppppuStack_230;
  undefined8 uStack_228;
  ushort *******pppppppuStack_220;
  ushort *******pppppppuStack_218;
  undefined8 uStack_210;
  ushort *******pppppppuStack_208;
  ushort *******pppppppuStack_200;
  ushort *******pppppppuStack_1f8;
  ushort *******pppppppuStack_1f0;
  ushort *******pppppppuStack_1e8;
  ushort *******pppppppuStack_1e0;
  undefined8 *******pppppppuStack_1d0;
  undefined8 uStack_1c8;
  ushort *******pppppppuStack_1c0;
  ushort *******pppppppuStack_1b8;
  undefined8 uStack_1b0;
  ushort *******pppppppuStack_1a0;
  ushort *******pppppppuStack_198;
  ushort *******pppppppuStack_190;
  ushort *******pppppppuStack_188;
  undefined8 uStack_180;
  ushort *******pppppppuStack_178;
  ushort *******pppppppuStack_170;
  ushort *******pppppppuStack_168;
  ushort *******pppppppuStack_160;
  ushort *******pppppppuStack_158;
  undefined8 *******pppppppuStack_150;
  code *pcStack_148;
  ushort *******pppppppuStack_138;
  ushort *******pppppppuStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  ushort *******pppppppuStack_118;
  ushort *******pppppppuStack_110;
  ushort *******pppppppuStack_108;
  ushort *******pppppppuStack_100;
  ushort *******pppppppuStack_f8;
  undefined8 *******pppppppuStack_f0;
  code *pcStack_e8;
  undefined1 auStack_e0 [8];
  ushort *******pppppppuStack_d8;
  ushort *******pppppppuStack_d0;
  undefined8 uStack_c8;
  undefined8 ******ppppppuStack_70;
  code *pcStack_68;
  undefined8 *******pppppppuStack_58;
  ushort *******pppppppuStack_50;
  undefined8 uStack_48;
  
  pppppppuStack_50 = (ushort *******)0xaaaaaaaaaaaaaaaa;
  uStack_48 = -0x5555555555555556;
  pppppppuStack_58 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
  func_0x000107c2cab8(&pppppppuStack_58);
  pppppppuVar11 = (ushort *******)&pppppppuStack_58;
  FUN_10b2f005c();
  if (pppppppuVar11 == (ushort *******)0xffffffffffffffff) {
    *param_1 = (ushort ******)0x0;
    param_1[1] = (ushort ******)0x0;
    param_1[2] = (ushort ******)0x0;
    pppppppuVar5 = pppppppuStack_58;
    goto joined_r0x00010b2effa4;
  }
  pppppppuVar16 = (ushort *******)(long)uStack_48._7_1_;
  if ((long)pppppppuVar16 < 0) {
    if (pppppppuVar11 <= pppppppuStack_50) {
      unaff_x20 = (ushort *******)((long)pppppppuStack_50 - (long)pppppppuVar11);
      pppppppuVar16 = pppppppuStack_50;
      pppppppuVar5 = pppppppuStack_58;
      if (unaff_x20 < (ushort *******)0x7ffffffffffffff8) goto LAB_10b2eff80;
LAB_10b2f0054:
      FUN_10b2ecf74();
    }
  }
  else if (pppppppuVar11 <= pppppppuVar16) {
    unaff_x20 = (ushort *******)((long)pppppppuVar16 - (long)pppppppuVar11);
    pppppppuVar5 = &pppppppuStack_58;
    if ((ushort *******)0x7ffffffffffffff7 < unaff_x20) goto LAB_10b2f0054;
LAB_10b2eff80:
    if (unaff_x20 < (ushort *******)0x17) {
      *(byte *)((long)param_1 + 0x17) = (byte)unaff_x20;
      pppppppuVar23 = param_1;
      if (pppppppuVar16 != pppppppuVar11) goto LAB_10b2effe0;
    }
    else {
      pppppppuVar16 = (ushort *******)0x19;
      if (((ulong)unaff_x20 | 7) != 0x17) {
        pppppppuVar16 = (ushort *******)(((ulong)unaff_x20 | 7) + 1);
      }
      pppppppuVar23 = pppppppuVar16;
      __Znwm();
      param_1[1] = (ushort ******)unaff_x20;
      param_1[2] = (ushort ******)((ulong)pppppppuVar16 | 0x8000000000000000);
      *param_1 = (ushort ******)pppppppuVar23;
LAB_10b2effe0:
      param_3 = (ushort *******)((long)pppppppuVar5 + (long)pppppppuVar11);
      pppppppuVar11 = pppppppuVar23;
      _memmove(pppppppuVar23,param_3,unaff_x20);
      param_1 = pppppppuVar23;
    }
    *(byte *)((long)param_1 + (long)unaff_x20) = 0;
    pppppppuVar5 = pppppppuStack_58;
joined_r0x00010b2effa4:
    if (-1 < uStack_48) {
      auVar35._8_8_ = param_3;
      auVar35._0_8_ = pppppppuVar11;
      return auVar35;
    }
    pppppppuStack_58 = pppppppuVar5;
    __ZdlPv(pppppppuVar5);
    auVar36._8_8_ = param_3;
    auVar36._0_8_ = pppppppuVar5;
    return auVar36;
  }
  func_0x00010b2ed138();
  pppppppuVar3 = (ushort *******)auStack_e0;
  ppppppuStack_70 = (undefined8 ******)&stack0xfffffffffffffff0;
  pcStack_68 = FUN_10b2f005c;
  bVar18 = *(byte *)((long)pppppppuVar11 + 0x17);
  pppppppuVar16 = (ushort *******)(long)(char)bVar18;
  if ((long)pppppppuVar16 < 0) {
    pppppppuVar23 = (ushort *******)*pppppppuVar11;
    pppppppuVar6 = (ushort *******)pppppppuVar11[1];
    if (pppppppuVar6 == (ushort *******)0x1) {
      if (*(byte *)pppppppuVar23 != 0x2e) {
        pppppppuVar6 = (ushort *******)0x1;
LAB_10b2f0104:
        uVar26 = ~(ulong)pppppppuVar6;
        do {
          pppppppuVar28 = pppppppuVar6;
          if (pppppppuVar28 == (ushort *******)0x0) goto LAB_10b2f0178;
          pppppppuVar6 = (ushort *******)((long)pppppppuVar28 + -1);
          uVar26 = uVar26 + 1;
        } while (((byte *)((long)pppppppuVar23 + -1))[(long)pppppppuVar28] != 0x2e);
        pppppppuVar23 = pppppppuVar6;
        if (pppppppuVar28 < (ushort *******)0x2) goto LAB_10b2f017c;
        pppppppuVar24 = (ushort *******)*pppppppuVar11;
        pppppppuVar9 = (ushort *******)pppppppuVar11[1];
        pppppppuVar10 = pppppppuVar9;
        pppppppuVar13 = pppppppuVar24;
        if (-1 < (char)bVar18) {
          pppppppuVar10 = pppppppuVar16;
          pppppppuVar13 = pppppppuVar11;
        }
        if (pppppppuVar10 == (ushort *******)0x0) {
LAB_10b2f019c:
          pppppppuVar22 = (ushort *******)0xffffffffffffffff;
        }
        else {
          pppppppuVar22 = pppppppuVar6;
          if (pppppppuVar10 <= (ushort *******)((long)pppppppuVar28 + -2)) {
            pppppppuVar22 = pppppppuVar10;
          }
          do {
            if (pppppppuVar22 == (ushort *******)0x0) goto LAB_10b2f019c;
            pbVar19 = (byte *)((long)pppppppuVar13 + -1) + (long)pppppppuVar22;
            pppppppuVar22 = (ushort *******)((long)pppppppuVar22 + -1);
          } while (*pbVar19 != 0x2e);
        }
        pppppppuVar21 = pppppppuVar6;
        if (pppppppuVar10 <= (ushort *******)((long)pppppppuVar28 + -2)) {
          pppppppuVar21 = pppppppuVar10;
        }
        do {
          if (pppppppuVar21 == (ushort *******)0x0) {
            pppppppuVar21 = (ushort *******)0xffffffffffffffff;
            break;
          }
          pbVar19 = (byte *)((long)pppppppuVar13 + -1) + (long)pppppppuVar21;
          pppppppuVar21 = (ushort *******)((long)pppppppuVar21 + -1);
        } while (*pbVar19 != 0x2f);
        if ((pppppppuVar22 == (ushort *******)0xffffffffffffffff) ||
           ((pppppppuVar21 != (ushort *******)0xffffffffffffffff && (pppppppuVar22 < pppppppuVar21))
           )) goto LAB_10b2f017c;
        pppppppuStack_d0 = (ushort *******)0xaaaaaaaaaaaaaaaa;
        uStack_c8 = 0xaaaaaaaaaaaaaaaa;
        pppppppuStack_d8 = (ushort *******)0xaaaaaaaaaaaaaaaa;
        pppppppuVar10 = pppppppuVar6;
        if ((char)bVar18 < '\0') {
          if (pppppppuVar22 < pppppppuVar9) goto LAB_10b2f021c;
LAB_10b2f0674:
          uStack_c8 = 0xaaaaaaaaaaaaaaaa;
          pppppppuStack_d0 = (ushort *******)0xaaaaaaaaaaaaaaaa;
          pppppppuStack_d8 = (ushort *******)0xaaaaaaaaaaaaaaaa;
          func_0x00010b2ed138();
        }
        else {
          pppppppuVar9 = pppppppuVar16;
          pppppppuVar24 = pppppppuVar11;
          if (pppppppuVar16 <= pppppppuVar22) goto LAB_10b2f0674;
LAB_10b2f021c:
          unaff_x26 = (ushort *******)((long)pppppppuVar22 + 1);
          unaff_x21 = (ushort *******)0x7ffffffffffffff7;
          param_1 = (ushort *******)((long)pppppppuVar9 - (long)unaff_x26);
          if (param_1 < (ushort *******)0x7ffffffffffffff8) {
            if (param_1 < (ushort *******)0x17) {
              uStack_c8 = CONCAT17((char)param_1,0xaaaaaaaaaaaaaa);
              unaff_x20 = (ushort *******)&pppppppuStack_d8;
              if (pppppppuVar9 != unaff_x26) goto LAB_10b2f0288;
            }
            else {
              pppppppuVar16 = (ushort *******)0x19;
              if (((ulong)param_1 | 7) != 0x17) {
                pppppppuVar16 = (ushort *******)(((ulong)param_1 | 7) + 1);
              }
              unaff_x20 = pppppppuVar16;
              __Znwm();
              uStack_c8 = (ulong)pppppppuVar16 | 0x8000000000000000;
              pppppppuStack_d8 = unaff_x20;
              pppppppuStack_d0 = param_1;
LAB_10b2f0288:
              param_3 = (ushort *******)((long)pppppppuVar24 + (long)unaff_x26);
              param_4 = param_1;
              _memmove(unaff_x20);
            }
            unaff_x21 = (ushort *******)0x7ffffffffffffff7;
            *(byte *)((long)unaff_x20 + (long)param_1) = 0;
            pppppppuVar16 = pppppppuStack_d8;
            pppppppuVar23 = pppppppuStack_d0;
            if (-1 < (long)uStack_c8) {
              pppppppuVar16 = (ushort *******)&pppppppuStack_d8;
              pppppppuVar23 = (ushort *******)(uStack_c8 >> 0x38);
            }
            if (pppppppuVar23 == (ushort *******)0x7) {
              bVar18 = *(byte *)pppppppuVar16;
              uVar14 = bVar18 + 0x20;
              if (0x19 < bVar18 - 0x41) {
                uVar14 = (uint)bVar18;
              }
              if (uVar14 == 0x75) {
                pppppppuVar23 = pppppppuStack_d8;
                if (-1 < (long)uStack_c8) {
                  pppppppuVar23 = (ushort *******)&pppppppuStack_d8;
                }
                bVar18 = *(byte *)((long)pppppppuVar23 + 1);
                uVar14 = bVar18 + 0x20;
                if (0x19 < bVar18 - 0x41) {
                  uVar14 = (uint)bVar18;
                }
                if (uVar14 == 0x73) {
                  pppppppuVar23 = pppppppuStack_d8;
                  if (-1 < (long)uStack_c8) {
                    pppppppuVar23 = (ushort *******)&pppppppuStack_d8;
                  }
                  bVar18 = *(byte *)((long)pppppppuVar23 + 2);
                  uVar14 = bVar18 + 0x20;
                  if (0x19 < bVar18 - 0x41) {
                    uVar14 = (uint)bVar18;
                  }
                  if (uVar14 == 0x65) {
                    pppppppuVar23 = pppppppuStack_d8;
                    if (-1 < (long)uStack_c8) {
                      pppppppuVar23 = (ushort *******)&pppppppuStack_d8;
                    }
                    bVar18 = *(byte *)((long)pppppppuVar23 + 3);
                    uVar14 = bVar18 + 0x20;
                    if (0x19 < bVar18 - 0x41) {
                      uVar14 = (uint)bVar18;
                    }
                    if (uVar14 == 0x72) {
                      pppppppuVar23 = pppppppuStack_d8;
                      if (-1 < (long)uStack_c8) {
                        pppppppuVar23 = (ushort *******)&pppppppuStack_d8;
                      }
                      bVar18 = *(byte *)((long)pppppppuVar23 + 4);
                      uVar14 = bVar18 + 0x20;
                      if (0x19 < bVar18 - 0x41) {
                        uVar14 = (uint)bVar18;
                      }
                      if (uVar14 == 0x2e) {
                        pppppppuVar23 = pppppppuStack_d8;
                        if (-1 < (long)uStack_c8) {
                          pppppppuVar23 = (ushort *******)&pppppppuStack_d8;
                        }
                        bVar18 = *(byte *)((long)pppppppuVar23 + 5);
                        uVar14 = bVar18 + 0x20;
                        if (0x19 < bVar18 - 0x41) {
                          uVar14 = (uint)bVar18;
                        }
                        if (uVar14 == 0x6a) {
                          pppppppuVar23 = pppppppuStack_d8;
                          if (-1 < (long)uStack_c8) {
                            pppppppuVar23 = (ushort *******)&pppppppuStack_d8;
                          }
                          bVar18 = *(byte *)((long)pppppppuVar23 + 6);
                          uVar14 = bVar18 + 0x20;
                          if (0x19 < bVar18 - 0x41) {
                            uVar14 = (uint)bVar18;
                          }
                          if (uVar14 == 0x73) {
                            pppppppuVar23 = pppppppuStack_d8;
                            if (-1 < (long)uStack_c8) {
                              pppppppuVar23 = (ushort *******)&pppppppuStack_d8;
                            }
                            param_1 = (ushort *******)
                                      (ulong)((byte *)((long)pppppppuVar23 + 7) ==
                                             (byte *)((long)pppppppuVar16 + 7));
                            goto LAB_10b2f03fc;
                          }
                        }
                      }
                    }
                  }
                }
              }
              param_1 = (ushort *******)0x0;
            }
            else {
              param_1 = (ushort *******)0x0;
            }
LAB_10b2f03fc:
            pppppppuVar10 = pppppppuStack_d8;
            if ((long)uStack_c8 < 0) {
              __ZdlPv();
              pppppppuVar10 = pppppppuStack_d8;
            }
            pppppppuVar23 = pppppppuVar22;
            if ((int)param_1 != 0) goto LAB_10b2f017c;
            pppppppuStack_d0 = (ushort *******)0xaaaaaaaaaaaaaaaa;
            uStack_c8 = 0xaaaaaaaaaaaaaaaa;
            pppppppuStack_d8 = (ushort *******)0xaaaaaaaaaaaaaaaa;
            unaff_x27 = (ushort *******)(long)(char)*(byte *)((long)pppppppuVar11 + 0x17);
            unaff_x23 = pppppppuVar6;
            if ((long)unaff_x27 < 0) {
              unaff_x27 = (ushort *******)pppppppuVar11[1];
              if (pppppppuVar28 <= unaff_x27) {
                pppppppuVar11 = (ushort *******)*pppppppuVar11;
                goto LAB_10b2f0448;
              }
            }
            else if (pppppppuVar28 <= unaff_x27) {
LAB_10b2f0448:
              param_1 = (ushort *******)(~(ulong)pppppppuVar6 + (long)unaff_x27);
              if ((ushort *******)0x7ffffffffffffff7 < param_1) goto LAB_10b2f0678;
              if (param_1 < (ushort *******)0x17) {
                uStack_c8 = CONCAT17((char)param_1,0xaaaaaaaaaaaaaa);
                pppppppuVar23 = (ushort *******)&pppppppuStack_d8;
                if ((ushort *******)((long)unaff_x27 + -1) != pppppppuVar6) goto LAB_10b2f04ac;
              }
              else {
                pppppppuVar16 = (ushort *******)0x19;
                if (((ulong)param_1 | 7) != 0x17) {
                  pppppppuVar16 = (ushort *******)(((ulong)param_1 | 7) + 1);
                }
                pppppppuVar23 = pppppppuVar16;
                __Znwm();
                uStack_c8 = (ulong)pppppppuVar16 | 0x8000000000000000;
                pppppppuStack_d8 = pppppppuVar23;
                pppppppuStack_d0 = param_1;
LAB_10b2f04ac:
                param_3 = (ushort *******)((byte *)((long)pppppppuVar11 + (long)pppppppuVar6) + 1);
                _memmove(pppppppuVar23,param_3,param_1);
              }
              ((byte *)((long)pppppppuVar23 + (long)unaff_x27))[uVar26] = 0;
              uVar26 = uStack_c8;
              pppppppuVar28 = pppppppuStack_d8;
              pbVar19 = (byte *)((long)pppppppuVar6 + (-2 - (long)pppppppuVar22));
              pppppppuVar11 = pppppppuStack_d8;
              pppppppuVar16 = pppppppuStack_d0;
              if (-1 < (long)uStack_c8) {
                pppppppuVar11 = (ushort *******)&pppppppuStack_d8;
                pppppppuVar16 = (ushort *******)(uStack_c8 >> 0x38);
              }
              if (pppppppuVar16 == (ushort *******)0x2) {
                bVar18 = *(byte *)pppppppuVar11;
                uVar14 = bVar18 + 0x20;
                if (0x19 < bVar18 - 0x41) {
                  uVar14 = (uint)bVar18;
                }
                if (uVar14 != 0x67) {
LAB_10b2f055c:
                  bVar18 = *(byte *)pppppppuVar11;
                  uVar14 = bVar18 + 0x20;
                  if (0x19 < bVar18 - 0x41) {
                    uVar14 = (uint)bVar18;
                  }
                  if (uVar14 == 0x78) {
                    pppppppuVar23 = pppppppuStack_d8;
                    if (-1 < (long)uStack_c8) {
                      pppppppuVar23 = (ushort *******)&pppppppuStack_d8;
                    }
                    bVar18 = *(byte *)((long)pppppppuVar23 + 1);
                    uVar14 = bVar18 + 0x20;
                    if (0x19 < bVar18 - 0x41) {
                      uVar14 = (uint)bVar18;
                    }
                    if (uVar14 == 0x7a) {
                      pppppppuVar23 = pppppppuStack_d8;
                      if (-1 < (long)uStack_c8) {
                        pppppppuVar23 = (ushort *******)&pppppppuStack_d8;
                      }
                      if (((ushort *)((long)pppppppuVar23 + 2) ==
                           (ushort *)((long)pppppppuVar11 + 2)) && (pbVar19 < (byte *)0x4))
                      goto joined_r0x00010b2f066c;
                    }
                  }
                  goto LAB_10b2f05bc;
                }
                pppppppuVar23 = pppppppuStack_d8;
                if (-1 < (long)uStack_c8) {
                  pppppppuVar23 = (ushort *******)&pppppppuStack_d8;
                }
                bVar18 = *(byte *)((long)pppppppuVar23 + 1);
                uVar14 = bVar18 + 0x20;
                if (0x19 < bVar18 - 0x41) {
                  uVar14 = (uint)bVar18;
                }
                if (uVar14 != 0x7a) goto LAB_10b2f055c;
                pppppppuVar23 = pppppppuStack_d8;
                if (-1 < (long)uStack_c8) {
                  pppppppuVar23 = (ushort *******)&pppppppuStack_d8;
                }
                if (((ushort *)((long)pppppppuVar23 + 2) != (ushort *)((long)pppppppuVar11 + 2)) ||
                   ((byte *)0x3 < pbVar19)) goto LAB_10b2f055c;
              }
              else {
LAB_10b2f05bc:
                pppppppuVar23 = pppppppuVar11;
                param_3 = pppppppuVar16;
                func_0x000107c2cc7c(pppppppuVar11,pppppppuVar16,&UNK_10f7440d0,3);
                if ((((((int)pppppppuVar23 == 0) || ((byte *)0x3 < pbVar19)) &&
                     ((pppppppuVar23 = pppppppuVar11, param_3 = pppppppuVar16,
                      func_0x000107c2cc7c(pppppppuVar11,pppppppuVar16,"z",1),
                      (int)pppppppuVar23 == 0 || ((byte *)0x3 < pbVar19)))) &&
                    ((pppppppuVar23 = pppppppuVar11, param_3 = pppppppuVar16,
                     func_0x000107c2cc7c(pppppppuVar11,pppppppuVar16,&UNK_10f7440d4,2),
                     (int)pppppppuVar23 == 0 || ((byte *)0x3 < pbVar19)))) &&
                   (func_0x000107c2cc7c(pppppppuVar11,pppppppuVar16,&UNK_10f7440d7,4),
                   param_3 = pppppppuVar16,
                   ((uint)pppppppuVar11 & (uint)(pbVar19 < (byte *)0x4)) == 0)) {
                  pppppppuVar22 = pppppppuVar6;
                }
              }
joined_r0x00010b2f066c:
              pppppppuVar23 = pppppppuVar22;
              if ((long)uVar26 < 0) {
                __ZdlPv(pppppppuVar28);
              }
              goto LAB_10b2f017c;
            }
            goto LAB_10b2f0674;
          }
        }
LAB_10b2f0678:
        FUN_10b2ecf74();
        pcStack_e8 = FUN_10b2f067c;
        pppppppuVar23 = param_3;
        pppppppuVar11 = param_3;
        uStack_120 = uVar26;
        pppppppuStack_118 = unaff_x23;
        pppppppuStack_110 = pppppppuVar22;
        pppppppuStack_108 = unaff_x21;
        pppppppuStack_100 = unaff_x20;
        pppppppuStack_f8 = param_1;
        pppppppuStack_f0 = &ppppppuStack_70;
        FUN_10b2eff1c(&pppppppuStack_138,param_3);
        pppppppuVar16 = pppppppuStack_130;
        if ((long)uStack_128 < 0) {
          pppppppuVar23 = pppppppuStack_138;
          __ZdlPv(pppppppuStack_138);
          if (pppppppuVar16 != (ushort *******)0x0) goto LAB_10b2f06c4;
LAB_10b2f0710:
          if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
            ppppppuVar17 = *param_3;
            pppppppuVar10[1] = param_3[1];
            *pppppppuVar10 = ppppppuVar17;
            pppppppuVar10[2] = param_3[2];
            auVar38._8_8_ = pppppppuVar11;
            auVar38._0_8_ = pppppppuVar23;
            return auVar38;
          }
          pppppppuVar9 = pppppppuVar10;
          pppppppuVar6 = (ushort *******)*param_3;
          pppppppuVar28 = (ushort *******)param_3[1];
          pppppppuVar10 = pppppppuStack_f8;
          pppppppuVar16 = pppppppuStack_100;
          pppppppuVar11 = pppppppuStack_108;
          pppppppuVar23 = pppppppuStack_110;
          pppppppuVar5 = pppppppuStack_f0;
          pcVar31 = pcStack_e8;
        }
        else {
          if (uStack_128._7_1_ == '\0') goto LAB_10b2f0710;
LAB_10b2f06c4:
          pppppppuVar23 = param_3;
          FUN_10b2f005c();
          if (pppppppuVar23 == (ushort *******)0xffffffffffffffff) goto LAB_10b2f0710;
          pppppppuVar6 = (ushort *******)(long)(char)*(byte *)((long)param_3 + 0x17);
          pppppppuVar13 = param_3;
          if ((long)pppppppuVar6 < 0) {
            pppppppuVar13 = (ushort *******)*param_3;
            pppppppuVar6 = (ushort *******)param_3[1];
          }
          pppppppuVar21 = (ushort *******)0x7ffffffffffffff7;
          if (pppppppuVar23 <= pppppppuVar6) {
            pppppppuVar6 = pppppppuVar23;
          }
          if (pppppppuVar6 < (ushort *******)0x7ffffffffffffff8) {
            if (pppppppuVar6 < (ushort *******)0x17) {
              uStack_128 = CONCAT17((char)pppppppuVar6,(undefined7)uStack_128);
              pppppppuVar22 = (ushort *******)&pppppppuStack_138;
              if (pppppppuVar6 != (ushort *******)0x0) goto LAB_10b2f0788;
            }
            else {
              unaff_x23 = (ushort *******)0x19;
              if (((ulong)pppppppuVar6 | 7) != 0x17) {
                unaff_x23 = (ushort *******)(((ulong)pppppppuVar6 | 7) + 1);
              }
              pppppppuVar22 = unaff_x23;
              __Znwm();
              uStack_128 = (ulong)unaff_x23 | 0x8000000000000000;
              pppppppuStack_138 = pppppppuVar22;
              pppppppuStack_130 = pppppppuVar6;
LAB_10b2f0788:
              pppppppuVar23 = pppppppuVar22;
              param_4 = pppppppuVar6;
              _memmove();
              pppppppuVar11 = pppppppuVar13;
            }
            *(byte *)((long)pppppppuVar22 + (long)pppppppuVar6) = 0;
            pppppppuVar6 = pppppppuStack_138;
            if (-1 < (long)uStack_128._7_1_) {
              pppppppuVar6 = (ushort *******)&pppppppuStack_138;
            }
            pppppppuVar13 = pppppppuStack_130;
            if (-1 < (long)uStack_128) {
              pppppppuVar13 = (ushort *******)(long)uStack_128._7_1_;
            }
            if ((ushort *******)0x7ffffffffffffff7 < pppppppuVar13) goto LAB_10b2f08c8;
            if ((ushort *******)0x16 < pppppppuVar13) {
              unaff_x23 = (ushort *******)0x19;
              if (((ulong)pppppppuVar13 | 7) != 0x17) {
                unaff_x23 = (ushort *******)(((ulong)pppppppuVar13 | 7) + 1);
              }
              pppppppuVar22 = unaff_x23;
              __Znwm();
              pppppppuVar10[1] = (ushort ******)pppppppuVar13;
              pppppppuVar10[2] = (ushort ******)((ulong)unaff_x23 | 0x8000000000000000);
              *pppppppuVar10 = (ushort ******)pppppppuVar22;
LAB_10b2f0824:
              _memmove(pppppppuVar22,pppppppuVar6,pppppppuVar13);
              *(byte *)((long)pppppppuVar22 + (long)pppppppuVar13) = 0;
              pppppppuVar6 = (ushort *******)(long)(char)*(byte *)((long)pppppppuVar10 + 0x17);
              if (-1 < (long)pppppppuVar6) goto LAB_10b2f07e0;
LAB_10b2f0840:
              pppppppuVar13 = (ushort *******)*pppppppuVar10;
              param_4 = (ushort *******)pppppppuVar10[1];
              pppppppuVar11 = (ushort *******)0x0;
              pppppppuVar23 = pppppppuVar13;
              _memchr();
              if (pppppppuVar23 != (ushort *******)0x0) goto LAB_10b2f0854;
LAB_10b2f088c:
              pppppppuVar16 = pppppppuStack_138;
              if (-1 < (long)uStack_128) {
                auVar39._8_8_ = pppppppuVar11;
                auVar39._0_8_ = pppppppuVar23;
                return auVar39;
              }
              goto code_r0x00010bdbd7ac;
            }
            *(byte *)((long)pppppppuVar10 + 0x17) = (byte)pppppppuVar13;
            pppppppuVar22 = pppppppuVar10;
            if (pppppppuVar13 != (ushort *******)0x0) goto LAB_10b2f0824;
            *(byte *)pppppppuVar10 = 0;
            pppppppuVar6 = (ushort *******)(long)(char)*(byte *)((long)pppppppuVar10 + 0x17);
            if ((long)pppppppuVar6 < 0) goto LAB_10b2f0840;
LAB_10b2f07e0:
            pppppppuVar11 = (ushort *******)0x0;
            pppppppuVar23 = pppppppuVar10;
            param_4 = pppppppuVar6;
            _memchr();
            pppppppuVar13 = pppppppuVar10;
            if (pppppppuVar23 == (ushort *******)0x0) goto LAB_10b2f088c;
LAB_10b2f0854:
            pppppppuVar16 = (ushort *******)((long)pppppppuVar23 - (long)pppppppuVar13);
            if (pppppppuVar16 == (ushort *******)0xffffffffffffffff) goto LAB_10b2f088c;
            if ((int)pppppppuVar6 < 0) {
              if (pppppppuVar16 <= pppppppuVar10[1]) {
                pppppppuVar10[1] = (ushort ******)pppppppuVar16;
                pppppppuVar10 = (ushort *******)*pppppppuVar10;
                goto LAB_10b2f0888;
              }
            }
            else if (pppppppuVar16 <= pppppppuVar6) {
              *(byte *)((long)pppppppuVar10 + 0x17) = (byte)pppppppuVar16;
LAB_10b2f0888:
              *(byte *)((long)pppppppuVar10 + (long)pppppppuVar16) = 0;
              goto LAB_10b2f088c;
            }
          }
          else {
LAB_10b2f08c8:
            FUN_10b2ecf74();
          }
          func_0x000104c03f14();
          pppppppuVar3 = (ushort *******)&pppppppuStack_1c0;
          pppppppuVar8 = (ushort *******)&pppppppuStack_1c0;
          pppppppuVar25 = (ushort *******)&pppppppuStack_1c0;
          pppppppuVar9 = (ushort *******)&pppppppuStack_1c0;
          uStack_180 = 0x7ffffffffffffff7;
          pcStack_148 = FUN_10b2f08d0;
          pppppppuVar5 = &pppppppuStack_150;
          pppppppuVar7 = pppppppuVar23;
          pppppppuVar12 = pppppppuVar11;
          pppppppuVar16 = param_4;
          pppppppuStack_1a0 = pppppppuVar24;
          pppppppuStack_198 = unaff_x27;
          pppppppuStack_190 = unaff_x26;
          pppppppuStack_188 = pppppppuVar28;
          pppppppuStack_178 = unaff_x23;
          pppppppuStack_170 = pppppppuVar22;
          pppppppuStack_168 = pppppppuVar6;
          pppppppuStack_160 = pppppppuVar13;
          pppppppuStack_158 = pppppppuVar10;
          pppppppuStack_150 = &pppppppuStack_f0;
          func_0x000107c2cab8(&pppppppuStack_1c0);
          pppppppuVar6 = pppppppuStack_1b8;
          if (-1 < (char)uStack_1b0._7_1_) {
            pppppppuVar6 = (ushort *******)(ulong)uStack_1b0._7_1_;
          }
          if (pppppppuVar6 == (ushort *******)0x0) {
            if ((char)uStack_1b0._7_1_ < '\0') {
              __ZdlPv(pppppppuStack_1c0);
              pppppppuVar7 = pppppppuStack_1c0;
            }
LAB_10b2f0ac4:
            *extraout_x8 = (ushort ******)0x0;
            extraout_x8[1] = (ushort ******)0x0;
            extraout_x8[2] = (ushort ******)0x0;
            goto LAB_10b2f0acc;
          }
          if ((char)uStack_1b0._7_1_ < '\0') {
            if (pppppppuStack_1b8 == (ushort *******)0x1) {
              bVar18 = *(byte *)pppppppuStack_1c0;
              unaff_x23 = (ushort *******)(ulong)bVar18;
              __ZdlPv();
              pppppppuVar7 = pppppppuStack_1c0;
              pppppppuStack_1c0._0_1_ = bVar18;
              goto joined_r0x00010b2f0ac0;
            }
            if (pppppppuStack_1b8 == (ushort *******)0x2) {
              uVar2 = *(ushort *)pppppppuStack_1c0;
              unaff_x23 = (ushort *******)(ulong)uVar2;
              pppppppuVar21 = (ushort *******)0x2e2e;
              __ZdlPv();
              pppppppuVar7 = pppppppuStack_1c0;
              pppppppuStack_1c0._0_2_ = uVar2;
              goto joined_r0x00010b2f09d4;
            }
            __ZdlPv();
            pppppppuVar7 = pppppppuStack_1c0;
            if (param_4 != (ushort *******)0x0) goto LAB_10b2f0950;
LAB_10b2f0af4:
            if ((char)*(byte *)((long)pppppppuVar23 + 0x17) < '\0') {
              pppppppuVar12 = (ushort *******)*pppppppuVar23;
              pppppppuVar7 = extraout_x8;
              func_0x000107c3192c(extraout_x8,pppppppuVar12,pppppppuVar23[1]);
            }
            else {
              ppppppuVar17 = *pppppppuVar23;
              extraout_x8[1] = pppppppuVar23[1];
              *extraout_x8 = ppppppuVar17;
              extraout_x8[2] = pppppppuVar23[2];
            }
LAB_10b2f0acc:
            auVar40._8_8_ = pppppppuVar12;
            auVar40._0_8_ = pppppppuVar7;
            return auVar40;
          }
          if (uStack_1b0._7_1_ == 1) {
joined_r0x00010b2f0ac0:
            if ((byte)pppppppuStack_1c0 == 0x2e) goto LAB_10b2f0ac4;
          }
          else if (uStack_1b0._7_1_ == 2) {
joined_r0x00010b2f09d4:
            if ((ushort)pppppppuStack_1c0 == 0x2e2e) goto LAB_10b2f0ac4;
          }
          if (param_4 == (ushort *******)0x0) goto LAB_10b2f0af4;
LAB_10b2f0950:
          if ((param_4 == (ushort *******)0x1) && (*(byte *)pppppppuVar11 == 0x2e))
          goto LAB_10b2f0af4;
          pppppppuStack_1b8 = (ushort *******)0xaaaaaaaaaaaaaaaa;
          uStack_1b0 = (ushort ******)0xaaaaaaaaaaaaaaaa;
          pppppppuStack_1c0 = (ushort *******)0xaaaaaaaaaaaaaaaa;
          if (-1 < (char)*(byte *)((long)pppppppuVar23 + 0x17)) {
            pppppppuStack_1b8 = (ushort *******)pppppppuVar23[1];
            pppppppuStack_1c0 = (ushort *******)*pppppppuVar23;
            ppppppuVar17 = pppppppuVar23[2];
            uStack_1b0 = ppppppuVar17;
            ppppppuVar17 = uStack_1b0;
            if (*(byte *)pppppppuVar11 != 0x2e) {
              uStack_1b0._7_1_ = (byte)((ulong)ppppppuVar17 >> 0x38);
              pppppppuVar6 = (ushort *******)pppppppuVar23[1];
              pppppppuVar23 = (ushort *******)*pppppppuVar23;
              if (-1 < (long)ppppppuVar17) {
                pppppppuVar6 = (ushort *******)(ulong)uStack_1b0._7_1_;
                pppppppuVar23 = (ushort *******)&pppppppuStack_1c0;
              }
              if (((byte *)((long)pppppppuVar23 + (long)pppppppuVar6))[-1] != 0x2e) {
                pppppppuVar23 = (ushort *******)(((ulong)ppppppuVar17 & 0x7fffffffffffffff) - 1);
                if (-1 < (long)ppppppuVar17) {
                  pppppppuVar23 = (ushort *******)0x16;
                }
                bVar18 = uStack_1b0._7_1_;
                uStack_1b0 = ppppppuVar17;
                if (pppppppuVar23 == pppppppuVar6) {
                  pppppppuVar16 = (ushort *******)0x1;
                  pppppppuVar12 = pppppppuVar6;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                            ();
                  pppppppuVar7 = pppppppuVar8;
                  bVar18 = uStack_1b0._7_1_;
                  pppppppuStack_1b8 = pppppppuVar6;
                }
                pppppppuVar23 = pppppppuStack_1c0;
                if (-1 < (char)bVar18) {
                  pppppppuVar23 = (ushort *******)&pppppppuStack_1c0;
                }
                *(byte *)((long)pppppppuVar23 + (long)pppppppuVar6) = 0x2e;
                pppppppuVar6 = (ushort *******)((long)pppppppuVar6 + 1);
                pppppppuVar10 = pppppppuVar6;
                if (-1 < (long)uStack_1b0) {
                  uStack_1b0 = (ushort ******)
                               (CONCAT17((char)pppppppuVar6,(undefined7)uStack_1b0) &
                               0x7fffffffffffffff);
                  pppppppuVar10 = pppppppuStack_1b8;
                }
                pppppppuStack_1b8 = pppppppuVar10;
                *(byte *)((long)pppppppuVar23 + (long)pppppppuVar6) = 0;
                ppppppuVar17 = uStack_1b0;
              }
            }
            uStack_1b0 = ppppppuVar17;
            pppppppuVar10 = pppppppuStack_1b8;
            pppppppuVar6 = pppppppuStack_1c0;
            pppppppuVar23 = (ushort *******)(long)(char)uStack_1b0._7_1_;
            if ((long)pppppppuVar23 < 0) {
              uVar26 = ((ulong)uStack_1b0 & 0x7fffffffffffffff) - 1;
              pppppppuVar23 = pppppppuStack_1b8;
              pppppppuVar25 = pppppppuStack_1c0;
              if (param_4 <= (ushort *******)(uVar26 - (long)pppppppuStack_1b8)) goto LAB_10b2f0c44;
              pbVar19 = (byte *)(((long)param_4 - uVar26) + (long)pppppppuStack_1b8);
              if (pbVar19 <= (byte *)(0x7ffffffffffffff7 - ((ulong)uStack_1b0 & 0x7fffffffffffffff))
                 ) {
                if (uVar26 < 0x3ffffffffffffff3) goto LAB_10b2f0bac;
                unaff_x27 = (ushort *******)0x0;
                pppppppuVar28 = (ushort *******)0x7ffffffffffffff7;
                pppppppuVar9 = pppppppuVar28;
                __Znwm();
                pppppppuVar25 = pppppppuVar6;
                pppppppuVar23 = pppppppuVar10;
                goto joined_r0x00010b2f0d78;
              }
LAB_10b2f0d84:
              func_0x000104bd47d4();
            }
            else {
              if ((ushort *******)(0x16 - (long)pppppppuVar23) < param_4) {
                pbVar19 = (byte *)((long)param_4 + (long)pppppppuVar23) + -0x16;
                if ((byte *)0x7fffffffffffffe0 < pbVar19) goto LAB_10b2f0d84;
                uVar26 = 0x16;
                pppppppuVar25 = (ushort *******)&pppppppuStack_1c0;
LAB_10b2f0bac:
                pbVar1 = pbVar19 + uVar26;
                if (pbVar19 + uVar26 <= (byte *)(uVar26 * 2)) {
                  pbVar1 = (byte *)(uVar26 * 2);
                }
                pppppppuVar16 = (ushort *******)0x19;
                if (((ulong)pbVar1 | 7) != 0x17) {
                  pppppppuVar16 = (ushort *******)(((ulong)pbVar1 | 7) + 1);
                }
                pppppppuVar28 = (ushort *******)0x17;
                if ((byte *)0x16 < pbVar1) {
                  pppppppuVar28 = pppppppuVar16;
                }
                unaff_x27 = (ushort *******)(ulong)(uVar26 == 0x16);
                pppppppuVar9 = pppppppuVar28;
                __Znwm();
joined_r0x00010b2f0d78:
                if (pppppppuVar23 != (ushort *******)0x0) {
                  _memmove(pppppppuVar9,pppppppuVar25,pppppppuVar23);
                }
                pppppppuVar7 = (ushort *******)((long)pppppppuVar9 + (long)pppppppuVar23);
                pppppppuVar16 = param_4;
                _memmove();
                if ((int)unaff_x27 == 0) {
                  pppppppuVar7 = pppppppuVar25;
                  __ZdlPv();
                }
                uStack_1b0 = (ushort ******)((ulong)pppppppuVar28 | 0x8000000000000000);
                pppppppuStack_1b8 = (ushort *******)((long)pppppppuVar23 + (long)param_4);
                *(byte *)((long)pppppppuVar9 + (long)pppppppuStack_1b8) = 0;
                pppppppuVar12 = pppppppuVar11;
                bVar18 = (byte)((ulong)uStack_1b0 >> 0x38);
                pppppppuStack_1c0 = pppppppuVar9;
              }
              else {
LAB_10b2f0c44:
                pppppppuVar7 = (ushort *******)((long)pppppppuVar25 + (long)pppppppuVar23);
                pppppppuVar16 = param_4;
                _memmove();
                param_4 = (ushort *******)((long)pppppppuVar23 + (long)param_4);
                pppppppuVar6 = param_4;
                if (-1 < (long)uStack_1b0) {
                  uStack_1b0 = (ushort ******)
                               (CONCAT17((char)param_4,(undefined7)uStack_1b0) & 0x7fffffffffffffff)
                  ;
                  pppppppuVar6 = pppppppuStack_1b8;
                }
                pppppppuStack_1b8 = pppppppuVar6;
                *(byte *)((long)pppppppuVar25 + (long)param_4) = 0;
                pppppppuVar12 = pppppppuVar11;
                bVar18 = uStack_1b0._7_1_;
              }
              pppppppuVar21 = pppppppuStack_1c0;
              pppppppuVar11 = pppppppuStack_1c0;
              if (-1 < (char)bVar18) {
                pppppppuVar11 = (ushort *******)&pppppppuStack_1c0;
              }
              param_4 = pppppppuStack_1b8;
              if (-1 < (char)bVar18) {
                param_4 = (ushort *******)(ulong)bVar18;
              }
              if ((ushort *******)0x7ffffffffffffff7 < param_4) {
                FUN_10b2ecf74();
                unaff_x23 = pppppppuVar25;
                goto LAB_10b2f0d84;
              }
              if (param_4 < (ushort *******)0x17) {
                *(byte *)((long)extraout_x8 + 0x17) = (byte)param_4;
                pppppppuVar23 = extraout_x8;
                if (param_4 != (ushort *******)0x0) goto LAB_10b2f0cdc;
              }
              else {
                pppppppuVar16 = (ushort *******)0x19;
                if (((ulong)param_4 | 7) != 0x17) {
                  pppppppuVar16 = (ushort *******)(((ulong)param_4 | 7) + 1);
                }
                pppppppuVar23 = pppppppuVar16;
                __Znwm();
                extraout_x8[1] = (ushort ******)param_4;
                extraout_x8[2] = (ushort ******)((ulong)pppppppuVar16 | 0x8000000000000000);
                *extraout_x8 = (ushort ******)pppppppuVar23;
LAB_10b2f0cdc:
                _memmove(pppppppuVar23,pppppppuVar11,param_4);
              }
              *(byte *)((long)pppppppuVar23 + (long)param_4) = 0;
              bVar18 = *(byte *)((long)extraout_x8 + 0x17);
              pppppppuVar23 = (ushort *******)(ulong)bVar18;
              pppppppuVar11 = (ushort *******)*extraout_x8;
              unaff_x23 = (ushort *******)extraout_x8[1];
              pppppppuVar16 = unaff_x23;
              param_4 = pppppppuVar11;
              if (-1 < (char)bVar18) {
                pppppppuVar16 = pppppppuVar23;
                param_4 = extraout_x8;
              }
              pppppppuVar12 = (ushort *******)0x0;
              pppppppuVar7 = param_4;
              _memchr();
              if ((pppppppuVar7 == (ushort *******)0x0) ||
                 (pppppppuVar6 = (ushort *******)((long)pppppppuVar7 - (long)param_4),
                 pppppppuVar6 == (ushort *******)0xffffffffffffffff)) {
LAB_10b2f0d4c:
                if ((long)uStack_1b0 < 0) {
                  __ZdlPv(pppppppuStack_1c0);
                  pppppppuVar7 = pppppppuStack_1c0;
                }
                goto LAB_10b2f0acc;
              }
              if ((char)bVar18 < '\0') {
                if (pppppppuVar6 <= unaff_x23) {
                  extraout_x8[1] = (ushort ******)pppppppuVar6;
                  goto LAB_10b2f0d48;
                }
              }
              else if (pppppppuVar6 <= pppppppuVar23) {
                *(byte *)((long)extraout_x8 + 0x17) = (byte)pppppppuVar6;
                pppppppuVar11 = extraout_x8;
LAB_10b2f0d48:
                *(byte *)((long)pppppppuVar11 + (long)pppppppuVar6) = 0;
                goto LAB_10b2f0d4c;
              }
            }
            func_0x000104c03f14();
            pppppppuVar3 = (ushort *******)&pppppppuStack_250;
            pppppppuVar9 = (ushort *******)&pppppppuStack_250;
            uStack_210 = 0x7ffffffffffffff7;
            uStack_1c8 = 0x10b2f0d8c;
            pppppppuVar10 = pppppppuVar7;
            pppppppuVar13 = pppppppuVar12;
            pppppppuStack_220 = pppppppuVar24;
            pppppppuStack_218 = unaff_x27;
            pppppppuStack_208 = pppppppuVar28;
            pppppppuStack_200 = pppppppuVar21;
            pppppppuStack_1f8 = unaff_x23;
            pppppppuStack_1f0 = pppppppuVar23;
            pppppppuStack_1e8 = pppppppuVar11;
            pppppppuStack_1e0 = param_4;
            pppppppuStack_1d0 = pppppppuVar5;
            func_0x000107c2cab8(&pppppppuStack_238);
            pppppppuVar11 = pppppppuStack_230;
            if (-1 < (char)uStack_228._7_1_) {
              pppppppuVar11 = (ushort *******)(ulong)uStack_228._7_1_;
            }
            if (pppppppuVar11 == (ushort *******)0x0) {
              if ((char)uStack_228._7_1_ < '\0') {
                __ZdlPv(pppppppuStack_238);
                pppppppuVar10 = pppppppuStack_238;
              }
LAB_10b2f0e70:
              *extraout_x8_00 = (ushort ******)0x0;
              extraout_x8_00[1] = (ushort ******)0x0;
              extraout_x8_00[2] = (ushort ******)0x0;
              goto LAB_10b2f1278;
            }
            if ((char)uStack_228._7_1_ < '\0') {
              if (pppppppuStack_230 == (ushort *******)0x1) {
                bVar18 = *(byte *)pppppppuStack_238;
                unaff_x23 = (ushort *******)(ulong)bVar18;
                __ZdlPv();
                pppppppuVar10 = pppppppuStack_238;
joined_r0x00010b2f0e58:
                if (bVar18 == 0x2e) goto LAB_10b2f0e70;
              }
              else if (pppppppuStack_230 == (ushort *******)0x2) {
                uVar2 = *(ushort *)pppppppuStack_238;
                unaff_x23 = (ushort *******)(ulong)uVar2;
                pppppppuVar21 = (ushort *******)0x2e2e;
                __ZdlPv();
                pppppppuVar10 = pppppppuStack_238;
joined_r0x00010b2f0e04:
                if (uVar2 == 0x2e2e) goto LAB_10b2f0e70;
              }
              else {
                __ZdlPv();
              }
            }
            else {
              if (uStack_228._7_1_ == 1) {
                bVar18 = (byte)pppppppuStack_238;
                goto joined_r0x00010b2f0e58;
              }
              if (uStack_228._7_1_ == 2) {
                uVar2 = (ushort)pppppppuStack_238;
                goto joined_r0x00010b2f0e04;
              }
            }
            pppppppuStack_230 = (ushort *******)0xaaaaaaaaaaaaaaaa;
            uStack_228 = (ushort ******)0xaaaaaaaaaaaaaaaa;
            pppppppuStack_238 = (ushort *******)0xaaaaaaaaaaaaaaaa;
            pppppppuVar10 = (ushort *******)&pppppppuStack_238;
            pppppppuVar13 = pppppppuVar7;
            FUN_10b2f067c();
            pppppppuVar23 = pppppppuStack_230;
            pppppppuVar11 = pppppppuStack_238;
            if ((pppppppuVar16 == (ushort *******)0x0) ||
               ((pppppppuVar16 == (ushort *******)0x1 && (*(byte *)pppppppuVar12 == 0x2e)))) {
              extraout_x8_00[1] = (ushort ******)pppppppuStack_230;
              *extraout_x8_00 = (ushort ******)pppppppuStack_238;
              extraout_x8_00[2] = uStack_228;
              goto LAB_10b2f1278;
            }
            uStack_248 = 0xaaaaaaaaaaaa;
            uStack_242 = 0xaaaa;
            uStack_240 = 0xaaaaaaaaaaaa;
            uStack_23a = 0xaa;
            bStack_239 = 0xaa;
            pppppppuStack_250 = (ushort *******)0xaaaaaaaaaaaaaaaa;
            if ((long)uStack_228 < 0) {
              pcVar31 = (code *)0x10b2f0f44;
              pppppppuVar6 = pppppppuStack_238;
              pppppppuVar28 = pppppppuStack_230;
              pppppppuVar10 = extraout_x8_00;
              pppppppuVar11 = pppppppuVar12;
              pppppppuVar23 = pppppppuVar7;
              pppppppuVar5 = &pppppppuStack_1d0;
              goto code_r0x000100033dac;
            }
            uStack_248 = SUB86(pppppppuStack_230,0);
            uStack_242 = (undefined2)((ulong)pppppppuStack_230 >> 0x30);
            pppppppuStack_250 = pppppppuStack_238;
            uStack_240 = SUB86(uStack_228,0);
            uStack_23a = (undefined1)((ulong)uStack_228 >> 0x30);
            bStack_239 = uStack_228._7_1_;
            if (*(byte *)pppppppuVar12 == 0x2e) {
joined_r0x00010b2f0f00:
              pppppppuVar24 = (ushort *******)(long)(char)bStack_239;
              if ((long)pppppppuVar24 < 0) {
LAB_10b2f1090:
                pppppppuVar11 = pppppppuStack_250;
                pppppppuVar24 = (ushort *******)CONCAT26(uStack_242,uStack_248);
                uVar20 = CONCAT17(bStack_239,CONCAT16(uStack_23a,uStack_240)) & 0x7fffffffffffffff;
                uVar26 = uVar20 - 1;
                if ((ushort *******)(uVar26 - (long)pppppppuVar24) < pppppppuVar16) {
                  pbVar19 = (byte *)(((long)pppppppuVar16 - uVar26) + (long)pppppppuVar24);
                  if ((byte *)(0x7ffffffffffffff7 - uVar20) < pbVar19) goto LAB_10b2f12d8;
                  if (uVar26 < 0x3ffffffffffffff3) goto LAB_10b2f10d0;
                  bVar4 = false;
                  pppppppuVar28 = (ushort *******)0x7ffffffffffffff7;
                  pppppppuVar23 = pppppppuVar28;
                  __Znwm();
joined_r0x00010b2f1110:
                  if (pppppppuVar24 != (ushort *******)0x0) {
                    _memmove(pppppppuVar23,pppppppuVar11,pppppppuVar24);
                  }
                  pppppppuVar10 = (ushort *******)((long)pppppppuVar23 + (long)pppppppuVar24);
                  _memmove(pppppppuVar10,pppppppuVar12,pppppppuVar16);
                  if (!bVar4) {
                    pppppppuVar10 = pppppppuVar11;
                    __ZdlPv();
                  }
                  bStack_239 = (byte)((ulong)pppppppuVar28 >> 0x38) | 0x80;
                  pppppppuVar16 = (ushort *******)((long)pppppppuVar24 + (long)pppppppuVar16);
                  uStack_248 = SUB86(pppppppuVar16,0);
                  uStack_242 = (undefined2)((ulong)pppppppuVar16 >> 0x30);
                  uStack_240 = SUB86(pppppppuVar28,0);
                  uStack_23a = (undefined1)((ulong)pppppppuVar28 >> 0x30);
                  *(byte *)((long)pppppppuVar23 + (long)pppppppuVar16) = 0;
                  pppppppuVar13 = pppppppuVar12;
                  pppppppuStack_250 = pppppppuVar23;
                }
                else {
LAB_10b2f1160:
                  pppppppuVar10 = (ushort *******)((long)pppppppuVar11 + (long)pppppppuVar24);
                  _memmove(pppppppuVar10,pppppppuVar12,pppppppuVar16);
                  pbVar19 = (byte *)((long)pppppppuVar24 + (long)pppppppuVar16);
                  if ((char)bStack_239 < '\0') {
                    uStack_248 = SUB86(pbVar19,0);
                    uStack_242 = (undefined2)((ulong)pbVar19 >> 0x30);
                  }
                  else {
                    bStack_239 = (byte)pbVar19 & 0x7f;
                  }
                  *(byte *)((long)pppppppuVar11 + (long)pbVar19) = 0;
                  pppppppuVar16 = (ushort *******)CONCAT26(uStack_242,uStack_248);
                  pppppppuVar13 = pppppppuVar12;
                }
                pppppppuVar21 = pppppppuStack_250;
                pppppppuVar12 = pppppppuStack_250;
                if (-1 < (char)bStack_239) {
                  pppppppuVar12 = (ushort *******)&pppppppuStack_250;
                }
                if (-1 < (char)bStack_239) {
                  pppppppuVar16 = (ushort *******)(ulong)bStack_239;
                }
                if ((ushort *******)0x7ffffffffffffff7 < pppppppuVar16) {
                  FUN_10b2ecf74();
                  unaff_x23 = pppppppuVar11;
                  goto LAB_10b2f12d8;
                }
                if (pppppppuVar16 < (ushort *******)0x17) {
                  *(byte *)((long)extraout_x8_00 + 0x17) = (byte)pppppppuVar16;
                  pppppppuVar23 = extraout_x8_00;
                  if (pppppppuVar16 != (ushort *******)0x0) goto LAB_10b2f11f8;
                }
                else {
                  pppppppuVar11 = (ushort *******)0x19;
                  if (((ulong)pppppppuVar16 | 7) != 0x17) {
                    pppppppuVar11 = (ushort *******)(((ulong)pppppppuVar16 | 7) + 1);
                  }
                  pppppppuVar23 = pppppppuVar11;
                  __Znwm();
                  extraout_x8_00[1] = (ushort ******)pppppppuVar16;
                  extraout_x8_00[2] = (ushort ******)((ulong)pppppppuVar11 | 0x8000000000000000);
                  *extraout_x8_00 = (ushort ******)pppppppuVar23;
LAB_10b2f11f8:
                  _memmove(pppppppuVar23,pppppppuVar12,pppppppuVar16);
                }
                *(byte *)((long)pppppppuVar23 + (long)pppppppuVar16) = 0;
                bVar18 = *(byte *)((long)extraout_x8_00 + 0x17);
                pppppppuVar24 = (ushort *******)(ulong)bVar18;
                pppppppuVar12 = (ushort *******)*extraout_x8_00;
                unaff_x23 = (ushort *******)extraout_x8_00[1];
                pppppppuVar11 = unaff_x23;
                pppppppuVar16 = pppppppuVar12;
                if (-1 < (char)bVar18) {
                  pppppppuVar11 = pppppppuVar24;
                  pppppppuVar16 = extraout_x8_00;
                }
                pppppppuVar13 = (ushort *******)0x0;
                pppppppuVar10 = pppppppuVar16;
                _memchr(pppppppuVar16,0,pppppppuVar11);
                if ((pppppppuVar10 == (ushort *******)0x0) ||
                   (pppppppuVar11 = (ushort *******)((long)pppppppuVar10 - (long)pppppppuVar16),
                   pppppppuVar11 == (ushort *******)0xffffffffffffffff)) {
LAB_10b2f1268:
                  if ((char)bStack_239 < '\0') {
                    pppppppuVar10 = pppppppuStack_250;
                    __ZdlPv(pppppppuStack_250);
                  }
                  if ((long)uStack_228 < 0) {
                    __ZdlPv(pppppppuStack_238);
                    pppppppuVar10 = pppppppuStack_238;
                  }
LAB_10b2f1278:
                  auVar41._8_8_ = pppppppuVar13;
                  auVar41._0_8_ = pppppppuVar10;
                  return auVar41;
                }
                if ((char)bVar18 < '\0') {
                  if (pppppppuVar11 <= unaff_x23) {
                    extraout_x8_00[1] = (ushort ******)pppppppuVar11;
                    goto LAB_10b2f1264;
                  }
                }
                else if (pppppppuVar11 <= pppppppuVar24) {
                  *(byte *)((long)extraout_x8_00 + 0x17) = (byte)pppppppuVar11;
                  pppppppuVar12 = extraout_x8_00;
LAB_10b2f1264:
                  *(byte *)((long)pppppppuVar12 + (long)pppppppuVar11) = 0;
                  goto LAB_10b2f1268;
                }
              }
              else {
LAB_10b2f0f04:
                pppppppuVar11 = (ushort *******)&pppppppuStack_250;
                if (pppppppuVar16 <= (ushort *******)(0x16 - (long)pppppppuVar24))
                goto LAB_10b2f1160;
                pbVar19 = (byte *)((long)pppppppuVar16 + (long)pppppppuVar24) + -0x16;
                if (pbVar19 < (byte *)0x7fffffffffffffe1) {
                  uVar26 = 0x16;
                  pppppppuVar11 = (ushort *******)&pppppppuStack_250;
LAB_10b2f10d0:
                  pbVar1 = pbVar19 + uVar26;
                  if (pbVar19 + uVar26 <= (byte *)(uVar26 * 2)) {
                    pbVar1 = (byte *)(uVar26 * 2);
                  }
                  pppppppuVar23 = (ushort *******)0x19;
                  if (((ulong)pbVar1 | 7) != 0x17) {
                    pppppppuVar23 = (ushort *******)(((ulong)pbVar1 | 7) + 1);
                  }
                  pppppppuVar28 = (ushort *******)0x17;
                  if ((byte *)0x16 < pbVar1) {
                    pppppppuVar28 = pppppppuVar23;
                  }
                  bVar4 = uVar26 == 0x16;
                  pppppppuVar23 = pppppppuVar28;
                  __Znwm();
                  goto joined_r0x00010b2f1110;
                }
LAB_10b2f12d8:
                func_0x000104bd47d4();
              }
              func_0x000104c03f14();
              pppppppuStack_298 = pppppppuVar28;
            }
            else {
              if (-1 < (long)(char)uStack_228._7_1_) {
                pppppppuVar10 = (ushort *******)&pppppppuStack_250;
                pppppppuVar28 = (ushort *******)(long)(char)uStack_228._7_1_;
                if (uStack_228._7_1_ == 0x16) {
                  unaff_x23 = (ushort *******)0x30;
                  pppppppuVar10 = (ushort *******)0x30;
                  __Znwm();
                  pppppppuVar10[1] = (ushort ******)CONCAT26(uStack_242,uStack_248);
                  *pppppppuVar10 = (ushort ******)pppppppuStack_250;
                  *(ulong *)((long)pppppppuVar10 + 0xe) = CONCAT62(uStack_240,uStack_242);
                  pppppppuVar23 = (ushort *******)0x16;
                  pppppppuVar24 = (ushort *******)0x16;
                  pppppppuVar11 = pppppppuVar21;
LAB_10b2f1048:
                  bStack_239 = (byte)((ulong)unaff_x23 >> 0x38) | 0x80;
                  uStack_248 = SUB86(pppppppuVar24,0);
                  uStack_242 = (undefined2)((ulong)pppppppuVar24 >> 0x30);
                  uStack_240 = SUB86(unaff_x23,0);
                  uStack_23a = (undefined1)((ulong)unaff_x23 >> 0x30);
                  pppppppuVar21 = pppppppuVar11;
                  pppppppuVar28 = pppppppuVar23;
                  pppppppuStack_250 = pppppppuVar10;
                }
LAB_10b2f1054:
                *(byte *)((long)pppppppuVar10 + (long)pppppppuVar28) = 0x2e;
                pbVar19 = (byte *)((long)pppppppuVar28 + 1);
                if ((char)bStack_239 < '\0') {
                  uStack_248 = SUB86(pbVar19,0);
                  uStack_242 = (undefined2)((ulong)pbVar19 >> 0x30);
                  *(byte *)((long)pppppppuVar10 + (long)pbVar19) = 0;
                  goto joined_r0x00010b2f0f00;
                }
                bStack_239 = (byte)pbVar19 & 0x7f;
                *(byte *)((long)pppppppuVar10 + (long)pbVar19) = 0;
                pppppppuVar24 = (ushort *******)(long)(char)bStack_239;
                if (-1 < (long)pppppppuVar24) goto LAB_10b2f0f04;
                goto LAB_10b2f1090;
              }
              pppppppuVar24 = (ushort *******)(((ulong)uStack_228 & 0x7fffffffffffffff) - 1);
              if (pppppppuVar24 != pppppppuStack_230) {
                pppppppuVar10 = pppppppuStack_238;
                pppppppuVar28 = pppppppuStack_230;
                if (-1 < (long)uStack_228) {
                  pppppppuVar10 = (ushort *******)&pppppppuStack_250;
                }
                goto LAB_10b2f1054;
              }
              pppppppuStack_298 = pppppppuStack_230;
              if (pppppppuVar24 != (ushort *******)0x7ffffffffffffff7) {
                unaff_x23 = (ushort *******)0x7ffffffffffffff7;
                if (pppppppuVar24 < (ushort *******)0x3ffffffffffffff3) {
                  if (pppppppuVar24 == (ushort *******)0x0) {
                    unaff_x23 = (ushort *******)0x17;
                  }
                  else {
                    uVar26 = (long)pppppppuVar24 * 2 | 7;
                    pppppppuVar6 = (ushort *******)0x19;
                    if (uVar26 != 0x17) {
                      pppppppuVar6 = (ushort *******)(uVar26 + 1);
                    }
                    unaff_x23 = (ushort *******)0x17;
                    if ((ushort *******)0xb < pppppppuVar24) {
                      unaff_x23 = pppppppuVar6;
                    }
                  }
                }
                pppppppuVar10 = unaff_x23;
                __Znwm();
                if ((pppppppuVar24 == (ushort *******)0x0) ||
                   (pppppppuVar13 = pppppppuVar11, _memmove(), pppppppuVar24 != (ushort *******)0x16
                   )) {
                  __ZdlPv(pppppppuVar11);
                }
                goto LAB_10b2f1048;
              }
            }
            func_0x000104c4f6b8();
            bVar18 = *(byte *)((long)pppppppuVar13 + 0x17);
            pppppppuVar6 = (ushort *******)*pppppppuVar13;
            if (-1 < (long)(char)bVar18) {
              pppppppuVar6 = pppppppuVar13;
            }
            ppppppuVar17 = pppppppuVar13[1];
            if (-1 < (char)bVar18) {
              ppppppuVar17 = (ushort ******)(long)(char)bVar18;
            }
            uStack_2a0 = 0x7ffffffffffffff7;
            pcStack_258 = FUN_10b2f12e4;
            pppppppuStack_2c0 = (ushort *******)0x0;
            ppppppuStack_2b8 = (ushort ******)0x0;
            uStack_2b0 = 0;
            pppppppuStack_290 = pppppppuVar21;
            pppppppuStack_288 = unaff_x23;
            pppppppuStack_280 = pppppppuVar24;
            pppppppuStack_278 = pppppppuVar12;
            pppppppuStack_270 = pppppppuVar16;
            pppppppuStack_260 = &pppppppuStack_1d0;
            if (ppppppuVar17 == (ushort ******)0x0) {
code_r0x00010014804c:
              bVar18 = *(byte *)((long)pppppppuVar10 + 0x17);
joined_r0x00010014805c:
              ppppppuVar27 = (ushort ******)(long)(char)bVar18;
              pppppppuVar23 = pppppppuVar10;
              ppppppuVar15 = ppppppuVar27;
              if ((long)ppppppuVar27 < 0) {
                pppppppuVar23 = (ushort *******)*pppppppuVar10;
                ppppppuVar15 = pppppppuVar10[1];
              }
              pppppppuVar11 = (ushort *******)&UNK_10e573fb0;
              func_0x000107c610b0(pppppppuVar23,&UNK_10e573fb0,ppppppuVar15 != (ushort ******)0x0);
              pppppppuVar9 = extraout_x8_01;
              if ((ppppppuVar15 == (ushort ******)0x1 && (int)pppppppuVar23 == 0) &&
                  ppppppuVar17 != (ushort ******)0x0) {
                if (ppppppuVar17 < (ushort ******)0x7ffffffffffffff8) {
                  if (ppppppuVar17 < (ushort ******)0x17) {
                    *(byte *)((long)extraout_x8_01 + 0x17) = (byte)ppppppuVar17;
                  }
                  else {
                    pppppppuVar11 = (ushort *******)0x19;
                    if (((ulong)ppppppuVar17 | 7) != 0x17) {
                      pppppppuVar11 = (ushort *******)(((ulong)ppppppuVar17 | 7) + 1);
                    }
                    pppppppuVar9 = pppppppuVar11;
                    func_0x000107c60e20();
                    extraout_x8_01[1] = ppppppuVar17;
                    extraout_x8_01[2] = (ushort ******)((ulong)pppppppuVar11 | 0x8000000000000000);
                    *extraout_x8_01 = (ushort ******)pppppppuVar9;
                  }
                  goto code_r0x000107c610b8;
                }
                goto code_r0x0001001484cc;
              }
              extraout_x8_01[1] = (ushort ******)0xaaaaaaaaaaaaaaaa;
              extraout_x8_01[2] = (ushort ******)0xaaaaaaaaaaaaaaaa;
              *extraout_x8_01 = (ushort ******)0xaaaaaaaaaaaaaaaa;
              ppppppuVar17 = pppppppuVar10[1];
              pppppppuVar6 = (ushort *******)*pppppppuVar10;
              if (-1 < (char)bVar18) {
                ppppppuVar17 = ppppppuVar27;
                pppppppuVar6 = pppppppuVar10;
              }
              if ((ushort ******)0x7ffffffffffffff7 < ppppppuVar17) goto code_r0x0001001484cc;
              if ((ushort ******)0x16 < ppppppuVar17) {
                pppppppuVar11 = (ushort *******)0x19;
                if (((ulong)ppppppuVar17 | 7) != 0x17) {
                  pppppppuVar11 = (ushort *******)(((ulong)ppppppuVar17 | 7) + 1);
                }
                pppppppuVar9 = pppppppuVar11;
                func_0x000107c60e20();
                extraout_x8_01[1] = ppppppuVar17;
                extraout_x8_01[2] = (ushort ******)((ulong)pppppppuVar11 | 0x8000000000000000);
                *extraout_x8_01 = (ushort ******)pppppppuVar9;
                goto code_r0x000107c610b8;
              }
              *(byte *)((long)extraout_x8_01 + 0x17) = (byte)ppppppuVar17;
              if (ppppppuVar17 != (ushort ******)0x0) goto code_r0x000107c610b8;
              *(byte *)extraout_x8_01 = 0;
              bVar18 = *(byte *)((long)extraout_x8_01 + 0x17);
              pppppppuVar16 = (ushort *******)*extraout_x8_01;
              ppppppuVar15 = extraout_x8_01[1];
              ppppppuVar17 = ppppppuVar15;
              pppppppuVar6 = pppppppuVar16;
              if (-1 < (char)bVar18) {
                ppppppuVar17 = (ushort ******)(ulong)bVar18;
                pppppppuVar6 = extraout_x8_01;
              }
              pppppppuVar11 = (ushort *******)0x0;
              pppppppuVar28 = pppppppuVar6;
              func_0x000107c610ac(pppppppuVar6,0,ppppppuVar17);
              pppppppuVar23 = extraout_x8_01;
              if ((pppppppuVar28 == (ushort *******)0x0) ||
                 (ppppppuVar17 = (ushort ******)((long)pppppppuVar28 - (long)pppppppuVar6),
                 ppppppuVar17 == (ushort ******)0xffffffffffffffff)) goto code_r0x0001001484d8;
              pppppppuVar23 = pppppppuVar28;
              if ((char)bVar18 < '\0') {
                if (ppppppuVar17 <= ppppppuVar15) {
                  extraout_x8_01[1] = ppppppuVar17;
                  goto code_r0x00010014824c;
                }
              }
              else if (ppppppuVar17 <= (ushort ******)(ulong)bVar18) {
                *(byte *)((long)extraout_x8_01 + 0x17) = (byte)ppppppuVar17;
                pppppppuVar16 = extraout_x8_01;
code_r0x00010014824c:
                *(byte *)((long)pppppppuVar16 + (long)ppppppuVar17) = 0;
                pppppppuVar23 = extraout_x8_01;
                goto code_r0x0001001484d8;
              }
            }
            else {
              pppppppuVar11 = (ushort *******)0x0;
              pppppppuVar23 = pppppppuVar6;
              func_0x000107c610ac(pppppppuVar6,0,ppppppuVar17);
              if ((pppppppuVar23 == (ushort *******)0x0) ||
                 (ppppppuVar15 = (ushort ******)((long)pppppppuVar23 - (long)pppppppuVar6),
                 ppppppuVar15 == (ushort ******)0xffffffffffffffff)) goto code_r0x00010014804c;
              if (ppppppuVar15 <= ppppppuVar17) {
                ppppppuVar17 = ppppppuVar15;
              }
              if (ppppppuVar17 < (ushort ******)0x7ffffffffffffff8) {
                if (ppppppuVar17 < (ushort ******)0x17) {
                  uStack_2c8 = CONCAT17((char)ppppppuVar17,(undefined7)uStack_2c8);
                  pppppppuVar16 = (ushort *******)&pppppppuStack_2d8;
                  if (pppppppuVar6 != pppppppuVar23) goto code_r0x000100148218;
                  *(byte *)((long)pppppppuVar16 + (long)ppppppuVar17) = 0;
                  pppppppuVar16 = pppppppuStack_2c0;
                }
                else {
                  pppppppuVar11 = (ushort *******)0x19;
                  if (((ulong)ppppppuVar17 | 7) != 0x17) {
                    pppppppuVar11 = (ushort *******)(((ulong)ppppppuVar17 | 7) + 1);
                  }
                  pppppppuVar16 = pppppppuVar11;
                  func_0x000107c60e20();
                  uStack_2c8 = (ulong)pppppppuVar11 | 0x8000000000000000;
                  pppppppuStack_2d8 = pppppppuVar16;
                  ppppppuStack_2d0 = ppppppuVar17;
code_r0x000100148218:
                  func_0x000107c610b8(pppppppuVar16,pppppppuVar6,ppppppuVar17);
                  *(byte *)((long)pppppppuVar16 + (long)ppppppuVar17) = 0;
                  pppppppuVar11 = pppppppuVar6;
                  pppppppuVar16 = pppppppuStack_2c0;
                }
                pppppppuStack_2c0 = pppppppuVar16;
                if ((long)uStack_2b0 < 0) {
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)PTR___ZdlPv_110352258)(pppppppuVar16);
                  auVar42._8_8_ = pppppppuVar11;
                  auVar42._0_8_ = pppppppuVar16;
                  return auVar42;
                }
                uStack_2b0._7_1_ = (char)(uStack_2c8 >> 0x38);
                pppppppuVar6 = pppppppuStack_2d8;
                if (-1 < (long)uStack_2b0._7_1_) {
                  pppppppuVar6 = (ushort *******)&pppppppuStack_2c0;
                }
                ppppppuVar17 = ppppppuStack_2d0;
                if (-1 < (long)uStack_2c8) {
                  ppppppuVar17 = (ushort ******)(long)uStack_2b0._7_1_;
                }
                bVar18 = *(byte *)((long)pppppppuVar10 + 0x17);
                pppppppuStack_2c0 = pppppppuStack_2d8;
                ppppppuStack_2b8 = ppppppuStack_2d0;
                uStack_2b0 = uStack_2c8;
                goto joined_r0x00010014805c;
              }
code_r0x0001001484cc:
              func_0x000107c35c54();
            }
            func_0x000104c03f14();
            func_0x000104bd47d4();
code_r0x0001001484d8:
            ppppppuVar15 = pppppppuVar23[1];
            if (-1 < (char)*(byte *)((long)pppppppuVar23 + 0x17)) {
              ppppppuVar15 = (ushort ******)(ulong)*(byte *)((long)pppppppuVar23 + 0x17);
            }
            pppppppuVar16 = pppppppuVar23;
            if ((ushort ******)0x1 < ppppppuVar15) {
              ppppppuVar27 = (ushort ******)0xffffffffffffffff;
              do {
                pppppppuVar6 = pppppppuVar23;
                if ((char)*(byte *)((long)pppppppuVar23 + 0x17) < '\0') {
                  pppppppuVar6 = (ushort *******)*pppppppuVar23;
                }
                if (((byte *)((long)pppppppuVar6 + (long)ppppppuVar15))[-1] != 0x2f) break;
                bVar18 = *(byte *)((long)pppppppuVar23 + 0x17);
                ppppppuVar17 = (ushort ******)(ulong)bVar18;
                if ((ppppppuVar15 == (ushort ******)0x2) && (ppppppuVar27 != (ushort ******)0x3)) {
                  pppppppuVar6 = pppppppuVar23;
                  if ((char)bVar18 < '\0') {
                    pppppppuVar6 = (ushort *******)*pppppppuVar23;
                  }
                  if (*(byte *)pppppppuVar6 == 0x2f) break;
                }
                ppppppuVar29 = (ushort ******)((long)ppppppuVar15 - 1);
                if ((char)bVar18 < '\0') {
                  ppppppuVar17 = pppppppuVar23[1];
                  pppppppuVar28 = (ushort *******)((long)ppppppuVar29 - (long)ppppppuVar17);
                  if (ppppppuVar29 < ppppppuVar17 || pppppppuVar28 == (ushort *******)0x0) {
                    pppppppuVar6 = (ushort *******)*pppppppuVar23;
                    pppppppuVar23[1] = ppppppuVar29;
                    goto code_r0x00010014852c;
                  }
                  if ((ushort ******)((long)ppppppuVar17 + 1U) == ppppppuVar15)
                  goto code_r0x000100148534;
                  uVar26 = ((ulong)pppppppuVar23[2] & 0x7fffffffffffffff) - 1;
                  uVar14 = (uint)((ulong)pppppppuVar23[2] >> 0x3f);
                  if ((ushort *******)(uVar26 - (long)ppppppuVar17) < pppppppuVar28)
                  goto code_r0x0001001485c4;
code_r0x00010014866c:
                  pppppppuVar6 = pppppppuVar23;
                  if (uVar14 != 0) goto code_r0x000100148674;
code_r0x000100148678:
                  pppppppuVar16 = (ushort *******)((long)pppppppuVar6 + (long)ppppppuVar17);
                  pppppppuVar11 = pppppppuVar28;
                  func_0x000107c60ee4();
                  ppppppuVar17 = (ushort ******)((long)ppppppuVar17 + (long)pppppppuVar28);
                  if ((char)*(byte *)((long)pppppppuVar23 + 0x17) < '\0') {
                    pppppppuVar23[1] = ppppppuVar17;
                    *(byte *)((long)pppppppuVar6 + (long)ppppppuVar17) = 0;
                  }
                  else {
                    *(byte *)((long)pppppppuVar23 + 0x17) = (byte)ppppppuVar17 & 0x7f;
                    *(byte *)((long)pppppppuVar6 + (long)ppppppuVar17) = 0;
                  }
                }
                else if (ppppppuVar17 < ppppppuVar29) {
                  pppppppuVar28 = (ushort *******)((long)ppppppuVar15 + ~(ulong)ppppppuVar17);
                  if (pppppppuVar28 != (ushort *******)0x0) {
                    uVar14 = 0;
                    uVar26 = 0x16;
                    if (pppppppuVar28 <= (ushort *******)(0x16 - (long)ppppppuVar17))
                    goto code_r0x00010014866c;
code_r0x0001001485c4:
                    if ((byte *)((long)ppppppuVar17 + ((long)pppppppuVar28 - uVar26)) <=
                        (byte *)(0x7ffffffffffffff7 - uVar26)) {
                      if ((char)bVar18 < '\0') {
                        pppppppuVar6 = (ushort *******)*pppppppuVar23;
                        if (0x3ffffffffffffff2 < uVar26) goto code_r0x0001001485f8;
code_r0x0001001486cc:
                        pbVar19 = (byte *)((long)ppppppuVar17 + (long)pppppppuVar28);
                        if ((byte *)((long)ppppppuVar17 + (long)pppppppuVar28) <=
                            (byte *)(uVar26 * 2)) {
                          pbVar19 = (byte *)(uVar26 * 2);
                        }
                        pppppppuVar16 = (ushort *******)0x19;
                        if (((ulong)pbVar19 | 7) != 0x17) {
                          pppppppuVar16 = (ushort *******)(((ulong)pbVar19 | 7) + 1);
                        }
                        pppppppuVar11 = (ushort *******)0x17;
                        if ((byte *)0x16 < pbVar19) {
                          pppppppuVar11 = pppppppuVar16;
                        }
                        pppppppuVar9 = pppppppuVar11;
                        func_0x000107c60e20();
                      }
                      else {
                        pppppppuVar6 = pppppppuVar23;
                        if (uVar26 < 0x3ffffffffffffff3) goto code_r0x0001001486cc;
code_r0x0001001485f8:
                        pppppppuVar11 = (ushort *******)0x7ffffffffffffff7;
                        pppppppuVar9 = pppppppuVar11;
                        func_0x000107c60e20();
                      }
                      if (ppppppuVar17 == (ushort ******)0x0) {
                        if (uVar26 != 0x16) {
                          func_0x000107c60e14(pppppppuVar6);
                        }
                        pppppppuVar23[1] = (ushort ******)0x0;
                        pppppppuVar23[2] =
                             (ushort ******)((ulong)pppppppuVar11 | 0x8000000000000000);
                        *pppppppuVar23 = (ushort ******)pppppppuVar9;
                        ppppppuVar17 = (ushort ******)0x0;
code_r0x000100148674:
                        pppppppuVar6 = (ushort *******)*pppppppuVar23;
                        goto code_r0x000100148678;
                      }
                      goto code_r0x000107c610b8;
                    }
                    func_0x000104c4f6b8();
                    if (-1 < (char)*(byte *)((long)pppppppuVar16 + 0x17)) {
                      ppppppuVar15 = pppppppuVar11[1];
                      ppppppuVar17 = *pppppppuVar11;
                      pppppppuVar16[2] = pppppppuVar11[2];
                      pppppppuVar16[1] = ppppppuVar15;
                      *pppppppuVar16 = ppppppuVar17;
                      *(byte *)((long)pppppppuVar11 + 0x17) = 0;
                      *(byte *)pppppppuVar11 = 0;
                      auVar34._8_8_ = pppppppuVar11;
                      auVar34._0_8_ = pppppppuVar16;
                      return auVar34;
                    }
                    pppppppuVar16 = (ushort *******)*pppppppuVar16;
                    goto code_r0x00010bdbd7ac;
                  }
                }
                else {
                  *(byte *)((long)pppppppuVar23 + 0x17) = (byte)ppppppuVar29;
                  pppppppuVar6 = pppppppuVar23;
code_r0x00010014852c:
                  ((byte *)((long)pppppppuVar6 + (long)ppppppuVar15))[-1] = 0;
                }
code_r0x000100148534:
                ppppppuVar27 = ppppppuVar15;
                ppppppuVar15 = ppppppuVar29;
              } while ((ushort ******)0x1 < ppppppuVar29);
            }
            auVar33._8_8_ = pppppppuVar11;
            auVar33._0_8_ = pppppppuVar16;
            return auVar33;
          }
          pppppppuVar6 = (ushort *******)*pppppppuVar23;
          pppppppuVar28 = (ushort *******)pppppppuVar23[1];
          pcVar31 = (code *)0x10b2f09f8;
          pppppppuVar10 = extraout_x8;
          pppppppuVar16 = param_4;
        }
code_r0x000100033dac:
        *(ushort ********)((long)pppppppuVar3 + -0x30) = pppppppuVar23;
        *(ushort ********)((long)pppppppuVar3 + -0x28) = pppppppuVar11;
        *(ushort ********)((long)pppppppuVar3 + -0x20) = pppppppuVar16;
        *(ushort ********)((long)pppppppuVar3 + -0x18) = pppppppuVar10;
        *(undefined8 ********)((long)pppppppuVar3 + -0x10) = pppppppuVar5;
        *(code **)((long)pppppppuVar3 + -8) = pcVar31;
        if ((ushort *******)0x16 < pppppppuVar28) {
          if (pppppppuVar28 < (ushort *******)0x7ffffffffffffff7) {
            pppppppuVar11 = (ushort *******)0x19;
            if (((ulong)pppppppuVar28 | 7) != 0x17) {
              pppppppuVar11 = (ushort *******)(((ulong)pppppppuVar28 | 7) + 1);
            }
            puVar30 = &UNK_100033e00;
          }
          else {
            puVar30 = &UNK_100033e30;
            pppppppuVar11 = pppppppuVar6;
            func_0x000104bd47d4();
          }
          *(ushort ********)((long)pppppppuVar3 + -0x50) = pppppppuVar28;
          *(ushort ********)((long)pppppppuVar3 + -0x48) = pppppppuVar6;
          *(undefined1 **)((long)pppppppuVar3 + -0x40) = (undefined1 *)((long)pppppppuVar3 + -0x10);
          *(undefined **)((long)pppppppuVar3 + -0x38) = puVar30;
          pppppppuVar16 = pppppppuVar11;
          func_0x000107c60e20(pppppppuVar11);
          auVar32._8_8_ = pppppppuVar11;
          auVar32._0_8_ = pppppppuVar16;
          return auVar32;
        }
        *(byte *)((long)pppppppuVar9 + 0x17) = (byte)pppppppuVar28;
        ppppppuVar17 = (ushort ******)((long)pppppppuVar28 + 1);
code_r0x000107c610b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memmove_11034c660)(pppppppuVar9,pppppppuVar6,ppppppuVar17);
        auVar43._8_8_ = pppppppuVar6;
        auVar43._0_8_ = pppppppuVar9;
        return auVar43;
      }
    }
    else {
      if (pppppppuVar6 != (ushort *******)0x2) goto LAB_10b2f0100;
      if (*(ushort *)pppppppuVar23 != 0x2e2e) {
        pppppppuVar6 = (ushort *******)0x2;
        goto LAB_10b2f0104;
      }
    }
  }
  else {
    pppppppuVar6 = pppppppuVar16;
    pppppppuVar23 = pppppppuVar11;
    if (bVar18 == 1) {
      if (*(byte *)pppppppuVar11 != 0x2e) goto LAB_10b2f0100;
    }
    else if ((bVar18 != 2) || (*(ushort *)pppppppuVar11 != 0x2e2e)) {
LAB_10b2f0100:
      if (pppppppuVar6 != (ushort *******)0x0) goto LAB_10b2f0104;
    }
  }
LAB_10b2f0178:
  pppppppuVar23 = (ushort *******)0xffffffffffffffff;
LAB_10b2f017c:
  auVar37._8_8_ = param_3;
  auVar37._0_8_ = pppppppuVar23;
  return auVar37;
}



/* Entry: 10b2f005c; end: 10b2f067b;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001001483ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010014840c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010014819c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b2f0f40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b2f09f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b2f0f44) */
/* WARNING: Removing unreachable block (ram,0x00010014823c) */
/* WARNING: Removing unreachable block (ram,0x0001001481a0) */
/* WARNING: Removing unreachable block (ram,0x0001001481b4) */
/* WARNING: Removing unreachable block (ram,0x0001001481b8) */
/* WARNING: Removing unreachable block (ram,0x0001001481cc) */
/* WARNING: Removing unreachable block (ram,0x0001001481d8) */
/* WARNING: Removing unreachable block (ram,0x00010014832c) */
/* WARNING: Removing unreachable block (ram,0x000100148334) */
/* WARNING: Removing unreachable block (ram,0x0001001481dc) */
/* WARNING: Removing unreachable block (ram,0x0001001481e4) */
/* WARNING: Removing unreachable block (ram,0x000100148754) */
/* WARNING: Removing unreachable block (ram,0x000100148258) */
/* WARNING: Removing unreachable block (ram,0x000100148260) */
/* WARNING: Removing unreachable block (ram,0x00010014827c) */
/* WARNING: Removing unreachable block (ram,0x000100148340) */
/* WARNING: Removing unreachable block (ram,0x000100148284) */
/* WARNING: Removing unreachable block (ram,0x000100148264) */
/* WARNING: Removing unreachable block (ram,0x000100148268) */
/* WARNING: Removing unreachable block (ram,0x000100148298) */
/* WARNING: Removing unreachable block (ram,0x0001001482a4) */
/* WARNING: Removing unreachable block (ram,0x0001001482ac) */
/* WARNING: Removing unreachable block (ram,0x0001001482c0) */
/* WARNING: Removing unreachable block (ram,0x0001001482c8) */
/* WARNING: Removing unreachable block (ram,0x0001001482d4) */
/* WARNING: Removing unreachable block (ram,0x0001001482fc) */
/* WARNING: Removing unreachable block (ram,0x000100148308) */
/* WARNING: Removing unreachable block (ram,0x000100148348) */
/* WARNING: Removing unreachable block (ram,0x000100148320) */
/* WARNING: Removing unreachable block (ram,0x00010014834c) */
/* WARNING: Removing unreachable block (ram,0x000100148278) */
/* WARNING: Removing unreachable block (ram,0x000100148354) */
/* WARNING: Removing unreachable block (ram,0x000100148428) */
/* WARNING: Removing unreachable block (ram,0x00010014842c) */
/* WARNING: Removing unreachable block (ram,0x000100148358) */
/* WARNING: Removing unreachable block (ram,0x000100148448) */
/* WARNING: Removing unreachable block (ram,0x00010014844c) */
/* WARNING: Removing unreachable block (ram,0x000100148454) */
/* WARNING: Removing unreachable block (ram,0x000100148480) */
/* WARNING: Removing unreachable block (ram,0x000100148474) */
/* WARNING: Removing unreachable block (ram,0x000100148484) */
/* WARNING: Removing unreachable block (ram,0x000100148370) */
/* WARNING: Removing unreachable block (ram,0x000100148388) */
/* WARNING: Removing unreachable block (ram,0x000100148390) */
/* WARNING: Removing unreachable block (ram,0x0001001483a4) */
/* WARNING: Removing unreachable block (ram,0x0001001483b0) */
/* WARNING: Removing unreachable block (ram,0x0001001483c0) */
/* WARNING: Removing unreachable block (ram,0x0001001483cc) */
/* WARNING: Removing unreachable block (ram,0x0001001483d0) */
/* WARNING: Removing unreachable block (ram,0x0001001483f0) */
/* WARNING: Removing unreachable block (ram,0x000100148410) */
/* WARNING: Removing unreachable block (ram,0x000100148488) */
/* WARNING: Removing unreachable block (ram,0x00010014848c) */
/* WARNING: Removing unreachable block (ram,0x0001001484ac) */
/* WARNING: Removing unreachable block (ram,0x000100148490) */
/* WARNING: Removing unreachable block (ram,0x000100148408) */
/* WARNING: Removing unreachable block (ram,0x0001001483e0) */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */
/* WARNING: Removing unreachable block (ram,0x00010b2f09f8) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_10b2f005c(short *param_1,ushort *******param_2,ushort *******param_3)

{
  char *pcVar1;
  byte *pbVar2;
  ushort uVar3;
  char cVar4;
  short *psVar5;
  ushort *******pppppppuVar6;
  bool bVar7;
  ushort *******pppppppuVar8;
  ushort *******pppppppuVar9;
  ushort *******pppppppuVar10;
  ushort *******pppppppuVar11;
  ushort *******pppppppuVar12;
  uint uVar13;
  ushort ******ppppppuVar14;
  ushort *******pppppppuVar15;
  ushort *******extraout_x8;
  ushort ******ppppppuVar16;
  ushort *******pppppppuVar17;
  ushort *******extraout_x8_00;
  ushort *******extraout_x8_01;
  byte bVar18;
  ushort *******pppppppuVar19;
  byte *pbVar20;
  short *psVar21;
  ulong uVar22;
  ushort *******pppppppuVar23;
  ushort *******unaff_x19;
  ushort *******unaff_x20;
  ushort *******unaff_x21;
  ushort *******pppppppuVar24;
  ushort *******pppppppuVar25;
  ushort *******pppppppuVar26;
  ushort *******unaff_x23;
  ushort *******pppppppuVar27;
  ulong uVar28;
  ushort *******pppppppuVar29;
  ushort ******ppppppuVar30;
  ushort *******unaff_x26;
  ushort *******unaff_x27;
  ushort ******ppppppuVar31;
  undefined8 *******pppppppuVar32;
  undefined *puVar33;
  code *pcVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  ushort *******pppppppuStack_278;
  ushort ******ppppppuStack_270;
  undefined8 uStack_268;
  ushort *******pppppppuStack_260;
  ushort ******ppppppuStack_258;
  undefined8 uStack_250;
  undefined8 uStack_240;
  ushort *******pppppppuStack_238;
  ushort *******pppppppuStack_230;
  ushort *******pppppppuStack_228;
  ushort *******pppppppuStack_220;
  ushort *******pppppppuStack_218;
  ushort *******pppppppuStack_210;
  undefined8 *******pppppppuStack_200;
  code *pcStack_1f8;
  ushort *******pppppppuStack_1f0;
  undefined6 uStack_1e8;
  undefined2 uStack_1e2;
  undefined6 uStack_1e0;
  undefined1 uStack_1da;
  byte bStack_1d9;
  ushort *******pppppppuStack_1d8;
  ushort *******pppppppuStack_1d0;
  undefined8 uStack_1c8;
  short *psStack_1c0;
  ushort *******pppppppuStack_1b8;
  undefined8 uStack_1b0;
  ushort *******pppppppuStack_1a8;
  ushort *******pppppppuStack_1a0;
  ushort *******pppppppuStack_198;
  ushort *******pppppppuStack_190;
  ushort *******pppppppuStack_188;
  ushort *******pppppppuStack_180;
  undefined8 *******pppppppuStack_170;
  undefined8 uStack_168;
  ushort *******pppppppuStack_160;
  ushort *******pppppppuStack_158;
  undefined8 uStack_150;
  short *psStack_140;
  ushort *******pppppppuStack_138;
  ushort *******pppppppuStack_130;
  ushort *******pppppppuStack_128;
  undefined8 uStack_120;
  ushort *******pppppppuStack_118;
  ushort *******pppppppuStack_110;
  ushort *******pppppppuStack_108;
  ushort *******pppppppuStack_100;
  ushort *******pppppppuStack_f8;
  undefined8 *******pppppppuStack_f0;
  code *pcStack_e8;
  ushort *******pppppppuStack_d8;
  ushort *******pppppppuStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ushort *******pppppppuStack_b8;
  ushort *******pppppppuStack_b0;
  ushort *******pppppppuStack_a8;
  ushort *******pppppppuStack_a0;
  ushort *******pppppppuStack_98;
  undefined8 *******pppppppuStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [8];
  ushort *******pppppppuStack_78;
  ushort *******pppppppuStack_70;
  undefined8 uStack_68;
  
  pppppppuVar6 = (ushort *******)auStack_80;
  cVar4 = *(char *)((long)param_1 + 0x17);
  pppppppuVar19 = (ushort *******)(long)cVar4;
  if ((long)pppppppuVar19 < 0) {
    psVar21 = *(short **)param_1;
    pppppppuVar8 = *(ushort ********)(param_1 + 4);
    if (pppppppuVar8 == (ushort *******)0x1) {
      if ((char)*psVar21 != '.') {
        pppppppuVar8 = (ushort *******)0x1;
LAB_10b2f0104:
        uVar28 = ~(ulong)pppppppuVar8;
        do {
          pppppppuVar15 = pppppppuVar8;
          if (pppppppuVar15 == (ushort *******)0x0) goto LAB_10b2f0178;
          pppppppuVar8 = (ushort *******)((long)pppppppuVar15 + -1);
          uVar28 = uVar28 + 1;
        } while (((char *)((long)psVar21 + -1))[(long)pppppppuVar15] != '.');
        pppppppuVar25 = pppppppuVar8;
        if (pppppppuVar15 < (ushort *******)0x2) goto LAB_10b2f017c;
        psVar21 = *(short **)param_1;
        pppppppuVar26 = *(ushort ********)(param_1 + 4);
        pppppppuVar17 = pppppppuVar26;
        psVar5 = psVar21;
        if (-1 < cVar4) {
          pppppppuVar17 = pppppppuVar19;
          psVar5 = param_1;
        }
        if (pppppppuVar17 == (ushort *******)0x0) {
LAB_10b2f019c:
          pppppppuVar24 = (ushort *******)0xffffffffffffffff;
        }
        else {
          pppppppuVar24 = pppppppuVar8;
          if (pppppppuVar17 <= (ushort *******)((long)pppppppuVar15 + -2)) {
            pppppppuVar24 = pppppppuVar17;
          }
          do {
            if (pppppppuVar24 == (ushort *******)0x0) goto LAB_10b2f019c;
            pcVar1 = (char *)((long)psVar5 + -1) + (long)pppppppuVar24;
            pppppppuVar24 = (ushort *******)((long)pppppppuVar24 + -1);
          } while (*pcVar1 != '.');
        }
        pppppppuVar23 = pppppppuVar8;
        if (pppppppuVar17 <= (ushort *******)((long)pppppppuVar15 + -2)) {
          pppppppuVar23 = pppppppuVar17;
        }
        do {
          if (pppppppuVar23 == (ushort *******)0x0) {
            pppppppuVar23 = (ushort *******)0xffffffffffffffff;
            break;
          }
          pcVar1 = (char *)((long)psVar5 + -1) + (long)pppppppuVar23;
          pppppppuVar23 = (ushort *******)((long)pppppppuVar23 + -1);
        } while (*pcVar1 != '/');
        if ((pppppppuVar24 == (ushort *******)0xffffffffffffffff) ||
           ((pppppppuVar23 != (ushort *******)0xffffffffffffffff && (pppppppuVar24 < pppppppuVar23))
           )) goto LAB_10b2f017c;
        pppppppuStack_70 = (ushort *******)0xaaaaaaaaaaaaaaaa;
        uStack_68 = 0xaaaaaaaaaaaaaaaa;
        pppppppuStack_78 = (ushort *******)0xaaaaaaaaaaaaaaaa;
        pppppppuVar17 = pppppppuVar8;
        if (cVar4 < '\0') {
          if (pppppppuVar24 < pppppppuVar26) goto LAB_10b2f021c;
LAB_10b2f0674:
          uStack_68 = 0xaaaaaaaaaaaaaaaa;
          pppppppuStack_70 = (ushort *******)0xaaaaaaaaaaaaaaaa;
          pppppppuStack_78 = (ushort *******)0xaaaaaaaaaaaaaaaa;
          func_0x00010b2ed138();
        }
        else {
          pppppppuVar26 = pppppppuVar19;
          psVar21 = param_1;
          if (pppppppuVar19 <= pppppppuVar24) goto LAB_10b2f0674;
LAB_10b2f021c:
          unaff_x26 = (ushort *******)((long)pppppppuVar24 + 1);
          unaff_x21 = (ushort *******)0x7ffffffffffffff7;
          unaff_x19 = (ushort *******)((long)pppppppuVar26 - (long)unaff_x26);
          if (unaff_x19 < (ushort *******)0x7ffffffffffffff8) {
            if (unaff_x19 < (ushort *******)0x17) {
              uStack_68 = CONCAT17((char)unaff_x19,0xaaaaaaaaaaaaaa);
              unaff_x20 = (ushort *******)&pppppppuStack_78;
              if (pppppppuVar26 != unaff_x26) goto LAB_10b2f0288;
            }
            else {
              pppppppuVar19 = (ushort *******)0x19;
              if (((ulong)unaff_x19 | 7) != 0x17) {
                pppppppuVar19 = (ushort *******)(((ulong)unaff_x19 | 7) + 1);
              }
              unaff_x20 = pppppppuVar19;
              __Znwm();
              uStack_68 = (ulong)pppppppuVar19 | 0x8000000000000000;
              pppppppuStack_78 = unaff_x20;
              pppppppuStack_70 = unaff_x19;
LAB_10b2f0288:
              param_2 = (ushort *******)((long)psVar21 + (long)unaff_x26);
              param_3 = unaff_x19;
              _memmove(unaff_x20);
            }
            unaff_x21 = (ushort *******)0x7ffffffffffffff7;
            *(byte *)((long)unaff_x20 + (long)unaff_x19) = 0;
            pppppppuVar19 = pppppppuStack_78;
            pppppppuVar25 = pppppppuStack_70;
            if (-1 < (long)uStack_68) {
              pppppppuVar19 = (ushort *******)&pppppppuStack_78;
              pppppppuVar25 = (ushort *******)(uStack_68 >> 0x38);
            }
            if (pppppppuVar25 == (ushort *******)0x7) {
              bVar18 = *(byte *)pppppppuVar19;
              uVar13 = bVar18 + 0x20;
              if (0x19 < bVar18 - 0x41) {
                uVar13 = (uint)bVar18;
              }
              if (uVar13 == 0x75) {
                pppppppuVar25 = pppppppuStack_78;
                if (-1 < (long)uStack_68) {
                  pppppppuVar25 = (ushort *******)&pppppppuStack_78;
                }
                bVar18 = *(byte *)((long)pppppppuVar25 + 1);
                uVar13 = bVar18 + 0x20;
                if (0x19 < bVar18 - 0x41) {
                  uVar13 = (uint)bVar18;
                }
                if (uVar13 == 0x73) {
                  pppppppuVar25 = pppppppuStack_78;
                  if (-1 < (long)uStack_68) {
                    pppppppuVar25 = (ushort *******)&pppppppuStack_78;
                  }
                  bVar18 = *(byte *)((long)pppppppuVar25 + 2);
                  uVar13 = bVar18 + 0x20;
                  if (0x19 < bVar18 - 0x41) {
                    uVar13 = (uint)bVar18;
                  }
                  if (uVar13 == 0x65) {
                    pppppppuVar25 = pppppppuStack_78;
                    if (-1 < (long)uStack_68) {
                      pppppppuVar25 = (ushort *******)&pppppppuStack_78;
                    }
                    bVar18 = *(byte *)((long)pppppppuVar25 + 3);
                    uVar13 = bVar18 + 0x20;
                    if (0x19 < bVar18 - 0x41) {
                      uVar13 = (uint)bVar18;
                    }
                    if (uVar13 == 0x72) {
                      pppppppuVar25 = pppppppuStack_78;
                      if (-1 < (long)uStack_68) {
                        pppppppuVar25 = (ushort *******)&pppppppuStack_78;
                      }
                      bVar18 = *(byte *)((long)pppppppuVar25 + 4);
                      uVar13 = bVar18 + 0x20;
                      if (0x19 < bVar18 - 0x41) {
                        uVar13 = (uint)bVar18;
                      }
                      if (uVar13 == 0x2e) {
                        pppppppuVar25 = pppppppuStack_78;
                        if (-1 < (long)uStack_68) {
                          pppppppuVar25 = (ushort *******)&pppppppuStack_78;
                        }
                        bVar18 = *(byte *)((long)pppppppuVar25 + 5);
                        uVar13 = bVar18 + 0x20;
                        if (0x19 < bVar18 - 0x41) {
                          uVar13 = (uint)bVar18;
                        }
                        if (uVar13 == 0x6a) {
                          pppppppuVar25 = pppppppuStack_78;
                          if (-1 < (long)uStack_68) {
                            pppppppuVar25 = (ushort *******)&pppppppuStack_78;
                          }
                          bVar18 = *(byte *)((long)pppppppuVar25 + 6);
                          uVar13 = bVar18 + 0x20;
                          if (0x19 < bVar18 - 0x41) {
                            uVar13 = (uint)bVar18;
                          }
                          if (uVar13 == 0x73) {
                            pppppppuVar25 = pppppppuStack_78;
                            if (-1 < (long)uStack_68) {
                              pppppppuVar25 = (ushort *******)&pppppppuStack_78;
                            }
                            unaff_x19 = (ushort *******)
                                        (ulong)((byte *)((long)pppppppuVar25 + 7) ==
                                               (byte *)((long)pppppppuVar19 + 7));
                            goto LAB_10b2f03fc;
                          }
                        }
                      }
                    }
                  }
                }
              }
              unaff_x19 = (ushort *******)0x0;
            }
            else {
              unaff_x19 = (ushort *******)0x0;
            }
LAB_10b2f03fc:
            pppppppuVar17 = pppppppuStack_78;
            if ((long)uStack_68 < 0) {
              __ZdlPv();
              pppppppuVar17 = pppppppuStack_78;
            }
            pppppppuVar25 = pppppppuVar24;
            if ((int)unaff_x19 != 0) goto LAB_10b2f017c;
            pppppppuStack_70 = (ushort *******)0xaaaaaaaaaaaaaaaa;
            uStack_68 = 0xaaaaaaaaaaaaaaaa;
            pppppppuStack_78 = (ushort *******)0xaaaaaaaaaaaaaaaa;
            unaff_x27 = (ushort *******)(long)*(char *)((long)param_1 + 0x17);
            unaff_x23 = pppppppuVar8;
            if ((long)unaff_x27 < 0) {
              unaff_x27 = *(ushort ********)(param_1 + 4);
              if (pppppppuVar15 <= unaff_x27) {
                param_1 = *(short **)param_1;
                goto LAB_10b2f0448;
              }
            }
            else if (pppppppuVar15 <= unaff_x27) {
LAB_10b2f0448:
              unaff_x19 = (ushort *******)(~(ulong)pppppppuVar8 + (long)unaff_x27);
              if ((ushort *******)0x7ffffffffffffff7 < unaff_x19) goto LAB_10b2f0678;
              if (unaff_x19 < (ushort *******)0x17) {
                uStack_68 = CONCAT17((char)unaff_x19,0xaaaaaaaaaaaaaa);
                pppppppuVar15 = (ushort *******)&pppppppuStack_78;
                if ((ushort *******)((long)unaff_x27 + -1) != pppppppuVar8) goto LAB_10b2f04ac;
              }
              else {
                pppppppuVar19 = (ushort *******)0x19;
                if (((ulong)unaff_x19 | 7) != 0x17) {
                  pppppppuVar19 = (ushort *******)(((ulong)unaff_x19 | 7) + 1);
                }
                pppppppuVar15 = pppppppuVar19;
                __Znwm();
                uStack_68 = (ulong)pppppppuVar19 | 0x8000000000000000;
                pppppppuStack_78 = pppppppuVar15;
                pppppppuStack_70 = unaff_x19;
LAB_10b2f04ac:
                param_2 = (ushort *******)((byte *)((long)param_1 + (long)pppppppuVar8) + 1);
                _memmove(pppppppuVar15,param_2,unaff_x19);
              }
              ((byte *)((long)pppppppuVar15 + (long)unaff_x27))[uVar28] = 0;
              uVar28 = uStack_68;
              pppppppuVar17 = pppppppuStack_78;
              pbVar20 = (byte *)((long)pppppppuVar8 + (-2 - (long)pppppppuVar24));
              pppppppuVar19 = pppppppuStack_78;
              pppppppuVar15 = pppppppuStack_70;
              if (-1 < (long)uStack_68) {
                pppppppuVar19 = (ushort *******)&pppppppuStack_78;
                pppppppuVar15 = (ushort *******)(uStack_68 >> 0x38);
              }
              if (pppppppuVar15 == (ushort *******)0x2) {
                bVar18 = *(byte *)pppppppuVar19;
                uVar13 = bVar18 + 0x20;
                if (0x19 < bVar18 - 0x41) {
                  uVar13 = (uint)bVar18;
                }
                if (uVar13 != 0x67) {
LAB_10b2f055c:
                  bVar18 = *(byte *)pppppppuVar19;
                  uVar13 = bVar18 + 0x20;
                  if (0x19 < bVar18 - 0x41) {
                    uVar13 = (uint)bVar18;
                  }
                  if (uVar13 == 0x78) {
                    pppppppuVar25 = pppppppuStack_78;
                    if (-1 < (long)uStack_68) {
                      pppppppuVar25 = (ushort *******)&pppppppuStack_78;
                    }
                    bVar18 = *(byte *)((long)pppppppuVar25 + 1);
                    uVar13 = bVar18 + 0x20;
                    if (0x19 < bVar18 - 0x41) {
                      uVar13 = (uint)bVar18;
                    }
                    if (uVar13 == 0x7a) {
                      pppppppuVar25 = pppppppuStack_78;
                      if (-1 < (long)uStack_68) {
                        pppppppuVar25 = (ushort *******)&pppppppuStack_78;
                      }
                      if (((ushort *)((long)pppppppuVar25 + 2) ==
                           (ushort *)((long)pppppppuVar19 + 2)) && (pbVar20 < (byte *)0x4))
                      goto joined_r0x00010b2f066c;
                    }
                  }
                  goto LAB_10b2f05bc;
                }
                pppppppuVar25 = pppppppuStack_78;
                if (-1 < (long)uStack_68) {
                  pppppppuVar25 = (ushort *******)&pppppppuStack_78;
                }
                bVar18 = *(byte *)((long)pppppppuVar25 + 1);
                uVar13 = bVar18 + 0x20;
                if (0x19 < bVar18 - 0x41) {
                  uVar13 = (uint)bVar18;
                }
                if (uVar13 != 0x7a) goto LAB_10b2f055c;
                pppppppuVar25 = pppppppuStack_78;
                if (-1 < (long)uStack_68) {
                  pppppppuVar25 = (ushort *******)&pppppppuStack_78;
                }
                if (((ushort *)((long)pppppppuVar25 + 2) != (ushort *)((long)pppppppuVar19 + 2)) ||
                   ((byte *)0x3 < pbVar20)) goto LAB_10b2f055c;
              }
              else {
LAB_10b2f05bc:
                pppppppuVar25 = pppppppuVar19;
                param_2 = pppppppuVar15;
                func_0x000107c2cc7c(pppppppuVar19,pppppppuVar15,&UNK_10f7440d0,3);
                if ((((((int)pppppppuVar25 == 0) || ((byte *)0x3 < pbVar20)) &&
                     ((pppppppuVar25 = pppppppuVar19, param_2 = pppppppuVar15,
                      func_0x000107c2cc7c(pppppppuVar19,pppppppuVar15,"z",1),
                      (int)pppppppuVar25 == 0 || ((byte *)0x3 < pbVar20)))) &&
                    ((pppppppuVar25 = pppppppuVar19, param_2 = pppppppuVar15,
                     func_0x000107c2cc7c(pppppppuVar19,pppppppuVar15,&UNK_10f7440d4,2),
                     (int)pppppppuVar25 == 0 || ((byte *)0x3 < pbVar20)))) &&
                   (func_0x000107c2cc7c(pppppppuVar19,pppppppuVar15,&UNK_10f7440d7,4),
                   param_2 = pppppppuVar15,
                   ((uint)pppppppuVar19 & (uint)(pbVar20 < (byte *)0x4)) == 0)) {
                  pppppppuVar24 = pppppppuVar8;
                }
              }
joined_r0x00010b2f066c:
              pppppppuVar25 = pppppppuVar24;
              if ((long)uVar28 < 0) {
                __ZdlPv(pppppppuVar17);
              }
              goto LAB_10b2f017c;
            }
            goto LAB_10b2f0674;
          }
        }
LAB_10b2f0678:
        FUN_10b2ecf74();
        pcStack_88 = FUN_10b2f067c;
        pppppppuVar25 = param_2;
        pppppppuVar19 = param_2;
        uStack_c0 = uVar28;
        pppppppuStack_b8 = unaff_x23;
        pppppppuStack_b0 = pppppppuVar24;
        pppppppuStack_a8 = unaff_x21;
        pppppppuStack_a0 = unaff_x20;
        pppppppuStack_98 = unaff_x19;
        pppppppuStack_90 = (undefined8 *******)&stack0xfffffffffffffff0;
        FUN_10b2eff1c(&pppppppuStack_d8,param_2);
        pppppppuVar8 = pppppppuStack_d0;
        if ((long)uStack_c8 < 0) {
          pppppppuVar25 = pppppppuStack_d8;
          __ZdlPv(pppppppuStack_d8);
          if (pppppppuVar8 != (ushort *******)0x0) goto LAB_10b2f06c4;
LAB_10b2f0710:
          if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
            ppppppuVar16 = *param_2;
            pppppppuVar17[1] = param_2[1];
            *pppppppuVar17 = ppppppuVar16;
            pppppppuVar17[2] = param_2[2];
            auVar39._8_8_ = pppppppuVar19;
            auVar39._0_8_ = pppppppuVar25;
            return auVar39;
          }
          pppppppuVar26 = pppppppuVar17;
          pppppppuVar15 = (ushort *******)*param_2;
          pppppppuVar17 = (ushort *******)param_2[1];
          pppppppuVar24 = pppppppuStack_98;
          pppppppuVar8 = pppppppuStack_a0;
          pppppppuVar19 = pppppppuStack_a8;
          pppppppuVar25 = pppppppuStack_b0;
          pppppppuVar32 = pppppppuStack_90;
          pcVar34 = pcStack_88;
        }
        else {
          if (uStack_c8._7_1_ == '\0') goto LAB_10b2f0710;
LAB_10b2f06c4:
          pppppppuVar25 = param_2;
          FUN_10b2f005c();
          if (pppppppuVar25 == (ushort *******)0xffffffffffffffff) goto LAB_10b2f0710;
          pppppppuVar23 = (ushort *******)(long)(char)*(byte *)((long)param_2 + 0x17);
          pppppppuVar11 = param_2;
          if ((long)pppppppuVar23 < 0) {
            pppppppuVar11 = (ushort *******)*param_2;
            pppppppuVar23 = (ushort *******)param_2[1];
          }
          pppppppuVar29 = (ushort *******)0x7ffffffffffffff7;
          if (pppppppuVar25 <= pppppppuVar23) {
            pppppppuVar23 = pppppppuVar25;
          }
          if (pppppppuVar23 < (ushort *******)0x7ffffffffffffff8) {
            if (pppppppuVar23 < (ushort *******)0x17) {
              uStack_c8 = CONCAT17((char)pppppppuVar23,(undefined7)uStack_c8);
              pppppppuVar24 = (ushort *******)&pppppppuStack_d8;
              if (pppppppuVar23 != (ushort *******)0x0) goto LAB_10b2f0788;
            }
            else {
              unaff_x23 = (ushort *******)0x19;
              if (((ulong)pppppppuVar23 | 7) != 0x17) {
                unaff_x23 = (ushort *******)(((ulong)pppppppuVar23 | 7) + 1);
              }
              pppppppuVar24 = unaff_x23;
              __Znwm();
              uStack_c8 = (ulong)unaff_x23 | 0x8000000000000000;
              pppppppuStack_d8 = pppppppuVar24;
              pppppppuStack_d0 = pppppppuVar23;
LAB_10b2f0788:
              pppppppuVar25 = pppppppuVar24;
              param_3 = pppppppuVar23;
              _memmove();
              pppppppuVar19 = pppppppuVar11;
            }
            *(byte *)((long)pppppppuVar24 + (long)pppppppuVar23) = 0;
            pppppppuVar23 = pppppppuStack_d8;
            if (-1 < (long)uStack_c8._7_1_) {
              pppppppuVar23 = (ushort *******)&pppppppuStack_d8;
            }
            pppppppuVar11 = pppppppuStack_d0;
            if (-1 < (long)uStack_c8) {
              pppppppuVar11 = (ushort *******)(long)uStack_c8._7_1_;
            }
            if ((ushort *******)0x7ffffffffffffff7 < pppppppuVar11) goto LAB_10b2f08c8;
            if ((ushort *******)0x16 < pppppppuVar11) {
              unaff_x23 = (ushort *******)0x19;
              if (((ulong)pppppppuVar11 | 7) != 0x17) {
                unaff_x23 = (ushort *******)(((ulong)pppppppuVar11 | 7) + 1);
              }
              pppppppuVar24 = unaff_x23;
              __Znwm();
              pppppppuVar17[1] = (ushort ******)pppppppuVar11;
              pppppppuVar17[2] = (ushort ******)((ulong)unaff_x23 | 0x8000000000000000);
              *pppppppuVar17 = (ushort ******)pppppppuVar24;
LAB_10b2f0824:
              _memmove(pppppppuVar24,pppppppuVar23,pppppppuVar11);
              *(byte *)((long)pppppppuVar24 + (long)pppppppuVar11) = 0;
              pppppppuVar23 = (ushort *******)(long)(char)*(byte *)((long)pppppppuVar17 + 0x17);
              if (-1 < (long)pppppppuVar23) goto LAB_10b2f07e0;
LAB_10b2f0840:
              pppppppuVar11 = (ushort *******)*pppppppuVar17;
              param_3 = (ushort *******)pppppppuVar17[1];
              pppppppuVar19 = (ushort *******)0x0;
              pppppppuVar25 = pppppppuVar11;
              _memchr();
              if (pppppppuVar25 != (ushort *******)0x0) goto LAB_10b2f0854;
LAB_10b2f088c:
              pppppppuVar8 = pppppppuStack_d8;
              if (-1 < (long)uStack_c8) {
                auVar40._8_8_ = pppppppuVar19;
                auVar40._0_8_ = pppppppuVar25;
                return auVar40;
              }
              goto code_r0x00010bdbd7ac;
            }
            *(byte *)((long)pppppppuVar17 + 0x17) = (byte)pppppppuVar11;
            pppppppuVar24 = pppppppuVar17;
            if (pppppppuVar11 != (ushort *******)0x0) goto LAB_10b2f0824;
            *(byte *)pppppppuVar17 = 0;
            pppppppuVar23 = (ushort *******)(long)(char)*(byte *)((long)pppppppuVar17 + 0x17);
            if ((long)pppppppuVar23 < 0) goto LAB_10b2f0840;
LAB_10b2f07e0:
            pppppppuVar19 = (ushort *******)0x0;
            pppppppuVar25 = pppppppuVar17;
            param_3 = pppppppuVar23;
            _memchr();
            pppppppuVar11 = pppppppuVar17;
            if (pppppppuVar25 == (ushort *******)0x0) goto LAB_10b2f088c;
LAB_10b2f0854:
            pppppppuVar8 = (ushort *******)((long)pppppppuVar25 - (long)pppppppuVar11);
            if (pppppppuVar8 == (ushort *******)0xffffffffffffffff) goto LAB_10b2f088c;
            if ((int)pppppppuVar23 < 0) {
              if (pppppppuVar8 <= pppppppuVar17[1]) {
                pppppppuVar17[1] = (ushort ******)pppppppuVar8;
                pppppppuVar17 = (ushort *******)*pppppppuVar17;
                goto LAB_10b2f0888;
              }
            }
            else if (pppppppuVar8 <= pppppppuVar23) {
              *(byte *)((long)pppppppuVar17 + 0x17) = (byte)pppppppuVar8;
LAB_10b2f0888:
              *(byte *)((long)pppppppuVar17 + (long)pppppppuVar8) = 0;
              goto LAB_10b2f088c;
            }
          }
          else {
LAB_10b2f08c8:
            FUN_10b2ecf74();
          }
          func_0x000104c03f14();
          pppppppuVar6 = (ushort *******)&pppppppuStack_160;
          pppppppuVar10 = (ushort *******)&pppppppuStack_160;
          pppppppuVar27 = (ushort *******)&pppppppuStack_160;
          pppppppuVar26 = (ushort *******)&pppppppuStack_160;
          uStack_120 = 0x7ffffffffffffff7;
          pcStack_e8 = FUN_10b2f08d0;
          pppppppuVar32 = &pppppppuStack_f0;
          pppppppuVar9 = pppppppuVar25;
          pppppppuVar12 = pppppppuVar19;
          pppppppuVar8 = param_3;
          psStack_140 = psVar21;
          pppppppuStack_138 = unaff_x27;
          pppppppuStack_130 = unaff_x26;
          pppppppuStack_128 = pppppppuVar15;
          pppppppuStack_118 = unaff_x23;
          pppppppuStack_110 = pppppppuVar24;
          pppppppuStack_108 = pppppppuVar23;
          pppppppuStack_100 = pppppppuVar11;
          pppppppuStack_f8 = pppppppuVar17;
          pppppppuStack_f0 = &pppppppuStack_90;
          func_0x000107c2cab8(&pppppppuStack_160);
          pppppppuVar17 = pppppppuStack_158;
          if (-1 < (char)uStack_150._7_1_) {
            pppppppuVar17 = (ushort *******)(ulong)uStack_150._7_1_;
          }
          if (pppppppuVar17 == (ushort *******)0x0) {
            if ((char)uStack_150._7_1_ < '\0') {
              __ZdlPv(pppppppuStack_160);
              pppppppuVar9 = pppppppuStack_160;
            }
LAB_10b2f0ac4:
            *extraout_x8 = (ushort ******)0x0;
            extraout_x8[1] = (ushort ******)0x0;
            extraout_x8[2] = (ushort ******)0x0;
            goto LAB_10b2f0acc;
          }
          if ((char)uStack_150._7_1_ < '\0') {
            if (pppppppuStack_158 == (ushort *******)0x1) {
              bVar18 = *(byte *)pppppppuStack_160;
              unaff_x23 = (ushort *******)(ulong)bVar18;
              __ZdlPv();
              pppppppuVar9 = pppppppuStack_160;
              pppppppuStack_160._0_1_ = bVar18;
              goto joined_r0x00010b2f0ac0;
            }
            if (pppppppuStack_158 == (ushort *******)0x2) {
              uVar3 = *(ushort *)pppppppuStack_160;
              unaff_x23 = (ushort *******)(ulong)uVar3;
              pppppppuVar29 = (ushort *******)0x2e2e;
              __ZdlPv();
              pppppppuVar9 = pppppppuStack_160;
              pppppppuStack_160._0_2_ = uVar3;
              goto joined_r0x00010b2f09d4;
            }
            __ZdlPv();
            pppppppuVar9 = pppppppuStack_160;
            if (param_3 != (ushort *******)0x0) goto LAB_10b2f0950;
LAB_10b2f0af4:
            if ((char)*(byte *)((long)pppppppuVar25 + 0x17) < '\0') {
              pppppppuVar12 = (ushort *******)*pppppppuVar25;
              pppppppuVar9 = extraout_x8;
              func_0x000107c3192c(extraout_x8,pppppppuVar12,pppppppuVar25[1]);
            }
            else {
              ppppppuVar16 = *pppppppuVar25;
              extraout_x8[1] = pppppppuVar25[1];
              *extraout_x8 = ppppppuVar16;
              extraout_x8[2] = pppppppuVar25[2];
            }
LAB_10b2f0acc:
            auVar41._8_8_ = pppppppuVar12;
            auVar41._0_8_ = pppppppuVar9;
            return auVar41;
          }
          if (uStack_150._7_1_ == 1) {
joined_r0x00010b2f0ac0:
            if ((byte)pppppppuStack_160 == 0x2e) goto LAB_10b2f0ac4;
          }
          else if (uStack_150._7_1_ == 2) {
joined_r0x00010b2f09d4:
            if ((ushort)pppppppuStack_160 == 0x2e2e) goto LAB_10b2f0ac4;
          }
          if (param_3 == (ushort *******)0x0) goto LAB_10b2f0af4;
LAB_10b2f0950:
          if ((param_3 == (ushort *******)0x1) && (*(byte *)pppppppuVar19 == 0x2e))
          goto LAB_10b2f0af4;
          pppppppuStack_158 = (ushort *******)0xaaaaaaaaaaaaaaaa;
          uStack_150 = (ushort ******)0xaaaaaaaaaaaaaaaa;
          pppppppuStack_160 = (ushort *******)0xaaaaaaaaaaaaaaaa;
          if (-1 < (char)*(byte *)((long)pppppppuVar25 + 0x17)) {
            pppppppuStack_158 = (ushort *******)pppppppuVar25[1];
            pppppppuStack_160 = (ushort *******)*pppppppuVar25;
            ppppppuVar16 = pppppppuVar25[2];
            uStack_150 = ppppppuVar16;
            ppppppuVar16 = uStack_150;
            if (*(byte *)pppppppuVar19 != 0x2e) {
              uStack_150._7_1_ = (byte)((ulong)ppppppuVar16 >> 0x38);
              pppppppuVar17 = (ushort *******)pppppppuVar25[1];
              pppppppuVar25 = (ushort *******)*pppppppuVar25;
              if (-1 < (long)ppppppuVar16) {
                pppppppuVar17 = (ushort *******)(ulong)uStack_150._7_1_;
                pppppppuVar25 = (ushort *******)&pppppppuStack_160;
              }
              if (((byte *)((long)pppppppuVar25 + (long)pppppppuVar17))[-1] != 0x2e) {
                pppppppuVar25 = (ushort *******)(((ulong)ppppppuVar16 & 0x7fffffffffffffff) - 1);
                if (-1 < (long)ppppppuVar16) {
                  pppppppuVar25 = (ushort *******)0x16;
                }
                bVar18 = uStack_150._7_1_;
                uStack_150 = ppppppuVar16;
                if (pppppppuVar25 == pppppppuVar17) {
                  pppppppuVar8 = (ushort *******)0x1;
                  pppppppuVar12 = pppppppuVar17;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                            ();
                  pppppppuVar9 = pppppppuVar10;
                  bVar18 = uStack_150._7_1_;
                  pppppppuStack_158 = pppppppuVar17;
                }
                pppppppuVar25 = pppppppuStack_160;
                if (-1 < (char)bVar18) {
                  pppppppuVar25 = (ushort *******)&pppppppuStack_160;
                }
                *(byte *)((long)pppppppuVar25 + (long)pppppppuVar17) = 0x2e;
                pppppppuVar17 = (ushort *******)((long)pppppppuVar17 + 1);
                pppppppuVar26 = pppppppuVar17;
                if (-1 < (long)uStack_150) {
                  uStack_150 = (ushort ******)
                               (CONCAT17((char)pppppppuVar17,(undefined7)uStack_150) &
                               0x7fffffffffffffff);
                  pppppppuVar26 = pppppppuStack_158;
                }
                pppppppuStack_158 = pppppppuVar26;
                *(byte *)((long)pppppppuVar25 + (long)pppppppuVar17) = 0;
                ppppppuVar16 = uStack_150;
              }
            }
            uStack_150 = ppppppuVar16;
            pppppppuVar26 = pppppppuStack_158;
            pppppppuVar17 = pppppppuStack_160;
            pppppppuVar25 = (ushort *******)(long)(char)uStack_150._7_1_;
            if ((long)pppppppuVar25 < 0) {
              uVar28 = ((ulong)uStack_150 & 0x7fffffffffffffff) - 1;
              pppppppuVar25 = pppppppuStack_158;
              pppppppuVar27 = pppppppuStack_160;
              if (param_3 <= (ushort *******)(uVar28 - (long)pppppppuStack_158)) goto LAB_10b2f0c44;
              pbVar20 = (byte *)(((long)param_3 - uVar28) + (long)pppppppuStack_158);
              if (pbVar20 <= (byte *)(0x7ffffffffffffff7 - ((ulong)uStack_150 & 0x7fffffffffffffff))
                 ) {
                if (uVar28 < 0x3ffffffffffffff3) goto LAB_10b2f0bac;
                unaff_x27 = (ushort *******)0x0;
                pppppppuVar15 = (ushort *******)0x7ffffffffffffff7;
                pppppppuVar24 = pppppppuVar15;
                __Znwm();
                pppppppuVar27 = pppppppuVar17;
                pppppppuVar25 = pppppppuVar26;
                goto joined_r0x00010b2f0d78;
              }
LAB_10b2f0d84:
              func_0x000104bd47d4();
            }
            else {
              if ((ushort *******)(0x16 - (long)pppppppuVar25) < param_3) {
                pbVar20 = (byte *)((long)param_3 + (long)pppppppuVar25) + -0x16;
                if ((byte *)0x7fffffffffffffe0 < pbVar20) goto LAB_10b2f0d84;
                uVar28 = 0x16;
                pppppppuVar27 = (ushort *******)&pppppppuStack_160;
LAB_10b2f0bac:
                pbVar2 = pbVar20 + uVar28;
                if (pbVar20 + uVar28 <= (byte *)(uVar28 * 2)) {
                  pbVar2 = (byte *)(uVar28 * 2);
                }
                pppppppuVar8 = (ushort *******)0x19;
                if (((ulong)pbVar2 | 7) != 0x17) {
                  pppppppuVar8 = (ushort *******)(((ulong)pbVar2 | 7) + 1);
                }
                pppppppuVar15 = (ushort *******)0x17;
                if ((byte *)0x16 < pbVar2) {
                  pppppppuVar15 = pppppppuVar8;
                }
                unaff_x27 = (ushort *******)(ulong)(uVar28 == 0x16);
                pppppppuVar24 = pppppppuVar15;
                __Znwm();
joined_r0x00010b2f0d78:
                if (pppppppuVar25 != (ushort *******)0x0) {
                  _memmove(pppppppuVar24,pppppppuVar27,pppppppuVar25);
                }
                pppppppuVar9 = (ushort *******)((long)pppppppuVar24 + (long)pppppppuVar25);
                pppppppuVar8 = param_3;
                _memmove();
                if ((int)unaff_x27 == 0) {
                  pppppppuVar9 = pppppppuVar27;
                  __ZdlPv();
                }
                uStack_150 = (ushort ******)((ulong)pppppppuVar15 | 0x8000000000000000);
                pppppppuStack_158 = (ushort *******)((long)pppppppuVar25 + (long)param_3);
                *(byte *)((long)pppppppuVar24 + (long)pppppppuStack_158) = 0;
                pppppppuVar12 = pppppppuVar19;
                bVar18 = (byte)((ulong)uStack_150 >> 0x38);
                pppppppuStack_160 = pppppppuVar24;
              }
              else {
LAB_10b2f0c44:
                pppppppuVar9 = (ushort *******)((long)pppppppuVar27 + (long)pppppppuVar25);
                pppppppuVar8 = param_3;
                _memmove();
                param_3 = (ushort *******)((long)pppppppuVar25 + (long)param_3);
                pppppppuVar17 = param_3;
                if (-1 < (long)uStack_150) {
                  uStack_150 = (ushort ******)
                               (CONCAT17((char)param_3,(undefined7)uStack_150) & 0x7fffffffffffffff)
                  ;
                  pppppppuVar17 = pppppppuStack_158;
                }
                pppppppuStack_158 = pppppppuVar17;
                *(byte *)((long)pppppppuVar27 + (long)param_3) = 0;
                pppppppuVar12 = pppppppuVar19;
                bVar18 = uStack_150._7_1_;
              }
              pppppppuVar29 = pppppppuStack_160;
              pppppppuVar19 = pppppppuStack_160;
              if (-1 < (char)bVar18) {
                pppppppuVar19 = (ushort *******)&pppppppuStack_160;
              }
              param_3 = pppppppuStack_158;
              if (-1 < (char)bVar18) {
                param_3 = (ushort *******)(ulong)bVar18;
              }
              if ((ushort *******)0x7ffffffffffffff7 < param_3) {
                FUN_10b2ecf74();
                unaff_x23 = pppppppuVar27;
                goto LAB_10b2f0d84;
              }
              if (param_3 < (ushort *******)0x17) {
                *(byte *)((long)extraout_x8 + 0x17) = (byte)param_3;
                pppppppuVar25 = extraout_x8;
                if (param_3 != (ushort *******)0x0) goto LAB_10b2f0cdc;
              }
              else {
                pppppppuVar8 = (ushort *******)0x19;
                if (((ulong)param_3 | 7) != 0x17) {
                  pppppppuVar8 = (ushort *******)(((ulong)param_3 | 7) + 1);
                }
                pppppppuVar25 = pppppppuVar8;
                __Znwm();
                extraout_x8[1] = (ushort ******)param_3;
                extraout_x8[2] = (ushort ******)((ulong)pppppppuVar8 | 0x8000000000000000);
                *extraout_x8 = (ushort ******)pppppppuVar25;
LAB_10b2f0cdc:
                _memmove(pppppppuVar25,pppppppuVar19,param_3);
              }
              *(byte *)((long)pppppppuVar25 + (long)param_3) = 0;
              bVar18 = *(byte *)((long)extraout_x8 + 0x17);
              pppppppuVar25 = (ushort *******)(ulong)bVar18;
              pppppppuVar19 = (ushort *******)*extraout_x8;
              unaff_x23 = (ushort *******)extraout_x8[1];
              pppppppuVar8 = unaff_x23;
              param_3 = pppppppuVar19;
              if (-1 < (char)bVar18) {
                pppppppuVar8 = pppppppuVar25;
                param_3 = extraout_x8;
              }
              pppppppuVar12 = (ushort *******)0x0;
              pppppppuVar9 = param_3;
              _memchr();
              if ((pppppppuVar9 == (ushort *******)0x0) ||
                 (pppppppuVar17 = (ushort *******)((long)pppppppuVar9 - (long)param_3),
                 pppppppuVar17 == (ushort *******)0xffffffffffffffff)) {
LAB_10b2f0d4c:
                if ((long)uStack_150 < 0) {
                  __ZdlPv(pppppppuStack_160);
                  pppppppuVar9 = pppppppuStack_160;
                }
                goto LAB_10b2f0acc;
              }
              if ((char)bVar18 < '\0') {
                if (pppppppuVar17 <= unaff_x23) {
                  extraout_x8[1] = (ushort ******)pppppppuVar17;
                  goto LAB_10b2f0d48;
                }
              }
              else if (pppppppuVar17 <= pppppppuVar25) {
                *(byte *)((long)extraout_x8 + 0x17) = (byte)pppppppuVar17;
                pppppppuVar19 = extraout_x8;
LAB_10b2f0d48:
                *(byte *)((long)pppppppuVar19 + (long)pppppppuVar17) = 0;
                goto LAB_10b2f0d4c;
              }
            }
            func_0x000104c03f14();
            pppppppuVar6 = (ushort *******)&pppppppuStack_1f0;
            pppppppuVar26 = (ushort *******)&pppppppuStack_1f0;
            uStack_1b0 = 0x7ffffffffffffff7;
            uStack_168 = 0x10b2f0d8c;
            pppppppuVar17 = pppppppuVar9;
            pppppppuVar24 = pppppppuVar12;
            psStack_1c0 = psVar21;
            pppppppuStack_1b8 = unaff_x27;
            pppppppuStack_1a8 = pppppppuVar15;
            pppppppuStack_1a0 = pppppppuVar29;
            pppppppuStack_198 = unaff_x23;
            pppppppuStack_190 = pppppppuVar25;
            pppppppuStack_188 = pppppppuVar19;
            pppppppuStack_180 = param_3;
            pppppppuStack_170 = pppppppuVar32;
            func_0x000107c2cab8(&pppppppuStack_1d8);
            pppppppuVar19 = pppppppuStack_1d0;
            if (-1 < (char)uStack_1c8._7_1_) {
              pppppppuVar19 = (ushort *******)(ulong)uStack_1c8._7_1_;
            }
            if (pppppppuVar19 == (ushort *******)0x0) {
              if ((char)uStack_1c8._7_1_ < '\0') {
                __ZdlPv(pppppppuStack_1d8);
                pppppppuVar17 = pppppppuStack_1d8;
              }
LAB_10b2f0e70:
              *extraout_x8_00 = (ushort ******)0x0;
              extraout_x8_00[1] = (ushort ******)0x0;
              extraout_x8_00[2] = (ushort ******)0x0;
              goto LAB_10b2f1278;
            }
            if ((char)uStack_1c8._7_1_ < '\0') {
              if (pppppppuStack_1d0 == (ushort *******)0x1) {
                bVar18 = *(byte *)pppppppuStack_1d8;
                unaff_x23 = (ushort *******)(ulong)bVar18;
                __ZdlPv();
                pppppppuVar17 = pppppppuStack_1d8;
joined_r0x00010b2f0e58:
                if (bVar18 == 0x2e) goto LAB_10b2f0e70;
              }
              else if (pppppppuStack_1d0 == (ushort *******)0x2) {
                uVar3 = *(ushort *)pppppppuStack_1d8;
                unaff_x23 = (ushort *******)(ulong)uVar3;
                pppppppuVar29 = (ushort *******)0x2e2e;
                __ZdlPv();
                pppppppuVar17 = pppppppuStack_1d8;
joined_r0x00010b2f0e04:
                if (uVar3 == 0x2e2e) goto LAB_10b2f0e70;
              }
              else {
                __ZdlPv();
              }
            }
            else {
              if (uStack_1c8._7_1_ == 1) {
                bVar18 = (byte)pppppppuStack_1d8;
                goto joined_r0x00010b2f0e58;
              }
              if (uStack_1c8._7_1_ == 2) {
                uVar3 = (ushort)pppppppuStack_1d8;
                goto joined_r0x00010b2f0e04;
              }
            }
            pppppppuStack_1d0 = (ushort *******)0xaaaaaaaaaaaaaaaa;
            uStack_1c8 = (ushort ******)0xaaaaaaaaaaaaaaaa;
            pppppppuStack_1d8 = (ushort *******)0xaaaaaaaaaaaaaaaa;
            pppppppuVar17 = (ushort *******)&pppppppuStack_1d8;
            pppppppuVar24 = pppppppuVar9;
            FUN_10b2f067c();
            pppppppuVar25 = pppppppuStack_1d0;
            pppppppuVar19 = pppppppuStack_1d8;
            if ((pppppppuVar8 == (ushort *******)0x0) ||
               ((pppppppuVar8 == (ushort *******)0x1 && (*(byte *)pppppppuVar12 == 0x2e)))) {
              extraout_x8_00[1] = (ushort ******)pppppppuStack_1d0;
              *extraout_x8_00 = (ushort ******)pppppppuStack_1d8;
              extraout_x8_00[2] = uStack_1c8;
              goto LAB_10b2f1278;
            }
            uStack_1e8 = 0xaaaaaaaaaaaa;
            uStack_1e2 = 0xaaaa;
            uStack_1e0 = 0xaaaaaaaaaaaa;
            uStack_1da = 0xaa;
            bStack_1d9 = 0xaa;
            pppppppuStack_1f0 = (ushort *******)0xaaaaaaaaaaaaaaaa;
            if ((long)uStack_1c8 < 0) {
              pcVar34 = (code *)0x10b2f0f44;
              pppppppuVar15 = pppppppuStack_1d8;
              pppppppuVar17 = pppppppuStack_1d0;
              pppppppuVar24 = extraout_x8_00;
              pppppppuVar19 = pppppppuVar12;
              pppppppuVar25 = pppppppuVar9;
              pppppppuVar32 = &pppppppuStack_170;
              goto code_r0x000100033dac;
            }
            uStack_1e8 = SUB86(pppppppuStack_1d0,0);
            uStack_1e2 = (undefined2)((ulong)pppppppuStack_1d0 >> 0x30);
            pppppppuStack_1f0 = pppppppuStack_1d8;
            uStack_1e0 = SUB86(uStack_1c8,0);
            uStack_1da = (undefined1)((ulong)uStack_1c8 >> 0x30);
            bStack_1d9 = uStack_1c8._7_1_;
            if (*(byte *)pppppppuVar12 == 0x2e) {
joined_r0x00010b2f0f00:
              pppppppuVar26 = (ushort *******)(long)(char)bStack_1d9;
              if ((long)pppppppuVar26 < 0) {
LAB_10b2f1090:
                pppppppuVar19 = pppppppuStack_1f0;
                pppppppuVar26 = (ushort *******)CONCAT26(uStack_1e2,uStack_1e8);
                uVar22 = CONCAT17(bStack_1d9,CONCAT16(uStack_1da,uStack_1e0)) & 0x7fffffffffffffff;
                uVar28 = uVar22 - 1;
                if ((ushort *******)(uVar28 - (long)pppppppuVar26) < pppppppuVar8) {
                  pbVar20 = (byte *)(((long)pppppppuVar8 - uVar28) + (long)pppppppuVar26);
                  if ((byte *)(0x7ffffffffffffff7 - uVar22) < pbVar20) goto LAB_10b2f12d8;
                  if (uVar28 < 0x3ffffffffffffff3) goto LAB_10b2f10d0;
                  bVar7 = false;
                  pppppppuVar15 = (ushort *******)0x7ffffffffffffff7;
                  pppppppuVar25 = pppppppuVar15;
                  __Znwm();
joined_r0x00010b2f1110:
                  if (pppppppuVar26 != (ushort *******)0x0) {
                    _memmove(pppppppuVar25,pppppppuVar19,pppppppuVar26);
                  }
                  pppppppuVar17 = (ushort *******)((long)pppppppuVar25 + (long)pppppppuVar26);
                  _memmove(pppppppuVar17,pppppppuVar12,pppppppuVar8);
                  if (!bVar7) {
                    pppppppuVar17 = pppppppuVar19;
                    __ZdlPv();
                  }
                  bStack_1d9 = (byte)((ulong)pppppppuVar15 >> 0x38) | 0x80;
                  pppppppuVar8 = (ushort *******)((long)pppppppuVar26 + (long)pppppppuVar8);
                  uStack_1e8 = SUB86(pppppppuVar8,0);
                  uStack_1e2 = (undefined2)((ulong)pppppppuVar8 >> 0x30);
                  uStack_1e0 = SUB86(pppppppuVar15,0);
                  uStack_1da = (undefined1)((ulong)pppppppuVar15 >> 0x30);
                  *(byte *)((long)pppppppuVar25 + (long)pppppppuVar8) = 0;
                  pppppppuVar24 = pppppppuVar12;
                  pppppppuStack_1f0 = pppppppuVar25;
                }
                else {
LAB_10b2f1160:
                  pppppppuVar17 = (ushort *******)((long)pppppppuVar19 + (long)pppppppuVar26);
                  _memmove(pppppppuVar17,pppppppuVar12,pppppppuVar8);
                  pbVar20 = (byte *)((long)pppppppuVar26 + (long)pppppppuVar8);
                  if ((char)bStack_1d9 < '\0') {
                    uStack_1e8 = SUB86(pbVar20,0);
                    uStack_1e2 = (undefined2)((ulong)pbVar20 >> 0x30);
                  }
                  else {
                    bStack_1d9 = (byte)pbVar20 & 0x7f;
                  }
                  *(byte *)((long)pppppppuVar19 + (long)pbVar20) = 0;
                  pppppppuVar8 = (ushort *******)CONCAT26(uStack_1e2,uStack_1e8);
                  pppppppuVar24 = pppppppuVar12;
                }
                pppppppuVar29 = pppppppuStack_1f0;
                pppppppuVar12 = pppppppuStack_1f0;
                if (-1 < (char)bStack_1d9) {
                  pppppppuVar12 = (ushort *******)&pppppppuStack_1f0;
                }
                if (-1 < (char)bStack_1d9) {
                  pppppppuVar8 = (ushort *******)(ulong)bStack_1d9;
                }
                if ((ushort *******)0x7ffffffffffffff7 < pppppppuVar8) {
                  FUN_10b2ecf74();
                  unaff_x23 = pppppppuVar19;
                  goto LAB_10b2f12d8;
                }
                if (pppppppuVar8 < (ushort *******)0x17) {
                  *(byte *)((long)extraout_x8_00 + 0x17) = (byte)pppppppuVar8;
                  pppppppuVar25 = extraout_x8_00;
                  if (pppppppuVar8 != (ushort *******)0x0) goto LAB_10b2f11f8;
                }
                else {
                  pppppppuVar19 = (ushort *******)0x19;
                  if (((ulong)pppppppuVar8 | 7) != 0x17) {
                    pppppppuVar19 = (ushort *******)(((ulong)pppppppuVar8 | 7) + 1);
                  }
                  pppppppuVar25 = pppppppuVar19;
                  __Znwm();
                  extraout_x8_00[1] = (ushort ******)pppppppuVar8;
                  extraout_x8_00[2] = (ushort ******)((ulong)pppppppuVar19 | 0x8000000000000000);
                  *extraout_x8_00 = (ushort ******)pppppppuVar25;
LAB_10b2f11f8:
                  _memmove(pppppppuVar25,pppppppuVar12,pppppppuVar8);
                }
                *(byte *)((long)pppppppuVar25 + (long)pppppppuVar8) = 0;
                bVar18 = *(byte *)((long)extraout_x8_00 + 0x17);
                pppppppuVar26 = (ushort *******)(ulong)bVar18;
                pppppppuVar12 = (ushort *******)*extraout_x8_00;
                unaff_x23 = (ushort *******)extraout_x8_00[1];
                pppppppuVar19 = unaff_x23;
                pppppppuVar8 = pppppppuVar12;
                if (-1 < (char)bVar18) {
                  pppppppuVar19 = pppppppuVar26;
                  pppppppuVar8 = extraout_x8_00;
                }
                pppppppuVar24 = (ushort *******)0x0;
                pppppppuVar17 = pppppppuVar8;
                _memchr(pppppppuVar8,0,pppppppuVar19);
                if ((pppppppuVar17 == (ushort *******)0x0) ||
                   (pppppppuVar19 = (ushort *******)((long)pppppppuVar17 - (long)pppppppuVar8),
                   pppppppuVar19 == (ushort *******)0xffffffffffffffff)) {
LAB_10b2f1268:
                  if ((char)bStack_1d9 < '\0') {
                    pppppppuVar17 = pppppppuStack_1f0;
                    __ZdlPv(pppppppuStack_1f0);
                  }
                  if ((long)uStack_1c8 < 0) {
                    __ZdlPv(pppppppuStack_1d8);
                    pppppppuVar17 = pppppppuStack_1d8;
                  }
LAB_10b2f1278:
                  auVar42._8_8_ = pppppppuVar24;
                  auVar42._0_8_ = pppppppuVar17;
                  return auVar42;
                }
                if ((char)bVar18 < '\0') {
                  if (pppppppuVar19 <= unaff_x23) {
                    extraout_x8_00[1] = (ushort ******)pppppppuVar19;
                    goto LAB_10b2f1264;
                  }
                }
                else if (pppppppuVar19 <= pppppppuVar26) {
                  *(byte *)((long)extraout_x8_00 + 0x17) = (byte)pppppppuVar19;
                  pppppppuVar12 = extraout_x8_00;
LAB_10b2f1264:
                  *(byte *)((long)pppppppuVar12 + (long)pppppppuVar19) = 0;
                  goto LAB_10b2f1268;
                }
              }
              else {
LAB_10b2f0f04:
                pppppppuVar19 = (ushort *******)&pppppppuStack_1f0;
                if (pppppppuVar8 <= (ushort *******)(0x16 - (long)pppppppuVar26))
                goto LAB_10b2f1160;
                pbVar20 = (byte *)((long)pppppppuVar8 + (long)pppppppuVar26) + -0x16;
                if (pbVar20 < (byte *)0x7fffffffffffffe1) {
                  uVar28 = 0x16;
                  pppppppuVar19 = (ushort *******)&pppppppuStack_1f0;
LAB_10b2f10d0:
                  pbVar2 = pbVar20 + uVar28;
                  if (pbVar20 + uVar28 <= (byte *)(uVar28 * 2)) {
                    pbVar2 = (byte *)(uVar28 * 2);
                  }
                  pppppppuVar25 = (ushort *******)0x19;
                  if (((ulong)pbVar2 | 7) != 0x17) {
                    pppppppuVar25 = (ushort *******)(((ulong)pbVar2 | 7) + 1);
                  }
                  pppppppuVar15 = (ushort *******)0x17;
                  if ((byte *)0x16 < pbVar2) {
                    pppppppuVar15 = pppppppuVar25;
                  }
                  bVar7 = uVar28 == 0x16;
                  pppppppuVar25 = pppppppuVar15;
                  __Znwm();
                  goto joined_r0x00010b2f1110;
                }
LAB_10b2f12d8:
                func_0x000104bd47d4();
              }
              func_0x000104c03f14();
              pppppppuStack_238 = pppppppuVar15;
            }
            else {
              if (-1 < (long)(char)uStack_1c8._7_1_) {
                pppppppuVar17 = (ushort *******)&pppppppuStack_1f0;
                pppppppuVar15 = (ushort *******)(long)(char)uStack_1c8._7_1_;
                if (uStack_1c8._7_1_ == 0x16) {
                  unaff_x23 = (ushort *******)0x30;
                  pppppppuVar17 = (ushort *******)0x30;
                  __Znwm();
                  pppppppuVar17[1] = (ushort ******)CONCAT26(uStack_1e2,uStack_1e8);
                  *pppppppuVar17 = (ushort ******)pppppppuStack_1f0;
                  *(ulong *)((long)pppppppuVar17 + 0xe) = CONCAT62(uStack_1e0,uStack_1e2);
                  pppppppuVar25 = (ushort *******)0x16;
                  pppppppuVar26 = (ushort *******)0x16;
                  pppppppuVar19 = pppppppuVar29;
LAB_10b2f1048:
                  bStack_1d9 = (byte)((ulong)unaff_x23 >> 0x38) | 0x80;
                  uStack_1e8 = SUB86(pppppppuVar26,0);
                  uStack_1e2 = (undefined2)((ulong)pppppppuVar26 >> 0x30);
                  uStack_1e0 = SUB86(unaff_x23,0);
                  uStack_1da = (undefined1)((ulong)unaff_x23 >> 0x30);
                  pppppppuVar29 = pppppppuVar19;
                  pppppppuVar15 = pppppppuVar25;
                  pppppppuStack_1f0 = pppppppuVar17;
                }
LAB_10b2f1054:
                *(byte *)((long)pppppppuVar17 + (long)pppppppuVar15) = 0x2e;
                pbVar20 = (byte *)((long)pppppppuVar15 + 1);
                if ((char)bStack_1d9 < '\0') {
                  uStack_1e8 = SUB86(pbVar20,0);
                  uStack_1e2 = (undefined2)((ulong)pbVar20 >> 0x30);
                  *(byte *)((long)pppppppuVar17 + (long)pbVar20) = 0;
                  goto joined_r0x00010b2f0f00;
                }
                bStack_1d9 = (byte)pbVar20 & 0x7f;
                *(byte *)((long)pppppppuVar17 + (long)pbVar20) = 0;
                pppppppuVar26 = (ushort *******)(long)(char)bStack_1d9;
                if (-1 < (long)pppppppuVar26) goto LAB_10b2f0f04;
                goto LAB_10b2f1090;
              }
              pppppppuVar26 = (ushort *******)(((ulong)uStack_1c8 & 0x7fffffffffffffff) - 1);
              if (pppppppuVar26 != pppppppuStack_1d0) {
                pppppppuVar17 = pppppppuStack_1d8;
                pppppppuVar15 = pppppppuStack_1d0;
                if (-1 < (long)uStack_1c8) {
                  pppppppuVar17 = (ushort *******)&pppppppuStack_1f0;
                }
                goto LAB_10b2f1054;
              }
              pppppppuStack_238 = pppppppuStack_1d0;
              if (pppppppuVar26 != (ushort *******)0x7ffffffffffffff7) {
                unaff_x23 = (ushort *******)0x7ffffffffffffff7;
                if (pppppppuVar26 < (ushort *******)0x3ffffffffffffff3) {
                  if (pppppppuVar26 == (ushort *******)0x0) {
                    unaff_x23 = (ushort *******)0x17;
                  }
                  else {
                    uVar28 = (long)pppppppuVar26 * 2 | 7;
                    pppppppuVar15 = (ushort *******)0x19;
                    if (uVar28 != 0x17) {
                      pppppppuVar15 = (ushort *******)(uVar28 + 1);
                    }
                    unaff_x23 = (ushort *******)0x17;
                    if ((ushort *******)0xb < pppppppuVar26) {
                      unaff_x23 = pppppppuVar15;
                    }
                  }
                }
                pppppppuVar17 = unaff_x23;
                __Znwm();
                if ((pppppppuVar26 == (ushort *******)0x0) ||
                   (pppppppuVar24 = pppppppuVar19, _memmove(), pppppppuVar26 != (ushort *******)0x16
                   )) {
                  __ZdlPv(pppppppuVar19);
                }
                goto LAB_10b2f1048;
              }
            }
            func_0x000104c4f6b8();
            bVar18 = *(byte *)((long)pppppppuVar24 + 0x17);
            pppppppuVar15 = (ushort *******)*pppppppuVar24;
            if (-1 < (long)(char)bVar18) {
              pppppppuVar15 = pppppppuVar24;
            }
            ppppppuVar16 = pppppppuVar24[1];
            if (-1 < (char)bVar18) {
              ppppppuVar16 = (ushort ******)(long)(char)bVar18;
            }
            uStack_240 = 0x7ffffffffffffff7;
            pcStack_1f8 = FUN_10b2f12e4;
            pppppppuStack_260 = (ushort *******)0x0;
            ppppppuStack_258 = (ushort ******)0x0;
            uStack_250 = 0;
            pppppppuStack_230 = pppppppuVar29;
            pppppppuStack_228 = unaff_x23;
            pppppppuStack_220 = pppppppuVar26;
            pppppppuStack_218 = pppppppuVar12;
            pppppppuStack_210 = pppppppuVar8;
            pppppppuStack_200 = &pppppppuStack_170;
            if (ppppppuVar16 == (ushort ******)0x0) {
code_r0x00010014804c:
              bVar18 = *(byte *)((long)pppppppuVar17 + 0x17);
joined_r0x00010014805c:
              ppppppuVar30 = (ushort ******)(long)(char)bVar18;
              pppppppuVar25 = pppppppuVar17;
              ppppppuVar14 = ppppppuVar30;
              if ((long)ppppppuVar30 < 0) {
                pppppppuVar25 = (ushort *******)*pppppppuVar17;
                ppppppuVar14 = pppppppuVar17[1];
              }
              pppppppuVar19 = (ushort *******)&UNK_10e573fb0;
              func_0x000107c610b0(pppppppuVar25,&UNK_10e573fb0,ppppppuVar14 != (ushort ******)0x0);
              pppppppuVar26 = extraout_x8_01;
              if ((ppppppuVar14 == (ushort ******)0x1 && (int)pppppppuVar25 == 0) &&
                  ppppppuVar16 != (ushort ******)0x0) {
                if (ppppppuVar16 < (ushort ******)0x7ffffffffffffff8) {
                  if (ppppppuVar16 < (ushort ******)0x17) {
                    *(byte *)((long)extraout_x8_01 + 0x17) = (byte)ppppppuVar16;
                  }
                  else {
                    pppppppuVar19 = (ushort *******)0x19;
                    if (((ulong)ppppppuVar16 | 7) != 0x17) {
                      pppppppuVar19 = (ushort *******)(((ulong)ppppppuVar16 | 7) + 1);
                    }
                    pppppppuVar26 = pppppppuVar19;
                    func_0x000107c60e20();
                    extraout_x8_01[1] = ppppppuVar16;
                    extraout_x8_01[2] = (ushort ******)((ulong)pppppppuVar19 | 0x8000000000000000);
                    *extraout_x8_01 = (ushort ******)pppppppuVar26;
                  }
                  goto code_r0x000107c610b8;
                }
                goto code_r0x0001001484cc;
              }
              extraout_x8_01[1] = (ushort ******)0xaaaaaaaaaaaaaaaa;
              extraout_x8_01[2] = (ushort ******)0xaaaaaaaaaaaaaaaa;
              *extraout_x8_01 = (ushort ******)0xaaaaaaaaaaaaaaaa;
              ppppppuVar16 = pppppppuVar17[1];
              pppppppuVar15 = (ushort *******)*pppppppuVar17;
              if (-1 < (char)bVar18) {
                ppppppuVar16 = ppppppuVar30;
                pppppppuVar15 = pppppppuVar17;
              }
              if ((ushort ******)0x7ffffffffffffff7 < ppppppuVar16) goto code_r0x0001001484cc;
              if ((ushort ******)0x16 < ppppppuVar16) {
                pppppppuVar19 = (ushort *******)0x19;
                if (((ulong)ppppppuVar16 | 7) != 0x17) {
                  pppppppuVar19 = (ushort *******)(((ulong)ppppppuVar16 | 7) + 1);
                }
                pppppppuVar26 = pppppppuVar19;
                func_0x000107c60e20();
                extraout_x8_01[1] = ppppppuVar16;
                extraout_x8_01[2] = (ushort ******)((ulong)pppppppuVar19 | 0x8000000000000000);
                *extraout_x8_01 = (ushort ******)pppppppuVar26;
                goto code_r0x000107c610b8;
              }
              *(byte *)((long)extraout_x8_01 + 0x17) = (byte)ppppppuVar16;
              if (ppppppuVar16 != (ushort ******)0x0) goto code_r0x000107c610b8;
              *(byte *)extraout_x8_01 = 0;
              bVar18 = *(byte *)((long)extraout_x8_01 + 0x17);
              pppppppuVar8 = (ushort *******)*extraout_x8_01;
              ppppppuVar14 = extraout_x8_01[1];
              ppppppuVar16 = ppppppuVar14;
              pppppppuVar15 = pppppppuVar8;
              if (-1 < (char)bVar18) {
                ppppppuVar16 = (ushort ******)(ulong)bVar18;
                pppppppuVar15 = extraout_x8_01;
              }
              pppppppuVar19 = (ushort *******)0x0;
              pppppppuVar17 = pppppppuVar15;
              func_0x000107c610ac(pppppppuVar15,0,ppppppuVar16);
              pppppppuVar25 = extraout_x8_01;
              if ((pppppppuVar17 == (ushort *******)0x0) ||
                 (ppppppuVar16 = (ushort ******)((long)pppppppuVar17 - (long)pppppppuVar15),
                 ppppppuVar16 == (ushort ******)0xffffffffffffffff)) goto code_r0x0001001484d8;
              pppppppuVar25 = pppppppuVar17;
              if ((char)bVar18 < '\0') {
                if (ppppppuVar16 <= ppppppuVar14) {
                  extraout_x8_01[1] = ppppppuVar16;
                  goto code_r0x00010014824c;
                }
              }
              else if (ppppppuVar16 <= (ushort ******)(ulong)bVar18) {
                *(byte *)((long)extraout_x8_01 + 0x17) = (byte)ppppppuVar16;
                pppppppuVar8 = extraout_x8_01;
code_r0x00010014824c:
                *(byte *)((long)pppppppuVar8 + (long)ppppppuVar16) = 0;
                pppppppuVar25 = extraout_x8_01;
                goto code_r0x0001001484d8;
              }
            }
            else {
              pppppppuVar19 = (ushort *******)0x0;
              pppppppuVar25 = pppppppuVar15;
              func_0x000107c610ac(pppppppuVar15,0,ppppppuVar16);
              if ((pppppppuVar25 == (ushort *******)0x0) ||
                 (ppppppuVar14 = (ushort ******)((long)pppppppuVar25 - (long)pppppppuVar15),
                 ppppppuVar14 == (ushort ******)0xffffffffffffffff)) goto code_r0x00010014804c;
              if (ppppppuVar14 <= ppppppuVar16) {
                ppppppuVar16 = ppppppuVar14;
              }
              if (ppppppuVar16 < (ushort ******)0x7ffffffffffffff8) {
                if (ppppppuVar16 < (ushort ******)0x17) {
                  uStack_268 = CONCAT17((char)ppppppuVar16,(undefined7)uStack_268);
                  pppppppuVar8 = (ushort *******)&pppppppuStack_278;
                  if (pppppppuVar15 != pppppppuVar25) goto code_r0x000100148218;
                  *(byte *)((long)pppppppuVar8 + (long)ppppppuVar16) = 0;
                  pppppppuVar8 = pppppppuStack_260;
                }
                else {
                  pppppppuVar19 = (ushort *******)0x19;
                  if (((ulong)ppppppuVar16 | 7) != 0x17) {
                    pppppppuVar19 = (ushort *******)(((ulong)ppppppuVar16 | 7) + 1);
                  }
                  pppppppuVar8 = pppppppuVar19;
                  func_0x000107c60e20();
                  uStack_268 = (ulong)pppppppuVar19 | 0x8000000000000000;
                  pppppppuStack_278 = pppppppuVar8;
                  ppppppuStack_270 = ppppppuVar16;
code_r0x000100148218:
                  func_0x000107c610b8(pppppppuVar8,pppppppuVar15,ppppppuVar16);
                  *(byte *)((long)pppppppuVar8 + (long)ppppppuVar16) = 0;
                  pppppppuVar19 = pppppppuVar15;
                  pppppppuVar8 = pppppppuStack_260;
                }
                pppppppuStack_260 = pppppppuVar8;
                if ((long)uStack_250 < 0) {
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)PTR___ZdlPv_110352258)(pppppppuVar8);
                  auVar43._8_8_ = pppppppuVar19;
                  auVar43._0_8_ = pppppppuVar8;
                  return auVar43;
                }
                uStack_250._7_1_ = (char)(uStack_268 >> 0x38);
                pppppppuVar15 = pppppppuStack_278;
                if (-1 < (long)uStack_250._7_1_) {
                  pppppppuVar15 = (ushort *******)&pppppppuStack_260;
                }
                ppppppuVar16 = ppppppuStack_270;
                if (-1 < (long)uStack_268) {
                  ppppppuVar16 = (ushort ******)(long)uStack_250._7_1_;
                }
                bVar18 = *(byte *)((long)pppppppuVar17 + 0x17);
                pppppppuStack_260 = pppppppuStack_278;
                ppppppuStack_258 = ppppppuStack_270;
                uStack_250 = uStack_268;
                goto joined_r0x00010014805c;
              }
code_r0x0001001484cc:
              func_0x000107c35c54();
            }
            func_0x000104c03f14();
            func_0x000104bd47d4();
code_r0x0001001484d8:
            ppppppuVar14 = pppppppuVar25[1];
            if (-1 < (char)*(byte *)((long)pppppppuVar25 + 0x17)) {
              ppppppuVar14 = (ushort ******)(ulong)*(byte *)((long)pppppppuVar25 + 0x17);
            }
            pppppppuVar8 = pppppppuVar25;
            if ((ushort ******)0x1 < ppppppuVar14) {
              ppppppuVar30 = (ushort ******)0xffffffffffffffff;
              do {
                pppppppuVar15 = pppppppuVar25;
                if ((char)*(byte *)((long)pppppppuVar25 + 0x17) < '\0') {
                  pppppppuVar15 = (ushort *******)*pppppppuVar25;
                }
                if (((byte *)((long)pppppppuVar15 + (long)ppppppuVar14))[-1] != 0x2f) break;
                bVar18 = *(byte *)((long)pppppppuVar25 + 0x17);
                ppppppuVar16 = (ushort ******)(ulong)bVar18;
                if ((ppppppuVar14 == (ushort ******)0x2) && (ppppppuVar30 != (ushort ******)0x3)) {
                  pppppppuVar15 = pppppppuVar25;
                  if ((char)bVar18 < '\0') {
                    pppppppuVar15 = (ushort *******)*pppppppuVar25;
                  }
                  if (*(byte *)pppppppuVar15 == 0x2f) break;
                }
                ppppppuVar31 = (ushort ******)((long)ppppppuVar14 - 1);
                if ((char)bVar18 < '\0') {
                  ppppppuVar16 = pppppppuVar25[1];
                  pppppppuVar17 = (ushort *******)((long)ppppppuVar31 - (long)ppppppuVar16);
                  if (ppppppuVar31 < ppppppuVar16 || pppppppuVar17 == (ushort *******)0x0) {
                    pppppppuVar15 = (ushort *******)*pppppppuVar25;
                    pppppppuVar25[1] = ppppppuVar31;
                    goto code_r0x00010014852c;
                  }
                  if ((ushort ******)((long)ppppppuVar16 + 1U) == ppppppuVar14)
                  goto code_r0x000100148534;
                  uVar28 = ((ulong)pppppppuVar25[2] & 0x7fffffffffffffff) - 1;
                  uVar13 = (uint)((ulong)pppppppuVar25[2] >> 0x3f);
                  if ((ushort *******)(uVar28 - (long)ppppppuVar16) < pppppppuVar17)
                  goto code_r0x0001001485c4;
code_r0x00010014866c:
                  pppppppuVar15 = pppppppuVar25;
                  if (uVar13 != 0) goto code_r0x000100148674;
code_r0x000100148678:
                  pppppppuVar8 = (ushort *******)((long)pppppppuVar15 + (long)ppppppuVar16);
                  pppppppuVar19 = pppppppuVar17;
                  func_0x000107c60ee4();
                  ppppppuVar16 = (ushort ******)((long)ppppppuVar16 + (long)pppppppuVar17);
                  if ((char)*(byte *)((long)pppppppuVar25 + 0x17) < '\0') {
                    pppppppuVar25[1] = ppppppuVar16;
                    *(byte *)((long)pppppppuVar15 + (long)ppppppuVar16) = 0;
                  }
                  else {
                    *(byte *)((long)pppppppuVar25 + 0x17) = (byte)ppppppuVar16 & 0x7f;
                    *(byte *)((long)pppppppuVar15 + (long)ppppppuVar16) = 0;
                  }
                }
                else if (ppppppuVar16 < ppppppuVar31) {
                  pppppppuVar17 = (ushort *******)((long)ppppppuVar14 + ~(ulong)ppppppuVar16);
                  if (pppppppuVar17 != (ushort *******)0x0) {
                    uVar13 = 0;
                    uVar28 = 0x16;
                    if (pppppppuVar17 <= (ushort *******)(0x16 - (long)ppppppuVar16))
                    goto code_r0x00010014866c;
code_r0x0001001485c4:
                    if ((byte *)((long)ppppppuVar16 + ((long)pppppppuVar17 - uVar28)) <=
                        (byte *)(0x7ffffffffffffff7 - uVar28)) {
                      if ((char)bVar18 < '\0') {
                        pppppppuVar15 = (ushort *******)*pppppppuVar25;
                        if (0x3ffffffffffffff2 < uVar28) goto code_r0x0001001485f8;
code_r0x0001001486cc:
                        pbVar20 = (byte *)((long)ppppppuVar16 + (long)pppppppuVar17);
                        if ((byte *)((long)ppppppuVar16 + (long)pppppppuVar17) <=
                            (byte *)(uVar28 * 2)) {
                          pbVar20 = (byte *)(uVar28 * 2);
                        }
                        pppppppuVar8 = (ushort *******)0x19;
                        if (((ulong)pbVar20 | 7) != 0x17) {
                          pppppppuVar8 = (ushort *******)(((ulong)pbVar20 | 7) + 1);
                        }
                        pppppppuVar19 = (ushort *******)0x17;
                        if ((byte *)0x16 < pbVar20) {
                          pppppppuVar19 = pppppppuVar8;
                        }
                        pppppppuVar26 = pppppppuVar19;
                        func_0x000107c60e20();
                      }
                      else {
                        pppppppuVar15 = pppppppuVar25;
                        if (uVar28 < 0x3ffffffffffffff3) goto code_r0x0001001486cc;
code_r0x0001001485f8:
                        pppppppuVar19 = (ushort *******)0x7ffffffffffffff7;
                        pppppppuVar26 = pppppppuVar19;
                        func_0x000107c60e20();
                      }
                      if (ppppppuVar16 == (ushort ******)0x0) {
                        if (uVar28 != 0x16) {
                          func_0x000107c60e14(pppppppuVar15);
                        }
                        pppppppuVar25[1] = (ushort ******)0x0;
                        pppppppuVar25[2] =
                             (ushort ******)((ulong)pppppppuVar19 | 0x8000000000000000);
                        *pppppppuVar25 = (ushort ******)pppppppuVar26;
                        ppppppuVar16 = (ushort ******)0x0;
code_r0x000100148674:
                        pppppppuVar15 = (ushort *******)*pppppppuVar25;
                        goto code_r0x000100148678;
                      }
                      goto code_r0x000107c610b8;
                    }
                    func_0x000104c4f6b8();
                    if (-1 < (char)*(byte *)((long)pppppppuVar8 + 0x17)) {
                      ppppppuVar14 = pppppppuVar19[1];
                      ppppppuVar16 = *pppppppuVar19;
                      pppppppuVar8[2] = pppppppuVar19[2];
                      pppppppuVar8[1] = ppppppuVar14;
                      *pppppppuVar8 = ppppppuVar16;
                      *(byte *)((long)pppppppuVar19 + 0x17) = 0;
                      *(byte *)pppppppuVar19 = 0;
                      auVar37._8_8_ = pppppppuVar19;
                      auVar37._0_8_ = pppppppuVar8;
                      return auVar37;
                    }
                    pppppppuVar8 = (ushort *******)*pppppppuVar8;
                    goto code_r0x00010bdbd7ac;
                  }
                }
                else {
                  *(byte *)((long)pppppppuVar25 + 0x17) = (byte)ppppppuVar31;
                  pppppppuVar15 = pppppppuVar25;
code_r0x00010014852c:
                  ((byte *)((long)pppppppuVar15 + (long)ppppppuVar14))[-1] = 0;
                }
code_r0x000100148534:
                ppppppuVar30 = ppppppuVar14;
                ppppppuVar14 = ppppppuVar31;
              } while ((ushort ******)0x1 < ppppppuVar31);
            }
            auVar36._8_8_ = pppppppuVar19;
            auVar36._0_8_ = pppppppuVar8;
            return auVar36;
          }
          pppppppuVar15 = (ushort *******)*pppppppuVar25;
          pppppppuVar17 = (ushort *******)pppppppuVar25[1];
          pcVar34 = (code *)0x10b2f09f8;
          pppppppuVar24 = extraout_x8;
          pppppppuVar8 = param_3;
        }
code_r0x000100033dac:
        *(ushort ********)((long)pppppppuVar6 + -0x30) = pppppppuVar25;
        *(ushort ********)((long)pppppppuVar6 + -0x28) = pppppppuVar19;
        *(ushort ********)((long)pppppppuVar6 + -0x20) = pppppppuVar8;
        *(ushort ********)((long)pppppppuVar6 + -0x18) = pppppppuVar24;
        *(undefined8 ********)((long)pppppppuVar6 + -0x10) = pppppppuVar32;
        *(code **)((long)pppppppuVar6 + -8) = pcVar34;
        if ((ushort *******)0x16 < pppppppuVar17) {
          if (pppppppuVar17 < (ushort *******)0x7ffffffffffffff7) {
            pppppppuVar19 = (ushort *******)0x19;
            if (((ulong)pppppppuVar17 | 7) != 0x17) {
              pppppppuVar19 = (ushort *******)(((ulong)pppppppuVar17 | 7) + 1);
            }
            puVar33 = &UNK_100033e00;
          }
          else {
            puVar33 = &UNK_100033e30;
            pppppppuVar19 = pppppppuVar15;
            func_0x000104bd47d4();
          }
          *(ushort ********)((long)pppppppuVar6 + -0x50) = pppppppuVar17;
          *(ushort ********)((long)pppppppuVar6 + -0x48) = pppppppuVar15;
          *(undefined1 **)((long)pppppppuVar6 + -0x40) = (undefined1 *)((long)pppppppuVar6 + -0x10);
          *(undefined **)((long)pppppppuVar6 + -0x38) = puVar33;
          pppppppuVar8 = pppppppuVar19;
          func_0x000107c60e20(pppppppuVar19);
          auVar35._8_8_ = pppppppuVar19;
          auVar35._0_8_ = pppppppuVar8;
          return auVar35;
        }
        *(byte *)((long)pppppppuVar26 + 0x17) = (byte)pppppppuVar17;
        ppppppuVar16 = (ushort ******)((long)pppppppuVar17 + 1);
code_r0x000107c610b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memmove_11034c660)(pppppppuVar26,pppppppuVar15,ppppppuVar16);
        auVar44._8_8_ = pppppppuVar15;
        auVar44._0_8_ = pppppppuVar26;
        return auVar44;
      }
    }
    else {
      if (pppppppuVar8 != (ushort *******)0x2) goto LAB_10b2f0100;
      if (*psVar21 != 0x2e2e) {
        pppppppuVar8 = (ushort *******)0x2;
        goto LAB_10b2f0104;
      }
    }
  }
  else {
    pppppppuVar8 = pppppppuVar19;
    psVar21 = param_1;
    if (cVar4 == '\x01') {
      if ((char)*param_1 != '.') goto LAB_10b2f0100;
    }
    else if ((cVar4 != '\x02') || (*param_1 != 0x2e2e)) {
LAB_10b2f0100:
      if (pppppppuVar8 != (ushort *******)0x0) goto LAB_10b2f0104;
    }
  }
LAB_10b2f0178:
  pppppppuVar25 = (ushort *******)0xffffffffffffffff;
LAB_10b2f017c:
  auVar38._8_8_ = param_2;
  auVar38._0_8_ = pppppppuVar25;
  return auVar38;
}



/* Entry: 10b2f067c; end: 10b2f08cf;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001001483ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010014840c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010014819c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b2f0f40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b2f09f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b2f0f44) */
/* WARNING: Removing unreachable block (ram,0x00010014823c) */
/* WARNING: Removing unreachable block (ram,0x0001001481a0) */
/* WARNING: Removing unreachable block (ram,0x0001001481b4) */
/* WARNING: Removing unreachable block (ram,0x0001001481b8) */
/* WARNING: Removing unreachable block (ram,0x0001001481cc) */
/* WARNING: Removing unreachable block (ram,0x0001001481d8) */
/* WARNING: Removing unreachable block (ram,0x00010014832c) */
/* WARNING: Removing unreachable block (ram,0x000100148334) */
/* WARNING: Removing unreachable block (ram,0x0001001481dc) */
/* WARNING: Removing unreachable block (ram,0x0001001481e4) */
/* WARNING: Removing unreachable block (ram,0x000100148754) */
/* WARNING: Removing unreachable block (ram,0x000100148258) */
/* WARNING: Removing unreachable block (ram,0x000100148260) */
/* WARNING: Removing unreachable block (ram,0x00010014827c) */
/* WARNING: Removing unreachable block (ram,0x000100148340) */
/* WARNING: Removing unreachable block (ram,0x000100148284) */
/* WARNING: Removing unreachable block (ram,0x000100148264) */
/* WARNING: Removing unreachable block (ram,0x000100148268) */
/* WARNING: Removing unreachable block (ram,0x000100148298) */
/* WARNING: Removing unreachable block (ram,0x0001001482a4) */
/* WARNING: Removing unreachable block (ram,0x0001001482ac) */
/* WARNING: Removing unreachable block (ram,0x0001001482c0) */
/* WARNING: Removing unreachable block (ram,0x0001001482c8) */
/* WARNING: Removing unreachable block (ram,0x0001001482d4) */
/* WARNING: Removing unreachable block (ram,0x0001001482fc) */
/* WARNING: Removing unreachable block (ram,0x000100148308) */
/* WARNING: Removing unreachable block (ram,0x000100148348) */
/* WARNING: Removing unreachable block (ram,0x000100148320) */
/* WARNING: Removing unreachable block (ram,0x00010014834c) */
/* WARNING: Removing unreachable block (ram,0x000100148278) */
/* WARNING: Removing unreachable block (ram,0x000100148354) */
/* WARNING: Removing unreachable block (ram,0x000100148428) */
/* WARNING: Removing unreachable block (ram,0x00010014842c) */
/* WARNING: Removing unreachable block (ram,0x000100148358) */
/* WARNING: Removing unreachable block (ram,0x000100148448) */
/* WARNING: Removing unreachable block (ram,0x00010014844c) */
/* WARNING: Removing unreachable block (ram,0x000100148454) */
/* WARNING: Removing unreachable block (ram,0x000100148480) */
/* WARNING: Removing unreachable block (ram,0x000100148474) */
/* WARNING: Removing unreachable block (ram,0x000100148484) */
/* WARNING: Removing unreachable block (ram,0x000100148370) */
/* WARNING: Removing unreachable block (ram,0x000100148388) */
/* WARNING: Removing unreachable block (ram,0x000100148390) */
/* WARNING: Removing unreachable block (ram,0x0001001483a4) */
/* WARNING: Removing unreachable block (ram,0x0001001483b0) */
/* WARNING: Removing unreachable block (ram,0x0001001483c0) */
/* WARNING: Removing unreachable block (ram,0x0001001483cc) */
/* WARNING: Removing unreachable block (ram,0x0001001483d0) */
/* WARNING: Removing unreachable block (ram,0x0001001483f0) */
/* WARNING: Removing unreachable block (ram,0x000100148410) */
/* WARNING: Removing unreachable block (ram,0x000100148488) */
/* WARNING: Removing unreachable block (ram,0x00010014848c) */
/* WARNING: Removing unreachable block (ram,0x0001001484ac) */
/* WARNING: Removing unreachable block (ram,0x000100148490) */
/* WARNING: Removing unreachable block (ram,0x000100148408) */
/* WARNING: Removing unreachable block (ram,0x0001001483e0) */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */
/* WARNING: Removing unreachable block (ram,0x00010b2f09f8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b2f067c(ushort *******param_1,ushort *******param_2,ushort *******param_3)

{
  ushort uVar1;
  bool bVar2;
  ushort *******pppppppuVar3;
  ushort *******pppppppuVar4;
  ushort *******pppppppuVar5;
  ushort *******pppppppuVar6;
  ushort *******pppppppuVar7;
  ushort ******ppppppuVar8;
  ushort *******pppppppuVar9;
  ushort *******pppppppuVar10;
  ushort *******extraout_x8;
  ushort ******ppppppuVar11;
  ulong uVar12;
  ushort *******extraout_x8_00;
  ushort *******extraout_x8_01;
  byte bVar13;
  uint uVar14;
  byte *pbVar15;
  ulong uVar16;
  ushort *******unaff_x19;
  byte *pbVar17;
  ushort *******unaff_x20;
  ushort *******unaff_x21;
  ushort *******unaff_x22;
  ushort *******pppppppuVar18;
  ushort *******pppppppuVar19;
  ushort *******unaff_x23;
  ushort *******pppppppuVar20;
  ushort ******ppppppuVar21;
  ushort *******unaff_x25;
  ushort ******ppppppuVar22;
  undefined8 *******unaff_x29;
  undefined *puVar23;
  undefined8 unaff_x30;
  ushort *******pppppppuStack_1f8;
  ushort ******ppppppuStack_1f0;
  undefined8 uStack_1e8;
  ushort *******pppppppuStack_1e0;
  ushort ******ppppppuStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  ushort *******pppppppuStack_1b8;
  ushort *******pppppppuStack_1b0;
  ushort *******pppppppuStack_1a8;
  ushort *******pppppppuStack_1a0;
  ushort *******pppppppuStack_198;
  ushort *******pppppppuStack_190;
  undefined8 *******pppppppuStack_180;
  code *pcStack_178;
  ushort *******pppppppuStack_170;
  undefined6 uStack_168;
  undefined2 uStack_162;
  undefined6 uStack_160;
  undefined1 uStack_15a;
  byte bStack_159;
  ushort *******pppppppuStack_158;
  ushort *******pppppppuStack_150;
  undefined8 uStack_148;
  undefined8 *******pppppppuStack_f0;
  undefined8 uStack_e8;
  ushort *******pppppppuStack_e0;
  ushort *******pppppppuStack_d8;
  undefined8 uStack_d0;
  undefined8 ******ppppppuStack_70;
  code *pcStack_68;
  ushort *******pppppppuStack_58;
  ushort *******pppppppuStack_50;
  undefined8 uStack_48;
  
  pppppppuVar5 = param_2;
  FUN_10b2eff1c(&pppppppuStack_58,param_2);
  pppppppuVar18 = pppppppuStack_50;
  if ((long)uStack_48 < 0) {
    __ZdlPv(pppppppuStack_58);
    if (pppppppuVar18 != (ushort *******)0x0) goto LAB_10b2f06c4;
LAB_10b2f0710:
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      ppppppuVar11 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = ppppppuVar11;
      param_1[2] = param_2[2];
      return;
    }
    pppppppuVar19 = (ushort *******)register0x00000008;
    pppppppuVar9 = (ushort *******)*param_2;
    pppppppuVar10 = (ushort *******)param_2[1];
    param_3 = unaff_x20;
    pppppppuVar5 = unaff_x21;
    pppppppuVar18 = unaff_x22;
  }
  else {
    if (uStack_48._7_1_ == '\0') goto LAB_10b2f0710;
LAB_10b2f06c4:
    pppppppuVar18 = param_2;
    FUN_10b2f005c();
    if (pppppppuVar18 == (ushort *******)0xffffffffffffffff) goto LAB_10b2f0710;
    pppppppuVar9 = (ushort *******)(long)(char)*(byte *)((long)param_2 + 0x17);
    pppppppuVar10 = param_2;
    if ((long)pppppppuVar9 < 0) {
      pppppppuVar10 = (ushort *******)*param_2;
      pppppppuVar9 = (ushort *******)param_2[1];
    }
    pppppppuVar20 = (ushort *******)0x7ffffffffffffff7;
    if (pppppppuVar18 <= pppppppuVar9) {
      pppppppuVar9 = pppppppuVar18;
    }
    if (pppppppuVar9 < (ushort *******)0x7ffffffffffffff8) {
      if (pppppppuVar9 < (ushort *******)0x17) {
        uStack_48 = CONCAT17((char)pppppppuVar9,(undefined7)uStack_48);
        pppppppuVar19 = (ushort *******)&pppppppuStack_58;
        if (pppppppuVar9 != (ushort *******)0x0) goto LAB_10b2f0788;
      }
      else {
        unaff_x23 = (ushort *******)0x19;
        if (((ulong)pppppppuVar9 | 7) != 0x17) {
          unaff_x23 = (ushort *******)(((ulong)pppppppuVar9 | 7) + 1);
        }
        pppppppuVar19 = unaff_x23;
        __Znwm();
        uStack_48 = (ulong)unaff_x23 | 0x8000000000000000;
        pppppppuStack_58 = pppppppuVar19;
        pppppppuStack_50 = pppppppuVar9;
LAB_10b2f0788:
        pppppppuVar18 = pppppppuVar19;
        param_3 = pppppppuVar9;
        _memmove();
        pppppppuVar5 = pppppppuVar10;
      }
      *(byte *)((long)pppppppuVar19 + (long)pppppppuVar9) = 0;
      pppppppuVar9 = pppppppuStack_58;
      if (-1 < (long)uStack_48._7_1_) {
        pppppppuVar9 = (ushort *******)&pppppppuStack_58;
      }
      pppppppuVar10 = pppppppuStack_50;
      if (-1 < (long)uStack_48) {
        pppppppuVar10 = (ushort *******)(long)uStack_48._7_1_;
      }
      if ((ushort *******)0x7ffffffffffffff7 < pppppppuVar10) goto LAB_10b2f08c8;
      if ((ushort *******)0x16 < pppppppuVar10) {
        unaff_x23 = (ushort *******)0x19;
        if (((ulong)pppppppuVar10 | 7) != 0x17) {
          unaff_x23 = (ushort *******)(((ulong)pppppppuVar10 | 7) + 1);
        }
        pppppppuVar18 = unaff_x23;
        __Znwm();
        param_1[1] = (ushort ******)pppppppuVar10;
        param_1[2] = (ushort ******)((ulong)unaff_x23 | 0x8000000000000000);
        *param_1 = (ushort ******)pppppppuVar18;
LAB_10b2f0824:
        _memmove(pppppppuVar18,pppppppuVar9,pppppppuVar10);
        *(byte *)((long)pppppppuVar18 + (long)pppppppuVar10) = 0;
        pppppppuVar9 = (ushort *******)(long)(char)*(byte *)((long)param_1 + 0x17);
        if (-1 < (long)pppppppuVar9) goto LAB_10b2f07e0;
LAB_10b2f0840:
        pppppppuVar10 = (ushort *******)*param_1;
        param_3 = (ushort *******)param_1[1];
        pppppppuVar5 = (ushort *******)0x0;
        pppppppuVar18 = pppppppuVar10;
        _memchr();
        if (pppppppuVar18 != (ushort *******)0x0) goto LAB_10b2f0854;
LAB_10b2f088c:
        pppppppuVar18 = pppppppuStack_58;
        if (-1 < (long)uStack_48) {
          return;
        }
        goto code_r0x00010bdbd7ac;
      }
      *(byte *)((long)param_1 + 0x17) = (byte)pppppppuVar10;
      pppppppuVar18 = param_1;
      if (pppppppuVar10 != (ushort *******)0x0) goto LAB_10b2f0824;
      *(byte *)param_1 = 0;
      pppppppuVar9 = (ushort *******)(long)(char)*(byte *)((long)param_1 + 0x17);
      if ((long)pppppppuVar9 < 0) goto LAB_10b2f0840;
LAB_10b2f07e0:
      pppppppuVar5 = (ushort *******)0x0;
      pppppppuVar18 = param_1;
      param_3 = pppppppuVar9;
      _memchr();
      pppppppuVar10 = param_1;
      if (pppppppuVar18 == (ushort *******)0x0) goto LAB_10b2f088c;
LAB_10b2f0854:
      pppppppuVar10 = (ushort *******)((long)pppppppuVar18 - (long)pppppppuVar10);
      if (pppppppuVar10 == (ushort *******)0xffffffffffffffff) goto LAB_10b2f088c;
      if ((int)pppppppuVar9 < 0) {
        if (pppppppuVar10 <= param_1[1]) {
          param_1[1] = (ushort ******)pppppppuVar10;
          param_1 = (ushort *******)*param_1;
          goto LAB_10b2f0888;
        }
      }
      else if (pppppppuVar10 <= pppppppuVar9) {
        *(byte *)((long)param_1 + 0x17) = (byte)pppppppuVar10;
LAB_10b2f0888:
        *(byte *)((long)param_1 + (long)pppppppuVar10) = 0;
        goto LAB_10b2f088c;
      }
    }
    else {
LAB_10b2f08c8:
      FUN_10b2ecf74();
    }
    func_0x000104c03f14();
    pppppppuVar19 = (ushort *******)&pppppppuStack_e0;
    pppppppuVar4 = (ushort *******)&pppppppuStack_e0;
    pppppppuVar10 = (ushort *******)&pppppppuStack_e0;
    param_1 = (ushort *******)&pppppppuStack_e0;
    pcStack_68 = FUN_10b2f08d0;
    unaff_x29 = &ppppppuStack_70;
    pppppppuVar3 = pppppppuVar18;
    pppppppuVar6 = pppppppuVar5;
    pppppppuVar7 = param_3;
    ppppppuStack_70 = (undefined8 ******)&stack0xfffffffffffffff0;
    func_0x000107c2cab8(&pppppppuStack_e0);
    pppppppuVar9 = pppppppuStack_d8;
    if (-1 < (char)uStack_d0._7_1_) {
      pppppppuVar9 = (ushort *******)(ulong)uStack_d0._7_1_;
    }
    if (pppppppuVar9 == (ushort *******)0x0) {
      if ((char)uStack_d0._7_1_ < '\0') {
        __ZdlPv(pppppppuStack_e0);
      }
      goto LAB_10b2f0ac4;
    }
    if ((char)uStack_d0._7_1_ < '\0') {
      if (pppppppuStack_d8 == (ushort *******)0x1) {
        bVar13 = *(byte *)pppppppuStack_e0;
        unaff_x23 = (ushort *******)(ulong)bVar13;
        __ZdlPv();
        pppppppuVar3 = pppppppuStack_e0;
        pppppppuStack_e0._0_1_ = bVar13;
        goto joined_r0x00010b2f0ac0;
      }
      if (pppppppuStack_d8 == (ushort *******)0x2) {
        uVar1 = *(ushort *)pppppppuStack_e0;
        unaff_x23 = (ushort *******)(ulong)uVar1;
        pppppppuVar20 = (ushort *******)0x2e2e;
        __ZdlPv();
        pppppppuVar3 = pppppppuStack_e0;
        pppppppuStack_e0._0_2_ = uVar1;
        goto joined_r0x00010b2f09d4;
      }
      __ZdlPv();
      pppppppuVar3 = pppppppuStack_e0;
    }
    else if (uStack_d0._7_1_ == 1) {
joined_r0x00010b2f0ac0:
      if ((byte)pppppppuStack_e0 == 0x2e) {
LAB_10b2f0ac4:
        *extraout_x8 = (ushort ******)0x0;
        extraout_x8[1] = (ushort ******)0x0;
        extraout_x8[2] = (ushort ******)0x0;
        return;
      }
    }
    else if (uStack_d0._7_1_ == 2) {
joined_r0x00010b2f09d4:
      if ((ushort)pppppppuStack_e0 == 0x2e2e) goto LAB_10b2f0ac4;
    }
    if ((param_3 == (ushort *******)0x0) ||
       ((param_3 == (ushort *******)0x1 && (*(byte *)pppppppuVar5 == 0x2e)))) {
      if ((char)*(byte *)((long)pppppppuVar18 + 0x17) < '\0') {
        func_0x000107c3192c(extraout_x8,*pppppppuVar18,pppppppuVar18[1]);
      }
      else {
        ppppppuVar11 = *pppppppuVar18;
        extraout_x8[1] = pppppppuVar18[1];
        *extraout_x8 = ppppppuVar11;
        extraout_x8[2] = pppppppuVar18[2];
      }
      return;
    }
    pppppppuStack_d8 = (ushort *******)0xaaaaaaaaaaaaaaaa;
    uStack_d0 = (ushort ******)0xaaaaaaaaaaaaaaaa;
    pppppppuStack_e0 = (ushort *******)0xaaaaaaaaaaaaaaaa;
    if ((char)*(byte *)((long)pppppppuVar18 + 0x17) < '\0') {
      pppppppuVar9 = (ushort *******)*pppppppuVar18;
      pppppppuVar10 = (ushort *******)pppppppuVar18[1];
      unaff_x30 = 0x10b2f09f8;
      unaff_x19 = extraout_x8;
    }
    else {
      pppppppuStack_d8 = (ushort *******)pppppppuVar18[1];
      pppppppuStack_e0 = (ushort *******)*pppppppuVar18;
      ppppppuVar11 = pppppppuVar18[2];
      uStack_d0 = ppppppuVar11;
      ppppppuVar11 = uStack_d0;
      if (*(byte *)pppppppuVar5 != 0x2e) {
        uStack_d0._7_1_ = (byte)((ulong)ppppppuVar11 >> 0x38);
        pppppppuVar9 = (ushort *******)pppppppuVar18[1];
        pppppppuVar18 = (ushort *******)*pppppppuVar18;
        if (-1 < (long)ppppppuVar11) {
          pppppppuVar9 = (ushort *******)(ulong)uStack_d0._7_1_;
          pppppppuVar18 = (ushort *******)&pppppppuStack_e0;
        }
        if (((byte *)((long)pppppppuVar18 + (long)pppppppuVar9))[-1] != 0x2e) {
          pppppppuVar18 = (ushort *******)(((ulong)ppppppuVar11 & 0x7fffffffffffffff) - 1);
          if (-1 < (long)ppppppuVar11) {
            pppppppuVar18 = (ushort *******)0x16;
          }
          bVar13 = uStack_d0._7_1_;
          uStack_d0 = ppppppuVar11;
          if (pppppppuVar18 == pppppppuVar9) {
            pppppppuVar7 = (ushort *******)0x1;
            pppppppuVar6 = pppppppuVar9;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm();
            pppppppuVar3 = pppppppuVar4;
            bVar13 = uStack_d0._7_1_;
            pppppppuStack_d8 = pppppppuVar9;
          }
          pppppppuVar18 = pppppppuStack_e0;
          if (-1 < (char)bVar13) {
            pppppppuVar18 = (ushort *******)&pppppppuStack_e0;
          }
          *(byte *)((long)pppppppuVar18 + (long)pppppppuVar9) = 0x2e;
          pppppppuVar9 = (ushort *******)((long)pppppppuVar9 + 1);
          pppppppuVar19 = pppppppuVar9;
          if (-1 < (long)uStack_d0) {
            uStack_d0 = (ushort ******)
                        (CONCAT17((char)pppppppuVar9,(undefined7)uStack_d0) & 0x7fffffffffffffff);
            pppppppuVar19 = pppppppuStack_d8;
          }
          pppppppuStack_d8 = pppppppuVar19;
          *(byte *)((long)pppppppuVar18 + (long)pppppppuVar9) = 0;
          ppppppuVar11 = uStack_d0;
        }
      }
      uStack_d0 = ppppppuVar11;
      pppppppuVar9 = pppppppuStack_d8;
      pppppppuVar19 = pppppppuStack_e0;
      pppppppuVar18 = (ushort *******)(long)(char)uStack_d0._7_1_;
      if ((long)pppppppuVar18 < 0) {
        uVar12 = ((ulong)uStack_d0 & 0x7fffffffffffffff) - 1;
        pppppppuVar18 = pppppppuStack_d8;
        pppppppuVar10 = pppppppuStack_e0;
        if (param_3 <= (ushort *******)(uVar12 - (long)pppppppuStack_d8)) goto LAB_10b2f0c44;
        pbVar15 = (byte *)(((long)param_3 - uVar12) + (long)pppppppuStack_d8);
        if (pbVar15 <= (byte *)(0x7ffffffffffffff7 - ((ulong)uStack_d0 & 0x7fffffffffffffff))) {
          if (uVar12 < 0x3ffffffffffffff3) goto LAB_10b2f0bac;
          bVar2 = false;
          unaff_x25 = (ushort *******)0x7ffffffffffffff7;
          pppppppuVar18 = unaff_x25;
          __Znwm();
          pppppppuVar10 = pppppppuVar19;
          goto joined_r0x00010b2f0d78;
        }
LAB_10b2f0d84:
        func_0x000104bd47d4();
      }
      else {
        if ((ushort *******)(0x16 - (long)pppppppuVar18) < param_3) {
          pbVar15 = (byte *)((long)param_3 + (long)pppppppuVar18) + -0x16;
          if ((byte *)0x7fffffffffffffe0 < pbVar15) goto LAB_10b2f0d84;
          uVar12 = 0x16;
          pppppppuVar9 = pppppppuVar18;
          pppppppuVar10 = (ushort *******)&pppppppuStack_e0;
LAB_10b2f0bac:
          pbVar17 = pbVar15 + uVar12;
          if (pbVar15 + uVar12 <= (byte *)(uVar12 * 2)) {
            pbVar17 = (byte *)(uVar12 * 2);
          }
          pppppppuVar18 = (ushort *******)0x19;
          if (((ulong)pbVar17 | 7) != 0x17) {
            pppppppuVar18 = (ushort *******)(((ulong)pbVar17 | 7) + 1);
          }
          unaff_x25 = (ushort *******)0x17;
          if ((byte *)0x16 < pbVar17) {
            unaff_x25 = pppppppuVar18;
          }
          bVar2 = uVar12 == 0x16;
          pppppppuVar18 = unaff_x25;
          __Znwm();
joined_r0x00010b2f0d78:
          if (pppppppuVar9 != (ushort *******)0x0) {
            _memmove(pppppppuVar18,pppppppuVar10,pppppppuVar9);
          }
          pppppppuVar3 = (ushort *******)((long)pppppppuVar18 + (long)pppppppuVar9);
          pppppppuVar7 = param_3;
          _memmove();
          if (!bVar2) {
            pppppppuVar3 = pppppppuVar10;
            __ZdlPv();
          }
          uStack_d0 = (ushort ******)((ulong)unaff_x25 | 0x8000000000000000);
          pppppppuStack_d8 = (ushort *******)((long)pppppppuVar9 + (long)param_3);
          *(byte *)((long)pppppppuVar18 + (long)pppppppuStack_d8) = 0;
          pppppppuVar6 = pppppppuVar5;
          bVar13 = (byte)((ulong)uStack_d0 >> 0x38);
          pppppppuStack_e0 = pppppppuVar18;
        }
        else {
LAB_10b2f0c44:
          pppppppuVar3 = (ushort *******)((long)pppppppuVar10 + (long)pppppppuVar18);
          pppppppuVar7 = param_3;
          _memmove();
          pppppppuVar18 = (ushort *******)((long)pppppppuVar18 + (long)param_3);
          pppppppuVar9 = pppppppuVar18;
          if (-1 < (long)uStack_d0) {
            uStack_d0 = (ushort ******)
                        (CONCAT17((char)pppppppuVar18,(undefined7)uStack_d0) & 0x7fffffffffffffff);
            pppppppuVar9 = pppppppuStack_d8;
          }
          pppppppuStack_d8 = pppppppuVar9;
          *(byte *)((long)pppppppuVar10 + (long)pppppppuVar18) = 0;
          pppppppuVar6 = pppppppuVar5;
          bVar13 = uStack_d0._7_1_;
        }
        pppppppuVar20 = pppppppuStack_e0;
        pppppppuVar18 = pppppppuStack_e0;
        if (-1 < (char)bVar13) {
          pppppppuVar18 = (ushort *******)&pppppppuStack_e0;
        }
        pppppppuVar5 = pppppppuStack_d8;
        if (-1 < (char)bVar13) {
          pppppppuVar5 = (ushort *******)(ulong)bVar13;
        }
        if ((ushort *******)0x7ffffffffffffff7 < pppppppuVar5) {
          FUN_10b2ecf74();
          unaff_x23 = pppppppuVar10;
          goto LAB_10b2f0d84;
        }
        if (pppppppuVar5 < (ushort *******)0x17) {
          *(byte *)((long)extraout_x8 + 0x17) = (byte)pppppppuVar5;
          pppppppuVar10 = extraout_x8;
          if (pppppppuVar5 != (ushort *******)0x0) goto LAB_10b2f0cdc;
        }
        else {
          pppppppuVar9 = (ushort *******)0x19;
          if (((ulong)pppppppuVar5 | 7) != 0x17) {
            pppppppuVar9 = (ushort *******)(((ulong)pppppppuVar5 | 7) + 1);
          }
          pppppppuVar10 = pppppppuVar9;
          __Znwm();
          extraout_x8[1] = (ushort ******)pppppppuVar5;
          extraout_x8[2] = (ushort ******)((ulong)pppppppuVar9 | 0x8000000000000000);
          *extraout_x8 = (ushort ******)pppppppuVar10;
LAB_10b2f0cdc:
          _memmove(pppppppuVar10,pppppppuVar18,pppppppuVar5);
        }
        *(byte *)((long)pppppppuVar10 + (long)pppppppuVar5) = 0;
        bVar13 = *(byte *)((long)extraout_x8 + 0x17);
        pppppppuVar18 = (ushort *******)*extraout_x8;
        unaff_x23 = (ushort *******)extraout_x8[1];
        pppppppuVar7 = unaff_x23;
        pppppppuVar5 = pppppppuVar18;
        if (-1 < (char)bVar13) {
          pppppppuVar7 = (ushort *******)(ulong)bVar13;
          pppppppuVar5 = extraout_x8;
        }
        pppppppuVar6 = (ushort *******)0x0;
        pppppppuVar3 = pppppppuVar5;
        _memchr();
        if ((pppppppuVar3 == (ushort *******)0x0) ||
           (pppppppuVar5 = (ushort *******)((long)pppppppuVar3 - (long)pppppppuVar5),
           pppppppuVar5 == (ushort *******)0xffffffffffffffff)) goto LAB_10b2f0d4c;
        if ((char)bVar13 < '\0') {
          if (pppppppuVar5 <= unaff_x23) {
            extraout_x8[1] = (ushort ******)pppppppuVar5;
            goto LAB_10b2f0d48;
          }
        }
        else if (pppppppuVar5 <= (ushort *******)(ulong)bVar13) {
          *(byte *)((long)extraout_x8 + 0x17) = (byte)pppppppuVar5;
          pppppppuVar18 = extraout_x8;
LAB_10b2f0d48:
          *(byte *)((long)pppppppuVar18 + (long)pppppppuVar5) = 0;
LAB_10b2f0d4c:
          if (-1 < (long)uStack_d0) {
            return;
          }
          __ZdlPv(pppppppuStack_e0);
          return;
        }
      }
      func_0x000104c03f14();
      pppppppuVar19 = (ushort *******)&pppppppuStack_170;
      param_1 = (ushort *******)&pppppppuStack_170;
      uStack_e8 = 0x10b2f0d8c;
      pppppppuStack_f0 = unaff_x29;
      func_0x000107c2cab8(&pppppppuStack_158);
      pppppppuVar18 = pppppppuStack_150;
      if (-1 < (char)uStack_148._7_1_) {
        pppppppuVar18 = (ushort *******)(ulong)uStack_148._7_1_;
      }
      if (pppppppuVar18 == (ushort *******)0x0) {
        if ((char)uStack_148._7_1_ < '\0') {
          __ZdlPv(pppppppuStack_158);
        }
        goto LAB_10b2f0e70;
      }
      if ((char)uStack_148._7_1_ < '\0') {
        if (pppppppuStack_150 == (ushort *******)0x1) {
          bVar13 = *(byte *)pppppppuStack_158;
          unaff_x23 = (ushort *******)(ulong)bVar13;
          __ZdlPv();
joined_r0x00010b2f0e58:
          if (bVar13 == 0x2e) {
LAB_10b2f0e70:
            *extraout_x8_00 = (ushort ******)0x0;
            extraout_x8_00[1] = (ushort ******)0x0;
            extraout_x8_00[2] = (ushort ******)0x0;
            return;
          }
        }
        else if (pppppppuStack_150 == (ushort *******)0x2) {
          uVar1 = *(ushort *)pppppppuStack_158;
          unaff_x23 = (ushort *******)(ulong)uVar1;
          pppppppuVar20 = (ushort *******)0x2e2e;
          __ZdlPv();
joined_r0x00010b2f0e04:
          if (uVar1 == 0x2e2e) goto LAB_10b2f0e70;
        }
        else {
          __ZdlPv();
        }
      }
      else {
        if (uStack_148._7_1_ == 1) {
          bVar13 = (byte)pppppppuStack_158;
          goto joined_r0x00010b2f0e58;
        }
        if (uStack_148._7_1_ == 2) {
          uVar1 = (ushort)pppppppuStack_158;
          goto joined_r0x00010b2f0e04;
        }
      }
      pppppppuStack_150 = (ushort *******)0xaaaaaaaaaaaaaaaa;
      uStack_148 = (ushort ******)0xaaaaaaaaaaaaaaaa;
      pppppppuStack_158 = (ushort *******)0xaaaaaaaaaaaaaaaa;
      pppppppuVar5 = (ushort *******)&pppppppuStack_158;
      pppppppuVar18 = pppppppuVar3;
      FUN_10b2f067c();
      pppppppuVar10 = pppppppuStack_150;
      pppppppuVar9 = pppppppuStack_158;
      if ((pppppppuVar7 == (ushort *******)0x0) ||
         ((pppppppuVar7 == (ushort *******)0x1 && (*(byte *)pppppppuVar6 == 0x2e)))) {
        extraout_x8_00[1] = (ushort ******)pppppppuStack_150;
        *extraout_x8_00 = (ushort ******)pppppppuStack_158;
        extraout_x8_00[2] = uStack_148;
        return;
      }
      uStack_168 = 0xaaaaaaaaaaaa;
      uStack_162 = 0xaaaa;
      uStack_160 = 0xaaaaaaaaaaaa;
      uStack_15a = 0xaa;
      bStack_159 = 0xaa;
      pppppppuStack_170 = (ushort *******)0xaaaaaaaaaaaaaaaa;
      if (-1 < (long)uStack_148) {
        uStack_168 = SUB86(pppppppuStack_150,0);
        uStack_162 = (undefined2)((ulong)pppppppuStack_150 >> 0x30);
        pppppppuStack_170 = pppppppuStack_158;
        uStack_160 = SUB86(uStack_148,0);
        uStack_15a = (undefined1)((ulong)uStack_148 >> 0x30);
        bStack_159 = uStack_148._7_1_;
        if (*(byte *)pppppppuVar6 == 0x2e) {
joined_r0x00010b2f0f00:
          pppppppuVar19 = (ushort *******)(long)(char)bStack_159;
          if ((long)pppppppuVar19 < 0) {
LAB_10b2f1090:
            pppppppuVar9 = pppppppuStack_170;
            pppppppuVar19 = (ushort *******)CONCAT26(uStack_162,uStack_168);
            uVar16 = CONCAT17(bStack_159,CONCAT16(uStack_15a,uStack_160)) & 0x7fffffffffffffff;
            uVar12 = uVar16 - 1;
            if ((ushort *******)(uVar12 - (long)pppppppuVar19) < pppppppuVar7) {
              pbVar15 = (byte *)(((long)pppppppuVar7 - uVar12) + (long)pppppppuVar19);
              if ((byte *)(0x7ffffffffffffff7 - uVar16) < pbVar15) goto LAB_10b2f12d8;
              if (uVar12 < 0x3ffffffffffffff3) goto LAB_10b2f10d0;
              bVar2 = false;
              unaff_x25 = (ushort *******)0x7ffffffffffffff7;
              pppppppuVar10 = unaff_x25;
              __Znwm();
joined_r0x00010b2f1110:
              if (pppppppuVar19 != (ushort *******)0x0) {
                _memmove(pppppppuVar10,pppppppuVar9,pppppppuVar19);
              }
              pppppppuVar5 = (ushort *******)((long)pppppppuVar10 + (long)pppppppuVar19);
              _memmove(pppppppuVar5,pppppppuVar6,pppppppuVar7);
              if (!bVar2) {
                pppppppuVar5 = pppppppuVar9;
                __ZdlPv();
              }
              bStack_159 = (byte)((ulong)unaff_x25 >> 0x38) | 0x80;
              pppppppuVar7 = (ushort *******)((long)pppppppuVar19 + (long)pppppppuVar7);
              uStack_168 = SUB86(pppppppuVar7,0);
              uStack_162 = (undefined2)((ulong)pppppppuVar7 >> 0x30);
              uStack_160 = SUB86(unaff_x25,0);
              uStack_15a = (undefined1)((ulong)unaff_x25 >> 0x30);
              *(byte *)((long)pppppppuVar10 + (long)pppppppuVar7) = 0;
              pppppppuVar18 = pppppppuVar6;
              pppppppuStack_170 = pppppppuVar10;
            }
            else {
LAB_10b2f1160:
              pppppppuVar5 = (ushort *******)((long)pppppppuVar9 + (long)pppppppuVar19);
              _memmove(pppppppuVar5,pppppppuVar6,pppppppuVar7);
              pbVar15 = (byte *)((long)pppppppuVar19 + (long)pppppppuVar7);
              if ((char)bStack_159 < '\0') {
                uStack_168 = SUB86(pbVar15,0);
                uStack_162 = (undefined2)((ulong)pbVar15 >> 0x30);
              }
              else {
                bStack_159 = (byte)pbVar15 & 0x7f;
              }
              *(byte *)((long)pppppppuVar9 + (long)pbVar15) = 0;
              pppppppuVar7 = (ushort *******)CONCAT26(uStack_162,uStack_168);
              pppppppuVar18 = pppppppuVar6;
            }
            pppppppuVar20 = pppppppuStack_170;
            pppppppuVar6 = pppppppuStack_170;
            if (-1 < (char)bStack_159) {
              pppppppuVar6 = (ushort *******)&pppppppuStack_170;
            }
            if (-1 < (char)bStack_159) {
              pppppppuVar7 = (ushort *******)(ulong)bStack_159;
            }
            if ((ushort *******)0x7ffffffffffffff7 < pppppppuVar7) {
              FUN_10b2ecf74();
              unaff_x23 = pppppppuVar9;
              goto LAB_10b2f12d8;
            }
            if (pppppppuVar7 < (ushort *******)0x17) {
              *(byte *)((long)extraout_x8_00 + 0x17) = (byte)pppppppuVar7;
              pppppppuVar5 = extraout_x8_00;
              if (pppppppuVar7 != (ushort *******)0x0) goto LAB_10b2f11f8;
            }
            else {
              pppppppuVar18 = (ushort *******)0x19;
              if (((ulong)pppppppuVar7 | 7) != 0x17) {
                pppppppuVar18 = (ushort *******)(((ulong)pppppppuVar7 | 7) + 1);
              }
              pppppppuVar5 = pppppppuVar18;
              __Znwm();
              extraout_x8_00[1] = (ushort ******)pppppppuVar7;
              extraout_x8_00[2] = (ushort ******)((ulong)pppppppuVar18 | 0x8000000000000000);
              *extraout_x8_00 = (ushort ******)pppppppuVar5;
LAB_10b2f11f8:
              _memmove(pppppppuVar5,pppppppuVar6,pppppppuVar7);
            }
            *(byte *)((long)pppppppuVar5 + (long)pppppppuVar7) = 0;
            bVar13 = *(byte *)((long)extraout_x8_00 + 0x17);
            pppppppuVar19 = (ushort *******)(ulong)bVar13;
            pppppppuVar6 = (ushort *******)*extraout_x8_00;
            unaff_x23 = (ushort *******)extraout_x8_00[1];
            pppppppuVar9 = unaff_x23;
            pppppppuVar7 = pppppppuVar6;
            if (-1 < (char)bVar13) {
              pppppppuVar9 = pppppppuVar19;
              pppppppuVar7 = extraout_x8_00;
            }
            pppppppuVar18 = (ushort *******)0x0;
            pppppppuVar5 = pppppppuVar7;
            _memchr(pppppppuVar7,0,pppppppuVar9);
            if ((pppppppuVar5 == (ushort *******)0x0) ||
               (pppppppuVar9 = (ushort *******)((long)pppppppuVar5 - (long)pppppppuVar7),
               pppppppuVar9 == (ushort *******)0xffffffffffffffff)) goto LAB_10b2f1268;
            if ((char)bVar13 < '\0') {
              if (pppppppuVar9 <= unaff_x23) {
                extraout_x8_00[1] = (ushort ******)pppppppuVar9;
                goto LAB_10b2f1264;
              }
            }
            else if (pppppppuVar9 <= pppppppuVar19) {
              *(byte *)((long)extraout_x8_00 + 0x17) = (byte)pppppppuVar9;
              pppppppuVar6 = extraout_x8_00;
LAB_10b2f1264:
              *(byte *)((long)pppppppuVar6 + (long)pppppppuVar9) = 0;
LAB_10b2f1268:
              if ((char)bStack_159 < '\0') {
                __ZdlPv(pppppppuStack_170);
              }
              if ((long)uStack_148 < 0) {
                __ZdlPv(pppppppuStack_158);
              }
              return;
            }
          }
          else {
LAB_10b2f0f04:
            pppppppuVar9 = (ushort *******)&pppppppuStack_170;
            if (pppppppuVar7 <= (ushort *******)(0x16 - (long)pppppppuVar19)) goto LAB_10b2f1160;
            pbVar15 = (byte *)((long)pppppppuVar7 + (long)pppppppuVar19) + -0x16;
            if (pbVar15 < (byte *)0x7fffffffffffffe1) {
              uVar12 = 0x16;
              pppppppuVar9 = (ushort *******)&pppppppuStack_170;
LAB_10b2f10d0:
              pbVar17 = pbVar15 + uVar12;
              if (pbVar15 + uVar12 <= (byte *)(uVar12 * 2)) {
                pbVar17 = (byte *)(uVar12 * 2);
              }
              pppppppuVar18 = (ushort *******)0x19;
              if (((ulong)pbVar17 | 7) != 0x17) {
                pppppppuVar18 = (ushort *******)(((ulong)pbVar17 | 7) + 1);
              }
              unaff_x25 = (ushort *******)0x17;
              if ((byte *)0x16 < pbVar17) {
                unaff_x25 = pppppppuVar18;
              }
              bVar2 = uVar12 == 0x16;
              pppppppuVar10 = unaff_x25;
              __Znwm();
              goto joined_r0x00010b2f1110;
            }
LAB_10b2f12d8:
            func_0x000104bd47d4();
          }
          func_0x000104c03f14();
          pppppppuStack_1b8 = unaff_x25;
        }
        else {
          if (-1 < (long)(char)uStack_148._7_1_) {
            pppppppuVar5 = (ushort *******)&pppppppuStack_170;
            unaff_x25 = (ushort *******)(long)(char)uStack_148._7_1_;
            if (uStack_148._7_1_ == 0x16) {
              unaff_x23 = (ushort *******)0x30;
              pppppppuVar5 = (ushort *******)0x30;
              __Znwm();
              pppppppuVar5[1] = (ushort ******)CONCAT26(uStack_162,uStack_168);
              *pppppppuVar5 = (ushort ******)pppppppuStack_170;
              *(ulong *)((long)pppppppuVar5 + 0xe) = CONCAT62(uStack_160,uStack_162);
              pppppppuVar10 = (ushort *******)0x16;
              pppppppuVar19 = (ushort *******)0x16;
              pppppppuVar9 = pppppppuVar20;
LAB_10b2f1048:
              bStack_159 = (byte)((ulong)unaff_x23 >> 0x38) | 0x80;
              uStack_168 = SUB86(pppppppuVar19,0);
              uStack_162 = (undefined2)((ulong)pppppppuVar19 >> 0x30);
              uStack_160 = SUB86(unaff_x23,0);
              uStack_15a = (undefined1)((ulong)unaff_x23 >> 0x30);
              pppppppuVar20 = pppppppuVar9;
              unaff_x25 = pppppppuVar10;
              pppppppuStack_170 = pppppppuVar5;
            }
LAB_10b2f1054:
            *(byte *)((long)pppppppuVar5 + (long)unaff_x25) = 0x2e;
            pbVar15 = (byte *)((long)unaff_x25 + 1);
            if ((char)bStack_159 < '\0') {
              uStack_168 = SUB86(pbVar15,0);
              uStack_162 = (undefined2)((ulong)pbVar15 >> 0x30);
              *(byte *)((long)pppppppuVar5 + (long)pbVar15) = 0;
              goto joined_r0x00010b2f0f00;
            }
            bStack_159 = (byte)pbVar15 & 0x7f;
            *(byte *)((long)pppppppuVar5 + (long)pbVar15) = 0;
            pppppppuVar19 = (ushort *******)(long)(char)bStack_159;
            if (-1 < (long)pppppppuVar19) goto LAB_10b2f0f04;
            goto LAB_10b2f1090;
          }
          pppppppuVar19 = (ushort *******)(((ulong)uStack_148 & 0x7fffffffffffffff) - 1);
          if (pppppppuVar19 != pppppppuStack_150) {
            pppppppuVar5 = pppppppuStack_158;
            unaff_x25 = pppppppuStack_150;
            if (-1 < (long)uStack_148) {
              pppppppuVar5 = (ushort *******)&pppppppuStack_170;
            }
            goto LAB_10b2f1054;
          }
          pppppppuStack_1b8 = pppppppuStack_150;
          if (pppppppuVar19 != (ushort *******)0x7ffffffffffffff7) {
            unaff_x23 = (ushort *******)0x7ffffffffffffff7;
            if (pppppppuVar19 < (ushort *******)0x3ffffffffffffff3) {
              if (pppppppuVar19 == (ushort *******)0x0) {
                unaff_x23 = (ushort *******)0x17;
              }
              else {
                uVar12 = (long)pppppppuVar19 * 2 | 7;
                pppppppuVar5 = (ushort *******)0x19;
                if (uVar12 != 0x17) {
                  pppppppuVar5 = (ushort *******)(uVar12 + 1);
                }
                unaff_x23 = (ushort *******)0x17;
                if ((ushort *******)0xb < pppppppuVar19) {
                  unaff_x23 = pppppppuVar5;
                }
              }
            }
            pppppppuVar5 = unaff_x23;
            __Znwm();
            if ((pppppppuVar19 == (ushort *******)0x0) ||
               (pppppppuVar18 = pppppppuVar9, _memmove(), pppppppuVar19 != (ushort *******)0x16)) {
              __ZdlPv(pppppppuVar9);
            }
            goto LAB_10b2f1048;
          }
        }
        func_0x000104c4f6b8();
        bVar13 = *(byte *)((long)pppppppuVar18 + 0x17);
        pppppppuVar9 = (ushort *******)*pppppppuVar18;
        if (-1 < (long)(char)bVar13) {
          pppppppuVar9 = pppppppuVar18;
        }
        ppppppuVar11 = pppppppuVar18[1];
        if (-1 < (char)bVar13) {
          ppppppuVar11 = (ushort ******)(long)(char)bVar13;
        }
        uStack_1c0 = 0x7ffffffffffffff7;
        pcStack_178 = FUN_10b2f12e4;
        pppppppuStack_1e0 = (ushort *******)0x0;
        ppppppuStack_1d8 = (ushort ******)0x0;
        uStack_1d0 = 0;
        pppppppuStack_1b0 = pppppppuVar20;
        pppppppuStack_1a8 = unaff_x23;
        pppppppuStack_1a0 = pppppppuVar19;
        pppppppuStack_198 = pppppppuVar6;
        pppppppuStack_190 = pppppppuVar7;
        pppppppuStack_180 = &pppppppuStack_f0;
        if (ppppppuVar11 == (ushort ******)0x0) {
code_r0x00010014804c:
          bVar13 = *(byte *)((long)pppppppuVar5 + 0x17);
joined_r0x00010014805c:
          ppppppuVar21 = (ushort ******)(long)(char)bVar13;
          pppppppuVar10 = pppppppuVar5;
          ppppppuVar8 = ppppppuVar21;
          if ((long)ppppppuVar21 < 0) {
            pppppppuVar10 = (ushort *******)*pppppppuVar5;
            ppppppuVar8 = pppppppuVar5[1];
          }
          pbVar15 = &UNK_10e573fb0;
          func_0x000107c610b0(pppppppuVar10,&UNK_10e573fb0,ppppppuVar8 != (ushort ******)0x0);
          param_1 = extraout_x8_01;
          if ((ppppppuVar8 == (ushort ******)0x1 && (int)pppppppuVar10 == 0) &&
              ppppppuVar11 != (ushort ******)0x0) {
            if (ppppppuVar11 < (ushort ******)0x7ffffffffffffff8) {
              if (ppppppuVar11 < (ushort ******)0x17) {
                *(byte *)((long)extraout_x8_01 + 0x17) = (byte)ppppppuVar11;
              }
              else {
                pppppppuVar18 = (ushort *******)0x19;
                if (((ulong)ppppppuVar11 | 7) != 0x17) {
                  pppppppuVar18 = (ushort *******)(((ulong)ppppppuVar11 | 7) + 1);
                }
                param_1 = pppppppuVar18;
                func_0x000107c60e20();
                extraout_x8_01[1] = ppppppuVar11;
                extraout_x8_01[2] = (ushort ******)((ulong)pppppppuVar18 | 0x8000000000000000);
                *extraout_x8_01 = (ushort ******)param_1;
              }
              goto code_r0x000107c610b8;
            }
            goto code_r0x0001001484cc;
          }
          extraout_x8_01[1] = (ushort ******)0xaaaaaaaaaaaaaaaa;
          extraout_x8_01[2] = (ushort ******)0xaaaaaaaaaaaaaaaa;
          *extraout_x8_01 = (ushort ******)0xaaaaaaaaaaaaaaaa;
          ppppppuVar11 = pppppppuVar5[1];
          pppppppuVar9 = (ushort *******)*pppppppuVar5;
          if (-1 < (char)bVar13) {
            ppppppuVar11 = ppppppuVar21;
            pppppppuVar9 = pppppppuVar5;
          }
          if ((ushort ******)0x7ffffffffffffff7 < ppppppuVar11) goto code_r0x0001001484cc;
          if ((ushort ******)0x16 < ppppppuVar11) {
            pppppppuVar18 = (ushort *******)0x19;
            if (((ulong)ppppppuVar11 | 7) != 0x17) {
              pppppppuVar18 = (ushort *******)(((ulong)ppppppuVar11 | 7) + 1);
            }
            param_1 = pppppppuVar18;
            func_0x000107c60e20();
            extraout_x8_01[1] = ppppppuVar11;
            extraout_x8_01[2] = (ushort ******)((ulong)pppppppuVar18 | 0x8000000000000000);
            *extraout_x8_01 = (ushort ******)param_1;
            goto code_r0x000107c610b8;
          }
          *(byte *)((long)extraout_x8_01 + 0x17) = (byte)ppppppuVar11;
          if (ppppppuVar11 != (ushort ******)0x0) goto code_r0x000107c610b8;
          *(byte *)extraout_x8_01 = 0;
          bVar13 = *(byte *)((long)extraout_x8_01 + 0x17);
          pppppppuVar18 = (ushort *******)*extraout_x8_01;
          ppppppuVar8 = extraout_x8_01[1];
          ppppppuVar11 = ppppppuVar8;
          pppppppuVar5 = pppppppuVar18;
          if (-1 < (char)bVar13) {
            ppppppuVar11 = (ushort ******)(ulong)bVar13;
            pppppppuVar5 = extraout_x8_01;
          }
          pbVar15 = (byte *)0x0;
          pppppppuVar9 = pppppppuVar5;
          func_0x000107c610ac(pppppppuVar5,0,ppppppuVar11);
          pppppppuVar10 = extraout_x8_01;
          if ((pppppppuVar9 == (ushort *******)0x0) ||
             (ppppppuVar11 = (ushort ******)((long)pppppppuVar9 - (long)pppppppuVar5),
             ppppppuVar11 == (ushort ******)0xffffffffffffffff)) goto code_r0x0001001484d8;
          pppppppuVar10 = pppppppuVar9;
          if ((char)bVar13 < '\0') {
            if (ppppppuVar11 <= ppppppuVar8) {
              extraout_x8_01[1] = ppppppuVar11;
              goto code_r0x00010014824c;
            }
          }
          else if (ppppppuVar11 <= (ushort ******)(ulong)bVar13) {
            *(byte *)((long)extraout_x8_01 + 0x17) = (byte)ppppppuVar11;
            pppppppuVar18 = extraout_x8_01;
code_r0x00010014824c:
            *(byte *)((long)pppppppuVar18 + (long)ppppppuVar11) = 0;
            pppppppuVar10 = extraout_x8_01;
            goto code_r0x0001001484d8;
          }
        }
        else {
          pbVar15 = (byte *)0x0;
          pppppppuVar10 = pppppppuVar9;
          func_0x000107c610ac(pppppppuVar9,0,ppppppuVar11);
          if ((pppppppuVar10 == (ushort *******)0x0) ||
             (ppppppuVar8 = (ushort ******)((long)pppppppuVar10 - (long)pppppppuVar9),
             ppppppuVar8 == (ushort ******)0xffffffffffffffff)) goto code_r0x00010014804c;
          if (ppppppuVar8 <= ppppppuVar11) {
            ppppppuVar11 = ppppppuVar8;
          }
          if (ppppppuVar11 < (ushort ******)0x7ffffffffffffff8) {
            if (ppppppuVar11 < (ushort ******)0x17) {
              uStack_1e8 = CONCAT17((char)ppppppuVar11,(undefined7)uStack_1e8);
              pppppppuVar19 = (ushort *******)&pppppppuStack_1f8;
              if (pppppppuVar9 != pppppppuVar10) goto code_r0x000100148218;
              *(byte *)((long)pppppppuVar19 + (long)ppppppuVar11) = 0;
              pppppppuVar18 = pppppppuStack_1e0;
            }
            else {
              pppppppuVar18 = (ushort *******)0x19;
              if (((ulong)ppppppuVar11 | 7) != 0x17) {
                pppppppuVar18 = (ushort *******)(((ulong)ppppppuVar11 | 7) + 1);
              }
              pppppppuVar19 = pppppppuVar18;
              func_0x000107c60e20();
              uStack_1e8 = (ulong)pppppppuVar18 | 0x8000000000000000;
              pppppppuStack_1f8 = pppppppuVar19;
              ppppppuStack_1f0 = ppppppuVar11;
code_r0x000100148218:
              func_0x000107c610b8(pppppppuVar19,pppppppuVar9,ppppppuVar11);
              *(byte *)((long)pppppppuVar19 + (long)ppppppuVar11) = 0;
              pppppppuVar18 = pppppppuStack_1e0;
            }
            pppppppuStack_1e0 = pppppppuVar18;
            if ((long)uStack_1d0 < 0) {
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR___ZdlPv_110352258)(pppppppuVar18);
              return;
            }
            uStack_1d0._7_1_ = (char)(uStack_1e8 >> 0x38);
            pppppppuVar9 = pppppppuStack_1f8;
            if (-1 < (long)uStack_1d0._7_1_) {
              pppppppuVar9 = (ushort *******)&pppppppuStack_1e0;
            }
            ppppppuVar11 = ppppppuStack_1f0;
            if (-1 < (long)uStack_1e8) {
              ppppppuVar11 = (ushort ******)(long)uStack_1d0._7_1_;
            }
            bVar13 = *(byte *)((long)pppppppuVar5 + 0x17);
            pppppppuStack_1e0 = pppppppuStack_1f8;
            ppppppuStack_1d8 = ppppppuStack_1f0;
            uStack_1d0 = uStack_1e8;
            goto joined_r0x00010014805c;
          }
code_r0x0001001484cc:
          func_0x000107c35c54();
        }
        func_0x000104c03f14();
        func_0x000104bd47d4();
code_r0x0001001484d8:
        ppppppuVar8 = pppppppuVar10[1];
        if (-1 < (char)*(byte *)((long)pppppppuVar10 + 0x17)) {
          ppppppuVar8 = (ushort ******)(ulong)*(byte *)((long)pppppppuVar10 + 0x17);
        }
        if ((ushort ******)0x1 < ppppppuVar8) {
          pppppppuVar18 = pppppppuVar10;
          ppppppuVar21 = (ushort ******)0xffffffffffffffff;
          do {
            pppppppuVar5 = pppppppuVar10;
            if ((char)*(byte *)((long)pppppppuVar10 + 0x17) < '\0') {
              pppppppuVar5 = (ushort *******)*pppppppuVar10;
            }
            if (((byte *)((long)pppppppuVar5 + (long)ppppppuVar8))[-1] != 0x2f) {
              return;
            }
            bVar13 = *(byte *)((long)pppppppuVar10 + 0x17);
            ppppppuVar11 = (ushort ******)(ulong)bVar13;
            if ((ppppppuVar8 == (ushort ******)0x2) && (ppppppuVar21 != (ushort ******)0x3)) {
              pppppppuVar5 = pppppppuVar10;
              if ((char)bVar13 < '\0') {
                pppppppuVar5 = (ushort *******)*pppppppuVar10;
              }
              if (*(byte *)pppppppuVar5 == 0x2f) {
                return;
              }
            }
            ppppppuVar22 = (ushort ******)((long)ppppppuVar8 - 1);
            if ((char)bVar13 < '\0') {
              ppppppuVar11 = pppppppuVar10[1];
              pbVar17 = (byte *)((long)ppppppuVar22 - (long)ppppppuVar11);
              if (ppppppuVar22 < ppppppuVar11 || pbVar17 == (byte *)0x0) {
                pppppppuVar5 = (ushort *******)*pppppppuVar10;
                pppppppuVar10[1] = ppppppuVar22;
                goto code_r0x00010014852c;
              }
              if ((ushort ******)((long)ppppppuVar11 + 1U) == ppppppuVar8)
              goto code_r0x000100148534;
              uVar12 = ((ulong)pppppppuVar10[2] & 0x7fffffffffffffff) - 1;
              uVar14 = (uint)((ulong)pppppppuVar10[2] >> 0x3f);
              if ((byte *)(uVar12 - (long)ppppppuVar11) < pbVar17) goto code_r0x0001001485c4;
code_r0x00010014866c:
              pppppppuVar5 = pppppppuVar10;
              if (uVar14 != 0) goto code_r0x000100148674;
code_r0x000100148678:
              pppppppuVar18 = (ushort *******)((long)pppppppuVar5 + (long)ppppppuVar11);
              pbVar15 = pbVar17;
              func_0x000107c60ee4();
              ppppppuVar11 = (ushort ******)((long)ppppppuVar11 + (long)pbVar17);
              if ((char)*(byte *)((long)pppppppuVar10 + 0x17) < '\0') {
                pppppppuVar10[1] = ppppppuVar11;
                *(byte *)((long)pppppppuVar5 + (long)ppppppuVar11) = 0;
              }
              else {
                *(byte *)((long)pppppppuVar10 + 0x17) = (byte)ppppppuVar11 & 0x7f;
                *(byte *)((long)pppppppuVar5 + (long)ppppppuVar11) = 0;
              }
            }
            else if (ppppppuVar11 < ppppppuVar22) {
              pbVar17 = (byte *)((long)ppppppuVar8 + ~(ulong)ppppppuVar11);
              if (pbVar17 != (byte *)0x0) {
                uVar14 = 0;
                uVar12 = 0x16;
                if (pbVar17 <= (byte *)(0x16 - (long)ppppppuVar11)) goto code_r0x00010014866c;
code_r0x0001001485c4:
                if ((byte *)((long)ppppppuVar11 + ((long)pbVar17 - uVar12)) <=
                    (byte *)(0x7ffffffffffffff7 - uVar12)) {
                  if ((char)bVar13 < '\0') {
                    pppppppuVar9 = (ushort *******)*pppppppuVar10;
                    if (0x3ffffffffffffff2 < uVar12) goto code_r0x0001001485f8;
code_r0x0001001486cc:
                    pbVar15 = (byte *)((long)ppppppuVar11 + (long)pbVar17);
                    if ((byte *)((long)ppppppuVar11 + (long)pbVar17) <= (byte *)(uVar12 * 2)) {
                      pbVar15 = (byte *)(uVar12 * 2);
                    }
                    pppppppuVar5 = (ushort *******)0x19;
                    if (((ulong)pbVar15 | 7) != 0x17) {
                      pppppppuVar5 = (ushort *******)(((ulong)pbVar15 | 7) + 1);
                    }
                    pppppppuVar18 = (ushort *******)0x17;
                    if ((byte *)0x16 < pbVar15) {
                      pppppppuVar18 = pppppppuVar5;
                    }
                    param_1 = pppppppuVar18;
                    func_0x000107c60e20();
                  }
                  else {
                    pppppppuVar9 = pppppppuVar10;
                    if (uVar12 < 0x3ffffffffffffff3) goto code_r0x0001001486cc;
code_r0x0001001485f8:
                    pppppppuVar18 = (ushort *******)0x7ffffffffffffff7;
                    param_1 = pppppppuVar18;
                    func_0x000107c60e20();
                  }
                  if (ppppppuVar11 == (ushort ******)0x0) {
                    if (uVar12 != 0x16) {
                      func_0x000107c60e14(pppppppuVar9);
                    }
                    pppppppuVar10[1] = (ushort ******)0x0;
                    pppppppuVar10[2] = (ushort ******)((ulong)pppppppuVar18 | 0x8000000000000000);
                    *pppppppuVar10 = (ushort ******)param_1;
                    ppppppuVar11 = (ushort ******)0x0;
code_r0x000100148674:
                    pppppppuVar5 = (ushort *******)*pppppppuVar10;
                    goto code_r0x000100148678;
                  }
                  goto code_r0x000107c610b8;
                }
                func_0x000104c4f6b8();
                if (-1 < (char)*(byte *)((long)pppppppuVar18 + 0x17)) {
                  ppppppuVar8 = *(ushort *******)(pbVar15 + 8);
                  ppppppuVar11 = *(ushort *******)pbVar15;
                  pppppppuVar18[2] = *(ushort *******)(pbVar15 + 0x10);
                  pppppppuVar18[1] = ppppppuVar8;
                  *pppppppuVar18 = ppppppuVar11;
                  pbVar15[0x17] = 0;
                  *pbVar15 = 0;
                  return;
                }
                pppppppuVar18 = (ushort *******)*pppppppuVar18;
                goto code_r0x00010bdbd7ac;
              }
            }
            else {
              *(byte *)((long)pppppppuVar10 + 0x17) = (byte)ppppppuVar22;
              pppppppuVar5 = pppppppuVar10;
code_r0x00010014852c:
              ((byte *)((long)pppppppuVar5 + (long)ppppppuVar8))[-1] = 0;
            }
code_r0x000100148534:
            ppppppuVar21 = ppppppuVar8;
            ppppppuVar8 = ppppppuVar22;
          } while ((ushort ******)0x1 < ppppppuVar22);
        }
        return;
      }
      unaff_x30 = 0x10b2f0f44;
      unaff_x19 = extraout_x8_00;
      param_3 = pppppppuVar7;
      pppppppuVar5 = pppppppuVar6;
      pppppppuVar18 = pppppppuVar3;
      unaff_x29 = &pppppppuStack_f0;
    }
  }
  *(ushort ********)((long)pppppppuVar19 + -0x30) = pppppppuVar18;
  *(ushort ********)((long)pppppppuVar19 + -0x28) = pppppppuVar5;
  *(ushort ********)((long)pppppppuVar19 + -0x20) = param_3;
  *(ushort ********)((long)pppppppuVar19 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)pppppppuVar19 + -0x10) = unaff_x29;
  *(undefined8 *)((long)pppppppuVar19 + -8) = unaff_x30;
  if ((ushort *******)0x16 < pppppppuVar10) {
    if (pppppppuVar10 < (ushort *******)0x7ffffffffffffff7) {
      pppppppuVar18 = (ushort *******)0x19;
      if (((ulong)pppppppuVar10 | 7) != 0x17) {
        pppppppuVar18 = (ushort *******)(((ulong)pppppppuVar10 | 7) + 1);
      }
      puVar23 = &UNK_100033e00;
    }
    else {
      puVar23 = &UNK_100033e30;
      pppppppuVar18 = pppppppuVar9;
      func_0x000104bd47d4();
    }
    *(ushort ********)((long)pppppppuVar19 + -0x50) = pppppppuVar10;
    *(ushort ********)((long)pppppppuVar19 + -0x48) = pppppppuVar9;
    *(undefined1 **)((long)pppppppuVar19 + -0x40) = (undefined1 *)((long)pppppppuVar19 + -0x10);
    *(undefined **)((long)pppppppuVar19 + -0x38) = puVar23;
    func_0x000107c60e20(pppppppuVar18);
    return;
  }
  *(byte *)((long)param_1 + 0x17) = (byte)pppppppuVar10;
  ppppppuVar11 = (ushort ******)((long)pppppppuVar10 + 1);
code_r0x000107c610b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,pppppppuVar9,ppppppuVar11);
  return;
}



/* Entry: 10b2f08d0; end: 10b2f12e3;  */

/* WARNING: Possible PIC construction at 0x000100148254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010014840c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100148754) */
/* WARNING: Removing unreachable block (ram,0x000100148258) */
/* WARNING: Removing unreachable block (ram,0x000100148260) */
/* WARNING: Removing unreachable block (ram,0x00010014827c) */
/* WARNING: Removing unreachable block (ram,0x000100148340) */
/* WARNING: Removing unreachable block (ram,0x000100148284) */
/* WARNING: Removing unreachable block (ram,0x000100148264) */
/* WARNING: Removing unreachable block (ram,0x000100148268) */
/* WARNING: Removing unreachable block (ram,0x000100148298) */
/* WARNING: Removing unreachable block (ram,0x0001001482a4) */
/* WARNING: Removing unreachable block (ram,0x0001001482ac) */
/* WARNING: Removing unreachable block (ram,0x0001001482c0) */
/* WARNING: Removing unreachable block (ram,0x0001001482c8) */
/* WARNING: Removing unreachable block (ram,0x0001001482d4) */
/* WARNING: Removing unreachable block (ram,0x0001001482fc) */
/* WARNING: Removing unreachable block (ram,0x000100148308) */
/* WARNING: Removing unreachable block (ram,0x000100148348) */
/* WARNING: Removing unreachable block (ram,0x000100148320) */
/* WARNING: Removing unreachable block (ram,0x00010014834c) */
/* WARNING: Removing unreachable block (ram,0x000100148278) */
/* WARNING: Removing unreachable block (ram,0x000100148354) */
/* WARNING: Removing unreachable block (ram,0x000100148428) */
/* WARNING: Removing unreachable block (ram,0x00010014842c) */
/* WARNING: Removing unreachable block (ram,0x000100148358) */
/* WARNING: Removing unreachable block (ram,0x000100148448) */
/* WARNING: Removing unreachable block (ram,0x00010014844c) */
/* WARNING: Removing unreachable block (ram,0x000100148454) */
/* WARNING: Removing unreachable block (ram,0x000100148480) */
/* WARNING: Removing unreachable block (ram,0x000100148474) */
/* WARNING: Removing unreachable block (ram,0x000100148484) */
/* WARNING: Removing unreachable block (ram,0x000100148370) */
/* WARNING: Removing unreachable block (ram,0x000100148388) */
/* WARNING: Removing unreachable block (ram,0x000100148390) */
/* WARNING: Removing unreachable block (ram,0x0001001483a4) */
/* WARNING: Removing unreachable block (ram,0x0001001483b0) */
/* WARNING: Removing unreachable block (ram,0x0001001483c0) */
/* WARNING: Removing unreachable block (ram,0x0001001483cc) */
/* WARNING: Removing unreachable block (ram,0x0001001483d0) */
/* WARNING: Removing unreachable block (ram,0x0001001483e0) */
/* WARNING: Removing unreachable block (ram,0x0001001483f0) */
/* WARNING: Removing unreachable block (ram,0x000100148410) */
/* WARNING: Removing unreachable block (ram,0x000100148488) */
/* WARNING: Removing unreachable block (ram,0x000100148408) */
/* WARNING: Removing unreachable block (ram,0x00010014823c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b2f08d0(ulong *******param_1,ulong *******param_2,ulong *******param_3,
                  ulong *******param_4)

{
  undefined1 *puVar1;
  byte *pbVar2;
  ushort uVar3;
  bool bVar4;
  ulong ******ppppppuVar5;
  ulong *******pppppppuVar6;
  ulong *puVar7;
  ulong *******pppppppuVar8;
  ulong *******pppppppuVar9;
  ulong ******ppppppuVar10;
  ulong ******ppppppuVar11;
  ulong ******ppppppuVar12;
  ulong uVar13;
  ulong *******pppppppuVar14;
  ulong *******extraout_x8;
  ulong *******extraout_x8_00;
  byte bVar15;
  uint uVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong *******pppppppuVar20;
  ulong *******pppppppuVar21;
  ulong *******pppppppuVar22;
  ulong *******unaff_x23;
  ulong *******unaff_x24;
  ulong *******unaff_x25;
  ulong ******ppppppuVar23;
  ulong *******pppppppuStack_198;
  ulong ******ppppppuStack_190;
  undefined8 uStack_188;
  ulong *******pppppppuStack_180;
  ulong ******ppppppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  ulong *******pppppppuStack_158;
  ulong *******pppppppuStack_150;
  ulong *******pppppppuStack_148;
  ulong *******pppppppuStack_140;
  ulong *******pppppppuStack_138;
  ulong *******pppppppuStack_130;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  ulong *******pppppppuStack_110;
  undefined6 uStack_108;
  undefined2 uStack_102;
  undefined6 uStack_100;
  undefined1 uStack_fa;
  byte bStack_f9;
  ulong *******pppppppuStack_f8;
  ulong ******ppppppuStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  ulong *******pppppppuStack_80;
  ulong *******pppppppuStack_78;
  undefined8 uStack_70;
  
  pppppppuVar22 = (ulong *******)&pppppppuStack_80;
  pppppppuVar6 = (ulong *******)&pppppppuStack_80;
  pppppppuVar14 = (ulong *******)&pppppppuStack_80;
  pppppppuVar9 = param_2;
  pppppppuVar8 = param_3;
  pppppppuVar20 = param_4;
  func_0x000107c2cab8(&pppppppuStack_80);
  pppppppuVar21 = pppppppuStack_78;
  if (-1 < (char)uStack_70._7_1_) {
    pppppppuVar21 = (ulong *******)(ulong)uStack_70._7_1_;
  }
  if (pppppppuVar21 == (ulong *******)0x0) {
    if ((char)uStack_70._7_1_ < '\0') {
      __ZdlPv(pppppppuStack_80);
    }
    goto LAB_10b2f0ac4;
  }
  if ((char)uStack_70._7_1_ < '\0') {
    if (pppppppuStack_78 == (ulong *******)0x1) {
      bVar15 = *(byte *)pppppppuStack_80;
      unaff_x23 = (ulong *******)(ulong)bVar15;
      __ZdlPv();
      pppppppuVar9 = pppppppuStack_80;
      pppppppuStack_80._0_1_ = bVar15;
      goto joined_r0x00010b2f0ac0;
    }
    if (pppppppuStack_78 == (ulong *******)0x2) {
      uVar3 = *(ushort *)pppppppuStack_80;
      unaff_x23 = (ulong *******)(ulong)uVar3;
      unaff_x24 = (ulong *******)0x2e2e;
      __ZdlPv();
      pppppppuVar9 = pppppppuStack_80;
      pppppppuStack_80._0_2_ = uVar3;
      goto joined_r0x00010b2f09d4;
    }
    __ZdlPv();
    pppppppuVar9 = pppppppuStack_80;
  }
  else if (uStack_70._7_1_ == 1) {
joined_r0x00010b2f0ac0:
    if ((byte)pppppppuStack_80 == 0x2e) {
LAB_10b2f0ac4:
      *param_1 = (ulong ******)0x0;
      param_1[1] = (ulong ******)0x0;
      param_1[2] = (ulong ******)0x0;
      return;
    }
  }
  else if (uStack_70._7_1_ == 2) {
joined_r0x00010b2f09d4:
    if ((ushort)pppppppuStack_80 == 0x2e2e) goto LAB_10b2f0ac4;
  }
  if ((param_4 == (ulong *******)0x0) ||
     ((param_4 == (ulong *******)0x1 && (*(byte *)param_3 == 0x2e)))) {
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      ppppppuVar11 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = ppppppuVar11;
      param_1[2] = param_2[2];
      return;
    }
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
    return;
  }
  pppppppuStack_78 = (ulong *******)0xaaaaaaaaaaaaaaaa;
  uStack_70 = (ulong ******)0xaaaaaaaaaaaaaaaa;
  pppppppuStack_80 = (ulong *******)0xaaaaaaaaaaaaaaaa;
  if ((char)*(byte *)((long)param_2 + 0x17) < '\0') {
    pppppppuVar8 = (ulong *******)*param_2;
    pppppppuVar20 = (ulong *******)param_2[1];
    func_0x000107c3192c();
    bVar15 = *(byte *)param_3;
    pppppppuVar9 = pppppppuVar22;
    ppppppuVar11 = uStack_70;
  }
  else {
    pppppppuStack_78 = (ulong *******)param_2[1];
    pppppppuStack_80 = (ulong *******)*param_2;
    uStack_70 = param_2[2];
    bVar15 = *(byte *)param_3;
    ppppppuVar11 = uStack_70;
  }
  if (bVar15 != 0x2e) {
    uStack_70._7_1_ = (byte)((ulong)ppppppuVar11 >> 0x38);
    pppppppuVar21 = pppppppuStack_78;
    pppppppuVar22 = pppppppuStack_80;
    if (-1 < (long)ppppppuVar11) {
      pppppppuVar21 = (ulong *******)(ulong)uStack_70._7_1_;
      pppppppuVar22 = (ulong *******)&pppppppuStack_80;
    }
    if (((byte *)((long)pppppppuVar22 + (long)pppppppuVar21))[-1] != 0x2e) {
      pppppppuVar22 = (ulong *******)(((ulong)ppppppuVar11 & 0x7fffffffffffffff) - 1);
      if (-1 < (long)ppppppuVar11) {
        pppppppuVar22 = (ulong *******)0x16;
      }
      bVar15 = uStack_70._7_1_;
      uStack_70 = ppppppuVar11;
      if (pppppppuVar22 == pppppppuVar21) {
        pppppppuVar20 = (ulong *******)0x1;
        pppppppuVar8 = pppppppuVar21;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm();
        pppppppuVar9 = pppppppuVar6;
        bVar15 = uStack_70._7_1_;
        pppppppuStack_78 = pppppppuVar21;
      }
      pppppppuVar6 = pppppppuStack_80;
      if (-1 < (char)bVar15) {
        pppppppuVar6 = (ulong *******)&pppppppuStack_80;
      }
      *(byte *)((long)pppppppuVar6 + (long)pppppppuVar21) = 0x2e;
      pppppppuVar21 = (ulong *******)((long)pppppppuVar21 + 1);
      pppppppuVar22 = pppppppuVar21;
      if (-1 < (long)uStack_70) {
        uStack_70 = (ulong ******)
                    (CONCAT17((char)pppppppuVar21,(undefined7)uStack_70) & 0x7fffffffffffffff);
        pppppppuVar22 = pppppppuStack_78;
      }
      pppppppuStack_78 = pppppppuVar22;
      *(byte *)((long)pppppppuVar6 + (long)pppppppuVar21) = 0;
      ppppppuVar11 = uStack_70;
    }
  }
  uStack_70 = ppppppuVar11;
  pppppppuVar6 = pppppppuStack_78;
  pppppppuVar22 = pppppppuStack_80;
  pppppppuVar21 = (ulong *******)(long)(char)uStack_70._7_1_;
  if ((long)pppppppuVar21 < 0) {
    uVar13 = ((ulong)uStack_70 & 0x7fffffffffffffff) - 1;
    pppppppuVar21 = pppppppuStack_78;
    pppppppuVar14 = pppppppuStack_80;
    if (param_4 <= (ulong *******)(uVar13 - (long)pppppppuStack_78)) goto LAB_10b2f0c44;
    pbVar17 = (byte *)(((long)param_4 - uVar13) + (long)pppppppuStack_78);
    if (pbVar17 <= (byte *)(0x7ffffffffffffff7 - ((ulong)uStack_70 & 0x7fffffffffffffff))) {
      if (uVar13 < 0x3ffffffffffffff3) goto LAB_10b2f0bac;
      bVar4 = false;
      unaff_x25 = (ulong *******)0x7ffffffffffffff7;
      pppppppuVar21 = unaff_x25;
      __Znwm();
      pppppppuVar14 = pppppppuVar22;
      goto joined_r0x00010b2f0d78;
    }
LAB_10b2f0d84:
    func_0x000104bd47d4();
  }
  else {
    if ((ulong *******)(0x16 - (long)pppppppuVar21) < param_4) {
      pbVar17 = (byte *)((long)param_4 + (long)pppppppuVar21) + -0x16;
      if ((byte *)0x7fffffffffffffe0 < pbVar17) goto LAB_10b2f0d84;
      uVar13 = 0x16;
      pppppppuVar6 = pppppppuVar21;
      pppppppuVar14 = (ulong *******)&pppppppuStack_80;
LAB_10b2f0bac:
      pbVar2 = pbVar17 + uVar13;
      if (pbVar17 + uVar13 <= (byte *)(uVar13 * 2)) {
        pbVar2 = (byte *)(uVar13 * 2);
      }
      pppppppuVar9 = (ulong *******)0x19;
      if (((ulong)pbVar2 | 7) != 0x17) {
        pppppppuVar9 = (ulong *******)(((ulong)pbVar2 | 7) + 1);
      }
      unaff_x25 = (ulong *******)0x17;
      if ((byte *)0x16 < pbVar2) {
        unaff_x25 = pppppppuVar9;
      }
      bVar4 = uVar13 == 0x16;
      pppppppuVar21 = unaff_x25;
      __Znwm();
joined_r0x00010b2f0d78:
      if (pppppppuVar6 != (ulong *******)0x0) {
        _memmove(pppppppuVar21,pppppppuVar14,pppppppuVar6);
      }
      pppppppuVar9 = (ulong *******)((long)pppppppuVar21 + (long)pppppppuVar6);
      pppppppuVar20 = param_4;
      _memmove();
      if (!bVar4) {
        pppppppuVar9 = pppppppuVar14;
        __ZdlPv();
      }
      uStack_70 = (ulong ******)((ulong)unaff_x25 | 0x8000000000000000);
      pppppppuStack_78 = (ulong *******)((long)pppppppuVar6 + (long)param_4);
      *(byte *)((long)pppppppuVar21 + (long)pppppppuStack_78) = 0;
      pppppppuVar8 = param_3;
      bVar15 = (byte)((ulong)uStack_70 >> 0x38);
      pppppppuStack_80 = pppppppuVar21;
    }
    else {
LAB_10b2f0c44:
      pppppppuVar9 = (ulong *******)((long)pppppppuVar14 + (long)pppppppuVar21);
      pppppppuVar20 = param_4;
      _memmove();
      pppppppuVar21 = (ulong *******)((long)pppppppuVar21 + (long)param_4);
      pppppppuVar8 = pppppppuVar21;
      if (-1 < (long)uStack_70) {
        uStack_70 = (ulong ******)
                    (CONCAT17((char)pppppppuVar21,(undefined7)uStack_70) & 0x7fffffffffffffff);
        pppppppuVar8 = pppppppuStack_78;
      }
      pppppppuStack_78 = pppppppuVar8;
      *(byte *)((long)pppppppuVar14 + (long)pppppppuVar21) = 0;
      pppppppuVar8 = param_3;
      bVar15 = uStack_70._7_1_;
    }
    unaff_x24 = pppppppuStack_80;
    pppppppuVar21 = pppppppuStack_80;
    if (-1 < (char)bVar15) {
      pppppppuVar21 = (ulong *******)&pppppppuStack_80;
    }
    pppppppuVar6 = pppppppuStack_78;
    if (-1 < (char)bVar15) {
      pppppppuVar6 = (ulong *******)(ulong)bVar15;
    }
    if ((ulong *******)0x7ffffffffffffff7 < pppppppuVar6) {
      FUN_10b2ecf74();
      unaff_x23 = pppppppuVar14;
      goto LAB_10b2f0d84;
    }
    if (pppppppuVar6 < (ulong *******)0x17) {
      *(byte *)((long)param_1 + 0x17) = (byte)pppppppuVar6;
      pppppppuVar20 = param_1;
      if (pppppppuVar6 != (ulong *******)0x0) goto LAB_10b2f0cdc;
    }
    else {
      pppppppuVar9 = (ulong *******)0x19;
      if (((ulong)pppppppuVar6 | 7) != 0x17) {
        pppppppuVar9 = (ulong *******)(((ulong)pppppppuVar6 | 7) + 1);
      }
      pppppppuVar20 = pppppppuVar9;
      __Znwm();
      param_1[1] = (ulong ******)pppppppuVar6;
      param_1[2] = (ulong ******)((ulong)pppppppuVar9 | 0x8000000000000000);
      *param_1 = (ulong ******)pppppppuVar20;
LAB_10b2f0cdc:
      _memmove(pppppppuVar20,pppppppuVar21,pppppppuVar6);
    }
    *(byte *)((long)pppppppuVar20 + (long)pppppppuVar6) = 0;
    bVar15 = *(byte *)((long)param_1 + 0x17);
    pppppppuVar21 = (ulong *******)*param_1;
    unaff_x23 = (ulong *******)param_1[1];
    pppppppuVar20 = unaff_x23;
    pppppppuVar14 = pppppppuVar21;
    if (-1 < (char)bVar15) {
      pppppppuVar20 = (ulong *******)(ulong)bVar15;
      pppppppuVar14 = param_1;
    }
    pppppppuVar8 = (ulong *******)0x0;
    pppppppuVar9 = pppppppuVar14;
    _memchr();
    if ((pppppppuVar9 == (ulong *******)0x0) ||
       (pppppppuVar14 = (ulong *******)((long)pppppppuVar9 - (long)pppppppuVar14),
       pppppppuVar14 == (ulong *******)0xffffffffffffffff)) goto LAB_10b2f0d4c;
    if ((char)bVar15 < '\0') {
      if (pppppppuVar14 <= unaff_x23) {
        param_1[1] = (ulong ******)pppppppuVar14;
        goto LAB_10b2f0d48;
      }
    }
    else if (pppppppuVar14 <= (ulong *******)(ulong)bVar15) {
      *(byte *)((long)param_1 + 0x17) = (byte)pppppppuVar14;
      pppppppuVar21 = param_1;
LAB_10b2f0d48:
      *(byte *)((long)pppppppuVar21 + (long)pppppppuVar14) = 0;
LAB_10b2f0d4c:
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppppuStack_80);
      }
      return;
    }
  }
  func_0x000104c03f14();
  pppppppuVar21 = (ulong *******)&pppppppuStack_110;
  pppppppuVar14 = (ulong *******)&pppppppuStack_110;
  uStack_88 = 0x10b2f0d8c;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x000107c2cab8(&pppppppuStack_f8);
  ppppppuVar11 = ppppppuStack_f0;
  if (-1 < (char)uStack_e8._7_1_) {
    ppppppuVar11 = (ulong ******)(ulong)uStack_e8._7_1_;
  }
  if (ppppppuVar11 == (ulong ******)0x0) {
    if ((char)uStack_e8._7_1_ < '\0') {
      __ZdlPv(pppppppuStack_f8);
    }
    goto LAB_10b2f0e70;
  }
  if ((char)uStack_e8._7_1_ < '\0') {
    if (ppppppuStack_f0 == (ulong ******)0x1) {
      bVar15 = *(byte *)pppppppuStack_f8;
      unaff_x23 = (ulong *******)(ulong)bVar15;
      __ZdlPv();
joined_r0x00010b2f0e58:
      if (bVar15 == 0x2e) {
LAB_10b2f0e70:
        *extraout_x8 = (ulong ******)0x0;
        extraout_x8[1] = (ulong ******)0x0;
        extraout_x8[2] = (ulong ******)0x0;
        return;
      }
    }
    else if (ppppppuStack_f0 == (ulong ******)0x2) {
      uVar3 = *(ushort *)pppppppuStack_f8;
      unaff_x23 = (ulong *******)(ulong)uVar3;
      unaff_x24 = (ulong *******)0x2e2e;
      __ZdlPv();
joined_r0x00010b2f0e04:
      if (uVar3 == 0x2e2e) goto LAB_10b2f0e70;
    }
    else {
      __ZdlPv();
    }
  }
  else {
    if (uStack_e8._7_1_ == 1) {
      bVar15 = (byte)pppppppuStack_f8;
      goto joined_r0x00010b2f0e58;
    }
    if (uStack_e8._7_1_ == 2) {
      uVar3 = (ushort)pppppppuStack_f8;
      goto joined_r0x00010b2f0e04;
    }
  }
  ppppppuStack_f0 = (ulong ******)0xaaaaaaaaaaaaaaaa;
  uStack_e8 = (ulong ******)0xaaaaaaaaaaaaaaaa;
  pppppppuStack_f8 = (ulong *******)0xaaaaaaaaaaaaaaaa;
  pppppppuVar6 = (ulong *******)&pppppppuStack_f8;
  FUN_10b2f067c();
  if ((pppppppuVar20 == (ulong *******)0x0) ||
     ((pppppppuVar20 == (ulong *******)0x1 && (*(byte *)pppppppuVar8 == 0x2e)))) {
    extraout_x8[1] = ppppppuStack_f0;
    *extraout_x8 = (ulong ******)pppppppuStack_f8;
    extraout_x8[2] = uStack_e8;
    return;
  }
  uStack_108 = 0xaaaaaaaaaaaa;
  uStack_102 = 0xaaaa;
  uStack_100 = 0xaaaaaaaaaaaa;
  uStack_fa = 0xaa;
  bStack_f9 = 0xaa;
  pppppppuStack_110 = (ulong *******)0xaaaaaaaaaaaaaaaa;
  if ((long)uStack_e8 < 0) {
    pppppppuVar9 = pppppppuStack_f8;
    func_0x000107c3192c(&pppppppuStack_110,pppppppuStack_f8,ppppppuStack_f0);
    if (*(byte *)pppppppuVar8 != 0x2e) goto LAB_10b2f0f58;
joined_r0x00010b2f108c:
    pppppppuVar22 = (ulong *******)(long)(char)bStack_f9;
    if ((long)pppppppuVar22 < 0) {
      pppppppuVar22 = (ulong *******)CONCAT26(uStack_102,uStack_108);
      uVar18 = CONCAT17(bStack_f9,CONCAT16(uStack_fa,uStack_100)) & 0x7fffffffffffffff;
      uVar13 = uVar18 - 1;
      pppppppuVar14 = pppppppuStack_110;
      if ((ulong *******)(uVar13 - (long)pppppppuVar22) < pppppppuVar20) {
        pbVar17 = (byte *)(((long)pppppppuVar20 - uVar13) + (long)pppppppuVar22);
        if ((byte *)(0x7ffffffffffffff7 - uVar18) < pbVar17) goto LAB_10b2f12d8;
        if (uVar13 < 0x3ffffffffffffff3) goto LAB_10b2f10d0;
        bVar4 = false;
        unaff_x25 = (ulong *******)0x7ffffffffffffff7;
        pppppppuVar6 = unaff_x25;
        __Znwm();
joined_r0x00010b2f1110:
        if (pppppppuVar22 != (ulong *******)0x0) {
          _memmove(pppppppuVar6,pppppppuVar14,pppppppuVar22);
        }
        pppppppuVar21 = (ulong *******)((long)pppppppuVar6 + (long)pppppppuVar22);
        _memmove(pppppppuVar21,pppppppuVar8,pppppppuVar20);
        if (!bVar4) {
          pppppppuVar21 = pppppppuVar14;
          __ZdlPv();
        }
        bStack_f9 = (byte)((ulong)unaff_x25 >> 0x38) | 0x80;
        pppppppuVar20 = (ulong *******)((long)pppppppuVar22 + (long)pppppppuVar20);
        uStack_108 = SUB86(pppppppuVar20,0);
        uStack_102 = (undefined2)((ulong)pppppppuVar20 >> 0x30);
        uStack_100 = SUB86(unaff_x25,0);
        uStack_fa = (undefined1)((ulong)unaff_x25 >> 0x30);
        *(byte *)((long)pppppppuVar6 + (long)pppppppuVar20) = 0;
        pppppppuVar9 = pppppppuVar8;
        pppppppuStack_110 = pppppppuVar6;
      }
      else {
LAB_10b2f1160:
        pppppppuVar21 = (ulong *******)((long)pppppppuVar14 + (long)pppppppuVar22);
        _memmove(pppppppuVar21,pppppppuVar8,pppppppuVar20);
        pbVar17 = (byte *)((long)pppppppuVar22 + (long)pppppppuVar20);
        if ((char)bStack_f9 < '\0') {
          uStack_108 = SUB86(pbVar17,0);
          uStack_102 = (undefined2)((ulong)pbVar17 >> 0x30);
        }
        else {
          bStack_f9 = (byte)pbVar17 & 0x7f;
        }
        *(byte *)((long)pppppppuVar14 + (long)pbVar17) = 0;
        pppppppuVar20 = (ulong *******)CONCAT26(uStack_102,uStack_108);
        pppppppuVar9 = pppppppuVar8;
      }
      unaff_x24 = pppppppuStack_110;
      pppppppuVar8 = pppppppuStack_110;
      if (-1 < (char)bStack_f9) {
        pppppppuVar8 = (ulong *******)&pppppppuStack_110;
      }
      if (-1 < (char)bStack_f9) {
        pppppppuVar20 = (ulong *******)(ulong)bStack_f9;
      }
      if ((ulong *******)0x7ffffffffffffff7 < pppppppuVar20) {
        FUN_10b2ecf74();
        unaff_x23 = pppppppuVar14;
        goto LAB_10b2f12d8;
      }
      if (pppppppuVar20 < (ulong *******)0x17) {
        *(byte *)((long)extraout_x8 + 0x17) = (byte)pppppppuVar20;
        pppppppuVar21 = extraout_x8;
        if (pppppppuVar20 != (ulong *******)0x0) goto LAB_10b2f11f8;
      }
      else {
        pppppppuVar9 = (ulong *******)0x19;
        if (((ulong)pppppppuVar20 | 7) != 0x17) {
          pppppppuVar9 = (ulong *******)(((ulong)pppppppuVar20 | 7) + 1);
        }
        pppppppuVar21 = pppppppuVar9;
        __Znwm();
        extraout_x8[1] = (ulong ******)pppppppuVar20;
        extraout_x8[2] = (ulong ******)((ulong)pppppppuVar9 | 0x8000000000000000);
        *extraout_x8 = (ulong ******)pppppppuVar21;
LAB_10b2f11f8:
        _memmove(pppppppuVar21,pppppppuVar8,pppppppuVar20);
      }
      *(byte *)((long)pppppppuVar21 + (long)pppppppuVar20) = 0;
      bVar15 = *(byte *)((long)extraout_x8 + 0x17);
      pppppppuVar22 = (ulong *******)(ulong)bVar15;
      pppppppuVar8 = (ulong *******)*extraout_x8;
      unaff_x23 = (ulong *******)extraout_x8[1];
      pppppppuVar14 = unaff_x23;
      pppppppuVar20 = pppppppuVar8;
      if (-1 < (char)bVar15) {
        pppppppuVar14 = pppppppuVar22;
        pppppppuVar20 = extraout_x8;
      }
      pppppppuVar9 = (ulong *******)0x0;
      pppppppuVar21 = pppppppuVar20;
      _memchr(pppppppuVar20,0,pppppppuVar14);
      if ((pppppppuVar21 == (ulong *******)0x0) ||
         (pppppppuVar14 = (ulong *******)((long)pppppppuVar21 - (long)pppppppuVar20),
         pppppppuVar14 == (ulong *******)0xffffffffffffffff)) goto LAB_10b2f1268;
      if ((char)bVar15 < '\0') {
        if (pppppppuVar14 <= unaff_x23) {
          extraout_x8[1] = (ulong ******)pppppppuVar14;
          goto LAB_10b2f1264;
        }
      }
      else if (pppppppuVar14 <= pppppppuVar22) {
        *(byte *)((long)extraout_x8 + 0x17) = (byte)pppppppuVar14;
        pppppppuVar8 = extraout_x8;
LAB_10b2f1264:
        *(byte *)((long)pppppppuVar8 + (long)pppppppuVar14) = 0;
LAB_10b2f1268:
        if ((char)bStack_f9 < '\0') {
          __ZdlPv(pppppppuStack_110);
        }
        if ((long)uStack_e8 < 0) {
          __ZdlPv(pppppppuStack_f8);
        }
        return;
      }
    }
    else {
      if (pppppppuVar20 <= (ulong *******)(0x16 - (long)pppppppuVar22)) goto LAB_10b2f1160;
      pbVar17 = (byte *)((long)pppppppuVar20 + (long)pppppppuVar22) + -0x16;
      if (pbVar17 < (byte *)0x7fffffffffffffe1) {
        uVar13 = 0x16;
        pppppppuVar14 = (ulong *******)&pppppppuStack_110;
LAB_10b2f10d0:
        pbVar2 = pbVar17 + uVar13;
        if (pbVar17 + uVar13 <= (byte *)(uVar13 * 2)) {
          pbVar2 = (byte *)(uVar13 * 2);
        }
        pppppppuVar9 = (ulong *******)0x19;
        if (((ulong)pbVar2 | 7) != 0x17) {
          pppppppuVar9 = (ulong *******)(((ulong)pbVar2 | 7) + 1);
        }
        unaff_x25 = (ulong *******)0x17;
        if ((byte *)0x16 < pbVar2) {
          unaff_x25 = pppppppuVar9;
        }
        bVar4 = uVar13 == 0x16;
        pppppppuVar6 = unaff_x25;
        __Znwm();
        goto joined_r0x00010b2f1110;
      }
LAB_10b2f12d8:
      func_0x000104bd47d4();
    }
    func_0x000104c03f14();
  }
  else {
    uStack_108 = SUB86(ppppppuStack_f0,0);
    uStack_102 = (undefined2)((ulong)ppppppuStack_f0 >> 0x30);
    pppppppuStack_110 = pppppppuStack_f8;
    uStack_100 = SUB86(uStack_e8,0);
    uStack_fa = (undefined1)((ulong)uStack_e8 >> 0x30);
    pppppppuVar21 = pppppppuVar6;
    bStack_f9 = uStack_e8._7_1_;
    if (*(byte *)pppppppuVar8 == 0x2e) goto joined_r0x00010b2f108c;
LAB_10b2f0f58:
    pppppppuVar6 = pppppppuStack_110;
    unaff_x25 = (ulong *******)(long)(char)bStack_f9;
    if (-1 < (long)unaff_x25) {
      pppppppuVar21 = (ulong *******)&pppppppuStack_110;
      if (bStack_f9 == 0x16) {
        unaff_x23 = (ulong *******)0x30;
        pppppppuVar21 = (ulong *******)0x30;
        __Znwm();
        pppppppuVar21[1] = (ulong ******)CONCAT26(uStack_102,uStack_108);
        *pppppppuVar21 = (ulong ******)pppppppuStack_110;
        *(ulong *)((long)pppppppuVar21 + 0xe) = CONCAT62(uStack_100,uStack_102);
        unaff_x25 = (ulong *******)0x16;
        pppppppuVar22 = (ulong *******)0x16;
        pppppppuVar6 = unaff_x24;
LAB_10b2f1048:
        bStack_f9 = (byte)((ulong)unaff_x23 >> 0x38) | 0x80;
        uStack_108 = SUB86(pppppppuVar22,0);
        uStack_102 = (undefined2)((ulong)pppppppuVar22 >> 0x30);
        uStack_100 = SUB86(unaff_x23,0);
        uStack_fa = (undefined1)((ulong)unaff_x23 >> 0x30);
        unaff_x24 = pppppppuVar6;
        pppppppuStack_110 = pppppppuVar21;
      }
LAB_10b2f1054:
      *(byte *)((long)pppppppuVar21 + (long)unaff_x25) = 0x2e;
      pbVar17 = (byte *)((long)unaff_x25 + 1);
      if ((char)bStack_f9 < '\0') {
        uStack_108 = SUB86(pbVar17,0);
        uStack_102 = (undefined2)((ulong)pbVar17 >> 0x30);
        *(byte *)((long)pppppppuVar21 + (long)pbVar17) = 0;
      }
      else {
        bStack_f9 = (byte)pbVar17 & 0x7f;
        *(byte *)((long)pppppppuVar21 + (long)pbVar17) = 0;
      }
      goto joined_r0x00010b2f108c;
    }
    unaff_x25 = (ulong *******)CONCAT26(uStack_102,uStack_108);
    pppppppuVar22 =
         (ulong *******)
         ((CONCAT17(bStack_f9,CONCAT16(uStack_fa,uStack_100)) & 0x7fffffffffffffff) - 1);
    if (pppppppuVar22 != unaff_x25) {
      pppppppuVar21 = pppppppuStack_110;
      if (-1 < (char)bStack_f9) {
        pppppppuVar21 = (ulong *******)&pppppppuStack_110;
      }
      goto LAB_10b2f1054;
    }
    if (pppppppuVar22 != (ulong *******)0x7ffffffffffffff7) {
      unaff_x23 = (ulong *******)0x7ffffffffffffff7;
      if (pppppppuVar22 < (ulong *******)0x3ffffffffffffff3) {
        if (pppppppuVar22 == (ulong *******)0x0) {
          unaff_x23 = (ulong *******)0x17;
        }
        else {
          uVar13 = (long)pppppppuVar22 * 2 | 7;
          pppppppuVar21 = (ulong *******)0x19;
          if (uVar13 != 0x17) {
            pppppppuVar21 = (ulong *******)(uVar13 + 1);
          }
          unaff_x23 = (ulong *******)0x17;
          if ((ulong *******)0xb < pppppppuVar22) {
            unaff_x23 = pppppppuVar21;
          }
        }
      }
      pppppppuVar21 = unaff_x23;
      __Znwm();
      if ((pppppppuVar22 == (ulong *******)0x0) ||
         (pppppppuVar9 = pppppppuVar6, _memmove(), pppppppuVar22 != (ulong *******)0x16)) {
        __ZdlPv(pppppppuVar6);
      }
      goto LAB_10b2f1048;
    }
  }
  func_0x000104c4f6b8();
  bVar15 = *(byte *)((long)pppppppuVar9 + 0x17);
  pppppppuVar14 = (ulong *******)*pppppppuVar9;
  if (-1 < (long)(char)bVar15) {
    pppppppuVar14 = pppppppuVar9;
  }
  ppppppuVar11 = pppppppuVar9[1];
  if (-1 < (char)bVar15) {
    ppppppuVar11 = (ulong ******)(long)(char)bVar15;
  }
  uStack_160 = 0x7ffffffffffffff7;
  pcStack_118 = FUN_10b2f12e4;
  pppppppuStack_180 = (ulong *******)0x0;
  ppppppuStack_178 = (ulong ******)0x0;
  uStack_170 = 0;
  pppppppuStack_158 = unaff_x25;
  pppppppuStack_150 = unaff_x24;
  pppppppuStack_148 = unaff_x23;
  pppppppuStack_140 = pppppppuVar22;
  pppppppuStack_138 = pppppppuVar8;
  pppppppuStack_130 = pppppppuVar20;
  ppuStack_120 = &puStack_90;
  if (ppppppuVar11 == (ulong ******)0x0) {
code_r0x00010014804c:
    ppppppuVar10 = (ulong ******)0x0;
    bVar15 = *(byte *)((long)pppppppuVar21 + 0x17);
joined_r0x00010014805c:
    ppppppuVar23 = (ulong ******)(long)(char)bVar15;
    pppppppuVar9 = pppppppuVar21;
    ppppppuVar12 = ppppppuVar23;
    if ((long)ppppppuVar23 < 0) {
      pppppppuVar9 = (ulong *******)*pppppppuVar21;
      ppppppuVar12 = pppppppuVar21[1];
    }
    puVar7 = (ulong *)&UNK_10e573fb0;
    func_0x000107c610b0(pppppppuVar9,&UNK_10e573fb0,ppppppuVar12 != (ulong ******)0x0);
    if ((ppppppuVar12 == (ulong ******)0x1 && (int)pppppppuVar9 == 0) &&
        ppppppuVar11 != (ulong ******)0x0) {
      if ((ulong ******)0x7ffffffffffffff7 < ppppppuVar11) goto code_r0x0001001484cc;
      if (ppppppuVar11 < (ulong ******)0x17) {
        *(byte *)((long)extraout_x8_00 + 0x17) = (byte)ppppppuVar11;
        pppppppuVar20 = extraout_x8_00;
      }
      else {
        pppppppuVar9 = (ulong *******)0x19;
        if (((ulong)ppppppuVar11 | 7) != 0x17) {
          pppppppuVar9 = (ulong *******)(((ulong)ppppppuVar11 | 7) + 1);
        }
        pppppppuVar20 = pppppppuVar9;
        func_0x000107c60e20();
        extraout_x8_00[1] = ppppppuVar11;
        extraout_x8_00[2] = (ulong ******)((ulong)pppppppuVar9 | 0x8000000000000000);
        *extraout_x8_00 = (ulong ******)pppppppuVar20;
      }
      func_0x000107c610b8(pppppppuVar20,pppppppuVar14,ppppppuVar11);
      *(byte *)((long)pppppppuVar20 + (long)ppppppuVar11) = 0;
      bVar15 = *(byte *)((long)extraout_x8_00 + 0x17);
      pppppppuVar20 = (ulong *******)*extraout_x8_00;
      ppppppuVar12 = extraout_x8_00[1];
      ppppppuVar11 = ppppppuVar12;
      pppppppuVar21 = pppppppuVar20;
      if (-1 < (char)bVar15) {
        ppppppuVar11 = (ulong ******)(ulong)bVar15;
        pppppppuVar21 = extraout_x8_00;
      }
      puVar7 = (ulong *)0x0;
      pppppppuVar9 = pppppppuVar21;
      func_0x000107c610ac(pppppppuVar21,0,ppppppuVar11);
      if ((pppppppuVar9 == (ulong *******)0x0) ||
         (ppppppuVar11 = (ulong ******)((long)pppppppuVar9 - (long)pppppppuVar21),
         ppppppuVar11 == (ulong ******)0xffffffffffffffff)) {
code_r0x00010014848c:
        pppppppuVar20 = pppppppuStack_180;
        if (((uint)ppppppuVar10 >> 7 & 1) == 0) {
          return;
        }
code_r0x000107c60e14:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(pppppppuVar20);
        return;
      }
      if ((char)bVar15 < '\0') {
        if (ppppppuVar11 <= ppppppuVar12) {
          extraout_x8_00[1] = ppppppuVar11;
          *(byte *)((long)pppppppuVar20 + (long)ppppppuVar11) = 0;
          goto code_r0x00010014848c;
        }
      }
      else if (ppppppuVar11 <= (ulong ******)(ulong)bVar15) {
        *(byte *)((long)extraout_x8_00 + 0x17) = (byte)ppppppuVar11;
        *(byte *)((long)extraout_x8_00 + (long)ppppppuVar11) = 0;
        goto code_r0x00010014848c;
      }
    }
    else {
      extraout_x8_00[1] = (ulong ******)0xaaaaaaaaaaaaaaaa;
      extraout_x8_00[2] = (ulong ******)0xaaaaaaaaaaaaaaaa;
      *extraout_x8_00 = (ulong ******)0xaaaaaaaaaaaaaaaa;
      ppppppuVar11 = pppppppuVar21[1];
      pppppppuVar20 = (ulong *******)*pppppppuVar21;
      if (-1 < (char)bVar15) {
        ppppppuVar11 = ppppppuVar23;
        pppppppuVar20 = pppppppuVar21;
      }
      if ((ulong ******)0x7ffffffffffffff7 < ppppppuVar11) goto code_r0x0001001484cc;
      if (ppppppuVar11 < (ulong ******)0x17) {
        *(byte *)((long)extraout_x8_00 + 0x17) = (byte)ppppppuVar11;
        pppppppuVar21 = extraout_x8_00;
        if (ppppppuVar11 != (ulong ******)0x0) goto code_r0x000100148108;
      }
      else {
        pppppppuVar9 = (ulong *******)0x19;
        if (((ulong)ppppppuVar11 | 7) != 0x17) {
          pppppppuVar9 = (ulong *******)(((ulong)ppppppuVar11 | 7) + 1);
        }
        pppppppuVar21 = pppppppuVar9;
        func_0x000107c60e20();
        extraout_x8_00[1] = ppppppuVar11;
        extraout_x8_00[2] = (ulong ******)((ulong)pppppppuVar9 | 0x8000000000000000);
        *extraout_x8_00 = (ulong ******)pppppppuVar21;
code_r0x000100148108:
        func_0x000107c610b8(pppppppuVar21,pppppppuVar20,ppppppuVar11);
      }
      *(byte *)((long)pppppppuVar21 + (long)ppppppuVar11) = 0;
      bVar15 = *(byte *)((long)extraout_x8_00 + 0x17);
      pppppppuVar20 = (ulong *******)*extraout_x8_00;
      ppppppuVar10 = extraout_x8_00[1];
      ppppppuVar11 = ppppppuVar10;
      pppppppuVar21 = pppppppuVar20;
      if (-1 < (char)bVar15) {
        ppppppuVar11 = (ulong ******)(ulong)bVar15;
        pppppppuVar21 = extraout_x8_00;
      }
      puVar7 = (ulong *)0x0;
      pppppppuVar8 = pppppppuVar21;
      func_0x000107c610ac(pppppppuVar21,0,ppppppuVar11);
      pppppppuVar9 = extraout_x8_00;
      if ((pppppppuVar8 == (ulong *******)0x0) ||
         (ppppppuVar11 = (ulong ******)((long)pppppppuVar8 - (long)pppppppuVar21),
         ppppppuVar11 == (ulong ******)0xffffffffffffffff)) goto code_r0x0001001484d8;
      pppppppuVar9 = pppppppuVar8;
      if ((char)bVar15 < '\0') {
        if (ppppppuVar11 <= ppppppuVar10) {
          extraout_x8_00[1] = ppppppuVar11;
          goto code_r0x00010014824c;
        }
      }
      else if (ppppppuVar11 <= (ulong ******)(ulong)bVar15) {
        *(byte *)((long)extraout_x8_00 + 0x17) = (byte)ppppppuVar11;
        pppppppuVar20 = extraout_x8_00;
code_r0x00010014824c:
        *(byte *)((long)pppppppuVar20 + (long)ppppppuVar11) = 0;
        pppppppuVar9 = extraout_x8_00;
        goto code_r0x0001001484d8;
      }
    }
  }
  else {
    puVar7 = (ulong *)0x0;
    pppppppuVar9 = pppppppuVar14;
    func_0x000107c610ac(pppppppuVar14,0,ppppppuVar11);
    if ((pppppppuVar9 == (ulong *******)0x0) ||
       (ppppppuVar10 = (ulong ******)((long)pppppppuVar9 - (long)pppppppuVar14),
       ppppppuVar10 == (ulong ******)0xffffffffffffffff)) goto code_r0x00010014804c;
    if (ppppppuVar10 <= ppppppuVar11) {
      ppppppuVar11 = ppppppuVar10;
    }
    if (ppppppuVar11 < (ulong ******)0x7ffffffffffffff8) {
      if (ppppppuVar11 < (ulong ******)0x17) {
        uStack_188 = CONCAT17((char)ppppppuVar11,(undefined7)uStack_188);
        pppppppuVar20 = (ulong *******)&pppppppuStack_198;
        if (pppppppuVar14 != pppppppuVar9) goto code_r0x000100148218;
        *(byte *)((long)pppppppuVar20 + (long)ppppppuVar11) = 0;
      }
      else {
        pppppppuVar9 = (ulong *******)0x19;
        if (((ulong)ppppppuVar11 | 7) != 0x17) {
          pppppppuVar9 = (ulong *******)(((ulong)ppppppuVar11 | 7) + 1);
        }
        pppppppuVar20 = pppppppuVar9;
        func_0x000107c60e20();
        uStack_188 = (ulong)pppppppuVar9 | 0x8000000000000000;
        pppppppuStack_198 = pppppppuVar20;
        ppppppuStack_190 = ppppppuVar11;
code_r0x000100148218:
        func_0x000107c610b8(pppppppuVar20,pppppppuVar14,ppppppuVar11);
        *(byte *)((long)pppppppuVar20 + (long)ppppppuVar11) = 0;
      }
      pppppppuVar20 = pppppppuStack_180;
      if ((long)uStack_170 < 0) goto code_r0x000107c60e14;
      uStack_170._7_1_ = (char)(uStack_188 >> 0x38);
      ppppppuVar10 = (ulong ******)(long)uStack_170._7_1_;
      pppppppuVar14 = pppppppuStack_198;
      if (-1 < (long)ppppppuVar10) {
        pppppppuVar14 = (ulong *******)&pppppppuStack_180;
      }
      ppppppuVar11 = ppppppuStack_190;
      if (-1 < (long)uStack_188) {
        ppppppuVar11 = ppppppuVar10;
      }
      bVar15 = *(byte *)((long)pppppppuVar21 + 0x17);
      pppppppuStack_180 = pppppppuStack_198;
      ppppppuStack_178 = ppppppuStack_190;
      uStack_170 = uStack_188;
      goto joined_r0x00010014805c;
    }
code_r0x0001001484cc:
    func_0x000107c35c54();
  }
  func_0x000104c03f14();
  func_0x000104bd47d4();
code_r0x0001001484d8:
  ppppppuVar11 = pppppppuVar9[1];
  if (-1 < (char)*(byte *)((long)pppppppuVar9 + 0x17)) {
    ppppppuVar11 = (ulong ******)(ulong)*(byte *)((long)pppppppuVar9 + 0x17);
  }
  if ((ulong ******)0x1 < ppppppuVar11) {
    pppppppuVar20 = pppppppuVar9;
    ppppppuVar10 = (ulong ******)0xffffffffffffffff;
    do {
      pppppppuVar21 = pppppppuVar9;
      if ((char)*(byte *)((long)pppppppuVar9 + 0x17) < '\0') {
        pppppppuVar21 = (ulong *******)*pppppppuVar9;
      }
      if (*(byte *)((long)pppppppuVar21 + ((long)ppppppuVar11 - 1U)) != 0x2f) {
        return;
      }
      bVar15 = *(byte *)((long)pppppppuVar9 + 0x17);
      ppppppuVar12 = (ulong ******)(ulong)bVar15;
      if ((ppppppuVar11 == (ulong ******)0x2) && (ppppppuVar10 != (ulong ******)0x3)) {
        pppppppuVar21 = pppppppuVar9;
        if ((char)bVar15 < '\0') {
          pppppppuVar21 = (ulong *******)*pppppppuVar9;
        }
        if (*(byte *)pppppppuVar21 == 0x2f) {
          return;
        }
      }
      ppppppuVar23 = (ulong ******)((long)ppppppuVar11 - 1);
      if ((char)bVar15 < '\0') {
        ppppppuVar12 = pppppppuVar9[1];
        puVar19 = (ulong *)((long)ppppppuVar23 - (long)ppppppuVar12);
        if (ppppppuVar23 < ppppppuVar12 || puVar19 == (ulong *)0x0) {
          pppppppuVar21 = (ulong *******)*pppppppuVar9;
          pppppppuVar9[1] = ppppppuVar23;
          goto code_r0x00010014852c;
        }
        if ((ulong ******)((long)ppppppuVar12 + 1U) == ppppppuVar11) goto code_r0x000100148534;
        uVar13 = ((ulong)pppppppuVar9[2] & 0x7fffffffffffffff) - 1;
        uVar16 = (uint)((ulong)pppppppuVar9[2] >> 0x3f);
        if ((ulong *)(uVar13 - (long)ppppppuVar12) < puVar19) goto code_r0x0001001485c4;
code_r0x00010014866c:
        pppppppuVar21 = pppppppuVar9;
        if (uVar16 != 0) goto code_r0x000100148674;
code_r0x000100148678:
        pppppppuVar20 = (ulong *******)((long)pppppppuVar21 + (long)ppppppuVar12);
        puVar7 = puVar19;
        func_0x000107c60ee4();
        ppppppuVar12 = (ulong ******)((long)ppppppuVar12 + (long)puVar19);
        if ((char)*(byte *)((long)pppppppuVar9 + 0x17) < '\0') {
          pppppppuVar9[1] = ppppppuVar12;
          *(byte *)((long)pppppppuVar21 + (long)ppppppuVar12) = 0;
        }
        else {
          *(byte *)((long)pppppppuVar9 + 0x17) = (byte)ppppppuVar12 & 0x7f;
          *(byte *)((long)pppppppuVar21 + (long)ppppppuVar12) = 0;
        }
      }
      else if (ppppppuVar12 < ppppppuVar23) {
        puVar19 = (ulong *)(~(ulong)ppppppuVar12 + (long)ppppppuVar11);
        if (puVar19 != (ulong *)0x0) {
          uVar16 = 0;
          uVar13 = 0x16;
          if (puVar19 <= (ulong *)(0x16 - (long)ppppppuVar12)) goto code_r0x00010014866c;
code_r0x0001001485c4:
          if ((undefined1 *)(0x7ffffffffffffff7 - uVar13) <
              (undefined1 *)((long)puVar19 + ((long)ppppppuVar12 - uVar13))) {
            func_0x000104c4f6b8();
            if (-1 < (char)*(byte *)((long)pppppppuVar20 + 0x17)) {
              ppppppuVar10 = (ulong ******)puVar7[1];
              ppppppuVar11 = (ulong ******)*puVar7;
              pppppppuVar20[2] = (ulong ******)puVar7[2];
              pppppppuVar20[1] = ppppppuVar10;
              *pppppppuVar20 = ppppppuVar11;
              *(undefined1 *)((long)puVar7 + 0x17) = 0;
              *(undefined1 *)puVar7 = 0;
              return;
            }
            pppppppuVar20 = (ulong *******)*pppppppuVar20;
          }
          else {
            if ((char)bVar15 < '\0') {
              pppppppuVar20 = (ulong *******)*pppppppuVar9;
              if (0x3ffffffffffffff2 < uVar13) goto code_r0x0001001485f8;
code_r0x0001001486cc:
              puVar1 = (undefined1 *)((long)ppppppuVar12 + (long)puVar19);
              if ((undefined1 *)((long)ppppppuVar12 + (long)puVar19) <= (undefined1 *)(uVar13 * 2))
              {
                puVar1 = (undefined1 *)(uVar13 * 2);
              }
              ppppppuVar5 = (ulong ******)0x19;
              if (((ulong)puVar1 | 7) != 0x17) {
                ppppppuVar5 = (ulong ******)(((ulong)puVar1 | 7) + 1);
              }
              ppppppuVar10 = (ulong ******)0x17;
              if ((undefined1 *)0x16 < puVar1) {
                ppppppuVar10 = ppppppuVar5;
              }
              ppppppuVar5 = ppppppuVar10;
              func_0x000107c60e20();
            }
            else {
              pppppppuVar20 = pppppppuVar9;
              if (uVar13 < 0x3ffffffffffffff3) goto code_r0x0001001486cc;
code_r0x0001001485f8:
              ppppppuVar10 = (ulong ******)0x7ffffffffffffff7;
              ppppppuVar5 = ppppppuVar10;
              func_0x000107c60e20();
            }
            if (ppppppuVar12 != (ulong ******)0x0) {
              func_0x000107c610b8(ppppppuVar5,pppppppuVar20,ppppppuVar12);
            }
            if (uVar13 == 0x16) {
              pppppppuVar9[1] = ppppppuVar12;
              pppppppuVar9[2] = (ulong ******)((ulong)ppppppuVar10 | 0x8000000000000000);
              *pppppppuVar9 = ppppppuVar5;
code_r0x000100148674:
              pppppppuVar21 = (ulong *******)*pppppppuVar9;
              goto code_r0x000100148678;
            }
          }
          goto code_r0x000107c60e14;
        }
      }
      else {
        *(byte *)((long)pppppppuVar9 + 0x17) = (byte)ppppppuVar23;
        pppppppuVar21 = pppppppuVar9;
code_r0x00010014852c:
        *(byte *)((long)pppppppuVar21 + ((long)ppppppuVar11 - 1U)) = 0;
      }
code_r0x000100148534:
      ppppppuVar10 = ppppppuVar11;
      ppppppuVar11 = ppppppuVar23;
    } while ((ulong ******)0x1 < ppppppuVar23);
  }
  return;
}



/* Entry: 10b2f12e4; end: 10b2f12ff;  */

/* WARNING: Possible PIC construction at 0x000100148254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010014840c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100148238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100148754) */
/* WARNING: Removing unreachable block (ram,0x000100148258) */
/* WARNING: Removing unreachable block (ram,0x000100148260) */
/* WARNING: Removing unreachable block (ram,0x00010014827c) */
/* WARNING: Removing unreachable block (ram,0x000100148340) */
/* WARNING: Removing unreachable block (ram,0x000100148284) */
/* WARNING: Removing unreachable block (ram,0x000100148264) */
/* WARNING: Removing unreachable block (ram,0x000100148268) */
/* WARNING: Removing unreachable block (ram,0x000100148298) */
/* WARNING: Removing unreachable block (ram,0x0001001482a4) */
/* WARNING: Removing unreachable block (ram,0x0001001482ac) */
/* WARNING: Removing unreachable block (ram,0x0001001482c0) */
/* WARNING: Removing unreachable block (ram,0x0001001482c8) */
/* WARNING: Removing unreachable block (ram,0x0001001482d4) */
/* WARNING: Removing unreachable block (ram,0x0001001482fc) */
/* WARNING: Removing unreachable block (ram,0x000100148308) */
/* WARNING: Removing unreachable block (ram,0x000100148348) */
/* WARNING: Removing unreachable block (ram,0x000100148320) */
/* WARNING: Removing unreachable block (ram,0x00010014834c) */
/* WARNING: Removing unreachable block (ram,0x000100148278) */
/* WARNING: Removing unreachable block (ram,0x000100148354) */
/* WARNING: Removing unreachable block (ram,0x000100148428) */
/* WARNING: Removing unreachable block (ram,0x00010014842c) */
/* WARNING: Removing unreachable block (ram,0x000100148358) */
/* WARNING: Removing unreachable block (ram,0x000100148448) */
/* WARNING: Removing unreachable block (ram,0x00010014844c) */
/* WARNING: Removing unreachable block (ram,0x000100148454) */
/* WARNING: Removing unreachable block (ram,0x000100148480) */
/* WARNING: Removing unreachable block (ram,0x000100148474) */
/* WARNING: Removing unreachable block (ram,0x000100148484) */
/* WARNING: Removing unreachable block (ram,0x000100148370) */
/* WARNING: Removing unreachable block (ram,0x000100148388) */
/* WARNING: Removing unreachable block (ram,0x000100148390) */
/* WARNING: Removing unreachable block (ram,0x0001001483a4) */
/* WARNING: Removing unreachable block (ram,0x0001001483b0) */
/* WARNING: Removing unreachable block (ram,0x0001001483c0) */
/* WARNING: Removing unreachable block (ram,0x0001001483cc) */
/* WARNING: Removing unreachable block (ram,0x0001001483d0) */
/* WARNING: Removing unreachable block (ram,0x0001001483e0) */
/* WARNING: Removing unreachable block (ram,0x0001001483f0) */
/* WARNING: Removing unreachable block (ram,0x000100148410) */
/* WARNING: Removing unreachable block (ram,0x000100148488) */
/* WARNING: Removing unreachable block (ram,0x000100148408) */
/* WARNING: Removing unreachable block (ram,0x00010014823c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b2f12e4(ulong *******param_1,ulong *******param_2,ulong *******param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  char cVar3;
  ulong *******pppppppuVar4;
  ulong ******ppppppuVar5;
  ulong *puVar6;
  ulong ******ppppppuVar7;
  ulong ******ppppppuVar8;
  ulong *******pppppppuVar9;
  ulong ******ppppppuVar10;
  uint uVar11;
  ulong *puVar12;
  ulong *******pppppppuVar13;
  ulong uVar14;
  ulong ******ppppppuVar15;
  ulong *******pppppppuStack_88;
  ulong ******ppppppuStack_80;
  undefined8 uStack_78;
  ulong *******pppppppuStack_70;
  ulong ******ppppppuStack_68;
  undefined8 uStack_60;
  
  cVar3 = *(char *)((long)param_3 + 0x17);
  pppppppuVar13 = (ulong *******)*param_3;
  if (-1 < (long)cVar3) {
    pppppppuVar13 = param_3;
  }
  ppppppuVar8 = param_3[1];
  if (-1 < cVar3) {
    ppppppuVar8 = (ulong ******)(long)cVar3;
  }
  pppppppuStack_70 = (ulong *******)0x0;
  ppppppuStack_68 = (ulong ******)0x0;
  uStack_60 = 0;
  if (ppppppuVar8 == (ulong ******)0x0) {
code_r0x00010014804c:
    ppppppuVar7 = (ulong ******)0x0;
    cVar3 = *(char *)((long)param_2 + 0x17);
joined_r0x00010014805c:
    ppppppuVar15 = (ulong ******)(long)cVar3;
    pppppppuVar9 = param_2;
    ppppppuVar10 = ppppppuVar15;
    if ((long)ppppppuVar15 < 0) {
      pppppppuVar9 = (ulong *******)*param_2;
      ppppppuVar10 = param_2[1];
    }
    puVar6 = (ulong *)&UNK_10e573fb0;
    func_0x000107c610b0(pppppppuVar9,&UNK_10e573fb0,ppppppuVar10 != (ulong ******)0x0);
    if ((ppppppuVar10 == (ulong ******)0x1 && (int)pppppppuVar9 == 0) &&
        ppppppuVar8 != (ulong ******)0x0) {
      if ((ulong ******)0x7ffffffffffffff7 < ppppppuVar8) goto code_r0x0001001484cc;
      if (ppppppuVar8 < (ulong ******)0x17) {
        *(char *)((long)param_1 + 0x17) = (char)ppppppuVar8;
        pppppppuVar4 = param_1;
      }
      else {
        pppppppuVar9 = (ulong *******)0x19;
        if (((ulong)ppppppuVar8 | 7) != 0x17) {
          pppppppuVar9 = (ulong *******)(((ulong)ppppppuVar8 | 7) + 1);
        }
        pppppppuVar4 = pppppppuVar9;
        func_0x000107c60e20();
        param_1[1] = ppppppuVar8;
        param_1[2] = (ulong ******)((ulong)pppppppuVar9 | 0x8000000000000000);
        *param_1 = (ulong ******)pppppppuVar4;
      }
      func_0x000107c610b8(pppppppuVar4,pppppppuVar13,ppppppuVar8);
      *(undefined1 *)((long)pppppppuVar4 + (long)ppppppuVar8) = 0;
      bVar2 = *(byte *)((long)param_1 + 0x17);
      pppppppuVar13 = (ulong *******)*param_1;
      ppppppuVar10 = param_1[1];
      ppppppuVar8 = ppppppuVar10;
      pppppppuVar4 = pppppppuVar13;
      if (-1 < (char)bVar2) {
        ppppppuVar8 = (ulong ******)(ulong)bVar2;
        pppppppuVar4 = param_1;
      }
      puVar6 = (ulong *)0x0;
      pppppppuVar9 = pppppppuVar4;
      func_0x000107c610ac(pppppppuVar4,0,ppppppuVar8);
      if ((pppppppuVar9 == (ulong *******)0x0) ||
         (ppppppuVar8 = (ulong ******)((long)pppppppuVar9 - (long)pppppppuVar4),
         ppppppuVar8 == (ulong ******)0xffffffffffffffff)) {
code_r0x00010014848c:
        pppppppuVar13 = pppppppuStack_70;
        if (((uint)ppppppuVar7 >> 7 & 1) == 0) {
          return;
        }
code_r0x000107c60e14:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(pppppppuVar13);
        return;
      }
      if ((char)bVar2 < '\0') {
        if (ppppppuVar8 <= ppppppuVar10) {
          param_1[1] = ppppppuVar8;
          *(undefined1 *)((long)pppppppuVar13 + (long)ppppppuVar8) = 0;
          goto code_r0x00010014848c;
        }
      }
      else if (ppppppuVar8 <= (ulong ******)(ulong)bVar2) {
        *(char *)((long)param_1 + 0x17) = (char)ppppppuVar8;
        *(undefined1 *)((long)param_1 + (long)ppppppuVar8) = 0;
        goto code_r0x00010014848c;
      }
    }
    else {
      param_1[1] = (ulong ******)0xaaaaaaaaaaaaaaaa;
      param_1[2] = (ulong ******)0xaaaaaaaaaaaaaaaa;
      *param_1 = (ulong ******)0xaaaaaaaaaaaaaaaa;
      ppppppuVar8 = param_2[1];
      pppppppuVar13 = (ulong *******)*param_2;
      if (-1 < cVar3) {
        ppppppuVar8 = ppppppuVar15;
        pppppppuVar13 = param_2;
      }
      if ((ulong ******)0x7ffffffffffffff7 < ppppppuVar8) goto code_r0x0001001484cc;
      if (ppppppuVar8 < (ulong ******)0x17) {
        *(char *)((long)param_1 + 0x17) = (char)ppppppuVar8;
        pppppppuVar4 = param_1;
        if (ppppppuVar8 != (ulong ******)0x0) goto code_r0x000100148108;
      }
      else {
        pppppppuVar9 = (ulong *******)0x19;
        if (((ulong)ppppppuVar8 | 7) != 0x17) {
          pppppppuVar9 = (ulong *******)(((ulong)ppppppuVar8 | 7) + 1);
        }
        pppppppuVar4 = pppppppuVar9;
        func_0x000107c60e20();
        param_1[1] = ppppppuVar8;
        param_1[2] = (ulong ******)((ulong)pppppppuVar9 | 0x8000000000000000);
        *param_1 = (ulong ******)pppppppuVar4;
code_r0x000100148108:
        func_0x000107c610b8(pppppppuVar4,pppppppuVar13,ppppppuVar8);
      }
      *(undefined1 *)((long)pppppppuVar4 + (long)ppppppuVar8) = 0;
      bVar2 = *(byte *)((long)param_1 + 0x17);
      pppppppuVar13 = (ulong *******)*param_1;
      ppppppuVar7 = param_1[1];
      ppppppuVar8 = ppppppuVar7;
      pppppppuVar4 = pppppppuVar13;
      if (-1 < (char)bVar2) {
        ppppppuVar8 = (ulong ******)(ulong)bVar2;
        pppppppuVar4 = param_1;
      }
      puVar6 = (ulong *)0x0;
      pppppppuVar9 = pppppppuVar4;
      func_0x000107c610ac(pppppppuVar4,0,ppppppuVar8);
      if ((pppppppuVar9 == (ulong *******)0x0) ||
         (ppppppuVar8 = (ulong ******)((long)pppppppuVar9 - (long)pppppppuVar4),
         ppppppuVar8 == (ulong ******)0xffffffffffffffff)) goto code_r0x0001001484d8;
      if ((char)bVar2 < '\0') {
        if (ppppppuVar8 <= ppppppuVar7) {
          param_1[1] = ppppppuVar8;
          goto code_r0x00010014824c;
        }
      }
      else if (ppppppuVar8 <= (ulong ******)(ulong)bVar2) {
        *(char *)((long)param_1 + 0x17) = (char)ppppppuVar8;
        pppppppuVar13 = param_1;
code_r0x00010014824c:
        *(undefined1 *)((long)pppppppuVar13 + (long)ppppppuVar8) = 0;
        goto code_r0x0001001484d8;
      }
    }
  }
  else {
    puVar6 = (ulong *)0x0;
    pppppppuVar9 = pppppppuVar13;
    func_0x000107c610ac(pppppppuVar13,0,ppppppuVar8);
    if ((pppppppuVar9 == (ulong *******)0x0) ||
       (ppppppuVar7 = (ulong ******)((long)pppppppuVar9 - (long)pppppppuVar13),
       ppppppuVar7 == (ulong ******)0xffffffffffffffff)) goto code_r0x00010014804c;
    if (ppppppuVar7 <= ppppppuVar8) {
      ppppppuVar8 = ppppppuVar7;
    }
    if (ppppppuVar8 < (ulong ******)0x7ffffffffffffff8) {
      if (ppppppuVar8 < (ulong ******)0x17) {
        uStack_78 = CONCAT17((char)ppppppuVar8,(undefined7)uStack_78);
        pppppppuVar4 = (ulong *******)&pppppppuStack_88;
        if (pppppppuVar13 != pppppppuVar9) goto code_r0x000100148218;
        *(undefined1 *)((long)pppppppuVar4 + (long)ppppppuVar8) = 0;
      }
      else {
        pppppppuVar9 = (ulong *******)0x19;
        if (((ulong)ppppppuVar8 | 7) != 0x17) {
          pppppppuVar9 = (ulong *******)(((ulong)ppppppuVar8 | 7) + 1);
        }
        pppppppuVar4 = pppppppuVar9;
        func_0x000107c60e20();
        uStack_78 = (ulong)pppppppuVar9 | 0x8000000000000000;
        pppppppuStack_88 = pppppppuVar4;
        ppppppuStack_80 = ppppppuVar8;
code_r0x000100148218:
        func_0x000107c610b8(pppppppuVar4,pppppppuVar13,ppppppuVar8);
        *(undefined1 *)((long)pppppppuVar4 + (long)ppppppuVar8) = 0;
      }
      pppppppuVar13 = pppppppuStack_70;
      if ((long)uStack_60 < 0) goto code_r0x000107c60e14;
      uStack_60._7_1_ = (char)(uStack_78 >> 0x38);
      ppppppuVar7 = (ulong ******)(long)uStack_60._7_1_;
      pppppppuVar13 = pppppppuStack_88;
      if (-1 < (long)ppppppuVar7) {
        pppppppuVar13 = (ulong *******)&pppppppuStack_70;
      }
      ppppppuVar8 = ppppppuStack_80;
      if (-1 < (long)uStack_78) {
        ppppppuVar8 = ppppppuVar7;
      }
      cVar3 = *(char *)((long)param_2 + 0x17);
      pppppppuStack_70 = pppppppuStack_88;
      ppppppuStack_68 = ppppppuStack_80;
      uStack_60 = uStack_78;
      goto joined_r0x00010014805c;
    }
code_r0x0001001484cc:
    func_0x000107c35c54();
  }
  param_1 = pppppppuVar9;
  func_0x000104c03f14();
  func_0x000104bd47d4();
code_r0x0001001484d8:
  ppppppuVar8 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    ppppppuVar8 = (ulong ******)(ulong)*(byte *)((long)param_1 + 0x17);
  }
  if ((ulong ******)0x1 < ppppppuVar8) {
    pppppppuVar13 = param_1;
    ppppppuVar7 = (ulong ******)0xffffffffffffffff;
    do {
      pppppppuVar9 = param_1;
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        pppppppuVar9 = (ulong *******)*param_1;
      }
      if (*(char *)((long)pppppppuVar9 + ((long)ppppppuVar8 - 1U)) != '/') {
        return;
      }
      bVar2 = *(byte *)((long)param_1 + 0x17);
      ppppppuVar10 = (ulong ******)(ulong)bVar2;
      if ((ppppppuVar8 == (ulong ******)0x2) && (ppppppuVar7 != (ulong ******)0x3)) {
        pppppppuVar9 = param_1;
        if ((char)bVar2 < '\0') {
          pppppppuVar9 = (ulong *******)*param_1;
        }
        if (*(char *)pppppppuVar9 == '/') {
          return;
        }
      }
      ppppppuVar15 = (ulong ******)((long)ppppppuVar8 - 1);
      if ((char)bVar2 < '\0') {
        ppppppuVar10 = param_1[1];
        puVar12 = (ulong *)((long)ppppppuVar15 - (long)ppppppuVar10);
        if (ppppppuVar15 < ppppppuVar10 || puVar12 == (ulong *)0x0) {
          pppppppuVar9 = (ulong *******)*param_1;
          param_1[1] = ppppppuVar15;
          goto code_r0x00010014852c;
        }
        if ((ulong ******)((long)ppppppuVar10 + 1U) == ppppppuVar8) goto code_r0x000100148534;
        uVar14 = ((ulong)param_1[2] & 0x7fffffffffffffff) - 1;
        uVar11 = (uint)((ulong)param_1[2] >> 0x3f);
        if ((ulong *)(uVar14 - (long)ppppppuVar10) < puVar12) goto code_r0x0001001485c4;
code_r0x00010014866c:
        pppppppuVar9 = param_1;
        if (uVar11 != 0) goto code_r0x000100148674;
code_r0x000100148678:
        pppppppuVar13 = (ulong *******)((long)pppppppuVar9 + (long)ppppppuVar10);
        puVar6 = puVar12;
        func_0x000107c60ee4();
        ppppppuVar10 = (ulong ******)((long)ppppppuVar10 + (long)puVar12);
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          param_1[1] = ppppppuVar10;
          *(undefined1 *)((long)pppppppuVar9 + (long)ppppppuVar10) = 0;
        }
        else {
          *(byte *)((long)param_1 + 0x17) = (byte)ppppppuVar10 & 0x7f;
          *(undefined1 *)((long)pppppppuVar9 + (long)ppppppuVar10) = 0;
        }
      }
      else if (ppppppuVar10 < ppppppuVar15) {
        puVar12 = (ulong *)(~(ulong)ppppppuVar10 + (long)ppppppuVar8);
        if (puVar12 != (ulong *)0x0) {
          uVar11 = 0;
          uVar14 = 0x16;
          if (puVar12 <= (ulong *)(0x16 - (long)ppppppuVar10)) goto code_r0x00010014866c;
code_r0x0001001485c4:
          if ((undefined1 *)(0x7ffffffffffffff7 - uVar14) <
              (undefined1 *)((long)puVar12 + ((long)ppppppuVar10 - uVar14))) {
            func_0x000104c4f6b8();
            if (-1 < *(char *)((long)pppppppuVar13 + 0x17)) {
              ppppppuVar7 = (ulong ******)puVar6[1];
              ppppppuVar8 = (ulong ******)*puVar6;
              pppppppuVar13[2] = (ulong ******)puVar6[2];
              pppppppuVar13[1] = ppppppuVar7;
              *pppppppuVar13 = ppppppuVar8;
              *(undefined1 *)((long)puVar6 + 0x17) = 0;
              *(undefined1 *)puVar6 = 0;
              return;
            }
            pppppppuVar13 = (ulong *******)*pppppppuVar13;
          }
          else {
            if ((char)bVar2 < '\0') {
              pppppppuVar13 = (ulong *******)*param_1;
              if (0x3ffffffffffffff2 < uVar14) goto code_r0x0001001485f8;
code_r0x0001001486cc:
              puVar1 = (undefined1 *)((long)ppppppuVar10 + (long)puVar12);
              if ((undefined1 *)((long)ppppppuVar10 + (long)puVar12) <= (undefined1 *)(uVar14 * 2))
              {
                puVar1 = (undefined1 *)(uVar14 * 2);
              }
              ppppppuVar5 = (ulong ******)0x19;
              if (((ulong)puVar1 | 7) != 0x17) {
                ppppppuVar5 = (ulong ******)(((ulong)puVar1 | 7) + 1);
              }
              ppppppuVar7 = (ulong ******)0x17;
              if ((undefined1 *)0x16 < puVar1) {
                ppppppuVar7 = ppppppuVar5;
              }
              ppppppuVar5 = ppppppuVar7;
              func_0x000107c60e20();
            }
            else {
              pppppppuVar13 = param_1;
              if (uVar14 < 0x3ffffffffffffff3) goto code_r0x0001001486cc;
code_r0x0001001485f8:
              ppppppuVar7 = (ulong ******)0x7ffffffffffffff7;
              ppppppuVar5 = ppppppuVar7;
              func_0x000107c60e20();
            }
            if (ppppppuVar10 != (ulong ******)0x0) {
              func_0x000107c610b8(ppppppuVar5,pppppppuVar13,ppppppuVar10);
            }
            if (uVar14 == 0x16) {
              param_1[1] = ppppppuVar10;
              param_1[2] = (ulong ******)((ulong)ppppppuVar7 | 0x8000000000000000);
              *param_1 = ppppppuVar5;
code_r0x000100148674:
              pppppppuVar9 = (ulong *******)*param_1;
              goto code_r0x000100148678;
            }
          }
          goto code_r0x000107c60e14;
        }
      }
      else {
        *(char *)((long)param_1 + 0x17) = (char)ppppppuVar15;
        pppppppuVar9 = param_1;
code_r0x00010014852c:
        *(undefined1 *)((long)pppppppuVar9 + ((long)ppppppuVar8 - 1U)) = 0;
      }
code_r0x000100148534:
      ppppppuVar7 = ppppppuVar8;
      ppppppuVar8 = ppppppuVar15;
    } while ((ulong ******)0x1 < ppppppuVar15);
  }
  return;
}



/* Entry: 10b2f1300; end: 10b2f1417;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b2f1300(ulong ******param_1,ulong ******param_2)

{
  undefined1 *puVar1;
  ulong *******pppppppuVar2;
  byte bVar3;
  char cVar4;
  ulong ******ppppppuVar5;
  ulong *puVar6;
  ulong ******ppppppuVar7;
  ulong *****pppppuVar8;
  ulong *****pppppuVar9;
  undefined8 *extraout_x8;
  uint uVar10;
  ulong *puVar11;
  ulong ******ppppppuVar12;
  ulong *****pppppuVar13;
  ulong uVar14;
  ulong *****pppppuVar15;
  ulong *****pppppuVar16;
  ulong *******pppppppuStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  
  param_1[1] = (ulong *****)0xaaaaaaaaaaaaaaaa;
  param_1[2] = (ulong *****)0xaaaaaaaaaaaaaaaa;
  *param_1 = (ulong *****)0xaaaaaaaaaaaaaaaa;
  cVar4 = *(char *)((long)param_2 + 0x17);
  ppppppuVar12 = (ulong ******)*param_2;
  if (-1 < (long)cVar4) {
    ppppppuVar12 = param_2;
  }
  pppppuVar9 = param_2[1];
  if (-1 < cVar4) {
    pppppuVar9 = (ulong *****)(long)cVar4;
  }
  if ((ulong *****)0x7ffffffffffffff7 < pppppuVar9) {
    FUN_10b2ecf74();
    goto LAB_10b2f1414;
  }
  if (pppppuVar9 < (ulong *****)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)pppppuVar9;
    ppppppuVar5 = param_1;
    if (pppppuVar9 != (ulong *****)0x0) goto LAB_10b2f1388;
  }
  else {
    ppppppuVar7 = (ulong ******)0x19;
    if (((ulong)pppppuVar9 | 7) != 0x17) {
      ppppppuVar7 = (ulong ******)(((ulong)pppppuVar9 | 7) + 1);
    }
    ppppppuVar5 = ppppppuVar7;
    __Znwm();
    param_1[1] = pppppuVar9;
    param_1[2] = (ulong *****)((ulong)ppppppuVar7 | 0x8000000000000000);
    *param_1 = (ulong *****)ppppppuVar5;
LAB_10b2f1388:
    _memmove(ppppppuVar5,ppppppuVar12,pppppuVar9);
  }
  *(undefined1 *)((long)ppppppuVar5 + (long)pppppuVar9) = 0;
  bVar3 = *(byte *)((long)param_1 + 0x17);
  ppppppuVar12 = (ulong ******)*param_1;
  pppppuVar16 = param_1[1];
  pppppuVar9 = pppppuVar16;
  ppppppuVar7 = ppppppuVar12;
  if (-1 < (char)bVar3) {
    pppppuVar9 = (ulong *****)(ulong)bVar3;
    ppppppuVar7 = param_1;
  }
  puVar6 = (ulong *)0x0;
  param_2 = ppppppuVar7;
  _memchr(ppppppuVar7,0,pppppuVar9);
  pppppuVar9 = (ulong *****)((long)param_2 - (long)ppppppuVar7);
  if (param_2 != (ulong ******)0x0 && pppppuVar9 != (ulong *****)0xffffffffffffffff) {
    if ((char)bVar3 < '\0') {
      if (pppppuVar16 < pppppuVar9) goto LAB_10b2f1414;
      param_1[1] = pppppuVar9;
    }
    else {
      if ((ulong *****)(ulong)bVar3 < pppppuVar9) {
LAB_10b2f1414:
        func_0x000104c03f14();
        cVar4 = *(char *)((long)param_2 + 0x17);
        ppppppuVar12 = (ulong ******)*param_2;
        if (-1 < (long)cVar4) {
          ppppppuVar12 = param_2;
        }
        pppppuVar9 = param_2[1];
        if (-1 < cVar4) {
          pppppuVar9 = (ulong *****)(long)cVar4;
        }
        FUN_10b32be60(&pppppppuStack_78,ppppppuVar12,pppppuVar9);
        pppppppuVar2 = pppppppuStack_78;
        if (-1 < (long)uStack_68._7_1_) {
          pppppppuVar2 = (ulong *******)&pppppppuStack_78;
        }
        if (-1 < (long)uStack_68) {
          puStack_70 = (undefined1 *)(long)uStack_68._7_1_;
        }
        extraout_x8[1] = 0;
        extraout_x8[2] = 0;
        *extraout_x8 = 0;
        FUN_10b3090a8(pppppppuVar2,puStack_70,extraout_x8);
        if (-1 < uStack_68._7_1_) {
          return;
        }
        __ZdlPv(pppppppuStack_78);
        return;
      }
      *(char *)((long)param_1 + 0x17) = (char)pppppuVar9;
      ppppppuVar12 = param_1;
    }
    *(undefined1 *)((long)ppppppuVar12 + (long)pppppuVar9) = 0;
  }
  pppppuVar9 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    pppppuVar9 = (ulong *****)(ulong)*(byte *)((long)param_1 + 0x17);
  }
  if ((ulong *****)0x1 < pppppuVar9) {
    ppppppuVar12 = param_1;
    pppppuVar16 = (ulong *****)0xffffffffffffffff;
    do {
      ppppppuVar7 = param_1;
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        ppppppuVar7 = (ulong ******)*param_1;
      }
      if (*(char *)((long)ppppppuVar7 + ((long)pppppuVar9 - 1U)) != '/') {
        return;
      }
      bVar3 = *(byte *)((long)param_1 + 0x17);
      pppppuVar8 = (ulong *****)(ulong)bVar3;
      if ((pppppuVar9 == (ulong *****)0x2) && (pppppuVar16 != (ulong *****)0x3)) {
        ppppppuVar7 = param_1;
        if ((char)bVar3 < '\0') {
          ppppppuVar7 = (ulong ******)*param_1;
        }
        if (*(char *)ppppppuVar7 == '/') {
          return;
        }
      }
      pppppuVar15 = (ulong *****)((long)pppppuVar9 - 1);
      if ((char)bVar3 < '\0') {
        pppppuVar8 = param_1[1];
        puVar11 = (ulong *)((long)pppppuVar15 - (long)pppppuVar8);
        if (pppppuVar15 < pppppuVar8 || puVar11 == (ulong *)0x0) {
          ppppppuVar7 = (ulong ******)*param_1;
          param_1[1] = pppppuVar15;
          goto code_r0x00010014852c;
        }
        if ((ulong *****)((long)pppppuVar8 + 1U) == pppppuVar9) goto code_r0x000100148534;
        uVar14 = ((ulong)param_1[2] & 0x7fffffffffffffff) - 1;
        uVar10 = (uint)((ulong)param_1[2] >> 0x3f);
        if (puVar11 <= (ulong *)(uVar14 - (long)pppppuVar8)) goto code_r0x00010014866c;
code_r0x0001001485c4:
        if ((undefined1 *)(0x7ffffffffffffff7 - uVar14) <
            (undefined1 *)((long)puVar11 + ((long)pppppuVar8 - uVar14))) {
          func_0x000104c4f6b8();
          uStack_68 = &UNK_10014872c;
          if (*(char *)((long)ppppppuVar12 + 0x17) < '\0') {
            pppppppuStack_78 = (ulong *******)param_1;
            puStack_70 = &stack0xfffffffffffffff0;
            func_0x000107c60e14(*ppppppuVar12);
          }
          pppppuVar16 = (ulong *****)puVar6[1];
          pppppuVar9 = (ulong *****)*puVar6;
          ppppppuVar12[2] = (ulong *****)puVar6[2];
          ppppppuVar12[1] = pppppuVar16;
          *ppppppuVar12 = pppppuVar9;
          *(undefined1 *)((long)puVar6 + 0x17) = 0;
          *(undefined1 *)puVar6 = 0;
          return;
        }
        if ((char)bVar3 < '\0') {
          ppppppuVar12 = (ulong ******)*param_1;
          if (uVar14 < 0x3ffffffffffffff3) goto code_r0x0001001486cc;
code_r0x0001001485f8:
          pppppuVar13 = (ulong *****)0x7ffffffffffffff7;
          pppppuVar16 = pppppuVar13;
          func_0x000107c60e20();
        }
        else {
          ppppppuVar12 = param_1;
          if (0x3ffffffffffffff2 < uVar14) goto code_r0x0001001485f8;
code_r0x0001001486cc:
          puVar1 = (undefined1 *)((long)pppppuVar8 + (long)puVar11);
          if ((undefined1 *)((long)pppppuVar8 + (long)puVar11) <= (undefined1 *)(uVar14 * 2)) {
            puVar1 = (undefined1 *)(uVar14 * 2);
          }
          pppppuVar16 = (ulong *****)0x19;
          if (((ulong)puVar1 | 7) != 0x17) {
            pppppuVar16 = (ulong *****)(((ulong)puVar1 | 7) + 1);
          }
          pppppuVar13 = (ulong *****)0x17;
          if ((undefined1 *)0x16 < puVar1) {
            pppppuVar13 = pppppuVar16;
          }
          pppppuVar16 = pppppuVar13;
          func_0x000107c60e20();
        }
        if (pppppuVar8 != (ulong *****)0x0) {
          func_0x000107c610b8(pppppuVar16,ppppppuVar12,pppppuVar8);
        }
        if (uVar14 != 0x16) {
          func_0x000107c60e14(ppppppuVar12);
        }
        param_1[1] = pppppuVar8;
        param_1[2] = (ulong *****)((ulong)pppppuVar13 | 0x8000000000000000);
        *param_1 = pppppuVar16;
code_r0x000100148674:
        ppppppuVar7 = (ulong ******)*param_1;
code_r0x000100148678:
        ppppppuVar12 = (ulong ******)((long)ppppppuVar7 + (long)pppppuVar8);
        puVar6 = puVar11;
        func_0x000107c60ee4();
        pppppuVar8 = (ulong *****)((long)pppppuVar8 + (long)puVar11);
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          param_1[1] = pppppuVar8;
          *(undefined1 *)((long)ppppppuVar7 + (long)pppppuVar8) = 0;
        }
        else {
          *(byte *)((long)param_1 + 0x17) = (byte)pppppuVar8 & 0x7f;
          *(undefined1 *)((long)ppppppuVar7 + (long)pppppuVar8) = 0;
        }
      }
      else if (pppppuVar8 < pppppuVar15) {
        puVar11 = (ulong *)(~(ulong)pppppuVar8 + (long)pppppuVar9);
        if (puVar11 != (ulong *)0x0) {
          uVar10 = 0;
          uVar14 = 0x16;
          if ((ulong *)(0x16 - (long)pppppuVar8) < puVar11) goto code_r0x0001001485c4;
code_r0x00010014866c:
          ppppppuVar7 = param_1;
          if (uVar10 != 0) goto code_r0x000100148674;
          goto code_r0x000100148678;
        }
      }
      else {
        *(char *)((long)param_1 + 0x17) = (char)pppppuVar15;
        ppppppuVar7 = param_1;
code_r0x00010014852c:
        *(undefined1 *)((long)ppppppuVar7 + ((long)pppppuVar9 - 1U)) = 0;
      }
code_r0x000100148534:
      pppppuVar16 = pppppuVar9;
      pppppuVar9 = pppppuVar15;
    } while ((ulong *****)0x1 < pppppuVar15);
  }
  return;
}



/* Entry: 10b2f1418; end: 10b2f14a7;  */

void FUN_10b2f1418(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  char cVar4;
  undefined8 **ppuStack_38;
  long lStack_30;
  char cStack_21;
  
  cVar4 = *(char *)((long)param_2 + 0x17);
  puVar1 = (undefined8 *)*param_2;
  if (-1 < (long)cVar4) {
    puVar1 = param_2;
  }
  lVar2 = param_2[1];
  if (-1 < cVar4) {
    lVar2 = (long)cVar4;
  }
  FUN_10b32be60(&ppuStack_38,puVar1,lVar2);
  pppuVar3 = (undefined8 ***)ppuStack_38;
  if (-1 < (long)cStack_21) {
    pppuVar3 = &ppuStack_38;
  }
  if (-1 < cStack_21) {
    lStack_30 = (long)cStack_21;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10b3090a8(pppuVar3,lStack_30,param_1);
  if (-1 < cStack_21) {
    return;
  }
  __ZdlPv(ppuStack_38);
  return;
}



/* Entry: 10b2f14a8; end: 10b2f14cf;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10b2f14a8(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    lVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar2;
    param_1[2] = param_2[2];
    return;
  }
  lVar2 = *param_2;
  uVar1 = param_2[1];
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar2 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar2 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar2);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
  return;
}



/* Entry: 10b2f14d0; end: 10b2f151b;  */

long * FUN_10b2f14d0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                    ,undefined8 *param_6,long *param_7)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *aplStack_1b8 [4];
  long **pplStack_198;
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
  long alStack_100 [21];
  long lStack_58;
  
  plVar5 = param_1;
  func_0x000107c2cac4();
  if ((((ulong)plVar5 & 1) != 0) ||
     (plVar5 = param_2, func_0x000107c2cac4(), ((ulong)plVar5 & 1) != 0)) {
    return (long *)0x0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_100[7] = 0xaaaaaaaaaaaaaaaa;
  alStack_100[6] = 0xaaaaaaaaaaaaaaaa;
  alStack_100[9] = 0xaaaaaaaaaaaaaaaa;
  alStack_100[8] = 0xaaaaaaaaaaaaaaaa;
  alStack_100[3] = 0xaaaaaaaaaaaaaaaa;
  alStack_100[2] = 0xaaaaaaaaaaaaaaaa;
  alStack_100[5] = 0xaaaaaaaaaaaaaaaa;
  alStack_100[4] = 0xaaaaaaaaaaaaaaaa;
  alStack_100[1] = 0xaaaaaaaaaaaaaaaa;
  alStack_100[0] = -0x5555555555555556;
  func_0x000107c2cb24(&uStack_250,&UNK_10f74559f,&UNK_10f7454e2,0x4ad);
  func_0x000107c2ce28(alStack_100,&uStack_250,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    uStack_190 = &uStack_250;
    func_0x00010b32059c(&UNK_10f74523a,&uStack_190);
  }
  uStack_1d8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1e0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1d0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1f8 = 0xaaaaaaaaaaaaaaaa;
  uStack_200 = 0xaaaaaaaaaaaaaaaa;
  uStack_1e8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1f0 = 0xaaaaaaaaaaaaaaaa;
  uStack_218 = 0xaaaaaaaaaaaaaaaa;
  uStack_220 = 0xaaaaaaaaaaaaaaaa;
  uStack_208 = 0xaaaaaaaaaaaaaaaa;
  uStack_210 = 0xaaaaaaaaaaaaaaaa;
  uStack_238 = 0xaaaaaaaaaaaaaaaa;
  uStack_240 = 0xaaaaaaaaaaaaaaaa;
  uStack_228 = 0xaaaaaaaaaaaaaaaa;
  uStack_230 = 0xaaaaaaaaaaaaaaaa;
  uStack_248 = 0xaaaaaaaaaaaaaaaa;
  uStack_250 = 0xaaaaaaaaaaaaaaaa;
  plVar5 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar5 = param_2;
  }
  uStack_158 = 0xaaaaaaaaaaaaaaaa;
  uStack_160 = 0xaaaaaaaaaaaaaaaa;
  uStack_148 = 0xaaaaaaaaaaaaaaaa;
  uStack_150 = 0xaaaaaaaaaaaaaaaa;
  uStack_178 = 0xaaaaaaaaaaaaaaaa;
  uStack_180 = 0xaaaaaaaaaaaaaaaa;
  uStack_168 = 0xaaaaaaaaaaaaaaaa;
  uStack_170 = 0xaaaaaaaaaaaaaaaa;
  uStack_188 = 0xaaaaaaaaaaaaaaaa;
  uStack_190 = (undefined8 *)0xaaaaaaaaaaaaaaaa;
  func_0x000107c2cb24(alStack_100 + 10,&UNK_10f7454bc,&UNK_10f74542c,0x251);
  plVar6 = (long *)0x0;
  puVar7 = (undefined8 *)0x0;
  func_0x000107c2ce28(&uStack_190,alStack_100 + 10);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    aplStack_1b8[0] = alStack_100 + 10;
    func_0x00010b32059c(&UNK_10f74523a,aplStack_1b8);
  }
  _stat(plVar5,&uStack_250);
  func_0x000107c2ce2c(&uStack_190);
  if ((int)plVar5 == 0) {
    uStack_118 = 0xaaaaaaaaaaaaaaaa;
    uStack_120 = 0xaaaaaaaaaaaaaaaa;
    uStack_108 = 0xaaaaaaaaaaaaaaaa;
    uStack_110 = 0xaaaaaaaaaaaaaaaa;
    uStack_138 = 0xaaaaaaaaaaaaaaaa;
    uStack_140 = 0xaaaaaaaaaaaaaaaa;
    uStack_128 = 0xaaaaaaaaaaaaaaaa;
    uStack_130 = 0xaaaaaaaaaaaaaaaa;
    uStack_158 = 0xaaaaaaaaaaaaaaaa;
    uStack_160 = 0xaaaaaaaaaaaaaaaa;
    uStack_148 = 0xaaaaaaaaaaaaaaaa;
    uStack_150 = 0xaaaaaaaaaaaaaaaa;
    uStack_178 = 0xaaaaaaaaaaaaaaaa;
    uStack_180 = 0xaaaaaaaaaaaaaaaa;
    uStack_168 = 0xaaaaaaaaaaaaaaaa;
    uStack_170 = 0xaaaaaaaaaaaaaaaa;
    uStack_188 = 0xaaaaaaaaaaaaaaaa;
    uStack_190 = (undefined8 *)0xaaaaaaaaaaaaaaaa;
    plVar5 = (long *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      plVar5 = param_1;
    }
    iVar3 = (int)plVar5;
    alStack_100[0x11] = 0xaaaaaaaaaaaaaaaa;
    alStack_100[0x10] = 0xaaaaaaaaaaaaaaaa;
    alStack_100[0x13] = 0xaaaaaaaaaaaaaaaa;
    alStack_100[0x12] = 0xaaaaaaaaaaaaaaaa;
    alStack_100[0xd] = 0xaaaaaaaaaaaaaaaa;
    alStack_100[0xc] = 0xaaaaaaaaaaaaaaaa;
    alStack_100[0xf] = 0xaaaaaaaaaaaaaaaa;
    alStack_100[0xe] = 0xaaaaaaaaaaaaaaaa;
    alStack_100[0xb] = 0xaaaaaaaaaaaaaaaa;
    alStack_100[10] = 0xaaaaaaaaaaaaaaaa;
    func_0x000107c2cb24(aplStack_1b8,&UNK_10f7454bc,&UNK_10f74542c,0x251);
    plVar6 = (long *)0x0;
    puVar7 = (undefined8 *)0x0;
    func_0x000107c2ce28(alStack_100 + 10,aplStack_1b8);
    if ((bRam000000011336f9a8 & 0x19) != 0) {
      pplStack_198 = aplStack_1b8;
      func_0x00010b32059c(&UNK_10f74523a,&pplStack_198);
    }
    plVar5 = &uStack_190;
    _stat();
    func_0x000107c2ce2c(alStack_100 + 10);
    if ((iVar3 == 0) &&
       (((uStack_250._4_2_ & 0xf000) == 0x4000) != ((uStack_190._4_2_ & 0xf000) != 0x4000)))
    goto LAB_10b3294dc;
LAB_10b3295ec:
    plVar13 = (long *)0x0;
  }
  else {
LAB_10b3294dc:
    plVar5 = (long *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      plVar5 = param_1;
    }
    iVar3 = (int)plVar5;
    plVar5 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar5 = param_2;
    }
    _rename();
    if (iVar3 == 0) {
      plVar13 = (long *)0x1;
    }
    else {
      plVar6 = (long *)0x1;
      puVar7 = (undefined8 *)0x0;
      plVar13 = param_1;
      FUN_10b328368();
      plVar5 = param_2;
      if ((int)plVar13 == 0) goto LAB_10b3295ec;
      plVar13 = (long *)0x1;
      plVar5 = (long *)0x1;
      FUN_10b3279f8(param_1);
    }
  }
  plVar4 = alStack_100;
  func_0x000107c2ce2c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar13;
  }
  ___stack_chk_fail();
  plVar13 = (long *)plVar4[1];
  *param_6 = 0;
  if (plVar5 <= plVar6 && (long)plVar6 - (long)plVar5 != 0) {
    if ((long *)plVar4[1] < plVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0,0x10b329834);
      (*pcVar2)();
    }
    if ((long *)plVar4[1] < plVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0,0x10b329840);
      (*pcVar2)();
    }
    puVar9 = (undefined8 *)(*plVar4 + (long)plVar5 * 0x18);
    puVar10 = (undefined8 *)(*plVar4 + (long)plVar6 * 0x18);
    if (puVar7 < puVar10) {
      if ((puVar10 < puVar9) || (CARRY8((ulong)puVar7,(long)puVar10 - (long)puVar9))) {
LAB_10b329844:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10b329848);
        (*pcVar2)();
      }
      if (puVar9 < (undefined8 *)((long)puVar7 + ((long)puVar10 - (long)puVar9))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0,0x10b32987c);
        (*pcVar2)();
      }
    }
    lVar11 = (long)plVar6 * 0x18 + (long)plVar5 * -0x18;
    do {
      uVar15 = puVar9[1];
      uVar14 = *puVar9;
      puVar7[2] = puVar9[2];
      puVar7[1] = uVar15;
      *puVar7 = uVar14;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      lVar11 = lVar11 + -0x18;
      puVar7 = puVar7 + 3;
      puVar9 = puVar9 + 3;
    } while (lVar11 != 0);
    *param_7 = (long)plVar6 - (long)plVar5;
    return plVar4;
  }
  if (plVar5 <= plVar6) {
    *param_7 = 0;
    return plVar4;
  }
  plVar12 = (long *)plVar4[1];
  if (plVar12 < plVar5) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0,0x10b32984c);
    (*pcVar2)();
  }
  if (plVar12 < plVar13) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0,0x10b329858);
    (*pcVar2)();
  }
  puVar9 = (undefined8 *)*plVar4;
  puVar10 = puVar9 + (long)plVar5 * 3;
  puVar8 = puVar9 + (long)plVar13 * 3;
  if (puVar7 < puVar8) {
    if ((puVar8 < puVar10) || (CARRY8((ulong)puVar7,(long)puVar8 - (long)puVar10)))
    goto LAB_10b329844;
    if (puVar10 < (undefined8 *)((long)puVar7 + ((long)puVar8 - (long)puVar10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0,0x10b329888);
      (*pcVar2)();
    }
  }
  uVar1 = (long)plVar13 - (long)plVar5;
  if (uVar1 != 0) {
    lVar11 = (long)plVar13 * 0x18 + (long)plVar5 * -0x18;
    puVar9 = puVar7;
    do {
      uVar15 = puVar10[1];
      uVar14 = *puVar10;
      puVar9[2] = puVar10[2];
      puVar9[1] = uVar15;
      *puVar9 = uVar14;
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = 0;
      lVar11 = lVar11 + -0x18;
      puVar10 = puVar10 + 3;
      puVar9 = puVar9 + 3;
    } while (lVar11 != 0);
    puVar9 = (undefined8 *)*plVar4;
    plVar12 = (long *)plVar4[1];
  }
  if (plVar12 < plVar6) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0,0x10b329864);
    (*pcVar2)();
  }
  if (param_5 < uVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0,0x10b329870);
    (*pcVar2)();
  }
  puVar10 = puVar9 + (long)plVar6 * 3;
  puVar7 = puVar7 + uVar1 * 3;
  if (puVar7 < puVar10) {
    if ((puVar10 < puVar9) || (CARRY8((ulong)puVar7,(long)puVar10 - (long)puVar9)))
    goto LAB_10b329844;
    if (puVar9 < (undefined8 *)((long)puVar7 + ((long)puVar10 - (long)puVar9))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0,0x10b329894);
      (*pcVar2)();
    }
  }
  if (plVar6 != (long *)0x0) {
    lVar11 = (long)plVar6 * 0x18;
    do {
      uVar15 = puVar9[1];
      uVar14 = *puVar9;
      puVar7[2] = puVar9[2];
      puVar7[1] = uVar15;
      *puVar7 = uVar14;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      lVar11 = lVar11 + -0x18;
      puVar9 = puVar9 + 3;
      puVar7 = puVar7 + 3;
    } while (lVar11 != 0);
  }
  *param_7 = uVar1 + (long)plVar6;
  return plVar4;
}



/* Entry: 10b2f151c; end: 10b2f16ff;  */

undefined1 *** FUN_10b2f151c(undefined1 ***param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined1 ***pppuVar3;
  undefined1 ***pppuVar4;
  int *piVar5;
  undefined1 ***pppuVar6;
  undefined1 ***pppuVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *apuStack_e8 [4];
  undefined1 **ppuStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = (undefined1 ***)0x8000;
  __Znwm();
  _bzero();
  do {
    pppuVar4 = param_1;
    pppuVar6 = pppuVar3;
    func_0x00010b326f20(param_1,pppuVar3,0x8000);
    iVar2 = (int)pppuVar4;
    if (iVar2 < 0) break;
    if (iVar2 == 0) {
      pppuVar7 = (undefined1 ***)0x1;
      if (pppuVar3 == (undefined1 ***)0x0) goto LAB_10b2f16b4;
      goto LAB_10b2f16ac;
    }
    uVar8 = 0;
    while( true ) {
      uStack_88 = 0xaaaaaaaaaaaaaaaa;
      uStack_90 = 0xaaaaaaaaaaaaaaaa;
      uStack_78 = 0xaaaaaaaaaaaaaaaa;
      uStack_80 = 0xaaaaaaaaaaaaaaaa;
      uStack_a8 = 0xaaaaaaaaaaaaaaaa;
      uStack_b0 = 0xaaaaaaaaaaaaaaaa;
      uStack_98 = 0xaaaaaaaaaaaaaaaa;
      uStack_a0 = 0xaaaaaaaaaaaaaaaa;
      uStack_b8 = 0xaaaaaaaaaaaaaaaa;
      puStack_c0 = (undefined1 **)0xaaaaaaaaaaaaaaaa;
      func_0x000107c2cb24(apuStack_e8,&UNK_10f74546c,&UNK_10f74542c,0x140);
      pppuVar6 = (undefined1 ***)apuStack_e8;
      func_0x000107c2ce28(&puStack_c0,pppuVar6,0,0);
      if ((bRam000000011336f9a8 & 0x19) != 0) {
        ppuStack_c8 = (undefined1 **)apuStack_e8;
        pppuVar6 = &ppuStack_c8;
        func_0x00010b32059c(&UNK_10f74523a);
      }
      iVar1 = iVar2 - (int)uVar8;
      if (iVar1 < 0) break;
      uVar11 = 0;
      do {
        pppuVar4 = (undefined1 ***)((long)pppuVar3 + uVar11 + uVar8);
        uVar9 = (uint)uVar11;
        while( true ) {
          piVar5 = (int *)(ulong)*(uint *)(param_2 + 8);
          pppuVar6 = pppuVar4;
          _write(piVar5,pppuVar4,(long)(int)(iVar1 - uVar9));
          if (piVar5 != (int *)0xffffffffffffffff) break;
          ___error();
          if (*piVar5 != 4) {
            piVar5 = (int *)0xffffffff;
            goto LAB_10b2f1648;
          }
        }
        if ((int)piVar5 < 1) break;
        uVar9 = uVar9 + (int)piVar5;
        uVar11 = (ulong)uVar9;
      } while ((int)uVar9 < iVar1);
LAB_10b2f1648:
      uVar10 = (uint)piVar5;
      if (uVar9 != 0) {
        uVar10 = uVar9;
      }
      pppuVar4 = (undefined1 ***)&puStack_c0;
      func_0x000107c2ce2c();
      if (((int)uVar10 < 0) ||
         (uVar9 = (uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU)) + (int)uVar8, uVar8 = (ulong)uVar9,
         iVar2 <= (int)uVar9)) goto LAB_10b2f1570;
    }
    pppuVar4 = (undefined1 ***)&puStack_c0;
    func_0x000107c2ce2c();
    uVar10 = 0xffffffff;
LAB_10b2f1570:
  } while (-1 < (int)uVar10);
  pppuVar7 = (undefined1 ***)0x0;
  if (pppuVar3 != (undefined1 ***)0x0) {
LAB_10b2f16ac:
    __ZdlPv();
    pppuVar4 = pppuVar3;
  }
LAB_10b2f16b4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  pppuVar3 = pppuVar4;
  if (pppuVar6 != (undefined1 ***)0x0) {
    if (*(char *)((long)pppuVar6 + 0x17) < '\0') {
      *(undefined1 *)*pppuVar6 = 0;
      pppuVar6[1] = (undefined1 **)0x0;
      func_0x000107c2cac4();
      goto joined_r0x00010b2f1730;
    }
    *(undefined1 *)pppuVar6 = 0;
    *(undefined1 *)((long)pppuVar6 + 0x17) = 0;
  }
  func_0x000107c2cac4();
joined_r0x00010b2f1730:
  if ((((ulong)pppuVar3 & 1) == 0) &&
     (func_0x000107c2cfac(pppuVar4,&UNK_10f744118), pppuVar4 != (undefined1 ***)0x0)) {
    pppuVar3 = pppuVar4;
    func_0x000107c2cac8();
    _fclose(pppuVar4);
    return pppuVar3;
  }
  return (undefined1 ***)0x0;
}



/* Entry: 10b2f1700; end: 10b2f187b;  */

ulong FUN_10b2f1700(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  if (param_2 != (undefined8 *)0x0) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      *(undefined1 *)*param_2 = 0;
      param_2[1] = 0;
      func_0x000107c2cac4();
      goto joined_r0x00010b2f1788;
    }
    *(undefined1 *)param_2 = 0;
    *(undefined1 *)((long)param_2 + 0x17) = 0;
  }
  func_0x000107c2cac4();
joined_r0x00010b2f1788:
  if (((uVar1 & 1) == 0) && (func_0x000107c2cfac(param_1,&UNK_10f744118), param_1 != 0)) {
    uVar1 = param_1;
    func_0x000107c2cac8();
    _fclose(param_1);
    return uVar1;
  }
  return 0;
}



/* Entry: 10b2f187c; end: 10b2f1e6f;  */

/* WARNING: Removing unreachable block (ram,0x00010b2f1ae0) */
/* WARNING: Removing unreachable block (ram,0x00010b2f18d4) */
/* WARNING: Removing unreachable block (ram,0x00010b2f1b10) */
/* WARNING: Type propagation algorithm not settling */

int ******* FUN_10b2f187c(int *******param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int ******ppppppiVar4;
  ulong uVar5;
  int *******pppppppiVar6;
  undefined ***pppuVar7;
  int *******pppppppiVar8;
  int *******pppppppiVar9;
  undefined8 *puVar10;
  long lVar11;
  int *******pppppppiVar12;
  int *piVar13;
  int *******pppppppiStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_158;
  char cStack_141;
  int *******pppppppiStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined **ppuStack_128;
  undefined4 uStack_120;
  undefined1 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_fc;
  undefined2 uStack_f8;
  undefined **ppuStack_f0;
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c4;
  undefined2 uStack_c0;
  undefined **ppuStack_b8;
  undefined4 uStack_b0;
  undefined1 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_8c;
  undefined2 uStack_88;
  int ******ppppppiStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_3;
  if (((ulong)param_4 & 1) == 0) {
    func_0x000107c2cab4(&ppppppiStack_80,param_1);
    func_0x000107c2cad4(&ppppppiStack_80);
  }
  pppppppiStack_140 = (int *******)0x0;
  uStack_138 = 0;
  lStack_130 = 0;
  uStack_50 = 0xaaaaaaaaaaaaaaaa;
  uStack_68 = 0xaaaaaaaaaaaaaaaa;
  uStack_70 = 0xaaaaaaaaaaaaaaaa;
  uStack_58 = 0xaaaaaaaaaaaaaaaa;
  uStack_60 = 0xaaaaaaaaaaaaaaaa;
  uStack_78 = 0xaaaaaaaaaaaaaaaa;
  ppppppiStack_80 = (int ******)0xaaaaaaaaaaaaaaaa;
  func_0x000107c2cab4(&uStack_158,param_1);
  pppppppiVar9 = (int *******)&pppppppiStack_140;
  FUN_10b328f9c(&ppppppiStack_80,&uStack_158);
  if (cStack_141 < '\0') {
    __ZdlPv(CONCAT44(uStack_158._4_4_,(undefined4)uStack_158));
    if ((int)uStack_78 == -1) goto LAB_10b2f19f4;
LAB_10b2f1928:
    if (0 < (long)param_3) {
      uVar5 = param_2 + (long)param_3;
      do {
        lVar11 = uVar5 - param_2;
        if (0x7fffff < lVar11) {
          lVar11 = 0x800000;
        }
        ppppppiVar4 = (int ******)&ppppppiStack_80;
        func_0x00010b327204(ppppppiVar4,param_2,lVar11);
        if ((int)ppppppiVar4 != (int)lVar11) {
          uStack_b0 = (int)uStack_78;
          uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
          ppuStack_b8 = &PTR_FUN_110cd4978;
          uStack_ac = 0;
          uStack_a0 = uStack_68;
          uStack_a8 = uStack_70;
          uStack_98 = uStack_60;
          uStack_8c = uStack_58._4_4_;
          uStack_88 = (undefined2)uStack_50;
          pppppppiVar9 = (int *******)&pppppppiStack_140;
          puVar10 = (undefined8 *)0x0;
          func_0x00010b2f1cc8();
          pppuVar7 = &ppuStack_b8;
          goto LAB_10b2f1b3c;
        }
        param_2 = param_2 + (long)(int)lVar11;
      } while (param_2 < uVar5);
    }
    uVar5 = 0;
    func_0x00010b3276ec();
    if ((uVar5 & 1) == 0) {
      uStack_e8 = (int)uStack_78;
      uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
      ppuStack_f0 = &PTR_FUN_110cd4978;
      uStack_e4 = 0;
      uStack_d8 = uStack_68;
      uStack_e0 = uStack_70;
      uStack_d0 = uStack_60;
      uStack_c4 = uStack_58._4_4_;
      uStack_c0 = (undefined2)uStack_50;
      pppppppiVar9 = (int *******)&pppppppiStack_140;
      puVar10 = (undefined8 *)0x0;
      func_0x00010b2f1cc8();
      pppuVar7 = &ppuStack_f0;
LAB_10b2f1b3c:
      func_0x000107c2ca9c(pppuVar7);
      pppppppiVar6 = &ppppppiStack_80;
      func_0x000107c2ca9c(pppppppiVar6);
      goto joined_r0x00010b2f1a04;
    }
    uStack_158._0_4_ = 0;
    func_0x000107c2cf88(&ppppppiStack_80);
    pppppppiVar12 = (int *******)&pppppppiStack_140;
    puVar10 = &uStack_158;
    FUN_10b32820c();
    if (((ulong)pppppppiVar12 & 1) == 0) {
      ppuStack_128 = &PTR_FUN_110cd4978;
      uStack_120 = 0xffffffff;
      uStack_11c = 0;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_118 = 0;
      uStack_fc = 0xffffffff;
      uStack_f8 = 0;
      pppppppiVar9 = (int *******)&pppppppiStack_140;
      puVar10 = (undefined8 *)0x0;
      func_0x00010b2f1cc8();
      func_0x000107c2ca9c(&ppuStack_128);
      pppppppiVar6 = &ppppppiStack_80;
      func_0x000107c2ca9c(pppppppiVar6);
      pppppppiVar8 = pppppppiStack_140;
    }
    else {
      pppppppiVar6 = &ppppppiStack_80;
      func_0x000107c2ca9c(pppppppiVar6);
      pppppppiVar9 = param_1;
      pppppppiVar8 = pppppppiStack_140;
    }
  }
  else {
    if ((int)uStack_78 != -1) goto LAB_10b2f1928;
LAB_10b2f19f4:
    pppppppiVar6 = &ppppppiStack_80;
    func_0x000107c2ca9c(pppppppiVar6);
joined_r0x00010b2f1a04:
    pppppppiVar12 = (int *******)0x0;
    pppppppiVar8 = pppppppiStack_140;
  }
  pppppppiStack_140 = pppppppiVar8;
  if (lStack_130 < 0) {
    __ZdlPv(pppppppiVar8);
    pppppppiVar6 = pppppppiVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) goto LAB_10b2f1b74;
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
LAB_10b2f1b74:
    ___stack_chk_fail();
    lStack_1b0 = 0;
    uStack_1a8 = 0;
    pppppppiStack_1b8 = (int *******)0x0;
    pppppppiVar12 = (int *******)*pppppppiVar9;
    *pppppppiVar9 = (int ******)0x0;
    pppppppiVar9 = pppppppiVar12;
    (*(code *)pppppppiVar12[1])(pppppppiVar12,&pppppppiStack_1b8);
    if (pppppppiVar12 != (int *******)0x0) {
      do {
        iVar1 = *(int *)pppppppiVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppiVar12,0x10);
        if (bVar3) {
          *(int *)pppppppiVar12 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        (*(code *)pppppppiVar12[2])(pppppppiVar12);
      }
    }
    if ((int)pppppppiVar9 != 0) {
      piVar13 = (int *)*puVar10;
      if (piVar13 != (int *)0x0) {
        *puVar10 = 0;
        (**(code **)(piVar13 + 2))(piVar13);
        do {
          iVar1 = *piVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 + -1 == 0) {
          (**(code **)(piVar13 + 4))(piVar13);
        }
      }
      pppppppiVar9 = pppppppiStack_1b8;
      if (-1 < (long)uStack_1a8._7_1_) {
        pppppppiVar9 = (int *******)&pppppppiStack_1b8;
      }
      lVar11 = lStack_1b0;
      if (-1 < uStack_1a8) {
        lVar11 = (long)uStack_1a8._7_1_;
      }
      FUN_10b2f187c(pppppppiVar6,pppppppiVar9,lVar11,1);
      pppppppiVar12 = (int *******)*param_4;
      pppppppiVar9 = pppppppiVar6;
      if (pppppppiVar12 != (int *******)0x0) {
        *param_4 = 0;
        pppppppiVar9 = pppppppiVar12;
        (*(code *)pppppppiVar12[1])(pppppppiVar12,pppppppiVar6);
        do {
          iVar1 = *(int *)pppppppiVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppppppiVar12,0x10);
          if (bVar3) {
            *(int *)pppppppiVar12 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 + -1 == 0) {
          (*(code *)pppppppiVar12[2])(pppppppiVar12);
          pppppppiVar9 = pppppppiVar12;
        }
      }
    }
    if (-1 < uStack_1a8) {
      return pppppppiVar9;
    }
    __ZdlPv(pppppppiStack_1b8);
    return pppppppiStack_1b8;
  }
  return pppppppiVar12;
}



/* Entry: 10b2f1e70; end: 10b2f20d7;  */

undefined8 * FUN_10b2f1e70(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  long *plVar6;
  
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1[0x1c] + 4) = 1;
  piVar5 = (int *)param_1[0x1c];
  if (piVar5 != (int *)0x0) {
    do {
      iVar2 = *piVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar4) {
        *piVar5 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      __ZdlPv();
    }
  }
  if (*(char *)((long)param_1 + 0xd7) < '\0') {
    __ZdlPv(param_1[0x18]);
  }
  param_1[6] = &PTR_DAT_110cd6318;
  piVar5 = (int *)param_1[0x13];
  if (piVar5 != (int *)0x0) {
    do {
      iVar2 = *piVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar4) {
        *piVar5 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(piVar5 + 4))();
    }
  }
  param_1[6] = &PTR_DAT_110cd62d8;
  if ((undefined8 *)param_1[0xc] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xc] = 0;
    param_1[0xc] = 0;
    if ((long *)param_1[0xe] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0xe] + 0x18))();
      plVar6 = (long *)param_1[0xe];
      param_1[0xe] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  plVar6 = (long *)param_1[0xe];
  param_1[0xe] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = (long *)param_1[7];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      iVar2 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  plVar6 = (long *)param_1[5];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      iVar2 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  piVar5 = (int *)param_1[1];
  if (piVar5 != (int *)0x0) {
    do {
      iVar2 = *piVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar4) {
        *piVar5 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(piVar5 + 4))();
    }
  }
  piVar5 = (int *)*param_1;
  if (piVar5 != (int *)0x0) {
    do {
      iVar2 = *piVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar4) {
        *piVar5 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(piVar5 + 4))();
    }
  }
  return param_1;
}



/* Entry: 10b2f20d8; end: 10b2f23bb;  */

void FUN_10b2f20d8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined1 auStack_68 [32];
  int *piStack_48;
  
  puVar6 = (undefined4 *)0x70;
  __Znwm();
  *puVar6 = 1;
  *(code **)(puVar6 + 2) = FUN_10b2f2b94;
  *(code **)(puVar6 + 4) = FUN_10b2f2c50;
  *(undefined **)(puVar6 + 6) = &UNK_100142430;
  *(undefined8 *)(puVar6 + 8) = 0x10b2f1b78;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    func_0x000107c3192c(puVar6 + 10,param_1[2],param_1[3]);
  }
  else {
    uVar13 = param_1[2];
    *(undefined8 *)(puVar6 + 0xc) = param_1[3];
    *(undefined8 *)(puVar6 + 10) = uVar13;
    *(undefined8 *)(puVar6 + 0xe) = param_1[4];
  }
  *(undefined8 *)(puVar6 + 0x10) = *param_2;
  *param_2 = 0;
  uVar13 = *param_1;
  *(undefined8 *)(puVar6 + 0x14) = param_1[1];
  *(undefined8 *)(puVar6 + 0x12) = uVar13;
  *param_1 = 0;
  param_1[1] = 0;
  if (*(char *)((long)param_1 + 0xd7) < '\0') {
    func_0x000107c3192c(puVar6 + 0x16,param_1[0x18],param_1[0x19]);
  }
  else {
    uVar13 = param_1[0x18];
    *(undefined8 *)(puVar6 + 0x18) = param_1[0x19];
    *(undefined8 *)(puVar6 + 0x16) = uVar13;
    *(undefined8 *)(puVar6 + 0x1a) = param_1[0x1a];
  }
  piVar11 = (int *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x18;
    __Znwm();
    *puVar7 = 0;
    *(undefined4 **)(puVar7 + 2) = puVar6;
    *(undefined1 *)(puVar7 + 4) = 0;
    piVar11 = (int *)0x38;
    __Znwm();
    *piVar11 = 1;
    *(code **)(piVar11 + 2) = FUN_10b2f2d94;
    *(code **)(piVar11 + 4) = FUN_10b2f2db0;
    *(undefined **)(piVar11 + 6) = &UNK_100142430;
    piVar11[8] = 0xb2f2d14;
    piVar11[9] = 1;
    piVar11[10] = 0;
    piVar11[0xb] = 0;
    *(undefined4 **)(piVar11 + 0xc) = puVar7;
    if (piVar11 != (int *)0x0) {
      do {
        iVar2 = *piVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = iVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 < 1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x10b2f23a8);
        (*pcVar5)();
      }
      do {
        iVar2 = *piVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = iVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 < 1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x10b2f23b4);
        (*pcVar5)();
      }
      do {
        iVar2 = *piVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        (**(code **)(piVar11 + 4))(piVar11);
      }
    }
  }
  puVar12 = (undefined8 *)param_1[5];
  func_0x000107c2cb24(auStack_68,&UNK_10f74411b,&UNK_10f74413e,0x145);
  lVar8 = 0x10;
  __Znwm();
  lVar9 = lVar8;
  FUN_10b32a344();
  *(int **)(lVar9 + 8) = piVar11;
  piVar10 = (int *)0x38;
  __Znwm();
  *piVar10 = 1;
  *(code **)(piVar10 + 2) = FUN_10b2f29c0;
  *(code **)(piVar10 + 4) = FUN_10b2f29dc;
  *(undefined **)(piVar10 + 6) = &UNK_100142430;
  *(code **)(piVar10 + 8) = FUN_10b32a2bc;
  piVar10[10] = 0;
  piVar10[0xb] = 0;
  *(long *)(piVar10 + 0xc) = lVar8;
  piStack_48 = piVar10;
  (**(code **)*puVar12)(puVar12,auStack_68,&piStack_48,0);
  if (piStack_48 != (int *)0x0) {
    do {
      iVar2 = *piStack_48;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piStack_48,0x10);
      if (bVar4) {
        *piStack_48 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(piStack_48 + 4))(piStack_48);
    }
  }
  if ((((ulong)puVar12 & 1) == 0) && ((**(code **)(piVar11 + 2))(piVar11), piVar11 != (int *)0x0)) {
    do {
      iVar2 = *piVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar4) {
        *piVar11 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 1) {
      (**(code **)(piVar11 + 4))(piVar11);
    }
    piVar11 = (int *)0x0;
  }
  plVar1 = param_1 + 6;
  if ((long *)param_1[0x14] != (long *)0x0) {
    plVar1 = (long *)param_1[0x14];
  }
  (**(code **)(*plVar1 + 0x18))();
  param_1[0x16] = 0;
  if (piVar11 != (int *)0x0) {
    do {
      iVar2 = *piVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar4) {
        *piVar11 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(piVar11 + 4))(piVar11);
    }
  }
  return;
}



/* Entry: 10b2f23bc; end: 10b2f24a3;  */

void FUN_10b2f23bc(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  undefined8 uVar6;
  int *piStack_58;
  undefined1 auStack_50 [32];
  
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  *(undefined8 *)(param_1 + 0xb0) = 1;
  plVar1 = (long *)(param_1 + 0x30);
  if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
    plVar1 = *(long **)(param_1 + 0xa0);
  }
  if ((*(byte *)(plVar1 + 7) & 1) == 0) {
    func_0x000107c2cb24(auStack_50,&UNK_10f744186,&UNK_10f74413e,0x159);
    uVar6 = *(undefined8 *)(param_1 + 0xb8);
    piVar5 = (int *)0x38;
    __Znwm();
    *piVar5 = 1;
    *(code **)(piVar5 + 2) = FUN_10b2f2e20;
    piVar5[4] = 0xb2f2e3c;
    piVar5[5] = 1;
    *(undefined **)(piVar5 + 6) = &UNK_100142430;
    *(code **)(piVar5 + 8) = FUN_10b2f24a4;
    piVar5[10] = 0;
    piVar5[0xb] = 0;
    *(long *)(piVar5 + 0xc) = param_1;
    piStack_58 = piVar5;
    (**(code **)(*plVar1 + 0x40))(plVar1,auStack_50,uVar6,&piStack_58);
    if (piStack_58 != (int *)0x0) {
      do {
        iVar2 = *piStack_58;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piStack_58,0x10);
        if (bVar4) {
          *piStack_58 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        (**(code **)(piStack_58 + 4))();
      }
    }
  }
  return;
}



/* Entry: 10b2f24a4; end: 10b2f2807;  */

void FUN_10b2f24a4(int *param_1,int **param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int **ppiVar11;
  undefined8 uVar12;
  int *piVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int *piStack_80;
  int *piStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  piVar9 = param_1;
  (*(code *)PTR_DAT_11336f918)();
  if (*(long *)(param_1 + 0x2c) == 1) {
    piStack_78 = (int *)0x0;
    uStack_70 = 0;
    uStack_68 = 0;
    uVar1 = *(long *)(param_1 + 0x36) + 0x400;
    if (0x7ffffffffffffff6 < uVar1) goto LAB_10b2f2804;
    if (0x16 < uVar1) {
      piVar9 = (int *)0x19;
      if ((uVar1 | 7) != 0x17) {
        piVar9 = (int *)((uVar1 | 7) + 1);
      }
      piVar8 = piVar9;
      __Znwm();
      *(undefined1 *)piVar8 = piStack_78._0_1_;
      uStack_68 = (ulong)piVar9 | 0x8000000000000000;
      piStack_78 = piVar8;
    }
    uStack_70 = 0;
    puVar7 = *(undefined8 **)(param_1 + 0x2a);
    param_2 = &piStack_78;
    (**(code **)*puVar7)();
    if (((ulong)puVar7 & 1) == 0) {
      plVar2 = (long *)(param_1 + 0xc);
      if (*(long **)(param_1 + 0x28) != (long *)0x0) {
        plVar2 = *(long **)(param_1 + 0x28);
      }
      (**(code **)(*plVar2 + 0x18))();
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      if (-1 < (long)uStack_68) {
        return;
      }
      __ZdlPv(piStack_78);
      return;
    }
    uVar1 = uStack_70;
    if (-1 < (long)uStack_68) {
      uVar1 = uStack_68 >> 0x38;
    }
    *(ulong *)(param_1 + 0x36) = uVar1;
    piVar8 = (int *)0x40;
    __Znwm();
    *piVar8 = 1;
    *(code **)(piVar8 + 2) = FUN_10b2f2e48;
    *(code **)(piVar8 + 4) = FUN_10b2f2ee4;
    *(undefined **)(piVar8 + 6) = &UNK_100142430;
    *(ulong *)(piVar8 + 0xc) = uStack_70;
    *(int **)(piVar8 + 10) = piStack_78;
    *(ulong *)(piVar8 + 0xe) = uStack_68;
  }
  else {
    if (*(long *)(param_1 + 0x2c) != 2) {
      FUN_10b2f2aac();
      goto LAB_10b2f2804;
    }
    (**(code **)**(undefined8 **)(param_1 + 0x2a))(&piStack_78);
    piVar8 = piStack_78;
  }
  (*(code *)PTR_DAT_11336f918)();
  piVar13 = *(int **)(param_1 + 0x30);
  bVar4 = *(byte *)((long)param_1 + 0xd7);
  uVar1 = *(ulong *)(param_1 + 0x32);
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  piVar9 = (int *)0x28;
  __Znwm();
  uStack_68 = 0x8000000000000028;
  uStack_70 = 0x23;
  *(undefined4 *)((long)piVar9 + 0x1f) = 0x6e6f6974;
  piVar9[2] = 0x6c694674;
  piVar9[3] = 0x65532e65;
  piVar9[0] = 0x6f706d49;
  piVar9[1] = 0x6e617472;
  piVar9[6] = 0x446e6f69;
  piVar9[7] = 0x74617275;
  piVar9[4] = 0x6c616972;
  piVar9[5] = 0x74617a69;
  *(undefined1 *)((long)piVar9 + 0x23) = 0;
  piStack_78 = piVar9;
  if (uVar1 != 0) {
    if (-1 < (char)bVar4) {
      piVar13 = param_1 + 0x30;
    }
    *(undefined2 *)((long)piVar9 + 0x23) = 0x2e;
    if (uVar1 < 4) {
      _memmove(piVar9 + 9,piVar13,uVar1);
      uStack_70 = uVar1 | 0x24;
    }
    else {
      if (uVar1 + 0x800000000000002d < 0x8000000000000030) {
LAB_10b2f2804:
        func_0x000104bd47d4();
        piVar13 = *param_2;
        *param_2 = (int *)0x0;
        piVar8 = *(int **)piVar9;
        *(int **)piVar9 = piVar13;
        if (piVar8 != (int *)0x0) {
          do {
            iVar3 = *piVar8;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar6) {
              *piVar8 = iVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar3 + -1 == 0) {
            (**(code **)(piVar8 + 4))(piVar8);
          }
        }
        uVar12 = *param_3;
        *param_3 = 0;
        piVar8 = *(int **)(piVar9 + 2);
        *(undefined8 *)(piVar9 + 2) = uVar12;
        if (piVar8 != (int *)0x0) {
          do {
            iVar3 = *piVar8;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar6) {
              *piVar8 = iVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar3 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b2f2890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(piVar8 + 4))(piVar8);
            return;
          }
        }
        return;
      }
      uVar14 = uVar1;
      if (uVar1 < 0x2b) {
        uVar14 = 0x2a;
      }
      uVar14 = uVar14 + 0x24 | 7;
      piVar10 = (int *)(uVar14 + 1);
      __Znwm();
      uVar12 = *(undefined8 *)piVar9;
      uVar16 = *(undefined8 *)(piVar9 + 6);
      uVar15 = *(undefined8 *)(piVar9 + 4);
      *(undefined8 *)(piVar10 + 2) = *(undefined8 *)(piVar9 + 2);
      *(undefined8 *)piVar10 = uVar12;
      *(undefined8 *)(piVar10 + 6) = uVar16;
      *(undefined8 *)(piVar10 + 4) = uVar15;
      piVar10[8] = piVar9[8];
      _memmove(piVar10 + 9,piVar13,uVar1);
      __ZdlPv(piVar9);
      uStack_68 = uVar14 + 0x8000000000000001;
      uStack_70 = uVar1 + 0x24;
      piVar9 = piVar10;
      piStack_78 = piVar10;
    }
    *(undefined1 *)((long)piVar9 + uStack_70) = 0;
  }
  ppiVar11 = &piStack_78;
  func_0x000107c2cb90(ppiVar11,1000,10000000,0x32,1);
  (**(code **)(*ppiVar11 + 0xc))();
  if ((long)uStack_68 < 0) {
    __ZdlPv(piStack_78);
  }
  piStack_80 = piVar8;
  FUN_10b2f20d8(param_1,&piStack_80);
  if (piStack_80 != (int *)0x0) {
    do {
      iVar3 = *piStack_80;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piStack_80,0x10);
      if (bVar6) {
        *piStack_80 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      (**(code **)(piStack_80 + 4))();
    }
  }
  return;
}



/* Entry: 10b2f2808; end: 10b2f29bf;  */

void FUN_10b2f2808(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  *param_2 = 0;
  piVar4 = (int *)*param_1;
  *param_1 = uVar5;
  if (piVar4 != (int *)0x0) {
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      (**(code **)(piVar4 + 4))(piVar4);
    }
  }
  uVar5 = *param_3;
  *param_3 = 0;
  piVar4 = (int *)param_1[1];
  param_1[1] = uVar5;
  if (piVar4 != (int *)0x0) {
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b2f2890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(piVar4 + 4))(piVar4);
      return;
    }
  }
  return;
}



/* Entry: 10b2f29c0; end: 10b2f29db;  */

void FUN_10b2f29c0(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(*(long *)(*(long *)(param_1 + 0x30) + ((long)*(ulong *)(param_1 + 0x28) >> 1)) +
                   ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010b2f29d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


