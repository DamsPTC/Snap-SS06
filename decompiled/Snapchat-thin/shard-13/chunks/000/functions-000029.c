/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109d9ba8c; end: 109d9bac7;  */

bool FUN_109d9ba8c(long *param_1,long param_2,uint param_3)

{
  bool bVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  uint uVar6;
  ulong uVar7;
  
  if ((int)param_1[4] != *(int *)(param_2 + 4)) {
    return false;
  }
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar7 = *(ulong *)(param_2 + -0x10);
    uVar6 = (uint)uVar7;
    if ((uVar6 >> 1 & 1) == 0) {
      if (uVar3 != (uVar6 >> 6 & 0xf) - param_3) {
        return false;
      }
      puVar5 = (ulong *)(param_2 + -0x10) + -(uVar7 >> 2 & 0xf);
    }
    else {
      if (uVar3 != *(int *)(param_2 + -0x18) - param_3) {
        return false;
      }
      puVar5 = *(ulong **)(param_2 + -0x20);
    }
    if (uVar3 == 0) {
      bVar1 = true;
    }
    else {
      lVar4 = uVar3 * 8;
      puVar2 = (ulong *)*param_1;
      puVar5 = puVar5 + param_3;
      do {
        lVar4 = lVar4 + -8;
        bVar1 = *puVar2 == *puVar5;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      } while (bVar1 && lVar4 != 0);
    }
    return bVar1;
  }
  uVar3 = param_1[3];
  uVar7 = *(ulong *)(param_2 + -0x10);
  uVar6 = (uint)uVar7;
  if ((uVar6 >> 1 & 1) == 0) {
    if (uVar3 != (uVar6 >> 6 & 0xf) - param_3) {
      return false;
    }
    puVar5 = (ulong *)(param_2 + -0x10) + -(uVar7 >> 2 & 0xf);
  }
  else {
    if (uVar3 != *(int *)(param_2 + -0x18) - param_3) {
      return false;
    }
    puVar5 = *(ulong **)(param_2 + -0x20);
  }
  if (uVar3 == 0) {
    bVar1 = true;
  }
  else {
    lVar4 = uVar3 * 8;
    puVar2 = (ulong *)param_1[2];
    puVar5 = puVar5 + param_3;
    do {
      lVar4 = lVar4 + -8;
      bVar1 = *puVar2 == *puVar5;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    } while (bVar1 && lVar4 != 0);
  }
  return bVar1;
}



/* Entry: 109d9bac8; end: 109d9bb23;  */

long * FUN_109d9bac8(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 * -8;
    lVar3 = (long)(plVar2 + uVar1);
    do {
      lVar3 = lVar3 + -8;
      FUN_109d33be0(lVar3);
      lVar4 = lVar4 + 8;
    } while (lVar4 != 0);
    plVar2 = (long *)*param_1;
  }
  if (plVar2 != param_1 + 2) {
    _free();
  }
  return param_1;
}



/* Entry: 109d9bb24; end: 109d9bbc3;  */

long * FUN_109d9bb24(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined4 auStack_38 [2];
  
  plVar2 = param_1;
  FUN_109dffb24(param_1,param_1 + 2,0,8,auStack_38);
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = *param_2;
  plVar2[uVar1] = lVar3;
  if (lVar3 != 0) {
    FUN_109d9464c(plVar2 + uVar1,lVar3,2);
  }
  func_0x000109d3b0a8(param_1,plVar2);
  if ((long *)*param_1 != param_1 + 2) {
    _free();
  }
  *param_1 = (long)plVar2;
  uVar1 = (int)param_1[1] + 1;
  *(uint *)(param_1 + 1) = uVar1;
  *(undefined4 *)((long)param_1 + 0xc) = auStack_38[0];
  return plVar2 + ((ulong)uVar1 - 1);
}



/* Entry: 109d9bbc4; end: 109d9bcab;  */

void FUN_109d9bbc4(long param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar2 = PTR___ZSt7nothrow_1103469d8;
  uVar5 = param_2 - param_1 >> 4;
  uVar6 = uVar5;
  if ((long)uVar5 < 1) {
    lVar3 = 0;
    uVar6 = 0;
  }
  else {
    do {
      lVar3 = uVar6 << 4;
      __ZnwmRKSt9nothrow_t(lVar3,puVar2);
      if (lVar3 != 0) goto LAB_109d9bc40;
      uVar4 = uVar6 >> 1;
      bVar1 = 1 < uVar6;
      uVar6 = uVar4;
    } while (bVar1);
    lVar3 = 0;
  }
LAB_109d9bc40:
  FUN_109d9bcac(param_1,param_2,param_3,uVar5,lVar3,uVar6);
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar3);
  return;
}



/* Entry: 109d9bcac; end: 109d9bf1f;  */

void FUN_109d9bcac(uint *param_1,uint *param_2,undefined8 param_3,ulong param_4,uint *param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  uint *puVar7;
  undefined8 uVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar18;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar19;
  uint *puVar20;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  ulong uVar21;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      uVar3 = *param_1;
      if (param_2[-4] < uVar3) {
        *param_1 = param_2[-4];
        param_2[-4] = uVar3;
        uVar8 = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)(param_2 + -2) = uVar8;
      }
    }
    else if ((long)param_4 < 1) {
      if ((param_1 != param_2) && (param_1 + 4 != param_2)) {
        lVar19 = 0;
        puVar7 = param_1 + 4;
        puVar11 = param_1;
        do {
          puVar10 = puVar7;
          uVar3 = puVar11[4];
          uVar16 = *puVar11;
          if (uVar3 < uVar16) {
            uVar8 = *(undefined8 *)(puVar11 + 6);
            lVar14 = lVar19;
            do {
              lVar9 = lVar14;
              *(uint *)((long)param_1 + lVar9 + 0x10) = uVar16;
              *(undefined8 *)((long)param_1 + lVar9 + 0x18) =
                   *(undefined8 *)((long)param_1 + lVar9 + 8);
              puVar7 = param_1;
              if (lVar9 == 0) goto LAB_109d9be24;
              uVar16 = *(uint *)((long)param_1 + lVar9 + -0x10);
              lVar14 = lVar9 + -0x10;
            } while (uVar3 < uVar16);
            puVar7 = (uint *)((long)param_1 + lVar9);
LAB_109d9be24:
            *puVar7 = uVar3;
            *(undefined8 *)(puVar7 + 2) = uVar8;
          }
          puVar7 = puVar10 + 4;
          lVar19 = lVar19 + 0x10;
          puVar11 = puVar10;
        } while (puVar7 != param_2);
      }
    }
    else {
      uVar21 = param_4 >> 1;
      puVar7 = param_1 + uVar21 * 4;
      lVar19 = param_4 - (param_4 >> 1);
      if (param_6 < (long)param_4) {
        FUN_109d9bcac();
        FUN_109d9bcac(puVar7,param_2,param_3,lVar19,param_5,param_6);
        while( true ) {
          if (lVar19 == 0) {
            return;
          }
          if (((long)uVar21 <= param_6) || (lVar19 <= param_6)) break;
          if (uVar21 == 0) {
            return;
          }
          lVar14 = 0;
          uVar3 = *puVar7;
          lVar9 = -uVar21;
          while (uVar16 = *(uint *)((long)param_1 + lVar14), uVar16 <= uVar3) {
            lVar14 = lVar14 + 0x10;
            bVar6 = lVar9 == -1;
            lVar9 = lVar9 + 1;
            if (bVar6) {
              return;
            }
          }
          puVar11 = (uint *)((long)param_1 + lVar14);
          if (-lVar9 < lVar19) {
            lVar18 = lVar19 / 2;
            puVar10 = puVar7 + lVar18 * 4;
            puVar20 = puVar11;
            if (puVar11 != puVar7) {
              uVar21 = (long)puVar7 + (-lVar14 - (long)param_1) >> 4;
              do {
                uVar17 = uVar21 >> 1;
                uVar15 = uVar21 + (uVar21 >> 1 ^ 0xffffffffffffffff);
                uVar21 = uVar17;
                if (puVar20[uVar17 * 4] <= *puVar10) {
                  uVar21 = uVar15;
                  puVar20 = puVar20 + uVar17 * 4 + 4;
                }
              } while (uVar21 != 0);
            }
            uVar21 = (long)puVar20 + (-lVar14 - (long)param_1) >> 4;
          }
          else {
            if (lVar9 == -1) {
              param_1 = (uint *)((long)param_1 + lVar14);
              *param_1 = uVar3;
              *puVar7 = uVar16;
              uVar8 = *(undefined8 *)(param_1 + 2);
              *(undefined8 *)(param_1 + 2) = *(undefined8 *)(puVar7 + 2);
              *(undefined8 *)(puVar7 + 2) = uVar8;
              return;
            }
            uVar21 = -lVar9 / 2;
            puVar20 = (uint *)((long)param_1 + lVar14 + uVar21 * 0x10);
            puVar10 = puVar7;
            if ((long)param_2 - (long)puVar7 != 0) {
              uVar15 = (long)param_2 - (long)puVar7 >> 4;
              puVar13 = puVar7;
              do {
                uVar17 = uVar15 >> 1;
                puVar10 = puVar13 + uVar17 * 4 + 4;
                uVar15 = uVar15 + (uVar15 >> 1 ^ 0xffffffffffffffff);
                if (*puVar20 <= puVar13[uVar17 * 4]) {
                  puVar10 = puVar13;
                  uVar15 = uVar17;
                }
                puVar13 = puVar10;
              } while (uVar15 != 0);
            }
            lVar18 = (long)puVar10 - (long)puVar7 >> 4;
          }
          param_1 = puVar10;
          if ((puVar20 != puVar7) && (param_1 = puVar20, puVar7 != puVar10)) {
            uVar16 = *puVar20;
            *puVar20 = uVar3;
            *puVar7 = uVar16;
            uVar8 = *(undefined8 *)(puVar20 + 2);
            *(undefined8 *)(puVar20 + 2) = *(undefined8 *)(puVar7 + 2);
            *(undefined8 *)(puVar7 + 2) = uVar8;
            puVar13 = puVar7;
            puVar5 = puVar20;
            while( true ) {
              param_1 = puVar5 + 4;
              puVar12 = puVar13 + 4;
              if (puVar12 == puVar10) break;
              puVar2 = puVar12;
              if (param_1 != puVar7) {
                puVar2 = puVar7;
              }
              uVar3 = *param_1;
              *param_1 = *puVar12;
              *puVar12 = uVar3;
              uVar8 = *(undefined8 *)(puVar5 + 6);
              *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(puVar13 + 6);
              *(undefined8 *)(puVar13 + 6) = uVar8;
              puVar7 = puVar2;
              puVar13 = puVar12;
              puVar5 = param_1;
            }
            puVar13 = param_1;
            puVar5 = puVar7;
            if (param_1 != puVar7) {
              do {
                while( true ) {
                  puVar12 = puVar5;
                  uVar3 = *puVar13;
                  *puVar13 = *puVar7;
                  *puVar7 = uVar3;
                  uVar8 = *(undefined8 *)(puVar13 + 2);
                  *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(puVar7 + 2);
                  *(undefined8 *)(puVar7 + 2) = uVar8;
                  puVar13 = puVar13 + 4;
                  puVar7 = puVar7 + 4;
                  if (puVar7 == puVar10) break;
                  puVar5 = puVar7;
                  if (puVar13 != puVar12) {
                    puVar5 = puVar12;
                  }
                }
                puVar7 = puVar12;
                puVar5 = puVar12;
              } while (puVar13 != puVar12);
            }
          }
          if ((long)(uVar21 + lVar18) < (long)((lVar19 - (uVar21 + lVar18)) - lVar9)) {
            FUN_109d9c110(puVar11,puVar20,param_1,uVar21,lVar18,param_5,param_6,param_8,unaff_x28,
                          unaff_x27,unaff_x26,unaff_x25,unaff_x24,unaff_x23,unaff_x22,unaff_x21,
                          unaff_x20,unaff_x19,unaff_x29,unaff_x30);
            uVar21 = -(uVar21 + lVar9);
            puVar7 = puVar10;
            lVar19 = lVar19 - lVar18;
          }
          else {
            FUN_109d9c110(param_1,puVar10,param_2,-(uVar21 + lVar9),lVar19 - lVar18,param_5,param_6,
                          param_8,unaff_x28,unaff_x27,unaff_x26,unaff_x25,unaff_x24,unaff_x23,
                          unaff_x22,unaff_x21,unaff_x20,unaff_x19,unaff_x29,unaff_x30);
            puVar7 = puVar20;
            lVar19 = lVar18;
            param_2 = param_1;
            param_1 = puVar11;
          }
        }
        if ((long)uVar21 <= lVar19) {
          puVar11 = param_1;
          puVar10 = param_5;
          if (param_1 == puVar7) {
            return;
          }
          do {
            puVar13 = puVar10;
            puVar20 = puVar11 + 4;
            uVar8 = *(undefined8 *)puVar11;
            *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(puVar11 + 2);
            *(undefined8 *)puVar13 = uVar8;
            puVar11 = puVar20;
            puVar10 = puVar13 + 4;
          } while (puVar20 != puVar7);
          do {
            if (puVar7 == param_2) {
              lVar19 = 0;
              do {
                puVar7 = (uint *)((long)param_5 + lVar19);
                *(uint *)((long)param_1 + lVar19) = *puVar7;
                *(undefined8 *)((uint *)((long)param_1 + lVar19) + 2) = *(undefined8 *)(puVar7 + 2);
                lVar19 = lVar19 + 0x10;
              } while (puVar13 != puVar7);
              return;
            }
            uVar3 = *puVar7;
            uVar16 = *param_5;
            puVar11 = param_5;
            uVar4 = uVar16;
            if (uVar3 < uVar16) {
              puVar11 = puVar7;
              uVar4 = uVar3;
            }
            uVar8 = *(undefined8 *)(puVar11 + 2);
            puVar11 = param_5 + 4;
            if (uVar3 < uVar16) {
              puVar7 = puVar7 + 4;
              puVar11 = param_5;
            }
            param_5 = puVar11;
            *param_1 = uVar4;
            *(undefined8 *)(param_1 + 2) = uVar8;
            param_1 = param_1 + 4;
          } while (puVar13 + 4 != param_5);
          return;
        }
        if (puVar7 == param_2) {
          return;
        }
        lVar19 = 0;
        do {
          uVar8 = *(undefined8 *)((long)puVar7 + lVar19);
          ((undefined8 *)((long)param_5 + lVar19))[1] = ((undefined8 *)((long)puVar7 + lVar19))[1];
          *(undefined8 *)((long)param_5 + lVar19) = uVar8;
          lVar19 = lVar19 + 0x10;
        } while ((uint *)((long)puVar7 + lVar19) != param_2);
        puVar11 = (uint *)((long)param_5 + lVar19);
        puVar10 = param_2 + -2;
        do {
          if (puVar7 == param_1) {
            while (puVar11 != param_5) {
              puVar10[-2] = puVar11[-4];
              *(undefined8 *)puVar10 = *(undefined8 *)(puVar11 + -2);
              puVar10 = puVar10 + -4;
              puVar11 = puVar11 + -4;
            }
            return;
          }
          uVar3 = puVar7[-4];
          uVar16 = puVar11[-4];
          puVar20 = puVar7 + -4;
          uVar4 = uVar3;
          if (uVar3 <= uVar16) {
            puVar20 = puVar7;
            puVar7 = puVar11;
            uVar4 = uVar16;
          }
          uVar8 = *(undefined8 *)(puVar7 + -2);
          if (uVar3 <= uVar16) {
            puVar11 = puVar11 + -4;
          }
          puVar10[-2] = uVar4;
          *(undefined8 *)puVar10 = uVar8;
          puVar7 = puVar20;
          puVar10 = puVar10 + -4;
        } while (puVar11 != param_5);
        return;
      }
      FUN_109d9bf20(param_1,puVar7,param_3,uVar21);
      puVar11 = param_5 + uVar21 * 4;
      FUN_109d9bf20(puVar7,param_2,param_3,lVar19,puVar11);
      puVar7 = param_5 + param_4 * 4;
      puVar10 = puVar11;
      do {
        if (puVar10 == puVar7) {
          if (param_5 == puVar11) {
            return;
          }
          lVar19 = 0;
          do {
            puVar1 = (undefined4 *)((long)param_5 + lVar19);
            *(undefined4 *)((long)param_1 + lVar19) = *puVar1;
            *(undefined8 *)((undefined4 *)((long)param_1 + lVar19) + 2) =
                 *(undefined8 *)(puVar1 + 2);
            lVar19 = lVar19 + 0x10;
          } while (puVar1 + 4 != puVar11);
          return;
        }
        uVar3 = *puVar10;
        uVar16 = *param_5;
        puVar20 = param_5;
        uVar4 = uVar16;
        if (uVar3 < uVar16) {
          puVar20 = puVar10;
          uVar4 = uVar3;
        }
        uVar8 = *(undefined8 *)(puVar20 + 2);
        puVar20 = param_5 + 4;
        if (uVar3 < uVar16) {
          puVar10 = puVar10 + 4;
          puVar20 = param_5;
        }
        param_5 = puVar20;
        *param_1 = uVar4;
        *(undefined8 *)(param_1 + 2) = uVar8;
        param_1 = param_1 + 4;
      } while (param_5 != puVar11);
      if (puVar10 != puVar7) {
        lVar19 = 0;
        do {
          puVar1 = (undefined4 *)((long)puVar10 + lVar19);
          *(undefined4 *)((long)param_1 + lVar19) = *puVar1;
          *(undefined8 *)((undefined4 *)((long)param_1 + lVar19) + 2) = *(undefined8 *)(puVar1 + 2);
          lVar19 = lVar19 + 0x10;
        } while (puVar1 + 4 != puVar7);
      }
    }
  }
  return;
}



/* Entry: 109d9bf20; end: 109d9c10f;  */

void FUN_109d9bf20(uint *param_1,uint *param_2,undefined8 param_3,ulong param_4,uint *param_5)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_4 != 0) {
    if (param_4 == 2) {
      puVar3 = param_2 + -4;
      if (*puVar3 < *param_1) {
        uVar8 = *(undefined8 *)puVar3;
        *(undefined8 *)(param_5 + 2) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)param_5 = uVar8;
        uVar9 = *(undefined8 *)(param_1 + 2);
        uVar8 = *(undefined8 *)param_1;
      }
      else {
        uVar8 = *(undefined8 *)param_1;
        *(undefined8 *)(param_5 + 2) = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)param_5 = uVar8;
        uVar9 = *(undefined8 *)(param_2 + -2);
        uVar8 = *(undefined8 *)puVar3;
      }
      *(undefined8 *)(param_5 + 6) = uVar9;
      *(undefined8 *)(param_5 + 4) = uVar8;
    }
    else if (param_4 == 1) {
      uVar8 = *(undefined8 *)param_1;
      *(undefined8 *)(param_5 + 2) = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)param_5 = uVar8;
    }
    else if ((long)param_4 < 9) {
      if (param_1 != param_2) {
        uVar8 = *(undefined8 *)param_1;
        *(undefined8 *)(param_5 + 2) = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)param_5 = uVar8;
        if (param_1 + 4 != param_2) {
          lVar1 = 0;
          puVar3 = param_5;
          puVar2 = param_1 + 4;
          do {
            puVar6 = puVar2;
            puVar2 = puVar3 + 4;
            if (param_1[4] < *puVar3) {
              *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(puVar3 + 2);
              *(undefined8 *)puVar2 = *(undefined8 *)puVar3;
              puVar4 = param_5;
              lVar5 = lVar1;
              if (puVar3 != param_5) {
                do {
                  puVar4 = (uint *)((long)param_5 + lVar5);
                  if (puVar4[-4] <= *puVar6) break;
                  *puVar4 = puVar4[-4];
                  *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(puVar4 + -2);
                  lVar5 = lVar5 + -0x10;
                  puVar4 = param_5;
                } while (lVar5 != 0);
              }
              *puVar4 = *puVar6;
              *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(param_1 + 6);
            }
            else {
              uVar8 = *(undefined8 *)puVar6;
              *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(puVar6 + 2);
              *(undefined8 *)puVar2 = uVar8;
            }
            lVar1 = lVar1 + 0x10;
            puVar3 = puVar2;
            puVar2 = puVar6 + 4;
            param_1 = puVar6;
          } while (puVar6 + 4 != param_2);
        }
      }
    }
    else {
      uVar7 = param_4 >> 1;
      puVar3 = param_1 + uVar7 * 4;
      FUN_109d9bcac(param_1,puVar3,param_3,uVar7,param_5,uVar7);
      lVar1 = param_4 - (param_4 >> 1);
      FUN_109d9bcac(puVar3,param_2,param_3,lVar1,param_5 + uVar7 * 4,lVar1);
      puVar2 = puVar3;
      do {
        if (puVar2 == param_2) {
          for (; param_1 != puVar3; param_1 = param_1 + 4) {
            uVar8 = *(undefined8 *)param_1;
            *(undefined8 *)(param_5 + 2) = *(undefined8 *)(param_1 + 2);
            *(undefined8 *)param_5 = uVar8;
            param_5 = param_5 + 4;
          }
          return;
        }
        if (*puVar2 < *param_1) {
          uVar9 = *(undefined8 *)(puVar2 + 2);
          uVar8 = *(undefined8 *)puVar2;
          puVar2 = puVar2 + 4;
          puVar6 = param_1;
        }
        else {
          puVar6 = param_1 + 4;
          uVar9 = *(undefined8 *)(param_1 + 2);
          uVar8 = *(undefined8 *)param_1;
        }
        *(undefined8 *)(param_5 + 2) = uVar9;
        *(undefined8 *)param_5 = uVar8;
        puVar4 = param_5 + 4;
        param_5 = param_5 + 4;
        param_1 = puVar6;
      } while (puVar6 != puVar3);
      for (; puVar2 != param_2; puVar2 = puVar2 + 4) {
        uVar8 = *(undefined8 *)puVar2;
        *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(puVar2 + 2);
        *(undefined8 *)puVar4 = uVar8;
        puVar4 = puVar4 + 4;
      }
    }
  }
  return;
}



/* Entry: 109d9c110; end: 109d9c51b;  */

void FUN_109d9c110(uint *param_1,uint *param_2,uint *param_3,long param_4,long param_5,uint *param_6
                  ,long param_7)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  uint *puVar18;
  
  while( true ) {
    if (param_5 == 0) {
      return;
    }
    if ((param_4 <= param_7) || (param_5 <= param_7)) break;
    if (param_4 == 0) {
      return;
    }
    lVar13 = 0;
    uVar2 = *param_2;
    lVar7 = -param_4;
    while (uVar3 = *(uint *)((long)param_1 + lVar13), uVar3 <= uVar2) {
      lVar13 = lVar13 + 0x10;
      bVar6 = lVar7 == -1;
      lVar7 = lVar7 + 1;
      if (bVar6) {
        return;
      }
    }
    puVar9 = (uint *)((long)param_1 + lVar13);
    if (-lVar7 < param_5) {
      lVar17 = param_5 / 2;
      puVar8 = param_2 + lVar17 * 4;
      puVar18 = puVar9;
      if (puVar9 != param_2) {
        uVar14 = (long)param_2 + (-lVar13 - (long)param_1) >> 4;
        do {
          uVar16 = uVar14 >> 1;
          uVar15 = uVar14 + (uVar14 >> 1 ^ 0xffffffffffffffff);
          uVar14 = uVar16;
          if (puVar18[uVar16 * 4] <= *puVar8) {
            uVar14 = uVar15;
            puVar18 = puVar18 + uVar16 * 4 + 4;
          }
        } while (uVar14 != 0);
      }
      param_4 = (long)puVar18 + (-lVar13 - (long)param_1) >> 4;
    }
    else {
      if (lVar7 == -1) {
        param_1 = (uint *)((long)param_1 + lVar13);
        *param_1 = uVar2;
        *param_2 = uVar3;
        uVar10 = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)(param_2 + 2) = uVar10;
        return;
      }
      param_4 = -lVar7 / 2;
      puVar18 = (uint *)((long)param_1 + lVar13 + param_4 * 0x10);
      puVar8 = param_2;
      if ((long)param_3 - (long)param_2 != 0) {
        uVar14 = (long)param_3 - (long)param_2 >> 4;
        puVar12 = param_2;
        do {
          uVar15 = uVar14 >> 1;
          puVar8 = puVar12 + uVar15 * 4 + 4;
          uVar14 = uVar14 + (uVar14 >> 1 ^ 0xffffffffffffffff);
          if (*puVar18 <= puVar12[uVar15 * 4]) {
            puVar8 = puVar12;
            uVar14 = uVar15;
          }
          puVar12 = puVar8;
        } while (uVar14 != 0);
      }
      lVar17 = (long)puVar8 - (long)param_2 >> 4;
    }
    param_1 = puVar8;
    if ((puVar18 != param_2) && (param_1 = puVar18, param_2 != puVar8)) {
      uVar3 = *puVar18;
      *puVar18 = uVar2;
      *param_2 = uVar3;
      uVar10 = *(undefined8 *)(puVar18 + 2);
      *(undefined8 *)(puVar18 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_2 + 2) = uVar10;
      puVar12 = param_2;
      puVar5 = puVar18;
      while( true ) {
        param_1 = puVar5 + 4;
        puVar11 = puVar12 + 4;
        if (puVar11 == puVar8) break;
        puVar1 = puVar11;
        if (param_1 != param_2) {
          puVar1 = param_2;
        }
        uVar2 = *param_1;
        *param_1 = *puVar11;
        *puVar11 = uVar2;
        uVar10 = *(undefined8 *)(puVar5 + 6);
        *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(puVar12 + 6);
        *(undefined8 *)(puVar12 + 6) = uVar10;
        param_2 = puVar1;
        puVar12 = puVar11;
        puVar5 = param_1;
      }
      puVar12 = param_1;
      puVar5 = param_2;
      if (param_1 != param_2) {
        do {
          while( true ) {
            puVar11 = puVar5;
            uVar2 = *puVar12;
            *puVar12 = *param_2;
            *param_2 = uVar2;
            uVar10 = *(undefined8 *)(puVar12 + 2);
            *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(param_2 + 2);
            *(undefined8 *)(param_2 + 2) = uVar10;
            puVar12 = puVar12 + 4;
            param_2 = param_2 + 4;
            if (param_2 == puVar8) break;
            puVar5 = param_2;
            if (puVar12 != puVar11) {
              puVar5 = puVar11;
            }
          }
          param_2 = puVar11;
          puVar5 = puVar11;
        } while (puVar12 != puVar11);
      }
    }
    if (param_4 + lVar17 < (param_5 - (param_4 + lVar17)) - lVar7) {
      FUN_109d9c110(puVar9,puVar18,param_1,param_4,lVar17,param_6,param_7);
      param_5 = param_5 - lVar17;
      param_4 = -(param_4 + lVar7);
      param_2 = puVar8;
    }
    else {
      FUN_109d9c110(param_1,puVar8,param_3,-(param_4 + lVar7),param_5 - lVar17,param_6,param_7);
      param_5 = lVar17;
      param_3 = param_1;
      param_2 = puVar18;
      param_1 = puVar9;
    }
  }
  if (param_4 <= param_5) {
    puVar9 = param_1;
    puVar8 = param_6;
    if (param_1 == param_2) {
      return;
    }
    do {
      puVar12 = puVar8;
      puVar18 = puVar9 + 4;
      uVar10 = *(undefined8 *)puVar9;
      *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar9 + 2);
      *(undefined8 *)puVar12 = uVar10;
      puVar9 = puVar18;
      puVar8 = puVar12 + 4;
    } while (puVar18 != param_2);
    do {
      if (param_2 == param_3) {
        lVar13 = 0;
        do {
          puVar9 = (uint *)((long)param_6 + lVar13);
          *(uint *)((long)param_1 + lVar13) = *puVar9;
          *(undefined8 *)((uint *)((long)param_1 + lVar13) + 2) = *(undefined8 *)(puVar9 + 2);
          lVar13 = lVar13 + 0x10;
        } while (puVar12 != puVar9);
        return;
      }
      uVar2 = *param_2;
      uVar3 = *param_6;
      puVar9 = param_6;
      uVar4 = uVar3;
      if (uVar2 < uVar3) {
        puVar9 = param_2;
        uVar4 = uVar2;
      }
      uVar10 = *(undefined8 *)(puVar9 + 2);
      puVar9 = param_6 + 4;
      if (uVar2 < uVar3) {
        param_2 = param_2 + 4;
        puVar9 = param_6;
      }
      param_6 = puVar9;
      *param_1 = uVar4;
      *(undefined8 *)(param_1 + 2) = uVar10;
      param_1 = param_1 + 4;
    } while (puVar12 + 4 != param_6);
    return;
  }
  if (param_2 == param_3) {
    return;
  }
  lVar13 = 0;
  do {
    uVar10 = *(undefined8 *)((long)param_2 + lVar13);
    ((undefined8 *)((long)param_6 + lVar13))[1] = ((undefined8 *)((long)param_2 + lVar13))[1];
    *(undefined8 *)((long)param_6 + lVar13) = uVar10;
    lVar13 = lVar13 + 0x10;
  } while ((uint *)((long)param_2 + lVar13) != param_3);
  puVar9 = (uint *)((long)param_6 + lVar13);
  puVar8 = param_3 + -2;
  do {
    if (param_2 == param_1) {
      while (puVar9 != param_6) {
        puVar8[-2] = puVar9[-4];
        *(undefined8 *)puVar8 = *(undefined8 *)(puVar9 + -2);
        puVar8 = puVar8 + -4;
        puVar9 = puVar9 + -4;
      }
      return;
    }
    uVar2 = param_2[-4];
    uVar3 = puVar9[-4];
    puVar18 = param_2 + -4;
    uVar4 = uVar2;
    if (uVar2 <= uVar3) {
      puVar18 = param_2;
      param_2 = puVar9;
      uVar4 = uVar3;
    }
    uVar10 = *(undefined8 *)(param_2 + -2);
    if (uVar2 <= uVar3) {
      puVar9 = puVar9 + -4;
    }
    puVar8[-2] = uVar4;
    *(undefined8 *)puVar8 = uVar10;
    param_2 = puVar18;
    puVar8 = puVar8 + -4;
  } while (puVar9 != param_6);
  return;
}



/* Entry: 109d9c51c; end: 109d9c57f;  */

ulong FUN_109d9c51c(ulong *param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((ulong)*(uint *)((long)param_1 + 0xc) < param_3 + (ulong)(uint)param_1[1]) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (ulong)(uint)param_1[1] * 0x10;
    if ((param_2 >= uVar2 && param_2 <= uVar1) && (param_2 < uVar2 || uVar1 != param_2)) {
      FUN_109d9c580();
      param_2 = *param_1 + (param_2 - uVar2);
    }
    else {
      FUN_109d9c580();
    }
  }
  return param_2;
}



/* Entry: 109d9c580; end: 109d9c5ef;  */

void FUN_109d9c580(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 auStack_38 [2];
  
  plVar1 = param_1;
  FUN_109dffb24(param_1,param_1 + 2,param_2,0x10,auStack_38);
  FUN_109d9c5f0(param_1,plVar1);
  if ((long *)*param_1 != param_1 + 2) {
    _free();
  }
  *param_1 = (long)plVar1;
  *(undefined4 *)((long)param_1 + 0xc) = auStack_38[0];
  return;
}



/* Entry: 109d9c5f0; end: 109d9c647;  */

void FUN_109d9c5f0(long *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  FUN_109d9c648(*param_1,*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x10,param_2);
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    lVar2 = *param_1 + (ulong)uVar1 * 0x10 + -8;
    lVar3 = (ulong)uVar1 * -0x10;
    do {
      FUN_109d33be0(lVar2);
      lVar2 = lVar2 + -0x10;
      lVar3 = lVar3 + 0x10;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 109d9c648; end: 109d9c703;  */

void FUN_109d9c648(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  long *plVar2;
  
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_3 = *param_1;
    plVar2 = (long *)(param_1 + 2);
    lVar1 = *plVar2;
    *(long *)(param_3 + 2) = lVar1;
    if (lVar1 != 0) {
      FUN_109d947e4(plVar2);
      *plVar2 = 0;
    }
    param_3 = param_3 + 4;
  }
  return;
}



/* Entry: 109d9c704; end: 109d9c7bf;  */

undefined4 * FUN_109d9c704(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  lVar1 = *param_1;
  uVar2 = (ulong)*(uint *)(param_1 + 1);
  puVar3 = (undefined4 *)(lVar1 + uVar2 * 0x10);
  puVar4 = param_2;
  puVar5 = param_2;
  if (puVar3 != param_3) {
    do {
      puVar6 = param_3 + 4;
      puVar5 = puVar4 + 4;
      *puVar4 = *param_3;
      FUN_109d34054(puVar4 + 2,param_3 + 2);
      puVar4 = puVar5;
      param_3 = puVar6;
    } while (puVar6 != puVar3);
    lVar1 = *param_1;
    uVar2 = (ulong)*(uint *)(param_1 + 1);
  }
  puVar3 = (undefined4 *)(lVar1 + uVar2 * 0x10);
  if (puVar3 != puVar5) {
    do {
      puVar4 = puVar3 + -4;
      FUN_109d33be0(puVar3 + -2);
      puVar3 = puVar4;
    } while (puVar4 != puVar5);
    lVar1 = *param_1;
  }
  *(int *)(param_1 + 1) = (int)((ulong)((long)puVar5 - lVar1) >> 4);
  return param_2;
}



/* Entry: 109d9c7c0; end: 109d9c82f;  */

undefined8 * FUN_109d9c7c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109d9c830(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_109d9c8cc(param_1,param_2,param_2);
    uVar2 = *param_2;
    param_1[3] = 0;
    param_1[4] = 0;
    *param_1 = uVar2;
    param_1[1] = param_1 + 3;
    param_1[2] = 0x100000000;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109d9c830; end: 109d9c8cb;  */

undefined8 FUN_109d9c830(long *param_1,ulong *param_2,long *param_3)

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
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x28);
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
          goto LAB_109d9c874;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x28);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109d9c874:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109d9c8cc; end: 109d9c973;  */

long * FUN_109d9c8cc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d9c918;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d9c974(param_1,uVar1);
  FUN_109d9c830(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d9c918:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d9c974; end: 109d9cba7;  */

void FUN_109d9c974(undefined8 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puStack_68;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar12 = (ulong *)*param_1;
  uVar3 = param_2 - 1U | param_2 - 1U >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar11 = 0x40;
  if (0x40 < uVar3 + 1) {
    uVar11 = uVar3 + 1;
  }
  *(uint *)(param_1 + 2) = uVar11;
  puVar5 = (undefined8 *)((ulong)uVar11 * 0x28);
  __ZnwmSt11align_val_t(puVar5,8);
  *param_1 = puVar5;
  if (puVar12 != (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar9 = (ulong)*(uint *)(param_1 + 2) * 0x28;
      do {
        *puVar5 = 0xfffffffffffff000;
        lVar9 = lVar9 + -0x28;
        puVar5 = puVar5 + 5;
      } while (lVar9 != 0);
    }
    if (uVar1 != 0) {
      puVar13 = puVar12;
      do {
        if ((*puVar13 | 0x1000) != 0xfffffffffffff000) {
          FUN_109d9c830(param_1,puVar13,&puStack_68);
          puVar4 = puStack_68;
          *puStack_68 = *puVar13;
          puVar8 = puStack_68 + 3;
          puVar14 = puStack_68 + 1;
          *puVar14 = (ulong)puVar8;
          puStack_68[2] = 0x100000000;
          uVar11 = (uint)puVar13[2];
          if (puStack_68 != puVar13 && uVar11 != 0) {
            puVar6 = (ulong *)puVar13[1];
            if (puVar6 == puVar13 + 3) {
              if (uVar11 < 2) {
                uVar10 = 1;
              }
              else {
                *(undefined4 *)(puStack_68 + 2) = 0;
                FUN_109d9c580(puVar14,uVar11);
                puVar6 = (ulong *)puVar13[1];
                uVar10 = (ulong)(uint)puVar13[2];
                puVar8 = (ulong *)*puVar14;
              }
              FUN_109d9c648(puVar6,puVar6 + uVar10 * 2,puVar8);
              *(uint *)(puVar4 + 2) = uVar11;
              uVar11 = (uint)puVar13[2];
              if (uVar11 != 0) {
                lVar7 = puVar13[1] + (ulong)uVar11 * 0x10 + -8;
                lVar9 = (ulong)uVar11 * -0x10;
                do {
                  FUN_109d33be0(lVar7);
                  lVar7 = lVar7 + -0x10;
                  lVar9 = lVar9 + 0x10;
                } while (lVar9 != 0);
              }
            }
            else {
              puStack_68[1] = (ulong)puVar6;
              uVar2 = *(undefined4 *)((long)puVar13 + 0x14);
              *(uint *)(puStack_68 + 2) = uVar11;
              *(undefined4 *)((long)puStack_68 + 0x14) = uVar2;
              puVar13[1] = (ulong)(puVar13 + 3);
              *(undefined4 *)((long)puVar13 + 0x14) = 0;
            }
            *(undefined4 *)(puVar13 + 2) = 0;
          }
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
          func_0x000109d92ba8(puVar13 + 1);
        }
        puVar13 = puVar13 + 5;
      } while (puVar13 != puVar12 + (ulong)uVar1 * 5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar12,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar9 = (ulong)*(uint *)(param_1 + 2) * 0x28;
    do {
      *puVar5 = 0xfffffffffffff000;
      lVar9 = lVar9 + -0x28;
      puVar5 = puVar5 + 5;
    } while (lVar9 != 0);
  }
  return;
}



/* Entry: 109d9cba8; end: 109d9cc33;  */

undefined8 FUN_109d9cba8(long param_1,int param_2,long param_3,long *param_4)

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
          goto LAB_109d9cbdc;
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
LAB_109d9cbdc:
  *param_4 = (long)plVar4;
  return uVar3;
}



/* Entry: 109d9cc34; end: 109d9cdc7;  */

void FUN_109d9cc34(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puStack_58;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar6 = *param_1;
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
  *param_1 = (long)puVar3;
  if (lVar6 != 0) {
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
      lVar7 = (ulong)uVar1 << 5;
      lVar4 = lVar6 + 0x18;
      do {
        if ((*(ulong *)(lVar4 + -0x18) | 0x1000) != 0xfffffffffffff000) {
          FUN_109d9cba8(*param_1,(int)param_1[2],*(ulong *)(lVar4 + -0x18),&puStack_58);
          *puStack_58 = *(undefined8 *)(lVar4 + -0x18);
          puStack_58[1] = puStack_58 + 3;
          puStack_58[2] = 0x100000000;
          if (*(int *)(lVar4 + -8) != 0) {
            FUN_109d32cdc(puStack_58 + 1,lVar4 + -0x10);
          }
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
          if (lVar4 != *(long *)(lVar4 + -0x10)) {
            _free();
          }
        }
        lVar4 = lVar4 + 0x20;
        lVar7 = lVar7 + -0x20;
      } while (lVar7 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar6 = (ulong)*(uint *)(param_1 + 2) << 5;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar6 = lVar6 + -0x20;
      puVar3 = puVar3 + 4;
    } while (lVar6 != 0);
  }
  return;
}



/* Entry: 109d9cdc8; end: 109d9ceb7;  */

long FUN_109d9cdc8(long param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  param_2[5] = 0;
  if (((*(byte *)((long)param_2 + 0x17) >> 4 & 1) != 0) &&
     (plVar4 = *(long **)(param_1 + 0x68), plVar4 != (long *)0x0)) {
    func_0x000109da271c();
    plVar2 = plVar4;
    FUN_109e03610(plVar4,(long)param_2 + (ulong)*(uint *)((long)plVar4 + 0x14),*param_2);
    iVar1 = (int)plVar2;
    if (iVar1 == -1) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*plVar4 + (long)iVar1 * 8);
      *(undefined8 *)(*plVar4 + (long)iVar1 * 8) = 0xfffffffffffffff8;
      *(ulong *)((long)plVar4 + 0xc) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)plVar4 + 0xc) >> 0x20) + 1,
                    (int)*(undefined8 *)((long)plVar4 + 0xc) + -1);
    }
    return lVar3;
  }
  return param_1;
}



/* Entry: 109d9ceb8; end: 109d9d1b7;  */

undefined8 * FUN_109d9ceb8(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 auStack_78 [24];
  
  *param_1 = param_4;
  param_1[1] = param_1 + 1;
  param_1[2] = param_1 + 1;
  param_1[3] = param_1 + 3;
  param_1[4] = param_1 + 3;
  param_1[5] = param_1 + 5;
  param_1[6] = param_1 + 5;
  param_1[7] = param_1 + 7;
  param_1[8] = param_1 + 7;
  param_1[9] = param_1 + 9;
  param_1[10] = param_1 + 9;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *(undefined4 *)(puVar2 + 2) = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  *(undefined8 *)((long)puVar2 + 0x14) = 0xffffffff00000010;
  *(undefined4 *)((long)puVar2 + 0x1c) = 0;
  param_1[0xf] = 0;
  param_1[0xe] = puVar2;
  param_1[0x10] = 0;
  param_1[0x11] = 0x4800000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000104c4f6b8();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109d9d0b8);
    (*pcVar1)();
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0xb7) = (char)param_3;
    if (param_3 == 0) {
      *(undefined1 *)(param_1 + 0x14) = 0;
      puVar2 = param_1 + 0x17;
      *(undefined1 *)((long)param_1 + 0xcf) = 0;
      goto LAB_109d9d014;
    }
    _memmove(param_1 + 0x14,param_2,param_3);
    *(undefined1 *)((long)(param_1 + 0x14) + param_3) = 0;
    puVar2 = param_1 + 0x17;
    *(char *)((long)param_1 + 0xcf) = (char)param_3;
  }
  else {
    puVar2 = (undefined8 *)0x19;
    if ((param_3 | 7) != 0x17) {
      puVar2 = (undefined8 *)((param_3 | 7) + 1);
    }
    puVar3 = puVar2;
    __Znwm();
    uVar4 = (ulong)puVar2 | 0x8000000000000000;
    param_1[0x15] = param_3;
    param_1[0x16] = uVar4;
    param_1[0x14] = puVar3;
    _memmove();
    *(undefined1 *)((long)puVar3 + param_3) = 0;
    __Znwm();
    param_1[0x17] = puVar2;
    param_1[0x18] = param_3;
    param_1[0x19] = uVar4;
  }
  _memmove(puVar2,param_2,param_3);
LAB_109d9d014:
  *(undefined1 *)((long)puVar2 + param_3) = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 0x10;
  FUN_109d73510(param_1 + 0x20,"",0);
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x58] = 0x1000000000;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  func_0x000109d8de28(auStack_78,*(undefined8 *)*param_1,param_1);
  return param_1;
}



/* Entry: 109d9d1b8; end: 109d9d3e7;  */

undefined8 * FUN_109d9d1b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_109d31ef4(*(undefined8 *)*param_1,param_1);
  puVar1 = param_1 + 3;
  for (puVar3 = (undefined8 *)param_1[4]; puVar3 != puVar1; puVar3 = (undefined8 *)puVar3[1]) {
    FUN_109d8517c(puVar3 + -7);
  }
  puVar3 = param_1 + 1;
  for (puVar4 = (undefined8 *)param_1[2]; puVar4 != puVar3; puVar4 = (undefined8 *)puVar4[1]) {
    func_0x000109d34fec(puVar4 + -7);
    FUN_109d97d98(puVar4 + -7);
  }
  puVar4 = param_1 + 5;
  for (puVar5 = (undefined8 *)param_1[6]; puVar5 != puVar4; puVar5 = (undefined8 *)puVar5[1]) {
    func_0x000109d34fec(puVar5 + -6);
  }
  puVar5 = param_1 + 7;
  for (puVar6 = (undefined8 *)param_1[8]; puVar6 != puVar5; puVar6 = (undefined8 *)puVar6[1]) {
    func_0x000109d34fec(puVar6 + -7);
  }
  puVar6 = (undefined8 *)param_1[2];
  while (puVar6 != puVar3) {
    puVar6 = puVar3;
    func_0x000109d892a8();
  }
  puVar6 = (undefined8 *)param_1[4];
  while (puVar6 != puVar1) {
    puVar6 = puVar1;
    FUN_109d819ec();
  }
  puVar6 = (undefined8 *)param_1[6];
  while (puVar6 != puVar4) {
    puVar6 = puVar4;
    func_0x000109d89318();
  }
  puVar6 = (undefined8 *)param_1[8];
  while (puVar6 != puVar5) {
    puVar6 = puVar5;
    func_0x000109d894b4();
  }
  __ZdlPvSt11align_val_t(param_1[0x59],8);
  FUN_109d5993c(param_1 + 0x56);
  FUN_109d7300c(param_1 + 0x20);
  func_0x000109d9e058(param_1 + 0x1d);
  if (*(char *)((long)param_1 + 0xe7) < '\0') {
    __ZdlPv(param_1[0x1a]);
  }
  if (*(char *)((long)param_1 + 0xcf) < '\0') {
    __ZdlPv(param_1[0x17]);
  }
  if (*(char *)((long)param_1 + 0xb7) < '\0') {
    __ZdlPv(param_1[0x14]);
  }
  plVar2 = (long *)param_1[0x13];
  param_1[0x13] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  func_0x000109d9dfd4(param_1 + 0xf);
  FUN_109d88cec(param_1 + 0xe,0);
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  func_0x000109d9de74(param_1 + 9);
  FUN_109d9dec4(puVar5);
  FUN_109d9df08(puVar4);
  FUN_109d9df4c(puVar1);
  FUN_109d9df90(puVar3);
  return param_1;
}



/* Entry: 109d9d3e8; end: 109d9d4c3;  */

undefined1  [16]
FUN_109d9d3e8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined2 uStack_48;
  
  plVar1 = *(long **)(param_1 + 0x70);
  FUN_109d388ac();
  if (plVar1 == (long *)0x0) {
    uStack_48 = 0x105;
    plVar3 = param_4;
    uStack_68 = param_2;
    uStack_60 = param_3;
    FUN_109d38aa8(param_4,0,*(undefined4 *)(param_1 + 0x10c),&uStack_68,0);
    if ((*(byte *)((long)plVar3 + 0x21) >> 5 & 1) == 0) {
      plVar3[0xe] = param_5;
    }
    FUN_109d88d14(param_1 + 0x18,param_1 + 0x18,plVar3);
  }
  else {
    plVar2 = param_4;
    func_0x000109da017c(param_4,*(uint *)(*plVar1 + 8) >> 8);
    plVar3 = plVar1;
    if ((long *)*plVar1 != plVar2) {
      plVar3 = (long *)0x31;
      func_0x000109d6a99c(0x31,plVar1,plVar2,0);
    }
  }
  auVar4._8_8_ = plVar3;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 109d9d4c4; end: 109d9d513;  */

void FUN_109d9d4c4(void)

{
  FUN_109d388ac();
  return;
}



/* Entry: 109d9d514; end: 109d9d607;  */

/* WARNING: Removing unreachable block (ram,0x000109d9d5b4) */
/* WARNING: Removing unreachable block (ram,0x000109d9d5fc) */

long FUN_109d9d514(long param_1)

{
  int iVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_138 [256];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = auStack_138;
  func_0x000109d5975c();
  iVar1 = (int)param_1 + 0xe8;
  FUN_109e03610();
  if ((iVar1 == -1) || ((long)iVar1 == (ulong)*(uint *)(param_1 + 0xf0))) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0xe8) + (long)iVar1 * 8) + 8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    __Unwind_Resume();
    plVar3 = (long *)(puVar2 + 0xe8);
    FUN_109d9e0c8();
    lVar6 = *plVar3;
    lVar4 = *(long *)(lVar6 + 8);
    if (lVar4 == 0) {
      plVar3 = (long *)0x38;
      __Znwm();
      FUN_109d97734();
      *(long **)(lVar6 + 8) = plVar3;
      plVar3[5] = (long)puVar2;
      plVar5 = (long *)(puVar2 + 0x48);
      lVar4 = *plVar5;
      *plVar3 = lVar4;
      plVar3[1] = (long)plVar5;
      *(long **)(lVar4 + 8) = plVar3;
      *plVar5 = (long)plVar3;
      lVar4 = *(long *)(lVar6 + 8);
    }
    return lVar4;
  }
  return lVar4;
}



/* Entry: 109d9d608; end: 109d9d6a7;  */

long FUN_109d9d608(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = (long *)(param_1 + 0xe8);
  FUN_109d9e0c8();
  lVar4 = *plVar2;
  lVar1 = *(long *)(lVar4 + 8);
  if (lVar1 == 0) {
    plVar2 = (long *)0x38;
    __Znwm();
    FUN_109d97734();
    *(long **)(lVar4 + 8) = plVar2;
    plVar2[5] = param_1;
    plVar3 = (long *)(param_1 + 0x48);
    lVar1 = *plVar3;
    *plVar2 = lVar1;
    plVar2[1] = (long)plVar3;
    *(long **)(lVar1 + 8) = plVar2;
    *plVar3 = (long)plVar2;
    lVar1 = *(long *)(lVar4 + 8);
  }
  return lVar1;
}



/* Entry: 109d9d6a8; end: 109d9d713;  */

undefined8 FUN_109d9d6a8(char *param_1,undefined4 *param_2)

{
  long lVar1;
  
  if ((param_1 != (char *)0x0) && (*param_1 == '\x01')) {
    if (*(char *)(*(long *)(param_1 + 0x80) + 0x10) == '\x10') {
      lVar1 = *(long *)(param_1 + 0x80) + 0x18;
      func_0x000109d30394(lVar1,0xffffffffffffffff);
      if (0xfffffffffffffff7 < lVar1 - 9U) {
        *param_2 = (int)lVar1;
        return 1;
      }
    }
    return 0;
  }
  return 0;
}



/* Entry: 109d9d714; end: 109d9d7d7;  */

void FUN_109d9d714(long param_1,undefined8 param_2,undefined8 *param_3,ulong *param_4)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  char *pcVar4;
  ulong *puVar5;
  
  puVar5 = (ulong *)(param_1 + -0x10);
  uVar2 = *puVar5;
  if (((uint)uVar2 >> 1 & 1) == 0) {
    if ((uVar2 & 0x3c0) < 0xc0) {
      return;
    }
    puVar3 = puVar5 + -(uVar2 >> 2 & 0xf);
  }
  else {
    if (*(uint *)(param_1 + -0x18) < 3) {
      return;
    }
    puVar3 = *(ulong **)(param_1 + -0x20);
  }
  iVar1 = (int)*puVar3;
  FUN_109d9d6a8();
  if (iVar1 != 0) {
    if (((uint)*puVar5 >> 1 & 1) == 0) {
      puVar3 = puVar5 + -(*puVar5 >> 2 & 0xf);
    }
    else {
      puVar3 = *(ulong **)(param_1 + -0x20);
    }
    pcVar4 = (char *)puVar3[1];
    if ((pcVar4 != (char *)0x0) && (*pcVar4 == '\0')) {
      *param_3 = pcVar4;
      if (((uint)*puVar5 >> 1 & 1) == 0) {
        puVar5 = puVar5 + -(*puVar5 >> 2 & 0xf);
      }
      else {
        puVar5 = *(ulong **)(param_1 + -0x20);
      }
      *param_4 = puVar5[2];
    }
  }
  return;
}



/* Entry: 109d9d7d8; end: 109d9d8bf;  */

void FUN_109d9d7d8(long param_1,long *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_6c;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_48;
  
  puStack_68 = &UNK_10f5f9f46;
  uStack_48 = 0x103;
  FUN_109d9d514(param_1,&puStack_68);
  if ((param_1 != 0) && (uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 8), uVar1 != 0)) {
    lVar5 = 0;
    do {
      uVar2 = *(undefined8 *)(**(long **)(param_1 + 0x30) + lVar5);
      uStack_80 = 0;
      uStack_78 = 0;
      FUN_109d9d714(uVar2,&uStack_6c,&uStack_78,&uStack_80);
      if ((int)uVar2 != 0) {
        puStack_68 = (undefined *)CONCAT44(puStack_68._4_4_,uStack_6c);
        uStack_60 = uStack_78;
        uStack_58 = uStack_80;
        plVar3 = param_2;
        FUN_109d9e1c0(param_2,&puStack_68,1);
        plVar4 = (long *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x18);
        lVar7 = plVar3[1];
        lVar6 = *plVar3;
        plVar4[2] = plVar3[2];
        plVar4[1] = lVar7;
        *plVar4 = lVar6;
        *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      }
      lVar5 = lVar5 + 8;
    } while ((ulong)uVar1 * 8 - lVar5 != 0);
  }
  return;
}



/* Entry: 109d9d8c0; end: 109d9d9d3;  */

long *****
FUN_109d9d8c0(long ****param_1,long ****param_2,long *param_3,undefined8 param_4,long ****param_5)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  long ****pppplVar4;
  long ***ppplVar5;
  long *****ppppplVar6;
  long *plVar7;
  undefined4 uVar8;
  long *extraout_x8;
  long ****pppplVar9;
  long *****ppppplVar10;
  long lVar11;
  long lStack_1f8;
  long lStack_1f0;
  byte bStack_1e8;
  undefined7 uStack_1e7;
  long ****pppplStack_1e0;
  long ***ppplStack_1d8;
  undefined *puStack_1d0;
  undefined2 uStack_1c0;
  long ****pppplStack_1b8;
  long ***ppplStack_1b0;
  undefined8 uStack_1a8;
  undefined2 uStack_198;
  long ***ppplStack_128;
  ulong uStack_120;
  long **applStack_118 [24];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_120 = 0x800000000;
  ppppplVar6 = (long *****)&ppplStack_128;
  plVar7 = param_3;
  ppplStack_128 = applStack_118;
  FUN_109d9d7d8();
  pppplVar4 = (long ****)ppplStack_128;
  if ((int)uStack_120 != 0) {
    pppplVar9 = (long ****)(ppplStack_128 + 2);
    lVar11 = (uStack_120 & 0xffffffff) * 0x18;
    do {
      ppppplVar6 = (long *****)(pppplVar9[-1][1] + 3);
      if ((param_3 == *pppplVar9[-1][1]) &&
         ((param_3 == (long *)0x0 ||
          (param_1 = param_2, plVar7 = param_3, _memcmp(), (int)param_1 == 0)))) {
        ppppplVar10 = (long *****)*pppplVar9;
        goto LAB_109d9d96c;
      }
      pppplVar9 = pppplVar9 + 3;
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != 0);
  }
  ppppplVar10 = (long *****)0x0;
LAB_109d9d96c:
  if (pppplVar4 != (long ****)applStack_118) {
    _free();
    param_1 = pppplVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppppplVar10;
  }
  ___stack_chk_fail();
  if (ppplStack_128 != applStack_118) {
    _free();
  }
  __Unwind_Resume();
  uVar8 = (undefined4)param_4;
  pppplStack_1b8 = (long ****)CONCAT44(pppplStack_1b8._4_4_,uVar8);
  uStack_1a8._0_4_ = 0;
  ppplStack_1b0 = (long ***)param_5;
  FUN_109d9e238(&lStack_1f8,param_1 + 0x59,&pppplStack_1b8,0);
  if ((bStack_1e8 & 1) == 0) {
    uStack_1a8 = (ulong)*(uint *)(lStack_1f8 + 0x10);
    puStack_1d0 = &DAT_10f62a9de;
    uStack_1c0 = 0x305;
    pppplStack_1b8 = (long ****)&pppplStack_1e0;
    uStack_198 = 0x802;
    ppppplVar10 = &pppplStack_1b8;
    pppplStack_1e0 = (long ****)ppppplVar6;
    ppplStack_1d8 = (long ***)plVar7;
    FUN_109e04498(extraout_x8,ppppplVar10);
  }
  else {
    uStack_1a8 = (ulong)uStack_1a8._4_4_ << 0x20;
    pppplVar4 = param_1 + 0x56;
    pppplStack_1b8 = (long ****)ppppplVar6;
    ppplStack_1b0 = (long ***)plVar7;
    FUN_109d8e014(pppplVar4,ppppplVar6,plVar7,&uStack_1a8);
    uVar2 = *(uint *)(*pppplVar4 + 1);
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    while( true ) {
      puStack_1d0 = &DAT_10f62a9de;
      uStack_1c0 = 0x305;
      uStack_198 = 0x802;
      pppplStack_1e0 = (long ****)ppppplVar6;
      ppplStack_1d8 = (long ***)plVar7;
      pppplStack_1b8 = (long ****)&pppplStack_1e0;
      uStack_1a8 = (ulong)uVar2;
      FUN_109e04498(&lStack_1f8,&pppplStack_1b8);
      if (*(char *)((long)extraout_x8 + 0x17) < '\0') {
        __ZdlPv(*extraout_x8);
      }
      extraout_x8[1] = lStack_1f0;
      *extraout_x8 = lStack_1f8;
      extraout_x8[2] = CONCAT71(uStack_1e7,bStack_1e8);
      cVar3 = *(char *)((long)extraout_x8 + 0x17);
      plVar1 = (long *)*extraout_x8;
      if (-1 < (long)cVar3) {
        plVar1 = extraout_x8;
      }
      lVar11 = extraout_x8[1];
      if (-1 < cVar3) {
        lVar11 = (long)cVar3;
      }
      ppplVar5 = param_1[0xe];
      FUN_109d388ac(ppplVar5,plVar1,lVar11);
      if (ppplVar5 == (long ***)0x0) {
        pppplStack_1b8 = (long ****)CONCAT44(pppplStack_1b8._4_4_,uVar8);
        ppppplVar10 = (long *****)param_1[0x59];
        ppplStack_1b0 = (long ***)param_5;
        FUN_109d9e2d8(ppppplVar10,*(undefined4 *)(param_1 + 0x5b),param_4,param_5,&pppplStack_1e0);
        if (((ulong)ppppplVar10 & 1) == 0) {
          ppppplVar10 = (long *****)(param_1 + 0x59);
          FUN_109d9e3c4(ppppplVar10,&pppplStack_1b8);
          *(undefined4 *)ppppplVar10 = uVar8;
          ppppplVar10[1] = param_5;
          *(undefined4 *)(ppppplVar10 + 2) = 0;
          pppplStack_1e0 = (long ****)ppppplVar10;
        }
        *(uint *)(pppplStack_1e0 + 2) = uVar2;
        goto LAB_109d9dbc0;
      }
      pppplVar9 = (long ****)ppplVar5[3];
      if (*(char *)(pppplVar9 + 1) != '\x0e') {
        pppplVar9 = (long ****)0x0;
      }
      pppplStack_1e0 = (long ****)CONCAT44(pppplStack_1e0._4_4_,uVar8);
      puStack_1d0 = (undefined *)CONCAT44(puStack_1d0._4_4_,uVar2);
      ppppplVar10 = &pppplStack_1b8;
      ppplStack_1d8 = (long ***)pppplVar9;
      FUN_109d9e238(ppppplVar10,param_1 + 0x59,&pppplStack_1e0,(ulong)uVar2);
      if (pppplVar9 == param_5) break;
      uVar2 = uVar2 + 1;
    }
    *(uint *)(pppplStack_1b8 + 2) = uVar2;
LAB_109d9dbc0:
    *(uint *)(*pppplVar4 + 1) = uVar2 + 1;
  }
  return ppppplVar10;
}



/* Entry: 109d9d9d4; end: 109d9dc17;  */

void FUN_109d9d9d4(long *param_1,long param_2,undefined8 ***param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 **param_6)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 ***pppuVar8;
  undefined4 uVar9;
  undefined8 **ppuVar10;
  long lStack_c8;
  long lStack_c0;
  byte bStack_b8;
  undefined7 uStack_b7;
  undefined4 ***pppuStack_b0;
  undefined4 **ppuStack_a8;
  undefined *puStack_a0;
  undefined2 uStack_90;
  undefined8 ***pppuStack_88;
  undefined4 **ppuStack_80;
  ulong auStack_78 [2];
  undefined2 uStack_68;
  
  uVar9 = (undefined4)param_5;
  pppuStack_88 = (undefined8 ***)CONCAT44(pppuStack_88._4_4_,uVar9);
  auStack_78[0] = auStack_78[0] & 0xffffffff00000000;
  ppuStack_80 = (undefined4 **)param_6;
  FUN_109d9e238(&lStack_c8,param_2 + 0x2c8,&pppuStack_88,0);
  if ((bStack_b8 & 1) == 0) {
    auStack_78[0] = (ulong)*(uint *)(lStack_c8 + 0x10);
    puStack_a0 = &DAT_10f62a9de;
    uStack_90 = 0x305;
    pppuStack_88 = &pppuStack_b0;
    uStack_68 = 0x802;
    pppuStack_b0 = (undefined4 ***)param_3;
    ppuStack_a8 = (undefined4 **)param_4;
    FUN_109e04498(param_1,&pppuStack_88);
  }
  else {
    auStack_78[0] = auStack_78[0] & 0xffffffff00000000;
    plVar5 = (long *)(param_2 + 0x2b0);
    pppuStack_88 = param_3;
    ppuStack_80 = (undefined4 **)param_4;
    FUN_109d8e014(plVar5,param_3,param_4,auStack_78);
    uVar3 = *(uint *)(*plVar5 + 8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    while( true ) {
      puStack_a0 = &DAT_10f62a9de;
      uStack_90 = 0x305;
      uStack_68 = 0x802;
      pppuStack_b0 = (undefined4 ***)param_3;
      ppuStack_a8 = (undefined4 **)param_4;
      pppuStack_88 = &pppuStack_b0;
      auStack_78[0] = (ulong)uVar3;
      FUN_109e04498(&lStack_c8,&pppuStack_88);
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      param_1[1] = lStack_c0;
      *param_1 = lStack_c8;
      param_1[2] = CONCAT71(uStack_b7,bStack_b8);
      cVar4 = *(char *)((long)param_1 + 0x17);
      plVar1 = (long *)*param_1;
      if (-1 < (long)cVar4) {
        plVar1 = param_1;
      }
      lVar2 = param_1[1];
      if (-1 < cVar4) {
        lVar2 = (long)cVar4;
      }
      lVar6 = *(long *)(param_2 + 0x70);
      FUN_109d388ac(lVar6,plVar1,lVar2);
      if (lVar6 == 0) {
        pppuStack_88 = (undefined8 ***)CONCAT44(pppuStack_88._4_4_,uVar9);
        uVar7 = *(ulong *)(param_2 + 0x2c8);
        ppuStack_80 = (undefined4 **)param_6;
        FUN_109d9e2d8(uVar7,*(undefined4 *)(param_2 + 0x2d8),param_5,param_6,&pppuStack_b0);
        pppuVar8 = (undefined8 ***)pppuStack_b0;
        if ((uVar7 & 1) == 0) {
          pppuVar8 = (undefined8 ***)(param_2 + 0x2c8);
          FUN_109d9e3c4(pppuVar8,&pppuStack_88);
          *(undefined4 *)pppuVar8 = uVar9;
          pppuVar8[1] = param_6;
          *(undefined4 *)(pppuVar8 + 2) = 0;
        }
        *(uint *)(pppuVar8 + 2) = uVar3;
        goto LAB_109d9dbc0;
      }
      ppuVar10 = *(undefined8 ***)(lVar6 + 0x18);
      if (*(char *)(ppuVar10 + 1) != '\x0e') {
        ppuVar10 = (undefined8 **)0x0;
      }
      pppuStack_b0 = (undefined4 ***)CONCAT44(pppuStack_b0._4_4_,uVar9);
      puStack_a0 = (undefined *)CONCAT44(puStack_a0._4_4_,uVar3);
      ppuStack_a8 = (undefined4 **)ppuVar10;
      FUN_109d9e238(&pppuStack_88,param_2 + 0x2c8,&pppuStack_b0,(ulong)uVar3);
      if (ppuVar10 == param_6) break;
      uVar3 = uVar3 + 1;
    }
    *(uint *)(pppuStack_88 + 2) = uVar3;
LAB_109d9dbc0:
    *(uint *)(*plVar5 + 8) = uVar3 + 1;
  }
  return;
}



/* Entry: 109d9dc18; end: 109d9dc5f;  */

void FUN_109d9dc18(undefined8 param_1)

{
  FUN_109d9d8c0(param_1,&UNK_10f5f9f58,0x15);
  return;
}



/* Entry: 109d9dc60; end: 109d9dd3b;  */

undefined1  [16] FUN_109d9dc60(char *param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  if ((((param_1 == (char *)0x0) || (*param_1 != '\x01')) ||
      (plVar3 = *(long **)(param_1 + 0x80), plVar3 == (long *)0x0)) ||
     (((char)plVar3[2] != '\x0e' || (*(int *)(*plVar3 + 0x20) == 0)))) {
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    plVar1 = plVar3;
    FUN_109d6b464(plVar3,0);
    uVar4 = (ulong)plVar1 & 0xffffffff;
    if (1 < *(uint *)(*plVar3 + 0x20)) {
      plVar1 = plVar3;
      FUN_109d6b464(plVar3,1);
      uVar4 = uVar4 | (long)plVar1 << 0x20 | 0x8000000000000000;
      if (2 < *(uint *)(*plVar3 + 0x20)) {
        FUN_109d6b464(plVar3,2);
        uVar2 = (ulong)plVar3 & 0x7fffffff | 0x80000000;
        goto LAB_109d9dd24;
      }
    }
    uVar2 = 0;
  }
LAB_109d9dd24:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 109d9dd3c; end: 109d9de17;  */

long FUN_109d9dd3c(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  uVar3 = 0x12;
  if (param_3 == 0) {
    uVar3 = 9;
  }
  puVar1 = &UNK_10f5f9f88;
  if (param_3 == 0) {
    puVar1 = &UNK_10f5f9f9b;
  }
  FUN_109d9d4c4(param_1,puVar1,uVar3,0);
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      if ((*(long **)(param_1 + 0x48) == (long *)(param_1 + 0x48)) &&
         ((*(byte *)(param_1 + 0x23) & 1) == 0)) {
        return param_1;
      }
    }
    else if ((*(char *)(param_1 + 0x10) == '\x03') && ((*(uint *)(param_1 + 0x14) & 0x7ffffff) == 0)
            ) {
      return param_1;
    }
    lVar5 = *(long *)(param_1 + -0x20);
    uVar2 = *(uint *)(lVar5 + 0x14);
    if ((uVar2 >> 0x1e & 1) == 0) {
      uVar4 = (ulong)(uVar2 & 0x7ffffff);
      puVar6 = (undefined8 *)(lVar5 + uVar4 * -0x20);
      if (uVar4 == 0) {
        return param_1;
      }
    }
    else {
      puVar6 = *(undefined8 **)(lVar5 + -8);
      uVar4 = (ulong)uVar2 & 0x7ffffff;
      if ((uVar2 & 0x7ffffff) == 0) {
        return param_1;
      }
    }
    lVar5 = uVar4 << 5;
    do {
      uVar3 = *puVar6;
      FUN_109da2d44(uVar3);
      FUN_109d9de18(param_2,uVar3);
      lVar5 = lVar5 + -0x20;
      puVar6 = puVar6 + 4;
    } while (lVar5 != 0);
  }
  return param_1;
}



/* Entry: 109d9de18; end: 109d9dec3;  */

void FUN_109d9de18(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(uint *)(param_1 + 1);
  if (*(uint *)((long)param_1 + 0xc) <= *(uint *)(param_1 + 1)) {
    func_0x000107c2b01c(param_1,param_1 + 2,uVar1 + 1,8);
    uVar1 = (ulong)*(uint *)(param_1 + 1);
  }
  *(undefined8 *)(*param_1 + uVar1 * 8) = param_2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



/* Entry: 109d9dec4; end: 109d9df07;  */

long FUN_109d9dec4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_1) {
    lVar1 = param_1;
    func_0x000109d894b4();
  }
  return param_1;
}



/* Entry: 109d9df08; end: 109d9df4b;  */

long FUN_109d9df08(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_1) {
    lVar1 = param_1;
    func_0x000109d89318();
  }
  return param_1;
}



/* Entry: 109d9df4c; end: 109d9df8f;  */

long FUN_109d9df4c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_1) {
    lVar1 = param_1;
    FUN_109d819ec();
  }
  return param_1;
}



/* Entry: 109d9df90; end: 109d9dfd3;  */

long FUN_109d9df90(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_1) {
    lVar1 = param_1;
    func_0x000109d892a8();
  }
  return param_1;
}



/* Entry: 109d9dfd4; end: 109d9e0c7;  */

long * FUN_109d9dfd4(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if ((*(int *)((long)param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 1), uVar1 != 0)) {
    lVar3 = 0;
    do {
      lVar2 = *(long *)(*param_1 + lVar3);
      if (lVar2 != -8 && lVar2 != 0) {
        if (*(long *)(lVar2 + 0x20) != *(long *)(lVar2 + 0x18)) {
          _free();
        }
        __ZdlPvSt11align_val_t(lVar2,8);
      }
      lVar3 = lVar3 + 8;
    } while ((ulong)uVar1 * 8 - lVar3 != 0);
  }
  _free(*param_1);
  return param_1;
}



/* Entry: 109d9e0c8; end: 109d9e1bf;  */

undefined1  [16] FUN_109d9e0c8(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  plVar1 = param_1;
  func_0x000107c2b020();
  plVar3 = (long *)(*param_1 + ((ulong)plVar1 & 0xffffffff) * 8);
  lVar5 = *plVar3;
  if (lVar5 == -8) {
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  }
  else if (lVar5 != 0) {
    while ((lVar5 == 0 || (lVar5 == -8))) {
      plVar3 = plVar3 + 1;
      lVar5 = *plVar3;
    }
    uVar4 = 0;
    goto LAB_109d9e1a4;
  }
  plVar2 = (long *)(param_3 + 0x11);
  __ZnwmSt11align_val_t(plVar2,8);
  if (param_3 != 0) {
    _memcpy(plVar2 + 2,param_2,param_3);
  }
  *(undefined1 *)((long)(plVar2 + 2) + param_3) = 0;
  *plVar2 = param_3;
  plVar2[1] = 0;
  *plVar3 = (long)plVar2;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  plVar3 = param_1;
  func_0x000107c2b028(param_1,plVar1);
  for (plVar3 = (long *)(*param_1 + ((ulong)plVar3 & 0xffffffff) * 8); *plVar3 == 0 || *plVar3 == -8
      ; plVar3 = plVar3 + 1) {
  }
  uVar4 = 1;
LAB_109d9e1a4:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = plVar3;
  return auVar6;
}



/* Entry: 109d9e1c0; end: 109d9e237;  */

ulong FUN_109d9e1c0(ulong *param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_3 + (ulong)(uint)param_1[1];
  if (*(uint *)((long)param_1 + 0xc) < uVar1) {
    uVar3 = *param_1;
    uVar2 = uVar3 + (ulong)(uint)param_1[1] * 0x18;
    if ((param_2 >= uVar3 && param_2 <= uVar2) && (param_2 < uVar3 || uVar2 != param_2)) {
      func_0x000107c2b01c(param_1,param_1 + 2,uVar1,0x18);
      param_2 = *param_1 + (param_2 - uVar3);
    }
    else {
      func_0x000107c2b01c(param_1,param_1 + 2,uVar1,0x18);
    }
  }
  return param_2;
}



/* Entry: 109d9e238; end: 109d9e2d7;  */

void FUN_109d9e238(undefined8 *param_1,ulong *param_2,undefined4 *param_3,undefined4 param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puStack_38;
  
  uVar2 = *param_2;
  FUN_109d9e2d8(uVar2,(int)param_2[2],*param_3,*(undefined8 *)(param_3 + 2),&puStack_38);
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    puVar3 = param_2;
    FUN_109d9e3c4(param_2,param_3);
    *(undefined4 *)puVar3 = *param_3;
    puVar3[1] = *(ulong *)(param_3 + 2);
    *(undefined4 *)(puVar3 + 2) = param_4;
    puStack_38 = puVar3;
  }
  uVar4 = *param_2;
  uVar2 = param_2[2];
  *param_1 = puStack_38;
  param_1[1] = uVar4 + (ulong)(uint)uVar2 * 0x18;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d9e2d8; end: 109d9e3c3;  */

undefined8 FUN_109d9e2d8(long param_1,int param_2,int param_3,long param_4,undefined8 *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  
  if (param_2 == 0) {
    uVar2 = 0;
    piVar4 = (int *)0x0;
  }
  else {
    uVar5 = (uint)param_4 >> 4 ^ (uint)param_4 >> 9;
    uVar3 = CONCAT44(param_3 * 0x25,uVar5) + ((ulong)uVar5 << 0x20 ^ 0xffffffffffffffff);
    uVar3 = uVar3 ^ uVar3 >> 0x16;
    uVar3 = uVar3 + (uVar3 << 0xd ^ 0xffffffffffffffff);
    uVar3 = (uVar3 ^ uVar3 >> 8) * 9;
    uVar3 = uVar3 ^ uVar3 >> 0xf;
    uVar3 = uVar3 + (uVar3 << 0x1b ^ 0xffffffffffffffff);
    uVar5 = param_2 - 1U & ((uint)(uVar3 >> 0x1f) ^ (uint)uVar3);
    piVar4 = (int *)(param_1 + (ulong)uVar5 * 0x18);
    iVar7 = *piVar4;
    lVar8 = *(long *)(piVar4 + 2);
    if (param_3 != iVar7 || param_4 != lVar8) {
      iVar9 = 1;
      piVar6 = (int *)0x0;
      do {
        if ((iVar7 == -1) && (lVar8 == -0x1000)) {
          uVar2 = 0;
          if (piVar6 != (int *)0x0) {
            piVar4 = piVar6;
          }
          goto LAB_109d9e358;
        }
        piVar1 = piVar4;
        if ((piVar6 != (int *)0x0 || lVar8 != -0x2000) || iVar7 != -2) {
          piVar1 = piVar6;
        }
        uVar5 = uVar5 + iVar9;
        iVar9 = iVar9 + 1;
        uVar5 = uVar5 & param_2 - 1U;
        piVar4 = (int *)(param_1 + (ulong)uVar5 * 0x18);
        iVar7 = *piVar4;
        lVar8 = *(long *)(piVar4 + 2);
        piVar6 = piVar1;
      } while (param_3 != iVar7 || param_4 != lVar8);
    }
    uVar2 = 1;
  }
LAB_109d9e358:
  *param_5 = piVar4;
  return uVar2;
}



/* Entry: 109d9e3c4; end: 109d9e47f;  */

int * FUN_109d9e3c4(undefined8 *param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  int *piStack_28;
  
  uVar1 = *(uint *)(param_1 + 2);
  if (*(uint *)(param_1 + 1) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 1)) - *(int *)((long)param_1 + 0xc))
    goto LAB_109d9e410;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d9e480(param_1,uVar1);
  FUN_109d9e2d8(*param_1,*(undefined4 *)(param_1 + 2),*param_2,*(undefined8 *)(param_2 + 2),
                &piStack_28);
  param_3 = piStack_28;
LAB_109d9e410:
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  if ((*param_3 != -1) || (*(long *)(param_3 + 2) != -0x1000)) {
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + -1;
  }
  return param_3;
}



/* Entry: 109d9e480; end: 109d9e5e3;  */

void FUN_109d9e480(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  undefined4 *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar8 = *param_1;
  uVar3 = param_2 - 1U | param_2 - 1U >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar7 = 0x40;
  if (0x40 < uVar3 + 1) {
    uVar7 = uVar3 + 1;
  }
  *(uint *)(param_1 + 2) = uVar7;
  puVar4 = (undefined8 *)((ulong)uVar7 * 0x18);
  __ZnwmSt11align_val_t(puVar4,8);
  *param_1 = (long)puVar4;
  if (lVar8 != 0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar6 = (ulong)*(uint *)(param_1 + 2) * 0x18;
      do {
        puVar4[1] = 0xfffffffffffff000;
        *puVar4 = 0xffffffff;
        lVar6 = lVar6 + -0x18;
        puVar4 = puVar4 + 3;
      } while (lVar6 != 0);
    }
    if (uVar1 != 0) {
      lVar6 = (ulong)uVar1 * 0x18;
      plVar9 = (long *)(lVar8 + 8);
      do {
        iVar2 = (int)plVar9[-1];
        lVar5 = *plVar9;
        if (((iVar2 != -1) || (lVar5 != -0x1000)) && ((iVar2 != -2 || (lVar5 != -0x2000)))) {
          FUN_109d9e2d8(*param_1,(int)param_1[2],iVar2,lVar5,&puStack_38);
          *puStack_38 = (int)plVar9[-1];
          *(long *)(puStack_38 + 2) = *plVar9;
          puStack_38[4] = (int)plVar9[1];
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        }
        plVar9 = plVar9 + 3;
        lVar6 = lVar6 + -0x18;
      } while (lVar6 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar8,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar8 = (ulong)*(uint *)(param_1 + 2) * 0x18;
    do {
      puVar4[1] = 0xfffffffffffff000;
      *puVar4 = 0xffffffff;
      lVar8 = lVar8 + -0x18;
      puVar4 = puVar4 + 3;
    } while (lVar8 != 0);
  }
  return;
}



/* Entry: 109d9e5e4; end: 109d9e667;  */

ulong FUN_109d9e5e4(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = *(long *)(param_1 + 0x28);
  uVar7 = *(long *)(param_1 + 0x30) - lVar1;
  uVar5 = uVar7 >> 3;
  if ((int)uVar5 + -1 < 0) {
    uVar3 = 0;
LAB_109d9e65c:
    uVar4 = 0;
  }
  else {
    uVar3 = 0;
    do {
      uVar2 = (int)uVar5 - 1;
      uVar6 = (ulong)uVar2;
      if (((uint)*(undefined8 *)(lVar1 + uVar6 * 8) >> 2 & 1) == 0) {
        if ((int)uVar2 < 0) goto LAB_109d9e65c;
        uVar7 = 0;
        goto LAB_109d9e638;
      }
      uVar3 = uVar3 + 0x100000000;
      uVar5 = uVar6;
    } while (uVar2 != 0);
    uVar4 = 0;
    uVar3 = uVar7 * 0x20000000 & 0xffffffff00000000;
  }
  goto LAB_109d9e660;
  while( true ) {
    uVar7 = (ulong)((int)uVar7 + 1);
    uVar2 = (int)uVar6 - 1;
    uVar6 = (ulong)uVar2;
    uVar4 = uVar5;
    if (uVar2 == 0xffffffff) break;
LAB_109d9e638:
    uVar4 = uVar7;
    if (((uint)*(undefined8 *)(lVar1 + uVar6 * 8) >> 1 & 1) == 0) break;
  }
  uVar4 = uVar4 & 0xffffffff;
LAB_109d9e660:
  return uVar4 | uVar3;
}



/* Entry: 109d9e668; end: 109d9e8a3;  */

bool FUN_109d9e668(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0xc);
  lVar1 = (long)iVar3 + 1;
  *(int *)(param_1 + 0xc) = (int)lVar1;
  func_0x000107c2b034();
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)*(undefined8 **)(param_1 + 0x20)) < 8) {
    FUN_109e0560c();
  }
  else {
    **(undefined8 **)(param_1 + 0x20) = 0x203a544345534942;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 8;
  }
  FUN_109d2f728();
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar4) < 0xd) {
    FUN_109e0560c(param_1,&UNK_10f5fa06e,0xd);
    puVar5 = *(undefined1 **)(param_1 + 0x20);
  }
  else {
    *puVar4 = 0x20676e696e6e7572;
    *(undefined8 *)((long)puVar4 + 5) = 0x207373617020676e;
    puVar5 = (undefined1 *)(*(long *)(param_1 + 0x20) + 0xd);
    *(undefined1 **)(param_1 + 0x20) = puVar5;
  }
  if (*(undefined1 **)(param_1 + 0x18) == puVar5) {
    FUN_109e0560c(param_1,&DAT_10f68e8ec,1);
  }
  else {
    *puVar5 = 0x28;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  }
  FUN_109df9ee0(param_1,lVar1,0,0);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)*(undefined2 **)(param_1 + 0x20)) < 2) {
    FUN_109e0560c(param_1,&UNK_10f48d1ae,2);
  }
  else {
    **(undefined2 **)(param_1 + 0x20) = 0x2029;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 2;
  }
  FUN_109d2f728(param_1,param_2,param_3);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)*(undefined4 **)(param_1 + 0x20)) < 4) {
    FUN_109e0560c();
  }
  else {
    **(undefined4 **)(param_1 + 0x20) = 0x206e6f20;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 4;
  }
  FUN_109d2f728();
  if (*(undefined1 **)(param_1 + 0x18) == *(undefined1 **)(param_1 + 0x20)) {
    FUN_109e0560c();
  }
  else {
    **(undefined1 **)(param_1 + 0x20) = 10;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  }
  return iVar2 == -1 || iVar3 < iVar2;
}



/* Entry: 109d9e8a4; end: 109d9e8c7;  */

void FUN_109d9e8a4(void)

{
  return;
}



/* Entry: 109d9e8c8; end: 109d9e8eb;  */

void FUN_109d9e8c8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110b57ed0;
  return;
}



/* Entry: 109d9e8ec; end: 109d9e903;  */

void FUN_109d9e8ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d9e904; end: 109d9e93f;  */

long FUN_109d9e904(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b57f30);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109d9e940; end: 109d9e94b;  */

undefined ** FUN_109d9e940(void)

{
  return &PTR_DAT_110b57f30;
}



/* Entry: 109d9e94c; end: 109d9e9fb;  */

undefined8 * FUN_109d9e94c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b57f50;
  plVar1 = (long *)param_1[4];
  if (plVar1 == param_1 + 1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 109d9e9fc; end: 109d9ea47;  */

undefined8 * FUN_109d9e9fc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = param_2 + 1;
  *param_2 = &PTR_FUN_110b57f50;
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 == (long *)0x0) {
    param_2[4] = 0;
  }
  else if (plVar1 == (long *)(param_1 + 8)) {
    param_2[4] = puVar2;
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))(*(long **)(param_1 + 0x20),puVar2);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    param_2[4] = plVar1;
  }
  return puVar2;
}



/* Entry: 109d9ea48; end: 109d9ea83;  */

long * FUN_109d9ea48(long param_1,undefined4 *param_2)

{
  long *plVar1;
  undefined4 uStack_14;
  
  uStack_14 = *param_2;
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&uStack_14);
    return plVar1;
  }
  func_0x000104c501e4();
  func_0x000107c31948(param_2,&PTR_DAT_110b57fe8);
  plVar1 = plVar1 + 1;
  if ((int)param_2 == 0) {
    plVar1 = (long *)0x0;
  }
  return plVar1;
}



/* Entry: 109d9ea84; end: 109d9eabf;  */

long FUN_109d9ea84(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b57fe8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109d9eac0; end: 109d9eacb;  */

undefined ** FUN_109d9eac0(void)

{
  return &PTR_DAT_110b57fe8;
}



/* Entry: 109d9eacc; end: 109d9eb97;  */

void FUN_109d9eacc(undefined8 *param_1,undefined8 param_2)

{
  undefined **appuStack_68 [2];
  long lStack_58;
  long lStack_48;
  int iStack_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_109d31714(appuStack_68,param_1);
  FUN_109e05844(param_2,appuStack_68);
  if (lStack_48 != lStack_58) {
    FUN_109e05520(appuStack_68);
  }
  appuStack_68[0] = &PTR_DAT_110b5c4a0;
  if ((iStack_30 == 1) && (lStack_58 != 0)) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109d9eb98; end: 109d9eb9f;  */

void FUN_109d9eb98(void)

{
  return;
}



/* Entry: 109d9eba0; end: 109d9ebc3;  */

void FUN_109d9eba0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110b58030;
  return;
}



/* Entry: 109d9ebc4; end: 109d9ebd7;  */

void FUN_109d9ebc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d9ebd8; end: 109d9ec13;  */

long FUN_109d9ebd8(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b58090);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109d9ec14; end: 109d9ec1f;  */

undefined ** FUN_109d9ec14(void)

{
  return &PTR_DAT_110b58090;
}



/* Entry: 109d9ec20; end: 109d9ed6f;  */

void FUN_109d9ec20(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110b580b0;
  plVar1 = (long *)param_1[0x1e];
  if (plVar1 == param_1 + 0x1b) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109d9ec6c;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109d9ec6c:
  if (param_1[0x17] != 0) {
    param_1[0x18] = param_1[0x17];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x13;
  FUN_109d9ef90(&puStack_28);
  puStack_28 = param_1 + 0x10;
  func_0x000104c607c8(&puStack_28);
  func_0x000109d2f664(param_1);
  return;
}



/* Entry: 109d9ed70; end: 109d9ee77;  */

ulong FUN_109d9ed70(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined4 uStack_44;
  
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_44 = param_2;
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0xb8);
    func_0x000104c60808(param_1 + 0x80);
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  uVar2 = param_1 + 0xd0;
  FUN_109d81368(uVar2,param_1,param_3,param_4,param_5,param_6,&uStack_60);
  if ((uVar2 & 1) == 0) {
    func_0x000107c2ac70(param_1 + 0x80,&uStack_60);
    *(short *)(param_1 + 0xc) = (short)param_2;
    func_0x000109231afc(param_1 + 0xb8,&uStack_44);
    plVar3 = *(long **)(param_1 + 0xf0);
    if (plVar3 == (long *)0x0) {
      func_0x000104c501e4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x109d9ee5c);
      (*pcVar1)();
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,&uStack_60);
  }
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  return uVar2;
}



/* Entry: 109d9ee78; end: 109d9ee7f;  */

undefined8 FUN_109d9ee78(void)

{
  return 2;
}



/* Entry: 109d9ee80; end: 109d9ef17;  */

void FUN_109d9ee80(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110b580b0;
  plVar1 = (long *)param_1[0x1e];
  if (plVar1 == param_1 + 0x1b) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109d9eecc;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109d9eecc:
  if (param_1[0x17] != 0) {
    param_1[0x18] = param_1[0x17];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x13;
  FUN_109d9ef90(&puStack_28);
  puStack_28 = param_1 + 0x10;
  func_0x000104c607c8(&puStack_28);
  func_0x000109d2f664(param_1);
  __ZdlPv();
  return;
}



/* Entry: 109d9ef18; end: 109d9ef37;  */

long FUN_109d9ef18(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 7;
  if (*(long *)(param_1 + 0x18) != 1) {
    lVar3 = *(long *)(param_1 + 0x18) + 7;
  }
  lVar2 = param_1;
  (**(code **)(*(long *)(param_1 + 0xd0) + 0x10))();
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



/* Entry: 109d9ef38; end: 109d9ef8b;  */

void FUN_109d9ef38(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0xb8);
  func_0x000104c60808(param_1 + 0x80);
  lVar1 = *(long *)(param_1 + 0xa0);
  for (lVar2 = *(long *)(param_1 + 0x98); lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    func_0x000107c2ac70(param_1 + 0x80,lVar2 + 8);
  }
  return;
}



/* Entry: 109d9ef8c; end: 109d9ef8f;  */

void FUN_109d9ef8c(void)

{
  return;
}



/* Entry: 109d9ef90; end: 109d9efcf;  */

void FUN_109d9ef90(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_109d9efd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 109d9efd0; end: 109d9f033;  */

void FUN_109d9efd0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  while (puVar1 = puVar2, puVar1 != param_2) {
    puVar2 = puVar1 + -5;
    *puVar2 = &PTR_FUN_110b401b0;
    if (*(char *)((long)puVar1 + -9) < '\0') {
      __ZdlPv(puVar1[-4]);
    }
  }
  *(undefined8 **)(param_1 + 8) = param_2;
  return;
}



/* Entry: 109d9f034; end: 109d9f073;  */

undefined8 * FUN_109d9f034(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b58210;
  if ((undefined8 *)param_1[2] != param_1 + 4) {
    _free();
  }
  return param_1;
}



/* Entry: 109d9f074; end: 109d9f193;  */

undefined4
FUN_109d9f074(ulong param_1,undefined2 param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
             ulong param_6)

{
  ulong uVar1;
  long *plVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined4 uStack_94;
  undefined *apuStack_90 [2];
  undefined8 uStack_80;
  ulong uStack_78;
  undefined2 uStack_70;
  undefined **appuStack_68 [2];
  undefined *puStack_58;
  undefined2 uStack_48;
  
  uStack_94 = 0;
  if (*(long *)(*(long *)(param_1 + 0xa0) + 0x18) != 0) {
    param_4 = param_6;
    param_3 = param_5;
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0xb0);
  uVar1 = param_1;
  if (*(uint *)(param_1 + 0xb0) != 0) {
    puVar5 = *(ulong **)(param_1 + 0xa8);
    do {
      if (puVar5[1] == param_4) {
        if (param_4 != 0) {
          uVar1 = *puVar5;
          _memcmp(uVar1,param_3,param_4);
          if ((int)uVar1 != 0) goto LAB_109d9f0dc;
        }
        uStack_94 = (undefined4)puVar5[5];
        uVar3 = uStack_94;
        goto LAB_109d9f154;
      }
LAB_109d9f0dc:
      puVar5 = puVar5 + 6;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uStack_70 = 0x503;
  apuStack_90[0] = &UNK_10f5ad52f;
  appuStack_68[0] = apuStack_90;
  puStack_58 = &UNK_10f5ad54a;
  uStack_48 = 0x302;
  uStack_80 = param_3;
  uStack_78 = param_4;
  func_0x000107c2b034();
  uVar4 = param_1;
  FUN_109df35b4(param_1,appuStack_68,0,0,uVar1);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
LAB_109d9f154:
    *(undefined4 *)(param_1 + 0x80) = uVar3;
    *(undefined2 *)(param_1 + 0xc) = param_2;
    plVar2 = *(long **)(param_1 + 0x250);
    if (plVar2 == (long *)0x0) {
      func_0x000104c501e4();
      uVar3 = 2;
      if (*(long *)(plVar2[0x14] + 0x18) == 0) {
        uVar3 = 3;
      }
      return uVar3;
    }
    (**(code **)(*plVar2 + 0x30))(plVar2,&uStack_94);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 109d9f194; end: 109d9f1ab;  */

undefined4 FUN_109d9f194(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (*(long *)(*(long *)(param_1 + 0xa0) + 0x18) == 0) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 109d9f1ac; end: 109d9f227;  */

void FUN_109d9f1ac(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b58160;
  plVar1 = (long *)param_1[0x4a];
  if (plVar1 == param_1 + 0x47) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109d9f1f4;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109d9f1f4:
  param_1[0x13] = &PTR_FUN_110b58210;
  if ((undefined8 *)param_1[0x15] != param_1 + 0x17) {
    _free();
  }
  func_0x000109d2f664(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d9f228; end: 109d9f243;  */

ulong FUN_109d9f228(long *param_1)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar4;
  
  plVar1 = param_1 + 0x13;
  lVar8 = param_1[3];
  if (lVar8 == 0) {
    plVar5 = plVar1;
    (**(code **)(*plVar1 + 0x10))();
    if ((uint)plVar5 == 0) {
      uVar9 = 0;
    }
    else {
      uVar10 = 0;
      uVar9 = 0;
      do {
        uVar7 = uVar10;
        (**(code **)(*plVar1 + 0x18))(plVar1);
        if (uVar9 <= uVar7 + 8) {
          uVar9 = uVar7 + 8;
        }
        uVar3 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar3;
      } while ((uint)plVar5 != uVar3);
    }
  }
  else {
    uVar9 = 0xf;
    if (lVar8 != 1) {
      uVar9 = lVar8 + 0xf;
    }
    plVar5 = plVar1;
    (**(code **)(*plVar1 + 0x10))();
    if ((uint)plVar5 != 0) {
      uVar10 = 0;
      do {
        uVar7 = uVar10;
        (**(code **)(*plVar1 + 0x18))(plVar1);
        uVar6 = uVar10;
        (**(code **)(*plVar1 + 0x20))(plVar1);
        uVar2 = *(ushort *)((long)param_1 + 10) >> 3;
        uVar3 = uVar2 & 3;
        if ((uVar2 & 3) == 0) {
          plVar4 = param_1;
          (**(code **)(*param_1 + 8))();
          uVar3 = (uint)plVar4;
        }
        if ((uVar3 != 1 || uVar7 != 0) || uVar6 != 0) {
          uVar6 = 0xf;
          if (uVar7 != 0) {
            uVar6 = uVar7 + 8;
          }
          if (uVar9 <= uVar6) {
            uVar9 = uVar6;
          }
        }
        uVar3 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar3;
      } while ((uint)plVar5 != uVar3);
    }
  }
  return uVar9;
}



/* Entry: 109d9f244; end: 109d9f2b3;  */

void FUN_109d9f244(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuStack_20;
  int iStack_18;
  undefined1 uStack_14;
  
  if (param_3 == 0) {
    if ((*(char *)(param_1 + 0x94) != '\x01') ||
       (iStack_18 = *(int *)(param_1 + 0x80), *(int *)(param_1 + 0x90) == iStack_18)) {
      return;
    }
  }
  else {
    iStack_18 = *(int *)(param_1 + 0x80);
  }
  ppuStack_20 = &PTR_DAT_110b58278;
  uStack_14 = 1;
  FUN_109df4440(param_1 + 0x98,param_1,&ppuStack_20,param_1 + 0x88,param_2);
  return;
}



/* Entry: 109d9f2b4; end: 109d9f2db;  */

void FUN_109d9f2b4(long param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x94) == '\x01') {
    uVar1 = *(undefined4 *)(param_1 + 0x90);
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  return;
}



/* Entry: 109d9f2dc; end: 109d9f31b;  */

void FUN_109d9f2dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b58210;
  if ((undefined8 *)param_1[2] != param_1 + 4) {
    _free();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109d9f31c; end: 109d9f39b;  */

undefined4 FUN_109d9f31c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 109d9f39c; end: 109d9f3bf;  */

void FUN_109d9f39c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110b58300;
  return;
}



/* Entry: 109d9f3c0; end: 109d9f3db;  */

void FUN_109d9f3c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110b58300;
  return;
}



/* Entry: 109d9f3dc; end: 109d9f417;  */

long FUN_109d9f3dc(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b58360);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109d9f418; end: 109d9f42b;  */

undefined ** FUN_109d9f418(void)

{
  return &PTR_DAT_110b58360;
}



/* Entry: 109d9f42c; end: 109d9f44f;  */

void FUN_109d9f42c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110b58380;
  return;
}



/* Entry: 109d9f450; end: 109d9f46b;  */

void FUN_109d9f450(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110b58380;
  return;
}



/* Entry: 109d9f46c; end: 109d9f4a7;  */

long FUN_109d9f46c(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b583f0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109d9f4a8; end: 109d9f4b3;  */

undefined ** FUN_109d9f4a8(void)

{
  return &PTR_DAT_110b583f0;
}



/* Entry: 109d9f4b4; end: 109d9f57f;  */

void FUN_109d9f4b4(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 auStack_38 [2];
  
  puVar2 = (undefined8 *)0x1137e7238;
  FUN_109dffb24(0x1137e7238,0x1137e7248,param_1,0x30,auStack_38);
  if (uRam00000001137e7240 != 0) {
    puVar4 = puRam00000001137e7238 + (ulong)uRam00000001137e7240 * 6;
    puVar3 = puRam00000001137e7238;
    puVar5 = puVar2;
    do {
      uVar6 = *puVar3;
      uVar8 = puVar3[3];
      uVar7 = puVar3[2];
      puVar5[1] = puVar3[1];
      *puVar5 = uVar6;
      puVar5[3] = uVar8;
      puVar5[2] = uVar7;
      puVar5[4] = &PTR_DAT_110b582e0;
      uVar1 = *(undefined4 *)(puVar3 + 5);
      *(undefined1 *)((long)puVar5 + 0x2c) = *(undefined1 *)((long)puVar3 + 0x2c);
      *(undefined4 *)(puVar5 + 5) = uVar1;
      puVar5[4] = &PTR_DAT_110b58278;
      puVar5 = puVar5 + 6;
      puVar3 = puVar3 + 6;
    } while (puVar3 != puVar4);
  }
  if (puRam00000001137e7238 != (undefined8 *)0x1137e7248) {
    _free();
  }
  puRam00000001137e7238 = puVar2;
  uRam00000001137e7244 = auStack_38[0];
  return;
}



/* Entry: 109d9f580; end: 109d9f593;  */

undefined * FUN_109d9f580(long param_1)

{
  return (&PTR_DAT_110b58400)[*(byte *)(param_1 + 8)];
}



/* Entry: 109d9f594; end: 109d9f697;  */

undefined1  [16] FUN_109d9f594(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar1 = uVar2 & 0xff;
  if (uVar1 < 5) {
    if (uVar1 < 3) {
      if (uVar1 < 2) {
        uVar5 = 0;
        uVar3 = 0x10;
        goto LAB_109d9f688;
      }
      if (uVar1 == 2) {
        uVar5 = 0;
        uVar3 = 0x20;
        goto LAB_109d9f688;
      }
    }
    else {
      if (uVar1 == 3) {
LAB_109d9f668:
        uVar5 = 0;
        uVar3 = 0x40;
        goto LAB_109d9f688;
      }
      if (uVar1 == 4) {
        uVar5 = 0;
        uVar3 = 0x50;
        goto LAB_109d9f688;
      }
    }
  }
  else if (uVar1 < 0xb) {
    if (uVar1 - 5 < 2) {
      uVar5 = 0;
      uVar3 = 0x80;
      goto LAB_109d9f688;
    }
    if (uVar1 == 10) goto LAB_109d9f668;
  }
  else {
    if (uVar1 - 0x12 < 2) {
      uVar1 = *(uint *)(param_1 + 0x20);
      uVar5 = (ulong)((uVar2 & 0xff) == 0x13);
      lVar4 = *(long *)(param_1 + 0x18);
      FUN_109d9f594(lVar4);
      uVar3 = lVar4 * (ulong)uVar1;
      goto LAB_109d9f688;
    }
    if (uVar1 == 0xb) {
      uVar5 = 0;
      uVar3 = 0x2000;
      goto LAB_109d9f688;
    }
    if (uVar1 == 0xd) {
      uVar5 = 0;
      uVar3 = (ulong)(uVar2 >> 8);
      goto LAB_109d9f688;
    }
  }
  uVar3 = 0;
  uVar5 = 0;
LAB_109d9f688:
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Entry: 109d9f698; end: 109d9f733;  */

uint FUN_109d9f698(long param_1)

{
  uint in_w8;
  ulong uVar1;
  char cVar2;
  undefined8 *puVar3;
  
  cVar2 = *(char *)(param_1 + 8);
  if ((param_1 != 0) && (cVar2 == '\x11')) {
    do {
      in_w8 = *(uint *)(param_1 + 0x20);
      if (in_w8 == 0) {
        return 1;
      }
      param_1 = *(long *)(param_1 + 0x18);
      cVar2 = *(char *)(param_1 + 8);
    } while (param_1 != 0 && cVar2 == '\x11');
  }
  if (cVar2 == '\x10') {
    uVar1 = (ulong)*(uint *)(param_1 + 0xc);
    if (*(uint *)(param_1 + 0xc) == 0) {
      in_w8 = 1;
    }
    else {
      puVar3 = *(undefined8 **)(param_1 + 0x10);
      do {
        uVar1 = uVar1 - 1;
        in_w8 = (uint)*puVar3;
        FUN_109d9f698();
        if (in_w8 == 0) break;
        puVar3 = puVar3 + 1;
      } while (uVar1 != 0);
    }
  }
  return cVar2 == '\x10' & in_w8;
}



/* Entry: 109d9f734; end: 109d9f79b;  */

undefined8 FUN_109d9f734(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  ulong *puVar5;
  long lVar6;
  undefined1 auStack_48 [16];
  byte bStack_38;
  
  do {
    bVar2 = *(byte *)(param_1 + 8);
    if (((param_1 == 0) || (bVar2 != 0x11)) && ((param_1 == 0 || ((bVar2 & 0xfe) != 0x12)))) {
      if ((param_1 == 0) || (bVar2 != 0x15)) {
        if ((*(uint *)(param_1 + 8) >> 0xb & 1) != 0) {
          return 1;
        }
        if ((*(uint *)(param_1 + 8) >> 8 & 1) != 0) {
          if ((param_2 != 0) && (FUN_109d9fea0(auStack_48,param_2,param_1), (bStack_38 & 1) == 0)) {
            return 0;
          }
          if (*(uint *)(param_1 + 0xc) != 0) {
            lVar6 = (ulong)*(uint *)(param_1 + 0xc) << 3;
            puVar5 = *(ulong **)(param_1 + 0x10);
            do {
              uVar3 = *puVar5;
              if ((*(char *)(uVar3 + 8) == '\x13') ||
                 (FUN_109d320a4(uVar3,param_2), (uVar3 & 1) == 0)) {
                return 0;
              }
              lVar6 = lVar6 + -8;
              puVar5 = puVar5 + 1;
            } while (lVar6 != 0);
          }
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x800;
          return 1;
        }
        return 0;
      }
      FUN_109da0310();
    }
    else {
      param_1 = *(long *)(param_1 + 0x18);
    }
    bVar2 = *(byte *)(param_1 + 8);
    if ((bVar2 == 0xd) ||
       (((uVar4 = (uint)bVar2, bVar2 < 6 && ((0x2fU >> (ulong)(uVar4 & 0x1f) & 1) != 0)) ||
        (uVar1 = uVar4 & 0xfe, (uVar1 == 10 || (uVar4 & 0xfffffffd) == 4) || bVar2 == 0xf)))) {
      return 1;
    }
    if ((uVar1 != 0x10 && uVar1 != 0x12) && bVar2 != 0x15) {
      return 0;
    }
  } while( true );
}



/* Entry: 109d9f79c; end: 109d9f84f;  */

undefined8 FUN_109d9f79c(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long lVar4;
  undefined1 auStack_48 [16];
  byte bStack_38;
  
  if ((*(uint *)(param_1 + 8) >> 0xb & 1) != 0) {
    return 1;
  }
  if ((*(uint *)(param_1 + 8) >> 8 & 1) == 0) {
    return 0;
  }
  if ((param_2 == 0) || (FUN_109d9fea0(auStack_48,param_2,param_1), (bStack_38 & 1) != 0)) {
    if (*(uint *)(param_1 + 0xc) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 0xc) << 3;
      puVar3 = *(ulong **)(param_1 + 0x10);
      do {
        uVar1 = *puVar3;
        if ((*(char *)(uVar1 + 8) == '\x13') || (FUN_109d320a4(uVar1,param_2), (uVar1 & 1) == 0))
        goto LAB_109d9f838;
        lVar4 = lVar4 + -8;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x800;
    uVar2 = 1;
  }
  else {
LAB_109d9f838:
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 109d9f850; end: 109d9f92b;  */

void FUN_109d9f850(long *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int iStack_24;
  
  if (param_2 < 0x20) {
    if (param_2 == 1) {
      return;
    }
    if (param_2 == 8) {
      return;
    }
    if (param_2 == 0x10) {
      return;
    }
  }
  else {
    if (param_2 == 0x20) {
      return;
    }
    if (param_2 == 0x40) {
      return;
    }
    if (param_2 == 0x80) {
      return;
    }
  }
  lVar1 = *param_1 + 0x868;
  iStack_24 = param_2;
  FUN_109da0378(lVar1,&iStack_24);
  if (*(long *)(lVar1 + 8) == 0) {
    puVar2 = (undefined8 *)(*param_1 + 0x7e8);
    FUN_109d34148(puVar2,0x18,3);
    *puVar2 = param_1;
    puVar2[2] = 0;
    *(uint *)(puVar2 + 1) = iStack_24 << 8 | 0xd;
    *(undefined4 *)((long)puVar2 + 0xc) = 0;
    *(undefined8 **)(lVar1 + 8) = puVar2;
  }
  return;
}



/* Entry: 109d9f92c; end: 109d9fa43;  */

long * FUN_109d9f92c(long *param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long **pplVar6;
  undefined8 **ppuVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puStack_150;
  undefined8 **ppuStack_148;
  undefined8 **ppuStack_140;
  undefined8 uStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 *puStack_118;
  undefined8 **ppuStack_110;
  undefined1 uStack_108;
  undefined8 *apuStack_100 [2];
  char cStack_f0;
  undefined8 auStack_e8 [2];
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  ulong uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long *plStack_90;
  long *plStack_88;
  ulong uStack_80;
  undefined1 uStack_78;
  long *aplStack_70 [2];
  char cStack_60;
  undefined8 auStack_58 [2];
  long lStack_48;
  
  pplVar6 = &plStack_90;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *(long *)*param_1;
  uStack_78 = (undefined1)param_4;
  auStack_58[0] = 0;
  puVar4 = auStack_58;
  uVar9 = param_4;
  plStack_90 = param_1;
  plStack_88 = param_2;
  uStack_80 = param_3;
  func_0x000109da0638(aplStack_70,lVar15 + 0x880);
  if (cStack_60 == '\x01') {
    plVar1 = (long *)(lVar15 + 0x7e8);
    puVar4 = (undefined8 *)(param_3 * 8 + 0x20);
    pplVar6 = (undefined8 **)0x3;
    FUN_109d34148();
    *plVar1 = *param_1;
    plVar1[3] = (long)param_1;
    plVar1[2] = 0;
    uVar11 = 0x10e;
    if ((int)param_4 == 0) {
      uVar11 = 0xe;
    }
    *(undefined4 *)(plVar1 + 1) = uVar11;
    if ((int)param_3 != 0) {
      uVar13 = param_3 & 0xffffffff;
      plVar2 = plVar1 + 4;
      plVar14 = param_2;
      do {
        param_2 = plVar14 + 1;
        *plVar2 = *plVar14;
        uVar13 = uVar13 - 1;
        plVar2 = plVar2 + 1;
        plVar14 = param_2;
      } while (uVar13 != 0);
    }
    plVar1[2] = (long)(plVar1 + 3);
    *(int *)((long)plVar1 + 0xc) = (int)param_3 + 1;
    *aplStack_70[0] = (long)plVar1;
  }
  else {
    plVar1 = (long *)*aplStack_70[0];
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar1;
  }
  ___stack_chk_fail();
  plStack_c8 = aplStack_70[0];
  pcStack_98 = FUN_109d9fa44;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_108 = (undefined1)uVar9;
  auStack_e8[0] = 0;
  plVar2 = (long *)(*plVar1 + 0x898);
  puVar5 = auStack_e8;
  ppuVar7 = &puStack_118;
  uVar10 = uVar9;
  puStack_118 = puVar4;
  ppuStack_110 = pplVar6;
  lStack_d0 = lVar15;
  plStack_c0 = param_1;
  uStack_b8 = param_4;
  plStack_b0 = param_2;
  uStack_a8 = param_3;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_109da0cfc(apuStack_100);
  iVar8 = (int)uVar10;
  if (cStack_f0 == '\x01') {
    plVar14 = (long *)(*plVar1 + 0x7e8);
    FUN_109d34148(plVar14,0x20,3);
    *plVar14 = (long)plVar1;
    *(undefined8 *)((long)plVar14 + 0x14) = 0;
    *(undefined8 *)((long)plVar14 + 0xc) = 0;
    *(undefined4 *)((long)plVar14 + 0x1c) = 0;
    *(undefined4 *)(plVar14 + 1) = 0x410;
    plVar2 = plVar14;
    ppuVar7 = pplVar6;
    uVar10 = uVar9;
    FUN_109d9fb38();
    iVar8 = (int)uVar10;
    *apuStack_100[0] = plVar14;
    puVar5 = puVar4;
  }
  else {
    plVar14 = (long *)*apuStack_100[0];
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return plVar14;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  ppuVar3 = &puStack_150;
  pcStack_128 = FUN_109d9fb38;
  uVar12 = 0x300;
  if (iVar8 == 0) {
    uVar12 = 0x100;
  }
  *(uint *)(plVar2 + 1) = *(uint *)(plVar2 + 1) | uVar12;
  *(int *)((long)plVar2 + 0xc) = (int)ppuVar7;
  if (ppuVar7 == (undefined8 **)0x0) {
    ppuVar3 = (undefined8 **)0x0;
  }
  else {
    puStack_150 = puVar5;
    ppuStack_148 = ppuVar7;
    ppuStack_140 = pplVar6;
    uStack_138 = uVar9;
    ppuStack_130 = &puStack_a0;
    func_0x000109d9fba0(&puStack_150,*(long *)*plVar2 + 0x7e8);
  }
  plVar2[2] = (long)ppuVar3;
  return (long *)ppuVar3;
}



/* Entry: 109d9fa44; end: 109d9fb37;  */

undefined8 *
FUN_109d9fa44(long *param_1,undefined8 *param_2,undefined8 **param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 *puStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *apuStack_70 [2];
  char cStack_60;
  undefined8 auStack_58 [2];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = (undefined1)param_4;
  auStack_58[0] = 0;
  puVar1 = (undefined8 *)(*param_1 + 0x898);
  puVar3 = auStack_58;
  ppuVar4 = &puStack_88;
  uVar6 = param_4;
  puStack_88 = param_2;
  ppuStack_80 = param_3;
  FUN_109da0cfc(apuStack_70);
  iVar5 = (int)uVar6;
  if (cStack_60 == '\x01') {
    puVar8 = (undefined8 *)(*param_1 + 0x7e8);
    FUN_109d34148(puVar8,0x20,3);
    *puVar8 = param_1;
    *(undefined8 *)((long)puVar8 + 0x14) = 0;
    *(undefined8 *)((long)puVar8 + 0xc) = 0;
    *(undefined4 *)((long)puVar8 + 0x1c) = 0;
    *(undefined4 *)(puVar8 + 1) = 0x410;
    puVar1 = puVar8;
    ppuVar4 = param_3;
    uVar6 = param_4;
    FUN_109d9fb38();
    iVar5 = (int)uVar6;
    *apuStack_70[0] = puVar8;
    puVar3 = param_2;
  }
  else {
    puVar8 = (undefined8 *)*apuStack_70[0];
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar8;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  ppuVar2 = &puStack_c0;
  pcStack_98 = FUN_109d9fb38;
  uVar7 = 0x300;
  if (iVar5 == 0) {
    uVar7 = 0x100;
  }
  *(uint *)(puVar1 + 1) = *(uint *)(puVar1 + 1) | uVar7;
  *(int *)((long)puVar1 + 0xc) = (int)ppuVar4;
  if (ppuVar4 == (undefined8 **)0x0) {
    ppuVar2 = (undefined8 **)0x0;
  }
  else {
    puStack_c0 = puVar3;
    ppuStack_b8 = ppuVar4;
    ppuStack_b0 = param_3;
    uStack_a8 = param_4;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x000109d9fba0(&puStack_c0,*(long *)*puVar1 + 0x7e8);
  }
  puVar1[2] = ppuVar2;
  return ppuVar2;
}



/* Entry: 109d9fb38; end: 109d9fbf7;  */

void FUN_109d9fb38(undefined8 *param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar1 = &uStack_30;
  uVar2 = 0x300;
  if (param_4 == 0) {
    uVar2 = 0x100;
  }
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | uVar2;
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  if (param_3 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    uStack_30 = param_2;
    lStack_28 = param_3;
    func_0x000109d9fba0(&uStack_30,*(long *)*param_1 + 0x7e8);
  }
  param_1[2] = puVar1;
  return;
}



/* Entry: 109d9fbf8; end: 109d9fe2b;  */

ulong * FUN_109d9fbf8(ulong *param_1,ulong *param_2,ulong param_3)

{
  int iVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined **appuStack_d8 [2];
  long lStack_c8;
  int iStack_a0;
  ulong *puStack_98;
  undefined1 *apuStack_90 [3];
  undefined1 auStack_78 [64];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (ulong *)param_1[3];
  if (puVar6 == (ulong *)0x0) {
    puVar3 = (ulong *)0x0;
    uVar5 = 0;
  }
  else {
    puVar3 = puVar6 + 2;
    uVar5 = *puVar6;
  }
  uVar4 = param_3;
  if ((param_3 != uVar5) ||
     ((puVar2 = param_1, param_3 != 0 &&
      (puVar2 = param_2, _memcmp(param_2,puVar3), (int)puVar2 != 0)))) {
    if (puVar6 != (ulong *)0x0) {
      uVar4 = *puVar6;
      puVar3 = (ulong *)((long)puVar6 + (ulong)*(uint *)(*(long *)*param_1 + 0x8c4));
      FUN_109e03714(*(long *)*param_1 + 0x8b0,puVar3);
    }
    if (param_3 == 0) {
      puVar2 = (ulong *)param_1[3];
      if (puVar2 == (ulong *)0x0) goto LAB_109d9fd9c;
      puVar3 = (ulong *)0x8;
      __ZdlPvSt11align_val_t(puVar2,8);
      uVar5 = 0;
    }
    else {
      puVar6 = (ulong *)(*(long *)*param_1 + 0x8b0);
      puVar3 = param_2;
      uVar4 = param_3;
      func_0x000109da11f4();
      if (((ulong)puVar3 & 1) == 0) {
        FUN_109da12f0(apuStack_90,param_2,(long)param_2 + param_3);
        func_0x000109d3acdc(apuStack_90,0x2e);
        FUN_109d37ad8(appuStack_d8,apuStack_90);
        do {
          FUN_109d596f0(apuStack_90,(int)param_3 + 1);
          iVar1 = *(int *)(*(long *)*param_1 + 0x8c8);
          *(int *)(*(long *)*param_1 + 0x8c8) = iVar1 + 1;
          FUN_109df9d4c(appuStack_d8,iVar1,0,0,0);
          puVar3 = (ulong *)*puStack_98;
          uVar4 = puStack_98[1];
          puVar6 = (ulong *)(*(long *)*param_1 + 0x8b0);
          func_0x000109da11f4();
        } while (((ulong)puVar3 & 1) == 0);
        appuStack_d8[0] = &PTR_DAT_110b5c4a0;
        if ((iStack_a0 == 1) && (lStack_c8 != 0)) {
          __ZdaPv();
        }
        if (apuStack_90[0] != auStack_78) {
          _free();
        }
      }
      puVar2 = (ulong *)param_1[3];
      if (puVar2 != (ulong *)0x0) {
        puVar3 = (ulong *)0x8;
        __ZdlPvSt11align_val_t(puVar2,8);
      }
      uVar5 = *puVar6;
    }
    param_1[3] = uVar5;
  }
LAB_109d9fd9c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (apuStack_90[0] != auStack_78) {
      _free();
    }
    __Unwind_Resume();
    puVar6 = (ulong *)(*puVar2 + 0x7e8);
    FUN_109d34148(puVar6,0x20,3);
    *puVar6 = (ulong)puVar2;
    *(undefined4 *)(puVar6 + 1) = 0x10;
    *(undefined8 *)((long)puVar6 + 0x14) = 0;
    *(undefined8 *)((long)puVar6 + 0xc) = 0;
    *(undefined4 *)((long)puVar6 + 0x1c) = 0;
    if (uVar4 != 0) {
      FUN_109d9fbf8(puVar6,puVar3,uVar4);
    }
    return puVar6;
  }
  return puVar2;
}


