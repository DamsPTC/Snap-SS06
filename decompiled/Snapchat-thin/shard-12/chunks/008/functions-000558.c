/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1099259b8; end: 109925c07;  */

void FUN_1099259b8(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,long param_6,
                  long param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  iVar2 = *param_2;
  lVar8 = (long)iVar2;
  iVar4 = *(int *)(param_6 + (long)iVar2 * 4);
  iVar3 = *param_1;
  lVar9 = (long)iVar3;
  iVar7 = *(int *)(param_6 + (long)iVar3 * 4);
  bVar6 = SBORROW4(iVar4,iVar7);
  iVar1 = iVar4 - iVar7;
  if (iVar4 == iVar7) {
    iVar1 = *(int *)(param_7 + lVar8 * 4);
    iVar7 = *(int *)(param_7 + lVar9 * 4);
    bVar6 = SBORROW4(iVar1,iVar7);
    iVar1 = iVar1 - iVar7;
  }
  if (iVar1 < 0 == bVar6) {
    iVar7 = *param_3;
    lVar10 = (long)iVar7;
    iVar3 = *(int *)(param_6 + (long)iVar7 * 4);
    bVar6 = SBORROW4(iVar3,iVar4);
    iVar1 = iVar3 - iVar4;
    if (iVar3 == iVar4) {
      iVar1 = *(int *)(param_7 + lVar10 * 4);
      iVar3 = *(int *)(param_7 + lVar8 * 4);
      bVar6 = SBORROW4(iVar1,iVar3);
      iVar1 = iVar1 - iVar3;
    }
    if (iVar1 < 0 != bVar6) {
      *param_2 = iVar7;
      *param_3 = iVar2;
      iVar3 = *param_2;
      iVar4 = *param_1;
      iVar7 = *(int *)(param_6 + (long)iVar3 * 4);
      iVar5 = *(int *)(param_6 + (long)iVar4 * 4);
      bVar6 = SBORROW4(iVar7,iVar5);
      iVar1 = iVar7 - iVar5;
      if (iVar7 == iVar5) {
        iVar1 = *(int *)(param_7 + (long)iVar3 * 4);
        iVar7 = *(int *)(param_7 + (long)iVar4 * 4);
        bVar6 = SBORROW4(iVar1,iVar7);
        iVar1 = iVar1 - iVar7;
      }
      lVar10 = lVar8;
      iVar7 = iVar2;
      if (iVar1 < 0 != bVar6) {
        *param_1 = iVar3;
        *param_2 = iVar4;
        lVar10 = (long)*param_3;
        iVar7 = *param_3;
      }
    }
  }
  else {
    iVar7 = *param_3;
    iVar5 = *(int *)(param_6 + (long)iVar7 * 4);
    bVar6 = SBORROW4(iVar5,iVar4);
    iVar1 = iVar5 - iVar4;
    if (iVar5 == iVar4) {
      iVar1 = *(int *)(param_7 + (long)iVar7 * 4);
      iVar4 = *(int *)(param_7 + lVar8 * 4);
      bVar6 = SBORROW4(iVar1,iVar4);
      iVar1 = iVar1 - iVar4;
    }
    if (iVar1 < 0 == bVar6) {
      *param_1 = iVar2;
      *param_2 = iVar3;
      iVar7 = *param_3;
      iVar2 = *(int *)(param_6 + (long)iVar7 * 4);
      iVar4 = *(int *)(param_6 + lVar9 * 4);
      bVar6 = SBORROW4(iVar2,iVar4);
      iVar1 = iVar2 - iVar4;
      if (iVar2 == iVar4) {
        iVar1 = *(int *)(param_7 + (long)iVar7 * 4);
        iVar2 = *(int *)(param_7 + lVar9 * 4);
        bVar6 = SBORROW4(iVar1,iVar2);
        iVar1 = iVar1 - iVar2;
      }
      lVar10 = (long)iVar7;
      if (iVar1 < 0 == bVar6) goto LAB_109925ab8;
      *param_2 = iVar7;
    }
    else {
      *param_1 = iVar7;
    }
    *param_3 = iVar3;
    lVar10 = lVar9;
    iVar7 = iVar3;
  }
LAB_109925ab8:
  iVar2 = *param_4;
  iVar3 = *(int *)(param_6 + (long)iVar2 * 4);
  iVar4 = *(int *)(param_6 + lVar10 * 4);
  bVar6 = SBORROW4(iVar3,iVar4);
  iVar1 = iVar3 - iVar4;
  if (iVar3 == iVar4) {
    iVar1 = *(int *)(param_7 + (long)iVar2 * 4);
    iVar3 = *(int *)(param_7 + lVar10 * 4);
    bVar6 = SBORROW4(iVar1,iVar3);
    iVar1 = iVar1 - iVar3;
  }
  if (iVar1 < 0 != bVar6) {
    *param_3 = iVar2;
    *param_4 = iVar7;
    iVar2 = *param_3;
    iVar3 = *param_2;
    iVar4 = *(int *)(param_6 + (long)iVar2 * 4);
    iVar7 = *(int *)(param_6 + (long)iVar3 * 4);
    bVar6 = SBORROW4(iVar4,iVar7);
    iVar1 = iVar4 - iVar7;
    if (iVar4 == iVar7) {
      iVar1 = *(int *)(param_7 + (long)iVar2 * 4);
      iVar4 = *(int *)(param_7 + (long)iVar3 * 4);
      bVar6 = SBORROW4(iVar1,iVar4);
      iVar1 = iVar1 - iVar4;
    }
    if (iVar1 < 0 != bVar6) {
      *param_2 = iVar2;
      *param_3 = iVar3;
      iVar2 = *param_2;
      iVar3 = *param_1;
      iVar4 = *(int *)(param_6 + (long)iVar2 * 4);
      iVar7 = *(int *)(param_6 + (long)iVar3 * 4);
      bVar6 = SBORROW4(iVar4,iVar7);
      iVar1 = iVar4 - iVar7;
      if (iVar4 == iVar7) {
        iVar1 = *(int *)(param_7 + (long)iVar2 * 4);
        iVar4 = *(int *)(param_7 + (long)iVar3 * 4);
        bVar6 = SBORROW4(iVar1,iVar4);
        iVar1 = iVar1 - iVar4;
      }
      if (iVar1 < 0 != bVar6) {
        *param_1 = iVar2;
        *param_2 = iVar3;
      }
    }
  }
  iVar2 = *param_5;
  iVar3 = *param_4;
  iVar4 = *(int *)(param_6 + (long)iVar2 * 4);
  iVar7 = *(int *)(param_6 + (long)iVar3 * 4);
  bVar6 = SBORROW4(iVar4,iVar7);
  iVar1 = iVar4 - iVar7;
  if (iVar4 == iVar7) {
    iVar1 = *(int *)(param_7 + (long)iVar2 * 4);
    iVar4 = *(int *)(param_7 + (long)iVar3 * 4);
    bVar6 = SBORROW4(iVar1,iVar4);
    iVar1 = iVar1 - iVar4;
  }
  if (iVar1 < 0 != bVar6) {
    *param_4 = iVar2;
    *param_5 = iVar3;
    iVar2 = *param_4;
    iVar3 = *param_3;
    iVar4 = *(int *)(param_6 + (long)iVar2 * 4);
    iVar7 = *(int *)(param_6 + (long)iVar3 * 4);
    bVar6 = SBORROW4(iVar4,iVar7);
    iVar1 = iVar4 - iVar7;
    if (iVar4 == iVar7) {
      iVar1 = *(int *)(param_7 + (long)iVar2 * 4);
      iVar4 = *(int *)(param_7 + (long)iVar3 * 4);
      bVar6 = SBORROW4(iVar1,iVar4);
      iVar1 = iVar1 - iVar4;
    }
    if (iVar1 < 0 != bVar6) {
      *param_3 = iVar2;
      *param_4 = iVar3;
      iVar2 = *param_3;
      iVar3 = *param_2;
      iVar4 = *(int *)(param_6 + (long)iVar2 * 4);
      iVar7 = *(int *)(param_6 + (long)iVar3 * 4);
      bVar6 = SBORROW4(iVar4,iVar7);
      iVar1 = iVar4 - iVar7;
      if (iVar4 == iVar7) {
        iVar1 = *(int *)(param_7 + (long)iVar2 * 4);
        iVar4 = *(int *)(param_7 + (long)iVar3 * 4);
        bVar6 = SBORROW4(iVar1,iVar4);
        iVar1 = iVar1 - iVar4;
      }
      if (iVar1 < 0 != bVar6) {
        *param_2 = iVar2;
        *param_3 = iVar3;
        iVar2 = *param_2;
        iVar3 = *param_1;
        iVar4 = *(int *)(param_6 + (long)iVar2 * 4);
        iVar7 = *(int *)(param_6 + (long)iVar3 * 4);
        bVar6 = SBORROW4(iVar4,iVar7);
        iVar1 = iVar4 - iVar7;
        if (iVar4 == iVar7) {
          iVar1 = *(int *)(param_7 + (long)iVar2 * 4);
          iVar4 = *(int *)(param_7 + (long)iVar3 * 4);
          bVar6 = SBORROW4(iVar1,iVar4);
          iVar1 = iVar1 - iVar4;
        }
        if (iVar1 < 0 != bVar6) {
          *param_1 = iVar2;
          *param_2 = iVar3;
        }
      }
    }
  }
  return;
}



/* Entry: 109925c08; end: 1099260f7;  */

bool FUN_109925c08(int *param_1,int *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  uVar5 = (long)param_2 - (long)param_1 >> 2;
  if ((long)uVar5 < 3) {
    if (uVar5 < 2) {
      return true;
    }
    if (uVar5 == 2) {
      iVar1 = param_2[-1];
      iVar7 = *param_1;
      iVar2 = *(int *)(*param_3 + (long)iVar1 * 4);
      iVar3 = *(int *)(*param_3 + (long)iVar7 * 4);
      bVar4 = SBORROW4(iVar2,iVar3);
      iVar12 = iVar2 - iVar3;
      if (iVar2 == iVar3) {
        iVar12 = *(int *)(param_3[1] + (long)iVar1 * 4);
        iVar2 = *(int *)(param_3[1] + (long)iVar7 * 4);
        bVar4 = SBORROW4(iVar12,iVar2);
        iVar12 = iVar12 - iVar2;
      }
      if (iVar12 < 0 == bVar4) {
        return true;
      }
      *param_1 = iVar1;
      goto LAB_109925f08;
    }
  }
  else {
    if (uVar5 == 3) {
      iVar7 = *param_1;
      iVar1 = param_1[1];
      lVar6 = *param_3;
      iVar2 = *(int *)(lVar6 + (long)iVar1 * 4);
      iVar3 = *(int *)(lVar6 + (long)iVar7 * 4);
      bVar4 = SBORROW4(iVar2,iVar3);
      iVar12 = iVar2 - iVar3;
      if (iVar2 == iVar3) {
        iVar12 = *(int *)(param_3[1] + (long)iVar1 * 4);
        iVar3 = *(int *)(param_3[1] + (long)iVar7 * 4);
        bVar4 = SBORROW4(iVar12,iVar3);
        iVar12 = iVar12 - iVar3;
      }
      if (iVar12 < 0 == bVar4) {
        iVar7 = param_2[-1];
        iVar3 = *(int *)(lVar6 + (long)iVar7 * 4);
        bVar4 = SBORROW4(iVar3,iVar2);
        iVar12 = iVar3 - iVar2;
        if (iVar3 == iVar2) {
          iVar12 = *(int *)(param_3[1] + (long)iVar7 * 4);
          iVar2 = *(int *)(param_3[1] + (long)iVar1 * 4);
          bVar4 = SBORROW4(iVar12,iVar2);
          iVar12 = iVar12 - iVar2;
        }
        if (iVar12 < 0 == bVar4) {
          return true;
        }
        param_1[1] = iVar7;
        param_2[-1] = iVar1;
        iVar7 = *param_1;
        iVar1 = param_1[1];
        iVar2 = *(int *)(lVar6 + (long)iVar1 * 4);
        iVar3 = *(int *)(lVar6 + (long)iVar7 * 4);
        bVar4 = SBORROW4(iVar2,iVar3);
        iVar12 = iVar2 - iVar3;
        if (iVar2 == iVar3) {
          iVar12 = *(int *)(param_3[1] + (long)iVar1 * 4);
          iVar2 = *(int *)(param_3[1] + (long)iVar7 * 4);
          bVar4 = SBORROW4(iVar12,iVar2);
          iVar12 = iVar12 - iVar2;
        }
        if (iVar12 < 0 == bVar4) {
          return true;
        }
        *param_1 = iVar1;
        param_1[1] = iVar7;
        return true;
      }
      iVar3 = param_2[-1];
      iVar13 = *(int *)(lVar6 + (long)iVar3 * 4);
      bVar4 = SBORROW4(iVar13,iVar2);
      iVar12 = iVar13 - iVar2;
      if (iVar13 == iVar2) {
        iVar12 = *(int *)(param_3[1] + (long)iVar3 * 4);
        iVar2 = *(int *)(param_3[1] + (long)iVar1 * 4);
        bVar4 = SBORROW4(iVar12,iVar2);
        iVar12 = iVar12 - iVar2;
      }
      if (iVar12 < 0 == bVar4) {
        *param_1 = iVar1;
        param_1[1] = iVar7;
        iVar1 = param_2[-1];
        iVar2 = *(int *)(lVar6 + (long)iVar1 * 4);
        iVar3 = *(int *)(lVar6 + (long)iVar7 * 4);
        bVar4 = SBORROW4(iVar2,iVar3);
        iVar12 = iVar2 - iVar3;
        if (iVar2 == iVar3) {
          iVar12 = *(int *)(param_3[1] + (long)iVar1 * 4);
          iVar2 = *(int *)(param_3[1] + (long)iVar7 * 4);
          bVar4 = SBORROW4(iVar12,iVar2);
          iVar12 = iVar12 - iVar2;
        }
        if (iVar12 < 0 == bVar4) {
          return true;
        }
        param_1[1] = iVar1;
      }
      else {
        *param_1 = iVar3;
      }
LAB_109925f08:
      param_2[-1] = iVar7;
      return true;
    }
    if (uVar5 == 4) {
      piVar8 = param_1 + 1;
      iVar7 = *piVar8;
      piVar10 = param_1 + 2;
      iVar1 = *param_1;
      lVar11 = *param_3;
      lVar14 = (long)iVar7;
      iVar2 = *(int *)(lVar11 + (long)iVar7 * 4);
      lVar6 = (long)iVar1;
      iVar3 = *(int *)(lVar11 + (long)iVar1 * 4);
      bVar4 = SBORROW4(iVar2,iVar3);
      iVar12 = iVar2 - iVar3;
      if (iVar2 == iVar3) {
        iVar12 = *(int *)(param_3[1] + lVar14 * 4);
        iVar3 = *(int *)(param_3[1] + lVar6 * 4);
        bVar4 = SBORROW4(iVar12,iVar3);
        iVar12 = iVar12 - iVar3;
      }
      if (iVar12 < 0 == bVar4) {
        iVar3 = *piVar10;
        lVar16 = (long)iVar3;
        iVar13 = *(int *)(lVar11 + (long)iVar3 * 4);
        bVar4 = SBORROW4(iVar13,iVar2);
        iVar12 = iVar13 - iVar2;
        if (iVar13 == iVar2) {
          iVar12 = *(int *)(param_3[1] + lVar16 * 4);
          iVar2 = *(int *)(param_3[1] + lVar14 * 4);
          bVar4 = SBORROW4(iVar12,iVar2);
          iVar12 = iVar12 - iVar2;
        }
        iVar13 = iVar3;
        if (iVar12 < 0 == bVar4) goto LAB_109926050;
        *piVar8 = iVar3;
        *piVar10 = iVar7;
        iVar2 = *(int *)(lVar11 + lVar16 * 4);
        iVar13 = *(int *)(lVar11 + lVar6 * 4);
        bVar4 = SBORROW4(iVar2,iVar13);
        iVar12 = iVar2 - iVar13;
        if (iVar2 == iVar13) {
          iVar12 = *(int *)(param_3[1] + lVar16 * 4);
          iVar2 = *(int *)(param_3[1] + lVar6 * 4);
          bVar4 = SBORROW4(iVar12,iVar2);
          iVar12 = iVar12 - iVar2;
        }
        lVar16 = lVar14;
        iVar13 = iVar7;
        if (iVar12 < 0 == bVar4) goto LAB_109926050;
        *param_1 = iVar3;
        piVar9 = piVar8;
        lVar6 = lVar14;
      }
      else {
        iVar13 = *piVar10;
        lVar16 = (long)iVar13;
        iVar3 = *(int *)(lVar11 + (long)iVar13 * 4);
        bVar4 = SBORROW4(iVar3,iVar2);
        iVar12 = iVar3 - iVar2;
        if (iVar3 == iVar2) {
          iVar12 = *(int *)(param_3[1] + lVar16 * 4);
          iVar2 = *(int *)(param_3[1] + lVar14 * 4);
          bVar4 = SBORROW4(iVar12,iVar2);
          iVar12 = iVar12 - iVar2;
        }
        piVar9 = piVar10;
        if (iVar12 < 0 == bVar4) {
          *param_1 = iVar7;
          param_1[1] = iVar1;
          iVar7 = *(int *)(lVar11 + lVar16 * 4);
          iVar2 = *(int *)(lVar11 + lVar6 * 4);
          bVar4 = SBORROW4(iVar7,iVar2);
          iVar12 = iVar7 - iVar2;
          if (iVar7 == iVar2) {
            iVar12 = *(int *)(param_3[1] + lVar16 * 4);
            iVar7 = *(int *)(param_3[1] + lVar6 * 4);
            bVar4 = SBORROW4(iVar12,iVar7);
            iVar12 = iVar12 - iVar7;
          }
          if (iVar12 < 0 == bVar4) goto LAB_109926050;
          *piVar8 = iVar13;
          iVar7 = iVar1;
        }
        else {
          *param_1 = iVar13;
          iVar7 = iVar1;
        }
      }
      *piVar9 = iVar1;
      lVar16 = lVar6;
      iVar13 = iVar7;
LAB_109926050:
      iVar7 = param_2[-1];
      iVar1 = *(int *)(lVar11 + (long)iVar7 * 4);
      iVar2 = *(int *)(lVar11 + lVar16 * 4);
      bVar4 = SBORROW4(iVar1,iVar2);
      iVar12 = iVar1 - iVar2;
      if (iVar1 == iVar2) {
        iVar12 = *(int *)(param_3[1] + (long)iVar7 * 4);
        iVar1 = *(int *)(param_3[1] + lVar16 * 4);
        bVar4 = SBORROW4(iVar12,iVar1);
        iVar12 = iVar12 - iVar1;
      }
      if (iVar12 < 0 == bVar4) {
        return true;
      }
      *piVar10 = iVar7;
      param_2[-1] = iVar13;
      iVar7 = *piVar10;
      iVar1 = *piVar8;
      iVar2 = *(int *)(lVar11 + (long)iVar7 * 4);
      iVar3 = *(int *)(lVar11 + (long)iVar1 * 4);
      bVar4 = SBORROW4(iVar2,iVar3);
      iVar12 = iVar2 - iVar3;
      if (iVar2 == iVar3) {
        iVar12 = *(int *)(param_3[1] + (long)iVar7 * 4);
        iVar2 = *(int *)(param_3[1] + (long)iVar1 * 4);
        bVar4 = SBORROW4(iVar12,iVar2);
        iVar12 = iVar12 - iVar2;
      }
      if (iVar12 < 0 == bVar4) {
        return true;
      }
      param_1[1] = iVar7;
      param_1[2] = iVar1;
      iVar1 = *param_1;
      iVar2 = *(int *)(lVar11 + (long)iVar7 * 4);
      iVar3 = *(int *)(lVar11 + (long)iVar1 * 4);
      bVar4 = SBORROW4(iVar2,iVar3);
      iVar12 = iVar2 - iVar3;
      if (iVar2 == iVar3) {
        iVar12 = *(int *)(param_3[1] + (long)iVar7 * 4);
        iVar2 = *(int *)(param_3[1] + (long)iVar1 * 4);
        bVar4 = SBORROW4(iVar12,iVar2);
        iVar12 = iVar12 - iVar2;
      }
      if (iVar12 < 0 == bVar4) {
        return true;
      }
      *param_1 = iVar7;
      param_1[1] = iVar1;
      return true;
    }
    if (uVar5 == 5) {
      FUN_1099259b8(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,*param_3,param_3[1]);
      return true;
    }
  }
  piVar8 = param_1 + 2;
  iVar7 = *param_1;
  piVar10 = param_1 + 1;
  iVar1 = *piVar10;
  lVar6 = *param_3;
  iVar2 = *(int *)(lVar6 + (long)iVar1 * 4);
  iVar3 = *(int *)(lVar6 + (long)iVar7 * 4);
  bVar4 = SBORROW4(iVar2,iVar3);
  iVar12 = iVar2 - iVar3;
  if (iVar2 == iVar3) {
    iVar12 = *(int *)(param_3[1] + (long)iVar1 * 4);
    iVar3 = *(int *)(param_3[1] + (long)iVar7 * 4);
    bVar4 = SBORROW4(iVar12,iVar3);
    iVar12 = iVar12 - iVar3;
  }
  if (iVar12 < 0 == bVar4) {
    iVar3 = *piVar8;
    iVar13 = *(int *)(lVar6 + (long)iVar3 * 4);
    bVar4 = SBORROW4(iVar13,iVar2);
    iVar12 = iVar13 - iVar2;
    if (iVar13 == iVar2) {
      iVar12 = *(int *)(param_3[1] + (long)iVar3 * 4);
      iVar2 = *(int *)(param_3[1] + (long)iVar1 * 4);
      bVar4 = SBORROW4(iVar12,iVar2);
      iVar12 = iVar12 - iVar2;
    }
    if (iVar12 < 0 == bVar4) goto LAB_109925f44;
    *piVar10 = iVar3;
    *piVar8 = iVar1;
    iVar1 = *(int *)(lVar6 + (long)iVar3 * 4);
    iVar2 = *(int *)(lVar6 + (long)iVar7 * 4);
    bVar4 = SBORROW4(iVar1,iVar2);
    iVar12 = iVar1 - iVar2;
    if (iVar1 == iVar2) {
      iVar12 = *(int *)(param_3[1] + (long)iVar3 * 4);
      iVar1 = *(int *)(param_3[1] + (long)iVar7 * 4);
      bVar4 = SBORROW4(iVar12,iVar1);
      iVar12 = iVar12 - iVar1;
    }
    if (iVar12 < 0 == bVar4) goto LAB_109925f44;
    *param_1 = iVar3;
  }
  else {
    iVar3 = *piVar8;
    iVar13 = *(int *)(lVar6 + (long)iVar3 * 4);
    bVar4 = SBORROW4(iVar13,iVar2);
    iVar12 = iVar13 - iVar2;
    if (iVar13 == iVar2) {
      iVar12 = *(int *)(param_3[1] + (long)iVar3 * 4);
      iVar2 = *(int *)(param_3[1] + (long)iVar1 * 4);
      bVar4 = SBORROW4(iVar12,iVar2);
      iVar12 = iVar12 - iVar2;
    }
    if (iVar12 < 0 == bVar4) {
      *param_1 = iVar1;
      param_1[1] = iVar7;
      iVar1 = *(int *)(lVar6 + (long)iVar3 * 4);
      iVar2 = *(int *)(lVar6 + (long)iVar7 * 4);
      bVar4 = SBORROW4(iVar1,iVar2);
      iVar12 = iVar1 - iVar2;
      if (iVar1 == iVar2) {
        iVar12 = *(int *)(param_3[1] + (long)iVar3 * 4);
        iVar1 = *(int *)(param_3[1] + (long)iVar7 * 4);
        bVar4 = SBORROW4(iVar12,iVar1);
        iVar12 = iVar12 - iVar1;
      }
      if (iVar12 < 0 == bVar4) goto LAB_109925f44;
      *piVar10 = iVar3;
      piVar10 = piVar8;
    }
    else {
      *param_1 = iVar3;
      piVar10 = piVar8;
    }
  }
  *piVar10 = iVar7;
LAB_109925f44:
  if (param_1 + 3 == param_2) {
    return true;
  }
  lVar11 = 0;
  iVar12 = 0;
  lVar14 = param_3[1];
  piVar10 = param_1 + 3;
  do {
    iVar1 = *piVar10;
    iVar2 = *piVar8;
    iVar3 = *(int *)(lVar6 + (long)iVar1 * 4);
    iVar13 = *(int *)(lVar6 + (long)iVar2 * 4);
    bVar4 = SBORROW4(iVar3,iVar13);
    iVar7 = iVar3 - iVar13;
    if (iVar3 == iVar13) {
      iVar7 = *(int *)(lVar14 + (long)iVar1 * 4);
      iVar3 = *(int *)(lVar14 + (long)iVar2 * 4);
      bVar4 = SBORROW4(iVar7,iVar3);
      iVar7 = iVar7 - iVar3;
    }
    if (iVar7 < 0 != bVar4) {
      *piVar10 = iVar2;
      lVar15 = param_3[1];
      lVar16 = lVar11;
      do {
        iVar7 = *(int *)((long)param_1 + lVar16 + 4);
        iVar2 = *(int *)(lVar6 + (long)iVar1 * 4);
        iVar3 = *(int *)(lVar6 + (long)iVar7 * 4);
        if (iVar2 == iVar3) {
          if (*(int *)(lVar15 + (long)iVar7 * 4) <= *(int *)(lVar15 + (long)iVar1 * 4)) {
            piVar9 = (int *)((long)param_1 + lVar16 + 8);
            break;
          }
        }
        else {
          piVar9 = piVar8;
          if (iVar3 <= iVar2) break;
        }
        piVar8 = piVar8 + -1;
        *(int *)((long)param_1 + lVar16 + 8) = iVar7;
        lVar16 = lVar16 + -4;
        piVar9 = param_1;
      } while (lVar16 != -8);
      *piVar9 = iVar1;
      iVar12 = iVar12 + 1;
      if (iVar12 == 8) {
        return piVar10 + 1 == param_2;
      }
    }
    piVar9 = piVar10 + 1;
    lVar11 = lVar11 + 4;
    piVar8 = piVar10;
    piVar10 = piVar9;
    if (piVar9 == param_2) {
      return true;
    }
  } while( true );
}



/* Entry: 1099260f8; end: 10992619b;  */

long ** FUN_1099260f8(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  long **pplVar1;
  long *plStack_28;
  
  FUN_1099ab908(&plStack_28,param_3);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(plStack_28,*param_1);
  FUN_1092b4db8(plStack_28,&UNK_10f593767,5);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(plStack_28,*param_2);
  pplVar1 = &plStack_28;
  FUN_1099ab984(pplVar1);
  if (plStack_28 != (long *)0x0) {
    (**(code **)(*plStack_28 + 8))();
  }
  return pplVar1;
}



/* Entry: 10992619c; end: 10992764f;  */

void FUN_10992619c(undefined8 *param_1,long param_2,long *param_3,double *param_4,long param_5,
                  double *param_6)

{
  ulong uVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  code *pcVar9;
  uint uVar10;
  long *plVar11;
  double *pdVar12;
  double *pdVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  double *pdVar17;
  ulong uVar18;
  double *pdVar19;
  long lVar20;
  double *pdVar21;
  double *pdVar22;
  long lVar23;
  double *pdVar24;
  double *pdVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *puVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  long *plVar33;
  double *pdVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  int *piStack_158;
  double *pdStack_120;
  double *pdStack_100;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  
  if (param_3 == (long *)0x0) {
    uStack_e8 = 0;
    uStack_90 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_98 = 0;
    FUN_1099a9f0c(&uStack_e8,&UNK_10f58abc7,0x45,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_e0 + 0x7540,&UNK_10f58a7ec,0x1b);
LAB_109927648:
    puVar28 = &uStack_e8;
    func_0x0001099ab7c0();
    if (puVar28[6] != 0) {
      puVar28[7] = puVar28[6];
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar28);
    return;
  }
  if (param_6 == (double *)0x0) {
    uStack_e8 = 0;
    uStack_90 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_98 = 0;
    FUN_1099a9f0c(&uStack_e8,&UNK_10f58abc7,0x46,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_e0 + 0x7540,&UNK_10f58a243,0x1b);
    goto LAB_109927648;
  }
  if (param_4 == (double *)0x0) {
    uStack_e8 = 0;
    uStack_90 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_98 = 0;
    FUN_1099a9f0c(&uStack_e8,&UNK_10f58abc7,0x47,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_e0 + 0x7540,&UNK_10f58a808,0x1b);
    goto LAB_109927648;
  }
  plVar33 = param_3;
  (**(code **)(*param_3 + 0x20))();
  plVar11 = param_3;
  (**(code **)(*param_3 + 0x28))();
  uStack_e8 = CONCAT44(uStack_e8._4_4_,(int)plVar33);
  puStack_f0 = (undefined8 *)CONCAT44(puStack_f0._4_4_,(int)plVar11);
  if ((int)plVar33 != (int)plVar11) {
    puVar28 = &uStack_e8;
    FUN_109904144(puVar28,&puStack_f0,&UNK_10f58ac5a);
    puStack_f0 = puVar28;
    if (puVar28 == (undefined8 *)0x0) goto LAB_10992621c;
    FUN_1099ab8e4(&uStack_e8,&UNK_10f58abc7,0x48,&puStack_f0);
    func_0x0001099ab7c0();
LAB_109927514:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_1099275a8:
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1099275ac);
    (*pcVar9)();
  }
LAB_10992621c:
  *param_1 = 0xbff0000000000000;
  puVar28 = param_1 + 2;
  *puVar28 = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[1] = 0x1ffffffff;
  func_0x000107c2c4d8(puVar28,&UNK_10f58ac79,0x25);
  *(undefined4 *)(param_1 + 1) = 0;
  plVar33 = param_3;
  (**(code **)(*param_3 + 0x28))();
  uVar10 = (uint)plVar33;
  uVar30 = (ulong)(int)uVar10;
  if (uVar10 == 0) {
LAB_10992634c:
    uVar15 = (ulong)param_6 >> 3 & 1;
    if ((long)uVar30 <= (long)uVar15) {
      uVar15 = uVar30;
    }
    if (((ulong)param_6 & 7) != 0) {
      uVar15 = uVar30;
    }
    lVar32 = uVar30 - uVar15;
    if (0 < (long)uVar15) {
      _bzero(param_6,uVar15 << 3);
    }
    lVar16 = (lVar32 - (lVar32 >> 0x3f) & 0xfffffffffffffffeU) + uVar15;
    if (1 < lVar32) {
      lVar23 = lVar16;
      if (lVar16 <= (long)(uVar15 + 2)) {
        lVar23 = uVar15 + 2;
      }
      _bzero(param_6 + uVar15,(lVar23 + ~uVar15 & 0x1ffffffffffffffe) * 8 + 0x10);
    }
    if (lVar16 < (long)uVar30) {
      _bzero(param_6 + (lVar32 / 2) * 2 + uVar15,(lVar32 % 2) * 8);
    }
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    if (*(char *)((long)param_1 + 0x27) < '\0') {
      param_1[3] = 0x15;
      puVar28 = (undefined8 *)param_1[2];
    }
    else {
      *(undefined1 *)((long)param_1 + 0x27) = 0x15;
    }
    puVar28[1] = 0x7c627c202e65636e;
    *puVar28 = 0x65677265766e6f43;
    *(undefined8 *)((long)puVar28 + 0xd) = 0x2e30203d207c627c;
    *(undefined1 *)((long)puVar28 + 0x15) = 0;
    return;
  }
  uVar5 = uVar10 + 3;
  if (-1 < (int)uVar10) {
    uVar5 = uVar10;
  }
  uVar31 = -(ulong)((uint)((int)uVar5 >> 2) >> 0x1f) & 0xfffffffc00000000 |
           (ulong)(uint)((int)uVar5 >> 2) << 2;
  lVar32 = (long)((ulong)(uVar10 - ((int)uVar10 >> 0x1f)) << 0x20) >> 0x21;
  uVar29 = -(ulong)((uint)((int)uVar10 / 2) >> 0x1f) & 0xfffffffe00000000 |
           (ulong)(uint)((int)uVar10 / 2) << 1;
  uVar15 = uVar30 + 1;
  if (uVar15 < 3) {
    dVar35 = *param_4 * *param_4;
  }
  else {
    dVar35 = *param_4 * *param_4;
    dVar41 = param_4[1] * param_4[1];
    if (3 < (int)uVar10) {
      dVar36 = param_4[2] * param_4[2];
      dVar42 = param_4[3] * param_4[3];
      if (7 < uVar10) {
        pdVar12 = param_4 + 6;
        lVar16 = 4;
        do {
          dVar35 = dVar35 + pdVar12[-2] * pdVar12[-2];
          dVar41 = dVar41 + pdVar12[-1] * pdVar12[-1];
          dVar36 = dVar36 + *pdVar12 * *pdVar12;
          dVar42 = dVar42 + pdVar12[1] * pdVar12[1];
          lVar16 = lVar16 + 4;
          pdVar12 = pdVar12 + 4;
        } while (lVar16 < (long)uVar31);
      }
      dVar35 = dVar36 + dVar35;
      dVar41 = dVar42 + dVar41;
      if ((long)uVar31 < (long)uVar29) {
        dVar42 = (param_4 + uVar31)[1];
        dVar36 = param_4[uVar31];
        dVar35 = dVar35 + dVar36 * dVar36;
        dVar41 = dVar41 + dVar42 * dVar42;
      }
    }
    dVar35 = dVar35 + dVar41;
    lVar16 = uVar30 - uVar29;
    if (lVar16 != 0 && (long)uVar29 <= (long)uVar30) {
      pdVar12 = param_4 + lVar32 * 2;
      do {
        dVar35 = dVar35 + *pdVar12 * *pdVar12;
        lVar16 = lVar16 + -1;
        pdVar12 = pdVar12 + 1;
      } while (lVar16 != 0);
    }
  }
  if (dVar35 == 0.0) goto LAB_10992634c;
  pdVar12 = (double *)(uVar30 << 3);
  if ((int)uVar10 < 1) {
    pdVar13 = (double *)0x0;
    pdVar34 = (double *)0x0;
    pdStack_120 = (double *)0x0;
    pdStack_100 = (double *)0x0;
  }
  else {
    pdStack_120 = pdVar12;
    _malloc();
    if (pdStack_120 == (double *)0x0) goto LAB_109927514;
    pdVar34 = pdVar12;
    _malloc();
    if (pdVar34 == (double *)0x0) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1099275a8;
    }
    pdStack_100 = pdVar12;
    _malloc();
    if (pdStack_100 == (double *)0x0) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1099275a8;
    }
    pdVar13 = (double *)0x1;
    _calloc(1,pdVar12);
    if (pdVar13 == (double *)0x0) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1099275a8;
    }
  }
  dVar41 = *(double *)(param_5 + 0x10);
  (**(code **)(*param_3 + 0x10))(param_3,param_6,pdVar13);
  if (1 < (int)uVar10) {
    lVar16 = 0;
    pdVar17 = pdStack_120;
    pdVar24 = param_4;
    pdVar25 = pdVar13;
    do {
      dVar36 = *pdVar24;
      dVar42 = *pdVar25;
      pdVar17[1] = pdVar24[1] - pdVar25[1];
      *pdVar17 = dVar36 - dVar42;
      lVar16 = lVar16 + 2;
      pdVar17 = pdVar17 + 2;
      pdVar24 = pdVar24 + 2;
      pdVar25 = pdVar25 + 2;
    } while (lVar16 < (long)uVar29);
  }
  lVar16 = uVar30 - uVar29;
  if (lVar16 != 0 && (long)uVar29 <= (long)uVar30) {
    pdVar17 = param_4 + lVar32 * 2;
    pdVar24 = pdVar13 + lVar32 * 2;
    lVar23 = lVar16;
    pdVar25 = pdStack_120 + lVar32 * 2;
    do {
      *pdVar25 = *pdVar17 - *pdVar24;
      lVar23 = lVar23 + -1;
      pdVar17 = pdVar17 + 1;
      pdVar24 = pdVar24 + 1;
      pdVar25 = pdVar25 + 1;
    } while (lVar23 != 0);
  }
  dVar41 = SQRT(dVar35) * dVar41;
  if (uVar15 < 3) {
    dVar35 = *pdStack_120;
    if ((*(int *)(param_2 + 0x20) != 0) || (dVar41 < SQRT(dVar35 * dVar35))) {
      dVar35 = *param_6 * (dVar35 + *param_4);
LAB_109926774:
      piStack_158 = (int *)(param_2 + 0x20);
      pdVar17 = pdStack_120 + uVar31;
      pdVar24 = pdStack_100 + uVar31;
      uVar18 = (ulong)param_6 >> 3 & 1;
      if ((long)uVar30 <= (long)uVar18) {
        uVar18 = uVar30;
      }
      if (((ulong)param_6 & 7) != 0) {
        uVar18 = uVar30;
      }
      lVar27 = uVar30 - uVar18;
      uVar1 = lVar27 - (lVar27 >> 0x3f);
      pdVar2 = pdStack_120 + lVar32 * 2;
      pdVar3 = pdStack_100 + lVar32 * 2;
      pdVar4 = pdVar34 + lVar32 * 2;
      uVar8 = uVar1 & 0x1ffffffffffffffe;
      lVar23 = (uVar1 & 0xfffffffffffffffe) + uVar18;
      pdVar25 = pdStack_120 + 6;
      uVar1 = uVar29;
      if ((long)uVar29 < 3) {
        uVar1 = 2;
      }
      iVar14 = 1;
      dVar35 = -dVar35;
      dVar36 = 1.0;
LAB_10992686c:
      *(int *)(param_1 + 1) = iVar14;
      plVar33 = *(long **)(param_5 + 8);
      if (plVar33 == (long *)0x0) {
        if (1 < (int)uVar10) {
          _memcpy(pdStack_100,pdStack_120,uVar1 * 8);
        }
        pdVar22 = pdVar3;
        pdVar19 = pdVar2;
        lVar20 = lVar16;
        if ((long)uVar29 < (long)uVar30) {
          do {
            *pdVar22 = *pdVar19;
            lVar20 = lVar20 + -1;
            pdVar22 = pdVar22 + 1;
            pdVar19 = pdVar19 + 1;
          } while (lVar20 != 0);
        }
      }
      else {
        if (0 < (int)uVar10) {
          _bzero(pdStack_100,pdVar12);
        }
        (**(code **)(*plVar33 + 0x10))(plVar33,pdStack_120,pdStack_100);
      }
      if (uVar15 < 3) {
        dVar42 = *pdStack_120 * *pdStack_100;
      }
      else {
        dVar42 = *pdStack_120 * *pdStack_100;
        dVar37 = pdStack_120[1] * pdStack_100[1];
        if (3 < (int)uVar10) {
          dVar38 = pdStack_120[2] * pdStack_100[2];
          dVar40 = pdStack_120[3] * pdStack_100[3];
          if (7 < uVar10) {
            lVar20 = 4;
            pdVar19 = pdVar25;
            pdVar22 = pdStack_100 + 6;
            do {
              dVar42 = dVar42 + pdVar19[-2] * pdVar22[-2];
              dVar37 = dVar37 + pdVar19[-1] * pdVar22[-1];
              dVar38 = dVar38 + *pdVar19 * *pdVar22;
              dVar40 = dVar40 + pdVar19[1] * pdVar22[1];
              lVar20 = lVar20 + 4;
              pdVar22 = pdVar22 + 4;
              pdVar19 = pdVar19 + 4;
            } while (lVar20 < (long)uVar31);
          }
          dVar42 = dVar38 + dVar42;
          dVar37 = dVar40 + dVar37;
          if ((long)uVar31 < (long)uVar29) {
            dVar42 = dVar42 + *pdVar17 * *pdVar24;
            dVar37 = dVar37 + pdVar17[1] * pdVar24[1];
          }
        }
        dVar42 = dVar42 + dVar37;
        pdVar22 = pdVar2;
        pdVar19 = pdVar3;
        lVar20 = lVar16;
        if ((long)uVar29 < (long)uVar30) {
          do {
            dVar42 = dVar42 + *pdVar22 * *pdVar19;
            lVar20 = lVar20 + -1;
            pdVar22 = pdVar22 + 1;
            pdVar19 = pdVar19 + 1;
          } while (lVar20 != 0);
        }
      }
      if (ABS(dVar42) == INFINITY || ABS(dVar42) == 0.0) {
        *(undefined4 *)((long)param_1 + 0xc) = 2;
        FUN_109988e2c(&uStack_e8,&UNK_10f58acd2);
LAB_1099270b8:
        cVar6 = *(char *)((long)param_1 + 0x27);
        goto joined_r0x0001099270c0;
      }
      if (*(int *)(param_1 + 1) == 1) {
        if (1 < (int)uVar10) {
          _memcpy(pdVar34,pdStack_100,uVar1 * 8);
        }
        pdVar22 = pdVar4;
        pdVar19 = pdVar3;
        lVar20 = lVar16;
        if ((long)uVar29 < (long)uVar30) {
          do {
            *pdVar22 = *pdVar19;
            lVar20 = lVar20 + -1;
            pdVar22 = pdVar22 + 1;
            pdVar19 = pdVar19 + 1;
          } while (lVar20 != 0);
        }
      }
      else {
        dVar36 = dVar42 / dVar36;
        if (ABS(dVar36) == INFINITY || ABS(dVar36) == 0.0) {
          *(undefined4 *)((long)param_1 + 0xc) = 2;
          FUN_109988e2c(&uStack_e8,&UNK_10f58acf5);
          goto LAB_1099270b8;
        }
        if (1 < (int)uVar10) {
          lVar20 = 0;
          pdVar22 = pdVar34;
          pdVar19 = pdStack_100;
          do {
            dVar37 = *pdVar19;
            pdVar22[1] = pdVar19[1] + pdVar22[1] * dVar36;
            *pdVar22 = dVar37 + *pdVar22 * dVar36;
            lVar20 = lVar20 + 2;
            pdVar22 = pdVar22 + 2;
            pdVar19 = pdVar19 + 2;
          } while (lVar20 < (long)uVar29);
        }
        pdVar22 = pdVar4;
        pdVar19 = pdVar3;
        lVar20 = lVar16;
        if ((long)uVar29 < (long)uVar30) {
          do {
            *pdVar22 = *pdVar19 + dVar36 * *pdVar22;
            lVar20 = lVar20 + -1;
            pdVar22 = pdVar22 + 1;
            pdVar19 = pdVar19 + 1;
          } while (lVar20 != 0);
        }
      }
      if (0 < (int)uVar10) {
        _bzero(pdStack_100,pdVar12);
      }
      (**(code **)(*param_3 + 0x10))(param_3,pdVar34,pdStack_100);
      if (2 < uVar15) {
        dVar36 = *pdVar34 * *pdStack_100;
        dVar37 = pdVar34[1] * pdStack_100[1];
        if (3 < (int)uVar10) {
          dVar38 = pdVar34[2] * pdStack_100[2];
          dVar40 = pdVar34[3] * pdStack_100[3];
          if (7 < uVar10) {
            lVar20 = 4;
            pdVar19 = pdVar34 + 6;
            pdVar22 = pdStack_100 + 6;
            do {
              dVar36 = dVar36 + pdVar19[-2] * pdVar22[-2];
              dVar37 = dVar37 + pdVar19[-1] * pdVar22[-1];
              dVar38 = dVar38 + *pdVar19 * *pdVar22;
              dVar40 = dVar40 + pdVar19[1] * pdVar22[1];
              lVar20 = lVar20 + 4;
              pdVar22 = pdVar22 + 4;
              pdVar19 = pdVar19 + 4;
            } while (lVar20 < (long)uVar31);
          }
          dVar36 = dVar38 + dVar36;
          dVar37 = dVar40 + dVar37;
          if ((long)uVar31 < (long)uVar29) {
            dVar36 = dVar36 + pdVar34[uVar31] * *pdVar24;
            dVar37 = dVar37 + (pdVar34 + uVar31)[1] * pdVar24[1];
          }
        }
        dVar36 = dVar36 + dVar37;
        pdVar22 = pdVar4;
        pdVar19 = pdVar3;
        lVar20 = lVar16;
        if ((long)uVar29 < (long)uVar30) {
          do {
            dVar36 = dVar36 + *pdVar22 * *pdVar19;
            lVar20 = lVar20 + -1;
            pdVar22 = pdVar22 + 1;
            pdVar19 = pdVar19 + 1;
          } while (lVar20 != 0);
        }
        if ((ABS(dVar36) != INFINITY &&
            (ABS(dVar36) != 0.0 && (-1 < (long)dVar36 || 0xffffffffffffe < (long)ABS(dVar36) - 1U)))
            && (-1 < (long)dVar36 || 0x3fe < (long)ABS(dVar36) + 0xfff0000000000000U >> 0x35))
        goto LAB_109926c68;
        *(undefined4 *)((long)param_1 + 0xc) = 1;
        if ((3 < (int)uVar10) && (7 < uVar10)) {
          lVar32 = 4;
          do {
            lVar32 = lVar32 + 4;
          } while (lVar32 < (long)uVar31);
        }
        lVar32 = uVar30 - uVar29;
        if (lVar32 != 0 && (long)uVar29 <= (long)uVar30) {
          do {
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
        }
        if ((3 < (int)uVar10) && (7 < uVar10)) {
          lVar32 = 4;
          do {
            lVar32 = lVar32 + 4;
          } while (lVar32 < (long)uVar31);
        }
        lVar32 = uVar30 - uVar29;
        if (lVar32 != 0 && (long)uVar29 <= (long)uVar30) {
          do {
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
        }
LAB_1099272d4:
        FUN_109988e2c(&uStack_e8,&UNK_10f58ad42);
LAB_1099273a4:
        cVar6 = *(char *)((long)param_1 + 0x27);
        goto joined_r0x0001099270c0;
      }
      dVar36 = *pdVar34 * *pdStack_100;
      if ((ABS(dVar36) == INFINITY ||
          (ABS(dVar36) == 0.0 || (long)dVar36 < 0 && (long)ABS(dVar36) - 1U < 0xfffffffffffff)) ||
          (long)dVar36 < 0 && (long)ABS(dVar36) + 0xfff0000000000000U >> 0x35 < 0x3ff) {
        *(undefined4 *)((long)param_1 + 0xc) = 1;
        goto LAB_1099272d4;
      }
LAB_109926c68:
      dVar36 = dVar42 / dVar36;
      if (ABS(dVar36) == INFINITY) {
        *(undefined4 *)((long)param_1 + 0xc) = 2;
        FUN_109988e2c(&uStack_e8,&UNK_10f58ad93);
LAB_1099271f4:
        if (*(char *)((long)param_1 + 0x27) < '\0') {
          __ZdlPv(*puVar28);
        }
        param_1[3] = lStack_e0;
        *puVar28 = uStack_e8;
        param_1[4] = uStack_d8;
      }
      else {
        pdVar22 = param_6;
        pdVar19 = pdVar34;
        uVar26 = uVar18;
        if (0 < (long)uVar18) {
          do {
            *pdVar22 = *pdVar22 + dVar36 * *pdVar19;
            uVar26 = uVar26 - 1;
            pdVar22 = pdVar22 + 1;
            pdVar19 = pdVar19 + 1;
          } while (uVar26 != 0);
        }
        pdVar22 = param_6 + uVar18;
        pdVar19 = pdVar34 + uVar18;
        uVar26 = uVar18;
        if (1 < lVar27) {
          do {
            dVar37 = *pdVar19;
            pdVar22[1] = pdVar22[1] + pdVar19[1] * dVar36;
            *pdVar22 = *pdVar22 + dVar37 * dVar36;
            uVar26 = uVar26 + 2;
            pdVar22 = pdVar22 + 2;
            pdVar19 = pdVar19 + 2;
          } while ((long)uVar26 < lVar23);
        }
        pdVar22 = param_6 + uVar18 + uVar8;
        pdVar19 = pdVar34 + uVar18 + uVar8;
        lVar20 = lVar27 % 2;
        if (lVar23 < (long)uVar30) {
          do {
            *pdVar22 = *pdVar22 + dVar36 * *pdVar19;
            lVar20 = lVar20 + -1;
            pdVar22 = pdVar22 + 1;
            pdVar19 = pdVar19 + 1;
          } while (lVar20 != 0);
        }
        iVar14 = *(int *)(param_2 + 0x48);
        iVar7 = 0;
        if (iVar14 != 0) {
          iVar7 = *(int *)(param_1 + 1) / iVar14;
        }
        if (*(int *)(param_1 + 1) == iVar7 * iVar14) {
          if (0 < (int)uVar10) {
            _bzero(pdVar13,pdVar12);
          }
          (**(code **)(*param_3 + 0x10))(param_3,param_6,pdVar13);
          if (1 < (int)uVar10) {
            lVar20 = 0;
            pdVar22 = pdStack_120;
            pdVar19 = param_4;
            pdVar21 = pdVar13;
            do {
              dVar36 = *pdVar19;
              dVar37 = *pdVar21;
              pdVar22[1] = pdVar19[1] - pdVar21[1];
              *pdVar22 = dVar36 - dVar37;
              lVar20 = lVar20 + 2;
              pdVar22 = pdVar22 + 2;
              pdVar19 = pdVar19 + 2;
              pdVar21 = pdVar21 + 2;
            } while (lVar20 < (long)uVar29);
          }
          pdVar22 = pdVar2;
          pdVar19 = param_4 + lVar32 * 2;
          pdVar21 = pdVar13 + lVar32 * 2;
          lVar20 = lVar16;
          if ((long)uVar29 < (long)uVar30) {
            do {
              *pdVar22 = *pdVar19 - *pdVar21;
              lVar20 = lVar20 + -1;
              pdVar22 = pdVar22 + 1;
              pdVar19 = pdVar19 + 1;
              pdVar21 = pdVar21 + 1;
            } while (lVar20 != 0);
          }
        }
        else {
          if (1 < (int)uVar10) {
            lVar20 = 0;
            pdVar22 = pdStack_120;
            pdVar19 = pdStack_100;
            do {
              dVar37 = *pdVar19;
              pdVar22[1] = pdVar22[1] - pdVar19[1] * dVar36;
              *pdVar22 = *pdVar22 - dVar37 * dVar36;
              lVar20 = lVar20 + 2;
              pdVar22 = pdVar22 + 2;
              pdVar19 = pdVar19 + 2;
            } while (lVar20 < (long)uVar29);
          }
          pdVar22 = pdVar2;
          pdVar19 = pdVar3;
          lVar20 = lVar16;
          if ((long)uVar29 < (long)uVar30) {
            do {
              *pdVar22 = *pdVar22 - dVar36 * *pdVar19;
              lVar20 = lVar20 + -1;
              pdVar22 = pdVar22 + 1;
              pdVar19 = pdVar19 + 1;
            } while (lVar20 != 0);
          }
        }
        if (uVar15 < 3) {
          dVar36 = *pdStack_120;
          dVar37 = *param_6 * (*param_4 + dVar36);
        }
        else {
          dVar36 = *pdStack_120;
          dVar37 = *param_6 * (*param_4 + dVar36);
          dVar38 = param_6[1] * (param_4[1] + pdStack_120[1]);
          if (3 < (int)uVar10) {
            dVar40 = param_6[2] * (param_4[2] + pdStack_120[2]);
            dVar39 = param_6[3] * (param_4[3] + pdStack_120[3]);
            if (7 < uVar10) {
              lVar20 = 4;
              pdVar21 = param_6 + 6;
              pdVar19 = param_4 + 6;
              pdVar22 = pdVar25;
              do {
                dVar37 = dVar37 + pdVar21[-2] * (pdVar19[-2] + pdVar22[-2]);
                dVar38 = dVar38 + pdVar21[-1] * (pdVar19[-1] + pdVar22[-1]);
                lVar20 = lVar20 + 4;
                dVar40 = dVar40 + *pdVar21 * (*pdVar19 + *pdVar22);
                dVar39 = dVar39 + pdVar21[1] * (pdVar19[1] + pdVar22[1]);
                pdVar22 = pdVar22 + 4;
                pdVar19 = pdVar19 + 4;
                pdVar21 = pdVar21 + 4;
              } while (lVar20 < (long)uVar31);
            }
            dVar37 = dVar40 + dVar37;
            dVar38 = dVar39 + dVar38;
            if ((long)uVar31 < (long)uVar29) {
              dVar37 = dVar37 + param_6[uVar31] * (param_4[uVar31] + *pdVar17);
              dVar38 = dVar38 + (param_6 + uVar31)[1] * ((param_4 + uVar31)[1] + pdVar17[1]);
            }
          }
          dVar37 = dVar37 + dVar38;
          pdVar22 = param_6 + lVar32 * 2;
          pdVar19 = param_4 + lVar32 * 2;
          pdVar21 = pdVar2;
          lVar20 = lVar16;
          if ((long)uVar29 < (long)uVar30) {
            do {
              dVar37 = dVar37 + *pdVar22 * (*pdVar19 + *pdVar21);
              lVar20 = lVar20 + -1;
              pdVar22 = pdVar22 + 1;
              pdVar19 = pdVar19 + 1;
              pdVar21 = pdVar21 + 1;
            } while (lVar20 != 0);
          }
        }
        iVar14 = *(int *)(param_1 + 1);
        dVar37 = -dVar37;
        if ((((dVar37 - dVar35) * (double)iVar14) / dVar37 < *(double *)(param_5 + 0x18)) &&
           (*piStack_158 <= iVar14)) {
          *(undefined4 *)((long)param_1 + 0xc) = 0;
          if (2 < uVar15) {
            if ((3 < (int)uVar10) && (7 < uVar10)) {
              lVar32 = 4;
              do {
                lVar32 = lVar32 + 4;
              } while (lVar32 < (long)uVar31);
            }
            lVar32 = uVar30 - uVar29;
            if (lVar32 != 0 && (long)uVar29 <= (long)uVar30) {
              do {
                lVar32 = lVar32 + -1;
              } while (lVar32 != 0);
            }
          }
          FUN_109988e2c(&uStack_e8,&UNK_10f58add0);
          goto LAB_1099273a4;
        }
        if (uVar15 < 3) {
          dVar36 = dVar36 * dVar36;
        }
        else {
          dVar36 = *pdStack_120 * *pdStack_120;
          dVar35 = pdStack_120[1] * pdStack_120[1];
          if (3 < (int)uVar10) {
            dVar38 = pdStack_120[2] * pdStack_120[2];
            dVar40 = pdStack_120[3] * pdStack_120[3];
            if (7 < uVar10) {
              lVar20 = 4;
              pdVar22 = pdVar25;
              do {
                dVar36 = dVar36 + pdVar22[-2] * pdVar22[-2];
                dVar35 = dVar35 + pdVar22[-1] * pdVar22[-1];
                dVar38 = dVar38 + *pdVar22 * *pdVar22;
                dVar40 = dVar40 + pdVar22[1] * pdVar22[1];
                lVar20 = lVar20 + 4;
                pdVar22 = pdVar22 + 4;
              } while (lVar20 < (long)uVar31);
            }
            dVar36 = dVar38 + dVar36;
            dVar35 = dVar40 + dVar35;
            if ((long)uVar31 < (long)uVar29) {
              dVar36 = dVar36 + *pdVar17 * *pdVar17;
              dVar35 = dVar35 + pdVar17[1] * pdVar17[1];
            }
          }
          dVar36 = dVar36 + dVar35;
          pdVar22 = pdVar2;
          lVar20 = lVar16;
          if ((long)uVar29 < (long)uVar30) {
            do {
              dVar36 = dVar36 + *pdVar22 * *pdVar22;
              lVar20 = lVar20 + -1;
              pdVar22 = pdVar22 + 1;
            } while (lVar20 != 0);
          }
        }
        if ((SQRT(dVar36) <= dVar41) && (*piStack_158 <= iVar14)) {
          *(undefined4 *)((long)param_1 + 0xc) = 0;
          FUN_109988e2c(&uStack_e8,&UNK_10f58ae04);
          goto LAB_1099271f4;
        }
        if (iVar14 < *(int *)(param_2 + 0x24)) goto code_r0x000109927044;
      }
      goto LAB_1099270e0;
    }
  }
  else {
    dVar36 = pdStack_120[1];
    dVar35 = *pdStack_120;
    dVar42 = dVar35 * dVar35;
    dVar37 = dVar36 * dVar36;
    if (3 < (int)uVar10) {
      dVar38 = pdStack_120[2] * pdStack_120[2];
      dVar40 = pdStack_120[3] * pdStack_120[3];
      if (7 < uVar10) {
        pdVar17 = pdStack_120 + 6;
        lVar23 = 4;
        do {
          dVar42 = dVar42 + pdVar17[-2] * pdVar17[-2];
          dVar37 = dVar37 + pdVar17[-1] * pdVar17[-1];
          dVar38 = dVar38 + *pdVar17 * *pdVar17;
          dVar40 = dVar40 + pdVar17[1] * pdVar17[1];
          lVar23 = lVar23 + 4;
          pdVar17 = pdVar17 + 4;
        } while (lVar23 < (long)uVar31);
      }
      dVar42 = dVar38 + dVar42;
      dVar37 = dVar40 + dVar37;
      if ((long)uVar31 < (long)uVar29) {
        dVar40 = (pdStack_120 + uVar31)[1];
        dVar38 = pdStack_120[uVar31];
        dVar42 = dVar42 + dVar38 * dVar38;
        dVar37 = dVar37 + dVar40 * dVar40;
      }
    }
    dVar42 = dVar42 + dVar37;
    lVar23 = uVar30 - uVar29;
    if (lVar23 != 0 && (long)uVar29 <= (long)uVar30) {
      pdVar17 = pdStack_120 + lVar32 * 2;
      do {
        dVar42 = dVar42 + *pdVar17 * *pdVar17;
        lVar23 = lVar23 + -1;
        pdVar17 = pdVar17 + 1;
      } while (lVar23 != 0);
    }
    if ((*(int *)(param_2 + 0x20) != 0) || (dVar41 < SQRT(dVar42))) {
      dVar35 = *param_6 * (dVar35 + *param_4);
      dVar36 = param_6[1] * (dVar36 + param_4[1]);
      if (3 < (int)uVar10) {
        dVar42 = param_6[2] * (param_4[2] + pdStack_120[2]);
        dVar37 = param_6[3] * (param_4[3] + pdStack_120[3]);
        if (7 < uVar10) {
          pdVar17 = pdStack_120 + 6;
          pdVar24 = param_4 + 6;
          pdVar25 = param_6 + 6;
          lVar23 = 4;
          do {
            dVar35 = dVar35 + pdVar25[-2] * (pdVar24[-2] + pdVar17[-2]);
            dVar36 = dVar36 + pdVar25[-1] * (pdVar24[-1] + pdVar17[-1]);
            lVar23 = lVar23 + 4;
            dVar42 = dVar42 + *pdVar25 * (*pdVar24 + *pdVar17);
            dVar37 = dVar37 + pdVar25[1] * (pdVar24[1] + pdVar17[1]);
            pdVar17 = pdVar17 + 4;
            pdVar24 = pdVar24 + 4;
            pdVar25 = pdVar25 + 4;
          } while (lVar23 < (long)uVar31);
        }
        dVar35 = dVar42 + dVar35;
        dVar36 = dVar37 + dVar36;
        if ((long)uVar31 < (long)uVar29) {
          dVar35 = dVar35 + param_6[uVar31] * (param_4[uVar31] + pdStack_120[uVar31]);
          dVar36 = dVar36 + (param_6 + uVar31)[1] *
                            ((param_4 + uVar31)[1] + (pdStack_120 + uVar31)[1]);
        }
      }
      dVar35 = dVar35 + dVar36;
      lVar23 = uVar30 - uVar29;
      if (lVar23 != 0 && (long)uVar29 <= (long)uVar30) {
        pdVar17 = pdStack_120 + lVar32 * 2;
        pdVar24 = param_4 + lVar32 * 2;
        pdVar25 = param_6 + lVar32 * 2;
        do {
          dVar35 = dVar35 + *pdVar25 * (*pdVar24 + *pdVar17);
          lVar23 = lVar23 + -1;
          pdVar17 = pdVar17 + 1;
          pdVar24 = pdVar24 + 1;
          pdVar25 = pdVar25 + 1;
        } while (lVar23 != 0);
      }
      goto LAB_109926774;
    }
  }
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  FUN_109988e2c(&uStack_e8,&UNK_10f58acb5);
  cVar6 = *(char *)((long)param_1 + 0x27);
joined_r0x0001099270c0:
  if (cVar6 < '\0') {
    __ZdlPv(*puVar28);
  }
  param_1[3] = lStack_e0;
  *puVar28 = uStack_e8;
  param_1[4] = uStack_d8;
LAB_1099270e0:
  _free(pdVar13);
  _free(pdStack_100);
  _free(pdVar34);
  _free(pdStack_120);
  return;
code_r0x000109927044:
  iVar14 = iVar14 + 1;
  dVar35 = dVar37;
  dVar36 = dVar42;
  goto LAB_10992686c;
}



/* Entry: 109927650; end: 10992767f;  */

void FUN_109927650(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109927680; end: 109927693;  */

void FUN_109927680(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  return;
}



/* Entry: 109927694; end: 1099276e3;  */

long FUN_109927694(long param_1)

{
  FUN_10991630c(param_1 + 8);
  return param_1;
}



/* Entry: 1099276e4; end: 10992774f;  */

undefined8 * FUN_1099276e4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    plVar2 = (long *)param_1[1];
    plVar1 = plVar3;
    if (plVar2 != plVar3) {
      do {
        plVar1 = plVar2 + -3;
        if (*plVar1 != 0) {
          plVar2[-2] = *plVar1;
          __ZdlPv();
        }
        plVar2 = plVar1;
      } while (plVar1 != plVar3);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar3;
    __ZdlPv(plVar1);
  }
  return param_1;
}



/* Entry: 109927750; end: 10992785f;  */

undefined8 * FUN_109927750(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
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
  
  puVar1 = &uStack_90;
  *param_1 = &PTR_FUN_110b1d8d0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0xffffffff00000001;
  *(undefined4 *)(param_1 + 0xb) = 1;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = param_2;
  if (param_2 == 0) {
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
    FUN_1099a9f0c(&uStack_90,&UNK_10f58ae2f,0x40,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_88 + 0x7540,&UNK_10f58aec4,0x22);
    func_0x0001099ab7c0();
    if (param_1[7] != 0) {
      param_1[8] = param_1[7];
      __ZdlPv();
    }
    FUN_1099276e4(param_1 + 4);
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      param_1[2] = lVar2;
      __ZdlPv();
    }
    __Unwind_Resume();
    if (puVar1[7] != 0) {
      puVar1[8] = puVar1[7];
      __ZdlPv();
    }
    plVar5 = (long *)puVar1[4];
    if (plVar5 != (long *)0x0) {
      plVar4 = (long *)puVar1[5];
      plVar3 = plVar5;
      if (plVar4 != plVar5) {
        do {
          plVar3 = plVar4 + -3;
          if (*plVar3 != 0) {
            plVar4[-2] = *plVar3;
            __ZdlPv();
          }
          plVar4 = plVar3;
        } while (plVar3 != plVar5);
        plVar3 = (long *)puVar1[4];
      }
      puVar1[5] = plVar5;
      __ZdlPv(plVar3);
    }
    if (puVar1[1] != 0) {
      puVar1[2] = puVar1[1];
      __ZdlPv();
    }
    return puVar1;
  }
  return param_1;
}



/* Entry: 109927860; end: 109927977;  */

long FUN_109927860(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x28);
    plVar1 = plVar3;
    if (plVar2 != plVar3) {
      do {
        plVar1 = plVar2 + -3;
        if (*plVar1 != 0) {
          plVar2[-2] = *plVar1;
          __ZdlPv();
        }
        plVar2 = plVar1;
      } while (plVar1 != plVar3);
      plVar1 = *(long **)(param_1 + 0x20);
    }
    *(long **)(param_1 + 0x28) = plVar3;
    __ZdlPv(plVar1);
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109927978; end: 109928ac7;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_109927978(long param_1,long *param_2,long param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long *******ppppppplVar8;
  code *pcVar9;
  bool bVar10;
  undefined4 *puVar11;
  long *******ppppppplVar12;
  long ******pppppplVar13;
  long *******ppppppplVar14;
  long ******pppppplVar15;
  long *******ppppppplVar16;
  long *******ppppppplVar17;
  ulong uVar18;
  long ******pppppplVar19;
  long *****ppppplVar20;
  long *******ppppppplVar21;
  long *******ppppppplVar22;
  ulong uVar23;
  long ******pppppplVar24;
  long *****ppppplVar25;
  long *******ppppppplVar26;
  long lVar27;
  long *******ppppppplVar28;
  ulong uVar29;
  ulong uVar30;
  long ******pppppplVar31;
  ulong uVar32;
  ulong uVar33;
  undefined4 *puVar34;
  long *******ppppppplVar35;
  undefined8 *puVar36;
  long *plVar37;
  long *plVar38;
  int *piVar39;
  long ******pppppplVar40;
  long lVar41;
  long lVar42;
  undefined4 *puVar43;
  long *******ppppppplVar44;
  long lVar45;
  long ******pppppplVar46;
  long *plVar47;
  ulong *puVar48;
  long *plVar49;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  long lStack_a0;
  long *******ppppppplStack_98;
  long *******ppppppplStack_90;
  ulong uStack_88;
  long *******ppppppplStack_80;
  long *******ppppppplStack_78;
  undefined8 uStack_70;
  
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  puVar43 = *(undefined4 **)(param_1 + 0x38);
  *(undefined4 **)(param_1 + 0x40) = puVar43;
  if (puVar43 < *(undefined4 **)(param_1 + 0x48)) {
    puVar34 = puVar43 + 1;
    *puVar43 = 0;
LAB_109927a1c:
    *(undefined4 **)(param_1 + 0x40) = puVar34;
    ppppppplStack_90 = (long *******)0x0;
    uStack_88 = 0;
    lStack_a0 = 0;
    ppppppplStack_98 = (long *******)&ppppppplStack_90;
    ppppppplStack_a8 = (long *******)0x0;
    plVar37 = (long *)*param_4;
    ppppppplStack_b0 = (long *******)&ppppppplStack_a8;
    if (plVar37 != param_4 + 1) {
      do {
        ppppppplVar12 = (long *******)&ppppppplStack_a8;
        ppppppplVar22 = (long *******)&ppppppplStack_a8;
        ppppppplVar16 = (long *******)&ppppppplStack_a8;
        if ((long ********)ppppppplStack_b0 == &ppppppplStack_a8) {
LAB_109927afc:
          ppppppplVar28 = (long *******)&ppppppplStack_b0;
          if (ppppppplStack_a8 != (long *******)0x0) {
            ppppppplVar22 = ppppppplVar12 + 1;
            ppppppplVar28 = ppppppplVar12;
            ppppppplVar16 = ppppppplVar12;
          }
          if (ppppppplVar28[1] == (long ******)0x0) goto LAB_109927b18;
        }
        else {
          iVar5 = (int)plVar37[4];
          ppppppplVar28 = (long *******)&ppppppplStack_a8;
          ppppppplVar17 = ppppppplStack_a8;
          if (ppppppplStack_a8 == (long *******)0x0) {
            do {
              ppppppplVar12 = (long *******)ppppppplVar28[2];
              bVar10 = (long *******)*ppppppplVar12 == ppppppplVar28;
              ppppppplVar28 = ppppppplVar12;
            } while (bVar10);
            if (*(int *)(ppppppplVar12 + 4) < iVar5) goto LAB_109927afc;
          }
          else {
            do {
              ppppppplVar12 = ppppppplVar17;
              ppppppplVar17 = (long *******)ppppppplVar12[1];
            } while ((long *******)ppppppplVar12[1] != (long *******)0x0);
            ppppppplVar28 = ppppppplStack_a8;
            if (*(int *)(ppppppplVar12 + 4) < iVar5) goto LAB_109927afc;
            do {
              while (ppppppplVar16 = ppppppplVar28, *(int *)(ppppppplVar16 + 4) <= iVar5) {
                if (iVar5 <= *(int *)(ppppppplVar16 + 4)) goto LAB_109928024;
                ppppppplVar28 = (long *******)ppppppplVar16[1];
                if ((long *******)ppppppplVar16[1] == (long *******)0x0) {
                  ppppppplVar22 = ppppppplVar16 + 1;
                  goto LAB_109927b18;
                }
              }
              ppppppplVar28 = (long *******)*ppppppplVar16;
              ppppppplVar22 = ppppppplVar16;
            } while ((long *******)*ppppppplVar16 != (long *******)0x0);
          }
LAB_109927b18:
          ppppppplVar12 = (long *******)0x40;
          __Znwm();
          ppppppplStack_80 = ppppppplVar12;
          ppppppplStack_78 = (long *******)&ppppppplStack_b0;
          uStack_70 = 0;
          *(int *)(ppppppplVar12 + 4) = (int)plVar37[4];
          ppppppplVar28 = ppppppplVar12 + 6;
          *ppppppplVar28 = (long ******)0x0;
          ppppppplVar17 = ppppppplVar12 + 5;
          *ppppppplVar17 = (long ******)ppppppplVar28;
          ppppppplVar12[7] = (long ******)0x0;
          plVar49 = (long *)plVar37[5];
          if (plVar49 != plVar37 + 6) {
            pppppplVar40 = (long ******)0x0;
            ppppppplVar44 = (long *******)0x0;
            ppppppplVar21 = ppppppplVar28;
            do {
              pppppplVar46 = (long ******)plVar49[4];
              ppppppplVar14 = ppppppplVar28;
              ppppppplVar26 = ppppppplVar28;
              ppppppplVar35 = ppppppplVar28;
              if (ppppppplVar21 == ppppppplVar28) {
LAB_109927c08:
                if (ppppppplVar44 != (long *******)0x0) {
                  ppppppplVar26 = ppppppplVar14 + 1;
                  ppppppplVar35 = ppppppplVar14;
                }
                if (*ppppppplVar26 == (long ******)0x0) goto LAB_109927c28;
              }
              else {
                ppppppplVar21 = ppppppplVar28;
                ppppppplVar8 = ppppppplVar44;
                if (ppppppplVar44 == (long *******)0x0) {
                  do {
                    ppppppplVar14 = (long *******)ppppppplVar21[2];
                    bVar10 = (long *******)*ppppppplVar14 == ppppppplVar21;
                    ppppppplVar21 = ppppppplVar14;
                  } while (bVar10);
                  if (ppppppplVar14[4] < pppppplVar46) goto LAB_109927c08;
                }
                else {
                  do {
                    ppppppplVar14 = ppppppplVar8;
                    ppppppplVar8 = (long *******)ppppppplVar14[1];
                  } while ((long *******)ppppppplVar14[1] != (long *******)0x0);
                  if (ppppppplVar14[4] < pppppplVar46) goto LAB_109927c08;
                  do {
                    while (ppppppplVar35 = ppppppplVar44, ppppppplVar35[4] <= pppppplVar46) {
                      if (pppppplVar46 <= ppppppplVar35[4]) goto LAB_109927dfc;
                      ppppppplVar44 = (long *******)ppppppplVar35[1];
                      if ((long *******)ppppppplVar35[1] == (long *******)0x0) {
                        ppppppplVar26 = ppppppplVar35 + 1;
                        goto LAB_109927c28;
                      }
                    }
                    ppppppplVar44 = (long *******)*ppppppplVar35;
                    ppppppplVar26 = ppppppplVar35;
                  } while ((long *******)*ppppppplVar35 != (long *******)0x0);
                }
LAB_109927c28:
                pppppplVar13 = (long ******)0x28;
                __Znwm();
                pppppplVar13[4] = (long *****)pppppplVar46;
                *pppppplVar13 = (long *****)0x0;
                pppppplVar13[1] = (long *****)0x0;
                pppppplVar13[2] = (long *****)ppppppplVar35;
                *ppppppplVar26 = pppppplVar13;
                if ((long ******)**ppppppplVar17 != (long ******)0x0) {
                  *ppppppplVar17 = (long ******)**ppppppplVar17;
                  pppppplVar13 = *ppppppplVar26;
                }
                pppppplVar46 = *ppppppplVar28;
                bVar10 = pppppplVar13 == pppppplVar46;
                *(bool *)(pppppplVar13 + 3) = bVar10;
joined_r0x000109927c68:
                if ((bVar10) ||
                   (pppppplVar19 = (long ******)pppppplVar13[2], ((ulong)pppppplVar19[3] & 1) != 0))
                goto LAB_109927df4;
                pppppplVar15 = (long ******)pppppplVar19[2];
                pppppplVar24 = (long ******)*pppppplVar15;
                if (pppppplVar24 == pppppplVar19) {
                  if ((pppppplVar15[1] == (long *****)0x0) ||
                     (pppppplVar31 = (long ******)(pppppplVar15[1] + 3),
                     *(char *)pppppplVar31 == '\x01')) {
                    pppppplVar46 = pppppplVar19;
                    if ((long ******)*pppppplVar19 != pppppplVar13) {
                      pppppplVar46 = (long ******)pppppplVar19[1];
                      ppppplVar20 = *pppppplVar46;
                      pppppplVar19[1] = ppppplVar20;
                      pppppplVar13 = pppppplVar19;
                      if (ppppplVar20 != (long *****)0x0) {
                        ppppplVar20[2] = (long ****)pppppplVar19;
                        pppppplVar15 = (long ******)pppppplVar19[2];
                        pppppplVar13 = (long ******)*pppppplVar15;
                      }
                      pppppplVar46[2] = (long *****)pppppplVar15;
                      lVar41 = 0;
                      if (pppppplVar13 != pppppplVar19) {
                        lVar41 = 8;
                      }
                      *(long *******)((long)pppppplVar15 + lVar41) = pppppplVar46;
                      *pppppplVar46 = (long *****)pppppplVar19;
                      pppppplVar19[2] = (long *****)pppppplVar46;
                      pppppplVar15 = (long ******)pppppplVar46[2];
                      pppppplVar24 = (long ******)*pppppplVar15;
                    }
                    *(undefined1 *)(pppppplVar46 + 3) = 1;
                    *(undefined1 *)(pppppplVar15 + 3) = 0;
                    ppppplVar20 = pppppplVar24[1];
                    *pppppplVar15 = ppppplVar20;
                    if (ppppplVar20 != (long *****)0x0) {
                      ppppplVar20[2] = (long ****)pppppplVar15;
                    }
                    ppppplVar20 = pppppplVar15[2];
                    pppppplVar24[2] = ppppplVar20;
                    lVar41 = 0;
                    if ((long ******)*ppppplVar20 != pppppplVar15) {
                      lVar41 = 8;
                    }
                    *(long *******)((long)ppppplVar20 + lVar41) = pppppplVar24;
                    pppppplVar24[1] = (long *****)pppppplVar15;
                    pppppplVar15[2] = (long *****)pppppplVar24;
                    goto LAB_109927df4;
                  }
LAB_109927cb4:
                  *(undefined1 *)(pppppplVar19 + 3) = 1;
                  bVar10 = pppppplVar15 == pppppplVar46;
                  *(bool *)(pppppplVar15 + 3) = bVar10;
                  *(char *)pppppplVar31 = '\x01';
                  pppppplVar13 = pppppplVar15;
                  goto joined_r0x000109927c68;
                }
                if ((pppppplVar24 != (long ******)0x0) &&
                   (pppppplVar31 = pppppplVar24 + 3, *(char *)pppppplVar31 != '\x01'))
                goto LAB_109927cb4;
                pppppplVar46 = (long ******)*pppppplVar19;
                if (pppppplVar46 == pppppplVar13) {
                  ppppplVar20 = pppppplVar46[1];
                  *pppppplVar19 = ppppplVar20;
                  if (ppppplVar20 != (long *****)0x0) {
                    ppppplVar20[2] = (long ****)pppppplVar19;
                    pppppplVar15 = (long ******)pppppplVar19[2];
                  }
                  pppppplVar46[2] = (long *****)pppppplVar15;
                  lVar41 = 0;
                  if ((long ******)*pppppplVar15 != pppppplVar19) {
                    lVar41 = 8;
                  }
                  *(long *******)((long)pppppplVar15 + lVar41) = pppppplVar46;
                  pppppplVar46[1] = (long *****)pppppplVar19;
                  pppppplVar19[2] = (long *****)pppppplVar46;
                  pppppplVar15 = (long ******)pppppplVar46[2];
                  pppppplVar19 = pppppplVar46;
                }
                *(undefined1 *)(pppppplVar19 + 3) = 1;
                *(undefined1 *)(pppppplVar15 + 3) = 0;
                ppppplVar20 = pppppplVar15[1];
                ppppplVar25 = (long *****)*ppppplVar20;
                pppppplVar15[1] = ppppplVar25;
                if (ppppplVar25 != (long *****)0x0) {
                  ppppplVar25[2] = (long ****)pppppplVar15;
                }
                ppppplVar25 = pppppplVar15[2];
                ppppplVar20[2] = (long ****)ppppplVar25;
                lVar41 = 0;
                if ((long ******)*ppppplVar25 != pppppplVar15) {
                  lVar41 = 8;
                }
                *(long ******)((long)ppppplVar25 + lVar41) = ppppplVar20;
                *ppppplVar20 = (long ****)pppppplVar15;
                pppppplVar15[2] = ppppplVar20;
LAB_109927df4:
                pppppplVar40 = (long ******)((long)pppppplVar40 + 1);
                ppppppplVar12[7] = pppppplVar40;
              }
LAB_109927dfc:
              plVar38 = (long *)plVar49[1];
              plVar47 = plVar49;
              if ((long *)plVar49[1] == (long *)0x0) {
                do {
                  plVar49 = (long *)plVar47[2];
                  bVar10 = (long *)*plVar49 != plVar47;
                  plVar47 = plVar49;
                } while (bVar10);
              }
              else {
                do {
                  plVar49 = plVar38;
                  plVar38 = (long *)*plVar49;
                } while ((long *)*plVar49 != (long *)0x0);
              }
              if (plVar49 == plVar37 + 6) break;
              ppppppplVar44 = (long *******)*ppppppplVar28;
              ppppppplVar21 = (long *******)*ppppppplVar17;
            } while( true );
          }
          ppppppplVar12 = ppppppplStack_80;
          *ppppppplStack_80 = (long ******)0x0;
          ppppppplStack_80[1] = (long ******)0x0;
          ppppppplStack_80[2] = (long ******)ppppppplVar16;
          *ppppppplVar22 = (long ******)ppppppplStack_80;
          if ((long *******)*ppppppplStack_b0 != (long *******)0x0) {
            ppppppplVar12 = (long *******)*ppppppplVar22;
            ppppppplStack_b0 = (long *******)*ppppppplStack_b0;
          }
          bVar10 = ppppppplVar12 == ppppppplStack_a8;
          *(bool *)(ppppppplVar12 + 3) = bVar10;
joined_r0x000109927e8c:
          if ((bVar10) ||
             (ppppppplVar22 = (long *******)ppppppplVar12[2], ((ulong)ppppppplVar22[3] & 1) != 0))
          goto LAB_109928018;
          ppppppplVar16 = (long *******)ppppppplVar22[2];
          ppppppplVar28 = (long *******)*ppppppplVar16;
          if (ppppppplVar28 == ppppppplVar22) {
            if ((ppppppplVar16[1] == (long ******)0x0) ||
               (ppppppplVar17 = (long *******)(ppppppplVar16[1] + 3),
               *(char *)ppppppplVar17 == '\x01')) {
              ppppppplVar17 = ppppppplVar22;
              if ((long *******)*ppppppplVar22 != ppppppplVar12) {
                ppppppplVar17 = (long *******)ppppppplVar22[1];
                pppppplVar40 = *ppppppplVar17;
                ppppppplVar22[1] = pppppplVar40;
                ppppppplVar12 = ppppppplVar22;
                if (pppppplVar40 != (long ******)0x0) {
                  pppppplVar40[2] = (long *****)ppppppplVar22;
                  ppppppplVar16 = (long *******)ppppppplVar22[2];
                  ppppppplVar12 = (long *******)*ppppppplVar16;
                }
                ppppppplVar17[2] = (long ******)ppppppplVar16;
                lVar41 = 0;
                if (ppppppplVar12 != ppppppplVar22) {
                  lVar41 = 8;
                }
                *(long ********)((long)ppppppplVar16 + lVar41) = ppppppplVar17;
                *ppppppplVar17 = (long ******)ppppppplVar22;
                ppppppplVar22[2] = (long ******)ppppppplVar17;
                ppppppplVar16 = (long *******)ppppppplVar17[2];
                ppppppplVar28 = (long *******)*ppppppplVar16;
              }
              *(undefined1 *)(ppppppplVar17 + 3) = 1;
              *(undefined1 *)(ppppppplVar16 + 3) = 0;
              pppppplVar40 = ppppppplVar28[1];
              *ppppppplVar16 = pppppplVar40;
              if (pppppplVar40 != (long ******)0x0) {
                pppppplVar40[2] = (long *****)ppppppplVar16;
              }
              pppppplVar40 = ppppppplVar16[2];
              ppppppplVar28[2] = pppppplVar40;
              lVar41 = 0;
              if ((long *******)*pppppplVar40 != ppppppplVar16) {
                lVar41 = 8;
              }
              *(long ********)((long)pppppplVar40 + lVar41) = ppppppplVar28;
              ppppppplVar28[1] = (long ******)ppppppplVar16;
              ppppppplVar16[2] = (long ******)ppppppplVar28;
              goto LAB_109928018;
            }
LAB_109927ed8:
            *(undefined1 *)(ppppppplVar22 + 3) = 1;
            bVar10 = ppppppplVar16 == ppppppplStack_a8;
            *(bool *)(ppppppplVar16 + 3) = bVar10;
            *(char *)ppppppplVar17 = '\x01';
            ppppppplVar12 = ppppppplVar16;
            goto joined_r0x000109927e8c;
          }
          if ((ppppppplVar28 != (long *******)0x0) &&
             (ppppppplVar17 = ppppppplVar28 + 3, *(char *)ppppppplVar17 != '\x01'))
          goto LAB_109927ed8;
          ppppppplVar28 = (long *******)*ppppppplVar22;
          if (ppppppplVar28 == ppppppplVar12) {
            pppppplVar40 = ppppppplVar28[1];
            *ppppppplVar22 = pppppplVar40;
            if (pppppplVar40 != (long ******)0x0) {
              pppppplVar40[2] = (long *****)ppppppplVar22;
              ppppppplVar16 = (long *******)ppppppplVar22[2];
            }
            ppppppplVar28[2] = (long ******)ppppppplVar16;
            lVar41 = 0;
            if ((long *******)*ppppppplVar16 != ppppppplVar22) {
              lVar41 = 8;
            }
            *(long ********)((long)ppppppplVar16 + lVar41) = ppppppplVar28;
            ppppppplVar28[1] = (long ******)ppppppplVar22;
            ppppppplVar22[2] = (long ******)ppppppplVar28;
            ppppppplVar16 = (long *******)ppppppplVar28[2];
            ppppppplVar22 = ppppppplVar28;
          }
          *(undefined1 *)(ppppppplVar22 + 3) = 1;
          *(undefined1 *)(ppppppplVar16 + 3) = 0;
          pppppplVar40 = ppppppplVar16[1];
          pppppplVar46 = (long ******)*pppppplVar40;
          ppppppplVar16[1] = pppppplVar46;
          if (pppppplVar46 != (long ******)0x0) {
            pppppplVar46[2] = (long *****)ppppppplVar16;
          }
          pppppplVar46 = ppppppplVar16[2];
          pppppplVar40[2] = (long *****)pppppplVar46;
          lVar41 = 0;
          if ((long *******)*pppppplVar46 != ppppppplVar16) {
            lVar41 = 8;
          }
          *(long *******)((long)pppppplVar46 + lVar41) = pppppplVar40;
          *pppppplVar40 = (long *****)ppppppplVar16;
          ppppppplVar16[2] = pppppplVar40;
LAB_109928018:
          lStack_a0 = lStack_a0 + 1;
        }
LAB_109928024:
        plVar49 = (long *)plVar37[1];
        plVar38 = plVar37;
        if ((long *)plVar37[1] == (long *)0x0) {
          do {
            plVar37 = (long *)plVar38[2];
            bVar10 = (long *)*plVar37 != plVar38;
            plVar38 = plVar37;
          } while (bVar10);
        }
        else {
          do {
            plVar37 = plVar49;
            plVar49 = (long *)*plVar37;
          } while ((long *)*plVar37 != (long *)0x0);
        }
      } while (plVar37 != param_4 + 1);
      if ((long ********)ppppppplStack_b0 != &ppppppplStack_a8) {
        plVar37 = (long *)(param_3 + 8);
        ppppppplVar22 = ppppppplStack_b0;
        do {
          ppppppplVar16 = (long *******)ppppppplVar22[5];
          while (ppppppplVar16 != ppppppplVar22 + 6) {
            plVar49 = (long *)*plVar37;
            if (plVar49 == (long *)0x0) {
LAB_1099280cc:
              plVar38 = plVar37;
            }
            else {
              plVar38 = plVar37;
              do {
                lVar41 = 8;
                if (ppppppplVar16[4] <= (long ******)plVar49[4]) {
                  lVar41 = 0;
                  plVar38 = plVar49;
                }
                plVar49 = *(long **)((long)plVar49 + lVar41);
              } while (plVar49 != (long *)0x0);
              if ((plVar38 == plVar37) || (ppppppplVar16[4] < (long ******)plVar38[4]))
              goto LAB_1099280cc;
            }
            plVar49 = *(long **)(param_1 + 0x10);
            if (plVar49 < *(long **)(param_1 + 0x18)) {
              plVar47 = plVar49 + 1;
              *plVar49 = plVar38[5];
            }
            else {
              lVar41 = *(long *)(param_1 + 8);
              uVar18 = ((long)plVar49 - lVar41 >> 3) + 1;
              if (uVar18 >> 0x3d != 0) {
                func_0x0001099298d8();
                goto LAB_109928a60;
              }
              uVar29 = (long)*(long **)(param_1 + 0x18) - lVar41;
              uVar23 = (long)uVar29 >> 2;
              if (uVar23 <= uVar18) {
                uVar23 = uVar18;
              }
              if (0x7ffffffffffffff7 < uVar29) {
                uVar23 = 0x1fffffffffffffff;
              }
              if (uVar23 >> 0x3d != 0) {
                func_0x000104c4f740();
                goto LAB_109928a60;
              }
              lVar42 = uVar23 << 3;
              __Znwm();
              plVar49 = (long *)(lVar42 + ((long)plVar49 - lVar41));
              plVar47 = plVar49 + 1;
              *plVar49 = plVar38[5];
              _memcpy();
              *(long *)(param_1 + 8) = lVar42;
              *(long **)(param_1 + 0x10) = plVar47;
              *(ulong *)(param_1 + 0x18) = lVar42 + uVar23 * 8;
              if (lVar41 != 0) {
                __ZdlPv(lVar41);
              }
            }
            *(long **)(param_1 + 0x10) = plVar47;
            lVar41 = *(long *)(param_1 + 8);
            ppppppplVar12 = (long *******)&ppppppplStack_90;
            ppppppplVar28 = (long *******)&ppppppplStack_90;
            if (ppppppplStack_90 != (long *******)0x0) {
              ppppppplVar17 = ppppppplStack_90;
              do {
                while (ppppppplVar44 = ppppppplVar17, ppppppplVar12 = ppppppplVar44,
                      ppppppplVar44[4] <= (long ******)plVar47[-1]) {
                  if ((long ******)plVar47[-1] <= ppppppplVar44[4]) goto LAB_109928398;
                  ppppppplVar17 = (long *******)ppppppplVar44[1];
                  if ((long *******)ppppppplVar44[1] == (long *******)0x0) {
                    ppppppplVar28 = ppppppplVar44 + 1;
                    goto LAB_1099281c0;
                  }
                }
                ppppppplVar17 = (long *******)*ppppppplVar44;
                ppppppplVar28 = ppppppplVar44;
              } while ((long *******)*ppppppplVar44 != (long *******)0x0);
            }
LAB_1099281c0:
            ppppppplVar44 = (long *******)0x30;
            __Znwm();
            ppppppplVar44[4] = (long ******)plVar47[-1];
            *(undefined4 *)(ppppppplVar44 + 5) = 0;
            *ppppppplVar44 = (long ******)0x0;
            ppppppplVar44[1] = (long ******)0x0;
            ppppppplVar44[2] = (long ******)ppppppplVar12;
            *ppppppplVar28 = (long ******)ppppppplVar44;
            ppppppplVar12 = ppppppplVar44;
            if ((long *******)*ppppppplStack_98 != (long *******)0x0) {
              ppppppplVar12 = (long *******)*ppppppplVar28;
              ppppppplStack_98 = (long *******)*ppppppplStack_98;
            }
            bVar10 = ppppppplVar12 == ppppppplStack_90;
            *(bool *)(ppppppplVar12 + 3) = bVar10;
joined_r0x000109928208:
            if ((bVar10) ||
               (ppppppplVar28 = (long *******)ppppppplVar12[2], ((ulong)ppppppplVar28[3] & 1) != 0))
            goto LAB_10992838c;
            ppppppplVar17 = (long *******)ppppppplVar28[2];
            ppppppplVar21 = (long *******)*ppppppplVar17;
            if (ppppppplVar21 == ppppppplVar28) {
              if ((ppppppplVar17[1] == (long ******)0x0) ||
                 (ppppppplVar26 = (long *******)(ppppppplVar17[1] + 3),
                 *(char *)ppppppplVar26 == '\x01')) {
                ppppppplVar26 = ppppppplVar28;
                if ((long *******)*ppppppplVar28 != ppppppplVar12) {
                  ppppppplVar26 = (long *******)ppppppplVar28[1];
                  pppppplVar40 = *ppppppplVar26;
                  ppppppplVar28[1] = pppppplVar40;
                  ppppppplVar12 = ppppppplVar28;
                  if (pppppplVar40 != (long ******)0x0) {
                    pppppplVar40[2] = (long *****)ppppppplVar28;
                    ppppppplVar17 = (long *******)ppppppplVar28[2];
                    ppppppplVar12 = (long *******)*ppppppplVar17;
                  }
                  ppppppplVar26[2] = (long ******)ppppppplVar17;
                  lVar42 = 0;
                  if (ppppppplVar12 != ppppppplVar28) {
                    lVar42 = 8;
                  }
                  *(long ********)((long)ppppppplVar17 + lVar42) = ppppppplVar26;
                  *ppppppplVar26 = (long ******)ppppppplVar28;
                  ppppppplVar28[2] = (long ******)ppppppplVar26;
                  ppppppplVar17 = (long *******)ppppppplVar26[2];
                  ppppppplVar21 = (long *******)*ppppppplVar17;
                }
                *(undefined1 *)(ppppppplVar26 + 3) = 1;
                *(undefined1 *)(ppppppplVar17 + 3) = 0;
                pppppplVar40 = ppppppplVar21[1];
                *ppppppplVar17 = pppppplVar40;
                if (pppppplVar40 != (long ******)0x0) {
                  pppppplVar40[2] = (long *****)ppppppplVar17;
                }
                pppppplVar40 = ppppppplVar17[2];
                ppppppplVar21[2] = pppppplVar40;
                lVar42 = 0;
                if ((long *******)*pppppplVar40 != ppppppplVar17) {
                  lVar42 = 8;
                }
                *(long ********)((long)pppppplVar40 + lVar42) = ppppppplVar21;
                ppppppplVar21[1] = (long ******)ppppppplVar17;
                ppppppplVar17[2] = (long ******)ppppppplVar21;
                goto LAB_10992838c;
              }
LAB_109928254:
              *(undefined1 *)(ppppppplVar28 + 3) = 1;
              bVar10 = ppppppplVar17 == ppppppplStack_90;
              *(bool *)(ppppppplVar17 + 3) = bVar10;
              *(char *)ppppppplVar26 = '\x01';
              ppppppplVar12 = ppppppplVar17;
              goto joined_r0x000109928208;
            }
            if ((ppppppplVar21 != (long *******)0x0) &&
               (ppppppplVar26 = ppppppplVar21 + 3, *(char *)ppppppplVar26 != '\x01'))
            goto LAB_109928254;
            ppppppplVar21 = (long *******)*ppppppplVar28;
            if (ppppppplVar21 == ppppppplVar12) {
              pppppplVar40 = ppppppplVar21[1];
              *ppppppplVar28 = pppppplVar40;
              if (pppppplVar40 != (long ******)0x0) {
                pppppplVar40[2] = (long *****)ppppppplVar28;
                ppppppplVar17 = (long *******)ppppppplVar28[2];
              }
              ppppppplVar21[2] = (long ******)ppppppplVar17;
              lVar42 = 0;
              if ((long *******)*ppppppplVar17 != ppppppplVar28) {
                lVar42 = 8;
              }
              *(long ********)((long)ppppppplVar17 + lVar42) = ppppppplVar21;
              ppppppplVar21[1] = (long ******)ppppppplVar28;
              ppppppplVar28[2] = (long ******)ppppppplVar21;
              ppppppplVar17 = (long *******)ppppppplVar21[2];
              ppppppplVar28 = ppppppplVar21;
            }
            *(undefined1 *)(ppppppplVar28 + 3) = 1;
            *(undefined1 *)(ppppppplVar17 + 3) = 0;
            pppppplVar40 = ppppppplVar17[1];
            pppppplVar46 = (long ******)*pppppplVar40;
            ppppppplVar17[1] = pppppplVar46;
            if (pppppplVar46 != (long ******)0x0) {
              pppppplVar46[2] = (long *****)ppppppplVar17;
            }
            pppppplVar46 = ppppppplVar17[2];
            pppppplVar40[2] = (long *****)pppppplVar46;
            lVar42 = 0;
            if ((long *******)*pppppplVar46 != ppppppplVar17) {
              lVar42 = 8;
            }
            *(long *******)((long)pppppplVar46 + lVar42) = pppppplVar40;
            *pppppplVar40 = (long *****)ppppppplVar17;
            ppppppplVar17[2] = pppppplVar40;
LAB_10992838c:
            uStack_88 = uStack_88 + 1;
LAB_109928398:
            *(int *)(ppppppplVar44 + 5) = (int)((ulong)((long)plVar47 - lVar41) >> 3) + -1;
            ppppppplVar12 = (long *******)ppppppplVar16[1];
            ppppppplVar28 = ppppppplVar16;
            if ((long *******)ppppppplVar16[1] == (long *******)0x0) {
              do {
                ppppppplVar16 = (long *******)ppppppplVar28[2];
                bVar10 = (long *******)*ppppppplVar16 != ppppppplVar28;
                ppppppplVar28 = ppppppplVar16;
              } while (bVar10);
            }
            else {
              do {
                ppppppplVar16 = ppppppplVar12;
                ppppppplVar12 = (long *******)*ppppppplVar16;
              } while ((long *******)*ppppppplVar16 != (long *******)0x0);
            }
          }
          piVar1 = *(int **)(param_1 + 0x40);
          iVar6 = piVar1[-1];
          iVar5 = *(int *)(ppppppplVar22 + 7);
          if (piVar1 < *(int **)(param_1 + 0x48)) {
            piVar39 = piVar1 + 1;
            *piVar1 = iVar6 + iVar5;
          }
          else {
            lVar41 = *(long *)(param_1 + 0x38);
            uVar18 = ((long)piVar1 - lVar41 >> 2) + 1;
            if (uVar18 >> 0x3e != 0) {
              FUN_10923f788();
              goto LAB_109928a60;
            }
            uVar29 = (long)*(int **)(param_1 + 0x48) - lVar41;
            uVar23 = (long)uVar29 >> 1;
            if (uVar23 <= uVar18) {
              uVar23 = uVar18;
            }
            if (0x7ffffffffffffffb < uVar29) {
              uVar23 = 0x3fffffffffffffff;
            }
            if (uVar23 >> 0x3e != 0) {
              func_0x000104c4f740();
              goto LAB_109928a60;
            }
            lVar42 = uVar23 << 2;
            __Znwm();
            piVar1 = (int *)(lVar42 + ((long)piVar1 - lVar41));
            piVar39 = piVar1 + 1;
            *piVar1 = iVar6 + iVar5;
            _memcpy();
            *(long *)(param_1 + 0x38) = lVar42;
            *(int **)(param_1 + 0x40) = piVar39;
            *(ulong *)(param_1 + 0x48) = lVar42 + uVar23 * 4;
            if (lVar41 != 0) {
              __ZdlPv(lVar41);
            }
          }
          *(int **)(param_1 + 0x40) = piVar39;
          ppppppplVar16 = (long *******)ppppppplVar22[1];
          ppppppplVar12 = ppppppplVar22;
          if ((long *******)ppppppplVar22[1] == (long *******)0x0) {
            do {
              ppppppplVar22 = (long *******)ppppppplVar12[2];
              bVar10 = (long *******)*ppppppplVar22 != ppppppplVar12;
              ppppppplVar12 = ppppppplVar22;
            } while (bVar10);
          }
          else {
            do {
              ppppppplVar22 = ppppppplVar16;
              ppppppplVar16 = (long *******)*ppppppplVar22;
            } while ((long *******)*ppppppplVar22 != (long *******)0x0);
          }
        } while ((long ********)ppppppplVar22 != &ppppppplStack_a8);
      }
    }
    puVar4 = (undefined8 *)param_2[1];
    for (puVar2 = (undefined8 *)*param_2; puVar2 != puVar4; puVar2 = puVar2 + 1) {
      puVar48 = (ulong *)*puVar2;
      uVar18 = param_4[4];
      if (uVar18 != 0) {
        uVar23 = *puVar48;
        uVar29 = ((ulong)(uint)((int)uVar23 << 3) + 8 ^ uVar23 >> 0x20) * -0x622015f714c7d297;
        uVar29 = (uVar23 >> 0x20 ^ uVar29 >> 0x2f ^ uVar29) * -0x622015f714c7d297;
        uVar29 = (uVar29 ^ uVar29 >> 0x2f) * -0x622015f714c7d297;
        uVar30 = uVar18 - 1;
        if ((uVar18 & uVar30) == 0) {
          uVar32 = uVar29 & uVar30;
        }
        else {
          uVar32 = uVar29;
          if (uVar18 <= uVar29) {
            uVar32 = 0;
            if (uVar18 != 0) {
              uVar32 = uVar29 / uVar18;
            }
            uVar32 = uVar29 - uVar32 * uVar18;
          }
        }
        plVar37 = *(long **)(param_4[3] + uVar32 * 8);
        if (plVar37 != (long *)0x0) {
          do {
            while( true ) {
              plVar37 = (long *)*plVar37;
              if (plVar37 == (long *)0x0) goto LAB_1099285ac;
              uVar33 = plVar37[1];
              if (uVar29 - uVar33 != 0) break;
              if (plVar37[2] == uVar23) goto LAB_1099286e4;
            }
            if ((uVar18 & uVar30) == 0) {
              uVar33 = uVar33 & uVar30;
            }
            else if (uVar18 <= uVar33) {
              uVar7 = 0;
              if (uVar18 != 0) {
                uVar7 = uVar33 / uVar18;
              }
              uVar33 = uVar33 - uVar7 * uVar18;
            }
          } while (uVar33 == uVar32);
        }
      }
LAB_1099285ac:
      puVar3 = *(undefined8 **)(param_1 + 0x10);
      if (*(undefined8 **)(param_1 + 0x18) <= puVar3) {
        lVar41 = *(long *)(param_1 + 8);
        uVar18 = ((long)puVar3 - lVar41 >> 3) + 1;
        if (uVar18 >> 0x3d == 0) {
          uVar29 = (long)*(undefined8 **)(param_1 + 0x18) - lVar41;
          uVar23 = (long)uVar29 >> 2;
          if (uVar23 <= uVar18) {
            uVar23 = uVar18;
          }
          if (0x7ffffffffffffff7 < uVar29) {
            uVar23 = 0x1fffffffffffffff;
          }
          if (uVar23 >> 0x3d == 0) {
            lVar42 = uVar23 << 3;
            __Znwm();
            puVar3 = (undefined8 *)(lVar42 + ((long)puVar3 - lVar41));
            puVar36 = puVar3 + 1;
            *puVar3 = puVar48;
            _memcpy();
            *(long *)(param_1 + 8) = lVar42;
            *(undefined8 **)(param_1 + 0x10) = puVar36;
            *(ulong *)(param_1 + 0x18) = lVar42 + uVar23 * 8;
            if (lVar41 != 0) {
              __ZdlPv(lVar41);
            }
            goto LAB_10992863c;
          }
LAB_109928a28:
          func_0x000104c4f740();
        }
        else {
          func_0x0001099298d8();
        }
        goto LAB_109928a60;
      }
      puVar36 = puVar3 + 1;
      *puVar3 = puVar48;
LAB_10992863c:
      *(undefined8 **)(param_1 + 0x10) = puVar36;
      puVar43 = *(undefined4 **)(param_1 + 0x40);
      if (puVar43 < *(undefined4 **)(param_1 + 0x48)) {
        *puVar43 = puVar43[-1];
        puVar34 = puVar43 + 1;
      }
      else {
        lVar41 = *(long *)(param_1 + 0x38);
        uVar18 = ((long)puVar43 - lVar41 >> 2) + 1;
        if (uVar18 >> 0x3e != 0) {
          FUN_10923f788();
          goto LAB_109928a60;
        }
        uVar29 = (long)*(undefined4 **)(param_1 + 0x48) - lVar41;
        uVar23 = (long)uVar29 >> 1;
        if (uVar23 <= uVar18) {
          uVar23 = uVar18;
        }
        if (0x7ffffffffffffffb < uVar29) {
          uVar23 = 0x3fffffffffffffff;
        }
        if (uVar23 >> 0x3e != 0) goto LAB_109928a28;
        lVar42 = uVar23 << 2;
        __Znwm();
        puVar11 = (undefined4 *)(lVar42 + ((long)puVar43 - lVar41));
        puVar34 = puVar11 + 1;
        *puVar11 = puVar43[-1];
        _memcpy();
        *(long *)(param_1 + 0x38) = lVar42;
        *(undefined4 **)(param_1 + 0x40) = puVar34;
        *(ulong *)(param_1 + 0x48) = lVar42 + uVar23 * 4;
        if (lVar41 != 0) {
          __ZdlPv(lVar41);
        }
      }
      *(undefined4 **)(param_1 + 0x40) = puVar34;
LAB_1099286e4:
    }
    lVar41 = *(long *)(param_1 + 0x20);
    plVar37 = *(long **)(param_1 + 0x28);
    lVar42 = (long)plVar37 - lVar41;
    bVar10 = uStack_88 < (ulong)((lVar42 >> 3) * -0x5555555555555555);
    uVar18 = uStack_88 + (lVar42 >> 3) * 0x5555555555555555;
    if (bVar10 || uVar18 == 0) {
      if (bVar10) {
        plVar49 = (long *)(lVar41 + uStack_88 * 0x18);
        while (plVar38 = plVar37, plVar38 != plVar49) {
          plVar37 = plVar38 + -3;
          if (*plVar37 != 0) {
            plVar38[-2] = *plVar37;
            __ZdlPv();
          }
        }
        *(long **)(param_1 + 0x28) = plVar49;
      }
LAB_109928860:
      puVar2 = (undefined8 *)param_2[3];
      puVar4 = (undefined8 *)param_2[4];
      do {
        if (puVar2 == puVar4) {
          *(undefined4 *)(param_1 + 0x58) = 1;
          *(undefined8 *)(param_1 + 0x50) = 1;
          *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x70);
          func_0x00010992bc38(&ppppppplStack_b0,ppppppplStack_a8);
          func_0x00010992bb74(ppppppplStack_90);
          return 1;
        }
        plVar37 = (long *)*puVar2;
        uVar18 = *(long *)(*plVar37 + 0x10) - *(long *)(*plVar37 + 8);
        if (0 < (int)(uVar18 >> 2)) {
          uVar23 = 0;
          do {
            if (ppppppplStack_90 != (long *******)0x0) {
              pppppplVar40 = *(long *******)(plVar37[2] + uVar23 * 8);
              ppppppplVar22 = (long *******)&ppppppplStack_90;
              ppppppplVar16 = ppppppplStack_90;
              do {
                lVar41 = 8;
                if (pppppplVar40 <= ppppppplVar16[4]) {
                  lVar41 = 0;
                  ppppppplVar22 = ppppppplVar16;
                }
                ppppppplVar16 = *(long ********)((long)ppppppplVar16 + lVar41);
              } while (ppppppplVar16 != (long *******)0x0);
              if (((long ********)ppppppplVar22 != &ppppppplStack_90) &&
                 (ppppppplVar22[4] <= pppppplVar40)) {
                plVar49 = (long *)(*(long *)(param_1 + 0x20) +
                                  (long)*(int *)(ppppppplVar22 + 5) * 0x18);
                puVar3 = (undefined8 *)plVar49[1];
                if (puVar3 < (undefined8 *)plVar49[2]) {
                  puVar36 = puVar3 + 1;
                  *puVar3 = plVar37;
                }
                else {
                  lVar41 = *plVar49;
                  uVar29 = ((long)puVar3 - lVar41 >> 3) + 1;
                  if (uVar29 >> 0x3d != 0) {
                    func_0x000109929900();
                    goto LAB_109928a60;
                  }
                  uVar32 = plVar49[2] - lVar41;
                  uVar30 = (long)uVar32 >> 2;
                  if (uVar30 <= uVar29) {
                    uVar30 = uVar29;
                  }
                  if (0x7ffffffffffffff7 < uVar32) {
                    uVar30 = 0x1fffffffffffffff;
                  }
                  if (uVar30 >> 0x3d != 0) {
                    func_0x000104c4f740();
                    goto LAB_109928a60;
                  }
                  lVar42 = uVar30 << 3;
                  __Znwm();
                  puVar3 = (undefined8 *)(lVar42 + ((long)puVar3 - lVar41));
                  puVar36 = puVar3 + 1;
                  *puVar3 = plVar37;
                  _memcpy();
                  *plVar49 = lVar42;
                  plVar49[1] = (long)puVar36;
                  plVar49[2] = lVar42 + uVar30 * 8;
                  if (lVar41 != 0) {
                    __ZdlPv(lVar41);
                  }
                }
                plVar49[1] = (long)puVar36;
              }
            }
            uVar23 = uVar23 + 1;
          } while (uVar23 != (uVar18 >> 2 & 0x7fffffff));
        }
        puVar2 = puVar2 + 1;
      } while( true );
    }
    if (uVar18 <= (ulong)((*(long *)(param_1 + 0x30) - (long)plVar37 >> 3) * -0x5555555555555555)) {
      uVar18 = (uVar18 * 0x18 - 0x18) / 0x18;
      _bzero(plVar37,uVar18 * 0x18 + 0x18);
      *(long **)(param_1 + 0x28) = plVar37 + uVar18 * 3 + 3;
      goto LAB_109928860;
    }
    if (uStack_88 < 0xaaaaaaaaaaaaaab) {
      lVar27 = *(long *)(param_1 + 0x30) - lVar41 >> 3;
      uVar23 = lVar27 * 0x5555555555555556;
      if (uVar23 < uStack_88 || uVar23 - uStack_88 == 0) {
        uVar23 = uStack_88;
      }
      if (0x555555555555554 < (ulong)(lVar27 * -0x5555555555555555)) {
        uVar23 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar23 < 0xaaaaaaaaaaaaaab) {
        lVar27 = uVar23 * 0x18;
        __Znwm();
        lVar45 = ((uVar18 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
        _bzero(lVar27 + lVar42,lVar45);
        _memcpy(lVar27,lVar41,lVar42);
        *(long *)(param_1 + 0x20) = lVar27;
        *(long *)(param_1 + 0x28) = lVar27 + lVar42 + lVar45;
        *(ulong *)(param_1 + 0x30) = lVar27 + uVar23 * 0x18;
        if (lVar41 != 0) {
          __ZdlPv(lVar41);
        }
        goto LAB_109928860;
      }
      func_0x000104c4f740();
      goto LAB_109928a60;
    }
  }
  else {
    uVar23 = (long)*(undefined4 **)(param_1 + 0x48) - (long)puVar43;
    uVar18 = (long)uVar23 >> 1;
    if (uVar18 < 2) {
      uVar18 = 1;
    }
    if (0x7ffffffffffffffb < uVar23) {
      uVar18 = 0x3fffffffffffffff;
    }
    if (uVar18 >> 0x3e == 0) {
      puVar11 = (undefined4 *)(uVar18 << 2);
      __Znwm();
      puVar34 = puVar11 + 1;
      *puVar11 = 0;
      *(undefined4 **)(param_1 + 0x38) = puVar11;
      *(undefined4 **)(param_1 + 0x40) = puVar34;
      *(undefined4 **)(param_1 + 0x48) = puVar11 + uVar18;
      if (puVar43 != (undefined4 *)0x0) {
        __ZdlPv(puVar43);
      }
      goto LAB_109927a1c;
    }
    func_0x000104c4f740();
  }
  func_0x0001099298ec();
LAB_109928a60:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x109928a64);
  (*pcVar9)();
}



/* Entry: 109928ac8; end: 109928e1b;  */

void FUN_109928ac8(long *param_1,long param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  long *plVar7;
  long **pplVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long **pplStack_118;
  undefined1 uStack_110;
  undefined6 uStack_10f;
  undefined1 uStack_109;
  undefined7 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c4;
  long lStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long lStack_98;
  long *aplStack_90 [3];
  long **pplStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = (long *)param_1[2];
  lStack_98 = param_3;
  for (plVar10 = (long *)param_1[1]; plVar10 != plVar7; plVar10 = plVar10 + 1) {
    lVar11 = *plVar10;
    FUN_109928e1c(lVar11,param_3 + (long)*(int *)(lVar11 + 0x2c) * 8);
    *(undefined1 *)(lVar11 + 0xc) = 1;
  }
  iVar4 = *(int *)(param_2 + 0x10);
  lVar11 = (long)iVar4;
  plStack_a8 = (long *)0x0;
  plStack_a0 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  pplStack_118 = &plStack_b0;
  uStack_110 = 0;
  if (iVar4 != 0) {
    if (iVar4 < 0) goto LAB_109928da8;
    plVar10 = (long *)(lVar11 * 8);
    __Znwm();
    plStack_a0 = plVar10 + lVar11;
    plStack_b0 = plVar10;
    _bzero();
    plStack_a8 = plVar10 + lVar11;
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_10f = 0;
  uStack_109 = 0;
  uStack_100 = 0x100000001;
  uStack_f8 = 1;
  lStack_f0 = 0;
  uStack_e0 = 0;
  lStack_e8 = 0;
  uStack_d0 = 0xffffffffffffffff;
  uStack_d8 = 0xffffffff0000000a;
  uStack_c8 = 0;
  uStack_c4 = 0xffffffff00000000;
  pplStack_118 = (long **)((long)&MACH_HEADER.magic + 1);
  lStack_b8 = param_1[0xe];
  if (iVar4 != 0) {
    lVar11 = 0;
    do {
      FUN_109964f6c(aplStack_90,&pplStack_118);
      plVar10 = aplStack_90[0];
      aplStack_90[0] = (long *)0x0;
      plVar7 = (long *)plStack_b0[lVar11];
      plStack_b0[lVar11] = (long)plVar10;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      plVar10 = aplStack_90[0];
      aplStack_90[0] = (long *)0x0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 8))();
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_2 + 0x10));
  }
  lVar11 = param_1[7];
  lVar12 = param_1[8];
  if (lVar12 - lVar11 != 4) {
    uVar13 = 0;
    do {
      piVar1 = (int *)(lVar11 + uVar13 * 4);
      iVar4 = piVar1[1] - *piVar1;
      if (iVar4 != 0) {
        iVar2 = *(int *)(param_2 + 0x10);
        if (iVar2 <= iVar4) {
          iVar4 = iVar2;
        }
        iVar5 = 0;
        if (iVar4 != 0) {
          iVar5 = iVar2 / iVar4;
        }
        if (iVar5 < 2) {
          iVar5 = 1;
        }
        *(int *)(param_1 + 10) = iVar5;
        lVar12 = param_1[0xe];
        uVar3 = *(undefined4 *)(lVar11 + uVar13 * 4);
        iVar2 = piVar1[1];
        pplVar8 = (long **)0x20;
        __Znwm();
        *pplVar8 = (long *)&PTR_FUN_110b1d910;
        pplVar8[1] = param_1;
        pplVar8[2] = (long *)&plStack_b0;
        pplVar8[3] = &lStack_98;
        pplStack_78 = pplVar8;
        FUN_10991514c(lVar12,uVar3,iVar2,iVar4,aplStack_90);
        if (pplStack_78 == aplStack_90) {
          lVar11 = 0x20;
LAB_109928cd8:
          (**(code **)((long)*pplStack_78 + lVar11))();
        }
        else if (pplStack_78 != (long **)0x0) {
          lVar11 = 0x28;
          goto LAB_109928cd8;
        }
        lVar11 = param_1[7];
        lVar12 = param_1[8];
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < (lVar12 - lVar11 >> 2) - 1U);
  }
  plVar7 = (long *)param_1[2];
  for (plVar10 = (long *)param_1[1]; plVar10 != plVar7; plVar10 = plVar10 + 1) {
    *(undefined1 *)(*plVar10 + 0xc) = 0;
  }
  if (lStack_f0 != 0) {
    lStack_e8 = lStack_f0;
    __ZdlPv();
  }
  plVar7 = plStack_b0;
  plVar10 = plStack_a8;
  if (plStack_b0 != (long *)0x0) {
    while (plVar10 != plVar7) {
      plVar10 = plVar10 + -1;
      plVar9 = (long *)*plVar10;
      *plVar10 = 0;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    plStack_a8 = plVar7;
    __ZdlPv(plStack_b0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_109928da8:
  FUN_10992b0d4();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109928db0);
  (*pcVar6)();
}



/* Entry: 109928e1c; end: 109928f8b;  */

undefined8 * FUN_109928e1c(long param_1,ulong *param_2)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong *puVar9;
  double *pdVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long unaff_x20;
  ulong unaff_x21;
  long *plVar16;
  ulong uVar17;
  long unaff_x22;
  undefined8 uVar18;
  undefined1 uStack_258;
  undefined7 uStack_257;
  char cStack_241;
  undefined1 uStack_240;
  undefined7 uStack_23f;
  char cStack_229;
  undefined1 uStack_228;
  undefined7 uStack_227;
  char cStack_211;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  char cStack_1f9;
  undefined2 uStack_1f8;
  undefined6 uStack_1f6;
  char cStack_1e1;
  undefined2 uStack_1e0;
  undefined6 uStack_1de;
  char cStack_1c9;
  undefined8 auStack_1c8 [2];
  char cStack_1b1;
  undefined8 uStack_1b0;
  char cStack_199;
  undefined8 uStack_198;
  char cStack_181;
  undefined8 uStack_180;
  char cStack_169;
  undefined8 uStack_168;
  char cStack_151;
  undefined8 uStack_150;
  char cStack_139;
  undefined8 uStack_138;
  char cStack_121;
  long lStack_110;
  ulong uStack_108;
  long lStack_100;
  ulong uStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_b8;
  long in_stack_ffffffffffffff50;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar6 = &uStack_80;
  if (param_2 == (ulong *)0x0) {
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    lStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
    FUN_1099a9f0c(&uStack_80,&UNK_10f58affb,0x5d,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_78 + 0x7540,&UNK_10f58b082,0x1b);
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv();
    goto LAB_109928f84;
  }
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    plVar5 = *(long **)(param_1 + 0x10);
    puVar9 = param_2;
    if (plVar5 == (long *)0x0) {
      iVar4 = *(int *)(param_1 + 8);
    }
    else {
      (**(code **)(*plVar5 + 0x18))();
      iVar4 = (int)plVar5;
    }
    if (iVar4 != 0) {
      *(ulong **)(param_1 + 0x18) = param_2;
      lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar5 = *(long **)(param_1 + 0x10);
      if (plVar5 == (long *)0x0) {
LAB_1099299d4:
        puStack_e8 = (undefined8 *)0x1;
      }
      else {
        iVar4 = *(int *)(param_1 + 8);
        (**(code **)(*plVar5 + 0x18))();
        uVar2 = (int)plVar5 * iVar4;
        unaff_x21 = (ulong)uVar2;
        unaff_x20 = *(long *)(param_1 + 0x20);
        if (0 < (int)uVar2 && unaff_x20 != 0) {
          _memset_pattern16(unaff_x20,&UNK_10e00cee0,unaff_x21 << 3);
        }
        plVar5 = *(long **)(param_1 + 0x10);
        puVar9 = *(ulong **)(param_1 + 0x18);
        (**(code **)(*plVar5 + 0x28))(plVar5,puVar9,unaff_x20);
        if (((ulong)plVar5 & 1) != 0) {
          pdVar10 = *(double **)(param_1 + 0x20);
          uVar17 = unaff_x21;
          if (0 < (int)uVar2 && pdVar10 != (double *)0x0) {
            do {
              if ((0x7fefffffffffffff < (ulong)ABS(*pdVar10)) || (*pdVar10 == 1e+302)) {
                uStack_b8 = 0;
                uStack_60 = 0;
                uStack_80 = 0;
                uStack_70 = 0;
                lStack_78 = 0;
                uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
                FUN_1099a9f0c(&uStack_b8,&UNK_10f58affb,0x14b,1,FUN_1099aa768,0);
                unaff_x20 = in_stack_ffffffffffffff50 + 0x7540;
                FUN_1092b4db8(unaff_x20,&UNK_10f58b12e,0x2c);
                FUN_1092b4db8();
                uStack_d0 = *(undefined8 *)(param_1 + 0x18);
                lStack_c8 = (long)*(int *)(param_1 + 8);
                FUN_109929b90();
                FUN_1092b4db8();
                unaff_x21 = *(ulong *)(param_1 + 0x20);
                unaff_x22 = (long)*(int *)(param_1 + 8);
                plVar5 = *(long **)(param_1 + 0x10);
                lStack_48 = unaff_x22;
                if (plVar5 != (long *)0x0) {
                  (**(code **)(*plVar5 + 0x18))();
                  lStack_48 = (long)(int)plVar5;
                }
                puVar9 = &uStack_58;
                uStack_58 = unaff_x21;
                lStack_50 = unaff_x22;
                FUN_109929e7c(unaff_x20);
                goto LAB_109929b24;
              }
              uVar17 = uVar17 - 1;
              unaff_x21 = 0;
              pdVar10 = pdVar10 + 1;
            } while (uVar17 != 0);
          }
          goto LAB_1099299d4;
        }
        uStack_b8 = 0;
        uStack_60 = 0;
        uStack_80 = 0;
        uStack_70 = 0;
        lStack_78 = 0;
        uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
        FUN_1099a9f0c(&uStack_b8,&UNK_10f58affb,0x144,1,FUN_1099aa768,0);
        FUN_1092b4db8(in_stack_ffffffffffffff50 + 0x7540,&UNK_10f58b0fd,0x30);
        uStack_58 = *(ulong *)(param_1 + 0x18);
        lStack_50 = (long)*(int *)(param_1 + 8);
        puVar9 = &uStack_58;
        FUN_109929b90();
LAB_109929b24:
        FUN_1099ab3b0(&uStack_b8);
        puStack_e8 = (undefined8 *)0x0;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return puStack_e8;
      }
      ___stack_chk_fail();
      FUN_1099ab3b0(&uStack_b8);
      puVar6 = puStack_e8;
      __Unwind_Resume(puStack_e8);
      pcStack_d8 = FUN_109929b90;
      lStack_110 = 0;
      uStack_108 = 0;
      uVar17 = *puVar9;
      uVar1 = puVar9[1];
      lStack_100 = unaff_x22;
      uStack_f8 = unaff_x21;
      lStack_f0 = unaff_x20;
      puStack_e0 = &stack0xfffffffffffffff0;
      if (uVar1 == 0) {
        uVar11 = 0;
LAB_109929c3c:
        lVar8 = uVar1 - uVar11;
        if (lVar8 != 0 && (long)uVar11 <= (long)uVar1) {
          puVar12 = (undefined8 *)(lStack_110 + uVar11 * 8);
          puVar15 = (undefined8 *)(uVar17 + uVar11 * 8);
          do {
            *puVar12 = *puVar15;
            lVar8 = lVar8 + -1;
            puVar12 = puVar12 + 1;
            puVar15 = puVar15 + 1;
          } while (lVar8 != 0);
        }
        cStack_1c9 = '\x01';
        uStack_1e0 = 0x20;
        cStack_1e1 = '\x01';
        uStack_1f8 = 10;
        cStack_1f9 = '\0';
        uStack_210 = 0;
        cStack_211 = '\0';
        uStack_228 = 0;
        cStack_229 = '\0';
        uStack_240 = 0;
        cStack_241 = '\0';
        uStack_258 = 0;
        FUN_1095008b8(auStack_1c8,0xffffffff,0,&uStack_1e0,&uStack_1f8,&uStack_210,&uStack_228,
                      &uStack_240,&uStack_258,0x20);
        FUN_10992a190(puVar6,&lStack_110,auStack_1c8);
        if (cStack_121 < '\0') {
          __ZdlPv(uStack_138);
        }
        if (cStack_139 < '\0') {
          __ZdlPv(uStack_150);
        }
        if (cStack_151 < '\0') {
          __ZdlPv(uStack_168);
        }
        if (cStack_169 < '\0') {
          __ZdlPv(uStack_180);
        }
        if (cStack_181 < '\0') {
          __ZdlPv(uStack_198);
        }
        if (cStack_199 < '\0') {
          __ZdlPv(uStack_1b0);
        }
        if (cStack_1b1 < '\0') {
          __ZdlPv(auStack_1c8[0]);
        }
        if (cStack_241 < '\0') {
          __ZdlPv(CONCAT71(uStack_257,uStack_258));
        }
        if (cStack_229 < '\0') {
          __ZdlPv(CONCAT71(uStack_23f,uStack_240));
        }
        if (cStack_211 < '\0') {
          __ZdlPv(CONCAT71(uStack_227,uStack_228));
        }
        if (cStack_1f9 < '\0') {
          __ZdlPv(CONCAT71(uStack_20f,uStack_210));
        }
        if (cStack_1e1 < '\0') {
          __ZdlPv(CONCAT62(uStack_1f6,uStack_1f8));
        }
        if (cStack_1c9 < '\0') {
          __ZdlPv(CONCAT62(uStack_1de,uStack_1e0));
        }
        _free(lStack_110);
        return puVar6;
      }
      lVar8 = 0;
      if (uVar1 != 0) {
        lVar8 = 0x7fffffffffffffff / (long)uVar1;
      }
      if (0 < lVar8) {
        if ((long)uVar1 < 1) {
          uVar11 = -(-uVar1 & 0xfffffffffffffffe);
          uStack_108 = uVar1;
          goto LAB_109929c3c;
        }
        if (uVar1 >> 0x3d == 0) {
          lVar8 = uVar1 << 3;
          _malloc();
          if (lVar8 != 0) {
            lStack_110 = lVar8;
            if (uVar1 == 1) {
              uVar11 = 0;
              uStack_108 = uVar1;
            }
            else {
              lVar13 = 0;
              uVar14 = 0;
              uVar11 = uVar1 & 0x1ffffffffffffffe;
              do {
                puVar12 = (undefined8 *)(uVar17 + lVar13);
                uVar18 = *puVar12;
                ((undefined8 *)(lVar8 + lVar13))[1] = puVar12[1];
                *(undefined8 *)(lVar8 + lVar13) = uVar18;
                uVar14 = uVar14 + 2;
                lVar13 = lVar13 + 0x10;
                uStack_108 = uVar1;
              } while (uVar14 < uVar11);
            }
            goto LAB_109929c3c;
          }
        }
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x109929df0);
      (*pcVar3)();
    }
  }
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_48 = 0;
  lStack_50 = 0;
  lStack_38 = 0;
  uStack_40 = 0;
  FUN_1099a9f0c(&uStack_80,&UNK_10f58affb,0x5f,3,FUN_1099aa768,0);
  FUN_1092b4db8(lStack_78 + 0x7540,&UNK_10f58b0e0,0x1c);
  FUN_1092b4db8();
  FUN_1092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv();
LAB_109928f84:
  func_0x0001099ab7c0();
  plVar5 = (long *)*puVar6;
  if (plVar5 != (long *)0x0) {
    plVar16 = (long *)puVar6[1];
    plVar7 = plVar5;
    if (plVar16 != plVar5) {
      do {
        plVar16 = plVar16 + -1;
        plVar7 = (long *)*plVar16;
        *plVar16 = 0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 8))();
        }
      } while (plVar16 != plVar5);
      plVar7 = (long *)*puVar6;
    }
    puVar6[1] = plVar5;
    __ZdlPv(plVar7);
  }
  return puVar6;
}



/* Entry: 109928f8c; end: 109928ff7;  */

undefined8 * FUN_109928f8c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)param_1[1];
    plVar1 = plVar2;
    if (plVar3 != plVar2) {
      do {
        plVar3 = plVar3 + -1;
        plVar1 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar3 != plVar2);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar2;
    __ZdlPv(plVar1);
  }
  return param_1;
}



/* Entry: 109928ff8; end: 1099291c7;  */

long FUN_109928ff8(long param_1)

{
  if (*(long *)(param_1 + 0x198) != 0) {
    *(long *)(param_1 + 0x1a0) = *(long *)(param_1 + 0x198);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x180) != 0) {
    *(long *)(param_1 + 0x188) = *(long *)(param_1 + 0x180);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x177) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x160));
  }
  if (*(char *)(param_1 + 0x15f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x148));
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x130);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x118);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 1099291c8; end: 109929293;  */

undefined8 FUN_1099291c8(ulong param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar4 = (long *)*param_2;
  while( true ) {
    if (plVar4 == param_2 + 1) {
      return 1;
    }
    uVar3 = param_1;
    FUN_109979238(param_1,plVar4 + 5);
    if ((uVar3 & 1) == 0) break;
    plVar1 = (long *)plVar4[1];
    plVar5 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar2 = (long *)*plVar4 != plVar5;
        plVar5 = plVar4;
      } while (bVar2);
    }
    else {
      do {
        plVar4 = plVar1;
        plVar1 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  FUN_109988e2c(&uStack_48,&UNK_10f58af94);
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    __ZdlPv(*param_3);
  }
  param_3[1] = uStack_40;
  *param_3 = uStack_48;
  param_3[2] = uStack_38;
  return 0;
}



/* Entry: 109929294; end: 109929323;  */

void FUN_109929294(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110b1da80;
  puVar1[10] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  param_1[1] = puVar1;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar2 = puVar1 + 3;
  *puVar2 = puVar1 + 4;
  *param_1 = puVar2;
  FUN_1099676e8(param_2,puVar2);
  FUN_109929324(puVar2);
  return;
}



/* Entry: 109929324; end: 10992987f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109929324(long *******param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  long *******ppppppplVar4;
  long *******ppppppplVar5;
  long *******ppppppplVar6;
  long ******pppppplVar7;
  long *******ppppppplVar8;
  long *******ppppppplVar9;
  long ******pppppplVar10;
  long *******ppppppplVar11;
  long *******ppppppplVar12;
  long *******ppppppplVar13;
  long *******ppppppplVar14;
  int iVar15;
  long *******ppppppplStack_88;
  long *******ppppppplStack_80;
  long ******pppppplStack_78;
  undefined1 uStack_69;
  long *******ppppppplStack_68;
  
  if (*(int *)(param_1 + 2) != 0) {
    ppppppplVar13 = param_1 + 1;
    ppppppplVar12 = (long *******)*ppppppplVar13;
    ppppppplStack_80 = (long *******)0x0;
    pppppplStack_78 = (long ******)0x0;
    ppppppplVar4 = ppppppplVar12;
    ppppppplVar8 = ppppppplVar13;
    if (ppppppplVar12 == (long *******)0x0) {
      do {
        ppppppplVar6 = (long *******)ppppppplVar8[2];
        bVar3 = (long *******)*ppppppplVar6 == ppppppplVar8;
        ppppppplVar4 = ppppppplVar13;
        ppppppplVar8 = ppppppplVar6;
      } while (bVar3);
      do {
        ppppppplVar8 = (long *******)ppppppplVar4[2];
        bVar3 = (long *******)*ppppppplVar8 == ppppppplVar4;
        ppppppplVar4 = ppppppplVar8;
      } while (bVar3);
    }
    else {
      do {
        ppppppplVar6 = ppppppplVar4;
        ppppppplVar5 = ppppppplVar12;
        ppppppplVar4 = (long *******)ppppppplVar6[1];
      } while ((long *******)ppppppplVar6[1] != (long *******)0x0);
      do {
        ppppppplVar8 = ppppppplVar5;
        ppppppplVar5 = (long *******)ppppppplVar8[1];
      } while ((long *******)ppppppplVar8[1] != (long *******)0x0);
    }
    ppppppplVar4 = (long *******)0x40;
    ppppppplStack_88 = (long *******)&ppppppplStack_80;
    __Znwm();
    *(undefined4 *)(ppppppplVar4 + 4) = *(undefined4 *)(ppppppplVar8 + 4);
    ppppppplVar4[6] = (long ******)0x0;
    ppppppplVar4[5] = (long ******)(ppppppplVar4 + 6);
    ppppppplVar4[7] = (long ******)0x0;
    *ppppppplVar4 = (long ******)0x0;
    ppppppplVar4[1] = (long ******)0x0;
    ppppppplVar4[2] = (long ******)&ppppppplStack_80;
    *(undefined1 *)(ppppppplVar4 + 3) = 1;
    pppppplStack_78 = (long ******)0x1;
    ppppppplStack_88 = ppppppplVar4;
    ppppppplStack_80 = ppppppplVar4;
    if (ppppppplVar4 != ppppppplVar6) {
      FUN_10992c95c(ppppppplVar4 + 5,ppppppplVar6[5],ppppppplVar6 + 6);
      ppppppplVar12 = (long *******)*ppppppplVar13;
    }
    ppppppplVar4 = ppppppplVar13;
    ppppppplVar8 = ppppppplVar12;
    if (ppppppplVar12 == (long *******)0x0) {
      do {
        ppppppplVar8 = (long *******)ppppppplVar4[2];
        bVar3 = (long *******)*ppppppplVar8 == ppppppplVar4;
        ppppppplVar4 = ppppppplVar8;
      } while (bVar3);
      iVar15 = *(int *)(ppppppplVar8 + 4);
      ppppppplVar4 = ppppppplVar13;
      do {
        ppppppplVar8 = (long *******)ppppppplVar4[2];
        bVar3 = (long *******)*ppppppplVar8 == ppppppplVar4;
        ppppppplVar4 = ppppppplVar8;
      } while (bVar3);
    }
    else {
      do {
        ppppppplVar4 = ppppppplVar8;
        ppppppplVar8 = (long *******)ppppppplVar4[1];
      } while (ppppppplVar8 != (long *******)0x0);
      iVar15 = *(int *)(ppppppplVar4 + 4);
      ppppppplVar4 = ppppppplVar12;
      do {
        ppppppplVar8 = ppppppplVar4;
        ppppppplVar4 = (long *******)ppppppplVar8[1];
      } while ((long *******)ppppppplVar8[1] != (long *******)0x0);
    }
    ppppppplVar4 = (long *******)*param_1;
    if (ppppppplVar8 != ppppppplVar4) {
      do {
        ppppppplVar4 = (long *******)*ppppppplVar8;
        ppppppplVar12 = ppppppplVar8;
        ppppppplVar6 = ppppppplVar4;
        if (ppppppplVar4 == (long *******)0x0) {
          do {
            ppppppplVar5 = (long *******)ppppppplVar12[2];
            bVar3 = (long *******)*ppppppplVar5 == ppppppplVar12;
            ppppppplVar12 = ppppppplVar5;
          } while (bVar3);
        }
        else {
          do {
            ppppppplVar5 = ppppppplVar6;
            ppppppplVar6 = (long *******)ppppppplVar5[1];
          } while ((long *******)ppppppplVar5[1] != (long *******)0x0);
        }
        iVar1 = iVar15 + 1;
        ppppppplVar12 = (long *******)ppppppplVar5[5];
        if (ppppppplVar12 != ppppppplVar5 + 6) {
          do {
            ppppppplStack_68 = ppppppplVar12 + 4;
            ppppppplVar4 = param_1 + 3;
            FUN_10992cf40(ppppppplVar4,ppppppplStack_68,&UNK_10dd5b8f9,&ppppppplStack_68,&uStack_69)
            ;
            *(int *)(ppppppplVar4 + 3) = iVar1;
            ppppppplVar4 = (long *******)ppppppplVar12[1];
            ppppppplVar6 = ppppppplVar12;
            if ((long *******)ppppppplVar12[1] == (long *******)0x0) {
              do {
                ppppppplVar12 = (long *******)ppppppplVar6[2];
                bVar3 = (long *******)*ppppppplVar12 != ppppppplVar6;
                ppppppplVar6 = ppppppplVar12;
              } while (bVar3);
            }
            else {
              do {
                ppppppplVar12 = ppppppplVar4;
                ppppppplVar4 = (long *******)*ppppppplVar12;
              } while ((long *******)*ppppppplVar12 != (long *******)0x0);
            }
          } while (ppppppplVar12 != ppppppplVar5 + 6);
          ppppppplVar4 = (long *******)*ppppppplVar8;
        }
        ppppppplVar5 = ppppppplVar8;
        ppppppplVar6 = ppppppplStack_80;
        ppppppplVar12 = (long *******)&ppppppplStack_80;
        if (ppppppplVar4 == (long *******)0x0) {
          do {
            ppppppplVar14 = (long *******)ppppppplVar5[2];
            bVar3 = (long *******)*ppppppplVar14 == ppppppplVar5;
            ppppppplVar5 = ppppppplVar14;
          } while (bVar3);
        }
        else {
          do {
            ppppppplVar14 = ppppppplVar4;
            ppppppplVar4 = (long *******)ppppppplVar14[1];
          } while ((long *******)ppppppplVar14[1] != (long *******)0x0);
        }
        while (ppppppplVar4 = ppppppplVar12, ppppppplVar6 != (long *******)0x0) {
          while (ppppppplVar5 = ppppppplVar6, *(int *)(ppppppplVar5 + 4) <= iVar1) {
            if (iVar15 < *(int *)(ppppppplVar5 + 4)) goto LAB_109929794;
            ppppppplVar6 = (long *******)ppppppplVar5[1];
            if ((long *******)ppppppplVar5[1] == (long *******)0x0) {
              ppppppplVar12 = ppppppplVar5 + 1;
              ppppppplVar4 = ppppppplVar5;
              goto LAB_1099295a4;
            }
          }
          ppppppplVar12 = ppppppplVar5;
          ppppppplVar6 = (long *******)*ppppppplVar5;
        }
LAB_1099295a4:
        ppppppplVar5 = (long *******)0x40;
        __Znwm();
        *(int *)(ppppppplVar5 + 4) = iVar1;
        ppppppplVar5[7] = (long ******)0x0;
        ppppppplVar5[6] = (long ******)0x0;
        ppppppplVar5[5] = (long ******)(ppppppplVar5 + 6);
        *ppppppplVar5 = (long ******)0x0;
        ppppppplVar5[1] = (long ******)0x0;
        ppppppplVar5[2] = (long ******)ppppppplVar4;
        *ppppppplVar12 = (long ******)ppppppplVar5;
        ppppppplVar4 = ppppppplVar5;
        if ((long *******)*ppppppplStack_88 != (long *******)0x0) {
          ppppppplVar4 = (long *******)*ppppppplVar12;
          ppppppplStack_88 = (long *******)*ppppppplStack_88;
        }
        bVar3 = ppppppplVar4 == ppppppplStack_80;
        *(bool *)(ppppppplVar4 + 3) = bVar3;
joined_r0x0001099295f4:
        if ((bVar3) ||
           (ppppppplVar12 = (long *******)ppppppplVar4[2], ((ulong)ppppppplVar12[3] & 1) != 0))
        goto LAB_109929788;
        ppppppplVar6 = (long *******)ppppppplVar12[2];
        ppppppplVar11 = (long *******)*ppppppplVar6;
        if (ppppppplVar11 == ppppppplVar12) {
          if ((ppppppplVar6[1] == (long ******)0x0) ||
             (ppppppplVar9 = (long *******)(ppppppplVar6[1] + 3), *(char *)ppppppplVar9 == '\x01'))
          {
            ppppppplVar9 = ppppppplVar12;
            if ((long *******)*ppppppplVar12 != ppppppplVar4) {
              ppppppplVar9 = (long *******)ppppppplVar12[1];
              pppppplVar7 = *ppppppplVar9;
              ppppppplVar12[1] = pppppplVar7;
              ppppppplVar4 = ppppppplVar12;
              if (pppppplVar7 != (long ******)0x0) {
                pppppplVar7[2] = (long *****)ppppppplVar12;
                ppppppplVar6 = (long *******)ppppppplVar12[2];
                ppppppplVar4 = (long *******)*ppppppplVar6;
              }
              ppppppplVar9[2] = (long ******)ppppppplVar6;
              lVar2 = 0;
              if (ppppppplVar4 != ppppppplVar12) {
                lVar2 = 8;
              }
              *(long ********)((long)ppppppplVar6 + lVar2) = ppppppplVar9;
              *ppppppplVar9 = (long ******)ppppppplVar12;
              ppppppplVar12[2] = (long ******)ppppppplVar9;
              ppppppplVar6 = (long *******)ppppppplVar9[2];
              ppppppplVar11 = (long *******)*ppppppplVar6;
            }
            *(undefined1 *)(ppppppplVar9 + 3) = 1;
            *(undefined1 *)(ppppppplVar6 + 3) = 0;
            pppppplVar7 = ppppppplVar11[1];
            *ppppppplVar6 = pppppplVar7;
            if (pppppplVar7 != (long ******)0x0) {
              pppppplVar7[2] = (long *****)ppppppplVar6;
            }
            pppppplVar7 = ppppppplVar6[2];
            ppppppplVar11[2] = pppppplVar7;
            lVar2 = 0;
            if ((long *******)*pppppplVar7 != ppppppplVar6) {
              lVar2 = 8;
            }
            *(long ********)((long)pppppplVar7 + lVar2) = ppppppplVar11;
            ppppppplVar11[1] = (long ******)ppppppplVar6;
            ppppppplVar6[2] = (long ******)ppppppplVar11;
            goto LAB_109929788;
          }
LAB_109929640:
          *(undefined1 *)(ppppppplVar12 + 3) = 1;
          bVar3 = ppppppplVar6 == ppppppplStack_80;
          *(bool *)(ppppppplVar6 + 3) = bVar3;
          *(char *)ppppppplVar9 = '\x01';
          ppppppplVar4 = ppppppplVar6;
          goto joined_r0x0001099295f4;
        }
        if ((ppppppplVar11 != (long *******)0x0) &&
           (ppppppplVar9 = ppppppplVar11 + 3, *(char *)ppppppplVar9 != '\x01')) goto LAB_109929640;
        ppppppplVar11 = (long *******)*ppppppplVar12;
        if (ppppppplVar11 == ppppppplVar4) {
          pppppplVar7 = ppppppplVar11[1];
          *ppppppplVar12 = pppppplVar7;
          if (pppppplVar7 != (long ******)0x0) {
            pppppplVar7[2] = (long *****)ppppppplVar12;
            ppppppplVar6 = (long *******)ppppppplVar12[2];
          }
          ppppppplVar11[2] = (long ******)ppppppplVar6;
          lVar2 = 0;
          if ((long *******)*ppppppplVar6 != ppppppplVar12) {
            lVar2 = 8;
          }
          *(long ********)((long)ppppppplVar6 + lVar2) = ppppppplVar11;
          ppppppplVar11[1] = (long ******)ppppppplVar12;
          ppppppplVar12[2] = (long ******)ppppppplVar11;
          ppppppplVar6 = (long *******)ppppppplVar11[2];
          ppppppplVar12 = ppppppplVar11;
        }
        *(undefined1 *)(ppppppplVar12 + 3) = 1;
        *(undefined1 *)(ppppppplVar6 + 3) = 0;
        pppppplVar7 = ppppppplVar6[1];
        pppppplVar10 = (long ******)*pppppplVar7;
        ppppppplVar6[1] = pppppplVar10;
        if (pppppplVar10 != (long ******)0x0) {
          pppppplVar10[2] = (long *****)ppppppplVar6;
        }
        pppppplVar10 = ppppppplVar6[2];
        pppppplVar7[2] = (long *****)pppppplVar10;
        lVar2 = 0;
        if ((long *******)*pppppplVar10 != ppppppplVar6) {
          lVar2 = 8;
        }
        *(long *******)((long)pppppplVar10 + lVar2) = pppppplVar7;
        *pppppplVar7 = (long *****)ppppppplVar6;
        ppppppplVar6[2] = pppppplVar7;
LAB_109929788:
        pppppplStack_78 = (long ******)((long)pppppplStack_78 + 1);
LAB_109929794:
        if (ppppppplVar5 != ppppppplVar14) {
          FUN_10992c95c(ppppppplVar5 + 5,ppppppplVar14[5],ppppppplVar14 + 6);
        }
        ppppppplVar4 = (long *******)*ppppppplVar8;
        ppppppplVar12 = ppppppplVar8;
        if ((long *******)*ppppppplVar8 == (long *******)0x0) {
          do {
            ppppppplVar8 = (long *******)ppppppplVar12[2];
            bVar3 = (long *******)*ppppppplVar8 == ppppppplVar12;
            ppppppplVar12 = ppppppplVar8;
          } while (bVar3);
        }
        else {
          do {
            ppppppplVar8 = ppppppplVar4;
            ppppppplVar4 = (long *******)ppppppplVar8[1];
          } while ((long *******)ppppppplVar8[1] != (long *******)0x0);
        }
        ppppppplVar4 = (long *******)*param_1;
        iVar15 = iVar1;
      } while (ppppppplVar8 != ppppppplVar4);
      ppppppplVar12 = (long *******)*ppppppplVar13;
    }
    *param_1 = (long ******)ppppppplStack_88;
    param_1[1] = (long ******)ppppppplStack_80;
    pppppplVar7 = param_1[2];
    param_1[2] = pppppplStack_78;
    if (pppppplStack_78 != (long ******)0x0) {
      param_1 = ppppppplStack_80 + 2;
    }
    *param_1 = (long ******)ppppppplVar13;
    ppppppplVar8 = (long *******)&ppppppplStack_88;
    if (pppppplVar7 != (long ******)0x0) {
      ppppppplVar8 = ppppppplVar12 + 2;
    }
    ppppppplStack_88 = ppppppplVar4;
    ppppppplStack_80 = ppppppplVar12;
    pppppplStack_78 = pppppplVar7;
    *ppppppplVar8 = (long ******)&ppppppplStack_80;
    func_0x00010992bc38(&ppppppplStack_88,ppppppplVar12);
  }
  return;
}



/* Entry: 109929880; end: 1099298d7;  */

long FUN_109929880(long param_1)

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



/* Entry: 1099298d8; end: 109929913;  */

undefined8 FUN_1099298d8(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  double *pdVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long unaff_x20;
  ulong unaff_x21;
  ulong uVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined1 uStack_288;
  undefined7 uStack_287;
  char cStack_271;
  undefined1 uStack_270;
  undefined7 uStack_26f;
  char cStack_259;
  undefined1 uStack_258;
  undefined7 uStack_257;
  char cStack_241;
  undefined1 uStack_240;
  undefined7 uStack_23f;
  char cStack_229;
  undefined2 uStack_228;
  undefined6 uStack_226;
  char cStack_211;
  undefined2 uStack_210;
  undefined6 uStack_20e;
  char cStack_1f9;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 uStack_1e0;
  char cStack_1c9;
  undefined8 uStack_1c8;
  char cStack_1b1;
  undefined8 uStack_1b0;
  char cStack_199;
  undefined8 uStack_198;
  char cStack_181;
  undefined8 uStack_180;
  char cStack_169;
  undefined8 uStack_168;
  char cStack_151;
  long lStack_140;
  ulong uStack_138;
  long lStack_130;
  ulong uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_68;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  uStack_18 = 0x1099298ec;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  uStack_28 = 0x109929900;
  puVar5 = &DAT_10f62a4d8;
  puStack_30 = (undefined1 *)&puStack_20;
  func_0x000104c4f6cc();
  pcStack_38 = FUN_109929914;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = *(long **)(puVar5 + 0x10);
  puStack_40 = (undefined1 *)&puStack_30;
  if (plVar6 == (long *)0x0) {
LAB_1099299d4:
    uStack_118 = 1;
  }
  else {
    iVar2 = *(int *)(puVar5 + 8);
    puStack_40 = (undefined1 *)&puStack_30;
    (**(code **)(*plVar6 + 0x18))();
    uVar3 = (int)plVar6 * iVar2;
    unaff_x21 = (ulong)uVar3;
    unaff_x20 = *(long *)(puVar5 + 0x20);
    if (0 < (int)uVar3 && unaff_x20 != 0) {
      _memset_pattern16(unaff_x20,&UNK_10e00cee0,unaff_x21 << 3);
    }
    plVar6 = *(long **)(puVar5 + 0x10);
    param_2 = *(ulong **)(puVar5 + 0x18);
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2,unaff_x20);
    if (((ulong)plVar6 & 1) != 0) {
      pdVar9 = *(double **)(puVar5 + 0x20);
      uVar15 = unaff_x21;
      if (0 < (int)uVar3 && pdVar9 != (double *)0x0) {
        do {
          if ((0x7fefffffffffffff < (ulong)ABS(*pdVar9)) || (*pdVar9 == 1e+302)) {
            uStack_e8 = 0;
            uStack_90 = 0;
            uStack_d0 = 0;
            uStack_d8 = 0;
            uStack_c0 = 0;
            uStack_c8 = 0;
            uStack_b0 = 0;
            uStack_b8 = 0;
            uStack_a0 = 0;
            uStack_a8 = 0;
            uStack_98 = 0;
            FUN_1099a9f0c(&uStack_e8,&UNK_10f58affb,0x14b,1,FUN_1099aa768,0);
            unaff_x20 = lStack_e0 + 0x7540;
            FUN_1092b4db8(unaff_x20,&UNK_10f58b12e,0x2c);
            FUN_1092b4db8();
            uStack_100 = *(undefined8 *)(puVar5 + 0x18);
            lStack_f8 = (long)*(int *)(puVar5 + 8);
            FUN_109929b90();
            FUN_1092b4db8();
            unaff_x21 = *(ulong *)(puVar5 + 0x20);
            unaff_x22 = (long)*(int *)(puVar5 + 8);
            plVar6 = *(long **)(puVar5 + 0x10);
            lStack_78 = unaff_x22;
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x18))();
              lStack_78 = (long)(int)plVar6;
            }
            param_2 = &uStack_88;
            uStack_88 = unaff_x21;
            lStack_80 = unaff_x22;
            FUN_109929e7c(unaff_x20);
            goto LAB_109929b24;
          }
          uVar15 = uVar15 - 1;
          unaff_x21 = 0;
          pdVar9 = pdVar9 + 1;
        } while (uVar15 != 0);
      }
      goto LAB_1099299d4;
    }
    uStack_e8 = 0;
    uStack_90 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_98 = 0;
    FUN_1099a9f0c(&uStack_e8,&UNK_10f58affb,0x144,1,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_e0 + 0x7540,&UNK_10f58b0fd,0x30);
    uStack_88 = *(ulong *)(puVar5 + 0x18);
    lStack_80 = (long)*(int *)(puVar5 + 8);
    param_2 = &uStack_88;
    FUN_109929b90();
LAB_109929b24:
    FUN_1099ab3b0(&uStack_e8);
    uStack_118 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uStack_118;
  }
  ___stack_chk_fail();
  FUN_1099ab3b0(&uStack_e8);
  uVar7 = uStack_118;
  __Unwind_Resume(uStack_118);
  pcStack_108 = FUN_109929b90;
  lStack_140 = 0;
  uStack_138 = 0;
  uVar15 = *param_2;
  uVar1 = param_2[1];
  lStack_130 = unaff_x22;
  uStack_128 = unaff_x21;
  lStack_120 = unaff_x20;
  ppuStack_110 = &puStack_40;
  if (uVar1 != 0) {
    lVar8 = 0;
    if (uVar1 != 0) {
      lVar8 = 0x7fffffffffffffff / (long)uVar1;
    }
    if (0 < lVar8) {
      if ((long)uVar1 < 1) {
        uVar10 = -(-uVar1 & 0xfffffffffffffffe);
        uStack_138 = uVar1;
        goto LAB_109929c3c;
      }
      if (uVar1 >> 0x3d == 0) {
        lVar8 = uVar1 << 3;
        _malloc();
        if (lVar8 != 0) {
          lStack_140 = lVar8;
          if (uVar1 == 1) {
            uVar10 = 0;
            uStack_138 = uVar1;
          }
          else {
            lVar12 = 0;
            uVar13 = 0;
            uVar10 = uVar1 & 0x1ffffffffffffffe;
            do {
              puVar11 = (undefined8 *)(uVar15 + lVar12);
              uVar16 = *puVar11;
              ((undefined8 *)(lVar8 + lVar12))[1] = puVar11[1];
              *(undefined8 *)(lVar8 + lVar12) = uVar16;
              uVar13 = uVar13 + 2;
              lVar12 = lVar12 + 0x10;
              uStack_138 = uVar1;
            } while (uVar13 < uVar10);
          }
          goto LAB_109929c3c;
        }
      }
    }
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109929df0);
    (*pcVar4)();
  }
  uVar10 = 0;
LAB_109929c3c:
  lVar8 = uVar1 - uVar10;
  if (lVar8 != 0 && (long)uVar10 <= (long)uVar1) {
    puVar11 = (undefined8 *)(lStack_140 + uVar10 * 8);
    puVar14 = (undefined8 *)(uVar15 + uVar10 * 8);
    do {
      *puVar11 = *puVar14;
      lVar8 = lVar8 + -1;
      puVar11 = puVar11 + 1;
      puVar14 = puVar14 + 1;
    } while (lVar8 != 0);
  }
  cStack_1f9 = '\x01';
  uStack_210 = 0x20;
  cStack_211 = '\x01';
  uStack_228 = 10;
  cStack_229 = '\0';
  uStack_240 = 0;
  cStack_241 = '\0';
  uStack_258 = 0;
  cStack_259 = '\0';
  uStack_270 = 0;
  cStack_271 = '\0';
  uStack_288 = 0;
  FUN_1095008b8(auStack_1f8,0xffffffff,0,&uStack_210,&uStack_228,&uStack_240,&uStack_258,&uStack_270
                ,&uStack_288,0x20);
  FUN_10992a190(uVar7,&lStack_140,auStack_1f8);
  if (cStack_151 < '\0') {
    __ZdlPv(uStack_168);
  }
  if (cStack_169 < '\0') {
    __ZdlPv(uStack_180);
  }
  if (cStack_181 < '\0') {
    __ZdlPv(uStack_198);
  }
  if (cStack_199 < '\0') {
    __ZdlPv(uStack_1b0);
  }
  if (cStack_1b1 < '\0') {
    __ZdlPv(uStack_1c8);
  }
  if (cStack_1c9 < '\0') {
    __ZdlPv(uStack_1e0);
  }
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  if (cStack_271 < '\0') {
    __ZdlPv(CONCAT71(uStack_287,uStack_288));
  }
  if (cStack_259 < '\0') {
    __ZdlPv(CONCAT71(uStack_26f,uStack_270));
  }
  if (cStack_241 < '\0') {
    __ZdlPv(CONCAT71(uStack_257,uStack_258));
  }
  if (cStack_229 < '\0') {
    __ZdlPv(CONCAT71(uStack_23f,uStack_240));
  }
  if (cStack_211 < '\0') {
    __ZdlPv(CONCAT62(uStack_226,uStack_228));
  }
  if (cStack_1f9 < '\0') {
    __ZdlPv(CONCAT62(uStack_20e,uStack_210));
  }
  _free(lStack_140);
  return uVar7;
}



/* Entry: 109929914; end: 109929b8f;  */

undefined8 FUN_109929914(long param_1,ulong *param_2)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  double *pdVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long unaff_x20;
  ulong unaff_x21;
  ulong uVar14;
  long unaff_x22;
  undefined8 uVar15;
  undefined1 uStack_258;
  undefined7 uStack_257;
  char cStack_241;
  undefined1 uStack_240;
  undefined7 uStack_23f;
  char cStack_229;
  undefined1 uStack_228;
  undefined7 uStack_227;
  char cStack_211;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  char cStack_1f9;
  undefined2 uStack_1f8;
  undefined6 uStack_1f6;
  char cStack_1e1;
  undefined2 uStack_1e0;
  undefined6 uStack_1de;
  char cStack_1c9;
  undefined8 auStack_1c8 [2];
  char cStack_1b1;
  undefined8 uStack_1b0;
  char cStack_199;
  undefined8 uStack_198;
  char cStack_181;
  undefined8 uStack_180;
  char cStack_169;
  undefined8 uStack_168;
  char cStack_151;
  undefined8 uStack_150;
  char cStack_139;
  undefined8 uStack_138;
  char cStack_121;
  long lStack_110;
  ulong uStack_108;
  long lStack_100;
  ulong uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
LAB_1099299d4:
    uStack_e8 = 1;
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
    (**(code **)(*plVar5 + 0x18))();
    uVar3 = (int)plVar5 * iVar2;
    unaff_x21 = (ulong)uVar3;
    unaff_x20 = *(long *)(param_1 + 0x20);
    if (0 < (int)uVar3 && unaff_x20 != 0) {
      _memset_pattern16(unaff_x20,&UNK_10e00cee0,unaff_x21 << 3);
    }
    plVar5 = *(long **)(param_1 + 0x10);
    param_2 = *(ulong **)(param_1 + 0x18);
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2,unaff_x20);
    if (((ulong)plVar5 & 1) != 0) {
      pdVar8 = *(double **)(param_1 + 0x20);
      uVar14 = unaff_x21;
      if (0 < (int)uVar3 && pdVar8 != (double *)0x0) {
        do {
          if ((0x7fefffffffffffff < (ulong)ABS(*pdVar8)) || (*pdVar8 == 1e+302)) {
            uStack_b8 = 0;
            uStack_60 = 0;
            uStack_a0 = 0;
            uStack_a8 = 0;
            uStack_90 = 0;
            uStack_98 = 0;
            uStack_80 = 0;
            uStack_88 = 0;
            uStack_70 = 0;
            uStack_78 = 0;
            uStack_68 = 0;
            FUN_1099a9f0c(&uStack_b8,&UNK_10f58affb,0x14b,1,FUN_1099aa768,0);
            unaff_x20 = lStack_b0 + 0x7540;
            FUN_1092b4db8(unaff_x20,&UNK_10f58b12e,0x2c);
            FUN_1092b4db8();
            uStack_d0 = *(undefined8 *)(param_1 + 0x18);
            lStack_c8 = (long)*(int *)(param_1 + 8);
            FUN_109929b90();
            FUN_1092b4db8();
            unaff_x21 = *(ulong *)(param_1 + 0x20);
            unaff_x22 = (long)*(int *)(param_1 + 8);
            plVar5 = *(long **)(param_1 + 0x10);
            lStack_48 = unaff_x22;
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x18))();
              lStack_48 = (long)(int)plVar5;
            }
            param_2 = &uStack_58;
            uStack_58 = unaff_x21;
            lStack_50 = unaff_x22;
            FUN_109929e7c(unaff_x20);
            goto LAB_109929b24;
          }
          uVar14 = uVar14 - 1;
          unaff_x21 = 0;
          pdVar8 = pdVar8 + 1;
        } while (uVar14 != 0);
      }
      goto LAB_1099299d4;
    }
    uStack_b8 = 0;
    uStack_60 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_68 = 0;
    FUN_1099a9f0c(&uStack_b8,&UNK_10f58affb,0x144,1,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_b0 + 0x7540,&UNK_10f58b0fd,0x30);
    uStack_58 = *(ulong *)(param_1 + 0x18);
    lStack_50 = (long)*(int *)(param_1 + 8);
    param_2 = &uStack_58;
    FUN_109929b90();
LAB_109929b24:
    FUN_1099ab3b0(&uStack_b8);
    uStack_e8 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return uStack_e8;
  }
  ___stack_chk_fail();
  FUN_1099ab3b0(&uStack_b8);
  uVar6 = uStack_e8;
  __Unwind_Resume(uStack_e8);
  pcStack_d8 = FUN_109929b90;
  lStack_110 = 0;
  uStack_108 = 0;
  uVar14 = *param_2;
  uVar1 = param_2[1];
  lStack_100 = unaff_x22;
  uStack_f8 = unaff_x21;
  lStack_f0 = unaff_x20;
  puStack_e0 = &stack0xfffffffffffffff0;
  if (uVar1 != 0) {
    lVar7 = 0;
    if (uVar1 != 0) {
      lVar7 = 0x7fffffffffffffff / (long)uVar1;
    }
    if (0 < lVar7) {
      if ((long)uVar1 < 1) {
        uVar9 = -(-uVar1 & 0xfffffffffffffffe);
        uStack_108 = uVar1;
        goto LAB_109929c3c;
      }
      if (uVar1 >> 0x3d == 0) {
        lVar7 = uVar1 << 3;
        _malloc();
        if (lVar7 != 0) {
          lStack_110 = lVar7;
          if (uVar1 == 1) {
            uVar9 = 0;
            uStack_108 = uVar1;
          }
          else {
            lVar11 = 0;
            uVar12 = 0;
            uVar9 = uVar1 & 0x1ffffffffffffffe;
            do {
              puVar10 = (undefined8 *)(uVar14 + lVar11);
              uVar15 = *puVar10;
              ((undefined8 *)(lVar7 + lVar11))[1] = puVar10[1];
              *(undefined8 *)(lVar7 + lVar11) = uVar15;
              uVar12 = uVar12 + 2;
              lVar11 = lVar11 + 0x10;
              uStack_108 = uVar1;
            } while (uVar12 < uVar9);
          }
          goto LAB_109929c3c;
        }
      }
    }
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109929df0);
    (*pcVar4)();
  }
  uVar9 = 0;
LAB_109929c3c:
  lVar7 = uVar1 - uVar9;
  if (lVar7 != 0 && (long)uVar9 <= (long)uVar1) {
    puVar10 = (undefined8 *)(lStack_110 + uVar9 * 8);
    puVar13 = (undefined8 *)(uVar14 + uVar9 * 8);
    do {
      *puVar10 = *puVar13;
      lVar7 = lVar7 + -1;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    } while (lVar7 != 0);
  }
  cStack_1c9 = '\x01';
  uStack_1e0 = 0x20;
  cStack_1e1 = '\x01';
  uStack_1f8 = 10;
  cStack_1f9 = '\0';
  uStack_210 = 0;
  cStack_211 = '\0';
  uStack_228 = 0;
  cStack_229 = '\0';
  uStack_240 = 0;
  cStack_241 = '\0';
  uStack_258 = 0;
  FUN_1095008b8(auStack_1c8,0xffffffff,0,&uStack_1e0,&uStack_1f8,&uStack_210,&uStack_228,&uStack_240
                ,&uStack_258,0x20);
  FUN_10992a190(uVar6,&lStack_110,auStack_1c8);
  if (cStack_121 < '\0') {
    __ZdlPv(uStack_138);
  }
  if (cStack_139 < '\0') {
    __ZdlPv(uStack_150);
  }
  if (cStack_151 < '\0') {
    __ZdlPv(uStack_168);
  }
  if (cStack_169 < '\0') {
    __ZdlPv(uStack_180);
  }
  if (cStack_181 < '\0') {
    __ZdlPv(uStack_198);
  }
  if (cStack_199 < '\0') {
    __ZdlPv(uStack_1b0);
  }
  if (cStack_1b1 < '\0') {
    __ZdlPv(auStack_1c8[0]);
  }
  if (cStack_241 < '\0') {
    __ZdlPv(CONCAT71(uStack_257,uStack_258));
  }
  if (cStack_229 < '\0') {
    __ZdlPv(CONCAT71(uStack_23f,uStack_240));
  }
  if (cStack_211 < '\0') {
    __ZdlPv(CONCAT71(uStack_227,uStack_228));
  }
  if (cStack_1f9 < '\0') {
    __ZdlPv(CONCAT71(uStack_20f,uStack_210));
  }
  if (cStack_1e1 < '\0') {
    __ZdlPv(CONCAT62(uStack_1f6,uStack_1f8));
  }
  if (cStack_1c9 < '\0') {
    __ZdlPv(CONCAT62(uStack_1de,uStack_1e0));
  }
  _free(lStack_110);
  return uVar6;
}



/* Entry: 109929b90; end: 109929e7b;  */

undefined8 FUN_109929b90(undefined8 param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 uStack_188;
  undefined7 uStack_187;
  char cStack_171;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  char cStack_159;
  undefined1 uStack_158;
  undefined7 uStack_157;
  char cStack_141;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  char cStack_129;
  undefined2 uStack_128;
  undefined6 uStack_126;
  char cStack_111;
  undefined2 uStack_110;
  undefined6 uStack_10e;
  char cStack_f9;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 uStack_e0;
  char cStack_c9;
  undefined8 uStack_c8;
  char cStack_b1;
  undefined8 uStack_b0;
  char cStack_99;
  undefined8 uStack_98;
  char cStack_81;
  undefined8 uStack_80;
  char cStack_69;
  undefined8 uStack_68;
  char cStack_51;
  long lStack_40;
  ulong uStack_38;
  
  lStack_40 = 0;
  uStack_38 = 0;
  lVar1 = *param_2;
  uVar2 = param_2[1];
  if (uVar2 == 0) {
    uVar5 = 0;
LAB_109929c3c:
    lVar4 = uVar2 - uVar5;
    if (lVar4 != 0 && (long)uVar5 <= (long)uVar2) {
      puVar6 = (undefined8 *)(lStack_40 + uVar5 * 8);
      puVar9 = (undefined8 *)(lVar1 + uVar5 * 8);
      do {
        *puVar6 = *puVar9;
        lVar4 = lVar4 + -1;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      } while (lVar4 != 0);
    }
    cStack_f9 = '\x01';
    uStack_110 = 0x20;
    cStack_111 = '\x01';
    uStack_128 = 10;
    cStack_129 = '\0';
    uStack_140 = 0;
    cStack_141 = '\0';
    uStack_158 = 0;
    cStack_159 = '\0';
    uStack_170 = 0;
    cStack_171 = '\0';
    uStack_188 = 0;
    FUN_1095008b8(auStack_f8,0xffffffff,0,&uStack_110,&uStack_128,&uStack_140,&uStack_158,
                  &uStack_170,&uStack_188,0x20);
    FUN_10992a190(param_1,&lStack_40,auStack_f8);
    if (cStack_51 < '\0') {
      __ZdlPv(uStack_68);
    }
    if (cStack_69 < '\0') {
      __ZdlPv(uStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(uStack_98);
    }
    if (cStack_99 < '\0') {
      __ZdlPv(uStack_b0);
    }
    if (cStack_b1 < '\0') {
      __ZdlPv(uStack_c8);
    }
    if (cStack_c9 < '\0') {
      __ZdlPv(uStack_e0);
    }
    if (cStack_e1 < '\0') {
      __ZdlPv(auStack_f8[0]);
    }
    if (cStack_171 < '\0') {
      __ZdlPv(CONCAT71(uStack_187,uStack_188));
    }
    if (cStack_159 < '\0') {
      __ZdlPv(CONCAT71(uStack_16f,uStack_170));
    }
    if (cStack_141 < '\0') {
      __ZdlPv(CONCAT71(uStack_157,uStack_158));
    }
    if (cStack_129 < '\0') {
      __ZdlPv(CONCAT71(uStack_13f,uStack_140));
    }
    if (cStack_111 < '\0') {
      __ZdlPv(CONCAT62(uStack_126,uStack_128));
    }
    if (cStack_f9 < '\0') {
      __ZdlPv(CONCAT62(uStack_10e,uStack_110));
    }
    _free(lStack_40);
    return param_1;
  }
  lVar4 = 0;
  if (uVar2 != 0) {
    lVar4 = 0x7fffffffffffffff / (long)uVar2;
  }
  if (0 < lVar4) {
    if ((long)uVar2 < 1) {
      uVar5 = -(-uVar2 & 0xfffffffffffffffe);
      uStack_38 = uVar2;
      goto LAB_109929c3c;
    }
    if (uVar2 >> 0x3d == 0) {
      lVar4 = uVar2 << 3;
      _malloc();
      if (lVar4 != 0) {
        lStack_40 = lVar4;
        if (uVar2 == 1) {
          uVar5 = 0;
          uStack_38 = uVar2;
        }
        else {
          lVar7 = 0;
          uVar8 = 0;
          uVar5 = uVar2 & 0x1ffffffffffffffe;
          do {
            puVar6 = (undefined8 *)(lVar1 + lVar7);
            uVar10 = *puVar6;
            ((undefined8 *)(lVar4 + lVar7))[1] = puVar6[1];
            *(undefined8 *)(lVar4 + lVar7) = uVar10;
            uVar8 = uVar8 + 2;
            lVar7 = lVar7 + 0x10;
            uStack_38 = uVar2;
          } while (uVar8 < uVar5);
        }
        goto LAB_109929c3c;
      }
    }
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109929df0);
  (*pcVar3)();
}



/* Entry: 109929e7c; end: 10992a18f;  */

undefined8 FUN_109929e7c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  char cStack_189;
  undefined1 uStack_188;
  undefined7 uStack_187;
  char cStack_171;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  char cStack_159;
  undefined1 uStack_158;
  undefined7 uStack_157;
  char cStack_141;
  undefined2 uStack_140;
  undefined6 uStack_13e;
  char cStack_129;
  undefined2 uStack_128;
  undefined6 uStack_126;
  char cStack_111;
  undefined8 auStack_110 [2];
  char cStack_f9;
  undefined8 uStack_f8;
  char cStack_e1;
  undefined8 uStack_e0;
  char cStack_c9;
  undefined8 uStack_c8;
  char cStack_b1;
  undefined8 uStack_b0;
  char cStack_99;
  undefined8 uStack_98;
  char cStack_81;
  undefined8 uStack_80;
  char cStack_69;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_58 = 0;
  lStack_50 = 0;
  lStack_48 = 0;
  lVar4 = param_2[1];
  lVar7 = param_2[2];
  lVar1 = lStack_50;
  lVar2 = lStack_48;
  if (lVar4 != 0 || lVar7 != 0) {
    lVar10 = *param_2;
    if (lVar4 != 0 && lVar7 != 0) {
      lVar1 = 0;
      if (lVar7 != 0) {
        lVar1 = 0x7fffffffffffffff / lVar7;
      }
      if (lVar1 < lVar4) goto LAB_10992a0e0;
    }
    uVar11 = lVar7 * lVar4;
    lVar1 = lVar4;
    lVar2 = lVar7;
    if (uVar11 != 0) {
      if ((long)uVar11 < 1) {
        uVar5 = -(-uVar11 & 0xfffffffffffffffe);
      }
      else {
        if (uVar11 >> 0x3d != 0) {
LAB_10992a0e0:
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10992a104);
          (*pcVar3)();
        }
        lVar4 = uVar11 * 8;
        _malloc();
        if (lVar4 == 0) goto LAB_10992a0e0;
        lStack_58 = lVar4;
        if (uVar11 == 1) {
          uVar5 = 0;
        }
        else {
          lVar7 = 0;
          uVar8 = 0;
          uVar5 = uVar11 & 0x1ffffffffffffffe;
          do {
            puVar6 = (undefined8 *)(lVar10 + lVar7);
            uVar12 = *puVar6;
            ((undefined8 *)(lVar4 + lVar7))[1] = puVar6[1];
            *(undefined8 *)(lVar4 + lVar7) = uVar12;
            uVar8 = uVar8 + 2;
            lVar7 = lVar7 + 0x10;
          } while (uVar8 < uVar5);
        }
      }
      lVar4 = uVar11 - uVar5;
      if (lVar4 != 0 && (long)uVar5 <= (long)uVar11) {
        puVar6 = (undefined8 *)(lStack_58 + uVar5 * 8);
        puVar9 = (undefined8 *)(lVar10 + uVar5 * 8);
        do {
          *puVar6 = *puVar9;
          lVar4 = lVar4 + -1;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar4 != 0);
      }
    }
  }
  lStack_48 = lVar2;
  lStack_50 = lVar1;
  cStack_111 = '\x01';
  uStack_128 = 0x20;
  cStack_129 = '\x01';
  uStack_140 = 10;
  cStack_141 = '\0';
  uStack_158 = 0;
  cStack_159 = '\0';
  uStack_170 = 0;
  cStack_171 = '\0';
  uStack_188 = 0;
  cStack_189 = '\0';
  uStack_1a0 = 0;
  FUN_1095008b8(auStack_110,0xffffffff,0,&uStack_128,&uStack_140,&uStack_158,&uStack_170,&uStack_188
                ,&uStack_1a0,0x20);
  FUN_10992a8c0(param_1,&lStack_58,auStack_110);
  if (cStack_69 < '\0') {
    __ZdlPv(uStack_80);
  }
  if (cStack_81 < '\0') {
    __ZdlPv(uStack_98);
  }
  if (cStack_99 < '\0') {
    __ZdlPv(uStack_b0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(uStack_c8);
  }
  if (cStack_c9 < '\0') {
    __ZdlPv(uStack_e0);
  }
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  if (cStack_f9 < '\0') {
    __ZdlPv(auStack_110[0]);
  }
  if (cStack_189 < '\0') {
    __ZdlPv(CONCAT71(uStack_19f,uStack_1a0));
  }
  if (cStack_171 < '\0') {
    __ZdlPv(CONCAT71(uStack_187,uStack_188));
  }
  if (cStack_159 < '\0') {
    __ZdlPv(CONCAT71(uStack_16f,uStack_170));
  }
  if (cStack_141 < '\0') {
    __ZdlPv(CONCAT71(uStack_157,uStack_158));
  }
  if (cStack_129 < '\0') {
    __ZdlPv(CONCAT62(uStack_13e,uStack_140));
  }
  if (cStack_111 < '\0') {
    __ZdlPv(CONCAT62(uStack_126,uStack_128));
  }
  _free(lStack_58);
  return param_1;
}



/* Entry: 10992a190; end: 10992a82f;  */

long * FUN_10992a190(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined **ppuVar1;
  undefined8 *******pppppppuVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 *******pppppppuVar7;
  undefined ***pppuVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 **ppuVar13;
  undefined8 uVar14;
  int iVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uStack_1e8;
  undefined8 ******ppppppuStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined **ppuStack_180;
  undefined8 uStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined1 auStack_160 [8];
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  short *psStack_130;
  undefined8 uStack_128;
  undefined6 uStack_120;
  undefined2 uStack_11a;
  undefined6 uStack_118;
  short sStack_112;
  undefined8 *puStack_110;
  uint uStack_108;
  undefined **appuStack_100 [6];
  undefined8 uStack_d0;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  lVar9 = param_2[1];
  if (lVar9 == 0) {
    uVar18 = param_3[1];
    puVar10 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar18 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar10 = param_3;
    }
    FUN_1092b4db8(param_1,puVar10,uVar18);
    FUN_1092b4db8();
    return param_1;
  }
  iVar15 = *(int *)((long)param_3 + 0xac);
  if (iVar15 == -2) {
    lVar12 = 0xf;
  }
  else if ((iVar15 == -1) || (lVar12 = (long)iVar15, iVar15 == 0)) {
    uStack_1e8 = 0;
    bVar4 = true;
    goto LAB_10992a258;
  }
  bVar4 = false;
  uStack_1e8 = *(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10);
  *(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10) = lVar12;
  lVar9 = param_2[1];
LAB_10992a258:
  uVar18 = 0;
  if (((*(byte *)(param_3 + 0x16) & 1) == 0) && (0 < lVar9)) {
    lVar9 = 0;
    uVar18 = 0;
    ppuVar1 = (undefined **)
              (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    do {
      uStack_d0 = 0;
      uStack_178 = 0;
      ppuStack_170 = &PTR_DAT_1108a5a60;
      appuStack_100[0] = &PTR___ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108a5ba0
      ;
      ppuStack_180 = &PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108a5b78;
      __ZNSt3__18ios_base4initEPv(appuStack_100,&ppuStack_168);
      uStack_78 = 0;
      uStack_70 = 0xffffffff;
      ppuStack_180 = &PTR_SUB_1108a5a38;
      appuStack_100[0] = &PTR_DAT_1108a5a88;
      ppuStack_170 = &PTR_DAT_1108a5a60;
      ppuStack_168 = ppuVar1;
      __ZNSt3__16localeC1Ev(auStack_160);
      uStack_108 = 0x18;
      ppuStack_168 = &PTR_DAT_11088d7b0;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_11a = 0;
      uStack_118 = 0;
      sStack_112 = 0x1600;
      puStack_158 = &uStack_128;
      puStack_150 = &uStack_128;
      puStack_148 = &uStack_128;
      puStack_140 = &uStack_128;
      puStack_138 = &uStack_128;
      psStack_130 = &sStack_112;
      puStack_110 = &uStack_128;
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEE7copyfmtERKS3_
                ((undefined *)((long)&ppuStack_180 + (long)ppuStack_180[-3]),
                 (long)param_1 + *(long *)(*param_1 + -0x18));
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd
                (*(undefined8 *)(*param_2 + lVar9 * 8),&ppuStack_170);
      if ((uStack_108 >> 4 & 1) == 0) {
        puVar10 = puStack_148;
        ppuVar13 = &puStack_158;
        if ((uStack_108 >> 3 & 1) != 0) goto LAB_10992a3d4;
        uVar16 = 0;
        uStack_188 = uStack_188 & 0xffffffffffffff;
        pppppppuVar7 = &ppppppuStack_198;
      }
      else {
        puVar10 = puStack_110;
        ppuVar13 = &puStack_140;
        if (puStack_110 < puStack_138) {
          puStack_110 = puStack_138;
          puVar10 = puStack_138;
        }
LAB_10992a3d4:
        puVar17 = *ppuVar13;
        uVar16 = (long)puVar10 - (long)puVar17;
        if (0x7ffffffffffffff7 < uVar16) {
          func_0x000104c4f6b8();
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10992a7e8);
          (*pcVar6)();
        }
        if (uVar16 < 0x17) {
          uStack_188 = CONCAT17((char)uVar16,(undefined7)uStack_188);
          pppppppuVar7 = &ppppppuStack_198;
          if (uVar16 == 0) goto LAB_10992a440;
        }
        else {
          pppppppuVar2 = (undefined8 *******)0x19;
          if ((uVar16 | 7) != 0x17) {
            pppppppuVar2 = (undefined8 *******)((uVar16 | 7) + 1);
          }
          pppppppuVar7 = pppppppuVar2;
          __Znwm();
          uStack_188 = (ulong)pppppppuVar2 | 0x8000000000000000;
          ppppppuStack_198 = pppppppuVar7;
          uStack_190 = uVar16;
        }
        _memmove(pppppppuVar7,puVar17,uVar16);
      }
LAB_10992a440:
      *(undefined1 *)((long)pppppppuVar7 + uVar16) = 0;
      uVar16 = (ulong)uStack_188._7_1_;
      if ((long)uVar16 < 0) {
        if ((long)uVar18 <= (long)uStack_190) {
          uVar18 = uStack_190;
        }
        __ZdlPv(ppppppuStack_198);
      }
      else if ((long)uVar18 <= (long)uVar16) {
        uVar18 = uVar16;
      }
      ppuStack_180 = &PTR_SUB_1108a5a38;
      ppuStack_170 = &PTR_DAT_1108a5a60;
      appuStack_100[0] = &PTR_DAT_1108a5a88;
      ppuStack_168 = &PTR_DAT_11088d7b0;
      if (sStack_112 < 0) {
        __ZdlPv(uStack_128);
      }
      ppuStack_168 = (undefined **)
                     (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
      __ZNSt3__16localeD1Ev(auStack_160);
      __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_180,&PTR_PTR_1108a5aa0);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_100);
      lVar9 = lVar9 + 1;
    } while (lVar9 < param_2[1]);
  }
  lVar9 = (long)param_1 + *(long *)(*param_1 + -0x18);
  uVar14 = *(undefined8 *)(lVar9 + 0x18);
  iVar15 = *(int *)(lVar9 + 0x90);
  if (iVar15 == -1) {
    __ZNKSt3__18ios_base6getlocEv(&ppuStack_180,lVar9);
    pppuVar8 = &ppuStack_180;
    __ZNKSt3__16locale9use_facetERNS0_2idE(pppuVar8,PTR___ZNSt3__15ctypeIcE2idE_110346770);
    (*(code *)(*pppuVar8)[7])();
    __ZNSt3__16localeD1Ev(&ppuStack_180);
    iVar15 = (int)pppuVar8;
    *(int *)(lVar9 + 0x90) = iVar15;
  }
  uVar16 = param_3[1];
  puVar10 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar16 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar10 = param_3;
  }
  FUN_1092b4db8(param_1,puVar10,uVar16);
  uVar16 = param_3[7];
  puVar10 = (undefined8 *)param_3[6];
  if (-1 < (char)*(byte *)((long)param_3 + 0x47)) {
    uVar16 = (ulong)*(byte *)((long)param_3 + 0x47);
    puVar10 = param_3 + 6;
  }
  FUN_1092b4db8(param_1,puVar10,uVar16);
  if (uVar18 != 0) {
    lVar12 = *param_1;
    lVar9 = (long)param_1 + *(long *)(lVar12 + -0x18);
    cVar3 = *(char *)(param_3 + 0x15);
    if (*(int *)(lVar9 + 0x90) == -1) {
      __ZNKSt3__18ios_base6getlocEv(&ppuStack_180,lVar9);
      pppuVar8 = &ppuStack_180;
      __ZNKSt3__16locale9use_facetERNS0_2idE(pppuVar8,PTR___ZNSt3__15ctypeIcE2idE_110346770);
      (*(code *)(*pppuVar8)[7])();
      __ZNSt3__16localeD1Ev(&ppuStack_180);
      *(int *)(lVar9 + 0x90) = (int)pppuVar8;
      lVar12 = *param_1;
    }
    *(int *)(lVar9 + 0x90) = (int)cVar3;
    *(ulong *)((long)param_1 + *(long *)(lVar12 + -0x18) + 0x18) = uVar18;
  }
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(*(undefined8 *)*param_2,param_1);
  puVar5 = PTR___ZNSt3__15ctypeIcE2idE_110346770;
  if (1 < param_2[1]) {
    lVar9 = 1;
    do {
      uVar16 = param_3[0x13];
      puVar10 = (undefined8 *)param_3[0x12];
      if (-1 < (char)*(byte *)((long)param_3 + 0xa7)) {
        uVar16 = (ulong)*(byte *)((long)param_3 + 0xa7);
        puVar10 = param_3 + 0x12;
      }
      FUN_1092b4db8(param_1,puVar10,uVar16);
      if (uVar18 != 0) {
        lVar11 = *param_1;
        lVar12 = (long)param_1 + *(long *)(lVar11 + -0x18);
        cVar3 = *(char *)(param_3 + 0x15);
        if (*(int *)(lVar12 + 0x90) == -1) {
          __ZNKSt3__18ios_base6getlocEv(&ppuStack_180,lVar12);
          pppuVar8 = &ppuStack_180;
          __ZNKSt3__16locale9use_facetERNS0_2idE(pppuVar8,puVar5);
          (*(code *)(*pppuVar8)[7])();
          __ZNSt3__16localeD1Ev(&ppuStack_180);
          *(int *)(lVar12 + 0x90) = (int)pppuVar8;
          lVar11 = *param_1;
        }
        *(int *)(lVar12 + 0x90) = (int)cVar3;
        *(ulong *)((long)param_1 + *(long *)(lVar11 + -0x18) + 0x18) = uVar18;
      }
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd
                (*(undefined8 *)(*param_2 + lVar9 * 8),param_1);
      lVar9 = lVar9 + 1;
    } while (lVar9 < param_2[1]);
  }
  uVar16 = param_3[10];
  puVar10 = (undefined8 *)param_3[9];
  if (-1 < (char)*(byte *)((long)param_3 + 0x5f)) {
    uVar16 = (ulong)*(byte *)((long)param_3 + 0x5f);
    puVar10 = param_3 + 9;
  }
  FUN_1092b4db8(param_1,puVar10,uVar16);
  uVar16 = param_3[4];
  puVar10 = (undefined8 *)param_3[3];
  if (-1 < (char)*(byte *)((long)param_3 + 0x2f)) {
    uVar16 = (ulong)*(byte *)((long)param_3 + 0x2f);
    puVar10 = param_3 + 3;
  }
  FUN_1092b4db8(param_1,puVar10,uVar16);
  if (!bVar4) {
    *(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10) = uStack_1e8;
  }
  if (uVar18 != 0) {
    lVar12 = *param_1;
    lVar9 = (long)param_1 + *(long *)(lVar12 + -0x18);
    if (*(int *)(lVar9 + 0x90) == -1) {
      __ZNKSt3__18ios_base6getlocEv(&ppuStack_180,lVar9);
      pppuVar8 = &ppuStack_180;
      __ZNKSt3__16locale9use_facetERNS0_2idE(pppuVar8,PTR___ZNSt3__15ctypeIcE2idE_110346770);
      (*(code *)(*pppuVar8)[7])();
      __ZNSt3__16localeD1Ev(&ppuStack_180);
      *(int *)(lVar9 + 0x90) = (int)pppuVar8;
      lVar12 = *param_1;
    }
    *(int *)(lVar9 + 0x90) = (int)(char)iVar15;
    *(undefined8 *)((long)param_1 + *(long *)(lVar12 + -0x18) + 0x18) = uVar14;
  }
  return param_1;
}



/* Entry: 10992a830; end: 10992a8bf;  */

undefined8 * FUN_10992a830(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0xa7) < '\0') {
    __ZdlPv(param_1[0x12]);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10992a8c0; end: 10992b057;  */

long * FUN_10992a8c0(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined **ppuVar1;
  undefined8 *******pppppppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *******pppppppuVar6;
  undefined ***pppuVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 **ppuVar13;
  undefined8 uVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 uStack_1f0;
  long lStack_1a0;
  undefined8 ******ppppppuStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined **ppuStack_180;
  undefined8 uStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined1 auStack_160 [8];
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  short *psStack_130;
  undefined8 uStack_128;
  undefined6 uStack_120;
  undefined2 uStack_11a;
  undefined6 uStack_118;
  short sStack_112;
  undefined8 *puStack_110;
  uint uStack_108;
  undefined **appuStack_100 [6];
  undefined8 uStack_d0;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  lVar9 = param_2[1];
  lVar19 = param_2[2];
  if (lVar19 * lVar9 == 0) {
    uVar17 = param_3[1];
    puVar8 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar17 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar8 = param_3;
    }
    FUN_1092b4db8(param_1,puVar8,uVar17);
    FUN_1092b4db8();
    return param_1;
  }
  iVar15 = *(int *)((long)param_3 + 0xac);
  if (iVar15 == -2) {
    lVar12 = 0xf;
  }
  else if ((iVar15 == -1) || (lVar12 = (long)iVar15, iVar15 == 0)) {
    uStack_1f0 = 0;
    bVar4 = true;
    goto LAB_10992a98c;
  }
  bVar4 = false;
  uStack_1f0 = *(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10);
  *(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10) = lVar12;
  lVar19 = param_2[2];
LAB_10992a98c:
  uVar17 = 0;
  if (((*(byte *)(param_3 + 0x16) & 1) == 0) && (0 < lVar19)) {
    lStack_1a0 = 0;
    uVar17 = 0;
    ppuVar1 = (undefined **)
              (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    do {
      if (0 < lVar9) {
        lVar19 = 0;
        do {
          uStack_d0 = 0;
          uStack_178 = 0;
          ppuStack_170 = &PTR_DAT_1108a5a60;
          appuStack_100[0] =
               &PTR___ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108a5ba0;
          ppuStack_180 = &PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108a5b78;
          __ZNSt3__18ios_base4initEPv(appuStack_100,&ppuStack_168);
          uStack_78 = 0;
          uStack_70 = 0xffffffff;
          ppuStack_180 = &PTR_SUB_1108a5a38;
          appuStack_100[0] = &PTR_DAT_1108a5a88;
          ppuStack_170 = &PTR_DAT_1108a5a60;
          ppuStack_168 = ppuVar1;
          __ZNSt3__16localeC1Ev(auStack_160);
          uStack_108 = 0x18;
          ppuStack_168 = &PTR_DAT_11088d7b0;
          uStack_128 = 0;
          uStack_120 = 0;
          uStack_11a = 0;
          uStack_118 = 0;
          sStack_112 = 0x1600;
          puStack_158 = &uStack_128;
          puStack_150 = &uStack_128;
          puStack_148 = &uStack_128;
          puStack_140 = &uStack_128;
          puStack_138 = &uStack_128;
          psStack_130 = &sStack_112;
          puStack_110 = &uStack_128;
          __ZNSt3__19basic_iosIcNS_11char_traitsIcEEE7copyfmtERKS3_
                    ((undefined *)((long)&ppuStack_180 + (long)ppuStack_180[-3]),
                     (long)param_1 + *(long *)(*param_1 + -0x18));
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd
                    (*(undefined8 *)(*param_2 + param_2[2] * lVar19 * 8 + lStack_1a0 * 8),
                     &ppuStack_170);
          if ((uStack_108 >> 4 & 1) == 0) {
            puVar8 = puStack_148;
            ppuVar13 = &puStack_158;
            if ((uStack_108 >> 3 & 1) != 0) goto LAB_10992ab2c;
            uVar16 = 0;
            uStack_188 = uStack_188 & 0xffffffffffffff;
            pppppppuVar6 = &ppppppuStack_198;
          }
          else {
            puVar8 = puStack_110;
            ppuVar13 = &puStack_140;
            if (puStack_110 < puStack_138) {
              puStack_110 = puStack_138;
              puVar8 = puStack_138;
            }
LAB_10992ab2c:
            puVar18 = *ppuVar13;
            uVar16 = (long)puVar8 - (long)puVar18;
            if (0x7ffffffffffffff7 < uVar16) {
              func_0x000104c4f6b8();
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10992b010);
              (*pcVar5)();
            }
            if (uVar16 < 0x17) {
              uStack_188 = CONCAT17((char)uVar16,(undefined7)uStack_188);
              pppppppuVar6 = &ppppppuStack_198;
              if (uVar16 == 0) goto LAB_10992ab9c;
            }
            else {
              pppppppuVar2 = (undefined8 *******)0x19;
              if ((uVar16 | 7) != 0x17) {
                pppppppuVar2 = (undefined8 *******)((uVar16 | 7) + 1);
              }
              pppppppuVar6 = pppppppuVar2;
              __Znwm();
              uStack_188 = (ulong)pppppppuVar2 | 0x8000000000000000;
              ppppppuStack_198 = pppppppuVar6;
              uStack_190 = uVar16;
            }
            _memmove(pppppppuVar6,puVar18,uVar16);
          }
LAB_10992ab9c:
          *(undefined1 *)((long)pppppppuVar6 + uVar16) = 0;
          uVar16 = (ulong)uStack_188._7_1_;
          if ((long)uVar16 < 0) {
            if ((long)uVar17 <= (long)uStack_190) {
              uVar17 = uStack_190;
            }
            __ZdlPv(ppppppuStack_198);
          }
          else if ((long)uVar17 <= (long)uVar16) {
            uVar17 = uVar16;
          }
          ppuStack_180 = &PTR_SUB_1108a5a38;
          ppuStack_170 = &PTR_DAT_1108a5a60;
          appuStack_100[0] = &PTR_DAT_1108a5a88;
          ppuStack_168 = &PTR_DAT_11088d7b0;
          if (sStack_112 < 0) {
            __ZdlPv(uStack_128);
          }
          ppuStack_168 = (undefined **)
                         (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10
                         );
          __ZNSt3__16localeD1Ev(auStack_160);
          __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_180,&PTR_PTR_1108a5aa0);
          __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_100);
          lVar19 = lVar19 + 1;
          lVar9 = param_2[1];
        } while (lVar19 < lVar9);
        lVar19 = param_2[2];
      }
      lStack_1a0 = lStack_1a0 + 1;
    } while (lStack_1a0 < lVar19);
  }
  lVar9 = (long)param_1 + *(long *)(*param_1 + -0x18);
  uVar14 = *(undefined8 *)(lVar9 + 0x18);
  iVar15 = *(int *)(lVar9 + 0x90);
  if (iVar15 == -1) {
    __ZNKSt3__18ios_base6getlocEv(&ppuStack_180,lVar9);
    pppuVar7 = &ppuStack_180;
    __ZNKSt3__16locale9use_facetERNS0_2idE(pppuVar7,PTR___ZNSt3__15ctypeIcE2idE_110346770);
    (*(code *)(*pppuVar7)[7])();
    iVar15 = (int)pppuVar7;
    __ZNSt3__16localeD1Ev(&ppuStack_180);
    *(int *)(lVar9 + 0x90) = iVar15;
  }
  uVar16 = param_3[1];
  puVar8 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar16 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar8 = param_3;
  }
  FUN_1092b4db8(param_1,puVar8,uVar16);
  if (0 < param_2[1]) {
    lVar19 = 0;
    lVar9 = 0;
    do {
      if (lVar9 != 0) {
        uVar16 = param_3[0x10];
        puVar8 = (undefined8 *)param_3[0xf];
        if (-1 < (char)*(byte *)((long)param_3 + 0x8f)) {
          uVar16 = (ulong)*(byte *)((long)param_3 + 0x8f);
          puVar8 = param_3 + 0xf;
        }
        FUN_1092b4db8(param_1,puVar8,uVar16);
      }
      uVar16 = param_3[7];
      puVar8 = (undefined8 *)param_3[6];
      if (-1 < (char)*(byte *)((long)param_3 + 0x47)) {
        uVar16 = (ulong)*(byte *)((long)param_3 + 0x47);
        puVar8 = param_3 + 6;
      }
      FUN_1092b4db8(param_1,puVar8,uVar16);
      if (uVar17 != 0) {
        lVar10 = *param_1;
        lVar12 = (long)param_1 + *(long *)(lVar10 + -0x18);
        cVar3 = *(char *)(param_3 + 0x15);
        if (*(int *)(lVar12 + 0x90) == -1) {
          __ZNKSt3__18ios_base6getlocEv(&ppuStack_180,lVar12);
          pppuVar7 = &ppuStack_180;
          __ZNKSt3__16locale9use_facetERNS0_2idE(pppuVar7,PTR___ZNSt3__15ctypeIcE2idE_110346770);
          (*(code *)(*pppuVar7)[7])();
          __ZNSt3__16localeD1Ev(&ppuStack_180);
          *(int *)(lVar12 + 0x90) = (int)pppuVar7;
          lVar10 = *param_1;
        }
        *(int *)(lVar12 + 0x90) = (int)cVar3;
        *(ulong *)((long)param_1 + *(long *)(lVar10 + -0x18) + 0x18) = uVar17;
      }
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd
                (*(undefined8 *)(*param_2 + param_2[2] * lVar9 * 8),param_1);
      if (1 < param_2[2]) {
        lVar12 = 1;
        do {
          uVar16 = param_3[0x13];
          puVar8 = (undefined8 *)param_3[0x12];
          if (-1 < (char)*(byte *)((long)param_3 + 0xa7)) {
            uVar16 = (ulong)*(byte *)((long)param_3 + 0xa7);
            puVar8 = param_3 + 0x12;
          }
          FUN_1092b4db8(param_1,puVar8,uVar16);
          if (uVar17 != 0) {
            lVar11 = *param_1;
            lVar10 = (long)param_1 + *(long *)(lVar11 + -0x18);
            cVar3 = *(char *)(param_3 + 0x15);
            if (*(int *)(lVar10 + 0x90) == -1) {
              __ZNKSt3__18ios_base6getlocEv(&ppuStack_180,lVar10);
              pppuVar7 = &ppuStack_180;
              __ZNKSt3__16locale9use_facetERNS0_2idE(pppuVar7,PTR___ZNSt3__15ctypeIcE2idE_110346770)
              ;
              (*(code *)(*pppuVar7)[7])();
              __ZNSt3__16localeD1Ev(&ppuStack_180);
              *(int *)(lVar10 + 0x90) = (int)pppuVar7;
              lVar11 = *param_1;
            }
            *(int *)(lVar10 + 0x90) = (int)cVar3;
            *(ulong *)((long)param_1 + *(long *)(lVar11 + -0x18) + 0x18) = uVar17;
          }
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd
                    (*(undefined8 *)(*param_2 + lVar19 * param_2[2] + lVar12 * 8),param_1);
          lVar12 = lVar12 + 1;
        } while (lVar12 < param_2[2]);
      }
      uVar16 = param_3[10];
      puVar8 = (undefined8 *)param_3[9];
      if (-1 < (char)*(byte *)((long)param_3 + 0x5f)) {
        uVar16 = (ulong)*(byte *)((long)param_3 + 0x5f);
        puVar8 = param_3 + 9;
      }
      FUN_1092b4db8(param_1,puVar8,uVar16);
      lVar12 = param_2[1];
      if (lVar9 < lVar12 + -1) {
        uVar16 = param_3[0xd];
        puVar8 = (undefined8 *)param_3[0xc];
        if (-1 < (char)*(byte *)((long)param_3 + 0x77)) {
          uVar16 = (ulong)*(byte *)((long)param_3 + 0x77);
          puVar8 = param_3 + 0xc;
        }
        FUN_1092b4db8(param_1,puVar8,uVar16);
        lVar12 = param_2[1];
      }
      lVar9 = lVar9 + 1;
      lVar19 = lVar19 + 8;
    } while (lVar9 < lVar12);
  }
  uVar16 = param_3[4];
  puVar8 = (undefined8 *)param_3[3];
  if (-1 < (char)*(byte *)((long)param_3 + 0x2f)) {
    uVar16 = (ulong)*(byte *)((long)param_3 + 0x2f);
    puVar8 = param_3 + 3;
  }
  FUN_1092b4db8(param_1,puVar8,uVar16);
  if (!bVar4) {
    *(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10) = uStack_1f0;
  }
  if (uVar17 != 0) {
    lVar19 = *param_1;
    lVar9 = (long)param_1 + *(long *)(lVar19 + -0x18);
    if (*(int *)(lVar9 + 0x90) == -1) {
      __ZNKSt3__18ios_base6getlocEv(&ppuStack_180,lVar9);
      pppuVar7 = &ppuStack_180;
      __ZNKSt3__16locale9use_facetERNS0_2idE(pppuVar7,PTR___ZNSt3__15ctypeIcE2idE_110346770);
      (*(code *)(*pppuVar7)[7])();
      __ZNSt3__16localeD1Ev(&ppuStack_180);
      *(int *)(lVar9 + 0x90) = (int)pppuVar7;
      lVar19 = *param_1;
    }
    *(int *)(lVar9 + 0x90) = (int)(char)iVar15;
    *(undefined8 *)((long)param_1 + *(long *)(lVar19 + -0x18) + 0x18) = uVar14;
  }
  return param_1;
}



/* Entry: 10992b058; end: 10992b0d3;  */

undefined8 * FUN_10992b058(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    puVar2 = (undefined8 *)*param_1;
    plVar3 = (long *)*puVar2;
    if (plVar3 != (long *)0x0) {
      plVar4 = (long *)puVar2[1];
      plVar1 = plVar3;
      if (plVar4 != plVar3) {
        do {
          plVar4 = plVar4 + -1;
          plVar1 = (long *)*plVar4;
          *plVar4 = 0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
        } while (plVar4 != plVar3);
        plVar1 = *(long **)*param_1;
      }
      puVar2[1] = plVar3;
      __ZdlPv(plVar1);
    }
  }
  return param_1;
}



/* Entry: 10992b0d4; end: 10992b0e7;  */

/* WARNING: Removing unreachable block (ram,0x00010992b360) */
/* WARNING: Removing unreachable block (ram,0x00010992b328) */
/* WARNING: Removing unreachable block (ram,0x00010992b32c) */
/* WARNING: Removing unreachable block (ram,0x00010992b334) */
/* WARNING: Removing unreachable block (ram,0x00010992b33c) */
/* WARNING: Removing unreachable block (ram,0x00010992b340) */
/* WARNING: Removing unreachable block (ram,0x00010992b2f0) */
/* WARNING: Removing unreachable block (ram,0x00010992b2f4) */
/* WARNING: Removing unreachable block (ram,0x00010992b2fc) */
/* WARNING: Removing unreachable block (ram,0x00010992b304) */
/* WARNING: Removing unreachable block (ram,0x00010992b308) */
/* WARNING: Removing unreachable block (ram,0x00010992b2d0) */
/* WARNING: Removing unreachable block (ram,0x00010992b2c0) */
/* WARNING: Removing unreachable block (ram,0x00010992b2e0) */
/* WARNING: Removing unreachable block (ram,0x00010992b37c) */

undefined * FUN_10992b0d4(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  *(undefined8 *)(puVar1 + 0x48) = 0;
  *(undefined8 *)(puVar1 + 0x50) = 0;
  *(undefined8 *)(puVar1 + 0x58) = 0;
  *(undefined8 *)(puVar1 + 0x68) = 0;
  *(undefined8 *)(puVar1 + 0x70) = 0;
  *(undefined8 *)(puVar1 + 0x78) = 0;
  *(undefined8 *)(puVar1 + 0xf8) = 0;
  *(undefined8 *)(puVar1 + 0xf0) = 0;
  *(undefined8 *)(puVar1 + 0x108) = 0;
  *(undefined8 *)(puVar1 + 0x100) = 0;
  *(undefined8 *)(puVar1 + 0x118) = 0;
  *(undefined8 *)(puVar1 + 0x110) = 0;
  *(undefined8 *)(puVar1 + 0x128) = 0;
  *(undefined8 *)(puVar1 + 0x120) = 0;
  *(undefined8 *)(puVar1 + 0x138) = 0;
  *(undefined8 *)(puVar1 + 0x130) = 0;
  *(undefined8 *)(puVar1 + 0x140) = 0;
  FUN_10992b400();
  return puVar1;
}



/* Entry: 10992b0e8; end: 10992b3ff;  */

long FUN_10992b0e8(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
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
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  long lStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  uStack_88 = 0;
  uStack_b0 = 0;
  uStack_138 = 0;
  uStack_1a4 = 0;
  uStack_208 = 1;
  uStack_210 = 0x200000001;
  uStack_200 = 0x14;
  uStack_1f8 = 2;
  uStack_1e8 = 0x3f1a36e2eb1c432d;
  uStack_1f0 = 0x3e112e0be826d695;
  uStack_1d8 = 0x3fe3333333333333;
  uStack_1e0 = 0x3f50624dd2f1a9fc;
  uStack_1d0 = 0x500000014;
  uStack_1c0 = 0x4024000000000000;
  uStack_1c8 = 0x3feccccccccccccd;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 5;
  uStack_1a8 = 0x32;
  uStack_1a0 = 0x41cdcd6500000000;
  uStack_198 = 1;
  uStack_188 = 0x4341c37937e08000;
  uStack_190 = 0x40c3880000000000;
  uStack_178 = 0x3f50624dd2f1a9fc;
  uStack_180 = 0x3949f623d5a8a733;
  uStack_168 = 0x4693b8b5b5056e17;
  uStack_170 = 0x3eb0c6f7a0b5ed8d;
  uStack_160 = 5;
  uStack_150 = 0x3ddb7cdfd9d7bdbb;
  uStack_158 = 0x3eb0c6f7a0b5ed8d;
  uStack_148 = 0x3e45798ee2308c3a;
  uStack_140 = 0x100000002;
  uStack_128 = 0;
  lStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_110 = 0x3f800000;
  uStack_108 = 0x200000000;
  uStack_e0 = 0;
  plStack_d8 = (long *)0x0;
  uStack_100 = 0;
  plStack_f8 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d0 = 0x3f50624dd2f1a9fc;
  uStack_c8 = 0x1f400000000;
  uStack_c0 = 0x3fb999999999999a;
  uStack_b8 = 0x100000001;
  lStack_a0 = 0;
  uStack_98 = 0;
  lStack_a8 = 0;
  lStack_80 = 0x400000000000000;
  uStack_90 = 0x706d742f;
  uStack_78 = 1;
  uStack_68 = 0x3eb0c6f7a0b5ed8d;
  uStack_70 = 0x3e45798ee2308c3a;
  uStack_60 = 0;
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  FUN_10992b400(param_1,&uStack_210);
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  if (lStack_80 < 0) {
    __ZdlPv(uStack_90);
  }
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  plVar7 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar1 = plStack_d8 + 1;
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
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar1 = plStack_f8;
  lVar5 = lStack_130;
  plVar7 = plStack_120;
  if (plStack_f8 != (long *)0x0) {
    plVar2 = plStack_f8 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      lVar5 = lStack_130;
      plVar7 = plStack_120;
    }
  }
  while (plVar7 != (long *)0x0) {
    plVar7 = (long *)*plVar7;
    lStack_130 = lVar5;
    __ZdlPv();
    lVar5 = lStack_130;
  }
  lStack_130 = 0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10992b400; end: 10992b77f;  */

undefined8 * FUN_10992b400(undefined4 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 uVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar6 = *(undefined4 *)(param_2 + 0x78);
  uVar4 = *(undefined4 *)(param_2 + 100);
  *param_1 = *(undefined4 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 0x70);
  param_1[4] = uVar6;
  param_1[5] = 5;
  uVar19 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 6) = uVar19;
  uVar19 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc) = uVar19;
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0x150);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x158);
  *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)(param_2 + 0x60);
  param_1[0x11] = uVar4;
  puVar15 = (undefined8 *)(param_2 + 0x180);
  puVar10 = (undefined8 *)(param_1 + 0x1a);
  if (puVar10 != puVar15) {
    bVar7 = *(byte *)(param_2 + 0x197);
    if (*(char *)((long)param_1 + 0x7f) < '\0') {
      uVar11 = *(ulong *)(param_2 + 0x188);
      puVar16 = *(undefined8 **)(param_2 + 0x180);
      if (-1 < (char)bVar7) {
        uVar11 = (ulong)bVar7;
        puVar16 = puVar15;
      }
      func_0x000107c27ba0(puVar10,puVar16,uVar11);
    }
    else if ((char)bVar7 < '\0') {
      func_0x000107c27ba4(puVar10,*(undefined8 *)(param_2 + 0x180),*(undefined8 *)(param_2 + 0x188))
      ;
    }
    else {
      uVar18 = *(undefined8 *)(param_2 + 0x188);
      uVar19 = *puVar15;
      *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 400);
      *(undefined8 *)(param_1 + 0x1c) = uVar18;
      *puVar10 = uVar19;
    }
  }
  if ((undefined8 *)(param_1 + 0x12) != (undefined8 *)(param_2 + 0x168)) {
    lVar5 = *(long *)(param_2 + 0x168);
    lVar12 = *(long *)(param_2 + 0x170);
    uVar14 = lVar12 - lVar5;
    uVar11 = *(ulong *)(param_1 + 0x16);
    puVar15 = *(undefined8 **)(param_1 + 0x12);
    if (uVar11 - (long)puVar15 < uVar14) {
      uVar17 = (long)uVar14 >> 2;
      if (puVar15 != (undefined8 *)0x0) {
        *(undefined8 **)(param_1 + 0x14) = puVar15;
        __ZdlPv();
        uVar11 = 0;
        *(undefined8 *)(param_1 + 0x12) = 0;
        *(undefined8 *)(param_1 + 0x14) = 0;
        *(undefined8 *)(param_1 + 0x16) = 0;
        puVar10 = puVar15;
      }
      if (uVar17 >> 0x3e == 0) {
        uVar3 = (long)uVar11 >> 1;
        if ((ulong)((long)uVar11 >> 1) <= uVar17) {
          uVar3 = uVar17;
        }
        if (0x7ffffffffffffffb < uVar11) {
          uVar3 = 0x3fffffffffffffff;
        }
        if (uVar3 >> 0x3e == 0) {
          puVar15 = (undefined8 *)(uVar3 << 2);
          __Znwm();
          *(undefined8 **)(param_1 + 0x12) = puVar15;
          *(undefined8 **)(param_1 + 0x14) = puVar15;
          *(undefined4 **)(param_1 + 0x16) = (undefined4 *)((long)puVar15 + uVar3 * 4);
          puVar10 = puVar15;
          if (lVar12 != lVar5) {
            _memcpy(puVar15,lVar5,uVar14);
          }
          goto LAB_10992b5d4;
        }
      }
      FUN_10923f788();
      goto LAB_10992b77c;
    }
    puVar16 = *(undefined8 **)(param_1 + 0x14);
    if ((ulong)((long)puVar16 - (long)puVar15) < uVar14) {
      lVar2 = lVar5 + ((long)puVar16 - (long)puVar15);
      if (puVar16 != puVar15) {
        _memmove(puVar15,lVar5);
        puVar16 = *(undefined8 **)(param_1 + 0x14);
        puVar10 = puVar15;
      }
      lVar12 = lVar12 - lVar2;
      if (lVar12 != 0) {
        puVar10 = puVar16;
        _memmove(puVar16,lVar2,lVar12);
      }
      lVar12 = (long)puVar16 + lVar12;
    }
    else {
      if (lVar12 != lVar5) {
        puVar10 = puVar15;
        _memmove(puVar15,lVar5,uVar14);
      }
LAB_10992b5d4:
      lVar12 = (long)puVar15 + uVar14;
    }
    *(long *)(param_1 + 0x14) = lVar12;
  }
  param_1[0x18] = *(undefined4 *)(param_2 + 0x198);
  param_1[0x20] = *(undefined4 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x90);
  uVar19 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x24) = uVar19;
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x14);
  param_1[0x29] = *(undefined4 *)(param_2 + 0x18);
  uVar19 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2a) = uVar19;
  uVar19 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x2e) = uVar19;
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x40);
  uVar19 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x34) = uVar19;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x140);
  *(bool *)(param_1 + 0x3a) = *(int *)(param_2 + 0x15c) == 0;
  *(undefined1 *)((long)param_1 + 0xe9) = 0;
  if ((undefined8 *)(param_1 + 0x3c) == (undefined8 *)(param_2 + 0x1b8)) {
    return puVar10;
  }
  lVar5 = *(long *)(param_2 + 0x1b8);
  lVar12 = *(long *)(param_2 + 0x1c0);
  uVar14 = lVar12 - lVar5;
  uVar11 = *(ulong *)(param_1 + 0x40);
  puVar15 = *(undefined8 **)(param_1 + 0x3c);
  if (uVar11 - (long)puVar15 < uVar14) {
    uVar17 = (long)uVar14 >> 3;
    if (puVar15 != (undefined8 *)0x0) {
      *(undefined8 **)(param_1 + 0x3e) = puVar15;
      __ZdlPv();
      uVar11 = 0;
      *(undefined8 *)(param_1 + 0x3c) = 0;
      *(undefined8 *)(param_1 + 0x3e) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      puVar10 = puVar15;
    }
    if (uVar17 >> 0x3d != 0) {
LAB_10992b77c:
      FUN_10992b9c8();
      if (puVar10[0x37] != 0) {
        puVar10[0x38] = puVar10[0x37];
        __ZdlPv();
      }
      if (*(char *)((long)puVar10 + 0x197) < '\0') {
        __ZdlPv(puVar10[0x30]);
      }
      if (puVar10[0x2d] != 0) {
        puVar10[0x2e] = puVar10[0x2d];
        __ZdlPv();
      }
      plVar13 = (long *)puVar10[0x27];
      if (plVar13 != (long *)0x0) {
        plVar1 = plVar13 + 1;
        do {
          lVar12 = *plVar1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar12 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      plVar13 = (long *)puVar10[0x23];
      if (plVar13 != (long *)0x0) {
        plVar1 = plVar13 + 1;
        do {
          lVar12 = *plVar1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar12 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      plVar13 = (long *)puVar10[0x1e];
      while (plVar13 != (long *)0x0) {
        plVar13 = (long *)*plVar13;
        __ZdlPv();
      }
      lVar12 = puVar10[0x1c];
      puVar10[0x1c] = 0;
      if (lVar12 != 0) {
        __ZdlPv();
      }
      return puVar10;
    }
    uVar3 = (long)uVar11 >> 2;
    if ((ulong)((long)uVar11 >> 2) <= uVar17) {
      uVar3 = uVar17;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar3 = 0x1fffffffffffffff;
    }
    if (uVar3 >> 0x3d != 0) goto LAB_10992b77c;
    puVar15 = (undefined8 *)(uVar3 << 3);
    __Znwm();
    *(undefined8 **)(param_1 + 0x3c) = puVar15;
    *(undefined8 **)(param_1 + 0x3e) = puVar15;
    *(undefined8 **)(param_1 + 0x40) = puVar15 + uVar3;
    puVar10 = puVar15;
    if (lVar12 != lVar5) {
      _memcpy(puVar15,lVar5,uVar14);
    }
  }
  else {
    puVar16 = *(undefined8 **)(param_1 + 0x3e);
    if ((ulong)((long)puVar16 - (long)puVar15) < uVar14) {
      lVar2 = lVar5 + ((long)puVar16 - (long)puVar15);
      if (puVar16 != puVar15) {
        _memmove(puVar15,lVar5);
        puVar16 = *(undefined8 **)(param_1 + 0x3e);
        puVar10 = puVar15;
      }
      lVar12 = lVar12 - lVar2;
      if (lVar12 != 0) {
        puVar10 = puVar16;
        _memmove(puVar16,lVar2,lVar12);
      }
      lVar12 = (long)puVar16 + lVar12;
      goto LAB_10992b75c;
    }
    if (lVar12 != lVar5) {
      puVar10 = puVar15;
      _memmove(puVar15,lVar5,uVar14);
    }
  }
  lVar12 = (long)puVar15 + uVar14;
LAB_10992b75c:
  *(long *)(param_1 + 0x3e) = lVar12;
  return puVar10;
}



/* Entry: 10992b780; end: 10992b9c7;  */

long FUN_10992b780(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x1b8) != 0) {
    *(long *)(param_1 + 0x1c0) = *(long *)(param_1 + 0x1b8);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x197) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x180));
  }
  if (*(long *)(param_1 + 0x168) != 0) {
    *(long *)(param_1 + 0x170) = *(long *)(param_1 + 0x168);
    __ZdlPv();
  }
  plVar5 = *(long **)(param_1 + 0x138);
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
  plVar5 = *(long **)(param_1 + 0x118);
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
  plVar5 = *(long **)(param_1 + 0xf0);
  while (plVar5 != (long *)0x0) {
    plVar5 = (long *)*plVar5;
    __ZdlPv();
  }
  lVar4 = *(long *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (lVar4 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10992b9c8; end: 10992b9db;  */

undefined * FUN_10992b9c8(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  _free(*(undefined8 *)(puVar4 + 0x2b0));
  _free(*(undefined8 *)(puVar4 + 0x2a0));
  _free(*(undefined8 *)(puVar4 + 0x290));
  _free(*(undefined8 *)(puVar4 + 0x280));
  _free(*(undefined8 *)(puVar4 + 0x270));
  _free(*(undefined8 *)(puVar4 + 0x260));
  _free(*(undefined8 *)(puVar4 + 0x250));
  _free(*(undefined8 *)(puVar4 + 0x240));
  _free(*(undefined8 *)(puVar4 + 0x230));
  _free(*(undefined8 *)(puVar4 + 0x220));
  _free(*(undefined8 *)(puVar4 + 0x210));
  lVar5 = *(long *)(puVar4 + 0x178);
  *(undefined8 *)(puVar4 + 0x178) = 0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  plVar6 = *(long **)(puVar4 + 0x148);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = *(long **)(puVar4 + 0x138);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = *(long **)(puVar4 + 0x128);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = *(long **)(puVar4 + 0x118);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (*(long *)(puVar4 + 0xf8) != 0) {
    *(long *)(puVar4 + 0x100) = *(long *)(puVar4 + 0xf8);
    __ZdlPv();
  }
  if ((char)puVar4[0x87] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar4 + 0x70));
  }
  if (*(long *)(puVar4 + 0x50) != 0) {
    *(long *)(puVar4 + 0x58) = *(long *)(puVar4 + 0x50);
    __ZdlPv();
  }
  return puVar4;
}



/* Entry: 10992b9dc; end: 10992bc83;  */

long FUN_10992b9dc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  _free(*(undefined8 *)(param_1 + 0x2b0));
  _free(*(undefined8 *)(param_1 + 0x2a0));
  _free(*(undefined8 *)(param_1 + 0x290));
  _free(*(undefined8 *)(param_1 + 0x280));
  _free(*(undefined8 *)(param_1 + 0x270));
  _free(*(undefined8 *)(param_1 + 0x260));
  _free(*(undefined8 *)(param_1 + 0x250));
  _free(*(undefined8 *)(param_1 + 0x240));
  _free(*(undefined8 *)(param_1 + 0x230));
  _free(*(undefined8 *)(param_1 + 0x220));
  _free(*(undefined8 *)(param_1 + 0x210));
  lVar4 = *(long *)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x178) = 0;
  if (lVar4 != 0) {
    __ZdlPv();
  }
  plVar5 = *(long **)(param_1 + 0x148);
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
  plVar5 = *(long **)(param_1 + 0x138);
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
  plVar5 = *(long **)(param_1 + 0x128);
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
  plVar5 = *(long **)(param_1 + 0x118);
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
  if (*(long *)(param_1 + 0xf8) != 0) {
    *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0xf8);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x87) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x70));
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10992bc84; end: 10992bc8b;  */

void FUN_10992bc84(void)

{
  return;
}



/* Entry: 10992bc8c; end: 10992bccb;  */

void FUN_10992bc8c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110b1d910;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 10992bccc; end: 10992bcf3;  */

void FUN_10992bccc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_110b1d910;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10992bcf4; end: 10992c6af;  */

/* WARNING: Removing unreachable block (ram,0x00010992c690) */
/* WARNING: Removing unreachable block (ram,0x00010992c3f0) */
/* WARNING: Removing unreachable block (ram,0x00010992c6e4) */

undefined *** FUN_10992bcf4(long param_1,int *param_2,int *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  undefined **ppuVar9;
  code *pcVar10;
  undefined ***pppuVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long *plVar16;
  long lVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined8 uVar23;
  undefined8 uStack_720;
  undefined8 *puStack_718;
  undefined8 uStack_710;
  long lStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  long lStack_6e8;
  long lStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  uint uStack_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  long lStack_608;
  long lStack_600;
  undefined8 uStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  long lStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long lStack_5b0;
  undefined2 uStack_5a8;
  long lStack_5a0;
  long lStack_598;
  undefined8 uStack_590;
  long lStack_588;
  long lStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined ***pppuStack_540;
  undefined ***pppuStack_538;
  undefined ***pppuStack_530;
  long lStack_528;
  long lStack_520;
  long lStack_518;
  undefined8 uStack_510;
  undefined **ppuStack_508;
  long alStack_500 [9];
  undefined4 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_390;
  undefined4 uStack_380;
  undefined3 uStack_37c;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 auStack_208 [2];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined1 auStack_1d0 [72];
  long lStack_188;
  long lStack_180;
  undefined8 uStack_168;
  char cStack_151;
  undefined1 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined **ppuStack_c8;
  long *plStack_c0;
  undefined **ppuStack_b8;
  long *plStack_b0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  iVar5 = *param_2;
  iVar6 = *param_3;
  lVar20 = *(long *)(param_1 + 8);
  ppuVar18 = *(undefined ***)(*(long *)(lVar20 + 8) + (long)iVar6 * 8);
  uVar3 = *(undefined4 *)(ppuVar18 + 5);
  uVar4 = *(undefined4 *)(ppuVar18 + 6);
  *(undefined1 *)((long)ppuVar18 + 0xc) = 0;
  *(undefined4 *)(ppuVar18 + 5) = 0;
  *(undefined4 *)(ppuVar18 + 6) = 0;
  uStack_510 = 0;
  lStack_528 = 0;
  pppuStack_530 = (undefined ***)0x0;
  lStack_518 = 0;
  lStack_520 = 0;
  pppuStack_538 = (undefined ***)0x0;
  pppuStack_540 = (undefined ***)0x0;
  pppuVar11 = (undefined ***)0x8;
  __Znwm();
  pppuStack_538 = pppuVar11 + 1;
  *pppuVar11 = ppuVar18;
  plVar16 = (long *)(*(long *)(lVar20 + 0x20) + (long)iVar6 * 0x18);
  pppuStack_540 = pppuVar11;
  pppuStack_530 = pppuStack_538;
  lVar17 = lStack_520;
  if ((&lStack_528 != plVar16) && (lVar17 = plVar16[1] - *plVar16, lVar17 != 0)) {
    if (lVar17 < 0) {
      func_0x000109929900();
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10992c600);
      (*pcVar10)();
    }
    lVar12 = lVar17;
    __Znwm();
    lStack_528 = lVar12;
    lStack_520 = lVar12;
    lStack_518 = lVar12 + lVar17;
    _memcpy();
    lVar17 = lVar12 + lVar17;
  }
  lStack_520 = lVar17;
  uStack_720 = 0x200000001;
  puVar13 = (undefined8 *)0x20;
  __Znwm();
  puVar13[1] = 0x7361772065766c6f;
  *puVar13 = 0x533a3a7365726563;
  *(undefined8 *)((long)puVar13 + 0x14) = 0x2e64656c6c616320;
  *(undefined8 *)((long)puVar13 + 0xc) = 0x746f6e2073617720;
  *(undefined1 *)((long)puVar13 + 0x1c) = 0;
  auVar22 = NEON_fmov(0xbff0000000000000,8);
  lStack_708 = 0x8000000000000020;
  uStack_710 = 0x1c;
  uVar23 = auVar22._8_8_;
  uVar21 = auVar22._0_8_;
  uStack_6f0 = 0xbff0000000000000;
  lStack_6e8 = 0;
  lStack_6e0 = 0;
  uStack_6d8 = 0;
  uStack_6d0 = 0xffffffffffffffff;
  uStack_6c8 = 0xffffffffffffffff;
  uStack_6a0 = 0xbff0000000000000;
  uStack_698 = CONCAT44(uStack_698._4_4_,0xffffffff);
  uStack_690 = 0xbff0000000000000;
  uStack_688 = CONCAT44(uStack_688._4_4_,0xffffffff);
  uStack_680 = 0xbff0000000000000;
  uStack_678 = CONCAT44(uStack_678._4_4_,0xffffffff);
  uStack_650 = 0xbff0000000000000;
  uStack_628 = 0xffffffffffffffff;
  uStack_630 = 0xffffffffffffffff;
  uStack_638 = 0xffffffffffffffff;
  uStack_640 = 0xffffffffffffffff;
  uStack_648 = 0xffffffffffffffff;
  uStack_620 = uStack_620 & 0xffffff00;
  uStack_614 = 2;
  uStack_610 = 2;
  uStack_61c = 0xffffffff;
  uStack_618 = 0xffffffff;
  lStack_600 = 0;
  lStack_608 = 0;
  lStack_5f0 = 0;
  uStack_5f8 = 0;
  uStack_5e0 = 0;
  lStack_5e8 = 0;
  uStack_5d0 = 0;
  uStack_5d8 = 0;
  uStack_5c0 = 0;
  lStack_5c8 = 0;
  lStack_5b0 = 0;
  uStack_5b8 = 0;
  uStack_5a8 = 0;
  lStack_598 = 0;
  lStack_5a0 = 0;
  lStack_588 = 0;
  uStack_590 = 0;
  uStack_578 = 0;
  lStack_580 = 0;
  uStack_568 = 0;
  uStack_570 = 0;
  uStack_560 = 0;
  uStack_550 = 0x200000001;
  uStack_558 = 0x200000004;
  uStack_548 = 0xffffffff00000000;
  uVar19 = *(undefined8 *)(**(long **)(param_1 + 0x10) + (long)iVar5 * 8);
  lVar17 = **(long **)(param_1 + 0x18);
  iVar5 = *(int *)((long)ppuVar18 + 0x2c);
  puVar14 = (undefined8 *)0x20;
  puStack_718 = puVar13;
  uStack_700 = uVar21;
  uStack_6f8 = uVar23;
  uStack_6c0 = uVar21;
  uStack_6b8 = uVar23;
  uStack_6b0 = uVar21;
  uStack_6a8 = uVar23;
  uStack_670 = uVar21;
  uStack_668 = uVar23;
  uStack_660 = uVar21;
  uStack_658 = uVar23;
  __Znwm();
  puVar14[1] = 0x7361772065766c6f;
  *puVar14 = 0x533a3a7365726563;
  *(undefined8 *)((long)puVar14 + 0x14) = 0x2e64656c6c616320;
  *(undefined8 *)((long)puVar14 + 0xc) = 0x746f6e2073617720;
  *(undefined1 *)((long)puVar14 + 0x1c) = 0;
  uStack_720 = 0x200000001;
  __ZdlPv(puVar13);
  lStack_708 = -0x7fffffffffffffe0;
  uStack_710 = 0x1c;
  uStack_6f0 = 0xbff0000000000000;
  puStack_718 = puVar14;
  uStack_700 = uVar21;
  uStack_6f8 = uVar23;
  if (lStack_6e8 != 0) {
    lStack_6e0 = lStack_6e8;
    __ZdlPv();
  }
  lStack_6e8 = 0;
  lStack_6e0 = 0;
  uStack_6d8 = 0;
  uStack_6d0 = 0xffffffffffffffff;
  uStack_6c8 = 0xffffffffffffffff;
  uStack_6a0 = 0xbff0000000000000;
  uStack_698 = 0xffffffff;
  uStack_690 = 0xbff0000000000000;
  uStack_688 = 0xffffffff;
  uStack_680 = 0xbff0000000000000;
  uStack_678 = 0xffffffff;
  uStack_650 = 0xbff0000000000000;
  uStack_640 = 0xffffffffffffffff;
  uStack_648 = 0xffffffffffffffff;
  uStack_630 = 0xffffffffffffffff;
  uStack_638 = 0xffffffffffffffff;
  uStack_628 = 0xffffffffffffffff;
  uStack_618 = 0xffffffff;
  uStack_614 = 2;
  uStack_620 = 0;
  uStack_61c = 0xffffffff;
  uStack_610 = 2;
  uStack_6c0 = uVar21;
  uStack_6b8 = uVar23;
  uStack_6b0 = uVar21;
  uStack_6a8 = uVar23;
  uStack_670 = uVar21;
  uStack_668 = uVar23;
  uStack_660 = uVar21;
  uStack_658 = uVar23;
  if (lStack_608 != 0) {
    lStack_600 = lStack_608;
    __ZdlPv();
  }
  lStack_608 = 0;
  lStack_600 = 0;
  uStack_5f8 = 0;
  if (lStack_5f0 != 0) {
    lStack_5e8 = lStack_5f0;
    __ZdlPv();
  }
  lStack_5f0 = 0;
  lStack_5e8 = 0;
  uStack_5e0 = 0;
  if (lStack_5c8 < 0) {
    __ZdlPv(uStack_5d8);
  }
  uStack_5d8 = 0;
  uStack_5d0 = 0;
  lStack_5c8 = 0;
  if (lStack_5b0 < 0) {
    __ZdlPv(uStack_5c0);
  }
  uStack_5c0 = 0;
  uStack_5b8 = 0;
  uStack_5a8 = 0;
  lStack_5b0 = 0;
  if (lStack_5a0 != 0) {
    lStack_598 = lStack_5a0;
    __ZdlPv();
  }
  lStack_5a0 = 0;
  lStack_598 = 0;
  uStack_590 = 0;
  if (lStack_588 != 0) {
    lStack_580 = lStack_588;
    __ZdlPv();
  }
  uStack_570 = 0;
  uStack_578 = 0;
  uStack_560 = 0;
  uStack_568 = 0;
  lStack_580 = 0;
  lStack_588 = 0;
  uStack_550 = 0x200000001;
  uStack_558 = 0x200000004;
  uStack_548 = 0xffffffff00000000;
  uStack_6f8 = 0;
  uStack_6f0 = 0;
  uStack_700 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  FUN_10992b0e8(auStack_1d0);
  FUN_10994c548(&ppuStack_508,lVar20 + 0x50,&pppuStack_540,&uStack_88);
  ppuStack_c8 = ppuStack_508;
  if (ppuStack_508 == (undefined **)0x0) {
    plVar16 = (long *)0x0;
  }
  else {
    plVar16 = (long *)0x20;
    __Znwm();
    *plVar16 = (long)&PTR_FUN_110b1d990;
    plVar16[1] = 0;
    plVar16[2] = 0;
    plVar16[3] = (long)ppuStack_508;
  }
  plVar2 = plStack_c0;
  ppuStack_508 = (undefined **)0x0;
  if (plStack_c0 != (long *)0x0) {
    plVar1 = plStack_c0 + 1;
    do {
      lVar20 = *plVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar20 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar20 == 0) {
      lVar20 = *plStack_c0;
      plStack_c0 = plVar16;
      (**(code **)(lVar20 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      plVar16 = plStack_c0;
    }
  }
  plStack_c0 = plVar16;
  if (ppuStack_508 != (undefined **)0x0) {
    (**(code **)(*ppuStack_508 + 8))();
  }
  if (ppuStack_c8 == (undefined **)0x0) {
    ppuStack_508 = (undefined **)0x0;
    uStack_4b0 = 0;
    alStack_500[2] = 0;
    alStack_500[1] = 0;
    alStack_500[4] = 0;
    alStack_500[3] = 0;
    alStack_500[6] = 0;
    alStack_500[5] = 0;
    alStack_500[8] = 0;
    alStack_500[7] = 0;
    uStack_4b8 = 0;
    FUN_1099a9f0c(&ppuStack_508,&UNK_10f58ae2f,0xe2,3,FUN_1099aa768,0);
    puVar15 = &UNK_10f58aee7;
    FUN_1092b4db8(alStack_500[0] + 0x7540,&UNK_10f58aee7,0x35);
  }
  else {
    (**(code **)(*ppuStack_c8 + 0x10))(&ppuStack_508);
    ppuStack_a8 = ppuStack_508;
    if (ppuStack_508 == (undefined **)0x0) {
      plVar16 = (long *)0x0;
    }
    else {
      plVar16 = (long *)0x20;
      __Znwm();
      *plVar16 = (long)&PTR_DAT_110b1d9e0;
      plVar16[1] = 0;
      plVar16[2] = 0;
      plVar16[3] = (long)ppuStack_a8;
    }
    plVar2 = plStack_a0;
    ppuStack_508 = (undefined **)0x0;
    if (plStack_a0 != (long *)0x0) {
      plVar1 = plStack_a0 + 1;
      do {
        lVar20 = *plVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar20 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar20 == 0) {
        lVar20 = *plStack_a0;
        plStack_a0 = plVar16;
        (**(code **)(lVar20 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        plVar16 = plStack_a0;
      }
    }
    plStack_a0 = plVar16;
    ppuVar9 = ppuStack_508;
    ppuStack_508 = (undefined **)0x0;
    if (ppuVar9 != (undefined **)0x0) {
      (**(code **)(*ppuVar9 + 8))();
    }
    if (ppuStack_a8 == (undefined **)0x0) {
      ppuStack_508 = (undefined **)0x0;
      uStack_4b0 = 0;
      alStack_500[2] = 0;
      alStack_500[1] = 0;
      alStack_500[4] = 0;
      alStack_500[3] = 0;
      alStack_500[6] = 0;
      alStack_500[5] = 0;
      alStack_500[8] = 0;
      alStack_500[7] = 0;
      uStack_4b8 = 0;
      FUN_1099a9f0c(&ppuStack_508,&UNK_10f58ae2f,0xe4,3,FUN_1099aa768,0);
      puVar15 = &UNK_10f58af1d;
      FUN_1092b4db8(alStack_500[0] + 0x7540,&UNK_10f58af1d,0x34);
    }
    else {
      auStack_208[0] = 0;
      uStack_1f0 = 0x4693b8b5b5056e17;
      uStack_1f8 = 0x40c3880000000000;
      uStack_1e0 = 0x4693b8b5b5056e17;
      uStack_1e8 = 0x3eb0c6f7a0b5ed8d;
      uStack_1d8 = 0;
      uStack_200 = uVar19;
      FUN_10998e9f8(&ppuStack_508,auStack_208);
      ppuStack_b8 = ppuStack_508;
      if (ppuStack_508 == (undefined **)0x0) {
        plVar16 = (long *)0x0;
      }
      else {
        plVar16 = (long *)0x20;
        __Znwm();
        *plVar16 = (long)&PTR_DAT_110b1da30;
        plVar16[1] = 0;
        plVar16[2] = 0;
        plVar16[3] = (long)ppuStack_b8;
      }
      plVar2 = plStack_b0;
      ppuStack_508 = (undefined **)0x0;
      if (plStack_b0 != (long *)0x0) {
        plVar1 = plStack_b0 + 1;
        do {
          lVar20 = *plVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar20 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar20 == 0) {
          lVar20 = *plStack_b0;
          plStack_b0 = plVar16;
          (**(code **)(lVar20 + 0x10))(plVar2);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          plVar16 = plStack_b0;
        }
      }
      plStack_b0 = plVar16;
      if (ppuStack_508 != (undefined **)0x0) {
        (**(code **)(*ppuStack_508 + 8))();
      }
      if (ppuStack_b8 != (undefined **)0x0) {
        uStack_e8 = 1;
        ppuStack_508 = &PTR_FUN_110b1ed58;
        FUN_10992b0e8(alStack_500);
        uStack_390 = 0;
        uStack_37c = 0;
        uStack_380 = 0;
        uStack_370 = 0;
        uStack_378 = 0;
        uStack_360 = 0;
        uStack_368 = 0;
        uStack_350 = 0;
        uStack_358 = 0;
        uStack_340 = 0;
        uStack_348 = 0;
        uStack_330 = 0;
        uStack_338 = 0;
        uStack_320 = 0;
        uStack_328 = 0;
        uStack_310 = 0;
        uStack_318 = 0;
        uStack_2f0 = 0;
        uStack_2f8 = 0;
        uStack_2e0 = 0;
        uStack_2e8 = 0;
        uStack_2d0 = 0;
        uStack_2d8 = 0;
        uStack_2c0 = 0;
        uStack_2c8 = 0;
        uStack_2b0 = 0;
        uStack_2b8 = 0;
        uStack_2a0 = 0;
        uStack_2a8 = 0;
        uStack_290 = 0;
        uStack_298 = 0;
        uStack_280 = 0;
        uStack_288 = 0;
        uStack_270 = 0;
        uStack_278 = 0;
        uStack_260 = 0;
        uStack_268 = 0;
        uStack_250 = 0;
        uStack_258 = 0;
        FUN_10998a3d8(&ppuStack_508,auStack_1d0,lVar17 + (long)iVar5 * 8,&uStack_720);
        FUN_10992b9dc(&ppuStack_508);
        if (plStack_90 != (long *)0x0) {
          plVar16 = plStack_90 + 1;
          do {
            lVar17 = *plVar16;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar8) {
              *plVar16 = lVar17 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plStack_90 + 0x10))(plStack_90);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
          }
        }
        plVar16 = plStack_a0;
        if (plStack_a0 != (long *)0x0) {
          plVar2 = plStack_a0 + 1;
          do {
            lVar17 = *plVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = lVar17 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
          }
        }
        plVar16 = plStack_b0;
        if (plStack_b0 != (long *)0x0) {
          plVar2 = plStack_b0 + 1;
          do {
            lVar17 = *plVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = lVar17 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
          }
        }
        plVar16 = plStack_c0;
        if (plStack_c0 != (long *)0x0) {
          plVar2 = plStack_c0 + 1;
          do {
            lVar17 = *plVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = lVar17 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
          }
        }
        if (lStack_e0 != 0) {
          lStack_d8 = lStack_e0;
          __ZdlPv();
        }
        if (cStack_151 < '\0') {
          __ZdlPv(uStack_168);
        }
        if (lStack_188 != 0) {
          lStack_180 = lStack_188;
          __ZdlPv();
        }
        *(undefined4 *)(ppuVar18 + 5) = uVar3;
        *(undefined4 *)(ppuVar18 + 6) = uVar4;
        FUN_109928e1c(ppuVar18,**(long **)(param_1 + 0x18) +
                               (long)*(int *)((long)ppuVar18 + 0x2c) * 8);
        *(undefined1 *)((long)ppuVar18 + 0xc) = 1;
        if (lStack_588 != 0) {
          lStack_580 = lStack_588;
          __ZdlPv();
        }
        if (lStack_5a0 != 0) {
          lStack_598 = lStack_5a0;
          __ZdlPv();
        }
        if (lStack_5b0 < 0) {
          __ZdlPv(uStack_5c0);
        }
        if (lStack_5c8 < 0) {
          __ZdlPv(uStack_5d8);
        }
        if (lStack_5f0 != 0) {
          lStack_5e8 = lStack_5f0;
          __ZdlPv();
        }
        if (lStack_608 != 0) {
          lStack_600 = lStack_608;
          __ZdlPv();
        }
        if (lStack_6e8 != 0) {
          lStack_6e0 = lStack_6e8;
          __ZdlPv();
        }
        if (lStack_708 < 0) {
          __ZdlPv(puStack_718);
        }
        if (lStack_528 != 0) {
          lStack_520 = lStack_528;
          __ZdlPv();
        }
        if (pppuStack_540 != (undefined ***)0x0) {
          pppuStack_538 = pppuStack_540;
          __ZdlPv();
        }
        return pppuStack_540;
      }
      ppuStack_508 = (undefined **)0x0;
      uStack_4b0 = 0;
      alStack_500[2] = 0;
      alStack_500[1] = 0;
      alStack_500[4] = 0;
      alStack_500[3] = 0;
      alStack_500[6] = 0;
      alStack_500[5] = 0;
      alStack_500[8] = 0;
      alStack_500[7] = 0;
      uStack_4b8 = 0;
      FUN_1099a9f0c(&ppuStack_508,&UNK_10f58ae2f,0xea,3,FUN_1099aa768,0);
      puVar15 = &UNK_10f58af52;
      FUN_1092b4db8(alStack_500[0] + 0x7540,&UNK_10f58af52,0x41);
    }
  }
  pppuVar11 = &ppuStack_508;
  func_0x0001099ab7c0();
  func_0x000109929098(auStack_1d0);
  func_0x000109928ff8(&uStack_720);
  FUN_10992c710(&pppuStack_540);
  __Unwind_Resume(pppuVar11);
  if (*(undefined **)(puVar15 + 8) == &DAT_10e00d2c0) {
    pppuVar11 = pppuVar11 + 1;
  }
  else {
    pppuVar11 = (undefined ***)0x0;
  }
  return pppuVar11;
}



/* Entry: 10992c6b0; end: 10992c703;  */

/* WARNING: Removing unreachable block (ram,0x00010992c6e4) */

long FUN_10992c6b0(long param_1,long param_2)

{
  if (*(undefined **)(param_2 + 8) == &DAT_10e00d2c0) {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10992c704; end: 10992c70f;  */

undefined ** FUN_10992c704(void)

{
  return &PTR_DAT_110b1d970;
}



/* Entry: 10992c710; end: 10992c74f;  */

long * FUN_10992c710(long *param_1)

{
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10992c750; end: 10992c753;  */

void FUN_10992c750(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10992c754; end: 10992c767;  */

void FUN_10992c754(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10992c768; end: 10992c77f;  */

void FUN_10992c768(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010992c778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10992c780; end: 10992c7cf;  */

/* WARNING: Removing unreachable block (ram,0x00010992c7ac) */

undefined8 FUN_10992c780(undefined8 param_1,long param_2)

{
  if (*(undefined **)(param_2 + 8) != &UNK_10e00d395) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10992c7d0; end: 10992c7d7;  */

void FUN_10992c7d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10992c7d8; end: 10992c7eb;  */

void FUN_10992c7d8(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10992c7ec; end: 10992c803;  */

void FUN_10992c7ec(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010992c7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10992c804; end: 10992c853;  */

/* WARNING: Removing unreachable block (ram,0x00010992c830) */

undefined8 FUN_10992c804(undefined8 param_1,long param_2)

{
  if (*(undefined **)(param_2 + 8) != &UNK_10e00d438) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10992c854; end: 10992c85b;  */

void FUN_10992c854(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10992c85c; end: 10992c86f;  */

void FUN_10992c85c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10992c870; end: 10992c887;  */

void FUN_10992c870(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010992c880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10992c888; end: 10992c8d7;  */

/* WARNING: Removing unreachable block (ram,0x00010992c8b4) */

undefined8 FUN_10992c888(undefined8 param_1,long param_2)

{
  if (*(undefined **)(param_2 + 8) != &UNK_10e00d4e6) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10992c8d8; end: 10992c8eb;  */

void FUN_10992c8d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10992c8ec; end: 10992c90b;  */

void FUN_10992c8ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b1da80;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10992c90c; end: 10992c957;  */

/* WARNING: Possible PIC construction at 0x00010992bc54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010992bc58) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd7ac) */

void FUN_10992c90c(long param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  plVar2 = *(long **)(param_1 + 0x40);
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    __ZdlPv();
  }
  lVar3 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  puVar1 = (undefined1 *)register0x00000008;
  plVar2 = (long *)*(long *)(param_1 + 0x20);
  while (plVar4 = plVar2, plVar4 != (long *)0x0) {
    *(long *)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    unaff_x30 = 0x10992bc58;
    puVar1 = puVar1 + -0x20;
    unaff_x19 = plVar4;
    unaff_x20 = param_1 + 0x18;
    plVar2 = (long *)*plVar4;
  }
  return;
}



/* Entry: 10992c958; end: 10992c95b;  */

void FUN_10992c958(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10992c95c; end: 10992cf3f;  */

void FUN_10992c95c(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  if (param_1[2] != 0) {
    plVar4 = (long *)*param_1;
    plVar2 = param_1 + 1;
    *param_1 = (long)plVar2;
    *(undefined8 *)(*plVar2 + 0x10) = 0;
    param_1[2] = 0;
    *plVar2 = 0;
    plVar7 = (long *)plVar4[1];
    if (plVar7 != (long *)0x0) {
      plVar4 = plVar7;
    }
    if (plVar4 != (long *)0x0) {
      plVar7 = (long *)plVar4[2];
      if (plVar7 != (long *)0x0) {
        plVar5 = (long *)*plVar7;
        if (plVar5 == plVar4) {
          *plVar7 = 0;
          while (plVar5 = (long *)plVar7[1], (long *)plVar7[1] != (long *)0x0) {
            do {
              plVar7 = plVar5;
              plVar5 = (long *)*plVar7;
            } while ((long *)*plVar7 != (long *)0x0);
          }
        }
        else {
          plVar7[1] = 0;
          while (plVar5 != (long *)0x0) {
            do {
              plVar7 = plVar5;
              plVar5 = (long *)*plVar7;
            } while ((long *)*plVar7 != (long *)0x0);
            plVar5 = (long *)plVar7[1];
          }
        }
      }
      do {
        plVar5 = plVar7;
        if (param_2 == param_3) break;
        uVar6 = param_2[4];
        plVar4[4] = uVar6;
        plVar3 = (long *)*plVar2;
        plVar5 = plVar2;
        while (plVar10 = plVar5, plVar3 != (long *)0x0) {
          while (plVar5 = plVar3, (ulong)plVar5[4] <= uVar6) {
            plVar3 = (long *)plVar5[1];
            if ((long *)plVar5[1] == (long *)0x0) {
              plVar10 = plVar5 + 1;
              goto LAB_10992ccd0;
            }
          }
          plVar3 = (long *)*plVar5;
        }
LAB_10992ccd0:
        *plVar4 = 0;
        plVar4[1] = 0;
        plVar4[2] = (long)plVar5;
        *plVar10 = (long)plVar4;
        if (*(long *)*param_1 != 0) {
          *param_1 = *(long *)*param_1;
          plVar4 = (long *)*plVar10;
        }
        plVar5 = (long *)*plVar2;
        bVar1 = plVar4 == plVar5;
        *(bool *)(plVar4 + 3) = bVar1;
joined_r0x00010992cd00:
        if ((bVar1) || (plVar3 = (long *)plVar4[2], (*(byte *)(plVar3 + 3) & 1) != 0))
        goto LAB_10992ce7c;
        plVar10 = (long *)plVar3[2];
        plVar11 = (long *)*plVar10;
        if (plVar11 == plVar3) {
          if ((plVar10[1] == 0) ||
             (plVar12 = (long *)(plVar10[1] + 0x18), *(char *)plVar12 == '\x01')) {
            plVar5 = plVar3;
            if ((long *)*plVar3 != plVar4) {
              plVar5 = (long *)plVar3[1];
              lVar8 = *plVar5;
              plVar3[1] = lVar8;
              plVar4 = plVar3;
              if (lVar8 != 0) {
                *(long **)(lVar8 + 0x10) = plVar3;
                plVar10 = (long *)plVar3[2];
                plVar4 = (long *)*plVar10;
              }
              plVar5[2] = (long)plVar10;
              lVar8 = 0;
              if (plVar4 != plVar3) {
                lVar8 = 8;
              }
              *(long **)((long)plVar10 + lVar8) = plVar5;
              *plVar5 = (long)plVar3;
              plVar3[2] = (long)plVar5;
              plVar10 = (long *)plVar5[2];
              plVar11 = (long *)*plVar10;
            }
            *(undefined1 *)(plVar5 + 3) = 1;
            *(undefined1 *)(plVar10 + 3) = 0;
            lVar8 = plVar11[1];
            *plVar10 = lVar8;
            if (lVar8 != 0) {
              *(long **)(lVar8 + 0x10) = plVar10;
            }
            puVar9 = (undefined8 *)plVar10[2];
            plVar11[2] = (long)puVar9;
            lVar8 = 0;
            if ((long *)*puVar9 != plVar10) {
              lVar8 = 8;
            }
            *(long **)((long)puVar9 + lVar8) = plVar11;
            plVar11[1] = (long)plVar10;
            plVar10[2] = (long)plVar11;
            goto LAB_10992ce7c;
          }
LAB_10992cd4c:
          *(undefined1 *)(plVar3 + 3) = 1;
          bVar1 = plVar10 == plVar5;
          *(bool *)(plVar10 + 3) = bVar1;
          *(char *)plVar12 = '\x01';
          plVar4 = plVar10;
          goto joined_r0x00010992cd00;
        }
        if ((plVar11 != (long *)0x0) && (plVar12 = plVar11 + 3, (char)*plVar12 != '\x01'))
        goto LAB_10992cd4c;
        plVar5 = (long *)*plVar3;
        if (plVar5 == plVar4) {
          lVar8 = plVar5[1];
          *plVar3 = lVar8;
          if (lVar8 != 0) {
            *(long **)(lVar8 + 0x10) = plVar3;
            plVar10 = (long *)plVar3[2];
          }
          plVar5[2] = (long)plVar10;
          lVar8 = 0;
          if ((long *)*plVar10 != plVar3) {
            lVar8 = 8;
          }
          *(long **)((long)plVar10 + lVar8) = plVar5;
          plVar5[1] = (long)plVar3;
          plVar3[2] = (long)plVar5;
          plVar10 = (long *)plVar5[2];
          plVar3 = plVar5;
        }
        *(undefined1 *)(plVar3 + 3) = 1;
        *(undefined1 *)(plVar10 + 3) = 0;
        plVar4 = (long *)plVar10[1];
        lVar8 = *plVar4;
        plVar10[1] = lVar8;
        if (lVar8 != 0) {
          *(long **)(lVar8 + 0x10) = plVar10;
        }
        puVar9 = (undefined8 *)plVar10[2];
        plVar4[2] = (long)puVar9;
        lVar8 = 0;
        if ((long *)*puVar9 != plVar10) {
          lVar8 = 8;
        }
        *(long **)((long)puVar9 + lVar8) = plVar4;
        *plVar4 = (long)plVar10;
        plVar10[2] = (long)plVar4;
LAB_10992ce7c:
        param_1[2] = param_1[2] + 1;
        if (plVar7 == (long *)0x0) {
          plVar5 = (long *)0x0;
        }
        else {
          plVar5 = (long *)plVar7[2];
          if (plVar5 != (long *)0x0) {
            plVar4 = (long *)*plVar5;
            if (plVar4 == plVar7) {
              *plVar5 = 0;
              while (plVar4 = (long *)plVar5[1], (long *)plVar5[1] != (long *)0x0) {
                do {
                  plVar5 = plVar4;
                  plVar4 = (long *)*plVar5;
                } while ((long *)*plVar5 != (long *)0x0);
              }
            }
            else {
              plVar5[1] = 0;
              while (plVar4 != (long *)0x0) {
                do {
                  plVar5 = plVar4;
                  plVar4 = (long *)*plVar5;
                } while ((long *)*plVar5 != (long *)0x0);
                plVar4 = (long *)plVar5[1];
              }
            }
          }
        }
        plVar4 = param_2;
        plVar3 = (long *)param_2[1];
        if ((long *)param_2[1] == (long *)0x0) {
          do {
            param_2 = (long *)plVar4[2];
            bVar1 = (long *)*param_2 != plVar4;
            plVar4 = param_2;
          } while (bVar1);
        }
        else {
          do {
            param_2 = plVar3;
            plVar3 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
        bVar1 = plVar7 != (long *)0x0;
        plVar4 = plVar7;
        plVar7 = plVar5;
      } while (bVar1);
      func_0x00010992bbf8(param_1,plVar4);
      if (plVar5 != (long *)0x0) {
        plVar4 = (long *)plVar5[2];
        while (plVar2 = plVar4, plVar2 != (long *)0x0) {
          plVar5 = plVar2;
          plVar4 = (long *)plVar2[2];
        }
        func_0x00010992bbf8(param_1,plVar5);
      }
    }
  }
  if (param_2 != param_3) {
    plVar4 = param_1 + 1;
    do {
      plVar2 = (long *)0x28;
      __Znwm();
      uVar6 = param_2[4];
      plVar2[4] = uVar6;
      plVar5 = (long *)*plVar4;
      plVar7 = plVar4;
      while (plVar3 = plVar7, plVar5 != (long *)0x0) {
        while (plVar7 = plVar5, (ulong)plVar7[4] <= uVar6) {
          plVar5 = (long *)plVar7[1];
          if ((long *)plVar7[1] == (long *)0x0) {
            plVar3 = plVar7 + 1;
            goto LAB_10992ca78;
          }
        }
        plVar5 = (long *)*plVar7;
      }
LAB_10992ca78:
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = (long)plVar7;
      *plVar3 = (long)plVar2;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        plVar2 = (long *)*plVar3;
      }
      plVar7 = (long *)*plVar4;
      bVar1 = plVar2 == plVar7;
      *(bool *)(plVar2 + 3) = bVar1;
joined_r0x00010992caa8:
      if ((bVar1) || (plVar5 = (long *)plVar2[2], (*(byte *)(plVar5 + 3) & 1) != 0))
      goto LAB_10992cc24;
      plVar3 = (long *)plVar5[2];
      plVar10 = (long *)*plVar3;
      if (plVar10 == plVar5) {
        if ((plVar3[1] == 0) || (plVar11 = (long *)(plVar3[1] + 0x18), *(char *)plVar11 == '\x01'))
        {
          plVar7 = plVar5;
          if ((long *)*plVar5 != plVar2) {
            plVar7 = (long *)plVar5[1];
            lVar8 = *plVar7;
            plVar5[1] = lVar8;
            plVar2 = plVar5;
            if (lVar8 != 0) {
              *(long **)(lVar8 + 0x10) = plVar5;
              plVar3 = (long *)plVar5[2];
              plVar2 = (long *)*plVar3;
            }
            plVar7[2] = (long)plVar3;
            lVar8 = 0;
            if (plVar2 != plVar5) {
              lVar8 = 8;
            }
            *(long **)((long)plVar3 + lVar8) = plVar7;
            *plVar7 = (long)plVar5;
            plVar5[2] = (long)plVar7;
            plVar3 = (long *)plVar7[2];
            plVar10 = (long *)*plVar3;
          }
          *(undefined1 *)(plVar7 + 3) = 1;
          *(undefined1 *)(plVar3 + 3) = 0;
          lVar8 = plVar10[1];
          *plVar3 = lVar8;
          if (lVar8 != 0) {
            *(long **)(lVar8 + 0x10) = plVar3;
          }
          puVar9 = (undefined8 *)plVar3[2];
          plVar10[2] = (long)puVar9;
          lVar8 = 0;
          if ((long *)*puVar9 != plVar3) {
            lVar8 = 8;
          }
          *(long **)((long)puVar9 + lVar8) = plVar10;
          plVar10[1] = (long)plVar3;
          plVar3[2] = (long)plVar10;
          goto LAB_10992cc24;
        }
LAB_10992caf4:
        *(undefined1 *)(plVar5 + 3) = 1;
        bVar1 = plVar3 == plVar7;
        *(bool *)(plVar3 + 3) = bVar1;
        *(char *)plVar11 = '\x01';
        plVar2 = plVar3;
        goto joined_r0x00010992caa8;
      }
      if ((plVar10 != (long *)0x0) && (plVar11 = plVar10 + 3, (char)*plVar11 != '\x01'))
      goto LAB_10992caf4;
      plVar7 = (long *)*plVar5;
      if (plVar7 == plVar2) {
        lVar8 = plVar7[1];
        *plVar5 = lVar8;
        if (lVar8 != 0) {
          *(long **)(lVar8 + 0x10) = plVar5;
          plVar3 = (long *)plVar5[2];
        }
        plVar7[2] = (long)plVar3;
        lVar8 = 0;
        if ((long *)*plVar3 != plVar5) {
          lVar8 = 8;
        }
        *(long **)((long)plVar3 + lVar8) = plVar7;
        plVar7[1] = (long)plVar5;
        plVar5[2] = (long)plVar7;
        plVar3 = (long *)plVar7[2];
        plVar5 = plVar7;
      }
      *(undefined1 *)(plVar5 + 3) = 1;
      *(undefined1 *)(plVar3 + 3) = 0;
      plVar2 = (long *)plVar3[1];
      lVar8 = *plVar2;
      plVar3[1] = lVar8;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 0x10) = plVar3;
      }
      puVar9 = (undefined8 *)plVar3[2];
      plVar2[2] = (long)puVar9;
      lVar8 = 0;
      if ((long *)*puVar9 != plVar3) {
        lVar8 = 8;
      }
      *(long **)((long)puVar9 + lVar8) = plVar2;
      *plVar2 = (long)plVar3;
      plVar3[2] = (long)plVar2;
LAB_10992cc24:
      param_1[2] = param_1[2] + 1;
      plVar2 = (long *)param_2[1];
      plVar7 = param_2;
      if ((long *)param_2[1] == (long *)0x0) {
        do {
          param_2 = (long *)plVar7[2];
          bVar1 = (long *)*param_2 != plVar7;
          plVar7 = param_2;
        } while (bVar1);
      }
      else {
        do {
          param_2 = plVar2;
          plVar2 = (long *)*param_2;
        } while ((long *)*param_2 != (long *)0x0);
      }
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 10992cf40; end: 10992d183;  */

undefined1  [16] FUN_10992cf40(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  
  uVar3 = *param_2;
  uVar7 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (uVar3 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar11 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar7 & uVar5) == 0) {
      unaff_x24 = uVar11 & uVar5;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar9 * uVar7;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar10 = (long *)*puVar8; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        uVar9 = plVar10[1];
        if (uVar9 == uVar11) {
          if (plVar10[2] == uVar3) {
            uVar2 = 0;
            goto LAB_10992d150;
          }
        }
        else {
          if ((uVar7 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar7 <= uVar9) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar9 / uVar7;
            }
            uVar9 = uVar9 - uVar1 * uVar7;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar10 = (long *)0x20;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = uVar11;
  plVar10[2] = *(long *)*param_4;
  *(undefined4 *)(plVar10 + 3) = 0;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar7) {
      uVar3 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar3 = uVar3 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar7) {
      uVar3 = uVar7;
    }
    FUN_10992d184(param_1,uVar3);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar3 * uVar7;
      }
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar10 = *plVar4;
    *plVar4 = (long)plVar10;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar4;
    if (*plVar10 == 0) goto LAB_10992d140;
    uVar3 = *(ulong *)(*plVar10 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar3 = uVar3 & uVar7 - 1;
    }
    else if (uVar7 <= uVar3) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar3 / uVar7;
      }
      uVar3 = uVar3 - uVar11 * uVar7;
    }
    plVar4 = (long *)(*param_1 + uVar3 * 8);
  }
  else {
    *plVar10 = *plVar4;
  }
  *plVar4 = (long)plVar10;
LAB_10992d140:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10992d150:
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar10;
  return auVar12;
}



/* Entry: 10992d184; end: 10992d46b;  */

double * FUN_10992d184(double param_1,double *param_2,double *param_3)

{
  ulong uVar1;
  double *pdVar2;
  double dVar3;
  undefined8 uVar4;
  double *pdVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  double *pdVar10;
  double dVar11;
  double dVar12;
  undefined8 auStack_c0 [12];
  double *pdStack_60;
  double dStack_58;
  double *pdStack_50;
  double *pdStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  pdVar2 = param_2;
  pdVar5 = param_3;
  if ((long)param_3 - 1U == 0) {
    pdVar10 = (double *)param_2[1];
    param_3 = (double *)0x2;
    if (pdVar10 < (double *)0x2) {
LAB_10992d1e8:
      dVar3 = (double)((long)param_3 << 3);
      __Znwm();
      pdVar2 = (double *)*param_2;
      *param_2 = dVar3;
      if (pdVar2 != (double *)0x0) {
        __ZdlPv();
      }
      pdVar5 = (double *)0x0;
      param_2[1] = (double)param_3;
      do {
        *(undefined8 *)((long)*param_2 + (long)pdVar5 * 8) = 0;
        pdVar5 = (double *)((long)pdVar5 + 1);
      } while (param_3 != pdVar5);
      plVar7 = (long *)param_2[2];
      if (plVar7 == (long *)0x0) {
        return pdVar2;
      }
      pdVar5 = (double *)plVar7[1];
      uVar6 = (long)param_3 - 1;
      if (((ulong)param_3 & uVar6) == 0) {
        pdVar5 = (double *)((ulong)pdVar5 & uVar6);
      }
      else if (param_3 <= pdVar5) {
        uVar1 = 0;
        if (param_3 != (double *)0x0) {
          uVar1 = (ulong)pdVar5 / (ulong)param_3;
        }
        pdVar5 = (double *)((long)pdVar5 - uVar1 * (long)param_3);
      }
      *(double **)((long)*param_2 + (long)pdVar5 * 8) = param_2 + 2;
      plVar8 = (long *)*plVar7;
      while (plVar8 != (long *)0x0) {
        pdVar10 = (double *)plVar8[1];
        if (((ulong)param_3 & uVar6) == 0) {
          pdVar10 = (double *)((ulong)pdVar10 & uVar6);
        }
        else if (param_3 <= pdVar10) {
          uVar1 = 0;
          if (param_3 != (double *)0x0) {
            uVar1 = (ulong)pdVar10 / (ulong)param_3;
          }
          pdVar10 = (double *)((long)pdVar10 - uVar1 * (long)param_3);
        }
        plVar9 = plVar8;
        if (pdVar10 != pdVar5) {
          dVar3 = *param_2;
          if (*(long *)((long)dVar3 + (long)pdVar10 * 8) == 0) {
            *(long **)((long)dVar3 + (long)pdVar10 * 8) = plVar7;
            pdVar5 = pdVar10;
          }
          else {
            *plVar7 = *plVar8;
            *plVar8 = **(undefined8 **)((long)dVar3 + (long)pdVar10 * 8);
            **(long **)((long)dVar3 + (long)pdVar10 * 8) = (long)plVar8;
            plVar9 = plVar7;
          }
        }
        plVar7 = plVar9;
        plVar8 = (long *)*plVar9;
      }
      return pdVar2;
    }
  }
  else {
    if (((ulong)param_3 & (long)param_3 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      pdVar2 = param_3;
    }
    pdVar10 = (double *)param_2[1];
    if (pdVar10 < param_3) {
      if ((ulong)param_3 >> 0x3d == 0) goto LAB_10992d1e8;
      goto LAB_10992d468;
    }
  }
  if (param_3 < pdVar10) {
    param_1 = (double)(ulong)(uint)((float)(ulong)param_2[3] / *(float *)(param_2 + 4));
    pdVar2 = (double *)(long)((float)(ulong)param_2[3] / *(float *)(param_2 + 4));
    if ((pdVar10 < (double *)0x3) || (((ulong)pdVar10 & (long)pdVar10 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((double *)0x1 < pdVar2) {
      pdVar2 = (double *)(1L << (-LZCOUNT((long)pdVar2 + -1) & 0x3fU));
    }
    if (param_3 <= pdVar2) {
      param_3 = pdVar2;
    }
    if (param_3 < pdVar10) {
      if (param_3 == (double *)0x0) {
        pdVar2 = (double *)*param_2;
        *param_2 = 0.0;
        if (pdVar2 != (double *)0x0) {
          __ZdlPv();
        }
        param_2[1] = 0.0;
      }
      else {
        if ((ulong)param_3 >> 0x3d != 0) {
LAB_10992d468:
          func_0x000104c4f740();
          pcStack_38 = FUN_10992d46c;
          auStack_c0[0] = 0;
          dStack_58 = param_1;
          pdStack_50 = param_3;
          pdStack_48 = param_2;
          puStack_40 = &stack0xfffffffffffffff0;
          if (param_1 < 0.0) {
            pdVar10 = &dStack_58;
            FUN_10991e5b0(pdVar10,auStack_c0,&UNK_10f58b18a);
            if (pdVar10 != (double *)0x0) {
              uVar4 = 0x2b;
              pdStack_60 = pdVar10;
              goto LAB_10992d578;
            }
            pdStack_60 = (double *)0x0;
          }
          pdVar10 = pdVar5 + 1;
          dVar3 = SQRT(*pdVar10);
          *pdVar2 = dVar3;
          if ((dStack_58 == 0.0) || (dVar11 = pdVar5[2], dVar11 <= 0.0)) {
            pdVar2[1] = dVar3;
            dVar11 = 0.0;
          }
          else {
            auStack_c0[0] = 0;
            dVar12 = *pdVar10;
            if (dVar12 <= 0.0) {
              FUN_10991e5b0(pdVar10,auStack_c0,&UNK_10f58b21b);
              pdStack_60 = pdVar10;
              if (pdVar10 != (double *)0x0) {
                do {
                  uVar4 = 0x5e;
LAB_10992d578:
                  FUN_1099ab8e4(auStack_c0,&UNK_10f58b199,uVar4,&pdStack_60);
                  func_0x0001099ab7c0(auStack_c0);
                } while( true );
              }
              dVar12 = pdVar5[1];
              dVar11 = pdVar5[2];
              dVar3 = *pdVar2;
            }
            dVar11 = 1.0 - SQRT((dVar11 * (dStack_58 + dStack_58)) / dVar12 + 1.0);
            pdVar2[1] = dVar3 / (1.0 - dVar11);
            dVar11 = dVar11 / dStack_58;
          }
          pdVar2[2] = dVar11;
          return pdVar2;
        }
        dVar3 = (double)((long)param_3 << 3);
        __Znwm();
        pdVar2 = (double *)*param_2;
        *param_2 = dVar3;
        if (pdVar2 != (double *)0x0) {
          __ZdlPv();
        }
        pdVar5 = (double *)0x0;
        param_2[1] = (double)param_3;
        do {
          *(undefined8 *)((long)*param_2 + (long)pdVar5 * 8) = 0;
          pdVar5 = (double *)((long)pdVar5 + 1);
        } while (param_3 != pdVar5);
        plVar7 = (long *)param_2[2];
        if (plVar7 != (long *)0x0) {
          pdVar5 = (double *)plVar7[1];
          uVar6 = (long)param_3 - 1;
          if (((ulong)param_3 & uVar6) == 0) {
            pdVar5 = (double *)((ulong)pdVar5 & uVar6);
          }
          else if (param_3 <= pdVar5) {
            uVar1 = 0;
            if (param_3 != (double *)0x0) {
              uVar1 = (ulong)pdVar5 / (ulong)param_3;
            }
            pdVar5 = (double *)((long)pdVar5 - uVar1 * (long)param_3);
          }
          *(double **)((long)*param_2 + (long)pdVar5 * 8) = param_2 + 2;
          plVar8 = (long *)*plVar7;
          while (plVar8 != (long *)0x0) {
            pdVar10 = (double *)plVar8[1];
            if (((ulong)param_3 & uVar6) == 0) {
              pdVar10 = (double *)((ulong)pdVar10 & uVar6);
            }
            else if (param_3 <= pdVar10) {
              uVar1 = 0;
              if (param_3 != (double *)0x0) {
                uVar1 = (ulong)pdVar10 / (ulong)param_3;
              }
              pdVar10 = (double *)((long)pdVar10 - uVar1 * (long)param_3);
            }
            plVar9 = plVar8;
            if (pdVar10 != pdVar5) {
              dVar3 = *param_2;
              if (*(long *)((long)dVar3 + (long)pdVar10 * 8) == 0) {
                *(long **)((long)dVar3 + (long)pdVar10 * 8) = plVar7;
                pdVar5 = pdVar10;
              }
              else {
                *plVar7 = *plVar8;
                *plVar8 = **(undefined8 **)((long)dVar3 + (long)pdVar10 * 8);
                **(long **)((long)dVar3 + (long)pdVar10 * 8) = (long)plVar8;
                plVar9 = plVar7;
              }
            }
            plVar7 = plVar9;
            plVar8 = (long *)*plVar9;
          }
        }
      }
    }
  }
  return pdVar2;
}



/* Entry: 10992d46c; end: 10992d59b;  */

double * FUN_10992d46c(double param_1,double *param_2,long param_3)

{
  double *pdVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 auStack_90 [12];
  double *pdStack_30;
  double dStack_28;
  
  auStack_90[0] = 0;
  dStack_28 = param_1;
  if (param_1 < 0.0) {
    pdVar1 = &dStack_28;
    FUN_10991e5b0(pdVar1,auStack_90,&UNK_10f58b18a);
    if (pdVar1 != (double *)0x0) {
      uVar2 = 0x2b;
      pdStack_30 = pdVar1;
      goto LAB_10992d578;
    }
    pdStack_30 = (double *)0x0;
  }
  pdVar1 = (double *)(param_3 + 8);
  dVar3 = SQRT(*pdVar1);
  *param_2 = dVar3;
  if ((dStack_28 == 0.0) || (dVar4 = *(double *)(param_3 + 0x10), dVar4 <= 0.0)) {
    param_2[1] = dVar3;
    dVar4 = 0.0;
  }
  else {
    auStack_90[0] = 0;
    dVar5 = *pdVar1;
    if (dVar5 <= 0.0) {
      FUN_10991e5b0(pdVar1,auStack_90,&UNK_10f58b21b);
      pdStack_30 = pdVar1;
      if (pdVar1 != (double *)0x0) {
        do {
          uVar2 = 0x5e;
LAB_10992d578:
          FUN_1099ab8e4(auStack_90,&UNK_10f58b199,uVar2,&pdStack_30);
          func_0x0001099ab7c0(auStack_90);
        } while( true );
      }
      dVar5 = *(double *)(param_3 + 8);
      dVar4 = *(double *)(param_3 + 0x10);
      dVar3 = *param_2;
    }
    dVar4 = 1.0 - SQRT((dVar4 * (dStack_28 + dStack_28)) / dVar5 + 1.0);
    param_2[1] = dVar3 / (1.0 - dVar4);
    dVar4 = dVar4 / dStack_28;
  }
  param_2[2] = dVar4;
  return param_2;
}



/* Entry: 10992d59c; end: 10992d797;  */

void FUN_10992d59c(long param_1,int param_2,double *param_3)

{
  ulong uVar1;
  double *pdVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  double dVar7;
  
  uVar3 = (ulong)param_2;
  dVar7 = *(double *)(param_1 + 8);
  uVar1 = (ulong)param_3 >> 3 & 1;
  if ((long)param_2 <= (long)uVar1) {
    uVar1 = uVar3;
  }
  if (((ulong)param_3 & 7) != 0) {
    uVar1 = uVar3;
  }
  lVar5 = uVar3 - uVar1;
  pdVar2 = param_3;
  uVar6 = uVar1;
  if (0 < (long)uVar1) {
    do {
      *pdVar2 = dVar7 * *pdVar2;
      uVar6 = uVar6 - 1;
      pdVar2 = pdVar2 + 1;
    } while (uVar6 != 0);
  }
  lVar4 = (lVar5 - (lVar5 >> 0x3f) & 0xfffffffffffffffeU) + uVar1;
  if (1 < lVar5) {
    pdVar2 = param_3 + uVar1;
    uVar6 = uVar1;
    do {
      pdVar2[1] = pdVar2[1] * dVar7;
      *pdVar2 = *pdVar2 * dVar7;
      uVar6 = uVar6 + 2;
      pdVar2 = pdVar2 + 2;
    } while ((long)uVar6 < lVar4);
  }
  if (lVar4 < (long)uVar3) {
    lVar4 = lVar5 % 2;
    pdVar2 = param_3 + uVar1 + (lVar5 / 2) * 2;
    do {
      *pdVar2 = dVar7 * *pdVar2;
      lVar4 = lVar4 + -1;
      pdVar2 = pdVar2 + 1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 10992d798; end: 10992d94b;  */

undefined8 * FUN_10992d798(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  double *pdVar8;
  ulong uVar9;
  double *pdVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  double *pdVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  double *pdVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  long lStack_170;
  double *pdStack_140;
  long lStack_138;
  double *pdStack_130;
  long lStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  iVar6 = *(int *)(param_2 + 0xc);
  if (iVar6 == 0) {
    puVar3 = (undefined8 *)0x10;
    __Znwm();
    *puVar3 = &PTR_FUN_110b1db18;
    puVar3[1] = 0;
    *param_1 = puVar3;
    return puVar3;
  }
  if (iVar6 == 1) {
    uStack_80 = 0;
    uStack_28 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = 0;
    lVar7 = 0x51;
    puVar3 = (undefined8 *)0x3;
    FUN_1099a9f0c(&uStack_80,&UNK_10f58b228,0x51,3,FUN_1099aa768,0);
    iVar6 = 0xf58b2af;
    FUN_109365950(lStack_78 + 0x7540);
  }
  else if (iVar6 == 2) {
    uStack_80 = 0;
    uStack_28 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = 0;
    lVar7 = 0x59;
    puVar3 = (undefined8 *)0x3;
    FUN_1099a9f0c(&uStack_80,&UNK_10f58b228,0x59,3,FUN_1099aa768,0);
    iVar6 = 0xf58b2de;
    FUN_109365950(lStack_78 + 0x7540);
  }
  else {
    uStack_80 = 0;
    uStack_28 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = 0;
    puVar3 = (undefined8 *)0x3;
    FUN_1099a9f0c(&uStack_80,&UNK_10f58b228,0x5d,3,FUN_1099aa768,0);
    lVar7 = 0x2c;
    FUN_1092b4db8(lStack_78 + 0x7540,&UNK_10f58b30b);
    if (*(uint *)(param_2 + 0xc) < 3) {
      iVar6 = (int)(&PTR_DAT_110b1db50)[*(uint *)(param_2 + 0xc)];
    }
    else {
      iVar6 = 0xf5931ae;
    }
    FUN_109365950();
  }
  puVar5 = &uStack_80;
  func_0x0001099ab7c0();
  *param_1 = 0;
  __Unwind_Resume();
  uVar29 = (ulong)iVar6;
  plVar4 = (long *)0x38;
  __Znwm();
  *plVar4 = lVar7;
  plVar4[1] = uVar29;
  plVar4[2] = uVar29;
  plVar4[3] = uVar29;
  *(undefined1 *)(plVar4 + 6) = 0;
  plVar4[5] = 0;
  if (iVar6 < 1) {
    iVar6 = 0;
    *(undefined1 *)(plVar4 + 6) = 1;
  }
  else {
    uVar9 = 0;
    pdVar10 = (double *)(lVar7 + 0x30);
    dVar32 = 0.0;
    lVar16 = -1;
    pdVar17 = (double *)(lVar7 + uVar29 * 8);
    lVar27 = lVar7;
    uVar23 = uVar29;
    do {
      uVar1 = uVar29 - uVar9;
      pdVar25 = (double *)(lVar7 + uVar9 * uVar29 * 8 + uVar9 * 8);
      uVar15 = uVar1 + 3;
      if ((long)uVar9 <= (long)uVar29) {
        uVar15 = uVar1;
      }
      if (uVar1 + 1 < 3) {
        dVar33 = ABS(*pdVar25);
      }
      else {
        uVar11 = uVar1 - ((long)uVar1 >> 0x3f) & 0xfffffffffffffffe;
        dVar33 = ABS(*pdVar25);
        dVar35 = ABS(pdVar25[1]);
        if (3 < (long)uVar1) {
          uVar15 = uVar15 & 0xfffffffffffffffc;
          dVar34 = ABS(pdVar25[2]);
          dVar36 = ABS(pdVar25[3]);
          if (7 < uVar1) {
            lVar28 = 4;
            pdVar8 = pdVar10;
            do {
              dVar33 = dVar33 + ABS(pdVar8[-2]);
              dVar35 = dVar35 + ABS(pdVar8[-1]);
              dVar34 = dVar34 + ABS(*pdVar8);
              dVar36 = dVar36 + ABS(pdVar8[1]);
              lVar28 = lVar28 + 4;
              pdVar8 = pdVar8 + 4;
            } while (lVar28 < (long)uVar15);
          }
          dVar33 = dVar34 + dVar33;
          dVar35 = dVar36 + dVar35;
          if ((long)uVar15 < (long)uVar11) {
            dVar33 = dVar33 + ABS(pdVar25[uVar15]);
            dVar35 = dVar35 + ABS((pdVar25 + uVar15)[1]);
          }
        }
        dVar33 = dVar33 + dVar35;
        if ((long)uVar11 < (long)uVar1) {
          lVar28 = uVar23 - uVar11;
          pdVar25 = (double *)(lVar27 + ((long)uVar1 / 2) * 0x10);
          do {
            dVar33 = dVar33 + ABS(*pdVar25);
            lVar28 = lVar28 + -1;
            pdVar25 = pdVar25 + 1;
          } while (lVar28 != 0);
        }
      }
      if (uVar9 == 0) {
        dVar35 = 0.0;
      }
      else {
        dVar35 = ABS(*(double *)(lVar7 + uVar9 * 8));
        pdVar25 = pdVar17;
        lVar28 = lVar16;
        if (uVar9 != 1) {
          do {
            dVar35 = dVar35 + ABS(*pdVar25);
            lVar28 = lVar28 + -1;
            pdVar25 = pdVar25 + uVar29;
          } while (lVar28 != 0);
        }
      }
      dVar33 = dVar33 + dVar35;
      if (dVar32 < dVar33) {
        plVar4[5] = (long)dVar33;
        dVar32 = dVar33;
      }
      uVar9 = uVar9 + 1;
      pdVar10 = pdVar10 + uVar29 + 1;
      uVar23 = uVar23 - 1;
      lVar27 = lVar27 + uVar29 * 8 + 8;
      lVar16 = lVar16 + 1;
      pdVar17 = pdVar17 + 1;
    } while (uVar9 != uVar29);
    *(undefined1 *)(plVar4 + 6) = 1;
    if (iVar6 < 0x20) {
      lVar16 = 0;
      lVar7 = -1;
      lVar27 = 8;
      uVar23 = 0;
      uVar9 = uVar29;
      do {
        uVar9 = uVar9 - 1;
        lVar28 = *plVar4;
        lVar30 = plVar4[3];
        pdVar10 = (double *)(lVar28 + uVar23 * 8);
        lVar12 = lVar28 + lVar30 * uVar23 * 8;
        dVar32 = *(double *)(lVar12 + uVar23 * 8);
        if (uVar23 != 0) {
          dVar33 = *pdVar10 * *pdVar10;
          if (uVar23 != 1) {
            pdVar17 = (double *)(lVar28 + lVar16 + lVar30 * 8);
            lVar21 = lVar7;
            do {
              dVar33 = dVar33 + *pdVar17 * *pdVar17;
              pdVar17 = pdVar17 + lVar30;
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
          }
          dVar32 = dVar32 - dVar33;
        }
        if (dVar32 <= 0.0) goto LAB_10992e4cc;
        uVar1 = ~uVar23 + uVar29;
        uVar15 = uVar23 + 1;
        pdVar17 = (double *)(lVar28 + uVar15 * 8);
        pdVar25 = pdVar17 + lVar30 * uVar23;
        dVar32 = SQRT(dVar32);
        *(double *)(lVar12 + uVar23 * 8) = dVar32;
        if ((uVar23 == 0) || ((long)uVar1 < 1)) {
          if (0 < (long)uVar1) goto LAB_10992dc48;
        }
        else {
          if (uVar1 == 1) {
            dVar33 = *pdVar17 * *pdVar10;
            if (1 < uVar23) {
              lVar12 = lVar28 + lVar30 * 8;
              lVar21 = lVar7;
              do {
                dVar33 = dVar33 + ((double *)(lVar12 + lVar16))[1] * *(double *)(lVar12 + lVar16);
                lVar12 = lVar12 + lVar30 * 8;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
            }
            *pdVar25 = *pdVar25 - dVar33;
          }
          else {
            pdStack_140 = pdVar10;
            lStack_138 = lVar30;
            pdStack_130 = pdVar17;
            lStack_128 = lVar30;
            FUN_109909a3c(0xbff0000000000000,uVar1,uVar23,&pdStack_130,&pdStack_140,pdVar25,1);
          }
LAB_10992dc48:
          uVar23 = (ulong)pdVar25 >> 3 & 1;
          if (((ulong)pdVar25 & 7) != 0) {
            uVar23 = uVar1;
          }
          if (uVar23 != 0) {
            pdVar10 = (double *)(lVar28 + lVar27 + lVar30 * lVar16);
            uVar11 = uVar23;
            do {
              *pdVar10 = *pdVar10 / dVar32;
              uVar11 = uVar11 - 1;
              pdVar10 = pdVar10 + 1;
            } while (uVar11 != 0);
          }
          lVar21 = uVar1 - uVar23;
          uVar11 = lVar21 - (lVar21 >> 0x3f) & 0xfffffffffffffffe;
          lVar12 = uVar11 + uVar23;
          if (1 < lVar21) {
            lVar31 = lVar28 + lVar30 * lVar16 + uVar23 * 8;
            uVar24 = uVar23;
            do {
              dVar33 = *(double *)(lVar31 + lVar27);
              ((double *)(lVar31 + lVar27))[1] = ((double *)(lVar31 + lVar27))[1] / dVar32;
              *(double *)(lVar31 + lVar27) = dVar33 / dVar32;
              uVar24 = uVar24 + 2;
              lVar31 = lVar31 + 0x10;
            } while ((long)uVar24 < lVar12);
          }
          if (lVar12 < (long)uVar1) {
            lVar12 = (uVar9 - uVar23) - uVar11;
            lVar28 = lVar28 + lVar30 * lVar16 + (lVar21 / 2) * 0x10 + uVar23 * 8;
            do {
              *(double *)(lVar28 + lVar27) = *(double *)(lVar28 + lVar27) / dVar32;
              lVar28 = lVar28 + 8;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
        }
        lVar7 = lVar7 + 1;
        lVar16 = lVar16 + 8;
        lVar27 = lVar27 + 8;
        uVar23 = uVar15;
      } while (uVar15 != uVar29);
    }
    else {
      lStack_170 = 0;
      lVar7 = 0;
      uVar9 = uVar29 >> 3 & 0xffffff0;
      if (0x7f < uVar9) {
        uVar9 = 0x80;
      }
      uVar23 = 8;
      if ((uVar29 >> 3 & 0xffffff0) != 0) {
        uVar23 = uVar9;
      }
      uVar9 = uVar29;
      do {
        uVar15 = uVar23;
        if ((long)uVar9 <= (long)uVar23) {
          uVar15 = uVar9;
        }
        uVar11 = uVar29 - lVar7;
        uVar1 = uVar11;
        if ((long)uVar23 <= (long)uVar11) {
          uVar1 = uVar23;
        }
        lVar27 = *plVar4;
        lVar28 = plVar4[3];
        lVar16 = lVar27 + lVar7 * 8 + lVar28 * lVar7 * 8;
        if (0 < (long)uVar1) {
          lVar21 = 0;
          lVar31 = -uVar15;
          lVar30 = lVar27 + lStack_170 + lStack_170 * lVar28;
          lVar12 = -1;
          uVar15 = 0;
          do {
            lVar31 = lVar31 + 1;
            lVar26 = plVar4[3];
            pdVar10 = (double *)(lVar16 + uVar15 * 8);
            lVar13 = lVar16 + lVar26 * uVar15 * 8;
            dVar32 = *(double *)(lVar13 + uVar15 * 8);
            if (uVar15 != 0) {
              dVar33 = *pdVar10 * *pdVar10;
              if (uVar15 != 1) {
                pdVar17 = (double *)(lVar30 + lVar26 * 8);
                lVar18 = lVar12;
                do {
                  dVar33 = dVar33 + *pdVar17 * *pdVar17;
                  pdVar17 = pdVar17 + lVar26;
                  lVar18 = lVar18 + -1;
                } while (lVar18 != 0);
              }
              dVar32 = dVar32 - dVar33;
            }
            if (dVar32 <= 0.0) goto LAB_10992e4cc;
            uVar20 = uVar1 + ~uVar15;
            uVar24 = uVar15 + 1;
            pdVar17 = (double *)(lVar16 + uVar24 * 8);
            pdVar25 = pdVar17 + lVar26 * uVar15;
            dVar32 = SQRT(dVar32);
            *(double *)(lVar13 + uVar15 * 8) = dVar32;
            if ((uVar15 == 0) || ((long)uVar20 < 1)) {
              if (0 < (long)uVar20) goto LAB_10992deec;
            }
            else {
              if (uVar20 == 1) {
                dVar33 = *pdVar17 * *pdVar10;
                if (1 < uVar15) {
                  lVar13 = lVar26 * 8;
                  lVar18 = lVar12;
                  do {
                    dVar33 = dVar33 + ((double *)(lVar30 + lVar13))[1] *
                                      *(double *)(lVar30 + lVar13);
                    lVar13 = lVar13 + lVar26 * 8;
                    lVar18 = lVar18 + -1;
                  } while (lVar18 != 0);
                }
                *pdVar25 = *pdVar25 - dVar33;
              }
              else {
                pdStack_140 = pdVar10;
                lStack_138 = lVar26;
                pdStack_130 = pdVar17;
                lStack_128 = lVar26;
                FUN_109909a3c(0xbff0000000000000,uVar20,uVar15,&pdStack_130,&pdStack_140,pdVar25,1);
              }
LAB_10992deec:
              uVar15 = (ulong)pdVar25 >> 3 & 1;
              if (((ulong)pdVar25 & 7) != 0) {
                uVar15 = uVar20;
              }
              if (uVar15 != 0) {
                lVar13 = lVar26 * lVar21;
                uVar14 = uVar15;
                do {
                  lVar13 = lVar13 + 8;
                  *(double *)(lVar30 + lVar13) = *(double *)(lVar30 + lVar13) / dVar32;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              lVar18 = uVar20 - uVar15;
              uVar14 = lVar18 - (lVar18 >> 0x3f) & 0xfffffffffffffffe;
              lVar13 = uVar14 + uVar15;
              if (1 < lVar18) {
                lVar19 = lVar26 * lVar21 + uVar15 * 8 + 8;
                uVar22 = uVar15;
                do {
                  dVar33 = *(double *)(lVar30 + lVar19);
                  ((double *)(lVar30 + lVar19))[1] = ((double *)(lVar30 + lVar19))[1] / dVar32;
                  *(double *)(lVar30 + lVar19) = dVar33 / dVar32;
                  uVar22 = uVar22 + 2;
                  lVar19 = lVar19 + 0x10;
                } while ((long)uVar22 < lVar13);
              }
              if (lVar13 < (long)uVar20) {
                lVar13 = uVar15 + lVar31 + uVar14;
                lVar26 = lVar26 * lVar21 + (lVar18 / 2) * 0x10 + uVar15 * 8;
                do {
                  lVar26 = lVar26 + 8;
                  *(double *)(lVar30 + lVar26) = *(double *)(lVar30 + lVar26) / dVar32;
                  bVar2 = lVar13 != -1;
                  lVar13 = lVar13 + 1;
                } while (bVar2);
              }
            }
            lVar12 = lVar12 + 1;
            lVar30 = lVar30 + 8;
            lVar21 = lVar21 + 8;
            uVar15 = uVar24;
          } while (uVar1 != uVar24);
        }
        uVar11 = uVar11 - uVar1;
        if (0 < (long)uVar11) {
          lVar27 = lVar27 + (uVar1 + lVar7) * 8;
          lVar12 = lVar27 + lVar28 * lVar7 * 8;
          uStack_120 = uVar11;
          uStack_110 = uVar1;
          if (uVar1 != 0) {
            pdStack_130 = (double *)0x0;
            lStack_128 = 0;
            uStack_118 = uVar1;
            if ((bRam00000001132dfa18 & 1) == 0) {
              iVar6 = 0x132dfa18;
              ___cxa_guard_acquire();
              if (iVar6 != 0) {
                uRam00000001132dfa08 = 0x80000;
                uRam00000001132dfa00 = 0x4000;
                lRam00000001132dfa10 = 0x80000;
                ___cxa_guard_release(0x1132dfa18);
              }
            }
            uVar24 = uStack_110;
            uVar15 = uStack_120;
            if ((long)uStack_120 <= (long)uVar1) {
              uVar15 = uVar1;
            }
            uVar20 = uStack_110;
            if ((long)uStack_110 <= (long)uVar15) {
              uVar20 = uVar15;
            }
            uVar15 = uVar24;
            if (0x2f < (long)uVar20) {
              uVar15 = (long)(uRam00000001132dfa00 - 0xc0) / 0x140 & 0xfffffffffffffff8;
              if ((long)uVar15 < 2) {
                uVar15 = 1;
              }
              if ((long)uVar15 < (long)uStack_110) {
                uVar20 = 0;
                if (uVar15 != 0) {
                  uVar20 = uStack_110 / uVar15;
                }
                uVar14 = uStack_110 - uVar20 * uVar15;
                uStack_110 = uVar15;
                if (uVar14 != 0) {
                  lVar30 = uVar20 * 8 + 8;
                  lVar21 = 0;
                  if (lVar30 != 0) {
                    lVar21 = (long)(uVar15 + ~uVar14) / lVar30;
                  }
                  uStack_110 = uVar15 + lVar21 * -8;
                }
              }
              uVar20 = (uRam00000001132dfa00 - 0xc0) + uStack_120 * uStack_110 * -8;
              if ((long)uVar20 < (long)(uStack_110 * 0x20)) {
                uVar14 = 0;
                if (uVar15 << 5 != 0) {
                  uVar14 = 0x480000 / (uVar15 << 5);
                }
              }
              else {
                uVar14 = 0;
                if (uStack_110 << 3 != 0) {
                  uVar14 = uVar20 / (uStack_110 << 3);
                }
              }
              uVar15 = 0;
              if (uStack_110 << 4 != 0) {
                uVar15 = 0x180000 / (uStack_110 << 4);
              }
              if ((long)uVar15 <= (long)uVar14) {
                uVar14 = uVar15;
              }
              uVar15 = uStack_110;
              if ((uVar24 == uStack_110) && ((long)uVar1 <= (long)(uVar14 & 0xfffffffffffffffc))) {
                uVar14 = uVar24 * uVar1 * 8;
                uVar15 = uRam00000001132dfa00;
                uVar20 = uStack_120;
                if (0x400 < (long)uVar14) {
                  if (0x23f < (long)uStack_120) {
                    uVar20 = 0x240;
                  }
                  uVar15 = uRam00000001132dfa08;
                  if (lRam00000001132dfa10 == 0 || 0x8000 < uVar14) {
                    uVar15 = 0x180000;
                    uVar20 = uStack_120;
                  }
                }
                uVar14 = 0;
                if (uVar24 * 0x18 != 0) {
                  uVar14 = uVar15 / (uVar24 * 0x18);
                }
                if ((long)uVar14 <= (long)uVar20) {
                  uVar20 = uVar14;
                }
                if ((long)uVar20 < 7) {
                  uVar15 = uVar24;
                  if (uVar20 == 0) goto LAB_10992e1a4;
                }
                else {
                  uVar20 = ((uVar20 / 6) * 2 + uVar20 / 6) * 2;
                }
                lVar30 = 0;
                if (uVar20 != 0) {
                  lVar30 = (long)uStack_120 / (long)uVar20;
                }
                lVar21 = uStack_120 - lVar30 * uVar20;
                uVar15 = uVar24;
                uStack_120 = uVar20;
                if (lVar21 != 0) {
                  lVar31 = lVar30 * 6 + 6;
                  lVar30 = 0;
                  if (lVar31 != 0) {
                    lVar30 = (long)(uVar20 - lVar21) / lVar31;
                  }
                  uStack_120 = uVar20 + lVar30 * -6;
                }
              }
            }
LAB_10992e1a4:
            lStack_108 = uStack_120 * uVar15;
            lStack_100 = uStack_118 * uVar15;
            FUN_10990a09c(uVar1,uVar11,lVar16,plVar4[3],lVar12,1,plVar4[3],&pdStack_130);
            _free(pdStack_130);
            _free(lStack_128);
          }
          pdStack_140 = (double *)0xbff0000000000000;
          pdStack_130 = (double *)0x0;
          lStack_128 = 0;
          uStack_120 = uVar11;
          uStack_118 = uVar11;
          uStack_110 = uVar1;
          if ((bRam00000001132dfa18 & 1) == 0) {
            iVar6 = 0x132dfa18;
            ___cxa_guard_acquire();
            if (iVar6 != 0) {
              uRam00000001132dfa08 = 0x80000;
              uRam00000001132dfa00 = 0x4000;
              lRam00000001132dfa10 = 0x80000;
              ___cxa_guard_release(0x1132dfa18);
            }
          }
          uVar24 = uStack_110;
          uVar15 = uStack_120;
          if ((long)uStack_120 <= (long)uVar11) {
            uVar15 = uVar11;
          }
          uVar20 = uStack_110;
          if ((long)uStack_110 <= (long)uVar15) {
            uVar20 = uVar15;
          }
          uVar15 = uVar24;
          if (0x2f < uVar20) {
            uVar15 = (long)(uRam00000001132dfa00 - 0xc0) / 0x50 & 0xfffffffffffffff8;
            if ((long)uVar15 < 2) {
              uVar15 = 1;
            }
            if ((long)uVar15 < (long)uStack_110) {
              uVar20 = 0;
              if (uVar15 != 0) {
                uVar20 = uStack_110 / uVar15;
              }
              uVar14 = uStack_110 - uVar20 * uVar15;
              uStack_110 = uVar15;
              if (uVar14 != 0) {
                lVar16 = uVar20 * 8 + 8;
                lVar30 = 0;
                if (lVar16 != 0) {
                  lVar30 = (long)(uVar15 + ~uVar14) / lVar16;
                }
                uStack_110 = uVar15 + lVar30 * -8;
              }
            }
            uVar20 = (uRam00000001132dfa00 - 0xc0) + uStack_120 * uStack_110 * -8;
            if ((long)uVar20 < (long)(uStack_110 * 0x20)) {
              uVar14 = 0;
              if (uVar15 << 5 != 0) {
                uVar14 = 0x480000 / (uVar15 << 5);
              }
            }
            else {
              uVar14 = 0;
              if (uStack_110 << 3 != 0) {
                uVar14 = uVar20 / (uStack_110 << 3);
              }
            }
            uVar15 = 0;
            if (uStack_110 << 4 != 0) {
              uVar15 = 0x180000 / (uStack_110 << 4);
            }
            if ((long)uVar15 <= (long)uVar14) {
              uVar14 = uVar15;
            }
            uVar15 = uStack_110;
            if ((uVar24 == uStack_110) && ((long)uVar11 <= (long)(uVar14 & 0xfffffffffffffffc))) {
              uVar14 = uVar24 * uVar11 * 8;
              uVar15 = uRam00000001132dfa00;
              uVar20 = uStack_120;
              if (0x400 < (long)uVar14) {
                if (0x23f < (long)uStack_120) {
                  uVar20 = 0x240;
                }
                uVar15 = uRam00000001132dfa08;
                if (lRam00000001132dfa10 == 0 || 0x8000 < uVar14) {
                  uVar15 = 0x180000;
                  uVar20 = uStack_120;
                }
              }
              uVar14 = 0;
              if (uVar24 * 0x18 != 0) {
                uVar14 = uVar15 / (uVar24 * 0x18);
              }
              if ((long)uVar14 <= (long)uVar20) {
                uVar20 = uVar14;
              }
              if ((long)uVar20 < 7) {
                uVar15 = uVar24;
                if (uVar20 == 0) goto LAB_10992e3b4;
              }
              else {
                uVar20 = ((uVar20 / 6) * 2 + uVar20 / 6) * 2;
              }
              lVar16 = 0;
              if (uVar20 != 0) {
                lVar16 = (long)uStack_120 / (long)uVar20;
              }
              lVar30 = uStack_120 - lVar16 * uVar20;
              uVar15 = uVar24;
              uStack_120 = uVar20;
              if (lVar30 != 0) {
                lVar21 = lVar16 * 6 + 6;
                lVar16 = 0;
                if (lVar21 != 0) {
                  lVar16 = (long)(uVar20 - lVar30) / lVar21;
                }
                uStack_120 = uVar20 + lVar16 * -6;
              }
            }
          }
LAB_10992e3b4:
          lStack_108 = uStack_120 * uVar15;
          lStack_100 = uStack_118 * uVar15;
          lVar16 = plVar4[3];
          FUN_10990ae14(uVar11,uVar1,lVar12,lVar16,lVar12,lVar16,
                        lVar27 + (uVar1 + lVar7) * lVar28 * 8,1,lVar16,&pdStack_140,&pdStack_130);
          _free(pdStack_130);
          _free(lStack_128);
        }
        lVar7 = lVar7 + uVar23;
        lStack_170 = lStack_170 + uVar23 * 8;
        uVar9 = uVar9 - uVar23;
      } while (lVar7 < (long)uVar29);
    }
    iVar6 = 0;
  }
LAB_10992e4d4:
  *(int *)((long)plVar4 + 0x34) = iVar6;
  lVar7 = puVar5[1];
  puVar5[1] = plVar4;
  if (lVar7 != 0) {
    __ZdlPv();
    iVar6 = *(int *)(puVar5[1] + 0x34);
  }
  if (iVar6 == 0) {
    if (*(char *)((long)puVar3 + 0x17) < '\0') {
      puVar3[1] = 8;
      puVar3 = (undefined8 *)*puVar3;
    }
    else {
      *(undefined1 *)((long)puVar3 + 0x17) = 8;
    }
    puVar5 = (undefined8 *)0x0;
    *puVar3 = 0x2e73736563637553;
    *(undefined1 *)(puVar3 + 1) = 0;
  }
  else {
    func_0x000107c2c4d8(puVar3,&UNK_10f58b338,0x3e);
    puVar5 = (undefined8 *)0x2;
  }
  return puVar5;
LAB_10992e4cc:
  iVar6 = 1;
  goto LAB_10992e4d4;
}



/* Entry: 10992d94c; end: 10992e59f;  */

undefined8 FUN_10992d94c(long param_1,int param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  double *pdVar6;
  ulong uVar7;
  double *pdVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  double *pdVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  double *pdVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  long lStack_e0;
  double *pdStack_b0;
  long lStack_a8;
  double *pdStack_a0;
  long lStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  
  uVar28 = (ulong)param_2;
  plVar4 = (long *)0x38;
  __Znwm();
  *plVar4 = param_3;
  plVar4[1] = uVar28;
  plVar4[2] = uVar28;
  plVar4[3] = uVar28;
  *(undefined1 *)(plVar4 + 6) = 0;
  plVar4[5] = 0;
  if (param_2 < 1) {
    iVar3 = 0;
    *(undefined1 *)(plVar4 + 6) = 1;
  }
  else {
    uVar7 = 0;
    pdVar8 = (double *)(param_3 + 0x30);
    dVar31 = 0.0;
    lVar14 = -1;
    pdVar15 = (double *)(param_3 + uVar28 * 8);
    lVar24 = param_3;
    uVar21 = uVar28;
    do {
      uVar1 = uVar28 - uVar7;
      pdVar23 = (double *)(param_3 + uVar7 * uVar28 * 8 + uVar7 * 8);
      uVar13 = uVar1 + 3;
      if ((long)uVar7 <= (long)uVar28) {
        uVar13 = uVar1;
      }
      if (uVar1 + 1 < 3) {
        dVar32 = ABS(*pdVar23);
      }
      else {
        uVar9 = uVar1 - ((long)uVar1 >> 0x3f) & 0xfffffffffffffffe;
        dVar32 = ABS(*pdVar23);
        dVar34 = ABS(pdVar23[1]);
        if (3 < (long)uVar1) {
          uVar13 = uVar13 & 0xfffffffffffffffc;
          dVar33 = ABS(pdVar23[2]);
          dVar35 = ABS(pdVar23[3]);
          if (7 < uVar1) {
            lVar26 = 4;
            pdVar6 = pdVar8;
            do {
              dVar32 = dVar32 + ABS(pdVar6[-2]);
              dVar34 = dVar34 + ABS(pdVar6[-1]);
              dVar33 = dVar33 + ABS(*pdVar6);
              dVar35 = dVar35 + ABS(pdVar6[1]);
              lVar26 = lVar26 + 4;
              pdVar6 = pdVar6 + 4;
            } while (lVar26 < (long)uVar13);
          }
          dVar32 = dVar33 + dVar32;
          dVar34 = dVar35 + dVar34;
          if ((long)uVar13 < (long)uVar9) {
            dVar32 = dVar32 + ABS(pdVar23[uVar13]);
            dVar34 = dVar34 + ABS((pdVar23 + uVar13)[1]);
          }
        }
        dVar32 = dVar32 + dVar34;
        if ((long)uVar9 < (long)uVar1) {
          lVar26 = uVar21 - uVar9;
          pdVar23 = (double *)(lVar24 + ((long)uVar1 / 2) * 0x10);
          do {
            dVar32 = dVar32 + ABS(*pdVar23);
            lVar26 = lVar26 + -1;
            pdVar23 = pdVar23 + 1;
          } while (lVar26 != 0);
        }
      }
      if (uVar7 == 0) {
        dVar34 = 0.0;
      }
      else {
        dVar34 = ABS(*(double *)(param_3 + uVar7 * 8));
        pdVar23 = pdVar15;
        lVar26 = lVar14;
        if (uVar7 != 1) {
          do {
            dVar34 = dVar34 + ABS(*pdVar23);
            lVar26 = lVar26 + -1;
            pdVar23 = pdVar23 + uVar28;
          } while (lVar26 != 0);
        }
      }
      dVar32 = dVar32 + dVar34;
      if (dVar31 < dVar32) {
        plVar4[5] = (long)dVar32;
        dVar31 = dVar32;
      }
      uVar7 = uVar7 + 1;
      pdVar8 = pdVar8 + uVar28 + 1;
      uVar21 = uVar21 - 1;
      lVar24 = lVar24 + uVar28 * 8 + 8;
      lVar14 = lVar14 + 1;
      pdVar15 = pdVar15 + 1;
    } while (uVar7 != uVar28);
    *(undefined1 *)(plVar4 + 6) = 1;
    if (param_2 < 0x20) {
      lVar24 = 0;
      lVar14 = -1;
      lVar26 = 8;
      uVar21 = 0;
      uVar7 = uVar28;
      do {
        uVar7 = uVar7 - 1;
        lVar27 = *plVar4;
        lVar29 = plVar4[3];
        pdVar8 = (double *)(lVar27 + uVar21 * 8);
        lVar10 = lVar27 + lVar29 * uVar21 * 8;
        dVar31 = *(double *)(lVar10 + uVar21 * 8);
        if (uVar21 != 0) {
          dVar32 = *pdVar8 * *pdVar8;
          if (uVar21 != 1) {
            pdVar15 = (double *)(lVar27 + lVar24 + lVar29 * 8);
            lVar19 = lVar14;
            do {
              dVar32 = dVar32 + *pdVar15 * *pdVar15;
              pdVar15 = pdVar15 + lVar29;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
          }
          dVar31 = dVar31 - dVar32;
        }
        if (dVar31 <= 0.0) goto LAB_10992e4cc;
        uVar1 = ~uVar21 + uVar28;
        uVar13 = uVar21 + 1;
        pdVar15 = (double *)(lVar27 + uVar13 * 8);
        pdVar23 = pdVar15 + lVar29 * uVar21;
        dVar31 = SQRT(dVar31);
        *(double *)(lVar10 + uVar21 * 8) = dVar31;
        if ((uVar21 == 0) || ((long)uVar1 < 1)) {
          if (0 < (long)uVar1) goto LAB_10992dc48;
        }
        else {
          if (uVar1 == 1) {
            dVar32 = *pdVar15 * *pdVar8;
            if (1 < uVar21) {
              lVar10 = lVar27 + lVar29 * 8;
              lVar19 = lVar14;
              do {
                dVar32 = dVar32 + ((double *)(lVar10 + lVar24))[1] * *(double *)(lVar10 + lVar24);
                lVar10 = lVar10 + lVar29 * 8;
                lVar19 = lVar19 + -1;
              } while (lVar19 != 0);
            }
            *pdVar23 = *pdVar23 - dVar32;
          }
          else {
            pdStack_b0 = pdVar8;
            lStack_a8 = lVar29;
            pdStack_a0 = pdVar15;
            lStack_98 = lVar29;
            FUN_109909a3c(0xbff0000000000000,uVar1,uVar21,&pdStack_a0,&pdStack_b0,pdVar23,1);
          }
LAB_10992dc48:
          uVar21 = (ulong)pdVar23 >> 3 & 1;
          if (((ulong)pdVar23 & 7) != 0) {
            uVar21 = uVar1;
          }
          if (uVar21 != 0) {
            pdVar8 = (double *)(lVar27 + lVar26 + lVar29 * lVar24);
            uVar9 = uVar21;
            do {
              *pdVar8 = *pdVar8 / dVar31;
              uVar9 = uVar9 - 1;
              pdVar8 = pdVar8 + 1;
            } while (uVar9 != 0);
          }
          lVar19 = uVar1 - uVar21;
          uVar9 = lVar19 - (lVar19 >> 0x3f) & 0xfffffffffffffffe;
          lVar10 = uVar9 + uVar21;
          if (1 < lVar19) {
            lVar30 = lVar27 + lVar29 * lVar24 + uVar21 * 8;
            uVar22 = uVar21;
            do {
              dVar32 = *(double *)(lVar30 + lVar26);
              ((double *)(lVar30 + lVar26))[1] = ((double *)(lVar30 + lVar26))[1] / dVar31;
              *(double *)(lVar30 + lVar26) = dVar32 / dVar31;
              uVar22 = uVar22 + 2;
              lVar30 = lVar30 + 0x10;
            } while ((long)uVar22 < lVar10);
          }
          if (lVar10 < (long)uVar1) {
            lVar10 = (uVar7 - uVar21) - uVar9;
            lVar27 = lVar27 + lVar29 * lVar24 + (lVar19 / 2) * 0x10 + uVar21 * 8;
            do {
              *(double *)(lVar27 + lVar26) = *(double *)(lVar27 + lVar26) / dVar31;
              lVar27 = lVar27 + 8;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
        }
        lVar14 = lVar14 + 1;
        lVar24 = lVar24 + 8;
        lVar26 = lVar26 + 8;
        uVar21 = uVar13;
      } while (uVar13 != uVar28);
    }
    else {
      lStack_e0 = 0;
      lVar14 = 0;
      uVar7 = uVar28 >> 3 & 0xffffff0;
      if (0x7f < uVar7) {
        uVar7 = 0x80;
      }
      uVar21 = 8;
      if ((uVar28 >> 3 & 0xffffff0) != 0) {
        uVar21 = uVar7;
      }
      uVar7 = uVar28;
      do {
        uVar13 = uVar21;
        if ((long)uVar7 <= (long)uVar21) {
          uVar13 = uVar7;
        }
        uVar9 = uVar28 - lVar14;
        uVar1 = uVar9;
        if ((long)uVar21 <= (long)uVar9) {
          uVar1 = uVar21;
        }
        lVar26 = *plVar4;
        lVar27 = plVar4[3];
        lVar24 = lVar26 + lVar14 * 8 + lVar27 * lVar14 * 8;
        if (0 < (long)uVar1) {
          lVar19 = 0;
          lVar30 = -uVar13;
          lVar29 = lVar26 + lStack_e0 + lStack_e0 * lVar27;
          lVar10 = -1;
          uVar13 = 0;
          do {
            lVar30 = lVar30 + 1;
            lVar25 = plVar4[3];
            pdVar8 = (double *)(lVar24 + uVar13 * 8);
            lVar11 = lVar24 + lVar25 * uVar13 * 8;
            dVar31 = *(double *)(lVar11 + uVar13 * 8);
            if (uVar13 != 0) {
              dVar32 = *pdVar8 * *pdVar8;
              if (uVar13 != 1) {
                pdVar15 = (double *)(lVar29 + lVar25 * 8);
                lVar16 = lVar10;
                do {
                  dVar32 = dVar32 + *pdVar15 * *pdVar15;
                  pdVar15 = pdVar15 + lVar25;
                  lVar16 = lVar16 + -1;
                } while (lVar16 != 0);
              }
              dVar31 = dVar31 - dVar32;
            }
            if (dVar31 <= 0.0) goto LAB_10992e4cc;
            uVar18 = uVar1 + ~uVar13;
            uVar22 = uVar13 + 1;
            pdVar15 = (double *)(lVar24 + uVar22 * 8);
            pdVar23 = pdVar15 + lVar25 * uVar13;
            dVar31 = SQRT(dVar31);
            *(double *)(lVar11 + uVar13 * 8) = dVar31;
            if ((uVar13 == 0) || ((long)uVar18 < 1)) {
              if (0 < (long)uVar18) goto LAB_10992deec;
            }
            else {
              if (uVar18 == 1) {
                dVar32 = *pdVar15 * *pdVar8;
                if (1 < uVar13) {
                  lVar11 = lVar25 * 8;
                  lVar16 = lVar10;
                  do {
                    dVar32 = dVar32 + ((double *)(lVar29 + lVar11))[1] *
                                      *(double *)(lVar29 + lVar11);
                    lVar11 = lVar11 + lVar25 * 8;
                    lVar16 = lVar16 + -1;
                  } while (lVar16 != 0);
                }
                *pdVar23 = *pdVar23 - dVar32;
              }
              else {
                pdStack_b0 = pdVar8;
                lStack_a8 = lVar25;
                pdStack_a0 = pdVar15;
                lStack_98 = lVar25;
                FUN_109909a3c(0xbff0000000000000,uVar18,uVar13,&pdStack_a0,&pdStack_b0,pdVar23,1);
              }
LAB_10992deec:
              uVar13 = (ulong)pdVar23 >> 3 & 1;
              if (((ulong)pdVar23 & 7) != 0) {
                uVar13 = uVar18;
              }
              if (uVar13 != 0) {
                lVar11 = lVar25 * lVar19;
                uVar12 = uVar13;
                do {
                  lVar11 = lVar11 + 8;
                  *(double *)(lVar29 + lVar11) = *(double *)(lVar29 + lVar11) / dVar31;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar16 = uVar18 - uVar13;
              uVar12 = lVar16 - (lVar16 >> 0x3f) & 0xfffffffffffffffe;
              lVar11 = uVar12 + uVar13;
              if (1 < lVar16) {
                lVar17 = lVar25 * lVar19 + uVar13 * 8 + 8;
                uVar20 = uVar13;
                do {
                  dVar32 = *(double *)(lVar29 + lVar17);
                  ((double *)(lVar29 + lVar17))[1] = ((double *)(lVar29 + lVar17))[1] / dVar31;
                  *(double *)(lVar29 + lVar17) = dVar32 / dVar31;
                  uVar20 = uVar20 + 2;
                  lVar17 = lVar17 + 0x10;
                } while ((long)uVar20 < lVar11);
              }
              if (lVar11 < (long)uVar18) {
                lVar11 = uVar13 + lVar30 + uVar12;
                lVar25 = lVar25 * lVar19 + (lVar16 / 2) * 0x10 + uVar13 * 8;
                do {
                  lVar25 = lVar25 + 8;
                  *(double *)(lVar29 + lVar25) = *(double *)(lVar29 + lVar25) / dVar31;
                  bVar2 = lVar11 != -1;
                  lVar11 = lVar11 + 1;
                } while (bVar2);
              }
            }
            lVar10 = lVar10 + 1;
            lVar29 = lVar29 + 8;
            lVar19 = lVar19 + 8;
            uVar13 = uVar22;
          } while (uVar1 != uVar22);
        }
        uVar9 = uVar9 - uVar1;
        if (0 < (long)uVar9) {
          lVar26 = lVar26 + (uVar1 + lVar14) * 8;
          lVar10 = lVar26 + lVar27 * lVar14 * 8;
          uStack_90 = uVar9;
          uStack_80 = uVar1;
          if (uVar1 != 0) {
            pdStack_a0 = (double *)0x0;
            lStack_98 = 0;
            uStack_88 = uVar1;
            if ((bRam00000001132dfa18 & 1) == 0) {
              iVar3 = 0x132dfa18;
              ___cxa_guard_acquire();
              if (iVar3 != 0) {
                uRam00000001132dfa08 = 0x80000;
                uRam00000001132dfa00 = 0x4000;
                lRam00000001132dfa10 = 0x80000;
                ___cxa_guard_release(0x1132dfa18);
              }
            }
            uVar22 = uStack_80;
            uVar13 = uStack_90;
            if ((long)uStack_90 <= (long)uVar1) {
              uVar13 = uVar1;
            }
            uVar18 = uStack_80;
            if ((long)uStack_80 <= (long)uVar13) {
              uVar18 = uVar13;
            }
            uVar13 = uVar22;
            if (0x2f < (long)uVar18) {
              uVar13 = (long)(uRam00000001132dfa00 - 0xc0) / 0x140 & 0xfffffffffffffff8;
              if ((long)uVar13 < 2) {
                uVar13 = 1;
              }
              if ((long)uVar13 < (long)uStack_80) {
                uVar18 = 0;
                if (uVar13 != 0) {
                  uVar18 = uStack_80 / uVar13;
                }
                uVar12 = uStack_80 - uVar18 * uVar13;
                uStack_80 = uVar13;
                if (uVar12 != 0) {
                  lVar29 = uVar18 * 8 + 8;
                  lVar19 = 0;
                  if (lVar29 != 0) {
                    lVar19 = (long)(uVar13 + ~uVar12) / lVar29;
                  }
                  uStack_80 = uVar13 + lVar19 * -8;
                }
              }
              uVar18 = (uRam00000001132dfa00 - 0xc0) + uStack_90 * uStack_80 * -8;
              if ((long)uVar18 < (long)(uStack_80 * 0x20)) {
                uVar12 = 0;
                if (uVar13 << 5 != 0) {
                  uVar12 = 0x480000 / (uVar13 << 5);
                }
              }
              else {
                uVar12 = 0;
                if (uStack_80 << 3 != 0) {
                  uVar12 = uVar18 / (uStack_80 << 3);
                }
              }
              uVar13 = 0;
              if (uStack_80 << 4 != 0) {
                uVar13 = 0x180000 / (uStack_80 << 4);
              }
              if ((long)uVar13 <= (long)uVar12) {
                uVar12 = uVar13;
              }
              uVar13 = uStack_80;
              if ((uVar22 == uStack_80) && ((long)uVar1 <= (long)(uVar12 & 0xfffffffffffffffc))) {
                uVar12 = uVar22 * uVar1 * 8;
                uVar13 = uRam00000001132dfa00;
                uVar18 = uStack_90;
                if (0x400 < (long)uVar12) {
                  if (0x23f < (long)uStack_90) {
                    uVar18 = 0x240;
                  }
                  uVar13 = uRam00000001132dfa08;
                  if (lRam00000001132dfa10 == 0 || 0x8000 < uVar12) {
                    uVar13 = 0x180000;
                    uVar18 = uStack_90;
                  }
                }
                uVar12 = 0;
                if (uVar22 * 0x18 != 0) {
                  uVar12 = uVar13 / (uVar22 * 0x18);
                }
                if ((long)uVar12 <= (long)uVar18) {
                  uVar18 = uVar12;
                }
                if ((long)uVar18 < 7) {
                  uVar13 = uVar22;
                  if (uVar18 == 0) goto LAB_10992e1a4;
                }
                else {
                  uVar18 = ((uVar18 / 6) * 2 + uVar18 / 6) * 2;
                }
                lVar29 = 0;
                if (uVar18 != 0) {
                  lVar29 = (long)uStack_90 / (long)uVar18;
                }
                lVar19 = uStack_90 - lVar29 * uVar18;
                uVar13 = uVar22;
                uStack_90 = uVar18;
                if (lVar19 != 0) {
                  lVar30 = lVar29 * 6 + 6;
                  lVar29 = 0;
                  if (lVar30 != 0) {
                    lVar29 = (long)(uVar18 - lVar19) / lVar30;
                  }
                  uStack_90 = uVar18 + lVar29 * -6;
                }
              }
            }
LAB_10992e1a4:
            lStack_78 = uStack_90 * uVar13;
            lStack_70 = uStack_88 * uVar13;
            FUN_10990a09c(uVar1,uVar9,lVar24,plVar4[3],lVar10,1,plVar4[3],&pdStack_a0);
            _free(pdStack_a0);
            _free(lStack_98);
          }
          pdStack_b0 = (double *)0xbff0000000000000;
          pdStack_a0 = (double *)0x0;
          lStack_98 = 0;
          uStack_90 = uVar9;
          uStack_88 = uVar9;
          uStack_80 = uVar1;
          if ((bRam00000001132dfa18 & 1) == 0) {
            iVar3 = 0x132dfa18;
            ___cxa_guard_acquire();
            if (iVar3 != 0) {
              uRam00000001132dfa08 = 0x80000;
              uRam00000001132dfa00 = 0x4000;
              lRam00000001132dfa10 = 0x80000;
              ___cxa_guard_release(0x1132dfa18);
            }
          }
          uVar22 = uStack_80;
          uVar13 = uStack_90;
          if ((long)uStack_90 <= (long)uVar9) {
            uVar13 = uVar9;
          }
          uVar18 = uStack_80;
          if ((long)uStack_80 <= (long)uVar13) {
            uVar18 = uVar13;
          }
          uVar13 = uVar22;
          if (0x2f < uVar18) {
            uVar13 = (long)(uRam00000001132dfa00 - 0xc0) / 0x50 & 0xfffffffffffffff8;
            if ((long)uVar13 < 2) {
              uVar13 = 1;
            }
            if ((long)uVar13 < (long)uStack_80) {
              uVar18 = 0;
              if (uVar13 != 0) {
                uVar18 = uStack_80 / uVar13;
              }
              uVar12 = uStack_80 - uVar18 * uVar13;
              uStack_80 = uVar13;
              if (uVar12 != 0) {
                lVar24 = uVar18 * 8 + 8;
                lVar29 = 0;
                if (lVar24 != 0) {
                  lVar29 = (long)(uVar13 + ~uVar12) / lVar24;
                }
                uStack_80 = uVar13 + lVar29 * -8;
              }
            }
            uVar18 = (uRam00000001132dfa00 - 0xc0) + uStack_90 * uStack_80 * -8;
            if ((long)uVar18 < (long)(uStack_80 * 0x20)) {
              uVar12 = 0;
              if (uVar13 << 5 != 0) {
                uVar12 = 0x480000 / (uVar13 << 5);
              }
            }
            else {
              uVar12 = 0;
              if (uStack_80 << 3 != 0) {
                uVar12 = uVar18 / (uStack_80 << 3);
              }
            }
            uVar13 = 0;
            if (uStack_80 << 4 != 0) {
              uVar13 = 0x180000 / (uStack_80 << 4);
            }
            if ((long)uVar13 <= (long)uVar12) {
              uVar12 = uVar13;
            }
            uVar13 = uStack_80;
            if ((uVar22 == uStack_80) && ((long)uVar9 <= (long)(uVar12 & 0xfffffffffffffffc))) {
              uVar12 = uVar22 * uVar9 * 8;
              uVar13 = uRam00000001132dfa00;
              uVar18 = uStack_90;
              if (0x400 < (long)uVar12) {
                if (0x23f < (long)uStack_90) {
                  uVar18 = 0x240;
                }
                uVar13 = uRam00000001132dfa08;
                if (lRam00000001132dfa10 == 0 || 0x8000 < uVar12) {
                  uVar13 = 0x180000;
                  uVar18 = uStack_90;
                }
              }
              uVar12 = 0;
              if (uVar22 * 0x18 != 0) {
                uVar12 = uVar13 / (uVar22 * 0x18);
              }
              if ((long)uVar12 <= (long)uVar18) {
                uVar18 = uVar12;
              }
              if ((long)uVar18 < 7) {
                uVar13 = uVar22;
                if (uVar18 == 0) goto LAB_10992e3b4;
              }
              else {
                uVar18 = ((uVar18 / 6) * 2 + uVar18 / 6) * 2;
              }
              lVar24 = 0;
              if (uVar18 != 0) {
                lVar24 = (long)uStack_90 / (long)uVar18;
              }
              lVar29 = uStack_90 - lVar24 * uVar18;
              uVar13 = uVar22;
              uStack_90 = uVar18;
              if (lVar29 != 0) {
                lVar19 = lVar24 * 6 + 6;
                lVar24 = 0;
                if (lVar19 != 0) {
                  lVar24 = (long)(uVar18 - lVar29) / lVar19;
                }
                uStack_90 = uVar18 + lVar24 * -6;
              }
            }
          }
LAB_10992e3b4:
          lStack_78 = uStack_90 * uVar13;
          lStack_70 = uStack_88 * uVar13;
          lVar24 = plVar4[3];
          FUN_10990ae14(uVar9,uVar1,lVar10,lVar24,lVar10,lVar24,
                        lVar26 + (uVar1 + lVar14) * lVar27 * 8,1,lVar24,&pdStack_b0,&pdStack_a0);
          _free(pdStack_a0);
          _free(lStack_98);
        }
        lVar14 = lVar14 + uVar21;
        lStack_e0 = lStack_e0 + uVar21 * 8;
        uVar7 = uVar7 - uVar21;
      } while (lVar14 < (long)uVar28);
    }
    iVar3 = 0;
  }
LAB_10992e4d4:
  *(int *)((long)plVar4 + 0x34) = iVar3;
  lVar14 = *(long *)(param_1 + 8);
  *(long **)(param_1 + 8) = plVar4;
  if (lVar14 != 0) {
    __ZdlPv();
    iVar3 = *(int *)(*(long *)(param_1 + 8) + 0x34);
  }
  if (iVar3 == 0) {
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      param_4[1] = 8;
      param_4 = (undefined8 *)*param_4;
    }
    else {
      *(undefined1 *)((long)param_4 + 0x17) = 8;
    }
    uVar5 = 0;
    *param_4 = 0x2e73736563637553;
    *(undefined1 *)(param_4 + 1) = 0;
  }
  else {
    func_0x000107c2c4d8(param_4,&UNK_10f58b338,0x3e);
    uVar5 = 2;
  }
  return uVar5;
LAB_10992e4cc:
  iVar3 = 1;
  goto LAB_10992e4d4;
}



/* Entry: 10992e5a0; end: 10992e6ff;  */

undefined8 FUN_10992e5a0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  lVar8 = *(long *)(param_1 + 8);
  if (*(int *)(lVar8 + 0x34) == 0) {
    uVar9 = *(ulong *)(lVar8 + 0x10);
    uVar2 = (ulong)param_3 >> 3 & 1;
    if ((long)uVar9 <= (long)uVar2) {
      uVar2 = uVar9;
    }
    if (((ulong)param_3 & 7) != 0) {
      uVar2 = uVar9;
    }
    lVar4 = uVar9 - uVar2;
    puVar3 = param_3;
    puVar6 = param_2;
    uVar7 = uVar2;
    if (0 < (long)uVar2) {
      do {
        *puVar3 = *puVar6;
        uVar7 = uVar7 - 1;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar7 != 0);
    }
    lVar5 = (lVar4 - (lVar4 >> 0x3f) & 0xfffffffffffffffeU) + uVar2;
    if (1 < lVar4) {
      puVar3 = param_2 + uVar2;
      uVar7 = uVar2;
      puVar6 = param_3 + uVar2;
      do {
        uVar1 = *puVar3;
        puVar6[1] = puVar3[1];
        *puVar6 = uVar1;
        uVar7 = uVar7 + 2;
        puVar3 = puVar3 + 2;
        puVar6 = puVar6 + 2;
      } while ((long)uVar7 < lVar5);
    }
    if (lVar5 < (long)uVar9) {
      lVar5 = lVar4 % 2;
      puVar3 = param_2 + uVar2 + (lVar4 / 2) * 2;
      puVar6 = param_3 + uVar2 + (lVar4 / 2) * 2;
      do {
        *puVar6 = *puVar3;
        lVar5 = lVar5 + -1;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      } while (lVar5 != 0);
    }
    if (*(long *)(lVar8 + 0x10) != 0) {
      FUN_10992e760(lVar8,param_3,uVar9);
    }
    if (*(long *)(lVar8 + 8) != 0) {
      FUN_10992ea5c(lVar8,param_3,uVar9);
    }
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      param_4[1] = 8;
      param_4 = (undefined8 *)*param_4;
    }
    else {
      *(undefined1 *)((long)param_4 + 0x17) = 8;
    }
    uVar1 = 0;
    *param_4 = 0x2e73736563637553;
    *(undefined1 *)(param_4 + 1) = 0;
  }
  else {
    func_0x000107c2c4d8(param_4,&UNK_10f58b338,0x3e);
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 10992e700; end: 10992e75f;  */

long FUN_10992e700(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10992e760; end: 10992ea5b;  */

double * FUN_10992e760(long *param_1,double *param_2,long *param_3)

{
  bool bVar1;
  ulong uVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double **ppdVar6;
  double **ppdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  ulong uVar12;
  double *pdVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  double *pdVar17;
  long lVar18;
  long lVar19;
  double *pdVar20;
  ulong uVar21;
  ulong uVar22;
  double *pdVar23;
  long lVar24;
  double *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  double dVar25;
  ulong unaff_x26;
  double *unaff_x27;
  ulong unaff_x28;
  double dVar26;
  double dVar27;
  double dVar28;
  double *pdStack_a0;
  long *plStack_98;
  long lStack_90;
  double *pdStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long *plStack_70;
  long lStack_68;
  
  ppdVar6 = &pdStack_a0;
  ppdVar7 = &pdStack_a0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((ulong)param_3 >> 0x3d == 0) {
    plStack_98 = param_3;
    if (param_2 == (double *)0x0) {
      pdVar9 = (double *)((long)param_3 << 3);
      if (param_3 < (long *)0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar24 = -((long)pdVar9 + 0x1eU & 0xfffffffffffffff0);
        ppdVar6 = (double **)((long)&pdStack_a0 + lVar24);
        pdVar9 = (double *)((long)&pdStack_a0 + lVar24);
        pdVar8 = pdVar9;
      }
      else {
        _malloc();
        pdVar8 = pdVar9;
        unaff_x22 = param_1;
        if (pdVar9 == (double *)0x0) goto LAB_10992ea18;
      }
    }
    else {
      pdVar9 = (double *)0x0;
      ppdVar6 = &pdStack_a0;
      pdVar8 = param_2;
    }
    unaff_x23 = param_1[2];
    pdStack_a0 = pdVar9;
    if (0 < (long)unaff_x23) {
      unaff_x24 = 0;
      unaff_x25 = *param_1;
      unaff_x26 = (ulong)pdVar8 & 7;
      unaff_x27 = (double *)(unaff_x25 + 8);
      param_1 = (long *)param_1[3];
      lStack_90 = (long)param_1 * 0x40 + 0x40;
      unaff_x20 = (long)param_1 * 8 + 8;
      unaff_x19 = pdVar8 + 1;
      uVar12 = unaff_x23;
      do {
        unaff_x28 = uVar12 - 8;
        uVar16 = uVar12;
        if (7 < (long)uVar12) {
          uVar16 = 8;
        }
        if ((long)uVar12 < 2) {
          uVar12 = 1;
        }
        if (7 < (long)uVar12) {
          uVar12 = 8;
        }
        pdVar9 = (double *)(unaff_x23 - unaff_x24);
        param_2 = pdVar9;
        if (7 < (long)pdVar9) {
          param_2 = (double *)0x8;
        }
        if (0 < (long)pdVar9) {
          uVar14 = 0;
          pdVar9 = unaff_x19;
          pdVar10 = unaff_x27;
          do {
            uVar16 = uVar16 - 1;
            lVar24 = uVar14 + unaff_x24;
            if (pdVar8[lVar24] != 0.0) {
              dVar26 = pdVar8[lVar24] /
                       *(double *)(unaff_x25 + lVar24 * (long)param_1 * 8 + lVar24 * 8);
              pdVar8[lVar24] = dVar26;
              uVar2 = (long)param_2 + ~uVar14;
              if (0 < (long)uVar2) {
                uVar21 = (ulong)((int)pdVar8 + (int)lVar24 * 8 + 8U >> 3) & 1;
                pdVar11 = pdVar9;
                pdVar5 = pdVar10;
                uVar22 = uVar21;
                if (unaff_x26 != 0) {
                  uVar21 = uVar2;
                  uVar22 = uVar2;
                }
                for (; uVar21 != 0; uVar21 = uVar21 - 1) {
                  *pdVar11 = *pdVar11 - dVar26 * *pdVar5;
                  pdVar11 = pdVar11 + 1;
                  pdVar5 = pdVar5 + 1;
                }
                lVar24 = uVar2 - uVar22;
                uVar21 = (lVar24 - (lVar24 >> 0x3f) & 0xfffffffffffffffeU) + uVar22;
                if (1 < lVar24) {
                  lVar24 = uVar22 << 3;
                  do {
                    dVar25 = *(double *)((long)pdVar10 + lVar24);
                    dVar27 = *(double *)((long)pdVar9 + lVar24);
                    ((double *)((long)pdVar9 + lVar24))[1] =
                         ((double *)((long)pdVar9 + lVar24))[1] -
                         ((double *)((long)pdVar10 + lVar24))[1] * dVar26;
                    *(double *)((long)pdVar9 + lVar24) = dVar27 - dVar25 * dVar26;
                    uVar22 = uVar22 + 2;
                    lVar24 = lVar24 + 0x10;
                  } while ((long)uVar22 < (long)uVar21);
                }
                if ((long)uVar21 < (long)uVar2) {
                  do {
                    pdVar9[uVar21] = pdVar9[uVar21] - dVar26 * pdVar10[uVar21];
                    uVar21 = uVar21 + 1;
                  } while (uVar16 != uVar21);
                }
              }
            }
            uVar14 = uVar14 + 1;
            pdVar10 = pdVar10 + (long)param_1 + 1;
            pdVar9 = pdVar9 + 1;
          } while (uVar14 != uVar12);
        }
        lVar24 = (long)param_2 + unaff_x24;
        pdVar9 = (double *)(unaff_x23 - lVar24);
        if (pdVar9 != (double *)0x0 && lVar24 <= (long)unaff_x23) {
          lStack_78 = unaff_x25 + unaff_x24 * (long)param_1 * 8 + lVar24 * 8;
          pdStack_88 = pdVar8 + unaff_x24;
          uStack_80 = 1;
          param_3 = &lStack_78;
          plStack_70 = param_1;
          FUN_109464f74(0xbff0000000000000);
        }
        unaff_x24 = unaff_x24 + 8;
        unaff_x27 = (double *)((long)unaff_x27 + lStack_90);
        unaff_x19 = unaff_x19 + 8;
        uVar12 = unaff_x28;
      } while (unaff_x24 < (long)unaff_x23);
    }
    if ((long *)0x4000 < plStack_98) {
      pdVar9 = pdStack_a0;
      _free();
    }
    ppdVar7 = ppdVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return pdVar9;
    }
  }
  else {
LAB_10992ea18:
    param_1 = unaff_x22;
    pdVar9 = (double *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    param_2 = (double *)PTR___ZTISt9bad_alloc_110346a68;
    param_3 = (long *)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if ((long *)0x4000 < plStack_98) {
    _free(pdStack_a0);
  }
  pdVar10 = pdVar9;
  __Unwind_Resume();
  *(ulong *)((long)ppdVar7 + -0x60) = unaff_x28;
  *(double **)((long)ppdVar7 + -0x58) = unaff_x27;
  *(ulong *)((long)ppdVar7 + -0x50) = unaff_x26;
  *(long *)((long)ppdVar7 + -0x48) = unaff_x25;
  *(long *)((long)ppdVar7 + -0x40) = unaff_x24;
  *(ulong *)((long)ppdVar7 + -0x38) = unaff_x23;
  *(long **)((long)ppdVar7 + -0x30) = param_1;
  *(double **)((long)ppdVar7 + -0x28) = pdVar9;
  *(long *)((long)ppdVar7 + -0x20) = unaff_x20;
  *(double **)((long)ppdVar7 + -0x18) = unaff_x19;
  *(undefined1 **)((long)ppdVar7 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)ppdVar7 + -8) = FUN_10992ea5c;
  pdVar9 = (double *)((long)ppdVar7 + -0xa0);
  pdVar8 = (double *)((long)ppdVar7 + -0xa0);
  *(undefined8 *)((long)ppdVar7 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((ulong)param_3 >> 0x3d == 0) {
    *(long **)((long)ppdVar7 + -0x90) = param_3;
    if (param_2 == (double *)0x0) {
      pdVar11 = (double *)((long)param_3 << 3);
      if (param_3 < (long *)0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        pdVar9 = (double *)((long)ppdVar7 + (-0xa0 - ((long)pdVar11 + 0x1eU & 0xfffffffffffffff0)));
        *(double **)((long)ppdVar7 + -0x98) = pdVar9;
        param_2 = pdVar9;
      }
      else {
        _malloc();
        *(double **)((long)ppdVar7 + -0x98) = pdVar11;
        param_2 = pdVar11;
        if (pdVar11 == (double *)0x0) goto LAB_10992ecd8;
      }
    }
    else {
      *(undefined8 *)((long)ppdVar7 + -0x98) = 0;
      pdVar9 = (double *)((long)ppdVar7 + -0xa0);
      pdVar11 = pdVar10;
    }
    unaff_x19 = (double *)pdVar10[1];
    if (0 < (long)unaff_x19) {
      dVar26 = *pdVar10;
      dVar25 = pdVar10[3];
      pdVar8 = param_2 + (long)unaff_x19;
      lVar24 = (long)dVar26 + (long)dVar25 * ((long)unaff_x19 + -1) * 8 + (long)unaff_x19 * 8;
      unaff_x20 = ~(ulong)dVar25 * 8;
      pdVar10 = unaff_x19;
      do {
        pdVar5 = pdVar10;
        if ((double *)0x7 < pdVar10) {
          pdVar5 = (double *)0x8;
        }
        if ((long)unaff_x19 - (long)pdVar10 != 0) {
          *(long *)((long)ppdVar7 + -0x78) =
               (long)dVar26 + (long)pdVar10 * 8 + ((long)pdVar10 - (long)pdVar5) * (long)dVar25 * 8;
          *(double *)((long)ppdVar7 + -0x70) = dVar25;
          *(double **)((long)ppdVar7 + -0x88) = param_2 + (long)pdVar10;
          *(undefined8 *)((long)ppdVar7 + -0x80) = 1;
          pdVar11 = pdVar5;
          FUN_10990fa5c(0xbff0000000000000,pdVar5,(long)unaff_x19 - (long)pdVar10,
                        (undefined1 *)((long)ppdVar7 + -0x78),(undefined1 *)((long)ppdVar7 + -0x88),
                        param_2 + ((long)pdVar10 - (long)pdVar5),1);
        }
        pdVar13 = (double *)0x0;
        lVar15 = lVar24;
        pdVar17 = pdVar8;
        do {
          lVar19 = (long)pdVar10 - (long)pdVar13;
          lVar18 = lVar19 + -1;
          if (pdVar13 == (double *)0x0) {
            dVar27 = param_2[lVar18];
          }
          else {
            pdVar3 = (double *)((long)dVar26 + lVar18 * (long)dVar25 * 8 + lVar19 * 8);
            pdVar4 = param_2 + lVar19;
            if (pdVar13 == (double *)0x1) {
              dVar27 = *pdVar3 * *pdVar4;
            }
            else {
              pdVar20 = (double *)((ulong)pdVar13 & 0x7ffffffffffffffe);
              dVar27 = *pdVar3 * *pdVar4;
              dVar28 = pdVar3[1] * pdVar4[1];
              if ((double *)0x3 < pdVar13) {
                pdVar23 = (double *)((ulong)pdVar13 & 0x7ffffffffffffffc);
                dVar27 = dVar27 + pdVar3[2] * pdVar4[2];
                dVar28 = dVar28 + pdVar3[3] * pdVar4[3];
                if (pdVar23 < pdVar20) {
                  dVar27 = dVar27 + pdVar3[(long)pdVar23] * pdVar4[(long)pdVar23];
                  dVar28 = dVar28 + (pdVar3 + (long)pdVar23)[1] * (pdVar4 + (long)pdVar23)[1];
                }
              }
              dVar27 = dVar27 + dVar28;
              for (; pdVar20 != pdVar13; pdVar20 = (double *)((long)pdVar20 + 1)) {
                dVar27 = dVar27 + *(double *)(lVar15 + (long)pdVar20 * 8) * pdVar17[(long)pdVar20];
              }
            }
            dVar27 = param_2[lVar18] - dVar27;
            param_2[lVar18] = dVar27;
          }
          if (dVar27 != 0.0) {
            param_2[lVar18] =
                 dVar27 / *(double *)((long)dVar26 + lVar18 * 8 + lVar18 * (long)dVar25 * 8);
          }
          pdVar13 = (double *)((long)pdVar13 + 1);
          pdVar17 = pdVar17 + -1;
          lVar15 = lVar15 + unaff_x20;
        } while (pdVar13 != pdVar5);
        pdVar8 = pdVar8 + -8;
        lVar24 = lVar24 + ~(ulong)dVar25 * 0x40;
        pdVar5 = pdVar10 + -1;
        bVar1 = 7 < (long)pdVar10;
        pdVar10 = pdVar5;
      } while (pdVar5 != (double *)0x0 && bVar1);
    }
    if (0x4000 < *(ulong *)((long)ppdVar7 + -0x90)) {
      pdVar11 = *(double **)((long)ppdVar7 + -0x98);
      _free();
    }
    pdVar8 = pdVar9;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppdVar7 + -0x68)) {
      return pdVar11;
    }
  }
  else {
LAB_10992ecd8:
    pdVar11 = (double *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if (0x4000 < *(ulong *)((long)ppdVar7 + -0x90)) {
    _free(*(undefined8 *)((long)ppdVar7 + -0x98));
  }
  __Unwind_Resume();
  *(long *)((long)pdVar8 + -0x20) = unaff_x20;
  *(double **)((long)pdVar8 + -0x18) = unaff_x19;
  *(undefined1 **)((long)pdVar8 + -0x10) = (undefined1 *)((long)ppdVar7 + -0x10);
  *(code **)((long)pdVar8 + -8) = FUN_10992ed1c;
  *pdVar11 = (double)&PTR_FUN_110b1dbe0;
  FUN_1099215c8(pdVar11 + 9,pdVar11[10]);
  __ZNSt3__15mutexD1Ev(pdVar11 + 1);
  return pdVar11;
}



/* Entry: 10992ea5c; end: 10992ed1b;  */

long * FUN_10992ea5c(long *param_1,long *param_2,ulong param_3)

{
  bool bVar1;
  double *pdVar2;
  double *pdVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *unaff_x19;
  long unaff_x20;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  long lStack_a0;
  long *plStack_98;
  ulong uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  plVar5 = &lStack_a0;
  plVar6 = &lStack_a0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 >> 0x3d == 0) {
    uStack_90 = param_3;
    if (param_2 == (long *)0x0) {
      plVar7 = (long *)(param_3 << 3);
      if (param_3 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar18 = -((long)plVar7 + 0x1eU & 0xfffffffffffffff0);
        plVar5 = (long *)((long)&lStack_a0 + lVar18);
        param_2 = (long *)((long)&lStack_a0 + lVar18);
        plStack_98 = param_2;
      }
      else {
        _malloc();
        param_2 = plVar7;
        plStack_98 = plVar7;
        if (plVar7 == (long *)0x0) goto LAB_10992ecd8;
      }
    }
    else {
      plStack_98 = (long *)0x0;
      plVar5 = &lStack_a0;
      plVar7 = param_1;
    }
    unaff_x19 = (long *)param_1[1];
    if (0 < (long)unaff_x19) {
      lVar16 = *param_1;
      uVar17 = param_1[3];
      plVar6 = param_2 + (long)unaff_x19;
      lVar18 = lVar16 + uVar17 * ((long)unaff_x19 + -1) * 8 + (long)unaff_x19 * 8;
      unaff_x20 = ~uVar17 * 8;
      plVar15 = unaff_x19;
      do {
        plVar4 = plVar15;
        if ((long *)0x7 < plVar15) {
          plVar4 = (long *)0x8;
        }
        if ((long)unaff_x19 - (long)plVar15 != 0) {
          lStack_78 = lVar16 + (long)plVar15 * 8 + ((long)plVar15 - (long)plVar4) * uVar17 * 8;
          plStack_88 = param_2 + (long)plVar15;
          uStack_80 = 1;
          plVar7 = plVar4;
          uStack_70 = uVar17;
          FUN_10990fa5c(0xbff0000000000000,plVar4,(long)unaff_x19 - (long)plVar15,&lStack_78,
                        &plStack_88,param_2 + ((long)plVar15 - (long)plVar4),1);
        }
        plVar8 = (long *)0x0;
        lVar9 = lVar18;
        plVar10 = plVar6;
        do {
          lVar12 = (long)plVar15 - (long)plVar8;
          lVar11 = lVar12 + -1;
          if (plVar8 == (long *)0x0) {
            dVar19 = (double)param_2[lVar11];
          }
          else {
            pdVar2 = (double *)(lVar16 + lVar11 * uVar17 * 8 + lVar12 * 8);
            pdVar3 = (double *)(param_2 + lVar12);
            if (plVar8 == (long *)0x1) {
              dVar19 = *pdVar2 * *pdVar3;
            }
            else {
              plVar13 = (long *)((ulong)plVar8 & 0x7ffffffffffffffe);
              dVar19 = *pdVar2 * *pdVar3;
              dVar20 = pdVar2[1] * pdVar3[1];
              if ((long *)0x3 < plVar8) {
                plVar14 = (long *)((ulong)plVar8 & 0x7ffffffffffffffc);
                dVar19 = dVar19 + pdVar2[2] * pdVar3[2];
                dVar20 = dVar20 + pdVar2[3] * pdVar3[3];
                if (plVar14 < plVar13) {
                  dVar19 = dVar19 + pdVar2[(long)plVar14] * pdVar3[(long)plVar14];
                  dVar20 = dVar20 + (pdVar2 + (long)plVar14)[1] * (pdVar3 + (long)plVar14)[1];
                }
              }
              dVar19 = dVar19 + dVar20;
              for (; plVar13 != plVar8; plVar13 = (long *)((long)plVar13 + 1)) {
                dVar19 = dVar19 + *(double *)(lVar9 + (long)plVar13 * 8) *
                                  (double)plVar10[(long)plVar13];
              }
            }
            dVar19 = (double)param_2[lVar11] - dVar19;
            param_2[lVar11] = (long)dVar19;
          }
          if (dVar19 != 0.0) {
            param_2[lVar11] =
                 (long)(dVar19 / *(double *)(lVar16 + lVar11 * 8 + lVar11 * uVar17 * 8));
          }
          plVar8 = (long *)((long)plVar8 + 1);
          plVar10 = plVar10 + -1;
          lVar9 = lVar9 + unaff_x20;
        } while (plVar8 != plVar4);
        plVar6 = plVar6 + -8;
        lVar18 = lVar18 + ~uVar17 * 0x40;
        plVar4 = plVar15 + -1;
        bVar1 = 7 < (long)plVar15;
        plVar15 = plVar4;
      } while (plVar4 != (long *)0x0 && bVar1);
    }
    if (0x4000 < uStack_90) {
      plVar7 = plStack_98;
      _free();
    }
    plVar6 = plVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return plVar7;
    }
  }
  else {
LAB_10992ecd8:
    plVar7 = (long *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if (0x4000 < uStack_90) {
    _free(plStack_98);
  }
  __Unwind_Resume();
  *(long *)((long)plVar6 + -0x20) = unaff_x20;
  *(long **)((long)plVar6 + -0x18) = unaff_x19;
  *(undefined1 **)((long)plVar6 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)plVar6 + -8) = FUN_10992ed1c;
  *plVar7 = (long)&PTR_FUN_110b1dbe0;
  FUN_1099215c8(plVar7 + 9,plVar7[10]);
  __ZNSt3__15mutexD1Ev(plVar7 + 1);
  return plVar7;
}



/* Entry: 10992ed1c; end: 10992ed5b;  */

undefined8 * FUN_10992ed1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b1dbe0;
  FUN_1099215c8(param_1 + 9,param_1[10]);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10992ed5c; end: 10992ee2b;  */

undefined8 * FUN_10992ed5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = param_1 + 10;
  *param_1 = &PTR_FUN_110b1db78;
  param_1[1] = 0x32aaaba7;
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  uVar1 = *(undefined4 *)(param_2 + 4);
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  param_1[0xf] = uVar5;
  param_1[0xe] = uVar4;
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar2;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uVar2 = param_2[5];
  param_1[0x12] = param_2[6];
  param_1[0x11] = uVar2;
  param_1[0x13] = param_2[7];
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  uVar3 = param_2[9];
  uVar2 = param_2[8];
  uVar5 = param_2[0xb];
  uVar4 = param_2[10];
  param_1[0x18] = param_2[0xc];
  param_1[0x17] = uVar5;
  param_1[0x16] = uVar4;
  param_1[0x15] = uVar3;
  param_1[0x14] = uVar2;
  FUN_10992d798(param_1 + 0x19,param_1 + 0xc);
  return param_1;
}



/* Entry: 10992ee2c; end: 10992f48b;  */

void FUN_10992ee2c(undefined8 *param_1,long param_2,long param_3,double *param_4,ulong *param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double *pdVar3;
  double *pdVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  double *pdVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  double *pdVar12;
  double *pdVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  double *pdVar18;
  double *pdVar19;
  double dVar20;
  undefined1 auStack_d8 [40];
  double *pdStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined6 uStack_98;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined8 uStack_90;
  double *pdStack_88;
  double *pdStack_80;
  long lStack_78;
  long lStack_70;
  
  puVar7 = (undefined8 *)0x28;
  __Znwm();
  uStack_a0 = SUB84(puVar7,0);
  uStack_9c = (undefined2)((ulong)puVar7 >> 0x20);
  uStack_9a = (undefined1)((ulong)puVar7 >> 0x30);
  uStack_99 = (undefined1)((ulong)puVar7 >> 0x38);
  uStack_90 = (double *)0x8000000000000028;
  uStack_98 = 0x20;
  uStack_92 = 0;
  uStack_91 = 0;
  puVar7[1] = 0x656c6f68436c616d;
  *puVar7 = 0x726f4e65736e6544;
  puVar7[3] = 0x65766c6f533a3a72;
  puVar7[2] = 0x65766c6f53796b73;
  *(undefined1 *)(puVar7 + 4) = 0;
  FUN_109997918(auStack_d8,&uStack_a0);
  if ((long)uStack_90 < 0) {
    __ZdlPv(CONCAT17(uStack_99,CONCAT16(uStack_9a,CONCAT24(uStack_9c,uStack_a0))));
  }
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  iVar6 = (int)uVar2;
  pdVar18 = (double *)(long)iVar6;
  if (iVar6 != 0) {
    lVar10 = 0;
    if (pdVar18 != (double *)0x0) {
      lVar10 = 0x7fffffffffffffff / (long)pdVar18;
    }
    if ((long)pdVar18 <= lVar10 && (ulong)((long)iVar6 * (long)iVar6) >> 0x3d == 0) {
      pdVar8 = (double *)0x1;
      _calloc(1,(long)iVar6 * (long)iVar6 * 8);
      if (pdVar8 != (double *)0x0) goto LAB_10992ef10;
    }
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
    goto LAB_10992f39c;
  }
  pdVar8 = (double *)0x0;
LAB_10992ef10:
  uStack_90._7_1_ = '\x05';
  uStack_a0 = 0x75746553;
  uStack_9c = 0x70;
  FUN_109997c38(auStack_d8,&uStack_a0);
  if (uStack_90._7_1_ < '\0') {
    __ZdlPv(CONCAT17(uStack_99,CONCAT16(uStack_9a,CONCAT24(uStack_9c,uStack_a0))));
  }
  pdStack_b0 = (double *)0x3ff0000000000000;
  pdVar19 = *(double **)(param_3 + 0x10);
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_9a = 0;
  uStack_99 = 0;
  uStack_98 = 0;
  uStack_92 = 0;
  uStack_91 = 0;
  uStack_90 = pdVar18;
  pdStack_88 = pdVar18;
  pdStack_80 = pdVar19;
  if ((bRam00000001132dfa18 & 1) == 0) {
    iVar6 = 0x132dfa18;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      uRam00000001132dfa08 = 0x80000;
      uRam00000001132dfa00 = 0x4000;
      lRam00000001132dfa10 = 0x80000;
      ___cxa_guard_release(0x1132dfa18);
    }
  }
  pdVar3 = pdStack_80;
  pdVar13 = uStack_90;
  if ((long)uStack_90 <= (long)pdVar18) {
    pdVar13 = pdVar18;
  }
  pdVar12 = pdStack_80;
  if ((long)pdStack_80 <= (long)pdVar13) {
    pdVar12 = pdVar13;
  }
  pdVar13 = pdVar3;
  if (0x2f < (long)pdVar12) {
    pdVar13 = (double *)((long)(uRam00000001132dfa00 - 0xc0) / 0x50 & 0xfffffffffffffff8);
    if ((long)pdVar13 < 2) {
      pdVar13 = (double *)0x1;
    }
    if ((long)pdVar13 < (long)pdStack_80) {
      uVar15 = 0;
      if (pdVar13 != (double *)0x0) {
        uVar15 = (ulong)pdStack_80 / (ulong)pdVar13;
      }
      uVar16 = (long)pdStack_80 - uVar15 * (long)pdVar13;
      pdStack_80 = pdVar13;
      if (uVar16 != 0) {
        lVar10 = uVar15 * 8 + 8;
        lVar11 = 0;
        if (lVar10 != 0) {
          lVar11 = (long)((long)pdVar13 + ~uVar16) / lVar10;
        }
        pdStack_80 = pdVar13 + -lVar11;
      }
    }
    uVar15 = (uRam00000001132dfa00 - 0xc0) + (long)uStack_90 * (long)pdStack_80 * -8;
    if ((long)uVar15 < (long)pdStack_80 * 0x20) {
      uVar16 = 0;
      if ((long)pdVar13 << 5 != 0) {
        uVar16 = 0x480000 / (ulong)((long)pdVar13 << 5);
      }
    }
    else {
      uVar16 = 0;
      if ((long)pdStack_80 << 3 != 0) {
        uVar16 = uVar15 / (ulong)((long)pdStack_80 << 3);
      }
    }
    uVar15 = 0;
    if ((long)pdStack_80 << 4 != 0) {
      uVar15 = 0x180000 / (ulong)((long)pdStack_80 << 4);
    }
    if ((long)uVar15 <= (long)uVar16) {
      uVar16 = uVar15;
    }
    pdVar13 = pdStack_80;
    if ((pdVar3 == pdStack_80) && ((long)pdVar18 <= (long)(uVar16 & 0xfffffffffffffffc))) {
      uVar16 = (long)pdVar3 * (long)pdVar18 * 8;
      uVar15 = uRam00000001132dfa00;
      pdVar12 = uStack_90;
      if (0x400 < (long)uVar16) {
        if (0x23f < (long)uStack_90) {
          pdVar12 = (double *)0x240;
        }
        uVar15 = uRam00000001132dfa08;
        if (lRam00000001132dfa10 == 0 || 0x8000 < uVar16) {
          uVar15 = 0x180000;
          pdVar12 = uStack_90;
        }
      }
      pdVar13 = (double *)0x0;
      if ((long)pdVar3 * 0x18 != 0) {
        pdVar13 = (double *)(uVar15 / (ulong)((long)pdVar3 * 0x18));
      }
      if ((long)pdVar13 <= (long)pdVar12) {
        pdVar12 = pdVar13;
      }
      if ((long)pdVar12 < 7) {
        pdVar13 = pdVar3;
        if (pdVar12 == (double *)0x0) goto LAB_10992f114;
      }
      else {
        pdVar12 = (double *)((((ulong)pdVar12 / 6) * 2 + (ulong)pdVar12 / 6) * 2);
      }
      lVar10 = 0;
      if (pdVar12 != (double *)0x0) {
        lVar10 = (long)uStack_90 / (long)pdVar12;
      }
      lVar11 = (long)uStack_90 - lVar10 * (long)pdVar12;
      pdVar13 = pdVar3;
      uStack_90 = pdVar12;
      if (lVar11 != 0) {
        lVar14 = lVar10 * 6 + 6;
        lVar10 = 0;
        if (lVar14 != 0) {
          lVar10 = ((long)pdVar12 - lVar11) / lVar14;
        }
        uStack_90 = (double *)((long)pdVar12 + lVar10 * -6);
      }
    }
  }
LAB_10992f114:
  lStack_78 = (long)uStack_90 * (long)pdVar13;
  lStack_70 = (long)pdStack_88 * (long)pdVar13;
  FUN_10990ae14(pdVar18,pdVar19,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x18),
                *(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x18),pdVar8,1,pdVar18,
                &pdStack_b0,&uStack_a0);
  _free(CONCAT17(uStack_99,CONCAT16(uStack_9a,CONCAT24(uStack_9c,uStack_a0))));
  _free(CONCAT17(uStack_91,CONCAT16(uStack_92,uStack_98)));
  uVar15 = *(ulong *)(param_3 + 0x18);
  if ((long)uVar15 < 1) {
    pdVar19 = (double *)0x0;
LAB_10992f1f0:
    uVar1 = *(undefined8 *)(param_3 + 8);
    uStack_a0 = (undefined4)uVar1;
    uStack_9c = (undefined2)((ulong)uVar1 >> 0x20);
    uStack_9a = (undefined1)((ulong)uVar1 >> 0x30);
    uStack_99 = (undefined1)((ulong)uVar1 >> 0x38);
    uStack_98 = (undefined6)uVar15;
    uStack_92 = (undefined1)(uVar15 >> 0x30);
    uStack_91 = (undefined1)(uVar15 >> 0x38);
    uStack_a8 = 1;
    pdStack_b0 = param_4;
    FUN_109909a3c(0x3ff0000000000000,uVar15,*(undefined8 *)(param_3 + 0x10),&uStack_a0,&pdStack_b0,
                  pdVar19,1);
LAB_10992f21c:
    if (0 < (long)pdVar18) {
      pdVar3 = pdVar18;
      pdVar12 = (double *)*param_5;
      pdVar13 = pdVar8;
      pdVar4 = (double *)*param_5;
      while (pdVar4 != (double *)0x0) {
        *pdVar13 = *pdVar12 * *pdVar12 + *pdVar13;
        pdVar13 = pdVar13 + (long)pdVar18 + 1;
        pdVar3 = (double *)((long)pdVar3 - 1);
        pdVar12 = pdVar12 + 1;
        pdVar4 = pdVar3;
      }
    }
    uStack_90._7_1_ = '\a';
    uStack_a0 = 0x646f7250;
    uStack_9c = 0x6375;
    uStack_9a = 0x74;
    uStack_99 = 0;
    FUN_109997c38(auStack_d8,&uStack_a0);
    if (uStack_90._7_1_ < '\0') {
      __ZdlPv(CONCAT17(uStack_99,CONCAT16(uStack_9a,CONCAT24(uStack_9c,uStack_a0))));
    }
    *param_1 = 0xbff0000000000000;
    puVar7 = param_1 + 2;
    *puVar7 = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[1] = 0x200000001;
    plVar17 = *(long **)(param_2 + 200);
    plVar9 = plVar17;
    (**(code **)(*plVar17 + 0x10))(plVar17,uVar2,pdVar8,puVar7);
    iVar6 = (int)plVar9;
    if (iVar6 == 0) {
      (**(code **)(*plVar17 + 0x18))(plVar17,pdVar19,param_6,puVar7);
      iVar6 = (int)plVar17;
    }
    *(int *)((long)param_1 + 0xc) = iVar6;
    uStack_90._7_1_ = '\x0e';
    uStack_a0 = 0x74636146;
    uStack_9c = 0x726f;
    uStack_9a = 0x41;
    uStack_99 = 0x6e;
    uStack_98 = 0x65766c6f5364;
    uStack_92 = 0;
    FUN_109997c38(auStack_d8,&uStack_a0);
    if (uStack_90._7_1_ < '\0') {
      __ZdlPv(CONCAT17(uStack_99,CONCAT16(uStack_9a,CONCAT24(uStack_9c,uStack_a0))));
    }
    _free(pdVar19);
    _free(pdVar8);
    FUN_109997a28(auStack_d8);
    return;
  }
  if (uVar15 >> 0x3d == 0) {
    pdVar19 = (double *)0x1;
    _calloc(1,uVar15 << 3);
    if (pdVar19 != (double *)0x0) {
      if (uVar15 == 1) {
        dVar20 = 0.0;
        iVar6 = (int)uVar1;
        if (iVar6 != 0) {
          pdVar13 = *(double **)(param_3 + 8);
          dVar20 = *pdVar13 * *param_4;
          if (1 < iVar6) {
            lVar10 = (long)iVar6 + -1;
            do {
              param_4 = param_4 + 1;
              pdVar13 = pdVar13 + 1;
              dVar20 = dVar20 + *pdVar13 * *param_4;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
        }
        *pdVar19 = dVar20 + 0.0;
        goto LAB_10992f21c;
      }
      goto LAB_10992f1f0;
    }
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10992f39c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10992f3a0);
  (*pcVar5)();
}



/* Entry: 10992f48c; end: 10992f573;  */

undefined8 * FUN_10992f48c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110b1db78;
  plVar1 = (long *)param_1[0x19];
  param_1[0x19] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110b1dbe0;
  FUN_1099215c8(param_1 + 9,param_1[10]);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10992f574; end: 10992f84f;  */

void FUN_10992f574(undefined8 param_1,long *param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  double dVar1;
  long *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  undefined8 *extraout_x8;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puStack_f0;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  undefined7 uStack_80;
  undefined4 uStack_79;
  undefined1 uStack_75;
  char cStack_71;
  long *plStack_70;
  undefined1 uStack_61;
  
  ppuVar6 = &puStack_f0;
  _gettimeofday(&puStack_f0,0);
  dStack_90 = (double)(long)puStack_f0 + (double)iStack_e8 * 1e-06;
  plStack_70 = param_2 + 1;
  uStack_88 = 0x6f537261656e694c;
  uStack_80 = 0x533a3a7265766c;
  uStack_79 = 0x65766c6f;
  uStack_75 = 0;
  cStack_71 = '\x13';
  if (param_3 == 0) {
    puStack_f0 = (undefined8 *)0x0;
    uStack_98 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_a0 = 0;
    FUN_1099a9f0c(&puStack_f0,&UNK_10f58a767,0x138,3,FUN_1099aa768,0);
    FUN_1092b4db8(CONCAT44(uStack_e4,iStack_e8) + 0x7540,&UNK_10f58a7ec,0x1b);
  }
  else if (param_4 == 0) {
    puStack_f0 = (undefined8 *)0x0;
    uStack_98 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_a0 = 0;
    FUN_1099a9f0c(&puStack_f0,&UNK_10f58a767,0x139,3,FUN_1099aa768,0);
    FUN_1092b4db8(CONCAT44(uStack_e4,iStack_e8) + 0x7540,&UNK_10f58a808,0x1b);
  }
  else {
    if (param_6 != 0) {
      (**(code **)(*param_2 + 0x20))(param_1,param_2,param_3,param_4,param_5,param_6);
      plVar2 = plStack_70;
      _gettimeofday(&puStack_f0,0);
      dVar1 = dStack_90;
      puVar8 = puStack_f0;
      __ZNSt3__15mutex4lockEv(plVar2);
      puStack_f0 = &uStack_88;
      plVar5 = plVar2 + 8;
      FUN_109921a64(plVar5,puStack_f0,&UNK_10dd5b8f9,&puStack_f0,&uStack_61);
      plVar5[7] = (long)((((double)(long)puVar8 + (double)iStack_e8 * 1e-06) - dVar1) +
                        (double)plVar5[7]);
      *(int *)(plVar5 + 8) = (int)plVar5[8] + 1;
      __ZNSt3__15mutex6unlockEv(plVar2);
      if (cStack_71 < '\0') {
        __ZdlPv(uStack_88);
      }
      return;
    }
    puStack_f0 = (undefined8 *)0x0;
    uStack_98 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_a0 = 0;
    FUN_1099a9f0c(&puStack_f0,&UNK_10f58a767,0x13a,3,FUN_1099aa768,0);
    FUN_1092b4db8(CONCAT44(uStack_e4,iStack_e8) + 0x7540,&UNK_10f58a243,0x1b);
  }
  func_0x0001099ab7c0();
  FUN_109921980(&dStack_90);
  __Unwind_Resume();
  puVar7 = extraout_x8 + 1;
  *puVar7 = 0;
  extraout_x8[2] = 0;
  *extraout_x8 = puVar7;
  puVar8 = *(undefined8 **)((long)ppuVar6 + 0x48);
  while (puVar8 != (undefined8 *)((long)ppuVar6 + 0x50)) {
    FUN_109921df4(extraout_x8,puVar7,puVar8 + 4,puVar8 + 4);
    puVar3 = (undefined8 *)puVar8[1];
    puVar9 = puVar8;
    if ((undefined8 *)puVar8[1] == (undefined8 *)0x0) {
      do {
        puVar8 = (undefined8 *)puVar9[2];
        bVar4 = (undefined8 *)*puVar8 != puVar9;
        puVar9 = puVar8;
      } while (bVar4);
    }
    else {
      do {
        puVar8 = puVar3;
        puVar3 = (undefined8 *)*puVar8;
      } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
    }
  }
  return;
}



/* Entry: 10992f850; end: 10992f8f7;  */

void FUN_10992f850(undefined8 *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  
  puVar3 = param_1 + 1;
  *puVar3 = 0;
  param_1[2] = 0;
  *param_1 = puVar3;
  plVar4 = *(long **)(param_2 + 0x48);
  while (plVar4 != (long *)(param_2 + 0x50)) {
    FUN_109921df4(param_1,puVar3,plVar4 + 4,plVar4 + 4);
    plVar1 = (long *)plVar4[1];
    plVar5 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar2 = (long *)*plVar4 != plVar5;
        plVar5 = plVar4;
      } while (bVar2);
    }
    else {
      do {
        plVar4 = plVar1;
        plVar1 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10992f8f8; end: 10992f8ff;  */

void FUN_10992f8f8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10992f8fc);
  (*pcVar1)();
}



/* Entry: 10992f900; end: 10992fab3;  */

undefined8 * FUN_10992f900(undefined8 *param_1,long param_2)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  long lVar7;
  double *pdVar8;
  code *pcVar9;
  bool bVar10;
  undefined8 *puVar11;
  double *pdVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  double dVar16;
  double *pdVar17;
  double *pdVar18;
  double *pdVar19;
  double *pdVar20;
  double *pdVar21;
  double *pdVar22;
  ulong uVar23;
  double *pdVar24;
  ulong uVar25;
  double *pdVar26;
  double *pdVar27;
  double *pdVar28;
  double *pdVar29;
  double *pdVar30;
  ulong uVar31;
  double *pdVar32;
  long lVar33;
  double *pdVar34;
  long lVar35;
  double dVar36;
  double *pdVar37;
  long lVar38;
  double *pdVar39;
  long lVar40;
  double *pdVar41;
  double *pdVar42;
  double *pdVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  double *pdVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dStack_3f0;
  double dStack_3b0;
  ulong uStack_3a0;
  long lStack_398;
  long lStack_2e8;
  double *pdStack_2b8;
  double *pdStack_2b0;
  double *pdStack_2a8;
  double *pdStack_2a0;
  double *pdStack_298;
  double *pdStack_290;
  double *pdStack_288;
  double *pdStack_280;
  double *pdStack_278;
  double *pdStack_270;
  double *pdStack_268;
  double *pdStack_260;
  double *pdStack_258;
  double *pdStack_250;
  double *pdStack_248;
  double *pdStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  double *pdStack_228;
  long *plStack_220;
  double **ppdStack_218;
  long lStack_210;
  double *pdStack_208;
  double *pdStack_200;
  undefined1 uStack_1f1;
  double *pdStack_1f0;
  double *pdStack_1e8;
  double *pdStack_1e0;
  double *pdStack_1d8;
  double *pdStack_1d0;
  double *pdStack_1c8;
  double *pdStack_1c0;
  double *pdStack_1b8;
  double *pdStack_1b0;
  double *pdStack_1a8;
  double *pdStack_1a0;
  double *pdStack_198;
  double *pdStack_190;
  double *pdStack_188;
  double *pdStack_180;
  double *pdStack_178;
  double *pdStack_170;
  undefined8 uStack_168;
  double *pdStack_160;
  double *pdStack_158;
  double *pdStack_150;
  double *pdStack_140;
  double *pdStack_130;
  double *pdStack_120;
  long lStack_110;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  iVar14 = *(int *)(param_2 + 0xc);
  if (iVar14 == 0) {
    puVar11 = (undefined8 *)0x10;
    __Znwm();
    *puVar11 = &PTR_FUN_110b1dc28;
    puVar11[1] = 0;
    *param_1 = puVar11;
    return puVar11;
  }
  if (iVar14 == 1) {
    uStack_80 = 0;
    uStack_28 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = 0;
    pcVar9 = FUN_1099aa768;
    iVar15 = 0x81;
    dVar16 = 1.48219693752374e-323;
    FUN_1099a9f0c(&uStack_80,&UNK_10f58b3af);
    iVar14 = 0xf58b430;
    FUN_109365950(lStack_78 + 0x7540);
  }
  else if (iVar14 == 2) {
    uStack_80 = 0;
    uStack_28 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = 0;
    pcVar9 = FUN_1099aa768;
    iVar15 = 0x89;
    dVar16 = 1.48219693752374e-323;
    FUN_1099a9f0c(&uStack_80,&UNK_10f58b3af);
    iVar14 = 0xf58b45f;
    FUN_109365950(lStack_78 + 0x7540);
  }
  else {
    uStack_80 = 0;
    uStack_28 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = 0;
    pcVar9 = FUN_1099aa768;
    dVar16 = 1.48219693752374e-323;
    FUN_1099a9f0c(&uStack_80,&UNK_10f58b3af,0x8d,3,FUN_1099aa768,0);
    iVar15 = 0x2c;
    FUN_1092b4db8(lStack_78 + 0x7540,&UNK_10f58b48c);
    if (*(uint *)(param_2 + 0xc) < 3) {
      iVar14 = (int)(&PTR_DAT_110b1dc60)[*(uint *)(param_2 + 0xc)];
    }
    else {
      iVar14 = 0xf5931ae;
    }
    FUN_109365950();
  }
  puVar11 = &uStack_80;
  func_0x0001099ab7c0();
  *param_1 = 0;
  __Unwind_Resume();
  lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar41 = (double *)(long)iVar14;
  pdVar42 = (double *)(long)iVar15;
  pdVar12 = (double *)0x50;
  __Znwm();
  *pdVar12 = dVar16;
  pdVar12[1] = (double)pdVar41;
  pdVar12[2] = (double)pdVar42;
  pdVar12[3] = (double)pdVar41;
  pdVar12[5] = 0.0;
  pdVar12[6] = 0.0;
  pdVar4 = pdVar42;
  if ((long)iVar14 <= (long)pdVar42) {
    pdVar4 = pdVar41;
  }
  if (pdVar4 != (double *)0x0) {
    if ((long)pdVar4 < 1) {
      dVar16 = 0.0;
    }
    else {
      dVar16 = (double)((long)pdVar4 << 3);
      _malloc();
      if (dVar16 == 0.0) {
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        goto LAB_109931028;
      }
    }
    pdVar12[5] = dVar16;
  }
  pdVar12[7] = 0.0;
  pdVar12[6] = (double)pdVar4;
  pdVar12[8] = 0.0;
  if (iVar15 < 1) {
    dStack_3f0 = 0.0;
LAB_10992fbc0:
    *(undefined1 *)(pdVar12 + 9) = 0;
    pdVar12[6] = (double)pdVar4;
    pdVar12[8] = (double)pdVar42;
    pdVar5 = pdVar4;
    if (0x2f < (long)pdVar4) {
      pdVar5 = (double *)0x30;
    }
    if (0 < (long)pdVar4) {
      pdVar39 = (double *)0x0;
      uStack_3a0 = (long)pdVar41 - 1;
      lStack_398 = 0;
      pdVar26 = pdVar4;
      do {
        pdVar37 = pdVar26;
        if ((long)pdVar42 <= (long)pdVar26) {
          pdVar37 = pdVar42;
        }
        if ((long)pdVar41 <= (long)pdVar37) {
          pdVar37 = pdVar41;
        }
        if (0x2f < (long)pdVar37) {
          pdVar37 = (double *)0x30;
        }
        pdVar27 = (double *)((long)pdVar4 - (long)pdVar39);
        pdVar30 = pdVar5;
        if ((long)pdVar27 <= (long)pdVar5) {
          pdVar30 = pdVar27;
        }
        pdVar17 = (double *)((long)pdVar41 - (long)pdVar39);
        dVar16 = *pdVar12;
        pdVar22 = (double *)pdVar12[3];
        dVar36 = pdVar12[5];
        pdVar6 = pdVar30;
        if ((long)pdVar17 <= (long)pdVar30) {
          pdVar6 = pdVar17;
        }
        if (dStack_3f0 == 0.0) {
          if ((long)pdVar27 < 1) {
            dStack_3b0 = 0.0;
            dVar51 = 0.0;
          }
          else {
            dVar51 = (double)((long)pdVar30 << 3);
            _malloc();
            dStack_3b0 = dVar51;
            if (dVar51 == 0.0) {
              ___cxa_allocate_exception(8);
              __ZNSt9bad_allocC1Ev();
              ___cxa_throw();
              goto LAB_109931028;
            }
          }
        }
        else {
          dStack_3b0 = 0.0;
          dVar51 = dStack_3f0;
        }
        pdVar1 = (double *)((long)dVar16 + (long)pdVar39 * 8 + (long)pdVar22 * (long)pdVar39 * 8);
        lVar38 = (long)dVar36 + (long)pdVar39 * 8;
        if (0 < (long)pdVar6) {
          lVar45 = 0;
          lVar40 = -(long)pdVar37;
          lVar35 = (long)dVar16 + lStack_398 + lStack_398 * (long)pdVar22;
          lVar13 = lVar35 + 0x38;
          lVar44 = lVar35 + 8;
          lStack_2e8 = 8;
          uVar25 = uStack_3a0;
          pdVar43 = (double *)((long)dVar51 + 8U);
          pdVar19 = (double *)0x0;
          do {
            lVar40 = lVar40 + 1;
            pdVar34 = (double *)((long)pdVar17 - (long)pdVar19);
            pdVar32 = (double *)((long)pdVar19 + 1);
            pdVar2 = (double *)((long)pdVar30 + ~(ulong)pdVar19);
            dVar16 = pdVar12[3];
            pdVar18 = pdVar1 + (long)((long)dVar16 * (long)pdVar19 + (long)pdVar19);
            pdVar47 = pdVar18 + 1;
            pdVar8 = (double *)((long)pdVar34 - 1);
            if (pdVar8 == (double *)0x0) {
              dVar50 = *pdVar18;
LAB_10992ff84:
              *(undefined8 *)(lVar38 + (long)pdVar19 * 8) = 0;
              pdVar18 = (double *)((ulong)pdVar47 >> 3 & 1);
              if ((long)pdVar8 <= (long)pdVar18) {
                pdVar18 = pdVar8;
              }
              if (((ulong)pdVar47 & 7) != 0) {
                pdVar18 = pdVar8;
              }
              if (0 < (long)pdVar18) {
                _bzero(pdVar47,(long)pdVar18 << 3);
              }
              lVar46 = (long)pdVar8 - (long)pdVar18;
              lVar33 = (lVar46 - (lVar46 >> 0x3f) & 0xfffffffffffffffeU) + (long)pdVar18;
              if (1 < lVar46) {
                lVar7 = lVar33;
                if (lVar33 <= (long)((long)pdVar18 + 2U)) {
                  lVar7 = (long)pdVar18 + 2U;
                }
                _bzero(pdVar47 + (long)pdVar18,
                       (lVar7 + ~(ulong)pdVar18 & 0x1ffffffffffffffe) * 8 + 0x10);
              }
              if (lVar33 < (long)pdVar8) {
                _bzero(pdVar47 + (lVar46 / 2) * 2 + (long)pdVar18,(lVar46 % 2) * 8);
              }
              pdVar29 = (double *)pdVar12[3];
              pdVar47 = pdVar1 + (long)pdVar29 * (long)pdVar19;
              pdVar47[(long)pdVar19] = dVar50;
              pdVar28 = pdVar1 + (long)((long)pdVar19 + (long)pdVar29 * (long)pdVar32);
              dVar16 = *(double *)(lVar38 + (long)pdVar19 * 8);
              if (pdVar34 != (double *)0x1) {
                pdVar20 = (double *)((long)pdVar17 - (long)pdVar8);
                pdVar18 = pdVar47 + (long)pdVar20;
                goto LAB_1099300c0;
              }
              if (((ulong)pdVar28 & 7) == 0) {
                if (0 < (long)pdVar2) {
                  lVar46 = (long)pdVar29 * lStack_2e8;
                  lVar33 = lVar40;
                  do {
                    *(double *)(lVar35 + lVar46) = (1.0 - dVar16) * *(double *)(lVar35 + lVar46);
                    lVar46 = lVar46 + (long)pdVar29 * 8;
                    bVar10 = lVar33 != -1;
                    lVar33 = lVar33 + 1;
                  } while (bVar10);
                }
              }
              else if (0 < (long)pdVar2) {
                pdVar19 = (double *)(lVar35 + (long)pdVar29 * lStack_2e8);
                lVar33 = lVar40;
                do {
                  *pdVar19 = (1.0 - dVar16) * *pdVar19;
                  pdVar19 = pdVar19 + (long)pdVar29;
                  bVar10 = lVar33 != -1;
                  lVar33 = lVar33 + 1;
                } while (bVar10);
              }
            }
            else {
              pdVar28 = (double *)((long)pdVar34 + 2);
              if (-1 < (long)pdVar8) {
                pdVar28 = pdVar8;
              }
              if (pdVar34 < (double *)0x3) {
                dVar36 = *pdVar47 * *pdVar47;
              }
              else {
                uVar31 = (long)pdVar8 - ((long)pdVar8 >> 0x3f) & 0xfffffffffffffffe;
                dVar36 = *pdVar47 * *pdVar47;
                dVar50 = pdVar18[2] * pdVar18[2];
                if (4 < (long)pdVar34) {
                  uVar23 = (ulong)pdVar28 & 0xfffffffffffffffc;
                  dVar49 = pdVar18[3] * pdVar18[3];
                  dVar48 = pdVar18[4] * pdVar18[4];
                  if ((double *)0x7 < pdVar8) {
                    pdVar28 = (double *)(lVar13 + lVar45 + lVar45 * (long)dVar16);
                    lVar33 = 4;
                    do {
                      dVar36 = dVar36 + pdVar28[-2] * pdVar28[-2];
                      dVar50 = dVar50 + pdVar28[-1] * pdVar28[-1];
                      dVar49 = dVar49 + *pdVar28 * *pdVar28;
                      dVar48 = dVar48 + pdVar28[1] * pdVar28[1];
                      lVar33 = lVar33 + 4;
                      pdVar28 = pdVar28 + 4;
                    } while (lVar33 < (long)uVar23);
                  }
                  dVar36 = dVar49 + dVar36;
                  dVar50 = dVar48 + dVar50;
                  if ((long)uVar23 < (long)uVar31) {
                    dVar48 = (pdVar47 + uVar23)[1];
                    dVar49 = pdVar47[uVar23];
                    dVar36 = dVar36 + dVar49 * dVar49;
                    dVar50 = dVar50 + dVar48 * dVar48;
                  }
                }
                dVar36 = dVar36 + dVar50;
                if ((long)uVar31 < (long)pdVar8) {
                  lVar33 = uVar25 - uVar31;
                  pdVar28 = (double *)
                            (lVar44 + lVar45 + lVar45 * (long)dVar16 + ((long)pdVar8 / 2) * 0x10);
                  do {
                    dVar36 = dVar36 + *pdVar28 * *pdVar28;
                    lVar33 = lVar33 + -1;
                    pdVar28 = pdVar28 + 1;
                  } while (lVar33 != 0);
                }
              }
              dVar50 = *pdVar18;
              if (dVar36 <= 2.2250738585072014e-308) goto LAB_10992ff84;
              dVar36 = SQRT(dVar36 + dVar50 * dVar50);
              if (0.0 <= dVar50) {
                dVar36 = -dVar36;
              }
              dVar49 = dVar50 - dVar36;
              pdVar18 = (double *)((ulong)pdVar47 >> 3 & 1);
              if ((long)pdVar8 <= (long)pdVar18) {
                pdVar18 = pdVar8;
              }
              if (((ulong)pdVar47 & 7) != 0) {
                pdVar18 = pdVar8;
              }
              if (0 < (long)pdVar18) {
                pdVar28 = (double *)(lVar44 + lVar45 + lVar45 * (long)dVar16);
                pdVar47 = pdVar18;
                do {
                  *pdVar28 = *pdVar28 / dVar49;
                  pdVar47 = (double *)((long)pdVar47 - 1);
                  pdVar28 = pdVar28 + 1;
                } while (pdVar47 != (double *)0x0);
              }
              lVar46 = (long)pdVar8 - (long)pdVar18;
              uVar31 = lVar46 - (lVar46 >> 0x3f) & 0xfffffffffffffffe;
              lVar33 = uVar31 + (long)pdVar18;
              if (1 < lVar46) {
                pdVar28 = (double *)(lVar44 + lVar45 + lVar45 * (long)dVar16 + (long)pdVar18 * 8);
                pdVar47 = pdVar18;
                do {
                  pdVar28[1] = pdVar28[1] / dVar49;
                  *pdVar28 = *pdVar28 / dVar49;
                  pdVar47 = (double *)((long)pdVar47 + 2);
                  pdVar28 = pdVar28 + 2;
                } while ((long)pdVar47 < lVar33);
              }
              if (lVar33 < (long)pdVar8) {
                lVar33 = (uVar25 - (long)pdVar18) - uVar31;
                pdVar47 = (double *)
                          (lVar44 + lVar45 + lVar45 * (long)dVar16 + (lVar46 / 2) * 0x10 +
                                    (long)pdVar18 * 8);
                do {
                  *pdVar47 = *pdVar47 / dVar49;
                  lVar33 = lVar33 + -1;
                  pdVar47 = pdVar47 + 1;
                } while (lVar33 != 0);
              }
              *(double *)(lVar38 + (long)pdVar19 * 8) = (dVar36 - dVar50) / dVar36;
              pdVar29 = (double *)pdVar12[3];
              pdVar47 = pdVar1 + (long)pdVar29 * (long)pdVar19;
              pdVar47[(long)pdVar19] = dVar36;
              pdVar28 = pdVar1 + (long)((long)pdVar19 + (long)pdVar29 * (long)pdVar32);
              pdVar20 = (double *)((long)pdVar17 - (long)pdVar8);
              pdVar18 = pdVar47 + (long)pdVar20;
              dVar16 = *(double *)(lVar38 + (long)pdVar19 * 8);
LAB_1099300c0:
              if (dVar16 != 0.0) {
                pdVar24 = pdVar28 + 1;
                pdVar3 = (double *)((long)dVar51 + 8U) + (long)pdVar19;
                pdVar21 = (double *)((ulong)pdVar3 >> 3 & 1);
                if ((long)pdVar2 <= (long)pdVar21) {
                  pdVar21 = pdVar2;
                }
                uStack_230 = 0;
                uStack_238 = 1;
                if (((ulong)dVar51 & 7) != 0) {
                  pdVar21 = pdVar2;
                }
                pdStack_2b8 = pdVar24;
                pdStack_2b0 = pdVar8;
                pdStack_2a8 = pdVar2;
                pdStack_2a0 = pdVar28;
                pdStack_298 = pdVar34;
                pdStack_290 = pdVar2;
                pdStack_288 = pdVar1;
                pdStack_280 = pdVar17;
                pdStack_278 = pdVar30;
                pdStack_270 = pdVar12;
                pdStack_268 = pdVar39;
                pdStack_260 = pdVar39;
                pdStack_258 = pdVar22;
                pdStack_250 = pdVar19;
                pdStack_248 = pdVar32;
                pdStack_240 = pdVar29;
                pdStack_228 = pdVar29;
                if (0 < (long)pdVar21) {
                  _bzero(pdVar3,(long)pdVar21 << 3);
                }
                lVar46 = (long)pdVar2 - (long)pdVar21;
                lVar33 = (lVar46 - (lVar46 >> 0x3f) & 0xfffffffffffffffeU) + (long)pdVar21;
                if (1 < lVar46) {
                  lVar7 = lVar33;
                  if (lVar33 <= (long)((long)pdVar21 + 2U)) {
                    lVar7 = (long)pdVar21 + 2U;
                  }
                  _bzero(pdVar3 + (long)pdVar21,
                         (lVar7 + ~(ulong)pdVar21 & 0x1ffffffffffffffe) * 8 + 0x10);
                }
                if (lVar33 < (long)pdVar2) {
                  _bzero(pdVar3 + (lVar46 / 2) * 2 + (long)pdVar21,(lVar46 % 2) * 8);
                }
                if (pdVar2 == (double *)0x1) {
                  pdVar21 = (double *)((long)pdVar34 + 2);
                  if (-1 < (long)pdVar8) {
                    pdVar21 = pdVar8;
                  }
                  if (pdVar34 < (double *)0x3) {
                    dVar16 = *pdVar18 * *pdVar24;
                  }
                  else {
                    uVar31 = (long)pdVar8 - ((long)pdVar8 >> 0x3f) & 0xfffffffffffffffe;
                    dVar16 = *pdVar18 * *pdVar24;
                    dVar36 = pdVar18[1] * pdVar28[2];
                    if (4 < (long)pdVar34) {
                      uVar23 = (ulong)pdVar21 & 0xfffffffffffffffc;
                      dVar50 = pdVar18[2] * pdVar28[3];
                      dVar49 = pdVar18[3] * pdVar28[4];
                      if ((double *)0x7 < pdVar8) {
                        pdVar34 = pdVar28 + 7;
                        pdVar21 = pdVar18 + 6;
                        lVar33 = 4;
                        do {
                          dVar16 = dVar16 + pdVar21[-2] * pdVar34[-2];
                          dVar36 = dVar36 + pdVar21[-1] * pdVar34[-1];
                          dVar50 = dVar50 + *pdVar21 * *pdVar34;
                          dVar49 = dVar49 + pdVar21[1] * pdVar34[1];
                          lVar33 = lVar33 + 4;
                          pdVar34 = pdVar34 + 4;
                          pdVar21 = pdVar21 + 4;
                        } while (lVar33 < (long)uVar23);
                      }
                      dVar16 = dVar50 + dVar16;
                      dVar36 = dVar49 + dVar36;
                      if ((long)uVar23 < (long)uVar31) {
                        dVar16 = dVar16 + pdVar18[uVar23] * pdVar24[uVar23];
                        dVar36 = dVar36 + (pdVar18 + uVar23)[1] * (pdVar24 + uVar23)[1];
                      }
                    }
                    dVar16 = dVar16 + dVar36;
                    if ((long)uVar31 < (long)pdVar8) {
                      do {
                        dVar16 = dVar16 + pdVar18[uVar31] * pdVar24[uVar31];
                        uVar31 = uVar31 + 1;
                      } while (uVar25 != uVar31);
                    }
                  }
                  *pdVar3 = dVar16 + *pdVar3;
LAB_1099303a8:
                  dVar16 = pdVar12[3];
                  pdVar24 = pdVar43;
                  pdVar34 = pdVar28;
                  lVar33 = lVar40;
                  do {
                    *pdVar24 = *pdVar34 + *pdVar24;
                    pdVar34 = pdVar34 + (long)dVar16;
                    bVar10 = lVar33 != -1;
                    lVar33 = lVar33 + 1;
                    pdVar24 = pdVar24 + 1;
                  } while (bVar10);
                  lVar33 = 0;
                  dVar36 = *(double *)(lVar38 + (long)pdVar19 * 8);
                  do {
                    *pdVar28 = *pdVar28 - dVar36 * pdVar43[lVar33];
                    lVar33 = lVar33 + 1;
                    pdVar28 = pdVar28 + (long)dVar16;
                  } while (lVar40 + lVar33 != 0);
                }
                else {
                  pdStack_190 = pdStack_258;
                  pdStack_198 = pdStack_260;
                  pdStack_180 = pdStack_248;
                  pdStack_188 = pdStack_250;
                  pdStack_170 = (double *)uStack_238;
                  pdStack_178 = pdStack_240;
                  pdStack_160 = pdStack_228;
                  uStack_168 = uStack_230;
                  pdStack_1d0 = pdStack_298;
                  pdStack_1d8 = pdStack_2a0;
                  pdStack_1c0 = pdStack_288;
                  pdStack_1c8 = pdStack_290;
                  pdStack_1b0 = pdStack_278;
                  pdStack_1b8 = pdStack_280;
                  pdStack_1a0 = pdStack_268;
                  pdStack_1a8 = pdStack_270;
                  pdStack_1f0 = pdVar24;
                  pdStack_1e8 = pdVar8;
                  pdStack_1e0 = pdVar2;
                  FUN_1099317d4(0x3ff0000000000000,&pdStack_1f0,pdVar18);
                  if (0 < (long)pdVar2) goto LAB_1099303a8;
                }
                pdStack_1d8 = *(double **)(lVar38 + (long)pdVar19 * 8);
                uStack_168 = 0;
                pdStack_1e8 = pdVar8;
                pdStack_1d0 = pdVar18;
                pdStack_1c8 = pdVar8;
                pdStack_1b8 = pdVar47;
                pdStack_1b0 = pdVar17;
                pdStack_1a0 = pdVar1;
                pdStack_198 = pdVar17;
                pdStack_190 = pdVar30;
                pdStack_188 = pdVar12;
                pdStack_180 = pdVar39;
                pdStack_178 = pdVar39;
                pdStack_170 = pdVar22;
                pdStack_160 = pdVar19;
                pdStack_158 = pdVar29;
                pdStack_150 = pdVar20;
                pdStack_140 = pdVar29;
                pdStack_130 = pdVar3;
                pdStack_120 = pdVar2;
                FUN_109931938(&pdStack_2b8,&pdStack_1f0,pdVar3);
              }
            }
            lVar45 = lVar45 + 8;
            uVar25 = uVar25 - 1;
            pdVar43 = pdVar43 + 1;
            lVar35 = lVar35 + 8;
            lStack_2e8 = lStack_2e8 + 8;
            pdVar19 = pdVar32;
          } while (pdVar32 != pdVar6);
        }
        pdVar43 = (double *)((long)pdVar30 + (long)pdVar39);
        _free(dStack_3b0);
        if (pdVar42 != pdVar43) {
          dVar16 = *pdVar12;
          dVar36 = pdVar12[3];
          pdStack_208 = (double *)0x0;
          lStack_210 = 0;
          pdStack_200 = (double *)0x0;
          lVar13 = 0;
          if (pdVar30 != (double *)0x0) {
            lVar13 = 0x7fffffffffffffff / (long)pdVar30;
          }
          if ((long)pdVar30 <= lVar13 && (ulong)((long)pdVar30 * (long)pdVar30) >> 0x3d == 0) {
            lVar13 = (long)pdVar30 * (long)pdVar30 * 8;
            _malloc();
            if (lVar13 != 0) {
              lStack_210 = lVar13;
              pdStack_208 = pdVar30;
              pdStack_200 = pdVar30;
              if (0 < (long)pdVar27) {
                lVar44 = (long)pdVar37 * 8 + -8;
                pdVar27 = (double *)((long)pdVar30 - 1);
                lVar13 = lVar44;
                pdVar37 = pdVar27;
                do {
                  pdVar19 = (double *)((long)pdVar30 + ~(ulong)pdVar37);
                  if (pdVar19 != (double *)0x0) {
                    dVar51 = *(double *)(lVar38 + (long)pdVar37 * 8);
                    pdVar47 = (double *)pdVar12[3];
                    uVar25 = lStack_210 + (long)pdVar37 * (long)pdStack_200 * 8 +
                             ((long)pdStack_200 - (long)pdVar19) * 8;
                    pdVar32 = (double *)(uVar25 >> 3 & 1);
                    if ((uVar25 & 7) != 0) {
                      pdVar32 = pdVar19;
                    }
                    if (pdVar32 != (double *)0x0) {
                      _bzero(uVar25,(long)pdVar32 << 3);
                    }
                    lVar35 = (long)pdVar19 - (long)pdVar32;
                    lVar45 = (lVar35 - (lVar35 >> 0x3f) & 0xfffffffffffffffeU) + (long)pdVar32;
                    if (1 < lVar35) {
                      lVar40 = lVar45;
                      if (lVar45 <= (long)((long)pdVar32 + 2U)) {
                        lVar40 = (long)pdVar32 + 2U;
                      }
                      _bzero(uVar25 + (long)pdVar32 * 8,
                             (lVar40 + ~(ulong)pdVar32 & 0x1ffffffffffffffe) * 8 + 0x10);
                    }
                    if (lVar45 < (long)pdVar19) {
                      _bzero(uVar25 + (lVar35 / 2) * 0x10 + (long)pdVar32 * 8,(lVar35 % 2) * 8);
                    }
                    pdStack_268 = (double *)((long)pdVar37 + 1);
                    pdStack_2b0 = (double *)((long)pdVar17 + ~(ulong)pdVar37);
                    pdStack_2b8 = pdVar1 + (long)((long)pdStack_268 +
                                                 (long)pdVar47 * (long)pdStack_268);
                    pdStack_1d8 = (double *)-dVar51;
                    pdStack_1b8 = pdVar1 + (long)pdVar47 * (long)pdVar37;
                    pdStack_1d0 = pdStack_1b8 + (long)pdStack_268;
                    uStack_168 = 0;
                    pdStack_2a8 = pdVar19;
                    pdStack_2a0 = pdVar1;
                    pdStack_298 = pdVar17;
                    pdStack_290 = pdVar30;
                    pdStack_288 = pdVar12;
                    pdStack_280 = pdVar39;
                    pdStack_278 = pdVar39;
                    pdStack_270 = pdVar22;
                    pdStack_260 = pdStack_268;
                    pdStack_258 = pdVar47;
                    pdStack_1e0 = pdStack_2b0;
                    pdStack_1c8 = pdStack_2b0;
                    pdStack_1b0 = pdVar17;
                    pdStack_1a0 = pdVar1;
                    pdStack_198 = pdVar17;
                    pdStack_190 = pdVar30;
                    pdStack_188 = pdVar12;
                    pdStack_180 = pdVar39;
                    pdStack_178 = pdVar39;
                    pdStack_170 = pdVar22;
                    pdStack_160 = pdVar37;
                    pdStack_158 = pdVar47;
                    pdStack_150 = pdStack_268;
                    pdStack_140 = pdVar47;
                    FUN_109931ba0(0x3ff0000000000000,&pdStack_2b8,&pdStack_1f0,uVar25);
                    if ((long)pdVar37 < (long)pdVar27) {
                      lVar35 = 0;
                      lVar45 = lVar44;
                      pdVar19 = pdVar27;
                      do {
                        lVar40 = lStack_210 + (long)pdStack_200 * (long)pdVar37 * 8;
                        dVar51 = *(double *)(lVar40 + (long)pdVar19 * 8);
                        *(double *)(lVar40 + (long)pdVar19 * 8) =
                             dVar51 * *(double *)
                                       (lStack_210 + (long)pdStack_200 * (long)pdVar19 * 8 +
                                       (long)pdVar19 * 8);
                        uVar25 = (long)pdVar30 + ~(ulong)pdVar19;
                        if (0 < (long)uVar25) {
                          uVar23 = lVar40 + ((long)pdStack_200 - uVar25) * 8;
                          uVar31 = uVar23 >> 3 & 1;
                          if ((uVar23 & 7) != 0) {
                            uVar31 = uVar25;
                          }
                          if (uVar31 != 0) {
                            pdVar32 = (double *)
                                      (lStack_210 +
                                      (long)pdStack_200 * lVar45 + ((long)pdStack_200 + lVar35) * 8)
                            ;
                            pdVar47 = (double *)
                                      (lStack_210 +
                                      lVar13 * (long)pdStack_200 + ((long)pdStack_200 + lVar35) * 8)
                            ;
                            uVar23 = uVar31;
                            do {
                              *pdVar47 = dVar51 * *pdVar32 + *pdVar47;
                              uVar23 = uVar23 - 1;
                              pdVar32 = pdVar32 + 1;
                              pdVar47 = pdVar47 + 1;
                            } while (uVar23 != 0);
                          }
                          lVar33 = uVar25 - uVar31;
                          lVar40 = (lVar33 - (lVar33 >> 0x3f) & 0xfffffffffffffffeU) + uVar31;
                          if (1 < lVar33) {
                            pdVar32 = (double *)
                                      (lStack_210 +
                                      (long)pdStack_200 * lVar45 + uVar31 * 8 +
                                      ((long)pdStack_200 + lVar35) * 8);
                            pdVar47 = (double *)
                                      (lStack_210 +
                                      lVar13 * (long)pdStack_200 + uVar31 * 8 +
                                      ((long)pdStack_200 + lVar35) * 8);
                            do {
                              dVar50 = *pdVar32;
                              pdVar47[1] = pdVar47[1] + pdVar32[1] * dVar51;
                              *pdVar47 = *pdVar47 + dVar50 * dVar51;
                              uVar31 = uVar31 + 2;
                              pdVar32 = pdVar32 + 2;
                              pdVar47 = pdVar47 + 2;
                            } while ((long)uVar31 < lVar40);
                          }
                          if (lVar40 < (long)uVar25) {
                            lVar33 = lStack_210 +
                                     lVar13 * (long)pdStack_200 + ((long)pdStack_200 + lVar35) * 8;
                            do {
                              *(double *)(lVar33 + lVar40 * 8) =
                                   dVar51 * *(double *)
                                             (lStack_210 +
                                              (long)pdStack_200 * lVar45 +
                                              ((long)pdStack_200 + lVar35) * 8 + lVar40 * 8) +
                                   *(double *)(lVar33 + lVar40 * 8);
                              lVar40 = lVar40 + 1;
                            } while (lVar35 + lVar40 != 0);
                          }
                        }
                        pdVar19 = (double *)((long)pdVar19 + -1);
                        lVar45 = lVar45 + -8;
                        lVar35 = lVar35 + -1;
                      } while ((long)pdVar37 < (long)pdVar19);
                    }
                  }
                  *(undefined8 *)
                   (lStack_210 + (long)pdStack_200 * (long)pdVar37 * 8 + (long)pdVar37 * 8) =
                       *(undefined8 *)(lVar38 + (long)pdVar37 * 8);
                  lVar13 = lVar13 + -8;
                  bVar10 = 0 < (long)pdVar37;
                  pdVar37 = (double *)((long)pdVar37 + -1);
                } while (bVar10);
              }
              pdVar37 = (double *)((long)pdVar42 - (long)pdVar43);
              pdStack_2b8 = (double *)0x0;
              pdStack_2b0 = (double *)0x0;
              pdStack_2a8 = (double *)0x0;
              lVar38 = 0;
              if (pdVar37 != (double *)0x0) {
                lVar38 = 0x7fffffffffffffff / (long)pdVar37;
              }
              if ((long)pdVar30 <= lVar38) {
                uVar25 = (long)pdVar37 * (long)pdVar30;
                pdVar27 = pdStack_2b8;
                if ((long)uVar25 < 1) {
LAB_109930874:
                  pdStack_2b8 = pdVar27;
                  plStack_220 = (long *)0x3ff0000000000000;
                  pdStack_1e8 = (double *)0x0;
                  pdStack_1f0 = (double *)0x0;
                  pdStack_2b0 = pdVar30;
                  pdStack_2a8 = pdVar37;
                  pdStack_1e0 = pdVar6;
                  pdStack_1d8 = pdVar37;
                  pdStack_1d0 = pdVar17;
                  if ((bRam00000001132dfa18 & 1) == 0) {
                    iVar14 = 0x132dfa18;
                    ___cxa_guard_acquire();
                    if (iVar14 != 0) {
                      uRam00000001132dfa08 = 0x80000;
                      uRam00000001132dfa00 = 0x4000;
                      lRam00000001132dfa10 = 0x80000;
                      ___cxa_guard_release(0x1132dfa18);
                    }
                  }
                  pdVar27 = pdStack_1d0;
                  pdVar30 = pdStack_1e0;
                  if ((long)pdStack_1e0 <= (long)pdVar37) {
                    pdVar30 = pdVar37;
                  }
                  pdVar22 = pdStack_1d0;
                  if ((long)pdStack_1d0 <= (long)pdVar30) {
                    pdVar22 = pdVar30;
                  }
                  pdStack_1c0 = pdVar27;
                  if (0x2f < (long)pdVar22) {
                    pdVar30 = (double *)
                              ((long)(uRam00000001132dfa00 - 0xc0) / 0x140 & 0xfffffffffffffff8);
                    if ((long)pdVar30 < 2) {
                      pdVar30 = (double *)0x1;
                    }
                    if ((long)pdVar30 < (long)pdStack_1d0) {
                      uVar25 = 0;
                      if (pdVar30 != (double *)0x0) {
                        uVar25 = (ulong)pdStack_1d0 / (ulong)pdVar30;
                      }
                      uVar31 = (long)pdStack_1d0 - uVar25 * (long)pdVar30;
                      pdStack_1d0 = pdVar30;
                      if (uVar31 != 0) {
                        lVar38 = uVar25 * 8 + 8;
                        lVar13 = 0;
                        if (lVar38 != 0) {
                          lVar13 = (long)((long)pdVar30 + ~uVar31) / lVar38;
                        }
                        pdStack_1d0 = pdVar30 + -lVar13;
                      }
                    }
                    uVar25 = (uRam00000001132dfa00 - 0xc0) +
                             (long)pdStack_1e0 * (long)pdStack_1d0 * -8;
                    if ((long)uVar25 < (long)pdStack_1d0 * 0x20) {
                      uVar31 = 0;
                      if ((long)pdVar30 << 5 != 0) {
                        uVar31 = 0x480000 / (ulong)((long)pdVar30 << 5);
                      }
                    }
                    else {
                      uVar31 = 0;
                      if ((long)pdStack_1d0 << 3 != 0) {
                        uVar31 = uVar25 / (ulong)((long)pdStack_1d0 << 3);
                      }
                    }
                    uVar25 = 0;
                    if ((long)pdStack_1d0 << 4 != 0) {
                      uVar25 = 0x180000 / (ulong)((long)pdStack_1d0 << 4);
                    }
                    if ((long)uVar25 <= (long)uVar31) {
                      uVar31 = uVar25;
                    }
                    pdStack_1c0 = pdStack_1d0;
                    if ((pdVar27 == pdStack_1d0) &&
                       ((long)pdVar37 <= (long)(uVar31 & 0xfffffffffffffffc))) {
                      uVar31 = (long)pdVar27 * (long)pdVar37 * 8;
                      uVar25 = uRam00000001132dfa00;
                      pdVar30 = pdStack_1e0;
                      if (0x400 < (long)uVar31) {
                        if (0x23f < (long)pdStack_1e0) {
                          pdVar30 = (double *)0x240;
                        }
                        uVar25 = uRam00000001132dfa08;
                        if (lRam00000001132dfa10 == 0 || 0x8000 < uVar31) {
                          uVar25 = 0x180000;
                          pdVar30 = pdStack_1e0;
                        }
                      }
                      pdVar22 = (double *)0x0;
                      if ((long)pdVar27 * 0x18 != 0) {
                        pdVar22 = (double *)(uVar25 / (ulong)((long)pdVar27 * 0x18));
                      }
                      if ((long)pdVar22 <= (long)pdVar30) {
                        pdVar30 = pdVar22;
                      }
                      if ((long)pdVar30 < 7) {
                        pdStack_1c0 = pdVar27;
                        if (pdVar30 == (double *)0x0) goto LAB_109930a50;
                      }
                      else {
                        pdVar30 = (double *)((((ulong)pdVar30 / 6) * 2 + (ulong)pdVar30 / 6) * 2);
                      }
                      lVar38 = 0;
                      if (pdVar30 != (double *)0x0) {
                        lVar38 = (long)pdStack_1e0 / (long)pdVar30;
                      }
                      lVar13 = (long)pdStack_1e0 - lVar38 * (long)pdVar30;
                      pdStack_1c0 = pdVar27;
                      pdStack_1e0 = pdVar30;
                      if (lVar13 != 0) {
                        lVar44 = lVar38 * 6 + 6;
                        lVar38 = 0;
                        if (lVar44 != 0) {
                          lVar38 = ((long)pdVar30 - lVar13) / lVar44;
                        }
                        pdStack_1e0 = (double *)((long)pdVar30 + lVar38 * -6);
                      }
                    }
                  }
LAB_109930a50:
                  lVar38 = (long)dVar16 + (long)pdVar39 * 8 + (long)dVar36 * (long)pdVar43 * 8;
                  pdStack_1c8 = (double *)((long)pdStack_1e0 * (long)pdStack_1c0);
                  pdStack_1c0 = (double *)((long)pdStack_1d8 * (long)pdStack_1c0);
                  FUN_1098e4038(pdVar6,pdVar37,pdVar17,pdVar1,pdVar12[3],lVar38,pdVar12[3],
                                pdStack_2b8,1,pdStack_2b0,&plStack_220,&pdStack_1f0);
                  _free(pdStack_1f0);
                  _free(pdStack_1e8);
                  plStack_220 = &lStack_210;
                  ppdStack_218 = &pdStack_2b8;
                  pdStack_1e8 = (double *)0x0;
                  pdStack_1f0 = (double *)0x0;
                  pdStack_1e0 = (double *)0x0;
                  FUN_1099123a0(&pdStack_1f0,&plStack_220,&uStack_1f1);
                  pdVar27 = pdStack_1e0;
                  pdVar30 = pdStack_1e8;
                  pdVar37 = pdStack_1f0;
                  if ((pdStack_2b0 != pdStack_1e8) || (pdStack_2a8 != pdStack_1e0)) {
                    if ((pdStack_1e8 != (double *)0x0) && (pdStack_1e0 != (double *)0x0)) {
                      lVar13 = 0;
                      if (pdStack_1e0 != (double *)0x0) {
                        lVar13 = 0x7fffffffffffffff / (long)pdStack_1e0;
                      }
                      if ((long)pdStack_1e8 <= lVar13) goto LAB_109930b2c;
                      goto LAB_109930fbc;
                    }
LAB_109930b2c:
                    uVar25 = (long)pdStack_1e0 * (long)pdStack_1e8;
                    pdVar22 = pdStack_2b8;
                    if ((long)pdStack_2a8 * (long)pdStack_2b0 - uVar25 != 0) {
                      _free(pdStack_2b8);
                      if (0 < (long)uVar25) {
                        if (uVar25 >> 0x3d == 0) {
                          pdVar22 = (double *)(uVar25 * 8);
                          _malloc();
                          if (pdVar22 != (double *)0x0) goto LAB_109930b6c;
                        }
LAB_109930fbc:
                        ___cxa_allocate_exception(8);
                        __ZNSt9bad_allocC1Ev();
                        ___cxa_throw();
                        goto LAB_109931028;
                      }
                      pdVar22 = (double *)0x0;
                    }
LAB_109930b6c:
                    pdStack_2b8 = pdVar22;
                    pdStack_2b0 = pdVar30;
                    pdStack_2a8 = pdVar27;
                  }
                  lVar13 = (long)pdVar27 * (long)pdVar30;
                  uVar25 = lVar13 - (lVar13 >> 0x3f) & 0xfffffffffffffffe;
                  if (1 < lVar13) {
                    lVar44 = 0;
                    pdVar30 = pdStack_2b8;
                    pdVar27 = pdVar37;
                    do {
                      dVar16 = *pdVar27;
                      pdVar30[1] = pdVar27[1];
                      *pdVar30 = dVar16;
                      lVar44 = lVar44 + 2;
                      pdVar30 = pdVar30 + 2;
                      pdVar27 = pdVar27 + 2;
                    } while (lVar44 < (long)uVar25);
                  }
                  lVar44 = lVar13 % 2;
                  if (lVar44 != 0 && lVar44 < 0 == SBORROW8(lVar13,uVar25)) {
                    pdVar30 = pdStack_2b8 + (lVar13 / 2) * 2;
                    pdVar37 = pdVar37 + (lVar13 / 2) * 2;
                    do {
                      *pdVar30 = *pdVar37;
                      lVar44 = lVar44 + -1;
                      pdVar30 = pdVar30 + 1;
                      pdVar37 = pdVar37 + 1;
                    } while (lVar44 != 0);
                  }
                  _free(pdStack_1f0);
                  pdVar37 = pdStack_2a8;
                  plStack_220 = (long *)0xbff0000000000000;
                  pdStack_1e8 = (double *)0x0;
                  pdStack_1f0 = (double *)0x0;
                  pdStack_1d8 = pdStack_2a8;
                  pdStack_1e0 = pdVar17;
                  pdStack_1d0 = pdVar6;
                  if ((bRam00000001132dfa18 & 1) == 0) {
                    iVar14 = 0x132dfa18;
                    ___cxa_guard_acquire();
                    if (iVar14 != 0) {
                      uRam00000001132dfa08 = 0x80000;
                      uRam00000001132dfa00 = 0x4000;
                      lRam00000001132dfa10 = 0x80000;
                      ___cxa_guard_release(0x1132dfa18);
                    }
                  }
                  pdVar27 = pdStack_1d0;
                  pdVar30 = pdStack_1e0;
                  if ((long)pdStack_1e0 <= (long)pdVar37) {
                    pdVar30 = pdVar37;
                  }
                  pdVar22 = pdStack_1d0;
                  if ((long)pdStack_1d0 <= (long)pdVar30) {
                    pdVar22 = pdVar30;
                  }
                  pdStack_1c0 = pdVar27;
                  if (0x2f < (long)pdVar22) {
                    pdVar30 = (double *)
                              ((long)(uRam00000001132dfa00 - 0xc0) / 0x140 & 0xfffffffffffffff8);
                    if ((long)pdVar30 < 2) {
                      pdVar30 = (double *)0x1;
                    }
                    if ((long)pdVar30 < (long)pdStack_1d0) {
                      uVar25 = 0;
                      if (pdVar30 != (double *)0x0) {
                        uVar25 = (ulong)pdStack_1d0 / (ulong)pdVar30;
                      }
                      uVar31 = (long)pdStack_1d0 - uVar25 * (long)pdVar30;
                      pdStack_1d0 = pdVar30;
                      if (uVar31 != 0) {
                        lVar13 = uVar25 * 8 + 8;
                        lVar44 = 0;
                        if (lVar13 != 0) {
                          lVar44 = (long)((long)pdVar30 + ~uVar31) / lVar13;
                        }
                        pdStack_1d0 = pdVar30 + -lVar44;
                      }
                    }
                    uVar25 = (uRam00000001132dfa00 - 0xc0) +
                             (long)pdStack_1e0 * (long)pdStack_1d0 * -8;
                    if ((long)uVar25 < (long)pdStack_1d0 * 0x20) {
                      uVar31 = 0;
                      if ((long)pdVar30 << 5 != 0) {
                        uVar31 = 0x480000 / (ulong)((long)pdVar30 << 5);
                      }
                    }
                    else {
                      uVar31 = 0;
                      if ((long)pdStack_1d0 << 3 != 0) {
                        uVar31 = uVar25 / (ulong)((long)pdStack_1d0 << 3);
                      }
                    }
                    uVar25 = 0;
                    if ((long)pdStack_1d0 << 4 != 0) {
                      uVar25 = 0x180000 / (ulong)((long)pdStack_1d0 << 4);
                    }
                    if ((long)uVar25 <= (long)uVar31) {
                      uVar31 = uVar25;
                    }
                    pdStack_1c0 = pdStack_1d0;
                    if ((pdVar27 == pdStack_1d0) &&
                       ((long)pdVar37 <= (long)(uVar31 & 0xfffffffffffffffc))) {
                      uVar31 = (long)pdVar27 * (long)pdVar37 * 8;
                      uVar25 = uRam00000001132dfa00;
                      pdVar30 = pdStack_1e0;
                      if (0x400 < (long)uVar31) {
                        if (0x23f < (long)pdStack_1e0) {
                          pdVar30 = (double *)0x240;
                        }
                        uVar25 = uRam00000001132dfa08;
                        if (lRam00000001132dfa10 == 0 || 0x8000 < uVar31) {
                          uVar25 = 0x180000;
                          pdVar30 = pdStack_1e0;
                        }
                      }
                      pdVar22 = (double *)0x0;
                      if ((long)pdVar27 * 0x18 != 0) {
                        pdVar22 = (double *)(uVar25 / (ulong)((long)pdVar27 * 0x18));
                      }
                      if ((long)pdVar22 <= (long)pdVar30) {
                        pdVar30 = pdVar22;
                      }
                      if ((long)pdVar30 < 7) {
                        pdStack_1c0 = pdVar27;
                        if (pdVar30 == (double *)0x0) goto LAB_109930dac;
                      }
                      else {
                        pdVar30 = (double *)((((ulong)pdVar30 / 6) * 2 + (ulong)pdVar30 / 6) * 2);
                      }
                      lVar13 = 0;
                      if (pdVar30 != (double *)0x0) {
                        lVar13 = (long)pdStack_1e0 / (long)pdVar30;
                      }
                      lVar44 = (long)pdStack_1e0 - lVar13 * (long)pdVar30;
                      pdStack_1c0 = pdVar27;
                      pdStack_1e0 = pdVar30;
                      if (lVar44 != 0) {
                        lVar45 = lVar13 * 6 + 6;
                        lVar13 = 0;
                        if (lVar45 != 0) {
                          lVar13 = ((long)pdVar30 - lVar44) / lVar45;
                        }
                        pdStack_1e0 = (double *)((long)pdVar30 + lVar13 * -6);
                      }
                    }
                  }
LAB_109930dac:
                  pdStack_1c8 = (double *)((long)pdStack_1e0 * (long)pdStack_1c0);
                  pdStack_1c0 = (double *)((long)pdStack_1d8 * (long)pdStack_1c0);
                  FUN_1098e5790(pdVar17,pdVar37,pdVar6,pdVar1,pdVar12[3],pdStack_2b8,pdStack_2b0,
                                lVar38,1,pdVar12[3],&plStack_220,&pdStack_1f0);
                  _free(pdStack_1f0);
                  _free(pdStack_1e8);
                  _free(pdStack_2b8);
                  _free(lStack_210);
                  goto LAB_109930e18;
                }
                if (uVar25 >> 0x3d == 0) {
                  pdVar27 = (double *)0x1;
                  _calloc(1,uVar25 * 8);
                  if (pdVar27 != (double *)0x0) goto LAB_109930874;
                }
              }
              ___cxa_allocate_exception(8);
              __ZNSt9bad_allocC1Ev();
              ___cxa_throw();
              goto LAB_109931028;
            }
          }
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_109931028;
        }
LAB_109930e18:
        pdVar39 = (double *)((long)pdVar39 + (long)pdVar5);
        lStack_398 = lStack_398 + (long)pdVar5 * 8;
        uStack_3a0 = uStack_3a0 - (long)pdVar5;
        pdVar26 = (double *)((long)pdVar26 - (long)pdVar5);
      } while ((long)pdVar39 < (long)pdVar4);
    }
    *(undefined1 *)(pdVar12 + 9) = 1;
    lVar38 = puVar11[1];
    puVar11[1] = pdVar12;
    if (lVar38 != 0) {
      _free(*(undefined8 *)(lVar38 + 0x38));
      _free(*(undefined8 *)(lVar38 + 0x28));
      __ZdlPv(lVar38);
    }
    if ((char)pcVar9[0x17] < '\0') {
      *(undefined8 *)(pcVar9 + 8) = 8;
      pcVar9 = *(code **)pcVar9;
    }
    else {
      pcVar9[0x17] = (code)0x8;
    }
    *(undefined8 *)pcVar9 = 0x2e73736563637553;
    pcVar9[8] = (code)0x0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
      return (undefined8 *)0x0;
    }
    ___stack_chk_fail();
  }
  else {
    dStack_3f0 = (double)((long)pdVar42 << 3);
    _malloc();
    if (dStack_3f0 != 0.0) {
      pdVar12[7] = dStack_3f0;
      goto LAB_10992fbc0;
    }
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109931028:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10993102c);
  (*pcVar9)();
}



/* Entry: 10992fab4; end: 1099310df;  */

undefined8 FUN_10992fab4(long param_1,int param_2,int param_3,double param_4,undefined8 *param_5)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  long lVar7;
  double *pdVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  double *pdVar12;
  double dVar13;
  long lVar14;
  double *pdVar15;
  double *pdVar16;
  double *pdVar17;
  double *pdVar18;
  double *pdVar19;
  double *pdVar20;
  ulong uVar21;
  double *pdVar22;
  ulong uVar23;
  double *pdVar24;
  double *pdVar25;
  double *pdVar26;
  double *pdVar27;
  double *pdVar28;
  ulong uVar29;
  double *pdVar30;
  long lVar31;
  double *pdVar32;
  long lVar33;
  double dVar34;
  double *pdVar35;
  long lVar36;
  double *pdVar37;
  long lVar38;
  double *pdVar39;
  double *pdVar40;
  double *pdVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  double *pdVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dStack_360;
  double dStack_320;
  ulong uStack_310;
  long lStack_308;
  long lStack_258;
  double *pdStack_228;
  double *pdStack_220;
  double *pdStack_218;
  double *pdStack_210;
  double *pdStack_208;
  double *pdStack_200;
  double *pdStack_1f8;
  double *pdStack_1f0;
  double *pdStack_1e8;
  double *pdStack_1e0;
  double *pdStack_1d8;
  double *pdStack_1d0;
  double *pdStack_1c8;
  double *pdStack_1c0;
  double *pdStack_1b8;
  double *pdStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  double *pdStack_198;
  long *plStack_190;
  double **ppdStack_188;
  long lStack_180;
  double *pdStack_178;
  double *pdStack_170;
  undefined1 uStack_161;
  double *pdStack_160;
  double *pdStack_158;
  double *pdStack_150;
  double *pdStack_148;
  double *pdStack_140;
  double *pdStack_138;
  double *pdStack_130;
  double *pdStack_128;
  double *pdStack_120;
  double *pdStack_118;
  double *pdStack_110;
  double *pdStack_108;
  double *pdStack_100;
  double *pdStack_f8;
  double *pdStack_f0;
  double *pdStack_e8;
  double *pdStack_e0;
  undefined8 uStack_d8;
  double *pdStack_d0;
  double *pdStack_c8;
  double *pdStack_c0;
  double *pdStack_b0;
  double *pdStack_a0;
  double *pdStack_90;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar39 = (double *)(long)param_2;
  pdVar40 = (double *)(long)param_3;
  pdVar12 = (double *)0x50;
  __Znwm();
  *pdVar12 = param_4;
  pdVar12[1] = (double)pdVar39;
  pdVar12[2] = (double)pdVar40;
  pdVar12[3] = (double)pdVar39;
  pdVar12[5] = 0.0;
  pdVar12[6] = 0.0;
  pdVar4 = pdVar40;
  if ((long)param_2 <= (long)pdVar40) {
    pdVar4 = pdVar39;
  }
  if (pdVar4 != (double *)0x0) {
    if ((long)pdVar4 < 1) {
      dVar13 = 0.0;
    }
    else {
      dVar13 = (double)((long)pdVar4 << 3);
      _malloc();
      if (dVar13 == 0.0) {
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        goto LAB_109931028;
      }
    }
    pdVar12[5] = dVar13;
  }
  pdVar12[7] = 0.0;
  pdVar12[6] = (double)pdVar4;
  pdVar12[8] = 0.0;
  if (param_3 < 1) {
    dStack_360 = 0.0;
LAB_10992fbc0:
    *(undefined1 *)(pdVar12 + 9) = 0;
    pdVar12[6] = (double)pdVar4;
    pdVar12[8] = (double)pdVar40;
    pdVar5 = pdVar4;
    if (0x2f < (long)pdVar4) {
      pdVar5 = (double *)0x30;
    }
    if (0 < (long)pdVar4) {
      pdVar37 = (double *)0x0;
      uStack_310 = (long)pdVar39 - 1;
      lStack_308 = 0;
      pdVar24 = pdVar4;
      do {
        pdVar35 = pdVar24;
        if ((long)pdVar40 <= (long)pdVar24) {
          pdVar35 = pdVar40;
        }
        if ((long)pdVar39 <= (long)pdVar35) {
          pdVar35 = pdVar39;
        }
        if (0x2f < (long)pdVar35) {
          pdVar35 = (double *)0x30;
        }
        pdVar25 = (double *)((long)pdVar4 - (long)pdVar37);
        pdVar28 = pdVar5;
        if ((long)pdVar25 <= (long)pdVar5) {
          pdVar28 = pdVar25;
        }
        pdVar15 = (double *)((long)pdVar39 - (long)pdVar37);
        dVar13 = *pdVar12;
        pdVar20 = (double *)pdVar12[3];
        dVar34 = pdVar12[5];
        pdVar6 = pdVar28;
        if ((long)pdVar15 <= (long)pdVar28) {
          pdVar6 = pdVar15;
        }
        if (dStack_360 == 0.0) {
          if ((long)pdVar25 < 1) {
            dStack_320 = 0.0;
            dVar49 = 0.0;
          }
          else {
            dVar49 = (double)((long)pdVar28 << 3);
            _malloc();
            dStack_320 = dVar49;
            if (dVar49 == 0.0) {
              ___cxa_allocate_exception(8);
              __ZNSt9bad_allocC1Ev();
              ___cxa_throw();
              goto LAB_109931028;
            }
          }
        }
        else {
          dStack_320 = 0.0;
          dVar49 = dStack_360;
        }
        pdVar1 = (double *)((long)dVar13 + (long)pdVar37 * 8 + (long)pdVar20 * (long)pdVar37 * 8);
        lVar36 = (long)dVar34 + (long)pdVar37 * 8;
        if (0 < (long)pdVar6) {
          lVar43 = 0;
          lVar38 = -(long)pdVar35;
          lVar33 = (long)dVar13 + lStack_308 + lStack_308 * (long)pdVar20;
          lVar14 = lVar33 + 0x38;
          lVar42 = lVar33 + 8;
          lStack_258 = 8;
          uVar23 = uStack_310;
          pdVar41 = (double *)((long)dVar49 + 8U);
          pdVar17 = (double *)0x0;
          do {
            lVar38 = lVar38 + 1;
            pdVar32 = (double *)((long)pdVar15 - (long)pdVar17);
            pdVar30 = (double *)((long)pdVar17 + 1);
            pdVar2 = (double *)((long)pdVar28 + ~(ulong)pdVar17);
            dVar13 = pdVar12[3];
            pdVar16 = pdVar1 + (long)((long)dVar13 * (long)pdVar17 + (long)pdVar17);
            pdVar45 = pdVar16 + 1;
            pdVar8 = (double *)((long)pdVar32 - 1);
            if (pdVar8 == (double *)0x0) {
              dVar48 = *pdVar16;
LAB_10992ff84:
              *(undefined8 *)(lVar36 + (long)pdVar17 * 8) = 0;
              pdVar16 = (double *)((ulong)pdVar45 >> 3 & 1);
              if ((long)pdVar8 <= (long)pdVar16) {
                pdVar16 = pdVar8;
              }
              if (((ulong)pdVar45 & 7) != 0) {
                pdVar16 = pdVar8;
              }
              if (0 < (long)pdVar16) {
                _bzero(pdVar45,(long)pdVar16 << 3);
              }
              lVar44 = (long)pdVar8 - (long)pdVar16;
              lVar31 = (lVar44 - (lVar44 >> 0x3f) & 0xfffffffffffffffeU) + (long)pdVar16;
              if (1 < lVar44) {
                lVar7 = lVar31;
                if (lVar31 <= (long)((long)pdVar16 + 2U)) {
                  lVar7 = (long)pdVar16 + 2U;
                }
                _bzero(pdVar45 + (long)pdVar16,
                       (lVar7 + ~(ulong)pdVar16 & 0x1ffffffffffffffe) * 8 + 0x10);
              }
              if (lVar31 < (long)pdVar8) {
                _bzero(pdVar45 + (lVar44 / 2) * 2 + (long)pdVar16,(lVar44 % 2) * 8);
              }
              pdVar27 = (double *)pdVar12[3];
              pdVar45 = pdVar1 + (long)pdVar27 * (long)pdVar17;
              pdVar45[(long)pdVar17] = dVar48;
              pdVar26 = pdVar1 + (long)((long)pdVar17 + (long)pdVar27 * (long)pdVar30);
              dVar13 = *(double *)(lVar36 + (long)pdVar17 * 8);
              if (pdVar32 != (double *)0x1) {
                pdVar18 = (double *)((long)pdVar15 - (long)pdVar8);
                pdVar16 = pdVar45 + (long)pdVar18;
                goto LAB_1099300c0;
              }
              if (((ulong)pdVar26 & 7) == 0) {
                if (0 < (long)pdVar2) {
                  lVar44 = (long)pdVar27 * lStack_258;
                  lVar31 = lVar38;
                  do {
                    *(double *)(lVar33 + lVar44) = (1.0 - dVar13) * *(double *)(lVar33 + lVar44);
                    lVar44 = lVar44 + (long)pdVar27 * 8;
                    bVar10 = lVar31 != -1;
                    lVar31 = lVar31 + 1;
                  } while (bVar10);
                }
              }
              else if (0 < (long)pdVar2) {
                pdVar17 = (double *)(lVar33 + (long)pdVar27 * lStack_258);
                lVar31 = lVar38;
                do {
                  *pdVar17 = (1.0 - dVar13) * *pdVar17;
                  pdVar17 = pdVar17 + (long)pdVar27;
                  bVar10 = lVar31 != -1;
                  lVar31 = lVar31 + 1;
                } while (bVar10);
              }
            }
            else {
              pdVar26 = (double *)((long)pdVar32 + 2);
              if (-1 < (long)pdVar8) {
                pdVar26 = pdVar8;
              }
              if (pdVar32 < (double *)0x3) {
                dVar34 = *pdVar45 * *pdVar45;
              }
              else {
                uVar29 = (long)pdVar8 - ((long)pdVar8 >> 0x3f) & 0xfffffffffffffffe;
                dVar34 = *pdVar45 * *pdVar45;
                dVar48 = pdVar16[2] * pdVar16[2];
                if (4 < (long)pdVar32) {
                  uVar21 = (ulong)pdVar26 & 0xfffffffffffffffc;
                  dVar47 = pdVar16[3] * pdVar16[3];
                  dVar46 = pdVar16[4] * pdVar16[4];
                  if ((double *)0x7 < pdVar8) {
                    pdVar26 = (double *)(lVar14 + lVar43 + lVar43 * (long)dVar13);
                    lVar31 = 4;
                    do {
                      dVar34 = dVar34 + pdVar26[-2] * pdVar26[-2];
                      dVar48 = dVar48 + pdVar26[-1] * pdVar26[-1];
                      dVar47 = dVar47 + *pdVar26 * *pdVar26;
                      dVar46 = dVar46 + pdVar26[1] * pdVar26[1];
                      lVar31 = lVar31 + 4;
                      pdVar26 = pdVar26 + 4;
                    } while (lVar31 < (long)uVar21);
                  }
                  dVar34 = dVar47 + dVar34;
                  dVar48 = dVar46 + dVar48;
                  if ((long)uVar21 < (long)uVar29) {
                    dVar46 = (pdVar45 + uVar21)[1];
                    dVar47 = pdVar45[uVar21];
                    dVar34 = dVar34 + dVar47 * dVar47;
                    dVar48 = dVar48 + dVar46 * dVar46;
                  }
                }
                dVar34 = dVar34 + dVar48;
                if ((long)uVar29 < (long)pdVar8) {
                  lVar31 = uVar23 - uVar29;
                  pdVar26 = (double *)
                            (lVar42 + lVar43 + lVar43 * (long)dVar13 + ((long)pdVar8 / 2) * 0x10);
                  do {
                    dVar34 = dVar34 + *pdVar26 * *pdVar26;
                    lVar31 = lVar31 + -1;
                    pdVar26 = pdVar26 + 1;
                  } while (lVar31 != 0);
                }
              }
              dVar48 = *pdVar16;
              if (dVar34 <= 2.2250738585072014e-308) goto LAB_10992ff84;
              dVar34 = SQRT(dVar34 + dVar48 * dVar48);
              if (0.0 <= dVar48) {
                dVar34 = -dVar34;
              }
              dVar47 = dVar48 - dVar34;
              pdVar16 = (double *)((ulong)pdVar45 >> 3 & 1);
              if ((long)pdVar8 <= (long)pdVar16) {
                pdVar16 = pdVar8;
              }
              if (((ulong)pdVar45 & 7) != 0) {
                pdVar16 = pdVar8;
              }
              if (0 < (long)pdVar16) {
                pdVar26 = (double *)(lVar42 + lVar43 + lVar43 * (long)dVar13);
                pdVar45 = pdVar16;
                do {
                  *pdVar26 = *pdVar26 / dVar47;
                  pdVar45 = (double *)((long)pdVar45 - 1);
                  pdVar26 = pdVar26 + 1;
                } while (pdVar45 != (double *)0x0);
              }
              lVar44 = (long)pdVar8 - (long)pdVar16;
              uVar29 = lVar44 - (lVar44 >> 0x3f) & 0xfffffffffffffffe;
              lVar31 = uVar29 + (long)pdVar16;
              if (1 < lVar44) {
                pdVar26 = (double *)(lVar42 + lVar43 + lVar43 * (long)dVar13 + (long)pdVar16 * 8);
                pdVar45 = pdVar16;
                do {
                  pdVar26[1] = pdVar26[1] / dVar47;
                  *pdVar26 = *pdVar26 / dVar47;
                  pdVar45 = (double *)((long)pdVar45 + 2);
                  pdVar26 = pdVar26 + 2;
                } while ((long)pdVar45 < lVar31);
              }
              if (lVar31 < (long)pdVar8) {
                lVar31 = (uVar23 - (long)pdVar16) - uVar29;
                pdVar45 = (double *)
                          (lVar42 + lVar43 + lVar43 * (long)dVar13 + (lVar44 / 2) * 0x10 +
                                    (long)pdVar16 * 8);
                do {
                  *pdVar45 = *pdVar45 / dVar47;
                  lVar31 = lVar31 + -1;
                  pdVar45 = pdVar45 + 1;
                } while (lVar31 != 0);
              }
              *(double *)(lVar36 + (long)pdVar17 * 8) = (dVar34 - dVar48) / dVar34;
              pdVar27 = (double *)pdVar12[3];
              pdVar45 = pdVar1 + (long)pdVar27 * (long)pdVar17;
              pdVar45[(long)pdVar17] = dVar34;
              pdVar26 = pdVar1 + (long)((long)pdVar17 + (long)pdVar27 * (long)pdVar30);
              pdVar18 = (double *)((long)pdVar15 - (long)pdVar8);
              pdVar16 = pdVar45 + (long)pdVar18;
              dVar13 = *(double *)(lVar36 + (long)pdVar17 * 8);
LAB_1099300c0:
              if (dVar13 != 0.0) {
                pdVar22 = pdVar26 + 1;
                pdVar3 = (double *)((long)dVar49 + 8U) + (long)pdVar17;
                pdVar19 = (double *)((ulong)pdVar3 >> 3 & 1);
                if ((long)pdVar2 <= (long)pdVar19) {
                  pdVar19 = pdVar2;
                }
                uStack_1a0 = 0;
                uStack_1a8 = 1;
                if (((ulong)dVar49 & 7) != 0) {
                  pdVar19 = pdVar2;
                }
                pdStack_228 = pdVar22;
                pdStack_220 = pdVar8;
                pdStack_218 = pdVar2;
                pdStack_210 = pdVar26;
                pdStack_208 = pdVar32;
                pdStack_200 = pdVar2;
                pdStack_1f8 = pdVar1;
                pdStack_1f0 = pdVar15;
                pdStack_1e8 = pdVar28;
                pdStack_1e0 = pdVar12;
                pdStack_1d8 = pdVar37;
                pdStack_1d0 = pdVar37;
                pdStack_1c8 = pdVar20;
                pdStack_1c0 = pdVar17;
                pdStack_1b8 = pdVar30;
                pdStack_1b0 = pdVar27;
                pdStack_198 = pdVar27;
                if (0 < (long)pdVar19) {
                  _bzero(pdVar3,(long)pdVar19 << 3);
                }
                lVar44 = (long)pdVar2 - (long)pdVar19;
                lVar31 = (lVar44 - (lVar44 >> 0x3f) & 0xfffffffffffffffeU) + (long)pdVar19;
                if (1 < lVar44) {
                  lVar7 = lVar31;
                  if (lVar31 <= (long)((long)pdVar19 + 2U)) {
                    lVar7 = (long)pdVar19 + 2U;
                  }
                  _bzero(pdVar3 + (long)pdVar19,
                         (lVar7 + ~(ulong)pdVar19 & 0x1ffffffffffffffe) * 8 + 0x10);
                }
                if (lVar31 < (long)pdVar2) {
                  _bzero(pdVar3 + (lVar44 / 2) * 2 + (long)pdVar19,(lVar44 % 2) * 8);
                }
                if (pdVar2 == (double *)0x1) {
                  pdVar19 = (double *)((long)pdVar32 + 2);
                  if (-1 < (long)pdVar8) {
                    pdVar19 = pdVar8;
                  }
                  if (pdVar32 < (double *)0x3) {
                    dVar13 = *pdVar16 * *pdVar22;
                  }
                  else {
                    uVar29 = (long)pdVar8 - ((long)pdVar8 >> 0x3f) & 0xfffffffffffffffe;
                    dVar13 = *pdVar16 * *pdVar22;
                    dVar34 = pdVar16[1] * pdVar26[2];
                    if (4 < (long)pdVar32) {
                      uVar21 = (ulong)pdVar19 & 0xfffffffffffffffc;
                      dVar48 = pdVar16[2] * pdVar26[3];
                      dVar47 = pdVar16[3] * pdVar26[4];
                      if ((double *)0x7 < pdVar8) {
                        pdVar32 = pdVar26 + 7;
                        pdVar19 = pdVar16 + 6;
                        lVar31 = 4;
                        do {
                          dVar13 = dVar13 + pdVar19[-2] * pdVar32[-2];
                          dVar34 = dVar34 + pdVar19[-1] * pdVar32[-1];
                          dVar48 = dVar48 + *pdVar19 * *pdVar32;
                          dVar47 = dVar47 + pdVar19[1] * pdVar32[1];
                          lVar31 = lVar31 + 4;
                          pdVar32 = pdVar32 + 4;
                          pdVar19 = pdVar19 + 4;
                        } while (lVar31 < (long)uVar21);
                      }
                      dVar13 = dVar48 + dVar13;
                      dVar34 = dVar47 + dVar34;
                      if ((long)uVar21 < (long)uVar29) {
                        dVar13 = dVar13 + pdVar16[uVar21] * pdVar22[uVar21];
                        dVar34 = dVar34 + (pdVar16 + uVar21)[1] * (pdVar22 + uVar21)[1];
                      }
                    }
                    dVar13 = dVar13 + dVar34;
                    if ((long)uVar29 < (long)pdVar8) {
                      do {
                        dVar13 = dVar13 + pdVar16[uVar29] * pdVar22[uVar29];
                        uVar29 = uVar29 + 1;
                      } while (uVar23 != uVar29);
                    }
                  }
                  *pdVar3 = dVar13 + *pdVar3;
LAB_1099303a8:
                  dVar13 = pdVar12[3];
                  pdVar22 = pdVar41;
                  pdVar32 = pdVar26;
                  lVar31 = lVar38;
                  do {
                    *pdVar22 = *pdVar32 + *pdVar22;
                    pdVar32 = pdVar32 + (long)dVar13;
                    bVar10 = lVar31 != -1;
                    lVar31 = lVar31 + 1;
                    pdVar22 = pdVar22 + 1;
                  } while (bVar10);
                  lVar31 = 0;
                  dVar34 = *(double *)(lVar36 + (long)pdVar17 * 8);
                  do {
                    *pdVar26 = *pdVar26 - dVar34 * pdVar41[lVar31];
                    lVar31 = lVar31 + 1;
                    pdVar26 = pdVar26 + (long)dVar13;
                  } while (lVar38 + lVar31 != 0);
                }
                else {
                  pdStack_100 = pdStack_1c8;
                  pdStack_108 = pdStack_1d0;
                  pdStack_f0 = pdStack_1b8;
                  pdStack_f8 = pdStack_1c0;
                  pdStack_e0 = (double *)uStack_1a8;
                  pdStack_e8 = pdStack_1b0;
                  pdStack_d0 = pdStack_198;
                  uStack_d8 = uStack_1a0;
                  pdStack_140 = pdStack_208;
                  pdStack_148 = pdStack_210;
                  pdStack_130 = pdStack_1f8;
                  pdStack_138 = pdStack_200;
                  pdStack_120 = pdStack_1e8;
                  pdStack_128 = pdStack_1f0;
                  pdStack_110 = pdStack_1d8;
                  pdStack_118 = pdStack_1e0;
                  pdStack_160 = pdVar22;
                  pdStack_158 = pdVar8;
                  pdStack_150 = pdVar2;
                  FUN_1099317d4(0x3ff0000000000000,&pdStack_160,pdVar16);
                  if (0 < (long)pdVar2) goto LAB_1099303a8;
                }
                pdStack_148 = *(double **)(lVar36 + (long)pdVar17 * 8);
                uStack_d8 = 0;
                pdStack_158 = pdVar8;
                pdStack_140 = pdVar16;
                pdStack_138 = pdVar8;
                pdStack_128 = pdVar45;
                pdStack_120 = pdVar15;
                pdStack_110 = pdVar1;
                pdStack_108 = pdVar15;
                pdStack_100 = pdVar28;
                pdStack_f8 = pdVar12;
                pdStack_f0 = pdVar37;
                pdStack_e8 = pdVar37;
                pdStack_e0 = pdVar20;
                pdStack_d0 = pdVar17;
                pdStack_c8 = pdVar27;
                pdStack_c0 = pdVar18;
                pdStack_b0 = pdVar27;
                pdStack_a0 = pdVar3;
                pdStack_90 = pdVar2;
                FUN_109931938(&pdStack_228,&pdStack_160,pdVar3);
              }
            }
            lVar43 = lVar43 + 8;
            uVar23 = uVar23 - 1;
            pdVar41 = pdVar41 + 1;
            lVar33 = lVar33 + 8;
            lStack_258 = lStack_258 + 8;
            pdVar17 = pdVar30;
          } while (pdVar30 != pdVar6);
        }
        pdVar41 = (double *)((long)pdVar28 + (long)pdVar37);
        _free(dStack_320);
        if (pdVar40 != pdVar41) {
          dVar13 = *pdVar12;
          dVar34 = pdVar12[3];
          pdStack_178 = (double *)0x0;
          lStack_180 = 0;
          pdStack_170 = (double *)0x0;
          lVar14 = 0;
          if (pdVar28 != (double *)0x0) {
            lVar14 = 0x7fffffffffffffff / (long)pdVar28;
          }
          if ((long)pdVar28 <= lVar14 && (ulong)((long)pdVar28 * (long)pdVar28) >> 0x3d == 0) {
            lVar14 = (long)pdVar28 * (long)pdVar28 * 8;
            _malloc();
            if (lVar14 != 0) {
              lStack_180 = lVar14;
              pdStack_178 = pdVar28;
              pdStack_170 = pdVar28;
              if (0 < (long)pdVar25) {
                lVar42 = (long)pdVar35 * 8 + -8;
                pdVar25 = (double *)((long)pdVar28 - 1);
                lVar14 = lVar42;
                pdVar35 = pdVar25;
                do {
                  pdVar17 = (double *)((long)pdVar28 + ~(ulong)pdVar35);
                  if (pdVar17 != (double *)0x0) {
                    dVar49 = *(double *)(lVar36 + (long)pdVar35 * 8);
                    pdVar45 = (double *)pdVar12[3];
                    uVar23 = lStack_180 + (long)pdVar35 * (long)pdStack_170 * 8 +
                             ((long)pdStack_170 - (long)pdVar17) * 8;
                    pdVar30 = (double *)(uVar23 >> 3 & 1);
                    if ((uVar23 & 7) != 0) {
                      pdVar30 = pdVar17;
                    }
                    if (pdVar30 != (double *)0x0) {
                      _bzero(uVar23,(long)pdVar30 << 3);
                    }
                    lVar33 = (long)pdVar17 - (long)pdVar30;
                    lVar43 = (lVar33 - (lVar33 >> 0x3f) & 0xfffffffffffffffeU) + (long)pdVar30;
                    if (1 < lVar33) {
                      lVar38 = lVar43;
                      if (lVar43 <= (long)((long)pdVar30 + 2U)) {
                        lVar38 = (long)pdVar30 + 2U;
                      }
                      _bzero(uVar23 + (long)pdVar30 * 8,
                             (lVar38 + ~(ulong)pdVar30 & 0x1ffffffffffffffe) * 8 + 0x10);
                    }
                    if (lVar43 < (long)pdVar17) {
                      _bzero(uVar23 + (lVar33 / 2) * 0x10 + (long)pdVar30 * 8,(lVar33 % 2) * 8);
                    }
                    pdStack_1d8 = (double *)((long)pdVar35 + 1);
                    pdStack_220 = (double *)((long)pdVar15 + ~(ulong)pdVar35);
                    pdStack_228 = pdVar1 + (long)((long)pdStack_1d8 +
                                                 (long)pdVar45 * (long)pdStack_1d8);
                    pdStack_148 = (double *)-dVar49;
                    pdStack_128 = pdVar1 + (long)pdVar45 * (long)pdVar35;
                    pdStack_140 = pdStack_128 + (long)pdStack_1d8;
                    uStack_d8 = 0;
                    pdStack_218 = pdVar17;
                    pdStack_210 = pdVar1;
                    pdStack_208 = pdVar15;
                    pdStack_200 = pdVar28;
                    pdStack_1f8 = pdVar12;
                    pdStack_1f0 = pdVar37;
                    pdStack_1e8 = pdVar37;
                    pdStack_1e0 = pdVar20;
                    pdStack_1d0 = pdStack_1d8;
                    pdStack_1c8 = pdVar45;
                    pdStack_150 = pdStack_220;
                    pdStack_138 = pdStack_220;
                    pdStack_120 = pdVar15;
                    pdStack_110 = pdVar1;
                    pdStack_108 = pdVar15;
                    pdStack_100 = pdVar28;
                    pdStack_f8 = pdVar12;
                    pdStack_f0 = pdVar37;
                    pdStack_e8 = pdVar37;
                    pdStack_e0 = pdVar20;
                    pdStack_d0 = pdVar35;
                    pdStack_c8 = pdVar45;
                    pdStack_c0 = pdStack_1d8;
                    pdStack_b0 = pdVar45;
                    FUN_109931ba0(0x3ff0000000000000,&pdStack_228,&pdStack_160,uVar23);
                    if ((long)pdVar35 < (long)pdVar25) {
                      lVar33 = 0;
                      lVar43 = lVar42;
                      pdVar17 = pdVar25;
                      do {
                        lVar38 = lStack_180 + (long)pdStack_170 * (long)pdVar35 * 8;
                        dVar49 = *(double *)(lVar38 + (long)pdVar17 * 8);
                        *(double *)(lVar38 + (long)pdVar17 * 8) =
                             dVar49 * *(double *)
                                       (lStack_180 + (long)pdStack_170 * (long)pdVar17 * 8 +
                                       (long)pdVar17 * 8);
                        uVar23 = (long)pdVar28 + ~(ulong)pdVar17;
                        if (0 < (long)uVar23) {
                          uVar21 = lVar38 + ((long)pdStack_170 - uVar23) * 8;
                          uVar29 = uVar21 >> 3 & 1;
                          if ((uVar21 & 7) != 0) {
                            uVar29 = uVar23;
                          }
                          if (uVar29 != 0) {
                            pdVar30 = (double *)
                                      (lStack_180 +
                                      (long)pdStack_170 * lVar43 + ((long)pdStack_170 + lVar33) * 8)
                            ;
                            pdVar45 = (double *)
                                      (lStack_180 +
                                      lVar14 * (long)pdStack_170 + ((long)pdStack_170 + lVar33) * 8)
                            ;
                            uVar21 = uVar29;
                            do {
                              *pdVar45 = dVar49 * *pdVar30 + *pdVar45;
                              uVar21 = uVar21 - 1;
                              pdVar30 = pdVar30 + 1;
                              pdVar45 = pdVar45 + 1;
                            } while (uVar21 != 0);
                          }
                          lVar31 = uVar23 - uVar29;
                          lVar38 = (lVar31 - (lVar31 >> 0x3f) & 0xfffffffffffffffeU) + uVar29;
                          if (1 < lVar31) {
                            pdVar30 = (double *)
                                      (lStack_180 +
                                      (long)pdStack_170 * lVar43 + uVar29 * 8 +
                                      ((long)pdStack_170 + lVar33) * 8);
                            pdVar45 = (double *)
                                      (lStack_180 +
                                      lVar14 * (long)pdStack_170 + uVar29 * 8 +
                                      ((long)pdStack_170 + lVar33) * 8);
                            do {
                              dVar48 = *pdVar30;
                              pdVar45[1] = pdVar45[1] + pdVar30[1] * dVar49;
                              *pdVar45 = *pdVar45 + dVar48 * dVar49;
                              uVar29 = uVar29 + 2;
                              pdVar30 = pdVar30 + 2;
                              pdVar45 = pdVar45 + 2;
                            } while ((long)uVar29 < lVar38);
                          }
                          if (lVar38 < (long)uVar23) {
                            lVar31 = lStack_180 +
                                     lVar14 * (long)pdStack_170 + ((long)pdStack_170 + lVar33) * 8;
                            do {
                              *(double *)(lVar31 + lVar38 * 8) =
                                   dVar49 * *(double *)
                                             (lStack_180 +
                                              (long)pdStack_170 * lVar43 +
                                              ((long)pdStack_170 + lVar33) * 8 + lVar38 * 8) +
                                   *(double *)(lVar31 + lVar38 * 8);
                              lVar38 = lVar38 + 1;
                            } while (lVar33 + lVar38 != 0);
                          }
                        }
                        pdVar17 = (double *)((long)pdVar17 + -1);
                        lVar43 = lVar43 + -8;
                        lVar33 = lVar33 + -1;
                      } while ((long)pdVar35 < (long)pdVar17);
                    }
                  }
                  *(undefined8 *)
                   (lStack_180 + (long)pdStack_170 * (long)pdVar35 * 8 + (long)pdVar35 * 8) =
                       *(undefined8 *)(lVar36 + (long)pdVar35 * 8);
                  lVar14 = lVar14 + -8;
                  bVar10 = 0 < (long)pdVar35;
                  pdVar35 = (double *)((long)pdVar35 + -1);
                } while (bVar10);
              }
              pdVar35 = (double *)((long)pdVar40 - (long)pdVar41);
              pdStack_228 = (double *)0x0;
              pdStack_220 = (double *)0x0;
              pdStack_218 = (double *)0x0;
              lVar36 = 0;
              if (pdVar35 != (double *)0x0) {
                lVar36 = 0x7fffffffffffffff / (long)pdVar35;
              }
              if ((long)pdVar28 <= lVar36) {
                uVar23 = (long)pdVar35 * (long)pdVar28;
                pdVar25 = pdStack_228;
                if ((long)uVar23 < 1) {
LAB_109930874:
                  pdStack_228 = pdVar25;
                  plStack_190 = (long *)0x3ff0000000000000;
                  pdStack_158 = (double *)0x0;
                  pdStack_160 = (double *)0x0;
                  pdStack_220 = pdVar28;
                  pdStack_218 = pdVar35;
                  pdStack_150 = pdVar6;
                  pdStack_148 = pdVar35;
                  pdStack_140 = pdVar15;
                  if ((bRam00000001132dfa18 & 1) == 0) {
                    iVar11 = 0x132dfa18;
                    ___cxa_guard_acquire();
                    if (iVar11 != 0) {
                      uRam00000001132dfa08 = 0x80000;
                      uRam00000001132dfa00 = 0x4000;
                      lRam00000001132dfa10 = 0x80000;
                      ___cxa_guard_release(0x1132dfa18);
                    }
                  }
                  pdVar25 = pdStack_140;
                  pdVar28 = pdStack_150;
                  if ((long)pdStack_150 <= (long)pdVar35) {
                    pdVar28 = pdVar35;
                  }
                  pdVar20 = pdStack_140;
                  if ((long)pdStack_140 <= (long)pdVar28) {
                    pdVar20 = pdVar28;
                  }
                  pdStack_130 = pdVar25;
                  if (0x2f < (long)pdVar20) {
                    pdVar28 = (double *)
                              ((long)(uRam00000001132dfa00 - 0xc0) / 0x140 & 0xfffffffffffffff8);
                    if ((long)pdVar28 < 2) {
                      pdVar28 = (double *)0x1;
                    }
                    if ((long)pdVar28 < (long)pdStack_140) {
                      uVar23 = 0;
                      if (pdVar28 != (double *)0x0) {
                        uVar23 = (ulong)pdStack_140 / (ulong)pdVar28;
                      }
                      uVar29 = (long)pdStack_140 - uVar23 * (long)pdVar28;
                      pdStack_140 = pdVar28;
                      if (uVar29 != 0) {
                        lVar36 = uVar23 * 8 + 8;
                        lVar14 = 0;
                        if (lVar36 != 0) {
                          lVar14 = (long)((long)pdVar28 + ~uVar29) / lVar36;
                        }
                        pdStack_140 = pdVar28 + -lVar14;
                      }
                    }
                    uVar23 = (uRam00000001132dfa00 - 0xc0) +
                             (long)pdStack_150 * (long)pdStack_140 * -8;
                    if ((long)uVar23 < (long)pdStack_140 * 0x20) {
                      uVar29 = 0;
                      if ((long)pdVar28 << 5 != 0) {
                        uVar29 = 0x480000 / (ulong)((long)pdVar28 << 5);
                      }
                    }
                    else {
                      uVar29 = 0;
                      if ((long)pdStack_140 << 3 != 0) {
                        uVar29 = uVar23 / (ulong)((long)pdStack_140 << 3);
                      }
                    }
                    uVar23 = 0;
                    if ((long)pdStack_140 << 4 != 0) {
                      uVar23 = 0x180000 / (ulong)((long)pdStack_140 << 4);
                    }
                    if ((long)uVar23 <= (long)uVar29) {
                      uVar29 = uVar23;
                    }
                    pdStack_130 = pdStack_140;
                    if ((pdVar25 == pdStack_140) &&
                       ((long)pdVar35 <= (long)(uVar29 & 0xfffffffffffffffc))) {
                      uVar29 = (long)pdVar25 * (long)pdVar35 * 8;
                      uVar23 = uRam00000001132dfa00;
                      pdVar28 = pdStack_150;
                      if (0x400 < (long)uVar29) {
                        if (0x23f < (long)pdStack_150) {
                          pdVar28 = (double *)0x240;
                        }
                        uVar23 = uRam00000001132dfa08;
                        if (lRam00000001132dfa10 == 0 || 0x8000 < uVar29) {
                          uVar23 = 0x180000;
                          pdVar28 = pdStack_150;
                        }
                      }
                      pdVar20 = (double *)0x0;
                      if ((long)pdVar25 * 0x18 != 0) {
                        pdVar20 = (double *)(uVar23 / (ulong)((long)pdVar25 * 0x18));
                      }
                      if ((long)pdVar20 <= (long)pdVar28) {
                        pdVar28 = pdVar20;
                      }
                      if ((long)pdVar28 < 7) {
                        pdStack_130 = pdVar25;
                        if (pdVar28 == (double *)0x0) goto LAB_109930a50;
                      }
                      else {
                        pdVar28 = (double *)((((ulong)pdVar28 / 6) * 2 + (ulong)pdVar28 / 6) * 2);
                      }
                      lVar36 = 0;
                      if (pdVar28 != (double *)0x0) {
                        lVar36 = (long)pdStack_150 / (long)pdVar28;
                      }
                      lVar14 = (long)pdStack_150 - lVar36 * (long)pdVar28;
                      pdStack_130 = pdVar25;
                      pdStack_150 = pdVar28;
                      if (lVar14 != 0) {
                        lVar42 = lVar36 * 6 + 6;
                        lVar36 = 0;
                        if (lVar42 != 0) {
                          lVar36 = ((long)pdVar28 - lVar14) / lVar42;
                        }
                        pdStack_150 = (double *)((long)pdVar28 + lVar36 * -6);
                      }
                    }
                  }
LAB_109930a50:
                  lVar36 = (long)dVar13 + (long)pdVar37 * 8 + (long)dVar34 * (long)pdVar41 * 8;
                  pdStack_138 = (double *)((long)pdStack_150 * (long)pdStack_130);
                  pdStack_130 = (double *)((long)pdStack_148 * (long)pdStack_130);
                  FUN_1098e4038(pdVar6,pdVar35,pdVar15,pdVar1,pdVar12[3],lVar36,pdVar12[3],
                                pdStack_228,1,pdStack_220,&plStack_190,&pdStack_160);
                  _free(pdStack_160);
                  _free(pdStack_158);
                  plStack_190 = &lStack_180;
                  ppdStack_188 = &pdStack_228;
                  pdStack_158 = (double *)0x0;
                  pdStack_160 = (double *)0x0;
                  pdStack_150 = (double *)0x0;
                  FUN_1099123a0(&pdStack_160,&plStack_190,&uStack_161);
                  pdVar25 = pdStack_150;
                  pdVar28 = pdStack_158;
                  pdVar35 = pdStack_160;
                  if ((pdStack_220 != pdStack_158) || (pdStack_218 != pdStack_150)) {
                    if ((pdStack_158 != (double *)0x0) && (pdStack_150 != (double *)0x0)) {
                      lVar14 = 0;
                      if (pdStack_150 != (double *)0x0) {
                        lVar14 = 0x7fffffffffffffff / (long)pdStack_150;
                      }
                      if ((long)pdStack_158 <= lVar14) goto LAB_109930b2c;
                      goto LAB_109930fbc;
                    }
LAB_109930b2c:
                    uVar23 = (long)pdStack_150 * (long)pdStack_158;
                    pdVar20 = pdStack_228;
                    if ((long)pdStack_218 * (long)pdStack_220 - uVar23 != 0) {
                      _free(pdStack_228);
                      if (0 < (long)uVar23) {
                        if (uVar23 >> 0x3d == 0) {
                          pdVar20 = (double *)(uVar23 * 8);
                          _malloc();
                          if (pdVar20 != (double *)0x0) goto LAB_109930b6c;
                        }
LAB_109930fbc:
                        ___cxa_allocate_exception(8);
                        __ZNSt9bad_allocC1Ev();
                        ___cxa_throw();
                        goto LAB_109931028;
                      }
                      pdVar20 = (double *)0x0;
                    }
LAB_109930b6c:
                    pdStack_228 = pdVar20;
                    pdStack_220 = pdVar28;
                    pdStack_218 = pdVar25;
                  }
                  lVar14 = (long)pdVar25 * (long)pdVar28;
                  uVar23 = lVar14 - (lVar14 >> 0x3f) & 0xfffffffffffffffe;
                  if (1 < lVar14) {
                    lVar42 = 0;
                    pdVar28 = pdStack_228;
                    pdVar25 = pdVar35;
                    do {
                      dVar13 = *pdVar25;
                      pdVar28[1] = pdVar25[1];
                      *pdVar28 = dVar13;
                      lVar42 = lVar42 + 2;
                      pdVar28 = pdVar28 + 2;
                      pdVar25 = pdVar25 + 2;
                    } while (lVar42 < (long)uVar23);
                  }
                  lVar42 = lVar14 % 2;
                  if (lVar42 != 0 && lVar42 < 0 == SBORROW8(lVar14,uVar23)) {
                    pdVar28 = pdStack_228 + (lVar14 / 2) * 2;
                    pdVar35 = pdVar35 + (lVar14 / 2) * 2;
                    do {
                      *pdVar28 = *pdVar35;
                      lVar42 = lVar42 + -1;
                      pdVar28 = pdVar28 + 1;
                      pdVar35 = pdVar35 + 1;
                    } while (lVar42 != 0);
                  }
                  _free(pdStack_160);
                  pdVar35 = pdStack_218;
                  plStack_190 = (long *)0xbff0000000000000;
                  pdStack_158 = (double *)0x0;
                  pdStack_160 = (double *)0x0;
                  pdStack_148 = pdStack_218;
                  pdStack_150 = pdVar15;
                  pdStack_140 = pdVar6;
                  if ((bRam00000001132dfa18 & 1) == 0) {
                    iVar11 = 0x132dfa18;
                    ___cxa_guard_acquire();
                    if (iVar11 != 0) {
                      uRam00000001132dfa08 = 0x80000;
                      uRam00000001132dfa00 = 0x4000;
                      lRam00000001132dfa10 = 0x80000;
                      ___cxa_guard_release(0x1132dfa18);
                    }
                  }
                  pdVar25 = pdStack_140;
                  pdVar28 = pdStack_150;
                  if ((long)pdStack_150 <= (long)pdVar35) {
                    pdVar28 = pdVar35;
                  }
                  pdVar20 = pdStack_140;
                  if ((long)pdStack_140 <= (long)pdVar28) {
                    pdVar20 = pdVar28;
                  }
                  pdStack_130 = pdVar25;
                  if (0x2f < (long)pdVar20) {
                    pdVar28 = (double *)
                              ((long)(uRam00000001132dfa00 - 0xc0) / 0x140 & 0xfffffffffffffff8);
                    if ((long)pdVar28 < 2) {
                      pdVar28 = (double *)0x1;
                    }
                    if ((long)pdVar28 < (long)pdStack_140) {
                      uVar23 = 0;
                      if (pdVar28 != (double *)0x0) {
                        uVar23 = (ulong)pdStack_140 / (ulong)pdVar28;
                      }
                      uVar29 = (long)pdStack_140 - uVar23 * (long)pdVar28;
                      pdStack_140 = pdVar28;
                      if (uVar29 != 0) {
                        lVar14 = uVar23 * 8 + 8;
                        lVar42 = 0;
                        if (lVar14 != 0) {
                          lVar42 = (long)((long)pdVar28 + ~uVar29) / lVar14;
                        }
                        pdStack_140 = pdVar28 + -lVar42;
                      }
                    }
                    uVar23 = (uRam00000001132dfa00 - 0xc0) +
                             (long)pdStack_150 * (long)pdStack_140 * -8;
                    if ((long)uVar23 < (long)pdStack_140 * 0x20) {
                      uVar29 = 0;
                      if ((long)pdVar28 << 5 != 0) {
                        uVar29 = 0x480000 / (ulong)((long)pdVar28 << 5);
                      }
                    }
                    else {
                      uVar29 = 0;
                      if ((long)pdStack_140 << 3 != 0) {
                        uVar29 = uVar23 / (ulong)((long)pdStack_140 << 3);
                      }
                    }
                    uVar23 = 0;
                    if ((long)pdStack_140 << 4 != 0) {
                      uVar23 = 0x180000 / (ulong)((long)pdStack_140 << 4);
                    }
                    if ((long)uVar23 <= (long)uVar29) {
                      uVar29 = uVar23;
                    }
                    pdStack_130 = pdStack_140;
                    if ((pdVar25 == pdStack_140) &&
                       ((long)pdVar35 <= (long)(uVar29 & 0xfffffffffffffffc))) {
                      uVar29 = (long)pdVar25 * (long)pdVar35 * 8;
                      uVar23 = uRam00000001132dfa00;
                      pdVar28 = pdStack_150;
                      if (0x400 < (long)uVar29) {
                        if (0x23f < (long)pdStack_150) {
                          pdVar28 = (double *)0x240;
                        }
                        uVar23 = uRam00000001132dfa08;
                        if (lRam00000001132dfa10 == 0 || 0x8000 < uVar29) {
                          uVar23 = 0x180000;
                          pdVar28 = pdStack_150;
                        }
                      }
                      pdVar20 = (double *)0x0;
                      if ((long)pdVar25 * 0x18 != 0) {
                        pdVar20 = (double *)(uVar23 / (ulong)((long)pdVar25 * 0x18));
                      }
                      if ((long)pdVar20 <= (long)pdVar28) {
                        pdVar28 = pdVar20;
                      }
                      if ((long)pdVar28 < 7) {
                        pdStack_130 = pdVar25;
                        if (pdVar28 == (double *)0x0) goto LAB_109930dac;
                      }
                      else {
                        pdVar28 = (double *)((((ulong)pdVar28 / 6) * 2 + (ulong)pdVar28 / 6) * 2);
                      }
                      lVar14 = 0;
                      if (pdVar28 != (double *)0x0) {
                        lVar14 = (long)pdStack_150 / (long)pdVar28;
                      }
                      lVar42 = (long)pdStack_150 - lVar14 * (long)pdVar28;
                      pdStack_130 = pdVar25;
                      pdStack_150 = pdVar28;
                      if (lVar42 != 0) {
                        lVar43 = lVar14 * 6 + 6;
                        lVar14 = 0;
                        if (lVar43 != 0) {
                          lVar14 = ((long)pdVar28 - lVar42) / lVar43;
                        }
                        pdStack_150 = (double *)((long)pdVar28 + lVar14 * -6);
                      }
                    }
                  }
LAB_109930dac:
                  pdStack_138 = (double *)((long)pdStack_150 * (long)pdStack_130);
                  pdStack_130 = (double *)((long)pdStack_148 * (long)pdStack_130);
                  FUN_1098e5790(pdVar15,pdVar35,pdVar6,pdVar1,pdVar12[3],pdStack_228,pdStack_220,
                                lVar36,1,pdVar12[3],&plStack_190,&pdStack_160);
                  _free(pdStack_160);
                  _free(pdStack_158);
                  _free(pdStack_228);
                  _free(lStack_180);
                  goto LAB_109930e18;
                }
                if (uVar23 >> 0x3d == 0) {
                  pdVar25 = (double *)0x1;
                  _calloc(1,uVar23 * 8);
                  if (pdVar25 != (double *)0x0) goto LAB_109930874;
                }
              }
              ___cxa_allocate_exception(8);
              __ZNSt9bad_allocC1Ev();
              ___cxa_throw();
              goto LAB_109931028;
            }
          }
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_109931028;
        }
LAB_109930e18:
        pdVar37 = (double *)((long)pdVar37 + (long)pdVar5);
        lStack_308 = lStack_308 + (long)pdVar5 * 8;
        uStack_310 = uStack_310 - (long)pdVar5;
        pdVar24 = (double *)((long)pdVar24 - (long)pdVar5);
      } while ((long)pdVar37 < (long)pdVar4);
    }
    *(undefined1 *)(pdVar12 + 9) = 1;
    lVar36 = *(long *)(param_1 + 8);
    *(double **)(param_1 + 8) = pdVar12;
    if (lVar36 != 0) {
      _free(*(undefined8 *)(lVar36 + 0x38));
      _free(*(undefined8 *)(lVar36 + 0x28));
      __ZdlPv(lVar36);
    }
    if (*(char *)((long)param_5 + 0x17) < '\0') {
      param_5[1] = 8;
      param_5 = (undefined8 *)*param_5;
    }
    else {
      *(undefined1 *)((long)param_5 + 0x17) = 8;
    }
    *param_5 = 0x2e73736563637553;
    *(undefined1 *)(param_5 + 1) = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return 0;
    }
    ___stack_chk_fail();
  }
  else {
    dStack_360 = (double)((long)pdVar40 << 3);
    _malloc();
    if (dStack_360 != 0.0) {
      pdVar12[7] = dStack_360;
      goto LAB_10992fbc0;
    }
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109931028:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10993102c);
  (*pcVar9)();
}



/* Entry: 1099310e0; end: 10993174b;  */

long FUN_1099310e0(long param_1,long param_2,ulong param_3,undefined8 *param_4)

{
  double *pdVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  double *pdVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  double *pdVar17;
  double *pdVar18;
  ulong uVar19;
  double *pdVar20;
  ulong uVar21;
  double *pdVar22;
  ulong uVar23;
  double *pdVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  long *plVar28;
  ulong uVar29;
  ulong uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined8 uStack_c8;
  long lStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  plVar28 = *(long **)(param_1 + 8);
  uVar10 = plVar28[1];
  uVar3 = plVar28[2];
  uVar23 = uVar3;
  if ((long)uVar10 <= (long)uVar3) {
    uVar23 = uVar10;
  }
  if (uVar10 == 0) {
    uVar6 = 0;
    uVar21 = 0;
  }
  else {
    if (0 < (long)uVar10) {
      if (uVar10 >> 0x3d == 0) {
        uVar6 = uVar10 << 3;
        _malloc();
        if (uVar6 != 0) {
          if (uVar10 == 1) {
            uVar21 = 0;
          }
          else {
            uVar21 = uVar10 & 0x1ffffffffffffffe;
            _memcpy(uVar6,param_2,uVar21 * 8);
          }
          goto LAB_1099311a8;
        }
      }
      lVar13 = 8;
      ___cxa_allocate_exception();
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      _free(uStack_c8);
      __Unwind_Resume();
      lVar16 = *(long *)(lVar13 + 8);
      *(undefined8 *)(lVar13 + 8) = 0;
      if (lVar16 != 0) {
        _free(*(undefined8 *)(lVar16 + 0x38));
        _free(*(undefined8 *)(lVar16 + 0x28));
        __ZdlPv(lVar16);
      }
      return lVar13;
    }
    uVar6 = 0;
    uVar21 = -(-uVar10 & 0xfffffffffffffffe);
  }
LAB_1099311a8:
  if (uVar10 - uVar21 != 0 && (long)uVar21 <= (long)uVar10) {
    _memcpy(uVar6 + uVar21 * 8,param_2 + uVar21 * 8,(uVar10 - uVar21) * 8);
  }
  lVar13 = *plVar28;
  if ((long)uVar23 < 1) {
    lVar16 = plVar28[3];
  }
  else {
    lVar16 = plVar28[3];
    lVar8 = plVar28[5];
    pdVar22 = (double *)(uVar6 + 0x38);
    pdVar24 = (double *)(lVar13 + 0x38);
    uVar21 = uVar6 + 8;
    lVar25 = lVar13 + 8;
    uVar9 = 0;
    uVar29 = uVar21;
    uVar30 = uVar10;
    do {
      uVar30 = uVar30 - 1;
      uVar11 = uVar21 >> 3 & 1;
      uVar2 = uVar30;
      if ((long)uVar11 <= (long)uVar30) {
        uVar2 = uVar11;
      }
      uVar27 = uVar10 - uVar9;
      pdVar7 = (double *)(uVar6 + uVar9 * 8);
      uVar11 = uVar9 + 1;
      dVar31 = *(double *)(lVar8 + uVar9 * 8);
      uVar4 = uVar27 - 1;
      if (uVar4 == 0) {
        *pdVar7 = (1.0 - dVar31) * *pdVar7;
      }
      else if (dVar31 != 0.0) {
        pdVar17 = (double *)(lVar13 + uVar11 * 8 + uVar9 * lVar16 * 8);
        pdVar1 = pdVar7 + 1;
        uVar26 = uVar27 + 2;
        if (-1 < (long)uVar4) {
          uVar26 = uVar4;
        }
        if (uVar27 < 3) {
          dVar36 = *pdVar1;
          dVar32 = *pdVar17 * dVar36;
        }
        else {
          uVar14 = uVar4 - ((long)uVar4 >> 0x3f) & 0xfffffffffffffffe;
          dVar36 = *pdVar1;
          dVar32 = *pdVar17 * dVar36;
          dVar33 = pdVar17[1] * pdVar7[2];
          if (4 < (long)uVar27) {
            uVar19 = uVar26 & 0xfffffffffffffffc;
            dVar34 = pdVar17[2] * pdVar7[3];
            dVar35 = pdVar17[3] * pdVar7[4];
            if (7 < uVar4) {
              lVar12 = 4;
              pdVar20 = pdVar24;
              pdVar18 = pdVar22;
              do {
                dVar32 = dVar32 + pdVar20[-2] * pdVar18[-2];
                dVar33 = dVar33 + pdVar20[-1] * pdVar18[-1];
                dVar34 = dVar34 + *pdVar20 * *pdVar18;
                dVar35 = dVar35 + pdVar20[1] * pdVar18[1];
                lVar12 = lVar12 + 4;
                pdVar18 = pdVar18 + 4;
                pdVar20 = pdVar20 + 4;
              } while (lVar12 < (long)uVar19);
            }
            dVar32 = dVar34 + dVar32;
            dVar33 = dVar35 + dVar33;
            if ((long)uVar19 < (long)uVar14) {
              dVar32 = dVar32 + pdVar17[uVar26 & 0xfffffffffffffffc] * pdVar1[uVar19];
              dVar33 = dVar33 + (pdVar17 + (uVar26 & 0xfffffffffffffffc))[1] * (pdVar1 + uVar19)[1];
            }
          }
          dVar32 = dVar32 + dVar33;
          if ((long)uVar14 < (long)uVar4) {
            lVar12 = uVar30 - uVar14;
            pdVar17 = (double *)(uVar29 + ((long)uVar4 / 2) * 0x10);
            pdVar18 = (double *)(lVar25 + ((long)uVar4 / 2) * 0x10);
            do {
              dVar32 = dVar32 + *pdVar18 * *pdVar17;
              lVar12 = lVar12 + -1;
              pdVar17 = pdVar17 + 1;
              pdVar18 = pdVar18 + 1;
            } while (lVar12 != 0);
          }
        }
        uVar26 = uVar10 - uVar11;
        dVar32 = dVar32 + *pdVar7;
        *pdVar7 = *pdVar7 - dVar31 * dVar32;
        dVar31 = *(double *)(lVar8 + uVar9 * 8);
        if (uVar10 == uVar11) {
          pdVar7 = (double *)0x0;
LAB_1099313c0:
          uVar9 = 0;
        }
        else if ((long)uVar26 < 1) {
          pdVar7 = (double *)0x0;
          uVar9 = -(-uVar26 & 0xfffffffffffffffe);
        }
        else {
          if (uVar26 >> 0x3d != 0) {
LAB_1099316f0:
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x109931714);
            (*pcVar5)();
          }
          pdVar7 = (double *)(uVar26 * 8);
          _malloc();
          if (pdVar7 == (double *)0x0) goto LAB_1099316f0;
          if (uVar26 == 1) goto LAB_1099313c0;
          lVar12 = 0;
          uVar14 = 0;
          uVar9 = uVar26 & 0x1ffffffffffffffe;
          do {
            dVar33 = *(double *)(lVar25 + lVar12);
            ((double *)((long)pdVar7 + lVar12))[1] = ((double *)(lVar25 + lVar12))[1] * dVar31;
            *(double *)((long)pdVar7 + lVar12) = dVar33 * dVar31;
            uVar14 = uVar14 + 2;
            lVar12 = lVar12 + 0x10;
          } while (uVar14 < uVar9);
        }
        if ((long)uVar9 < (long)uVar26) {
          do {
            pdVar7[uVar9] = dVar31 * *(double *)(lVar25 + uVar9 * 8);
            uVar9 = uVar9 + 1;
          } while (uVar30 != uVar9);
        }
        if ((uVar6 & 7) == 0) {
          uVar9 = (ulong)pdVar1 >> 3 & 1;
          if ((long)uVar4 <= (long)uVar9) {
            uVar9 = uVar4;
          }
          if (0 < (long)uVar9) {
            *pdVar1 = dVar36 - dVar32 * *pdVar7;
          }
          lVar12 = (uVar4 - uVar9 & 0xfffffffffffffffe) + uVar9;
          if (1 < (long)(uVar4 - uVar9)) {
            lVar15 = uVar2 << 3;
            do {
              dVar31 = *(double *)((long)pdVar7 + lVar15);
              dVar33 = *(double *)(uVar29 + lVar15);
              ((double *)(uVar29 + lVar15))[1] =
                   ((double *)(uVar29 + lVar15))[1] -
                   ((double *)((long)pdVar7 + lVar15))[1] * dVar32;
              *(double *)(uVar29 + lVar15) = dVar33 - dVar31 * dVar32;
              uVar9 = uVar9 + 2;
              lVar15 = lVar15 + 0x10;
            } while ((long)uVar9 < lVar12);
          }
          for (; lVar12 < (long)uVar4; lVar12 = lVar12 + 1) {
            *(double *)(uVar29 + lVar12 * 8) =
                 *(double *)(uVar29 + lVar12 * 8) - dVar32 * pdVar7[lVar12];
          }
        }
        else if (1 < (long)uVar27) {
          uVar9 = 0;
          do {
            *(double *)(uVar29 + uVar9 * 8) =
                 *(double *)(uVar29 + uVar9 * 8) - dVar32 * pdVar7[uVar9];
            uVar9 = uVar9 + 1;
          } while (uVar30 != uVar9);
        }
        _free();
      }
      pdVar22 = pdVar22 + 1;
      pdVar24 = pdVar24 + lVar16 + 1;
      uVar29 = uVar29 + 8;
      lVar25 = lVar25 + lVar16 * 8 + 8;
      uVar21 = uVar21 + 8;
      uVar9 = uVar11;
    } while (uVar11 != uVar23);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  lStack_b0 = lVar13;
  uStack_a8 = uVar23;
  uStack_a0 = uVar23;
  plStack_98 = plVar28;
  lStack_80 = lVar16;
  if (uVar23 != 0) {
    FUN_109931d00(&lStack_b0,uVar6);
  }
  uVar10 = param_3 >> 3 & 1;
  if ((long)uVar23 <= (long)uVar10) {
    uVar10 = uVar23;
  }
  if ((param_3 & 7) != 0) {
    uVar10 = uVar23;
  }
  lVar13 = uVar23 - uVar10;
  if (0 < (long)uVar10) {
    _memcpy(param_3,uVar6,uVar10 << 3);
  }
  lVar16 = (lVar13 - (lVar13 >> 0x3f) & 0xfffffffffffffffeU) + uVar10;
  if (1 < lVar13) {
    lVar25 = lVar16;
    if (lVar16 <= (long)(uVar10 + 2)) {
      lVar25 = uVar10 + 2;
    }
    _memcpy(param_3 + uVar10 * 8,uVar6 + uVar10 * 8,
            (lVar25 + ~uVar10 & 0x1ffffffffffffffe) * 8 + 0x10);
  }
  if (lVar16 < (long)uVar23) {
    lVar16 = (lVar13 / 2) * 0x10 + uVar10 * 8;
    _memcpy(param_3 + lVar16,uVar6 + lVar16,(lVar13 % 2) * 8);
  }
  uVar23 = plVar28[2] - uVar23;
  param_3 = param_3 + (uVar3 - uVar23) * 8;
  uVar10 = param_3 >> 3 & 1;
  if ((long)uVar23 <= (long)uVar10) {
    uVar10 = uVar23;
  }
  if ((param_3 & 7) != 0) {
    uVar10 = uVar23;
  }
  lVar13 = uVar23 - uVar10;
  if (0 < (long)uVar10) {
    _bzero(param_3,uVar10 << 3);
  }
  lVar16 = (lVar13 - (lVar13 >> 0x3f) & 0xfffffffffffffffeU) + uVar10;
  if (1 < lVar13) {
    lVar25 = lVar16;
    if (lVar16 <= (long)(uVar10 + 2)) {
      lVar25 = uVar10 + 2;
    }
    _bzero(param_3 + uVar10 * 8,(lVar25 + ~uVar10 & 0x1ffffffffffffffe) * 8 + 0x10);
  }
  if (lVar16 < (long)uVar23) {
    _bzero(param_3 + (lVar13 / 2) * 0x10 + uVar10 * 8,(lVar13 % 2) * 8);
  }
  _free(uVar6);
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    param_4[1] = 8;
    param_4 = (undefined8 *)*param_4;
  }
  else {
    *(undefined1 *)((long)param_4 + 0x17) = 8;
  }
  *param_4 = 0x2e73736563637553;
  *(undefined1 *)(param_4 + 1) = 0;
  return 0;
}



/* Entry: 10993174c; end: 1099317d3;  */

long FUN_10993174c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar1 != 0) {
    _free(*(undefined8 *)(lVar1 + 0x38));
    _free(*(undefined8 *)(lVar1 + 0x28));
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1099317d4; end: 109931937;  */

void FUN_1099317d4(undefined8 param_1,undefined8 *param_2,long *param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  double *pdVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  double *pdVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  double *pdVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong unaff_x19;
  undefined *unaff_x21;
  long *unaff_x22;
  double *pdVar20;
  long *unaff_x23;
  undefined8 unaff_x24;
  long lVar21;
  double dVar22;
  double dVar23;
  long lStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  plVar4 = &lStack_90;
  plVar5 = &lStack_90;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 >> 0x3d == 0) {
    unaff_x24 = *param_2;
    unaff_x21 = (undefined *)param_2[1];
    unaff_x22 = (long *)param_2[2];
    lVar21 = param_2[9];
    unaff_x19 = param_4;
    if (param_3 == (long *)0x0) {
      param_3 = (long *)(param_4 << 3);
      if (param_4 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar14 = -((long)param_3 + 0x1eU & 0xfffffffffffffff0);
        plVar4 = (long *)((long)&lStack_90 + lVar14);
        param_3 = (long *)((long)&lStack_90 + lVar14);
        unaff_x23 = param_3;
      }
      else {
        _malloc();
        unaff_x23 = param_3;
        if (param_3 == (long *)0x0) goto LAB_1099318f8;
      }
    }
    else {
      plVar4 = &lStack_90;
      unaff_x23 = (long *)0x0;
    }
    uStack_70 = *(undefined8 *)(lVar21 + 0x18);
    uStack_80 = 1;
    puVar9 = &uStack_78;
    plVar6 = unaff_x22;
    puVar8 = unaff_x21;
    plStack_88 = param_3;
    uStack_78 = unaff_x24;
    FUN_10990fa5c(param_1);
    if (0x4000 < param_4) {
      plVar6 = unaff_x23;
      _free();
    }
    plVar5 = plVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  else {
LAB_1099318f8:
    plVar6 = (long *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    puVar8 = PTR___ZTISt9bad_alloc_110346a68;
    puVar9 = (undefined8 *)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if (0x4000 < unaff_x19) {
    _free(unaff_x23);
  }
  plVar4 = plVar6;
  __Unwind_Resume();
  *(undefined8 *)((long)plVar5 + -0x40) = unaff_x24;
  *(long **)((long)plVar5 + -0x38) = unaff_x23;
  *(long **)((long)plVar5 + -0x30) = unaff_x22;
  *(undefined **)((long)plVar5 + -0x28) = unaff_x21;
  *(long **)((long)plVar5 + -0x20) = plVar6;
  *(ulong *)((long)plVar5 + -0x18) = unaff_x19;
  *(undefined1 **)((long)plVar5 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)plVar5 + -8) = FUN_109931938;
  *(undefined8 *)((long)plVar5 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = *(long *)(puVar8 + 0x28);
  pdVar20 = (double *)(lVar21 * 8);
  if (pdVar20 < (double *)0x20001) {
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    pdVar7 = (double *)
             ((long)plVar5 + (-0x50 - ((ulong)((long)pdVar20 + 0x1eU) & 0xfffffffffffffff0)));
    if (pdVar7 == (double *)0x0) goto LAB_1099319b4;
    bVar11 = false;
  }
  else {
LAB_1099319b4:
    pdVar7 = pdVar20;
    _malloc();
    if (pdVar20 != (double *)0x0 && pdVar7 == (double *)0x0) goto LAB_109931b78;
    bVar11 = true;
  }
  dVar22 = *(double *)(puVar8 + 0x18);
  pdVar20 = *(double **)(puVar8 + 0x20);
  uVar13 = lVar21 - (lVar21 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < lVar21) {
    lVar14 = 0;
    pdVar10 = pdVar7;
    pdVar16 = pdVar20;
    do {
      dVar23 = *pdVar16;
      pdVar10[1] = pdVar16[1] * dVar22;
      *pdVar10 = dVar23 * dVar22;
      lVar14 = lVar14 + 2;
      pdVar10 = pdVar10 + 2;
      pdVar16 = pdVar16 + 2;
    } while (lVar14 < (long)uVar13);
  }
  lVar14 = lVar21 % 2;
  if (lVar14 != 0 && lVar14 < 0 == SBORROW8(lVar21,uVar13)) {
    pdVar20 = pdVar20 + (lVar21 / 2) * 2;
    pdVar10 = pdVar7 + (lVar21 / 2) * 2;
    do {
      *pdVar10 = dVar22 * *pdVar20;
      lVar14 = lVar14 + -1;
      pdVar20 = pdVar20 + 1;
      pdVar10 = pdVar10 + 1;
    } while (lVar14 != 0);
  }
  lVar21 = plVar4[2];
  if (0 < lVar21) {
    lVar12 = 0;
    lVar14 = 0;
    do {
      lVar15 = *(long *)(plVar4[9] + 0x18);
      lVar1 = *plVar4;
      uVar2 = plVar4[1];
      uVar13 = lVar1 + lVar15 * lVar14 * 8;
      dVar22 = (double)puVar9[lVar14];
      uVar18 = uVar13 >> 3 & 1;
      if ((long)uVar2 <= (long)uVar18) {
        uVar18 = uVar2;
      }
      if ((uVar13 & 7) != 0) {
        uVar18 = uVar2;
      }
      if (0 < (long)uVar18) {
        uVar13 = uVar18;
        pdVar20 = (double *)(lVar1 + lVar15 * lVar12);
        pdVar10 = pdVar7;
        do {
          *pdVar20 = *pdVar20 - dVar22 * *pdVar10;
          uVar13 = uVar13 - 1;
          pdVar20 = pdVar20 + 1;
          pdVar10 = pdVar10 + 1;
        } while (uVar13 != 0);
      }
      lVar19 = uVar2 - uVar18;
      lVar17 = (lVar19 - (lVar19 >> 0x3f) & 0xfffffffffffffffeU) + uVar18;
      if (1 < lVar19) {
        pdVar20 = pdVar7 + uVar18;
        pdVar10 = (double *)(lVar1 + lVar15 * lVar12 + uVar18 * 8);
        uVar13 = uVar18;
        do {
          dVar23 = *pdVar20;
          pdVar10[1] = pdVar10[1] - pdVar20[1] * dVar22;
          *pdVar10 = *pdVar10 - dVar23 * dVar22;
          uVar13 = uVar13 + 2;
          pdVar20 = pdVar20 + 2;
          pdVar10 = pdVar10 + 2;
        } while ((long)uVar13 < lVar17);
      }
      if (lVar17 < (long)uVar2) {
        lVar17 = lVar19 % 2;
        pdVar20 = (double *)(lVar1 + (lVar19 / 2) * 0x10 + uVar18 * 8 + lVar15 * lVar12);
        pdVar10 = pdVar7 + uVar18 + (lVar19 / 2) * 2;
        do {
          *pdVar20 = *pdVar20 - dVar22 * *pdVar10;
          lVar17 = lVar17 + -1;
          pdVar20 = pdVar20 + 1;
          pdVar10 = pdVar10 + 1;
        } while (lVar17 != 0);
      }
      lVar14 = lVar14 + 1;
      lVar12 = lVar12 + 8;
    } while (lVar14 != lVar21);
  }
  if (bVar11) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar5 + -0x48)) {
    return;
  }
  ___stack_chk_fail();
LAB_109931b78:
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109931b9c);
  (*pcVar3)();
}



/* Entry: 109931938; end: 109931b9f;  */

void FUN_109931938(long *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  double *pdVar4;
  double *pdVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  double *pdVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  double *pdVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  double dStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *(long *)(param_2 + 0x28);
  pdVar15 = (double *)(lVar16 * 8);
  if (pdVar15 < (double *)0x20001) {
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    pdVar4 = (double *)((long)&dStack_50 - ((long)pdVar15 + 0x1eU & 0xfffffffffffffff0));
    if (pdVar4 == (double *)0x0) goto LAB_1099319b4;
    bVar6 = false;
  }
  else {
LAB_1099319b4:
    pdVar4 = pdVar15;
    _malloc();
    if (pdVar15 != (double *)0x0 && pdVar4 == (double *)0x0) goto LAB_109931b78;
    bVar6 = true;
  }
  dVar17 = *(double *)(param_2 + 0x18);
  pdVar15 = *(double **)(param_2 + 0x20);
  uVar8 = lVar16 - (lVar16 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < lVar16) {
    lVar9 = 0;
    pdVar5 = pdVar4;
    pdVar11 = pdVar15;
    do {
      dVar18 = *pdVar11;
      pdVar5[1] = pdVar11[1] * dVar17;
      *pdVar5 = dVar18 * dVar17;
      lVar9 = lVar9 + 2;
      pdVar5 = pdVar5 + 2;
      pdVar11 = pdVar11 + 2;
    } while (lVar9 < (long)uVar8);
  }
  lVar9 = lVar16 % 2;
  if (lVar9 != 0 && lVar9 < 0 == SBORROW8(lVar16,uVar8)) {
    pdVar15 = pdVar15 + (lVar16 / 2) * 2;
    pdVar5 = pdVar4 + (lVar16 / 2) * 2;
    do {
      *pdVar5 = dVar17 * *pdVar15;
      lVar9 = lVar9 + -1;
      pdVar15 = pdVar15 + 1;
      pdVar5 = pdVar5 + 1;
    } while (lVar9 != 0);
  }
  lVar16 = param_1[2];
  if (0 < lVar16) {
    lVar7 = 0;
    lVar9 = 0;
    do {
      lVar10 = *(long *)(param_1[9] + 0x18);
      lVar1 = *param_1;
      uVar2 = param_1[1];
      uVar8 = lVar1 + lVar10 * lVar9 * 8;
      dVar17 = *(double *)(param_3 + lVar9 * 8);
      uVar13 = uVar8 >> 3 & 1;
      if ((long)uVar2 <= (long)uVar13) {
        uVar13 = uVar2;
      }
      if ((uVar8 & 7) != 0) {
        uVar13 = uVar2;
      }
      if (0 < (long)uVar13) {
        uVar8 = uVar13;
        pdVar15 = (double *)(lVar1 + lVar10 * lVar7);
        pdVar5 = pdVar4;
        do {
          *pdVar15 = *pdVar15 - dVar17 * *pdVar5;
          uVar8 = uVar8 - 1;
          pdVar15 = pdVar15 + 1;
          pdVar5 = pdVar5 + 1;
        } while (uVar8 != 0);
      }
      lVar14 = uVar2 - uVar13;
      lVar12 = (lVar14 - (lVar14 >> 0x3f) & 0xfffffffffffffffeU) + uVar13;
      if (1 < lVar14) {
        pdVar15 = pdVar4 + uVar13;
        pdVar5 = (double *)(lVar1 + lVar10 * lVar7 + uVar13 * 8);
        uVar8 = uVar13;
        do {
          dVar18 = *pdVar15;
          pdVar5[1] = pdVar5[1] - pdVar15[1] * dVar17;
          *pdVar5 = *pdVar5 - dVar18 * dVar17;
          uVar8 = uVar8 + 2;
          pdVar15 = pdVar15 + 2;
          pdVar5 = pdVar5 + 2;
        } while ((long)uVar8 < lVar12);
      }
      if (lVar12 < (long)uVar2) {
        lVar12 = lVar14 % 2;
        pdVar15 = (double *)(lVar1 + (lVar14 / 2) * 0x10 + uVar13 * 8 + lVar10 * lVar7);
        pdVar5 = pdVar4 + uVar13 + (lVar14 / 2) * 2;
        do {
          *pdVar15 = *pdVar15 - dVar17 * *pdVar5;
          lVar12 = lVar12 + -1;
          pdVar15 = pdVar15 + 1;
          pdVar5 = pdVar5 + 1;
        } while (lVar12 != 0);
      }
      lVar9 = lVar9 + 1;
      lVar7 = lVar7 + 8;
    } while (lVar9 != lVar16);
  }
  if (bVar6) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_109931b78:
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109931b9c);
  (*pcVar3)();
}



/* Entry: 109931ba0; end: 109931cff;  */

undefined8 * FUN_109931ba0(double param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  double *pdVar6;
  double *pdVar7;
  code *pcVar8;
  double *pdVar9;
  double *pdVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *unaff_x23;
  undefined8 *puVar28;
  ulong uVar29;
  undefined8 uVar30;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  double dVar31;
  undefined8 uVar32;
  double dVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  double dVar36;
  double dStack_60;
  long lStack_58;
  
  pdVar9 = &dStack_60;
  pdVar10 = &dStack_60;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar24 = (undefined *)*param_2;
  puVar18 = (undefined8 *)param_2[1];
  puVar26 = (undefined8 *)param_2[2];
  uVar30 = param_2[6];
  uVar29 = *(ulong *)(param_3 + 0x28);
  dStack_60 = param_1 * *(double *)(param_3 + 0x18);
  if (uVar29 >> 0x3d == 0) {
    if (*(long *)(param_3 + 0x20) == 0) {
      unaff_x23 = (undefined8 *)(uVar29 << 3);
      if (uVar29 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar22 = -((long)unaff_x23 + 0x1eU & 0xfffffffffffffff0);
        pdVar9 = (double *)((long)&dStack_60 + lVar22);
        unaff_x23 = (undefined8 *)((long)&dStack_60 + lVar22);
      }
      else {
        _malloc();
        if (unaff_x23 == (undefined8 *)0x0) goto LAB_109931cc0;
      }
    }
    else {
      unaff_x23 = (undefined8 *)0x0;
      pdVar9 = &dStack_60;
    }
    *(double **)((long)pdVar9 + -0x10) = &dStack_60;
    puVar23 = puVar26;
    puVar13 = puVar18;
    puVar14 = puVar24;
    FUN_1098e357c();
    if (0x4000 < uVar29) {
      puVar23 = unaff_x23;
      _free();
    }
    pdVar10 = pdVar9;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return puVar23;
    }
  }
  else {
LAB_109931cc0:
    puVar23 = (undefined8 *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    puVar13 = (undefined8 *)PTR___ZTISt9bad_alloc_110346a68;
    puVar14 = PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if (0x4000 < uVar29) {
    _free(unaff_x23);
  }
  puVar27 = puVar23;
  __Unwind_Resume();
  *(undefined8 *)((long)pdVar10 + -0x60) = unaff_x28;
  *(undefined8 *)((long)pdVar10 + -0x58) = unaff_x27;
  *(undefined8 *)((long)pdVar10 + -0x50) = unaff_x26;
  *(undefined8 *)((long)pdVar10 + -0x48) = uVar30;
  *(ulong *)((long)pdVar10 + -0x40) = uVar29;
  *(undefined8 **)((long)pdVar10 + -0x38) = unaff_x23;
  *(undefined8 **)((long)pdVar10 + -0x30) = puVar26;
  *(undefined8 **)((long)pdVar10 + -0x28) = puVar18;
  *(undefined **)((long)pdVar10 + -0x20) = puVar24;
  *(undefined8 **)((long)pdVar10 + -0x18) = puVar23;
  *(undefined1 **)((long)pdVar10 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)pdVar10 + -8) = FUN_109931d00;
  puVar18 = (undefined8 *)((long)pdVar10 + -0xa0);
  puVar11 = (undefined8 *)((long)pdVar10 + -0xa0);
  *(undefined8 *)((long)pdVar10 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((ulong)puVar14 >> 0x3d == 0) {
    *(undefined **)((long)pdVar10 + -0x90) = puVar14;
    if (puVar13 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)((long)puVar14 << 3);
      if (puVar14 < (undefined *)0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar18 = (undefined8 *)
                  ((long)pdVar10 + (-0xa0 - ((long)puVar12 + 0x1eU & 0xfffffffffffffff0)));
        *(undefined8 **)((long)pdVar10 + -0x98) = puVar18;
        puVar25 = puVar18;
      }
      else {
        _malloc();
        *(undefined8 **)((long)pdVar10 + -0x98) = puVar12;
        puVar25 = puVar12;
        puVar26 = puVar27;
        if (puVar12 == (undefined8 *)0x0) goto LAB_109931f90;
      }
    }
    else {
      *(undefined8 *)((long)pdVar10 + -0x98) = 0;
      puVar18 = (undefined8 *)((long)pdVar10 + -0xa0);
      puVar12 = puVar27;
      puVar25 = puVar13;
    }
    unaff_x23 = (undefined8 *)puVar27[2];
    if (0 < (long)unaff_x23) {
      uVar29 = *(ulong *)(puVar27[3] + 0x18);
      puVar27 = (undefined8 *)*puVar27;
      puVar26 = puVar27 + (long)((long)unaff_x23 + uVar29 * ((long)unaff_x23 + -1));
      puVar11 = puVar25 + (long)unaff_x23;
      puVar24 = (undefined *)0x8;
      puVar23 = (undefined8 *)0x1;
      puVar28 = unaff_x23;
      do {
        puVar19 = (undefined8 *)0x0;
        puVar13 = puVar28;
        if ((undefined8 *)0x7 < puVar28) {
          puVar13 = (undefined8 *)0x8;
        }
        pdVar9 = (double *)(puVar26 + -(long)puVar13);
        puVar12 = (undefined8 *)((long)puVar28 - (long)puVar13);
        puVar2 = puVar25 + (long)puVar12;
        uVar20 = (ulong)puVar2 >> 3 & 1;
        puVar21 = puVar26;
        do {
          lVar22 = (long)puVar28 + ~(ulong)puVar19;
          if ((double)puVar25[lVar22] != 0.0) {
            dVar31 = (double)puVar25[lVar22] / (double)puVar27[lVar22 * uVar29 + lVar22];
            puVar25[lVar22] = dVar31;
            uVar3 = (long)puVar13 + ~(ulong)puVar19;
            if (0 < (long)uVar3) {
              pdVar6 = (double *)(puVar11 + -(long)puVar13);
              uVar15 = uVar20;
              pdVar7 = pdVar9;
              uVar4 = uVar20;
              if (((ulong)puVar2 & 7) != 0) {
                uVar15 = uVar3;
                uVar4 = uVar3;
              }
              for (; uVar15 != 0; uVar15 = uVar15 - 1) {
                *pdVar6 = *pdVar6 - dVar31 * *pdVar7;
                pdVar6 = pdVar6 + 1;
                pdVar7 = pdVar7 + 1;
              }
              lVar16 = uVar3 - uVar4;
              uVar15 = lVar16 - (lVar16 >> 0x3f) & 0xfffffffffffffffe;
              lVar22 = uVar15 + uVar4;
              if (1 < lVar16) {
                lVar16 = (long)puVar13 * -8 + uVar4 * 8;
                uVar17 = uVar4;
                do {
                  dVar33 = *(double *)((long)puVar21 + lVar16);
                  dVar36 = *(double *)((long)puVar11 + lVar16);
                  ((double *)((long)puVar11 + lVar16))[1] =
                       ((double *)((long)puVar11 + lVar16))[1] -
                       ((double *)((long)puVar21 + lVar16))[1] * dVar31;
                  *(double *)((long)puVar11 + lVar16) = dVar36 - dVar33 * dVar31;
                  uVar17 = uVar17 + 2;
                  lVar16 = lVar16 + 0x10;
                } while ((long)uVar17 < lVar22);
              }
              if (lVar22 < (long)uVar3) {
                lVar22 = (uVar4 - (long)puVar13) + uVar15;
                do {
                  puVar11[lVar22] = (double)puVar11[lVar22] - dVar31 * (double)puVar21[lVar22];
                  lVar22 = lVar22 + 1;
                } while ((long)puVar19 + lVar22 != -1);
              }
            }
          }
          puVar19 = (undefined8 *)((long)puVar19 + 1);
          pdVar9 = pdVar9 + -uVar29;
          puVar21 = puVar21 + -uVar29;
        } while (puVar19 != puVar13);
        if (0 < (long)puVar12) {
          *(undefined8 **)((long)pdVar10 + -0x78) = puVar27 + (long)puVar12 * uVar29;
          *(ulong *)((long)pdVar10 + -0x70) = uVar29;
          *(undefined8 **)((long)pdVar10 + -0x88) = puVar2;
          *(undefined8 *)((long)pdVar10 + -0x80) = 1;
          FUN_109464f74(0xbff0000000000000,puVar12,puVar13,(undefined1 *)((long)pdVar10 + -0x78),
                        (undefined1 *)((long)pdVar10 + -0x88),puVar25,1);
        }
        puVar11 = puVar11 + -8;
        puVar26 = puVar26 + ~uVar29 * 8;
        unaff_x23 = puVar28 + -1;
        bVar1 = 7 < (long)puVar28;
        puVar28 = unaff_x23;
      } while (unaff_x23 != (undefined8 *)0x0 && bVar1);
    }
    if (0x4000 < *(ulong *)((long)pdVar10 + -0x90)) {
      puVar12 = *(undefined8 **)((long)pdVar10 + -0x98);
      _free();
    }
    puVar11 = puVar18;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pdVar10 + -0x68)) {
      return puVar12;
    }
  }
  else {
LAB_109931f90:
    puVar27 = puVar26;
    puVar12 = (undefined8 *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    puVar13 = (undefined8 *)PTR___ZTISt9bad_alloc_110346a68;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if (0x4000 < *(ulong *)((long)pdVar10 + -0x90)) {
    _free(*(undefined8 *)((long)pdVar10 + -0x98));
  }
  puVar18 = puVar12;
  __Unwind_Resume();
  *(ulong *)((long)puVar11 + -0x40) = uVar29;
  *(undefined8 **)((long)puVar11 + -0x38) = unaff_x23;
  *(undefined8 **)((long)puVar11 + -0x30) = puVar27;
  *(undefined8 **)((long)puVar11 + -0x28) = puVar12;
  *(undefined **)((long)puVar11 + -0x20) = puVar24;
  *(undefined8 **)((long)puVar11 + -0x18) = puVar23;
  *(undefined1 **)((long)puVar11 + -0x10) = (undefined1 *)((long)pdVar10 + -0x10);
  *(code **)((long)puVar11 + -8) = FUN_109931fd4;
  puVar18[3] = 0;
  puVar18[2] = 0;
  puVar18[5] = 0;
  puVar18[4] = 0;
  puVar18[7] = 0;
  puVar18[6] = 0;
  puVar18[0xb] = 0;
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = puVar18 + 10;
  *puVar18 = &PTR_FUN_110b1dc88;
  puVar18[1] = 0x32aaaba7;
  uVar32 = puVar13[1];
  uVar30 = *puVar13;
  uVar35 = puVar13[3];
  uVar34 = puVar13[2];
  uVar5 = *(undefined4 *)(puVar13 + 4);
  puVar18[0x11] = 0;
  *(undefined4 *)(puVar18 + 0x10) = uVar5;
  puVar18[0xf] = uVar35;
  puVar18[0xe] = uVar34;
  puVar18[0xd] = uVar32;
  puVar18[0xc] = uVar30;
  puVar18[0x12] = 0;
  puVar18[0x13] = 0;
  lVar22 = puVar13[6] - puVar13[5];
  if (lVar22 != 0) {
    if (lVar22 < 0) {
      FUN_10923f788();
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1099320c0);
      (*pcVar8)();
    }
    lVar16 = lVar22;
    __Znwm();
    puVar18[0x11] = lVar16;
    puVar18[0x12] = lVar16;
    puVar18[0x13] = lVar16 + lVar22;
    _memcpy();
    puVar18[0x12] = lVar16 + lVar22;
  }
  uVar32 = puVar13[9];
  uVar30 = puVar13[8];
  uVar35 = puVar13[0xb];
  uVar34 = puVar13[10];
  puVar18[0x18] = puVar13[0xc];
  puVar18[0x15] = uVar32;
  puVar18[0x14] = uVar30;
  puVar18[0x17] = uVar35;
  puVar18[0x16] = uVar34;
  puVar18[0x1a] = 0;
  puVar18[0x19] = 0;
  puVar18[0x1c] = 0;
  puVar18[0x1b] = 0;
  puVar18[0x1d] = 0;
  FUN_10992f900(puVar18 + 0x1e,puVar13);
  return puVar18;
}



/* Entry: 109931d00; end: 109931fd3;  */

undefined8 * FUN_109931d00(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  double *pdVar6;
  double *pdVar7;
  code *pcVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  double *pdVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *puVar21;
  ulong unaff_x24;
  undefined8 *puVar22;
  undefined8 *puVar23;
  double dVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  double dVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  double dVar30;
  undefined8 *apuStack_a0 [2];
  ulong uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  ulong uStack_70;
  long lStack_68;
  
  ppuVar9 = apuStack_a0;
  ppuVar10 = apuStack_a0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 >> 0x3d == 0) {
    uStack_90 = param_3;
    if (param_2 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)(param_3 << 3);
      if (param_3 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar20 = -((long)puVar11 + 0x1eU & 0xfffffffffffffff0);
        ppuVar9 = (undefined8 **)((long)apuStack_a0 + lVar20);
        puVar12 = (undefined8 *)((long)apuStack_a0 + lVar20);
        apuStack_a0[1] = puVar12;
      }
      else {
        _malloc();
        puVar12 = puVar11;
        unaff_x22 = param_1;
        apuStack_a0[1] = puVar11;
        if (puVar11 == (undefined8 *)0x0) goto LAB_109931f90;
      }
    }
    else {
      apuStack_a0[1] = (undefined8 *)0x0;
      ppuVar9 = apuStack_a0;
      puVar11 = param_1;
      puVar12 = param_2;
    }
    unaff_x23 = (undefined8 *)param_1[2];
    if (0 < (long)unaff_x23) {
      unaff_x24 = *(ulong *)(param_1[3] + 0x18);
      param_1 = (undefined8 *)*param_1;
      puVar22 = param_1 + (long)((long)unaff_x23 + unaff_x24 * ((long)unaff_x23 + -1));
      puVar23 = puVar12 + (long)unaff_x23;
      unaff_x20 = 8;
      unaff_x19 = 1;
      puVar21 = unaff_x23;
      do {
        puVar16 = (undefined8 *)0x0;
        param_2 = puVar21;
        if ((undefined8 *)0x7 < puVar21) {
          param_2 = (undefined8 *)0x8;
        }
        pdVar17 = (double *)(puVar22 + -(long)param_2);
        puVar11 = (undefined8 *)((long)puVar21 - (long)param_2);
        puVar2 = puVar12 + (long)puVar11;
        uVar18 = (ulong)puVar2 >> 3 & 1;
        puVar19 = puVar22;
        do {
          lVar20 = (long)puVar21 + ~(ulong)puVar16;
          if ((double)puVar12[lVar20] != 0.0) {
            dVar24 = (double)puVar12[lVar20] / (double)param_1[lVar20 * unaff_x24 + lVar20];
            puVar12[lVar20] = dVar24;
            uVar3 = (long)param_2 + ~(ulong)puVar16;
            if (0 < (long)uVar3) {
              pdVar6 = (double *)(puVar23 + -(long)param_2);
              uVar13 = uVar18;
              pdVar7 = pdVar17;
              uVar4 = uVar18;
              if (((ulong)puVar2 & 7) != 0) {
                uVar13 = uVar3;
                uVar4 = uVar3;
              }
              for (; uVar13 != 0; uVar13 = uVar13 - 1) {
                *pdVar6 = *pdVar6 - dVar24 * *pdVar7;
                pdVar6 = pdVar6 + 1;
                pdVar7 = pdVar7 + 1;
              }
              lVar14 = uVar3 - uVar4;
              uVar13 = lVar14 - (lVar14 >> 0x3f) & 0xfffffffffffffffe;
              lVar20 = uVar13 + uVar4;
              if (1 < lVar14) {
                lVar14 = (long)param_2 * -8 + uVar4 * 8;
                uVar15 = uVar4;
                do {
                  dVar27 = *(double *)((long)puVar19 + lVar14);
                  dVar30 = *(double *)((long)puVar23 + lVar14);
                  ((double *)((long)puVar23 + lVar14))[1] =
                       ((double *)((long)puVar23 + lVar14))[1] -
                       ((double *)((long)puVar19 + lVar14))[1] * dVar24;
                  *(double *)((long)puVar23 + lVar14) = dVar30 - dVar27 * dVar24;
                  uVar15 = uVar15 + 2;
                  lVar14 = lVar14 + 0x10;
                } while ((long)uVar15 < lVar20);
              }
              if (lVar20 < (long)uVar3) {
                lVar20 = (uVar4 - (long)param_2) + uVar13;
                do {
                  puVar23[lVar20] = (double)puVar23[lVar20] - dVar24 * (double)puVar19[lVar20];
                  lVar20 = lVar20 + 1;
                } while ((long)puVar16 + lVar20 != -1);
              }
            }
          }
          puVar16 = (undefined8 *)((long)puVar16 + 1);
          pdVar17 = pdVar17 + -unaff_x24;
          puVar19 = puVar19 + -unaff_x24;
        } while (puVar16 != param_2);
        if (0 < (long)puVar11) {
          puStack_78 = param_1 + (long)puVar11 * unaff_x24;
          uStack_80 = 1;
          puStack_88 = puVar2;
          uStack_70 = unaff_x24;
          FUN_109464f74(0xbff0000000000000,puVar11,param_2,&puStack_78,&puStack_88,puVar12,1);
        }
        puVar23 = puVar23 + -8;
        puVar22 = puVar22 + ~unaff_x24 * 8;
        unaff_x23 = puVar21 + -1;
        bVar1 = 7 < (long)puVar21;
        puVar21 = unaff_x23;
      } while (unaff_x23 != (undefined8 *)0x0 && bVar1);
    }
    if (0x4000 < uStack_90) {
      puVar11 = apuStack_a0[1];
      _free();
    }
    ppuVar10 = ppuVar9;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return puVar11;
    }
  }
  else {
LAB_109931f90:
    param_1 = unaff_x22;
    puVar11 = (undefined8 *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    param_2 = (undefined8 *)PTR___ZTISt9bad_alloc_110346a68;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if (0x4000 < uStack_90) {
    _free(apuStack_a0[1]);
  }
  puVar12 = puVar11;
  __Unwind_Resume();
  *(ulong *)((long)ppuVar10 + -0x40) = unaff_x24;
  *(undefined8 **)((long)ppuVar10 + -0x38) = unaff_x23;
  *(undefined8 **)((long)ppuVar10 + -0x30) = param_1;
  *(undefined8 **)((long)ppuVar10 + -0x28) = puVar11;
  *(undefined8 *)((long)ppuVar10 + -0x20) = unaff_x20;
  *(undefined8 *)((long)ppuVar10 + -0x18) = unaff_x19;
  *(undefined1 **)((long)ppuVar10 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)ppuVar10 + -8) = FUN_109931fd4;
  puVar12[3] = 0;
  puVar12[2] = 0;
  puVar12[5] = 0;
  puVar12[4] = 0;
  puVar12[7] = 0;
  puVar12[6] = 0;
  puVar12[0xb] = 0;
  puVar12[10] = 0;
  puVar12[8] = 0;
  puVar12[9] = puVar12 + 10;
  *puVar12 = &PTR_FUN_110b1dc88;
  puVar12[1] = 0x32aaaba7;
  uVar26 = param_2[1];
  uVar25 = *param_2;
  uVar29 = param_2[3];
  uVar28 = param_2[2];
  uVar5 = *(undefined4 *)(param_2 + 4);
  puVar12[0x11] = 0;
  *(undefined4 *)(puVar12 + 0x10) = uVar5;
  puVar12[0xf] = uVar29;
  puVar12[0xe] = uVar28;
  puVar12[0xd] = uVar26;
  puVar12[0xc] = uVar25;
  puVar12[0x12] = 0;
  puVar12[0x13] = 0;
  lVar20 = param_2[6] - param_2[5];
  if (lVar20 != 0) {
    if (lVar20 < 0) {
      FUN_10923f788();
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1099320c0);
      (*pcVar8)();
    }
    lVar14 = lVar20;
    __Znwm();
    puVar12[0x11] = lVar14;
    puVar12[0x12] = lVar14;
    puVar12[0x13] = lVar14 + lVar20;
    _memcpy();
    puVar12[0x12] = lVar14 + lVar20;
  }
  uVar26 = param_2[9];
  uVar25 = param_2[8];
  uVar29 = param_2[0xb];
  uVar28 = param_2[10];
  puVar12[0x18] = param_2[0xc];
  puVar12[0x15] = uVar26;
  puVar12[0x14] = uVar25;
  puVar12[0x17] = uVar29;
  puVar12[0x16] = uVar28;
  puVar12[0x1a] = 0;
  puVar12[0x19] = 0;
  puVar12[0x1c] = 0;
  puVar12[0x1b] = 0;
  puVar12[0x1d] = 0;
  FUN_10992f900(puVar12 + 0x1e,param_2);
  return puVar12;
}



/* Entry: 109931fd4; end: 109932103;  */

undefined8 * FUN_109931fd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = param_1 + 10;
  *param_1 = &PTR_FUN_110b1dc88;
  param_1[1] = 0x32aaaba7;
  uVar6 = param_2[1];
  uVar5 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  uVar1 = *(undefined4 *)(param_2 + 4);
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  param_1[0xf] = uVar8;
  param_1[0xe] = uVar7;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar5;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  lVar2 = param_2[6] - param_2[5];
  if (lVar2 != 0) {
    if (lVar2 < 0) {
      FUN_10923f788();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1099320c0);
      (*pcVar3)();
    }
    lVar4 = lVar2;
    __Znwm();
    param_1[0x11] = lVar4;
    param_1[0x12] = lVar4;
    param_1[0x13] = lVar4 + lVar2;
    _memcpy();
    param_1[0x12] = lVar4 + lVar2;
  }
  uVar6 = param_2[9];
  uVar5 = param_2[8];
  uVar8 = param_2[0xb];
  uVar7 = param_2[10];
  param_1[0x18] = param_2[0xc];
  param_1[0x15] = uVar6;
  param_1[0x14] = uVar5;
  param_1[0x17] = uVar8;
  param_1[0x16] = uVar7;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  FUN_10992f900(param_1 + 0x1e,param_2);
  return param_1;
}



/* Entry: 109932104; end: 1099326cb;  */

void FUN_109932104(undefined8 *param_1,long param_2,long param_3,undefined8 *param_4,long *param_5,
                  undefined8 param_6)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  long *plVar21;
  int iVar22;
  ulong uVar23;
  int iVar24;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  char cStack_89;
  undefined1 auStack_88 [40];
  
  cStack_89 = '\x14';
  uStack_90 = 0x65766c6f;
  uStack_98 = 0x533a3a7265766c6f;
  uStack_a0 = 0x53525165736e6544;
  uStack_8c = 0;
  FUN_109997918(auStack_88,&uStack_a0);
  if (cStack_89 < '\0') {
    __ZdlPv(uStack_a0);
  }
  lVar11 = *(long *)(param_3 + 0x18);
  iVar22 = (int)lVar11;
  iVar5 = 0;
  if (*param_5 != 0) {
    iVar5 = iVar22;
  }
  iVar24 = (int)*(undefined8 *)(param_3 + 0x10);
  iVar1 = iVar5 + iVar24;
  lVar10 = *(long *)(param_2 + 0xd0);
  uVar19 = (ulong)iVar22;
  uVar13 = uVar19;
  if ((lVar10 != iVar1) || (lVar8 = lVar11, *(long *)(param_2 + 0xd8) != (long)iVar22)) {
    lVar8 = (long)iVar1;
    if ((iVar22 != 0) && (iVar1 != 0)) {
      lVar3 = 0;
      if (uVar19 != 0) {
        lVar3 = 0x7fffffffffffffff / (long)uVar19;
      }
      if (lVar3 < lVar8) goto LAB_10993226c;
    }
    uVar7 = (long)iVar22 * (long)iVar1;
    if (*(long *)(param_2 + 0xd8) * lVar10 - uVar7 != 0) {
      _free(*(undefined8 *)(param_2 + 200));
      if ((long)uVar7 < 1) {
        lVar10 = 0;
      }
      else {
        if (uVar7 >> 0x3d != 0) goto LAB_10993226c;
        lVar10 = uVar7 * 8;
        _malloc();
        if (lVar10 == 0) goto LAB_10993226c;
      }
      *(long *)(param_2 + 200) = lVar10;
    }
    *(long *)(param_2 + 0xd0) = lVar8;
    *(ulong *)(param_2 + 0xd8) = uVar19;
    lVar10 = lVar8;
    if (*(long *)(param_2 + 0xe8) != lVar8) {
      _free(*(undefined8 *)(param_2 + 0xe0));
      if (iVar1 < 1) {
        lVar10 = 0;
      }
      else {
        lVar10 = lVar8 << 3;
        _malloc();
        if (lVar10 == 0) {
LAB_10993226c:
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x109932290);
          (*pcVar4)();
        }
      }
      *(long *)(param_2 + 0xe0) = lVar10;
      lVar10 = *(long *)(param_2 + 0xd0);
      uVar13 = *(ulong *)(param_2 + 0xd8);
    }
    *(long *)(param_2 + 0xe8) = lVar8;
    lVar8 = *(long *)(param_3 + 0x18);
  }
  uVar7 = (ulong)iVar24;
  if (0 < (long)uVar13) {
    uVar12 = 0;
    puVar14 = *(undefined8 **)(param_2 + 200);
    puVar15 = *(undefined8 **)(param_3 + 8);
    do {
      puVar16 = puVar14;
      puVar17 = puVar15;
      uVar18 = uVar7;
      if (0 < iVar24) {
        do {
          *puVar16 = *puVar17;
          puVar17 = puVar17 + lVar8;
          uVar18 = uVar18 - 1;
          puVar16 = puVar16 + 1;
        } while (uVar18 != 0);
      }
      uVar12 = uVar12 + 1;
      puVar15 = puVar15 + 1;
      puVar14 = puVar14 + lVar10;
    } while (uVar12 != uVar13);
  }
  puVar15 = *(undefined8 **)(param_2 + 0xe0);
  uVar13 = (ulong)puVar15 >> 3 & 1;
  if ((long)uVar7 <= (long)uVar13) {
    uVar13 = uVar7;
  }
  if (((ulong)puVar15 & 7) != 0) {
    uVar13 = uVar7;
  }
  lVar10 = uVar7 - uVar13;
  puVar14 = puVar15;
  puVar17 = param_4;
  uVar12 = uVar13;
  if (0 < (long)uVar13) {
    do {
      *puVar14 = *puVar17;
      uVar12 = uVar12 - 1;
      puVar14 = puVar14 + 1;
      puVar17 = puVar17 + 1;
    } while (uVar12 != 0);
  }
  lVar8 = (lVar10 - (lVar10 >> 0x3f) & 0xfffffffffffffffeU) + uVar13;
  if (1 < lVar10) {
    puVar14 = param_4 + uVar13;
    uVar12 = uVar13;
    puVar17 = puVar15 + uVar13;
    do {
      uVar20 = *puVar14;
      puVar17[1] = puVar14[1];
      *puVar17 = uVar20;
      uVar12 = uVar12 + 2;
      puVar14 = puVar14 + 2;
      puVar17 = puVar17 + 2;
    } while ((long)uVar12 < lVar8);
  }
  if (lVar8 < (long)uVar7) {
    lVar8 = lVar10 % 2;
    puVar15 = puVar15 + uVar13 + (lVar10 / 2) * 2;
    puVar14 = param_4 + uVar13 + (lVar10 / 2) * 2;
    do {
      *puVar15 = *puVar14;
      lVar8 = lVar8 + -1;
      puVar15 = puVar15 + 1;
      puVar14 = puVar14 + 1;
    } while (lVar8 != 0);
  }
  if (iVar5 != 0) {
    puVar14 = (undefined8 *)*param_5;
    uVar7 = *(ulong *)(param_2 + 0xd0);
    uVar13 = *(ulong *)(param_2 + 0xd8);
    puVar15 = (undefined8 *)(*(long *)(param_2 + 200) + (uVar7 - (long)iVar22) * 8);
    if (((ulong)puVar15 & 7) == 0) {
      if (0 < (long)uVar13) {
        uVar12 = (ulong)puVar15 >> 3 & 1;
        puVar17 = puVar15;
        uVar18 = uVar13;
        if ((long)uVar19 <= (long)uVar12) {
          uVar12 = uVar19;
        }
        do {
          if (0 < (long)uVar12) {
            *puVar17 = 0;
          }
          uVar23 = uVar19 - uVar12;
          lVar11 = (uVar23 & 0xfffffffffffffffe) + uVar12;
          if (1 < (long)uVar23) {
            lVar10 = lVar11;
            if (lVar11 <= (long)(uVar12 + 2)) {
              lVar10 = uVar12 + 2;
            }
            _bzero(puVar17 + uVar12,(lVar10 + ~uVar12 & 0x1ffffffffffffffe) * 8 + 0x10);
          }
          if (lVar11 < (long)uVar19) {
            _bzero(puVar17 + (uVar23 & 0x1ffffffffffffffe) + uVar12,(uVar23 & 1) << 3);
          }
          uVar23 = uVar12 + (uVar7 & 1);
          uVar9 = uVar23 & 1;
          uVar2 = -uVar9;
          if ((long)uVar23 < 0 == SCARRY8(uVar12,uVar7 & 1)) {
            uVar2 = uVar9;
          }
          uVar12 = uVar19;
          if ((long)uVar2 <= (long)uVar19) {
            uVar12 = uVar2;
          }
          uVar18 = uVar18 - 1;
          puVar17 = puVar17 + uVar7;
        } while (uVar18 != 0);
      }
    }
    else if (0 < (long)uVar13) {
      puVar17 = puVar15;
      uVar12 = uVar13;
      do {
        if (0 < iVar22) {
          _bzero(puVar17,(lVar11 << 0x20) >> 0x1d);
        }
        puVar17 = puVar17 + uVar7;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    if ((long)uVar19 <= (long)uVar13) {
      uVar13 = uVar19;
    }
    if (0 < (long)uVar13) {
      lVar11 = *(long *)(param_2 + 0xd0);
      do {
        *puVar15 = *puVar14;
        puVar15 = puVar15 + lVar11 + 1;
        uVar13 = uVar13 - 1;
        puVar14 = puVar14 + 1;
      } while (uVar13 != 0);
    }
    uVar13 = *(long *)(param_2 + 0xe0) + (*(long *)(param_2 + 0xe8) - uVar19) * 8;
    uVar7 = uVar13 >> 3 & 1;
    if ((long)uVar19 <= (long)uVar7) {
      uVar7 = uVar19;
    }
    if ((uVar13 & 7) != 0) {
      uVar7 = uVar19;
    }
    lVar11 = uVar19 - uVar7;
    if (0 < (long)uVar7) {
      _bzero(uVar13,uVar7 << 3);
    }
    lVar10 = (lVar11 - (lVar11 >> 0x3f) & 0xfffffffffffffffeU) + uVar7;
    if (1 < lVar11) {
      lVar8 = lVar10;
      if (lVar10 <= (long)(uVar7 + 2)) {
        lVar8 = uVar7 + 2;
      }
      _bzero(uVar13 + uVar7 * 8,(lVar8 + ~uVar7 & 0x1ffffffffffffffe) * 8 + 0x10);
    }
    if (lVar10 < (long)uVar19) {
      _bzero(uVar13 + (lVar11 / 2) * 0x10 + uVar7 * 8,(lVar11 % 2) * 8);
    }
  }
  *param_1 = 0xbff0000000000000;
  param_1[1] = 0x2ffffffff;
  puVar15 = param_1 + 2;
  *puVar15 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  plVar21 = *(long **)(param_2 + 0xf0);
  uVar20 = *(undefined8 *)(param_2 + 0xe0);
  plVar6 = plVar21;
  (**(code **)(*plVar21 + 0x10))
            (plVar21,*(undefined4 *)(param_2 + 0xd0),*(undefined4 *)(param_2 + 0xd8),
             *(undefined8 *)(param_2 + 200),puVar15);
  iVar5 = (int)plVar6;
  if (iVar5 == 0) {
    (**(code **)(*plVar21 + 0x18))(plVar21,uVar20,param_6,puVar15);
    iVar5 = (int)plVar21;
  }
  *(undefined4 *)(param_1 + 1) = 1;
  *(int *)((long)param_1 + 0xc) = iVar5;
  cStack_89 = '\x05';
  uStack_a0 = CONCAT26(uStack_a0._6_2_,0x65766c6f53);
  FUN_109997c38(auStack_88,&uStack_a0);
  if (cStack_89 < '\0') {
    __ZdlPv(uStack_a0);
  }
  FUN_109997a28(auStack_88);
  return;
}



/* Entry: 1099326cc; end: 1099327bb;  */

undefined8 * FUN_1099326cc(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[0x1e];
  param_1[0x1e] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  _free(param_1[0x1c]);
  _free(param_1[0x19]);
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110b1dbe0;
  FUN_1099215c8(param_1 + 9,param_1[10]);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 1099327bc; end: 109932883;  */

undefined8 * FUN_1099327bc(undefined8 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_110b1dcd8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar4 = (long)param_3;
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar2 = 0;
    if (lVar4 != 0) {
      lVar2 = 0x7fffffffffffffff / lVar4;
    }
    if (lVar2 < param_2) goto LAB_10993282c;
  }
  uVar3 = (long)param_3 * (long)param_2;
  if (uVar3 != 0) {
    if ((long)uVar3 < 1) {
      lVar2 = 0;
    }
    else {
      if (uVar3 >> 0x3d != 0) {
LAB_10993282c:
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x109932850);
        (*pcVar1)();
      }
      lVar2 = uVar3 * 8;
      _malloc();
      if (lVar2 == 0) goto LAB_10993282c;
    }
    param_1[1] = lVar2;
  }
  param_1[2] = (long)param_2;
  param_1[3] = lVar4;
  return param_1;
}



/* Entry: 109932884; end: 1099328a3;  */

void FUN_109932884(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18) * *(long *)(param_1 + 0x10);
  if (0 < lVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)(*(undefined8 *)(param_1 + 8),lVar1 * 8);
    return;
  }
  return;
}



/* Entry: 1099328a4; end: 109932b37;  */

void FUN_1099328a4(long param_1,double *param_2,double *param_3)

{
  int iVar1;
  code *pcVar2;
  double *pdVar3;
  double *pdVar4;
  ulong uVar5;
  double *pdVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  double *pdVar11;
  ulong uVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  uVar7 = *(ulong *)(param_1 + 0x18);
  iVar13 = (int)uVar7;
  uVar12 = (ulong)iVar13;
  if ((long)uVar5 < 1) {
    pdVar3 = (double *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) {
LAB_109932afc:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109932b24);
      (*pcVar2)();
    }
    pdVar3 = (double *)0x1;
    _calloc(1,uVar5 << 3);
    if (pdVar3 == (double *)0x0) goto LAB_109932afc;
    if (uVar5 == 1) {
      dVar14 = 0.0;
      if ((uVar7 & 0xffffffff) != 0) {
        pdVar4 = *(double **)(param_1 + 8);
        iVar1 = iVar13 + 3;
        if (-1 < iVar13) {
          iVar1 = iVar13;
        }
        if (uVar12 + 1 < 3) {
          dVar14 = *pdVar4 * *param_2;
        }
        else {
          uVar7 = -(ulong)((uint)(iVar13 / 2) >> 0x1f) & 0xfffffffe00000000 |
                  (ulong)(uint)(iVar13 / 2) << 1;
          dVar14 = *pdVar4 * *param_2;
          dVar15 = pdVar4[1] * param_2[1];
          if (3 < (long)uVar12) {
            uVar10 = -(ulong)((uint)(iVar1 >> 2) >> 0x1f) & 0xfffffffc00000000 |
                     (ulong)(uint)(iVar1 >> 2) << 2;
            dVar16 = pdVar4[2] * param_2[2];
            dVar17 = pdVar4[3] * param_2[3];
            if (7 < uVar12) {
              pdVar6 = param_2 + 6;
              pdVar11 = pdVar4 + 6;
              lVar9 = 4;
              do {
                dVar14 = dVar14 + pdVar11[-2] * pdVar6[-2];
                dVar15 = dVar15 + pdVar11[-1] * pdVar6[-1];
                dVar16 = dVar16 + *pdVar11 * *pdVar6;
                dVar17 = dVar17 + pdVar11[1] * pdVar6[1];
                lVar9 = lVar9 + 4;
                pdVar6 = pdVar6 + 4;
                pdVar11 = pdVar11 + 4;
              } while (lVar9 < (long)uVar10);
            }
            dVar14 = dVar16 + dVar14;
            dVar15 = dVar17 + dVar15;
            if ((long)uVar10 < (long)uVar7) {
              dVar14 = dVar14 + pdVar4[uVar10] * param_2[uVar10];
              dVar15 = dVar15 + (pdVar4 + uVar10)[1] * (param_2 + uVar10)[1];
            }
          }
          dVar14 = dVar14 + dVar15;
          lVar9 = uVar12 - uVar7;
          if (lVar9 != 0 && (long)uVar7 <= (long)uVar12) {
            lVar8 = (long)((ulong)(uint)(iVar13 - (iVar13 >> 0x1f)) << 0x20) >> 0x21;
            pdVar4 = pdVar4 + lVar8 * 2;
            pdVar6 = param_2 + lVar8 * 2;
            do {
              dVar14 = dVar14 + *pdVar4 * *pdVar6;
              lVar9 = lVar9 + -1;
              pdVar4 = pdVar4 + 1;
              pdVar6 = pdVar6 + 1;
            } while (lVar9 != 0);
          }
        }
      }
      *pdVar3 = dVar14 + 0.0;
      goto LAB_109932a24;
    }
  }
  FUN_1099332a0(0x3ff0000000000000,param_1 + 8,param_2,uVar12,pdVar3);
LAB_109932a24:
  uVar7 = (ulong)(int)uVar5;
  uVar5 = (ulong)param_3 >> 3 & 1;
  if ((long)uVar7 <= (long)uVar5) {
    uVar5 = uVar7;
  }
  if (((ulong)param_3 & 7) != 0) {
    uVar5 = uVar7;
  }
  lVar9 = uVar7 - uVar5;
  pdVar4 = param_3;
  pdVar6 = pdVar3;
  uVar12 = uVar5;
  if (0 < (long)uVar5) {
    do {
      *pdVar4 = *pdVar6 + *pdVar4;
      uVar12 = uVar12 - 1;
      pdVar4 = pdVar4 + 1;
      pdVar6 = pdVar6 + 1;
    } while (uVar12 != 0);
  }
  lVar8 = (lVar9 - (lVar9 >> 0x3f) & 0xfffffffffffffffeU) + uVar5;
  if (1 < lVar9) {
    pdVar4 = pdVar3 + uVar5;
    uVar12 = uVar5;
    pdVar6 = param_3 + uVar5;
    do {
      dVar14 = *pdVar4;
      pdVar6[1] = pdVar4[1] + pdVar6[1];
      *pdVar6 = dVar14 + *pdVar6;
      uVar12 = uVar12 + 2;
      pdVar4 = pdVar4 + 2;
      pdVar6 = pdVar6 + 2;
    } while ((long)uVar12 < lVar8);
  }
  if (lVar8 < (long)uVar7) {
    lVar8 = lVar9 % 2;
    pdVar4 = pdVar3 + uVar5 + (lVar9 / 2) * 2;
    pdVar6 = param_3 + uVar5 + (lVar9 / 2) * 2;
    do {
      *pdVar6 = *pdVar4 + *pdVar6;
      lVar8 = lVar8 + -1;
      pdVar4 = pdVar4 + 1;
      pdVar6 = pdVar6 + 1;
    } while (lVar8 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(pdVar3);
  return;
}



/* Entry: 109932b38; end: 109932b47;  */

undefined4 FUN_109932b38(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 109932b48; end: 109932d3f;  */

void FUN_109932b48(long param_1,double *param_2,double *param_3)

{
  code *pcVar1;
  double *pdVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  double *pdVar7;
  double *pdVar8;
  ulong uVar9;
  double dVar10;
  double *pdStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  uVar5 = *(ulong *)(param_1 + 0x18);
  if ((long)uVar5 < 1) {
    pdVar2 = (double *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) {
LAB_109932d04:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x109932d2c);
      (*pcVar1)();
    }
    pdVar2 = (double *)0x1;
    _calloc(1,uVar5 << 3);
    if (pdVar2 == (double *)0x0) goto LAB_109932d04;
    if (uVar5 == 1) {
      dVar10 = 0.0;
      if ((uVar4 & 0xffffffff) != 0) {
        pdVar7 = *(double **)(param_1 + 8);
        dVar10 = *pdVar7 * *param_2;
        if (1 < (long)(int)uVar4) {
          lVar3 = (long)(int)uVar4 + -1;
          do {
            param_2 = param_2 + 1;
            pdVar7 = pdVar7 + 1;
            dVar10 = dVar10 + *pdVar7 * *param_2;
            lVar3 = lVar3 + -1;
          } while (lVar3 != 0);
        }
      }
      *pdVar2 = dVar10 + 0.0;
      goto LAB_109932c28;
    }
  }
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uStack_58 = 1;
  pdStack_60 = param_2;
  uStack_48 = uVar5;
  FUN_109909a3c(0x3ff0000000000000,uVar5,uVar4,&uStack_50,&pdStack_60,pdVar2,1);
LAB_109932c28:
  uVar5 = (ulong)(int)uVar5;
  uVar4 = (ulong)param_3 >> 3 & 1;
  if ((long)uVar5 <= (long)uVar4) {
    uVar4 = uVar5;
  }
  if (((ulong)param_3 & 7) != 0) {
    uVar4 = uVar5;
  }
  lVar3 = uVar5 - uVar4;
  pdVar7 = param_3;
  pdVar8 = pdVar2;
  uVar9 = uVar4;
  if (0 < (long)uVar4) {
    do {
      *pdVar7 = *pdVar8 + *pdVar7;
      uVar9 = uVar9 - 1;
      pdVar7 = pdVar7 + 1;
      pdVar8 = pdVar8 + 1;
    } while (uVar9 != 0);
  }
  lVar6 = (lVar3 - (lVar3 >> 0x3f) & 0xfffffffffffffffeU) + uVar4;
  if (1 < lVar3) {
    pdVar7 = pdVar2 + uVar4;
    uVar9 = uVar4;
    pdVar8 = param_3 + uVar4;
    do {
      dVar10 = *pdVar7;
      pdVar8[1] = pdVar7[1] + pdVar8[1];
      *pdVar8 = dVar10 + *pdVar8;
      uVar9 = uVar9 + 2;
      pdVar7 = pdVar7 + 2;
      pdVar8 = pdVar8 + 2;
    } while ((long)uVar9 < lVar6);
  }
  if (lVar6 < (long)uVar5) {
    lVar6 = lVar3 % 2;
    pdVar7 = pdVar2 + uVar4 + (lVar3 / 2) * 2;
    pdVar8 = param_3 + uVar4 + (lVar3 / 2) * 2;
    do {
      *pdVar8 = *pdVar7 + *pdVar8;
      lVar6 = lVar6 + -1;
      pdVar7 = pdVar7 + 1;
      pdVar8 = pdVar8 + 1;
    } while (lVar6 != 0);
  }
  _free(pdVar2);
  return;
}



/* Entry: 109932d40; end: 109932f4b;  */

void FUN_109932d40(long param_1,ulong param_2)

{
  double *pdVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  lVar11 = *(long *)(param_1 + 0x18);
  uVar4 = (ulong)(int)lVar11;
  uVar5 = param_2 >> 3 & 1;
  if ((long)(int)lVar11 <= (long)uVar5) {
    uVar5 = uVar4;
  }
  if ((param_2 & 7) != 0) {
    uVar5 = uVar4;
  }
  lVar6 = uVar4 - uVar5;
  if (0 < (long)uVar5) {
    uVar7 = 0;
    lVar9 = *(long *)(param_1 + 0x10);
    lVar12 = lVar11 * 8;
    do {
      if (lVar9 == 0) {
        dVar14 = 0.0;
      }
      else {
        dVar14 = *(double *)(*(long *)(param_1 + 8) + uVar7 * 8);
        dVar14 = dVar14 * dVar14;
        if (1 < lVar9) {
          pdVar1 = (double *)(*(long *)(param_1 + 8) + lVar12);
          lVar10 = lVar9 + -1;
          do {
            dVar14 = dVar14 + *pdVar1 * *pdVar1;
            pdVar1 = pdVar1 + lVar11;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
      }
      *(double *)(param_2 + uVar7 * 8) = dVar14;
      uVar7 = uVar7 + 1;
      lVar12 = lVar12 + 8;
    } while (uVar7 != uVar5);
  }
  uVar7 = (lVar6 - (lVar6 >> 0x3f) & 0xfffffffffffffffeU) + uVar5;
  if (1 < lVar6) {
    lVar11 = uVar5 << 3;
    uVar8 = uVar5;
    do {
      lVar12 = *(long *)(param_1 + 0x10);
      if (lVar12 == 0) {
        dVar14 = 0.0;
        dVar15 = 0.0;
      }
      else {
        lVar10 = *(long *)(param_1 + 0x18);
        lVar9 = *(long *)(param_1 + 8);
        pdVar1 = (double *)(lVar9 + uVar8 * 8);
        dVar15 = pdVar1[1];
        dVar14 = *pdVar1;
        dVar14 = dVar14 * dVar14;
        dVar15 = dVar15 * dVar15;
        if (lVar12 < 5) {
          lVar3 = 1;
        }
        else {
          uVar2 = lVar12 - 1U & 0xfffffffffffffffc;
          pdVar1 = (double *)(lVar9 + lVar11);
          lVar3 = 1;
          do {
            dVar17 = (pdVar1 + lVar10)[1];
            dVar16 = pdVar1[lVar10];
            dVar20 = (pdVar1 + lVar10 * 2)[1];
            dVar18 = pdVar1[lVar10 * 2];
            dVar21 = (pdVar1 + lVar10 * 3)[1];
            dVar19 = pdVar1[lVar10 * 3];
            pdVar1 = pdVar1 + lVar10 * 4;
            dVar14 = dVar14 + dVar16 * dVar16 + dVar18 * dVar18 +
                              dVar19 * dVar19 + *pdVar1 * *pdVar1;
            dVar15 = dVar15 + dVar17 * dVar17 + dVar20 * dVar20 +
                              dVar21 * dVar21 + pdVar1[1] * pdVar1[1];
            lVar3 = lVar3 + 4;
          } while (lVar3 < (long)uVar2);
          lVar3 = uVar2 + 1;
        }
        lVar13 = lVar12 - lVar3;
        if (lVar13 != 0 && lVar3 <= lVar12) {
          lVar9 = lVar9 + lVar3 * lVar10 * 8;
          do {
            dVar17 = ((double *)(lVar9 + lVar11))[1];
            dVar16 = *(double *)(lVar9 + lVar11);
            dVar14 = dVar14 + dVar16 * dVar16;
            dVar15 = dVar15 + dVar17 * dVar17;
            lVar9 = lVar9 + lVar10 * 8;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
      }
      pdVar1 = (double *)(param_2 + uVar8 * 8);
      pdVar1[1] = dVar15;
      *pdVar1 = dVar14;
      uVar8 = uVar8 + 2;
      lVar11 = lVar11 + 0x10;
    } while ((long)uVar8 < (long)uVar7);
  }
  if ((long)uVar7 < (long)uVar4) {
    lVar12 = *(long *)(param_1 + 0x10);
    lVar11 = (lVar6 / 2) * 0x10 + uVar5 * 8;
    do {
      if (lVar12 == 0) {
        dVar14 = 0.0;
      }
      else {
        dVar14 = *(double *)(*(long *)(param_1 + 8) + uVar7 * 8);
        dVar14 = dVar14 * dVar14;
        if (1 < lVar12) {
          pdVar1 = (double *)(*(long *)(param_1 + 8) + lVar11 + *(long *)(param_1 + 0x18) * 8);
          lVar6 = lVar12 + -1;
          do {
            dVar14 = dVar14 + *pdVar1 * *pdVar1;
            pdVar1 = pdVar1 + *(long *)(param_1 + 0x18);
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
      }
      *(double *)(param_2 + uVar7 * 8) = dVar14;
      uVar7 = uVar7 + 1;
      lVar11 = lVar11 + 8;
    } while (uVar7 != uVar4);
  }
  return;
}



/* Entry: 109932f4c; end: 1099330e7;  */

void FUN_109932f4c(long param_1,double *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  double *pdVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double *pdVar13;
  double *pdVar14;
  long lVar15;
  ulong uVar16;
  double dVar17;
  double dVar18;
  
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *(ulong *)(param_1 + 0x18);
  uVar16 = (ulong)(int)uVar3;
  lVar15 = *(long *)(param_1 + 8);
  lVar4 = lVar15;
  if (uVar3 == (long)(int)uVar3) goto LAB_109933004;
  if ((uVar3 & 0xffffffff) != 0 && lVar2 != 0) {
    lVar4 = 0;
    if (uVar16 != 0) {
      lVar4 = 0x7fffffffffffffff / (long)uVar16;
    }
    if (lVar2 <= lVar4) goto LAB_109932fb0;
    goto LAB_109932fd8;
  }
  if (lVar2 != 0) {
LAB_109932fb0:
    uVar8 = uVar16 * lVar2;
    _free(lVar15);
    if ((long)uVar8 < 1) {
LAB_109932ff8:
      lVar4 = 0;
    }
    else {
      if (uVar8 >> 0x3d != 0) {
LAB_109932fd8:
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        goto LAB_109932ff8;
      }
      lVar4 = uVar8 * 8;
      _malloc();
      if (lVar4 == 0) goto LAB_109932fd8;
    }
    *(long *)(param_1 + 8) = lVar4;
  }
  *(long *)(param_1 + 0x10) = lVar2;
  *(ulong *)(param_1 + 0x18) = uVar16;
LAB_109933004:
  if (0 < lVar2) {
    uVar8 = 0;
    lVar7 = 0;
    lVar10 = lVar4;
    lVar11 = lVar15;
    do {
      if (0 < (long)uVar8) {
        *(double *)(lVar4 + lVar7 * uVar16 * 8) = *(double *)(lVar15 + lVar7 * uVar3 * 8) * *param_2
        ;
      }
      lVar12 = (uVar16 - uVar8 & 0xfffffffffffffffe) + uVar8;
      if (1 < (long)(uVar16 - uVar8)) {
        uVar5 = uVar8;
        pdVar6 = (double *)(lVar10 + uVar8 * 8);
        pdVar13 = param_2 + uVar8;
        pdVar14 = (double *)(lVar11 + uVar8 * 8);
        do {
          dVar17 = *pdVar14;
          dVar18 = *pdVar13;
          pdVar6[1] = pdVar14[1] * pdVar13[1];
          *pdVar6 = dVar17 * dVar18;
          uVar5 = uVar5 + 2;
          pdVar6 = pdVar6 + 2;
          pdVar13 = pdVar13 + 2;
          pdVar14 = pdVar14 + 2;
        } while ((long)uVar5 < lVar12);
      }
      for (; lVar12 < (long)uVar16; lVar12 = lVar12 + 1) {
        *(double *)(lVar10 + lVar12 * 8) = *(double *)(lVar11 + lVar12 * 8) * param_2[lVar12];
      }
      uVar5 = uVar8 + (uVar3 & 1);
      uVar9 = uVar5 & 1;
      uVar1 = -uVar9;
      if ((long)uVar5 < 0 == SCARRY8(uVar8,uVar3 & 1)) {
        uVar1 = uVar9;
      }
      uVar8 = uVar16;
      if ((long)uVar1 <= (long)uVar16) {
        uVar8 = uVar1;
      }
      lVar7 = lVar7 + 1;
      lVar11 = lVar11 + uVar3 * 8;
      lVar10 = lVar10 + uVar16 * 8;
    } while (lVar7 != lVar2);
  }
  return;
}



/* Entry: 1099330e8; end: 109933113;  */

void FUN_1099330e8(long param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_109909364(param_2,param_1 + 8,&uStack_11);
  return;
}



/* Entry: 109933114; end: 109933123;  */

int FUN_109933114(long param_1)

{
  return *(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x10);
}



/* Entry: 109933124; end: 10993323f;  */

undefined8 * FUN_109933124(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  
  if (param_2 != (undefined8 *)0x0) {
    lVar3 = param_1[2];
    puVar1 = param_1;
    if (0 < lVar3) {
      lVar4 = 0;
      lVar2 = param_1[3];
      do {
        if (0 < lVar2) {
          lVar3 = 0;
          do {
            puVar1 = param_2;
            _fprintf(param_2,&UNK_10f58a2e1);
            lVar3 = lVar3 + 1;
            lVar2 = param_1[3];
          } while (lVar3 < lVar2);
          lVar3 = param_1[2];
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < lVar3);
    }
    return puVar1;
  }
  uStack_b0 = 0;
  uStack_58 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  FUN_1099a9f0c(&uStack_b0,&UNK_10f58b4ce,0x5f,3,FUN_1099aa768,0);
  FUN_1092b4db8(lStack_a8 + 0x7540,&UNK_10f58a2c2,0x1e);
  puVar1 = &uStack_b0;
  func_0x0001099ab7c0();
  _free(puVar1[1]);
  return puVar1;
}



/* Entry: 109933240; end: 10993328f;  */

long FUN_109933240(long param_1)

{
  _free(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 109933290; end: 10993329f;  */

undefined8 FUN_109933290(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1099332a0; end: 1099333eb;  */

undefined1  [16]
FUN_1099332a0(undefined8 param_1,undefined8 *param_2,long *param_3,ulong param_4,long **param_5,
             long **param_6)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  long *plVar15;
  long **pplVar16;
  bool bVar17;
  double *pdVar18;
  ulong uVar19;
  int *piVar20;
  double dVar21;
  double *pdVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long lVar25;
  undefined1 *puVar26;
  ulong uVar27;
  long lVar28;
  undefined8 *puVar29;
  ulong uVar30;
  long lVar31;
  undefined1 *puVar32;
  ulong uVar33;
  ulong uVar34;
  double *pdVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  long *plVar39;
  long lVar40;
  double *pdVar41;
  undefined1 *puVar42;
  long lVar43;
  double *pdVar44;
  ulong unaff_x19;
  double *pdVar45;
  undefined8 *puVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  uint *puVar50;
  undefined8 *puVar51;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  uint uVar52;
  long unaff_x24;
  long lVar53;
  uint *unaff_x25;
  ulong unaff_x26;
  undefined1 *unaff_x27;
  undefined8 uVar54;
  uint uVar55;
  undefined8 unaff_x28;
  uint *puVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  long lStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  plVar15 = &lStack_70;
  plVar3 = &lStack_70;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar16 = param_5;
  if (param_4 >> 0x3d == 0) {
    unaff_x19 = param_4;
    unaff_x22 = param_2;
    unaff_d8 = param_1;
    if (param_3 == (long *)0x0) {
      param_3 = (long *)(param_4 << 3);
      if (param_4 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar53 = -((ulong)((long)param_3 + 0x1eU) & 0xfffffffffffffff0);
        plVar15 = (long *)((long)&lStack_70 + lVar53);
        param_3 = (long *)((long)&lStack_70 + lVar53);
        unaff_x21 = param_3;
      }
      else {
        _malloc();
        unaff_x21 = param_3;
        if (param_3 == (long *)0x0) goto LAB_1099333ac;
      }
    }
    else {
      plVar15 = &lStack_70;
      unaff_x21 = (long *)0x0;
    }
    plVar39 = (long *)param_2[1];
    puVar14 = (undefined *)param_2[2];
    uStack_58 = *param_2;
    uStack_60 = 1;
    puVar50 = (uint *)&uStack_58;
    pplVar16 = &plStack_68;
    plStack_68 = param_3;
    puStack_50 = puVar14;
    FUN_10990fa5c(param_1);
    if (0x4000 < param_4) {
      plVar39 = unaff_x21;
      _free();
    }
    plVar3 = plVar15;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      auVar66._8_8_ = puVar14;
      auVar66._0_8_ = plVar39;
      return auVar66;
    }
  }
  else {
LAB_1099333ac:
    param_5 = param_6;
    plVar39 = (long *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    puVar14 = PTR___ZTISt9bad_alloc_110346a68;
    puVar50 = (uint *)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if (0x4000 < unaff_x19) {
    _free(unaff_x21);
  }
  plVar8 = plVar39;
  __Unwind_Resume();
  *(undefined8 *)((long)plVar3 + -0x60) = unaff_x28;
  *(undefined1 **)((long)plVar3 + -0x58) = unaff_x27;
  *(ulong *)((long)plVar3 + -0x50) = unaff_x26;
  *(uint **)((long)plVar3 + -0x48) = unaff_x25;
  *(long *)((long)plVar3 + -0x40) = unaff_x24;
  *(long **)((long)plVar3 + -0x38) = unaff_x23;
  *(undefined8 **)((long)plVar3 + -0x30) = unaff_x22;
  *(long **)((long)plVar3 + -0x28) = unaff_x21;
  *(long **)((long)plVar3 + -0x20) = plVar39;
  *(ulong *)((long)plVar3 + -0x18) = unaff_x19;
  *(undefined1 **)((long)plVar3 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)plVar3 + -8) = FUN_1099333ec;
  puVar56 = (uint *)plVar8[3];
  lVar53 = plVar8[4];
  *puVar50 = 0;
  uVar19 = (ulong)(lVar53 - (long)puVar56) >> 5;
  *(undefined4 *)pplVar16 = 0;
  *(undefined4 *)param_5 = 0;
  *(ulong *)((long)plVar3 + -0xd8) = uVar19;
  plVar15 = plVar8;
  pcVar2 = (code *)param_5;
  if ((int)uVar19 < 1) {
    uVar55 = *puVar50;
  }
  else {
    unaff_x25 = puVar56 + 2;
    piVar20 = *(int **)unaff_x25;
    uVar55 = *puVar50;
    if (*piVar20 < (int)puVar14) {
      *(int *)((long)plVar3 + -0xe4) = (int)puVar14;
      lVar53 = 0;
      unaff_x27 = (undefined1 *)((long)plVar3 + -200);
      *(uint **)((long)plVar3 + -0xe0) = puVar50;
      do {
        if (uVar55 != 0xffffffff) {
          if (uVar55 == 0) {
            *puVar50 = *puVar56;
          }
          else if (uVar55 != *puVar56) {
            if (piRam000000011373cb20 == (int *)0x0) {
              plVar15 = (long *)0x11373cb20;
              puVar14 = (undefined *)0x11382bb14;
              FUN_1099adbb8(0x11373cb20,0x11382bb14,&UNK_10f58b55a,2);
              if (((ulong)plVar15 & 1) != 0) goto LAB_1099334cc;
            }
            else if (1 < *piRam000000011373cb20) {
LAB_1099334cc:
              *(undefined8 *)((long)plVar3 + -200) = 0;
              *(undefined8 *)((long)plVar3 + -0x70) = 0;
              *(undefined8 *)((long)plVar3 + -0xb0) = 0;
              *(undefined8 *)((long)plVar3 + -0xb8) = 0;
              *(undefined8 *)((long)plVar3 + -0xa0) = 0;
              *(undefined8 *)((long)plVar3 + -0xa8) = 0;
              *(undefined8 *)((long)plVar3 + -0x90) = 0;
              *(undefined8 *)((long)plVar3 + -0x98) = 0;
              *(undefined8 *)((long)plVar3 + -0x80) = 0;
              *(undefined8 *)((long)plVar3 + -0x88) = 0;
              *(undefined4 *)((long)plVar3 + -0x78) = 0;
              pcVar2 = FUN_1099aa768;
              FUN_1099a9f0c((undefined1 *)((long)plVar3 + -200),&UNK_10f58b55a,0x40,0,FUN_1099aa768,
                            0);
              FUN_1092b4db8(*(long *)((long)plVar3 + -0xc0) + 0x7540,&UNK_10f58b5e3,0x3b);
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
              FUN_1092b4db8();
              puVar14 = (undefined *)(ulong)*puVar56;
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
              plVar15 = (long *)((long)plVar3 + -200);
              FUN_1099ab3b0(plVar15);
            }
            *puVar50 = 0xffffffff;
            piVar20 = *(int **)unaff_x25;
          }
        }
        iVar6 = *(int *)pplVar16;
        if (iVar6 != -1) {
          lVar48 = (long)*piVar20;
          if (iVar6 == 0) {
            *(undefined4 *)pplVar16 = *(undefined4 *)(*plVar8 + lVar48 * 8);
          }
          else if (iVar6 != *(int *)(*plVar8 + lVar48 * 8)) {
            if (piRam000000011373cb40 == (int *)0x0) {
              plVar15 = (long *)0x11373cb40;
              puVar14 = (undefined *)0x11382bb14;
              FUN_1099adbb8(0x11373cb40,0x11382bb14,&UNK_10f58b55a,2);
              if (((ulong)plVar15 & 1) != 0) goto LAB_1099335d4;
            }
            else if (1 < *piRam000000011373cb40) {
LAB_1099335d4:
              *(undefined8 *)((long)plVar3 + -200) = 0;
              *(undefined8 *)((long)plVar3 + -0x70) = 0;
              *(undefined8 *)((long)plVar3 + -0xb0) = 0;
              *(undefined8 *)((long)plVar3 + -0xb8) = 0;
              *(undefined8 *)((long)plVar3 + -0xa0) = 0;
              *(undefined8 *)((long)plVar3 + -0xa8) = 0;
              *(undefined8 *)((long)plVar3 + -0x90) = 0;
              *(undefined8 *)((long)plVar3 + -0x98) = 0;
              *(undefined8 *)((long)plVar3 + -0x80) = 0;
              *(undefined8 *)((long)plVar3 + -0x88) = 0;
              *(undefined4 *)((long)plVar3 + -0x78) = 0;
              pcVar2 = FUN_1099aa768;
              FUN_1099a9f0c((undefined1 *)((long)plVar3 + -200),&UNK_10f58b55a,0x4b,0,FUN_1099aa768,
                            0);
              FUN_1092b4db8(*(long *)((long)plVar3 + -0xc0) + 0x7540,&UNK_10f58b61f,0x39);
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
              FUN_1092b4db8();
              puVar14 = (undefined *)(ulong)*(uint *)(*plVar8 + lVar48 * 8);
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
              plVar15 = (long *)((long)plVar3 + -200);
              FUN_1099ab3b0(plVar15);
            }
            *(undefined4 *)pplVar16 = 0xffffffff;
            piVar20 = *(int **)unaff_x25;
          }
        }
        lVar48 = *(long *)(puVar56 + 4);
        if (8 < (ulong)(lVar48 - (long)piVar20)) {
          iVar6 = *(int *)param_5;
          if (iVar6 == 0) {
            iVar6 = *(int *)(*plVar8 + (long)piVar20[2] * 8);
            *(int *)param_5 = iVar6;
          }
          unaff_x21 = (long *)0x8;
          unaff_x26 = 1;
          do {
            if (iVar6 == -1) break;
            lVar49 = (long)*(int *)((long)piVar20 + (long)unaff_x21) * 8;
            if (iVar6 != *(int *)(*plVar8 + lVar49)) {
              if (piRam000000011373cb60 == (int *)0x0) {
                plVar15 = (long *)0x11373cb60;
                puVar14 = (undefined *)0x11382bb14;
                FUN_1099adbb8(0x11373cb60,0x11382bb14,&UNK_10f58b55a,2);
                if (((ulong)plVar15 & 1) != 0) goto LAB_1099336fc;
              }
              else if (1 < *piRam000000011373cb60) {
LAB_1099336fc:
                *(undefined8 *)((long)plVar3 + -200) = 0;
                *(undefined8 *)((long)plVar3 + -0x70) = 0;
                *(undefined8 *)((long)plVar3 + -0xb0) = 0;
                *(undefined8 *)((long)plVar3 + -0xb8) = 0;
                *(undefined8 *)((long)plVar3 + -0xa0) = 0;
                *(undefined8 *)((long)plVar3 + -0xa8) = 0;
                *(undefined8 *)((long)plVar3 + -0x90) = 0;
                *(undefined8 *)((long)plVar3 + -0x98) = 0;
                *(undefined8 *)((long)plVar3 + -0x80) = 0;
                *(undefined8 *)((long)plVar3 + -0x88) = 0;
                *(undefined4 *)((long)plVar3 + -0x78) = 0;
                pcVar2 = FUN_1099aa768;
                FUN_1099a9f0c((undefined1 *)((long)plVar3 + -200),&UNK_10f58b55a,0x5e,0,
                              FUN_1099aa768,0);
                FUN_1092b4db8(*(long *)((long)plVar3 + -0xc0) + 0x7540,&UNK_10f58b659,0x2c);
                FUN_1092b4db8();
                __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
                FUN_1092b4db8();
                puVar14 = (undefined *)(ulong)*(uint *)(*plVar8 + lVar49);
                __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
                plVar15 = (long *)((long)plVar3 + -200);
                FUN_1099ab3b0(plVar15);
              }
              iVar6 = -1;
              *(undefined4 *)param_5 = 0xffffffff;
              lVar48 = *(long *)(puVar56 + 4);
              piVar20 = *(int **)unaff_x25;
            }
            unaff_x26 = unaff_x26 + 1;
            unaff_x21 = unaff_x21 + 1;
          } while (unaff_x26 < (ulong)(lVar48 - (long)piVar20 >> 3));
        }
        puVar50 = *(uint **)((long)plVar3 + -0xe0);
        uVar55 = *puVar50;
        unaff_x23 = plVar8;
        if ((uVar55 == 0xffffffff) && (*(int *)pplVar16 == -1)) {
          unaff_x24 = lVar53 + 1;
          bVar5 = false;
          bVar4 = false;
          if (*(int *)param_5 != -1) {
            bVar4 = SBORROW4((int)unaff_x24,(int)*(undefined8 *)((long)plVar3 + -0xd8));
            bVar5 = (int)unaff_x24 - (int)*(undefined8 *)((long)plVar3 + -0xd8) < 0;
          }
          if (bVar5 == bVar4) goto LAB_109933830;
        }
        else {
          unaff_x24 = lVar53 + 1;
          if ((int)*(undefined8 *)((long)plVar3 + -0xd8) <= (int)(lVar53 + 1)) break;
        }
        lVar53 = lVar53 + 1;
        puVar56 = (uint *)(plVar8[3] + lVar53 * 0x20);
        unaff_x25 = puVar56 + 2;
        piVar20 = *(int **)unaff_x25;
        unaff_x24 = lVar53;
      } while (*piVar20 < *(int *)((long)plVar3 + -0xe4));
    }
  }
  *(uint *)((long)plVar3 + -200) = uVar55;
  *(undefined4 *)((long)plVar3 + -100) = 0;
  plVar8 = unaff_x23;
  if (uVar55 != 0) {
LAB_109933830:
    iVar6 = *(int *)pplVar16;
    *(int *)((long)plVar3 + -200) = iVar6;
    *(undefined4 *)((long)plVar3 + -0xd0) = 0;
    if (iVar6 == 0) {
      puVar26 = (undefined1 *)((long)plVar3 + -200);
      puVar14 = (undefined *)((long)plVar3 + -0xd0);
      FUN_109904144(puVar26,puVar14,&UNK_10f58b6b7);
      *(undefined1 **)((long)plVar3 + -0xd0) = puVar26;
      plVar15 = (long *)0x0;
      if (puVar26 != (undefined1 *)0x0) {
        FUN_1099aa6cc((undefined1 *)((long)plVar3 + -200),&UNK_10f58b55a,0x71,
                      (undefined1 *)((long)plVar3 + -0xd0));
        pdVar45 = (double *)&UNK_10f58b6ca;
        FUN_109365950(*(long *)((long)plVar3 + -0xc0) + 0x7540);
        unaff_x23 = plVar8;
        goto LAB_1099339f4;
      }
    }
    if (piRam000000011373cb80 == (int *)0x0) {
      plVar15 = (long *)0x11373cb80;
      puVar14 = (undefined *)0x11382bb14;
      FUN_1099adbb8(0x11373cb80,0x11382bb14,&UNK_10f58b55a,1);
      if (((ulong)plVar15 & 1) == 0) goto LAB_109933930;
    }
    else if (*piRam000000011373cb80 < 1) goto LAB_109933930;
    *(undefined8 *)((long)plVar3 + -200) = 0;
    *(undefined8 *)((long)plVar3 + -0x70) = 0;
    *(undefined8 *)((long)plVar3 + -0xb0) = 0;
    *(undefined8 *)((long)plVar3 + -0xb8) = 0;
    *(undefined8 *)((long)plVar3 + -0xa0) = 0;
    *(undefined8 *)((long)plVar3 + -0xa8) = 0;
    *(undefined8 *)((long)plVar3 + -0x90) = 0;
    *(undefined8 *)((long)plVar3 + -0x98) = 0;
    *(undefined8 *)((long)plVar3 + -0x80) = 0;
    *(undefined8 *)((long)plVar3 + -0x88) = 0;
    *(undefined4 *)((long)plVar3 + -0x78) = 0;
    FUN_1099a9f0c((undefined1 *)((long)plVar3 + -200),&UNK_10f58b55a,0x73,0,FUN_1099aa768,0);
    FUN_1092b4db8(*(long *)((long)plVar3 + -0xc0) + 0x7540,&UNK_10f58b6e1,0x23);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    puVar14 = &UNK_10f58b705;
    FUN_1092b4db8();
    plVar15 = (long *)((long)plVar3 + -200);
    FUN_1099ab3b0(plVar15);
LAB_109933930:
    auVar67._8_8_ = puVar14;
    auVar67._0_8_ = plVar15;
    return auVar67;
  }
  puVar26 = (undefined1 *)((long)plVar3 + -200);
  puVar14 = (undefined *)((long)plVar3 + -100);
  FUN_109904144(puVar26,puVar14,&UNK_10f58b694);
  *(undefined1 **)((long)plVar3 + -0xd0) = puVar26;
  plVar15 = (long *)0x0;
  if (puVar26 == (undefined1 *)0x0) goto LAB_109933830;
  FUN_1099aa6cc((undefined1 *)((long)plVar3 + -200),&UNK_10f58b55a,0x70,
                (undefined1 *)((long)plVar3 + -0xd0));
  pdVar45 = (double *)&UNK_10f58b6a9;
  FUN_109365950(*(long *)((long)plVar3 + -0xc0) + 0x7540);
LAB_1099339f4:
  puVar51 = (undefined8 *)((long)plVar3 + -200);
  func_0x0001099ab7c0();
  FUN_1099ab3b0((undefined1 *)((long)plVar3 + -200));
  puVar46 = puVar51;
  __Unwind_Resume();
  *(long ***)((long)plVar3 + -0x120) = pplVar16;
  *(long **)((long)plVar3 + -0x118) = unaff_x21;
  *(uint **)((long)plVar3 + -0x110) = puVar50;
  *(undefined8 **)((long)plVar3 + -0x108) = puVar51;
  *(undefined1 **)((long)plVar3 + -0x100) = (undefined1 *)((long)plVar3 + -0x10);
  *(code **)((long)plVar3 + -0xf8) = FUN_109933a1c;
  *puVar46 = &PTR_DAT_110b1dd70;
  dVar21 = pdVar45[1];
  puVar46[1] = dVar21;
  dVar57 = pdVar45[2];
  puVar46[3] = pdVar45[3];
  puVar46[2] = dVar57;
  dVar57 = pdVar45[4];
  pdVar22 = (double *)(puVar46 + 4);
  *pdVar22 = dVar57;
  dVar59 = pdVar45[5];
  pdVar35 = (double *)(puVar46 + 5);
  *pdVar35 = dVar59;
  puVar46[7] = 0x3e45798ee2308c3a;
  puVar46[6] = 0x3e45798ee2308c3a;
  puVar46[9] = 0x4024000000000000;
  puVar46[8] = 0x3ff0000000000000;
  puVar46[0x15] = 0;
  *(undefined1 *)(puVar46 + 0x16) = 0;
  puVar46[0xb] = 0x3fd0000000000000;
  puVar46[10] = 0x3fe8000000000000;
  puVar46[0xd] = 0;
  puVar46[0xc] = 0;
  puVar46[0xf] = 0;
  puVar46[0xe] = 0;
  puVar46[0x11] = 0;
  puVar46[0x10] = 0;
  puVar46[0x13] = 0;
  puVar46[0x12] = 0;
  *(undefined4 *)((long)puVar46 + 0xb4) = *(undefined4 *)(pdVar45 + 6);
  puVar46[0x19] = 0;
  puVar46[0x1a] = 0;
  puVar46[0x18] = 0;
  if (dVar21 == 0.0) {
    *(undefined8 *)((long)plVar3 + -0x180) = 0;
    *(undefined8 *)((long)plVar3 + -0x128) = 0;
    *(undefined8 *)((long)plVar3 + -0x168) = 0;
    *(undefined8 *)((long)plVar3 + -0x170) = 0;
    *(undefined8 *)((long)plVar3 + -0x158) = 0;
    *(undefined8 *)((long)plVar3 + -0x160) = 0;
    *(undefined8 *)((long)plVar3 + -0x148) = 0;
    *(undefined8 *)((long)plVar3 + -0x150) = 0;
    *(undefined8 *)((long)plVar3 + -0x138) = 0;
    *(undefined8 *)((long)plVar3 + -0x140) = 0;
    *(undefined4 *)((long)plVar3 + -0x130) = 0;
    pcVar2 = FUN_1099aa768;
    puVar26 = (undefined1 *)0x3;
    FUN_1099a9f0c((undefined1 *)((long)plVar3 + -0x180),&UNK_10f58b708,0x45,3,FUN_1099aa768,0);
    puVar14 = &UNK_10f58b790;
    plVar15 = (long *)0x28;
    FUN_1092b4db8(*(long *)((long)plVar3 + -0x178) + 0x7540);
  }
  else {
    *(undefined8 *)((long)plVar3 + -0x180) = 0;
    if (dVar57 <= 0.0) {
      pdVar45 = (double *)((long)plVar3 + -0x180);
      pdVar18 = pdVar22;
      FUN_10991e5b0(pdVar22,pdVar45,&UNK_10f58b7b9);
      *(double **)((long)plVar3 + -0x188) = pdVar18;
      if (pdVar18 != (double *)0x0) {
        puVar14 = &UNK_10f58b708;
        puVar26 = (undefined1 *)((long)plVar3 + -0x188);
        plVar15 = (long *)0x46;
        FUN_1099ab8e4((undefined1 *)((long)plVar3 + -0x180));
        goto LAB_109933c1c;
      }
      dVar57 = *pdVar22;
      dVar59 = *pdVar35;
    }
    if (dVar59 < dVar57) {
      pdVar45 = pdVar35;
      FUN_10991e5b0(pdVar22,pdVar35,&UNK_10f58b7cd);
      *(double **)((long)plVar3 + -0x188) = pdVar22;
      if (pdVar22 != (double *)0x0) {
        puVar14 = &UNK_10f58b708;
        puVar26 = (undefined1 *)((long)plVar3 + -0x188);
        plVar15 = (long *)0x47;
        FUN_1099ab8e4((undefined1 *)((long)plVar3 + -0x180));
        goto LAB_109933c1c;
      }
    }
    *(undefined8 *)((long)plVar3 + -0x180) = 0;
    if (0.0 < (double)puVar46[3]) {
LAB_109933ae0:
      auVar68._8_8_ = pdVar45;
      auVar68._0_8_ = puVar46;
      return auVar68;
    }
    puVar51 = puVar46 + 3;
    pdVar45 = (double *)((long)plVar3 + -0x180);
    FUN_10991e5b0(puVar51,pdVar45,&UNK_10f58b7ec);
    *(undefined8 **)((long)plVar3 + -0x188) = puVar51;
    if (puVar51 == (undefined8 *)0x0) goto LAB_109933ae0;
    puVar14 = &UNK_10f58b708;
    puVar26 = (undefined1 *)((long)plVar3 + -0x188);
    plVar15 = (long *)0x48;
    FUN_1099ab8e4((undefined1 *)((long)plVar3 + -0x180));
  }
LAB_109933c1c:
  puVar9 = (undefined1 *)((long)plVar3 + -0x180);
  func_0x0001099ab7c0();
  _free(puVar46[0x18]);
  _free(puVar46[0x12]);
  _free(puVar46[0x10]);
  _free(puVar46[0xe]);
  _free(puVar46[0xc]);
  puVar10 = puVar9;
  __Unwind_Resume();
  *(undefined8 *)((long)plVar3 + -0x200) = unaff_d9;
  *(undefined8 *)((long)plVar3 + -0x1f8) = unaff_d8;
  *(uint **)((long)plVar3 + -0x1f0) = puVar56;
  *(undefined1 **)((long)plVar3 + -0x1e8) = unaff_x27;
  *(ulong *)((long)plVar3 + -0x1e0) = unaff_x26;
  *(uint **)((long)plVar3 + -0x1d8) = unaff_x25;
  *(long *)((long)plVar3 + -0x1d0) = unaff_x24;
  *(long **)((long)plVar3 + -0x1c8) = unaff_x23;
  *(long ***)((long)plVar3 + -0x1c0) = pplVar16;
  *(double **)((long)plVar3 + -0x1b8) = pdVar35;
  *(undefined1 **)((long)plVar3 + -0x1b0) = puVar9;
  *(undefined8 **)((long)plVar3 + -0x1a8) = puVar46;
  *(undefined1 **)((long)plVar3 + -0x1a0) = (undefined1 *)((long)plVar3 + -0x100);
  *(code **)((long)plVar3 + -0x198) = FUN_109933c58;
  *(undefined8 *)((long)plVar3 + -0x210) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (plVar15 == (long *)0x0) {
    *(undefined8 *)((long)plVar3 + -0x428) = 0;
    *(undefined8 *)((long)plVar3 + -0x3d0) = 0;
    *(undefined8 *)((long)plVar3 + -0x410) = 0;
    *(undefined8 *)((long)plVar3 + -0x418) = 0;
    *(undefined8 *)((long)plVar3 + -0x400) = 0;
    *(undefined8 *)((long)plVar3 + -0x408) = 0;
    *(undefined8 *)((long)plVar3 + -0x3f0) = 0;
    *(undefined8 *)((long)plVar3 + -0x3f8) = 0;
    *(undefined8 *)((long)plVar3 + -0x3e0) = 0;
    *(undefined8 *)((long)plVar3 + -1000) = 0;
    *(undefined4 *)((long)plVar3 + -0x3d8) = 0;
    FUN_1099a9f0c((undefined1 *)((long)plVar3 + -0x428),&UNK_10f58b708,0x54,3,FUN_1099aa768,0);
    pdVar45 = (double *)&UNK_10f58b7fe;
    FUN_1092b4db8(*(long *)((long)plVar3 + -0x420) + 0x7540,&UNK_10f58b7fe,0x22);
  }
  else if (puVar26 == (undefined1 *)0x0) {
    *(undefined8 *)((long)plVar3 + -0x428) = 0;
    *(undefined8 *)((long)plVar3 + -0x3d0) = 0;
    *(undefined8 *)((long)plVar3 + -0x410) = 0;
    *(undefined8 *)((long)plVar3 + -0x418) = 0;
    *(undefined8 *)((long)plVar3 + -0x400) = 0;
    *(undefined8 *)((long)plVar3 + -0x408) = 0;
    *(undefined8 *)((long)plVar3 + -0x3f0) = 0;
    *(undefined8 *)((long)plVar3 + -0x3f8) = 0;
    *(undefined8 *)((long)plVar3 + -0x3e0) = 0;
    *(undefined8 *)((long)plVar3 + -1000) = 0;
    *(undefined4 *)((long)plVar3 + -0x3d8) = 0;
    FUN_1099a9f0c((undefined1 *)((long)plVar3 + -0x428),&UNK_10f58b708,0x55,3,FUN_1099aa768,0);
    pdVar45 = (double *)&UNK_10f58febc;
    FUN_1092b4db8(*(long *)((long)plVar3 + -0x420) + 0x7540,&UNK_10f58febc,0x23);
  }
  else {
    if ((long **)pcVar2 != (long **)0x0) {
      plVar39 = plVar15;
      (**(code **)(*plVar15 + 0x28))();
      if (puVar10[0xb0] == '\x01') {
        if (*(int *)(puVar10 + 0xb4) == 1) {
          FUN_109936ecc(puVar10,pcVar2);
        }
        else if (*(int *)(puVar10 + 0xb4) == 0) {
          FUN_109936460(puVar10,pcVar2);
        }
        uVar19 = 0;
        uVar27 = 0;
        uVar54 = 0xbff0000000000000;
      }
      else {
        puVar10[0xb0] = 1;
        uVar54 = *(undefined8 *)(puVar10 + 0x60);
        iVar6 = (int)plVar39;
        if (*(long *)(puVar10 + 0x68) == (long)iVar6) {
LAB_109933dbc:
          (**(code **)(*plVar15 + 0x30))(plVar15,uVar54);
          pdVar45 = *(double **)(puVar10 + 0x60);
          if (0 < iVar6) {
            uVar19 = (ulong)plVar39 & 0xffffffff;
            pdVar22 = pdVar45;
            do {
              dVar21 = *(double *)(puVar10 + 0x20);
              if (*(double *)(puVar10 + 0x20) <= *pdVar22) {
                dVar21 = *pdVar22;
              }
              dVar57 = *(double *)(puVar10 + 0x28);
              if (dVar21 <= *(double *)(puVar10 + 0x28)) {
                dVar57 = dVar21;
              }
              *pdVar22 = dVar57;
              uVar19 = uVar19 - 1;
              pdVar22 = pdVar22 + 1;
            } while (uVar19 != 0);
          }
          lVar53 = *(long *)(puVar10 + 0x68);
          uVar19 = lVar53 - (lVar53 >> 0x3f) & 0xfffffffffffffffe;
          if (1 < lVar53) {
            lVar48 = 0;
            pdVar22 = pdVar45;
            do {
              pdVar22[1] = SQRT(pdVar22[1]);
              *pdVar22 = SQRT(*pdVar22);
              lVar48 = lVar48 + 2;
              pdVar22 = pdVar22 + 2;
            } while (lVar48 < (long)uVar19);
          }
          lVar48 = lVar53 % 2;
          if (lVar48 != 0 && lVar48 < 0 == SBORROW8(lVar53,uVar19)) {
            pdVar45 = pdVar45 + (lVar53 / 2) * 2;
            do {
              *pdVar45 = SQRT(*pdVar45);
              lVar48 = lVar48 + -1;
              pdVar45 = pdVar45 + 1;
            } while (lVar48 != 0);
          }
          uVar54 = *(undefined8 *)(puVar10 + 0x80);
          if (0 < *(long *)(puVar10 + 0x88)) {
            _bzero(uVar54,*(long *)(puVar10 + 0x88) << 3);
          }
          (**(code **)(*plVar15 + 0x18))(plVar15,puVar26,uVar54);
          pdVar22 = *(double **)(puVar10 + 0x60);
          pdVar45 = *(double **)(puVar10 + 0x80);
          lVar53 = *(long *)(puVar10 + 0x88);
          uVar19 = lVar53 - (lVar53 >> 0x3f) & 0xfffffffffffffffe;
          if (1 < lVar53) {
            lVar48 = 0;
            pdVar35 = pdVar45;
            pdVar18 = pdVar22;
            do {
              dVar21 = *pdVar18;
              pdVar35[1] = pdVar35[1] / pdVar18[1];
              *pdVar35 = *pdVar35 / dVar21;
              lVar48 = lVar48 + 2;
              pdVar35 = pdVar35 + 2;
              pdVar18 = pdVar18 + 2;
            } while (lVar48 < (long)uVar19);
          }
          lVar48 = lVar53 % 2;
          if (lVar48 != 0 && (long)uVar19 <= lVar53) {
            pdVar45 = pdVar45 + (lVar53 / 2) * 2;
            pdVar22 = pdVar22 + (lVar53 / 2) * 2;
            do {
              *pdVar45 = *pdVar45 / *pdVar22;
              lVar48 = lVar48 + -1;
              pdVar45 = pdVar45 + 1;
              pdVar22 = pdVar22 + 1;
            } while (lVar48 != 0);
          }
          plVar39 = plVar15;
          (**(code **)(*plVar15 + 0x20))();
          lVar53 = (long)(int)plVar39;
          if ((int)plVar39 < 1) goto LAB_109933f48;
          pdVar45 = (double *)0x1;
          _calloc(1,lVar53 << 3);
          if (pdVar45 == (double *)0x0) goto LAB_109933f28;
        }
        else {
          lVar53 = (long)iVar6;
          _free(uVar54);
          if (iVar6 < 1) {
            lVar48 = 0;
LAB_109933d44:
            *(long *)(puVar10 + 0x60) = lVar48;
            *(long *)(puVar10 + 0x68) = lVar53;
            if (*(long *)(puVar10 + 0x88) != lVar53) {
              _free(*(undefined8 *)(puVar10 + 0x80));
              if (iVar6 < 1) {
                lVar48 = 0;
              }
              else {
                lVar48 = lVar53 << 3;
                _malloc();
                if (lVar48 == 0) goto LAB_109933f28;
              }
              *(long *)(puVar10 + 0x80) = lVar48;
            }
            *(long *)(puVar10 + 0x88) = lVar53;
            if (*(long *)(puVar10 + 0x98) != lVar53) {
              _free(*(undefined8 *)(puVar10 + 0x90));
              if (iVar6 < 1) {
                lVar48 = 0;
              }
              else {
                lVar48 = lVar53 << 3;
                _malloc();
                if (lVar48 == 0) goto LAB_109933f28;
              }
              *(long *)(puVar10 + 0x90) = lVar48;
            }
            *(long *)(puVar10 + 0x98) = lVar53;
            uVar54 = *(undefined8 *)(puVar10 + 0x60);
            goto LAB_109933dbc;
          }
          lVar48 = lVar53 << 3;
          _malloc();
          if (lVar48 != 0) goto LAB_109933d44;
LAB_109933f28:
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
LAB_109933f48:
          pdVar45 = (double *)0x0;
        }
        uVar19 = *(ulong *)(puVar10 + 0x68);
        if ((long)uVar19 < 1) {
          lVar48 = 0;
          lVar49 = *(long *)(puVar10 + 0x80);
          lVar28 = *(long *)(puVar10 + 0x60);
          uVar27 = -(-uVar19 & 0xfffffffffffffffe);
        }
        else {
          if (uVar19 >> 0x3d != 0) goto LAB_109935f58;
          lVar48 = uVar19 << 3;
          _malloc();
          if (lVar48 == 0) goto LAB_109935f58;
          lVar49 = *(long *)(puVar10 + 0x80);
          lVar28 = *(long *)(puVar10 + 0x60);
          if (uVar19 == 1) {
            uVar27 = 0;
          }
          else {
            lVar11 = 0;
            uVar24 = 0;
            uVar27 = uVar19 & 0x1ffffffffffffffe;
            do {
              dVar21 = *(double *)(lVar49 + lVar11);
              dVar57 = *(double *)(lVar28 + lVar11);
              ((double *)(lVar48 + lVar11))[1] =
                   ((double *)(lVar49 + lVar11))[1] / ((double *)(lVar28 + lVar11))[1];
              *(double *)(lVar48 + lVar11) = dVar21 / dVar57;
              uVar24 = uVar24 + 2;
              lVar11 = lVar11 + 0x10;
            } while (uVar24 < uVar27);
          }
        }
        lVar11 = uVar19 - uVar27;
        if (lVar11 != 0 && (long)uVar27 <= (long)uVar19) {
          pdVar22 = (double *)(lVar49 + uVar27 * 8);
          pdVar35 = (double *)(lVar28 + uVar27 * 8);
          pdVar18 = (double *)(lVar48 + uVar27 * 8);
          do {
            *pdVar18 = *pdVar22 / *pdVar35;
            lVar11 = lVar11 + -1;
            pdVar22 = pdVar22 + 1;
            pdVar35 = pdVar35 + 1;
            pdVar18 = pdVar18 + 1;
          } while (lVar11 != 0);
        }
        (**(code **)(*plVar15 + 0x10))(plVar15,lVar48,pdVar45);
        uVar19 = *(ulong *)(puVar10 + 0x88);
        dVar57 = 0.0;
        dVar21 = 0.0;
        if (uVar19 != 0) {
          pdVar22 = *(double **)(puVar10 + 0x80);
          uVar27 = uVar19 + 3;
          if (-1 < (long)uVar19) {
            uVar27 = uVar19;
          }
          if (uVar19 + 1 < 3) {
            dVar21 = *pdVar22 * *pdVar22;
          }
          else {
            uVar24 = uVar19 - ((long)uVar19 >> 0x3f) & 0xfffffffffffffffe;
            dVar21 = *pdVar22 * *pdVar22;
            dVar59 = pdVar22[1] * pdVar22[1];
            if (3 < (long)uVar19) {
              uVar27 = uVar27 & 0xfffffffffffffffc;
              dVar60 = pdVar22[2] * pdVar22[2];
              dVar63 = pdVar22[3] * pdVar22[3];
              if (7 < uVar19) {
                pdVar35 = pdVar22 + 6;
                lVar49 = 4;
                do {
                  dVar21 = dVar21 + pdVar35[-2] * pdVar35[-2];
                  dVar59 = dVar59 + pdVar35[-1] * pdVar35[-1];
                  dVar60 = dVar60 + *pdVar35 * *pdVar35;
                  dVar63 = dVar63 + pdVar35[1] * pdVar35[1];
                  lVar49 = lVar49 + 4;
                  pdVar35 = pdVar35 + 4;
                } while (lVar49 < (long)uVar27);
              }
              dVar21 = dVar60 + dVar21;
              dVar59 = dVar63 + dVar59;
              if ((long)uVar27 < (long)uVar24) {
                dVar63 = (pdVar22 + uVar27)[1];
                dVar60 = pdVar22[uVar27];
                dVar21 = dVar21 + dVar60 * dVar60;
                dVar59 = dVar59 + dVar63 * dVar63;
              }
            }
            dVar21 = dVar21 + dVar59;
            lVar49 = (long)uVar19 % 2;
            if (lVar49 != 0 && lVar49 < 0 == SBORROW8(uVar19,uVar24)) {
              pdVar22 = pdVar22 + ((long)uVar19 / 2) * 2;
              do {
                dVar21 = dVar21 + *pdVar22 * *pdVar22;
                lVar49 = lVar49 + -1;
                pdVar22 = pdVar22 + 1;
              } while (lVar49 != 0);
            }
          }
        }
        uVar55 = (uint)lVar53;
        if (uVar55 != 0) {
          uVar52 = uVar55 + 3;
          if (-1 < (int)uVar55) {
            uVar52 = uVar55;
          }
          if (lVar53 + 1U < 3) {
            dVar57 = *pdVar45 * *pdVar45;
          }
          else {
            uVar19 = -(ulong)((uint)((int)uVar55 / 2) >> 0x1f) & 0xfffffffe00000000 |
                     (ulong)(uint)((int)uVar55 / 2) << 1;
            dVar57 = *pdVar45 * *pdVar45;
            dVar59 = pdVar45[1] * pdVar45[1];
            if (3 < (int)uVar55) {
              uVar27 = -(ulong)((uint)((int)uVar52 >> 2) >> 0x1f) & 0xfffffffc00000000 |
                       (ulong)(uint)((int)uVar52 >> 2) << 2;
              dVar60 = pdVar45[2] * pdVar45[2];
              dVar63 = pdVar45[3] * pdVar45[3];
              if (7 < uVar55) {
                pdVar22 = pdVar45 + 6;
                lVar49 = 4;
                do {
                  dVar57 = dVar57 + pdVar22[-2] * pdVar22[-2];
                  dVar59 = dVar59 + pdVar22[-1] * pdVar22[-1];
                  dVar60 = dVar60 + *pdVar22 * *pdVar22;
                  dVar63 = dVar63 + pdVar22[1] * pdVar22[1];
                  lVar49 = lVar49 + 4;
                  pdVar22 = pdVar22 + 4;
                } while (lVar49 < (long)uVar27);
              }
              dVar57 = dVar60 + dVar57;
              dVar59 = dVar63 + dVar59;
              if ((long)uVar27 < (long)uVar19) {
                dVar63 = (pdVar45 + uVar27)[1];
                dVar60 = pdVar45[uVar27];
                dVar57 = dVar57 + dVar60 * dVar60;
                dVar59 = dVar59 + dVar63 * dVar63;
              }
            }
            dVar57 = dVar57 + dVar59;
            lVar49 = lVar53 - uVar19;
            if (lVar49 != 0 && (long)uVar19 <= lVar53) {
              pdVar22 = pdVar45 + ((long)((ulong)(uVar55 - ((int)uVar55 >> 0x1f)) << 0x20) >> 0x21)
                                  * 2;
              do {
                dVar57 = dVar57 + *pdVar22 * *pdVar22;
                lVar49 = lVar49 + -1;
                pdVar22 = pdVar22 + 1;
              } while (lVar49 != 0);
            }
          }
        }
        *(double *)(puVar10 + 0xa0) = dVar21 / dVar57;
        _free(lVar48);
        _free(pdVar45);
        plVar39 = plVar15;
        (**(code **)(*plVar15 + 0x28))();
        dVar21 = *(double *)(puVar10 + 0x30);
        if (dVar21 < *(double *)(puVar10 + 0x40)) {
          uVar55 = 0;
          *(undefined **)((long)plVar3 + -0x450) = puVar14 + 0x10;
          *(undefined8 *)((long)plVar3 + -0x448) = 0;
          *(code **)((long)plVar3 + -0x470) = pcVar2;
          *(ulong *)((long)plVar3 + -0x468) = (ulong)plVar39 & 0xffffffff;
          *(ulong *)((long)plVar3 + -0x460) = ((ulong)plVar39 & 0xffffffff) << 3;
LAB_10993421c:
          *(undefined8 *)((long)plVar3 + -0x2c8) = 0;
          *(undefined8 *)((long)plVar3 + -0x2d0) = 0;
          *(undefined8 *)((long)plVar3 + -0x2b8) = 0;
          *(undefined8 *)((long)plVar3 + -0x2c0) = 0;
          pdVar45 = *(double **)(puVar10 + 0x60);
          uVar19 = *(ulong *)(puVar10 + 0x68);
          pdVar22 = *(double **)(puVar10 + 0x70);
          if (*(ulong *)(puVar10 + 0x78) != uVar19) {
            _free();
            if (0 < (long)uVar19) {
              if (uVar19 >> 0x3d == 0) {
                pdVar22 = (double *)(uVar19 << 3);
                _malloc();
                if (pdVar22 != (double *)0x0) goto LAB_109934260;
              }
              ___cxa_allocate_exception(8);
              __ZNSt9bad_allocC1Ev();
              ___cxa_throw();
              goto LAB_109936200;
            }
            pdVar22 = (double *)0x0;
LAB_109934260:
            *(double **)(puVar10 + 0x70) = pdVar22;
            *(ulong *)(puVar10 + 0x78) = uVar19;
          }
          uVar27 = uVar19 - ((long)uVar19 >> 0x3f) & 0xfffffffffffffffe;
          dVar21 = SQRT(dVar21);
          if (1 < (long)uVar19) {
            lVar53 = 0;
            pdVar35 = pdVar22;
            pdVar18 = pdVar45;
            do {
              dVar57 = *pdVar18;
              pdVar35[1] = pdVar18[1] * dVar21;
              *pdVar35 = dVar57 * dVar21;
              lVar53 = lVar53 + 2;
              pdVar35 = pdVar35 + 2;
              pdVar18 = pdVar18 + 2;
            } while (lVar53 < (long)uVar27);
          }
          lVar53 = (long)uVar19 % 2;
          if (lVar53 != 0 && (long)uVar27 <= (long)uVar19) {
            pdVar45 = pdVar45 + ((long)uVar19 / 2) * 2;
            pdVar22 = pdVar22 + ((long)uVar19 / 2) * 2;
            do {
              *pdVar22 = dVar21 * *pdVar45;
              lVar53 = lVar53 + -1;
              pdVar45 = pdVar45 + 1;
              pdVar22 = pdVar22 + 1;
            } while (lVar53 != 0);
          }
          *(undefined8 *)((long)plVar3 + -0x2d0) = *(undefined8 *)(puVar10 + 0x70);
          lVar53 = *(long *)(puVar10 + 0x90);
          if ((0 < (int)plVar39) && (lVar53 != 0)) {
            _memset_pattern16(lVar53,&UNK_10e00cee0,*(undefined8 *)((long)plVar3 + -0x460));
          }
          (**(code **)(**(long **)(puVar10 + 8) + 0x10))
                    ((undefined1 *)((long)plVar3 + -0x428),*(long **)(puVar10 + 8),plVar15,puVar26,
                     (undefined1 *)((long)plVar3 + -0x2d0),lVar53);
          uVar54 = *(undefined8 *)((long)plVar3 + -0x428);
          *(undefined4 *)((long)plVar3 + -0x454) = *(undefined4 *)((long)plVar3 + -0x420);
          uVar52 = *(uint *)((long)plVar3 + -0x41c);
          if ((uVar55 >> 7 & 1) != 0) {
            __ZdlPv(*(undefined8 *)((long)plVar3 + -0x448));
          }
          *(undefined8 *)((long)plVar3 + -0x448) = *(undefined8 *)((long)plVar3 + -0x418);
          uVar55 = (uint)*(char *)((long)plVar3 + -0x401);
          if (*(int *)(puVar14 + 8) == 0) {
LAB_109934360:
            uVar19 = *(ulong *)((long)plVar3 + -0x450);
            FUN_109962f70(uVar19,*(int *)(puVar14 + 8),plVar15,
                          *(undefined8 *)((long)plVar3 + -0x2d0),puVar26,
                          *(undefined8 *)(puVar10 + 0x90),0);
            if ((uVar19 & 1) == 0) {
              *(undefined8 *)((long)plVar3 + -0x428) = 0;
              *(undefined8 *)((long)plVar3 + -0x3d0) = 0;
              *(undefined8 *)((long)plVar3 + -0x410) = 0;
              *(undefined8 *)((long)plVar3 + -0x418) = 0;
              *(undefined8 *)((long)plVar3 + -0x400) = 0;
              *(undefined8 *)((long)plVar3 + -0x408) = 0;
              *(undefined8 *)((long)plVar3 + -0x3f0) = 0;
              *(undefined8 *)((long)plVar3 + -0x3f8) = 0;
              *(undefined8 *)((long)plVar3 + -0x3e0) = 0;
              *(undefined8 *)((long)plVar3 + -1000) = 0;
              *(undefined4 *)((long)plVar3 + -0x3d8) = 0;
              FUN_1099a9f0c((undefined1 *)((long)plVar3 + -0x428),&UNK_10f58b708,0x243,2,
                            FUN_1099aa768,0);
              FUN_1092b4db8(*(long *)((long)plVar3 + -0x420) + 0x7540,&UNK_10f58b9fe,0x24);
              FUN_1092b4db8();
              FUN_1092b4db8();
              FUN_1099ab3b0((undefined1 *)((long)plVar3 + -0x428));
            }
          }
          else {
            uVar19 = *(ulong *)(puVar14 + 0x18);
            if (-1 < (char)puVar14[0x27]) {
              uVar19 = (ulong)(byte)puVar14[0x27];
            }
            if (uVar19 != 0) goto LAB_109934360;
          }
          if (uVar52 == 2) {
LAB_109934460:
            *(double *)(puVar10 + 0x30) = *(double *)(puVar10 + 0x48) * *(double *)(puVar10 + 0x30);
            if (piRam000000011373cba0 == (int *)0x0) {
              iVar6 = 0x1373cba0;
              FUN_1099adbb8(0x11373cba0,0x11382bb14,&UNK_10f58b708,2);
              if (iVar6 != 0) goto LAB_1099344b0;
            }
            else if (1 < *piRam000000011373cba0) {
LAB_1099344b0:
              *(undefined8 *)((long)plVar3 + -0x428) = 0;
              *(undefined8 *)((long)plVar3 + -0x3d0) = 0;
              *(undefined8 *)((long)plVar3 + -0x410) = 0;
              *(undefined8 *)((long)plVar3 + -0x418) = 0;
              *(undefined8 *)((long)plVar3 + -0x400) = 0;
              *(undefined8 *)((long)plVar3 + -0x408) = 0;
              *(undefined8 *)((long)plVar3 + -0x3f0) = 0;
              *(undefined8 *)((long)plVar3 + -0x3f8) = 0;
              *(undefined8 *)((long)plVar3 + -0x3e0) = 0;
              *(undefined8 *)((long)plVar3 + -1000) = 0;
              *(undefined4 *)((long)plVar3 + -0x3d8) = 0;
              FUN_1099a9f0c((undefined1 *)((long)plVar3 + -0x428),&UNK_10f58b708,0x250,0,
                            FUN_1099aa768,0);
              FUN_1092b4db8(*(long *)((long)plVar3 + -0x420) + 0x7540,&UNK_10f58ba34,0xe);
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(*(undefined8 *)(puVar10 + 0x30));
              FUN_1099ab3b0((undefined1 *)((long)plVar3 + -0x428));
            }
            dVar21 = *(double *)(puVar10 + 0x30);
            if (*(double *)(puVar10 + 0x40) <= dVar21) goto LAB_1099349c8;
            goto LAB_10993421c;
          }
          if (uVar52 == 3) {
            uVar52 = 3;
            goto LAB_1099349cc;
          }
          pdVar45 = *(double **)(puVar10 + 0x90);
          if ((0 < (int)plVar39) &&
             (lVar53 = *(long *)((long)plVar3 + -0x468), pdVar22 = pdVar45, pdVar45 != (double *)0x0
             )) {
            while( true ) {
              if ((0x7fefffffffffffff < (ulong)ABS(*pdVar22)) || (*pdVar22 == 1e+302)) break;
              lVar53 = lVar53 + -1;
              pdVar22 = pdVar22 + 1;
              if (lVar53 == 0) goto LAB_10993453c;
            }
            goto LAB_109934460;
          }
LAB_10993453c:
          pdVar22 = *(double **)(puVar10 + 0x60);
          lVar53 = *(long *)(puVar10 + 0x98);
          uVar19 = lVar53 - (lVar53 >> 0x3f) & 0xfffffffffffffffe;
          if (1 < lVar53) {
            lVar48 = 0;
            pdVar35 = pdVar45;
            pdVar18 = pdVar22;
            do {
              dVar21 = *pdVar18;
              pdVar35[1] = pdVar35[1] * -pdVar18[1];
              *pdVar35 = *pdVar35 * -dVar21;
              lVar48 = lVar48 + 2;
              pdVar35 = pdVar35 + 2;
              pdVar18 = pdVar18 + 2;
            } while (lVar48 < (long)uVar19);
          }
          lVar48 = lVar53 % 2;
          if (lVar48 != 0 && lVar48 < 0 == SBORROW8(lVar53,uVar19)) {
            pdVar45 = pdVar45 + (lVar53 / 2) * 2;
            pdVar22 = pdVar22 + (lVar53 / 2) * 2;
            do {
              *pdVar45 = -(*pdVar22 * *pdVar45);
              lVar48 = lVar48 + -1;
              pdVar45 = pdVar45 + 1;
              pdVar22 = pdVar22 + 1;
            } while (lVar48 != 0);
          }
          if ((uVar52 & 0xfffffffe) != 2) {
            if (*(int *)(puVar10 + 0xb4) == 1) {
              plVar39 = plVar15;
              (**(code **)(*plVar15 + 0x28))();
              iVar6 = (int)plVar39;
              lVar53 = (long)iVar6;
              if (iVar6 < 1) {
                if (iVar6 != 0) {
                  *(uint *)((long)plVar3 + -0x524) = uVar55;
                  ___cxa_allocate_exception(8);
                  __ZNSt9bad_allocC1Ev();
                  ___cxa_throw();
                  goto LAB_109936200;
                }
                lVar53 = 0;
                *(undefined8 *)((long)plVar3 + -0x498) = 0;
                *(undefined8 *)((long)plVar3 + -0x428) = 0;
                *(undefined8 *)((long)plVar3 + -0x420) = 0;
                *(undefined1 **)((long)plVar3 + -0x488) = (undefined1 *)((long)plVar3 + -0x410);
                *(undefined8 *)((long)plVar3 + -0x410) = 0;
                *(undefined8 *)((long)plVar3 + -0x418) = 2;
              }
              else {
                puVar46 = (undefined8 *)(lVar53 << 4);
                puVar51 = puVar46;
                _malloc();
                if (puVar51 == (undefined8 *)0x0) {
                  ___cxa_allocate_exception(8);
                  __ZNSt9bad_allocC1Ev();
                  ___cxa_throw();
                  goto LAB_109936200;
                }
                puVar23 = *(undefined8 **)(puVar10 + 0x80);
                puVar29 = puVar51;
                lVar48 = lVar53;
                do {
                  *puVar29 = *puVar23;
                  lVar48 = lVar48 + -1;
                  puVar23 = puVar23 + 1;
                  puVar29 = puVar29 + 2;
                } while (lVar48 != 0);
                lVar48 = 8;
                puVar23 = *(undefined8 **)(puVar10 + 0x90);
                lVar49 = lVar53;
                do {
                  *(undefined8 *)((long)puVar51 + lVar48) = *puVar23;
                  lVar48 = lVar48 + 0x10;
                  lVar49 = lVar49 + -1;
                  puVar23 = puVar23 + 1;
                } while (lVar49 != 0);
                *(undefined8 **)((long)plVar3 + -0x498) = puVar51;
                _malloc();
                if (puVar46 == (undefined8 *)0x0) {
                  *(uint *)((long)plVar3 + -0x524) = uVar55;
                  ___cxa_allocate_exception(8);
                  __ZNSt9bad_allocC1Ev();
                  ___cxa_throw();
                  goto LAB_109936200;
                }
                *(undefined8 **)((long)plVar3 + -0x428) = puVar46;
                *(long *)((long)plVar3 + -0x420) = lVar53;
                *(undefined8 *)((long)plVar3 + -0x418) = 2;
                _memcpy();
                *(undefined8 *)((long)plVar3 + -0x410) = 0;
                *(undefined8 *)((long)plVar3 + -0x408) = 0;
                if (1 < lVar53) {
                  lVar53 = 2;
                }
                lVar48 = lVar53 << 3;
                _malloc();
                if (lVar48 == 0) {
                  *(uint *)((long)plVar3 + -0x524) = uVar55;
                  ___cxa_allocate_exception(8);
                  __ZNSt9bad_allocC1Ev();
                  ___cxa_throw();
                  goto LAB_109936200;
                }
                *(undefined1 **)((long)plVar3 + -0x488) = (undefined1 *)((long)plVar3 + -0x410);
                *(long *)((long)plVar3 + -0x410) = lVar48;
              }
              *(undefined8 *)((long)plVar3 + -0x400) = 0;
              *(undefined8 *)((long)plVar3 + -0x3f8) = 0;
              *(long *)((long)plVar3 + -0x408) = lVar53;
              lVar53 = 8;
              _malloc();
              if (lVar53 == 0) {
                *(uint *)((long)plVar3 + -0x524) = uVar55;
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_109936200;
              }
              *(long *)((long)plVar3 + -0x400) = lVar53;
              *(undefined8 *)((long)plVar3 + -0x3f8) = 2;
              *(undefined8 *)((long)plVar3 + -0x3f0) = 0;
              *(undefined8 *)((long)plVar3 + -1000) = 0;
              lVar53 = 0x10;
              _malloc();
              if (lVar53 == 0) {
                *(uint *)((long)plVar3 + -0x524) = uVar55;
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_109936200;
              }
              *(long *)((long)plVar3 + -0x3f0) = lVar53;
              *(undefined8 *)((long)plVar3 + -1000) = 2;
              *(undefined8 *)((long)plVar3 + -0x3e0) = 0;
              *(undefined8 *)((long)plVar3 + -0x3d8) = 0;
              lVar53 = 0x10;
              _malloc();
              if (lVar53 == 0) {
                *(uint *)((long)plVar3 + -0x524) = uVar55;
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_109936200;
              }
              *(long *)((long)plVar3 + -0x3e0) = lVar53;
              *(undefined8 *)((long)plVar3 + -0x3d8) = 2;
              *(undefined8 *)((long)plVar3 + -0x3d0) = 0;
              *(undefined8 *)((long)plVar3 + -0x3c8) = 0;
              lVar53 = 0x10;
              _malloc();
              if (lVar53 == 0) {
                *(uint *)((long)plVar3 + -0x524) = uVar55;
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_109936200;
              }
              *(long *)((long)plVar3 + -0x3d0) = lVar53;
              *(undefined8 *)((long)plVar3 + -0x3c8) = 2;
              *(undefined8 *)((long)plVar3 + -0x3c0) = 0;
              *(undefined8 *)((long)plVar3 + -0x3b8) = 0;
              lVar53 = 0x10;
              _malloc();
              if (lVar53 == 0) {
                *(uint *)((long)plVar3 + -0x524) = uVar55;
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_109936200;
              }
              *(long *)((long)plVar3 + -0x3c0) = lVar53;
              *(undefined8 *)((long)plVar3 + -0x3b8) = 2;
              *(undefined2 *)((long)plVar3 + -0x3b0) = 0;
              FUN_10990e27c((undefined1 *)((long)plVar3 + -0x428));
              if (*(char *)((long)plVar3 + -0x3af) == '\x01') {
                dVar21 = *(double *)((long)plVar3 + -0x3a8);
              }
              else {
                lVar53 = *(long *)((long)plVar3 + -0x418);
                if (*(long *)((long)plVar3 + -0x420) <= *(long *)((long)plVar3 + -0x418)) {
                  lVar53 = *(long *)((long)plVar3 + -0x420);
                }
                dVar21 = (double)lVar53 / 4503599627370496.0;
              }
              lVar53 = *(long *)((long)plVar3 + -0x398);
              if (lVar53 < 1) {
LAB_109934848:
                *(undefined8 *)((long)plVar3 + -0x2d0) = 0;
                *(undefined8 *)((long)plVar3 + -0x278) = 0;
                *(undefined8 *)((long)plVar3 + -0x2b8) = 0;
                *(undefined8 *)((long)plVar3 + -0x2c0) = 0;
                *(undefined8 *)((long)plVar3 + -0x2a8) = 0;
                *(undefined8 *)((long)plVar3 + -0x2b0) = 0;
                *(undefined8 *)((long)plVar3 + -0x298) = 0;
                *(undefined8 *)((long)plVar3 + -0x2a0) = 0;
                *(undefined8 *)((long)plVar3 + -0x288) = 0;
                *(undefined8 *)((long)plVar3 + -0x290) = 0;
                *(undefined4 *)((long)plVar3 + -0x280) = 0;
                FUN_1099a9f0c((undefined1 *)((long)plVar3 + -0x2d0),&UNK_10f58b708,0x28e,2,
                              FUN_1099aa768,0);
                FUN_1092b4db8(*(long *)((long)plVar3 + -0x2c8) + 0x7540,&UNK_10f58ba56,0x1d);
                FUN_1092b4db8();
                FUN_1092b4db8();
                FUN_1092b4db8();
LAB_109934968:
                FUN_1099ab3b0((undefined1 *)((long)plVar3 + -0x2d0));
                bVar5 = false;
              }
              else {
                lVar48 = 0;
                pdVar45 = *(double **)((long)plVar3 + -0x428);
                uVar19 = *(ulong *)((long)plVar3 + -0x418);
                do {
                  if (ABS(*(double *)((long)plVar3 + -0x3a0)) * dVar21 < ABS(*pdVar45)) {
                    lVar48 = lVar48 + 1;
                  }
                  pdVar45 = pdVar45 + uVar19 + 1;
                  lVar53 = lVar53 + -1;
                } while (lVar53 != 0);
                if (lVar48 == 0) goto LAB_109934848;
                if (lVar48 != 1) {
                  if (lVar48 != 2) {
                    *(undefined8 *)((long)plVar3 + -0x2d0) = 0;
                    *(undefined8 *)((long)plVar3 + -0x278) = 0;
                    *(undefined8 *)((long)plVar3 + -0x2b8) = 0;
                    *(undefined8 *)((long)plVar3 + -0x2c0) = 0;
                    *(undefined8 *)((long)plVar3 + -0x2a8) = 0;
                    *(undefined8 *)((long)plVar3 + -0x2b0) = 0;
                    *(undefined8 *)((long)plVar3 + -0x298) = 0;
                    *(undefined8 *)((long)plVar3 + -0x2a0) = 0;
                    *(undefined8 *)((long)plVar3 + -0x288) = 0;
                    *(undefined8 *)((long)plVar3 + -0x290) = 0;
                    *(undefined4 *)((long)plVar3 + -0x280) = 0;
                    FUN_1099a9f0c((undefined1 *)((long)plVar3 + -0x2d0),&UNK_10f58b708,0x2a0,2,
                                  FUN_1099aa768,0);
                    FUN_1092b4db8(*(long *)((long)plVar3 + -0x2c8) + 0x7540,&UNK_10f58bb03,0x34);
                    FUN_1092b4db8();
                    FUN_1092b4db8();
                    FUN_1092b4db8();
                    goto LAB_109934968;
                  }
                  puVar10[0xb8] = 0;
                  if ((long)*(ulong *)((long)plVar3 + -0x420) <= (long)uVar19) {
                    uVar19 = *(ulong *)((long)plVar3 + -0x420);
                  }
                  pcVar2 = *(code **)(*plVar15 + 0x28);
                  *(uint *)((long)plVar3 + -0x524) = uVar55;
                  plVar39 = plVar15;
                  (*pcVar2)();
                  iVar6 = (int)plVar39;
                  lVar53 = (long)iVar6;
                  *(undefined8 *)((long)plVar3 + -0x440) = 0;
                  *(undefined8 *)((long)plVar3 + -0x438) = 0;
                  *(undefined8 *)((long)plVar3 + -0x430) = 0;
                  *(long **)((long)plVar3 + -0x490) = plVar39;
                  if (iVar6 == 0) {
                    lVar48 = 0;
                  }
                  else {
                    if (iVar6 < 1) {
                      lVar48 = 0;
                    }
                    else {
                      lVar48 = lVar53 << 4;
                      _malloc();
                      plVar39 = *(long **)((long)plVar3 + -0x490);
                      if (lVar48 == 0) {
                        ___cxa_allocate_exception(8);
                        __ZNSt9bad_allocC1Ev();
                        ___cxa_throw();
                        goto LAB_109936200;
                      }
                    }
                    *(long *)((long)plVar3 + -0x440) = lVar48;
                  }
                  lVar49 = 0;
                  *(long *)((long)plVar3 + -0x438) = lVar53;
                  *(undefined8 *)((long)plVar3 + -0x430) = 2;
                  bVar5 = false;
                  do {
                    if (0 < (int)plVar39) {
                      puVar51 = (undefined8 *)(lVar48 + lVar49 * lVar53 * 8);
                      lVar28 = lVar53;
                      do {
                        uVar62 = 0x3ff0000000000000;
                        if (lVar49 != 0) {
                          uVar62 = 0;
                        }
                        *puVar51 = uVar62;
                        lVar49 = lVar49 + -1;
                        lVar28 = lVar28 + -1;
                        puVar51 = puVar51 + 1;
                      } while (lVar28 != 0);
                    }
                    lVar49 = 1;
                    bVar4 = !bVar5;
                    bVar5 = true;
                  } while (bVar4);
                  *(undefined8 *)((long)plVar3 + -0x530) = uVar54;
                  *(ulong *)((long)plVar3 + -0x480) = uVar19;
                  if ((long)uVar19 < 0x30) {
                    pdVar45 = (double *)0x10;
                    _malloc();
                    if (pdVar45 == (double *)0x0) {
                      ___cxa_allocate_exception(8);
                      __ZNSt9bad_allocC1Ev();
                      ___cxa_throw();
                      goto LAB_109936200;
                    }
                    uVar54 = *(undefined8 *)((long)plVar3 + -0x490);
                    if (0 < (long)uVar19) {
                      uVar27 = 0;
                      *(ulong *)((long)plVar3 + -0x500) = (ulong)pdVar45 >> 3 & 1;
                      *(ulong *)((long)plVar3 + -0x4f8) = (ulong)pdVar45 & 7;
                      uVar24 = ~uVar19;
                      lVar48 = uVar19 * 8;
                      lVar53 = lVar48 + 8;
                      *(undefined8 *)((long)plVar3 + -0x508) = 0;
                      *(undefined8 *)((long)plVar3 + -0x510) = 1;
                      uVar36 = uVar19;
                      do {
                        uVar36 = uVar36 - 1;
                        lVar48 = lVar48 + -8;
                        lVar49 = uVar19 + ~uVar27;
                        lVar11 = *(long *)((long)plVar3 + -0x420);
                        uVar34 = lVar11 - lVar49;
                        lVar28 = *(long *)((long)plVar3 + -0x438);
                        uVar30 = uVar34;
                        if ((int)uVar54 != 2) {
                          uVar30 = *(ulong *)((long)plVar3 + -0x430);
                        }
                        lVar43 = *(long *)((long)plVar3 + -0x440);
                        lVar31 = *(ulong *)((long)plVar3 + -0x430) - uVar30;
                        uVar33 = lVar43 + (lVar28 - uVar34) * 8 + lVar31 * lVar28 * 8;
                        *(long *)((long)plVar3 + -0x450) = *(long *)((long)plVar3 + -0x410);
                        dVar21 = *(double *)(*(long *)((long)plVar3 + -0x410) + lVar49 * 8);
                        lVar1 = uVar34 - 1;
                        if (lVar1 == 0) {
                          dVar21 = 1.0 - dVar21;
                          if ((uVar33 & 7) == 0) {
                            if (0 < (long)uVar30) {
                              pdVar22 = (double *)
                                        (lVar43 + lVar28 * 8 * lVar31 +
                                                  ((lVar28 + uVar36) - lVar11) * 8);
                              do {
                                *pdVar22 = dVar21 * *pdVar22;
                                pdVar22 = pdVar22 + lVar28;
                                uVar30 = uVar30 - 1;
                              } while (uVar30 != 0);
                            }
                          }
                          else if (0 < (long)uVar30) {
                            pdVar22 = (double *)
                                      (lVar43 + lVar28 * 8 * lVar31 +
                                                ((lVar28 + uVar36) - lVar11) * 8);
                            do {
                              *pdVar22 = dVar21 * *pdVar22;
                              pdVar22 = pdVar22 + lVar28;
                              uVar30 = uVar30 - 1;
                            } while (uVar30 != 0);
                          }
                        }
                        else if (dVar21 != 0.0) {
                          *(ulong *)((long)plVar3 + -0x4c8) = uVar24;
                          *(ulong *)((long)plVar3 + -0x4c0) = uVar36;
                          *(undefined8 *)((long)plVar3 + -0x4e0) =
                               *(undefined8 *)((long)plVar3 + -0x428);
                          *(undefined8 *)((long)plVar3 + -0x4d8) =
                               *(undefined8 *)((long)plVar3 + -0x418);
                          *(long *)((long)plVar3 + -0x4f0) = lVar28;
                          *(ulong *)((long)plVar3 + -0x4e8) = uVar33 + 8;
                          *(ulong *)((long)plVar3 + -0x340) = uVar33 + 8;
                          *(long *)((long)plVar3 + -0x4d0) = lVar1;
                          *(long *)((long)plVar3 + -0x338) = lVar1;
                          *(ulong *)((long)plVar3 + -0x330) = uVar30;
                          *(ulong *)((long)plVar3 + -0x328) = uVar33;
                          *(ulong *)((long)plVar3 + -800) = uVar34;
                          *(ulong *)((long)plVar3 + -0x318) = uVar30;
                          *(undefined1 **)((long)plVar3 + -0x310) =
                               (undefined1 *)((long)plVar3 + -0x440);
                          *(ulong *)((long)plVar3 + -0x308) = lVar28 - uVar34;
                          *(long *)((long)plVar3 + -0x300) = lVar31;
                          *(long *)((long)plVar3 + -0x2f8) = lVar28;
                          uVar19 = *(ulong *)((long)plVar3 + -0x500);
                          if ((long)uVar30 <= (long)*(ulong *)((long)plVar3 + -0x500)) {
                            uVar19 = uVar30;
                          }
                          *(undefined8 *)((long)plVar3 + -0x2e8) =
                               *(undefined8 *)((long)plVar3 + -0x508);
                          *(undefined8 *)((long)plVar3 + -0x2f0) =
                               *(undefined8 *)((long)plVar3 + -0x510);
                          if (*(long *)((long)plVar3 + -0x4f8) != 0) {
                            uVar19 = uVar30;
                          }
                          *(long *)((long)plVar3 + -0x2e0) = lVar28;
                          *(long *)((long)plVar3 + -0x468) = lVar53;
                          *(long *)((long)plVar3 + -0x460) = lVar48;
                          *(long *)((long)plVar3 + -0x478) = lVar49;
                          *(long *)((long)plVar3 + -0x4b8) = lVar11;
                          *(long *)((long)plVar3 + -0x4b0) = lVar31;
                          *(long *)((long)plVar3 + -0x488) = lVar43;
                          *(long *)((long)plVar3 + -0x4a0) = lVar28;
                          if (0 < (long)uVar19) {
                            _bzero(pdVar45,uVar19 << 3);
                            lVar11 = *(long *)((long)plVar3 + -0x4b8);
                            lVar31 = *(long *)((long)plVar3 + -0x4b0);
                            lVar28 = *(long *)((long)plVar3 + -0x4a0);
                            lVar43 = *(long *)((long)plVar3 + -0x488);
                            lVar49 = *(long *)((long)plVar3 + -0x478);
                            lVar53 = *(long *)((long)plVar3 + -0x468);
                            lVar48 = *(long *)((long)plVar3 + -0x460);
                          }
                          lVar47 = uVar30 - uVar19;
                          uVar24 = lVar47 - (lVar47 >> 0x3f);
                          uVar36 = uVar24 & 0xfffffffffffffffe;
                          lVar1 = uVar36 + uVar19;
                          if (1 < lVar47) {
                            *(ulong *)((long)plVar3 + -0x520) = uVar24;
                            *(ulong *)((long)plVar3 + -0x518) = uVar36;
                            lVar53 = lVar1;
                            if (lVar1 <= (long)(uVar19 + 2)) {
                              lVar53 = uVar19 + 2;
                            }
                            _bzero(pdVar45 + uVar19,
                                   (lVar53 + ~uVar19 & 0x1ffffffffffffffe) * 8 + 0x10);
                            uVar24 = *(ulong *)((long)plVar3 + -0x520);
                            uVar36 = *(ulong *)((long)plVar3 + -0x518);
                            lVar11 = *(long *)((long)plVar3 + -0x4b8);
                            lVar31 = *(long *)((long)plVar3 + -0x4b0);
                            lVar28 = *(long *)((long)plVar3 + -0x4a0);
                            lVar43 = *(long *)((long)plVar3 + -0x488);
                            lVar49 = *(long *)((long)plVar3 + -0x478);
                            lVar53 = *(long *)((long)plVar3 + -0x468);
                            lVar48 = *(long *)((long)plVar3 + -0x460);
                          }
                          if (lVar1 < (long)uVar30) {
                            _bzero(pdVar45 + ((long)uVar24 >> 1) * 2 + uVar19,(lVar47 - uVar36) * 8)
                            ;
                            lVar11 = *(long *)((long)plVar3 + -0x4b8);
                            lVar31 = *(long *)((long)plVar3 + -0x4b0);
                            lVar28 = *(long *)((long)plVar3 + -0x4a0);
                            lVar43 = *(long *)((long)plVar3 + -0x488);
                            lVar49 = *(long *)((long)plVar3 + -0x478);
                            lVar53 = *(long *)((long)plVar3 + -0x468);
                            lVar48 = *(long *)((long)plVar3 + -0x460);
                          }
                          lVar47 = *(long *)((long)plVar3 + -0x480) - uVar27;
                          lVar40 = lVar11 - lVar47;
                          lVar1 = *(long *)((long)plVar3 + -0x4d8);
                          pdVar22 = (double *)
                                    (*(long *)((long)plVar3 + -0x4e0) + lVar49 * 8 +
                                    lVar1 * lVar47 * 8);
                          uVar24 = *(ulong *)((long)plVar3 + -0x4c8);
                          if (uVar30 == 1) {
                            uVar36 = *(ulong *)((long)plVar3 + -0x4c0);
                            if (*(long *)((long)plVar3 + -0x4d0) == 0) {
                              dVar21 = 0.0;
LAB_1099355b8:
                              lVar53 = *(long *)((long)plVar3 + -0x450);
                              lVar48 = *(long *)((long)plVar3 + -0x4f0);
                            }
                            else {
                              dVar21 = *pdVar22 * **(double **)((long)plVar3 + -0x4e8);
                              if ((long)uVar34 < 3) goto LAB_1099355b8;
                              lVar25 = lVar11 + uVar24;
                              pdVar35 = (double *)
                                        (*(long *)((long)plVar3 + -0x4e0) + lVar48 + lVar1 * lVar53)
                              ;
                              lVar53 = *(long *)((long)plVar3 + -0x450);
                              lVar48 = *(long *)((long)plVar3 + -0x4f0);
                              pdVar18 = (double *)
                                        (lVar43 + lVar28 * lVar31 * 8 +
                                                  ((lVar28 + uVar36) - lVar11) * 8 + 0x10);
                              do {
                                dVar21 = dVar21 + *pdVar35 * *pdVar18;
                                pdVar35 = pdVar35 + lVar1;
                                lVar25 = lVar25 + -1;
                                pdVar18 = pdVar18 + 1;
                              } while (lVar25 != 0);
                            }
                            *pdVar45 = dVar21 + *pdVar45;
LAB_1099355cc:
                            uVar19 = 0;
                            lVar31 = lVar28 * lVar31 * 8;
                            pdVar35 = (double *)(lVar43 + lVar31 + ((lVar28 + uVar36) - lVar11) * 8)
                            ;
                            do {
                              pdVar45[uVar19] = *pdVar35 + pdVar45[uVar19];
                              uVar19 = uVar19 + 1;
                              pdVar35 = pdVar35 + lVar48;
                            } while (uVar30 != uVar19);
                            dVar21 = *(double *)(lVar53 + lVar49 * 8);
                            pdVar35 = (double *)(lVar43 + lVar31 + ((lVar28 + uVar36) - lVar11) * 8)
                            ;
                            pdVar18 = pdVar45;
                            uVar19 = uVar30;
                            do {
                              *pdVar35 = *pdVar35 - dVar21 * *pdVar18;
                              pdVar35 = pdVar35 + lVar48;
                              uVar19 = uVar19 - 1;
                              pdVar18 = pdVar18 + 1;
                            } while (uVar19 != 0);
                          }
                          else {
                            *(double **)((long)plVar3 + -0x4d8) = pdVar22;
                            *(double **)((long)plVar3 + -0x248) = pdVar22;
                            *(long *)((long)plVar3 + -0x240) = lVar40;
                            *(undefined1 **)((long)plVar3 + -0x230) =
                                 (undefined1 *)((long)plVar3 + -0x428);
                            *(long *)((long)plVar3 + -0x228) = lVar47;
                            *(long *)((long)plVar3 + -0x220) = lVar49;
                            *(undefined8 *)((long)plVar3 + -0x218) = 1;
                            *(undefined8 *)((long)plVar3 + -0x2d0) =
                                 *(undefined8 *)((long)plVar3 + -0x4e8);
                            *(undefined8 *)((long)plVar3 + -0x2c8) =
                                 *(undefined8 *)((long)plVar3 + -0x4d0);
                            *(ulong *)((long)plVar3 + -0x2c0) = uVar30;
                            *(undefined8 *)((long)plVar3 + -0x2a0) =
                                 *(undefined8 *)((long)plVar3 + -0x310);
                            *(undefined8 *)((long)plVar3 + -0x2a8) =
                                 *(undefined8 *)((long)plVar3 + -0x318);
                            *(undefined8 *)((long)plVar3 + -0x290) =
                                 *(undefined8 *)((long)plVar3 + -0x300);
                            *(undefined8 *)((long)plVar3 + -0x298) =
                                 *(undefined8 *)((long)plVar3 + -0x308);
                            *(undefined8 *)((long)plVar3 + -0x280) =
                                 *(undefined8 *)((long)plVar3 + -0x2f0);
                            *(undefined8 *)((long)plVar3 + -0x288) =
                                 *(undefined8 *)((long)plVar3 + -0x2f8);
                            *(undefined8 *)((long)plVar3 + -0x270) =
                                 *(undefined8 *)((long)plVar3 + -0x2e0);
                            *(undefined8 *)((long)plVar3 + -0x278) =
                                 *(undefined8 *)((long)plVar3 + -0x2e8);
                            *(undefined8 *)((long)plVar3 + -0x2b0) =
                                 *(undefined8 *)((long)plVar3 + -800);
                            *(undefined8 *)((long)plVar3 + -0x2b8) =
                                 *(undefined8 *)((long)plVar3 + -0x328);
                            FUN_109938c48(0x3ff0000000000000,(undefined1 *)((long)plVar3 + -0x2d0),
                                          (undefined1 *)((long)plVar3 + -0x248),pdVar45);
                            uVar36 = *(ulong *)((long)plVar3 + -0x4c0);
                            lVar49 = *(long *)((long)plVar3 + -0x478);
                            lVar53 = *(long *)((long)plVar3 + -0x450);
                            lVar43 = *(long *)((long)plVar3 + -0x488);
                            lVar28 = *(long *)((long)plVar3 + -0x4a0);
                            lVar31 = *(long *)((long)plVar3 + -0x4b0);
                            pdVar22 = *(double **)((long)plVar3 + -0x4d8);
                            if (0 < (long)uVar30) {
                              lVar48 = *(long *)((long)plVar3 + -0x438);
                              lVar11 = *(long *)((long)plVar3 + -0x4b8);
                              goto LAB_1099355cc;
                            }
                          }
                          uVar54 = *(undefined8 *)(lVar53 + lVar49 * 8);
                          *(double **)((long)plVar3 + -0x2b0) = pdVar22;
                          *(long *)((long)plVar3 + -0x2a8) = lVar40;
                          *(undefined1 **)((long)plVar3 + -0x298) =
                               (undefined1 *)((long)plVar3 + -0x428);
                          *(long *)((long)plVar3 + -0x290) = lVar47;
                          *(long *)((long)plVar3 + -0x288) = lVar49;
                          *(undefined8 *)((long)plVar3 + -0x280) = 1;
                          *(long *)((long)plVar3 + -0x2c8) = lVar40;
                          *(undefined8 *)((long)plVar3 + -0x2b8) = uVar54;
                          *(double **)((long)plVar3 + -0x270) = pdVar45;
                          *(ulong *)((long)plVar3 + -0x260) = uVar30;
                          FUN_109938dcc((undefined1 *)((long)plVar3 + -0x340),
                                        (undefined1 *)((long)plVar3 + -0x2d0),pdVar45);
                          uVar54 = *(undefined8 *)((long)plVar3 + -0x490);
                          lVar53 = *(long *)((long)plVar3 + -0x468);
                          lVar48 = *(long *)((long)plVar3 + -0x460);
                          uVar19 = *(ulong *)((long)plVar3 + -0x480);
                        }
                        uVar27 = uVar27 + 1;
                        uVar24 = uVar24 + 1;
                        lVar53 = lVar53 + -8;
                      } while (uVar27 != uVar19);
                    }
LAB_1099356bc:
                    _free(pdVar45);
                    puVar51 = *(undefined8 **)((long)plVar3 + -0x440);
                    lVar53 = *(long *)((long)plVar3 + -0x438);
                    lVar48 = *(long *)((long)plVar3 + -0x430);
                    if (*(long *)(puVar10 + 200) != lVar53 || *(long *)(puVar10 + 0xd0) != lVar48) {
                      if ((lVar53 != 0) && (lVar48 != 0)) {
                        lVar49 = 0;
                        if (lVar48 != 0) {
                          lVar49 = 0x7fffffffffffffff / lVar48;
                        }
                        if (lVar53 <= lVar49) goto LAB_1099356f4;
                        goto LAB_109935728;
                      }
LAB_1099356f4:
                      uVar19 = lVar48 * lVar53;
                      if (*(long *)(puVar10 + 0xd0) * *(long *)(puVar10 + 200) - uVar19 != 0) {
                        _free(*(undefined8 *)(puVar10 + 0xc0));
                        if (0 < (long)uVar19) {
                          if (uVar19 >> 0x3d == 0) {
                            lVar49 = uVar19 * 8;
                            _malloc();
                            if (lVar49 != 0) goto LAB_109935750;
                          }
LAB_109935728:
                          ___cxa_allocate_exception(8);
                          __ZNSt9bad_allocC1Ev();
                          ___cxa_throw();
                          goto LAB_109936200;
                        }
                        lVar49 = 0;
LAB_109935750:
                        *(long *)(puVar10 + 0xc0) = lVar49;
                      }
                      *(long *)(puVar10 + 200) = lVar53;
                      *(long *)(puVar10 + 0xd0) = lVar48;
                    }
                    if (0 < lVar53) {
                      lVar49 = 0;
                      puVar46 = *(undefined8 **)(puVar10 + 0xc0);
                      do {
                        puVar29 = puVar46;
                        puVar23 = puVar51;
                        lVar28 = lVar48;
                        if (0 < lVar48) {
                          do {
                            *puVar29 = *puVar23;
                            puVar23 = puVar23 + lVar53;
                            lVar28 = lVar28 + -1;
                            puVar29 = puVar29 + 1;
                          } while (lVar28 != 0);
                        }
                        lVar49 = lVar49 + 1;
                        puVar51 = puVar51 + 1;
                        puVar46 = puVar46 + lVar48;
                      } while (lVar49 != lVar53);
                    }
                    _free(*(undefined8 *)((long)plVar3 + -0x440));
                    uVar19 = *(ulong *)(puVar10 + 0xd0);
                    if (0 < (long)uVar19) {
                      if (uVar19 >> 0x3d == 0) {
                        pdVar45 = (double *)0x1;
                        _calloc(1,uVar19 << 3);
                        if (pdVar45 != (double *)0x0) {
                          if (uVar19 != 1) goto LAB_10993583c;
                          lVar53 = *(long *)(puVar10 + 0x88);
                          dVar21 = 0.0;
                          if (lVar53 != 0) {
                            pdVar35 = *(double **)(puVar10 + 0xc0);
                            pdVar22 = *(double **)(puVar10 + 0x80);
                            dVar21 = *pdVar35 * *pdVar22;
                            if (1 < lVar53) {
                              lVar53 = lVar53 + -1;
                              do {
                                pdVar35 = pdVar35 + 1;
                                pdVar22 = pdVar22 + 1;
                                dVar21 = dVar21 + *pdVar35 * *pdVar22;
                                lVar53 = lVar53 + -1;
                              } while (lVar53 != 0);
                            }
                          }
                          *pdVar45 = dVar21 + 0.0;
                          goto LAB_109935874;
                        }
                      }
                      ___cxa_allocate_exception(8);
                      __ZNSt9bad_allocC1Ev();
                      ___cxa_throw();
                      goto LAB_109936200;
                    }
                    pdVar45 = (double *)0x0;
LAB_10993583c:
                    uVar54 = *(undefined8 *)(puVar10 + 200);
                    *(undefined8 *)((long)plVar3 + -0x2d0) = *(undefined8 *)(puVar10 + 0xc0);
                    *(ulong *)((long)plVar3 + -0x2c8) = uVar19;
                    *(undefined8 *)((long)plVar3 + -0x340) = *(undefined8 *)(puVar10 + 0x80);
                    *(undefined8 *)((long)plVar3 + -0x338) = 1;
                    FUN_109909a3c(0x3ff0000000000000,uVar19,uVar54,
                                  (undefined1 *)((long)plVar3 + -0x2d0),
                                  (undefined1 *)((long)plVar3 + -0x340),pdVar45,1);
LAB_109935874:
                    dVar21 = *pdVar45;
                    *(double *)(puVar10 + 0xe0) = pdVar45[1];
                    *(double *)(puVar10 + 0xd8) = dVar21;
                    _free(pdVar45);
                    plVar39 = plVar15;
                    (**(code **)(*plVar15 + 0x20))();
                    uVar7 = (uint)plVar39;
                    uVar19 = (ulong)(int)uVar7;
                    if (uVar7 == 0) {
LAB_1099358f0:
                      lVar53 = 0;
                    }
                    else {
                      lVar53 = 0;
                      if (uVar19 != 0) {
                        lVar53 = 0x7fffffffffffffff / (long)uVar19;
                      }
                      if (lVar53 < 2) {
LAB_1099358cc:
                        ___cxa_allocate_exception(8);
                        __ZNSt9bad_allocC1Ev();
                        ___cxa_throw();
                        goto LAB_109936200;
                      }
                      if ((int)uVar7 < 1) goto LAB_1099358f0;
                      lVar53 = 1;
                      _calloc(1,uVar19 << 4);
                      if (lVar53 == 0) goto LAB_1099358cc;
                    }
                    uVar27 = *(ulong *)(puVar10 + 0x68);
                    if (0 < (long)uVar27) {
                      if (uVar27 >> 0x3d == 0) {
                        pdVar45 = *(double **)(puVar10 + 0xc0);
                        *(undefined8 *)((long)plVar3 + -0x450) = *(undefined8 *)(puVar10 + 0xd0);
                        lVar48 = uVar27 << 3;
                        lVar49 = *(long *)(puVar10 + 0x60);
                        _malloc();
                        if (lVar48 != 0) {
                          uVar24 = 0;
                          lVar28 = *(long *)((long)plVar3 + -0x450);
                          do {
                            *(double *)(lVar48 + uVar24 * 8) =
                                 *pdVar45 / *(double *)(lVar49 + uVar24 * 8);
                            uVar24 = uVar24 + 1;
                            pdVar45 = pdVar45 + lVar28;
                          } while (uVar27 != uVar24);
                          goto LAB_10993595c;
                        }
                      }
                      ___cxa_allocate_exception(8);
                      __ZNSt9bad_allocC1Ev();
                      ___cxa_throw();
                      goto LAB_109936200;
                    }
                    lVar48 = 0;
LAB_10993595c:
                    (**(code **)(*plVar15 + 0x10))(plVar15,lVar48,lVar53);
                    lVar28 = *(long *)(puVar10 + 0xc0);
                    lVar11 = *(long *)(puVar10 + 0xd0);
                    lVar49 = *(long *)(puVar10 + 0x60);
                    uVar24 = *(ulong *)(puVar10 + 0x68);
                    if (uVar27 == uVar24) {
                      if (0 < (long)uVar27) {
LAB_1099359cc:
                        uVar27 = 0;
                        pdVar45 = (double *)(lVar28 + 8);
                        do {
                          *(double *)(lVar48 + uVar27 * 8) =
                               *pdVar45 / *(double *)(lVar49 + uVar27 * 8);
                          uVar27 = uVar27 + 1;
                          pdVar45 = pdVar45 + lVar11;
                        } while (uVar24 != uVar27);
                      }
                    }
                    else {
                      *(long *)((long)plVar3 + -0x450) = lVar28;
                      _free(lVar48);
                      if (0 < (long)uVar24) {
                        if (uVar24 >> 0x3d == 0) {
                          lVar48 = uVar24 << 3;
                          _malloc();
                          lVar28 = *(long *)((long)plVar3 + -0x450);
                          if (lVar48 != 0) goto LAB_1099359cc;
                        }
                        ___cxa_allocate_exception(8);
                        __ZNSt9bad_allocC1Ev();
                        ___cxa_throw();
                        goto LAB_109936200;
                      }
                      lVar48 = 0;
                    }
                    (**(code **)(*plVar15 + 0x10))(plVar15,lVar48,lVar53 + uVar19 * 8);
                    uVar55 = *(uint *)((long)plVar3 + -0x524);
                    if (uVar19 - 1 < 0xf) {
                      lVar28 = 0;
                      uVar27 = uVar19 & 0xc;
                      lVar11 = uVar19 * 8;
                      lVar49 = lVar53 + (uVar19 >> 1 & 7) * 0x10;
                      bVar5 = true;
                      do {
                        bVar4 = bVar5;
                        lVar31 = 0;
                        pdVar45 = (double *)(lVar53 + lVar28 * uVar19 * 8);
                        bVar5 = true;
                        do {
                          bVar17 = bVar5;
                          pdVar22 = (double *)(lVar53 + lVar31 * uVar19 * 8);
                          if (uVar7 < 2) {
                            dVar21 = *pdVar22 * *pdVar45;
                          }
                          else {
                            dVar21 = *pdVar22 * *pdVar45;
                            dVar57 = pdVar22[1] * pdVar45[1];
                            if (3 < uVar7) {
                              dVar59 = pdVar22[2] * pdVar45[2];
                              dVar60 = pdVar22[3] * pdVar45[3];
                              if (7 < uVar7) {
                                pdVar18 = (double *)(lVar53 + 0x30 + lVar11 * lVar31);
                                uVar24 = 4;
                                pdVar35 = (double *)(lVar53 + 0x30 + lVar11 * lVar28);
                                do {
                                  dVar21 = dVar21 + pdVar18[-2] * pdVar35[-2];
                                  dVar57 = dVar57 + pdVar18[-1] * pdVar35[-1];
                                  dVar59 = dVar59 + *pdVar18 * *pdVar35;
                                  dVar60 = dVar60 + pdVar18[1] * pdVar35[1];
                                  uVar24 = uVar24 + 4;
                                  pdVar35 = pdVar35 + 4;
                                  pdVar18 = pdVar18 + 4;
                                } while (uVar24 < uVar27);
                              }
                              dVar21 = dVar59 + dVar21;
                              dVar57 = dVar60 + dVar57;
                              if (uVar27 < (uVar19 & 0xe)) {
                                dVar21 = dVar21 + pdVar22[uVar27] * pdVar45[uVar27];
                                dVar57 = dVar57 + (pdVar22 + uVar27)[1] * (pdVar45 + uVar27)[1];
                              }
                            }
                            dVar21 = dVar21 + dVar57;
                            if (uVar19 != (uVar19 & 0xe)) {
                              pdVar22 = (double *)(lVar49 + lVar11 * lVar31);
                              pdVar35 = (double *)(lVar49 + lVar11 * lVar28);
                              uVar24 = uVar19 & 0xfffffffffffffff1;
                              do {
                                dVar21 = dVar21 + *pdVar22 * *pdVar35;
                                uVar24 = uVar24 - 1;
                                pdVar22 = pdVar22 + 1;
                                pdVar35 = pdVar35 + 1;
                              } while (uVar24 != 0);
                            }
                          }
                          *(double *)((long)plVar3 + lVar31 * 8 + lVar28 * 0x10 + -0x340) = dVar21;
                          lVar31 = 1;
                          bVar5 = false;
                        } while (bVar17);
                        lVar28 = 1;
                        bVar5 = false;
                      } while (bVar4);
                    }
                    else {
                      *(undefined8 *)((long)plVar3 + -0x338) = 0;
                      *(undefined8 *)((long)plVar3 + -0x340) = 0;
                      *(undefined8 *)((long)plVar3 + -0x328) = 0;
                      *(undefined8 *)((long)plVar3 + -0x330) = 0;
                      if (uVar7 != 0) {
                        *(undefined8 *)((long)plVar3 + -0x2c8) = 0;
                        *(undefined8 *)((long)plVar3 + -0x2d0) = 0;
                        *(undefined8 *)((long)plVar3 + -0x2b8) = 2;
                        *(undefined8 *)((long)plVar3 + -0x2c0) = 2;
                        *(ulong *)((long)plVar3 + -0x2b0) = uVar19;
                        if ((bRam00000001132dfa18 & 1) == 0) {
                          iVar6 = 0x132dfa18;
                          ___cxa_guard_acquire();
                          if (iVar6 != 0) {
                            uRam00000001132dfa08 = 0x80000;
                            uRam00000001132dfa00 = 0x4000;
                            lRam00000001132dfa10 = 0x80000;
                            ___cxa_guard_release(0x1132dfa18);
                          }
                        }
                        uVar36 = *(ulong *)((long)plVar3 + -0x2c0);
                        uVar24 = *(ulong *)((long)plVar3 + -0x2b8);
                        uVar27 = uVar36;
                        if ((long)uVar36 <= (long)uVar24) {
                          uVar27 = uVar24;
                        }
                        uVar34 = *(ulong *)((long)plVar3 + -0x2b0);
                        uVar30 = uVar34;
                        if ((long)uVar34 <= (long)uVar27) {
                          uVar30 = uVar27;
                        }
                        uVar27 = uVar34;
                        if (0x2f < (long)uVar30) {
                          uVar30 = (long)(uRam00000001132dfa00 - 0xc0) / 0x50 & 0xfffffffffffffff8;
                          if ((long)uVar30 < 2) {
                            uVar30 = 1;
                          }
                          if ((long)uVar30 < (long)uVar34) {
                            uVar33 = 0;
                            if (uVar30 != 0) {
                              uVar33 = uVar34 / uVar30;
                            }
                            uVar37 = uVar34 - uVar33 * uVar30;
                            uVar27 = uVar30;
                            if (uVar37 != 0) {
                              lVar49 = uVar33 * 8 + 8;
                              lVar28 = 0;
                              if (lVar49 != 0) {
                                lVar28 = (long)(uVar30 + ~uVar37) / lVar49;
                              }
                              uVar27 = uVar30 + lVar28 * -8;
                            }
                            *(ulong *)((long)plVar3 + -0x2b0) = uVar27;
                          }
                          uVar33 = (uRam00000001132dfa00 - 0xc0) + uVar36 * uVar27 * -8;
                          if ((long)uVar33 < (long)(uVar27 * 0x20)) {
                            uVar37 = 0;
                            if (uVar30 << 5 != 0) {
                              uVar37 = 0x480000 / (uVar30 << 5);
                            }
                          }
                          else {
                            uVar37 = 0;
                            if (uVar27 << 3 != 0) {
                              uVar37 = uVar33 / (uVar27 << 3);
                            }
                          }
                          uVar30 = 0;
                          if (uVar27 << 4 != 0) {
                            uVar30 = 0x180000 / (uVar27 << 4);
                          }
                          if ((long)uVar30 <= (long)uVar37) {
                            uVar37 = uVar30;
                          }
                          uVar37 = uVar37 & 0xfffffffffffffffc;
                          if ((long)uVar37 < (long)uVar24) {
                            lVar49 = 0;
                            if (uVar37 != 0) {
                              lVar49 = (long)uVar24 / (long)uVar37;
                            }
                            lVar28 = uVar24 - lVar49 * uVar37;
                            if (lVar28 != 0) {
                              lVar49 = lVar49 * 4 + 4;
                              lVar11 = 0;
                              if (lVar49 != 0) {
                                lVar11 = (long)(uVar37 - lVar28) / lVar49;
                              }
                              uVar37 = uVar37 + lVar11 * -4;
                            }
                            *(ulong *)((long)plVar3 + -0x2b8) = uVar37;
                            uVar24 = uVar37;
                          }
                          else if (uVar34 == uVar27) {
                            uVar33 = uVar34 * uVar24 * 8;
                            uVar30 = uVar36;
                            uVar27 = uRam00000001132dfa00;
                            if (0x400 < (long)uVar33) {
                              if (0x23f < (long)uVar36) {
                                uVar30 = 0x240;
                              }
                              uVar27 = uRam00000001132dfa08;
                              if (lRam00000001132dfa10 == 0 || 0x8000 < uVar33) {
                                uVar27 = 0x180000;
                                uVar30 = uVar36;
                              }
                            }
                            uVar33 = 0;
                            if (uVar34 * 0x18 != 0) {
                              uVar33 = uVar27 / (uVar34 * 0x18);
                            }
                            if ((long)uVar33 <= (long)uVar30) {
                              uVar30 = uVar33;
                            }
                            if ((long)uVar30 < 7) {
                              uVar27 = uVar34;
                              if (uVar30 == 0) goto LAB_109935ed0;
                            }
                            else {
                              uVar30 = ((uVar30 / 6) * 2 + uVar30 / 6) * 2;
                            }
                            lVar49 = 0;
                            if (uVar30 != 0) {
                              lVar49 = (long)uVar36 / (long)uVar30;
                            }
                            lVar28 = uVar36 - lVar49 * uVar30;
                            uVar36 = uVar30;
                            if (lVar28 != 0) {
                              lVar11 = lVar49 * 6 + 6;
                              lVar49 = 0;
                              if (lVar11 != 0) {
                                lVar49 = (long)(uVar30 - lVar28) / lVar11;
                              }
                              uVar36 = uVar30 + lVar49 * -6;
                            }
                            *(ulong *)((long)plVar3 + -0x2c0) = uVar36;
                            uVar27 = uVar34;
                          }
                        }
LAB_109935ed0:
                        *(ulong *)((long)plVar3 + -0x2a8) = uVar36 * uVar27;
                        *(ulong *)((long)plVar3 + -0x2a0) = uVar27 * uVar24;
                        *(undefined1 **)((long)plVar3 + -0x540) =
                             (undefined1 *)((long)plVar3 + -0x2d0);
                        *(undefined8 *)((long)plVar3 + -0x538) = 0;
                        *(undefined8 *)((long)plVar3 + -0x550) = 1;
                        *(undefined8 *)((long)plVar3 + -0x548) = 2;
                        FUN_109913d80(0x3ff0000000000000,2,2,uVar19,lVar53,uVar19,lVar53,uVar19,
                                      (undefined1 *)((long)plVar3 + -0x340));
                        _free(*(undefined8 *)((long)plVar3 + -0x2d0));
                        _free(*(undefined8 *)((long)plVar3 + -0x2c8));
                      }
                    }
                    uVar54 = *(undefined8 *)((long)plVar3 + -0x340);
                    uVar61 = *(undefined8 *)((long)plVar3 + -0x328);
                    uVar62 = *(undefined8 *)((long)plVar3 + -0x330);
                    *(undefined8 *)(puVar10 + 0xf0) = *(undefined8 *)((long)plVar3 + -0x338);
                    *(undefined8 *)(puVar10 + 0xe8) = uVar54;
                    *(undefined8 *)(puVar10 + 0x100) = uVar61;
                    *(undefined8 *)(puVar10 + 0xf8) = uVar62;
                    _free(lVar48);
                    _free(lVar53);
                    bVar5 = true;
                    uVar54 = *(undefined8 *)((long)plVar3 + -0x530);
                    goto LAB_109934974;
                  }
                  lVar53 = 0;
                  uVar27 = uVar19 + 1 >> 1;
                  if (0x5f < uVar19) {
                    uVar27 = 0x30;
                  }
                  *(undefined8 *)((long)plVar3 + -0x4a8) = 0x80000;
                  *(undefined8 *)((long)plVar3 + -0x4b0) = 0x4000;
                  *(ulong *)((long)plVar3 + -0x4a0) = uVar27;
                  do {
                    uVar19 = uVar19 - lVar53;
                    uVar30 = uVar19 - uVar27 &
                             ((long)(uVar19 - uVar27) >> 0x3f ^ 0xffffffffffffffffU);
                    uVar36 = *(long *)((long)plVar3 + -0x420) - uVar30;
                    *(ulong *)((long)plVar3 + -0x340) =
                         *(long *)((long)plVar3 + -0x428) + uVar30 * 8 +
                         *(long *)((long)plVar3 + -0x418) * uVar30 * 8;
                    *(ulong *)((long)plVar3 + -0x338) = uVar36;
                    uVar24 = uVar19;
                    if ((long)uVar27 <= (long)uVar19) {
                      uVar24 = uVar27;
                    }
                    *(ulong *)((long)plVar3 + -0x330) = uVar24;
                    *(undefined1 **)((long)plVar3 + -0x328) = (undefined1 *)((long)plVar3 + -0x428);
                    *(ulong *)((long)plVar3 + -800) = uVar30;
                    *(ulong *)((long)plVar3 + -0x318) = uVar30;
                    *(long *)((long)plVar3 + -0x310) = *(long *)((long)plVar3 + -0x418);
                    lVar28 = *(long *)((long)plVar3 + -0x438);
                    *(undefined8 *)((long)plVar3 + -0x468) = *(undefined8 *)((long)plVar3 + -0x440);
                    lVar48 = lVar28 + (uVar30 - *(long *)((long)plVar3 + -0x420));
                    bVar5 = (int)plVar39 != 2;
                    lVar49 = lVar48;
                    if (bVar5) {
                      lVar49 = 0;
                    }
                    if (bVar5) {
                      uVar36 = *(ulong *)((long)plVar3 + -0x430);
                    }
                    *(ulong *)((long)plVar3 + -0x248) =
                         *(long *)((long)plVar3 + -0x410) + uVar30 * 8;
                    *(ulong *)((long)plVar3 + -0x240) = uVar24;
                    *(undefined8 *)((long)plVar3 + -0x230) = *(undefined8 *)((long)plVar3 + -0x488);
                    *(ulong *)((long)plVar3 + -0x228) = uVar30;
                    *(undefined8 *)((long)plVar3 + -0x218) = *(undefined8 *)((long)plVar3 + -0x408);
                    *(undefined8 *)((long)plVar3 + -0x360) = 0;
                    *(undefined8 *)((long)plVar3 + -0x358) = 0;
                    *(undefined8 *)((long)plVar3 + -0x350) = 0;
                    if (uVar19 != uVar30) {
                      lVar11 = 0;
                      if (uVar24 != 0) {
                        lVar11 = 0x7fffffffffffffff / (long)uVar24;
                      }
                      if ((long)uVar24 <= lVar11 && uVar24 * uVar24 >> 0x3d == 0) {
                        lVar11 = uVar24 * uVar24 * 8;
                        _malloc();
                        if (lVar11 != 0) {
                          *(long *)((long)plVar3 + -0x360) = lVar11;
                          goto LAB_109934b80;
                        }
                      }
                      ___cxa_allocate_exception(8);
                      __ZNSt9bad_allocC1Ev();
                      ___cxa_throw();
                      goto LAB_109936200;
                    }
LAB_109934b80:
                    *(ulong *)((long)plVar3 + -0x358) = uVar24;
                    *(ulong *)((long)plVar3 + -0x350) = uVar24;
                    FUN_10991057c((undefined1 *)((long)plVar3 + -0x360),
                                  (undefined1 *)((long)plVar3 + -0x340),
                                  (undefined1 *)((long)plVar3 + -0x248));
                    *(undefined8 *)((long)plVar3 + -0x450) = *(undefined8 *)((long)plVar3 + -0x340);
                    uVar27 = *(ulong *)((long)plVar3 + -0x338);
                    uVar19 = *(ulong *)((long)plVar3 + -0x330);
                    *(undefined8 *)((long)plVar3 + -0x460) = *(undefined8 *)((long)plVar3 + -0x328);
                    *(undefined8 *)((long)plVar3 + -0x378) = 0;
                    *(undefined8 *)((long)plVar3 + -0x370) = 0;
                    *(undefined8 *)((long)plVar3 + -0x368) = 0;
                    if ((uVar36 != 0) && (uVar19 != 0)) {
                      lVar11 = 0;
                      if (uVar36 != 0) {
                        lVar11 = 0x7fffffffffffffff / (long)uVar36;
                      }
                      if ((long)uVar19 <= lVar11) goto LAB_109934bcc;
LAB_109935fa0:
                      ___cxa_allocate_exception(8);
                      __ZNSt9bad_allocC1Ev();
                      ___cxa_throw();
                      goto LAB_109936200;
                    }
LAB_109934bcc:
                    uVar24 = uVar19 * uVar36;
                    if (0 < (long)uVar24) {
                      if (uVar24 >> 0x3d == 0) {
                        lVar11 = 1;
                        _calloc(1,uVar24 * 8);
                        if (lVar11 != 0) {
                          *(long *)((long)plVar3 + -0x378) = lVar11;
                          goto LAB_109934bf4;
                        }
                      }
                      goto LAB_109935fa0;
                    }
LAB_109934bf4:
                    *(long *)((long)plVar3 + -0x478) = lVar53;
                    *(ulong *)((long)plVar3 + -0x370) = uVar19;
                    *(ulong *)((long)plVar3 + -0x368) = uVar36;
                    uVar24 = uVar27;
                    if ((long)uVar19 <= (long)uVar27) {
                      uVar24 = uVar19;
                    }
                    *(undefined8 *)((long)plVar3 + -0x2c8) = 0;
                    *(undefined8 *)((long)plVar3 + -0x2d0) = 0;
                    *(ulong *)((long)plVar3 + -0x2c0) = uVar24;
                    *(ulong *)((long)plVar3 + -0x2b8) = uVar36;
                    *(ulong *)((long)plVar3 + -0x2b0) = uVar27;
                    if ((bRam00000001132dfa18 & 1) == 0) {
                      iVar6 = 0x132dfa18;
                      ___cxa_guard_acquire();
                      if (iVar6 != 0) {
                        uRam00000001132dfa08 = *(ulong *)((long)plVar3 + -0x4a8);
                        uRam00000001132dfa00 = *(ulong *)((long)plVar3 + -0x4b0);
                        lRam00000001132dfa10 = 0x80000;
                        ___cxa_guard_release(0x1132dfa18);
                      }
                    }
                    uVar19 = uVar24;
                    if ((long)uVar24 <= (long)uVar36) {
                      uVar19 = uVar36;
                    }
                    uVar30 = uVar27;
                    if ((long)uVar27 <= (long)uVar19) {
                      uVar30 = uVar19;
                    }
                    uVar19 = uVar27;
                    uVar34 = uVar24;
                    if (0x2f < (long)uVar30) {
                      uVar30 = (long)(uRam00000001132dfa00 - 0xc0) / 0x140 & 0xfffffffffffffff8;
                      if ((long)uVar30 < 2) {
                        uVar30 = 1;
                      }
                      if ((long)uVar30 < (long)uVar27) {
                        uVar33 = 0;
                        if (uVar30 != 0) {
                          uVar33 = uVar27 / uVar30;
                        }
                        uVar37 = uVar27 - uVar33 * uVar30;
                        uVar19 = uVar30;
                        if (uVar37 != 0) {
                          lVar53 = uVar33 * 8 + 8;
                          lVar11 = 0;
                          if (lVar53 != 0) {
                            lVar11 = (long)(uVar30 + ~uVar37) / lVar53;
                          }
                          uVar19 = uVar30 + lVar11 * -8;
                        }
                        *(ulong *)((long)plVar3 + -0x2b0) = uVar19;
                      }
                      uVar33 = (uRam00000001132dfa00 - 0xc0) + uVar24 * uVar19 * -8;
                      if ((long)uVar33 < (long)(uVar19 * 0x20)) {
                        uVar37 = 0;
                        if (uVar30 << 5 != 0) {
                          uVar37 = 0x480000 / (uVar30 << 5);
                        }
                      }
                      else {
                        uVar37 = 0;
                        if (uVar19 << 3 != 0) {
                          uVar37 = uVar33 / (uVar19 << 3);
                        }
                      }
                      uVar30 = 0;
                      if (uVar19 << 4 != 0) {
                        uVar30 = 0x180000 / (uVar19 << 4);
                      }
                      if ((long)uVar30 <= (long)uVar37) {
                        uVar37 = uVar30;
                      }
                      if ((uVar27 == uVar19) &&
                         ((long)uVar36 <= (long)(uVar37 & 0xfffffffffffffffc))) {
                        uVar33 = uVar27 * uVar36 * 8;
                        uVar19 = uRam00000001132dfa00;
                        uVar30 = uVar24;
                        if (0x400 < (long)uVar33) {
                          if (0x23f < (long)uVar24) {
                            uVar30 = 0x240;
                          }
                          uVar19 = uRam00000001132dfa08;
                          if (0x8000 < uVar33 || lRam00000001132dfa10 == 0) {
                            uVar19 = 0x180000;
                            uVar30 = uVar24;
                          }
                        }
                        uVar33 = 0;
                        if (uVar27 * 0x18 != 0) {
                          uVar33 = uVar19 / (uVar27 * 0x18);
                        }
                        if ((long)uVar33 <= (long)uVar30) {
                          uVar30 = uVar33;
                        }
                        if ((long)uVar30 < 7) {
                          uVar19 = uVar27;
                          if (uVar30 == 0) goto LAB_109934dd8;
                        }
                        else {
                          uVar30 = ((uVar30 / 6) * 2 + uVar30 / 6) * 2;
                        }
                        lVar53 = 0;
                        if (uVar30 != 0) {
                          lVar53 = (long)uVar24 / (long)uVar30;
                        }
                        lVar11 = uVar24 - lVar53 * uVar30;
                        if (lVar11 != 0) {
                          lVar31 = lVar53 * 6 + 6;
                          lVar53 = 0;
                          if (lVar31 != 0) {
                            lVar53 = (long)(uVar30 - lVar11) / lVar31;
                          }
                          uVar30 = uVar30 + lVar53 * -6;
                        }
                        *(ulong *)((long)plVar3 + -0x2c0) = uVar30;
                        uVar19 = uVar27;
                        uVar34 = uVar30;
                      }
                    }
LAB_109934dd8:
                    lVar53 = *(long *)((long)plVar3 + -0x468) + lVar48 * 8 + lVar49 * lVar28 * 8;
                    *(ulong *)((long)plVar3 + -0x2a8) = uVar34 * uVar19;
                    *(ulong *)((long)plVar3 + -0x2a0) = uVar19 * uVar36;
                    uVar54 = *(undefined8 *)(*(long *)((long)plVar3 + -0x460) + 0x10);
                    *(undefined8 *)((long)plVar3 + -0x550) = *(undefined8 *)((long)plVar3 + -0x370);
                    *(undefined1 **)((long)plVar3 + -0x548) = (undefined1 *)((long)plVar3 + -0x2d0);
                    FUN_109937e78(0x3ff0000000000000,uVar24,uVar36,uVar27,
                                  *(undefined8 *)((long)plVar3 + -0x450),uVar54,lVar53,
                                  *(undefined8 *)((long)plVar3 + -0x438),
                                  *(undefined8 *)((long)plVar3 + -0x378));
                    _free(*(undefined8 *)((long)plVar3 + -0x2d0));
                    _free(*(undefined8 *)((long)plVar3 + -0x2c8));
                    *(undefined1 **)((long)plVar3 + -0x388) = (undefined1 *)((long)plVar3 + -0x360);
                    *(undefined1 **)((long)plVar3 + -0x380) = (undefined1 *)((long)plVar3 + -0x378);
                    *(undefined8 *)((long)plVar3 + -0x2c8) = 0;
                    *(undefined8 *)((long)plVar3 + -0x2d0) = 0;
                    *(undefined8 *)((long)plVar3 + -0x2c0) = 0;
                    FUN_109911fd0((undefined1 *)((long)plVar3 + -0x2d0),
                                  (undefined1 *)((long)plVar3 + -0x388),
                                  (undefined1 *)((long)plVar3 + -0x341));
                    puVar51 = *(undefined8 **)((long)plVar3 + -0x2d0);
                    lVar49 = *(long *)((long)plVar3 + -0x2c8);
                    lVar48 = *(long *)((long)plVar3 + -0x2c0);
                    if ((*(long *)((long)plVar3 + -0x370) != lVar49) ||
                       (*(long *)((long)plVar3 + -0x368) != lVar48)) {
                      if ((lVar49 != 0) && (lVar48 != 0)) {
                        lVar28 = 0;
                        if (lVar48 != 0) {
                          lVar28 = 0x7fffffffffffffff / lVar48;
                        }
                        if (lVar49 <= lVar28) goto LAB_109934ea8;
                        goto LAB_109935fe8;
                      }
LAB_109934ea8:
                      uVar19 = lVar48 * lVar49;
                      if (*(long *)((long)plVar3 + -0x368) * *(long *)((long)plVar3 + -0x370) -
                          uVar19 != 0) {
                        _free(*(undefined8 *)((long)plVar3 + -0x378));
                        if (0 < (long)uVar19) {
                          if (uVar19 >> 0x3d == 0) {
                            lVar28 = uVar19 * 8;
                            _malloc();
                            if (lVar28 != 0) goto LAB_109934ee4;
                          }
LAB_109935fe8:
                          ___cxa_allocate_exception(8);
                          __ZNSt9bad_allocC1Ev();
                          ___cxa_throw();
                          goto LAB_109936200;
                        }
                        lVar28 = 0;
LAB_109934ee4:
                        *(long *)((long)plVar3 + -0x378) = lVar28;
                      }
                      *(long *)((long)plVar3 + -0x370) = lVar49;
                      *(long *)((long)plVar3 + -0x368) = lVar48;
                    }
                    lVar48 = lVar48 * lVar49;
                    puVar46 = *(undefined8 **)((long)plVar3 + -0x378);
                    uVar19 = lVar48 - (lVar48 >> 0x3f) & 0xfffffffffffffffe;
                    if (1 < lVar48) {
                      lVar49 = 0;
                      puVar23 = puVar46;
                      puVar29 = puVar51;
                      do {
                        uVar54 = *puVar29;
                        puVar23[1] = puVar29[1];
                        *puVar23 = uVar54;
                        lVar49 = lVar49 + 2;
                        puVar23 = puVar23 + 2;
                        puVar29 = puVar29 + 2;
                      } while (lVar49 < (long)uVar19);
                    }
                    lVar49 = lVar48 % 2;
                    if (lVar49 != 0 && lVar49 < 0 == SBORROW8(lVar48,uVar19)) {
                      puVar46 = puVar46 + (lVar48 / 2) * 2;
                      puVar51 = puVar51 + (lVar48 / 2) * 2;
                      do {
                        *puVar46 = *puVar51;
                        lVar49 = lVar49 + -1;
                        puVar46 = puVar46 + 1;
                        puVar51 = puVar51 + 1;
                      } while (lVar49 != 0);
                    }
                    _free(*(undefined8 *)((long)plVar3 + -0x2d0));
                    uVar36 = *(ulong *)((long)plVar3 + -0x368);
                    *(undefined8 *)((long)plVar3 + -0x2c8) = 0;
                    *(undefined8 *)((long)plVar3 + -0x2d0) = 0;
                    *(ulong *)((long)plVar3 + -0x2c0) = uVar27;
                    *(ulong *)((long)plVar3 + -0x2b8) = uVar36;
                    *(ulong *)((long)plVar3 + -0x2b0) = uVar24;
                    uVar19 = *(ulong *)((long)plVar3 + -0x480);
                    if ((bRam00000001132dfa18 & 1) == 0) {
                      iVar6 = 0x132dfa18;
                      ___cxa_guard_acquire();
                      if (iVar6 != 0) {
                        uRam00000001132dfa08 = *(ulong *)((long)plVar3 + -0x4a8);
                        uRam00000001132dfa00 = *(ulong *)((long)plVar3 + -0x4b0);
                        lRam00000001132dfa10 = 0x80000;
                        ___cxa_guard_release(0x1132dfa18);
                      }
                    }
                    uVar30 = uVar27;
                    if ((long)uVar27 <= (long)uVar36) {
                      uVar30 = uVar36;
                    }
                    uVar34 = uVar24;
                    uVar33 = uVar27;
                    if (0x2f < (long)uVar30) {
                      uVar30 = (long)(uRam00000001132dfa00 - 0xc0) / 0x140 & 0xfffffffffffffff8;
                      if ((long)uVar30 < 2) {
                        uVar30 = 1;
                      }
                      if ((long)uVar30 < (long)uVar24) {
                        uVar37 = 0;
                        if (uVar30 != 0) {
                          uVar37 = uVar24 / uVar30;
                        }
                        uVar38 = uVar24 - uVar37 * uVar30;
                        uVar34 = uVar30;
                        if (uVar38 != 0) {
                          lVar48 = uVar37 * 8 + 8;
                          lVar49 = 0;
                          if (lVar48 != 0) {
                            lVar49 = (long)(uVar30 + ~uVar38) / lVar48;
                          }
                          uVar34 = uVar30 + lVar49 * -8;
                        }
                        *(ulong *)((long)plVar3 + -0x2b0) = uVar34;
                      }
                      uVar37 = (uRam00000001132dfa00 - 0xc0) + uVar27 * uVar34 * -8;
                      if ((long)uVar37 < (long)(uVar34 * 0x20)) {
                        uVar38 = 0;
                        if (uVar30 << 5 != 0) {
                          uVar38 = 0x480000 / (uVar30 << 5);
                        }
                      }
                      else {
                        uVar38 = 0;
                        if (uVar34 << 3 != 0) {
                          uVar38 = uVar37 / (uVar34 << 3);
                        }
                      }
                      uVar30 = 0;
                      if (uVar34 << 4 != 0) {
                        uVar30 = 0x180000 / (uVar34 << 4);
                      }
                      if ((long)uVar30 <= (long)uVar38) {
                        uVar38 = uVar30;
                      }
                      if ((uVar24 == uVar34) &&
                         ((long)uVar36 <= (long)(uVar38 & 0xfffffffffffffffc))) {
                        uVar34 = uVar24 * uVar36 * 8;
                        uVar30 = uRam00000001132dfa00;
                        uVar37 = uVar27;
                        if (0x400 < (long)uVar34) {
                          if (0x23f < (long)uVar27) {
                            uVar37 = 0x240;
                          }
                          uVar30 = uRam00000001132dfa08;
                          if (0x8000 < uVar34 || lRam00000001132dfa10 == 0) {
                            uVar30 = 0x180000;
                            uVar37 = uVar27;
                          }
                        }
                        uVar34 = 0;
                        if (uVar24 * 0x18 != 0) {
                          uVar34 = uVar30 / (uVar24 * 0x18);
                        }
                        if ((long)uVar34 <= (long)uVar37) {
                          uVar37 = uVar34;
                        }
                        if ((long)uVar37 < 7) {
                          uVar34 = uVar24;
                          if (uVar37 == 0) goto LAB_109935120;
                        }
                        else {
                          uVar37 = ((uVar37 / 6) * 2 + uVar37 / 6) * 2;
                        }
                        lVar48 = 0;
                        if (uVar37 != 0) {
                          lVar48 = (long)uVar27 / (long)uVar37;
                        }
                        lVar49 = uVar27 - lVar48 * uVar37;
                        if (lVar49 != 0) {
                          lVar28 = lVar48 * 6 + 6;
                          lVar48 = 0;
                          if (lVar28 != 0) {
                            lVar48 = (long)(uVar37 - lVar49) / lVar28;
                          }
                          uVar37 = uVar37 + lVar48 * -6;
                        }
                        *(ulong *)((long)plVar3 + -0x2c0) = uVar37;
                        uVar34 = uVar24;
                        uVar33 = uVar37;
                      }
                    }
LAB_109935120:
                    *(ulong *)((long)plVar3 + -0x2a8) = uVar33 * uVar34;
                    *(ulong *)((long)plVar3 + -0x2a0) = uVar34 * uVar36;
                    uVar54 = *(undefined8 *)(*(long *)((long)plVar3 + -0x460) + 0x10);
                    *(undefined8 *)((long)plVar3 + -0x550) = *(undefined8 *)((long)plVar3 + -0x438);
                    *(undefined1 **)((long)plVar3 + -0x548) = (undefined1 *)((long)plVar3 + -0x2d0);
                    FUN_109938528(0xbff0000000000000,uVar27,uVar36,uVar24,
                                  *(undefined8 *)((long)plVar3 + -0x450),uVar54,
                                  *(undefined8 *)((long)plVar3 + -0x378),
                                  *(undefined8 *)((long)plVar3 + -0x370),lVar53);
                    uVar27 = *(ulong *)((long)plVar3 + -0x4a0);
                    lVar53 = *(long *)((long)plVar3 + -0x478) + uVar27;
                    _free(*(undefined8 *)((long)plVar3 + -0x2d0));
                    _free(*(undefined8 *)((long)plVar3 + -0x2c8));
                    _free(*(undefined8 *)((long)plVar3 + -0x378));
                    _free(*(undefined8 *)((long)plVar3 + -0x360));
                    plVar39 = *(long **)((long)plVar3 + -0x490);
                    if ((long)uVar19 <= lVar53) {
                      pdVar45 = (double *)0x0;
                      goto LAB_1099356bc;
                    }
                  } while( true );
                }
                bVar5 = true;
                puVar10[0xb8] = 1;
              }
LAB_109934974:
              _free(*(undefined8 *)((long)plVar3 + -0x3c0));
              _free(*(undefined8 *)((long)plVar3 + -0x3d0));
              _free(*(undefined8 *)((long)plVar3 + -0x3e0));
              _free(*(undefined8 *)((long)plVar3 + -0x3f0));
              _free(*(undefined8 *)((long)plVar3 + -0x400));
              _free(*(undefined8 *)((long)plVar3 + -0x410));
              _free(*(undefined8 *)((long)plVar3 + -0x428));
              _free(*(undefined8 *)((long)plVar3 + -0x498));
              if (bVar5) {
                FUN_109936ecc(puVar10,*(undefined8 *)((long)plVar3 + -0x470));
              }
              else {
LAB_1099349c8:
                uVar52 = 2;
              }
            }
            else if (*(int *)(puVar10 + 0xb4) == 0) {
              FUN_109936460(puVar10,*(undefined8 *)((long)plVar3 + -0x470));
            }
          }
LAB_1099349cc:
          if ((int)uVar55 < 0) {
            __ZdlPv(*(undefined8 *)((long)plVar3 + -0x448));
          }
          uVar55 = *(uint *)((long)plVar3 + -0x454);
          goto LAB_1099349dc;
        }
        uVar55 = 0xffffffff;
        uVar52 = 2;
        uVar54 = 0xbff0000000000000;
LAB_1099349dc:
        uVar27 = (ulong)uVar52 << 0x20;
        uVar19 = (ulong)uVar55;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar3 + -0x210)) {
        auVar69._8_8_ = uVar27 | uVar19;
        auVar69._0_8_ = uVar54;
        return auVar69;
      }
      ___stack_chk_fail();
LAB_109935f58:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
LAB_109936200:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109936204);
      (*pcVar2)();
    }
    *(undefined8 *)((long)plVar3 + -0x428) = 0;
    *(undefined8 *)((long)plVar3 + -0x3d0) = 0;
    *(undefined8 *)((long)plVar3 + -0x410) = 0;
    *(undefined8 *)((long)plVar3 + -0x418) = 0;
    *(undefined8 *)((long)plVar3 + -0x400) = 0;
    *(undefined8 *)((long)plVar3 + -0x408) = 0;
    *(undefined8 *)((long)plVar3 + -0x3f0) = 0;
    *(undefined8 *)((long)plVar3 + -0x3f8) = 0;
    *(undefined8 *)((long)plVar3 + -0x3e0) = 0;
    *(undefined8 *)((long)plVar3 + -1000) = 0;
    *(undefined4 *)((long)plVar3 + -0x3d8) = 0;
    FUN_1099a9f0c((undefined1 *)((long)plVar3 + -0x428),&UNK_10f58b708,0x56,3,FUN_1099aa768,0);
    pdVar45 = (double *)&UNK_10f58b821;
    FUN_1092b4db8(*(long *)((long)plVar3 + -0x420) + 0x7540,&UNK_10f58b821,0x1e);
  }
  puVar26 = (undefined1 *)((long)plVar3 + -0x428);
  func_0x0001099ab7c0();
  puVar9 = puVar26;
  __Unwind_Resume();
  puVar10 = (undefined1 *)((long)plVar3 + -0x5d0);
  *(undefined1 **)((long)plVar3 + -0x570) = puVar26;
  *(undefined8 **)((long)plVar3 + -0x568) = puVar46;
  *(undefined1 **)((long)plVar3 + -0x560) = (undefined1 *)((long)plVar3 + -0x1a0);
  *(code **)((long)plVar3 + -0x558) = FUN_109936460;
  puVar26 = *(undefined1 **)(puVar9 + 0x88);
  dVar21 = 0.0;
  dVar57 = 0.0;
  if (puVar26 != (undefined1 *)0x0) {
    pdVar22 = *(double **)(puVar9 + 0x80);
    puVar13 = puVar26 + 3;
    if (-1 < (long)puVar26) {
      puVar13 = puVar26;
    }
    if (puVar26 + 1 < (undefined1 *)0x3) {
      dVar57 = *pdVar22 * *pdVar22;
    }
    else {
      uVar19 = (long)puVar26 - ((long)puVar26 >> 0x3f) & 0xfffffffffffffffe;
      dVar57 = *pdVar22 * *pdVar22;
      dVar59 = pdVar22[1] * pdVar22[1];
      if (3 < (long)puVar26) {
        uVar27 = (ulong)puVar13 & 0xfffffffffffffffc;
        dVar60 = pdVar22[2] * pdVar22[2];
        dVar63 = pdVar22[3] * pdVar22[3];
        if ((undefined1 *)0x7 < puVar26) {
          pdVar35 = pdVar22 + 6;
          lVar53 = 4;
          do {
            dVar57 = dVar57 + pdVar35[-2] * pdVar35[-2];
            dVar59 = dVar59 + pdVar35[-1] * pdVar35[-1];
            dVar60 = dVar60 + *pdVar35 * *pdVar35;
            dVar63 = dVar63 + pdVar35[1] * pdVar35[1];
            lVar53 = lVar53 + 4;
            pdVar35 = pdVar35 + 4;
          } while (lVar53 < (long)uVar27);
        }
        dVar57 = dVar60 + dVar57;
        dVar59 = dVar63 + dVar59;
        if ((long)uVar27 < (long)uVar19) {
          dVar63 = (pdVar22 + uVar27)[1];
          dVar60 = pdVar22[uVar27];
          dVar57 = dVar57 + dVar60 * dVar60;
          dVar59 = dVar59 + dVar63 * dVar63;
        }
      }
      dVar57 = dVar57 + dVar59;
      lVar53 = (long)puVar26 % 2;
      if (lVar53 != 0 && lVar53 < 0 == SBORROW8((long)puVar26,uVar19)) {
        pdVar22 = pdVar22 + ((long)puVar26 / 2) * 2;
        do {
          dVar57 = dVar57 + *pdVar22 * *pdVar22;
          lVar53 = lVar53 + -1;
          pdVar22 = pdVar22 + 1;
        } while (lVar53 != 0);
      }
    }
  }
  uVar19 = *(ulong *)(puVar9 + 0x98);
  if (uVar19 != 0) {
    pdVar22 = *(double **)(puVar9 + 0x90);
    uVar27 = uVar19 + 3;
    if (-1 < (long)uVar19) {
      uVar27 = uVar19;
    }
    if (uVar19 + 1 < 3) {
      dVar21 = *pdVar22 * *pdVar22;
    }
    else {
      uVar24 = uVar19 - ((long)uVar19 >> 0x3f) & 0xfffffffffffffffe;
      dVar21 = *pdVar22 * *pdVar22;
      dVar59 = pdVar22[1] * pdVar22[1];
      if (3 < (long)uVar19) {
        uVar27 = uVar27 & 0xfffffffffffffffc;
        dVar60 = pdVar22[2] * pdVar22[2];
        dVar63 = pdVar22[3] * pdVar22[3];
        if (7 < uVar19) {
          pdVar35 = pdVar22 + 6;
          lVar53 = 4;
          do {
            dVar21 = dVar21 + pdVar35[-2] * pdVar35[-2];
            dVar59 = dVar59 + pdVar35[-1] * pdVar35[-1];
            dVar60 = dVar60 + *pdVar35 * *pdVar35;
            dVar63 = dVar63 + pdVar35[1] * pdVar35[1];
            lVar53 = lVar53 + 4;
            pdVar35 = pdVar35 + 4;
          } while (lVar53 < (long)uVar27);
        }
        dVar21 = dVar60 + dVar21;
        dVar59 = dVar63 + dVar59;
        if ((long)uVar27 < (long)uVar24) {
          dVar63 = (pdVar22 + uVar27)[1];
          dVar60 = pdVar22[uVar27];
          dVar21 = dVar21 + dVar60 * dVar60;
          dVar59 = dVar59 + dVar63 * dVar63;
        }
      }
      dVar21 = dVar21 + dVar59;
      lVar53 = (long)uVar19 % 2;
      if (lVar53 != 0 && lVar53 < 0 == SBORROW8(uVar19,uVar24)) {
        pdVar22 = pdVar22 + ((long)uVar19 / 2) * 2;
        do {
          dVar21 = dVar21 + *pdVar22 * *pdVar22;
          lVar53 = lVar53 + -1;
          pdVar22 = pdVar22 + 1;
        } while (lVar53 != 0);
      }
    }
  }
  dVar21 = SQRT(dVar21);
  dVar59 = *(double *)(puVar9 + 0x10);
  puVar13 = puVar9;
  if (dVar21 <= dVar59) {
    pdVar22 = *(double **)(puVar9 + 0x90);
    puVar32 = (undefined1 *)((ulong)pdVar45 >> 3 & 1);
    if ((long)puVar26 <= (long)puVar32) {
      puVar32 = puVar26;
    }
    if (((ulong)pdVar45 & 7) != 0) {
      puVar32 = puVar26;
    }
    lVar53 = (long)puVar26 - (long)puVar32;
    pdVar35 = pdVar45;
    pdVar18 = pdVar22;
    puVar12 = puVar32;
    if (0 < (long)puVar32) {
      do {
        *pdVar35 = *pdVar18;
        puVar12 = puVar12 + -1;
        pdVar35 = pdVar35 + 1;
        pdVar18 = pdVar18 + 1;
      } while (puVar12 != (undefined1 *)0x0);
    }
    puVar12 = puVar32 + (lVar53 - (lVar53 >> 0x3f) & 0xfffffffffffffffe);
    if (1 < lVar53) {
      pdVar35 = pdVar22 + (long)puVar32;
      puVar42 = puVar32;
      pdVar18 = pdVar45 + (long)puVar32;
      do {
        dVar57 = *pdVar35;
        pdVar18[1] = pdVar35[1];
        *pdVar18 = dVar57;
        puVar42 = puVar42 + 2;
        pdVar35 = pdVar35 + 2;
        pdVar18 = pdVar18 + 2;
      } while ((long)puVar42 < (long)puVar12);
    }
    lVar48 = lVar53 / 2;
    if ((long)puVar12 < (long)puVar26) {
      lVar49 = lVar53 % 2;
      pdVar22 = pdVar22 + (long)(puVar32 + lVar48 * 2);
      pdVar35 = pdVar45 + (long)(puVar32 + lVar48 * 2);
      do {
        *pdVar35 = *pdVar22;
        lVar49 = lVar49 + -1;
        pdVar22 = pdVar22 + 1;
        pdVar35 = pdVar35 + 1;
      } while (lVar49 != 0);
    }
    *(double *)(puVar9 + 0xa8) = dVar21;
    pdVar18 = *(double **)(puVar9 + 0x60);
    pdVar22 = pdVar45;
    pdVar35 = pdVar18;
    puVar42 = puVar32;
    if (0 < (long)puVar32) {
      do {
        *pdVar22 = *pdVar22 / *pdVar35;
        puVar42 = puVar42 + -1;
        pdVar22 = pdVar22 + 1;
        pdVar35 = pdVar35 + 1;
      } while (puVar42 != (undefined1 *)0x0);
    }
    if (1 < lVar53) {
      pdVar22 = pdVar18 + (long)puVar32;
      puVar42 = puVar32;
      pdVar35 = pdVar45 + (long)puVar32;
      do {
        dVar21 = *pdVar22;
        pdVar35[1] = pdVar35[1] / pdVar22[1];
        *pdVar35 = *pdVar35 / dVar21;
        puVar42 = puVar42 + 2;
        pdVar22 = pdVar22 + 2;
        pdVar35 = pdVar35 + 2;
      } while ((long)puVar42 < (long)puVar12);
    }
    if ((long)puVar12 < (long)puVar26) {
      lVar53 = lVar53 % 2;
      pdVar22 = pdVar18 + (long)(puVar32 + lVar48 * 2);
      pdVar35 = pdVar45 + (long)(puVar32 + lVar48 * 2);
      do {
        *pdVar35 = *pdVar35 / *pdVar22;
        lVar53 = lVar53 + -1;
        pdVar22 = pdVar22 + 1;
        pdVar35 = pdVar35 + 1;
      } while (lVar53 != 0);
    }
    if (piRam000000011373cbc0 == (int *)0x0) {
      puVar13 = (undefined1 *)0x11373cbc0;
      pdVar45 = (double *)0x11382bb14;
      FUN_1099adbb8(0x11373cbc0,0x11382bb14,&UNK_10f58b708,3);
      if (((ulong)puVar13 & 1) == 0) goto LAB_109936ea0;
    }
    else if (*piRam000000011373cbc0 < 3) goto LAB_109936ea0;
    *(undefined8 *)((long)plVar3 + -0x5d0) = 0;
    *(undefined8 *)((long)plVar3 + -0x578) = 0;
    *(undefined8 *)((long)plVar3 + -0x5b8) = 0;
    *(undefined8 *)((long)plVar3 + -0x5c0) = 0;
    *(undefined8 *)((long)plVar3 + -0x5a8) = 0;
    *(undefined8 *)((long)plVar3 + -0x5b0) = 0;
    *(undefined8 *)((long)plVar3 + -0x598) = 0;
    *(undefined8 *)((long)plVar3 + -0x5a0) = 0;
    *(undefined8 *)((long)plVar3 + -0x588) = 0;
    *(undefined8 *)((long)plVar3 + -0x590) = 0;
    *(undefined4 *)((long)plVar3 + -0x580) = 0;
    FUN_1099a9f0c((undefined1 *)((long)plVar3 + -0x5d0),&UNK_10f58b708,0xd2,0,FUN_1099aa768,0);
    FUN_1092b4db8(*(long *)((long)plVar3 + -0x5c8) + 0x7540,&UNK_10f58b840,0x17);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(*(undefined8 *)(puVar9 + 0xa8));
    pdVar45 = (double *)&UNK_10f58b858;
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(*(undefined8 *)(puVar9 + 0x10));
  }
  else {
    dVar60 = SQRT(dVar57) * *(double *)(puVar9 + 0xa0);
    if (dVar59 <= dVar60) {
      pdVar22 = *(double **)(puVar9 + 0x80);
      puVar32 = (undefined1 *)((ulong)pdVar45 >> 3 & 1);
      if ((long)puVar26 <= (long)puVar32) {
        puVar32 = puVar26;
      }
      if (((ulong)pdVar45 & 7) != 0) {
        puVar32 = puVar26;
      }
      lVar53 = (long)puVar26 - (long)puVar32;
      dVar21 = -dVar59 / SQRT(dVar57);
      pdVar35 = pdVar45;
      pdVar18 = pdVar22;
      puVar12 = puVar32;
      if (0 < (long)puVar32) {
        do {
          *pdVar35 = dVar21 * *pdVar18;
          puVar12 = puVar12 + -1;
          pdVar35 = pdVar35 + 1;
          pdVar18 = pdVar18 + 1;
        } while (puVar12 != (undefined1 *)0x0);
      }
      puVar12 = puVar32 + (lVar53 - (lVar53 >> 0x3f) & 0xfffffffffffffffe);
      if (1 < lVar53) {
        pdVar35 = pdVar22 + (long)puVar32;
        puVar42 = puVar32;
        pdVar18 = pdVar45 + (long)puVar32;
        do {
          dVar57 = *pdVar35;
          pdVar18[1] = pdVar35[1] * dVar21;
          *pdVar18 = dVar57 * dVar21;
          puVar42 = puVar42 + 2;
          pdVar35 = pdVar35 + 2;
          pdVar18 = pdVar18 + 2;
        } while ((long)puVar42 < (long)puVar12);
      }
      lVar48 = lVar53 / 2;
      if ((long)puVar12 < (long)puVar26) {
        lVar49 = lVar53 % 2;
        pdVar22 = pdVar22 + (long)(puVar32 + lVar48 * 2);
        pdVar35 = pdVar45 + (long)(puVar32 + lVar48 * 2);
        do {
          *pdVar35 = dVar21 * *pdVar22;
          lVar49 = lVar49 + -1;
          pdVar22 = pdVar22 + 1;
          pdVar35 = pdVar35 + 1;
        } while (lVar49 != 0);
      }
      *(undefined8 *)(puVar9 + 0xa8) = *(undefined8 *)(puVar9 + 0x10);
      pdVar18 = *(double **)(puVar9 + 0x60);
      pdVar22 = pdVar45;
      pdVar35 = pdVar18;
      puVar42 = puVar32;
      if (0 < (long)puVar32) {
        do {
          *pdVar22 = *pdVar22 / *pdVar35;
          puVar42 = puVar42 + -1;
          pdVar22 = pdVar22 + 1;
          pdVar35 = pdVar35 + 1;
        } while (puVar42 != (undefined1 *)0x0);
      }
      if (1 < lVar53) {
        pdVar22 = pdVar18 + (long)puVar32;
        puVar42 = puVar32;
        pdVar35 = pdVar45 + (long)puVar32;
        do {
          dVar21 = *pdVar22;
          pdVar35[1] = pdVar35[1] / pdVar22[1];
          *pdVar35 = *pdVar35 / dVar21;
          puVar42 = puVar42 + 2;
          pdVar22 = pdVar22 + 2;
          pdVar35 = pdVar35 + 2;
        } while ((long)puVar42 < (long)puVar12);
      }
      if ((long)puVar12 < (long)puVar26) {
        lVar53 = lVar53 % 2;
        pdVar22 = pdVar18 + (long)(puVar32 + lVar48 * 2);
        pdVar35 = pdVar45 + (long)(puVar32 + lVar48 * 2);
        do {
          *pdVar35 = *pdVar35 / *pdVar22;
          lVar53 = lVar53 + -1;
          pdVar22 = pdVar22 + 1;
          pdVar35 = pdVar35 + 1;
        } while (lVar53 != 0);
      }
      if (piRam000000011373cbe0 == (int *)0x0) {
        puVar13 = (undefined1 *)0x11373cbe0;
        pdVar45 = (double *)0x11382bb14;
        FUN_1099adbb8(0x11373cbe0,0x11382bb14,&UNK_10f58b708,3);
        if (((ulong)puVar13 & 1) == 0) goto LAB_109936ea0;
      }
      else if (*piRam000000011373cbe0 < 3) goto LAB_109936ea0;
      *(undefined8 *)((long)plVar3 + -0x5d0) = 0;
      *(undefined8 *)((long)plVar3 + -0x578) = 0;
      *(undefined8 *)((long)plVar3 + -0x5b8) = 0;
      *(undefined8 *)((long)plVar3 + -0x5c0) = 0;
      *(undefined8 *)((long)plVar3 + -0x5a8) = 0;
      *(undefined8 *)((long)plVar3 + -0x5b0) = 0;
      *(undefined8 *)((long)plVar3 + -0x598) = 0;
      *(undefined8 *)((long)plVar3 + -0x5a0) = 0;
      *(undefined8 *)((long)plVar3 + -0x588) = 0;
      *(undefined8 *)((long)plVar3 + -0x590) = 0;
      *(undefined4 *)((long)plVar3 + -0x580) = 0;
      FUN_1099a9f0c((undefined1 *)((long)plVar3 + -0x5d0),&UNK_10f58b708,0xde,0,FUN_1099aa768,0);
      FUN_1092b4db8(*(long *)((long)plVar3 + -0x5c8) + 0x7540,&UNK_10f58b862,0x12);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(*(undefined8 *)(puVar9 + 0xa8));
      pdVar45 = (double *)&UNK_10f58b858;
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(*(undefined8 *)(puVar9 + 0x10));
    }
    else {
      dVar57 = -*(double *)(puVar9 + 0xa0);
      if (uVar19 == 0) {
        dVar63 = 0.0;
      }
      else {
        pdVar22 = *(double **)(puVar9 + 0x80);
        pdVar35 = *(double **)(puVar9 + 0x90);
        uVar27 = uVar19 + 3;
        if (-1 < (long)uVar19) {
          uVar27 = uVar19;
        }
        if (uVar19 + 1 < 3) {
          dVar63 = *pdVar22 * *pdVar35;
        }
        else {
          uVar24 = uVar19 - ((long)uVar19 >> 0x3f) & 0xfffffffffffffffe;
          dVar63 = *pdVar22 * *pdVar35;
          dVar58 = pdVar22[1] * pdVar35[1];
          if (3 < (long)uVar19) {
            uVar27 = uVar27 & 0xfffffffffffffffc;
            dVar64 = pdVar22[2] * pdVar35[2];
            dVar65 = pdVar22[3] * pdVar35[3];
            if (7 < uVar19) {
              pdVar18 = pdVar35 + 6;
              pdVar41 = pdVar22 + 6;
              lVar53 = 4;
              do {
                dVar63 = dVar63 + pdVar41[-2] * pdVar18[-2];
                dVar58 = dVar58 + pdVar41[-1] * pdVar18[-1];
                dVar64 = dVar64 + *pdVar41 * *pdVar18;
                dVar65 = dVar65 + pdVar41[1] * pdVar18[1];
                lVar53 = lVar53 + 4;
                pdVar18 = pdVar18 + 4;
                pdVar41 = pdVar41 + 4;
              } while (lVar53 < (long)uVar27);
            }
            dVar63 = dVar64 + dVar63;
            dVar58 = dVar65 + dVar58;
            if ((long)uVar27 < (long)uVar24) {
              dVar63 = dVar63 + pdVar22[uVar27] * pdVar35[uVar27];
              dVar58 = dVar58 + (pdVar22 + uVar27)[1] * (pdVar35 + uVar27)[1];
            }
          }
          dVar63 = dVar63 + dVar58;
          lVar53 = (long)uVar19 % 2;
          if (lVar53 != 0 && lVar53 < 0 == SBORROW8(uVar19,uVar24)) {
            pdVar22 = pdVar22 + ((long)uVar19 / 2) * 2;
            pdVar35 = pdVar35 + ((long)uVar19 / 2) * 2;
            do {
              dVar63 = dVar63 + *pdVar22 * *pdVar35;
              lVar53 = lVar53 + -1;
              pdVar22 = pdVar22 + 1;
              pdVar35 = pdVar35 + 1;
            } while (lVar53 != 0);
          }
        }
      }
      dVar63 = dVar63 * dVar57;
      dVar60 = dVar60 * dVar60;
      dVar58 = dVar21 * dVar21 + dVar60 + dVar63 * -2.0;
      dVar63 = dVar63 - dVar60;
      dVar64 = SQRT((dVar59 * dVar59 - dVar60) * dVar58 + dVar63 * dVar63);
      dVar21 = (dVar59 * dVar59 - dVar60) / (dVar63 + dVar64);
      if (dVar63 <= 0.0) {
        dVar21 = (dVar64 - dVar63) / dVar58;
      }
      dVar57 = (1.0 - dVar21) * dVar57;
      pdVar22 = *(double **)(puVar9 + 0x80);
      pdVar35 = *(double **)(puVar9 + 0x90);
      puVar32 = (undefined1 *)((ulong)pdVar45 >> 3 & 1);
      if ((long)puVar26 <= (long)puVar32) {
        puVar32 = puVar26;
      }
      if (((ulong)pdVar45 & 7) != 0) {
        puVar32 = puVar26;
      }
      lVar53 = (long)puVar26 - (long)puVar32;
      puVar12 = puVar32;
      pdVar18 = pdVar45;
      pdVar41 = pdVar22;
      pdVar44 = pdVar35;
      if (0 < (long)puVar32) {
        do {
          *pdVar18 = dVar57 * *pdVar41 + dVar21 * *pdVar44;
          puVar12 = puVar12 + -1;
          puVar13 = (undefined1 *)0x0;
          pdVar18 = pdVar18 + 1;
          pdVar41 = pdVar41 + 1;
          pdVar44 = pdVar44 + 1;
        } while (puVar12 != (undefined1 *)0x0);
      }
      puVar12 = puVar32 + (lVar53 - (lVar53 >> 0x3f) & 0xfffffffffffffffe);
      if (1 < lVar53) {
        puVar13 = puVar32;
        pdVar18 = pdVar45 + (long)puVar32;
        pdVar41 = pdVar35 + (long)puVar32;
        pdVar44 = pdVar22 + (long)puVar32;
        do {
          dVar59 = *pdVar44;
          dVar60 = *pdVar41;
          pdVar18[1] = pdVar44[1] * dVar57 + pdVar41[1] * dVar21;
          *pdVar18 = dVar59 * dVar57 + dVar60 * dVar21;
          puVar13 = puVar13 + 2;
          pdVar18 = pdVar18 + 2;
          pdVar41 = pdVar41 + 2;
          pdVar44 = pdVar44 + 2;
        } while ((long)puVar13 < (long)puVar12);
      }
      lVar48 = lVar53 / 2;
      if ((long)puVar12 < (long)puVar26) {
        lVar49 = lVar53 % 2;
        pdVar22 = pdVar22 + (long)(puVar32 + lVar48 * 2);
        pdVar35 = pdVar35 + (long)(puVar32 + lVar48 * 2);
        pdVar18 = pdVar45 + (long)(puVar32 + lVar48 * 2);
        do {
          *pdVar18 = dVar57 * *pdVar22 + dVar21 * *pdVar35;
          lVar49 = lVar49 + -1;
          pdVar22 = pdVar22 + 1;
          pdVar35 = pdVar35 + 1;
          pdVar18 = pdVar18 + 1;
        } while (lVar49 != 0);
      }
      if (puVar26 == (undefined1 *)0x0) {
        dVar21 = 0.0;
      }
      else {
        puVar42 = puVar26 + 3;
        if (-1 < (long)puVar26) {
          puVar42 = puVar26;
        }
        if (puVar26 + 1 < (undefined1 *)0x3) {
          dVar21 = *pdVar45 * *pdVar45;
        }
        else {
          uVar19 = (long)puVar26 - ((long)puVar26 >> 0x3f) & 0xfffffffffffffffe;
          dVar21 = *pdVar45 * *pdVar45;
          dVar57 = pdVar45[1] * pdVar45[1];
          if (3 < (long)puVar26) {
            uVar27 = (ulong)puVar42 & 0xfffffffffffffffc;
            dVar59 = pdVar45[2] * pdVar45[2];
            dVar60 = pdVar45[3] * pdVar45[3];
            if ((undefined1 *)0x7 < puVar26) {
              pdVar22 = pdVar45 + 6;
              puVar13 = (undefined1 *)0x4;
              do {
                dVar21 = dVar21 + pdVar22[-2] * pdVar22[-2];
                dVar57 = dVar57 + pdVar22[-1] * pdVar22[-1];
                dVar59 = dVar59 + *pdVar22 * *pdVar22;
                dVar60 = dVar60 + pdVar22[1] * pdVar22[1];
                puVar13 = puVar13 + 4;
                pdVar22 = pdVar22 + 4;
              } while ((long)puVar13 < (long)uVar27);
            }
            dVar21 = dVar59 + dVar21;
            dVar57 = dVar60 + dVar57;
            if ((long)uVar27 < (long)uVar19) {
              dVar60 = (pdVar45 + uVar27)[1];
              dVar59 = pdVar45[uVar27];
              dVar21 = dVar21 + dVar59 * dVar59;
              dVar57 = dVar57 + dVar60 * dVar60;
            }
          }
          dVar21 = dVar21 + dVar57;
          lVar49 = (long)puVar26 % 2;
          if (lVar49 != 0 && lVar49 < 0 == SBORROW8((long)puVar26,uVar19)) {
            pdVar22 = pdVar45 + ((long)puVar26 / 2) * 2;
            do {
              dVar21 = dVar21 + *pdVar22 * *pdVar22;
              lVar49 = lVar49 + -1;
              pdVar22 = pdVar22 + 1;
            } while (lVar49 != 0);
          }
        }
      }
      *(double *)(puVar9 + 0xa8) = SQRT(dVar21);
      pdVar18 = *(double **)(puVar9 + 0x60);
      pdVar22 = pdVar45;
      pdVar35 = pdVar18;
      puVar42 = puVar32;
      if (0 < (long)puVar32) {
        do {
          *pdVar22 = *pdVar22 / *pdVar35;
          puVar42 = puVar42 + -1;
          pdVar22 = pdVar22 + 1;
          pdVar35 = pdVar35 + 1;
        } while (puVar42 != (undefined1 *)0x0);
      }
      if (1 < lVar53) {
        pdVar22 = pdVar18 + (long)puVar32;
        puVar42 = puVar32;
        pdVar35 = pdVar45 + (long)puVar32;
        do {
          dVar21 = *pdVar22;
          pdVar35[1] = pdVar35[1] / pdVar22[1];
          *pdVar35 = *pdVar35 / dVar21;
          puVar42 = puVar42 + 2;
          pdVar22 = pdVar22 + 2;
          pdVar35 = pdVar35 + 2;
        } while ((long)puVar42 < (long)puVar12);
      }
      if ((long)puVar12 < (long)puVar26) {
        lVar53 = lVar53 % 2;
        pdVar22 = pdVar18 + (long)(puVar32 + lVar48 * 2);
        pdVar35 = pdVar45 + (long)(puVar32 + lVar48 * 2);
        do {
          *pdVar35 = *pdVar35 / *pdVar22;
          lVar53 = lVar53 + -1;
          pdVar22 = pdVar22 + 1;
          pdVar35 = pdVar35 + 1;
        } while (lVar53 != 0);
      }
      if (piRam000000011373cc00 == (int *)0x0) {
        puVar13 = (undefined1 *)0x11373cc00;
        pdVar45 = (double *)0x11382bb14;
        FUN_1099adbb8(0x11373cc00,0x11382bb14,&UNK_10f58b708,3);
        if (((ulong)puVar13 & 1) == 0) goto LAB_109936ea0;
      }
      else if (*piRam000000011373cc00 < 3) goto LAB_109936ea0;
      *(undefined8 *)((long)plVar3 + -0x5d0) = 0;
      *(undefined8 *)((long)plVar3 + -0x578) = 0;
      *(undefined8 *)((long)plVar3 + -0x5b8) = 0;
      *(undefined8 *)((long)plVar3 + -0x5c0) = 0;
      *(undefined8 *)((long)plVar3 + -0x5a8) = 0;
      *(undefined8 *)((long)plVar3 + -0x5b0) = 0;
      *(undefined8 *)((long)plVar3 + -0x598) = 0;
      *(undefined8 *)((long)plVar3 + -0x5a0) = 0;
      *(undefined8 *)((long)plVar3 + -0x588) = 0;
      *(undefined8 *)((long)plVar3 + -0x590) = 0;
      *(undefined4 *)((long)plVar3 + -0x580) = 0;
      FUN_1099a9f0c((undefined1 *)((long)plVar3 + -0x5d0),&UNK_10f58b708,0xfb,0,FUN_1099aa768,0);
      FUN_1092b4db8(*(long *)((long)plVar3 + -0x5c8) + 0x7540,&UNK_10f58b875,0x12);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(*(undefined8 *)(puVar9 + 0xa8));
      pdVar45 = (double *)&UNK_10f58b858;
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(*(undefined8 *)(puVar9 + 0x10));
    }
  }
  FUN_1099ab3b0((undefined1 *)((long)plVar3 + -0x5d0));
  puVar13 = puVar10;
LAB_109936ea0:
  auVar70._8_8_ = pdVar45;
  auVar70._0_8_ = puVar13;
  return auVar70;
}



/* Entry: 1099333ec; end: 109933a1b;  */

undefined1  [16]
FUN_1099333ec(long *param_1,long **param_2,uint *param_3,int *param_4,code *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  double *****pppppdVar3;
  uint *puVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  double *pdVar9;
  double *****pppppdVar10;
  double *****pppppdVar11;
  double ****ppppdVar12;
  double ****ppppdVar13;
  long *plVar14;
  long lVar15;
  double **ppdVar16;
  bool bVar17;
  double *pdVar18;
  int *piVar19;
  double dVar20;
  double *pdVar21;
  double ****ppppdVar22;
  ulong uVar23;
  double dVar24;
  undefined8 *puVar25;
  double ***pppdVar26;
  bool bVar27;
  double *pdVar28;
  double ***pppdVar29;
  double ***pppdVar30;
  double ***pppdVar31;
  double *****pppppdVar32;
  double *****pppppdVar33;
  long lVar34;
  double ***pppdVar35;
  undefined8 *puVar36;
  bool bVar37;
  double ***pppdVar38;
  long lVar39;
  double *pdVar40;
  double ****ppppdVar41;
  double *****pppppdVar42;
  long lVar43;
  long lVar44;
  double *****pppppdVar45;
  long unaff_x21;
  double *****pppppdVar46;
  uint uVar47;
  long lVar48;
  uint *puVar49;
  ulong uVar50;
  undefined *puVar51;
  double ****ppppdVar52;
  uint uVar53;
  uint *puVar54;
  double *****pppppdVar55;
  double dVar56;
  double ***pppdVar57;
  double dVar58;
  double **ppdVar59;
  double dVar60;
  double ****ppppdVar61;
  double dVar62;
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  double **ppdStack_5d0;
  long lStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined4 uStack_580;
  undefined8 uStack_578;
  double ***pppdStack_570;
  long *plStack_568;
  undefined1 ***pppuStack_560;
  code *pcStack_558;
  double ****ppppdStack_550;
  double ****ppppdStack_548;
  double ****ppppdStack_540;
  undefined8 uStack_538;
  double ***pppdStack_530;
  uint uStack_524;
  ulong uStack_520;
  ulong uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  double ****ppppdStack_500;
  ulong uStack_4f8;
  double ****ppppdStack_4f0;
  double ****ppppdStack_4e8;
  double ***pppdStack_4e0;
  double ****ppppdStack_4d8;
  double ****ppppdStack_4d0;
  ulong uStack_4c8;
  double ****ppppdStack_4c0;
  double ****ppppdStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  double ****ppppdStack_4a0;
  double ***pppdStack_498;
  long *plStack_490;
  double ****ppppdStack_488;
  double ****ppppdStack_480;
  undefined *puStack_478;
  code *pcStack_470;
  double ****ppppdStack_468;
  double ****ppppdStack_460;
  uint uStack_454;
  double ****ppppdStack_450;
  double ****ppppdStack_448;
  double ****ppppdStack_440;
  double ****ppppdStack_438;
  double ****ppppdStack_430;
  double ***pppdStack_428;
  undefined8 uStack_420;
  double ****ppppdStack_418;
  double ****ppppdStack_410;
  undefined8 uStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  long lStack_3f0;
  undefined8 uStack_3e8;
  long lStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  undefined8 uStack_3b8;
  undefined2 uStack_3b0;
  double dStack_3a8;
  double dStack_3a0;
  long lStack_398;
  long *plStack_388;
  double **ppdStack_380;
  double *pdStack_378;
  double ****ppppdStack_370;
  double ****ppppdStack_368;
  long lStack_360;
  double ****ppppdStack_358;
  double ****ppppdStack_350;
  undefined1 uStack_341;
  double ****appppdStack_340 [5];
  double ****ppppdStack_318;
  double ****ppppdStack_310;
  long lStack_308;
  ulong uStack_300;
  double ****ppppdStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  double ****ppppdStack_2e0;
  double ****ppppdStack_2d0;
  double ****ppppdStack_2c8;
  double ****ppppdStack_2c0;
  double ****ppppdStack_2b8;
  double ****ppppdStack_2b0;
  double ****ppppdStack_2a8;
  double ****ppppdStack_2a0;
  double ***pppdStack_298;
  double ****ppppdStack_290;
  double ****ppppdStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  double ****ppppdStack_270;
  double ****ppppdStack_260;
  double ****ppppdStack_248;
  double ****ppppdStack_240;
  double ****ppppdStack_230;
  double ****ppppdStack_228;
  undefined *puStack_220;
  double ****ppppdStack_218;
  long lStack_210;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  double *pdStack_188;
  double dStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_128;
  int *piStack_120;
  long lStack_118;
  uint *puStack_110;
  long *plStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  int iStack_e4;
  uint *puStack_e0;
  ulong uStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_64;
  
  puVar54 = (uint *)param_1[3];
  lVar48 = param_1[4];
  *param_3 = 0;
  uStack_d8 = (ulong)(lVar48 - (long)puVar54) >> 5;
  *param_4 = 0;
  *(undefined4 *)param_5 = 0;
  plVar14 = param_1;
  pcVar5 = param_5;
  if ((int)uStack_d8 < 1) {
    uVar53 = *param_3;
  }
  else {
    puVar49 = puVar54 + 2;
    piVar19 = *(int **)puVar49;
    uVar53 = *param_3;
    if (*piVar19 < (int)param_2) {
      lVar48 = 0;
      iStack_e4 = (int)param_2;
      puStack_e0 = param_3;
      do {
        puVar4 = puStack_e0;
        if (uVar53 != 0xffffffff) {
          if (uVar53 == 0) {
            *puStack_e0 = *puVar54;
          }
          else if (uVar53 != *puVar54) {
            if (piRam000000011373cb20 == (int *)0x0) {
              plVar14 = (long *)0x11373cb20;
              param_2 = (long **)0x11382bb14;
              FUN_1099adbb8(0x11373cb20,0x11382bb14,&UNK_10f58b55a,2);
              if (((ulong)plVar14 & 1) != 0) goto LAB_1099334cc;
            }
            else if (1 < *piRam000000011373cb20) {
LAB_1099334cc:
              lStack_c8 = 0;
              uStack_70 = 0;
              uStack_b0 = 0;
              uStack_b8 = 0;
              uStack_a0 = 0;
              uStack_a8 = 0;
              uStack_90 = 0;
              uStack_98 = 0;
              uStack_80 = 0;
              uStack_88 = 0;
              uStack_78 = 0;
              pcVar5 = FUN_1099aa768;
              FUN_1099a9f0c(&lStack_c8,&UNK_10f58b55a,0x40,0,FUN_1099aa768,0);
              FUN_1092b4db8(lStack_c0 + 0x7540,&UNK_10f58b5e3,0x3b);
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
              FUN_1092b4db8();
              param_2 = (long **)(ulong)*puVar54;
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
              plVar14 = &lStack_c8;
              FUN_1099ab3b0(plVar14);
            }
            *puVar4 = 0xffffffff;
            piVar19 = *(int **)puVar49;
          }
        }
        iVar6 = *param_4;
        if (iVar6 != -1) {
          lVar43 = (long)*piVar19;
          if (iVar6 == 0) {
            *param_4 = *(int *)(*param_1 + lVar43 * 8);
          }
          else if (iVar6 != *(int *)(*param_1 + lVar43 * 8)) {
            if (piRam000000011373cb40 == (int *)0x0) {
              plVar14 = (long *)0x11373cb40;
              param_2 = (long **)0x11382bb14;
              FUN_1099adbb8(0x11373cb40,0x11382bb14,&UNK_10f58b55a,2);
              if (((ulong)plVar14 & 1) != 0) goto LAB_1099335d4;
            }
            else if (1 < *piRam000000011373cb40) {
LAB_1099335d4:
              lStack_c8 = 0;
              uStack_70 = 0;
              uStack_b0 = 0;
              uStack_b8 = 0;
              uStack_a0 = 0;
              uStack_a8 = 0;
              uStack_90 = 0;
              uStack_98 = 0;
              uStack_80 = 0;
              uStack_88 = 0;
              uStack_78 = 0;
              pcVar5 = FUN_1099aa768;
              FUN_1099a9f0c(&lStack_c8,&UNK_10f58b55a,0x4b,0,FUN_1099aa768,0);
              FUN_1092b4db8(lStack_c0 + 0x7540,&UNK_10f58b61f,0x39);
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
              FUN_1092b4db8();
              param_2 = (long **)(ulong)*(uint *)(*param_1 + lVar43 * 8);
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
              plVar14 = &lStack_c8;
              FUN_1099ab3b0(plVar14);
            }
            *param_4 = -1;
            piVar19 = *(int **)puVar49;
          }
        }
        lVar43 = *(long *)(puVar54 + 4);
        if (8 < (ulong)(lVar43 - (long)piVar19)) {
          iVar6 = *(int *)param_5;
          if (iVar6 == 0) {
            iVar6 = *(int *)(*param_1 + (long)piVar19[2] * 8);
            *(int *)param_5 = iVar6;
          }
          unaff_x21 = 8;
          uVar50 = 1;
          do {
            if (iVar6 == -1) break;
            lVar44 = (long)*(int *)((long)piVar19 + unaff_x21) * 8;
            if (iVar6 != *(int *)(*param_1 + lVar44)) {
              if (piRam000000011373cb60 == (int *)0x0) {
                plVar14 = (long *)0x11373cb60;
                param_2 = (long **)0x11382bb14;
                FUN_1099adbb8(0x11373cb60,0x11382bb14,&UNK_10f58b55a,2);
                if (((ulong)plVar14 & 1) != 0) goto LAB_1099336fc;
              }
              else if (1 < *piRam000000011373cb60) {
LAB_1099336fc:
                lStack_c8 = 0;
                uStack_70 = 0;
                uStack_b0 = 0;
                uStack_b8 = 0;
                uStack_a0 = 0;
                uStack_a8 = 0;
                uStack_90 = 0;
                uStack_98 = 0;
                uStack_80 = 0;
                uStack_88 = 0;
                uStack_78 = 0;
                pcVar5 = FUN_1099aa768;
                FUN_1099a9f0c(&lStack_c8,&UNK_10f58b55a,0x5e,0,FUN_1099aa768,0);
                FUN_1092b4db8(lStack_c0 + 0x7540,&UNK_10f58b659,0x2c);
                FUN_1092b4db8();
                __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
                FUN_1092b4db8();
                param_2 = (long **)(ulong)*(uint *)(*param_1 + lVar44);
                __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
                plVar14 = &lStack_c8;
                FUN_1099ab3b0(plVar14);
              }
              iVar6 = -1;
              *(undefined4 *)param_5 = 0xffffffff;
              lVar43 = *(long *)(puVar54 + 4);
              piVar19 = *(int **)puVar49;
            }
            uVar50 = uVar50 + 1;
            unaff_x21 = unaff_x21 + 8;
          } while (uVar50 < (ulong)(lVar43 - (long)piVar19 >> 3));
        }
        uVar53 = *puStack_e0;
        param_3 = puStack_e0;
        if ((uVar53 == 0xffffffff) && (*param_4 == -1)) {
          if (*(int *)param_5 == -1 || (int)uStack_d8 <= (int)lVar48 + 1) goto LAB_109933830;
        }
        else if ((int)uStack_d8 <= (int)lVar48 + 1) break;
        lVar48 = lVar48 + 1;
        puVar54 = (uint *)(param_1[3] + lVar48 * 0x20);
        puVar49 = puVar54 + 2;
        piVar19 = *(int **)puVar49;
      } while (*piVar19 < iStack_e4);
    }
  }
  lStack_c8 = CONCAT44(lStack_c8._4_4_,uVar53);
  uStack_64 = 0;
  if (uVar53 != 0) {
LAB_109933830:
    lStack_c8 = CONCAT44(lStack_c8._4_4_,*param_4);
    plStack_d0 = (long *)((ulong)plStack_d0 & 0xffffffff00000000);
    if (*param_4 == 0) {
      plVar8 = &lStack_c8;
      param_2 = &plStack_d0;
      FUN_109904144(plVar8,param_2,&UNK_10f58b6b7);
      plVar14 = (long *)0x0;
      plStack_d0 = plVar8;
      if (plVar8 != (long *)0x0) {
        FUN_1099aa6cc(&lStack_c8,&UNK_10f58b55a,0x71,&plStack_d0);
        pdVar9 = (double *)&UNK_10f58b6ca;
        FUN_109365950(lStack_c0 + 0x7540);
        goto LAB_1099339f4;
      }
    }
    if (piRam000000011373cb80 == (int *)0x0) {
      plVar14 = (long *)0x11373cb80;
      param_2 = (long **)0x11382bb14;
      FUN_1099adbb8(0x11373cb80,0x11382bb14,&UNK_10f58b55a,1);
      if (((ulong)plVar14 & 1) == 0) goto LAB_109933930;
    }
    else if (*piRam000000011373cb80 < 1) goto LAB_109933930;
    lStack_c8 = 0;
    uStack_70 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_78 = 0;
    FUN_1099a9f0c(&lStack_c8,&UNK_10f58b55a,0x73,0,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_c0 + 0x7540,&UNK_10f58b6e1,0x23);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    param_2 = (long **)&UNK_10f58b705;
    FUN_1092b4db8();
    plVar14 = &lStack_c8;
    FUN_1099ab3b0(plVar14);
LAB_109933930:
    auVar64._8_8_ = param_2;
    auVar64._0_8_ = plVar14;
    return auVar64;
  }
  plVar8 = &lStack_c8;
  param_2 = (long **)&uStack_64;
  FUN_109904144(plVar8,param_2,&UNK_10f58b694);
  plVar14 = (long *)0x0;
  plStack_d0 = plVar8;
  if (plVar8 == (long *)0x0) goto LAB_109933830;
  FUN_1099aa6cc(&lStack_c8,&UNK_10f58b55a,0x70,&plStack_d0);
  pdVar9 = (double *)&UNK_10f58b6a9;
  FUN_109365950(lStack_c0 + 0x7540);
LAB_1099339f4:
  plVar14 = &lStack_c8;
  func_0x0001099ab7c0();
  FUN_1099ab3b0(&lStack_c8);
  plVar8 = plVar14;
  __Unwind_Resume();
  pcStack_f8 = FUN_109933a1c;
  piStack_120 = param_4;
  lStack_118 = unaff_x21;
  puStack_110 = param_3;
  plStack_108 = plVar14;
  puStack_100 = &stack0xfffffffffffffff0;
  *plVar8 = (long)&PTR_DAT_110b1dd70;
  dVar20 = pdVar9[1];
  plVar8[1] = (long)dVar20;
  dVar56 = pdVar9[2];
  plVar8[3] = (long)pdVar9[3];
  plVar8[2] = (long)dVar56;
  dVar56 = pdVar9[4];
  pdVar40 = (double *)(plVar8 + 4);
  *pdVar40 = dVar56;
  dVar58 = pdVar9[5];
  pdVar21 = (double *)(plVar8 + 5);
  *pdVar21 = dVar58;
  plVar8[7] = 0x3e45798ee2308c3a;
  plVar8[6] = 0x3e45798ee2308c3a;
  plVar8[9] = 0x4024000000000000;
  plVar8[8] = 0x3ff0000000000000;
  plVar8[0x15] = 0;
  *(undefined1 *)(plVar8 + 0x16) = 0;
  plVar8[0xb] = 0x3fd0000000000000;
  plVar8[10] = 0x3fe8000000000000;
  plVar8[0xd] = 0;
  plVar8[0xc] = 0;
  plVar8[0xf] = 0;
  plVar8[0xe] = 0;
  plVar8[0x11] = 0;
  plVar8[0x10] = 0;
  plVar8[0x13] = 0;
  plVar8[0x12] = 0;
  *(undefined4 *)((long)plVar8 + 0xb4) = *(undefined4 *)(pdVar9 + 6);
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x18] = 0;
  if (dVar20 == 0.0) {
    dStack_180 = 0.0;
    uStack_128 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_130 = 0;
    pcVar5 = FUN_1099aa768;
    ppdVar16 = (double **)0x3;
    FUN_1099a9f0c(&dStack_180,&UNK_10f58b708,0x45,3,FUN_1099aa768,0);
    puVar51 = &UNK_10f58b790;
    plVar14 = (long *)0x28;
    FUN_1092b4db8(lStack_178 + 0x7540);
  }
  else {
    dStack_180 = 0.0;
    if (dVar56 <= 0.0) {
      pdVar9 = &dStack_180;
      pdVar28 = pdVar40;
      FUN_10991e5b0(pdVar40,pdVar9,&UNK_10f58b7b9);
      if (pdVar28 != (double *)0x0) {
        puVar51 = &UNK_10f58b708;
        ppdVar16 = &pdStack_188;
        plVar14 = (long *)0x46;
        pdStack_188 = pdVar28;
        FUN_1099ab8e4(&dStack_180);
        goto LAB_109933c1c;
      }
      dVar56 = *pdVar40;
      dVar58 = *pdVar21;
      pdStack_188 = (double *)0x0;
    }
    if ((dVar56 <= dVar58) ||
       (FUN_10991e5b0(pdVar40,pdVar21,&UNK_10f58b7cd), pdVar9 = pdVar21, pdStack_188 = pdVar40,
       pdVar40 == (double *)0x0)) {
      dStack_180 = 0.0;
      if (0.0 < (double)plVar8[3]) {
LAB_109933ae0:
        auVar65._8_8_ = pdVar9;
        auVar65._0_8_ = plVar8;
        return auVar65;
      }
      pdVar40 = (double *)(plVar8 + 3);
      pdVar9 = &dStack_180;
      FUN_10991e5b0(pdVar40,pdVar9,&UNK_10f58b7ec);
      if (pdVar40 == (double *)0x0) goto LAB_109933ae0;
      puVar51 = &UNK_10f58b708;
      ppdVar16 = &pdStack_188;
      plVar14 = (long *)0x48;
      pdStack_188 = pdVar40;
      FUN_1099ab8e4(&dStack_180);
    }
    else {
      puVar51 = &UNK_10f58b708;
      ppdVar16 = &pdStack_188;
      plVar14 = (long *)0x47;
      FUN_1099ab8e4(&dStack_180);
    }
  }
LAB_109933c1c:
  pdVar9 = &dStack_180;
  func_0x0001099ab7c0();
  _free(plVar8[0x18]);
  _free(plVar8[0x12]);
  _free(plVar8[0x10]);
  _free(plVar8[0xe]);
  _free(plVar8[0xc]);
  __Unwind_Resume();
  pcStack_198 = FUN_109933c58;
  lStack_210 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1a0 = &puStack_100;
  if (plVar14 == (long *)0x0) {
    pppdStack_428 = (double ***)0x0;
    lStack_3d0 = 0;
    ppppdStack_410 = (double ****)0x0;
    ppppdStack_418 = (double ****)0x0;
    lStack_400 = 0;
    uStack_408 = (double *****)0x0;
    lStack_3f0 = 0;
    uStack_3f8 = 0;
    lStack_3e0 = 0;
    uStack_3e8 = 0;
    uStack_3d8 = (ulong)uStack_3d8._4_4_ << 0x20;
    FUN_1099a9f0c(&pppdStack_428,&UNK_10f58b708,0x54,3,FUN_1099aa768,0);
    pdVar9 = (double *)&UNK_10f58b7fe;
    FUN_1092b4db8(uStack_420 + 0xea8,&UNK_10f58b7fe,0x22);
  }
  else if (ppdVar16 == (double **)0x0) {
    pppdStack_428 = (double ***)0x0;
    lStack_3d0 = 0;
    ppppdStack_410 = (double ****)0x0;
    ppppdStack_418 = (double ****)0x0;
    lStack_400 = 0;
    uStack_408 = (double *****)0x0;
    lStack_3f0 = 0;
    uStack_3f8 = 0;
    lStack_3e0 = 0;
    uStack_3e8 = 0;
    uStack_3d8 = (ulong)uStack_3d8._4_4_ << 0x20;
    FUN_1099a9f0c(&pppdStack_428,&UNK_10f58b708,0x55,3,FUN_1099aa768,0);
    pdVar9 = (double *)&UNK_10f58febc;
    FUN_1092b4db8(uStack_420 + 0xea8,&UNK_10f58febc,0x23);
  }
  else {
    if (pcVar5 != (code *)0x0) {
      plVar8 = plVar14;
      (**(code **)(*plVar14 + 0x28))();
      if (*(char *)(pdVar9 + 0x16) == '\x01') {
        if (*(int *)((long)pdVar9 + 0xb4) == 1) {
          FUN_109936ecc(pdVar9,pcVar5);
        }
        else if (*(int *)((long)pdVar9 + 0xb4) == 0) {
          FUN_109936460(pdVar9,pcVar5);
        }
        uVar50 = 0;
        uVar23 = 0;
        ppppdVar52 = (double ****)0xbff0000000000000;
      }
      else {
        *(undefined1 *)(pdVar9 + 0x16) = 1;
        dVar20 = pdVar9[0xc];
        iVar6 = (int)plVar8;
        if (pdVar9[0xd] == (double)(long)iVar6) {
LAB_109933dbc:
          (**(code **)(*plVar14 + 0x30))(plVar14,dVar20);
          pdVar40 = (double *)pdVar9[0xc];
          if (0 < iVar6) {
            uVar50 = (ulong)plVar8 & 0xffffffff;
            pdVar21 = pdVar40;
            do {
              dVar20 = pdVar9[4];
              if (pdVar9[4] <= *pdVar21) {
                dVar20 = *pdVar21;
              }
              dVar56 = pdVar9[5];
              if (dVar20 <= pdVar9[5]) {
                dVar56 = dVar20;
              }
              *pdVar21 = dVar56;
              uVar50 = uVar50 - 1;
              pdVar21 = pdVar21 + 1;
            } while (uVar50 != 0);
          }
          dVar20 = pdVar9[0xd];
          uVar50 = (long)dVar20 - ((long)dVar20 >> 0x3f) & 0xfffffffffffffffe;
          if (1 < (long)dVar20) {
            lVar48 = 0;
            pdVar21 = pdVar40;
            do {
              pdVar21[1] = SQRT(pdVar21[1]);
              *pdVar21 = SQRT(*pdVar21);
              lVar48 = lVar48 + 2;
              pdVar21 = pdVar21 + 2;
            } while (lVar48 < (long)uVar50);
          }
          lVar48 = (long)dVar20 % 2;
          if (lVar48 != 0 && lVar48 < 0 == SBORROW8((long)dVar20,uVar50)) {
            pdVar40 = pdVar40 + ((long)dVar20 / 2) * 2;
            do {
              *pdVar40 = SQRT(*pdVar40);
              lVar48 = lVar48 + -1;
              pdVar40 = pdVar40 + 1;
            } while (lVar48 != 0);
          }
          dVar20 = pdVar9[0x10];
          if (0 < (long)pdVar9[0x11]) {
            _bzero(dVar20,(long)pdVar9[0x11] << 3);
          }
          (**(code **)(*plVar14 + 0x18))(plVar14,ppdVar16,dVar20);
          pdVar21 = (double *)pdVar9[0xc];
          pdVar40 = (double *)pdVar9[0x10];
          dVar20 = pdVar9[0x11];
          uVar50 = (long)dVar20 - ((long)dVar20 >> 0x3f) & 0xfffffffffffffffe;
          if (1 < (long)dVar20) {
            lVar48 = 0;
            pdVar28 = pdVar40;
            pdVar18 = pdVar21;
            do {
              dVar56 = *pdVar18;
              pdVar28[1] = pdVar28[1] / pdVar18[1];
              *pdVar28 = *pdVar28 / dVar56;
              lVar48 = lVar48 + 2;
              pdVar28 = pdVar28 + 2;
              pdVar18 = pdVar18 + 2;
            } while (lVar48 < (long)uVar50);
          }
          lVar48 = (long)dVar20 % 2;
          if (lVar48 != 0 && (long)uVar50 <= (long)dVar20) {
            pdVar40 = pdVar40 + ((long)dVar20 / 2) * 2;
            pdVar21 = pdVar21 + ((long)dVar20 / 2) * 2;
            do {
              *pdVar40 = *pdVar40 / *pdVar21;
              lVar48 = lVar48 + -1;
              pdVar40 = pdVar40 + 1;
              pdVar21 = pdVar21 + 1;
            } while (lVar48 != 0);
          }
          plVar8 = plVar14;
          (**(code **)(*plVar14 + 0x20))();
          dVar56 = (double)(long)(int)plVar8;
          if ((int)plVar8 < 1) goto LAB_109933f48;
          pdVar40 = (double *)0x1;
          _calloc(1,(long)dVar56 << 3);
          if (pdVar40 == (double *)0x0) goto LAB_109933f28;
        }
        else {
          dVar56 = (double)(long)iVar6;
          _free(dVar20);
          if (iVar6 < 1) {
            dVar20 = 0.0;
LAB_109933d44:
            pdVar9[0xc] = dVar20;
            pdVar9[0xd] = dVar56;
            if (pdVar9[0x11] != dVar56) {
              _free(pdVar9[0x10]);
              if (iVar6 < 1) {
                dVar20 = 0.0;
              }
              else {
                dVar20 = (double)((long)dVar56 << 3);
                _malloc();
                if (dVar20 == 0.0) goto LAB_109933f28;
              }
              pdVar9[0x10] = dVar20;
            }
            pdVar9[0x11] = dVar56;
            if (pdVar9[0x13] != dVar56) {
              _free(pdVar9[0x12]);
              if (iVar6 < 1) {
                dVar20 = 0.0;
              }
              else {
                dVar20 = (double)((long)dVar56 << 3);
                _malloc();
                if (dVar20 == 0.0) goto LAB_109933f28;
              }
              pdVar9[0x12] = dVar20;
            }
            pdVar9[0x13] = dVar56;
            dVar20 = pdVar9[0xc];
            goto LAB_109933dbc;
          }
          dVar20 = (double)((long)dVar56 << 3);
          _malloc();
          if (dVar20 != 0.0) goto LAB_109933d44;
LAB_109933f28:
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
LAB_109933f48:
          pdVar40 = (double *)0x0;
        }
        dVar20 = pdVar9[0xd];
        if ((long)dVar20 < 1) {
          lVar48 = 0;
          dVar58 = pdVar9[0x10];
          dVar24 = pdVar9[0xc];
          uVar50 = -(-(long)dVar20 & 0xfffffffffffffffeU);
        }
        else {
          if ((ulong)dVar20 >> 0x3d != 0) goto LAB_109935f58;
          lVar48 = (long)dVar20 << 3;
          _malloc();
          if (lVar48 == 0) goto LAB_109935f58;
          dVar58 = pdVar9[0x10];
          dVar24 = pdVar9[0xc];
          if (dVar20 == 4.94065645841247e-324) {
            uVar50 = 0;
          }
          else {
            lVar43 = 0;
            uVar23 = 0;
            uVar50 = (ulong)dVar20 & 0x1ffffffffffffffe;
            do {
              dVar60 = *(double *)((long)dVar58 + lVar43);
              dVar63 = *(double *)((long)dVar24 + lVar43);
              ((double *)(lVar48 + lVar43))[1] =
                   ((double *)((long)dVar58 + lVar43))[1] / ((double *)((long)dVar24 + lVar43))[1];
              *(double *)(lVar48 + lVar43) = dVar60 / dVar63;
              uVar23 = uVar23 + 2;
              lVar43 = lVar43 + 0x10;
            } while (uVar23 < uVar50);
          }
        }
        lVar43 = (long)dVar20 - uVar50;
        if (lVar43 != 0 && (long)uVar50 <= (long)dVar20) {
          pdVar21 = (double *)((long)dVar58 + uVar50 * 8);
          pdVar28 = (double *)((long)dVar24 + uVar50 * 8);
          pdVar18 = (double *)(lVar48 + uVar50 * 8);
          do {
            *pdVar18 = *pdVar21 / *pdVar28;
            lVar43 = lVar43 + -1;
            pdVar21 = pdVar21 + 1;
            pdVar28 = pdVar28 + 1;
            pdVar18 = pdVar18 + 1;
          } while (lVar43 != 0);
        }
        (**(code **)(*plVar14 + 0x10))(plVar14,lVar48,pdVar40);
        dVar20 = pdVar9[0x11];
        dVar24 = 0.0;
        dVar58 = 0.0;
        if (dVar20 != 0.0) {
          pdVar21 = (double *)pdVar9[0x10];
          dVar60 = (double)((long)dVar20 + 3);
          if (-1 < (long)dVar20) {
            dVar60 = dVar20;
          }
          if ((long)dVar20 + 1U < 3) {
            dVar58 = *pdVar21 * *pdVar21;
          }
          else {
            uVar50 = (long)dVar20 - ((long)dVar20 >> 0x3f) & 0xfffffffffffffffe;
            dVar58 = *pdVar21 * *pdVar21;
            dVar63 = pdVar21[1] * pdVar21[1];
            if (3 < (long)dVar20) {
              uVar23 = (ulong)dVar60 & 0xfffffffffffffffc;
              dVar60 = pdVar21[2] * pdVar21[2];
              dVar62 = pdVar21[3] * pdVar21[3];
              if (7 < (ulong)dVar20) {
                pdVar28 = pdVar21 + 6;
                lVar43 = 4;
                do {
                  dVar58 = dVar58 + pdVar28[-2] * pdVar28[-2];
                  dVar63 = dVar63 + pdVar28[-1] * pdVar28[-1];
                  dVar60 = dVar60 + *pdVar28 * *pdVar28;
                  dVar62 = dVar62 + pdVar28[1] * pdVar28[1];
                  lVar43 = lVar43 + 4;
                  pdVar28 = pdVar28 + 4;
                } while (lVar43 < (long)uVar23);
              }
              dVar58 = dVar60 + dVar58;
              dVar63 = dVar62 + dVar63;
              if ((long)uVar23 < (long)uVar50) {
                dVar62 = (pdVar21 + uVar23)[1];
                dVar60 = pdVar21[uVar23];
                dVar58 = dVar58 + dVar60 * dVar60;
                dVar63 = dVar63 + dVar62 * dVar62;
              }
            }
            dVar58 = dVar58 + dVar63;
            lVar43 = (long)dVar20 % 2;
            if (lVar43 != 0 && lVar43 < 0 == SBORROW8((long)dVar20,uVar50)) {
              pdVar21 = pdVar21 + ((long)dVar20 / 2) * 2;
              do {
                dVar58 = dVar58 + *pdVar21 * *pdVar21;
                lVar43 = lVar43 + -1;
                pdVar21 = pdVar21 + 1;
              } while (lVar43 != 0);
            }
          }
        }
        uVar53 = SUB84(dVar56,0);
        if (uVar53 != 0) {
          uVar47 = uVar53 + 3;
          if (-1 < (int)uVar53) {
            uVar47 = uVar53;
          }
          if ((long)dVar56 + 1U < 3) {
            dVar24 = *pdVar40 * *pdVar40;
          }
          else {
            uVar50 = -(ulong)((uint)((int)uVar53 / 2) >> 0x1f) & 0xfffffffe00000000 |
                     (ulong)(uint)((int)uVar53 / 2) << 1;
            dVar24 = *pdVar40 * *pdVar40;
            dVar20 = pdVar40[1] * pdVar40[1];
            if (3 < (int)uVar53) {
              uVar23 = -(ulong)((uint)((int)uVar47 >> 2) >> 0x1f) & 0xfffffffc00000000 |
                       (ulong)(uint)((int)uVar47 >> 2) << 2;
              dVar60 = pdVar40[2] * pdVar40[2];
              dVar63 = pdVar40[3] * pdVar40[3];
              if (7 < uVar53) {
                pdVar21 = pdVar40 + 6;
                lVar43 = 4;
                do {
                  dVar24 = dVar24 + pdVar21[-2] * pdVar21[-2];
                  dVar20 = dVar20 + pdVar21[-1] * pdVar21[-1];
                  dVar60 = dVar60 + *pdVar21 * *pdVar21;
                  dVar63 = dVar63 + pdVar21[1] * pdVar21[1];
                  lVar43 = lVar43 + 4;
                  pdVar21 = pdVar21 + 4;
                } while (lVar43 < (long)uVar23);
              }
              dVar24 = dVar60 + dVar24;
              dVar20 = dVar63 + dVar20;
              if ((long)uVar23 < (long)uVar50) {
                dVar63 = (pdVar40 + uVar23)[1];
                dVar60 = pdVar40[uVar23];
                dVar24 = dVar24 + dVar60 * dVar60;
                dVar20 = dVar20 + dVar63 * dVar63;
              }
            }
            dVar24 = dVar24 + dVar20;
            lVar43 = (long)dVar56 - uVar50;
            if (lVar43 != 0 && (long)uVar50 <= (long)dVar56) {
              pdVar21 = pdVar40 + ((long)((ulong)(uVar53 - ((int)uVar53 >> 0x1f)) << 0x20) >> 0x21)
                                  * 2;
              do {
                dVar24 = dVar24 + *pdVar21 * *pdVar21;
                lVar43 = lVar43 + -1;
                pdVar21 = pdVar21 + 1;
              } while (lVar43 != 0);
            }
          }
        }
        pdVar9[0x14] = dVar58 / dVar24;
        _free(lVar48);
        _free(pdVar40);
        plVar8 = plVar14;
        (**(code **)(*plVar14 + 0x28))();
        dVar20 = pdVar9[6];
        if (dVar20 < pdVar9[8]) {
          uVar53 = 0;
          ppppdStack_450 = (double ****)(puVar51 + 0x10);
          ppppdStack_448 = (double ****)0x0;
          ppppdStack_468 = (double ****)((ulong)plVar8 & 0xffffffff);
          ppppdStack_460 = (double ****)(((ulong)plVar8 & 0xffffffff) << 3);
          pcStack_470 = pcVar5;
LAB_10993421c:
          ppppdStack_2c8 = (double ****)0x0;
          ppppdStack_2d0 = (double ****)0x0;
          ppppdStack_2b8 = (double ****)0x0;
          ppppdStack_2c0 = (double ****)0x0;
          pdVar40 = (double *)pdVar9[0xc];
          dVar56 = pdVar9[0xd];
          pdVar21 = (double *)pdVar9[0xe];
          if (pdVar9[0xf] != dVar56) {
            _free();
            if (0 < (long)dVar56) {
              if ((ulong)dVar56 >> 0x3d == 0) {
                pdVar21 = (double *)((long)dVar56 << 3);
                _malloc();
                if (pdVar21 != (double *)0x0) goto LAB_109934260;
              }
              ___cxa_allocate_exception(8);
              __ZNSt9bad_allocC1Ev();
              ___cxa_throw();
              goto LAB_109936200;
            }
            pdVar21 = (double *)0x0;
LAB_109934260:
            pdVar9[0xe] = (double)pdVar21;
            pdVar9[0xf] = dVar56;
          }
          uVar50 = (long)dVar56 - ((long)dVar56 >> 0x3f) & 0xfffffffffffffffe;
          dVar20 = SQRT(dVar20);
          if (1 < (long)dVar56) {
            lVar48 = 0;
            pdVar28 = pdVar21;
            pdVar18 = pdVar40;
            do {
              dVar58 = *pdVar18;
              pdVar28[1] = pdVar18[1] * dVar20;
              *pdVar28 = dVar58 * dVar20;
              lVar48 = lVar48 + 2;
              pdVar28 = pdVar28 + 2;
              pdVar18 = pdVar18 + 2;
            } while (lVar48 < (long)uVar50);
          }
          lVar48 = (long)dVar56 % 2;
          if (lVar48 != 0 && (long)uVar50 <= (long)dVar56) {
            pdVar40 = pdVar40 + ((long)dVar56 / 2) * 2;
            pdVar21 = pdVar21 + ((long)dVar56 / 2) * 2;
            do {
              *pdVar21 = dVar20 * *pdVar40;
              lVar48 = lVar48 + -1;
              pdVar40 = pdVar40 + 1;
              pdVar21 = pdVar21 + 1;
            } while (lVar48 != 0);
          }
          ppppdStack_2d0 = (double ****)pdVar9[0xe];
          dVar20 = pdVar9[0x12];
          if ((0 < (int)plVar8) && (dVar20 != 0.0)) {
            _memset_pattern16(dVar20,&UNK_10e00cee0,ppppdStack_460);
          }
          (**(code **)(*(long *)pdVar9[1] + 0x10))
                    (&pppdStack_428,(long *)pdVar9[1],plVar14,ppdVar16,&ppppdStack_2d0,dVar20);
          ppppdVar52 = (double ****)pppdStack_428;
          uStack_454 = (uint)uStack_420;
          uVar47 = uStack_420._4_4_;
          if ((uVar53 >> 7 & 1) != 0) {
            __ZdlPv(ppppdStack_448);
          }
          ppppdStack_448 = ppppdStack_418;
          uVar53 = (uint)uStack_408._7_1_;
          if (*(int *)(puVar51 + 8) == 0) {
LAB_109934360:
            pppppdVar45 = (double *****)ppppdStack_450;
            FUN_109962f70(ppppdStack_450,*(int *)(puVar51 + 8),plVar14,ppppdStack_2d0,ppdVar16,
                          pdVar9[0x12],0);
            if (((ulong)pppppdVar45 & 1) == 0) {
              pppdStack_428 = (double ***)0x0;
              lStack_3d0 = 0;
              ppppdStack_410 = (double ****)0x0;
              ppppdStack_418 = (double ****)0x0;
              lStack_400 = 0;
              uStack_408 = (double *****)0x0;
              lStack_3f0 = 0;
              uStack_3f8 = 0;
              lStack_3e0 = 0;
              uStack_3e8 = 0;
              uStack_3d8 = uStack_3d8 & 0xffffffff00000000;
              FUN_1099a9f0c(&pppdStack_428,&UNK_10f58b708,0x243,2,FUN_1099aa768,0);
              FUN_1092b4db8(uStack_420 + 0xea8,&UNK_10f58b9fe,0x24);
              FUN_1092b4db8();
              FUN_1092b4db8();
              FUN_1099ab3b0(&pppdStack_428);
            }
          }
          else {
            uVar50 = *(ulong *)(puVar51 + 0x18);
            if (-1 < (char)puVar51[0x27]) {
              uVar50 = (ulong)(byte)puVar51[0x27];
            }
            if (uVar50 != 0) goto LAB_109934360;
          }
          if (uVar47 == 2) {
LAB_109934460:
            pdVar9[6] = pdVar9[9] * pdVar9[6];
            if (piRam000000011373cba0 == (int *)0x0) {
              iVar6 = 0x1373cba0;
              FUN_1099adbb8(0x11373cba0,0x11382bb14,&UNK_10f58b708,2);
              if (iVar6 != 0) goto LAB_1099344b0;
            }
            else if (1 < *piRam000000011373cba0) {
LAB_1099344b0:
              pppdStack_428 = (double ***)0x0;
              lStack_3d0 = 0;
              ppppdStack_410 = (double ****)0x0;
              ppppdStack_418 = (double ****)0x0;
              lStack_400 = 0;
              uStack_408 = (double *****)0x0;
              lStack_3f0 = 0;
              uStack_3f8 = 0;
              lStack_3e0 = 0;
              uStack_3e8 = 0;
              uStack_3d8 = uStack_3d8 & 0xffffffff00000000;
              FUN_1099a9f0c(&pppdStack_428,&UNK_10f58b708,0x250,0,FUN_1099aa768,0);
              FUN_1092b4db8(uStack_420 + 0xea8,&UNK_10f58ba34,0xe);
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(pdVar9[6]);
              FUN_1099ab3b0(&pppdStack_428);
            }
            dVar20 = pdVar9[6];
            if (pdVar9[8] <= dVar20) goto LAB_1099349c8;
            goto LAB_10993421c;
          }
          if (uVar47 == 3) {
            uVar47 = 3;
            goto LAB_1099349cc;
          }
          pdVar40 = (double *)pdVar9[0x12];
          if ((0 < (int)plVar8) &&
             (pdVar21 = pdVar40, pppppdVar45 = (double *****)ppppdStack_468,
             pdVar40 != (double *)0x0)) {
            while( true ) {
              if ((0x7fefffffffffffff < (ulong)ABS(*pdVar21)) || (*pdVar21 == 1e+302)) break;
              pppppdVar45 = (double *****)((long)pppppdVar45 + -1);
              pdVar21 = pdVar21 + 1;
              if (pppppdVar45 == (double *****)0x0) goto LAB_10993453c;
            }
            goto LAB_109934460;
          }
LAB_10993453c:
          pdVar21 = (double *)pdVar9[0xc];
          dVar20 = pdVar9[0x13];
          uVar50 = (long)dVar20 - ((long)dVar20 >> 0x3f) & 0xfffffffffffffffe;
          if (1 < (long)dVar20) {
            lVar48 = 0;
            pdVar28 = pdVar40;
            pdVar18 = pdVar21;
            do {
              dVar56 = *pdVar18;
              pdVar28[1] = pdVar28[1] * -pdVar18[1];
              *pdVar28 = *pdVar28 * -dVar56;
              lVar48 = lVar48 + 2;
              pdVar28 = pdVar28 + 2;
              pdVar18 = pdVar18 + 2;
            } while (lVar48 < (long)uVar50);
          }
          lVar48 = (long)dVar20 % 2;
          if (lVar48 != 0 && lVar48 < 0 == SBORROW8((long)dVar20,uVar50)) {
            pdVar40 = pdVar40 + ((long)dVar20 / 2) * 2;
            pdVar21 = pdVar21 + ((long)dVar20 / 2) * 2;
            do {
              *pdVar40 = -(*pdVar21 * *pdVar40);
              lVar48 = lVar48 + -1;
              pdVar40 = pdVar40 + 1;
              pdVar21 = pdVar21 + 1;
            } while (lVar48 != 0);
          }
          if ((uVar47 & 0xfffffffe) != 2) {
            if (*(int *)((long)pdVar9 + 0xb4) == 1) {
              plVar8 = plVar14;
              (**(code **)(*plVar14 + 0x28))();
              iVar6 = (int)plVar8;
              pppppdVar45 = (double *****)(long)iVar6;
              if (iVar6 < 1) {
                if (iVar6 != 0) {
                  uStack_524 = uVar53;
                  ___cxa_allocate_exception(8);
                  __ZNSt9bad_allocC1Ev();
                  ___cxa_throw();
                  goto LAB_109936200;
                }
                pppdStack_498 = (double ***)0x0;
                pppdStack_428 = (double ***)0x0;
                ppppdStack_410 = (double ****)0x0;
                ppppdStack_418 = (double ****)0x2;
                pppppdVar11 = (double *****)0x0;
                uStack_420 = pppppdVar45;
                pppppdVar10 = (double *****)ppppdStack_410;
              }
              else {
                ppppdVar41 = (double ****)((long)pppppdVar45 << 4);
                ppppdVar61 = ppppdVar41;
                _malloc();
                if (ppppdVar61 == (double ****)0x0) {
                  ___cxa_allocate_exception(8);
                  __ZNSt9bad_allocC1Ev();
                  ___cxa_throw();
                  goto LAB_109936200;
                }
                pdVar40 = (double *)pdVar9[0x10];
                ppppdVar22 = ppppdVar61;
                pppppdVar11 = pppppdVar45;
                do {
                  *ppppdVar22 = (double ***)*pdVar40;
                  pppppdVar11 = (double *****)((long)pppppdVar11 + -1);
                  pdVar40 = pdVar40 + 1;
                  ppppdVar22 = ppppdVar22 + 2;
                } while (pppppdVar11 != (double *****)0x0);
                lVar48 = 8;
                puVar25 = (undefined8 *)pdVar9[0x12];
                pppppdVar11 = pppppdVar45;
                do {
                  *(undefined8 *)((long)ppppdVar61 + lVar48) = *puVar25;
                  lVar48 = lVar48 + 0x10;
                  pppppdVar11 = (double *****)((long)pppppdVar11 + -1);
                  puVar25 = puVar25 + 1;
                } while (pppppdVar11 != (double *****)0x0);
                pppdStack_498 = (double ***)ppppdVar61;
                _malloc();
                if (ppppdVar41 == (double ****)0x0) {
                  uStack_524 = uVar53;
                  ___cxa_allocate_exception(8);
                  __ZNSt9bad_allocC1Ev();
                  ___cxa_throw();
                  goto LAB_109936200;
                }
                ppppdStack_418 = (double ****)0x2;
                pppdStack_428 = (double ***)ppppdVar41;
                uStack_420 = pppppdVar45;
                _memcpy();
                ppppdStack_410 = (double ****)0x0;
                uStack_408 = (double *****)0x0;
                if (1 < (long)pppppdVar45) {
                  pppppdVar45 = (double *****)0x2;
                }
                pppppdVar10 = (double *****)((long)pppppdVar45 << 3);
                _malloc();
                pppppdVar11 = pppppdVar45;
                if (pppppdVar10 == (double *****)0x0) {
                  uStack_524 = uVar53;
                  ___cxa_allocate_exception(8);
                  __ZNSt9bad_allocC1Ev();
                  ___cxa_throw();
                  goto LAB_109936200;
                }
              }
              ppppdStack_410 = (double ****)pppppdVar10;
              ppppdStack_488 = (double ****)&ppppdStack_410;
              lStack_400 = 0;
              uStack_3f8 = 0;
              lVar48 = 8;
              uStack_408 = pppppdVar11;
              _malloc();
              if (lVar48 == 0) {
                uStack_524 = uVar53;
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_109936200;
              }
              uStack_3f8 = 2;
              lStack_3f0 = 0;
              uStack_3e8 = 0;
              lVar43 = 0x10;
              lStack_400 = lVar48;
              _malloc();
              if (lVar43 == 0) {
                uStack_524 = uVar53;
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_109936200;
              }
              uStack_3e8 = 2;
              lStack_3e0 = 0;
              uStack_3d8 = 0;
              lVar48 = 0x10;
              lStack_3f0 = lVar43;
              _malloc();
              if (lVar48 == 0) {
                uStack_524 = uVar53;
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_109936200;
              }
              uStack_3d8 = 2;
              lStack_3d0 = 0;
              uStack_3c8 = 0;
              lVar43 = 0x10;
              lStack_3e0 = lVar48;
              _malloc();
              if (lVar43 == 0) {
                uStack_524 = uVar53;
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_109936200;
              }
              uStack_3c8 = 2;
              lStack_3c0 = 0;
              uStack_3b8 = 0;
              lVar48 = 0x10;
              lStack_3d0 = lVar43;
              _malloc();
              if (lVar48 == 0) {
                uStack_524 = uVar53;
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_109936200;
              }
              uStack_3b8 = 2;
              uStack_3b0 = 0;
              lStack_3c0 = lVar48;
              FUN_10990e27c(&pppdStack_428);
              pppppdVar45 = (double *****)ppppdStack_418;
              if (uStack_3b0._1_1_ != '\x01') {
                pppppdVar11 = (double *****)ppppdStack_418;
                if ((long)uStack_420 <= (long)ppppdStack_418) {
                  pppppdVar11 = uStack_420;
                }
                dStack_3a8 = (double)(long)pppppdVar11 / 4503599627370496.0;
              }
              if (lStack_398 < 1) {
LAB_109934848:
                ppppdStack_2d0 = (double ****)0x0;
                uStack_278 = 0;
                ppppdStack_2b8 = (double ****)0x0;
                ppppdStack_2c0 = (double ****)0x0;
                ppppdStack_2a8 = (double ****)0x0;
                ppppdStack_2b0 = (double ****)0x0;
                pppdStack_298 = (double ***)0x0;
                ppppdStack_2a0 = (double ****)0x0;
                ppppdStack_288 = (double ****)0x0;
                ppppdStack_290 = (double ****)0x0;
                uStack_280 = (ulong)uStack_280._4_4_ << 0x20;
                FUN_1099a9f0c(&ppppdStack_2d0,&UNK_10f58b708,0x28e,2,FUN_1099aa768,0);
                FUN_1092b4db8(ppppdStack_2c8 + 0xea8,&UNK_10f58ba56,0x1d);
                FUN_1092b4db8();
                FUN_1092b4db8();
                FUN_1092b4db8();
LAB_109934968:
                FUN_1099ab3b0(&ppppdStack_2d0);
                bVar27 = false;
              }
              else {
                lVar48 = 0;
                ppppdVar61 = (double ****)pppdStack_428;
                do {
                  if (ABS(dStack_3a0) * dStack_3a8 < ABS((double)*ppppdVar61)) {
                    lVar48 = lVar48 + 1;
                  }
                  ppppdVar61 = ppppdVar61 + (long)((long)ppppdStack_418 + 1);
                  lStack_398 = lStack_398 + -1;
                } while (lStack_398 != 0);
                if (lVar48 == 0) goto LAB_109934848;
                if (lVar48 != 1) {
                  if (lVar48 != 2) {
                    ppppdStack_2d0 = (double ****)0x0;
                    uStack_278 = 0;
                    ppppdStack_2b8 = (double ****)0x0;
                    ppppdStack_2c0 = (double ****)0x0;
                    ppppdStack_2a8 = (double ****)0x0;
                    ppppdStack_2b0 = (double ****)0x0;
                    pppdStack_298 = (double ***)0x0;
                    ppppdStack_2a0 = (double ****)0x0;
                    ppppdStack_288 = (double ****)0x0;
                    ppppdStack_290 = (double ****)0x0;
                    uStack_280 = (ulong)uStack_280._4_4_ << 0x20;
                    FUN_1099a9f0c(&ppppdStack_2d0,&UNK_10f58b708,0x2a0,2,FUN_1099aa768,0);
                    FUN_1092b4db8(ppppdStack_2c8 + 0xea8,&UNK_10f58bb03,0x34);
                    FUN_1092b4db8();
                    FUN_1092b4db8();
                    FUN_1092b4db8();
                    goto LAB_109934968;
                  }
                  *(undefined1 *)(pdVar9 + 0x17) = 0;
                  if ((long)uStack_420 <= (long)pppppdVar45) {
                    pppppdVar45 = uStack_420;
                  }
                  plVar8 = plVar14;
                  uStack_524 = uVar53;
                  (**(code **)(*plVar14 + 0x28))();
                  iVar6 = (int)plVar8;
                  pppppdVar10 = (double *****)(long)iVar6;
                  ppppdStack_440 = (double ****)0x0;
                  ppppdStack_438 = (double ****)0x0;
                  ppppdStack_430 = (double ****)0x0;
                  plStack_490 = plVar8;
                  pppppdVar11 = (double *****)ppppdStack_440;
                  if (iVar6 != 0) {
                    if (iVar6 < 1) {
                      pppppdVar11 = (double *****)0x0;
                    }
                    else {
                      pppppdVar11 = (double *****)((long)pppppdVar10 << 4);
                      _malloc();
                      if (pppppdVar11 == (double *****)0x0) {
                        ___cxa_allocate_exception(8);
                        __ZNSt9bad_allocC1Ev();
                        ___cxa_throw();
                        goto LAB_109936200;
                      }
                    }
                  }
                  ppppdStack_440 = (double ****)pppppdVar11;
                  lVar48 = 0;
                  ppppdStack_430 = (double ****)0x2;
                  bVar27 = false;
                  do {
                    if (0 < (int)plStack_490) {
                      pppppdVar11 = (double *****)(ppppdStack_440 + lVar48 * (long)pppppdVar10);
                      pppppdVar32 = pppppdVar10;
                      do {
                        ppppdVar61 = (double ****)0x3ff0000000000000;
                        if (lVar48 != 0) {
                          ppppdVar61 = (double ****)0x0;
                        }
                        *pppppdVar11 = ppppdVar61;
                        lVar48 = lVar48 + -1;
                        pppppdVar32 = (double *****)((long)pppppdVar32 + -1);
                        pppppdVar11 = pppppdVar11 + 1;
                      } while (pppppdVar32 != (double *****)0x0);
                    }
                    lVar48 = 1;
                    bVar37 = !bVar27;
                    bVar27 = true;
                  } while (bVar37);
                  pppdStack_530 = (double ***)ppppdVar52;
                  ppppdStack_480 = (double ****)pppppdVar45;
                  ppppdStack_438 = (double ****)pppppdVar10;
                  if ((long)pppppdVar45 < 0x30) {
                    pdVar40 = (double *)0x10;
                    _malloc();
                    if (pdVar40 == (double *)0x0) {
                      ___cxa_allocate_exception(8);
                      __ZNSt9bad_allocC1Ev();
                      ___cxa_throw();
                      goto LAB_109936200;
                    }
                    if (0 < (long)pppppdVar45) {
                      pppppdVar10 = (double *****)0x0;
                      uStack_4f8 = (ulong)pdVar40 & 7;
                      ppppdStack_500 = (double ****)((ulong)pdVar40 >> 3 & 1);
                      uVar50 = ~(ulong)pppppdVar45;
                      pppppdVar32 = (double *****)((long)pppppdVar45 * 8);
                      pppppdVar11 = pppppdVar32 + 1;
                      uStack_508 = 0;
                      uStack_510 = 1;
                      plVar8 = plStack_490;
                      pppppdVar42 = pppppdVar45;
                      do {
                        pppppdVar42 = (double *****)((long)pppppdVar42 + -1);
                        pppppdVar32 = pppppdVar32 + -1;
                        puVar51 = (undefined *)((long)pppppdVar45 + ~(ulong)pppppdVar10);
                        pppppdVar46 = (double *****)((long)uStack_420 - (long)puVar51);
                        pppppdVar55 = pppppdVar46;
                        if ((int)plVar8 != 2) {
                          pppppdVar55 = (double *****)ppppdStack_430;
                        }
                        lVar48 = (long)ppppdStack_438 - (long)pppppdVar46;
                        uVar23 = (long)ppppdStack_430 - (long)pppppdVar55;
                        pppppdVar33 = (double *****)
                                      (ppppdStack_440 + lVar48 + uVar23 * (long)ppppdStack_438);
                        ppppdStack_450 = ppppdStack_410;
                        pppppdVar3 = (double *****)((long)pppppdVar46 + -1);
                        if (pppppdVar3 == (double *****)0x0) {
                          dVar20 = 1.0 - (double)ppppdStack_410[(long)puVar51];
                          if (((ulong)pppppdVar33 & 7) == 0) {
                            if (0 < (long)pppppdVar55) {
                              pdVar21 = (double *)
                                        ((long)ppppdStack_440 +
                                        (long)ppppdStack_438 * 8 * uVar23 +
                                        ((long)((long)ppppdStack_438 + (long)pppppdVar42) -
                                        (long)uStack_420) * 8);
                              do {
                                *pdVar21 = dVar20 * *pdVar21;
                                pdVar21 = pdVar21 + (long)ppppdStack_438;
                                pppppdVar55 = (double *****)((long)pppppdVar55 + -1);
                              } while (pppppdVar55 != (double *****)0x0);
                            }
                          }
                          else if (0 < (long)pppppdVar55) {
                            pdVar21 = (double *)
                                      ((long)ppppdStack_440 +
                                      (long)ppppdStack_438 * 8 * uVar23 +
                                      ((long)((long)ppppdStack_438 + (long)pppppdVar42) -
                                      (long)uStack_420) * 8);
                            do {
                              *pdVar21 = dVar20 * *pdVar21;
                              pdVar21 = pdVar21 + (long)ppppdStack_438;
                              pppppdVar55 = (double *****)((long)pppppdVar55 + -1);
                            } while (pppppdVar55 != (double *****)0x0);
                          }
                        }
                        else if ((double)ppppdStack_410[(long)puVar51] != 0.0) {
                          pppdStack_4e0 = pppdStack_428;
                          ppppdStack_4d8 = ppppdStack_418;
                          ppppdStack_4e8 = (double ****)(pppppdVar33 + 1);
                          ppppdStack_4f0 = ppppdStack_438;
                          ppppdStack_310 = (double ****)&ppppdStack_440;
                          ppppdStack_2f8 = ppppdStack_438;
                          pppppdVar45 = (double *****)ppppdStack_500;
                          if ((long)pppppdVar55 <= (long)ppppdStack_500) {
                            pppppdVar45 = pppppdVar55;
                          }
                          uStack_2e8 = uStack_508;
                          uStack_2f0 = uStack_510;
                          if (uStack_4f8 != 0) {
                            pppppdVar45 = pppppdVar55;
                          }
                          ppppdStack_2e0 = ppppdStack_438;
                          ppppdStack_4b8 = (double ****)uStack_420;
                          ppppdStack_488 = ppppdStack_440;
                          ppppdStack_4a0 = ppppdStack_438;
                          ppppdStack_4d0 = (double ****)pppppdVar3;
                          uStack_4c8 = uVar50;
                          ppppdStack_4c0 = (double ****)pppppdVar42;
                          uStack_4b0 = uVar23;
                          puStack_478 = puVar51;
                          ppppdStack_468 = (double ****)pppppdVar11;
                          ppppdStack_460 = (double ****)pppppdVar32;
                          appppdStack_340[0] = ppppdStack_4e8;
                          appppdStack_340[1] = (double ****)pppppdVar3;
                          appppdStack_340[2] = (double ****)pppppdVar55;
                          appppdStack_340[3] = (double ****)pppppdVar33;
                          appppdStack_340[4] = (double ****)pppppdVar46;
                          ppppdStack_318 = (double ****)pppppdVar55;
                          lStack_308 = lVar48;
                          uStack_300 = uVar23;
                          if (0 < (long)pppppdVar45) {
                            _bzero(pdVar40,(long)pppppdVar45 << 3);
                          }
                          lVar48 = (long)pppppdVar55 - (long)pppppdVar45;
                          uVar50 = lVar48 - (lVar48 >> 0x3f);
                          uVar23 = uVar50 & 0xfffffffffffffffe;
                          puVar51 = (undefined *)(uVar23 + (long)pppppdVar45);
                          if (1 < lVar48) {
                            puVar1 = puVar51;
                            if ((long)puVar51 <= (long)pppppdVar45 + 2) {
                              puVar1 = (undefined *)((long)pppppdVar45 + 2);
                            }
                            uStack_520 = uVar50;
                            uStack_518 = uVar23;
                            _bzero(pdVar40 + (long)pppppdVar45,
                                   ((ulong)(puVar1 + ~(ulong)pppppdVar45) & 0x1ffffffffffffffe) * 8
                                   + 0x10);
                            uVar50 = uStack_520;
                            uVar23 = uStack_518;
                          }
                          if ((long)puVar51 < (long)pppppdVar55) {
                            _bzero(pdVar40 + (long)(((long)uVar50 >> 1) * 2 + (long)pppppdVar45),
                                   (lVar48 - uVar23) * 8);
                          }
                          uVar50 = uStack_4c8;
                          pppppdVar11 = (double *****)((long)ppppdStack_480 - (long)pppppdVar10);
                          pppppdVar32 = (double *****)((long)ppppdStack_4b8 - (long)pppppdVar11);
                          pppppdVar45 = (double *****)
                                        (pppdStack_4e0 +
                                        (long)(puStack_478 +
                                              (long)ppppdStack_4d8 * (long)pppppdVar11));
                          if (pppppdVar55 == (double *****)0x1) {
                            if ((double *****)ppppdStack_4d0 == (double *****)0x0) {
                              dVar20 = 0.0;
                            }
                            else {
                              dVar20 = (double)*pppppdVar45 * (double)*ppppdStack_4e8;
                              if (2 < (long)pppppdVar46) {
                                puVar51 = (undefined *)((long)ppppdStack_4b8 + uStack_4c8);
                                pdVar21 = (double *)
                                          ((long)pppdStack_4e0 +
                                          (long)((long)ppppdStack_460 +
                                                (long)ppppdStack_4d8 * (long)ppppdStack_468));
                                pppppdVar42 = (double *****)
                                              (ppppdStack_488 +
                                              (long)((undefined *)
                                                     ((long)ppppdStack_4a0 + (long)ppppdStack_4c0) +
                                                    (((long)ppppdStack_4a0 * uStack_4b0 + 2) -
                                                    (long)ppppdStack_4b8)));
                                do {
                                  dVar20 = dVar20 + *pdVar21 * (double)*pppppdVar42;
                                  pdVar21 = pdVar21 + (long)ppppdStack_4d8;
                                  puVar51 = puVar51 + -1;
                                  pppppdVar42 = pppppdVar42 + 1;
                                } while (puVar51 != (undefined *)0x0);
                              }
                            }
                            *pdVar40 = dVar20 + *pdVar40;
                            pppppdVar42 = (double *****)ppppdStack_4f0;
LAB_1099355cc:
                            pppppdVar46 = (double *****)0x0;
                            pppppdVar33 = (double *****)
                                          (ppppdStack_488 +
                                          (long)((undefined *)
                                                 ((long)ppppdStack_4a0 + (long)ppppdStack_4c0) +
                                                ((long)ppppdStack_4a0 * uStack_4b0 -
                                                (long)ppppdStack_4b8)));
                            do {
                              pdVar40[(long)pppppdVar46] =
                                   (double)*pppppdVar33 + pdVar40[(long)pppppdVar46];
                              pppppdVar46 = (double *****)((long)pppppdVar46 + 1);
                              pppppdVar33 = pppppdVar33 + (long)pppppdVar42;
                            } while (pppppdVar55 != pppppdVar46);
                            ppppdVar52 = (double ****)ppppdStack_450[(long)puStack_478];
                            pppppdVar46 = (double *****)
                                          (ppppdStack_488 +
                                          (long)((undefined *)
                                                 ((long)ppppdStack_4a0 + (long)ppppdStack_4c0) +
                                                ((long)ppppdStack_4a0 * uStack_4b0 -
                                                (long)ppppdStack_4b8)));
                            pdVar21 = pdVar40;
                            pppppdVar33 = pppppdVar55;
                            do {
                              *pppppdVar46 = (double ****)
                                             ((double)*pppppdVar46 - (double)ppppdVar52 * *pdVar21);
                              pppppdVar46 = pppppdVar46 + (long)pppppdVar42;
                              pppppdVar33 = (double *****)((long)pppppdVar33 + -1);
                              ppppdStack_2b0 = (double ****)pppppdVar45;
                              pdVar21 = pdVar21 + 1;
                            } while (pppppdVar33 != (double *****)0x0);
                          }
                          else {
                            ppppdStack_230 = &pppdStack_428;
                            ppppdStack_218 = (double ****)0x1;
                            ppppdStack_2d0 = ppppdStack_4e8;
                            ppppdStack_2c8 = ppppdStack_4d0;
                            ppppdStack_2a0 = ppppdStack_310;
                            ppppdStack_2a8 = ppppdStack_318;
                            ppppdStack_290 = (double ****)uStack_300;
                            pppdStack_298 = (double ***)lStack_308;
                            uStack_280 = uStack_2f0;
                            ppppdStack_288 = ppppdStack_2f8;
                            ppppdStack_270 = ppppdStack_2e0;
                            uStack_278 = uStack_2e8;
                            ppppdStack_2b0 = appppdStack_340[4];
                            ppppdStack_2b8 = appppdStack_340[3];
                            ppppdStack_4d8 = (double ****)pppppdVar45;
                            ppppdStack_2c0 = (double ****)pppppdVar55;
                            ppppdStack_248 = (double ****)pppppdVar45;
                            ppppdStack_240 = (double ****)pppppdVar32;
                            ppppdStack_228 = (double ****)pppppdVar11;
                            puStack_220 = puStack_478;
                            FUN_109938c48(0x3ff0000000000000,&ppppdStack_2d0,&ppppdStack_248,pdVar40
                                         );
                            ppppdStack_2b0 = ppppdStack_4d8;
                            pppppdVar45 = (double *****)ppppdStack_4d8;
                            pppppdVar42 = (double *****)ppppdStack_438;
                            if (0 < (long)pppppdVar55) goto LAB_1099355cc;
                          }
                          pppppdVar42 = (double *****)ppppdStack_4c0;
                          ppppdStack_2b8 = (double ****)ppppdStack_450[(long)puStack_478];
                          pppdStack_298 = (double ***)&pppdStack_428;
                          uStack_280 = 1;
                          ppppdStack_2c8 = (double ****)pppppdVar32;
                          ppppdStack_2a8 = (double ****)pppppdVar32;
                          ppppdStack_290 = (double ****)pppppdVar11;
                          ppppdStack_288 = (double ****)puStack_478;
                          ppppdStack_270 = (double ****)pdVar40;
                          ppppdStack_260 = (double ****)pppppdVar55;
                          FUN_109938dcc(appppdStack_340,&ppppdStack_2d0,pdVar40);
                          plVar8 = plStack_490;
                          pppppdVar32 = (double *****)ppppdStack_460;
                          pppppdVar11 = (double *****)ppppdStack_468;
                          pppppdVar45 = (double *****)ppppdStack_480;
                        }
                        pppppdVar10 = (double *****)((long)pppppdVar10 + 1);
                        uVar50 = uVar50 + 1;
                        pppppdVar11 = pppppdVar11 + -1;
                      } while (pppppdVar10 != pppppdVar45);
                    }
LAB_1099356bc:
                    _free(pdVar40);
                    ppppdVar61 = ppppdStack_430;
                    ppppdVar52 = ppppdStack_438;
                    pppppdVar45 = (double *****)ppppdStack_440;
                    if ((double *****)pdVar9[0x19] != (double *****)ppppdStack_438 ||
                        (double *****)pdVar9[0x1a] != (double *****)ppppdStack_430) {
                      if (((double *****)ppppdStack_438 != (double *****)0x0) &&
                         ((double *****)ppppdStack_430 != (double *****)0x0)) {
                        lVar48 = 0;
                        if ((double *****)ppppdStack_430 != (double *****)0x0) {
                          lVar48 = 0x7fffffffffffffff / (long)ppppdStack_430;
                        }
                        if ((long)ppppdStack_438 <= lVar48) goto LAB_1099356f4;
                        goto LAB_109935728;
                      }
LAB_1099356f4:
                      uVar50 = (long)ppppdStack_430 * (long)ppppdStack_438;
                      if ((long)pdVar9[0x1a] * (long)pdVar9[0x19] - uVar50 != 0) {
                        _free(pdVar9[0x18]);
                        if (0 < (long)uVar50) {
                          if (uVar50 >> 0x3d == 0) {
                            dVar20 = (double)(uVar50 * 8);
                            _malloc();
                            if (dVar20 != 0.0) goto LAB_109935750;
                          }
LAB_109935728:
                          ___cxa_allocate_exception(8);
                          __ZNSt9bad_allocC1Ev();
                          ___cxa_throw();
                          goto LAB_109936200;
                        }
                        dVar20 = 0.0;
LAB_109935750:
                        pdVar9[0x18] = dVar20;
                      }
                      pdVar9[0x19] = (double)ppppdVar52;
                      pdVar9[0x1a] = (double)ppppdVar61;
                    }
                    if (0 < (long)ppppdVar52) {
                      pppppdVar11 = (double *****)0x0;
                      puVar25 = (undefined8 *)pdVar9[0x18];
                      do {
                        puVar36 = puVar25;
                        pppppdVar10 = pppppdVar45;
                        pppppdVar32 = (double *****)ppppdVar61;
                        if (0 < (long)ppppdVar61) {
                          do {
                            *puVar36 = *pppppdVar10;
                            pppppdVar10 = pppppdVar10 + (long)ppppdVar52;
                            pppppdVar32 = (double *****)((long)pppppdVar32 + -1);
                            puVar36 = puVar36 + 1;
                          } while (pppppdVar32 != (double *****)0x0);
                        }
                        pppppdVar11 = (double *****)((long)pppppdVar11 + 1);
                        pppppdVar45 = pppppdVar45 + 1;
                        puVar25 = puVar25 + (long)ppppdVar61;
                      } while (pppppdVar11 != (double *****)ppppdVar52);
                    }
                    _free(ppppdStack_440);
                    pppppdVar45 = (double *****)pdVar9[0x1a];
                    if (0 < (long)pppppdVar45) {
                      if ((ulong)pppppdVar45 >> 0x3d == 0) {
                        pdVar40 = (double *)0x1;
                        _calloc(1,(long)pppppdVar45 << 3);
                        if (pdVar40 != (double *)0x0) {
                          if (pppppdVar45 != (double *****)0x1) goto LAB_10993583c;
                          dVar20 = pdVar9[0x11];
                          dVar56 = 0.0;
                          if (dVar20 != 0.0) {
                            pdVar28 = (double *)pdVar9[0x18];
                            pdVar21 = (double *)pdVar9[0x10];
                            dVar56 = *pdVar28 * *pdVar21;
                            if (1 < (long)dVar20) {
                              lVar48 = (long)dVar20 + -1;
                              do {
                                pdVar28 = pdVar28 + 1;
                                pdVar21 = pdVar21 + 1;
                                dVar56 = dVar56 + *pdVar28 * *pdVar21;
                                lVar48 = lVar48 + -1;
                              } while (lVar48 != 0);
                            }
                          }
                          *pdVar40 = dVar56 + 0.0;
                          goto LAB_109935874;
                        }
                      }
                      ___cxa_allocate_exception(8);
                      __ZNSt9bad_allocC1Ev();
                      ___cxa_throw();
                      goto LAB_109936200;
                    }
                    pdVar40 = (double *)0x0;
LAB_10993583c:
                    ppppdStack_2d0 = (double ****)pdVar9[0x18];
                    appppdStack_340[0] = (double ****)pdVar9[0x10];
                    appppdStack_340[1] = (double ****)0x1;
                    ppppdStack_2c8 = (double ****)pppppdVar45;
                    FUN_109909a3c(0x3ff0000000000000,pppppdVar45,pdVar9[0x19],&ppppdStack_2d0,
                                  appppdStack_340,pdVar40,1);
LAB_109935874:
                    dVar20 = *pdVar40;
                    pdVar9[0x1c] = pdVar40[1];
                    pdVar9[0x1b] = dVar20;
                    _free(pdVar40);
                    plVar8 = plVar14;
                    (**(code **)(*plVar14 + 0x20))();
                    uVar7 = (uint)plVar8;
                    pppppdVar45 = (double *****)(long)(int)uVar7;
                    if (uVar7 == 0) {
LAB_1099358f0:
                      lVar48 = 0;
                    }
                    else {
                      lVar48 = 0;
                      if (pppppdVar45 != (double *****)0x0) {
                        lVar48 = 0x7fffffffffffffff / (long)pppppdVar45;
                      }
                      if (lVar48 < 2) {
LAB_1099358cc:
                        ___cxa_allocate_exception(8);
                        __ZNSt9bad_allocC1Ev();
                        ___cxa_throw();
                        goto LAB_109936200;
                      }
                      if ((int)uVar7 < 1) goto LAB_1099358f0;
                      lVar48 = 1;
                      _calloc(1,(long)pppppdVar45 << 4);
                      if (lVar48 == 0) goto LAB_1099358cc;
                    }
                    dVar20 = pdVar9[0xd];
                    if (0 < (long)dVar20) {
                      if ((ulong)dVar20 >> 0x3d == 0) {
                        pdVar40 = (double *)pdVar9[0x18];
                        ppppdStack_450 = (double ****)pdVar9[0x1a];
                        lVar43 = (long)dVar20 << 3;
                        dVar56 = pdVar9[0xc];
                        _malloc();
                        if (lVar43 != 0) {
                          dVar58 = 0.0;
                          do {
                            *(double *)(lVar43 + (long)dVar58 * 8) =
                                 *pdVar40 / *(double *)((long)dVar56 + (long)dVar58 * 8);
                            dVar58 = (double)((long)dVar58 + 1);
                            pdVar40 = pdVar40 + (long)ppppdStack_450;
                          } while (dVar20 != dVar58);
                          goto LAB_10993595c;
                        }
                      }
                      ___cxa_allocate_exception(8);
                      __ZNSt9bad_allocC1Ev();
                      ___cxa_throw();
                      goto LAB_109936200;
                    }
                    lVar43 = 0;
LAB_10993595c:
                    (**(code **)(*plVar14 + 0x10))(plVar14,lVar43,lVar48);
                    dVar24 = pdVar9[0x1a];
                    dVar56 = pdVar9[0xc];
                    dVar58 = pdVar9[0xd];
                    if (dVar20 == dVar58) {
                      pppppdVar11 = (double *****)pdVar9[0x18];
                      if (0 < (long)dVar20) {
LAB_1099359cc:
                        dVar20 = 0.0;
                        pppppdVar11 = pppppdVar11 + 1;
                        do {
                          *(double *)(lVar43 + (long)dVar20 * 8) =
                               (double)*pppppdVar11 / *(double *)((long)dVar56 + (long)dVar20 * 8);
                          dVar20 = (double)((long)dVar20 + 1);
                          pppppdVar11 = pppppdVar11 + (long)dVar24;
                        } while (dVar58 != dVar20);
                      }
                    }
                    else {
                      ppppdStack_450 = (double ****)pdVar9[0x18];
                      _free(lVar43);
                      if (0 < (long)dVar58) {
                        if ((ulong)dVar58 >> 0x3d == 0) {
                          lVar43 = (long)dVar58 << 3;
                          _malloc();
                          pppppdVar11 = (double *****)ppppdStack_450;
                          if (lVar43 != 0) goto LAB_1099359cc;
                        }
                        ___cxa_allocate_exception(8);
                        __ZNSt9bad_allocC1Ev();
                        ___cxa_throw();
                        goto LAB_109936200;
                      }
                      lVar43 = 0;
                    }
                    (**(code **)(*plVar14 + 0x10))(plVar14,lVar43,lVar48 + (long)pppppdVar45 * 8);
                    uVar53 = uStack_524;
                    if ((undefined *)((long)pppppdVar45 + -1) < (undefined *)0xf) {
                      lVar15 = 0;
                      pppppdVar11 = (double *****)((ulong)pppppdVar45 & 0xc);
                      lVar34 = (long)pppppdVar45 * 8;
                      lVar44 = lVar48 + ((ulong)pppppdVar45 >> 1 & 7) * 0x10;
                      bVar27 = true;
                      do {
                        bVar37 = bVar27;
                        lVar39 = 0;
                        pdVar40 = (double *)(lVar48 + lVar15 * (long)pppppdVar45 * 8);
                        bVar27 = true;
                        do {
                          bVar17 = bVar27;
                          pdVar21 = (double *)(lVar48 + lVar39 * (long)pppppdVar45 * 8);
                          if (uVar7 < 2) {
                            ppppdVar52 = (double ****)(*pdVar21 * *pdVar40);
                          }
                          else {
                            dVar20 = *pdVar21 * *pdVar40;
                            dVar56 = pdVar21[1] * pdVar40[1];
                            if (3 < uVar7) {
                              dVar58 = pdVar21[2] * pdVar40[2];
                              dVar24 = pdVar21[3] * pdVar40[3];
                              if (7 < uVar7) {
                                pdVar18 = (double *)(lVar48 + 0x30 + lVar34 * lVar39);
                                pppppdVar10 = (double *****)0x4;
                                pdVar28 = (double *)(lVar48 + 0x30 + lVar34 * lVar15);
                                do {
                                  dVar20 = dVar20 + pdVar18[-2] * pdVar28[-2];
                                  dVar56 = dVar56 + pdVar18[-1] * pdVar28[-1];
                                  dVar58 = dVar58 + *pdVar18 * *pdVar28;
                                  dVar24 = dVar24 + pdVar18[1] * pdVar28[1];
                                  pppppdVar10 = (double *****)((long)pppppdVar10 + 4);
                                  pdVar28 = pdVar28 + 4;
                                  pdVar18 = pdVar18 + 4;
                                } while (pppppdVar10 < pppppdVar11);
                              }
                              dVar20 = dVar58 + dVar20;
                              dVar56 = dVar24 + dVar56;
                              if (pppppdVar11 < (double *****)((ulong)pppppdVar45 & 0xe)) {
                                dVar20 = dVar20 + pdVar21[(long)pppppdVar11] *
                                                  pdVar40[(long)pppppdVar11];
                                dVar56 = dVar56 + (pdVar21 + (long)pppppdVar11)[1] *
                                                  (pdVar40 + (long)pppppdVar11)[1];
                              }
                            }
                            ppppdVar52 = (double ****)(dVar20 + dVar56);
                            if (pppppdVar45 != (double *****)((ulong)pppppdVar45 & 0xe)) {
                              pdVar21 = (double *)(lVar44 + lVar34 * lVar39);
                              pdVar28 = (double *)(lVar44 + lVar34 * lVar15);
                              uVar50 = (ulong)pppppdVar45 & 0xfffffffffffffff1;
                              do {
                                ppppdVar52 = (double ****)((double)ppppdVar52 + *pdVar21 * *pdVar28)
                                ;
                                uVar50 = uVar50 - 1;
                                pdVar21 = pdVar21 + 1;
                                pdVar28 = pdVar28 + 1;
                              } while (uVar50 != 0);
                            }
                          }
                          appppdStack_340[lVar15 * 2 + lVar39] = ppppdVar52;
                          lVar39 = 1;
                          bVar27 = false;
                        } while (bVar17);
                        lVar15 = 1;
                        bVar27 = false;
                      } while (bVar37);
                    }
                    else {
                      appppdStack_340[1] = (double ****)0x0;
                      appppdStack_340[0] = (double ****)0x0;
                      appppdStack_340[3] = (double ****)0x0;
                      appppdStack_340[2] = (double ****)0x0;
                      if (uVar7 != 0) {
                        ppppdStack_2c8 = (double ****)0x0;
                        ppppdStack_2d0 = (double ****)0x0;
                        ppppdStack_2b8 = (double ****)0x2;
                        ppppdStack_2c0 = (double ****)0x2;
                        ppppdStack_2b0 = (double ****)pppppdVar45;
                        if ((bRam00000001132dfa18 & 1) == 0) {
                          iVar6 = 0x132dfa18;
                          ___cxa_guard_acquire();
                          if (iVar6 != 0) {
                            uRam00000001132dfa08 = 0x80000;
                            uRam00000001132dfa00 = 0x4000;
                            lRam00000001132dfa10 = 0x80000;
                            ___cxa_guard_release(0x1132dfa18);
                          }
                        }
                        ppppdVar52 = ppppdStack_2b0;
                        pppppdVar11 = (double *****)ppppdStack_2c0;
                        if ((long)ppppdStack_2c0 <= (long)ppppdStack_2b8) {
                          pppppdVar11 = (double *****)ppppdStack_2b8;
                        }
                        pppppdVar10 = (double *****)ppppdStack_2b0;
                        if ((long)ppppdStack_2b0 <= (long)pppppdVar11) {
                          pppppdVar10 = pppppdVar11;
                        }
                        ppppdStack_2a0 = ppppdVar52;
                        if (0x2f < (long)pppppdVar10) {
                          pppppdVar11 = (double *****)
                                        ((long)(uRam00000001132dfa00 - 0xc0) / 0x50 &
                                        0xfffffffffffffff8);
                          if ((long)pppppdVar11 < 2) {
                            pppppdVar11 = (double *****)0x1;
                          }
                          if ((long)pppppdVar11 < (long)ppppdStack_2b0) {
                            uVar50 = 0;
                            if (pppppdVar11 != (double *****)0x0) {
                              uVar50 = (ulong)ppppdStack_2b0 / (ulong)pppppdVar11;
                            }
                            uVar23 = (long)ppppdStack_2b0 - uVar50 * (long)pppppdVar11;
                            ppppdStack_2b0 = (double ****)pppppdVar11;
                            if (uVar23 != 0) {
                              lVar44 = uVar50 * 8 + 8;
                              lVar15 = 0;
                              if (lVar44 != 0) {
                                lVar15 = (long)((long)pppppdVar11 + ~uVar23) / lVar44;
                              }
                              ppppdStack_2b0 = (double ****)(pppppdVar11 + -lVar15);
                            }
                          }
                          uVar50 = (uRam00000001132dfa00 - 0xc0) +
                                   (long)ppppdStack_2c0 * (long)ppppdStack_2b0 * -8;
                          if ((long)uVar50 < (long)ppppdStack_2b0 * 0x20) {
                            uVar23 = 0;
                            if ((long)pppppdVar11 << 5 != 0) {
                              uVar23 = 0x480000 / (ulong)((long)pppppdVar11 << 5);
                            }
                          }
                          else {
                            uVar23 = 0;
                            if ((long)ppppdStack_2b0 << 3 != 0) {
                              uVar23 = uVar50 / (ulong)((long)ppppdStack_2b0 << 3);
                            }
                          }
                          uVar50 = 0;
                          if ((long)ppppdStack_2b0 << 4 != 0) {
                            uVar50 = 0x180000 / (ulong)((long)ppppdStack_2b0 << 4);
                          }
                          if ((long)uVar50 <= (long)uVar23) {
                            uVar23 = uVar50;
                          }
                          pppppdVar11 = (double *****)(uVar23 & 0xfffffffffffffffc);
                          ppppdStack_2a0 = ppppdStack_2b0;
                          if ((long)pppppdVar11 < (long)ppppdStack_2b8) {
                            lVar44 = 0;
                            if (pppppdVar11 != (double *****)0x0) {
                              lVar44 = (long)ppppdStack_2b8 / (long)pppppdVar11;
                            }
                            lVar15 = (long)ppppdStack_2b8 - lVar44 * (long)pppppdVar11;
                            ppppdStack_2b8 = (double ****)pppppdVar11;
                            if (lVar15 != 0) {
                              lVar44 = lVar44 * 4 + 4;
                              lVar34 = 0;
                              if (lVar44 != 0) {
                                lVar34 = ((long)pppppdVar11 - lVar15) / lVar44;
                              }
                              ppppdStack_2b8 = (double ****)((long)pppppdVar11 + lVar34 * -4);
                            }
                          }
                          else if (ppppdVar52 == ppppdStack_2b0) {
                            uVar23 = (long)ppppdVar52 * (long)ppppdStack_2b8 * 8;
                            pppppdVar11 = (double *****)ppppdStack_2c0;
                            uVar50 = uRam00000001132dfa00;
                            if (0x400 < (long)uVar23) {
                              if (0x23f < (long)ppppdStack_2c0) {
                                pppppdVar11 = (double *****)0x240;
                              }
                              uVar50 = uRam00000001132dfa08;
                              if (lRam00000001132dfa10 == 0 || 0x8000 < uVar23) {
                                uVar50 = 0x180000;
                                pppppdVar11 = (double *****)ppppdStack_2c0;
                              }
                            }
                            pppppdVar10 = (double *****)0x0;
                            if ((long)ppppdVar52 * 0x18 != 0) {
                              pppppdVar10 = (double *****)
                                            (uVar50 / (ulong)((long)ppppdVar52 * 0x18));
                            }
                            if ((long)pppppdVar10 <= (long)pppppdVar11) {
                              pppppdVar11 = pppppdVar10;
                            }
                            if ((long)pppppdVar11 < 7) {
                              ppppdStack_2a0 = ppppdVar52;
                              if (pppppdVar11 == (double *****)0x0) goto LAB_109935ed0;
                            }
                            else {
                              pppppdVar11 = (double *****)
                                            ((((ulong)pppppdVar11 / 6) * 2 + (ulong)pppppdVar11 / 6)
                                            * 2);
                            }
                            lVar44 = 0;
                            if (pppppdVar11 != (double *****)0x0) {
                              lVar44 = (long)ppppdStack_2c0 / (long)pppppdVar11;
                            }
                            lVar15 = (long)ppppdStack_2c0 - lVar44 * (long)pppppdVar11;
                            ppppdStack_2a0 = ppppdVar52;
                            ppppdStack_2c0 = (double ****)pppppdVar11;
                            if (lVar15 != 0) {
                              lVar34 = lVar44 * 6 + 6;
                              lVar44 = 0;
                              if (lVar34 != 0) {
                                lVar44 = ((long)pppppdVar11 - lVar15) / lVar34;
                              }
                              ppppdStack_2c0 = (double ****)((long)pppppdVar11 + lVar44 * -6);
                            }
                          }
                        }
LAB_109935ed0:
                        ppppdStack_2a8 = (double ****)((long)ppppdStack_2c0 * (long)ppppdStack_2a0);
                        ppppdStack_2a0 = (double ****)((long)ppppdStack_2a0 * (long)ppppdStack_2b8);
                        ppppdStack_540 = (double ****)&ppppdStack_2d0;
                        uStack_538 = 0;
                        ppppdStack_550 = (double ****)0x1;
                        ppppdStack_548 = (double ****)0x2;
                        FUN_109913d80(0x3ff0000000000000,2,2,pppppdVar45,lVar48,pppppdVar45,lVar48,
                                      pppppdVar45,appppdStack_340);
                        _free(ppppdStack_2d0);
                        _free(ppppdStack_2c8);
                      }
                    }
                    ppppdVar41 = appppdStack_340[3];
                    ppppdVar61 = appppdStack_340[2];
                    ppppdVar52 = appppdStack_340[0];
                    pdVar9[0x1e] = (double)appppdStack_340[1];
                    pdVar9[0x1d] = (double)ppppdVar52;
                    pdVar9[0x20] = (double)ppppdVar41;
                    pdVar9[0x1f] = (double)ppppdVar61;
                    _free(lVar43);
                    _free(lVar48);
                    bVar27 = true;
                    ppppdVar52 = (double ****)pppdStack_530;
                    goto LAB_109934974;
                  }
                  puVar51 = (undefined *)0x0;
                  pppppdVar11 = (double *****)((ulong)((long)pppppdVar45 + 1) >> 1);
                  if ((double *****)0x5f < pppppdVar45) {
                    pppppdVar11 = (double *****)0x30;
                  }
                  uStack_4a8 = 0x80000;
                  uStack_4b0 = 0x4000;
                  ppppdStack_4a0 = (double ****)pppppdVar11;
                  do {
                    ppppdVar52 = ppppdStack_438;
                    pppppdVar45 = (double *****)((long)pppppdVar45 - (long)puVar51);
                    appppdStack_340[4] =
                         (double ****)
                         ((long)pppppdVar45 - (long)pppppdVar11 &
                         ((long)pppppdVar45 - (long)pppppdVar11 >> 0x3f ^ 0xffffffffffffffffU));
                    appppdStack_340[1] = (double ****)((long)uStack_420 - (long)appppdStack_340[4]);
                    appppdStack_340[0] =
                         (double ****)
                         (pppdStack_428 +
                         (long)((long)appppdStack_340[4] +
                               (long)ppppdStack_418 * (long)appppdStack_340[4]));
                    pppppdVar10 = pppppdVar45;
                    if ((long)pppppdVar11 <= (long)pppppdVar45) {
                      pppppdVar10 = pppppdVar11;
                    }
                    appppdStack_340[3] = &pppdStack_428;
                    ppppdStack_310 = ppppdStack_418;
                    ppppdStack_468 = ppppdStack_440;
                    puVar1 = (undefined *)
                             ((long)ppppdStack_438 + ((long)appppdStack_340[4] - (long)uStack_420));
                    pppppdVar11 = (double *****)appppdStack_340[1];
                    puVar2 = puVar1;
                    if ((int)plStack_490 != 2) {
                      puVar2 = (undefined *)0x0;
                      pppppdVar11 = (double *****)ppppdStack_430;
                    }
                    ppppdStack_248 = ppppdStack_410 + (long)appppdStack_340[4];
                    ppppdStack_230 = ppppdStack_488;
                    ppppdStack_218 = (double ****)uStack_408;
                    lStack_360 = 0;
                    ppppdStack_358 = (double ****)0x0;
                    ppppdStack_350 = (double ****)0x0;
                    lVar48 = lStack_360;
                    appppdStack_340[2] = (double ****)pppppdVar10;
                    ppppdStack_318 = appppdStack_340[4];
                    ppppdStack_240 = (double ****)pppppdVar10;
                    ppppdStack_228 = appppdStack_340[4];
                    if (pppppdVar45 != (double *****)appppdStack_340[4]) {
                      lVar48 = 0;
                      if (pppppdVar10 != (double *****)0x0) {
                        lVar48 = 0x7fffffffffffffff / (long)pppppdVar10;
                      }
                      if ((long)pppppdVar10 <= lVar48 &&
                          (ulong)((long)pppppdVar10 * (long)pppppdVar10) >> 0x3d == 0) {
                        lVar48 = (long)pppppdVar10 * (long)pppppdVar10 * 8;
                        _malloc();
                        if (lVar48 != 0) goto LAB_109934b80;
                      }
                      ___cxa_allocate_exception(8);
                      __ZNSt9bad_allocC1Ev();
                      ___cxa_throw();
                      goto LAB_109936200;
                    }
LAB_109934b80:
                    lStack_360 = lVar48;
                    ppppdStack_358 = (double ****)pppppdVar10;
                    ppppdStack_350 = (double ****)pppppdVar10;
                    FUN_10991057c(&lStack_360,appppdStack_340,&ppppdStack_248);
                    ppppdVar41 = appppdStack_340[2];
                    ppppdVar61 = appppdStack_340[1];
                    ppppdStack_450 = appppdStack_340[0];
                    ppppdStack_460 = appppdStack_340[3];
                    pdStack_378 = (double *)0x0;
                    ppppdStack_370 = (double ****)0x0;
                    ppppdStack_368 = (double ****)0x0;
                    if ((pppppdVar11 != (double *****)0x0) &&
                       ((double *****)appppdStack_340[2] != (double *****)0x0)) {
                      lVar48 = 0;
                      if (pppppdVar11 != (double *****)0x0) {
                        lVar48 = 0x7fffffffffffffff / (long)pppppdVar11;
                      }
                      if ((long)appppdStack_340[2] <= lVar48) goto LAB_109934bcc;
LAB_109935fa0:
                      ___cxa_allocate_exception(8);
                      __ZNSt9bad_allocC1Ev();
                      ___cxa_throw();
                      goto LAB_109936200;
                    }
LAB_109934bcc:
                    uVar50 = (long)appppdStack_340[2] * (long)pppppdVar11;
                    pdVar40 = pdStack_378;
                    if (0 < (long)uVar50) {
                      if (uVar50 >> 0x3d == 0) {
                        pdVar40 = (double *)0x1;
                        _calloc(1,uVar50 * 8);
                        if (pdVar40 != (double *)0x0) goto LAB_109934bf4;
                      }
                      goto LAB_109935fa0;
                    }
LAB_109934bf4:
                    pdStack_378 = pdVar40;
                    ppppdStack_370 = ppppdVar41;
                    pppppdVar10 = (double *****)ppppdVar61;
                    if ((long)ppppdVar41 <= (long)ppppdVar61) {
                      pppppdVar10 = (double *****)ppppdVar41;
                    }
                    ppppdStack_2c8 = (double ****)0x0;
                    ppppdStack_2d0 = (double ****)0x0;
                    ppppdStack_2b0 = ppppdVar61;
                    puStack_478 = puVar51;
                    ppppdStack_368 = (double ****)pppppdVar11;
                    ppppdStack_2c0 = (double ****)pppppdVar10;
                    ppppdStack_2b8 = (double ****)pppppdVar11;
                    if ((bRam00000001132dfa18 & 1) == 0) {
                      iVar6 = 0x132dfa18;
                      ___cxa_guard_acquire();
                      if (iVar6 != 0) {
                        uRam00000001132dfa08 = uStack_4a8;
                        uRam00000001132dfa00 = uStack_4b0;
                        lRam00000001132dfa10 = 0x80000;
                        ___cxa_guard_release(0x1132dfa18);
                      }
                    }
                    pppppdVar45 = pppppdVar10;
                    if ((long)pppppdVar10 <= (long)pppppdVar11) {
                      pppppdVar45 = pppppdVar11;
                    }
                    pppppdVar32 = (double *****)ppppdVar61;
                    if ((long)ppppdVar61 <= (long)pppppdVar45) {
                      pppppdVar32 = pppppdVar45;
                    }
                    ppppdStack_2a0 = ppppdVar61;
                    ppppdStack_2a8 = (double ****)pppppdVar10;
                    if (0x2f < (long)pppppdVar32) {
                      pppppdVar45 = (double *****)
                                    ((long)(uRam00000001132dfa00 - 0xc0) / 0x140 &
                                    0xfffffffffffffff8);
                      if ((long)pppppdVar45 < 2) {
                        pppppdVar45 = (double *****)0x1;
                      }
                      if ((long)pppppdVar45 < (long)ppppdVar61) {
                        uVar50 = 0;
                        if (pppppdVar45 != (double *****)0x0) {
                          uVar50 = (ulong)ppppdVar61 / (ulong)pppppdVar45;
                        }
                        uVar23 = (long)ppppdVar61 - uVar50 * (long)pppppdVar45;
                        ppppdStack_2a0 = (double ****)pppppdVar45;
                        ppppdStack_2b0 = (double ****)pppppdVar45;
                        if (uVar23 != 0) {
                          lVar48 = uVar50 * 8 + 8;
                          lVar43 = 0;
                          if (lVar48 != 0) {
                            lVar43 = (long)((long)pppppdVar45 + ~uVar23) / lVar48;
                          }
                          ppppdStack_2a0 = (double ****)(pppppdVar45 + -lVar43);
                          ppppdStack_2b0 = (double ****)(pppppdVar45 + -lVar43);
                        }
                      }
                      uVar50 = (uRam00000001132dfa00 - 0xc0) +
                               (long)pppppdVar10 * (long)ppppdStack_2a0 * -8;
                      if ((long)uVar50 < (long)ppppdStack_2a0 * 0x20) {
                        uVar23 = 0;
                        if ((long)pppppdVar45 << 5 != 0) {
                          uVar23 = 0x480000 / (ulong)((long)pppppdVar45 << 5);
                        }
                      }
                      else {
                        uVar23 = 0;
                        if ((long)ppppdStack_2a0 << 3 != 0) {
                          uVar23 = uVar50 / (ulong)((long)ppppdStack_2a0 << 3);
                        }
                      }
                      uVar50 = 0;
                      if ((long)ppppdStack_2a0 << 4 != 0) {
                        uVar50 = 0x180000 / (ulong)((long)ppppdStack_2a0 << 4);
                      }
                      if ((long)uVar50 <= (long)uVar23) {
                        uVar23 = uVar50;
                      }
                      if ((ppppdVar61 == ppppdStack_2a0) &&
                         ((long)pppppdVar11 <= (long)(uVar23 & 0xfffffffffffffffc))) {
                        uVar23 = (long)ppppdVar61 * (long)pppppdVar11 * 8;
                        uVar50 = uRam00000001132dfa00;
                        pppppdVar45 = pppppdVar10;
                        if (0x400 < (long)uVar23) {
                          if (0x23f < (long)pppppdVar10) {
                            pppppdVar45 = (double *****)0x240;
                          }
                          uVar50 = uRam00000001132dfa08;
                          if (0x8000 < uVar23 || lRam00000001132dfa10 == 0) {
                            uVar50 = 0x180000;
                            pppppdVar45 = pppppdVar10;
                          }
                        }
                        pppppdVar32 = (double *****)0x0;
                        if ((long)ppppdVar61 * 0x18 != 0) {
                          pppppdVar32 = (double *****)(uVar50 / (ulong)((long)ppppdVar61 * 0x18));
                        }
                        if ((long)pppppdVar32 <= (long)pppppdVar45) {
                          pppppdVar45 = pppppdVar32;
                        }
                        if ((long)pppppdVar45 < 7) {
                          ppppdStack_2a0 = ppppdVar61;
                          if (pppppdVar45 == (double *****)0x0) goto LAB_109934dd8;
                        }
                        else {
                          pppppdVar45 = (double *****)
                                        ((((ulong)pppppdVar45 / 6) * 2 + (ulong)pppppdVar45 / 6) * 2
                                        );
                        }
                        lVar48 = 0;
                        if (pppppdVar45 != (double *****)0x0) {
                          lVar48 = (long)pppppdVar10 / (long)pppppdVar45;
                        }
                        lVar43 = (long)pppppdVar10 - lVar48 * (long)pppppdVar45;
                        ppppdStack_2a0 = ppppdVar61;
                        ppppdStack_2a8 = (double ****)pppppdVar45;
                        ppppdStack_2c0 = (double ****)pppppdVar45;
                        if (lVar43 != 0) {
                          lVar44 = lVar48 * 6 + 6;
                          lVar48 = 0;
                          if (lVar44 != 0) {
                            lVar48 = ((long)pppppdVar45 - lVar43) / lVar44;
                          }
                          ppppdStack_2a8 = (double ****)((long)pppppdVar45 + lVar48 * -6);
                          ppppdStack_2c0 = ppppdStack_2a8;
                        }
                      }
                    }
LAB_109934dd8:
                    pppppdVar32 = (double *****)
                                  (ppppdStack_468 + (long)(puVar1 + (long)puVar2 * (long)ppppdVar52)
                                  );
                    ppppdStack_2a8 = (double ****)((long)ppppdStack_2a8 * (long)ppppdStack_2a0);
                    ppppdStack_2a0 = (double ****)((long)ppppdStack_2a0 * (long)pppppdVar11);
                    ppppdStack_548 = (double ****)&ppppdStack_2d0;
                    ppppdStack_550 = ppppdStack_370;
                    FUN_109937e78(0x3ff0000000000000,pppppdVar10,pppppdVar11,ppppdVar61,
                                  ppppdStack_450,ppppdStack_460[2],pppppdVar32,ppppdStack_438,
                                  pdStack_378);
                    _free(ppppdStack_2d0);
                    _free(ppppdStack_2c8);
                    plStack_388 = &lStack_360;
                    ppdStack_380 = &pdStack_378;
                    ppppdStack_2c8 = (double ****)0x0;
                    ppppdStack_2d0 = (double ****)0x0;
                    ppppdStack_2c0 = (double ****)0x0;
                    FUN_109911fd0(&ppppdStack_2d0,&plStack_388,&uStack_341);
                    ppppdVar22 = ppppdStack_2c0;
                    ppppdVar41 = ppppdStack_2c8;
                    ppppdVar52 = ppppdStack_2d0;
                    if ((ppppdStack_370 != ppppdStack_2c8) || (ppppdStack_368 != ppppdStack_2c0)) {
                      if (((double *****)ppppdStack_2c8 != (double *****)0x0) &&
                         ((double *****)ppppdStack_2c0 != (double *****)0x0)) {
                        lVar48 = 0;
                        if ((double *****)ppppdStack_2c0 != (double *****)0x0) {
                          lVar48 = 0x7fffffffffffffff / (long)ppppdStack_2c0;
                        }
                        if ((long)ppppdStack_2c8 <= lVar48) goto LAB_109934ea8;
                        goto LAB_109935fe8;
                      }
LAB_109934ea8:
                      uVar50 = (long)ppppdStack_2c0 * (long)ppppdStack_2c8;
                      pdVar40 = pdStack_378;
                      if ((long)ppppdStack_368 * (long)ppppdStack_370 - uVar50 != 0) {
                        _free(pdStack_378);
                        if (0 < (long)uVar50) {
                          if (uVar50 >> 0x3d == 0) {
                            pdVar40 = (double *)(uVar50 * 8);
                            _malloc();
                            if (pdVar40 != (double *)0x0) goto LAB_109934ee8;
                          }
LAB_109935fe8:
                          ___cxa_allocate_exception(8);
                          __ZNSt9bad_allocC1Ev();
                          ___cxa_throw();
                          goto LAB_109936200;
                        }
                        pdVar40 = (double *)0x0;
                      }
LAB_109934ee8:
                      pdStack_378 = pdVar40;
                      ppppdStack_370 = ppppdVar41;
                      ppppdStack_368 = ppppdVar22;
                    }
                    lVar48 = (long)ppppdVar22 * (long)ppppdVar41;
                    uVar50 = lVar48 - (lVar48 >> 0x3f) & 0xfffffffffffffffe;
                    if (1 < lVar48) {
                      lVar43 = 0;
                      pdVar40 = pdStack_378;
                      pppppdVar45 = (double *****)ppppdVar52;
                      do {
                        ppppdVar41 = *pppppdVar45;
                        pdVar40[1] = (double)pppppdVar45[1];
                        *pdVar40 = (double)ppppdVar41;
                        lVar43 = lVar43 + 2;
                        pdVar40 = pdVar40 + 2;
                        pppppdVar45 = pppppdVar45 + 2;
                      } while (lVar43 < (long)uVar50);
                    }
                    lVar43 = lVar48 % 2;
                    if (lVar43 != 0 && lVar43 < 0 == SBORROW8(lVar48,uVar50)) {
                      pdVar40 = pdStack_378 + (lVar48 / 2) * 2;
                      pppppdVar45 = (double *****)(ppppdVar52 + (lVar48 / 2) * 2);
                      do {
                        *pdVar40 = (double)*pppppdVar45;
                        lVar43 = lVar43 + -1;
                        pdVar40 = pdVar40 + 1;
                        pppppdVar45 = pppppdVar45 + 1;
                      } while (lVar43 != 0);
                    }
                    _free(ppppdStack_2d0);
                    ppppdVar52 = ppppdStack_368;
                    pppppdVar45 = (double *****)ppppdStack_480;
                    ppppdStack_2c8 = (double ****)0x0;
                    ppppdStack_2d0 = (double ****)0x0;
                    ppppdStack_2c0 = ppppdVar61;
                    ppppdStack_2b8 = ppppdStack_368;
                    ppppdStack_2b0 = (double ****)pppppdVar10;
                    if ((bRam00000001132dfa18 & 1) == 0) {
                      iVar6 = 0x132dfa18;
                      ___cxa_guard_acquire();
                      if (iVar6 != 0) {
                        uRam00000001132dfa08 = uStack_4a8;
                        uRam00000001132dfa00 = uStack_4b0;
                        lRam00000001132dfa10 = 0x80000;
                        ___cxa_guard_release(0x1132dfa18);
                      }
                    }
                    pppppdVar11 = (double *****)ppppdVar61;
                    if ((long)ppppdVar61 <= (long)ppppdVar52) {
                      pppppdVar11 = (double *****)ppppdVar52;
                    }
                    ppppdStack_2a0 = (double ****)pppppdVar10;
                    ppppdStack_2a8 = ppppdVar61;
                    if (0x2f < (long)pppppdVar11) {
                      pppppdVar11 = (double *****)
                                    ((long)(uRam00000001132dfa00 - 0xc0) / 0x140 &
                                    0xfffffffffffffff8);
                      if ((long)pppppdVar11 < 2) {
                        pppppdVar11 = (double *****)0x1;
                      }
                      if ((long)pppppdVar11 < (long)pppppdVar10) {
                        uVar50 = 0;
                        if (pppppdVar11 != (double *****)0x0) {
                          uVar50 = (ulong)pppppdVar10 / (ulong)pppppdVar11;
                        }
                        uVar23 = (long)pppppdVar10 - uVar50 * (long)pppppdVar11;
                        ppppdStack_2a0 = (double ****)pppppdVar11;
                        ppppdStack_2b0 = (double ****)pppppdVar11;
                        if (uVar23 != 0) {
                          lVar48 = uVar50 * 8 + 8;
                          lVar43 = 0;
                          if (lVar48 != 0) {
                            lVar43 = (long)((long)pppppdVar11 + ~uVar23) / lVar48;
                          }
                          ppppdStack_2a0 = (double ****)(pppppdVar11 + -lVar43);
                          ppppdStack_2b0 = (double ****)(pppppdVar11 + -lVar43);
                        }
                      }
                      uVar50 = (uRam00000001132dfa00 - 0xc0) +
                               (long)ppppdVar61 * (long)ppppdStack_2a0 * -8;
                      if ((long)uVar50 < (long)ppppdStack_2a0 * 0x20) {
                        uVar23 = 0;
                        if ((long)pppppdVar11 << 5 != 0) {
                          uVar23 = 0x480000 / (ulong)((long)pppppdVar11 << 5);
                        }
                      }
                      else {
                        uVar23 = 0;
                        if ((long)ppppdStack_2a0 << 3 != 0) {
                          uVar23 = uVar50 / (ulong)((long)ppppdStack_2a0 << 3);
                        }
                      }
                      uVar50 = 0;
                      if ((long)ppppdStack_2a0 << 4 != 0) {
                        uVar50 = 0x180000 / (ulong)((long)ppppdStack_2a0 << 4);
                      }
                      if ((long)uVar50 <= (long)uVar23) {
                        uVar23 = uVar50;
                      }
                      if ((pppppdVar10 == (double *****)ppppdStack_2a0) &&
                         ((long)ppppdVar52 <= (long)(uVar23 & 0xfffffffffffffffc))) {
                        uVar23 = (long)pppppdVar10 * (long)ppppdVar52 * 8;
                        uVar50 = uRam00000001132dfa00;
                        pppppdVar11 = (double *****)ppppdVar61;
                        if (0x400 < (long)uVar23) {
                          if (0x23f < (long)ppppdVar61) {
                            pppppdVar11 = (double *****)0x240;
                          }
                          uVar50 = uRam00000001132dfa08;
                          if (0x8000 < uVar23 || lRam00000001132dfa10 == 0) {
                            uVar50 = 0x180000;
                            pppppdVar11 = (double *****)ppppdVar61;
                          }
                        }
                        pppppdVar42 = (double *****)0x0;
                        if ((long)pppppdVar10 * 0x18 != 0) {
                          pppppdVar42 = (double *****)(uVar50 / (ulong)((long)pppppdVar10 * 0x18));
                        }
                        if ((long)pppppdVar42 <= (long)pppppdVar11) {
                          pppppdVar11 = pppppdVar42;
                        }
                        if ((long)pppppdVar11 < 7) {
                          ppppdStack_2a0 = (double ****)pppppdVar10;
                          if (pppppdVar11 == (double *****)0x0) goto LAB_109935120;
                        }
                        else {
                          pppppdVar11 = (double *****)
                                        ((((ulong)pppppdVar11 / 6) * 2 + (ulong)pppppdVar11 / 6) * 2
                                        );
                        }
                        lVar48 = 0;
                        if (pppppdVar11 != (double *****)0x0) {
                          lVar48 = (long)ppppdVar61 / (long)pppppdVar11;
                        }
                        lVar43 = (long)ppppdVar61 - lVar48 * (long)pppppdVar11;
                        ppppdStack_2a0 = (double ****)pppppdVar10;
                        ppppdStack_2a8 = (double ****)pppppdVar11;
                        ppppdStack_2c0 = (double ****)pppppdVar11;
                        if (lVar43 != 0) {
                          lVar44 = lVar48 * 6 + 6;
                          lVar48 = 0;
                          if (lVar44 != 0) {
                            lVar48 = ((long)pppppdVar11 - lVar43) / lVar44;
                          }
                          ppppdStack_2a8 = (double ****)((long)pppppdVar11 + lVar48 * -6);
                          ppppdStack_2c0 = ppppdStack_2a8;
                        }
                      }
                    }
LAB_109935120:
                    ppppdStack_2a8 = (double ****)((long)ppppdStack_2a8 * (long)ppppdStack_2a0);
                    ppppdStack_2a0 = (double ****)((long)ppppdStack_2a0 * (long)ppppdVar52);
                    ppppdStack_548 = (double ****)&ppppdStack_2d0;
                    ppppdStack_550 = ppppdStack_438;
                    FUN_109938528(0xbff0000000000000,ppppdVar61,ppppdVar52,pppppdVar10,
                                  ppppdStack_450,ppppdStack_460[2],pdStack_378,ppppdStack_370,
                                  pppppdVar32);
                    pppppdVar11 = (double *****)ppppdStack_4a0;
                    puVar51 = puStack_478 + (long)ppppdStack_4a0;
                    _free(ppppdStack_2d0);
                    _free(ppppdStack_2c8);
                    _free(pdStack_378);
                    _free(lStack_360);
                    if ((long)pppppdVar45 <= (long)puVar51) {
                      pdVar40 = (double *)0x0;
                      goto LAB_1099356bc;
                    }
                  } while( true );
                }
                bVar27 = true;
                *(undefined1 *)(pdVar9 + 0x17) = 1;
              }
LAB_109934974:
              _free(lStack_3c0);
              _free(lStack_3d0);
              _free(lStack_3e0);
              _free(lStack_3f0);
              _free(lStack_400);
              _free(ppppdStack_410);
              _free(pppdStack_428);
              _free(pppdStack_498);
              if (bVar27) {
                FUN_109936ecc(pdVar9,pcStack_470);
              }
              else {
LAB_1099349c8:
                uVar47 = 2;
              }
            }
            else if (*(int *)((long)pdVar9 + 0xb4) == 0) {
              FUN_109936460(pdVar9,pcStack_470);
            }
          }
LAB_1099349cc:
          uVar7 = uStack_454;
          if ((int)uVar53 < 0) {
            __ZdlPv(ppppdStack_448);
            uVar7 = uStack_454;
          }
          goto LAB_1099349dc;
        }
        uVar47 = 2;
        ppppdVar52 = (double ****)0xbff0000000000000;
        uVar7 = 0xffffffff;
LAB_1099349dc:
        uVar23 = (ulong)uVar47 << 0x20;
        uVar50 = (ulong)uVar7;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_210) {
        auVar66._8_8_ = uVar23 | uVar50;
        auVar66._0_8_ = ppppdVar52;
        return auVar66;
      }
      ___stack_chk_fail();
LAB_109935f58:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
LAB_109936200:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x109936204);
      (*pcVar5)();
    }
    pppdStack_428 = (double ***)0x0;
    lStack_3d0 = 0;
    ppppdStack_410 = (double ****)0x0;
    ppppdStack_418 = (double ****)0x0;
    lStack_400 = 0;
    uStack_408 = (double *****)0x0;
    lStack_3f0 = 0;
    uStack_3f8 = 0;
    lStack_3e0 = 0;
    uStack_3e8 = 0;
    uStack_3d8 = (ulong)uStack_3d8._4_4_ << 0x20;
    FUN_1099a9f0c(&pppdStack_428,&UNK_10f58b708,0x56,3,FUN_1099aa768,0);
    pdVar9 = (double *)&UNK_10f58b821;
    FUN_1092b4db8(uStack_420 + 0xea8,&UNK_10f58b821,0x1e);
  }
  ppppdVar52 = &pppdStack_428;
  func_0x0001099ab7c0();
  ppppdVar61 = ppppdVar52;
  __Unwind_Resume();
  ppppdVar41 = (double ****)&ppdStack_5d0;
  pcStack_558 = FUN_109936460;
  ppppdVar22 = (double ****)ppppdVar61[0x11];
  dVar20 = 0.0;
  dVar56 = 0.0;
  if (ppppdVar22 != (double ****)0x0) {
    pppdVar26 = ppppdVar61[0x10];
    ppppdVar13 = (double ****)((long)ppppdVar22 + 3);
    if (-1 < (long)ppppdVar22) {
      ppppdVar13 = ppppdVar22;
    }
    if ((long)ppppdVar22 + 1U < 3) {
      dVar56 = (double)*pppdVar26 * (double)*pppdVar26;
    }
    else {
      uVar50 = (long)ppppdVar22 - ((long)ppppdVar22 >> 0x3f) & 0xfffffffffffffffe;
      dVar56 = (double)*pppdVar26 * (double)*pppdVar26;
      dVar58 = (double)pppdVar26[1] * (double)pppdVar26[1];
      if (3 < (long)ppppdVar22) {
        uVar23 = (ulong)ppppdVar13 & 0xfffffffffffffffc;
        dVar24 = (double)pppdVar26[2] * (double)pppdVar26[2];
        dVar60 = (double)pppdVar26[3] * (double)pppdVar26[3];
        if ((double ****)0x7 < ppppdVar22) {
          pppdVar57 = pppdVar26 + 6;
          lVar48 = 4;
          do {
            dVar56 = dVar56 + (double)pppdVar57[-2] * (double)pppdVar57[-2];
            dVar58 = dVar58 + (double)pppdVar57[-1] * (double)pppdVar57[-1];
            dVar24 = dVar24 + (double)*pppdVar57 * (double)*pppdVar57;
            dVar60 = dVar60 + (double)pppdVar57[1] * (double)pppdVar57[1];
            lVar48 = lVar48 + 4;
            pppdVar57 = pppdVar57 + 4;
          } while (lVar48 < (long)uVar23);
        }
        dVar56 = dVar24 + dVar56;
        dVar58 = dVar60 + dVar58;
        if ((long)uVar23 < (long)uVar50) {
          ppdVar59 = (pppdVar26 + uVar23)[1];
          ppdVar16 = pppdVar26[uVar23];
          dVar56 = dVar56 + (double)ppdVar16 * (double)ppdVar16;
          dVar58 = dVar58 + (double)ppdVar59 * (double)ppdVar59;
        }
      }
      dVar56 = dVar56 + dVar58;
      lVar48 = (long)ppppdVar22 % 2;
      if (lVar48 != 0 && lVar48 < 0 == SBORROW8((long)ppppdVar22,uVar50)) {
        pppdVar26 = pppdVar26 + ((long)ppppdVar22 / 2) * 2;
        do {
          dVar56 = dVar56 + (double)*pppdVar26 * (double)*pppdVar26;
          lVar48 = lVar48 + -1;
          pppdVar26 = pppdVar26 + 1;
        } while (lVar48 != 0);
      }
    }
  }
  pppdVar26 = ppppdVar61[0x13];
  if (pppdVar26 != (double ***)0x0) {
    pppdVar29 = ppppdVar61[0x12];
    pppdVar57 = (double ***)((long)pppdVar26 + 3);
    if (-1 < (long)pppdVar26) {
      pppdVar57 = pppdVar26;
    }
    if ((long)pppdVar26 + 1U < 3) {
      dVar20 = (double)*pppdVar29 * (double)*pppdVar29;
    }
    else {
      uVar50 = (long)pppdVar26 - ((long)pppdVar26 >> 0x3f) & 0xfffffffffffffffe;
      dVar20 = (double)*pppdVar29 * (double)*pppdVar29;
      dVar58 = (double)pppdVar29[1] * (double)pppdVar29[1];
      if (3 < (long)pppdVar26) {
        uVar23 = (ulong)pppdVar57 & 0xfffffffffffffffc;
        dVar24 = (double)pppdVar29[2] * (double)pppdVar29[2];
        dVar60 = (double)pppdVar29[3] * (double)pppdVar29[3];
        if ((double ***)0x7 < pppdVar26) {
          pppdVar57 = pppdVar29 + 6;
          lVar48 = 4;
          do {
            dVar20 = dVar20 + (double)pppdVar57[-2] * (double)pppdVar57[-2];
            dVar58 = dVar58 + (double)pppdVar57[-1] * (double)pppdVar57[-1];
            dVar24 = dVar24 + (double)*pppdVar57 * (double)*pppdVar57;
            dVar60 = dVar60 + (double)pppdVar57[1] * (double)pppdVar57[1];
            lVar48 = lVar48 + 4;
            pppdVar57 = pppdVar57 + 4;
          } while (lVar48 < (long)uVar23);
        }
        dVar20 = dVar24 + dVar20;
        dVar58 = dVar60 + dVar58;
        if ((long)uVar23 < (long)uVar50) {
          ppdVar59 = (pppdVar29 + uVar23)[1];
          ppdVar16 = pppdVar29[uVar23];
          dVar20 = dVar20 + (double)ppdVar16 * (double)ppdVar16;
          dVar58 = dVar58 + (double)ppdVar59 * (double)ppdVar59;
        }
      }
      dVar20 = dVar20 + dVar58;
      lVar48 = (long)pppdVar26 % 2;
      if (lVar48 != 0 && lVar48 < 0 == SBORROW8((long)pppdVar26,uVar50)) {
        pppdVar57 = pppdVar29 + ((long)pppdVar26 / 2) * 2;
        do {
          dVar20 = dVar20 + (double)*pppdVar57 * (double)*pppdVar57;
          lVar48 = lVar48 + -1;
          pppdVar57 = pppdVar57 + 1;
        } while (lVar48 != 0);
      }
    }
  }
  pppdVar57 = (double ***)SQRT(dVar20);
  pppdVar29 = ppppdVar61[2];
  ppppdVar13 = ppppdVar61;
  pppdStack_570 = (double ***)ppppdVar52;
  plStack_568 = plVar8;
  pppuStack_560 = &ppuStack_1a0;
  if ((double)pppdVar57 <= (double)pppdVar29) {
    pppdVar26 = ppppdVar61[0x12];
    ppppdVar52 = (double ****)((ulong)pdVar9 >> 3 & 1);
    if ((long)ppppdVar22 <= (long)ppppdVar52) {
      ppppdVar52 = ppppdVar22;
    }
    if (((ulong)pdVar9 & 7) != 0) {
      ppppdVar52 = ppppdVar22;
    }
    lVar48 = (long)ppppdVar22 - (long)ppppdVar52;
    pdVar40 = pdVar9;
    pppdVar29 = pppdVar26;
    ppppdVar12 = ppppdVar52;
    if (0 < (long)ppppdVar52) {
      do {
        *pdVar40 = (double)*pppdVar29;
        ppppdVar12 = (double ****)((long)ppppdVar12 + -1);
        pdVar40 = pdVar40 + 1;
        pppdVar29 = pppdVar29 + 1;
      } while (ppppdVar12 != (double ****)0x0);
    }
    lVar43 = (lVar48 - (lVar48 >> 0x3f) & 0xfffffffffffffffeU) + (long)ppppdVar52;
    if (1 < lVar48) {
      pppdVar29 = pppdVar26 + (long)ppppdVar52;
      ppppdVar12 = ppppdVar52;
      pdVar40 = pdVar9 + (long)ppppdVar52;
      do {
        ppdVar16 = *pppdVar29;
        pdVar40[1] = (double)pppdVar29[1];
        *pdVar40 = (double)ppdVar16;
        ppppdVar12 = (double ****)((long)ppppdVar12 + 2);
        pppdVar29 = pppdVar29 + 2;
        pdVar40 = pdVar40 + 2;
      } while ((long)ppppdVar12 < lVar43);
    }
    lVar44 = lVar48 / 2;
    if (lVar43 < (long)ppppdVar22) {
      lVar15 = lVar48 % 2;
      pppdVar26 = pppdVar26 + (long)ppppdVar52 + lVar44 * 2;
      pdVar40 = pdVar9 + (long)ppppdVar52 + lVar44 * 2;
      do {
        *pdVar40 = (double)*pppdVar26;
        lVar15 = lVar15 + -1;
        pppdVar26 = pppdVar26 + 1;
        pdVar40 = pdVar40 + 1;
      } while (lVar15 != 0);
    }
    ppppdVar61[0x15] = pppdVar57;
    pppdVar57 = ppppdVar61[0xc];
    pdVar40 = pdVar9;
    pppdVar26 = pppdVar57;
    ppppdVar12 = ppppdVar52;
    if (0 < (long)ppppdVar52) {
      do {
        *pdVar40 = *pdVar40 / (double)*pppdVar26;
        ppppdVar12 = (double ****)((long)ppppdVar12 + -1);
        pdVar40 = pdVar40 + 1;
        pppdVar26 = pppdVar26 + 1;
      } while (ppppdVar12 != (double ****)0x0);
    }
    if (1 < lVar48) {
      pppdVar26 = pppdVar57 + (long)ppppdVar52;
      ppppdVar12 = ppppdVar52;
      pdVar40 = pdVar9 + (long)ppppdVar52;
      do {
        ppdVar16 = *pppdVar26;
        pdVar40[1] = pdVar40[1] / (double)pppdVar26[1];
        *pdVar40 = *pdVar40 / (double)ppdVar16;
        ppppdVar12 = (double ****)((long)ppppdVar12 + 2);
        pppdVar26 = pppdVar26 + 2;
        pdVar40 = pdVar40 + 2;
      } while ((long)ppppdVar12 < lVar43);
    }
    if (lVar43 < (long)ppppdVar22) {
      lVar48 = lVar48 % 2;
      pppdVar26 = pppdVar57 + (long)ppppdVar52 + lVar44 * 2;
      pdVar40 = pdVar9 + (long)ppppdVar52 + lVar44 * 2;
      do {
        *pdVar40 = *pdVar40 / (double)*pppdVar26;
        lVar48 = lVar48 + -1;
        pppdVar26 = pppdVar26 + 1;
        pdVar40 = pdVar40 + 1;
      } while (lVar48 != 0);
    }
    if (piRam000000011373cbc0 == (int *)0x0) {
      ppppdVar13 = (double ****)0x11373cbc0;
      pdVar9 = (double *)0x11382bb14;
      FUN_1099adbb8(0x11373cbc0,0x11382bb14,&UNK_10f58b708,3);
      if (((ulong)ppppdVar13 & 1) == 0) goto LAB_109936ea0;
    }
    else if (*piRam000000011373cbc0 < 3) goto LAB_109936ea0;
    ppdStack_5d0 = (double **)0x0;
    uStack_578 = 0;
    uStack_5b8 = 0;
    uStack_5c0 = 0;
    uStack_5a8 = 0;
    uStack_5b0 = 0;
    uStack_598 = 0;
    uStack_5a0 = 0;
    uStack_588 = 0;
    uStack_590 = 0;
    uStack_580 = 0;
    FUN_1099a9f0c(&ppdStack_5d0,&UNK_10f58b708,0xd2,0,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_5c8 + 0x7540,&UNK_10f58b840,0x17);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(ppppdVar61[0x15]);
    pdVar9 = (double *)&UNK_10f58b858;
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(ppppdVar61[2]);
  }
  else {
    dVar20 = SQRT(dVar56) * (double)ppppdVar61[0x14];
    if ((double)pppdVar29 <= dVar20) {
      pppdVar26 = ppppdVar61[0x10];
      ppppdVar52 = (double ****)((ulong)pdVar9 >> 3 & 1);
      if ((long)ppppdVar22 <= (long)ppppdVar52) {
        ppppdVar52 = ppppdVar22;
      }
      if (((ulong)pdVar9 & 7) != 0) {
        ppppdVar52 = ppppdVar22;
      }
      lVar48 = (long)ppppdVar22 - (long)ppppdVar52;
      dVar20 = -(double)pppdVar29 / SQRT(dVar56);
      pdVar40 = pdVar9;
      pppdVar57 = pppdVar26;
      ppppdVar12 = ppppdVar52;
      if (0 < (long)ppppdVar52) {
        do {
          *pdVar40 = dVar20 * (double)*pppdVar57;
          ppppdVar12 = (double ****)((long)ppppdVar12 + -1);
          pdVar40 = pdVar40 + 1;
          pppdVar57 = pppdVar57 + 1;
        } while (ppppdVar12 != (double ****)0x0);
      }
      lVar43 = (lVar48 - (lVar48 >> 0x3f) & 0xfffffffffffffffeU) + (long)ppppdVar52;
      if (1 < lVar48) {
        pppdVar57 = pppdVar26 + (long)ppppdVar52;
        ppppdVar12 = ppppdVar52;
        pdVar40 = pdVar9 + (long)ppppdVar52;
        do {
          ppdVar16 = *pppdVar57;
          pdVar40[1] = (double)pppdVar57[1] * dVar20;
          *pdVar40 = (double)ppdVar16 * dVar20;
          ppppdVar12 = (double ****)((long)ppppdVar12 + 2);
          pppdVar57 = pppdVar57 + 2;
          pdVar40 = pdVar40 + 2;
        } while ((long)ppppdVar12 < lVar43);
      }
      lVar44 = lVar48 / 2;
      if (lVar43 < (long)ppppdVar22) {
        lVar15 = lVar48 % 2;
        pppdVar26 = pppdVar26 + (long)ppppdVar52 + lVar44 * 2;
        pdVar40 = pdVar9 + (long)ppppdVar52 + lVar44 * 2;
        do {
          *pdVar40 = dVar20 * (double)*pppdVar26;
          lVar15 = lVar15 + -1;
          pppdVar26 = pppdVar26 + 1;
          pdVar40 = pdVar40 + 1;
        } while (lVar15 != 0);
      }
      ppppdVar61[0x15] = ppppdVar61[2];
      pppdVar57 = ppppdVar61[0xc];
      pdVar40 = pdVar9;
      pppdVar26 = pppdVar57;
      ppppdVar12 = ppppdVar52;
      if (0 < (long)ppppdVar52) {
        do {
          *pdVar40 = *pdVar40 / (double)*pppdVar26;
          ppppdVar12 = (double ****)((long)ppppdVar12 + -1);
          pdVar40 = pdVar40 + 1;
          pppdVar26 = pppdVar26 + 1;
        } while (ppppdVar12 != (double ****)0x0);
      }
      if (1 < lVar48) {
        pppdVar26 = pppdVar57 + (long)ppppdVar52;
        ppppdVar12 = ppppdVar52;
        pdVar40 = pdVar9 + (long)ppppdVar52;
        do {
          ppdVar16 = *pppdVar26;
          pdVar40[1] = pdVar40[1] / (double)pppdVar26[1];
          *pdVar40 = *pdVar40 / (double)ppdVar16;
          ppppdVar12 = (double ****)((long)ppppdVar12 + 2);
          pppdVar26 = pppdVar26 + 2;
          pdVar40 = pdVar40 + 2;
        } while ((long)ppppdVar12 < lVar43);
      }
      if (lVar43 < (long)ppppdVar22) {
        lVar48 = lVar48 % 2;
        pppdVar26 = pppdVar57 + (long)ppppdVar52 + lVar44 * 2;
        pdVar40 = pdVar9 + (long)ppppdVar52 + lVar44 * 2;
        do {
          *pdVar40 = *pdVar40 / (double)*pppdVar26;
          lVar48 = lVar48 + -1;
          pppdVar26 = pppdVar26 + 1;
          pdVar40 = pdVar40 + 1;
        } while (lVar48 != 0);
      }
      if (piRam000000011373cbe0 == (int *)0x0) {
        ppppdVar13 = (double ****)0x11373cbe0;
        pdVar9 = (double *)0x11382bb14;
        FUN_1099adbb8(0x11373cbe0,0x11382bb14,&UNK_10f58b708,3);
        if (((ulong)ppppdVar13 & 1) == 0) goto LAB_109936ea0;
      }
      else if (*piRam000000011373cbe0 < 3) goto LAB_109936ea0;
      ppdStack_5d0 = (double **)0x0;
      uStack_578 = 0;
      uStack_5b8 = 0;
      uStack_5c0 = 0;
      uStack_5a8 = 0;
      uStack_5b0 = 0;
      uStack_598 = 0;
      uStack_5a0 = 0;
      uStack_588 = 0;
      uStack_590 = 0;
      uStack_580 = 0;
      FUN_1099a9f0c(&ppdStack_5d0,&UNK_10f58b708,0xde,0,FUN_1099aa768,0);
      FUN_1092b4db8(lStack_5c8 + 0x7540,&UNK_10f58b862,0x12);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(ppppdVar61[0x15]);
      pdVar9 = (double *)&UNK_10f58b858;
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(ppppdVar61[2]);
    }
    else {
      dVar56 = -(double)ppppdVar61[0x14];
      if (pppdVar26 == (double ***)0x0) {
        dVar58 = 0.0;
      }
      else {
        pppdVar30 = ppppdVar61[0x10];
        pppdVar35 = ppppdVar61[0x12];
        pppdVar31 = (double ***)((long)pppdVar26 + 3);
        if (-1 < (long)pppdVar26) {
          pppdVar31 = pppdVar26;
        }
        if ((long)pppdVar26 + 1U < 3) {
          dVar58 = (double)*pppdVar30 * (double)*pppdVar35;
        }
        else {
          uVar50 = (long)pppdVar26 - ((long)pppdVar26 >> 0x3f) & 0xfffffffffffffffe;
          dVar58 = (double)*pppdVar30 * (double)*pppdVar35;
          dVar24 = (double)pppdVar30[1] * (double)pppdVar35[1];
          if (3 < (long)pppdVar26) {
            uVar23 = (ulong)pppdVar31 & 0xfffffffffffffffc;
            dVar60 = (double)pppdVar30[2] * (double)pppdVar35[2];
            dVar63 = (double)pppdVar30[3] * (double)pppdVar35[3];
            if ((double ***)0x7 < pppdVar26) {
              pppdVar31 = pppdVar35 + 6;
              pppdVar38 = pppdVar30 + 6;
              lVar48 = 4;
              do {
                dVar58 = dVar58 + (double)pppdVar38[-2] * (double)pppdVar31[-2];
                dVar24 = dVar24 + (double)pppdVar38[-1] * (double)pppdVar31[-1];
                dVar60 = dVar60 + (double)*pppdVar38 * (double)*pppdVar31;
                dVar63 = dVar63 + (double)pppdVar38[1] * (double)pppdVar31[1];
                lVar48 = lVar48 + 4;
                pppdVar31 = pppdVar31 + 4;
                pppdVar38 = pppdVar38 + 4;
              } while (lVar48 < (long)uVar23);
            }
            dVar58 = dVar60 + dVar58;
            dVar24 = dVar63 + dVar24;
            if ((long)uVar23 < (long)uVar50) {
              dVar58 = dVar58 + (double)pppdVar30[uVar23] * (double)pppdVar35[uVar23];
              dVar24 = dVar24 + (double)(pppdVar30 + uVar23)[1] * (double)(pppdVar35 + uVar23)[1];
            }
          }
          dVar58 = dVar58 + dVar24;
          lVar48 = (long)pppdVar26 % 2;
          if (lVar48 != 0 && lVar48 < 0 == SBORROW8((long)pppdVar26,uVar50)) {
            pppdVar31 = pppdVar30 + ((long)pppdVar26 / 2) * 2;
            pppdVar26 = pppdVar35 + ((long)pppdVar26 / 2) * 2;
            do {
              dVar58 = dVar58 + (double)*pppdVar31 * (double)*pppdVar26;
              lVar48 = lVar48 + -1;
              pppdVar31 = pppdVar31 + 1;
              pppdVar26 = pppdVar26 + 1;
            } while (lVar48 != 0);
          }
        }
      }
      dVar58 = dVar58 * dVar56;
      dVar20 = dVar20 * dVar20;
      dVar24 = (double)pppdVar57 * (double)pppdVar57 + dVar20 + dVar58 * -2.0;
      dVar58 = dVar58 - dVar20;
      dVar60 = SQRT(((double)pppdVar29 * (double)pppdVar29 - dVar20) * dVar24 + dVar58 * dVar58);
      dVar20 = ((double)pppdVar29 * (double)pppdVar29 - dVar20) / (dVar58 + dVar60);
      if (dVar58 <= 0.0) {
        dVar20 = (dVar60 - dVar58) / dVar24;
      }
      dVar56 = (1.0 - dVar20) * dVar56;
      pppdVar26 = ppppdVar61[0x10];
      pppdVar57 = ppppdVar61[0x12];
      ppppdVar52 = (double ****)((ulong)pdVar9 >> 3 & 1);
      if ((long)ppppdVar22 <= (long)ppppdVar52) {
        ppppdVar52 = ppppdVar22;
      }
      if (((ulong)pdVar9 & 7) != 0) {
        ppppdVar52 = ppppdVar22;
      }
      lVar48 = (long)ppppdVar22 - (long)ppppdVar52;
      ppppdVar12 = ppppdVar52;
      pdVar40 = pdVar9;
      pppdVar29 = pppdVar26;
      pppdVar31 = pppdVar57;
      if (0 < (long)ppppdVar52) {
        do {
          *pdVar40 = dVar56 * (double)*pppdVar29 + dVar20 * (double)*pppdVar31;
          ppppdVar12 = (double ****)((long)ppppdVar12 + -1);
          ppppdVar13 = (double ****)0x0;
          pdVar40 = pdVar40 + 1;
          pppdVar29 = pppdVar29 + 1;
          pppdVar31 = pppdVar31 + 1;
        } while (ppppdVar12 != (double ****)0x0);
      }
      lVar43 = (lVar48 - (lVar48 >> 0x3f) & 0xfffffffffffffffeU) + (long)ppppdVar52;
      if (1 < lVar48) {
        ppppdVar13 = ppppdVar52;
        pdVar40 = pdVar9 + (long)ppppdVar52;
        pppdVar29 = pppdVar57 + (long)ppppdVar52;
        pppdVar31 = pppdVar26 + (long)ppppdVar52;
        do {
          ppdVar16 = *pppdVar31;
          ppdVar59 = *pppdVar29;
          pdVar40[1] = (double)pppdVar31[1] * dVar56 + (double)pppdVar29[1] * dVar20;
          *pdVar40 = (double)ppdVar16 * dVar56 + (double)ppdVar59 * dVar20;
          ppppdVar13 = (double ****)((long)ppppdVar13 + 2);
          pdVar40 = pdVar40 + 2;
          pppdVar29 = pppdVar29 + 2;
          pppdVar31 = pppdVar31 + 2;
        } while ((long)ppppdVar13 < lVar43);
      }
      lVar44 = lVar48 / 2;
      if (lVar43 < (long)ppppdVar22) {
        lVar15 = lVar48 % 2;
        pppdVar26 = pppdVar26 + (long)ppppdVar52 + lVar44 * 2;
        pppdVar57 = pppdVar57 + (long)ppppdVar52 + lVar44 * 2;
        pdVar40 = pdVar9 + (long)ppppdVar52 + lVar44 * 2;
        do {
          *pdVar40 = dVar56 * (double)*pppdVar26 + dVar20 * (double)*pppdVar57;
          lVar15 = lVar15 + -1;
          pppdVar26 = pppdVar26 + 1;
          pppdVar57 = pppdVar57 + 1;
          pdVar40 = pdVar40 + 1;
        } while (lVar15 != 0);
      }
      if (ppppdVar22 == (double ****)0x0) {
        dVar20 = 0.0;
      }
      else {
        ppppdVar12 = (double ****)((long)ppppdVar22 + 3);
        if (-1 < (long)ppppdVar22) {
          ppppdVar12 = ppppdVar22;
        }
        if ((long)ppppdVar22 + 1U < 3) {
          dVar20 = *pdVar9 * *pdVar9;
        }
        else {
          uVar50 = (long)ppppdVar22 - ((long)ppppdVar22 >> 0x3f) & 0xfffffffffffffffe;
          dVar20 = *pdVar9 * *pdVar9;
          dVar56 = pdVar9[1] * pdVar9[1];
          if (3 < (long)ppppdVar22) {
            uVar23 = (ulong)ppppdVar12 & 0xfffffffffffffffc;
            dVar58 = pdVar9[2] * pdVar9[2];
            dVar24 = pdVar9[3] * pdVar9[3];
            if ((double ****)0x7 < ppppdVar22) {
              pdVar40 = pdVar9 + 6;
              ppppdVar13 = (double ****)0x4;
              do {
                dVar20 = dVar20 + pdVar40[-2] * pdVar40[-2];
                dVar56 = dVar56 + pdVar40[-1] * pdVar40[-1];
                dVar58 = dVar58 + *pdVar40 * *pdVar40;
                dVar24 = dVar24 + pdVar40[1] * pdVar40[1];
                ppppdVar13 = (double ****)((long)ppppdVar13 + 4);
                pdVar40 = pdVar40 + 4;
              } while ((long)ppppdVar13 < (long)uVar23);
            }
            dVar20 = dVar58 + dVar20;
            dVar56 = dVar24 + dVar56;
            if ((long)uVar23 < (long)uVar50) {
              dVar24 = (pdVar9 + uVar23)[1];
              dVar58 = pdVar9[uVar23];
              dVar20 = dVar20 + dVar58 * dVar58;
              dVar56 = dVar56 + dVar24 * dVar24;
            }
          }
          dVar20 = dVar20 + dVar56;
          lVar15 = (long)ppppdVar22 % 2;
          if (lVar15 != 0 && lVar15 < 0 == SBORROW8((long)ppppdVar22,uVar50)) {
            pdVar40 = pdVar9 + ((long)ppppdVar22 / 2) * 2;
            do {
              dVar20 = dVar20 + *pdVar40 * *pdVar40;
              lVar15 = lVar15 + -1;
              pdVar40 = pdVar40 + 1;
            } while (lVar15 != 0);
          }
        }
      }
      ppppdVar61[0x15] = (double ***)SQRT(dVar20);
      pppdVar57 = ppppdVar61[0xc];
      pdVar40 = pdVar9;
      pppdVar26 = pppdVar57;
      ppppdVar12 = ppppdVar52;
      if (0 < (long)ppppdVar52) {
        do {
          *pdVar40 = *pdVar40 / (double)*pppdVar26;
          ppppdVar12 = (double ****)((long)ppppdVar12 + -1);
          pdVar40 = pdVar40 + 1;
          pppdVar26 = pppdVar26 + 1;
        } while (ppppdVar12 != (double ****)0x0);
      }
      if (1 < lVar48) {
        pppdVar26 = pppdVar57 + (long)ppppdVar52;
        ppppdVar12 = ppppdVar52;
        pdVar40 = pdVar9 + (long)ppppdVar52;
        do {
          ppdVar16 = *pppdVar26;
          pdVar40[1] = pdVar40[1] / (double)pppdVar26[1];
          *pdVar40 = *pdVar40 / (double)ppdVar16;
          ppppdVar12 = (double ****)((long)ppppdVar12 + 2);
          pppdVar26 = pppdVar26 + 2;
          pdVar40 = pdVar40 + 2;
        } while ((long)ppppdVar12 < lVar43);
      }
      if (lVar43 < (long)ppppdVar22) {
        lVar48 = lVar48 % 2;
        pppdVar26 = pppdVar57 + (long)ppppdVar52 + lVar44 * 2;
        pdVar40 = pdVar9 + (long)ppppdVar52 + lVar44 * 2;
        do {
          *pdVar40 = *pdVar40 / (double)*pppdVar26;
          lVar48 = lVar48 + -1;
          pppdVar26 = pppdVar26 + 1;
          pdVar40 = pdVar40 + 1;
        } while (lVar48 != 0);
      }
      if (piRam000000011373cc00 == (int *)0x0) {
        ppppdVar13 = (double ****)0x11373cc00;
        pdVar9 = (double *)0x11382bb14;
        FUN_1099adbb8(0x11373cc00,0x11382bb14,&UNK_10f58b708,3);
        if (((ulong)ppppdVar13 & 1) == 0) goto LAB_109936ea0;
      }
      else if (*piRam000000011373cc00 < 3) goto LAB_109936ea0;
      ppdStack_5d0 = (double **)0x0;
      uStack_578 = 0;
      uStack_5b8 = 0;
      uStack_5c0 = 0;
      uStack_5a8 = 0;
      uStack_5b0 = 0;
      uStack_598 = 0;
      uStack_5a0 = 0;
      uStack_588 = 0;
      uStack_590 = 0;
      uStack_580 = 0;
      FUN_1099a9f0c(&ppdStack_5d0,&UNK_10f58b708,0xfb,0,FUN_1099aa768,0);
      FUN_1092b4db8(lStack_5c8 + 0x7540,&UNK_10f58b875,0x12);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(ppppdVar61[0x15]);
      pdVar9 = (double *)&UNK_10f58b858;
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(ppppdVar61[2]);
    }
  }
  FUN_1099ab3b0(&ppdStack_5d0);
  ppppdVar13 = ppppdVar41;
LAB_109936ea0:
  auVar67._8_8_ = pdVar9;
  auVar67._0_8_ = ppppdVar13;
  return auVar67;
}



/* Entry: 109933a1c; end: 109933c57;  */

undefined1  [16]
FUN_109933a1c(undefined8 *param_1,double *param_2,undefined8 param_3,undefined8 param_4,
             code *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  double *****pppppdVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  double *pdVar7;
  long *plVar8;
  long lVar9;
  double *****pppppdVar10;
  long lVar11;
  double *****pppppdVar12;
  double ****ppppdVar13;
  double ****ppppdVar14;
  long *plVar15;
  long lVar16;
  double **ppdVar17;
  bool bVar18;
  double *pdVar19;
  double dVar20;
  ulong uVar21;
  double *pdVar22;
  double ****ppppdVar23;
  ulong uVar24;
  double dVar25;
  long lVar26;
  undefined8 *puVar27;
  double ***pppdVar28;
  bool bVar29;
  double *pdVar30;
  double ***pppdVar31;
  double ***pppdVar32;
  double ***pppdVar33;
  double *****pppppdVar34;
  double *****pppppdVar35;
  long lVar36;
  double ***pppdVar37;
  undefined8 *puVar38;
  bool bVar39;
  double ***pppdVar40;
  long lVar41;
  double *pdVar42;
  double ****ppppdVar43;
  double *****pppppdVar44;
  double *****pppppdVar45;
  double *****pppppdVar46;
  uint uVar47;
  undefined *puVar48;
  double ****ppppdVar49;
  uint uVar50;
  double *****pppppdVar51;
  double dVar52;
  double ***pppdVar53;
  double dVar54;
  double **ppdVar55;
  double dVar56;
  double ****ppppdVar57;
  double dVar58;
  double dVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double **ppdStack_4e0;
  long lStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined4 uStack_490;
  undefined8 uStack_488;
  double ***pppdStack_480;
  undefined8 *puStack_478;
  undefined1 **ppuStack_470;
  code *pcStack_468;
  double ****ppppdStack_460;
  double ****ppppdStack_458;
  double ****ppppdStack_450;
  undefined8 uStack_448;
  double ***pppdStack_440;
  uint uStack_434;
  ulong uStack_430;
  ulong uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  double ****ppppdStack_410;
  ulong uStack_408;
  double ****ppppdStack_400;
  double ****ppppdStack_3f8;
  double ***pppdStack_3f0;
  double ****ppppdStack_3e8;
  double ****ppppdStack_3e0;
  ulong uStack_3d8;
  double ****ppppdStack_3d0;
  double ****ppppdStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  double ****ppppdStack_3b0;
  double ***pppdStack_3a8;
  long *plStack_3a0;
  double ****ppppdStack_398;
  double ****ppppdStack_390;
  undefined *puStack_388;
  code *pcStack_380;
  double ****ppppdStack_378;
  double ****ppppdStack_370;
  uint uStack_364;
  double ****ppppdStack_360;
  double ****ppppdStack_358;
  double ****ppppdStack_350;
  double ****ppppdStack_348;
  double ****ppppdStack_340;
  double ***pppdStack_338;
  undefined8 uStack_330;
  double ****ppppdStack_328;
  double ****ppppdStack_320;
  undefined8 uStack_318;
  long lStack_310;
  undefined8 uStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  undefined2 uStack_2c0;
  double dStack_2b8;
  double dStack_2b0;
  long lStack_2a8;
  long *plStack_298;
  double **ppdStack_290;
  double *pdStack_288;
  double ****ppppdStack_280;
  double ****ppppdStack_278;
  long lStack_270;
  double ****ppppdStack_268;
  double ****ppppdStack_260;
  undefined1 uStack_251;
  double ****appppdStack_250 [5];
  double ****ppppdStack_228;
  double ****ppppdStack_220;
  long lStack_218;
  ulong uStack_210;
  double ****ppppdStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  double ****ppppdStack_1f0;
  double ****ppppdStack_1e0;
  double ****ppppdStack_1d8;
  double ****ppppdStack_1d0;
  double ****ppppdStack_1c8;
  double ****ppppdStack_1c0;
  double ****ppppdStack_1b8;
  double ****ppppdStack_1b0;
  double ***pppdStack_1a8;
  double ****ppppdStack_1a0;
  double ****ppppdStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  double ****ppppdStack_180;
  double ****ppppdStack_170;
  double ****ppppdStack_158;
  double ****ppppdStack_150;
  double ****ppppdStack_140;
  double ****ppppdStack_138;
  undefined *puStack_130;
  double ****ppppdStack_128;
  long lStack_120;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  double *pdStack_98;
  double dStack_90;
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
  
  *param_1 = &PTR_DAT_110b1dd70;
  dVar20 = param_2[1];
  param_1[1] = dVar20;
  dVar52 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = dVar52;
  dVar52 = param_2[4];
  pdVar7 = (double *)(param_1 + 4);
  *pdVar7 = dVar52;
  dVar54 = param_2[5];
  pdVar42 = (double *)(param_1 + 5);
  *pdVar42 = dVar54;
  param_1[7] = 0x3e45798ee2308c3a;
  param_1[6] = 0x3e45798ee2308c3a;
  param_1[9] = 0x4024000000000000;
  param_1[8] = 0x3ff0000000000000;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0xb] = 0x3fd0000000000000;
  param_1[10] = 0x3fe8000000000000;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)(param_2 + 6);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  if (dVar20 == 0.0) {
    dStack_90 = 0.0;
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
    param_5 = FUN_1099aa768;
    ppdVar17 = (double **)0x3;
    FUN_1099a9f0c(&dStack_90,&UNK_10f58b708,0x45,3,FUN_1099aa768,0);
    puVar48 = &UNK_10f58b790;
    plVar15 = (long *)0x28;
    FUN_1092b4db8(lStack_88 + 0x7540);
  }
  else {
    dStack_90 = 0.0;
    if (dVar52 <= 0.0) {
      param_2 = &dStack_90;
      pdVar22 = pdVar7;
      FUN_10991e5b0(pdVar7,param_2,&UNK_10f58b7b9);
      if (pdVar22 != (double *)0x0) {
        puVar48 = &UNK_10f58b708;
        ppdVar17 = &pdStack_98;
        plVar15 = (long *)0x46;
        pdStack_98 = pdVar22;
        FUN_1099ab8e4(&dStack_90);
        goto LAB_109933c1c;
      }
      dVar52 = *pdVar7;
      dVar54 = *pdVar42;
      pdStack_98 = (double *)0x0;
    }
    if ((dVar52 <= dVar54) ||
       (FUN_10991e5b0(pdVar7,pdVar42,&UNK_10f58b7cd), param_2 = pdVar42, pdStack_98 = pdVar7,
       pdVar7 == (double *)0x0)) {
      dStack_90 = 0.0;
      if (0.0 < (double)param_1[3]) {
LAB_109933ae0:
        auVar60._8_8_ = param_2;
        auVar60._0_8_ = param_1;
        return auVar60;
      }
      pdVar7 = (double *)(param_1 + 3);
      param_2 = &dStack_90;
      FUN_10991e5b0(pdVar7,param_2,&UNK_10f58b7ec);
      if (pdVar7 == (double *)0x0) goto LAB_109933ae0;
      puVar48 = &UNK_10f58b708;
      ppdVar17 = &pdStack_98;
      plVar15 = (long *)0x48;
      pdStack_98 = pdVar7;
      FUN_1099ab8e4(&dStack_90);
    }
    else {
      puVar48 = &UNK_10f58b708;
      ppdVar17 = &pdStack_98;
      plVar15 = (long *)0x47;
      FUN_1099ab8e4(&dStack_90);
    }
  }
LAB_109933c1c:
  pdVar7 = &dStack_90;
  func_0x0001099ab7c0();
  _free(param_1[0x18]);
  _free(param_1[0x12]);
  _free(param_1[0x10]);
  _free(param_1[0xe]);
  _free(param_1[0xc]);
  __Unwind_Resume();
  pcStack_a8 = FUN_109933c58;
  lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (plVar15 == (long *)0x0) {
    pppdStack_338 = (double ***)0x0;
    lStack_2e0 = 0;
    ppppdStack_320 = (double ****)0x0;
    ppppdStack_328 = (double ****)0x0;
    lStack_310 = 0;
    uStack_318 = (double *****)0x0;
    lStack_300 = 0;
    uStack_308 = 0;
    lStack_2f0 = 0;
    uStack_2f8 = 0;
    uStack_2e8 = (ulong)uStack_2e8._4_4_ << 0x20;
    FUN_1099a9f0c(&pppdStack_338,&UNK_10f58b708,0x54,3,FUN_1099aa768,0);
    pdVar7 = (double *)&UNK_10f58b7fe;
    FUN_1092b4db8(uStack_330 + 0xea8,&UNK_10f58b7fe,0x22);
  }
  else if (ppdVar17 == (double **)0x0) {
    pppdStack_338 = (double ***)0x0;
    lStack_2e0 = 0;
    ppppdStack_320 = (double ****)0x0;
    ppppdStack_328 = (double ****)0x0;
    lStack_310 = 0;
    uStack_318 = (double *****)0x0;
    lStack_300 = 0;
    uStack_308 = 0;
    lStack_2f0 = 0;
    uStack_2f8 = 0;
    uStack_2e8 = (ulong)uStack_2e8._4_4_ << 0x20;
    FUN_1099a9f0c(&pppdStack_338,&UNK_10f58b708,0x55,3,FUN_1099aa768,0);
    pdVar7 = (double *)&UNK_10f58febc;
    FUN_1092b4db8(uStack_330 + 0xea8,&UNK_10f58febc,0x23);
  }
  else {
    if (param_5 != (code *)0x0) {
      plVar8 = plVar15;
      (**(code **)(*plVar15 + 0x28))();
      if (*(char *)(pdVar7 + 0x16) == '\x01') {
        if (*(int *)((long)pdVar7 + 0xb4) == 1) {
          FUN_109936ecc(pdVar7,param_5);
        }
        else if (*(int *)((long)pdVar7 + 0xb4) == 0) {
          FUN_109936460(pdVar7,param_5);
        }
        uVar21 = 0;
        uVar24 = 0;
        ppppdVar49 = (double ****)0xbff0000000000000;
      }
      else {
        *(undefined1 *)(pdVar7 + 0x16) = 1;
        dVar20 = pdVar7[0xc];
        iVar5 = (int)plVar8;
        if (pdVar7[0xd] == (double)(long)iVar5) {
LAB_109933dbc:
          (**(code **)(*plVar15 + 0x30))(plVar15,dVar20);
          pdVar42 = (double *)pdVar7[0xc];
          if (0 < iVar5) {
            uVar21 = (ulong)plVar8 & 0xffffffff;
            pdVar22 = pdVar42;
            do {
              dVar20 = pdVar7[4];
              if (pdVar7[4] <= *pdVar22) {
                dVar20 = *pdVar22;
              }
              dVar52 = pdVar7[5];
              if (dVar20 <= pdVar7[5]) {
                dVar52 = dVar20;
              }
              *pdVar22 = dVar52;
              uVar21 = uVar21 - 1;
              pdVar22 = pdVar22 + 1;
            } while (uVar21 != 0);
          }
          dVar20 = pdVar7[0xd];
          uVar21 = (long)dVar20 - ((long)dVar20 >> 0x3f) & 0xfffffffffffffffe;
          if (1 < (long)dVar20) {
            lVar9 = 0;
            pdVar22 = pdVar42;
            do {
              pdVar22[1] = SQRT(pdVar22[1]);
              *pdVar22 = SQRT(*pdVar22);
              lVar9 = lVar9 + 2;
              pdVar22 = pdVar22 + 2;
            } while (lVar9 < (long)uVar21);
          }
          lVar9 = (long)dVar20 % 2;
          if (lVar9 != 0 && lVar9 < 0 == SBORROW8((long)dVar20,uVar21)) {
            pdVar42 = pdVar42 + ((long)dVar20 / 2) * 2;
            do {
              *pdVar42 = SQRT(*pdVar42);
              lVar9 = lVar9 + -1;
              pdVar42 = pdVar42 + 1;
            } while (lVar9 != 0);
          }
          dVar20 = pdVar7[0x10];
          if (0 < (long)pdVar7[0x11]) {
            _bzero(dVar20,(long)pdVar7[0x11] << 3);
          }
          (**(code **)(*plVar15 + 0x18))(plVar15,ppdVar17,dVar20);
          pdVar22 = (double *)pdVar7[0xc];
          pdVar42 = (double *)pdVar7[0x10];
          dVar20 = pdVar7[0x11];
          uVar21 = (long)dVar20 - ((long)dVar20 >> 0x3f) & 0xfffffffffffffffe;
          if (1 < (long)dVar20) {
            lVar9 = 0;
            pdVar30 = pdVar42;
            pdVar19 = pdVar22;
            do {
              dVar52 = *pdVar19;
              pdVar30[1] = pdVar30[1] / pdVar19[1];
              *pdVar30 = *pdVar30 / dVar52;
              lVar9 = lVar9 + 2;
              pdVar30 = pdVar30 + 2;
              pdVar19 = pdVar19 + 2;
            } while (lVar9 < (long)uVar21);
          }
          lVar9 = (long)dVar20 % 2;
          if (lVar9 != 0 && (long)uVar21 <= (long)dVar20) {
            pdVar42 = pdVar42 + ((long)dVar20 / 2) * 2;
            pdVar22 = pdVar22 + ((long)dVar20 / 2) * 2;
            do {
              *pdVar42 = *pdVar42 / *pdVar22;
              lVar9 = lVar9 + -1;
              pdVar42 = pdVar42 + 1;
              pdVar22 = pdVar22 + 1;
            } while (lVar9 != 0);
          }
          plVar8 = plVar15;
          (**(code **)(*plVar15 + 0x20))();
          dVar52 = (double)(long)(int)plVar8;
          if ((int)plVar8 < 1) goto LAB_109933f48;
          pdVar42 = (double *)0x1;
          _calloc(1,(long)dVar52 << 3);
          if (pdVar42 == (double *)0x0) goto LAB_109933f28;
        }
        else {
          dVar52 = (double)(long)iVar5;
          _free(dVar20);
          if (iVar5 < 1) {
            dVar20 = 0.0;
LAB_109933d44:
            pdVar7[0xc] = dVar20;
            pdVar7[0xd] = dVar52;
            if (pdVar7[0x11] != dVar52) {
              _free(pdVar7[0x10]);
              if (iVar5 < 1) {
                dVar20 = 0.0;
              }
              else {
                dVar20 = (double)((long)dVar52 << 3);
                _malloc();
                if (dVar20 == 0.0) goto LAB_109933f28;
              }
              pdVar7[0x10] = dVar20;
            }
            pdVar7[0x11] = dVar52;
            if (pdVar7[0x13] != dVar52) {
              _free(pdVar7[0x12]);
              if (iVar5 < 1) {
                dVar20 = 0.0;
              }
              else {
                dVar20 = (double)((long)dVar52 << 3);
                _malloc();
                if (dVar20 == 0.0) goto LAB_109933f28;
              }
              pdVar7[0x12] = dVar20;
            }
            pdVar7[0x13] = dVar52;
            dVar20 = pdVar7[0xc];
            goto LAB_109933dbc;
          }
          dVar20 = (double)((long)dVar52 << 3);
          _malloc();
          if (dVar20 != 0.0) goto LAB_109933d44;
LAB_109933f28:
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
LAB_109933f48:
          pdVar42 = (double *)0x0;
        }
        dVar20 = pdVar7[0xd];
        if ((long)dVar20 < 1) {
          lVar9 = 0;
          dVar54 = pdVar7[0x10];
          dVar25 = pdVar7[0xc];
          uVar21 = -(-(long)dVar20 & 0xfffffffffffffffeU);
        }
        else {
          if ((ulong)dVar20 >> 0x3d != 0) goto LAB_109935f58;
          lVar9 = (long)dVar20 << 3;
          _malloc();
          if (lVar9 == 0) goto LAB_109935f58;
          dVar54 = pdVar7[0x10];
          dVar25 = pdVar7[0xc];
          if (dVar20 == 4.94065645841247e-324) {
            uVar21 = 0;
          }
          else {
            lVar11 = 0;
            uVar24 = 0;
            uVar21 = (ulong)dVar20 & 0x1ffffffffffffffe;
            do {
              dVar56 = *(double *)((long)dVar54 + lVar11);
              dVar59 = *(double *)((long)dVar25 + lVar11);
              ((double *)(lVar9 + lVar11))[1] =
                   ((double *)((long)dVar54 + lVar11))[1] / ((double *)((long)dVar25 + lVar11))[1];
              *(double *)(lVar9 + lVar11) = dVar56 / dVar59;
              uVar24 = uVar24 + 2;
              lVar11 = lVar11 + 0x10;
            } while (uVar24 < uVar21);
          }
        }
        lVar11 = (long)dVar20 - uVar21;
        if (lVar11 != 0 && (long)uVar21 <= (long)dVar20) {
          pdVar22 = (double *)((long)dVar54 + uVar21 * 8);
          pdVar30 = (double *)((long)dVar25 + uVar21 * 8);
          pdVar19 = (double *)(lVar9 + uVar21 * 8);
          do {
            *pdVar19 = *pdVar22 / *pdVar30;
            lVar11 = lVar11 + -1;
            pdVar22 = pdVar22 + 1;
            pdVar30 = pdVar30 + 1;
            pdVar19 = pdVar19 + 1;
          } while (lVar11 != 0);
        }
        (**(code **)(*plVar15 + 0x10))(plVar15,lVar9,pdVar42);
        dVar20 = pdVar7[0x11];
        dVar25 = 0.0;
        dVar54 = 0.0;
        if (dVar20 != 0.0) {
          pdVar22 = (double *)pdVar7[0x10];
          dVar56 = (double)((long)dVar20 + 3);
          if (-1 < (long)dVar20) {
            dVar56 = dVar20;
          }
          if ((long)dVar20 + 1U < 3) {
            dVar54 = *pdVar22 * *pdVar22;
          }
          else {
            uVar21 = (long)dVar20 - ((long)dVar20 >> 0x3f) & 0xfffffffffffffffe;
            dVar54 = *pdVar22 * *pdVar22;
            dVar59 = pdVar22[1] * pdVar22[1];
            if (3 < (long)dVar20) {
              uVar24 = (ulong)dVar56 & 0xfffffffffffffffc;
              dVar56 = pdVar22[2] * pdVar22[2];
              dVar58 = pdVar22[3] * pdVar22[3];
              if (7 < (ulong)dVar20) {
                pdVar30 = pdVar22 + 6;
                lVar11 = 4;
                do {
                  dVar54 = dVar54 + pdVar30[-2] * pdVar30[-2];
                  dVar59 = dVar59 + pdVar30[-1] * pdVar30[-1];
                  dVar56 = dVar56 + *pdVar30 * *pdVar30;
                  dVar58 = dVar58 + pdVar30[1] * pdVar30[1];
                  lVar11 = lVar11 + 4;
                  pdVar30 = pdVar30 + 4;
                } while (lVar11 < (long)uVar24);
              }
              dVar54 = dVar56 + dVar54;
              dVar59 = dVar58 + dVar59;
              if ((long)uVar24 < (long)uVar21) {
                dVar58 = (pdVar22 + uVar24)[1];
                dVar56 = pdVar22[uVar24];
                dVar54 = dVar54 + dVar56 * dVar56;
                dVar59 = dVar59 + dVar58 * dVar58;
              }
            }
            dVar54 = dVar54 + dVar59;
            lVar11 = (long)dVar20 % 2;
            if (lVar11 != 0 && lVar11 < 0 == SBORROW8((long)dVar20,uVar21)) {
              pdVar22 = pdVar22 + ((long)dVar20 / 2) * 2;
              do {
                dVar54 = dVar54 + *pdVar22 * *pdVar22;
                lVar11 = lVar11 + -1;
                pdVar22 = pdVar22 + 1;
              } while (lVar11 != 0);
            }
          }
        }
        uVar50 = SUB84(dVar52,0);
        if (uVar50 != 0) {
          uVar47 = uVar50 + 3;
          if (-1 < (int)uVar50) {
            uVar47 = uVar50;
          }
          if ((long)dVar52 + 1U < 3) {
            dVar25 = *pdVar42 * *pdVar42;
          }
          else {
            uVar21 = -(ulong)((uint)((int)uVar50 / 2) >> 0x1f) & 0xfffffffe00000000 |
                     (ulong)(uint)((int)uVar50 / 2) << 1;
            dVar25 = *pdVar42 * *pdVar42;
            dVar20 = pdVar42[1] * pdVar42[1];
            if (3 < (int)uVar50) {
              uVar24 = -(ulong)((uint)((int)uVar47 >> 2) >> 0x1f) & 0xfffffffc00000000 |
                       (ulong)(uint)((int)uVar47 >> 2) << 2;
              dVar56 = pdVar42[2] * pdVar42[2];
              dVar59 = pdVar42[3] * pdVar42[3];
              if (7 < uVar50) {
                pdVar22 = pdVar42 + 6;
                lVar11 = 4;
                do {
                  dVar25 = dVar25 + pdVar22[-2] * pdVar22[-2];
                  dVar20 = dVar20 + pdVar22[-1] * pdVar22[-1];
                  dVar56 = dVar56 + *pdVar22 * *pdVar22;
                  dVar59 = dVar59 + pdVar22[1] * pdVar22[1];
                  lVar11 = lVar11 + 4;
                  pdVar22 = pdVar22 + 4;
                } while (lVar11 < (long)uVar24);
              }
              dVar25 = dVar56 + dVar25;
              dVar20 = dVar59 + dVar20;
              if ((long)uVar24 < (long)uVar21) {
                dVar59 = (pdVar42 + uVar24)[1];
                dVar56 = pdVar42[uVar24];
                dVar25 = dVar25 + dVar56 * dVar56;
                dVar20 = dVar20 + dVar59 * dVar59;
              }
            }
            dVar25 = dVar25 + dVar20;
            lVar11 = (long)dVar52 - uVar21;
            if (lVar11 != 0 && (long)uVar21 <= (long)dVar52) {
              pdVar22 = pdVar42 + ((long)((ulong)(uVar50 - ((int)uVar50 >> 0x1f)) << 0x20) >> 0x21)
                                  * 2;
              do {
                dVar25 = dVar25 + *pdVar22 * *pdVar22;
                lVar11 = lVar11 + -1;
                pdVar22 = pdVar22 + 1;
              } while (lVar11 != 0);
            }
          }
        }
        pdVar7[0x14] = dVar54 / dVar25;
        _free(lVar9);
        _free(pdVar42);
        plVar8 = plVar15;
        (**(code **)(*plVar15 + 0x28))();
        dVar20 = pdVar7[6];
        if (dVar20 < pdVar7[8]) {
          uVar50 = 0;
          ppppdStack_360 = (double ****)(puVar48 + 0x10);
          ppppdStack_358 = (double ****)0x0;
          ppppdStack_378 = (double ****)((ulong)plVar8 & 0xffffffff);
          ppppdStack_370 = (double ****)(((ulong)plVar8 & 0xffffffff) << 3);
          pcStack_380 = param_5;
LAB_10993421c:
          ppppdStack_1d8 = (double ****)0x0;
          ppppdStack_1e0 = (double ****)0x0;
          ppppdStack_1c8 = (double ****)0x0;
          ppppdStack_1d0 = (double ****)0x0;
          pdVar42 = (double *)pdVar7[0xc];
          dVar52 = pdVar7[0xd];
          pdVar22 = (double *)pdVar7[0xe];
          if (pdVar7[0xf] != dVar52) {
            _free();
            if (0 < (long)dVar52) {
              if ((ulong)dVar52 >> 0x3d == 0) {
                pdVar22 = (double *)((long)dVar52 << 3);
                _malloc();
                if (pdVar22 != (double *)0x0) goto LAB_109934260;
              }
              ___cxa_allocate_exception(8);
              __ZNSt9bad_allocC1Ev();
              ___cxa_throw();
              goto LAB_109936200;
            }
            pdVar22 = (double *)0x0;
LAB_109934260:
            pdVar7[0xe] = (double)pdVar22;
            pdVar7[0xf] = dVar52;
          }
          uVar21 = (long)dVar52 - ((long)dVar52 >> 0x3f) & 0xfffffffffffffffe;
          dVar20 = SQRT(dVar20);
          if (1 < (long)dVar52) {
            lVar9 = 0;
            pdVar30 = pdVar22;
            pdVar19 = pdVar42;
            do {
              dVar54 = *pdVar19;
              pdVar30[1] = pdVar19[1] * dVar20;
              *pdVar30 = dVar54 * dVar20;
              lVar9 = lVar9 + 2;
              pdVar30 = pdVar30 + 2;
              pdVar19 = pdVar19 + 2;
            } while (lVar9 < (long)uVar21);
          }
          lVar9 = (long)dVar52 % 2;
          if (lVar9 != 0 && (long)uVar21 <= (long)dVar52) {
            pdVar42 = pdVar42 + ((long)dVar52 / 2) * 2;
            pdVar22 = pdVar22 + ((long)dVar52 / 2) * 2;
            do {
              *pdVar22 = dVar20 * *pdVar42;
              lVar9 = lVar9 + -1;
              pdVar42 = pdVar42 + 1;
              pdVar22 = pdVar22 + 1;
            } while (lVar9 != 0);
          }
          ppppdStack_1e0 = (double ****)pdVar7[0xe];
          dVar20 = pdVar7[0x12];
          if ((0 < (int)plVar8) && (dVar20 != 0.0)) {
            _memset_pattern16(dVar20,&UNK_10e00cee0,ppppdStack_370);
          }
          (**(code **)(*(long *)pdVar7[1] + 0x10))
                    (&pppdStack_338,(long *)pdVar7[1],plVar15,ppdVar17,&ppppdStack_1e0,dVar20);
          ppppdVar49 = (double ****)pppdStack_338;
          uStack_364 = (uint)uStack_330;
          uVar47 = uStack_330._4_4_;
          if ((uVar50 >> 7 & 1) != 0) {
            __ZdlPv(ppppdStack_358);
          }
          ppppdStack_358 = ppppdStack_328;
          uVar50 = (uint)uStack_318._7_1_;
          if (*(int *)(puVar48 + 8) == 0) {
LAB_109934360:
            pppppdVar45 = (double *****)ppppdStack_360;
            FUN_109962f70(ppppdStack_360,*(int *)(puVar48 + 8),plVar15,ppppdStack_1e0,ppdVar17,
                          pdVar7[0x12],0);
            if (((ulong)pppppdVar45 & 1) == 0) {
              pppdStack_338 = (double ***)0x0;
              lStack_2e0 = 0;
              ppppdStack_320 = (double ****)0x0;
              ppppdStack_328 = (double ****)0x0;
              lStack_310 = 0;
              uStack_318 = (double *****)0x0;
              lStack_300 = 0;
              uStack_308 = 0;
              lStack_2f0 = 0;
              uStack_2f8 = 0;
              uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
              FUN_1099a9f0c(&pppdStack_338,&UNK_10f58b708,0x243,2,FUN_1099aa768,0);
              FUN_1092b4db8(uStack_330 + 0xea8,&UNK_10f58b9fe,0x24);
              FUN_1092b4db8();
              FUN_1092b4db8();
              FUN_1099ab3b0(&pppdStack_338);
            }
          }
          else {
            uVar21 = *(ulong *)(puVar48 + 0x18);
            if (-1 < (char)puVar48[0x27]) {
              uVar21 = (ulong)(byte)puVar48[0x27];
            }
            if (uVar21 != 0) goto LAB_109934360;
          }
          if (uVar47 == 2) {
LAB_109934460:
            pdVar7[6] = pdVar7[9] * pdVar7[6];
            if (piRam000000011373cba0 == (int *)0x0) {
              iVar5 = 0x1373cba0;
              FUN_1099adbb8(0x11373cba0,0x11382bb14,&UNK_10f58b708,2);
              if (iVar5 != 0) goto LAB_1099344b0;
            }
            else if (1 < *piRam000000011373cba0) {
LAB_1099344b0:
              pppdStack_338 = (double ***)0x0;
              lStack_2e0 = 0;
              ppppdStack_320 = (double ****)0x0;
              ppppdStack_328 = (double ****)0x0;
              lStack_310 = 0;
              uStack_318 = (double *****)0x0;
              lStack_300 = 0;
              uStack_308 = 0;
              lStack_2f0 = 0;
              uStack_2f8 = 0;
              uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
              FUN_1099a9f0c(&pppdStack_338,&UNK_10f58b708,0x250,0,FUN_1099aa768,0);
              FUN_1092b4db8(uStack_330 + 0xea8,&UNK_10f58ba34,0xe);
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(pdVar7[6]);
              FUN_1099ab3b0(&pppdStack_338);
            }
            dVar20 = pdVar7[6];
            if (pdVar7[8] <= dVar20) goto LAB_1099349c8;
            goto LAB_10993421c;
          }
          if (uVar47 == 3) {
            uVar47 = 3;
            goto LAB_1099349cc;
          }
          pdVar42 = (double *)pdVar7[0x12];
          if ((0 < (int)plVar8) &&
             (pdVar22 = pdVar42, pppppdVar45 = (double *****)ppppdStack_378,
             pdVar42 != (double *)0x0)) {
            while( true ) {
              if ((0x7fefffffffffffff < (ulong)ABS(*pdVar22)) || (*pdVar22 == 1e+302)) break;
              pppppdVar45 = (double *****)((long)pppppdVar45 + -1);
              pdVar22 = pdVar22 + 1;
              if (pppppdVar45 == (double *****)0x0) goto LAB_10993453c;
            }
            goto LAB_109934460;
          }
LAB_10993453c:
          pdVar22 = (double *)pdVar7[0xc];
          dVar20 = pdVar7[0x13];
          uVar21 = (long)dVar20 - ((long)dVar20 >> 0x3f) & 0xfffffffffffffffe;
          if (1 < (long)dVar20) {
            lVar9 = 0;
            pdVar30 = pdVar42;
            pdVar19 = pdVar22;
            do {
              dVar52 = *pdVar19;
              pdVar30[1] = pdVar30[1] * -pdVar19[1];
              *pdVar30 = *pdVar30 * -dVar52;
              lVar9 = lVar9 + 2;
              pdVar30 = pdVar30 + 2;
              pdVar19 = pdVar19 + 2;
            } while (lVar9 < (long)uVar21);
          }
          lVar9 = (long)dVar20 % 2;
          if (lVar9 != 0 && lVar9 < 0 == SBORROW8((long)dVar20,uVar21)) {
            pdVar42 = pdVar42 + ((long)dVar20 / 2) * 2;
            pdVar22 = pdVar22 + ((long)dVar20 / 2) * 2;
            do {
              *pdVar42 = -(*pdVar22 * *pdVar42);
              lVar9 = lVar9 + -1;
              pdVar42 = pdVar42 + 1;
              pdVar22 = pdVar22 + 1;
            } while (lVar9 != 0);
          }
          if ((uVar47 & 0xfffffffe) != 2) {
            if (*(int *)((long)pdVar7 + 0xb4) == 1) {
              plVar8 = plVar15;
              (**(code **)(*plVar15 + 0x28))();
              iVar5 = (int)plVar8;
              pppppdVar45 = (double *****)(long)iVar5;
              if (iVar5 < 1) {
                if (iVar5 != 0) {
                  uStack_434 = uVar50;
                  ___cxa_allocate_exception(8);
                  __ZNSt9bad_allocC1Ev();
                  ___cxa_throw();
                  goto LAB_109936200;
                }
                pppdStack_3a8 = (double ***)0x0;
                pppdStack_338 = (double ***)0x0;
                ppppdStack_320 = (double ****)0x0;
                ppppdStack_328 = (double ****)0x2;
                pppppdVar12 = (double *****)0x0;
                uStack_330 = pppppdVar45;
                pppppdVar10 = (double *****)ppppdStack_320;
              }
              else {
                ppppdVar43 = (double ****)((long)pppppdVar45 << 4);
                ppppdVar57 = ppppdVar43;
                _malloc();
                if (ppppdVar57 == (double ****)0x0) {
                  ___cxa_allocate_exception(8);
                  __ZNSt9bad_allocC1Ev();
                  ___cxa_throw();
                  goto LAB_109936200;
                }
                pdVar42 = (double *)pdVar7[0x10];
                ppppdVar23 = ppppdVar57;
                pppppdVar12 = pppppdVar45;
                do {
                  *ppppdVar23 = (double ***)*pdVar42;
                  pppppdVar12 = (double *****)((long)pppppdVar12 + -1);
                  pdVar42 = pdVar42 + 1;
                  ppppdVar23 = ppppdVar23 + 2;
                } while (pppppdVar12 != (double *****)0x0);
                lVar9 = 8;
                puVar27 = (undefined8 *)pdVar7[0x12];
                pppppdVar12 = pppppdVar45;
                do {
                  *(undefined8 *)((long)ppppdVar57 + lVar9) = *puVar27;
                  lVar9 = lVar9 + 0x10;
                  pppppdVar12 = (double *****)((long)pppppdVar12 + -1);
                  puVar27 = puVar27 + 1;
                } while (pppppdVar12 != (double *****)0x0);
                pppdStack_3a8 = (double ***)ppppdVar57;
                _malloc();
                if (ppppdVar43 == (double ****)0x0) {
                  uStack_434 = uVar50;
                  ___cxa_allocate_exception(8);
                  __ZNSt9bad_allocC1Ev();
                  ___cxa_throw();
                  goto LAB_109936200;
                }
                ppppdStack_328 = (double ****)0x2;
                pppdStack_338 = (double ***)ppppdVar43;
                uStack_330 = pppppdVar45;
                _memcpy();
                ppppdStack_320 = (double ****)0x0;
                uStack_318 = (double *****)0x0;
                if (1 < (long)pppppdVar45) {
                  pppppdVar45 = (double *****)0x2;
                }
                pppppdVar10 = (double *****)((long)pppppdVar45 << 3);
                _malloc();
                pppppdVar12 = pppppdVar45;
                if (pppppdVar10 == (double *****)0x0) {
                  uStack_434 = uVar50;
                  ___cxa_allocate_exception(8);
                  __ZNSt9bad_allocC1Ev();
                  ___cxa_throw();
                  goto LAB_109936200;
                }
              }
              ppppdStack_320 = (double ****)pppppdVar10;
              ppppdStack_398 = (double ****)&ppppdStack_320;
              lStack_310 = 0;
              uStack_308 = 0;
              lVar9 = 8;
              uStack_318 = pppppdVar12;
              _malloc();
              if (lVar9 == 0) {
                uStack_434 = uVar50;
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_109936200;
              }
              uStack_308 = 2;
              lStack_300 = 0;
              uStack_2f8 = 0;
              lVar11 = 0x10;
              lStack_310 = lVar9;
              _malloc();
              if (lVar11 == 0) {
                uStack_434 = uVar50;
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_109936200;
              }
              uStack_2f8 = 2;
              lStack_2f0 = 0;
              uStack_2e8 = 0;
              lVar9 = 0x10;
              lStack_300 = lVar11;
              _malloc();
              if (lVar9 == 0) {
                uStack_434 = uVar50;
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_109936200;
              }
              uStack_2e8 = 2;
              lStack_2e0 = 0;
              uStack_2d8 = 0;
              lVar11 = 0x10;
              lStack_2f0 = lVar9;
              _malloc();
              if (lVar11 == 0) {
                uStack_434 = uVar50;
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_109936200;
              }
              uStack_2d8 = 2;
              lStack_2d0 = 0;
              uStack_2c8 = 0;
              lVar9 = 0x10;
              lStack_2e0 = lVar11;
              _malloc();
              if (lVar9 == 0) {
                uStack_434 = uVar50;
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_109936200;
              }
              uStack_2c8 = 2;
              uStack_2c0 = 0;
              lStack_2d0 = lVar9;
              FUN_10990e27c(&pppdStack_338);
              pppppdVar45 = (double *****)ppppdStack_328;
              if (uStack_2c0._1_1_ != '\x01') {
                pppppdVar12 = (double *****)ppppdStack_328;
                if ((long)uStack_330 <= (long)ppppdStack_328) {
                  pppppdVar12 = uStack_330;
                }
                dStack_2b8 = (double)(long)pppppdVar12 / 4503599627370496.0;
              }
              if (lStack_2a8 < 1) {
LAB_109934848:
                ppppdStack_1e0 = (double ****)0x0;
                uStack_188 = 0;
                ppppdStack_1c8 = (double ****)0x0;
                ppppdStack_1d0 = (double ****)0x0;
                ppppdStack_1b8 = (double ****)0x0;
                ppppdStack_1c0 = (double ****)0x0;
                pppdStack_1a8 = (double ***)0x0;
                ppppdStack_1b0 = (double ****)0x0;
                ppppdStack_198 = (double ****)0x0;
                ppppdStack_1a0 = (double ****)0x0;
                uStack_190 = (ulong)uStack_190._4_4_ << 0x20;
                FUN_1099a9f0c(&ppppdStack_1e0,&UNK_10f58b708,0x28e,2,FUN_1099aa768,0);
                FUN_1092b4db8(ppppdStack_1d8 + 0xea8,&UNK_10f58ba56,0x1d);
                FUN_1092b4db8();
                FUN_1092b4db8();
                FUN_1092b4db8();
LAB_109934968:
                FUN_1099ab3b0(&ppppdStack_1e0);
                bVar29 = false;
              }
              else {
                lVar9 = 0;
                ppppdVar57 = (double ****)pppdStack_338;
                do {
                  if (ABS(dStack_2b0) * dStack_2b8 < ABS((double)*ppppdVar57)) {
                    lVar9 = lVar9 + 1;
                  }
                  ppppdVar57 = ppppdVar57 + (long)((long)ppppdStack_328 + 1);
                  lStack_2a8 = lStack_2a8 + -1;
                } while (lStack_2a8 != 0);
                if (lVar9 == 0) goto LAB_109934848;
                if (lVar9 != 1) {
                  if (lVar9 != 2) {
                    ppppdStack_1e0 = (double ****)0x0;
                    uStack_188 = 0;
                    ppppdStack_1c8 = (double ****)0x0;
                    ppppdStack_1d0 = (double ****)0x0;
                    ppppdStack_1b8 = (double ****)0x0;
                    ppppdStack_1c0 = (double ****)0x0;
                    pppdStack_1a8 = (double ***)0x0;
                    ppppdStack_1b0 = (double ****)0x0;
                    ppppdStack_198 = (double ****)0x0;
                    ppppdStack_1a0 = (double ****)0x0;
                    uStack_190 = (ulong)uStack_190._4_4_ << 0x20;
                    FUN_1099a9f0c(&ppppdStack_1e0,&UNK_10f58b708,0x2a0,2,FUN_1099aa768,0);
                    FUN_1092b4db8(ppppdStack_1d8 + 0xea8,&UNK_10f58bb03,0x34);
                    FUN_1092b4db8();
                    FUN_1092b4db8();
                    FUN_1092b4db8();
                    goto LAB_109934968;
                  }
                  *(undefined1 *)(pdVar7 + 0x17) = 0;
                  if ((long)uStack_330 <= (long)pppppdVar45) {
                    pppppdVar45 = uStack_330;
                  }
                  plVar8 = plVar15;
                  uStack_434 = uVar50;
                  (**(code **)(*plVar15 + 0x28))();
                  iVar5 = (int)plVar8;
                  pppppdVar10 = (double *****)(long)iVar5;
                  ppppdStack_350 = (double ****)0x0;
                  ppppdStack_348 = (double ****)0x0;
                  ppppdStack_340 = (double ****)0x0;
                  plStack_3a0 = plVar8;
                  pppppdVar12 = (double *****)ppppdStack_350;
                  if (iVar5 != 0) {
                    if (iVar5 < 1) {
                      pppppdVar12 = (double *****)0x0;
                    }
                    else {
                      pppppdVar12 = (double *****)((long)pppppdVar10 << 4);
                      _malloc();
                      if (pppppdVar12 == (double *****)0x0) {
                        ___cxa_allocate_exception(8);
                        __ZNSt9bad_allocC1Ev();
                        ___cxa_throw();
                        goto LAB_109936200;
                      }
                    }
                  }
                  ppppdStack_350 = (double ****)pppppdVar12;
                  lVar9 = 0;
                  ppppdStack_340 = (double ****)0x2;
                  bVar29 = false;
                  do {
                    if (0 < (int)plStack_3a0) {
                      pppppdVar12 = (double *****)(ppppdStack_350 + lVar9 * (long)pppppdVar10);
                      pppppdVar34 = pppppdVar10;
                      do {
                        ppppdVar57 = (double ****)0x3ff0000000000000;
                        if (lVar9 != 0) {
                          ppppdVar57 = (double ****)0x0;
                        }
                        *pppppdVar12 = ppppdVar57;
                        lVar9 = lVar9 + -1;
                        pppppdVar34 = (double *****)((long)pppppdVar34 + -1);
                        pppppdVar12 = pppppdVar12 + 1;
                      } while (pppppdVar34 != (double *****)0x0);
                    }
                    lVar9 = 1;
                    bVar39 = !bVar29;
                    bVar29 = true;
                  } while (bVar39);
                  pppdStack_440 = (double ***)ppppdVar49;
                  ppppdStack_390 = (double ****)pppppdVar45;
                  ppppdStack_348 = (double ****)pppppdVar10;
                  if ((long)pppppdVar45 < 0x30) {
                    pdVar42 = (double *)0x10;
                    _malloc();
                    if (pdVar42 == (double *)0x0) {
                      ___cxa_allocate_exception(8);
                      __ZNSt9bad_allocC1Ev();
                      ___cxa_throw();
                      goto LAB_109936200;
                    }
                    if (0 < (long)pppppdVar45) {
                      pppppdVar10 = (double *****)0x0;
                      uStack_408 = (ulong)pdVar42 & 7;
                      ppppdStack_410 = (double ****)((ulong)pdVar42 >> 3 & 1);
                      uVar21 = ~(ulong)pppppdVar45;
                      pppppdVar34 = (double *****)((long)pppppdVar45 * 8);
                      pppppdVar12 = pppppdVar34 + 1;
                      uStack_418 = 0;
                      uStack_420 = 1;
                      plVar8 = plStack_3a0;
                      pppppdVar44 = pppppdVar45;
                      do {
                        pppppdVar44 = (double *****)((long)pppppdVar44 + -1);
                        pppppdVar34 = pppppdVar34 + -1;
                        puVar48 = (undefined *)((long)pppppdVar45 + ~(ulong)pppppdVar10);
                        pppppdVar46 = (double *****)((long)uStack_330 - (long)puVar48);
                        pppppdVar51 = pppppdVar46;
                        if ((int)plVar8 != 2) {
                          pppppdVar51 = (double *****)ppppdStack_340;
                        }
                        lVar9 = (long)ppppdStack_348 - (long)pppppdVar46;
                        uVar24 = (long)ppppdStack_340 - (long)pppppdVar51;
                        pppppdVar35 = (double *****)
                                      (ppppdStack_350 + lVar9 + uVar24 * (long)ppppdStack_348);
                        ppppdStack_360 = ppppdStack_320;
                        pppppdVar3 = (double *****)((long)pppppdVar46 + -1);
                        if (pppppdVar3 == (double *****)0x0) {
                          dVar20 = 1.0 - (double)ppppdStack_320[(long)puVar48];
                          if (((ulong)pppppdVar35 & 7) == 0) {
                            if (0 < (long)pppppdVar51) {
                              pdVar22 = (double *)
                                        ((long)ppppdStack_350 +
                                        (long)ppppdStack_348 * 8 * uVar24 +
                                        ((long)((long)ppppdStack_348 + (long)pppppdVar44) -
                                        (long)uStack_330) * 8);
                              do {
                                *pdVar22 = dVar20 * *pdVar22;
                                pdVar22 = pdVar22 + (long)ppppdStack_348;
                                pppppdVar51 = (double *****)((long)pppppdVar51 + -1);
                              } while (pppppdVar51 != (double *****)0x0);
                            }
                          }
                          else if (0 < (long)pppppdVar51) {
                            pdVar22 = (double *)
                                      ((long)ppppdStack_350 +
                                      (long)ppppdStack_348 * 8 * uVar24 +
                                      ((long)((long)ppppdStack_348 + (long)pppppdVar44) -
                                      (long)uStack_330) * 8);
                            do {
                              *pdVar22 = dVar20 * *pdVar22;
                              pdVar22 = pdVar22 + (long)ppppdStack_348;
                              pppppdVar51 = (double *****)((long)pppppdVar51 + -1);
                            } while (pppppdVar51 != (double *****)0x0);
                          }
                        }
                        else if ((double)ppppdStack_320[(long)puVar48] != 0.0) {
                          pppdStack_3f0 = pppdStack_338;
                          ppppdStack_3e8 = ppppdStack_328;
                          ppppdStack_3f8 = (double ****)(pppppdVar35 + 1);
                          ppppdStack_400 = ppppdStack_348;
                          ppppdStack_220 = (double ****)&ppppdStack_350;
                          ppppdStack_208 = ppppdStack_348;
                          pppppdVar45 = (double *****)ppppdStack_410;
                          if ((long)pppppdVar51 <= (long)ppppdStack_410) {
                            pppppdVar45 = pppppdVar51;
                          }
                          uStack_1f8 = uStack_418;
                          uStack_200 = uStack_420;
                          if (uStack_408 != 0) {
                            pppppdVar45 = pppppdVar51;
                          }
                          ppppdStack_1f0 = ppppdStack_348;
                          ppppdStack_3c8 = (double ****)uStack_330;
                          ppppdStack_398 = ppppdStack_350;
                          ppppdStack_3b0 = ppppdStack_348;
                          ppppdStack_3e0 = (double ****)pppppdVar3;
                          uStack_3d8 = uVar21;
                          ppppdStack_3d0 = (double ****)pppppdVar44;
                          uStack_3c0 = uVar24;
                          puStack_388 = puVar48;
                          ppppdStack_378 = (double ****)pppppdVar12;
                          ppppdStack_370 = (double ****)pppppdVar34;
                          appppdStack_250[0] = ppppdStack_3f8;
                          appppdStack_250[1] = (double ****)pppppdVar3;
                          appppdStack_250[2] = (double ****)pppppdVar51;
                          appppdStack_250[3] = (double ****)pppppdVar35;
                          appppdStack_250[4] = (double ****)pppppdVar46;
                          ppppdStack_228 = (double ****)pppppdVar51;
                          lStack_218 = lVar9;
                          uStack_210 = uVar24;
                          if (0 < (long)pppppdVar45) {
                            _bzero(pdVar42,(long)pppppdVar45 << 3);
                          }
                          lVar9 = (long)pppppdVar51 - (long)pppppdVar45;
                          uVar21 = lVar9 - (lVar9 >> 0x3f);
                          uVar24 = uVar21 & 0xfffffffffffffffe;
                          puVar48 = (undefined *)(uVar24 + (long)pppppdVar45);
                          if (1 < lVar9) {
                            puVar1 = puVar48;
                            if ((long)puVar48 <= (long)pppppdVar45 + 2) {
                              puVar1 = (undefined *)((long)pppppdVar45 + 2);
                            }
                            uStack_430 = uVar21;
                            uStack_428 = uVar24;
                            _bzero(pdVar42 + (long)pppppdVar45,
                                   ((ulong)(puVar1 + ~(ulong)pppppdVar45) & 0x1ffffffffffffffe) * 8
                                   + 0x10);
                            uVar21 = uStack_430;
                            uVar24 = uStack_428;
                          }
                          if ((long)puVar48 < (long)pppppdVar51) {
                            _bzero(pdVar42 + (long)(((long)uVar21 >> 1) * 2 + (long)pppppdVar45),
                                   (lVar9 - uVar24) * 8);
                          }
                          uVar21 = uStack_3d8;
                          pppppdVar12 = (double *****)((long)ppppdStack_390 - (long)pppppdVar10);
                          pppppdVar34 = (double *****)((long)ppppdStack_3c8 - (long)pppppdVar12);
                          pppppdVar45 = (double *****)
                                        (pppdStack_3f0 +
                                        (long)(puStack_388 +
                                              (long)ppppdStack_3e8 * (long)pppppdVar12));
                          if (pppppdVar51 == (double *****)0x1) {
                            if ((double *****)ppppdStack_3e0 == (double *****)0x0) {
                              dVar20 = 0.0;
                            }
                            else {
                              dVar20 = (double)*pppppdVar45 * (double)*ppppdStack_3f8;
                              if (2 < (long)pppppdVar46) {
                                puVar48 = (undefined *)((long)ppppdStack_3c8 + uStack_3d8);
                                pdVar22 = (double *)
                                          ((long)pppdStack_3f0 +
                                          (long)((long)ppppdStack_370 +
                                                (long)ppppdStack_3e8 * (long)ppppdStack_378));
                                pppppdVar44 = (double *****)
                                              (ppppdStack_398 +
                                              (long)((undefined *)
                                                     ((long)ppppdStack_3b0 + (long)ppppdStack_3d0) +
                                                    (((long)ppppdStack_3b0 * uStack_3c0 + 2) -
                                                    (long)ppppdStack_3c8)));
                                do {
                                  dVar20 = dVar20 + *pdVar22 * (double)*pppppdVar44;
                                  pdVar22 = pdVar22 + (long)ppppdStack_3e8;
                                  puVar48 = puVar48 + -1;
                                  pppppdVar44 = pppppdVar44 + 1;
                                } while (puVar48 != (undefined *)0x0);
                              }
                            }
                            *pdVar42 = dVar20 + *pdVar42;
                            pppppdVar44 = (double *****)ppppdStack_400;
LAB_1099355cc:
                            pppppdVar46 = (double *****)0x0;
                            pppppdVar35 = (double *****)
                                          (ppppdStack_398 +
                                          (long)((undefined *)
                                                 ((long)ppppdStack_3b0 + (long)ppppdStack_3d0) +
                                                ((long)ppppdStack_3b0 * uStack_3c0 -
                                                (long)ppppdStack_3c8)));
                            do {
                              pdVar42[(long)pppppdVar46] =
                                   (double)*pppppdVar35 + pdVar42[(long)pppppdVar46];
                              pppppdVar46 = (double *****)((long)pppppdVar46 + 1);
                              pppppdVar35 = pppppdVar35 + (long)pppppdVar44;
                            } while (pppppdVar51 != pppppdVar46);
                            ppppdVar49 = (double ****)ppppdStack_360[(long)puStack_388];
                            pppppdVar46 = (double *****)
                                          (ppppdStack_398 +
                                          (long)((undefined *)
                                                 ((long)ppppdStack_3b0 + (long)ppppdStack_3d0) +
                                                ((long)ppppdStack_3b0 * uStack_3c0 -
                                                (long)ppppdStack_3c8)));
                            pdVar22 = pdVar42;
                            pppppdVar35 = pppppdVar51;
                            do {
                              *pppppdVar46 = (double ****)
                                             ((double)*pppppdVar46 - (double)ppppdVar49 * *pdVar22);
                              pppppdVar46 = pppppdVar46 + (long)pppppdVar44;
                              pppppdVar35 = (double *****)((long)pppppdVar35 + -1);
                              ppppdStack_1c0 = (double ****)pppppdVar45;
                              pdVar22 = pdVar22 + 1;
                            } while (pppppdVar35 != (double *****)0x0);
                          }
                          else {
                            ppppdStack_140 = &pppdStack_338;
                            ppppdStack_128 = (double ****)0x1;
                            ppppdStack_1e0 = ppppdStack_3f8;
                            ppppdStack_1d8 = ppppdStack_3e0;
                            ppppdStack_1b0 = ppppdStack_220;
                            ppppdStack_1b8 = ppppdStack_228;
                            ppppdStack_1a0 = (double ****)uStack_210;
                            pppdStack_1a8 = (double ***)lStack_218;
                            uStack_190 = uStack_200;
                            ppppdStack_198 = ppppdStack_208;
                            ppppdStack_180 = ppppdStack_1f0;
                            uStack_188 = uStack_1f8;
                            ppppdStack_1c0 = appppdStack_250[4];
                            ppppdStack_1c8 = appppdStack_250[3];
                            ppppdStack_3e8 = (double ****)pppppdVar45;
                            ppppdStack_1d0 = (double ****)pppppdVar51;
                            ppppdStack_158 = (double ****)pppppdVar45;
                            ppppdStack_150 = (double ****)pppppdVar34;
                            ppppdStack_138 = (double ****)pppppdVar12;
                            puStack_130 = puStack_388;
                            FUN_109938c48(0x3ff0000000000000,&ppppdStack_1e0,&ppppdStack_158,pdVar42
                                         );
                            ppppdStack_1c0 = ppppdStack_3e8;
                            pppppdVar45 = (double *****)ppppdStack_3e8;
                            pppppdVar44 = (double *****)ppppdStack_348;
                            if (0 < (long)pppppdVar51) goto LAB_1099355cc;
                          }
                          pppppdVar44 = (double *****)ppppdStack_3d0;
                          ppppdStack_1c8 = (double ****)ppppdStack_360[(long)puStack_388];
                          pppdStack_1a8 = (double ***)&pppdStack_338;
                          uStack_190 = 1;
                          ppppdStack_1d8 = (double ****)pppppdVar34;
                          ppppdStack_1b8 = (double ****)pppppdVar34;
                          ppppdStack_1a0 = (double ****)pppppdVar12;
                          ppppdStack_198 = (double ****)puStack_388;
                          ppppdStack_180 = (double ****)pdVar42;
                          ppppdStack_170 = (double ****)pppppdVar51;
                          FUN_109938dcc(appppdStack_250,&ppppdStack_1e0,pdVar42);
                          plVar8 = plStack_3a0;
                          pppppdVar34 = (double *****)ppppdStack_370;
                          pppppdVar12 = (double *****)ppppdStack_378;
                          pppppdVar45 = (double *****)ppppdStack_390;
                        }
                        pppppdVar10 = (double *****)((long)pppppdVar10 + 1);
                        uVar21 = uVar21 + 1;
                        pppppdVar12 = pppppdVar12 + -1;
                      } while (pppppdVar10 != pppppdVar45);
                    }
LAB_1099356bc:
                    _free(pdVar42);
                    ppppdVar57 = ppppdStack_340;
                    ppppdVar49 = ppppdStack_348;
                    pppppdVar45 = (double *****)ppppdStack_350;
                    if ((double *****)pdVar7[0x19] != (double *****)ppppdStack_348 ||
                        (double *****)pdVar7[0x1a] != (double *****)ppppdStack_340) {
                      if (((double *****)ppppdStack_348 != (double *****)0x0) &&
                         ((double *****)ppppdStack_340 != (double *****)0x0)) {
                        lVar9 = 0;
                        if ((double *****)ppppdStack_340 != (double *****)0x0) {
                          lVar9 = 0x7fffffffffffffff / (long)ppppdStack_340;
                        }
                        if ((long)ppppdStack_348 <= lVar9) goto LAB_1099356f4;
                        goto LAB_109935728;
                      }
LAB_1099356f4:
                      uVar21 = (long)ppppdStack_340 * (long)ppppdStack_348;
                      if ((long)pdVar7[0x1a] * (long)pdVar7[0x19] - uVar21 != 0) {
                        _free(pdVar7[0x18]);
                        if (0 < (long)uVar21) {
                          if (uVar21 >> 0x3d == 0) {
                            dVar20 = (double)(uVar21 * 8);
                            _malloc();
                            if (dVar20 != 0.0) goto LAB_109935750;
                          }
LAB_109935728:
                          ___cxa_allocate_exception(8);
                          __ZNSt9bad_allocC1Ev();
                          ___cxa_throw();
                          goto LAB_109936200;
                        }
                        dVar20 = 0.0;
LAB_109935750:
                        pdVar7[0x18] = dVar20;
                      }
                      pdVar7[0x19] = (double)ppppdVar49;
                      pdVar7[0x1a] = (double)ppppdVar57;
                    }
                    if (0 < (long)ppppdVar49) {
                      pppppdVar12 = (double *****)0x0;
                      puVar27 = (undefined8 *)pdVar7[0x18];
                      do {
                        puVar38 = puVar27;
                        pppppdVar10 = pppppdVar45;
                        pppppdVar34 = (double *****)ppppdVar57;
                        if (0 < (long)ppppdVar57) {
                          do {
                            *puVar38 = *pppppdVar10;
                            pppppdVar10 = pppppdVar10 + (long)ppppdVar49;
                            pppppdVar34 = (double *****)((long)pppppdVar34 + -1);
                            puVar38 = puVar38 + 1;
                          } while (pppppdVar34 != (double *****)0x0);
                        }
                        pppppdVar12 = (double *****)((long)pppppdVar12 + 1);
                        pppppdVar45 = pppppdVar45 + 1;
                        puVar27 = puVar27 + (long)ppppdVar57;
                      } while (pppppdVar12 != (double *****)ppppdVar49);
                    }
                    _free(ppppdStack_350);
                    pppppdVar45 = (double *****)pdVar7[0x1a];
                    if (0 < (long)pppppdVar45) {
                      if ((ulong)pppppdVar45 >> 0x3d == 0) {
                        pdVar42 = (double *)0x1;
                        _calloc(1,(long)pppppdVar45 << 3);
                        if (pdVar42 != (double *)0x0) {
                          if (pppppdVar45 != (double *****)0x1) goto LAB_10993583c;
                          dVar20 = pdVar7[0x11];
                          dVar52 = 0.0;
                          if (dVar20 != 0.0) {
                            pdVar30 = (double *)pdVar7[0x18];
                            pdVar22 = (double *)pdVar7[0x10];
                            dVar52 = *pdVar30 * *pdVar22;
                            if (1 < (long)dVar20) {
                              lVar9 = (long)dVar20 + -1;
                              do {
                                pdVar30 = pdVar30 + 1;
                                pdVar22 = pdVar22 + 1;
                                dVar52 = dVar52 + *pdVar30 * *pdVar22;
                                lVar9 = lVar9 + -1;
                              } while (lVar9 != 0);
                            }
                          }
                          *pdVar42 = dVar52 + 0.0;
                          goto LAB_109935874;
                        }
                      }
                      ___cxa_allocate_exception(8);
                      __ZNSt9bad_allocC1Ev();
                      ___cxa_throw();
                      goto LAB_109936200;
                    }
                    pdVar42 = (double *)0x0;
LAB_10993583c:
                    ppppdStack_1e0 = (double ****)pdVar7[0x18];
                    appppdStack_250[0] = (double ****)pdVar7[0x10];
                    appppdStack_250[1] = (double ****)0x1;
                    ppppdStack_1d8 = (double ****)pppppdVar45;
                    FUN_109909a3c(0x3ff0000000000000,pppppdVar45,pdVar7[0x19],&ppppdStack_1e0,
                                  appppdStack_250,pdVar42,1);
LAB_109935874:
                    dVar20 = *pdVar42;
                    pdVar7[0x1c] = pdVar42[1];
                    pdVar7[0x1b] = dVar20;
                    _free(pdVar42);
                    plVar8 = plVar15;
                    (**(code **)(*plVar15 + 0x20))();
                    uVar6 = (uint)plVar8;
                    pppppdVar45 = (double *****)(long)(int)uVar6;
                    if (uVar6 == 0) {
LAB_1099358f0:
                      lVar9 = 0;
                    }
                    else {
                      lVar9 = 0;
                      if (pppppdVar45 != (double *****)0x0) {
                        lVar9 = 0x7fffffffffffffff / (long)pppppdVar45;
                      }
                      if (lVar9 < 2) {
LAB_1099358cc:
                        ___cxa_allocate_exception(8);
                        __ZNSt9bad_allocC1Ev();
                        ___cxa_throw();
                        goto LAB_109936200;
                      }
                      if ((int)uVar6 < 1) goto LAB_1099358f0;
                      lVar9 = 1;
                      _calloc(1,(long)pppppdVar45 << 4);
                      if (lVar9 == 0) goto LAB_1099358cc;
                    }
                    dVar20 = pdVar7[0xd];
                    if (0 < (long)dVar20) {
                      if ((ulong)dVar20 >> 0x3d == 0) {
                        pdVar42 = (double *)pdVar7[0x18];
                        ppppdStack_360 = (double ****)pdVar7[0x1a];
                        lVar11 = (long)dVar20 << 3;
                        dVar52 = pdVar7[0xc];
                        _malloc();
                        if (lVar11 != 0) {
                          dVar54 = 0.0;
                          do {
                            *(double *)(lVar11 + (long)dVar54 * 8) =
                                 *pdVar42 / *(double *)((long)dVar52 + (long)dVar54 * 8);
                            dVar54 = (double)((long)dVar54 + 1);
                            pdVar42 = pdVar42 + (long)ppppdStack_360;
                          } while (dVar20 != dVar54);
                          goto LAB_10993595c;
                        }
                      }
                      ___cxa_allocate_exception(8);
                      __ZNSt9bad_allocC1Ev();
                      ___cxa_throw();
                      goto LAB_109936200;
                    }
                    lVar11 = 0;
LAB_10993595c:
                    (**(code **)(*plVar15 + 0x10))(plVar15,lVar11,lVar9);
                    dVar25 = pdVar7[0x1a];
                    dVar52 = pdVar7[0xc];
                    dVar54 = pdVar7[0xd];
                    if (dVar20 == dVar54) {
                      pppppdVar12 = (double *****)pdVar7[0x18];
                      if (0 < (long)dVar20) {
LAB_1099359cc:
                        dVar20 = 0.0;
                        pppppdVar12 = pppppdVar12 + 1;
                        do {
                          *(double *)(lVar11 + (long)dVar20 * 8) =
                               (double)*pppppdVar12 / *(double *)((long)dVar52 + (long)dVar20 * 8);
                          dVar20 = (double)((long)dVar20 + 1);
                          pppppdVar12 = pppppdVar12 + (long)dVar25;
                        } while (dVar54 != dVar20);
                      }
                    }
                    else {
                      ppppdStack_360 = (double ****)pdVar7[0x18];
                      _free(lVar11);
                      if (0 < (long)dVar54) {
                        if ((ulong)dVar54 >> 0x3d == 0) {
                          lVar11 = (long)dVar54 << 3;
                          _malloc();
                          pppppdVar12 = (double *****)ppppdStack_360;
                          if (lVar11 != 0) goto LAB_1099359cc;
                        }
                        ___cxa_allocate_exception(8);
                        __ZNSt9bad_allocC1Ev();
                        ___cxa_throw();
                        goto LAB_109936200;
                      }
                      lVar11 = 0;
                    }
                    (**(code **)(*plVar15 + 0x10))(plVar15,lVar11,lVar9 + (long)pppppdVar45 * 8);
                    uVar50 = uStack_434;
                    if ((undefined *)((long)pppppdVar45 + -1) < (undefined *)0xf) {
                      lVar16 = 0;
                      pppppdVar12 = (double *****)((ulong)pppppdVar45 & 0xc);
                      lVar36 = (long)pppppdVar45 * 8;
                      lVar26 = lVar9 + ((ulong)pppppdVar45 >> 1 & 7) * 0x10;
                      bVar29 = true;
                      do {
                        bVar39 = bVar29;
                        lVar41 = 0;
                        pdVar42 = (double *)(lVar9 + lVar16 * (long)pppppdVar45 * 8);
                        bVar29 = true;
                        do {
                          bVar18 = bVar29;
                          pdVar22 = (double *)(lVar9 + lVar41 * (long)pppppdVar45 * 8);
                          if (uVar6 < 2) {
                            ppppdVar49 = (double ****)(*pdVar22 * *pdVar42);
                          }
                          else {
                            dVar20 = *pdVar22 * *pdVar42;
                            dVar52 = pdVar22[1] * pdVar42[1];
                            if (3 < uVar6) {
                              dVar54 = pdVar22[2] * pdVar42[2];
                              dVar25 = pdVar22[3] * pdVar42[3];
                              if (7 < uVar6) {
                                pdVar19 = (double *)(lVar9 + 0x30 + lVar36 * lVar41);
                                pppppdVar10 = (double *****)0x4;
                                pdVar30 = (double *)(lVar9 + 0x30 + lVar36 * lVar16);
                                do {
                                  dVar20 = dVar20 + pdVar19[-2] * pdVar30[-2];
                                  dVar52 = dVar52 + pdVar19[-1] * pdVar30[-1];
                                  dVar54 = dVar54 + *pdVar19 * *pdVar30;
                                  dVar25 = dVar25 + pdVar19[1] * pdVar30[1];
                                  pppppdVar10 = (double *****)((long)pppppdVar10 + 4);
                                  pdVar30 = pdVar30 + 4;
                                  pdVar19 = pdVar19 + 4;
                                } while (pppppdVar10 < pppppdVar12);
                              }
                              dVar20 = dVar54 + dVar20;
                              dVar52 = dVar25 + dVar52;
                              if (pppppdVar12 < (double *****)((ulong)pppppdVar45 & 0xe)) {
                                dVar20 = dVar20 + pdVar22[(long)pppppdVar12] *
                                                  pdVar42[(long)pppppdVar12];
                                dVar52 = dVar52 + (pdVar22 + (long)pppppdVar12)[1] *
                                                  (pdVar42 + (long)pppppdVar12)[1];
                              }
                            }
                            ppppdVar49 = (double ****)(dVar20 + dVar52);
                            if (pppppdVar45 != (double *****)((ulong)pppppdVar45 & 0xe)) {
                              pdVar22 = (double *)(lVar26 + lVar36 * lVar41);
                              pdVar30 = (double *)(lVar26 + lVar36 * lVar16);
                              uVar21 = (ulong)pppppdVar45 & 0xfffffffffffffff1;
                              do {
                                ppppdVar49 = (double ****)((double)ppppdVar49 + *pdVar22 * *pdVar30)
                                ;
                                uVar21 = uVar21 - 1;
                                pdVar22 = pdVar22 + 1;
                                pdVar30 = pdVar30 + 1;
                              } while (uVar21 != 0);
                            }
                          }
                          appppdStack_250[lVar16 * 2 + lVar41] = ppppdVar49;
                          lVar41 = 1;
                          bVar29 = false;
                        } while (bVar18);
                        lVar16 = 1;
                        bVar29 = false;
                      } while (bVar39);
                    }
                    else {
                      appppdStack_250[1] = (double ****)0x0;
                      appppdStack_250[0] = (double ****)0x0;
                      appppdStack_250[3] = (double ****)0x0;
                      appppdStack_250[2] = (double ****)0x0;
                      if (uVar6 != 0) {
                        ppppdStack_1d8 = (double ****)0x0;
                        ppppdStack_1e0 = (double ****)0x0;
                        ppppdStack_1c8 = (double ****)0x2;
                        ppppdStack_1d0 = (double ****)0x2;
                        ppppdStack_1c0 = (double ****)pppppdVar45;
                        if ((bRam00000001132dfa18 & 1) == 0) {
                          iVar5 = 0x132dfa18;
                          ___cxa_guard_acquire();
                          if (iVar5 != 0) {
                            uRam00000001132dfa08 = 0x80000;
                            uRam00000001132dfa00 = 0x4000;
                            lRam00000001132dfa10 = 0x80000;
                            ___cxa_guard_release(0x1132dfa18);
                          }
                        }
                        ppppdVar49 = ppppdStack_1c0;
                        pppppdVar12 = (double *****)ppppdStack_1d0;
                        if ((long)ppppdStack_1d0 <= (long)ppppdStack_1c8) {
                          pppppdVar12 = (double *****)ppppdStack_1c8;
                        }
                        pppppdVar10 = (double *****)ppppdStack_1c0;
                        if ((long)ppppdStack_1c0 <= (long)pppppdVar12) {
                          pppppdVar10 = pppppdVar12;
                        }
                        ppppdStack_1b0 = ppppdVar49;
                        if (0x2f < (long)pppppdVar10) {
                          pppppdVar12 = (double *****)
                                        ((long)(uRam00000001132dfa00 - 0xc0) / 0x50 &
                                        0xfffffffffffffff8);
                          if ((long)pppppdVar12 < 2) {
                            pppppdVar12 = (double *****)0x1;
                          }
                          if ((long)pppppdVar12 < (long)ppppdStack_1c0) {
                            uVar21 = 0;
                            if (pppppdVar12 != (double *****)0x0) {
                              uVar21 = (ulong)ppppdStack_1c0 / (ulong)pppppdVar12;
                            }
                            uVar24 = (long)ppppdStack_1c0 - uVar21 * (long)pppppdVar12;
                            ppppdStack_1c0 = (double ****)pppppdVar12;
                            if (uVar24 != 0) {
                              lVar26 = uVar21 * 8 + 8;
                              lVar16 = 0;
                              if (lVar26 != 0) {
                                lVar16 = (long)((long)pppppdVar12 + ~uVar24) / lVar26;
                              }
                              ppppdStack_1c0 = (double ****)(pppppdVar12 + -lVar16);
                            }
                          }
                          uVar21 = (uRam00000001132dfa00 - 0xc0) +
                                   (long)ppppdStack_1d0 * (long)ppppdStack_1c0 * -8;
                          if ((long)uVar21 < (long)ppppdStack_1c0 * 0x20) {
                            uVar24 = 0;
                            if ((long)pppppdVar12 << 5 != 0) {
                              uVar24 = 0x480000 / (ulong)((long)pppppdVar12 << 5);
                            }
                          }
                          else {
                            uVar24 = 0;
                            if ((long)ppppdStack_1c0 << 3 != 0) {
                              uVar24 = uVar21 / (ulong)((long)ppppdStack_1c0 << 3);
                            }
                          }
                          uVar21 = 0;
                          if ((long)ppppdStack_1c0 << 4 != 0) {
                            uVar21 = 0x180000 / (ulong)((long)ppppdStack_1c0 << 4);
                          }
                          if ((long)uVar21 <= (long)uVar24) {
                            uVar24 = uVar21;
                          }
                          pppppdVar12 = (double *****)(uVar24 & 0xfffffffffffffffc);
                          ppppdStack_1b0 = ppppdStack_1c0;
                          if ((long)pppppdVar12 < (long)ppppdStack_1c8) {
                            lVar26 = 0;
                            if (pppppdVar12 != (double *****)0x0) {
                              lVar26 = (long)ppppdStack_1c8 / (long)pppppdVar12;
                            }
                            lVar16 = (long)ppppdStack_1c8 - lVar26 * (long)pppppdVar12;
                            ppppdStack_1c8 = (double ****)pppppdVar12;
                            if (lVar16 != 0) {
                              lVar26 = lVar26 * 4 + 4;
                              lVar36 = 0;
                              if (lVar26 != 0) {
                                lVar36 = ((long)pppppdVar12 - lVar16) / lVar26;
                              }
                              ppppdStack_1c8 = (double ****)((long)pppppdVar12 + lVar36 * -4);
                            }
                          }
                          else if (ppppdVar49 == ppppdStack_1c0) {
                            uVar24 = (long)ppppdVar49 * (long)ppppdStack_1c8 * 8;
                            pppppdVar12 = (double *****)ppppdStack_1d0;
                            uVar21 = uRam00000001132dfa00;
                            if (0x400 < (long)uVar24) {
                              if (0x23f < (long)ppppdStack_1d0) {
                                pppppdVar12 = (double *****)0x240;
                              }
                              uVar21 = uRam00000001132dfa08;
                              if (lRam00000001132dfa10 == 0 || 0x8000 < uVar24) {
                                uVar21 = 0x180000;
                                pppppdVar12 = (double *****)ppppdStack_1d0;
                              }
                            }
                            pppppdVar10 = (double *****)0x0;
                            if ((long)ppppdVar49 * 0x18 != 0) {
                              pppppdVar10 = (double *****)
                                            (uVar21 / (ulong)((long)ppppdVar49 * 0x18));
                            }
                            if ((long)pppppdVar10 <= (long)pppppdVar12) {
                              pppppdVar12 = pppppdVar10;
                            }
                            if ((long)pppppdVar12 < 7) {
                              ppppdStack_1b0 = ppppdVar49;
                              if (pppppdVar12 == (double *****)0x0) goto LAB_109935ed0;
                            }
                            else {
                              pppppdVar12 = (double *****)
                                            ((((ulong)pppppdVar12 / 6) * 2 + (ulong)pppppdVar12 / 6)
                                            * 2);
                            }
                            lVar26 = 0;
                            if (pppppdVar12 != (double *****)0x0) {
                              lVar26 = (long)ppppdStack_1d0 / (long)pppppdVar12;
                            }
                            lVar16 = (long)ppppdStack_1d0 - lVar26 * (long)pppppdVar12;
                            ppppdStack_1b0 = ppppdVar49;
                            ppppdStack_1d0 = (double ****)pppppdVar12;
                            if (lVar16 != 0) {
                              lVar36 = lVar26 * 6 + 6;
                              lVar26 = 0;
                              if (lVar36 != 0) {
                                lVar26 = ((long)pppppdVar12 - lVar16) / lVar36;
                              }
                              ppppdStack_1d0 = (double ****)((long)pppppdVar12 + lVar26 * -6);
                            }
                          }
                        }
LAB_109935ed0:
                        ppppdStack_1b8 = (double ****)((long)ppppdStack_1d0 * (long)ppppdStack_1b0);
                        ppppdStack_1b0 = (double ****)((long)ppppdStack_1b0 * (long)ppppdStack_1c8);
                        ppppdStack_450 = (double ****)&ppppdStack_1e0;
                        uStack_448 = 0;
                        ppppdStack_460 = (double ****)0x1;
                        ppppdStack_458 = (double ****)0x2;
                        FUN_109913d80(0x3ff0000000000000,2,2,pppppdVar45,lVar9,pppppdVar45,lVar9,
                                      pppppdVar45,appppdStack_250);
                        _free(ppppdStack_1e0);
                        _free(ppppdStack_1d8);
                      }
                    }
                    ppppdVar43 = appppdStack_250[3];
                    ppppdVar57 = appppdStack_250[2];
                    ppppdVar49 = appppdStack_250[0];
                    pdVar7[0x1e] = (double)appppdStack_250[1];
                    pdVar7[0x1d] = (double)ppppdVar49;
                    pdVar7[0x20] = (double)ppppdVar43;
                    pdVar7[0x1f] = (double)ppppdVar57;
                    _free(lVar11);
                    _free(lVar9);
                    bVar29 = true;
                    ppppdVar49 = (double ****)pppdStack_440;
                    goto LAB_109934974;
                  }
                  puVar48 = (undefined *)0x0;
                  pppppdVar12 = (double *****)((ulong)((long)pppppdVar45 + 1) >> 1);
                  if ((double *****)0x5f < pppppdVar45) {
                    pppppdVar12 = (double *****)0x30;
                  }
                  uStack_3b8 = 0x80000;
                  uStack_3c0 = 0x4000;
                  ppppdStack_3b0 = (double ****)pppppdVar12;
                  do {
                    ppppdVar49 = ppppdStack_348;
                    pppppdVar45 = (double *****)((long)pppppdVar45 - (long)puVar48);
                    appppdStack_250[4] =
                         (double ****)
                         ((long)pppppdVar45 - (long)pppppdVar12 &
                         ((long)pppppdVar45 - (long)pppppdVar12 >> 0x3f ^ 0xffffffffffffffffU));
                    appppdStack_250[1] = (double ****)((long)uStack_330 - (long)appppdStack_250[4]);
                    appppdStack_250[0] =
                         (double ****)
                         (pppdStack_338 +
                         (long)((long)appppdStack_250[4] +
                               (long)ppppdStack_328 * (long)appppdStack_250[4]));
                    pppppdVar10 = pppppdVar45;
                    if ((long)pppppdVar12 <= (long)pppppdVar45) {
                      pppppdVar10 = pppppdVar12;
                    }
                    appppdStack_250[3] = &pppdStack_338;
                    ppppdStack_220 = ppppdStack_328;
                    ppppdStack_378 = ppppdStack_350;
                    puVar1 = (undefined *)
                             ((long)ppppdStack_348 + ((long)appppdStack_250[4] - (long)uStack_330));
                    pppppdVar12 = (double *****)appppdStack_250[1];
                    puVar2 = puVar1;
                    if ((int)plStack_3a0 != 2) {
                      puVar2 = (undefined *)0x0;
                      pppppdVar12 = (double *****)ppppdStack_340;
                    }
                    ppppdStack_158 = ppppdStack_320 + (long)appppdStack_250[4];
                    ppppdStack_140 = ppppdStack_398;
                    ppppdStack_128 = (double ****)uStack_318;
                    lStack_270 = 0;
                    ppppdStack_268 = (double ****)0x0;
                    ppppdStack_260 = (double ****)0x0;
                    lVar9 = lStack_270;
                    appppdStack_250[2] = (double ****)pppppdVar10;
                    ppppdStack_228 = appppdStack_250[4];
                    ppppdStack_150 = (double ****)pppppdVar10;
                    ppppdStack_138 = appppdStack_250[4];
                    if (pppppdVar45 != (double *****)appppdStack_250[4]) {
                      lVar9 = 0;
                      if (pppppdVar10 != (double *****)0x0) {
                        lVar9 = 0x7fffffffffffffff / (long)pppppdVar10;
                      }
                      if ((long)pppppdVar10 <= lVar9 &&
                          (ulong)((long)pppppdVar10 * (long)pppppdVar10) >> 0x3d == 0) {
                        lVar9 = (long)pppppdVar10 * (long)pppppdVar10 * 8;
                        _malloc();
                        if (lVar9 != 0) goto LAB_109934b80;
                      }
                      ___cxa_allocate_exception(8);
                      __ZNSt9bad_allocC1Ev();
                      ___cxa_throw();
                      goto LAB_109936200;
                    }
LAB_109934b80:
                    lStack_270 = lVar9;
                    ppppdStack_268 = (double ****)pppppdVar10;
                    ppppdStack_260 = (double ****)pppppdVar10;
                    FUN_10991057c(&lStack_270,appppdStack_250,&ppppdStack_158);
                    ppppdVar43 = appppdStack_250[2];
                    ppppdVar57 = appppdStack_250[1];
                    ppppdStack_360 = appppdStack_250[0];
                    ppppdStack_370 = appppdStack_250[3];
                    pdStack_288 = (double *)0x0;
                    ppppdStack_280 = (double ****)0x0;
                    ppppdStack_278 = (double ****)0x0;
                    if ((pppppdVar12 != (double *****)0x0) &&
                       ((double *****)appppdStack_250[2] != (double *****)0x0)) {
                      lVar9 = 0;
                      if (pppppdVar12 != (double *****)0x0) {
                        lVar9 = 0x7fffffffffffffff / (long)pppppdVar12;
                      }
                      if ((long)appppdStack_250[2] <= lVar9) goto LAB_109934bcc;
LAB_109935fa0:
                      ___cxa_allocate_exception(8);
                      __ZNSt9bad_allocC1Ev();
                      ___cxa_throw();
                      goto LAB_109936200;
                    }
LAB_109934bcc:
                    uVar21 = (long)appppdStack_250[2] * (long)pppppdVar12;
                    pdVar42 = pdStack_288;
                    if (0 < (long)uVar21) {
                      if (uVar21 >> 0x3d == 0) {
                        pdVar42 = (double *)0x1;
                        _calloc(1,uVar21 * 8);
                        if (pdVar42 != (double *)0x0) goto LAB_109934bf4;
                      }
                      goto LAB_109935fa0;
                    }
LAB_109934bf4:
                    pdStack_288 = pdVar42;
                    ppppdStack_280 = ppppdVar43;
                    pppppdVar10 = (double *****)ppppdVar57;
                    if ((long)ppppdVar43 <= (long)ppppdVar57) {
                      pppppdVar10 = (double *****)ppppdVar43;
                    }
                    ppppdStack_1d8 = (double ****)0x0;
                    ppppdStack_1e0 = (double ****)0x0;
                    ppppdStack_1c0 = ppppdVar57;
                    puStack_388 = puVar48;
                    ppppdStack_278 = (double ****)pppppdVar12;
                    ppppdStack_1d0 = (double ****)pppppdVar10;
                    ppppdStack_1c8 = (double ****)pppppdVar12;
                    if ((bRam00000001132dfa18 & 1) == 0) {
                      iVar5 = 0x132dfa18;
                      ___cxa_guard_acquire();
                      if (iVar5 != 0) {
                        uRam00000001132dfa08 = uStack_3b8;
                        uRam00000001132dfa00 = uStack_3c0;
                        lRam00000001132dfa10 = 0x80000;
                        ___cxa_guard_release(0x1132dfa18);
                      }
                    }
                    pppppdVar45 = pppppdVar10;
                    if ((long)pppppdVar10 <= (long)pppppdVar12) {
                      pppppdVar45 = pppppdVar12;
                    }
                    pppppdVar34 = (double *****)ppppdVar57;
                    if ((long)ppppdVar57 <= (long)pppppdVar45) {
                      pppppdVar34 = pppppdVar45;
                    }
                    ppppdStack_1b0 = ppppdVar57;
                    ppppdStack_1b8 = (double ****)pppppdVar10;
                    if (0x2f < (long)pppppdVar34) {
                      pppppdVar45 = (double *****)
                                    ((long)(uRam00000001132dfa00 - 0xc0) / 0x140 &
                                    0xfffffffffffffff8);
                      if ((long)pppppdVar45 < 2) {
                        pppppdVar45 = (double *****)0x1;
                      }
                      if ((long)pppppdVar45 < (long)ppppdVar57) {
                        uVar21 = 0;
                        if (pppppdVar45 != (double *****)0x0) {
                          uVar21 = (ulong)ppppdVar57 / (ulong)pppppdVar45;
                        }
                        uVar24 = (long)ppppdVar57 - uVar21 * (long)pppppdVar45;
                        ppppdStack_1b0 = (double ****)pppppdVar45;
                        ppppdStack_1c0 = (double ****)pppppdVar45;
                        if (uVar24 != 0) {
                          lVar9 = uVar21 * 8 + 8;
                          lVar11 = 0;
                          if (lVar9 != 0) {
                            lVar11 = (long)((long)pppppdVar45 + ~uVar24) / lVar9;
                          }
                          ppppdStack_1b0 = (double ****)(pppppdVar45 + -lVar11);
                          ppppdStack_1c0 = (double ****)(pppppdVar45 + -lVar11);
                        }
                      }
                      uVar21 = (uRam00000001132dfa00 - 0xc0) +
                               (long)pppppdVar10 * (long)ppppdStack_1b0 * -8;
                      if ((long)uVar21 < (long)ppppdStack_1b0 * 0x20) {
                        uVar24 = 0;
                        if ((long)pppppdVar45 << 5 != 0) {
                          uVar24 = 0x480000 / (ulong)((long)pppppdVar45 << 5);
                        }
                      }
                      else {
                        uVar24 = 0;
                        if ((long)ppppdStack_1b0 << 3 != 0) {
                          uVar24 = uVar21 / (ulong)((long)ppppdStack_1b0 << 3);
                        }
                      }
                      uVar21 = 0;
                      if ((long)ppppdStack_1b0 << 4 != 0) {
                        uVar21 = 0x180000 / (ulong)((long)ppppdStack_1b0 << 4);
                      }
                      if ((long)uVar21 <= (long)uVar24) {
                        uVar24 = uVar21;
                      }
                      if ((ppppdVar57 == ppppdStack_1b0) &&
                         ((long)pppppdVar12 <= (long)(uVar24 & 0xfffffffffffffffc))) {
                        uVar24 = (long)ppppdVar57 * (long)pppppdVar12 * 8;
                        uVar21 = uRam00000001132dfa00;
                        pppppdVar45 = pppppdVar10;
                        if (0x400 < (long)uVar24) {
                          if (0x23f < (long)pppppdVar10) {
                            pppppdVar45 = (double *****)0x240;
                          }
                          uVar21 = uRam00000001132dfa08;
                          if (0x8000 < uVar24 || lRam00000001132dfa10 == 0) {
                            uVar21 = 0x180000;
                            pppppdVar45 = pppppdVar10;
                          }
                        }
                        pppppdVar34 = (double *****)0x0;
                        if ((long)ppppdVar57 * 0x18 != 0) {
                          pppppdVar34 = (double *****)(uVar21 / (ulong)((long)ppppdVar57 * 0x18));
                        }
                        if ((long)pppppdVar34 <= (long)pppppdVar45) {
                          pppppdVar45 = pppppdVar34;
                        }
                        if ((long)pppppdVar45 < 7) {
                          ppppdStack_1b0 = ppppdVar57;
                          if (pppppdVar45 == (double *****)0x0) goto LAB_109934dd8;
                        }
                        else {
                          pppppdVar45 = (double *****)
                                        ((((ulong)pppppdVar45 / 6) * 2 + (ulong)pppppdVar45 / 6) * 2
                                        );
                        }
                        lVar9 = 0;
                        if (pppppdVar45 != (double *****)0x0) {
                          lVar9 = (long)pppppdVar10 / (long)pppppdVar45;
                        }
                        lVar11 = (long)pppppdVar10 - lVar9 * (long)pppppdVar45;
                        ppppdStack_1b0 = ppppdVar57;
                        ppppdStack_1b8 = (double ****)pppppdVar45;
                        ppppdStack_1d0 = (double ****)pppppdVar45;
                        if (lVar11 != 0) {
                          lVar26 = lVar9 * 6 + 6;
                          lVar9 = 0;
                          if (lVar26 != 0) {
                            lVar9 = ((long)pppppdVar45 - lVar11) / lVar26;
                          }
                          ppppdStack_1b8 = (double ****)((long)pppppdVar45 + lVar9 * -6);
                          ppppdStack_1d0 = ppppdStack_1b8;
                        }
                      }
                    }
LAB_109934dd8:
                    pppppdVar34 = (double *****)
                                  (ppppdStack_378 + (long)(puVar1 + (long)puVar2 * (long)ppppdVar49)
                                  );
                    ppppdStack_1b8 = (double ****)((long)ppppdStack_1b8 * (long)ppppdStack_1b0);
                    ppppdStack_1b0 = (double ****)((long)ppppdStack_1b0 * (long)pppppdVar12);
                    ppppdStack_458 = (double ****)&ppppdStack_1e0;
                    ppppdStack_460 = ppppdStack_280;
                    FUN_109937e78(0x3ff0000000000000,pppppdVar10,pppppdVar12,ppppdVar57,
                                  ppppdStack_360,ppppdStack_370[2],pppppdVar34,ppppdStack_348,
                                  pdStack_288);
                    _free(ppppdStack_1e0);
                    _free(ppppdStack_1d8);
                    plStack_298 = &lStack_270;
                    ppdStack_290 = &pdStack_288;
                    ppppdStack_1d8 = (double ****)0x0;
                    ppppdStack_1e0 = (double ****)0x0;
                    ppppdStack_1d0 = (double ****)0x0;
                    FUN_109911fd0(&ppppdStack_1e0,&plStack_298,&uStack_251);
                    ppppdVar23 = ppppdStack_1d0;
                    ppppdVar43 = ppppdStack_1d8;
                    ppppdVar49 = ppppdStack_1e0;
                    if ((ppppdStack_280 != ppppdStack_1d8) || (ppppdStack_278 != ppppdStack_1d0)) {
                      if (((double *****)ppppdStack_1d8 != (double *****)0x0) &&
                         ((double *****)ppppdStack_1d0 != (double *****)0x0)) {
                        lVar9 = 0;
                        if ((double *****)ppppdStack_1d0 != (double *****)0x0) {
                          lVar9 = 0x7fffffffffffffff / (long)ppppdStack_1d0;
                        }
                        if ((long)ppppdStack_1d8 <= lVar9) goto LAB_109934ea8;
                        goto LAB_109935fe8;
                      }
LAB_109934ea8:
                      uVar21 = (long)ppppdStack_1d0 * (long)ppppdStack_1d8;
                      pdVar42 = pdStack_288;
                      if ((long)ppppdStack_278 * (long)ppppdStack_280 - uVar21 != 0) {
                        _free(pdStack_288);
                        if (0 < (long)uVar21) {
                          if (uVar21 >> 0x3d == 0) {
                            pdVar42 = (double *)(uVar21 * 8);
                            _malloc();
                            if (pdVar42 != (double *)0x0) goto LAB_109934ee8;
                          }
LAB_109935fe8:
                          ___cxa_allocate_exception(8);
                          __ZNSt9bad_allocC1Ev();
                          ___cxa_throw();
                          goto LAB_109936200;
                        }
                        pdVar42 = (double *)0x0;
                      }
LAB_109934ee8:
                      pdStack_288 = pdVar42;
                      ppppdStack_280 = ppppdVar43;
                      ppppdStack_278 = ppppdVar23;
                    }
                    lVar9 = (long)ppppdVar23 * (long)ppppdVar43;
                    uVar21 = lVar9 - (lVar9 >> 0x3f) & 0xfffffffffffffffe;
                    if (1 < lVar9) {
                      lVar11 = 0;
                      pdVar42 = pdStack_288;
                      pppppdVar45 = (double *****)ppppdVar49;
                      do {
                        ppppdVar43 = *pppppdVar45;
                        pdVar42[1] = (double)pppppdVar45[1];
                        *pdVar42 = (double)ppppdVar43;
                        lVar11 = lVar11 + 2;
                        pdVar42 = pdVar42 + 2;
                        pppppdVar45 = pppppdVar45 + 2;
                      } while (lVar11 < (long)uVar21);
                    }
                    lVar11 = lVar9 % 2;
                    if (lVar11 != 0 && lVar11 < 0 == SBORROW8(lVar9,uVar21)) {
                      pdVar42 = pdStack_288 + (lVar9 / 2) * 2;
                      pppppdVar45 = (double *****)(ppppdVar49 + (lVar9 / 2) * 2);
                      do {
                        *pdVar42 = (double)*pppppdVar45;
                        lVar11 = lVar11 + -1;
                        pdVar42 = pdVar42 + 1;
                        pppppdVar45 = pppppdVar45 + 1;
                      } while (lVar11 != 0);
                    }
                    _free(ppppdStack_1e0);
                    ppppdVar49 = ppppdStack_278;
                    pppppdVar45 = (double *****)ppppdStack_390;
                    ppppdStack_1d8 = (double ****)0x0;
                    ppppdStack_1e0 = (double ****)0x0;
                    ppppdStack_1d0 = ppppdVar57;
                    ppppdStack_1c8 = ppppdStack_278;
                    ppppdStack_1c0 = (double ****)pppppdVar10;
                    if ((bRam00000001132dfa18 & 1) == 0) {
                      iVar5 = 0x132dfa18;
                      ___cxa_guard_acquire();
                      if (iVar5 != 0) {
                        uRam00000001132dfa08 = uStack_3b8;
                        uRam00000001132dfa00 = uStack_3c0;
                        lRam00000001132dfa10 = 0x80000;
                        ___cxa_guard_release(0x1132dfa18);
                      }
                    }
                    pppppdVar12 = (double *****)ppppdVar57;
                    if ((long)ppppdVar57 <= (long)ppppdVar49) {
                      pppppdVar12 = (double *****)ppppdVar49;
                    }
                    ppppdStack_1b0 = (double ****)pppppdVar10;
                    ppppdStack_1b8 = ppppdVar57;
                    if (0x2f < (long)pppppdVar12) {
                      pppppdVar12 = (double *****)
                                    ((long)(uRam00000001132dfa00 - 0xc0) / 0x140 &
                                    0xfffffffffffffff8);
                      if ((long)pppppdVar12 < 2) {
                        pppppdVar12 = (double *****)0x1;
                      }
                      if ((long)pppppdVar12 < (long)pppppdVar10) {
                        uVar21 = 0;
                        if (pppppdVar12 != (double *****)0x0) {
                          uVar21 = (ulong)pppppdVar10 / (ulong)pppppdVar12;
                        }
                        uVar24 = (long)pppppdVar10 - uVar21 * (long)pppppdVar12;
                        ppppdStack_1b0 = (double ****)pppppdVar12;
                        ppppdStack_1c0 = (double ****)pppppdVar12;
                        if (uVar24 != 0) {
                          lVar9 = uVar21 * 8 + 8;
                          lVar11 = 0;
                          if (lVar9 != 0) {
                            lVar11 = (long)((long)pppppdVar12 + ~uVar24) / lVar9;
                          }
                          ppppdStack_1b0 = (double ****)(pppppdVar12 + -lVar11);
                          ppppdStack_1c0 = (double ****)(pppppdVar12 + -lVar11);
                        }
                      }
                      uVar21 = (uRam00000001132dfa00 - 0xc0) +
                               (long)ppppdVar57 * (long)ppppdStack_1b0 * -8;
                      if ((long)uVar21 < (long)ppppdStack_1b0 * 0x20) {
                        uVar24 = 0;
                        if ((long)pppppdVar12 << 5 != 0) {
                          uVar24 = 0x480000 / (ulong)((long)pppppdVar12 << 5);
                        }
                      }
                      else {
                        uVar24 = 0;
                        if ((long)ppppdStack_1b0 << 3 != 0) {
                          uVar24 = uVar21 / (ulong)((long)ppppdStack_1b0 << 3);
                        }
                      }
                      uVar21 = 0;
                      if ((long)ppppdStack_1b0 << 4 != 0) {
                        uVar21 = 0x180000 / (ulong)((long)ppppdStack_1b0 << 4);
                      }
                      if ((long)uVar21 <= (long)uVar24) {
                        uVar24 = uVar21;
                      }
                      if ((pppppdVar10 == (double *****)ppppdStack_1b0) &&
                         ((long)ppppdVar49 <= (long)(uVar24 & 0xfffffffffffffffc))) {
                        uVar24 = (long)pppppdVar10 * (long)ppppdVar49 * 8;
                        uVar21 = uRam00000001132dfa00;
                        pppppdVar12 = (double *****)ppppdVar57;
                        if (0x400 < (long)uVar24) {
                          if (0x23f < (long)ppppdVar57) {
                            pppppdVar12 = (double *****)0x240;
                          }
                          uVar21 = uRam00000001132dfa08;
                          if (0x8000 < uVar24 || lRam00000001132dfa10 == 0) {
                            uVar21 = 0x180000;
                            pppppdVar12 = (double *****)ppppdVar57;
                          }
                        }
                        pppppdVar44 = (double *****)0x0;
                        if ((long)pppppdVar10 * 0x18 != 0) {
                          pppppdVar44 = (double *****)(uVar21 / (ulong)((long)pppppdVar10 * 0x18));
                        }
                        if ((long)pppppdVar44 <= (long)pppppdVar12) {
                          pppppdVar12 = pppppdVar44;
                        }
                        if ((long)pppppdVar12 < 7) {
                          ppppdStack_1b0 = (double ****)pppppdVar10;
                          if (pppppdVar12 == (double *****)0x0) goto LAB_109935120;
                        }
                        else {
                          pppppdVar12 = (double *****)
                                        ((((ulong)pppppdVar12 / 6) * 2 + (ulong)pppppdVar12 / 6) * 2
                                        );
                        }
                        lVar9 = 0;
                        if (pppppdVar12 != (double *****)0x0) {
                          lVar9 = (long)ppppdVar57 / (long)pppppdVar12;
                        }
                        lVar11 = (long)ppppdVar57 - lVar9 * (long)pppppdVar12;
                        ppppdStack_1b0 = (double ****)pppppdVar10;
                        ppppdStack_1b8 = (double ****)pppppdVar12;
                        ppppdStack_1d0 = (double ****)pppppdVar12;
                        if (lVar11 != 0) {
                          lVar26 = lVar9 * 6 + 6;
                          lVar9 = 0;
                          if (lVar26 != 0) {
                            lVar9 = ((long)pppppdVar12 - lVar11) / lVar26;
                          }
                          ppppdStack_1b8 = (double ****)((long)pppppdVar12 + lVar9 * -6);
                          ppppdStack_1d0 = ppppdStack_1b8;
                        }
                      }
                    }
LAB_109935120:
                    ppppdStack_1b8 = (double ****)((long)ppppdStack_1b8 * (long)ppppdStack_1b0);
                    ppppdStack_1b0 = (double ****)((long)ppppdStack_1b0 * (long)ppppdVar49);
                    ppppdStack_458 = (double ****)&ppppdStack_1e0;
                    ppppdStack_460 = ppppdStack_348;
                    FUN_109938528(0xbff0000000000000,ppppdVar57,ppppdVar49,pppppdVar10,
                                  ppppdStack_360,ppppdStack_370[2],pdStack_288,ppppdStack_280,
                                  pppppdVar34);
                    pppppdVar12 = (double *****)ppppdStack_3b0;
                    puVar48 = puStack_388 + (long)ppppdStack_3b0;
                    _free(ppppdStack_1e0);
                    _free(ppppdStack_1d8);
                    _free(pdStack_288);
                    _free(lStack_270);
                    if ((long)pppppdVar45 <= (long)puVar48) {
                      pdVar42 = (double *)0x0;
                      goto LAB_1099356bc;
                    }
                  } while( true );
                }
                bVar29 = true;
                *(undefined1 *)(pdVar7 + 0x17) = 1;
              }
LAB_109934974:
              _free(lStack_2d0);
              _free(lStack_2e0);
              _free(lStack_2f0);
              _free(lStack_300);
              _free(lStack_310);
              _free(ppppdStack_320);
              _free(pppdStack_338);
              _free(pppdStack_3a8);
              if (bVar29) {
                FUN_109936ecc(pdVar7,pcStack_380);
              }
              else {
LAB_1099349c8:
                uVar47 = 2;
              }
            }
            else if (*(int *)((long)pdVar7 + 0xb4) == 0) {
              FUN_109936460(pdVar7,pcStack_380);
            }
          }
LAB_1099349cc:
          uVar6 = uStack_364;
          if ((int)uVar50 < 0) {
            __ZdlPv(ppppdStack_358);
            uVar6 = uStack_364;
          }
          goto LAB_1099349dc;
        }
        uVar47 = 2;
        ppppdVar49 = (double ****)0xbff0000000000000;
        uVar6 = 0xffffffff;
LAB_1099349dc:
        uVar24 = (ulong)uVar47 << 0x20;
        uVar21 = (ulong)uVar6;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_120) {
        auVar61._8_8_ = uVar24 | uVar21;
        auVar61._0_8_ = ppppdVar49;
        return auVar61;
      }
      ___stack_chk_fail();
LAB_109935f58:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
LAB_109936200:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x109936204);
      (*pcVar4)();
    }
    pppdStack_338 = (double ***)0x0;
    lStack_2e0 = 0;
    ppppdStack_320 = (double ****)0x0;
    ppppdStack_328 = (double ****)0x0;
    lStack_310 = 0;
    uStack_318 = (double *****)0x0;
    lStack_300 = 0;
    uStack_308 = 0;
    lStack_2f0 = 0;
    uStack_2f8 = 0;
    uStack_2e8 = (ulong)uStack_2e8._4_4_ << 0x20;
    FUN_1099a9f0c(&pppdStack_338,&UNK_10f58b708,0x56,3,FUN_1099aa768,0);
    pdVar7 = (double *)&UNK_10f58b821;
    FUN_1092b4db8(uStack_330 + 0xea8,&UNK_10f58b821,0x1e);
  }
  ppppdVar49 = &pppdStack_338;
  func_0x0001099ab7c0();
  ppppdVar57 = ppppdVar49;
  __Unwind_Resume();
  ppppdVar43 = (double ****)&ppdStack_4e0;
  pcStack_468 = FUN_109936460;
  ppppdVar23 = (double ****)ppppdVar57[0x11];
  dVar20 = 0.0;
  dVar52 = 0.0;
  if (ppppdVar23 != (double ****)0x0) {
    pppdVar28 = ppppdVar57[0x10];
    ppppdVar14 = (double ****)((long)ppppdVar23 + 3);
    if (-1 < (long)ppppdVar23) {
      ppppdVar14 = ppppdVar23;
    }
    if ((long)ppppdVar23 + 1U < 3) {
      dVar52 = (double)*pppdVar28 * (double)*pppdVar28;
    }
    else {
      uVar21 = (long)ppppdVar23 - ((long)ppppdVar23 >> 0x3f) & 0xfffffffffffffffe;
      dVar52 = (double)*pppdVar28 * (double)*pppdVar28;
      dVar54 = (double)pppdVar28[1] * (double)pppdVar28[1];
      if (3 < (long)ppppdVar23) {
        uVar24 = (ulong)ppppdVar14 & 0xfffffffffffffffc;
        dVar25 = (double)pppdVar28[2] * (double)pppdVar28[2];
        dVar56 = (double)pppdVar28[3] * (double)pppdVar28[3];
        if ((double ****)0x7 < ppppdVar23) {
          pppdVar53 = pppdVar28 + 6;
          lVar9 = 4;
          do {
            dVar52 = dVar52 + (double)pppdVar53[-2] * (double)pppdVar53[-2];
            dVar54 = dVar54 + (double)pppdVar53[-1] * (double)pppdVar53[-1];
            dVar25 = dVar25 + (double)*pppdVar53 * (double)*pppdVar53;
            dVar56 = dVar56 + (double)pppdVar53[1] * (double)pppdVar53[1];
            lVar9 = lVar9 + 4;
            pppdVar53 = pppdVar53 + 4;
          } while (lVar9 < (long)uVar24);
        }
        dVar52 = dVar25 + dVar52;
        dVar54 = dVar56 + dVar54;
        if ((long)uVar24 < (long)uVar21) {
          ppdVar55 = (pppdVar28 + uVar24)[1];
          ppdVar17 = pppdVar28[uVar24];
          dVar52 = dVar52 + (double)ppdVar17 * (double)ppdVar17;
          dVar54 = dVar54 + (double)ppdVar55 * (double)ppdVar55;
        }
      }
      dVar52 = dVar52 + dVar54;
      lVar9 = (long)ppppdVar23 % 2;
      if (lVar9 != 0 && lVar9 < 0 == SBORROW8((long)ppppdVar23,uVar21)) {
        pppdVar28 = pppdVar28 + ((long)ppppdVar23 / 2) * 2;
        do {
          dVar52 = dVar52 + (double)*pppdVar28 * (double)*pppdVar28;
          lVar9 = lVar9 + -1;
          pppdVar28 = pppdVar28 + 1;
        } while (lVar9 != 0);
      }
    }
  }
  pppdVar28 = ppppdVar57[0x13];
  if (pppdVar28 != (double ***)0x0) {
    pppdVar31 = ppppdVar57[0x12];
    pppdVar53 = (double ***)((long)pppdVar28 + 3);
    if (-1 < (long)pppdVar28) {
      pppdVar53 = pppdVar28;
    }
    if ((long)pppdVar28 + 1U < 3) {
      dVar20 = (double)*pppdVar31 * (double)*pppdVar31;
    }
    else {
      uVar21 = (long)pppdVar28 - ((long)pppdVar28 >> 0x3f) & 0xfffffffffffffffe;
      dVar20 = (double)*pppdVar31 * (double)*pppdVar31;
      dVar54 = (double)pppdVar31[1] * (double)pppdVar31[1];
      if (3 < (long)pppdVar28) {
        uVar24 = (ulong)pppdVar53 & 0xfffffffffffffffc;
        dVar25 = (double)pppdVar31[2] * (double)pppdVar31[2];
        dVar56 = (double)pppdVar31[3] * (double)pppdVar31[3];
        if ((double ***)0x7 < pppdVar28) {
          pppdVar53 = pppdVar31 + 6;
          lVar9 = 4;
          do {
            dVar20 = dVar20 + (double)pppdVar53[-2] * (double)pppdVar53[-2];
            dVar54 = dVar54 + (double)pppdVar53[-1] * (double)pppdVar53[-1];
            dVar25 = dVar25 + (double)*pppdVar53 * (double)*pppdVar53;
            dVar56 = dVar56 + (double)pppdVar53[1] * (double)pppdVar53[1];
            lVar9 = lVar9 + 4;
            pppdVar53 = pppdVar53 + 4;
          } while (lVar9 < (long)uVar24);
        }
        dVar20 = dVar25 + dVar20;
        dVar54 = dVar56 + dVar54;
        if ((long)uVar24 < (long)uVar21) {
          ppdVar55 = (pppdVar31 + uVar24)[1];
          ppdVar17 = pppdVar31[uVar24];
          dVar20 = dVar20 + (double)ppdVar17 * (double)ppdVar17;
          dVar54 = dVar54 + (double)ppdVar55 * (double)ppdVar55;
        }
      }
      dVar20 = dVar20 + dVar54;
      lVar9 = (long)pppdVar28 % 2;
      if (lVar9 != 0 && lVar9 < 0 == SBORROW8((long)pppdVar28,uVar21)) {
        pppdVar53 = pppdVar31 + ((long)pppdVar28 / 2) * 2;
        do {
          dVar20 = dVar20 + (double)*pppdVar53 * (double)*pppdVar53;
          lVar9 = lVar9 + -1;
          pppdVar53 = pppdVar53 + 1;
        } while (lVar9 != 0);
      }
    }
  }
  pppdVar53 = (double ***)SQRT(dVar20);
  pppdVar31 = ppppdVar57[2];
  ppppdVar14 = ppppdVar57;
  pppdStack_480 = (double ***)ppppdVar49;
  puStack_478 = param_1;
  ppuStack_470 = &puStack_b0;
  if ((double)pppdVar53 <= (double)pppdVar31) {
    pppdVar28 = ppppdVar57[0x12];
    ppppdVar49 = (double ****)((ulong)pdVar7 >> 3 & 1);
    if ((long)ppppdVar23 <= (long)ppppdVar49) {
      ppppdVar49 = ppppdVar23;
    }
    if (((ulong)pdVar7 & 7) != 0) {
      ppppdVar49 = ppppdVar23;
    }
    lVar9 = (long)ppppdVar23 - (long)ppppdVar49;
    pdVar42 = pdVar7;
    pppdVar31 = pppdVar28;
    ppppdVar13 = ppppdVar49;
    if (0 < (long)ppppdVar49) {
      do {
        *pdVar42 = (double)*pppdVar31;
        ppppdVar13 = (double ****)((long)ppppdVar13 + -1);
        pdVar42 = pdVar42 + 1;
        pppdVar31 = pppdVar31 + 1;
      } while (ppppdVar13 != (double ****)0x0);
    }
    lVar11 = (lVar9 - (lVar9 >> 0x3f) & 0xfffffffffffffffeU) + (long)ppppdVar49;
    if (1 < lVar9) {
      pppdVar31 = pppdVar28 + (long)ppppdVar49;
      ppppdVar13 = ppppdVar49;
      pdVar42 = pdVar7 + (long)ppppdVar49;
      do {
        ppdVar17 = *pppdVar31;
        pdVar42[1] = (double)pppdVar31[1];
        *pdVar42 = (double)ppdVar17;
        ppppdVar13 = (double ****)((long)ppppdVar13 + 2);
        pppdVar31 = pppdVar31 + 2;
        pdVar42 = pdVar42 + 2;
      } while ((long)ppppdVar13 < lVar11);
    }
    lVar26 = lVar9 / 2;
    if (lVar11 < (long)ppppdVar23) {
      lVar16 = lVar9 % 2;
      pppdVar28 = pppdVar28 + (long)ppppdVar49 + lVar26 * 2;
      pdVar42 = pdVar7 + (long)ppppdVar49 + lVar26 * 2;
      do {
        *pdVar42 = (double)*pppdVar28;
        lVar16 = lVar16 + -1;
        pppdVar28 = pppdVar28 + 1;
        pdVar42 = pdVar42 + 1;
      } while (lVar16 != 0);
    }
    ppppdVar57[0x15] = pppdVar53;
    pppdVar53 = ppppdVar57[0xc];
    pdVar42 = pdVar7;
    pppdVar28 = pppdVar53;
    ppppdVar13 = ppppdVar49;
    if (0 < (long)ppppdVar49) {
      do {
        *pdVar42 = *pdVar42 / (double)*pppdVar28;
        ppppdVar13 = (double ****)((long)ppppdVar13 + -1);
        pdVar42 = pdVar42 + 1;
        pppdVar28 = pppdVar28 + 1;
      } while (ppppdVar13 != (double ****)0x0);
    }
    if (1 < lVar9) {
      pppdVar28 = pppdVar53 + (long)ppppdVar49;
      ppppdVar13 = ppppdVar49;
      pdVar42 = pdVar7 + (long)ppppdVar49;
      do {
        ppdVar17 = *pppdVar28;
        pdVar42[1] = pdVar42[1] / (double)pppdVar28[1];
        *pdVar42 = *pdVar42 / (double)ppdVar17;
        ppppdVar13 = (double ****)((long)ppppdVar13 + 2);
        pppdVar28 = pppdVar28 + 2;
        pdVar42 = pdVar42 + 2;
      } while ((long)ppppdVar13 < lVar11);
    }
    if (lVar11 < (long)ppppdVar23) {
      lVar9 = lVar9 % 2;
      pppdVar28 = pppdVar53 + (long)ppppdVar49 + lVar26 * 2;
      pdVar42 = pdVar7 + (long)ppppdVar49 + lVar26 * 2;
      do {
        *pdVar42 = *pdVar42 / (double)*pppdVar28;
        lVar9 = lVar9 + -1;
        pppdVar28 = pppdVar28 + 1;
        pdVar42 = pdVar42 + 1;
      } while (lVar9 != 0);
    }
    if (piRam000000011373cbc0 == (int *)0x0) {
      ppppdVar14 = (double ****)0x11373cbc0;
      pdVar7 = (double *)0x11382bb14;
      FUN_1099adbb8(0x11373cbc0,0x11382bb14,&UNK_10f58b708,3);
      if (((ulong)ppppdVar14 & 1) == 0) goto LAB_109936ea0;
    }
    else if (*piRam000000011373cbc0 < 3) goto LAB_109936ea0;
    ppdStack_4e0 = (double **)0x0;
    uStack_488 = 0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    uStack_4a8 = 0;
    uStack_4b0 = 0;
    uStack_498 = 0;
    uStack_4a0 = 0;
    uStack_490 = 0;
    FUN_1099a9f0c(&ppdStack_4e0,&UNK_10f58b708,0xd2,0,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_4d8 + 0x7540,&UNK_10f58b840,0x17);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(ppppdVar57[0x15]);
    pdVar7 = (double *)&UNK_10f58b858;
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(ppppdVar57[2]);
  }
  else {
    dVar20 = SQRT(dVar52) * (double)ppppdVar57[0x14];
    if ((double)pppdVar31 <= dVar20) {
      pppdVar28 = ppppdVar57[0x10];
      ppppdVar49 = (double ****)((ulong)pdVar7 >> 3 & 1);
      if ((long)ppppdVar23 <= (long)ppppdVar49) {
        ppppdVar49 = ppppdVar23;
      }
      if (((ulong)pdVar7 & 7) != 0) {
        ppppdVar49 = ppppdVar23;
      }
      lVar9 = (long)ppppdVar23 - (long)ppppdVar49;
      dVar20 = -(double)pppdVar31 / SQRT(dVar52);
      pdVar42 = pdVar7;
      pppdVar53 = pppdVar28;
      ppppdVar13 = ppppdVar49;
      if (0 < (long)ppppdVar49) {
        do {
          *pdVar42 = dVar20 * (double)*pppdVar53;
          ppppdVar13 = (double ****)((long)ppppdVar13 + -1);
          pdVar42 = pdVar42 + 1;
          pppdVar53 = pppdVar53 + 1;
        } while (ppppdVar13 != (double ****)0x0);
      }
      lVar11 = (lVar9 - (lVar9 >> 0x3f) & 0xfffffffffffffffeU) + (long)ppppdVar49;
      if (1 < lVar9) {
        pppdVar53 = pppdVar28 + (long)ppppdVar49;
        ppppdVar13 = ppppdVar49;
        pdVar42 = pdVar7 + (long)ppppdVar49;
        do {
          ppdVar17 = *pppdVar53;
          pdVar42[1] = (double)pppdVar53[1] * dVar20;
          *pdVar42 = (double)ppdVar17 * dVar20;
          ppppdVar13 = (double ****)((long)ppppdVar13 + 2);
          pppdVar53 = pppdVar53 + 2;
          pdVar42 = pdVar42 + 2;
        } while ((long)ppppdVar13 < lVar11);
      }
      lVar26 = lVar9 / 2;
      if (lVar11 < (long)ppppdVar23) {
        lVar16 = lVar9 % 2;
        pppdVar28 = pppdVar28 + (long)ppppdVar49 + lVar26 * 2;
        pdVar42 = pdVar7 + (long)ppppdVar49 + lVar26 * 2;
        do {
          *pdVar42 = dVar20 * (double)*pppdVar28;
          lVar16 = lVar16 + -1;
          pppdVar28 = pppdVar28 + 1;
          pdVar42 = pdVar42 + 1;
        } while (lVar16 != 0);
      }
      ppppdVar57[0x15] = ppppdVar57[2];
      pppdVar53 = ppppdVar57[0xc];
      pdVar42 = pdVar7;
      pppdVar28 = pppdVar53;
      ppppdVar13 = ppppdVar49;
      if (0 < (long)ppppdVar49) {
        do {
          *pdVar42 = *pdVar42 / (double)*pppdVar28;
          ppppdVar13 = (double ****)((long)ppppdVar13 + -1);
          pdVar42 = pdVar42 + 1;
          pppdVar28 = pppdVar28 + 1;
        } while (ppppdVar13 != (double ****)0x0);
      }
      if (1 < lVar9) {
        pppdVar28 = pppdVar53 + (long)ppppdVar49;
        ppppdVar13 = ppppdVar49;
        pdVar42 = pdVar7 + (long)ppppdVar49;
        do {
          ppdVar17 = *pppdVar28;
          pdVar42[1] = pdVar42[1] / (double)pppdVar28[1];
          *pdVar42 = *pdVar42 / (double)ppdVar17;
          ppppdVar13 = (double ****)((long)ppppdVar13 + 2);
          pppdVar28 = pppdVar28 + 2;
          pdVar42 = pdVar42 + 2;
        } while ((long)ppppdVar13 < lVar11);
      }
      if (lVar11 < (long)ppppdVar23) {
        lVar9 = lVar9 % 2;
        pppdVar28 = pppdVar53 + (long)ppppdVar49 + lVar26 * 2;
        pdVar42 = pdVar7 + (long)ppppdVar49 + lVar26 * 2;
        do {
          *pdVar42 = *pdVar42 / (double)*pppdVar28;
          lVar9 = lVar9 + -1;
          pppdVar28 = pppdVar28 + 1;
          pdVar42 = pdVar42 + 1;
        } while (lVar9 != 0);
      }
      if (piRam000000011373cbe0 == (int *)0x0) {
        ppppdVar14 = (double ****)0x11373cbe0;
        pdVar7 = (double *)0x11382bb14;
        FUN_1099adbb8(0x11373cbe0,0x11382bb14,&UNK_10f58b708,3);
        if (((ulong)ppppdVar14 & 1) == 0) goto LAB_109936ea0;
      }
      else if (*piRam000000011373cbe0 < 3) goto LAB_109936ea0;
      ppdStack_4e0 = (double **)0x0;
      uStack_488 = 0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      uStack_4b8 = 0;
      uStack_4c0 = 0;
      uStack_4a8 = 0;
      uStack_4b0 = 0;
      uStack_498 = 0;
      uStack_4a0 = 0;
      uStack_490 = 0;
      FUN_1099a9f0c(&ppdStack_4e0,&UNK_10f58b708,0xde,0,FUN_1099aa768,0);
      FUN_1092b4db8(lStack_4d8 + 0x7540,&UNK_10f58b862,0x12);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(ppppdVar57[0x15]);
      pdVar7 = (double *)&UNK_10f58b858;
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(ppppdVar57[2]);
    }
    else {
      dVar52 = -(double)ppppdVar57[0x14];
      if (pppdVar28 == (double ***)0x0) {
        dVar54 = 0.0;
      }
      else {
        pppdVar32 = ppppdVar57[0x10];
        pppdVar37 = ppppdVar57[0x12];
        pppdVar33 = (double ***)((long)pppdVar28 + 3);
        if (-1 < (long)pppdVar28) {
          pppdVar33 = pppdVar28;
        }
        if ((long)pppdVar28 + 1U < 3) {
          dVar54 = (double)*pppdVar32 * (double)*pppdVar37;
        }
        else {
          uVar21 = (long)pppdVar28 - ((long)pppdVar28 >> 0x3f) & 0xfffffffffffffffe;
          dVar54 = (double)*pppdVar32 * (double)*pppdVar37;
          dVar25 = (double)pppdVar32[1] * (double)pppdVar37[1];
          if (3 < (long)pppdVar28) {
            uVar24 = (ulong)pppdVar33 & 0xfffffffffffffffc;
            dVar56 = (double)pppdVar32[2] * (double)pppdVar37[2];
            dVar59 = (double)pppdVar32[3] * (double)pppdVar37[3];
            if ((double ***)0x7 < pppdVar28) {
              pppdVar33 = pppdVar37 + 6;
              pppdVar40 = pppdVar32 + 6;
              lVar9 = 4;
              do {
                dVar54 = dVar54 + (double)pppdVar40[-2] * (double)pppdVar33[-2];
                dVar25 = dVar25 + (double)pppdVar40[-1] * (double)pppdVar33[-1];
                dVar56 = dVar56 + (double)*pppdVar40 * (double)*pppdVar33;
                dVar59 = dVar59 + (double)pppdVar40[1] * (double)pppdVar33[1];
                lVar9 = lVar9 + 4;
                pppdVar33 = pppdVar33 + 4;
                pppdVar40 = pppdVar40 + 4;
              } while (lVar9 < (long)uVar24);
            }
            dVar54 = dVar56 + dVar54;
            dVar25 = dVar59 + dVar25;
            if ((long)uVar24 < (long)uVar21) {
              dVar54 = dVar54 + (double)pppdVar32[uVar24] * (double)pppdVar37[uVar24];
              dVar25 = dVar25 + (double)(pppdVar32 + uVar24)[1] * (double)(pppdVar37 + uVar24)[1];
            }
          }
          dVar54 = dVar54 + dVar25;
          lVar9 = (long)pppdVar28 % 2;
          if (lVar9 != 0 && lVar9 < 0 == SBORROW8((long)pppdVar28,uVar21)) {
            pppdVar33 = pppdVar32 + ((long)pppdVar28 / 2) * 2;
            pppdVar28 = pppdVar37 + ((long)pppdVar28 / 2) * 2;
            do {
              dVar54 = dVar54 + (double)*pppdVar33 * (double)*pppdVar28;
              lVar9 = lVar9 + -1;
              pppdVar33 = pppdVar33 + 1;
              pppdVar28 = pppdVar28 + 1;
            } while (lVar9 != 0);
          }
        }
      }
      dVar54 = dVar54 * dVar52;
      dVar20 = dVar20 * dVar20;
      dVar25 = (double)pppdVar53 * (double)pppdVar53 + dVar20 + dVar54 * -2.0;
      dVar54 = dVar54 - dVar20;
      dVar56 = SQRT(((double)pppdVar31 * (double)pppdVar31 - dVar20) * dVar25 + dVar54 * dVar54);
      dVar20 = ((double)pppdVar31 * (double)pppdVar31 - dVar20) / (dVar54 + dVar56);
      if (dVar54 <= 0.0) {
        dVar20 = (dVar56 - dVar54) / dVar25;
      }
      dVar52 = (1.0 - dVar20) * dVar52;
      pppdVar28 = ppppdVar57[0x10];
      pppdVar53 = ppppdVar57[0x12];
      ppppdVar49 = (double ****)((ulong)pdVar7 >> 3 & 1);
      if ((long)ppppdVar23 <= (long)ppppdVar49) {
        ppppdVar49 = ppppdVar23;
      }
      if (((ulong)pdVar7 & 7) != 0) {
        ppppdVar49 = ppppdVar23;
      }
      lVar9 = (long)ppppdVar23 - (long)ppppdVar49;
      ppppdVar13 = ppppdVar49;
      pdVar42 = pdVar7;
      pppdVar31 = pppdVar28;
      pppdVar33 = pppdVar53;
      if (0 < (long)ppppdVar49) {
        do {
          *pdVar42 = dVar52 * (double)*pppdVar31 + dVar20 * (double)*pppdVar33;
          ppppdVar13 = (double ****)((long)ppppdVar13 + -1);
          ppppdVar14 = (double ****)0x0;
          pdVar42 = pdVar42 + 1;
          pppdVar31 = pppdVar31 + 1;
          pppdVar33 = pppdVar33 + 1;
        } while (ppppdVar13 != (double ****)0x0);
      }
      lVar11 = (lVar9 - (lVar9 >> 0x3f) & 0xfffffffffffffffeU) + (long)ppppdVar49;
      if (1 < lVar9) {
        ppppdVar14 = ppppdVar49;
        pdVar42 = pdVar7 + (long)ppppdVar49;
        pppdVar31 = pppdVar53 + (long)ppppdVar49;
        pppdVar33 = pppdVar28 + (long)ppppdVar49;
        do {
          ppdVar17 = *pppdVar33;
          ppdVar55 = *pppdVar31;
          pdVar42[1] = (double)pppdVar33[1] * dVar52 + (double)pppdVar31[1] * dVar20;
          *pdVar42 = (double)ppdVar17 * dVar52 + (double)ppdVar55 * dVar20;
          ppppdVar14 = (double ****)((long)ppppdVar14 + 2);
          pdVar42 = pdVar42 + 2;
          pppdVar31 = pppdVar31 + 2;
          pppdVar33 = pppdVar33 + 2;
        } while ((long)ppppdVar14 < lVar11);
      }
      lVar26 = lVar9 / 2;
      if (lVar11 < (long)ppppdVar23) {
        lVar16 = lVar9 % 2;
        pppdVar28 = pppdVar28 + (long)ppppdVar49 + lVar26 * 2;
        pppdVar53 = pppdVar53 + (long)ppppdVar49 + lVar26 * 2;
        pdVar42 = pdVar7 + (long)ppppdVar49 + lVar26 * 2;
        do {
          *pdVar42 = dVar52 * (double)*pppdVar28 + dVar20 * (double)*pppdVar53;
          lVar16 = lVar16 + -1;
          pppdVar28 = pppdVar28 + 1;
          pppdVar53 = pppdVar53 + 1;
          pdVar42 = pdVar42 + 1;
        } while (lVar16 != 0);
      }
      if (ppppdVar23 == (double ****)0x0) {
        dVar20 = 0.0;
      }
      else {
        ppppdVar13 = (double ****)((long)ppppdVar23 + 3);
        if (-1 < (long)ppppdVar23) {
          ppppdVar13 = ppppdVar23;
        }
        if ((long)ppppdVar23 + 1U < 3) {
          dVar20 = *pdVar7 * *pdVar7;
        }
        else {
          uVar21 = (long)ppppdVar23 - ((long)ppppdVar23 >> 0x3f) & 0xfffffffffffffffe;
          dVar20 = *pdVar7 * *pdVar7;
          dVar52 = pdVar7[1] * pdVar7[1];
          if (3 < (long)ppppdVar23) {
            uVar24 = (ulong)ppppdVar13 & 0xfffffffffffffffc;
            dVar54 = pdVar7[2] * pdVar7[2];
            dVar25 = pdVar7[3] * pdVar7[3];
            if ((double ****)0x7 < ppppdVar23) {
              pdVar42 = pdVar7 + 6;
              ppppdVar14 = (double ****)0x4;
              do {
                dVar20 = dVar20 + pdVar42[-2] * pdVar42[-2];
                dVar52 = dVar52 + pdVar42[-1] * pdVar42[-1];
                dVar54 = dVar54 + *pdVar42 * *pdVar42;
                dVar25 = dVar25 + pdVar42[1] * pdVar42[1];
                ppppdVar14 = (double ****)((long)ppppdVar14 + 4);
                pdVar42 = pdVar42 + 4;
              } while ((long)ppppdVar14 < (long)uVar24);
            }
            dVar20 = dVar54 + dVar20;
            dVar52 = dVar25 + dVar52;
            if ((long)uVar24 < (long)uVar21) {
              dVar25 = (pdVar7 + uVar24)[1];
              dVar54 = pdVar7[uVar24];
              dVar20 = dVar20 + dVar54 * dVar54;
              dVar52 = dVar52 + dVar25 * dVar25;
            }
          }
          dVar20 = dVar20 + dVar52;
          lVar16 = (long)ppppdVar23 % 2;
          if (lVar16 != 0 && lVar16 < 0 == SBORROW8((long)ppppdVar23,uVar21)) {
            pdVar42 = pdVar7 + ((long)ppppdVar23 / 2) * 2;
            do {
              dVar20 = dVar20 + *pdVar42 * *pdVar42;
              lVar16 = lVar16 + -1;
              pdVar42 = pdVar42 + 1;
            } while (lVar16 != 0);
          }
        }
      }
      ppppdVar57[0x15] = (double ***)SQRT(dVar20);
      pppdVar53 = ppppdVar57[0xc];
      pdVar42 = pdVar7;
      pppdVar28 = pppdVar53;
      ppppdVar13 = ppppdVar49;
      if (0 < (long)ppppdVar49) {
        do {
          *pdVar42 = *pdVar42 / (double)*pppdVar28;
          ppppdVar13 = (double ****)((long)ppppdVar13 + -1);
          pdVar42 = pdVar42 + 1;
          pppdVar28 = pppdVar28 + 1;
        } while (ppppdVar13 != (double ****)0x0);
      }
      if (1 < lVar9) {
        pppdVar28 = pppdVar53 + (long)ppppdVar49;
        ppppdVar13 = ppppdVar49;
        pdVar42 = pdVar7 + (long)ppppdVar49;
        do {
          ppdVar17 = *pppdVar28;
          pdVar42[1] = pdVar42[1] / (double)pppdVar28[1];
          *pdVar42 = *pdVar42 / (double)ppdVar17;
          ppppdVar13 = (double ****)((long)ppppdVar13 + 2);
          pppdVar28 = pppdVar28 + 2;
          pdVar42 = pdVar42 + 2;
        } while ((long)ppppdVar13 < lVar11);
      }
      if (lVar11 < (long)ppppdVar23) {
        lVar9 = lVar9 % 2;
        pppdVar28 = pppdVar53 + (long)ppppdVar49 + lVar26 * 2;
        pdVar42 = pdVar7 + (long)ppppdVar49 + lVar26 * 2;
        do {
          *pdVar42 = *pdVar42 / (double)*pppdVar28;
          lVar9 = lVar9 + -1;
          pppdVar28 = pppdVar28 + 1;
          pdVar42 = pdVar42 + 1;
        } while (lVar9 != 0);
      }
      if (piRam000000011373cc00 == (int *)0x0) {
        ppppdVar14 = (double ****)0x11373cc00;
        pdVar7 = (double *)0x11382bb14;
        FUN_1099adbb8(0x11373cc00,0x11382bb14,&UNK_10f58b708,3);
        if (((ulong)ppppdVar14 & 1) == 0) goto LAB_109936ea0;
      }
      else if (*piRam000000011373cc00 < 3) goto LAB_109936ea0;
      ppdStack_4e0 = (double **)0x0;
      uStack_488 = 0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      uStack_4b8 = 0;
      uStack_4c0 = 0;
      uStack_4a8 = 0;
      uStack_4b0 = 0;
      uStack_498 = 0;
      uStack_4a0 = 0;
      uStack_490 = 0;
      FUN_1099a9f0c(&ppdStack_4e0,&UNK_10f58b708,0xfb,0,FUN_1099aa768,0);
      FUN_1092b4db8(lStack_4d8 + 0x7540,&UNK_10f58b875,0x12);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(ppppdVar57[0x15]);
      pdVar7 = (double *)&UNK_10f58b858;
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(ppppdVar57[2]);
    }
  }
  FUN_1099ab3b0(&ppdStack_4e0);
  ppppdVar14 = ppppdVar43;
LAB_109936ea0:
  auVar62._8_8_ = pdVar7;
  auVar62._0_8_ = ppppdVar14;
  return auVar62;
}


