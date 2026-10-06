/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1097751f0; end: 10977522b;  */

void FUN_1097751f0(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((*(long *)(param_1 + 0x40) != 0) && (*(long *)(param_1 + 0x38) != 0)) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



/* Entry: 10977522c; end: 10977523f;  */

undefined8 FUN_10977522c(void)

{
  return 0;
}



/* Entry: 109775240; end: 1097753eb;  */

ulong FUN_109775240(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x18);
  puVar4 = (uint *)(lVar9 + 6);
  func_0x00010977f6d8(puVar4,param_4);
  if (puVar4 != (uint *)0x0) {
    uVar6 = puVar4[1];
    uVar8 = (*puVar4 & 0xff00ff00) >> 8 | (*puVar4 & 0xff00ff) << 8;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
    if (uVar8 != 0) {
      lVar5 = lVar9 + (ulong)uVar8;
      func_0x00010977f748(lVar5,param_3);
      if ((int)lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001097752a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(param_2 + 0x10) + 0x18))(param_2,param_3);
        return param_2;
      }
    }
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar7 = (ulong)(uVar6 >> 0x10 | uVar6 << 0x10);
    if (uVar7 != 0) {
      puVar4 = (uint *)(lVar9 + uVar7);
      uVar6 = *puVar4;
      uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
      uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
      if (uVar6 != 0) {
        uVar8 = 0;
        do {
          uVar2 = uVar6 + uVar8 >> 1;
          pbVar1 = (byte *)((long)puVar4 + (ulong)(uVar2 * 4 + (uVar6 + uVar8 >> 1)) + 4);
          uVar3 = (uint)*pbVar1 << 0x10 | (uint)pbVar1[1] << 8 | (uint)pbVar1[2];
          if (uVar3 <= (uint)param_3) {
            if ((uint)param_3 <= uVar3) {
              return (ulong)((uint)(*(ushort *)(pbVar1 + 3) >> 8) |
                            (*(ushort *)(pbVar1 + 3) & 0xff00ff) << 8);
            }
            uVar8 = uVar2 + 1;
            uVar2 = uVar6;
          }
          uVar6 = uVar2;
        } while (uVar8 < uVar6);
      }
      return 0;
    }
  }
  return 0;
}



/* Entry: 1097753ec; end: 1097754cf;  */

uint * FUN_1097753ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  byte *pbVar13;
  uint uVar5;
  
  iVar9 = *(int *)(param_1 + 0x28);
  lVar12 = *(long *)(param_1 + 0x18);
  lVar6 = param_1;
  FUN_10977f82c(param_1,iVar9 + 1,param_2);
  if ((int)lVar6 == 0) {
    puVar8 = *(uint **)(param_1 + 0x38);
    puVar11 = puVar8;
    if (iVar9 != 0) {
      pbVar13 = (byte *)(lVar12 + 10);
      puVar10 = puVar8;
      do {
        bVar1 = *pbVar13;
        bVar2 = pbVar13[1];
        bVar3 = pbVar13[2];
        uVar4 = (*(uint *)(pbVar13 + 3) & 0xff00ff00) >> 8 |
                (*(uint *)(pbVar13 + 3) & 0xff00ff) << 8;
        uVar5 = uVar4 >> 0x10 | uVar4 << 0x10;
        uVar4 = *(uint *)(pbVar13 + 7);
        if (uVar5 == 0) {
LAB_109775474:
          uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
          uVar7 = (ulong)(uVar4 >> 0x10 | uVar4 << 0x10);
          puVar11 = puVar10;
          if (uVar7 != 0) {
            lVar6 = *(long *)(param_1 + 0x18) + uVar7;
            func_0x00010977f7bc(lVar6,param_3);
            if ((int)lVar6 != 0) goto LAB_109775490;
          }
        }
        else {
          lVar6 = *(long *)(param_1 + 0x18) + (ulong)uVar5;
          func_0x00010977f748(lVar6,param_3);
          if ((int)lVar6 == 0) goto LAB_109775474;
LAB_109775490:
          puVar11 = puVar10 + 1;
          *puVar10 = (uint)bVar1 << 0x10 | (uint)bVar2 << 8 | (uint)bVar3;
        }
        pbVar13 = pbVar13 + 0xb;
        iVar9 = iVar9 + -1;
        puVar10 = puVar11;
      } while (iVar9 != 0);
    }
    *puVar11 = 0;
  }
  else {
    puVar8 = (uint *)0x0;
  }
  return puVar8;
}



/* Entry: 1097754d0; end: 10977577f;  */

uint * FUN_1097754d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  byte *pbVar11;
  uint *puVar12;
  int iVar13;
  byte *pbVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  
  lVar25 = *(long *)(param_1 + 0x18);
  puVar10 = (uint *)(lVar25 + 6);
  func_0x00010977f6d8(puVar10,param_3);
  if (puVar10 != (uint *)0x0) {
    uVar21 = (*puVar10 & 0xff00ff00) >> 8 | (*puVar10 & 0xff00ff) << 8;
    uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
    uVar16 = (ulong)uVar21;
    uVar22 = (puVar10[1] & 0xff00ff00) >> 8 | (puVar10[1] & 0xff00ff) << 8;
    uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
    uVar17 = (ulong)uVar22;
    if (uVar21 != 0 || uVar22 != 0) {
      if (uVar16 == 0) {
LAB_109775660:
        uVar21 = *(uint *)(lVar25 + uVar17);
        uVar21 = (uVar21 & 0xff00ff00) >> 8 | (uVar21 & 0xff00ff) << 8;
        uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
        uVar16 = (ulong)uVar21;
        lVar9 = param_1;
        FUN_10977f82c(param_1,uVar21 + 1,param_2);
        if ((int)lVar9 == 0) {
          puVar10 = *(uint **)(param_1 + 0x38);
          if (uVar21 == 0) {
            uVar16 = 0;
          }
          else {
            puVar12 = (uint *)(lVar25 + uVar17) + 1;
            puVar7 = puVar10;
            uVar17 = uVar16;
            do {
              *puVar7 = (uint)(byte)*puVar12 << 0x10 | (uint)*(byte *)((long)puVar12 + 1) << 8 |
                        (uint)*(byte *)((long)puVar12 + 2);
              puVar12 = (uint *)((long)puVar12 + 5);
              uVar17 = uVar17 - 1;
              puVar7 = puVar7 + 1;
            } while (uVar17 != 0);
          }
          puVar10[uVar16] = 0;
        }
        else {
          puVar10 = (uint *)0x0;
        }
        return puVar10;
      }
      if (uVar17 != 0) {
        puVar10 = (uint *)(lVar25 + uVar17);
        puVar12 = (uint *)(lVar25 + uVar16);
        uVar21 = (*puVar10 & 0xff00ff00) >> 8 | (*puVar10 & 0xff00ff) << 8;
        uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
        puVar7 = puVar12;
        FUN_10977f9f0();
        if (uVar21 != 0) {
          if ((int)puVar7 != 0) {
            uVar22 = *puVar12;
            lVar25 = param_1;
            FUN_10977f82c(param_1,(int)puVar7 + uVar21 + 1,param_2);
            if ((int)lVar25 != 0) {
              return (uint *)0x0;
            }
            iVar19 = 0;
            uVar22 = (uVar22 & 0xff00ff00) >> 8 | (uVar22 & 0xff00ff) << 8;
            uVar6 = uVar22 >> 0x10 | uVar22 << 0x10;
            puVar8 = *(uint **)(param_1 + 0x38);
            uVar20 = (uint)(byte)puVar12[1] << 0x10 | (uint)*(byte *)((long)puVar12 + 5) << 8 |
                     (uint)*(byte *)((long)puVar12 + 6);
            puVar7 = puVar12 + 2;
            uVar23 = (uint)*(byte *)((long)puVar12 + 7);
            uVar24 = (uint)(byte)puVar10[1] << 0x10 | (uint)*(byte *)((long)puVar10 + 5) << 8 |
                     (uint)*(byte *)((long)puVar10 + 6);
            pbVar14 = (byte *)((long)puVar10 + 9);
            uVar18 = 1;
            uVar22 = 1;
            while( true ) {
              while (uVar24 <= uVar23 + uVar20) {
                if (uVar24 < uVar20) {
                  puVar8[iVar19] = uVar24;
                  iVar19 = iVar19 + 1;
                }
                uVar22 = uVar22 + 1;
                if (uVar21 < uVar22) goto LAB_1097756b0;
                bVar2 = *pbVar14;
                pbVar11 = pbVar14 + 1;
                pbVar1 = pbVar14 + 2;
                pbVar14 = pbVar14 + 5;
                uVar24 = (uint)bVar2 << 0x10 | (uint)*pbVar11 << 8 | (uint)*pbVar1;
              }
              lVar25 = (long)iVar19;
              iVar13 = uVar23 + 1;
              iVar19 = iVar13 + iVar19;
              puVar10 = puVar8 + lVar25;
              uVar15 = uVar20;
              do {
                *puVar10 = uVar15;
                uVar15 = uVar15 + 1;
                iVar13 = iVar13 + -1;
                puVar10 = puVar10 + 1;
              } while (iVar13 != 0);
              uVar18 = uVar18 + 1;
              if (uVar6 < uVar18) break;
              uVar20 = (uint)(byte)*puVar7 << 0x10 | (uint)*(byte *)((long)puVar7 + 1) << 8 |
                       (uint)*(byte *)((long)puVar7 + 2);
              uVar23 = (uint)*(byte *)((long)puVar7 + 3);
              puVar7 = puVar7 + 1;
            }
LAB_1097756b0:
            if (uVar21 < uVar22) {
              if (uVar18 <= uVar6) {
                lVar25 = (long)iVar19;
                iVar19 = uVar23 + 1;
                do {
                  puVar8[lVar25] = uVar20;
                  lVar25 = lVar25 + 1;
                  uVar20 = uVar20 + 1;
                  iVar19 = iVar19 + -1;
                } while (iVar19 != 0);
                for (; iVar19 = (int)lVar25, uVar18 < uVar6; uVar18 = uVar18 + 1) {
                  lVar25 = (long)iVar19;
                  iVar19 = *(byte *)((long)puVar7 + 3) + 1;
                  uVar21 = (uint)*(byte *)((long)puVar7 + 1) << 8 | (uint)(byte)*puVar7 << 0x10 |
                           (uint)*(byte *)((long)puVar7 + 2);
                  do {
                    puVar8[lVar25] = uVar21;
                    lVar25 = lVar25 + 1;
                    uVar21 = uVar21 + 1;
                    iVar19 = iVar19 + -1;
                  } while (iVar19 != 0);
                  puVar7 = puVar7 + 1;
                }
              }
            }
            else {
              puVar8[iVar19] = uVar24;
              iVar19 = iVar19 + 1;
              if (uVar22 < uVar21) {
                lVar25 = 0;
                puVar10 = puVar8 + iVar19;
                do {
                  pbVar11 = pbVar14 + lVar25;
                  *puVar10 = (uint)*pbVar11 << 0x10 | (uint)pbVar11[1] << 8 | (uint)pbVar11[2];
                  uVar22 = uVar22 + 1;
                  iVar19 = iVar19 + 1;
                  lVar25 = lVar25 + 5;
                  puVar10 = puVar10 + 1;
                } while (uVar22 < uVar21);
              }
            }
            puVar8[iVar19] = 0;
            return puVar8;
          }
          goto LAB_109775660;
        }
      }
      pbVar14 = (byte *)(lVar25 + uVar16);
      pbVar11 = pbVar14;
      FUN_10977f9f0(pbVar14);
      bVar2 = *pbVar14;
      bVar3 = pbVar14[1];
      bVar4 = pbVar14[2];
      bVar5 = pbVar14[3];
      lVar25 = param_1;
      FUN_10977f82c(param_1,(int)pbVar11 + 1,param_2);
      if ((int)lVar25 == 0) {
        puVar12 = *(uint **)(param_1 + 0x38);
        puVar10 = puVar12;
        for (uVar21 = (uint)bVar2 << 0x18 | (uint)bVar3 << 0x10 | (uint)bVar4 << 8 | (uint)bVar5;
            uVar21 != 0; uVar21 = uVar21 - 1) {
          uVar22 = (uint)pbVar14[4] << 0x10 | (uint)pbVar14[5] << 8 | (uint)pbVar14[6];
          iVar19 = pbVar14[7] + 1;
          puVar7 = puVar10;
          do {
            puVar10 = puVar7 + 1;
            *puVar7 = uVar22;
            uVar22 = uVar22 + 1;
            iVar19 = iVar19 + -1;
            puVar7 = puVar10;
          } while (iVar19 != 0);
          pbVar14 = pbVar14 + 4;
        }
        *puVar10 = 0;
      }
      else {
        puVar12 = (uint *)0x0;
      }
      return puVar12;
    }
  }
  return (uint *)0x0;
}



/* Entry: 109775780; end: 10977595f;  */

undefined8 FUN_109775780(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  
  pbVar7 = (byte *)(param_1 + 10);
  if (pbVar7 <= *(byte **)(param_2 + 200)) {
    uVar2 = (*(uint *)(param_1 + 2) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 2) & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar8 = (ulong)uVar2;
    if ((9 < uVar2 && uVar8 <= (ulong)(*(long *)(param_2 + 200) - param_1)) &&
       (uVar3 = (*(uint *)(param_1 + 6) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 6) & 0xff00ff) << 8,
       uVar9 = (ulong)(uVar3 >> 0x10 | uVar3 << 0x10), uVar9 <= (ulong)(uVar2 - 10) / 0xb)) {
      if (uVar9 != 0) {
        uVar10 = 0;
        uVar14 = 1;
        do {
          uVar2 = (*(uint *)(pbVar7 + 3) & 0xff00ff00) >> 8 |
                  (*(uint *)(pbVar7 + 3) & 0xff00ff) << 8;
          uVar15 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
          uVar2 = (*(uint *)(pbVar7 + 7) & 0xff00ff00) >> 8 |
                  (*(uint *)(pbVar7 + 7) & 0xff00ff) << 8;
          uVar12 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
          if ((uVar8 <= uVar15 || uVar8 <= uVar12) ||
             (uVar11 = (ulong)*pbVar7 << 0x10 | (ulong)pbVar7[1] << 8 | (ulong)pbVar7[2],
             uVar11 < uVar14)) goto LAB_109775948;
          if (uVar15 != 0) {
            puVar13 = (uint *)(param_1 + uVar15) + 1;
            if ((*(uint **)(param_2 + 200) < puVar13) ||
               (uVar2 = *(uint *)(param_1 + uVar15),
               uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8,
               uVar14 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10),
               (ulong)(*(long *)(param_2 + 200) - (long)puVar13) >> 2 < uVar14)) goto LAB_109775948;
            if (uVar14 != 0) {
              uVar15 = 0;
              do {
                uVar6 = (ulong)(byte)*puVar13 << 0x10 | (ulong)*(byte *)((long)puVar13 + 1) << 8 |
                        (ulong)*(byte *)((long)puVar13 + 2);
                uVar1 = uVar6 + *(byte *)((long)puVar13 + 3);
                if ((0x10ffff < uVar1) || (uVar6 < uVar15)) goto LAB_109775948;
                uVar15 = uVar1 + 1;
                puVar13 = puVar13 + 1;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
          }
          if (uVar12 != 0) {
            puVar13 = (uint *)(param_1 + uVar12) + 1;
            if ((*(uint **)(param_2 + 200) < puVar13) ||
               (uVar2 = *(uint *)(param_1 + uVar12),
               uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8,
               uVar14 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10),
               (ulong)(*(long *)(param_2 + 200) - (long)puVar13) / 5 < uVar14)) goto LAB_109775948;
            if (uVar14 != 0) {
              uVar12 = 0;
              do {
                if ((0x10 < (ulong)(byte)*puVar13) ||
                   (uVar15 = (ulong)*(byte *)((long)puVar13 + 2) | (ulong)(byte)*puVar13 << 0x10 |
                             (ulong)*(byte *)((long)puVar13 + 1) << 8, uVar15 < uVar12))
                goto LAB_109775948;
                if ((*(int *)(param_2 + 0xd0) != 0) &&
                   (lVar4 = param_2,
                   *(uint *)(param_2 + 0xd8) <=
                   ((uint)(*(ushort *)((long)puVar13 + 3) >> 8) |
                   (*(ushort *)((long)puVar13 + 3) & 0xff00ff) << 8))) goto LAB_109775954;
                uVar12 = uVar15 + 1;
                puVar13 = (uint *)((long)puVar13 + 5);
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
          }
          pbVar7 = pbVar7 + 0xb;
          uVar14 = uVar11 + 1;
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar9);
      }
      return 0;
    }
  }
LAB_109775948:
  lVar4 = 8;
  FUN_109753e48(param_2,8);
LAB_109775954:
  puVar5 = (undefined8 *)0x10;
  FUN_109753e48(lVar4);
  puVar5[1] = 0xe;
  *puVar5 = 0xffffffff;
  return 0;
}



/* Entry: 109775960; end: 1097759a7;  */

undefined8 FUN_109775960(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0xe;
  *param_2 = 0xffffffff;
  return 0;
}



/* Entry: 1097759a8; end: 1097759e3;  */

void FUN_1097759a8(long *param_1)

{
  if (param_1[4] != 0) {
    (**(code **)(*(long *)(*param_1 + 0xb8) + 0x10))();
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1097759e4; end: 109775a03;  */

void FUN_1097759e4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001097759f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*param_1 + 0x378) + 0x10))();
  return;
}



/* Entry: 109775a04; end: 109775aa7;  */

undefined8 FUN_109775a04(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  if ((ulong)*(ushort *)(param_1 + 0x120) == 0) {
    return 0x8e;
  }
  plVar3 = *(long **)(param_1 + 0x128);
  plVar1 = plVar3 + (ulong)*(ushort *)(param_1 + 0x120) * 4;
  while ((*plVar3 != param_2 || (plVar3[3] == 0))) {
    plVar3 = plVar3 + 4;
    if (plVar1 <= plVar3) {
      return 0x8e;
    }
  }
  if (param_4 != (long *)0x0) {
    *param_4 = plVar3[3];
  }
  uVar4 = plVar3[2];
  if (*(code **)(param_3 + 0x28) == (code *)0x0) {
    if (uVar4 <= *(ulong *)(param_3 + 8)) goto LAB_109775a94;
  }
  else {
    lVar2 = param_3;
    (**(code **)(param_3 + 0x28))(param_3,uVar4,0,0);
    if (lVar2 == 0) {
LAB_109775a94:
      *(ulong *)(param_3 + 0x10) = uVar4;
      return 0;
    }
  }
  return 0x55;
}



/* Entry: 109775aa8; end: 109776c97;  */

void FUN_109775aa8(long *param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  long lStack_78;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_64;
  
  lVar16 = param_2[0x16];
  plVar12 = *(long **)(lVar16 + 8);
  puVar18 = (undefined8 *)param_2[0x6e];
  if (puVar18 == (undefined8 *)0x0) {
    plVar13 = plVar12;
    FUN_10975421c(plVar12,&DAT_10f57fb32);
    if (plVar13 == (long *)0x0) {
      return;
    }
    puVar18 = *(undefined8 **)(*plVar13 + 0x28);
    if (puVar18 == (undefined8 *)0x0) {
      return;
    }
    param_2[0x6e] = puVar18;
    param_2[0x68] = *puVar18;
  }
  FUN_1097566b0(lVar16,&DAT_10f57f82c,1);
  param_2[0x6f] = lVar16;
  if (param_2[0x70] == 0) {
    plVar13 = plVar12;
    FUN_10975421c(plVar12,&UNK_10f57fb37);
    if (plVar13 != (long *)0x0) {
      if (*(code **)(*plVar13 + 0x40) == (code *)0x0) {
        plVar13 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar13 + 0x40))();
      }
    }
    param_2[0x70] = plVar13;
  }
  if (param_2[0x71] == 0) {
    FUN_10975421c(plVar12,&UNK_10f57fb37);
    if (plVar12 != (long *)0x0) {
      if (*(code **)(*plVar12 + 0x40) == (code *)0x0) {
        plVar12 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar12 + 0x40))();
      }
    }
    param_2[0x71] = plVar12;
  }
  if (param_2[0x72] == 0) {
    plVar12 = (long *)param_2[0x16];
    if (plVar12 != (long *)0x0) {
      if (*(code **)(*plVar12 + 0x40) == (code *)0x0) {
        plVar12 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar12 + 0x40))(plVar12,&DAT_10f57f7c7);
      }
    }
    param_2[0x72] = plVar12;
  }
  plVar13 = (long *)param_1[7];
  puVar3 = param_2 + 0x1f;
  *puVar3 = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  lVar16 = param_1[2];
  plVar12 = param_1;
  func_0x0001097575b8(param_1,&iStack_70);
  if (iStack_70 != 0) {
    return;
  }
  iVar6 = (int)plVar12;
  if (iVar6 < 0x4f54544f) {
    if (iVar6 < 0x10000) {
      if (iVar6 != -0x5a949d9c) {
        iVar8 = -0x5a938c8c;
        goto LAB_109775cc0;
      }
    }
    else if ((iVar6 != 0x10000) && (iVar6 != 0x20000)) {
      return;
    }
  }
  else if (iVar6 < 0x74746366) {
    if (iVar6 != 0x4f54544f) {
      iVar8 = 0x74727565;
LAB_109775cc0:
      if (iVar6 != iVar8) {
        return;
      }
    }
  }
  else if (iVar6 != 0x74797031) {
    iVar8 = 0x74746366;
    goto LAB_109775cc0;
  }
  *puVar3 = 0x74746366;
  if (iVar6 == 0x74746366) {
    plVar12 = param_1;
    FUN_1097579b0(param_1,&UNK_10dff9128,puVar3);
    if ((int)plVar12 != 0) {
      return;
    }
    uVar7 = param_2[0x21];
    if (uVar7 == 0) {
      return;
    }
    if ((ulong)param_1[1] >> 5 < uVar7) {
      return;
    }
    if ((uVar7 >> 0x1c != 0) || ((*(code *)plVar13[1])(plVar13,uVar7 << 3), plVar13 == (long *)0x0))
    {
      param_2[0x22] = 0;
      return;
    }
    param_2[0x22] = plVar13;
    plVar12 = param_1;
    func_0x00010975780c(param_1,param_2[0x21] << 2);
    iStack_70 = (int)plVar12;
    if (iStack_70 != 0) {
      return;
    }
    if (0 < (long)param_2[0x21]) {
      lVar16 = 0;
      lVar9 = param_2[0x22];
      puVar10 = (uint *)param_1[8];
      uVar7 = param_1[9];
      do {
        if ((long)puVar10 + 3U < uVar7) {
          uVar1 = (*puVar10 & 0xff00ff00) >> 8 | (*puVar10 & 0xff00ff) << 8;
          uVar11 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
          puVar10 = puVar10 + 1;
        }
        else {
          uVar11 = 0;
        }
        param_1[8] = (long)puVar10;
        *(ulong *)(lVar9 + lVar16 * 8) = uVar11;
        lVar16 = lVar16 + 1;
      } while (lVar16 < (long)param_2[0x21]);
    }
    if (param_1[5] != 0) {
      if (*param_1 != 0) {
        (**(code **)(param_1[7] + 0x10))();
      }
      *param_1 = 0;
    }
    param_1[8] = 0;
    param_1[9] = 0;
  }
  else {
    param_2[0x21] = 1;
    param_2[0x20] = 0x10000;
    (*(code *)plVar13[1])(plVar13,8);
    param_2[0x22] = plVar13;
    if (plVar13 == (long *)0x0) {
      return;
    }
    *plVar13 = lVar16;
  }
  uVar7 = param_2[0x18];
  uVar1 = -param_3;
  if ((int)param_3 >= 0) {
    uVar1 = param_3;
  }
  uVar2 = 0;
  if ((uVar1 & 0xffff) != 0) {
    uVar2 = (uint)((int)param_3 < 0);
  }
  uVar11 = (ulong)((uVar1 & 0xffff) - uVar2);
  if ((long)param_2[0x21] <= (long)uVar11) {
    if (-1 < (int)param_3) {
      return;
    }
    uVar11 = 0;
  }
  uVar11 = *(ulong *)(param_2[0x22] + uVar11 * 8);
  if (*(code **)(uVar7 + 0x28) == (code *)0x0) {
    if (*(ulong *)(uVar7 + 8) < uVar11) {
      return;
    }
  }
  else {
    uVar14 = uVar7;
    (**(code **)(uVar7 + 0x28))(uVar7,uVar11,0,0);
    if (uVar14 != 0) {
      return;
    }
  }
  *(ulong *)(uVar7 + 0x10) = uVar11;
  puVar3 = param_2;
  (*(code *)puVar18[0x18])(param_2,uVar7);
  iStack_64 = (int)puVar3;
  if (iStack_64 != 0) {
    return;
  }
  lVar16 = param_2[0x17];
  puVar18 = param_2;
  (*(code *)param_2[0x68])(param_2,0x66766172,uVar7,&iStack_70);
  if (((((int)puVar18 == 0) && (0x13 < CONCAT44(uStack_6c,iStack_70))) &&
      (uVar11 = uVar7, func_0x0001097575b8(uVar7,&iStack_64), iStack_64 == 0)) &&
     (uVar14 = uVar7, func_0x000109757520(uVar7,&iStack_64), iStack_64 == 0)) {
    uVar22 = *(long *)(uVar7 + 0x10) + 2;
    if (*(code **)(uVar7 + 0x28) == (code *)0x0) {
      if (*(ulong *)(uVar7 + 8) < uVar22) goto LAB_109775e60;
    }
    else {
      uVar19 = uVar7;
      (**(code **)(uVar7 + 0x28))(uVar7,uVar22,0,0);
      if (uVar19 != 0) {
LAB_109775e60:
        iStack_64 = 0x55;
        goto LAB_109775f9c;
      }
    }
    *(ulong *)(uVar7 + 0x10) = uVar22;
    iStack_64 = 0;
    uVar22 = uVar7;
    func_0x000109757520(uVar7,&iStack_64);
    if (iStack_64 != 0) goto LAB_109775f9c;
    uVar19 = uVar7;
    func_0x000109757520(uVar7,&iStack_64);
    uVar2 = (uint)uVar19;
    if (((iStack_64 != 0) || (uVar19 = uVar7, func_0x000109757520(uVar7,&iStack_64), iStack_64 != 0)
        ) || (uVar4 = uVar7, func_0x000109757520(uVar7,&iStack_64), iStack_64 != 0))
    goto LAB_109775f9c;
    uVar11 = uVar11 & 0xffffffff;
    uVar14 = uVar14 & 0xffffffff;
  }
  else {
LAB_109775f9c:
    uVar11 = 0;
    uVar14 = 0;
    uVar22 = 0;
    uVar2 = 0;
    uVar19 = 0;
    uVar4 = 0;
  }
  uVar17 = 0;
  iVar6 = (int)uVar4;
  iVar8 = (int)uVar22;
  if (((uVar11 == 0x10000) && (uVar2 == 0x14)) && (0xffffc001 < iVar8 - 0x3fffU)) {
    uVar21 = (uint)(uVar19 >> 8);
    if (iVar8 * 4 + 4 == iVar6) {
      if ((uVar21 & 0xffffff) < 0x7f) {
LAB_109776018:
        if (uVar14 + (uint)(iVar8 * 0x14) + (ulong)(iVar6 * (uint)uVar19) <=
            CONCAT44(uStack_6c,iStack_70)) {
          *(uint *)(param_2 + 0x99) = *(uint *)(param_2 + 0x99) | 1;
          uVar17 = (uint)uVar19;
          goto LAB_109776050;
        }
      }
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      if ((iVar8 * 4 + 6 == iVar6) && ((uVar21 & 0xffffff) < 0x7f)) goto LAB_109776018;
    }
  }
LAB_109776050:
  if ((*(byte *)(param_2 + 0x99) & 1) == 0) goto LAB_1097761fc;
  iVar6 = iVar8 << 2;
  if (iVar8 == 0) {
    lVar20 = 0;
    lStack_78 = 0;
    iStack_64 = 0;
    lVar9 = uVar14 + *(long *)(uVar7 + 0x10);
LAB_109776120:
    if (uVar17 == 0) {
      uVar2 = 0;
    }
    else {
      uVar21 = 0;
      lVar9 = lVar9 + -0x10 + (ulong)(uVar2 * iVar8 + 4);
      do {
        uVar11 = uVar7;
        func_0x000109757778(uVar7,lVar9,lVar20,iVar6);
        lVar5 = lStack_78;
        _memcmp(lStack_78,lVar20,iVar6);
        uVar2 = uVar21;
        if ((int)lVar5 == 0) break;
        lVar9 = lVar9 + (uVar4 & 0xffffffff);
        uVar21 = uVar21 + 1;
        uVar2 = uVar17;
      } while (uVar17 != uVar21);
      iStack_64 = (int)uVar11;
    }
    *(uint *)((long)param_2 + 0x4dc) = uVar2 + 1;
    if (uVar2 == uVar17) {
      uVar17 = uVar17 + 1;
    }
    if (lStack_78 != 0) goto LAB_1097761dc;
  }
  else {
    lStack_78 = lVar16;
    (**(code **)(lVar16 + 8))(lVar16,iVar6);
    if (lStack_78 == 0) {
      iStack_64 = 0x40;
      goto LAB_1097761fc;
    }
    lVar20 = lVar16;
    (**(code **)(lVar16 + 8))(lVar16,iVar6);
    if (lVar20 != 0) {
      lVar9 = uVar14 + *(long *)(uVar7 + 0x10);
      lVar15 = lVar9 + -8;
      lVar5 = lStack_78;
      do {
        uVar11 = uVar7;
        func_0x000109757778(uVar7,lVar15,lVar5,4);
        lVar15 = lVar15 + (ulong)uVar2;
        lVar5 = lVar5 + 4;
        uVar21 = (int)uVar22 - 1;
        uVar22 = (ulong)uVar21;
      } while (uVar21 != 0);
      iStack_64 = (int)uVar11;
      uVar4 = uVar4 & 0xffffffff;
      goto LAB_109776120;
    }
    iStack_64 = 0x40;
LAB_1097761dc:
    (**(code **)(lVar16 + 0x10))(lVar16,lStack_78);
  }
  if (lVar20 != 0) {
    (**(code **)(lVar16 + 0x10))(lVar16,lVar20);
  }
LAB_1097761fc:
  puVar18 = param_2;
  (*(code *)param_2[0x68])(param_2,0x676c7966,uVar7,0);
  uVar2 = uVar17;
  if (((int)puVar18 != 0) &&
     (puVar18 = param_2, (*(code *)param_2[0x68])(param_2,0x43464632,uVar7,0), (int)puVar18 != 0)) {
    puVar18 = param_2;
    (*(code *)param_2[0x68])(param_2,0x43464620,uVar7,0);
    uVar2 = 0;
    if ((int)puVar18 != 0) {
      uVar2 = uVar17;
    }
  }
  if ((uVar2 & 0xffff) < uVar1 >> 0x10) {
    if (-1 < (int)param_3) {
      return;
    }
    uVar2 = 0;
  }
  param_2[3] = (ulong)(uVar2 << 0x10);
  *param_2 = param_2[0x21];
  param_2[1] = (long)(int)param_3;
  return;
}



/* Entry: 109776c98; end: 109776f2f;  */

void FUN_109776c98(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0xb8);
    lVar3 = *(long *)(param_1 + 0x370);
    if (lVar3 != 0) {
      if (*(code **)(lVar3 + 0xa8) != (code *)0x0) {
        (**(code **)(lVar3 + 0xa8))(param_1);
      }
      if (*(code **)(lVar3 + 0xd8) != (code *)0x0) {
        (**(code **)(lVar3 + 0xd8))(param_1);
      }
      if (*(code **)(lVar3 + 0x100) != (code *)0x0) {
        (**(code **)(lVar3 + 0x100))(param_1);
        (**(code **)(lVar3 + 0x108))(param_1);
      }
      if (*(code **)(lVar3 + 0x170) != (code *)0x0) {
        (**(code **)(lVar3 + 0x170))(param_1);
      }
    }
    lVar1 = *(long *)(param_1 + 0xc0);
    if (((lVar1 != 0) && (*(long *)(lVar1 + 0x28) != 0)) && (*(long *)(param_1 + 0x550) != 0)) {
      (**(code **)(*(long *)(lVar1 + 0x38) + 0x10))();
    }
    *(long *)(param_1 + 0x550) = 0;
    *(undefined8 *)(param_1 + 0x558) = 0;
    *(undefined4 *)(param_1 + 0x568) = 0;
    *(undefined8 *)(param_1 + 0x560) = 0;
    if (*(long *)(param_1 + 0x110) != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    if (*(long *)(param_1 + 0x128) != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined2 *)(param_1 + 0x120) = 0;
    lVar1 = *(long *)(param_1 + 0xc0);
    if (((lVar1 != 0) && (*(long *)(lVar1 + 0x28) != 0)) && (*(long *)(param_1 + 0x330) != 0)) {
      (**(code **)(*(long *)(lVar1 + 0x38) + 0x10))();
    }
    *(undefined8 *)(param_1 + 0x4f0) = 0;
    *(undefined8 *)(param_1 + 0x4e8) = 0;
    *(long *)(param_1 + 0x330) = 0;
    *(undefined8 *)(param_1 + 0x338) = 0;
    if (*(char *)(param_1 + 0x1f0) != '\0') {
      if (*(long *)(param_1 + 0x220) != 0) {
        (**(code **)(lVar2 + 0x10))(lVar2);
      }
      *(undefined8 *)(param_1 + 0x220) = 0;
      if (*(long *)(param_1 + 0x228) != 0) {
        (**(code **)(lVar2 + 0x10))(lVar2);
      }
      *(undefined8 *)(param_1 + 0x228) = 0;
      *(undefined1 *)(param_1 + 0x1f0) = 0;
    }
    if (*(long *)(param_1 + 0x3a8) != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    *(undefined2 *)(param_1 + 0x3a2) = 0;
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x68))(param_1);
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (*(long *)(param_1 + 0x30) != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (*(long *)(param_1 + 0x40) != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (*(long *)(param_1 + 0x548) != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
    *(undefined8 *)(param_1 + 0x548) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (*(long *)(param_1 + 0x4a0) != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
    *(undefined8 *)(param_1 + 0x4a0) = 0;
    if (*(long *)(param_1 + 0x4d0) != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
    *(undefined8 *)(param_1 + 0x4d0) = 0;
    if (*(long *)(param_1 + 0x4e0) != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
    *(undefined8 *)(param_1 + 0x4e0) = 0;
    if (*(long *)(param_1 + 0x420) != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
    *(undefined8 *)(param_1 + 0x420) = 0;
    if (*(long *)(param_1 + 0x428) != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
    *(undefined8 *)(param_1 + 0x428) = 0;
    if (*(long *)(param_1 + 0x438) != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
    *(undefined8 *)(param_1 + 0x438) = 0;
    if (*(long *)(param_1 + 0x448) != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
    *(undefined8 *)(param_1 + 0x448) = 0;
    *(undefined8 *)(param_1 + 0x370) = 0;
  }
  return;
}



/* Entry: 109776f30; end: 109776faf;  */

undefined4
FUN_109776f30(long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 *param_5)

{
  long *plVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_2 == 0) {
    plVar4 = *(long **)(*(long *)(param_1 + 0xc0) + 8);
joined_r0x000109776f74:
    plVar3 = plVar4;
    if ((param_5 != (undefined8 *)0x0) &&
       (plVar3 = (long *)*param_5, (long *)*param_5 == (long *)0x0)) {
      *param_5 = plVar4;
      return 0;
    }
    plVar1 = *(long **)(param_1 + 0xc0);
    plVar4 = (long *)(plVar1[1] - param_3);
    if (param_3 <= (ulong)plVar1[1] && plVar4 != (long *)0x0) {
      if ((code *)plVar1[5] == (code *)0x0) {
        if (plVar3 <= plVar4) {
          plVar4 = plVar3;
        }
        if (plVar3 != (long *)0x0) {
          _memcpy(param_4,*plVar1 + param_3,plVar4);
        }
      }
      else {
        plVar4 = plVar1;
        (*(code *)plVar1[5])(plVar1,param_3,param_4,plVar3);
      }
      plVar1[2] = (long)plVar4 + param_3;
      uVar2 = 0x55;
      if (plVar3 <= plVar4) {
        uVar2 = 0;
      }
      return uVar2;
    }
    return 0x55;
  }
  if ((ulong)*(ushort *)(param_1 + 0x120) != 0) {
    plVar3 = *(long **)(param_1 + 0x128);
    plVar1 = plVar3 + (ulong)*(ushort *)(param_1 + 0x120) * 4;
    do {
      if ((*plVar3 == param_2) && (plVar4 = (long *)plVar3[3], plVar4 != (long *)0x0)) {
        param_3 = plVar3[2] + param_3;
        goto joined_r0x000109776f74;
      }
      plVar3 = plVar3 + 4;
    } while (plVar3 < plVar1);
  }
  return 0x8e;
}



/* Entry: 109776fb0; end: 109777093;  */

/* WARNING: Removing unreachable block (ram,0x000109757b84) */

long * FUN_109776fb0(long *param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  long *plVar15;
  ushort *puVar16;
  
  plVar8 = param_1;
  (*(code *)param_1[0x68])(param_1,0x68656164,param_2,0);
  if ((int)plVar8 != 0) {
    return plVar8;
  }
  if (param_2 == (long *)0x0) {
    return (long *)0x28;
  }
  bVar7 = false;
  plVar8 = param_2 + 8;
  puVar16 = (ushort *)&UNK_10dff91be;
  puVar13 = (uint *)*plVar8;
  do {
    bVar4 = (byte)puVar16[-1];
    uVar9 = (uint)bVar4;
    if (bVar4 < 0x10) {
      if (0xb < bVar4) {
        if (uVar9 - 0xc < 2) {
          uVar10 = (ulong)((uint)(ushort)((ushort)*puVar13 >> 8) |
                          ((ushort)*puVar13 & 0xff00ff) << 8);
        }
        else {
          if (1 < uVar9 - 0xe) goto LAB_109757bac;
          uVar10 = (ulong)(ushort)*puVar13;
        }
        puVar14 = (uint *)((long)puVar13 + 2);
        iVar12 = 0x10;
        goto LAB_109757b08;
      }
      if (uVar9 - 8 < 2) {
        puVar14 = (uint *)((long)puVar13 + 1);
        uVar10 = (ulong)(byte)*puVar13;
        iVar12 = 0x18;
        goto LAB_109757b08;
      }
      if (uVar9 != 4) {
LAB_109757bac:
        plVar15 = (long *)0x0;
        *plVar8 = (long)puVar13;
joined_r0x000109757b98:
        if (!bVar7) {
          return plVar15;
        }
        if (param_2[5] != 0) {
          if (*param_2 != 0) {
            (**(code **)(param_2[7] + 0x10))();
          }
          *param_2 = 0;
        }
        *plVar8 = 0;
        param_2[9] = 0;
        return plVar15;
      }
      plVar15 = param_2;
      func_0x00010975780c(param_2,*puVar16);
      if ((int)plVar15 != 0) goto joined_r0x000109757b98;
      puVar14 = (uint *)*plVar8;
      bVar7 = true;
    }
    else {
      if (uVar9 < 0x1a) {
        uVar6 = 1 << (ulong)(uVar9 & 0x1f);
        if ((uVar6 & 0x300000) == 0) {
          if ((uVar6 & 0xc00000) == 0) {
            if ((uVar6 & 0x3000000) == 0) goto LAB_109757a94;
            uVar10 = (ulong)*(byte *)((long)puVar16 + -1);
            if (uVar10 <= (ulong)(param_2[9] - (long)puVar13)) {
              if (uVar9 == 0x18) {
                _memcpy((long)param_1 + (ulong)*puVar16 + 0x130,puVar13,uVar10);
              }
              puVar14 = (uint *)((long)puVar13 + uVar10);
              goto LAB_109757b7c;
            }
            plVar15 = (long *)0x55;
            goto joined_r0x000109757b98;
          }
          bVar1 = *(byte *)((long)puVar13 + 2);
          bVar2 = *(byte *)((long)puVar13 + 1);
          bVar3 = (byte)*puVar13;
        }
        else {
          bVar1 = (byte)*puVar13;
          bVar2 = *(byte *)((long)puVar13 + 1);
          bVar3 = *(byte *)((long)puVar13 + 2);
        }
        puVar14 = (uint *)((long)puVar13 + 3);
        uVar10 = (ulong)bVar1 << 0x10 | (ulong)bVar2 << 8 | (ulong)bVar3;
        iVar12 = 8;
      }
      else {
LAB_109757a94:
        if (uVar9 - 0x10 < 2) {
          iVar12 = 0;
          puVar14 = puVar13 + 1;
          uVar9 = (*puVar13 & 0xff00ff00) >> 8 | (*puVar13 & 0xff00ff) << 8;
          uVar10 = (ulong)(uVar9 >> 0x10 | uVar9 << 0x10);
        }
        else {
          if (1 < uVar9 - 0x12) goto LAB_109757bac;
          iVar12 = 0;
          puVar14 = puVar13 + 1;
          uVar10 = (ulong)*puVar13;
        }
      }
LAB_109757b08:
      if ((bVar4 & 1) != 0) {
        uVar10 = (long)(((int)uVar10 << iVar12) >> iVar12);
      }
      uVar11 = (ulong)*puVar16;
      cVar5 = *(char *)((long)puVar16 + -1);
      if (cVar5 == '\x04') {
        *(int *)((long)param_1 + uVar11 + 0x130) = (int)uVar10;
      }
      else if (cVar5 == '\x02') {
        *(short *)((long)param_1 + uVar11 + 0x130) = (short)uVar10;
      }
      else if (cVar5 == '\x01') {
        *(char *)((long)param_1 + uVar11 + 0x130) = (char)uVar10;
      }
      else {
        *(ulong *)((long)param_1 + uVar11 + 0x130) = uVar10;
      }
    }
LAB_109757b7c:
    puVar16 = puVar16 + 2;
    puVar13 = puVar14;
  } while( true );
}



/* Entry: 109777094; end: 1097770ff;  */

void FUN_109777094(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)(param_1 + 0x338);
  lVar2 = param_1;
  (**(code **)(param_1 + 0x340))(param_1,0x636d6170,param_2,puVar1);
  if ((int)lVar2 == 0) {
    lVar2 = param_2;
    func_0x00010975780c(param_2,*puVar1);
    if ((int)lVar2 == 0) {
      *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_2 + 0x40);
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
    }
    else {
      *puVar1 = 0;
    }
  }
  return;
}



/* Entry: 109777100; end: 109777333;  */

void FUN_109777100(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  (**(code **)(param_1 + 0x340))(param_1,0x6d617870,param_2,0);
  if (((int)lVar1 == 0) &&
     (uVar2 = param_2, FUN_1097579b0(param_2,&UNK_10dff925c,param_1 + 0x1c8), (int)uVar2 == 0)) {
    *(undefined2 *)(param_1 + 0x1ea) = 0;
    *(undefined8 *)(param_1 + 0x1da) = 0;
    *(undefined8 *)(param_1 + 0x1d2) = 0;
    *(undefined8 *)(param_1 + 0x1e2) = 0;
    if ((0xffff < *(long *)(param_1 + 0x1c8)) &&
       (FUN_1097579b0(param_2,&UNK_10dff926c,param_1 + 0x1c8), (int)param_2 == 0)) {
      if (*(ushort *)(param_1 + 0x1e0) < 0x40) {
        *(undefined2 *)(param_1 + 0x1e0) = 0x40;
      }
      if (0xfffb < *(ushort *)(param_1 + 0x1dc)) {
        *(undefined2 *)(param_1 + 0x1dc) = 0xfffb;
      }
    }
  }
  return;
}



/* Entry: 109777334; end: 109777743;  */

long * FUN_109777334(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ushort *puVar7;
  int iVar8;
  ulong uVar9;
  ushort *puVar10;
  ushort *puVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  long lStack_70;
  uint uStack_64;
  
  puVar7 = (ushort *)param_2[7];
  param_1[0x4c] = (long)param_2;
  plVar12 = param_1;
  (*(code *)param_1[0x68])(param_1,0x6e616d65,param_2,&lStack_70);
  if ((int)plVar12 != 0) {
    return plVar12;
  }
  lVar14 = param_2[2];
  plVar12 = param_2;
  FUN_1097579b0(param_2,&UNK_10dff93c0,param_1 + 0x47);
  if ((int)plVar12 != 0) {
    return plVar12;
  }
  uVar1 = lVar14 + 6;
  uVar4 = *(uint *)((long)param_1 + 0x23c);
  uVar9 = uVar1 + uVar4 * 0xc;
  uVar2 = lStack_70 + lVar14;
  if (uVar2 < uVar9) {
    return (long *)0x91;
  }
  if ((short)param_1[0x47] == 1) {
    if ((code *)param_2[5] == (code *)0x0) {
      if (uVar9 <= (ulong)param_2[1]) goto LAB_109777430;
    }
    else {
      plVar12 = param_2;
      (*(code *)param_2[5])(param_2,uVar9,0,0);
      if (plVar12 == (long *)0x0) {
LAB_109777430:
        param_2[2] = uVar9;
        uStack_64 = 0;
        plVar12 = param_2;
        func_0x000109757520(param_2,&uStack_64);
        uVar4 = (uint)plVar12;
        *(uint *)(param_1 + 0x4a) = uVar4;
        if (uStack_64 != 0) {
          return (long *)(ulong)uStack_64;
        }
        if (uVar4 == 0) {
          puVar10 = (ushort *)0x0;
          iVar13 = 0;
        }
        else {
          puVar10 = puVar7;
          (**(code **)(puVar7 + 4))(puVar7,((ulong)plVar12 & 0xffffffff) * 0x18);
          if (puVar10 == (ushort *)0x0) {
            return (long *)0x40;
          }
          iVar13 = (int)param_1[0x4a];
        }
        plVar12 = param_2;
        func_0x00010975780c(param_2,iVar13 << 2);
        if ((int)plVar12 == 0) {
          uVar9 = uVar9 + ((uVar4 & 0xffff) << 2 | 2);
          if ((puVar10 != (ushort *)0x0) && (uVar4 = *(uint *)(param_1 + 0x4a), uVar4 != 0)) {
            puVar11 = puVar10;
            do {
              plVar12 = param_2;
              FUN_1097579b0(param_2,&UNK_10dff93f0,puVar11);
              uVar3 = lVar14 + (ulong)*(uint *)(param_1 + 0x48) + *(long *)(puVar11 + 4);
              *(ulong *)(puVar11 + 4) = uVar3;
              if ((uVar3 < uVar9) || (uVar2 < uVar3 + *puVar11)) {
                *puVar11 = 0;
              }
              puVar11[8] = 0;
              puVar11[9] = 0;
              puVar11[10] = 0;
              puVar11[0xb] = 0;
              puVar11 = puVar11 + 0xc;
            } while (puVar11 < puVar10 + (ulong)uVar4 * 0xc);
            uStack_64 = (uint)plVar12;
          }
          param_1[0x4b] = (long)puVar10;
          pcVar6 = (code *)param_2[5];
          if (pcVar6 == (code *)0x0) {
            param_2[8] = 0;
            param_2[9] = 0;
LAB_109777570:
            if (uVar1 <= (ulong)param_2[1]) goto LAB_10977757c;
          }
          else {
            if (*param_2 == 0) {
              param_2[8] = 0;
              param_2[9] = 0;
            }
            else {
              (**(code **)(param_2[7] + 0x10))();
              pcVar6 = (code *)param_2[5];
              *param_2 = 0;
              param_2[8] = 0;
              param_2[9] = 0;
              if (pcVar6 == (code *)0x0) goto LAB_109777570;
            }
            plVar12 = param_2;
            (*pcVar6)(param_2,uVar1,0,0);
            if (plVar12 == (long *)0x0) {
LAB_10977757c:
              param_2[2] = uVar1;
            }
          }
          uVar4 = *(uint *)((long)param_1 + 0x23c);
          goto LAB_109777584;
        }
        if (puVar10 == (ushort *)0x0) {
          return plVar12;
        }
        pcVar6 = *(code **)(puVar7 + 8);
        goto LAB_1097775ec;
      }
    }
    plVar12 = (long *)0x55;
  }
  else {
LAB_109777584:
    if (uVar4 == 0) {
      iVar13 = 0;
      puVar10 = (ushort *)0x0;
    }
    else {
      if (uVar4 >> 0x1a != 0) {
        return (long *)0xa;
      }
      puVar10 = puVar7;
      (**(code **)(puVar7 + 4))(puVar7,uVar4 << 5);
      if (puVar10 == (ushort *)0x0) {
        return (long *)0x40;
      }
      iVar13 = *(int *)((long)param_1 + 0x23c) * 0xc;
    }
    plVar12 = param_2;
    func_0x00010975780c(param_2,iVar13);
    uStack_64 = (uint)plVar12;
    if (uStack_64 == 0) {
      iVar13 = *(int *)((long)param_1 + 0x23c);
      if (iVar13 == 0) {
        uVar5 = 0;
        iVar8 = 0;
        uStack_64 = 0;
      }
      else {
        iVar8 = 0;
        uStack_64 = 0;
        puVar11 = puVar10;
        do {
          plVar12 = param_2;
          FUN_1097579b0(param_2,&UNK_10dff93d4,puVar11);
          uStack_64 = (uint)plVar12;
          if ((uStack_64 == 0) && ((ulong)puVar11[4] != 0)) {
            uVar1 = lVar14 + (ulong)*(uint *)(param_1 + 0x48) + *(long *)(puVar11 + 8);
            *(ulong *)(puVar11 + 8) = uVar1;
            if ((uVar9 <= uVar1 && uVar1 + puVar11[4] <= uVar2) &&
               ((((short)param_1[0x47] != 1 || (-1 < (short)puVar11[2])) ||
                ((uVar4 = puVar11[2] - 0x8000, uVar4 < *(uint *)(param_1 + 0x4a) &&
                 (*(short *)(param_1[0x4b] + (ulong)uVar4 * 0x18) != 0)))))) {
              puVar11[0xc] = 0;
              puVar11[0xd] = 0;
              puVar11[0xe] = 0;
              puVar11[0xf] = 0;
              iVar8 = iVar8 + 1;
              puVar11 = puVar11 + 0x10;
            }
          }
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        uVar5 = *(undefined4 *)((long)param_1 + 0x23c);
      }
      func_0x000109755910(puVar7,0x20,uVar5,iVar8,puVar10,&uStack_64);
      param_1[0x49] = (long)puVar7;
      *(int *)((long)param_1 + 0x23c) = iVar8;
      if (param_2[5] != 0) {
        if (*param_2 != 0) {
          (**(code **)(param_2[7] + 0x10))();
        }
        *param_2 = 0;
      }
      param_2[8] = 0;
      param_2[9] = 0;
      *(short *)(param_1 + 0x46) = (short)*(undefined4 *)((long)param_1 + 0x23c);
      return (long *)(ulong)uStack_64;
    }
    if (puVar10 == (ushort *)0x0) {
      return plVar12;
    }
    pcVar6 = *(code **)(puVar7 + 8);
LAB_1097775ec:
    (*pcVar6)(puVar7,puVar10);
  }
  return plVar12;
}



/* Entry: 109777744; end: 109777827;  */

void FUN_109777744(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 0xb8);
  uVar2 = *(ulong *)(param_1 + 0x248);
  if (uVar2 != 0) {
    if (*(uint *)(param_1 + 0x23c) == 0) {
LAB_10977779c:
      (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
    }
    else {
      uVar3 = uVar2 + (ulong)*(uint *)(param_1 + 0x23c) * 0x20;
      do {
        if (*(long *)(uVar2 + 0x18) != 0) {
          (**(code **)(lVar1 + 0x10))(lVar1);
        }
        *(undefined8 *)(uVar2 + 0x18) = 0;
        uVar2 = uVar2 + 0x20;
      } while (uVar2 < uVar3);
      uVar2 = *(ulong *)(param_1 + 0x248);
      if (uVar2 != 0) goto LAB_10977779c;
    }
    *(undefined8 *)(param_1 + 0x248) = 0;
  }
  uVar2 = *(ulong *)(param_1 + 600);
  if (uVar2 == 0) goto LAB_109777808;
  if (*(uint *)(param_1 + 0x250) == 0) {
LAB_1097777f4:
    (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  }
  else {
    uVar3 = uVar2 + (ulong)*(uint *)(param_1 + 0x250) * 0x18;
    do {
      if (*(long *)(uVar2 + 0x10) != 0) {
        (**(code **)(lVar1 + 0x10))(lVar1);
      }
      *(undefined8 *)(uVar2 + 0x10) = 0;
      uVar2 = uVar2 + 0x18;
    } while (uVar2 < uVar3);
    uVar2 = *(ulong *)(param_1 + 600);
    if (uVar2 != 0) goto LAB_1097777f4;
  }
  *(undefined8 *)(param_1 + 600) = 0;
LAB_109777808:
  *(undefined8 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined2 *)(param_1 + 0x238) = 0;
  return;
}



/* Entry: 109777828; end: 1097779c7;  */

void FUN_109777828(long param_1,long param_2)

{
  ulong uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong uStack_28;
  
  lVar13 = param_1;
  (**(code **)(param_1 + 0x340))(param_1,0x6b65726e,param_2,&uStack_28);
  if ((((int)lVar13 == 0) && (3 < uStack_28)) &&
     (lVar13 = param_2, func_0x00010975780c(), (int)lVar13 == 0)) {
    *(undefined8 *)(param_1 + 0x550) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(ulong *)(param_1 + 0x558) = uStack_28;
    lVar13 = *(long *)(param_1 + 0x550);
    uVar3 = (uint)(*(ushort *)(lVar13 + 2) >> 8) | (*(ushort *)(lVar13 + 2) & 0xff00ff) << 8;
    if (uVar3 == 0) {
      uVar9 = 0;
      uVar10 = 0;
      uVar12 = 0;
    }
    else {
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uStack_28 = lVar13 + uStack_28;
      if (0x1f < uVar3) {
        uVar3 = 0x20;
      }
      uVar14 = lVar13 + 4;
      do {
        uVar12 = uVar11;
        if ((uStack_28 < uVar14 + 6) ||
           (uVar4 = (uint)(*(ushort *)(uVar14 + 2) >> 8) | (*(ushort *)(uVar14 + 2) & 0xff00ff) << 8
           , uVar4 < 0xf)) break;
        uVar7 = uVar14 + uVar4;
        uVar1 = uStack_28;
        if (uVar7 <= uStack_28) {
          uVar1 = uVar7;
        }
        if ((*(char *)(uVar14 + 4) == '\0') &&
           ((*(byte *)(uVar14 + 5) & 3) == 1 && uVar14 + 0xe <= uVar1)) {
          uVar4 = 1 << (ulong)(uVar11 & 0x1f);
          uVar2 = *(ushort *)(uVar14 + 6);
          uVar5 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
          lVar13 = uVar1 - (uVar14 + 0xe);
          auVar6 = SEXT816(lVar13) * SEXT816(0x2aaaaaaaaaaaaaab);
          uVar12 = auVar6._8_4_ - (auVar6._12_4_ >> 0x1f);
          if ((long)(ulong)((uVar5 * 2 + ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8)) * 2) <=
              lVar13) {
            uVar12 = uVar5;
          }
          uVar10 = uVar4 | uVar10;
          if (uVar12 != 0) {
            uVar7 = (ulong)(uVar12 - 1);
            if (uVar12 - 1 != 0) {
              uVar12 = (*(uint *)(uVar14 + 0xe) & 0xff00ff00) >> 8 |
                       (*(uint *)(uVar14 + 0xe) & 0xff00ff) << 8;
              puVar8 = (uint *)(uVar14 + 0x14);
              uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
              do {
                uVar5 = (*puVar8 & 0xff00ff00) >> 8 | (*puVar8 & 0xff00ff) << 8;
                uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
                if (uVar5 < uVar12) goto LAB_109777984;
                uVar7 = uVar7 - 1;
                puVar8 = (uint *)((long)puVar8 + 6);
                uVar12 = uVar5;
              } while (uVar7 != 0);
            }
            uVar9 = uVar9 | uVar4;
          }
        }
LAB_109777984:
        uVar11 = uVar11 + 1;
        uVar14 = uVar1;
        uVar12 = uVar3;
      } while (uVar11 != uVar3);
    }
    *(uint *)(param_1 + 0x560) = uVar12;
    *(uint *)(param_1 + 0x564) = uVar10;
    *(uint *)(param_1 + 0x568) = uVar9;
  }
  return;
}



/* Entry: 1097779c8; end: 109777bb7;  */

long * FUN_1097779c8(long *param_1,long *param_2)

{
  ulong uVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  
  lVar5 = param_2[7];
  plVar7 = param_1;
  (*(code *)param_1[0x68])(param_1,0x67617370,param_2,0);
  if (((int)plVar7 == 0) && (plVar7 = param_2, func_0x00010975780c(param_2,4), (int)plVar7 == 0)) {
    plVar8 = param_2 + 8;
    puVar2 = (ushort *)*plVar8;
    uVar10 = param_2[9];
    if ((long)puVar2 + 1U < uVar10) {
      uVar3 = *puVar2 >> 8 | *puVar2 << 8;
      puVar2 = puVar2 + 1;
    }
    else {
      uVar3 = 0;
    }
    *plVar8 = (long)puVar2;
    *(ushort *)(param_1 + 0x74) = uVar3;
    if ((long)puVar2 + 1U < uVar10) {
      uVar9 = (uint)(*puVar2 >> 8) | (*puVar2 & 0xff00ff) << 8;
      puVar2 = puVar2 + 1;
    }
    else {
      uVar9 = 0;
    }
    param_2[8] = (long)puVar2;
    if (param_2[5] != 0) {
      if (*param_2 != 0) {
        (**(code **)(param_2[7] + 0x10))();
      }
      *param_2 = 0;
    }
    *plVar8 = 0;
    param_2[9] = 0;
    if (*(ushort *)(param_1 + 0x74) < 2) {
      if (uVar9 == 0) {
        plVar7 = param_2;
        func_0x00010975780c(param_2,0);
        if ((int)plVar7 != 0) {
          return plVar7;
        }
        lVar6 = 0;
      }
      else {
        uVar10 = (ulong)uVar9;
        lVar6 = lVar5;
        (**(code **)(lVar5 + 8))(lVar5,uVar10 << 2);
        if (lVar6 == 0) {
          return (long *)0x40;
        }
        plVar7 = param_2;
        func_0x00010975780c(param_2,uVar10 << 2);
        if ((int)plVar7 != 0) {
          (**(code **)(lVar5 + 0x10))(lVar5,lVar6);
          return plVar7;
        }
        puVar2 = (ushort *)param_2[8];
        uVar1 = param_2[9];
        puVar4 = (ushort *)(lVar6 + 2);
        do {
          if ((long)puVar2 + 1U < uVar1) {
            uVar3 = *puVar2 >> 8 | *puVar2 << 8;
            puVar2 = puVar2 + 1;
          }
          else {
            uVar3 = 0;
          }
          *plVar8 = (long)puVar2;
          puVar4[-1] = uVar3;
          if ((long)puVar2 + 1U < uVar1) {
            uVar3 = *puVar2 >> 8 | *puVar2 << 8;
            puVar2 = puVar2 + 1;
          }
          else {
            uVar3 = 0;
          }
          *plVar8 = (long)puVar2;
          *puVar4 = uVar3;
          uVar10 = uVar10 - 1;
          puVar4 = puVar4 + 2;
        } while (uVar10 != 0);
      }
      param_1[0x75] = lVar6;
      *(short *)((long)param_1 + 0x3a2) = (short)uVar9;
      if (param_2[5] != 0) {
        if (*param_2 != 0) {
          (**(code **)(param_2[7] + 0x10))();
        }
        *param_2 = 0;
      }
      plVar7 = (long *)0x0;
      *plVar8 = 0;
      param_2[9] = 0;
    }
    else {
      *(undefined2 *)((long)param_1 + 0x3a2) = 0;
      plVar7 = (long *)0x8;
    }
  }
  return plVar7;
}



/* Entry: 109777bb8; end: 109777c67;  */

/* WARNING: Removing unreachable block (ram,0x000109757b84) */

long * FUN_109777bb8(long *param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  long *plVar15;
  ushort *puVar16;
  
  plVar8 = param_1;
  (*(code *)param_1[0x68])(param_1,0x50434c54,param_2,0);
  if ((int)plVar8 != 0) {
    return plVar8;
  }
  if (param_2 == (long *)0x0) {
    return (long *)0x28;
  }
  bVar7 = false;
  plVar8 = param_2 + 8;
  puVar16 = (ushort *)&UNK_10dff93fe;
  puVar13 = (uint *)*plVar8;
  do {
    bVar4 = (byte)puVar16[-1];
    uVar9 = (uint)bVar4;
    if (bVar4 < 0x10) {
      if (0xb < bVar4) {
        if (uVar9 - 0xc < 2) {
          uVar10 = (ulong)((uint)(ushort)((ushort)*puVar13 >> 8) |
                          ((ushort)*puVar13 & 0xff00ff) << 8);
        }
        else {
          if (1 < uVar9 - 0xe) goto LAB_109757bac;
          uVar10 = (ulong)(ushort)*puVar13;
        }
        puVar14 = (uint *)((long)puVar13 + 2);
        iVar12 = 0x10;
        goto LAB_109757b08;
      }
      if (uVar9 - 8 < 2) {
        puVar14 = (uint *)((long)puVar13 + 1);
        uVar10 = (ulong)(byte)*puVar13;
        iVar12 = 0x18;
        goto LAB_109757b08;
      }
      if (uVar9 != 4) {
LAB_109757bac:
        plVar15 = (long *)0x0;
        *plVar8 = (long)puVar13;
joined_r0x000109757b98:
        if (!bVar7) {
          return plVar15;
        }
        if (param_2[5] != 0) {
          if (*param_2 != 0) {
            (**(code **)(param_2[7] + 0x10))();
          }
          *param_2 = 0;
        }
        *plVar8 = 0;
        param_2[9] = 0;
        return plVar15;
      }
      plVar15 = param_2;
      func_0x00010975780c(param_2,*puVar16);
      if ((int)plVar15 != 0) goto joined_r0x000109757b98;
      puVar14 = (uint *)*plVar8;
      bVar7 = true;
    }
    else {
      if (uVar9 < 0x1a) {
        uVar6 = 1 << (ulong)(uVar9 & 0x1f);
        if ((uVar6 & 0x300000) == 0) {
          if ((uVar6 & 0xc00000) == 0) {
            if ((uVar6 & 0x3000000) == 0) goto LAB_109757a94;
            uVar10 = (ulong)*(byte *)((long)puVar16 + -1);
            if (uVar10 <= (ulong)(param_2[9] - (long)puVar13)) {
              if (uVar9 == 0x18) {
                _memcpy((long)param_1 + (ulong)*puVar16 + 0x3b0,puVar13,uVar10);
              }
              puVar14 = (uint *)((long)puVar13 + uVar10);
              goto LAB_109757b7c;
            }
            plVar15 = (long *)0x55;
            goto joined_r0x000109757b98;
          }
          bVar1 = *(byte *)((long)puVar13 + 2);
          bVar2 = *(byte *)((long)puVar13 + 1);
          bVar3 = (byte)*puVar13;
        }
        else {
          bVar1 = (byte)*puVar13;
          bVar2 = *(byte *)((long)puVar13 + 1);
          bVar3 = *(byte *)((long)puVar13 + 2);
        }
        puVar14 = (uint *)((long)puVar13 + 3);
        uVar10 = (ulong)bVar1 << 0x10 | (ulong)bVar2 << 8 | (ulong)bVar3;
        iVar12 = 8;
      }
      else {
LAB_109757a94:
        if (uVar9 - 0x10 < 2) {
          iVar12 = 0;
          puVar14 = puVar13 + 1;
          uVar9 = (*puVar13 & 0xff00ff00) >> 8 | (*puVar13 & 0xff00ff) << 8;
          uVar10 = (ulong)(uVar9 >> 0x10 | uVar9 << 0x10);
        }
        else {
          if (1 < uVar9 - 0x12) goto LAB_109757bac;
          iVar12 = 0;
          puVar14 = puVar13 + 1;
          uVar10 = (ulong)*puVar13;
        }
      }
LAB_109757b08:
      if ((bVar4 & 1) != 0) {
        uVar10 = (long)(((int)uVar10 << iVar12) >> iVar12);
      }
      uVar11 = (ulong)*puVar16;
      cVar5 = *(char *)((long)puVar16 + -1);
      if (cVar5 == '\x04') {
        *(int *)((long)param_1 + uVar11 + 0x3b0) = (int)uVar10;
      }
      else if (cVar5 == '\x02') {
        *(short *)((long)param_1 + uVar11 + 0x3b0) = (short)uVar10;
      }
      else if (cVar5 == '\x01') {
        *(char *)((long)param_1 + uVar11 + 0x3b0) = (char)uVar10;
      }
      else {
        *(ulong *)((long)param_1 + uVar11 + 0x3b0) = uVar10;
      }
    }
LAB_109757b7c:
    puVar16 = puVar16 + 2;
    puVar13 = puVar14;
  } while( true );
}



/* Entry: 109777c68; end: 1097782db;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 *******
FUN_109777c68(undefined8 *******param_1,undefined8 *******param_2,undefined8 *******param_3,
             undefined8 *******param_4,undefined8 *******param_5,undefined8 *******param_6,
             short *param_7)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *******pppppppuVar6;
  undefined8 ******ppppppuVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  undefined8 ******ppppppuVar10;
  undefined8 ******ppppppuVar11;
  undefined8 *****pppppuVar12;
  undefined8 *******pppppppuVar13;
  uint uVar14;
  undefined8 *******unaff_x20;
  undefined8 *******pppppppuVar15;
  undefined8 ******ppppppuVar16;
  undefined8 *******unaff_x24;
  undefined8 *******pppppppuVar17;
  ushort uVar18;
  uint uVar19;
  ulong uStack_150;
  int iStack_144;
  undefined8 *******pppppppuStack_140;
  undefined8 *******pppppppuStack_138;
  undefined8 *******pppppppuStack_130;
  undefined8 *******pppppppuStack_128;
  short *psStack_120;
  undefined8 *******pppppppuStack_118;
  undefined8 *******pppppppuStack_110;
  undefined8 *******pppppppuStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 *******pppppppuStack_d8;
  long lStack_d0;
  ushort uStack_c2;
  undefined8 *******pppppppuStack_c0;
  undefined8 *******pppppppuStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 *******pppppppuStack_98;
  undefined8 ******ppppppuStack_90;
  undefined8 ******ppppppuStack_88;
  ulong uStack_80;
  undefined8 ******ppppppuStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar6 = param_1;
  pppppppuVar9 = param_3;
  if (*(int *)(param_1 + 0xa8) - 1U < 2) {
    ppppppuVar10 = param_1[0xb1];
    if (ppppppuVar10 == (undefined8 ******)0x0) {
      param_2 = param_2;
      param_5 = unaff_x24;
      pppppppuVar8 = (undefined8 *******)0x8e;
    }
    else {
      param_5 = (undefined8 *******)param_1[0x18];
      pppppppuVar15 = (undefined8 *******)(ulong)*(uint *)((long)param_1[0xa9] + (long)param_2 * 4);
      pppppppuVar17 = (undefined8 *******)param_1[0xb0];
      unaff_x20 = pppppppuVar15;
      if (param_5[5] == (undefined8 ******)0x0) {
        pppppppuVar8 = param_2;
        pppppppuVar13 = pppppppuVar17;
        if (param_5[1] < pppppppuVar17) goto LAB_109777f8c;
      }
      else {
        pppppppuVar9 = (undefined8 *******)0x0;
        pppppppuVar6 = param_5;
        param_2 = pppppppuVar17;
        (*(code *)param_5[5])();
        pppppppuVar8 = param_2;
        if (pppppppuVar6 != (undefined8 *******)0x0) {
LAB_109777f8c:
          param_2 = pppppppuVar8;
          pppppppuVar8 = (undefined8 *******)0x55;
          goto LAB_10977800c;
        }
        ppppppuVar10 = param_1[0xb1];
        pppppppuVar13 = (undefined8 *******)param_1[0xb0];
      }
      param_5[2] = pppppppuVar17;
      pppppppuStack_b0 = (undefined8 *******)(param_1[0x13] + 0x13);
      uVar4 = uStack_a0 >> 0x18;
      uStack_a0 = uStack_a0 & 0xffffffffffff0000;
      ppppppuStack_78 = param_1[0xa6];
      ppppppuVar11 = param_1[0xa7];
      lStack_70 = (long)ppppppuStack_78 + (long)ppppppuVar11;
      pppppppuVar8 = param_2;
      pppppppuStack_c0 = param_1;
      pppppppuStack_b8 = param_5;
      uStack_a8 = param_7;
      pppppppuStack_98 = pppppppuVar13;
      ppppppuStack_90 = ppppppuVar10;
      if ((undefined8 ******)((long)pppppppuVar15 * 0x30 + 0x37U) <= ppppppuVar11) {
        uVar19 = (*(uint *)(ppppppuStack_78 + (long)pppppppuVar15 * 6 + 1) & 0xff00ff00) >> 8 |
                 (*(uint *)(ppppppuStack_78 + (long)pppppppuVar15 * 6 + 1) & 0xff00ff) << 8;
        ppppppuStack_88 = (undefined8 ******)(ulong)(uVar19 >> 0x10 | uVar19 << 0x10);
        uVar19 = (*(uint *)(ppppppuStack_78 + (long)pppppppuVar15 * 6 + 2) & 0xff00ff00) >> 8 |
                 (*(uint *)(ppppppuStack_78 + (long)pppppppuVar15 * 6 + 2) & 0xff00ff) << 8;
        uStack_80 = (ulong)(uVar19 >> 0x10 | uVar19 << 0x10);
        uStack_a0 = (ulong)CONCAT51((int5)uVar4,
                                    *(undefined1 *)
                                     ((long)ppppppuStack_78 + (long)pppppppuVar15 * 0x30 + 0x36)) <<
                    0x10;
        if ((ppppppuStack_88 <= ppppppuVar11) &&
           (uStack_80 <= (ulong)((long)ppppppuVar11 - (long)ppppppuStack_88) >> 3)) {
          pppppppuVar6 = &pppppppuStack_c0;
          pppppppuVar9 = (undefined8 *******)0x0;
          param_2 = param_3;
          func_0x00010977c078();
          pppppppuVar8 = pppppppuVar6;
          if ((int)pppppppuVar6 == 0) {
LAB_109778228:
            unaff_x20 = pppppppuVar15;
            if ((((ulong)param_4 & 0x500000) == 0) && (*(char *)((long)param_6 + 0x1a) == '\a')) {
              pppppppuVar15 = (undefined8 *******)*param_1[0x13];
              pppppppuStack_b8 = (undefined8 *******)0x0;
              pppppppuStack_c0 = (undefined8 *******)0x0;
              uStack_a8 = (short *)0x0;
              pppppppuStack_b0 = (undefined8 *******)0x0;
              uStack_a0 = 0;
              pppppppuVar9 = &pppppppuStack_c0;
              pppppppuVar8 = pppppppuVar15;
              param_2 = param_6;
              FUN_109758a3c();
              param_4 = pppppppuStack_b0;
              if ((int)pppppppuVar8 == 0) {
                *(undefined1 *)((long)param_6 + 0x1a) = uStack_a8._2_1_;
                *(undefined4 *)(param_6 + 1) = pppppppuStack_b8._0_4_;
                *(undefined2 *)(param_6 + 3) = (undefined2)uStack_a8;
                unaff_x20 = (undefined8 *******)param_1[0x13];
                pppppppuVar6 = unaff_x20;
                FUN_109753e5c();
                unaff_x20[0x15] = param_4;
                *(uint *)(param_1[0x13][0x25] + 1) = *(uint *)(param_1[0x13][0x25] + 1) | 1;
              }
              else {
                pppppppuVar6 = pppppppuVar8;
                param_4 = pppppppuVar15;
                if ((pppppppuVar15 != (undefined8 *******)0x0) &&
                   (param_2 = pppppppuStack_b0, pppppppuStack_b0 != (undefined8 *******)0x0)) {
                  pppppppuVar6 = (undefined8 *******)*pppppppuVar15;
                  (*(code *)pppppppuVar6[2])();
                }
              }
            }
            else {
              pppppppuVar8 = (undefined8 *******)0x0;
            }
          }
          goto LAB_10977800c;
        }
      }
LAB_109778008:
      param_2 = pppppppuVar8;
      pppppppuVar8 = (undefined8 *******)0x3;
    }
  }
  else if (*(int *)(param_1 + 0xa8) == 3) {
    uVar19 = *(uint *)((long)param_1[0xa9] + (long)param_2 * 4);
    param_7[0] = 0;
    param_7[1] = 0;
    if ((uint)param_3 <= *(uint *)(param_1 + 4)) {
      uStack_e0 = (uint)param_4 >> 0x16 & 1;
      uVar19 = *(uint *)((long)param_1[0xa6] + (ulong)uVar19 * 4 + 8);
      uVar19 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
      ppppppuVar10 = (undefined8 ******)(ulong)(uVar19 >> 0x10 | uVar19 << 0x10);
      lStack_d0 = (long)ppppppuVar10 + 4;
      unaff_x20 = (undefined8 *******)0x5;
      uStack_dc = (uint)param_4;
      pppppppuStack_d8 = param_6;
LAB_109777d60:
      pppppppuVar8 = param_2;
      if ((param_1[0xb1] <= ppppppuVar10) ||
         (uVar19 = (int)param_3 * 4,
         (ulong)((long)param_1[0xb1] - (long)ppppppuVar10) < (ulong)(uVar19 + 0xc)))
      goto LAB_109778008;
      pppppppuVar15 = (undefined8 *******)(lStack_d0 + (ulong)uVar19 + (long)param_1[0xb0]);
      if (param_5[5] == (undefined8 ******)0x0) {
        if (param_5[1] < pppppppuVar15) goto LAB_109777f8c;
      }
      else {
        pppppppuVar9 = (undefined8 *******)0x0;
        pppppppuVar6 = param_5;
        pppppppuVar8 = pppppppuVar15;
        (*(code *)param_5[5])();
        if (pppppppuVar6 != (undefined8 *******)0x0) goto LAB_109777f8c;
      }
      param_5[2] = pppppppuVar15;
      param_2 = (undefined8 *******)0x8;
      pppppppuVar6 = param_5;
      func_0x00010975780c();
      pppppppuVar8 = pppppppuVar6;
      if ((int)pppppppuVar6 != 0) goto LAB_10977800c;
      ppppppuVar11 = param_5[8];
      if ((undefined8 ******)((long)ppppppuVar11 + 3U) < param_5[9]) {
        uVar19 = (*(uint *)ppppppuVar11 & 0xff00ff00) >> 8 | (*(uint *)ppppppuVar11 & 0xff00ff) << 8
        ;
        uVar19 = uVar19 >> 0x10 | uVar19 << 0x10;
        ppppppuVar11 = (undefined8 ******)((long)ppppppuVar11 + 4);
      }
      else {
        uVar19 = 0;
      }
      param_5[8] = ppppppuVar11;
      if ((undefined8 ******)((long)ppppppuVar11 + 3U) < param_5[9]) {
        uVar14 = (*(uint *)ppppppuVar11 & 0xff00ff00) >> 8 | (*(uint *)ppppppuVar11 & 0xff00ff) << 8
        ;
        param_4 = (undefined8 *******)(ulong)(uVar14 >> 0x10 | uVar14 << 0x10);
        ppppppuVar11 = (undefined8 ******)((long)ppppppuVar11 + 4);
      }
      else {
        param_4 = (undefined8 *******)0x0;
      }
      param_5[8] = ppppppuVar11;
      pppppppuVar8 = param_2;
      if (param_5[5] != (undefined8 ******)0x0) {
        pppppppuVar8 = (undefined8 *******)*param_5;
        if (pppppppuVar8 != (undefined8 *******)0x0) {
          pppppppuVar6 = (undefined8 *******)param_5[7];
          (*(code *)pppppppuVar6[2])();
        }
        *param_5 = (undefined8 ******)0x0;
      }
      param_5[8] = (undefined8 ******)0x0;
      param_5[9] = (undefined8 ******)0x0;
      uVar14 = (uint)param_4 - uVar19;
      param_2 = (undefined8 *******)(ulong)uVar14;
      if (uVar14 == 0) {
        param_2 = pppppppuVar8;
        pppppppuVar8 = (undefined8 *******)0x9d;
        goto LAB_10977800c;
      }
      if ((((uint)param_4 < uVar19) ||
          (param_6 = (undefined8 *******)(ulong)(uVar14 - 8), uVar14 < 8)) ||
         ((undefined8 *******)((long)param_1[0xb1] - (long)ppppppuVar10) < param_4))
      goto LAB_109778008;
      pppppppuVar15 = (undefined8 *******)((long)ppppppuVar10 + (ulong)uVar19 + (long)param_1[0xb0])
      ;
      if (param_5[5] == (undefined8 ******)0x0) {
        if (param_5[1] < pppppppuVar15) goto LAB_109777f8c;
      }
      else {
        pppppppuVar9 = (undefined8 *******)0x0;
        pppppppuVar6 = param_5;
        pppppppuVar8 = pppppppuVar15;
        (*(code *)param_5[5])();
        if (pppppppuVar6 != (undefined8 *******)0x0) goto LAB_109777f8c;
      }
      param_5[2] = pppppppuVar15;
      pppppppuVar6 = param_5;
      func_0x00010975780c();
      pppppppuVar8 = pppppppuVar6;
      if ((int)pppppppuVar6 != 0) goto LAB_10977800c;
      ppppppuVar11 = param_5[8];
      ppppppuVar16 = param_5[9];
      if ((undefined8 ******)((long)ppppppuVar11 + 1U) < ppppppuVar16) {
        pppppppuVar15 =
             (undefined8 *******)
             (ulong)((uint)(*(ushort *)ppppppuVar11 >> 8) |
                    (*(ushort *)ppppppuVar11 & 0xff00ff) << 8);
        ppppppuVar11 = (undefined8 ******)((long)ppppppuVar11 + 2);
      }
      else {
        pppppppuVar15 = (undefined8 *******)0x0;
      }
      param_5[8] = ppppppuVar11;
      if ((undefined8 ******)((long)ppppppuVar11 + 1U) < ppppppuVar16) {
        uVar18 = *(ushort *)ppppppuVar11 >> 8 | *(ushort *)ppppppuVar11 << 8;
        ppppppuVar11 = (undefined8 ******)((long)ppppppuVar11 + 2);
      }
      else {
        uVar18 = 0;
      }
      param_5[8] = ppppppuVar11;
      if ((undefined8 ******)((long)ppppppuVar11 + 3U) < ppppppuVar16) {
        ppppppuVar7 = (undefined8 ******)((long)ppppppuVar11 + 4);
        uVar19 = (*(uint *)ppppppuVar11 & 0xff00ff00) >> 8 | (*(uint *)ppppppuVar11 & 0xff00ff) << 8
        ;
        uVar19 = uVar19 >> 0x10 | uVar19 << 0x10;
        param_5[8] = ppppppuVar7;
        if (uVar19 == 0x64757065) {
          uVar19 = (int)unaff_x20 - 1;
          unaff_x20 = (undefined8 *******)(ulong)uVar19;
          if (uVar19 == 0) {
            pppppppuVar8 = (undefined8 *******)0x3;
            goto LAB_1097781c8;
          }
          if ((undefined8 ******)((long)ppppppuVar11 + 5U) < ppppppuVar16) {
            ppppppuVar7 = (undefined8 ******)((long)ppppppuVar11 + 6);
            param_3 = (undefined8 *******)
                      (ulong)((uint)(*(ushort *)((long)ppppppuVar11 + 4) >> 8) |
                             (*(ushort *)((long)ppppppuVar11 + 4) & 0xff00ff) << 8);
          }
          else {
            param_3 = (undefined8 *******)0x0;
          }
          param_5[8] = ppppppuVar7;
          if (param_5[5] != (undefined8 ******)0x0) {
            param_2 = (undefined8 *******)*param_5;
            if (param_2 != (undefined8 *******)0x0) {
              pppppppuVar6 = (undefined8 *******)param_5[7];
              (*(code *)pppppppuVar6[2])();
            }
            *param_5 = (undefined8 ******)0x0;
          }
          param_5[8] = (undefined8 ******)0x0;
          param_5[9] = (undefined8 ******)0x0;
          unaff_x24 = param_5;
          if (*(uint *)(param_1 + 4) < (uint)param_3) goto LAB_109777d20;
          goto LAB_109777d60;
        }
        pppppppuVar8 = (undefined8 *******)0x7;
        if ((int)uVar19 < 0x7267626c) {
          if (uVar19 == 0x6a706720) {
LAB_1097781ac:
            pppppppuVar8 = (undefined8 *******)0x2;
            goto LAB_1097781c8;
          }
          if (uVar19 == 0x706e6720) {
            pppppppuVar8 = (undefined8 *******)param_1[0x13];
            uStack_ef = (undefined1)uStack_e0;
            uStack_f0 = 1;
            param_2 = (undefined8 *******)0x0;
            pppppppuVar9 = (undefined8 *******)0x0;
            FUN_10977cddc();
            param_6 = pppppppuStack_d8;
            param_4 = (undefined8 *******)(ulong)uStack_dc;
            pppppppuVar6 = pppppppuVar8;
            if (param_5[5] != (undefined8 ******)0x0) {
              param_2 = (undefined8 *******)*param_5;
              if (param_2 != (undefined8 *******)0x0) {
                pppppppuVar6 = (undefined8 *******)param_5[7];
                (*(code *)pppppppuVar6[2])();
              }
              *param_5 = (undefined8 ******)0x0;
            }
            param_5[8] = (undefined8 ******)0x0;
            param_5[9] = (undefined8 ******)0x0;
            unaff_x20 = pppppppuVar15;
            if ((int)pppppppuVar8 != 0) goto LAB_10977800c;
            param_2 = (undefined8 *******)0x0;
            pppppppuVar6 = param_1;
            pppppppuVar9 = param_3;
            func_0x00010977b504();
            param_7[2] = (short)pppppppuVar15;
            param_7[5] = (short)pppppppuVar15;
            param_7[3] = *param_7 + uVar18;
            param_7[6] = uVar18;
            uVar18 = *(ushort *)(param_1[0x14] + 3);
            uVar1 = *(ushort *)((long)param_1 + 0x152);
            sVar2 = 0;
            if (uVar1 != 0) {
              sVar2 = (short)(((uint)uVar18 * (uint)uStack_c2) / (uint)uVar1);
            }
            param_7[4] = sVar2;
            if (*(char *)(param_1 + 0x3e) == '\0') {
              if (*(short *)(param_1 + 0x4d) == -1) {
                sVar2 = *(short *)(param_1 + 0x33);
                sVar3 = *(short *)((long)param_1 + 0x19a);
              }
              else {
                sVar2 = *(short *)((long)param_1 + 0x2c2);
                sVar3 = *(short *)((long)param_1 + 0x2c4);
              }
              uVar19 = (int)sVar2 - (int)sVar3;
              uVar14 = -uVar19;
              if (-1 < (int)uVar19) {
                uVar14 = uVar19;
              }
            }
            else {
              param_2 = (undefined8 *******)0x1;
              pppppppuVar6 = param_1;
              pppppppuVar9 = param_3;
              func_0x00010977b504();
              uVar18 = *(ushort *)(param_1[0x14] + 3);
              uVar1 = *(ushort *)((long)param_1 + 0x152);
              uVar14 = (uint)uStack_c2;
            }
            sVar2 = 0;
            if (uVar1 != 0) {
              sVar2 = (short)(((uint)uVar18 * (uVar14 & 0xffff)) / (uint)uVar1);
            }
            param_7[7] = sVar2;
            goto LAB_109778228;
          }
        }
        else if ((uVar19 == 0x7267626c) || (uVar19 == 0x74696666)) goto LAB_1097781ac;
      }
      else {
        pppppppuVar8 = (undefined8 *******)0x7;
      }
LAB_1097781c8:
      if (param_5[5] != (undefined8 ******)0x0) {
        param_2 = (undefined8 *******)*param_5;
        if (param_2 != (undefined8 *******)0x0) {
          pppppppuVar6 = (undefined8 *******)param_5[7];
          (*(code *)pppppppuVar6[2])();
        }
        *param_5 = (undefined8 ******)0x0;
      }
      param_5[8] = (undefined8 ******)0x0;
      param_5[9] = (undefined8 ******)0x0;
      goto LAB_10977800c;
    }
LAB_109777d20:
    param_5 = unaff_x24;
    pppppppuVar8 = (undefined8 *******)0x6;
  }
  else {
    param_5 = unaff_x24;
    pppppppuVar8 = (undefined8 *******)0x2;
  }
LAB_10977800c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppppppuVar8;
  }
  ___stack_chk_fail();
  if (pppppppuVar6 == (undefined8 *******)0x0) {
    return (undefined8 *******)0x23;
  }
  pppppppuStack_140 = param_6;
  pppppppuStack_138 = pppppppuVar8;
  pppppppuStack_130 = param_5;
  pppppppuStack_128 = param_3;
  psStack_120 = param_7;
  pppppppuStack_118 = param_4;
  pppppppuStack_110 = unaff_x20;
  pppppppuStack_108 = param_1;
  puStack_100 = &stack0xfffffffffffffff0;
  pcStack_f8 = FUN_1097782dc;
  if ((uint)*(ushort *)(pppppppuVar6 + 0x3a) <= (uint)param_2) {
    return (undefined8 *******)0x10;
  }
  ppppppuVar10 = pppppppuVar6[0x6f];
  if (ppppppuVar10 == (undefined8 ******)0x0) {
    return (undefined8 *******)0x7;
  }
  ppppppuVar11 = (undefined8 ******)0x0;
  (*(code *)ppppppuVar10[4])();
  *pppppppuVar9 = ppppppuVar11;
  ppppppuVar11 = pppppppuVar6[0x5e];
  if (ppppppuVar11 == (undefined8 ******)0x10000) {
    if (*(short *)(pppppppuVar6 + 0x3a) != 0x102) {
      return (undefined8 *******)0x0;
    }
    pppppuVar12 = ppppppuVar10[4];
  }
  else {
    if ((ppppppuVar11 != (undefined8 ******)0x25000) && (ppppppuVar11 != (undefined8 ******)0x20000)
       ) {
      return (undefined8 *******)0x0;
    }
    if (*(char *)(pppppppuVar6 + 0x80) == '\0') {
      ppppppuVar16 = pppppppuVar6[0x18];
      pppppppuVar8 = pppppppuVar6;
      (*(code *)pppppppuVar6[0x68])(pppppppuVar6,0x706f7374,ppppppuVar16,&uStack_150);
      iVar5 = (int)pppppppuVar8;
      if ((iVar5 != 0) || (uStack_150 < 0x22)) goto LAB_1097784b8;
      pppppuVar12 = ppppppuVar16[2] + 4;
      if (ppppppuVar16[5] == (undefined8 *****)0x0) {
        if (ppppppuVar16[1] < pppppuVar12) goto LAB_10977844c;
      }
      else {
        ppppppuVar7 = ppppppuVar16;
        (*(code *)ppppppuVar16[5])(ppppppuVar16,pppppuVar12,0,0);
        if (ppppppuVar7 != (undefined8 ******)0x0) goto LAB_10977844c;
      }
      ppppppuVar16[2] = pppppuVar12;
      iStack_144 = 0;
      ppppppuVar7 = ppppppuVar16;
      func_0x000109757520(ppppppuVar16,&iStack_144);
      if (iStack_144 != 0) {
LAB_10977844c:
        *(undefined1 *)(pppppppuVar6 + 0x80) = 1;
        return (undefined8 *******)0x0;
      }
      if (((int)ppppppuVar7 - 1U & 0xffff) < (uint)*(ushort *)(pppppppuVar6 + 0x3a)) {
        if (ppppppuVar11 == (undefined8 ******)0x25000) {
          pppppppuVar8 = pppppppuVar6 + 0x80;
          FUN_10977d694(pppppppuVar8,ppppppuVar16,ppppppuVar7,uStack_150 - 0x22);
          iVar5 = (int)pppppppuVar8;
        }
        else {
          if (ppppppuVar11 != (undefined8 ******)0x20000) goto LAB_109778498;
          pppppppuVar8 = pppppppuVar6 + 0x80;
          FUN_10977d450(pppppppuVar8,ppppppuVar16,ppppppuVar7,uStack_150 - 0x22);
          iVar5 = (int)pppppppuVar8;
        }
LAB_1097784b8:
        *(undefined1 *)(pppppppuVar6 + 0x80) = 1;
        if (iVar5 != 0) {
          return (undefined8 *******)0x0;
        }
      }
      else {
LAB_109778498:
        *(undefined1 *)(pppppppuVar6 + 0x80) = 1;
      }
    }
    if ((uint)*(ushort *)((long)pppppppuVar6 + 0x402) <= (uint)param_2) {
      return (undefined8 *******)0x0;
    }
    uVar18 = *(ushort *)((long)pppppppuVar6[0x81] + ((ulong)param_2 & 0xffffffff) * 2);
    param_2 = (undefined8 *******)(ulong)uVar18;
    if (0x101 < uVar18) {
      param_2 = (undefined8 *******)pppppppuVar6[0x82][(long)param_2 + -0x102];
      goto LAB_109778418;
    }
    pppppuVar12 = ppppppuVar10[4];
  }
  (*(code *)pppppuVar12)();
LAB_109778418:
  *pppppppuVar9 = param_2;
  return (undefined8 *******)0x0;
}



/* Entry: 1097782dc; end: 1097784e3;  */

undefined8 FUN_1097782dc(long param_1,ulong param_2,ulong *param_3)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uStack_60;
  int iStack_54;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if ((uint)*(ushort *)(param_1 + 0x1d0) <= (uint)param_2) {
    return 0x10;
  }
  lVar7 = *(long *)(param_1 + 0x378);
  if (lVar7 == 0) {
    return 7;
  }
  uVar3 = 0;
  (**(code **)(lVar7 + 0x20))();
  *param_3 = uVar3;
  lVar8 = *(long *)(param_1 + 0x2f0);
  if (lVar8 == 0x10000) {
    if (*(short *)(param_1 + 0x1d0) != 0x102) {
      return 0;
    }
    pcVar5 = *(code **)(lVar7 + 0x20);
  }
  else {
    if ((lVar8 != 0x25000) && (lVar8 != 0x20000)) {
      return 0;
    }
    if (*(char *)(param_1 + 0x400) == '\0') {
      lVar6 = *(long *)(param_1 + 0xc0);
      lVar4 = param_1;
      (**(code **)(param_1 + 0x340))(param_1,0x706f7374,lVar6,&uStack_60);
      iVar2 = (int)lVar4;
      if ((iVar2 != 0) || (uStack_60 < 0x22)) goto LAB_1097784b8;
      uVar3 = *(long *)(lVar6 + 0x10) + 0x20;
      if (*(code **)(lVar6 + 0x28) == (code *)0x0) {
        if (*(ulong *)(lVar6 + 8) < uVar3) goto LAB_10977844c;
      }
      else {
        lVar4 = lVar6;
        (**(code **)(lVar6 + 0x28))(lVar6,uVar3,0,0);
        if (lVar4 != 0) goto LAB_10977844c;
      }
      *(ulong *)(lVar6 + 0x10) = uVar3;
      iStack_54 = 0;
      lVar4 = lVar6;
      func_0x000109757520(lVar6,&iStack_54);
      if (iStack_54 != 0) {
LAB_10977844c:
        *(undefined1 *)(param_1 + 0x400) = 1;
        return 0;
      }
      if (((int)lVar4 - 1U & 0xffff) < (uint)*(ushort *)(param_1 + 0x1d0)) {
        if (lVar8 == 0x25000) {
          lVar8 = param_1 + 0x400;
          FUN_10977d694(lVar8,lVar6,lVar4,uStack_60 - 0x22);
          iVar2 = (int)lVar8;
        }
        else {
          if (lVar8 != 0x20000) goto LAB_109778498;
          lVar8 = param_1 + 0x400;
          FUN_10977d450(lVar8,lVar6,lVar4,uStack_60 - 0x22);
          iVar2 = (int)lVar8;
        }
LAB_1097784b8:
        *(undefined1 *)(param_1 + 0x400) = 1;
        if (iVar2 != 0) {
          return 0;
        }
      }
      else {
LAB_109778498:
        *(undefined1 *)(param_1 + 0x400) = 1;
      }
    }
    if ((uint)*(ushort *)(param_1 + 0x402) <= (uint)param_2) {
      return 0;
    }
    uVar1 = *(ushort *)(*(long *)(param_1 + 0x408) + (param_2 & 0xffffffff) * 2);
    param_2 = (ulong)uVar1;
    if (0x101 < uVar1) {
      param_2 = *(ulong *)(*(long *)(param_1 + 0x410) + param_2 * 8 + -0x810);
      goto LAB_109778418;
    }
    pcVar5 = *(code **)(lVar7 + 0x20);
  }
  (*pcVar5)();
LAB_109778418:
  *param_3 = param_2;
  return 0;
}



/* Entry: 1097784e4; end: 10977854f;  */

void FUN_1097784e4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xb8);
  if (*(short *)(param_1 + 0x402) != 0) {
    if (*(long *)(param_1 + 0x408) != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
    *(undefined8 *)(param_1 + 0x408) = 0;
    *(undefined2 *)(param_1 + 0x402) = 0;
  }
  if (*(short *)(param_1 + 0x404) != 0) {
    if (*(long *)(param_1 + 0x410) != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
    *(undefined8 *)(param_1 + 0x410) = 0;
    *(undefined2 *)(param_1 + 0x404) = 0;
  }
  *(undefined1 *)(param_1 + 0x400) = 0;
  return;
}



/* Entry: 109778550; end: 1097786bb;  */

int FUN_109778550(long param_1,ulong param_2,ulong param_3)

{
  uint *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  uint *puVar17;
  
  lVar14 = *(long *)(param_1 + 0x550);
  if (lVar14 != 0) {
    iVar13 = *(int *)(param_1 + 0x560);
    if (iVar13 != 0 && 9 < *(long *)(param_1 + 0x558)) {
      iVar12 = 0;
      puVar2 = (undefined1 *)(lVar14 + *(long *)(param_1 + 0x558));
      puVar9 = (undefined1 *)(lVar14 + 10);
      uVar15 = param_3 & 0xffffffff | (param_2 & 0xffffffff) << 0x10;
      uVar16 = 1;
      puVar10 = (undefined1 *)(lVar14 + 4);
LAB_1097785a4:
      puVar3 = puVar2;
      if (puVar10 + (ulong)(byte)puVar10[3] + (ulong)(byte)puVar10[2] * 0x100 <= puVar2) {
        puVar3 = puVar10 + (ulong)(byte)puVar10[3] + (ulong)(byte)puVar10[2] * 0x100;
      }
      if (((uVar16 & *(uint *)(param_1 + 0x564)) != 0) && (puVar10[4] == '\0')) {
        puVar1 = (uint *)(puVar10 + 0xe);
        auVar6 = SEXT816((long)puVar3 - (long)puVar1) * SEXT816(0x2aaaaaaaaaaaaaab);
        uVar7 = auVar6._8_4_ - (auVar6._12_4_ >> 0x1f);
        if ((long)(ulong)((uint)CONCAT11(*puVar9,puVar10[7]) * 6) <= (long)puVar3 - (long)puVar1) {
          uVar7 = (uint)CONCAT11(*puVar9,puVar10[7]);
        }
        puVar17 = puVar1;
        if ((*(uint *)(param_1 + 0x568) & uVar16) == 0) {
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            uVar8 = (*puVar17 & 0xff00ff00) >> 8 | (*puVar17 & 0xff00ff) << 8;
            if ((uVar8 >> 0x10 | uVar8 << 0x10) == uVar15) goto LAB_109778698;
            puVar17 = (uint *)((long)puVar17 + 6);
          }
        }
        else if (uVar7 != 0) {
          uVar8 = 0;
          do {
            uVar4 = uVar8 + uVar7 >> 1;
            puVar17 = (uint *)((long)puVar1 + (ulong)((uVar4 * 2 + (uVar8 + uVar7 >> 1)) * 2));
            uVar5 = (*puVar17 & 0xff00ff00) >> 8 | (*puVar17 & 0xff00ff) << 8;
            uVar11 = (ulong)(uVar5 >> 0x10 | uVar5 << 0x10);
            if (uVar11 == uVar15) goto LAB_109778698;
            if (uVar11 < uVar15) {
              uVar8 = uVar4 + 1;
              uVar4 = uVar7;
            }
            uVar7 = uVar4;
          } while (uVar8 < uVar4);
        }
      }
      goto LAB_1097785cc;
    }
  }
  return 0;
LAB_109778698:
  if ((puVar10[5] & 8) != 0) {
    iVar12 = 0;
  }
  iVar12 = iVar12 + ((int)(short)((ushort)(byte)puVar17[1] << 8) |
                    (uint)*(byte *)((long)puVar17 + 5));
LAB_1097785cc:
  iVar13 = iVar13 + -1;
  if (iVar13 == 0) {
    return iVar12;
  }
  uVar16 = uVar16 << 1;
  puVar9 = puVar3 + 6;
  puVar10 = puVar3;
  if (puVar2 < puVar9) {
    return iVar12;
  }
  goto LAB_1097785a4;
}



/* Entry: 1097786bc; end: 109778b5f;  */

void FUN_1097786bc(long param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  uint uVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ushort uVar17;
  long lVar18;
  int iStack_a4;
  ulong uStack_a0;
  ushort uStack_98;
  long lStack_90;
  long alStack_88 [2];
  ulong uStack_78;
  ulong uStack_70;
  int iStack_64;
  
  lVar18 = param_2[7];
  lStack_90 = param_2[2];
  plVar6 = param_2;
  func_0x0001097575b8(param_2,&iStack_a4);
  uStack_a0 = (ulong)plVar6 & 0xffffffff;
  if (iStack_a4 != 0) {
    return;
  }
  plVar6 = param_2;
  FUN_1097579b0(param_2,&UNK_10dff9440,&uStack_a0);
  lVar5 = lStack_90;
  if ((int)plVar6 != 0) {
    return;
  }
  if (uStack_a0 == 0x4f54544f) {
    uVar10 = 0x4f54544f;
    uVar17 = uStack_98;
    if (uStack_98 == 0) {
      return;
    }
  }
  else {
    uVar10 = lStack_90 + 0xc;
    if ((code *)param_2[5] == (code *)0x0) {
      if ((ulong)param_2[1] < uVar10) {
        return;
      }
    }
    else {
      plVar6 = param_2;
      (*(code *)param_2[5])(param_2,uVar10,0,0);
      if (plVar6 != (long *)0x0) {
        return;
      }
    }
    param_2[2] = uVar10;
    if (uStack_98 == 0) {
      return;
    }
    uVar13 = 0;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    uVar17 = 0;
    uVar10 = lVar5 + 0x1c;
    do {
      plVar6 = param_2;
      FUN_1097579b0(param_2,&UNK_10dff9458,alStack_88);
      if ((int)plVar6 != 0) {
        uStack_98 = (ushort)uVar13;
        break;
      }
      uVar14 = param_2[1];
      if ((uStack_78 <= uVar14) &&
         ((uStack_70 <= uVar14 - uStack_78 || alStack_88[0] == 0x766d7478) ||
          alStack_88[0] == 0x686d7478)) {
        uVar17 = uVar17 + 1;
        if (alStack_88[0] < 0x62686564) {
          if (alStack_88[0] == 0x4d455441) {
            bVar4 = true;
          }
          else if (alStack_88[0] == 0x53494e47) {
            bVar3 = true;
          }
        }
        else if ((alStack_88[0] == 0x68656164) || (alStack_88[0] == 0x62686564)) {
          if (uStack_70 < 0x36) {
            return;
          }
          uVar15 = uStack_78 + 0xc;
          if ((code *)param_2[5] == (code *)0x0) {
            if (uVar14 < uVar15) {
              return;
            }
          }
          else {
            plVar6 = param_2;
            (*(code *)param_2[5])(param_2,uVar15,0,0);
            if (plVar6 != (long *)0x0) {
              return;
            }
          }
          param_2[2] = uVar15;
          iStack_64 = 0;
          func_0x0001097575b8(param_2,&iStack_64);
          if (iStack_64 != 0) {
            return;
          }
          if ((code *)param_2[5] == (code *)0x0) {
            if ((ulong)param_2[1] < uVar10) {
              return;
            }
          }
          else {
            plVar6 = param_2;
            (*(code *)param_2[5])(param_2,uVar10,0,0);
            if (plVar6 != (long *)0x0) {
              return;
            }
          }
          param_2[2] = uVar10;
          iStack_64 = 0;
          bVar2 = true;
        }
      }
      uVar13 = uVar13 + 1;
      uVar10 = uVar10 + 0x10;
    } while (uVar13 < uStack_98);
    if (uVar17 == 0) {
      return;
    }
    uVar10 = uStack_a0;
    if (!bVar2) {
      if (!bVar3) {
        return;
      }
      if (!bVar4) {
        return;
      }
    }
  }
  *(ushort *)(param_1 + 0x120) = uVar17;
  *(ulong *)(param_1 + 0x118) = uVar10;
  (**(code **)(lVar18 + 8))(lVar18,(ulong)uVar17 << 5);
  if (lVar18 == 0) {
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  else {
    *(long *)(param_1 + 0x128) = lVar18;
    uVar10 = lStack_90 + 0xc;
    if ((code *)param_2[5] == (code *)0x0) {
      if ((ulong)param_2[1] < uVar10) {
        return;
      }
    }
    else {
      plVar6 = param_2;
      (*(code *)param_2[5])(param_2,uVar10,0,0);
      if (plVar6 != (long *)0x0) {
        return;
      }
    }
    param_2[2] = uVar10;
    plVar6 = param_2;
    func_0x00010975780c(param_2,(ulong)uStack_98 << 4);
    iStack_a4 = (int)plVar6;
    if (iStack_a4 == 0) {
      if (uStack_98 == 0) {
        *(undefined2 *)(param_1 + 0x120) = 0;
        if (param_2[5] != 0) {
          if (*param_2 != 0) {
            (**(code **)(param_2[7] + 0x10))();
          }
          *param_2 = 0;
        }
        param_2[8] = 0;
        param_2[9] = 0;
      }
      else {
        uVar11 = 0;
        uVar17 = 0;
        plVar6 = param_2 + 8;
        puVar12 = (uint *)*plVar6;
        uVar10 = param_2[9];
        do {
          if ((long)puVar12 + 3U < uVar10) {
            uVar1 = (*puVar12 & 0xff00ff00) >> 8 | (*puVar12 & 0xff00ff) << 8;
            uVar13 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
            puVar12 = puVar12 + 1;
          }
          else {
            uVar13 = 0;
          }
          *plVar6 = (long)puVar12;
          if ((long)puVar12 + 3U < uVar10) {
            uVar1 = (*puVar12 & 0xff00ff00) >> 8 | (*puVar12 & 0xff00ff) << 8;
            uVar14 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
            puVar12 = puVar12 + 1;
          }
          else {
            uVar14 = 0;
          }
          *plVar6 = (long)puVar12;
          if ((long)puVar12 + 3U < uVar10) {
            uVar1 = (*puVar12 & 0xff00ff00) >> 8 | (*puVar12 & 0xff00ff) << 8;
            uVar15 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
            puVar12 = puVar12 + 1;
          }
          else {
            uVar15 = 0;
          }
          *plVar6 = (long)puVar12;
          if ((long)puVar12 + 3U < uVar10) {
            uVar1 = (*puVar12 & 0xff00ff00) >> 8 | (*puVar12 & 0xff00ff) << 8;
            uVar16 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
            puVar12 = puVar12 + 1;
          }
          else {
            uVar16 = 0;
          }
          param_2[8] = (long)puVar12;
          uVar7 = param_2[1] - uVar15;
          if (uVar15 <= (ulong)param_2[1]) {
            if (uVar7 < uVar16) {
              if ((uVar13 != 0x686d7478) && (uVar13 != 0x766d7478)) goto LAB_109778a9c;
              uVar16 = uVar7 & 0xfffffffc;
            }
            if (uVar17 == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = (ulong)uVar17;
              uVar8 = uVar7;
              puVar9 = *(ulong **)(param_1 + 0x128);
              do {
                if (*puVar9 == uVar13) goto LAB_109778a9c;
                uVar8 = uVar8 - 1;
                puVar9 = puVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = *(ulong **)(param_1 + 0x128) + uVar7 * 4;
            *puVar9 = uVar13;
            puVar9[1] = uVar14;
            uVar17 = uVar17 + 1;
            puVar9[2] = uVar15;
            puVar9[3] = uVar16;
          }
LAB_109778a9c:
          uVar11 = uVar11 + 1;
        } while (uVar11 < uStack_98);
        *(ushort *)(param_1 + 0x120) = uVar17;
        if (param_2[5] != 0) {
          if (*param_2 != 0) {
            (**(code **)(param_2[7] + 0x10))();
          }
          *param_2 = 0;
        }
        *plVar6 = 0;
        param_2[9] = 0;
      }
    }
  }
  return;
}



/* Entry: 109778b60; end: 109778beb;  */

void FUN_109778b60(long param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uStack_38;
  
  iVar4 = (int)param_1;
  uVar3 = 0x686d7478;
  if (param_3 != 0) {
    uVar3 = 0x766d7478;
  }
  (**(code **)(param_1 + 0x340))(iVar4,uVar3,param_2,&uStack_38);
  if (iVar4 == 0) {
    lVar1 = 0x4e8;
    if (param_3 != 0) {
      lVar1 = 0x4f0;
    }
    lVar2 = 0x570;
    if (param_3 != 0) {
      lVar2 = 0x578;
    }
    *(undefined8 *)(param_1 + lVar1) = uStack_38;
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + 0x10);
  }
  return;
}



/* Entry: 109778bec; end: 109778fff;  */

long * FUN_109778bec(long *param_1,long *param_2)

{
  char *pcVar1;
  ulong uVar2;
  bool bVar3;
  long *plVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  ushort uVar13;
  ulong uStack_70;
  ulong uStack_68;
  
  plVar4 = param_1 + 0xa6;
  param_1[0xa8] = 0;
  param_1[0xa7] = 0;
  param_1[0xa6] = 0;
  plVar8 = param_1;
  (*(code *)param_1[0x68])(param_1,0x43424c43,param_2,&uStack_68);
  if ((int)plVar8 != 0) {
    plVar8 = param_1;
    (*(code *)param_1[0x68])(param_1,0x45424c43,param_2,&uStack_68);
    if (((int)plVar8 == 0) ||
       (plVar8 = param_1, (*(code *)param_1[0x68])(param_1,0x626c6f63,param_2,&uStack_68),
       (int)plVar8 == 0)) {
      uVar5 = 1;
      goto LAB_109778d10;
    }
    plVar8 = param_1;
    (*(code *)param_1[0x68])(param_1,0x73626978,param_2,&uStack_68);
    if ((int)plVar8 != 0) goto LAB_109778d40;
    plVar8 = (long *)0x3;
    *(undefined4 *)(param_1 + 0xa8) = 3;
    if (uStack_68 < 8) goto LAB_109778d40;
    lVar10 = param_2[2];
    plVar8 = param_2;
    func_0x00010975780c(param_2,8);
    if ((int)plVar8 != 0) goto LAB_109778d40;
    plVar11 = param_2 + 8;
    puVar6 = (uint *)*plVar11;
    uVar2 = param_2[9];
    if ((long)puVar6 + 1U < uVar2) {
      uVar7 = *puVar6;
      pcVar1 = (char *)((long)puVar6 + 1);
      puVar6 = (uint *)((long)puVar6 + 2);
      bVar3 = *pcVar1 == '\0' && (char)uVar7 == '\0';
    }
    else {
      bVar3 = true;
    }
    *plVar11 = (long)puVar6;
    if ((long)puVar6 + 1U < uVar2) {
      uVar13 = (ushort)*puVar6 >> 8 | (ushort)*puVar6 << 8;
      puVar6 = (uint *)((long)puVar6 + 2);
    }
    else {
      uVar13 = 0;
    }
    *plVar11 = (long)puVar6;
    if ((long)puVar6 + 3U < uVar2) {
      uVar7 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
      uVar12 = uVar7 >> 0x10 | uVar7 << 0x10;
      puVar6 = puVar6 + 1;
    }
    else {
      uVar12 = 0;
    }
    param_2[8] = (long)puVar6;
    if (param_2[5] != 0) {
      if (*param_2 != 0) {
        (**(code **)(param_2[7] + 0x10))();
      }
      *param_2 = 0;
    }
    uVar2 = uStack_68;
    *plVar11 = 0;
    param_2[9] = 0;
    if (!bVar3) {
      plVar8 = (long *)0x3;
      if ((uVar13 != 3 && uVar13 != 1) || (uVar12 >> 0x10 != 0)) goto LAB_109778d40;
      if (uVar13 == 3) {
        param_1[2] = param_1[2] | 0x40000;
      }
      uVar9 = param_2[2] - 8;
      if ((code *)param_2[5] == (code *)0x0) {
        if ((ulong)param_2[1] < uVar9) goto LAB_109778fa4;
      }
      else {
        plVar8 = param_2;
        (*(code *)param_2[5])(param_2,uVar9,0,0);
        if (plVar8 != (long *)0x0) {
LAB_109778fa4:
          plVar8 = (long *)0x55;
          goto LAB_109778d40;
        }
      }
      param_2[2] = uVar9;
      uVar7 = (uint)(uVar2 + 0x3fffffff8 >> 2);
      if (uVar12 * 4 + 8 <= uVar2) {
        uVar7 = uVar12;
      }
      param_1[0xa7] = (ulong)(uVar7 * 4 + 8);
      plVar8 = param_2;
      func_0x00010975780c();
      if ((int)plVar8 != 0) goto LAB_109778d40;
      *plVar4 = *plVar11;
      *plVar11 = 0;
      param_2[9] = 0;
      goto LAB_109778e1c;
    }
LAB_109778f44:
    plVar8 = (long *)0x2;
LAB_109778d40:
    if (*plVar4 != 0) {
      if ((param_2 != (long *)0x0) && (param_2[5] != 0)) {
        (**(code **)(param_2[7] + 0x10))();
      }
      *plVar4 = 0;
    }
    param_1[0xa7] = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    return plVar8;
  }
  uVar5 = 2;
LAB_109778d10:
  *(undefined4 *)(param_1 + 0xa8) = uVar5;
  if (uStack_68 < 8) {
LAB_109778d20:
    plVar8 = (long *)0x3;
    goto LAB_109778d40;
  }
  lVar10 = param_2[2];
  plVar8 = param_2;
  func_0x00010975780c();
  if ((int)plVar8 != 0) goto LAB_109778d40;
  param_1[0xa6] = param_2[8];
  param_2[8] = 0;
  param_2[9] = 0;
  param_1[0xa7] = uStack_68;
  puVar6 = (uint *)param_1[0xa6];
  uVar7 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
  uVar13 = *(ushort *)((long)puVar6 + 6);
  if (((uVar7 << 0x10 | 0x10000) != 0x30000) && ((uVar7 >> 0x10 | 0x100) != 0x300))
  goto LAB_109778f44;
  if ((char)puVar6[1] != '\0' || *(char *)((long)puVar6 + 5) != '\0') goto LAB_109778d20;
  uVar7 = (uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8;
  if (uStack_68 < (((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8) * 0x30 | 8)) {
    uVar7 = (uint)((uStack_68 - 8) / 0x30);
  }
LAB_109778e1c:
  *(uint *)((long)param_1 + 0x544) = uVar7;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  if ((int)param_1[0xa8] == 0) goto LAB_109778ec8;
  if ((int)param_1[0xa8] == 3) {
    param_1[0xb0] = lVar10;
LAB_109778eb8:
    param_1[0xb1] = uStack_68;
  }
  else {
    plVar4 = param_1;
    (*(code *)param_1[0x68])(param_1,0x43424454,param_2,&uStack_70);
    if ((((int)plVar4 == 0) ||
        (plVar4 = param_1, (*(code *)param_1[0x68])(param_1,0x45424454,param_2,&uStack_70),
        (int)plVar4 == 0)) ||
       (plVar4 = param_1, (*(code *)param_1[0x68])(param_1,0x62646174,param_2,&uStack_70),
       (int)plVar4 == 0)) {
      param_1[0xb0] = param_2[2];
      uStack_68 = uStack_70;
      goto LAB_109778eb8;
    }
    uStack_68 = param_1[0xb1];
  }
  if (uStack_68 != 0) {
    return (long *)0x0;
  }
LAB_109778ec8:
  *(undefined4 *)((long)param_1 + 0x544) = 0;
  return (long *)0x0;
}



/* Entry: 109779000; end: 109779047;  */

void FUN_109779000(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xc0);
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0x28) != 0)) && (*(long *)(param_1 + 0x530) != 0)) {
    (**(code **)(*(long *)(lVar1 + 0x38) + 0x10))();
  }
  *(long *)(param_1 + 0x530) = 0;
  *(undefined8 *)(param_1 + 0x538) = 0;
  *(undefined8 *)(param_1 + 0x540) = 0;
  return;
}



/* Entry: 109779048; end: 109779053;  */

undefined8 FUN_109779048(long param_1,int *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  
  if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) {
    return 0x23;
  }
  if (*param_2 == 0) {
    lVar2 = *(long *)(param_2 + 2);
    lVar4 = lVar2;
    if (param_2[6] != 0) {
      lVar4 = (long)(lVar2 * (ulong)(uint)param_2[6] + 0x24) / 0x48;
    }
    lVar7 = *(long *)(param_2 + 4);
    lVar6 = lVar7;
    if (param_2[7] != 0) {
      lVar6 = (long)(lVar7 * (ulong)(uint)param_2[7] + 0x24) / 0x48;
    }
    lVar1 = lVar4;
    if (lVar7 != 0) {
      lVar1 = lVar6;
    }
    if (lVar2 != 0) {
      lVar6 = lVar1;
      lVar1 = lVar4;
    }
    uVar3 = lVar1 + 0x20U & 0xffffffffffffffc0;
    uVar5 = lVar6 + 0x20U & 0xffffffffffffffc0;
    if ((uVar3 != 0 && uVar5 != 0) && (0 < (int)*(uint *)(param_1 + 0x38))) {
      uVar8 = 0;
      plVar9 = (long *)(*(long *)(param_1 + 0x40) + 0x18);
      do {
        if ((uVar5 == (*plVar9 + 0x20U & 0xffffffffffffffc0)) &&
           (uVar3 == (plVar9[-1] + 0x20U & 0xffffffffffffffc0))) {
          if (param_3 == (ulong *)0x0) {
            return 0;
          }
          *param_3 = uVar8;
          return 0;
        }
        uVar8 = uVar8 + 1;
        plVar9 = plVar9 + 4;
      } while (*(uint *)(param_1 + 0x38) != uVar8);
    }
    return 0x17;
  }
  return 7;
}



/* Entry: 109779054; end: 109779333;  */

void FUN_109779054(long param_1,ulong param_2,ushort *param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ushort *puVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  
  if (*(long *)(param_1 + 0x548) == 0) {
    if (*(uint *)(param_1 + 0x544) <= param_2) {
      return;
    }
  }
  else {
    if ((ulong)(long)*(int *)(param_1 + 0x38) <= param_2) {
      return;
    }
    param_2 = (ulong)*(uint *)(*(long *)(param_1 + 0x548) + param_2 * 4);
  }
  if (*(int *)(param_1 + 0x540) - 1U < 2) {
    lVar16 = *(long *)(param_1 + 0x530) + param_2 * 0x30;
    bVar1 = *(byte *)(lVar16 + 0x34);
    *param_3 = (ushort)bVar1;
    bVar2 = *(byte *)(lVar16 + 0x35);
    uVar11 = (ulong)bVar2;
    param_3[1] = (ushort)bVar2;
    cVar5 = *(char *)(lVar16 + 0x18);
    lVar18 = (long)cVar5 << 6;
    *(long *)(param_3 + 0xc) = lVar18;
    cVar6 = *(char *)(lVar16 + 0x19);
    lVar19 = (long)cVar6;
    lVar17 = lVar19 * 0x40;
    *(long *)(param_3 + 0x10) = lVar17;
    cVar4 = *(char *)(lVar16 + 0x21);
    if (lVar19 < 1) {
      if (cVar6 == '\0' && cVar5 == '\0') {
        if (*(char *)(lVar16 + 0x20) == '\0' && cVar4 == '\0') {
          lVar17 = 0;
          lVar18 = uVar11 << 6;
          *(long *)(param_3 + 0xc) = lVar18;
        }
        else {
          lVar18 = (long)(int)*(char *)(lVar16 + 0x20) << 6;
          *(long *)(param_3 + 0xc) = lVar18;
          lVar17 = (long)(int)cVar4 << 6;
        }
        goto LAB_1097791ac;
      }
    }
    else if (cVar4 < 0) {
      lVar17 = lVar19 * -0x40;
LAB_1097791ac:
      *(long *)(param_3 + 0x10) = lVar17;
    }
    *(long *)(param_3 + 0x14) = lVar18 - lVar17;
    if (lVar18 - lVar17 == 0) {
      *(ulong *)(param_3 + 0x10) = lVar17 + uVar11 * -0x40;
      *(ulong *)(param_3 + 0x14) = uVar11 << 6;
    }
    *(long *)(param_3 + 0x18) =
         (long)(int)(((uint)*(byte *)(lVar16 + 0x1a) + (uint)*(byte *)(lVar16 + 0x1e) +
                     (uint)*(byte *)(lVar16 + 0x1f)) * 0x40);
    uVar3 = *(ushort *)(param_1 + 0x152);
    if (uVar3 != 0) {
      uVar9 = 0;
      uVar15 = (uint)uVar3;
      if (uVar3 != 0) {
        uVar9 = ((uint)(uVar3 >> 1) | (uint)bVar1 << 0x16) / uVar15;
      }
      *(ulong *)(param_3 + 4) = (ulong)uVar9;
      uVar9 = 0;
      if (uVar15 != 0) {
        uVar9 = ((uint)(uVar3 >> 1) | (uint)bVar2 << 0x16) / uVar15;
      }
      uVar12 = (ulong)uVar9;
      goto LAB_109779214;
    }
    uVar12 = 0x7fffffff;
  }
  else {
    if (*(int *)(param_1 + 0x540) != 3) {
      return;
    }
    uVar9 = *(uint *)(*(long *)(param_1 + 0x530) + param_2 * 4 + 8);
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    if (*(ulong *)(param_1 + 0x588) < (ulong)(uVar9 + 4)) {
      return;
    }
    plVar20 = *(long **)(param_1 + 0xc0);
    uVar11 = *(long *)(param_1 + 0x580) + (ulong)uVar9;
    if ((code *)plVar20[5] == (code *)0x0) {
      if ((ulong)plVar20[1] < uVar11) {
        return;
      }
    }
    else {
      plVar10 = plVar20;
      (*(code *)plVar20[5])(plVar20,uVar11,0,0);
      if (plVar10 != (long *)0x0) {
        return;
      }
    }
    plVar20[2] = uVar11;
    plVar10 = plVar20;
    func_0x00010975780c(plVar20,4);
    if ((int)plVar10 != 0) {
      return;
    }
    puVar13 = (ushort *)plVar20[8];
    if ((long)puVar13 + 1U < (ulong)plVar20[9]) {
      uVar11 = (ulong)((uint)(*puVar13 >> 8) | (*puVar13 & 0xff00ff) << 8);
      puVar13 = puVar13 + 1;
    }
    else {
      uVar11 = 0;
    }
    lVar16 = 2;
    if ((ulong)plVar20[9] <= (long)puVar13 + 1U) {
      lVar16 = 0;
    }
    plVar20[8] = (long)puVar13 + lVar16;
    if (plVar20[5] != 0) {
      if (*plVar20 != 0) {
        (**(code **)(plVar20[7] + 0x10))();
      }
      *plVar20 = 0;
    }
    plVar20[8] = 0;
    plVar20[9] = 0;
    *param_3 = (ushort)uVar11;
    param_3[1] = (ushort)uVar11;
    uVar14 = (ulong)*(ushort *)(param_1 + 0x152);
    if (uVar14 == 0) {
      uVar12 = 0x7fffffff;
    }
    else {
      uVar12 = 0;
      if (uVar14 != 0) {
        uVar12 = ((ulong)(*(ushort *)(param_1 + 0x152) >> 1) | uVar11 << 0x16) / uVar14;
      }
    }
    sVar7 = *(short *)(param_1 + 0x198);
    lVar16 = uVar12 * (long)sVar7;
    sVar8 = *(short *)(param_1 + 0x19a);
    lVar17 = uVar12 * (long)sVar8;
    *(long *)(param_3 + 0xc) = lVar16 + (lVar16 >> 0x3f) + 0x8000 >> 0x10;
    *(long *)(param_3 + 0x10) = lVar17 + (lVar17 >> 0x3f) + 0x8000 >> 0x10;
    lVar16 = (((long)sVar7 - (long)sVar8) + (long)*(short *)(param_1 + 0x19c)) * uVar12;
    uVar3 = *(ushort *)(param_1 + 0x19e);
    *(long *)(param_3 + 0x14) = lVar16 + (lVar16 >> 0x3f) + 0x8000 >> 0x10;
    *(ulong *)(param_3 + 0x18) = uVar12 * uVar3 + 0x8000 >> 0x10;
  }
  *(ulong *)(param_3 + 4) = uVar12;
LAB_109779214:
  *(ulong *)(param_3 + 8) = uVar12;
  return;
}



/* Entry: 109779334; end: 109779683;  */

void FUN_109779334(long param_1,long param_2)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ushort *puVar8;
  ulong uVar9;
  ulong uVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  ulong uVar14;
  ushort *puVar15;
  ushort *puVar16;
  ushort *puVar17;
  ulong uStack_60;
  int iStack_54;
  
  puVar15 = *(ushort **)(param_1 + 0xb8);
  lVar7 = param_1;
  (**(code **)(param_1 + 0x340))(param_1,0x4350414c,param_2,&uStack_60);
  iStack_54 = (int)lVar7;
  if (iStack_54 != 0) {
    puVar16 = (ushort *)0x0;
    puVar17 = (ushort *)0x0;
    goto LAB_1097793bc;
  }
  if (uStack_60 < 0xc) {
    puVar16 = (ushort *)0x0;
    puVar17 = (ushort *)0x0;
    goto LAB_10977939c;
  }
  lVar7 = param_2;
  func_0x00010975780c();
  if ((int)lVar7 == 0) {
    puVar16 = *(ushort **)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    puVar17 = puVar15;
    (**(code **)(puVar15 + 4))(puVar15,0x28);
    if (puVar17 != (ushort *)0x0) {
      puVar17[0x10] = 0;
      puVar17[0x11] = 0;
      puVar17[0x12] = 0;
      puVar17[0x13] = 0;
      puVar17[4] = 0;
      puVar17[5] = 0;
      puVar17[6] = 0;
      puVar17[7] = 0;
      puVar17[0] = 0;
      puVar17[1] = 0;
      puVar17[2] = 0;
      puVar17[3] = 0;
      puVar17[0xc] = 0;
      puVar17[0xd] = 0;
      puVar17[0xe] = 0;
      puVar17[0xf] = 0;
      puVar17[8] = 0;
      puVar17[9] = 0;
      puVar17[10] = 0;
      puVar17[0xb] = 0;
      iStack_54 = 0;
      uVar2 = *puVar16 >> 8 | *puVar16 << 8;
      *puVar17 = uVar2;
      if (uVar2 < 2) {
        uVar4 = (uint)(puVar16[1] >> 8) | (puVar16[1] & 0xff00ff) << 8;
        *(short *)(param_1 + 0x430) = (short)uVar4;
        uVar5 = (uint)(puVar16[2] >> 8) | (puVar16[2] & 0xff00ff) << 8;
        uVar10 = (ulong)uVar5;
        *(short *)(param_1 + 0x418) = (short)uVar5;
        uVar6 = (uint)(puVar16[3] >> 8) | (puVar16[3] & 0xff00ff) << 8;
        puVar17[1] = (ushort)uVar6;
        uVar3 = (*(uint *)(puVar16 + 4) & 0xff00ff00) >> 8 |
                (*(uint *)(puVar16 + 4) & 0xff00ff) << 8;
        uVar14 = (ulong)(uVar3 >> 0x10 | uVar3 << 0x10);
        if ((uVar10 * 2 + 0xc <= uStack_60 && uVar14 < uStack_60) &&
           ((ulong)uVar6 << 2 <= uStack_60 - uVar14 && uVar4 <= uVar6)) {
          *(ulong *)(puVar17 + 4) = (long)puVar16 + uVar14;
          *(ushort **)(puVar17 + 8) = puVar16 + 6;
          if (uVar2 == 1) {
            if (uStack_60 < (int)(uVar10 * 2) + 0x18) goto LAB_10977939c;
            puVar1 = (uint *)(puVar16 + 6 + uVar10);
            uVar3 = puVar1[1];
            uVar4 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
            uVar6 = uVar4 >> 0x10 | uVar4 << 0x10;
            uVar14 = (ulong)uVar6;
            uVar4 = puVar1[2];
            if (uVar6 != 0) {
              if (uStack_60 <= uVar14 || uStack_60 - uVar14 < uVar10 * 2) goto LAB_10977939c;
              if (uVar5 == 0) {
                puVar8 = (ushort *)0x0;
              }
              else {
                puVar8 = puVar15;
                (**(code **)(puVar15 + 4))();
                if (puVar8 == (ushort *)0x0) goto LAB_109779624;
                uVar2 = *(ushort *)(param_1 + 0x418);
                if ((ulong)uVar2 != 0) {
                  puVar11 = (ushort *)((long)puVar16 + uVar14);
                  puVar13 = puVar8;
                  do {
                    puVar12 = puVar13 + 1;
                    *puVar13 = *puVar11 >> 8 | *puVar11 << 8;
                    puVar11 = puVar11 + 1;
                    puVar13 = puVar12;
                  } while (puVar12 < puVar8 + uVar2);
                }
              }
              *(ushort **)(param_1 + 0x428) = puVar8;
            }
            iStack_54 = 0;
            uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
            uVar10 = (ulong)(uVar3 >> 0x10 | uVar3 << 0x10);
            if (uVar10 != 0) {
              uVar14 = uStack_60 - uVar10;
              if ((uStack_60 < uVar10 || uVar14 == 0) ||
                 (uVar9 = (ulong)*(ushort *)(param_1 + 0x418) * 2,
                 uVar14 <= uVar9 && uVar9 - uVar14 != 0)) goto LAB_10977939c;
              if (*(ushort *)(param_1 + 0x418) == 0) {
                puVar8 = (ushort *)0x0;
              }
              else {
                puVar8 = puVar15;
                (**(code **)(puVar15 + 4))();
                if (puVar8 == (ushort *)0x0) goto LAB_109779624;
                uVar2 = *(ushort *)(param_1 + 0x418);
                if ((ulong)uVar2 != 0) {
                  puVar11 = (ushort *)((long)puVar16 + uVar10);
                  puVar13 = puVar8;
                  do {
                    puVar12 = puVar13 + 1;
                    *puVar13 = *puVar11 >> 8 | *puVar11 << 8;
                    puVar11 = puVar11 + 1;
                    puVar13 = puVar12;
                  } while (puVar12 < puVar8 + uVar2);
                }
              }
              *(ushort **)(param_1 + 0x420) = puVar8;
            }
            iStack_54 = 0;
            uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
            uVar10 = (ulong)(uVar3 >> 0x10 | uVar3 << 0x10);
            if (uVar10 != 0) {
              uVar14 = uStack_60 - uVar10;
              if ((uStack_60 < uVar10 || uVar14 == 0) ||
                 (uVar9 = (ulong)*(ushort *)(param_1 + 0x430) * 2,
                 uVar14 <= uVar9 && uVar9 - uVar14 != 0)) goto LAB_10977939c;
              if (*(ushort *)(param_1 + 0x430) == 0) {
                puVar8 = (ushort *)0x0;
              }
              else {
                puVar8 = puVar15;
                (**(code **)(puVar15 + 4))();
                if (puVar8 == (ushort *)0x0) goto LAB_109779624;
                uVar2 = *(ushort *)(param_1 + 0x430);
                if ((ulong)uVar2 != 0) {
                  puVar11 = (ushort *)((long)puVar16 + uVar10);
                  puVar13 = puVar8;
                  do {
                    puVar12 = puVar13 + 1;
                    *puVar13 = *puVar11 >> 8 | *puVar11 << 8;
                    puVar11 = puVar11 + 1;
                    puVar13 = puVar12;
                  } while (puVar12 < puVar8 + uVar2);
                }
              }
              *(ushort **)(param_1 + 0x438) = puVar8;
            }
          }
          iStack_54 = 0;
          *(ushort **)(puVar17 + 0xc) = puVar16;
          *(ulong *)(puVar17 + 0x10) = uStack_60;
          *(ushort **)(param_1 + 0x590) = puVar17;
          puVar8 = puVar15;
          FUN_1097539a8(puVar15,4,0,*(undefined2 *)(param_1 + 0x430),0,&iStack_54);
          *(ushort **)(param_1 + 0x448) = puVar8;
          if (iStack_54 != 0) goto LAB_1097793c0;
          lVar7 = param_1;
          FUN_109779ad8(param_1,0);
          if ((int)lVar7 == 0) {
            return;
          }
        }
      }
LAB_10977939c:
      iStack_54 = 8;
      goto LAB_1097793bc;
    }
LAB_109779624:
    iStack_54 = 0x40;
  }
  else {
    puVar16 = (ushort *)0x0;
    puVar17 = (ushort *)0x0;
    iStack_54 = (int)lVar7;
LAB_1097793bc:
    if (param_2 == 0) goto LAB_1097793dc;
  }
LAB_1097793c0:
  if ((*(long *)(param_2 + 0x28) != 0) && (puVar16 != (ushort *)0x0)) {
    (**(code **)(*(long *)(param_2 + 0x38) + 0x10))(*(long *)(param_2 + 0x38),puVar16);
  }
LAB_1097793dc:
  if (puVar17 != (ushort *)0x0) {
    (**(code **)(puVar15 + 8))(puVar15,puVar17);
  }
  *(undefined8 *)(param_1 + 0x590) = 0;
  return;
}



/* Entry: 109779684; end: 1097799db;  */

long FUN_109779684(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  ushort *puVar13;
  ushort *puVar14;
  long lVar15;
  ushort *puVar16;
  long lVar17;
  ulong uStack_68;
  
  if (*(long *)(param_1 + 0x590) == 0) {
    return 3;
  }
  puVar13 = *(ushort **)(param_1 + 0xb8);
  lVar15 = param_1;
  (**(code **)(param_1 + 0x340))(param_1,0x434f4c52,param_2,&uStack_68);
  if ((int)lVar15 != 0) {
    return lVar15;
  }
  if (uStack_68 < 0xe) {
    return 0;
  }
  lVar17 = *(long *)(param_2 + 0x10);
  lVar15 = param_2;
  func_0x00010975780c();
  if ((int)lVar15 != 0) {
    return lVar15;
  }
  puVar14 = *(ushort **)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  puVar5 = puVar13;
  (**(code **)(puVar13 + 4))(puVar13,0x90);
  if (puVar5 == (ushort *)0x0) {
    lVar15 = 0x40;
    goto LAB_1097797fc;
  }
  puVar5[0x3c] = 0;
  puVar5[0x3d] = 0;
  puVar5[0x3e] = 0;
  puVar5[0x3f] = 0;
  puVar5[0x38] = 0;
  puVar5[0x39] = 0;
  puVar5[0x3a] = 0;
  puVar5[0x3b] = 0;
  puVar5[0x44] = 0;
  puVar5[0x45] = 0;
  puVar5[0x46] = 0;
  puVar5[0x47] = 0;
  puVar5[0x40] = 0;
  puVar5[0x41] = 0;
  puVar5[0x42] = 0;
  puVar5[0x43] = 0;
  puVar5[0x2c] = 0;
  puVar5[0x2d] = 0;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2a] = 0;
  puVar5[0x2b] = 0;
  puVar5[0x34] = 0;
  puVar5[0x35] = 0;
  puVar5[0x36] = 0;
  puVar5[0x37] = 0;
  puVar5[0x30] = 0;
  puVar5[0x31] = 0;
  puVar5[0x32] = 0;
  puVar5[0x33] = 0;
  puVar5[0x1c] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1f] = 0;
  puVar5[0x18] = 0;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x24] = 0;
  puVar5[0x25] = 0;
  puVar5[0x26] = 0;
  puVar5[0x27] = 0;
  puVar5[0x20] = 0;
  puVar5[0x21] = 0;
  puVar5[0x22] = 0;
  puVar5[0x23] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[0] = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  uVar3 = *puVar14 >> 8 | *puVar14 << 8;
  *puVar5 = uVar3;
  if (uVar3 < 2) {
    uVar4 = (uint)(puVar14[1] >> 8) | (puVar14[1] & 0xff00ff) << 8;
    puVar5[1] = (ushort)uVar4;
    uVar2 = (*(uint *)(puVar14 + 2) & 0xff00ff00) >> 8 | (*(uint *)(puVar14 + 2) & 0xff00ff) << 8;
    uVar7 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
    if ((uVar7 <= uStack_68 && uStack_68 - uVar7 != 0) && ((ulong)uVar4 <= (uStack_68 - uVar7) / 6))
    {
      uVar2 = (*(uint *)(puVar14 + 4) & 0xff00ff00) >> 8 | (*(uint *)(puVar14 + 4) & 0xff00ff) << 8;
      uVar8 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
      uVar2 = (uint)(puVar14[6] >> 8) | (puVar14[6] & 0xff00ff) << 8;
      puVar5[2] = (ushort)uVar2;
      if ((uVar8 <= uStack_68 && uStack_68 - uVar8 != 0) && ((ulong)uVar2 <= uStack_68 - uVar8 >> 2)
         ) {
        if (uVar3 != 1) goto LAB_109779924;
        if (0x21 < uStack_68) {
          uVar2 = (*(uint *)(puVar14 + 7) & 0xff00ff00) >> 8 |
                  (*(uint *)(puVar14 + 7) & 0xff00ff) << 8;
          uVar12 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
          if (uVar12 < uStack_68 - 4) {
            puVar10 = (uint *)((long)puVar14 + uVar12);
            uVar2 = (*puVar10 & 0xff00ff00) >> 8 | (*puVar10 & 0xff00ff) << 8;
            uVar11 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
            if (uVar11 <= (uStack_68 - uVar12) / 6) {
              *(ulong *)(puVar5 + 0xc) = uVar11;
              *(uint **)(puVar5 + 0x10) = puVar10;
              uVar2 = (*(uint *)(puVar14 + 9) & 0xff00ff00) >> 8 |
                      (*(uint *)(puVar14 + 9) & 0xff00ff) << 8;
              uVar12 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
              if (uVar12 <= uStack_68 && uStack_68 - uVar12 != 0) {
                if (uVar12 == 0) {
                  puVar5[0x14] = 0;
                  puVar5[0x15] = 0;
                  puVar5[0x16] = 0;
                  puVar5[0x17] = 0;
                  puVar5[0x18] = 0;
                  puVar5[0x19] = 0;
                  puVar5[0x1a] = 0;
                  puVar5[0x1b] = 0;
                  puVar10 = (uint *)((long)puVar10 + uVar11 * 6);
LAB_1097798d8:
                  *(uint **)(puVar5 + 0x20) = puVar10;
                  uVar2 = (*(uint *)(puVar14 + 0xb) & 0xff00ff00) >> 8 |
                          (*(uint *)(puVar14 + 0xb) & 0xff00ff) << 8;
                  uVar12 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
                  if (uVar12 < uStack_68) {
                    lVar15 = 0;
                    if (uVar12 != 0) {
                      lVar15 = (long)puVar14 + uVar12;
                    }
                    puVar16 = puVar5 + 0x24;
                    puVar16[0] = 0;
                    puVar16[1] = 0;
                    *(long *)(puVar5 + 0x1c) = lVar15;
                    puVar5[0x28] = 0;
                    puVar5[0x29] = 0;
                    puVar5[0x2a] = 0;
                    puVar5[0x2b] = 0;
                    puVar5[0x2c] = 0;
                    puVar5[0x32] = 0;
                    puVar5[0x33] = 0;
                    puVar5[0x34] = 0;
                    puVar5[0x35] = 0;
                    puVar5[0x2e] = 0;
                    puVar5[0x2f] = 0;
                    puVar5[0x30] = 0;
                    puVar5[0x31] = 0;
                    puVar5[0x3a] = 0;
                    puVar5[0x3b] = 0;
                    puVar5[0x3c] = 0;
                    puVar5[0x3d] = 0;
                    puVar5[0x36] = 0;
                    puVar5[0x37] = 0;
                    puVar5[0x38] = 0;
                    puVar5[0x39] = 0;
                    puVar5[0x3e] = 0;
                    puVar5[0x3f] = 0;
                    if (((*(byte *)(param_1 + 0x4c8) & 1) == 0) ||
                       (((uVar2 = (*(uint *)(puVar14 + 0xd) & 0xff00ff00) >> 8 |
                                  (*(uint *)(puVar14 + 0xd) & 0xff00ff) << 8,
                         uVar12 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10), uVar12 < uStack_68 &&
                         (uVar2 = (*(uint *)(puVar14 + 0xf) & 0xff00ff00) >> 8 |
                                  (*(uint *)(puVar14 + 0xf) & 0xff00ff) << 8,
                         uVar11 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10), uVar11 < uStack_68)) &&
                        ((uVar11 == 0 ||
                         ((((lVar15 = *(long *)(param_1 + 0x380), *(long *)(param_1 + 0x4c0) != 0 ||
                            (lVar6 = param_1, (**(code **)(lVar15 + 0x20))(param_1,0),
                            (int)lVar6 == 0)) &&
                           (lVar6 = param_1,
                           (**(code **)(lVar15 + 0x68))(param_1,uVar11 + lVar17,puVar16),
                           (int)lVar6 == 0)) &&
                          (((uVar12 == 0 || (puVar5[0x2c] == 0)) ||
                           (lVar6 = param_1,
                           (**(code **)(lVar15 + 0x60))
                                     (param_1,uVar12 + lVar17,puVar5 + 0x34,puVar16),
                           (int)lVar6 == 0)))))))))) {
LAB_109779924:
                      *(ulong *)(puVar5 + 4) = (long)puVar14 + uVar7;
                      *(ulong *)(puVar5 + 8) = (long)puVar14 + uVar8;
                      *(ushort **)(puVar5 + 0x40) = puVar14;
                      *(ulong *)(puVar5 + 0x44) = uStack_68;
                      *(ushort **)(param_1 + 0x598) = puVar5;
                      return 0;
                    }
                  }
                }
                else if (uVar12 < uStack_68 - 4) {
                  puVar1 = (uint *)((long)puVar14 + uVar12);
                  uVar2 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
                  uVar9 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
                  if (uVar9 <= uStack_68 - uVar12 >> 2) {
                    *(ulong *)(puVar5 + 0x14) = uVar9;
                    *(uint **)(puVar5 + 0x18) = puVar1;
                    puVar10 = (uint *)((long)puVar10 + uVar11 * 6);
                    if (puVar1 + uVar9 <= puVar10) {
                      puVar10 = puVar1 + uVar9;
                    }
                    goto LAB_1097798d8;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar15 = *(long *)(param_1 + 0x380);
  (**(code **)(lVar15 + 0x80))(param_1,puVar5 + 0x34);
  (**(code **)(lVar15 + 0x78))(param_1,puVar5 + 0x24);
  lVar15 = 8;
LAB_1097797fc:
  if ((*(long *)(param_2 + 0x28) != 0) && (puVar14 != (ushort *)0x0)) {
    (**(code **)(*(long *)(param_2 + 0x38) + 0x10))(*(long *)(param_2 + 0x38),puVar14);
  }
  if (puVar5 != (ushort *)0x0) {
    (**(code **)(puVar13 + 8))(puVar13,puVar5);
  }
  return lVar15;
}



/* Entry: 1097799dc; end: 109779a3b;  */

void FUN_1097799dc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x590);
  if (lVar3 != 0) {
    lVar1 = *(long *)(param_1 + 0xb8);
    lVar2 = *(long *)(param_1 + 0xc0);
    if (((lVar2 != 0) && (*(long *)(lVar2 + 0x28) != 0)) && (*(long *)(lVar3 + 0x18) != 0)) {
      (**(code **)(*(long *)(lVar2 + 0x38) + 0x10))();
    }
    *(undefined8 *)(lVar3 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x000109779a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,lVar3);
    return;
  }
  return;
}



/* Entry: 109779a3c; end: 109779ad7;  */

void FUN_109779a3c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x598);
  if (lVar3 != 0) {
    lVar1 = *(long *)(param_1 + 0xb8);
    lVar2 = *(long *)(param_1 + 0xc0);
    lVar4 = *(long *)(param_1 + 0x380);
    (**(code **)(lVar4 + 0x80))(param_1,lVar3 + 0x68);
    (**(code **)(lVar4 + 0x78))(param_1,lVar3 + 0x48);
    if (((lVar2 != 0) && (*(long *)(lVar2 + 0x28) != 0)) && (*(long *)(lVar3 + 0x80) != 0)) {
      (**(code **)(*(long *)(lVar2 + 0x38) + 0x10))();
    }
    *(undefined8 *)(lVar3 + 0x80) = 0;
                    /* WARNING: Could not recover jumptable at 0x000109779ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,lVar3);
    return;
  }
  return;
}



/* Entry: 109779ad8; end: 109779d63;  */

undefined8 FUN_109779ad8(long param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  
  lVar6 = *(long *)(param_1 + 0x590);
  if ((lVar6 != 0) && (param_2 < *(ushort *)(param_1 + 0x418))) {
    uVar4 = *(ushort *)(*(long *)(lVar6 + 0x10) + (ulong)param_2 * 2);
    uVar3 = *(ushort *)(param_1 + 0x430);
    if ((uint)*(ushort *)(lVar6 + 2) < (uint)uVar3 + ((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8))
    {
      return 8;
    }
    if (uVar3 != 0) {
      puVar5 = *(undefined1 **)(param_1 + 0x448);
      puVar2 = puVar5 + (ulong)uVar3 * 4;
      puVar7 = (undefined1 *)
               (*(long *)(lVar6 + 8) + (ulong)(((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8) << 2))
      ;
      do {
        *puVar5 = *puVar7;
        puVar5[1] = puVar7[1];
        puVar5[2] = puVar7[2];
        puVar1 = puVar7 + 3;
        puVar7 = puVar7 + 4;
        puVar5[3] = *puVar1;
        puVar5 = puVar5 + 4;
      } while (puVar5 < puVar2);
    }
    return 0;
  }
  return 6;
}



/* Entry: 109779d64; end: 10977a03f;  */

long FUN_109779d64(long param_1,uint param_2,ulong *param_3)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  ulong *puVar10;
  byte *pbVar11;
  char *pcVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  byte *pbVar17;
  int *piVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar9 = *(int **)(param_1 + 0x598);
  puVar10 = param_3;
  if ((piVar9 != (int *)0x0) && (pcVar12 = *(char **)(piVar9 + 0xe), pcVar12 != (char *)0x0)) {
    lVar8 = *(long *)(piVar9 + 0x20) + *(ulong *)(piVar9 + 0x22);
    if ((pcVar12 <= (char *)(lVar8 + -5)) &&
       ((*pcVar12 == '\x01' &&
        (uVar7 = (*(uint *)(pcVar12 + 1) & 0xff00ff00) >> 8 |
                 (*(uint *)(pcVar12 + 1) & 0xff00ff) << 8,
        uVar13 = (ulong)(uVar7 >> 0x10 | uVar7 << 0x10),
        uVar13 - 1 < *(ulong *)(piVar9 + 0x22) / 7 && pcVar12 + 5 <= (char *)(lVar8 + uVar13 * -7)))
       )) {
      pbVar17 = (byte *)(pcVar12 + 0xb);
      do {
        if ((((uint)(*(ushort *)(pbVar17 + -6) >> 8) | (*(ushort *)(pbVar17 + -6) & 0xff00ff) << 8)
             <= param_2) &&
           (param_2 <=
            ((uint)(*(ushort *)(pbVar17 + -4) >> 8) | (*(ushort *)(pbVar17 + -4) & 0xff00ff) << 8)))
        {
          pbVar17 = (byte *)(pcVar12 +
                            (ulong)*pbVar17 +
                            (ulong)pbVar17[-2] * 0x10000 + (ulong)pbVar17[-1] * 0x100);
          if (((byte *)(lVar8 + -1) < pbVar17) ||
             (2 < *pbVar17 || (byte *)(lVar8 + -8) < pbVar17 + 1)) break;
          lVar15 = *(long *)(*(long *)(param_1 + 0xa0) + 0x20);
          lVar16 = *(long *)(*(long *)(param_1 + 0xa0) + 0x28);
          lVar14 = lVar15 * ((long)(short)((ushort)pbVar17[1] << 8) | (ulong)pbVar17[2]);
          uVar13 = lVar14 + (lVar14 >> 0x3f) + 0x8000 >> 0x10;
          lVar14 = lVar16 * ((long)(short)((ushort)pbVar17[3] << 8) | (ulong)pbVar17[4]);
          uVar19 = lVar14 + (lVar14 >> 0x3f) + 0x8000 >> 0x10;
          lVar15 = lVar15 * ((long)(short)((ushort)pbVar17[5] << 8) | (ulong)pbVar17[6]);
          uVar20 = lVar15 + (lVar15 >> 0x3f) + 0x8000 >> 0x10;
          lVar16 = lVar16 * ((long)(short)((ushort)pbVar17[7] << 8) | (ulong)pbVar17[8]);
          uVar21 = lVar16 + (lVar16 >> 0x3f) + 0x8000 >> 0x10;
          if (*pbVar17 == 2) {
            uStack_98 = 0;
            uStack_90 = 0;
            if ((byte *)(lVar8 + -4) < pbVar17 + 9) break;
            uVar7 = (*(uint *)(pbVar17 + 9) & 0xff00ff00) >> 8 |
                    (*(uint *)(pbVar17 + 9) & 0xff00ff) << 8;
            puVar10 = (ulong *)(ulong)(uVar7 >> 0x10 | uVar7 << 0x10);
            FUN_10977d7b0(param_1,piVar9,puVar10,4,&uStack_98);
            lVar8 = *(long *)(*(long *)(param_1 + 0xa0) + 0x20);
            lVar15 = *(long *)(*(long *)(param_1 + 0xa0) + 0x28);
            lVar16 = lVar8 * (int)uStack_98;
            uVar13 = uVar13 + (lVar16 + (lVar16 >> 0x3f) + 0x8000 >> 0x10);
            lVar16 = lVar15 * uStack_98._4_4_;
            uVar19 = uVar19 + (lVar16 + (lVar16 >> 0x3f) + 0x8000 >> 0x10);
            lVar8 = lVar8 * (int)uStack_90;
            uVar20 = uVar20 + (lVar8 + (lVar8 >> 0x3f) + 0x8000 >> 0x10);
            lVar15 = lVar15 * uStack_90._4_4_;
            uVar21 = uVar21 + (lVar15 + (lVar15 >> 0x3f) + 0x8000 >> 0x10);
          }
          lVar8 = 0;
          uStack_98 = uVar13;
          uStack_90 = uVar19;
          uStack_88 = uVar13;
          uStack_80 = uVar21;
          uStack_78 = uVar20;
          uStack_70 = uVar21;
          uStack_68 = uVar20;
          uStack_60 = uVar19;
          piVar18 = *(int **)(param_1 + 0xf0);
          uVar7 = piVar18[0xc];
          do {
            if ((uVar7 & 1) != 0) {
              piVar9 = piVar18;
              FUN_1097547e4((long)&uStack_98 + lVar8);
            }
            if ((uVar7 >> 1 & 1) != 0) {
              lVar15 = *(long *)(piVar18 + 8);
              *(long *)((long)&uStack_90 + lVar8) =
                   *(long *)((long)&uStack_90 + lVar8) + *(long *)(piVar18 + 10);
              *(long *)((long)&uStack_98 + lVar8) = *(long *)((long)&uStack_98 + lVar8) + lVar15;
            }
            lVar8 = lVar8 + 0x10;
          } while (lVar8 != 0x40);
          param_3[1] = uStack_90;
          *param_3 = uStack_98;
          param_3[3] = uStack_80;
          param_3[2] = uStack_88;
          param_3[5] = uStack_70;
          param_3[4] = uStack_78;
          param_3[7] = uStack_60;
          param_3[6] = uStack_68;
          lVar8 = 1;
          goto LAB_109779e80;
        }
        pbVar17 = pbVar17 + 7;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  lVar8 = 0;
LAB_109779e80:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar8;
  }
  ___stack_chk_fail();
  iVar2 = piVar9[1];
  if ((iVar2 != *piVar9) && (lVar8 = *(long *)(lVar8 + 0x598), lVar8 != 0)) {
    pbVar11 = *(byte **)(piVar9 + 2);
    pbVar17 = *(byte **)(lVar8 + 0x30);
    if ((pbVar17 <= pbVar11 + (-4 - (ulong)(uint)(iVar2 << 2))) &&
       ((pbVar17 <= pbVar11 &&
         pbVar11 + (-4 - (ulong)(uint)(iVar2 << 2)) < pbVar17 + *(long *)(lVar8 + 0x28) * 4 + 4 &&
        (pbVar1 = (byte *)(*(long *)(lVar8 + 0x80) + *(long *)(lVar8 + 0x88)),
        pbVar11 <= pbVar1 + -4)))) {
      bVar3 = *pbVar11;
      bVar4 = pbVar11[1];
      bVar5 = pbVar11[2];
      bVar6 = pbVar11[3];
      *(undefined1 *)(puVar10 + 1) = 0;
      pbVar17 = pbVar17 + (ulong)bVar6 +
                          (ulong)bVar5 * 0x100 + (ulong)bVar3 * 0x1000000 + (ulong)bVar4 * 0x10000;
      if (*(byte **)(lVar8 + 0x40) <= pbVar17 && pbVar17 < pbVar1) {
        *puVar10 = (ulong)pbVar17;
        *(byte **)(piVar9 + 2) = pbVar11 + 4;
        piVar9[1] = iVar2 + 1;
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10977a040; end: 10977a0f3;  */

undefined8 FUN_10977a040(long param_1,int *param_2,ulong *param_3)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  
  iVar2 = param_2[1];
  if ((iVar2 != *param_2) && (lVar8 = *(long *)(param_1 + 0x598), lVar8 != 0)) {
    pbVar7 = *(byte **)(param_2 + 2);
    pbVar9 = *(byte **)(lVar8 + 0x30);
    if ((pbVar9 <= pbVar7 + (-4 - (ulong)(uint)(iVar2 << 2))) &&
       ((pbVar9 <= pbVar7 &&
         pbVar7 + (-4 - (ulong)(uint)(iVar2 << 2)) < pbVar9 + *(long *)(lVar8 + 0x28) * 4 + 4 &&
        (pbVar1 = (byte *)(*(long *)(lVar8 + 0x80) + *(long *)(lVar8 + 0x88)), pbVar7 <= pbVar1 + -4
        )))) {
      bVar3 = *pbVar7;
      bVar4 = pbVar7[1];
      bVar5 = pbVar7[2];
      bVar6 = pbVar7[3];
      *(undefined1 *)(param_3 + 1) = 0;
      pbVar9 = pbVar9 + (ulong)bVar6 +
                        (ulong)bVar5 * 0x100 + (ulong)bVar3 * 0x1000000 + (ulong)bVar4 * 0x10000;
      if (*(byte **)(lVar8 + 0x40) <= pbVar9 && pbVar9 < pbVar1) {
        *param_3 = (ulong)pbVar9;
        *(byte **)(param_2 + 2) = pbVar7 + 4;
        param_2[1] = iVar2 + 1;
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10977a0f4; end: 10977a253;  */

ulong FUN_10977a0f4(ulong *param_1,ulong *param_2,uint *param_3,uint *param_4)

{
  byte bVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  ushort *puVar11;
  undefined8 uVar12;
  uint uVar13;
  uint *unaff_x19;
  ushort *puVar14;
  uint unaff_w23;
  int iVar16;
  undefined1 auVar15 [16];
  byte *pbStack_c0;
  uint *puStack_b8;
  short sStack_b0;
  short sStack_ae;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_88;
  int iStack_40;
  short sStack_3c;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (uint *)param_1[0xb3];
  puVar10 = param_3;
  if (puVar5 == (uint *)0x0) {
LAB_10977a18c:
    uVar8 = 0;
    param_3 = unaff_x19;
  }
  else {
    uVar8 = 0;
    if ((param_3 != (uint *)0x0) && (*(long *)(puVar5 + 0x20) != 0)) {
      uVar6 = param_3[1];
      unaff_x19 = param_3;
      if ((uVar6 < *param_3) &&
         (puVar11 = *(ushort **)(param_3 + 2), *(ushort **)(puVar5 + 0x10) <= puVar11)) {
        uVar3 = param_3[4];
        uVar13 = 6;
        if ((char)uVar3 != '\0') {
          uVar13 = 10;
        }
        if ((long)puVar11 + (ulong)(uVar13 * (*param_3 + ~uVar6)) <=
            (*(long *)(puVar5 + 0x20) + *(long *)(puVar5 + 0x22)) - (ulong)uVar13) {
          uVar13 = *puVar11 & 0xff00ff;
          *param_2 = -(ulong)(uVar13 >> 7) & 0xfffffffffffc0000 |
                     (ulong)((uint)(*puVar11 >> 8) | uVar13 << 8) << 2;
          *(ushort *)(param_2 + 1) = puVar11[1] >> 8 | puVar11[1] << 8;
          *(ushort *)((long)param_2 + 10) = puVar11[2] >> 8 | puVar11[2] << 8;
          if ((char)uVar3 == '\0') {
            puVar14 = puVar11 + 3;
          }
          else {
            puVar14 = puVar11 + 5;
            puVar10 = (uint *)(ulong)(*(uint *)(puVar11 + 3) >> 0x18);
            param_4 = (uint *)0x2;
            FUN_10977d7b0();
            *param_2 = *param_2 + (long)iStack_40 * 4;
            *(short *)((long)param_2 + 10) = *(short *)((long)param_2 + 10) + sStack_3c;
            uVar6 = param_3[1];
          }
          *(ushort **)(param_3 + 2) = puVar14;
          param_3[1] = uVar6 + 1;
          uVar8 = 1;
          goto LAB_10977a190;
        }
      }
      goto LAB_10977a18c;
    }
  }
LAB_10977a190:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return uVar8;
  }
  ___stack_chk_fail();
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = param_1[0xb3];
  if (uVar8 == 0) goto LAB_10977a338;
  if (*(long *)(uVar8 + 0x20) == 0) goto LAB_10977a338;
  if (*(long *)(uVar8 + 0x80) == 0) goto LAB_10977a338;
  if (((ulong)puVar10 & 0xff) == 0) {
    pbStack_c0 = (byte *)0x0;
    sStack_b0 = 0;
    sStack_ae = 0;
    iStack_ac = 0;
    iStack_a8 = 0;
    iStack_a4 = 0;
    uStack_a0 = 0;
    param_3 = param_4;
    param_2 = param_1;
    if (puVar5 == (uint *)0x0) goto LAB_10977a338;
    if (puVar5 < *(uint **)(uVar8 + 0x40)) goto LAB_10977a338;
    lVar7 = *(long *)(uVar8 + 0x80) + *(long *)(uVar8 + 0x88);
    if ((uint *)(lVar7 + -2) < puVar5) goto LAB_10977a338;
    puStack_b8 = (uint *)((long)puVar5 + 1);
    bVar1 = (byte)*puVar5;
    *param_4 = (uint)bVar1;
    if (0x20 < bVar1) goto LAB_10977a338;
    if (bVar1 - 2 < 2) {
      if ((uint *)(lVar7 + -4) < puStack_b8) goto LAB_10977a338;
      *(ushort *)(param_4 + 2) =
           *(ushort *)((long)puVar5 + 1) >> 8 | *(ushort *)((long)puVar5 + 1) << 8;
      *(ushort *)((long)param_4 + 10) =
           *(ushort *)((long)puVar5 + 3) >> 8 | *(ushort *)((long)puVar5 + 3) << 8;
      if (bVar1 == 3) {
        if ((long)puVar5 + 5U < *(ulong *)(uVar8 + 0x40)) goto LAB_10977a338;
        if ((*(long *)(uVar8 + 0x80) + *(long *)(uVar8 + 0x88)) - 4U < (long)puVar5 + 5U)
        goto LAB_10977a338;
        uVar6 = (*(uint *)((long)puVar5 + 5) & 0xff00ff00) >> 8 |
                (*(uint *)((long)puVar5 + 5) & 0xff00ff) << 8;
        FUN_10977d7b0(param_1,uVar8,uVar6 >> 0x10 | uVar6 << 0x10,1,&sStack_b0);
        *(short *)((long)param_4 + 10) = *(short *)((long)param_4 + 10) + sStack_b0;
      }
      uVar6 = 2;
      goto LAB_10977a4b0;
    }
    if (bVar1 == 0xb) {
      if ((uint *)(lVar7 + -2) < puStack_b8) goto LAB_10977a338;
      param_4[2] = (uint)(*(ushort *)((long)puVar5 + 1) >> 8) |
                   (*(ushort *)((long)puVar5 + 1) & 0xff00ff) << 8;
    }
    else {
      if (bVar1 != 1) {
        uVar4 = uVar8;
        FUN_10977d864(uVar8,puVar5,&puStack_b8,&pbStack_c0);
        if ((int)uVar4 == 0) goto LAB_10977a33c;
        unaff_w23 = *param_4;
        if (unaff_w23 == 4) {
          uVar12 = 0;
        }
        else {
          if (unaff_w23 != 5) {
            if (unaff_w23 == 6) {
              uVar12 = 0;
            }
            else {
              if (unaff_w23 != 7) {
                if (unaff_w23 == 8) {
                  uVar12 = 0;
LAB_10977a6d4:
                  uVar4 = uVar8;
                  func_0x00010977d8e0(uVar8,pbStack_c0,param_4 + 2,uVar12);
                  if ((int)uVar4 == 0) goto LAB_10977a33c;
                  if (puStack_b8 < *(uint **)(uVar8 + 0x40)) goto LAB_10977a338;
                  if ((uint *)(*(long *)(uVar8 + 0x80) + *(long *)(uVar8 + 0x88) + -8) < puStack_b8)
                  goto LAB_10977a338;
                  uVar6 = (ushort)*puStack_b8 & 0xff00ff;
                  *(ulong *)(param_4 + 10) =
                       -(ulong)(uVar6 >> 7) & 0xffffffff00000000 |
                       (ulong)((uint)(ushort)((ushort)*puStack_b8 >> 8) | uVar6 << 8) << 0x10;
                  uVar6 = *(ushort *)((long)puStack_b8 + 2) & 0xff00ff;
                  *(ulong *)(param_4 + 0xc) =
                       -(ulong)(uVar6 >> 7) & 0xffffffff00000000 |
                       (ulong)((uint)(*(ushort *)((long)puStack_b8 + 2) >> 8) | uVar6 << 8) << 0x10;
                  uVar6 = (ushort)puStack_b8[1] & 0xff00ff;
                  *(ulong *)(param_4 + 0xe) =
                       -(ulong)(uVar6 >> 7) & 0xfffffffffffc0000 |
                       (ulong)((uint)(ushort)((ushort)puStack_b8[1] >> 8) | uVar6 << 8) << 2;
                  uVar6 = *(ushort *)((long)puStack_b8 + 6) & 0xff00ff;
                  *(ulong *)(param_4 + 0x10) =
                       -(ulong)(uVar6 >> 7) & 0xfffffffffffc0000 |
                       (ulong)((uint)(*(ushort *)((long)puStack_b8 + 6) >> 8) | uVar6 << 8) << 2;
                  if (unaff_w23 != 8) {
                    if (puStack_b8 + 2 < *(uint **)(uVar8 + 0x40)) goto LAB_10977a338;
                    if ((uint *)(*(long *)(uVar8 + 0x80) + *(long *)(uVar8 + 0x88) + -4) <
                        puStack_b8 + 2) goto LAB_10977a338;
                    uVar6 = (puStack_b8[2] & 0xff00ff00) >> 8 | (puStack_b8[2] & 0xff00ff) << 8;
                    FUN_10977d7b0(param_1,uVar8,uVar6 >> 0x10 | uVar6 << 0x10,4,&sStack_b0);
                    *(long *)(param_4 + 0xc) = (long)iStack_ac * 0x10000 + *(long *)(param_4 + 0xc);
                    *(long *)(param_4 + 10) =
                         CONCAT44((int)sStack_ae,CONCAT22(sStack_ae,sStack_b0) << 0x10) +
                         *(long *)(param_4 + 10);
                    *(long *)(param_4 + 0x10) = (long)iStack_a4 * 4 + *(long *)(param_4 + 0x10);
                    *(long *)(param_4 + 0xe) = (long)iStack_a8 * 4 + *(long *)(param_4 + 0xe);
                  }
                  uVar6 = 8;
                  goto LAB_10977a4b0;
                }
                if ((int)unaff_w23 < 0xe) {
                  if (unaff_w23 - 0xc < 2) {
                    *(byte **)(param_4 + 2) = pbStack_c0;
                    *(undefined1 *)(param_4 + 4) = 0;
                    uVar4 = uVar8;
                    FUN_10977d864(uVar8,puVar5,&puStack_b8,&pbStack_c0);
                    if ((int)uVar4 == 0) goto LAB_10977a33c;
                    if (pbStack_c0 < *(byte **)(uVar8 + 0x40)) goto LAB_10977a338;
                    if ((byte *)(*(long *)(uVar8 + 0x80) + *(long *)(uVar8 + 0x88) + -0x18) <
                        pbStack_c0) goto LAB_10977a338;
                    *(ulong *)(param_4 + 6) =
                         (long)(int)((uint)*pbStack_c0 << 0x18) | (ulong)pbStack_c0[1] << 0x10 |
                         (ulong)pbStack_c0[2] << 8 | (ulong)pbStack_c0[3];
                    *(ulong *)(param_4 + 0xc) =
                         (long)(int)((uint)pbStack_c0[4] << 0x18) | (ulong)pbStack_c0[5] << 0x10 |
                         (ulong)pbStack_c0[6] << 8 | (ulong)pbStack_c0[7];
                    *(ulong *)(param_4 + 8) =
                         (long)(int)((uint)pbStack_c0[8] << 0x18) | (ulong)pbStack_c0[9] << 0x10 |
                         (ulong)pbStack_c0[10] << 8 | (ulong)pbStack_c0[0xb];
                    *(ulong *)(param_4 + 0xe) =
                         (long)(int)((uint)pbStack_c0[0xc] << 0x18) | (ulong)pbStack_c0[0xd] << 0x10
                         | (ulong)pbStack_c0[0xe] << 8 | (ulong)pbStack_c0[0xf];
                    *(ulong *)(param_4 + 10) =
                         (long)(int)((uint)pbStack_c0[0x10] << 0x18) |
                         (ulong)pbStack_c0[0x11] << 0x10 | (ulong)pbStack_c0[0x12] << 8 |
                         (ulong)pbStack_c0[0x13];
                    *(ulong *)(param_4 + 0x10) =
                         (long)(int)((uint)pbStack_c0[0x14] << 0x18) |
                         (ulong)pbStack_c0[0x15] << 0x10 | (ulong)pbStack_c0[0x16] << 8 |
                         (ulong)pbStack_c0[0x17];
                    if (*param_4 == 0xd) {
                      if (pbStack_c0 + 0x18 < *(byte **)(uVar8 + 0x40)) goto LAB_10977a338;
                      if ((byte *)(*(long *)(uVar8 + 0x80) + *(long *)(uVar8 + 0x88) + -4) <
                          pbStack_c0 + 0x18) goto LAB_10977a338;
                      uVar6 = (*(uint *)(pbStack_c0 + 0x18) & 0xff00ff00) >> 8 |
                              (*(uint *)(pbStack_c0 + 0x18) & 0xff00ff) << 8;
                      FUN_10977d7b0(param_1,uVar8,uVar6 >> 0x10 | uVar6 << 0x10,6,&sStack_b0);
                      auVar2._2_2_ = sStack_ae;
                      auVar2._0_2_ = sStack_b0;
                      auVar2._4_4_ = iStack_ac;
                      auVar2._8_4_ = iStack_a8;
                      auVar2._12_4_ = iStack_a4;
                      auVar15._2_2_ = sStack_ae;
                      auVar15._0_2_ = sStack_b0;
                      auVar15._4_4_ = iStack_ac;
                      auVar15._8_4_ = iStack_a8;
                      auVar15._12_4_ = iStack_a4;
                      auVar15 = NEON_ext(auVar15,auVar2,8,1);
                      iVar16 = *(int *)((ulong)&sStack_b0 | 0xc);
                      *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + (long)auVar15._0_4_;
                      *(long *)(param_4 + 6) =
                           *(long *)(param_4 + 6) + (long)CONCAT22(sStack_ae,sStack_b0);
                      *(long *)(param_4 + 0xe) = *(long *)(param_4 + 0xe) + (long)iVar16;
                      *(long *)(param_4 + 0xc) = *(long *)(param_4 + 0xc) + (long)iStack_ac;
                      *(long *)(param_4 + 10) = *(long *)(param_4 + 10) + (long)(int)uStack_a0;
                      *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + (long)uStack_a0._4_4_;
                    }
                    uVar6 = 0xc;
                    goto LAB_10977a4b0;
                  }
                  if (unaff_w23 == 9) {
                    uVar12 = 1;
                    goto LAB_10977a6d4;
                  }
                  if (unaff_w23 == 10) {
                    if (puStack_b8 < *(uint **)(uVar8 + 0x40)) goto LAB_10977a338;
                    if ((uint *)(*(long *)(uVar8 + 0x80) + *(long *)(uVar8 + 0x88) + -2) <
                        puStack_b8) goto LAB_10977a338;
                    *(byte **)(param_4 + 2) = pbStack_c0;
                    *(undefined1 *)(param_4 + 4) = 0;
                    param_4[6] = (uint)(ushort)((ushort)*puStack_b8 >> 8) |
                                 ((ushort)*puStack_b8 & 0xff00ff) << 8;
                    goto LAB_10977a3b8;
                  }
                }
                else if (unaff_w23 - 0xe < 2) {
                  *(byte **)(param_4 + 2) = pbStack_c0;
                  *(undefined1 *)(param_4 + 4) = 0;
                  if (puStack_b8 < *(uint **)(uVar8 + 0x40)) goto LAB_10977a338;
                  if ((uint *)(*(long *)(uVar8 + 0x80) + *(long *)(uVar8 + 0x88) + -4) < puStack_b8)
                  goto LAB_10977a338;
                  uVar6 = (ushort)*puStack_b8 & 0xff00ff;
                  *(ulong *)(param_4 + 6) =
                       -(ulong)(uVar6 >> 7) & 0xffffffff00000000 |
                       (ulong)((uint)(ushort)((ushort)*puStack_b8 >> 8) | uVar6 << 8) << 0x10;
                  uVar6 = *(ushort *)((long)puStack_b8 + 2) & 0xff00ff;
                  *(ulong *)(param_4 + 8) =
                       -(ulong)(uVar6 >> 7) & 0xffffffff00000000 |
                       (ulong)((uint)(*(ushort *)((long)puStack_b8 + 2) >> 8) | uVar6 << 8) << 0x10;
                  if (unaff_w23 == 0xf) {
                    if (puStack_b8 + 1 < *(uint **)(uVar8 + 0x40)) goto LAB_10977a338;
                    if ((uint *)(*(long *)(uVar8 + 0x80) + *(long *)(uVar8 + 0x88) + -4) <
                        puStack_b8 + 1) goto LAB_10977a338;
                    uVar6 = (puStack_b8[1] & 0xff00ff00) >> 8 | (puStack_b8[1] & 0xff00ff) << 8;
                    FUN_10977d7b0(param_1,uVar8,uVar6 >> 0x10 | uVar6 << 0x10,2,&sStack_b0);
                    *(long *)(param_4 + 8) = (long)iStack_ac * 0x10000 + *(long *)(param_4 + 8);
                    *(long *)(param_4 + 6) =
                         CONCAT44((int)sStack_ae,CONCAT22(sStack_ae,sStack_b0) << 0x10) +
                         *(long *)(param_4 + 6);
                  }
                  uVar6 = 0xe;
                  goto LAB_10977a4b0;
                }
                if ((unaff_w23 & 0xfffffff8) == 0x10) {
                  *(byte **)(param_4 + 2) = pbStack_c0;
                  *(undefined1 *)(param_4 + 4) = 0;
                  if (puStack_b8 < *(uint **)(uVar8 + 0x40)) goto LAB_10977a338;
                  if ((uint *)(*(long *)(uVar8 + 0x80) + *(long *)(uVar8 + 0x88) + -2) < puStack_b8)
                  goto LAB_10977a338;
                  puVar10 = (uint *)((long)puStack_b8 + 2);
                  uVar6 = (ushort)*puStack_b8 & 0xff00ff;
                  uVar4 = -(ulong)(uVar6 >> 7) & 0xfffffffffffc0000 |
                          (ulong)((uint)(ushort)((ushort)*puStack_b8 >> 8) | uVar6 << 8) << 2;
                  *(ulong *)(param_4 + 6) = uVar4;
                  if ((unaff_w23 & 0x14) == 0x10) {
                    if (puVar10 < *(uint **)(uVar8 + 0x40)) goto LAB_10977a338;
                    if ((uint *)(*(long *)(uVar8 + 0x80) + *(long *)(uVar8 + 0x88) + -2) < puVar10)
                    goto LAB_10977a338;
                    puVar10 = puStack_b8 + 1;
                    uVar6 = *(ushort *)((long)puStack_b8 + 2) & 0xff00ff;
                    uVar4 = -(ulong)(uVar6 >> 7) & 0xfffffffffffc0000 |
                            (ulong)((uint)(*(ushort *)((long)puStack_b8 + 2) >> 8) | uVar6 << 8) <<
                            2;
                  }
                  *(ulong *)(param_4 + 8) = uVar4;
                  if ((unaff_w23 < 0x18) && ((1 << (ulong)(unaff_w23 & 0x1f) & 0xcc0000U) != 0)) {
                    if (puVar10 < *(uint **)(uVar8 + 0x40)) goto LAB_10977a338;
                    if ((uint *)(*(long *)(uVar8 + 0x80) + *(long *)(uVar8 + 0x88) + -4) < puVar10)
                    goto LAB_10977a338;
                    uVar6 = (ushort)*puVar10 & 0xff00ff;
                    *(ulong *)(param_4 + 10) =
                         -(ulong)(uVar6 >> 7) & 0xffffffff00000000 |
                         (ulong)((uint)(ushort)((ushort)*puVar10 >> 8) | uVar6 << 8) << 0x10;
                    puVar11 = (ushort *)((long)puVar10 + 2);
                    puVar10 = puVar10 + 1;
                    uVar6 = *puVar11 & 0xff00ff;
                    *(ulong *)(param_4 + 0xc) =
                         -(ulong)(uVar6 >> 7) & 0xffffffff00000000 |
                         (ulong)((uint)(*puVar11 >> 8) | uVar6 << 8) << 0x10;
                  }
                  else {
                    param_4[10] = 0;
                    param_4[0xb] = 0;
                    param_4[0xc] = 0;
                    param_4[0xd] = 0;
                  }
                  if ((unaff_w23 < 0x18) && ((1 << (ulong)(unaff_w23 & 0x1f) & 0xaa0000U) != 0)) {
                    if (puVar10 < *(uint **)(uVar8 + 0x40)) goto LAB_10977a338;
                    if ((uint *)(*(long *)(uVar8 + 0x80) + *(long *)(uVar8 + 0x88) + -4) < puVar10)
                    goto LAB_10977a338;
                    puStack_b8 = puVar10 + 1;
                    uVar6 = (*puVar10 & 0xff00ff00) >> 8 | (*puVar10 & 0xff00ff) << 8;
                    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
                    if (unaff_w23 == 0x11) {
                      FUN_10977d7b0(param_1,uVar8,uVar6,2,&sStack_b0);
                      *(long *)(param_4 + 8) = (long)iStack_ac * 4 + *(long *)(param_4 + 8);
                      *(long *)(param_4 + 6) =
                           (long)CONCAT22(sStack_ae,sStack_b0) * 4 + *(long *)(param_4 + 6);
                      unaff_w23 = *param_4;
                    }
                    if (unaff_w23 == 0x13) {
                      FUN_10977d7b0(param_1,uVar8,uVar6,4,&sStack_b0);
                      *(long *)(param_4 + 8) = (long)iStack_ac * 4 + *(long *)(param_4 + 8);
                      *(long *)(param_4 + 6) =
                           (long)CONCAT22(sStack_ae,sStack_b0) * 4 + *(long *)(param_4 + 6);
                      *(long *)(param_4 + 0xc) =
                           (long)iStack_a4 * 0x10000 + *(long *)(param_4 + 0xc);
                      *(long *)(param_4 + 10) =
                           CONCAT44((int)(short)((uint)iStack_a8 >> 0x10),iStack_a8 << 0x10) +
                           *(long *)(param_4 + 10);
                      unaff_w23 = *param_4;
                    }
                    if (unaff_w23 == 0x15) {
                      FUN_10977d7b0(param_1,uVar8,uVar6,1,&sStack_b0);
                      lVar7 = (long)CONCAT22(sStack_ae,sStack_b0) * 4;
                      *(long *)(param_4 + 8) = lVar7 + *(long *)(param_4 + 8);
                      *(long *)(param_4 + 6) = lVar7 + *(long *)(param_4 + 6);
                      unaff_w23 = *param_4;
                    }
                    if (unaff_w23 == 0x17) {
                      FUN_10977d7b0(param_1,uVar8,uVar6,3,&sStack_b0);
                      lVar7 = (long)CONCAT22(sStack_ae,sStack_b0) * 4;
                      *(long *)(param_4 + 8) = lVar7 + *(long *)(param_4 + 8);
                      *(long *)(param_4 + 6) = lVar7 + *(long *)(param_4 + 6);
                      *(long *)(param_4 + 0xc) =
                           (long)iStack_a8 * 0x10000 + *(long *)(param_4 + 0xc);
                      *(long *)(param_4 + 10) =
                           CONCAT44((int)(short)((uint)iStack_ac >> 0x10),iStack_ac << 0x10) +
                           *(long *)(param_4 + 10);
                    }
                  }
                  uVar6 = 0x10;
                  goto LAB_10977a4b0;
                }
                if (unaff_w23 - 0x18 < 4) goto LAB_10977adac;
                if (unaff_w23 - 0x1c < 4) {
                  *(byte **)(param_4 + 2) = pbStack_c0;
                  *(undefined1 *)(param_4 + 4) = 0;
                  if (puStack_b8 < *(uint **)(uVar8 + 0x40)) goto LAB_10977a338;
                  if ((uint *)(*(long *)(uVar8 + 0x80) + *(long *)(uVar8 + 0x88) + -4) < puStack_b8)
                  goto LAB_10977a338;
                  uVar6 = (ushort)*puStack_b8 & 0xff00ff;
                  *(ulong *)(param_4 + 6) =
                       -(ulong)(uVar6 >> 7) & 0xfffffffffffc0000 |
                       (ulong)((uint)(ushort)((ushort)*puStack_b8 >> 8) | uVar6 << 8) << 2;
                  puVar10 = puStack_b8 + 1;
                  uVar6 = *(ushort *)((long)puStack_b8 + 2) & 0xff00ff;
                  *(ulong *)(param_4 + 8) =
                       -(ulong)(uVar6 >> 7) & 0xfffffffffffc0000 |
                       (ulong)((uint)(*(ushort *)((long)puStack_b8 + 2) >> 8) | uVar6 << 8) << 2;
                  if ((unaff_w23 & 0xfffffffe) == 0x1e) {
                    if (puVar10 < *(uint **)(uVar8 + 0x40)) goto LAB_10977a338;
                    if ((uint *)(*(long *)(uVar8 + 0x80) + *(long *)(uVar8 + 0x88) + -4) < puVar10)
                    goto LAB_10977a338;
                    uVar6 = (ushort)puStack_b8[1] & 0xff00ff;
                    *(ulong *)(param_4 + 10) =
                         -(ulong)(uVar6 >> 7) & 0xffffffff00000000 |
                         (ulong)((uint)(ushort)((ushort)puStack_b8[1] >> 8) | uVar6 << 8) << 0x10;
                    puVar10 = puStack_b8 + 2;
                    uVar6 = *(ushort *)((long)puStack_b8 + 6) & 0xff00ff;
                    *(ulong *)(param_4 + 0xc) =
                         -(ulong)(uVar6 >> 7) & 0xffffffff00000000 |
                         (ulong)((uint)(*(ushort *)((long)puStack_b8 + 6) >> 8) | uVar6 << 8) <<
                         0x10;
                  }
                  else {
                    param_4[10] = 0;
                    param_4[0xb] = 0;
                    param_4[0xc] = 0;
                    param_4[0xd] = 0;
                  }
                  if ((unaff_w23 | 2) == 0x1f) {
                    if (puVar10 < *(uint **)(uVar8 + 0x40)) goto LAB_10977a338;
                    if ((uint *)(*(long *)(uVar8 + 0x80) + *(long *)(uVar8 + 0x88) + -4) < puVar10)
                    goto LAB_10977a338;
                    uVar6 = (*puVar10 & 0xff00ff00) >> 8 | (*puVar10 & 0xff00ff) << 8;
                    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
                    if (unaff_w23 == 0x1d) {
                      FUN_10977d7b0(param_1,uVar8,uVar6,2,&sStack_b0);
                      *(long *)(param_4 + 8) = (long)iStack_ac * 4 + *(long *)(param_4 + 8);
                      *(long *)(param_4 + 6) =
                           (long)CONCAT22(sStack_ae,sStack_b0) * 4 + *(long *)(param_4 + 6);
                      unaff_w23 = *param_4;
                    }
                    if (unaff_w23 == 0x1f) {
                      FUN_10977d7b0(param_1,uVar8,uVar6,4,&sStack_b0);
                      *(long *)(param_4 + 8) = (long)iStack_ac * 4 + *(long *)(param_4 + 8);
                      *(long *)(param_4 + 6) =
                           (long)CONCAT22(sStack_ae,sStack_b0) * 4 + *(long *)(param_4 + 6);
                      *(long *)(param_4 + 0xc) =
                           (long)iStack_a4 * 0x10000 + *(long *)(param_4 + 0xc);
                      *(long *)(param_4 + 10) =
                           CONCAT44((int)(short)((uint)iStack_a8 >> 0x10),iStack_a8 << 0x10) +
                           *(long *)(param_4 + 10);
                    }
                  }
                  uVar6 = 0x1c;
                  goto LAB_10977a4b0;
                }
                if (unaff_w23 != 0x20) goto LAB_10977a338;
                *(byte **)(param_4 + 2) = pbStack_c0;
                *(undefined1 *)(param_4 + 4) = 0;
                if (puStack_b8 < *(uint **)(uVar8 + 0x40)) goto LAB_10977a338;
                if ((uint *)(*(long *)(uVar8 + 0x80) + *(long *)(uVar8 + 0x88) + -1) < puStack_b8)
                goto LAB_10977a338;
                puVar10 = (uint *)((long)puStack_b8 + 1);
                uVar6 = *puStack_b8;
                puStack_b8 = puVar10;
                if (0x1b < (byte)uVar6) goto LAB_10977a338;
                param_4[6] = (uint)(byte)uVar6;
                uVar4 = uVar8;
                FUN_10977d864(uVar8,puVar5,&puStack_b8,&pbStack_c0);
                if ((int)uVar4 == 0) goto LAB_10977a33c;
                *(byte **)(param_4 + 8) = pbStack_c0;
                *(undefined1 *)(param_4 + 10) = 0;
                goto LAB_10977a3b8;
              }
              uVar12 = 1;
            }
            uVar4 = uVar8;
            func_0x00010977d8e0(uVar8,pbStack_c0,param_4 + 2,uVar12);
            if ((int)uVar4 == 0) goto LAB_10977a33c;
            if (puStack_b8 < *(uint **)(uVar8 + 0x40)) goto LAB_10977a338;
            if ((uint *)(*(long *)(uVar8 + 0x80) + *(long *)(uVar8 + 0x88) + -0xc) < puStack_b8)
            goto LAB_10977a338;
            uVar6 = (ushort)*puStack_b8 & 0xff00ff;
            *(ulong *)(param_4 + 10) =
                 -(ulong)(uVar6 >> 7) & 0xffffffff00000000 |
                 (ulong)((uint)(ushort)((ushort)*puStack_b8 >> 8) | uVar6 << 8) << 0x10;
            uVar6 = *(ushort *)((long)puStack_b8 + 2) & 0xff00ff;
            *(ulong *)(param_4 + 0xc) =
                 -(ulong)(uVar6 >> 7) & 0xffffffff00000000 |
                 (ulong)((uint)(*(ushort *)((long)puStack_b8 + 2) >> 8) | uVar6 << 8) << 0x10;
            bVar1 = (byte)puStack_b8[1];
            uVar4 = 0x7fffffff;
            if (-1 < (short)((ushort)bVar1 << 8)) {
              uVar4 = -(ulong)(bVar1 >> 7) & 0xffffffff00000000 |
                      (ulong)CONCAT11(bVar1,*(undefined1 *)((long)puStack_b8 + 5)) << 0x10;
            }
            *(ulong *)(param_4 + 0xe) = uVar4;
            uVar6 = *(ushort *)((long)puStack_b8 + 6) & 0xff00ff;
            *(ulong *)(param_4 + 0x10) =
                 -(ulong)(uVar6 >> 7) & 0xffffffff00000000 |
                 (ulong)((uint)(*(ushort *)((long)puStack_b8 + 6) >> 8) | uVar6 << 8) << 0x10;
            uVar6 = (ushort)puStack_b8[2] & 0xff00ff;
            *(ulong *)(param_4 + 0x12) =
                 -(ulong)(uVar6 >> 7) & 0xffffffff00000000 |
                 (ulong)((uint)(ushort)((ushort)puStack_b8[2] >> 8) | uVar6 << 8) << 0x10;
            bVar1 = *(byte *)((long)puStack_b8 + 10);
            uVar4 = 0x7fffffff;
            if (-1 < (short)((ushort)bVar1 << 8)) {
              uVar4 = -(ulong)(bVar1 >> 7) & 0xffffffff00000000 |
                      (ulong)CONCAT11(bVar1,*(undefined1 *)((long)puStack_b8 + 0xb)) << 0x10;
            }
            *(ulong *)(param_4 + 0x14) = uVar4;
            if (unaff_w23 != 6) {
              if (puStack_b8 + 3 < *(uint **)(uVar8 + 0x40)) goto LAB_10977a338;
              if ((uint *)(*(long *)(uVar8 + 0x80) + *(long *)(uVar8 + 0x88) + -4) < puStack_b8 + 3)
              goto LAB_10977a338;
              uVar6 = (puStack_b8[3] & 0xff00ff00) >> 8 | (puStack_b8[3] & 0xff00ff) << 8;
              FUN_10977d7b0(param_1,uVar8,uVar6 >> 0x10 | uVar6 << 0x10,6,&sStack_b0);
              *(long *)(param_4 + 0xc) = (long)iStack_ac * 0x10000 + *(long *)(param_4 + 0xc);
              *(long *)(param_4 + 10) =
                   CONCAT44((int)sStack_ae,CONCAT22(sStack_ae,sStack_b0) << 0x10) +
                   *(long *)(param_4 + 10);
              *(long *)(param_4 + 0x10) = (long)iStack_a4 * 0x10000 + *(long *)(param_4 + 0x10);
              *(long *)(param_4 + 0xe) =
                   CONCAT44((int)(short)((uint)iStack_a8 >> 0x10),iStack_a8 << 0x10) +
                   *(long *)(param_4 + 0xe);
              *(long *)(param_4 + 0x14) =
                   (long)(int)((ulong)uStack_a0 >> 0x20) * 0x10000 + *(long *)(param_4 + 0x14);
              *(long *)(param_4 + 0x12) =
                   CONCAT44((int)(short)((ulong)uStack_a0 >> 0x10),(int)uStack_a0 << 0x10) +
                   *(long *)(param_4 + 0x12);
            }
            uVar6 = 6;
            goto LAB_10977a4b0;
          }
          uVar12 = 1;
        }
        uVar4 = uVar8;
        func_0x00010977d8e0(uVar8,pbStack_c0,param_4 + 2,uVar12);
        if ((int)uVar4 == 0) goto LAB_10977a33c;
        if (puStack_b8 < *(uint **)(uVar8 + 0x40)) goto LAB_10977a338;
        if ((uint *)(*(long *)(uVar8 + 0x80) + *(long *)(uVar8 + 0x88) + -0xc) < puStack_b8)
        goto LAB_10977a338;
        uVar6 = (ushort)*puStack_b8 & 0xff00ff;
        *(ulong *)(param_4 + 10) =
             -(ulong)(uVar6 >> 7) & 0xffffffff00000000 |
             (ulong)((uint)(ushort)((ushort)*puStack_b8 >> 8) | uVar6 << 8) << 0x10;
        uVar6 = *(ushort *)((long)puStack_b8 + 2) & 0xff00ff;
        *(ulong *)(param_4 + 0xc) =
             -(ulong)(uVar6 >> 7) & 0xffffffff00000000 |
             (ulong)((uint)(*(ushort *)((long)puStack_b8 + 2) >> 8) | uVar6 << 8) << 0x10;
        uVar6 = (ushort)puStack_b8[1] & 0xff00ff;
        *(ulong *)(param_4 + 0xe) =
             -(ulong)(uVar6 >> 7) & 0xffffffff00000000 |
             (ulong)((uint)(ushort)((ushort)puStack_b8[1] >> 8) | uVar6 << 8) << 0x10;
        uVar6 = *(ushort *)((long)puStack_b8 + 6) & 0xff00ff;
        *(ulong *)(param_4 + 0x10) =
             -(ulong)(uVar6 >> 7) & 0xffffffff00000000 |
             (ulong)((uint)(*(ushort *)((long)puStack_b8 + 6) >> 8) | uVar6 << 8) << 0x10;
        uVar6 = (ushort)puStack_b8[2] & 0xff00ff;
        *(ulong *)(param_4 + 0x12) =
             -(ulong)(uVar6 >> 7) & 0xffffffff00000000 |
             (ulong)((uint)(ushort)((ushort)puStack_b8[2] >> 8) | uVar6 << 8) << 0x10;
        uVar6 = *(ushort *)((long)puStack_b8 + 10) & 0xff00ff;
        *(ulong *)(param_4 + 0x14) =
             -(ulong)(uVar6 >> 7) & 0xffffffff00000000 |
             (ulong)((uint)(*(ushort *)((long)puStack_b8 + 10) >> 8) | uVar6 << 8) << 0x10;
        if (unaff_w23 != 4) {
          if (puStack_b8 + 3 < *(uint **)(uVar8 + 0x40)) goto LAB_10977a338;
          if ((uint *)(*(long *)(uVar8 + 0x80) + *(long *)(uVar8 + 0x88) + -4) < puStack_b8 + 3)
          goto LAB_10977a338;
          uVar6 = (puStack_b8[3] & 0xff00ff00) >> 8 | (puStack_b8[3] & 0xff00ff) << 8;
          FUN_10977d7b0(param_1,uVar8,uVar6 >> 0x10 | uVar6 << 0x10,6,&sStack_b0);
          *(long *)(param_4 + 0xc) = (long)iStack_ac * 0x10000 + *(long *)(param_4 + 0xc);
          *(long *)(param_4 + 10) =
               CONCAT44((int)sStack_ae,CONCAT22(sStack_ae,sStack_b0) << 0x10) +
               *(long *)(param_4 + 10);
          *(long *)(param_4 + 0x10) = (long)iStack_a4 * 0x10000 + *(long *)(param_4 + 0x10);
          *(long *)(param_4 + 0xe) =
               CONCAT44((int)(short)((uint)iStack_a8 >> 0x10),iStack_a8 << 0x10) +
               *(long *)(param_4 + 0xe);
          *(long *)(param_4 + 0x14) =
               (long)(int)((ulong)uStack_a0 >> 0x20) * 0x10000 + *(long *)(param_4 + 0x14);
          *(long *)(param_4 + 0x12) =
               CONCAT44((int)(short)((ulong)uStack_a0 >> 0x10),(int)uStack_a0 << 0x10) +
               *(long *)(param_4 + 0x12);
        }
        uVar6 = 4;
        goto LAB_10977a4b0;
      }
      if ((uint *)(lVar7 + -5) < puStack_b8) goto LAB_10977a338;
      bVar1 = *(byte *)puStack_b8;
      if (*(ulong *)(uVar8 + 0x28) < (ulong)bVar1) goto LAB_10977a338;
      uVar6 = (*(uint *)((long)puVar5 + 2) & 0xff00ff00) >> 8 |
              (*(uint *)((long)puVar5 + 2) & 0xff00ff) << 8;
      uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
      if (*(ulong *)(uVar8 + 0x28) < (ulong)(uVar6 + bVar1)) goto LAB_10977a338;
      param_4[2] = (uint)bVar1;
      param_4[3] = 0;
      *(ulong *)(param_4 + 4) = *(long *)(uVar8 + 0x30) + (ulong)(uVar6 << 2) + 4;
    }
  }
  else {
    *param_4 = 0xc;
    *(uint **)(param_4 + 2) = puVar5;
    *(undefined1 *)(param_4 + 4) = 0;
    lVar7 = *(long *)(param_1[0x14] + 0x20) + 0x20;
    lVar9 = lVar7 >> 6;
    sStack_b0 = (short)lVar9;
    sStack_ae = (short)((ulong)lVar9 >> 0x10);
    iStack_ac = (int)(lVar7 >> 0x26);
    iStack_a8 = 0;
    iStack_a4 = 0;
    lStack_98 = *(long *)(param_1[0x14] + 0x28) + 0x20 >> 6;
    uStack_a0 = 0;
    if ((*(byte *)(param_1[0x1e] + 0x30) & 1) == 0) {
      uVar12 = 0;
    }
    else {
      func_0x000109753304(param_1[0x1e],&sStack_b0);
      lVar9 = CONCAT44(iStack_ac,CONCAT22(sStack_ae,sStack_b0));
      uVar12 = CONCAT44(iStack_a4,iStack_a8);
    }
    *(long *)(param_4 + 6) = lVar9;
    *(undefined8 *)(param_4 + 8) = uVar12;
    *(undefined8 *)(param_4 + 0xc) = uStack_a0;
    *(long *)(param_4 + 0xe) = lStack_98;
    if ((*(byte *)(param_1[0x1e] + 0x30) >> 1 & 1) == 0) {
      param_4[10] = 0;
      param_4[0xb] = 0;
      param_4[0x10] = 0;
      param_4[0x11] = 0;
    }
    else {
      *(long *)(param_4 + 10) = *(long *)(param_1[0x1e] + 0x20) << 10;
      *(long *)(param_4 + 0x10) = *(long *)(param_1[0x1e] + 0x28) << 10;
    }
  }
LAB_10977a3b8:
  uVar4 = 1;
LAB_10977a33c:
  do {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return uVar4;
    }
    ___stack_chk_fail();
LAB_10977adac:
    *(byte **)(param_4 + 2) = pbStack_c0;
    *(undefined1 *)(param_4 + 4) = 0;
    param_3 = param_4;
    param_2 = param_1;
    if ((*(uint **)(uVar8 + 0x40) <= puStack_b8) &&
       (puStack_b8 <= (uint *)(*(long *)(uVar8 + 0x80) + *(long *)(uVar8 + 0x88) + -2))) {
      puVar10 = (uint *)((long)puStack_b8 + 2);
      uVar6 = (ushort)*puStack_b8 & 0xff00ff;
      *(ulong *)(param_4 + 6) =
           -(ulong)(uVar6 >> 7) & 0xfffffffffffc0000 |
           (ulong)((uint)(ushort)((ushort)*puStack_b8 >> 8) | uVar6 << 8) << 2;
      if ((unaff_w23 & 0xfffffffe) == 0x1a) {
        if ((puVar10 < *(uint **)(uVar8 + 0x40)) ||
           ((uint *)(*(long *)(uVar8 + 0x80) + *(long *)(uVar8 + 0x88) + -4) < puVar10))
        goto LAB_10977a338;
        uVar6 = *(ushort *)((long)puStack_b8 + 2) & 0xff00ff;
        *(ulong *)(param_4 + 8) =
             -(ulong)(uVar6 >> 7) & 0xffffffff00000000 |
             (ulong)((uint)(*(ushort *)((long)puStack_b8 + 2) >> 8) | uVar6 << 8) << 0x10;
        puVar10 = (uint *)((long)puStack_b8 + 6);
        uVar6 = (ushort)puStack_b8[1] & 0xff00ff;
        *(ulong *)(param_4 + 10) =
             -(ulong)(uVar6 >> 7) & 0xffffffff00000000 |
             (ulong)((uint)(ushort)((ushort)puStack_b8[1] >> 8) | uVar6 << 8) << 0x10;
      }
      else {
        param_4[8] = 0;
        param_4[9] = 0;
        param_4[10] = 0;
        param_4[0xb] = 0;
      }
      if ((unaff_w23 | 2) != 0x1b) goto LAB_10977b004;
      if ((*(uint **)(uVar8 + 0x40) <= puVar10) &&
         (puVar10 <= (uint *)(*(long *)(uVar8 + 0x80) + *(long *)(uVar8 + 0x88) + -4))) break;
    }
LAB_10977a338:
    uVar4 = 0;
    param_4 = param_3;
    param_1 = param_2;
  } while( true );
  iVar16 = 3;
  if (unaff_w23 != 0x1b) {
    iVar16 = 0;
  }
  if (unaff_w23 == 0x19) {
    iVar16 = 1;
  }
  if (iVar16 != 0) {
    uVar6 = (*puVar10 & 0xff00ff00) >> 8 | (*puVar10 & 0xff00ff) << 8;
    FUN_10977d7b0(param_1,uVar8,uVar6 >> 0x10 | uVar6 << 0x10,iVar16,&sStack_b0);
    *(long *)(param_4 + 6) = *(long *)(param_4 + 6) + (long)CONCAT22(sStack_ae,sStack_b0) * 4;
    if (unaff_w23 == 0x1b) {
      *(long *)(param_4 + 10) = (long)iStack_a8 * 0x10000 + *(long *)(param_4 + 10);
      *(long *)(param_4 + 8) =
           CONCAT44((int)(short)((uint)iStack_ac >> 0x10),iStack_ac << 0x10) +
           *(long *)(param_4 + 8);
    }
  }
LAB_10977b004:
  uVar6 = 0x18;
LAB_10977a4b0:
  *param_4 = uVar6;
  goto LAB_10977a3b8;
}



/* Entry: 10977a254; end: 10977b16b;  */

void FUN_10977a254(long param_1,uint *param_2,char param_3,uint *param_4)

{
  ushort *puVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint *unaff_x19;
  long unaff_x20;
  long lVar10;
  uint unaff_w23;
  int iVar12;
  undefined1 auVar11 [16];
  byte *pbStack_80;
  uint *puStack_78;
  short sStack_70;
  short sStack_6e;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(param_1 + 0x598);
  if (((lVar10 == 0) || (*(long *)(lVar10 + 0x20) == 0)) || (*(long *)(lVar10 + 0x80) == 0))
  goto LAB_10977a33c;
  unaff_x19 = param_4;
  unaff_x20 = param_1;
  if (param_3 != '\0') {
    *param_4 = 0xc;
    *(uint **)(param_4 + 2) = param_2;
    *(undefined1 *)(param_4 + 4) = 0;
    lVar7 = *(long *)(*(long *)(param_1 + 0xa0) + 0x20) + 0x20;
    lVar5 = lVar7 >> 6;
    sStack_70 = (short)lVar5;
    sStack_6e = (short)((ulong)lVar5 >> 0x10);
    iStack_6c = (int)(lVar7 >> 0x26);
    iStack_68 = 0;
    iStack_64 = 0;
    lStack_58 = *(long *)(*(long *)(param_1 + 0xa0) + 0x28) + 0x20 >> 6;
    uStack_60 = 0;
    if ((*(byte *)(*(long *)(param_1 + 0xf0) + 0x30) & 1) == 0) {
      uVar9 = 0;
    }
    else {
      func_0x000109753304(*(long *)(param_1 + 0xf0),&sStack_70);
      lVar5 = CONCAT44(iStack_6c,CONCAT22(sStack_6e,sStack_70));
      uVar9 = CONCAT44(iStack_64,iStack_68);
    }
    *(long *)(param_4 + 6) = lVar5;
    *(undefined8 *)(param_4 + 8) = uVar9;
    *(undefined8 *)(param_4 + 0xc) = uStack_60;
    *(long *)(param_4 + 0xe) = lStack_58;
    if ((*(byte *)(*(long *)(param_1 + 0xf0) + 0x30) >> 1 & 1) == 0) {
      param_4[10] = 0;
      param_4[0xb] = 0;
      param_4[0x10] = 0;
      param_4[0x11] = 0;
    }
    else {
      *(long *)(param_4 + 10) = *(long *)(*(long *)(param_1 + 0xf0) + 0x20) << 10;
      *(long *)(param_4 + 0x10) = *(long *)(*(long *)(param_1 + 0xf0) + 0x28) << 10;
    }
    goto LAB_10977a33c;
  }
  pbStack_80 = (byte *)0x0;
  sStack_70 = 0;
  sStack_6e = 0;
  iStack_6c = 0;
  iStack_68 = 0;
  iStack_64 = 0;
  uStack_60 = 0;
  if ((param_2 == (uint *)0x0) || (param_2 < *(uint **)(lVar10 + 0x40))) goto LAB_10977a33c;
  lVar7 = *(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x88);
  if ((uint *)(lVar7 + -2) < param_2) goto LAB_10977a33c;
  puStack_78 = (uint *)((long)param_2 + 1);
  bVar2 = (byte)*param_2;
  *param_4 = (uint)bVar2;
  if (0x20 < bVar2) goto LAB_10977a33c;
  if (bVar2 - 2 < 2) {
    if (puStack_78 <= (uint *)(lVar7 + -4)) {
      *(ushort *)(param_4 + 2) =
           *(ushort *)((long)param_2 + 1) >> 8 | *(ushort *)((long)param_2 + 1) << 8;
      *(ushort *)((long)param_4 + 10) =
           *(ushort *)((long)param_2 + 3) >> 8 | *(ushort *)((long)param_2 + 3) << 8;
      if (bVar2 == 3) {
        if (((long)param_2 + 5U < *(ulong *)(lVar10 + 0x40)) ||
           ((*(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x88)) - 4U < (long)param_2 + 5U))
        goto LAB_10977a33c;
        uVar4 = (*(uint *)((long)param_2 + 5) & 0xff00ff00) >> 8 |
                (*(uint *)((long)param_2 + 5) & 0xff00ff) << 8;
        FUN_10977d7b0(param_1,lVar10,uVar4 >> 0x10 | uVar4 << 0x10,1,&sStack_70);
        *(short *)((long)param_4 + 10) = *(short *)((long)param_4 + 10) + sStack_70;
      }
      uVar4 = 2;
      goto LAB_10977a4b0;
    }
    goto LAB_10977a33c;
  }
  if (bVar2 == 0xb) {
    if (puStack_78 <= (uint *)(lVar7 + -2)) {
      param_4[2] = (uint)(*(ushort *)((long)param_2 + 1) >> 8) |
                   (*(ushort *)((long)param_2 + 1) & 0xff00ff) << 8;
    }
    goto LAB_10977a33c;
  }
  if (bVar2 == 1) {
    if (puStack_78 <= (uint *)(lVar7 + -5)) {
      bVar2 = *(byte *)puStack_78;
      if ((ulong)bVar2 <= *(ulong *)(lVar10 + 0x28)) {
        uVar4 = (*(uint *)((long)param_2 + 2) & 0xff00ff00) >> 8 |
                (*(uint *)((long)param_2 + 2) & 0xff00ff) << 8;
        uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
        if ((ulong)(uVar4 + bVar2) <= *(ulong *)(lVar10 + 0x28)) {
          param_4[2] = (uint)bVar2;
          param_4[3] = 0;
          *(ulong *)(param_4 + 4) = *(long *)(lVar10 + 0x30) + (ulong)(uVar4 << 2) + 4;
        }
      }
    }
    goto LAB_10977a33c;
  }
  lVar7 = lVar10;
  FUN_10977d864(lVar10,param_2,&puStack_78,&pbStack_80);
  if ((int)lVar7 == 0) goto LAB_10977a33c;
  unaff_w23 = *param_4;
  if (unaff_w23 == 4) {
    uVar9 = 0;
  }
  else {
    if (unaff_w23 != 5) {
      if (unaff_w23 == 6) {
        uVar9 = 0;
      }
      else {
        if (unaff_w23 != 7) {
          if (unaff_w23 == 8) {
            uVar9 = 0;
LAB_10977a6d4:
            lVar7 = lVar10;
            func_0x00010977d8e0(lVar10,pbStack_80,param_4 + 2,uVar9);
            if ((((int)lVar7 != 0) && (*(uint **)(lVar10 + 0x40) <= puStack_78)) &&
               (puStack_78 <= (uint *)(*(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x88) + -8))) {
              uVar4 = (ushort)*puStack_78 & 0xff00ff;
              *(ulong *)(param_4 + 10) =
                   -(ulong)(uVar4 >> 7) & 0xffffffff00000000 |
                   (ulong)((uint)(ushort)((ushort)*puStack_78 >> 8) | uVar4 << 8) << 0x10;
              uVar4 = *(ushort *)((long)puStack_78 + 2) & 0xff00ff;
              *(ulong *)(param_4 + 0xc) =
                   -(ulong)(uVar4 >> 7) & 0xffffffff00000000 |
                   (ulong)((uint)(*(ushort *)((long)puStack_78 + 2) >> 8) | uVar4 << 8) << 0x10;
              uVar4 = (ushort)puStack_78[1] & 0xff00ff;
              *(ulong *)(param_4 + 0xe) =
                   -(ulong)(uVar4 >> 7) & 0xfffffffffffc0000 |
                   (ulong)((uint)(ushort)((ushort)puStack_78[1] >> 8) | uVar4 << 8) << 2;
              uVar4 = *(ushort *)((long)puStack_78 + 6) & 0xff00ff;
              *(ulong *)(param_4 + 0x10) =
                   -(ulong)(uVar4 >> 7) & 0xfffffffffffc0000 |
                   (ulong)((uint)(*(ushort *)((long)puStack_78 + 6) >> 8) | uVar4 << 8) << 2;
              if (unaff_w23 != 8) {
                if ((puStack_78 + 2 < *(uint **)(lVar10 + 0x40)) ||
                   ((uint *)(*(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x88) + -4) <
                    puStack_78 + 2)) goto LAB_10977a33c;
                uVar4 = (puStack_78[2] & 0xff00ff00) >> 8 | (puStack_78[2] & 0xff00ff) << 8;
                FUN_10977d7b0(param_1,lVar10,uVar4 >> 0x10 | uVar4 << 0x10,4,&sStack_70);
                *(long *)(param_4 + 0xc) = (long)iStack_6c * 0x10000 + *(long *)(param_4 + 0xc);
                *(long *)(param_4 + 10) =
                     CONCAT44((int)sStack_6e,CONCAT22(sStack_6e,sStack_70) << 0x10) +
                     *(long *)(param_4 + 10);
                *(long *)(param_4 + 0x10) = (long)iStack_64 * 4 + *(long *)(param_4 + 0x10);
                *(long *)(param_4 + 0xe) = (long)iStack_68 * 4 + *(long *)(param_4 + 0xe);
              }
              uVar4 = 8;
              goto LAB_10977a4b0;
            }
          }
          else {
            if ((int)unaff_w23 < 0xe) {
              if (unaff_w23 - 0xc < 2) {
                *(byte **)(param_4 + 2) = pbStack_80;
                *(undefined1 *)(param_4 + 4) = 0;
                lVar7 = lVar10;
                FUN_10977d864(lVar10,param_2,&puStack_78,&pbStack_80);
                if ((((int)lVar7 != 0) && (*(byte **)(lVar10 + 0x40) <= pbStack_80)) &&
                   (pbStack_80 <=
                    (byte *)(*(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x88) + -0x18))) {
                  *(ulong *)(param_4 + 6) =
                       (long)(int)((uint)*pbStack_80 << 0x18) | (ulong)pbStack_80[1] << 0x10 |
                       (ulong)pbStack_80[2] << 8 | (ulong)pbStack_80[3];
                  *(ulong *)(param_4 + 0xc) =
                       (long)(int)((uint)pbStack_80[4] << 0x18) | (ulong)pbStack_80[5] << 0x10 |
                       (ulong)pbStack_80[6] << 8 | (ulong)pbStack_80[7];
                  *(ulong *)(param_4 + 8) =
                       (long)(int)((uint)pbStack_80[8] << 0x18) | (ulong)pbStack_80[9] << 0x10 |
                       (ulong)pbStack_80[10] << 8 | (ulong)pbStack_80[0xb];
                  *(ulong *)(param_4 + 0xe) =
                       (long)(int)((uint)pbStack_80[0xc] << 0x18) | (ulong)pbStack_80[0xd] << 0x10 |
                       (ulong)pbStack_80[0xe] << 8 | (ulong)pbStack_80[0xf];
                  *(ulong *)(param_4 + 10) =
                       (long)(int)((uint)pbStack_80[0x10] << 0x18) | (ulong)pbStack_80[0x11] << 0x10
                       | (ulong)pbStack_80[0x12] << 8 | (ulong)pbStack_80[0x13];
                  *(ulong *)(param_4 + 0x10) =
                       (long)(int)((uint)pbStack_80[0x14] << 0x18) | (ulong)pbStack_80[0x15] << 0x10
                       | (ulong)pbStack_80[0x16] << 8 | (ulong)pbStack_80[0x17];
                  if (*param_4 == 0xd) {
                    if ((pbStack_80 + 0x18 < *(byte **)(lVar10 + 0x40)) ||
                       ((byte *)(*(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x88) + -4) <
                        pbStack_80 + 0x18)) goto LAB_10977a33c;
                    uVar4 = (*(uint *)(pbStack_80 + 0x18) & 0xff00ff00) >> 8 |
                            (*(uint *)(pbStack_80 + 0x18) & 0xff00ff) << 8;
                    FUN_10977d7b0(param_1,lVar10,uVar4 >> 0x10 | uVar4 << 0x10,6,&sStack_70);
                    auVar3._2_2_ = sStack_6e;
                    auVar3._0_2_ = sStack_70;
                    auVar3._4_4_ = iStack_6c;
                    auVar3._8_4_ = iStack_68;
                    auVar3._12_4_ = iStack_64;
                    auVar11._2_2_ = sStack_6e;
                    auVar11._0_2_ = sStack_70;
                    auVar11._4_4_ = iStack_6c;
                    auVar11._8_4_ = iStack_68;
                    auVar11._12_4_ = iStack_64;
                    auVar11 = NEON_ext(auVar11,auVar3,8,1);
                    iVar12 = *(int *)((ulong)&sStack_70 | 0xc);
                    *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + (long)auVar11._0_4_;
                    *(long *)(param_4 + 6) =
                         *(long *)(param_4 + 6) + (long)CONCAT22(sStack_6e,sStack_70);
                    *(long *)(param_4 + 0xe) = *(long *)(param_4 + 0xe) + (long)iVar12;
                    *(long *)(param_4 + 0xc) = *(long *)(param_4 + 0xc) + (long)iStack_6c;
                    *(long *)(param_4 + 10) = *(long *)(param_4 + 10) + (long)(int)uStack_60;
                    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + (long)uStack_60._4_4_;
                  }
                  uVar4 = 0xc;
                  goto LAB_10977a4b0;
                }
                goto LAB_10977a33c;
              }
              if (unaff_w23 == 9) {
                uVar9 = 1;
                goto LAB_10977a6d4;
              }
              if (unaff_w23 == 10) {
                if ((*(uint **)(lVar10 + 0x40) <= puStack_78) &&
                   (puStack_78 <= (uint *)(*(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x88) + -2)
                   )) {
                  *(byte **)(param_4 + 2) = pbStack_80;
                  *(undefined1 *)(param_4 + 4) = 0;
                  param_4[6] = (uint)(ushort)((ushort)*puStack_78 >> 8) |
                               ((ushort)*puStack_78 & 0xff00ff) << 8;
                }
                goto LAB_10977a33c;
              }
            }
            else if (unaff_w23 - 0xe < 2) {
              *(byte **)(param_4 + 2) = pbStack_80;
              *(undefined1 *)(param_4 + 4) = 0;
              if ((*(uint **)(lVar10 + 0x40) <= puStack_78) &&
                 (puStack_78 <= (uint *)(*(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x88) + -4)))
              {
                uVar4 = (ushort)*puStack_78 & 0xff00ff;
                *(ulong *)(param_4 + 6) =
                     -(ulong)(uVar4 >> 7) & 0xffffffff00000000 |
                     (ulong)((uint)(ushort)((ushort)*puStack_78 >> 8) | uVar4 << 8) << 0x10;
                uVar4 = *(ushort *)((long)puStack_78 + 2) & 0xff00ff;
                *(ulong *)(param_4 + 8) =
                     -(ulong)(uVar4 >> 7) & 0xffffffff00000000 |
                     (ulong)((uint)(*(ushort *)((long)puStack_78 + 2) >> 8) | uVar4 << 8) << 0x10;
                if (unaff_w23 == 0xf) {
                  if ((puStack_78 + 1 < *(uint **)(lVar10 + 0x40)) ||
                     ((uint *)(*(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x88) + -4) <
                      puStack_78 + 1)) goto LAB_10977a33c;
                  uVar4 = (puStack_78[1] & 0xff00ff00) >> 8 | (puStack_78[1] & 0xff00ff) << 8;
                  FUN_10977d7b0(param_1,lVar10,uVar4 >> 0x10 | uVar4 << 0x10,2,&sStack_70);
                  *(long *)(param_4 + 8) = (long)iStack_6c * 0x10000 + *(long *)(param_4 + 8);
                  *(long *)(param_4 + 6) =
                       CONCAT44((int)sStack_6e,CONCAT22(sStack_6e,sStack_70) << 0x10) +
                       *(long *)(param_4 + 6);
                }
                uVar4 = 0xe;
                goto LAB_10977a4b0;
              }
              goto LAB_10977a33c;
            }
            if ((unaff_w23 & 0xfffffff8) == 0x10) {
              *(byte **)(param_4 + 2) = pbStack_80;
              *(undefined1 *)(param_4 + 4) = 0;
              if ((*(uint **)(lVar10 + 0x40) <= puStack_78) &&
                 (puStack_78 <= (uint *)(*(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x88) + -2)))
              {
                puVar6 = (uint *)((long)puStack_78 + 2);
                uVar4 = (ushort)*puStack_78 & 0xff00ff;
                uVar8 = -(ulong)(uVar4 >> 7) & 0xfffffffffffc0000 |
                        (ulong)((uint)(ushort)((ushort)*puStack_78 >> 8) | uVar4 << 8) << 2;
                *(ulong *)(param_4 + 6) = uVar8;
                if ((unaff_w23 & 0x14) == 0x10) {
                  if ((puVar6 < *(uint **)(lVar10 + 0x40)) ||
                     ((uint *)(*(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x88) + -2) < puVar6))
                  goto LAB_10977a33c;
                  puVar6 = puStack_78 + 1;
                  uVar4 = *(ushort *)((long)puStack_78 + 2) & 0xff00ff;
                  uVar8 = -(ulong)(uVar4 >> 7) & 0xfffffffffffc0000 |
                          (ulong)((uint)(*(ushort *)((long)puStack_78 + 2) >> 8) | uVar4 << 8) << 2;
                }
                *(ulong *)(param_4 + 8) = uVar8;
                if ((unaff_w23 < 0x18) && ((1 << (ulong)(unaff_w23 & 0x1f) & 0xcc0000U) != 0)) {
                  if ((puVar6 < *(uint **)(lVar10 + 0x40)) ||
                     ((uint *)(*(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x88) + -4) < puVar6))
                  goto LAB_10977a33c;
                  uVar4 = (ushort)*puVar6 & 0xff00ff;
                  *(ulong *)(param_4 + 10) =
                       -(ulong)(uVar4 >> 7) & 0xffffffff00000000 |
                       (ulong)((uint)(ushort)((ushort)*puVar6 >> 8) | uVar4 << 8) << 0x10;
                  puVar1 = (ushort *)((long)puVar6 + 2);
                  puVar6 = puVar6 + 1;
                  uVar4 = *puVar1 & 0xff00ff;
                  *(ulong *)(param_4 + 0xc) =
                       -(ulong)(uVar4 >> 7) & 0xffffffff00000000 |
                       (ulong)((uint)(*puVar1 >> 8) | uVar4 << 8) << 0x10;
                }
                else {
                  param_4[10] = 0;
                  param_4[0xb] = 0;
                  param_4[0xc] = 0;
                  param_4[0xd] = 0;
                }
                if ((unaff_w23 < 0x18) && ((1 << (ulong)(unaff_w23 & 0x1f) & 0xaa0000U) != 0)) {
                  if ((puVar6 < *(uint **)(lVar10 + 0x40)) ||
                     ((uint *)(*(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x88) + -4) < puVar6))
                  goto LAB_10977a33c;
                  puStack_78 = puVar6 + 1;
                  uVar4 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
                  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
                  if (unaff_w23 == 0x11) {
                    FUN_10977d7b0(param_1,lVar10,uVar4,2,&sStack_70);
                    *(long *)(param_4 + 8) = (long)iStack_6c * 4 + *(long *)(param_4 + 8);
                    *(long *)(param_4 + 6) =
                         (long)CONCAT22(sStack_6e,sStack_70) * 4 + *(long *)(param_4 + 6);
                    unaff_w23 = *param_4;
                  }
                  if (unaff_w23 == 0x13) {
                    FUN_10977d7b0(param_1,lVar10,uVar4,4,&sStack_70);
                    *(long *)(param_4 + 8) = (long)iStack_6c * 4 + *(long *)(param_4 + 8);
                    *(long *)(param_4 + 6) =
                         (long)CONCAT22(sStack_6e,sStack_70) * 4 + *(long *)(param_4 + 6);
                    *(long *)(param_4 + 0xc) = (long)iStack_64 * 0x10000 + *(long *)(param_4 + 0xc);
                    *(long *)(param_4 + 10) =
                         CONCAT44((int)(short)((uint)iStack_68 >> 0x10),iStack_68 << 0x10) +
                         *(long *)(param_4 + 10);
                    unaff_w23 = *param_4;
                  }
                  if (unaff_w23 == 0x15) {
                    FUN_10977d7b0(param_1,lVar10,uVar4,1,&sStack_70);
                    lVar7 = (long)CONCAT22(sStack_6e,sStack_70) * 4;
                    *(long *)(param_4 + 8) = lVar7 + *(long *)(param_4 + 8);
                    *(long *)(param_4 + 6) = lVar7 + *(long *)(param_4 + 6);
                    unaff_w23 = *param_4;
                  }
                  if (unaff_w23 == 0x17) {
                    FUN_10977d7b0(param_1,lVar10,uVar4,3,&sStack_70);
                    lVar7 = (long)CONCAT22(sStack_6e,sStack_70) * 4;
                    *(long *)(param_4 + 8) = lVar7 + *(long *)(param_4 + 8);
                    *(long *)(param_4 + 6) = lVar7 + *(long *)(param_4 + 6);
                    *(long *)(param_4 + 0xc) = (long)iStack_68 * 0x10000 + *(long *)(param_4 + 0xc);
                    *(long *)(param_4 + 10) =
                         CONCAT44((int)(short)((uint)iStack_6c >> 0x10),iStack_6c << 0x10) +
                         *(long *)(param_4 + 10);
                  }
                }
                uVar4 = 0x10;
                goto LAB_10977a4b0;
              }
            }
            else {
              if (unaff_w23 - 0x18 < 4) goto LAB_10977adac;
              if (unaff_w23 - 0x1c < 4) {
                *(byte **)(param_4 + 2) = pbStack_80;
                *(undefined1 *)(param_4 + 4) = 0;
                if ((*(uint **)(lVar10 + 0x40) <= puStack_78) &&
                   (puStack_78 <= (uint *)(*(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x88) + -4)
                   )) {
                  uVar4 = (ushort)*puStack_78 & 0xff00ff;
                  *(ulong *)(param_4 + 6) =
                       -(ulong)(uVar4 >> 7) & 0xfffffffffffc0000 |
                       (ulong)((uint)(ushort)((ushort)*puStack_78 >> 8) | uVar4 << 8) << 2;
                  puVar6 = puStack_78 + 1;
                  uVar4 = *(ushort *)((long)puStack_78 + 2) & 0xff00ff;
                  *(ulong *)(param_4 + 8) =
                       -(ulong)(uVar4 >> 7) & 0xfffffffffffc0000 |
                       (ulong)((uint)(*(ushort *)((long)puStack_78 + 2) >> 8) | uVar4 << 8) << 2;
                  if ((unaff_w23 & 0xfffffffe) == 0x1e) {
                    if ((puVar6 < *(uint **)(lVar10 + 0x40)) ||
                       ((uint *)(*(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x88) + -4) < puVar6)
                       ) goto LAB_10977a33c;
                    uVar4 = (ushort)puStack_78[1] & 0xff00ff;
                    *(ulong *)(param_4 + 10) =
                         -(ulong)(uVar4 >> 7) & 0xffffffff00000000 |
                         (ulong)((uint)(ushort)((ushort)puStack_78[1] >> 8) | uVar4 << 8) << 0x10;
                    puVar6 = puStack_78 + 2;
                    uVar4 = *(ushort *)((long)puStack_78 + 6) & 0xff00ff;
                    *(ulong *)(param_4 + 0xc) =
                         -(ulong)(uVar4 >> 7) & 0xffffffff00000000 |
                         (ulong)((uint)(*(ushort *)((long)puStack_78 + 6) >> 8) | uVar4 << 8) <<
                         0x10;
                  }
                  else {
                    param_4[10] = 0;
                    param_4[0xb] = 0;
                    param_4[0xc] = 0;
                    param_4[0xd] = 0;
                  }
                  if ((unaff_w23 | 2) == 0x1f) {
                    if ((puVar6 < *(uint **)(lVar10 + 0x40)) ||
                       ((uint *)(*(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x88) + -4) < puVar6)
                       ) goto LAB_10977a33c;
                    uVar4 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
                    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
                    if (unaff_w23 == 0x1d) {
                      FUN_10977d7b0(param_1,lVar10,uVar4,2,&sStack_70);
                      *(long *)(param_4 + 8) = (long)iStack_6c * 4 + *(long *)(param_4 + 8);
                      *(long *)(param_4 + 6) =
                           (long)CONCAT22(sStack_6e,sStack_70) * 4 + *(long *)(param_4 + 6);
                      unaff_w23 = *param_4;
                    }
                    if (unaff_w23 == 0x1f) {
                      FUN_10977d7b0(param_1,lVar10,uVar4,4,&sStack_70);
                      *(long *)(param_4 + 8) = (long)iStack_6c * 4 + *(long *)(param_4 + 8);
                      *(long *)(param_4 + 6) =
                           (long)CONCAT22(sStack_6e,sStack_70) * 4 + *(long *)(param_4 + 6);
                      *(long *)(param_4 + 0xc) =
                           (long)iStack_64 * 0x10000 + *(long *)(param_4 + 0xc);
                      *(long *)(param_4 + 10) =
                           CONCAT44((int)(short)((uint)iStack_68 >> 0x10),iStack_68 << 0x10) +
                           *(long *)(param_4 + 10);
                    }
                  }
                  uVar4 = 0x1c;
                  goto LAB_10977a4b0;
                }
              }
              else if (unaff_w23 == 0x20) {
                *(byte **)(param_4 + 2) = pbStack_80;
                *(undefined1 *)(param_4 + 4) = 0;
                if ((*(uint **)(lVar10 + 0x40) <= puStack_78) &&
                   (puStack_78 <= (uint *)(*(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x88) + -1)
                   )) {
                  puVar6 = (uint *)((long)puStack_78 + 1);
                  uVar4 = *puStack_78;
                  puStack_78 = puVar6;
                  if ((byte)uVar4 < 0x1c) {
                    param_4[6] = (uint)(byte)uVar4;
                    lVar7 = lVar10;
                    FUN_10977d864(lVar10,param_2,&puStack_78,&pbStack_80);
                    if ((int)lVar7 != 0) {
                      *(byte **)(param_4 + 8) = pbStack_80;
                      *(undefined1 *)(param_4 + 10) = 0;
                    }
                  }
                }
              }
            }
          }
          goto LAB_10977a33c;
        }
        uVar9 = 1;
      }
      lVar7 = lVar10;
      func_0x00010977d8e0(lVar10,pbStack_80,param_4 + 2,uVar9);
      if ((((int)lVar7 != 0) && (*(uint **)(lVar10 + 0x40) <= puStack_78)) &&
         (puStack_78 <= (uint *)(*(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x88) + -0xc))) {
        uVar4 = (ushort)*puStack_78 & 0xff00ff;
        *(ulong *)(param_4 + 10) =
             -(ulong)(uVar4 >> 7) & 0xffffffff00000000 |
             (ulong)((uint)(ushort)((ushort)*puStack_78 >> 8) | uVar4 << 8) << 0x10;
        uVar4 = *(ushort *)((long)puStack_78 + 2) & 0xff00ff;
        *(ulong *)(param_4 + 0xc) =
             -(ulong)(uVar4 >> 7) & 0xffffffff00000000 |
             (ulong)((uint)(*(ushort *)((long)puStack_78 + 2) >> 8) | uVar4 << 8) << 0x10;
        bVar2 = (byte)puStack_78[1];
        uVar8 = 0x7fffffff;
        if (-1 < (short)((ushort)bVar2 << 8)) {
          uVar8 = -(ulong)(bVar2 >> 7) & 0xffffffff00000000 |
                  (ulong)CONCAT11(bVar2,*(undefined1 *)((long)puStack_78 + 5)) << 0x10;
        }
        *(ulong *)(param_4 + 0xe) = uVar8;
        uVar4 = *(ushort *)((long)puStack_78 + 6) & 0xff00ff;
        *(ulong *)(param_4 + 0x10) =
             -(ulong)(uVar4 >> 7) & 0xffffffff00000000 |
             (ulong)((uint)(*(ushort *)((long)puStack_78 + 6) >> 8) | uVar4 << 8) << 0x10;
        uVar4 = (ushort)puStack_78[2] & 0xff00ff;
        *(ulong *)(param_4 + 0x12) =
             -(ulong)(uVar4 >> 7) & 0xffffffff00000000 |
             (ulong)((uint)(ushort)((ushort)puStack_78[2] >> 8) | uVar4 << 8) << 0x10;
        bVar2 = *(byte *)((long)puStack_78 + 10);
        uVar8 = 0x7fffffff;
        if (-1 < (short)((ushort)bVar2 << 8)) {
          uVar8 = -(ulong)(bVar2 >> 7) & 0xffffffff00000000 |
                  (ulong)CONCAT11(bVar2,*(undefined1 *)((long)puStack_78 + 0xb)) << 0x10;
        }
        *(ulong *)(param_4 + 0x14) = uVar8;
        if (unaff_w23 != 6) {
          if ((puStack_78 + 3 < *(uint **)(lVar10 + 0x40)) ||
             ((uint *)(*(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x88) + -4) < puStack_78 + 3))
          goto LAB_10977a33c;
          uVar4 = (puStack_78[3] & 0xff00ff00) >> 8 | (puStack_78[3] & 0xff00ff) << 8;
          FUN_10977d7b0(param_1,lVar10,uVar4 >> 0x10 | uVar4 << 0x10,6,&sStack_70);
          *(long *)(param_4 + 0xc) = (long)iStack_6c * 0x10000 + *(long *)(param_4 + 0xc);
          *(long *)(param_4 + 10) =
               CONCAT44((int)sStack_6e,CONCAT22(sStack_6e,sStack_70) << 0x10) +
               *(long *)(param_4 + 10);
          *(long *)(param_4 + 0x10) = (long)iStack_64 * 0x10000 + *(long *)(param_4 + 0x10);
          *(long *)(param_4 + 0xe) =
               CONCAT44((int)(short)((uint)iStack_68 >> 0x10),iStack_68 << 0x10) +
               *(long *)(param_4 + 0xe);
          *(long *)(param_4 + 0x14) =
               (long)(int)((ulong)uStack_60 >> 0x20) * 0x10000 + *(long *)(param_4 + 0x14);
          *(long *)(param_4 + 0x12) =
               CONCAT44((int)(short)((ulong)uStack_60 >> 0x10),(int)uStack_60 << 0x10) +
               *(long *)(param_4 + 0x12);
        }
        uVar4 = 6;
        goto LAB_10977a4b0;
      }
      goto LAB_10977a33c;
    }
    uVar9 = 1;
  }
  lVar7 = lVar10;
  func_0x00010977d8e0(lVar10,pbStack_80,param_4 + 2,uVar9);
  if ((((int)lVar7 != 0) && (*(uint **)(lVar10 + 0x40) <= puStack_78)) &&
     (puStack_78 <= (uint *)(*(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x88) + -0xc))) {
    uVar4 = (ushort)*puStack_78 & 0xff00ff;
    *(ulong *)(param_4 + 10) =
         -(ulong)(uVar4 >> 7) & 0xffffffff00000000 |
         (ulong)((uint)(ushort)((ushort)*puStack_78 >> 8) | uVar4 << 8) << 0x10;
    uVar4 = *(ushort *)((long)puStack_78 + 2) & 0xff00ff;
    *(ulong *)(param_4 + 0xc) =
         -(ulong)(uVar4 >> 7) & 0xffffffff00000000 |
         (ulong)((uint)(*(ushort *)((long)puStack_78 + 2) >> 8) | uVar4 << 8) << 0x10;
    uVar4 = (ushort)puStack_78[1] & 0xff00ff;
    *(ulong *)(param_4 + 0xe) =
         -(ulong)(uVar4 >> 7) & 0xffffffff00000000 |
         (ulong)((uint)(ushort)((ushort)puStack_78[1] >> 8) | uVar4 << 8) << 0x10;
    uVar4 = *(ushort *)((long)puStack_78 + 6) & 0xff00ff;
    *(ulong *)(param_4 + 0x10) =
         -(ulong)(uVar4 >> 7) & 0xffffffff00000000 |
         (ulong)((uint)(*(ushort *)((long)puStack_78 + 6) >> 8) | uVar4 << 8) << 0x10;
    uVar4 = (ushort)puStack_78[2] & 0xff00ff;
    *(ulong *)(param_4 + 0x12) =
         -(ulong)(uVar4 >> 7) & 0xffffffff00000000 |
         (ulong)((uint)(ushort)((ushort)puStack_78[2] >> 8) | uVar4 << 8) << 0x10;
    uVar4 = *(ushort *)((long)puStack_78 + 10) & 0xff00ff;
    *(ulong *)(param_4 + 0x14) =
         -(ulong)(uVar4 >> 7) & 0xffffffff00000000 |
         (ulong)((uint)(*(ushort *)((long)puStack_78 + 10) >> 8) | uVar4 << 8) << 0x10;
    if (unaff_w23 != 4) {
      if ((puStack_78 + 3 < *(uint **)(lVar10 + 0x40)) ||
         ((uint *)(*(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x88) + -4) < puStack_78 + 3))
      goto LAB_10977a33c;
      uVar4 = (puStack_78[3] & 0xff00ff00) >> 8 | (puStack_78[3] & 0xff00ff) << 8;
      FUN_10977d7b0(param_1,lVar10,uVar4 >> 0x10 | uVar4 << 0x10,6,&sStack_70);
      *(long *)(param_4 + 0xc) = (long)iStack_6c * 0x10000 + *(long *)(param_4 + 0xc);
      *(long *)(param_4 + 10) =
           CONCAT44((int)sStack_6e,CONCAT22(sStack_6e,sStack_70) << 0x10) + *(long *)(param_4 + 10);
      *(long *)(param_4 + 0x10) = (long)iStack_64 * 0x10000 + *(long *)(param_4 + 0x10);
      *(long *)(param_4 + 0xe) =
           CONCAT44((int)(short)((uint)iStack_68 >> 0x10),iStack_68 << 0x10) +
           *(long *)(param_4 + 0xe);
      *(long *)(param_4 + 0x14) =
           (long)(int)((ulong)uStack_60 >> 0x20) * 0x10000 + *(long *)(param_4 + 0x14);
      *(long *)(param_4 + 0x12) =
           CONCAT44((int)(short)((ulong)uStack_60 >> 0x10),(int)uStack_60 << 0x10) +
           *(long *)(param_4 + 0x12);
    }
    uVar4 = 4;
    goto LAB_10977a4b0;
  }
LAB_10977a33c:
  do {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
    param_4 = unaff_x19;
    param_1 = unaff_x20;
LAB_10977adac:
    *(byte **)(param_4 + 2) = pbStack_80;
    *(undefined1 *)(param_4 + 4) = 0;
    unaff_x19 = param_4;
    unaff_x20 = param_1;
  } while ((puStack_78 < *(uint **)(lVar10 + 0x40)) ||
          ((uint *)(*(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x88) + -2) < puStack_78));
  puVar6 = (uint *)((long)puStack_78 + 2);
  uVar4 = (ushort)*puStack_78 & 0xff00ff;
  *(ulong *)(param_4 + 6) =
       -(ulong)(uVar4 >> 7) & 0xfffffffffffc0000 |
       (ulong)((uint)(ushort)((ushort)*puStack_78 >> 8) | uVar4 << 8) << 2;
  if ((unaff_w23 & 0xfffffffe) == 0x1a) goto code_r0x00010977adfc;
  param_4[8] = 0;
  param_4[9] = 0;
  param_4[10] = 0;
  param_4[0xb] = 0;
  goto LAB_10977af7c;
code_r0x00010977adfc:
  if ((*(uint **)(lVar10 + 0x40) <= puVar6) &&
     (puVar6 <= (uint *)(*(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x88) + -4))) {
    uVar4 = *(ushort *)((long)puStack_78 + 2) & 0xff00ff;
    *(ulong *)(param_4 + 8) =
         -(ulong)(uVar4 >> 7) & 0xffffffff00000000 |
         (ulong)((uint)(*(ushort *)((long)puStack_78 + 2) >> 8) | uVar4 << 8) << 0x10;
    puVar6 = (uint *)((long)puStack_78 + 6);
    uVar4 = (ushort)puStack_78[1] & 0xff00ff;
    *(ulong *)(param_4 + 10) =
         -(ulong)(uVar4 >> 7) & 0xffffffff00000000 |
         (ulong)((uint)(ushort)((ushort)puStack_78[1] >> 8) | uVar4 << 8) << 0x10;
LAB_10977af7c:
    if ((unaff_w23 | 2) == 0x1b) {
      if ((puVar6 < *(uint **)(lVar10 + 0x40)) ||
         ((uint *)(*(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x88) + -4) < puVar6))
      goto LAB_10977a33c;
      iVar12 = 3;
      if (unaff_w23 != 0x1b) {
        iVar12 = 0;
      }
      if (unaff_w23 == 0x19) {
        iVar12 = 1;
      }
      if (iVar12 != 0) {
        uVar4 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
        FUN_10977d7b0(param_1,lVar10,uVar4 >> 0x10 | uVar4 << 0x10,iVar12,&sStack_70);
        *(long *)(param_4 + 6) = *(long *)(param_4 + 6) + (long)CONCAT22(sStack_6e,sStack_70) * 4;
        if (unaff_w23 == 0x1b) {
          *(long *)(param_4 + 10) = (long)iStack_68 * 0x10000 + *(long *)(param_4 + 10);
          *(long *)(param_4 + 8) =
               CONCAT44((int)(short)((uint)iStack_6c >> 0x10),iStack_6c << 0x10) +
               *(long *)(param_4 + 8);
        }
      }
    }
    uVar4 = 0x18;
LAB_10977a4b0:
    *param_4 = uVar4;
    unaff_x19 = param_4;
    unaff_x20 = param_1;
  }
  goto LAB_10977a33c;
}



/* Entry: 10977b16c; end: 10977b77f;  */

void FUN_10977b16c(long param_1,uint param_2,long param_3,long param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  short sVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined1 auVar29 [16];
  int iStack_64;
  
  if (*(long *)(param_3 + 0xa8) == 0) {
    *(undefined8 *)(param_3 + 0xc0) = *(undefined8 *)(param_4 + 0xc0);
    uVar15 = *(uint *)(param_4 + 0x98);
    uVar16 = *(uint *)(param_4 + 0x9c);
    *(uint *)(param_3 + 0x98) = uVar15;
    *(uint *)(param_3 + 0x9c) = uVar16;
    *(undefined1 *)(param_3 + 0xb2) = 7;
    if (uVar16 >> 0x1d != 0) {
      return;
    }
    uVar17 = (uint)((ulong)uVar16 * 4);
    *(uint *)(param_3 + 0xa0) = uVar17;
    *(undefined2 *)(param_3 + 0xb0) = 0x100;
    if (uVar16 != 0) {
      uVar18 = 0;
      if (uVar17 != 0) {
        uVar18 = 0x7fffffff / uVar17;
      }
      if (uVar18 < uVar15) {
        return;
      }
    }
    lVar19 = (ulong)uVar15 * (ulong)uVar16 * 4;
    lVar14 = param_3;
    FUN_109754310(param_3,lVar19);
    if ((int)lVar14 != 0) {
      return;
    }
    _bzero(*(undefined8 *)(param_3 + 0xa8),lVar19);
  }
  else {
    iVar7 = *(int *)(param_3 + 0xc0);
    iVar9 = *(int *)(param_3 + 0xc4);
    iVar21 = *(int *)(param_3 + 0x9c) + iVar7;
    iVar8 = *(int *)(param_4 + 0xc0);
    iVar10 = *(int *)(param_4 + 0xc4);
    iVar2 = *(int *)(param_4 + 0x9c) + iVar8;
    iVar3 = iVar21;
    if (iVar21 <= iVar2) {
      iVar3 = iVar2;
    }
    iVar12 = iVar9 - *(int *)(param_3 + 0x98);
    iVar13 = iVar10 - *(int *)(param_4 + 0x98);
    iVar4 = iVar12;
    if (iVar13 <= iVar12) {
      iVar4 = iVar13;
    }
    iVar5 = iVar9;
    if (iVar9 <= iVar10) {
      iVar5 = iVar10;
    }
    iVar6 = iVar7;
    if (iVar8 <= iVar7) {
      iVar6 = iVar8;
    }
    if (((iVar8 < iVar7 || iVar21 < iVar2) || iVar9 < iVar10) || iVar13 < iVar12) {
      uVar15 = iVar3 - iVar6;
      if (uVar15 >> 0x1d != 0) {
        return;
      }
      lVar14 = *(long *)(param_1 + 0xb8);
      uVar16 = uVar15 * 4;
      FUN_1097539a8(lVar14,(ulong)uVar16,0,iVar5 - iVar4,0,&iStack_64);
      if (iStack_64 != 0) {
        return;
      }
      if (*(int *)(param_3 + 0x98) != 0) {
        uVar17 = 0;
        lVar19 = lVar14 + (int)((iVar5 - *(int *)(param_3 + 0xc4)) * uVar16) +
                 (long)((*(int *)(param_3 + 0xc0) - iVar6) * 4);
        lVar25 = *(long *)(param_3 + 0xa8);
        do {
          _memcpy(lVar19,lVar25,*(int *)(param_3 + 0x9c) << 2);
          lVar25 = lVar25 + *(int *)(param_3 + 0xa0);
          lVar19 = lVar19 + (ulong)uVar16;
          uVar17 = uVar17 + 1;
        } while (uVar17 < *(uint *)(param_3 + 0x98));
      }
      FUN_109753e5c(param_3);
      *(long *)(param_3 + 0xa8) = lVar14;
      *(int *)(param_3 + 0xc0) = iVar6;
      *(int *)(param_3 + 0xc4) = iVar5;
      *(int *)(param_3 + 0x98) = iVar5 - iVar4;
      *(uint *)(param_3 + 0x9c) = uVar15;
      *(uint *)(param_3 + 0xa0) = uVar16;
      *(uint *)(*(long *)(param_3 + 0x128) + 8) = *(uint *)(*(long *)(param_3 + 0x128) + 8) | 1;
      *(undefined4 *)(param_3 + 0x90) = 0x62697473;
    }
  }
  if (param_2 == 0xffff) {
    if (*(char *)(param_1 + 0x450) == '\0') {
      if ((*(long *)(param_1 + 0x428) == 0) ||
         ((*(ushort *)(*(long *)(param_1 + 0x428) + (ulong)*(ushort *)(param_1 + 0x440) * 2) >> 1 &
          1) == 0)) {
        uVar15 = 0;
        uVar26 = 0;
        uVar16 = 0xff;
      }
      else {
        uVar26 = 0xff000000ff;
        uVar16 = 0xff;
        uVar15 = 0xff;
      }
    }
    else {
      uVar26 = (ulong)CONCAT14(*(undefined1 *)(param_1 + 0x452),(uint)*(byte *)(param_1 + 0x451));
      uVar15 = (uint)*(byte *)(param_1 + 0x453);
      uVar16 = (uint)*(byte *)(param_1 + 0x454);
    }
  }
  else {
    pbVar1 = (byte *)(*(long *)(param_1 + 0x448) + (ulong)param_2 * 4);
    uVar26 = (ulong)CONCAT14(pbVar1[1],(uint)*pbVar1);
    uVar15 = (uint)pbVar1[2];
    uVar16 = (uint)pbVar1[3];
  }
  uVar17 = *(uint *)(param_4 + 0x98);
  if (uVar17 != 0) {
    uVar18 = 0;
    iVar21 = *(int *)(param_3 + 0xa0);
    lVar14 = *(long *)(param_3 + 0xa8) +
             (long)((*(int *)(param_3 + 0xc4) - *(int *)(param_4 + 0xc4)) * iVar21) +
             (long)((*(int *)(param_4 + 0xc0) - *(int *)(param_3 + 0xc0)) * 4);
    lVar19 = *(long *)(param_4 + 0xa8);
    uVar24 = (ulong)*(uint *)(param_4 + 0x9c);
    do {
      if ((int)uVar24 != 0) {
        uVar20 = 0;
        uVar22 = 0;
        do {
          uVar11 = *(byte *)(lVar19 + uVar22) * uVar16;
          uVar17 = uVar11 / 0xff;
          auVar27 = NEON_umull(CONCAT44(uVar17 * (int)(uVar26 >> 0x20),uVar17 * (int)uVar26) &
                               0xffff0000ffff,0x101010201010102,4);
          uVar28 = *(undefined4 *)(lVar14 + (uVar20 & 0xfffffffc));
          sVar23 = 0xff - (short)(uVar11 / 0xff);
          auVar29 = NEON_umull(CONCAT26(sVar23,CONCAT24(sVar23,CONCAT22(sVar23,sVar23))),
                               (ulong)CONCAT16((char)((uint)uVar28 >> 0x18),
                                               (uint6)CONCAT14((char)((uint)uVar28 >> 0x10),
                                                               (uint)CONCAT12((char)((uint)uVar28 >>
                                                                                    8),(ushort)(byte
                                                  )uVar28))),2);
          *(uint *)(lVar14 + (uVar20 & 0xfffffffc)) =
               CONCAT13((char)((ushort)((uint)(auVar29._12_4_ * 0x8081) >> 0x17) +
                              (short)(uVar11 / 0xff)),
                        CONCAT12((char)(ushort)((uint)(auVar29._8_4_ * 0x8081) >> 0x17) +
                                 (char)((uVar17 * uVar15 & 0xffff) / 0xff),
                                 CONCAT11((char)(ushort)((uint)(auVar29._4_4_ * 0x8081) >> 0x17) +
                                          auVar27[0xc],
                                          (char)(ushort)((uint)(auVar29._0_4_ * 0x8081) >> 0x17) +
                                          auVar27[4])));
          uVar22 = uVar22 + 1;
          uVar24 = (ulong)*(uint *)(param_4 + 0x9c);
          uVar20 = uVar20 + 4;
        } while (uVar22 < uVar24);
        iVar21 = *(int *)(param_3 + 0xa0);
        uVar17 = *(uint *)(param_4 + 0x98);
      }
      lVar19 = lVar19 + *(int *)(param_4 + 0xa0);
      lVar14 = lVar14 + iVar21;
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar17);
  }
  return;
}



/* Entry: 10977b780; end: 10977b9f3;  */

long FUN_10977b780(long param_1,uint param_2,long *param_3)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ushort *puVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  
  if (*(ushort *)(param_1 + 0x230) == 0) {
LAB_10977b944:
    lVar17 = 0;
    lVar16 = 0;
    goto LAB_10977b94c;
  }
  uVar11 = 0;
  bVar2 = false;
  lVar6 = *(long *)(param_1 + 0x248);
  puVar12 = (ushort *)(lVar6 + 4);
  lVar16 = *(long *)(param_1 + 0xb8);
  uVar13 = 0xffffffff;
  uVar7 = 0xffffffff;
  uVar8 = 0xffffffff;
  uVar14 = 0xffffffff;
  do {
    uVar10 = (uint)uVar11;
    uVar4 = uVar7;
    uVar9 = uVar8;
    uVar15 = uVar14;
    if ((puVar12[1] == param_2) && (puVar12[2] != 0)) {
      uVar1 = puVar12[-2];
      if (uVar1 < 2) {
        uVar9 = uVar11;
        if (((uVar1 != 0) && (uVar9 = uVar8, uVar1 == 1)) &&
           ((uVar4 = uVar11, *puVar12 != 0 && (uVar4 = uVar7, uVar15 = uVar10, puVar12[-1] != 0))))
        {
          uVar15 = uVar14;
        }
      }
      else if (uVar1 == 3) {
        if (((((int)uVar13 == -1) || ((*puVar12 & 0x3ff) == 9)) && (puVar12[-1] < 0xb)) &&
           ((1 << (ulong)(puVar12[-1] & 0x1f) & 0x403U) != 0)) {
          bVar2 = (*puVar12 & 0x3ff) == 9;
          uVar13 = uVar11;
        }
      }
      else {
        uVar14 = (uint)uVar8;
        if (uVar1 == 2) {
          uVar14 = uVar10;
        }
        uVar9 = (ulong)uVar14;
      }
    }
    uVar11 = (ulong)(uVar10 + 1);
    puVar12 = puVar12 + 0x10;
    uVar7 = uVar4;
    uVar8 = uVar9;
    uVar14 = uVar15;
  } while ((uint)*(ushort *)(param_1 + 0x230) != uVar10 + 1);
  if (-1 < (int)(uint)uVar4) {
    uVar15 = (uint)uVar4;
  }
  uVar7 = (ulong)uVar15;
  if ((int)uVar13 < 0) {
    if (-1 < (int)uVar15) goto LAB_10977b8d8;
    if ((int)uVar9 < 0) goto LAB_10977b944;
    pcVar18 = FUN_10977d938;
    uVar7 = uVar9;
joined_r0x00010977b940:
    if (lVar6 == 0) goto LAB_10977b944;
    lVar6 = lVar6 + uVar7 * 0x20;
  }
  else {
    if ((-1 < (int)uVar15) && (!bVar2)) {
LAB_10977b8d8:
      pcVar18 = FUN_10977d9d8;
      goto joined_r0x00010977b940;
    }
    lVar6 = lVar6 + uVar13 * 0x20;
    if (10 < *(ushort *)(lVar6 + 2) || (1 << (ulong)(*(ushort *)(lVar6 + 2) & 0x1f) & 0x403U) == 0)
    goto LAB_10977b944;
    pcVar18 = FUN_10977d938;
  }
  if (*(long *)(lVar6 + 0x18) == 0) {
    lVar17 = *(long *)(param_1 + 0x260);
    if (*(short *)(lVar6 + 8) == 0) {
      lVar5 = 0;
LAB_10977b96c:
      *(long *)(lVar6 + 0x18) = lVar5;
      uVar7 = *(ulong *)(lVar6 + 0x10);
      if (*(code **)(lVar17 + 0x28) == (code *)0x0) {
        if (*(ulong *)(lVar17 + 8) < uVar7) goto LAB_10977b998;
LAB_10977b9cc:
        *(ulong *)(lVar17 + 0x10) = uVar7;
        FUN_109757778(lVar17,uVar7,lVar5,*(undefined2 *)(lVar6 + 8));
        if ((int)lVar17 == 0) goto LAB_10977b8f4;
        lVar5 = *(long *)(lVar6 + 0x18);
      }
      else {
        lVar3 = lVar17;
        (**(code **)(lVar17 + 0x28))(lVar17,uVar7,0,0);
        lVar5 = *(long *)(lVar6 + 0x18);
        if (lVar3 == 0) goto LAB_10977b9cc;
LAB_10977b998:
        lVar17 = 0x55;
      }
      if (lVar5 != 0) {
        (**(code **)(lVar16 + 0x10))(lVar16,lVar5);
      }
    }
    else {
      lVar5 = lVar16;
      (**(code **)(lVar16 + 8))();
      if (lVar5 != 0) goto LAB_10977b96c;
      lVar17 = 0x40;
    }
    lVar16 = 0;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    *(undefined2 *)(lVar6 + 8) = 0;
  }
  else {
LAB_10977b8f4:
    (*pcVar18)(lVar6,lVar16);
    lVar17 = 0;
    lVar16 = lVar6;
  }
LAB_10977b94c:
  *param_3 = lVar16;
  return lVar17;
}



/* Entry: 10977b9f4; end: 10977babb;  */

uint FUN_10977b9f4(long param_1,uint param_2,uint *param_3,uint *param_4)

{
  ushort uVar1;
  ulong uVar2;
  short *psVar3;
  uint *puVar4;
  uint uVar5;
  
  *param_3 = 0xffffffff;
  *param_4 = 0xffffffff;
  uVar1 = *(ushort *)(param_1 + 0x230);
  if ((ulong)uVar1 != 0) {
    uVar2 = 0;
    psVar3 = (short *)(*(long *)(param_1 + 0x248) + 4);
    do {
      if (((ushort)psVar3[1] == param_2) && (psVar3[2] != 0)) {
        if (psVar3[-2] == 1) {
          if (psVar3[-1] == 0) {
            puVar4 = param_4;
            if (*psVar3 != 0) {
              uVar5 = *param_4;
              goto LAB_10977ba80;
            }
            goto LAB_10977ba88;
          }
        }
        else if ((psVar3[-2] == 3) && ((ushort)psVar3[-1] < 2)) {
          puVar4 = param_3;
          if (*psVar3 != 0x409) {
            uVar5 = *param_3;
LAB_10977ba80:
            if (uVar5 != 0xffffffff) goto LAB_10977ba8c;
          }
LAB_10977ba88:
          *puVar4 = (uint)uVar2;
        }
      }
LAB_10977ba8c:
      uVar2 = uVar2 + 1;
      psVar3 = psVar3 + 0x10;
    } while (uVar1 != uVar2);
  }
  if (-1 < (int)*param_3) {
    return 1;
  }
  return ~*param_4 >> 0x1f;
}



/* Entry: 10977babc; end: 10977bc1b;  */

long FUN_10977babc(long param_1,long param_2)

{
  uint uVar1;
  ushort *puVar2;
  ulong uVar3;
  ushort *puVar4;
  ushort *puVar5;
  long lVar6;
  ulong uStack_48;
  
  puVar4 = *(ushort **)(param_1 + 0xb8);
  lVar6 = param_1;
  (**(code **)(param_1 + 0x340))(param_1,0x53564720,param_2,&uStack_48);
  if ((int)lVar6 == 0) {
    if (uStack_48 < 0x18) {
      lVar6 = 8;
    }
    else {
      lVar6 = param_2;
      func_0x00010975780c();
      if ((int)lVar6 == 0) {
        puVar5 = *(ushort **)(param_2 + 0x40);
        *(undefined8 *)(param_2 + 0x40) = 0;
        *(undefined8 *)(param_2 + 0x48) = 0;
        puVar2 = puVar4;
        (**(code **)(puVar4 + 4))(puVar4,0x20);
        if (puVar2 == (ushort *)0x0) {
          lVar6 = 0x40;
        }
        else {
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[6] = 0;
          puVar2[7] = 0;
          puVar2[0] = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          puVar2[0xc] = 0;
          puVar2[0xd] = 0;
          puVar2[0xe] = 0;
          puVar2[0xf] = 0;
          puVar2[8] = 0;
          puVar2[9] = 0;
          puVar2[10] = 0;
          puVar2[0xb] = 0;
          *puVar2 = *puVar5 >> 8 | *puVar5 << 8;
          uVar1 = (*(uint *)(puVar5 + 1) & 0xff00ff00) >> 8 |
                  (*(uint *)(puVar5 + 1) & 0xff00ff) << 8;
          uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
          uVar3 = (ulong)uVar1;
          if ((9 < uVar1) && (uVar3 <= uStack_48 - 0xe)) {
            *(ulong *)(puVar2 + 4) = (long)puVar5 + uVar3;
            uVar1 = (uint)(*(ushort *)((long)puVar5 + uVar3) >> 8) |
                    (*(ushort *)((long)puVar5 + uVar3) & 0xff00ff) << 8;
            puVar2[1] = (ushort)uVar1;
            if (uVar3 + (ulong)uVar1 * 0xc + 2 <= uStack_48) {
              *(ushort **)(puVar2 + 8) = puVar5;
              *(ulong *)(puVar2 + 0xc) = uStack_48;
              *(ushort **)(param_1 + 0x5a0) = puVar2;
              *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x10000;
              return 0;
            }
          }
          lVar6 = 8;
        }
        if ((*(long *)(param_2 + 0x28) != 0) && (puVar5 != (ushort *)0x0)) {
          (**(code **)(*(long *)(param_2 + 0x38) + 0x10))(*(long *)(param_2 + 0x38),puVar5);
        }
        if (puVar2 != (ushort *)0x0) {
          (**(code **)(puVar4 + 8))(puVar4,puVar2);
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x5a0) = 0;
  return lVar6;
}



/* Entry: 10977bc1c; end: 10977bc7b;  */

void FUN_10977bc1c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x5a0);
  if (lVar3 != 0) {
    lVar1 = *(long *)(param_1 + 0xb8);
    lVar2 = *(long *)(param_1 + 0xc0);
    if (((lVar2 != 0) && (*(long *)(lVar2 + 0x28) != 0)) && (*(long *)(lVar3 + 0x10) != 0)) {
      (**(code **)(*(long *)(lVar2 + 0x38) + 0x10))();
    }
    *(undefined8 *)(lVar3 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010977bc6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,lVar3);
    return;
  }
  return;
}



/* Entry: 10977bc7c; end: 10977c413;  */

undefined8 FUN_10977bc7c(long param_1,uint param_2)

{
  ulong uVar1;
  char *pcVar2;
  uint uVar3;
  ushort uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ushort uStack_78;
  ushort uStack_76;
  ulong uStack_70;
  ulong uStack_68;
  
  lVar7 = *(long *)(param_1 + 8);
  lVar9 = *(long *)(lVar7 + 0x5a0);
  if (*(ushort *)(lVar9 + 2) == 0) {
LAB_10977bd7c:
    uVar5 = 8;
  }
  else {
    plVar6 = *(long **)(param_1 + 0x120);
    lVar8 = *(long *)(lVar9 + 8);
    lVar12 = lVar8 + 2;
    uVar10 = *(ushort *)(lVar9 + 2) - 1;
    FUN_10977da50(&uStack_78,lVar12);
    uVar4 = uStack_78;
    FUN_10977da50(&uStack_78,lVar12 + (ulong)(uVar10 * 0xc));
    if ((uVar4 <= param_2) && ((param_2 < uStack_78 || (param_2 <= uStack_76)))) {
      uVar11 = 0;
      do {
        uVar3 = uVar11 + uVar10 >> 1;
        FUN_10977da50(&uStack_78,lVar12 + (ulong)((uVar3 * 2 + (uVar11 + uVar10 >> 1)) * 4));
        if (param_2 < uStack_78) {
          uVar10 = uVar3 - 1;
        }
        else {
          if (param_2 <= uStack_76) {
            uVar1 = (*(long *)(lVar9 + 0x10) - lVar8) + *(long *)(lVar9 + 0x18);
            if (uStack_70 <= uVar1 && uStack_68 <= uVar1 - uStack_70) {
              pcVar2 = (char *)(lVar8 + uStack_70);
              if ((((6 < uStack_68) && (*pcVar2 == '\x1f')) && (pcVar2[1] == -0x75)) &&
                 (pcVar2[2] == '\b')) {
                return 7;
              }
              *plVar6 = (long)pcVar2;
              plVar6[1] = uStack_68;
              lVar7 = *(long *)(lVar7 + 0xa0);
              lVar12 = *(long *)(lVar7 + 0x20);
              lVar9 = *(long *)(lVar7 + 0x18);
              lVar13 = *(long *)(lVar7 + 0x30);
              lVar8 = *(long *)(lVar7 + 0x28);
              lVar15 = *(long *)(lVar7 + 0x40);
              lVar14 = *(long *)(lVar7 + 0x38);
              plVar6[8] = *(long *)(lVar7 + 0x48);
              plVar6[5] = lVar13;
              plVar6[4] = lVar8;
              plVar6[7] = lVar15;
              plVar6[6] = lVar14;
              plVar6[3] = lVar12;
              plVar6[2] = lVar9;
              *(undefined2 *)(plVar6 + 9) = *(undefined2 *)(*(long *)(param_1 + 8) + 0x88);
              *(ushort *)((long)plVar6 + 0x4a) = uStack_78;
              *(ushort *)((long)plVar6 + 0x4c) = uStack_76;
              plVar6[10] = 0x10000;
              plVar6[0xb] = 0;
              plVar6[0xc] = 0;
              plVar6[0xd] = 0x10000;
              plVar6[0xe] = 0;
              plVar6[0xf] = 0;
              *(long **)(param_1 + 0x120) = plVar6;
              return 0;
            }
            goto LAB_10977bd7c;
          }
          uVar11 = uVar3 + 1;
        }
      } while (uVar11 <= uVar10);
    }
    uVar5 = 0x10;
  }
  return uVar5;
}



/* Entry: 10977c414; end: 10977c493;  */

undefined8 FUN_10977c414(long param_1,ulong *param_2,byte *param_3)

{
  byte *pbVar1;
  ushort *puVar2;
  
  pbVar1 = (byte *)*param_2;
  if (pbVar1 + 5 <= param_3) {
    puVar2 = *(ushort **)(param_1 + 0x18);
    *puVar2 = (ushort)*pbVar1;
    puVar2[1] = (ushort)pbVar1[1];
    puVar2[2] = (short)(char)pbVar1[2];
    puVar2[3] = (short)(char)pbVar1[3];
    puVar2[4] = (ushort)pbVar1[4];
    if (pbVar1 + 8 <= param_3) {
      puVar2[5] = (short)(char)pbVar1[5];
      puVar2[6] = (short)(char)pbVar1[6];
      puVar2[7] = (ushort)pbVar1[7];
      *(undefined1 *)(param_1 + 0x20) = 1;
      *param_2 = (ulong)(pbVar1 + 8);
      return 0;
    }
  }
  return 6;
}



/* Entry: 10977c494; end: 10977c79b;  */

long FUN_10977c494(long param_1,uint param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  code *pcVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbStack_68;
  
  if ((param_4 == 0) || (*(ulong *)(param_1 + 0x30) < (ulong)(param_4 + param_3))) {
    return 6;
  }
  lVar9 = *(long *)(param_1 + 8);
  uVar1 = *(long *)(param_1 + 0x28) + param_3;
  if (*(code **)(lVar9 + 0x28) == (code *)0x0) {
    if (*(ulong *)(lVar9 + 8) < uVar1) {
      return 0x55;
    }
  }
  else {
    lVar11 = lVar9;
    (**(code **)(lVar9 + 0x28))(lVar9,uVar1,0,0);
    if (lVar11 != 0) {
      return 0x55;
    }
  }
  *(ulong *)(lVar9 + 0x10) = uVar1;
  lVar11 = lVar9;
  func_0x00010975780c(lVar9,param_4);
  if ((int)lVar11 != 0) {
    return lVar11;
  }
  pbVar10 = *(byte **)(lVar9 + 0x40);
  *(undefined8 *)(lVar9 + 0x40) = 0;
  *(undefined8 *)(lVar9 + 0x48) = 0;
  pbVar2 = pbVar10 + param_4;
  pbStack_68 = pbVar10;
  if ((param_2 & 0xffff) < 0x14) {
    uVar3 = 1 << (ulong)(param_2 & 0x1f);
    if ((uVar3 & 0x402c0) != 0) {
      lVar11 = param_1;
      FUN_10977c414(param_1,&pbStack_68);
      if ((int)lVar11 != 0) goto LAB_10977c75c;
      goto LAB_10977c61c;
    }
    if ((uVar3 & 0x20100) != 0) goto LAB_10977c5b4;
    if (param_2 != 0x13) goto LAB_10977c5a8;
LAB_10977c67c:
    pcVar8 = FUN_10977cc68;
LAB_10977c708:
    if ((*(char *)(param_1 + 0x21) == '\0') &&
       (lVar11 = param_1, FUN_10977ccdc(param_1,param_8), (int)lVar11 != 0)) goto LAB_10977c75c;
    if ((int)param_8 == 0) {
      (*pcVar8)(param_1,pbStack_68,pbVar2,param_5,param_6,param_7);
      lVar11 = param_1;
      goto LAB_10977c75c;
    }
  }
  else {
LAB_10977c5a8:
    if (1 < param_2 - 1) {
      if (param_2 != 5) {
        lVar11 = 8;
        goto LAB_10977c75c;
      }
LAB_10977c6e0:
      pcVar8 = (code *)0x10977c948;
      goto LAB_10977c708;
    }
LAB_10977c5b4:
    if (param_4 < 5) {
      lVar11 = 6;
      goto LAB_10977c75c;
    }
    pbStack_68 = pbVar10 + 5;
    puVar7 = *(ushort **)(param_1 + 0x18);
    *puVar7 = (ushort)*pbVar10;
    puVar7[1] = (ushort)pbVar10[1];
    puVar7[2] = (short)(char)pbVar10[2];
    puVar7[3] = (short)(char)pbVar10[3];
    puVar7[4] = (ushort)pbVar10[4];
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    *(undefined1 *)(param_1 + 0x20) = 1;
LAB_10977c61c:
    lVar11 = 8;
    if ((int)param_2 < 8) {
      pcVar8 = FUN_10977c79c;
      if ((int)param_2 < 5) {
        if (param_2 != 1) {
          if (param_2 != 2) goto LAB_10977c75c;
LAB_10977c69c:
          uVar5 = (uint)**(ushort **)(param_1 + 0x18);
          uVar6 = (uint)(*(ushort **)(param_1 + 0x18))[1];
          uVar3 = (uVar6 + 7 >> 3) * uVar5;
          if ((uVar3 <= uVar5 * uVar6 + 7 >> 3) ||
             (uVar5 = (int)pbVar2 - (int)pbStack_68, uVar3 != uVar5)) goto LAB_10977c6e0;
          pcVar8 = FUN_10977c79c;
        }
      }
      else {
        if (param_2 == 5) goto LAB_10977c6e0;
        pcVar8 = FUN_10977c79c;
        if (param_2 != 6) {
          if (param_2 != 7) goto LAB_10977c75c;
          goto LAB_10977c69c;
        }
      }
      goto LAB_10977c708;
    }
    if (param_2 - 0x11 < 2) goto LAB_10977c67c;
    if (param_2 != 8) {
      pbVar4 = pbStack_68;
      if (param_2 != 9) goto LAB_10977c75c;
LAB_10977c700:
      pbStack_68 = pbVar4;
      pcVar8 = FUN_10977cb28;
      goto LAB_10977c708;
    }
    pbVar4 = pbStack_68 + 1;
    if (pbStack_68 + 1 <= pbVar2) goto LAB_10977c700;
  }
  lVar11 = 0;
LAB_10977c75c:
  if (*(long *)(lVar9 + 0x28) == 0) {
    return lVar11;
  }
  if (pbVar10 != (byte *)0x0) {
    (**(code **)(*(long *)(lVar9 + 0x38) + 0x10))(*(long *)(lVar9 + 0x38),pbVar10);
    return lVar11;
  }
  return lVar11;
}



/* Entry: 10977c79c; end: 10977cb27;  */

undefined8 FUN_10977c79c(long param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint *puVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  
  puVar8 = *(uint **)(param_1 + 0x10);
  if (*(long *)(puVar8 + 4) != 0) {
    if ((int)param_4 < 0) {
      return 3;
    }
    if (param_5 < 0) {
      return 3;
    }
    uVar3 = **(ushort **)(param_1 + 0x18);
    uVar7 = (uint)uVar3;
    uVar10 = (uint)(*(ushort **)(param_1 + 0x18))[1];
    if (puVar8[1] < param_4 + uVar10 || *puVar8 < param_5 + (uint)uVar3) {
      return 3;
    }
    uVar10 = *(byte *)(param_1 + 0x22) * uVar10;
    if (param_3 < param_2 + (uVar10 + 7 >> 3) * (uint)uVar3) {
      return 3;
    }
    uVar4 = puVar8[2];
    pbVar9 = (byte *)(*(long *)(puVar8 + 4) + (long)(int)(uVar4 * param_5 + (param_4 >> 3)));
    param_4 = param_4 & 7;
    if (param_4 == 0) {
      if (uVar3 != 0) {
        do {
          pbVar6 = param_2;
          pbVar13 = pbVar9;
          pbVar11 = pbVar9;
          uVar14 = uVar10;
          uVar12 = uVar10;
          if (7 < uVar10) {
            do {
              pbVar6 = param_2 + 1;
              pbVar11 = pbVar13 + 1;
              *pbVar13 = *param_2 | *pbVar13;
              uVar12 = uVar14 - 8;
              bVar1 = 0xf < (int)uVar14;
              param_2 = pbVar6;
              pbVar13 = pbVar11;
              uVar14 = uVar12;
            } while (bVar1);
          }
          param_2 = pbVar6;
          if (0 < (int)uVar12) {
            param_2 = pbVar6 + 1;
            *pbVar11 = *pbVar6 & (byte)(0xff00 >> (ulong)(uVar12 & 0x1f)) | *pbVar11;
          }
          pbVar9 = pbVar9 + (int)uVar4;
          uVar12 = uVar7 - 1;
          bVar1 = 0 < (int)uVar7;
          uVar7 = uVar12;
        } while (uVar12 != 0 && bVar1);
      }
    }
    else if (uVar3 != 0) {
      do {
        if (uVar10 < 8) {
          uVar12 = 0;
          pbVar6 = param_2;
          pbVar13 = pbVar9;
          uVar14 = uVar10;
        }
        else {
          uVar12 = 0;
          pbVar11 = pbVar9;
          uVar5 = uVar10;
          do {
            pbVar6 = param_2 + 1;
            bVar2 = *param_2;
            pbVar13 = pbVar11 + 1;
            *pbVar11 = *pbVar11 | (byte)((uVar12 | bVar2) >> (ulong)param_4);
            uVar12 = (uVar12 | bVar2) << 8;
            uVar14 = uVar5 - 8;
            bVar1 = 0xf < (int)uVar5;
            param_2 = pbVar6;
            pbVar11 = pbVar13;
            uVar5 = uVar14;
          } while (bVar1);
        }
        param_2 = pbVar6;
        if (0 < (int)uVar14) {
          param_2 = pbVar6 + 1;
          uVar12 = 0xff00U >> (ulong)(uVar14 & 0x1f) & (uint)*pbVar6 | uVar12;
        }
        *pbVar13 = *pbVar13 | (byte)(uVar12 >> (ulong)param_4);
        if ((int)(8 - param_4) < (int)uVar14) {
          pbVar13[1] = pbVar13[1] | (byte)((uVar12 << 8) >> (ulong)param_4);
        }
        pbVar9 = pbVar9 + (int)uVar4;
        uVar12 = uVar7 - 1;
        bVar1 = 0 < (int)uVar7;
        uVar7 = uVar12;
      } while (uVar12 != 0 && bVar1);
    }
  }
  return 0;
}



/* Entry: 10977cb28; end: 10977cc67;  */

void FUN_10977cb28(long param_1,byte *param_2,ushort *param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ushort *puVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  
  puVar8 = (ushort *)(param_2 + 2);
  if (puVar8 <= param_3) {
    uVar4 = CONCAT11(*param_2,param_2[1]);
    if (puVar8 + (ulong)uVar4 * 2 <= param_3) {
      puVar7 = *(ulong **)(param_1 + 0x18);
      uVar10 = *(undefined2 *)((long)puVar7 + 4);
      uVar11 = *(undefined2 *)((long)puVar7 + 6);
      uVar5 = puVar7[1];
      uVar2 = *(undefined2 *)((long)puVar7 + 10);
      uVar3 = *(undefined2 *)((long)puVar7 + 0xc);
      bVar1 = *(byte *)((long)puVar7 + 0xe);
      if (uVar4 != 0) {
        iVar9 = (uint)*param_2 * 0x100 + (uint)param_2[1];
        do {
          iVar9 = iVar9 + -1;
          lVar6 = param_1;
          func_0x00010977c078(param_1,*puVar8 >> 8 | *puVar8 << 8,param_4 + (char)(byte)puVar8[1],
                              param_5 + (char)*(byte *)((long)puVar8 + 3),param_6 + 1,0);
          puVar8 = puVar8 + 2;
        } while ((int)lVar6 == 0 && iVar9 != 0);
        puVar7 = *(ulong **)(param_1 + 0x18);
      }
      *(ushort *)(puVar7 + 1) = (ushort)(byte)uVar5;
      *(short *)((long)puVar7 + 10) = (short)(char)uVar2;
      *(short *)((long)puVar7 + 0xc) = (short)(char)uVar3;
      *(ushort *)((long)puVar7 + 0xe) = (ushort)bVar1;
      *puVar7 = CONCAT44(CONCAT22((short)(char)uVar11,(short)(char)uVar10),
                         CONCAT22((short)((ulong)**(undefined8 **)(param_1 + 0x10) >> 0x20),
                                  (short)**(undefined8 **)(param_1 + 0x10))) & 0xffffffff00ff00ff;
    }
  }
  return;
}



/* Entry: 10977cc68; end: 10977ccdb;  */

undefined8
FUN_10977cc68(long *param_1,uint *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (3 < param_3 - (long)param_2) {
    uVar1 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
    uVar2 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
    if (uVar2 <= (ulong)(param_3 - (long)(param_2 + 1))) {
      uVar3 = *(undefined8 *)(*param_1 + 0x98);
      FUN_10977cddc(uVar3,param_4,param_5,*(undefined1 *)((long)param_1 + 0x22),param_1[3],
                    *(undefined8 *)(param_1[1] + 0x38),param_2 + 1,uVar2,0);
      return uVar3;
    }
  }
  return 3;
}



/* Entry: 10977ccdc; end: 10977cddb;  */

undefined8 FUN_10977ccdc(long *param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  
  if ((char)param_1[4] == '\0') {
    return 6;
  }
  puVar1 = (uint *)param_1[2];
  uVar3 = ((ushort *)param_1[3])[1];
  uVar6 = (uint)uVar3;
  uVar5 = (uint)*(ushort *)param_1[3];
  *puVar1 = uVar5;
  puVar1[1] = (uint)uVar3;
  bVar2 = *(byte *)((long)param_1 + 0x22);
  if (bVar2 < 4) {
    if (bVar2 == 1) {
      *(undefined1 *)((long)puVar1 + 0x1a) = 1;
      uVar6 = uVar3 + 7 >> 3;
      uVar7 = 2;
    }
    else {
      if (bVar2 != 2) {
        return 3;
      }
      *(undefined1 *)((long)puVar1 + 0x1a) = 3;
      uVar6 = uVar3 + 3 >> 2;
      uVar7 = 4;
    }
  }
  else if (bVar2 == 4) {
    *(undefined1 *)((long)puVar1 + 0x1a) = 4;
    uVar6 = uVar3 + 1 >> 1;
    uVar7 = 0x10;
  }
  else {
    if (bVar2 == 8) {
      *(undefined1 *)((long)puVar1 + 0x1a) = 2;
    }
    else {
      if (bVar2 != 0x20) {
        return 3;
      }
      *(undefined1 *)((long)puVar1 + 0x1a) = 7;
      uVar6 = (uint)uVar3 << 2;
    }
    uVar7 = 0x100;
  }
  uVar4 = 0;
  puVar1[2] = uVar6;
  *(undefined2 *)(puVar1 + 6) = uVar7;
  if ((param_2 == 0) && ((ulong)uVar5 * (ulong)uVar6 != 0)) {
    uVar4 = *(undefined8 *)(*param_1 + 0x98);
    FUN_109754310();
    if ((int)uVar4 == 0) {
      *(undefined1 *)((long)param_1 + 0x21) = 1;
    }
  }
  return uVar4;
}



/* Entry: 10977cddc; end: 10977d2bb;  */

int FUN_10977cddc(long param_1,uint param_2,uint param_3,int param_4,ushort *param_5,long param_6,
                 undefined8 param_7,ulong param_8,undefined4 param_9)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lStack_d8;
  int iStack_cc;
  uint uStack_c8;
  int iStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  int iStack_54;
  
  iStack_54 = 0;
  lStack_d8 = 0;
  if (((int)(param_3 | param_2) < 0) ||
     (((char)param_9 == '\0' &&
      ((((*(uint *)(param_1 + 0x9c) < param_2 + param_5[1] || (param_4 != 0x20)) ||
        (*(uint *)(param_1 + 0x98) < param_3 + *param_5)) || (*(char *)(param_1 + 0xb2) != '\a')))))
     ) {
    return 6;
  }
  uStack_a0 = param_8 & 0xffffffff;
  uStack_68 = 0;
  uStack_80 = 0;
  pcStack_78 = (code *)0x0;
  uStack_98 = 0;
  puVar3 = (undefined8 *)&UNK_10f47cea1;
  uStack_a8 = param_7;
  FUN_109b6474c(&UNK_10f47cea1,&iStack_54,FUN_10977d2bc,FUN_10977d2e8,0,0,0);
  if (puVar3 == (undefined8 *)0x0) {
    return 0x40;
  }
  puStack_b0 = puVar3;
  if ((code *)puVar3[0x7d] == (code *)0x0) {
    puVar3 = (undefined8 *)0x168;
    _malloc();
  }
  else {
    (*(code *)puVar3[0x7d])();
  }
  if (puVar3 == (undefined8 *)0x0) {
    iStack_54 = 0x40;
    FUN_109b65758(&puStack_b0,0,0);
    return iStack_54;
  }
  puVar3[0x2c] = 0;
  puVar3[0x29] = 0;
  puVar3[0x28] = 0;
  puVar3[0x2b] = 0;
  puVar3[0x2a] = 0;
  puVar3[0x25] = 0;
  puVar3[0x24] = 0;
  puVar3[0x27] = 0;
  puVar3[0x26] = 0;
  puVar3[0x21] = 0;
  puVar3[0x20] = 0;
  puVar3[0x23] = 0;
  puVar3[0x22] = 0;
  puVar3[0x1d] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x19] = 0;
  puVar3[0x18] = 0;
  puVar3[0x1b] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x15] = 0;
  puVar3[0x14] = 0;
  puVar3[0x17] = 0;
  puVar3[0x16] = 0;
  puVar3[0x11] = 0;
  puVar3[0x10] = 0;
  puVar3[0x13] = 0;
  puVar3[0x12] = 0;
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  puVar3[0xf] = 0;
  puVar3[0xe] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar4 = puStack_b0;
  puStack_b8 = puVar3;
  FUN_109b62cf4(puStack_b0,PTR__longjmp_11034c548,0xc0);
  iVar2 = (int)puVar4;
  _setjmp();
  puVar4 = puStack_b0;
  if (iVar2 == 0) {
    if (puStack_b0 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puStack_b0[0x1f] = FUN_10977d2ec;
      puStack_b0[0x20] = &uStack_a8;
      if (puStack_b0[0x1e] != 0) {
        puStack_b0[0x1e] = 0;
        FUN_109b62608(puStack_b0,&UNK_10f59faa1);
      }
      puVar4[0x51] = 0;
      puVar4 = puStack_b0;
    }
    FUN_109b647bc(puVar4,puVar3);
    FUN_109b62ed4(puStack_b0,puVar3,&uStack_bc,&uStack_c0,&iStack_c4,&uStack_c8,&iStack_cc,0);
    if (iStack_54 != 0) goto LAB_10977d00c;
    if ((char)param_9 == '\0') {
      if ((uStack_bc != param_5[1]) || (uStack_c0 != *param_5)) goto LAB_10977d00c;
LAB_10977d0ac:
      if (uStack_c8 == 3) {
        func_0x000109b65a54(puStack_b0);
      }
      if (uStack_c8 == 0) {
        func_0x000109b65a8c(puStack_b0);
      }
      if ((puStack_b0 != (undefined8 *)0x0) && ((*(byte *)(puVar3 + 1) >> 4 & 1) != 0)) {
        func_0x000109b65abc();
      }
      if (iStack_c4 == 0x10) {
        func_0x000109b659f4();
      }
      if (((iStack_c4 < 8) && (puStack_b0 != (undefined8 *)0x0)) &&
         (*(byte *)(puStack_b0 + 0x4c) < 8)) {
        *(uint *)((long)puStack_b0 + 300) = *(uint *)((long)puStack_b0 + 300) | 4;
        *(undefined1 *)((long)puStack_b0 + 0x261) = 8;
      }
      if ((uStack_c8 & 0xfffffffb) == 0) {
        FUN_109b65af4();
      }
      if (((iStack_cc != 0) && (puStack_b0 != (undefined8 *)0x0)) &&
         (*(char *)((long)puStack_b0 + 0x25c) != '\0')) {
        *(uint *)((long)puStack_b0 + 300) = *(uint *)((long)puStack_b0 + 300) | 2;
      }
      func_0x000109b6fc30(puStack_b0,0xff,1);
      FUN_109b64cc8(puStack_b0,puVar3);
      FUN_109b62ed4(puStack_b0,puVar3,&uStack_bc,&uStack_c0,&iStack_c4,&uStack_c8,&iStack_cc,0);
      if ((iStack_c4 == 8) && ((uStack_c8 | 4) == 6)) {
        if (param_9._1_1_ != '\0') goto LAB_10977d00c;
        pcVar1 = (code *)0x10977d40c;
        if (uStack_c8 != 2) {
          pcVar1 = FUN_10977d38c;
        }
        *(uint *)((long)puStack_b0 + 300) = *(uint *)((long)puStack_b0 + 300) | 0x100000;
        puStack_b0[0x21] = pcVar1;
        if ((char)param_9 != '\0') {
          lVar6 = param_1;
          FUN_109754310(param_1,(long)*(int *)(param_1 + 0xa0) * (ulong)*(uint *)(param_1 + 0x98));
          iStack_54 = (int)lVar6;
          if (iStack_54 != 0) goto LAB_10977d00c;
        }
        if (uStack_c0 == 0) {
          lStack_d8 = 0;
        }
        else {
          if ((uStack_c0 >> 0x1c != 0) ||
             (lStack_d8 = param_6, (**(code **)(param_6 + 8))(param_6,(ulong)uStack_c0 << 3),
             lStack_d8 == 0)) {
            iStack_54 = 0x40;
            goto LAB_10977cf64;
          }
          if (0 < (int)uStack_c0) {
            iVar2 = *(int *)(param_1 + 0xa0);
            lVar5 = (ulong)(param_2 << 2) + (long)iVar2 * (long)(int)param_3;
            lVar6 = 0;
            do {
              *(long *)(lStack_d8 + lVar6) = *(long *)(param_1 + 0xa8) + lVar5;
              lVar6 = lVar6 + 8;
              lVar5 = lVar5 + iVar2;
            } while ((ulong)uStack_c0 * 8 - lVar6 != 0);
          }
        }
        iStack_54 = 0;
        FUN_109b65140(puStack_b0,lStack_d8);
        FUN_109b6522c(puStack_b0,puVar3);
        goto LAB_10977d00c;
      }
      goto LAB_10977cf60;
    }
    if ((uStack_c0 >> 0xf == 0) && (uStack_bc < 0x8000)) {
      param_5[1] = (ushort)uStack_bc;
      *param_5 = (ushort)uStack_c0;
      *(uint *)(param_1 + 0x98) = uStack_c0;
      *(uint *)(param_1 + 0x9c) = uStack_bc;
      *(undefined1 *)(param_1 + 0xb2) = 7;
      *(uint *)(param_1 + 0xa0) = uStack_bc << 2;
      *(undefined2 *)(param_1 + 0xb0) = 0x100;
      goto LAB_10977d0ac;
    }
    iStack_54 = 10;
  }
  else {
LAB_10977cf60:
    iStack_54 = 3;
  }
LAB_10977cf64:
  lStack_d8 = 0;
LAB_10977d00c:
  if (lStack_d8 != 0) {
    (**(code **)(param_6 + 0x10))(param_6);
  }
  FUN_109b65758(&puStack_b0,&puStack_b8,0);
  if (pcStack_78 != (code *)0x0) {
    (*pcStack_78)(&uStack_a8);
  }
  return iStack_54;
}



/* Entry: 10977d2bc; end: 10977d2e7;  */

void FUN_10977d2bc(long param_1)

{
  **(undefined4 **)(param_1 + 0xe8) = 0x40;
  FUN_109b62cf4(param_1,PTR__longjmp_11034c548,0xc0);
  _longjmp();
  return;
}



/* Entry: 10977d2e8; end: 10977d2eb;  */

void FUN_10977d2e8(void)

{
  return;
}



/* Entry: 10977d2ec; end: 10977d38b;  */

void FUN_10977d2ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 0x100);
    plVar1 = plVar2;
    func_0x00010975780c(plVar2,param_3);
    if ((int)plVar1 == 0) goto LAB_10977d344;
    **(undefined4 **)(param_1 + 0xe8) = 0x54;
    FUN_109b6244c(param_1,0);
  }
  func_0x00010975780c();
  plVar2 = (long *)0x0;
LAB_10977d344:
  _memcpy(param_2,plVar2[8],param_3);
  if (plVar2[5] != 0) {
    if (*plVar2 != 0) {
      (**(code **)(plVar2[7] + 0x10))();
    }
    *plVar2 = 0;
  }
  plVar2[8] = 0;
  plVar2[9] = 0;
  return;
}



/* Entry: 10977d38c; end: 10977d44f;  */

void FUN_10977d38c(undefined8 param_1,long param_2,long param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  ulong uVar8;
  uint uVar9;
  
  uVar3 = *(uint *)(param_2 + 8);
  if ((ulong)uVar3 != 0) {
    uVar8 = 0;
    do {
      pbVar1 = (byte *)(param_3 + uVar8);
      bVar4 = pbVar1[3];
      if (bVar4 == 0) {
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
      }
      else {
        uVar9 = (uint)bVar4;
        uVar5 = *pbVar1 * uVar9 + 0x80;
        uVar6 = pbVar1[1] * uVar9 + 0x80;
        uVar9 = pbVar1[2] * uVar9 + 0x80;
        bVar2 = pbVar1[2];
        bVar7 = *pbVar1;
        if (bVar4 != 0xff) {
          bVar2 = (byte)(uVar9 + (uVar9 >> 8) >> 8);
          bVar7 = (byte)(uVar5 + (uVar5 >> 8) >> 8);
        }
        *pbVar1 = bVar2;
        bVar2 = pbVar1[1];
        if (bVar4 != 0xff) {
          bVar2 = (byte)(uVar6 + (uVar6 >> 8) >> 8);
        }
        pbVar1[1] = bVar2;
        pbVar1[2] = bVar7;
      }
      uVar8 = uVar8 + 4;
    } while (uVar8 < uVar3);
  }
  return;
}



/* Entry: 10977d450; end: 10977d693;  */

long * FUN_10977d450(long param_1,long *param_2,uint param_3,ulong param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  uint uVar12;
  long *plVar13;
  ulong uVar14;
  
  if (param_4 < (ulong)param_3 << 1) {
    return (long *)0x3;
  }
  lVar9 = param_2[7];
  lVar10 = (ulong)param_3 * 2;
  plVar13 = param_2;
  if (param_3 == 0) {
    func_0x00010975780c(param_2,0);
    if ((int)plVar13 != 0) {
      return plVar13;
    }
    lVar8 = 0;
  }
  else {
    lVar8 = lVar9;
    (**(code **)(lVar9 + 8))(lVar9,lVar10);
    if (lVar8 == 0) {
      return (long *)0x40;
    }
    func_0x00010975780c(param_2,lVar10);
    if ((int)plVar13 != 0) goto LAB_10977d5e8;
    lVar5 = 0;
    lVar6 = param_2[8];
    do {
      uVar12 = (uint)(*(ushort *)(lVar6 + lVar5) >> 8) |
               (*(ushort *)(lVar6 + lVar5) & 0xff00ff) << 8;
      uVar2 = uVar12;
      if (uVar12 <= ((uint)plVar13 & 0xffff)) {
        uVar2 = (uint)plVar13 & 0xffff;
      }
      plVar13 = (long *)(ulong)uVar2;
      *(short *)(lVar8 + lVar5) = (short)uVar12;
      lVar5 = lVar5 + 2;
    } while (lVar10 != lVar5);
  }
  if (param_2[5] != 0) {
    if (*param_2 != 0) {
      (**(code **)(param_2[7] + 0x10))();
    }
    *param_2 = 0;
  }
  lVar10 = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  uVar12 = (uint)plVar13;
  uVar2 = 0;
  if (0x100 < uVar12) {
    uVar2 = uVar12 - 0x101;
  }
  if (uVar12 < 0x102) goto LAB_10977d54c;
  lVar5 = param_4 + (ulong)param_3 * -2;
  lVar10 = lVar5 + (ulong)(ushort)uVar2 * 8;
  if (lVar10 + 1 < 1) {
    if (lVar10 == -1) {
      lVar10 = 0;
      goto LAB_10977d5a8;
    }
    param_2 = (long *)0x6;
  }
  else {
    lVar10 = lVar9;
    (**(code **)(lVar9 + 8))();
    if (lVar10 == 0) {
      param_2 = (long *)0x40;
    }
    else {
LAB_10977d5a8:
      uVar14 = (ulong)uVar2 & 0xffff;
      pbVar11 = (byte *)(lVar10 + uVar14 * 8);
      func_0x000109757778(param_2,param_2[2],pbVar11,lVar5);
      if ((int)param_2 == 0) {
        pbVar1 = pbVar11 + lVar5;
        if (lVar5 < 1) {
          uVar7 = 0;
          bVar4 = true;
        }
        else {
          uVar7 = 0;
          do {
            bVar3 = *pbVar11;
            *pbVar11 = 0;
            *(byte **)(lVar10 + uVar7 * 8) = pbVar11 + 1;
            pbVar11 = pbVar11 + 1 + bVar3;
            uVar7 = uVar7 + 1;
            bVar4 = uVar7 < uVar14;
          } while (pbVar11 < pbVar1 && uVar7 < uVar14);
        }
        *pbVar1 = 0;
        if ((bVar4) && (((uint)uVar7 & 0xffff) < (uVar2 & 0xffff))) {
          uVar7 = uVar7 & 0xffff;
          do {
            *(byte **)(lVar10 + uVar7 * 8) = pbVar1;
            uVar7 = uVar7 + 1;
          } while (uVar14 != uVar7);
        }
LAB_10977d54c:
        *(short *)(param_1 + 2) = (short)param_3;
        *(ushort *)(param_1 + 4) = (ushort)uVar2;
        *(long *)(param_1 + 8) = lVar8;
        *(long *)(param_1 + 0x10) = lVar10;
        return (long *)0x0;
      }
      if (lVar10 != 0) {
        (**(code **)(lVar9 + 0x10))(lVar9,lVar10);
      }
    }
  }
  plVar13 = param_2;
  if (lVar8 == 0) {
    return param_2;
  }
LAB_10977d5e8:
  (**(code **)(lVar9 + 0x10))(lVar9,lVar8);
  return plVar13;
}



/* Entry: 10977d694; end: 10977d7af;  */

long * FUN_10977d694(long param_1,long *param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if (0x182 < param_3) {
    return (long *)0x3;
  }
  uVar6 = (ulong)param_3;
  if (param_4 < uVar6) {
    return (long *)0x3;
  }
  if (param_3 == 0) {
    plVar3 = param_2;
    func_0x00010975780c(param_2,0);
    if ((int)plVar3 != 0) {
      return plVar3;
    }
    lVar5 = 0;
  }
  else {
    lVar7 = param_2[7];
    lVar5 = lVar7;
    (**(code **)(lVar7 + 8))(lVar7,uVar6 << 1);
    if (lVar5 == 0) {
      return (long *)0x40;
    }
    plVar3 = param_2;
    func_0x00010975780c(param_2,uVar6);
    if ((int)plVar3 != 0) {
      (**(code **)(lVar7 + 0x10))(lVar7,lVar5);
      return plVar3;
    }
    uVar4 = 0;
    lVar7 = param_2[8];
    do {
      uVar1 = (int)uVar4 + (int)*(char *)(lVar7 + uVar4);
      uVar2 = 0;
      if (uVar1 < 0x102) {
        uVar2 = uVar1;
      }
      *(short *)(lVar5 + uVar4 * 2) = (short)uVar2;
      uVar4 = uVar4 + 1;
    } while (uVar6 != uVar4);
  }
  if (param_2[5] != 0) {
    if (*param_2 != 0) {
      (**(code **)(param_2[7] + 0x10))();
    }
    *param_2 = 0;
  }
  param_2[8] = 0;
  param_2[9] = 0;
  *(short *)(param_1 + 2) = (short)param_3;
  *(long *)(param_1 + 8) = lVar5;
  return (long *)0x0;
}



/* Entry: 10977d7b0; end: 10977d863;  */

void FUN_10977d7b0(long param_1,long param_2,ulong param_3,uint param_4,undefined4 *param_5)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_3 == 0xffffffff) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)(param_5,param_4 << 2);
    return;
  }
  lVar4 = *(long *)(param_1 + 0x380);
  uVar5 = (ulong)param_4;
  do {
    if (*(long *)(param_2 + 0x78) == 0) {
      uVar2 = 0;
      uVar3 = param_3;
    }
    else {
      uVar3 = param_3;
      if (*(ulong *)(param_2 + 0x68) <= param_3) {
        uVar3 = *(ulong *)(param_2 + 0x68) - 1;
      }
      uVar2 = *(undefined4 *)(*(long *)(param_2 + 0x70) + uVar3 * 4);
      uVar3 = (ulong)*(uint *)(*(long *)(param_2 + 0x78) + uVar3 * 4);
    }
    lVar1 = param_1;
    (**(code **)(lVar4 + 0x70))(param_1,param_2 + 0x48,uVar2,uVar3);
    *param_5 = (int)lVar1;
    param_3 = param_3 + 1;
    uVar5 = uVar5 - 1;
    param_5 = param_5 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 10977d864; end: 10977d937;  */

undefined8 FUN_10977d864(long param_1,long param_2,long *param_3,ulong *param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)*param_3;
  if ((*(byte **)(param_1 + 0x40) <= pbVar4) &&
     (lVar2 = *(long *)(param_1 + 0x88), pbVar4 <= (byte *)(*(long *)(param_1 + 0x80) + lVar2 + -4))
     ) {
    *param_3 = (long)(pbVar4 + 3);
    uVar3 = (uint)*pbVar4 << 0x10 | (uint)pbVar4[1] << 8 | (uint)pbVar4[2];
    if ((uVar3 != 0) &&
       ((uVar1 = param_2 + (ulong)uVar3, *(ulong *)(param_1 + 0x40) <= uVar1 &&
        (uVar1 < (ulong)(*(long *)(param_1 + 0x80) + lVar2))))) {
      *param_4 = uVar1;
      return 1;
    }
  }
  return 0;
}



/* Entry: 10977d938; end: 10977d9d7;  */

void FUN_10977d938(long param_1,long param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  
  puVar7 = *(undefined1 **)(param_1 + 0x18);
  uVar2 = *(ushort *)(param_1 + 8);
  uVar6 = (ulong)(uVar2 >> 1);
  (**(code **)(param_2 + 8))(param_2,uVar6 + 1);
  if (param_2 != 0) {
    if (uVar2 < 2) {
      uVar4 = 0;
    }
    else {
      uVar5 = 0;
      do {
        uVar3 = (uint)CONCAT11(*puVar7,puVar7[1]);
        uVar4 = uVar5;
        if (uVar3 == 0) break;
        uVar1 = 0x3f;
        if (0xffffff9f < uVar3 - 0x80) {
          uVar1 = puVar7[1];
        }
        *(undefined1 *)(param_2 + uVar5) = uVar1;
        uVar5 = uVar5 + 1;
        puVar7 = puVar7 + 2;
        uVar4 = uVar6;
      } while (uVar6 != uVar5);
      uVar4 = uVar4 & 0xffffffff;
    }
    *(undefined1 *)(param_2 + uVar4) = 0;
  }
  return;
}



/* Entry: 10977d9d8; end: 10977da4f;  */

void FUN_10977d9d8(long param_1,long param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x18);
  uVar3 = *(ushort *)(param_1 + 8);
  uVar5 = (ulong)uVar3;
  (**(code **)(param_2 + 8))(param_2,uVar5 + 1);
  if (param_2 != 0) {
    uVar4 = 0;
    if (uVar3 != 0) {
      do {
        cVar2 = *(char *)(lVar7 + uVar4);
        uVar6 = uVar4;
        if (cVar2 == '\0') break;
        cVar1 = '?';
        if ('\x1f' < cVar2) {
          cVar1 = cVar2;
        }
        *(char *)(param_2 + uVar4) = cVar1;
        uVar4 = uVar4 + 1;
        uVar6 = uVar5;
      } while (uVar5 != uVar4);
      uVar4 = uVar6 & 0xffffffff;
    }
    *(undefined1 *)(param_2 + uVar4) = 0;
  }
  return;
}



/* Entry: 10977da50; end: 10977db7f;  */

void FUN_10977da50(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = *param_2 >> 8 | *param_2 << 8;
  param_1[1] = param_2[1] >> 8 | param_2[1] << 8;
  uVar1 = (*(uint *)(param_2 + 2) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 2) & 0xff00ff) << 8;
  uVar2 = (*(uint *)(param_2 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 4) & 0xff00ff) << 8;
  *(ulong *)(param_1 + 4) = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
  *(ulong *)(param_1 + 8) = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
  return;
}



/* Entry: 10977db80; end: 10977e52b;  */

uint * FUN_10977db80(uint *param_1,uint *param_2,uint **param_3,code *param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  byte *pbVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  uint **ppuVar9;
  byte *pbVar10;
  uint **ppuVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  byte *pbVar22;
  uint *puVar23;
  uint *puVar24;
  uint *puStack_90;
  int iStack_88;
  int iStack_84;
  long lStack_80;
  uint *puStack_78;
  uint uStack_6c;
  undefined8 uStack_68;
  int iStack_60;
  uint uStack_5c;
  long lStack_58;
  
  ppuVar11 = &puStack_90;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = *(uint **)(param_1 + 0x128);
  puVar4 = param_1;
  if (puVar17 == (uint *)0x0) {
    if ((*(long *)(param_1 + 0x130) == 0) ||
       (((*(ushort *)((long)param_1 + 10) & 0x7fff) == 0 &&
        (-1 < (char)*(byte *)((long)param_1 + 0x11))))) {
      param_3 = (uint **)&uStack_68;
      param_4 = (code *)&puStack_78;
      param_2 = (uint *)0x6;
      FUN_10977b9f4();
      if ((int)puVar4 == 0) {
        puVar17 = (uint *)0x0;
        goto LAB_10977e4f0;
      }
      if ((int)uStack_68 == -1) {
        puVar17 = (uint *)0x0;
LAB_10977dcbc:
        if ((int)puStack_78 != -1) {
          puVar4 = *(uint **)(param_1 + 0x2e);
          param_2 = *(uint **)(param_1 + 0x98);
          param_3 = (uint **)(*(long *)(param_1 + 0x92) + (long)(int)puStack_78 * 0x20);
          param_4 = FUN_10977e6b4;
          FUN_10977e6ec();
          puVar17 = puVar4;
        }
      }
      else {
        puVar4 = *(uint **)(param_1 + 0x2e);
        param_2 = *(uint **)(param_1 + 0x98);
        param_3 = (uint **)(*(long *)(param_1 + 0x92) + (long)(int)uStack_68 * 0x20);
        param_4 = FUN_10977e6b4;
        FUN_10977e52c();
        puVar17 = puVar4;
        if (puVar4 == (uint *)0x0) goto LAB_10977dcbc;
      }
    }
    else {
      puVar23 = *(uint **)(param_1 + 0x2e);
      lVar19 = *(long *)(param_1 + 0xe0);
      if (*(long *)(param_1 + 0x134) == 0) {
        param_3 = (uint **)&iStack_84;
        param_4 = (code *)&iStack_88;
        param_2 = (uint *)0x19;
        FUN_10977b9f4();
        if (((ulong)puVar4 & 1) != 0) {
LAB_10977dc78:
          if (iStack_84 == -1) {
            puVar18 = (uint *)0x0;
LAB_10977dcf8:
            if (iStack_88 != -1) {
              puVar4 = *(uint **)(param_1 + 0x2e);
              param_2 = *(uint **)(param_1 + 0x98);
              param_3 = (uint **)(*(long *)(param_1 + 0x92) + (long)iStack_88 * 0x20);
              param_4 = FUN_10977e860;
              FUN_10977e6ec();
              puVar18 = puVar4;
            }
          }
          else {
            puVar4 = *(uint **)(param_1 + 0x2e);
            param_2 = *(uint **)(param_1 + 0x98);
            param_3 = (uint **)(*(long *)(param_1 + 0x92) + (long)iStack_84 * 0x20);
            param_4 = FUN_10977e860;
            FUN_10977e52c();
            puVar18 = puVar4;
            if (puVar4 == (uint *)0x0) goto LAB_10977dcf8;
          }
          puVar17 = (uint *)0x0;
          if (puVar18 == (uint *)0x0) goto LAB_10977e4ec;
          puVar17 = puVar18;
          _strlen();
          uVar3 = (uint)puVar17;
          if (0x5b < uVar3) {
            *(byte *)((long)puVar18 + 0x5b) = 0;
            uVar3 = 0x5b;
          }
          *(uint **)(param_1 + 0x134) = puVar18;
          param_1[0x136] = uVar3;
          goto LAB_10977dd4c;
        }
        param_3 = (uint **)&iStack_84;
        param_4 = (code *)&iStack_88;
        param_2 = (uint *)0x10;
        puVar4 = param_1;
        FUN_10977b9f4();
        if (((ulong)puVar4 & 1) != 0) goto LAB_10977dc78;
        param_3 = (uint **)&iStack_84;
        param_4 = (code *)&iStack_88;
        param_2 = (uint *)0x1;
        puVar4 = param_1;
        FUN_10977b9f4();
        if ((int)puVar4 != 0) goto LAB_10977dc78;
LAB_10977e4e8:
        puVar17 = (uint *)0x0;
      }
      else {
LAB_10977dd4c:
        ppuVar9 = &puStack_78;
        param_4 = (code *)0x0;
        (**(code **)(lVar19 + 0x88))(param_1,&uStack_6c,ppuVar9,0,&lStack_80);
        if (((*(ulong *)(param_1 + 2) & 0x7fff0000) == 0) ||
           ((char)*(byte *)((long)param_1 + 0x11) < '\0')) {
LAB_10977dea4:
          ppuVar11 = ppuVar9;
          lVar19 = *(long *)(lStack_80 + 0x10);
          param_2 = (uint *)(ulong)(param_1[0x136] + uStack_6c * 0x11 + 1);
          (**(code **)(puVar23 + 2))();
          puVar4 = puVar23;
          param_3 = ppuVar11;
          puVar17 = puVar23;
          if (puVar23 == (uint *)0x0) goto LAB_10977e4ec;
          puVar4 = *(uint **)(param_1 + 0x134);
          puVar18 = puVar23;
          _strcpy();
          pbVar5 = (byte *)((long)puVar23 + (ulong)param_1[0x136]);
          puStack_90 = puVar4;
          if (uStack_6c != 0) {
            uVar3 = 0;
            do {
              if (*(long *)puStack_78 != *(long *)(lVar19 + 0x10)) {
                pbVar22 = pbVar5 + 1;
                *pbVar5 = 0x5f;
                uVar6 = *puStack_78;
                if (uVar6 == 0) {
                  pbVar22 = pbVar5 + 2;
                  pbVar5[1] = 0x30;
                }
                else {
                  if ((int)uVar6 < 0) {
                    pbVar22 = pbVar5 + 2;
                    pbVar5[1] = 0x2d;
                    uVar6 = -uVar6;
                  }
                  if (0xffff < uVar6) {
                    pbVar5 = (byte *)&uStack_68;
                    ppuVar11 = (uint **)(ulong)(uVar6 >> 0x10);
                    do {
                      param_4 = (code *)((ulong)ppuVar11 / 10);
                      uVar12 = (uint)ppuVar11;
                      pbVar10 = pbVar5 + 1;
                      *pbVar5 = (char)ppuVar11 + (char)((ulong)ppuVar11 / 10) * -10 | 0x30;
                      pbVar5 = pbVar10;
                      ppuVar11 = (uint **)param_4;
                    } while (9 < uVar12);
                    while (&uStack_68 < pbVar10) {
                      pbVar10 = pbVar10 + -1;
                      param_4 = (code *)(ulong)*pbVar10;
                      *pbVar22 = *pbVar10;
                      pbVar22 = pbVar22 + 1;
                    }
                  }
                  if ((uVar6 & 0xffff) != 0) {
                    *pbVar22 = 0x2e;
                    lVar20 = 5;
                    uVar6 = (uVar6 & 0xffff) * 10 + 5;
                    do {
                      uVar16 = uVar6;
                      pbVar22 = pbVar22 + 1;
                      uVar15 = uVar16 >> 0x10;
                      param_4 = (code *)(ulong)uVar15;
                      iVar8 = uVar15 + 0x30;
                      *pbVar22 = (byte)iVar8;
                      uVar12 = uVar16 & 0xffff;
                      if (uVar12 == 0) {
                        if (lVar20 != 1) goto LAB_10977e040;
                        if (iVar8 == 0x31) goto LAB_10977e020;
                        goto LAB_10977e030;
                      }
                      lVar20 = lVar20 + -1;
                      uVar6 = uVar12 * 10;
                    } while ((int)lVar20 != 0);
                    if ((lVar20 == 0) && (uVar12 >> 4 < 0x86b)) {
                      if (iVar8 != 0x31) {
                        if (uVar12 == 0x4350) {
                          if ((uVar15 & 1) != 0) {
LAB_10977e038:
                            iVar8 = uVar15 + 0x2f;
                            *pbVar22 = (byte)iVar8;
                          }
                        }
                        else if (uVar12 >> 4 < 0x435) {
LAB_10977e030:
                          pbVar5 = pbVar22;
                          if (0xffff < uVar16) goto LAB_10977e038;
                          goto LAB_10977e04c;
                        }
                        goto LAB_10977e040;
                      }
LAB_10977e020:
                      *pbVar22 = 0x30;
                      pbVar5 = pbVar22;
LAB_10977e04c:
                      do {
                        pbVar22 = pbVar5 + -1;
                        *pbVar5 = 0;
                        pbVar5 = pbVar22;
                      } while (*pbVar22 == 0x30);
                    }
                    else {
LAB_10977e040:
                      pbVar5 = pbVar22;
                      if (iVar8 == 0x30) goto LAB_10977e04c;
                    }
                    pbVar22 = pbVar22 + 1;
                  }
                }
                uVar7 = *(undefined8 *)(lVar19 + 0x20);
                pbVar5 = pbVar22;
                if (((uint)((ulong)uVar7 >> 0x18) & 0xff) != 0x20) {
                  bVar2 = (byte)((ulong)uVar7 >> 0x18);
                  iVar8 = (int)(char)bVar2;
                  param_4 = (code *)(ulong)(iVar8 - 0x61U);
                  if ((iVar8 - 0x30U < 10 || iVar8 - 0x41U < 0x1a) || iVar8 - 0x61U < 0x1a) {
                    pbVar5 = pbVar22 + 1;
                    *pbVar22 = bVar2;
                    uVar7 = *(undefined8 *)(lVar19 + 0x20);
                  }
                }
                pbVar22 = pbVar5;
                if (((uint)((ulong)uVar7 >> 0x10) & 0xff) != 0x20) {
                  bVar2 = (byte)((ulong)uVar7 >> 0x10);
                  iVar8 = (int)(char)bVar2;
                  param_4 = (code *)(ulong)(iVar8 - 0x61U);
                  if ((iVar8 - 0x30U < 10 || iVar8 - 0x41U < 0x1a) || iVar8 - 0x61U < 0x1a) {
                    pbVar22 = pbVar5 + 1;
                    *pbVar5 = bVar2;
                    uVar7 = *(undefined8 *)(lVar19 + 0x20);
                  }
                }
                uVar6 = (uint)uVar7;
                pbVar10 = pbVar22;
                if (((uint)((ulong)uVar7 >> 8) & 0xff) != 0x20) {
                  bVar2 = (byte)((ulong)uVar7 >> 8);
                  iVar8 = (int)(char)bVar2;
                  param_4 = (code *)(ulong)(iVar8 - 0x61U);
                  if ((iVar8 - 0x30U < 10 || iVar8 - 0x41U < 0x1a) || iVar8 - 0x61U < 0x1a) {
                    pbVar10 = pbVar22 + 1;
                    *pbVar22 = bVar2;
                    uVar6 = (uint)*(undefined8 *)(lVar19 + 0x20);
                  }
                }
                ppuVar11 = (uint **)(ulong)(uVar6 & 0xff);
                pbVar5 = pbVar10;
                if ((uVar6 & 0xff) != 0x20) {
                  uVar12 = (uint)(char)(byte)uVar6;
                  ppuVar11 = (uint **)(ulong)uVar12;
                  param_4 = (code *)(ulong)(uVar12 - 0x30);
                  if (((uVar12 - 0x30 < 10) ||
                      (param_4 = (code *)(ulong)(uVar12 - 0x41), uVar12 - 0x41 < 0x1a)) ||
                     (ppuVar11 = (uint **)(ulong)(uVar12 - 0x61), uVar12 - 0x61 < 0x1a)) {
                    pbVar5 = pbVar10 + 1;
                    *pbVar10 = (byte)uVar6;
                  }
                }
              }
              uVar3 = uVar3 + 1;
              puVar18 = puStack_78 + 2;
              puStack_78 = puVar18;
              lVar19 = lVar19 + 0x30;
              puStack_90 = (uint *)(ulong)uStack_6c;
            } while (uVar3 < uStack_6c);
          }
          pbVar22 = pbVar5 + 1;
          *pbVar5 = 0;
        }
        else {
          lVar20 = *(long *)(param_1 + 0xdc);
          lVar21 = ((*(ulong *)(param_1 + 2) & 0x7fff0000) >> 0x10) - 1;
          lVar19 = *(long *)(lStack_80 + 0x18);
          uVar3 = *(uint *)(lVar19 + lVar21 * 0x10 + 0xc);
          puVar4 = (uint *)(ulong)uVar3;
          uStack_68 = (uint *)0x0;
          if ((uVar3 == 6) || (uVar3 - 0x100 >> 8 < 0x7f)) {
            ppuVar9 = (uint **)&uStack_68;
            (**(code **)(lVar20 + 0x158))(param_1);
            puVar17 = uStack_68;
            if (uStack_68 == (uint *)0x0) {
              lVar19 = *(long *)(lStack_80 + 0x18);
              goto LAB_10977dde8;
            }
            puVar18 = uStack_68;
            _strlen();
            pbVar22 = (byte *)((long)puVar17 + (long)puVar18) + 1;
            puStack_90 = puVar4;
            ppuVar11 = ppuVar9;
          }
          else {
LAB_10977dde8:
            (**(code **)(lVar20 + 0x158))(param_1,*(undefined2 *)(lVar19 + lVar21 * 0x10 + 8));
            ppuVar9 = ppuVar11;
            if (puStack_90 == (uint *)0x0) goto LAB_10977dea4;
            uVar3 = param_1[0x136];
            puVar4 = puStack_90;
            _strlen();
            param_2 = (uint *)((long)puVar4 + (ulong)(uVar3 + 1) + 1);
            param_3 = ppuVar11;
            if (((long)param_2 < 1) ||
               (puVar4 = puVar23, (**(code **)(puVar23 + 2))(), param_3 = ppuVar11,
               puVar4 == (uint *)0x0)) goto LAB_10977e4e8;
            puVar18 = puVar4;
            _strcpy();
            uVar3 = param_1[0x136];
            *(byte *)((long)puVar18 + (ulong)uVar3) = 0x2d;
            bVar2 = (byte)*puStack_90;
            pbVar5 = (byte *)((long)puVar18 + (ulong)uVar3) + 1;
            puVar17 = puStack_90;
            while (bVar2 != 0) {
              puVar17 = (uint *)((long)puVar17 + 1);
              iVar8 = (int)(char)bVar2;
              pbVar22 = pbVar5;
              if ((iVar8 - 0x30U < 10 || iVar8 - 0x41U < 0x1a) || iVar8 - 0x61U < 0x1a) {
                pbVar22 = pbVar5 + 1;
                *pbVar5 = bVar2;
              }
              pbVar5 = pbVar22;
              bVar2 = *(byte *)puVar17;
            }
            pbVar22 = pbVar5 + 1;
            *pbVar5 = 0;
            puVar17 = puVar4;
            if (puStack_90 != (uint *)0x0) {
              (**(code **)(puVar23 + 4))();
              puVar18 = puVar23;
            }
          }
        }
        puVar4 = puVar18;
        param_2 = puStack_90;
        param_3 = ppuVar11;
        if (0x7f < (long)pbVar22 - (long)puVar17) {
          puVar4 = (uint *)0xa1e38b93;
          uVar3 = 0x75bcd15;
          uVar12 = (uint)((long)pbVar22 - (long)puVar17);
          uVar6 = uVar12 + 0xf;
          if (-1 < (int)uVar12) {
            uVar6 = uVar12;
          }
          if (uVar12 + 0xf < 0x1f) {
            uVar13 = 0x75bcd15;
            uVar16 = 0x75bcd15;
            uVar15 = 0x75bcd15;
          }
          else {
            lVar19 = (long)((int)uVar6 >> 4);
            uVar15 = 0x75bcd15;
            uVar16 = 0x75bcd15;
            uVar13 = 0x75bcd15;
            pbVar22 = (byte *)((long)puVar17 +
                              (long)(int)(uVar6 & 0xfffffff0) + (long)((int)uVar6 >> 4) * -0x10 + 8)
            ;
            do {
              uVar3 = (*(int *)(pbVar22 + -8) * -0x34f28000 |
                      (uint)(*(int *)(pbVar22 + -8) * 0x239b961b) >> 0x11) * -0x54f16877 ^ uVar3;
              uVar3 = ((uVar3 >> 0xd | uVar3 << 0x13) + uVar15) * 5 + 0x561ccd1b;
              uVar15 = (*(int *)(pbVar22 + -4) * -0x68770000 |
                       (uint)(*(int *)(pbVar22 + -4) * -0x54f16877) >> 0x10) * 0x38b34ae5 ^ uVar15;
              uVar15 = ((uVar15 >> 0xf | uVar15 << 0x11) + uVar16) * 5 + 0xbcaa747;
              uVar16 = (*(int *)pbVar22 * -0x6a360000 | (uint)(*(int *)pbVar22 * 0x38b34ae5) >> 0xf)
                       * -0x5e1c746d ^ uVar16;
              uVar1 = (*(int *)(pbVar22 + 4) * 0x2e4c0000 |
                      (uint)(*(int *)(pbVar22 + 4) * -0x5e1c746d) >> 0xe) * 0x239b961b ^ uVar13;
              uVar16 = ((uVar16 >> 0x11 | uVar16 << 0xf) + uVar13) * 5 + 0x96cd1c35;
              uVar13 = ((uVar1 >> 0x13 | uVar1 << 0xd) + uVar3) * 5 + 0x32ac3b17;
              lVar19 = lVar19 + -1;
              pbVar22 = pbVar22 + 0x10;
            } while (lVar19 != 0);
          }
          param_2 = (uint *)((long)puVar17 + (long)(int)(uVar6 & 0xfffffff0));
          param_4 = (code *)(ulong)(uVar12 & 0xf);
          param_3 = (uint **)0x0;
          switch(uVar12 & 0xf) {
          case 0xf:
            param_3 = (uint **)((ulong)*(byte *)((long)param_2 + 0xe) << 0x10);
          case 0xe:
            param_3 = (uint **)(ulong)((uint)param_3 | (uint)*(byte *)((long)param_2 + 0xd) << 8);
          case 0xd:
            uVar6 = (uint)param_3 ^ (uint)(byte)param_2[3];
            uVar13 = (uVar6 * 0x2e4c0000 | uVar6 * -0x5e1c746d >> 0xe) * 0x239b961b ^ uVar13;
          case 0xc:
            param_3 = (uint **)((ulong)*(byte *)((long)param_2 + 0xb) << 0x18);
          case 0xb:
            param_3 = (uint **)(ulong)((uint)param_3 | (uint)*(byte *)((long)param_2 + 10) << 0x10);
          case 10:
            param_3 = (uint **)(ulong)((uint)param_3 ^ (uint)*(byte *)((long)param_2 + 9) << 8);
          case 9:
            uVar6 = (uint)param_3 ^ (uint)(byte)param_2[2];
            uVar1 = uVar6 * 0x38b34ae5;
            param_4 = (code *)(ulong)uVar1;
            uVar16 = (uVar6 * -0x6a360000 | uVar1 >> 0xf) * -0x5e1c746d ^ uVar16;
          case 8:
            param_3 = (uint **)((ulong)*(byte *)((long)param_2 + 7) << 0x18);
          case 7:
            param_3 = (uint **)(ulong)((uint)param_3 | (uint)*(byte *)((long)param_2 + 6) << 0x10);
          case 6:
            param_3 = (uint **)(ulong)((uint)param_3 ^ (uint)*(byte *)((long)param_2 + 5) << 8);
          case 5:
            uVar6 = (uint)param_3 ^ (uint)(byte)param_2[1];
            puVar4 = (uint *)(ulong)uVar6;
            uVar15 = (uVar6 * -0x68770000 | uVar6 * -0x54f16877 >> 0x10) * 0x38b34ae5 ^ uVar15;
          case 4:
            param_3 = (uint **)((ulong)*(byte *)((long)param_2 + 3) << 0x18);
          case 3:
            param_3 = (uint **)(ulong)((uint)param_3 | (uint)*(byte *)((long)param_2 + 2) << 0x10);
          case 2:
            param_3 = (uint **)(ulong)((uint)param_3 ^ (uint)*(byte *)((long)param_2 + 1) << 8);
          case 1:
            uVar6 = (uint)param_3 ^ (uint)(byte)*param_2;
            uVar3 = (uVar6 * -0x34f28000 | uVar6 * 0x239b961b >> 0x11) * -0x54f16877 ^ uVar3;
          case 0:
            iVar8 = 0;
            uVar3 = (uVar16 ^ uVar12) + (uVar15 ^ uVar12) + (uVar3 ^ uVar12) + (uVar13 ^ uVar12);
            uVar6 = uVar3 + (uVar15 ^ uVar12);
            uVar15 = uVar3 + (uVar16 ^ uVar12);
            uVar12 = uVar3 + (uVar13 ^ uVar12);
            uVar3 = (uVar3 ^ uVar3 >> 0x10) * -0x7a143595;
            uVar6 = (uVar6 ^ uVar6 >> 0x10) * -0x7a143595;
            uVar15 = (uVar15 ^ uVar15 >> 0x10) * -0x7a143595;
            uVar12 = (uVar12 ^ uVar12 >> 0x10) * -0x7a143595;
            uVar16 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51cb;
            uVar3 = (uVar6 ^ uVar6 >> 0xd) * -0x3d4d51cb;
            uVar3 = uVar3 ^ uVar3 >> 0x10;
            uVar6 = (uVar15 ^ uVar15 >> 0xd) * -0x3d4d51cb;
            uVar6 = uVar6 ^ uVar6 >> 0x10;
            uVar12 = (uVar12 ^ uVar12 >> 0xd) * -0x3d4d51cb;
            uVar12 = uVar12 ^ uVar12 >> 0x10;
            iVar14 = uVar3 + (uVar16 ^ uVar16 >> 0x10) + uVar6 + uVar12;
            uStack_68 = (uint *)CONCAT44(iVar14 + uVar3,iVar14);
            puVar23 = &uStack_5c;
            iStack_60 = iVar14 + uVar6;
            uStack_5c = iVar14 + uVar12;
            pbVar5 = (byte *)((long)puVar17 + (ulong)param_1[0x136]);
            *pbVar5 = 0x2d;
            pbVar22 = pbVar5 + 0x20;
            pbVar5[0x21] = 0x2e;
            pbVar5[0x22] = 0x2e;
            pbVar5[0x23] = 0x2e;
            pbVar5[0x24] = 0;
            do {
              uVar3 = *puVar23;
              iVar14 = 8;
              pbVar5 = pbVar22;
              do {
                pbVar22 = pbVar5 + -1;
                *pbVar5 = (&UNK_10dff9470)[(ulong)uVar3 & 0xf];
                uVar3 = uVar3 >> 4;
                iVar14 = iVar14 + -1;
                pbVar5 = pbVar22;
              } while (iVar14 != 0);
              iVar8 = iVar8 + 1;
              puVar23 = puVar23 + -1;
            } while (iVar8 != 4);
          }
        }
      }
    }
LAB_10977e4ec:
    *(uint **)(param_1 + 0x128) = puVar17;
  }
LAB_10977e4f0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar17;
  }
  ___stack_chk_fail();
  puVar17 = puVar4;
  (**(code **)(puVar4 + 2))();
  if (puVar17 == (uint *)0x0) {
    return (uint *)0x0;
  }
  puVar23 = param_3[2];
  if (*(code **)(param_2 + 10) == (code *)0x0) {
    if (*(uint **)(param_2 + 2) < puVar23) goto LAB_10977e660;
  }
  else {
    puVar18 = param_2;
    (**(code **)(param_2 + 10))(param_2,puVar23,0,0);
    if (puVar18 != (uint *)0x0) goto LAB_10977e660;
  }
  *(uint **)(param_2 + 4) = puVar23;
  puVar23 = param_2;
  func_0x00010975780c(param_2,*(undefined2 *)(param_3 + 1));
  if ((int)puVar23 == 0) {
    if (*(ushort *)(param_3 + 1) < 2) {
      *(byte *)puVar17 = 0;
      if (*(long *)(param_2 + 10) != 0) {
        if (*(long *)param_2 != 0) {
          (**(code **)(*(long *)(param_2 + 0xe) + 0x10))();
        }
        param_2[0] = 0;
        param_2[1] = 0;
      }
      param_2[0x10] = 0;
      param_2[0x11] = 0;
      param_2[0x12] = 0;
      param_2[0x13] = 0;
    }
    else {
      uVar3 = (uint)(*(ushort *)(param_3 + 1) >> 1);
      puVar18 = param_2 + 0x10;
      pbVar22 = (byte *)(*(long *)puVar18 + 1);
      puVar23 = puVar17;
      do {
        puVar24 = puVar23;
        if (pbVar22[-1] == 0) {
          iVar8 = (int)(char)*pbVar22;
          (*param_4)();
          if (iVar8 != 0) {
            puVar24 = (uint *)((long)puVar23 + 1);
            *(byte *)puVar23 = *pbVar22;
          }
        }
        pbVar22 = pbVar22 + 2;
        uVar3 = uVar3 - 1;
        puVar23 = puVar24;
      } while (uVar3 != 0);
      *(byte *)puVar24 = 0;
      if (*(long *)(param_2 + 10) != 0) {
        if (*(long *)param_2 != 0) {
          (**(code **)(*(long *)(param_2 + 0xe) + 0x10))();
        }
        param_2[0] = 0;
        param_2[1] = 0;
      }
      puVar18[0] = 0;
      puVar18[1] = 0;
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      if (puVar24 != puVar17) {
        return puVar17;
      }
    }
  }
LAB_10977e660:
  (**(code **)(puVar4 + 4))(puVar4,puVar17);
  *(undefined2 *)(param_3 + 1) = 0;
  param_3[2] = (uint *)0x0;
  if (param_3[3] != (uint *)0x0) {
    (**(code **)(puVar4 + 4))(puVar4);
  }
  param_3[3] = (uint *)0x0;
  return (uint *)0x0;
}



/* Entry: 10977e52c; end: 10977e6b3;  */

char * FUN_10977e52c(char *param_1,long *param_2,long param_3,code *param_4)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  
  pcVar2 = param_1;
  (**(code **)(param_1 + 8))(param_1,(*(ushort *)(param_3 + 8) >> 1) + 1);
  if (pcVar2 == (char *)0x0) {
    return (char *)0x0;
  }
  uVar4 = *(ulong *)(param_3 + 0x10);
  if ((code *)param_2[5] == (code *)0x0) {
    if ((ulong)param_2[1] < uVar4) goto LAB_10977e660;
  }
  else {
    plVar3 = param_2;
    (*(code *)param_2[5])(param_2,uVar4,0,0);
    if (plVar3 != (long *)0x0) goto LAB_10977e660;
  }
  param_2[2] = uVar4;
  plVar3 = param_2;
  func_0x00010975780c(param_2,*(undefined2 *)(param_3 + 8));
  if ((int)plVar3 == 0) {
    if (*(ushort *)(param_3 + 8) < 2) {
      *pcVar2 = '\0';
      if (param_2[5] != 0) {
        if (*param_2 != 0) {
          (**(code **)(param_2[7] + 0x10))();
        }
        *param_2 = 0;
      }
      param_2[8] = 0;
      param_2[9] = 0;
    }
    else {
      uVar7 = (uint)(*(ushort *)(param_3 + 8) >> 1);
      pcVar8 = (char *)(param_2[8] + 1);
      pcVar5 = pcVar2;
      do {
        pcVar6 = pcVar5;
        if (pcVar8[-1] == '\0') {
          iVar1 = (int)*pcVar8;
          (*param_4)();
          if (iVar1 != 0) {
            pcVar6 = pcVar5 + 1;
            *pcVar5 = *pcVar8;
          }
        }
        pcVar8 = pcVar8 + 2;
        uVar7 = uVar7 - 1;
        pcVar5 = pcVar6;
      } while (uVar7 != 0);
      *pcVar6 = '\0';
      if (param_2[5] != 0) {
        if (*param_2 != 0) {
          (**(code **)(param_2[7] + 0x10))();
        }
        *param_2 = 0;
      }
      param_2[8] = 0;
      param_2[9] = 0;
      if (pcVar6 != pcVar2) {
        return pcVar2;
      }
    }
  }
LAB_10977e660:
  (**(code **)(param_1 + 0x10))(param_1,pcVar2);
  *(undefined2 *)(param_3 + 8) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  if (*(long *)(param_3 + 0x18) != 0) {
    (**(code **)(param_1 + 0x10))(param_1);
  }
  *(undefined8 *)(param_3 + 0x18) = 0;
  return (char *)0x0;
}



/* Entry: 10977e6b4; end: 10977e6eb;  */

uint FUN_10977e6b4(uint param_1)

{
  if (0x7f < param_1) {
    return 0;
  }
  return 1 << (ulong)(param_1 & 7) & (uint)(byte)(&UNK_10dff9480)[param_1 >> 3];
}



/* Entry: 10977e6ec; end: 10977e85f;  */

char * FUN_10977e6ec(char *param_1,long *param_2,long param_3,code *param_4)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  
  pcVar2 = param_1;
  (**(code **)(param_1 + 8))(param_1,(ulong)*(ushort *)(param_3 + 8) + 1);
  if (pcVar2 == (char *)0x0) {
    return (char *)0x0;
  }
  uVar4 = *(ulong *)(param_3 + 0x10);
  if ((code *)param_2[5] == (code *)0x0) {
    if ((ulong)param_2[1] < uVar4) goto LAB_10977e778;
  }
  else {
    plVar3 = param_2;
    (*(code *)param_2[5])(param_2,uVar4,0,0);
    if (plVar3 != (long *)0x0) goto LAB_10977e778;
  }
  param_2[2] = uVar4;
  plVar3 = param_2;
  func_0x00010975780c(param_2,*(undefined2 *)(param_3 + 8));
  if ((int)plVar3 == 0) {
    uVar7 = (uint)*(ushort *)(param_3 + 8);
    if (*(ushort *)(param_3 + 8) == 0) {
      *pcVar2 = '\0';
      if (param_2[5] != 0) {
        if (*param_2 != 0) {
          (**(code **)(param_2[7] + 0x10))();
        }
        *param_2 = 0;
      }
      param_2[8] = 0;
      param_2[9] = 0;
    }
    else {
      pcVar8 = (char *)param_2[8];
      pcVar5 = pcVar2;
      do {
        iVar1 = (int)*pcVar8;
        (*param_4)();
        pcVar6 = pcVar5;
        if (iVar1 != 0) {
          pcVar6 = pcVar5 + 1;
          *pcVar5 = *pcVar8;
        }
        pcVar8 = pcVar8 + 1;
        uVar7 = uVar7 - 1;
        pcVar5 = pcVar6;
      } while (uVar7 != 0);
      *pcVar6 = '\0';
      if (param_2[5] != 0) {
        if (*param_2 != 0) {
          (**(code **)(param_2[7] + 0x10))();
        }
        *param_2 = 0;
      }
      param_2[8] = 0;
      param_2[9] = 0;
      if (pcVar6 != pcVar2) {
        return pcVar2;
      }
    }
  }
LAB_10977e778:
  (**(code **)(param_1 + 0x10))(param_1,pcVar2);
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined2 *)(param_3 + 8) = 0;
  if (*(long *)(param_3 + 0x18) != 0) {
    (**(code **)(param_1 + 0x10))(param_1);
  }
  *(undefined8 *)(param_3 + 0x18) = 0;
  return (char *)0x0;
}



/* Entry: 10977e860; end: 10977e87b;  */

bool FUN_10977e860(uint param_1)

{
  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}



/* Entry: 10977e87c; end: 10977e8db;  */

void FUN_10977e87c(int param_1,undefined8 param_2,char *param_3,uint param_4)

{
  ulong uVar1;
  char *pcVar2;
  char *pcStack_28;
  
  FUN_1097782dc(param_1,param_2,&pcStack_28);
  if (param_1 == 0) {
    if (1 < param_4) {
      uVar1 = (ulong)param_4;
      pcVar2 = param_3;
      do {
        param_3 = pcVar2;
        if (*pcStack_28 == '\0') break;
        param_3 = pcVar2 + 1;
        *pcVar2 = *pcStack_28;
        uVar1 = uVar1 - 1;
        pcStack_28 = pcStack_28 + 1;
        pcVar2 = param_3;
      } while (1 < uVar1);
    }
    *param_3 = '\0';
  }
  return;
}



/* Entry: 10977e8dc; end: 10977e95f;  */

int FUN_10977e8dc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uStack_38;
  
  uVar4 = *(ulong *)(param_1 + 0x20);
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
    if (0xfffffffe < uVar4) {
      uVar1 = 0xffffffff;
    }
    if (uVar4 != 0) {
      iVar5 = 0;
      do {
        lVar2 = param_1;
        FUN_1097782dc(param_1,iVar5,&uStack_38);
        if (((int)lVar2 == 0) && (uVar3 = param_2, _strcmp(param_2,uStack_38), (int)uVar3 == 0)) {
          return iVar5;
        }
        iVar5 = iVar5 + 1;
      } while ((int)uVar1 != iVar5);
    }
  }
  return 0;
}



/* Entry: 10977e960; end: 10977e9d7;  */

long FUN_10977e960(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x10) + 0x60);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010977e96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  return 0x96;
}



/* Entry: 10977e9d8; end: 10977ebb7;  */

uint FUN_10977e9d8(long param_1,long param_2,uint *param_3,int param_4)

{
  bool bVar1;
  ushort *puVar2;
  byte *pbVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ushort *puVar17;
  ushort *puVar18;
  
  uVar13 = (uint)(*(ushort *)(param_2 + 6) >> 8);
  uVar11 = (*(ushort *)(param_2 + 6) & 0xff00ff) << 8;
  uVar8 = uVar13 | uVar11;
  if (1 < uVar8) {
    uVar15 = 0;
    puVar2 = (ushort *)(*(long *)(param_1 + 0x330) + *(long *)(param_1 + 0x338));
    uVar8 = uVar8 >> 1;
    uVar16 = (ulong)(uVar13 & 0xfffe | uVar11);
    uVar13 = *param_3 + param_4;
    puVar17 = (ushort *)(param_2 + uVar16 + 0x10);
    puVar18 = (ushort *)(param_2 + 0xe);
    while( true ) {
      uVar11 = (uint)(*puVar17 >> 8) | (*puVar17 & 0xff00ff) << 8;
      if ((param_4 == 0) && (uVar13 < uVar11)) break;
      uVar9 = (uint)(*puVar18 >> 8) | (*puVar18 & 0xff00ff) << 8;
      if (uVar13 <= uVar11) {
        uVar13 = uVar11;
      }
      pbVar3 = (byte *)((long)puVar17 + uVar16);
      puVar4 = (ushort *)(pbVar3 + uVar16);
      bVar12 = uVar8 - 1 <= uVar15;
      uVar10 = uVar13;
      while (uVar13 = uVar10, uVar13 <= uVar9) {
        uVar7 = (int)(short)((ushort)*pbVar3 << 8) | (uint)pbVar3[1];
        uVar14 = (uint)(*puVar4 >> 8) | (*puVar4 & 0xff00ff) << 8;
        bVar1 = puVar2 < (ushort *)((long)puVar4 + (ulong)uVar14 + 2);
        uVar10 = 0;
        if ((uVar14 == 0 || ((uVar11 != 0xffff || uVar9 != 0xffff) || !bVar12)) || !bVar1) {
          uVar10 = uVar14;
        }
        if ((uVar14 != 0 && ((uVar11 == 0xffff && uVar9 == 0xffff) && bVar12)) && bVar1) {
          uVar7 = 1;
        }
        if (uVar10 == 0) {
          uVar10 = uVar7 + uVar13;
          uVar14 = uVar10 & 0xffff;
          if (param_4 == 0) {
            return uVar14;
          }
          if (*(uint *)(param_1 + 0x20) <= uVar14) {
            if (((int)uVar10 < 0) && (-1 < (int)(uVar7 + uVar9))) {
              uVar14 = 0;
              uVar13 = -uVar7;
            }
            else {
              if ((0xffff < (int)uVar10) || ((int)(uVar7 + uVar9) < 0x10000)) break;
              uVar14 = 0;
              uVar13 = 0x10000 - uVar7;
            }
          }
        }
        else {
          if ((uVar10 == 0xffff) ||
             ((puVar5 = (ushort *)((long)puVar4 + (ulong)(uVar10 + (uVar13 - uVar11) * 2)),
              param_4 != 0 && (puVar2 < puVar5)))) break;
          uVar6 = *puVar5;
          uVar10 = (uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8;
          uVar14 = 0;
          if ((uVar10 != 0) &&
             (uVar14 = uVar10 + uVar7 & 0xffff, *(uint *)(param_1 + 0x20) <= uVar14)) {
            uVar14 = 0;
          }
        }
        if ((param_4 == 0) || (uVar14 != 0)) goto LAB_10977eb88;
        uVar10 = uVar13 + 1;
        if (0xfffe < uVar13) {
          uVar14 = 0;
          goto LAB_10977eb98;
        }
      }
      uVar15 = uVar15 + 1;
      puVar17 = puVar17 + 1;
      puVar18 = puVar18 + 1;
      if (uVar15 == uVar8) {
        uVar14 = 0;
LAB_10977eb88:
        if (param_4 == 0) {
          return uVar14;
        }
LAB_10977eb98:
        *param_3 = uVar13;
        return uVar14;
      }
    }
  }
  return 0;
}



/* Entry: 10977ebb8; end: 10977f003;  */

uint FUN_10977ebb8(long *param_1,uint *param_2,int param_3)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ushort *puVar5;
  byte *pbVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  long *plVar14;
  uint uVar15;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  ushort *puVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  ushort *puVar29;
  long lVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  ulong uVar16;
  
  lVar30 = param_1[3];
  uVar7 = *(ushort *)(lVar30 + 6);
  uVar31 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
  if (uVar31 < 2) {
    return 0;
  }
  uVar13 = 0;
  lVar25 = *param_1;
  puVar5 = (ushort *)(*(long *)(lVar25 + 0x330) + *(long *)(lVar25 + 0x338));
  uVar4 = *param_2 + param_3;
  uVar8 = ((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8) >> 1;
  uVar24 = (ulong)uVar8;
  uVar28 = (ulong)uVar31 & 0xfffe;
  lVar2 = lVar30 + 0xe;
  lVar3 = uVar28 + 2;
  uVar19 = uVar24;
  do {
    iVar20 = (int)uVar19;
    uVar31 = iVar20 + uVar13;
    uVar10 = uVar31 >> 1;
    uVar16 = (ulong)uVar10;
    puVar29 = (ushort *)(lVar2 + ((ulong)uVar31 & 0xfffffffe));
    uVar7 = *puVar29;
    uVar27 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
    puVar29 = (ushort *)((long)puVar29 + lVar3);
    uVar7 = *puVar29;
    uVar26 = uVar27;
    uVar32 = uVar4;
    uVar33 = uVar10;
    if (((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8) <= uVar4) {
      if (uVar4 <= uVar27) {
        uVar17 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
        pbVar6 = (byte *)((long)puVar29 + uVar28);
        uVar21 = (int)(short)((ushort)*pbVar6 << 8) | (uint)pbVar6[1];
        puVar29 = (ushort *)(pbVar6 + uVar28);
        uVar9 = (uint)(*puVar29 >> 8) | (*puVar29 & 0xff00ff) << 8;
        bVar11 = uVar8 - 1 <= uVar10;
        bVar12 = puVar5 < (ushort *)((long)puVar29 + (ulong)uVar9 + 2);
        if ((((uVar17 == 0xffff && uVar27 == 0xffff) && bVar11) && uVar9 != 0) && bVar12) {
          uVar21 = 1;
        }
        uVar18 = 0;
        if ((((uVar17 != 0xffff || uVar27 != 0xffff) || !bVar11) || uVar9 == 0) || !bVar12) {
          uVar18 = uVar9;
        }
        if ((*(byte *)(param_1 + 4) >> 1 & 1) != 0) {
          uVar9 = uVar10 + 1;
          uVar19 = (ulong)uVar9;
          uVar15 = uVar10;
          if (uVar18 == 0xffff) {
            uVar15 = uVar10 + 1;
          }
          if (uVar31 < 2) goto LAB_10977ee28;
          uVar34 = (ulong)((uVar10 - 1) * 2);
          uVar7 = *(ushort *)(lVar2 + uVar34);
          if (((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8) < uVar4) goto LAB_10977ee28;
          uVar33 = iVar20 + uVar13 >> 1;
          uVar22 = (ulong)(uVar10 - 1) * 2;
          uVar31 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
          goto LAB_10977edbc;
        }
        if (uVar18 != 0xffff) goto LAB_10977ef20;
        break;
      }
      uVar13 = uVar10 + 1;
      uVar16 = uVar19;
    }
    uVar19 = uVar16;
  } while (uVar13 < (uint)uVar16);
LAB_10977ec74:
  uVar31 = 0;
  uVar27 = uVar26;
  uVar33 = uVar10;
  goto LAB_10977ec78;
  while( true ) {
    uVar34 = uVar22 & 0xfffffffe;
    uVar7 = *(ushort *)(lVar2 + uVar34);
    uVar31 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
    if (((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8) < uVar4) break;
LAB_10977edbc:
    uVar26 = uVar31;
    uVar22 = uVar22 - 2;
    puVar1 = (ushort *)(lVar2 + lVar3 + uVar34);
    pbVar6 = (byte *)((long)puVar1 + uVar28);
    puVar29 = (ushort *)(pbVar6 + uVar28);
    uVar18 = (uint)(*puVar29 >> 8) | (*puVar29 & 0xff00ff) << 8;
    uVar33 = uVar33 - 1;
    if (uVar18 != 0xffff) {
      uVar15 = uVar33;
    }
    if (uVar22 == 0xfffffffffffffffe) {
      uVar33 = 0;
      break;
    }
  }
  uVar7 = *puVar1;
  uVar17 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
  uVar21 = (int)(short)((ushort)*pbVar6 << 8) | (uint)pbVar6[1];
LAB_10977ee28:
  if (uVar15 == uVar9) {
    if (uVar33 != uVar10) {
      uVar26 = uVar27;
    }
    if (uVar9 < uVar8) {
      puVar1 = (ushort *)(lVar2 + uVar19 * 2);
      uVar7 = *(ushort *)((long)puVar1 + lVar3);
      if (((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8) <= uVar4) {
        puVar29 = (ushort *)(lVar30 + uVar24 * 8 + 0xe);
        lVar30 = ((iVar20 + uVar13 >> 1) - uVar24) + 2;
        uVar31 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
        do {
          uVar17 = uVar31;
          puVar23 = puVar1;
          uVar18 = (uint)(puVar23[uVar24 * 3 + 1] >> 8) | (puVar23[uVar24 * 3 + 1] & 0xff00ff) << 8;
          uVar15 = (uint)uVar16;
          if (uVar18 != 0xffff) {
            uVar15 = (uint)uVar19;
          }
          uVar16 = (ulong)uVar15;
          uVar33 = uVar8;
          if (lVar30 == 0) goto LAB_10977efa8;
          uVar19 = uVar19 + 1;
          uVar7 = *(ushort *)((long)puVar23 + uVar28 + 4);
          lVar30 = lVar30 + 1;
          puVar1 = puVar23 + 1;
          uVar31 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
        } while (((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8) <= uVar4);
        puVar29 = (ushort *)((long)(puVar23 + 1) + uVar28 + 2);
        uVar33 = (uint)uVar19;
LAB_10977efa8:
        uVar27 = (uint)(*puVar23 >> 8) | (*puVar23 & 0xff00ff) << 8;
        uVar33 = uVar33 - 1;
        if (uVar15 != uVar10) {
          uVar21 = (int)(short)((ushort)(byte)puVar23[uVar24 * 2 + 1] << 8) |
                   (uint)*(byte *)((long)puVar23 + uVar24 * 4 + 3);
          uVar26 = uVar27;
          goto LAB_10977eed8;
        }
        uVar31 = 0;
        goto LAB_10977ec78;
      }
    }
    goto LAB_10977ec74;
  }
LAB_10977eed8:
  uVar27 = uVar26;
  bVar12 = uVar15 != uVar33;
  uVar33 = uVar15;
  if (bVar12) {
    puVar29 = (ushort *)(lVar2 + (ulong)(uVar15 << 1));
    uVar7 = *puVar29;
    uVar27 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
    puVar29 = (ushort *)((long)puVar29 + lVar3);
    uVar7 = *puVar29;
    uVar17 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
    pbVar6 = (byte *)((long)puVar29 + uVar28);
    uVar21 = (int)(short)((ushort)*pbVar6 << 8) | (uint)pbVar6[1];
    puVar29 = (ushort *)(pbVar6 + uVar28);
    uVar18 = (uint)(*puVar29 >> 8) | (*puVar29 & 0xff00ff) << 8;
  }
LAB_10977ef20:
  if (uVar18 == 0) {
    uVar13 = uVar21 + uVar4;
    uVar31 = uVar13 & 0xffff;
    if (param_3 == 0) {
      return uVar31;
    }
    if (*(uint *)(lVar25 + 0x20) <= uVar31) {
      if (((int)uVar13 < 0) && (-1 < (int)(uVar27 + uVar21))) {
        uVar31 = 0;
        uVar32 = -uVar21;
      }
      else {
        uVar31 = 0;
        uVar32 = 0x10000 - uVar21;
        if ((int)(uVar27 + uVar21) < 0x10000 || 0xffff < (int)uVar13) {
          uVar32 = uVar4;
        }
      }
    }
    goto LAB_10977ec80;
  }
  puVar29 = (ushort *)((long)puVar29 + (ulong)(uVar18 + (uVar4 - uVar17) * 2));
  if ((param_3 != 0) && (puVar5 < puVar29)) {
    uVar31 = 0;
    goto LAB_10977ec80;
  }
  uVar7 = *puVar29;
  uVar31 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
  if (uVar31 == 0) {
    uVar31 = 0;
  }
  else {
    uVar31 = uVar31 + uVar21 & 0xffff;
    if (*(uint *)(lVar25 + 0x20) <= uVar31) {
      uVar31 = 0;
    }
  }
LAB_10977ec78:
  if (param_3 == 0) {
    return uVar31;
  }
LAB_10977ec80:
  if ((uVar27 < uVar32) && (uVar33 + 1 == uVar8)) {
    return 0;
  }
  plVar14 = param_1;
  FUN_10977f004();
  if ((int)plVar14 == 0) {
    *(uint *)(param_1 + 5) = uVar32;
    if (uVar31 == 0) {
      FUN_10977f10c(param_1);
      uVar31 = *(uint *)((long)param_1 + 0x2c);
      if (uVar31 == 0) {
        return 0;
      }
      uVar32 = *(uint *)(param_1 + 5);
    }
    else {
      *(uint *)((long)param_1 + 0x2c) = uVar31;
    }
  }
  else if (uVar31 == 0) {
    return 0;
  }
  *param_2 = uVar32;
  return uVar31;
}



/* Entry: 10977f004; end: 10977f10b;  */

undefined8 FUN_10977f004(long *param_1,ulong param_2)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  
  uVar2 = *(uint *)(param_1 + 6);
  iVar8 = uVar2 - (uint)param_2;
  if ((uint)param_2 <= uVar2 && iVar8 != 0) {
    uVar4 = uVar2 * 2;
    uVar9 = param_2 & 0xffffffff;
    uVar11 = (param_2 & 0xffffffff) << 1;
    do {
      puVar1 = (ushort *)(param_1[3] + 0xe + (uVar11 & 0xfffffffe));
      uVar3 = *puVar1;
      uVar5 = (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
      *(uint *)((long)param_1 + 0x3c) = uVar5;
      puVar1 = (ushort *)((long)puVar1 + (ulong)(uVar4 + 2));
      uVar3 = *puVar1;
      uVar6 = (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
      *(uint *)(param_1 + 7) = uVar6;
      pbVar10 = (byte *)((long)puVar1 + (ulong)uVar4);
      *(uint *)(param_1 + 8) = (int)(short)((ushort)*pbVar10 << 8) | (uint)pbVar10[1];
      puVar1 = (ushort *)(pbVar10 + uVar4);
      uVar7 = (uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8;
      if ((uVar2 - 1 <= uVar9) && (uVar6 == 0xffff && uVar5 == 0xffff)) {
        if (uVar7 == 0) {
          pbVar10 = (byte *)0x0;
          goto LAB_10977f0f8;
        }
        if ((byte *)(*(long *)(*param_1 + 0x330) + *(long *)(*param_1 + 0x338)) <
            (byte *)((long)puVar1 + (ulong)uVar7 + 2)) {
          *(undefined4 *)(param_1 + 8) = 1;
          pbVar10 = (byte *)0x0;
          goto LAB_10977f0f8;
        }
      }
      if (uVar7 != 0xffff) {
        pbVar10 = (byte *)0x0;
        if (uVar7 != 0) {
          pbVar10 = (byte *)((long)puVar1 + (ulong)uVar7);
        }
LAB_10977f0f8:
        param_1[9] = (long)pbVar10;
        *(int *)((long)param_1 + 0x34) = (int)uVar9;
        return 0;
      }
      uVar9 = uVar9 + 1;
      uVar11 = uVar11 + 2;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return 0xffffffff;
}



/* Entry: 10977f10c; end: 10977f23f;  */

void FUN_10977f10c(long *param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  
  lVar11 = *param_1;
  lVar4 = *(long *)(lVar11 + 0x330);
  lVar5 = *(long *)(lVar11 + 0x338);
  uVar6 = *(uint *)(param_1 + 7);
  uVar10 = uVar6;
  if (uVar6 < (int)param_1[5] + 1U) {
    uVar10 = (int)param_1[5] + 1;
  }
  do {
    uVar1 = *(uint *)((long)param_1 + 0x3c);
    if (uVar10 <= uVar1) {
      iVar2 = (int)param_1[8];
      if (param_1[9] == 0) {
        do {
          uVar6 = uVar10 + iVar2;
          uVar8 = uVar6 & 0xffff;
          if (uVar8 < *(uint *)(lVar11 + 0x20)) {
            uVar9 = uVar10;
            if (uVar8 != 0) goto LAB_10977f228;
          }
          else if (((-1 < (int)uVar6) || (uVar9 = -iVar2, (int)(iVar2 + uVar1) < 0)) &&
                  ((0xffff < (int)uVar6 || (uVar9 = 0x10000 - iVar2, (int)(iVar2 + uVar1) < 0x10000)
                   ))) break;
          uVar10 = uVar9 + 1;
        } while (uVar10 <= uVar1);
      }
      else {
        puVar7 = (ushort *)(param_1[9] + (ulong)((uVar10 - uVar6) * 2));
        if (puVar7 <= (ushort *)(lVar4 + lVar5)) {
          do {
            uVar6 = (uint)(*puVar7 >> 8) | (*puVar7 & 0xff00ff) << 8;
            uVar8 = uVar6 + iVar2 & 0xffff;
            if (uVar6 != 0 && uVar8 != 0) goto LAB_10977f228;
            uVar10 = uVar10 + 1;
            puVar7 = puVar7 + 1;
          } while (uVar10 <= uVar1);
        }
      }
    }
    plVar3 = param_1;
    FUN_10977f004(param_1,*(int *)((long)param_1 + 0x34) + 1);
    if ((int)plVar3 < 0) {
      uVar8 = 0;
      uVar10 = 0xffffffff;
LAB_10977f228:
      *(uint *)(param_1 + 5) = uVar10;
      *(uint *)((long)param_1 + 0x2c) = uVar8;
      return;
    }
    uVar6 = *(uint *)(param_1 + 7);
    if (uVar10 <= uVar6) {
      uVar10 = uVar6;
    }
  } while( true );
}



/* Entry: 10977f240; end: 10977f363;  */

uint FUN_10977f240(long *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar3 = *(uint *)(param_1[3] + 0xc);
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  if (uVar3 != 0) {
    uVar9 = 0;
    uVar1 = *param_2 + param_3;
    uVar10 = uVar3;
    do {
      uVar8 = uVar9 + uVar10 >> 1;
      puVar2 = (uint *)(param_1[3] + 0x10 + (ulong)((uVar8 * 2 + (uVar9 + uVar10 >> 1)) * 4));
      uVar4 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar5 = (puVar2[1] & 0xff00ff00) >> 8 | (puVar2[1] & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      uVar6 = uVar1 - uVar4;
      uVar7 = uVar8;
      if (uVar4 <= uVar1) {
        if (uVar1 <= uVar5) {
          uVar9 = (puVar2[2] & 0xff00ff00) >> 8 | (puVar2[2] & 0xff00ff) << 8;
          uVar10 = uVar9 >> 0x10 | uVar9 << 0x10;
          uVar9 = 0;
          if (!CARRY4(uVar6,uVar10)) {
            uVar9 = uVar10 + uVar6;
          }
          goto joined_r0x00010977f2e4;
        }
        uVar9 = uVar8 + 1;
        uVar7 = uVar10;
      }
      uVar10 = uVar7;
    } while (uVar9 < uVar10);
    uVar9 = 0;
joined_r0x00010977f2e4:
    if (param_3 == 0) {
      return uVar9;
    }
    if ((uVar1 <= uVar5) || (uVar8 = uVar8 + 1, uVar8 != uVar3)) {
      *(undefined1 *)(param_1 + 5) = 1;
      param_1[6] = (ulong)uVar1;
      param_1[8] = (ulong)uVar8;
      if ((uVar9 == 0) || (*(uint *)(*param_1 + 0x20) <= uVar9)) {
        FUN_10977f364(param_1);
        if ((char)param_1[5] == '\0') {
          uVar9 = 0;
        }
        else {
          uVar9 = *(uint *)(param_1 + 7);
        }
      }
      else {
        *(uint *)(param_1 + 7) = uVar9;
      }
      *param_2 = (int)param_1[6];
      return uVar9;
    }
  }
  return 0;
}



/* Entry: 10977f364; end: 10977f537;  */

void FUN_10977f364(long *param_1)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  
  uVar16 = param_1[8];
  if (uVar16 < (ulong)param_1[9]) {
    uVar17 = param_1[6] + 1;
    do {
      pbVar15 = (byte *)(param_1[3] + 0x10 + uVar16 * 0xc);
      bVar2 = *pbVar15;
      uVar14 = (ulong)bVar2 * 0x1000000;
      bVar3 = pbVar15[1];
      uVar18 = (ulong)bVar3;
      bVar4 = pbVar15[2];
      uVar8 = (ulong)bVar4;
      bVar5 = pbVar15[3];
      uVar9 = (ulong)bVar5;
      uVar10 = uVar14 | uVar18 << 0x10 | uVar8 << 8 | uVar9;
      uVar19 = (ulong)pbVar15[4] << 0x18 | (ulong)pbVar15[5] << 0x10 | (ulong)pbVar15[6] << 8;
      uVar13 = uVar19 | pbVar15[7];
      uVar1 = uVar17;
      if (uVar17 <= uVar10) {
        uVar1 = uVar10;
      }
      uVar10 = uVar1;
      if (uVar1 <= uVar13) {
        lVar12 = 0;
        bVar6 = pbVar15[0xb];
        uVar10 = pbVar15[7] + uVar19 + 1;
        uVar7 = (uint)pbVar15[9] << 0x10 | (uint)pbVar15[8] << 0x18 | (uint)pbVar15[10] << 8;
        uVar14 = ((uVar14 + uVar18 * 0x10000 + uVar8 * 0x100 + uVar9) - uVar1) + 0xffffffff;
        do {
          if (uVar14 < ((ulong)pbVar15[8] << 0x18 | (ulong)pbVar15[9] << 0x10 |
                        (ulong)pbVar15[10] << 8 | (ulong)bVar6)) {
LAB_10977f4c8:
            uVar10 = uVar1 + lVar12;
            break;
          }
          iVar11 = (int)lVar12;
          if ((((uVar7 | bVar6) + (int)uVar1) - (uint)bVar5) + (uint)bVar4 * -0x100 +
              (uint)bVar3 * -0x10000 + (uint)bVar2 * -0x1000000 + iVar11 != 0) {
            uVar7 = uVar7 | bVar6;
            if (((uVar7 + (int)uVar1) - (uint)bVar5) + (uint)bVar4 * -0x100 + (uint)bVar3 * -0x10000
                + (uint)bVar2 * -0x1000000 + iVar11 < *(uint *)(*param_1 + 0x20)) {
              uVar9 = uVar18 << 0x10 | (ulong)bVar2 << 0x18 | uVar8 << 8 | uVar9;
              if (uVar17 <= uVar9) {
                uVar17 = uVar9;
              }
              param_1[6] = uVar17 + lVar12;
              *(uint *)(param_1 + 7) =
                   ((uVar7 + (int)uVar17) - (uint)bVar5) + (uint)bVar4 * -0x100 +
                   (uint)bVar3 * -0x10000 + (uint)bVar2 * -0x1000000 + iVar11;
              param_1[8] = uVar16;
              return;
            }
            goto LAB_10977f4c8;
          }
          if ((uVar1 - 0xffffffff) + lVar12 == 0) goto LAB_10977f4dc;
          lVar12 = lVar12 + 1;
          uVar14 = uVar14 - 1;
        } while ((uVar1 + lVar12) - 1 < uVar13);
      }
      uVar16 = uVar16 + 1;
      uVar17 = uVar10;
    } while (uVar16 != param_1[9]);
  }
LAB_10977f4dc:
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



/* Entry: 10977f538; end: 10977f64f;  */

uint FUN_10977f538(long *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = *(uint *)(param_1[3] + 0xc);
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  if (uVar3 != 0) {
    uVar8 = 0;
    uVar1 = *param_2 + param_3;
    uVar9 = uVar3;
    do {
      uVar7 = uVar8 + uVar9 >> 1;
      puVar2 = (uint *)(param_1[3] + 0x10 + (ulong)((uVar7 * 2 + (uVar8 + uVar9 >> 1)) * 4));
      uVar4 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
      uVar5 = (puVar2[1] & 0xff00ff00) >> 8 | (puVar2[1] & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      uVar6 = uVar7;
      if ((uVar4 >> 0x10 | uVar4 << 0x10) <= uVar1) {
        if (uVar1 <= uVar5) {
          uVar8 = (puVar2[2] & 0xff00ff00) >> 8 | (puVar2[2] & 0xff00ff) << 8;
          uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
          goto joined_r0x00010977f5d0;
        }
        uVar8 = uVar7 + 1;
        uVar6 = uVar9;
      }
      uVar9 = uVar6;
    } while (uVar8 < uVar9);
    uVar8 = 0;
joined_r0x00010977f5d0:
    if (param_3 == 0) {
      return uVar8;
    }
    if ((uVar1 <= uVar5) || (uVar7 = uVar7 + 1, uVar7 != uVar3)) {
      *(undefined1 *)(param_1 + 5) = 1;
      param_1[6] = (ulong)uVar1;
      param_1[8] = (ulong)uVar7;
      if ((uVar8 == 0) || (*(uint *)(*param_1 + 0x20) <= uVar8)) {
        FUN_10977f650(param_1);
        if ((char)param_1[5] == '\0') {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(param_1 + 7);
        }
      }
      else {
        *(uint *)(param_1 + 7) = uVar8;
      }
      *param_2 = (int)param_1[6];
      return uVar8;
    }
  }
  return 0;
}



/* Entry: 10977f650; end: 10977f82b;  */

void FUN_10977f650(long *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = param_1[8];
  if (uVar3 < (ulong)param_1[9]) {
    uVar4 = param_1[6] + 1;
    lVar5 = param_1[3] + uVar3 * 0xc + 0x1b;
    do {
      uVar1 = (*(uint *)(lVar5 + -0xb) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar5 + -0xb) & 0xff00ff) << 8;
      uVar6 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
      uVar1 = (*(uint *)(lVar5 + -7) & 0xff00ff00) >> 8 | (*(uint *)(lVar5 + -7) & 0xff00ff) << 8;
      uVar2 = (*(uint *)(lVar5 + -3) & 0xff00ff00) >> 8 | (*(uint *)(lVar5 + -3) & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      if (uVar4 <= uVar6) {
        uVar4 = uVar6;
      }
      if ((uVar4 <= (uVar1 >> 0x10 | uVar1 << 0x10) && uVar2 != 0) &&
         (uVar2 < *(uint *)(*param_1 + 0x20))) {
        param_1[6] = uVar4;
        *(uint *)(param_1 + 7) = uVar2;
        param_1[8] = uVar3;
        return;
      }
      lVar5 = lVar5 + 0xc;
      uVar3 = uVar3 + 1;
    } while (param_1[9] != uVar3);
  }
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



/* Entry: 10977f82c; end: 10977f897;  */

int FUN_10977f82c(long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  int iStack_24;
  
  iStack_24 = 0;
  iVar1 = 0;
  if (*(uint *)(param_1 + 0x30) < param_2) {
    *(undefined8 *)(param_1 + 0x40) = param_3;
    func_0x000109755910(param_3,4,*(uint *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x38),
                        &iStack_24);
    *(undefined8 *)(param_1 + 0x38) = param_3;
    iVar1 = iStack_24;
    if (iStack_24 == 0) {
      *(uint *)(param_1 + 0x30) = param_2;
    }
  }
  return iVar1;
}



/* Entry: 10977f898; end: 10977f923;  */

uint * FUN_10977f898(long param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar6 = (ulong)uVar1;
  lVar2 = param_1;
  FUN_10977f82c(param_1,uVar1 + 1);
  if ((int)lVar2 == 0) {
    puVar3 = *(uint **)(param_1 + 0x38);
    if (uVar1 == 0) {
      uVar6 = 0;
    }
    else {
      param_2 = param_2 + 1;
      puVar4 = puVar3;
      uVar5 = uVar6;
      do {
        *puVar4 = (uint)(byte)*param_2 << 0x10 | (uint)*(byte *)((long)param_2 + 1) << 8 |
                  (uint)*(byte *)((long)param_2 + 2);
        param_2 = (uint *)((long)param_2 + 5);
        uVar5 = uVar5 - 1;
        puVar4 = puVar4 + 1;
      } while (uVar5 != 0);
    }
    puVar3[uVar6] = 0;
  }
  else {
    puVar3 = (uint *)0x0;
  }
  return puVar3;
}



/* Entry: 10977f924; end: 10977f9ef;  */

uint * FUN_10977f924(long param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar11;
  int iVar12;
  uint *puVar10;
  
  pbVar6 = param_2;
  FUN_10977f9f0(param_2);
  bVar1 = *param_2;
  bVar2 = param_2[1];
  bVar3 = param_2[2];
  bVar4 = param_2[3];
  lVar7 = param_1;
  FUN_10977f82c(param_1,(int)pbVar6 + 1,param_3);
  if ((int)lVar7 == 0) {
    puVar8 = *(uint **)(param_1 + 0x38);
    puVar10 = puVar8;
    for (uVar5 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
        uVar5 != 0; uVar5 = uVar5 - 1) {
      uVar11 = (uint)param_2[4] << 0x10 | (uint)param_2[5] << 8 | (uint)param_2[6];
      iVar12 = param_2[7] + 1;
      puVar9 = puVar10;
      do {
        puVar10 = puVar9 + 1;
        *puVar9 = uVar11;
        uVar11 = uVar11 + 1;
        iVar12 = iVar12 + -1;
        puVar9 = puVar10;
      } while (iVar12 != 0);
      param_2 = param_2 + 4;
    }
    *puVar10 = 0;
  }
  else {
    puVar8 = (uint *)0x0;
  }
  return puVar8;
}



/* Entry: 10977f9f0; end: 10977fa27;  */

int FUN_10977f9f0(uint *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  if (uVar3 != 0) {
    iVar1 = 0;
    pbVar2 = (byte *)((long)param_1 + 7);
    do {
      iVar1 = iVar1 + (uint)*pbVar2 + 1;
      uVar3 = uVar3 - 1;
      pbVar2 = pbVar2 + 4;
    } while (uVar3 != 0);
    return iVar1;
  }
  return 0;
}



/* Entry: 10977fa28; end: 10977fa4f;  */

undefined8 FUN_10977fa28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  FUN_1097782dc(param_1,param_2,&uStack_18);
  return uStack_18;
}



/* Entry: 10977fa50; end: 10977fa97;  */

undefined8 FUN_10977fa50(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = param_1;
  (*(code *)param_1[1])(param_1,8);
  if (plVar1 == (long *)0x0) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0;
    *plVar1 = (long)param_1;
  }
  *param_2 = plVar1;
  return uVar2;
}



/* Entry: 10977fa98; end: 10977faa3;  */

void FUN_10977fa98(void)

{
  return;
}



/* Entry: 10977faa4; end: 10977fc03;  */

void FUN_10977faa4(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  ushort *puVar5;
  uint *puVar6;
  long lStack_1a0;
  long lStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  uint uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_28;
  
  plVar3 = &lStack_1a0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == 0) goto LAB_10977fb80;
  if ((*(uint *)(param_2 + 2) & 1) == 0) {
    plVar3 = (long *)0x13;
    goto LAB_10977fbd8;
  }
  puVar5 = (ushort *)param_2[1];
  if (puVar5 == (ushort *)0x0) {
LAB_10977fb88:
    plVar3 = (long *)0x14;
  }
  else {
    if ((puVar5[1] != 0) && (*puVar5 != 0)) {
      if ((*(long *)(puVar5 + 0xc) == 0) ||
         ((*(long *)(puVar5 + 4) == 0 ||
          (*(ushort *)(*(long *)(puVar5 + 0xc) + (ulong)(*puVar5 - 1) * 2) + 1 != (uint)puVar5[1])))
         ) goto LAB_10977fb88;
      puVar6 = (uint *)*param_2;
      uStack_130 = *(undefined8 *)(puVar5 + 4);
      uStack_138 = *(undefined8 *)puVar5;
      uStack_120 = *(undefined8 *)(puVar5 + 0xc);
      uStack_128 = *(undefined8 *)(puVar5 + 8);
      uStack_118 = *(undefined8 *)(puVar5 + 0x10);
      if ((*(uint *)(param_2 + 2) >> 1 & 1) == 0) {
        if (puVar6 == (uint *)0x0) {
LAB_10977fb80:
          plVar3 = (long *)0x6;
          goto LAB_10977fbd8;
        }
        uVar4 = (ulong)puVar6[1];
        if (puVar6[1] != 0) {
          uVar2 = *puVar6;
          if (uVar2 != 0) {
            if (*(long *)(puVar6 + 4) != 0) {
              uStack_108 = puVar6[2];
              uVar1 = 0;
              if (-1 < (int)uStack_108) {
                uVar1 = uStack_108 * (uVar2 - 1);
              }
              lStack_110 = *(long *)(puVar6 + 4) + (ulong)uVar1;
              lStack_1a0 = 0;
              lStack_198 = 0;
              lStack_100 = 0;
              uStack_f8 = 0;
              uStack_188 = (ulong)uVar2;
              goto LAB_10977fbb0;
            }
            goto LAB_10977fb80;
          }
        }
      }
      else if (param_2[3] != 0) {
        uStack_f8 = param_2[7];
        lStack_198 = param_2[9];
        lStack_1a0 = param_2[8];
        uStack_188 = param_2[0xb];
        uVar4 = param_2[10];
        lStack_100 = param_2[3];
LAB_10977fbb0:
        uStack_190 = uVar4;
        if ((lStack_1a0 < (long)uVar4) && (lStack_198 < (long)uStack_188)) {
          FUN_109780008();
          goto LAB_10977fbd8;
        }
      }
    }
    plVar3 = (long *)0x0;
  }
LAB_10977fbd8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010977fc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x10))(*plVar3,plVar3);
  return;
}



/* Entry: 10977fc04; end: 10977fc13;  */

void FUN_10977fc04(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010977fc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(*param_1,param_1);
  return;
}



/* Entry: 10977fc14; end: 10977fc5b;  */

undefined8 FUN_10977fc14(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(undefined8 *)(lVar1 + 0x158) = 0xffffffffffffffeb;
  *(undefined8 *)(lVar1 + 0x160) = 0;
  *(undefined8 *)(lVar1 + 0x168) = 0;
  *(undefined8 *)(lVar1 + 0x170) = 0;
  *(undefined8 *)(lVar1 + 0x178) = 0x15;
  *(undefined8 *)(lVar1 + 0x180) = 0;
  (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x70) + 0x10))
            (*(undefined8 *)(param_1 + 0x68),0,0);
  return 0;
}



/* Entry: 10977fc5c; end: 10977ff1b;  */

ulong FUN_10977fc5c(ulong param_1,long param_2,undefined8 param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int *piStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  uint uStack_64;
  
  uStack_64 = 0;
  lVar9 = *(long *)(param_1 + 0x10);
  if (*(int *)(param_2 + 0x90) == *(int *)(param_1 + 0x20)) {
    lVar11 = 0;
    lVar12 = 0;
    uVar5 = (uint)param_3;
    uVar10 = 0x13;
    if ((uVar5 < 5) && (uVar5 != 2)) {
      lVar11 = *(long *)(param_2 + 0x128);
      uVar7 = *(uint *)(lVar11 + 8);
      if ((uVar7 & 1) != 0) {
        if (*(long *)(param_2 + 0xa8) != 0) {
          (**(code **)(lVar9 + 0x10))(lVar9);
          lVar11 = *(long *)(param_2 + 0x128);
          uVar7 = *(uint *)(lVar11 + 8);
        }
        *(undefined8 *)(param_2 + 0xa8) = 0;
        *(uint *)(lVar11 + 8) = uVar7 & 0xfffffffe;
      }
      lVar11 = param_2;
      func_0x000109753ebc(param_2,param_3,param_4);
      if ((int)lVar11 == 0) {
        piVar1 = (int *)(param_2 + 0x98);
        if ((*piVar1 == 0) || (*(int *)(param_2 + 0xa0) == 0)) {
          lVar11 = 0;
          lVar12 = 0;
LAB_10977fdf8:
          uVar10 = 0;
          *(undefined4 *)(param_2 + 0x90) = 0x62697473;
          goto LAB_10977fd58;
        }
        lVar11 = lVar9;
        FUN_1097539a8(lVar9,(long)*(int *)(param_2 + 0xa0),0,*piVar1,0,&uStack_64);
        *(long *)(param_2 + 0xa8) = lVar11;
        if (uStack_64 == 0) {
          *(uint *)(*(long *)(param_2 + 0x128) + 8) = *(uint *)(*(long *)(param_2 + 0x128) + 8) | 1;
          lVar12 = (long)(*(int *)(param_2 + 0xc0) * -0x40);
          iVar4 = *(int *)(param_2 + 0x98) << 6;
          iVar2 = iVar4 / 3;
          if (*(char *)(param_2 + 0xb2) != '\x06') {
            iVar2 = iVar4;
          }
          lVar11 = (long)iVar2 + (long)(*(int *)(param_2 + 0xc4) * -0x40);
          if (param_4 != (long *)0x0) {
            lVar12 = *param_4 + lVar12;
            lVar11 = param_4[1] + lVar11;
          }
          lVar6 = param_2 + 200;
          if ((lVar12 != 0 || lVar11 != 0) && (uVar3 = *(ushort *)(param_2 + 0xca), uVar3 != 0)) {
            uVar7 = 0;
            plVar8 = *(long **)(param_2 + 0xd0);
            do {
              *plVar8 = *plVar8 + lVar12;
              plVar8[1] = plVar8[1] + lVar11;
              uVar7 = uVar7 + 1;
              plVar8 = plVar8 + 2;
            } while (uVar7 < uVar3);
          }
          if (uVar5 < 2) {
            if ((*(byte *)(param_2 + 0xe8) >> 6 & 1) == 0) {
              uStack_b8 = 1;
              uVar10 = *(ulong *)(param_1 + 0x68);
              piStack_c8 = piVar1;
              lStack_c0 = lVar6;
              (**(code **)(param_1 + 0x70))(uVar10,&piStack_c8);
              param_1 = uVar10;
            }
            else {
              FUN_109780db8(param_1,lVar6,piVar1);
            }
          }
          else if (uVar5 == 4) {
            func_0x000109781084(param_1,lVar6,piVar1);
          }
          else {
            if (uVar5 != 3) goto LAB_10977fdf8;
            FUN_109780eb4(param_1,lVar6,piVar1);
          }
          uVar10 = param_1;
          if ((int)param_1 == 0) goto LAB_10977fdf8;
        }
        else {
          lVar11 = 0;
          lVar12 = 0;
          uVar10 = (ulong)uStack_64;
        }
      }
      else {
        lVar11 = 0;
        lVar12 = 0;
        uVar10 = 0x62;
      }
    }
  }
  else {
    lVar11 = 0;
    lVar12 = 0;
    uVar10 = 6;
  }
  lVar6 = *(long *)(param_2 + 0x128);
  uVar5 = *(uint *)(lVar6 + 8);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(param_2 + 0xa8) != 0) {
      (**(code **)(lVar9 + 0x10))(lVar9);
      lVar6 = *(long *)(param_2 + 0x128);
      uVar5 = *(uint *)(lVar6 + 8);
    }
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(lVar6 + 8) = uVar5 & 0xfffffffe;
  }
LAB_10977fd58:
  if ((lVar12 != 0 || lVar11 != 0) && (uVar3 = *(ushort *)(param_2 + 0xca), uVar3 != 0)) {
    uVar5 = 0;
    plVar8 = *(long **)(param_2 + 0xd0);
    do {
      *plVar8 = *plVar8 - lVar12;
      plVar8[1] = plVar8[1] - lVar11;
      uVar5 = uVar5 + 1;
      plVar8 = plVar8 + 2;
    } while (uVar5 < uVar3);
  }
  return uVar10;
}



/* Entry: 10977ff1c; end: 10977ffcb;  */

undefined8 FUN_10977ff1c(long param_1,long param_2,long param_3,long *param_4)

{
  ulong uVar1;
  ushort uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (*(int *)(param_2 + 0x90) == *(int *)(param_1 + 0x20)) {
    if (((param_3 != 0) && (uVar5 = *(ulong *)(param_2 + 0xd0), uVar5 != 0)) &&
       ((ulong)*(ushort *)(param_2 + 0xca) != 0)) {
      uVar1 = uVar5 + (ulong)*(ushort *)(param_2 + 0xca) * 0x10;
      do {
        FUN_1097547e4(uVar5,param_3);
        uVar5 = uVar5 + 0x10;
      } while (uVar5 < uVar1);
    }
    if ((param_4 != (long *)0x0) && (uVar2 = *(ushort *)(param_2 + 0xca), uVar2 != 0)) {
      uVar3 = 0;
      lVar7 = param_4[1];
      lVar6 = *param_4;
      plVar4 = *(long **)(param_2 + 0xd0);
      do {
        plVar4[1] = plVar4[1] + lVar7;
        *plVar4 = *plVar4 + lVar6;
        uVar3 = uVar3 + 1;
        plVar4 = plVar4 + 2;
      } while (uVar3 < uVar2);
    }
    return 0;
  }
  return 6;
}



/* Entry: 10977ffcc; end: 109780007;  */

void FUN_10977ffcc(long param_1,long param_2,long *param_3)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar12;
  long *plVar11;
  
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  if (*(int *)(param_2 + 0x90) != *(int *)(param_1 + 0x20)) {
    return;
  }
  if ((param_2 != -200) && (param_3 != (long *)0x0)) {
    uVar1 = *(ushort *)(param_2 + 0xca);
    if (uVar1 == 0) {
      lVar2 = 0;
      lVar4 = 0;
      lVar7 = 0;
      lVar9 = 0;
    }
    else {
      plVar12 = *(long **)(param_2 + 0xd0);
      lVar4 = *plVar12;
      lVar2 = plVar12[1];
      lVar7 = lVar2;
      lVar9 = lVar4;
      if (uVar1 != 1) {
        lVar3 = lVar2;
        lVar5 = lVar4;
        lVar6 = lVar2;
        lVar8 = lVar4;
        plVar10 = plVar12 + 2;
        do {
          plVar11 = plVar10 + 2;
          lVar9 = *plVar10;
          lVar7 = plVar10[1];
          lVar4 = lVar9;
          if (lVar5 <= lVar9) {
            lVar4 = lVar5;
          }
          if (lVar9 <= lVar8) {
            lVar9 = lVar8;
          }
          lVar2 = lVar7;
          if (lVar3 <= lVar7) {
            lVar2 = lVar3;
          }
          if (lVar7 <= lVar6) {
            lVar7 = lVar6;
          }
          lVar3 = lVar2;
          lVar5 = lVar4;
          lVar6 = lVar7;
          lVar8 = lVar9;
          plVar10 = plVar11;
        } while (plVar11 < plVar12 + (ulong)uVar1 * 2);
      }
    }
    *param_3 = lVar4;
    param_3[1] = lVar2;
    param_3[2] = lVar9;
    param_3[3] = lVar7;
  }
  return;
}



/* Entry: 109780008; end: 1097805a7;  */

undefined8 * FUN_109780008(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  int *piVar21;
  int *piVar22;
  int iVar23;
  int iStack_4140;
  undefined4 uStack_413c;
  undefined1 auStack_40c0 [16344];
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  short asStack_d0 [48];
  long lStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = param_1[3];
  uVar18 = param_1[1];
  uVar20 = lVar13 - uVar18;
  uStack_e0 = 0;
  uStack_e8 = 0x7fffffff;
  uStack_d8 = 0;
  param_1[9] = &uStack_e8;
  param_1[10] = auStack_40c0;
  if (0x55 < uVar20) {
    uVar19 = (uVar20 + 0x54) / 0x55;
    lVar1 = uVar20 + (uVar20 + 0x54) / 0x55;
    uVar20 = 0;
    if (uVar19 != 0) {
      uVar20 = (lVar1 - 1U) / uVar19;
    }
  }
  if ((int)uVar18 < lVar13) {
    do {
      iVar15 = (int)uVar18;
      uVar12 = iVar15 + (int)uVar20;
      uVar18 = (ulong)uVar12;
      if ((int)uVar12 <= lVar13) {
        lVar13 = (long)(int)uVar12;
      }
      *(int *)(param_1 + 5) = iVar15;
      *(int *)((long)param_1 + 0x2c) = (int)lVar13;
      *(int *)(param_1 + 6) = (int)lVar13 - iVar15;
      iStack_4140 = (int)param_1[2];
      uStack_413c = (int)*param_1;
      piVar21 = &iStack_4140;
      do {
        piVar22 = piVar21 + 1;
        *(int *)(param_1 + 4) = *piVar22;
        *(int *)((long)param_1 + 0x24) = *piVar21;
        uVar16 = *(uint *)(param_1 + 6);
        uVar14 = param_1[9];
        if (0 < (int)uVar16) {
          lVar13 = 0;
          do {
            *(undefined8 *)(param_1[10] + lVar13) = uVar14;
            lVar13 = lVar13 + 8;
          } while ((ulong)uVar16 * 8 - lVar13 != 0);
          uVar14 = param_1[9];
        }
        param_1[7] = uVar14;
        param_1[8] = auStack_40c0 + (((long)(int)uVar16 * 8 + 0x17U) / 0x18) * 0x18;
        puVar8 = param_1;
        FUN_1097805a8();
        if ((int)puVar8 == 0x62) {
          iVar15 = piVar21[1];
          if ((uint)(*piVar21 - iVar15) < 2) {
            puVar8 = (undefined8 *)0x62;
            goto LAB_109780568;
          }
          piVar21[1] = iVar15 + (*piVar21 - iVar15 >> 1);
          piVar21[2] = iVar15;
        }
        else {
          if ((int)puVar8 != 0) goto LAB_109780568;
          uVar4 = *(uint *)(param_1 + 0x11);
          uVar16 = 0x80000000;
          if ((uVar4 & 2) != 0) {
            uVar16 = 0x100;
          }
          if (param_1[0x14] == 0) {
            for (iVar15 = *(int *)(param_1 + 5); iVar15 < *(int *)((long)param_1 + 0x2c);
                iVar15 = iVar15 + 1) {
              piVar22 = *(int **)(param_1[10] + (long)(iVar15 - *(int *)(param_1 + 5)) * 8);
              if (piVar22 != (int *)param_1[9]) {
                iVar17 = 0;
                lVar13 = param_1[0x12] - (long)*(int *)(param_1 + 0x13) * (long)iVar15;
                iVar11 = *(int *)(param_1 + 4);
                do {
                  if ((iVar17 == 0) ||
                     (iVar23 = *piVar22 - iVar11, iVar23 == 0 || *piVar22 < iVar11))
                  goto LAB_109780414;
                  uVar2 = iVar17 >> 9;
                  if ((uVar16 & uVar2) != 0) {
                    uVar2 = ~uVar2;
                  }
                  uVar3 = 0xff;
                  if ((uVar4 & 2) != 0 || (int)uVar2 < 0x100) {
                    uVar3 = uVar2;
                  }
                  puVar7 = (undefined1 *)(lVar13 + iVar11);
                  uVar5 = (undefined1)uVar3;
                  if (iVar23 < 4) {
                    if (1 < iVar23) {
                      puVar6 = puVar7;
                      if (iVar23 != 2) {
                        if (iVar23 != 3) goto LAB_1097803ec;
                        goto LAB_109780408;
                      }
                      goto LAB_10978040c;
                    }
                    if (iVar23 != 0) {
                      if (iVar23 != 1) {
LAB_1097803ec:
                        _memset(puVar7,uVar3,(long)iVar23);
                        goto LAB_109780414;
                      }
                      goto LAB_109780410;
                    }
                  }
                  else {
                    if (iVar23 < 6) {
                      puVar6 = puVar7;
                      if (iVar23 != 4) {
                        if (iVar23 != 5) goto LAB_1097803ec;
                        goto LAB_109780400;
                      }
                    }
                    else {
                      if (iVar23 == 7) {
                        puVar6 = puVar7 + 1;
                        *puVar7 = uVar5;
                      }
                      else {
                        puVar6 = puVar7;
                        if (iVar23 != 6) goto LAB_1097803ec;
                      }
                      puVar7 = puVar6 + 1;
                      *puVar6 = uVar5;
LAB_109780400:
                      puVar6 = puVar7 + 1;
                      *puVar7 = uVar5;
                    }
                    puVar7 = puVar6 + 1;
                    *puVar6 = uVar5;
LAB_109780408:
                    puVar6 = puVar7 + 1;
                    *puVar7 = uVar5;
LAB_10978040c:
                    puVar7 = puVar6 + 1;
                    *puVar6 = uVar5;
LAB_109780410:
                    *puVar7 = uVar5;
                  }
LAB_109780414:
                  iVar11 = *piVar22;
                  iVar17 = iVar17 + piVar22[1] * 0x200;
                  if ((iVar17 - piVar22[2] != 0) && (*(int *)(param_1 + 4) <= iVar11)) {
                    uVar2 = iVar17 - piVar22[2] >> 9;
                    if ((uVar16 & uVar2) != 0) {
                      uVar2 = ~uVar2;
                    }
                    if ((uVar4 & 2) == 0 && 0xff < (int)uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    *(char *)(lVar13 + iVar11) = (char)uVar2;
                    iVar11 = *piVar22;
                  }
                  iVar11 = iVar11 + 1;
                  piVar22 = *(int **)(piVar22 + 4);
                } while (piVar22 != (int *)param_1[9]);
                if (iVar17 != 0) {
                  uVar2 = iVar17 >> 9;
                  if ((uVar16 & uVar2) != 0) {
                    uVar2 = ~uVar2;
                  }
                  uVar3 = 0xff;
                  if ((uVar4 & 2) != 0 || (int)uVar2 < 0x100) {
                    uVar3 = uVar2;
                  }
                  puVar7 = (undefined1 *)(lVar13 + iVar11);
                  iVar17 = *(int *)((long)param_1 + 0x24) - iVar11;
                  uVar5 = (undefined1)uVar3;
                  if (iVar17 < 4) {
                    if (1 < iVar17) {
                      puVar6 = puVar7;
                      if (iVar17 != 2) {
                        if (iVar17 != 3) goto LAB_1097804f4;
                        goto LAB_10978050c;
                      }
                      goto LAB_109780510;
                    }
                    if (*(int *)((long)param_1 + 0x24) == iVar11) goto LAB_109780518;
                    if (iVar17 != 1) {
LAB_1097804f4:
                      _memset();
                      goto LAB_109780518;
                    }
                  }
                  else {
                    if (iVar17 < 6) {
                      puVar6 = puVar7;
                      if (iVar17 != 4) {
                        if (iVar17 != 5) goto LAB_1097804f4;
                        goto LAB_109780504;
                      }
                    }
                    else {
                      if (iVar17 == 7) {
                        puVar6 = puVar7 + 1;
                        *puVar7 = uVar5;
                      }
                      else {
                        puVar6 = puVar7;
                        if (iVar17 != 6) goto LAB_1097804f4;
                      }
                      puVar7 = puVar6 + 1;
                      *puVar6 = uVar5;
LAB_109780504:
                      puVar6 = puVar7 + 1;
                      *puVar7 = uVar5;
                    }
                    puVar7 = puVar6 + 1;
                    *puVar6 = uVar5;
LAB_10978050c:
                    puVar6 = puVar7 + 1;
                    *puVar7 = uVar5;
LAB_109780510:
                    puVar7 = puVar6 + 1;
                    *puVar6 = uVar5;
                  }
                  *puVar7 = uVar5;
                }
              }
LAB_109780518:
            }
          }
          else {
            for (iVar15 = *(int *)(param_1 + 5); iVar15 < *(int *)((long)param_1 + 0x2c);
                iVar15 = iVar15 + 1) {
              piVar22 = *(int **)(param_1[10] + (long)(iVar15 - *(int *)(param_1 + 5)) * 8);
              if (piVar22 != (int *)param_1[9]) {
                iVar23 = 0;
                iVar11 = 0;
                iVar17 = *(int *)(param_1 + 4);
                do {
                  iVar10 = *piVar22;
                  if ((iVar23 != 0) && (iVar10 - iVar17 != 0 && iVar17 <= iVar10)) {
                    uVar2 = iVar23 >> 9;
                    if ((uVar16 & uVar2) != 0) {
                      uVar2 = ~uVar2;
                    }
                    if ((uVar4 & 2) == 0 && 0xff < (int)uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    lVar13 = (long)iVar11;
                    *(char *)(asStack_d0 + lVar13 * 3 + 2) = (char)uVar2;
                    asStack_d0[lVar13 * 3] = (short)iVar17;
                    asStack_d0[lVar13 * 3 + 1] = (short)(iVar10 - iVar17);
                    iVar11 = iVar11 + 1;
                    if (iVar11 == 0x10) {
                      (*(code *)param_1[0x14])(iVar15,0x10,asStack_d0,param_1[0x15]);
                      iVar11 = 0;
                      iVar10 = *piVar22;
                    }
                  }
                  iVar23 = iVar23 + piVar22[1] * 0x200;
                  if ((iVar23 - piVar22[2] != 0) && (*(int *)(param_1 + 4) <= iVar10)) {
                    uVar2 = iVar23 - piVar22[2] >> 9;
                    if ((uVar16 & uVar2) != 0) {
                      uVar2 = ~uVar2;
                    }
                    if ((uVar4 & 2) == 0 && 0xff < (int)uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    lVar13 = (long)iVar11;
                    *(char *)(asStack_d0 + lVar13 * 3 + 2) = (char)uVar2;
                    asStack_d0[lVar13 * 3] = (short)iVar10;
                    asStack_d0[lVar13 * 3 + 1] = 1;
                    iVar11 = iVar11 + 1;
                    if (iVar11 == 0x10) {
                      (*(code *)param_1[0x14])(iVar15,0x10,asStack_d0,param_1[0x15]);
                      iVar11 = 0;
                      iVar10 = *piVar22;
                    }
                  }
                  iVar17 = iVar10 + 1;
                  piVar22 = *(int **)(piVar22 + 4);
                } while (piVar22 != (int *)param_1[9]);
                if (iVar23 != 0) {
                  uVar2 = iVar23 >> 9;
                  if ((uVar16 & uVar2) != 0) {
                    uVar2 = ~uVar2;
                  }
                  if ((uVar4 & 2) == 0 && 0xff < (int)uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  lVar13 = (long)iVar11;
                  *(char *)(asStack_d0 + lVar13 * 3 + 2) = (char)uVar2;
                  asStack_d0[lVar13 * 3] = (short)iVar17;
                  asStack_d0[lVar13 * 3 + 1] =
                       (short)*(undefined4 *)((long)param_1 + 0x24) - (short)iVar17;
                  iVar11 = iVar11 + 1;
                }
                if (iVar11 != 0) {
                  (*(code *)param_1[0x14])(iVar15,iVar11,asStack_d0,param_1[0x15]);
                }
              }
            }
          }
          piVar22 = piVar21 + -1;
        }
        piVar21 = piVar22;
      } while (&iStack_4140 <= piVar22);
      lVar13 = param_1[3];
    } while ((int)uVar12 < lVar13);
  }
  puVar8 = (undefined8 *)0x0;
LAB_109780568:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    iVar15 = (int)puVar8 + 0xb0;
    _setjmp();
    if (iVar15 == 0) {
      puVar9 = puVar8 + 0xd;
      func_0x00010975687c(puVar9,&PTR_FUN_110b0d1e0,puVar8);
      uVar12 = (uint)puVar9;
    }
    else {
      uVar12 = 0x62;
    }
    return (undefined8 *)(ulong)uVar12;
  }
  return puVar8;
}



/* Entry: 1097805a8; end: 1097805ff;  */

undefined4 FUN_1097805a8(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  iVar1 = (int)param_1 + 0xb0;
  _setjmp();
  if (iVar1 == 0) {
    lVar2 = param_1 + 0x68;
    func_0x00010975687c(lVar2,&PTR_FUN_110b0d1e0,param_1);
    uVar3 = (undefined4)lVar2;
  }
  else {
    uVar3 = 0x62;
  }
  return uVar3;
}



/* Entry: 109780600; end: 109780647;  */

undefined8 FUN_109780600(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  FUN_1097809ec(param_2,uVar1 >> 6,uVar2 >> 6);
  *(ulong *)(param_2 + 0x58) = uVar1 << 2;
  *(ulong *)(param_2 + 0x60) = uVar2 << 2;
  return 0;
}



/* Entry: 109780648; end: 109780673;  */

undefined8 FUN_109780648(long *param_1,undefined8 param_2)

{
  FUN_109780aa8(param_2,*param_1 << 2,param_1[1] << 2);
  return 0;
}



/* Entry: 109780674; end: 1097807c3;  */

undefined8 FUN_109780674(long *param_1,long *param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  
  lVar4 = *(long *)(param_3 + 0x60);
  uVar6 = param_1[1];
  lVar3 = param_2[1] * 4;
  iVar14 = *(int *)(param_3 + 0x2c);
  iVar5 = (int)((ulong)lVar4 >> 8);
  iVar8 = (int)(uVar6 >> 6);
  iVar10 = (int)((ulong)param_2[1] >> 6);
  if (((iVar5 < iVar14 || iVar8 < iVar14) || iVar10 < iVar14) &&
     (iVar14 = *(int *)(param_3 + 0x28), (iVar14 <= iVar5 || iVar14 <= iVar8) || iVar14 <= iVar10))
  {
    lVar9 = *param_1 * 4 - *(long *)(param_3 + 0x58);
    lVar7 = uVar6 * 4 - lVar4;
    uVar2 = (*param_2 * 4 + *param_1 * -4) - lVar9;
    uVar12 = (lVar3 + uVar6 * -4) - lVar7;
    uVar6 = -uVar2;
    if (-1 < (long)uVar2) {
      uVar6 = uVar2;
    }
    uVar15 = -uVar12;
    if (-1 < (long)uVar12) {
      uVar15 = uVar12;
    }
    if (uVar6 <= uVar15) {
      uVar6 = uVar15;
    }
    if (uVar6 < 0x41) {
      FUN_109780aa8(param_3);
    }
    else {
      uVar15 = 0x21;
      uVar16 = 0x20;
      do {
        iVar14 = (int)uVar15;
        uVar15 = (ulong)(iVar14 - 1);
        uVar16 = (ulong)((int)uVar16 - 2);
        bVar1 = 0x103 < uVar6;
        uVar6 = uVar6 >> 2;
      } while (bVar1);
      uVar17 = 0x10000 >> (ulong)(iVar14 - 0x12U & 0x1f);
      lVar11 = uVar2 << (uVar16 & 0x3f);
      lVar13 = uVar12 << (uVar16 & 0x3f);
      lVar3 = lVar11 + (lVar9 << (uVar15 & 0x3f));
      lVar7 = lVar13 + (lVar7 << (uVar15 & 0x3f));
      lVar9 = *(long *)(param_3 + 0x58) << 0x20;
      lVar4 = lVar4 << 0x20;
      do {
        lVar9 = lVar9 + lVar3;
        lVar4 = lVar4 + lVar7;
        lVar3 = lVar3 + lVar11 * 2;
        lVar7 = lVar7 + lVar13 * 2;
        FUN_109780aa8(param_3,lVar9 >> 0x20,lVar4 >> 0x20);
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  else {
    *(long *)(param_3 + 0x58) = *param_2 * 4;
    *(long *)(param_3 + 0x60) = lVar3;
  }
  return 0;
}



/* Entry: 1097807c4; end: 1097809eb;  */

long * FUN_1097807c4(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  bool bVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *param_3 << 2;
  lStack_340 = param_3[1] << 2;
  lStack_348 = lVar5;
  lVar7 = *param_2 << 2;
  lStack_338 = lVar7;
  lStack_330 = param_2[1] << 2;
  lStack_320 = param_1[1] << 2;
  lStack_328 = *param_1 << 2;
  lVar15 = param_4[0xb];
  lStack_318 = lVar15;
  lStack_310 = param_4[0xc];
  iVar4 = *(int *)((long)param_4 + 0x2c);
  iVar18 = (int)((ulong)param_3[1] >> 6);
  iVar17 = (int)((ulong)param_2[1] >> 6);
  iVar21 = (int)((ulong)(param_1[1] << 2) >> 8);
  iVar22 = (int)((ulong)param_4[0xc] >> 8);
  if ((((iVar18 < iVar4) || (iVar17 < iVar4)) || (iVar21 < iVar4 || iVar22 < iVar4)) &&
     (((iVar4 = (int)param_4[5], iVar4 <= iVar18 || (iVar4 <= iVar17)) ||
      (iVar4 <= iVar21 || iVar4 <= iVar22)))) {
    plVar3 = &lStack_348;
    do {
      uVar6 = lVar7 * -3 + lVar15 + lVar5 * 2;
      uVar20 = -uVar6;
      if (-1 < (long)uVar6) {
        uVar20 = uVar6;
      }
      if (uVar20 < 0x81) {
        param_3 = (long *)plVar3[1];
        lVar13 = plVar3[3];
        lVar16 = plVar3[7];
        uVar6 = lVar13 * -3 + (long)param_3 * 2 + lVar16;
        uVar20 = -uVar6;
        if (-1 < (long)uVar6) {
          uVar20 = uVar6;
        }
        if (0x80 < uVar20) goto LAB_109780944;
        uVar6 = lVar5 + lVar15 * 2 + plVar3[4] * -3;
        uVar20 = -uVar6;
        if (-1 < (long)uVar6) {
          uVar20 = uVar6;
        }
        if (0x80 < uVar20) goto LAB_109780944;
        uVar6 = (long)param_3 + plVar3[5] * -3 + lVar16 * 2;
        uVar20 = -uVar6;
        if (-1 < (long)uVar6) {
          uVar20 = uVar6;
        }
        if (0x80 < uVar20) goto LAB_109780944;
        param_1 = param_4;
        FUN_109780aa8();
        if (plVar3 == &lStack_348) goto LAB_109780884;
        plVar8 = plVar3 + -6;
        lVar5 = *plVar8;
      }
      else {
        lVar16 = plVar3[7];
        param_3 = (long *)plVar3[1];
        lVar13 = plVar3[3];
LAB_109780944:
        plVar8 = plVar3 + 6;
        lVar9 = lVar5 + lVar7;
        lVar7 = plVar3[4] + lVar7;
        lVar5 = plVar3[4] + lVar15;
        lVar12 = lVar5 + lVar7;
        plVar3[0xc] = lVar15;
        plVar3[0xd] = lVar16;
        lVar16 = plVar3[5] + lVar16;
        plVar3[10] = lVar5 >> 1;
        plVar3[0xb] = lVar16 >> 1;
        lVar7 = lVar7 + lVar9;
        lVar5 = lVar7 + lVar12 >> 3;
        lVar15 = plVar3[5] + lVar13;
        lVar16 = lVar16 + lVar15;
        plVar3[8] = lVar12 >> 2;
        plVar3[9] = lVar16 >> 2;
        plVar3[2] = lVar9 >> 1;
        plVar3[3] = (long)param_3 + lVar13 >> 1;
        lVar15 = lVar15 + (long)param_3 + lVar13;
        plVar3[4] = lVar7 >> 2;
        plVar3[5] = lVar15 >> 2;
        plVar3[6] = lVar5;
        plVar3[7] = lVar15 + lVar16 >> 3;
      }
      lVar7 = plVar8[2];
      lVar15 = plVar8[6];
      plVar3 = plVar8;
    } while( true );
  }
  param_4[0xb] = lVar5;
  param_4[0xc] = lStack_340;
LAB_109780884:
  iVar4 = (int)lVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return (long *)0x0;
  }
  ___stack_chk_fail();
  uVar23 = (int)param_3 - (int)param_1[5];
  if ((((int)uVar23 < 0) || ((int)param_1[6] <= (int)uVar23)) ||
     (*(int *)((long)param_1 + 0x24) <= iVar4)) {
    piVar10 = (int *)param_1[9];
  }
  else {
    piVar14 = (int *)(param_1[10] + (ulong)uVar23 * 8);
    iVar21 = (int)param_1[4] + -1;
    if ((int)param_1[4] <= iVar4) {
      iVar21 = iVar4;
    }
    iVar4 = **(int **)piVar14;
    piVar1 = *(int **)piVar14;
    if (iVar4 <= iVar21) {
      do {
        piVar10 = piVar1;
        if (iVar4 == iVar21) goto LAB_109780a90;
        iVar4 = **(int **)(piVar10 + 4);
        piVar1 = *(int **)(piVar10 + 4);
      } while (iVar4 <= iVar21);
      piVar14 = piVar10 + 4;
    }
    piVar10 = (int *)param_1[8];
    param_1[8] = (long)(piVar10 + 6);
    if ((int *)param_1[9] <= piVar10) {
      param_1 = param_1 + 0x16;
      uVar6 = 1;
      _longjmp();
      plVar8 = (long *)param_1[0xc];
      uVar20 = (ulong)plVar8 >> 8;
      iVar21 = (int)((ulong)param_3 >> 8);
      iVar4 = (int)((ulong)plVar8 >> 8);
      plVar3 = param_1;
      if ((iVar21 < *(int *)((long)param_1 + 0x2c) || iVar4 < *(int *)((long)param_1 + 0x2c)) &&
         ((int)param_1[5] <= iVar4 || (int)param_1[5] <= iVar21)) {
        uVar11 = param_1[0xb];
        uVar19 = uVar11 >> 8;
        uVar23 = (uint)uVar11 & 0xff;
        uVar24 = (ulong)uVar23;
        uVar25 = (uint)plVar8 & 0xff;
        uVar26 = (ulong)uVar25;
        iVar17 = iVar21 - iVar4;
        iVar18 = (int)(uVar11 >> 8);
        iVar22 = (int)(uVar6 >> 8);
        if (iVar17 != 0 || iVar18 != iVar22) {
          if (param_3 == plVar8) {
            FUN_1097809ec(param_1,uVar6 >> 8,(ulong)param_3 >> 8);
            goto LAB_109780d94;
          }
          lVar7 = (long)param_3 - (long)plVar8;
          if (uVar6 == uVar11) {
            if (lVar7 < 1) {
              do {
                iVar4 = iVar4 + -1;
                lVar7 = param_1[7];
                *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) - (int)uVar26;
                *(uint *)(lVar7 + 8) = *(int *)(lVar7 + 8) + uVar23 * -2 * (int)uVar26;
                plVar3 = param_1;
                FUN_1097809ec(param_1,uVar19,iVar4);
                uVar26 = 0x100;
                uVar25 = 0x100;
                bVar2 = iVar17 != -1;
                iVar17 = iVar17 + 1;
              } while (bVar2);
            }
            else {
              iVar21 = 0x100 - uVar25;
              do {
                iVar4 = iVar4 + 1;
                lVar7 = param_1[7];
                *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + iVar21;
                *(uint *)(lVar7 + 8) = *(int *)(lVar7 + 8) + uVar23 * 2 * iVar21;
                plVar3 = param_1;
                FUN_1097809ec(param_1,uVar19,iVar4);
                iVar21 = 0x100;
                iVar17 = iVar17 + -1;
              } while (iVar17 != 0);
              uVar25 = 0;
            }
          }
          else {
            lVar5 = uVar6 - uVar11;
            lVar15 = 0;
            if (lVar5 != 0) {
              lVar15 = 0xffffffff / lVar5;
            }
            lVar16 = 0;
            if (iVar18 != iVar22) {
              lVar16 = lVar15;
            }
            lVar15 = 0;
            if (lVar7 != 0) {
              lVar15 = 0xffffffff / lVar7;
            }
            lVar13 = 0;
            if (iVar21 != iVar4) {
              lVar13 = lVar15;
            }
            lVar15 = lVar5 * ((ulong)plVar8 & 0xff) - (uVar11 & 0xff) * lVar7;
            do {
              lVar9 = lVar15 + lVar5 * -0x100;
              iVar4 = (int)uVar26;
              iVar17 = (int)uVar24;
              if ((lVar15 < 1) && (0 < lVar9)) {
                uVar26 = (ulong)(lVar15 * lVar16) >> 0x20;
                lVar9 = lVar15 + lVar7 * -0x100;
                lVar12 = param_1[7];
                iVar4 = (int)((ulong)(lVar15 * lVar16) >> 0x20) - iVar4;
                *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + iVar4;
                *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + iVar4 * iVar17;
                uVar19 = (ulong)((int)uVar19 - 1);
                uVar24 = 0x100;
              }
              else {
                lVar12 = lVar9 + lVar7 * 0x100;
                if ((lVar9 < 1) && (0 < lVar12)) {
                  uVar24 = (ulong)-(lVar13 * lVar9) >> 0x20;
                  lVar15 = param_1[7];
                  *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + (0x100 - iVar4);
                  *(int *)(lVar15 + 8) =
                       *(int *)(lVar15 + 8) +
                       (iVar17 + (int)((ulong)-(lVar13 * lVar9) >> 0x20)) * (0x100 - iVar4);
                  uVar20 = (ulong)((int)uVar20 + 1);
                  uVar26 = 0;
                }
                else {
                  lVar9 = lVar15 + lVar7 * 0x100;
                  if ((lVar9 < 0) || (0 < lVar12)) {
                    uVar24 = (ulong)-(lVar13 * lVar15) >> 0x20;
                    lVar9 = lVar15 + lVar5 * 0x100;
                    lVar12 = param_1[7];
                    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) - iVar4;
                    *(int *)(lVar12 + 8) =
                         *(int *)(lVar12 + 8) -
                         (iVar17 + (int)((ulong)-(lVar13 * lVar15) >> 0x20)) * iVar4;
                    uVar20 = (ulong)((int)uVar20 - 1);
                    uVar26 = 0x100;
                  }
                  else {
                    uVar26 = (ulong)(lVar9 * lVar16) >> 0x20;
                    lVar15 = param_1[7];
                    iVar4 = (int)((ulong)(lVar9 * lVar16) >> 0x20) - iVar4;
                    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + iVar4;
                    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + iVar4 * (iVar17 + 0x100);
                    uVar19 = (ulong)((int)uVar19 + 1);
                    uVar24 = 0;
                  }
                }
              }
              uVar23 = (uint)uVar24;
              uVar25 = (uint)uVar26;
              plVar3 = param_1;
              FUN_1097809ec(param_1,uVar19,uVar20);
              lVar15 = lVar9;
            } while (((int)uVar19 != iVar22) || ((int)uVar20 != iVar21));
          }
        }
        lVar7 = param_1[7];
        iVar4 = ((uint)param_3 & 0xff) - uVar25;
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + iVar4;
        *(uint *)(lVar7 + 8) = *(int *)(lVar7 + 8) + (uVar23 + ((uint)uVar6 & 0xff)) * iVar4;
      }
LAB_109780d94:
      param_1[0xb] = uVar6;
      param_1[0xc] = (long)param_3;
      return plVar3;
    }
    piVar10[1] = 0;
    piVar10[2] = 0;
    *piVar10 = iVar21;
    *(undefined8 *)(piVar10 + 4) = *(undefined8 *)piVar14;
    *(int **)piVar14 = piVar10;
  }
LAB_109780a90:
  param_1[7] = (long)piVar10;
  return param_1;
}



/* Entry: 1097809ec; end: 109780aa7;  */

void FUN_1097809ec(long param_1,int param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  int iVar25;
  
  uVar21 = (int)param_3 - *(int *)(param_1 + 0x28);
  if ((((int)uVar21 < 0) || (*(int *)(param_1 + 0x30) <= (int)uVar21)) ||
     (*(int *)(param_1 + 0x24) <= param_2)) {
    piVar8 = *(int **)(param_1 + 0x48);
  }
  else {
    piVar11 = (int *)(*(long *)(param_1 + 0x50) + (ulong)uVar21 * 8);
    iVar17 = *(int *)(param_1 + 0x20) + -1;
    if (*(int *)(param_1 + 0x20) <= param_2) {
      iVar17 = param_2;
    }
    iVar19 = **(int **)piVar11;
    piVar3 = *(int **)piVar11;
    if (iVar19 <= iVar17) {
      do {
        piVar8 = piVar3;
        if (iVar19 == iVar17) goto LAB_109780a90;
        iVar19 = **(int **)(piVar8 + 4);
        piVar3 = *(int **)(piVar8 + 4);
      } while (iVar19 <= iVar17);
      piVar11 = piVar8 + 4;
    }
    piVar8 = *(int **)(param_1 + 0x40);
    *(int **)(param_1 + 0x40) = piVar8 + 6;
    if (*(int **)(param_1 + 0x48) <= piVar8) {
      param_1 = param_1 + 0xb0;
      uVar5 = 1;
      _longjmp();
      uVar6 = *(ulong *)(param_1 + 0x60);
      uVar18 = uVar6 >> 8;
      iVar19 = (int)(param_3 >> 8);
      iVar17 = (int)(uVar6 >> 8);
      if ((iVar19 < *(int *)(param_1 + 0x2c) || iVar17 < *(int *)(param_1 + 0x2c)) &&
         (*(int *)(param_1 + 0x28) <= iVar17 || *(int *)(param_1 + 0x28) <= iVar19)) {
        uVar9 = *(ulong *)(param_1 + 0x58);
        uVar16 = uVar9 >> 8;
        uVar21 = (uint)uVar9 & 0xff;
        uVar22 = (ulong)uVar21;
        uVar23 = (uint)uVar6 & 0xff;
        uVar24 = (ulong)uVar23;
        iVar25 = iVar19 - iVar17;
        iVar15 = (int)(uVar9 >> 8);
        iVar20 = (int)(uVar5 >> 8);
        if (iVar25 != 0 || iVar15 != iVar20) {
          if (param_3 == uVar6) {
            FUN_1097809ec(param_1,uVar5 >> 8,param_3 >> 8);
            goto LAB_109780d94;
          }
          lVar12 = param_3 - uVar6;
          if (uVar5 == uVar9) {
            if (lVar12 < 1) {
              do {
                iVar17 = iVar17 + -1;
                lVar12 = *(long *)(param_1 + 0x38);
                *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) - (int)uVar24;
                *(uint *)(lVar12 + 8) = *(int *)(lVar12 + 8) + uVar21 * -2 * (int)uVar24;
                FUN_1097809ec(param_1,uVar16,iVar17);
                uVar24 = 0x100;
                uVar23 = 0x100;
                bVar4 = iVar25 != -1;
                iVar25 = iVar25 + 1;
              } while (bVar4);
            }
            else {
              iVar19 = 0x100 - uVar23;
              do {
                iVar17 = iVar17 + 1;
                lVar12 = *(long *)(param_1 + 0x38);
                *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + iVar19;
                *(uint *)(lVar12 + 8) = *(int *)(lVar12 + 8) + uVar21 * 2 * iVar19;
                FUN_1097809ec(param_1,uVar16,iVar17);
                iVar19 = 0x100;
                iVar25 = iVar25 + -1;
              } while (iVar25 != 0);
              uVar23 = 0;
            }
          }
          else {
            lVar14 = uVar5 - uVar9;
            lVar13 = 0;
            if (lVar14 != 0) {
              lVar13 = 0xffffffff / lVar14;
            }
            lVar1 = 0;
            if (iVar15 != iVar20) {
              lVar1 = lVar13;
            }
            lVar13 = 0;
            if (lVar12 != 0) {
              lVar13 = 0xffffffff / lVar12;
            }
            lVar2 = 0;
            if (iVar19 != iVar17) {
              lVar2 = lVar13;
            }
            lVar13 = lVar14 * (uVar6 & 0xff) - (uVar9 & 0xff) * lVar12;
            do {
              lVar7 = lVar13 + lVar14 * -0x100;
              iVar17 = (int)uVar24;
              iVar25 = (int)uVar22;
              if ((lVar13 < 1) && (0 < lVar7)) {
                uVar24 = (ulong)(lVar13 * lVar1) >> 0x20;
                lVar7 = lVar13 + lVar12 * -0x100;
                lVar10 = *(long *)(param_1 + 0x38);
                iVar17 = (int)((ulong)(lVar13 * lVar1) >> 0x20) - iVar17;
                *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + iVar17;
                *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + iVar17 * iVar25;
                uVar16 = (ulong)((int)uVar16 - 1);
                uVar22 = 0x100;
              }
              else {
                lVar10 = lVar7 + lVar12 * 0x100;
                if ((lVar7 < 1) && (0 < lVar10)) {
                  uVar22 = (ulong)-(lVar2 * lVar7) >> 0x20;
                  lVar13 = *(long *)(param_1 + 0x38);
                  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + (0x100 - iVar17);
                  *(int *)(lVar13 + 8) =
                       *(int *)(lVar13 + 8) +
                       (iVar25 + (int)((ulong)-(lVar2 * lVar7) >> 0x20)) * (0x100 - iVar17);
                  uVar18 = (ulong)((int)uVar18 + 1);
                  uVar24 = 0;
                }
                else {
                  lVar7 = lVar13 + lVar12 * 0x100;
                  if ((lVar7 < 0) || (0 < lVar10)) {
                    uVar22 = (ulong)-(lVar2 * lVar13) >> 0x20;
                    lVar7 = lVar13 + lVar14 * 0x100;
                    lVar10 = *(long *)(param_1 + 0x38);
                    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) - iVar17;
                    *(int *)(lVar10 + 8) =
                         *(int *)(lVar10 + 8) -
                         (iVar25 + (int)((ulong)-(lVar2 * lVar13) >> 0x20)) * iVar17;
                    uVar18 = (ulong)((int)uVar18 - 1);
                    uVar24 = 0x100;
                  }
                  else {
                    uVar24 = (ulong)(lVar7 * lVar1) >> 0x20;
                    lVar13 = *(long *)(param_1 + 0x38);
                    iVar17 = (int)((ulong)(lVar7 * lVar1) >> 0x20) - iVar17;
                    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + iVar17;
                    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + iVar17 * (iVar25 + 0x100);
                    uVar16 = (ulong)((int)uVar16 + 1);
                    uVar22 = 0;
                  }
                }
              }
              uVar21 = (uint)uVar22;
              uVar23 = (uint)uVar24;
              FUN_1097809ec(param_1,uVar16,uVar18);
              lVar13 = lVar7;
            } while (((int)uVar16 != iVar20) || ((int)uVar18 != iVar19));
          }
        }
        lVar12 = *(long *)(param_1 + 0x38);
        iVar17 = ((uint)param_3 & 0xff) - uVar23;
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + iVar17;
        *(uint *)(lVar12 + 8) = *(int *)(lVar12 + 8) + (uVar21 + ((uint)uVar5 & 0xff)) * iVar17;
      }
LAB_109780d94:
      *(ulong *)(param_1 + 0x58) = uVar5;
      *(ulong *)(param_1 + 0x60) = param_3;
      return;
    }
    piVar8[1] = 0;
    piVar8[2] = 0;
    *piVar8 = iVar17;
    *(undefined8 *)(piVar8 + 4) = *(undefined8 *)piVar11;
    *(int **)piVar11 = piVar8;
  }
LAB_109780a90:
  *(int **)(param_1 + 0x38) = piVar8;
  return;
}


