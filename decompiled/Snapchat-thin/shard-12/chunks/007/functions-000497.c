/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1096e8de4; end: 1096e8ffb;  */

/* WARNING: Removing unreachable block (ram,0x0001096e8f84) */

void FUN_1096e8de4(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined ***pppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined **appuStack_160 [2];
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 auStack_140 [56];
  undefined8 uStack_108;
  char cStack_f1;
  undefined **appuStack_e0 [19];
  byte ******ppppppbStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  lVar5 = *(long *)(param_2 + 8);
  lVar4 = (long)*(char *)(lVar5 + 0x1f);
  if (lVar4 < 0) {
    if (*(int *)(lVar5 + 0x10) == 0) goto LAB_1096e8f90;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    lVar3 = *(long *)(lVar5 + 8);
    lVar4 = *(long *)(lVar5 + 0x10);
  }
  else {
    if (*(char *)(lVar5 + 0x1f) == '\0') {
LAB_1096e8f90:
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    lVar3 = lVar5 + 8;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  FUN_1092b29f8(&ppppppbStack_48,lVar3,lVar3 + (int)lVar4,(long)(int)lVar4);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    ppppppbStack_48 = (byte ******)&ppppppbStack_48;
  }
  for (; uStack_40 != 0; uStack_40 = uStack_40 - 1) {
    if (*(byte *)ppppppbStack_48 - 0x28 < 0x36 &&
        (1L << ((ulong)(*(byte *)ppppppbStack_48 - 0x28) & 0x3f) & 0x28000000000013U) != 0) {
      *(byte *)ppppppbStack_48 = 0x20;
    }
    ppppppbStack_48 = (byte ******)((long)ppppppbStack_48 + 1);
  }
  FUN_10945ac64(appuStack_160,&ppppppbStack_48,0x18);
  do {
    while( true ) {
      uStack_178 = 0;
      uStack_170 = 0;
      lStack_168 = 0;
      pppuVar2 = appuStack_160;
      FUN_10923b090(pppuVar2,&uStack_178);
      uVar1 = *(uint *)((long)pppuVar2 + (long)((*pppuVar2)[-3] + 0x20)) & 5;
      if (uVar1 == 0) {
        func_0x000107c2ac70(param_1,&uStack_178);
      }
      if (lStack_168 < 0) break;
      if (uVar1 != 0) goto LAB_1096e8f04;
    }
    __ZdlPv(uStack_178);
  } while (uVar1 == 0);
LAB_1096e8f04:
  appuStack_160[0] = &PTR_SUB_1108a5a38;
  ppuStack_150 = &PTR_DAT_1108a5a60;
  appuStack_e0[0] = &PTR_DAT_1108a5a88;
  ppuStack_148 = &PTR_DAT_11088d7b0;
  if (cStack_f1 < '\0') {
    __ZdlPv(uStack_108);
  }
  ppuStack_148 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_140);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_160,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_e0);
  return;
}



/* Entry: 1096e8ffc; end: 1096e90a3;  */

float FUN_1096e8ffc(undefined8 param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  float *pfStack_58;
  long lStack_50;
  
  FUN_1096e8a04(&pfStack_58);
  pfVar1 = pfStack_58;
  if (lStack_50 - (long)pfStack_58 != 0x10) {
    puStack_70 = &UNK_10f57e7e6;
    puStack_68 = &UNK_10f57e754;
    uStack_60 = 0xbf;
    FUN_109699380(&puStack_70);
    pfVar1 = pfStack_58;
  }
  ___sincosf_stret(pfVar1[1]);
  fVar2 = *pfVar1;
  __ZdlPv(pfVar1);
  return param_2 * fVar2;
}



/* Entry: 1096e90a4; end: 1096e985f;  */

/* WARNING: Removing unreachable block (ram,0x0001096e9f20) */
/* WARNING: Removing unreachable block (ram,0x0001096e9f28) */
/* WARNING: Removing unreachable block (ram,0x0001096e9f34) */
/* WARNING: Removing unreachable block (ram,0x0001096e9f3c) */
/* WARNING: Removing unreachable block (ram,0x0001096e9f48) */
/* WARNING: Removing unreachable block (ram,0x0001096e9f4c) */
/* WARNING: Removing unreachable block (ram,0x0001096e9f50) */
/* WARNING: Removing unreachable block (ram,0x0001096e9f54) */
/* WARNING: Removing unreachable block (ram,0x0001096e9f7c) */

int * FUN_1096e90a4(int *param_1,int *param_2,undefined8 param_3,long param_4,uint param_5)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  ulong uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  undefined8 uVar21;
  
  piVar5 = param_1;
LAB_1096e90dc:
  piVar9 = param_2 + -2;
  piVar6 = piVar5;
LAB_1096e90f0:
  piVar5 = piVar6;
  uVar8 = (long)param_2 - (long)piVar5 >> 3;
  if ((long)uVar8 < 3) {
    if (uVar8 < 2) {
      return param_1;
    }
    if (uVar8 == 2) {
      iVar13 = param_2[-2];
      iVar12 = *piVar5;
      bVar1 = iVar13 < iVar12;
      if (iVar13 == iVar12) {
        bVar1 = param_2[-1] != piVar5[1] && param_2[-1] < piVar5[1];
      }
      if (!bVar1) {
        return param_1;
      }
      *piVar5 = iVar13;
      param_2[-2] = iVar12;
      iVar12 = piVar5[1];
      piVar5[1] = param_2[-1];
      param_2[-1] = iVar12;
      return param_1;
    }
  }
  else {
    if (uVar8 == 3) {
      piVar6 = piVar5 + 2;
      iVar12 = *piVar6;
      iVar13 = *piVar5;
      bVar1 = iVar12 < iVar13;
      if (iVar12 == iVar13) {
        bVar1 = piVar5[3] != piVar5[1] && piVar5[3] < piVar5[1];
      }
      iVar11 = *piVar9;
      bVar2 = iVar11 < iVar12;
      if (bVar1) {
        if (iVar11 == iVar12) {
          bVar2 = param_2[-1] != piVar5[3] && param_2[-1] < piVar5[3];
        }
        if (bVar2) {
          piVar4 = piVar5 + 1;
          *piVar5 = iVar11;
          *piVar9 = iVar13;
        }
        else {
          *piVar5 = iVar12;
          *piVar6 = iVar13;
          piVar4 = piVar5 + 3;
          iVar12 = piVar5[1];
          piVar5[1] = *piVar4;
          *piVar4 = iVar12;
          iVar13 = *piVar9;
          iVar11 = *piVar6;
          bVar1 = iVar13 < iVar11;
          if (iVar13 == iVar11) {
            bVar1 = param_2[-1] != iVar12 && param_2[-1] < iVar12;
          }
          if (!bVar1) {
            return piVar5;
          }
          *piVar6 = iVar13;
          *piVar9 = iVar11;
        }
        piVar9 = param_2 + -1;
      }
      else {
        if (iVar11 == iVar12) {
          bVar2 = param_2[-1] != piVar5[3] && param_2[-1] < piVar5[3];
        }
        if (!bVar2) {
          return piVar5;
        }
        *piVar6 = iVar11;
        *piVar9 = iVar12;
        piVar9 = piVar5 + 3;
        iVar12 = *piVar9;
        *piVar9 = param_2[-1];
        param_2[-1] = iVar12;
        iVar12 = *piVar6;
        iVar13 = *piVar5;
        bVar1 = iVar12 < iVar13;
        if (iVar12 == iVar13) {
          bVar1 = *piVar9 != piVar5[1] && *piVar9 < piVar5[1];
        }
        if (!bVar1) {
          return piVar5;
        }
        piVar4 = piVar5 + 1;
        *piVar5 = iVar12;
        *piVar6 = iVar13;
      }
      iVar12 = *piVar4;
      *piVar4 = *piVar9;
      *piVar9 = iVar12;
      return piVar4;
    }
    if (uVar8 == 4) {
      piVar6 = piVar5;
      FUN_1096e9860(piVar5,piVar5 + 2,piVar5 + 4);
      iVar13 = param_2[-2];
      iVar12 = piVar5[4];
      bVar1 = iVar13 < iVar12;
      if (iVar13 == iVar12) {
        bVar1 = param_2[-1] != piVar5[5] && param_2[-1] < piVar5[5];
      }
      if (!bVar1) {
        return piVar6;
      }
      piVar5[4] = iVar13;
      param_2[-2] = iVar12;
      iVar12 = piVar5[5];
      piVar5[5] = param_2[-1];
      param_2[-1] = iVar12;
      iVar12 = piVar5[4];
      iVar13 = piVar5[2];
      bVar1 = iVar12 < iVar13;
      if (iVar12 == iVar13) {
        bVar1 = piVar5[5] != piVar5[3] && piVar5[5] < piVar5[3];
      }
      if (!bVar1) {
        return piVar6;
      }
      iVar11 = piVar5[3];
      iVar17 = piVar5[5];
      piVar5[2] = iVar12;
      piVar5[3] = iVar17;
      piVar5[4] = iVar13;
      piVar5[5] = iVar11;
      iVar13 = *piVar5;
      bVar1 = iVar12 < iVar13;
      if (iVar12 == iVar13) {
        bVar1 = iVar17 != piVar5[1] && iVar17 < piVar5[1];
      }
      if (!bVar1) {
        return piVar6;
      }
      iVar11 = piVar5[1];
      *piVar5 = iVar12;
      piVar5[1] = iVar17;
      piVar5[2] = iVar13;
      piVar5[3] = iVar11;
      return piVar6;
    }
    if (uVar8 == 5) {
      piVar6 = piVar5 + 2;
      piVar4 = piVar5 + 4;
      piVar10 = piVar5 + 6;
      piVar7 = piVar5;
      FUN_1096e9860();
      iVar12 = *piVar10;
      iVar13 = *piVar4;
      bVar1 = iVar12 < iVar13;
      if (iVar12 == iVar13) {
        bVar1 = piVar5[7] != piVar5[5] && piVar5[7] < piVar5[5];
      }
      if (bVar1) {
        *piVar4 = iVar12;
        *piVar10 = iVar13;
        iVar12 = piVar5[5];
        piVar5[5] = piVar5[7];
        piVar5[7] = iVar12;
        iVar12 = *piVar4;
        iVar13 = *piVar6;
        bVar1 = iVar12 < iVar13;
        if (iVar12 == iVar13) {
          bVar1 = piVar5[5] != piVar5[3] && piVar5[5] < piVar5[3];
        }
        if (bVar1) {
          *piVar6 = iVar12;
          *piVar4 = iVar13;
          iVar12 = piVar5[3];
          piVar5[3] = piVar5[5];
          piVar5[5] = iVar12;
          iVar12 = *piVar6;
          iVar13 = *piVar5;
          bVar1 = iVar12 < iVar13;
          if (iVar12 == iVar13) {
            bVar1 = piVar5[3] != piVar5[1] && piVar5[3] < piVar5[1];
          }
          if (bVar1) {
            *piVar5 = iVar12;
            *piVar6 = iVar13;
            iVar12 = piVar5[1];
            piVar5[1] = piVar5[3];
            piVar5[3] = iVar12;
          }
        }
      }
      iVar12 = *piVar9;
      iVar13 = *piVar10;
      bVar1 = iVar12 < iVar13;
      if (iVar12 == iVar13) {
        bVar1 = param_2[-1] != piVar5[7] && param_2[-1] < piVar5[7];
      }
      if (bVar1) {
        *piVar10 = iVar12;
        *piVar9 = iVar13;
        iVar12 = piVar5[7];
        piVar5[7] = param_2[-1];
        param_2[-1] = iVar12;
        iVar12 = *piVar10;
        iVar13 = *piVar4;
        bVar1 = iVar12 < iVar13;
        if (iVar12 == iVar13) {
          bVar1 = piVar5[7] != piVar5[5] && piVar5[7] < piVar5[5];
        }
        if (bVar1) {
          *piVar4 = iVar12;
          *piVar10 = iVar13;
          iVar12 = piVar5[5];
          piVar5[5] = piVar5[7];
          piVar5[7] = iVar12;
          iVar12 = *piVar4;
          iVar13 = *piVar6;
          bVar1 = iVar12 < iVar13;
          if (iVar12 == iVar13) {
            bVar1 = piVar5[5] != piVar5[3] && piVar5[5] < piVar5[3];
          }
          if (bVar1) {
            *piVar6 = iVar12;
            *piVar4 = iVar13;
            iVar12 = piVar5[3];
            piVar5[3] = piVar5[5];
            piVar5[5] = iVar12;
            iVar12 = *piVar6;
            iVar13 = *piVar5;
            bVar1 = iVar12 < iVar13;
            if (iVar12 == iVar13) {
              bVar1 = piVar5[3] != piVar5[1] && piVar5[3] < piVar5[1];
            }
            if (bVar1) {
              *piVar5 = iVar12;
              *piVar6 = iVar13;
              iVar12 = piVar5[1];
              piVar5[1] = piVar5[3];
              piVar5[3] = iVar12;
            }
          }
        }
      }
      return piVar7;
    }
  }
  if ((long)uVar8 < 0x18) {
    piVar6 = piVar5 + 2;
    if ((param_5 & 1) == 0) {
      if (piVar5 == param_2 || piVar6 == param_2) {
        return param_1;
      }
      piVar9 = piVar5 + 3;
      do {
        piVar4 = piVar6;
        iVar12 = *piVar5;
        bVar1 = piVar5[2] < iVar12;
        if (piVar5[2] == iVar12) {
          bVar1 = piVar5[3] != piVar5[1] && piVar5[3] < piVar5[1];
        }
        if (bVar1) {
          iVar13 = *piVar4;
          iVar11 = piVar4[1];
          piVar5 = piVar9;
          do {
            piVar6 = piVar5;
            piVar6[-1] = iVar12;
            *piVar6 = piVar6[-2];
            iVar12 = piVar6[-5];
            bVar1 = iVar13 < iVar12;
            if (iVar12 == iVar13) {
              bVar1 = piVar6[-4] != iVar11 && iVar11 < piVar6[-4];
            }
            piVar5 = piVar6 + -2;
          } while (bVar1);
          piVar6[-3] = iVar13;
          piVar6[-2] = iVar11;
        }
        piVar9 = piVar9 + 2;
        piVar6 = piVar4 + 2;
        piVar5 = piVar4;
      } while (piVar4 + 2 != param_2);
      return param_1;
    }
    if (piVar5 == param_2 || piVar6 == param_2) {
      return param_1;
    }
    lVar14 = 0;
    piVar9 = piVar5;
    goto LAB_1096e96dc;
  }
  if (param_4 != 0) {
    param_1 = piVar5 + (uVar8 & 0xfffffffffffffffe);
    if (uVar8 < 0x81) {
      FUN_1096e9860(param_1,piVar5,piVar9);
    }
    else {
      FUN_1096e9860(piVar5,param_1,piVar9);
      piVar6 = param_1 + -2;
      FUN_1096e9860(piVar5 + 2,piVar6,param_2 + -4);
      FUN_1096e9860(piVar5 + 4,param_1 + 2,param_2 + -6);
      FUN_1096e9860(piVar6,param_1,param_1 + 2);
      uVar21 = *(undefined8 *)piVar5;
      *(undefined8 *)piVar5 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = uVar21;
      param_1 = piVar6;
    }
    param_4 = param_4 + -1;
    if ((param_5 & 1) != 0) {
LAB_1096e91e4:
      lVar14 = 0;
      iVar12 = *piVar5;
      iVar13 = piVar5[1];
      do {
        iVar11 = *(int *)((long)piVar5 + lVar14 + 8);
        bVar1 = iVar11 < iVar12;
        if (iVar11 == iVar12) {
          iVar17 = *(int *)((long)piVar5 + lVar14 + 0xc);
          bVar1 = iVar17 != iVar13 && iVar17 < iVar13;
        }
        lVar14 = lVar14 + 8;
      } while (bVar1);
      piVar4 = (int *)((long)piVar5 + lVar14);
      piVar6 = param_2;
      if (lVar14 == 8) {
        do {
          piVar10 = piVar6;
          if (piVar6 <= piVar4) break;
          piVar10 = piVar6 + -2;
          bVar1 = *piVar10 < iVar12;
          if (*piVar10 == iVar12) {
            bVar1 = piVar6[-1] != iVar13 && piVar6[-1] < iVar13;
          }
          piVar6 = piVar10;
        } while (!bVar1);
      }
      else {
        do {
          piVar10 = piVar6 + -2;
          bVar1 = *piVar10 < iVar12;
          if (*piVar10 == iVar12) {
            bVar1 = piVar6[-1] != iVar13 && piVar6[-1] < iVar13;
          }
          piVar6 = piVar10;
        } while (!bVar1);
      }
      piVar6 = piVar4;
      if (piVar4 < piVar10) {
        iVar17 = *piVar10;
        piVar7 = piVar10;
        do {
          *piVar6 = iVar17;
          *piVar7 = iVar11;
          iVar11 = piVar6[1];
          piVar6[1] = piVar7[1];
          piVar7[1] = iVar11;
          piVar20 = piVar6;
          do {
            piVar6 = piVar20 + 2;
            iVar11 = *piVar6;
            bVar1 = iVar11 < iVar12;
            if (iVar11 == iVar12) {
              bVar1 = piVar20[3] != iVar13 && piVar20[3] < iVar13;
            }
            piVar15 = piVar7;
            piVar20 = piVar6;
          } while (bVar1);
          do {
            piVar7 = piVar15 + -2;
            iVar17 = *piVar7;
            bVar1 = iVar17 < iVar12;
            if (iVar17 == iVar12) {
              bVar1 = piVar15[-1] != iVar13 && piVar15[-1] < iVar13;
            }
            piVar15 = piVar7;
          } while (!bVar1);
        } while (piVar6 < piVar7);
      }
      piVar7 = piVar6 + -2;
      if (piVar7 != piVar5) {
        *piVar5 = piVar6[-2];
        piVar5[1] = piVar6[-1];
      }
      piVar6[-2] = iVar12;
      piVar6[-1] = iVar13;
      if (piVar10 <= piVar4) {
        piVar4 = piVar5;
        FUN_1096e9c14(piVar5,piVar7,param_3);
        param_1 = piVar6;
        FUN_1096e9c14(piVar6,param_2,param_3);
        if ((int)param_1 != 0) goto LAB_1096e9520;
        if (((ulong)piVar4 & 1) != 0) goto LAB_1096e90f0;
      }
      FUN_1096e90a4(piVar5,piVar7,param_3,param_4,param_5 & 1);
      param_5 = 0;
      param_1 = piVar5;
      goto LAB_1096e90f0;
    }
    bVar1 = piVar5[-2] < *piVar5;
    if (piVar5[-2] == *piVar5) {
      bVar1 = piVar5[-1] != piVar5[1] && piVar5[-1] < piVar5[1];
    }
    if (bVar1) goto LAB_1096e91e4;
    iVar12 = *piVar5;
    iVar13 = piVar5[1];
    bVar1 = iVar12 < *piVar9;
    if (*piVar9 == iVar12) {
      bVar1 = param_2[-1] != iVar13 && iVar13 < param_2[-1];
    }
    piVar4 = piVar5;
    if (bVar1) {
      do {
        piVar6 = piVar4 + 2;
        bVar1 = iVar12 < *piVar6;
        if (*piVar6 == iVar12) {
          bVar1 = piVar4[3] != iVar13 && iVar13 < piVar4[3];
        }
        piVar4 = piVar6;
      } while (!bVar1);
    }
    else {
      do {
        piVar6 = piVar4 + 2;
        if (param_2 <= piVar6) break;
        bVar1 = iVar12 < *piVar6;
        if (*piVar6 == iVar12) {
          bVar1 = piVar4[3] != iVar13 && iVar13 < piVar4[3];
        }
        piVar4 = piVar6;
      } while (!bVar1);
    }
    piVar4 = param_2;
    piVar10 = param_2;
    if (piVar6 < param_2) {
      do {
        piVar4 = piVar10 + -2;
        bVar1 = iVar12 < *piVar4;
        if (*piVar4 == iVar12) {
          bVar1 = piVar10[-1] != iVar13 && iVar13 < piVar10[-1];
        }
        piVar10 = piVar4;
      } while (bVar1);
    }
    if (piVar6 < piVar4) {
      iVar11 = *piVar6;
      iVar17 = *piVar4;
      do {
        *piVar6 = iVar17;
        *piVar4 = iVar11;
        iVar11 = piVar6[1];
        piVar6[1] = piVar4[1];
        piVar4[1] = iVar11;
        piVar10 = piVar6;
        do {
          piVar6 = piVar10 + 2;
          iVar11 = *piVar6;
          bVar1 = iVar12 < iVar11;
          if (iVar11 == iVar12) {
            bVar1 = piVar10[3] != iVar13 && iVar13 < piVar10[3];
          }
          piVar7 = piVar4;
          piVar10 = piVar6;
        } while (!bVar1);
        do {
          piVar4 = piVar7 + -2;
          iVar17 = *piVar4;
          bVar1 = iVar12 < iVar17;
          if (iVar17 == iVar12) {
            bVar1 = piVar7[-1] != iVar13 && iVar13 < piVar7[-1];
          }
          piVar7 = piVar4;
        } while (bVar1);
      } while (piVar6 < piVar4);
    }
    if (piVar6 + -2 != piVar5) {
      *piVar5 = piVar6[-2];
      piVar5[1] = piVar6[-1];
    }
    param_5 = 0;
    piVar6[-2] = iVar12;
    piVar6[-1] = iVar13;
    goto LAB_1096e90f0;
  }
  if (piVar5 == param_2) {
    return param_1;
  }
  if (piVar5 == param_2) {
    return param_2;
  }
  lVar14 = (long)param_2 - (long)piVar5 >> 3;
  if (1 < lVar14) {
    uVar8 = lVar14 - 2U >> 1;
    lVar19 = uVar8 + 1;
    piVar6 = piVar5 + uVar8 * 2;
    do {
      FUN_1096ea114(piVar5,lVar14,piVar6);
      piVar6 = piVar6 + -2;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  piVar6 = param_2;
  if (1 < lVar14) {
    do {
      uVar21 = *(undefined8 *)piVar5;
      piVar9 = piVar5;
      uVar8 = 0;
      do {
        uVar16 = uVar8 << 1 | 1;
        uVar3 = uVar8 * 2 + 2;
        piVar4 = piVar9 + uVar8 * 2 + 2;
        if ((long)uVar3 < lVar14) {
          iVar12 = piVar9[uVar8 * 2 + 4];
          bVar1 = piVar9[uVar8 * 2 + 2] < iVar12;
          if (piVar9[uVar8 * 2 + 2] == iVar12) {
            bVar1 = piVar9[uVar8 * 2 + 3] != piVar9[uVar8 * 2 + 5] &&
                    piVar9[uVar8 * 2 + 3] < piVar9[uVar8 * 2 + 5];
          }
          if (bVar1) {
            piVar4 = piVar9 + uVar8 * 2 + 4;
            uVar16 = uVar3;
          }
        }
        *piVar9 = *piVar4;
        piVar9[1] = piVar4[1];
        piVar9 = piVar4;
        uVar8 = uVar16;
      } while ((long)uVar16 <= (long)(lVar14 - 2U >> 1));
      iVar12 = (int)uVar21;
      iVar13 = (int)((ulong)uVar21 >> 0x20);
      if (piVar4 == piVar6 + -2) {
        *piVar4 = iVar12;
        piVar4[1] = iVar13;
      }
      else {
        *piVar4 = piVar6[-2];
        piVar4[1] = piVar6[-1];
        piVar6[-2] = iVar12;
        piVar6[-1] = iVar13;
        lVar19 = (long)piVar4 + (8 - (long)piVar5) >> 3;
        if (1 < lVar19) {
          uVar8 = lVar19 - 2U >> 1;
          piVar9 = piVar5 + uVar8 * 2;
          iVar12 = *piVar9;
          bVar1 = iVar12 < *piVar4;
          if (iVar12 == *piVar4) {
            bVar1 = piVar9[1] != piVar4[1] && piVar9[1] < piVar4[1];
          }
          if (bVar1) {
            iVar13 = *piVar4;
            iVar11 = piVar4[1];
            do {
              piVar10 = piVar9;
              *piVar4 = iVar12;
              piVar4[1] = piVar10[1];
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1 >> 1;
              piVar9 = piVar5 + uVar8 * 2;
              iVar12 = *piVar9;
              bVar1 = iVar12 < iVar13;
              if (iVar12 == iVar13) {
                bVar1 = piVar9[1] != iVar11 && piVar9[1] < iVar11;
              }
              piVar4 = piVar10;
            } while (bVar1);
            *piVar10 = iVar13;
            piVar10[1] = iVar11;
          }
        }
      }
      bVar1 = 2 < lVar14;
      lVar14 = lVar14 + -1;
      piVar6 = piVar6 + -2;
    } while (bVar1);
  }
  return param_2;
LAB_1096e96dc:
  piVar4 = piVar6;
  iVar12 = *piVar9;
  bVar1 = piVar9[2] < iVar12;
  if (piVar9[2] == iVar12) {
    bVar1 = piVar9[3] != piVar9[1] && piVar9[3] < piVar9[1];
  }
  if (bVar1) {
    iVar13 = *piVar4;
    iVar11 = piVar4[1];
    lVar19 = lVar14;
    do {
      lVar18 = lVar19;
      *(int *)((long)piVar5 + lVar18 + 8) = iVar12;
      *(undefined4 *)((long)piVar5 + lVar18 + 0xc) = *(undefined4 *)((long)piVar5 + lVar18 + 4);
      piVar6 = piVar5;
      if (lVar18 == 0) goto LAB_1096e9760;
      iVar12 = *(int *)((long)piVar5 + lVar18 + -8);
      bVar1 = iVar13 < iVar12;
      if (iVar12 == iVar13) {
        iVar17 = *(int *)((long)piVar5 + lVar18 + -4);
        bVar1 = iVar17 != iVar11 && iVar11 < iVar17;
      }
      lVar19 = lVar18 + -8;
    } while (bVar1);
    piVar6 = (int *)((long)piVar5 + lVar18);
LAB_1096e9760:
    *piVar6 = iVar13;
    piVar6[1] = iVar11;
  }
  lVar14 = lVar14 + 8;
  piVar6 = piVar4 + 2;
  piVar9 = piVar4;
  if (piVar4 + 2 == param_2) {
    return param_1;
  }
  goto LAB_1096e96dc;
LAB_1096e9520:
  param_2 = piVar7;
  if (((ulong)piVar4 & 1) != 0) {
    return param_1;
  }
  goto LAB_1096e90dc;
}



/* Entry: 1096e9860; end: 1096e99bf;  */

void FUN_1096e9860(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  iVar3 = *param_2;
  iVar4 = *param_1;
  bVar1 = iVar3 < iVar4;
  if (iVar3 == iVar4) {
    bVar1 = param_2[1] != param_1[1] && param_2[1] < param_1[1];
  }
  iVar5 = *param_3;
  bVar2 = iVar5 < iVar3;
  if (bVar1) {
    if (iVar5 == iVar3) {
      bVar2 = param_3[1] != param_2[1] && param_3[1] < param_2[1];
    }
    if (bVar2) {
      piVar6 = param_1 + 1;
      *param_1 = iVar5;
      *param_3 = iVar4;
    }
    else {
      *param_1 = iVar3;
      *param_2 = iVar4;
      piVar6 = param_2 + 1;
      iVar3 = param_1[1];
      param_1[1] = *piVar6;
      *piVar6 = iVar3;
      iVar4 = *param_3;
      iVar5 = *param_2;
      bVar1 = iVar4 < iVar5;
      if (iVar4 == iVar5) {
        bVar1 = param_3[1] != iVar3 && param_3[1] < iVar3;
      }
      if (!bVar1) {
        return;
      }
      *param_2 = iVar4;
      *param_3 = iVar5;
    }
    piVar7 = param_3 + 1;
  }
  else {
    if (iVar5 == iVar3) {
      bVar2 = param_3[1] != param_2[1] && param_3[1] < param_2[1];
    }
    if (!bVar2) {
      return;
    }
    *param_2 = iVar5;
    *param_3 = iVar3;
    piVar7 = param_2 + 1;
    iVar3 = *piVar7;
    *piVar7 = param_3[1];
    param_3[1] = iVar3;
    iVar3 = *param_2;
    iVar4 = *param_1;
    bVar1 = iVar3 < iVar4;
    if (iVar3 == iVar4) {
      bVar1 = *piVar7 != param_1[1] && *piVar7 < param_1[1];
    }
    if (!bVar1) {
      return;
    }
    piVar6 = param_1 + 1;
    *param_1 = iVar3;
    *param_2 = iVar4;
  }
  iVar3 = *piVar6;
  *piVar6 = *piVar7;
  *piVar7 = iVar3;
  return;
}



/* Entry: 1096e99c0; end: 1096e9c13;  */

void FUN_1096e99c0(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  FUN_1096e9860();
  iVar2 = *param_4;
  iVar3 = *param_3;
  bVar1 = iVar2 < iVar3;
  if (iVar2 == iVar3) {
    bVar1 = param_4[1] != param_3[1] && param_4[1] < param_3[1];
  }
  if (bVar1) {
    *param_3 = iVar2;
    *param_4 = iVar3;
    iVar2 = param_3[1];
    param_3[1] = param_4[1];
    param_4[1] = iVar2;
    iVar2 = *param_3;
    iVar3 = *param_2;
    bVar1 = iVar2 < iVar3;
    if (iVar2 == iVar3) {
      bVar1 = param_3[1] != param_2[1] && param_3[1] < param_2[1];
    }
    if (bVar1) {
      *param_2 = iVar2;
      *param_3 = iVar3;
      iVar2 = param_2[1];
      param_2[1] = param_3[1];
      param_3[1] = iVar2;
      iVar2 = *param_2;
      iVar3 = *param_1;
      bVar1 = iVar2 < iVar3;
      if (iVar2 == iVar3) {
        bVar1 = param_2[1] != param_1[1] && param_2[1] < param_1[1];
      }
      if (bVar1) {
        *param_1 = iVar2;
        *param_2 = iVar3;
        iVar2 = param_1[1];
        param_1[1] = param_2[1];
        param_2[1] = iVar2;
      }
    }
  }
  iVar2 = *param_5;
  iVar3 = *param_4;
  bVar1 = iVar2 < iVar3;
  if (iVar2 == iVar3) {
    bVar1 = param_5[1] != param_4[1] && param_5[1] < param_4[1];
  }
  if (bVar1) {
    *param_4 = iVar2;
    *param_5 = iVar3;
    iVar2 = param_4[1];
    param_4[1] = param_5[1];
    param_5[1] = iVar2;
    iVar2 = *param_4;
    iVar3 = *param_3;
    bVar1 = iVar2 < iVar3;
    if (iVar2 == iVar3) {
      bVar1 = param_4[1] != param_3[1] && param_4[1] < param_3[1];
    }
    if (bVar1) {
      *param_3 = iVar2;
      *param_4 = iVar3;
      iVar2 = param_3[1];
      param_3[1] = param_4[1];
      param_4[1] = iVar2;
      iVar2 = *param_3;
      iVar3 = *param_2;
      bVar1 = iVar2 < iVar3;
      if (iVar2 == iVar3) {
        bVar1 = param_3[1] != param_2[1] && param_3[1] < param_2[1];
      }
      if (bVar1) {
        *param_2 = iVar2;
        *param_3 = iVar3;
        iVar2 = param_2[1];
        param_2[1] = param_3[1];
        param_3[1] = iVar2;
        iVar2 = *param_2;
        iVar3 = *param_1;
        bVar1 = iVar2 < iVar3;
        if (iVar2 == iVar3) {
          bVar1 = param_2[1] != param_1[1] && param_2[1] < param_1[1];
        }
        if (bVar1) {
          *param_1 = iVar2;
          *param_2 = iVar3;
          iVar2 = param_1[1];
          param_1[1] = param_2[1];
          param_2[1] = iVar2;
        }
      }
    }
  }
  return;
}



/* Entry: 1096e9c14; end: 1096e9eb3;  */

bool FUN_1096e9c14(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  long lVar12;
  int *piVar13;
  
  uVar6 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar6 < 3) {
    if (uVar6 < 2) {
      return true;
    }
    if (uVar6 == 2) {
      iVar10 = param_2[-2];
      iVar9 = *param_1;
      bVar1 = iVar10 < iVar9;
      if (iVar10 == iVar9) {
        bVar1 = param_2[-1] != param_1[1] && param_2[-1] < param_1[1];
      }
      if (!bVar1) {
        return true;
      }
      *param_1 = iVar10;
      param_2[-2] = iVar9;
      iVar9 = param_1[1];
      param_1[1] = param_2[-1];
      param_2[-1] = iVar9;
      return true;
    }
  }
  else {
    if (uVar6 == 3) {
      FUN_1096e9860(param_1,param_1 + 2,param_2 + -2);
      return true;
    }
    if (uVar6 == 4) {
      FUN_1096e9860(param_1,param_1 + 2,param_1 + 4);
      iVar10 = param_2[-2];
      iVar9 = param_1[4];
      bVar1 = iVar10 < iVar9;
      if (iVar10 == iVar9) {
        bVar1 = param_2[-1] != param_1[5] && param_2[-1] < param_1[5];
      }
      if (!bVar1) {
        return true;
      }
      param_1[4] = iVar10;
      param_2[-2] = iVar9;
      iVar9 = param_1[5];
      param_1[5] = param_2[-1];
      param_2[-1] = iVar9;
      iVar9 = param_1[4];
      iVar10 = param_1[2];
      bVar1 = iVar9 < iVar10;
      if (iVar9 == iVar10) {
        bVar1 = param_1[5] != param_1[3] && param_1[5] < param_1[3];
      }
      if (!bVar1) {
        return true;
      }
      iVar2 = param_1[3];
      iVar3 = param_1[5];
      param_1[2] = iVar9;
      param_1[3] = iVar3;
      param_1[4] = iVar10;
      param_1[5] = iVar2;
      iVar10 = *param_1;
      bVar1 = iVar9 < iVar10;
      if (iVar9 == iVar10) {
        bVar1 = iVar3 != param_1[1] && iVar3 < param_1[1];
      }
      if (!bVar1) {
        return true;
      }
      iVar2 = param_1[1];
      *param_1 = iVar9;
      param_1[1] = iVar3;
      param_1[2] = iVar10;
      param_1[3] = iVar2;
      return true;
    }
    if (uVar6 == 5) {
      FUN_1096e99c0(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
      return true;
    }
  }
  FUN_1096e9860(param_1,param_1 + 2,param_1 + 4);
  if (param_1 + 6 != param_2) {
    lVar8 = 0;
    iVar9 = 0;
    piVar11 = param_1 + 6;
    piVar13 = param_1 + 4;
    do {
      piVar7 = piVar11;
      iVar10 = *piVar13;
      bVar1 = *piVar7 < iVar10;
      if (*piVar7 == iVar10) {
        bVar1 = piVar7[1] != piVar13[1] && piVar7[1] < piVar13[1];
      }
      if (bVar1) {
        iVar2 = *piVar7;
        iVar3 = piVar7[1];
        lVar5 = lVar8;
        do {
          lVar12 = lVar5;
          *(int *)((long)param_1 + lVar12 + 0x18) = iVar10;
          *(undefined4 *)((long)param_1 + lVar12 + 0x1c) =
               *(undefined4 *)((long)param_1 + lVar12 + 0x14);
          piVar11 = param_1;
          if (lVar12 == -0x10) goto LAB_1096e9d90;
          iVar10 = *(int *)((long)param_1 + lVar12 + 8);
          bVar1 = iVar2 < iVar10;
          if (iVar10 == iVar2) {
            iVar4 = *(int *)((long)param_1 + lVar12 + 0xc);
            bVar1 = iVar4 != iVar3 && iVar3 < iVar4;
          }
          lVar5 = lVar12 + -8;
        } while (bVar1);
        piVar11 = (int *)((long)param_1 + lVar12 + 0x10);
LAB_1096e9d90:
        *piVar11 = iVar2;
        piVar11[1] = iVar3;
        iVar9 = iVar9 + 1;
        if (iVar9 == 8) {
          return piVar7 + 2 == param_2;
        }
      }
      lVar8 = lVar8 + 8;
      piVar11 = piVar7 + 2;
      piVar13 = piVar7;
    } while (piVar7 + 2 != param_2);
  }
  return true;
}



/* Entry: 1096e9eb4; end: 1096ea113;  */

int * FUN_1096e9eb4(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  
  piVar13 = param_3;
  if (param_1 != param_2) {
    lVar12 = (long)param_2 - (long)param_1 >> 3;
    piVar13 = param_2;
    if (1 < lVar12) {
      uVar4 = lVar12 - 2U >> 1;
      lVar14 = uVar4 + 1;
      piVar9 = param_1 + uVar4 * 2;
      do {
        FUN_1096ea114(param_1,lVar12,piVar9);
        piVar9 = piVar9 + -2;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    for (; piVar13 != param_3; piVar13 = piVar13 + 2) {
      iVar6 = *piVar13;
      iVar8 = *param_1;
      bVar1 = iVar6 < iVar8;
      if (iVar6 == iVar8) {
        bVar1 = piVar13[1] != param_1[1] && piVar13[1] < param_1[1];
      }
      if (bVar1) {
        *piVar13 = iVar8;
        *param_1 = iVar6;
        iVar6 = piVar13[1];
        piVar13[1] = param_1[1];
        param_1[1] = iVar6;
        FUN_1096ea114(param_1,lVar12,param_1);
      }
    }
    if (1 < lVar12) {
      do {
        uVar7 = *(undefined8 *)param_1;
        piVar9 = param_1;
        uVar4 = 0;
        do {
          uVar11 = uVar4 << 1 | 1;
          uVar2 = uVar4 * 2 + 2;
          piVar5 = piVar9 + uVar4 * 2 + 2;
          if ((long)uVar2 < lVar12) {
            iVar6 = piVar9[uVar4 * 2 + 4];
            bVar1 = piVar9[uVar4 * 2 + 2] < iVar6;
            if (piVar9[uVar4 * 2 + 2] == iVar6) {
              bVar1 = piVar9[uVar4 * 2 + 3] != piVar9[uVar4 * 2 + 5] &&
                      piVar9[uVar4 * 2 + 3] < piVar9[uVar4 * 2 + 5];
            }
            if (bVar1) {
              piVar5 = piVar9 + uVar4 * 2 + 4;
              uVar11 = uVar2;
            }
          }
          *piVar9 = *piVar5;
          piVar9[1] = piVar5[1];
          piVar9 = piVar5;
          uVar4 = uVar11;
        } while ((long)uVar11 <= (long)(lVar12 - 2U >> 1));
        iVar6 = (int)uVar7;
        iVar8 = (int)((ulong)uVar7 >> 0x20);
        if (piVar5 == param_2 + -2) {
          *piVar5 = iVar6;
          piVar5[1] = iVar8;
        }
        else {
          *piVar5 = param_2[-2];
          piVar5[1] = param_2[-1];
          param_2[-2] = iVar6;
          param_2[-1] = iVar8;
          lVar14 = (long)piVar5 + (8 - (long)param_1) >> 3;
          if (1 < lVar14) {
            uVar4 = lVar14 - 2U >> 1;
            piVar9 = param_1 + uVar4 * 2;
            iVar6 = *piVar9;
            bVar1 = iVar6 < *piVar5;
            if (iVar6 == *piVar5) {
              bVar1 = piVar9[1] != piVar5[1] && piVar9[1] < piVar5[1];
            }
            if (bVar1) {
              iVar8 = *piVar5;
              iVar3 = piVar5[1];
              do {
                piVar10 = piVar9;
                *piVar5 = iVar6;
                piVar5[1] = piVar10[1];
                if (uVar4 == 0) break;
                uVar4 = uVar4 - 1 >> 1;
                piVar9 = param_1 + uVar4 * 2;
                iVar6 = *piVar9;
                bVar1 = iVar6 < iVar8;
                if (iVar6 == iVar8) {
                  bVar1 = piVar9[1] != iVar3 && piVar9[1] < iVar3;
                }
                piVar5 = piVar10;
              } while (bVar1);
              *piVar10 = iVar8;
              piVar10[1] = iVar3;
            }
          }
        }
        bVar1 = 2 < lVar12;
        lVar12 = lVar12 + -1;
        param_2 = param_2 + -2;
      } while (bVar1);
    }
  }
  return piVar13;
}



/* Entry: 1096ea114; end: 1096ea263;  */

void FUN_1096ea114(long param_1,long param_2,int *param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  
  if (1 < param_2) {
    uVar6 = param_2 - 2U >> 1;
    if ((long)param_3 - param_1 >> 3 <= (long)uVar6) {
      lVar10 = (long)param_3 - param_1 >> 2;
      uVar9 = lVar10 + 1;
      piVar8 = (int *)(param_1 + uVar9 * 8);
      uVar2 = lVar10 + 2;
      if ((long)uVar2 < param_2) {
        iVar11 = piVar8[2];
        bVar1 = *piVar8 < iVar11;
        if (*piVar8 == iVar11) {
          bVar1 = piVar8[1] != piVar8[3] && piVar8[1] < piVar8[3];
        }
        if (bVar1) {
          piVar8 = piVar8 + 2;
          uVar9 = uVar2;
        }
      }
      iVar11 = *piVar8;
      bVar1 = iVar11 < *param_3;
      if (iVar11 == *param_3) {
        bVar1 = piVar8[1] != param_3[1] && piVar8[1] < param_3[1];
      }
      if (!bVar1) {
        iVar4 = *param_3;
        iVar5 = param_3[1];
        do {
          piVar7 = piVar8;
          *param_3 = iVar11;
          param_3[1] = piVar7[1];
          if ((long)uVar6 < (long)uVar9) break;
          uVar3 = uVar9 << 1 | 1;
          piVar8 = (int *)(param_1 + uVar3 * 8);
          uVar2 = uVar9 * 2 + 2;
          uVar9 = uVar3;
          if ((long)uVar2 < param_2) {
            iVar11 = piVar8[2];
            bVar1 = *piVar8 < iVar11;
            if (*piVar8 == iVar11) {
              bVar1 = piVar8[1] != piVar8[3] && piVar8[1] < piVar8[3];
            }
            if (bVar1) {
              piVar8 = piVar8 + 2;
              uVar9 = uVar2;
            }
          }
          iVar11 = *piVar8;
          bVar1 = iVar11 < iVar4;
          if (iVar11 == iVar4) {
            bVar1 = piVar8[1] != iVar5 && piVar8[1] < iVar5;
          }
          param_3 = piVar7;
        } while (!bVar1);
        *piVar7 = iVar4;
        piVar7[1] = iVar5;
      }
    }
  }
  return;
}



/* Entry: 1096ea264; end: 1096ea29b;  */

void FUN_1096ea264(uint *param_1,ulong param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  
  if (param_2 >> 0x3d == 0) {
    puVar4 = param_1;
    FUN_1093c3be0();
    *(uint **)param_1 = puVar4;
    *(uint **)(param_1 + 2) = puVar4;
    *(uint **)(param_1 + 4) = puVar4 + param_2 * 2;
    return;
  }
  FUN_1093c3bcc();
  do {
    uVar1 = uRam000000011382ab20 + 1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x11382ab20,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      uRam000000011382ab20 = uVar1;
    }
  } while (cVar2 != '\0');
  *param_1 = (uint)((ulong)uVar1 * 0x9fa8f307 >> 0x20) ^ 0x72ae73bc;
  param_1[1] = (uint)((ulong)uVar1 * 0x51493ecf >> 0x20) ^ 0xcecadc9f;
  param_1[2] = (uint)((ulong)uVar1 * 0x7b846ea4 >> 0x20) ^ 0xfe76aebc;
  param_1[3] = (uint)((ulong)uVar1 * 0xb66a8f59 >> 0x20) ^ 0xb4cc676a;
  return;
}



/* Entry: 1096ea29c; end: 1096ea32f;  */

void FUN_1096ea29c(uint *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  
  do {
    uVar1 = uRam000000011382ab20 + 1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x11382ab20,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      uRam000000011382ab20 = uVar1;
    }
  } while (cVar2 != '\0');
  *param_1 = (uint)((ulong)uVar1 * 0x9fa8f307 >> 0x20) ^ 0x72ae73bc;
  param_1[1] = (uint)((ulong)uVar1 * 0x51493ecf >> 0x20) ^ 0xcecadc9f;
  param_1[2] = (uint)((ulong)uVar1 * 0x7b846ea4 >> 0x20) ^ 0xfe76aebc;
  param_1[3] = (uint)((ulong)uVar1 * 0xb66a8f59 >> 0x20) ^ 0xb4cc676a;
  return;
}



/* Entry: 1096ea330; end: 1096ea42f;  */

void FUN_1096ea330(undefined8 *param_1,long param_2,ulong param_3,char param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lStack_50;
  ulong uStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0;
    uVar2 = 0;
    do {
      if (*(char *)(param_2 + uVar3) == param_4) {
        if (param_3 < uVar2) {
          FUN_109262df8(&UNK_10f57e808);
          goto LAB_1096ea408;
        }
        lStack_50 = param_2 + uVar2;
        uStack_48 = param_3 - uVar2;
        if (uVar3 - uVar2 <= param_3 - uVar2) {
          uStack_48 = uVar3 - uVar2;
        }
        FUN_1096ea430(param_1,&lStack_50);
        uVar2 = uVar3 + 1;
      }
      uVar3 = uVar3 + 1;
    } while (param_3 != uVar3);
    if (param_3 < uVar2) {
      FUN_109262df8(&UNK_10f57e808);
LAB_1096ea408:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1096ea40c);
      (*pcVar1)();
    }
  }
  lStack_50 = param_2 + uVar2;
  uStack_48 = param_3 - uVar2;
  FUN_1096ea430(param_1,&lStack_50);
  return;
}



/* Entry: 1096ea430; end: 1096ea4f7;  */

/* WARNING: Possible PIC construction at 0x0001096eea8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001096eb000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001096ea7fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001096ea830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001096ea800) */
/* WARNING: Removing unreachable block (ram,0x0001096eea90) */
/* WARNING: Removing unreachable block (ram,0x0001096ea834) */
/* WARNING: Type propagation algorithm not settling */

char ** FUN_1096ea430(char **param_1,char **param_2,char *param_3)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  float *pfVar7;
  char **ppcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  char **ppcVar12;
  char **ppcVar13;
  char **ppcVar14;
  undefined8 *puVar15;
  char **ppcVar16;
  char **ppcVar17;
  ulong *puVar18;
  undefined *puVar19;
  char **ppcVar20;
  char **ppcVar21;
  char cVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  long *plVar26;
  undefined8 uVar27;
  ulong uVar28;
  ulong uVar29;
  float *pfVar30;
  ulong uVar31;
  char **ppcVar32;
  char *pcVar33;
  long lVar34;
  char *pcVar35;
  char **ppcVar36;
  char **unaff_x22;
  char *pcVar37;
  char *pcVar38;
  uint uVar39;
  char *pcVar40;
  char **ppcVar41;
  char **unaff_x24;
  char *pcVar42;
  char **ppcVar43;
  char **unaff_x25;
  char **unaff_x26;
  int iVar44;
  char **unaff_x27;
  char **ppcVar45;
  undefined8 *******pppppppuVar46;
  undefined8 uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined4 uVar51;
  float fVar52;
  char *pcVar53;
  double dVar54;
  undefined1 auVar55 [16];
  undefined8 uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  short sVar62;
  undefined2 uVar63;
  short sVar64;
  short sVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  ulong unaff_d9;
  ulong uVar69;
  ulong unaff_d10;
  float fVar70;
  ulong unaff_d11;
  float fVar71;
  ulong unaff_d12;
  float fVar72;
  float fVar73;
  ulong unaff_d13;
  ulong unaff_d14;
  ulong unaff_d15;
  undefined1 auStack_1190 [8];
  char acStack_1188 [64];
  long lStack_1148;
  ulong uStack_1140;
  char *pcStack_1138;
  char **ppcStack_1130;
  char **ppcStack_1128;
  char **ppcStack_1120;
  char **ppcStack_1118;
  char **ppcStack_1110;
  char **ppcStack_1108;
  ulong uStack_1100;
  ulong uStack_10f8;
  char **ppcStack_10f0;
  char **ppcStack_10e8;
  undefined8 *******pppppppuStack_10e0;
  code *pcStack_10d8;
  ulong *puStack_10d0;
  ulong *puStack_10c8;
  int *piStack_10c0;
  undefined8 *puStack_10b8;
  uint *puStack_10b0;
  uint uStack_109c;
  int iStack_1098;
  uint uStack_1094;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  ulong uStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  long lStack_1048;
  ulong uStack_1040;
  char **ppcStack_1038;
  char **ppcStack_1030;
  char **ppcStack_1028;
  undefined8 *******pppppppuStack_1020;
  code *pcStack_1018;
  char *apcStack_1010 [64];
  char *apcStack_e10 [64];
  long lStack_c10;
  char **ppcStack_c00;
  char **ppcStack_bf8;
  char **ppcStack_bf0;
  char **ppcStack_be8;
  char **ppcStack_be0;
  char **ppcStack_bd8;
  char **ppcStack_bd0;
  char **ppcStack_bc8;
  char **ppcStack_bc0;
  char **ppcStack_bb8;
  undefined8 *******pppppppuStack_bb0;
  code *pcStack_ba8;
  char *apcStack_b98 [8];
  long lStack_b58;
  char **ppcStack_b50;
  char **ppcStack_b48;
  undefined8 *******pppppppuStack_b40;
  code *pcStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  char **ppcStack_b10;
  undefined8 uStack_b08;
  float fStack_b00;
  float fStack_afc;
  float fStack_af8;
  float fStack_af4;
  undefined8 uStack_af0;
  code *pcStack_ae8;
  float fStack_ae0;
  float fStack_adc;
  float fStack_ad8;
  float fStack_ad4;
  float fStack_ad0;
  float fStack_acc;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  double dStack_ab8;
  double dStack_ab0;
  undefined8 uStack_aa8;
  ulong uStack_aa0;
  char *pcStack_a98;
  char **ppcStack_a90;
  char **ppcStack_a88;
  char **ppcStack_a80;
  char **ppcStack_a78;
  char **ppcStack_a70;
  char **ppcStack_a68;
  char **ppcStack_a60;
  char **ppcStack_a58;
  char **ppcStack_a50;
  char **ppcStack_a48;
  undefined8 *******pppppppuStack_a40;
  code *pcStack_a38;
  char *apcStack_a30 [3];
  long lStack_a18;
  ulong uStack_a10;
  char *pcStack_a08;
  char **ppcStack_a00;
  char **ppcStack_9f8;
  char **ppcStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 *******pppppppuStack_9d0;
  code *pcStack_9c8;
  long lStack_9c0;
  char *pcStack_9b8;
  ulong uStack_9b0;
  ulong uStack_9a8;
  ulong uStack_9a0;
  ulong uStack_998;
  ulong uStack_990;
  ulong uStack_988;
  ulong uStack_980;
  char *pcStack_978;
  char **ppcStack_970;
  char **ppcStack_968;
  char **ppcStack_960;
  char **ppcStack_958;
  char **ppcStack_950;
  char **ppcStack_948;
  char **ppcStack_940;
  char **ppcStack_938;
  char **ppcStack_930;
  char **ppcStack_928;
  undefined8 *******pppppppuStack_920;
  undefined8 uStack_918;
  undefined1 auStack_910 [8];
  char **ppcStack_908;
  char **ppcStack_900;
  char **ppcStack_8f8;
  ulong uStack_8f0;
  undefined8 uStack_8e8;
  char *apcStack_8e0 [256];
  long lStack_e0;
  undefined8 ******ppppppuStack_40;
  undefined8 uStack_38;
  
  plVar26 = (long *)param_1[1];
  if (plVar26 < param_1[2]) {
    pcVar33 = *param_2;
    plVar26[1] = (long)param_2[1];
    *plVar26 = (long)pcVar33;
    plVar26 = plVar26 + 2;
    ppcVar12 = param_1;
LAB_1096ea4e0:
    param_1[1] = (char *)plVar26;
    return ppcVar12;
  }
  lVar34 = (long)plVar26 - (long)*param_1;
  uVar29 = (lVar34 >> 4) + 1;
  if (uVar29 >> 0x3c == 0) {
    uVar25 = (long)param_1[2] - (long)*param_1;
    uVar31 = (long)uVar25 >> 3;
    if (uVar31 <= uVar29) {
      uVar31 = uVar29;
    }
    if (0x7fffffffffffffef < uVar25) {
      uVar31 = 0xfffffffffffffff;
    }
    ppcVar32 = param_1;
    FUN_10926d2c8();
    plVar1 = (long *)((long)ppcVar32 + lVar34);
    pcVar33 = *param_2;
    plVar1[1] = (long)param_2[1];
    *plVar1 = (long)pcVar33;
    plVar26 = plVar1 + 2;
    pcVar33 = (char *)((long)plVar1 - ((long)param_1[1] - (long)*param_1));
    _memcpy(pcVar33);
    ppcVar12 = (char **)*param_1;
    *param_1 = pcVar33;
    param_1[1] = (char *)plVar26;
    param_1[2] = (char *)(ppcVar32 + uVar31 * 2);
    if (ppcVar12 != (char **)0x0) {
      __ZdlPv();
    }
    goto LAB_1096ea4e0;
  }
  ppcVar12 = param_1;
  ppcVar16 = param_2;
  pcVar53 = (char *)FUN_10926d2b4();
  uStack_38 = 0x1096ea4f8;
  pfVar7 = (float *)auStack_910;
  lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar13 = (char **)0x1;
  pcVar33 = (char *)0x9c60;
  ppppppuStack_40 = (undefined8 ******)&stack0xfffffffffffffff0;
  _calloc();
  ppcVar32 = ppcVar13;
  if (ppcVar13 == (char **)0x0) {
    ppcVar14 = (char **)0x0;
  }
  else {
    unaff_x27 = ppcVar13 + 0x1200;
    param_1 = (char **)0x1;
    ppcVar14 = (char **)0x1;
    pcVar33 = (char *)0x10;
    _calloc();
    ppcVar13[0x1384] = (char *)ppcVar14;
    if (ppcVar14 != (char **)0x0) {
      *(float *)(ppcVar13 + 8) = 1.0;
      *(float *)((long)ppcVar13 + 0x4c) = 1.0;
      pcVar33 = (char *)NEON_fmov(0x3f800000,4);
      ppcVar13[0xc] = pcVar33;
      *(float *)(ppcVar13 + 0xd) = 1.0;
      *(float *)((long)ppcVar13 + 300) = 1.0;
      *(float *)((long)ppcVar13 + 0xec) = 1.0;
      *(float *)((long)ppcVar13 + 0x11c) = 4.0;
      *(char *)((long)ppcVar13 + 0x134) = '\x01';
      *(char *)((long)ppcVar13 + 0x136) = '\x01';
      *(float *)((long)ppcVar13 + 0x9c54) = SUB84(pcVar53,0);
      cVar22 = *(char *)ppcVar12;
      if (cVar22 != '\0') {
        iVar44 = 2;
        unaff_x24 = (char **)0x1;
        ppcVar14 = (char **)&UNK_10f57e81c;
        pcVar33 = (char *)ppcVar12;
        do {
          if ((cVar22 == '<') && (iVar44 == 2)) {
            *(char *)ppcVar12 = '\0';
            iVar44 = 1;
            pcVar33 = (char *)((long)ppcVar12 + 1);
          }
          else {
            unaff_x22 = (char **)((long)ppcVar12 + 1);
            if ((cVar22 == '>') && (iVar44 == 1)) {
              *(char *)ppcVar12 = '\0';
              cVar22 = *pcVar33;
              if (cVar22 == '\0') {
                param_1 = (char **)0x1;
              }
              else {
                do {
                  param_3 = (char *)0x7;
                  ppcVar45 = ppcVar14;
                  _memchr(&UNK_10f57e81c,(int)cVar22);
                  if (ppcVar45 == (char **)0x0) break;
                  pcVar33 = (char *)((long)pcVar33 + 1);
                  cVar22 = *pcVar33;
                } while (cVar22 != '\0');
                param_1 = (char **)(ulong)(cVar22 != '/');
              }
              uVar24 = (uint)param_1;
              unaff_x25 = (char **)((long)pcVar33 + (ulong)(uVar24 ^ 1));
              uVar29 = (ulong)*(byte *)unaff_x25;
              ppcVar45 = unaff_x25;
              if (0x3f < *(byte *)unaff_x25 || (1L << (uVar29 & 0x3f) & 0x8000000200000001U) == 0) {
                do {
                  param_2 = (char **)((long)ppcVar45 + 1);
                  param_3 = (char *)0x7;
                  ppcVar21 = ppcVar14;
                  _memchr(&UNK_10f57e81c,(int)(char)uVar29);
                  if (ppcVar21 != (char **)0x0) {
                    *(char *)ppcVar45 = '\0';
                    if (uVar24 == 0) goto LAB_1096ea83c;
                    goto LAB_1096ea6b4;
                  }
                  uVar29 = (ulong)*(byte *)param_2;
                  ppcVar45 = param_2;
                } while (*(byte *)param_2 != 0);
                if (uVar24 != 0) {
LAB_1096ea6b4:
                  unaff_x24 = (char **)(ulong)*(byte *)param_2;
                  ppcVar12 = (char **)pcVar33;
                  if (*(byte *)param_2 == 0) {
                    uVar29 = 0;
                    goto LAB_1096ea7e0;
                  }
                  uVar29 = 0;
                  ppcStack_900 = ppcVar16;
                  ppcStack_8f8 = unaff_x27;
                  goto LAB_1096ea6c4;
                }
LAB_1096ea83c:
                if ((*(char *)unaff_x25 == 'g') && (*(char *)((long)unaff_x25 + 1) == '\0')) {
                  if (0 < (int)*(float *)(ppcVar13 + 0x1380)) {
                    *(uint *)(ppcVar13 + 0x1380) = (int)*(float *)(ppcVar13 + 0x1380) - 1;
                  }
                }
                else {
                  ppcVar45 = unaff_x25;
                  _strcmp(unaff_x25,"path");
                  if ((int)ppcVar45 == 0) {
                    *(char *)(ppcVar13 + 0x138b) = '\0';
                  }
                  else {
                    ppcVar45 = unaff_x25;
                    _strcmp(unaff_x25,"defs");
                    if ((int)ppcVar45 == 0) {
                      *(char *)((long)ppcVar13 + 0x9c59) = '\0';
                    }
                  }
                }
              }
              iVar44 = 2;
              pcVar33 = (char *)unaff_x22;
            }
          }
          ppcVar12 = (char **)((long)ppcVar12 + 1);
          cVar22 = *(char *)ppcVar12;
        } while (cVar22 != '\0');
        ppcVar14 = (char **)ppcVar13[0x1384];
        ppcVar12 = (char **)pcVar33;
      }
      pcVar37 = ppcVar14[1];
      if (pcVar37 == (char *)0x0) {
        auVar55 = ZEXT216(0);
      }
      else {
        auVar55 = *(undefined1 (*) [16])(pcVar37 + 0x98);
        for (lVar34 = *(long *)(pcVar37 + 0xb0); lVar34 != 0; lVar34 = *(long *)(lVar34 + 0xb0)) {
          fVar70 = (float)((ulong)*(undefined8 *)(lVar34 + 0xa0) >> 0x20);
          uVar47 = *(undefined8 *)*(undefined1 (*) [12])(lVar34 + 0x98);
          sVar62 = -(ushort)(auVar55._4_4_ < (float)((ulong)uVar47 >> 0x20));
          sVar64 = -(ushort)((float)*(undefined8 *)(lVar34 + 0xa0) < auVar55._8_4_);
          sVar65 = -(ushort)(fVar70 < auVar55._12_4_);
          auVar4._12_4_ = fVar70;
          auVar4._0_12_ = *(undefined1 (*) [12])(lVar34 + 0x98);
          auVar5._4_2_ = sVar62;
          auVar5._0_4_ = (int)(short)-(ushort)(auVar55._0_4_ < (float)uVar47);
          auVar5._6_2_ = sVar62 >> 0xf;
          auVar5._8_2_ = sVar64;
          auVar5._10_2_ = sVar64 >> 0xf;
          auVar5._12_2_ = sVar65;
          auVar5._14_2_ = sVar65 >> 0xf;
          auVar55 = auVar55 ^ (auVar55 ^ auVar4) & ~auVar5;
        }
      }
      fVar70 = *(float *)(ppcVar13 + 5000);
      fVar49 = 0.0;
      fVar57 = 0.0;
      fVar52 = 0.0;
      fVar73 = auVar55._4_4_;
      if (fVar70 == 0.0) {
        fVar70 = *(float *)ppcVar14;
        fVar49 = 0.0;
        fVar57 = 0.0;
        fVar52 = 0.0;
        if (fVar70 <= 0.0) {
          *(float *)(ppcVar13 + 4999) = auVar55._0_4_;
          fVar52 = auVar55._8_4_;
          fVar70 = fVar52 - auVar55._0_4_;
          fVar49 = fVar52 - fVar73;
          fVar57 = fVar52 - fVar52;
          fVar52 = fVar52 - auVar55._12_4_;
        }
        *(float *)(ppcVar13 + 5000) = fVar70;
      }
      uVar63 = (undefined2)((uint)fVar49 >> 0x10);
      fVar67 = *(float *)((long)ppcVar13 + 0x9c44);
      if (fVar67 == 0.0) {
        fVar67 = *(float *)((long)ppcVar14 + 4);
        if (fVar67 <= 0.0) {
          *(float *)((long)ppcVar13 + 0x9c3c) = fVar73;
          fVar67 = auVar55._12_4_ - fVar73;
        }
        *(float *)((long)ppcVar13 + 0x9c44) = fVar67;
      }
      unaff_d14 = (ulong)(uint)*(float *)ppcVar14;
      if (*(float *)ppcVar14 == 0.0) {
        *(float *)ppcVar14 = fVar70;
        unaff_d14 = CONCAT26(uVar63,CONCAT24(SUB42(fVar49,0),fVar70));
      }
      fVar73 = *(float *)((long)ppcVar14 + 4);
      if (*(float *)((long)ppcVar14 + 4) == 0.0) {
        *(float *)((long)ppcVar14 + 4) = fVar67;
        fVar73 = fVar67;
      }
      unaff_d13 = (ulong)(uint)fVar73;
      fVar71 = *(float *)(ppcVar13 + 4999);
      unaff_d12 = (ulong)(uint)fVar71;
      fVar68 = *(float *)((long)ppcVar13 + 0x9c3c);
      fVar72 = (float)unaff_d14;
      fVar48 = fVar72 / fVar70;
      uStack_8e8 = CONCAT26((short)((uint)fVar52 >> 0x10),CONCAT24(SUB42(fVar52,0),fVar57));
      uStack_8f0 = CONCAT26(uVar63,CONCAT24(SUB42(fVar49,0),fVar70));
      unaff_d11 = 0;
      if (fVar70 <= 0.0) {
        fVar48 = 0.0;
      }
      unaff_d10 = (ulong)(uint)fVar48;
      fVar70 = fVar73 / fVar67;
      if (fVar67 <= 0.0) {
        fVar70 = 0.0;
      }
      unaff_d15 = (ulong)(uint)fVar70;
      ppcVar45 = ppcVar16;
      func_0x0001096efcd0();
      pcVar33 = (char *)((long)ppcVar45 << 0x20 | 0x3f800000);
      fVar49 = (float)FUN_1096ef8f8(0,0x3f800000,ppcVar13);
      if (*(float *)(ppcVar13 + 0x138a) == 2.8026e-45) {
        if (fVar48 <= fVar70) {
          fVar48 = fVar70;
        }
        if (*(float *)(ppcVar13 + 0x1389) != 0.0) {
          fVar70 = (float)uStack_8f0 * fVar48;
          if (*(float *)(ppcVar13 + 0x1389) == 2.8026e-45) {
            unaff_d11 = (ulong)(uint)(fVar72 - fVar70);
          }
          else {
            unaff_d11 = (ulong)(uint)((fVar72 - fVar70) * 0.5);
          }
        }
        fVar70 = (float)unaff_d11 / fVar48;
        if (*(float *)((long)ppcVar13 + 0x9c4c) == 0.0) {
          fVar73 = 0.0;
        }
        else {
          fVar73 = fVar73 - fVar67 * fVar48;
          if (*(float *)((long)ppcVar13 + 0x9c4c) != 2.8026e-45) {
            fVar73 = fVar73 * 0.5;
          }
        }
        fVar57 = fVar73 / fVar48;
LAB_1096eaab4:
        fVar71 = fVar70 - fVar71;
        unaff_d10 = (ulong)(uint)fVar48;
        fVar57 = fVar57 - fVar68;
        unaff_d15 = unaff_d10;
      }
      else {
        if (*(float *)(ppcVar13 + 0x138a) == 1.4013e-45) {
          if (fVar70 <= fVar48) {
            fVar48 = fVar70;
          }
          fVar57 = 0.0;
          fVar70 = 0.0;
          if ((*(float *)(ppcVar13 + 0x1389) != 0.0) &&
             (fVar70 = fVar72 - (float)uStack_8f0 * fVar48,
             *(float *)(ppcVar13 + 0x1389) != 2.8026e-45)) {
            fVar70 = fVar70 * 0.5;
          }
          fVar70 = fVar70 / fVar48;
          if ((*(float *)((long)ppcVar13 + 0x9c4c) != 0.0) &&
             (fVar57 = fVar73 - fVar67 * fVar48, *(float *)((long)ppcVar13 + 0x9c4c) != 2.8026e-45))
          {
            fVar57 = fVar57 * 0.5;
          }
          fVar57 = fVar57 / fVar48;
          goto LAB_1096eaab4;
        }
        fVar71 = -fVar71;
        fVar57 = -fVar68;
      }
      unaff_d9 = (ulong)(uint)fVar57;
      pcVar53 = (char *)(ulong)(uint)fVar71;
      if (pcVar37 != (char *)0x0) {
        fVar48 = (1.0 / fVar49) * fVar48;
        unaff_d10 = (ulong)(uint)fVar48;
        fVar70 = (1.0 / fVar49) * (float)unaff_d15;
        unaff_d11 = (ulong)(uint)fVar70;
        uStack_8e8 = 0;
        uStack_8f0 = (ulong)(uint)((fVar48 + fVar70) * 0.5);
        do {
          *(float *)(pcVar37 + 0x98) = fVar48 * (fVar71 + *(float *)(pcVar37 + 0x98));
          *(float *)(pcVar37 + 0x9c) = fVar70 * (fVar57 + *(float *)(pcVar37 + 0x9c));
          *(float *)(pcVar37 + 0xa0) = fVar48 * (fVar71 + *(float *)(pcVar37 + 0xa0));
          *(float *)(pcVar37 + 0xa4) = fVar70 * (fVar57 + *(float *)(pcVar37 + 0xa4));
          for (plVar26 = *(long **)(pcVar37 + 0xa8); plVar26 != (long *)0x0;
              plVar26 = (long *)plVar26[4]) {
            *(float *)(plVar26 + 2) = fVar48 * (fVar71 + *(float *)(plVar26 + 2));
            *(float *)((long)plVar26 + 0x14) = fVar70 * (fVar57 + *(float *)((long)plVar26 + 0x14));
            *(float *)(plVar26 + 3) = fVar48 * (fVar71 + *(float *)(plVar26 + 3));
            *(float *)((long)plVar26 + 0x1c) = fVar70 * (fVar57 + *(float *)((long)plVar26 + 0x1c));
            uVar29 = (ulong)*(uint *)(plVar26 + 1);
            if (0 < (int)*(uint *)(plVar26 + 1)) {
              pfVar30 = (float *)(*plVar26 + 4);
              do {
                pfVar30[-1] = fVar48 * (fVar71 + pfVar30[-1]);
                *pfVar30 = fVar70 * (fVar57 + *pfVar30);
                pfVar30 = pfVar30 + 2;
                uVar29 = uVar29 - 1;
              } while (uVar29 != 0);
            }
          }
          if ((pcVar37[0x40] & 0xfeU) == 2) {
            FUN_1096f0d28(pcVar53,fVar57,SUB42(fVar48,0),unaff_d11,*(undefined8 *)(pcVar37 + 0x48));
            puVar15 = *(undefined8 **)(pcVar37 + 0x48);
            apcStack_8e0[0] = (char *)*puVar15;
            apcStack_8e0[1] = (char *)puVar15[1];
            apcStack_8e0[2] = (char *)puVar15[2];
            pcVar33 = (char *)apcStack_8e0;
            FUN_1096f07f4();
          }
          if ((pcVar37[0x50] & 0xfeU) == 2) {
            FUN_1096f0d28(pcVar53,fVar57,SUB42(fVar48,0),unaff_d11,*(undefined8 *)(pcVar37 + 0x58));
            puVar15 = *(undefined8 **)(pcVar37 + 0x58);
            apcStack_8e0[0] = (char *)*puVar15;
            apcStack_8e0[1] = (char *)puVar15[1];
            apcStack_8e0[2] = (char *)puVar15[2];
            pcVar33 = (char *)apcStack_8e0;
            FUN_1096f07f4();
          }
          fVar49 = (float)uStack_8f0;
          *(ulong *)(pcVar37 + 100) =
               CONCAT44((float)((ulong)*(undefined8 *)(pcVar37 + 100) >> 0x20) * fVar49,
                        (float)*(undefined8 *)(pcVar37 + 100) * fVar49);
          lVar34 = (long)pcVar37[0x8c];
          if (0 < lVar34) {
            pfVar30 = (float *)(pcVar37 + 0x6c);
            do {
              *pfVar30 = fVar49 * *pfVar30;
              lVar34 = lVar34 + -1;
              pfVar30 = pfVar30 + 1;
            } while (lVar34 != 0);
          }
          pcVar37 = *(char **)(pcVar37 + 0xb0);
        } while (pcVar37 != (char *)0x0);
        ppcVar14 = (char **)ppcVar13[0x1384];
      }
      unaff_x22 = (char **)0x0;
      ppcVar13[0x1384] = (char *)0x0;
      FUN_1096ec558(ppcVar13[0x1383]);
      ppcVar45 = (char **)ppcVar13[0x1385];
      while (ppcVar45 != (char **)0x0) {
        param_1 = (char **)ppcVar45[0x1b];
        _free(ppcVar45[0x1a]);
        _free(ppcVar45);
        ppcVar45 = param_1;
      }
      FUN_1096ec4d8(ppcVar13[0x1384]);
      _free(ppcVar13[0x1381]);
      param_2 = (char **)0x0;
    }
    _free();
    unaff_x26 = ppcVar13;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
    return ppcVar14;
  }
  uVar47 = 0x1096eace4;
  ___stack_chk_fail();
  ppcVar13 = unaff_x27;
  ppcVar45 = ppcVar16;
  goto SUB_1096eace4;
LAB_1096ea6c4:
  param_1 = (char **)((long)param_2 + 1);
  ppcVar13 = (char **)((long)param_2 + 2);
  ppcVar45 = param_2;
  uStack_8f0 = uVar29;
  while( true ) {
    ppcVar16 = ppcVar14;
    _memchr(&UNK_10f57e81c,(int)(char)unaff_x24,7);
    if (ppcVar16 == (char **)0x0) break;
    ppcVar45 = (char **)((long)ppcVar45 + 1);
    unaff_x24 = (char **)(ulong)*(byte *)ppcVar45;
    param_1 = (char **)((long)param_1 + 1);
    ppcVar13 = (char **)((long)ppcVar13 + 1);
    uVar29 = uStack_8f0;
    unaff_x27 = ppcStack_8f8;
    ppcVar16 = ppcStack_900;
    if (*(byte *)ppcVar45 == 0) goto LAB_1096ea7e0;
  }
  if ((int)unaff_x24 != 0x2f) {
    do {
      ppcStack_908 = ppcVar32;
      ppcVar21 = ppcVar13;
      ppcVar36 = param_1;
      ppcVar16 = ppcVar14;
      _memchr(&UNK_10f57e81c,(int)(char)unaff_x24,7);
      ppcVar32 = ppcStack_908;
      if (((int)unaff_x24 == 0x3d) || (ppcVar16 != (char **)0x0)) {
        *(char *)((long)ppcVar36 + -1) = '\0';
        param_1 = unaff_x24;
        break;
      }
      param_1 = (char **)((long)ppcVar36 + 1);
      unaff_x24 = (char **)(ulong)*(byte *)ppcVar36;
      ppcVar13 = (char **)((long)ppcVar21 + 1);
    } while (*(byte *)ppcVar36 != 0);
    do {
      param_2 = (char **)((long)ppcVar36 + 1);
      cVar22 = *(char *)ppcVar36;
      uVar29 = uStack_8f0;
      unaff_x27 = ppcStack_8f8;
      ppcVar16 = ppcStack_900;
      if (cVar22 == '\0') goto LAB_1096ea7e0;
      ppcVar13 = ppcVar21;
      if ((cVar22 == '\"') || (cVar22 == '\'')) goto LAB_1096ea774;
      ppcVar21 = (char **)((long)ppcVar21 + 1);
      ppcVar36 = param_2;
    } while( true );
  }
  apcStack_8e0[uStack_8f0 & 0xfffffffe] = (char *)0x0;
  apcStack_8e0[(uStack_8f0 & 0xfffffffe) + 1] = (char *)0x0;
  param_3 = (char *)apcStack_8e0;
  uVar47 = 0x1096ea834;
  unaff_x26 = ppcVar32;
  goto SUB_1096eace4;
LAB_1096ea774:
  do {
    param_2 = ppcVar13;
    cVar2 = *(char *)param_2;
    ppcVar13 = (char **)((long)param_2 + 1);
  } while (cVar2 != '\0' && cVar2 != cVar22);
  if (cVar2 != '\0') {
    *(char *)param_2 = '\0';
    param_2 = (char **)((long)param_2 + 1);
  }
  apcStack_8e0[uStack_8f0] = (char *)ppcVar45;
  apcStack_8e0[uStack_8f0 + 1] = (char *)ppcVar21;
  uVar29 = uStack_8f0 + 2;
  unaff_x24 = (char **)(ulong)*(byte *)param_2;
  if ((*(byte *)param_2 == 0) || (0xfa < uStack_8f0)) goto LAB_1096ea7e0;
  goto LAB_1096ea6c4;
  while( true ) {
    if (iVar44 < 0x3f) {
      acStack_1188[iVar44] = cVar22;
      iVar44 = iVar44 + 1;
    }
    ppcVar12 = (char **)((long)ppcVar12 + 1);
    cVar22 = *(char *)ppcVar12;
    if (cVar22 == '\0') break;
LAB_1096ef550:
    puVar19 = &UNK_10f57e81c;
    _memchr(&UNK_10f57e81c,(int)cVar22,7);
    if ((cVar22 == ',') || (puVar19 != (undefined *)0x0)) break;
  }
  lVar34 = (long)iVar44;
LAB_1096ef590:
  acStack_1188[lVar34] = '\0';
  if (acStack_1188[0] == '\0') goto LAB_1096ef5ec;
  if ((int)uVar24 < 8) {
    fVar70 = *(float *)(ppcVar36 + 5000);
    fVar49 = *(float *)((long)ppcVar36 + 0x9c44);
    pcVar33 = acStack_1188;
    FUN_1096eefa4(pcVar33);
    fVar70 = (float)FUN_1096ef8f8(0,SQRT(fVar49 * fVar49 + fVar70 * fVar70) / 1.4142135,ppcVar36,
                                  pcVar33);
    *(float *)((long)ppcVar21 + (long)(int)uVar24 * 4) = ABS(fVar70);
    uVar24 = uVar24 + 1;
  }
  ppcVar20 = ppcVar12;
  if (*(char *)ppcVar12 == '\0') goto LAB_1096ef5ec;
  goto LAB_1096ef510;
LAB_1096ef5ec:
  if ((int)uVar24 < 1) {
    ppcVar16 = (char **)0x0;
    ppcVar32 = ppcVar21;
  }
  else {
    uVar29 = (ulong)uVar24;
    fVar70 = 0.0;
    do {
      ppcVar32 = (char **)((long)ppcVar21 + 4);
      fVar70 = fVar70 + *(float *)ppcVar21;
      uVar29 = uVar29 - 1;
      ppcVar21 = ppcVar32;
    } while (uVar29 != 0);
    if (fVar70 <= 1e-06) {
      uVar24 = 0;
    }
    ppcVar16 = (char **)(ulong)uVar24;
  }
  goto LAB_1096ef624;
LAB_1096ea7e0:
  apcStack_8e0[uVar29 & 0xfffffffe] = (char *)0x0;
  apcStack_8e0[(uVar29 & 0xfffffffe) + 1] = (char *)0x0;
  param_3 = (char *)apcStack_8e0;
  uVar47 = 0x1096ea800;
  unaff_x26 = ppcVar32;
  ppcVar13 = unaff_x27;
  ppcVar45 = ppcVar16;
SUB_1096eace4:
  uStack_9b0 = unaff_d15;
  uStack_9a8 = unaff_d14;
  uStack_9a0 = unaff_d13;
  uStack_998 = unaff_d12;
  uStack_990 = unaff_d11;
  uStack_988 = unaff_d10;
  uStack_980 = unaff_d9;
  pcStack_978 = pcVar53;
  ppcStack_970 = ppcVar45;
  ppcStack_968 = ppcVar13;
  ppcStack_960 = unaff_x26;
  ppcStack_958 = unaff_x25;
  ppcStack_950 = unaff_x24;
  ppcStack_948 = ppcVar12;
  ppcStack_940 = unaff_x22;
  ppcStack_938 = ppcVar14;
  ppcStack_930 = param_2;
  ppcStack_928 = param_1;
  pppppppuStack_920 = &ppppppuStack_40;
  uStack_918 = uVar47;
  lStack_9c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar12 = (char **)pcVar33;
  if (*(char *)((long)ppcVar32 + 0x9c59) != '\0') {
    _strcmp(pcVar33,"linearGradient");
    if ((int)ppcVar12 == 0) {
LAB_1096eaf1c:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9c0) {
        cVar22 = '\x02';
LAB_1096eaf68:
        ppcVar16 = (char **)0x1;
        _calloc(1,0xe0);
        ppcVar12 = ppcVar16;
        if (ppcVar16 != (char **)0x0) {
          *(char *)((long)ppcVar16 + 0xad) = '\x01';
          *(char *)(ppcVar16 + 0x10) = cVar22;
          if (cVar22 == '\x02') {
            uVar27 = 0x700000000;
            ((float *)((long)ppcVar16 + 0x9c))[0] = 0.0;
            ((float *)((long)ppcVar16 + 0x9c))[1] = 9.80909e-45;
            uVar47 = 0x700000000;
            uVar56 = 0x742c80000;
          }
          else {
            uVar27 = 0x742480000;
            uVar56 = 0x742480000;
            uVar47 = 0x742480000;
          }
          ppcVar13 = ppcVar16 + 0x16;
          ppcVar16[0x17] = (char *)0x3f80000000000000;
          *ppcVar13 = (char *)0x3f800000;
          *(undefined8 *)((long)ppcVar16 + 0x84) = uVar27;
          *(undefined8 *)((long)ppcVar16 + 0x94) = uVar56;
          *(undefined8 *)((long)ppcVar16 + 0x8c) = uVar47;
          ppcVar16[0x18] = (char *)0x0;
          pcVar33 = *(char **)param_3;
          if (pcVar33 != (char *)0x0) {
            ppcVar14 = (char **)((long)param_3 + 8);
            do {
              if (((*pcVar33 == 'i') && (pcVar33[1] == 'd')) && (pcVar33[2] == '\0')) {
                ppcVar12 = ppcVar16;
                _strncpy(ppcVar16,*ppcVar14,0x3f);
                *(char *)((long)ppcVar16 + 0x3f) = '\0';
              }
              else {
                ppcVar12 = ppcVar32;
                FUN_1096ee638(ppcVar32,pcVar33,*ppcVar14);
                if ((int)ppcVar12 == 0) {
                  ppcVar12 = (char **)ppcVar14[-1];
                  ppcVar45 = ppcVar12;
                  _strcmp(ppcVar12,"gradientUnits");
                  if ((int)ppcVar45 == 0) {
                    ppcVar12 = (char **)*ppcVar14;
                    _strcmp(ppcVar12,"objectBoundingBox");
                    if ((int)ppcVar12 == 0) {
                      *(char *)((long)ppcVar16 + 0xad) = '\x01';
                    }
                    else {
                      *(char *)((long)ppcVar16 + 0xad) = '\0';
                    }
                  }
                  else {
                    ppcVar45 = ppcVar12;
                    _strcmp(ppcVar12,"gradientTransform");
                    if ((int)ppcVar45 == 0) {
                      ppcVar12 = ppcVar13;
                      FUN_1096eebec(ppcVar13,*ppcVar14);
                    }
                    else {
                      bVar3 = *(byte *)ppcVar12;
                      if (bVar3 < 0x72) {
                        if (bVar3 == 99) {
                          if (*(char *)((long)ppcVar12 + 1) == 'y') {
LAB_1096edca4:
                            if (*(char *)((long)ppcVar12 + 2) == '\0') {
                              ppcVar12 = (char **)*ppcVar14;
                              FUN_1096eefa4();
                              *(char ***)((long)ppcVar16 + 0x8c) = ppcVar12;
                              goto LAB_1096edb5c;
                            }
                          }
                          else if (*(char *)((long)ppcVar12 + 1) == 'x') {
LAB_1096edc8c:
                            if (*(char *)((long)ppcVar12 + 2) == '\0') {
                              ppcVar12 = (char **)*ppcVar14;
                              FUN_1096eefa4();
                              *(char ***)((long)ppcVar16 + 0x84) = ppcVar12;
                              goto LAB_1096edb5c;
                            }
                          }
                        }
                        else if (bVar3 == 0x66) {
                          if (*(char *)((long)ppcVar12 + 1) == 'y') {
                            if (*(char *)((long)ppcVar12 + 2) == '\0') {
                              ppcVar12 = (char **)*ppcVar14;
                              FUN_1096eefa4();
                              *(char ***)((long)ppcVar16 + 0xa4) = ppcVar12;
                              goto LAB_1096edb5c;
                            }
                          }
                          else if (*(char *)((long)ppcVar12 + 1) == 'x') goto LAB_1096edc30;
                        }
                      }
                      else if (bVar3 == 0x72) {
                        cVar22 = *(char *)((long)ppcVar12 + 1);
joined_r0x0001096edc58:
                        if (cVar22 == '\0') {
                          ppcVar12 = (char **)*ppcVar14;
                          FUN_1096eefa4();
                          *(char ***)((long)ppcVar16 + 0x94) = ppcVar12;
                          goto LAB_1096edb5c;
                        }
                      }
                      else if (bVar3 == 0x78) {
                        if (*(char *)((long)ppcVar12 + 1) == '2') {
                          cVar22 = *(char *)((long)ppcVar12 + 2);
                          goto joined_r0x0001096edc58;
                        }
                        if (*(char *)((long)ppcVar12 + 1) == '1') goto LAB_1096edc8c;
                      }
                      else if (bVar3 == 0x79) {
                        if (*(char *)((long)ppcVar12 + 1) == '2') {
LAB_1096edc30:
                          if (*(char *)((long)ppcVar12 + 2) == '\0') {
                            ppcVar12 = (char **)*ppcVar14;
                            FUN_1096eefa4();
                            *(char ***)((long)ppcVar16 + 0x9c) = ppcVar12;
                            goto LAB_1096edb5c;
                          }
                        }
                        else if (*(char *)((long)ppcVar12 + 1) == '1') goto LAB_1096edca4;
                      }
                      ppcVar45 = ppcVar12;
                      _strcmp(ppcVar12,&UNK_10f57e823);
                      if ((int)ppcVar45 == 0) {
                        ppcVar45 = (char **)*ppcVar14;
                        ppcVar12 = ppcVar45;
                        _strcmp(ppcVar45,&UNK_10f57e830);
                        if ((int)ppcVar12 == 0) {
                          *(char *)((long)ppcVar16 + 0xac) = '\0';
                        }
                        else {
                          ppcVar12 = ppcVar45;
                          _strcmp(ppcVar45,&UNK_10f4917f3);
                          if ((int)ppcVar12 == 0) {
                            cVar22 = '\x01';
                          }
                          else {
                            _strcmp(ppcVar45,&DAT_10f57e834);
                            ppcVar12 = ppcVar45;
                            if ((int)ppcVar45 != 0) goto LAB_1096edb5c;
                            cVar22 = '\x02';
                          }
                          *(char *)((long)ppcVar16 + 0xac) = cVar22;
                        }
                      }
                      else {
                        _strcmp(ppcVar12,"xlink:href");
                        if ((int)ppcVar12 == 0) {
                          ppcVar12 = ppcVar16 + 8;
                          _strncpy(ppcVar12,*ppcVar14 + 1,0x3e);
                          *(char *)((long)ppcVar16 + 0x7e) = '\0';
                        }
                      }
                    }
                  }
                }
              }
LAB_1096edb5c:
              pcVar33 = ppcVar14[1];
              ppcVar14 = ppcVar14 + 2;
            } while (pcVar33 != (char *)0x0);
          }
          ppcVar16[0x1b] = ppcVar32[0x1385];
          ppcVar32[0x1385] = (char *)ppcVar16;
        }
        return ppcVar12;
      }
      goto LAB_1096ec4d4;
    }
    ppcVar12 = (char **)pcVar33;
    _strcmp(pcVar33,"radialGradient");
    if ((int)ppcVar12 == 0) {
LAB_1096eaf44:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9c0) {
        cVar22 = '\x03';
        goto LAB_1096eaf68;
      }
      goto LAB_1096ec4d4;
    }
    ppcVar12 = (char **)pcVar33;
    _strcmp(pcVar33,&DAT_10f684680);
    if ((int)ppcVar12 == 0) {
LAB_1096ead78:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9c0) {
        fVar70 = *(float *)(ppcVar32 + 0x1380);
        *(float *)(ppcVar32 + (long)(int)fVar70 * 0x27 + 0x25) = 0.0;
        pfVar7 = (float *)((long)ppcVar32 + ((long)(int)fVar70 * 0x4e + 0x4b) * 4);
        pfVar7[0] = 1.0;
        pfVar7[1] = 0.0;
        pcVar33 = *(char **)param_3;
        ppcVar12 = ppcVar32;
        while (pcVar33 != (char *)0x0) {
          ppcVar12 = ppcVar32;
          FUN_1096ee638(ppcVar32,pcVar33,*(char **)((long)param_3 + 8));
          pcVar33 = *(char **)((long)param_3 + 0x10);
          param_3 = (char *)((long)param_3 + 0x10);
        }
        pcVar33 = ppcVar32[0x1385];
        if (pcVar33 != (char *)0x0) {
          iVar44 = *(int *)(pcVar33 + 200);
          *(int *)(pcVar33 + 200) = (int)((long)iVar44 + 1);
          ppcVar12 = *(char ***)(pcVar33 + 0xd0);
          _realloc(ppcVar12,((long)iVar44 + 1) * 8);
          *(char ***)(pcVar33 + 0xd0) = ppcVar12;
          if (ppcVar12 != (char **)0x0) {
            uVar24 = *(uint *)(pcVar33 + 200);
            uVar29 = (ulong)uVar24;
            uVar39 = uVar24 - 1;
            fVar49 = *(float *)(ppcVar32 + (long)(int)fVar70 * 0x27 + 0x26);
            uVar23 = uVar39;
            if (1 < (int)uVar24) {
              uVar31 = 0;
              lVar34 = 4;
              do {
                if (fVar49 < *(float *)((long)ppcVar12 + lVar34)) {
                  uVar23 = (uint)uVar31;
                  if ((int)uVar23 < (int)uVar39) {
                    do {
                      lVar34 = *(long *)(pcVar33 + 0xd0) + uVar29 * 8;
                      *(undefined8 *)(lVar34 + -8) = *(undefined8 *)(lVar34 + -0x10);
                      lVar34 = uVar29 - 2;
                      uVar29 = uVar29 - 1;
                    } while ((long)uVar31 < lVar34);
                    ppcVar12 = *(char ***)(pcVar33 + 0xd0);
                    fVar49 = *(float *)(ppcVar32 + (long)(int)fVar70 * 0x27 + 0x26);
                  }
                  break;
                }
                uVar31 = uVar31 + 1;
                lVar34 = lVar34 + 8;
              } while (uVar39 != uVar31);
            }
            *(uint *)(ppcVar12 + (int)uVar23) =
                 (uint)*(float *)(ppcVar32 + (long)(int)fVar70 * 0x27 + 0x25) |
                 (int)(*(float *)((long)ppcVar32 + ((long)(int)fVar70 * 0x4e + 0x4b) * 4) * 255.0)
                 << 0x18;
            *(float *)((long)(ppcVar12 + (int)uVar23) + 4) = fVar49;
          }
        }
        return ppcVar12;
      }
      goto LAB_1096ec4d4;
    }
    goto LAB_1096ec3f8;
  }
  if ((*pcVar33 == 'g') && (*(char *)((long)pcVar33 + 1) == '\0')) {
    fVar70 = *(float *)(ppcVar32 + 0x1380);
    ppcVar12 = ppcVar32;
    if ((int)fVar70 < 0x7f) {
      *(uint *)(ppcVar32 + 0x1380) = (int)fVar70 + 1;
      ppcVar12 = ppcVar32 + (long)(int)fVar70 * 0x27 + 0x27;
      _memcpy(ppcVar12,ppcVar32 + (long)(int)fVar70 * 0x27,0x138);
    }
    ppcVar13 = ppcStack_928;
    ppcVar14 = ppcStack_930;
    ppcVar16 = ppcStack_938;
    ppcVar45 = ppcStack_940;
    pppppppuVar46 = pppppppuStack_920;
    uVar47 = uStack_918;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9c0) {
SUB_1096ededc:
      *(char ***)((long)pfVar7 + -0x30) = ppcVar45;
      *(char ***)((long)pfVar7 + -0x28) = ppcVar16;
      *(char ***)((long)pfVar7 + -0x20) = ppcVar14;
      *(char ***)((long)pfVar7 + -0x18) = ppcVar13;
      *(undefined8 ********)((long)pfVar7 + -0x10) = pppppppuVar46;
      *(undefined8 *)((long)pfVar7 + -8) = uVar47;
      pcVar33 = *(char **)param_3;
      ppcVar12 = ppcVar32;
      while (pcVar33 != (char *)0x0) {
        pcVar53 = pcVar33;
        _strcmp(pcVar33,"style");
        if ((int)pcVar53 == 0) {
          ppcVar12 = ppcVar32;
          FUN_1096ef014(ppcVar32,*(char **)((long)param_3 + 8));
        }
        else {
          ppcVar12 = ppcVar32;
          FUN_1096ee638(ppcVar32,pcVar33);
        }
        pcVar33 = *(char **)((long)param_3 + 0x10);
        param_3 = (char *)((long)param_3 + 0x10);
      }
      return ppcVar12;
    }
    goto LAB_1096ec4d4;
  }
  ppcVar16 = (char **)param_3;
  _strcmp(pcVar33,"path");
  if ((int)ppcVar12 == 0) {
    if (*(char *)(ppcVar32 + 0x138b) != '\0') goto LAB_1096ec3f8;
    fVar70 = *(float *)(ppcVar32 + 0x1380);
    if ((int)fVar70 < 0x7f) {
      *(uint *)(ppcVar32 + 0x1380) = (int)fVar70 + 1;
      _memcpy(ppcVar32 + (long)(int)fVar70 * 0x27 + 0x27,ppcVar32 + (long)(int)fVar70 * 0x27,0x138);
    }
    ppcVar16 = (char **)((long)param_3 + 8);
    pcStack_a08 = *(char **)param_3;
    if (pcStack_a08 != (char *)0x0) {
      pcVar33 = (char *)0x0;
      unaff_x22 = &pcStack_a08;
      do {
        if ((*pcStack_a08 != 'd') || (pcStack_a08[1] != '\0')) {
          ppcStack_a00 = (char **)*ppcVar16;
          ppcStack_9f8 = (char **)0x0;
          ppcStack_9f0 = (char **)0x0;
          param_3 = (char *)&pcStack_a08;
          pfVar7 = &fStack_ae0;
          ppcVar13 = ppcVar32;
          ppcVar14 = (char **)pcVar33;
          ppcVar45 = unaff_x22;
          pppppppuVar46 = &pppppppuStack_920;
          uVar47 = 0x1096eb004;
          goto SUB_1096ededc;
        }
        pcVar33 = *ppcVar16;
        pcStack_a08 = ppcVar16[1];
        ppcVar16 = ppcVar16 + 2;
      } while (pcStack_a08 != (char *)0x0);
      if (((char **)pcVar33 != (char **)0x0) &&
         (*(float *)(ppcVar32 + 0x1382) = 0.0, *pcVar33 != '\0')) {
        unaff_x22 = (char **)0x0;
        iVar44 = 0;
        ppcVar12 = (char **)0x0;
        uStack_ac8 = CONCAT44(uStack_ac8._4_4_,0x358637bd);
        fVar70 = 0.0;
        param_3 = &UNK_10f57e85a;
        ppcVar16 = (char **)&UNK_10f57e85a;
        fVar49 = 0.0;
        fVar57 = 0.0;
        fVar52 = 0.0;
        do {
          ppcVar13 = (char **)pcVar33;
          FUN_1096efdac(pcVar33,&ppcStack_a48);
          bVar3 = (byte)ppcStack_a48;
          if ((byte)ppcStack_a48 == 0) break;
          ppcVar45 = (char **)(ulong)(uint)(int)(char)(byte)ppcStack_a48;
          ppcVar14 = (char **)param_3;
          _memchr(&UNK_10f57e85a,ppcVar45,0x10);
          if (ppcVar14 == (char **)0x0) {
            unaff_x22 = ppcVar45;
            FUN_1096efe80();
            ppcVar12 = ppcVar45;
            if ((bVar3 & 0xdf) == 0x5a) {
              if (0 < (int)*(float *)(ppcVar32 + 0x1382)) {
                fVar52 = *(float *)ppcVar32[0x1381];
                fVar70 = *(float *)((long)ppcVar32[0x1381] + 4);
                FUN_1096eff6c(ppcVar32,1);
                fVar57 = fVar70;
                fVar49 = fVar52;
              }
              *(float *)(ppcVar32 + 0x1382) = 0.0;
              FUN_1096f04ac(fVar52,fVar57,ppcVar32);
              iVar44 = 0;
            }
            else if ((bVar3 & 0xdf) == 0x4d) {
              if (0 < (int)*(float *)(ppcVar32 + 0x1382)) {
                FUN_1096eff6c(ppcVar32,0);
              }
              iVar44 = 0;
              *(float *)(ppcVar32 + 0x1382) = 0.0;
            }
          }
          else {
            if (iVar44 < 10) {
              dVar54 = (double)FUN_1096ef7b0(&ppcStack_a48);
              *(float *)((long)&uStack_9e8 + (long)iVar44 * 4) = (float)dVar54;
              iVar44 = iVar44 + 1;
            }
            if ((int)unaff_x22 <= iVar44) {
              uVar39 = (uint)ppcVar12;
              uVar24 = uVar39 & 0xff;
              fVar73 = uStack_9e0._4_4_;
              fVar67 = (float)uStack_9d8;
              if (uVar24 < 0x61) {
                if (uVar24 < 0x4d) {
                  if (uVar24 < 0x48) {
                    if (uVar24 != 0x41) {
                      fVar73 = uStack_9e8._4_4_;
                      fVar48 = (float)uStack_9e0;
                      fVar67 = uStack_9e0._4_4_;
                      fVar71 = (float)uStack_9d8;
                      fVar68 = uStack_9d8._4_4_;
                      fVar72 = (float)uStack_9e8;
                      if (uVar24 != 0x43) goto LAB_1096eb950;
LAB_1096eb8c8:
                      FUN_1096f04ac(fVar72,fVar73,ppcVar32);
                      FUN_1096f04ac(fVar48,fVar67,ppcVar32);
                      FUN_1096f04ac(fVar71,fVar68,ppcVar32);
                      goto LAB_1096eb8f0;
                    }
LAB_1096eb99c:
                    fVar49 = fVar52 + uStack_9d8._4_4_;
                    fVar70 = fVar57 + pppppppuStack_9d0._0_4_;
                    if ((uVar39 & 0xff) != 0x61) {
                      fVar49 = uStack_9d8._4_4_;
                      fVar70 = pppppppuStack_9d0._0_4_;
                    }
                    fVar71 = fVar52 - fVar49;
                    fVar48 = fVar57 - fVar70;
                    fStack_acc = fVar49;
                    if ((((float)uStack_ac8 <= SQRT(fVar48 * fVar48 + fVar71 * fVar71)) &&
                        (fVar68 = ABS((float)uStack_9e8), (float)uStack_ac8 <= fVar68)) &&
                       (fVar72 = ABS(uStack_9e8._4_4_), (float)uStack_ac8 <= fVar72)) {
                      fVar58 = 3.1415927;
                      uVar51 = 0;
                      uVar60 = 0;
                      uVar61 = 0;
                      ppcStack_a68 = (char **)0x0;
                      ppcStack_a58 = (char **)0x0;
                      ppcStack_a60 = (char **)(ulong)(uint)fVar48;
                      ppcStack_a78 = (char **)0x0;
                      ppcStack_a80 = uStack_9e8;
                      fStack_ad0 = fVar70;
                      ppcStack_a70 = (char **)(ulong)(uint)fVar71;
                      ppcVar14 = (char **)___sincosf_stret();
                      fVar49 = -SUB84(ppcVar14,0);
                      pcStack_a98 = (char *)0x0;
                      uStack_aa0 = (ulong)(uint)fVar49;
                      ppcStack_a88 = (char **)CONCAT44(uVar61,uVar60);
                      ppcStack_a90 = (char **)CONCAT44(uVar51,fVar58);
                      fVar70 = (float)((ulong)ppcStack_a80 >> 0x20);
                      fVar50 = SUB84(ppcVar14,0) * SUB84(ppcStack_a60,0) * 0.5 +
                               fVar58 * SUB84(ppcStack_a70,0) * 0.5;
                      fVar49 = fVar58 * SUB84(ppcStack_a60,0) * 0.5 +
                               fVar49 * SUB84(ppcStack_a70,0) * 0.5;
                      fVar58 = fVar50 * fVar50;
                      fVar59 = fVar49 * fVar49;
                      fVar70 = fVar58 / (SUB84(ppcStack_a80,0) * SUB84(ppcStack_a80,0)) +
                               fVar59 / (fVar70 * fVar70);
                      fVar48 = SQRT(fVar70);
                      fVar71 = fVar68 * fVar48;
                      fVar48 = fVar72 * fVar48;
                      if (fVar70 <= 1.0) {
                        fVar71 = fVar68;
                        fVar48 = fVar72;
                      }
                      ppcStack_a70 = (char **)CONCAT44(ppcStack_a70._4_4_,fVar71);
                      fVar72 = fVar71 * fVar71;
                      ppcStack_a60 = (char **)CONCAT44(ppcStack_a60._4_4_,fVar48);
                      fVar66 = fVar48 * fVar48;
                      fVar68 = fVar66 * fVar58 + fVar72 * fVar59;
                      fVar70 = 0.0;
                      if (0.0 < fVar68) {
                        fVar72 = (-(fVar72 * fVar59) + fVar66 * fVar72) - fVar58 * fVar66;
                        fVar70 = 0.0;
                        if (0.0 <= fVar72) {
                          fVar70 = fVar72;
                        }
                        fVar70 = SQRT(fVar70 / fVar68);
                      }
                      dStack_ab0 = (double)ABS(fVar67);
                      dStack_ab8 = 1e-06;
                      fVar67 = -fVar70;
                      if (ABS(fVar73) <= 1e-06 == 1e-06 < dStack_ab0) {
                        fVar67 = fVar70;
                      }
                      fVar68 = (fVar71 * fVar67 * fVar49) / fVar48;
                      fStack_ad4 = (-(fVar48 * fVar67) * fVar50) / fVar71;
                      fVar67 = (fVar50 - fVar68) / fVar71;
                      fVar72 = (fVar49 - fStack_ad4) / fVar48;
                      uStack_ac8 = CONCAT44(fVar68,(float)uStack_ac8);
                      fVar73 = -fVar49 - fStack_ad4;
                      ppcStack_a80 = ppcVar14;
                      fVar49 = (float)_acosf();
                      fVar70 = -fVar49;
                      if (fVar67 * 0.0 <= fVar72) {
                        fVar70 = fVar49;
                      }
                      uStack_aa8 = CONCAT44(fVar70,(undefined4)uStack_aa8);
                      fVar59 = (float)_acosf();
                      fVar49 = fStack_acc;
                      fVar70 = fStack_ad0;
                      fVar58 = -fVar59;
                      if (fVar72 * ((-fVar50 - fVar68) / fVar71) <= fVar67 * (fVar73 / fVar48)) {
                        fVar58 = fVar59;
                      }
                      if ((dStack_ab8 < dStack_ab0) || (fVar58 <= 0.0)) {
                        bVar9 = false;
                        bVar10 = true;
                        bVar11 = false;
                        if (fVar58 < 0.0) {
                          bVar9 = false;
                          bVar10 = false;
                          bVar11 = true;
                          if (!NAN(dStack_ab0) && !NAN(dStack_ab8)) {
                            bVar9 = dStack_ab0 < dStack_ab8;
                            bVar10 = dStack_ab0 == dStack_ab8;
                            bVar11 = false;
                          }
                        }
                        fVar73 = fVar58 + 6.2831855;
                        if (bVar10 || bVar9 != bVar11) {
                          fVar73 = fVar58;
                        }
                      }
                      else {
                        fVar73 = fVar58 + -6.2831855;
                      }
                      fVar48 = 1.5707964;
                      fVar67 = ABS(fVar73) / 1.5707964 + 1.0;
                      iVar44 = (int)fVar67;
                      dStack_ab0 = (double)CONCAT44(dStack_ab0._4_4_,(float)(int)fVar67);
                      fVar67 = (float)___sincosf_stret();
                      fVar48 = ABS(((1.0 - fVar48) * 1.3333334) / fVar67);
                      fVar67 = -fVar48;
                      if (0.0 <= fVar73) {
                        fVar67 = fVar48;
                      }
                      dStack_ab8 = (double)CONCAT44(dStack_ab8._4_4_,fVar67);
                      if (-1 < iVar44) {
                        uVar24 = 0;
                        fVar67 = uStack_ac8._4_4_ * SUB84(ppcStack_a90,0);
                        uStack_ac8 = CONCAT44((fVar57 + fVar70) * 0.5 +
                                              uStack_ac8._4_4_ * SUB84(ppcStack_a80,0) +
                                              fStack_ad4 * SUB84(ppcStack_a90,0),(float)uStack_ac8);
                        uStack_ac0 = CONCAT44(fVar73,(fVar52 + fVar49) * 0.5 + fVar67 +
                                                     fStack_ad4 * (float)uStack_aa0);
                        fVar57 = 0.0;
                        fVar52 = 0.0;
                        fVar67 = 0.0;
                        fVar48 = 0.0;
                        do {
                          fVar70 = uStack_aa8._4_4_;
                          fVar49 = (float)___sincosf_stret(uStack_aa8._4_4_ +
                                                           ((float)uVar24 / dStack_ab0._0_4_) *
                                                           fVar73,uStack_aa8._4_4_);
                          fVar73 = SUB84(ppcStack_a90,0);
                          fVar68 = (float)uStack_ac0 +
                                   ppcStack_a60._0_4_ * fVar49 * (float)uStack_aa0 +
                                   fVar73 * ppcStack_a70._0_4_ * fVar70;
                          fVar71 = uStack_ac8._4_4_ +
                                   fVar73 * ppcStack_a60._0_4_ * fVar49 +
                                   SUB84(ppcStack_a80,0) * ppcStack_a70._0_4_ * fVar70;
                          fVar49 = dStack_ab8._0_4_ * -(fVar49 * ppcStack_a70._0_4_);
                          fVar70 = dStack_ab8._0_4_ * ppcStack_a60._0_4_ * fVar70;
                          fVar72 = fVar70 * (float)uStack_aa0 + fVar73 * fVar49;
                          fVar49 = fVar73 * fVar70 + SUB84(ppcStack_a80,0) * fVar49;
                          if (uVar24 != 0) {
                            FUN_1096f04ac(fVar52 + fVar48,fVar57 + fVar67,ppcVar32);
                            FUN_1096f04ac(fVar68 - fVar72,fVar71 - fVar49,ppcVar32);
                            FUN_1096f04ac(fVar68,fVar71,ppcVar32);
                          }
                          uVar24 = uVar24 + 1;
                          fVar70 = fStack_ad0;
                          fVar73 = uStack_ac0._4_4_;
                          fVar57 = fVar49;
                          fVar52 = fVar72;
                          fVar67 = fVar71;
                          fVar49 = fStack_acc;
                          fVar48 = fVar68;
                        } while (iVar44 + 1U != uVar24);
                      }
                      goto LAB_1096ebe64;
                    }
                  }
                  else {
                    if (uVar24 == 0x48) {
LAB_1096ebc28:
                      fVar49 = fVar52 + (float)uStack_9e8;
                      if ((uVar39 & 0xff) != 0x68) {
                        fVar49 = (float)uStack_9e8;
                      }
                      FUN_1096f0410(fVar49,fVar57,ppcVar32);
                      iVar44 = 0;
                      fVar70 = fVar57;
                      fVar52 = fVar49;
                      goto LAB_1096ebe68;
                    }
                    if (uVar24 != 0x4c) goto LAB_1096eb950;
LAB_1096eb91c:
                    fVar70 = fVar57 + uStack_9e8._4_4_;
                    fVar49 = fVar52 + (float)uStack_9e8;
                    if ((uVar39 & 0xff) != 0x6c) {
                      fVar70 = uStack_9e8._4_4_;
                      fVar49 = (float)uStack_9e8;
                    }
                  }
                  FUN_1096f0410(fVar49,fVar70,ppcVar32);
LAB_1096ebe64:
                  iVar44 = 0;
                  fVar57 = fVar70;
                  fVar52 = fVar49;
                }
                else {
                  if (uVar24 < 0x53) {
                    if (uVar24 == 0x4d) {
LAB_1096ebd14:
                      fVar70 = fVar57 + uStack_9e8._4_4_;
                      fVar49 = fVar52 + (float)uStack_9e8;
                      if ((uVar39 & 0xff) != 0x6d) {
                        fVar70 = uStack_9e8._4_4_;
                        fVar49 = (float)uStack_9e8;
                      }
                      if ((int)*(float *)(ppcVar32 + 0x1382) < 1) {
                        FUN_1096f04ac(fVar49,fVar70,ppcVar32);
                      }
                      else {
                        pcVar33 = ppcVar32[0x1381];
                        iVar44 = (int)*(float *)(ppcVar32 + 0x1382) * 2;
                        *(float *)(pcVar33 + (ulong)(iVar44 - 2) * 4) = fVar49;
                        *(float *)(pcVar33 + (long)(iVar44 + -1) * 4) = fVar70;
                      }
                      uVar24 = 0x6c;
                      if ((uVar39 & 0xff) != 0x6d) {
                        uVar24 = 0x4c;
                      }
                      ppcVar12 = (char **)(ulong)uVar24;
                      unaff_x22 = ppcVar12;
                      FUN_1096efe80();
                      goto LAB_1096ebe64;
                    }
                    if (uVar24 != 0x51) goto LAB_1096eb950;
LAB_1096eb970:
                    fVar73 = (float)uStack_9e0;
                    fVar70 = uStack_9e8._4_4_;
                    fVar67 = uStack_9e0._4_4_;
                    fVar49 = (float)uStack_9e8;
                    if ((uVar39 & 0xff) == 0x71) {
                      fVar73 = fVar52 + (float)uStack_9e0;
                      fVar70 = fVar57 + uStack_9e8._4_4_;
                      fVar67 = fVar57 + uStack_9e0._4_4_;
                      fVar49 = fVar52 + (float)uStack_9e8;
                    }
                    FUN_1096f04ac(fVar52 + (fVar49 - fVar52) * 0.6666667,
                                  fVar57 + (fVar70 - fVar57) * 0.6666667,ppcVar32);
                    FUN_1096f04ac(fVar73 + (fVar49 - fVar73) * 0.6666667,
                                  fVar67 + (fVar70 - fVar67) * 0.6666667,ppcVar32);
                    FUN_1096f04ac(fVar73,fVar67,ppcVar32);
                  }
                  else {
                    if (uVar24 == 0x53) {
LAB_1096ebce8:
                      fVar73 = (float)uStack_9e8;
                      fVar67 = uStack_9e8._4_4_;
                      fVar48 = (float)uStack_9e0;
                      fVar71 = uStack_9e0._4_4_;
                      if ((uVar39 & 0xff) == 0x73) {
                        fVar73 = fVar52 + (float)uStack_9e8;
                        fVar67 = fVar57 + uStack_9e8._4_4_;
                        fVar48 = fVar52 + (float)uStack_9e0;
                        fVar71 = fVar57 + uStack_9e0._4_4_;
                      }
                      FUN_1096f04ac(fVar52 * 2.0 - fVar49,fVar57 * 2.0 - fVar70,ppcVar32);
                      FUN_1096f04ac(fVar73,fVar67,ppcVar32);
                      FUN_1096f04ac(fVar48,fVar71,ppcVar32);
                      iVar44 = 0;
                      fVar70 = fVar67;
                      fVar57 = fVar71;
                      fVar49 = fVar73;
                      fVar52 = fVar48;
                      goto LAB_1096ebe68;
                    }
                    if (uVar24 != 0x54) {
                      if (uVar24 == 0x56) {
LAB_1096eb7dc:
                        fVar70 = fVar57 + (float)uStack_9e8;
                        if ((uVar39 & 0xff) != 0x76) {
                          fVar70 = (float)uStack_9e8;
                        }
                        FUN_1096f0410(fVar52,fVar70,ppcVar32);
                        fVar49 = fVar52;
                        goto LAB_1096ebe64;
                      }
                      goto LAB_1096eb950;
                    }
LAB_1096ebc5c:
                    fVar73 = fVar52 + (float)uStack_9e8;
                    fVar67 = fVar57 + uStack_9e8._4_4_;
                    if ((uVar39 & 0xff) != 0x74) {
                      fVar73 = (float)uStack_9e8;
                      fVar67 = uStack_9e8._4_4_;
                    }
                    fVar49 = fVar52 * 2.0 - fVar49;
                    fVar70 = fVar57 * 2.0 - fVar70;
                    FUN_1096f04ac(fVar52 + (fVar49 - fVar52) * 0.6666667,
                                  fVar57 + (fVar70 - fVar57) * 0.6666667,ppcVar32);
                    FUN_1096f04ac(fVar73 + (fVar49 - fVar73) * 0.6666667,
                                  fVar67 + (fVar70 - fVar67) * 0.6666667,ppcVar32);
                    FUN_1096f04ac(fVar73,fVar67,ppcVar32);
                  }
                  iVar44 = 0;
                  fVar57 = fVar67;
                  fVar52 = fVar73;
                }
              }
              else {
                if (uVar24 < 0x6d) {
                  if (uVar24 < 0x68) {
                    if (uVar24 == 0x61) goto LAB_1096eb99c;
                    if (uVar24 == 99) {
                      fVar73 = fVar57 + uStack_9e8._4_4_;
                      fVar48 = fVar52 + (float)uStack_9e0;
                      fVar67 = fVar57 + uStack_9e0._4_4_;
                      fVar71 = fVar52 + (float)uStack_9d8;
                      fVar68 = fVar57 + uStack_9d8._4_4_;
                      fVar72 = fVar52 + (float)uStack_9e8;
                      goto LAB_1096eb8c8;
                    }
                  }
                  else {
                    if (uVar24 == 0x68) goto LAB_1096ebc28;
                    if (uVar24 == 0x6c) goto LAB_1096eb91c;
                  }
                }
                else if (uVar24 < 0x73) {
                  if (uVar24 == 0x6d) goto LAB_1096ebd14;
                  if (uVar24 == 0x71) goto LAB_1096eb970;
                }
                else {
                  if (uVar24 == 0x73) goto LAB_1096ebce8;
                  if (uVar24 == 0x74) goto LAB_1096ebc5c;
                  if (uVar24 == 0x76) goto LAB_1096eb7dc;
                }
LAB_1096eb950:
                if (iVar44 < 2) {
                  iVar44 = 0;
                }
                else {
                  fVar48 = *(float *)((long)&uStack_9e8 + (ulong)(iVar44 - 2) * 4);
                  fVar68 = *(float *)((long)&uStack_9e8 + (ulong)(iVar44 - 1) * 4);
                  fVar67 = fVar68;
                  fVar71 = fVar48;
LAB_1096eb8f0:
                  iVar44 = 0;
                  fVar70 = fVar67;
                  fVar57 = fVar68;
                  fVar49 = fVar48;
                  fVar52 = fVar71;
                }
              }
            }
          }
LAB_1096ebe68:
          pcVar33 = (char *)ppcVar13;
        } while (*(char *)ppcVar13 != '\0');
        if (*(float *)(ppcVar32 + 0x1382) != 0.0) {
          uVar47 = 0;
          goto LAB_1096ec3dc;
        }
      }
    }
LAB_1096ec3e0:
    ppcVar12 = ppcVar32;
    func_0x0001096f0130();
    param_3 = (char *)ppcVar16;
LAB_1096ec3e8:
    if (0 < (int)*(float *)(ppcVar32 + 0x1380)) {
      *(uint *)(ppcVar32 + 0x1380) = (int)*(float *)(ppcVar32 + 0x1380) - 1;
    }
  }
  else {
    ppcVar12 = (char **)pcVar33;
    _strcmp(pcVar33,"rect");
    if ((int)ppcVar12 == 0) {
      fVar70 = *(float *)(ppcVar32 + 0x1380);
      if ((int)fVar70 < 0x7f) {
        *(uint *)(ppcVar32 + 0x1380) = (int)fVar70 + 1;
        ppcVar12 = ppcVar32 + (long)(int)fVar70 * 0x27 + 0x27;
        _memcpy(ppcVar12,ppcVar32 + (long)(int)fVar70 * 0x27,0x138);
      }
      pcVar53 = *(char **)param_3;
      if (pcVar53 == (char *)0x0) {
        fVar52 = -1.0;
        uVar47 = 0;
        fVar70 = 0.0;
        fVar49 = 0.0;
        fVar57 = 0.0;
        fVar73 = -1.0;
      }
      else {
        ppcVar16 = (char **)((long)param_3 + 8);
        fVar57 = 0.0;
        fVar73 = -1.0;
        pcVar33 = "width";
        param_3 = "height";
        fVar52 = -1.0;
        fVar49 = 0.0;
        fVar70 = 0.0;
        uVar47 = 0;
        do {
          ppcVar12 = ppcVar32;
          FUN_1096ee638(ppcVar32,pcVar53,*ppcVar16);
          if ((int)ppcVar12 == 0) {
            unaff_x22 = (char **)ppcVar16[-1];
            cVar22 = *(char *)unaff_x22;
            if (cVar22 == 'x') {
              if (*(char *)((long)unaff_x22 + 1) == '\0') {
                pcVar53 = *ppcVar16;
                fVar67 = *(float *)(ppcVar32 + 4999);
                fVar48 = *(float *)(ppcVar32 + 5000);
                FUN_1096eefa4(pcVar53);
                uVar47 = FUN_1096ef8f8(fVar67,fVar48,ppcVar32,pcVar53);
                unaff_x22 = (char **)ppcVar16[-1];
                cVar22 = *(char *)unaff_x22;
                goto LAB_1096eb0d4;
              }
            }
            else {
LAB_1096eb0d4:
              if ((cVar22 == 'y') && (*(char *)((long)unaff_x22 + 1) == '\0')) {
                pcVar53 = *ppcVar16;
                fVar70 = *(float *)((long)ppcVar32 + 0x9c3c);
                fVar67 = *(float *)((long)ppcVar32 + 0x9c44);
                FUN_1096eefa4(pcVar53);
                fVar70 = (float)FUN_1096ef8f8(fVar70,fVar67,ppcVar32,pcVar53);
                unaff_x22 = (char **)ppcVar16[-1];
              }
            }
            ppcVar12 = unaff_x22;
            _strcmp(unaff_x22,"width");
            if ((int)ppcVar12 == 0) {
              pcVar53 = *ppcVar16;
              fVar49 = *(float *)(ppcVar32 + 5000);
              FUN_1096eefa4(pcVar53);
              fVar49 = (float)FUN_1096ef8f8(0,fVar49,ppcVar32,pcVar53);
              unaff_x22 = (char **)ppcVar16[-1];
            }
            ppcVar12 = unaff_x22;
            _strcmp(unaff_x22,"height");
            if ((int)ppcVar12 == 0) {
              pcVar53 = *ppcVar16;
              fVar57 = *(float *)((long)ppcVar32 + 0x9c44);
              FUN_1096eefa4(pcVar53);
              ppcVar12 = ppcVar32;
              fVar57 = (float)FUN_1096ef8f8(0,fVar57,ppcVar32,pcVar53);
              unaff_x22 = (char **)ppcVar16[-1];
            }
            if (*(char *)unaff_x22 == 'r') {
              cVar22 = *(char *)((long)unaff_x22 + 1);
              if (cVar22 == 'x') {
                if (*(char *)((long)unaff_x22 + 2) == '\0') {
                  pcVar53 = *ppcVar16;
                  fVar52 = *(float *)(ppcVar32 + 5000);
                  FUN_1096eefa4(pcVar53);
                  ppcVar12 = ppcVar32;
                  fVar52 = (float)FUN_1096ef8f8(0,fVar52,ppcVar32,pcVar53);
                  fVar52 = ABS(fVar52);
                  unaff_x22 = (char **)ppcVar16[-1];
                  if (*(char *)unaff_x22 == 'r') {
                    cVar22 = *(char *)((long)unaff_x22 + 1);
                    goto LAB_1096eb1d8;
                  }
                }
              }
              else {
LAB_1096eb1d8:
                if ((cVar22 == 'y') && (*(char *)((long)unaff_x22 + 2) == '\0')) {
                  pcVar53 = *ppcVar16;
                  fVar73 = *(float *)((long)ppcVar32 + 0x9c44);
                  FUN_1096eefa4(pcVar53);
                  ppcVar12 = ppcVar32;
                  fVar73 = (float)FUN_1096ef8f8(0,fVar73,ppcVar32,pcVar53);
                  fVar73 = ABS(fVar73);
                }
              }
            }
          }
          pcVar53 = ppcVar16[1];
          ppcVar16 = ppcVar16 + 2;
        } while (pcVar53 != (char *)0x0);
      }
      bVar9 = false;
      if ((0.0 < fVar73) && (bVar9 = false, !NAN(fVar52))) {
        bVar9 = fVar52 < 0.0;
      }
      fVar67 = fVar73;
      if (!bVar9) {
        fVar67 = fVar52;
      }
      fVar52 = 0.0;
      if (0.0 <= fVar67) {
        fVar52 = fVar67;
      }
      bVar9 = false;
      if ((0.0 < fVar67) && (bVar9 = false, !NAN(fVar73))) {
        bVar9 = fVar73 < 0.0;
      }
      if (!bVar9) {
        fVar67 = fVar73;
      }
      fVar73 = 0.0;
      if (0.0 <= fVar67) {
        fVar73 = fVar67;
      }
      fVar67 = fVar49 * 0.5;
      if (fVar52 <= fVar49 * 0.5) {
        fVar67 = fVar52;
      }
      fVar52 = fVar57 * 0.5;
      if (fVar73 <= fVar57 * 0.5) {
        fVar52 = fVar73;
      }
      if ((fVar49 != 0.0) && (fVar57 != 0.0)) {
        *(float *)(ppcVar32 + 0x1382) = 0.0;
        fVar73 = (float)uVar47;
        if ((fVar67 < 1e-05) || (fVar52 < 0.0001)) {
          FUN_1096f04ac(uVar47,fVar70,ppcVar32);
          FUN_1096f0410(fVar73 + fVar49,fVar70,ppcVar32);
          FUN_1096f0410(fVar73 + fVar49,fVar70 + fVar57,ppcVar32);
          FUN_1096f0410(uVar47,fVar70 + fVar57,ppcVar32);
        }
        else {
          ppcStack_a70 = (char **)CONCAT44(ppcStack_a70._4_4_,fVar73 + fVar67);
          FUN_1096f04ac(fVar73 + fVar67,fVar70,ppcVar32);
          fVar49 = fVar73 + fVar49;
          ppcStack_a90 = (char **)CONCAT44(ppcStack_a90._4_4_,fVar49 - fVar67);
          FUN_1096f0410(fVar49 - fVar67,fVar70,ppcVar32);
          fVar48 = fVar49 - fVar67 * 0.44771522;
          uStack_aa8 = CONCAT44(fVar48,(undefined4)uStack_aa8);
          fVar71 = fVar70 + fVar52 * 0.44771522;
          ppcStack_a60 = (char **)CONCAT44(ppcStack_a60._4_4_,fVar71);
          ppcStack_a80 = (char **)CONCAT44(ppcStack_a80._4_4_,fVar70 + fVar52);
          uStack_aa0._0_4_ = fVar57;
          FUN_1096f04ac(fVar48,fVar70,ppcVar32);
          FUN_1096f04ac(fVar49,fVar71,ppcVar32);
          FUN_1096f04ac(fVar49,fVar70 + fVar52,ppcVar32);
          fVar57 = fVar70 + (float)uStack_aa0;
          uStack_aa0 = CONCAT44(uStack_aa0._4_4_,fVar57 - fVar52);
          FUN_1096f0410(fVar49,ppcVar32);
          fVar52 = fVar57 - fVar52 * 0.44771522;
          FUN_1096f04ac(fVar49,fVar52,ppcVar32);
          FUN_1096f04ac(uStack_aa8._4_4_,fVar57,ppcVar32);
          FUN_1096f04ac((ulong)ppcStack_a90 & 0xffffffff,fVar57,ppcVar32);
          uVar29 = (ulong)ppcStack_a70 & 0xffffffff;
          FUN_1096f0410(uVar29,fVar57,ppcVar32);
          fVar73 = fVar73 + fVar67 * 0.44771522;
          FUN_1096f04ac(fVar73,fVar57,ppcVar32);
          FUN_1096f04ac(uVar47,fVar52,ppcVar32);
          FUN_1096f04ac(uVar47,(float)uStack_aa0,ppcVar32);
          FUN_1096f0410(uVar47,ppcStack_a80._0_4_,ppcVar32);
          FUN_1096f04ac(uVar47,ppcStack_a60._0_4_,ppcVar32);
          FUN_1096f04ac(fVar73,fVar70,ppcVar32);
LAB_1096ec3d0:
          FUN_1096f04ac(uVar29,fVar70,ppcVar32);
        }
        uVar47 = 1;
LAB_1096ec3dc:
        FUN_1096eff6c(ppcVar32,uVar47);
        ppcVar16 = (char **)param_3;
        goto LAB_1096ec3e0;
      }
      goto LAB_1096ec3e8;
    }
    ppcVar12 = (char **)pcVar33;
    _strcmp(pcVar33,"circle");
    if ((int)ppcVar12 == 0) {
      fVar70 = *(float *)(ppcVar32 + 0x1380);
      if ((int)fVar70 < 0x7f) {
        *(uint *)(ppcVar32 + 0x1380) = (int)fVar70 + 1;
        ppcVar12 = ppcVar32 + (long)(int)fVar70 * 0x27 + 0x27;
        _memcpy(ppcVar12,ppcVar32 + (long)(int)fVar70 * 0x27,0x138);
      }
      pcVar53 = *(char **)param_3;
      if (pcVar53 != (char *)0x0) {
        pcVar33 = (char *)((long)param_3 + 8);
        fVar49 = 0.0;
        fVar70 = 0.0;
        uVar47 = 0;
        do {
          ppcVar12 = ppcVar32;
          FUN_1096ee638(ppcVar32,pcVar53,*(char **)pcVar33);
          if ((int)ppcVar12 == 0) {
            pcVar53 = *(char **)((long)pcVar33 + -8);
            cVar22 = *pcVar53;
            if (cVar22 == 'c') {
              cVar22 = pcVar53[1];
              if (cVar22 == 'x') {
                if (pcVar53[2] != '\0') goto LAB_1096eb2ec;
                pcVar53 = *(char **)pcVar33;
                fVar57 = *(float *)(ppcVar32 + 4999);
                fVar52 = *(float *)(ppcVar32 + 5000);
                FUN_1096eefa4(pcVar53);
                ppcVar12 = ppcVar32;
                uVar47 = FUN_1096ef8f8(fVar57,fVar52,ppcVar32,pcVar53);
                pcVar53 = *(char **)((long)pcVar33 + -8);
                cVar22 = *pcVar53;
                if (cVar22 != 'c') goto LAB_1096eb39c;
                cVar22 = pcVar53[1];
              }
              if ((cVar22 != 'y') || (pcVar53[2] != '\0')) goto LAB_1096eb2ec;
              pcVar53 = *(char **)pcVar33;
              fVar70 = *(float *)((long)ppcVar32 + 0x9c3c);
              fVar57 = *(float *)((long)ppcVar32 + 0x9c44);
              FUN_1096eefa4(pcVar53);
              ppcVar12 = ppcVar32;
              fVar70 = (float)FUN_1096ef8f8(fVar70,fVar57,ppcVar32,pcVar53);
              pcVar53 = *(char **)((long)pcVar33 + -8);
              cVar22 = *pcVar53;
            }
LAB_1096eb39c:
            if ((cVar22 == 'r') && (pcVar53[1] == '\0')) {
              pcVar53 = *(char **)pcVar33;
              fVar49 = *(float *)(ppcVar32 + 5000);
              fVar57 = *(float *)((long)ppcVar32 + 0x9c44);
              FUN_1096eefa4(pcVar53);
              ppcVar12 = ppcVar32;
              fVar49 = (float)FUN_1096ef8f8(0,SQRT(fVar57 * fVar57 + fVar49 * fVar49) / 1.4142135,
                                            ppcVar32,pcVar53);
              fVar49 = ABS(fVar49);
            }
          }
LAB_1096eb2ec:
          pcVar53 = *(char **)((long)pcVar33 + 8);
          pcVar33 = (char *)((long)pcVar33 + 0x10);
        } while (pcVar53 != (char *)0x0);
        if (0.0 < fVar49) {
          *(float *)(ppcVar32 + 0x1382) = 0.0;
          fVar57 = (float)uVar47;
          fVar67 = fVar57 + fVar49;
          ppcStack_a60 = (char **)CONCAT44(ppcStack_a60._4_4_,fVar67);
          FUN_1096f04ac(fVar67,fVar70,ppcVar32);
          fVar52 = fVar70 + fVar49 * 0.5522848;
          fVar48 = fVar57 + fVar49 * 0.5522848;
          ppcStack_a70 = (char **)CONCAT44(ppcStack_a70._4_4_,fVar48);
          fVar73 = fVar70 + fVar49;
          FUN_1096f04ac(fVar67,fVar52,ppcVar32);
          FUN_1096f04ac(fVar48,fVar73,ppcVar32);
          FUN_1096f04ac(uVar47,fVar73,ppcVar32);
          fVar67 = fVar57 - fVar49 * 0.5522848;
          fVar57 = fVar57 - fVar49;
          FUN_1096f04ac(fVar67,fVar73,ppcVar32);
          FUN_1096f04ac(fVar57,fVar52,ppcVar32);
          FUN_1096f04ac(fVar57,fVar70,ppcVar32);
          fVar52 = fVar70 - fVar49 * 0.5522848;
          fVar49 = fVar70 - fVar49;
          FUN_1096f04ac(fVar57,fVar52,ppcVar32);
          FUN_1096f04ac(fVar67,fVar49,ppcVar32);
          FUN_1096f04ac(uVar47,fVar49,ppcVar32);
          FUN_1096f04ac((ulong)ppcStack_a70 & 0xffffffff,fVar49,ppcVar32);
          uVar29 = (ulong)ppcStack_a60 & 0xffffffff;
          FUN_1096f04ac(uVar29,fVar52,ppcVar32);
          goto LAB_1096ec3d0;
        }
      }
      goto LAB_1096ec3e8;
    }
    ppcVar12 = (char **)pcVar33;
    _strcmp(pcVar33,"ellipse");
    if ((int)ppcVar12 == 0) {
      fVar70 = *(float *)(ppcVar32 + 0x1380);
      if ((int)fVar70 < 0x7f) {
        *(uint *)(ppcVar32 + 0x1380) = (int)fVar70 + 1;
        ppcVar12 = ppcVar32 + (long)(int)fVar70 * 0x27 + 0x27;
        _memcpy(ppcVar12,ppcVar32 + (long)(int)fVar70 * 0x27,0x138);
      }
      pcVar53 = *(char **)param_3;
      if (pcVar53 != (char *)0x0) {
        pcVar33 = (char *)((long)param_3 + 8);
        fVar57 = 0.0;
        fVar49 = 0.0;
        fVar70 = 0.0;
        uVar47 = 0;
        do {
          ppcVar12 = ppcVar32;
          FUN_1096ee638(ppcVar32,pcVar53,*(char **)pcVar33);
          if ((int)ppcVar12 == 0) {
            pcVar53 = *(char **)((long)pcVar33 + -8);
            cVar22 = *pcVar53;
            if (cVar22 == 'c') {
              cVar22 = pcVar53[1];
              if (cVar22 == 'x') {
                if (pcVar53[2] != '\0') goto LAB_1096eb43c;
                pcVar53 = *(char **)pcVar33;
                fVar52 = *(float *)(ppcVar32 + 4999);
                fVar73 = *(float *)(ppcVar32 + 5000);
                FUN_1096eefa4(pcVar53);
                ppcVar12 = ppcVar32;
                uVar47 = FUN_1096ef8f8(fVar52,fVar73,ppcVar32,pcVar53);
                pcVar53 = *(char **)((long)pcVar33 + -8);
                cVar22 = *pcVar53;
                if (cVar22 != 'c') goto LAB_1096eb4ec;
                cVar22 = pcVar53[1];
              }
              if ((cVar22 != 'y') || (pcVar53[2] != '\0')) goto LAB_1096eb43c;
              pcVar53 = *(char **)pcVar33;
              fVar70 = *(float *)((long)ppcVar32 + 0x9c3c);
              fVar52 = *(float *)((long)ppcVar32 + 0x9c44);
              FUN_1096eefa4(pcVar53);
              ppcVar12 = ppcVar32;
              fVar70 = (float)FUN_1096ef8f8(fVar70,fVar52,ppcVar32,pcVar53);
              pcVar53 = *(char **)((long)pcVar33 + -8);
              cVar22 = *pcVar53;
            }
LAB_1096eb4ec:
            if (cVar22 == 'r') {
              cVar22 = pcVar53[1];
              if (cVar22 == 'x') {
                if (pcVar53[2] == '\0') {
                  pcVar53 = *(char **)pcVar33;
                  fVar49 = *(float *)(ppcVar32 + 5000);
                  FUN_1096eefa4(pcVar53);
                  ppcVar12 = ppcVar32;
                  fVar49 = (float)FUN_1096ef8f8(0,fVar49,ppcVar32,pcVar53);
                  fVar49 = ABS(fVar49);
                  pcVar53 = *(char **)((long)pcVar33 + -8);
                  if (*pcVar53 == 'r') {
                    cVar22 = pcVar53[1];
                    goto LAB_1096eb540;
                  }
                }
              }
              else {
LAB_1096eb540:
                if ((cVar22 == 'y') && (pcVar53[2] == '\0')) {
                  pcVar53 = *(char **)pcVar33;
                  fVar57 = *(float *)((long)ppcVar32 + 0x9c44);
                  FUN_1096eefa4(pcVar53);
                  ppcVar12 = ppcVar32;
                  fVar57 = (float)FUN_1096ef8f8(0,fVar57,ppcVar32,pcVar53);
                  fVar57 = ABS(fVar57);
                }
              }
            }
          }
LAB_1096eb43c:
          pcVar53 = *(char **)((long)pcVar33 + 8);
          pcVar33 = (char *)((long)pcVar33 + 0x10);
        } while (pcVar53 != (char *)0x0);
        if ((0.0 < fVar49) && (0.0 < fVar57)) {
          *(float *)(ppcVar32 + 0x1382) = 0.0;
          fVar52 = (float)uVar47;
          fVar67 = fVar52 + fVar49;
          ppcStack_a60 = (char **)CONCAT44(ppcStack_a60._4_4_,fVar67);
          FUN_1096f04ac(fVar67,fVar70,ppcVar32);
          ppcStack_a80 = (char **)CONCAT44(ppcStack_a80._4_4_,fVar70 + fVar57 * 0.5522848);
          fVar48 = fVar52 + fVar49 * 0.5522848;
          ppcStack_a70 = (char **)CONCAT44(ppcStack_a70._4_4_,fVar48);
          fVar73 = fVar70 + fVar57;
          FUN_1096f04ac(fVar67,ppcVar32);
          FUN_1096f04ac(fVar48,fVar73,ppcVar32);
          FUN_1096f04ac(uVar47,fVar73,ppcVar32);
          fVar67 = fVar52 - fVar49 * 0.5522848;
          fVar52 = fVar52 - fVar49;
          FUN_1096f04ac(fVar67,fVar73,ppcVar32);
          FUN_1096f04ac(fVar52,ppcStack_a80._0_4_,ppcVar32);
          FUN_1096f04ac(fVar52,fVar70,ppcVar32);
          fVar49 = fVar70 - fVar57 * 0.5522848;
          fVar57 = fVar70 - fVar57;
          FUN_1096f04ac(fVar52,fVar49,ppcVar32);
          FUN_1096f04ac(fVar67,fVar57,ppcVar32);
          FUN_1096f04ac(uVar47,fVar57,ppcVar32);
          FUN_1096f04ac((ulong)ppcStack_a70 & 0xffffffff,fVar57,ppcVar32);
          uVar29 = (ulong)ppcStack_a60 & 0xffffffff;
          FUN_1096f04ac(uVar29,fVar49,ppcVar32);
          goto LAB_1096ec3d0;
        }
      }
      goto LAB_1096ec3e8;
    }
    ppcVar12 = (char **)pcVar33;
    _strcmp(pcVar33,"line");
    if ((int)ppcVar12 == 0) {
      fVar70 = *(float *)(ppcVar32 + 0x1380);
      if ((int)fVar70 < 0x7f) {
        *(uint *)(ppcVar32 + 0x1380) = (int)fVar70 + 1;
        _memcpy(ppcVar32 + (long)(int)fVar70 * 0x27 + 0x27,ppcVar32 + (long)(int)fVar70 * 0x27,0x138
               );
      }
      ppcVar12 = ppcVar32;
      FUN_1096edf4c(ppcVar32,param_3);
      goto LAB_1096ec3e8;
    }
    ppcVar12 = (char **)pcVar33;
    _strcmp(pcVar33,"polyline");
    if ((int)ppcVar12 == 0) {
      fVar70 = *(float *)(ppcVar32 + 0x1380);
      if ((int)fVar70 < 0x7f) {
        *(uint *)(ppcVar32 + 0x1380) = (int)fVar70 + 1;
        _memcpy(ppcVar32 + (long)(int)fVar70 * 0x27 + 0x27,ppcVar32 + (long)(int)fVar70 * 0x27,0x138
               );
      }
      uVar47 = 0;
LAB_1096ec4c0:
      ppcVar12 = ppcVar32;
      FUN_1096ee144(ppcVar32,param_3,uVar47);
      goto LAB_1096ec3e8;
    }
    ppcVar12 = (char **)pcVar33;
    _strcmp(pcVar33,"polygon");
    if ((int)ppcVar12 == 0) {
      fVar70 = *(float *)(ppcVar32 + 0x1380);
      if ((int)fVar70 < 0x7f) {
        *(uint *)(ppcVar32 + 0x1380) = (int)fVar70 + 1;
        _memcpy(ppcVar32 + (long)(int)fVar70 * 0x27 + 0x27,ppcVar32 + (long)(int)fVar70 * 0x27,0x138
               );
      }
      uVar47 = 1;
      goto LAB_1096ec4c0;
    }
    ppcVar12 = (char **)pcVar33;
    _strcmp(pcVar33,"linearGradient");
    if ((int)ppcVar12 == 0) goto LAB_1096eaf1c;
    ppcVar12 = (char **)pcVar33;
    _strcmp(pcVar33,"radialGradient");
    if ((int)ppcVar12 == 0) goto LAB_1096eaf44;
    ppcVar12 = (char **)pcVar33;
    _strcmp(pcVar33,&DAT_10f684680);
    if ((int)ppcVar12 == 0) goto LAB_1096ead78;
    ppcVar12 = (char **)pcVar33;
    _strcmp(pcVar33,"defs");
    if ((int)ppcVar12 == 0) {
      *(char *)((long)ppcVar32 + 0x9c59) = '\x01';
    }
    else {
      ppcVar12 = (char **)pcVar33;
      _strcmp(pcVar33,"svg");
      pcVar53 = (char *)ppcStack_958;
      ppcVar45 = ppcStack_960;
      ppcVar13 = ppcStack_968;
      ppcVar14 = ppcStack_970;
      pcVar37 = pcStack_978;
      uVar69 = uStack_980;
      uVar6 = uStack_988;
      uVar25 = uStack_990;
      uVar31 = uStack_998;
      uVar29 = uStack_9a0;
      if ((int)ppcVar12 == 0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_9c0) goto LAB_1096ec4d4;
        pcStack_978 = (char *)*(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar33 = (char *)0x0;
        ppcVar12 = ppcVar32;
        ppcVar21 = ppcStack_930;
        pcVar35 = (char *)ppcStack_938;
        pcVar38 = (char *)ppcStack_940;
        pcVar40 = (char *)ppcStack_948;
        pcVar42 = (char *)ppcStack_950;
        if (*(char **)param_3 != (char *)0x0) {
          ppcVar13 = (char **)0x0;
          pcVar35 = "width";
          pcVar38 = "height";
          pcVar40 = "viewBox";
          pcVar42 = &UNK_10f57e81c;
          ppcVar45 = ppcVar32 + 0x1200;
          do {
            pcVar53 = (char *)((long)param_3 + ppcVar13 * 8);
            ppcVar16 = *(char ***)((long)pcVar53 + 8);
            ppcVar12 = ppcVar32;
            FUN_1096ee638();
            ppcVar21 = ppcVar32;
            if ((int)ppcVar12 == 0) {
              ppcVar14 = *(char ***)pcVar53;
              ppcVar12 = ppcVar14;
              _strcmp(ppcVar14,"width");
              if ((int)ppcVar12 == 0) {
                pcVar33 = *(char **)((long)pcVar53 + 8);
                FUN_1096eefa4(pcVar33);
                ppcVar12 = ppcVar32;
                uVar51 = FUN_1096ef8f8(0,0,ppcVar32,pcVar33);
                *(undefined4 *)ppcVar32[0x1384] = uVar51;
              }
              else {
                ppcVar12 = ppcVar14;
                _strcmp(ppcVar14,"height");
                if ((int)ppcVar12 == 0) {
                  pcVar33 = *(char **)((long)pcVar53 + 8);
                  FUN_1096eefa4(pcVar33);
                  ppcVar12 = ppcVar32;
                  uVar51 = FUN_1096ef8f8(0,0,ppcVar32,pcVar33);
                  *(undefined4 *)(ppcVar32[0x1384] + 4) = uVar51;
                }
                else {
                  ppcVar12 = ppcVar14;
                  _strcmp(ppcVar14,"viewBox");
                  if ((int)ppcVar12 == 0) {
                    ppcVar14 = *(char ***)((long)pcVar53 + 8);
                    pcVar33 = (char *)&pcStack_9b8;
                    func_0x0001096efba4();
                    ppcVar12 = &pcStack_9b8;
                    dVar54 = (double)FUN_1096ef7b0();
                    *(float *)(ppcVar32 + 4999) = (float)dVar54;
                    pcVar53 = (char *)(ulong)*(byte *)ppcVar14;
                    if (*(byte *)ppcVar14 == 0) goto LAB_1096ee5fc;
                    while( true ) {
                      pcVar33 = (char *)(ulong)(uint)(int)(char)pcVar53;
                      ppcVar16 = (char **)0x7;
                      ppcVar12 = (char **)&UNK_10f57e81c;
                      _memchr();
                      if (((ppcVar12 == (char **)0x0) && ((int)pcVar53 != 0x2c)) &&
                         ((int)pcVar53 != 0x25)) break;
                      ppcVar14 = (char **)((long)ppcVar14 + 1);
                      pcVar53 = (char *)(ulong)*(byte *)ppcVar14;
                      if (*(byte *)ppcVar14 == 0) {
                        pcVar53 = (char *)0x0;
                        goto LAB_1096ee5fc;
                      }
                    }
                    pcVar33 = (char *)&pcStack_9b8;
                    func_0x0001096efba4();
                    ppcVar12 = &pcStack_9b8;
                    dVar54 = (double)FUN_1096ef7b0();
                    *(float *)((long)ppcVar32 + 0x9c3c) = (float)dVar54;
                    pcVar53 = (char *)(ulong)*(byte *)ppcVar14;
                    if (*(byte *)ppcVar14 == 0) goto LAB_1096ee5fc;
                    while( true ) {
                      pcVar33 = (char *)(ulong)(uint)(int)(char)pcVar53;
                      ppcVar16 = (char **)0x7;
                      ppcVar12 = (char **)&UNK_10f57e81c;
                      _memchr();
                      if (((ppcVar12 == (char **)0x0) && ((int)pcVar53 != 0x2c)) &&
                         ((int)pcVar53 != 0x25)) break;
                      ppcVar14 = (char **)((long)ppcVar14 + 1);
                      pcVar53 = (char *)(ulong)*(byte *)ppcVar14;
                      if (*(byte *)ppcVar14 == 0) {
                        pcVar53 = (char *)0x0;
                        goto LAB_1096ee5fc;
                      }
                    }
                    pcVar33 = (char *)&pcStack_9b8;
                    func_0x0001096efba4();
                    ppcVar12 = &pcStack_9b8;
                    dVar54 = (double)FUN_1096ef7b0();
                    *(float *)(ppcVar32 + 5000) = (float)dVar54;
                    bVar3 = *(byte *)ppcVar14;
                    while( true ) {
                      pcVar53 = (char *)(ulong)bVar3;
                      if (bVar3 == 0) goto LAB_1096ee5fc;
                      pcVar33 = (char *)(ulong)(uint)(int)(char)bVar3;
                      ppcVar16 = (char **)0x7;
                      ppcVar12 = (char **)&UNK_10f57e81c;
                      _memchr();
                      if (((ppcVar12 == (char **)0x0) && (bVar3 != 0x2c)) && (bVar3 != 0x25)) break;
                      ppcVar14 = (char **)((long)ppcVar14 + 1);
                      bVar3 = *(byte *)ppcVar14;
                    }
                    func_0x0001096efba4(ppcVar14,&pcStack_9b8);
                    ppcVar12 = &pcStack_9b8;
                    dVar54 = (double)FUN_1096ef7b0();
                    *(float *)((long)ppcVar32 + 0x9c44) = (float)dVar54;
                  }
                  else {
                    ppcVar12 = ppcVar14;
                    _strcmp(ppcVar14,&DAT_10f47dda1);
                    if ((int)ppcVar12 == 0) {
                      ppcVar14 = *(char ***)((long)pcVar53 + 8);
                      ppcVar12 = ppcVar14;
                      _strstr(ppcVar14,"none");
                      if (ppcVar12 == (char **)0x0) {
                        ppcVar12 = ppcVar14;
                        _strstr(ppcVar14,&DAT_10f49662e);
                        if (ppcVar12 == (char **)0x0) {
                          ppcVar12 = ppcVar14;
                          _strstr(ppcVar14,&UNK_10f57e86a);
                          if (ppcVar12 != (char **)0x0) {
                            fVar70 = 1.4013e-45;
                            goto LAB_1096ee500;
                          }
                          ppcVar12 = ppcVar14;
                          _strstr(ppcVar14,&DAT_10f496633);
                          if (ppcVar12 != (char **)0x0) {
                            fVar70 = 2.8026e-45;
                            goto LAB_1096ee500;
                          }
                        }
                        else {
                          fVar70 = 0.0;
LAB_1096ee500:
                          *(float *)(ppcVar32 + 0x1389) = fVar70;
                        }
                        ppcVar12 = ppcVar14;
                        _strstr(ppcVar14,&DAT_10f496638);
                        if (ppcVar12 == (char **)0x0) {
                          ppcVar12 = ppcVar14;
                          _strstr(ppcVar14,&UNK_10f57e86f);
                          if (ppcVar12 != (char **)0x0) {
                            fVar70 = 1.4013e-45;
                            goto LAB_1096ee554;
                          }
                          ppcVar12 = ppcVar14;
                          _strstr(ppcVar14,&DAT_10f49663d);
                          if (ppcVar12 != (char **)0x0) {
                            fVar70 = 2.8026e-45;
                            goto LAB_1096ee554;
                          }
                        }
                        else {
                          fVar70 = 0.0;
LAB_1096ee554:
                          *(float *)((long)ppcVar32 + 0x9c4c) = fVar70;
                        }
                        pcVar53 = (char *)0x1;
                        fVar70 = 1.4013e-45;
                        *(float *)(ppcVar32 + 0x138a) = 1.4013e-45;
                        ppcVar12 = ppcVar14;
                        _strstr(ppcVar14,"slice");
                        if (ppcVar12 != (char **)0x0) {
                          fVar70 = 2.8026e-45;
                        }
                        *(float *)(ppcVar32 + 0x138a) = fVar70;
                      }
                      else {
                        *(float *)(ppcVar32 + 0x138a) = 0.0;
                      }
                    }
                  }
                }
              }
            }
            ppcVar13 = (char **)((long)ppcVar13 + 2);
          } while (*(char **)((long)param_3 + ppcVar13 * 8) != (char *)0x0);
          pcVar33 = (char *)0x0;
          pcVar35 = "width";
          pcVar38 = "height";
          pcVar40 = "viewBox";
          pcVar42 = &UNK_10f57e81c;
        }
LAB_1096ee5fc:
        if ((char *)*(long *)PTR____stack_chk_guard_11034bdc0 == pcStack_978) {
          return ppcVar12;
        }
        ___stack_chk_fail();
        ppcVar8 = apcStack_a30;
        ppcVar41 = apcStack_a30;
        uStack_a10 = uVar69;
        pcStack_a08 = pcVar37;
        ppcStack_a00 = (char **)pcVar42;
        ppcStack_9f8 = (char **)pcVar40;
        ppcStack_9f0 = (char **)pcVar38;
        uStack_9e8 = (char **)pcVar35;
        uStack_9e0 = ppcVar21;
        uStack_9d8 = (char **)param_3;
        pppppppuStack_9d0 = &pppppppuStack_920;
        pcStack_9c8 = FUN_1096ee638;
        pppppppuVar46 = &pppppppuStack_9d0;
        lStack_a18 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar35 = (char *)(ppcVar12 + 0x1200);
        fVar70 = *(float *)(ppcVar12 + 0x1380);
        ppcVar32 = (char **)(long)(int)fVar70;
        ppcVar36 = (char **)pcVar33;
        ppcVar21 = ppcVar16;
        _strcmp(pcVar33,"style");
        if ((int)ppcVar36 == 0) {
          pcVar38 = (char *)ppcVar16;
          FUN_1096ef014();
LAB_1096eeb94:
          ppcVar36 = (char **)0x1;
        }
        else {
          ppcVar32 = ppcVar12 + (long)(int)fVar70 * 0x27;
          ppcVar36 = (char **)pcVar33;
          _strcmp(pcVar33,"display");
          if ((int)ppcVar36 == 0) {
            pcVar38 = "none";
            ppcVar12 = ppcVar16;
            _strcmp();
            if ((int)ppcVar12 == 0) {
              *(char *)((long)ppcVar32 + 0x136) = '\0';
            }
            goto LAB_1096eeb94;
          }
          ppcVar36 = (char **)pcVar33;
          _strcmp(pcVar33,"fill");
          if ((int)ppcVar36 != 0) {
            pcVar38 = &DAT_10f68f0f6;
            ppcVar36 = (char **)pcVar33;
            _strcmp();
            if ((int)ppcVar36 == 0) {
              ppcVar12 = ppcVar16;
              dVar54 = (double)FUN_1096ef7b0();
              fVar70 = 0.0;
              if (0.0 <= (float)dVar54) {
                fVar70 = (float)dVar54;
              }
              fVar49 = 1.0;
              if (fVar70 <= 1.0) {
                fVar49 = fVar70;
              }
              *(float *)(ppcVar32 + 0xc) = fVar49;
            }
            else {
              pcVar38 = "fill-opacity";
              ppcVar36 = (char **)pcVar33;
              _strcmp();
              if ((int)ppcVar36 == 0) {
                ppcVar12 = ppcVar16;
                dVar54 = (double)FUN_1096ef7b0();
                fVar70 = 0.0;
                if (0.0 <= (float)dVar54) {
                  fVar70 = (float)dVar54;
                }
                fVar49 = 1.0;
                if (fVar70 <= 1.0) {
                  fVar49 = fVar70;
                }
                *(float *)((long)ppcVar32 + 100) = fVar49;
              }
              else {
                ppcVar36 = (char **)pcVar33;
                _strcmp(pcVar33,"stroke");
                if ((int)ppcVar36 == 0) {
                  pcVar38 = "none";
                  ppcVar12 = ppcVar16;
                  _strcmp();
                  if ((int)ppcVar12 != 0) {
                    pcVar38 = "url(";
                    ppcVar21 = (char **)0x4;
                    ppcVar12 = ppcVar16;
                    _strncmp();
                    if ((int)ppcVar12 == 0) {
                      uVar28 = 0;
                      *(char *)((long)ppcVar32 + 0x135) = '\x02';
                      pfVar7 = (float *)((long)ppcVar32 + 0xac);
                      pfVar30 = (float *)((long)ppcVar16 + 4);
                      if (*(char *)pfVar30 == '#') {
                        pfVar30 = (float *)((long)ppcVar16 + 5);
                      }
                      do {
                        if (*(char *)((long)pfVar30 + uVar28) == ')') break;
                        *(char *)((long)pfVar7 + uVar28) = *(char *)((long)pfVar30 + uVar28);
                        uVar28 = uVar28 + 1;
                      } while (uVar28 != 0x3f);
                      goto LAB_1096ee970;
                    }
                    ppcVar36 = (char **)0x1;
                    *(char *)((long)ppcVar32 + 0x135) = '\x01';
                    ppcVar12 = ppcVar16;
                    FUN_1096ef244();
                    *(float *)((long)ppcVar32 + 0x5c) = SUB84(ppcVar12,0);
                    goto LAB_1096eeb98;
                  }
                  *(char *)((long)ppcVar32 + 0x135) = '\0';
                }
                else {
                  ppcVar36 = (char **)pcVar33;
                  _strcmp(pcVar33,"stroke-width");
                  if ((int)ppcVar36 == 0) {
                    fVar70 = SQRT(*(float *)((long)ppcVar12 + 0x9c44) *
                                  *(float *)((long)ppcVar12 + 0x9c44) +
                                  *(float *)(ppcVar12 + 5000) * *(float *)(ppcVar12 + 5000)) /
                             1.4142135;
                    pcVar37 = (char *)(ulong)(uint)fVar70;
                    pcVar38 = (char *)ppcVar16;
                    FUN_1096eefa4();
                    fVar70 = (float)FUN_1096ef8f8(0,fVar70);
                    *(float *)((long)ppcVar32 + 0xec) = fVar70;
                  }
                  else {
                    ppcVar36 = (char **)pcVar33;
                    _strcmp(pcVar33,"stroke-dasharray");
                    if ((int)ppcVar36 == 0) {
                      ppcVar21 = (char **)((long)ppcVar32 + 0xf4);
                      pcVar38 = (char *)ppcVar16;
                      FUN_1096ef4a0();
                      *(float *)((long)ppcVar32 + 0x114) = SUB84(ppcVar12,0);
                    }
                    else {
                      ppcVar36 = (char **)pcVar33;
                      _strcmp(pcVar33,"stroke-dashoffset");
                      if ((int)ppcVar36 == 0) {
                        fVar70 = SQRT(*(float *)((long)ppcVar12 + 0x9c44) *
                                      *(float *)((long)ppcVar12 + 0x9c44) +
                                      *(float *)(ppcVar12 + 5000) * *(float *)(ppcVar12 + 5000)) /
                                 1.4142135;
                        pcVar37 = (char *)(ulong)(uint)fVar70;
                        pcVar38 = (char *)ppcVar16;
                        FUN_1096eefa4();
                        fVar70 = (float)FUN_1096ef8f8(0,fVar70);
                        *(float *)(ppcVar32 + 0x1e) = fVar70;
                      }
                      else {
                        pcVar38 = "stroke-opacity";
                        ppcVar36 = (char **)pcVar33;
                        _strcmp();
                        if ((int)ppcVar36 == 0) {
                          ppcVar12 = ppcVar16;
                          dVar54 = (double)FUN_1096ef7b0();
                          fVar70 = 0.0;
                          if (0.0 <= (float)dVar54) {
                            fVar70 = (float)dVar54;
                          }
                          fVar49 = 1.0;
                          if (fVar70 <= 1.0) {
                            fVar49 = fVar70;
                          }
                          *(float *)(ppcVar32 + 0xd) = fVar49;
                        }
                        else {
                          ppcVar36 = (char **)pcVar33;
                          _strcmp(pcVar33,"stroke-linecap");
                          if ((int)ppcVar36 == 0) {
                            uVar47 = 0x1096eea90;
                            ppcVar12 = ppcVar16;
                            goto FUN_1096ef664;
                          }
                          pcVar38 = "stroke-linejoin";
                          ppcVar36 = (char **)pcVar33;
                          _strcmp();
                          if ((int)ppcVar36 == 0) {
                            ppcVar12 = ppcVar16;
                            func_0x0001096ef6c8();
                            *(char *)(ppcVar32 + 0x23) = (char)ppcVar12;
                          }
                          else {
                            pcVar38 = "stroke-miterlimit";
                            ppcVar36 = (char **)pcVar33;
                            _strcmp();
                            if ((int)ppcVar36 == 0) {
                              ppcVar12 = ppcVar16;
                              dVar54 = (double)FUN_1096ef7b0();
                              fVar70 = 0.0;
                              if (0.0 <= (float)dVar54) {
                                fVar70 = (float)dVar54;
                              }
                              *(float *)((long)ppcVar32 + 0x11c) = fVar70;
                            }
                            else {
                              pcVar38 = "fill-rule";
                              ppcVar36 = (char **)pcVar33;
                              _strcmp();
                              if ((int)ppcVar36 == 0) {
                                ppcVar12 = ppcVar16;
                                func_0x0001096ef72c();
                                *(char *)(ppcVar32 + 0x24) = (char)ppcVar12;
                              }
                              else {
                                ppcVar36 = (char **)pcVar33;
                                _strcmp(pcVar33,"font-size");
                                if ((int)ppcVar36 == 0) {
                                  fVar70 = SQRT(*(float *)((long)ppcVar12 + 0x9c44) *
                                                *(float *)((long)ppcVar12 + 0x9c44) +
                                                *(float *)(ppcVar12 + 5000) *
                                                *(float *)(ppcVar12 + 5000)) / 1.4142135;
                                  pcVar37 = (char *)(ulong)(uint)fVar70;
                                  pcVar38 = (char *)ppcVar16;
                                  FUN_1096eefa4();
                                  fVar70 = (float)FUN_1096ef8f8(0,fVar70);
                                  *(float *)((long)ppcVar32 + 0x124) = fVar70;
                                }
                                else {
                                  ppcVar36 = (char **)pcVar33;
                                  _strcmp(pcVar33,"transform");
                                  if ((int)ppcVar36 == 0) {
                                    FUN_1096eebec(apcStack_a30,ppcVar16);
                                    ppcVar12 = ppcVar32 + 8;
                                    FUN_1096ef770();
                                    pcVar38 = (char *)ppcVar41;
                                  }
                                  else {
                                    pcVar38 = "stop-color";
                                    ppcVar36 = (char **)pcVar33;
                                    _strcmp();
                                    if ((int)ppcVar36 == 0) {
                                      ppcVar12 = ppcVar16;
                                      FUN_1096ef244();
                                      *(float *)(ppcVar32 + 0x25) = SUB84(ppcVar12,0);
                                    }
                                    else {
                                      pcVar38 = "stop-opacity";
                                      ppcVar36 = (char **)pcVar33;
                                      _strcmp();
                                      if ((int)ppcVar36 == 0) {
                                        ppcVar12 = ppcVar16;
                                        dVar54 = (double)FUN_1096ef7b0();
                                        fVar70 = 0.0;
                                        if (0.0 <= (float)dVar54) {
                                          fVar70 = (float)dVar54;
                                        }
                                        fVar49 = 1.0;
                                        if (fVar70 <= 1.0) {
                                          fVar49 = fVar70;
                                        }
                                        *(float *)((long)ppcVar32 + 300) = fVar49;
                                      }
                                      else {
                                        pcVar38 = &DAT_10f63975c;
                                        ppcVar41 = (char **)pcVar33;
                                        _strcmp();
                                        if ((int)ppcVar41 == 0) {
                                          pcVar38 = (char *)ppcVar16;
                                          FUN_1096eefa4();
                                          fVar70 = (float)FUN_1096ef8f8(0,0x3f800000);
                                          *(float *)(ppcVar32 + 0x26) = fVar70;
                                        }
                                        else {
                                          if (((*pcVar33 != 'i') ||
                                              (*(char *)((long)pcVar33 + 1) != 'd')) ||
                                             (*(char *)((long)pcVar33 + 2) != '\0')) {
                                            ppcVar36 = (char **)0x0;
                                            ppcVar12 = ppcVar41;
                                            goto LAB_1096eeb98;
                                          }
                                          ppcVar21 = (char **)0x3f;
                                          ppcVar12 = ppcVar32;
                                          pcVar38 = (char *)ppcVar16;
                                          _strncpy();
                                          *(char *)((long)ppcVar32 + 0x3f) = '\0';
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LAB_1096eeb94;
          }
          pcVar38 = "none";
          ppcVar12 = ppcVar16;
          _strcmp();
          if ((int)ppcVar12 == 0) {
            *(char *)((long)ppcVar32 + 0x134) = '\0';
            goto LAB_1096eeb94;
          }
          pcVar38 = "url(";
          ppcVar21 = (char **)0x4;
          ppcVar12 = ppcVar16;
          _strncmp();
          if ((int)ppcVar12 == 0) {
            uVar28 = 0;
            *(char *)((long)ppcVar32 + 0x134) = '\x02';
            pfVar7 = (float *)((long)ppcVar32 + 0x6c);
            pfVar30 = (float *)((long)ppcVar16 + 4);
            if (*(char *)pfVar30 == '#') {
              pfVar30 = (float *)((long)ppcVar16 + 5);
            }
            do {
              if (*(char *)((long)pfVar30 + uVar28) == ')') break;
              *(char *)((long)pfVar7 + uVar28) = *(char *)((long)pfVar30 + uVar28);
              uVar28 = uVar28 + 1;
            } while (uVar28 != 0x3f);
LAB_1096ee970:
            ppcVar16 = (char **)((long)ppcVar16 + 4);
            *(char *)((long)pfVar7 + (uVar28 & 0xffffffff)) = '\0';
            goto LAB_1096eeb94;
          }
          ppcVar36 = (char **)0x1;
          *(char *)((long)ppcVar32 + 0x134) = '\x01';
          ppcVar12 = ppcVar16;
          FUN_1096ef244();
          *(float *)(ppcVar32 + 0xb) = SUB84(ppcVar12,0);
        }
LAB_1096eeb98:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a18) {
          return ppcVar36;
        }
        ___stack_chk_fail();
        uStack_ac0 = uVar29;
        dStack_ab8 = (double)uVar31;
        dStack_ab0 = (double)uVar25;
        uStack_aa8 = uVar6;
        uStack_aa0 = uVar69;
        pcStack_a98 = pcVar37;
        ppcStack_a90 = ppcVar14;
        ppcStack_a88 = ppcVar13;
        ppcStack_a80 = ppcVar45;
        ppcStack_a78 = (char **)pcVar53;
        ppcStack_a70 = (char **)pcVar42;
        ppcStack_a68 = (char **)pcVar35;
        ppcStack_a60 = (char **)pcVar33;
        ppcStack_a58 = ppcVar36;
        ppcStack_a50 = ppcVar16;
        ppcStack_a48 = ppcVar32;
        pppppppuStack_a40 = pppppppuVar46;
        pcStack_a38 = FUN_1096eebec;
        uStack_ac8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uStack_b18 = 0x3f80000000000000;
        uStack_b20 = 0x3f800000;
        ppcVar12[1] = (char *)0x3f80000000000000;
        *ppcVar12 = (char *)0x3f800000;
        ppcVar12[2] = (char *)0x0;
        ppcVar41 = ppcVar12;
        if (*pcVar38 != '\0') {
          ppcVar36 = (char **)&DAT_10f638b90;
          pcVar33 = "translate";
          pcVar37 = (char *)0x0;
          pcVar35 = "scale";
          uVar69 = 0;
          pcVar42 = "rotate";
          ppcVar14 = (char **)0x43340000;
          pcVar53 = "skewX";
          uStack_b28 = 0;
          uStack_b30 = 0x3f80000000000000;
          ppcVar32 = (char **)pcVar38;
          do {
            ppcVar16 = ppcVar32;
            _strncmp(ppcVar32,&DAT_10f638b90,6);
            if ((int)ppcVar16 == 0) {
              uStack_b08 = (char **)((ulong)uStack_b08 & 0xffffffff);
              ppcVar21 = (char **)0x6;
              ppcVar13 = ppcVar32;
              FUN_1096efa5c(ppcVar32,&fStack_ae0,6,(long)&uStack_b08 + 4);
              if (uStack_b08._4_4_ == 6) {
                fStack_af8 = fStack_ad8;
                fStack_af4 = fStack_ad4;
                fStack_b00 = fStack_ae0;
                fStack_afc = fStack_adc;
                uStack_af0._0_4_ = fStack_ad0;
                uStack_af0._4_4_ = fStack_acc;
              }
LAB_1096eef44:
              ppcVar32 = (char **)((long)ppcVar32 + (long)(int)ppcVar13);
              ppcVar41 = ppcVar12;
              FUN_1096ef770(ppcVar12,&fStack_b00);
            }
            else {
              ppcVar16 = ppcVar32;
              _strncmp(ppcVar32,"translate",9);
              if ((int)ppcVar16 == 0) {
                uStack_b08 = (char **)((ulong)uStack_b08 & 0xffffffff);
                ppcVar21 = (char **)0x2;
                ppcVar13 = ppcVar32;
                FUN_1096efa5c(ppcVar32,&fStack_ae0,2,(long)&uStack_b08 + 4);
                uStack_af0._4_4_ = 0.0;
                if (uStack_b08._4_4_ != 1) {
                  uStack_af0._4_4_ = fStack_adc;
                }
                fStack_af8 = (float)uStack_b18;
                fStack_af4 = (float)((ulong)uStack_b18 >> 0x20);
                fStack_b00 = (float)uStack_b20;
                fStack_afc = (float)((ulong)uStack_b20 >> 0x20);
                uStack_af0._0_4_ = fStack_ae0;
                goto LAB_1096eef44;
              }
              ppcVar16 = ppcVar32;
              _strncmp(ppcVar32,"scale",5);
              if ((int)ppcVar16 == 0) {
                uStack_b08 = (char **)((ulong)uStack_b08 & 0xffffffff);
                ppcVar21 = (char **)0x2;
                ppcVar13 = ppcVar32;
                FUN_1096efa5c(ppcVar32,&fStack_ae0,2,(long)&uStack_b08 + 4);
                fStack_af4 = fStack_ae0;
                if (uStack_b08._4_4_ != 1) {
                  fStack_af4 = fStack_adc;
                }
                fStack_b00 = fStack_ae0;
                fStack_afc = 0.0;
                fStack_af8 = 0.0;
                uStack_af0._0_4_ = 0.0;
                uStack_af0._4_4_ = 0.0;
                goto LAB_1096eef44;
              }
              ppcVar16 = ppcVar32;
              _strncmp(ppcVar32,"rotate",6);
              fVar70 = 180.0;
              if ((int)ppcVar16 == 0) {
                uStack_b08 = (char **)((ulong)uStack_b08 & 0xffffffff);
                ppcVar21 = (char **)0x3;
                ppcVar13 = ppcVar32;
                FUN_1096efa5c(ppcVar32,&fStack_ae0,3,(long)&uStack_b08 + 4);
                if (uStack_b08._4_4_ == 1) {
                  fStack_adc = 0.0;
                  fStack_ad8 = 0.0;
LAB_1096eeeb8:
                  ppcVar45 = (char **)0x0;
                  fVar49 = 0.0;
                  fVar57 = 0.0;
                }
                else {
                  if (uStack_b08._4_4_ < 2) goto LAB_1096eeeb8;
                  fVar57 = 0.0 - fStack_adc;
                  fVar49 = 0.0 - fStack_ad8;
                  ppcVar45 = (char **)0x1;
                }
                fVar52 = (float)___sincosf_stret();
                fStack_b00 = fVar70 - fVar52 * 0.0;
                fStack_af8 = fVar70 * 0.0 - fVar52;
                uStack_af0._0_4_ = -(fVar52 * fVar49) + fVar70 * fVar57 + 0.0;
                fStack_afc = fVar52 + fVar70 * 0.0;
                fStack_af4 = fVar70 + fVar52 * 0.0;
                uStack_af0._4_4_ = fVar49 * fVar70 + fVar52 * fVar57 + 0.0;
                if ((int)ppcVar45 != 0) {
                  fVar70 = fStack_afc * 0.0;
                  fStack_afc = fStack_afc + fStack_b00 * 0.0;
                  fStack_b00 = fStack_b00 + fVar70;
                  fVar70 = fStack_af4 * 0.0;
                  fStack_af4 = fStack_af4 + fStack_af8 * 0.0;
                  fStack_af8 = fStack_af8 + fVar70;
                  fVar70 = (float)uStack_af0 * 0.0;
                  uStack_af0._0_4_ = (float)uStack_af0 + uStack_af0._4_4_ * 0.0 + fStack_adc;
                  uStack_af0._4_4_ = uStack_af0._4_4_ + fVar70 + fStack_ad8;
                }
                goto LAB_1096eef44;
              }
              ppcVar16 = ppcVar32;
              _strncmp(ppcVar32,"skewX",5);
              if ((int)ppcVar16 == 0) {
                uStack_b08 = (char **)((ulong)uStack_b08 & 0xffffffff);
                ppcVar21 = (char **)0x1;
                ppcVar13 = ppcVar32;
                FUN_1096efa5c(ppcVar32,&fStack_ae0,1,(long)&uStack_b08 + 4);
                fStack_af8 = (float)_tanf((fStack_ae0 / 180.0) * 3.1415927,0x43340000);
                fStack_b00 = 1.0;
                fStack_afc = 0.0;
                fStack_af4 = 1.0;
                uStack_af0._0_4_ = 0.0;
                uStack_af0._4_4_ = 0.0;
                goto LAB_1096eef44;
              }
              ppcVar21 = (char **)0x5;
              ppcVar41 = ppcVar32;
              _strncmp(ppcVar32,"skewY");
              if ((int)ppcVar41 == 0) {
                uStack_b08 = (char **)((ulong)uStack_b08 & 0xffffffff);
                ppcVar21 = (char **)0x1;
                ppcVar13 = ppcVar32;
                FUN_1096efa5c(ppcVar32,&fStack_ae0,1,(long)&uStack_b08 + 4);
                fStack_afc = (float)_tanf((fStack_ae0 / 180.0) * 3.1415927,0x43340000);
                fStack_b00 = 1.0;
                uStack_af0._0_4_ = (float)uStack_b28;
                uStack_af0._4_4_ = (float)((ulong)uStack_b28 >> 0x20);
                fStack_af8 = (float)uStack_b30;
                fStack_af4 = (float)((ulong)uStack_b30 >> 0x20);
                goto LAB_1096eef44;
              }
              ppcVar32 = (char **)((long)ppcVar32 + 1);
            }
            ppcVar16 = ppcVar12;
          } while (*(char *)ppcVar32 != '\0');
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == uStack_ac8) {
          return ppcVar41;
        }
        ___stack_chk_fail();
        pcStack_b38 = FUN_1096eefa4;
        lStack_b58 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppcVar20 = apcStack_b98;
        ppcStack_b50 = ppcVar16;
        ppcStack_b48 = ppcVar32;
        pppppppuStack_b40 = &pppppppuStack_a40;
        func_0x0001096efba4();
        func_0x0001096efcd0();
        ppcVar12 = apcStack_b98;
        dVar54 = (double)FUN_1096ef7b0();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b58) {
          return (char **)((ulong)(uint)(float)dVar54 | (long)ppcVar41 << 0x20);
        }
        ___stack_chk_fail();
        pcStack_ba8 = FUN_1096ef014;
        lStack_c10 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar29 = (ulong)*(byte *)ppcVar20;
        ppcVar32 = ppcVar12;
        ppcVar43 = (char **)pcVar42;
        ppcStack_c00 = ppcVar14;
        ppcStack_bf8 = ppcVar13;
        ppcStack_bf0 = ppcVar45;
        ppcStack_be8 = (char **)pcVar53;
        ppcStack_be0 = (char **)pcVar42;
        ppcStack_bd8 = (char **)pcVar35;
        ppcStack_bd0 = (char **)pcVar33;
        ppcStack_bc8 = ppcVar36;
        ppcStack_bc0 = ppcVar16;
        ppcStack_bb8 = ppcVar41;
        pppppppuStack_bb0 = &pppppppuStack_b40;
        if (*(byte *)ppcVar20 != 0) {
          ppcVar43 = (char **)0x1ff;
          ppcVar16 = (char **)&UNK_10f57e81c;
          ppcVar17 = ppcVar20;
LAB_1096ef064:
          do {
            ppcVar36 = ppcVar17;
            ppcVar32 = ppcVar16;
            _memchr(&UNK_10f57e81c,(int)(char)uVar29,7);
            ppcVar45 = ppcVar36;
            if (ppcVar32 != (char **)0x0) {
              ppcVar36 = (char **)((long)ppcVar36 + 1);
              uVar29 = (ulong)*(byte *)ppcVar36;
              ppcVar17 = ppcVar36;
              ppcVar45 = ppcVar36;
              if (*(byte *)ppcVar36 != 0) goto LAB_1096ef064;
            }
            while ((ppcVar32 = ppcVar36, ppcVar13 = ppcVar36, (int)uVar29 != 0 &&
                   ((int)uVar29 != 0x3b))) {
              ppcVar36 = (char **)((long)ppcVar36 + 1);
              uVar29 = (ulong)*(byte *)ppcVar36;
            }
            while ((ppcVar45 < ppcVar32 &&
                   ((*(char *)ppcVar32 == ';' ||
                    (ppcVar14 = ppcVar16, _memchr(&UNK_10f57e81c,(long)*(char *)ppcVar32,7),
                    ppcVar13 = ppcVar32, ppcVar14 != (char **)0x0))))) {
              ppcVar32 = (char **)((long)ppcVar32 + -1);
              ppcVar13 = ppcVar45;
            }
            ppcVar14 = (char **)((long)ppcVar13 + 1);
            ppcVar32 = ppcVar45;
            ppcVar21 = ppcVar45;
            if (ppcVar45 < ppcVar14) {
              lVar34 = 0;
              if (ppcVar45 <= ppcVar13) {
                lVar34 = (long)ppcVar13 - (long)ppcVar45;
              }
              lVar34 = lVar34 + 1;
              ppcVar41 = ppcVar45;
              do {
                ppcVar21 = ppcVar41;
                ppcVar32 = ppcVar41;
                if (*(char *)ppcVar41 == ':') break;
                ppcVar41 = (char **)((long)ppcVar41 + 1);
                lVar34 = lVar34 + -1;
                ppcVar21 = ppcVar41;
                ppcVar32 = ppcVar41;
              } while (lVar34 != 0);
              while ((ppcVar45 < ppcVar41 &&
                     ((*(char *)ppcVar41 == ':' ||
                      (ppcVar20 = ppcVar16, _memchr(&UNK_10f57e81c,(long)*(char *)ppcVar41,7),
                      ppcVar21 = ppcVar41, ppcVar20 != (char **)0x0))))) {
                ppcVar41 = (char **)((long)ppcVar41 + -1);
                ppcVar21 = ppcVar45;
              }
            }
            iVar44 = (int)ppcVar21 - (int)ppcVar45;
            uVar24 = 0x1ff;
            if (iVar44 + 1 < 0x1ff) {
              uVar24 = iVar44 + 1;
            }
            uVar29 = (ulong)uVar24;
            if (iVar44 != -1) {
              uVar29 = (ulong)(int)uVar24;
              _memcpy(apcStack_e10,ppcVar45,uVar29);
            }
            *(undefined1 *)((long)apcStack_e10 + uVar29) = 0;
            if (ppcVar32 < ppcVar14) {
              lVar34 = 0;
              if (ppcVar32 <= ppcVar13) {
                lVar34 = (long)ppcVar13 - (long)ppcVar32;
              }
              lVar34 = lVar34 + 1;
              do {
                if ((*(char *)ppcVar32 != ':') &&
                   (ppcVar45 = ppcVar16, _memchr(&UNK_10f57e81c,(long)*(char *)ppcVar32,7),
                   ppcVar45 == (char **)0x0)) break;
                ppcVar32 = (char **)((long)ppcVar32 + 1);
                lVar34 = lVar34 + -1;
              } while (lVar34 != 0);
            }
            uVar39 = (int)ppcVar14 - (int)ppcVar32;
            uVar24 = uVar39;
            if (0x1fe < (int)uVar39) {
              uVar24 = 0x1ff;
            }
            pcVar35 = (char *)(ulong)uVar24;
            if (uVar39 != 0) {
              pcVar35 = (char *)(long)(int)uVar24;
              _memcpy(apcStack_1010,ppcVar32,pcVar35);
            }
            *(char *)((long)apcStack_1010 + (long)pcVar35) = '\0';
            ppcVar20 = apcStack_e10;
            ppcVar32 = ppcVar12;
            ppcVar21 = apcStack_1010;
            FUN_1096ee638();
            pcVar53 = (char *)ppcVar36;
            if (*(char *)ppcVar36 != '\0') {
              pcVar53 = (char *)((long)ppcVar36 + 1);
            }
            uVar29 = (ulong)(byte)*pcVar53;
            ppcVar41 = ppcVar12;
            ppcVar17 = (char **)pcVar53;
            ppcVar45 = apcStack_1010;
          } while (*pcVar53 != 0);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c10) {
          return ppcVar32;
        }
        ___stack_chk_fail();
        pcStack_1018 = FUN_1096ef244;
        lStack_1048 = *(long *)PTR____stack_chk_guard_11034bdc0;
        do {
          ppcVar12 = ppcVar32;
          ppcVar32 = (char **)((long)ppcVar12 + 1);
          bVar3 = *(byte *)ppcVar12;
          uVar31 = (ulong)bVar3;
        } while (bVar3 == 0x20);
        ppcVar17 = ppcVar12;
        uStack_1040 = uVar29;
        ppcStack_1038 = ppcVar36;
        ppcStack_1030 = ppcVar16;
        ppcStack_1028 = ppcVar41;
        pppppppuStack_1020 = &pppppppuStack_bb0;
        _strlen();
        if (bVar3 == 0x23 && ppcVar17 != (char **)0x0) {
          uStack_1070 = uStack_1070 & 0xffffffff00000000;
          bVar3 = *(byte *)ppcVar32;
          uVar24 = (uint)bVar3;
          if (bVar3 != 0) {
            ppcVar12 = (char **)&UNK_10f57e81c;
            uVar25 = 0;
            do {
              ppcVar20 = (char **)(ulong)(uint)(int)(char)bVar3;
              ppcVar21 = (char **)0x7;
              ppcVar16 = (char **)&UNK_10f57e81c;
              _memchr();
              uVar31 = uVar25;
              if (ppcVar16 != (char **)0x0) break;
              uVar31 = uVar25 + 1;
              bVar3 = *(byte *)((long)ppcVar32 + uVar25 + 1);
              uVar25 = uVar31;
            } while (bVar3 != 0);
            if ((int)uVar31 == 3) {
              puStack_10d0 = &uStack_1070;
              ppcVar20 = (char **)&UNK_10f4fd77a;
              _sscanf(ppcVar32);
              uVar24 = ((uint)uStack_1070 & 0xf0) << 4 | (uint)uStack_1070 & 0xf |
                       ((uint)uStack_1070 >> 8 & 0xf) << 0x10;
              uVar24 = uVar24 | uVar24 << 4;
            }
            else {
              ppcVar12 = (char **)&UNK_10f57e81c;
              if ((int)uVar31 == 6) {
                puStack_10d0 = &uStack_1070;
                ppcVar20 = (char **)&UNK_10f4fd77a;
                _sscanf(ppcVar32);
                uVar24 = (uint)uStack_1070;
              }
              else {
                uVar24 = 0;
              }
            }
          }
          ppcVar36 = (char **)(ulong)(uVar24 & 0xff00 | uVar24 >> 0x10 & 0xff |
                                     (uVar24 & 0xff) << 0x10);
        }
        else if ((((bVar3 == 0x72 && (char **)0x3 < ppcVar17) && (*(char *)ppcVar32 == 'g')) &&
                 (*(char *)((long)ppcVar12 + 2) == 'b')) && (*(char *)((long)ppcVar12 + 3) == '('))
        {
          iStack_1098 = -1;
          uStack_1094 = 0xffffffff;
          uStack_109c = 0xffffffff;
          uStack_1068 = 0;
          uStack_1070 = 0;
          uStack_1058 = 0;
          uStack_1060 = 0;
          uStack_1088 = 0;
          uStack_1090 = 0;
          uStack_1078 = 0;
          uStack_1080 = 0;
          puStack_10b0 = &uStack_109c;
          puStack_10b8 = &uStack_1090;
          piStack_10c0 = &iStack_1098;
          puStack_10c8 = &uStack_1070;
          puStack_10d0 = (ulong *)&uStack_1094;
          _sscanf((float *)((long)ppcVar12 + 4),&UNK_10f57e83b);
          puVar18 = &uStack_1070;
          ppcVar20 = (char **)0x25;
          _strchr();
          if (puVar18 == (ulong *)0x0) {
            uVar24 = uStack_1094 | iStack_1098 << 8;
            uVar39 = uStack_109c;
          }
          else {
            uVar24 = (uStack_1094 * 0xff) / 100 | (uint)(iStack_1098 * 0xff) / 100 << 8;
            uVar39 = (uStack_109c * 0xff) / 100;
          }
          ppcVar36 = (char **)(ulong)(uVar24 | uVar39 << 0x10);
        }
        else {
          ppcVar32 = (char **)&UNK_110b0af38;
          uVar31 = 10;
          do {
            iVar44 = (int)ppcVar32[-1];
            ppcVar20 = ppcVar12;
            _strcmp();
            if (iVar44 == 0) {
              ppcVar36 = (char **)(ulong)(uint)*(float *)ppcVar32;
              goto LAB_1096ef460;
            }
            ppcVar32 = ppcVar32 + 2;
            uVar31 = uVar31 - 1;
          } while (uVar31 != 0);
          ppcVar36 = (char **)0x808080;
        }
LAB_1096ef460:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1048) {
          return ppcVar36;
        }
        ___stack_chk_fail();
        ppcVar8 = (char **)auStack_1190;
        pcStack_10d8 = FUN_1096ef4a0;
        pppppppuVar46 = &pppppppuStack_10e0;
        ppcVar16 = (char **)0x0;
        lStack_1148 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uStack_1140 = uVar69;
        pcStack_1138 = pcVar37;
        ppcStack_1130 = ppcVar14;
        ppcStack_1128 = ppcVar13;
        ppcStack_1120 = ppcVar45;
        ppcStack_1118 = (char **)pcVar53;
        ppcStack_1110 = ppcVar43;
        ppcStack_1108 = (char **)pcVar35;
        uStack_1100 = uVar29;
        uStack_10f8 = uVar31;
        ppcStack_10f0 = ppcVar12;
        ppcStack_10e8 = ppcVar32;
        pppppppuStack_10e0 = &pppppppuStack_1020;
        if ((*(char *)ppcVar20 != '\0') && (*(char *)ppcVar20 != 'n')) {
          uVar24 = 0;
LAB_1096ef510:
          acStack_1188[0] = '\0';
          cVar22 = *(char *)ppcVar20;
          ppcVar12 = ppcVar20;
          while (cVar22 != '\0') {
            puVar19 = &UNK_10f57e81c;
            _memchr(&UNK_10f57e81c,(int)cVar22,7);
            if ((cVar22 != ',') && (puVar19 == (undefined *)0x0)) {
              iVar44 = 0;
              goto LAB_1096ef550;
            }
            ppcVar12 = (char **)((long)ppcVar12 + 1);
            cVar22 = *(char *)ppcVar12;
          }
          lVar34 = 0;
          goto LAB_1096ef590;
        }
LAB_1096ef624:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1148) {
          return ppcVar16;
        }
        uVar47 = 0x1096ef664;
        ___stack_chk_fail();
FUN_1096ef664:
        *(char ***)((long)ppcVar8 + -0x20) = ppcVar12;
        *(char ***)((long)ppcVar8 + -0x18) = ppcVar32;
        *(undefined8 ********)((long)ppcVar8 + -0x10) = pppppppuVar46;
        *(undefined8 *)((long)ppcVar8 + -8) = uVar47;
        ppcVar12 = ppcVar16;
        _strcmp();
        if ((int)ppcVar12 != 0) {
          ppcVar12 = ppcVar16;
          _strcmp(ppcVar16,"round");
          if ((int)ppcVar12 == 0) {
            ppcVar12 = (char **)0x1;
          }
          else {
            _strcmp(ppcVar16,"square");
            uVar24 = 2;
            if ((int)ppcVar16 != 0) {
              uVar24 = 0;
            }
            ppcVar12 = (char **)(ulong)uVar24;
          }
        }
        return ppcVar12;
      }
    }
  }
LAB_1096ec3f8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9c0) {
    return ppcVar12;
  }
LAB_1096ec4d4:
  ___stack_chk_fail();
  if (ppcVar12 == (char **)0x0) {
    return (char **)0x0;
  }
  ppcStack_b10 = unaff_x22;
  uStack_b08 = (char **)param_3;
  fStack_b00 = SUB84(pcVar33,0);
  fStack_afc = (float)((ulong)pcVar33 >> 0x20);
  fStack_af8 = SUB84(ppcVar32,0);
  fStack_af4 = (float)((ulong)ppcVar32 >> 0x20);
  uStack_af0._0_4_ = SUB84(&pppppppuStack_920,0);
  uStack_af0._4_4_ = (float)((ulong)&pppppppuStack_920 >> 0x20);
  pcStack_ae8 = FUN_1096ec4d8;
  uStack_af0 = &pppppppuStack_920;
  pcVar33 = ppcVar12[1];
  while (pcVar33 != (char *)0x0) {
    pcVar53 = *(char **)(pcVar33 + 0xb0);
    FUN_1096ec558(*(undefined8 *)(pcVar33 + 0xa8));
    if ((pcVar33[0x40] & 0xfeU) == 2) {
      _free(*(undefined8 *)(pcVar33 + 0x48));
    }
    if ((pcVar33[0x50] & 0xfeU) == 2) {
      _free(*(undefined8 *)(pcVar33 + 0x58));
    }
    _free(pcVar33);
    pcVar33 = pcVar53;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(ppcVar12);
  return ppcVar12;
}



/* Entry: 1096ea4f8; end: 1096ec4d7;  */

/* WARNING: Possible PIC construction at 0x0001096eea8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001096eb000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001096ea7fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001096ea830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001096ea800) */
/* WARNING: Removing unreachable block (ram,0x0001096eea90) */
/* WARNING: Removing unreachable block (ram,0x0001096ea834) */
/* WARNING: Type propagation algorithm not settling */

char ** FUN_1096ea4f8(char *param_1,char **param_2,char **param_3,char *param_4)

{
  char cVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  float *pfVar6;
  char **ppcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char **ppcVar11;
  char **ppcVar12;
  undefined8 *puVar13;
  char **ppcVar14;
  ulong *puVar15;
  undefined *puVar16;
  char *pcVar17;
  char **ppcVar18;
  char **ppcVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  long *plVar24;
  undefined8 uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  float *pfVar29;
  char **unaff_x19;
  char **ppcVar30;
  char **unaff_x20;
  char *pcVar31;
  char **ppcVar32;
  ulong uVar33;
  char **unaff_x22;
  char *pcVar34;
  char *pcVar35;
  uint uVar36;
  char *pcVar37;
  char **ppcVar38;
  char **unaff_x24;
  char *pcVar39;
  char **ppcVar40;
  char **unaff_x25;
  char **unaff_x26;
  int iVar41;
  char **unaff_x27;
  char **ppcVar42;
  char **ppcVar43;
  char **ppcVar44;
  undefined8 *******pppppppuVar45;
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  float fVar51;
  double dVar52;
  undefined1 auVar53 [16];
  undefined8 uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  short sVar60;
  undefined2 uVar61;
  short sVar62;
  short sVar63;
  float fVar64;
  float fVar65;
  char *pcVar66;
  float fVar67;
  ulong unaff_d9;
  ulong uVar68;
  ulong unaff_d10;
  float fVar69;
  ulong unaff_d11;
  float fVar70;
  ulong unaff_d12;
  float fVar71;
  float fVar72;
  ulong unaff_d13;
  ulong unaff_d14;
  ulong unaff_d15;
  undefined1 auStack_1160 [8];
  char acStack_1158 [64];
  long lStack_1118;
  ulong uStack_1110;
  char *pcStack_1108;
  char **ppcStack_1100;
  char **ppcStack_10f8;
  char **ppcStack_10f0;
  char **ppcStack_10e8;
  char **ppcStack_10e0;
  char **ppcStack_10d8;
  ulong uStack_10d0;
  ulong uStack_10c8;
  char **ppcStack_10c0;
  char **ppcStack_10b8;
  undefined8 *******pppppppuStack_10b0;
  code *pcStack_10a8;
  ulong *puStack_10a0;
  ulong *puStack_1098;
  int *piStack_1090;
  undefined8 *puStack_1088;
  uint *puStack_1080;
  uint uStack_106c;
  int iStack_1068;
  uint uStack_1064;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  ulong uStack_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  long lStack_1018;
  ulong uStack_1010;
  char **ppcStack_1008;
  char **ppcStack_1000;
  char **ppcStack_ff8;
  undefined8 *******pppppppuStack_ff0;
  code *pcStack_fe8;
  char *apcStack_fe0 [64];
  char *apcStack_de0 [64];
  long lStack_be0;
  char **ppcStack_bd0;
  char **ppcStack_bc8;
  char **ppcStack_bc0;
  char **ppcStack_bb8;
  char **ppcStack_bb0;
  char **ppcStack_ba8;
  char **ppcStack_ba0;
  char **ppcStack_b98;
  char **ppcStack_b90;
  char **ppcStack_b88;
  undefined8 *******pppppppuStack_b80;
  code *pcStack_b78;
  char *apcStack_b68 [8];
  long lStack_b28;
  char **ppcStack_b20;
  char **ppcStack_b18;
  undefined8 *******pppppppuStack_b10;
  code *pcStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  char **ppcStack_ae0;
  undefined8 uStack_ad8;
  float fStack_ad0;
  float fStack_acc;
  float fStack_ac8;
  float fStack_ac4;
  undefined8 uStack_ac0;
  code *pcStack_ab8;
  float fStack_ab0;
  float fStack_aac;
  float fStack_aa8;
  float fStack_aa4;
  float fStack_aa0;
  float fStack_a9c;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  double dStack_a88;
  double dStack_a80;
  undefined8 uStack_a78;
  ulong uStack_a70;
  char *pcStack_a68;
  char **ppcStack_a60;
  char **ppcStack_a58;
  char **ppcStack_a50;
  char **ppcStack_a48;
  char **ppcStack_a40;
  char **ppcStack_a38;
  char **ppcStack_a30;
  char **ppcStack_a28;
  char **ppcStack_a20;
  char **ppcStack_a18;
  undefined8 *******pppppppuStack_a10;
  code *pcStack_a08;
  char *apcStack_a00 [3];
  long lStack_9e8;
  ulong uStack_9e0;
  char *pcStack_9d8;
  char **ppcStack_9d0;
  char **ppcStack_9c8;
  char **ppcStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 *******pppppppuStack_9a0;
  code *pcStack_998;
  long lStack_990;
  char *pcStack_988;
  ulong uStack_980;
  ulong uStack_978;
  ulong uStack_970;
  ulong uStack_968;
  ulong uStack_960;
  ulong uStack_958;
  ulong uStack_950;
  char *pcStack_948;
  char **ppcStack_940;
  char **ppcStack_938;
  char **ppcStack_930;
  char **ppcStack_928;
  char **ppcStack_920;
  char **ppcStack_918;
  char **ppcStack_910;
  char **ppcStack_908;
  char **ppcStack_900;
  char **ppcStack_8f8;
  undefined8 *******pppppppuStack_8f0;
  undefined8 uStack_8e8;
  undefined1 auStack_8e0 [8];
  char **ppcStack_8d8;
  char **ppcStack_8d0;
  char **ppcStack_8c8;
  ulong uStack_8c0;
  undefined8 uStack_8b8;
  char *apcStack_8b0 [256];
  long lStack_b0;
  
  pfVar6 = (float *)auStack_8e0;
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar11 = (char **)0x1;
  pcVar17 = (char *)0x9c60;
  _calloc();
  ppcVar30 = ppcVar11;
  if (ppcVar11 == (char **)0x0) {
    ppcVar12 = (char **)0x0;
  }
  else {
    unaff_x27 = ppcVar11 + 0x1200;
    unaff_x19 = (char **)0x1;
    ppcVar12 = (char **)0x1;
    pcVar17 = (char *)0x10;
    _calloc();
    ppcVar11[0x1384] = (char *)ppcVar12;
    if (ppcVar12 != (char **)0x0) {
      *(float *)(ppcVar11 + 8) = 1.0;
      *(float *)((long)ppcVar11 + 0x4c) = 1.0;
      pcVar17 = (char *)NEON_fmov(0x3f800000,4);
      ppcVar11[0xc] = pcVar17;
      *(float *)(ppcVar11 + 0xd) = 1.0;
      *(float *)((long)ppcVar11 + 300) = 1.0;
      *(float *)((long)ppcVar11 + 0xec) = 1.0;
      *(float *)((long)ppcVar11 + 0x11c) = 4.0;
      *(char *)((long)ppcVar11 + 0x134) = '\x01';
      *(char *)((long)ppcVar11 + 0x136) = '\x01';
      *(float *)((long)ppcVar11 + 0x9c54) = SUB84(param_1,0);
      cVar20 = *(char *)param_2;
      if (cVar20 != '\0') {
        iVar41 = 2;
        unaff_x24 = (char **)0x1;
        ppcVar12 = (char **)&UNK_10f57e81c;
        pcVar17 = (char *)param_2;
        do {
          if ((cVar20 == '<') && (iVar41 == 2)) {
            *(char *)param_2 = '\0';
            iVar41 = 1;
            pcVar17 = (char *)((long)param_2 + 1);
          }
          else {
            unaff_x22 = (char **)((long)param_2 + 1);
            if ((cVar20 == '>') && (iVar41 == 1)) {
              *(char *)param_2 = '\0';
              cVar20 = *pcVar17;
              if (cVar20 == '\0') {
                unaff_x19 = (char **)0x1;
              }
              else {
                do {
                  param_4 = (char *)0x7;
                  ppcVar43 = ppcVar12;
                  _memchr(&UNK_10f57e81c,(int)cVar20);
                  if (ppcVar43 == (char **)0x0) break;
                  pcVar17 = (char *)((long)pcVar17 + 1);
                  cVar20 = *pcVar17;
                } while (cVar20 != '\0');
                unaff_x19 = (char **)(ulong)(cVar20 != '/');
              }
              uVar22 = (uint)unaff_x19;
              unaff_x25 = (char **)((long)pcVar17 + (ulong)(uVar22 ^ 1));
              uVar28 = (ulong)*(byte *)unaff_x25;
              ppcVar43 = unaff_x25;
              if (0x3f < *(byte *)unaff_x25 || (1L << (uVar28 & 0x3f) & 0x8000000200000001U) == 0) {
                do {
                  unaff_x20 = (char **)((long)ppcVar43 + 1);
                  param_4 = (char *)0x7;
                  ppcVar44 = ppcVar12;
                  _memchr(&UNK_10f57e81c,(int)(char)uVar28);
                  if (ppcVar44 != (char **)0x0) {
                    *(char *)ppcVar43 = '\0';
                    if (uVar22 == 0) goto LAB_1096ea83c;
                    goto LAB_1096ea6b4;
                  }
                  uVar28 = (ulong)*(byte *)unaff_x20;
                  ppcVar43 = unaff_x20;
                } while (*(byte *)unaff_x20 != 0);
                if (uVar22 != 0) {
LAB_1096ea6b4:
                  unaff_x24 = (char **)(ulong)*(byte *)unaff_x20;
                  param_2 = (char **)pcVar17;
                  if (*(byte *)unaff_x20 == 0) {
                    uVar28 = 0;
                    goto LAB_1096ea7e0;
                  }
                  uVar28 = 0;
                  ppcStack_8d0 = param_3;
                  ppcStack_8c8 = unaff_x27;
                  goto LAB_1096ea6c4;
                }
LAB_1096ea83c:
                if ((*(char *)unaff_x25 == 'g') && (*(char *)((long)unaff_x25 + 1) == '\0')) {
                  if (0 < (int)*(float *)(ppcVar11 + 0x1380)) {
                    *(uint *)(ppcVar11 + 0x1380) = (int)*(float *)(ppcVar11 + 0x1380) - 1;
                  }
                }
                else {
                  ppcVar43 = unaff_x25;
                  _strcmp(unaff_x25,"path");
                  if ((int)ppcVar43 == 0) {
                    *(char *)(ppcVar11 + 0x138b) = '\0';
                  }
                  else {
                    ppcVar43 = unaff_x25;
                    _strcmp(unaff_x25,"defs");
                    if ((int)ppcVar43 == 0) {
                      *(char *)((long)ppcVar11 + 0x9c59) = '\0';
                    }
                  }
                }
              }
              iVar41 = 2;
              pcVar17 = (char *)unaff_x22;
            }
          }
          param_2 = (char **)((long)param_2 + 1);
          cVar20 = *(char *)param_2;
        } while (cVar20 != '\0');
        ppcVar12 = (char **)ppcVar11[0x1384];
        param_2 = (char **)pcVar17;
      }
      pcVar34 = ppcVar12[1];
      if (pcVar34 == (char *)0x0) {
        auVar53 = ZEXT216(0);
      }
      else {
        auVar53 = *(undefined1 (*) [16])(pcVar34 + 0x98);
        for (lVar23 = *(long *)(pcVar34 + 0xb0); lVar23 != 0; lVar23 = *(long *)(lVar23 + 0xb0)) {
          fVar69 = (float)((ulong)*(undefined8 *)(lVar23 + 0xa0) >> 0x20);
          uVar46 = *(undefined8 *)*(undefined1 (*) [12])(lVar23 + 0x98);
          sVar60 = -(ushort)(auVar53._4_4_ < (float)((ulong)uVar46 >> 0x20));
          sVar62 = -(ushort)((float)*(undefined8 *)(lVar23 + 0xa0) < auVar53._8_4_);
          sVar63 = -(ushort)(fVar69 < auVar53._12_4_);
          auVar3._12_4_ = fVar69;
          auVar3._0_12_ = *(undefined1 (*) [12])(lVar23 + 0x98);
          auVar4._4_2_ = sVar60;
          auVar4._0_4_ = (int)(short)-(ushort)(auVar53._0_4_ < (float)uVar46);
          auVar4._6_2_ = sVar60 >> 0xf;
          auVar4._8_2_ = sVar62;
          auVar4._10_2_ = sVar62 >> 0xf;
          auVar4._12_2_ = sVar63;
          auVar4._14_2_ = sVar63 >> 0xf;
          auVar53 = auVar53 ^ (auVar53 ^ auVar3) & ~auVar4;
        }
      }
      fVar69 = *(float *)(ppcVar11 + 5000);
      fVar48 = 0.0;
      fVar55 = 0.0;
      fVar51 = 0.0;
      fVar72 = auVar53._4_4_;
      if (fVar69 == 0.0) {
        fVar69 = *(float *)ppcVar12;
        fVar48 = 0.0;
        fVar55 = 0.0;
        fVar51 = 0.0;
        if (fVar69 <= 0.0) {
          *(float *)(ppcVar11 + 4999) = auVar53._0_4_;
          fVar51 = auVar53._8_4_;
          fVar69 = fVar51 - auVar53._0_4_;
          fVar48 = fVar51 - fVar72;
          fVar55 = fVar51 - fVar51;
          fVar51 = fVar51 - auVar53._12_4_;
        }
        *(float *)(ppcVar11 + 5000) = fVar69;
      }
      uVar61 = (undefined2)((uint)fVar48 >> 0x10);
      fVar65 = *(float *)((long)ppcVar11 + 0x9c44);
      if (fVar65 == 0.0) {
        fVar65 = *(float *)((long)ppcVar12 + 4);
        if (fVar65 <= 0.0) {
          *(float *)((long)ppcVar11 + 0x9c3c) = fVar72;
          fVar65 = auVar53._12_4_ - fVar72;
        }
        *(float *)((long)ppcVar11 + 0x9c44) = fVar65;
      }
      unaff_d14 = (ulong)(uint)*(float *)ppcVar12;
      if (*(float *)ppcVar12 == 0.0) {
        *(float *)ppcVar12 = fVar69;
        unaff_d14 = CONCAT26(uVar61,CONCAT24(SUB42(fVar48,0),fVar69));
      }
      fVar72 = *(float *)((long)ppcVar12 + 4);
      if (*(float *)((long)ppcVar12 + 4) == 0.0) {
        *(float *)((long)ppcVar12 + 4) = fVar65;
        fVar72 = fVar65;
      }
      unaff_d13 = (ulong)(uint)fVar72;
      fVar70 = *(float *)(ppcVar11 + 4999);
      unaff_d12 = (ulong)(uint)fVar70;
      fVar67 = *(float *)((long)ppcVar11 + 0x9c3c);
      fVar71 = (float)unaff_d14;
      fVar47 = fVar71 / fVar69;
      uStack_8b8 = CONCAT26((short)((uint)fVar51 >> 0x10),CONCAT24(SUB42(fVar51,0),fVar55));
      uStack_8c0 = CONCAT26(uVar61,CONCAT24(SUB42(fVar48,0),fVar69));
      unaff_d11 = 0;
      if (fVar69 <= 0.0) {
        fVar47 = 0.0;
      }
      unaff_d10 = (ulong)(uint)fVar47;
      fVar69 = fVar72 / fVar65;
      if (fVar65 <= 0.0) {
        fVar69 = 0.0;
      }
      unaff_d15 = (ulong)(uint)fVar69;
      ppcVar43 = param_3;
      func_0x0001096efcd0();
      pcVar17 = (char *)((long)ppcVar43 << 0x20 | 0x3f800000);
      fVar48 = (float)FUN_1096ef8f8(0,0x3f800000,ppcVar11);
      if (*(float *)(ppcVar11 + 0x138a) == 2.8026e-45) {
        if (fVar47 <= fVar69) {
          fVar47 = fVar69;
        }
        if (*(float *)(ppcVar11 + 0x1389) != 0.0) {
          fVar69 = (float)uStack_8c0 * fVar47;
          if (*(float *)(ppcVar11 + 0x1389) == 2.8026e-45) {
            unaff_d11 = (ulong)(uint)(fVar71 - fVar69);
          }
          else {
            unaff_d11 = (ulong)(uint)((fVar71 - fVar69) * 0.5);
          }
        }
        fVar69 = (float)unaff_d11 / fVar47;
        if (*(float *)((long)ppcVar11 + 0x9c4c) == 0.0) {
          fVar72 = 0.0;
        }
        else {
          fVar72 = fVar72 - fVar65 * fVar47;
          if (*(float *)((long)ppcVar11 + 0x9c4c) != 2.8026e-45) {
            fVar72 = fVar72 * 0.5;
          }
        }
        fVar55 = fVar72 / fVar47;
LAB_1096eaab4:
        fVar70 = fVar69 - fVar70;
        unaff_d10 = (ulong)(uint)fVar47;
        fVar55 = fVar55 - fVar67;
        unaff_d15 = unaff_d10;
      }
      else {
        if (*(float *)(ppcVar11 + 0x138a) == 1.4013e-45) {
          if (fVar69 <= fVar47) {
            fVar47 = fVar69;
          }
          fVar55 = 0.0;
          fVar69 = 0.0;
          if ((*(float *)(ppcVar11 + 0x1389) != 0.0) &&
             (fVar69 = fVar71 - (float)uStack_8c0 * fVar47,
             *(float *)(ppcVar11 + 0x1389) != 2.8026e-45)) {
            fVar69 = fVar69 * 0.5;
          }
          fVar69 = fVar69 / fVar47;
          if ((*(float *)((long)ppcVar11 + 0x9c4c) != 0.0) &&
             (fVar55 = fVar72 - fVar65 * fVar47, *(float *)((long)ppcVar11 + 0x9c4c) != 2.8026e-45))
          {
            fVar55 = fVar55 * 0.5;
          }
          fVar55 = fVar55 / fVar47;
          goto LAB_1096eaab4;
        }
        fVar70 = -fVar70;
        fVar55 = -fVar67;
      }
      unaff_d9 = (ulong)(uint)fVar55;
      param_1 = (char *)(ulong)(uint)fVar70;
      if (pcVar34 != (char *)0x0) {
        fVar47 = (1.0 / fVar48) * fVar47;
        unaff_d10 = (ulong)(uint)fVar47;
        fVar69 = (1.0 / fVar48) * (float)unaff_d15;
        unaff_d11 = (ulong)(uint)fVar69;
        uStack_8b8 = 0;
        uStack_8c0 = (ulong)(uint)((fVar47 + fVar69) * 0.5);
        do {
          *(float *)(pcVar34 + 0x98) = fVar47 * (fVar70 + *(float *)(pcVar34 + 0x98));
          *(float *)(pcVar34 + 0x9c) = fVar69 * (fVar55 + *(float *)(pcVar34 + 0x9c));
          *(float *)(pcVar34 + 0xa0) = fVar47 * (fVar70 + *(float *)(pcVar34 + 0xa0));
          *(float *)(pcVar34 + 0xa4) = fVar69 * (fVar55 + *(float *)(pcVar34 + 0xa4));
          for (plVar24 = *(long **)(pcVar34 + 0xa8); plVar24 != (long *)0x0;
              plVar24 = (long *)plVar24[4]) {
            *(float *)(plVar24 + 2) = fVar47 * (fVar70 + *(float *)(plVar24 + 2));
            *(float *)((long)plVar24 + 0x14) = fVar69 * (fVar55 + *(float *)((long)plVar24 + 0x14));
            *(float *)(plVar24 + 3) = fVar47 * (fVar70 + *(float *)(plVar24 + 3));
            *(float *)((long)plVar24 + 0x1c) = fVar69 * (fVar55 + *(float *)((long)plVar24 + 0x1c));
            uVar28 = (ulong)*(uint *)(plVar24 + 1);
            if (0 < (int)*(uint *)(plVar24 + 1)) {
              pfVar29 = (float *)(*plVar24 + 4);
              do {
                pfVar29[-1] = fVar47 * (fVar70 + pfVar29[-1]);
                *pfVar29 = fVar69 * (fVar55 + *pfVar29);
                pfVar29 = pfVar29 + 2;
                uVar28 = uVar28 - 1;
              } while (uVar28 != 0);
            }
          }
          if ((pcVar34[0x40] & 0xfeU) == 2) {
            FUN_1096f0d28(param_1,fVar55,SUB42(fVar47,0),unaff_d11,*(undefined8 *)(pcVar34 + 0x48));
            puVar13 = *(undefined8 **)(pcVar34 + 0x48);
            apcStack_8b0[0] = (char *)*puVar13;
            apcStack_8b0[1] = (char *)puVar13[1];
            apcStack_8b0[2] = (char *)puVar13[2];
            pcVar17 = (char *)apcStack_8b0;
            FUN_1096f07f4();
          }
          if ((pcVar34[0x50] & 0xfeU) == 2) {
            FUN_1096f0d28(param_1,fVar55,SUB42(fVar47,0),unaff_d11,*(undefined8 *)(pcVar34 + 0x58));
            puVar13 = *(undefined8 **)(pcVar34 + 0x58);
            apcStack_8b0[0] = (char *)*puVar13;
            apcStack_8b0[1] = (char *)puVar13[1];
            apcStack_8b0[2] = (char *)puVar13[2];
            pcVar17 = (char *)apcStack_8b0;
            FUN_1096f07f4();
          }
          fVar48 = (float)uStack_8c0;
          *(ulong *)(pcVar34 + 100) =
               CONCAT44((float)((ulong)*(undefined8 *)(pcVar34 + 100) >> 0x20) * fVar48,
                        (float)*(undefined8 *)(pcVar34 + 100) * fVar48);
          lVar23 = (long)pcVar34[0x8c];
          if (0 < lVar23) {
            pfVar29 = (float *)(pcVar34 + 0x6c);
            do {
              *pfVar29 = fVar48 * *pfVar29;
              lVar23 = lVar23 + -1;
              pfVar29 = pfVar29 + 1;
            } while (lVar23 != 0);
          }
          pcVar34 = *(char **)(pcVar34 + 0xb0);
        } while (pcVar34 != (char *)0x0);
        ppcVar12 = (char **)ppcVar11[0x1384];
      }
      unaff_x22 = (char **)0x0;
      ppcVar11[0x1384] = (char *)0x0;
      FUN_1096ec558(ppcVar11[0x1383]);
      ppcVar43 = (char **)ppcVar11[0x1385];
      while (ppcVar43 != (char **)0x0) {
        unaff_x19 = (char **)ppcVar43[0x1b];
        _free(ppcVar43[0x1a]);
        _free(ppcVar43);
        ppcVar43 = unaff_x19;
      }
      FUN_1096ec4d8(ppcVar11[0x1384]);
      _free(ppcVar11[0x1381]);
      unaff_x20 = (char **)0x0;
    }
    _free();
    unaff_x26 = ppcVar11;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return ppcVar12;
  }
  uVar46 = 0x1096eace4;
  ___stack_chk_fail();
  ppcVar11 = unaff_x27;
  ppcVar43 = param_3;
  goto SUB_1096eace4;
LAB_1096ea6c4:
  unaff_x19 = (char **)((long)unaff_x20 + 1);
  ppcVar11 = (char **)((long)unaff_x20 + 2);
  ppcVar43 = unaff_x20;
  uStack_8c0 = uVar28;
  while( true ) {
    ppcVar44 = ppcVar12;
    _memchr(&UNK_10f57e81c,(int)(char)unaff_x24,7);
    if (ppcVar44 == (char **)0x0) break;
    ppcVar43 = (char **)((long)ppcVar43 + 1);
    unaff_x24 = (char **)(ulong)*(byte *)ppcVar43;
    unaff_x19 = (char **)((long)unaff_x19 + 1);
    ppcVar11 = (char **)((long)ppcVar11 + 1);
    uVar28 = uStack_8c0;
    unaff_x27 = ppcStack_8c8;
    param_3 = ppcStack_8d0;
    if (*(byte *)ppcVar43 == 0) goto LAB_1096ea7e0;
  }
  if ((int)unaff_x24 != 0x2f) {
    do {
      ppcStack_8d8 = ppcVar30;
      ppcVar44 = ppcVar11;
      ppcVar42 = unaff_x19;
      ppcVar11 = ppcVar12;
      _memchr(&UNK_10f57e81c,(int)(char)unaff_x24,7);
      ppcVar30 = ppcStack_8d8;
      if (((int)unaff_x24 == 0x3d) || (ppcVar11 != (char **)0x0)) {
        *(char *)((long)ppcVar42 + -1) = '\0';
        unaff_x19 = unaff_x24;
        break;
      }
      unaff_x19 = (char **)((long)ppcVar42 + 1);
      unaff_x24 = (char **)(ulong)*(byte *)ppcVar42;
      ppcVar11 = (char **)((long)ppcVar44 + 1);
    } while (*(byte *)ppcVar42 != 0);
    do {
      unaff_x20 = (char **)((long)ppcVar42 + 1);
      cVar20 = *(char *)ppcVar42;
      uVar28 = uStack_8c0;
      unaff_x27 = ppcStack_8c8;
      param_3 = ppcStack_8d0;
      if (cVar20 == '\0') goto LAB_1096ea7e0;
      ppcVar11 = ppcVar44;
      if ((cVar20 == '\"') || (cVar20 == '\'')) goto LAB_1096ea774;
      ppcVar44 = (char **)((long)ppcVar44 + 1);
      ppcVar42 = unaff_x20;
    } while( true );
  }
  apcStack_8b0[uStack_8c0 & 0xfffffffe] = (char *)0x0;
  apcStack_8b0[(uStack_8c0 & 0xfffffffe) + 1] = (char *)0x0;
  param_4 = (char *)apcStack_8b0;
  uVar46 = 0x1096ea834;
  unaff_x26 = ppcVar30;
  goto SUB_1096eace4;
LAB_1096ea774:
  do {
    unaff_x20 = ppcVar11;
    cVar1 = *(char *)unaff_x20;
    ppcVar11 = (char **)((long)unaff_x20 + 1);
  } while (cVar1 != '\0' && cVar1 != cVar20);
  if (cVar1 != '\0') {
    *(char *)unaff_x20 = '\0';
    unaff_x20 = (char **)((long)unaff_x20 + 1);
  }
  apcStack_8b0[uStack_8c0] = (char *)ppcVar43;
  apcStack_8b0[uStack_8c0 + 1] = (char *)ppcVar44;
  uVar28 = uStack_8c0 + 2;
  unaff_x24 = (char **)(ulong)*(byte *)unaff_x20;
  if ((*(byte *)unaff_x20 == 0) || (0xfa < uStack_8c0)) goto LAB_1096ea7e0;
  goto LAB_1096ea6c4;
  while( true ) {
    if (iVar41 < 0x3f) {
      acStack_1158[iVar41] = cVar20;
      iVar41 = iVar41 + 1;
    }
    ppcVar11 = (char **)((long)ppcVar11 + 1);
    cVar20 = *(char *)ppcVar11;
    if (cVar20 == '\0') break;
LAB_1096ef550:
    puVar16 = &UNK_10f57e81c;
    _memchr(&UNK_10f57e81c,(int)cVar20,7);
    if ((cVar20 == ',') || (puVar16 != (undefined *)0x0)) break;
  }
  lVar23 = (long)iVar41;
LAB_1096ef590:
  acStack_1158[lVar23] = '\0';
  if (acStack_1158[0] == '\0') goto LAB_1096ef5ec;
  if ((int)uVar22 < 8) {
    fVar69 = *(float *)(ppcVar32 + 5000);
    fVar48 = *(float *)((long)ppcVar32 + 0x9c44);
    pcVar17 = acStack_1158;
    FUN_1096eefa4(pcVar17);
    fVar69 = (float)FUN_1096ef8f8(0,SQRT(fVar48 * fVar48 + fVar69 * fVar69) / 1.4142135,ppcVar32,
                                  pcVar17);
    *(float *)((long)ppcVar19 + (long)(int)uVar22 * 4) = ABS(fVar69);
    uVar22 = uVar22 + 1;
  }
  ppcVar18 = ppcVar11;
  if (*(char *)ppcVar11 == '\0') goto LAB_1096ef5ec;
  goto LAB_1096ef510;
LAB_1096ef5ec:
  if ((int)uVar22 < 1) {
    ppcVar12 = (char **)0x0;
    ppcVar30 = ppcVar19;
  }
  else {
    uVar28 = (ulong)uVar22;
    fVar69 = 0.0;
    do {
      ppcVar30 = (char **)((long)ppcVar19 + 4);
      fVar69 = fVar69 + *(float *)ppcVar19;
      uVar28 = uVar28 - 1;
      ppcVar19 = ppcVar30;
    } while (uVar28 != 0);
    if (fVar69 <= 1e-06) {
      uVar22 = 0;
    }
    ppcVar12 = (char **)(ulong)uVar22;
  }
  goto LAB_1096ef624;
LAB_1096ea7e0:
  apcStack_8b0[uVar28 & 0xfffffffe] = (char *)0x0;
  apcStack_8b0[(uVar28 & 0xfffffffe) + 1] = (char *)0x0;
  param_4 = (char *)apcStack_8b0;
  uVar46 = 0x1096ea800;
  unaff_x26 = ppcVar30;
  ppcVar11 = unaff_x27;
  ppcVar43 = param_3;
SUB_1096eace4:
  uStack_980 = unaff_d15;
  uStack_978 = unaff_d14;
  uStack_970 = unaff_d13;
  uStack_968 = unaff_d12;
  uStack_960 = unaff_d11;
  uStack_958 = unaff_d10;
  uStack_950 = unaff_d9;
  pcStack_948 = param_1;
  ppcStack_940 = ppcVar43;
  ppcStack_938 = ppcVar11;
  ppcStack_930 = unaff_x26;
  ppcStack_928 = unaff_x25;
  ppcStack_920 = unaff_x24;
  ppcStack_918 = param_2;
  ppcStack_910 = unaff_x22;
  ppcStack_908 = ppcVar12;
  ppcStack_900 = unaff_x20;
  ppcStack_8f8 = unaff_x19;
  pppppppuStack_8f0 = (undefined8 *******)&stack0xfffffffffffffff0;
  uStack_8e8 = uVar46;
  lStack_990 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar11 = (char **)pcVar17;
  if (*(char *)((long)ppcVar30 + 0x9c59) != '\0') {
    _strcmp(pcVar17,"linearGradient");
    if ((int)ppcVar11 == 0) {
LAB_1096eaf1c:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_990) {
        cVar20 = '\x02';
LAB_1096eaf68:
        ppcVar12 = (char **)0x1;
        _calloc(1,0xe0);
        ppcVar11 = ppcVar12;
        if (ppcVar12 != (char **)0x0) {
          *(char *)((long)ppcVar12 + 0xad) = '\x01';
          *(char *)(ppcVar12 + 0x10) = cVar20;
          if (cVar20 == '\x02') {
            uVar25 = 0x700000000;
            ((float *)((long)ppcVar12 + 0x9c))[0] = 0.0;
            ((float *)((long)ppcVar12 + 0x9c))[1] = 9.80909e-45;
            uVar46 = 0x700000000;
            uVar54 = 0x742c80000;
          }
          else {
            uVar25 = 0x742480000;
            uVar54 = 0x742480000;
            uVar46 = 0x742480000;
          }
          ppcVar43 = ppcVar12 + 0x16;
          ppcVar12[0x17] = (char *)0x3f80000000000000;
          *ppcVar43 = (char *)0x3f800000;
          *(undefined8 *)((long)ppcVar12 + 0x84) = uVar25;
          *(undefined8 *)((long)ppcVar12 + 0x94) = uVar54;
          *(undefined8 *)((long)ppcVar12 + 0x8c) = uVar46;
          ppcVar12[0x18] = (char *)0x0;
          pcVar17 = *(char **)param_4;
          if (pcVar17 != (char *)0x0) {
            ppcVar44 = (char **)((long)param_4 + 8);
            do {
              if (((*pcVar17 == 'i') && (pcVar17[1] == 'd')) && (pcVar17[2] == '\0')) {
                ppcVar11 = ppcVar12;
                _strncpy(ppcVar12,*ppcVar44,0x3f);
                *(char *)((long)ppcVar12 + 0x3f) = '\0';
              }
              else {
                ppcVar11 = ppcVar30;
                FUN_1096ee638(ppcVar30,pcVar17,*ppcVar44);
                if ((int)ppcVar11 == 0) {
                  ppcVar11 = (char **)ppcVar44[-1];
                  ppcVar42 = ppcVar11;
                  _strcmp(ppcVar11,"gradientUnits");
                  if ((int)ppcVar42 == 0) {
                    ppcVar11 = (char **)*ppcVar44;
                    _strcmp(ppcVar11,"objectBoundingBox");
                    if ((int)ppcVar11 == 0) {
                      *(char *)((long)ppcVar12 + 0xad) = '\x01';
                    }
                    else {
                      *(char *)((long)ppcVar12 + 0xad) = '\0';
                    }
                  }
                  else {
                    ppcVar42 = ppcVar11;
                    _strcmp(ppcVar11,"gradientTransform");
                    if ((int)ppcVar42 == 0) {
                      ppcVar11 = ppcVar43;
                      FUN_1096eebec(ppcVar43,*ppcVar44);
                    }
                    else {
                      bVar2 = *(byte *)ppcVar11;
                      if (bVar2 < 0x72) {
                        if (bVar2 == 99) {
                          if (*(char *)((long)ppcVar11 + 1) == 'y') {
LAB_1096edca4:
                            if (*(char *)((long)ppcVar11 + 2) == '\0') {
                              ppcVar11 = (char **)*ppcVar44;
                              FUN_1096eefa4();
                              *(char ***)((long)ppcVar12 + 0x8c) = ppcVar11;
                              goto LAB_1096edb5c;
                            }
                          }
                          else if (*(char *)((long)ppcVar11 + 1) == 'x') {
LAB_1096edc8c:
                            if (*(char *)((long)ppcVar11 + 2) == '\0') {
                              ppcVar11 = (char **)*ppcVar44;
                              FUN_1096eefa4();
                              *(char ***)((long)ppcVar12 + 0x84) = ppcVar11;
                              goto LAB_1096edb5c;
                            }
                          }
                        }
                        else if (bVar2 == 0x66) {
                          if (*(char *)((long)ppcVar11 + 1) == 'y') {
                            if (*(char *)((long)ppcVar11 + 2) == '\0') {
                              ppcVar11 = (char **)*ppcVar44;
                              FUN_1096eefa4();
                              *(char ***)((long)ppcVar12 + 0xa4) = ppcVar11;
                              goto LAB_1096edb5c;
                            }
                          }
                          else if (*(char *)((long)ppcVar11 + 1) == 'x') goto LAB_1096edc30;
                        }
                      }
                      else if (bVar2 == 0x72) {
                        cVar20 = *(char *)((long)ppcVar11 + 1);
joined_r0x0001096edc58:
                        if (cVar20 == '\0') {
                          ppcVar11 = (char **)*ppcVar44;
                          FUN_1096eefa4();
                          *(char ***)((long)ppcVar12 + 0x94) = ppcVar11;
                          goto LAB_1096edb5c;
                        }
                      }
                      else if (bVar2 == 0x78) {
                        if (*(char *)((long)ppcVar11 + 1) == '2') {
                          cVar20 = *(char *)((long)ppcVar11 + 2);
                          goto joined_r0x0001096edc58;
                        }
                        if (*(char *)((long)ppcVar11 + 1) == '1') goto LAB_1096edc8c;
                      }
                      else if (bVar2 == 0x79) {
                        if (*(char *)((long)ppcVar11 + 1) == '2') {
LAB_1096edc30:
                          if (*(char *)((long)ppcVar11 + 2) == '\0') {
                            ppcVar11 = (char **)*ppcVar44;
                            FUN_1096eefa4();
                            *(char ***)((long)ppcVar12 + 0x9c) = ppcVar11;
                            goto LAB_1096edb5c;
                          }
                        }
                        else if (*(char *)((long)ppcVar11 + 1) == '1') goto LAB_1096edca4;
                      }
                      ppcVar42 = ppcVar11;
                      _strcmp(ppcVar11,&UNK_10f57e823);
                      if ((int)ppcVar42 == 0) {
                        ppcVar42 = (char **)*ppcVar44;
                        ppcVar11 = ppcVar42;
                        _strcmp(ppcVar42,&UNK_10f57e830);
                        if ((int)ppcVar11 == 0) {
                          *(char *)((long)ppcVar12 + 0xac) = '\0';
                        }
                        else {
                          ppcVar11 = ppcVar42;
                          _strcmp(ppcVar42,&UNK_10f4917f3);
                          if ((int)ppcVar11 == 0) {
                            cVar20 = '\x01';
                          }
                          else {
                            _strcmp(ppcVar42,&DAT_10f57e834);
                            ppcVar11 = ppcVar42;
                            if ((int)ppcVar42 != 0) goto LAB_1096edb5c;
                            cVar20 = '\x02';
                          }
                          *(char *)((long)ppcVar12 + 0xac) = cVar20;
                        }
                      }
                      else {
                        _strcmp(ppcVar11,"xlink:href");
                        if ((int)ppcVar11 == 0) {
                          ppcVar11 = ppcVar12 + 8;
                          _strncpy(ppcVar11,*ppcVar44 + 1,0x3e);
                          *(char *)((long)ppcVar12 + 0x7e) = '\0';
                        }
                      }
                    }
                  }
                }
              }
LAB_1096edb5c:
              pcVar17 = ppcVar44[1];
              ppcVar44 = ppcVar44 + 2;
            } while (pcVar17 != (char *)0x0);
          }
          ppcVar12[0x1b] = ppcVar30[0x1385];
          ppcVar30[0x1385] = (char *)ppcVar12;
        }
        return ppcVar11;
      }
      goto LAB_1096ec4d4;
    }
    ppcVar11 = (char **)pcVar17;
    _strcmp(pcVar17,"radialGradient");
    if ((int)ppcVar11 == 0) {
LAB_1096eaf44:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_990) {
        cVar20 = '\x03';
        goto LAB_1096eaf68;
      }
      goto LAB_1096ec4d4;
    }
    ppcVar11 = (char **)pcVar17;
    _strcmp(pcVar17,&DAT_10f684680);
    if ((int)ppcVar11 == 0) {
LAB_1096ead78:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_990) {
        fVar69 = *(float *)(ppcVar30 + 0x1380);
        *(float *)(ppcVar30 + (long)(int)fVar69 * 0x27 + 0x25) = 0.0;
        pfVar6 = (float *)((long)ppcVar30 + ((long)(int)fVar69 * 0x4e + 0x4b) * 4);
        pfVar6[0] = 1.0;
        pfVar6[1] = 0.0;
        pcVar17 = *(char **)param_4;
        ppcVar11 = ppcVar30;
        while (pcVar17 != (char *)0x0) {
          ppcVar11 = ppcVar30;
          FUN_1096ee638(ppcVar30,pcVar17,*(char **)((long)param_4 + 8));
          pcVar17 = *(char **)((long)param_4 + 0x10);
          param_4 = (char *)((long)param_4 + 0x10);
        }
        pcVar17 = ppcVar30[0x1385];
        if (pcVar17 != (char *)0x0) {
          iVar41 = *(int *)(pcVar17 + 200);
          *(int *)(pcVar17 + 200) = (int)((long)iVar41 + 1);
          ppcVar11 = *(char ***)(pcVar17 + 0xd0);
          _realloc(ppcVar11,((long)iVar41 + 1) * 8);
          *(char ***)(pcVar17 + 0xd0) = ppcVar11;
          if (ppcVar11 != (char **)0x0) {
            uVar22 = *(uint *)(pcVar17 + 200);
            uVar28 = (ulong)uVar22;
            uVar36 = uVar22 - 1;
            fVar48 = *(float *)(ppcVar30 + (long)(int)fVar69 * 0x27 + 0x26);
            uVar21 = uVar36;
            if (1 < (int)uVar22) {
              uVar26 = 0;
              lVar23 = 4;
              do {
                if (fVar48 < *(float *)((long)ppcVar11 + lVar23)) {
                  uVar21 = (uint)uVar26;
                  if ((int)uVar21 < (int)uVar36) {
                    do {
                      lVar23 = *(long *)(pcVar17 + 0xd0) + uVar28 * 8;
                      *(undefined8 *)(lVar23 + -8) = *(undefined8 *)(lVar23 + -0x10);
                      lVar23 = uVar28 - 2;
                      uVar28 = uVar28 - 1;
                    } while ((long)uVar26 < lVar23);
                    ppcVar11 = *(char ***)(pcVar17 + 0xd0);
                    fVar48 = *(float *)(ppcVar30 + (long)(int)fVar69 * 0x27 + 0x26);
                  }
                  break;
                }
                uVar26 = uVar26 + 1;
                lVar23 = lVar23 + 8;
              } while (uVar36 != uVar26);
            }
            *(uint *)(ppcVar11 + (int)uVar21) =
                 (uint)*(float *)(ppcVar30 + (long)(int)fVar69 * 0x27 + 0x25) |
                 (int)(*(float *)((long)ppcVar30 + ((long)(int)fVar69 * 0x4e + 0x4b) * 4) * 255.0)
                 << 0x18;
            *(float *)((long)(ppcVar11 + (int)uVar21) + 4) = fVar48;
          }
        }
        return ppcVar11;
      }
      goto LAB_1096ec4d4;
    }
    goto LAB_1096ec3f8;
  }
  if ((*pcVar17 == 'g') && (*(char *)((long)pcVar17 + 1) == '\0')) {
    fVar69 = *(float *)(ppcVar30 + 0x1380);
    ppcVar11 = ppcVar30;
    if ((int)fVar69 < 0x7f) {
      *(uint *)(ppcVar30 + 0x1380) = (int)fVar69 + 1;
      ppcVar11 = ppcVar30 + (long)(int)fVar69 * 0x27 + 0x27;
      _memcpy(ppcVar11,ppcVar30 + (long)(int)fVar69 * 0x27,0x138);
    }
    ppcVar43 = ppcStack_8f8;
    ppcVar44 = ppcStack_900;
    ppcVar12 = ppcStack_908;
    ppcVar42 = ppcStack_910;
    pppppppuVar45 = pppppppuStack_8f0;
    uVar46 = uStack_8e8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_990) {
SUB_1096ededc:
      *(char ***)((long)pfVar6 + -0x30) = ppcVar42;
      *(char ***)((long)pfVar6 + -0x28) = ppcVar12;
      *(char ***)((long)pfVar6 + -0x20) = ppcVar44;
      *(char ***)((long)pfVar6 + -0x18) = ppcVar43;
      *(undefined8 ********)((long)pfVar6 + -0x10) = pppppppuVar45;
      *(undefined8 *)((long)pfVar6 + -8) = uVar46;
      pcVar17 = *(char **)param_4;
      ppcVar11 = ppcVar30;
      while (pcVar17 != (char *)0x0) {
        pcVar34 = pcVar17;
        _strcmp(pcVar17,"style");
        if ((int)pcVar34 == 0) {
          ppcVar11 = ppcVar30;
          FUN_1096ef014(ppcVar30,*(char **)((long)param_4 + 8));
        }
        else {
          ppcVar11 = ppcVar30;
          FUN_1096ee638(ppcVar30,pcVar17);
        }
        pcVar17 = *(char **)((long)param_4 + 0x10);
        param_4 = (char *)((long)param_4 + 0x10);
      }
      return ppcVar11;
    }
    goto LAB_1096ec4d4;
  }
  ppcVar12 = (char **)param_4;
  _strcmp(pcVar17,"path");
  if ((int)ppcVar11 == 0) {
    if (*(char *)(ppcVar30 + 0x138b) != '\0') goto LAB_1096ec3f8;
    fVar69 = *(float *)(ppcVar30 + 0x1380);
    if ((int)fVar69 < 0x7f) {
      *(uint *)(ppcVar30 + 0x1380) = (int)fVar69 + 1;
      _memcpy(ppcVar30 + (long)(int)fVar69 * 0x27 + 0x27,ppcVar30 + (long)(int)fVar69 * 0x27,0x138);
    }
    ppcVar12 = (char **)((long)param_4 + 8);
    pcStack_9d8 = *(char **)param_4;
    if (pcStack_9d8 != (char *)0x0) {
      pcVar17 = (char *)0x0;
      unaff_x22 = &pcStack_9d8;
      do {
        if ((*pcStack_9d8 != 'd') || (pcStack_9d8[1] != '\0')) {
          ppcStack_9d0 = (char **)*ppcVar12;
          ppcStack_9c8 = (char **)0x0;
          ppcStack_9c0 = (char **)0x0;
          param_4 = (char *)&pcStack_9d8;
          pfVar6 = &fStack_ab0;
          ppcVar43 = ppcVar30;
          ppcVar44 = (char **)pcVar17;
          ppcVar42 = unaff_x22;
          pppppppuVar45 = &pppppppuStack_8f0;
          uVar46 = 0x1096eb004;
          goto SUB_1096ededc;
        }
        pcVar17 = *ppcVar12;
        pcStack_9d8 = ppcVar12[1];
        ppcVar12 = ppcVar12 + 2;
      } while (pcStack_9d8 != (char *)0x0);
      if (((char **)pcVar17 != (char **)0x0) &&
         (*(float *)(ppcVar30 + 0x1382) = 0.0, *pcVar17 != '\0')) {
        unaff_x22 = (char **)0x0;
        iVar41 = 0;
        ppcVar11 = (char **)0x0;
        uStack_a98 = CONCAT44(uStack_a98._4_4_,0x358637bd);
        fVar69 = 0.0;
        param_4 = &UNK_10f57e85a;
        ppcVar12 = (char **)&UNK_10f57e85a;
        fVar48 = 0.0;
        fVar55 = 0.0;
        fVar51 = 0.0;
        do {
          ppcVar43 = (char **)pcVar17;
          FUN_1096efdac(pcVar17,&ppcStack_a18);
          bVar2 = (byte)ppcStack_a18;
          if ((byte)ppcStack_a18 == 0) break;
          ppcVar42 = (char **)(ulong)(uint)(int)(char)(byte)ppcStack_a18;
          ppcVar44 = (char **)param_4;
          _memchr(&UNK_10f57e85a,ppcVar42,0x10);
          if (ppcVar44 == (char **)0x0) {
            unaff_x22 = ppcVar42;
            FUN_1096efe80();
            ppcVar11 = ppcVar42;
            if ((bVar2 & 0xdf) == 0x5a) {
              if (0 < (int)*(float *)(ppcVar30 + 0x1382)) {
                fVar51 = *(float *)ppcVar30[0x1381];
                fVar69 = *(float *)((long)ppcVar30[0x1381] + 4);
                FUN_1096eff6c(ppcVar30,1);
                fVar55 = fVar69;
                fVar48 = fVar51;
              }
              *(float *)(ppcVar30 + 0x1382) = 0.0;
              FUN_1096f04ac(fVar51,fVar55,ppcVar30);
              iVar41 = 0;
            }
            else if ((bVar2 & 0xdf) == 0x4d) {
              if (0 < (int)*(float *)(ppcVar30 + 0x1382)) {
                FUN_1096eff6c(ppcVar30,0);
              }
              iVar41 = 0;
              *(float *)(ppcVar30 + 0x1382) = 0.0;
            }
          }
          else {
            if (iVar41 < 10) {
              dVar52 = (double)FUN_1096ef7b0(&ppcStack_a18);
              *(float *)((long)&uStack_9b8 + (long)iVar41 * 4) = (float)dVar52;
              iVar41 = iVar41 + 1;
            }
            if ((int)unaff_x22 <= iVar41) {
              uVar36 = (uint)ppcVar11;
              uVar22 = uVar36 & 0xff;
              fVar72 = uStack_9b0._4_4_;
              fVar65 = (float)uStack_9a8;
              if (uVar22 < 0x61) {
                if (uVar22 < 0x4d) {
                  if (uVar22 < 0x48) {
                    if (uVar22 != 0x41) {
                      fVar72 = uStack_9b8._4_4_;
                      fVar47 = (float)uStack_9b0;
                      fVar65 = uStack_9b0._4_4_;
                      fVar70 = (float)uStack_9a8;
                      fVar67 = uStack_9a8._4_4_;
                      fVar71 = (float)uStack_9b8;
                      if (uVar22 != 0x43) goto LAB_1096eb950;
LAB_1096eb8c8:
                      FUN_1096f04ac(fVar71,fVar72,ppcVar30);
                      FUN_1096f04ac(fVar47,fVar65,ppcVar30);
                      FUN_1096f04ac(fVar70,fVar67,ppcVar30);
                      goto LAB_1096eb8f0;
                    }
LAB_1096eb99c:
                    fVar48 = fVar51 + uStack_9a8._4_4_;
                    fVar69 = fVar55 + pppppppuStack_9a0._0_4_;
                    if ((uVar36 & 0xff) != 0x61) {
                      fVar48 = uStack_9a8._4_4_;
                      fVar69 = pppppppuStack_9a0._0_4_;
                    }
                    fVar70 = fVar51 - fVar48;
                    fVar47 = fVar55 - fVar69;
                    fStack_a9c = fVar48;
                    if ((((float)uStack_a98 <= SQRT(fVar47 * fVar47 + fVar70 * fVar70)) &&
                        (fVar67 = ABS((float)uStack_9b8), (float)uStack_a98 <= fVar67)) &&
                       (fVar71 = ABS(uStack_9b8._4_4_), (float)uStack_a98 <= fVar71)) {
                      fVar56 = 3.1415927;
                      uVar50 = 0;
                      uVar58 = 0;
                      uVar59 = 0;
                      ppcStack_a38 = (char **)0x0;
                      ppcStack_a28 = (char **)0x0;
                      ppcStack_a30 = (char **)(ulong)(uint)fVar47;
                      ppcStack_a48 = (char **)0x0;
                      ppcStack_a50 = uStack_9b8;
                      fStack_aa0 = fVar69;
                      ppcStack_a40 = (char **)(ulong)(uint)fVar70;
                      ppcVar44 = (char **)___sincosf_stret();
                      fVar48 = -SUB84(ppcVar44,0);
                      pcStack_a68 = (char *)0x0;
                      uStack_a70 = (ulong)(uint)fVar48;
                      ppcStack_a58 = (char **)CONCAT44(uVar59,uVar58);
                      ppcStack_a60 = (char **)CONCAT44(uVar50,fVar56);
                      fVar69 = (float)((ulong)ppcStack_a50 >> 0x20);
                      fVar49 = SUB84(ppcVar44,0) * SUB84(ppcStack_a30,0) * 0.5 +
                               fVar56 * SUB84(ppcStack_a40,0) * 0.5;
                      fVar48 = fVar56 * SUB84(ppcStack_a30,0) * 0.5 +
                               fVar48 * SUB84(ppcStack_a40,0) * 0.5;
                      fVar56 = fVar49 * fVar49;
                      fVar57 = fVar48 * fVar48;
                      fVar69 = fVar56 / (SUB84(ppcStack_a50,0) * SUB84(ppcStack_a50,0)) +
                               fVar57 / (fVar69 * fVar69);
                      fVar47 = SQRT(fVar69);
                      fVar70 = fVar67 * fVar47;
                      fVar47 = fVar71 * fVar47;
                      if (fVar69 <= 1.0) {
                        fVar70 = fVar67;
                        fVar47 = fVar71;
                      }
                      ppcStack_a40 = (char **)CONCAT44(ppcStack_a40._4_4_,fVar70);
                      fVar71 = fVar70 * fVar70;
                      ppcStack_a30 = (char **)CONCAT44(ppcStack_a30._4_4_,fVar47);
                      fVar64 = fVar47 * fVar47;
                      fVar67 = fVar64 * fVar56 + fVar71 * fVar57;
                      fVar69 = 0.0;
                      if (0.0 < fVar67) {
                        fVar71 = (-(fVar71 * fVar57) + fVar64 * fVar71) - fVar56 * fVar64;
                        fVar69 = 0.0;
                        if (0.0 <= fVar71) {
                          fVar69 = fVar71;
                        }
                        fVar69 = SQRT(fVar69 / fVar67);
                      }
                      dStack_a80 = (double)ABS(fVar65);
                      dStack_a88 = 1e-06;
                      fVar65 = -fVar69;
                      if (ABS(fVar72) <= 1e-06 == 1e-06 < dStack_a80) {
                        fVar65 = fVar69;
                      }
                      fVar67 = (fVar70 * fVar65 * fVar48) / fVar47;
                      fStack_aa4 = (-(fVar47 * fVar65) * fVar49) / fVar70;
                      fVar65 = (fVar49 - fVar67) / fVar70;
                      fVar71 = (fVar48 - fStack_aa4) / fVar47;
                      uStack_a98 = CONCAT44(fVar67,(float)uStack_a98);
                      fVar72 = -fVar48 - fStack_aa4;
                      ppcStack_a50 = ppcVar44;
                      fVar48 = (float)_acosf();
                      fVar69 = -fVar48;
                      if (fVar65 * 0.0 <= fVar71) {
                        fVar69 = fVar48;
                      }
                      uStack_a78 = CONCAT44(fVar69,(undefined4)uStack_a78);
                      fVar57 = (float)_acosf();
                      fVar48 = fStack_a9c;
                      fVar69 = fStack_aa0;
                      fVar56 = -fVar57;
                      if (fVar71 * ((-fVar49 - fVar67) / fVar70) <= fVar65 * (fVar72 / fVar47)) {
                        fVar56 = fVar57;
                      }
                      if ((dStack_a88 < dStack_a80) || (fVar56 <= 0.0)) {
                        bVar8 = false;
                        bVar9 = true;
                        bVar10 = false;
                        if (fVar56 < 0.0) {
                          bVar8 = false;
                          bVar9 = false;
                          bVar10 = true;
                          if (!NAN(dStack_a80) && !NAN(dStack_a88)) {
                            bVar8 = dStack_a80 < dStack_a88;
                            bVar9 = dStack_a80 == dStack_a88;
                            bVar10 = false;
                          }
                        }
                        fVar72 = fVar56 + 6.2831855;
                        if (bVar9 || bVar8 != bVar10) {
                          fVar72 = fVar56;
                        }
                      }
                      else {
                        fVar72 = fVar56 + -6.2831855;
                      }
                      fVar47 = 1.5707964;
                      fVar65 = ABS(fVar72) / 1.5707964 + 1.0;
                      iVar41 = (int)fVar65;
                      dStack_a80 = (double)CONCAT44(dStack_a80._4_4_,(float)(int)fVar65);
                      fVar65 = (float)___sincosf_stret();
                      fVar47 = ABS(((1.0 - fVar47) * 1.3333334) / fVar65);
                      fVar65 = -fVar47;
                      if (0.0 <= fVar72) {
                        fVar65 = fVar47;
                      }
                      dStack_a88 = (double)CONCAT44(dStack_a88._4_4_,fVar65);
                      if (-1 < iVar41) {
                        uVar22 = 0;
                        fVar65 = uStack_a98._4_4_ * SUB84(ppcStack_a60,0);
                        uStack_a98 = CONCAT44((fVar55 + fVar69) * 0.5 +
                                              uStack_a98._4_4_ * SUB84(ppcStack_a50,0) +
                                              fStack_aa4 * SUB84(ppcStack_a60,0),(float)uStack_a98);
                        uStack_a90 = CONCAT44(fVar72,(fVar51 + fVar48) * 0.5 + fVar65 +
                                                     fStack_aa4 * (float)uStack_a70);
                        fVar55 = 0.0;
                        fVar51 = 0.0;
                        fVar65 = 0.0;
                        fVar47 = 0.0;
                        do {
                          fVar69 = uStack_a78._4_4_;
                          fVar48 = (float)___sincosf_stret(uStack_a78._4_4_ +
                                                           ((float)uVar22 / dStack_a80._0_4_) *
                                                           fVar72,uStack_a78._4_4_);
                          fVar72 = SUB84(ppcStack_a60,0);
                          fVar67 = (float)uStack_a90 +
                                   ppcStack_a30._0_4_ * fVar48 * (float)uStack_a70 +
                                   fVar72 * ppcStack_a40._0_4_ * fVar69;
                          fVar70 = uStack_a98._4_4_ +
                                   fVar72 * ppcStack_a30._0_4_ * fVar48 +
                                   SUB84(ppcStack_a50,0) * ppcStack_a40._0_4_ * fVar69;
                          fVar48 = dStack_a88._0_4_ * -(fVar48 * ppcStack_a40._0_4_);
                          fVar69 = dStack_a88._0_4_ * ppcStack_a30._0_4_ * fVar69;
                          fVar71 = fVar69 * (float)uStack_a70 + fVar72 * fVar48;
                          fVar48 = fVar72 * fVar69 + SUB84(ppcStack_a50,0) * fVar48;
                          if (uVar22 != 0) {
                            FUN_1096f04ac(fVar51 + fVar47,fVar55 + fVar65,ppcVar30);
                            FUN_1096f04ac(fVar67 - fVar71,fVar70 - fVar48,ppcVar30);
                            FUN_1096f04ac(fVar67,fVar70,ppcVar30);
                          }
                          uVar22 = uVar22 + 1;
                          fVar69 = fStack_aa0;
                          fVar72 = uStack_a90._4_4_;
                          fVar55 = fVar48;
                          fVar51 = fVar71;
                          fVar65 = fVar70;
                          fVar48 = fStack_a9c;
                          fVar47 = fVar67;
                        } while (iVar41 + 1U != uVar22);
                      }
                      goto LAB_1096ebe64;
                    }
                  }
                  else {
                    if (uVar22 == 0x48) {
LAB_1096ebc28:
                      fVar48 = fVar51 + (float)uStack_9b8;
                      if ((uVar36 & 0xff) != 0x68) {
                        fVar48 = (float)uStack_9b8;
                      }
                      FUN_1096f0410(fVar48,fVar55,ppcVar30);
                      iVar41 = 0;
                      fVar69 = fVar55;
                      fVar51 = fVar48;
                      goto LAB_1096ebe68;
                    }
                    if (uVar22 != 0x4c) goto LAB_1096eb950;
LAB_1096eb91c:
                    fVar69 = fVar55 + uStack_9b8._4_4_;
                    fVar48 = fVar51 + (float)uStack_9b8;
                    if ((uVar36 & 0xff) != 0x6c) {
                      fVar69 = uStack_9b8._4_4_;
                      fVar48 = (float)uStack_9b8;
                    }
                  }
                  FUN_1096f0410(fVar48,fVar69,ppcVar30);
LAB_1096ebe64:
                  iVar41 = 0;
                  fVar55 = fVar69;
                  fVar51 = fVar48;
                }
                else {
                  if (uVar22 < 0x53) {
                    if (uVar22 == 0x4d) {
LAB_1096ebd14:
                      fVar69 = fVar55 + uStack_9b8._4_4_;
                      fVar48 = fVar51 + (float)uStack_9b8;
                      if ((uVar36 & 0xff) != 0x6d) {
                        fVar69 = uStack_9b8._4_4_;
                        fVar48 = (float)uStack_9b8;
                      }
                      if ((int)*(float *)(ppcVar30 + 0x1382) < 1) {
                        FUN_1096f04ac(fVar48,fVar69,ppcVar30);
                      }
                      else {
                        pcVar17 = ppcVar30[0x1381];
                        iVar41 = (int)*(float *)(ppcVar30 + 0x1382) * 2;
                        *(float *)(pcVar17 + (ulong)(iVar41 - 2) * 4) = fVar48;
                        *(float *)(pcVar17 + (long)(iVar41 + -1) * 4) = fVar69;
                      }
                      uVar22 = 0x6c;
                      if ((uVar36 & 0xff) != 0x6d) {
                        uVar22 = 0x4c;
                      }
                      ppcVar11 = (char **)(ulong)uVar22;
                      unaff_x22 = ppcVar11;
                      FUN_1096efe80();
                      goto LAB_1096ebe64;
                    }
                    if (uVar22 != 0x51) goto LAB_1096eb950;
LAB_1096eb970:
                    fVar72 = (float)uStack_9b0;
                    fVar69 = uStack_9b8._4_4_;
                    fVar65 = uStack_9b0._4_4_;
                    fVar48 = (float)uStack_9b8;
                    if ((uVar36 & 0xff) == 0x71) {
                      fVar72 = fVar51 + (float)uStack_9b0;
                      fVar69 = fVar55 + uStack_9b8._4_4_;
                      fVar65 = fVar55 + uStack_9b0._4_4_;
                      fVar48 = fVar51 + (float)uStack_9b8;
                    }
                    FUN_1096f04ac(fVar51 + (fVar48 - fVar51) * 0.6666667,
                                  fVar55 + (fVar69 - fVar55) * 0.6666667,ppcVar30);
                    FUN_1096f04ac(fVar72 + (fVar48 - fVar72) * 0.6666667,
                                  fVar65 + (fVar69 - fVar65) * 0.6666667,ppcVar30);
                    FUN_1096f04ac(fVar72,fVar65,ppcVar30);
                  }
                  else {
                    if (uVar22 == 0x53) {
LAB_1096ebce8:
                      fVar72 = (float)uStack_9b8;
                      fVar65 = uStack_9b8._4_4_;
                      fVar47 = (float)uStack_9b0;
                      fVar70 = uStack_9b0._4_4_;
                      if ((uVar36 & 0xff) == 0x73) {
                        fVar72 = fVar51 + (float)uStack_9b8;
                        fVar65 = fVar55 + uStack_9b8._4_4_;
                        fVar47 = fVar51 + (float)uStack_9b0;
                        fVar70 = fVar55 + uStack_9b0._4_4_;
                      }
                      FUN_1096f04ac(fVar51 * 2.0 - fVar48,fVar55 * 2.0 - fVar69,ppcVar30);
                      FUN_1096f04ac(fVar72,fVar65,ppcVar30);
                      FUN_1096f04ac(fVar47,fVar70,ppcVar30);
                      iVar41 = 0;
                      fVar69 = fVar65;
                      fVar55 = fVar70;
                      fVar48 = fVar72;
                      fVar51 = fVar47;
                      goto LAB_1096ebe68;
                    }
                    if (uVar22 != 0x54) {
                      if (uVar22 == 0x56) {
LAB_1096eb7dc:
                        fVar69 = fVar55 + (float)uStack_9b8;
                        if ((uVar36 & 0xff) != 0x76) {
                          fVar69 = (float)uStack_9b8;
                        }
                        FUN_1096f0410(fVar51,fVar69,ppcVar30);
                        fVar48 = fVar51;
                        goto LAB_1096ebe64;
                      }
                      goto LAB_1096eb950;
                    }
LAB_1096ebc5c:
                    fVar72 = fVar51 + (float)uStack_9b8;
                    fVar65 = fVar55 + uStack_9b8._4_4_;
                    if ((uVar36 & 0xff) != 0x74) {
                      fVar72 = (float)uStack_9b8;
                      fVar65 = uStack_9b8._4_4_;
                    }
                    fVar48 = fVar51 * 2.0 - fVar48;
                    fVar69 = fVar55 * 2.0 - fVar69;
                    FUN_1096f04ac(fVar51 + (fVar48 - fVar51) * 0.6666667,
                                  fVar55 + (fVar69 - fVar55) * 0.6666667,ppcVar30);
                    FUN_1096f04ac(fVar72 + (fVar48 - fVar72) * 0.6666667,
                                  fVar65 + (fVar69 - fVar65) * 0.6666667,ppcVar30);
                    FUN_1096f04ac(fVar72,fVar65,ppcVar30);
                  }
                  iVar41 = 0;
                  fVar55 = fVar65;
                  fVar51 = fVar72;
                }
              }
              else {
                if (uVar22 < 0x6d) {
                  if (uVar22 < 0x68) {
                    if (uVar22 == 0x61) goto LAB_1096eb99c;
                    if (uVar22 == 99) {
                      fVar72 = fVar55 + uStack_9b8._4_4_;
                      fVar47 = fVar51 + (float)uStack_9b0;
                      fVar65 = fVar55 + uStack_9b0._4_4_;
                      fVar70 = fVar51 + (float)uStack_9a8;
                      fVar67 = fVar55 + uStack_9a8._4_4_;
                      fVar71 = fVar51 + (float)uStack_9b8;
                      goto LAB_1096eb8c8;
                    }
                  }
                  else {
                    if (uVar22 == 0x68) goto LAB_1096ebc28;
                    if (uVar22 == 0x6c) goto LAB_1096eb91c;
                  }
                }
                else if (uVar22 < 0x73) {
                  if (uVar22 == 0x6d) goto LAB_1096ebd14;
                  if (uVar22 == 0x71) goto LAB_1096eb970;
                }
                else {
                  if (uVar22 == 0x73) goto LAB_1096ebce8;
                  if (uVar22 == 0x74) goto LAB_1096ebc5c;
                  if (uVar22 == 0x76) goto LAB_1096eb7dc;
                }
LAB_1096eb950:
                if (iVar41 < 2) {
                  iVar41 = 0;
                }
                else {
                  fVar47 = *(float *)((long)&uStack_9b8 + (ulong)(iVar41 - 2) * 4);
                  fVar67 = *(float *)((long)&uStack_9b8 + (ulong)(iVar41 - 1) * 4);
                  fVar65 = fVar67;
                  fVar70 = fVar47;
LAB_1096eb8f0:
                  iVar41 = 0;
                  fVar69 = fVar65;
                  fVar55 = fVar67;
                  fVar48 = fVar47;
                  fVar51 = fVar70;
                }
              }
            }
          }
LAB_1096ebe68:
          pcVar17 = (char *)ppcVar43;
        } while (*(char *)ppcVar43 != '\0');
        if (*(float *)(ppcVar30 + 0x1382) != 0.0) {
          uVar46 = 0;
          goto LAB_1096ec3dc;
        }
      }
    }
LAB_1096ec3e0:
    ppcVar11 = ppcVar30;
    func_0x0001096f0130();
    param_4 = (char *)ppcVar12;
LAB_1096ec3e8:
    if (0 < (int)*(float *)(ppcVar30 + 0x1380)) {
      *(uint *)(ppcVar30 + 0x1380) = (int)*(float *)(ppcVar30 + 0x1380) - 1;
    }
  }
  else {
    ppcVar11 = (char **)pcVar17;
    _strcmp(pcVar17,"rect");
    if ((int)ppcVar11 == 0) {
      fVar69 = *(float *)(ppcVar30 + 0x1380);
      if ((int)fVar69 < 0x7f) {
        *(uint *)(ppcVar30 + 0x1380) = (int)fVar69 + 1;
        ppcVar11 = ppcVar30 + (long)(int)fVar69 * 0x27 + 0x27;
        _memcpy(ppcVar11,ppcVar30 + (long)(int)fVar69 * 0x27,0x138);
      }
      pcVar34 = *(char **)param_4;
      if (pcVar34 == (char *)0x0) {
        fVar51 = -1.0;
        uVar46 = 0;
        fVar69 = 0.0;
        fVar48 = 0.0;
        fVar55 = 0.0;
        fVar72 = -1.0;
      }
      else {
        ppcVar12 = (char **)((long)param_4 + 8);
        fVar55 = 0.0;
        fVar72 = -1.0;
        pcVar17 = "width";
        param_4 = "height";
        fVar51 = -1.0;
        fVar48 = 0.0;
        fVar69 = 0.0;
        uVar46 = 0;
        do {
          ppcVar11 = ppcVar30;
          FUN_1096ee638(ppcVar30,pcVar34,*ppcVar12);
          if ((int)ppcVar11 == 0) {
            unaff_x22 = (char **)ppcVar12[-1];
            cVar20 = *(char *)unaff_x22;
            if (cVar20 == 'x') {
              if (*(char *)((long)unaff_x22 + 1) == '\0') {
                pcVar34 = *ppcVar12;
                fVar65 = *(float *)(ppcVar30 + 4999);
                fVar47 = *(float *)(ppcVar30 + 5000);
                FUN_1096eefa4(pcVar34);
                uVar46 = FUN_1096ef8f8(fVar65,fVar47,ppcVar30,pcVar34);
                unaff_x22 = (char **)ppcVar12[-1];
                cVar20 = *(char *)unaff_x22;
                goto LAB_1096eb0d4;
              }
            }
            else {
LAB_1096eb0d4:
              if ((cVar20 == 'y') && (*(char *)((long)unaff_x22 + 1) == '\0')) {
                pcVar34 = *ppcVar12;
                fVar69 = *(float *)((long)ppcVar30 + 0x9c3c);
                fVar65 = *(float *)((long)ppcVar30 + 0x9c44);
                FUN_1096eefa4(pcVar34);
                fVar69 = (float)FUN_1096ef8f8(fVar69,fVar65,ppcVar30,pcVar34);
                unaff_x22 = (char **)ppcVar12[-1];
              }
            }
            ppcVar11 = unaff_x22;
            _strcmp(unaff_x22,"width");
            if ((int)ppcVar11 == 0) {
              pcVar34 = *ppcVar12;
              fVar48 = *(float *)(ppcVar30 + 5000);
              FUN_1096eefa4(pcVar34);
              fVar48 = (float)FUN_1096ef8f8(0,fVar48,ppcVar30,pcVar34);
              unaff_x22 = (char **)ppcVar12[-1];
            }
            ppcVar11 = unaff_x22;
            _strcmp(unaff_x22,"height");
            if ((int)ppcVar11 == 0) {
              pcVar34 = *ppcVar12;
              fVar55 = *(float *)((long)ppcVar30 + 0x9c44);
              FUN_1096eefa4(pcVar34);
              ppcVar11 = ppcVar30;
              fVar55 = (float)FUN_1096ef8f8(0,fVar55,ppcVar30,pcVar34);
              unaff_x22 = (char **)ppcVar12[-1];
            }
            if (*(char *)unaff_x22 == 'r') {
              cVar20 = *(char *)((long)unaff_x22 + 1);
              if (cVar20 == 'x') {
                if (*(char *)((long)unaff_x22 + 2) == '\0') {
                  pcVar34 = *ppcVar12;
                  fVar51 = *(float *)(ppcVar30 + 5000);
                  FUN_1096eefa4(pcVar34);
                  ppcVar11 = ppcVar30;
                  fVar51 = (float)FUN_1096ef8f8(0,fVar51,ppcVar30,pcVar34);
                  fVar51 = ABS(fVar51);
                  unaff_x22 = (char **)ppcVar12[-1];
                  if (*(char *)unaff_x22 == 'r') {
                    cVar20 = *(char *)((long)unaff_x22 + 1);
                    goto LAB_1096eb1d8;
                  }
                }
              }
              else {
LAB_1096eb1d8:
                if ((cVar20 == 'y') && (*(char *)((long)unaff_x22 + 2) == '\0')) {
                  pcVar34 = *ppcVar12;
                  fVar72 = *(float *)((long)ppcVar30 + 0x9c44);
                  FUN_1096eefa4(pcVar34);
                  ppcVar11 = ppcVar30;
                  fVar72 = (float)FUN_1096ef8f8(0,fVar72,ppcVar30,pcVar34);
                  fVar72 = ABS(fVar72);
                }
              }
            }
          }
          pcVar34 = ppcVar12[1];
          ppcVar12 = ppcVar12 + 2;
        } while (pcVar34 != (char *)0x0);
      }
      bVar8 = false;
      if ((0.0 < fVar72) && (bVar8 = false, !NAN(fVar51))) {
        bVar8 = fVar51 < 0.0;
      }
      fVar65 = fVar72;
      if (!bVar8) {
        fVar65 = fVar51;
      }
      fVar51 = 0.0;
      if (0.0 <= fVar65) {
        fVar51 = fVar65;
      }
      bVar8 = false;
      if ((0.0 < fVar65) && (bVar8 = false, !NAN(fVar72))) {
        bVar8 = fVar72 < 0.0;
      }
      if (!bVar8) {
        fVar65 = fVar72;
      }
      fVar72 = 0.0;
      if (0.0 <= fVar65) {
        fVar72 = fVar65;
      }
      fVar65 = fVar48 * 0.5;
      if (fVar51 <= fVar48 * 0.5) {
        fVar65 = fVar51;
      }
      fVar51 = fVar55 * 0.5;
      if (fVar72 <= fVar55 * 0.5) {
        fVar51 = fVar72;
      }
      if ((fVar48 != 0.0) && (fVar55 != 0.0)) {
        *(float *)(ppcVar30 + 0x1382) = 0.0;
        fVar72 = (float)uVar46;
        if ((fVar65 < 1e-05) || (fVar51 < 0.0001)) {
          FUN_1096f04ac(uVar46,fVar69,ppcVar30);
          FUN_1096f0410(fVar72 + fVar48,fVar69,ppcVar30);
          FUN_1096f0410(fVar72 + fVar48,fVar69 + fVar55,ppcVar30);
          FUN_1096f0410(uVar46,fVar69 + fVar55,ppcVar30);
        }
        else {
          ppcStack_a40 = (char **)CONCAT44(ppcStack_a40._4_4_,fVar72 + fVar65);
          FUN_1096f04ac(fVar72 + fVar65,fVar69,ppcVar30);
          fVar48 = fVar72 + fVar48;
          ppcStack_a60 = (char **)CONCAT44(ppcStack_a60._4_4_,fVar48 - fVar65);
          FUN_1096f0410(fVar48 - fVar65,fVar69,ppcVar30);
          fVar47 = fVar48 - fVar65 * 0.44771522;
          uStack_a78 = CONCAT44(fVar47,(undefined4)uStack_a78);
          fVar70 = fVar69 + fVar51 * 0.44771522;
          ppcStack_a30 = (char **)CONCAT44(ppcStack_a30._4_4_,fVar70);
          ppcStack_a50 = (char **)CONCAT44(ppcStack_a50._4_4_,fVar69 + fVar51);
          uStack_a70._0_4_ = fVar55;
          FUN_1096f04ac(fVar47,fVar69,ppcVar30);
          FUN_1096f04ac(fVar48,fVar70,ppcVar30);
          FUN_1096f04ac(fVar48,fVar69 + fVar51,ppcVar30);
          fVar55 = fVar69 + (float)uStack_a70;
          uStack_a70 = CONCAT44(uStack_a70._4_4_,fVar55 - fVar51);
          FUN_1096f0410(fVar48,ppcVar30);
          fVar51 = fVar55 - fVar51 * 0.44771522;
          FUN_1096f04ac(fVar48,fVar51,ppcVar30);
          FUN_1096f04ac(uStack_a78._4_4_,fVar55,ppcVar30);
          FUN_1096f04ac((ulong)ppcStack_a60 & 0xffffffff,fVar55,ppcVar30);
          uVar28 = (ulong)ppcStack_a40 & 0xffffffff;
          FUN_1096f0410(uVar28,fVar55,ppcVar30);
          fVar72 = fVar72 + fVar65 * 0.44771522;
          FUN_1096f04ac(fVar72,fVar55,ppcVar30);
          FUN_1096f04ac(uVar46,fVar51,ppcVar30);
          FUN_1096f04ac(uVar46,(float)uStack_a70,ppcVar30);
          FUN_1096f0410(uVar46,ppcStack_a50._0_4_,ppcVar30);
          FUN_1096f04ac(uVar46,ppcStack_a30._0_4_,ppcVar30);
          FUN_1096f04ac(fVar72,fVar69,ppcVar30);
LAB_1096ec3d0:
          FUN_1096f04ac(uVar28,fVar69,ppcVar30);
        }
        uVar46 = 1;
LAB_1096ec3dc:
        FUN_1096eff6c(ppcVar30,uVar46);
        ppcVar12 = (char **)param_4;
        goto LAB_1096ec3e0;
      }
      goto LAB_1096ec3e8;
    }
    ppcVar11 = (char **)pcVar17;
    _strcmp(pcVar17,"circle");
    if ((int)ppcVar11 == 0) {
      fVar69 = *(float *)(ppcVar30 + 0x1380);
      if ((int)fVar69 < 0x7f) {
        *(uint *)(ppcVar30 + 0x1380) = (int)fVar69 + 1;
        ppcVar11 = ppcVar30 + (long)(int)fVar69 * 0x27 + 0x27;
        _memcpy(ppcVar11,ppcVar30 + (long)(int)fVar69 * 0x27,0x138);
      }
      pcVar34 = *(char **)param_4;
      if (pcVar34 != (char *)0x0) {
        pcVar17 = (char *)((long)param_4 + 8);
        fVar48 = 0.0;
        fVar69 = 0.0;
        uVar46 = 0;
        do {
          ppcVar11 = ppcVar30;
          FUN_1096ee638(ppcVar30,pcVar34,*(char **)pcVar17);
          if ((int)ppcVar11 == 0) {
            pcVar34 = *(char **)((long)pcVar17 + -8);
            cVar20 = *pcVar34;
            if (cVar20 == 'c') {
              cVar20 = pcVar34[1];
              if (cVar20 == 'x') {
                if (pcVar34[2] != '\0') goto LAB_1096eb2ec;
                pcVar34 = *(char **)pcVar17;
                fVar55 = *(float *)(ppcVar30 + 4999);
                fVar51 = *(float *)(ppcVar30 + 5000);
                FUN_1096eefa4(pcVar34);
                ppcVar11 = ppcVar30;
                uVar46 = FUN_1096ef8f8(fVar55,fVar51,ppcVar30,pcVar34);
                pcVar34 = *(char **)((long)pcVar17 + -8);
                cVar20 = *pcVar34;
                if (cVar20 != 'c') goto LAB_1096eb39c;
                cVar20 = pcVar34[1];
              }
              if ((cVar20 != 'y') || (pcVar34[2] != '\0')) goto LAB_1096eb2ec;
              pcVar34 = *(char **)pcVar17;
              fVar69 = *(float *)((long)ppcVar30 + 0x9c3c);
              fVar55 = *(float *)((long)ppcVar30 + 0x9c44);
              FUN_1096eefa4(pcVar34);
              ppcVar11 = ppcVar30;
              fVar69 = (float)FUN_1096ef8f8(fVar69,fVar55,ppcVar30,pcVar34);
              pcVar34 = *(char **)((long)pcVar17 + -8);
              cVar20 = *pcVar34;
            }
LAB_1096eb39c:
            if ((cVar20 == 'r') && (pcVar34[1] == '\0')) {
              pcVar34 = *(char **)pcVar17;
              fVar48 = *(float *)(ppcVar30 + 5000);
              fVar55 = *(float *)((long)ppcVar30 + 0x9c44);
              FUN_1096eefa4(pcVar34);
              ppcVar11 = ppcVar30;
              fVar48 = (float)FUN_1096ef8f8(0,SQRT(fVar55 * fVar55 + fVar48 * fVar48) / 1.4142135,
                                            ppcVar30,pcVar34);
              fVar48 = ABS(fVar48);
            }
          }
LAB_1096eb2ec:
          pcVar34 = *(char **)((long)pcVar17 + 8);
          pcVar17 = (char *)((long)pcVar17 + 0x10);
        } while (pcVar34 != (char *)0x0);
        if (0.0 < fVar48) {
          *(float *)(ppcVar30 + 0x1382) = 0.0;
          fVar55 = (float)uVar46;
          fVar65 = fVar55 + fVar48;
          ppcStack_a30 = (char **)CONCAT44(ppcStack_a30._4_4_,fVar65);
          FUN_1096f04ac(fVar65,fVar69,ppcVar30);
          fVar51 = fVar69 + fVar48 * 0.5522848;
          fVar47 = fVar55 + fVar48 * 0.5522848;
          ppcStack_a40 = (char **)CONCAT44(ppcStack_a40._4_4_,fVar47);
          fVar72 = fVar69 + fVar48;
          FUN_1096f04ac(fVar65,fVar51,ppcVar30);
          FUN_1096f04ac(fVar47,fVar72,ppcVar30);
          FUN_1096f04ac(uVar46,fVar72,ppcVar30);
          fVar65 = fVar55 - fVar48 * 0.5522848;
          fVar55 = fVar55 - fVar48;
          FUN_1096f04ac(fVar65,fVar72,ppcVar30);
          FUN_1096f04ac(fVar55,fVar51,ppcVar30);
          FUN_1096f04ac(fVar55,fVar69,ppcVar30);
          fVar51 = fVar69 - fVar48 * 0.5522848;
          fVar48 = fVar69 - fVar48;
          FUN_1096f04ac(fVar55,fVar51,ppcVar30);
          FUN_1096f04ac(fVar65,fVar48,ppcVar30);
          FUN_1096f04ac(uVar46,fVar48,ppcVar30);
          FUN_1096f04ac((ulong)ppcStack_a40 & 0xffffffff,fVar48,ppcVar30);
          uVar28 = (ulong)ppcStack_a30 & 0xffffffff;
          FUN_1096f04ac(uVar28,fVar51,ppcVar30);
          goto LAB_1096ec3d0;
        }
      }
      goto LAB_1096ec3e8;
    }
    ppcVar11 = (char **)pcVar17;
    _strcmp(pcVar17,"ellipse");
    if ((int)ppcVar11 == 0) {
      fVar69 = *(float *)(ppcVar30 + 0x1380);
      if ((int)fVar69 < 0x7f) {
        *(uint *)(ppcVar30 + 0x1380) = (int)fVar69 + 1;
        ppcVar11 = ppcVar30 + (long)(int)fVar69 * 0x27 + 0x27;
        _memcpy(ppcVar11,ppcVar30 + (long)(int)fVar69 * 0x27,0x138);
      }
      pcVar34 = *(char **)param_4;
      if (pcVar34 != (char *)0x0) {
        pcVar17 = (char *)((long)param_4 + 8);
        fVar55 = 0.0;
        fVar48 = 0.0;
        fVar69 = 0.0;
        uVar46 = 0;
        do {
          ppcVar11 = ppcVar30;
          FUN_1096ee638(ppcVar30,pcVar34,*(char **)pcVar17);
          if ((int)ppcVar11 == 0) {
            pcVar34 = *(char **)((long)pcVar17 + -8);
            cVar20 = *pcVar34;
            if (cVar20 == 'c') {
              cVar20 = pcVar34[1];
              if (cVar20 == 'x') {
                if (pcVar34[2] != '\0') goto LAB_1096eb43c;
                pcVar34 = *(char **)pcVar17;
                fVar51 = *(float *)(ppcVar30 + 4999);
                fVar72 = *(float *)(ppcVar30 + 5000);
                FUN_1096eefa4(pcVar34);
                ppcVar11 = ppcVar30;
                uVar46 = FUN_1096ef8f8(fVar51,fVar72,ppcVar30,pcVar34);
                pcVar34 = *(char **)((long)pcVar17 + -8);
                cVar20 = *pcVar34;
                if (cVar20 != 'c') goto LAB_1096eb4ec;
                cVar20 = pcVar34[1];
              }
              if ((cVar20 != 'y') || (pcVar34[2] != '\0')) goto LAB_1096eb43c;
              pcVar34 = *(char **)pcVar17;
              fVar69 = *(float *)((long)ppcVar30 + 0x9c3c);
              fVar51 = *(float *)((long)ppcVar30 + 0x9c44);
              FUN_1096eefa4(pcVar34);
              ppcVar11 = ppcVar30;
              fVar69 = (float)FUN_1096ef8f8(fVar69,fVar51,ppcVar30,pcVar34);
              pcVar34 = *(char **)((long)pcVar17 + -8);
              cVar20 = *pcVar34;
            }
LAB_1096eb4ec:
            if (cVar20 == 'r') {
              cVar20 = pcVar34[1];
              if (cVar20 == 'x') {
                if (pcVar34[2] == '\0') {
                  pcVar34 = *(char **)pcVar17;
                  fVar48 = *(float *)(ppcVar30 + 5000);
                  FUN_1096eefa4(pcVar34);
                  ppcVar11 = ppcVar30;
                  fVar48 = (float)FUN_1096ef8f8(0,fVar48,ppcVar30,pcVar34);
                  fVar48 = ABS(fVar48);
                  pcVar34 = *(char **)((long)pcVar17 + -8);
                  if (*pcVar34 == 'r') {
                    cVar20 = pcVar34[1];
                    goto LAB_1096eb540;
                  }
                }
              }
              else {
LAB_1096eb540:
                if ((cVar20 == 'y') && (pcVar34[2] == '\0')) {
                  pcVar34 = *(char **)pcVar17;
                  fVar55 = *(float *)((long)ppcVar30 + 0x9c44);
                  FUN_1096eefa4(pcVar34);
                  ppcVar11 = ppcVar30;
                  fVar55 = (float)FUN_1096ef8f8(0,fVar55,ppcVar30,pcVar34);
                  fVar55 = ABS(fVar55);
                }
              }
            }
          }
LAB_1096eb43c:
          pcVar34 = *(char **)((long)pcVar17 + 8);
          pcVar17 = (char *)((long)pcVar17 + 0x10);
        } while (pcVar34 != (char *)0x0);
        if ((0.0 < fVar48) && (0.0 < fVar55)) {
          *(float *)(ppcVar30 + 0x1382) = 0.0;
          fVar51 = (float)uVar46;
          fVar65 = fVar51 + fVar48;
          ppcStack_a30 = (char **)CONCAT44(ppcStack_a30._4_4_,fVar65);
          FUN_1096f04ac(fVar65,fVar69,ppcVar30);
          ppcStack_a50 = (char **)CONCAT44(ppcStack_a50._4_4_,fVar69 + fVar55 * 0.5522848);
          fVar47 = fVar51 + fVar48 * 0.5522848;
          ppcStack_a40 = (char **)CONCAT44(ppcStack_a40._4_4_,fVar47);
          fVar72 = fVar69 + fVar55;
          FUN_1096f04ac(fVar65,ppcVar30);
          FUN_1096f04ac(fVar47,fVar72,ppcVar30);
          FUN_1096f04ac(uVar46,fVar72,ppcVar30);
          fVar65 = fVar51 - fVar48 * 0.5522848;
          fVar51 = fVar51 - fVar48;
          FUN_1096f04ac(fVar65,fVar72,ppcVar30);
          FUN_1096f04ac(fVar51,ppcStack_a50._0_4_,ppcVar30);
          FUN_1096f04ac(fVar51,fVar69,ppcVar30);
          fVar48 = fVar69 - fVar55 * 0.5522848;
          fVar55 = fVar69 - fVar55;
          FUN_1096f04ac(fVar51,fVar48,ppcVar30);
          FUN_1096f04ac(fVar65,fVar55,ppcVar30);
          FUN_1096f04ac(uVar46,fVar55,ppcVar30);
          FUN_1096f04ac((ulong)ppcStack_a40 & 0xffffffff,fVar55,ppcVar30);
          uVar28 = (ulong)ppcStack_a30 & 0xffffffff;
          FUN_1096f04ac(uVar28,fVar48,ppcVar30);
          goto LAB_1096ec3d0;
        }
      }
      goto LAB_1096ec3e8;
    }
    ppcVar11 = (char **)pcVar17;
    _strcmp(pcVar17,"line");
    if ((int)ppcVar11 == 0) {
      fVar69 = *(float *)(ppcVar30 + 0x1380);
      if ((int)fVar69 < 0x7f) {
        *(uint *)(ppcVar30 + 0x1380) = (int)fVar69 + 1;
        _memcpy(ppcVar30 + (long)(int)fVar69 * 0x27 + 0x27,ppcVar30 + (long)(int)fVar69 * 0x27,0x138
               );
      }
      ppcVar11 = ppcVar30;
      FUN_1096edf4c(ppcVar30,param_4);
      goto LAB_1096ec3e8;
    }
    ppcVar11 = (char **)pcVar17;
    _strcmp(pcVar17,"polyline");
    if ((int)ppcVar11 == 0) {
      fVar69 = *(float *)(ppcVar30 + 0x1380);
      if ((int)fVar69 < 0x7f) {
        *(uint *)(ppcVar30 + 0x1380) = (int)fVar69 + 1;
        _memcpy(ppcVar30 + (long)(int)fVar69 * 0x27 + 0x27,ppcVar30 + (long)(int)fVar69 * 0x27,0x138
               );
      }
      uVar46 = 0;
LAB_1096ec4c0:
      ppcVar11 = ppcVar30;
      FUN_1096ee144(ppcVar30,param_4,uVar46);
      goto LAB_1096ec3e8;
    }
    ppcVar11 = (char **)pcVar17;
    _strcmp(pcVar17,"polygon");
    if ((int)ppcVar11 == 0) {
      fVar69 = *(float *)(ppcVar30 + 0x1380);
      if ((int)fVar69 < 0x7f) {
        *(uint *)(ppcVar30 + 0x1380) = (int)fVar69 + 1;
        _memcpy(ppcVar30 + (long)(int)fVar69 * 0x27 + 0x27,ppcVar30 + (long)(int)fVar69 * 0x27,0x138
               );
      }
      uVar46 = 1;
      goto LAB_1096ec4c0;
    }
    ppcVar11 = (char **)pcVar17;
    _strcmp(pcVar17,"linearGradient");
    if ((int)ppcVar11 == 0) goto LAB_1096eaf1c;
    ppcVar11 = (char **)pcVar17;
    _strcmp(pcVar17,"radialGradient");
    if ((int)ppcVar11 == 0) goto LAB_1096eaf44;
    ppcVar11 = (char **)pcVar17;
    _strcmp(pcVar17,&DAT_10f684680);
    if ((int)ppcVar11 == 0) goto LAB_1096ead78;
    ppcVar11 = (char **)pcVar17;
    _strcmp(pcVar17,"defs");
    if ((int)ppcVar11 == 0) {
      *(char *)((long)ppcVar30 + 0x9c59) = '\x01';
    }
    else {
      ppcVar11 = (char **)pcVar17;
      _strcmp(pcVar17,"svg");
      pcVar34 = (char *)ppcStack_928;
      ppcVar42 = ppcStack_930;
      ppcVar43 = ppcStack_938;
      ppcVar44 = ppcStack_940;
      pcVar66 = pcStack_948;
      uVar68 = uStack_950;
      uVar5 = uStack_958;
      uVar33 = uStack_960;
      uVar26 = uStack_968;
      uVar28 = uStack_970;
      if ((int)ppcVar11 == 0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_990) goto LAB_1096ec4d4;
        pcStack_948 = (char *)*(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar17 = (char *)0x0;
        ppcVar11 = ppcVar30;
        ppcVar19 = ppcStack_900;
        pcVar31 = (char *)ppcStack_908;
        pcVar35 = (char *)ppcStack_910;
        pcVar37 = (char *)ppcStack_918;
        pcVar39 = (char *)ppcStack_920;
        if (*(char **)param_4 != (char *)0x0) {
          ppcVar43 = (char **)0x0;
          pcVar31 = "width";
          pcVar35 = "height";
          pcVar37 = "viewBox";
          pcVar39 = &UNK_10f57e81c;
          ppcVar42 = ppcVar30 + 0x1200;
          do {
            pcVar34 = (char *)((long)param_4 + ppcVar43 * 8);
            ppcVar12 = *(char ***)((long)pcVar34 + 8);
            ppcVar11 = ppcVar30;
            FUN_1096ee638();
            ppcVar19 = ppcVar30;
            if ((int)ppcVar11 == 0) {
              ppcVar44 = *(char ***)pcVar34;
              ppcVar11 = ppcVar44;
              _strcmp(ppcVar44,"width");
              if ((int)ppcVar11 == 0) {
                pcVar17 = *(char **)((long)pcVar34 + 8);
                FUN_1096eefa4(pcVar17);
                ppcVar11 = ppcVar30;
                uVar50 = FUN_1096ef8f8(0,0,ppcVar30,pcVar17);
                *(undefined4 *)ppcVar30[0x1384] = uVar50;
              }
              else {
                ppcVar11 = ppcVar44;
                _strcmp(ppcVar44,"height");
                if ((int)ppcVar11 == 0) {
                  pcVar17 = *(char **)((long)pcVar34 + 8);
                  FUN_1096eefa4(pcVar17);
                  ppcVar11 = ppcVar30;
                  uVar50 = FUN_1096ef8f8(0,0,ppcVar30,pcVar17);
                  *(undefined4 *)(ppcVar30[0x1384] + 4) = uVar50;
                }
                else {
                  ppcVar11 = ppcVar44;
                  _strcmp(ppcVar44,"viewBox");
                  if ((int)ppcVar11 == 0) {
                    ppcVar44 = *(char ***)((long)pcVar34 + 8);
                    pcVar17 = (char *)&pcStack_988;
                    func_0x0001096efba4();
                    ppcVar11 = &pcStack_988;
                    dVar52 = (double)FUN_1096ef7b0();
                    *(float *)(ppcVar30 + 4999) = (float)dVar52;
                    pcVar34 = (char *)(ulong)*(byte *)ppcVar44;
                    if (*(byte *)ppcVar44 == 0) goto LAB_1096ee5fc;
                    while( true ) {
                      pcVar17 = (char *)(ulong)(uint)(int)(char)pcVar34;
                      ppcVar12 = (char **)0x7;
                      ppcVar11 = (char **)&UNK_10f57e81c;
                      _memchr();
                      if (((ppcVar11 == (char **)0x0) && ((int)pcVar34 != 0x2c)) &&
                         ((int)pcVar34 != 0x25)) break;
                      ppcVar44 = (char **)((long)ppcVar44 + 1);
                      pcVar34 = (char *)(ulong)*(byte *)ppcVar44;
                      if (*(byte *)ppcVar44 == 0) {
                        pcVar34 = (char *)0x0;
                        goto LAB_1096ee5fc;
                      }
                    }
                    pcVar17 = (char *)&pcStack_988;
                    func_0x0001096efba4();
                    ppcVar11 = &pcStack_988;
                    dVar52 = (double)FUN_1096ef7b0();
                    *(float *)((long)ppcVar30 + 0x9c3c) = (float)dVar52;
                    pcVar34 = (char *)(ulong)*(byte *)ppcVar44;
                    if (*(byte *)ppcVar44 == 0) goto LAB_1096ee5fc;
                    while( true ) {
                      pcVar17 = (char *)(ulong)(uint)(int)(char)pcVar34;
                      ppcVar12 = (char **)0x7;
                      ppcVar11 = (char **)&UNK_10f57e81c;
                      _memchr();
                      if (((ppcVar11 == (char **)0x0) && ((int)pcVar34 != 0x2c)) &&
                         ((int)pcVar34 != 0x25)) break;
                      ppcVar44 = (char **)((long)ppcVar44 + 1);
                      pcVar34 = (char *)(ulong)*(byte *)ppcVar44;
                      if (*(byte *)ppcVar44 == 0) {
                        pcVar34 = (char *)0x0;
                        goto LAB_1096ee5fc;
                      }
                    }
                    pcVar17 = (char *)&pcStack_988;
                    func_0x0001096efba4();
                    ppcVar11 = &pcStack_988;
                    dVar52 = (double)FUN_1096ef7b0();
                    *(float *)(ppcVar30 + 5000) = (float)dVar52;
                    bVar2 = *(byte *)ppcVar44;
                    while( true ) {
                      pcVar34 = (char *)(ulong)bVar2;
                      if (bVar2 == 0) goto LAB_1096ee5fc;
                      pcVar17 = (char *)(ulong)(uint)(int)(char)bVar2;
                      ppcVar12 = (char **)0x7;
                      ppcVar11 = (char **)&UNK_10f57e81c;
                      _memchr();
                      if (((ppcVar11 == (char **)0x0) && (bVar2 != 0x2c)) && (bVar2 != 0x25)) break;
                      ppcVar44 = (char **)((long)ppcVar44 + 1);
                      bVar2 = *(byte *)ppcVar44;
                    }
                    func_0x0001096efba4(ppcVar44,&pcStack_988);
                    ppcVar11 = &pcStack_988;
                    dVar52 = (double)FUN_1096ef7b0();
                    *(float *)((long)ppcVar30 + 0x9c44) = (float)dVar52;
                  }
                  else {
                    ppcVar11 = ppcVar44;
                    _strcmp(ppcVar44,&DAT_10f47dda1);
                    if ((int)ppcVar11 == 0) {
                      ppcVar44 = *(char ***)((long)pcVar34 + 8);
                      ppcVar11 = ppcVar44;
                      _strstr(ppcVar44,"none");
                      if (ppcVar11 == (char **)0x0) {
                        ppcVar11 = ppcVar44;
                        _strstr(ppcVar44,&DAT_10f49662e);
                        if (ppcVar11 == (char **)0x0) {
                          ppcVar11 = ppcVar44;
                          _strstr(ppcVar44,&UNK_10f57e86a);
                          if (ppcVar11 != (char **)0x0) {
                            fVar69 = 1.4013e-45;
                            goto LAB_1096ee500;
                          }
                          ppcVar11 = ppcVar44;
                          _strstr(ppcVar44,&DAT_10f496633);
                          if (ppcVar11 != (char **)0x0) {
                            fVar69 = 2.8026e-45;
                            goto LAB_1096ee500;
                          }
                        }
                        else {
                          fVar69 = 0.0;
LAB_1096ee500:
                          *(float *)(ppcVar30 + 0x1389) = fVar69;
                        }
                        ppcVar11 = ppcVar44;
                        _strstr(ppcVar44,&DAT_10f496638);
                        if (ppcVar11 == (char **)0x0) {
                          ppcVar11 = ppcVar44;
                          _strstr(ppcVar44,&UNK_10f57e86f);
                          if (ppcVar11 != (char **)0x0) {
                            fVar69 = 1.4013e-45;
                            goto LAB_1096ee554;
                          }
                          ppcVar11 = ppcVar44;
                          _strstr(ppcVar44,&DAT_10f49663d);
                          if (ppcVar11 != (char **)0x0) {
                            fVar69 = 2.8026e-45;
                            goto LAB_1096ee554;
                          }
                        }
                        else {
                          fVar69 = 0.0;
LAB_1096ee554:
                          *(float *)((long)ppcVar30 + 0x9c4c) = fVar69;
                        }
                        pcVar34 = (char *)0x1;
                        fVar69 = 1.4013e-45;
                        *(float *)(ppcVar30 + 0x138a) = 1.4013e-45;
                        ppcVar11 = ppcVar44;
                        _strstr(ppcVar44,"slice");
                        if (ppcVar11 != (char **)0x0) {
                          fVar69 = 2.8026e-45;
                        }
                        *(float *)(ppcVar30 + 0x138a) = fVar69;
                      }
                      else {
                        *(float *)(ppcVar30 + 0x138a) = 0.0;
                      }
                    }
                  }
                }
              }
            }
            ppcVar43 = (char **)((long)ppcVar43 + 2);
          } while (*(char **)((long)param_4 + ppcVar43 * 8) != (char *)0x0);
          pcVar17 = (char *)0x0;
          pcVar31 = "width";
          pcVar35 = "height";
          pcVar37 = "viewBox";
          pcVar39 = &UNK_10f57e81c;
        }
LAB_1096ee5fc:
        if ((char *)*(long *)PTR____stack_chk_guard_11034bdc0 == pcStack_948) {
          return ppcVar11;
        }
        ___stack_chk_fail();
        ppcVar7 = apcStack_a00;
        ppcVar38 = apcStack_a00;
        uStack_9e0 = uVar68;
        pcStack_9d8 = pcVar66;
        ppcStack_9d0 = (char **)pcVar39;
        ppcStack_9c8 = (char **)pcVar37;
        ppcStack_9c0 = (char **)pcVar35;
        uStack_9b8 = (char **)pcVar31;
        uStack_9b0 = ppcVar19;
        uStack_9a8 = (char **)param_4;
        pppppppuStack_9a0 = &pppppppuStack_8f0;
        pcStack_998 = FUN_1096ee638;
        pppppppuVar45 = &pppppppuStack_9a0;
        lStack_9e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar31 = (char *)(ppcVar11 + 0x1200);
        fVar69 = *(float *)(ppcVar11 + 0x1380);
        ppcVar30 = (char **)(long)(int)fVar69;
        ppcVar32 = (char **)pcVar17;
        ppcVar19 = ppcVar12;
        _strcmp(pcVar17,"style");
        if ((int)ppcVar32 == 0) {
          pcVar35 = (char *)ppcVar12;
          FUN_1096ef014();
LAB_1096eeb94:
          ppcVar32 = (char **)0x1;
        }
        else {
          ppcVar30 = ppcVar11 + (long)(int)fVar69 * 0x27;
          ppcVar32 = (char **)pcVar17;
          _strcmp(pcVar17,"display");
          if ((int)ppcVar32 == 0) {
            pcVar35 = "none";
            ppcVar11 = ppcVar12;
            _strcmp();
            if ((int)ppcVar11 == 0) {
              *(char *)((long)ppcVar30 + 0x136) = '\0';
            }
            goto LAB_1096eeb94;
          }
          ppcVar32 = (char **)pcVar17;
          _strcmp(pcVar17,"fill");
          if ((int)ppcVar32 != 0) {
            pcVar35 = &DAT_10f68f0f6;
            ppcVar32 = (char **)pcVar17;
            _strcmp();
            if ((int)ppcVar32 == 0) {
              ppcVar11 = ppcVar12;
              dVar52 = (double)FUN_1096ef7b0();
              fVar69 = 0.0;
              if (0.0 <= (float)dVar52) {
                fVar69 = (float)dVar52;
              }
              fVar48 = 1.0;
              if (fVar69 <= 1.0) {
                fVar48 = fVar69;
              }
              *(float *)(ppcVar30 + 0xc) = fVar48;
            }
            else {
              pcVar35 = "fill-opacity";
              ppcVar32 = (char **)pcVar17;
              _strcmp();
              if ((int)ppcVar32 == 0) {
                ppcVar11 = ppcVar12;
                dVar52 = (double)FUN_1096ef7b0();
                fVar69 = 0.0;
                if (0.0 <= (float)dVar52) {
                  fVar69 = (float)dVar52;
                }
                fVar48 = 1.0;
                if (fVar69 <= 1.0) {
                  fVar48 = fVar69;
                }
                *(float *)((long)ppcVar30 + 100) = fVar48;
              }
              else {
                ppcVar32 = (char **)pcVar17;
                _strcmp(pcVar17,"stroke");
                if ((int)ppcVar32 == 0) {
                  pcVar35 = "none";
                  ppcVar11 = ppcVar12;
                  _strcmp();
                  if ((int)ppcVar11 != 0) {
                    pcVar35 = "url(";
                    ppcVar19 = (char **)0x4;
                    ppcVar11 = ppcVar12;
                    _strncmp();
                    if ((int)ppcVar11 == 0) {
                      uVar27 = 0;
                      *(char *)((long)ppcVar30 + 0x135) = '\x02';
                      pfVar6 = (float *)((long)ppcVar30 + 0xac);
                      pfVar29 = (float *)((long)ppcVar12 + 4);
                      if (*(char *)pfVar29 == '#') {
                        pfVar29 = (float *)((long)ppcVar12 + 5);
                      }
                      do {
                        if (*(char *)((long)pfVar29 + uVar27) == ')') break;
                        *(char *)((long)pfVar6 + uVar27) = *(char *)((long)pfVar29 + uVar27);
                        uVar27 = uVar27 + 1;
                      } while (uVar27 != 0x3f);
                      goto LAB_1096ee970;
                    }
                    ppcVar32 = (char **)0x1;
                    *(char *)((long)ppcVar30 + 0x135) = '\x01';
                    ppcVar11 = ppcVar12;
                    FUN_1096ef244();
                    *(float *)((long)ppcVar30 + 0x5c) = SUB84(ppcVar11,0);
                    goto LAB_1096eeb98;
                  }
                  *(char *)((long)ppcVar30 + 0x135) = '\0';
                }
                else {
                  ppcVar32 = (char **)pcVar17;
                  _strcmp(pcVar17,"stroke-width");
                  if ((int)ppcVar32 == 0) {
                    fVar69 = SQRT(*(float *)((long)ppcVar11 + 0x9c44) *
                                  *(float *)((long)ppcVar11 + 0x9c44) +
                                  *(float *)(ppcVar11 + 5000) * *(float *)(ppcVar11 + 5000)) /
                             1.4142135;
                    pcVar66 = (char *)(ulong)(uint)fVar69;
                    pcVar35 = (char *)ppcVar12;
                    FUN_1096eefa4();
                    fVar69 = (float)FUN_1096ef8f8(0,fVar69);
                    *(float *)((long)ppcVar30 + 0xec) = fVar69;
                  }
                  else {
                    ppcVar32 = (char **)pcVar17;
                    _strcmp(pcVar17,"stroke-dasharray");
                    if ((int)ppcVar32 == 0) {
                      ppcVar19 = (char **)((long)ppcVar30 + 0xf4);
                      pcVar35 = (char *)ppcVar12;
                      FUN_1096ef4a0();
                      *(float *)((long)ppcVar30 + 0x114) = SUB84(ppcVar11,0);
                    }
                    else {
                      ppcVar32 = (char **)pcVar17;
                      _strcmp(pcVar17,"stroke-dashoffset");
                      if ((int)ppcVar32 == 0) {
                        fVar69 = SQRT(*(float *)((long)ppcVar11 + 0x9c44) *
                                      *(float *)((long)ppcVar11 + 0x9c44) +
                                      *(float *)(ppcVar11 + 5000) * *(float *)(ppcVar11 + 5000)) /
                                 1.4142135;
                        pcVar66 = (char *)(ulong)(uint)fVar69;
                        pcVar35 = (char *)ppcVar12;
                        FUN_1096eefa4();
                        fVar69 = (float)FUN_1096ef8f8(0,fVar69);
                        *(float *)(ppcVar30 + 0x1e) = fVar69;
                      }
                      else {
                        pcVar35 = "stroke-opacity";
                        ppcVar32 = (char **)pcVar17;
                        _strcmp();
                        if ((int)ppcVar32 == 0) {
                          ppcVar11 = ppcVar12;
                          dVar52 = (double)FUN_1096ef7b0();
                          fVar69 = 0.0;
                          if (0.0 <= (float)dVar52) {
                            fVar69 = (float)dVar52;
                          }
                          fVar48 = 1.0;
                          if (fVar69 <= 1.0) {
                            fVar48 = fVar69;
                          }
                          *(float *)(ppcVar30 + 0xd) = fVar48;
                        }
                        else {
                          ppcVar32 = (char **)pcVar17;
                          _strcmp(pcVar17,"stroke-linecap");
                          if ((int)ppcVar32 == 0) {
                            uVar46 = 0x1096eea90;
                            ppcVar11 = ppcVar12;
                            goto FUN_1096ef664;
                          }
                          pcVar35 = "stroke-linejoin";
                          ppcVar32 = (char **)pcVar17;
                          _strcmp();
                          if ((int)ppcVar32 == 0) {
                            ppcVar11 = ppcVar12;
                            func_0x0001096ef6c8();
                            *(char *)(ppcVar30 + 0x23) = (char)ppcVar11;
                          }
                          else {
                            pcVar35 = "stroke-miterlimit";
                            ppcVar32 = (char **)pcVar17;
                            _strcmp();
                            if ((int)ppcVar32 == 0) {
                              ppcVar11 = ppcVar12;
                              dVar52 = (double)FUN_1096ef7b0();
                              fVar69 = 0.0;
                              if (0.0 <= (float)dVar52) {
                                fVar69 = (float)dVar52;
                              }
                              *(float *)((long)ppcVar30 + 0x11c) = fVar69;
                            }
                            else {
                              pcVar35 = "fill-rule";
                              ppcVar32 = (char **)pcVar17;
                              _strcmp();
                              if ((int)ppcVar32 == 0) {
                                ppcVar11 = ppcVar12;
                                func_0x0001096ef72c();
                                *(char *)(ppcVar30 + 0x24) = (char)ppcVar11;
                              }
                              else {
                                ppcVar32 = (char **)pcVar17;
                                _strcmp(pcVar17,"font-size");
                                if ((int)ppcVar32 == 0) {
                                  fVar69 = SQRT(*(float *)((long)ppcVar11 + 0x9c44) *
                                                *(float *)((long)ppcVar11 + 0x9c44) +
                                                *(float *)(ppcVar11 + 5000) *
                                                *(float *)(ppcVar11 + 5000)) / 1.4142135;
                                  pcVar66 = (char *)(ulong)(uint)fVar69;
                                  pcVar35 = (char *)ppcVar12;
                                  FUN_1096eefa4();
                                  fVar69 = (float)FUN_1096ef8f8(0,fVar69);
                                  *(float *)((long)ppcVar30 + 0x124) = fVar69;
                                }
                                else {
                                  ppcVar32 = (char **)pcVar17;
                                  _strcmp(pcVar17,"transform");
                                  if ((int)ppcVar32 == 0) {
                                    FUN_1096eebec(apcStack_a00,ppcVar12);
                                    ppcVar11 = ppcVar30 + 8;
                                    FUN_1096ef770();
                                    pcVar35 = (char *)ppcVar38;
                                  }
                                  else {
                                    pcVar35 = "stop-color";
                                    ppcVar32 = (char **)pcVar17;
                                    _strcmp();
                                    if ((int)ppcVar32 == 0) {
                                      ppcVar11 = ppcVar12;
                                      FUN_1096ef244();
                                      *(float *)(ppcVar30 + 0x25) = SUB84(ppcVar11,0);
                                    }
                                    else {
                                      pcVar35 = "stop-opacity";
                                      ppcVar32 = (char **)pcVar17;
                                      _strcmp();
                                      if ((int)ppcVar32 == 0) {
                                        ppcVar11 = ppcVar12;
                                        dVar52 = (double)FUN_1096ef7b0();
                                        fVar69 = 0.0;
                                        if (0.0 <= (float)dVar52) {
                                          fVar69 = (float)dVar52;
                                        }
                                        fVar48 = 1.0;
                                        if (fVar69 <= 1.0) {
                                          fVar48 = fVar69;
                                        }
                                        *(float *)((long)ppcVar30 + 300) = fVar48;
                                      }
                                      else {
                                        pcVar35 = &DAT_10f63975c;
                                        ppcVar38 = (char **)pcVar17;
                                        _strcmp();
                                        if ((int)ppcVar38 == 0) {
                                          pcVar35 = (char *)ppcVar12;
                                          FUN_1096eefa4();
                                          fVar69 = (float)FUN_1096ef8f8(0,0x3f800000);
                                          *(float *)(ppcVar30 + 0x26) = fVar69;
                                        }
                                        else {
                                          if (((*pcVar17 != 'i') ||
                                              (*(char *)((long)pcVar17 + 1) != 'd')) ||
                                             (*(char *)((long)pcVar17 + 2) != '\0')) {
                                            ppcVar32 = (char **)0x0;
                                            ppcVar11 = ppcVar38;
                                            goto LAB_1096eeb98;
                                          }
                                          ppcVar19 = (char **)0x3f;
                                          ppcVar11 = ppcVar30;
                                          pcVar35 = (char *)ppcVar12;
                                          _strncpy();
                                          *(char *)((long)ppcVar30 + 0x3f) = '\0';
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LAB_1096eeb94;
          }
          pcVar35 = "none";
          ppcVar11 = ppcVar12;
          _strcmp();
          if ((int)ppcVar11 == 0) {
            *(char *)((long)ppcVar30 + 0x134) = '\0';
            goto LAB_1096eeb94;
          }
          pcVar35 = "url(";
          ppcVar19 = (char **)0x4;
          ppcVar11 = ppcVar12;
          _strncmp();
          if ((int)ppcVar11 == 0) {
            uVar27 = 0;
            *(char *)((long)ppcVar30 + 0x134) = '\x02';
            pfVar6 = (float *)((long)ppcVar30 + 0x6c);
            pfVar29 = (float *)((long)ppcVar12 + 4);
            if (*(char *)pfVar29 == '#') {
              pfVar29 = (float *)((long)ppcVar12 + 5);
            }
            do {
              if (*(char *)((long)pfVar29 + uVar27) == ')') break;
              *(char *)((long)pfVar6 + uVar27) = *(char *)((long)pfVar29 + uVar27);
              uVar27 = uVar27 + 1;
            } while (uVar27 != 0x3f);
LAB_1096ee970:
            ppcVar12 = (char **)((long)ppcVar12 + 4);
            *(char *)((long)pfVar6 + (uVar27 & 0xffffffff)) = '\0';
            goto LAB_1096eeb94;
          }
          ppcVar32 = (char **)0x1;
          *(char *)((long)ppcVar30 + 0x134) = '\x01';
          ppcVar11 = ppcVar12;
          FUN_1096ef244();
          *(float *)(ppcVar30 + 0xb) = SUB84(ppcVar11,0);
        }
LAB_1096eeb98:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9e8) {
          return ppcVar32;
        }
        ___stack_chk_fail();
        uStack_a90 = uVar28;
        dStack_a88 = (double)uVar26;
        dStack_a80 = (double)uVar33;
        uStack_a78 = uVar5;
        uStack_a70 = uVar68;
        pcStack_a68 = pcVar66;
        ppcStack_a60 = ppcVar44;
        ppcStack_a58 = ppcVar43;
        ppcStack_a50 = ppcVar42;
        ppcStack_a48 = (char **)pcVar34;
        ppcStack_a40 = (char **)pcVar39;
        ppcStack_a38 = (char **)pcVar31;
        ppcStack_a30 = (char **)pcVar17;
        ppcStack_a28 = ppcVar32;
        ppcStack_a20 = ppcVar12;
        ppcStack_a18 = ppcVar30;
        pppppppuStack_a10 = pppppppuVar45;
        pcStack_a08 = FUN_1096eebec;
        uStack_a98 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uStack_ae8 = 0x3f80000000000000;
        uStack_af0 = 0x3f800000;
        ppcVar11[1] = (char *)0x3f80000000000000;
        *ppcVar11 = (char *)0x3f800000;
        ppcVar11[2] = (char *)0x0;
        ppcVar38 = ppcVar11;
        if (*pcVar35 != '\0') {
          ppcVar32 = (char **)&DAT_10f638b90;
          pcVar17 = "translate";
          pcVar66 = (char *)0x0;
          pcVar31 = "scale";
          uVar68 = 0;
          pcVar39 = "rotate";
          ppcVar44 = (char **)0x43340000;
          pcVar34 = "skewX";
          uStack_af8 = 0;
          uStack_b00 = 0x3f80000000000000;
          ppcVar30 = (char **)pcVar35;
          do {
            ppcVar12 = ppcVar30;
            _strncmp(ppcVar30,&DAT_10f638b90,6);
            if ((int)ppcVar12 == 0) {
              uStack_ad8 = (char **)((ulong)uStack_ad8 & 0xffffffff);
              ppcVar19 = (char **)0x6;
              ppcVar43 = ppcVar30;
              FUN_1096efa5c(ppcVar30,&fStack_ab0,6,(long)&uStack_ad8 + 4);
              if (uStack_ad8._4_4_ == 6) {
                fStack_ac8 = fStack_aa8;
                fStack_ac4 = fStack_aa4;
                fStack_ad0 = fStack_ab0;
                fStack_acc = fStack_aac;
                uStack_ac0._0_4_ = fStack_aa0;
                uStack_ac0._4_4_ = fStack_a9c;
              }
LAB_1096eef44:
              ppcVar30 = (char **)((long)ppcVar30 + (long)(int)ppcVar43);
              ppcVar38 = ppcVar11;
              FUN_1096ef770(ppcVar11,&fStack_ad0);
            }
            else {
              ppcVar12 = ppcVar30;
              _strncmp(ppcVar30,"translate",9);
              if ((int)ppcVar12 == 0) {
                uStack_ad8 = (char **)((ulong)uStack_ad8 & 0xffffffff);
                ppcVar19 = (char **)0x2;
                ppcVar43 = ppcVar30;
                FUN_1096efa5c(ppcVar30,&fStack_ab0,2,(long)&uStack_ad8 + 4);
                uStack_ac0._4_4_ = 0.0;
                if (uStack_ad8._4_4_ != 1) {
                  uStack_ac0._4_4_ = fStack_aac;
                }
                fStack_ac8 = (float)uStack_ae8;
                fStack_ac4 = (float)((ulong)uStack_ae8 >> 0x20);
                fStack_ad0 = (float)uStack_af0;
                fStack_acc = (float)((ulong)uStack_af0 >> 0x20);
                uStack_ac0._0_4_ = fStack_ab0;
                goto LAB_1096eef44;
              }
              ppcVar12 = ppcVar30;
              _strncmp(ppcVar30,"scale",5);
              if ((int)ppcVar12 == 0) {
                uStack_ad8 = (char **)((ulong)uStack_ad8 & 0xffffffff);
                ppcVar19 = (char **)0x2;
                ppcVar43 = ppcVar30;
                FUN_1096efa5c(ppcVar30,&fStack_ab0,2,(long)&uStack_ad8 + 4);
                fStack_ac4 = fStack_ab0;
                if (uStack_ad8._4_4_ != 1) {
                  fStack_ac4 = fStack_aac;
                }
                fStack_ad0 = fStack_ab0;
                fStack_acc = 0.0;
                fStack_ac8 = 0.0;
                uStack_ac0._0_4_ = 0.0;
                uStack_ac0._4_4_ = 0.0;
                goto LAB_1096eef44;
              }
              ppcVar12 = ppcVar30;
              _strncmp(ppcVar30,"rotate",6);
              fVar69 = 180.0;
              if ((int)ppcVar12 == 0) {
                uStack_ad8 = (char **)((ulong)uStack_ad8 & 0xffffffff);
                ppcVar19 = (char **)0x3;
                ppcVar43 = ppcVar30;
                FUN_1096efa5c(ppcVar30,&fStack_ab0,3,(long)&uStack_ad8 + 4);
                if (uStack_ad8._4_4_ == 1) {
                  fStack_aac = 0.0;
                  fStack_aa8 = 0.0;
LAB_1096eeeb8:
                  ppcVar42 = (char **)0x0;
                  fVar48 = 0.0;
                  fVar55 = 0.0;
                }
                else {
                  if (uStack_ad8._4_4_ < 2) goto LAB_1096eeeb8;
                  fVar55 = 0.0 - fStack_aac;
                  fVar48 = 0.0 - fStack_aa8;
                  ppcVar42 = (char **)0x1;
                }
                fVar51 = (float)___sincosf_stret();
                fStack_ad0 = fVar69 - fVar51 * 0.0;
                fStack_ac8 = fVar69 * 0.0 - fVar51;
                uStack_ac0._0_4_ = -(fVar51 * fVar48) + fVar69 * fVar55 + 0.0;
                fStack_acc = fVar51 + fVar69 * 0.0;
                fStack_ac4 = fVar69 + fVar51 * 0.0;
                uStack_ac0._4_4_ = fVar48 * fVar69 + fVar51 * fVar55 + 0.0;
                if ((int)ppcVar42 != 0) {
                  fVar69 = fStack_acc * 0.0;
                  fStack_acc = fStack_acc + fStack_ad0 * 0.0;
                  fStack_ad0 = fStack_ad0 + fVar69;
                  fVar69 = fStack_ac4 * 0.0;
                  fStack_ac4 = fStack_ac4 + fStack_ac8 * 0.0;
                  fStack_ac8 = fStack_ac8 + fVar69;
                  fVar69 = (float)uStack_ac0 * 0.0;
                  uStack_ac0._0_4_ = (float)uStack_ac0 + uStack_ac0._4_4_ * 0.0 + fStack_aac;
                  uStack_ac0._4_4_ = uStack_ac0._4_4_ + fVar69 + fStack_aa8;
                }
                goto LAB_1096eef44;
              }
              ppcVar12 = ppcVar30;
              _strncmp(ppcVar30,"skewX",5);
              if ((int)ppcVar12 == 0) {
                uStack_ad8 = (char **)((ulong)uStack_ad8 & 0xffffffff);
                ppcVar19 = (char **)0x1;
                ppcVar43 = ppcVar30;
                FUN_1096efa5c(ppcVar30,&fStack_ab0,1,(long)&uStack_ad8 + 4);
                fStack_ac8 = (float)_tanf((fStack_ab0 / 180.0) * 3.1415927,0x43340000);
                fStack_ad0 = 1.0;
                fStack_acc = 0.0;
                fStack_ac4 = 1.0;
                uStack_ac0._0_4_ = 0.0;
                uStack_ac0._4_4_ = 0.0;
                goto LAB_1096eef44;
              }
              ppcVar19 = (char **)0x5;
              ppcVar38 = ppcVar30;
              _strncmp(ppcVar30,"skewY");
              if ((int)ppcVar38 == 0) {
                uStack_ad8 = (char **)((ulong)uStack_ad8 & 0xffffffff);
                ppcVar19 = (char **)0x1;
                ppcVar43 = ppcVar30;
                FUN_1096efa5c(ppcVar30,&fStack_ab0,1,(long)&uStack_ad8 + 4);
                fStack_acc = (float)_tanf((fStack_ab0 / 180.0) * 3.1415927,0x43340000);
                fStack_ad0 = 1.0;
                uStack_ac0._0_4_ = (float)uStack_af8;
                uStack_ac0._4_4_ = (float)((ulong)uStack_af8 >> 0x20);
                fStack_ac8 = (float)uStack_b00;
                fStack_ac4 = (float)((ulong)uStack_b00 >> 0x20);
                goto LAB_1096eef44;
              }
              ppcVar30 = (char **)((long)ppcVar30 + 1);
            }
            ppcVar12 = ppcVar11;
          } while (*(char *)ppcVar30 != '\0');
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == uStack_a98) {
          return ppcVar38;
        }
        ___stack_chk_fail();
        pcStack_b08 = FUN_1096eefa4;
        lStack_b28 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppcVar18 = apcStack_b68;
        ppcStack_b20 = ppcVar12;
        ppcStack_b18 = ppcVar30;
        pppppppuStack_b10 = &pppppppuStack_a10;
        func_0x0001096efba4();
        func_0x0001096efcd0();
        ppcVar11 = apcStack_b68;
        dVar52 = (double)FUN_1096ef7b0();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b28) {
          return (char **)((ulong)(uint)(float)dVar52 | (long)ppcVar38 << 0x20);
        }
        ___stack_chk_fail();
        pcStack_b78 = FUN_1096ef014;
        lStack_be0 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar28 = (ulong)*(byte *)ppcVar18;
        ppcVar30 = ppcVar11;
        ppcVar40 = (char **)pcVar39;
        ppcStack_bd0 = ppcVar44;
        ppcStack_bc8 = ppcVar43;
        ppcStack_bc0 = ppcVar42;
        ppcStack_bb8 = (char **)pcVar34;
        ppcStack_bb0 = (char **)pcVar39;
        ppcStack_ba8 = (char **)pcVar31;
        ppcStack_ba0 = (char **)pcVar17;
        ppcStack_b98 = ppcVar32;
        ppcStack_b90 = ppcVar12;
        ppcStack_b88 = ppcVar38;
        pppppppuStack_b80 = &pppppppuStack_b10;
        if (*(byte *)ppcVar18 != 0) {
          ppcVar40 = (char **)0x1ff;
          ppcVar12 = (char **)&UNK_10f57e81c;
          ppcVar14 = ppcVar18;
LAB_1096ef064:
          do {
            ppcVar32 = ppcVar14;
            ppcVar30 = ppcVar12;
            _memchr(&UNK_10f57e81c,(int)(char)uVar28,7);
            ppcVar42 = ppcVar32;
            if (ppcVar30 != (char **)0x0) {
              ppcVar32 = (char **)((long)ppcVar32 + 1);
              uVar28 = (ulong)*(byte *)ppcVar32;
              ppcVar14 = ppcVar32;
              ppcVar42 = ppcVar32;
              if (*(byte *)ppcVar32 != 0) goto LAB_1096ef064;
            }
            while ((ppcVar30 = ppcVar32, ppcVar43 = ppcVar32, (int)uVar28 != 0 &&
                   ((int)uVar28 != 0x3b))) {
              ppcVar32 = (char **)((long)ppcVar32 + 1);
              uVar28 = (ulong)*(byte *)ppcVar32;
            }
            while ((ppcVar42 < ppcVar30 &&
                   ((*(char *)ppcVar30 == ';' ||
                    (ppcVar44 = ppcVar12, _memchr(&UNK_10f57e81c,(long)*(char *)ppcVar30,7),
                    ppcVar43 = ppcVar30, ppcVar44 != (char **)0x0))))) {
              ppcVar30 = (char **)((long)ppcVar30 + -1);
              ppcVar43 = ppcVar42;
            }
            ppcVar44 = (char **)((long)ppcVar43 + 1);
            ppcVar30 = ppcVar42;
            ppcVar19 = ppcVar42;
            if (ppcVar42 < ppcVar44) {
              lVar23 = 0;
              if (ppcVar42 <= ppcVar43) {
                lVar23 = (long)ppcVar43 - (long)ppcVar42;
              }
              lVar23 = lVar23 + 1;
              ppcVar38 = ppcVar42;
              do {
                ppcVar19 = ppcVar38;
                ppcVar30 = ppcVar38;
                if (*(char *)ppcVar38 == ':') break;
                ppcVar38 = (char **)((long)ppcVar38 + 1);
                lVar23 = lVar23 + -1;
                ppcVar19 = ppcVar38;
                ppcVar30 = ppcVar38;
              } while (lVar23 != 0);
              while ((ppcVar42 < ppcVar38 &&
                     ((*(char *)ppcVar38 == ':' ||
                      (ppcVar18 = ppcVar12, _memchr(&UNK_10f57e81c,(long)*(char *)ppcVar38,7),
                      ppcVar19 = ppcVar38, ppcVar18 != (char **)0x0))))) {
                ppcVar38 = (char **)((long)ppcVar38 + -1);
                ppcVar19 = ppcVar42;
              }
            }
            iVar41 = (int)ppcVar19 - (int)ppcVar42;
            uVar22 = 0x1ff;
            if (iVar41 + 1 < 0x1ff) {
              uVar22 = iVar41 + 1;
            }
            uVar28 = (ulong)uVar22;
            if (iVar41 != -1) {
              uVar28 = (ulong)(int)uVar22;
              _memcpy(apcStack_de0,ppcVar42,uVar28);
            }
            *(undefined1 *)((long)apcStack_de0 + uVar28) = 0;
            if (ppcVar30 < ppcVar44) {
              lVar23 = 0;
              if (ppcVar30 <= ppcVar43) {
                lVar23 = (long)ppcVar43 - (long)ppcVar30;
              }
              lVar23 = lVar23 + 1;
              do {
                if ((*(char *)ppcVar30 != ':') &&
                   (ppcVar42 = ppcVar12, _memchr(&UNK_10f57e81c,(long)*(char *)ppcVar30,7),
                   ppcVar42 == (char **)0x0)) break;
                ppcVar30 = (char **)((long)ppcVar30 + 1);
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
            }
            uVar36 = (int)ppcVar44 - (int)ppcVar30;
            uVar22 = uVar36;
            if (0x1fe < (int)uVar36) {
              uVar22 = 0x1ff;
            }
            pcVar31 = (char *)(ulong)uVar22;
            if (uVar36 != 0) {
              pcVar31 = (char *)(long)(int)uVar22;
              _memcpy(apcStack_fe0,ppcVar30,pcVar31);
            }
            *(char *)((long)apcStack_fe0 + (long)pcVar31) = '\0';
            ppcVar18 = apcStack_de0;
            ppcVar30 = ppcVar11;
            ppcVar19 = apcStack_fe0;
            FUN_1096ee638();
            pcVar34 = (char *)ppcVar32;
            if (*(char *)ppcVar32 != '\0') {
              pcVar34 = (char *)((long)ppcVar32 + 1);
            }
            uVar28 = (ulong)(byte)*pcVar34;
            ppcVar38 = ppcVar11;
            ppcVar14 = (char **)pcVar34;
            ppcVar42 = apcStack_fe0;
          } while (*pcVar34 != 0);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_be0) {
          return ppcVar30;
        }
        ___stack_chk_fail();
        pcStack_fe8 = FUN_1096ef244;
        lStack_1018 = *(long *)PTR____stack_chk_guard_11034bdc0;
        do {
          ppcVar11 = ppcVar30;
          ppcVar30 = (char **)((long)ppcVar11 + 1);
          bVar2 = *(byte *)ppcVar11;
          uVar26 = (ulong)bVar2;
        } while (bVar2 == 0x20);
        ppcVar14 = ppcVar11;
        uStack_1010 = uVar28;
        ppcStack_1008 = ppcVar32;
        ppcStack_1000 = ppcVar12;
        ppcStack_ff8 = ppcVar38;
        pppppppuStack_ff0 = &pppppppuStack_b80;
        _strlen();
        if (bVar2 == 0x23 && ppcVar14 != (char **)0x0) {
          uStack_1040 = uStack_1040 & 0xffffffff00000000;
          bVar2 = *(byte *)ppcVar30;
          uVar22 = (uint)bVar2;
          if (bVar2 != 0) {
            ppcVar11 = (char **)&UNK_10f57e81c;
            uVar33 = 0;
            do {
              ppcVar18 = (char **)(ulong)(uint)(int)(char)bVar2;
              ppcVar19 = (char **)0x7;
              ppcVar12 = (char **)&UNK_10f57e81c;
              _memchr();
              uVar26 = uVar33;
              if (ppcVar12 != (char **)0x0) break;
              uVar26 = uVar33 + 1;
              bVar2 = *(byte *)((long)ppcVar30 + uVar33 + 1);
              uVar33 = uVar26;
            } while (bVar2 != 0);
            if ((int)uVar26 == 3) {
              puStack_10a0 = &uStack_1040;
              ppcVar18 = (char **)&UNK_10f4fd77a;
              _sscanf(ppcVar30);
              uVar22 = ((uint)uStack_1040 & 0xf0) << 4 | (uint)uStack_1040 & 0xf |
                       ((uint)uStack_1040 >> 8 & 0xf) << 0x10;
              uVar22 = uVar22 | uVar22 << 4;
            }
            else {
              ppcVar11 = (char **)&UNK_10f57e81c;
              if ((int)uVar26 == 6) {
                puStack_10a0 = &uStack_1040;
                ppcVar18 = (char **)&UNK_10f4fd77a;
                _sscanf(ppcVar30);
                uVar22 = (uint)uStack_1040;
              }
              else {
                uVar22 = 0;
              }
            }
          }
          ppcVar32 = (char **)(ulong)(uVar22 & 0xff00 | uVar22 >> 0x10 & 0xff |
                                     (uVar22 & 0xff) << 0x10);
        }
        else if ((((bVar2 == 0x72 && (char **)0x3 < ppcVar14) && (*(char *)ppcVar30 == 'g')) &&
                 (*(char *)((long)ppcVar11 + 2) == 'b')) && (*(char *)((long)ppcVar11 + 3) == '('))
        {
          iStack_1068 = -1;
          uStack_1064 = 0xffffffff;
          uStack_106c = 0xffffffff;
          uStack_1038 = 0;
          uStack_1040 = 0;
          uStack_1028 = 0;
          uStack_1030 = 0;
          uStack_1058 = 0;
          uStack_1060 = 0;
          uStack_1048 = 0;
          uStack_1050 = 0;
          puStack_1080 = &uStack_106c;
          puStack_1088 = &uStack_1060;
          piStack_1090 = &iStack_1068;
          puStack_1098 = &uStack_1040;
          puStack_10a0 = (ulong *)&uStack_1064;
          _sscanf((float *)((long)ppcVar11 + 4),&UNK_10f57e83b);
          puVar15 = &uStack_1040;
          ppcVar18 = (char **)0x25;
          _strchr();
          if (puVar15 == (ulong *)0x0) {
            uVar22 = uStack_1064 | iStack_1068 << 8;
            uVar36 = uStack_106c;
          }
          else {
            uVar22 = (uStack_1064 * 0xff) / 100 | (uint)(iStack_1068 * 0xff) / 100 << 8;
            uVar36 = (uStack_106c * 0xff) / 100;
          }
          ppcVar32 = (char **)(ulong)(uVar22 | uVar36 << 0x10);
        }
        else {
          ppcVar30 = (char **)&UNK_110b0af38;
          uVar26 = 10;
          do {
            iVar41 = (int)ppcVar30[-1];
            ppcVar18 = ppcVar11;
            _strcmp();
            if (iVar41 == 0) {
              ppcVar32 = (char **)(ulong)(uint)*(float *)ppcVar30;
              goto LAB_1096ef460;
            }
            ppcVar30 = ppcVar30 + 2;
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0);
          ppcVar32 = (char **)0x808080;
        }
LAB_1096ef460:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1018) {
          return ppcVar32;
        }
        ___stack_chk_fail();
        ppcVar7 = (char **)auStack_1160;
        pcStack_10a8 = FUN_1096ef4a0;
        pppppppuVar45 = &pppppppuStack_10b0;
        ppcVar12 = (char **)0x0;
        lStack_1118 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uStack_1110 = uVar68;
        pcStack_1108 = pcVar66;
        ppcStack_1100 = ppcVar44;
        ppcStack_10f8 = ppcVar43;
        ppcStack_10f0 = ppcVar42;
        ppcStack_10e8 = (char **)pcVar34;
        ppcStack_10e0 = ppcVar40;
        ppcStack_10d8 = (char **)pcVar31;
        uStack_10d0 = uVar28;
        uStack_10c8 = uVar26;
        ppcStack_10c0 = ppcVar11;
        ppcStack_10b8 = ppcVar30;
        pppppppuStack_10b0 = &pppppppuStack_ff0;
        if ((*(char *)ppcVar18 != '\0') && (*(char *)ppcVar18 != 'n')) {
          uVar22 = 0;
LAB_1096ef510:
          acStack_1158[0] = '\0';
          cVar20 = *(char *)ppcVar18;
          ppcVar11 = ppcVar18;
          while (cVar20 != '\0') {
            puVar16 = &UNK_10f57e81c;
            _memchr(&UNK_10f57e81c,(int)cVar20,7);
            if ((cVar20 != ',') && (puVar16 == (undefined *)0x0)) {
              iVar41 = 0;
              goto LAB_1096ef550;
            }
            ppcVar11 = (char **)((long)ppcVar11 + 1);
            cVar20 = *(char *)ppcVar11;
          }
          lVar23 = 0;
          goto LAB_1096ef590;
        }
LAB_1096ef624:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1118) {
          return ppcVar12;
        }
        uVar46 = 0x1096ef664;
        ___stack_chk_fail();
FUN_1096ef664:
        *(char ***)((long)ppcVar7 + -0x20) = ppcVar11;
        *(char ***)((long)ppcVar7 + -0x18) = ppcVar30;
        *(undefined8 ********)((long)ppcVar7 + -0x10) = pppppppuVar45;
        *(undefined8 *)((long)ppcVar7 + -8) = uVar46;
        ppcVar30 = ppcVar12;
        _strcmp();
        if ((int)ppcVar30 != 0) {
          ppcVar30 = ppcVar12;
          _strcmp(ppcVar12,"round");
          if ((int)ppcVar30 == 0) {
            ppcVar30 = (char **)0x1;
          }
          else {
            _strcmp(ppcVar12,"square");
            uVar22 = 2;
            if ((int)ppcVar12 != 0) {
              uVar22 = 0;
            }
            ppcVar30 = (char **)(ulong)uVar22;
          }
        }
        return ppcVar30;
      }
    }
  }
LAB_1096ec3f8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_990) {
    return ppcVar11;
  }
LAB_1096ec4d4:
  ___stack_chk_fail();
  if (ppcVar11 == (char **)0x0) {
    return (char **)0x0;
  }
  ppcStack_ae0 = unaff_x22;
  uStack_ad8 = (char **)param_4;
  fStack_ad0 = SUB84(pcVar17,0);
  fStack_acc = (float)((ulong)pcVar17 >> 0x20);
  fStack_ac8 = SUB84(ppcVar30,0);
  fStack_ac4 = (float)((ulong)ppcVar30 >> 0x20);
  uStack_ac0._0_4_ = SUB84(&pppppppuStack_8f0,0);
  uStack_ac0._4_4_ = (float)((ulong)&pppppppuStack_8f0 >> 0x20);
  pcStack_ab8 = FUN_1096ec4d8;
  uStack_ac0 = &pppppppuStack_8f0;
  pcVar17 = ppcVar11[1];
  while (pcVar17 != (char *)0x0) {
    pcVar34 = *(char **)(pcVar17 + 0xb0);
    FUN_1096ec558(*(undefined8 *)(pcVar17 + 0xa8));
    if ((pcVar17[0x40] & 0xfeU) == 2) {
      _free(*(undefined8 *)(pcVar17 + 0x48));
    }
    if ((pcVar17[0x50] & 0xfeU) == 2) {
      _free(*(undefined8 *)(pcVar17 + 0x58));
    }
    _free(pcVar17);
    pcVar17 = pcVar34;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(ppcVar11);
  return ppcVar11;
}



/* Entry: 1096ec4d8; end: 1096ec557;  */

void FUN_1096ec4d8(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + 8);
  while (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 0xb0);
    FUN_1096ec558(*(undefined8 *)(lVar2 + 0xa8));
    if ((*(byte *)(lVar2 + 0x40) & 0xfe) == 2) {
      _free(*(undefined8 *)(lVar2 + 0x48));
    }
    if ((*(byte *)(lVar2 + 0x50) & 0xfe) == 2) {
      _free(*(undefined8 *)(lVar2 + 0x58));
    }
    _free(lVar2);
    lVar2 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 1096ec558; end: 1096ec607;  */

void FUN_1096ec558(long *param_1)

{
  long *plVar1;
  
  while (param_1 != (long *)0x0) {
    plVar1 = (long *)param_1[4];
    if (*param_1 != 0) {
      _free();
    }
    _free(param_1);
    param_1 = plVar1;
  }
  return;
}



/* Entry: 1096ec608; end: 1096ed027;  */

void FUN_1096ec608(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,uint param_7,uint param_8,int param_9)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  byte bVar9;
  undefined1 uVar10;
  bool bVar11;
  long lVar12;
  float *pfVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  float *pfVar23;
  byte *pbVar24;
  byte *pbVar25;
  uint uVar26;
  long *plVar27;
  int iVar28;
  ulong uVar29;
  ulong uVar30;
  int iVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auStack_51c [1052];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined2 uStack_d4;
  undefined1 uStack_d2;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  float fStack_c0;
  
  *(long *)(param_4 + 0x68) = param_6;
  *(uint *)(param_4 + 0x70) = param_7;
  *(uint *)(param_4 + 0x74) = param_8;
  *(int *)(param_4 + 0x78) = param_9;
  if (*(int *)(param_4 + 0x60) < (int)param_7) {
    *(uint *)(param_4 + 0x60) = param_7;
    lVar12 = *(long *)(param_4 + 0x58);
    _realloc(lVar12,(long)(int)param_7);
    *(long *)(param_4 + 0x58) = lVar12;
    if (lVar12 == 0) {
      return;
    }
  }
  if (0 < (int)param_8) {
    uVar29 = (ulong)param_8;
    lVar12 = param_6;
    do {
      _bzero(lVar12,(long)(int)(param_7 << 2));
      lVar12 = lVar12 + param_9;
      uVar29 = uVar29 - 1;
    } while (uVar29 != 0);
  }
  uVar29 = param_2;
  for (lVar12 = *(long *)(param_5 + 8); lVar12 != 0; lVar12 = *(long *)(lVar12 + 0xb0)) {
    if ((*(byte *)(lVar12 + 0x95) & 1) != 0) {
      fVar39 = (float)param_3;
      fVar41 = (float)param_1;
      if (*(char *)(lVar12 + 0x40) != '\0') {
        lVar20 = *(long *)(param_4 + 0x48);
        for (lVar22 = lVar20; lVar22 != 0; lVar22 = *(long *)(lVar22 + 0x408)) {
          *(undefined4 *)(lVar22 + 0x400) = 0;
        }
        *(long *)(param_4 + 0x50) = lVar20;
        *(undefined8 *)(param_4 + 0x40) = 0;
        *(undefined4 *)(param_4 + 0x18) = 0;
        plVar27 = *(long **)(lVar12 + 0xa8);
        if (plVar27 == (long *)0x0) {
          uVar26 = 0;
          lVar22 = *(long *)(param_4 + 0x10);
        }
        else {
          do {
            *(undefined4 *)(param_4 + 0x28) = 0;
            func_0x0001096f0dc8(fVar39 * *(float *)*plVar27,fVar39 * ((float *)*plVar27)[1],param_4,
                                0);
            if (1 < (int)plVar27[1]) {
              lVar22 = 0;
              iVar28 = 0;
              do {
                pfVar23 = (float *)(*plVar27 + lVar22);
                FUN_1096f0e98(fVar39 * *pfVar23,fVar39 * pfVar23[1],fVar39 * pfVar23[2],
                              fVar39 * pfVar23[3],fVar39 * pfVar23[4],fVar39 * pfVar23[5],
                              fVar39 * pfVar23[6],fVar39 * pfVar23[7],param_4,0,0);
                iVar28 = iVar28 + 3;
                lVar22 = lVar22 + 0x18;
              } while (iVar28 < (int)plVar27[1] + -1);
            }
            func_0x0001096f0dc8(fVar39 * *(float *)*plVar27,fVar39 * ((float *)*plVar27)[1],param_4,
                                0);
            if (0 < *(int *)(param_4 + 0x28)) {
              lVar22 = 0;
              uVar21 = (ulong)(*(int *)(param_4 + 0x28) - 1);
              uVar30 = 0;
              do {
                puVar2 = (undefined4 *)(*(long *)(param_4 + 0x20) + (long)(int)uVar21 * 0x20);
                puVar3 = (undefined4 *)(*(long *)(param_4 + 0x20) + lVar22);
                FUN_1096f1024(*puVar2,puVar2[1],*puVar3,puVar3[1],param_4);
                uVar1 = uVar30 + 1;
                lVar22 = lVar22 + 0x20;
                uVar21 = uVar30;
                uVar30 = uVar1;
              } while ((long)uVar1 < (long)*(int *)(param_4 + 0x28));
            }
            plVar27 = (long *)plVar27[4];
          } while (plVar27 != (long *)0x0);
          uVar26 = *(uint *)(param_4 + 0x18);
          uVar21 = (ulong)uVar26;
          lVar22 = *(long *)(param_4 + 0x10);
          if (0 < (int)uVar26) {
            pfVar23 = (float *)(lVar22 + 8);
            do {
              pfVar23[-2] = fVar41 + pfVar23[-2];
              pfVar23[-1] = ((float)uVar29 + pfVar23[-1]) * 5.0;
              *pfVar23 = fVar41 + *pfVar23;
              pfVar23[1] = ((float)uVar29 + pfVar23[1]) * 5.0;
              uVar21 = uVar21 - 1;
              pfVar23 = pfVar23 + 8;
            } while (uVar21 != 0);
          }
        }
        _qsort(lVar22,(long)(int)uVar26,0x20,FUN_1096ed028);
        FUN_1096ed040(*(undefined4 *)(lVar12 + 0x60),auStack_51c,(char *)(lVar12 + 0x40));
        FUN_1096ed37c(param_1,uVar29,param_3,param_4,auStack_51c,(long)*(char *)(lVar12 + 0x94));
      }
      if ((*(char *)(lVar12 + 0x50) != '\0') &&
         (fVar35 = fVar39 * *(float *)(lVar12 + 100), 0.01 < fVar35)) {
        lVar20 = *(long *)(param_4 + 0x48);
        for (lVar22 = lVar20; lVar22 != 0; lVar22 = *(long *)(lVar22 + 0x408)) {
          *(undefined4 *)(lVar22 + 0x400) = 0;
        }
        *(long *)(param_4 + 0x50) = lVar20;
        *(undefined8 *)(param_4 + 0x40) = 0;
        *(undefined4 *)(param_4 + 0x18) = 0;
        plVar27 = *(long **)(lVar12 + 0xa8);
        if (plVar27 == (long *)0x0) {
          uVar26 = 0;
          lVar22 = *(long *)(param_4 + 0x10);
        }
        else {
          uVar32 = *(undefined4 *)(lVar12 + 0x90);
          lVar22 = (long)*(char *)(lVar12 + 0x8d);
          pfVar23 = (float *)(lVar12 + 0x6c);
          cVar6 = *(char *)(lVar12 + 0x8e);
          do {
            *(undefined4 *)(param_4 + 0x28) = 0;
            func_0x0001096f0dc8(fVar39 * *(float *)*plVar27,fVar39 * ((float *)*plVar27)[1],param_4,
                                1);
            if (1 < (int)plVar27[1]) {
              lVar20 = 0;
              iVar28 = 0;
              do {
                pfVar13 = (float *)(*plVar27 + lVar20);
                FUN_1096f0e98(fVar39 * *pfVar13,fVar39 * pfVar13[1],fVar39 * pfVar13[2],
                              fVar39 * pfVar13[3],fVar39 * pfVar13[4],fVar39 * pfVar13[5],
                              fVar39 * pfVar13[6],fVar39 * pfVar13[7],param_4,0,1);
                iVar28 = iVar28 + 3;
                lVar20 = lVar20 + 0x18;
              } while (iVar28 < (int)plVar27[1] + -1);
            }
            uVar26 = *(uint *)(param_4 + 0x28);
            uVar21 = (ulong)uVar26;
            if (1 < (int)uVar26) {
              pfVar13 = *(float **)(param_4 + 0x20);
              if ((pfVar13[1] - pfVar13[uVar21 * 8 + -7]) * (pfVar13[1] - pfVar13[uVar21 * 8 + -7])
                  + (*pfVar13 - pfVar13[uVar21 * 8 + -8]) * (*pfVar13 - pfVar13[uVar21 * 8 + -8]) <
                  *(float *)(param_4 + 0xc) * *(float *)(param_4 + 0xc)) {
                uVar21 = (ulong)(uVar26 - 1);
                *(uint *)(param_4 + 0x28) = uVar26 - 1;
                if ('\0' < *(char *)(lVar12 + 0x8c)) {
LAB_1096eca38:
                  uStack_f8 = *(undefined8 *)(pfVar13 + 2);
                  uStack_100 = *(undefined8 *)pfVar13;
                  uStack_e8 = *(undefined8 *)(pfVar13 + 6);
                  uStack_f0 = *(undefined8 *)(pfVar13 + 4);
                  FUN_1096f11bc(param_4,&uStack_100);
                  uVar21 = (ulong)*(uint *)(param_4 + 0x28);
                  goto LAB_1096eca54;
                }
                lVar20 = 1;
LAB_1096ecd44:
                FUN_1096f1238(uVar32,pfVar13,uVar21,lVar22);
                uVar14 = *(undefined8 *)(param_4 + 0x20);
                iVar28 = *(int *)(param_4 + 0x28);
              }
              else {
                lVar20 = (long)*(char *)((long)plVar27 + 0xc);
                if (*(char *)(lVar12 + 0x8c) < '\x01') goto LAB_1096ecd44;
                if (*(char *)((long)plVar27 + 0xc) != '\0') goto LAB_1096eca38;
LAB_1096eca54:
                if (*(int *)(param_4 + 0x3c) < (int)uVar21) {
                  *(int *)(param_4 + 0x3c) = (int)uVar21;
                  uVar14 = *(undefined8 *)(param_4 + 0x30);
                  _realloc(uVar14,-(uVar21 >> 0x1f) & 0xffffffe000000000 | uVar21 << 5);
                  *(undefined8 *)(param_4 + 0x30) = uVar14;
                }
                _memcpy();
                *(undefined4 *)(param_4 + 0x38) = *(undefined4 *)(param_4 + 0x28);
                pfVar13 = *(float **)(param_4 + 0x30);
                *(undefined4 *)(param_4 + 0x28) = 0;
                fVar45 = *pfVar13;
                fVar42 = pfVar13[1];
                uStack_100 = *(undefined8 *)pfVar13;
                uStack_c8 = *(undefined8 *)(pfVar13 + 4);
                uStack_d0 = *(undefined8 *)(pfVar13 + 2);
                fStack_c0 = pfVar13[6];
                uStack_d4 = *(undefined2 *)((long)pfVar13 + 0x1d);
                uStack_d2 = *(undefined1 *)((long)pfVar13 + 0x1f);
                uStack_f0 = *(undefined8 *)(pfVar13 + 4);
                uStack_f8 = *(undefined8 *)(pfVar13 + 2);
                uStack_e8 = *(undefined8 *)(pfVar13 + 6);
                FUN_1096f11bc(param_4,&uStack_100);
                cVar7 = *(char *)(lVar12 + 0x8c);
                fVar33 = 0.0;
                pfVar13 = pfVar23;
                uVar21 = (long)cVar7;
                if ('\0' < cVar7) {
                  do {
                    fVar33 = fVar33 + *pfVar13;
                    uVar21 = uVar21 - 1;
                    pfVar13 = pfVar13 + 1;
                  } while (uVar21 != 0);
                }
                iVar28 = (int)cVar7;
                if (((long)cVar7 & 1U) != 0) {
                  fVar33 = fVar33 + fVar33;
                }
                fVar34 = *(float *)(lVar12 + 0x68);
                _fmodf(fVar34,fVar33);
                fVar33 = fVar33 + fVar34;
                if (0.0 <= fVar34) {
                  fVar33 = fVar34;
                }
                iVar31 = 0;
                fVar34 = *(float *)(lVar12 + 0x6c);
                while (fVar34 < fVar33) {
                  fVar33 = fVar33 - fVar34;
                  iVar8 = 0;
                  if (iVar28 != 0) {
                    iVar8 = (iVar31 + 1) / iVar28;
                  }
                  iVar31 = (iVar31 + 1) - iVar8 * iVar28;
                  fVar34 = pfVar23[iVar31];
                }
                if (*(int *)(param_4 + 0x38) < 2) {
                  bVar11 = true;
                }
                else {
                  fVar34 = fVar39 * (fVar34 - fVar33);
                  fVar33 = 0.0;
                  iVar28 = 1;
                  bVar11 = true;
                  do {
                    pfVar13 = (float *)(*(long *)(param_4 + 0x30) + (long)iVar28 * 0x20);
                    fVar43 = *pfVar13;
                    fVar44 = pfVar13[1];
                    fVar36 = fVar43 - fVar45;
                    fVar37 = fVar44 - fVar42;
                    fVar38 = SQRT(fVar37 * fVar37 + fVar36 * fVar36);
                    fVar40 = fVar33 + fVar38;
                    if (fVar40 <= fVar34) {
                      uStack_c8 = *(undefined8 *)(pfVar13 + 4);
                      uStack_d0 = *(undefined8 *)(pfVar13 + 2);
                      fStack_c0 = pfVar13[6];
                      uStack_d4 = *(undefined2 *)((long)pfVar13 + 0x1d);
                      uStack_d2 = *(undefined1 *)((long)pfVar13 + 0x1f);
                      uStack_f0 = *(undefined8 *)(pfVar13 + 4);
                      uStack_f8 = *(undefined8 *)(pfVar13 + 2);
                      uStack_e8 = *(undefined8 *)(pfVar13 + 6);
                      uStack_100 = *(undefined8 *)pfVar13;
                      FUN_1096f11bc(param_4,&uStack_100);
                      iVar28 = iVar28 + 1;
                      fVar33 = fVar40;
                      fVar42 = fVar44;
                      fVar45 = fVar43;
                    }
                    else {
                      fVar38 = (fVar34 - fVar33) / fVar38;
                      fVar45 = fVar45 + fVar38 * fVar36;
                      fVar42 = fVar42 + fVar38 * fVar37;
                      func_0x0001096f0dc8(fVar45,fVar42,param_4,1);
                      if ((1 < *(int *)(param_4 + 0x28)) && (bVar11)) {
                        FUN_1096f1238(uVar32,*(undefined8 *)(param_4 + 0x20),
                                      *(int *)(param_4 + 0x28),lVar22);
                        FUN_1096f1364(fVar35,param_4,*(undefined8 *)(param_4 + 0x20),
                                      *(undefined4 *)(param_4 + 0x28),0,lVar22,(int)cVar6);
                      }
                      cVar7 = *(char *)(lVar12 + 0x8c);
                      iVar8 = 0;
                      if (cVar7 != 0) {
                        iVar8 = (iVar31 + 1) / (int)cVar7;
                      }
                      iVar31 = (iVar31 + 1) - iVar8 * cVar7;
                      fVar34 = pfVar23[iVar31];
                      *(undefined4 *)(param_4 + 0x28) = 0;
                      bVar11 = !bVar11;
                      fVar34 = fVar39 * fVar34;
                      uStack_100 = CONCAT44(fVar42,fVar45);
                      uStack_f0 = uStack_c8;
                      uStack_f8 = uStack_d0;
                      uStack_e8 = CONCAT17(uStack_d2,CONCAT25(uStack_d4,CONCAT14(1,fStack_c0)));
                      FUN_1096f11bc(param_4,&uStack_100);
                      fVar33 = 0.0;
                    }
                  } while (iVar28 < *(int *)(param_4 + 0x38));
                  uVar29 = param_2 & 0xffffffff;
                }
                iVar28 = *(int *)(param_4 + 0x28);
                if ((iVar28 < 2) || (!bVar11)) goto LAB_1096ecd70;
                uVar14 = *(undefined8 *)(param_4 + 0x20);
                lVar20 = 0;
              }
              FUN_1096f1364(fVar35,param_4,uVar14,iVar28,lVar20,lVar22,(int)cVar6);
            }
LAB_1096ecd70:
            plVar27 = (long *)plVar27[4];
          } while (plVar27 != (long *)0x0);
          uVar26 = *(uint *)(param_4 + 0x18);
          uVar21 = (ulong)uVar26;
          lVar22 = *(long *)(param_4 + 0x10);
          if (0 < (int)uVar26) {
            pfVar23 = (float *)(lVar22 + 8);
            do {
              pfVar23[-2] = fVar41 + pfVar23[-2];
              pfVar23[-1] = ((float)uVar29 + pfVar23[-1]) * 5.0;
              *pfVar23 = fVar41 + *pfVar23;
              pfVar23[1] = ((float)uVar29 + pfVar23[1]) * 5.0;
              uVar21 = uVar21 - 1;
              pfVar23 = pfVar23 + 8;
            } while (uVar21 != 0);
          }
        }
        _qsort(lVar22,(long)(int)uVar26,0x20,FUN_1096ed028);
        FUN_1096ed040(*(undefined4 *)(lVar12 + 0x60),auStack_51c,(char *)(lVar12 + 0x50));
        FUN_1096ed37c(param_1,uVar29,param_3,param_4,auStack_51c,0);
      }
    }
  }
  if (0 < (int)param_8) {
    uVar29 = 0;
    lVar12 = (long)param_9;
    uVar21 = (ulong)param_8;
    pbVar24 = (byte *)(param_6 + 1);
    do {
      pbVar25 = pbVar24;
      uVar26 = param_7;
      if (0 < (int)param_7) {
        do {
          bVar5 = pbVar25[2];
          if (bVar5 != 0) {
            bVar9 = 0;
            uVar16 = (uint)bVar5;
            if (bVar5 != 0) {
              bVar9 = (byte)(((uint)pbVar25[-1] * 0xff) / uVar16);
            }
            pbVar25[-1] = bVar9;
            bVar5 = 0;
            if (uVar16 != 0) {
              bVar5 = (byte)(((uint)*pbVar25 * 0xff) / uVar16);
            }
            *pbVar25 = bVar5;
            bVar5 = 0;
            if (uVar16 != 0) {
              bVar5 = (byte)(((uint)pbVar25[1] * 0xff) / uVar16);
            }
            pbVar25[1] = bVar5;
          }
          uVar26 = uVar26 - 1;
          pbVar25 = pbVar25 + 4;
        } while (uVar26 != 0);
      }
      uVar29 = uVar29 + 1;
      pbVar24 = pbVar24 + lVar12;
    } while (uVar29 != uVar21);
    uVar29 = 0;
    do {
      if (0 < (int)param_7) {
        uVar26 = 0;
        puVar15 = (undefined1 *)(param_6 + uVar29 * lVar12);
        do {
          if (puVar15[3] == '\0') {
            if (uVar26 < 2) {
              uVar16 = 0;
LAB_1096ecf14:
              uVar17 = 0;
              uVar18 = 0;
              uVar19 = 0;
            }
            else {
              uVar16 = (uint)(byte)puVar15[-1];
              if (puVar15[-1] == 0) goto LAB_1096ecf14;
              uVar16 = (uint)(byte)puVar15[-4];
              uVar17 = (uint)(byte)puVar15[-3];
              uVar19 = 1;
              uVar18 = (uint)(byte)puVar15[-2];
            }
            if (((int)(uVar26 + 1) < (int)param_7) && (puVar15[7] != '\0')) {
              uVar16 = uVar16 + (byte)puVar15[4];
              uVar17 = uVar17 + (byte)puVar15[5];
              uVar18 = uVar18 + (byte)puVar15[6];
              uVar19 = uVar19 + 1;
            }
            if ((1 < uVar29) && (puVar15[3 - param_9] != '\0')) {
              uVar16 = uVar16 + (byte)puVar15[-param_9];
              uVar17 = uVar17 + (byte)puVar15[1 - param_9];
              uVar18 = uVar18 + (byte)puVar15[2 - param_9];
              uVar19 = uVar19 + 1;
            }
            if ((uVar29 + 1 < uVar21) && (pcVar4 = puVar15 + lVar12 + 3, *pcVar4 != '\0')) {
              uVar16 = uVar16 + (byte)pcVar4[-3];
              uVar17 = uVar17 + (byte)pcVar4[-2];
              uVar18 = uVar18 + (byte)pcVar4[-1];
              uVar19 = uVar19 + 1;
            }
            else if (uVar19 == 0) goto LAB_1096ecfcc;
            uVar10 = 0;
            if (uVar19 != 0) {
              uVar10 = (undefined1)(uVar16 / uVar19);
            }
            *puVar15 = uVar10;
            uVar10 = 0;
            if (uVar19 != 0) {
              uVar10 = (undefined1)(uVar17 / uVar19);
            }
            puVar15[1] = uVar10;
            uVar10 = 0;
            if (uVar19 != 0) {
              uVar10 = (undefined1)(uVar18 / uVar19);
            }
            puVar15[2] = uVar10;
          }
LAB_1096ecfcc:
          puVar15 = puVar15 + 4;
          uVar26 = uVar26 + 1;
        } while (param_7 != uVar26);
      }
      uVar29 = uVar29 + 1;
    } while (uVar29 != uVar21);
  }
  *(long *)(param_4 + 0x68) = 0;
  *(undefined8 *)(param_4 + 0x70) = 0;
  *(undefined4 *)(param_4 + 0x78) = 0;
  return;
}



/* Entry: 1096ed028; end: 1096ed03f;  */

uint FUN_1096ed028(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*(float *)(param_2 + 4) < *(float *)(param_1 + 4));
  if (*(float *)(param_1 + 4) < *(float *)(param_2 + 4)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 1096ed040; end: 1096ed37b;  */

void FUN_1096ed040(float param_1,char *param_2,char *param_3)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  cVar2 = *param_3;
  *param_2 = cVar2;
  if (cVar2 == '\x01') {
    fVar21 = 1.0;
    if (param_1 <= 1.0) {
      fVar21 = param_1;
    }
    fVar15 = 0.0;
    if (0.0 <= param_1) {
      fVar15 = fVar21 * 256.0;
    }
    *(uint *)(param_2 + 0x1c) =
         (*(uint *)(param_3 + 8) >> 8 & 0xff0000) * (int)fVar15 & 0xff000000 |
         *(uint *)(param_3 + 8) & 0xffffff;
  }
  else {
    puVar13 = *(undefined8 **)(param_3 + 8);
    param_2[1] = *(char *)(puVar13 + 3);
    uVar17 = puVar13[1];
    uVar16 = *puVar13;
    *(undefined8 *)(param_2 + 0x14) = puVar13[2];
    *(undefined8 *)(param_2 + 0xc) = uVar17;
    *(undefined8 *)(param_2 + 4) = uVar16;
    iVar12 = *(int *)((long)puVar13 + 0x24);
    if (iVar12 == 0) {
      _bzero(param_2 + 0x1c,0x400);
      iVar12 = *(int *)((long)puVar13 + 0x24);
    }
    puVar6 = (uint *)(puVar13 + 5);
    if (iVar12 == 1) {
      lVar8 = 0;
      fVar21 = 1.0;
      if (param_1 <= 1.0) {
        fVar21 = param_1;
      }
      fVar15 = 0.0;
      if (0.0 <= param_1) {
        fVar15 = fVar21 * 256.0;
      }
      do {
        *(uint *)(param_2 + lVar8 + 0x1c) =
             (*puVar6 >> 8 & 0xff0000) * (int)fVar15 & 0xff000000 | *puVar6 & 0xffffff;
        lVar8 = lVar8 + 4;
        puVar6 = puVar6 + 2;
      } while (lVar8 != 0x400);
    }
    else {
      fVar21 = 1.0;
      if (param_1 <= 1.0) {
        fVar21 = param_1;
      }
      fVar15 = 0.0;
      if (0.0 <= param_1) {
        fVar15 = fVar21 * 256.0;
      }
      iVar7 = (int)fVar15;
      fVar15 = *(float *)((long)puVar13 + 0x2c);
      fVar21 = 1.0;
      if (fVar15 <= 1.0) {
        fVar21 = fVar15;
      }
      fVar20 = 0.0;
      if (0.0 <= fVar15) {
        fVar20 = fVar21;
      }
      fVar19 = (float)puVar6[(long)iVar12 * 2 + -1];
      fVar21 = 1.0;
      if (fVar19 <= 1.0) {
        fVar21 = fVar19;
      }
      fVar18 = fVar20;
      if (fVar20 <= fVar19) {
        fVar18 = fVar21;
      }
      uVar5 = (ulong)(uint)(int)(fVar20 * 255.0);
      if (0 < (int)(fVar20 * 255.0)) {
        uVar9 = *(uint *)(puVar13 + 5);
        puVar10 = (uint *)(param_2 + 0x1c);
        do {
          *puVar10 = (uVar9 >> 8 & 0xff0000) * iVar7 & 0xff000000 | uVar9 & 0xffffff;
          uVar5 = uVar5 - 1;
          puVar10 = puVar10 + 1;
        } while (uVar5 != 0);
        iVar12 = *(int *)((long)puVar13 + 0x24);
      }
      if (iVar12 < 2) {
        uVar9 = 0;
        iVar11 = (int)(fVar18 * 255.0);
      }
      else {
        lVar8 = 0;
        do {
          lVar1 = lVar8 + 1;
          uVar9 = puVar6[lVar1 * 2];
          uVar3 = (uVar9 >> 8 & 0xff0000) * iVar7;
          fVar21 = 1.0;
          if (fVar15 <= 1.0) {
            fVar21 = fVar15;
          }
          fVar19 = (float)(puVar6 + lVar1 * 2)[1];
          fVar20 = 1.0;
          if (fVar19 <= 1.0) {
            fVar20 = fVar19;
          }
          fVar18 = 0.0;
          if (0.0 <= fVar15) {
            fVar18 = fVar21 * 255.0;
          }
          fVar21 = 0.0;
          if (0.0 <= fVar19) {
            fVar21 = fVar20 * 255.0;
          }
          iVar11 = (int)fVar21;
          uVar4 = iVar11 - (int)fVar18;
          uVar5 = (ulong)uVar4;
          if (0 < (int)uVar4) {
            uVar4 = puVar6[lVar8 * 2];
            fVar21 = (float)uVar5;
            fVar15 = 0.0;
            puVar10 = (uint *)(param_2 + (long)(int)fVar18 * 4 + 0x1c);
            do {
              fVar20 = 1.0;
              if (fVar15 <= 1.0) {
                fVar20 = fVar15;
              }
              fVar18 = 0.0;
              if (0.0 <= fVar15) {
                fVar18 = fVar20 * 256.0;
              }
              iVar14 = (int)fVar18;
              iVar12 = 0x100 - iVar14;
              *puVar10 = (uVar9 >> 8 & 0xff) * iVar14 + iVar12 * (uVar4 >> 8 & 0xff) & 0xff00 |
                         (uVar9 & 0xff) * iVar14 + iVar12 * (uVar4 & 0xff) >> 8 & 0xff |
                         ((uVar9 >> 0x10 & 0xff) * iVar14 + iVar12 * (uVar4 >> 0x10 & 0xff) >> 8 &
                         0xff) << 0x10 |
                         ((uVar3 >> 0x18) * iVar14 +
                          iVar12 * ((uVar4 >> 8 & 0xff0000) * iVar7 >> 0x18) >> 8) << 0x18;
              fVar15 = 1.0 / fVar21 + fVar15;
              uVar5 = uVar5 - 1;
              puVar10 = puVar10 + 1;
            } while (uVar5 != 0);
            iVar12 = *(int *)((long)puVar13 + 0x24);
          }
          lVar8 = lVar1;
          fVar15 = fVar19;
        } while (lVar1 < iVar12 + -1);
        uVar9 = uVar3 & 0xff000000 | uVar9 & 0xffffff;
      }
      if (iVar11 < 0x100) {
        puVar6 = (uint *)(param_2 + (long)iVar11 * 4 + 0x1c);
        do {
          iVar11 = iVar11 + 1;
          *puVar6 = uVar9;
          puVar6 = puVar6 + 1;
        } while (iVar11 != 0x100);
      }
    }
  }
  return;
}



/* Entry: 1096ed37c; end: 1096eda6b;  */

void FUN_1096ed37c(float param_1,float param_2,long param_3,char *param_4,int param_5)

{
  uint *puVar1;
  float *pfVar2;
  long *plVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  long lVar10;
  bool bVar11;
  int **ppiVar12;
  int **ppiVar13;
  uint *puVar14;
  int iVar15;
  byte *pbVar16;
  int *piVar17;
  int *piVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  int *piVar22;
  undefined8 uVar23;
  int iVar24;
  int *piVar25;
  ulong uVar26;
  ulong uVar27;
  byte bVar28;
  float fVar29;
  undefined1 in_b1;
  undefined1 uVar30;
  undefined1 in_register_00005021;
  undefined1 uVar31;
  undefined1 in_register_00005022;
  undefined1 uVar32;
  undefined1 in_register_00005023;
  undefined1 uVar33;
  uint uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  int iStack_b8;
  uint uStack_b4;
  int *apiStack_b0 [2];
  
  fVar9 = (float)CONCAT13(in_register_00005023,
                          CONCAT12(in_register_00005022,CONCAT11(in_register_00005021,in_b1)));
  apiStack_b0[0] = (int *)0x0;
  if (0 < *(int *)(param_3 + 0x74)) {
    piVar25 = (int *)0x0;
    uVar19 = 0;
    uVar26 = 0;
    puVar1 = (uint *)(param_4 + 0x1c);
    do {
      _bzero(*(undefined8 *)(param_3 + 0x58),(long)*(int *)(param_3 + 0x70));
      iVar20 = 0;
      uStack_b4 = *(uint *)(param_3 + 0x70);
      iStack_b8 = 0;
      do {
        fVar37 = (float)(iVar20 + uVar19 * 5) + 0.5;
        if (piVar25 != (int *)0x0) {
          ppiVar12 = apiStack_b0;
          do {
            if ((float)piVar25[2] <= fVar37) {
              *ppiVar12 = *(int **)(piVar25 + 4);
              *(undefined8 *)(piVar25 + 4) = *(undefined8 *)(param_3 + 0x40);
              *(int **)(param_3 + 0x40) = piVar25;
            }
            else {
              *piVar25 = *piVar25 + piVar25[1];
              ppiVar12 = (int **)(piVar25 + 4);
            }
            piVar25 = *ppiVar12;
          } while (piVar25 != (int *)0x0);
          piVar25 = apiStack_b0[0];
          if (apiStack_b0[0] != (int *)0x0) {
            bVar11 = false;
            ppiVar12 = apiStack_b0;
LAB_1096ed4a4:
            do {
              piVar22 = piVar25;
              ppiVar13 = ppiVar12;
              piVar25 = *(int **)(piVar22 + 4);
              if (piVar25 == (int *)0x0) {
                bVar11 = !bVar11;
              }
              else {
                ppiVar12 = (int **)(piVar22 + 4);
                if (*piVar22 <= *piVar25) goto LAB_1096ed4a4;
                ppiVar12 = (int **)(piVar25 + 4);
                *(int **)(piVar22 + 4) = *ppiVar12;
                *ppiVar12 = piVar22;
                *ppiVar13 = piVar25;
                bVar11 = true;
                piVar25 = *ppiVar12;
                if (*ppiVar12 != (int *)0x0) goto LAB_1096ed4a4;
                bVar11 = false;
              }
              piVar25 = apiStack_b0[0];
              if (bVar11) break;
              bVar11 = false;
              ppiVar12 = apiStack_b0;
            } while (apiStack_b0[0] != (int *)0x0);
          }
        }
        uVar4 = *(uint *)(param_3 + 0x18);
        if ((int)uVar26 < (int)uVar4) {
          uVar27 = (ulong)(int)uVar26;
          piVar22 = piVar25;
          do {
            pfVar2 = (float *)(*(long *)(param_3 + 0x10) + uVar27 * 0x20);
            fVar38 = pfVar2[1];
            piVar25 = piVar22;
            uVar26 = uVar27;
            if (fVar37 < fVar38) break;
            fVar36 = pfVar2[3];
            if (fVar37 < fVar36) {
              piVar25 = *(int **)(param_3 + 0x40);
              if (piVar25 == (int *)0x0) {
                lVar21 = *(long *)(param_3 + 0x50);
                if (lVar21 == 0) {
LAB_1096ed570:
                  lVar10 = 1;
                  _calloc(1,0x410);
                  plVar3 = (long *)(param_3 + 0x48);
                  if (lVar21 != 0) {
                    plVar3 = (long *)(lVar21 + 0x408);
                  }
                  *plVar3 = lVar10;
LAB_1096ed590:
                  *(long *)(param_3 + 0x50) = lVar10;
                  iVar15 = *(int *)(lVar10 + 0x400);
                }
                else {
                  iVar15 = *(int *)(lVar21 + 0x400);
                  lVar10 = lVar21;
                  if (1000 < iVar15) {
                    lVar10 = *(long *)(lVar21 + 0x408);
                    if (lVar10 == 0) goto LAB_1096ed570;
                    goto LAB_1096ed590;
                  }
                }
                *(int *)(lVar10 + 0x400) = iVar15 + 0x18;
                piVar25 = (int *)(lVar10 + iVar15);
              }
              else {
                *(undefined8 *)(param_3 + 0x40) = *(undefined8 *)(piVar25 + 4);
              }
              fVar29 = (pfVar2[2] - *pfVar2) / (fVar36 - fVar38);
              fVar35 = (float)(int)(fVar29 * 1024.0);
              if (fVar29 < 0.0) {
                fVar35 = -(float)(int)(fVar29 * -1024.0);
              }
              iVar15 = (int)((*pfVar2 + (fVar37 - fVar38) * fVar29) * 1024.0);
              *piVar25 = iVar15;
              piVar25[1] = (int)fVar35;
              piVar25[2] = (int)fVar36;
              piVar25[4] = 0;
              piVar25[5] = 0;
              piVar25[3] = (int)pfVar2[4];
              if (piVar22 != (int *)0x0) {
                piVar18 = piVar22;
                if (iVar15 < *piVar22) {
                  *(int **)(piVar25 + 4) = piVar22;
                }
                else {
                  do {
                    piVar17 = piVar18;
                    piVar18 = *(int **)(piVar17 + 4);
                    if (piVar18 == (int *)0x0) break;
                  } while (*piVar18 < iVar15);
                  *(int **)(piVar25 + 4) = piVar18;
                  *(int **)(piVar17 + 4) = piVar25;
                  piVar25 = piVar22;
                }
              }
            }
            uVar27 = uVar27 + 1;
            piVar22 = piVar25;
            uVar26 = (ulong)uVar4;
          } while (uVar27 != (long)(int)uVar4);
        }
        apiStack_b0[0] = piVar25;
        if (piVar25 != (int *)0x0) {
          uVar23 = *(undefined8 *)(param_3 + 0x58);
          uVar5 = *(undefined4 *)(param_3 + 0x70);
          if (param_5 == 0) {
            iVar24 = 0;
            iVar15 = 0;
            piVar22 = piVar25;
            do {
              if (iVar15 == 0) {
                iVar24 = *piVar22;
                iVar15 = piVar22[3];
              }
              else {
                iVar15 = piVar22[3] + iVar15;
                if (iVar15 == 0) {
                  FUN_1096f10e4(uVar23,uVar5,iVar24,*piVar22,&uStack_b4,&iStack_b8);
                  iVar15 = 0;
                }
              }
              piVar22 = *(int **)(piVar22 + 4);
            } while (piVar22 != (int *)0x0);
          }
          else if (param_5 == 1) {
            bVar11 = false;
            piVar22 = piVar25;
            iVar15 = 0;
            do {
              iVar24 = *piVar22;
              if (bVar11) {
                FUN_1096f10e4(uVar23,uVar5,iVar15,iVar24,&uStack_b4,&iStack_b8);
                iVar24 = iVar15;
              }
              bVar11 = !bVar11;
              piVar22 = *(int **)(piVar22 + 4);
              iVar15 = iVar24;
            } while (piVar22 != (int *)0x0);
          }
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 != 5);
      uStack_b4 = uStack_b4 & ((int)uStack_b4 >> 0x1f ^ 0xffffffffU);
      if (*(int *)(param_3 + 0x70) <= iStack_b8) {
        iStack_b8 = *(int *)(param_3 + 0x70) + -1;
      }
      if ((int)uStack_b4 <= iStack_b8) {
        puVar14 = (uint *)(*(long *)(param_3 + 0x68) +
                           (long)*(int *)(param_3 + 0x78) * (long)(int)uVar19 +
                          (ulong)(uStack_b4 << 2));
        pbVar16 = (byte *)(*(long *)(param_3 + 0x58) + (ulong)uStack_b4);
        cVar6 = *param_4;
        if (cVar6 == '\x03') {
          fVar38 = ((float)uVar19 - fVar9) / param_2;
          iVar20 = (iStack_b8 - uStack_b4) + 1;
          fVar37 = ((float)uStack_b4 - param_1) / param_2;
          uVar30 = SUB41(fVar37,0);
          uVar31 = (undefined1)((uint)fVar37 >> 8);
          uVar32 = (undefined1)((uint)fVar37 >> 0x10);
          uVar33 = (undefined1)((uint)fVar37 >> 0x18);
          do {
            fVar36 = *(float *)(param_4 + 0x14) +
                     fVar38 * *(float *)(param_4 + 0xc) +
                     *(float *)(param_4 + 4) *
                     (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)));
            fVar37 = *(float *)(param_4 + 0x18) +
                     fVar38 * *(float *)(param_4 + 0x10) +
                     *(float *)(param_4 + 8) *
                     (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)));
            fVar36 = SQRT(fVar37 * fVar37 + fVar36 * fVar36) * 255.0;
            fVar37 = 255.0;
            if (fVar36 <= 255.0) {
              fVar37 = fVar36;
            }
            fVar35 = 0.0;
            if (0.0 <= fVar36) {
              fVar35 = fVar37;
            }
            uVar8 = puVar1[(int)fVar35];
            uVar4 = (uVar8 >> 0x18) * (uint)*pbVar16 * 0x101 + 0x101;
            iVar15 = (uVar4 >> 0x10) * 0x100 + (uVar4 >> 0x10);
            uVar27 = CONCAT44(uVar8 >> 8,uVar8) & 0xff000000ff;
            uVar7 = *puVar14;
            iVar24 = (uVar4 >> 0x10 ^ 0xff) * 0x101;
            bVar28 = (byte)(uVar7 >> 8);
            *puVar14 = CONCAT13((char)(uVar4 >> 0x10) +
                                (char)(iVar24 * (uVar7 >> 0x18) + 0x101 >> 0x10),
                                CONCAT12((char)(iVar15 * (uVar8 >> 0x10 & 0xff) + 0x101 >> 0x10) +
                                         (char)(iVar24 * (uVar7 >> 0x10 & 0xff) + 0x101 >> 0x10),
                                         CONCAT11((char)((uint)(iVar15 * (int)(uVar27 >> 0x20) +
                                                               0x101) >> 0x10) +
                                                  (char)(iVar24 * (uint)bVar28 + 0x101 >> 0x10),
                                                  (char)((uint)(iVar15 * (int)uVar27 + 0x101) >>
                                                        0x10) +
                                                  (char)(iVar24 * (CONCAT12(bVar28,(ushort)(byte)
                                                  uVar7) & 0xffff) + 0x101 >> 0x10))));
            puVar14 = puVar14 + 1;
            fVar37 = 1.0 / param_2 +
                     (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)));
            uVar30 = SUB41(fVar37,0);
            uVar31 = (undefined1)((uint)fVar37 >> 8);
            uVar32 = (undefined1)((uint)fVar37 >> 0x10);
            uVar33 = (undefined1)((uint)fVar37 >> 0x18);
            iVar20 = iVar20 + -1;
            pbVar16 = pbVar16 + 1;
          } while (iVar20 != 0);
        }
        else if (cVar6 == '\x02') {
          iVar20 = (iStack_b8 - uStack_b4) + 1;
          fVar37 = ((float)uStack_b4 - param_1) / param_2;
          uVar30 = SUB41(fVar37,0);
          uVar31 = (undefined1)((uint)fVar37 >> 8);
          uVar32 = (undefined1)((uint)fVar37 >> 0x10);
          uVar33 = (undefined1)((uint)fVar37 >> 0x18);
          do {
            fVar38 = (*(float *)(param_4 + 0x18) +
                     (((float)uVar19 - fVar9) / param_2) * *(float *)(param_4 + 0x10) +
                     *(float *)(param_4 + 8) *
                     (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)))) * 255.0;
            fVar37 = 255.0;
            if (fVar38 <= 255.0) {
              fVar37 = fVar38;
            }
            fVar36 = 0.0;
            if (0.0 <= fVar38) {
              fVar36 = fVar37;
            }
            uVar8 = puVar1[(int)fVar36];
            uVar4 = (uVar8 >> 0x18) * (uint)*pbVar16 * 0x101 + 0x101;
            iVar15 = (uVar4 >> 0x10) * 0x100 + (uVar4 >> 0x10);
            uVar27 = CONCAT44(uVar8 >> 8,uVar8) & 0xff000000ff;
            uVar7 = *puVar14;
            iVar24 = (uVar4 >> 0x10 ^ 0xff) * 0x101;
            bVar28 = (byte)(uVar7 >> 8);
            *puVar14 = CONCAT13((char)(uVar4 >> 0x10) +
                                (char)(iVar24 * (uVar7 >> 0x18) + 0x101 >> 0x10),
                                CONCAT12((char)(iVar15 * (uVar8 >> 0x10 & 0xff) + 0x101 >> 0x10) +
                                         (char)(iVar24 * (uVar7 >> 0x10 & 0xff) + 0x101 >> 0x10),
                                         CONCAT11((char)((uint)(iVar15 * (int)(uVar27 >> 0x20) +
                                                               0x101) >> 0x10) +
                                                  (char)(iVar24 * (uint)bVar28 + 0x101 >> 0x10),
                                                  (char)((uint)(iVar15 * (int)uVar27 + 0x101) >>
                                                        0x10) +
                                                  (char)(iVar24 * (CONCAT12(bVar28,(ushort)(byte)
                                                  uVar7) & 0xffff) + 0x101 >> 0x10))));
            puVar14 = puVar14 + 1;
            fVar37 = 1.0 / param_2 +
                     (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)));
            uVar30 = SUB41(fVar37,0);
            uVar31 = (undefined1)((uint)fVar37 >> 8);
            uVar32 = (undefined1)((uint)fVar37 >> 0x10);
            uVar33 = (undefined1)((uint)fVar37 >> 0x18);
            iVar20 = iVar20 + -1;
            pbVar16 = pbVar16 + 1;
          } while (iVar20 != 0);
        }
        else if (cVar6 == '\x01') {
          uVar4 = *puVar1;
          uVar8 = uVar4 >> 0x10 & 0xff;
          uVar27 = CONCAT44(uVar4 >> 8,uVar4) & 0xff000000ff;
          iVar20 = (iStack_b8 - uStack_b4) + 1;
          do {
            uVar7 = (uVar4 >> 0x18 | (uVar4 >> 0x18) << 8) * (uint)*pbVar16 + 0x101;
            iVar15 = (uVar7 >> 0x10) * 0x101;
            iVar24 = (uVar7 >> 0x10 ^ 0xff) * 0x101;
            uVar34 = *puVar14;
            bVar28 = (byte)(uVar34 >> 8);
            *puVar14 = CONCAT13((char)(uVar7 >> 0x10) +
                                (char)(iVar24 * (uVar34 >> 0x18) + 0x101 >> 0x10),
                                CONCAT12((char)((uVar8 | uVar8 << 8) * (uVar7 >> 0x10) + 0x101 >>
                                               0x10) +
                                         (char)(iVar24 * (uVar34 >> 0x10 & 0xff) + 0x101 >> 0x10),
                                         CONCAT11((char)((uint)((int)(uVar27 >> 0x20) * iVar15 +
                                                               0x101) >> 0x10) +
                                                  (char)(iVar24 * (uint)bVar28 + 0x101 >> 0x10),
                                                  (char)((uint)((int)uVar27 * iVar15 + 0x101) >>
                                                        0x10) +
                                                  (char)(iVar24 * (CONCAT12(bVar28,(ushort)(byte)
                                                  uVar34) & 0xffff) + 0x101 >> 0x10))));
            puVar14 = puVar14 + 1;
            iVar20 = iVar20 + -1;
            pbVar16 = pbVar16 + 1;
          } while (iVar20 != 0);
        }
      }
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 < *(int *)(param_3 + 0x74));
  }
  return;
}



/* Entry: 1096eda6c; end: 1096eddaf;  */

void FUN_1096eda6c(long param_1,undefined8 *param_2,int param_3)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  char *pcVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  long *plVar8;
  byte *pbVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar2 = 1;
  _calloc(1,0xe0);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0xad) = 1;
    *(char *)(lVar2 + 0x80) = (char)param_3;
    if (param_3 == 2) {
      *(undefined8 *)(lVar2 + 0x9c) = 0x700000000;
      uVar7 = 0x700000000;
      uVar11 = 0x742c80000;
    }
    else {
      uVar7 = 0x742480000;
      uVar11 = uVar7;
    }
    *(undefined8 *)(lVar2 + 0xb8) = 0x3f80000000000000;
    *(undefined8 *)(lVar2 + 0xb0) = 0x3f800000;
    *(undefined8 *)(lVar2 + 0x84) = uVar7;
    *(undefined8 *)(lVar2 + 0x94) = uVar11;
    *(undefined8 *)(lVar2 + 0x8c) = uVar7;
    *(undefined8 *)(lVar2 + 0xc0) = 0;
    pcVar5 = (char *)*param_2;
    if (pcVar5 != (char *)0x0) {
      plVar8 = param_2 + 1;
      do {
        if (((*pcVar5 == 'i') && (pcVar5[1] == 'd')) && (pcVar5[2] == '\0')) {
          _strncpy(lVar2,*plVar8,0x3f);
          *(undefined1 *)(lVar2 + 0x3f) = 0;
        }
        else {
          lVar4 = param_1;
          FUN_1096ee638(param_1,pcVar5,*plVar8);
          if ((int)lVar4 == 0) {
            pbVar9 = (byte *)plVar8[-1];
            pbVar3 = pbVar9;
            _strcmp(pbVar9,"gradientUnits");
            if ((int)pbVar3 == 0) {
              lVar4 = *plVar8;
              _strcmp(lVar4,"objectBoundingBox");
              if ((int)lVar4 == 0) {
                *(undefined1 *)(lVar2 + 0xad) = 1;
              }
              else {
                *(undefined1 *)(lVar2 + 0xad) = 0;
              }
            }
            else {
              pbVar3 = pbVar9;
              _strcmp(pbVar9,"gradientTransform");
              if ((int)pbVar3 == 0) {
                FUN_1096eebec((undefined8 *)(lVar2 + 0xb0),*plVar8);
              }
              else {
                bVar1 = *pbVar9;
                if (bVar1 < 0x72) {
                  if (bVar1 == 99) {
                    if (pbVar9[1] == 0x79) {
LAB_1096edca4:
                      if (pbVar9[2] == 0) {
                        lVar4 = *plVar8;
                        FUN_1096eefa4();
                        *(long *)(lVar2 + 0x8c) = lVar4;
                        goto LAB_1096edb5c;
                      }
                    }
                    else if (pbVar9[1] == 0x78) {
LAB_1096edc8c:
                      if (pbVar9[2] == 0) {
                        lVar4 = *plVar8;
                        FUN_1096eefa4();
                        *(long *)(lVar2 + 0x84) = lVar4;
                        goto LAB_1096edb5c;
                      }
                    }
                  }
                  else if (bVar1 == 0x66) {
                    if (pbVar9[1] == 0x79) {
                      if (pbVar9[2] == 0) {
                        lVar4 = *plVar8;
                        FUN_1096eefa4();
                        *(long *)(lVar2 + 0xa4) = lVar4;
                        goto LAB_1096edb5c;
                      }
                    }
                    else if (pbVar9[1] == 0x78) goto LAB_1096edc30;
                  }
                }
                else if (bVar1 == 0x72) {
                  bVar1 = pbVar9[1];
joined_r0x0001096edc58:
                  if (bVar1 == 0) {
                    lVar4 = *plVar8;
                    FUN_1096eefa4();
                    *(long *)(lVar2 + 0x94) = lVar4;
                    goto LAB_1096edb5c;
                  }
                }
                else if (bVar1 == 0x78) {
                  if (pbVar9[1] == 0x32) {
                    bVar1 = pbVar9[2];
                    goto joined_r0x0001096edc58;
                  }
                  if (pbVar9[1] == 0x31) goto LAB_1096edc8c;
                }
                else if (bVar1 == 0x79) {
                  if (pbVar9[1] == 0x32) {
LAB_1096edc30:
                    if (pbVar9[2] == 0) {
                      lVar4 = *plVar8;
                      FUN_1096eefa4();
                      *(long *)(lVar2 + 0x9c) = lVar4;
                      goto LAB_1096edb5c;
                    }
                  }
                  else if (pbVar9[1] == 0x31) goto LAB_1096edca4;
                }
                pbVar3 = pbVar9;
                _strcmp(pbVar9,&UNK_10f57e823);
                if ((int)pbVar3 == 0) {
                  lVar10 = *plVar8;
                  lVar4 = lVar10;
                  _strcmp(lVar10,&UNK_10f57e830);
                  if ((int)lVar4 == 0) {
                    *(undefined1 *)(lVar2 + 0xac) = 0;
                  }
                  else {
                    lVar4 = lVar10;
                    _strcmp(lVar10,&UNK_10f4917f3);
                    if ((int)lVar4 == 0) {
                      uVar6 = 1;
                    }
                    else {
                      _strcmp(lVar10,&DAT_10f57e834);
                      if ((int)lVar10 != 0) goto LAB_1096edb5c;
                      uVar6 = 2;
                    }
                    *(undefined1 *)(lVar2 + 0xac) = uVar6;
                  }
                }
                else {
                  _strcmp(pbVar9,"xlink:href");
                  if ((int)pbVar9 == 0) {
                    _strncpy(lVar2 + 0x40,*plVar8 + 1,0x3e);
                    *(undefined1 *)(lVar2 + 0x7e) = 0;
                  }
                }
              }
            }
          }
        }
LAB_1096edb5c:
        pcVar5 = (char *)plVar8[1];
        plVar8 = plVar8 + 2;
      } while (pcVar5 != (char *)0x0);
    }
    *(undefined8 *)(lVar2 + 0xd8) = *(undefined8 *)(param_1 + 0x9c28);
    *(long *)(param_1 + 0x9c28) = lVar2;
  }
  return;
}



/* Entry: 1096eddb0; end: 1096edf4b;  */

void FUN_1096eddb0(long param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  
  lVar10 = param_1 + (long)*(int *)(param_1 + 0x9c00) * 0x138;
  *(undefined4 *)(lVar10 + 0x128) = 0;
  *(undefined8 *)(lVar10 + 300) = 0x3f800000;
  lVar5 = *param_2;
  while (lVar5 != 0) {
    FUN_1096ee638(param_1,lVar5,param_2[1]);
    lVar5 = param_2[2];
    param_2 = param_2 + 2;
  }
  lVar5 = *(long *)(param_1 + 0x9c28);
  if (lVar5 != 0) {
    lVar9 = (long)*(int *)(lVar5 + 200) + 1;
    *(int *)(lVar5 + 200) = (int)lVar9;
    lVar4 = *(long *)(lVar5 + 0xd0);
    _realloc(lVar4,lVar9 * 8);
    *(long *)(lVar5 + 0xd0) = lVar4;
    if (lVar4 != 0) {
      uVar2 = *(uint *)(lVar5 + 200);
      uVar8 = (ulong)uVar2;
      uVar3 = uVar2 - 1;
      fVar11 = *(float *)(lVar10 + 0x130);
      uVar6 = uVar3;
      if (1 < (int)uVar2) {
        uVar7 = 0;
        lVar9 = 4;
        do {
          if (fVar11 < *(float *)(lVar4 + lVar9)) {
            uVar6 = (uint)uVar7;
            if ((int)uVar6 < (int)uVar3) {
              do {
                lVar9 = *(long *)(lVar5 + 0xd0) + uVar8 * 8;
                *(undefined8 *)(lVar9 + -8) = *(undefined8 *)(lVar9 + -0x10);
                lVar9 = uVar8 - 2;
                uVar8 = uVar8 - 1;
              } while ((long)uVar7 < lVar9);
              lVar4 = *(long *)(lVar5 + 0xd0);
              fVar11 = *(float *)(lVar10 + 0x130);
            }
            break;
          }
          uVar7 = uVar7 + 1;
          lVar9 = lVar9 + 8;
        } while (uVar3 != uVar7);
      }
      puVar1 = (uint *)(lVar4 + (long)(int)uVar6 * 8);
      *puVar1 = *(uint *)(lVar10 + 0x128) | (int)(*(float *)(lVar10 + 300) * 255.0) << 0x18;
      puVar1[1] = (uint)fVar11;
    }
  }
  return;
}



/* Entry: 1096edf4c; end: 1096ee143;  */

void FUN_1096edf4c(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  char cVar11;
  float *pfVar12;
  float *pfVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  float fVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  lVar5 = *param_2;
  if (lVar5 == 0) {
    uVar8 = 0;
    uVar19 = 0;
    fVar18 = 0.0;
    fVar23 = 0.0;
  }
  else {
    param_2 = param_2 + 1;
    uVar21 = 0;
    uVar20 = 0;
    uVar19 = 0;
    uVar8 = 0;
    do {
      puVar3 = param_1;
      FUN_1096ee638(param_1,lVar5,*param_2);
      if ((int)puVar3 == 0) {
        pcVar7 = (char *)param_2[-1];
        cVar11 = *pcVar7;
        if (cVar11 == 'x') {
          cVar11 = pcVar7[1];
          if (cVar11 == '1') {
            if (pcVar7[2] != '\0') goto LAB_1096edfa0;
            lVar5 = *param_2;
            uVar8 = (ulong)*(uint *)(param_1 + 4999);
            uVar30 = *(undefined4 *)(param_1 + 5000);
            FUN_1096eefa4(lVar5);
            FUN_1096ef8f8(uVar8,uVar30,param_1,lVar5);
            pcVar7 = (char *)param_2[-1];
            cVar11 = *pcVar7;
            goto LAB_1096ee004;
          }
LAB_1096ee05c:
          if ((cVar11 == '2') && (pcVar7[2] == '\0')) {
            lVar5 = *param_2;
            uVar20 = (ulong)*(uint *)(param_1 + 4999);
            uVar30 = *(undefined4 *)(param_1 + 5000);
            FUN_1096eefa4(lVar5);
            FUN_1096ef8f8(uVar20,uVar30,param_1,lVar5);
            pcVar7 = (char *)param_2[-1];
            cVar11 = *pcVar7;
LAB_1096ee09c:
            if (cVar11 == 'y') {
              cVar11 = pcVar7[1];
              goto LAB_1096ee0a8;
            }
          }
        }
        else {
LAB_1096ee004:
          if (cVar11 != 'y') {
LAB_1096ee050:
            if (cVar11 == 'x') {
              cVar11 = pcVar7[1];
              goto LAB_1096ee05c;
            }
            goto LAB_1096ee09c;
          }
          cVar11 = pcVar7[1];
          if (cVar11 == '1') {
            if (pcVar7[2] != '\0') goto LAB_1096edfa0;
            lVar5 = *param_2;
            uVar19 = (ulong)*(uint *)((long)param_1 + 0x9c3c);
            uVar30 = *(undefined4 *)((long)param_1 + 0x9c44);
            FUN_1096eefa4(lVar5);
            FUN_1096ef8f8(uVar19,uVar30,param_1,lVar5);
            pcVar7 = (char *)param_2[-1];
            cVar11 = *pcVar7;
            goto LAB_1096ee050;
          }
LAB_1096ee0a8:
          if ((cVar11 == '2') && (pcVar7[2] == '\0')) {
            lVar5 = *param_2;
            uVar21 = (ulong)*(uint *)((long)param_1 + 0x9c3c);
            uVar30 = *(undefined4 *)((long)param_1 + 0x9c44);
            FUN_1096eefa4(lVar5);
            FUN_1096ef8f8(uVar21,uVar30,param_1,lVar5);
          }
        }
      }
LAB_1096edfa0:
      fVar23 = (float)uVar21;
      fVar18 = (float)uVar20;
      lVar5 = param_2[1];
      param_2 = param_2 + 2;
    } while (lVar5 != 0);
  }
  *(undefined4 *)(param_1 + 0x1382) = 0;
  FUN_1096f04ac(uVar8,uVar19,param_1);
  FUN_1096f0410(param_1);
  FUN_1096eff6c(param_1,0);
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = param_1[0x1383];
  puVar3 = param_1;
  if (lVar16 == 0) goto LAB_1096f03d8;
  iVar6 = *(int *)(param_1 + 0x1380);
  puVar4 = (undefined8 *)0xb8;
  _malloc();
  puVar3 = puVar4;
  if (puVar4 == (undefined8 *)0x0) goto LAB_1096f03d8;
  puVar17 = param_1 + (long)iVar6 * 0x27;
  puVar15 = puVar4 + 8;
  puVar4[9] = 0;
  *puVar15 = 0;
  puVar4[0x16] = 0;
  puVar4[0x13] = 0;
  puVar4[0x12] = 0;
  puVar4[0x15] = 0;
  puVar4[0x14] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x11] = 0;
  puVar4[0x10] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  uVar22 = *puVar17;
  uVar25 = puVar17[3];
  uVar24 = puVar17[2];
  puVar4[1] = puVar17[1];
  *puVar4 = uVar22;
  puVar4[3] = uVar25;
  puVar4[2] = uVar24;
  uVar22 = puVar17[4];
  uVar25 = puVar17[7];
  uVar24 = puVar17[6];
  puVar4[5] = puVar17[5];
  puVar4[4] = uVar22;
  puVar4[7] = uVar25;
  puVar4[6] = uVar24;
  puVar14 = puVar17 + 8;
  fVar26 = (float)puVar17[9];
  fVar27 = (float)((ulong)puVar17[9] >> 0x20);
  fVar18 = (float)*puVar14;
  fVar23 = (float)((ulong)*puVar14 >> 0x20);
  fVar18 = (SQRT(fVar26 * fVar26 + fVar18 * fVar18) + SQRT(fVar27 * fVar27 + fVar23 * fVar23)) * 0.5
  ;
  *(ulong *)((long)puVar4 + 100) =
       CONCAT44((float)((ulong)*(undefined8 *)((long)puVar17 + 0xec) >> 0x20) * fVar18,
                (float)*(undefined8 *)((long)puVar17 + 0xec) * fVar18);
  uVar1 = *(uint *)((long)puVar17 + 0x114);
  uVar8 = (ulong)uVar1;
  *(char *)((long)puVar4 + 0x8c) = (char)uVar1;
  if (0 < (int)uVar1) {
    pfVar12 = (float *)((long)puVar17 + 0xf4);
    pfVar13 = (float *)((long)puVar4 + 0x6c);
    do {
      *pfVar13 = fVar18 * *pfVar12;
      uVar8 = uVar8 - 1;
      pfVar12 = pfVar12 + 1;
      pfVar13 = pfVar13 + 1;
    } while (uVar8 != 0);
  }
  *(undefined2 *)((long)puVar4 + 0x8d) = *(undefined2 *)(puVar17 + 0x23);
  *(undefined4 *)(puVar4 + 0x12) = *(undefined4 *)((long)puVar17 + 0x11c);
  *(undefined1 *)((long)puVar4 + 0x94) = *(undefined1 *)(puVar17 + 0x24);
  *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(puVar17 + 0xc);
  puVar4[0x15] = lVar16;
  param_1[0x1383] = 0;
  fVar18 = *(float *)(lVar16 + 0x10);
  *(float *)(puVar4 + 0x13) = fVar18;
  fVar23 = *(float *)(lVar16 + 0x14);
  *(float *)((long)puVar4 + 0x9c) = fVar23;
  fVar26 = *(float *)(lVar16 + 0x18);
  *(float *)(puVar4 + 0x14) = fVar26;
  fVar27 = *(float *)(lVar16 + 0x1c);
  *(float *)((long)puVar4 + 0xa4) = fVar27;
  for (lVar9 = *(long *)(lVar16 + 0x20); lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x20)) {
    if (*(float *)(lVar9 + 0x10) <= fVar18) {
      fVar18 = *(float *)(lVar9 + 0x10);
    }
    *(float *)(puVar4 + 0x13) = fVar18;
    if (*(float *)(lVar9 + 0x14) <= fVar23) {
      fVar23 = *(float *)(lVar9 + 0x14);
    }
    *(float *)((long)puVar4 + 0x9c) = fVar23;
    if (fVar26 <= *(float *)(lVar9 + 0x18)) {
      fVar26 = *(float *)(lVar9 + 0x18);
    }
    *(float *)(puVar4 + 0x14) = fVar26;
    if (fVar27 <= *(float *)(lVar9 + 0x1c)) {
      fVar27 = *(float *)(lVar9 + 0x1c);
    }
    *(float *)((long)puVar4 + 0xa4) = fVar27;
  }
  cVar11 = *(char *)((long)puVar17 + 0x134);
  if (cVar11 == '\x02') {
    FUN_1096f07f4(auStack_70,puVar14);
    FUN_1096f08f8(auStack_80,lVar16,auStack_70);
    puVar3 = param_1;
    FUN_1096f0a98(param_1,(long)puVar17 + 0x6c,auStack_80,puVar15);
    puVar4[9] = puVar3;
    if (puVar3 == (undefined8 *)0x0) {
LAB_1096f0324:
      *(undefined1 *)puVar15 = 0;
    }
  }
  else if (cVar11 == '\x01') {
    *(undefined1 *)(puVar4 + 8) = 1;
    fVar23 = 255.0;
    fVar18 = *(float *)((long)puVar17 + 100) * 255.0;
    *(uint *)(puVar4 + 9) = *(uint *)(puVar17 + 0xb) | (int)fVar18 << 0x18;
  }
  else if (cVar11 == '\0') goto LAB_1096f0324;
  cVar11 = *(char *)((long)puVar17 + 0x135);
  if (cVar11 == '\x02') {
    FUN_1096f07f4(auStack_70,puVar14);
    FUN_1096f08f8(auStack_80,puVar4[0x15],auStack_70);
    puVar3 = param_1;
    FUN_1096f0a98(param_1,(long)puVar17 + 0xac,auStack_80,puVar4 + 10);
    puVar4[0xb] = puVar3;
    if (puVar3 == (undefined8 *)0x0) {
      *(undefined1 *)(puVar4 + 10) = 0;
    }
  }
  else if (cVar11 == '\x01') {
    *(undefined1 *)(puVar4 + 10) = 1;
    fVar23 = 255.0;
    fVar18 = *(float *)(puVar17 + 0xd) * 255.0;
    *(uint *)(puVar4 + 0xb) = *(uint *)((long)puVar17 + 0x5c) | (int)fVar18 << 0x18;
  }
  else if (cVar11 == '\0') {
    *(undefined1 *)(puVar4 + 10) = 0;
  }
  *(bool *)((long)puVar4 + 0x95) = *(char *)((long)puVar17 + 0x136) != '\0';
  plVar10 = (long *)(param_1[0x1384] + 8);
  if (*plVar10 != 0) {
    plVar10 = (long *)(param_1[0x1386] + 0xb0);
  }
  *plVar10 = (long)puVar4;
  param_1[0x1386] = puVar4;
LAB_1096f03d8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  if (0 < *(int *)(puVar3 + 0x1382)) {
    iVar6 = *(int *)(puVar3 + 0x1382) * 2;
    fVar26 = *(float *)(puVar3[0x1381] + (ulong)(iVar6 - 2) * 4);
    fVar27 = *(float *)(puVar3[0x1381] + (ulong)(iVar6 - 1) * 4);
    fVar28 = (fVar18 - fVar26) / 3.0;
    fVar29 = (fVar23 - fVar27) / 3.0;
    FUN_1096f04ac(fVar26 + fVar28,fVar27 + fVar29);
    FUN_1096f04ac(fVar18 - fVar28,fVar23 - fVar29,puVar3);
    iVar6 = *(int *)(puVar3 + 0x1382);
    iVar2 = *(int *)((long)puVar3 + 0x9c14);
    if (iVar6 < iVar2) {
      lVar5 = puVar3[0x1381];
    }
    else {
      uVar1 = 8;
      if (iVar2 != 0) {
        uVar1 = iVar2 << 1;
      }
      *(uint *)((long)puVar3 + 0x9c14) = uVar1;
      lVar5 = puVar3[0x1381];
      _realloc(lVar5,-(ulong)((uVar1 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                     (ulong)(uVar1 << 1) << 2);
      puVar3[0x1381] = lVar5;
      if (lVar5 == 0) {
        return;
      }
      iVar6 = *(int *)(puVar3 + 0x1382);
    }
    pfVar12 = (float *)(lVar5 + (long)(iVar6 << 1) * 4);
    *pfVar12 = fVar18;
    pfVar12[1] = fVar23;
    *(int *)(puVar3 + 0x1382) = iVar6 + 1;
    return;
  }
  return;
}



/* Entry: 1096ee144; end: 1096ee637;  */

/* WARNING: Possible PIC construction at 0x0001096eea8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001096eea90) */

float * FUN_1096ee144(double param_1,float *param_2,long *param_3,float *param_4)

{
  byte bVar1;
  float *pfVar2;
  long lVar3;
  char *pcVar4;
  float *pfVar5;
  ulong *puVar6;
  undefined *puVar7;
  char *pcVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  ulong uVar17;
  ulong uVar18;
  char *unaff_x22;
  ulong uVar19;
  long *unaff_x23;
  float *pfVar20;
  char *pcVar21;
  char *pcVar22;
  float *pfVar23;
  char *unaff_x25;
  char cVar24;
  float *unaff_x26;
  float *pfVar25;
  int iVar26;
  float *unaff_x27;
  float *pfVar27;
  float *unaff_x28;
  undefined8 *******pppppppuVar28;
  undefined8 uVar29;
  float fVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  ulong unaff_d8;
  undefined8 unaff_d9;
  float fVar34;
  undefined1 auStack_930 [8];
  char acStack_928 [64];
  long lStack_8e8;
  undefined8 uStack_8e0;
  ulong uStack_8d8;
  float *pfStack_8d0;
  float *pfStack_8c8;
  float *pfStack_8c0;
  float *pfStack_8b8;
  float *pfStack_8b0;
  float *pfStack_8a8;
  ulong uStack_8a0;
  ulong uStack_898;
  float *pfStack_890;
  float *pfStack_888;
  undefined8 ******ppppppuStack_880;
  code *pcStack_878;
  ulong *puStack_870;
  ulong *puStack_868;
  int *piStack_860;
  undefined8 *puStack_858;
  uint *puStack_850;
  uint uStack_83c;
  int iStack_838;
  uint uStack_834;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  ulong uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  long lStack_7e8;
  ulong uStack_7e0;
  float *pfStack_7d8;
  float *pfStack_7d0;
  float *pfStack_7c8;
  undefined8 ******ppppppuStack_7c0;
  code *pcStack_7b8;
  float afStack_7b0 [128];
  float afStack_5b0 [128];
  long lStack_3b0;
  float *pfStack_3a0;
  float *pfStack_398;
  float *pfStack_390;
  float *pfStack_388;
  float *pfStack_380;
  float *pfStack_378;
  float *pfStack_370;
  float *pfStack_368;
  float *pfStack_360;
  float *pfStack_358;
  undefined8 ******ppppppuStack_350;
  code *pcStack_348;
  float afStack_338 [16];
  long lStack_2f8;
  float *pfStack_2f0;
  float *pfStack_2e8;
  undefined8 ******ppppppuStack_2e0;
  code *pcStack_2d8;
  double dStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  int iStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 ******ppppppuStack_1e0;
  code *pcStack_1d8;
  float afStack_1d0 [6];
  long lStack_1b8;
  undefined8 *****pppppuStack_170;
  code *pcStack_168;
  float afStack_158 [16];
  long lStack_118;
  float *pfStack_110;
  float *pfStack_108;
  float *pfStack_100;
  float *pfStack_f8;
  float *pfStack_f0;
  long *plStack_e8;
  char *pcStack_e0;
  long *plStack_d8;
  float *pfStack_d0;
  float *pfStack_c8;
  undefined8 ****ppppuStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [64];
  float afStack_70 [2];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar14 = param_2 + 0x2400;
  param_2[0x2704] = 0.0;
  pfVar10 = param_4;
  if (*param_3 != 0) {
    unaff_x25 = (char *)0x0;
    unaff_x26 = (float *)0x0;
    unaff_x27 = afStack_70;
    unaff_x22 = "points";
    do {
      unaff_x23 = param_3 + (long)unaff_x25;
      pfVar10 = (float *)unaff_x23[1];
      pfVar11 = param_2;
      FUN_1096ee638();
      if ((int)pfVar11 == 0) {
        lVar3 = *unaff_x23;
        _strcmp(lVar3,"points");
        if (((int)lVar3 == 0) && (unaff_x23 = (long *)unaff_x23[1], (char)*unaff_x23 != '\0')) {
          unaff_x28 = (float *)0x0;
          do {
            FUN_1096efdac(unaff_x23,auStack_b0);
            FUN_1096ef7b0(auStack_b0);
            fVar30 = (float)param_1;
            param_1 = (double)(ulong)(uint)fVar30;
            unaff_x27[(long)unaff_x28] = fVar30;
            if (unaff_x28 == (float *)0x0) {
              unaff_x28 = (float *)0x1;
            }
            else {
              param_1 = (double)(ulong)(uint)afStack_70[0];
              if ((int)unaff_x26 == 0) {
                if ((int)param_2[0x2704] < 1) {
                  FUN_1096f04ac(param_2);
                }
                else {
                  lVar3 = *(long *)(param_2 + 0x2702);
                  iVar26 = (int)param_2[0x2704] * 2;
                  *(float *)(lVar3 + (ulong)(iVar26 - 2) * 4) = afStack_70[0];
                  *(float *)(lVar3 + (long)(iVar26 + -1) * 4) = afStack_70[1];
                }
              }
              else {
                FUN_1096f0410(param_2);
              }
              unaff_x28 = (float *)0x0;
              unaff_x26 = (float *)(ulong)((int)unaff_x26 + 1);
            }
          } while ((char)*unaff_x23 != '\0');
        }
      }
      unaff_x25 = (char *)((long)unaff_x25 + 2);
    } while (param_3[(long)unaff_x25] != 0);
  }
  pfVar16 = param_4;
  FUN_1096eff6c(param_2);
  pfVar11 = param_2;
  func_0x0001096f0130();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pfVar11;
  }
  ___stack_chk_fail();
  uStack_b8 = 0x1096ee2b4;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = (char *)0x0;
  pfVar15 = pfVar11;
  pcVar22 = (char *)pfVar14;
  pfVar25 = unaff_x26;
  pfVar27 = unaff_x27;
  pfStack_110 = unaff_x28;
  pfStack_108 = unaff_x27;
  pfStack_100 = unaff_x26;
  pfStack_f8 = (float *)unaff_x25;
  pfStack_f0 = pfVar14;
  plStack_e8 = unaff_x23;
  pcStack_e0 = unaff_x22;
  plStack_d8 = param_3;
  pfStack_d0 = param_4;
  pfStack_c8 = param_2;
  ppppuStack_c0 = (undefined8 ****)&stack0xfffffffffffffff0;
  if (*(long *)pfVar16 != 0) {
    pfVar27 = (float *)0x0;
    pcVar22 = &UNK_10f57e81c;
    pfVar25 = pfVar11 + 0x2400;
    do {
      unaff_x25 = (char *)(pfVar16 + (long)pfVar27 * 2);
      pfVar10 = *(float **)((long)unaff_x25 + 8);
      pfVar15 = pfVar11;
      FUN_1096ee638();
      if ((int)pfVar15 == 0) {
        unaff_x28 = *(float **)unaff_x25;
        pfVar14 = unaff_x28;
        _strcmp(unaff_x28,"width");
        if ((int)pfVar14 == 0) {
          uVar29 = *(undefined8 *)((long)unaff_x25 + 8);
          FUN_1096eefa4(uVar29);
          param_1 = 0.0;
          pfVar15 = pfVar11;
          FUN_1096ef8f8(0,0,pfVar11,uVar29);
          **(undefined4 **)(pfVar11 + 0x2708) = SUB84(param_1,0);
        }
        else {
          pfVar14 = unaff_x28;
          _strcmp(unaff_x28,"height");
          if ((int)pfVar14 == 0) {
            uVar29 = *(undefined8 *)((long)unaff_x25 + 8);
            FUN_1096eefa4(uVar29);
            param_1 = 0.0;
            pfVar15 = pfVar11;
            FUN_1096ef8f8(0,0,pfVar11,uVar29);
            *(int *)(*(long *)(pfVar11 + 0x2708) + 4) = SUB84(param_1,0);
          }
          else {
            pfVar14 = unaff_x28;
            _strcmp(unaff_x28,"viewBox");
            if ((int)pfVar14 == 0) {
              unaff_x28 = *(float **)((long)unaff_x25 + 8);
              pcVar8 = (char *)afStack_158;
              FUN_1096efba4();
              pfVar15 = afStack_158;
              FUN_1096ef7b0();
              fVar30 = (float)param_1;
              param_1 = (double)(ulong)(uint)fVar30;
              pfVar11[0x270e] = fVar30;
              unaff_x25 = (char *)(ulong)*(byte *)unaff_x28;
              if (*(byte *)unaff_x28 == 0) goto LAB_1096ee5fc;
              while( true ) {
                pcVar8 = (char *)(ulong)(uint)(int)(char)unaff_x25;
                pfVar10 = (float *)0x7;
                pfVar15 = (float *)&UNK_10f57e81c;
                _memchr();
                if (((pfVar15 == (float *)0x0) && ((int)unaff_x25 != 0x2c)) &&
                   ((int)unaff_x25 != 0x25)) break;
                unaff_x28 = (float *)((long)unaff_x28 + 1);
                unaff_x25 = (char *)(ulong)*(byte *)unaff_x28;
                if (*(byte *)unaff_x28 == 0) {
                  unaff_x25 = (char *)0x0;
                  goto LAB_1096ee5fc;
                }
              }
              pcVar8 = (char *)afStack_158;
              FUN_1096efba4();
              pfVar15 = afStack_158;
              FUN_1096ef7b0();
              fVar30 = (float)param_1;
              param_1 = (double)(ulong)(uint)fVar30;
              pfVar11[9999] = fVar30;
              unaff_x25 = (char *)(ulong)*(byte *)unaff_x28;
              if (*(byte *)unaff_x28 == 0) goto LAB_1096ee5fc;
              while( true ) {
                pcVar8 = (char *)(ulong)(uint)(int)(char)unaff_x25;
                pfVar10 = (float *)0x7;
                pfVar15 = (float *)&UNK_10f57e81c;
                _memchr();
                if (((pfVar15 == (float *)0x0) && ((int)unaff_x25 != 0x2c)) &&
                   ((int)unaff_x25 != 0x25)) break;
                unaff_x28 = (float *)((long)unaff_x28 + 1);
                unaff_x25 = (char *)(ulong)*(byte *)unaff_x28;
                if (*(byte *)unaff_x28 == 0) {
                  unaff_x25 = (char *)0x0;
                  goto LAB_1096ee5fc;
                }
              }
              pcVar8 = (char *)afStack_158;
              FUN_1096efba4();
              pfVar15 = afStack_158;
              FUN_1096ef7b0();
              fVar30 = (float)param_1;
              param_1 = (double)(ulong)(uint)fVar30;
              pfVar11[10000] = fVar30;
              bVar1 = *(byte *)unaff_x28;
              while( true ) {
                unaff_x25 = (char *)(ulong)bVar1;
                if (bVar1 == 0) goto LAB_1096ee5fc;
                pcVar8 = (char *)(ulong)(uint)(int)(char)bVar1;
                pfVar10 = (float *)0x7;
                pfVar15 = (float *)&UNK_10f57e81c;
                _memchr();
                if (((pfVar15 == (float *)0x0) && (bVar1 != 0x2c)) && (bVar1 != 0x25)) break;
                unaff_x28 = (float *)((long)unaff_x28 + 1);
                bVar1 = *(byte *)unaff_x28;
              }
              FUN_1096efba4(unaff_x28,afStack_158);
              pfVar15 = afStack_158;
              FUN_1096ef7b0();
              fVar30 = (float)param_1;
              param_1 = (double)(ulong)(uint)fVar30;
              pfVar11[0x2711] = fVar30;
            }
            else {
              pfVar15 = unaff_x28;
              _strcmp(unaff_x28,&DAT_10f47dda1);
              if ((int)pfVar15 == 0) {
                unaff_x28 = *(float **)((long)unaff_x25 + 8);
                pfVar15 = unaff_x28;
                _strstr(unaff_x28,"none");
                if (pfVar15 == (float *)0x0) {
                  pfVar14 = unaff_x28;
                  _strstr(unaff_x28,&DAT_10f49662e);
                  if (pfVar14 == (float *)0x0) {
                    pfVar14 = unaff_x28;
                    _strstr(unaff_x28,&UNK_10f57e86a);
                    if (pfVar14 != (float *)0x0) {
                      fVar30 = 1.4013e-45;
                      goto LAB_1096ee500;
                    }
                    pfVar14 = unaff_x28;
                    _strstr(unaff_x28,&DAT_10f496633);
                    if (pfVar14 != (float *)0x0) {
                      fVar30 = 2.8026e-45;
                      goto LAB_1096ee500;
                    }
                  }
                  else {
                    fVar30 = 0.0;
LAB_1096ee500:
                    pfVar11[0x2712] = fVar30;
                  }
                  pfVar14 = unaff_x28;
                  _strstr(unaff_x28,&DAT_10f496638);
                  if (pfVar14 == (float *)0x0) {
                    pfVar14 = unaff_x28;
                    _strstr(unaff_x28,&UNK_10f57e86f);
                    if (pfVar14 != (float *)0x0) {
                      fVar30 = 1.4013e-45;
                      goto LAB_1096ee554;
                    }
                    pfVar14 = unaff_x28;
                    _strstr(unaff_x28,&DAT_10f49663d);
                    if (pfVar14 != (float *)0x0) {
                      fVar30 = 2.8026e-45;
                      goto LAB_1096ee554;
                    }
                  }
                  else {
                    fVar30 = 0.0;
LAB_1096ee554:
                    pfVar11[0x2713] = fVar30;
                  }
                  unaff_x25 = (char *)0x1;
                  fVar30 = 1.4013e-45;
                  pfVar11[0x2714] = 1.4013e-45;
                  pfVar15 = unaff_x28;
                  _strstr(unaff_x28,"slice");
                  if (pfVar15 != (float *)0x0) {
                    fVar30 = 2.8026e-45;
                  }
                  pfVar11[0x2714] = fVar30;
                }
                else {
                  pfVar11[0x2714] = 0.0;
                }
              }
            }
          }
        }
      }
      pfVar27 = (float *)((long)pfVar27 + 2);
    } while (*(long *)(pfVar16 + (long)pfVar27 * 2) != 0);
    pcVar8 = (char *)0x0;
    pcVar22 = &UNK_10f57e81c;
  }
LAB_1096ee5fc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return pfVar15;
  }
  ___stack_chk_fail();
  pfVar2 = afStack_1d0;
  pfVar20 = afStack_1d0;
  pppppuStack_170 = &ppppuStack_c0;
  pcStack_168 = FUN_1096ee638;
  pppppppuVar28 = (undefined8 *******)&pppppuStack_170;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar21 = (char *)(pfVar15 + 0x2400);
  fVar30 = pfVar15[0x2700];
  pfVar14 = (float *)(long)(int)fVar30;
  pfVar16 = (float *)pcVar8;
  pfVar11 = pfVar10;
  _strcmp(pcVar8,"style");
  if ((int)pfVar16 == 0) {
    pcVar4 = (char *)pfVar10;
    FUN_1096ef014();
LAB_1096eeb94:
    pfVar16 = (float *)0x1;
  }
  else {
    pfVar14 = pfVar15 + (long)(int)fVar30 * 0x4e;
    pfVar16 = (float *)pcVar8;
    _strcmp(pcVar8,"display");
    if ((int)pfVar16 == 0) {
      pcVar4 = "none";
      pfVar15 = pfVar10;
      _strcmp();
      if ((int)pfVar15 == 0) {
        *(char *)((long)pfVar14 + 0x136) = '\0';
      }
      goto LAB_1096eeb94;
    }
    pfVar16 = (float *)pcVar8;
    _strcmp(pcVar8,"fill");
    if ((int)pfVar16 != 0) {
      pcVar4 = &DAT_10f68f0f6;
      pfVar16 = (float *)pcVar8;
      _strcmp();
      if ((int)pfVar16 == 0) {
        pfVar15 = pfVar10;
        FUN_1096ef7b0();
        fVar30 = 0.0;
        if (0.0 <= (float)param_1) {
          fVar30 = (float)param_1;
        }
        fVar34 = 1.0;
        if (fVar30 <= 1.0) {
          fVar34 = fVar30;
        }
        pfVar14[0x18] = fVar34;
      }
      else {
        pcVar4 = "fill-opacity";
        pfVar16 = (float *)pcVar8;
        _strcmp();
        if ((int)pfVar16 == 0) {
          pfVar15 = pfVar10;
          FUN_1096ef7b0();
          fVar30 = 0.0;
          if (0.0 <= (float)param_1) {
            fVar30 = (float)param_1;
          }
          fVar34 = 1.0;
          if (fVar30 <= 1.0) {
            fVar34 = fVar30;
          }
          pfVar14[0x19] = fVar34;
        }
        else {
          pfVar16 = (float *)pcVar8;
          _strcmp(pcVar8,"stroke");
          if ((int)pfVar16 == 0) {
            pcVar4 = "none";
            pfVar15 = pfVar10;
            _strcmp();
            if ((int)pfVar15 != 0) {
              pcVar4 = "url(";
              pfVar11 = (float *)0x4;
              pfVar15 = pfVar10;
              _strncmp();
              if ((int)pfVar15 == 0) {
                uVar19 = 0;
                *(char *)((long)pfVar14 + 0x135) = '\x02';
                pfVar16 = pfVar14 + 0x2b;
                pfVar20 = pfVar10 + 1;
                if (*(char *)pfVar20 == '#') {
                  pfVar20 = (float *)((long)pfVar10 + 5);
                }
                do {
                  if (*(char *)((long)pfVar20 + uVar19) == ')') break;
                  *(char *)((long)pfVar16 + uVar19) = *(char *)((long)pfVar20 + uVar19);
                  uVar19 = uVar19 + 1;
                } while (uVar19 != 0x3f);
                goto LAB_1096ee970;
              }
              pfVar16 = (float *)0x1;
              *(char *)((long)pfVar14 + 0x135) = '\x01';
              pfVar15 = pfVar10;
              FUN_1096ef244();
              pfVar14[0x17] = SUB84(pfVar15,0);
              goto LAB_1096eeb98;
            }
            *(char *)((long)pfVar14 + 0x135) = '\0';
          }
          else {
            pfVar16 = (float *)pcVar8;
            _strcmp(pcVar8,"stroke-width");
            if ((int)pfVar16 == 0) {
              unaff_d8 = (ulong)(uint)(SQRT(pfVar15[0x2711] * pfVar15[0x2711] +
                                            pfVar15[10000] * pfVar15[10000]) / 1.4142135);
              pcVar4 = (char *)pfVar10;
              FUN_1096eefa4();
              fVar30 = 0.0;
              FUN_1096ef8f8(0,unaff_d8);
              pfVar14[0x3b] = fVar30;
            }
            else {
              pfVar16 = (float *)pcVar8;
              _strcmp(pcVar8,"stroke-dasharray");
              if ((int)pfVar16 == 0) {
                pfVar11 = pfVar14 + 0x3d;
                pcVar4 = (char *)pfVar10;
                FUN_1096ef4a0();
                pfVar14[0x45] = SUB84(pfVar15,0);
              }
              else {
                pfVar16 = (float *)pcVar8;
                _strcmp(pcVar8,"stroke-dashoffset");
                if ((int)pfVar16 == 0) {
                  unaff_d8 = (ulong)(uint)(SQRT(pfVar15[0x2711] * pfVar15[0x2711] +
                                                pfVar15[10000] * pfVar15[10000]) / 1.4142135);
                  pcVar4 = (char *)pfVar10;
                  FUN_1096eefa4();
                  fVar30 = 0.0;
                  FUN_1096ef8f8(0,unaff_d8);
                  pfVar14[0x3c] = fVar30;
                }
                else {
                  pcVar4 = "stroke-opacity";
                  pfVar16 = (float *)pcVar8;
                  _strcmp();
                  if ((int)pfVar16 == 0) {
                    pfVar15 = pfVar10;
                    FUN_1096ef7b0();
                    fVar30 = 0.0;
                    if (0.0 <= (float)param_1) {
                      fVar30 = (float)param_1;
                    }
                    fVar34 = 1.0;
                    if (fVar30 <= 1.0) {
                      fVar34 = fVar30;
                    }
                    pfVar14[0x1a] = fVar34;
                  }
                  else {
                    pfVar16 = (float *)pcVar8;
                    _strcmp(pcVar8,"stroke-linecap");
                    if ((int)pfVar16 == 0) {
                      uVar29 = 0x1096eea90;
                      pfVar15 = pfVar10;
                      goto FUN_1096ef664;
                    }
                    pcVar4 = "stroke-linejoin";
                    pfVar16 = (float *)pcVar8;
                    _strcmp();
                    if ((int)pfVar16 == 0) {
                      pfVar15 = pfVar10;
                      func_0x0001096ef6c8();
                      *(char *)(pfVar14 + 0x46) = (char)pfVar15;
                    }
                    else {
                      pcVar4 = "stroke-miterlimit";
                      pfVar16 = (float *)pcVar8;
                      _strcmp();
                      if ((int)pfVar16 == 0) {
                        pfVar15 = pfVar10;
                        FUN_1096ef7b0();
                        fVar30 = 0.0;
                        if (0.0 <= (float)param_1) {
                          fVar30 = (float)param_1;
                        }
                        pfVar14[0x47] = fVar30;
                      }
                      else {
                        pcVar4 = "fill-rule";
                        pfVar16 = (float *)pcVar8;
                        _strcmp();
                        if ((int)pfVar16 == 0) {
                          pfVar15 = pfVar10;
                          func_0x0001096ef72c();
                          *(char *)(pfVar14 + 0x48) = (char)pfVar15;
                        }
                        else {
                          pfVar16 = (float *)pcVar8;
                          _strcmp(pcVar8,"font-size");
                          if ((int)pfVar16 == 0) {
                            unaff_d8 = (ulong)(uint)(SQRT(pfVar15[0x2711] * pfVar15[0x2711] +
                                                          pfVar15[10000] * pfVar15[10000]) /
                                                    1.4142135);
                            pcVar4 = (char *)pfVar10;
                            FUN_1096eefa4();
                            fVar30 = 0.0;
                            FUN_1096ef8f8(0,unaff_d8);
                            pfVar14[0x49] = fVar30;
                          }
                          else {
                            pfVar16 = (float *)pcVar8;
                            _strcmp(pcVar8,"transform");
                            if ((int)pfVar16 == 0) {
                              FUN_1096eebec(afStack_1d0,pfVar10);
                              pfVar15 = pfVar14 + 0x10;
                              FUN_1096ef770();
                              pcVar4 = (char *)pfVar20;
                            }
                            else {
                              pcVar4 = "stop-color";
                              pfVar16 = (float *)pcVar8;
                              _strcmp();
                              if ((int)pfVar16 == 0) {
                                pfVar15 = pfVar10;
                                FUN_1096ef244();
                                pfVar14[0x4a] = SUB84(pfVar15,0);
                              }
                              else {
                                pcVar4 = "stop-opacity";
                                pfVar16 = (float *)pcVar8;
                                _strcmp();
                                if ((int)pfVar16 == 0) {
                                  pfVar15 = pfVar10;
                                  FUN_1096ef7b0();
                                  fVar30 = 0.0;
                                  if (0.0 <= (float)param_1) {
                                    fVar30 = (float)param_1;
                                  }
                                  fVar34 = 1.0;
                                  if (fVar30 <= 1.0) {
                                    fVar34 = fVar30;
                                  }
                                  pfVar14[0x4b] = fVar34;
                                }
                                else {
                                  pcVar4 = &DAT_10f63975c;
                                  pfVar20 = (float *)pcVar8;
                                  _strcmp();
                                  if ((int)pfVar20 == 0) {
                                    pcVar4 = (char *)pfVar10;
                                    FUN_1096eefa4();
                                    fVar30 = 0.0;
                                    FUN_1096ef8f8(0,0x3f800000);
                                    pfVar14[0x4c] = fVar30;
                                  }
                                  else {
                                    if (((*pcVar8 != 'i') || (*(char *)((long)pcVar8 + 1) != 'd'))
                                       || (*(char *)((long)pcVar8 + 2) != '\0')) {
                                      pfVar16 = (float *)0x0;
                                      pfVar15 = pfVar20;
                                      goto LAB_1096eeb98;
                                    }
                                    pfVar11 = (float *)0x3f;
                                    pfVar15 = pfVar14;
                                    pcVar4 = (char *)pfVar10;
                                    _strncpy();
                                    *(char *)((long)pfVar14 + 0x3f) = '\0';
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_1096eeb94;
    }
    pcVar4 = "none";
    pfVar15 = pfVar10;
    _strcmp();
    if ((int)pfVar15 == 0) {
      *(char *)(pfVar14 + 0x4d) = '\0';
      goto LAB_1096eeb94;
    }
    pcVar4 = "url(";
    pfVar11 = (float *)0x4;
    pfVar15 = pfVar10;
    _strncmp();
    if ((int)pfVar15 == 0) {
      uVar19 = 0;
      *(char *)(pfVar14 + 0x4d) = '\x02';
      pfVar16 = pfVar14 + 0x1b;
      pfVar20 = pfVar10 + 1;
      if (*(char *)pfVar20 == '#') {
        pfVar20 = (float *)((long)pfVar10 + 5);
      }
      do {
        if (*(char *)((long)pfVar20 + uVar19) == ')') break;
        *(char *)((long)pfVar16 + uVar19) = *(char *)((long)pfVar20 + uVar19);
        uVar19 = uVar19 + 1;
      } while (uVar19 != 0x3f);
LAB_1096ee970:
      pfVar10 = pfVar10 + 1;
      *(char *)((long)pfVar16 + (uVar19 & 0xffffffff)) = '\0';
      goto LAB_1096eeb94;
    }
    pfVar16 = (float *)0x1;
    *(char *)(pfVar14 + 0x4d) = '\x01';
    pfVar15 = pfVar10;
    FUN_1096ef244();
    pfVar14[0x16] = SUB84(pfVar15,0);
  }
LAB_1096eeb98:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return pfVar16;
  }
  ___stack_chk_fail();
  ppppppuStack_1e0 = pppppppuVar28;
  pcStack_1d8 = FUN_1096eebec;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar31 = 5.26354424712089e-315;
  uStack_2b8 = 0x3f80000000000000;
  uStack_2c0 = 0x3f800000;
  pfVar15[2] = 0.0;
  pfVar15[3] = 1.0;
  pfVar15[0] = 1.0;
  pfVar15[1] = 0.0;
  pfVar15[4] = 0.0;
  pfVar15[5] = 0.0;
  pfVar20 = pfVar15;
  if (*pcVar4 != '\0') {
    pfVar16 = (float *)&DAT_10f638b90;
    pcVar8 = "translate";
    unaff_d8 = 0;
    pcVar21 = "scale";
    unaff_d9 = 0;
    pcVar22 = "rotate";
    unaff_x28 = (float *)0x43340000;
    unaff_x25 = "skewX";
    dVar31 = 0.0078125;
    uStack_2c8 = 0;
    dStack_2d0 = 0.0078125;
    pfVar14 = (float *)pcVar4;
    do {
      pfVar10 = pfVar14;
      _strncmp(pfVar14,&DAT_10f638b90,6);
      if ((int)pfVar10 == 0) {
        iStack_2a4 = 0;
        pfVar11 = (float *)0x6;
        pfVar27 = pfVar14;
        FUN_1096efa5c(pfVar14,&fStack_280,6,&iStack_2a4);
        if (iStack_2a4 == 6) {
          dVar31 = (double)CONCAT44(fStack_27c,fStack_280);
          fStack_298 = fStack_278;
          fStack_294 = fStack_274;
          fStack_2a0 = fStack_280;
          fStack_29c = fStack_27c;
          fStack_290 = (float)uStack_270;
          fStack_28c = (float)((ulong)uStack_270 >> 0x20);
        }
LAB_1096eef44:
        pfVar14 = (float *)((long)pfVar14 + (long)(int)pfVar27);
        pfVar20 = pfVar15;
        FUN_1096ef770(pfVar15,&fStack_2a0);
      }
      else {
        pfVar10 = pfVar14;
        _strncmp(pfVar14,"translate",9);
        if ((int)pfVar10 == 0) {
          iStack_2a4 = 0;
          pfVar11 = (float *)0x2;
          pfVar27 = pfVar14;
          FUN_1096efa5c(pfVar14,&fStack_280,2,&iStack_2a4);
          fStack_28c = 0.0;
          if (iStack_2a4 != 1) {
            fStack_28c = fStack_27c;
          }
          dVar31 = (double)(ulong)(uint)fStack_28c;
          fStack_298 = (float)uStack_2b8;
          fStack_294 = (float)((ulong)uStack_2b8 >> 0x20);
          fStack_2a0 = (float)uStack_2c0;
          fStack_29c = (float)((ulong)uStack_2c0 >> 0x20);
          fStack_290 = fStack_280;
          goto LAB_1096eef44;
        }
        pfVar10 = pfVar14;
        _strncmp(pfVar14,"scale",5);
        if ((int)pfVar10 == 0) {
          iStack_2a4 = 0;
          pfVar11 = (float *)0x2;
          pfVar27 = pfVar14;
          FUN_1096efa5c(pfVar14,&fStack_280,2,&iStack_2a4);
          dVar31 = (double)(ulong)(uint)fStack_280;
          fStack_294 = fStack_280;
          if (iStack_2a4 != 1) {
            fStack_294 = fStack_27c;
          }
          fStack_2a0 = fStack_280;
          fStack_29c = 0.0;
          fStack_298 = 0.0;
          fStack_290 = 0.0;
          fStack_28c = 0.0;
          goto LAB_1096eef44;
        }
        pfVar10 = pfVar14;
        _strncmp(pfVar14,"rotate",6);
        if ((int)pfVar10 == 0) {
          iStack_2a4 = 0;
          pfVar11 = (float *)0x3;
          pfVar27 = pfVar14;
          FUN_1096efa5c(pfVar14,&fStack_280,3,&iStack_2a4);
          if (iStack_2a4 == 1) {
            fStack_27c = 0.0;
            fStack_278 = 0.0;
LAB_1096eeeb8:
            pfVar25 = (float *)0x0;
            fVar30 = 0.0;
            fVar34 = 0.0;
          }
          else {
            if (iStack_2a4 < 2) goto LAB_1096eeeb8;
            fVar34 = 0.0 - fStack_27c;
            fVar30 = 0.0 - fStack_278;
            pfVar25 = (float *)0x1;
          }
          fVar32 = 180.0;
          fVar33 = (fStack_280 / 180.0) * 3.1415927;
          ___sincosf_stret();
          fStack_2a0 = fVar32 - fVar33 * 0.0;
          fStack_298 = fVar32 * 0.0 - fVar33;
          fStack_290 = -(fVar33 * fVar30) + fVar32 * fVar34 + 0.0;
          fStack_29c = fVar33 + fVar32 * 0.0;
          fStack_294 = fVar32 + fVar33 * 0.0;
          fStack_28c = fVar30 * fVar32 + fVar33 * fVar34 + 0.0;
          if ((int)pfVar25 != 0) {
            fVar30 = fStack_29c * 0.0;
            fStack_29c = fStack_29c + fStack_2a0 * 0.0;
            fStack_2a0 = fStack_2a0 + fVar30;
            fVar30 = fStack_294 * 0.0;
            fStack_294 = fStack_294 + fStack_298 * 0.0;
            fStack_298 = fStack_298 + fVar30;
            fVar30 = fStack_290 * 0.0;
            fStack_290 = fStack_290 + fStack_28c * 0.0 + fStack_27c;
            fStack_28c = fStack_28c + fVar30 + fStack_278;
          }
          dVar31 = (double)(ulong)(uint)fStack_28c;
          goto LAB_1096eef44;
        }
        pfVar10 = pfVar14;
        _strncmp(pfVar14,"skewX",5);
        if ((int)pfVar10 == 0) {
          iStack_2a4 = 0;
          pfVar11 = (float *)0x1;
          pfVar27 = pfVar14;
          FUN_1096efa5c(pfVar14,&fStack_280,1,&iStack_2a4);
          dVar31 = (double)(ulong)(uint)((fStack_280 / 180.0) * 3.1415927);
          _tanf();
          fStack_2a0 = 1.0;
          fStack_29c = 0.0;
          fStack_298 = SUB84(dVar31,0);
          fStack_294 = 1.0;
          fStack_290 = 0.0;
          fStack_28c = 0.0;
          goto LAB_1096eef44;
        }
        pfVar11 = (float *)0x5;
        pfVar20 = pfVar14;
        _strncmp(pfVar14,"skewY");
        if ((int)pfVar20 == 0) {
          iStack_2a4 = 0;
          pfVar11 = (float *)0x1;
          pfVar27 = pfVar14;
          FUN_1096efa5c(pfVar14,&fStack_280,1,&iStack_2a4);
          fVar30 = (fStack_280 / 180.0) * 3.1415927;
          _tanf();
          fStack_29c = fVar30;
          fStack_2a0 = 1.0;
          fStack_290 = (float)uStack_2c8;
          fStack_28c = (float)((ulong)uStack_2c8 >> 0x20);
          fStack_298 = SUB84(dStack_2d0,0);
          fStack_294 = (float)((ulong)dStack_2d0 >> 0x20);
          dVar31 = dStack_2d0;
          goto LAB_1096eef44;
        }
        pfVar14 = (float *)((long)pfVar14 + 1);
      }
      pfVar10 = pfVar15;
    } while (*(char *)pfVar14 != '\0');
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return pfVar20;
  }
  ___stack_chk_fail();
  pcStack_2d8 = FUN_1096eefa4;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar9 = afStack_338;
  pfStack_2f0 = pfVar10;
  pfStack_2e8 = pfVar14;
  ppppppuStack_2e0 = &ppppppuStack_1e0;
  FUN_1096efba4();
  func_0x0001096efcd0();
  pfVar15 = afStack_338;
  FUN_1096ef7b0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f8) {
    return (float *)((ulong)(uint)(float)dVar31 | (long)pfVar20 << 0x20);
  }
  ___stack_chk_fail();
  pcStack_348 = FUN_1096ef014;
  lStack_3b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar19 = (ulong)*(byte *)pfVar9;
  pfVar14 = pfVar15;
  pfVar23 = (float *)pcVar22;
  pfStack_3a0 = unaff_x28;
  pfStack_398 = pfVar27;
  pfStack_390 = pfVar25;
  pfStack_388 = (float *)unaff_x25;
  pfStack_380 = (float *)pcVar22;
  pfStack_378 = (float *)pcVar21;
  pfStack_370 = (float *)pcVar8;
  pfStack_368 = pfVar16;
  pfStack_360 = pfVar10;
  pfStack_358 = pfVar20;
  ppppppuStack_350 = &ppppppuStack_2e0;
  if (*(byte *)pfVar9 != 0) {
    pfVar23 = (float *)0x1ff;
    pfVar10 = (float *)&UNK_10f57e81c;
    pfVar5 = pfVar9;
LAB_1096ef064:
    do {
      pfVar16 = pfVar5;
      pfVar14 = pfVar10;
      _memchr(&UNK_10f57e81c,(int)(char)uVar19,7);
      pfVar11 = pfVar16;
      if (pfVar14 != (float *)0x0) {
        pfVar16 = (float *)((long)pfVar16 + 1);
        uVar19 = (ulong)*(byte *)pfVar16;
        pfVar5 = pfVar16;
        pfVar11 = pfVar16;
        if (*(byte *)pfVar16 != 0) goto LAB_1096ef064;
      }
      while ((pfVar14 = pfVar16, pfVar27 = pfVar16, (int)uVar19 != 0 && ((int)uVar19 != 0x3b))) {
        pfVar16 = (float *)((long)pfVar16 + 1);
        uVar19 = (ulong)*(byte *)pfVar16;
      }
      while ((pfVar11 < pfVar14 &&
             ((*(char *)pfVar14 == ';' ||
              (pfVar25 = pfVar10, _memchr(&UNK_10f57e81c,(long)*(char *)pfVar14,7),
              pfVar27 = pfVar14, pfVar25 != (float *)0x0))))) {
        pfVar14 = (float *)((long)pfVar14 + -1);
        pfVar27 = pfVar11;
      }
      unaff_x28 = (float *)((long)pfVar27 + 1);
      pfVar14 = pfVar11;
      pfVar25 = pfVar11;
      if (pfVar11 < unaff_x28) {
        lVar3 = 0;
        if (pfVar11 <= pfVar27) {
          lVar3 = (long)pfVar27 - (long)pfVar11;
        }
        lVar3 = lVar3 + 1;
        pfVar20 = pfVar11;
        do {
          pfVar25 = pfVar20;
          pfVar14 = pfVar20;
          if (*(char *)pfVar20 == ':') break;
          pfVar20 = (float *)((long)pfVar20 + 1);
          lVar3 = lVar3 + -1;
          pfVar25 = pfVar20;
          pfVar14 = pfVar20;
        } while (lVar3 != 0);
        while ((pfVar11 < pfVar20 &&
               ((*(char *)pfVar20 == ':' ||
                (pfVar9 = pfVar10, _memchr(&UNK_10f57e81c,(long)*(char *)pfVar20,7),
                pfVar25 = pfVar20, pfVar9 != (float *)0x0))))) {
          pfVar20 = (float *)((long)pfVar20 + -1);
          pfVar25 = pfVar11;
        }
      }
      iVar26 = (int)pfVar25 - (int)pfVar11;
      uVar12 = 0x1ff;
      if (iVar26 + 1 < 0x1ff) {
        uVar12 = iVar26 + 1;
      }
      uVar19 = (ulong)uVar12;
      if (iVar26 != -1) {
        uVar19 = (ulong)(int)uVar12;
        _memcpy(afStack_5b0,pfVar11,uVar19);
      }
      *(undefined1 *)((long)afStack_5b0 + uVar19) = 0;
      if (pfVar14 < unaff_x28) {
        lVar3 = 0;
        if (pfVar14 <= pfVar27) {
          lVar3 = (long)pfVar27 - (long)pfVar14;
        }
        lVar3 = lVar3 + 1;
        do {
          if ((*(char *)pfVar14 != ':') &&
             (pfVar11 = pfVar10, _memchr(&UNK_10f57e81c,(long)*(char *)pfVar14,7),
             pfVar11 == (float *)0x0)) break;
          pfVar14 = (float *)((long)pfVar14 + 1);
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      uVar13 = (int)unaff_x28 - (int)pfVar14;
      uVar12 = uVar13;
      if (0x1fe < (int)uVar13) {
        uVar12 = 0x1ff;
      }
      pcVar21 = (char *)(ulong)uVar12;
      if (uVar13 != 0) {
        pcVar21 = (char *)(long)(int)uVar12;
        _memcpy(afStack_7b0,pfVar14,pcVar21);
      }
      *(char *)((long)afStack_7b0 + (long)pcVar21) = '\0';
      pfVar9 = afStack_5b0;
      pfVar14 = pfVar15;
      pfVar11 = afStack_7b0;
      FUN_1096ee638();
      unaff_x25 = (char *)pfVar16;
      if (*(char *)pfVar16 != '\0') {
        unaff_x25 = (char *)((long)pfVar16 + 1);
      }
      uVar19 = (ulong)(byte)*unaff_x25;
      pfVar20 = pfVar15;
      pfVar5 = (float *)unaff_x25;
      pfVar25 = afStack_7b0;
    } while (*unaff_x25 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3b0) {
    return pfVar14;
  }
  ___stack_chk_fail();
  pcStack_7b8 = FUN_1096ef244;
  lStack_7e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    pfVar15 = pfVar14;
    pfVar14 = (float *)((long)pfVar15 + 1);
    bVar1 = *(byte *)pfVar15;
    uVar17 = (ulong)bVar1;
  } while (bVar1 == 0x20);
  pfVar5 = pfVar15;
  uStack_7e0 = uVar19;
  pfStack_7d8 = pfVar16;
  pfStack_7d0 = pfVar10;
  pfStack_7c8 = pfVar20;
  ppppppuStack_7c0 = &ppppppuStack_350;
  _strlen();
  if (bVar1 == 0x23 && pfVar5 != (float *)0x0) {
    uStack_810 = uStack_810 & 0xffffffff00000000;
    bVar1 = *(byte *)pfVar14;
    uVar12 = (uint)bVar1;
    if (bVar1 != 0) {
      pfVar15 = (float *)&UNK_10f57e81c;
      uVar18 = 0;
      do {
        pfVar9 = (float *)(ulong)(uint)(int)(char)bVar1;
        pfVar11 = (float *)0x7;
        pfVar10 = (float *)&UNK_10f57e81c;
        _memchr();
        uVar17 = uVar18;
        if (pfVar10 != (float *)0x0) break;
        uVar17 = uVar18 + 1;
        bVar1 = *(byte *)((long)pfVar14 + uVar18 + 1);
        uVar18 = uVar17;
      } while (bVar1 != 0);
      if ((int)uVar17 == 3) {
        puStack_870 = &uStack_810;
        pfVar9 = (float *)&UNK_10f4fd77a;
        _sscanf(pfVar14);
        uVar12 = ((uint)uStack_810 & 0xf0) << 4 | (uint)uStack_810 & 0xf |
                 ((uint)uStack_810 >> 8 & 0xf) << 0x10;
        uVar12 = uVar12 | uVar12 << 4;
      }
      else {
        pfVar15 = (float *)&UNK_10f57e81c;
        if ((int)uVar17 == 6) {
          puStack_870 = &uStack_810;
          pfVar9 = (float *)&UNK_10f4fd77a;
          _sscanf(pfVar14);
          uVar12 = (uint)uStack_810;
        }
        else {
          uVar12 = 0;
        }
      }
    }
    pfVar16 = (float *)(ulong)(uVar12 & 0xff00 | uVar12 >> 0x10 & 0xff | (uVar12 & 0xff) << 0x10);
  }
  else if ((((bVar1 == 0x72 && (float *)0x3 < pfVar5) && (*(char *)pfVar14 == 'g')) &&
           (*(char *)((long)pfVar15 + 2) == 'b')) && (*(char *)((long)pfVar15 + 3) == '(')) {
    iStack_838 = -1;
    uStack_834 = 0xffffffff;
    uStack_83c = 0xffffffff;
    uStack_808 = 0;
    uStack_810 = 0;
    uStack_7f8 = 0;
    uStack_800 = 0;
    uStack_828 = 0;
    uStack_830 = 0;
    uStack_818 = 0;
    uStack_820 = 0;
    puStack_850 = &uStack_83c;
    puStack_858 = &uStack_830;
    piStack_860 = &iStack_838;
    puStack_868 = &uStack_810;
    puStack_870 = (ulong *)&uStack_834;
    _sscanf(pfVar15 + 1,&UNK_10f57e83b);
    puVar6 = &uStack_810;
    pfVar9 = (float *)0x25;
    _strchr();
    if (puVar6 == (ulong *)0x0) {
      uVar12 = uStack_834 | iStack_838 << 8;
      uVar13 = uStack_83c;
    }
    else {
      uVar12 = (uStack_834 * 0xff) / 100 | (uint)(iStack_838 * 0xff) / 100 << 8;
      uVar13 = (uStack_83c * 0xff) / 100;
    }
    pfVar16 = (float *)(ulong)(uVar12 | uVar13 << 0x10);
  }
  else {
    pfVar14 = (float *)&UNK_110b0af38;
    uVar17 = 10;
    do {
      iVar26 = (int)*(undefined8 *)(pfVar14 + -2);
      pfVar9 = pfVar15;
      _strcmp();
      if (iVar26 == 0) {
        pfVar16 = (float *)(ulong)(uint)*pfVar14;
        goto LAB_1096ef460;
      }
      pfVar14 = pfVar14 + 4;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
    pfVar16 = (float *)0x808080;
  }
LAB_1096ef460:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7e8) {
    return pfVar16;
  }
  ___stack_chk_fail();
  pfVar2 = (float *)auStack_930;
  pcStack_878 = FUN_1096ef4a0;
  pppppppuVar28 = &ppppppuStack_880;
  pfVar10 = (float *)0x0;
  lStack_8e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_8e0 = unaff_d9;
  uStack_8d8 = unaff_d8;
  pfStack_8d0 = unaff_x28;
  pfStack_8c8 = pfVar27;
  pfStack_8c0 = pfVar25;
  pfStack_8b8 = (float *)unaff_x25;
  pfStack_8b0 = pfVar23;
  pfStack_8a8 = (float *)pcVar21;
  uStack_8a0 = uVar19;
  uStack_898 = uVar17;
  pfStack_890 = pfVar15;
  pfStack_888 = pfVar14;
  ppppppuStack_880 = &ppppppuStack_7c0;
  if ((*(char *)pfVar9 != '\0') && (*(char *)pfVar9 != 'n')) {
    uVar12 = 0;
LAB_1096ef510:
    acStack_928[0] = '\0';
    cVar24 = *(char *)pfVar9;
    pfVar15 = pfVar9;
    while (cVar24 != '\0') {
      puVar7 = &UNK_10f57e81c;
      _memchr(&UNK_10f57e81c,(int)cVar24,7);
      if ((cVar24 != ',') && (puVar7 == (undefined *)0x0)) {
        iVar26 = 0;
        goto LAB_1096ef550;
      }
      pfVar15 = (float *)((long)pfVar15 + 1);
      cVar24 = *(char *)pfVar15;
    }
    lVar3 = 0;
    goto LAB_1096ef590;
  }
LAB_1096ef624:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8e8) {
    return pfVar10;
  }
  uVar29 = 0x1096ef664;
  ___stack_chk_fail();
FUN_1096ef664:
  *(float **)((long)pfVar2 + -0x20) = pfVar15;
  *(float **)((long)pfVar2 + -0x18) = pfVar14;
  *(undefined8 ********)((long)pfVar2 + -0x10) = pppppppuVar28;
  *(undefined8 *)((long)pfVar2 + -8) = uVar29;
  pfVar14 = pfVar10;
  _strcmp();
  if ((int)pfVar14 != 0) {
    pfVar14 = pfVar10;
    _strcmp(pfVar10,"round");
    if ((int)pfVar14 == 0) {
      pfVar14 = (float *)0x1;
    }
    else {
      _strcmp(pfVar10,"square");
      uVar12 = 2;
      if ((int)pfVar10 != 0) {
        uVar12 = 0;
      }
      pfVar14 = (float *)(ulong)uVar12;
    }
  }
  return pfVar14;
  while( true ) {
    if (iVar26 < 0x3f) {
      acStack_928[iVar26] = cVar24;
      iVar26 = iVar26 + 1;
    }
    pfVar15 = (float *)((long)pfVar15 + 1);
    cVar24 = *(char *)pfVar15;
    if (cVar24 == '\0') break;
LAB_1096ef550:
    puVar7 = &UNK_10f57e81c;
    _memchr(&UNK_10f57e81c,(int)cVar24,7);
    if ((cVar24 == ',') || (puVar7 != (undefined *)0x0)) break;
  }
  lVar3 = (long)iVar26;
LAB_1096ef590:
  acStack_928[lVar3] = '\0';
  if (acStack_928[0] == '\0') goto LAB_1096ef5ec;
  if ((int)uVar12 < 8) {
    fVar30 = pfVar16[10000];
    fVar33 = pfVar16[0x2711];
    pcVar8 = acStack_928;
    FUN_1096eefa4(pcVar8);
    fVar34 = 0.0;
    FUN_1096ef8f8(0,SQRT(fVar33 * fVar33 + fVar30 * fVar30) / 1.4142135,pfVar16,pcVar8);
    pfVar11[(int)uVar12] = ABS(fVar34);
    uVar12 = uVar12 + 1;
  }
  pfVar9 = pfVar15;
  if (*(char *)pfVar15 == '\0') goto LAB_1096ef5ec;
  goto LAB_1096ef510;
LAB_1096ef5ec:
  if ((int)uVar12 < 1) {
    pfVar10 = (float *)0x0;
    pfVar14 = pfVar11;
  }
  else {
    uVar19 = (ulong)uVar12;
    fVar30 = 0.0;
    do {
      pfVar14 = pfVar11 + 1;
      fVar30 = fVar30 + *pfVar11;
      uVar19 = uVar19 - 1;
      pfVar11 = pfVar14;
    } while (uVar19 != 0);
    if (fVar30 <= 1e-06) {
      uVar12 = 0;
    }
    pfVar10 = (float *)(ulong)uVar12;
  }
  goto LAB_1096ef624;
}



/* Entry: 1096ee638; end: 1096eebeb;  */

/* WARNING: Possible PIC construction at 0x0001096eea8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001096eea90) */

float * FUN_1096ee638(double param_1,float *param_2,char *param_3,float *param_4)

{
  byte bVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  ulong *puVar5;
  undefined *puVar6;
  float *pfVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float *pfVar17;
  char *pcVar18;
  char *unaff_x24;
  char *pcVar19;
  char *unaff_x25;
  char cVar20;
  float *unaff_x26;
  int iVar21;
  float *unaff_x27;
  float *unaff_x28;
  undefined8 *******pppppppuVar22;
  undefined8 uVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  ulong unaff_d8;
  undefined8 unaff_d9;
  float fVar28;
  undefined1 auStack_7d0 [8];
  char acStack_7c8 [64];
  long lStack_788;
  undefined8 uStack_780;
  ulong uStack_778;
  float *pfStack_770;
  float *pfStack_768;
  undefined1 *puStack_760;
  float *pfStack_758;
  char *pcStack_750;
  float *pfStack_748;
  ulong uStack_740;
  ulong uStack_738;
  float *pfStack_730;
  float *pfStack_728;
  undefined8 ******ppppppuStack_720;
  code *pcStack_718;
  ulong *puStack_710;
  ulong *puStack_708;
  int *piStack_700;
  undefined8 *puStack_6f8;
  uint *puStack_6f0;
  uint uStack_6dc;
  int iStack_6d8;
  uint uStack_6d4;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  ulong uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  long lStack_688;
  ulong uStack_680;
  float *pfStack_678;
  float *pfStack_670;
  float *pfStack_668;
  undefined8 ******ppppppuStack_660;
  code *pcStack_658;
  float afStack_650 [128];
  float afStack_450 [128];
  long lStack_250;
  float *pfStack_240;
  float *pfStack_238;
  undefined1 *puStack_230;
  float *pfStack_228;
  char *pcStack_220;
  float *pfStack_218;
  float *pfStack_210;
  float *pfStack_208;
  float *pfStack_200;
  float *pfStack_1f8;
  undefined8 ******ppppppuStack_1f0;
  code *pcStack_1e8;
  float afStack_1d8 [16];
  long lStack_198;
  float *pfStack_190;
  float *pfStack_188;
  undefined8 ******ppppppuStack_180;
  code *pcStack_178;
  double dStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  int iStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 ******ppppppuStack_80;
  code *pcStack_78;
  float afStack_70 [6];
  long lStack_58;
  
  pfVar2 = afStack_70;
  pfVar12 = afStack_70;
  pppppppuVar22 = (undefined8 *******)&stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar18 = (char *)(param_2 + 0x2400);
  fVar24 = param_2[0x2700];
  pfVar11 = (float *)(long)(int)fVar24;
  pfVar13 = (float *)param_3;
  pfVar7 = param_4;
  _strcmp(param_3,"style");
  if ((int)pfVar13 == 0) {
    pcVar19 = (char *)param_4;
    FUN_1096ef014();
LAB_1096eeb94:
    pfVar13 = (float *)0x1;
  }
  else {
    pfVar11 = param_2 + (long)(int)fVar24 * 0x4e;
    pfVar13 = (float *)param_3;
    _strcmp(param_3,"display");
    if ((int)pfVar13 == 0) {
      pcVar19 = "none";
      param_2 = param_4;
      _strcmp();
      if ((int)param_2 == 0) {
        *(char *)((long)pfVar11 + 0x136) = '\0';
      }
      goto LAB_1096eeb94;
    }
    pfVar13 = (float *)param_3;
    _strcmp(param_3,"fill");
    if ((int)pfVar13 != 0) {
      pcVar19 = &DAT_10f68f0f6;
      pfVar13 = (float *)param_3;
      _strcmp();
      if ((int)pfVar13 == 0) {
        param_2 = param_4;
        FUN_1096ef7b0();
        fVar24 = 0.0;
        if (0.0 <= (float)param_1) {
          fVar24 = (float)param_1;
        }
        fVar28 = 1.0;
        if (fVar24 <= 1.0) {
          fVar28 = fVar24;
        }
        pfVar11[0x18] = fVar28;
      }
      else {
        pcVar19 = "fill-opacity";
        pfVar13 = (float *)param_3;
        _strcmp();
        if ((int)pfVar13 == 0) {
          param_2 = param_4;
          FUN_1096ef7b0();
          fVar24 = 0.0;
          if (0.0 <= (float)param_1) {
            fVar24 = (float)param_1;
          }
          fVar28 = 1.0;
          if (fVar24 <= 1.0) {
            fVar28 = fVar24;
          }
          pfVar11[0x19] = fVar28;
        }
        else {
          pfVar13 = (float *)param_3;
          _strcmp(param_3,"stroke");
          if ((int)pfVar13 == 0) {
            pcVar19 = "none";
            param_2 = param_4;
            _strcmp();
            if ((int)param_2 != 0) {
              pcVar19 = "url(";
              pfVar7 = (float *)0x4;
              param_2 = param_4;
              _strncmp();
              if ((int)param_2 == 0) {
                uVar16 = 0;
                *(char *)((long)pfVar11 + 0x135) = '\x02';
                pfVar13 = pfVar11 + 0x2b;
                pfVar12 = param_4 + 1;
                if (*(char *)pfVar12 == '#') {
                  pfVar12 = (float *)((long)param_4 + 5);
                }
                do {
                  if (*(char *)((long)pfVar12 + uVar16) == ')') break;
                  *(char *)((long)pfVar13 + uVar16) = *(char *)((long)pfVar12 + uVar16);
                  uVar16 = uVar16 + 1;
                } while (uVar16 != 0x3f);
                goto LAB_1096ee970;
              }
              pfVar13 = (float *)0x1;
              *(char *)((long)pfVar11 + 0x135) = '\x01';
              param_2 = param_4;
              FUN_1096ef244();
              pfVar11[0x17] = SUB84(param_2,0);
              goto LAB_1096eeb98;
            }
            *(char *)((long)pfVar11 + 0x135) = '\0';
          }
          else {
            pfVar13 = (float *)param_3;
            _strcmp(param_3,"stroke-width");
            if ((int)pfVar13 == 0) {
              unaff_d8 = (ulong)(uint)(SQRT(param_2[0x2711] * param_2[0x2711] +
                                            param_2[10000] * param_2[10000]) / 1.4142135);
              pcVar19 = (char *)param_4;
              FUN_1096eefa4();
              fVar24 = 0.0;
              FUN_1096ef8f8(0,unaff_d8);
              pfVar11[0x3b] = fVar24;
            }
            else {
              pfVar13 = (float *)param_3;
              _strcmp(param_3,"stroke-dasharray");
              if ((int)pfVar13 == 0) {
                pfVar7 = pfVar11 + 0x3d;
                pcVar19 = (char *)param_4;
                FUN_1096ef4a0();
                pfVar11[0x45] = SUB84(param_2,0);
              }
              else {
                pfVar13 = (float *)param_3;
                _strcmp(param_3,"stroke-dashoffset");
                if ((int)pfVar13 == 0) {
                  unaff_d8 = (ulong)(uint)(SQRT(param_2[0x2711] * param_2[0x2711] +
                                                param_2[10000] * param_2[10000]) / 1.4142135);
                  pcVar19 = (char *)param_4;
                  FUN_1096eefa4();
                  fVar24 = 0.0;
                  FUN_1096ef8f8(0,unaff_d8);
                  pfVar11[0x3c] = fVar24;
                }
                else {
                  pcVar19 = "stroke-opacity";
                  pfVar13 = (float *)param_3;
                  _strcmp();
                  if ((int)pfVar13 == 0) {
                    param_2 = param_4;
                    FUN_1096ef7b0();
                    fVar24 = 0.0;
                    if (0.0 <= (float)param_1) {
                      fVar24 = (float)param_1;
                    }
                    fVar28 = 1.0;
                    if (fVar24 <= 1.0) {
                      fVar28 = fVar24;
                    }
                    pfVar11[0x1a] = fVar28;
                  }
                  else {
                    pfVar13 = (float *)param_3;
                    _strcmp(param_3,"stroke-linecap");
                    if ((int)pfVar13 == 0) {
                      uVar23 = 0x1096eea90;
                      pfVar12 = param_4;
                      goto FUN_1096ef664;
                    }
                    pcVar19 = "stroke-linejoin";
                    pfVar13 = (float *)param_3;
                    _strcmp();
                    if ((int)pfVar13 == 0) {
                      param_2 = param_4;
                      func_0x0001096ef6c8();
                      *(char *)(pfVar11 + 0x46) = (char)param_2;
                    }
                    else {
                      pcVar19 = "stroke-miterlimit";
                      pfVar13 = (float *)param_3;
                      _strcmp();
                      if ((int)pfVar13 == 0) {
                        param_2 = param_4;
                        FUN_1096ef7b0();
                        fVar24 = 0.0;
                        if (0.0 <= (float)param_1) {
                          fVar24 = (float)param_1;
                        }
                        pfVar11[0x47] = fVar24;
                      }
                      else {
                        pcVar19 = "fill-rule";
                        pfVar13 = (float *)param_3;
                        _strcmp();
                        if ((int)pfVar13 == 0) {
                          param_2 = param_4;
                          func_0x0001096ef72c();
                          *(char *)(pfVar11 + 0x48) = (char)param_2;
                        }
                        else {
                          pfVar13 = (float *)param_3;
                          _strcmp(param_3,"font-size");
                          if ((int)pfVar13 == 0) {
                            unaff_d8 = (ulong)(uint)(SQRT(param_2[0x2711] * param_2[0x2711] +
                                                          param_2[10000] * param_2[10000]) /
                                                    1.4142135);
                            pcVar19 = (char *)param_4;
                            FUN_1096eefa4();
                            fVar24 = 0.0;
                            FUN_1096ef8f8(0,unaff_d8);
                            pfVar11[0x49] = fVar24;
                          }
                          else {
                            pfVar13 = (float *)param_3;
                            _strcmp(param_3,"transform");
                            if ((int)pfVar13 == 0) {
                              FUN_1096eebec(afStack_70,param_4);
                              param_2 = pfVar11 + 0x10;
                              FUN_1096ef770();
                              pcVar19 = (char *)pfVar12;
                            }
                            else {
                              pcVar19 = "stop-color";
                              pfVar13 = (float *)param_3;
                              _strcmp();
                              if ((int)pfVar13 == 0) {
                                param_2 = param_4;
                                FUN_1096ef244();
                                pfVar11[0x4a] = SUB84(param_2,0);
                              }
                              else {
                                pcVar19 = "stop-opacity";
                                pfVar13 = (float *)param_3;
                                _strcmp();
                                if ((int)pfVar13 == 0) {
                                  param_2 = param_4;
                                  FUN_1096ef7b0();
                                  fVar24 = 0.0;
                                  if (0.0 <= (float)param_1) {
                                    fVar24 = (float)param_1;
                                  }
                                  fVar28 = 1.0;
                                  if (fVar24 <= 1.0) {
                                    fVar28 = fVar24;
                                  }
                                  pfVar11[0x4b] = fVar28;
                                }
                                else {
                                  pcVar19 = &DAT_10f63975c;
                                  pfVar12 = (float *)param_3;
                                  _strcmp();
                                  if ((int)pfVar12 == 0) {
                                    pcVar19 = (char *)param_4;
                                    FUN_1096eefa4();
                                    fVar24 = 0.0;
                                    FUN_1096ef8f8(0,0x3f800000);
                                    pfVar11[0x4c] = fVar24;
                                  }
                                  else {
                                    if (((*param_3 != 'i') || (*(char *)((long)param_3 + 1) != 'd'))
                                       || (*(char *)((long)param_3 + 2) != '\0')) {
                                      pfVar13 = (float *)0x0;
                                      param_2 = pfVar12;
                                      goto LAB_1096eeb98;
                                    }
                                    pfVar7 = (float *)0x3f;
                                    param_2 = pfVar11;
                                    pcVar19 = (char *)param_4;
                                    _strncpy();
                                    *(char *)((long)pfVar11 + 0x3f) = '\0';
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_1096eeb94;
    }
    pcVar19 = "none";
    param_2 = param_4;
    _strcmp();
    if ((int)param_2 == 0) {
      *(char *)(pfVar11 + 0x4d) = '\0';
      goto LAB_1096eeb94;
    }
    pcVar19 = "url(";
    pfVar7 = (float *)0x4;
    param_2 = param_4;
    _strncmp();
    if ((int)param_2 == 0) {
      uVar16 = 0;
      *(char *)(pfVar11 + 0x4d) = '\x02';
      pfVar13 = pfVar11 + 0x1b;
      pfVar12 = param_4 + 1;
      if (*(char *)pfVar12 == '#') {
        pfVar12 = (float *)((long)param_4 + 5);
      }
      do {
        if (*(char *)((long)pfVar12 + uVar16) == ')') break;
        *(char *)((long)pfVar13 + uVar16) = *(char *)((long)pfVar12 + uVar16);
        uVar16 = uVar16 + 1;
      } while (uVar16 != 0x3f);
LAB_1096ee970:
      param_4 = param_4 + 1;
      *(char *)((long)pfVar13 + (uVar16 & 0xffffffff)) = '\0';
      goto LAB_1096eeb94;
    }
    pfVar13 = (float *)0x1;
    *(char *)(pfVar11 + 0x4d) = '\x01';
    param_2 = param_4;
    FUN_1096ef244();
    pfVar11[0x16] = SUB84(param_2,0);
  }
LAB_1096eeb98:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pfVar13;
  }
  ___stack_chk_fail();
  ppppppuStack_80 = pppppppuVar22;
  pcStack_78 = FUN_1096eebec;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar25 = 5.26354424712089e-315;
  uStack_158 = 0x3f80000000000000;
  uStack_160 = 0x3f800000;
  param_2[2] = 0.0;
  param_2[3] = 1.0;
  param_2[0] = 1.0;
  param_2[1] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  pfVar3 = param_2;
  if (*pcVar19 != '\0') {
    pfVar13 = (float *)&DAT_10f638b90;
    param_3 = "translate";
    unaff_d8 = 0;
    pcVar18 = "scale";
    unaff_d9 = 0;
    unaff_x24 = "rotate";
    unaff_x28 = (float *)0x43340000;
    unaff_x25 = "skewX";
    dVar25 = 0.0078125;
    uStack_168 = 0;
    dStack_170 = 0.0078125;
    pfVar11 = (float *)pcVar19;
    do {
      pfVar7 = pfVar11;
      _strncmp(pfVar11,&DAT_10f638b90,6);
      if ((int)pfVar7 == 0) {
        iStack_144 = 0;
        pfVar7 = (float *)0x6;
        unaff_x27 = pfVar11;
        FUN_1096efa5c(pfVar11,&fStack_120,6,&iStack_144);
        if (iStack_144 == 6) {
          dVar25 = (double)CONCAT44(fStack_11c,fStack_120);
          fStack_138 = fStack_118;
          fStack_134 = fStack_114;
          fStack_140 = fStack_120;
          fStack_13c = fStack_11c;
          fStack_130 = (float)uStack_110;
          fStack_12c = (float)((ulong)uStack_110 >> 0x20);
        }
LAB_1096eef44:
        pfVar11 = (float *)((long)pfVar11 + (long)(int)unaff_x27);
        pfVar3 = param_2;
        FUN_1096ef770(param_2,&fStack_140);
      }
      else {
        pfVar7 = pfVar11;
        _strncmp(pfVar11,"translate",9);
        if ((int)pfVar7 == 0) {
          iStack_144 = 0;
          pfVar7 = (float *)0x2;
          unaff_x27 = pfVar11;
          FUN_1096efa5c(pfVar11,&fStack_120,2,&iStack_144);
          fStack_12c = 0.0;
          if (iStack_144 != 1) {
            fStack_12c = fStack_11c;
          }
          dVar25 = (double)(ulong)(uint)fStack_12c;
          fStack_138 = (float)uStack_158;
          fStack_134 = (float)((ulong)uStack_158 >> 0x20);
          fStack_140 = (float)uStack_160;
          fStack_13c = (float)((ulong)uStack_160 >> 0x20);
          fStack_130 = fStack_120;
          goto LAB_1096eef44;
        }
        pfVar7 = pfVar11;
        _strncmp(pfVar11,"scale",5);
        if ((int)pfVar7 == 0) {
          iStack_144 = 0;
          pfVar7 = (float *)0x2;
          unaff_x27 = pfVar11;
          FUN_1096efa5c(pfVar11,&fStack_120,2,&iStack_144);
          dVar25 = (double)(ulong)(uint)fStack_120;
          fStack_134 = fStack_120;
          if (iStack_144 != 1) {
            fStack_134 = fStack_11c;
          }
          fStack_140 = fStack_120;
          fStack_13c = 0.0;
          fStack_138 = 0.0;
          fStack_130 = 0.0;
          fStack_12c = 0.0;
          goto LAB_1096eef44;
        }
        pfVar7 = pfVar11;
        _strncmp(pfVar11,"rotate",6);
        if ((int)pfVar7 == 0) {
          iStack_144 = 0;
          pfVar7 = (float *)0x3;
          unaff_x27 = pfVar11;
          FUN_1096efa5c(pfVar11,&fStack_120,3,&iStack_144);
          if (iStack_144 == 1) {
            fStack_11c = 0.0;
            fStack_118 = 0.0;
LAB_1096eeeb8:
            unaff_x26 = (float *)0x0;
            fVar24 = 0.0;
            fVar28 = 0.0;
          }
          else {
            if (iStack_144 < 2) goto LAB_1096eeeb8;
            fVar28 = 0.0 - fStack_11c;
            fVar24 = 0.0 - fStack_118;
            unaff_x26 = (float *)0x1;
          }
          fVar26 = 180.0;
          fVar27 = (fStack_120 / 180.0) * 3.1415927;
          ___sincosf_stret();
          fStack_140 = fVar26 - fVar27 * 0.0;
          fStack_138 = fVar26 * 0.0 - fVar27;
          fStack_130 = -(fVar27 * fVar24) + fVar26 * fVar28 + 0.0;
          fStack_13c = fVar27 + fVar26 * 0.0;
          fStack_134 = fVar26 + fVar27 * 0.0;
          fStack_12c = fVar24 * fVar26 + fVar27 * fVar28 + 0.0;
          if ((int)unaff_x26 != 0) {
            fVar24 = fStack_13c * 0.0;
            fStack_13c = fStack_13c + fStack_140 * 0.0;
            fStack_140 = fStack_140 + fVar24;
            fVar24 = fStack_134 * 0.0;
            fStack_134 = fStack_134 + fStack_138 * 0.0;
            fStack_138 = fStack_138 + fVar24;
            fVar24 = fStack_130 * 0.0;
            fStack_130 = fStack_130 + fStack_12c * 0.0 + fStack_11c;
            fStack_12c = fStack_12c + fVar24 + fStack_118;
          }
          dVar25 = (double)(ulong)(uint)fStack_12c;
          goto LAB_1096eef44;
        }
        pfVar7 = pfVar11;
        _strncmp(pfVar11,"skewX",5);
        if ((int)pfVar7 == 0) {
          iStack_144 = 0;
          pfVar7 = (float *)0x1;
          unaff_x27 = pfVar11;
          FUN_1096efa5c(pfVar11,&fStack_120,1,&iStack_144);
          dVar25 = (double)(ulong)(uint)((fStack_120 / 180.0) * 3.1415927);
          _tanf();
          fStack_140 = 1.0;
          fStack_13c = 0.0;
          fStack_138 = SUB84(dVar25,0);
          fStack_134 = 1.0;
          fStack_130 = 0.0;
          fStack_12c = 0.0;
          goto LAB_1096eef44;
        }
        pfVar7 = (float *)0x5;
        pfVar3 = pfVar11;
        _strncmp(pfVar11,"skewY");
        if ((int)pfVar3 == 0) {
          iStack_144 = 0;
          pfVar7 = (float *)0x1;
          unaff_x27 = pfVar11;
          FUN_1096efa5c(pfVar11,&fStack_120,1,&iStack_144);
          fVar24 = (fStack_120 / 180.0) * 3.1415927;
          _tanf();
          fStack_13c = fVar24;
          fStack_140 = 1.0;
          fStack_130 = (float)uStack_168;
          fStack_12c = (float)((ulong)uStack_168 >> 0x20);
          fStack_138 = SUB84(dStack_170,0);
          fStack_134 = (float)((ulong)dStack_170 >> 0x20);
          dVar25 = dStack_170;
          goto LAB_1096eef44;
        }
        pfVar11 = (float *)((long)pfVar11 + 1);
      }
      param_4 = param_2;
    } while (*(char *)pfVar11 != '\0');
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return pfVar3;
  }
  ___stack_chk_fail();
  pcStack_178 = FUN_1096eefa4;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar17 = afStack_1d8;
  pfStack_190 = param_4;
  pfStack_188 = pfVar11;
  ppppppuStack_180 = &ppppppuStack_80;
  FUN_1096efba4();
  func_0x0001096efcd0();
  pfVar12 = afStack_1d8;
  FUN_1096ef7b0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return (float *)((ulong)(uint)(float)dVar25 | (long)pfVar3 << 0x20);
  }
  ___stack_chk_fail();
  pcStack_1e8 = FUN_1096ef014;
  lStack_250 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar16 = (ulong)*(byte *)pfVar17;
  pfVar11 = pfVar12;
  pcVar19 = unaff_x24;
  pfStack_240 = unaff_x28;
  pfStack_238 = unaff_x27;
  puStack_230 = (undefined1 *)unaff_x26;
  pfStack_228 = (float *)unaff_x25;
  pcStack_220 = unaff_x24;
  pfStack_218 = (float *)pcVar18;
  pfStack_210 = (float *)param_3;
  pfStack_208 = pfVar13;
  pfStack_200 = param_4;
  pfStack_1f8 = pfVar3;
  ppppppuStack_1f0 = &ppppppuStack_180;
  if (*(byte *)pfVar17 != 0) {
    pcVar19 = (char *)0x1ff;
    param_4 = (float *)&UNK_10f57e81c;
    pfVar4 = pfVar17;
LAB_1096ef064:
    do {
      pfVar13 = pfVar4;
      pfVar11 = param_4;
      _memchr(&UNK_10f57e81c,(int)(char)uVar16,7);
      pfVar7 = pfVar13;
      if (pfVar11 != (float *)0x0) {
        pfVar13 = (float *)((long)pfVar13 + 1);
        uVar16 = (ulong)*(byte *)pfVar13;
        pfVar4 = pfVar13;
        pfVar7 = pfVar13;
        if (*(byte *)pfVar13 != 0) goto LAB_1096ef064;
      }
      while ((pfVar11 = pfVar13, unaff_x27 = pfVar13, (int)uVar16 != 0 && ((int)uVar16 != 0x3b))) {
        pfVar13 = (float *)((long)pfVar13 + 1);
        uVar16 = (ulong)*(byte *)pfVar13;
      }
      while ((pfVar7 < pfVar11 &&
             ((*(char *)pfVar11 == ';' ||
              (pfVar3 = param_4, _memchr(&UNK_10f57e81c,(long)*(char *)pfVar11,7),
              unaff_x27 = pfVar11, pfVar3 != (float *)0x0))))) {
        pfVar11 = (float *)((long)pfVar11 + -1);
        unaff_x27 = pfVar7;
      }
      unaff_x28 = (float *)((long)unaff_x27 + 1);
      pfVar11 = pfVar7;
      pfVar3 = pfVar7;
      if (pfVar7 < unaff_x28) {
        lVar9 = 0;
        if (pfVar7 <= unaff_x27) {
          lVar9 = (long)unaff_x27 - (long)pfVar7;
        }
        lVar9 = lVar9 + 1;
        pfVar17 = pfVar7;
        do {
          pfVar3 = pfVar17;
          pfVar11 = pfVar17;
          if (*(char *)pfVar17 == ':') break;
          pfVar17 = (float *)((long)pfVar17 + 1);
          lVar9 = lVar9 + -1;
          pfVar3 = pfVar17;
          pfVar11 = pfVar17;
        } while (lVar9 != 0);
        while ((pfVar7 < pfVar17 &&
               ((*(char *)pfVar17 == ':' ||
                (pfVar4 = param_4, _memchr(&UNK_10f57e81c,(long)*(char *)pfVar17,7),
                pfVar3 = pfVar17, pfVar4 != (float *)0x0))))) {
          pfVar17 = (float *)((long)pfVar17 + -1);
          pfVar3 = pfVar7;
        }
      }
      iVar21 = (int)pfVar3 - (int)pfVar7;
      uVar8 = 0x1ff;
      if (iVar21 + 1 < 0x1ff) {
        uVar8 = iVar21 + 1;
      }
      uVar16 = (ulong)uVar8;
      if (iVar21 != -1) {
        uVar16 = (ulong)(int)uVar8;
        _memcpy(afStack_450,pfVar7,uVar16);
      }
      *(undefined1 *)((long)afStack_450 + uVar16) = 0;
      if (pfVar11 < unaff_x28) {
        lVar9 = 0;
        if (pfVar11 <= unaff_x27) {
          lVar9 = (long)unaff_x27 - (long)pfVar11;
        }
        lVar9 = lVar9 + 1;
        do {
          if ((*(char *)pfVar11 != ':') &&
             (pfVar7 = param_4, _memchr(&UNK_10f57e81c,(long)*(char *)pfVar11,7),
             pfVar7 == (float *)0x0)) break;
          pfVar11 = (float *)((long)pfVar11 + 1);
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      uVar10 = (int)unaff_x28 - (int)pfVar11;
      uVar8 = uVar10;
      if (0x1fe < (int)uVar10) {
        uVar8 = 0x1ff;
      }
      pcVar18 = (char *)(ulong)uVar8;
      if (uVar10 != 0) {
        pcVar18 = (char *)(long)(int)uVar8;
        _memcpy(afStack_650,pfVar11,pcVar18);
      }
      *(char *)((long)afStack_650 + (long)pcVar18) = '\0';
      pfVar17 = afStack_450;
      pfVar11 = pfVar12;
      pfVar7 = afStack_650;
      FUN_1096ee638();
      unaff_x25 = (char *)pfVar13;
      if (*(char *)pfVar13 != '\0') {
        unaff_x25 = (char *)((long)pfVar13 + 1);
      }
      uVar16 = (ulong)(byte)*unaff_x25;
      pfVar3 = pfVar12;
      pfVar4 = (float *)unaff_x25;
      unaff_x26 = afStack_650;
    } while (*unaff_x25 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_250) {
    return pfVar11;
  }
  ___stack_chk_fail();
  pcStack_658 = FUN_1096ef244;
  lStack_688 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    pfVar12 = pfVar11;
    pfVar11 = (float *)((long)pfVar12 + 1);
    bVar1 = *(byte *)pfVar12;
    uVar14 = (ulong)bVar1;
  } while (bVar1 == 0x20);
  pfVar4 = pfVar12;
  uStack_680 = uVar16;
  pfStack_678 = pfVar13;
  pfStack_670 = param_4;
  pfStack_668 = pfVar3;
  ppppppuStack_660 = &ppppppuStack_1f0;
  _strlen();
  if (bVar1 == 0x23 && pfVar4 != (float *)0x0) {
    uStack_6b0 = uStack_6b0 & 0xffffffff00000000;
    bVar1 = *(byte *)pfVar11;
    uVar8 = (uint)bVar1;
    if (bVar1 != 0) {
      pfVar12 = (float *)&UNK_10f57e81c;
      uVar15 = 0;
      do {
        pfVar17 = (float *)(ulong)(uint)(int)(char)bVar1;
        pfVar7 = (float *)0x7;
        pfVar13 = (float *)&UNK_10f57e81c;
        _memchr();
        uVar14 = uVar15;
        if (pfVar13 != (float *)0x0) break;
        uVar14 = uVar15 + 1;
        bVar1 = *(byte *)((long)pfVar11 + uVar15 + 1);
        uVar15 = uVar14;
      } while (bVar1 != 0);
      if ((int)uVar14 == 3) {
        puStack_710 = &uStack_6b0;
        pfVar17 = (float *)&UNK_10f4fd77a;
        _sscanf(pfVar11);
        uVar8 = ((uint)uStack_6b0 & 0xf0) << 4 | (uint)uStack_6b0 & 0xf |
                ((uint)uStack_6b0 >> 8 & 0xf) << 0x10;
        uVar8 = uVar8 | uVar8 << 4;
      }
      else {
        pfVar12 = (float *)&UNK_10f57e81c;
        if ((int)uVar14 == 6) {
          puStack_710 = &uStack_6b0;
          pfVar17 = (float *)&UNK_10f4fd77a;
          _sscanf(pfVar11);
          uVar8 = (uint)uStack_6b0;
        }
        else {
          uVar8 = 0;
        }
      }
    }
    pfVar13 = (float *)(ulong)(uVar8 & 0xff00 | uVar8 >> 0x10 & 0xff | (uVar8 & 0xff) << 0x10);
  }
  else if ((((bVar1 == 0x72 && (float *)0x3 < pfVar4) && (*(char *)pfVar11 == 'g')) &&
           (*(char *)((long)pfVar12 + 2) == 'b')) && (*(char *)((long)pfVar12 + 3) == '(')) {
    iStack_6d8 = -1;
    uStack_6d4 = 0xffffffff;
    uStack_6dc = 0xffffffff;
    uStack_6a8 = 0;
    uStack_6b0 = 0;
    uStack_698 = 0;
    uStack_6a0 = 0;
    uStack_6c8 = 0;
    uStack_6d0 = 0;
    uStack_6b8 = 0;
    uStack_6c0 = 0;
    puStack_6f0 = &uStack_6dc;
    puStack_6f8 = &uStack_6d0;
    piStack_700 = &iStack_6d8;
    puStack_708 = &uStack_6b0;
    puStack_710 = (ulong *)&uStack_6d4;
    _sscanf(pfVar12 + 1,&UNK_10f57e83b);
    puVar5 = &uStack_6b0;
    pfVar17 = (float *)0x25;
    _strchr();
    if (puVar5 == (ulong *)0x0) {
      uVar8 = uStack_6d4 | iStack_6d8 << 8;
      uVar10 = uStack_6dc;
    }
    else {
      uVar8 = (uStack_6d4 * 0xff) / 100 | (uint)(iStack_6d8 * 0xff) / 100 << 8;
      uVar10 = (uStack_6dc * 0xff) / 100;
    }
    pfVar13 = (float *)(ulong)(uVar8 | uVar10 << 0x10);
  }
  else {
    pfVar11 = (float *)&UNK_110b0af38;
    uVar14 = 10;
    do {
      iVar21 = (int)*(undefined8 *)(pfVar11 + -2);
      pfVar17 = pfVar12;
      _strcmp();
      if (iVar21 == 0) {
        pfVar13 = (float *)(ulong)(uint)*pfVar11;
        goto LAB_1096ef460;
      }
      pfVar11 = pfVar11 + 4;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
    pfVar13 = (float *)0x808080;
  }
LAB_1096ef460:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_688) {
    return pfVar13;
  }
  ___stack_chk_fail();
  pfVar2 = (float *)auStack_7d0;
  pcStack_718 = FUN_1096ef4a0;
  pppppppuVar22 = &ppppppuStack_720;
  param_4 = (float *)0x0;
  lStack_788 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_780 = unaff_d9;
  uStack_778 = unaff_d8;
  pfStack_770 = unaff_x28;
  pfStack_768 = unaff_x27;
  puStack_760 = (undefined1 *)unaff_x26;
  pfStack_758 = (float *)unaff_x25;
  pcStack_750 = pcVar19;
  pfStack_748 = (float *)pcVar18;
  uStack_740 = uVar16;
  uStack_738 = uVar14;
  pfStack_730 = pfVar12;
  pfStack_728 = pfVar11;
  ppppppuStack_720 = &ppppppuStack_660;
  if ((*(char *)pfVar17 != '\0') && (*(char *)pfVar17 != 'n')) {
    uVar8 = 0;
LAB_1096ef510:
    acStack_7c8[0] = '\0';
    cVar20 = *(char *)pfVar17;
    pfVar12 = pfVar17;
    while (cVar20 != '\0') {
      puVar6 = &UNK_10f57e81c;
      _memchr(&UNK_10f57e81c,(int)cVar20,7);
      if ((cVar20 != ',') && (puVar6 == (undefined *)0x0)) {
        iVar21 = 0;
        goto LAB_1096ef550;
      }
      pfVar12 = (float *)((long)pfVar12 + 1);
      cVar20 = *(char *)pfVar12;
    }
    lVar9 = 0;
    goto LAB_1096ef590;
  }
  goto LAB_1096ef624;
  while( true ) {
    if (iVar21 < 0x3f) {
      acStack_7c8[iVar21] = cVar20;
      iVar21 = iVar21 + 1;
    }
    pfVar12 = (float *)((long)pfVar12 + 1);
    cVar20 = *(char *)pfVar12;
    if (cVar20 == '\0') break;
LAB_1096ef550:
    puVar6 = &UNK_10f57e81c;
    _memchr(&UNK_10f57e81c,(int)cVar20,7);
    if ((cVar20 == ',') || (puVar6 != (undefined *)0x0)) break;
  }
  lVar9 = (long)iVar21;
LAB_1096ef590:
  acStack_7c8[lVar9] = '\0';
  if (acStack_7c8[0] == '\0') goto LAB_1096ef5ec;
  if ((int)uVar8 < 8) {
    fVar24 = pfVar13[10000];
    fVar27 = pfVar13[0x2711];
    pcVar18 = acStack_7c8;
    FUN_1096eefa4(pcVar18);
    fVar28 = 0.0;
    FUN_1096ef8f8(0,SQRT(fVar27 * fVar27 + fVar24 * fVar24) / 1.4142135,pfVar13,pcVar18);
    pfVar7[(int)uVar8] = ABS(fVar28);
    uVar8 = uVar8 + 1;
  }
  pfVar17 = pfVar12;
  if (*(char *)pfVar12 == '\0') goto LAB_1096ef5ec;
  goto LAB_1096ef510;
LAB_1096ef5ec:
  if ((int)uVar8 < 1) {
    param_4 = (float *)0x0;
    pfVar11 = pfVar7;
  }
  else {
    uVar16 = (ulong)uVar8;
    fVar24 = 0.0;
    do {
      pfVar11 = pfVar7 + 1;
      fVar24 = fVar24 + *pfVar7;
      uVar16 = uVar16 - 1;
      pfVar7 = pfVar11;
    } while (uVar16 != 0);
    if (fVar24 <= 1e-06) {
      uVar8 = 0;
    }
    param_4 = (float *)(ulong)uVar8;
  }
LAB_1096ef624:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_788) {
    return param_4;
  }
  uVar23 = 0x1096ef664;
  ___stack_chk_fail();
FUN_1096ef664:
  *(float **)((long)pfVar2 + -0x20) = pfVar12;
  *(float **)((long)pfVar2 + -0x18) = pfVar11;
  *(undefined8 ********)((long)pfVar2 + -0x10) = pppppppuVar22;
  *(undefined8 *)((long)pfVar2 + -8) = uVar23;
  pfVar11 = param_4;
  _strcmp();
  if ((int)pfVar11 != 0) {
    pfVar11 = param_4;
    _strcmp(param_4,"round");
    if ((int)pfVar11 == 0) {
      pfVar11 = (float *)0x1;
    }
    else {
      _strcmp(param_4,"square");
      uVar8 = 2;
      if ((int)param_4 != 0) {
        uVar8 = 0;
      }
      pfVar11 = (float *)(ulong)uVar8;
    }
  }
  return pfVar11;
}



/* Entry: 1096eebec; end: 1096eefa3;  */

uint * FUN_1096eebec(uint *param_1,uint *param_2,float *param_3)

{
  byte bVar1;
  uint *puVar2;
  ulong *puVar3;
  uint *puVar4;
  uint *puVar5;
  undefined *puVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint *unaff_x19;
  uint *puVar11;
  uint *unaff_x20;
  uint *puVar12;
  uint *unaff_x21;
  ulong uVar13;
  ulong uVar14;
  char *unaff_x22;
  ulong uVar15;
  char *unaff_x23;
  uint *puVar16;
  char *unaff_x24;
  char *pcVar17;
  char *unaff_x25;
  char cVar18;
  float *unaff_x26;
  int iVar19;
  uint *unaff_x27;
  uint *unaff_x28;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  float fVar24;
  char acStack_758 [64];
  long lStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  uint *puStack_700;
  uint *puStack_6f8;
  undefined1 *puStack_6f0;
  uint *puStack_6e8;
  char *pcStack_6e0;
  char *pcStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  uint *puStack_6c0;
  uint *puStack_6b8;
  undefined1 ****ppppuStack_6b0;
  code *pcStack_6a8;
  ulong *puStack_6a0;
  ulong *puStack_698;
  int *piStack_690;
  undefined8 *puStack_688;
  uint *puStack_680;
  uint uStack_66c;
  int iStack_668;
  uint uStack_664;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  ulong uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  long lStack_618;
  ulong uStack_610;
  uint *puStack_608;
  uint *puStack_600;
  uint *puStack_5f8;
  undefined1 ***pppuStack_5f0;
  code *pcStack_5e8;
  float afStack_5e0 [128];
  uint auStack_3e0 [128];
  long lStack_1e0;
  uint *puStack_1d0;
  uint *puStack_1c8;
  undefined1 *puStack_1c0;
  uint *puStack_1b8;
  char *pcStack_1b0;
  char *pcStack_1a8;
  char *pcStack_1a0;
  uint *puStack_198;
  uint *puStack_190;
  uint *puStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  uint auStack_168 [16];
  long lStack_128;
  uint *puStack_120;
  uint *puStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  double dStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  int iStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar21 = 5.26354424712089e-315;
  uStack_e8 = 0x3f80000000000000;
  uStack_f0 = 0x3f800000;
  param_1[2] = 0;
  param_1[3] = 0x3f800000;
  param_1[0] = 0x3f800000;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar4 = param_1;
  if ((char)*param_2 != '\0') {
    unaff_x21 = (uint *)&DAT_10f638b90;
    unaff_x22 = "translate";
    unaff_d8 = 0;
    unaff_x23 = "scale";
    unaff_d9 = 0;
    unaff_x24 = "rotate";
    unaff_x28 = (uint *)0x43340000;
    unaff_x25 = "skewX";
    dVar21 = 0.0078125;
    uStack_f8 = 0;
    dStack_100 = 0.0078125;
    unaff_x19 = param_2;
    do {
      puVar4 = unaff_x19;
      _strncmp(unaff_x19,&DAT_10f638b90,6);
      if ((int)puVar4 == 0) {
        iStack_d4 = 0;
        param_3 = (float *)0x6;
        unaff_x27 = unaff_x19;
        FUN_1096efa5c(unaff_x19,&fStack_b0,6,&iStack_d4);
        if (iStack_d4 == 6) {
          dVar21 = (double)CONCAT44(fStack_ac,fStack_b0);
          fStack_c8 = fStack_a8;
          fStack_c4 = fStack_a4;
          fStack_d0 = fStack_b0;
          fStack_cc = fStack_ac;
          fStack_c0 = (float)uStack_a0;
          fStack_bc = (float)((ulong)uStack_a0 >> 0x20);
        }
LAB_1096eef44:
        unaff_x19 = (uint *)((long)unaff_x19 + (long)(int)unaff_x27);
        puVar4 = param_1;
        FUN_1096ef770(param_1,&fStack_d0);
      }
      else {
        puVar4 = unaff_x19;
        _strncmp(unaff_x19,"translate",9);
        if ((int)puVar4 == 0) {
          iStack_d4 = 0;
          param_3 = (float *)0x2;
          unaff_x27 = unaff_x19;
          FUN_1096efa5c(unaff_x19,&fStack_b0,2,&iStack_d4);
          fStack_bc = 0.0;
          if (iStack_d4 != 1) {
            fStack_bc = fStack_ac;
          }
          dVar21 = (double)(ulong)(uint)fStack_bc;
          fStack_c8 = (float)uStack_e8;
          fStack_c4 = (float)((ulong)uStack_e8 >> 0x20);
          fStack_d0 = (float)uStack_f0;
          fStack_cc = (float)((ulong)uStack_f0 >> 0x20);
          fStack_c0 = fStack_b0;
          goto LAB_1096eef44;
        }
        puVar4 = unaff_x19;
        _strncmp(unaff_x19,"scale",5);
        if ((int)puVar4 == 0) {
          iStack_d4 = 0;
          param_3 = (float *)0x2;
          unaff_x27 = unaff_x19;
          FUN_1096efa5c(unaff_x19,&fStack_b0,2,&iStack_d4);
          dVar21 = (double)(ulong)(uint)fStack_b0;
          fStack_c4 = fStack_b0;
          if (iStack_d4 != 1) {
            fStack_c4 = fStack_ac;
          }
          fStack_d0 = fStack_b0;
          fStack_cc = 0.0;
          fStack_c8 = 0.0;
          fStack_c0 = 0.0;
          fStack_bc = 0.0;
          goto LAB_1096eef44;
        }
        puVar4 = unaff_x19;
        _strncmp(unaff_x19,"rotate",6);
        if ((int)puVar4 == 0) {
          iStack_d4 = 0;
          param_3 = (float *)0x3;
          unaff_x27 = unaff_x19;
          FUN_1096efa5c(unaff_x19,&fStack_b0,3,&iStack_d4);
          if (iStack_d4 == 1) {
            fStack_ac = 0.0;
            fStack_a8 = 0.0;
LAB_1096eeeb8:
            unaff_x26 = (float *)0x0;
            fVar20 = 0.0;
            fVar24 = 0.0;
          }
          else {
            if (iStack_d4 < 2) goto LAB_1096eeeb8;
            fVar24 = 0.0 - fStack_ac;
            fVar20 = 0.0 - fStack_a8;
            unaff_x26 = (float *)0x1;
          }
          fVar22 = 180.0;
          fVar23 = (fStack_b0 / 180.0) * 3.1415927;
          ___sincosf_stret();
          fStack_d0 = fVar22 - fVar23 * 0.0;
          fStack_c8 = fVar22 * 0.0 - fVar23;
          fStack_c0 = -(fVar23 * fVar20) + fVar22 * fVar24 + 0.0;
          fStack_cc = fVar23 + fVar22 * 0.0;
          fStack_c4 = fVar22 + fVar23 * 0.0;
          fStack_bc = fVar20 * fVar22 + fVar23 * fVar24 + 0.0;
          if ((int)unaff_x26 != 0) {
            fVar20 = fStack_cc * 0.0;
            fStack_cc = fStack_cc + fStack_d0 * 0.0;
            fStack_d0 = fStack_d0 + fVar20;
            fVar20 = fStack_c4 * 0.0;
            fStack_c4 = fStack_c4 + fStack_c8 * 0.0;
            fStack_c8 = fStack_c8 + fVar20;
            fVar20 = fStack_c0 * 0.0;
            fStack_c0 = fStack_c0 + fStack_bc * 0.0 + fStack_ac;
            fStack_bc = fStack_bc + fVar20 + fStack_a8;
          }
          dVar21 = (double)(ulong)(uint)fStack_bc;
          goto LAB_1096eef44;
        }
        puVar4 = unaff_x19;
        _strncmp(unaff_x19,"skewX",5);
        if ((int)puVar4 == 0) {
          iStack_d4 = 0;
          param_3 = (float *)0x1;
          unaff_x27 = unaff_x19;
          FUN_1096efa5c(unaff_x19,&fStack_b0,1,&iStack_d4);
          dVar21 = (double)(ulong)(uint)((fStack_b0 / 180.0) * 3.1415927);
          _tanf();
          fStack_d0 = 1.0;
          fStack_cc = 0.0;
          fStack_c8 = SUB84(dVar21,0);
          fStack_c4 = 1.0;
          fStack_c0 = 0.0;
          fStack_bc = 0.0;
          goto LAB_1096eef44;
        }
        param_3 = (float *)0x5;
        puVar4 = unaff_x19;
        _strncmp(unaff_x19,"skewY");
        if ((int)puVar4 == 0) {
          iStack_d4 = 0;
          param_3 = (float *)0x1;
          unaff_x27 = unaff_x19;
          FUN_1096efa5c(unaff_x19,&fStack_b0,1,&iStack_d4);
          fVar20 = (fStack_b0 / 180.0) * 3.1415927;
          _tanf();
          fStack_cc = fVar20;
          fStack_d0 = 1.0;
          fStack_c0 = (float)uStack_f8;
          fStack_bc = (float)((ulong)uStack_f8 >> 0x20);
          fStack_c8 = SUB84(dStack_100,0);
          fStack_c4 = (float)((ulong)dStack_100 >> 0x20);
          dVar21 = dStack_100;
          goto LAB_1096eef44;
        }
        unaff_x19 = (uint *)((long)unaff_x19 + 1);
      }
      unaff_x20 = param_1;
    } while ((char)*unaff_x19 != '\0');
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return puVar4;
  }
  ___stack_chk_fail();
  pcStack_108 = FUN_1096eefa4;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = auStack_168;
  puStack_120 = unaff_x20;
  puStack_118 = unaff_x19;
  puStack_110 = &stack0xfffffffffffffff0;
  FUN_1096efba4();
  func_0x0001096efcd0();
  puVar12 = auStack_168;
  FUN_1096ef7b0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return (uint *)((ulong)(uint)(float)dVar21 | (long)puVar4 << 0x20);
  }
  ___stack_chk_fail();
  pcStack_178 = FUN_1096ef014;
  lStack_1e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = (ulong)(byte)*puVar7;
  puVar11 = puVar12;
  puVar5 = unaff_x20;
  pcVar17 = unaff_x24;
  puStack_1d0 = unaff_x28;
  puStack_1c8 = unaff_x27;
  puStack_1c0 = (undefined1 *)unaff_x26;
  puStack_1b8 = (uint *)unaff_x25;
  pcStack_1b0 = unaff_x24;
  pcStack_1a8 = unaff_x23;
  pcStack_1a0 = unaff_x22;
  puStack_198 = unaff_x21;
  puStack_190 = unaff_x20;
  puStack_188 = puVar4;
  ppuStack_180 = &puStack_110;
  if ((byte)*puVar7 != 0) {
    pcVar17 = (char *)0x1ff;
    puVar5 = (uint *)&UNK_10f57e81c;
    puVar16 = puVar7;
LAB_1096ef064:
    do {
      unaff_x21 = puVar16;
      puVar4 = puVar5;
      _memchr(&UNK_10f57e81c,(int)(char)uVar15,7);
      puVar7 = unaff_x21;
      if (puVar4 != (uint *)0x0) {
        unaff_x21 = (uint *)((long)unaff_x21 + 1);
        uVar15 = (ulong)*(byte *)unaff_x21;
        puVar16 = unaff_x21;
        puVar7 = unaff_x21;
        if (*(byte *)unaff_x21 != 0) goto LAB_1096ef064;
      }
      while ((puVar4 = unaff_x21, unaff_x27 = unaff_x21, (int)uVar15 != 0 && ((int)uVar15 != 0x3b)))
      {
        unaff_x21 = (uint *)((long)unaff_x21 + 1);
        uVar15 = (ulong)*(byte *)unaff_x21;
      }
      while ((puVar7 < puVar4 &&
             (((char)*puVar4 == ';' ||
              (puVar11 = puVar5, _memchr(&UNK_10f57e81c,(long)(char)*puVar4,7), unaff_x27 = puVar4,
              puVar11 != (uint *)0x0))))) {
        puVar4 = (uint *)((long)puVar4 + -1);
        unaff_x27 = puVar7;
      }
      unaff_x28 = (uint *)((long)unaff_x27 + 1);
      puVar4 = puVar7;
      puVar11 = puVar7;
      if (puVar7 < unaff_x28) {
        lVar9 = 0;
        if (puVar7 <= unaff_x27) {
          lVar9 = (long)unaff_x27 - (long)puVar7;
        }
        lVar9 = lVar9 + 1;
        puVar16 = puVar7;
        do {
          puVar11 = puVar16;
          puVar4 = puVar16;
          if ((char)*puVar16 == ':') break;
          puVar16 = (uint *)((long)puVar16 + 1);
          lVar9 = lVar9 + -1;
          puVar11 = puVar16;
          puVar4 = puVar16;
        } while (lVar9 != 0);
        while ((puVar7 < puVar16 &&
               (((char)*puVar16 == ':' ||
                (puVar2 = puVar5, _memchr(&UNK_10f57e81c,(long)(char)*puVar16,7), puVar11 = puVar16,
                puVar2 != (uint *)0x0))))) {
          puVar16 = (uint *)((long)puVar16 + -1);
          puVar11 = puVar7;
        }
      }
      iVar19 = (int)puVar11 - (int)puVar7;
      uVar8 = 0x1ff;
      if (iVar19 + 1 < 0x1ff) {
        uVar8 = iVar19 + 1;
      }
      uVar15 = (ulong)uVar8;
      if (iVar19 != -1) {
        uVar15 = (ulong)(int)uVar8;
        _memcpy(auStack_3e0,puVar7,uVar15);
      }
      *(undefined1 *)((long)auStack_3e0 + uVar15) = 0;
      if (puVar4 < unaff_x28) {
        lVar9 = 0;
        if (puVar4 <= unaff_x27) {
          lVar9 = (long)unaff_x27 - (long)puVar4;
        }
        lVar9 = lVar9 + 1;
        do {
          if (((char)*puVar4 != ':') &&
             (puVar7 = puVar5, _memchr(&UNK_10f57e81c,(long)(char)*puVar4,7), puVar7 == (uint *)0x0)
             ) break;
          puVar4 = (uint *)((long)puVar4 + 1);
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      uVar10 = (int)unaff_x28 - (int)puVar4;
      uVar8 = uVar10;
      if (0x1fe < (int)uVar10) {
        uVar8 = 0x1ff;
      }
      unaff_x23 = (char *)(ulong)uVar8;
      if (uVar10 != 0) {
        unaff_x23 = (char *)(long)(int)uVar8;
        _memcpy(afStack_5e0,puVar4,unaff_x23);
      }
      *(char *)((long)afStack_5e0 + (long)unaff_x23) = '\0';
      puVar7 = auStack_3e0;
      puVar11 = puVar12;
      param_3 = afStack_5e0;
      FUN_1096ee638();
      unaff_x25 = (char *)unaff_x21;
      if ((char)*unaff_x21 != '\0') {
        unaff_x25 = (char *)((long)unaff_x21 + 1);
      }
      uVar15 = (ulong)(byte)*(uint *)unaff_x25;
      puVar4 = puVar12;
      puVar16 = (uint *)unaff_x25;
      unaff_x26 = afStack_5e0;
    } while ((byte)*(uint *)unaff_x25 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e0) {
    return puVar11;
  }
  ___stack_chk_fail();
  pcStack_5e8 = FUN_1096ef244;
  lStack_618 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    puVar12 = puVar11;
    puVar11 = (uint *)((long)puVar12 + 1);
    bVar1 = (byte)*puVar12;
    uVar13 = (ulong)bVar1;
  } while (bVar1 == 0x20);
  puVar16 = puVar12;
  uStack_610 = uVar15;
  puStack_608 = unaff_x21;
  puStack_600 = puVar5;
  puStack_5f8 = puVar4;
  pppuStack_5f0 = &ppuStack_180;
  _strlen();
  if (bVar1 == 0x23 && puVar16 != (uint *)0x0) {
    uStack_640 = uStack_640 & 0xffffffff00000000;
    bVar1 = *(byte *)puVar11;
    uVar8 = (uint)bVar1;
    if (bVar1 != 0) {
      puVar12 = (uint *)&UNK_10f57e81c;
      uVar14 = 0;
      do {
        puVar7 = (uint *)(ulong)(uint)(int)(char)bVar1;
        param_3 = (float *)0x7;
        puVar4 = (uint *)&UNK_10f57e81c;
        _memchr();
        uVar13 = uVar14;
        if (puVar4 != (uint *)0x0) break;
        uVar13 = uVar14 + 1;
        bVar1 = *(byte *)((long)puVar11 + uVar14 + 1);
        uVar14 = uVar13;
      } while (bVar1 != 0);
      if ((int)uVar13 == 3) {
        puStack_6a0 = &uStack_640;
        puVar7 = (uint *)&UNK_10f4fd77a;
        _sscanf(puVar11);
        uVar8 = ((uint)uStack_640 & 0xf0) << 4 | (uint)uStack_640 & 0xf |
                ((uint)uStack_640 >> 8 & 0xf) << 0x10;
        uVar8 = uVar8 | uVar8 << 4;
      }
      else {
        puVar12 = (uint *)&UNK_10f57e81c;
        if ((int)uVar13 == 6) {
          puStack_6a0 = &uStack_640;
          puVar7 = (uint *)&UNK_10f4fd77a;
          _sscanf(puVar11);
          uVar8 = (uint)uStack_640;
        }
        else {
          uVar8 = 0;
        }
      }
    }
    puVar4 = (uint *)(ulong)(uVar8 & 0xff00 | uVar8 >> 0x10 & 0xff | (uVar8 & 0xff) << 0x10);
  }
  else if ((((bVar1 == 0x72 && (uint *)0x3 < puVar16) && (*(char *)puVar11 == 'g')) &&
           (*(char *)((long)puVar12 + 2) == 'b')) && (*(char *)((long)puVar12 + 3) == '(')) {
    iStack_668 = -1;
    uStack_664 = 0xffffffff;
    uStack_66c = 0xffffffff;
    uStack_638 = 0;
    uStack_640 = 0;
    uStack_628 = 0;
    uStack_630 = 0;
    uStack_658 = 0;
    uStack_660 = 0;
    uStack_648 = 0;
    uStack_650 = 0;
    puStack_680 = &uStack_66c;
    puStack_688 = &uStack_660;
    piStack_690 = &iStack_668;
    puStack_698 = &uStack_640;
    puStack_6a0 = (ulong *)&uStack_664;
    _sscanf(puVar12 + 1,&UNK_10f57e83b);
    puVar3 = &uStack_640;
    puVar7 = (uint *)0x25;
    _strchr();
    if (puVar3 == (ulong *)0x0) {
      uVar8 = uStack_664 | iStack_668 << 8;
      uVar10 = uStack_66c;
    }
    else {
      uVar8 = (uStack_664 * 0xff) / 100 | (uint)(iStack_668 * 0xff) / 100 << 8;
      uVar10 = (uStack_66c * 0xff) / 100;
    }
    puVar4 = (uint *)(ulong)(uVar8 | uVar10 << 0x10);
  }
  else {
    puVar11 = (uint *)&UNK_110b0af38;
    uVar13 = 10;
    do {
      iVar19 = (int)*(undefined8 *)(puVar11 + -2);
      puVar7 = puVar12;
      _strcmp();
      if (iVar19 == 0) {
        puVar4 = (uint *)(ulong)*puVar11;
        goto LAB_1096ef460;
      }
      puVar11 = puVar11 + 4;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    puVar4 = (uint *)0x808080;
  }
LAB_1096ef460:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_618) {
    return puVar4;
  }
  ___stack_chk_fail();
  pcStack_6a8 = FUN_1096ef4a0;
  puVar5 = (uint *)0x0;
  lStack_718 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_710 = unaff_d9;
  uStack_708 = unaff_d8;
  puStack_700 = unaff_x28;
  puStack_6f8 = unaff_x27;
  puStack_6f0 = (undefined1 *)unaff_x26;
  puStack_6e8 = (uint *)unaff_x25;
  pcStack_6e0 = pcVar17;
  pcStack_6d8 = unaff_x23;
  uStack_6d0 = uVar15;
  uStack_6c8 = uVar13;
  puStack_6c0 = puVar12;
  puStack_6b8 = puVar11;
  ppppuStack_6b0 = &pppuStack_5f0;
  if (((char)*puVar7 != '\0') && ((char)*puVar7 != 'n')) {
    uVar8 = 0;
LAB_1096ef510:
    acStack_758[0] = '\0';
    cVar18 = (char)*puVar7;
    while (cVar18 != '\0') {
      puVar6 = &UNK_10f57e81c;
      _memchr(&UNK_10f57e81c,(int)cVar18,7);
      if ((cVar18 != ',') && (puVar6 == (undefined *)0x0)) {
        iVar19 = 0;
        goto LAB_1096ef550;
      }
      puVar7 = (uint *)((long)puVar7 + 1);
      cVar18 = *(char *)puVar7;
    }
    lVar9 = 0;
    goto LAB_1096ef590;
  }
LAB_1096ef624:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_718) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar4 = puVar5;
  _strcmp();
  if ((int)puVar4 != 0) {
    puVar4 = puVar5;
    _strcmp(puVar5,"round");
    if ((int)puVar4 == 0) {
      puVar4 = (uint *)0x1;
    }
    else {
      _strcmp(puVar5,"square");
      uVar8 = 2;
      if ((int)puVar5 != 0) {
        uVar8 = 0;
      }
      puVar4 = (uint *)(ulong)uVar8;
    }
  }
  return puVar4;
  while( true ) {
    if (iVar19 < 0x3f) {
      acStack_758[iVar19] = cVar18;
      iVar19 = iVar19 + 1;
    }
    puVar7 = (uint *)((long)puVar7 + 1);
    cVar18 = *(char *)puVar7;
    if (cVar18 == '\0') break;
LAB_1096ef550:
    puVar6 = &UNK_10f57e81c;
    _memchr(&UNK_10f57e81c,(int)cVar18,7);
    if ((cVar18 == ',') || (puVar6 != (undefined *)0x0)) break;
  }
  lVar9 = (long)iVar19;
LAB_1096ef590:
  acStack_758[lVar9] = '\0';
  if (acStack_758[0] == '\0') goto LAB_1096ef5ec;
  if ((int)uVar8 < 8) {
    fVar20 = (float)puVar4[10000];
    fVar23 = (float)puVar4[0x2711];
    pcVar17 = acStack_758;
    FUN_1096eefa4(pcVar17);
    fVar24 = 0.0;
    FUN_1096ef8f8(0,SQRT(fVar23 * fVar23 + fVar20 * fVar20) / 1.4142135,puVar4,pcVar17);
    param_3[(int)uVar8] = ABS(fVar24);
    uVar8 = uVar8 + 1;
  }
  if ((char)*puVar7 == '\0') goto LAB_1096ef5ec;
  goto LAB_1096ef510;
LAB_1096ef5ec:
  if ((int)uVar8 < 1) {
    puVar5 = (uint *)0x0;
  }
  else {
    uVar15 = (ulong)uVar8;
    fVar20 = 0.0;
    do {
      fVar20 = fVar20 + *param_3;
      uVar15 = uVar15 - 1;
      param_3 = param_3 + 1;
    } while (uVar15 != 0);
    if (fVar20 <= 1e-06) {
      uVar8 = 0;
    }
    puVar5 = (uint *)(ulong)uVar8;
  }
  goto LAB_1096ef624;
}



/* Entry: 1096eefa4; end: 1096ef013;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001096ef5d4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

byte * FUN_1096eefa4(byte *param_1,undefined8 param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  byte *pbVar8;
  ulong *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  long lVar13;
  byte *pbVar14;
  uint *puVar15;
  undefined *unaff_x20;
  byte *unaff_x21;
  long lVar16;
  ulong uVar17;
  byte *pbVar18;
  int iVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte bVar22;
  undefined1 in_b0;
  undefined1 uVar23;
  undefined1 in_register_00005001;
  undefined1 uVar24;
  undefined1 in_register_00005002;
  undefined1 uVar25;
  undefined1 in_register_00005003;
  undefined1 uVar26;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  float fVar27;
  byte abStack_658 [64];
  long lStack_618;
  int iStack_56c;
  ulong uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  long lStack_518;
  ulong uStack_510;
  byte *pbStack_508;
  undefined *puStack_500;
  byte *pbStack_4f8;
  undefined1 **ppuStack_4f0;
  code *pcStack_4e8;
  float afStack_4e0 [128];
  byte abStack_2e0 [512];
  long lStack_e0;
  undefined1 *puStack_80;
  code *pcStack_78;
  byte abStack_68 [64];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar11 = abStack_68;
  FUN_1096efba4();
  func_0x0001096efcd0();
  pbVar10 = abStack_68;
  FUN_1096ef7b0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (byte *)((ulong)(uint)(float)(double)CONCAT17(in_register_00005007,
                                                         CONCAT16(in_register_00005006,
                                                                  CONCAT15(in_register_00005005,
                                                                           CONCAT14(
                                                  in_register_00005004,
                                                  CONCAT13(in_register_00005003,
                                                           CONCAT12(in_register_00005002,
                                                                    CONCAT11(in_register_00005001,
                                                                             in_b0))))))) |
                   (long)param_1 << 0x20);
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_1096ef014;
  lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = (ulong)*pbVar11;
  pbVar14 = pbVar10;
  puStack_80 = &stack0xfffffffffffffff0;
  if (*pbVar11 != 0) {
    unaff_x20 = &UNK_10f57e81c;
    pbVar8 = pbVar11;
LAB_1096ef064:
    do {
      unaff_x21 = pbVar8;
      puVar7 = unaff_x20;
      _memchr(&UNK_10f57e81c,(int)(char)uVar17,7);
      pbVar11 = unaff_x21;
      if (puVar7 != (undefined *)0x0) {
        unaff_x21 = unaff_x21 + 1;
        uVar17 = (ulong)*unaff_x21;
        pbVar8 = unaff_x21;
        pbVar11 = unaff_x21;
        if (*unaff_x21 != 0) goto LAB_1096ef064;
      }
      while ((pbVar14 = unaff_x21, pbVar8 = unaff_x21, (int)uVar17 != 0 && ((int)uVar17 != 0x3b))) {
        unaff_x21 = unaff_x21 + 1;
        uVar17 = (ulong)*unaff_x21;
      }
      while ((pbVar11 < pbVar14 &&
             ((*pbVar14 == 0x3b ||
              (puVar7 = unaff_x20, _memchr(&UNK_10f57e81c,(long)(char)*pbVar14,7), pbVar8 = pbVar14,
              puVar7 != (undefined *)0x0))))) {
        pbVar14 = pbVar14 + -1;
        pbVar8 = pbVar11;
      }
      pbVar14 = pbVar8 + 1;
      pbVar18 = pbVar11;
      pbVar21 = pbVar11;
      if (pbVar11 < pbVar14) {
        lVar13 = 0;
        if (pbVar11 <= pbVar8) {
          lVar13 = (long)pbVar8 - (long)pbVar11;
        }
        lVar13 = lVar13 + 1;
        pbVar20 = pbVar11;
        do {
          pbVar21 = pbVar20;
          pbVar18 = pbVar20;
          if (*pbVar20 == 0x3a) break;
          pbVar20 = pbVar20 + 1;
          lVar13 = lVar13 + -1;
          pbVar21 = pbVar20;
          pbVar18 = pbVar20;
        } while (lVar13 != 0);
        while ((pbVar11 < pbVar20 &&
               ((*pbVar20 == 0x3a ||
                (puVar7 = unaff_x20, _memchr(&UNK_10f57e81c,(long)(char)*pbVar20,7),
                pbVar21 = pbVar20, puVar7 != (undefined *)0x0))))) {
          pbVar20 = pbVar20 + -1;
          pbVar21 = pbVar11;
        }
      }
      iVar19 = (int)pbVar21 - (int)pbVar11;
      uVar12 = 0x1ff;
      if (iVar19 + 1 < 0x1ff) {
        uVar12 = iVar19 + 1;
      }
      uVar17 = (ulong)uVar12;
      if (iVar19 != -1) {
        uVar17 = (ulong)(int)uVar12;
        _memcpy(abStack_2e0,pbVar11,uVar17);
      }
      abStack_2e0[uVar17] = 0;
      if (pbVar18 < pbVar14) {
        lVar13 = 0;
        if (pbVar18 <= pbVar8) {
          lVar13 = (long)pbVar8 - (long)pbVar18;
        }
        lVar13 = lVar13 + 1;
        do {
          if ((*pbVar18 != 0x3a) &&
             (puVar7 = unaff_x20, _memchr(&UNK_10f57e81c,(long)(char)*pbVar18,7),
             puVar7 == (undefined *)0x0)) break;
          pbVar18 = pbVar18 + 1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      uVar1 = (int)pbVar14 - (int)pbVar18;
      uVar12 = uVar1;
      if (0x1fe < (int)uVar1) {
        uVar12 = 0x1ff;
      }
      uVar17 = (ulong)uVar12;
      if (uVar1 != 0) {
        uVar17 = (ulong)(int)uVar12;
        _memcpy(afStack_4e0,pbVar18,uVar17);
      }
      *(undefined1 *)((long)afStack_4e0 + uVar17) = 0;
      pbVar11 = abStack_2e0;
      pbVar14 = pbVar10;
      param_3 = afStack_4e0;
      FUN_1096ee638();
      pbVar8 = unaff_x21;
      if (*unaff_x21 != 0) {
        pbVar8 = unaff_x21 + 1;
      }
      uVar17 = (ulong)*pbVar8;
      param_1 = pbVar10;
    } while (*pbVar8 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
    return pbVar14;
  }
  ___stack_chk_fail();
  pcStack_4e8 = FUN_1096ef244;
  lStack_518 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    pbVar10 = pbVar14;
    pbVar14 = pbVar10 + 1;
    bVar22 = *pbVar10;
  } while (bVar22 == 0x20);
  pbVar8 = pbVar10;
  uStack_510 = uVar17;
  pbStack_508 = unaff_x21;
  puStack_500 = unaff_x20;
  pbStack_4f8 = param_1;
  ppuStack_4f0 = &puStack_80;
  _strlen();
  if (bVar22 == 0x23 && pbVar8 != (byte *)0x0) {
    uStack_540 = uStack_540 & 0xffffffff00000000;
    bVar22 = *pbVar14;
    uVar12 = (uint)bVar22;
    if (bVar22 != 0) {
      lVar13 = 0;
      do {
        pbVar11 = (byte *)(ulong)(uint)(int)(char)bVar22;
        param_3 = (float *)0x7;
        puVar7 = &UNK_10f57e81c;
        _memchr();
        lVar16 = lVar13;
        if (puVar7 != (undefined *)0x0) break;
        lVar16 = lVar13 + 1;
        bVar22 = pbVar14[lVar13 + 1];
        lVar13 = lVar16;
      } while (bVar22 != 0);
      if ((int)lVar16 == 3) {
        pbVar11 = &UNK_10f4fd77a;
        _sscanf(pbVar14);
        uVar12 = ((uint)uStack_540 & 0xf0) << 4 | (uint)uStack_540 & 0xf |
                 ((uint)uStack_540 >> 8 & 0xf) << 0x10;
        uVar12 = uVar12 | uVar12 << 4;
      }
      else if ((int)lVar16 == 6) {
        pbVar11 = &UNK_10f4fd77a;
        _sscanf(pbVar14);
        uVar12 = (uint)uStack_540;
      }
      else {
        uVar12 = 0;
      }
    }
    pbVar10 = (byte *)(ulong)(uVar12 & 0xff00 | uVar12 >> 0x10 & 0xff | (uVar12 & 0xff) << 0x10);
  }
  else if ((((bVar22 == 0x72 && (byte *)0x3 < pbVar8) && (*pbVar14 == 0x67)) && (pbVar10[2] == 0x62)
           ) && (pbVar10[3] == 0x28)) {
    iStack_56c = -1;
    uStack_538 = 0;
    uStack_540 = 0;
    uStack_528 = 0;
    uStack_530 = 0;
    _sscanf(pbVar10 + 4,&UNK_10f57e83b);
    puVar9 = &uStack_540;
    pbVar11 = (byte *)0x25;
    _strchr();
    if (puVar9 == (ulong *)0x0) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = 0x8fdf7e26;
      iStack_56c = 0x28f5c26;
    }
    pbVar10 = (byte *)(ulong)(uVar12 | iStack_56c << 0x10);
  }
  else {
    puVar15 = (uint *)&UNK_110b0af38;
    lVar13 = 10;
    do {
      iVar19 = (int)*(undefined8 *)(puVar15 + -2);
      pbVar11 = pbVar10;
      _strcmp();
      if (iVar19 == 0) {
        pbVar10 = (byte *)(ulong)*puVar15;
        goto LAB_1096ef460;
      }
      puVar15 = puVar15 + 4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    pbVar10 = (byte *)0x808080;
  }
LAB_1096ef460:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_518) {
    return pbVar10;
  }
  ___stack_chk_fail();
  pbVar14 = (byte *)0x0;
  lStack_618 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*pbVar11 != 0) && (*pbVar11 != 0x6e)) {
    uVar17 = 0;
LAB_1096ef510:
    abStack_658[0] = 0;
    bVar22 = *pbVar11;
    while (bVar22 != 0) {
      puVar7 = &UNK_10f57e81c;
      _memchr(&UNK_10f57e81c,(int)(char)bVar22,7);
      if ((bVar22 != 0x2c) && (puVar7 == (undefined *)0x0)) {
        iVar19 = 0;
        goto LAB_1096ef550;
      }
      pbVar11 = pbVar11 + 1;
      bVar22 = *pbVar11;
    }
    lVar13 = 0;
    goto LAB_1096ef590;
  }
LAB_1096ef624:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_618) {
    return pbVar14;
  }
  ___stack_chk_fail();
  pbVar11 = pbVar14;
  _strcmp();
  if ((int)pbVar11 != 0) {
    pbVar11 = pbVar14;
    _strcmp(pbVar14,"round");
    if ((int)pbVar11 == 0) {
      pbVar11 = (byte *)0x1;
    }
    else {
      _strcmp(pbVar14,"square");
      uVar12 = 2;
      if ((int)pbVar14 != 0) {
        uVar12 = 0;
      }
      pbVar11 = (byte *)(ulong)uVar12;
    }
  }
  return pbVar11;
  while( true ) {
    if (iVar19 < 0x3f) {
      abStack_658[iVar19] = bVar22;
      iVar19 = iVar19 + 1;
    }
    pbVar11 = pbVar11 + 1;
    bVar22 = *pbVar11;
    if (bVar22 == 0) break;
LAB_1096ef550:
    puVar7 = &UNK_10f57e81c;
    _memchr(&UNK_10f57e81c,(int)(char)bVar22,7);
    if ((bVar22 == 0x2c) || (puVar7 != (undefined *)0x0)) break;
  }
  lVar13 = (long)iVar19;
LAB_1096ef590:
  abStack_658[lVar13] = 0;
  if (abStack_658[0] == 0) goto LAB_1096ef5ec;
  iVar19 = (int)uVar17;
  if (iVar19 < 8) {
    fVar2 = *(float *)(pbVar10 + 40000);
    fVar27 = *(float *)(pbVar10 + 0x9c44);
    pbVar14 = abStack_658;
    FUN_1096eefa4(pbVar14);
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    FUN_1096ef8f8(CONCAT17(in_register_00005007,
                           CONCAT16(in_register_00005006,
                                    CONCAT15(in_register_00005005,
                                             CONCAT14(in_register_00005004,
                                                      CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(
                                                  uVar24,uVar23))))))),
                  SQRT(fVar27 * fVar27 + fVar2 * fVar2) / 1.4142135,pbVar10,pbVar14);
    uVar26 = uVar6;
    uVar25 = uVar5;
    uVar24 = uVar4;
    uVar23 = uVar3;
    param_3[iVar19] = ABS((float)CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23))));
    uVar17 = (ulong)(iVar19 + 1);
  }
  if (*pbVar11 == 0) goto LAB_1096ef5ec;
  goto LAB_1096ef510;
LAB_1096ef5ec:
  uVar12 = (uint)uVar17;
  if ((int)uVar12 < 1) {
    pbVar14 = (byte *)0x0;
  }
  else {
    uVar23 = 0;
    uVar24 = 0;
    uVar25 = 0;
    uVar26 = 0;
    do {
      fVar2 = (float)CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23))) + *param_3;
      uVar23 = SUB41(fVar2,0);
      uVar24 = (undefined1)((uint)fVar2 >> 8);
      uVar25 = (undefined1)((uint)fVar2 >> 0x10);
      uVar26 = (undefined1)((uint)fVar2 >> 0x18);
      uVar17 = uVar17 - 1;
      param_3 = param_3 + 1;
    } while (uVar17 != 0);
    if (fVar2 <= 1e-06) {
      uVar12 = 0;
    }
    pbVar14 = (byte *)(ulong)uVar12;
  }
  goto LAB_1096ef624;
}



/* Entry: 1096ef014; end: 1096ef243;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001096ef5d4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1096ef014(undefined8 param_1,byte *param_2,byte *param_3,float *param_4)

{
  uint uVar1;
  float fVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  byte *pbVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  byte *unaff_x19;
  byte *pbVar12;
  uint *puVar14;
  undefined *unaff_x20;
  byte *unaff_x21;
  long lVar15;
  ulong uVar16;
  byte *pbVar17;
  int iVar18;
  uint uVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte bVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined4 uVar27;
  float fVar28;
  byte abStack_5e8 [64];
  long lStack_5a8;
  int iStack_4fc;
  ulong uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long lStack_4a8;
  ulong uStack_4a0;
  byte *pbStack_498;
  undefined *puStack_490;
  byte *pbStack_488;
  undefined1 *puStack_480;
  code *pcStack_478;
  float afStack_470 [128];
  byte abStack_270 [512];
  long lStack_70;
  byte *pbVar13;
  
  uVar27 = (undefined4)((ulong)param_1 >> 0x20);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar16 = (ulong)*param_3;
  pbVar12 = param_2;
  if (*param_3 != 0) {
    unaff_x20 = &UNK_10f57e81c;
    pbVar13 = param_3;
LAB_1096ef064:
    do {
      unaff_x21 = pbVar13;
      puVar7 = unaff_x20;
      _memchr(&UNK_10f57e81c,(int)(char)uVar16,7);
      pbVar12 = unaff_x21;
      if (puVar7 != (undefined *)0x0) {
        unaff_x21 = unaff_x21 + 1;
        uVar16 = (ulong)*unaff_x21;
        pbVar13 = unaff_x21;
        pbVar12 = unaff_x21;
        if (*unaff_x21 != 0) goto LAB_1096ef064;
      }
      while ((pbVar13 = unaff_x21, pbVar8 = unaff_x21, (int)uVar16 != 0 && ((int)uVar16 != 0x3b))) {
        unaff_x21 = unaff_x21 + 1;
        uVar16 = (ulong)*unaff_x21;
      }
      while ((pbVar12 < pbVar13 &&
             ((*pbVar13 == 0x3b ||
              (puVar7 = unaff_x20, _memchr(&UNK_10f57e81c,(long)(char)*pbVar13,7), pbVar8 = pbVar13,
              puVar7 != (undefined *)0x0))))) {
        pbVar13 = pbVar13 + -1;
        pbVar8 = pbVar12;
      }
      pbVar13 = pbVar8 + 1;
      pbVar17 = pbVar12;
      pbVar21 = pbVar12;
      if (pbVar12 < pbVar13) {
        lVar11 = 0;
        if (pbVar12 <= pbVar8) {
          lVar11 = (long)pbVar8 - (long)pbVar12;
        }
        lVar11 = lVar11 + 1;
        pbVar20 = pbVar12;
        do {
          pbVar21 = pbVar20;
          pbVar17 = pbVar20;
          if (*pbVar20 == 0x3a) break;
          pbVar20 = pbVar20 + 1;
          lVar11 = lVar11 + -1;
          pbVar21 = pbVar20;
          pbVar17 = pbVar20;
        } while (lVar11 != 0);
        while ((pbVar12 < pbVar20 &&
               ((*pbVar20 == 0x3a ||
                (puVar7 = unaff_x20, _memchr(&UNK_10f57e81c,(long)(char)*pbVar20,7),
                pbVar21 = pbVar20, puVar7 != (undefined *)0x0))))) {
          pbVar20 = pbVar20 + -1;
          pbVar21 = pbVar12;
        }
      }
      iVar18 = (int)pbVar21 - (int)pbVar12;
      uVar19 = 0x1ff;
      if (iVar18 + 1 < 0x1ff) {
        uVar19 = iVar18 + 1;
      }
      uVar16 = (ulong)uVar19;
      if (iVar18 != -1) {
        uVar16 = (ulong)(int)uVar19;
        _memcpy(abStack_270,pbVar12,uVar16);
      }
      abStack_270[uVar16] = 0;
      if (pbVar17 < pbVar13) {
        lVar11 = 0;
        if (pbVar17 <= pbVar8) {
          lVar11 = (long)pbVar8 - (long)pbVar17;
        }
        lVar11 = lVar11 + 1;
        do {
          if ((*pbVar17 != 0x3a) &&
             (puVar7 = unaff_x20, _memchr(&UNK_10f57e81c,(long)(char)*pbVar17,7),
             puVar7 == (undefined *)0x0)) break;
          pbVar17 = pbVar17 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      uVar1 = (int)pbVar13 - (int)pbVar17;
      uVar19 = uVar1;
      if (0x1fe < (int)uVar1) {
        uVar19 = 0x1ff;
      }
      uVar16 = (ulong)uVar19;
      if (uVar1 != 0) {
        uVar16 = (ulong)(int)uVar19;
        _memcpy(afStack_470,pbVar17,uVar16);
      }
      *(undefined1 *)((long)afStack_470 + uVar16) = 0;
      param_3 = abStack_270;
      pbVar12 = param_2;
      param_4 = afStack_470;
      FUN_1096ee638();
      pbVar13 = unaff_x21;
      if (*unaff_x21 != 0) {
        pbVar13 = unaff_x21 + 1;
      }
      uVar16 = (ulong)*pbVar13;
      unaff_x19 = param_2;
    } while (*pbVar13 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_478 = FUN_1096ef244;
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    pbVar13 = pbVar12;
    pbVar12 = pbVar13 + 1;
    bVar22 = *pbVar13;
  } while (bVar22 == 0x20);
  pbVar8 = pbVar13;
  uStack_4a0 = uVar16;
  pbStack_498 = unaff_x21;
  puStack_490 = unaff_x20;
  pbStack_488 = unaff_x19;
  puStack_480 = &stack0xfffffffffffffff0;
  _strlen();
  if (bVar22 == 0x23 && pbVar8 != (byte *)0x0) {
    uStack_4d0 = uStack_4d0 & 0xffffffff00000000;
    bVar22 = *pbVar12;
    uVar19 = (uint)bVar22;
    if (bVar22 != 0) {
      lVar11 = 0;
      do {
        param_3 = (byte *)(ulong)(uint)(int)(char)bVar22;
        param_4 = (float *)0x7;
        puVar7 = &UNK_10f57e81c;
        _memchr();
        lVar15 = lVar11;
        if (puVar7 != (undefined *)0x0) break;
        lVar15 = lVar11 + 1;
        bVar22 = pbVar12[lVar11 + 1];
        lVar11 = lVar15;
      } while (bVar22 != 0);
      if ((int)lVar15 == 3) {
        param_3 = &UNK_10f4fd77a;
        _sscanf(pbVar12);
        uVar19 = ((uint)uStack_4d0 & 0xf0) << 4 | (uint)uStack_4d0 & 0xf |
                 ((uint)uStack_4d0 >> 8 & 0xf) << 0x10;
        uVar19 = uVar19 | uVar19 << 4;
      }
      else if ((int)lVar15 == 6) {
        param_3 = &UNK_10f4fd77a;
        _sscanf(pbVar12);
        uVar19 = (uint)uStack_4d0;
      }
      else {
        uVar19 = 0;
      }
    }
    uVar16 = (ulong)(uVar19 & 0xff00 | uVar19 >> 0x10 & 0xff | (uVar19 & 0xff) << 0x10);
  }
  else if ((((bVar22 == 0x72 && (byte *)0x3 < pbVar8) && (*pbVar12 == 0x67)) && (pbVar13[2] == 0x62)
           ) && (pbVar13[3] == 0x28)) {
    iStack_4fc = -1;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    _sscanf(pbVar13 + 4,&UNK_10f57e83b);
    puVar9 = &uStack_4d0;
    param_3 = (byte *)0x25;
    _strchr();
    if (puVar9 == (ulong *)0x0) {
      uVar19 = 0xffffffff;
    }
    else {
      uVar19 = 0x8fdf7e26;
      iStack_4fc = 0x28f5c26;
    }
    uVar16 = (ulong)(uVar19 | iStack_4fc << 0x10);
  }
  else {
    puVar14 = (uint *)&UNK_110b0af38;
    lVar11 = 10;
    do {
      iVar18 = (int)*(undefined8 *)(puVar14 + -2);
      param_3 = pbVar13;
      _strcmp();
      if (iVar18 == 0) {
        uVar16 = (ulong)*puVar14;
        goto LAB_1096ef460;
      }
      puVar14 = puVar14 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    uVar16 = 0x808080;
  }
LAB_1096ef460:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
    return;
  }
  ___stack_chk_fail();
  uVar10 = 0;
  lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_3 != 0) && (*param_3 != 0x6e)) {
    uVar10 = 0;
LAB_1096ef510:
    abStack_5e8[0] = 0;
    bVar22 = *param_3;
    while (bVar22 != 0) {
      puVar7 = &UNK_10f57e81c;
      _memchr(&UNK_10f57e81c,(int)(char)bVar22,7);
      if ((bVar22 != 0x2c) && (puVar7 == (undefined *)0x0)) {
        iVar18 = 0;
        goto LAB_1096ef550;
      }
      param_3 = param_3 + 1;
      bVar22 = *param_3;
    }
    lVar11 = 0;
    goto LAB_1096ef590;
  }
LAB_1096ef624:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
    return;
  }
  ___stack_chk_fail();
  uVar16 = uVar10;
  _strcmp();
  if (((int)uVar16 != 0) && (uVar16 = uVar10, _strcmp(uVar10,"round"), (int)uVar16 != 0)) {
    _strcmp(uVar10,"square");
  }
  return;
  while( true ) {
    if (iVar18 < 0x3f) {
      abStack_5e8[iVar18] = bVar22;
      iVar18 = iVar18 + 1;
    }
    param_3 = param_3 + 1;
    bVar22 = *param_3;
    if (bVar22 == 0) break;
LAB_1096ef550:
    puVar7 = &UNK_10f57e81c;
    _memchr(&UNK_10f57e81c,(int)(char)bVar22,7);
    if ((bVar22 == 0x2c) || (puVar7 != (undefined *)0x0)) break;
  }
  lVar11 = (long)iVar18;
LAB_1096ef590:
  abStack_5e8[lVar11] = 0;
  if (abStack_5e8[0] == 0) goto LAB_1096ef5ec;
  iVar18 = (int)uVar10;
  if (iVar18 < 8) {
    fVar2 = *(float *)(uVar16 + 40000);
    fVar28 = *(float *)(uVar16 + 0x9c44);
    pbVar12 = abStack_5e8;
    FUN_1096eefa4(pbVar12);
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    FUN_1096ef8f8(CONCAT44(uVar27,CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23)))),
                  SQRT(fVar28 * fVar28 + fVar2 * fVar2) / 1.4142135,uVar16,pbVar12);
    uVar26 = uVar6;
    uVar25 = uVar5;
    uVar24 = uVar4;
    uVar23 = uVar3;
    param_4[iVar18] = ABS((float)CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23))));
    uVar10 = (ulong)(iVar18 + 1);
  }
  if (*param_3 == 0) goto LAB_1096ef5ec;
  goto LAB_1096ef510;
LAB_1096ef5ec:
  uVar19 = (uint)uVar10;
  if ((int)uVar19 < 1) {
    uVar10 = 0;
  }
  else {
    uVar23 = 0;
    uVar24 = 0;
    uVar25 = 0;
    uVar26 = 0;
    do {
      fVar2 = (float)CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23))) + *param_4;
      uVar23 = SUB41(fVar2,0);
      uVar24 = (undefined1)((uint)fVar2 >> 8);
      uVar25 = (undefined1)((uint)fVar2 >> 0x10);
      uVar26 = (undefined1)((uint)fVar2 >> 0x18);
      uVar10 = uVar10 - 1;
      param_4 = param_4 + 1;
    } while (uVar10 != 0);
    if (fVar2 <= 1e-06) {
      uVar19 = 0;
    }
    uVar10 = (ulong)uVar19;
  }
  goto LAB_1096ef624;
}



/* Entry: 1096ef244; end: 1096ef49f;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001096ef5d4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1096ef244(undefined8 param_1,byte *param_2,byte *param_3,float *param_4)

{
  float fVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte *pbVar6;
  ulong *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  byte bVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined4 uVar22;
  float fVar23;
  byte abStack_178 [64];
  long lStack_138;
  int iStack_8c;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  uVar22 = (undefined4)((ulong)param_1 >> 0x20);
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    pbVar11 = param_2;
    param_2 = pbVar11 + 1;
    bVar17 = *pbVar11;
  } while (bVar17 == 0x20);
  pbVar6 = pbVar11;
  _strlen();
  if (bVar17 == 0x23 && pbVar6 != (byte *)0x0) {
    uStack_60 = uStack_60 & 0xffffffff00000000;
    bVar17 = *param_2;
    uVar16 = (uint)bVar17;
    if (bVar17 != 0) {
      lVar12 = 0;
      do {
        param_3 = (byte *)(ulong)(uint)(int)(char)bVar17;
        param_4 = (float *)0x7;
        puVar8 = &UNK_10f57e81c;
        _memchr();
        lVar14 = lVar12;
        if (puVar8 != (undefined *)0x0) break;
        lVar14 = lVar12 + 1;
        bVar17 = param_2[lVar12 + 1];
        lVar12 = lVar14;
      } while (bVar17 != 0);
      if ((int)lVar14 == 3) {
        param_3 = &UNK_10f4fd77a;
        _sscanf(param_2);
        uVar16 = ((uint)uStack_60 & 0xf0) << 4 | (uint)uStack_60 & 0xf |
                 ((uint)uStack_60 >> 8 & 0xf) << 0x10;
        uVar16 = uVar16 | uVar16 << 4;
      }
      else if ((int)lVar14 == 6) {
        param_3 = &UNK_10f4fd77a;
        _sscanf(param_2);
        uVar16 = (uint)uStack_60;
      }
      else {
        uVar16 = 0;
      }
    }
    uVar9 = (ulong)(uVar16 & 0xff00 | uVar16 >> 0x10 & 0xff | (uVar16 & 0xff) << 0x10);
  }
  else if ((((bVar17 == 0x72 && (byte *)0x3 < pbVar6) && (*param_2 == 0x67)) && (pbVar11[2] == 0x62)
           ) && (pbVar11[3] == 0x28)) {
    iStack_8c = -1;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    _sscanf(pbVar11 + 4,&UNK_10f57e83b);
    puVar7 = &uStack_60;
    param_3 = (byte *)0x25;
    _strchr();
    if (puVar7 == (ulong *)0x0) {
      uVar16 = 0xffffffff;
    }
    else {
      uVar16 = 0x8fdf7e26;
      iStack_8c = 0x28f5c26;
    }
    uVar9 = (ulong)(uVar16 | iStack_8c << 0x10);
  }
  else {
    puVar13 = (uint *)&UNK_110b0af38;
    lVar12 = 10;
    do {
      iVar15 = (int)*(undefined8 *)(puVar13 + -2);
      param_3 = pbVar11;
      _strcmp();
      if (iVar15 == 0) {
        uVar9 = (ulong)*puVar13;
        goto LAB_1096ef460;
      }
      puVar13 = puVar13 + 4;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    uVar9 = 0x808080;
  }
LAB_1096ef460:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uVar10 = 0;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_3 != 0) && (*param_3 != 0x6e)) {
    uVar10 = 0;
LAB_1096ef510:
    abStack_178[0] = 0;
    bVar17 = *param_3;
    while (bVar17 != 0) {
      puVar8 = &UNK_10f57e81c;
      _memchr(&UNK_10f57e81c,(int)(char)bVar17,7);
      if ((bVar17 != 0x2c) && (puVar8 == (undefined *)0x0)) {
        iVar15 = 0;
        goto LAB_1096ef550;
      }
      param_3 = param_3 + 1;
      bVar17 = *param_3;
    }
    lVar12 = 0;
    goto LAB_1096ef590;
  }
LAB_1096ef624:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    ___stack_chk_fail();
    uVar9 = uVar10;
    _strcmp();
    if (((int)uVar9 != 0) && (uVar9 = uVar10, _strcmp(uVar10,"round"), (int)uVar9 != 0)) {
      _strcmp(uVar10,"square");
    }
    return;
  }
  return;
  while( true ) {
    if (iVar15 < 0x3f) {
      abStack_178[iVar15] = bVar17;
      iVar15 = iVar15 + 1;
    }
    param_3 = param_3 + 1;
    bVar17 = *param_3;
    if (bVar17 == 0) break;
LAB_1096ef550:
    puVar8 = &UNK_10f57e81c;
    _memchr(&UNK_10f57e81c,(int)(char)bVar17,7);
    if ((bVar17 == 0x2c) || (puVar8 != (undefined *)0x0)) break;
  }
  lVar12 = (long)iVar15;
LAB_1096ef590:
  abStack_178[lVar12] = 0;
  if (abStack_178[0] == 0) goto LAB_1096ef5ec;
  iVar15 = (int)uVar10;
  if (iVar15 < 8) {
    fVar1 = *(float *)(uVar9 + 40000);
    fVar23 = *(float *)(uVar9 + 0x9c44);
    pbVar11 = abStack_178;
    FUN_1096eefa4(pbVar11);
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    FUN_1096ef8f8(CONCAT44(uVar22,CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18)))),
                  SQRT(fVar23 * fVar23 + fVar1 * fVar1) / 1.4142135,uVar9,pbVar11);
    uVar21 = uVar5;
    uVar20 = uVar4;
    uVar19 = uVar3;
    uVar18 = uVar2;
    param_4[iVar15] = ABS((float)CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18))));
    uVar10 = (ulong)(iVar15 + 1);
  }
  if (*param_3 == 0) goto LAB_1096ef5ec;
  goto LAB_1096ef510;
LAB_1096ef5ec:
  uVar16 = (uint)uVar10;
  if ((int)uVar16 < 1) {
    uVar10 = 0;
  }
  else {
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    do {
      fVar1 = (float)CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18))) + *param_4;
      uVar18 = SUB41(fVar1,0);
      uVar19 = (undefined1)((uint)fVar1 >> 8);
      uVar20 = (undefined1)((uint)fVar1 >> 0x10);
      uVar21 = (undefined1)((uint)fVar1 >> 0x18);
      uVar10 = uVar10 - 1;
      param_4 = param_4 + 1;
    } while (uVar10 != 0);
    if (fVar1 <= 1e-06) {
      uVar16 = 0;
    }
    uVar10 = (ulong)uVar16;
  }
  goto LAB_1096ef624;
}



/* Entry: 1096ef4a0; end: 1096ef663;  */

void FUN_1096ef4a0(long param_1,char *param_2,float *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char acStack_b8 [64];
  long lStack_78;
  
  uVar1 = 0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_2 != '\0') && (*param_2 != 'n')) {
    uVar6 = 0;
LAB_1096ef510:
    acStack_b8[0] = '\0';
    cVar7 = *param_2;
    while (cVar7 != '\0') {
      puVar2 = &UNK_10f57e81c;
      _memchr(&UNK_10f57e81c,(int)cVar7,7);
      if ((cVar7 != ',') && (puVar2 == (undefined *)0x0)) {
        iVar8 = 0;
        goto LAB_1096ef550;
      }
      param_2 = param_2 + 1;
      cVar7 = *param_2;
    }
    lVar5 = 0;
    goto LAB_1096ef590;
  }
LAB_1096ef624:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    uVar4 = uVar1;
    _strcmp();
    if (((int)uVar4 != 0) && (uVar4 = uVar1, _strcmp(uVar1,"round"), (int)uVar4 != 0)) {
      _strcmp(uVar1,"square");
    }
    return;
  }
  return;
  while( true ) {
    if (iVar8 < 0x3f) {
      acStack_b8[iVar8] = cVar7;
      iVar8 = iVar8 + 1;
    }
    param_2 = param_2 + 1;
    cVar7 = *param_2;
    if (cVar7 == '\0') break;
LAB_1096ef550:
    puVar2 = &UNK_10f57e81c;
    _memchr(&UNK_10f57e81c,(int)cVar7,7);
    if ((cVar7 == ',') || (puVar2 != (undefined *)0x0)) break;
  }
  lVar5 = (long)iVar8;
LAB_1096ef590:
  acStack_b8[lVar5] = '\0';
  if (acStack_b8[0] == '\0') goto LAB_1096ef5ec;
  if ((int)uVar6 < 8) {
    fVar9 = *(float *)(param_1 + 40000);
    fVar11 = *(float *)(param_1 + 0x9c44);
    pcVar3 = acStack_b8;
    FUN_1096eefa4(pcVar3);
    fVar10 = 0.0;
    FUN_1096ef8f8(0,SQRT(fVar11 * fVar11 + fVar9 * fVar9) / 1.4142135,param_1,pcVar3);
    param_3[(int)uVar6] = ABS(fVar10);
    uVar6 = uVar6 + 1;
  }
  if (*param_2 == '\0') goto LAB_1096ef5ec;
  goto LAB_1096ef510;
LAB_1096ef5ec:
  if ((int)uVar6 < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)uVar6;
    fVar9 = 0.0;
    do {
      fVar9 = fVar9 + *param_3;
      uVar1 = uVar1 - 1;
      param_3 = param_3 + 1;
    } while (uVar1 != 0);
    if (fVar9 <= 1e-06) {
      uVar6 = 0;
    }
    uVar1 = (ulong)uVar6;
  }
  goto LAB_1096ef624;
}



/* Entry: 1096ef664; end: 1096ef76f;  */

void FUN_1096ef664(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  _strcmp(param_1,"butt");
  if (((int)uVar1 != 0) && (uVar1 = param_1, _strcmp(param_1,"round"), (int)uVar1 != 0)) {
    _strcmp(param_1,"square");
  }
  return;
}



/* Entry: 1096ef770; end: 1096ef7af;  */

void FUN_1096ef770(undefined8 *param_1,undefined1 (*param_2) [12])

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar3 = *(float *)(param_2[1] + 4);
  fVar4 = *(float *)(param_2[1] + 8);
  fVar7 = (float)param_1[1];
  fVar8 = (float)((ulong)param_1[1] >> 0x20);
  fVar9 = (float)*param_1;
  fVar10 = (float)((ulong)*param_1 >> 0x20);
  fVar6 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  auVar2 = *param_2;
  auVar1 = *param_2;
  fVar5 = (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
  param_1[1] = CONCAT44(fVar6 * fVar8 + fVar10 * auVar1._8_4_,fVar6 * fVar7 + fVar9 * auVar2._8_4_);
  *param_1 = CONCAT44(fVar5 * fVar8 + fVar10 * auVar1._0_4_,fVar5 * fVar7 + fVar9 * auVar2._0_4_);
  param_1[2] = CONCAT44((float)((ulong)param_1[2] >> 0x20) + fVar8 * fVar4 + fVar10 * fVar3,
                        (float)param_1[2] + fVar7 * fVar4 + fVar9 * fVar3);
  return;
}



/* Entry: 1096ef7b0; end: 1096ef8f7;  */

double FUN_1096ef7b0(byte *param_1)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  byte *pbStack_58;
  
  pbStack_58 = (byte *)0x0;
  bVar4 = *param_1;
  pbVar5 = param_1;
  if (bVar4 == 0x2b) {
    pbVar5 = param_1 + 1;
  }
  if (bVar4 == 0x2d) {
    pbVar5 = param_1 + 1;
  }
  dVar7 = -1.0;
  if (bVar4 != 0x2d) {
    dVar7 = 1.0;
  }
  bVar4 = *pbVar5;
  if (bVar4 - 0x3a < 0xfffffff6) {
    bVar1 = false;
    dVar8 = 0.0;
  }
  else {
    pbVar2 = pbVar5;
    _strtoll(pbVar5,&pbStack_58,10);
    bVar1 = pbVar5 != pbStack_58;
    dVar8 = (double)(long)(double)(long)pbVar2;
    if (!bVar1) {
      dVar8 = 0.0;
    }
    bVar4 = *pbStack_58;
    pbVar5 = pbStack_58;
  }
  if (((bVar4 == 0x2e) && (pbVar5 = pbVar5 + 1, 0xfffffff5 < *pbVar5 - 0x3a)) &&
     (pbVar3 = pbVar5, _strtoll(pbVar5,&pbStack_58,10), pbVar2 = pbStack_58, pbVar5 != pbStack_58))
  {
    dVar6 = (double)((long)pbStack_58 - (long)pbVar5);
    ___exp10(dVar6);
    dVar6 = (double)(long)pbVar3 / dVar6;
    dVar8 = dVar8 + dVar6;
  }
  else {
    pbVar2 = pbVar5;
    dVar6 = 0.0;
    if (!bVar1) {
      return 0.0;
    }
  }
  pbVar5 = pbVar2 + 1;
  if (((*pbVar2 | 0x20) == 0x65) &&
     (pbVar2 = pbVar5, _strtol(dVar6,pbVar5,&pbStack_58,10), pbVar5 != pbStack_58)) {
    dVar6 = (double)(int)pbVar2;
    ___exp10(dVar6);
    dVar8 = dVar8 * dVar6;
  }
  return dVar7 * dVar8;
}



/* Entry: 1096ef8f8; end: 1096efa5b;  */

float FUN_1096ef8f8(float param_1,float param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = (int)((ulong)param_4 >> 0x20);
  fVar2 = (float)param_4;
  if (iVar1 < 6) {
    if (iVar1 < 4) {
      if (iVar1 == 2) {
        fVar3 = 72.0;
      }
      else {
        if (iVar1 != 3) {
          return fVar2;
        }
        fVar3 = 6.0;
      }
    }
    else if (iVar1 == 4) {
      fVar3 = 25.4;
    }
    else {
      if (iVar1 != 5) {
        return fVar2;
      }
      fVar3 = 2.54;
    }
    fVar2 = fVar2 / fVar3;
    fVar3 = *(float *)(param_3 + 0x9c54);
LAB_1096ef9cc:
    return fVar2 * fVar3;
  }
  if (iVar1 < 8) {
    if (iVar1 != 6) {
      if (iVar1 != 7) {
        return fVar2;
      }
      return param_1 + param_2 * (fVar2 / 100.0);
    }
    fVar3 = *(float *)(param_3 + 0x9c54);
  }
  else {
    param_3 = param_3 + (long)*(int *)(param_3 + 0x9c00) * 0x138;
    if (iVar1 != 8) {
      if (iVar1 != 9) {
        return fVar2;
      }
      fVar2 = *(float *)(param_3 + 0x124) * fVar2;
      fVar3 = 0.52;
      goto LAB_1096ef9cc;
    }
    fVar3 = *(float *)(param_3 + 0x124);
  }
  return fVar3 * fVar2;
}



/* Entry: 1096efa5c; end: 1096efba3;  */

byte * FUN_1096efa5c(undefined8 param_1,byte *param_2,byte *param_3,int param_4,int *param_5)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  float fVar9;
  undefined4 uVar10;
  byte abStack_98 [64];
  long lStack_58;
  
  uVar10 = (undefined4)((ulong)param_1 >> 0x20);
  fVar9 = (float)param_1;
  pbVar7 = (byte *)0x0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_5 = 0;
  for (pbVar3 = param_2; pbVar4 = param_3, *pbVar3 != 0; pbVar3 = pbVar3 + 1) {
    if (*pbVar3 == 0x28) {
      bVar1 = 0x28;
      pbVar8 = pbVar3;
      goto LAB_1096efac0;
    }
    pbVar7 = (byte *)(ulong)((int)pbVar7 + 1);
  }
LAB_1096efadc:
  pbVar7 = (byte *)0x1;
  goto LAB_1096efae0;
LAB_1096efac0:
  if (bVar1 == 0) goto LAB_1096efadc;
  if (bVar1 == 0x29) {
    if (pbVar8 <= pbVar3) goto LAB_1096efae0;
    iVar5 = 0;
    goto LAB_1096efb2c;
  }
  pbVar8 = pbVar8 + 1;
  bVar1 = *pbVar8;
  pbVar7 = (byte *)(ulong)((int)pbVar7 + 1);
  goto LAB_1096efac0;
  while( true ) {
    if (iVar5 < 0x3f) {
      pbVar4[iVar5] = (byte)uVar6;
      iVar5 = iVar5 + 1;
    }
    param_2 = param_2 + 1;
    uVar6 = (uint)*param_2;
    if (uVar6 == 0) break;
LAB_1096efc28:
    pbVar3 = param_2;
    if (uVar6 - 0x3a < 0xfffffff6) goto LAB_1096efc54;
  }
  goto LAB_1096efcc8;
LAB_1096efc54:
  param_2 = pbVar3;
  if ((uVar6 | 0x20) == 0x65) {
    if (iVar5 < 0x3f) {
      pbVar4[iVar5] = (byte)uVar6;
      iVar5 = iVar5 + 1;
    }
    param_2 = pbVar3 + 1;
    bVar1 = *param_2;
    uVar6 = (uint)bVar1;
    if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
      if (iVar5 < 0x3f) {
        pbVar4[iVar5] = bVar1;
        iVar5 = iVar5 + 1;
      }
      param_2 = pbVar3 + 2;
      uVar6 = (uint)*param_2;
    }
    while (0xfffffff5 < uVar6 - 0x3a) {
      if (iVar5 < 0x3f) {
        pbVar4[iVar5] = (byte)uVar6;
        iVar5 = iVar5 + 1;
      }
      param_2 = param_2 + 1;
      uVar6 = (uint)*param_2;
    }
  }
  goto LAB_1096efcc8;
LAB_1096efb2c:
  do {
    bVar1 = *pbVar3;
    if ((bVar1 < 0x2f && (1L << ((ulong)bVar1 & 0x3f) & 0x680000000000U) != 0) ||
       (0xfffffff5 < bVar1 - 0x3a)) {
      if (param_4 <= iVar5) {
        pbVar7 = (byte *)0x0;
        break;
      }
      pbVar4 = abStack_98;
      FUN_1096efba4();
      param_2 = abStack_98;
      FUN_1096ef7b0();
      fVar9 = (float)(double)CONCAT44(uVar10,fVar9);
      uVar10 = 0;
      iVar2 = *param_5;
      iVar5 = iVar2 + 1;
      *param_5 = iVar5;
      *(float *)(param_3 + (long)iVar2 * 4) = fVar9;
    }
    else {
      pbVar3 = pbVar3 + 1;
    }
  } while (pbVar3 < pbVar8);
LAB_1096efae0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pbVar7;
  }
  ___stack_chk_fail();
  bVar1 = *param_2;
  if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
    *pbVar4 = bVar1;
    param_2 = param_2 + 1;
    bVar1 = *param_2;
    iVar5 = 1;
  }
  else {
    iVar5 = 0;
  }
  if (bVar1 != 0) {
    uVar6 = (uint)bVar1;
    pbVar3 = param_2;
    do {
      param_2 = pbVar3 + 1;
      if (uVar6 - 0x3a < 0xfffffff6) {
        if (uVar6 != 0x2e) goto LAB_1096efc54;
        if (iVar5 < 0x3f) {
          pbVar4[iVar5] = 0x2e;
          iVar5 = iVar5 + 1;
        }
        uVar6 = (uint)*param_2;
        if (uVar6 != 0) goto LAB_1096efc28;
        break;
      }
      if (iVar5 < 0x3f) {
        pbVar4[iVar5] = (byte)uVar6;
        iVar5 = iVar5 + 1;
      }
      uVar6 = (uint)*param_2;
      pbVar3 = param_2;
    } while (uVar6 != 0);
  }
LAB_1096efcc8:
  pbVar4[iVar5] = 0;
  return param_2;
}



/* Entry: 1096efba4; end: 1096efdab;  */

byte * FUN_1096efba4(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = *param_1;
  if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
    *param_2 = bVar1;
    param_1 = param_1 + 1;
    bVar1 = *param_1;
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  if (bVar1 != 0) {
    uVar4 = (uint)bVar1;
    pbVar2 = param_1;
    do {
      param_1 = pbVar2 + 1;
      if (uVar4 - 0x3a < 0xfffffff6) {
        if (uVar4 != 0x2e) goto LAB_1096efc54;
        if (iVar3 < 0x3f) {
          param_2[iVar3] = 0x2e;
          iVar3 = iVar3 + 1;
        }
        uVar4 = (uint)*param_1;
        if (uVar4 != 0) goto LAB_1096efc28;
        break;
      }
      if (iVar3 < 0x3f) {
        param_2[iVar3] = (byte)uVar4;
        iVar3 = iVar3 + 1;
      }
      uVar4 = (uint)*param_1;
      pbVar2 = param_1;
    } while (uVar4 != 0);
  }
  goto LAB_1096efcc8;
LAB_1096efc54:
  param_1 = pbVar2;
  if ((uVar4 | 0x20) == 0x65) {
    if (iVar3 < 0x3f) {
      param_2[iVar3] = (byte)uVar4;
      iVar3 = iVar3 + 1;
    }
    param_1 = pbVar2 + 1;
    bVar1 = *param_1;
    uVar4 = (uint)bVar1;
    if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
      if (iVar3 < 0x3f) {
        param_2[iVar3] = bVar1;
        iVar3 = iVar3 + 1;
      }
      param_1 = pbVar2 + 2;
      uVar4 = (uint)*param_1;
    }
    while (0xfffffff5 < uVar4 - 0x3a) {
      if (iVar3 < 0x3f) {
        param_2[iVar3] = (byte)uVar4;
        iVar3 = iVar3 + 1;
      }
      param_1 = param_1 + 1;
      uVar4 = (uint)*param_1;
    }
  }
  goto LAB_1096efcc8;
  while( true ) {
    if (iVar3 < 0x3f) {
      param_2[iVar3] = (byte)uVar4;
      iVar3 = iVar3 + 1;
    }
    param_1 = param_1 + 1;
    uVar4 = (uint)*param_1;
    if (uVar4 == 0) break;
LAB_1096efc28:
    pbVar2 = param_1;
    if (uVar4 - 0x3a < 0xfffffff6) goto LAB_1096efc54;
  }
LAB_1096efcc8:
  param_2[iVar3] = 0;
  return param_1;
}



/* Entry: 1096efdac; end: 1096efe7f;  */

byte * FUN_1096efdac(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  
  *param_2 = 0;
  bVar1 = *param_1;
  if (bVar1 != 0) {
    pbVar2 = param_1;
    do {
      param_1 = pbVar2 + 1;
      puVar4 = &UNK_10f57e81c;
      _memchr(&UNK_10f57e81c,(int)(char)bVar1,7);
      if ((bVar1 != 0x2c) && (puVar4 == (undefined *)0x0)) {
        if (((0x2e < bVar1) || ((1L << ((ulong)bVar1 & 0x3f) & 0x680000000000U) == 0)) &&
           ((byte)(bVar1 - 0x3a) < 0xf6)) {
          *param_2 = bVar1;
          param_2[1] = 0;
          return param_1;
        }
        bVar1 = *pbVar2;
        if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
          *param_2 = bVar1;
          bVar1 = *param_1;
          iVar5 = 1;
          pbVar2 = param_1;
        }
        else {
          iVar5 = 0;
        }
        if (bVar1 == 0) goto LAB_1096efcc8;
        uVar6 = (uint)bVar1;
        pbVar3 = pbVar2;
        goto LAB_1096efbd8;
      }
      bVar1 = *param_1;
      pbVar2 = param_1;
    } while (bVar1 != 0);
  }
  return param_1;
  while( true ) {
    if (iVar5 < 0x3f) {
      param_2[iVar5] = (byte)uVar6;
      iVar5 = iVar5 + 1;
    }
    uVar6 = (uint)*pbVar2;
    pbVar3 = pbVar2;
    if (uVar6 == 0) break;
LAB_1096efbd8:
    pbVar2 = pbVar3 + 1;
    if (uVar6 - 0x3a < 0xfffffff6) {
      if (uVar6 != 0x2e) goto LAB_1096efc54;
      if (iVar5 < 0x3f) {
        param_2[iVar5] = 0x2e;
        iVar5 = iVar5 + 1;
      }
      uVar6 = (uint)*pbVar2;
      if (uVar6 != 0) goto LAB_1096efc28;
      break;
    }
  }
  goto LAB_1096efcc8;
LAB_1096efc54:
  pbVar2 = pbVar3;
  if ((uVar6 | 0x20) == 0x65) {
    if (iVar5 < 0x3f) {
      param_2[iVar5] = (byte)uVar6;
      iVar5 = iVar5 + 1;
    }
    pbVar2 = pbVar3 + 1;
    bVar1 = *pbVar2;
    uVar6 = (uint)bVar1;
    if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
      if (iVar5 < 0x3f) {
        param_2[iVar5] = bVar1;
        iVar5 = iVar5 + 1;
      }
      pbVar2 = pbVar3 + 2;
      uVar6 = (uint)*pbVar2;
    }
    while (0xfffffff5 < uVar6 - 0x3a) {
      if (iVar5 < 0x3f) {
        param_2[iVar5] = (byte)uVar6;
        iVar5 = iVar5 + 1;
      }
      pbVar2 = pbVar2 + 1;
      uVar6 = (uint)*pbVar2;
    }
  }
  goto LAB_1096efcc8;
  while( true ) {
    if (iVar5 < 0x3f) {
      param_2[iVar5] = (byte)uVar6;
      iVar5 = iVar5 + 1;
    }
    pbVar2 = pbVar2 + 1;
    uVar6 = (uint)*pbVar2;
    if (uVar6 == 0) break;
LAB_1096efc28:
    pbVar3 = pbVar2;
    if (uVar6 - 0x3a < 0xfffffff6) goto LAB_1096efc54;
  }
LAB_1096efcc8:
  param_2[iVar5] = 0;
  return pbVar2;
}



/* Entry: 1096efe80; end: 1096eff6b;  */

undefined8 FUN_1096efe80(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 1;
  if (param_1 < 0x61) {
    if (param_1 < 0x51) {
      if (param_1 < 0x4c) {
        if (param_1 == 0x41) {
          return 7;
        }
        if (param_1 == 0x43) {
          return 6;
        }
        if (param_1 == 0x48) {
          return uVar3;
        }
      }
      else if (param_1 - 0x4cU < 2) {
        return 2;
      }
    }
    else if (param_1 < 0x54) {
      if ((param_1 == 0x51) || (param_1 == 0x53)) {
        return 4;
      }
    }
    else {
      if (param_1 == 0x54) {
        return 2;
      }
      if (param_1 == 0x56) {
        return uVar3;
      }
    }
  }
  else {
    uVar2 = param_1 - 0x68;
    if (uVar2 < 0xf) {
      uVar1 = 1 << (ulong)(uVar2 & 0x1f);
      if ((uVar1 & 0x1030) != 0) {
        return 2;
      }
      if ((uVar1 & 0xa00) != 0) {
        return 4;
      }
      if ((1 << (ulong)(uVar2 & 0x1f) & 0x4001U) != 0) {
        return uVar3;
      }
    }
    if (param_1 == 0x61) {
      return 7;
    }
    if (param_1 == 99) {
      return 6;
    }
  }
  return 0;
}



/* Entry: 1096eff6c; end: 1096f040f;  */

void FUN_1096eff6c(undefined8 param_1,undefined8 param_2,float *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 *puVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  long lVar16;
  float *pfVar17;
  float fVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  short sVar22;
  short sVar23;
  short sVar24;
  float fVar25;
  undefined8 uVar26;
  short sVar27;
  short sVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [24];
  long lStack_d8;
  float fStack_78;
  float fStack_74;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  long lStack_58;
  
  sVar23 = (short)((ulong)param_2 >> 0x10);
  sVar22 = (short)param_2;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar6 = param_3;
  if ((int)param_3[0x2704] < 4) {
LAB_1096f00c0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
  }
  else {
    fVar25 = param_3[0x2700];
    if (param_4 != 0) {
      sVar22 = (short)*(undefined4 *)(*(long *)(param_3 + 0x2702) + 4);
      sVar23 = (short)((uint)*(undefined4 *)(*(long *)(param_3 + 0x2702) + 4) >> 0x10);
      FUN_1096f0410(param_3);
    }
    puVar5 = (undefined8 *)0x1;
    _calloc(1,0x28);
    pfVar6 = (float *)0x0;
    if (puVar5 == (undefined8 *)0x0) goto LAB_1096f00c0;
    fVar18 = param_3[0x2704];
    lVar16 = (long)(int)fVar18;
    pfVar6 = (float *)(lVar16 << 3);
    _malloc();
    *puVar5 = pfVar6;
    if (pfVar6 != (float *)0x0) {
      *(char *)((long)puVar5 + 0xc) = (char)param_4;
      *(float *)(puVar5 + 1) = fVar18;
      if (0 < (int)fVar18) {
        uVar19 = *(undefined8 *)(param_3 + ((long)(int)fVar25 * 0x27 + 8) * 2);
        uVar4 = *(undefined8 *)(param_3 + ((long)(int)fVar25 * 0x27 + 9) * 2);
        sVar22 = (short)uVar4;
        sVar23 = (short)((ulong)uVar4 >> 0x10);
        uVar26 = *(undefined8 *)(param_3 + ((long)(int)fVar25 * 0x27 + 10) * 2);
        pfVar8 = (float *)(*(long *)(param_3 + 0x2702) + 4);
        pfVar7 = pfVar6;
        do {
          *(ulong *)pfVar7 =
               CONCAT44((float)((ulong)uVar26 >> 0x20) +
                        (float)((ulong)uVar4 >> 0x20) * *pfVar8 +
                        (float)((ulong)uVar19 >> 0x20) * pfVar8[-1],
                        (float)uVar26 + (float)uVar4 * *pfVar8 + (float)uVar19 * pfVar8[-1]);
          pfVar8 = pfVar8 + 2;
          lVar16 = lVar16 + -1;
          pfVar7 = pfVar7 + 2;
        } while (lVar16 != 0);
        if (fVar18 != 1.4013e-45) {
          lVar16 = 0;
          pfVar8 = pfVar6;
          auVar20 = ZEXT216(0);
          do {
            fStack_78 = auVar20._8_4_;
            fStack_74 = auVar20._12_4_;
            pfVar6 = &fStack_68;
            FUN_1096f0534(pfVar6,pfVar8);
            sVar22 = (short)uStack_60;
            sVar23 = (short)((ulong)uStack_60 >> 0x10);
            auVar21._4_4_ = fStack_64;
            auVar21._0_4_ = fStack_68;
            auVar21._8_8_ = uStack_60;
            if (lVar16 != 0) {
              sVar22 = -(ushort)(auVar20._0_4_ < fStack_68);
              sVar24 = -(ushort)(auVar20._4_4_ < fStack_64);
              sVar27 = -(ushort)((float)uStack_60 < fStack_78);
              sVar28 = -(ushort)((float)((ulong)uStack_60 >> 0x20) < fStack_74);
              sVar23 = sVar22 >> 0xf;
              auVar3._4_2_ = sVar24;
              auVar3._0_4_ = (int)sVar22;
              auVar3._6_2_ = sVar24 >> 0xf;
              auVar3._8_2_ = sVar27;
              auVar3._10_2_ = sVar27 >> 0xf;
              auVar3._12_2_ = sVar28;
              auVar3._14_2_ = sVar28 >> 0xf;
              auVar21 = auVar21 ^ (auVar21 ^ auVar20) & auVar3;
            }
            puVar5[3] = auVar21._8_8_;
            puVar5[2] = auVar21._0_8_;
            lVar16 = lVar16 + 3;
            pfVar8 = pfVar8 + 6;
            auVar20 = auVar21;
          } while ((int)lVar16 < (int)fVar18 + -1);
        }
      }
      puVar5[4] = *(undefined8 *)(param_3 + 0x2706);
      *(undefined8 **)(param_3 + 0x2706) = puVar5;
      goto LAB_1096f00c0;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(puVar5);
      return;
    }
  }
  ___stack_chk_fail();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *(long *)(pfVar6 + 0x2706);
  pfVar8 = pfVar6;
  if (lVar16 == 0) goto LAB_1096f03d8;
  fVar25 = pfVar6[0x2700];
  pfVar7 = (float *)0xb8;
  _malloc();
  pfVar8 = pfVar7;
  if (pfVar7 == (float *)0x0) goto LAB_1096f03d8;
  pfVar17 = pfVar6 + (long)(int)fVar25 * 0x4e;
  pfVar15 = pfVar7 + 0x10;
  pfVar7[0x12] = 0.0;
  pfVar7[0x13] = 0.0;
  pfVar15[0] = 0.0;
  pfVar15[1] = 0.0;
  pfVar7[0x2c] = 0.0;
  pfVar7[0x2d] = 0.0;
  pfVar7[0x26] = 0.0;
  pfVar7[0x27] = 0.0;
  pfVar7[0x24] = 0.0;
  pfVar7[0x25] = 0.0;
  pfVar7[0x2a] = 0.0;
  pfVar7[0x2b] = 0.0;
  pfVar7[0x28] = 0.0;
  pfVar7[0x29] = 0.0;
  pfVar7[0x1e] = 0.0;
  pfVar7[0x1f] = 0.0;
  pfVar7[0x1c] = 0.0;
  pfVar7[0x1d] = 0.0;
  pfVar7[0x22] = 0.0;
  pfVar7[0x23] = 0.0;
  pfVar7[0x20] = 0.0;
  pfVar7[0x21] = 0.0;
  pfVar7[0x16] = 0.0;
  pfVar7[0x17] = 0.0;
  pfVar7[0x14] = 0.0;
  pfVar7[0x15] = 0.0;
  pfVar7[0x1a] = 0.0;
  pfVar7[0x1b] = 0.0;
  pfVar7[0x18] = 0.0;
  pfVar7[0x19] = 0.0;
  uVar26 = *(undefined8 *)pfVar17;
  uVar19 = *(undefined8 *)(pfVar17 + 6);
  uVar4 = *(undefined8 *)(pfVar17 + 4);
  *(undefined8 *)(pfVar7 + 2) = *(undefined8 *)(pfVar17 + 2);
  *(undefined8 *)pfVar7 = uVar26;
  *(undefined8 *)(pfVar7 + 6) = uVar19;
  *(undefined8 *)(pfVar7 + 4) = uVar4;
  uVar26 = *(undefined8 *)(pfVar17 + 8);
  uVar19 = *(undefined8 *)(pfVar17 + 0xe);
  uVar4 = *(undefined8 *)(pfVar17 + 0xc);
  *(undefined8 *)(pfVar7 + 10) = *(undefined8 *)(pfVar17 + 10);
  *(undefined8 *)(pfVar7 + 8) = uVar26;
  *(undefined8 *)(pfVar7 + 0xe) = uVar19;
  *(undefined8 *)(pfVar7 + 0xc) = uVar4;
  pfVar14 = pfVar17 + 0x10;
  fVar25 = (float)*(undefined8 *)(pfVar17 + 0x12);
  fVar18 = (float)((ulong)*(undefined8 *)(pfVar17 + 0x12) >> 0x20);
  fVar29 = (float)*(undefined8 *)pfVar14;
  fVar30 = (float)((ulong)*(undefined8 *)pfVar14 >> 0x20);
  fVar18 = (SQRT(fVar25 * fVar25 + fVar29 * fVar29) + SQRT(fVar18 * fVar18 + fVar30 * fVar30)) * 0.5
  ;
  fVar25 = (float)((ulong)*(undefined8 *)(pfVar17 + 0x3b) >> 0x20) * fVar18;
  *(ulong *)(pfVar7 + 0x19) =
       CONCAT26((short)((uint)fVar25 >> 0x10),
                CONCAT24(SUB42(fVar25,0),(float)*(undefined8 *)(pfVar17 + 0x3b) * fVar18));
  fVar25 = pfVar17[0x45];
  uVar9 = (ulong)(uint)fVar25;
  *(char *)(pfVar7 + 0x23) = SUB41(fVar25,0);
  if (0 < (int)fVar25) {
    pfVar12 = pfVar17 + 0x3d;
    pfVar13 = pfVar7 + 0x1b;
    do {
      *pfVar13 = fVar18 * *pfVar12;
      uVar9 = uVar9 - 1;
      pfVar12 = pfVar12 + 1;
      pfVar13 = pfVar13 + 1;
    } while (uVar9 != 0);
  }
  *(undefined2 *)((long)pfVar7 + 0x8d) = *(undefined2 *)(pfVar17 + 0x46);
  pfVar7[0x24] = pfVar17[0x47];
  *(undefined1 *)(pfVar7 + 0x25) = *(undefined1 *)(pfVar17 + 0x48);
  pfVar7[0x18] = pfVar17[0x18];
  *(long *)(pfVar7 + 0x2a) = lVar16;
  pfVar6[0x2706] = 0.0;
  pfVar6[0x2707] = 0.0;
  fVar18 = *(float *)(lVar16 + 0x10);
  pfVar7[0x26] = fVar18;
  fVar25 = *(float *)(lVar16 + 0x14);
  sVar22 = SUB42(fVar25,0);
  sVar23 = (short)((uint)fVar25 >> 0x10);
  pfVar7[0x27] = fVar25;
  fVar25 = *(float *)(lVar16 + 0x18);
  pfVar7[0x28] = fVar25;
  fVar29 = *(float *)(lVar16 + 0x1c);
  pfVar7[0x29] = fVar29;
  for (lVar10 = *(long *)(lVar16 + 0x20); lVar10 != 0; lVar10 = *(long *)(lVar10 + 0x20)) {
    if (*(float *)(lVar10 + 0x10) <= fVar18) {
      fVar18 = *(float *)(lVar10 + 0x10);
    }
    pfVar7[0x26] = fVar18;
    fVar30 = *(float *)(lVar10 + 0x14);
    if (fVar30 <= (float)CONCAT22(sVar23,sVar22)) {
      sVar22 = SUB42(fVar30,0);
      sVar23 = (short)((uint)fVar30 >> 0x10);
    }
    pfVar7[0x27] = (float)CONCAT22(sVar23,sVar22);
    if (fVar25 <= *(float *)(lVar10 + 0x18)) {
      fVar25 = *(float *)(lVar10 + 0x18);
    }
    pfVar7[0x28] = fVar25;
    if (fVar29 <= *(float *)(lVar10 + 0x1c)) {
      fVar29 = *(float *)(lVar10 + 0x1c);
    }
    pfVar7[0x29] = fVar29;
  }
  cVar1 = *(char *)(pfVar17 + 0x4d);
  if (cVar1 == '\x02') {
    FUN_1096f07f4(auStack_f0,pfVar14);
    FUN_1096f08f8(auStack_100,lVar16,auStack_f0);
    pfVar8 = pfVar6;
    FUN_1096f0a98(pfVar6,pfVar17 + 0x1b,auStack_100,pfVar15);
    *(float **)(pfVar7 + 0x12) = pfVar8;
    if (pfVar8 == (float *)0x0) {
LAB_1096f0324:
      *(undefined1 *)pfVar15 = 0;
    }
  }
  else if (cVar1 == '\x01') {
    *(undefined1 *)(pfVar7 + 0x10) = 1;
    sVar22 = 0;
    sVar23 = 0x437f;
    pfVar7[0x12] = (float)((uint)pfVar17[0x16] | (int)(pfVar17[0x19] * 255.0) << 0x18);
  }
  else if (cVar1 == '\0') goto LAB_1096f0324;
  cVar1 = *(char *)((long)pfVar17 + 0x135);
  if (cVar1 == '\x02') {
    FUN_1096f07f4(auStack_f0,pfVar14);
    FUN_1096f08f8(auStack_100,*(undefined8 *)(pfVar7 + 0x2a),auStack_f0);
    pfVar8 = pfVar6;
    FUN_1096f0a98(pfVar6,pfVar17 + 0x2b,auStack_100,pfVar7 + 0x14);
    *(float **)(pfVar7 + 0x16) = pfVar8;
    if (pfVar8 == (float *)0x0) {
      *(undefined1 *)(pfVar7 + 0x14) = 0;
    }
  }
  else if (cVar1 == '\x01') {
    *(undefined1 *)(pfVar7 + 0x14) = 1;
    sVar22 = 0;
    sVar23 = 0x437f;
    pfVar7[0x16] = (float)((uint)pfVar17[0x17] | (int)(pfVar17[0x1a] * 255.0) << 0x18);
  }
  else if (cVar1 == '\0') {
    *(undefined1 *)(pfVar7 + 0x14) = 0;
  }
  *(bool *)((long)pfVar7 + 0x95) = *(char *)((long)pfVar17 + 0x136) != '\0';
  plVar11 = (long *)(*(long *)(pfVar6 + 0x2708) + 8);
  if (*plVar11 != 0) {
    plVar11 = (long *)(*(long *)(pfVar6 + 0x270c) + 0xb0);
  }
  *plVar11 = (long)pfVar7;
  *(float **)(pfVar6 + 0x270c) = pfVar7;
LAB_1096f03d8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  fVar25 = (float)___stack_chk_fail();
  if (0 < (int)pfVar8[0x2704]) {
    iVar2 = (int)pfVar8[0x2704] * 2;
    fVar29 = *(float *)(*(long *)(pfVar8 + 0x2702) + (ulong)(iVar2 - 2) * 4);
    fVar18 = *(float *)(*(long *)(pfVar8 + 0x2702) + (ulong)(iVar2 - 1) * 4);
    fVar30 = (fVar25 - fVar29) / 3.0;
    fVar31 = ((float)CONCAT22(sVar23,sVar22) - fVar18) / 3.0;
    FUN_1096f04ac(fVar29 + fVar30,SUB42(fVar18 + fVar31,0));
    FUN_1096f04ac(fVar25 - fVar30,SUB42((float)CONCAT22(sVar23,sVar22) - fVar31,0),pfVar8);
    fVar18 = pfVar8[0x2704];
    fVar29 = pfVar8[0x2705];
    if ((int)fVar18 < (int)fVar29) {
      lVar16 = *(long *)(pfVar8 + 0x2702);
    }
    else {
      fVar18 = 1.12104e-44;
      if (fVar29 != 0.0) {
        fVar18 = (float)((int)fVar29 << 1);
      }
      pfVar8[0x2705] = fVar18;
      lVar16 = *(long *)(pfVar8 + 0x2702);
      _realloc(lVar16,-(ulong)((uint)ABS(fVar18) >> 0x1e) & 0xfffffffc00000000 |
                      (ulong)(uint)((int)fVar18 << 1) << 2);
      *(long *)(pfVar8 + 0x2702) = lVar16;
      if (lVar16 == 0) {
        return;
      }
      fVar18 = pfVar8[0x2704];
    }
    pfVar6 = (float *)(lVar16 + (long)((int)fVar18 << 1) * 4);
    *pfVar6 = fVar25;
    pfVar6[1] = (float)CONCAT22(sVar23,sVar22);
    pfVar8[0x2704] = (float)((int)fVar18 + 1);
    return;
  }
  return;
}



/* Entry: 1096f0410; end: 1096f04ab;  */

void FUN_1096f0410(float param_1,float param_2,long param_3)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(int *)(param_3 + 0x9c10) < 1) {
    return;
  }
  iVar5 = *(int *)(param_3 + 0x9c10) * 2;
  fVar6 = *(float *)(*(long *)(param_3 + 0x9c08) + (ulong)(iVar5 - 2) * 4);
  fVar7 = *(float *)(*(long *)(param_3 + 0x9c08) + (ulong)(iVar5 - 1) * 4);
  fVar8 = (param_1 - fVar6) / 3.0;
  fVar9 = (param_2 - fVar7) / 3.0;
  FUN_1096f04ac(fVar6 + fVar8,fVar7 + fVar9);
  FUN_1096f04ac(param_1 - fVar8,param_2 - fVar9,param_3);
  iVar5 = *(int *)(param_3 + 0x9c10);
  iVar3 = *(int *)(param_3 + 0x9c14);
  if (iVar5 < iVar3) {
    lVar4 = *(long *)(param_3 + 0x9c08);
  }
  else {
    uVar2 = 8;
    if (iVar3 != 0) {
      uVar2 = iVar3 << 1;
    }
    *(uint *)(param_3 + 0x9c14) = uVar2;
    lVar4 = *(long *)(param_3 + 0x9c08);
    _realloc(lVar4,-(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                   (ulong)(uVar2 << 1) << 2);
    *(long *)(param_3 + 0x9c08) = lVar4;
    if (lVar4 == 0) {
      return;
    }
    iVar5 = *(int *)(param_3 + 0x9c10);
  }
  pfVar1 = (float *)(lVar4 + (long)(iVar5 << 1) * 4);
  *pfVar1 = param_1;
  pfVar1[1] = param_2;
  *(int *)(param_3 + 0x9c10) = iVar5 + 1;
  return;
}



/* Entry: 1096f04ac; end: 1096f0533;  */

void FUN_1096f04ac(undefined4 param_1,undefined4 param_2,long param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_3 + 0x9c10);
  iVar3 = *(int *)(param_3 + 0x9c14);
  if (iVar5 < iVar3) {
    lVar4 = *(long *)(param_3 + 0x9c08);
  }
  else {
    uVar2 = 8;
    if (iVar3 != 0) {
      uVar2 = iVar3 << 1;
    }
    *(uint *)(param_3 + 0x9c14) = uVar2;
    lVar4 = *(long *)(param_3 + 0x9c08);
    _realloc(lVar4,-(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                   (ulong)(uVar2 << 1) << 2);
    *(long *)(param_3 + 0x9c08) = lVar4;
    if (lVar4 == 0) {
      return;
    }
    iVar5 = *(int *)(param_3 + 0x9c10);
  }
  puVar1 = (undefined4 *)(lVar4 + (long)(iVar5 << 1) * 4);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(int *)(param_3 + 0x9c10) = iVar5 + 1;
  return;
}



/* Entry: 1096f0534; end: 1096f07f3;  */

void FUN_1096f0534(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  float *pfVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double *pdVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double adStack_28 [2];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar6 = param_2 + 6;
  fVar12 = *param_2;
  if (*pfVar6 <= *param_2) {
    fVar12 = *pfVar6;
  }
  *param_1 = fVar12;
  fVar15 = param_2[1];
  if (param_2[7] <= param_2[1]) {
    fVar15 = param_2[7];
  }
  param_1[1] = fVar15;
  fVar17 = *param_2;
  if (*param_2 <= *pfVar6) {
    fVar17 = *pfVar6;
  }
  param_1[2] = fVar17;
  fVar3 = param_2[1];
  if (param_2[1] <= param_2[7]) {
    fVar3 = param_2[7];
  }
  param_1[3] = fVar3;
  pfVar7 = param_2 + 2;
  fVar13 = *pfVar7;
  pfVar1 = param_2 + 4;
  bVar4 = false;
  bVar5 = true;
  if (fVar12 <= fVar13) {
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar13) && !NAN(fVar17)) {
      bVar4 = fVar13 == fVar17;
      bVar5 = fVar17 <= fVar13;
    }
  }
  if (!bVar5 || bVar4) {
    fVar13 = param_2[3];
    bVar4 = false;
    bVar5 = true;
    if (fVar15 <= fVar13) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar13) && !NAN(fVar3)) {
        bVar4 = fVar13 == fVar3;
        bVar5 = fVar3 <= fVar13;
      }
    }
    if (!bVar5 || bVar4) {
      fVar13 = *pfVar1;
      bVar4 = false;
      bVar5 = true;
      if (fVar12 <= fVar13) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar13) && !NAN(fVar17)) {
          bVar4 = fVar13 == fVar17;
          bVar5 = fVar17 <= fVar13;
        }
      }
      if (!bVar5 || bVar4) {
        fVar12 = param_2[5];
        bVar4 = false;
        bVar5 = true;
        if (fVar15 <= fVar12) {
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar12) && !NAN(fVar3)) {
            bVar4 = fVar12 == fVar3;
            bVar5 = fVar3 <= fVar12;
          }
        }
        if (!bVar5 || bVar4) goto LAB_1096f07cc;
      }
    }
  }
  lVar8 = 0;
  bVar4 = true;
  do {
    bVar5 = bVar4;
    dVar18 = (double)param_2[lVar8];
    dVar19 = (double)pfVar7[lVar8];
    dVar16 = dVar19 * 9.0 + dVar18 * -3.0 + (double)pfVar1[lVar8] * -9.0 +
             (double)pfVar6[lVar8] * 3.0;
    dVar14 = dVar19 * -12.0 + dVar18 * 6.0 + (double)pfVar1[lVar8] * 6.0;
    dVar18 = dVar18 * -3.0 + dVar19 * 3.0;
    if (1e-12 <= ABS(dVar16)) {
      dVar18 = dVar18 * -4.0 * dVar16 + dVar14 * dVar14;
      if (1e-12 < dVar18) {
        dVar18 = SQRT(dVar18);
        dVar16 = dVar16 + dVar16;
        dVar19 = (dVar18 - dVar14) / dVar16;
        if ((dVar19 <= 1e-12) || (0.999999999999 <= dVar19)) {
          dVar16 = (-dVar14 - dVar18) / dVar16;
          if ((dVar16 <= 1e-12) || (0.999999999999 <= dVar16)) goto LAB_1096f07c0;
          lVar10 = 0;
        }
        else {
          adStack_28[0] = dVar19;
          dVar16 = (-dVar14 - dVar18) / dVar16;
          if (dVar16 <= 1e-12) goto LAB_1096f06a4;
          lVar10 = 1;
          lVar9 = 1;
          if (0.999999999999 <= dVar16) goto LAB_1096f0730;
        }
        lVar9 = lVar10 + 1;
        adStack_28[lVar10] = dVar16;
        goto LAB_1096f0730;
      }
    }
    else if (((1e-12 < ABS(dVar14)) && (dVar14 = -dVar18 / dVar14, 1e-12 < dVar14)) &&
            (dVar14 < 0.999999999999)) {
      adStack_28[0] = dVar14;
LAB_1096f06a4:
      lVar9 = 1;
LAB_1096f0730:
      pfVar2 = param_1 + lVar8;
      fVar12 = *pfVar2;
      fVar15 = pfVar2[2];
      pdVar11 = adStack_28;
      do {
        dVar14 = *pdVar11;
        dVar16 = 1.0 - dVar14;
        fVar17 = (float)(dVar14 * dVar16 * dVar16 * 3.0 * (double)pfVar7[lVar8] +
                         (double)param_2[lVar8] * dVar16 * dVar16 * dVar16 +
                         (double)pfVar1[lVar8] * dVar14 * dVar14 * dVar16 * 3.0 +
                        (double)pfVar6[lVar8] * dVar14 * dVar14 * dVar14);
        if (fVar17 <= fVar12) {
          fVar12 = fVar17;
        }
        *pfVar2 = fVar12;
        if (fVar15 <= fVar17) {
          fVar15 = fVar17;
        }
        pfVar2[2] = fVar15;
        lVar9 = lVar9 + -1;
        pdVar11 = pdVar11 + 1;
      } while (lVar9 != 0);
    }
LAB_1096f07c0:
    lVar8 = 1;
    bVar4 = false;
  } while (bVar5);
LAB_1096f07cc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  fVar12 = -(param_2[2] * param_2[1]) + param_2[3] * *param_2;
  if (1e-06 <= ABS(fVar12)) {
    fVar12 = 1.0 / fVar12;
    *param_1 = fVar12 * param_2[3];
    param_1[2] = fVar12 * -param_2[2];
    param_1[4] = fVar12 * (-(param_2[3] * param_2[4]) + param_2[5] * param_2[2]);
    param_1[1] = fVar12 * -param_2[1];
    param_1[3] = fVar12 * *param_2;
    fVar12 = fVar12 * (-(*param_2 * param_2[5]) + param_2[4] * param_2[1]);
  }
  else {
    param_2[2] = 0.0;
    param_2[3] = 1.0;
    param_2[0] = 1.0;
    param_2[1] = 0.0;
    param_2[4] = 0.0;
    fVar12 = 0.0;
    param_1 = param_2;
  }
  param_1[5] = fVar12;
  return;
}



/* Entry: 1096f07f4; end: 1096f08f7;  */

void FUN_1096f07f4(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = -(param_2[2] * param_2[1]) + param_2[3] * *param_2;
  if (1e-06 <= ABS(fVar1)) {
    fVar1 = 1.0 / fVar1;
    *param_1 = fVar1 * param_2[3];
    param_1[2] = fVar1 * -param_2[2];
    param_1[4] = fVar1 * (-(param_2[3] * param_2[4]) + param_2[5] * param_2[2]);
    param_1[1] = fVar1 * -param_2[1];
    param_1[3] = fVar1 * *param_2;
    fVar1 = fVar1 * (-(*param_2 * param_2[5]) + param_2[4] * param_2[1]);
  }
  else {
    param_2[2] = 0.0;
    param_2[3] = 1.0;
    param_2[0] = 1.0;
    param_2[1] = 0.0;
    param_2[4] = 0.0;
    fVar1 = 0.0;
    param_1 = param_2;
  }
  param_1[5] = fVar1;
  return;
}



/* Entry: 1096f08f8; end: 1096f0a97;  */

float * FUN_1096f08f8(float *param_1,long *param_2,ulong *param_3,undefined1 *param_4)

{
  bool bVar1;
  long lVar2;
  float *pfVar3;
  ulong *puVar4;
  float *pfVar5;
  long *plVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  long lStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  long lStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar3 = param_1;
  puVar4 = param_3;
  if (param_2 != (long *)0x0) {
    bVar1 = true;
    plVar6 = param_2;
    do {
      pfVar8 = (float *)*plVar6;
      lVar11 = plVar6[1];
      lStack_98 = CONCAT44((float)(param_3[2] >> 0x20) +
                           (float)(param_3[1] >> 0x20) * pfVar8[1] +
                           (float)(*param_3 >> 0x20) * *pfVar8,
                           (float)param_3[2] +
                           (float)param_3[1] * pfVar8[1] + (float)*param_3 * *pfVar8);
      if (1 < (int)lVar11) {
        uVar10 = 0;
        bVar1 = !bVar1;
        pfVar5 = pfVar8 + 7;
        uVar12 = 4;
        lVar13 = 0x200000000;
        do {
          uVar18 = *(undefined8 *)((long)pfVar8 + (lVar13 >> 0x1e));
          fVar20 = (float)*param_3;
          fVar21 = (float)(*param_3 >> 0x20);
          fVar23 = (float)param_3[1];
          fVar15 = (float)(param_3[1] >> 0x20);
          uVar22 = *(undefined8 *)
                    ((long)pfVar8 + (-(uVar12 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2));
          fVar19 = (float)((ulong)uVar18 >> 0x20);
          fVar17 = (float)((ulong)uVar22 >> 0x20);
          fStack_88 = (float)param_3[2];
          fStack_84 = (float)(param_3[2] >> 0x20);
          lVar7 = CONCAT44(fStack_84 + fVar15 * *pfVar5 + fVar21 * pfVar5[-1],
                           fStack_88 + fVar23 * *pfVar5 + fVar20 * pfVar5[-1]);
          fVar14 = (float)uVar18;
          fVar16 = (float)uVar22;
          fStack_90 = fStack_88 + fVar23 * fVar19 + fVar20 * fVar14;
          fStack_8c = fStack_84 + fVar15 * fVar19 + fVar21 * fVar14;
          fStack_88 = fStack_88 + fVar23 * fVar17 + fVar20 * fVar16;
          fStack_84 = fStack_84 + fVar15 * fVar17 + fVar21 * fVar16;
          param_2 = &lStack_98;
          pfVar3 = &fStack_b0;
          lStack_80 = lVar7;
          FUN_1096f0534(&fStack_b0,param_2);
          fVar14 = fStack_b0;
          fVar19 = fStack_ac;
          fVar20 = fStack_a8;
          fVar21 = fStack_a4;
          if (bVar1) {
            fVar14 = *param_1;
            fVar19 = param_1[1];
            fVar20 = param_1[2];
            fVar21 = param_1[3];
            fVar14 = (float)((uint)fVar14 ^
                            ((uint)fVar14 ^ (uint)fStack_b0) & ~-(uint)(fVar14 < fStack_b0));
            fVar19 = (float)((uint)fVar19 ^
                            ((uint)fVar19 ^ (uint)fStack_ac) & ~-(uint)(fVar19 < fStack_ac));
            fVar20 = (float)((uint)fVar20 ^
                            ((uint)fVar20 ^ (uint)fStack_a8) & ~-(uint)(fStack_a8 < fVar20));
            fVar21 = (float)((uint)fVar21 ^
                            ((uint)fVar21 ^ (uint)fStack_a4) & ~-(uint)(fStack_a4 < fVar21));
          }
          uVar10 = uVar10 + 3;
          pfVar5 = pfVar5 + 6;
          param_1[2] = fVar20;
          param_1[3] = fVar21;
          *param_1 = fVar14;
          param_1[1] = fVar19;
          uVar12 = (ulong)((int)uVar12 + 6);
          lVar13 = lVar13 + 0x600000000;
          bVar1 = true;
          lStack_98 = lVar7;
        } while (uVar10 < (int)lVar11 - 1);
        bVar1 = false;
      }
      plVar6 = (long *)plVar6[4];
    } while (plVar6 != (long *)0x0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return pfVar3;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)(pfVar3 + 0x270a);
  if (lVar11 != 0) {
    fVar14 = pfVar3[0x2700];
    lVar13 = lVar11;
    do {
      lVar7 = lVar13;
      _strcmp(lVar13,param_2);
      if ((int)lVar7 == 0) {
        lVar7 = *(long *)(lVar13 + 0xd0);
        lVar2 = lVar13;
        while (lVar9 = lVar11, lVar7 == 0) {
          while (lVar7 = lVar9, _strcmp(lVar9,lVar2 + 0x40), (int)lVar7 != 0) {
            plVar6 = (long *)(lVar9 + 0xd8);
            lVar9 = *plVar6;
            if (*plVar6 == 0) {
              return (float *)0x0;
            }
          }
          lVar2 = lVar9;
          lVar7 = *(long *)(lVar9 + 0xd0);
        }
        fVar19 = *(float *)(lVar2 + 200);
        pfVar8 = (float *)((-(ulong)((uint)fVar19 >> 0x1f) & 0xfffffff800000000 |
                           (ulong)(uint)fVar19 << 3) + 0x28);
        _malloc();
        if (pfVar8 == (float *)0x0) {
          return (float *)0x0;
        }
        if (*(char *)(lVar13 + 0xad) == '\x01') {
          pfVar5 = (float *)((long)puVar4 + 4);
          uVar10 = *puVar4;
          fVar20 = (float)puVar4[1] - (float)uVar10;
          fVar21 = (float)(puVar4[1] >> 0x20) - (float)(uVar10 >> 0x20);
        }
        else {
          uVar10 = (ulong)(uint)pfVar3[0x270e];
          pfVar5 = pfVar3 + 9999;
          fVar20 = (float)*(undefined8 *)(pfVar3 + 10000);
          fVar21 = (float)((ulong)*(undefined8 *)(pfVar3 + 10000) >> 0x20);
        }
        fVar23 = *pfVar5;
        if (*(char *)(lVar13 + 0x80) == '\x02') {
          fVar15 = (float)FUN_1096ef8f8(pfVar3,*(undefined8 *)(lVar13 + 0x84));
          fVar16 = (float)FUN_1096ef8f8(fVar23,fVar21,pfVar3,*(undefined8 *)(lVar13 + 0x8c));
          fVar20 = (float)FUN_1096ef8f8(uVar10,fVar20,pfVar3,*(undefined8 *)(lVar13 + 0x94));
          fVar21 = (float)FUN_1096ef8f8(fVar23,fVar21,pfVar3,*(undefined8 *)(lVar13 + 0x9c));
          fVar20 = fVar20 - fVar15;
          fVar21 = fVar21 - fVar16;
          fVar24 = -fVar20;
        }
        else {
          fVar15 = (float)FUN_1096ef8f8(uVar10,fVar20,pfVar3,*(undefined8 *)(lVar13 + 0x84));
          fVar16 = (float)FUN_1096ef8f8(fVar23,fVar21,pfVar3,*(undefined8 *)(lVar13 + 0x8c));
          fVar17 = (float)FUN_1096ef8f8(uVar10,fVar20,pfVar3,*(undefined8 *)(lVar13 + 0x9c));
          fVar23 = (float)FUN_1096ef8f8(fVar23,fVar21,pfVar3,*(undefined8 *)(lVar13 + 0xa4));
          fVar24 = 0.0;
          fVar21 = (float)FUN_1096ef8f8(0,SQRT(fVar21 * fVar21 + fVar20 * fVar20) / 1.4142135,pfVar3
                                        ,*(undefined8 *)(lVar13 + 0x94));
          pfVar8[7] = fVar17 / fVar21;
          pfVar8[8] = fVar23 / fVar21;
          fVar20 = 0.0;
        }
        *pfVar8 = fVar21;
        pfVar8[1] = fVar24;
        pfVar8[2] = fVar20;
        pfVar8[3] = fVar21;
        pfVar8[4] = fVar15;
        pfVar8[5] = fVar16;
        func_0x0001096ef9e0(pfVar8,lVar13 + 0xb0);
        func_0x0001096ef9e0(pfVar8,pfVar3 + (long)(int)fVar14 * 0x4e + 0x10);
        *(undefined1 *)(pfVar8 + 6) = *(undefined1 *)(lVar13 + 0xac);
        _memcpy(pfVar8 + 10,lVar7,(long)(int)fVar19 << 3);
        pfVar8[9] = fVar19;
        *param_4 = *(undefined1 *)(lVar13 + 0x80);
        return pfVar8;
      }
      lVar13 = *(long *)(lVar13 + 0xd8);
    } while (lVar13 != 0);
  }
  return (float *)0x0;
}



/* Entry: 1096f0a98; end: 1096f0d27;  */

float * FUN_1096f0a98(long param_1,undefined8 param_2,ulong *param_3,undefined1 *param_4)

{
  long *plVar1;
  float fVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  lVar10 = *(long *)(param_1 + 0x9c28);
  if (lVar10 != 0) {
    iVar3 = *(int *)(param_1 + 0x9c00);
    lVar7 = lVar10;
    do {
      lVar8 = lVar7;
      _strcmp(lVar7,param_2);
      if ((int)lVar8 == 0) {
        lVar8 = *(long *)(lVar7 + 0xd0);
        lVar4 = lVar7;
        while (lVar9 = lVar10, lVar8 == 0) {
          while (lVar8 = lVar9, _strcmp(lVar9,lVar4 + 0x40), (int)lVar8 != 0) {
            plVar1 = (long *)(lVar9 + 0xd8);
            lVar9 = *plVar1;
            if (*plVar1 == 0) {
              return (float *)0x0;
            }
          }
          lVar4 = lVar9;
          lVar8 = *(long *)(lVar9 + 0xd0);
        }
        fVar2 = *(float *)(lVar4 + 200);
        pfVar5 = (float *)((-(ulong)((uint)fVar2 >> 0x1f) & 0xfffffff800000000 |
                           (ulong)(uint)fVar2 << 3) + 0x28);
        _malloc();
        if (pfVar5 == (float *)0x0) {
          return (float *)0x0;
        }
        if (*(char *)(lVar7 + 0xad) == '\x01') {
          pfVar6 = (float *)((long)param_3 + 4);
          uVar12 = *param_3;
          uVar15 = CONCAT44((float)(param_3[1] >> 0x20) - (float)(uVar12 >> 0x20),
                            (float)param_3[1] - (float)uVar12);
        }
        else {
          uVar12 = (ulong)*(uint *)(param_1 + 0x9c38);
          pfVar6 = (float *)(param_1 + 0x9c3c);
          uVar15 = *(ulong *)(param_1 + 40000);
        }
        fVar17 = *pfVar6;
        fVar18 = fVar17;
        if (*(char *)(lVar7 + 0x80) == '\x02') {
          uVar13 = uVar12;
          FUN_1096ef8f8(param_1,*(undefined8 *)(lVar7 + 0x84));
          FUN_1096ef8f8(fVar17,uVar15 >> 0x20,param_1,*(undefined8 *)(lVar7 + 0x8c));
          FUN_1096ef8f8(uVar12,uVar15,param_1,*(undefined8 *)(lVar7 + 0x94));
          FUN_1096ef8f8(fVar17,uVar15 >> 0x20,param_1,*(undefined8 *)(lVar7 + 0x9c));
          fVar16 = (float)uVar13;
          fVar14 = (float)uVar12 - fVar16;
          fVar11 = fVar17 - fVar18;
          fVar19 = -fVar14;
        }
        else {
          fVar14 = (float)(uVar15 >> 0x20);
          uVar13 = uVar12;
          FUN_1096ef8f8(uVar12,uVar15,param_1,*(undefined8 *)(lVar7 + 0x84));
          fVar16 = (float)uVar13;
          FUN_1096ef8f8(fVar17,fVar14,param_1,*(undefined8 *)(lVar7 + 0x8c));
          FUN_1096ef8f8(uVar12,uVar15,param_1,*(undefined8 *)(lVar7 + 0x9c));
          FUN_1096ef8f8(fVar17,fVar14,param_1,*(undefined8 *)(lVar7 + 0xa4));
          fVar19 = 0.0;
          fVar11 = 0.0;
          FUN_1096ef8f8(0,SQRT(fVar14 * fVar14 + (float)uVar15 * (float)uVar15) / 1.4142135,param_1,
                        *(undefined8 *)(lVar7 + 0x94));
          pfVar5[7] = (float)uVar12 / fVar11;
          pfVar5[8] = fVar17 / fVar11;
          fVar14 = 0.0;
        }
        *pfVar5 = fVar11;
        pfVar5[1] = fVar19;
        pfVar5[2] = fVar14;
        pfVar5[3] = fVar11;
        pfVar5[4] = fVar16;
        pfVar5[5] = fVar18;
        func_0x0001096ef9e0(pfVar5,lVar7 + 0xb0);
        func_0x0001096ef9e0(pfVar5,param_1 + (long)iVar3 * 0x138 + 0x40);
        *(undefined1 *)(pfVar5 + 6) = *(undefined1 *)(lVar7 + 0xac);
        _memcpy(pfVar5 + 10,lVar8,(long)(int)fVar2 << 3);
        pfVar5[9] = fVar2;
        *param_4 = *(undefined1 *)(lVar7 + 0x80);
        return pfVar5;
      }
      lVar7 = *(long *)(lVar7 + 0xd8);
    } while (lVar7 != 0);
  }
  return (float *)0x0;
}



/* Entry: 1096f0d28; end: 1096f0e97;  */

void FUN_1096f0d28(undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  long lStack_38;
  
  bVar4 = (byte)&uStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = 0x3f800000;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0x3f800000;
  uStack_40 = CONCAT44(param_2,param_1);
  func_0x0001096ef9e0(param_5,&uStack_50);
  fVar6 = 0.0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = param_3;
  uStack_44 = param_4;
  func_0x0001096ef9e0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(uint *)(param_5 + 0x28);
  if (((int)uVar5 < 1) ||
     (lVar3 = *(long *)(param_5 + 0x20) + (ulong)uVar5 * 0x20,
     fVar7 = fVar6 - *(float *)(lVar3 + -0x20), fVar8 = param_2 - *(float *)(lVar3 + -0x1c),
     *(float *)(param_5 + 0xc) * *(float *)(param_5 + 0xc) <= fVar8 * fVar8 + fVar7 * fVar7)) {
    iVar2 = *(int *)(param_5 + 0x2c);
    if ((int)uVar5 < iVar2) {
      lVar3 = *(long *)(param_5 + 0x20);
    }
    else {
      uVar5 = iVar2 << 1;
      if (iVar2 < 1) {
        uVar5 = 0x40;
      }
      *(uint *)(param_5 + 0x2c) = uVar5;
      lVar3 = *(long *)(param_5 + 0x20);
      _realloc(lVar3,(ulong)uVar5 << 5);
      *(long *)(param_5 + 0x20) = lVar3;
      if (lVar3 == 0) {
        return;
      }
      uVar5 = *(uint *)(param_5 + 0x28);
    }
    pfVar1 = (float *)(lVar3 + (long)(int)uVar5 * 0x20);
    *pfVar1 = fVar6;
    pfVar1[1] = param_2;
    *(byte *)(pfVar1 + 7) = bVar4;
    *(uint *)(param_5 + 0x28) = uVar5 + 1;
  }
  else {
    *(byte *)(lVar3 + -4) = *(byte *)(lVar3 + -4) | bVar4;
  }
  return;
}



/* Entry: 1096f0e98; end: 1096f1023;  */

void FUN_1096f0e98(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,long param_9,int param_10,byte param_11)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (param_10 < 0xb) {
    param_10 = param_10 + 1;
    do {
      fVar5 = param_7 - param_1;
      fVar6 = param_8 - param_2;
      fVar7 = -((param_4 - param_8) * fVar5);
      fVar8 = fVar7 + fVar6 * (param_3 - param_7);
      fVar7 = -((param_3 - param_7) * fVar6) - fVar7;
      if (0.0 <= fVar8) {
        fVar7 = fVar8;
      }
      fVar8 = -((param_6 - param_8) * fVar5);
      fVar9 = fVar8 + fVar6 * (param_5 - param_7);
      fVar8 = -((param_5 - param_7) * fVar6) - fVar8;
      if (0.0 <= fVar9) {
        fVar8 = fVar9;
      }
      if ((fVar7 + fVar8) * (fVar7 + fVar8) <
          *(float *)(param_9 + 8) * (fVar6 * fVar6 + fVar5 * fVar5)) {
        uVar4 = *(uint *)(param_9 + 0x28);
        if (((int)uVar4 < 1) ||
           (lVar3 = *(long *)(param_9 + 0x20) + (ulong)uVar4 * 0x20,
           fVar7 = param_7 - *(float *)(lVar3 + -0x20), fVar5 = param_8 - *(float *)(lVar3 + -0x1c),
           *(float *)(param_9 + 0xc) * *(float *)(param_9 + 0xc) <= fVar5 * fVar5 + fVar7 * fVar7))
        {
          iVar2 = *(int *)(param_9 + 0x2c);
          if ((int)uVar4 < iVar2) {
            lVar3 = *(long *)(param_9 + 0x20);
          }
          else {
            uVar4 = iVar2 << 1;
            if (iVar2 < 1) {
              uVar4 = 0x40;
            }
            *(uint *)(param_9 + 0x2c) = uVar4;
            lVar3 = *(long *)(param_9 + 0x20);
            _realloc(lVar3,(ulong)uVar4 << 5);
            *(long *)(param_9 + 0x20) = lVar3;
            if (lVar3 == 0) {
              return;
            }
            uVar4 = *(uint *)(param_9 + 0x28);
          }
          pfVar1 = (float *)(lVar3 + (long)(int)uVar4 * 0x20);
          *pfVar1 = param_7;
          pfVar1[1] = param_8;
          *(byte *)(pfVar1 + 7) = param_11;
          *(uint *)(param_9 + 0x28) = uVar4 + 1;
        }
        else {
          *(byte *)(lVar3 + -4) = *(byte *)(lVar3 + -4) | param_11;
        }
        return;
      }
      param_2 = param_4 + param_2;
      fVar7 = (param_6 + param_4) * 0.5;
      param_1 = param_3 + param_1;
      fVar5 = (param_5 + param_3) * 0.5;
      param_6 = (param_8 + param_6) * 0.5;
      param_5 = (param_7 + param_5) * 0.5;
      param_3 = (param_5 + fVar5) * 0.5;
      param_4 = (param_6 + fVar7) * 0.5;
      param_1 = (param_3 + (fVar5 + param_1 * 0.5) * 0.5) * 0.5;
      param_2 = (param_4 + (fVar7 + param_2 * 0.5) * 0.5) * 0.5;
      FUN_1096f0e98(param_9,param_10,0);
      param_10 = param_10 + 1;
    } while (param_10 != 0xc);
  }
  return;
}



/* Entry: 1096f1024; end: 1096f10e3;  */

void FUN_1096f1024(undefined4 param_1,float param_2,undefined4 param_3,float param_4,long param_5)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  
  if (param_2 == param_4) {
    return;
  }
  iVar7 = *(int *)(param_5 + 0x18);
  iVar2 = *(int *)(param_5 + 0x1c);
  if (iVar7 < iVar2) {
    lVar6 = *(long *)(param_5 + 0x10);
  }
  else {
    uVar3 = iVar2 << 1;
    if (iVar2 < 1) {
      uVar3 = 0x40;
    }
    *(uint *)(param_5 + 0x1c) = uVar3;
    lVar6 = *(long *)(param_5 + 0x10);
    _realloc(lVar6,(ulong)uVar3 << 5);
    *(long *)(param_5 + 0x10) = lVar6;
    if (lVar6 == 0) {
      return;
    }
    iVar7 = *(int *)(param_5 + 0x18);
  }
  puVar1 = (undefined4 *)(lVar6 + (long)iVar7 * 0x20);
  *(int *)(param_5 + 0x18) = iVar7 + 1;
  fVar9 = param_4;
  uVar4 = param_3;
  fVar5 = param_2;
  if (param_4 <= param_2) {
    fVar9 = param_2;
    uVar4 = param_1;
    fVar5 = param_4;
    param_1 = param_3;
  }
  *puVar1 = param_1;
  puVar1[1] = fVar5;
  uVar8 = 0xffffffff;
  if (param_4 > param_2) {
    uVar8 = 1;
  }
  puVar1[2] = uVar4;
  puVar1[3] = fVar9;
  puVar1[4] = uVar8;
  return;
}



/* Entry: 1096f10e4; end: 1096f11bb;  */

void FUN_1096f10e4(long param_1,uint param_2,uint param_3,uint param_4,uint *param_5,uint *param_6)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = (int)param_3 >> 10;
  uVar1 = (int)param_4 >> 10;
  if ((int)uVar3 < (int)*param_5) {
    *param_5 = uVar3;
  }
  if ((int)*param_6 < (int)uVar1) {
    *param_6 = uVar1;
  }
  if (((int)uVar3 < (int)param_2) && (-1 < (int)uVar1)) {
    if (uVar3 == uVar1) {
      *(char *)(param_1 + (ulong)uVar3) =
           *(char *)(param_1 + (ulong)uVar3) + (char)((param_4 - param_3) * 0x33 >> 10);
      return;
    }
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
    else {
      *(char *)(param_1 + (ulong)uVar3) =
           *(char *)(param_1 + (ulong)uVar3) + (char)((0x400 - (param_3 & 0x3ff)) * 0x33 >> 10);
      uVar3 = uVar3 + 1;
    }
    if ((int)uVar1 < (int)param_2) {
      *(char *)(param_1 + (ulong)uVar1) =
           *(char *)(param_1 + (ulong)uVar1) + (char)((param_4 & 0x3ff) * 0x33 >> 10);
      param_2 = uVar1;
    }
    if ((int)uVar3 < (int)param_2) {
      uVar2 = (ulong)uVar3;
      do {
        *(char *)(param_1 + uVar2) = *(char *)(param_1 + uVar2) + '3';
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_2);
    }
  }
  return;
}



/* Entry: 1096f11bc; end: 1096f1237;  */

void FUN_1096f11bc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar5 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar5 < iVar2) {
    lVar4 = *(long *)(param_1 + 0x20);
  }
  else {
    uVar3 = iVar2 << 1;
    if (iVar2 < 1) {
      uVar3 = 0x40;
    }
    *(uint *)(param_1 + 0x2c) = uVar3;
    lVar4 = *(long *)(param_1 + 0x20);
    _realloc(lVar4,(ulong)uVar3 << 5);
    *(long *)(param_1 + 0x20) = lVar4;
    if (lVar4 == 0) {
      return;
    }
    iVar5 = *(int *)(param_1 + 0x28);
  }
  puVar1 = (undefined8 *)(lVar4 + (long)iVar5 * 0x20);
  uVar6 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  puVar1[1] = param_2[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar8;
  puVar1[2] = uVar7;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}



/* Entry: 1096f1238; end: 1096f1363;  */

void FUN_1096f1238(float param_1,undefined8 *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar8;
  
  if (0 < param_3) {
    puVar5 = param_2 + (long)param_3 * 4 + -4;
    puVar6 = param_2;
    iVar3 = param_3;
    do {
      fVar7 = (float)*puVar6 - (float)*puVar5;
      fVar9 = (float)((ulong)*puVar6 >> 0x20) - (float)((ulong)*puVar5 >> 0x20);
      uVar8 = CONCAT44(fVar9,fVar7);
      fVar10 = SQRT(fVar9 * fVar9 + fVar7 * fVar7);
      if (1e-06 < fVar10) {
        uVar8 = CONCAT44(fVar9 * (1.0 / fVar10),fVar7 * (1.0 / fVar10));
      }
      puVar5[1] = uVar8;
      *(float *)(puVar5 + 2) = fVar10;
      iVar3 = iVar3 + -1;
      puVar5 = puVar6;
      puVar6 = puVar6 + 4;
    } while (iVar3 != 0);
    pbVar4 = (byte *)((long)param_2 + 0x1c);
    fVar7 = *(float *)(param_2 + (long)param_3 * 4 + -3);
    fVar9 = *(float *)((long)param_2 + (long)param_3 * 0x20 + -0x14);
    do {
      fVar11 = *(float *)(pbVar4 + -0x14);
      fVar10 = *(float *)(pbVar4 + -0x10);
      fVar13 = (fVar9 + fVar10) * 0.5;
      fVar14 = (-fVar11 - fVar7) * 0.5;
      *(float *)(pbVar4 + -8) = fVar13;
      *(float *)(pbVar4 + -4) = fVar14;
      fVar12 = fVar14 * fVar14 + fVar13 * fVar13;
      if (1e-06 < fVar12) {
        fVar15 = 600.0;
        if (1.0 / fVar12 <= 600.0) {
          fVar15 = 1.0 / fVar12;
        }
        *(float *)(pbVar4 + -8) = fVar13 * fVar15;
        *(float *)(pbVar4 + -4) = fVar14 * fVar15;
      }
      bVar2 = *pbVar4;
      bVar1 = bVar2 & 1 | 4;
      if (-(fVar7 * fVar10) + fVar9 * fVar11 <= 0.0) {
        bVar1 = bVar2 & 1;
      }
      *pbVar4 = bVar1;
      if (((bVar2 & 1) != 0) && ((param_4 - 1U < 2 || (param_1 * param_1 * fVar12 < 1.0)))) {
        *pbVar4 = bVar1 | 2;
      }
      pbVar4 = pbVar4 + 0x20;
      param_3 = param_3 + -1;
      fVar7 = fVar11;
      fVar9 = fVar10;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 1096f1364; end: 1096f1abf;  */

void FUN_1096f1364(ulong param_1,long param_2,float *param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fStack_10c;
  float fStack_f0;
  float fStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  float fStack_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  fVar21 = (float)param_1 * 0.5;
  fVar11 = fVar21 / (fVar21 + *(float *)(param_2 + 8));
  _acosf();
  uVar5 = (uint)(3.1415927 / (fVar11 + fVar11));
  if ((int)uVar5 < 3) {
    uVar5 = 2;
  }
  uStack_c8 = 0;
  fStack_d0 = 0.0;
  fStack_cc = 0.0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  fStack_f0 = 0.0;
  fStack_ec = 0.0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  fVar11 = *param_3;
  if (param_5 != 0) {
    fStack_10c = param_3[(long)param_4 * 8 + -8];
    fVar11 = fVar11 - fStack_10c;
    fVar26 = param_3[1] - param_3[(long)param_4 * 8 + -7];
    fVar14 = SQRT(fVar26 * fVar26 + fVar11 * fVar11);
    if (1e-06 < fVar14) {
      fVar11 = fVar11 * (1.0 / fVar14);
      fVar26 = fVar26 * (1.0 / fVar14);
    }
    iVar4 = 0;
    fStack_10c = fStack_10c + fVar14 * fVar11 * 0.5;
    fVar14 = param_3[(long)param_4 * 8 + -7] + fVar14 * fVar26 * 0.5;
    fVar16 = fStack_10c - fVar21 * fVar26;
    fVar12 = fVar14 + fVar21 * fVar11;
    fStack_10c = fStack_10c + fVar21 * fVar26;
    fVar14 = fVar14 - fVar21 * fVar11;
    fStack_f0 = 0.0;
    pfVar8 = param_3 + (long)param_4 * 8 + -8;
    pfVar10 = param_3;
    fVar13 = fVar16;
    fVar11 = fStack_10c;
    fStack_d0 = fVar16;
    fStack_cc = fVar12;
    fStack_ec = fVar14;
    goto LAB_1096f157c;
  }
  pfVar10 = param_3 + 8;
  param_4 = param_4 + -1;
  fVar12 = *pfVar10 - fVar11;
  fVar14 = param_3[1];
  fVar26 = param_3[9] - fVar14;
  fVar13 = SQRT(fVar26 * fVar26 + fVar12 * fVar12);
  if (1e-06 < fVar13) {
    fVar13 = 1.0 / fVar13;
    fVar12 = fVar12 * fVar13;
    fVar26 = fVar26 * fVar13;
  }
  fVar13 = 0.0;
  if (param_7 == 2) {
    fVar11 = fVar11 - fVar21 * fVar12;
    fVar14 = fVar14 - fVar21 * fVar26;
LAB_1096f152c:
    fVar16 = fVar11 - fVar21 * fVar26;
    fVar15 = fVar14 + fVar21 * fVar12;
    fVar11 = fVar11 + fVar21 * fVar26;
    fVar14 = fVar14 - fVar21 * fVar12;
    FUN_1096f1024(fVar16,fVar15,fVar11,fVar14,param_2);
    fStack_cc = fVar15;
    fStack_ec = fVar14;
  }
  else if (param_7 == 1) {
    FUN_1096f1ac0(param_2,&fStack_d0,&fStack_f0,uVar5,0);
    fVar11 = fStack_f0;
    fVar16 = fStack_d0;
  }
  else {
    if (param_7 == 0) goto LAB_1096f152c;
    fVar11 = 0.0;
    fVar16 = 0.0;
  }
  iVar4 = 1;
  fVar12 = 0.0;
  fStack_10c = 0.0;
  fVar14 = 0.0;
  pfVar8 = param_3;
LAB_1096f157c:
  if (iVar4 < param_4) {
    pfVar7 = pfVar8;
    fVar26 = fVar11;
    fVar15 = fStack_cc;
    fVar19 = fStack_ec;
    do {
      pfVar8 = pfVar10;
      bVar2 = *(byte *)(pfVar8 + 7);
      if ((bVar2 & 1) == 0) {
        fVar18 = *pfVar8 - fVar21 * pfVar8[5];
        fVar20 = pfVar8[1] - fVar21 * pfVar8[6];
        fVar11 = *pfVar8 + fVar21 * pfVar8[5];
        fVar24 = pfVar8[1] + fVar21 * pfVar8[6];
        FUN_1096f1024(fVar18,fVar20,fVar16,fVar15,param_2);
        FUN_1096f1024(fVar26,fVar19,fVar11,fVar24,param_2);
        fVar16 = fVar18;
        fVar15 = fVar20;
        fVar19 = fVar24;
      }
      else if (param_6 == 2) {
LAB_1096f17f0:
        fVar11 = *pfVar8;
        fVar18 = pfVar8[1];
        fVar24 = fVar11 - fVar21 * pfVar7[3];
        fVar17 = fVar18 + fVar21 * pfVar7[2];
        fVar22 = fVar11 + fVar21 * pfVar7[3];
        fVar25 = fVar18 - fVar21 * pfVar7[2];
        fVar23 = fVar11 - fVar21 * pfVar8[3];
        fVar20 = fVar18 + fVar21 * pfVar8[2];
        fVar11 = fVar11 + fVar21 * pfVar8[3];
        fVar18 = fVar18 - fVar21 * pfVar8[2];
        FUN_1096f1024(fVar24,fVar17,fVar16,fVar15,param_2);
        FUN_1096f1024(fVar23,fVar20,fVar24,fVar17,param_2);
        FUN_1096f1024(fVar26,fVar19,fVar22,fVar25,param_2);
        FUN_1096f1024(fVar22,fVar25,fVar11,fVar18,param_2);
        fVar16 = fVar23;
        fVar15 = fVar20;
        fVar19 = fVar18;
      }
      else if (param_6 == 1) {
        fVar18 = -pfVar7[2];
        fVar11 = pfVar8[3];
        fVar20 = -pfVar8[2];
        _atan2f(fVar18,pfVar7[3]);
        _atan2f(fVar20,fVar11);
        uVar9 = 0;
        fVar20 = fVar20 - fVar18;
        fVar11 = fVar20 + 6.2831855;
        if (3.1415927 <= fVar20) {
          fVar11 = fVar20;
        }
        fVar20 = fVar11 + -6.2831855;
        if (fVar11 <= 3.1415927) {
          fVar20 = fVar11;
        }
        fVar11 = -fVar20;
        if (0.0 <= fVar20) {
          fVar11 = fVar20;
        }
        uVar6 = (uint)((fVar11 / 3.1415927) * (float)uVar5);
        if ((int)uVar6 < 3) {
          uVar6 = 2;
        }
        if ((int)uVar5 <= (int)uVar6) {
          uVar6 = uVar5;
        }
        do {
          fVar24 = fVar18 + fVar20 * ((float)uVar9 / (float)(uVar6 - 1));
          fVar11 = fVar18;
          ___sincosf_stret();
          fVar22 = *pfVar8 - fVar21 * fVar11;
          fVar17 = pfVar8[1] - fVar21 * fVar24;
          fVar11 = fVar21 * fVar11 + *pfVar8;
          fVar24 = fVar21 * fVar24 + pfVar8[1];
          FUN_1096f1024(fVar22,fVar17,fVar16,fVar15,param_2);
          FUN_1096f1024(fVar26,fVar19,fVar11,fVar24,param_2);
          uVar9 = uVar9 + 1;
          fVar16 = fVar22;
          fVar26 = fVar11;
          fVar15 = fVar17;
          fVar19 = fVar24;
        } while (uVar6 != uVar9);
      }
      else {
        if ((bVar2 >> 1 & 1) != 0) goto LAB_1096f17f0;
        fVar20 = pfVar7[2];
        fVar11 = pfVar7[3];
        fVar18 = pfVar8[2];
        fVar24 = pfVar8[3];
        if ((bVar2 >> 2 & 1) == 0) {
          fVar11 = *pfVar8 - fVar21 * fVar11;
          fVar20 = pfVar8[1] + fVar21 * fVar20;
          fVar24 = *pfVar8 - fVar21 * fVar24;
          fVar17 = pfVar8[1] + fVar21 * fVar18;
          FUN_1096f1024(fVar11,fVar20,fVar16,fVar15,param_2);
          FUN_1096f1024(fVar24,fVar17,fVar11,fVar20,param_2);
          fVar11 = *pfVar8 + fVar21 * pfVar8[5];
          fVar18 = pfVar8[1] + fVar21 * pfVar8[6];
          FUN_1096f1024(fVar26,fVar19,fVar11,fVar18,param_2);
          fVar16 = fVar24;
          fVar15 = fVar17;
          fVar19 = fVar18;
        }
        else {
          fVar22 = *pfVar8 - fVar21 * pfVar8[5];
          fVar17 = pfVar8[1] - fVar21 * pfVar8[6];
          FUN_1096f1024(fVar22,fVar17,fVar16,fVar15,param_2);
          fVar16 = *pfVar8 + fVar21 * fVar11;
          fVar15 = pfVar8[1] - fVar21 * fVar20;
          fVar11 = *pfVar8 + fVar21 * fVar24;
          fVar18 = pfVar8[1] - fVar21 * fVar18;
          FUN_1096f1024(fVar26,fVar19,fVar16,fVar15,param_2);
          FUN_1096f1024(fVar16,fVar15,fVar11,fVar18,param_2);
          fVar16 = fVar22;
          fVar15 = fVar17;
          fVar19 = fVar18;
        }
      }
      pfVar10 = pfVar8 + 8;
      iVar4 = iVar4 + 1;
      pfVar7 = pfVar8;
      fVar26 = fVar11;
    } while (iVar4 != param_4);
    param_1 = param_1 & 0xffffffff;
    fStack_cc = fVar15;
    fStack_ec = fVar19;
  }
  fStack_d0 = fVar16;
  fStack_f0 = fVar11;
  if (param_5 == 0) {
    fVar12 = *pfVar10;
    fVar26 = pfVar10[1];
    fVar14 = fVar12 - *pfVar8;
    fVar13 = fVar26 - pfVar8[1];
    fVar15 = SQRT(fVar13 * fVar13 + fVar14 * fVar14);
    if (1e-06 < fVar15) {
      fVar15 = 1.0 / fVar15;
      fVar14 = fVar14 * fVar15;
      fVar13 = fVar13 * fVar15;
    }
    if (param_7 == 2) {
      fVar12 = fVar12 + fVar21 * fVar14;
      fVar26 = fVar26 + fVar21 * fVar13;
    }
    else {
      if (param_7 == 1) {
        FUN_1096f1ac0(fVar12,fVar26,-fVar14,-fVar13,param_1,param_2,&fStack_f0,&fStack_d0,uVar5,1);
        return;
      }
      if (param_7 != 0) {
        return;
      }
    }
    fVar15 = fVar12 + fVar21 * fVar13;
    fVar19 = fVar26 - fVar21 * fVar14;
    fVar12 = fVar12 - fVar21 * fVar13;
    fVar26 = fVar26 + fVar21 * fVar14;
    FUN_1096f1024(fVar15,fVar19,fVar12,fVar26,param_2);
    FUN_1096f1024(fVar11,fStack_ec,fVar15,fVar19,param_2);
    fVar14 = fStack_cc;
  }
  else {
    FUN_1096f1024(fVar13,fVar12,fVar16,fStack_cc,param_2);
    fVar26 = fStack_ec;
    fVar16 = fStack_10c;
    fVar12 = fVar11;
  }
  if (fVar26 == fVar14) {
    return;
  }
  iVar4 = *(int *)(param_2 + 0x18);
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar4 < iVar1) {
    lVar3 = *(long *)(param_2 + 0x10);
  }
  else {
    uVar5 = iVar1 << 1;
    if (iVar1 < 1) {
      uVar5 = 0x40;
    }
    *(uint *)(param_2 + 0x1c) = uVar5;
    lVar3 = *(long *)(param_2 + 0x10);
    _realloc(lVar3,(ulong)uVar5 << 5);
    *(long *)(param_2 + 0x10) = lVar3;
    if (lVar3 == 0) {
      return;
    }
    iVar4 = *(int *)(param_2 + 0x18);
  }
  pfVar10 = (float *)(lVar3 + (long)iVar4 * 0x20);
  *(int *)(param_2 + 0x18) = iVar4 + 1;
  fVar13 = fVar14;
  fVar21 = fVar26;
  fVar11 = fVar16;
  if (fVar14 <= fVar26) {
    fVar13 = fVar26;
    fVar21 = fVar14;
    fVar11 = fVar12;
    fVar12 = fVar16;
  }
  *pfVar10 = fVar12;
  pfVar10[1] = fVar21;
  fVar21 = -NAN;
  if (fVar14 > fVar26) {
    fVar21 = 1.4013e-45;
  }
  pfVar10[2] = fVar11;
  pfVar10[3] = fVar13;
  pfVar10[4] = fVar21;
  return;
}



/* Entry: 1096f1ac0; end: 1096f1c23;  */

void FUN_1096f1ac0(float param_1,float param_2,float param_3,float param_4,float param_5,
                  undefined8 param_6,float *param_7,float *param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_a0;
  float fStack_9c;
  
  uVar2 = 0;
  uVar1 = param_9 - 1;
  fStack_a0 = 0.0;
  fStack_9c = 0.0;
  fVar12 = 0.0;
  fVar11 = 0.0;
  fVar7 = 0.0;
  fVar5 = 0.0;
  do {
    fVar4 = 3.1415927;
    fVar3 = ((float)uVar2 / (float)uVar1) * 3.1415927;
    ___sincosf_stret();
    fVar4 = param_5 * 0.5 * fVar4;
    fVar3 = param_5 * 0.5 * fVar3;
    fVar9 = param_1 + fVar4 * -param_4 + fVar3 * -param_3;
    fVar10 = param_2 + fVar4 * param_3 + fVar3 * -param_4;
    fVar3 = fVar10;
    fVar4 = fVar9;
    fVar8 = fVar7;
    fVar6 = fVar5;
    if ((uVar2 != 0) &&
       (FUN_1096f1024(fVar12,fVar11,fVar9,fVar10,param_6), fVar3 = fStack_a0, fVar4 = fStack_9c,
       fVar8 = fVar10, fVar6 = fVar9, param_9 != 1)) {
      fVar8 = fVar7;
      fVar6 = fVar5;
    }
    fStack_9c = fVar4;
    fStack_a0 = fVar3;
    uVar2 = uVar2 + 1;
    param_9 = param_9 + -1;
    fVar12 = fVar9;
    fVar11 = fVar10;
    fVar7 = fVar8;
    fVar5 = fVar6;
  } while (param_9 != 0);
  if (param_10 != 0) {
    FUN_1096f1024(*param_7,param_7[1],fStack_9c,fStack_a0,param_6);
    FUN_1096f1024(fVar6,fVar8,*param_8,param_8[1],param_6);
  }
  *param_7 = fStack_9c;
  param_7[1] = fStack_a0;
  *param_8 = fVar6;
  param_8[1] = fVar8;
  return;
}



/* Entry: 1096f1c24; end: 1096f1ebb;  */

ulong * FUN_1096f1c24(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ulong *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong auStack_3a0 [12];
  ulong uStack_340;
  ulong uStack_338;
  undefined4 uStack_330;
  ulong uStack_328;
  ulong auStack_320 [9];
  ulong uStack_2d8;
  ulong uStack_2d0;
  uint auStack_2c8 [2];
  undefined8 uStack_2c0;
  uint auStack_2b8 [16];
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong auStack_250 [10];
  ulong uStack_200;
  uint auStack_1f8 [2];
  undefined8 uStack_1f0;
  uint auStack_1e8 [18];
  ulong uStack_1a0;
  ulong uStack_198;
  undefined4 uStack_190;
  ulong auStack_180 [9];
  ulong auStack_138 [12];
  ulong uStack_d8;
  ulong uStack_d0;
  undefined4 uStack_c8;
  ulong uStack_c0;
  ulong auStack_b8 [9];
  long lStack_70;
  
  puVar8 = auStack_3a0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *param_1;
  lVar9 = uVar10 << 5;
  puVar4 = param_1;
  if (uVar10 != 0) {
    puVar4 = auStack_138;
    _memcpy(puVar4,param_1 + 1,lVar9);
  }
  uStack_d0 = param_1[0xe];
  uStack_d8 = param_1[0xd];
  uStack_c8 = (int)param_1[0xf];
  uVar12 = param_1[0x10];
  uStack_c0 = uVar12;
  if (uVar12 != 0) {
    puVar4 = auStack_b8;
    _memcpy(puVar4,param_1 + 0x11,uVar12 * 0x18);
  }
  if (uVar10 != 0) {
    puVar4 = &uStack_2d8;
    _memcpy(puVar4,auStack_138,lVar9);
  }
  uStack_270 = param_1[0xe];
  uStack_278 = param_1[0xd];
  uStack_268 = CONCAT44(uStack_268._4_4_,(int)param_1[0xf]);
  uStack_260 = uVar12;
  if (uVar12 != 0) {
    puVar4 = &uStack_258;
    _memcpy(puVar4,auStack_b8,uVar12 * 0x18);
  }
  if (uVar10 != 0) {
    puVar4 = &uStack_200;
    _memcpy(puVar4,&uStack_2d8,lVar9);
  }
  uStack_198 = param_1[0xe];
  uStack_1a0 = param_1[0xd];
  uStack_190 = (int)param_1[0xf];
  if (uVar12 != 0) {
    puVar4 = auStack_180;
    _memcpy(puVar4,&uStack_258,uVar12 * 0x18);
  }
  uVar12 = *param_2;
  if (uVar12 != 0) {
    _memcpy(auStack_3a0,param_2 + 1,uVar12 << 5);
    puVar4 = puVar8;
  }
  uStack_338 = param_2[0xe];
  uStack_340 = param_2[0xd];
  uStack_330 = (int)param_2[0xf];
  uVar11 = param_2[0x10];
  uStack_328 = uVar11;
  if (uVar11 != 0) {
    puVar4 = auStack_320;
    _memcpy(puVar4,param_2 + 0x11,uVar11 * 0x18);
  }
  if (uVar12 != 0) {
    puVar4 = &uStack_2d0;
    _memcpy(puVar4,auStack_3a0,uVar12 << 5);
  }
  uStack_268 = param_2[0xe];
  uStack_270 = param_2[0xd];
  uStack_260 = CONCAT44(uStack_260._4_4_,(int)param_2[0xf]);
  if (uVar11 != 0) {
    puVar4 = auStack_250;
    _memcpy(puVar4,auStack_320,uVar11 * 0x18);
  }
  if (uVar10 <= uVar12) {
    uVar12 = uVar10;
  }
  if (uVar12 != 0) {
    uVar10 = 0;
    do {
      uVar11 = (&uStack_2d0)[uVar10 * 4];
      puVar8 = (ulong *)(&uStack_200)[uVar10 * 4];
      if (uVar11 != 0 && puVar8 != (ulong *)0x0) {
        uVar6 = auStack_1e8[uVar10 * 8];
        uVar2 = auStack_2b8[uVar10 * 8];
        uVar5 = auStack_1f8[uVar10 * 8 + 1];
        if (auStack_2c8[uVar10 * 8 + 1] <= auStack_1f8[uVar10 * 8 + 1]) {
          uVar5 = auStack_2c8[uVar10 * 8 + 1];
        }
        uVar13 = (ulong)uVar5;
        if (uVar2 < 2) {
          uVar2 = 1;
        }
        if (uVar6 < 2) {
          uVar6 = 1;
        }
        uVar1 = auStack_1f8[uVar10 * 8];
        if (auStack_2c8[uVar10 * 8] <= auStack_1f8[uVar10 * 8]) {
          uVar1 = auStack_2c8[uVar10 * 8];
        }
        if (uVar2 <= uVar6) {
          uVar6 = uVar2;
        }
        if (uVar5 != 0) {
          lVar9 = *(long *)(auStack_2b8 + uVar10 * 8 + -2);
          lVar14 = *(long *)(auStack_1e8 + uVar10 * 8 + -2);
          do {
            puVar4 = puVar8;
            _memcpy(puVar8,uVar11,(ulong)uVar1 * (ulong)uVar6);
            uVar11 = uVar11 + lVar9;
            puVar8 = (ulong *)((long)puVar8 + lVar14);
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar12);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar4;
  }
  ___stack_chk_fail();
  bVar3 = (byte)*puVar4;
  if (bVar3 < 8) {
    uVar5 = (uint)*(ushort *)((long)puVar4 + 10);
    if (*(ushort *)((long)puVar4 + 10) == 0) {
      uVar5 = (uint)*(byte *)((long)puVar4 + 1);
      FUN_1096f1f84(*(byte *)((long)puVar4 + 1));
      bVar3 = (byte)*puVar4;
    }
    if (bVar3 < 8) {
      iVar7 = *(int *)(&UNK_10dfdfe90 + (ulong)bVar3 * 4);
    }
    else {
      iVar7 = 0;
    }
    return (ulong *)(ulong)(iVar7 * uVar5);
  }
  uVar5 = (uint)bVar3;
  uVar6 = (uint)bVar3;
  if (uVar5 < 0xc) {
    if (uVar5 - 9 < 2) {
      return (ulong *)0x4;
    }
    if (uVar5 != 8) {
      if (uVar6 != 0xb) {
        return (ulong *)0x0;
      }
      return (ulong *)0x8;
    }
  }
  else {
    if (uVar6 - 0x23 < 3) {
      return (ulong *)0x1;
    }
    if (2 < uVar6 - 0x26) {
      if (uVar6 == 0xc) {
        return (ulong *)0x4;
      }
      return (ulong *)0x0;
    }
  }
  return (ulong *)0x2;
}



/* Entry: 1096f1ebc; end: 1096f1f83;  */

int FUN_1096f1ebc(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  bVar1 = *param_1;
  if (bVar1 < 8) {
    uVar2 = (uint)*(ushort *)(param_1 + 10);
    if (*(ushort *)(param_1 + 10) == 0) {
      uVar2 = (uint)param_1[1];
      FUN_1096f1f84(param_1[1]);
      bVar1 = *param_1;
    }
    if (bVar1 < 8) {
      iVar4 = *(int *)(&UNK_10dfdfe90 + (ulong)bVar1 * 4);
    }
    else {
      iVar4 = 0;
    }
    return iVar4 * uVar2;
  }
  uVar2 = (uint)bVar1;
  uVar3 = (uint)bVar1;
  if (uVar2 < 0xc) {
    if (uVar2 - 9 < 2) {
      return 4;
    }
    if (uVar2 != 8) {
      if (uVar3 != 0xb) {
        return 0;
      }
      return 8;
    }
  }
  else {
    if (uVar3 - 0x23 < 3) {
      return 1;
    }
    if (2 < uVar3 - 0x26) {
      if (uVar3 == 0xc) {
        return 4;
      }
      return 0;
    }
  }
  return 2;
}



/* Entry: 1096f1f84; end: 1096f2057;  */

undefined4 FUN_1096f1f84(int param_1)

{
  if (param_1 - 1U < 0xd) {
    return *(undefined4 *)(&UNK_10dfdfeb0 + ((ulong)(param_1 - 1U) & 0xff) * 4);
  }
  return 0;
}



/* Entry: 1096f2058; end: 1096f2203;  */

void FUN_1096f2058(float param_1,float param_2,long *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [13];
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *extraout_x8;
  long *plVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  long lVar15;
  float *pfVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong uVar19;
  float *pfVar20;
  ulong uVar21;
  long lVar22;
  float fVar23;
  undefined1 auVar24 [16];
  long lStack_100;
  long lStack_f8;
  undefined4 uStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [72];
  long lStack_98;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *param_3;
  lVar13 = *param_4;
  if (lVar13 != 0 && lVar15 != 0) {
    uVar1 = *(uint *)(param_3 + 1);
    uVar17 = (ulong)uVar1;
    if (*(uint *)(param_4 + 1) == uVar1) {
      plVar4 = (long *)0x0;
      if ((((*(uint *)((long)param_4 + 0xc) != 0) && (uVar1 != 0)) &&
          (uVar2 = *(uint *)((long)param_3 + 0xc), *(uint *)((long)param_4 + 0xc) == uVar2)) &&
         (((int)param_4[3] == 1 && ((int)param_3[3] == 4)))) {
        uVar21 = 0;
        lVar10 = param_3[2];
        lVar12 = param_4[2];
        uVar19 = uVar17 & 0xfffffff0;
        fVar23 = (param_2 - param_1) / 255.0;
        lVar22 = lVar15;
        do {
          if ((uint)uVar19 != 0) {
            uVar5 = 0;
            lVar7 = lVar22;
            do {
              lVar8 = 0;
              pbVar18 = (byte *)(lVar13 + uVar21 * lVar12 + uVar5);
              uStack_58 = (ulong)CONCAT14(pbVar18[3],(uint)pbVar18[2]);
              uStack_60 = (ulong)((uint6)CONCAT14(pbVar18[1],
                                                  (uint)CONCAT12(pbVar18[1],(ushort)*pbVar18)) &
                                 0xffff0000ffff);
              uStack_48 = (ulong)CONCAT14(pbVar18[7],(uint)pbVar18[6]);
              uStack_50 = (ulong)((uint6)CONCAT14(pbVar18[5],
                                                  (uint)CONCAT12(pbVar18[5],(ushort)pbVar18[4])) &
                                 0xffff0000ffff);
              uStack_30 = CONCAT35(0,CONCAT14(pbVar18[0xd],(uint)pbVar18[0xc]));
              auVar3[8] = pbVar18[0xe];
              auVar3._0_8_ = uStack_30;
              auVar3._9_3_ = 0;
              auVar3[0xc] = pbVar18[0xf];
              uStack_38 = (ulong)CONCAT14(pbVar18[0xb],(uint)pbVar18[10]);
              uStack_40 = (ulong)((uint6)CONCAT14(pbVar18[9],
                                                  (uint)CONCAT12(pbVar18[9],(ushort)pbVar18[8])) &
                                 0xffff0000ffff);
              uStack_28 = (ulong)auVar3._8_5_;
              do {
                auVar24 = NEON_ucvtf(*(undefined1 (*) [16])((long)&uStack_60 + lVar8),4);
                pfVar20 = (float *)(lVar7 + lVar8);
                pfVar20[2] = param_1 + auVar24._8_4_ * fVar23;
                pfVar20[3] = param_1 + auVar24._12_4_ * fVar23;
                *pfVar20 = param_1 + auVar24._0_4_ * fVar23;
                pfVar20[1] = param_1 + auVar24._4_4_ * fVar23;
                lVar8 = lVar8 + 0x10;
              } while (lVar8 != 0x40);
              uVar5 = uVar5 + 0x10;
              lVar7 = lVar7 + 0x40;
            } while (uVar5 < uVar19);
          }
          uVar21 = uVar21 + 1;
          lVar22 = lVar22 + lVar10;
        } while (uVar21 != uVar2);
        if ((uint)uVar19 != uVar1) {
          uVar21 = 0;
          pfVar20 = (float *)(lVar15 + (uVar17 & 0xfffffff0) * 4);
          pbVar18 = (byte *)(lVar13 + uVar19);
          lVar13 = uVar17 - uVar19;
          pfVar16 = pfVar20;
          pbVar14 = pbVar18;
          do {
            do {
              *pfVar20 = param_1 + fVar23 * (float)*pbVar18;
              lVar13 = lVar13 + -1;
              pbVar18 = pbVar18 + 1;
              pfVar20 = pfVar20 + 1;
            } while (lVar13 != 0);
            uVar21 = uVar21 + 1;
            pfVar20 = (float *)((long)pfVar16 + lVar10);
            pbVar18 = pbVar14 + lVar12;
            lVar13 = uVar17 - uVar19;
            pfVar16 = pfVar20;
            pbVar14 = pbVar18;
          } while (uVar21 != uVar2);
        }
        plVar4 = (long *)0x1;
      }
      goto LAB_1096f21dc;
    }
  }
  plVar4 = (long *)0x0;
LAB_1096f21dc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  plVar9 = &lStack_100;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = plVar4[0x1d];
  lStack_f8 = plVar4[1];
  lStack_100 = *plVar4;
  uStack_f0 = (undefined4)plVar4[2];
  lStack_e8 = plVar4[3];
  if (lStack_e8 != 0) {
    _memcpy(auStack_e0,plVar4 + 4,lStack_e8 * 0x18);
  }
  plVar4 = plVar4 + 0x1e;
  plVar6 = extraout_x8;
  FUN_1096f22ac();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  *plVar6 = 0;
  lVar22 = plVar9[1];
  lVar15 = *plVar9;
  *(int *)(plVar6 + 0xf) = (int)plVar9[2];
  plVar6[0xe] = lVar22;
  plVar6[0xd] = lVar15;
  plVar6[0x10] = 0;
  lVar15 = plVar9[3];
  plVar6[0x10] = lVar15;
  if (lVar15 != 0) {
    plVar9 = plVar9 + 4;
    plVar11 = plVar6 + 0x11;
    do {
      lVar10 = plVar9[1];
      lVar22 = *plVar9;
      plVar11[2] = plVar9[2];
      plVar11[1] = lVar10;
      *plVar11 = lVar22;
      plVar9 = plVar9 + 3;
      lVar15 = lVar15 + -1;
      plVar11 = plVar11 + 3;
    } while (lVar15 != 0);
  }
  if (lVar13 != 0) {
    lVar15 = *plVar6;
    lVar13 = lVar13 << 5;
    do {
      plVar9 = plVar6 + lVar15 * 4 + 1;
      lVar15 = *plVar4;
      lVar10 = plVar4[3];
      lVar22 = plVar4[2];
      plVar9[1] = plVar4[1];
      *plVar9 = lVar15;
      plVar9[3] = lVar10;
      plVar9[2] = lVar22;
      lVar15 = *plVar6 + 1;
      *plVar6 = lVar15;
      lVar13 = lVar13 + -0x20;
      plVar4 = plVar4 + 4;
    } while (lVar13 != 0);
  }
  return;
}



/* Entry: 1096f2204; end: 1096f22ab;  */

void FUN_1096f2204(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  plVar1 = &lStack_a0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_2[0x1d];
  lStack_98 = param_2[1];
  lStack_a0 = *param_2;
  uStack_90 = (undefined4)param_2[2];
  lStack_88 = param_2[3];
  if (lStack_88 != 0) {
    _memcpy(auStack_80,param_2 + 4,lStack_88 * 0x18);
  }
  param_2 = param_2 + 0x1e;
  FUN_1096f22ac();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  *param_1 = 0;
  lVar5 = plVar1[1];
  lVar2 = *plVar1;
  *(int *)(param_1 + 0xf) = (int)plVar1[2];
  param_1[0xe] = lVar5;
  param_1[0xd] = lVar2;
  param_1[0x10] = 0;
  lVar2 = plVar1[3];
  param_1[0x10] = lVar2;
  if (lVar2 != 0) {
    plVar1 = plVar1 + 4;
    plVar3 = param_1 + 0x11;
    do {
      lVar6 = plVar1[1];
      lVar5 = *plVar1;
      plVar3[2] = plVar1[2];
      plVar3[1] = lVar6;
      *plVar3 = lVar5;
      plVar1 = plVar1 + 3;
      lVar2 = lVar2 + -1;
      plVar3 = plVar3 + 3;
    } while (lVar2 != 0);
  }
  if (lVar4 != 0) {
    lVar2 = *param_1;
    lVar4 = lVar4 << 5;
    do {
      plVar1 = param_1 + lVar2 * 4 + 1;
      lVar2 = *param_2;
      lVar6 = param_2[3];
      lVar5 = param_2[2];
      plVar1[1] = param_2[1];
      *plVar1 = lVar2;
      plVar1[3] = lVar6;
      plVar1[2] = lVar5;
      lVar2 = *param_1 + 1;
      *param_1 = lVar2;
      lVar4 = lVar4 + -0x20;
      param_2 = param_2 + 4;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 1096f22ac; end: 1096f2327;  */

void FUN_1096f22ac(long *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = 0;
  lVar3 = param_4[1];
  lVar1 = *param_4;
  *(int *)(param_1 + 0xf) = (int)param_4[2];
  param_1[0xe] = lVar3;
  param_1[0xd] = lVar1;
  param_1[0x10] = 0;
  lVar1 = param_4[3];
  param_1[0x10] = lVar1;
  if (lVar1 != 0) {
    param_4 = param_4 + 4;
    plVar2 = param_1 + 0x11;
    do {
      lVar4 = param_4[1];
      lVar3 = *param_4;
      plVar2[2] = param_4[2];
      plVar2[1] = lVar4;
      *plVar2 = lVar3;
      param_4 = param_4 + 3;
      lVar1 = lVar1 + -1;
      plVar2 = plVar2 + 3;
    } while (lVar1 != 0);
  }
  if (param_3 != 0) {
    lVar1 = *param_1;
    param_3 = param_3 << 5;
    do {
      plVar2 = param_1 + lVar1 * 4 + 1;
      lVar1 = *param_2;
      lVar4 = param_2[3];
      lVar3 = param_2[2];
      plVar2[1] = param_2[1];
      *plVar2 = lVar1;
      plVar2[3] = lVar4;
      plVar2[2] = lVar3;
      lVar1 = *param_1 + 1;
      *param_1 = lVar1;
      param_3 = param_3 + -0x20;
      param_2 = param_2 + 4;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 1096f2328; end: 1096f238f;  */

void FUN_1096f2328(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 0x150) != 0) {
    lVar1 = *(long *)(param_1 + 0x150) << 3;
    puVar2 = (undefined8 *)(param_1 + 0x158);
    do {
      if (*(char *)(*(long *)(param_1 + 0xb0) + 8) == '\x01') {
        (**(code **)(param_1 + 0xa8))(*puVar2,param_1 + 0xa8);
      }
      puVar2 = puVar2 + 1;
      lVar1 = lVar1 + -8;
    } while (lVar1 != 0);
  }
  *(undefined8 *)(param_1 + 0x150) = 0;
  return;
}



/* Entry: 1096f2390; end: 1096f256b;  */

undefined8 * FUN_1096f2390(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[3] = 0;
  lVar1 = param_2[3];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    puVar3 = param_2 + 4;
    puVar2 = param_1 + 4;
    do {
      uVar5 = puVar3[1];
      uVar4 = *puVar3;
      puVar2[2] = puVar3[2];
      puVar2[1] = uVar5;
      *puVar2 = uVar4;
      puVar3 = puVar3 + 3;
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 3;
    } while (lVar1 != 0);
  }
  param_1[0xd] = param_2[0xd];
  (**(code **)(param_2[0xe] + 0x10))(param_1 + 0xe);
  param_1[0x15] = param_2[0x15];
  (**(code **)(param_2[0x16] + 0x10))(param_1 + 0x16,param_2 + 0x16);
  param_1[0x1d] = 0;
  lVar1 = param_2[0x1d];
  param_1[0x1d] = lVar1;
  if (lVar1 != 0) {
    puVar3 = param_1 + 0x1e;
    puVar2 = param_2 + 0x1e;
    do {
      uVar4 = *puVar2;
      uVar6 = puVar2[3];
      uVar5 = puVar2[2];
      puVar3[1] = puVar2[1];
      *puVar3 = uVar4;
      puVar3[3] = uVar6;
      puVar3[2] = uVar5;
      lVar1 = lVar1 + -1;
      puVar3 = puVar3 + 4;
      puVar2 = puVar2 + 4;
    } while (lVar1 != 0);
  }
  param_1[0x2a] = 0;
  lVar1 = param_2[0x2a];
  param_1[0x2a] = lVar1;
  if (lVar1 != 0) {
    puVar3 = param_1 + 0x2b;
    puVar2 = param_2 + 0x2b;
    do {
      *puVar3 = *puVar2;
      lVar1 = lVar1 + -1;
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (lVar1 != 0);
  }
  param_2[0x2a] = 0;
  param_2[0x1d] = 0;
  return param_1;
}



/* Entry: 1096f256c; end: 1096f2637;  */

void FUN_1096f256c(ulong *param_1,ulong *param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar3 = param_1 + 1;
  uVar4 = *param_1;
  puVar2 = param_2 + 1;
  uVar5 = *param_2;
  uVar7 = uVar4;
  if (uVar5 <= uVar4) {
    uVar7 = uVar5;
  }
  lVar1 = 0;
  if (uVar4 <= uVar5) {
    lVar1 = uVar5 - uVar4;
  }
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    uVar6 = *puVar2;
    uVar9 = puVar2[3];
    uVar8 = puVar2[2];
    puVar3[1] = puVar2[1];
    *puVar3 = uVar6;
    puVar3[3] = uVar9;
    puVar3[2] = uVar8;
    puVar3 = puVar3 + 4;
    puVar2 = puVar2 + 4;
  }
  if (uVar4 < uVar5) {
    do {
      uVar7 = *puVar2;
      uVar5 = puVar2[3];
      uVar4 = puVar2[2];
      puVar3[1] = puVar2[1];
      *puVar3 = uVar7;
      puVar3[3] = uVar5;
      puVar3[2] = uVar4;
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 4;
      puVar3 = puVar3 + 4;
    } while (lVar1 != 0);
  }
  *param_1 = *param_2;
  return;
}



/* Entry: 1096f2638; end: 1096f2783;  */

void FUN_1096f2638(uint *param_1,undefined8 *param_2,ulong *param_3,int param_4,undefined8 param_5)

{
  uint *puVar1;
  uint *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  code *pcVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  long *plVar14;
  undefined8 **ppuVar15;
  undefined8 **ppuVar16;
  undefined8 **ppuVar17;
  byte *pbVar18;
  ulong *puVar19;
  long *plVar20;
  uint *puVar21;
  long *plVar22;
  ulong *puVar23;
  long *plVar24;
  undefined4 uVar25;
  long lVar26;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  byte *extraout_x8_02;
  ulong uVar27;
  ulong *puVar28;
  undefined8 uVar29;
  ulong *puVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  uint *puVar34;
  long *plVar35;
  long lVar36;
  uint *puVar37;
  ulong uVar38;
  long lVar39;
  ulong uVar40;
  ulong uVar41;
  undefined8 uVar42;
  long lVar43;
  undefined8 uVar44;
  undefined8 uStack_950;
  undefined8 *apuStack_948 [7];
  undefined8 uStack_910;
  undefined8 *apuStack_908 [7];
  undefined8 uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  ulong uStack_8b8;
  uint uStack_8b0;
  uint uStack_8ac;
  ulong uStack_8a8;
  undefined4 uStack_8a0;
  uint uStack_898;
  uint uStack_894;
  ulong uStack_890;
  undefined4 uStack_888;
  long lStack_868;
  long *plStack_860;
  undefined1 *puStack_858;
  long *plStack_850;
  long *plStack_848;
  undefined8 **ppuStack_840;
  undefined8 **ppuStack_838;
  undefined1 *****pppppuStack_830;
  code *pcStack_828;
  long lStack_820;
  undefined8 *apuStack_818 [7];
  long lStack_7e0;
  undefined8 *apuStack_7d8 [7];
  ulong uStack_7a0;
  ulong uStack_798;
  undefined4 uStack_790;
  ulong uStack_788;
  undefined1 auStack_780 [72];
  long lStack_738;
  long lStack_730;
  ulong uStack_728;
  long *plStack_720;
  long *plStack_718;
  long *plStack_708;
  undefined1 ****ppppuStack_700;
  code *pcStack_6f8;
  long lStack_6f0;
  undefined8 *apuStack_6e8 [7];
  long lStack_6b0;
  undefined8 *apuStack_6a8 [7];
  ulong uStack_670;
  ulong uStack_668;
  undefined4 uStack_660;
  ulong uStack_658;
  undefined1 auStack_650 [72];
  long lStack_608;
  long *plStack_600;
  uint *puStack_5f8;
  uint *puStack_5f0;
  long *plStack_5e8;
  undefined8 uStack_5e0;
  long *plStack_5d8;
  undefined1 ***pppuStack_5d0;
  code *pcStack_5c8;
  long lStack_5b8;
  undefined1 auStack_5b0 [96];
  undefined8 uStack_550;
  undefined8 uStack_548;
  uint uStack_540;
  long lStack_538;
  undefined1 auStack_530 [72];
  long lStack_4e8;
  undefined1 auStack_4e0 [96];
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined4 uStack_470;
  long lStack_468;
  undefined1 auStack_460 [72];
  long lStack_418;
  uint uStack_410;
  undefined8 uStack_40c;
  long lStack_400;
  undefined1 auStack_3f8 [72];
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined4 uStack_3a0;
  long lStack_398;
  undefined1 auStack_390 [72];
  undefined8 uStack_348;
  undefined8 *apuStack_340 [7];
  undefined8 uStack_308;
  undefined8 *apuStack_300 [7];
  long lStack_2c8;
  uint *puStack_2c0;
  uint *puStack_2b8;
  long lStack_2b0;
  ulong uStack_2a8;
  uint *puStack_2a0;
  uint *puStack_298;
  uint *puStack_290;
  long lStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  int iStack_264;
  uint *puStack_260;
  undefined8 uStack_258;
  uint uStack_250;
  undefined8 uStack_24c;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_1f0;
  uint uStack_1e8;
  uint uStack_1e4;
  ulong uStack_1e0;
  uint uStack_1d8;
  uint uStack_1d0;
  uint uStack_1cc;
  ulong uStack_1c8;
  undefined4 uStack_1c0;
  uint uStack_1b8;
  uint uStack_1b4;
  ulong uStack_1b0;
  undefined4 uStack_1a8;
  long lStack_1a0;
  undefined1 *puStack_140;
  code *pcStack_138;
  ulong uStack_130;
  undefined8 *apuStack_128 [7];
  ulong uStack_f0;
  undefined8 *apuStack_e8 [7];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  uVar25 = (undefined4)((ulong)param_5 >> 0x20);
  uVar10 = (uint)param_5;
  puVar23 = &uStack_130;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_a0 = *(undefined4 *)(param_2 + 2);
  lStack_98 = param_2[3];
  if (lStack_98 != 0) {
    _memcpy(auStack_90,param_2 + 4,lStack_98 * 0x18);
  }
  uStack_130 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_128);
  uStack_f0 = param_3[8];
  (**(code **)(param_3[9] + 0x10))(apuStack_e8,param_3 + 9);
  FUN_1096f342c(param_1,&uStack_b0);
  (*(code *)*apuStack_e8[0])(apuStack_e8);
  (*(code *)*apuStack_128[0])(apuStack_128);
  puVar11 = param_1;
  FUN_1096f2784();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_1096f2328(param_1);
  (*(code *)**(undefined8 **)(param_1 + 0x2c))();
  (*(code *)**(undefined8 **)(param_1 + 0x1c))(param_1 + 0x1c);
  __Unwind_Resume();
  puStack_140 = &stack0xfffffffffffffff0;
  pcStack_138 = FUN_1096f2784;
  iStack_264 = param_4;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar39 = *(long *)(puVar11 + 6);
  puStack_260 = puVar11;
  if (lVar39 == 0) {
    uVar6 = puVar11[3];
    uVar27 = (ulong)uVar6;
    uVar8 = puVar11[4];
    bVar7 = (byte)*puVar11;
    if (bVar7 - 0x24 < 2) {
      uStack_1e8 = uVar6;
      uStack_1e4 = uVar8;
      uStack_1e0 = uVar27;
      uStack_1d0 = uVar6 >> 1;
      uStack_1d8 = 1;
      uStack_1cc = uVar8 >> 1;
      uStack_1c8 = (ulong)uStack_1d0;
      uStack_1c0 = 1;
      uStack_1b8 = uStack_1d0;
      uStack_1b4 = uVar8 >> 1;
      uStack_1b0 = (ulong)uStack_1d0;
      uStack_1a8 = 1;
      lVar39 = 3;
    }
    else if (bVar7 == 0x26) {
      uStack_1e8 = uVar6;
      uStack_1e4 = uVar8;
      uStack_1e0 = uVar27 << 1;
      lVar39 = 2;
      uStack_1d8 = 2;
      uStack_1d0 = uVar6 >> 1;
      uStack_1cc = uVar8 >> 1;
      uStack_1c8 = uVar27 << 1;
      uStack_1c0 = 4;
    }
    else if (bVar7 == 0x23) {
      uStack_1e8 = uVar6;
      uStack_1e4 = uVar8;
      uStack_1e0 = uVar27;
      uStack_1d8 = 1;
      uStack_1d0 = uVar6 >> 1;
      uStack_1cc = uVar8 >> 1;
      uStack_1c8 = uVar27;
      lVar39 = 2;
      uStack_1c0 = 2;
    }
    else {
      FUN_1096f1ebc();
      uStack_1d8 = (uint)puVar11;
      if (uStack_1d8 < 2) {
        uStack_1d8 = 1;
      }
      uStack_1e8 = uVar6;
      uStack_1e4 = uVar8;
      uStack_1e0 = uVar27 * uStack_1d8;
      lVar39 = 1;
    }
    lStack_1f0 = lVar39;
    uStack_1e8 = uVar6;
    uStack_1e4 = uVar8;
  }
  else {
    puVar23 = (ulong *)(lVar39 * 0x18);
    puVar12 = &uStack_1e8;
    lStack_1f0 = lVar39;
    _memcpy(puVar12,puVar11 + 8);
    puVar11 = puVar12;
  }
  lVar26 = 0;
  lVar36 = 0;
  puStack_260[0x3a] = 0;
  puStack_260[0x3b] = 0;
  puStack_260[0x54] = 0;
  puStack_260[0x55] = 0;
  puVar12 = puStack_260 + 0x56;
  puVar1 = puStack_260 + 0x3c;
  puVar21 = puStack_260;
  puVar13 = &uStack_1e8;
  do {
    uVar38 = *(ulong *)(puVar13 + 2);
    uVar27 = -uVar38;
    if (-1 < (long)uVar38) {
      uVar27 = uVar38;
    }
    uVar6 = puVar13[1];
    if (uVar38 == 0 || uVar6 == 0) {
      lVar33 = 0;
    }
    else {
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = 0x10000000 / uVar6;
      }
      if (uVar8 < uVar27) {
        uVar29 = 0x10;
        ___cxa_allocate_exception(0x10);
        func_0x000104c4f71c();
        ___cxa_throw(uVar29,PTR___ZTISt12length_error_110352238,
                     PTR___ZNSt12length_errorD1Ev_110346170);
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1096f2afc);
        (*pcVar9)();
      }
      lVar33 = uVar27 * uVar6;
    }
    bVar7 = (byte)*puVar21;
    if (bVar7 - 0x24 < 2) {
      uStack_250 = 0;
      uStack_258 = 0x1000700;
    }
    else {
      if (bVar7 == 0x26) {
        uVar29 = 0x801;
        uStack_258 = 0x701;
      }
      else {
        if (bVar7 != 0x23) {
          uStack_250 = puVar21[2];
          uStack_258 = *(undefined8 *)puVar21;
          goto LAB_1096f299c;
        }
        uStack_258 = 0x1000700;
        uVar29 = 0x1000900;
      }
      uStack_250 = 0;
      if (lVar36 != 0) {
        uStack_258 = uVar29;
      }
    }
LAB_1096f299c:
    uStack_24c = *(undefined8 *)puVar13;
    uStack_228 = *(undefined8 *)(puVar13 + 4);
    uStack_230 = *(undefined8 *)(puVar13 + 2);
    uStack_238 = *(undefined8 *)puVar13;
    uStack_240 = 1;
    if ((*(byte *)(*(long *)(puVar21 + 0x1c) + 8) & 1) == 0) {
      puVar34 = (uint *)0x0;
      (puVar12 + lVar26 * 2)[0] = 0;
      (puVar12 + lVar26 * 2)[1] = 0;
      lVar26 = lVar26 + 1;
      *(long *)(puVar21 + 0x54) = lVar26;
    }
    else {
      puVar34 = (uint *)&uStack_258;
      (**(code **)(puVar21 + 0x1a))(puVar34,puVar21 + 0x1a);
      puVar11 = puVar34;
      if ((iStack_264 == 0) || (puVar34 == (uint *)0x0)) {
        lVar26 = *(long *)(puStack_260 + 0x54);
        *(uint **)(puVar12 + lVar26 * 2) = puVar34;
        lVar26 = lVar26 + 1;
        *(long *)(puStack_260 + 0x54) = lVar26;
        puVar21 = puStack_260;
        if (puVar34 == (uint *)0x0) goto LAB_1096f2a5c;
      }
      else {
        _bzero(puVar34,lVar33);
        lVar26 = *(long *)(puStack_260 + 0x54);
        *(uint **)(puVar12 + lVar26 * 2) = puVar34;
        lVar26 = lVar26 + 1;
        *(long *)(puStack_260 + 0x54) = lVar26;
      }
      puVar21 = puStack_260;
      if (((long)uVar38 < 0) && (uVar6 != 0)) {
        puVar34 = (uint *)((long)puVar34 + uVar27 * (uVar6 - 1));
      }
    }
LAB_1096f2a5c:
    puVar2 = puVar1 + *(long *)(puVar21 + 0x3a) * 8;
    *(uint **)puVar2 = puVar34;
    puVar2[6] = puVar13[4];
    puVar37 = puVar13 + 6;
    uVar29 = *(undefined8 *)puVar13;
    *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar13 + 2);
    *(undefined8 *)(puVar2 + 2) = uVar29;
    *(long *)(puVar21 + 0x3a) = *(long *)(puVar21 + 0x3a) + 1;
    lVar36 = lVar36 + 1;
    puVar13 = puVar37;
  } while (lVar39 != lVar36);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_free_exception(lVar33);
  puVar13 = puVar11;
  __Unwind_Resume();
  puStack_2c0 = puVar37;
  puStack_2b8 = puVar12;
  lStack_2b0 = lVar36;
  uStack_2a8 = uVar27;
  puStack_2a0 = puVar34;
  puStack_298 = puVar1;
  puStack_290 = puVar11;
  lStack_288 = lVar33;
  ppuStack_280 = &puStack_140;
  pcStack_278 = FUN_1096f2b1c;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar13 + 0x1a;
  lStack_418 = *(long *)puVar11;
  uStack_410 = puVar13[0x1c];
  uStack_40c = *(undefined8 *)(puVar13 + 0x1d);
  if (((uVar10 & 1) == 0) && (lStack_400 = *(long *)(puVar13 + 0x20), lStack_400 != 0)) {
    _memcpy(auStack_3f8,puVar13 + 0x22,lStack_400 * 0x18);
  }
  else {
    lStack_400 = 0;
  }
  uStack_348 = *(undefined8 *)puVar21;
  (**(code **)(*(long *)(puVar21 + 2) + 0x10))(apuStack_340);
  puVar12 = puVar21 + 0x12;
  uStack_308 = *(undefined8 *)(puVar21 + 0x10);
  (**(code **)(*(long *)puVar12 + 0x10))(apuStack_300,puVar12);
  FUN_1096f2638(extraout_x8,&lStack_418,&uStack_348);
  (*(code *)*apuStack_300[0])(apuStack_300);
  (*(code *)*apuStack_340[0])(apuStack_340);
  FUN_1096f2204(&lStack_4e8,extraout_x8);
  lStack_418 = lStack_4e8;
  if (lStack_4e8 != 0) {
    puVar23 = (ulong *)(lStack_4e8 << 5);
    _memcpy(&uStack_410,auStack_4e0);
  }
  uStack_3a8 = uStack_478;
  uStack_3b0 = uStack_480;
  uStack_3a0 = uStack_470;
  lStack_398 = lStack_468;
  if (lStack_468 != 0) {
    puVar23 = (ulong *)(lStack_468 * 0x18);
    _memcpy(auStack_390,auStack_460);
  }
  lStack_5b8 = *(long *)puVar13;
  if (lStack_5b8 != 0) {
    puVar23 = (ulong *)(lStack_5b8 << 5);
    _memcpy(auStack_5b0,puVar13 + 2);
  }
  uStack_548 = *(undefined8 *)(puVar13 + 0x1c);
  uStack_550 = *(undefined8 *)puVar11;
  uStack_540 = puVar13[0x1e];
  lStack_538 = *(long *)(puVar13 + 0x20);
  if (lStack_538 != 0) {
    puVar23 = (ulong *)(lStack_538 * 0x18);
    _memcpy(auStack_530,puVar13 + 0x22);
  }
  plVar20 = &lStack_418;
  plVar22 = &lStack_5b8;
  FUN_1096f1c24();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_300[0])(apuStack_300);
  (*(code *)*apuStack_340[0])(apuStack_340);
  plVar14 = plVar20;
  __Unwind_Resume();
  plVar24 = &lStack_6f0;
  plStack_600 = &lStack_4e8;
  puStack_5f8 = puVar11;
  puStack_5f0 = puVar12;
  plStack_5e8 = &lStack_4e8;
  uStack_5e0 = extraout_x8;
  plStack_5d8 = plVar20;
  pppuStack_5d0 = &ppuStack_280;
  pcStack_5c8 = FUN_1096f2d54;
  plVar20 = (long *)CONCAT44(uVar25,uVar10);
  lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_668 = puVar23[1];
  uStack_670 = *puVar23;
  uStack_660 = (int)puVar23[2];
  uStack_658 = puVar23[3];
  if (uStack_658 != 0) {
    _memcpy(auStack_650,puVar23 + 4,uStack_658 * 0x18);
  }
  lStack_6f0 = *plVar20;
  (**(code **)(plVar20[1] + 0x10))(apuStack_6e8);
  plVar35 = plVar20 + 9;
  lStack_6b0 = plVar20[8];
  (**(code **)(*plVar35 + 0x10))(apuStack_6a8,plVar35);
  puVar23 = &uStack_670;
  FUN_1096f342c(extraout_x8_00);
  (*(code *)*apuStack_6a8[0])(apuStack_6a8);
  ppuVar15 = apuStack_6e8;
  (*(code *)*apuStack_6e8[0])();
  *(undefined8 *)(extraout_x8_00 + 0xe8) = 0;
  if (plVar22 != (long *)0x0) {
    lVar26 = 0;
    lVar36 = (long)plVar22 << 5;
    plVar20 = plVar14;
    do {
      plVar3 = (long *)(extraout_x8_00 + 0xf0 + lVar26 * 0x20);
      plVar14 = plVar20 + 4;
      lVar26 = *plVar20;
      lVar43 = plVar20[3];
      lVar33 = plVar20[2];
      plVar3[1] = plVar20[1];
      *plVar3 = lVar26;
      plVar3[3] = lVar43;
      plVar3[2] = lVar33;
      lVar26 = *(long *)(extraout_x8_00 + 0xe8) + 1;
      *(long *)(extraout_x8_00 + 0xe8) = lVar26;
      lVar36 = lVar36 + -0x20;
      plVar20 = plVar14;
    } while (lVar36 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_608) {
    return;
  }
  ___stack_chk_fail();
  plVar20 = &lStack_820;
  pcStack_6f8 = FUN_1096f2e98;
  lStack_738 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_730 = lVar39;
  uStack_728 = uVar38;
  plStack_720 = plVar35;
  plStack_718 = plVar22;
  plStack_708 = plVar14;
  ppppuStack_700 = &pppuStack_5d0;
  if ((char)*puVar23 == '#') {
    uStack_798 = puVar23[1];
    uStack_7a0 = *puVar23;
    uStack_790 = (undefined4)puVar23[2];
    uStack_788 = puVar23[3];
    if (uStack_788 != 0) {
      _memcpy(auStack_780,puVar23 + 4,uStack_788 * 0x18);
    }
    lStack_820 = *plVar24;
    (**(code **)(plVar24[1] + 0x10))(apuStack_818);
    plVar22 = plVar24 + 9;
    lStack_7e0 = plVar24[8];
    (**(code **)(*plVar22 + 0x10))(apuStack_7d8,plVar22);
    puVar23 = &uStack_7a0;
    FUN_1096f342c(extraout_x8_01);
    (*(code *)*apuStack_7d8[0])(apuStack_7d8);
    ppuVar16 = apuStack_818;
    (*(code *)*apuStack_818[0])();
    lVar39 = 0;
    lVar26 = 0;
    *(undefined8 *)(extraout_x8_01 + 0xe8) = 0;
    *(undefined8 *)(extraout_x8_01 + 0x150) = 0;
    do {
      puVar4 = (undefined8 *)((long)ppuVar15 + lVar26);
      puVar5 = (undefined8 *)(extraout_x8_01 + 0xf0 + lVar39 * 0x20);
      uVar29 = *puVar4;
      uVar44 = puVar4[3];
      uVar42 = puVar4[2];
      puVar5[1] = puVar4[1];
      *puVar5 = uVar29;
      puVar5[3] = uVar44;
      puVar5[2] = uVar42;
      lVar39 = *(long *)(extraout_x8_01 + 0xe8) + 1;
      *(long *)(extraout_x8_01 + 0xe8) = lVar39;
      lVar36 = *(long *)(extraout_x8_01 + 0x150);
      *(undefined8 *)(extraout_x8_01 + 0x158 + lVar36 * 8) = *puVar4;
      *(long *)(extraout_x8_01 + 0x150) = lVar36 + 1;
      lVar26 = lVar26 + 0x20;
    } while (lVar26 != 0x40);
    plVar35 = &lStack_820;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_738) {
      return;
    }
  }
  else {
    ppuVar15 = (undefined8 **)0x10;
    ___cxa_allocate_exception();
    FUN_10940ceb0();
    ppuVar16 = ppuVar15;
    puVar23 = (ulong *)PTR___ZTISt16invalid_argument_110352248;
    plVar20 = (long *)PTR___ZNSt16invalid_argumentD1Ev_1103461e8;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  ___cxa_free_exception(ppuVar15);
  ppuVar17 = ppuVar16;
  __Unwind_Resume();
  plStack_860 = &lStack_4e8;
  puStack_858 = (undefined1 *)&lStack_6f0;
  plStack_850 = plVar35;
  plStack_848 = plVar22;
  ppuStack_840 = ppuVar16;
  ppuStack_838 = ppuVar15;
  pppppuStack_830 = &ppppuStack_700;
  pcStack_828 = FUN_1096f3044;
  lStack_868 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_8c8 = puVar23[1];
  uStack_8d0 = *puVar23;
  uStack_8c0 = CONCAT44(uStack_8c0._4_4_,(int)puVar23[2]);
  uStack_8b8 = puVar23[3];
  if (uStack_8b8 != 0) {
    _memcpy(&uStack_8b0,puVar23 + 4,uStack_8b8 * 0x18);
  }
  uStack_950 = *plVar20;
  (**(code **)(plVar20[1] + 0x10))(apuStack_948);
  uStack_910 = plVar20[8];
  (**(code **)(plVar20[9] + 0x10))(apuStack_908,plVar20 + 9);
  puVar23 = &uStack_8d0;
  FUN_1096f342c(extraout_x8_02,puVar23,&uStack_950);
  (*(code *)*apuStack_908[0])(apuStack_908);
  (*(code *)*apuStack_948[0])(apuStack_948);
  lVar39 = *(long *)(extraout_x8_02 + 0x150);
  *(undefined8 ***)(extraout_x8_02 + lVar39 * 8 + 0x158) = ppuVar17;
  *(long *)(extraout_x8_02 + 0x150) = lVar39 + 1;
  uVar27 = *(ulong *)(extraout_x8_02 + 0x18);
  if (uVar27 != 0) {
    lVar39 = uVar27 * 0x18;
    puVar23 = (ulong *)(extraout_x8_02 + 0x20);
    uStack_8d0 = uVar27;
    _memcpy(&uStack_8c8,puVar23,lVar39);
    goto LAB_1096f3250;
  }
  puVar19 = (ulong *)(extraout_x8_02 + 0xc);
  uVar10 = (uint)*puVar19;
  uVar27 = (ulong)uVar10;
  uVar6 = *(uint *)(extraout_x8_02 + 0x10);
  uVar38 = *puVar19;
  bVar7 = *extraout_x8_02;
  if (bVar7 - 0x24 < 2) {
    uStack_8c0 = uVar27;
    uStack_8b0 = uVar10 >> 1;
    uStack_8ac = uVar6 >> 1;
    uStack_8a8 = (ulong)uStack_8b0;
    uStack_8a0 = 1;
    uStack_898 = uStack_8b0;
    uStack_894 = uVar6 >> 1;
    uStack_890 = (ulong)uStack_8b0;
    uStack_888 = 1;
    uStack_8d0 = 3;
    lVar39 = 0x48;
  }
  else {
    if (bVar7 == 0x26) {
      uStack_8c8 = *puVar19;
      uStack_8c0 = uVar27 << 1;
      uStack_8b8 = CONCAT44(uStack_8b8._4_4_,2);
      uStack_8b0 = uVar10 >> 1;
      uStack_8ac = uVar6 >> 1;
      uStack_8a8 = uVar27 << 1;
      uStack_8a0 = 4;
      lVar39 = 0x30;
      uStack_8d0 = 2;
      goto LAB_1096f3250;
    }
    if (bVar7 != 0x23) {
      pbVar18 = extraout_x8_02;
      FUN_1096f1ebc();
      uVar10 = (uint)pbVar18;
      if (uVar10 < 2) {
        uVar10 = 1;
      }
      uStack_8c8 = uVar38;
      uStack_8c0 = uVar27 * uVar10;
      uStack_8b8 = CONCAT44(uStack_8b8._4_4_,uVar10);
      uStack_8d0 = 1;
      lVar39 = 0x18;
      goto LAB_1096f3250;
    }
    uStack_8c0 = uVar27;
    uStack_8b0 = uVar10 >> 1;
    uStack_8ac = uVar6 >> 1;
    uStack_8a8 = uVar27;
    uStack_8d0 = 2;
    uStack_8a0 = 2;
    lVar39 = 0x30;
  }
  uStack_8b8 = CONCAT44(uStack_8b8._4_4_,1);
  uStack_8c8 = *puVar19;
  uStack_8c0 = uVar27;
LAB_1096f3250:
  lVar36 = 0;
  lVar26 = *(long *)(extraout_x8_02 + 0xe8);
  lVar33 = 8;
  do {
    lVar32 = 0;
    lVar43 = 0;
    if (ppuVar17 != (undefined8 **)0x0) {
      lVar43 = (long)ppuVar17 + lVar36;
    }
    pbVar18 = extraout_x8_02 + lVar26 * 0x20 + 0xf0;
    *(long *)pbVar18 = lVar43;
    *(undefined4 *)(pbVar18 + 0x18) = *(undefined4 *)((long)&uStack_8c0 + lVar33);
    lVar26 = *(long *)((long)&uStack_8d0 + lVar33);
    *(long *)(pbVar18 + 0x10) = *(long *)((long)&uStack_8c8 + lVar33);
    *(long *)(pbVar18 + 8) = lVar26;
    lVar26 = *(long *)(extraout_x8_02 + 0xe8) + 1;
    *(long *)(extraout_x8_02 + 0xe8) = lVar26;
    uVar38 = *(ulong *)((long)&uStack_8c8 + lVar33);
    uVar27 = -uVar38;
    if (-1 < (long)uVar38) {
      uVar27 = uVar38;
    }
    uVar10 = *(uint *)((long)&uStack_8d0 + lVar33 + 4);
    puVar19 = (ulong *)(ulong)uVar10;
    if (uVar38 != 0 && uVar10 != 0) {
      uVar6 = 0;
      if (uVar10 != 0) {
        uVar6 = 0x10000000 / uVar10;
      }
      if (uVar6 < uVar27) {
        plVar20 = (long *)0x10;
        ___cxa_allocate_exception();
        __ZNSt11logic_errorC2EPKc();
        *plVar20 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
        ___cxa_throw(plVar20,PTR___ZTISt12length_error_110352238,
                     PTR___ZNSt12length_errorD1Ev_110346170);
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1096f335c);
        (*pcVar9)();
      }
      lVar32 = uVar27 * (long)puVar19;
    }
    lVar36 = lVar32 + lVar36;
    lVar43 = (long)&uStack_8b8 + lVar33;
    lVar33 = lVar33 + 0x18;
    if (lVar43 == (long)&uStack_8c8 + lVar39) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_868) {
        return;
      }
      ___stack_chk_fail();
      FUN_1096f2328(extraout_x8_02);
      (*(code *)**(undefined8 **)(extraout_x8_02 + 0xb0))();
      (*(code *)**(undefined8 **)(extraout_x8_02 + 0x70))(extraout_x8_02 + 0x70);
      __Unwind_Resume();
      puVar30 = puVar19 + 1;
      uVar38 = *puVar19;
      puVar28 = puVar23 + 1;
      uVar31 = *puVar23;
      uVar27 = uVar38;
      if (uVar31 <= uVar38) {
        uVar27 = uVar31;
      }
      lVar39 = 0;
      if (uVar38 <= uVar31) {
        lVar39 = uVar31 - uVar38;
      }
      for (; uVar27 != 0; uVar27 = uVar27 - 1) {
        uVar41 = puVar28[1];
        uVar40 = *puVar28;
        *(int *)(puVar30 + 2) = (int)puVar28[2];
        puVar30[1] = uVar41;
        *puVar30 = uVar40;
        puVar30 = puVar30 + 3;
        puVar28 = puVar28 + 3;
      }
      if (uVar38 < uVar31) {
        do {
          uVar38 = puVar28[1];
          uVar27 = *puVar28;
          puVar30[2] = puVar28[2];
          puVar30[1] = uVar38;
          *puVar30 = uVar27;
          puVar28 = puVar28 + 3;
          lVar39 = lVar39 + -1;
          puVar30 = puVar30 + 3;
        } while (lVar39 != 0);
      }
      *puVar19 = *puVar23;
      return;
    }
  } while( true );
}



/* Entry: 1096f2784; end: 1096f2b1b;  */

void FUN_1096f2784(uint *param_1,int param_2,ulong *param_3,undefined8 param_4)

{
  uint *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  code *pcVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  long *plVar12;
  undefined8 **ppuVar13;
  undefined8 **ppuVar14;
  undefined8 **ppuVar15;
  byte *pbVar16;
  ulong *puVar17;
  long *plVar18;
  uint *puVar19;
  long *plVar20;
  ulong *puVar21;
  long *plVar22;
  long *plVar23;
  undefined4 uVar24;
  long lVar25;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  byte *extraout_x8_02;
  ulong uVar26;
  ulong *puVar27;
  undefined8 uVar28;
  ulong *puVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  uint *puVar33;
  uint *puVar34;
  long lVar35;
  uint *puVar36;
  ulong uVar37;
  long lVar38;
  ulong uVar39;
  ulong uVar40;
  undefined8 uVar41;
  long lVar42;
  undefined8 uVar43;
  undefined8 uStack_820;
  undefined8 *apuStack_818 [7];
  undefined8 uStack_7e0;
  undefined8 *apuStack_7d8 [7];
  undefined8 uStack_7a0;
  ulong uStack_798;
  ulong uStack_790;
  ulong uStack_788;
  uint uStack_780;
  uint uStack_77c;
  ulong uStack_778;
  undefined4 uStack_770;
  uint uStack_768;
  uint uStack_764;
  ulong uStack_760;
  undefined4 uStack_758;
  long lStack_738;
  long *plStack_730;
  undefined1 *puStack_728;
  long *plStack_720;
  long *plStack_718;
  undefined8 **ppuStack_710;
  undefined8 **ppuStack_708;
  undefined1 ****ppppuStack_700;
  code *pcStack_6f8;
  long lStack_6f0;
  undefined8 *apuStack_6e8 [7];
  long lStack_6b0;
  undefined8 *apuStack_6a8 [7];
  ulong uStack_670;
  ulong uStack_668;
  undefined4 uStack_660;
  ulong uStack_658;
  undefined1 auStack_650 [72];
  long lStack_608;
  long lStack_600;
  ulong uStack_5f8;
  long *plStack_5f0;
  long *plStack_5e8;
  long *plStack_5d8;
  undefined1 ***pppuStack_5d0;
  code *pcStack_5c8;
  long lStack_5c0;
  undefined8 *apuStack_5b8 [7];
  long lStack_580;
  undefined8 *apuStack_578 [7];
  ulong uStack_540;
  ulong uStack_538;
  undefined4 uStack_530;
  ulong uStack_528;
  undefined1 auStack_520 [72];
  long lStack_4d8;
  long *plStack_4d0;
  uint *puStack_4c8;
  uint *puStack_4c0;
  long *plStack_4b8;
  long *plStack_4a8;
  undefined1 **ppuStack_4a0;
  code *pcStack_498;
  long lStack_488;
  undefined1 auStack_480 [96];
  undefined8 uStack_420;
  undefined8 uStack_418;
  uint uStack_410;
  long lStack_408;
  undefined1 auStack_400 [72];
  long lStack_3b8;
  undefined1 auStack_3b0 [96];
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined4 uStack_340;
  long lStack_338;
  undefined1 auStack_330 [72];
  long lStack_2e8;
  uint uStack_2e0;
  undefined8 uStack_2dc;
  long lStack_2d0;
  undefined1 auStack_2c8 [72];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  long lStack_268;
  undefined1 auStack_260 [72];
  undefined8 uStack_218;
  undefined8 *apuStack_210 [7];
  undefined8 uStack_1d8;
  undefined8 *apuStack_1d0 [7];
  long lStack_198;
  uint *puStack_190;
  uint *puStack_188;
  long lStack_180;
  ulong uStack_178;
  uint *puStack_170;
  uint *puStack_168;
  uint *puStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  int iStack_134;
  uint *puStack_130;
  undefined8 uStack_128;
  uint uStack_120;
  undefined8 uStack_11c;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_c0;
  uint uStack_b8;
  uint uStack_b4;
  ulong uStack_b0;
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_9c;
  ulong uStack_98;
  undefined4 uStack_90;
  uint uStack_88;
  uint uStack_84;
  ulong uStack_80;
  undefined4 uStack_78;
  long lStack_70;
  
  uVar24 = (undefined4)((ulong)param_4 >> 0x20);
  uVar9 = (uint)param_4;
  iStack_134 = param_2;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar38 = *(long *)(param_1 + 6);
  puStack_130 = param_1;
  if (lVar38 == 0) {
    uVar5 = param_1[3];
    uVar26 = (ulong)uVar5;
    uVar7 = param_1[4];
    bVar6 = (byte)*param_1;
    if (bVar6 - 0x24 < 2) {
      uStack_b8 = uVar5;
      uStack_b4 = uVar7;
      uStack_b0 = uVar26;
      uStack_a0 = uVar5 >> 1;
      uStack_a8 = 1;
      uStack_9c = uVar7 >> 1;
      uStack_98 = (ulong)uStack_a0;
      uStack_90 = 1;
      uStack_88 = uStack_a0;
      uStack_84 = uVar7 >> 1;
      uStack_80 = (ulong)uStack_a0;
      uStack_78 = 1;
      lVar38 = 3;
    }
    else if (bVar6 == 0x26) {
      uStack_b8 = uVar5;
      uStack_b4 = uVar7;
      uStack_b0 = uVar26 << 1;
      lVar38 = 2;
      uStack_a8 = 2;
      uStack_a0 = uVar5 >> 1;
      uStack_9c = uVar7 >> 1;
      uStack_98 = uVar26 << 1;
      uStack_90 = 4;
    }
    else if (bVar6 == 0x23) {
      uStack_b8 = uVar5;
      uStack_b4 = uVar7;
      uStack_b0 = uVar26;
      uStack_a8 = 1;
      uStack_a0 = uVar5 >> 1;
      uStack_9c = uVar7 >> 1;
      uStack_98 = uVar26;
      lVar38 = 2;
      uStack_90 = 2;
    }
    else {
      FUN_1096f1ebc();
      uStack_a8 = (uint)param_1;
      if (uStack_a8 < 2) {
        uStack_a8 = 1;
      }
      uStack_b8 = uVar5;
      uStack_b4 = uVar7;
      uStack_b0 = uVar26 * uStack_a8;
      lVar38 = 1;
    }
    lStack_c0 = lVar38;
    uStack_b8 = uVar5;
    uStack_b4 = uVar7;
  }
  else {
    param_3 = (ulong *)(lVar38 * 0x18);
    puVar10 = &uStack_b8;
    lStack_c0 = lVar38;
    _memcpy(puVar10,param_1 + 8);
    param_1 = puVar10;
  }
  lVar25 = 0;
  lVar35 = 0;
  puStack_130[0x3a] = 0;
  puStack_130[0x3b] = 0;
  puStack_130[0x54] = 0;
  puStack_130[0x55] = 0;
  puVar10 = puStack_130 + 0x56;
  puVar34 = puStack_130 + 0x3c;
  puVar19 = puStack_130;
  puVar11 = &uStack_b8;
  do {
    uVar37 = *(ulong *)(puVar11 + 2);
    uVar26 = -uVar37;
    if (-1 < (long)uVar37) {
      uVar26 = uVar37;
    }
    uVar5 = puVar11[1];
    if (uVar37 == 0 || uVar5 == 0) {
      lVar32 = 0;
    }
    else {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = 0x10000000 / uVar5;
      }
      if (uVar7 < uVar26) {
        uVar28 = 0x10;
        ___cxa_allocate_exception(0x10);
        func_0x000104c4f71c();
        ___cxa_throw(uVar28,PTR___ZTISt12length_error_110352238,
                     PTR___ZNSt12length_errorD1Ev_110346170);
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1096f2afc);
        (*pcVar8)();
      }
      lVar32 = uVar26 * uVar5;
    }
    bVar6 = (byte)*puVar19;
    if (bVar6 - 0x24 < 2) {
      uStack_120 = 0;
      uStack_128 = 0x1000700;
    }
    else {
      if (bVar6 == 0x26) {
        uVar28 = 0x801;
        uStack_128 = 0x701;
      }
      else {
        if (bVar6 != 0x23) {
          uStack_120 = puVar19[2];
          uStack_128 = *(undefined8 *)puVar19;
          goto LAB_1096f299c;
        }
        uStack_128 = 0x1000700;
        uVar28 = 0x1000900;
      }
      uStack_120 = 0;
      if (lVar35 != 0) {
        uStack_128 = uVar28;
      }
    }
LAB_1096f299c:
    uStack_11c = *(undefined8 *)puVar11;
    uStack_f8 = *(undefined8 *)(puVar11 + 4);
    uStack_100 = *(undefined8 *)(puVar11 + 2);
    uStack_108 = *(undefined8 *)puVar11;
    uStack_110 = 1;
    if ((*(byte *)(*(long *)(puVar19 + 0x1c) + 8) & 1) == 0) {
      puVar33 = (uint *)0x0;
      (puVar10 + lVar25 * 2)[0] = 0;
      (puVar10 + lVar25 * 2)[1] = 0;
      lVar25 = lVar25 + 1;
      *(long *)(puVar19 + 0x54) = lVar25;
    }
    else {
      puVar33 = (uint *)&uStack_128;
      (**(code **)(puVar19 + 0x1a))(puVar33,puVar19 + 0x1a);
      param_1 = puVar33;
      if ((iStack_134 == 0) || (puVar33 == (uint *)0x0)) {
        lVar25 = *(long *)(puStack_130 + 0x54);
        *(uint **)(puVar10 + lVar25 * 2) = puVar33;
        lVar25 = lVar25 + 1;
        *(long *)(puStack_130 + 0x54) = lVar25;
        puVar19 = puStack_130;
        if (puVar33 == (uint *)0x0) goto LAB_1096f2a5c;
      }
      else {
        _bzero(puVar33,lVar32);
        lVar25 = *(long *)(puStack_130 + 0x54);
        *(uint **)(puVar10 + lVar25 * 2) = puVar33;
        lVar25 = lVar25 + 1;
        *(long *)(puStack_130 + 0x54) = lVar25;
      }
      puVar19 = puStack_130;
      if (((long)uVar37 < 0) && (uVar5 != 0)) {
        puVar33 = (uint *)((long)puVar33 + uVar26 * (uVar5 - 1));
      }
    }
LAB_1096f2a5c:
    puVar1 = puVar34 + *(long *)(puVar19 + 0x3a) * 8;
    *(uint **)puVar1 = puVar33;
    puVar1[6] = puVar11[4];
    puVar36 = puVar11 + 6;
    uVar28 = *(undefined8 *)puVar11;
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(puVar11 + 2);
    *(undefined8 *)(puVar1 + 2) = uVar28;
    *(long *)(puVar19 + 0x3a) = *(long *)(puVar19 + 0x3a) + 1;
    lVar35 = lVar35 + 1;
    puVar11 = puVar36;
  } while (lVar38 != lVar35);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_free_exception(lVar32);
  puVar11 = param_1;
  __Unwind_Resume();
  puStack_190 = puVar36;
  puStack_188 = puVar10;
  lStack_180 = lVar35;
  uStack_178 = uVar26;
  puStack_170 = puVar33;
  puStack_168 = puVar34;
  puStack_160 = param_1;
  lStack_158 = lVar32;
  puStack_150 = &stack0xfffffffffffffff0;
  pcStack_148 = FUN_1096f2b1c;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar11 + 0x1a;
  lStack_2e8 = *(long *)puVar10;
  uStack_2e0 = puVar11[0x1c];
  uStack_2dc = *(undefined8 *)(puVar11 + 0x1d);
  if (((uVar9 & 1) == 0) && (lStack_2d0 = *(long *)(puVar11 + 0x20), lStack_2d0 != 0)) {
    _memcpy(auStack_2c8,puVar11 + 0x22,lStack_2d0 * 0x18);
  }
  else {
    lStack_2d0 = 0;
  }
  uStack_218 = *(undefined8 *)puVar19;
  (**(code **)(*(long *)(puVar19 + 2) + 0x10))(apuStack_210);
  puVar34 = puVar19 + 0x12;
  uStack_1d8 = *(undefined8 *)(puVar19 + 0x10);
  (**(code **)(*(long *)puVar34 + 0x10))(apuStack_1d0,puVar34);
  FUN_1096f2638(extraout_x8,&lStack_2e8,&uStack_218);
  (*(code *)*apuStack_1d0[0])(apuStack_1d0);
  (*(code *)*apuStack_210[0])(apuStack_210);
  FUN_1096f2204(&lStack_3b8,extraout_x8);
  lStack_2e8 = lStack_3b8;
  if (lStack_3b8 != 0) {
    param_3 = (ulong *)(lStack_3b8 << 5);
    _memcpy(&uStack_2e0,auStack_3b0);
  }
  uStack_278 = uStack_348;
  uStack_280 = uStack_350;
  uStack_270 = uStack_340;
  lStack_268 = lStack_338;
  if (lStack_338 != 0) {
    param_3 = (ulong *)(lStack_338 * 0x18);
    _memcpy(auStack_260,auStack_330);
  }
  lStack_488 = *(long *)puVar11;
  if (lStack_488 != 0) {
    param_3 = (ulong *)(lStack_488 << 5);
    _memcpy(auStack_480,puVar11 + 2);
  }
  uStack_418 = *(undefined8 *)(puVar11 + 0x1c);
  uStack_420 = *(undefined8 *)puVar10;
  uStack_410 = puVar11[0x1e];
  lStack_408 = *(long *)(puVar11 + 0x20);
  if (lStack_408 != 0) {
    param_3 = (ulong *)(lStack_408 * 0x18);
    _memcpy(auStack_400,puVar11 + 0x22);
  }
  plVar18 = &lStack_2e8;
  plVar20 = &lStack_488;
  FUN_1096f1c24();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_1d0[0])(apuStack_1d0);
  (*(code *)*apuStack_210[0])(apuStack_210);
  plVar12 = plVar18;
  __Unwind_Resume();
  plVar22 = &lStack_5c0;
  pcStack_498 = FUN_1096f2d54;
  plVar23 = (long *)CONCAT44(uVar24,uVar9);
  lStack_4d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_538 = param_3[1];
  uStack_540 = *param_3;
  uStack_530 = (undefined4)param_3[2];
  uStack_528 = param_3[3];
  plStack_4d0 = &lStack_3b8;
  puStack_4c8 = puVar10;
  puStack_4c0 = puVar34;
  plStack_4b8 = &lStack_3b8;
  plStack_4a8 = plVar18;
  ppuStack_4a0 = &puStack_150;
  if (uStack_528 != 0) {
    _memcpy(auStack_520,param_3 + 4,uStack_528 * 0x18);
  }
  lStack_5c0 = *plVar23;
  (**(code **)(plVar23[1] + 0x10))(apuStack_5b8);
  plVar18 = plVar23 + 9;
  lStack_580 = plVar23[8];
  (**(code **)(*plVar18 + 0x10))(apuStack_578,plVar18);
  puVar21 = &uStack_540;
  FUN_1096f342c(extraout_x8_00);
  (*(code *)*apuStack_578[0])(apuStack_578);
  ppuVar13 = apuStack_5b8;
  (*(code *)*apuStack_5b8[0])();
  *(undefined8 *)(extraout_x8_00 + 0xe8) = 0;
  if (plVar20 != (long *)0x0) {
    lVar25 = 0;
    lVar35 = (long)plVar20 << 5;
    plVar23 = plVar12;
    do {
      plVar2 = (long *)(extraout_x8_00 + 0xf0 + lVar25 * 0x20);
      plVar12 = plVar23 + 4;
      lVar25 = *plVar23;
      lVar42 = plVar23[3];
      lVar32 = plVar23[2];
      plVar2[1] = plVar23[1];
      *plVar2 = lVar25;
      plVar2[3] = lVar42;
      plVar2[2] = lVar32;
      lVar25 = *(long *)(extraout_x8_00 + 0xe8) + 1;
      *(long *)(extraout_x8_00 + 0xe8) = lVar25;
      lVar35 = lVar35 + -0x20;
      plVar23 = plVar12;
    } while (lVar35 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4d8) {
    return;
  }
  ___stack_chk_fail();
  plVar23 = &lStack_6f0;
  pcStack_5c8 = FUN_1096f2e98;
  lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_600 = lVar38;
  uStack_5f8 = uVar37;
  plStack_5f0 = plVar18;
  plStack_5e8 = plVar20;
  plStack_5d8 = plVar12;
  pppuStack_5d0 = &ppuStack_4a0;
  if ((char)*puVar21 == '#') {
    uStack_668 = puVar21[1];
    uStack_670 = *puVar21;
    uStack_660 = (undefined4)puVar21[2];
    uStack_658 = puVar21[3];
    if (uStack_658 != 0) {
      _memcpy(auStack_650,puVar21 + 4,uStack_658 * 0x18);
    }
    lStack_6f0 = *plVar22;
    (**(code **)(plVar22[1] + 0x10))(apuStack_6e8);
    plVar20 = plVar22 + 9;
    lStack_6b0 = plVar22[8];
    (**(code **)(*plVar20 + 0x10))(apuStack_6a8,plVar20);
    puVar21 = &uStack_670;
    FUN_1096f342c(extraout_x8_01);
    (*(code *)*apuStack_6a8[0])(apuStack_6a8);
    ppuVar14 = apuStack_6e8;
    (*(code *)*apuStack_6e8[0])();
    lVar38 = 0;
    lVar25 = 0;
    *(undefined8 *)(extraout_x8_01 + 0xe8) = 0;
    *(undefined8 *)(extraout_x8_01 + 0x150) = 0;
    do {
      puVar3 = (undefined8 *)((long)ppuVar13 + lVar25);
      puVar4 = (undefined8 *)(extraout_x8_01 + 0xf0 + lVar38 * 0x20);
      uVar28 = *puVar3;
      uVar43 = puVar3[3];
      uVar41 = puVar3[2];
      puVar4[1] = puVar3[1];
      *puVar4 = uVar28;
      puVar4[3] = uVar43;
      puVar4[2] = uVar41;
      lVar38 = *(long *)(extraout_x8_01 + 0xe8) + 1;
      *(long *)(extraout_x8_01 + 0xe8) = lVar38;
      lVar35 = *(long *)(extraout_x8_01 + 0x150);
      *(undefined8 *)(extraout_x8_01 + 0x158 + lVar35 * 8) = *puVar3;
      *(long *)(extraout_x8_01 + 0x150) = lVar35 + 1;
      lVar25 = lVar25 + 0x20;
    } while (lVar25 != 0x40);
    plVar18 = &lStack_6f0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_608) {
      return;
    }
  }
  else {
    ppuVar13 = (undefined8 **)0x10;
    ___cxa_allocate_exception();
    FUN_10940ceb0();
    ppuVar14 = ppuVar13;
    puVar21 = (ulong *)PTR___ZTISt16invalid_argument_110352248;
    plVar23 = (long *)PTR___ZNSt16invalid_argumentD1Ev_1103461e8;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  ___cxa_free_exception(ppuVar13);
  ppuVar15 = ppuVar14;
  __Unwind_Resume();
  plStack_730 = &lStack_3b8;
  puStack_728 = (undefined1 *)&lStack_5c0;
  plStack_720 = plVar18;
  plStack_718 = plVar20;
  ppuStack_710 = ppuVar14;
  ppuStack_708 = ppuVar13;
  ppppuStack_700 = &pppuStack_5d0;
  pcStack_6f8 = FUN_1096f3044;
  lStack_738 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_798 = puVar21[1];
  uStack_7a0 = *puVar21;
  uStack_790 = CONCAT44(uStack_790._4_4_,(int)puVar21[2]);
  uStack_788 = puVar21[3];
  if (uStack_788 != 0) {
    _memcpy(&uStack_780,puVar21 + 4,uStack_788 * 0x18);
  }
  uStack_820 = *plVar23;
  (**(code **)(plVar23[1] + 0x10))(apuStack_818);
  uStack_7e0 = plVar23[8];
  (**(code **)(plVar23[9] + 0x10))(apuStack_7d8,plVar23 + 9);
  puVar21 = &uStack_7a0;
  FUN_1096f342c(extraout_x8_02,puVar21,&uStack_820);
  (*(code *)*apuStack_7d8[0])(apuStack_7d8);
  (*(code *)*apuStack_818[0])(apuStack_818);
  lVar38 = *(long *)(extraout_x8_02 + 0x150);
  *(undefined8 ***)(extraout_x8_02 + lVar38 * 8 + 0x158) = ppuVar15;
  *(long *)(extraout_x8_02 + 0x150) = lVar38 + 1;
  uVar26 = *(ulong *)(extraout_x8_02 + 0x18);
  if (uVar26 != 0) {
    lVar38 = uVar26 * 0x18;
    puVar21 = (ulong *)(extraout_x8_02 + 0x20);
    uStack_7a0 = uVar26;
    _memcpy(&uStack_798,puVar21,lVar38);
    goto LAB_1096f3250;
  }
  puVar17 = (ulong *)(extraout_x8_02 + 0xc);
  uVar9 = (uint)*puVar17;
  uVar26 = (ulong)uVar9;
  uVar5 = *(uint *)(extraout_x8_02 + 0x10);
  uVar37 = *puVar17;
  bVar6 = *extraout_x8_02;
  if (bVar6 - 0x24 < 2) {
    uStack_790 = uVar26;
    uStack_780 = uVar9 >> 1;
    uStack_77c = uVar5 >> 1;
    uStack_778 = (ulong)uStack_780;
    uStack_770 = 1;
    uStack_768 = uStack_780;
    uStack_764 = uVar5 >> 1;
    uStack_760 = (ulong)uStack_780;
    uStack_758 = 1;
    uStack_7a0 = 3;
    lVar38 = 0x48;
  }
  else {
    if (bVar6 == 0x26) {
      uStack_798 = *puVar17;
      uStack_790 = uVar26 << 1;
      uStack_788 = CONCAT44(uStack_788._4_4_,2);
      uStack_780 = uVar9 >> 1;
      uStack_77c = uVar5 >> 1;
      uStack_778 = uVar26 << 1;
      uStack_770 = 4;
      lVar38 = 0x30;
      uStack_7a0 = 2;
      goto LAB_1096f3250;
    }
    if (bVar6 != 0x23) {
      pbVar16 = extraout_x8_02;
      FUN_1096f1ebc();
      uVar9 = (uint)pbVar16;
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      uStack_798 = uVar37;
      uStack_790 = uVar26 * uVar9;
      uStack_788 = CONCAT44(uStack_788._4_4_,uVar9);
      uStack_7a0 = 1;
      lVar38 = 0x18;
      goto LAB_1096f3250;
    }
    uStack_790 = uVar26;
    uStack_780 = uVar9 >> 1;
    uStack_77c = uVar5 >> 1;
    uStack_778 = uVar26;
    uStack_7a0 = 2;
    uStack_770 = 2;
    lVar38 = 0x30;
  }
  uStack_788 = CONCAT44(uStack_788._4_4_,1);
  uStack_798 = *puVar17;
  uStack_790 = uVar26;
LAB_1096f3250:
  lVar35 = 0;
  lVar25 = *(long *)(extraout_x8_02 + 0xe8);
  lVar32 = 8;
  do {
    lVar31 = 0;
    lVar42 = 0;
    if (ppuVar15 != (undefined8 **)0x0) {
      lVar42 = (long)ppuVar15 + lVar35;
    }
    pbVar16 = extraout_x8_02 + lVar25 * 0x20 + 0xf0;
    *(long *)pbVar16 = lVar42;
    *(undefined4 *)(pbVar16 + 0x18) = *(undefined4 *)((long)&uStack_790 + lVar32);
    lVar25 = *(long *)((long)&uStack_7a0 + lVar32);
    *(long *)(pbVar16 + 0x10) = *(long *)((long)&uStack_798 + lVar32);
    *(long *)(pbVar16 + 8) = lVar25;
    lVar25 = *(long *)(extraout_x8_02 + 0xe8) + 1;
    *(long *)(extraout_x8_02 + 0xe8) = lVar25;
    uVar37 = *(ulong *)((long)&uStack_798 + lVar32);
    uVar26 = -uVar37;
    if (-1 < (long)uVar37) {
      uVar26 = uVar37;
    }
    uVar9 = *(uint *)((long)&uStack_7a0 + lVar32 + 4);
    puVar17 = (ulong *)(ulong)uVar9;
    if (uVar37 != 0 && uVar9 != 0) {
      uVar5 = 0;
      if (uVar9 != 0) {
        uVar5 = 0x10000000 / uVar9;
      }
      if (uVar5 < uVar26) {
        plVar18 = (long *)0x10;
        ___cxa_allocate_exception();
        __ZNSt11logic_errorC2EPKc();
        *plVar18 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
        ___cxa_throw(plVar18,PTR___ZTISt12length_error_110352238,
                     PTR___ZNSt12length_errorD1Ev_110346170);
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1096f335c);
        (*pcVar8)();
      }
      lVar31 = uVar26 * (long)puVar17;
    }
    lVar35 = lVar31 + lVar35;
    lVar42 = (long)&uStack_788 + lVar32;
    lVar32 = lVar32 + 0x18;
    if (lVar42 == (long)&uStack_798 + lVar38) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_738) {
        return;
      }
      ___stack_chk_fail();
      FUN_1096f2328(extraout_x8_02);
      (*(code *)**(undefined8 **)(extraout_x8_02 + 0xb0))();
      (*(code *)**(undefined8 **)(extraout_x8_02 + 0x70))(extraout_x8_02 + 0x70);
      __Unwind_Resume();
      puVar29 = puVar17 + 1;
      uVar37 = *puVar17;
      puVar27 = puVar21 + 1;
      uVar30 = *puVar21;
      uVar26 = uVar37;
      if (uVar30 <= uVar37) {
        uVar26 = uVar30;
      }
      lVar38 = 0;
      if (uVar37 <= uVar30) {
        lVar38 = uVar30 - uVar37;
      }
      for (; uVar26 != 0; uVar26 = uVar26 - 1) {
        uVar40 = puVar27[1];
        uVar39 = *puVar27;
        *(int *)(puVar29 + 2) = (int)puVar27[2];
        puVar29[1] = uVar40;
        *puVar29 = uVar39;
        puVar29 = puVar29 + 3;
        puVar27 = puVar27 + 3;
      }
      if (uVar37 < uVar30) {
        do {
          uVar37 = puVar27[1];
          uVar26 = *puVar27;
          puVar29[2] = puVar27[2];
          puVar29[1] = uVar37;
          *puVar29 = uVar26;
          puVar27 = puVar27 + 3;
          lVar38 = lVar38 + -1;
          puVar29 = puVar29 + 3;
        } while (lVar38 != 0);
      }
      *puVar17 = *puVar21;
      return;
    }
  } while( true );
}



/* Entry: 1096f2b1c; end: 1096f2d53;  */

void FUN_1096f2b1c(undefined8 param_1,long *param_2,undefined8 *param_3,ulong *param_4,ulong param_5
                  )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  long *plVar6;
  code *pcVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuVar12;
  undefined8 **ppuVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong *puVar16;
  long *plVar17;
  long *plVar18;
  ulong *puVar19;
  long *plVar20;
  long *plVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  long extraout_x8;
  long extraout_x8_00;
  byte *extraout_x8_01;
  ulong uVar24;
  long lVar25;
  ulong *puVar26;
  long lVar27;
  ulong *puVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 uVar35;
  long lVar36;
  undefined8 uVar37;
  undefined8 uStack_6e0;
  undefined8 *apuStack_6d8 [7];
  undefined8 uStack_6a0;
  undefined8 *apuStack_698 [7];
  undefined8 uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  uint uStack_640;
  uint uStack_63c;
  ulong uStack_638;
  undefined4 uStack_630;
  uint uStack_628;
  uint uStack_624;
  ulong uStack_620;
  undefined4 uStack_618;
  long lStack_5f8;
  long *plStack_5f0;
  undefined1 *puStack_5e8;
  long *plStack_5e0;
  long *plStack_5d8;
  undefined8 **ppuStack_5d0;
  undefined8 **ppuStack_5c8;
  undefined1 ***pppuStack_5c0;
  code *pcStack_5b8;
  long lStack_5b0;
  undefined8 *apuStack_5a8 [7];
  long lStack_570;
  undefined8 *apuStack_568 [7];
  ulong uStack_530;
  ulong uStack_528;
  undefined4 uStack_520;
  ulong uStack_518;
  undefined1 auStack_510 [72];
  long lStack_4c8;
  undefined1 **ppuStack_490;
  code *pcStack_488;
  long lStack_480;
  undefined8 *apuStack_478 [7];
  long lStack_440;
  undefined8 *apuStack_438 [7];
  ulong uStack_400;
  ulong uStack_3f8;
  undefined4 uStack_3f0;
  ulong uStack_3e8;
  undefined1 auStack_3e0 [72];
  long lStack_398;
  long *plStack_390;
  long *plStack_388;
  long *plStack_380;
  long *plStack_378;
  undefined8 uStack_370;
  long *plStack_368;
  undefined1 *puStack_360;
  code *pcStack_358;
  long lStack_348;
  undefined1 auStack_340 [96];
  long lStack_2e0;
  long lStack_2d8;
  undefined4 uStack_2d0;
  long lStack_2c8;
  undefined1 auStack_2c0 [72];
  long lStack_278;
  undefined1 auStack_270 [96];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  long lStack_1f8;
  undefined1 auStack_1f0 [72];
  long lStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_19c;
  long lStack_190;
  undefined1 auStack_188 [72];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  long lStack_128;
  undefined1 auStack_120 [72];
  undefined8 uStack_d8;
  undefined8 *apuStack_d0 [7];
  undefined8 uStack_98;
  undefined8 *apuStack_90 [7];
  long lStack_58;
  
  uVar23 = (undefined4)(param_5 >> 0x20);
  uVar22 = (undefined4)param_5;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar17 = param_2 + 0xd;
  lStack_1a8 = *plVar17;
  uStack_1a0 = (undefined4)param_2[0xe];
  uStack_19c = *(undefined8 *)((long)param_2 + 0x74);
  if (((param_5 & 1) == 0) && (lStack_190 = param_2[0x10], lStack_190 != 0)) {
    _memcpy(auStack_188,param_2 + 0x11,lStack_190 * 0x18);
  }
  else {
    lStack_190 = 0;
  }
  uStack_d8 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_d0);
  plVar21 = param_3 + 9;
  uStack_98 = param_3[8];
  (**(code **)(*plVar21 + 0x10))(apuStack_90,plVar21);
  FUN_1096f2638(param_1,&lStack_1a8,&uStack_d8);
  (*(code *)*apuStack_90[0])(apuStack_90);
  (*(code *)*apuStack_d0[0])(apuStack_d0);
  FUN_1096f2204(&lStack_278,param_1);
  lStack_1a8 = lStack_278;
  if (lStack_278 != 0) {
    param_4 = (ulong *)(lStack_278 << 5);
    _memcpy(&uStack_1a0,auStack_270);
  }
  uStack_138 = uStack_208;
  uStack_140 = uStack_210;
  uStack_130 = uStack_200;
  lStack_128 = lStack_1f8;
  if (lStack_1f8 != 0) {
    param_4 = (ulong *)(lStack_1f8 * 0x18);
    _memcpy(auStack_120,auStack_1f0);
  }
  lStack_348 = *param_2;
  if (lStack_348 != 0) {
    param_4 = (ulong *)(lStack_348 << 5);
    _memcpy(auStack_340,param_2 + 1);
  }
  lStack_2d8 = param_2[0xe];
  lStack_2e0 = *plVar17;
  uStack_2d0 = (undefined4)param_2[0xf];
  lStack_2c8 = param_2[0x10];
  if (lStack_2c8 != 0) {
    param_4 = (ulong *)(lStack_2c8 * 0x18);
    _memcpy(auStack_2c0,param_2 + 0x11);
  }
  plVar9 = &lStack_1a8;
  plVar18 = &lStack_348;
  FUN_1096f1c24();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_90[0])(apuStack_90);
  (*(code *)*apuStack_d0[0])(apuStack_d0);
  plVar10 = plVar9;
  __Unwind_Resume();
  plVar20 = &lStack_480;
  pcStack_358 = FUN_1096f2d54;
  plVar6 = (long *)CONCAT44(uVar23,uVar22);
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_3f8 = param_4[1];
  uStack_400 = *param_4;
  uStack_3f0 = (undefined4)param_4[2];
  uStack_3e8 = param_4[3];
  plStack_390 = &lStack_278;
  plStack_388 = plVar17;
  plStack_380 = plVar21;
  plStack_378 = &lStack_278;
  uStack_370 = param_1;
  plStack_368 = plVar9;
  puStack_360 = &stack0xfffffffffffffff0;
  if (uStack_3e8 != 0) {
    _memcpy(auStack_3e0,param_4 + 4,uStack_3e8 * 0x18);
  }
  lStack_480 = *plVar6;
  (**(code **)(plVar6[1] + 0x10))(apuStack_478);
  plVar17 = plVar6 + 9;
  lStack_440 = plVar6[8];
  (**(code **)(*plVar17 + 0x10))(apuStack_438,plVar17);
  puVar19 = &uStack_400;
  FUN_1096f342c(extraout_x8);
  (*(code *)*apuStack_438[0])(apuStack_438);
  ppuVar11 = apuStack_478;
  (*(code *)*apuStack_478[0])();
  *(undefined8 *)(extraout_x8 + 0xe8) = 0;
  if (plVar18 != (long *)0x0) {
    lVar27 = 0;
    lVar25 = (long)plVar18 << 5;
    do {
      plVar21 = (long *)(extraout_x8 + 0xf0 + lVar27 * 0x20);
      lVar27 = *plVar10;
      lVar36 = plVar10[3];
      lVar30 = plVar10[2];
      plVar21[1] = plVar10[1];
      *plVar21 = lVar27;
      plVar21[3] = lVar36;
      plVar21[2] = lVar30;
      lVar27 = *(long *)(extraout_x8 + 0xe8) + 1;
      *(long *)(extraout_x8 + 0xe8) = lVar27;
      lVar25 = lVar25 + -0x20;
      plVar10 = plVar10 + 4;
    } while (lVar25 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
    return;
  }
  ___stack_chk_fail();
  plVar21 = &lStack_5b0;
  pcStack_488 = FUN_1096f2e98;
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_490 = &puStack_360;
  if ((char)*puVar19 == '#') {
    uStack_528 = puVar19[1];
    uStack_530 = *puVar19;
    uStack_520 = (undefined4)puVar19[2];
    uStack_518 = puVar19[3];
    if (uStack_518 != 0) {
      _memcpy(auStack_510,puVar19 + 4,uStack_518 * 0x18);
    }
    lStack_5b0 = *plVar20;
    (**(code **)(plVar20[1] + 0x10))(apuStack_5a8);
    plVar18 = plVar20 + 9;
    lStack_570 = plVar20[8];
    (**(code **)(*plVar18 + 0x10))(apuStack_568,plVar18);
    puVar19 = &uStack_530;
    FUN_1096f342c(extraout_x8_00);
    (*(code *)*apuStack_568[0])(apuStack_568);
    ppuVar12 = apuStack_5a8;
    (*(code *)*apuStack_5a8[0])();
    lVar27 = 0;
    lVar25 = 0;
    *(undefined8 *)(extraout_x8_00 + 0xe8) = 0;
    *(undefined8 *)(extraout_x8_00 + 0x150) = 0;
    do {
      puVar1 = (undefined8 *)((long)ppuVar11 + lVar25);
      puVar2 = (undefined8 *)(extraout_x8_00 + 0xf0 + lVar27 * 0x20);
      uVar32 = *puVar1;
      uVar37 = puVar1[3];
      uVar35 = puVar1[2];
      puVar2[1] = puVar1[1];
      *puVar2 = uVar32;
      puVar2[3] = uVar37;
      puVar2[2] = uVar35;
      lVar27 = *(long *)(extraout_x8_00 + 0xe8) + 1;
      *(long *)(extraout_x8_00 + 0xe8) = lVar27;
      lVar30 = *(long *)(extraout_x8_00 + 0x150);
      *(undefined8 *)(extraout_x8_00 + 0x158 + lVar30 * 8) = *puVar1;
      *(long *)(extraout_x8_00 + 0x150) = lVar30 + 1;
      lVar25 = lVar25 + 0x20;
    } while (lVar25 != 0x40);
    plVar17 = &lStack_5b0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
      return;
    }
  }
  else {
    ppuVar11 = (undefined8 **)0x10;
    ___cxa_allocate_exception();
    FUN_10940ceb0();
    ppuVar12 = ppuVar11;
    puVar19 = (ulong *)PTR___ZTISt16invalid_argument_110352248;
    plVar21 = (long *)PTR___ZNSt16invalid_argumentD1Ev_1103461e8;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  ___cxa_free_exception(ppuVar11);
  ppuVar13 = ppuVar12;
  __Unwind_Resume();
  plStack_5f0 = &lStack_278;
  puStack_5e8 = (undefined1 *)&lStack_480;
  plStack_5e0 = plVar17;
  plStack_5d8 = plVar18;
  ppuStack_5d0 = ppuVar12;
  ppuStack_5c8 = ppuVar11;
  pppuStack_5c0 = &ppuStack_490;
  pcStack_5b8 = FUN_1096f3044;
  lStack_5f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_658 = puVar19[1];
  uStack_660 = *puVar19;
  uStack_650 = CONCAT44(uStack_650._4_4_,(int)puVar19[2]);
  uStack_648 = puVar19[3];
  if (uStack_648 != 0) {
    _memcpy(&uStack_640,puVar19 + 4,uStack_648 * 0x18);
  }
  uStack_6e0 = *plVar21;
  (**(code **)(plVar21[1] + 0x10))(apuStack_6d8);
  uStack_6a0 = plVar21[8];
  (**(code **)(plVar21[9] + 0x10))(apuStack_698,plVar21 + 9);
  puVar19 = &uStack_660;
  FUN_1096f342c(extraout_x8_01,puVar19,&uStack_6e0);
  (*(code *)*apuStack_698[0])(apuStack_698);
  (*(code *)*apuStack_6d8[0])(apuStack_6d8);
  lVar27 = *(long *)(extraout_x8_01 + 0x150);
  *(undefined8 ***)(extraout_x8_01 + lVar27 * 8 + 0x158) = ppuVar13;
  *(long *)(extraout_x8_01 + 0x150) = lVar27 + 1;
  uVar24 = *(ulong *)(extraout_x8_01 + 0x18);
  if (uVar24 != 0) {
    lVar27 = uVar24 * 0x18;
    puVar19 = (ulong *)(extraout_x8_01 + 0x20);
    uStack_660 = uVar24;
    _memcpy(&uStack_658,puVar19,lVar27);
    goto LAB_1096f3250;
  }
  puVar16 = (ulong *)(extraout_x8_01 + 0xc);
  uVar8 = (uint)*puVar16;
  uVar24 = (ulong)uVar8;
  uVar5 = *(uint *)(extraout_x8_01 + 0x10);
  uVar15 = *puVar16;
  bVar4 = *extraout_x8_01;
  if (bVar4 - 0x24 < 2) {
    uStack_650 = uVar24;
    uStack_640 = uVar8 >> 1;
    uStack_63c = uVar5 >> 1;
    uStack_638 = (ulong)uStack_640;
    uStack_630 = 1;
    uStack_628 = uStack_640;
    uStack_624 = uVar5 >> 1;
    uStack_620 = (ulong)uStack_640;
    uStack_618 = 1;
    uStack_660 = 3;
    lVar27 = 0x48;
  }
  else {
    if (bVar4 == 0x26) {
      uStack_658 = *puVar16;
      uStack_650 = uVar24 << 1;
      uStack_648 = CONCAT44(uStack_648._4_4_,2);
      uStack_640 = uVar8 >> 1;
      uStack_63c = uVar5 >> 1;
      uStack_638 = uVar24 << 1;
      uStack_630 = 4;
      lVar27 = 0x30;
      uStack_660 = 2;
      goto LAB_1096f3250;
    }
    if (bVar4 != 0x23) {
      pbVar14 = extraout_x8_01;
      FUN_1096f1ebc();
      uVar8 = (uint)pbVar14;
      if (uVar8 < 2) {
        uVar8 = 1;
      }
      uStack_658 = uVar15;
      uStack_650 = uVar24 * uVar8;
      uStack_648 = CONCAT44(uStack_648._4_4_,uVar8);
      uStack_660 = 1;
      lVar27 = 0x18;
      goto LAB_1096f3250;
    }
    uStack_650 = uVar24;
    uStack_640 = uVar8 >> 1;
    uStack_63c = uVar5 >> 1;
    uStack_638 = uVar24;
    uStack_660 = 2;
    uStack_630 = 2;
    lVar27 = 0x30;
  }
  uStack_648 = CONCAT44(uStack_648._4_4_,1);
  uStack_658 = *puVar16;
  uStack_650 = uVar24;
LAB_1096f3250:
  lVar30 = 0;
  lVar25 = *(long *)(extraout_x8_01 + 0xe8);
  lVar36 = 8;
  do {
    lVar31 = 0;
    lVar3 = 0;
    if (ppuVar13 != (undefined8 **)0x0) {
      lVar3 = (long)ppuVar13 + lVar30;
    }
    pbVar14 = extraout_x8_01 + lVar25 * 0x20 + 0xf0;
    *(long *)pbVar14 = lVar3;
    *(undefined4 *)(pbVar14 + 0x18) = *(undefined4 *)((long)&uStack_650 + lVar36);
    lVar25 = *(long *)((long)&uStack_660 + lVar36);
    *(long *)(pbVar14 + 0x10) = *(long *)((long)&uStack_658 + lVar36);
    *(long *)(pbVar14 + 8) = lVar25;
    lVar25 = *(long *)(extraout_x8_01 + 0xe8) + 1;
    *(long *)(extraout_x8_01 + 0xe8) = lVar25;
    uVar15 = *(ulong *)((long)&uStack_658 + lVar36);
    uVar24 = -uVar15;
    if (-1 < (long)uVar15) {
      uVar24 = uVar15;
    }
    uVar8 = *(uint *)((long)&uStack_660 + lVar36 + 4);
    puVar16 = (ulong *)(ulong)uVar8;
    if (uVar15 != 0 && uVar8 != 0) {
      uVar5 = 0;
      if (uVar8 != 0) {
        uVar5 = 0x10000000 / uVar8;
      }
      if (uVar5 < uVar24) {
        plVar17 = (long *)0x10;
        ___cxa_allocate_exception();
        __ZNSt11logic_errorC2EPKc();
        *plVar17 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
        ___cxa_throw(plVar17,PTR___ZTISt12length_error_110352238,
                     PTR___ZNSt12length_errorD1Ev_110346170);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1096f335c);
        (*pcVar7)();
      }
      lVar31 = uVar24 * (long)puVar16;
    }
    lVar30 = lVar31 + lVar30;
    lVar3 = (long)&uStack_648 + lVar36;
    lVar36 = lVar36 + 0x18;
    if (lVar3 == (long)&uStack_658 + lVar27) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5f8) {
        return;
      }
      ___stack_chk_fail();
      FUN_1096f2328(extraout_x8_01);
      (*(code *)**(undefined8 **)(extraout_x8_01 + 0xb0))();
      (*(code *)**(undefined8 **)(extraout_x8_01 + 0x70))(extraout_x8_01 + 0x70);
      __Unwind_Resume();
      puVar28 = puVar16 + 1;
      uVar15 = *puVar16;
      puVar26 = puVar19 + 1;
      uVar29 = *puVar19;
      uVar24 = uVar15;
      if (uVar29 <= uVar15) {
        uVar24 = uVar29;
      }
      lVar27 = 0;
      if (uVar15 <= uVar29) {
        lVar27 = uVar29 - uVar15;
      }
      for (; uVar24 != 0; uVar24 = uVar24 - 1) {
        uVar34 = puVar26[1];
        uVar33 = *puVar26;
        *(int *)(puVar28 + 2) = (int)puVar26[2];
        puVar28[1] = uVar34;
        *puVar28 = uVar33;
        puVar28 = puVar28 + 3;
        puVar26 = puVar26 + 3;
      }
      if (uVar15 < uVar29) {
        do {
          uVar15 = puVar26[1];
          uVar24 = *puVar26;
          puVar28[2] = puVar26[2];
          puVar28[1] = uVar15;
          *puVar28 = uVar24;
          puVar26 = puVar26 + 3;
          lVar27 = lVar27 + -1;
          puVar28 = puVar28 + 3;
        } while (lVar27 != 0);
      }
      *puVar16 = *puVar19;
      return;
    }
  } while( true );
}



/* Entry: 1096f2d54; end: 1096f2e97;  */

void FUN_1096f2d54(long param_1,undefined8 *param_2,long param_3,ulong *param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong *puVar11;
  long *plVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long extraout_x8;
  long lVar16;
  byte *extraout_x8_00;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  ulong *puVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uStack_390;
  undefined8 *apuStack_388 [7];
  undefined8 uStack_350;
  undefined8 *apuStack_348 [7];
  undefined8 uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  uint uStack_2f0;
  uint uStack_2ec;
  ulong uStack_2e8;
  undefined4 uStack_2e0;
  uint uStack_2d8;
  uint uStack_2d4;
  ulong uStack_2d0;
  undefined4 uStack_2c8;
  long lStack_2a8;
  undefined8 uStack_260;
  undefined8 *apuStack_258 [7];
  undefined8 uStack_220;
  undefined8 *apuStack_218 [7];
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined4 uStack_1d0;
  ulong uStack_1c8;
  undefined1 auStack_1c0 [72];
  long lStack_178;
  undefined8 uStack_130;
  undefined8 *apuStack_128 [7];
  undefined8 uStack_f0;
  undefined8 *apuStack_e8 [7];
  ulong uStack_b0;
  ulong uStack_a8;
  undefined4 uStack_a0;
  ulong uStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  puVar14 = &uStack_130;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a8 = param_4[1];
  uStack_b0 = *param_4;
  uStack_a0 = (undefined4)param_4[2];
  uStack_98 = param_4[3];
  if (uStack_98 != 0) {
    _memcpy(auStack_90,param_4 + 4,uStack_98 * 0x18);
  }
  uStack_130 = *param_5;
  (**(code **)(param_5[1] + 0x10))(apuStack_128);
  uStack_f0 = param_5[8];
  (**(code **)(param_5[9] + 0x10))(apuStack_e8,param_5 + 9);
  puVar13 = &uStack_b0;
  FUN_1096f342c(param_1);
  (*(code *)*apuStack_e8[0])(apuStack_e8);
  ppuVar7 = apuStack_128;
  (*(code *)*apuStack_128[0])();
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (param_3 != 0) {
    lVar19 = 0;
    param_3 = param_3 << 5;
    do {
      puVar15 = (undefined8 *)(param_1 + 0xf0 + lVar19 * 0x20);
      uVar25 = *param_2;
      uVar29 = param_2[3];
      uVar28 = param_2[2];
      puVar15[1] = param_2[1];
      *puVar15 = uVar25;
      puVar15[3] = uVar29;
      puVar15[2] = uVar28;
      lVar19 = *(long *)(param_1 + 0xe8) + 1;
      *(long *)(param_1 + 0xe8) = lVar19;
      param_3 = param_3 + -0x20;
      param_2 = param_2 + 4;
    } while (param_3 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar15 = &uStack_260;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((char)*puVar13 == '#') {
    uStack_1d8 = puVar13[1];
    uStack_1e0 = *puVar13;
    uStack_1d0 = (undefined4)puVar13[2];
    uStack_1c8 = puVar13[3];
    if (uStack_1c8 != 0) {
      _memcpy(auStack_1c0,puVar13 + 4,uStack_1c8 * 0x18);
    }
    uStack_260 = *puVar14;
    (**(code **)(puVar14[1] + 0x10))(apuStack_258);
    uStack_220 = puVar14[8];
    (**(code **)(puVar14[9] + 0x10))(apuStack_218,puVar14 + 9);
    puVar13 = &uStack_1e0;
    FUN_1096f342c(extraout_x8);
    (*(code *)*apuStack_218[0])(apuStack_218);
    ppuVar8 = apuStack_258;
    (*(code *)*apuStack_258[0])();
    lVar19 = 0;
    lVar16 = 0;
    *(undefined8 *)(extraout_x8 + 0xe8) = 0;
    *(undefined8 *)(extraout_x8 + 0x150) = 0;
    do {
      puVar14 = (undefined8 *)((long)ppuVar7 + lVar16);
      puVar1 = (undefined8 *)(extraout_x8 + 0xf0 + lVar19 * 0x20);
      uVar25 = *puVar14;
      uVar29 = puVar14[3];
      uVar28 = puVar14[2];
      puVar1[1] = puVar14[1];
      *puVar1 = uVar25;
      puVar1[3] = uVar29;
      puVar1[2] = uVar28;
      lVar19 = *(long *)(extraout_x8 + 0xe8) + 1;
      *(long *)(extraout_x8 + 0xe8) = lVar19;
      lVar23 = *(long *)(extraout_x8 + 0x150);
      *(undefined8 *)(extraout_x8 + 0x158 + lVar23 * 8) = *puVar14;
      *(long *)(extraout_x8 + 0x150) = lVar23 + 1;
      lVar16 = lVar16 + 0x20;
    } while (lVar16 != 0x40);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
      return;
    }
  }
  else {
    ppuVar7 = (undefined8 **)0x10;
    ___cxa_allocate_exception();
    FUN_10940ceb0();
    ppuVar8 = ppuVar7;
    puVar13 = (ulong *)PTR___ZTISt16invalid_argument_110352248;
    puVar15 = (undefined8 *)PTR___ZNSt16invalid_argumentD1Ev_1103461e8;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  ___cxa_free_exception(ppuVar7);
  __Unwind_Resume();
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_308 = puVar13[1];
  uStack_310 = *puVar13;
  uStack_300 = CONCAT44(uStack_300._4_4_,(int)puVar13[2]);
  uStack_2f8 = puVar13[3];
  if (uStack_2f8 != 0) {
    _memcpy(&uStack_2f0,puVar13 + 4,uStack_2f8 * 0x18);
  }
  uStack_390 = *puVar15;
  (**(code **)(puVar15[1] + 0x10))(apuStack_388);
  uStack_350 = puVar15[8];
  (**(code **)(puVar15[9] + 0x10))(apuStack_348,puVar15 + 9);
  puVar13 = &uStack_310;
  FUN_1096f342c(extraout_x8_00,puVar13,&uStack_390);
  (*(code *)*apuStack_348[0])(apuStack_348);
  (*(code *)*apuStack_388[0])(apuStack_388);
  lVar19 = *(long *)(extraout_x8_00 + 0x150);
  *(undefined8 ***)(extraout_x8_00 + lVar19 * 8 + 0x158) = ppuVar8;
  *(long *)(extraout_x8_00 + 0x150) = lVar19 + 1;
  uVar17 = *(ulong *)(extraout_x8_00 + 0x18);
  if (uVar17 != 0) {
    lVar19 = uVar17 * 0x18;
    puVar13 = (ulong *)(extraout_x8_00 + 0x20);
    uStack_310 = uVar17;
    _memcpy(&uStack_308,puVar13,lVar19);
    goto LAB_1096f3250;
  }
  puVar11 = (ulong *)(extraout_x8_00 + 0xc);
  uVar6 = (uint)*puVar11;
  uVar17 = (ulong)uVar6;
  uVar4 = *(uint *)(extraout_x8_00 + 0x10);
  uVar10 = *puVar11;
  bVar3 = *extraout_x8_00;
  if (bVar3 - 0x24 < 2) {
    uStack_300 = uVar17;
    uStack_2f0 = uVar6 >> 1;
    uStack_2ec = uVar4 >> 1;
    uStack_2e8 = (ulong)uStack_2f0;
    uStack_2e0 = 1;
    uStack_2d8 = uStack_2f0;
    uStack_2d4 = uVar4 >> 1;
    uStack_2d0 = (ulong)uStack_2f0;
    uStack_2c8 = 1;
    uStack_310 = 3;
    lVar19 = 0x48;
  }
  else {
    if (bVar3 == 0x26) {
      uStack_308 = *puVar11;
      uStack_300 = uVar17 << 1;
      uStack_2f8 = CONCAT44(uStack_2f8._4_4_,2);
      uStack_2f0 = uVar6 >> 1;
      uStack_2ec = uVar4 >> 1;
      uStack_2e8 = uVar17 << 1;
      uStack_2e0 = 4;
      lVar19 = 0x30;
      uStack_310 = 2;
      goto LAB_1096f3250;
    }
    if (bVar3 != 0x23) {
      pbVar9 = extraout_x8_00;
      FUN_1096f1ebc();
      uVar6 = (uint)pbVar9;
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      uStack_308 = uVar10;
      uStack_300 = uVar17 * uVar6;
      uStack_2f8 = CONCAT44(uStack_2f8._4_4_,uVar6);
      uStack_310 = 1;
      lVar19 = 0x18;
      goto LAB_1096f3250;
    }
    uStack_300 = uVar17;
    uStack_2f0 = uVar6 >> 1;
    uStack_2ec = uVar4 >> 1;
    uStack_2e8 = uVar17;
    uStack_310 = 2;
    uStack_2e0 = 2;
    lVar19 = 0x30;
  }
  uStack_2f8 = CONCAT44(uStack_2f8._4_4_,1);
  uStack_308 = *puVar11;
  uStack_300 = uVar17;
LAB_1096f3250:
  lVar23 = 0;
  lVar16 = *(long *)(extraout_x8_00 + 0xe8);
  lVar21 = 8;
  do {
    lVar24 = 0;
    lVar2 = 0;
    if (ppuVar8 != (undefined8 **)0x0) {
      lVar2 = (long)ppuVar8 + lVar23;
    }
    pbVar9 = extraout_x8_00 + lVar16 * 0x20 + 0xf0;
    *(long *)pbVar9 = lVar2;
    *(undefined4 *)(pbVar9 + 0x18) = *(undefined4 *)((long)&uStack_300 + lVar21);
    lVar16 = *(long *)((long)&uStack_310 + lVar21);
    *(long *)(pbVar9 + 0x10) = *(long *)((long)&uStack_308 + lVar21);
    *(long *)(pbVar9 + 8) = lVar16;
    lVar16 = *(long *)(extraout_x8_00 + 0xe8) + 1;
    *(long *)(extraout_x8_00 + 0xe8) = lVar16;
    uVar10 = *(ulong *)((long)&uStack_308 + lVar21);
    uVar17 = -uVar10;
    if (-1 < (long)uVar10) {
      uVar17 = uVar10;
    }
    uVar6 = *(uint *)((long)&uStack_310 + lVar21 + 4);
    puVar11 = (ulong *)(ulong)uVar6;
    if (uVar10 != 0 && uVar6 != 0) {
      uVar4 = 0;
      if (uVar6 != 0) {
        uVar4 = 0x10000000 / uVar6;
      }
      if (uVar4 < uVar17) {
        plVar12 = (long *)0x10;
        ___cxa_allocate_exception();
        __ZNSt11logic_errorC2EPKc();
        *plVar12 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
        ___cxa_throw(plVar12,PTR___ZTISt12length_error_110352238,
                     PTR___ZNSt12length_errorD1Ev_110346170);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1096f335c);
        (*pcVar5)();
      }
      lVar24 = uVar17 * (long)puVar11;
    }
    lVar23 = lVar24 + lVar23;
    lVar2 = (long)&uStack_2f8 + lVar21;
    lVar21 = lVar21 + 0x18;
    if (lVar2 == (long)&uStack_308 + lVar19) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
        return;
      }
      ___stack_chk_fail();
      FUN_1096f2328(extraout_x8_00);
      (*(code *)**(undefined8 **)(extraout_x8_00 + 0xb0))();
      (*(code *)**(undefined8 **)(extraout_x8_00 + 0x70))(extraout_x8_00 + 0x70);
      __Unwind_Resume();
      puVar20 = puVar11 + 1;
      uVar10 = *puVar11;
      puVar18 = puVar13 + 1;
      uVar22 = *puVar13;
      uVar17 = uVar10;
      if (uVar22 <= uVar10) {
        uVar17 = uVar22;
      }
      lVar19 = 0;
      if (uVar10 <= uVar22) {
        lVar19 = uVar22 - uVar10;
      }
      for (; uVar17 != 0; uVar17 = uVar17 - 1) {
        uVar27 = puVar18[1];
        uVar26 = *puVar18;
        *(int *)(puVar20 + 2) = (int)puVar18[2];
        puVar20[1] = uVar27;
        *puVar20 = uVar26;
        puVar20 = puVar20 + 3;
        puVar18 = puVar18 + 3;
      }
      if (uVar10 < uVar22) {
        do {
          uVar10 = puVar18[1];
          uVar17 = *puVar18;
          puVar20[2] = puVar18[2];
          puVar20[1] = uVar10;
          *puVar20 = uVar17;
          puVar18 = puVar18 + 3;
          lVar19 = lVar19 + -1;
          puVar20 = puVar20 + 3;
        } while (lVar19 != 0);
      }
      *puVar11 = *puVar13;
      return;
    }
  } while( true );
}



/* Entry: 1096f2e98; end: 1096f3043;  */

void FUN_1096f2e98(long param_1,undefined8 **param_2,ulong *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  undefined8 **ppuVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong *puVar11;
  long *plVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  long lVar15;
  byte *extraout_x8;
  ulong uVar16;
  ulong *puVar17;
  ulong *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uStack_260;
  undefined8 *apuStack_258 [7];
  undefined8 uStack_220;
  undefined8 *apuStack_218 [7];
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  uint uStack_1c0;
  uint uStack_1bc;
  ulong uStack_1b8;
  undefined4 uStack_1b0;
  uint uStack_1a8;
  uint uStack_1a4;
  ulong uStack_1a0;
  undefined4 uStack_198;
  long lStack_178;
  undefined8 uStack_130;
  undefined8 *apuStack_128 [7];
  undefined8 uStack_f0;
  undefined8 *apuStack_e8 [7];
  ulong uStack_b0;
  ulong uStack_a8;
  undefined4 uStack_a0;
  ulong uStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  puVar14 = &uStack_130;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((char)*param_3 == '#') {
    uStack_a8 = param_3[1];
    uStack_b0 = *param_3;
    uStack_a0 = (undefined4)param_3[2];
    uStack_98 = param_3[3];
    if (uStack_98 != 0) {
      _memcpy(auStack_90,param_3 + 4,uStack_98 * 0x18);
    }
    uStack_130 = *param_4;
    (**(code **)(param_4[1] + 0x10))(apuStack_128);
    uStack_f0 = param_4[8];
    (**(code **)(param_4[9] + 0x10))(apuStack_e8,param_4 + 9);
    puVar13 = &uStack_b0;
    FUN_1096f342c(param_1);
    (*(code *)*apuStack_e8[0])(apuStack_e8);
    ppuVar8 = apuStack_128;
    (*(code *)*apuStack_128[0])();
    lVar19 = 0;
    lVar15 = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    do {
      puVar1 = (undefined8 *)((long)param_2 + lVar15);
      puVar2 = (undefined8 *)(param_1 + 0xf0 + lVar19 * 0x20);
      uVar24 = *puVar1;
      uVar28 = puVar1[3];
      uVar27 = puVar1[2];
      puVar2[1] = puVar1[1];
      *puVar2 = uVar24;
      puVar2[3] = uVar28;
      puVar2[2] = uVar27;
      lVar19 = *(long *)(param_1 + 0xe8) + 1;
      *(long *)(param_1 + 0xe8) = lVar19;
      lVar22 = *(long *)(param_1 + 0x150);
      *(undefined8 *)(param_1 + 0x158 + lVar22 * 8) = *puVar1;
      *(long *)(param_1 + 0x150) = lVar22 + 1;
      lVar15 = lVar15 + 0x20;
    } while (lVar15 != 0x40);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
  }
  else {
    param_2 = (undefined8 **)0x10;
    ___cxa_allocate_exception();
    FUN_10940ceb0();
    ppuVar8 = param_2;
    puVar13 = (ulong *)PTR___ZTISt16invalid_argument_110352248;
    puVar14 = (undefined8 *)PTR___ZNSt16invalid_argumentD1Ev_1103461e8;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  ___cxa_free_exception(param_2);
  __Unwind_Resume();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1d8 = puVar13[1];
  uStack_1e0 = *puVar13;
  uStack_1d0 = CONCAT44(uStack_1d0._4_4_,(int)puVar13[2]);
  uStack_1c8 = puVar13[3];
  if (uStack_1c8 != 0) {
    _memcpy(&uStack_1c0,puVar13 + 4,uStack_1c8 * 0x18);
  }
  uStack_260 = *puVar14;
  (**(code **)(puVar14[1] + 0x10))(apuStack_258);
  uStack_220 = puVar14[8];
  (**(code **)(puVar14[9] + 0x10))(apuStack_218,puVar14 + 9);
  puVar13 = &uStack_1e0;
  FUN_1096f342c(extraout_x8,puVar13,&uStack_260);
  (*(code *)*apuStack_218[0])(apuStack_218);
  (*(code *)*apuStack_258[0])(apuStack_258);
  lVar19 = *(long *)(extraout_x8 + 0x150);
  *(undefined8 ***)(extraout_x8 + lVar19 * 8 + 0x158) = ppuVar8;
  *(long *)(extraout_x8 + 0x150) = lVar19 + 1;
  uVar16 = *(ulong *)(extraout_x8 + 0x18);
  if (uVar16 != 0) {
    lVar19 = uVar16 * 0x18;
    puVar13 = (ulong *)(extraout_x8 + 0x20);
    uStack_1e0 = uVar16;
    _memcpy(&uStack_1d8,puVar13,lVar19);
    goto LAB_1096f3250;
  }
  puVar11 = (ulong *)(extraout_x8 + 0xc);
  uVar7 = (uint)*puVar11;
  uVar16 = (ulong)uVar7;
  uVar5 = *(uint *)(extraout_x8 + 0x10);
  uVar10 = *puVar11;
  bVar4 = *extraout_x8;
  if (bVar4 - 0x24 < 2) {
    uStack_1d0 = uVar16;
    uStack_1c0 = uVar7 >> 1;
    uStack_1bc = uVar5 >> 1;
    uStack_1b8 = (ulong)uStack_1c0;
    uStack_1b0 = 1;
    uStack_1a8 = uStack_1c0;
    uStack_1a4 = uVar5 >> 1;
    uStack_1a0 = (ulong)uStack_1c0;
    uStack_198 = 1;
    uStack_1e0 = 3;
    lVar19 = 0x48;
  }
  else {
    if (bVar4 == 0x26) {
      uStack_1d8 = *puVar11;
      uStack_1d0 = uVar16 << 1;
      uStack_1c8 = CONCAT44(uStack_1c8._4_4_,2);
      uStack_1c0 = uVar7 >> 1;
      uStack_1bc = uVar5 >> 1;
      uStack_1b8 = uVar16 << 1;
      uStack_1b0 = 4;
      lVar19 = 0x30;
      uStack_1e0 = 2;
      goto LAB_1096f3250;
    }
    if (bVar4 != 0x23) {
      pbVar9 = extraout_x8;
      FUN_1096f1ebc();
      uVar7 = (uint)pbVar9;
      if (uVar7 < 2) {
        uVar7 = 1;
      }
      uStack_1d8 = uVar10;
      uStack_1d0 = uVar16 * uVar7;
      uStack_1c8 = CONCAT44(uStack_1c8._4_4_,uVar7);
      uStack_1e0 = 1;
      lVar19 = 0x18;
      goto LAB_1096f3250;
    }
    uStack_1d0 = uVar16;
    uStack_1c0 = uVar7 >> 1;
    uStack_1bc = uVar5 >> 1;
    uStack_1b8 = uVar16;
    uStack_1e0 = 2;
    uStack_1b0 = 2;
    lVar19 = 0x30;
  }
  uStack_1c8 = CONCAT44(uStack_1c8._4_4_,1);
  uStack_1d8 = *puVar11;
  uStack_1d0 = uVar16;
LAB_1096f3250:
  lVar22 = 0;
  lVar15 = *(long *)(extraout_x8 + 0xe8);
  lVar20 = 8;
  do {
    lVar23 = 0;
    lVar3 = 0;
    if (ppuVar8 != (undefined8 **)0x0) {
      lVar3 = (long)ppuVar8 + lVar22;
    }
    pbVar9 = extraout_x8 + lVar15 * 0x20 + 0xf0;
    *(long *)pbVar9 = lVar3;
    *(undefined4 *)(pbVar9 + 0x18) = *(undefined4 *)((long)&uStack_1d0 + lVar20);
    lVar15 = *(long *)((long)&uStack_1e0 + lVar20);
    *(long *)(pbVar9 + 0x10) = *(long *)((long)&uStack_1d8 + lVar20);
    *(long *)(pbVar9 + 8) = lVar15;
    lVar15 = *(long *)(extraout_x8 + 0xe8) + 1;
    *(long *)(extraout_x8 + 0xe8) = lVar15;
    uVar10 = *(ulong *)((long)&uStack_1d8 + lVar20);
    uVar16 = -uVar10;
    if (-1 < (long)uVar10) {
      uVar16 = uVar10;
    }
    uVar7 = *(uint *)((long)&uStack_1e0 + lVar20 + 4);
    puVar11 = (ulong *)(ulong)uVar7;
    if (uVar10 != 0 && uVar7 != 0) {
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = 0x10000000 / uVar7;
      }
      if (uVar5 < uVar16) {
        plVar12 = (long *)0x10;
        ___cxa_allocate_exception();
        __ZNSt11logic_errorC2EPKc();
        *plVar12 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
        ___cxa_throw(plVar12,PTR___ZTISt12length_error_110352238,
                     PTR___ZNSt12length_errorD1Ev_110346170);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1096f335c);
        (*pcVar6)();
      }
      lVar23 = uVar16 * (long)puVar11;
    }
    lVar22 = lVar23 + lVar22;
    lVar3 = (long)&uStack_1c8 + lVar20;
    lVar20 = lVar20 + 0x18;
    if (lVar3 == (long)&uStack_1d8 + lVar19) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
        return;
      }
      ___stack_chk_fail();
      FUN_1096f2328(extraout_x8);
      (*(code *)**(undefined8 **)(extraout_x8 + 0xb0))();
      (*(code *)**(undefined8 **)(extraout_x8 + 0x70))(extraout_x8 + 0x70);
      __Unwind_Resume();
      puVar18 = puVar11 + 1;
      uVar10 = *puVar11;
      puVar17 = puVar13 + 1;
      uVar21 = *puVar13;
      uVar16 = uVar10;
      if (uVar21 <= uVar10) {
        uVar16 = uVar21;
      }
      lVar19 = 0;
      if (uVar10 <= uVar21) {
        lVar19 = uVar21 - uVar10;
      }
      for (; uVar16 != 0; uVar16 = uVar16 - 1) {
        uVar26 = puVar17[1];
        uVar25 = *puVar17;
        *(int *)(puVar18 + 2) = (int)puVar17[2];
        puVar18[1] = uVar26;
        *puVar18 = uVar25;
        puVar18 = puVar18 + 3;
        puVar17 = puVar17 + 3;
      }
      if (uVar10 < uVar21) {
        do {
          uVar10 = puVar17[1];
          uVar16 = *puVar17;
          puVar18[2] = puVar17[2];
          puVar18[1] = uVar10;
          *puVar18 = uVar16;
          puVar17 = puVar17 + 3;
          lVar19 = lVar19 + -1;
          puVar18 = puVar18 + 3;
        } while (lVar19 != 0);
      }
      *puVar11 = *puVar13;
      return;
    }
  } while( true );
}



/* Entry: 1096f3044; end: 1096f33a3;  */

void FUN_1096f3044(byte *param_1,long param_2,ulong *param_3,undefined8 *param_4)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong *puVar8;
  long *plVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uStack_130;
  undefined8 *apuStack_128 [7];
  undefined8 uStack_f0;
  undefined8 *apuStack_e8 [7];
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  uint uStack_90;
  uint uStack_8c;
  ulong uStack_88;
  undefined4 uStack_80;
  uint uStack_78;
  uint uStack_74;
  ulong uStack_70;
  undefined4 uStack_68;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a8 = param_3[1];
  uStack_b0 = *param_3;
  uStack_a0 = CONCAT44(uStack_a0._4_4_,(int)param_3[2]);
  uStack_98 = param_3[3];
  if (uStack_98 != 0) {
    _memcpy(&uStack_90,param_3 + 4,uStack_98 * 0x18);
  }
  uStack_130 = *param_4;
  (**(code **)(param_4[1] + 0x10))(apuStack_128);
  uStack_f0 = param_4[8];
  (**(code **)(param_4[9] + 0x10))(apuStack_e8,param_4 + 9);
  puVar10 = &uStack_b0;
  FUN_1096f342c(param_1,puVar10,&uStack_130);
  (*(code *)*apuStack_e8[0])(apuStack_e8);
  (*(code *)*apuStack_128[0])(apuStack_128);
  lVar11 = *(long *)(param_1 + 0x150);
  *(long *)(param_1 + lVar11 * 8 + 0x158) = param_2;
  *(long *)(param_1 + 0x150) = lVar11 + 1;
  uVar12 = *(ulong *)(param_1 + 0x18);
  if (uVar12 != 0) {
    lVar11 = uVar12 * 0x18;
    puVar10 = (ulong *)(param_1 + 0x20);
    uStack_b0 = uVar12;
    _memcpy(&uStack_a8,puVar10,lVar11);
    goto LAB_1096f3250;
  }
  puVar8 = (ulong *)(param_1 + 0xc);
  uVar5 = (uint)*puVar8;
  uVar12 = (ulong)uVar5;
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar7 = *puVar8;
  bVar2 = *param_1;
  if (bVar2 - 0x24 < 2) {
    uStack_a0 = uVar12;
    uStack_90 = uVar5 >> 1;
    uStack_8c = uVar3 >> 1;
    uStack_88 = (ulong)uStack_90;
    uStack_80 = 1;
    uStack_78 = uStack_90;
    uStack_74 = uVar3 >> 1;
    uStack_70 = (ulong)uStack_90;
    uStack_68 = 1;
    uStack_b0 = 3;
    lVar11 = 0x48;
  }
  else {
    if (bVar2 == 0x26) {
      uStack_a8 = *puVar8;
      uStack_a0 = uVar12 << 1;
      uStack_98 = CONCAT44(uStack_98._4_4_,2);
      uStack_90 = uVar5 >> 1;
      uStack_8c = uVar3 >> 1;
      uStack_88 = uVar12 << 1;
      uStack_80 = 4;
      lVar11 = 0x30;
      uStack_b0 = 2;
      goto LAB_1096f3250;
    }
    if (bVar2 != 0x23) {
      pbVar6 = param_1;
      FUN_1096f1ebc();
      uVar5 = (uint)pbVar6;
      if (uVar5 < 2) {
        uVar5 = 1;
      }
      uStack_a8 = uVar7;
      uStack_a0 = uVar12 * uVar5;
      uStack_98 = CONCAT44(uStack_98._4_4_,uVar5);
      uStack_b0 = 1;
      lVar11 = 0x18;
      goto LAB_1096f3250;
    }
    uStack_a0 = uVar12;
    uStack_90 = uVar5 >> 1;
    uStack_8c = uVar3 >> 1;
    uStack_88 = uVar12;
    uStack_b0 = 2;
    uStack_80 = 2;
    lVar11 = 0x30;
  }
  uStack_98 = CONCAT44(uStack_98._4_4_,1);
  uStack_a8 = *puVar8;
  uStack_a0 = uVar12;
LAB_1096f3250:
  lVar13 = 0;
  lVar18 = *(long *)(param_1 + 0xe8);
  lVar16 = 8;
  do {
    lVar19 = 0;
    lVar1 = 0;
    if (param_2 != 0) {
      lVar1 = param_2 + lVar13;
    }
    pbVar6 = param_1 + lVar18 * 0x20 + 0xf0;
    *(long *)pbVar6 = lVar1;
    *(undefined4 *)(pbVar6 + 0x18) = *(undefined4 *)((long)&uStack_a0 + lVar16);
    lVar18 = *(long *)((long)&uStack_b0 + lVar16);
    *(long *)(pbVar6 + 0x10) = *(long *)((long)&uStack_a8 + lVar16);
    *(long *)(pbVar6 + 8) = lVar18;
    lVar18 = *(long *)(param_1 + 0xe8) + 1;
    *(long *)(param_1 + 0xe8) = lVar18;
    uVar7 = *(ulong *)((long)&uStack_a8 + lVar16);
    uVar12 = -uVar7;
    if (-1 < (long)uVar7) {
      uVar12 = uVar7;
    }
    uVar5 = *(uint *)((long)&uStack_b0 + lVar16 + 4);
    puVar8 = (ulong *)(ulong)uVar5;
    if (uVar7 != 0 && uVar5 != 0) {
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar3 = 0x10000000 / uVar5;
      }
      if (uVar3 < uVar12) {
        plVar9 = (long *)0x10;
        ___cxa_allocate_exception();
        __ZNSt11logic_errorC2EPKc();
        *plVar9 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
        ___cxa_throw(plVar9,PTR___ZTISt12length_error_110352238,
                     PTR___ZNSt12length_errorD1Ev_110346170);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1096f335c);
        (*pcVar4)();
      }
      lVar19 = uVar12 * (long)puVar8;
    }
    lVar13 = lVar19 + lVar13;
    lVar1 = (long)&uStack_98 + lVar16;
    lVar16 = lVar16 + 0x18;
    if (lVar1 == (long)&uStack_a8 + lVar11) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return;
      }
      ___stack_chk_fail();
      FUN_1096f2328(param_1);
      (*(code *)**(undefined8 **)(param_1 + 0xb0))();
      (*(code *)**(undefined8 **)(param_1 + 0x70))(param_1 + 0x70);
      __Unwind_Resume();
      puVar15 = puVar8 + 1;
      uVar7 = *puVar8;
      puVar14 = puVar10 + 1;
      uVar17 = *puVar10;
      uVar12 = uVar7;
      if (uVar17 <= uVar7) {
        uVar12 = uVar17;
      }
      lVar11 = 0;
      if (uVar7 <= uVar17) {
        lVar11 = uVar17 - uVar7;
      }
      for (; uVar12 != 0; uVar12 = uVar12 - 1) {
        uVar21 = puVar14[1];
        uVar20 = *puVar14;
        *(int *)(puVar15 + 2) = (int)puVar14[2];
        puVar15[1] = uVar21;
        *puVar15 = uVar20;
        puVar15 = puVar15 + 3;
        puVar14 = puVar14 + 3;
      }
      if (uVar7 < uVar17) {
        do {
          uVar7 = puVar14[1];
          uVar12 = *puVar14;
          puVar15[2] = puVar14[2];
          puVar15[1] = uVar7;
          *puVar15 = uVar12;
          puVar14 = puVar14 + 3;
          lVar11 = lVar11 + -1;
          puVar15 = puVar15 + 3;
        } while (lVar11 != 0);
      }
      *puVar8 = *puVar10;
      return;
    }
  } while( true );
}



/* Entry: 1096f33a4; end: 1096f342b;  */

void FUN_1096f33a4(ulong *param_1,ulong *param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  puVar3 = param_1 + 1;
  uVar4 = *param_1;
  puVar2 = param_2 + 1;
  uVar5 = *param_2;
  uVar7 = uVar4;
  if (uVar5 <= uVar4) {
    uVar7 = uVar5;
  }
  lVar1 = 0;
  if (uVar4 <= uVar5) {
    lVar1 = uVar5 - uVar4;
  }
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    uVar8 = puVar2[1];
    uVar6 = *puVar2;
    *(int *)(puVar3 + 2) = (int)puVar2[2];
    puVar3[1] = uVar8;
    *puVar3 = uVar6;
    puVar3 = puVar3 + 3;
    puVar2 = puVar2 + 3;
  }
  if (uVar4 < uVar5) {
    do {
      uVar4 = puVar2[1];
      uVar7 = *puVar2;
      puVar3[2] = puVar2[2];
      puVar3[1] = uVar4;
      *puVar3 = uVar7;
      puVar2 = puVar2 + 3;
      lVar1 = lVar1 + -1;
      puVar3 = puVar3 + 3;
    } while (lVar1 != 0);
  }
  *param_1 = *param_2;
  return;
}



/* Entry: 1096f342c; end: 1096f34d3;  */

undefined8 * FUN_1096f342c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = 0;
  lVar1 = param_2[3];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    param_2 = param_2 + 4;
    puVar2 = param_1 + 4;
    do {
      uVar4 = param_2[1];
      uVar3 = *param_2;
      puVar2[2] = param_2[2];
      puVar2[1] = uVar4;
      *puVar2 = uVar3;
      param_2 = param_2 + 3;
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 3;
    } while (lVar1 != 0);
  }
  param_1[0xd] = *param_3;
  (**(code **)(param_3[1] + 0x10))(param_1 + 0xe);
  param_1[0x15] = param_3[8];
  (**(code **)(param_3[9] + 0x10))(param_1 + 0x16,param_3 + 9);
  param_1[0x1d] = 0;
  param_1[0x2a] = 0;
  return param_1;
}



/* Entry: 1096f34d4; end: 1096f370f;  */

void FUN_1096f34d4(byte *param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint uStack_70;
  uint uStack_6c;
  ulong uStack_68;
  uint uStack_60;
  uint uStack_58;
  uint uStack_54;
  ulong uStack_50;
  undefined4 uStack_48;
  uint uStack_40;
  uint uStack_3c;
  ulong uStack_38;
  undefined4 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x18) == 0) {
    uStack_70 = *(uint *)(param_1 + 0xc);
    uVar5 = (ulong)uStack_70;
    uVar1 = *(uint *)(param_1 + 0x10);
    bVar2 = *param_1;
    if (bVar2 - 0x24 < 2) {
      uStack_6c = uVar1;
      uStack_68 = uVar5;
      uStack_58 = uStack_70 >> 1;
      uStack_60 = 1;
      uStack_54 = uVar1 >> 1;
      uStack_50 = (ulong)uStack_58;
      uStack_48 = 1;
      uStack_40 = uStack_58;
      uStack_3c = uVar1 >> 1;
      uStack_38 = (ulong)uStack_58;
      lVar10 = 0x48;
      uStack_30 = 1;
    }
    else {
      if (bVar2 == 0x26) {
        uStack_6c = uVar1;
        uStack_68 = uVar5 << 1;
        uStack_60 = 2;
        uStack_58 = uStack_70 >> 1;
        uStack_54 = uVar1 >> 1;
        uStack_50 = uVar5 << 1;
        uStack_48 = 4;
      }
      else {
        if (bVar2 != 0x23) {
          FUN_1096f1ebc();
          uStack_60 = (uint)param_1;
          if (uStack_60 < 2) {
            uStack_60 = 1;
          }
          uStack_6c = uVar1;
          uStack_68 = uVar5 * uStack_60;
          lVar10 = 0x18;
          goto LAB_1096f351c;
        }
        uStack_6c = uVar1;
        uStack_68 = uVar5;
        uStack_60 = 1;
        uStack_58 = uStack_70 >> 1;
        uStack_54 = uVar1 >> 1;
        uStack_50 = uVar5;
        uStack_48 = 2;
      }
      lVar10 = 0x30;
      uStack_6c = uVar1;
      uStack_68 = uStack_50;
    }
  }
  else {
    lVar10 = *(long *)(param_1 + 0x18) * 0x18;
    _memcpy(&uStack_70,param_1 + 0x20,lVar10);
  }
LAB_1096f351c:
  uVar5 = 0;
  puVar7 = &uStack_68;
  do {
    uVar9 = *puVar7;
    uVar8 = -uVar9;
    if (-1 < (long)uVar9) {
      uVar8 = uVar9;
    }
    uVar1 = *(uint *)((long)puVar7 + -4);
    if (uVar9 == 0 || uVar1 == 0) {
      uVar8 = 0;
    }
    else {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = 0x10000000 / uVar1;
      }
      if (uVar3 < uVar8) {
        uVar6 = 0x10;
        ___cxa_allocate_exception(0x10);
        func_0x000104c4f71c();
        ___cxa_throw(uVar6,PTR___ZTISt12length_error_110352238,
                     PTR___ZNSt12length_errorD1Ev_110346170);
LAB_1096f36e8:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1096f36ec);
        (*pcVar4)();
      }
      uVar8 = uVar8 * uVar1;
      if (CARRY8(uVar5,uVar8)) {
        uVar6 = 0x10;
        ___cxa_allocate_exception(0x10);
        func_0x000104c4f71c();
        ___cxa_throw(uVar6,PTR___ZTISt12length_error_110352238,
                     PTR___ZNSt12length_errorD1Ev_110346170);
        goto LAB_1096f36e8;
      }
    }
    puVar7 = puVar7 + 3;
    uVar5 = uVar8 + uVar5;
    lVar10 = lVar10 + -0x18;
    if (lVar10 == 0) {
      __Znam();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
        return;
      }
      ___stack_chk_fail();
      ___cxa_free_exception(0);
      __Unwind_Resume(uVar5);
      return;
    }
  } while( true );
}



/* Entry: 1096f3710; end: 1096f376f;  */

void FUN_1096f3710(void)

{
  return;
}



/* Entry: 1096f3770; end: 1096f3847;  */

void FUN_1096f3770(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long alStack_1c8 [12];
  long lStack_168;
  long lStack_160;
  undefined4 uStack_158;
  long lStack_150;
  undefined1 auStack_148 [72];
  undefined1 auStack_100 [12];
  uint uStack_f4;
  long lStack_f0;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *param_1;
  if (lVar5 != 0) {
    param_2 = param_1 + 1;
    _memcpy(alStack_1c8,param_2,lVar5 << 5);
  }
  lStack_160 = param_1[0xe];
  lStack_168 = param_1[0xd];
  uStack_158 = (undefined4)param_1[0xf];
  lStack_150 = param_1[0x10];
  if (lStack_150 != 0) {
    param_2 = param_1 + 0x11;
    _memcpy(auStack_148,param_2,lStack_150 * 0x18);
  }
  if (lVar5 == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    param_2 = alStack_1c8;
    _memcpy(auStack_100,param_2,lVar5 << 5);
    lVar5 = -lStack_f0;
    if (-1 < lStack_f0) {
      lVar5 = lStack_f0;
    }
    plVar1 = (long *)(lVar5 * (ulong)uStack_f4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  *plVar1 = 0;
  lVar4 = param_2[0xe];
  lVar5 = param_2[0xd];
  *(int *)(plVar1 + 0xf) = (int)param_2[0xf];
  plVar1[0xe] = lVar4;
  plVar1[0xd] = lVar5;
  plVar1[0x10] = 0;
  lVar5 = param_2[0x10];
  plVar1[0x10] = lVar5;
  if (lVar5 != 0) {
    plVar2 = param_2 + 0x11;
    plVar3 = plVar1 + 0x11;
    do {
      lVar7 = plVar2[1];
      lVar4 = *plVar2;
      plVar3[2] = plVar2[2];
      plVar3[1] = lVar7;
      *plVar3 = lVar4;
      plVar2 = plVar2 + 3;
      lVar5 = lVar5 + -1;
      plVar3 = plVar3 + 3;
    } while (lVar5 != 0);
  }
  lVar5 = *param_2;
  if (lVar5 != 0) {
    plVar2 = param_2 + 1;
    lVar4 = *plVar1;
    do {
      lVar8 = plVar2[2];
      lVar6 = plVar2[1];
      lVar7 = plVar2[3];
      plVar3 = plVar1 + lVar4 * 4 + 1;
      *plVar3 = *plVar2;
      *(int *)(plVar3 + 3) = (int)lVar7;
      plVar3[2] = lVar8;
      plVar3[1] = lVar6;
      lVar4 = *plVar1 + 1;
      *plVar1 = lVar4;
      plVar2 = plVar2 + 4;
    } while (plVar2 != param_2 + lVar5 * 4 + 1);
  }
  return;
}



/* Entry: 1096f3848; end: 1096f38eb;  */

void FUN_1096f3848(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = 0;
  lVar4 = param_2[0xe];
  lVar1 = param_2[0xd];
  *(int *)(param_1 + 0xf) = (int)param_2[0xf];
  param_1[0xe] = lVar4;
  param_1[0xd] = lVar1;
  param_1[0x10] = 0;
  lVar1 = param_2[0x10];
  param_1[0x10] = lVar1;
  if (lVar1 != 0) {
    plVar2 = param_2 + 0x11;
    plVar3 = param_1 + 0x11;
    do {
      lVar6 = plVar2[1];
      lVar4 = *plVar2;
      plVar3[2] = plVar2[2];
      plVar3[1] = lVar6;
      *plVar3 = lVar4;
      plVar2 = plVar2 + 3;
      lVar1 = lVar1 + -1;
      plVar3 = plVar3 + 3;
    } while (lVar1 != 0);
  }
  lVar1 = *param_2;
  if (lVar1 != 0) {
    plVar2 = param_2 + 1;
    lVar4 = *param_1;
    do {
      lVar7 = plVar2[2];
      lVar5 = plVar2[1];
      lVar6 = plVar2[3];
      plVar3 = param_1 + lVar4 * 4 + 1;
      *plVar3 = *plVar2;
      *(int *)(plVar3 + 3) = (int)lVar6;
      plVar3[2] = lVar7;
      plVar3[1] = lVar5;
      lVar4 = *param_1 + 1;
      *param_1 = lVar4;
      plVar2 = plVar2 + 4;
    } while (plVar2 != param_2 + lVar1 * 4 + 1);
  }
  return;
}



/* Entry: 1096f38ec; end: 1096f3eff;  */

undefined8 **
FUN_1096f38ec(undefined8 param_1,ulong *param_2,undefined8 param_3,int param_4,undefined8 *param_5,
             int *param_6)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 **ppuVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long lVar27;
  undefined1 *puVar28;
  undefined8 *puVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  undefined1 *puVar33;
  ulong *puVar34;
  ulong uVar35;
  ulong uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined8 auStack_748 [14];
  undefined8 *apuStack_6d8 [8];
  undefined8 *apuStack_698 [24];
  undefined8 uStack_5d8;
  undefined8 *apuStack_5d0 [7];
  undefined8 uStack_598;
  undefined8 *apuStack_590 [7];
  undefined1 auStack_558 [112];
  undefined8 *apuStack_4e8 [8];
  undefined8 *apuStack_4a8 [24];
  undefined1 auStack_3e8 [96];
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined4 uStack_378;
  long lStack_370;
  undefined1 auStack_368 [72];
  undefined1 auStack_320 [8];
  undefined8 uStack_318;
  uint auStack_310 [2];
  long lStack_308;
  uint auStack_300 [16];
  ulong uStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [72];
  ulong uStack_250;
  long lStack_248;
  uint auStack_240 [2];
  long lStack_238;
  uint auStack_230 [18];
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined4 uStack_1d8;
  ulong uStack_1d0;
  undefined1 auStack_1c8 [72];
  ulong uStack_180;
  undefined4 uStack_178;
  undefined8 uStack_174;
  undefined8 uStack_168;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  long lStack_100;
  undefined1 auStack_f8 [72];
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar34 = param_2 + 0xd;
  uStack_180 = *puVar34;
  uStack_178 = (undefined4)param_2[0xe];
  uStack_168 = 0;
  uStack_5d8 = *param_5;
  puVar17 = param_5;
  uStack_174 = param_3;
  (**(code **)(param_5[1] + 0x10))(apuStack_5d0);
  uStack_598 = param_5[8];
  (**(code **)(param_5[9] + 0x10))(apuStack_590,param_5 + 9);
  puVar16 = (undefined8 *)0x0;
  FUN_1096f2638(auStack_558,&uStack_180,&uStack_5d8);
  (*(code *)*apuStack_590[0])(apuStack_590);
  (*(code *)*apuStack_5d0[0])(apuStack_5d0);
  FUN_1096f2390(auStack_748,auStack_558);
  FUN_1096f2204(&uStack_180,auStack_748);
  uVar31 = *param_2;
  puVar29 = (undefined8 *)(uVar31 << 5);
  if (uVar31 != 0) {
    puVar16 = puVar29;
    _memcpy(auStack_320,param_2 + 1);
  }
  uStack_2b8 = param_2[0xe];
  uStack_2c0 = *puVar34;
  uStack_2b0 = CONCAT44(uStack_2b0._4_4_,(int)param_2[0xf]);
  uVar35 = param_2[0x10];
  uStack_2a8 = uVar35;
  if (uVar35 != 0) {
    puVar16 = (undefined8 *)(uVar35 * 0x18);
    _memcpy(auStack_2a0,param_2 + 0x11);
  }
  uStack_250 = uVar31;
  if (uVar31 != 0) {
    _memcpy(&lStack_248,auStack_320);
    puVar16 = puVar29;
  }
  uStack_1e0 = param_2[0xe];
  uStack_1e8 = *puVar34;
  uStack_1d8 = (undefined4)param_2[0xf];
  uStack_1d0 = uVar35;
  if (uVar35 != 0) {
    puVar16 = (undefined8 *)(uVar35 * 0x18);
    _memcpy(auStack_1c8,auStack_2a0);
  }
  uVar35 = uStack_180;
  puVar29 = (undefined8 *)(uStack_180 << 5);
  if (uStack_180 != 0) {
    puVar16 = puVar29;
    _memcpy(auStack_3e8,&uStack_178);
  }
  uStack_380 = uStack_110;
  uStack_388 = uStack_118;
  uStack_378 = uStack_108;
  lStack_370 = lStack_100;
  if (lStack_100 != 0) {
    puVar16 = (undefined8 *)(lStack_100 * 0x18);
    _memcpy(auStack_368,auStack_f8);
  }
  if (uVar35 != 0) {
    _memcpy(&uStack_318,auStack_3e8);
    puVar16 = puVar29;
  }
  uStack_2b0 = uStack_110;
  uStack_2b8 = uStack_118;
  uStack_2a8 = CONCAT44(uStack_2a8._4_4_,uStack_108);
  if (lStack_100 != 0) {
    puVar16 = (undefined8 *)(lStack_100 * 0x18);
    _memcpy(auStack_298,auStack_368);
  }
  uVar1 = uVar35;
  if (uVar31 <= uVar35) {
    uVar1 = uVar31;
  }
  lVar27 = 0;
  if (uVar35 != 0) {
    uVar31 = 0;
    fVar60 = 0.0;
    if (param_4 != 2) {
      fVar60 = 0.5;
    }
    do {
      puVar28 = (undefined1 *)(&uStack_318)[uVar31 * 4];
      uVar4 = auStack_310[uVar31 * 8];
      uVar35 = (ulong)uVar4;
      uVar5 = auStack_310[uVar31 * 8 + 1];
      uVar26 = (ulong)uVar5;
      lVar27 = (&lStack_308)[uVar31 * 4];
      uVar7 = auStack_300[uVar31 * 8];
      if (uVar31 < uVar1) {
        lVar30 = (&lStack_248)[uVar31 * 4];
        if (lVar30 == 0 || puVar28 == (undefined1 *)0x0) goto LAB_1096f3bac;
        iVar14 = -(uint)((int)((ulong)*(undefined8 *)(auStack_240 + uVar31 * 8) >> 0x20) == 0);
        iVar12 = -(uint)((int)*(undefined8 *)(auStack_310 + uVar31 * 8) == 0);
        iVar13 = -(uint)((int)((ulong)*(undefined8 *)(auStack_310 + uVar31 * 8) >> 0x20) == 0);
        auVar10[4] = (char)iVar14;
        auVar10._0_4_ = -(uint)((int)*(undefined8 *)(auStack_240 + uVar31 * 8) == 0);
        auVar10[5] = (char)((uint)iVar14 >> 8);
        auVar10[6] = (char)((uint)iVar14 >> 0x10);
        auVar10[7] = (char)((uint)iVar14 >> 0x18);
        auVar10[8] = (char)iVar12;
        auVar10[9] = (char)((uint)iVar12 >> 8);
        auVar10[10] = (char)((uint)iVar12 >> 0x10);
        auVar10[0xb] = (char)((uint)iVar12 >> 0x18);
        auVar10[0xc] = (char)iVar13;
        auVar10[0xd] = (char)((uint)iVar13 >> 8);
        auVar10[0xe] = (char)((uint)iVar13 >> 0x10);
        auVar10[0xf] = (char)((uint)iVar13 >> 0x18);
        uVar11 = NEON_umaxv(auVar10,4);
        if ((uVar11 & 1) != 0) goto LAB_1096f3bd0;
        uVar11 = auStack_240[uVar31 * 8];
        uVar6 = auStack_240[uVar31 * 8 + 1];
        lVar32 = (&lStack_238)[uVar31 * 4];
        uVar7 = auStack_230[uVar31 * 8];
        if (uVar7 < 2) {
          uVar7 = 1;
        }
        puVar29 = (undefined8 *)(ulong)uVar7;
        if (uVar11 == uVar4 && uVar6 == uVar5) {
          do {
            puVar16 = (undefined8 *)((ulong)uVar4 * (long)puVar29);
            _memcpy(puVar28,lVar30);
            lVar30 = lVar30 + lVar32;
            puVar28 = puVar28 + lVar27;
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0);
        }
        else {
          uVar20 = 0;
          uVar7 = uVar11 - 1;
          fVar61 = (float)uVar7;
          uVar4 = uVar6 - 1;
          fVar62 = (float)uVar4;
          puVar23 = puVar28;
          do {
            uVar36 = 0;
            fVar54 = ((float)uVar6 / (float)uVar5) * (fVar60 + (float)(uVar20 & 0xffffffff)) + -0.5;
            fVar53 = fVar54 + 0.5;
            if (fVar53 <= 0.0) {
              fVar53 = 0.0;
            }
            if (fVar62 <= fVar53) {
              fVar53 = fVar62;
            }
            uVar37 = SUB41(fVar62,0);
            uVar41 = (undefined1)((uint)fVar62 >> 8);
            uVar45 = (undefined1)((uint)fVar62 >> 0x10);
            uVar49 = (undefined1)((uint)fVar62 >> 0x18);
            if (fVar54 <= fVar62) {
              uVar37 = SUB41(fVar54,0);
              uVar41 = (undefined1)((uint)fVar54 >> 8);
              uVar45 = (undefined1)((uint)fVar54 >> 0x10);
              uVar49 = (undefined1)((uint)fVar54 >> 0x18);
            }
            uVar38 = 0;
            uVar42 = 0;
            uVar46 = 0;
            uVar50 = 0;
            if ((float)CONCAT13(uVar49,CONCAT12(uVar45,CONCAT11(uVar41,uVar37))) <= 0.0) {
              uVar37 = uVar38;
              uVar41 = uVar42;
              uVar45 = uVar46;
              uVar49 = uVar50;
            }
            uVar19 = (uint)(float)CONCAT13(uVar49,CONCAT12(uVar45,CONCAT11(uVar41,uVar37)));
            uVar2 = uVar4;
            if (uVar19 + 1 <= uVar4) {
              uVar2 = uVar19 + 1;
            }
            fVar54 = (float)NEON_ucvtf((int)(float)CONCAT13(uVar49,CONCAT12(uVar45,CONCAT11(uVar41,
                                                  uVar37))));
            puVar33 = puVar23;
            do {
              fVar55 = ((float)uVar11 / (float)uVar35) * (fVar60 + (float)(uVar36 & 0xffffffff)) +
                       -0.5;
              uVar39 = SUB41(fVar61,0);
              uVar43 = (undefined1)((uint)fVar61 >> 8);
              uVar47 = (undefined1)((uint)fVar61 >> 0x10);
              uVar51 = (undefined1)((uint)fVar61 >> 0x18);
              if (param_4 == 1) {
                if (fVar55 <= fVar61) {
                  uVar39 = SUB41(fVar55,0);
                  uVar43 = (undefined1)((uint)fVar55 >> 8);
                  uVar47 = (undefined1)((uint)fVar55 >> 0x10);
                  uVar51 = (undefined1)((uint)fVar55 >> 0x18);
                }
                if ((float)CONCAT13(uVar51,CONCAT12(uVar47,CONCAT11(uVar43,uVar39))) <= 0.0) {
                  uVar39 = uVar38;
                  uVar43 = uVar42;
                  uVar47 = uVar46;
                  uVar51 = uVar50;
                }
                uVar18 = (uint)(float)CONCAT13(uVar51,CONCAT12(uVar47,CONCAT11(uVar43,uVar39)));
                fVar55 = (float)NEON_ucvtf((int)(float)CONCAT13(uVar51,CONCAT12(uVar47,CONCAT11(
                                                  uVar43,uVar39))));
                uVar3 = uVar7;
                if (uVar18 + 1 <= uVar7) {
                  uVar3 = uVar18 + 1;
                }
                fVar55 = (float)CONCAT13(uVar51,CONCAT12(uVar47,CONCAT11(uVar43,uVar39))) - fVar55;
                lVar21 = lVar30 + lVar32 * (ulong)uVar19;
                lVar22 = lVar30 + lVar32 * (ulong)uVar2;
                puVar24 = puVar33;
                puVar25 = puVar29;
                do {
                  fVar56 = (float)NEON_ucvtf((uint)*(byte *)(lVar21 + (long)puVar29 * (ulong)uVar18)
                                            );
                  fVar57 = (float)NEON_ucvtf((uint)*(byte *)(lVar21 + (long)puVar29 * (ulong)uVar3))
                  ;
                  fVar58 = (float)NEON_ucvtf((uint)*(byte *)(lVar22 + (long)puVar29 * (ulong)uVar18)
                                            );
                  fVar59 = (float)NEON_ucvtf((uint)*(byte *)(lVar22 + (long)puVar29 * (ulong)uVar3))
                  ;
                  fVar56 = fVar56 + fVar55 * (fVar57 - fVar56);
                  fVar56 = fVar56 + ((float)CONCAT13(uVar49,CONCAT12(uVar45,CONCAT11(uVar41,uVar37))
                                                    ) - fVar54) *
                                    ((fVar58 + fVar55 * (fVar59 - fVar58)) - fVar56) + 0.5;
                  if (fVar56 <= 0.0) {
                    fVar56 = 0.0;
                  }
                  fVar56 = (float)NEON_fminnm(fVar56,0x437f0000);
                  *puVar24 = (char)(int)fVar56;
                  lVar22 = lVar22 + 1;
                  lVar21 = lVar21 + 1;
                  puVar25 = (undefined8 *)((long)puVar25 + -1);
                  puVar24 = puVar24 + 1;
                } while (puVar25 != (undefined8 *)0x0);
              }
              else {
                fVar55 = fVar55 + 0.5;
                uVar40 = SUB41(fVar55,0);
                uVar44 = (char)((uint)fVar55 >> 8);
                uVar48 = (char)((uint)fVar55 >> 0x10);
                uVar52 = (char)((uint)fVar55 >> 0x18);
                if (fVar55 <= 0.0) {
                  uVar40 = uVar38;
                  uVar44 = uVar42;
                  uVar48 = uVar46;
                  uVar52 = uVar50;
                }
                if (fVar61 <= (float)CONCAT13(uVar52,CONCAT12(uVar48,CONCAT11(uVar44,uVar40)))) {
                  uVar40 = uVar39;
                  uVar44 = uVar43;
                  uVar48 = uVar47;
                  uVar52 = uVar51;
                }
                puVar16 = puVar29;
                _memcpy(puVar28 + uVar36 * (long)puVar29 + uVar20 * lVar27,
                        lVar30 + lVar32 * (ulong)(uint)(int)fVar53 +
                        (long)puVar29 *
                        (ulong)(uint)(int)(float)CONCAT13(uVar52,CONCAT12(uVar48,CONCAT11(uVar44,
                                                  uVar40))));
              }
              uVar36 = uVar36 + 1;
              puVar33 = puVar33 + (long)puVar29;
            } while (uVar36 != uVar35);
            uVar20 = uVar20 + 1;
            puVar23 = puVar23 + lVar27;
          } while (uVar20 != uVar26);
        }
      }
      else {
LAB_1096f3bac:
        if (puVar28 != (undefined1 *)0x0) {
LAB_1096f3bd0:
          if (uVar7 < 2) {
            uVar7 = 1;
          }
          if (uVar5 != 0) {
            do {
              _bzero(puVar28,uVar35 * uVar7);
              puVar28 = puVar28 + lVar27;
              uVar26 = uVar26 - 1;
            } while (uVar26 != 0);
          }
        }
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 < uStack_180);
  }
  puVar29 = auStack_748;
  FUN_1096f2390(param_1);
  FUN_1096f2328(auStack_748);
  (*(code *)*apuStack_698[0])(apuStack_698);
  (*(code *)*apuStack_6d8[0])(apuStack_6d8);
  FUN_1096f2328(auStack_558);
  (*(code *)*apuStack_4a8[0])(apuStack_4a8);
  ppuVar15 = apuStack_4e8;
  (*(code *)*apuStack_4e8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return ppuVar15;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_590[0])(lVar27 + 0x48);
  (*(code *)*apuStack_5d0[0])(lVar27 + 8);
  __Unwind_Resume();
  *(undefined4 *)ppuVar15 = 0;
  ppuVar15[1] = puVar29;
  ppuVar15[2] = puVar16;
  puVar16 = (undefined8 *)puVar16[4];
  ppuVar15[3] = puVar16;
  ppuVar15[4] = puVar17;
  *(undefined4 *)(ppuVar15 + 5) = 0;
  *(undefined4 *)((long)ppuVar15 + 0x54) = 0;
  ppuVar15[0xb] = (undefined8 *)0x0;
  *(undefined1 *)(ppuVar15 + 10) = 0;
  ppuVar15[7] = (undefined8 *)0x0;
  ppuVar15[6] = (undefined8 *)0x0;
  ppuVar15[9] = (undefined8 *)0x0;
  ppuVar15[8] = (undefined8 *)0x0;
  *(undefined4 *)(ppuVar15 + 0xc) = 0x10000;
  *(undefined2 *)((long)ppuVar15 + 100) = 0;
  ppuVar15[0xd] = (undefined8 *)&UNK_10dfe4888;
  puVar16 = puVar16 + 0x23;
  FUN_10972ad34();
  puVar17 = (undefined8 *)&UNK_10dfe4888;
  if ((undefined8 *)*puVar16 != (undefined8 *)0x0) {
    puVar17 = (undefined8 *)*puVar16;
  }
  puVar16 = (undefined8 *)&UNK_10dfe4888;
  if (3 < *(uint *)(puVar17 + 3)) {
    puVar16 = (undefined8 *)puVar17[2];
  }
  ppuVar15[0xe] = puVar16;
  ppuVar15[0xf] = (undefined8 *)0x0;
  ppuVar15[0x11] = (undefined8 *)0xffffffffffffffff;
  ppuVar15[0x10] = (undefined8 *)0xffffffffffffffff;
  ppuVar15[0x13] = (undefined8 *)0xffffffffffffffff;
  ppuVar15[0x12] = (undefined8 *)0xffffffffffffffff;
  ppuVar15[0x15] = (undefined8 *)0xffffffffffffffff;
  ppuVar15[0x14] = (undefined8 *)0xffffffffffffffff;
  ppuVar15[0x17] = (undefined8 *)0xffffffffffffffff;
  ppuVar15[0x16] = (undefined8 *)0xffffffffffffffff;
  ppuVar15[0x19] = (undefined8 *)0xffffffffffffffff;
  ppuVar15[0x18] = (undefined8 *)0xffffffffffffffff;
  ppuVar15[0x1b] = (undefined8 *)0xffffffffffffffff;
  ppuVar15[0x1a] = (undefined8 *)0xffffffffffffffff;
  ppuVar15[0x1c] = (undefined8 *)0x0;
  if ((param_6 != (int *)0x0) && (*param_6 != 0)) {
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(param_6,0x10);
      if (bVar9) {
        *param_6 = *param_6 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  ppuVar15[0xb] = (undefined8 *)param_6;
  *(undefined1 *)(ppuVar15 + 10) = 0;
  puVar16 = ppuVar15[3];
  iVar14 = *(int *)(puVar16 + 3);
  if (iVar14 == -1) {
    FUN_109710978();
    iVar14 = (int)puVar16;
    param_6 = (int *)ppuVar15[0xb];
  }
  *(int *)(ppuVar15 + 0xc) = iVar14;
  *(undefined1 *)((long)ppuVar15 + 100) = 1;
  puVar16 = *(undefined8 **)(param_6 + 4);
  uVar7 = param_6[6];
  ppuVar15[6] = puVar16;
  ppuVar15[7] = (undefined8 *)((long)puVar16 + (ulong)uVar7);
  *(undefined4 *)((long)ppuVar15 + 0x54) = 0;
  *(undefined4 *)(ppuVar15 + 5) = 0;
  *(undefined4 *)((long)ppuVar15 + 0x4c) = 0;
  *(uint *)(ppuVar15 + 8) = uVar7;
  *(undefined4 *)((long)ppuVar15 + 0x44) = 0x3fffffff;
  return ppuVar15;
}



/* Entry: 1096f3f00; end: 1096f4037;  */

undefined4 *
FUN_1096f3f00(undefined4 *param_1,undefined8 param_2,long param_3,undefined8 param_4,int *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(long *)(param_1 + 4) = param_3;
  lVar8 = *(long *)(param_3 + 0x20);
  *(long *)(param_1 + 6) = lVar8;
  *(undefined8 *)(param_1 + 8) = param_4;
  param_1[10] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x18] = 0x10000;
  *(undefined2 *)(param_1 + 0x19) = 0;
  *(undefined **)(param_1 + 0x1a) = &UNK_10dfe4888;
  puVar7 = (undefined8 *)(lVar8 + 0x118);
  FUN_10972ad34();
  puVar1 = &UNK_10dfe4888;
  if ((undefined *)*puVar7 != (undefined *)0x0) {
    puVar1 = (undefined *)*puVar7;
  }
  puVar2 = &UNK_10dfe4888;
  if (3 < *(uint *)(puVar1 + 0x18)) {
    puVar2 = *(undefined **)(puVar1 + 0x10);
  }
  *(undefined **)(param_1 + 0x1c) = puVar2;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x26) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x24) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2a) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2e) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x32) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x36) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x34) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if ((param_5 != (int *)0x0) && (*param_5 != 0)) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(param_5,0x10);
      if (bVar5) {
        *param_5 = *param_5 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(int **)(param_1 + 0x16) = param_5;
  *(undefined1 *)(param_1 + 0x14) = 0;
  lVar8 = *(long *)(param_1 + 6);
  iVar6 = *(int *)(lVar8 + 0x18);
  if (iVar6 == -1) {
    FUN_109710978();
    iVar6 = (int)lVar8;
    param_5 = *(int **)(param_1 + 0x16);
  }
  param_1[0x18] = iVar6;
  *(undefined1 *)(param_1 + 0x19) = 1;
  lVar8 = *(long *)(param_5 + 4);
  uVar3 = param_5[6];
  *(long *)(param_1 + 0xc) = lVar8;
  *(ulong *)(param_1 + 0xe) = lVar8 + (ulong)uVar3;
  param_1[0x15] = 0;
  param_1[10] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = uVar3;
  param_1[0x11] = 0x3fffffff;
  return param_1;
}



/* Entry: 1096f4038; end: 1096f4077;  */

long FUN_1096f4038(long param_1)

{
  FUN_1096f5a5c(*(undefined8 *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  FUN_109710c0c(param_1 + 0x28);
  return param_1;
}



/* Entry: 1096f4078; end: 1096f53f3;  */

void FUN_1096f4078(undefined8 *param_1,long param_2,ulong param_3,long param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  long lVar9;
  byte bVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  long *plVar19;
  uint *puVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  uint uVar25;
  int *piVar26;
  uint uVar27;
  int *piVar28;
  long lVar29;
  uint uVar30;
  ulong uVar31;
  char *pcVar32;
  int *piVar33;
  uint *puVar34;
  ulong uVar35;
  ulong uVar36;
  char *pcVar37;
  byte *pbVar38;
  undefined8 uVar39;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  long lStack_1d8;
  undefined *puStack_180;
  ulong uStack_178;
  int *piStack_170;
  ulong uStack_168;
  ulong uStack_160;
  int *piStack_158;
  ulong uStack_150;
  uint uStack_118;
  int iStack_114;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  int *piStack_c0;
  undefined8 uStack_b8;
  uint uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  int *piStack_98;
  ulong uStack_90;
  
  uStack_f0 = param_1[1];
  uStack_f8 = *param_1;
  uStack_e0 = param_1[3];
  uStack_e8 = param_1[2];
  lStack_100 = *(long *)(param_2 + 0x20);
  lStack_d0 = 0;
  uStack_d8 = 0;
  piStack_c0 = (int *)0x0;
  uStack_c8 = 0;
  uStack_b8 = 0xffffffff00000000;
  if (param_5 == 0) {
LAB_1096f439c:
    lStack_108 = 0;
    uStack_110 = 0;
    lStack_1f0 = 0;
    uStack_1f8 = 0;
    uVar30 = 0;
  }
  else {
    uVar30 = 0;
    uVar31 = 0;
    do {
      lVar29 = lStack_100;
      lVar13 = lStack_100 + 0x168;
      FUN_1097444d8();
      pcVar37 = "";
      if (0xb < *(uint *)(lVar13 + 0x18)) {
        pcVar37 = *(char **)(lVar13 + 0x10);
      }
      if ((pcVar37[1] != '\0' || *pcVar37 != '\0') || (pcVar37[2] != '\0' || pcVar37[3] != '\0')) {
        puVar20 = (uint *)(param_4 + uVar31 * 0x10);
        uVar11 = *puVar20;
        if (uVar11 == 0x61616c74) {
          lVar29 = lVar29 + 0x168;
          FUN_1097444d8();
          puVar6 = &UNK_10dfe4888;
          if (0xb < *(uint *)(lVar29 + 0x18)) {
            puVar6 = *(undefined **)(lVar29 + 0x10);
          }
          FUN_1096f56b8(puVar6,0x11);
          if (puVar6[3] != '\0' || puVar6[2] != '\0') {
            piVar33 = (int *)&uStack_d8;
            FUN_1096f55d0();
            *(undefined8 *)(piVar33 + 4) = *(undefined8 *)(puVar20 + 2);
            *piVar33 = 0x11;
            piVar33[1] = puVar20[1];
            uVar30 = uStack_d8._4_4_;
            piVar33[3] = uStack_d8._4_4_;
            bVar10 = 1;
LAB_1096f4278:
            *(byte *)(piVar33 + 2) = bVar10;
          }
        }
        else {
          iVar21 = 0;
          iVar15 = 0x4d;
          do {
            uVar27 = (uint)(iVar15 + iVar21) >> 1;
            uVar25 = *(uint *)(&UNK_10dfe017c + (ulong)uVar27 * 0x10);
            if (uVar11 <= uVar25 && uVar25 != uVar11) {
              iVar15 = uVar27 - 1;
            }
            else {
              if (uVar11 <= uVar25) {
                lVar5 = lVar29 + 0x168;
                FUN_1097444d8();
                lVar13 = (ulong)uVar27 * 0x10;
                puVar6 = &UNK_10dfe4888;
                if (0xb < *(uint *)(lVar5 + 0x18)) {
                  puVar6 = *(undefined **)(lVar5 + 0x10);
                }
                iVar21 = *(int *)(&UNK_10dfe0180 + lVar13);
                FUN_1096f56b8(puVar6,iVar21);
                if (puVar6[3] == '\0' && puVar6[2] == '\0') {
                  if ((iVar21 != 0x25) || (*(int *)(&UNK_10dfe0184 + lVar13) != 1)) break;
                  lVar29 = lVar29 + 0x168;
                  FUN_1097444d8();
                  puVar6 = &UNK_10dfe4888;
                  if (0xb < *(uint *)(lVar29 + 0x18)) {
                    puVar6 = *(undefined **)(lVar29 + 0x10);
                  }
                  FUN_1096f56b8(puVar6,3);
                  if (puVar6[3] == '\0' && puVar6[2] == '\0') break;
                }
                piVar33 = (int *)&uStack_d8;
                FUN_1096f55d0();
                *(undefined8 *)(piVar33 + 4) = *(undefined8 *)(puVar20 + 2);
                *piVar33 = iVar21;
                lVar29 = 0xc;
                if (puVar20[1] != 0) {
                  lVar29 = 8;
                }
                piVar33[1] = *(int *)(&UNK_10dfe017c + lVar29 + lVar13);
                uVar30 = uStack_d8._4_4_;
                piVar33[3] = uStack_d8._4_4_;
                bVar10 = (byte)puVar6[8] >> 7;
                goto LAB_1096f4278;
              }
              iVar21 = uVar27 + 1;
            }
          } while (iVar21 <= iVar15);
        }
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 != param_5);
    uStack_110 = 0;
    lStack_108 = 0;
    uStack_1f8 = 0;
    lStack_1f0 = 0;
    if (uVar30 == 0) goto LAB_1096f439c;
    uVar31 = 0;
    piVar33 = (int *)(lStack_d0 + 0x14);
    do {
      if (uVar31 < uVar30) {
        if (piVar33[-1] != *piVar33) {
          piVar7 = (int *)&uStack_1f8;
          FUN_1096f572c();
          *piVar7 = piVar33[-1];
          *(undefined1 *)(piVar7 + 1) = 1;
          uVar39 = *(undefined8 *)(piVar33 + -5);
          *(undefined8 *)(piVar7 + 4) = *(undefined8 *)(piVar33 + -3);
          *(undefined8 *)(piVar7 + 2) = uVar39;
          piVar7 = (int *)&uStack_1f8;
          FUN_1096f572c();
          *piVar7 = *piVar33;
          *(undefined1 *)(piVar7 + 1) = 0;
          uVar39 = *(undefined8 *)(piVar33 + -5);
          *(undefined8 *)(piVar7 + 4) = *(undefined8 *)(piVar33 + -3);
          *(undefined8 *)(piVar7 + 2) = uVar39;
        }
      }
      else {
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        uRam000000011382ab40 = 0;
      }
      uVar31 = uVar31 + 1;
      piVar33 = piVar33 + 6;
    } while (uVar31 < uVar30);
    if (uStack_1f8._4_4_ != 0) {
      _qsort(lStack_1f0,uStack_1f8._4_4_,0x18,FUN_1096f5814);
    }
  }
  puVar8 = &uStack_1f8;
  FUN_1096f572c();
  *(undefined4 *)puVar8 = 0xffffffff;
  *(undefined1 *)((long)puVar8 + 4) = 0;
  *(uint *)((long)puVar8 + 0x14) = uVar30 + 1;
  lVar13 = lStack_1f0;
  uStack_a0 = 0;
  piStack_98 = (int *)0x0;
  if (uStack_1f8._4_4_ != 0) {
    uVar31 = 0;
    iVar21 = 0;
    do {
      piVar33 = (int *)(lVar13 + uVar31 * 0x18);
      if (*piVar33 != iVar21) {
        if ((int)(uint)uStack_c8 < 0) {
          uStack_c8 = CONCAT44(uStack_c8._4_4_,~(uint)uStack_c8);
        }
        puVar8 = &uStack_c8;
        FUN_109744934(puVar8,0,0);
        uVar36 = uStack_a0;
        if ((int)puVar8 != 0) {
          uStack_c8 = uStack_c8 & 0xffffffff;
        }
        uVar30 = uStack_a0._4_4_;
        FUN_109744934(&uStack_c8,uStack_a0._4_4_,1);
        if ((int)(uint)uStack_c8 < 0) {
          uVar30 = uStack_c8._4_4_;
        }
        else {
          uStack_c8 = CONCAT44(uVar30,(uint)uStack_c8);
          if ((uVar36 & 0xfffffff00000000) != 0) {
            _memcpy(piStack_c0,piStack_98);
          }
        }
        piVar7 = piStack_c0;
        uStack_b8 = CONCAT44(*piVar33 + -1,iVar21);
        if (uVar30 != 0) {
          uVar36 = (ulong)uVar30;
          _qsort(piStack_c0,uVar36,0x10,0x1096f5858);
          if (uVar30 == 1) {
            uVar11 = 1;
          }
          else {
            uVar35 = 0;
            uVar24 = 1;
            piVar26 = piVar7;
            do {
              piVar18 = piVar26 + 4;
              if (uVar24 < uVar36) {
                iVar21 = *piVar18;
              }
              else {
                iVar21 = 0;
                uRam000000011382ab30 = 0;
                uRam000000011382ab38 = 0;
              }
              uVar11 = (uint)uVar35;
              if (uVar11 < uVar30) {
                iVar15 = piVar7[uVar35 * 4];
              }
              else {
                iVar15 = 0;
                uRam000000011382ab30 = 0;
                uRam000000011382ab38 = 0;
              }
              if (iVar21 == iVar15) {
                if (uVar24 < uVar36) {
                  if ((*(byte *)(piVar26 + 6) & 1) == 0) {
                    uVar25 = piVar26[5];
                    goto LAB_1096f44d0;
                  }
                }
                else {
                  uVar25 = 0;
                  uRam000000011382ab30 = 0;
                  uRam000000011382ab38 = 0;
LAB_1096f44d0:
                  if (uVar11 < uVar30) {
                    uVar27 = piVar7[uVar35 * 4 + 1];
                  }
                  else {
                    uVar27 = 0;
                    uRam000000011382ab30 = 0;
                    uRam000000011382ab38 = 0;
                  }
                  if (1 < (uVar27 ^ uVar25)) goto LAB_1096f44ec;
                }
              }
              else {
LAB_1096f44ec:
                piVar26 = piVar18;
                if (uVar36 <= uVar24) {
                  piVar26 = (int *)0x11382ab30;
                  uRam000000011382ab30 = 0;
                  uRam000000011382ab38 = 0;
                }
                uVar35 = (ulong)(uVar11 + 1);
                if (uVar11 + 1 < uVar30) {
                  piVar28 = piVar7 + uVar35 * 4;
                }
                else {
                  piVar28 = (int *)0x11382ab30;
                  uRam000000011382ab30 = 0;
                  uRam000000011382ab38 = 0;
                }
                uVar39 = *(undefined8 *)piVar26;
                *(undefined8 *)(piVar28 + 2) = *(undefined8 *)(piVar26 + 2);
                *(undefined8 *)piVar28 = uVar39;
              }
              uVar24 = uVar24 + 1;
              piVar26 = piVar18;
            } while (uVar24 < uVar36);
            uVar11 = (int)uVar35 + 1;
          }
          uVar11 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
          if (uVar11 < uVar30) {
            uStack_c8 = CONCAT44(uVar11,(uint)uStack_c8);
            FUN_109744934(&uStack_c8,uVar11,1);
          }
        }
        lVar29 = lStack_100;
        puVar8 = (undefined8 *)(lStack_100 + 0x138);
        FUN_10973a5bc();
        pcVar37 = "";
        if ((char *)*puVar8 != (char *)0x0) {
          pcVar37 = (char *)*puVar8;
        }
        pcVar32 = "";
        if (7 < *(uint *)(pcVar37 + 0x18)) {
          pcVar32 = *(char **)(pcVar37 + 0x10);
        }
        if (pcVar32[1] == '\0' && *pcVar32 == '\0') {
          puVar8 = (undefined8 *)(lVar29 + 0x140);
          FUN_10973c4f0();
          pcVar37 = "";
          if ((char *)*puVar8 != (char *)0x0) {
            pcVar37 = (char *)*puVar8;
          }
          pcVar32 = "";
          if (7 < *(uint *)(pcVar37 + 0x18)) {
            pcVar32 = *(char **)(pcVar37 + 0x10);
          }
          if (pcVar32[1] != '\0' || *pcVar32 != '\0') {
            uVar30 = (*(uint *)(pcVar32 + 4) & 0xff00ff00) >> 8 |
                     (*(uint *)(pcVar32 + 4) & 0xff00ff) << 8;
            uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
            puVar8 = &uStack_110;
            FUN_10973be94(puVar8,(ulong)uVar30);
            uVar39 = uStack_b8;
            piVar7 = piStack_c0;
            lVar5 = lStack_108;
            if ((int)puVar8 != 0 && uVar30 != 0) {
              uVar36 = 0;
              puVar20 = (uint *)(pcVar32 + 8);
              uVar24 = uStack_110 >> 0x20;
              iVar15 = uStack_c8._4_4_;
              iVar21 = uStack_c8._4_4_ + -1;
              do {
                if (uVar36 < uVar24) {
                  lVar12 = lVar5 + uVar36 * 0x10;
                }
                else {
                  lVar12 = 0x11382ab30;
                  uRam000000011382ab30 = 0;
                  uRam000000011382ab38 = 0;
                }
                uVar11 = (*puVar20 & 0xff00ff00) >> 8 | (*puVar20 & 0xff00ff) << 8;
                uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
                uVar25 = (uint)(ushort)((ushort)puVar20[2] >> 8) |
                         ((ushort)puVar20[2] & 0xff00ff) << 8;
                if (uVar25 != 0) {
                  uVar35 = 0;
                  do {
                    puVar34 = puVar20 + uVar35 * 3 + 3;
                    uVar27 = (uint)(ushort)((ushort)*puVar34 >> 8) |
                             ((ushort)*puVar34 & 0xff00ff) << 8;
                    uVar2 = (uint)(*(ushort *)((long)puVar34 + 2) >> 8) |
                            (*(ushort *)((long)puVar34 + 2) & 0xff00ff) << 8;
                    do {
                      uVar22 = uVar2;
                      uVar16 = uVar27;
                      if (0 < iVar15) {
                        iVar17 = 0;
                        iVar23 = iVar21;
                        do {
                          uVar2 = (uint)(iVar23 + iVar17) >> 1;
                          uVar27 = piVar7[(ulong)uVar2 * 4];
                          bVar4 = SBORROW4(uVar16,uVar27);
                          iVar1 = uVar16 - uVar27;
                          if (uVar16 == uVar27) {
                            uVar27 = (piVar7 + (ulong)uVar2 * 4)[1];
                            bVar4 = SBORROW4(uVar22,uVar27);
                            iVar1 = uVar22 - uVar27;
                            if (uVar22 == uVar27) goto LAB_1096f4a80;
                          }
                          if (iVar1 < 0 == bVar4) {
                            iVar17 = uVar2 + 1;
                          }
                          else {
                            iVar23 = uVar2 - 1;
                          }
                        } while (iVar17 <= iVar23);
                      }
                      if (uVar16 != 3) break;
                      uVar27 = 0x25;
                      uVar2 = 1;
                    } while (uVar22 == 3);
                    if ((uVar16 == 0x27) && (uVar22 != 0)) {
                      lVar9 = lVar29 + 0x160;
                      FUN_10973c0d0();
                      puVar6 = &UNK_10dfe4888;
                      if (0xb < *(uint *)(lVar9 + 0x18)) {
                        puVar6 = *(undefined **)(lVar9 + 0x10);
                      }
                      FUN_10973c090(puVar6,uVar22 - 1);
                      iVar17 = (int)puVar6;
                      FUN_1096f7fe0();
                      if (iVar17 != 0) {
LAB_1096f4a80:
                        uVar27 = (puVar34[2] & 0xff00ff00) >> 8 | (puVar34[2] & 0xff00ff) << 8;
                        uVar11 = (uint)(byte)puVar34[1] << 0x18 |
                                 (uint)*(byte *)((long)puVar34 + 5) << 0x10 |
                                 (uVar27 >> 0x10 | uVar27 << 0x10) & uVar11 |
                                 (uint)*(byte *)((long)puVar34 + 6) << 8 |
                                 (uint)*(byte *)((long)puVar34 + 7);
                      }
                    }
                    uVar35 = uVar35 + 1;
                  } while (uVar35 != uVar25);
                }
                uStack_a8 = uVar39;
                uStack_ac = uVar11;
                func_0x00010973bf70(lVar12,&uStack_ac);
                puVar20 = (uint *)((long)puVar20 +
                                  (ulong)*(byte *)((long)puVar20 + 7) +
                                  (ulong)*(byte *)((long)puVar20 + 6) * 0x100 +
                                  (ulong)(byte)puVar20[1] * 0x1000000 +
                                  (ulong)*(byte *)((long)puVar20 + 5) * 0x10000);
                uVar36 = uVar36 + 1;
              } while (uVar36 != uVar30);
            }
          }
        }
        else {
          uVar30 = (*(uint *)(pcVar32 + 4) & 0xff00ff00) >> 8 |
                   (*(uint *)(pcVar32 + 4) & 0xff00ff) << 8;
          uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
          puVar8 = &uStack_110;
          FUN_10973be94(puVar8,(ulong)uVar30);
          uVar39 = uStack_b8;
          piVar7 = piStack_c0;
          lVar5 = lStack_108;
          if ((int)puVar8 != 0 && uVar30 != 0) {
            uVar36 = 0;
            puVar20 = (uint *)(pcVar32 + 8);
            uVar24 = uStack_110 >> 0x20;
            iVar15 = uStack_c8._4_4_;
            iVar21 = uStack_c8._4_4_ + -1;
            do {
              if (uVar36 < uVar24) {
                lVar12 = lVar5 + uVar36 * 0x10;
              }
              else {
                lVar12 = 0x11382ab30;
                uRam000000011382ab30 = 0;
                uRam000000011382ab38 = 0;
              }
              uVar11 = (*puVar20 & 0xff00ff00) >> 8 | (*puVar20 & 0xff00ff) << 8;
              uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
              uVar25 = (puVar20[2] & 0xff00ff00) >> 8 | (puVar20[2] & 0xff00ff) << 8;
              uVar25 = uVar25 >> 0x10 | uVar25 << 0x10;
              if (uVar25 != 0) {
                uVar35 = 0;
                do {
                  puVar34 = puVar20 + uVar35 * 3 + 4;
                  uVar27 = (uint)(ushort)((ushort)*puVar34 >> 8) |
                           ((ushort)*puVar34 & 0xff00ff) << 8;
                  uVar2 = (uint)(*(ushort *)((long)puVar34 + 2) >> 8) |
                          (*(ushort *)((long)puVar34 + 2) & 0xff00ff) << 8;
                  do {
                    uVar22 = uVar2;
                    uVar16 = uVar27;
                    if (0 < iVar15) {
                      iVar17 = 0;
                      iVar23 = iVar21;
                      do {
                        uVar2 = (uint)(iVar23 + iVar17) >> 1;
                        uVar27 = piVar7[(ulong)uVar2 * 4];
                        bVar4 = SBORROW4(uVar16,uVar27);
                        iVar1 = uVar16 - uVar27;
                        if (uVar16 == uVar27) {
                          uVar27 = (piVar7 + (ulong)uVar2 * 4)[1];
                          bVar4 = SBORROW4(uVar22,uVar27);
                          iVar1 = uVar22 - uVar27;
                          if (uVar22 == uVar27) goto LAB_1096f474c;
                        }
                        if (iVar1 < 0 == bVar4) {
                          iVar17 = uVar2 + 1;
                        }
                        else {
                          iVar23 = uVar2 - 1;
                        }
                      } while (iVar17 <= iVar23);
                    }
                    if (uVar16 != 3) break;
                    uVar27 = 0x25;
                    uVar2 = 1;
                  } while (uVar22 == 3);
                  if ((uVar16 == 0x27) && (uVar22 != 0)) {
                    lVar9 = lVar29 + 0x160;
                    FUN_10973c0d0();
                    puVar6 = &UNK_10dfe4888;
                    if (0xb < *(uint *)(lVar9 + 0x18)) {
                      puVar6 = *(undefined **)(lVar9 + 0x10);
                    }
                    FUN_10973c090(puVar6,uVar22 - 1);
                    iVar17 = (int)puVar6;
                    FUN_1096f7fe0();
                    if (iVar17 != 0) {
LAB_1096f474c:
                      uVar27 = (puVar34[2] & 0xff00ff00) >> 8 | (puVar34[2] & 0xff00ff) << 8;
                      uVar11 = (uint)(byte)puVar34[1] << 0x18 |
                               (uint)*(byte *)((long)puVar34 + 5) << 0x10 |
                               (uVar27 >> 0x10 | uVar27 << 0x10) & uVar11 |
                               (uint)*(byte *)((long)puVar34 + 6) << 8 |
                               (uint)*(byte *)((long)puVar34 + 7);
                    }
                  }
                  uVar35 = uVar35 + 1;
                } while (uVar35 != uVar25);
              }
              uStack_a8 = uVar39;
              uStack_ac = uVar11;
              func_0x00010973bf70(lVar12,&uStack_ac);
              puVar20 = (uint *)((long)puVar20 +
                                (ulong)*(byte *)((long)puVar20 + 7) +
                                (ulong)*(byte *)((long)puVar20 + 6) * 0x100 +
                                (ulong)(byte)puVar20[1] * 0x1000000 +
                                (ulong)*(byte *)((long)puVar20 + 5) * 0x10000);
              uVar36 = uVar36 + 1;
            } while (uVar36 != uVar30);
          }
        }
        iVar21 = *piVar33;
      }
      if ((char)piVar33[1] == '\x01') {
        uVar30 = uStack_a0._4_4_;
        if ((int)uStack_a0 <= (int)uStack_a0._4_4_) {
          puVar8 = &uStack_a0;
          FUN_109744934(puVar8,uStack_a0._4_4_ + 1,0);
          if ((int)puVar8 == 0) {
            uRam000000011382ab30 = 0;
            uRam000000011382ab38 = 0;
            goto LAB_1096f4938;
          }
          uVar30 = uStack_a0._4_4_;
        }
        uStack_a0 = CONCAT44(uVar30 + 1,(int)uStack_a0);
        uVar39 = *(undefined8 *)(piVar33 + 2);
        *(undefined8 *)(piStack_98 + (ulong)uVar30 * 4 + 2) = *(undefined8 *)(piVar33 + 4);
        *(undefined8 *)(piStack_98 + (ulong)uVar30 * 4) = uVar39;
      }
      else {
        uVar36 = (ulong)uStack_a0._4_4_;
        if (uStack_a0._4_4_ != 0) {
          uVar24 = 0;
          if (piVar33[2] != *piStack_98 || piVar33[3] != piStack_98[1]) {
            piVar7 = piStack_98 + 5;
            do {
              if (uVar36 - 1 == uVar24) goto LAB_1096f4938;
              piVar26 = piVar7 + -1;
              iVar15 = *piVar7;
              piVar7 = piVar7 + 4;
              uVar24 = uVar24 + 1;
            } while (piVar33[2] != *piVar26 || piVar33[3] != iVar15);
            if (uVar36 <= uVar24) goto LAB_1096f4938;
          }
          if ((uint)uVar24 < uStack_a0._4_4_) {
            uVar30 = (uint)uVar24 + 1;
            if (uVar30 < uStack_a0._4_4_) {
              lVar29 = uVar36 - uVar30;
              uVar36 = (ulong)uVar30 + 0xffffffff;
              piVar33 = piStack_98 + (ulong)uVar30 * 4;
              do {
                uVar39 = *(undefined8 *)piVar33;
                *(undefined8 *)(piStack_98 + (uVar36 & 0xffffffff) * 4 + 2) =
                     *(undefined8 *)(piVar33 + 2);
                *(undefined8 *)(piStack_98 + (uVar36 & 0xffffffff) * 4) = uVar39;
                uVar36 = uVar36 + 1;
                lVar29 = lVar29 + -1;
                piVar33 = piVar33 + 4;
              } while (lVar29 != 0);
            }
            uStack_a0 = CONCAT44(uStack_a0._4_4_ - 1,(int)uStack_a0);
          }
        }
      }
LAB_1096f4938:
      uVar31 = uVar31 + 1;
    } while (uVar31 < uStack_1f8 >> 0x20);
    if (uStack_110._4_4_ != 0) {
      lVar13 = (ulong)uStack_110._4_4_ << 4;
      plVar19 = (long *)(lStack_108 + 8);
      do {
        if (*(int *)((long)plVar19 + -4) == 0) {
          lVar29 = 0x11382ab30;
          uRam000000011382ab38 = uRam000000011382ab38 & 0xffffffff00000000;
          uRam000000011382ab30 = 0;
        }
        else {
          lVar29 = *plVar19 + (ulong)(*(int *)((long)plVar19 + -4) - 1) * 0xc;
        }
        *(undefined4 *)(lVar29 + 8) = 0xffffffff;
        plVar19 = plVar19 + 2;
        lVar13 = lVar13 + -0x10;
      } while (lVar13 != 0);
    }
  }
  if ((int)uStack_a0 != 0) {
    _free(piStack_98);
  }
  if ((int)uStack_1f8 != 0) {
    uStack_1f8 = uStack_1f8 & 0xffffffff;
    _free(lStack_1f0);
  }
  puVar8 = (undefined8 *)(*(long *)(param_2 + 0x20) + 0x138);
  FUN_10973a5bc();
  pcVar37 = "";
  if ((char *)*puVar8 != (char *)0x0) {
    pcVar37 = (char *)*puVar8;
  }
  pcVar32 = "";
  if (7 < *(uint *)(pcVar37 + 0x18)) {
    pcVar32 = *(char **)(pcVar37 + 0x10);
  }
  if (pcVar32[1] == '\0' && *pcVar32 == '\0') {
    puVar8 = (undefined8 *)(*(long *)(param_2 + 0x20) + 0x140);
    FUN_10973c4f0();
    pcVar37 = "";
    if ((char *)*puVar8 != (char *)0x0) {
      pcVar37 = (char *)*puVar8;
    }
    pcVar32 = "";
    if (7 < *(uint *)(pcVar37 + 0x18)) {
      pcVar32 = *(char **)(pcVar37 + 0x10);
    }
    if (pcVar32[1] == '\0' && *pcVar32 == '\0') goto LAB_1096f5310;
    FUN_1096f3f00(&uStack_1f8,param_1,param_2,param_3);
    uVar31 = param_3;
    FUN_1096f53f4(param_3,param_2,&UNK_10f57e9e6);
    if ((uVar31 & 1) != 0) {
      if (*(char *)(lStack_1d8 + 0x58) == '\x01') {
        FUN_109730c80(lStack_1d8,0,0xffffffff);
        if (*(uint *)(lStack_1d8 + 0x60) < 0x20) {
          uStack_a0 = 0;
          piStack_98 = (int *)0x0;
          uStack_90 = 0;
          FUN_1097347a8(&uStack_a0,*(undefined8 *)(lStack_1d8 + 0x70));
          piStack_170 = piStack_98;
          uStack_178 = uStack_a0;
          uStack_168 = uStack_90;
        }
        else {
          piStack_170 = (int *)0xffffffffffffffff;
          uStack_168 = 0xffffffffffffffff;
          uStack_178 = 0xffffffffffffffff;
        }
        iStack_114 = 0;
        uVar30 = (*(uint *)(pcVar32 + 4) & 0xff00ff00) >> 8 |
                 (*(uint *)(pcVar32 + 4) & 0xff00ff) << 8;
        uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
        if (uVar30 != 0) {
          uVar31 = 0;
          pcVar32 = pcVar32 + 8;
          do {
            if (*(int *)(uStack_1e0 + 0x18) == -1) {
              FUN_109710978();
            }
            if ((uint)uVar31 < *(uint *)(puVar8 + 1)) {
              while ((pcVar37 = *(char **)(puVar8[2] + uVar31 * 8), pcVar37 == (char *)0x0 &&
                     (pcVar37 = pcVar32, FUN_10973fc04(), pcVar37 != (char *)0x0))) {
                plVar19 = (long *)(puVar8[2] + uVar31 * 8);
                if (*plVar19 == 0) {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar4) {
                    *plVar19 = (long)pcVar37;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') break;
                }
                else {
                  ClearExclusiveLocal();
                }
                _free(pcVar37);
              }
            }
            else {
              pcVar37 = (char *)0x0;
            }
            puStack_180 = (undefined *)(lStack_108 + uVar31 * 0x10);
            if (uStack_110 >> 0x20 <= uVar31) {
              puStack_180 = &UNK_10dfe4888;
            }
            uVar11 = (uint)(*(ushort *)(pcVar32 + 10) >> 8) |
                     (*(ushort *)(pcVar32 + 10) & 0xff00ff) << 8;
            if (uVar11 != 0) {
              uVar36 = 0;
              pbVar38 = (byte *)(pcVar32 +
                                (ulong)((uint)(*(ushort *)(pcVar32 + 8) >> 8) |
                                       (*(ushort *)(pcVar32 + 8) & 0xff00ff) << 8) * 0xc + 0xc);
              do {
                iVar21 = *(int *)(puStack_180 + 4);
                if (iVar21 != 0) {
                  uVar25 = (*(uint *)(pbVar38 + 4) & 0xff00ff00) >> 8 |
                           (*(uint *)(pbVar38 + 4) & 0xff00ff) << 8;
                  uVar25 = uVar25 >> 0x10 | uVar25 << 0x10;
                  puVar20 = *(uint **)(puStack_180 + 8);
                  do {
                    if ((uVar25 & *puVar20) != 0) {
                      if (pcVar37 == (char *)0x0) {
                        piStack_98 = (int *)0xffffffffffffffff;
                        uStack_90 = 0xffffffffffffffff;
                        uStack_a0 = 0xffffffffffffffff;
                      }
                      else {
                        puVar14 = (ulong *)(pcVar37 + uVar36 * 0x18);
                        piStack_98 = (int *)puVar14[1];
                        uStack_a0 = *puVar14;
                        uStack_90 = puVar14[2];
                      }
                      piStack_158 = piStack_98;
                      uStack_160 = uStack_a0;
                      uStack_150 = uStack_90;
                      bVar10 = pbVar38[2];
                      uStack_118 = uVar25;
                      if (((bVar10 >> 5 & 1) != 0) ||
                         ((uint)(int)(char)bVar10 < 0x80000000 !=
                          ((*(uint *)(lStack_1d8 + 0x38) & 0xfffffffe) == 6))) {
                        if ((bVar10 >> 4 & 1) == 0) {
                          uVar25 = (uint)((*(uint *)(lStack_1d8 + 0x38) & 0xfffffffd) == 5) ^
                                   (bVar10 & 0x40) >> 6;
                        }
                        else {
                          uVar25 = bVar10 >> 6 & 1;
                        }
                        lVar13 = lStack_1d8;
                        FUN_1096f53f4(lStack_1d8,uStack_1e8,&UNK_10f57f4da);
                        if ((int)lVar13 != 0) {
                          if (uVar25 == 0) {
                            FUN_10973fda4(pbVar38,&uStack_1f8);
                          }
                          else {
                            FUN_1096f7004(lStack_1d8,0,*(undefined4 *)(lStack_1d8 + 0x60));
                            FUN_10973fda4(pbVar38,&uStack_1f8);
                            FUN_1096f7004(lStack_1d8,0,*(undefined4 *)(lStack_1d8 + 0x60));
                          }
                          FUN_1096f53f4(lStack_1d8,uStack_1e8,&UNK_10f57f4f1);
                          if (*(char *)(lStack_1d8 + 0x58) != '\x01') goto LAB_1096f52b4;
                        }
                      }
                      break;
                    }
                    iVar21 = iVar21 + -1;
                    puVar20 = puVar20 + 3;
                  } while (iVar21 != 0);
                }
                pbVar38 = pbVar38 + (ulong)pbVar38[1] + (ulong)*pbVar38 * 0x100;
                iStack_114 = iStack_114 + 1;
                uVar36 = uVar36 + 1;
              } while (uVar36 != uVar11);
            }
LAB_1096f52b4:
            if (*(char *)(lStack_1d8 + 0x58) != '\x01') break;
            pcVar32 = pcVar32 + (ulong)(byte)pcVar32[7] +
                                (ulong)(byte)pcVar32[6] * 0x100 +
                                (ulong)(byte)pcVar32[4] * 0x1000000 +
                                (ulong)(byte)pcVar32[5] * 0x10000;
            uVar31 = uVar31 + 1;
          } while (uVar31 != uVar30);
        }
      }
      FUN_1096f53f4(param_3,param_2,&UNK_10f57e9f7);
    }
  }
  else {
    FUN_1096f3f00(&uStack_1f8,param_1,param_2,param_3);
    uVar31 = param_3;
    FUN_1096f53f4(param_3,param_2,&UNK_10f57e9c6);
    if ((uVar31 & 1) != 0) {
      if (*(char *)(lStack_1d8 + 0x58) == '\x01') {
        FUN_109730c80(lStack_1d8,0,0xffffffff);
        if (*(uint *)(lStack_1d8 + 0x60) < 0x20) {
          uStack_a0 = 0;
          piStack_98 = (int *)0x0;
          uStack_90 = 0;
          FUN_1097347a8(&uStack_a0,*(undefined8 *)(lStack_1d8 + 0x70));
          piStack_170 = piStack_98;
          uStack_178 = uStack_a0;
          uStack_168 = uStack_90;
        }
        else {
          piStack_170 = (int *)0xffffffffffffffff;
          uStack_168 = 0xffffffffffffffff;
          uStack_178 = 0xffffffffffffffff;
        }
        iStack_114 = 0;
        uVar30 = (*(uint *)(pcVar32 + 4) & 0xff00ff00) >> 8 |
                 (*(uint *)(pcVar32 + 4) & 0xff00ff) << 8;
        uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
        if (uVar30 != 0) {
          uVar31 = 0;
          pcVar32 = pcVar32 + 8;
          do {
            uVar36 = (ulong)*(uint *)(uStack_1e0 + 0x18);
            if (*(uint *)(uStack_1e0 + 0x18) == 0xffffffff) {
              uVar36 = uStack_1e0;
              FUN_109710978();
            }
            if ((uint)uVar31 < *(uint *)(puVar8 + 1)) {
              while ((pcVar37 = *(char **)(puVar8[2] + uVar31 * 8), pcVar37 == (char *)0x0 &&
                     (pcVar37 = pcVar32, FUN_10973d334(pcVar32,uVar36), pcVar37 != (char *)0x0))) {
                plVar19 = (long *)(puVar8[2] + uVar31 * 8);
                if (*plVar19 == 0) {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar4) {
                    *plVar19 = (long)pcVar37;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') break;
                }
                else {
                  ClearExclusiveLocal();
                }
                _free(pcVar37);
              }
            }
            else {
              pcVar37 = (char *)0x0;
            }
            puStack_180 = (undefined *)(lStack_108 + uVar31 * 0x10);
            if (uStack_110 >> 0x20 <= uVar31) {
              puStack_180 = &UNK_10dfe4888;
            }
            uVar11 = (*(uint *)(pcVar32 + 0xc) & 0xff00ff00) >> 8 |
                     (*(uint *)(pcVar32 + 0xc) & 0xff00ff) << 8;
            uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
            if (uVar11 != 0) {
              uVar36 = 0;
              uVar25 = (*(uint *)(pcVar32 + 8) & 0xff00ff00) >> 8 |
                       (*(uint *)(pcVar32 + 8) & 0xff00ff) << 8;
              pbVar38 = (byte *)(pcVar32 + (ulong)((uVar25 >> 0x10 | uVar25 << 0x10) * 0xc) + 0x10);
              do {
                iVar21 = *(int *)(puStack_180 + 4);
                if (iVar21 != 0) {
                  uVar25 = (*(uint *)(pbVar38 + 8) & 0xff00ff00) >> 8 |
                           (*(uint *)(pbVar38 + 8) & 0xff00ff) << 8;
                  uVar25 = uVar25 >> 0x10 | uVar25 << 0x10;
                  puVar20 = *(uint **)(puStack_180 + 8);
                  do {
                    if ((uVar25 & *puVar20) != 0) {
                      if (pcVar37 == (char *)0x0) {
                        piStack_98 = (int *)0xffffffffffffffff;
                        uStack_90 = 0xffffffffffffffff;
                        uStack_a0 = 0xffffffffffffffff;
                      }
                      else {
                        puVar14 = (ulong *)(pcVar37 + uVar36 * 0x18);
                        piStack_98 = (int *)puVar14[1];
                        uStack_a0 = *puVar14;
                        uStack_90 = puVar14[2];
                      }
                      piStack_158 = piStack_98;
                      uStack_160 = uStack_a0;
                      uStack_150 = uStack_90;
                      bVar10 = pbVar38[4];
                      uStack_118 = uVar25;
                      if (((bVar10 >> 5 & 1) != 0) ||
                         ((uint)(int)(char)bVar10 < 0x80000000 !=
                          ((*(uint *)(lStack_1d8 + 0x38) & 0xfffffffe) == 6))) {
                        if ((bVar10 >> 4 & 1) == 0) {
                          uVar25 = (uint)((*(uint *)(lStack_1d8 + 0x38) & 0xfffffffd) == 5) ^
                                   (bVar10 & 0x40) >> 6;
                        }
                        else {
                          uVar25 = bVar10 >> 6 & 1;
                        }
                        lVar13 = lStack_1d8;
                        FUN_1096f53f4(lStack_1d8,uStack_1e8,&UNK_10f57f4da);
                        if ((int)lVar13 != 0) {
                          if (uVar25 == 0) {
                            FUN_10973d84c(pbVar38,&uStack_1f8);
                          }
                          else {
                            FUN_1096f7004(lStack_1d8,0,*(undefined4 *)(lStack_1d8 + 0x60));
                            FUN_10973d84c(pbVar38,&uStack_1f8);
                            FUN_1096f7004(lStack_1d8,0,*(undefined4 *)(lStack_1d8 + 0x60));
                          }
                          FUN_1096f53f4(lStack_1d8,uStack_1e8,&UNK_10f57f4f1);
                          if (*(char *)(lStack_1d8 + 0x58) != '\x01') goto LAB_1096f4fec;
                        }
                      }
                      break;
                    }
                    iVar21 = iVar21 + -1;
                    puVar20 = puVar20 + 3;
                  } while (iVar21 != 0);
                }
                pbVar38 = pbVar38 + (ulong)pbVar38[3] +
                                    (ulong)pbVar38[2] * 0x100 +
                                    (ulong)*pbVar38 * 0x1000000 + (ulong)pbVar38[1] * 0x10000;
                iStack_114 = iStack_114 + 1;
                uVar36 = uVar36 + 1;
              } while (uVar36 != uVar11);
            }
LAB_1096f4fec:
            if (*(char *)(lStack_1d8 + 0x58) != '\x01') break;
            pcVar32 = pcVar32 + (ulong)(byte)pcVar32[7] +
                                (ulong)(byte)pcVar32[6] * 0x100 +
                                (ulong)(byte)pcVar32[4] * 0x1000000 +
                                (ulong)(byte)pcVar32[5] * 0x10000;
            uVar31 = uVar31 + 1;
          } while (uVar31 != uVar30);
        }
      }
      FUN_1096f53f4(param_3,param_2,&UNK_10f57e9d7);
    }
  }
  FUN_1096f4038(&uStack_1f8);
LAB_1096f5310:
  FUN_109710c48(&uStack_110);
  if ((uint)uStack_c8 != 0) {
    _free(piStack_c0);
  }
  if ((int)uStack_d8 != 0) {
    uStack_d8 = uStack_d8 & 0xffffffff;
    _free(lStack_d0);
  }
  return;
}



/* Entry: 1096f53f4; end: 1096f542b;  */

long FUN_1096f53f4(long param_1)

{
  if (*(long *)(param_1 + 0xd0) == 0) {
    return 1;
  }
  FUN_1096f7cb0();
  return param_1;
}



/* Entry: 1096f542c; end: 1096f5483;  */

long FUN_1096f542c(long param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x38);
  if (*piVar1 != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    _free(*(undefined8 *)(param_1 + 0x40));
  }
  piVar1[0] = 0;
  piVar1[1] = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  piVar1 = (int *)(param_1 + 0x28);
  if (*piVar1 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    _free(*(undefined8 *)(param_1 + 0x30));
  }
  piVar1[0] = 0;
  piVar1[1] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return param_1;
}



/* Entry: 1096f5484; end: 1096f55cf;  */

void FUN_1096f5484(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined8 *puVar11;
  uint *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar2 = *(uint *)(param_1 + 0x60);
  if (uVar2 == 0) {
    uVar8 = 0;
  }
  else {
    uVar6 = 0;
    uVar8 = 0;
    do {
      lVar10 = *(long *)(param_1 + 0x70);
      piVar9 = (int *)(lVar10 + uVar6 * 0x14);
      iVar7 = (int)uVar8;
      if (*piVar9 == 0xffff) {
        uVar3 = *(uint *)(lVar10 + uVar6 * 0x14 + 8);
        if (uVar6 + 1 < (ulong)uVar2) {
          if (uVar3 != *(uint *)(lVar10 + (uVar6 + 1) * 0x14 + 8)) {
            if (iVar7 != 0) goto LAB_1096f5560;
            FUN_1096f65e4(param_1,uVar6,(int)uVar6 + 2);
            uVar8 = 0;
          }
        }
        else if (iVar7 != 0) {
LAB_1096f5560:
          uVar4 = *(uint *)(lVar10 + (ulong)(iVar7 - 1) * 0x14 + 8);
          if (uVar3 < uVar4) {
            uVar5 = *(uint *)(lVar10 + uVar6 * 0x14 + 4);
            puVar12 = (uint *)(lVar10 + uVar8 * 0x14 + -0x10);
            uVar13 = uVar8;
            do {
              if (puVar12[1] != uVar4) break;
              *puVar12 = *puVar12 & 0xfffffff8 | uVar5 & 7;
              puVar12[1] = uVar3;
              uVar13 = uVar13 - 1;
              puVar12 = puVar12 + -5;
            } while (uVar13 != 0);
          }
        }
      }
      else {
        if (uVar6 != uVar8) {
          puVar1 = (undefined8 *)(lVar10 + uVar8 * 0x14);
          uVar15 = *(undefined8 *)(piVar9 + 2);
          uVar14 = *(undefined8 *)piVar9;
          *(int *)(puVar1 + 2) = piVar9[4];
          puVar1[1] = uVar15;
          *puVar1 = uVar14;
          puVar11 = (undefined8 *)(*(long *)(param_1 + 0x80) + uVar6 * 0x14);
          uVar15 = puVar11[1];
          uVar14 = *puVar11;
          puVar1 = (undefined8 *)(*(long *)(param_1 + 0x80) + uVar8 * 0x14);
          *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar11 + 2);
          puVar1[1] = uVar15;
          *puVar1 = uVar14;
        }
        uVar8 = (ulong)(iVar7 + 1);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar2);
  }
  *(int *)(param_1 + 0x60) = (int)uVar8;
  return;
}



/* Entry: 1096f55d0; end: 1096f56b7;  */

long FUN_1096f55d0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *param_1;
  if ((int)uVar4 < 0) {
LAB_1096f56a4:
    lVar3 = 0x11382ab30;
    uRam000000011382ab30 = 0;
    uRam000000011382ab38 = 0;
    uRam000000011382ab40 = 0;
  }
  else {
    uVar1 = param_1[1] + 1;
    uVar2 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    uVar5 = uVar4;
    if ((int)uVar4 < (int)uVar1) {
      do {
        uVar5 = uVar5 + (uVar5 >> 1) + 8;
      } while (uVar5 < uVar2);
      if (0xaaaaaaa < uVar5) {
LAB_1096f569c:
        *param_1 = ~uVar4;
        goto LAB_1096f56a4;
      }
      lVar3 = *(long *)(param_1 + 2);
      FUN_1097448e4(lVar3,uVar5);
      if (lVar3 == 0) {
        uVar4 = *param_1;
        if (uVar4 < uVar5) goto LAB_1096f569c;
      }
      else {
        *(long *)(param_1 + 2) = lVar3;
        *param_1 = uVar5;
      }
    }
    uVar4 = param_1[1];
    if ((uVar4 < uVar2) && ((uVar2 - uVar4) * 0x18 != 0)) {
      _bzero(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x18);
    }
    param_1[1] = uVar2;
    lVar3 = *(long *)(param_1 + 2) + (ulong)(uVar2 - 1) * 0x18;
  }
  return lVar3;
}



/* Entry: 1096f56b8; end: 1096f572b;  */

undefined * FUN_1096f56b8(long param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = (uint)(*(ushort *)(param_1 + 4) >> 8) | (*(ushort *)(param_1 + 4) & 0xff00ff) << 8;
  if (uVar2 == 0) {
    return &UNK_10dfe4888;
  }
  iVar5 = 0;
  iVar4 = uVar2 - 1;
  do {
    uVar2 = (uint)(iVar4 + iVar5) >> 1;
    uVar1 = *(ushort *)(param_1 + 0xc + (ulong)uVar2 * 0xc);
    uVar3 = (uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8;
    if ((int)param_2 < (int)uVar3) {
      iVar4 = uVar2 - 1;
    }
    else {
      if (uVar3 == param_2) {
        return (undefined *)(param_1 + 0xc + (ulong)uVar2 * 0xc);
      }
      iVar5 = uVar2 + 1;
    }
  } while (iVar5 <= iVar4);
  return &UNK_10dfe4888;
}



/* Entry: 1096f572c; end: 1096f5813;  */

long FUN_1096f572c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *param_1;
  if ((int)uVar4 < 0) {
LAB_1096f5800:
    lVar3 = 0x11382ab30;
    uRam000000011382ab30 = 0;
    uRam000000011382ab38 = 0;
    uRam000000011382ab40 = 0;
  }
  else {
    uVar1 = param_1[1] + 1;
    uVar2 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    uVar5 = uVar4;
    if ((int)uVar4 < (int)uVar1) {
      do {
        uVar5 = uVar5 + (uVar5 >> 1) + 8;
      } while (uVar5 < uVar2);
      if (0xaaaaaaa < uVar5) {
LAB_1096f57f8:
        *param_1 = ~uVar4;
        goto LAB_1096f5800;
      }
      lVar3 = *(long *)(param_1 + 2);
      func_0x00010974490c(lVar3,uVar5);
      if (lVar3 == 0) {
        uVar4 = *param_1;
        if (uVar4 < uVar5) goto LAB_1096f57f8;
      }
      else {
        *(long *)(param_1 + 2) = lVar3;
        *param_1 = uVar5;
      }
    }
    uVar4 = param_1[1];
    if ((uVar4 < uVar2) && ((uVar2 - uVar4) * 0x18 != 0)) {
      _bzero(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x18);
    }
    param_1[1] = uVar2;
    lVar3 = *(long *)(param_1 + 2) + (ulong)(uVar2 - 1) * 0x18;
  }
  return lVar3;
}



/* Entry: 1096f5814; end: 1096f58ab;  */

uint FUN_1096f5814(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  
  if (*param_1 < *param_2) {
    return 0xffffffff;
  }
  if (*param_1 == *param_2) {
    if ((byte)param_1[1] < (byte)param_2[1]) {
      return 0xffffffff;
    }
    if ((byte)param_1[1] <= (byte)param_2[1]) {
      uVar4 = param_1[2];
      uVar2 = param_2[2];
      bVar3 = SBORROW4(uVar4,uVar2);
      iVar1 = uVar4 - uVar2;
      if (uVar4 != uVar2) {
LAB_1096f58a0:
        uVar4 = 1;
        if (iVar1 < 0 != bVar3) {
          uVar4 = 0xffffffff;
        }
        return uVar4;
      }
      if ((param_1[4] & 1) == 0) {
        uVar4 = param_1[3];
        uVar2 = param_2[3];
        if (1 < (uVar2 ^ uVar4)) {
          bVar3 = SBORROW4(uVar4,uVar2);
          iVar1 = uVar4 - uVar2;
          goto LAB_1096f58a0;
        }
      }
      uVar4 = (uint)(param_2[5] < param_1[5]);
      if (param_1[5] < param_2[5]) {
        uVar4 = 0xffffffff;
      }
      return uVar4;
    }
  }
  return 1;
}



/* Entry: 1096f58ac; end: 1096f58eb;  */

undefined *
FUN_1096f58ac(undefined *param_1,int param_2,undefined8 param_3,undefined8 param_4,code *param_5)

{
  if (param_2 == 0) {
    if (param_5 != (code *)0x0) {
      (*param_5)(param_4);
    }
    param_1 = &UNK_10dfe4888;
  }
  else {
    FUN_1096f58ec();
    if (param_1 == (undefined *)0x0) {
      param_1 = &UNK_10dfe4888;
    }
  }
  return param_1;
}



/* Entry: 1096f58ec; end: 1096f599f;  */

undefined4 *
FUN_1096f58ec(undefined8 param_1,int param_2,int param_3,undefined8 param_4,code *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (-1 < param_2) {
    puVar1 = (undefined4 *)0x1;
    _calloc(1,0x30);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 1;
      puVar1[1] = 1;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined8 *)(puVar1 + 4) = param_1;
      puVar1[6] = param_2;
      puVar1[7] = param_3;
      *(undefined8 *)(puVar1 + 8) = param_4;
      *(code **)(puVar1 + 10) = param_5;
      if (param_3 != 0) {
        return puVar1;
      }
      puVar1[7] = 1;
      puVar2 = puVar1;
      FUN_1096f59a0();
      if (((ulong)puVar2 & 1) == 0) {
        FUN_1096f5a5c(puVar1);
        return (undefined4 *)0x0;
      }
      return puVar1;
    }
  }
  if (param_5 != (code *)0x0) {
    (*param_5)(param_4);
  }
  return (undefined4 *)0x0;
}



/* Entry: 1096f59a0; end: 1096f5a5b;  */

void FUN_1096f59a0(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 2;
  }
  else if (*(int *)(param_1 + 0x1c) != 2) {
    if (*(int *)(param_1 + 0x1c) == 3) {
      uVar3 = param_1;
      FUN_1096f5bcc();
      if ((uVar3 & 1) != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x1c) = 1;
      uVar1 = *(uint *)(param_1 + 0x18);
    }
    uVar3 = (ulong)uVar1;
    _malloc();
    if (uVar3 != 0) {
      if (uVar1 != 0) {
        _memcpy(uVar3,*(undefined8 *)(param_1 + 0x10),(ulong)uVar1);
      }
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x20));
      }
      *(undefined4 *)(param_1 + 0x1c) = 2;
      *(ulong *)(param_1 + 0x10) = uVar3;
      puVar2 = PTR__free_11034c310;
      *(ulong *)(param_1 + 0x20) = uVar3;
      *(undefined **)(param_1 + 0x28) = puVar2;
    }
  }
  return;
}



/* Entry: 1096f5a5c; end: 1096f5af3;  */

void FUN_1096f5a5c(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    do {
      iVar1 = *param_1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      *param_1 = -0xdead;
      lVar4 = *(long *)(param_1 + 2);
      if (lVar4 != 0) {
        FUN_109711500(lVar4 + 0x40,lVar4);
        _pthread_mutex_destroy(lVar4);
        _free(lVar4);
        param_1[2] = 0;
        param_1[3] = 0;
      }
      if (*(code **)(param_1 + 10) != (code *)0x0) {
        (**(code **)(param_1 + 10))(*(undefined8 *)(param_1 + 8));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1096f5af4; end: 1096f5bc7;  */

void FUN_1096f5af4(int *param_1,uint param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  
  if (((param_1 != (int *)0x0) && (param_3 != 0)) &&
     (uVar3 = param_1[6] - param_2, param_2 <= (uint)param_1[6] && uVar3 != 0)) {
    if (param_1[1] != 0) {
      param_1[1] = 0;
    }
    lVar5 = *(long *)(param_1 + 4);
    if (param_3 <= uVar3) {
      uVar3 = param_3;
    }
    if (*param_1 != 0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = *param_1 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (-1 < (int)uVar3) {
      puVar4 = (undefined4 *)0x1;
      _calloc(1,0x30);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 1;
        puVar4[1] = 1;
        *(undefined8 *)(puVar4 + 2) = 0;
        *(ulong *)(puVar4 + 4) = lVar5 + (ulong)param_2;
        puVar4[6] = uVar3;
        puVar4[7] = 1;
        *(int **)(puVar4 + 8) = param_1;
        *(code **)(puVar4 + 10) = FUN_1096f5bc8;
        return;
      }
    }
    FUN_1096f5a5c(param_1);
  }
  return;
}



/* Entry: 1096f5bc8; end: 1096f5bcb;  */

void FUN_1096f5bc8(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    do {
      iVar1 = *param_1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      *param_1 = -0xdead;
      lVar4 = *(long *)(param_1 + 2);
      if (lVar4 != 0) {
        FUN_109711500(lVar4 + 0x40,lVar4);
        _pthread_mutex_destroy(lVar4);
        _free(lVar4);
        param_1[2] = 0;
        param_1[3] = 0;
      }
      if (*(code **)(param_1 + 10) != (code *)0x0) {
        (**(code **)(param_1 + 10))(*(undefined8 *)(param_1 + 8));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1096f5bcc; end: 1096f5c4f;  */

undefined8 FUN_1096f5bcc(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)0x1d;
  _sysconf();
  puVar2 = puVar1;
  if (puVar1 != (undefined4 *)0xffffffffffffffff) {
    puVar2 = (undefined4 *)(*(ulong *)(param_1 + 0x10) & -(long)puVar1);
    _mprotect(puVar2,((long)puVar1 +
                      (ulong)*(uint *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x10) + -1 &
                     -(long)puVar1) - (long)puVar2,3);
    if ((int)puVar2 != -1) {
      *(undefined4 *)(param_1 + 0x1c) = 2;
      return 1;
    }
  }
  ___error();
  _strerror(*puVar2);
  return 0;
}



/* Entry: 1096f5c50; end: 1096f5cdb;  */

uint FUN_1096f5c50(byte *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uStack_14;
  
  uVar1 = 0;
  if (((param_1 != (byte *)0x0) && (param_2 != 0)) && (uVar1 = (uint)*param_1, *param_1 != 0)) {
    uVar3 = 0;
    if (3 < param_2) {
      param_2 = 4;
    }
    do {
      uVar2 = uVar3;
      if (param_1[uVar3] == 0) break;
      *(byte *)((long)&uStack_14 + uVar3) = param_1[uVar3];
      uVar3 = uVar3 + 1;
      uVar2 = (ulong)param_2;
    } while (param_2 != uVar3);
    if ((uint)uVar2 < 4) {
      _memset((long)&uStack_14 + (uVar2 & 0xffffffff),0x20,4 - (uint)uVar2);
    }
    uVar1 = (uStack_14 & 0xff00ff00) >> 8 | (uStack_14 & 0xff00ff) << 8;
    uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  }
  return uVar1;
}



/* Entry: 1096f5cdc; end: 1096f5e23;  */

void FUN_1096f5cdc(undefined1 *param_1,uint param_2,undefined1 *param_3,uint param_4,int *param_5)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  ulong auStack_480 [2];
  undefined1 uStack_470;
  undefined1 auStack_46f [1023];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(uint *)(param_1 + 0x60) <= param_2) {
    param_2 = *(uint *)(param_1 + 0x60);
  }
  *param_5 = 0;
  if (param_4 != 0) {
    *param_3 = 0;
  }
  if (param_2 != 0) {
    lVar8 = 0;
    lVar9 = *(long *)(param_1 + 0x70);
    *param_5 = 0;
    puVar5 = param_3;
    do {
      uStack_470 = 0x3c;
      if (lVar8 != 0) {
        uStack_470 = 0x7c;
      }
      auStack_480[0] = (ulong)*(uint *)(lVar9 + lVar8);
      param_3 = &UNK_10f57ebb2;
      param_1 = auStack_46f;
      _snprintf(auStack_46f,0x3ff,&UNK_10f57ebb2);
      uVar3 = (ulong)((uint)param_1 & ((int)(uint)param_1 >> 0x1f ^ 0xffffffffU));
      puVar7 = auStack_46f + uVar3;
      puVar4 = puVar7;
      if ((ulong)(param_2 - 1) * 0x14 - lVar8 == 0) {
        puVar4 = auStack_46f + uVar3 + 1;
        *puVar7 = 0x3e;
      }
      uVar6 = (uint)((long)puVar4 - (long)&uStack_470);
      bVar2 = param_4 < uVar6;
      param_4 = param_4 - uVar6;
      if (bVar2 || param_4 == 0) break;
      puVar7 = (undefined1 *)((long)puVar4 - (long)&uStack_470 & 0xffffffff);
      if (puVar7 != (undefined1 *)0x0) {
        param_1 = puVar5;
        param_3 = puVar7;
        _memcpy(puVar5,&uStack_470,puVar7);
      }
      puVar5 = puVar5 + (long)puVar7;
      *param_5 = *param_5 + uVar6;
      *puVar5 = 0;
      lVar8 = lVar8 + 0x14;
    } while ((ulong)param_2 * 0x14 - lVar8 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR____stderrp_11034bdc8;
  if (*(long *)(param_1 + 0xd0) == 0) {
    _fwrite(&UNK_10f57ec4e,9,1,*(undefined8 *)PTR____stderrp_11034bdc8);
    _vfprintf(*(undefined8 *)puVar1,param_3,auStack_480);
    _fputc(10,*(undefined8 *)puVar1);
  }
  else {
    FUN_1096f7cb0();
  }
  return;
}



/* Entry: 1096f5e24; end: 1096f5ea3;  */

void FUN_1096f5e24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR____stderrp_11034bdc8;
  if (*(long *)(param_1 + 0xd0) == 0) {
    _fwrite(&UNK_10f57ec4e,9,1,*(undefined8 *)PTR____stderrp_11034bdc8);
    _vfprintf(*(undefined8 *)puVar1,param_3,&stack0x00000000);
    _fputc(10,*(undefined8 *)puVar1);
  }
  else {
    FUN_1096f7cb0(param_1,param_2,param_3,&stack0x00000000);
  }
  return;
}



/* Entry: 1096f5ea4; end: 1096f5fd3;  */

undefined8 FUN_1096f5ea4(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  if (*(char *)(param_1 + 0x58) != '\x01') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc4) < param_2) {
    *(undefined1 *)(param_1 + 0x58) = 0;
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x70);
  lVar3 = *(long *)(param_1 + 0x78);
  if (param_2 < 0xccccccd) {
    for (uVar7 = *(uint *)(param_1 + 0x68); uVar7 <= param_2; uVar7 = uVar7 + (uVar7 >> 1) + 0x20) {
    }
    if (((ulong)uVar7 * 0x14 & 0xffffffff00000000) == 0) {
      lVar4 = *(long *)(param_1 + 0x80);
      uVar6 = (ulong)uVar7 * 0x14 & 0xffffffff;
      _realloc(lVar4,uVar6);
      lVar5 = *(long *)(param_1 + 0x70);
      _realloc(lVar5,uVar6);
      if (lVar4 != 0 && lVar5 != 0) {
        lVar1 = lVar5;
        if (lVar3 != lVar2) {
          lVar1 = lVar4;
        }
        *(long *)(param_1 + 0x70) = lVar5;
        *(long *)(param_1 + 0x78) = lVar1;
        *(long *)(param_1 + 0x80) = lVar4;
        if (*(char *)(param_1 + 0x58) == '\x01') {
          *(uint *)(param_1 + 0x68) = uVar7;
          return 1;
        }
        return 0;
      }
      *(undefined1 *)(param_1 + 0x58) = 0;
      if (lVar4 != 0) {
        *(long *)(param_1 + 0x80) = lVar4;
      }
      if (lVar5 != 0) {
        *(long *)(param_1 + 0x70) = lVar5;
      }
      goto LAB_1096f5f80;
    }
  }
  *(undefined1 *)(param_1 + 0x58) = 0;
LAB_1096f5f80:
  lVar4 = 0x70;
  if (lVar3 != lVar2) {
    lVar4 = 0x80;
  }
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + lVar4);
  return 0;
}



/* Entry: 1096f5fd4; end: 1096f6067;  */

void FUN_1096f5fd4(long param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(int *)(param_1 + 100) + param_3;
  if ((((uVar1 == 0) || (uVar1 < *(uint *)(param_1 + 0x68))) ||
      (lVar2 = param_1, FUN_1096f5ea4(), (int)lVar2 != 0)) &&
     (*(long *)(param_1 + 0x78) == *(long *)(param_1 + 0x70))) {
    uVar1 = *(uint *)(param_1 + 100);
    if ((uint)(*(int *)(param_1 + 0x5c) + param_2) < uVar1 + param_3) {
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x80);
      if (uVar1 != 0) {
        _memcpy(*(undefined8 *)(param_1 + 0x80),*(long *)(param_1 + 0x70),(ulong)uVar1 * 0x14);
      }
    }
  }
  return;
}



/* Entry: 1096f6068; end: 1096f627f;  */

void FUN_1096f6068(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  func_0x0001096f60c8(*(undefined8 *)(param_1 + 0x10));
  piVar3 = *(int **)(param_2 + 0x10);
  if ((piVar3 != (int *)0x0) && (*piVar3 != 0)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *(int **)(param_1 + 0x10) = piVar3;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return;
}



/* Entry: 1096f6280; end: 1096f628b;  */

void FUN_1096f6280(void)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  puVar3 = puRam000000011382add0;
  do {
    while( true ) {
      while( true ) {
        if (puVar3 != (undefined *)0x0) {
          puRam000000011382add0 = puVar3;
          return;
        }
        puRam000000011382add0 = puVar3;
        func_0x00010974f870();
        if (puVar3 == (undefined *)0x0) break;
        if (puRam000000011382add0 == (undefined *)0x0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x11382add0,0x10);
          if (bVar2) {
            cVar1 = ExclusiveMonitorsStatus();
            puRam000000011382add0 = puVar3;
          }
          if (cVar1 == '\0') {
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        bVar2 = puVar3 != &DAT_1132dfc08;
        puVar3 = puRam000000011382add0;
        if (bVar2) {
          func_0x0001096f60c8();
          puVar3 = puRam000000011382add0;
        }
      }
      if (puRam000000011382add0 == (undefined *)0x0) break;
      ClearExclusiveLocal();
      puVar3 = puRam000000011382add0;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x11382add0,0x10);
    if (bVar2) {
      puRam000000011382add0 = &DAT_1132dfc08;
      cVar1 = ExclusiveMonitorsStatus();
    }
    puVar3 = puRam000000011382add0;
  } while (cVar1 != '\0');
  return;
}



/* Entry: 1096f628c; end: 1096f6313;  */

void FUN_1096f628c(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x60);
  if (uVar3 == 0xffffffff) {
    uVar3 = 0xffffffff;
  }
  else if (*(uint *)(param_1 + 0x68) <= uVar3 + 1) {
    lVar1 = param_1;
    FUN_1096f5ea4(param_1,uVar3 + 1);
    if ((int)lVar1 == 0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x60);
  }
  puVar2 = (undefined4 *)(*(long *)(param_1 + 0x70) + (ulong)uVar3 * 0x14);
  *(undefined8 *)(puVar2 + 3) = 0;
  *puVar2 = param_2;
  puVar2[1] = 0;
  puVar2[2] = param_3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}



/* Entry: 1096f6314; end: 1096f6423;  */

void FUN_1096f6314(long param_1)

{
  long lVar1;
  
  if ((*(char *)(param_1 + 0x58) == '\x01') &&
     (lVar1 = param_1,
     func_0x0001096f638c(param_1,*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c)),
     (int)lVar1 != 0)) {
    if (*(long *)(param_1 + 0x78) != *(long *)(param_1 + 0x70)) {
      *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x70);
      *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x78);
    }
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 100);
  }
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}


