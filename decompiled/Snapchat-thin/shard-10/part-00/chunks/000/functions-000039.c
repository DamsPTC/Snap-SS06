/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10739c0ec; end: 10739c127;  */

undefined1 * FUN_10739c0ec(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x20] = 0;
  FUN_10739c128();
  return param_1;
}



/* Entry: 10739c128; end: 10739c13b;  */

void FUN_10739c128(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_10739c158();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 10739c13c; end: 10739c157;  */

void FUN_10739c13c(long param_1)

{
  FUN_10739c158();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10739c158; end: 10739c1b7;  */

long FUN_10739c158(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 10739c1b8; end: 10739c28b;  */

double FUN_10739c1b8(double param_1,double param_2,undefined8 param_3,double param_4,double *param_5
                    )

{
  double dVar1;
  
  FUN_10739c3a8(param_1,param_3);
  dVar1 = (param_2 - param_4) * *param_5;
  return dVar1 * dVar1 + param_1 * param_5[1] * param_1 * param_5[1];
}



/* Entry: 10739c28c; end: 10739c29f;  */

long * FUN_10739c28c(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar1[3] = 0;
  plVar1[4] = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      func_0x000104bd35f4();
      lVar2 = plVar1[2];
      while (lVar2 != plVar1[1]) {
        lVar2 = lVar2 + -0x18;
        plVar1[2] = lVar2;
      }
      if (*plVar1 != 0) {
        __ZdlPv();
      }
      return plVar1;
    }
    lVar2 = param_2 * 0x18;
    __Znwm();
  }
  lVar3 = lVar2 + param_3 * 0x18;
  *plVar1 = lVar2;
  plVar1[1] = lVar3;
  plVar1[2] = lVar3;
  plVar1[3] = lVar2 + param_2 * 0x18;
  return plVar1;
}



/* Entry: 10739c2a0; end: 10739c317;  */

long * FUN_10739c2a0(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      func_0x000104bd35f4();
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
    lVar1 = param_2 * 0x18;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x18;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x18;
  return param_1;
}



/* Entry: 10739c318; end: 10739c357;  */

long * FUN_10739c318(long *param_1)

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



/* Entry: 10739c358; end: 10739c3a7;  */

long * FUN_10739c358(double param_1,double param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0xaaaaaaaaaaaaaaa < param_4) {
    FUN_10739c28c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__remainder_11034ca40)(param_1 - param_2,0x4076800000000000);
    return param_3;
  }
  uVar1 = (param_3[2] - *param_3) / 0x18;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_4 || (long)plVar2 - (long)param_4 == 0) {
    plVar2 = param_4;
  }
  if (0x555555555555554 < uVar1) {
    plVar2 = (long *)0xaaaaaaaaaaaaaaa;
  }
  return plVar2;
}



/* Entry: 10739c3a8; end: 10739c3b7;  */

void FUN_10739c3a8(double param_1,double param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__remainder_11034ca40)(param_1 - param_2,0x4076800000000000);
  return;
}



/* Entry: 10739c3b8; end: 10739c603;  */

void FUN_10739c3b8(double *param_1,double *param_2,ulong param_3,double *param_4,long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  double *pdVar3;
  double *pdVar4;
  double *extraout_x8;
  double *extraout_x8_00;
  double *pdVar5;
  double *pdVar6;
  long extraout_x9;
  long extraout_x9_00;
  long lVar7;
  double *pdVar8;
  long lVar9;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x12;
  long extraout_x12_00;
  double *pdVar10;
  double *extraout_x13;
  double *extraout_x13_00;
  double *pdVar11;
  double *pdVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  if (1 < param_3) {
    if (param_3 == 2) {
      if (param_2[-1] < param_1[2]) {
        dVar18 = param_1[1];
        dVar17 = *param_1;
        dVar19 = param_2[-3];
        param_1[1] = param_2[-2];
        *param_1 = dVar19;
        param_2[-2] = dVar18;
        param_2[-3] = dVar17;
        dVar17 = param_1[2];
        param_1[2] = param_2[-1];
        param_2[-1] = dVar17;
      }
    }
    else if ((long)param_3 < 1) {
      if (param_1 != param_2) {
        lVar15 = 0;
        pdVar6 = param_1;
        while (pdVar3 = pdVar6 + 3, pdVar3 != param_2) {
          dVar17 = pdVar6[5];
          if (dVar17 < pdVar6[2]) {
            dVar19 = pdVar6[4];
            dVar18 = *pdVar3;
            lVar16 = lVar15;
            do {
              lVar13 = lVar16;
              puVar1 = (undefined8 *)((long)param_1 + lVar13);
              puVar1[4] = puVar1[1];
              puVar1[3] = *puVar1;
              puVar1[5] = puVar1[2];
              pdVar6 = param_1;
              if (lVar13 == 0) goto LAB_10739c52c;
              lVar16 = lVar13 + -0x18;
            } while (dVar17 < (double)puVar1[-1]);
            pdVar6 = (double *)((long)param_1 + lVar13);
LAB_10739c52c:
            pdVar6[1] = dVar19;
            *pdVar6 = dVar18;
            pdVar6[2] = dVar17;
          }
          lVar15 = lVar15 + 0x18;
          pdVar6 = pdVar3;
        }
      }
    }
    else {
      uVar14 = param_3 >> 1;
      pdVar6 = param_1 + uVar14 * 3;
      lVar15 = param_3 - (param_3 >> 1);
      if (param_5 < (long)param_3) {
        FUN_10739c3b8();
        FUN_10739c3b8(pdVar6,param_2,lVar15,param_4,param_5);
        do {
          pdVar3 = param_2;
          lVar16 = lVar15;
          if (lVar15 == 0) {
            return;
          }
          while( true ) {
            if (lVar16 <= param_5 || (long)uVar14 <= param_5) {
              pdVar8 = param_4;
              pdVar5 = param_1;
              if ((long)uVar14 <= lVar16) {
                for (; pdVar5 != pdVar6; pdVar5 = pdVar5 + 3) {
                  dVar18 = pdVar5[1];
                  dVar17 = *pdVar5;
                  pdVar8[2] = pdVar5[2];
                  pdVar8[1] = dVar18;
                  *pdVar8 = dVar17;
                  pdVar8 = pdVar8 + 3;
                }
                while( true ) {
                  if (pdVar8 == param_4) {
                    return;
                  }
                  if (pdVar6 == pdVar3) break;
                  pdVar12 = pdVar6 + 2;
                  pdVar5 = param_4 + 2;
                  if (*pdVar5 <= *pdVar12) {
                    pdVar4 = param_4 + 3;
                    dVar17 = *param_4;
                    param_1[1] = param_4[1];
                    *param_1 = dVar17;
                  }
                  else {
                    dVar17 = *pdVar6;
                    param_1[1] = pdVar6[1];
                    *param_1 = dVar17;
                    pdVar4 = param_4;
                    pdVar6 = pdVar6 + 3;
                    pdVar5 = pdVar12;
                  }
                  param_1[2] = *pdVar5;
                  param_1 = param_1 + 3;
                  param_4 = pdVar4;
                }
                for (; pdVar8 != param_4; param_4 = param_4 + 3) {
                  dVar17 = *param_4;
                  param_1[1] = param_4[1];
                  *param_1 = dVar17;
                  param_1[2] = param_4[2];
                  param_1 = param_1 + 3;
                }
                return;
              }
              lVar15 = 0;
              while( true ) {
                pdVar8 = (double *)((long)pdVar6 + lVar15);
                pdVar5 = (double *)((long)param_4 + lVar15);
                if (pdVar8 == pdVar3) break;
                dVar18 = pdVar8[1];
                dVar17 = *pdVar8;
                pdVar5[2] = pdVar8[2];
                pdVar5[1] = dVar18;
                *pdVar5 = dVar17;
                lVar15 = lVar15 + 0x18;
              }
              pdVar3 = pdVar3 + -1;
              while( true ) {
                if (pdVar5 == param_4) {
                  return;
                }
                if (pdVar6 == param_1) break;
                pdVar10 = pdVar6 + -1;
                pdVar11 = pdVar6 + -3;
                pdVar8 = pdVar5 + -3;
                pdVar12 = pdVar5 + -1;
                pdVar4 = pdVar5 + -3;
                if (pdVar5[-1] < *pdVar10) {
                  pdVar8 = pdVar5;
                  pdVar6 = pdVar11;
                  pdVar12 = pdVar10;
                  pdVar4 = pdVar11;
                }
                dVar17 = *pdVar4;
                pdVar3[-1] = pdVar4[1];
                pdVar3[-2] = dVar17;
                *pdVar3 = *pdVar12;
                pdVar5 = pdVar8;
                pdVar3 = pdVar3 + -3;
              }
              for (; pdVar5 != param_4; pdVar5 = pdVar5 + -3) {
                dVar17 = pdVar5[-3];
                pdVar3[-1] = pdVar5[-2];
                pdVar3[-2] = dVar17;
                *pdVar3 = pdVar5[-1];
                pdVar3 = pdVar3 + -3;
              }
              return;
            }
            lVar13 = 0;
            lVar9 = -uVar14;
            while( true ) {
              if (lVar9 == 0) {
                return;
              }
              pdVar8 = (double *)((long)param_1 + lVar13);
              dVar17 = pdVar8[2];
              if (pdVar6[2] < dVar17) break;
              lVar13 = lVar13 + 0x18;
              lVar9 = lVar9 + 1;
            }
            pdVar5 = pdVar6;
            lVar7 = lVar16;
            if (-lVar9 < lVar16) {
              lVar15 = lVar16 / 2;
              lVar2 = lVar15 * 3;
              dVar18 = (pdVar6 + lVar2)[2];
              lVar16 = ((long)pdVar6 + (-lVar13 - (long)param_1)) / 0x18;
              while (lVar16 != 0) {
                func_0x00010739d018();
                pdVar5 = extraout_x8;
                lVar7 = extraout_x9;
                lVar9 = extraout_x10;
                lVar16 = extraout_x12;
                if (dVar17 <= dVar18) {
                  pdVar8 = extraout_x13;
                  lVar16 = extraout_x11;
                }
              }
              uVar14 = ((long)pdVar8 + (-lVar13 - (long)param_1)) / 0x18;
              pdVar6 = pdVar6 + lVar2;
            }
            else {
              if (lVar9 == -1) {
                param_1 = (double *)((long)param_1 + lVar13);
                dVar19 = param_1[1];
                dVar17 = *param_1;
                dVar18 = *pdVar6;
                param_1[1] = pdVar6[1];
                *param_1 = dVar18;
                pdVar6[1] = dVar19;
                *pdVar6 = dVar17;
                dVar17 = param_1[2];
                param_1[2] = pdVar6[2];
                pdVar6[2] = dVar17;
                return;
              }
              uVar14 = -lVar9 / 2;
              pdVar8 = (double *)((long)param_1 + lVar13 + uVar14 * 0x18);
              dVar18 = pdVar8[2];
              lVar15 = ((long)pdVar3 - (long)pdVar6) / 0x18;
              pdVar12 = pdVar6;
              while (pdVar6 = pdVar12, lVar15 != 0) {
                func_0x00010739d018();
                pdVar12 = extraout_x13_00;
                pdVar5 = extraout_x8_00;
                lVar7 = extraout_x9_00;
                lVar9 = extraout_x10_00;
                lVar15 = extraout_x11_00;
                if (dVar18 <= dVar17) {
                  pdVar12 = pdVar6;
                  lVar15 = extraout_x12_00;
                }
              }
              lVar15 = ((long)pdVar6 - (long)pdVar5) / 0x18;
            }
            param_2 = pdVar6;
            if ((pdVar8 != pdVar5) &&
               (pdVar4 = pdVar5, param_2 = pdVar8, pdVar12 = pdVar8, pdVar5 != pdVar6)) {
              while( true ) {
                pdVar10 = pdVar4;
                param_2 = pdVar12 + 3;
                dVar19 = pdVar12[1];
                dVar17 = *pdVar12;
                dVar18 = *pdVar5;
                pdVar12[1] = pdVar5[1];
                *pdVar12 = dVar18;
                pdVar5[1] = dVar19;
                *pdVar5 = dVar17;
                dVar17 = pdVar12[2];
                pdVar12[2] = pdVar5[2];
                pdVar5[2] = dVar17;
                pdVar5 = pdVar5 + 3;
                if (pdVar5 == pdVar6) break;
                pdVar4 = pdVar5;
                pdVar12 = param_2;
                if (param_2 != pdVar10) {
                  pdVar4 = pdVar10;
                }
              }
              pdVar12 = pdVar10;
              pdVar5 = param_2;
              if (param_2 != pdVar10) {
                do {
                  while( true ) {
                    pdVar4 = pdVar12;
                    dVar19 = pdVar5[1];
                    dVar17 = *pdVar5;
                    dVar18 = *pdVar10;
                    pdVar5[1] = pdVar10[1];
                    *pdVar5 = dVar18;
                    pdVar10[1] = dVar19;
                    *pdVar10 = dVar17;
                    dVar17 = pdVar5[2];
                    pdVar5[2] = pdVar10[2];
                    pdVar10[2] = dVar17;
                    pdVar5 = pdVar5 + 3;
                    pdVar10 = pdVar10 + 3;
                    if (pdVar10 == pdVar6) break;
                    pdVar12 = pdVar10;
                    if (pdVar5 != pdVar4) {
                      pdVar12 = pdVar4;
                    }
                  }
                  pdVar12 = pdVar4;
                  pdVar10 = pdVar4;
                } while (pdVar5 != pdVar4);
              }
            }
            lVar16 = lVar7 - lVar15;
            if ((long)((lVar7 - (uVar14 + lVar15)) - lVar9) <= (long)(uVar14 + lVar15)) break;
            uVar14 = -(uVar14 + lVar9);
            FUN_10739c86c();
            param_1 = param_2;
            if (lVar16 == 0) {
              return;
            }
          }
          FUN_10739c86c(param_2,pdVar6);
          param_1 = (double *)((long)param_1 + lVar13);
          pdVar6 = pdVar8;
        } while( true );
      }
      FUN_10739c640(param_1,pdVar6,uVar14);
      pdVar8 = param_4 + uVar14 * 3;
      FUN_10739c640(pdVar6,param_2,lVar15,pdVar8);
      pdVar6 = pdVar8;
      pdVar3 = param_4;
      while (pdVar3 != pdVar8) {
        if (pdVar6 == param_4 + param_3 * 3) {
          for (; pdVar3 != pdVar8; pdVar3 = pdVar3 + 3) {
            dVar17 = *pdVar3;
            param_1[1] = pdVar3[1];
            *param_1 = dVar17;
            param_1[2] = pdVar3[2];
            param_1 = param_1 + 3;
          }
          return;
        }
        pdVar12 = pdVar6 + 2;
        pdVar5 = pdVar3 + 2;
        if (*pdVar5 <= *pdVar12) {
          pdVar12 = pdVar3 + 3;
          dVar17 = *pdVar3;
          param_1[1] = pdVar3[1];
          *param_1 = dVar17;
        }
        else {
          dVar17 = *pdVar6;
          param_1[1] = pdVar6[1];
          *param_1 = dVar17;
          pdVar6 = pdVar6 + 3;
          pdVar5 = pdVar12;
          pdVar12 = pdVar3;
        }
        param_1[2] = *pdVar5;
        param_1 = param_1 + 3;
        pdVar3 = pdVar12;
      }
      for (; pdVar6 != param_4 + param_3 * 3; pdVar6 = pdVar6 + 3) {
        dVar17 = *pdVar6;
        param_1[1] = pdVar6[1];
        *param_1 = dVar17;
        param_1[2] = pdVar6[2];
        param_1 = param_1 + 3;
      }
    }
  }
  return;
}



/* Entry: 10739c604; end: 10739c61b;  */

void FUN_10739c604(long *param_1,long param_2)

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



/* Entry: 10739c61c; end: 10739c63f;  */

undefined8 FUN_10739c61c(undefined8 param_1)

{
  FUN_10739c604(param_1,0);
  return param_1;
}



/* Entry: 10739c640; end: 10739c86b;  */

void FUN_10739c640(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long lVar5;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_3 != 0) {
    if (param_3 == 2) {
      if ((double)param_1[2] <= (double)param_2[-1]) {
        func_0x00010739cf68();
        uVar9 = extraout_x8_00[1];
        uVar8 = *extraout_x8_00;
        uVar4 = extraout_x8_00[2];
      }
      else {
        uVar8 = param_2[-2];
        uVar4 = param_2[-3];
        param_4[2] = param_2[-1];
        param_4[1] = uVar8;
        *param_4 = uVar4;
        uVar9 = param_1[1];
        uVar8 = *param_1;
        uVar4 = param_1[2];
      }
      param_4[5] = uVar4;
      param_4[4] = uVar9;
      param_4[3] = uVar8;
    }
    else if (param_3 == 1) {
      uVar8 = param_1[1];
      uVar4 = *param_1;
      param_4[2] = param_1[2];
      param_4[1] = uVar8;
      *param_4 = uVar4;
    }
    else if ((long)param_3 < 9) {
      if (param_1 != param_2) {
        func_0x00010739cf68(0);
        lVar5 = extraout_x8;
        puVar6 = param_4;
        while (puVar1 = param_1 + 3, puVar1 != param_2) {
          puVar2 = puVar6 + 3;
          if ((double)puVar6[2] <= (double)param_1[5]) {
            uVar8 = param_1[4];
            uVar4 = *puVar1;
            puVar6[5] = param_1[5];
            puVar6[4] = uVar8;
            *puVar2 = uVar4;
          }
          else {
            puVar6[4] = puVar6[1];
            *puVar2 = *puVar6;
            puVar6[5] = puVar6[2];
            for (lVar7 = lVar5; puVar6 = param_4, lVar7 != 0; lVar7 = lVar7 + -0x18) {
              puVar6 = (undefined8 *)((long)param_4 + lVar7);
              if ((double)puVar6[-1] <= (double)param_1[5]) {
                puVar6 = (undefined8 *)((long)param_4 + lVar7);
                break;
              }
              uVar4 = *(undefined8 *)((long)param_4 + lVar7 + -0x18);
              puVar6[1] = *(undefined8 *)((long)param_4 + lVar7 + -0x10);
              *puVar6 = uVar4;
              *(undefined8 *)((long)param_4 + lVar7 + 0x10) = puVar6[-1];
            }
            uVar4 = *puVar1;
            puVar6[1] = param_1[4];
            *puVar6 = uVar4;
            puVar6[2] = param_1[5];
          }
          lVar5 = lVar5 + 0x18;
          puVar6 = puVar2;
          param_1 = puVar1;
        }
      }
    }
    else {
      uVar3 = param_3 >> 1;
      lVar5 = uVar3 * 2 + (param_3 >> 1);
      puVar1 = param_1 + lVar5;
      FUN_10739c3b8(param_1,puVar1,uVar3,param_4,uVar3);
      lVar7 = param_3 - (param_3 >> 1);
      FUN_10739c3b8(puVar1,param_2,lVar7,param_4 + lVar5,lVar7);
      puVar6 = puVar1;
      while (param_1 != puVar1) {
        if (puVar6 == param_2) {
          for (; param_1 != puVar1; param_1 = param_1 + 3) {
            uVar8 = param_1[1];
            uVar4 = *param_1;
            param_4[2] = param_1[2];
            param_4[1] = uVar8;
            *param_4 = uVar4;
            param_4 = param_4 + 3;
          }
          return;
        }
        if ((double)param_1[2] <= (double)puVar6[2]) {
          func_0x00010739cf68();
          param_1 = param_1 + 3;
          puVar6 = extraout_x8_01;
        }
        else {
          uVar8 = puVar6[1];
          uVar4 = *puVar6;
          param_4[2] = puVar6[2];
          param_4[1] = uVar8;
          *param_4 = uVar4;
          puVar6 = puVar6 + 3;
        }
        param_4 = param_4 + 3;
      }
      for (; puVar6 != param_2; puVar6 = puVar6 + 3) {
        uVar8 = puVar6[1];
        uVar4 = *puVar6;
        param_4[2] = puVar6[2];
        param_4[1] = uVar8;
        *param_4 = uVar4;
        param_4 = param_4 + 3;
      }
    }
  }
  return;
}



/* Entry: 10739c86c; end: 10739cc77;  */

void FUN_10739c86c(double *param_1,double *param_2,double *param_3,long param_4,long param_5,
                  double *param_6,long param_7)

{
  long lVar1;
  double *pdVar2;
  double *pdVar3;
  double *extraout_x8;
  double *extraout_x8_00;
  double *pdVar4;
  long extraout_x9;
  long extraout_x9_00;
  long lVar5;
  double *pdVar6;
  long lVar7;
  long extraout_x10;
  long extraout_x10_00;
  double *pdVar8;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x12;
  long extraout_x12_00;
  double *pdVar9;
  double *extraout_x13;
  double *extraout_x13_00;
  double *pdVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  do {
    pdVar2 = param_3;
    lVar12 = param_5;
    if (param_5 == 0) {
      return;
    }
    while( true ) {
      if (lVar12 <= param_7 || param_4 <= param_7) {
        pdVar6 = param_6;
        pdVar4 = param_1;
        if (param_4 <= lVar12) {
          for (; pdVar4 != param_2; pdVar4 = pdVar4 + 3) {
            dVar13 = pdVar4[1];
            dVar15 = *pdVar4;
            pdVar6[2] = pdVar4[2];
            pdVar6[1] = dVar13;
            *pdVar6 = dVar15;
            pdVar6 = pdVar6 + 3;
          }
          while( true ) {
            if (pdVar6 == param_6) {
              return;
            }
            if (param_2 == pdVar2) break;
            pdVar8 = param_2 + 2;
            pdVar4 = param_6 + 2;
            if (*pdVar4 <= *pdVar8) {
              pdVar3 = param_6 + 3;
              dVar15 = *param_6;
              param_1[1] = param_6[1];
              *param_1 = dVar15;
            }
            else {
              dVar15 = *param_2;
              param_1[1] = param_2[1];
              *param_1 = dVar15;
              pdVar3 = param_6;
              param_2 = param_2 + 3;
              pdVar4 = pdVar8;
            }
            param_1[2] = *pdVar4;
            param_1 = param_1 + 3;
            param_6 = pdVar3;
          }
          for (; pdVar6 != param_6; param_6 = param_6 + 3) {
            dVar15 = *param_6;
            param_1[1] = param_6[1];
            *param_1 = dVar15;
            param_1[2] = param_6[2];
            param_1 = param_1 + 3;
          }
          return;
        }
        lVar12 = 0;
        while( true ) {
          pdVar6 = (double *)((long)param_2 + lVar12);
          pdVar4 = (double *)((long)param_6 + lVar12);
          if (pdVar6 == pdVar2) break;
          dVar13 = pdVar6[1];
          dVar15 = *pdVar6;
          pdVar4[2] = pdVar6[2];
          pdVar4[1] = dVar13;
          *pdVar4 = dVar15;
          lVar12 = lVar12 + 0x18;
        }
        pdVar2 = pdVar2 + -1;
        while( true ) {
          if (pdVar4 == param_6) {
            return;
          }
          if (param_2 == param_1) break;
          pdVar9 = param_2 + -1;
          pdVar10 = param_2 + -3;
          pdVar6 = pdVar4 + -3;
          pdVar8 = pdVar4 + -1;
          pdVar3 = pdVar4 + -3;
          if (pdVar4[-1] < *pdVar9) {
            pdVar6 = pdVar4;
            param_2 = pdVar10;
            pdVar8 = pdVar9;
            pdVar3 = pdVar10;
          }
          dVar15 = *pdVar3;
          pdVar2[-1] = pdVar3[1];
          pdVar2[-2] = dVar15;
          *pdVar2 = *pdVar8;
          pdVar4 = pdVar6;
          pdVar2 = pdVar2 + -3;
        }
        for (; pdVar4 != param_6; pdVar4 = pdVar4 + -3) {
          dVar15 = pdVar4[-3];
          pdVar2[-1] = pdVar4[-2];
          pdVar2[-2] = dVar15;
          *pdVar2 = pdVar4[-1];
          pdVar2 = pdVar2 + -3;
        }
        return;
      }
      lVar11 = 0;
      lVar7 = -param_4;
      while( true ) {
        if (lVar7 == 0) {
          return;
        }
        pdVar6 = (double *)((long)param_1 + lVar11);
        dVar15 = pdVar6[2];
        if (param_2[2] < dVar15) break;
        lVar11 = lVar11 + 0x18;
        lVar7 = lVar7 + 1;
      }
      pdVar4 = param_2;
      lVar5 = lVar12;
      if (-lVar7 < lVar12) {
        param_5 = lVar12 / 2;
        lVar1 = param_5 * 3;
        dVar13 = (param_2 + lVar1)[2];
        lVar12 = ((long)param_2 + (-lVar11 - (long)param_1)) / 0x18;
        while (lVar12 != 0) {
          func_0x00010739d018();
          pdVar4 = extraout_x8;
          lVar5 = extraout_x9;
          lVar7 = extraout_x10;
          lVar12 = extraout_x12;
          if (dVar15 <= dVar13) {
            pdVar6 = extraout_x13;
            lVar12 = extraout_x11;
          }
        }
        param_4 = ((long)pdVar6 + (-lVar11 - (long)param_1)) / 0x18;
        param_2 = param_2 + lVar1;
      }
      else {
        if (lVar7 == -1) {
          param_1 = (double *)((long)param_1 + lVar11);
          dVar14 = param_1[1];
          dVar15 = *param_1;
          dVar13 = *param_2;
          param_1[1] = param_2[1];
          *param_1 = dVar13;
          param_2[1] = dVar14;
          *param_2 = dVar15;
          dVar15 = param_1[2];
          param_1[2] = param_2[2];
          param_2[2] = dVar15;
          return;
        }
        param_4 = -lVar7 / 2;
        pdVar6 = (double *)((long)param_1 + lVar11 + param_4 * 0x18);
        dVar13 = pdVar6[2];
        lVar12 = ((long)pdVar2 - (long)param_2) / 0x18;
        pdVar8 = param_2;
        while (param_2 = pdVar8, lVar12 != 0) {
          func_0x00010739d018();
          pdVar8 = extraout_x13_00;
          pdVar4 = extraout_x8_00;
          lVar5 = extraout_x9_00;
          lVar7 = extraout_x10_00;
          lVar12 = extraout_x11_00;
          if (dVar13 <= dVar15) {
            pdVar8 = param_2;
            lVar12 = extraout_x12_00;
          }
        }
        param_5 = ((long)param_2 - (long)pdVar4) / 0x18;
      }
      param_3 = param_2;
      if ((pdVar6 != pdVar4) &&
         (pdVar3 = pdVar4, param_3 = pdVar6, pdVar8 = pdVar6, pdVar4 != param_2)) {
        while( true ) {
          pdVar9 = pdVar3;
          param_3 = pdVar8 + 3;
          dVar14 = pdVar8[1];
          dVar15 = *pdVar8;
          dVar13 = *pdVar4;
          pdVar8[1] = pdVar4[1];
          *pdVar8 = dVar13;
          pdVar4[1] = dVar14;
          *pdVar4 = dVar15;
          dVar15 = pdVar8[2];
          pdVar8[2] = pdVar4[2];
          pdVar4[2] = dVar15;
          pdVar4 = pdVar4 + 3;
          if (pdVar4 == param_2) break;
          pdVar3 = pdVar4;
          pdVar8 = param_3;
          if (param_3 != pdVar9) {
            pdVar3 = pdVar9;
          }
        }
        pdVar8 = pdVar9;
        pdVar4 = param_3;
        if (param_3 != pdVar9) {
          do {
            while( true ) {
              pdVar3 = pdVar8;
              dVar14 = pdVar4[1];
              dVar15 = *pdVar4;
              dVar13 = *pdVar9;
              pdVar4[1] = pdVar9[1];
              *pdVar4 = dVar13;
              pdVar9[1] = dVar14;
              *pdVar9 = dVar15;
              dVar15 = pdVar4[2];
              pdVar4[2] = pdVar9[2];
              pdVar9[2] = dVar15;
              pdVar4 = pdVar4 + 3;
              pdVar9 = pdVar9 + 3;
              if (pdVar9 == param_2) break;
              pdVar8 = pdVar9;
              if (pdVar4 != pdVar3) {
                pdVar8 = pdVar3;
              }
            }
            pdVar8 = pdVar3;
            pdVar9 = pdVar3;
          } while (pdVar4 != pdVar3);
        }
      }
      lVar12 = lVar5 - param_5;
      if ((lVar5 - (param_4 + param_5)) - lVar7 <= param_4 + param_5) break;
      param_4 = -(param_4 + lVar7);
      FUN_10739c86c();
      param_1 = param_3;
      if (lVar12 == 0) {
        return;
      }
    }
    FUN_10739c86c(param_3,param_2);
    param_1 = (double *)((long)param_1 + lVar11);
    param_2 = pdVar6;
  } while( true );
}



/* Entry: 10739cc78; end: 10739cd2f;  */

long * FUN_10739cc78(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10739cd30; end: 10739cd43;  */

void FUN_10739cd30(void)

{
  func_0x00010739cd04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10739cd44; end: 10739cd87;  */

undefined8 FUN_10739cd44(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x48;
  __Znwm(0x48);
  FUN_10739ce84();
  return uVar1;
}



/* Entry: 10739cd88; end: 10739cdb3;  */

undefined8 * FUN_10739cd88(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_SUB_1109a9520;
  param_2[1] = uVar1;
  FUN_10739be8c(param_2 + 2,param_1 + 0x10);
  return param_2;
}



/* Entry: 10739cdb4; end: 10739ce3f;  */

void FUN_10739cdb4(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [24];
  char cStack_28;
  
  lVar1 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar1 + 0x70) & 1) == 0) {
    (**(code **)(**(long **)(lVar1 + 0x28) + 0x38))(auStack_40);
    if (cStack_28 == '\x01') {
      if (*(char *)(lVar1 + 0x78) == '\x01') {
        (**(code **)(**(long **)(lVar1 + 0x28) + 0x48))
                  (*(long **)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x74));
      }
      FUN_10739b2b0(param_1 + 0x10,auStack_40);
    }
    func_0x00010739cf7c();
  }
  return;
}



/* Entry: 10739ce40; end: 10739ce77;  */

long FUN_10739ce40(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109a9580);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10739ce78; end: 10739ce83;  */

undefined ** FUN_10739ce78(void)

{
  return &PTR_DAT_1109a9580;
}



/* Entry: 10739ce84; end: 10739ceb3;  */

undefined8 * FUN_10739ce84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_1 = &PTR_SUB_1109a9520;
  param_1[1] = uVar1;
  FUN_10739be8c(param_1 + 2,param_2 + 1);
  return param_1;
}



/* Entry: 10739ceb4; end: 10739d04b;  */

void FUN_10739ceb4(void)

{
  func_0x0001072750cc();
  FUN_10743fa44();
  return;
}



/* Entry: 10739d04c; end: 10739d16f;  */

long FUN_10739d04c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  FUN_10739d170(param_1);
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x10) = param_2[1];
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x20) = param_3[1];
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  uVar1 = *param_4;
  *(undefined8 *)(param_1 + 0x30) = param_4[1];
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *param_4 = 0;
  param_4[1] = 0;
  func_0x00010739dad4(param_1 + 0x38,param_5);
  *(undefined8 *)(param_1 + 0x58) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  FUN_10739d764(param_1 + 0x98);
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 0x138) = 0;
  func_0x00010726ed14(param_1 + 0x140);
  *(long *)(param_1 + 0x150) = param_1;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 300;
  return param_1;
}



/* Entry: 10739d170; end: 10739d1c7;  */

void FUN_10739d170(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x78;
  __Znwm();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xe] = 0;
  FUN_10739d9f0();
  *param_1 = puVar1;
  return;
}



/* Entry: 10739d1c8; end: 10739d21f;  */

long FUN_10739d1c8(long param_1)

{
  FUN_10739db70(param_1 + 0x140);
  FUN_10739d79c(param_1 + 0x128);
  __ZNSt3__15mutexD1Ev(param_1 + 0x58);
  func_0x00010739db34(param_1 + 0x38);
  func_0x00010725b6e0(param_1 + 0x28);
  func_0x00010726eedc(param_1 + 0x18);
  func_0x0001072aa234(param_1 + 8);
  FUN_10739da70(param_1,0);
  return param_1;
}



/* Entry: 10739d220; end: 10739d253;  */

void FUN_10739d220(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_28 = param_3[3];
  uStack_30 = param_3[2];
  uStack_20 = *(undefined1 *)(param_3 + 4);
  uStack_18 = param_1;
  FUN_10739d254(param_2,&uStack_40);
  return;
}



/* Entry: 10739d254; end: 10739d5a7;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010739d330 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10739d254(long param_1,double *param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  double dVar3;
  long lVar4;
  double dVar5;
  bool bVar6;
  undefined1 in_ZR;
  double *pdVar7;
  undefined8 *puVar8;
  double *pdVar9;
  undefined8 extraout_x8;
  long lVar10;
  int extraout_w10;
  long *plVar11;
  ulong uVar12;
  byte bVar13;
  ulong unaff_x23;
  bool bVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  long lVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  double dVar42;
  long lVar43;
  double dVar44;
  double dVar45;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  byte bStack_160;
  double *pdStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  pdVar7 = &dStack_130;
  lVar10 = param_1;
  func_0x00010739e824();
  plVar11 = *(long **)(lVar10 + 0x18);
  uStack_68 = extraout_x8;
  func_0x00010002b838(&dStack_130,PTR_DAT_1131ad008);
  (**(code **)(*plVar11 + 0x28))(plVar11,&dStack_130);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  if ((((uint)plVar11 ^ 0xffffffff) & 0x101) != 0) goto LAB_10739d52c;
  lVar39 = -(ulong)(param_2[2] == 0.0);
  lVar43 = -(ulong)(param_2[3] == 0.0);
  lVar10 = -(ulong)(*param_2 == 0.0);
  lVar4 = -(ulong)(param_2[1] == 0.0);
  auVar1[1] = ~(byte)((ulong)lVar10 >> 8);
  auVar1[0] = ~(byte)lVar10;
  auVar1[2] = ~(byte)((ulong)lVar10 >> 0x10);
  auVar1[3] = ~(byte)((ulong)lVar10 >> 0x18);
  auVar1[4] = ~(byte)lVar4;
  auVar1[5] = ~(byte)((ulong)lVar4 >> 8);
  auVar1[6] = ~(byte)((ulong)lVar4 >> 0x10);
  auVar1[7] = ~(byte)((ulong)lVar4 >> 0x18);
  auVar1[8] = ~(byte)lVar39;
  auVar1[9] = ~(byte)((ulong)lVar39 >> 8);
  auVar1[10] = ~(byte)((ulong)lVar39 >> 0x10);
  auVar1[0xb] = ~(byte)((ulong)lVar39 >> 0x18);
  auVar1[0xc] = ~(byte)lVar43;
  auVar1[0xd] = ~(byte)((ulong)lVar43 >> 8);
  auVar1[0xe] = ~(byte)((ulong)lVar43 >> 0x10);
  auVar1[0xf] = ~(byte)((ulong)lVar43 >> 0x18);
  uVar2 = NEON_umaxv(auVar1,4);
  if ((uVar2 & 1) == 0) goto LAB_10739d52c;
  __ZNSt3__15mutex4lockEv(param_1 + 0x58);
  dVar3 = ABS(*(double *)(param_1 + 0xd8) - param_2[5]);
  uVar15 = SUB81(dVar3,0);
  uVar18 = (undefined1)((ulong)dVar3 >> 8);
  uVar21 = (undefined1)((ulong)dVar3 >> 0x10);
  uVar24 = (undefined1)((ulong)dVar3 >> 0x18);
  uVar27 = (undefined1)((ulong)dVar3 >> 0x20);
  uVar30 = (undefined1)((ulong)dVar3 >> 0x28);
  uVar33 = (undefined1)((ulong)dVar3 >> 0x30);
  uVar36 = (undefined1)((ulong)dVar3 >> 0x38);
  uVar40 = 0x3feccccccccccccd;
  if (0.9 <= dVar3) {
LAB_10739d354:
    pdVar7 = (double *)(param_1 + 0x38);
    FUN_10739dbc4();
    lVar10 = (long)pdVar7 - *(long *)(param_1 + 0xa8);
    in_ZR = *(byte *)(param_1 + 0x98) == 1;
    if (((bool)in_ZR) && (in_ZR = lVar10 == 0x7d1, 2000 < lVar10)) {
      uVar12 = *(ulong *)(param_1 + 0xe0);
      bVar13 = *(byte *)(param_1 + 0xe8);
      if ((bVar13 & 1) != 0) {
        *(undefined1 *)(param_1 + 0xe8) = 0;
      }
      unaff_x23 = uVar12 >> 8;
      *(undefined1 *)(param_1 + 0x98) = 0;
LAB_10739d3c8:
      in_ZR = *(char *)(param_1 + 0x120) == '\x01';
      if ((bool)in_ZR) {
        bVar14 = false;
        func_0x00010739e874();
      }
      else {
        in_ZR = lVar10 == *(long *)(param_1 + 0xa0);
        if ((lVar10 < *(long *)(param_1 + 0xa0)) || ((*(byte *)(param_1 + 0x138) & 1) == 0)) {
          func_0x00010739e874();
          goto LAB_10739d418;
        }
        dVar5 = param_2[1];
        dVar3 = *param_2;
        dVar42 = param_2[2];
        dVar45 = param_2[5];
        dVar44 = param_2[4];
        *(double *)(param_1 + 200) = param_2[3];
        *(double *)(param_1 + 0xc0) = dVar42;
        *(double *)(param_1 + 0xd8) = dVar45;
        *(double *)(param_1 + 0xd0) = dVar44;
        *(double *)(param_1 + 0xb8) = dVar5;
        *(double *)(param_1 + 0xb0) = dVar3;
        *(double **)(param_1 + 0xa8) = pdVar7;
        bVar14 = true;
        *(undefined1 *)(param_1 + 0x98) = 1;
      }
    }
    else {
      if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
        uVar12 = 0;
        bVar13 = 0;
        goto LAB_10739d3c8;
      }
      bVar13 = 0;
      uVar12 = 0;
      bVar14 = false;
      dVar44 = param_2[3];
      dVar42 = param_2[2];
      dVar5 = param_2[5];
      dVar3 = param_2[4];
      dVar45 = *param_2;
      *(double *)(param_1 + 0xf8) = param_2[1];
      *(double *)(param_1 + 0xf0) = dVar45;
      *(double *)(param_1 + 0x108) = dVar44;
      *(double *)(param_1 + 0x100) = dVar42;
      *(double *)(param_1 + 0x118) = dVar5;
      *(double *)(param_1 + 0x110) = dVar3;
      if ((*(byte *)(param_1 + 0x120) & 1) != 0) goto LAB_10739d424;
LAB_10739d418:
      bVar14 = false;
      *(undefined1 *)(param_1 + 0x120) = 1;
    }
  }
  else {
    func_0x00010739d7bc(param_1 + 0xb0);
    pdVar7 = param_2;
    uVar16 = uVar15;
    uVar19 = uVar18;
    uVar22 = uVar21;
    uVar25 = uVar24;
    uVar28 = uVar27;
    uVar31 = uVar30;
    uVar34 = uVar33;
    uVar37 = uVar36;
    uVar41 = uVar40;
    func_0x00010739d7bc();
    func_0x0001072e941c(CONCAT17(uVar38,CONCAT16(uVar35,CONCAT15(uVar32,CONCAT14(uVar29,CONCAT13(
                                                  uVar26,CONCAT12(uVar23,CONCAT11(uVar20,uVar17)))))
                                                )),uVar40,
                        CONCAT17(uVar37,CONCAT16(uVar34,CONCAT15(uVar31,CONCAT14(uVar28,CONCAT13(
                                                  uVar25,CONCAT12(uVar22,CONCAT11(uVar19,uVar16)))))
                                                )),uVar41);
    uVar38 = uVar36;
    uVar35 = uVar33;
    uVar32 = uVar30;
    uVar29 = uVar27;
    uVar26 = uVar24;
    uVar23 = uVar21;
    uVar20 = uVar18;
    uVar17 = uVar15;
    bVar6 = false;
    in_ZR = false;
    bVar14 = NAN((double)CONCAT17(uVar38,CONCAT16(uVar35,CONCAT15(uVar32,CONCAT14(uVar29,CONCAT13(
                                                  uVar26,CONCAT12(uVar23,CONCAT11(uVar20,uVar17)))))
                                                 )));
    if (!bVar14) {
      bVar6 = (double)CONCAT17(uVar38,CONCAT16(uVar35,CONCAT15(uVar32,CONCAT14(uVar29,CONCAT13(
                                                  uVar26,CONCAT12(uVar23,CONCAT11(uVar20,uVar17)))))
                                              )) < 1000.0;
      in_ZR = (double)CONCAT17(uVar38,CONCAT16(uVar35,CONCAT15(uVar32,CONCAT14(uVar29,CONCAT13(
                                                  uVar26,CONCAT12(uVar23,CONCAT11(uVar20,uVar17)))))
                                              )) == 1000.0;
    }
    if (bVar6 == bVar14) goto LAB_10739d354;
    bVar13 = 0;
    uVar12 = 0;
    bVar14 = false;
  }
LAB_10739d424:
  func_0x00010739e7e8();
  if ((bVar13 & 1) != 0) {
    pdVar7 = *(double **)(param_1 + 8);
    (**(code **)((long)*pdVar7 + 0x18))(pdVar7,uVar12 & 0xff | unaff_x23 << 8);
  }
  if (bVar14) {
    plVar11 = *(long **)(param_1 + 8);
    dStack_128 = param_2[1];
    dStack_130 = *param_2;
    dStack_118 = param_2[3];
    dStack_120 = param_2[2];
    dStack_108 = param_2[5];
    dStack_110 = param_2[4];
    dVar3 = *(double *)(param_1 + 0x140);
    lVar10 = *(long *)(param_1 + 0x148);
    if (lVar10 != 0) {
      do {
        func_0x00010739e7d8();
      } while (extraout_w10 != 0);
    }
    uVar40 = *(undefined8 *)(param_1 + 0x150);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    dStack_f8 = dVar3;
    lStack_f0 = lVar10;
    uStack_e8 = uVar40;
    func_0x00010725b1d4(&uStack_98);
    func_0x00010725b1d4(&uStack_a8);
    dStack_d0 = dStack_128;
    dStack_d8 = dStack_130;
    dStack_c0 = dStack_118;
    dStack_c8 = dStack_120;
    dStack_b0 = dStack_108;
    dStack_b8 = dStack_110;
    puStack_70 = (undefined8 *)0x0;
    puVar8 = (undefined8 *)0x58;
    lStack_e0 = param_1;
    __Znwm();
    *puVar8 = &PTR_FUN_1109a95a0;
    puVar8[1] = dVar3;
    dStack_f8 = 0.0;
    lStack_f0 = 0;
    puVar8[2] = lVar10;
    puVar8[3] = uVar40;
    puVar8[10] = dStack_b0;
    puVar8[7] = dStack_c8;
    puVar8[6] = dStack_d0;
    puVar8[9] = dStack_b8;
    puVar8[8] = dStack_c0;
    puVar8[5] = dStack_d8;
    puVar8[4] = lStack_e0;
    puStack_70 = puVar8;
    (**(code **)(*plVar11 + 0x10))(plVar11,param_2,auStack_88);
    *(long **)(param_1 + 0xe0) = plVar11;
    *(undefined1 *)(param_1 + 0xe8) = 1;
    FUN_10739e228(auStack_88);
    pdVar7 = &dStack_f8;
    func_0x00010725b1d4();
  }
LAB_10739d52c:
  func_0x00010739e7c4(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10739e228(auStack_88);
  func_0x00010725b1d4(&dStack_f8);
  pdVar9 = pdVar7;
  __Unwind_Resume();
  pcStack_138 = FUN_10739d5a8;
  dStack_190 = (double)((ulong)dStack_190 & 0xffffffffffffff00);
  bStack_160 = 0;
  pdStack_150 = pdVar7;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  __ZNSt3__15mutex4lockEv(pdVar9 + 0xb);
  if (((((ulong)pdVar9[0x13] & 1) == 0) && (*(char *)(pdVar9 + 0x24) == '\x01')) &&
     (*(char *)(pdVar9 + 0x27) == '\x01')) {
    pdVar7 = pdVar9 + 7;
    FUN_10739dbc4();
    if ((long)pdVar9[0x14] < (long)pdVar7 - (long)pdVar9[0x15]) {
      dStack_188 = pdVar9[0x1f];
      dStack_190 = pdVar9[0x1e];
      dStack_178 = pdVar9[0x21];
      dStack_180 = pdVar9[0x20];
      dStack_168 = pdVar9[0x23];
      dStack_170 = pdVar9[0x22];
      bStack_160 = *(byte *)(pdVar9 + 0x24);
      if (*(char *)(pdVar9 + 0x24) == '\x01') {
        *(undefined1 *)(pdVar9 + 0x24) = 0;
      }
    }
  }
  func_0x00010739e7e8();
  if ((bStack_160 & 1) != 0) {
    FUN_10739d254(pdVar9,&dStack_190);
  }
  return;
}



/* Entry: 10739d5a8; end: 10739d663;  */

void FUN_10739d5a8(long param_1)

{
  long lVar1;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte bStack_30;
  
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  bStack_30 = 0;
  __ZNSt3__15mutex4lockEv(param_1 + 0x58);
  if ((((*(byte *)(param_1 + 0x98) & 1) == 0) && (*(char *)(param_1 + 0x120) == '\x01')) &&
     (*(char *)(param_1 + 0x138) == '\x01')) {
    lVar1 = param_1 + 0x38;
    FUN_10739dbc4();
    if (*(long *)(param_1 + 0xa0) < lVar1 - *(long *)(param_1 + 0xa8)) {
      uStack_58 = *(undefined8 *)(param_1 + 0xf8);
      uStack_60 = *(ulong *)(param_1 + 0xf0);
      uStack_48 = *(undefined8 *)(param_1 + 0x108);
      uStack_50 = *(undefined8 *)(param_1 + 0x100);
      uStack_38 = *(undefined8 *)(param_1 + 0x118);
      uStack_40 = *(undefined8 *)(param_1 + 0x110);
      bStack_30 = *(byte *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x120) == '\x01') {
        *(undefined1 *)(param_1 + 0x120) = 0;
      }
    }
  }
  func_0x00010739e7e8();
  if ((bStack_30 & 1) != 0) {
    FUN_10739d254(param_1,&uStack_60);
  }
  return;
}



/* Entry: 10739d664; end: 10739d687;  */

void FUN_10739d664(undefined8 param_1,uint param_2)

{
  char *pcVar1;
  
  if (param_2 < 0xe) {
    pcVar1 = (&PTR_s_unknown_1109a9730)[param_2];
  }
  else {
    pcVar1 = "";
  }
  func_0x00010002b82c(param_1,pcVar1);
  func_0x000107c613d0(pcVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 10739d688; end: 10739d703;  */

void FUN_10739d688(void)

{
  func_0x00010739e85c();
  func_0x000104c2f714();
  return;
}



/* Entry: 10739d704; end: 10739d763;  */

undefined8 FUN_10739d704(void)

{
  int iVar1;
  
  if ((bRam0000000113822198 & 1) == 0) {
    iVar1 = 0x13822198;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ppuRam0000000113822178 = &PTR_FUN_1109a96b0;
      uRam0000000113822190 = 0x113822178;
      ___cxa_guard_release(0x113822198);
    }
  }
  return 0x113822178;
}



/* Entry: 10739d764; end: 10739d79b;  */

void FUN_10739d764(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xc066800000000000;
  *(undefined8 *)(param_1 + 0x18) = 0xc056800000000000;
  *(undefined8 *)(param_1 + 0x30) = 0x4066800000000000;
  *(undefined8 *)(param_1 + 0x28) = 0x4056800000000000;
  param_1[0x38] = 0;
  param_1[0x48] = 0;
  param_1[0x50] = 0;
  param_1[0x58] = 0;
  param_1[0x88] = 0;
  return;
}



/* Entry: 10739d79c; end: 10739d7ff;  */

void FUN_10739d79c(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x0001072ca8d0();
  }
  return;
}



/* Entry: 10739d800; end: 10739d9ef;  */

void FUN_10739d800(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010739e7f8();
    }
    func_0x0001072d81e8();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 10739d9f0; end: 10739da4b;  */

void FUN_10739d9f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d0f1b8;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = &PTR_DAT_110d0f880;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = &PTR_DAT_110d0f258;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = &DAT_11383d918;
  param_1[0xe] = 0;
  return;
}



/* Entry: 10739da4c; end: 10739da6f;  */

undefined8 FUN_10739da4c(undefined8 param_1)

{
  FUN_10739da70(param_1,0);
  return param_1;
}



/* Entry: 10739da70; end: 10739da87;  */

void FUN_10739da70(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10739daa4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10739da88; end: 10739daa3;  */

void FUN_10739da88(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10739daa4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10739daa4; end: 10739db6f;  */

long FUN_10739daa4(long param_1)

{
  func_0x00010b589ec0(param_1 + 0x50);
  func_0x00010b58ca80(param_1 + 0x20);
  func_0x00010b58abc0();
  return param_1;
}



/* Entry: 10739db70; end: 10739db97;  */

long FUN_10739db70(long param_1)

{
  FUN_10739db98();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10739db98; end: 10739dbc3;  */

void FUN_10739db98(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107250860();
  }
  *param_1 = 0;
  param_1[1] = 0;
  func_0x0001072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10739dbc4; end: 10739dbe3;  */

long * FUN_10739dbc4(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010739dbd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48();
  *plVar1 = (long)&PTR_FUN_1109a95a0;
  func_0x00010725b1d4(plVar1 + 1);
  return plVar1;
}



/* Entry: 10739dbe4; end: 10739dc0f;  */

undefined8 * FUN_10739dbe4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a95a0;
  func_0x00010725b1d4(param_1 + 1);
  return param_1;
}



/* Entry: 10739dc10; end: 10739dc23;  */

void FUN_10739dc10(void)

{
  FUN_10739dbe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10739dc24; end: 10739dc4b;  */

void FUN_10739dc24(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1109a95a0;
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *puVar2;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x00010739e7d8();
    } while (extraout_w10 != 0);
  }
  puVar1[3] = puVar2[2];
  uVar5 = puVar2[4];
  uVar4 = puVar2[3];
  uVar7 = puVar2[6];
  uVar6 = puVar2[5];
  uVar9 = puVar2[8];
  uVar8 = puVar2[7];
  puVar1[10] = puVar2[9];
  puVar1[7] = uVar7;
  puVar1[6] = uVar6;
  puVar1[9] = uVar9;
  puVar1[8] = uVar8;
  puVar1[5] = uVar5;
  puVar1[4] = uVar4;
  return;
}



/* Entry: 10739dc4c; end: 10739dc6f;  */

void FUN_10739dc4c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109a95a0;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010739e7d8();
    } while (extraout_w10 != 0);
  }
  param_2[3] = puVar1[2];
  uVar4 = puVar1[4];
  uVar3 = puVar1[3];
  uVar6 = puVar1[6];
  uVar5 = puVar1[5];
  uVar8 = puVar1[8];
  uVar7 = puVar1[7];
  param_2[10] = puVar1[9];
  param_2[7] = uVar6;
  param_2[6] = uVar5;
  param_2[9] = uVar8;
  param_2[8] = uVar7;
  param_2[5] = uVar4;
  param_2[4] = uVar3;
  return;
}



/* Entry: 10739dc70; end: 10739e197;  */

void FUN_10739dc70(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined1 in_ZR;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 extraout_x8;
  undefined **ppuVar9;
  int extraout_w10;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [24];
  long *plStack_138;
  long lStack_130;
  byte bStack_128;
  undefined **ppuStack_120;
  ulong uStack_118;
  ulong uStack_110;
  long lStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong auStack_e8 [7];
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  undefined8 uStack_88;
  
  lVar5 = param_1;
  func_0x00010739e824();
  uStack_88 = extraout_x8;
  func_0x00010726fc00(&ppuStack_120,lVar5 + 8);
  if (ppuStack_120 == (undefined **)0x0) {
LAB_10739dcf4:
    func_0x00010739e7f0();
    ppuStack_160 = (undefined **)0x0;
    uStack_158 = 0;
    ppuStack_120 = (undefined **)0x0;
    uStack_118 = 0;
  }
  else {
    func_0x00010726fc3c();
    uStack_158 = uStack_118;
    ppuStack_160 = ppuStack_120;
    in_ZR = *ppuStack_120 == (undefined *)0xffffffffffffffff;
    if ((bool)in_ZR) {
      func_0x00010726fc88();
      goto LAB_10739dcf4;
    }
    ppuStack_120 = (undefined **)0x0;
    uStack_118 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    func_0x0001072508cc(&uStack_a8);
  }
  func_0x00010739e7f0();
  func_0x00010726fc00(&ppuStack_120,param_1 + 8);
  if (ppuStack_120 == (undefined **)0x0) {
    func_0x00010739e7f0();
  }
  else {
    puVar10 = *ppuStack_120;
    func_0x00010739e7f0();
    in_ZR = puVar10 == (undefined *)0xffffffffffffffff;
    if (!(bool)in_ZR) {
      plVar12 = *(long **)(param_1 + 0x20);
      iVar2 = *(int *)(*plVar12 + 0x10);
      ppuVar1 = &PTR_PTR_1133a2bb0;
      if (*(undefined ***)(param_2 + 0x18) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0x18);
      }
      func_0x00010b589e88(*plVar12,ppuVar1);
      ppuVar1 = &PTR_PTR_1133a3898;
      if (*(undefined ***)(param_2 + 0x20) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0x20);
      }
      func_0x00010b58ccd0(*plVar12 + 0x20,ppuVar1);
      ppuVar1 = &PTR_PTR_1133a2bf0;
      if (*(undefined ***)(param_2 + 0x30) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0x30);
      }
      func_0x00010b58a170(*plVar12 + 0x50,ppuVar1);
      FUN_10739d664(&plStack_138,*(undefined4 *)(*plVar12 + 0x10));
      FUN_10739d664(auStack_150,iVar2);
      iVar3 = *(int *)(*plVar12 + 0x10);
      lVar11 = plVar12[5];
      func_0x0001072625b4(&ppuStack_120,&plStack_138);
      func_0x0001072625b4(auStack_e8,auStack_150);
      lStack_90 = 0;
      lVar5 = 0x80;
      uStack_b0 = iVar2 != iVar3;
      __Znwm();
      func_0x00010739e814();
      func_0x000104c318bc();
      func_0x000104c318bc(lVar5 + 0x40,auStack_e8);
      *(undefined1 *)(lVar5 + 0x78) = uStack_b0;
      lStack_90 = lVar5;
      func_0x000107292e94(lVar11,&uStack_a8);
      func_0x000107283e00(&uStack_a8);
      FUN_10739d688(&ppuStack_120);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_138);
      plStack_138 = (long *)((ulong)plStack_138 & 0xffffffffffffff00);
      bStack_128 = 0;
      if ((char)plVar12[0x27] == '\x01') {
        plStack_138 = (long *)plVar12[0x25];
        lStack_130 = plVar12[0x26];
        if (lStack_130 != 0) {
          do {
            func_0x00010739e7d8();
          } while (extraout_w10 != 0);
        }
        bStack_128 = 1;
        uVar20 = *(undefined8 *)(param_1 + 0x28);
        uVar19 = *(undefined8 *)(param_1 + 0x30);
        uVar18 = *(undefined8 *)(param_1 + 0x38);
        uVar16 = *(undefined8 *)(param_1 + 0x40);
        uVar17 = *(undefined8 *)(param_1 + 0x50);
        ppuStack_120 = &PTR_DAT_1109edcd0;
        uStack_118 = 0;
        lStack_108 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        auStack_e8[0] = 0;
        uStack_f0 = 0;
        uStack_110 = 1;
        lVar11 = 0;
        func_0x00010739d880();
        lVar5 = lVar11;
        lStack_108 = lVar11;
        func_0x00010739d800();
        *(undefined8 *)(lVar5 + 0x10) = uVar20;
        lVar5 = lVar11;
        func_0x00010739d800();
        *(undefined8 *)(lVar5 + 0x18) = uVar19;
        lVar5 = lVar11;
        func_0x00010739d840();
        *(undefined8 *)(lVar5 + 0x10) = uVar18;
        lVar5 = lVar11;
        func_0x00010739d840();
        *(undefined8 *)(lVar5 + 0x18) = uVar16;
        *(undefined8 *)(lVar11 + 0x28) = uVar17;
        uVar8 = *(uint *)(param_2 + 0x10);
        if ((uVar8 & 1) != 0) {
          lVar5 = *(long *)(param_2 + 0x18);
          uStack_110 = uStack_110 | 2;
          if (uStack_100 == 0) {
            uVar6 = uStack_118;
            if ((uStack_118 & 1) != 0) {
              func_0x00010739e7f8();
            }
            func_0x00010739d8c8();
            uStack_100 = uVar6;
          }
          *(undefined4 *)(uStack_100 + 0x10) = *(undefined4 *)(lVar5 + 0x14);
          *(undefined4 *)(uStack_100 + 0x14) = *(undefined4 *)(lVar5 + 0x10);
          uVar8 = *(uint *)(param_2 + 0x10);
        }
        if ((uVar8 >> 2 & 1) != 0) {
          lVar5 = *(long *)(param_2 + 0x28);
          uStack_110 = uStack_110 | 4;
          if (uStack_f8 == 0) {
            uVar6 = uStack_118;
            if ((uStack_118 & 1) != 0) {
              func_0x00010739e7f8();
            }
            func_0x00010739d908();
            uStack_f8 = uVar6;
          }
          uVar6 = uStack_f8;
          func_0x00010739e868(*(undefined8 *)(lVar5 + 0x10));
          *(undefined4 *)(uVar6 + 0x18) = *(undefined4 *)(lVar5 + 0x18);
          uVar8 = *(uint *)(param_2 + 0x10);
        }
        if ((uVar8 >> 1 & 1) != 0) {
          uVar16 = *(undefined8 *)(param_2 + 0x20);
          uStack_110 = uStack_110 | 8;
          if (uStack_f0 == 0) {
            uVar6 = uStack_118;
            if ((uStack_118 & 1) != 0) {
              func_0x00010739e7f8();
            }
            func_0x0001072f13fc();
            uStack_f0 = uVar6;
          }
          func_0x0001072fdd8c(uVar16);
          uVar8 = *(uint *)(param_2 + 0x10);
        }
        if ((uVar8 >> 3 & 1) != 0) {
          lVar5 = *(long *)(param_2 + 0x30);
          uStack_110 = uStack_110 | 0x10;
          if (auStack_e8[0] == 0) {
            uVar6 = uStack_118;
            if ((uStack_118 & 1) != 0) {
              func_0x00010739e7f8();
            }
            func_0x00010739d94c();
            auStack_e8[0] = uVar6;
          }
          uVar6 = auStack_e8[0];
          func_0x00010739e868(*(undefined8 *)(lVar5 + 0x18));
          ppuVar9 = *(undefined ***)(lVar5 + 0x20);
          ppuVar1 = &PTR_PTR_11338cea0;
          if (ppuVar9 != (undefined **)0x0) {
            ppuVar1 = ppuVar9;
          }
          func_0x0001072fdd14(&uStack_a8,ppuVar1);
          uVar7 = *(ulong *)(uVar6 + 8);
          if ((uVar7 & 1) != 0) {
            uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
          }
          func_0x0001005f70e4(uVar6 + 0x18,&uStack_a8,uVar7);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_a8);
        }
        if ((bStack_128 & 1) == 0) goto LAB_10739e104;
        (**(code **)(*plStack_138 + 0x10))(plStack_138,&ppuStack_120);
        func_0x000107942ad4(&ppuStack_120);
      }
      __ZNSt3__15mutex4lockEv(plVar12 + 0xb);
      if (0 < *(long *)(param_2 + 0x40)) {
        plVar12[0x14] = *(long *)(param_2 + 0x40);
      }
      in_ZR = (char)plVar12[0x1d] == '\x01';
      if ((bool)in_ZR) {
        *(undefined1 *)(plVar12 + 0x1d) = 0;
      }
      lVar11 = *(long *)(param_1 + 0x30);
      lVar5 = *(long *)(param_1 + 0x28);
      lVar13 = *(long *)(param_1 + 0x38);
      lVar15 = *(long *)(param_1 + 0x50);
      lVar14 = *(long *)(param_1 + 0x48);
      plVar12[0x19] = *(long *)(param_1 + 0x40);
      plVar12[0x18] = lVar13;
      plVar12[0x1b] = lVar15;
      plVar12[0x1a] = lVar14;
      plVar12[0x17] = lVar11;
      plVar12[0x16] = lVar5;
      *(undefined1 *)(plVar12 + 0x13) = 0;
      __ZNSt3__15mutex6unlockEv(plVar12 + 0xb);
      FUN_10739d79c(&plStack_138);
    }
  }
  func_0x000107270b00(&ppuStack_160);
  func_0x00010739e7c4(uStack_88);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10739e104:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10739e10c);
  (*pcVar4)();
}



/* Entry: 10739e198; end: 10739e1c3;  */

void FUN_10739e198(undefined8 param_1,undefined8 param_2)

{
  func_0x00010739e848(param_2,param_1,&PTR_DAT_1109a9610);
  func_0x00010739e804();
  return;
}



/* Entry: 10739e1c4; end: 10739e227;  */

undefined ** FUN_10739e1c4(void)

{
  return &PTR_DAT_1109a9610;
}



/* Entry: 10739e228; end: 10739e287;  */

long FUN_10739e228(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x00010739e850(uVar1);
  return param_1;
}



/* Entry: 10739e288; end: 10739e29b;  */

void FUN_10739e288(void)

{
  func_0x00010739e264();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10739e29c; end: 10739e2c3;  */

long FUN_10739e29c(long param_1)

{
  long lVar1;
  
  lVar1 = 0x80;
  __Znwm();
  func_0x00010739e814();
  func_0x000104c2fe00();
  func_0x000104c2fe00(lVar1 + 0x40,param_1 + 0x40);
  *(undefined1 *)(lVar1 + 0x78) = *(undefined1 *)(param_1 + 0x78);
  return lVar1;
}



/* Entry: 10739e2c4; end: 10739e2e7;  */

long FUN_10739e2c4(long param_1,long param_2)

{
  func_0x00010739e814();
  func_0x000104c2fe00();
  func_0x000104c2fe00(param_2 + 0x40,param_1 + 0x40);
  *(undefined1 *)(param_2 + 0x78) = *(undefined1 *)(param_1 + 0x78);
  return param_2;
}



/* Entry: 10739e2e8; end: 10739e647;  */

void FUN_10739e2e8(long param_1,long *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [16];
  undefined1 uStack_1f8;
  undefined1 auStack_1d0 [56];
  undefined1 auStack_198 [56];
  undefined1 auStack_160 [112];
  undefined1 auStack_f0 [168];
  undefined8 uStack_48;
  
  func_0x00010739e824();
  uVar1 = *(char *)(param_1 + 0x78) == '\x01';
  uStack_48 = extraout_x8;
  if (!(bool)uVar1) goto LAB_10739e490;
  if ((bRam00000001136ca350 & 1) == 0) goto LAB_10739e4b8;
  while( true ) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_260,0x1136ca360);
    func_0x0001072625b4(auStack_1d0,auStack_260);
    func_0x00010739e6bc(auStack_198,auStack_1d0,param_1 + 0x40);
    if ((bRam00000001136ca358 & 1) == 0) {
      iVar2 = 0x136ca358;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x00010002b838(auStack_220,&UNK_10f40b483);
        func_0x0001004c3cd0(0x1136ca378,&UNK_10f40b463,auStack_220);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_220);
        ___cxa_guard_release(0x1136ca358);
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_278,0x1136ca378);
    func_0x0001072625b4(auStack_208,auStack_278);
    func_0x00010739e6bc(auStack_f0,auStack_208,param_1 + 8);
    func_0x0001072965a0(auStack_248,auStack_198,2);
    func_0x00010786975c(auStack_238,auStack_248);
    func_0x00010726b264(auStack_248);
    lVar3 = 0xa8;
    do {
      func_0x00010729651c(auStack_198 + lVar3);
      lVar3 = lVar3 + -0xa8;
      uVar1 = lVar3 == -0xa8;
    } while (!(bool)uVar1);
    func_0x000104c2f714(auStack_208);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_278);
    func_0x000104c2f714(auStack_1d0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_260);
    (**(code **)(*param_2 + 0xc0))(param_2,auStack_238);
    func_0x00010002b838(auStack_1d0,&UNK_10f40b445);
    auStack_208[0] = 0;
    uStack_1f8 = 0;
    func_0x000104c2fe00(auStack_198,param_1 + 0x40);
    func_0x000104c2fe00(auStack_160,param_1 + 8);
    func_0x000107747904(auStack_220,auStack_198);
    (**(code **)(*param_2 + 0x110))(param_2,auStack_1d0,auStack_208,auStack_220);
    func_0x00010726b264(auStack_220);
    func_0x00010739e6ec(auStack_198);
    func_0x000107279298(auStack_208);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1d0);
    func_0x00010726b264(auStack_238);
    unaff_x19 = param_2;
    unaff_x20 = param_1;
LAB_10739e490:
    param_1 = unaff_x20;
    param_2 = unaff_x19;
    func_0x00010739e7c4(uStack_48);
    if ((bool)uVar1) break;
    ___stack_chk_fail();
LAB_10739e4b8:
    iVar2 = 0x136ca350;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010002b838(auStack_208,&UNK_10f40b468);
      func_0x0001004c3cd0(0x1136ca360,&UNK_10f40b463,auStack_208);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_208);
      ___cxa_guard_release(0x1136ca350);
    }
  }
  return;
}



/* Entry: 10739e648; end: 10739e673;  */

void FUN_10739e648(undefined8 param_1,undefined8 param_2)

{
  func_0x00010739e848(param_2,param_1,&PTR_DAT_1109a9690);
  func_0x00010739e804();
  return;
}



/* Entry: 10739e674; end: 10739e67f;  */

undefined ** FUN_10739e674(void)

{
  return &PTR_DAT_1109a9690;
}



/* Entry: 10739e680; end: 10739e70f;  */

long FUN_10739e680(long param_1,long param_2)

{
  func_0x00010739e814();
  func_0x000104c2fe00();
  func_0x000104c2fe00(param_1 + 0x40,param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x70);
  return param_1;
}



/* Entry: 10739e710; end: 10739e717;  */

void FUN_10739e710(void)

{
  return;
}



/* Entry: 10739e718; end: 10739e73b;  */

void FUN_10739e718(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_1109a96b0;
  return;
}



/* Entry: 10739e73c; end: 10739e75b;  */

void FUN_10739e73c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109a96b0;
  return;
}



/* Entry: 10739e75c; end: 10739e777;  */

long FUN_10739e75c(long param_1)

{
  __ZNSt3__16chrono12system_clock3nowEv();
  return param_1 / 1000;
}



/* Entry: 10739e778; end: 10739e7a3;  */

void FUN_10739e778(undefined8 param_1,undefined8 param_2)

{
  func_0x00010739e848(param_2,param_1,&PTR_DAT_1109a9720);
  func_0x00010739e804();
  return;
}



/* Entry: 10739e7a4; end: 10739e893;  */

undefined ** FUN_10739e7a4(void)

{
  return &PTR_DAT_1109a9720;
}



/* Entry: 10739e894; end: 10739e9a3;  */

long FUN_10739e894(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_60;
  undefined8 uStack_58;
  
  uStack_58 = param_5;
  FUN_10739ea3c(&lStack_60,&uStack_58,param_11);
  FUN_10739e9a4(param_1,param_2,param_3,param_4,&lStack_60,param_6);
  lVar1 = lStack_60;
  lStack_60 = 0;
  if (lVar1 != 0) {
    func_0x00010739f298();
  }
  FUN_10739eaa4(param_1 + 8,param_7,param_9,param_10);
  uVar2 = *param_8;
  *(undefined8 *)(param_1 + 0x18) = param_8[1];
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *param_8 = 0;
  param_8[1] = 0;
  func_0x00010726ed14(param_1 + 0x20);
  *(long *)(param_1 + 0x30) = param_1;
  return param_1;
}



/* Entry: 10739e9a4; end: 10739ea3b;  */

void FUN_10739e9a4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  long *param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0x80;
  __Znwm();
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_58 = param_4[1];
  uStack_60 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  lVar2 = *param_5;
  *param_5 = 0;
  func_0x00010739b09c();
  *param_1 = uVar1;
  if (lVar2 != 0) {
    func_0x00010739f298();
  }
  func_0x00010726ee04(&uStack_60);
  func_0x0001072aa1c8(&uStack_50);
  return;
}



/* Entry: 10739ea3c; end: 10739eaa3;  */

void FUN_10739ea3c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  uVar2 = *param_2;
  uVar4 = param_3[1];
  uVar3 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  *puVar1 = &PTR_DAT_1109a97b0;
  puVar1[1] = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  uStack_40 = 0;
  uStack_38 = 0;
  *param_1 = puVar1;
  func_0x0001072bc968(&uStack_40);
  return;
}



/* Entry: 10739eaa4; end: 10739eb97;  */

void FUN_10739eaa4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0x158;
  __Znwm();
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uVar2 = uVar1;
  if (param_2[1] != 0) {
    do {
      func_0x00010739f318();
    } while (extraout_w10 != 0);
  }
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x00010739f318();
    } while (extraout_w10_00 != 0);
  }
  uStack_68 = param_4[1];
  uStack_70 = *param_4;
  if (param_4[1] != 0) {
    do {
      func_0x00010739f318();
    } while (extraout_w10_01 != 0);
  }
  FUN_10739d704();
  FUN_10739d04c(uVar1,&uStack_50,&uStack_60,&uStack_70,uVar2);
  *param_1 = uVar1;
  func_0x00010725b6e0(&uStack_70);
  func_0x00010726eedc(&uStack_60);
  func_0x0001072aa234(&uStack_50);
  return;
}



/* Entry: 10739eb98; end: 10739ebcf;  */

long FUN_10739eb98(long param_1)

{
  FUN_10739f220(param_1 + 0x20);
  func_0x00010726eeb8(param_1 + 0x10);
  FUN_10739f1c8(param_1 + 8);
  FUN_10739f194(param_1,0);
  return param_1;
}



/* Entry: 10739ebd0; end: 10739ebd7;  */

void FUN_10739ebd0(undefined8 param_1,double param_2,double param_3,double param_4,long *param_5,
                  undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  long ****pppplVar3;
  undefined *puVar4;
  byte bVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  long ***ppplVar8;
  long ***ppplVar9;
  long ***ppplVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  undefined1 uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x9;
  long extraout_x9_00;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long ****pppplVar24;
  long ****pppplVar25;
  long *plVar26;
  float fVar27;
  long ****pppplVar28;
  long ****pppplVar29;
  ulong uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  double dStack_888;
  ulong uStack_880;
  undefined1 auStack_878 [16];
  undefined8 uStack_868;
  long lStack_860;
  undefined1 auStack_848 [88];
  double dStack_7f0;
  byte bStack_7e8;
  double dStack_7e0;
  char cStack_7d8;
  double dStack_7d0;
  char cStack_7c8;
  undefined1 auStack_7c0 [32];
  long ***ppplStack_7a0;
  long ***ppplStack_798;
  long ***ppplStack_790;
  long lStack_788;
  long lStack_780;
  undefined8 uStack_778;
  long ***appplStack_770 [2];
  long ***ppplStack_760;
  long ***ppplStack_758;
  undefined1 auStack_750 [88];
  long ***ppplStack_6f8;
  long ***ppplStack_6f0;
  byte bStack_6e8;
  undefined8 uStack_630;
  undefined4 uStack_628;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long ***ppplStack_490;
  undefined4 uStack_488;
  undefined **ppuStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  ulong uStack_468;
  undefined8 uStack_460;
  undefined4 uStack_458;
  undefined1 uStack_454;
  long ***ppplStack_410;
  long ***ppplStack_408;
  long ***ppplStack_400;
  long ***ppplStack_3f8;
  undefined **ppuStack_3f0;
  ulong uStack_3e8;
  undefined8 uStack_3e0;
  ulong uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_390;
  undefined8 uStack_370;
  undefined8 uStack_1b8;
  long alStack_100 [3];
  char cStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [56];
  long alStack_a0 [3];
  undefined8 *puStack_88;
  long lStack_80;
  long lStack_78;
  long alStack_70 [5];
  undefined8 uStack_48;
  
  lVar19 = *param_5;
  plVar18 = alStack_100;
  lVar16 = lVar19;
  func_0x00010739cf9c();
  *(undefined1 *)(lVar16 + 0x70) = 0;
  uStack_48 = extraout_x8;
  if (*(char *)(lVar16 + 0x78) == '\x01') {
    func_0x00010739d02c();
    (*extraout_x8_00)();
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  lStack_80 = lVar19;
  lStack_78 = lVar16;
  FUN_10739c0ec(alStack_70,param_6);
  (**(code **)(**(long **)(lVar19 + 0x28) + 0x38))(alStack_100);
  uVar15 = cStack_e8 == '\x01';
  if ((bool)uVar15) {
    FUN_10739b2b0(&lStack_80);
  }
  else {
    plVar21 = *(long **)(lVar19 + 0x28);
    lStack_e0 = lVar19;
    FUN_10739be8c(auStack_d8,&lStack_80);
    puStack_88 = (undefined8 *)0x0;
    puVar23 = (undefined8 *)0x48;
    __Znwm();
    *puVar23 = &PTR_SUB_1109a9520;
    puVar23[1] = lStack_e0;
    FUN_10739be8c(puVar23 + 2,auStack_d8);
    plVar18 = alStack_a0;
    puStack_88 = puVar23;
    (**(code **)(*plVar21 + 0x40))();
    *(int *)(lVar19 + 0x74) = (int)plVar21;
    *(undefined1 *)(lVar19 + 0x78) = 1;
    func_0x000107270b28(alStack_a0);
    func_0x00010739cfe4();
  }
  func_0x00010739cf7c();
  func_0x0001072bb9f4();
  func_0x00010739cf4c(uStack_48);
  if ((bool)uVar15) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107270b28(alStack_a0);
  func_0x00010739cfe4();
  func_0x00010739cf7c();
  plVar21 = alStack_70;
  func_0x0001072bb9f4();
  func_0x00010739cf84();
  plVar26 = plVar21;
  func_0x00010739cf9c();
  plVar26 = (long *)*plVar26;
  uStack_1b8 = extraout_x8_01;
  (**(code **)(*(long *)plVar26[5] + 0x20))(auStack_750);
  (**(code **)(*(long *)plVar26[5] + 0x30))(auStack_878);
  lVar19 = *plVar26;
  plVar1 = (long *)plVar26[7];
  lVar16 = plVar26[8];
  func_0x000107751284(&uStack_630);
  dVar33 = 0.0;
  ppplStack_408 = (long ***)0x0;
  ppplStack_410 = (long ***)0x0;
  ppplStack_3f8 = (long ***)0x0;
  ppplStack_400 = (long ***)0x0;
  func_0x00010727ce6c(plVar26 + 9,&ppplStack_410);
  ppplStack_410 = (long ***)((ulong)ppplStack_410 & 0xffffffffffffff00);
  uStack_3d8 = uStack_3d8 & 0xffffffffffffff00;
  uStack_3d0 = 0;
  fVar34 = 0.0;
  if (*(int *)(lVar19 + 0xe8) == 0) {
    fVar35 = 0.0;
    fVar36 = 0.0;
    fVar27 = 0.0;
  }
  else {
    if (*(int *)(lVar19 + 0xe8) == 1) {
      uVar30 = *(ulong *)(lVar19 + 0xb0);
      uStack_4a0 = *(long *****)(lVar19 + 0xa8);
      uStack_498._4_4_ = (float)(uVar30 >> 0x20);
      uStack_498._0_4_ = (float)uVar30;
      fVar35 = uStack_498._4_4_;
      fVar36 = (float)uStack_498;
      uStack_498 = (long ****)uVar30;
    }
    else {
      func_0x0001072803d4(&uStack_4a0,lVar19 + 0xa8,&uStack_630,&ppplStack_410);
      fVar35 = 0.0;
      fVar36 = 0.0;
      fVar27 = 0.0;
      if (((ulong)ppplStack_490 & 1) == 0) goto LAB_10739b3dc;
      fVar35 = uStack_498._4_4_;
      fVar36 = (float)uStack_498;
    }
    fVar34 = (float)uStack_4a0;
    fVar27 = uStack_4a0._4_4_;
  }
LAB_10739b3dc:
  func_0x00010724b3d8(&ppplStack_410);
  if (fVar34 <= (float)dVar33) {
    fVar34 = (float)dVar33;
  }
  if (fVar27 <= (float)param_2) {
    fVar27 = (float)param_2;
  }
  if (fVar36 <= (float)param_3) {
    fVar36 = (float)param_3;
  }
  if (fVar35 <= (float)param_4) {
    fVar35 = (float)param_4;
  }
  func_0x00010725aba0((double)fVar34,(double)fVar27,(double)fVar36,(double)fVar35,auStack_7c0);
  lVar17 = *plVar18;
  lVar2 = plVar18[1];
  uVar20 = (lVar2 - lVar17) / 0x250;
  ppplStack_798 = (long ***)0x0;
  ppplStack_790 = (long ***)0x0;
  uVar30 = 3;
  if (bStack_6e8 != 0) {
    uVar30 = 1;
  }
  ppplStack_7a0 = (long ***)0x0;
  if (uVar20 < uVar30) {
    puVar23 = &uStack_868;
    while (puVar23 = (undefined8 *)*puVar23, puVar23 != (undefined8 *)0x0) {
      func_0x0001072639d8(&ppplStack_410,puVar23 + 9);
      func_0x0001072ee420(&ppplStack_7a0,&ppplStack_410);
      func_0x000107264bb8(&ppplStack_410);
    }
  }
  else {
    uStack_4a0 = &ppplStack_7a0;
    uStack_498 = (long ****)((ulong)uStack_498 & 0xffffffffffffff00);
    if (lVar2 != lVar17) {
      if (0x6eb3e45306eb3e < uVar20) {
        func_0x0001072ee16c();
        goto LAB_10739bd6c;
      }
      pppplVar29 = &ppplStack_790;
      func_0x0001072ee244();
      ppplStack_790 = (long ***)(pppplVar29 + uVar20 * 0x4a);
      ppplStack_408 = (long ***)appplStack_770;
      ppplStack_400 = (long ***)&ppplStack_760;
      ppplStack_3f8 = (long ***)((ulong)ppplStack_3f8 & 0xffffffffffffff00);
      ppplStack_7a0 = (long ***)pppplVar29;
      ppplStack_798 = (long ***)pppplVar29;
      appplStack_770[0] = (long ***)pppplVar29;
      ppplStack_410 = (long ***)&ppplStack_790;
      for (; ppplStack_760 = (long ***)pppplVar29, lVar17 != lVar2; lVar17 = lVar17 + 0x250) {
        func_0x0001072639d8(pppplVar29,lVar17);
        pppplVar29 = (long ****)(ppplStack_760 + 0x4a);
      }
      ppplStack_3f8 = (long ***)CONCAT71(ppplStack_3f8._1_7_,1);
      func_0x0001072ee33c(&ppplStack_410);
      ppplStack_798 = (long ***)pppplVar29;
    }
    uStack_498 = (long ****)CONCAT71(uStack_498._1_7_,1);
    func_0x00010739cca4(&uStack_4a0);
  }
  if (bStack_6e8 == 1) {
    ppplStack_408 = ppplStack_6f0;
    ppplStack_410 = ppplStack_6f8;
  }
  else if (ppplStack_7a0 == ppplStack_798) {
    ppplStack_408 = (long ***)0x0;
    ppplStack_410 = (long ***)0x0;
  }
  else {
    dVar31 = 0.0;
    dVar33 = 0.0;
    for (pppplVar29 = (long ****)ppplStack_7a0; pppplVar29 != (long ****)ppplStack_798;
        pppplVar29 = pppplVar29 + 0x4a) {
      dVar33 = dVar33 + (double)pppplVar29[0x13];
      dVar31 = dVar31 + (double)pppplVar29[0x12];
    }
    dVar32 = (double)(ulong)(((long)ppplStack_798 - (long)ppplStack_7a0) / 0x250);
    func_0x000107246514(dVar33 / dVar32,dVar31 / dVar32,&ppplStack_410,0);
  }
  ppplVar9 = ppplStack_408;
  ppplVar8 = ppplStack_410;
  pppplVar29 = (long ****)ppplStack_410;
  func_0x00010739c204(appplStack_770,3);
  uStack_498 = (long ****)0x0;
  uStack_4a0 = (long ****)0x0;
  ppplStack_490 = (long ***)0x0;
  uVar20 = ((long)ppplStack_798 - (long)ppplStack_7a0) / 0x250;
  uVar30 = uVar20 + 1;
  if (uVar20 < 0xffffffffffffffff) {
    if (uVar30 < 0xaaaaaaaaaaaaaab) {
      FUN_10739c2a0(&ppplStack_410,uVar30,0,&ppplStack_490);
      func_0x00010739cef8();
      func_0x00010739cfbc();
      ppplStack_490 = ppplStack_3f8;
      uStack_498 = (long ****)ppplStack_400;
      pppplVar29 = (long ****)ppplStack_400;
      func_0x00010739cec4();
      goto LAB_10739b648;
    }
  }
  else {
LAB_10739b648:
    pppplVar25 = (long ****)ppplStack_7a0;
    pppplVar3 = (long ****)ppplStack_798;
    if (bStack_6e8 == 1) {
      ppplStack_758 = ppplStack_6f0;
      ppplStack_760 = ppplStack_6f8;
      if (uStack_498 < ppplStack_490) {
        uStack_498[1] = ppplStack_6f0;
        *uStack_498 = ppplStack_6f8;
        uStack_498[2] = (long ***)0x0;
        pppplVar29 = (long ****)ppplStack_6f8;
        uStack_498 = uStack_498 + 3;
      }
      else {
        func_0x00010739cfac();
        lVar17 = 0;
        if (extraout_x9 != 0) {
          lVar17 = extraout_x8_02 / extraout_x9;
        }
        func_0x00010739cff8(lVar17);
        func_0x00010739cfac(uStack_498);
        func_0x00010739d004();
        ppplVar6 = ppplStack_400;
        pppplVar29 = (long ****)ppplStack_760;
        ppplStack_400[1] = (long **)ppplStack_758;
        *ppplVar6 = (long **)ppplStack_760;
        ppplVar6[2] = (long **)0x0;
        func_0x00010739cef8();
        func_0x00010739cfbc();
        ppplStack_490 = ppplStack_3f8;
        uStack_498 = (long ****)(ppplVar6 + 3);
        func_0x00010739cec4();
        pppplVar25 = (long ****)ppplStack_7a0;
        uStack_498 = (long ****)(ppplVar6 + 3);
        pppplVar3 = (long ****)ppplStack_798;
      }
    }
    for (; pppplVar24 = uStack_498, pppplVar28 = uStack_4a0, puVar4 = PTR___ZSt7nothrow_1103469d8,
        pppplVar25 != pppplVar3; pppplVar25 = pppplVar25 + 0x4a) {
      func_0x000107246514(pppplVar25[0x13],pppplVar25[0x12],&ppplStack_760,0);
      pppplVar28 = (long ****)pppplVar25[0x12];
      func_0x00010739c1b8(pppplVar28,pppplVar25[0x13],ppplVar9,ppplVar8,appplStack_770);
      ppplVar7 = ppplStack_758;
      ppplVar6 = ppplStack_760;
      pppplVar29 = pppplVar28;
      if (uStack_498 < ppplStack_490) {
        *uStack_498 = ppplStack_760;
        uStack_498[1] = ppplStack_758;
        pppplVar24 = uStack_498 + 3;
        uStack_498[2] = (long ***)pppplVar28;
      }
      else {
        func_0x00010739cff8(((long)uStack_498 - (long)uStack_4a0) / 0x18);
        func_0x00010739d004();
        ppplVar10 = ppplStack_400;
        *ppplStack_400 = (long **)ppplVar6;
        ppplVar10[1] = (long **)ppplVar7;
        ppplVar10[2] = (long **)pppplVar28;
        pppplVar24 = (long ****)(ppplVar10 + 3);
        _memcpy(ppplStack_408 + (((long)uStack_498 - (long)uStack_4a0) / -0x18) * 3);
        func_0x00010739cfbc();
        ppplStack_490 = ppplStack_3f8;
        uStack_498 = pppplVar24;
        func_0x00010739cec4();
      }
      uStack_498 = pppplVar24;
    }
    ppplStack_408 = (long ***)0x0;
    ppplStack_410 = (long ***)0x0;
    pppplVar3 = (long ****)(((long)uStack_498 - (long)uStack_4a0) / 0x18);
    pppplVar25 = pppplVar3;
    if ((long)uStack_498 - (long)uStack_4a0 < 1) {
      pppplVar25 = (long ****)0x0;
    }
    else {
      for (; 0 < (long)pppplVar25; pppplVar25 = (long ****)((ulong)pppplVar25 >> 1)) {
        lVar17 = (long)pppplVar25 * 0x18;
        __ZnwmRKSt9nothrow_t(lVar17,puVar4);
        if (lVar17 != 0) goto LAB_10739b81c;
      }
      lVar17 = 0;
LAB_10739b81c:
      ppplStack_760 = (long ***)0x0;
      ppplStack_758 = (long ***)pppplVar25;
      FUN_10739c604(&ppplStack_410,lVar17);
      ppplStack_408 = (long ***)pppplVar25;
      FUN_10739c61c(&ppplStack_760);
    }
    FUN_10739c3b8(pppplVar28,pppplVar24,pppplVar3,ppplStack_410,pppplVar25);
    FUN_10739c61c(&ppplStack_410);
    lStack_780 = 0;
    uStack_778 = 0;
    lStack_788 = 0;
    func_0x00010739cfac(uStack_498);
    lVar17 = 0;
    if (extraout_x9_00 != 0) {
      lVar17 = extraout_x8_03 / extraout_x9_00;
    }
    func_0x000107257f58(&lStack_788,lVar17);
    pppplVar3 = uStack_498;
    for (pppplVar25 = uStack_4a0; fVar34 = SUB84(pppplVar29,0), pppplVar25 != pppplVar3;
        pppplVar25 = pppplVar25 + 3) {
      ppplStack_408 = pppplVar25[1];
      pppplVar29 = (long ****)*pppplVar25;
      ppplStack_410 = (long ***)pppplVar29;
      func_0x00010725ade4(&lStack_788,&ppplStack_410);
    }
    FUN_10739cc78(&uStack_4a0);
    func_0x0001072bbf74(&ppplStack_7a0);
    func_0x000107751284(&ppplStack_410);
    uStack_4a0 = (long ****)((ulong)uStack_4a0 & 0xffffffffffffff00);
    uStack_468 = uStack_468 & 0xffffffffffffff00;
    uStack_460 = 0;
    func_0x00010739cfd8(lVar19 + 0x38);
    fVar36 = fVar34;
    func_0x00010739cff0();
    uStack_4a0 = (long ****)((ulong)uStack_4a0 & 0xffffffffffffff00);
    uStack_468 = uStack_468 & 0xffffffffffffff00;
    uStack_460 = 0;
    func_0x00010739cfd8(lVar19 + 0x70);
    func_0x00010739cff0();
    func_0x00010739cf8c(auStack_848);
    dVar33 = (double)fVar34;
    while( true ) {
      bVar12 = false;
      if ((1 < (ulong)(lStack_780 - lStack_788 >> 4)) &&
         (bVar12 = false, !NAN(dStack_7f0) && !NAN(dVar33))) {
        bVar12 = dStack_7f0 < dVar33;
      }
      if (!bVar12) break;
      lStack_780 = lStack_780 + -0x10;
      func_0x00010739cf8c(&uStack_4a0);
      _memcpy(auStack_848,&uStack_4a0,0x88);
    }
    if (bStack_6e8 == 1) {
      if (lStack_780 - lStack_788 == 0x10) {
        dStack_7f0 = dVar33;
        if ((bStack_7e8 & 1) == 0) {
          bStack_7e8 = 1;
        }
      }
      else {
        dVar31 = (double)fVar36;
        bVar12 = false;
        bVar13 = false;
        bVar14 = false;
        if (dVar33 <= dStack_7f0) {
          bVar12 = false;
          bVar13 = false;
          bVar14 = true;
          if (!NAN(dStack_7f0) && !NAN(dVar31)) {
            bVar12 = dStack_7f0 < dVar31;
            bVar13 = dStack_7f0 == dVar31;
            bVar14 = false;
          }
        }
        if (!bVar13 && bVar12 == bVar14) {
          fVar27 = (float)dStack_7f0;
          if (fVar27 <= fVar36) {
            fVar36 = fVar27;
          }
          if (fVar34 <= fVar27) {
            fVar34 = fVar36;
          }
          if ((bStack_7e8 & 1) == 0) {
            bStack_7e8 = 1;
          }
          dStack_7f0 = (double)fVar34;
        }
      }
    }
    if ((bStack_7e8 & 1) == 0) {
      bStack_7e8 = 1;
      dStack_7f0 = dVar33;
    }
    uStack_4a0 = (long ****)CONCAT44(uStack_4a0._4_4_,0x11d);
    uStack_488 = 0;
    uStack_468 = 0;
    uStack_470 = 0;
    uStack_478 = 0;
    ppuStack_480 = &PTR_DAT_110996720;
    uStack_460 = CONCAT44(uStack_460._4_4_,0x11d);
    uStack_458 = 0;
    uStack_454 = 1;
    func_0x00010739cf20();
    ppplStack_798._0_4_ = 3;
    func_0x00010739ceb4();
    func_0x00010739cf60();
    func_0x00010739cedc(0x11b);
    uStack_478 = 0;
    ppuStack_480 = &PTR_DAT_110996720;
    func_0x00010739d040();
    uStack_454 = 1;
    func_0x00010739cf20();
    puVar23 = &uStack_4a0;
    func_0x00010729d56c(puVar23,"step",&UNK_10f40b3c8);
    ppplStack_7a0 = (long ***)(long)dStack_7f0;
    ppplStack_798._0_4_ = 3;
    func_0x00010726e09c(lVar16,puVar23,&ppplStack_7a0);
    func_0x00010739cf60();
    func_0x00010739cedc(0x18e);
    uStack_478 = 0;
    ppuStack_480 = &PTR_DAT_110996720;
    func_0x00010739d040();
    uStack_454 = 1;
    func_0x00010739cf20();
    ppplStack_7a0 = (long ***)(long)(dStack_7f0 * 100.0);
    ppplStack_798._0_4_ = 2;
    func_0x00010739ceb4();
    func_0x00010739cf60();
    func_0x00010739cedc(399);
    uStack_478 = 0;
    ppuStack_480 = &PTR_DAT_110996720;
    func_0x00010739d040();
    uStack_454 = 1;
    func_0x00010739cf20();
    dStack_7d0 = dStack_7d0 * 100.0;
    if (cStack_7c8 == '\0') {
      dStack_7d0 = 0.0;
    }
    ppplStack_7a0 = (long ***)(long)dStack_7d0;
    ppplStack_798._0_4_ = 2;
    func_0x00010739ceb4();
    func_0x00010739cf60();
    func_0x00010739cedc(400);
    uStack_478 = 0;
    ppuStack_480 = &PTR_DAT_110996720;
    func_0x00010739d040();
    uStack_454 = 1;
    func_0x00010739cf20();
    if (cStack_7d8 == '\0') {
      dStack_7e0 = 0.0;
    }
    ppplStack_7a0 = (long ***)(long)dStack_7e0;
    ppplStack_798 = (long ***)CONCAT44(ppplStack_798._4_4_,2);
    func_0x00010739ceb4();
    fVar34 = SUB84(dStack_7e0,0);
    func_0x00010739cf60();
    func_0x000107267da8(&ppplStack_410);
    func_0x00010739d010();
    ppplStack_410 = (long ***)((ulong)ppplStack_410 & 0xffffffffffffff00);
    uStack_3d8 = uStack_3d8 & 0xffffffffffffff00;
    uStack_3d0 = 0;
    func_0x0001073837dc(lVar19,&uStack_630,&ppplStack_410,&UNK_10de60798);
    func_0x00010724b3d8(&ppplStack_410);
    ppplStack_400 = (long ***)((ulong)ppplStack_400 & 0xffffffffffffff00);
    ppplStack_3f8 = (long ***)((ulong)ppplStack_3f8 & 0xffffffffffffff00);
    ppuStack_3f0 = (undefined **)((ulong)ppuStack_3f0 & 0xffffffffffffff00);
    uStack_3e8 = uStack_3e8 & 0xffffffffffffff00;
    uStack_390 = 0;
    uStack_370 = 0;
    ppplStack_410 = (long ***)((ulong)(uint)(int)fVar34 * 1000000);
    ppplStack_408 = (long ***)CONCAT71(ppplStack_408._1_7_,1);
    uStack_3d8 = 0x4008000000000000;
    uStack_3e0 = 0;
    uStack_3c8 = 0;
    uStack_3d0 = 0xc000000000000000;
    uStack_3b8 = 0xc000000000000000;
    uStack_3c0 = 0x4008000000000000;
    uStack_3b0 = CONCAT71(uStack_3b0._1_7_,1);
    (**(code **)(*plVar1 + 0x18))(plVar1,auStack_848,&ppplStack_410);
    bVar5 = bStack_7e8;
    dVar33 = dStack_7f0;
    func_0x00010725ab38(&ppplStack_410);
    puVar23 = &uStack_630;
    func_0x000107267da8();
    if (bVar5 == 0) {
      dVar33 = 0.0;
    }
    uStack_880 = 0;
    if (lStack_860 != 0) {
      uStack_880 = 0x100;
    }
    uStack_880 = uStack_880 | bStack_6e8;
    *(undefined1 *)(plVar26 + 0xe) = 1;
    puVar22 = (undefined8 *)plVar26[8];
    ppplStack_410 = (long ***)CONCAT44(ppplStack_410._4_4_,0x11c);
    ppplStack_3f8 = (long ***)((ulong)ppplStack_3f8 & 0xffffffff00000000);
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_3e8 = 0;
    ppuStack_3f0 = &PTR_DAT_110996720;
    uStack_3d0 = CONCAT44(uStack_3d0._4_4_,0x11c);
    uStack_3c8 = CONCAT35((int3)((ulong)uStack_3c8 >> 0x28),0x100000000);
    uStack_3b0 = 0;
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    dStack_888 = dVar33;
    __ZNSt3__16chrono12steady_clock3nowEv();
    uStack_4a0 = (long ****)((((long)puVar23 - plVar21[1]) / 1000000) * 1000);
    uStack_630 = *puVar22;
    uStack_628 = 3;
    FUN_10743f9dc(puVar22,&ppplStack_410,&uStack_4a0,&uStack_630,7);
    func_0x000107262330(&ppplStack_410);
    uVar15 = (char)plVar21[6] == '\x01';
    if ((bool)uVar15) {
      plVar18 = (long *)plVar21[5];
      if (plVar18 == (long *)0x0) {
        func_0x000104bfeb48();
        goto LAB_10739bd6c;
      }
      (**(code **)(*plVar18 + 0x30))(plVar18,&dStack_888);
    }
    func_0x0001072bb81c(auStack_878);
    func_0x0001072bbee8(auStack_750);
    func_0x00010739cf4c(uStack_1b8);
    if ((bool)uVar15) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10739c28c();
LAB_10739bd6c:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10739bd70);
  (*pcVar11)();
}



/* Entry: 10739ebd8; end: 10739ed6b;  */

void FUN_10739ebd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,undefined8 *param_6)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *param_5;
  uVar3 = param_6[1];
  uVar2 = *param_6;
  uVar5 = param_6[3];
  uVar4 = param_6[2];
  *(undefined1 *)(lVar1 + 0x68) = *(undefined1 *)(param_6 + 4);
  *(undefined8 *)(lVar1 + 0x60) = uVar5;
  *(undefined8 *)(lVar1 + 0x58) = uVar4;
  *(undefined8 *)(lVar1 + 0x50) = uVar3;
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  uVar2 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010727ce6c(param_6,&uStack_100);
  func_0x0001078696e8(auStack_118);
  func_0x00010739f2f8();
  uStack_f8 = uVar4;
  func_0x00010739f348();
  func_0x00010739f288();
  func_0x00010739f2c8();
  func_0x00010739f2a4();
  func_0x00010739f2f8();
  uStack_f8 = uVar2;
  func_0x00010739f348();
  func_0x00010739f288();
  func_0x00010739f2c8();
  func_0x00010739f2a4();
  func_0x00010739f2f8();
  uStack_f8 = param_4;
  func_0x00010739f348();
  func_0x00010739f288();
  func_0x00010739f2c8();
  func_0x00010739f2a4();
  func_0x00010739f2f8();
  uStack_f8 = param_3;
  func_0x00010739f348();
  func_0x00010739f288();
  func_0x00010739f2c8();
  func_0x00010739f2a4();
  (**(code **)(*(long *)param_5[2] + 0x28))((long *)param_5[2],auStack_118);
  func_0x00010726b264(auStack_118);
  func_0x00010739f274(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726b264(auStack_118);
  do {
    func_0x00010739f328();
  } while( true );
}



/* Entry: 10739ed6c; end: 10739ed93;  */

void FUN_10739ed6c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte bStack_30;
  
  lVar2 = *(long *)(param_1 + 8);
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  bStack_30 = 0;
  __ZNSt3__15mutex4lockEv(lVar2 + 0x58);
  if ((((*(byte *)(lVar2 + 0x98) & 1) == 0) && (*(char *)(lVar2 + 0x120) == '\x01')) &&
     (*(char *)(lVar2 + 0x138) == '\x01')) {
    lVar1 = lVar2 + 0x38;
    FUN_10739dbc4();
    if (*(long *)(lVar2 + 0xa0) < lVar1 - *(long *)(lVar2 + 0xa8)) {
      uStack_58 = *(undefined8 *)(lVar2 + 0xf8);
      uStack_60 = *(ulong *)(lVar2 + 0xf0);
      uStack_48 = *(undefined8 *)(lVar2 + 0x108);
      uStack_50 = *(undefined8 *)(lVar2 + 0x100);
      uStack_38 = *(undefined8 *)(lVar2 + 0x118);
      uStack_40 = *(undefined8 *)(lVar2 + 0x110);
      bStack_30 = *(byte *)(lVar2 + 0x120);
      if (*(char *)(lVar2 + 0x120) == '\x01') {
        *(undefined1 *)(lVar2 + 0x120) = 0;
      }
    }
  }
  func_0x00010739e7e8();
  if ((bStack_30 & 1) != 0) {
    FUN_10739d254(lVar2,&uStack_60);
  }
  return;
}



/* Entry: 10739ed94; end: 10739eda7;  */

void FUN_10739ed94(void)

{
  FUN_10739f01c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10739eda8; end: 10739ee1f;  */

void FUN_10739eda8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_f0 [32];
  undefined1 uStack_d0;
  undefined1 auStack_c8 [104];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  auStack_f0[0] = 0;
  uStack_d0 = 0;
  func_0x00010740e07c(auStack_c8,*(undefined8 *)(param_2 + 8),auStack_f0);
  FUN_10740e438(param_1,*(undefined8 *)(param_2 + 8),param_3,param_4,auStack_60,auStack_50);
  return;
}



/* Entry: 10739ee20; end: 10739ef67;  */

undefined8 * FUN_10739ee20(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  undefined8 *puVar5;
  double *pdVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined1 *extraout_x8;
  undefined1 *extraout_x8_00;
  undefined1 *extraout_x8_01;
  undefined1 *extraout_x8_02;
  undefined1 *extraout_x8_03;
  undefined1 *extraout_x8_04;
  undefined1 *extraout_x8_05;
  undefined1 *extraout_x8_06;
  undefined1 *extraout_x8_07;
  long lVar12;
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
  undefined8 *unaff_x19;
  undefined *unaff_x20;
  undefined8 uVar13;
  long *plVar14;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  uint uVar15;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_1200 [3720];
  undefined1 auStack_378 [120];
  undefined **appuStack_1c8 [3];
  undefined ***pppuStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_178;
  undefined1 auStack_170 [8];
  undefined1 uStack_168;
  undefined1 uStack_150;
  double dStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined1 uStack_108;
  undefined1 uStack_f0;
  undefined4 uStack_60;
  undefined **appuStack_58 [3];
  undefined ***pppuStack_40;
  undefined8 uStack_38;
  double dVar16;
  
  puVar9 = &stack0xfffffffffffffff0;
  func_0x00010739f2d0();
  if ((param_1 == 0) || (func_0x00010739f330(), (int)param_1 == 0)) {
    puVar5 = *(undefined8 **)(unaff_x20 + 8);
    func_0x00010739f274(uStack_38);
    if ((bool)in_ZR) {
      func_0x00010740f3e8();
      puVar8 = &UNK_10f41038c;
      func_0x000107875d2c();
      func_0x00010740f37c(*unaff_x21);
      puVar10 = unaff_x20;
      FUN_107411fbc();
      func_0x00010740f438();
      pcStack_178 = unaff_x30;
      goto FUN_10740fa50;
    }
  }
  else {
    uVar4 = (char)param_3[1] == '\x01';
    if ((bool)uVar4) {
      dStack_140 = (double)(*param_3 / 1000000);
      uVar4 = (char)param_3[0xc] == '\0';
      plVar14 = param_3 + 6;
      if ((bool)uVar4) {
        plVar14 = (long *)&UNK_10de60ef8;
      }
      lStack_130 = plVar14[1];
      lStack_138 = *plVar14;
      lStack_120 = plVar14[3];
      lStack_128 = plVar14[2];
      lStack_110 = plVar14[5];
      lStack_118 = plVar14[4];
      uStack_108 = 0;
      uStack_f0 = 0;
      uStack_60 = 1;
    }
    else {
      uStack_60 = 0;
    }
    if (param_3[0x14] == 0) {
      appuStack_58[0] = &PTR_FUN_1109a9810;
      pppuStack_40 = appuStack_58;
    }
    else {
      func_0x00010724cbe8(appuStack_58,param_3 + 0x11);
    }
    puVar5 = *(undefined8 **)(unaff_x20 + 0x10);
    uStack_168 = 0;
    uStack_150 = 0;
    func_0x00010739f308();
    func_0x00010739f2f0();
    func_0x00010739f300();
    func_0x00010739f274(uStack_38);
    if ((bool)uVar4) {
      return puVar5;
    }
  }
  uVar4 = 0;
  ___stack_chk_fail();
  pdVar6 = &dStack_140;
  func_0x00010727d508();
  func_0x00010739f328();
  pcStack_178 = FUN_10739ef68;
  func_0x00010739f2d0();
  if ((pdVar6 == (double *)0x0) || (func_0x00010739f330(), (int)pdVar6 == 0)) {
    puVar7 = *(undefined8 **)(unaff_x20 + 8);
    func_0x00010739f274(uStack_1a8);
    if ((bool)uVar4) {
      func_0x000107875d2c(&UNK_10f410380);
      puVar8 = (undefined *)*puVar7;
      puVar8[0x1100] = 1;
      FUN_107411f4c(puVar8 + 0x50,puVar5);
      puVar10 = &UNK_10de68262;
      register0x00000008 = (BADSPACEBASE *)auStack_170;
      unaff_x19 = puVar5;
      unaff_x21 = param_3;
      unaff_x29 = puVar9;
FUN_10740fa50:
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(code **)((long)register0x00000008 + -8) = pcStack_178;
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      uVar13 = *(undefined8 *)(puVar8 + 0x48);
      *(undefined4 *)((long)register0x00000008 + -0x1090) = 0x76;
      *(undefined4 *)((long)register0x00000008 + -0x1078) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1060) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1058) = 0;
      *(undefined ***)((long)register0x00000008 + -0x1070) = &PTR_DAT_110996720;
      *(undefined8 *)((long)register0x00000008 + -0x1068) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x1050) = 0x76;
      *(undefined4 *)((long)register0x00000008 + -0x1048) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x1044) = 1;
      *(undefined8 *)((long)register0x00000008 + -0x1038) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1030) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1040) = 0;
      puVar9 = (undefined1 *)((long)register0x00000008 + -0x1090);
      func_0x00010729d56c(puVar9,"reason",puVar10);
      *(undefined4 *)((long)register0x00000008 + -0x80) = 1;
      *(undefined4 *)((long)register0x00000008 + -0x78) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x60) = **(undefined8 **)(puVar8 + 0x48);
      *(undefined4 *)((long)register0x00000008 + -0x58) = 3;
      FUN_10743fa9c(uVar13,puVar9,(undefined1 *)((long)register0x00000008 + -0x80),
                    (undefined1 *)((long)register0x00000008 + -0x60),7);
      puVar9 = (undefined1 *)((long)register0x00000008 + -0x1090);
      func_0x000107262330();
      if (*(int *)(puVar8 + 0x10d0) == 0) {
        __ZNSt3__16chrono12steady_clock3nowEv();
      }
      else {
        puVar9 = (undefined1 *)0x7fffffffffffffff;
      }
      lVar11 = *(long *)(*(long *)(puVar8 + 0x10f8) + 8);
      uVar13 = *(undefined8 *)(lVar11 + 0x198);
      uVar19 = *(undefined8 *)(lVar11 + 0x1b0);
      uVar17 = *(undefined8 *)(lVar11 + 0x1a8);
      *(undefined8 *)((long)register0x00000008 + -0x1080) = *(undefined8 *)(lVar11 + 0x1a0);
      *(undefined8 *)((long)register0x00000008 + -0x1088) = uVar13;
      *(undefined1 **)((long)register0x00000008 + -0x60) = puVar9;
      *(undefined1 **)((long)register0x00000008 + -0x1090) = puVar9;
      *(undefined8 *)((long)register0x00000008 + -0x1068) = *(undefined8 *)(lVar11 + 0x1b8);
      *(undefined8 *)((long)register0x00000008 + -0x1070) = uVar19;
      *(undefined8 *)((long)register0x00000008 + -0x1078) = uVar17;
      if (*(long *)(puVar8 + 0x1168) != **(long **)(lVar11 + 0x1c8)) {
        func_0x000107410e94(puVar8 + 0x1168);
        FUN_1074e31dc(puVar8 + 0x1168,(undefined1 *)((long)register0x00000008 + -0x1090));
      }
      uVar15 = NEON_ucvtf(*(undefined4 *)(puVar8 + 0xa4));
      dVar16 = (double)(ulong)uVar15;
      uVar18 = NEON_ucvtf(*(undefined4 *)(puVar8 + 0xa8));
      *(uint *)(puVar8 + 0x143c) = uVar15;
      *(undefined4 *)(puVar8 + 0x1440) = uVar18;
      func_0x000107411798();
      FUN_1074e33b8((float)dVar16,puVar8 + 0x1168);
      FUN_1074e3804((undefined1 *)((long)register0x00000008 + -0x80),puVar8 + 0x1168);
      FUN_107413c78(puVar8 + 0x50,(undefined1 *)((long)register0x00000008 + -0x80));
      FUN_1074137f8(puVar8 + 0x50,(undefined1 *)((long)register0x00000008 + -0x60));
      if (puVar8[0x1164] == '\x01') {
        *(undefined1 *)((long)register0x00000008 + -0x1090) = 0;
        func_0x0001074117a0();
        *(undefined1 *)((long)register0x00000008 + -0x1030) = 0;
        *(undefined1 *)((long)register0x00000008 + -0x1028) = 0;
        FUN_107410058(puVar8,(undefined1 *)((long)register0x00000008 + -0x1090));
      }
      lVar11 = *(long *)(puVar8 + 0x10f8);
      uVar4 = (undefined1)*(undefined8 *)(lVar11 + 8);
      func_0x0001077c5a6c();
      *(undefined1 *)((long)register0x00000008 + -0x1090) = uVar4;
      *(undefined4 *)((long)register0x00000008 + -0x108c) = *(undefined4 *)(puVar8 + 0x10d0);
      *(undefined4 *)((long)register0x00000008 + -0x1088) = *(undefined4 *)(puVar8 + 0x10d4);
      *(undefined4 *)((long)register0x00000008 + -0x1084) = *(undefined4 *)(puVar8 + 0x10dc);
      *(undefined *)((long)register0x00000008 + -0x1080) = puVar8[0x10e0];
      *(undefined8 *)((long)register0x00000008 + -0x1078) =
           *(undefined8 *)((long)register0x00000008 + -0x60);
      _memcpy((undefined1 *)((long)register0x00000008 + -0x1070),puVar8 + 0x58,0xe50);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                ((undefined1 *)((long)register0x00000008 + -0x220),*(long *)(lVar11 + 8) + 0x90);
      lVar11 = *(long *)(puVar8 + 0x10f8);
      lVar12 = *(long *)(lVar11 + 8);
      *(undefined1 *)((long)register0x00000008 + -0x208) = *(undefined1 *)(lVar12 + 0x22);
      uVar20 = *(undefined8 *)(lVar12 + 0x1a0);
      uVar19 = *(undefined8 *)(lVar12 + 0x198);
      uVar17 = *(undefined8 *)(lVar12 + 0x1b0);
      uVar13 = *(undefined8 *)(lVar12 + 0x1a8);
      *(undefined8 *)((long)register0x00000008 + -0x1e0) = *(undefined8 *)(lVar12 + 0x1b8);
      *(undefined8 *)((long)register0x00000008 + -0x1f8) = uVar20;
      *(undefined8 *)((long)register0x00000008 + -0x200) = uVar19;
      *(undefined8 *)((long)register0x00000008 + -0x1e8) = uVar17;
      *(undefined8 *)((long)register0x00000008 + -0x1f0) = uVar13;
      FUN_107411660((undefined1 *)((long)register0x00000008 + -0x1d8),*(long *)(lVar11 + 8) + 0x108)
      ;
      puVar9 = (undefined1 *)((long)register0x00000008 + -0x1090);
      lVar11 = *(long *)(puVar8 + 0x10f8);
      *(undefined8 *)((long)register0x00000008 + -0x150) =
           *(undefined8 *)(*(long *)(lVar11 + 8) + 400);
      lVar11 = *(long *)(lVar11 + 8);
      puVar5 = *(undefined8 **)(lVar11 + 0x1c0);
      lVar12 = puVar5[1];
      uVar13 = *puVar5;
      *(undefined8 *)((long)register0x00000008 + -0x140) = puVar5[1];
      *(undefined8 *)((long)register0x00000008 + -0x148) = uVar13;
      if (lVar12 != 0) {
        do {
          func_0x000107411734();
        } while (extraout_w11 != 0);
        func_0x0001074117c0();
        puVar9 = extraout_x8;
        lVar11 = extraout_x9;
      }
      lVar12 = *(long *)(lVar11 + 0xb0);
      uVar13 = *(undefined8 *)(lVar11 + 0xa8);
      *(undefined8 *)((long)register0x00000008 + -0x130) = *(undefined8 *)(lVar11 + 0xb0);
      *(undefined8 *)((long)register0x00000008 + -0x138) = uVar13;
      if (lVar12 != 0) {
        do {
          func_0x000107411734();
        } while (extraout_w11_00 != 0);
        func_0x0001074117c0();
        puVar9 = extraout_x8_00;
        lVar11 = extraout_x9_00;
      }
      lVar12 = *(long *)(lVar11 + 0xd8);
      uVar13 = *(undefined8 *)(lVar11 + 0xd0);
      *(undefined8 *)((long)register0x00000008 + -0x120) = *(undefined8 *)(lVar11 + 0xd8);
      *(undefined8 *)((long)register0x00000008 + -0x128) = uVar13;
      if (lVar12 != 0) {
        do {
          func_0x000107411734();
        } while (extraout_w11_01 != 0);
        func_0x0001074117c0();
        puVar9 = extraout_x8_01;
        lVar11 = extraout_x9_01;
      }
      lVar12 = *(long *)(lVar11 + 0x100);
      uVar13 = *(undefined8 *)(lVar11 + 0xf8);
      *(undefined8 *)((long)register0x00000008 + -0x110) = *(undefined8 *)(lVar11 + 0x100);
      *(undefined8 *)((long)register0x00000008 + -0x118) = uVar13;
      if (lVar12 != 0) {
        do {
          func_0x000107411734();
        } while (extraout_w11_02 != 0);
        func_0x0001074117c0();
        puVar9 = extraout_x8_02;
        lVar11 = extraout_x9_02;
      }
      *(undefined8 *)((long)register0x00000008 + -0x108) = *(undefined8 *)(lVar11 + 0x338);
      lVar12 = *(long *)(lVar11 + 0x340);
      *(long *)((long)register0x00000008 + -0x100) = lVar12;
      if (lVar12 != 0) {
        do {
          func_0x000107411734();
        } while (extraout_w11_03 != 0);
        func_0x0001074117c0();
        puVar9 = extraout_x8_03;
        lVar11 = extraout_x9_03;
      }
      *(undefined8 *)((long)register0x00000008 + -0xf8) = *(undefined8 *)(lVar11 + 0x348);
      lVar12 = *(long *)(lVar11 + 0x350);
      *(long *)((long)register0x00000008 + -0xf0) = lVar12;
      if (lVar12 != 0) {
        do {
          func_0x000107411734();
        } while (extraout_w11_04 != 0);
        func_0x0001074117c0();
        puVar9 = extraout_x8_04;
        lVar11 = extraout_x9_04;
      }
      *(undefined8 *)((long)register0x00000008 + -0xe8) = *(undefined8 *)(lVar11 + 0x358);
      lVar12 = *(long *)(lVar11 + 0x360);
      *(long *)((long)register0x00000008 + -0xe0) = lVar12;
      if (lVar12 != 0) {
        do {
          func_0x000107411734();
        } while (extraout_w11_05 != 0);
        func_0x0001074117c0();
        puVar9 = extraout_x8_05;
        lVar11 = extraout_x9_05;
      }
      *(undefined8 *)((long)register0x00000008 + -0xd8) = *(undefined8 *)(lVar11 + 0x368);
      lVar11 = *(long *)(lVar11 + 0x370);
      *(long *)((long)register0x00000008 + -0xd0) = lVar11;
      if (lVar11 != 0) {
        do {
          func_0x000107411734();
          puVar9 = extraout_x8_06;
        } while (extraout_w11_06 != 0);
      }
      *(undefined8 *)((long)register0x00000008 + -200) = *(undefined8 *)(puVar8 + 0x10e8);
      lVar11 = *(long *)(puVar8 + 0x10f0);
      *(long *)((long)register0x00000008 + -0xc0) = lVar11;
      if (lVar11 != 0) {
        do {
          func_0x000107411734();
          puVar9 = extraout_x8_07;
        } while (extraout_w11_07 != 0);
      }
      puVar9[0xfd8] = puVar8[0x1101];
      puVar9[0xfd9] = *(long *)(puVar8 + 0x1108) != 0;
      puVar9[0xfda] = puVar8[0x10d8];
      *(undefined8 *)((long)register0x00000008 + -0xac) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      *(undefined8 *)((long)register0x00000008 + -0xb4) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0x9c) =
           *(undefined8 *)((long)register0x00000008 + -0x68);
      *(undefined8 *)((long)register0x00000008 + -0xa4) =
           *(undefined8 *)((long)register0x00000008 + -0x70);
      lVar11 = *(long *)(puVar8 + 0x1118);
      uVar13 = *(undefined8 *)(puVar8 + 0x1110);
      *(undefined8 *)((long)register0x00000008 + -0x88) = *(undefined8 *)(puVar8 + 0x1118);
      *(undefined8 *)((long)register0x00000008 + -0x90) = uVar13;
      if (lVar11 != 0) {
        do {
          func_0x000107411724();
        } while (extraout_w10 != 0);
      }
      plVar14 = *(long **)(puVar8 + 0x38);
      puVar5 = (undefined8 *)0x1028;
      __Znwm();
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = &PTR_FUN_1109adf98;
      _memcpy(puVar5 + 3,(undefined1 *)((long)register0x00000008 + -0x1090),0xe70);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (puVar5 + 0x1d1,(undefined1 *)((long)register0x00000008 + -0x220));
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x208);
      uVar19 = *(undefined8 *)((long)register0x00000008 + -0x1f0);
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x1f8);
      puVar5[0x1d5] = *(undefined8 *)((long)register0x00000008 + -0x200);
      puVar5[0x1d4] = uVar13;
      puVar5[0x1d7] = uVar19;
      puVar5[0x1d6] = uVar17;
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x1ef);
      *(undefined8 *)((long)puVar5 + 0xec1) = *(undefined8 *)((long)register0x00000008 + -0x1e7);
      *(undefined8 *)((long)puVar5 + 0xeb9) = uVar13;
      FUN_107411660(puVar5 + 0x1da,(undefined1 *)((long)register0x00000008 + -0x1d8));
      puVar5[0x1eb] = *(undefined8 *)((long)register0x00000008 + -0x150);
      lVar11 = *(long *)((long)register0x00000008 + -0x140);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x148);
      puVar5[0x1ed] = *(undefined8 *)((long)register0x00000008 + -0x140);
      puVar5[0x1ec] = uVar13;
      if (lVar11 != 0) {
        do {
          func_0x000107411724();
        } while (extraout_w10_00 != 0);
      }
      lVar11 = *(long *)((long)register0x00000008 + -0x130);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x138);
      puVar5[0x1ef] = *(undefined8 *)((long)register0x00000008 + -0x130);
      puVar5[0x1ee] = uVar13;
      if (lVar11 != 0) {
        do {
          func_0x000107411724();
        } while (extraout_w10_01 != 0);
      }
      lVar11 = *(long *)((long)register0x00000008 + -0x120);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x128);
      puVar5[0x1f1] = *(undefined8 *)((long)register0x00000008 + -0x120);
      puVar5[0x1f0] = uVar13;
      if (lVar11 != 0) {
        do {
          func_0x000107411724();
        } while (extraout_w10_02 != 0);
      }
      lVar11 = *(long *)((long)register0x00000008 + -0x110);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x118);
      puVar5[499] = *(undefined8 *)((long)register0x00000008 + -0x110);
      puVar5[0x1f2] = uVar13;
      if (lVar11 != 0) {
        do {
          func_0x000107411724();
        } while (extraout_w10_03 != 0);
      }
      lVar11 = *(long *)((long)register0x00000008 + -0x100);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x108);
      puVar5[0x1f5] = *(undefined8 *)((long)register0x00000008 + -0x100);
      puVar5[500] = uVar13;
      if (lVar11 != 0) {
        do {
          func_0x000107411724();
        } while (extraout_w10_04 != 0);
      }
      lVar11 = *(long *)((long)register0x00000008 + -0xf0);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0xf8);
      puVar5[0x1f7] = *(undefined8 *)((long)register0x00000008 + -0xf0);
      puVar5[0x1f6] = uVar13;
      if (lVar11 != 0) {
        do {
          func_0x000107411724();
        } while (extraout_w10_05 != 0);
      }
      lVar11 = *(long *)((long)register0x00000008 + -0xe0);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0xe8);
      puVar5[0x1f9] = *(undefined8 *)((long)register0x00000008 + -0xe0);
      puVar5[0x1f8] = uVar13;
      if (lVar11 != 0) {
        do {
          func_0x000107411724();
        } while (extraout_w10_06 != 0);
      }
      lVar11 = *(long *)((long)register0x00000008 + -0xd0);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0xd8);
      puVar5[0x1fb] = *(undefined8 *)((long)register0x00000008 + -0xd0);
      puVar5[0x1fa] = uVar13;
      if (lVar11 != 0) {
        plVar1 = (long *)(lVar11 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uVar13 = *(undefined8 *)((long)register0x00000008 + -200);
      puVar5[0x1fd] = *(undefined8 *)((long)register0x00000008 + -0xc0);
      puVar5[0x1fc] = uVar13;
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0xb8);
      uVar19 = *(undefined8 *)((long)register0x00000008 + -0xa0);
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0xa8);
      puVar5[0x1ff] = *(undefined8 *)((long)register0x00000008 + -0xb0);
      puVar5[0x1fe] = uVar13;
      *(undefined8 *)((long)register0x00000008 + -200) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
      puVar5[0x201] = uVar19;
      puVar5[0x200] = uVar17;
      *(undefined4 *)(puVar5 + 0x202) = *(undefined4 *)((long)register0x00000008 + -0x98);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x90);
      puVar5[0x204] = *(undefined8 *)((long)register0x00000008 + -0x88);
      puVar5[0x203] = uVar13;
      *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
      *(undefined8 **)((long)register0x00000008 + -0x10a0) = puVar5 + 3;
      *(undefined8 **)((long)register0x00000008 + -0x1098) = puVar5;
      (**(code **)(*plVar14 + 0x20))(plVar14,(undefined1 *)((long)register0x00000008 + -0x10a0));
      func_0x00010725ab14((undefined1 *)((long)register0x00000008 + -0x10a0));
      puVar5 = (undefined8 *)((long)register0x00000008 + -0x1090);
      func_0x000107410df4(puVar5);
      return puVar5;
    }
  }
  else {
    pppuStack_1b0 = appuStack_1c8;
    appuStack_1c8[0] = &PTR_DAT_1109a9890;
    puVar7 = *(undefined8 **)(unaff_x20 + 0x10);
    func_0x00010739f308();
    func_0x00010739f2f0();
    func_0x00010739f300();
    func_0x00010739f274(uStack_1a8);
    if ((bool)uVar4) {
      return puVar7;
    }
  }
  ___stack_chk_fail();
  func_0x00010739f2f0();
  func_0x00010739f300();
  func_0x00010739f328();
  *puVar7 = &PTR_DAT_1109a97b0;
  func_0x0001072bc968(puVar7 + 2);
  return puVar7;
}



/* Entry: 10739ef68; end: 10739f01b;  */

long * FUN_10739ef68(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
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
  undefined8 uVar11;
  long lVar12;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  undefined8 *puVar20;
  long unaff_x20;
  undefined8 uVar21;
  uint uVar22;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  undefined4 uVar34;
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
  undefined1 auStack_1d8 [72];
  undefined4 uStack_b8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined **ppuStack_58;
  undefined8 in_stack_ffffffffffffffc8;
  double dVar23;
  
  func_0x00010739f2d0();
  if ((param_1 == 0) || (func_0x00010739f330(), (int)param_1 == 0)) {
    plVar6 = *(long **)(unaff_x20 + 8);
    func_0x00010739f274(in_stack_ffffffffffffffc8);
    if ((bool)in_ZR) {
      func_0x000107875d2c(&UNK_10f410380);
      lVar7 = *plVar6;
      *(undefined1 *)(lVar7 + 0x1100) = 1;
      FUN_107411f4c(lVar7 + 0x50);
      puVar9 = &UNK_10de68262;
      (*(code *)PTR____chkstk_darwin_11034bd40)(lVar7,&UNK_10de68262);
      uVar21 = *(undefined8 *)(lVar7 + 0x48);
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
      puVar8 = &uStack_1090;
      func_0x00010729d56c(puVar8,"reason",puVar9);
      uStack_80 = 1;
      uStack_78 = 0;
      puStack_60 = (undefined8 *)**(undefined8 **)(lVar7 + 0x48);
      ppuStack_58 = (undefined **)CONCAT44(ppuStack_58._4_4_,3);
      FUN_10743fa9c(uVar21,puVar8,&uStack_80,&puStack_60,7);
      puVar8 = &uStack_1090;
      func_0x000107262330();
      if (*(int *)(lVar7 + 0x10d0) == 0) {
        __ZNSt3__16chrono12steady_clock3nowEv();
      }
      else {
        puVar8 = (undefined8 *)0x7fffffffffffffff;
      }
      lVar10 = *(long *)(*(long *)(lVar7 + 0x10f8) + 8);
      uStack_1080 = *(undefined8 *)(lVar10 + 0x1a0);
      uStack_1088 = *(undefined8 *)(lVar10 + 0x198);
      ppuStack_1070 = *(undefined ***)(lVar10 + 0x1b0);
      uStack_1078 = *(undefined8 **)(lVar10 + 0x1a8);
      uStack_1068 = *(undefined8 *)(lVar10 + 0x1b8);
      uStack_1090 = puVar8;
      puStack_60 = puVar8;
      if (*(long *)(lVar7 + 0x1168) != **(long **)(lVar10 + 0x1c8)) {
        func_0x000107410e94(lVar7 + 0x1168);
        FUN_1074e31dc(lVar7 + 0x1168,&uStack_1090);
      }
      uVar22 = NEON_ucvtf(*(undefined4 *)(lVar7 + 0xa4));
      dVar23 = (double)(ulong)uVar22;
      uVar34 = NEON_ucvtf(*(undefined4 *)(lVar7 + 0xa8));
      *(uint *)(lVar7 + 0x143c) = uVar22;
      *(undefined4 *)(lVar7 + 0x1440) = uVar34;
      func_0x000107411798();
      FUN_1074e33b8((float)dVar23,lVar7 + 0x1168);
      FUN_1074e3804(&uStack_80,lVar7 + 0x1168);
      FUN_107413c78(lVar7 + 0x50,&uStack_80);
      FUN_1074137f8(lVar7 + 0x50,&puStack_60);
      if (*(char *)(lVar7 + 0x1164) == '\x01') {
        uStack_1090 = (undefined8 *)((ulong)uStack_1090 & 0xffffffffffffff00);
        func_0x0001074117a0();
        uStack_1030 = uStack_1030 & 0xffffffffffffff00;
        uStack_1028 = 0;
        FUN_107410058(lVar7,&uStack_1090);
      }
      lVar10 = *(long *)(lVar7 + 0x10f8);
      uVar5 = (undefined1)*(undefined8 *)(lVar10 + 8);
      func_0x0001077c5a6c();
      uStack_1090 = (undefined8 *)CONCAT71(uStack_1090._1_7_,uVar5);
      uStack_1090 = (undefined8 *)CONCAT44(*(undefined4 *)(lVar7 + 0x10d0),(undefined4)uStack_1090);
      uStack_1088 = CONCAT44(*(undefined4 *)(lVar7 + 0x10dc),*(undefined4 *)(lVar7 + 0x10d4));
      uStack_1080 = CONCAT71(uStack_1080._1_7_,*(undefined1 *)(lVar7 + 0x10e0));
      uStack_1078 = puStack_60;
      _memcpy(&ppuStack_1070,lVar7 + 0x58,0xe50);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_220,*(long *)(lVar10 + 8) + 0x90);
      lVar10 = *(long *)(*(long *)(lVar7 + 0x10f8) + 8);
      uStack_208 = *(undefined1 *)(lVar10 + 0x22);
      uStack_1f8 = *(undefined8 *)(lVar10 + 0x1a0);
      uStack_200 = *(undefined8 *)(lVar10 + 0x198);
      uStack_1e0 = (undefined1)*(undefined8 *)(lVar10 + 0x1b8);
      uStack_1df = (undefined7)((ulong)*(undefined8 *)(lVar10 + 0x1b8) >> 8);
      uStack_1e8 = (undefined1)*(undefined8 *)(lVar10 + 0x1b0);
      uStack_1e7 = (undefined7)((ulong)*(undefined8 *)(lVar10 + 0x1b0) >> 8);
      uStack_1f0 = (undefined1)*(undefined8 *)(lVar10 + 0x1a8);
      uStack_1ef = (undefined7)((ulong)*(undefined8 *)(lVar10 + 0x1a8) >> 8);
      FUN_107411660(auStack_1d8,*(long *)(*(long *)(lVar7 + 0x10f8) + 8) + 0x108);
      puVar8 = &uStack_1090;
      uVar21 = *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x10f8) + 8) + 400);
      lVar10 = *(long *)(*(long *)(lVar7 + 0x10f8) + 8);
      puVar20 = *(undefined8 **)(lVar10 + 0x1c0);
      lVar29 = puVar20[1];
      uVar24 = *puVar20;
      if (puVar20[1] != 0) {
        do {
          func_0x000107411734();
        } while (extraout_w11 != 0);
        func_0x0001074117c0();
        puVar8 = extraout_x8;
        lVar10 = extraout_x9;
      }
      lVar30 = *(long *)(lVar10 + 0xb0);
      uVar25 = *(undefined8 *)(lVar10 + 0xa8);
      if (*(long *)(lVar10 + 0xb0) != 0) {
        do {
          func_0x000107411734();
        } while (extraout_w11_00 != 0);
        func_0x0001074117c0();
        puVar8 = extraout_x8_00;
        lVar10 = extraout_x9_00;
      }
      lVar31 = *(long *)(lVar10 + 0xd8);
      uVar26 = *(undefined8 *)(lVar10 + 0xd0);
      if (*(long *)(lVar10 + 0xd8) != 0) {
        do {
          func_0x000107411734();
        } while (extraout_w11_01 != 0);
        func_0x0001074117c0();
        puVar8 = extraout_x8_01;
        lVar10 = extraout_x9_01;
      }
      lVar32 = *(long *)(lVar10 + 0x100);
      uVar27 = *(undefined8 *)(lVar10 + 0xf8);
      if (*(long *)(lVar10 + 0x100) != 0) {
        do {
          func_0x000107411734();
        } while (extraout_w11_02 != 0);
        func_0x0001074117c0();
        puVar8 = extraout_x8_02;
        lVar10 = extraout_x9_02;
      }
      uVar13 = *(undefined8 *)(lVar10 + 0x338);
      lVar14 = *(long *)(lVar10 + 0x340);
      if (lVar14 != 0) {
        do {
          func_0x000107411734();
        } while (extraout_w11_03 != 0);
        func_0x0001074117c0();
        puVar8 = extraout_x8_03;
        lVar10 = extraout_x9_03;
      }
      uVar15 = *(undefined8 *)(lVar10 + 0x348);
      lVar16 = *(long *)(lVar10 + 0x350);
      if (lVar16 != 0) {
        do {
          func_0x000107411734();
        } while (extraout_w11_04 != 0);
        func_0x0001074117c0();
        puVar8 = extraout_x8_04;
        lVar10 = extraout_x9_04;
      }
      uVar17 = *(undefined8 *)(lVar10 + 0x358);
      lVar18 = *(long *)(lVar10 + 0x360);
      if (lVar18 != 0) {
        do {
          func_0x000107411734();
        } while (extraout_w11_05 != 0);
        func_0x0001074117c0();
        puVar8 = extraout_x8_05;
        lVar10 = extraout_x9_05;
      }
      uVar19 = *(undefined8 *)(lVar10 + 0x368);
      lVar10 = *(long *)(lVar10 + 0x370);
      if (lVar10 != 0) {
        do {
          func_0x000107411734();
          puVar8 = extraout_x8_06;
        } while (extraout_w11_06 != 0);
      }
      uVar11 = *(undefined8 *)(lVar7 + 0x10e8);
      lVar12 = *(long *)(lVar7 + 0x10f0);
      if (lVar12 != 0) {
        do {
          func_0x000107411734();
          puVar8 = extraout_x8_07;
        } while (extraout_w11_07 != 0);
      }
      *(undefined1 *)(puVar8 + 0x1fb) = *(undefined1 *)(lVar7 + 0x1101);
      *(bool *)((long)puVar8 + 0xfd9) = *(long *)(lVar7 + 0x1108) != 0;
      *(undefined1 *)((long)puVar8 + 0xfda) = *(undefined1 *)(lVar7 + 0x10d8);
      uVar4 = uStack_78;
      uVar34 = uStack_80;
      uStack_9c = (undefined4)uStack_68;
      uStack_98 = (undefined4)((ulong)uStack_68 >> 0x20);
      uStack_a4 = (undefined4)uStack_70;
      uStack_a0 = (undefined4)((ulong)uStack_70 >> 0x20);
      uVar33 = *(undefined8 *)(lVar7 + 0x1118);
      uVar28 = *(undefined8 *)(lVar7 + 0x1110);
      if (*(long *)(lVar7 + 0x1118) != 0) {
        do {
          func_0x000107411724();
        } while (extraout_w10 != 0);
      }
      plVar6 = *(long **)(lVar7 + 0x38);
      puVar8 = (undefined8 *)0x1028;
      __Znwm();
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = &PTR_FUN_1109adf98;
      _memcpy(puVar8 + 3,&uStack_1090,0xe70);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (puVar8 + 0x1d1,auStack_220);
      puVar8[0x1d5] = uStack_200;
      puVar8[0x1d4] = CONCAT71(uStack_207,uStack_208);
      puVar8[0x1d7] = CONCAT71(uStack_1ef,uStack_1f0);
      puVar8[0x1d6] = uStack_1f8;
      *(ulong *)((long)puVar8 + 0xec1) = CONCAT17(uStack_1e0,uStack_1e7);
      *(ulong *)((long)puVar8 + 0xeb9) = CONCAT17(uStack_1e8,uStack_1ef);
      FUN_107411660(puVar8 + 0x1da,auStack_1d8);
      puVar8[0x1eb] = uVar21;
      puVar8[0x1ed] = lVar29;
      puVar8[0x1ec] = uVar24;
      if (lVar29 != 0) {
        do {
          func_0x000107411724();
        } while (extraout_w10_00 != 0);
      }
      puVar8[0x1ef] = lVar30;
      puVar8[0x1ee] = uVar25;
      if (lVar30 != 0) {
        do {
          func_0x000107411724();
        } while (extraout_w10_01 != 0);
      }
      puVar8[0x1f1] = lVar31;
      puVar8[0x1f0] = uVar26;
      if (lVar31 != 0) {
        do {
          func_0x000107411724();
        } while (extraout_w10_02 != 0);
      }
      puVar8[499] = lVar32;
      puVar8[0x1f2] = uVar27;
      if (lVar32 != 0) {
        do {
          func_0x000107411724();
        } while (extraout_w10_03 != 0);
      }
      puVar8[0x1f5] = lVar14;
      puVar8[500] = uVar13;
      if (lVar14 != 0) {
        do {
          func_0x000107411724();
        } while (extraout_w10_04 != 0);
      }
      puVar8[0x1f7] = lVar16;
      puVar8[0x1f6] = uVar15;
      if (lVar16 != 0) {
        do {
          func_0x000107411724();
        } while (extraout_w10_05 != 0);
      }
      puVar8[0x1f9] = lVar18;
      puVar8[0x1f8] = uVar17;
      if (lVar18 != 0) {
        do {
          func_0x000107411724();
        } while (extraout_w10_06 != 0);
      }
      puVar8[0x1fb] = lVar10;
      puVar8[0x1fa] = uVar19;
      if (lVar10 != 0) {
        plVar1 = (long *)(lVar10 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar8[0x1fd] = lVar12;
      puVar8[0x1fc] = uVar11;
      puVar8[0x1ff] = CONCAT44(uVar4,uStack_7c);
      puVar8[0x1fe] = CONCAT44(uVar34,uStack_b8);
      puVar8[0x201] = CONCAT44(uStack_9c,uStack_a0);
      puVar8[0x200] = CONCAT44(uStack_a4,uStack_74);
      *(undefined4 *)(puVar8 + 0x202) = uStack_98;
      puVar8[0x204] = uVar33;
      puVar8[0x203] = uVar28;
      puStack_10a0 = puVar8 + 3;
      puStack_1098 = puVar8;
      (**(code **)(*plVar6 + 0x20))(plVar6,&puStack_10a0);
      func_0x00010725ab14(&puStack_10a0);
      plVar6 = &uStack_1090;
      func_0x000107410df4(plVar6);
      return plVar6;
    }
  }
  else {
    puStack_60 = (undefined8 *)((ulong)puStack_60 & 0xffffffff00000000);
    ppuStack_58 = &PTR_DAT_1109a9890;
    plVar6 = *(long **)(unaff_x20 + 0x10);
    func_0x00010739f308();
    func_0x00010739f2f0();
    func_0x00010739f300();
    func_0x00010739f274(in_stack_ffffffffffffffc8);
    if ((bool)in_ZR) {
      return plVar6;
    }
  }
  ___stack_chk_fail();
  func_0x00010739f2f0();
  func_0x00010739f300();
  func_0x00010739f328();
  *plVar6 = (long)&PTR_DAT_1109a97b0;
  func_0x0001072bc968(plVar6 + 2);
  return plVar6;
}



/* Entry: 10739f01c; end: 10739f047;  */

undefined8 * FUN_10739f01c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109a97b0;
  func_0x0001072bc968(param_1 + 2);
  return param_1;
}



/* Entry: 10739f048; end: 10739f04f;  */

void FUN_10739f048(void)

{
  return;
}



/* Entry: 10739f050; end: 10739f073;  */

void FUN_10739f050(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_1109a9810;
  return;
}



/* Entry: 10739f074; end: 10739f097;  */

void FUN_10739f074(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109a9810;
  return;
}



/* Entry: 10739f098; end: 10739f0cf;  */

long FUN_10739f098(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109a9870);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10739f0d0; end: 10739f0e3;  */

undefined ** FUN_10739f0d0(void)

{
  return &PTR_DAT_1109a9870;
}



/* Entry: 10739f0e4; end: 10739f107;  */

void FUN_10739f0e4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_1109a9890;
  return;
}



/* Entry: 10739f108; end: 10739f12b;  */

void FUN_10739f108(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109a9890;
  return;
}



/* Entry: 10739f12c; end: 10739f163;  */

long FUN_10739f12c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109a98f0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10739f164; end: 10739f16f;  */

undefined ** FUN_10739f164(void)

{
  return &PTR_DAT_1109a98f0;
}



/* Entry: 10739f170; end: 10739f193;  */

undefined8 FUN_10739f170(undefined8 param_1)

{
  FUN_10739f194(param_1,0);
  return param_1;
}



/* Entry: 10739f194; end: 10739f1ab;  */

void FUN_10739f194(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10739b0e8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10739f1ac; end: 10739f1c7;  */

void FUN_10739f1ac(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10739b0e8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10739f1c8; end: 10739f1eb;  */

undefined8 FUN_10739f1c8(undefined8 param_1)

{
  FUN_10739f1ec(param_1,0);
  return param_1;
}



/* Entry: 10739f1ec; end: 10739f203;  */

void FUN_10739f1ec(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10739d1c8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10739f204; end: 10739f21f;  */

void FUN_10739f204(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10739d1c8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10739f220; end: 10739f247;  */

long FUN_10739f220(long param_1)

{
  FUN_10739f248();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10739f248; end: 10739f273;  */

void FUN_10739f248(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107250860();
  }
  *param_1 = 0;
  param_1[1] = 0;
  func_0x0001072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10739f274; end: 10739f353;  */

void FUN_10739f274(void)

{
  return;
}



/* Entry: 10739f354; end: 10739f38f;  */

void FUN_10739f354(long param_1)

{
  FUN_10739f390();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10739f390; end: 10739f3bb;  */

void FUN_10739f390(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_2[1] = 0;
  param_1[1] = uVar1;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *param_2 = 0;
  *(undefined1 *)(param_2 + 2) = 1;
  return;
}



/* Entry: 10739f3bc; end: 10739f913;  */

undefined8 *
FUN_10739f3bc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  undefined8 *puStack_340;
  undefined ***pppuStack_338;
  undefined8 uStack_330;
  undefined8 *puStack_328;
  undefined1 *puStack_320;
  code *pcStack_318;
  undefined1 auStack_310 [32];
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [32];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined1 *puStack_250;
  undefined8 *puStack_248;
  undefined1 *puStack_240;
  undefined8 *puStack_220;
  undefined *puStack_218;
  undefined **ppuStack_200;
  undefined8 *puStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 uStack_1b8;
  undefined1 auStack_1b0 [48];
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 auStack_160 [32];
  long lStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined1 *)((long)param_2 + 0x4c);
  func_0x00010002b838(&uStack_180,&UNK_10f40b49e);
  FUN_10739f92c(auStack_290,&uStack_180,uVar6);
  func_0x00010739fe58();
  if (*(byte *)((long)param_2 + 0x4c) < 0xb &&
      (1 << (ulong)(*(byte *)((long)param_2 + 0x4c) & 0x1f) & 0x4c3U) != 0) {
    func_0x000100060b18(auStack_2a8,&PTR_DAT_1109a9998);
  }
  else {
    func_0x00010002b838(auStack_2a8,"");
  }
  ppuStack_260 = (undefined **)0x0;
  ppuStack_258 = (undefined **)0x0;
  puVar9 = param_2 + 0xc;
  puStack_250 = (undefined1 *)0x0;
  while (puVar9 = (undefined8 *)*puVar9, puVar9 != (undefined8 *)0x0) {
    func_0x00010739fa0c(&uStack_180,puVar9 + 2,puVar9 + 5);
    func_0x00010739fe24();
    func_0x00010739fe58();
  }
  if (*(int *)(param_2 + 8) == 1) {
    func_0x00010002b838(&puStack_220,"format");
    func_0x00010002b838(&puStack_278,&UNK_10f40a5d1);
    func_0x00010739fe88();
    func_0x00010739fe24();
    func_0x00010739fe58();
    func_0x00010739fed4();
    func_0x00010739fea4();
  }
  if (*(char *)(param_2 + 9) == '\x01') {
    func_0x00010002b838(&puStack_220,&DAT_10f40b583);
    __ZNSt3__19to_stringEj(&puStack_278,*(undefined4 *)((long)param_2 + 0x44));
    func_0x00010739fe88();
    func_0x00010739fe24();
    func_0x00010739fe58();
    func_0x00010739fed4();
    func_0x00010739fea4();
  }
  if (ppuStack_260 == ppuStack_258) {
    func_0x00010002b838(auStack_2c0,"");
  }
  else {
    uStack_180 = ppuStack_260;
    ppuStack_178 = ppuStack_258;
    puStack_170 = &DAT_10f2e8297;
    uStack_168 = 1;
    puStack_220 = &uStack_180;
    puStack_218 = &UNK_1072ac1a8;
    func_0x0001003a91d4(&UNK_10f40b58a);
    func_0x0001003a9204(auStack_2c0);
  }
  func_0x0001000e30f4(&ppuStack_260);
  puVar9 = param_2 + 1;
  puStack_278 = &UNK_10f40b495;
  uStack_270 = 8;
  func_0x00010739fe44(&ppuStack_260);
  ppuStack_178 = (undefined **)auStack_160;
  uStack_168 = 0x100;
  puStack_170 = (undefined *)0x0;
  uStack_180 = &PTR_DAT_1109965d0;
  lStack_60 = 0;
  func_0x0001003a9984(&uStack_180,&UNK_10f40b495,8,0xdddd,&ppuStack_260,0);
  uVar2 = (long)puStack_170 + lStack_60;
  ppuStack_260 = &puStack_278;
  ppuStack_258 = (undefined **)auStack_290;
  puStack_250 = auStack_2a8;
  puStack_240 = auStack_2c0;
  uVar6 = uVar2 == 0x25;
  puStack_248 = puVar9;
  if (uVar2 < 0x26) {
    uStack_180 = (undefined **)
                 (CONCAT62((int6)((ulong)uStack_180 >> 0x10),(short)uVar2) & 0xffffffffff00ffff);
    *(undefined1 *)((long)&uStack_180 + 2 + uVar2) = 0;
    FUN_10739fd5c(&ppuStack_260,(long)&uStack_180 + 2,0x26);
    puStack_1f8 = ppuStack_178;
    ppuStack_200 = uStack_180;
    uStack_1e8 = uStack_168;
    lStack_1f0 = (long)puStack_170;
    uStack_1e0 = auStack_160[0];
    uStack_1d8 = 1;
    uStack_1d0 = 0xffffffffffffffff;
  }
  else {
    uVar6 = uVar2 == 0x51;
    if (uVar2 < 0x52) {
      func_0x000104c302d8(&uStack_180,0,0);
      *(short *)uStack_180 = (short)uVar2;
      *(undefined1 *)((long)uStack_180 + uVar2 + 2) = 0;
      FUN_10739fd5c(&ppuStack_260,(undefined2 *)((long)uStack_180 + 2),0x52);
      puStack_1f8 = ppuStack_178;
      ppuStack_200 = uStack_180;
      if (ppuStack_178 != (undefined **)0x0) {
        plVar1 = (long *)(ppuStack_178 + 1);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uStack_1d8 = 2;
      uStack_1d0 = 0xffffffffffffffff;
      func_0x000104c2f784(&uStack_180);
    }
    else {
      func_0x00010739fe44(&uStack_180);
      func_0x0001003a9204(&puStack_220,puStack_278,uStack_270,0xdddd,&uStack_180);
      func_0x0001072625b4(&ppuStack_200,&puStack_220);
      func_0x00010739fea4();
    }
  }
  uStack_1c8 = *param_2;
  uStack_1c0 = *(undefined4 *)(param_2 + 8);
  uStack_1bc = *(undefined4 *)((long)param_2 + 0x44);
  uStack_1b8 = *(undefined1 *)(param_2 + 9);
  uVar3 = *(undefined1 *)((long)param_2 + 0x4c);
  func_0x00010028af84(auStack_2e0,param_2 + 0x12);
  func_0x00010002b838(&ppuStack_260,&UNK_10f40b49e);
  func_0x00010028af84(&uStack_180,auStack_2e0);
  FUN_10739fa50(auStack_1b0,&ppuStack_260,uVar3,&uStack_180);
  func_0x0001001148fc(&uStack_180);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_260);
  uStack_2e8 = param_3[1];
  uStack_2f0 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  FUN_10732acd8(auStack_310,param_4);
  pppuVar8 = &ppuStack_200;
  FUN_10732ae9c(param_1,pppuVar8,&uStack_2f0,auStack_310);
  FUN_10732acdc(auStack_310);
  func_0x0001072aa2e8(&uStack_2f0);
  FUN_107331bd4(&ppuStack_200);
  func_0x0001001148fc(auStack_2e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_290);
  *param_1 = &PTR_FUN_1109a9910;
  func_0x00010739fefc(uStack_58);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    func_0x00010739fe98();
    func_0x000104c2f784();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2a8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_290);
    puVar7 = param_1;
    __Unwind_Resume();
    pcStack_318 = FUN_10739f914;
    *puVar7 = &PTR_FUN_1109a3570;
    puVar9 = puVar7 + 0x5d;
    uStack_330 = param_4;
    puStack_328 = param_1;
    puStack_320 = &stack0xfffffffffffffff0;
    FUN_10732b204();
    puStack_340 = puVar9;
    pppuStack_338 = pppuVar8;
    while (puStack_340 != (undefined8 *)0x0) {
      FUN_1073554b4(pppuStack_338[7]);
      FUN_10732b22c(&puStack_340);
    }
    func_0x00010725b238(puVar7 + 0x68);
    FUN_10732e4c0(puVar7 + 0x67);
    FUN_10732e514(puVar7 + 0x61);
    FUN_10732acdc(puVar7 + 0x5d);
    func_0x00010732e5a8(puVar7 + 0x31);
    func_0x00010724ae28(puVar7 + 0x2f);
    func_0x00010724b54c(puVar7 + 0x2c);
    FUN_10732b264(puVar7);
    return puVar7;
  }
  return param_1;
}



/* Entry: 10739f914; end: 10739f917;  */

void FUN_10739f914(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_30;
  long lStack_28;
  
  *param_1 = &PTR_FUN_1109a3570;
  puVar1 = param_1 + 0x5d;
  FUN_10732b204();
  puStack_30 = puVar1;
  lStack_28 = param_2;
  while (puStack_30 != (undefined8 *)0x0) {
    FUN_1073554b4(*(undefined8 *)(lStack_28 + 0x38));
    FUN_10732b22c(&puStack_30);
  }
  func_0x00010725b238(param_1 + 0x68);
  FUN_10732e4c0(param_1 + 0x67);
  FUN_10732e514(param_1 + 0x61);
  FUN_10732acdc(param_1 + 0x5d);
  func_0x00010732e5a8(param_1 + 0x31);
  func_0x00010724ae28(param_1 + 0x2f);
  func_0x00010724b54c(param_1 + 0x2c);
  FUN_10732b264(param_1);
  return;
}


