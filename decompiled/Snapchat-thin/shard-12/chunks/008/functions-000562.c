/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10997c0d8; end: 10997c3f7;  */

long FUN_10997c0d8(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  undefined4 *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  
  lVar2 = *(long *)(param_2 + 8);
  uVar4 = *(ulong *)(param_2 + 0x10);
  lVar24 = uVar4 * 4;
  uVar10 = 1;
  _calloc(1,lVar24 + 4);
  if (uVar10 == 0) {
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_10997c3ac:
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10997c3b0);
    (*pcVar9)();
  }
  uVar11 = (ulong)-((uint)uVar10 >> 2) & 3;
  if ((long)uVar4 <= (long)uVar11) {
    uVar11 = uVar4;
  }
  uVar1 = uVar4;
  if ((uVar10 & 3) == 0) {
    uVar1 = uVar11;
  }
  uVar14 = uVar4 - uVar1;
  uVar11 = uVar14 + 3;
  if (-1 < (long)uVar14) {
    uVar11 = uVar14;
  }
  if ((long)((uVar11 & 0xfffffffffffffffc) + uVar1) < (long)uVar4) {
    _bzero(uVar10 + ((long)uVar11 >> 2) * 0x10 + uVar1 * 4,((long)uVar14 % 4) * 4);
  }
  if (0 < lVar2) {
    lVar12 = 0;
    lVar15 = *(long *)(param_2 + 0x30);
    lVar25 = *(long *)(param_2 + 0x18);
    lVar13 = *(long *)(param_2 + 0x20);
    do {
      piVar19 = (int *)(lVar25 + lVar12 * 4);
      lVar18 = (long)*piVar19;
      if (lVar13 == 0) {
        lVar16 = (long)piVar19[1];
      }
      else {
        lVar16 = *(int *)(lVar13 + lVar12 * 4) + lVar18;
      }
      lVar17 = lVar16 - lVar18;
      if (lVar17 != 0 && lVar18 <= lVar16) {
        piVar19 = (int *)(lVar15 + lVar18 * 4);
        do {
          *(int *)(uVar10 + (long)*piVar19 * 4) = *(int *)(uVar10 + (long)*piVar19 * 4) + 1;
          lVar17 = lVar17 + -1;
          piVar19 = piVar19 + 1;
        } while (lVar17 != 0);
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != lVar2);
  }
  if ((long)uVar4 < 1) {
    lVar12 = 0;
    lVar24 = 0;
    lVar13 = 0;
    lVar25 = 0;
    lVar15 = 0;
    *(undefined4 *)(uVar10 + uVar4 * 4) = 0;
  }
  else {
    if ((uVar4 >> 0x3e != 0) || (_malloc(), lVar24 == 0)) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10997c3ac;
    }
    uVar11 = 0;
    lVar12 = 0;
    do {
      iVar8 = *(int *)(uVar10 + uVar11 * 4);
      iVar26 = (int)lVar12;
      *(int *)(uVar10 + uVar11 * 4) = iVar26;
      *(int *)(lVar24 + uVar11 * 4) = iVar26;
      lVar12 = (long)iVar8 + (long)iVar26;
      uVar11 = uVar11 + 1;
    } while (uVar4 != uVar11);
    *(int *)(uVar10 + uVar4 * 4) = (int)lVar12;
    if ((int)lVar12 < 1) {
      lVar13 = 0;
      lVar25 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = lVar12 * 4;
      lVar25 = lVar15;
      __Znam();
      __Znam();
      lVar13 = lVar12;
    }
  }
  if (0 < lVar2) {
    lVar18 = 0;
    lVar16 = *(long *)(param_2 + 0x28);
    lVar5 = *(long *)(param_2 + 0x30);
    lVar17 = *(long *)(param_2 + 0x18);
    lVar6 = *(long *)(param_2 + 0x20);
    do {
      piVar19 = (int *)(lVar17 + lVar18 * 4);
      lVar23 = (long)*piVar19;
      if (lVar6 == 0) {
        lVar20 = (long)piVar19[1];
      }
      else {
        lVar20 = *(int *)(lVar6 + lVar18 * 4) + lVar23;
      }
      lVar21 = lVar20 - lVar23;
      if (lVar21 != 0 && lVar23 <= lVar20) {
        puVar22 = (undefined4 *)(lVar16 + lVar23 * 4);
        piVar19 = (int *)(lVar5 + lVar23 * 4);
        do {
          iVar8 = *(int *)(lVar24 + (long)*piVar19 * 4);
          *(int *)(lVar24 + (long)*piVar19 * 4) = iVar8 + 1;
          *(int *)(lVar15 + (long)iVar8 * 4) = (int)lVar18;
          *(undefined4 *)(lVar25 + (long)iVar8 * 4) = *puVar22;
          lVar21 = lVar21 + -1;
          puVar22 = puVar22 + 1;
          piVar19 = piVar19 + 1;
        } while (lVar21 != 0);
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 != lVar2);
  }
  *(ulong *)(param_1 + 8) = uVar4;
  *(long *)(param_1 + 0x10) = lVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  *(ulong *)(param_1 + 0x18) = uVar10;
  *(undefined8 *)(param_1 + 0x20) = 0;
  lVar2 = *(long *)(param_1 + 0x28);
  lVar18 = *(long *)(param_1 + 0x30);
  *(long *)(param_1 + 0x28) = lVar25;
  *(long *)(param_1 + 0x30) = lVar15;
  *(long *)(param_1 + 0x38) = lVar12;
  *(long *)(param_1 + 0x40) = lVar13;
  _free(lVar24);
  _free(uVar3);
  _free(uVar7);
  if (lVar2 != 0) {
    __ZdaPv(lVar2);
  }
  if (lVar18 != 0) {
    __ZdaPv(lVar18);
  }
  return param_1;
}



/* Entry: 10997c3f8; end: 10997c43f;  */

long FUN_10997c3f8(long param_1)

{
  _free(*(undefined8 *)(param_1 + 0x18));
  _free(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x28) != 0) {
    __ZdaPv();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 10997c440; end: 10997cc5f;  */

void FUN_10997c440(long param_1,char *param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long extraout_x8;
  long lVar16;
  long lVar17;
  long lVar18;
  long unaff_x19;
  long lVar19;
  ulong uVar20;
  long unaff_x22;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined4 *puVar27;
  int *piVar28;
  long lStack_138;
  ulong uStack_110;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  
  lVar26 = *(long *)(param_2 + 8);
  lVar25 = *(long *)(param_2 + 0x28);
  if (*param_2 == '\x01') {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (*(long *)(param_1 + 8) != lVar25 || *(long *)(param_1 + 8) == 0) {
      _free(*(undefined8 *)(param_1 + 0x18));
      lVar12 = lVar25 * 4 + 4;
      _malloc();
      *(long *)(param_1 + 0x18) = lVar12;
      if (lVar12 == 0) {
LAB_10997cb50:
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        lVar13 = extraout_x8;
LAB_10997cb70:
        uStack_70 = uStack_110;
        lStack_88 = unaff_x22;
        lStack_80 = unaff_x19;
        lStack_78 = lVar13;
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        goto LAB_10997cbc4;
      }
      *(long *)(param_1 + 8) = lVar25;
    }
    lStack_138 = lVar25;
    if (*(long *)(param_1 + 0x20) != 0) {
      _free();
      *(undefined8 *)(param_1 + 0x20) = 0;
      lStack_138 = *(long *)(param_1 + 8);
    }
    _bzero(*(undefined8 *)(param_1 + 0x18),lStack_138 * 4 + 4);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _bzero(*(undefined8 *)(param_1 + 0x18),*(long *)(param_1 + 8) * 4 + 4);
    if (*(long *)(param_1 + 0x20) != 0) {
      _bzero(*(long *)(param_1 + 0x20),*(long *)(param_1 + 8) << 2);
    }
    lVar14 = *(long *)(param_2 + 0x20);
    lVar21 = *(long *)(param_2 + 0x28);
    lVar12 = lVar14;
    if (lVar14 <= lVar21) {
      lVar12 = lVar21;
    }
    lVar23 = lVar12 * 2;
    if (lVar21 * lVar14 <= lVar12 * 2) {
      lVar23 = lVar21 * lVar14;
    }
    uVar3 = *(ulong *)(param_1 + 0x38);
    uVar20 = lVar23 + uVar3;
    if (*(long *)(param_1 + 0x40) < (long)uVar20) {
      lVar12 = uVar20 * 4;
      if (uVar20 >> 0x3e != 0) {
        lVar12 = -1;
      }
      lVar14 = lVar12;
      __Znam();
      __Znam();
      if ((long)uVar20 <= (long)uVar3) {
        uVar3 = uVar20;
      }
      lVar21 = *(long *)(param_1 + 0x28);
      if ((long)uVar3 < 1) {
        lVar23 = *(long *)(param_1 + 0x30);
      }
      else {
        _memcpy(lVar14,lVar21,uVar3 << 2);
        lVar23 = *(long *)(param_1 + 0x30);
        _memcpy(lVar12,lVar23,uVar3 << 2);
      }
      *(long *)(param_1 + 0x28) = lVar14;
      *(long *)(param_1 + 0x30) = lVar12;
      *(ulong *)(param_1 + 0x40) = uVar20;
      if (lVar23 != 0) {
        __ZdaPv(lVar23);
      }
      if (lVar21 != 0) {
        __ZdaPv(lVar21);
      }
    }
    if (0 < lVar25) {
      lVar12 = 0;
      do {
        puVar27 = (undefined4 *)(*(long *)(param_1 + 0x18) + lVar12 * 4);
        puVar27[1] = *puVar27;
        piVar28 = (int *)(*(long *)(lVar26 + 0x18) + (*(long *)(param_2 + 0x18) + lVar12) * 4);
        lVar14 = (long)*piVar28;
        if (*(long *)(lVar26 + 0x20) == 0) {
          lVar21 = (long)piVar28[1];
        }
        else {
          lVar21 = *(int *)(*(long *)(lVar26 + 0x20) + (*(long *)(param_2 + 0x18) + lVar12) * 4) +
                   lVar14;
        }
        if (lVar14 < lVar21) {
          do {
            if (*(long *)(param_2 + 0x10) <= (long)*(int *)(*(long *)(lVar26 + 0x30) + lVar14 * 4))
            goto LAB_10997c980;
            lVar14 = lVar14 + 1;
          } while (lVar21 != lVar14);
        }
        else {
LAB_10997c980:
          lVar23 = lVar21 - lVar14;
          if (lVar23 != 0 && lVar14 <= lVar21) {
            unaff_x22 = *(long *)(param_2 + 0x20) + *(long *)(param_2 + 0x10);
            puVar27 = (undefined4 *)(*(long *)(lVar26 + 0x28) + lVar14 * 4);
            piVar28 = (int *)(*(long *)(lVar26 + 0x30) + lVar14 * 4);
            do {
              iVar6 = *piVar28;
              unaff_x19 = (long)iVar6;
              if (unaff_x22 <= unaff_x19) break;
              uVar5 = *puVar27;
              iVar4 = *(int *)(param_2 + 0x10);
              lVar14 = *(long *)(param_1 + 0x18) + lVar12 * 4;
              iVar7 = *(int *)(lVar14 + 4);
              *(int *)(lVar14 + 4) = iVar7 + 1;
              lVar21 = *(long *)(param_1 + 0x38);
              lVar14 = lVar21 + 1;
              if (*(long *)(param_1 + 0x40) <= lVar21) {
                uVar20 = lVar14 + (long)(double)lVar14;
                if (0x7ffffffe < (long)uVar20) {
                  uVar20 = 0x7fffffff;
                }
                if ((long)uVar20 <= lVar21) goto LAB_10997cb50;
                lVar15 = uVar20 << 2;
                if (uVar20 >> 0x3e != 0) {
                  lVar15 = -1;
                }
                lVar10 = lVar15;
                __Znam();
                __Znam();
                lVar11 = *(long *)(param_1 + 0x28);
                if (lVar21 < 1) {
                  lVar22 = *(long *)(param_1 + 0x30);
                }
                else {
                  _memcpy(lVar10);
                  lVar22 = *(long *)(param_1 + 0x30);
                  _memcpy(lVar15,lVar22,lVar21 << 2);
                }
                *(long *)(param_1 + 0x28) = lVar10;
                *(long *)(param_1 + 0x30) = lVar15;
                *(ulong *)(param_1 + 0x40) = uVar20;
                if (lVar22 != 0) {
                  __ZdaPv(lVar22);
                }
                if (lVar11 != 0) {
                  __ZdaPv();
                }
              }
              *(long *)(param_1 + 0x38) = lVar14;
              lVar14 = *(long *)(param_1 + 0x28);
              lVar15 = *(long *)(param_1 + 0x30);
              *(undefined4 *)(lVar14 + lVar21 * 4) = 0;
              *(int *)(lVar15 + lVar21 * 4) = iVar6 - iVar4;
              *(undefined4 *)(lVar14 + (long)iVar7 * 4) = uVar5;
              puVar27 = puVar27 + 1;
              lVar23 = lVar23 + -1;
              piVar28 = piVar28 + 1;
            } while (lVar23 != 0);
          }
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != lVar25);
    }
    if ((*(long *)(param_1 + 0x20) == 0) && (lVar25 = *(long *)(param_1 + 8), -1 < lVar25)) {
      uVar5 = *(undefined4 *)(param_1 + 0x38);
      lVar26 = lVar25;
      do {
        if (*(int *)(*(long *)(param_1 + 0x18) + lVar26 * 4) != 0) goto LAB_10997cb30;
        bVar1 = 0 < lVar26;
        lVar26 = lVar26 + -1;
      } while (bVar1);
      lVar26 = -1;
LAB_10997cb30:
      lVar12 = lVar25 - lVar26;
      if (lVar12 != 0 && lVar26 <= lVar25) {
        puVar27 = (undefined4 *)(*(long *)(param_1 + 0x18) + lVar26 * 4);
        do {
          puVar27 = puVar27 + 1;
          *puVar27 = uVar5;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
    }
  }
  else {
    lVar14 = *(long *)(param_2 + 0x20);
    auStack_b0[0] = 0;
    lStack_a8 = 0;
    uStack_90 = 0;
    lStack_98 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    uStack_70 = 0;
    lStack_78 = 0;
    lVar12 = 1;
    lStack_a0 = lVar14;
    _calloc(1,lVar25 * 4 + 4);
    lStack_98 = lVar12;
    if (lVar12 == 0) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
LAB_10997cbc4:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10997cbc8);
      (*pcVar8)();
    }
    lVar21 = lVar14;
    if (lVar14 <= lVar25) {
      lVar21 = lVar25;
    }
    uStack_110 = lVar21 * 2;
    if (lVar14 * lVar25 <= lVar21 * 2) {
      uStack_110 = lVar14 * lVar25;
    }
    lStack_a8 = lVar25;
    if ((long)uStack_110 < 1) {
      unaff_x19 = 0;
      unaff_x22 = 0;
      uStack_110 = 0;
    }
    else {
      unaff_x19 = uStack_110 << 2;
      if (uStack_110 >> 0x3e != 0) {
        unaff_x19 = -1;
      }
      unaff_x22 = unaff_x19;
      __Znam();
      __Znam();
      lStack_88 = unaff_x22;
      lStack_80 = unaff_x19;
    }
    if (lVar25 < 1) {
      lVar14 = 0;
      lVar21 = lStack_88;
      lVar23 = lStack_80;
    }
    else {
      lVar15 = 0;
      lVar10 = 0;
      do {
        puVar27 = (undefined4 *)(lVar12 + lVar15 * 4);
        puVar27[1] = *puVar27;
        piVar28 = (int *)(*(long *)(lVar26 + 0x18) + (*(long *)(param_2 + 0x18) + lVar15) * 4);
        lVar21 = (long)*piVar28;
        if (*(long *)(lVar26 + 0x20) == 0) {
          lVar23 = (long)piVar28[1];
        }
        else {
          lVar23 = *(int *)(*(long *)(lVar26 + 0x20) + (*(long *)(param_2 + 0x18) + lVar15) * 4) +
                   lVar21;
        }
        lVar11 = *(long *)(lVar26 + 0x28);
        lVar22 = *(long *)(lVar26 + 0x30);
        lVar16 = *(long *)(param_2 + 0x10);
        lVar17 = *(long *)(param_2 + 0x20);
        lVar14 = lVar10;
        if (lVar21 < lVar23) {
          do {
            if (lVar16 <= *(int *)(lVar22 + lVar21 * 4)) goto LAB_10997c6dc;
            lVar21 = lVar21 + 1;
          } while (lVar23 != lVar21);
        }
        else {
LAB_10997c6dc:
          if (lVar21 < lVar23) {
            lVar19 = 0;
            lVar2 = lStack_98 + lVar15 * 4;
            lVar18 = lVar10 * 4;
            lVar24 = lVar18;
            do {
              lVar14 = lVar10 + lVar19;
              iVar6 = *(int *)(lVar22 + lVar21 * 4 + lVar19 * 4);
              if (lVar17 + lVar16 <= (long)iVar6) goto LAB_10997c844;
              uVar5 = *(undefined4 *)(lVar11 + lVar21 * 4 + lVar19 * 4);
              iVar4 = *(int *)(param_2 + 0x10);
              iVar7 = *(int *)(lVar2 + 4);
              *(int *)(lVar2 + 4) = iVar7 + 1;
              lVar13 = unaff_x19;
              uVar20 = uStack_110;
              lVar9 = unaff_x22;
              if ((long)uStack_110 <= lVar14) {
                lVar13 = lVar10 + lVar19;
                lVar9 = lVar13 + (long)(double)(lVar14 + 1);
                uVar20 = 0x7fffffff;
                if (lVar9 + 1 < 0x7fffffff) {
                  uVar20 = lVar9 + 1;
                }
                if ((long)uVar20 <= lVar14) goto LAB_10997cb70;
                lVar13 = uVar20 << 2;
                if (uVar20 >> 0x3e != 0) {
                  lVar13 = -1;
                }
                lVar9 = lVar13;
                __Znam();
                __Znam();
                if (0 < lVar14) {
                  _memcpy(lVar9,unaff_x22,lVar24);
                  _memcpy(lVar13,unaff_x19,lVar24);
                }
                if (unaff_x19 != 0) {
                  __ZdaPv(unaff_x19);
                }
                if (unaff_x22 != 0) {
                  __ZdaPv(unaff_x22);
                }
              }
              *(undefined4 *)(lVar9 + lVar18 + lVar19 * 4) = 0;
              *(int *)(lVar13 + lVar18 + lVar19 * 4) = iVar6 - iVar4;
              *(undefined4 *)(lVar9 + (long)iVar7 * 4) = uVar5;
              lVar19 = lVar19 + 1;
              lVar24 = lVar24 + 4;
              unaff_x19 = lVar13;
              uStack_110 = uVar20;
              unaff_x22 = lVar9;
            } while (lVar23 - lVar21 != lVar19);
            lVar14 = lVar10 + lVar19;
          }
        }
LAB_10997c844:
        lVar15 = lVar15 + 1;
        lVar10 = lVar14;
        lVar21 = unaff_x22;
        lVar23 = unaff_x19;
      } while (lVar15 != lVar25);
    }
    lStack_80 = lVar23;
    lStack_88 = lVar21;
    lVar26 = lVar25;
    if (-1 < lVar25) {
      do {
        if (*(int *)(lVar12 + lVar26 * 4) != 0) goto LAB_10997c884;
        bVar1 = 0 < lVar26;
        lVar26 = lVar26 + -1;
      } while (bVar1);
      lVar26 = -1;
LAB_10997c884:
      lVar21 = lVar25 - lVar26;
      if (lVar21 != 0 && lVar26 <= lVar25) {
        puVar27 = (undefined4 *)(lVar12 + lVar26 * 4);
        do {
          puVar27 = puVar27 + 1;
          *puVar27 = (int)lVar14;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
    }
    auStack_b0[0] = 1;
    lStack_78 = lVar14;
    uStack_70 = uStack_110;
    FUN_10997cc60(param_1,auStack_b0);
    _free(lStack_98);
    _free(uStack_90);
    if (lStack_88 != 0) {
      __ZdaPv();
    }
    if (lStack_80 != 0) {
      __ZdaPv();
    }
  }
  return;
}



/* Entry: 10997cc60; end: 10997d63f;  */

char * FUN_10997cc60(char *param_1,char *param_2)

{
  bool bVar1;
  int *piVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long unaff_x28;
  ulong uStack_100;
  long lStack_d0;
  ulong uStack_b8;
  undefined1 auStack_b0 [8];
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  
  if (*param_2 == '\x01') {
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    *(undefined8 *)(param_2 + 0x10) = uVar11;
    *(undefined8 *)(param_2 + 0x18) = uVar4;
    uVar11 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = uVar11;
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = uVar11;
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = uVar11;
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    *(undefined8 *)(param_2 + 0x30) = uVar11;
    *(undefined8 *)(param_2 + 0x38) = uVar4;
    uVar11 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = uVar11;
    return param_1;
  }
  if (param_1 == param_2) {
    return param_1;
  }
  uVar19 = *(ulong *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  if (*(ulong *)(param_1 + 8) == uVar19 && *(ulong *)(param_1 + 8) != 0) {
LAB_10997cd3c:
    if (*(long *)(param_1 + 0x20) != 0) {
      _free();
      param_1[0x20] = '\0';
      param_1[0x21] = '\0';
      param_1[0x22] = '\0';
      param_1[0x23] = '\0';
      param_1[0x24] = '\0';
      param_1[0x25] = '\0';
      param_1[0x26] = '\0';
      param_1[0x27] = '\0';
      uVar19 = *(ulong *)(param_1 + 8);
    }
    _bzero(*(undefined8 *)(param_1 + 0x18),uVar19 * 4 + 4);
    if (*(long *)(param_1 + 0x20) != 0) {
      _free();
      param_1[0x20] = '\0';
      param_1[0x21] = '\0';
      param_1[0x22] = '\0';
      param_1[0x23] = '\0';
      param_1[0x24] = '\0';
      param_1[0x25] = '\0';
      param_1[0x26] = '\0';
      param_1[0x27] = '\0';
    }
    if (*(long *)(param_2 + 0x20) == 0) {
      if (*(long *)(param_1 + 8) != -1) {
        _memcpy(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18),
                *(long *)(param_1 + 8) * 4 + 4);
      }
      uVar19 = *(ulong *)(param_2 + 0x38);
      if ((long)uVar19 <= *(long *)(param_1 + 0x40)) {
LAB_10997d274:
        *(ulong *)(param_1 + 0x38) = uVar19;
        if ((uVar19 != 0) && (0 < *(long *)(param_2 + 0x38))) {
          _memcpy(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),uVar19 << 2);
          if (*(long *)(param_1 + 0x38) != 0) {
            _memcpy(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x30),
                    *(long *)(param_1 + 0x38) << 2);
          }
        }
        return param_1;
      }
      uVar25 = uVar19;
      if (0x7ffffffe < (long)uVar19) {
        uVar25 = 0x7fffffff;
      }
      if ((long)uVar19 < 0x80000000) {
        lVar12 = uVar25 << 2;
        if (uVar25 >> 0x3e != 0) {
          lVar12 = -1;
        }
        lVar16 = lVar12;
        __Znam();
        __Znam();
        uVar23 = *(ulong *)(param_1 + 0x38);
        if ((long)uVar25 <= (long)*(ulong *)(param_1 + 0x38)) {
          uVar23 = uVar25;
        }
        lVar20 = *(long *)(param_1 + 0x28);
        if ((long)uVar23 < 1) {
          lVar22 = *(long *)(param_1 + 0x30);
        }
        else {
          _memcpy(lVar16,lVar20,uVar23 << 2);
          lVar22 = *(long *)(param_1 + 0x30);
          _memcpy(lVar12,lVar22,uVar23 << 2);
        }
        *(long *)(param_1 + 0x28) = lVar16;
        *(long *)(param_1 + 0x30) = lVar12;
        *(ulong *)(param_1 + 0x40) = uVar25;
        if (lVar22 != 0) {
          __ZdaPv(lVar22);
        }
        if (lVar20 != 0) {
          __ZdaPv(lVar20);
        }
        goto LAB_10997d274;
      }
    }
    else {
      uVar25 = *(ulong *)(param_2 + 8);
      if (*param_2 != '\x01') {
        uVar19 = *(ulong *)(param_2 + 0x10);
        auStack_b0[0] = 0;
        uStack_a8 = 0;
        uStack_90 = 0;
        lStack_98 = 0;
        uStack_80 = 0;
        uStack_88 = 0;
        uStack_70 = 0;
        lStack_78 = 0;
        lVar12 = 1;
        uStack_a0 = uVar19;
        _calloc(1,uVar25 * 4 + 4);
        lStack_98 = lVar12;
        if (lVar12 != 0) {
          uVar23 = uVar19;
          if ((long)uVar19 <= (long)uVar25) {
            uVar23 = uVar25;
          }
          uStack_100 = uVar23 * 2;
          if ((long)(uVar19 * uVar25) <= (long)(uVar23 * 2)) {
            uStack_100 = uVar19 * uVar25;
          }
          uStack_a8 = uVar25;
          if ((long)uStack_100 < 1) {
            uVar19 = 0;
            uVar23 = 0;
            uStack_100 = 0;
          }
          else {
            uVar19 = uStack_100 << 2;
            if (uStack_100 >> 0x3e != 0) {
              uVar19 = 0xffffffffffffffff;
            }
            uVar23 = uVar19;
            __Znam();
            __Znam();
            uStack_80 = uVar19;
          }
          if ((long)uVar25 < 1) {
            lStack_d0 = 0;
            uVar19 = uStack_80;
          }
          else {
            uVar17 = 0;
            lStack_d0 = 0;
            do {
              puVar14 = (undefined4 *)(lVar12 + uVar17 * 4);
              puVar14[1] = *puVar14;
              piVar2 = (int *)(*(long *)(param_2 + 0x18) + uVar17 * 4);
              lVar16 = (long)*piVar2;
              if (*(long *)(param_2 + 0x20) == 0) {
                lVar20 = (long)piVar2[1];
              }
              else {
                lVar20 = *(int *)(*(long *)(param_2 + 0x20) + uVar17 * 4) + lVar16;
              }
              if (lVar16 < lVar20) {
                unaff_x28 = 0;
                lVar26 = *(long *)(param_2 + 0x28);
                lVar27 = *(long *)(param_2 + 0x30);
                lVar18 = lStack_d0 * 4;
                lVar22 = lVar18;
                uStack_b8 = uVar23;
                do {
                  lVar15 = lStack_d0 + unaff_x28;
                  uVar6 = *(undefined4 *)(lVar26 + lVar16 * 4 + unaff_x28 * 4);
                  uVar7 = *(undefined4 *)(lVar27 + lVar16 * 4 + unaff_x28 * 4);
                  iVar8 = *(int *)(lVar12 + 4 + uVar17 * 4);
                  *(int *)(lVar12 + 4 + uVar17 * 4) = iVar8 + 1;
                  uVar23 = uStack_b8;
                  if ((long)uStack_100 <= lVar15) {
                    lVar10 = lVar15 + (long)(double)(lVar15 + 1);
                    uVar3 = 0x7fffffff;
                    if (lVar10 + 1 < 0x7fffffff) {
                      uVar3 = lVar10 + 1;
                    }
                    if ((long)uVar3 <= lVar15) goto LAB_10997d534;
                    uVar13 = uVar3 << 2;
                    if (uVar3 >> 0x3e != 0) {
                      uVar13 = 0xffffffffffffffff;
                    }
                    uVar23 = uVar13;
                    __Znam();
                    __Znam();
                    if (0 < lVar15) {
                      _memcpy(uVar23,uStack_b8,lVar22);
                      _memcpy(uVar13,uVar19,lVar22);
                    }
                    if (uVar19 != 0) {
                      __ZdaPv(uVar19);
                    }
                    uVar19 = uVar13;
                    uStack_100 = uVar3;
                    if (uStack_b8 != 0) {
                      __ZdaPv(uStack_b8);
                    }
                  }
                  *(undefined4 *)(uVar23 + lVar18 + unaff_x28 * 4) = 0;
                  *(undefined4 *)(uVar19 + lVar18 + unaff_x28 * 4) = uVar7;
                  *(undefined4 *)(uVar23 + (long)iVar8 * 4) = uVar6;
                  unaff_x28 = unaff_x28 + 1;
                  lVar22 = lVar22 + 4;
                  uStack_b8 = uVar23;
                } while (lVar20 - lVar16 != unaff_x28);
                lStack_d0 = lStack_d0 + unaff_x28;
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 != uVar25);
          }
          uStack_80 = uVar19;
          uVar19 = uVar25;
          if (-1 < (long)uVar25) {
            do {
              if (*(int *)(lVar12 + uVar19 * 4) != 0) goto LAB_10997d1ec;
              bVar1 = 0 < (long)uVar19;
              uVar19 = uVar19 - 1;
            } while (bVar1);
            uVar19 = 0xffffffffffffffff;
LAB_10997d1ec:
            lVar16 = uVar25 - uVar19;
            if (lVar16 != 0 && (long)uVar19 <= (long)uVar25) {
              puVar14 = (undefined4 *)(lVar12 + uVar19 * 4);
              do {
                puVar14 = puVar14 + 1;
                *puVar14 = (int)lStack_d0;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
          }
          auStack_b0[0] = 1;
          uStack_88 = uVar23;
          lStack_78 = lStack_d0;
          uStack_70 = uStack_100;
          FUN_10997cc60(param_1,auStack_b0);
          _free(lStack_98);
          _free(uStack_90);
          if (uStack_88 != 0) {
            __ZdaPv();
          }
          if (uStack_80 == 0) {
            return param_1;
          }
          __ZdaPv();
          return param_1;
        }
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        goto LAB_10997d594;
      }
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      param_1[0x38] = '\0';
      param_1[0x39] = '\0';
      param_1[0x3a] = '\0';
      param_1[0x3b] = '\0';
      param_1[0x3c] = '\0';
      param_1[0x3d] = '\0';
      param_1[0x3e] = '\0';
      param_1[0x3f] = '\0';
      uVar23 = uVar25;
      if ((*(ulong *)(param_1 + 8) == uVar25) && (*(ulong *)(param_1 + 8) != 0)) {
LAB_10997cf34:
        _bzero(*(undefined8 *)(param_1 + 0x18),uVar23 * 4 + 4);
        param_1[0x38] = '\0';
        param_1[0x39] = '\0';
        param_1[0x3a] = '\0';
        param_1[0x3b] = '\0';
        param_1[0x3c] = '\0';
        param_1[0x3d] = '\0';
        param_1[0x3e] = '\0';
        param_1[0x3f] = '\0';
        _bzero(*(undefined8 *)(param_1 + 0x18),*(long *)(param_1 + 8) * 4 + 4);
        if (*(long *)(param_1 + 0x20) != 0) {
          _bzero(*(long *)(param_1 + 0x20),*(long *)(param_1 + 8) << 2);
        }
        lVar16 = *(long *)(param_2 + 8);
        lVar20 = *(long *)(param_2 + 0x10);
        lVar12 = lVar20;
        if (lVar20 <= lVar16) {
          lVar12 = lVar16;
        }
        lVar22 = lVar12 * 2;
        if (lVar16 * lVar20 <= lVar12 * 2) {
          lVar22 = lVar16 * lVar20;
        }
        uVar23 = *(ulong *)(param_1 + 0x38);
        uVar19 = lVar22 + uVar23;
        if (*(long *)(param_1 + 0x40) < (long)uVar19) {
          lVar12 = uVar19 * 4;
          if (uVar19 >> 0x3e != 0) {
            lVar12 = -1;
          }
          lVar16 = lVar12;
          __Znam();
          __Znam();
          if ((long)uVar19 <= (long)uVar23) {
            uVar23 = uVar19;
          }
          lVar20 = *(long *)(param_1 + 0x28);
          if ((long)uVar23 < 1) {
            lVar22 = *(long *)(param_1 + 0x30);
          }
          else {
            _memcpy(lVar16,lVar20,uVar23 << 2);
            lVar22 = *(long *)(param_1 + 0x30);
            _memcpy(lVar12,lVar22,uVar23 << 2);
          }
          *(long *)(param_1 + 0x28) = lVar16;
          *(long *)(param_1 + 0x30) = lVar12;
          *(ulong *)(param_1 + 0x40) = uVar19;
          if (lVar22 != 0) {
            __ZdaPv(lVar22);
          }
          if (lVar20 != 0) {
            __ZdaPv(lVar20);
          }
        }
        if (0 < (long)uVar25) {
          uVar19 = 0;
          do {
            puVar14 = (undefined4 *)(*(long *)(param_1 + 0x18) + uVar19 * 4);
            puVar14[1] = *puVar14;
            piVar2 = (int *)(*(long *)(param_2 + 0x18) + uVar19 * 4);
            lVar12 = (long)*piVar2;
            if (*(long *)(param_2 + 0x20) == 0) {
              lVar16 = (long)piVar2[1];
            }
            else {
              lVar16 = *(int *)(*(long *)(param_2 + 0x20) + uVar19 * 4) + lVar12;
            }
            if (lVar12 < lVar16) {
              unaff_x28 = 0;
              lVar26 = *(long *)(param_1 + 0x38);
              lVar27 = lVar26 * 4;
              lVar22 = *(long *)(param_2 + 0x28);
              lStack_d0 = *(long *)(param_2 + 0x30) + lVar12 * 4;
              lVar20 = lVar27;
              do {
                lVar18 = lVar26 + unaff_x28;
                uVar6 = *(undefined4 *)(lVar22 + lVar12 * 4 + unaff_x28 * 4);
                uVar7 = *(undefined4 *)(lStack_d0 + unaff_x28 * 4);
                uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar6);
                lVar15 = *(long *)(param_1 + 0x18) + uVar19 * 4;
                iVar8 = *(int *)(lVar15 + 4);
                *(int *)(lVar15 + 4) = iVar8 + 1;
                if (*(long *)(param_1 + 0x40) <= lVar18) {
                  lVar15 = lVar18 + (long)(double)(lVar18 + 1);
                  uVar23 = 0x7fffffff;
                  if (lVar15 + 1 < 0x7fffffff) {
                    uVar23 = lVar15 + 1;
                  }
                  if ((long)uVar23 <= lVar18) goto LAB_10997d514;
                  lVar15 = uVar23 << 2;
                  if (uVar23 >> 0x3e != 0) {
                    lVar15 = -1;
                  }
                  lVar10 = lVar15;
                  __Znam();
                  __Znam();
                  lVar21 = *(long *)(param_1 + 0x28);
                  if (lVar18 < 1) {
                    lVar24 = *(long *)(param_1 + 0x30);
                  }
                  else {
                    _memcpy(lVar10,lVar21,lVar20);
                    lVar24 = *(long *)(param_1 + 0x30);
                    _memcpy(lVar15,lVar24,lVar20);
                  }
                  *(long *)(param_1 + 0x28) = lVar10;
                  *(long *)(param_1 + 0x30) = lVar15;
                  *(ulong *)(param_1 + 0x40) = uVar23;
                  if (lVar24 != 0) {
                    __ZdaPv(lVar24);
                  }
                  if (lVar21 != 0) {
                    __ZdaPv(lVar21);
                  }
                }
                lVar15 = *(long *)(param_1 + 0x28);
                lVar10 = *(long *)(param_1 + 0x30);
                *(undefined4 *)(lVar15 + lVar27 + unaff_x28 * 4) = 0;
                *(undefined4 *)(lVar10 + lVar27 + unaff_x28 * 4) = uVar7;
                *(long *)(param_1 + 0x38) = lVar18 + 1;
                *(undefined4 *)(lVar15 + (long)iVar8 * 4) = uVar6;
                lVar20 = lVar20 + 4;
                unaff_x28 = unaff_x28 + 1;
              } while (lVar16 - lVar12 != unaff_x28);
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 != uVar25);
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          return param_1;
        }
        lVar12 = *(long *)(param_1 + 8);
        if (lVar12 < 0) {
          return param_1;
        }
        uVar6 = *(undefined4 *)(param_1 + 0x38);
        lVar16 = lVar12;
        do {
          if (*(int *)(*(long *)(param_1 + 0x18) + lVar16 * 4) != 0) goto LAB_10997d4f4;
          bVar1 = 0 < lVar16;
          lVar16 = lVar16 + -1;
        } while (bVar1);
        lVar16 = -1;
LAB_10997d4f4:
        lVar20 = lVar12 - lVar16;
        if (lVar20 == 0 || lVar12 < lVar16) {
          return param_1;
        }
        puVar14 = (undefined4 *)(*(long *)(param_1 + 0x18) + lVar16 * 4);
        do {
          puVar14 = puVar14 + 1;
          *puVar14 = uVar6;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        return param_1;
      }
      _free(*(undefined8 *)(param_1 + 0x18));
      lVar12 = uVar25 * 4 + 4;
      _malloc();
      *(long *)(param_1 + 0x18) = lVar12;
      if (lVar12 != 0) {
        *(ulong *)(param_1 + 8) = uVar25;
        if (*(long *)(param_1 + 0x20) != 0) {
          _free();
          param_1[0x20] = '\0';
          param_1[0x21] = '\0';
          param_1[0x22] = '\0';
          param_1[0x23] = '\0';
          param_1[0x24] = '\0';
          param_1[0x25] = '\0';
          param_1[0x26] = '\0';
          param_1[0x27] = '\0';
          uVar23 = *(ulong *)(param_1 + 8);
        }
        goto LAB_10997cf34;
      }
    }
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x18));
    lVar12 = uVar19 * 4 + 4;
    _malloc();
    *(long *)(param_1 + 0x18) = lVar12;
    if (lVar12 != 0) {
      *(ulong *)(param_1 + 8) = uVar19;
      goto LAB_10997cd3c;
    }
  }
LAB_10997d514:
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10997d534:
  lStack_78 = lStack_d0 + unaff_x28;
  uStack_70 = uStack_100;
  uStack_88 = uStack_b8;
  uStack_80 = uVar19;
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10997d594:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10997d598);
  (*pcVar9)();
}



/* Entry: 10997d640; end: 10997d6f7;  */

long FUN_10997d640(long param_1)

{
  _free(*(undefined8 *)(param_1 + 0x88));
  _free(*(undefined8 *)(param_1 + 0x90));
  if (*(long *)(param_1 + 0x98) != 0) {
    __ZdaPv();
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    __ZdaPv();
  }
  _free(*(undefined8 *)(param_1 + 0x30));
  _free(*(undefined8 *)(param_1 + 0x38));
  if (*(long *)(param_1 + 0x40) != 0) {
    __ZdaPv();
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 10997d6f8; end: 10997d85b;  */

void FUN_10997d6f8(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  auStack_78[0] = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_48 = 0;
  lStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  FUN_10997e1bc(auStack_78);
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 8);
  uStack_b0 = *(undefined8 *)(param_2 + 8);
  auStack_c0[0] = 0;
  lStack_b8 = 0;
  uStack_a0 = 0;
  lStack_a8 = 0;
  lStack_90 = 0;
  lStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  lVar2 = 1;
  _calloc(1,lVar3 * 4 + 4);
  lStack_a8 = lVar2;
  if (lVar2 != 0) {
    lStack_b8 = lVar3;
    FUN_10997d85c(auStack_78,param_1,auStack_c0);
    FUN_10997c0d8(param_3,auStack_c0);
    _free(lStack_a8);
    _free(uStack_a0);
    if (lStack_98 != 0) {
      __ZdaPv();
    }
    if (lStack_90 != 0) {
      __ZdaPv();
    }
    _free(uStack_60);
    _free(uStack_58);
    if (lStack_50 != 0) {
      __ZdaPv();
    }
    if (lStack_48 != 0) {
      __ZdaPv();
    }
    return;
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10997d81c);
  (*pcVar1)();
}



/* Entry: 10997d85c; end: 10997e1bb;  */

void FUN_10997d85c(long param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  bool bVar11;
  code *pcVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  long extraout_x8;
  int *piVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  undefined4 *puVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long *plVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar39;
  int iVar40;
  int iVar41;
  undefined1 auVar38 [16];
  long alStack_d0 [3];
  long *plStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  undefined4 uStack_74;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar27 = *(ulong *)(param_1 + 0x10);
  lStack_b0 = *(long *)(*(long *)(param_2 + 8) + 8);
  alStack_d0[1] = uVar27;
  if (0x20000 < uVar27) {
    uVar13 = uVar27;
    _malloc();
    if (uVar13 == 0) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
    }
    else if (uVar27 >> 0x3e == 0) goto LAB_10997d97c;
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
    goto LAB_10997e0ec;
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar30 = -(uVar27 + 0x1e & 0xfffffffffffffff0);
  uVar13 = (long)alStack_d0 + lVar30;
  lVar20 = uVar27 << 2;
  if (uVar27 < 0x8001) {
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar20 = (long)alStack_d0 + (lVar30 - (lVar20 + 0x1eU & 0xfffffffffffffff0));
    lVar30 = uVar27 << 3;
    if (0x4000 < uVar27) {
      bVar11 = false;
      lStack_88 = lVar20;
      goto LAB_10997d9a0;
    }
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    plVar19 = (long *)(lVar20 - (lVar30 + 0x1eU & 0xfffffffffffffff0));
    bVar11 = false;
    lStack_88 = extraout_x8;
LAB_10997d9ac:
    _bzero(uVar13,uVar27);
    lVar30 = *(long *)(param_2 + 8);
    piVar17 = *(int **)(param_1 + 0x20);
    if (piVar17 == (int *)0x0) {
      lVar20 = (long)(*(int **)(param_1 + 0x18))[*(long *)(param_1 + 8)] -
               (long)**(int **)(param_1 + 0x18);
    }
    else {
      uVar27 = *(ulong *)(param_1 + 8);
      if (uVar27 == 0) {
        lVar20 = 0;
      }
      else {
        uVar21 = (ulong)-((uint)piVar17 >> 2) & 3;
        if ((long)uVar27 <= (long)uVar21) {
          uVar21 = uVar27;
        }
        uVar22 = uVar27;
        if (((ulong)piVar17 & 3) == 0) {
          uVar22 = uVar21;
        }
        uVar6 = uVar27 - uVar22;
        uVar21 = uVar6 + 3;
        uVar10 = uVar6 + 7;
        if ((long)uVar22 <= (long)uVar27) {
          uVar21 = uVar6;
          uVar10 = uVar6;
        }
        if (uVar6 + 3 < 7) {
          iVar33 = *piVar17;
          if (1 < (long)uVar27) {
            lVar20 = uVar27 - 1;
            do {
              piVar17 = piVar17 + 1;
              iVar33 = *piVar17 + iVar33;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
          }
        }
        else {
          piVar15 = piVar17 + uVar22;
          iVar35 = (int)*(undefined8 *)(piVar15 + 2);
          iVar36 = (int)((ulong)*(undefined8 *)(piVar15 + 2) >> 0x20);
          iVar33 = (int)*(undefined8 *)piVar15;
          iVar34 = (int)((ulong)*(undefined8 *)piVar15 >> 0x20);
          if (7 < (long)uVar6) {
            lVar20 = (uVar10 & 0xfffffffffffffff8) + uVar22;
            iVar37 = piVar15[4];
            iVar39 = piVar15[5];
            iVar40 = piVar15[6];
            iVar41 = piVar15[7];
            if (0xf < uVar6) {
              lVar23 = uVar22 + 8;
              piVar15 = piVar15 + 0xc;
              do {
                iVar33 = (int)*(undefined8 *)(piVar15 + -4) + iVar33;
                iVar34 = (int)((ulong)*(undefined8 *)(piVar15 + -4) >> 0x20) + iVar34;
                iVar35 = (int)*(undefined8 *)(piVar15 + -2) + iVar35;
                iVar36 = (int)((ulong)*(undefined8 *)(piVar15 + -2) >> 0x20) + iVar36;
                iVar37 = (int)*(undefined8 *)piVar15 + iVar37;
                iVar39 = (int)((ulong)*(undefined8 *)piVar15 >> 0x20) + iVar39;
                iVar40 = (int)*(undefined8 *)(piVar15 + 2) + iVar40;
                iVar41 = (int)((ulong)*(undefined8 *)(piVar15 + 2) >> 0x20) + iVar41;
                lVar23 = lVar23 + 8;
                piVar15 = piVar15 + 8;
              } while (lVar23 < lVar20);
            }
            iVar33 = iVar33 + iVar37;
            iVar34 = iVar34 + iVar39;
            iVar35 = iVar35 + iVar40;
            iVar36 = iVar36 + iVar41;
            if ((long)(uVar10 & 0xfffffffffffffff8) < (long)(uVar21 & 0xfffffffffffffffc)) {
              piVar15 = piVar17 + lVar20;
              iVar33 = *piVar15 + iVar33;
              iVar34 = piVar15[1] + iVar34;
              iVar35 = piVar15[2] + iVar35;
              iVar36 = piVar15[3] + iVar36;
            }
          }
          lVar20 = (uVar21 & 0xfffffffffffffffc) + uVar22;
          auVar38._4_4_ = iVar34;
          auVar38._0_4_ = iVar33;
          auVar38._8_4_ = iVar35;
          auVar38._12_4_ = iVar36;
          auVar9._4_4_ = iVar34;
          auVar9._0_4_ = iVar33;
          auVar9._8_4_ = iVar35;
          auVar9._12_4_ = iVar36;
          auVar38 = NEON_ext(auVar38,auVar9,8,1);
          iVar33 = iVar33 + auVar38._0_4_ + iVar34 + auVar38._4_4_;
          piVar15 = piVar17;
          if (0 < (long)uVar22) {
            do {
              iVar33 = *piVar15 + iVar33;
              uVar22 = uVar22 - 1;
              piVar15 = piVar15 + 1;
            } while (uVar22 != 0);
          }
          for (; lVar20 < (long)uVar27; lVar20 = lVar20 + 1) {
            iVar33 = piVar17[lVar20] + iVar33;
          }
        }
        lVar20 = (long)iVar33;
      }
    }
    piVar17 = *(int **)(lVar30 + 0x20);
    if (piVar17 == (int *)0x0) {
      lVar23 = (long)(*(int **)(lVar30 + 0x18))[*(long *)(lVar30 + 8)] -
               (long)**(int **)(lVar30 + 0x18);
    }
    else {
      uVar27 = *(ulong *)(lVar30 + 8);
      if (uVar27 == 0) {
        lVar23 = 0;
      }
      else {
        uVar21 = (ulong)-((uint)piVar17 >> 2) & 3;
        if ((long)uVar27 <= (long)uVar21) {
          uVar21 = uVar27;
        }
        uVar22 = uVar27;
        if (((ulong)piVar17 & 3) == 0) {
          uVar22 = uVar21;
        }
        uVar6 = uVar27 - uVar22;
        uVar21 = uVar6 + 3;
        uVar10 = uVar6 + 7;
        if ((long)uVar22 <= (long)uVar27) {
          uVar21 = uVar6;
          uVar10 = uVar6;
        }
        if (uVar6 + 3 < 7) {
          iVar33 = *piVar17;
          if (1 < (long)uVar27) {
            lVar23 = uVar27 - 1;
            do {
              piVar17 = piVar17 + 1;
              iVar33 = *piVar17 + iVar33;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
          }
        }
        else {
          piVar15 = piVar17 + uVar22;
          iVar35 = (int)*(undefined8 *)(piVar15 + 2);
          iVar36 = (int)((ulong)*(undefined8 *)(piVar15 + 2) >> 0x20);
          iVar33 = (int)*(undefined8 *)piVar15;
          iVar34 = (int)((ulong)*(undefined8 *)piVar15 >> 0x20);
          if (7 < (long)uVar6) {
            lVar23 = (uVar10 & 0xfffffffffffffff8) + uVar22;
            iVar37 = piVar15[4];
            iVar39 = piVar15[5];
            iVar40 = piVar15[6];
            iVar41 = piVar15[7];
            if (0xf < uVar6) {
              lVar18 = uVar22 + 8;
              piVar15 = piVar15 + 0xc;
              do {
                iVar33 = (int)*(undefined8 *)(piVar15 + -4) + iVar33;
                iVar34 = (int)((ulong)*(undefined8 *)(piVar15 + -4) >> 0x20) + iVar34;
                iVar35 = (int)*(undefined8 *)(piVar15 + -2) + iVar35;
                iVar36 = (int)((ulong)*(undefined8 *)(piVar15 + -2) >> 0x20) + iVar36;
                iVar37 = (int)*(undefined8 *)piVar15 + iVar37;
                iVar39 = (int)((ulong)*(undefined8 *)piVar15 >> 0x20) + iVar39;
                iVar40 = (int)*(undefined8 *)(piVar15 + 2) + iVar40;
                iVar41 = (int)((ulong)*(undefined8 *)(piVar15 + 2) >> 0x20) + iVar41;
                lVar18 = lVar18 + 8;
                piVar15 = piVar15 + 8;
              } while (lVar18 < lVar23);
            }
            iVar33 = iVar33 + iVar37;
            iVar34 = iVar34 + iVar39;
            iVar35 = iVar35 + iVar40;
            iVar36 = iVar36 + iVar41;
            if ((long)(uVar10 & 0xfffffffffffffff8) < (long)(uVar21 & 0xfffffffffffffffc)) {
              piVar15 = piVar17 + lVar23;
              iVar33 = *piVar15 + iVar33;
              iVar34 = piVar15[1] + iVar34;
              iVar35 = piVar15[2] + iVar35;
              iVar36 = piVar15[3] + iVar36;
            }
          }
          lVar23 = (uVar21 & 0xfffffffffffffffc) + uVar22;
          auVar7._4_4_ = iVar34;
          auVar7._0_4_ = iVar33;
          auVar7._8_4_ = iVar35;
          auVar7._12_4_ = iVar36;
          auVar8._4_4_ = iVar34;
          auVar8._0_4_ = iVar33;
          auVar8._8_4_ = iVar35;
          auVar8._12_4_ = iVar36;
          auVar38 = NEON_ext(auVar7,auVar8,8,1);
          iVar33 = iVar33 + auVar38._0_4_ + iVar34 + auVar38._4_4_;
          piVar15 = piVar17;
          if (0 < (long)uVar22) {
            do {
              iVar33 = *piVar15 + iVar33;
              uVar22 = uVar22 - 1;
              piVar15 = piVar15 + 1;
            } while (uVar22 != 0);
          }
          for (; lVar23 < (long)uVar27; lVar23 = lVar23 + 1) {
            iVar33 = piVar17[lVar23] + iVar33;
          }
        }
        lVar23 = (long)iVar33;
      }
    }
    *(undefined8 *)(param_3 + 0x38) = 0;
    plStack_b8 = plVar19;
    _bzero(*(undefined8 *)(param_3 + 0x18),*(long *)(param_3 + 8) * 4 + 4);
    if (*(long *)(param_3 + 0x20) != 0) {
      _bzero(*(long *)(param_3 + 0x20),*(long *)(param_3 + 8) << 2);
    }
    lVar18 = lStack_88;
    uVar21 = *(ulong *)(param_3 + 0x38);
    uVar27 = lVar23 + lVar20 + uVar21;
    alStack_d0[2] = param_1;
    lStack_a8 = lVar30;
    lStack_a0 = param_3;
    if (*(long *)(param_3 + 0x40) < (long)uVar27) {
      lVar30 = uVar27 * 4;
      if (uVar27 >> 0x3e != 0) {
        lVar30 = -1;
      }
      lVar23 = lVar30;
      __Znam();
      __Znam();
      lVar20 = lStack_a0;
      if ((long)uVar27 <= (long)uVar21) {
        uVar21 = uVar27;
      }
      lVar31 = *(long *)(lStack_a0 + 0x28);
      if ((long)uVar21 < 1) {
        lVar28 = *(long *)(lStack_a0 + 0x30);
      }
      else {
        _memcpy(lVar23,lVar31,uVar21 << 2);
        lVar28 = *(long *)(lVar20 + 0x30);
        _memcpy(lVar30,lVar28,uVar21 << 2);
      }
      *(long *)(lVar20 + 0x28) = lVar23;
      *(long *)(lVar20 + 0x30) = lVar30;
      *(ulong *)(lVar20 + 0x40) = uVar27;
      if (lVar28 != 0) {
        __ZdaPv(lVar28);
      }
      lVar30 = lStack_a8;
      if (lVar31 != 0) {
        __ZdaPv(lVar31);
      }
    }
    lVar20 = lStack_a0;
    if (0 < lStack_b0) {
      lVar23 = 0;
      do {
        puVar24 = (undefined4 *)(*(long *)(lVar20 + 0x18) + lVar23 * 4);
        puVar24[1] = *puVar24;
        piVar17 = (int *)(*(long *)(lVar30 + 0x18) + lVar23 * 4);
        lVar18 = (long)*piVar17;
        if (*(long *)(lVar30 + 0x20) == 0) {
          lVar30 = (long)piVar17[1];
        }
        else {
          lVar30 = *(int *)(*(long *)(lVar30 + 0x20) + lVar23 * 4) + lVar18;
        }
        if (lVar18 < lVar30) {
          lVar31 = 0;
          lVar28 = *(long *)(lStack_a8 + 0x28);
          lVar2 = *(long *)(lStack_a8 + 0x30);
          lVar29 = *(long *)(alStack_d0[2] + 0x28);
          lVar3 = *(long *)(alStack_d0[2] + 0x30);
          lVar16 = *(long *)(alStack_d0[2] + 0x18);
          lVar4 = *(long *)(alStack_d0[2] + 0x20);
          do {
            lVar25 = (long)*(int *)(lVar2 + lVar18 * 4);
            piVar17 = (int *)(lVar16 + lVar25 * 4);
            lVar14 = (long)*piVar17;
            if (lVar4 == 0) {
              lVar25 = (long)piVar17[1];
            }
            else {
              lVar25 = *(int *)(lVar4 + lVar25 * 4) + lVar14;
            }
            lVar26 = lVar25 - lVar14;
            if (lVar26 != 0 && lVar14 <= lVar25) {
              iVar33 = *(int *)(lVar28 + lVar18 * 4);
              piVar17 = (int *)(lVar29 + lVar14 * 4);
              piVar15 = (int *)(lVar3 + lVar14 * 4);
              do {
                lVar14 = (long)*piVar15;
                iVar34 = *piVar17;
                if ((*(byte *)(uVar13 + lVar14) & 1) == 0) {
                  *(undefined1 *)(uVar13 + lVar14) = 1;
                  *(int *)(lStack_88 + lVar14 * 4) = iVar34 * iVar33;
                  plStack_b8[lVar31] = lVar14;
                  lVar31 = lVar31 + 1;
                }
                else {
                  *(int *)(lStack_88 + lVar14 * 4) =
                       *(int *)(lStack_88 + lVar14 * 4) + iVar34 * iVar33;
                }
                lVar26 = lVar26 + -1;
                piVar17 = piVar17 + 1;
                piVar15 = piVar15 + 1;
              } while (lVar26 != 0);
            }
            lVar18 = lVar18 + 1;
          } while (lVar18 != lVar30);
          if (0 < lVar31) {
            lVar30 = *(long *)(lVar20 + 0x38) << 2;
            plVar19 = plStack_b8;
            lVar18 = *(long *)(lVar20 + 0x38);
            lStack_98 = lVar23;
            do {
              lVar29 = lVar18 + 1;
              plVar32 = plVar19 + 1;
              lStack_70 = *plVar19;
              uStack_74 = *(undefined4 *)(lStack_88 + lStack_70 * 4);
              lVar28 = *(long *)(lVar20 + 0x18) + lVar23 * 4;
              iVar33 = *(int *)(lVar28 + 4);
              lStack_80 = (long)iVar33;
              *(int *)(lVar28 + 4) = iVar33 + 1;
              if (*(long *)(lVar20 + 0x40) <= lVar18) {
                uVar27 = lVar29 + (long)(double)lVar29;
                if (0x7ffffffe < (long)uVar27) {
                  uVar27 = 0x7fffffff;
                }
                plStack_90 = plVar32;
                if ((long)uVar27 <= lVar18) {
                  ___cxa_allocate_exception(8);
                  __ZNSt9bad_allocC1Ev();
                  ___cxa_throw();
                  goto LAB_10997e0ec;
                }
                lVar23 = uVar27 << 2;
                if (uVar27 >> 0x3e != 0) {
                  lVar23 = -1;
                }
                lVar28 = lVar23;
                __Znam();
                __Znam();
                lVar20 = lStack_a0;
                lVar16 = *(long *)(lStack_a0 + 0x28);
                if (lVar18 < 1) {
                  lVar18 = *(long *)(lStack_a0 + 0x30);
                }
                else {
                  _memcpy(lVar28,lVar16,lVar30);
                  lVar18 = *(long *)(lVar20 + 0x30);
                  _memcpy(lVar23,lVar18,lVar30);
                }
                *(long *)(lVar20 + 0x28) = lVar28;
                *(long *)(lVar20 + 0x30) = lVar23;
                *(ulong *)(lVar20 + 0x40) = uVar27;
                if (lVar18 != 0) {
                  __ZdaPv(lVar18);
                }
                plVar32 = plStack_90;
                lVar23 = lStack_98;
                if (lVar16 != 0) {
                  __ZdaPv(lVar16);
                }
              }
              lVar18 = *(long *)(lVar20 + 0x28);
              lVar28 = *(long *)(lVar20 + 0x30);
              *(undefined4 *)(lVar18 + lVar30) = 0;
              *(int *)(lVar28 + lVar30) = (int)lStack_70;
              *(undefined4 *)(lVar18 + lStack_80 * 4) = uStack_74;
              *(long *)(lVar20 + 0x38) = lVar29;
              *(undefined1 *)(uVar13 + lStack_70) = 0;
              lVar30 = lVar30 + 4;
              lVar31 = lVar31 + -1;
              plVar19 = plVar32;
              lVar18 = lVar29;
            } while (lVar31 != 0);
          }
        }
        lVar23 = lVar23 + 1;
        lVar18 = lStack_88;
        lVar30 = lStack_a8;
      } while (lVar23 != lStack_b0);
    }
    lVar30 = alStack_d0[1];
    if ((*(long *)(lVar20 + 0x20) == 0) && (lVar23 = *(long *)(lVar20 + 8), -1 < lVar23)) {
      uVar5 = *(undefined4 *)(lVar20 + 0x38);
      lVar31 = lVar23;
      do {
        if (*(int *)(*(long *)(lVar20 + 0x18) + lVar31 * 4) != 0) goto LAB_10997dfec;
        bVar1 = 0 < lVar31;
        lVar31 = lVar31 + -1;
      } while (bVar1);
      lVar31 = -1;
LAB_10997dfec:
      lVar28 = lVar23 - lVar31;
      if (lVar28 != 0 && lVar31 <= lVar23) {
        puVar24 = (undefined4 *)(*(long *)(lVar20 + 0x18) + lVar31 * 4);
        do {
          puVar24 = puVar24 + 1;
          *puVar24 = uVar5;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
      }
    }
    if (0x4000 < (ulong)alStack_d0[1]) {
      _free(plStack_b8);
    }
    if (bVar11) {
      _free(lVar18);
    }
    if (0x20000 < (ulong)lVar30) {
      _free(uVar13);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
LAB_10997d97c:
    lVar30 = uVar27 << 2;
    _malloc();
    if (lVar30 == 0) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10997e0ec;
    }
    if (uVar27 >> 0x3d != 0) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10997e0ec;
    }
    bVar11 = true;
    lStack_88 = lVar30;
LAB_10997d9a0:
    plVar19 = (long *)(uVar27 << 3);
    _malloc();
    if (plVar19 != (long *)0x0) goto LAB_10997d9ac;
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10997e0ec:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x10997e0f0);
  (*pcVar12)();
}



/* Entry: 10997e1bc; end: 10997e4db;  */

long FUN_10997e1bc(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  undefined4 *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  
  lVar2 = *(long *)(param_2 + 8);
  uVar4 = *(ulong *)(param_2 + 0x10);
  lVar24 = uVar4 * 4;
  uVar10 = 1;
  _calloc(1,lVar24 + 4);
  if (uVar10 == 0) {
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_10997e490:
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10997e494);
    (*pcVar9)();
  }
  uVar11 = (ulong)-((uint)uVar10 >> 2) & 3;
  if ((long)uVar4 <= (long)uVar11) {
    uVar11 = uVar4;
  }
  uVar1 = uVar4;
  if ((uVar10 & 3) == 0) {
    uVar1 = uVar11;
  }
  uVar14 = uVar4 - uVar1;
  uVar11 = uVar14 + 3;
  if (-1 < (long)uVar14) {
    uVar11 = uVar14;
  }
  if ((long)((uVar11 & 0xfffffffffffffffc) + uVar1) < (long)uVar4) {
    _bzero(uVar10 + ((long)uVar11 >> 2) * 0x10 + uVar1 * 4,((long)uVar14 % 4) * 4);
  }
  if (0 < lVar2) {
    lVar12 = 0;
    lVar15 = *(long *)(param_2 + 0x30);
    lVar25 = *(long *)(param_2 + 0x18);
    lVar13 = *(long *)(param_2 + 0x20);
    do {
      piVar19 = (int *)(lVar25 + lVar12 * 4);
      lVar18 = (long)*piVar19;
      if (lVar13 == 0) {
        lVar16 = (long)piVar19[1];
      }
      else {
        lVar16 = *(int *)(lVar13 + lVar12 * 4) + lVar18;
      }
      lVar17 = lVar16 - lVar18;
      if (lVar17 != 0 && lVar18 <= lVar16) {
        piVar19 = (int *)(lVar15 + lVar18 * 4);
        do {
          *(int *)(uVar10 + (long)*piVar19 * 4) = *(int *)(uVar10 + (long)*piVar19 * 4) + 1;
          lVar17 = lVar17 + -1;
          piVar19 = piVar19 + 1;
        } while (lVar17 != 0);
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != lVar2);
  }
  if ((long)uVar4 < 1) {
    lVar12 = 0;
    lVar24 = 0;
    lVar13 = 0;
    lVar25 = 0;
    lVar15 = 0;
    *(undefined4 *)(uVar10 + uVar4 * 4) = 0;
  }
  else {
    if ((uVar4 >> 0x3e != 0) || (_malloc(), lVar24 == 0)) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10997e490;
    }
    uVar11 = 0;
    lVar12 = 0;
    do {
      iVar8 = *(int *)(uVar10 + uVar11 * 4);
      iVar26 = (int)lVar12;
      *(int *)(uVar10 + uVar11 * 4) = iVar26;
      *(int *)(lVar24 + uVar11 * 4) = iVar26;
      lVar12 = (long)iVar8 + (long)iVar26;
      uVar11 = uVar11 + 1;
    } while (uVar4 != uVar11);
    *(int *)(uVar10 + uVar4 * 4) = (int)lVar12;
    if ((int)lVar12 < 1) {
      lVar13 = 0;
      lVar25 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = lVar12 * 4;
      lVar25 = lVar15;
      __Znam();
      __Znam();
      lVar13 = lVar12;
    }
  }
  if (0 < lVar2) {
    lVar18 = 0;
    lVar16 = *(long *)(param_2 + 0x28);
    lVar5 = *(long *)(param_2 + 0x30);
    lVar17 = *(long *)(param_2 + 0x18);
    lVar6 = *(long *)(param_2 + 0x20);
    do {
      piVar19 = (int *)(lVar17 + lVar18 * 4);
      lVar23 = (long)*piVar19;
      if (lVar6 == 0) {
        lVar20 = (long)piVar19[1];
      }
      else {
        lVar20 = *(int *)(lVar6 + lVar18 * 4) + lVar23;
      }
      lVar21 = lVar20 - lVar23;
      if (lVar21 != 0 && lVar23 <= lVar20) {
        puVar22 = (undefined4 *)(lVar16 + lVar23 * 4);
        piVar19 = (int *)(lVar5 + lVar23 * 4);
        do {
          iVar8 = *(int *)(lVar24 + (long)*piVar19 * 4);
          *(int *)(lVar24 + (long)*piVar19 * 4) = iVar8 + 1;
          *(int *)(lVar15 + (long)iVar8 * 4) = (int)lVar18;
          *(undefined4 *)(lVar25 + (long)iVar8 * 4) = *puVar22;
          lVar21 = lVar21 + -1;
          puVar22 = puVar22 + 1;
          piVar19 = piVar19 + 1;
        } while (lVar21 != 0);
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 != lVar2);
  }
  *(ulong *)(param_1 + 8) = uVar4;
  *(long *)(param_1 + 0x10) = lVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  *(ulong *)(param_1 + 0x18) = uVar10;
  *(undefined8 *)(param_1 + 0x20) = 0;
  lVar2 = *(long *)(param_1 + 0x28);
  lVar18 = *(long *)(param_1 + 0x30);
  *(long *)(param_1 + 0x28) = lVar25;
  *(long *)(param_1 + 0x30) = lVar15;
  *(long *)(param_1 + 0x38) = lVar12;
  *(long *)(param_1 + 0x40) = lVar13;
  _free(lVar24);
  _free(uVar3);
  _free(uVar7);
  if (lVar2 != 0) {
    __ZdaPv(lVar2);
  }
  if (lVar18 != 0) {
    __ZdaPv(lVar18);
  }
  return param_1;
}



/* Entry: 10997e4dc; end: 10997eebb;  */

char * FUN_10997e4dc(char *param_1,char *param_2)

{
  bool bVar1;
  int *piVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long unaff_x28;
  ulong uStack_100;
  long lStack_d0;
  ulong uStack_b8;
  undefined1 auStack_b0 [8];
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  
  if (*param_2 == '\x01') {
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    *(undefined8 *)(param_2 + 0x10) = uVar11;
    *(undefined8 *)(param_2 + 0x18) = uVar4;
    uVar11 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = uVar11;
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = uVar11;
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = uVar11;
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    *(undefined8 *)(param_2 + 0x30) = uVar11;
    *(undefined8 *)(param_2 + 0x38) = uVar4;
    uVar11 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = uVar11;
    return param_1;
  }
  if (param_1 == param_2) {
    return param_1;
  }
  uVar19 = *(ulong *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  if (*(ulong *)(param_1 + 8) == uVar19 && *(ulong *)(param_1 + 8) != 0) {
LAB_10997e5b8:
    if (*(long *)(param_1 + 0x20) != 0) {
      _free();
      param_1[0x20] = '\0';
      param_1[0x21] = '\0';
      param_1[0x22] = '\0';
      param_1[0x23] = '\0';
      param_1[0x24] = '\0';
      param_1[0x25] = '\0';
      param_1[0x26] = '\0';
      param_1[0x27] = '\0';
      uVar19 = *(ulong *)(param_1 + 8);
    }
    _bzero(*(undefined8 *)(param_1 + 0x18),uVar19 * 4 + 4);
    if (*(long *)(param_1 + 0x20) != 0) {
      _free();
      param_1[0x20] = '\0';
      param_1[0x21] = '\0';
      param_1[0x22] = '\0';
      param_1[0x23] = '\0';
      param_1[0x24] = '\0';
      param_1[0x25] = '\0';
      param_1[0x26] = '\0';
      param_1[0x27] = '\0';
    }
    if (*(long *)(param_2 + 0x20) == 0) {
      if (*(long *)(param_1 + 8) != -1) {
        _memcpy(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18),
                *(long *)(param_1 + 8) * 4 + 4);
      }
      uVar19 = *(ulong *)(param_2 + 0x38);
      if ((long)uVar19 <= *(long *)(param_1 + 0x40)) {
LAB_10997eaf0:
        *(ulong *)(param_1 + 0x38) = uVar19;
        if ((uVar19 != 0) && (0 < *(long *)(param_2 + 0x38))) {
          _memcpy(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),uVar19 << 2);
          if (*(long *)(param_1 + 0x38) != 0) {
            _memcpy(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x30),
                    *(long *)(param_1 + 0x38) << 2);
          }
        }
        return param_1;
      }
      uVar25 = uVar19;
      if (0x7ffffffe < (long)uVar19) {
        uVar25 = 0x7fffffff;
      }
      if ((long)uVar19 < 0x80000000) {
        lVar12 = uVar25 << 2;
        if (uVar25 >> 0x3e != 0) {
          lVar12 = -1;
        }
        lVar16 = lVar12;
        __Znam();
        __Znam();
        uVar23 = *(ulong *)(param_1 + 0x38);
        if ((long)uVar25 <= (long)*(ulong *)(param_1 + 0x38)) {
          uVar23 = uVar25;
        }
        lVar20 = *(long *)(param_1 + 0x28);
        if ((long)uVar23 < 1) {
          lVar22 = *(long *)(param_1 + 0x30);
        }
        else {
          _memcpy(lVar16,lVar20,uVar23 << 2);
          lVar22 = *(long *)(param_1 + 0x30);
          _memcpy(lVar12,lVar22,uVar23 << 2);
        }
        *(long *)(param_1 + 0x28) = lVar16;
        *(long *)(param_1 + 0x30) = lVar12;
        *(ulong *)(param_1 + 0x40) = uVar25;
        if (lVar22 != 0) {
          __ZdaPv(lVar22);
        }
        if (lVar20 != 0) {
          __ZdaPv(lVar20);
        }
        goto LAB_10997eaf0;
      }
    }
    else {
      uVar25 = *(ulong *)(param_2 + 8);
      if (*param_2 != '\x01') {
        uVar19 = *(ulong *)(param_2 + 0x10);
        auStack_b0[0] = 0;
        uStack_a8 = 0;
        uStack_90 = 0;
        lStack_98 = 0;
        uStack_80 = 0;
        uStack_88 = 0;
        uStack_70 = 0;
        lStack_78 = 0;
        lVar12 = 1;
        uStack_a0 = uVar19;
        _calloc(1,uVar25 * 4 + 4);
        lStack_98 = lVar12;
        if (lVar12 != 0) {
          uVar23 = uVar25;
          if ((long)uVar25 <= (long)uVar19) {
            uVar23 = uVar19;
          }
          uStack_100 = uVar23 * 2;
          if ((long)(uVar19 * uVar25) <= (long)(uVar23 * 2)) {
            uStack_100 = uVar19 * uVar25;
          }
          uStack_a8 = uVar25;
          if ((long)uStack_100 < 1) {
            uVar19 = 0;
            uVar23 = 0;
            uStack_100 = 0;
          }
          else {
            uVar19 = uStack_100 << 2;
            if (uStack_100 >> 0x3e != 0) {
              uVar19 = 0xffffffffffffffff;
            }
            uVar23 = uVar19;
            __Znam();
            __Znam();
            uStack_80 = uVar19;
          }
          if ((long)uVar25 < 1) {
            lStack_d0 = 0;
            uVar19 = uStack_80;
          }
          else {
            uVar17 = 0;
            lStack_d0 = 0;
            do {
              puVar14 = (undefined4 *)(lVar12 + uVar17 * 4);
              puVar14[1] = *puVar14;
              piVar2 = (int *)(*(long *)(param_2 + 0x18) + uVar17 * 4);
              lVar16 = (long)*piVar2;
              if (*(long *)(param_2 + 0x20) == 0) {
                lVar20 = (long)piVar2[1];
              }
              else {
                lVar20 = *(int *)(*(long *)(param_2 + 0x20) + uVar17 * 4) + lVar16;
              }
              if (lVar16 < lVar20) {
                unaff_x28 = 0;
                lVar26 = *(long *)(param_2 + 0x28);
                lVar27 = *(long *)(param_2 + 0x30);
                lVar18 = lStack_d0 * 4;
                lVar22 = lVar18;
                uStack_b8 = uVar23;
                do {
                  lVar15 = lStack_d0 + unaff_x28;
                  uVar6 = *(undefined4 *)(lVar26 + lVar16 * 4 + unaff_x28 * 4);
                  uVar7 = *(undefined4 *)(lVar27 + lVar16 * 4 + unaff_x28 * 4);
                  iVar8 = *(int *)(lVar12 + 4 + uVar17 * 4);
                  *(int *)(lVar12 + 4 + uVar17 * 4) = iVar8 + 1;
                  uVar23 = uStack_b8;
                  if ((long)uStack_100 <= lVar15) {
                    lVar10 = lVar15 + (long)(double)(lVar15 + 1);
                    uVar3 = 0x7fffffff;
                    if (lVar10 + 1 < 0x7fffffff) {
                      uVar3 = lVar10 + 1;
                    }
                    if ((long)uVar3 <= lVar15) goto LAB_10997edb0;
                    uVar13 = uVar3 << 2;
                    if (uVar3 >> 0x3e != 0) {
                      uVar13 = 0xffffffffffffffff;
                    }
                    uVar23 = uVar13;
                    __Znam();
                    __Znam();
                    if (0 < lVar15) {
                      _memcpy(uVar23,uStack_b8,lVar22);
                      _memcpy(uVar13,uVar19,lVar22);
                    }
                    if (uVar19 != 0) {
                      __ZdaPv(uVar19);
                    }
                    uVar19 = uVar13;
                    uStack_100 = uVar3;
                    if (uStack_b8 != 0) {
                      __ZdaPv(uStack_b8);
                    }
                  }
                  *(undefined4 *)(uVar23 + lVar18 + unaff_x28 * 4) = 0;
                  *(undefined4 *)(uVar19 + lVar18 + unaff_x28 * 4) = uVar7;
                  *(undefined4 *)(uVar23 + (long)iVar8 * 4) = uVar6;
                  unaff_x28 = unaff_x28 + 1;
                  lVar22 = lVar22 + 4;
                  uStack_b8 = uVar23;
                } while (lVar20 - lVar16 != unaff_x28);
                lStack_d0 = lStack_d0 + unaff_x28;
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 != uVar25);
          }
          uStack_80 = uVar19;
          uVar19 = uVar25;
          if (-1 < (long)uVar25) {
            do {
              if (*(int *)(lVar12 + uVar19 * 4) != 0) goto LAB_10997ea68;
              bVar1 = 0 < (long)uVar19;
              uVar19 = uVar19 - 1;
            } while (bVar1);
            uVar19 = 0xffffffffffffffff;
LAB_10997ea68:
            lVar16 = uVar25 - uVar19;
            if (lVar16 != 0 && (long)uVar19 <= (long)uVar25) {
              puVar14 = (undefined4 *)(lVar12 + uVar19 * 4);
              do {
                puVar14 = puVar14 + 1;
                *puVar14 = (int)lStack_d0;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
          }
          auStack_b0[0] = 1;
          uStack_88 = uVar23;
          lStack_78 = lStack_d0;
          uStack_70 = uStack_100;
          FUN_10997e4dc(param_1,auStack_b0);
          _free(lStack_98);
          _free(uStack_90);
          if (uStack_88 != 0) {
            __ZdaPv();
          }
          if (uStack_80 == 0) {
            return param_1;
          }
          __ZdaPv();
          return param_1;
        }
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        goto LAB_10997ee10;
      }
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      param_1[0x38] = '\0';
      param_1[0x39] = '\0';
      param_1[0x3a] = '\0';
      param_1[0x3b] = '\0';
      param_1[0x3c] = '\0';
      param_1[0x3d] = '\0';
      param_1[0x3e] = '\0';
      param_1[0x3f] = '\0';
      uVar23 = uVar25;
      if ((*(ulong *)(param_1 + 8) == uVar25) && (*(ulong *)(param_1 + 8) != 0)) {
LAB_10997e7b0:
        _bzero(*(undefined8 *)(param_1 + 0x18),uVar23 * 4 + 4);
        param_1[0x38] = '\0';
        param_1[0x39] = '\0';
        param_1[0x3a] = '\0';
        param_1[0x3b] = '\0';
        param_1[0x3c] = '\0';
        param_1[0x3d] = '\0';
        param_1[0x3e] = '\0';
        param_1[0x3f] = '\0';
        _bzero(*(undefined8 *)(param_1 + 0x18),*(long *)(param_1 + 8) * 4 + 4);
        if (*(long *)(param_1 + 0x20) != 0) {
          _bzero(*(long *)(param_1 + 0x20),*(long *)(param_1 + 8) << 2);
        }
        lVar16 = *(long *)(param_2 + 8);
        lVar20 = *(long *)(param_2 + 0x10);
        lVar12 = lVar16;
        if (lVar16 <= lVar20) {
          lVar12 = lVar20;
        }
        lVar22 = lVar12 * 2;
        if (lVar20 * lVar16 <= lVar12 * 2) {
          lVar22 = lVar20 * lVar16;
        }
        uVar23 = *(ulong *)(param_1 + 0x38);
        uVar19 = lVar22 + uVar23;
        if (*(long *)(param_1 + 0x40) < (long)uVar19) {
          lVar12 = uVar19 * 4;
          if (uVar19 >> 0x3e != 0) {
            lVar12 = -1;
          }
          lVar16 = lVar12;
          __Znam();
          __Znam();
          if ((long)uVar19 <= (long)uVar23) {
            uVar23 = uVar19;
          }
          lVar20 = *(long *)(param_1 + 0x28);
          if ((long)uVar23 < 1) {
            lVar22 = *(long *)(param_1 + 0x30);
          }
          else {
            _memcpy(lVar16,lVar20,uVar23 << 2);
            lVar22 = *(long *)(param_1 + 0x30);
            _memcpy(lVar12,lVar22,uVar23 << 2);
          }
          *(long *)(param_1 + 0x28) = lVar16;
          *(long *)(param_1 + 0x30) = lVar12;
          *(ulong *)(param_1 + 0x40) = uVar19;
          if (lVar22 != 0) {
            __ZdaPv(lVar22);
          }
          if (lVar20 != 0) {
            __ZdaPv(lVar20);
          }
        }
        if (0 < (long)uVar25) {
          uVar19 = 0;
          do {
            puVar14 = (undefined4 *)(*(long *)(param_1 + 0x18) + uVar19 * 4);
            puVar14[1] = *puVar14;
            piVar2 = (int *)(*(long *)(param_2 + 0x18) + uVar19 * 4);
            lVar12 = (long)*piVar2;
            if (*(long *)(param_2 + 0x20) == 0) {
              lVar16 = (long)piVar2[1];
            }
            else {
              lVar16 = *(int *)(*(long *)(param_2 + 0x20) + uVar19 * 4) + lVar12;
            }
            if (lVar12 < lVar16) {
              unaff_x28 = 0;
              lVar26 = *(long *)(param_1 + 0x38);
              lVar27 = lVar26 * 4;
              lVar22 = *(long *)(param_2 + 0x28);
              lStack_d0 = *(long *)(param_2 + 0x30) + lVar12 * 4;
              lVar20 = lVar27;
              do {
                lVar18 = lVar26 + unaff_x28;
                uVar6 = *(undefined4 *)(lVar22 + lVar12 * 4 + unaff_x28 * 4);
                uVar7 = *(undefined4 *)(lStack_d0 + unaff_x28 * 4);
                uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar6);
                lVar15 = *(long *)(param_1 + 0x18) + uVar19 * 4;
                iVar8 = *(int *)(lVar15 + 4);
                *(int *)(lVar15 + 4) = iVar8 + 1;
                if (*(long *)(param_1 + 0x40) <= lVar18) {
                  lVar15 = lVar18 + (long)(double)(lVar18 + 1);
                  uVar23 = 0x7fffffff;
                  if (lVar15 + 1 < 0x7fffffff) {
                    uVar23 = lVar15 + 1;
                  }
                  if ((long)uVar23 <= lVar18) goto LAB_10997ed90;
                  lVar15 = uVar23 << 2;
                  if (uVar23 >> 0x3e != 0) {
                    lVar15 = -1;
                  }
                  lVar10 = lVar15;
                  __Znam();
                  __Znam();
                  lVar21 = *(long *)(param_1 + 0x28);
                  if (lVar18 < 1) {
                    lVar24 = *(long *)(param_1 + 0x30);
                  }
                  else {
                    _memcpy(lVar10,lVar21,lVar20);
                    lVar24 = *(long *)(param_1 + 0x30);
                    _memcpy(lVar15,lVar24,lVar20);
                  }
                  *(long *)(param_1 + 0x28) = lVar10;
                  *(long *)(param_1 + 0x30) = lVar15;
                  *(ulong *)(param_1 + 0x40) = uVar23;
                  if (lVar24 != 0) {
                    __ZdaPv(lVar24);
                  }
                  if (lVar21 != 0) {
                    __ZdaPv(lVar21);
                  }
                }
                lVar15 = *(long *)(param_1 + 0x28);
                lVar10 = *(long *)(param_1 + 0x30);
                *(undefined4 *)(lVar15 + lVar27 + unaff_x28 * 4) = 0;
                *(undefined4 *)(lVar10 + lVar27 + unaff_x28 * 4) = uVar7;
                *(long *)(param_1 + 0x38) = lVar18 + 1;
                *(undefined4 *)(lVar15 + (long)iVar8 * 4) = uVar6;
                lVar20 = lVar20 + 4;
                unaff_x28 = unaff_x28 + 1;
              } while (lVar16 - lVar12 != unaff_x28);
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 != uVar25);
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          return param_1;
        }
        lVar12 = *(long *)(param_1 + 8);
        if (lVar12 < 0) {
          return param_1;
        }
        uVar6 = *(undefined4 *)(param_1 + 0x38);
        lVar16 = lVar12;
        do {
          if (*(int *)(*(long *)(param_1 + 0x18) + lVar16 * 4) != 0) goto LAB_10997ed70;
          bVar1 = 0 < lVar16;
          lVar16 = lVar16 + -1;
        } while (bVar1);
        lVar16 = -1;
LAB_10997ed70:
        lVar20 = lVar12 - lVar16;
        if (lVar20 == 0 || lVar12 < lVar16) {
          return param_1;
        }
        puVar14 = (undefined4 *)(*(long *)(param_1 + 0x18) + lVar16 * 4);
        do {
          puVar14 = puVar14 + 1;
          *puVar14 = uVar6;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        return param_1;
      }
      _free(*(undefined8 *)(param_1 + 0x18));
      lVar12 = uVar25 * 4 + 4;
      _malloc();
      *(long *)(param_1 + 0x18) = lVar12;
      if (lVar12 != 0) {
        *(ulong *)(param_1 + 8) = uVar25;
        if (*(long *)(param_1 + 0x20) != 0) {
          _free();
          param_1[0x20] = '\0';
          param_1[0x21] = '\0';
          param_1[0x22] = '\0';
          param_1[0x23] = '\0';
          param_1[0x24] = '\0';
          param_1[0x25] = '\0';
          param_1[0x26] = '\0';
          param_1[0x27] = '\0';
          uVar23 = *(ulong *)(param_1 + 8);
        }
        goto LAB_10997e7b0;
      }
    }
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x18));
    lVar12 = uVar19 * 4 + 4;
    _malloc();
    *(long *)(param_1 + 0x18) = lVar12;
    if (lVar12 != 0) {
      *(ulong *)(param_1 + 8) = uVar19;
      goto LAB_10997e5b8;
    }
  }
LAB_10997ed90:
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10997edb0:
  lStack_78 = lStack_d0 + unaff_x28;
  uStack_70 = uStack_100;
  uStack_88 = uStack_b8;
  uStack_80 = uVar19;
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10997ee10:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10997ee14);
  (*pcVar9)();
}



/* Entry: 10997eebc; end: 10997ef03;  */

long FUN_10997eebc(long param_1)

{
  _free(*(undefined8 *)(param_1 + 0x28));
  _free(*(undefined8 *)(param_1 + 0x30));
  if (*(long *)(param_1 + 0x38) != 0) {
    __ZdaPv();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 10997ef04; end: 10997f78b;  */

void FUN_10997ef04(long param_1,char *param_2)

{
  bool bVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lStack_120;
  ulong uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined1 *puStack_c8;
  undefined4 uStack_c0;
  undefined1 auStack_b8 [8];
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puStack_c8 = (undefined1 *)0x0;
  uStack_c0 = 0;
  lVar21 = *(long *)(param_2 + 0x18);
  uStack_a8 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 8);
  lVar18 = *(long *)(lVar21 + 8);
  auStack_b8[0] = 0;
  lStack_b0 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lVar9 = 1;
  _calloc(1,lVar18 * 4 + 4);
  lStack_a0 = lVar9;
  if (lVar9 == 0) {
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_10997f6dc:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10997f6e0);
    (*pcVar8)();
  }
  puStack_c8 = auStack_b8;
  uStack_c0 = 0;
  lStack_108 = *(long *)(param_2 + 0x10);
  uStack_110 = *(ulong *)(param_2 + 8);
  lStack_b0 = lVar18;
  FUN_10997d6f8(&uStack_110,lVar21,puStack_c8);
  lVar21 = *(long *)(*(long *)(param_2 + 0x18) + 8);
  if (*param_2 == '\x01') {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(*(long *)(param_2 + 0x10) + 8);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if ((*(long *)(param_1 + 8) != lVar21) || (*(long *)(param_1 + 8) == 0)) {
      _free(*(undefined8 *)(param_1 + 0x18));
      lVar9 = lVar21 * 4 + 4;
      _malloc();
      *(long *)(param_1 + 0x18) = lVar9;
      if (lVar9 == 0) {
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        goto LAB_10997f6dc;
      }
      *(long *)(param_1 + 8) = lVar21;
    }
    lVar9 = lVar21;
    if (*(long *)(param_1 + 0x20) != 0) {
      _free();
      *(undefined8 *)(param_1 + 0x20) = 0;
      lVar9 = *(long *)(param_1 + 8);
    }
    _bzero(*(undefined8 *)(param_1 + 0x18),lVar9 * 4 + 4);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _bzero(*(undefined8 *)(param_1 + 0x18),*(long *)(param_1 + 8) * 4 + 4);
    if (*(long *)(param_1 + 0x20) != 0) {
      _bzero(*(long *)(param_1 + 0x20),*(long *)(param_1 + 8) << 2);
    }
    lVar18 = *(long *)(*(long *)(param_2 + 0x10) + 8);
    lVar14 = *(long *)(*(long *)(param_2 + 0x18) + 8);
    lVar9 = lVar18;
    if (lVar18 <= lVar14) {
      lVar9 = lVar14;
    }
    lVar19 = lVar9 * 2;
    if (lVar14 * lVar18 <= lVar9 * 2) {
      lVar19 = lVar14 * lVar18;
    }
    uVar4 = *(ulong *)(param_1 + 0x38);
    uVar2 = lVar19 + uVar4;
    if (*(long *)(param_1 + 0x40) < (long)uVar2) {
      lVar9 = uVar2 * 4;
      if (uVar2 >> 0x3e != 0) {
        lVar9 = -1;
      }
      lVar18 = lVar9;
      __Znam();
      __Znam();
      if ((long)uVar2 <= (long)uVar4) {
        uVar4 = uVar2;
      }
      lVar14 = *(long *)(param_1 + 0x28);
      if ((long)uVar4 < 1) {
        lVar19 = *(long *)(param_1 + 0x30);
      }
      else {
        _memcpy(lVar18,lVar14,uVar4 << 2);
        lVar19 = *(long *)(param_1 + 0x30);
        _memcpy(lVar9,lVar19,uVar4 << 2);
      }
      *(long *)(param_1 + 0x28) = lVar18;
      *(long *)(param_1 + 0x30) = lVar9;
      *(ulong *)(param_1 + 0x40) = uVar2;
      if (lVar19 != 0) {
        __ZdaPv(lVar19);
      }
      if (lVar14 != 0) {
        __ZdaPv(lVar14);
      }
    }
    if (0 < lVar21) {
      lVar9 = 0;
      do {
        puVar11 = (undefined4 *)(*(long *)(param_1 + 0x18) + lVar9 * 4);
        puVar11[1] = *puVar11;
        piVar3 = (int *)(*(long *)(puStack_c8 + 0x18) + lVar9 * 4);
        lVar18 = (long)*piVar3;
        if (*(long *)(puStack_c8 + 0x20) == 0) {
          lVar14 = (long)piVar3[1];
        }
        else {
          lVar14 = *(int *)(*(long *)(puStack_c8 + 0x20) + lVar9 * 4) + lVar18;
        }
        if (lVar18 < lVar14) {
          lVar24 = 0;
          lVar22 = *(long *)(param_1 + 0x38);
          lVar15 = lVar22 * 4;
          lVar16 = *(long *)(puStack_c8 + 0x28);
          lVar23 = *(long *)(puStack_c8 + 0x30);
          lVar19 = lVar15;
          do {
            lVar13 = lVar22 + lVar24;
            uVar5 = *(undefined4 *)(lVar16 + lVar18 * 4 + lVar24 * 4);
            uVar6 = *(undefined4 *)(lVar23 + lVar18 * 4 + lVar24 * 4);
            lVar12 = *(long *)(param_1 + 0x18) + lVar9 * 4;
            iVar7 = *(int *)(lVar12 + 4);
            *(int *)(lVar12 + 4) = iVar7 + 1;
            if (*(long *)(param_1 + 0x40) <= lVar13) {
              lVar12 = lVar13 + (long)(double)(lVar13 + 1);
              uVar2 = 0x7fffffff;
              if (lVar12 + 1 < 0x7fffffff) {
                uVar2 = lVar12 + 1;
              }
              if ((long)uVar2 <= lVar13) {
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_10997f6dc;
              }
              lVar12 = uVar2 << 2;
              if (uVar2 >> 0x3e != 0) {
                lVar12 = -1;
              }
              lVar10 = lVar12;
              __Znam();
              __Znam();
              lVar17 = *(long *)(param_1 + 0x28);
              if (lVar13 < 1) {
                lVar20 = *(long *)(param_1 + 0x30);
              }
              else {
                _memcpy(lVar10,lVar17,lVar19);
                lVar20 = *(long *)(param_1 + 0x30);
                _memcpy(lVar12,lVar20,lVar19);
              }
              *(long *)(param_1 + 0x28) = lVar10;
              *(long *)(param_1 + 0x30) = lVar12;
              *(ulong *)(param_1 + 0x40) = uVar2;
              if (lVar20 != 0) {
                __ZdaPv(lVar20);
              }
              if (lVar17 != 0) {
                __ZdaPv(lVar17);
              }
            }
            *(long *)(param_1 + 0x38) = lVar13 + 1;
            lVar13 = *(long *)(param_1 + 0x28);
            *(undefined4 *)(lVar13 + lVar15 + lVar24 * 4) = 0;
            *(undefined4 *)(*(long *)(param_1 + 0x30) + lVar15 + lVar24 * 4) = uVar6;
            *(undefined4 *)(lVar13 + (long)iVar7 * 4) = uVar5;
            lVar19 = lVar19 + 4;
            lVar24 = lVar24 + 1;
          } while (lVar14 - lVar18 != lVar24);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != lVar21);
    }
    if ((*(long *)(param_1 + 0x20) == 0) && (lVar21 = *(long *)(param_1 + 8), -1 < lVar21)) {
      uVar5 = *(undefined4 *)(param_1 + 0x38);
      lVar9 = lVar21;
      do {
        if (*(int *)(*(long *)(param_1 + 0x18) + lVar9 * 4) != 0) goto LAB_10997f60c;
        bVar1 = 0 < lVar9;
        lVar9 = lVar9 + -1;
      } while (bVar1);
      lVar9 = -1;
LAB_10997f60c:
      lVar18 = lVar21 - lVar9;
      if (lVar18 != 0 && lVar9 <= lVar21) {
        puVar11 = (undefined4 *)(*(long *)(param_1 + 0x18) + lVar9 * 4);
        do {
          puVar11 = puVar11 + 1;
          *puVar11 = uVar5;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
    }
    goto LAB_10997f598;
  }
  lVar18 = *(long *)(*(long *)(param_2 + 0x10) + 8);
  uStack_110 = uStack_110 & 0xffffffffffffff00;
  lStack_108 = 0;
  lStack_f0 = 0;
  lStack_f8 = 0;
  lStack_e0 = 0;
  lStack_e8 = 0;
  uStack_d0 = 0;
  lStack_d8 = 0;
  lVar9 = 1;
  lStack_100 = lVar18;
  _calloc(1,lVar21 * 4 + 4);
  lStack_f8 = lVar9;
  if (lVar9 == 0) {
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
    goto LAB_10997f6dc;
  }
  lVar9 = lVar18;
  if (lVar18 <= lVar21) {
    lVar9 = lVar21;
  }
  uVar2 = lVar9 * 2;
  if (lVar18 * lVar21 <= lVar9 * 2) {
    uVar2 = lVar18 * lVar21;
  }
  lStack_108 = lVar21;
  if ((long)uVar2 < 1) {
    lStack_120 = 0;
    lVar9 = 0;
  }
  else {
    lStack_120 = uVar2 << 2;
    if (uVar2 >> 0x3e != 0) {
      lStack_120 = -1;
    }
    lVar9 = lStack_120;
    __Znam();
    __Znam();
    lStack_e8 = lVar9;
    lStack_e0 = lStack_120;
    uStack_d0 = uVar2;
  }
  if (lVar21 < 1) {
    lVar18 = 0;
joined_r0x00010997f348:
    lVar9 = lVar21;
    if (-1 < lVar21) {
      do {
        if (*(int *)(lStack_f8 + lVar9 * 4) != 0) goto LAB_10997f36c;
        bVar1 = 0 < lVar9;
        lVar9 = lVar9 + -1;
      } while (bVar1);
      lVar9 = -1;
LAB_10997f36c:
      lVar14 = lVar21 - lVar9;
      if (lVar14 != 0 && lVar9 <= lVar21) {
        puVar11 = (undefined4 *)(lStack_f8 + lVar9 * 4);
        do {
          puVar11 = puVar11 + 1;
          *puVar11 = (int)lVar18;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
    }
  }
  else {
    lVar18 = 0;
    lVar14 = 0;
    do {
      puVar11 = (undefined4 *)(lStack_f8 + lVar14 * 4);
      puVar11[1] = *puVar11;
      piVar3 = (int *)(*(long *)(puStack_c8 + 0x18) + lVar14 * 4);
      lVar19 = (long)*piVar3;
      if (*(long *)(puStack_c8 + 0x20) == 0) {
        lVar24 = (long)piVar3[1];
      }
      else {
        lVar24 = *(int *)(*(long *)(puStack_c8 + 0x20) + lVar14 * 4) + lVar19;
      }
      if (lVar19 < lVar24) {
        lVar23 = 0;
        lVar13 = lVar18 * 4;
        lVar15 = *(long *)(puStack_c8 + 0x28);
        lVar22 = *(long *)(puStack_c8 + 0x30);
        lVar16 = lVar13;
        do {
          lVar10 = lVar18 + lVar23;
          uVar5 = *(undefined4 *)(lVar15 + lVar19 * 4 + lVar23 * 4);
          uVar6 = *(undefined4 *)(lVar22 + lVar19 * 4 + lVar23 * 4);
          lVar12 = lStack_f8 + lVar14 * 4;
          iVar7 = *(int *)(lVar12 + 4);
          *(int *)(lVar12 + 4) = iVar7 + 1;
          lVar12 = lVar10 + 1;
          if ((long)uStack_d0 <= lVar10) {
            uVar2 = 0x7fffffff;
            if (lVar10 + (long)(double)lVar12 + 1 < 0x7fffffff) {
              uVar2 = lVar10 + (long)(double)lVar12 + 1;
            }
            if ((long)uVar2 <= lVar10) {
              ___cxa_allocate_exception(8);
              __ZNSt9bad_allocC1Ev();
              ___cxa_throw();
              goto LAB_10997f6dc;
            }
            lVar17 = uVar2 << 2;
            if (uVar2 >> 0x3e != 0) {
              lVar17 = -1;
            }
            lVar20 = lVar17;
            __Znam();
            __Znam();
            if (0 < lVar10) {
              _memcpy(lVar20,lVar9,lVar16);
              _memcpy(lVar17,lStack_120,lVar16);
            }
            lStack_e8 = lVar20;
            lStack_e0 = lVar17;
            uStack_d0 = uVar2;
            if (lStack_120 != 0) {
              __ZdaPv(lStack_120);
            }
            if (lVar9 != 0) {
              __ZdaPv(lVar9);
            }
          }
          lStack_120 = lStack_e0;
          *(undefined4 *)(lStack_e8 + lVar13 + lVar23 * 4) = 0;
          *(undefined4 *)(lStack_e0 + lVar13 + lVar23 * 4) = uVar6;
          *(undefined4 *)(lStack_e8 + (long)iVar7 * 4) = uVar5;
          lVar16 = lVar16 + 4;
          lVar23 = lVar23 + 1;
          lVar9 = lStack_e8;
          lStack_d8 = lVar12;
        } while (lVar24 - lVar19 != lVar23);
        lVar18 = lVar18 + lVar23;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != lVar21);
    lVar21 = lStack_108;
    if (lStack_f0 == 0) goto joined_r0x00010997f348;
  }
  uStack_110 = CONCAT71(uStack_110._1_7_,1);
  FUN_10997cc60(param_1,&uStack_110);
  _free(lStack_f8);
  _free(lStack_f0);
  if (lStack_e8 != 0) {
    __ZdaPv();
  }
  if (lStack_e0 != 0) {
    __ZdaPv();
  }
LAB_10997f598:
  _free(lStack_a0);
  _free(uStack_98);
  if (lStack_90 != 0) {
    __ZdaPv();
  }
  if (lStack_88 != 0) {
    __ZdaPv();
  }
  return;
}



/* Entry: 10997f78c; end: 10997f7d3;  */

long FUN_10997f78c(long param_1)

{
  _free(*(undefined8 *)(param_1 + 0x28));
  _free(*(undefined8 *)(param_1 + 0x30));
  if (*(long *)(param_1 + 0x38) != 0) {
    __ZdaPv();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 10997f7d4; end: 1099800fb;  */

void FUN_10997f7d4(long param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  bool bVar11;
  code *pcVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long extraout_x8;
  int *piVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  undefined4 *puVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  long *plVar31;
  long lVar32;
  long lVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar40;
  int iVar41;
  int iVar42;
  undefined1 auVar39 [16];
  long alStack_d0 [3];
  long *plStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  undefined4 uStack_6c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar28 = *(ulong *)(param_1 + 0x10);
  lStack_b0 = *(long *)(param_2 + 8);
  alStack_d0[1] = uVar28;
  if (0x20000 < uVar28) {
    uVar13 = uVar28;
    _malloc();
    if (uVar13 == 0) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
    }
    else if (uVar28 >> 0x3e == 0) goto LAB_10997f8f4;
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
    goto LAB_10998004c;
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = -(uVar28 + 0x1e & 0xfffffffffffffff0);
  uVar13 = (long)alStack_d0 + lVar14;
  lVar21 = uVar28 << 2;
  if (uVar28 < 0x8001) {
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar14 = (long)alStack_d0 + (lVar14 - (lVar21 + 0x1eU & 0xfffffffffffffff0));
    lVar21 = uVar28 << 3;
    if (0x4000 < uVar28) {
      bVar11 = false;
      goto LAB_10997f91c;
    }
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    plVar20 = (long *)(lVar14 - (lVar21 + 0x1eU & 0xfffffffffffffff0));
    bVar11 = false;
    lVar14 = extraout_x8;
LAB_10997f928:
    _bzero(uVar13,uVar28);
    piVar18 = *(int **)(param_1 + 0x20);
    if (piVar18 == (int *)0x0) {
      lVar21 = (long)(*(int **)(param_1 + 0x18))[*(long *)(param_1 + 8)] -
               (long)**(int **)(param_1 + 0x18);
    }
    else {
      uVar28 = *(ulong *)(param_1 + 8);
      if (uVar28 == 0) {
        lVar21 = 0;
      }
      else {
        uVar22 = (ulong)-((uint)piVar18 >> 2) & 3;
        if ((long)uVar28 <= (long)uVar22) {
          uVar22 = uVar28;
        }
        uVar23 = uVar28;
        if (((ulong)piVar18 & 3) == 0) {
          uVar23 = uVar22;
        }
        uVar6 = uVar28 - uVar23;
        uVar22 = uVar6 + 3;
        uVar10 = uVar6 + 7;
        if ((long)uVar23 <= (long)uVar28) {
          uVar22 = uVar6;
          uVar10 = uVar6;
        }
        if (uVar6 + 3 < 7) {
          iVar34 = *piVar18;
          if (1 < (long)uVar28) {
            lVar21 = uVar28 - 1;
            do {
              piVar18 = piVar18 + 1;
              iVar34 = *piVar18 + iVar34;
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
          }
        }
        else {
          piVar17 = piVar18 + uVar23;
          iVar36 = (int)*(undefined8 *)(piVar17 + 2);
          iVar37 = (int)((ulong)*(undefined8 *)(piVar17 + 2) >> 0x20);
          iVar34 = (int)*(undefined8 *)piVar17;
          iVar35 = (int)((ulong)*(undefined8 *)piVar17 >> 0x20);
          if (7 < (long)uVar6) {
            lVar21 = (uVar10 & 0xfffffffffffffff8) + uVar23;
            iVar38 = piVar17[4];
            iVar40 = piVar17[5];
            iVar41 = piVar17[6];
            iVar42 = piVar17[7];
            if (0xf < uVar6) {
              lVar24 = uVar23 + 8;
              piVar17 = piVar17 + 0xc;
              do {
                iVar34 = (int)*(undefined8 *)(piVar17 + -4) + iVar34;
                iVar35 = (int)((ulong)*(undefined8 *)(piVar17 + -4) >> 0x20) + iVar35;
                iVar36 = (int)*(undefined8 *)(piVar17 + -2) + iVar36;
                iVar37 = (int)((ulong)*(undefined8 *)(piVar17 + -2) >> 0x20) + iVar37;
                iVar38 = (int)*(undefined8 *)piVar17 + iVar38;
                iVar40 = (int)((ulong)*(undefined8 *)piVar17 >> 0x20) + iVar40;
                iVar41 = (int)*(undefined8 *)(piVar17 + 2) + iVar41;
                iVar42 = (int)((ulong)*(undefined8 *)(piVar17 + 2) >> 0x20) + iVar42;
                lVar24 = lVar24 + 8;
                piVar17 = piVar17 + 8;
              } while (lVar24 < lVar21);
            }
            iVar34 = iVar34 + iVar38;
            iVar35 = iVar35 + iVar40;
            iVar36 = iVar36 + iVar41;
            iVar37 = iVar37 + iVar42;
            if ((long)(uVar10 & 0xfffffffffffffff8) < (long)(uVar22 & 0xfffffffffffffffc)) {
              piVar17 = piVar18 + lVar21;
              iVar34 = *piVar17 + iVar34;
              iVar35 = piVar17[1] + iVar35;
              iVar36 = piVar17[2] + iVar36;
              iVar37 = piVar17[3] + iVar37;
            }
          }
          lVar21 = (uVar22 & 0xfffffffffffffffc) + uVar23;
          auVar39._4_4_ = iVar35;
          auVar39._0_4_ = iVar34;
          auVar39._8_4_ = iVar36;
          auVar39._12_4_ = iVar37;
          auVar9._4_4_ = iVar35;
          auVar9._0_4_ = iVar34;
          auVar9._8_4_ = iVar36;
          auVar9._12_4_ = iVar37;
          auVar39 = NEON_ext(auVar39,auVar9,8,1);
          iVar34 = iVar34 + auVar39._0_4_ + iVar35 + auVar39._4_4_;
          piVar17 = piVar18;
          if (0 < (long)uVar23) {
            do {
              iVar34 = *piVar17 + iVar34;
              uVar23 = uVar23 - 1;
              piVar17 = piVar17 + 1;
            } while (uVar23 != 0);
          }
          for (; lVar21 < (long)uVar28; lVar21 = lVar21 + 1) {
            iVar34 = piVar18[lVar21] + iVar34;
          }
        }
        lVar21 = (long)iVar34;
      }
    }
    piVar18 = *(int **)(param_2 + 0x20);
    if (piVar18 == (int *)0x0) {
      lVar24 = (long)(*(int **)(param_2 + 0x18))[*(long *)(param_2 + 8)] -
               (long)**(int **)(param_2 + 0x18);
    }
    else {
      uVar28 = *(ulong *)(param_2 + 8);
      if (uVar28 == 0) {
        lVar24 = 0;
      }
      else {
        uVar22 = (ulong)-((uint)piVar18 >> 2) & 3;
        if ((long)uVar28 <= (long)uVar22) {
          uVar22 = uVar28;
        }
        uVar23 = uVar28;
        if (((ulong)piVar18 & 3) == 0) {
          uVar23 = uVar22;
        }
        uVar6 = uVar28 - uVar23;
        uVar22 = uVar6 + 3;
        uVar10 = uVar6 + 7;
        if ((long)uVar23 <= (long)uVar28) {
          uVar22 = uVar6;
          uVar10 = uVar6;
        }
        if (uVar6 + 3 < 7) {
          iVar34 = *piVar18;
          if (1 < (long)uVar28) {
            lVar24 = uVar28 - 1;
            do {
              piVar18 = piVar18 + 1;
              iVar34 = *piVar18 + iVar34;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
          }
        }
        else {
          piVar17 = piVar18 + uVar23;
          iVar36 = (int)*(undefined8 *)(piVar17 + 2);
          iVar37 = (int)((ulong)*(undefined8 *)(piVar17 + 2) >> 0x20);
          iVar34 = (int)*(undefined8 *)piVar17;
          iVar35 = (int)((ulong)*(undefined8 *)piVar17 >> 0x20);
          if (7 < (long)uVar6) {
            lVar24 = (uVar10 & 0xfffffffffffffff8) + uVar23;
            iVar38 = piVar17[4];
            iVar40 = piVar17[5];
            iVar41 = piVar17[6];
            iVar42 = piVar17[7];
            if (0xf < uVar6) {
              lVar19 = uVar23 + 8;
              piVar17 = piVar17 + 0xc;
              do {
                iVar34 = (int)*(undefined8 *)(piVar17 + -4) + iVar34;
                iVar35 = (int)((ulong)*(undefined8 *)(piVar17 + -4) >> 0x20) + iVar35;
                iVar36 = (int)*(undefined8 *)(piVar17 + -2) + iVar36;
                iVar37 = (int)((ulong)*(undefined8 *)(piVar17 + -2) >> 0x20) + iVar37;
                iVar38 = (int)*(undefined8 *)piVar17 + iVar38;
                iVar40 = (int)((ulong)*(undefined8 *)piVar17 >> 0x20) + iVar40;
                iVar41 = (int)*(undefined8 *)(piVar17 + 2) + iVar41;
                iVar42 = (int)((ulong)*(undefined8 *)(piVar17 + 2) >> 0x20) + iVar42;
                lVar19 = lVar19 + 8;
                piVar17 = piVar17 + 8;
              } while (lVar19 < lVar24);
            }
            iVar34 = iVar34 + iVar38;
            iVar35 = iVar35 + iVar40;
            iVar36 = iVar36 + iVar41;
            iVar37 = iVar37 + iVar42;
            if ((long)(uVar10 & 0xfffffffffffffff8) < (long)(uVar22 & 0xfffffffffffffffc)) {
              piVar17 = piVar18 + lVar24;
              iVar34 = *piVar17 + iVar34;
              iVar35 = piVar17[1] + iVar35;
              iVar36 = piVar17[2] + iVar36;
              iVar37 = piVar17[3] + iVar37;
            }
          }
          lVar24 = (uVar22 & 0xfffffffffffffffc) + uVar23;
          auVar7._4_4_ = iVar35;
          auVar7._0_4_ = iVar34;
          auVar7._8_4_ = iVar36;
          auVar7._12_4_ = iVar37;
          auVar8._4_4_ = iVar35;
          auVar8._0_4_ = iVar34;
          auVar8._8_4_ = iVar36;
          auVar8._12_4_ = iVar37;
          auVar39 = NEON_ext(auVar7,auVar8,8,1);
          iVar34 = iVar34 + auVar39._0_4_ + iVar35 + auVar39._4_4_;
          piVar17 = piVar18;
          if (0 < (long)uVar23) {
            do {
              iVar34 = *piVar17 + iVar34;
              uVar23 = uVar23 - 1;
              piVar17 = piVar17 + 1;
            } while (uVar23 != 0);
          }
          for (; lVar24 < (long)uVar28; lVar24 = lVar24 + 1) {
            iVar34 = piVar18[lVar24] + iVar34;
          }
        }
        lVar24 = (long)iVar34;
      }
    }
    *(undefined8 *)(param_3 + 0x38) = 0;
    plStack_b8 = plVar20;
    _bzero(*(undefined8 *)(param_3 + 0x18),*(long *)(param_3 + 8) * 4 + 4);
    if (*(long *)(param_3 + 0x20) != 0) {
      _bzero(*(long *)(param_3 + 0x20),*(long *)(param_3 + 8) << 2);
    }
    uVar22 = *(ulong *)(param_3 + 0x38);
    uVar28 = lVar24 + lVar21 + uVar22;
    alStack_d0[2] = param_1;
    lStack_a8 = param_2;
    lStack_a0 = param_3;
    if (*(long *)(param_3 + 0x40) < (long)uVar28) {
      lVar21 = uVar28 * 4;
      if (uVar28 >> 0x3e != 0) {
        lVar21 = -1;
      }
      lVar19 = lVar21;
      __Znam();
      __Znam();
      lVar24 = lStack_a0;
      if ((long)uVar28 <= (long)uVar22) {
        uVar22 = uVar28;
      }
      lVar32 = *(long *)(lStack_a0 + 0x28);
      if ((long)uVar22 < 1) {
        lVar29 = *(long *)(lStack_a0 + 0x30);
      }
      else {
        _memcpy(lVar19,lVar32,uVar22 << 2);
        param_2 = lStack_a8;
        lVar29 = *(long *)(lVar24 + 0x30);
        _memcpy(lVar21,lVar29,uVar22 << 2);
      }
      *(long *)(lVar24 + 0x28) = lVar19;
      *(long *)(lVar24 + 0x30) = lVar21;
      *(ulong *)(lVar24 + 0x40) = uVar28;
      if (lVar29 != 0) {
        __ZdaPv(lVar29);
      }
      if (lVar32 != 0) {
        __ZdaPv(lVar32);
      }
    }
    lVar21 = lStack_a0;
    if (0 < lStack_b0) {
      lVar24 = 0;
      do {
        puVar25 = (undefined4 *)(*(long *)(lVar21 + 0x18) + lVar24 * 4);
        puVar25[1] = *puVar25;
        piVar18 = (int *)(*(long *)(param_2 + 0x18) + lVar24 * 4);
        lVar19 = (long)*piVar18;
        if (*(long *)(param_2 + 0x20) == 0) {
          lVar32 = (long)piVar18[1];
        }
        else {
          lVar32 = *(int *)(*(long *)(param_2 + 0x20) + lVar24 * 4) + lVar19;
        }
        if (lVar19 < lVar32) {
          lVar29 = 0;
          lVar15 = *(long *)(lStack_a8 + 0x28);
          lVar2 = *(long *)(lStack_a8 + 0x30);
          lVar33 = *(long *)(alStack_d0[2] + 0x28);
          lVar3 = *(long *)(alStack_d0[2] + 0x30);
          lVar30 = *(long *)(alStack_d0[2] + 0x18);
          lVar4 = *(long *)(alStack_d0[2] + 0x20);
          do {
            lVar26 = (long)*(int *)(lVar2 + lVar19 * 4);
            piVar18 = (int *)(lVar30 + lVar26 * 4);
            lVar16 = (long)*piVar18;
            if (lVar4 == 0) {
              lVar26 = (long)piVar18[1];
            }
            else {
              lVar26 = *(int *)(lVar4 + lVar26 * 4) + lVar16;
            }
            lVar27 = lVar26 - lVar16;
            if (lVar27 != 0 && lVar16 <= lVar26) {
              iVar34 = *(int *)(lVar15 + lVar19 * 4);
              piVar18 = (int *)(lVar33 + lVar16 * 4);
              piVar17 = (int *)(lVar3 + lVar16 * 4);
              do {
                lVar16 = (long)*piVar17;
                iVar35 = *piVar18;
                if ((*(byte *)(uVar13 + lVar16) & 1) == 0) {
                  *(undefined1 *)(uVar13 + lVar16) = 1;
                  *(int *)(lVar14 + lVar16 * 4) = iVar35 * iVar34;
                  plStack_b8[lVar29] = lVar16;
                  lVar29 = lVar29 + 1;
                }
                else {
                  *(int *)(lVar14 + lVar16 * 4) = *(int *)(lVar14 + lVar16 * 4) + iVar35 * iVar34;
                }
                lVar27 = lVar27 + -1;
                piVar18 = piVar18 + 1;
                piVar17 = piVar17 + 1;
              } while (lVar27 != 0);
            }
            lVar19 = lVar19 + 1;
          } while (lVar19 != lVar32);
          if (0 < lVar29) {
            lVar19 = *(long *)(lVar21 + 0x38) << 2;
            plVar20 = plStack_b8;
            lVar32 = *(long *)(lVar21 + 0x38);
            lStack_98 = lVar24;
            do {
              lVar30 = lVar32 + 1;
              plVar31 = plVar20 + 1;
              lVar33 = *plVar20;
              uStack_6c = *(undefined4 *)(lVar14 + lVar33 * 4);
              lVar15 = *(long *)(lVar21 + 0x18) + lVar24 * 4;
              iVar34 = *(int *)(lVar15 + 4);
              lStack_78 = (long)iVar34;
              *(int *)(lVar15 + 4) = iVar34 + 1;
              if (*(long *)(lVar21 + 0x40) <= lVar32) {
                uVar28 = lVar30 + (long)(double)lVar30;
                if (0x7ffffffe < (long)uVar28) {
                  uVar28 = 0x7fffffff;
                }
                lStack_88 = lVar33;
                plStack_80 = plVar31;
                if ((long)uVar28 <= lVar32) {
                  ___cxa_allocate_exception(8);
                  __ZNSt9bad_allocC1Ev();
                  ___cxa_throw();
                  goto LAB_10998004c;
                }
                lVar24 = uVar28 << 2;
                if (uVar28 >> 0x3e != 0) {
                  lVar24 = -1;
                }
                lVar15 = lVar24;
                __Znam();
                __Znam();
                lVar21 = lStack_a0;
                lStack_90 = *(long *)(lStack_a0 + 0x28);
                if (lVar32 < 1) {
                  lVar32 = *(long *)(lStack_a0 + 0x30);
                }
                else {
                  _memcpy(lVar15,lStack_90,lVar19);
                  lVar32 = *(long *)(lVar21 + 0x30);
                  _memcpy(lVar24,lVar32,lVar19);
                }
                *(long *)(lVar21 + 0x28) = lVar15;
                *(long *)(lVar21 + 0x30) = lVar24;
                *(ulong *)(lVar21 + 0x40) = uVar28;
                if (lVar32 != 0) {
                  __ZdaPv(lVar32);
                }
                plVar31 = plStack_80;
                lVar33 = lStack_88;
                lVar24 = lStack_98;
                if (lStack_90 != 0) {
                  __ZdaPv();
                }
              }
              lVar32 = *(long *)(lVar21 + 0x28);
              lVar15 = *(long *)(lVar21 + 0x30);
              *(undefined4 *)(lVar32 + lVar19) = 0;
              *(int *)(lVar15 + lVar19) = (int)lVar33;
              *(undefined4 *)(lVar32 + lStack_78 * 4) = uStack_6c;
              *(long *)(lVar21 + 0x38) = lVar30;
              *(undefined1 *)(uVar13 + lVar33) = 0;
              lVar19 = lVar19 + 4;
              lVar29 = lVar29 + -1;
              plVar20 = plVar31;
              lVar32 = lVar30;
            } while (lVar29 != 0);
          }
        }
        lVar24 = lVar24 + 1;
        param_2 = lStack_a8;
      } while (lVar24 != lStack_b0);
    }
    lVar24 = alStack_d0[1];
    if ((*(long *)(lVar21 + 0x20) == 0) && (lVar19 = *(long *)(lVar21 + 8), -1 < lVar19)) {
      uVar5 = *(undefined4 *)(lVar21 + 0x38);
      lVar32 = lVar19;
      do {
        if (*(int *)(*(long *)(lVar21 + 0x18) + lVar32 * 4) != 0) goto LAB_10997ff48;
        bVar1 = 0 < lVar32;
        lVar32 = lVar32 + -1;
      } while (bVar1);
      lVar32 = -1;
LAB_10997ff48:
      lVar29 = lVar19 - lVar32;
      if (lVar29 != 0 && lVar32 <= lVar19) {
        puVar25 = (undefined4 *)(*(long *)(lVar21 + 0x18) + lVar32 * 4);
        do {
          puVar25 = puVar25 + 1;
          *puVar25 = uVar5;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
      }
    }
    if (0x4000 < (ulong)alStack_d0[1]) {
      _free(plStack_b8);
    }
    if (bVar11) {
      _free(lVar14);
    }
    if (0x20000 < (ulong)lVar24) {
      _free(uVar13);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
LAB_10997f8f4:
    lVar14 = uVar28 << 2;
    _malloc();
    if (lVar14 == 0) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10998004c;
    }
    if (uVar28 >> 0x3d != 0) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10998004c;
    }
    bVar11 = true;
LAB_10997f91c:
    plVar20 = (long *)(uVar28 << 3);
    _malloc();
    if (plVar20 != (long *)0x0) goto LAB_10997f928;
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10998004c:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x109980050);
  (*pcVar12)();
}



/* Entry: 1099800fc; end: 10998041b;  */

long FUN_1099800fc(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  undefined4 *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  
  lVar2 = *(long *)(param_2 + 8);
  uVar4 = *(ulong *)(param_2 + 0x10);
  lVar24 = uVar4 * 4;
  uVar10 = 1;
  _calloc(1,lVar24 + 4);
  if (uVar10 == 0) {
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_1099803d0:
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1099803d4);
    (*pcVar9)();
  }
  uVar11 = (ulong)-((uint)uVar10 >> 2) & 3;
  if ((long)uVar4 <= (long)uVar11) {
    uVar11 = uVar4;
  }
  uVar1 = uVar4;
  if ((uVar10 & 3) == 0) {
    uVar1 = uVar11;
  }
  uVar14 = uVar4 - uVar1;
  uVar11 = uVar14 + 3;
  if (-1 < (long)uVar14) {
    uVar11 = uVar14;
  }
  if ((long)((uVar11 & 0xfffffffffffffffc) + uVar1) < (long)uVar4) {
    _bzero(uVar10 + ((long)uVar11 >> 2) * 0x10 + uVar1 * 4,((long)uVar14 % 4) * 4);
  }
  if (0 < lVar2) {
    lVar12 = 0;
    lVar15 = *(long *)(param_2 + 0x30);
    lVar25 = *(long *)(param_2 + 0x18);
    lVar13 = *(long *)(param_2 + 0x20);
    do {
      piVar19 = (int *)(lVar25 + lVar12 * 4);
      lVar18 = (long)*piVar19;
      if (lVar13 == 0) {
        lVar16 = (long)piVar19[1];
      }
      else {
        lVar16 = *(int *)(lVar13 + lVar12 * 4) + lVar18;
      }
      lVar17 = lVar16 - lVar18;
      if (lVar17 != 0 && lVar18 <= lVar16) {
        piVar19 = (int *)(lVar15 + lVar18 * 4);
        do {
          *(int *)(uVar10 + (long)*piVar19 * 4) = *(int *)(uVar10 + (long)*piVar19 * 4) + 1;
          lVar17 = lVar17 + -1;
          piVar19 = piVar19 + 1;
        } while (lVar17 != 0);
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != lVar2);
  }
  if ((long)uVar4 < 1) {
    lVar12 = 0;
    lVar24 = 0;
    lVar13 = 0;
    lVar25 = 0;
    lVar15 = 0;
    *(undefined4 *)(uVar10 + uVar4 * 4) = 0;
  }
  else {
    if ((uVar4 >> 0x3e != 0) || (_malloc(), lVar24 == 0)) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1099803d0;
    }
    uVar11 = 0;
    lVar12 = 0;
    do {
      iVar8 = *(int *)(uVar10 + uVar11 * 4);
      iVar26 = (int)lVar12;
      *(int *)(uVar10 + uVar11 * 4) = iVar26;
      *(int *)(lVar24 + uVar11 * 4) = iVar26;
      lVar12 = (long)iVar8 + (long)iVar26;
      uVar11 = uVar11 + 1;
    } while (uVar4 != uVar11);
    *(int *)(uVar10 + uVar4 * 4) = (int)lVar12;
    if ((int)lVar12 < 1) {
      lVar13 = 0;
      lVar25 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = lVar12 * 4;
      lVar25 = lVar15;
      __Znam();
      __Znam();
      lVar13 = lVar12;
    }
  }
  if (0 < lVar2) {
    lVar18 = 0;
    lVar16 = *(long *)(param_2 + 0x28);
    lVar5 = *(long *)(param_2 + 0x30);
    lVar17 = *(long *)(param_2 + 0x18);
    lVar6 = *(long *)(param_2 + 0x20);
    do {
      piVar19 = (int *)(lVar17 + lVar18 * 4);
      lVar23 = (long)*piVar19;
      if (lVar6 == 0) {
        lVar20 = (long)piVar19[1];
      }
      else {
        lVar20 = *(int *)(lVar6 + lVar18 * 4) + lVar23;
      }
      lVar21 = lVar20 - lVar23;
      if (lVar21 != 0 && lVar23 <= lVar20) {
        puVar22 = (undefined4 *)(lVar16 + lVar23 * 4);
        piVar19 = (int *)(lVar5 + lVar23 * 4);
        do {
          iVar8 = *(int *)(lVar24 + (long)*piVar19 * 4);
          *(int *)(lVar24 + (long)*piVar19 * 4) = iVar8 + 1;
          *(int *)(lVar15 + (long)iVar8 * 4) = (int)lVar18;
          *(undefined4 *)(lVar25 + (long)iVar8 * 4) = *puVar22;
          lVar21 = lVar21 + -1;
          puVar22 = puVar22 + 1;
          piVar19 = piVar19 + 1;
        } while (lVar21 != 0);
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 != lVar2);
  }
  *(ulong *)(param_1 + 8) = uVar4;
  *(long *)(param_1 + 0x10) = lVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  *(ulong *)(param_1 + 0x18) = uVar10;
  *(undefined8 *)(param_1 + 0x20) = 0;
  lVar2 = *(long *)(param_1 + 0x28);
  lVar18 = *(long *)(param_1 + 0x30);
  *(long *)(param_1 + 0x28) = lVar25;
  *(long *)(param_1 + 0x30) = lVar15;
  *(long *)(param_1 + 0x38) = lVar12;
  *(long *)(param_1 + 0x40) = lVar13;
  _free(lVar24);
  _free(uVar3);
  _free(uVar7);
  if (lVar2 != 0) {
    __ZdaPv(lVar2);
  }
  if (lVar18 != 0) {
    __ZdaPv(lVar18);
  }
  return param_1;
}



/* Entry: 10998041c; end: 109980d43;  */

void FUN_10998041c(long param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  bool bVar11;
  code *pcVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long extraout_x8;
  int *piVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  undefined4 *puVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  long *plVar31;
  long lVar32;
  long lVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar40;
  int iVar41;
  int iVar42;
  undefined1 auVar39 [16];
  long alStack_d0 [3];
  long *plStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  undefined4 uStack_6c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar28 = *(ulong *)(param_1 + 0x10);
  lStack_b0 = *(long *)(param_2 + 8);
  alStack_d0[1] = uVar28;
  if (0x20000 < uVar28) {
    uVar13 = uVar28;
    _malloc();
    if (uVar13 == 0) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
    }
    else if (uVar28 >> 0x3e == 0) goto LAB_10998053c;
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
    goto LAB_109980c94;
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = -(uVar28 + 0x1e & 0xfffffffffffffff0);
  uVar13 = (long)alStack_d0 + lVar14;
  lVar21 = uVar28 << 2;
  if (uVar28 < 0x8001) {
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar14 = (long)alStack_d0 + (lVar14 - (lVar21 + 0x1eU & 0xfffffffffffffff0));
    lVar21 = uVar28 << 3;
    if (0x4000 < uVar28) {
      bVar11 = false;
      goto LAB_109980564;
    }
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    plVar20 = (long *)(lVar14 - (lVar21 + 0x1eU & 0xfffffffffffffff0));
    bVar11 = false;
    lVar14 = extraout_x8;
LAB_109980570:
    _bzero(uVar13,uVar28);
    piVar18 = *(int **)(param_1 + 0x20);
    if (piVar18 == (int *)0x0) {
      lVar21 = (long)(*(int **)(param_1 + 0x18))[*(long *)(param_1 + 8)] -
               (long)**(int **)(param_1 + 0x18);
    }
    else {
      uVar28 = *(ulong *)(param_1 + 8);
      if (uVar28 == 0) {
        lVar21 = 0;
      }
      else {
        uVar22 = (ulong)-((uint)piVar18 >> 2) & 3;
        if ((long)uVar28 <= (long)uVar22) {
          uVar22 = uVar28;
        }
        uVar23 = uVar28;
        if (((ulong)piVar18 & 3) == 0) {
          uVar23 = uVar22;
        }
        uVar6 = uVar28 - uVar23;
        uVar22 = uVar6 + 3;
        uVar10 = uVar6 + 7;
        if ((long)uVar23 <= (long)uVar28) {
          uVar22 = uVar6;
          uVar10 = uVar6;
        }
        if (uVar6 + 3 < 7) {
          iVar34 = *piVar18;
          if (1 < (long)uVar28) {
            lVar21 = uVar28 - 1;
            do {
              piVar18 = piVar18 + 1;
              iVar34 = *piVar18 + iVar34;
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
          }
        }
        else {
          piVar17 = piVar18 + uVar23;
          iVar36 = (int)*(undefined8 *)(piVar17 + 2);
          iVar37 = (int)((ulong)*(undefined8 *)(piVar17 + 2) >> 0x20);
          iVar34 = (int)*(undefined8 *)piVar17;
          iVar35 = (int)((ulong)*(undefined8 *)piVar17 >> 0x20);
          if (7 < (long)uVar6) {
            lVar21 = (uVar10 & 0xfffffffffffffff8) + uVar23;
            iVar38 = piVar17[4];
            iVar40 = piVar17[5];
            iVar41 = piVar17[6];
            iVar42 = piVar17[7];
            if (0xf < uVar6) {
              lVar24 = uVar23 + 8;
              piVar17 = piVar17 + 0xc;
              do {
                iVar34 = (int)*(undefined8 *)(piVar17 + -4) + iVar34;
                iVar35 = (int)((ulong)*(undefined8 *)(piVar17 + -4) >> 0x20) + iVar35;
                iVar36 = (int)*(undefined8 *)(piVar17 + -2) + iVar36;
                iVar37 = (int)((ulong)*(undefined8 *)(piVar17 + -2) >> 0x20) + iVar37;
                iVar38 = (int)*(undefined8 *)piVar17 + iVar38;
                iVar40 = (int)((ulong)*(undefined8 *)piVar17 >> 0x20) + iVar40;
                iVar41 = (int)*(undefined8 *)(piVar17 + 2) + iVar41;
                iVar42 = (int)((ulong)*(undefined8 *)(piVar17 + 2) >> 0x20) + iVar42;
                lVar24 = lVar24 + 8;
                piVar17 = piVar17 + 8;
              } while (lVar24 < lVar21);
            }
            iVar34 = iVar34 + iVar38;
            iVar35 = iVar35 + iVar40;
            iVar36 = iVar36 + iVar41;
            iVar37 = iVar37 + iVar42;
            if ((long)(uVar10 & 0xfffffffffffffff8) < (long)(uVar22 & 0xfffffffffffffffc)) {
              piVar17 = piVar18 + lVar21;
              iVar34 = *piVar17 + iVar34;
              iVar35 = piVar17[1] + iVar35;
              iVar36 = piVar17[2] + iVar36;
              iVar37 = piVar17[3] + iVar37;
            }
          }
          lVar21 = (uVar22 & 0xfffffffffffffffc) + uVar23;
          auVar39._4_4_ = iVar35;
          auVar39._0_4_ = iVar34;
          auVar39._8_4_ = iVar36;
          auVar39._12_4_ = iVar37;
          auVar9._4_4_ = iVar35;
          auVar9._0_4_ = iVar34;
          auVar9._8_4_ = iVar36;
          auVar9._12_4_ = iVar37;
          auVar39 = NEON_ext(auVar39,auVar9,8,1);
          iVar34 = iVar34 + auVar39._0_4_ + iVar35 + auVar39._4_4_;
          piVar17 = piVar18;
          if (0 < (long)uVar23) {
            do {
              iVar34 = *piVar17 + iVar34;
              uVar23 = uVar23 - 1;
              piVar17 = piVar17 + 1;
            } while (uVar23 != 0);
          }
          for (; lVar21 < (long)uVar28; lVar21 = lVar21 + 1) {
            iVar34 = piVar18[lVar21] + iVar34;
          }
        }
        lVar21 = (long)iVar34;
      }
    }
    piVar18 = *(int **)(param_2 + 0x20);
    if (piVar18 == (int *)0x0) {
      lVar24 = (long)(*(int **)(param_2 + 0x18))[*(long *)(param_2 + 8)] -
               (long)**(int **)(param_2 + 0x18);
    }
    else {
      uVar28 = *(ulong *)(param_2 + 8);
      if (uVar28 == 0) {
        lVar24 = 0;
      }
      else {
        uVar22 = (ulong)-((uint)piVar18 >> 2) & 3;
        if ((long)uVar28 <= (long)uVar22) {
          uVar22 = uVar28;
        }
        uVar23 = uVar28;
        if (((ulong)piVar18 & 3) == 0) {
          uVar23 = uVar22;
        }
        uVar6 = uVar28 - uVar23;
        uVar22 = uVar6 + 3;
        uVar10 = uVar6 + 7;
        if ((long)uVar23 <= (long)uVar28) {
          uVar22 = uVar6;
          uVar10 = uVar6;
        }
        if (uVar6 + 3 < 7) {
          iVar34 = *piVar18;
          if (1 < (long)uVar28) {
            lVar24 = uVar28 - 1;
            do {
              piVar18 = piVar18 + 1;
              iVar34 = *piVar18 + iVar34;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
          }
        }
        else {
          piVar17 = piVar18 + uVar23;
          iVar36 = (int)*(undefined8 *)(piVar17 + 2);
          iVar37 = (int)((ulong)*(undefined8 *)(piVar17 + 2) >> 0x20);
          iVar34 = (int)*(undefined8 *)piVar17;
          iVar35 = (int)((ulong)*(undefined8 *)piVar17 >> 0x20);
          if (7 < (long)uVar6) {
            lVar24 = (uVar10 & 0xfffffffffffffff8) + uVar23;
            iVar38 = piVar17[4];
            iVar40 = piVar17[5];
            iVar41 = piVar17[6];
            iVar42 = piVar17[7];
            if (0xf < uVar6) {
              lVar19 = uVar23 + 8;
              piVar17 = piVar17 + 0xc;
              do {
                iVar34 = (int)*(undefined8 *)(piVar17 + -4) + iVar34;
                iVar35 = (int)((ulong)*(undefined8 *)(piVar17 + -4) >> 0x20) + iVar35;
                iVar36 = (int)*(undefined8 *)(piVar17 + -2) + iVar36;
                iVar37 = (int)((ulong)*(undefined8 *)(piVar17 + -2) >> 0x20) + iVar37;
                iVar38 = (int)*(undefined8 *)piVar17 + iVar38;
                iVar40 = (int)((ulong)*(undefined8 *)piVar17 >> 0x20) + iVar40;
                iVar41 = (int)*(undefined8 *)(piVar17 + 2) + iVar41;
                iVar42 = (int)((ulong)*(undefined8 *)(piVar17 + 2) >> 0x20) + iVar42;
                lVar19 = lVar19 + 8;
                piVar17 = piVar17 + 8;
              } while (lVar19 < lVar24);
            }
            iVar34 = iVar34 + iVar38;
            iVar35 = iVar35 + iVar40;
            iVar36 = iVar36 + iVar41;
            iVar37 = iVar37 + iVar42;
            if ((long)(uVar10 & 0xfffffffffffffff8) < (long)(uVar22 & 0xfffffffffffffffc)) {
              piVar17 = piVar18 + lVar24;
              iVar34 = *piVar17 + iVar34;
              iVar35 = piVar17[1] + iVar35;
              iVar36 = piVar17[2] + iVar36;
              iVar37 = piVar17[3] + iVar37;
            }
          }
          lVar24 = (uVar22 & 0xfffffffffffffffc) + uVar23;
          auVar7._4_4_ = iVar35;
          auVar7._0_4_ = iVar34;
          auVar7._8_4_ = iVar36;
          auVar7._12_4_ = iVar37;
          auVar8._4_4_ = iVar35;
          auVar8._0_4_ = iVar34;
          auVar8._8_4_ = iVar36;
          auVar8._12_4_ = iVar37;
          auVar39 = NEON_ext(auVar7,auVar8,8,1);
          iVar34 = iVar34 + auVar39._0_4_ + iVar35 + auVar39._4_4_;
          piVar17 = piVar18;
          if (0 < (long)uVar23) {
            do {
              iVar34 = *piVar17 + iVar34;
              uVar23 = uVar23 - 1;
              piVar17 = piVar17 + 1;
            } while (uVar23 != 0);
          }
          for (; lVar24 < (long)uVar28; lVar24 = lVar24 + 1) {
            iVar34 = piVar18[lVar24] + iVar34;
          }
        }
        lVar24 = (long)iVar34;
      }
    }
    *(undefined8 *)(param_3 + 0x38) = 0;
    plStack_b8 = plVar20;
    _bzero(*(undefined8 *)(param_3 + 0x18),*(long *)(param_3 + 8) * 4 + 4);
    if (*(long *)(param_3 + 0x20) != 0) {
      _bzero(*(long *)(param_3 + 0x20),*(long *)(param_3 + 8) << 2);
    }
    uVar22 = *(ulong *)(param_3 + 0x38);
    uVar28 = lVar24 + lVar21 + uVar22;
    alStack_d0[2] = param_1;
    lStack_a8 = param_2;
    lStack_a0 = param_3;
    if (*(long *)(param_3 + 0x40) < (long)uVar28) {
      lVar21 = uVar28 * 4;
      if (uVar28 >> 0x3e != 0) {
        lVar21 = -1;
      }
      lVar19 = lVar21;
      __Znam();
      __Znam();
      lVar24 = lStack_a0;
      if ((long)uVar28 <= (long)uVar22) {
        uVar22 = uVar28;
      }
      lVar32 = *(long *)(lStack_a0 + 0x28);
      if ((long)uVar22 < 1) {
        lVar29 = *(long *)(lStack_a0 + 0x30);
      }
      else {
        _memcpy(lVar19,lVar32,uVar22 << 2);
        param_2 = lStack_a8;
        lVar29 = *(long *)(lVar24 + 0x30);
        _memcpy(lVar21,lVar29,uVar22 << 2);
      }
      *(long *)(lVar24 + 0x28) = lVar19;
      *(long *)(lVar24 + 0x30) = lVar21;
      *(ulong *)(lVar24 + 0x40) = uVar28;
      if (lVar29 != 0) {
        __ZdaPv(lVar29);
      }
      if (lVar32 != 0) {
        __ZdaPv(lVar32);
      }
    }
    lVar21 = lStack_a0;
    if (0 < lStack_b0) {
      lVar24 = 0;
      do {
        puVar25 = (undefined4 *)(*(long *)(lVar21 + 0x18) + lVar24 * 4);
        puVar25[1] = *puVar25;
        piVar18 = (int *)(*(long *)(param_2 + 0x18) + lVar24 * 4);
        lVar19 = (long)*piVar18;
        if (*(long *)(param_2 + 0x20) == 0) {
          lVar32 = (long)piVar18[1];
        }
        else {
          lVar32 = *(int *)(*(long *)(param_2 + 0x20) + lVar24 * 4) + lVar19;
        }
        if (lVar19 < lVar32) {
          lVar29 = 0;
          lVar15 = *(long *)(lStack_a8 + 0x28);
          lVar2 = *(long *)(lStack_a8 + 0x30);
          lVar33 = *(long *)(alStack_d0[2] + 0x28);
          lVar3 = *(long *)(alStack_d0[2] + 0x30);
          lVar30 = *(long *)(alStack_d0[2] + 0x18);
          lVar4 = *(long *)(alStack_d0[2] + 0x20);
          do {
            lVar26 = (long)*(int *)(lVar2 + lVar19 * 4);
            piVar18 = (int *)(lVar30 + lVar26 * 4);
            lVar16 = (long)*piVar18;
            if (lVar4 == 0) {
              lVar26 = (long)piVar18[1];
            }
            else {
              lVar26 = *(int *)(lVar4 + lVar26 * 4) + lVar16;
            }
            lVar27 = lVar26 - lVar16;
            if (lVar27 != 0 && lVar16 <= lVar26) {
              iVar34 = *(int *)(lVar15 + lVar19 * 4);
              piVar18 = (int *)(lVar33 + lVar16 * 4);
              piVar17 = (int *)(lVar3 + lVar16 * 4);
              do {
                lVar16 = (long)*piVar17;
                iVar35 = *piVar18;
                if ((*(byte *)(uVar13 + lVar16) & 1) == 0) {
                  *(undefined1 *)(uVar13 + lVar16) = 1;
                  *(int *)(lVar14 + lVar16 * 4) = iVar35 * iVar34;
                  plStack_b8[lVar29] = lVar16;
                  lVar29 = lVar29 + 1;
                }
                else {
                  *(int *)(lVar14 + lVar16 * 4) = *(int *)(lVar14 + lVar16 * 4) + iVar35 * iVar34;
                }
                lVar27 = lVar27 + -1;
                piVar18 = piVar18 + 1;
                piVar17 = piVar17 + 1;
              } while (lVar27 != 0);
            }
            lVar19 = lVar19 + 1;
          } while (lVar19 != lVar32);
          if (0 < lVar29) {
            lVar19 = *(long *)(lVar21 + 0x38) << 2;
            plVar20 = plStack_b8;
            lVar32 = *(long *)(lVar21 + 0x38);
            lStack_98 = lVar24;
            do {
              lVar30 = lVar32 + 1;
              plVar31 = plVar20 + 1;
              lVar33 = *plVar20;
              uStack_6c = *(undefined4 *)(lVar14 + lVar33 * 4);
              lVar15 = *(long *)(lVar21 + 0x18) + lVar24 * 4;
              iVar34 = *(int *)(lVar15 + 4);
              lStack_78 = (long)iVar34;
              *(int *)(lVar15 + 4) = iVar34 + 1;
              if (*(long *)(lVar21 + 0x40) <= lVar32) {
                uVar28 = lVar30 + (long)(double)lVar30;
                if (0x7ffffffe < (long)uVar28) {
                  uVar28 = 0x7fffffff;
                }
                lStack_88 = lVar33;
                plStack_80 = plVar31;
                if ((long)uVar28 <= lVar32) {
                  ___cxa_allocate_exception(8);
                  __ZNSt9bad_allocC1Ev();
                  ___cxa_throw();
                  goto LAB_109980c94;
                }
                lVar24 = uVar28 << 2;
                if (uVar28 >> 0x3e != 0) {
                  lVar24 = -1;
                }
                lVar15 = lVar24;
                __Znam();
                __Znam();
                lVar21 = lStack_a0;
                lStack_90 = *(long *)(lStack_a0 + 0x28);
                if (lVar32 < 1) {
                  lVar32 = *(long *)(lStack_a0 + 0x30);
                }
                else {
                  _memcpy(lVar15,lStack_90,lVar19);
                  lVar32 = *(long *)(lVar21 + 0x30);
                  _memcpy(lVar24,lVar32,lVar19);
                }
                *(long *)(lVar21 + 0x28) = lVar15;
                *(long *)(lVar21 + 0x30) = lVar24;
                *(ulong *)(lVar21 + 0x40) = uVar28;
                if (lVar32 != 0) {
                  __ZdaPv(lVar32);
                }
                plVar31 = plStack_80;
                lVar33 = lStack_88;
                lVar24 = lStack_98;
                if (lStack_90 != 0) {
                  __ZdaPv();
                }
              }
              lVar32 = *(long *)(lVar21 + 0x28);
              lVar15 = *(long *)(lVar21 + 0x30);
              *(undefined4 *)(lVar32 + lVar19) = 0;
              *(int *)(lVar15 + lVar19) = (int)lVar33;
              *(undefined4 *)(lVar32 + lStack_78 * 4) = uStack_6c;
              *(long *)(lVar21 + 0x38) = lVar30;
              *(undefined1 *)(uVar13 + lVar33) = 0;
              lVar19 = lVar19 + 4;
              lVar29 = lVar29 + -1;
              plVar20 = plVar31;
              lVar32 = lVar30;
            } while (lVar29 != 0);
          }
        }
        lVar24 = lVar24 + 1;
        param_2 = lStack_a8;
      } while (lVar24 != lStack_b0);
    }
    lVar24 = alStack_d0[1];
    if ((*(long *)(lVar21 + 0x20) == 0) && (lVar19 = *(long *)(lVar21 + 8), -1 < lVar19)) {
      uVar5 = *(undefined4 *)(lVar21 + 0x38);
      lVar32 = lVar19;
      do {
        if (*(int *)(*(long *)(lVar21 + 0x18) + lVar32 * 4) != 0) goto LAB_109980b90;
        bVar1 = 0 < lVar32;
        lVar32 = lVar32 + -1;
      } while (bVar1);
      lVar32 = -1;
LAB_109980b90:
      lVar29 = lVar19 - lVar32;
      if (lVar29 != 0 && lVar32 <= lVar19) {
        puVar25 = (undefined4 *)(*(long *)(lVar21 + 0x18) + lVar32 * 4);
        do {
          puVar25 = puVar25 + 1;
          *puVar25 = uVar5;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
      }
    }
    if (0x4000 < (ulong)alStack_d0[1]) {
      _free(plStack_b8);
    }
    if (bVar11) {
      _free(lVar14);
    }
    if (0x20000 < (ulong)lVar24) {
      _free(uVar13);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
LAB_10998053c:
    lVar14 = uVar28 << 2;
    _malloc();
    if (lVar14 == 0) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109980c94;
    }
    if (uVar28 >> 0x3d != 0) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109980c94;
    }
    bVar11 = true;
LAB_109980564:
    plVar20 = (long *)(uVar28 << 3);
    _malloc();
    if (plVar20 != (long *)0x0) goto LAB_109980570;
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109980c94:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x109980c98);
  (*pcVar12)();
}



/* Entry: 109980d44; end: 109980ed7;  */

int * FUN_109980d44(int *param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined1 auVar7 [16];
  ulong uVar8;
  code *pcVar9;
  int *piVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  undefined8 *puVar16;
  int *piVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  uint *puVar25;
  long lVar26;
  char *pcVar27;
  undefined4 *puVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  uint *puVar32;
  int *piVar33;
  int iVar34;
  int iVar35;
  long extraout_x12;
  ulong uVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  int *piVar40;
  int iVar41;
  int iVar42;
  char *pcVar43;
  long lVar44;
  int iVar45;
  long lVar46;
  int *unaff_x23;
  long lVar47;
  int *piVar48;
  char *pcVar49;
  int *piVar50;
  int *unaff_x26;
  ulong unaff_x27;
  int *unaff_x28;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  uint uVar67;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  undefined1 auVar68 [16];
  int aiStack_1f0 [2];
  int *piStack_1e8;
  undefined8 *puStack_1e0;
  int iStack_1d4;
  int *piStack_1d0;
  int *piStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  int *piStack_1b0;
  int *piStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  uint uStack_188;
  int iStack_184;
  int *piStack_180;
  ulong uStack_178;
  long lStack_170;
  ulong uStack_168;
  uint uStack_15c;
  int *piStack_158;
  ulong uStack_150;
  int iStack_148;
  int iStack_144;
  int *piStack_140;
  int iStack_134;
  long lStack_130;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  int *piStack_b0;
  int *piStack_a8;
  int *piStack_a0;
  long lStack_98;
  int *piStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 *puStack_70;
  int *piStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_c0[0] = 0;
  uStack_b8 = 0xffffffffffffffff;
  piVar14 = (int *)0x4;
  _malloc();
  piStack_b0 = (int *)0x0;
  lStack_98 = 0;
  piStack_a0 = (int *)0x0;
  uStack_88 = 0;
  piStack_90 = (int *)0x0;
  uStack_80 = 0;
  piStack_a8 = piVar14;
  if (piVar14 == (int *)0x0) {
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x109980ea8);
    (*pcVar9)();
  }
  uStack_b8 = 0;
  *piVar14 = 0;
  FUN_1099800fc(auStack_c0,param_1);
  lVar31 = lStack_98;
  piVar48 = piStack_a0;
  piVar14 = piStack_b0;
  piVar33 = piStack_b0;
  piVar17 = piStack_a0;
  piVar10 = piStack_a8;
  if (0 < (long)piStack_b0) {
    do {
      lVar24 = (long)*piVar10;
      if (piVar48 == (int *)0x0) {
        lVar26 = (long)piVar10[1];
      }
      else {
        lVar26 = *piVar17 + lVar24;
      }
      if (lVar26 - lVar24 != 0 && lVar24 <= lVar26) {
        _bzero(lVar31 + lVar24 * 4,(lVar26 - lVar24) * 4);
      }
      piVar33 = (int *)((long)piVar33 + -1);
      piVar14 = (int *)0x0;
      unaff_x23 = piVar48;
      piVar17 = piVar17 + 1;
      piVar10 = piVar10 + 1;
    } while (piVar33 != (int *)0x0);
  }
  auStack_78[0] = 0;
  puVar16 = (undefined8 *)auStack_78;
  puStack_70 = auStack_c0;
  piStack_68 = param_1;
  FUN_109981db4(param_2);
  _free(piStack_a8);
  _free(piStack_a0);
  if (lStack_98 != 0) {
    __ZdaPv();
  }
  piVar33 = piStack_90;
  if (piStack_90 != (int *)0x0) {
    __ZdaPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return piVar33;
  }
  ___stack_chk_fail();
  FUN_10997c044(auStack_c0);
  __Unwind_Resume();
  puStack_d0 = &stack0xfffffffffffffff0;
  pcStack_c8 = FUN_109980ed8;
  piVar10 = aiStack_1f0;
  lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_168 = *(ulong *)(piVar33 + 2);
  iVar20 = (int)uStack_168;
  uVar23 = (uint)(SQRT((double)iVar20) * 10.0);
  if ((int)uVar23 < 0x11) {
    uVar23 = 0x10;
  }
  if ((int)(iVar20 - 2U) <= (int)uVar23) {
    uVar23 = iVar20 - 2U;
  }
  piVar48 = (int *)(ulong)uVar23;
  puVar25 = *(uint **)(piVar33 + 8);
  if (puVar25 == (uint *)0x0) {
    uVar30 = (ulong)(uint)((*(int **)(piVar33 + 6))[uStack_168] - **(int **)(piVar33 + 6));
  }
  else if (uStack_168 == 0) {
    uVar30 = 0;
  }
  else {
    uVar30 = (ulong)-((uint)puVar25 >> 2) & 3;
    if ((long)uStack_168 <= (long)uVar30) {
      uVar30 = uStack_168;
    }
    uVar22 = uStack_168;
    if (((ulong)puVar25 & 3) == 0) {
      uVar22 = uVar30;
    }
    uVar36 = uStack_168 - uVar22;
    uVar30 = uVar36 + 3;
    uVar8 = uVar36 + 7;
    if ((long)uVar22 <= (long)uStack_168) {
      uVar30 = uVar36;
      uVar8 = uVar36;
    }
    if (uVar36 + 3 < 7) {
      uVar30 = (ulong)*puVar25;
      if (1 < (long)uStack_168) {
        lVar31 = uStack_168 - 1;
        do {
          puVar25 = puVar25 + 1;
          uVar30 = (ulong)(*puVar25 + (int)uVar30);
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
      }
    }
    else {
      puVar32 = puVar25 + uVar22;
      uVar3 = *(undefined8 *)(puVar32 + 2);
      uVar59 = (undefined1)uVar3;
      uVar60 = (undefined1)((ulong)uVar3 >> 8);
      uVar61 = (undefined1)((ulong)uVar3 >> 0x10);
      uVar62 = (undefined1)((ulong)uVar3 >> 0x18);
      uVar63 = (undefined1)((ulong)uVar3 >> 0x20);
      uVar64 = (undefined1)((ulong)uVar3 >> 0x28);
      uVar65 = (undefined1)((ulong)uVar3 >> 0x30);
      uVar66 = (undefined1)((ulong)uVar3 >> 0x38);
      uVar3 = *(undefined8 *)puVar32;
      uVar51 = (undefined1)uVar3;
      uVar52 = (undefined1)((ulong)uVar3 >> 8);
      uVar53 = (undefined1)((ulong)uVar3 >> 0x10);
      uVar54 = (undefined1)((ulong)uVar3 >> 0x18);
      uVar55 = (undefined1)((ulong)uVar3 >> 0x20);
      uVar56 = (undefined1)((ulong)uVar3 >> 0x28);
      uVar57 = (undefined1)((ulong)uVar3 >> 0x30);
      uVar58 = (undefined1)((ulong)uVar3 >> 0x38);
      if (7 < (long)uVar36) {
        lVar31 = (uVar8 & 0xfffffffffffffff8) + uVar22;
        uVar67 = puVar32[4];
        uVar69 = puVar32[5];
        uVar70 = puVar32[6];
        uVar71 = puVar32[7];
        if (0xf < uVar36) {
          lVar24 = uVar22 + 8;
          puVar32 = puVar32 + 0xc;
          do {
            iVar21 = (int)*(undefined8 *)(puVar32 + -4) +
                     CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)));
            uVar51 = (undefined1)iVar21;
            uVar52 = (undefined1)((uint)iVar21 >> 8);
            uVar53 = (undefined1)((uint)iVar21 >> 0x10);
            uVar54 = (undefined1)((uint)iVar21 >> 0x18);
            iVar21 = (int)((ulong)*(undefined8 *)(puVar32 + -4) >> 0x20) +
                     CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55)));
            uVar55 = (undefined1)iVar21;
            uVar56 = (undefined1)((uint)iVar21 >> 8);
            uVar57 = (undefined1)((uint)iVar21 >> 0x10);
            uVar58 = (undefined1)((uint)iVar21 >> 0x18);
            iVar21 = (int)*(undefined8 *)(puVar32 + -2) +
                     CONCAT13(uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59)));
            uVar59 = (undefined1)iVar21;
            uVar60 = (undefined1)((uint)iVar21 >> 8);
            uVar61 = (undefined1)((uint)iVar21 >> 0x10);
            uVar62 = (undefined1)((uint)iVar21 >> 0x18);
            iVar21 = (int)((ulong)*(undefined8 *)(puVar32 + -2) >> 0x20) +
                     CONCAT13(uVar66,CONCAT12(uVar65,CONCAT11(uVar64,uVar63)));
            uVar63 = (undefined1)iVar21;
            uVar64 = (undefined1)((uint)iVar21 >> 8);
            uVar65 = (undefined1)((uint)iVar21 >> 0x10);
            uVar66 = (undefined1)((uint)iVar21 >> 0x18);
            uVar67 = (int)*(undefined8 *)puVar32 + uVar67;
            uVar69 = (int)((ulong)*(undefined8 *)puVar32 >> 0x20) + uVar69;
            uVar70 = (int)*(undefined8 *)(puVar32 + 2) + uVar70;
            uVar71 = (int)((ulong)*(undefined8 *)(puVar32 + 2) >> 0x20) + uVar71;
            lVar24 = lVar24 + 8;
            puVar32 = puVar32 + 8;
          } while (lVar24 < lVar31);
        }
        iVar21 = CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) + uVar67;
        uVar51 = (undefined1)iVar21;
        uVar52 = (undefined1)((uint)iVar21 >> 8);
        uVar53 = (undefined1)((uint)iVar21 >> 0x10);
        uVar54 = (undefined1)((uint)iVar21 >> 0x18);
        iVar35 = CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) + uVar69;
        uVar55 = (undefined1)iVar35;
        uVar56 = (undefined1)((uint)iVar35 >> 8);
        uVar57 = (undefined1)((uint)iVar35 >> 0x10);
        uVar58 = (undefined1)((uint)iVar35 >> 0x18);
        iVar19 = CONCAT13(uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59))) + uVar70;
        uVar59 = (undefined1)iVar19;
        uVar60 = (undefined1)((uint)iVar19 >> 8);
        uVar61 = (undefined1)((uint)iVar19 >> 0x10);
        uVar62 = (undefined1)((uint)iVar19 >> 0x18);
        iVar13 = CONCAT13(uVar66,CONCAT12(uVar65,CONCAT11(uVar64,uVar63))) + uVar71;
        uVar63 = (undefined1)iVar13;
        uVar64 = (undefined1)((uint)iVar13 >> 8);
        uVar65 = (undefined1)((uint)iVar13 >> 0x10);
        uVar66 = (undefined1)((uint)iVar13 >> 0x18);
        if ((long)(uVar8 & 0xfffffffffffffff8) < (long)(uVar30 & 0xfffffffffffffffc)) {
          puVar32 = puVar25 + lVar31;
          iVar21 = *puVar32 + iVar21;
          uVar51 = (undefined1)iVar21;
          uVar52 = (undefined1)((uint)iVar21 >> 8);
          uVar53 = (undefined1)((uint)iVar21 >> 0x10);
          uVar54 = (undefined1)((uint)iVar21 >> 0x18);
          iVar35 = puVar32[1] + iVar35;
          uVar55 = (undefined1)iVar35;
          uVar56 = (undefined1)((uint)iVar35 >> 8);
          uVar57 = (undefined1)((uint)iVar35 >> 0x10);
          uVar58 = (undefined1)((uint)iVar35 >> 0x18);
          iVar19 = puVar32[2] + iVar19;
          uVar59 = (undefined1)iVar19;
          uVar60 = (undefined1)((uint)iVar19 >> 8);
          uVar61 = (undefined1)((uint)iVar19 >> 0x10);
          uVar62 = (undefined1)((uint)iVar19 >> 0x18);
          iVar13 = puVar32[3] + iVar13;
          uVar63 = (undefined1)iVar13;
          uVar64 = (undefined1)((uint)iVar13 >> 8);
          uVar65 = (undefined1)((uint)iVar13 >> 0x10);
          uVar66 = (undefined1)((uint)iVar13 >> 0x18);
        }
      }
      lVar31 = (uVar30 & 0xfffffffffffffffc) + uVar22;
      auVar68[1] = uVar52;
      auVar68[0] = uVar51;
      auVar68[2] = uVar53;
      auVar68[3] = uVar54;
      auVar68[4] = uVar55;
      auVar68[5] = uVar56;
      auVar68[6] = uVar57;
      auVar68[7] = uVar58;
      auVar68[8] = uVar59;
      auVar68[9] = uVar60;
      auVar68[10] = uVar61;
      auVar68[0xb] = uVar62;
      auVar68[0xc] = uVar63;
      auVar68[0xd] = uVar64;
      auVar68[0xe] = uVar65;
      auVar68[0xf] = uVar66;
      auVar7[1] = uVar52;
      auVar7[0] = uVar51;
      auVar7[2] = uVar53;
      auVar7[3] = uVar54;
      auVar7[4] = uVar55;
      auVar7[5] = uVar56;
      auVar7[6] = uVar57;
      auVar7[7] = uVar58;
      auVar7[8] = uVar59;
      auVar7[9] = uVar60;
      auVar7[10] = uVar61;
      auVar7[0xb] = uVar62;
      auVar7[0xc] = uVar63;
      auVar7[0xd] = uVar64;
      auVar7[0xe] = uVar65;
      auVar7[0xf] = uVar66;
      auVar68 = NEON_ext(auVar68,auVar7,8,1);
      uVar30 = (ulong)(uint)(CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) +
                             auVar68._0_4_ +
                            CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) +
                            auVar68._4_4_);
      puVar32 = puVar25;
      if (0 < (long)uVar22) {
        do {
          uVar30 = (ulong)(*puVar32 + (int)uVar30);
          uVar22 = uVar22 - 1;
          puVar32 = puVar32 + 1;
        } while (uVar22 != 0);
      }
      for (; lVar31 < (long)uStack_168; lVar31 = lVar31 + 1) {
        uVar30 = (ulong)(puVar25[lVar31] + (int)uVar30);
      }
    }
  }
  iVar20 = iVar20 + 1;
  piVar17 = (int *)((long)iVar20 << 2);
  piStack_1c8 = piVar17;
  lStack_1c0 = (long)iVar20;
  if (puVar16[1] == (long)iVar20) {
LAB_1099810c8:
    puVar16[1] = lStack_1c0;
    iVar20 = (int)uVar30 + (int)uStack_168 * 2 + (int)uVar30 / 5;
    unaff_x27 = (ulong)iVar20;
    piVar15 = piVar17;
    if (*(long *)(piVar33 + 0x10) < (long)iVar20) {
      unaff_x23 = (int *)(unaff_x27 << 2);
      if (iVar20 < 0) {
        unaff_x23 = (int *)0xffffffffffffffff;
      }
      param_1 = unaff_x23;
      __Znam();
      __Znam();
      uVar22 = *(ulong *)(piVar33 + 0xe);
      if ((long)unaff_x27 <= (long)*(ulong *)(piVar33 + 0xe)) {
        uVar22 = unaff_x27;
      }
      piVar14 = *(int **)(piVar33 + 10);
      if ((long)uVar22 < 1) {
        lVar31 = *(long *)(piVar33 + 0xc);
      }
      else {
        unaff_x26 = (int *)(uVar22 << 2);
        _memcpy(param_1,piVar14,unaff_x26);
        lVar31 = *(long *)(piVar33 + 0xc);
        _memcpy(unaff_x23,lVar31,unaff_x26);
      }
      *(int **)(piVar33 + 10) = param_1;
      *(int **)(piVar33 + 0xc) = unaff_x23;
      *(ulong *)(piVar33 + 0x10) = unaff_x27;
      if (lVar31 != 0) {
        __ZdaPv(lVar31);
      }
      piVar15 = piStack_1c8;
      unaff_x28 = piVar48;
      if (piVar14 != (int *)0x0) {
        __ZdaPv(piVar14);
        piVar15 = piStack_1c8;
      }
    }
    *(ulong *)(piVar33 + 0xe) = unaff_x27;
    piVar17 = param_1;
    if ((int)uStack_168 * 8 + 8 < 0) goto LAB_109981d60;
    piVar14 = (int *)(lStack_1c0 * 0x20);
    piStack_1d0 = piVar14;
    uStack_190 = unaff_x27;
    if (piVar14 < (int *)0x20001) {
      uVar22 = uStack_168;
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      lVar31 = -((long)piVar14 + 0x1eU & 0xfffffffffffffff0);
      piVar10 = (int *)((long)aiStack_1f0 + lVar31);
      piVar14 = (int *)((long)aiStack_1f0 + lVar31);
      lVar31 = extraout_x12;
    }
    else {
      _malloc();
      piVar15 = piStack_1c8;
      uVar22 = uStack_168;
      lVar31 = lStack_1c0;
      if (piVar14 == (int *)0x0) goto LAB_109981d60;
    }
    unaff_x28 = piVar14 + lVar31;
    iVar35 = (int)lVar31;
    unaff_x26 = piVar14 + (iVar35 << 1);
    iVar20 = iVar35 * 3;
    piVar50 = piVar14 + iVar20;
    piStack_180 = piVar50;
    piVar17 = piVar14 + (iVar35 << 2);
    piVar1 = piVar14 + iVar35 * 5;
    piVar2 = piVar14 + iVar35 * 6;
    puStack_1e0 = puVar16;
    unaff_x23 = (int *)*puVar16;
    puVar25 = *(uint **)(piVar33 + 6);
    lVar31 = *(long *)(piVar33 + 0xc);
    piStack_1e8 = (int *)(uVar22 << 0x20);
    piStack_158 = piVar14 + iVar35 * 7;
    iVar21 = (int)uVar22;
    if (iVar21 < 1) {
      uStack_198 = (ulong)iVar21;
      piVar14[iVar21] = 0;
      if (-1 < iVar21) goto LAB_1099812c0;
      iStack_144 = 0;
      iStack_1d4 = 1;
    }
    else {
      uStack_198 = uVar22 & 0x7fffffff;
      piVar33 = piVar14;
      uVar36 = uStack_198;
      puVar32 = puVar25;
      do {
        *piVar33 = puVar32[1] - *puVar32;
        uVar36 = uVar36 - 1;
        piVar33 = piVar33 + 1;
        puVar32 = puVar32 + 1;
      } while (uVar36 != 0);
      piVar14[uStack_198] = 0;
LAB_1099812c0:
      piVar33 = (int *)0x0;
      do {
        *(undefined4 *)((long)piVar50 + (long)piVar33) = 0xffffffff;
        *(undefined4 *)((long)unaff_x23 + (long)piVar33) = 0xffffffff;
        *(undefined4 *)((long)unaff_x26 + (long)piVar33) = 0xffffffff;
        *(undefined4 *)((long)piStack_158 + (long)piVar33) = 0xffffffff;
        *(undefined4 *)((long)unaff_x28 + (long)piVar33) = 1;
        *(undefined4 *)((long)piVar2 + (long)piVar33) = 1;
        *(undefined4 *)((long)piVar17 + (long)piVar33) = 0;
        *(undefined4 *)((long)piVar1 + (long)piVar33) =
             *(undefined4 *)((long)piVar14 + (long)piVar33);
        piVar33 = piVar33 + 1;
      } while (piVar15 != piVar33);
      if (iVar21 != 0) {
        piVar33 = piVar2;
        uVar36 = uVar22 & 0x7fffffff;
        do {
          if (*piVar33 != 0) {
            *piVar33 = 1;
          }
          piVar33 = piVar33 + 1;
          uVar36 = uVar36 - 1;
        } while (uVar36 != 0);
        if (0 < iVar21) {
          uVar36 = 0;
          iStack_144 = 0;
          do {
            puVar32 = puVar25 + uVar36;
            uVar67 = *puVar32;
            if ((int)uVar67 < (int)puVar32[1]) {
              iVar19 = puVar32[1] - uVar67;
              puVar18 = (uint *)(lVar31 + (long)(int)uVar67 * 4);
              do {
                if (uVar36 == *puVar18) {
                  iVar19 = piVar1[uVar36];
                  if (iVar19 == 1) {
                    piVar17[uVar36] = -2;
                    iStack_144 = iStack_144 + 1;
                    *puVar32 = 0xffffffff;
                    piVar2[uVar36] = 0;
                    goto LAB_1099813bc;
                  }
                  if (iVar19 <= (int)uVar23) {
                    iVar13 = piVar50[iVar19];
                    if (iVar13 != -1) {
                      unaff_x23[iVar13] = (int)uVar36;
                      iVar13 = piVar50[iVar19];
                    }
                    unaff_x26[uVar36] = iVar13;
                    piVar50[iVar19] = (int)uVar36;
                    goto LAB_1099813bc;
                  }
                  break;
                }
                iVar19 = iVar19 + -1;
                puVar18 = puVar18 + 1;
              } while (iVar19 != 0);
            }
            unaff_x28[uVar36] = 0;
            piVar17[uVar36] = -1;
            iStack_144 = iStack_144 + 1;
            *puVar32 = -iVar21 - 2;
            unaff_x28[uStack_198] = unaff_x28[uStack_198] + 1;
LAB_1099813bc:
            uVar36 = uVar36 + 1;
          } while (uVar36 != (uVar22 & 0x7fffffff));
          iStack_1d4 = 0;
          goto LAB_10998141c;
        }
      }
      iStack_1d4 = 0;
      iStack_144 = 0;
    }
LAB_10998141c:
    piVar17[uStack_198] = -2;
    puVar25[uStack_198] = 0xffffffff;
    piVar2[uStack_198] = 0;
    if (iStack_144 < iVar21) {
      iStack_184 = 0;
      uVar36 = 0;
      uStack_1b8 = uVar22 & 0x7fffffff;
      iVar21 = 2;
      piStack_1b0 = piVar14 + iVar20;
      do {
        uVar23 = (uint)uVar30;
        iVar19 = (int)uVar36;
        if (iVar19 < (int)uVar22) {
          lVar24 = uStack_198 - (long)iVar19;
          piVar33 = piStack_1b0 + iVar19;
          do {
            iVar19 = *piVar33;
            if (iVar19 != -1) goto LAB_1099814a8;
            uVar36 = (ulong)((int)uVar36 + 1);
            lVar24 = lVar24 + -1;
            piVar33 = piVar33 + 1;
          } while (lVar24 != 0);
          iVar19 = -1;
          uVar36 = uVar22;
        }
        else {
          iVar19 = -1;
        }
LAB_1099814a8:
        lStack_170 = (long)iVar19;
        iVar13 = unaff_x26[iVar19];
        if (iVar13 != -1) {
          unaff_x23[iVar13] = -1;
          iVar13 = unaff_x26[lStack_170];
        }
        uVar67 = (uint)uVar36;
        piVar50[(int)uVar67] = iVar13;
        iStack_134 = piVar17[lStack_170];
        iStack_148 = unaff_x28[lStack_170];
        bVar11 = true;
        bVar12 = false;
        if (0 < iStack_134) {
          bVar12 = SBORROW4(uVar67 + uVar23,(int)uStack_190);
          bVar11 = (int)((uVar67 + uVar23) - (int)uStack_190) < 0;
        }
        uVar69 = uVar23;
        if (bVar11 == bVar12) {
          if (0 < (int)uVar22) {
            iVar13 = -2;
            puVar32 = puVar25;
            uVar30 = uStack_1b8;
            do {
              uVar69 = *puVar32;
              if (-1 < (int)uVar69) {
                *puVar32 = *(uint *)(lVar31 + (ulong)uVar69 * 4);
                *(int *)(lVar31 + (ulong)uVar69 * 4) = iVar13;
              }
              iVar13 = iVar13 + -1;
              puVar32 = puVar32 + 1;
              uVar30 = uVar30 - 1;
            } while (uVar30 != 0);
          }
          if ((int)uVar23 < 1) {
            uVar69 = 0;
          }
          else {
            iVar13 = 0;
            uVar69 = 0;
            do {
              lVar24 = (long)iVar13;
              iVar13 = iVar13 + 1;
              uVar70 = -*(int *)(lVar31 + lVar24 * 4) - 2;
              if (-1 < (int)uVar70) {
                *(uint *)(lVar31 + (long)(int)uVar69 * 4) = puVar25[uVar70];
                puVar25[uVar70] = uVar69;
                uVar69 = uVar69 + 1;
                if (1 < piVar14[uVar70]) {
                  lVar24 = 0;
                  do {
                    *(undefined4 *)(lVar31 + (long)(int)uVar69 * 4 + lVar24 * 4) =
                         *(undefined4 *)(lVar31 + (long)iVar13 * 4 + lVar24 * 4);
                    lVar24 = lVar24 + 1;
                    iVar37 = (int)lVar24;
                  } while (iVar37 < piVar14[uVar70] + -1);
                  iVar13 = iVar13 + iVar37;
                  uVar69 = uVar69 + iVar37;
                }
              }
            } while (iVar13 < (int)uVar23);
          }
        }
        iStack_144 = iStack_148 + iStack_144;
        unaff_x28[lStack_170] = -iStack_148;
        uVar23 = puVar25[lStack_170];
        uVar70 = uVar23;
        if (iStack_134 != 0) {
          uVar70 = uVar69;
        }
        uStack_178 = (ulong)uVar70;
        iVar13 = (int)uStack_168;
        if (iStack_134 < 0) {
          iVar37 = 0;
          piVar1[lStack_170] = 0;
          puVar25[lStack_170] = uVar69;
          piVar14[lStack_170] = 0;
          piVar17[lStack_170] = -2;
LAB_109981a70:
          piVar1[lStack_170] = iVar37;
          if (iStack_184 <= iVar37) {
            iStack_184 = iVar37;
          }
          iVar21 = iStack_184 + iVar21;
          unaff_x28[lStack_170] = iStack_148;
          piVar14[lStack_170] = 0;
LAB_109981a98:
          puVar25[lStack_170] = 0xffffffff;
          piVar2[lStack_170] = 0;
          uVar23 = uVar70;
        }
        else {
          iVar37 = 0;
          uVar71 = -iVar19 - 2;
          iVar34 = 1;
          piStack_140 = piVar14 + lStack_170;
          uVar30 = uStack_178;
          do {
            if (iStack_134 < iVar34) {
              iVar45 = *piStack_140 - iStack_134;
              uVar38 = uVar23;
              iVar41 = iVar19;
            }
            else {
              iVar41 = *(int *)(lVar31 + (long)(int)uVar23 * 4);
              uVar23 = uVar23 + 1;
              uVar38 = puVar25[iVar41];
              iVar45 = piVar14[iVar41];
            }
            if (0 < iVar45) {
              piVar33 = (int *)(lVar31 + (long)(int)uVar38 * 4);
              do {
                iVar42 = *piVar33;
                iVar4 = unaff_x28[iVar42];
                if (0 < iVar4) {
                  unaff_x28[iVar42] = -iVar4;
                  *(int *)(lVar31 + (long)(int)uVar30 * 4) = iVar42;
                  unaff_x27 = (ulong)unaff_x26[iVar42];
                  uVar38 = unaff_x23[iVar42];
                  if (unaff_x26[iVar42] != -1) {
                    unaff_x23[unaff_x27] = uVar38;
                    unaff_x27 = (ulong)(uint)unaff_x26[iVar42];
                  }
                  lVar24 = (long)(iVar35 << 1);
                  if (uVar38 == 0xffffffff) {
                    uVar38 = piVar1[iVar42];
                    lVar24 = (long)iVar20;
                  }
                  piVar48 = (int *)(ulong)uVar38;
                  iVar37 = iVar4 + iVar37;
                  uVar30 = (ulong)((int)uVar30 + 1);
                  piVar14[lVar24 + (int)uVar38] = (int)unaff_x27;
                }
                iVar45 = iVar45 + -1;
                piVar33 = piVar33 + 1;
              } while (iVar45 != 0);
            }
            if (iVar41 != iVar19) {
              puVar25[iVar41] = uVar71;
              piVar2[iVar41] = 0;
            }
            bVar11 = iVar34 != iStack_134 + 1;
            iVar34 = iVar34 + 1;
          } while (bVar11);
          piVar33 = piVar1 + lStack_170;
          *piVar33 = iVar37;
          puVar25[lStack_170] = uVar70;
          iVar34 = (int)uVar30;
          *piStack_140 = iVar34 - uVar70;
          piVar17[lStack_170] = -2;
          uStack_188 = uVar69;
          uStack_15c = uVar67;
          if (iVar34 - uVar70 == 0 || iVar34 < (int)uVar70) {
            uVar36 = uVar36 & 0xffffffff;
            goto LAB_109981a70;
          }
          unaff_x27 = (ulong)(int)uVar70;
          uStack_150 = (ulong)iVar34;
          uVar30 = unaff_x27;
          do {
            iVar45 = *(int *)(lVar31 + uVar30 * 4);
            iVar34 = piVar17[iVar45];
            if (0 < iVar34) {
              iVar41 = unaff_x28[iVar45];
              uVar23 = puVar25[iVar45];
              lVar24 = (long)(int)uVar23;
              do {
                iVar4 = *(int *)(lVar31 + lVar24 * 4);
                iVar42 = piVar2[iVar4];
                if (iVar42 < iVar21) {
                  if (iVar42 != 0) {
                    iVar42 = iVar41 + iVar21 + piVar1[iVar4];
                    goto LAB_109981748;
                  }
                }
                else {
                  iVar42 = iVar42 + iVar41;
LAB_109981748:
                  piVar2[iVar4] = iVar42;
                  uVar23 = puVar25[iVar45];
                }
                lVar24 = lVar24 + 1;
              } while (lVar24 < (int)(uVar23 + iVar34));
            }
            uVar30 = uVar30 + 1;
            uVar22 = unaff_x27;
          } while (uVar30 != uStack_150);
          do {
            iVar34 = *(int *)(lVar31 + uVar22 * 4);
            uVar38 = puVar25[iVar34];
            lVar24 = (long)(int)uVar38;
            iVar45 = piVar17[iVar34];
            uVar67 = iVar45 + uVar38;
            piVar48 = (int *)(ulong)uVar67;
            uVar23 = uVar38;
            if (iVar45 < 1) {
              iVar41 = 0;
              iVar42 = 0;
            }
            else {
              iVar42 = 0;
              iVar41 = 0;
              lVar26 = lVar24;
              do {
                iVar4 = *(int *)(lVar31 + lVar26 * 4);
                if (piVar2[iVar4] != 0) {
                  iVar6 = piVar2[iVar4] - iVar21;
                  if (iVar6 < 1) {
                    puVar25[iVar4] = uVar71;
                    piVar2[iVar4] = 0;
                  }
                  else {
                    iVar41 = iVar6 + iVar41;
                    *(int *)(lVar31 + (long)(int)uVar23 * 4) = iVar4;
                    uVar23 = uVar23 + 1;
                    iVar42 = iVar4 + iVar42;
                  }
                }
                lVar26 = lVar26 + 1;
              } while (lVar26 < (int)uVar67);
            }
            piVar17[iVar34] = (uVar23 - uVar38) + 1;
            iVar4 = piVar14[iVar34];
            uVar39 = uVar23;
            if (iVar45 < iVar4) {
              lVar26 = (long)(int)uVar67;
              do {
                iVar45 = *(int *)(lVar31 + lVar26 * 4);
                if (0 < unaff_x28[iVar45]) {
                  iVar41 = unaff_x28[iVar45] + iVar41;
                  *(int *)(lVar31 + (long)(int)uVar39 * 4) = iVar45;
                  uVar39 = uVar39 + 1;
                  iVar42 = iVar45 + iVar42;
                }
                lVar26 = lVar26 + 1;
              } while (lVar26 < (int)(iVar4 + uVar38));
              if (iVar41 != 0) goto LAB_10998184c;
LAB_1099818a8:
              puVar25[iVar34] = uVar71;
              iVar45 = unaff_x28[iVar34];
              iVar37 = iVar45 + iVar37;
              iStack_148 = iStack_148 - iVar45;
              iStack_144 = iStack_144 - iVar45;
              unaff_x28[iVar34] = 0;
              piVar17[iVar34] = -1;
            }
            else {
              if (iVar41 == 0) goto LAB_1099818a8;
LAB_10998184c:
              if (piVar1[iVar34] <= iVar41) {
                iVar41 = piVar1[iVar34];
              }
              piVar1[iVar34] = iVar41;
              *(undefined4 *)(lVar31 + (long)(int)uVar39 * 4) =
                   *(undefined4 *)(lVar31 + (long)(int)uVar23 * 4);
              *(undefined4 *)(lVar31 + (long)(int)uVar23 * 4) = *(undefined4 *)(lVar31 + lVar24 * 4)
              ;
              *(int *)(lVar31 + lVar24 * 4) = iVar19;
              piVar14[iVar34] = (uVar39 - uVar38) + 1;
              iVar45 = 0;
              if (iVar13 != 0) {
                iVar45 = iVar42 / iVar13;
              }
              iVar42 = iVar42 - iVar45 * iVar13;
              unaff_x26[iVar34] = piStack_158[iVar42];
              piStack_158[iVar42] = iVar34;
              unaff_x23[iVar34] = iVar42;
            }
            uVar22 = uVar22 + 1;
          } while (uVar22 != uStack_150);
          *piVar33 = iVar37;
          if (iStack_184 <= iVar37) {
            iStack_184 = iVar37;
          }
          iVar21 = iStack_184 + iVar21;
          uVar30 = unaff_x27;
          do {
            iVar19 = *(int *)(lVar31 + uVar30 * 4);
            if (unaff_x28[iVar19] < 0) {
              uVar23 = piStack_158[unaff_x23[iVar19]];
              piStack_158[unaff_x23[iVar19]] = -1;
              do {
                piVar15 = (int *)(ulong)uVar23;
                if ((uVar23 == 0xffffffff) ||
                   (uVar67 = unaff_x26[(int)uVar23], uVar67 == 0xffffffff)) break;
                iVar19 = piVar14[(int)uVar23];
                iVar34 = piVar17[(int)uVar23];
                uVar71 = puVar25[(int)uVar23];
                lVar24 = (long)(int)uVar71;
                iVar45 = iVar19 + -1;
                if ((int)uVar71 < (int)(uVar71 + iVar45)) {
                  do {
                    piVar2[*(int *)(lVar31 + 4 + lVar24 * 4)] = iVar21;
                    lVar24 = lVar24 + 1;
                  } while (lVar24 < (int)(puVar25[(int)uVar23] + iVar45));
                  uVar67 = unaff_x26[(int)uVar23];
                  if (uVar67 == 0xffffffff) {
                    iVar21 = iVar21 + 1;
                    break;
                  }
                }
                do {
                  piVar48 = (int *)(ulong)uVar67;
                  if ((piVar14[(int)uVar67] == iVar19) && (piVar17[(int)uVar67] == iVar34)) {
                    uVar38 = puVar25[(int)uVar67];
                    uVar71 = uVar38;
                    if ((int)uVar38 <= (int)(uVar38 + iVar45)) {
                      uVar71 = uVar38 + iVar45;
                    }
                    lVar24 = (long)(int)uVar71 - (long)(int)uVar38;
                    piVar40 = (int *)(lVar31 + 4 + (long)(int)uVar38 * 4);
                    do {
                      if (lVar24 == 0) {
                        puVar25[(int)uVar67] = -uVar23 - 2;
                        unaff_x28[(int)uVar23] = unaff_x28[(int)uVar23] + unaff_x28[(int)uVar67];
                        unaff_x28[(int)uVar67] = 0;
                        piVar17[(int)uVar67] = -1;
                        uVar67 = unaff_x26[(int)uVar67];
                        unaff_x26[(int)piVar15] = uVar67;
                        goto LAB_1099819f4;
                      }
                      iVar41 = *piVar40;
                      lVar24 = lVar24 + -1;
                      piVar40 = piVar40 + 1;
                    } while (piVar2[iVar41] == iVar21);
                  }
                  uVar67 = unaff_x26[(int)uVar67];
                  piVar15 = piVar48;
LAB_1099819f4:
                } while (uVar67 != 0xffffffff);
                uVar23 = unaff_x26[(int)uVar23];
                iVar21 = iVar21 + 1;
                piVar48 = piVar15;
              } while( true );
            }
            uVar30 = uVar30 + 1;
          } while (uVar30 != uStack_150);
          lVar24 = uStack_150 - unaff_x27;
          uVar30 = uStack_178;
          piVar15 = (int *)(lVar31 + unaff_x27 * 4);
          do {
            iVar19 = *piVar15;
            iVar34 = unaff_x28[iVar19];
            if (iVar34 < 0) {
              unaff_x28[iVar19] = -iVar34;
              uVar23 = iVar34 + iVar37 + piVar1[iVar19];
              uVar67 = (iVar13 - iStack_144) + iVar34;
              if ((int)uVar23 <= (int)uVar67) {
                uVar67 = uVar23;
              }
              if (piVar50[(int)uVar67] == -1) {
                iVar34 = -1;
              }
              else {
                unaff_x23[piVar50[(int)uVar67]] = iVar19;
                iVar34 = piVar50[(int)uVar67];
              }
              unaff_x26[iVar19] = iVar34;
              unaff_x23[iVar19] = -1;
              piVar50[(int)uVar67] = iVar19;
              uVar23 = uVar67;
              if ((int)uStack_15c <= (int)uVar67) {
                uVar23 = uStack_15c;
              }
              piVar1[iVar19] = uVar67;
              *(int *)(lVar31 + (long)(int)uVar30 * 4) = iVar19;
              uVar30 = (ulong)((int)uVar30 + 1);
              uStack_15c = uVar23;
            }
            uVar23 = (uint)uVar30;
            lVar24 = lVar24 + -1;
            piVar15 = piVar15 + 1;
          } while (lVar24 != 0);
          unaff_x28[lStack_170] = iStack_148;
          *piStack_140 = uVar23 - uVar70;
          uVar36 = (ulong)uStack_15c;
          piStack_1a8 = piVar33;
          uStack_1a0 = unaff_x27;
          if (uVar23 - uVar70 == 0) goto LAB_109981a98;
        }
        if (iStack_134 != 0) {
          uVar69 = uVar23;
        }
        uVar30 = (ulong)uVar69;
        uVar22 = uStack_168;
      } while (iStack_144 < iVar13);
    }
    if (0 < (int)uVar22) {
      uVar36 = uVar22 & 0x7fffffff;
      puVar32 = puVar25;
      do {
        *puVar32 = -*puVar32 - 2;
        uVar36 = uVar36 - 1;
        puVar32 = puVar32 + 1;
      } while (uVar36 != 0);
    }
    if (iStack_1d4 == 0) {
      _memset(piVar50,0xff,piStack_1c8);
      uVar30 = uVar22 & 0x7fffffff;
      uVar36 = uVar30;
      do {
        if (unaff_x28[uVar36] < 1) {
          unaff_x26[uVar36] = piVar50[(int)puVar25[uVar36]];
          piVar50[(int)puVar25[uVar36]] = (int)uVar36;
        }
        bVar11 = 0 < (long)uVar36;
        uVar36 = uVar36 - 1;
      } while (bVar11);
      do {
        if ((0 < unaff_x28[uVar30]) && (puVar25[uVar30] != 0xffffffff)) {
          unaff_x26[uVar30] = piVar50[(int)puVar25[uVar30]];
          piVar50[(int)puVar25[uVar30]] = (int)uVar30;
        }
        bVar11 = 0 < (long)uVar30;
        uVar30 = uVar30 - 1;
      } while (bVar11);
      lVar31 = 0;
      iVar20 = 0;
      do {
        iVar21 = iVar20;
        if (puVar25[lVar31] == 0xffffffff) {
          iVar21 = -1;
        }
        if (puVar25[lVar31] == 0xffffffff && unaff_x23 != (int *)0x0) {
          uVar30 = 0;
          *piVar2 = (int)lVar31;
          iVar21 = iVar20;
          do {
            while( true ) {
              iVar20 = piVar2[uVar30];
              iVar35 = piVar50[iVar20];
              if (iVar35 == -1) break;
              piVar50[iVar20] = unaff_x26[iVar35];
              uVar23 = (int)uVar30 + 1;
              uVar30 = (ulong)uVar23;
              piVar2[uVar30] = iVar35;
              if ((int)uVar23 < 0) goto LAB_109981ca4;
            }
            uVar23 = (int)uVar30 - 1;
            uVar30 = (ulong)uVar23;
            unaff_x23[iVar21] = iVar20;
            iVar21 = iVar21 + 1;
          } while (-1 < (int)uVar23);
        }
LAB_109981ca4:
        lVar31 = lVar31 + 1;
        uVar30 = uVar22;
        iVar20 = iVar21;
      } while (lVar31 != lStack_1c0);
    }
    puVar16 = puStack_1e0;
    piVar17 = piStack_1e8;
    if ((uStack_198 >> 0x3e != 0) || ((ulong)puStack_1e0[1] >> 0x3e != 0)) {
LAB_109981d3c:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x109981d60);
      (*pcVar9)();
    }
    pcVar43 = (char *)((long)piStack_1e8 >> 0x1e);
    piVar15 = unaff_x23;
    _realloc();
    if ((piVar17 != (int *)0x0) && (piVar15 == (int *)0x0)) goto LAB_109981d3c;
    *puVar16 = piVar15;
    puVar16[1] = uStack_198;
    if ((int *)0x20000 < piStack_1d0) {
      piVar15 = piVar14;
      _free();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
      return piVar15;
    }
  }
  else {
    _free(*puVar16);
    piVar17 = piStack_1c8;
    if ((int)uStack_168 < 0) {
      piVar15 = (int *)0x0;
LAB_1099810c0:
      *puVar16 = piVar15;
      goto LAB_1099810c8;
    }
    piVar15 = piStack_1c8;
    _malloc();
    param_1 = piVar17;
    if (piVar15 != (int *)0x0) goto LAB_1099810c0;
LAB_109981d60:
    piVar15 = (int *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    pcVar43 = PTR___ZTISt9bad_alloc_110346a68;
    ___cxa_throw();
    piVar10 = aiStack_1f0;
    piVar50 = piVar33;
  }
  ___stack_chk_fail();
  __ZdaPv(piVar17);
  piVar33 = piVar15;
  __Unwind_Resume();
  *(int **)((long)piVar10 + -0x60) = unaff_x28;
  *(ulong *)((long)piVar10 + -0x58) = unaff_x27;
  *(int **)((long)piVar10 + -0x50) = unaff_x26;
  *(int **)((long)piVar10 + -0x48) = piVar50;
  *(int **)((long)piVar10 + -0x40) = piVar48;
  *(int **)((long)piVar10 + -0x38) = unaff_x23;
  *(ulong *)((long)piVar10 + -0x30) = uVar30;
  *(int **)((long)piVar10 + -0x28) = piVar14;
  *(int **)((long)piVar10 + -0x20) = piVar17;
  *(int **)((long)piVar10 + -0x18) = piVar15;
  *(undefined1 ***)((long)piVar10 + -0x10) = &puStack_d0;
  *(code **)((long)piVar10 + -8) = FUN_109981db4;
  cVar5 = *pcVar43;
  *(int **)((long)piVar10 + -200) = piVar33;
  if (cVar5 == '\x01') {
    lVar31 = *(long *)(*(long *)(pcVar43 + 0x10) + 8);
    *(undefined8 *)(piVar33 + 4) = *(undefined8 *)(*(long *)(pcVar43 + 0x10) + 0x10);
    piVar33[0xe] = 0;
    piVar33[0xf] = 0;
    if (*(long *)(piVar33 + 2) == lVar31 && *(long *)(piVar33 + 2) != 0) {
LAB_109981e30:
      if (*(long *)(piVar33 + 8) != 0) {
        _free();
        piVar33 = *(int **)((long)piVar10 + -200);
        piVar33[8] = 0;
        piVar33[9] = 0;
        lVar31 = *(long *)(piVar33 + 2);
      }
      _bzero(*(undefined8 *)(piVar33 + 6),lVar31 * 4 + 4);
      piVar33 = *(int **)((long)piVar10 + -200);
      if (*(long *)(piVar33 + 8) != 0) {
        _free();
        piVar33 = *(int **)((long)piVar10 + -200);
        piVar33[8] = 0;
        piVar33[9] = 0;
      }
      goto LAB_109981e70;
    }
    _free(*(undefined8 *)(piVar33 + 6));
    lVar24 = lVar31 * 4 + 4;
    _malloc();
    piVar33 = *(int **)((long)piVar10 + -200);
    *(long *)(piVar33 + 6) = lVar24;
    if (lVar24 != 0) {
      *(long *)(piVar33 + 2) = lVar31;
      goto LAB_109981e30;
    }
  }
  else {
LAB_109981e70:
    unaff_x26 = *(int **)(pcVar43 + 8);
    lVar31 = *(long *)(pcVar43 + 0x10);
    lVar24 = *(long *)(lVar31 + 8);
    cVar5 = *pcVar43;
    *(int **)((long)piVar10 + -0x128) = unaff_x26;
    *(long *)((long)piVar10 + -0x120) = lVar24;
    *(long *)((long)piVar10 + -0x130) = lVar31;
    if (cVar5 != '\x01') {
      lVar29 = *(long *)(lVar31 + 0x10);
      *(undefined1 *)((long)piVar10 + -0xb0) = 0;
      *(undefined8 *)((long)piVar10 + -0xa0) = 0;
      *(undefined8 *)((long)piVar10 + -0xa8) = 0;
      *(undefined8 *)((long)piVar10 + -0x90) = 0;
      *(undefined8 *)((long)piVar10 + -0x98) = 0;
      *(undefined8 *)((long)piVar10 + -0x80) = 0;
      *(undefined8 *)((long)piVar10 + -0x88) = 0;
      *(undefined8 *)((long)piVar10 + -0x70) = 0;
      *(undefined8 *)((long)piVar10 + -0x78) = 0;
      *(long *)((long)piVar10 + -0xa0) = lVar29;
      lVar26 = 1;
      _calloc(1,lVar24 * 4 + 4);
      *(long *)((long)piVar10 + -0x98) = lVar26;
      *(long *)((long)piVar10 + -0x138) = lVar26;
      if (lVar26 != 0) {
        *(long *)((long)piVar10 + -0xa8) = lVar24;
        lVar26 = lVar29;
        if (lVar29 <= lVar24) {
          lVar26 = lVar24;
        }
        piVar14 = (int *)(lVar26 * 2);
        if (lVar29 * lVar24 <= lVar26 * 2) {
          piVar14 = (int *)(lVar29 * lVar24);
        }
        if ((long)piVar14 < 1) {
          pcVar27 = (char *)0x0;
          *(undefined8 *)((long)piVar10 + -0xb8) = 0;
          piVar14 = (int *)0x0;
        }
        else {
          pcVar27 = (char *)((long)piVar14 << 2);
          if ((ulong)piVar14 >> 0x3e != 0) {
            pcVar27 = (char *)0xffffffffffffffff;
          }
          pcVar43 = pcVar27;
          __Znam();
          *(char **)((long)piVar10 + -0xb8) = pcVar43;
          __Znam();
          *(undefined8 *)((long)piVar10 + -0x88) = *(undefined8 *)((long)piVar10 + -0xb8);
          *(char **)((long)piVar10 + -0x80) = pcVar27;
        }
        if (lVar24 < 1) {
          piVar33 = (int *)0x0;
        }
        else {
          lVar29 = 0;
          piVar33 = (int *)0x0;
          lVar26 = *(long *)((long)piVar10 + -0x138) + 4;
          *(long *)((long)piVar10 + -0x118) = lVar26;
          do {
            ((undefined4 *)(*(long *)((long)piVar10 + -0x138) + lVar29 * 4))[1] =
                 *(undefined4 *)(*(long *)((long)piVar10 + -0x138) + lVar29 * 4);
            piVar48 = (int *)(*(long *)(unaff_x26 + 6) + lVar29 * 4);
            lVar24 = (long)*piVar48;
            if (*(long *)(unaff_x26 + 8) == 0) {
              lVar44 = (long)piVar48[1];
            }
            else {
              lVar44 = *(int *)(*(long *)(unaff_x26 + 8) + lVar29 * 4) + lVar24;
            }
            uVar3 = *(undefined8 *)(unaff_x26 + 0xc);
            *(undefined8 *)((long)piVar10 + -0x100) = *(undefined8 *)(unaff_x26 + 10);
            *(undefined8 *)((long)piVar10 + -0xf8) = uVar3;
            uVar3 = *(undefined8 *)(lVar31 + 0x30);
            *(undefined8 *)((long)piVar10 + -0xf0) = *(undefined8 *)(lVar31 + 0x28);
            *(undefined8 *)((long)piVar10 + -0xe8) = uVar3;
            piVar48 = (int *)(*(long *)(lVar31 + 0x18) + lVar29 * 4);
            lVar47 = (long)*piVar48;
            if (*(long *)(lVar31 + 0x20) == 0) {
              lVar31 = (long)piVar48[1];
            }
            else {
              lVar31 = *(int *)(*(long *)(lVar31 + 0x20) + lVar29 * 4) + lVar47;
            }
            if (lVar24 < lVar44) {
              iVar21 = *(int *)(*(long *)((long)piVar10 + -0xf8) + lVar24 * 4);
              if (lVar47 < lVar31) {
                iVar20 = *(int *)(*(long *)((long)piVar10 + -0xe8) + lVar47 * 4);
                if (iVar21 != iVar20) {
                  if (iVar20 <= iVar21) {
                    if (iVar20 < iVar21) goto LAB_109982154;
                    goto LAB_109982324;
                  }
                  goto LAB_109982170;
                }
                iVar35 = *(int *)(*(long *)((long)piVar10 + -0xf0) + lVar47 * 4) +
                         *(int *)(*(long *)((long)piVar10 + -0x100) + lVar24 * 4);
                lVar47 = lVar47 + 1;
              }
              else {
LAB_109982170:
                iVar35 = *(int *)(*(long *)((long)piVar10 + -0x100) + lVar24 * 4);
              }
              lVar24 = lVar24 + 1;
joined_r0x000109982164:
              if (-1 < iVar21) {
                lVar46 = (long)piVar33 << 2;
                *(long *)((long)piVar10 + -0x110) = lVar31;
                *(long *)((long)piVar10 + -0x108) = lVar44;
                pcVar43 = pcVar27;
                unaff_x28 = piVar14;
                unaff_x26 = piVar33;
                do {
                  piVar33 = (int *)((long)unaff_x26 + 1);
                  iVar20 = *(int *)(lVar26 + lVar29 * 4);
                  *(int *)(lVar26 + lVar29 * 4) = iVar20 + 1;
                  if ((long)unaff_x26 < (long)unaff_x28) {
                    pcVar49 = *(char **)((long)piVar10 + -0xb8);
                    pcVar27 = pcVar43;
                    piVar14 = unaff_x28;
                  }
                  else {
                    *(int *)((long)piVar10 + -0xe0) = iVar35;
                    *(int *)((long)piVar10 + -0xd8) = iVar21;
                    *(long *)((long)piVar10 + -0xd0) = lVar47;
                    *(long *)((long)piVar10 + -0xc0) = lVar24;
                    piVar14 = (int *)((long)piVar33 + (long)(double)(long)piVar33);
                    if (0x7ffffffe < (long)piVar14) {
                      piVar14 = (int *)0x7fffffff;
                    }
                    if ((long)piVar14 <= (long)unaff_x26) goto LAB_109982768;
                    pcVar27 = (char *)((long)piVar14 << 2);
                    if ((ulong)piVar14 >> 0x3e != 0) {
                      pcVar27 = (char *)0xffffffffffffffff;
                    }
                    pcVar49 = pcVar27;
                    __Znam();
                    __Znam();
                    lVar31 = *(long *)((long)piVar10 + -0xb8);
                    if (0 < (long)unaff_x26) {
                      _memcpy(pcVar49,lVar31,lVar46);
                      _memcpy(pcVar27,pcVar43,lVar46);
                    }
                    if (pcVar43 != (char *)0x0) {
                      __ZdaPv(pcVar43);
                    }
                    if (lVar31 != 0) {
                      __ZdaPv(lVar31);
                    }
                    lVar26 = *(long *)((long)piVar10 + -0x118);
                    lVar31 = *(long *)((long)piVar10 + -0x110);
                    lVar24 = *(long *)((long)piVar10 + -0xc0);
                    lVar44 = *(long *)((long)piVar10 + -0x108);
                    lVar47 = *(long *)((long)piVar10 + -0xd0);
                    iVar21 = *(int *)((long)piVar10 + -0xd8);
                    iVar35 = *(int *)((long)piVar10 + -0xe0);
                  }
                  pcVar43 = pcVar49 + lVar46;
                  pcVar43[0] = '\0';
                  pcVar43[1] = '\0';
                  pcVar43[2] = '\0';
                  pcVar43[3] = '\0';
                  *(int *)(pcVar27 + lVar46) = iVar21;
                  *(int *)(pcVar49 + (long)iVar20 * 4) = iVar35;
                  *(char **)((long)piVar10 + -0xb8) = pcVar49;
                  if (lVar24 < lVar44) {
                    iVar21 = *(int *)(*(long *)((long)piVar10 + -0xf8) + lVar24 * 4);
                    if (lVar47 < lVar31) {
                      iVar20 = *(int *)(*(long *)((long)piVar10 + -0xe8) + lVar47 * 4);
                      if (iVar21 == iVar20) {
                        iVar35 = *(int *)(*(long *)((long)piVar10 + -0xf0) + lVar47 * 4) +
                                 *(int *)(*(long *)((long)piVar10 + -0x100) + lVar24 * 4);
                        lVar24 = lVar24 + 1;
                        lVar47 = lVar47 + 1;
                        goto LAB_109982300;
                      }
                      if (iVar20 <= iVar21) {
                        bVar11 = iVar20 < iVar21;
                        iVar21 = iVar20;
                        if (bVar11) goto LAB_1099822dc;
                        break;
                      }
                    }
                    iVar35 = *(int *)(*(long *)((long)piVar10 + -0x100) + lVar24 * 4);
                    lVar24 = lVar24 + 1;
                  }
                  else {
                    if (lVar31 <= lVar47) break;
                    iVar21 = *(int *)(*(long *)((long)piVar10 + -0xe8) + lVar47 * 4);
LAB_1099822dc:
                    iVar35 = *(int *)(*(long *)((long)piVar10 + -0xf0) + lVar47 * 4);
                    lVar47 = lVar47 + 1;
                  }
LAB_109982300:
                  lVar46 = lVar46 + 4;
                  pcVar43 = pcVar27;
                  unaff_x28 = piVar14;
                  unaff_x26 = piVar33;
                } while (-1 < iVar21);
              }
            }
            else if (lVar47 < lVar31) {
              iVar20 = *(int *)(*(long *)((long)piVar10 + -0xe8) + lVar47 * 4);
LAB_109982154:
              iVar35 = *(int *)(*(long *)((long)piVar10 + -0xf0) + lVar47 * 4);
              lVar47 = lVar47 + 1;
              iVar21 = iVar20;
              goto joined_r0x000109982164;
            }
LAB_109982324:
            lVar29 = lVar29 + 1;
            unaff_x26 = *(int **)((long)piVar10 + -0x128);
            lVar24 = *(long *)((long)piVar10 + -0x120);
            lVar31 = *(long *)((long)piVar10 + -0x130);
          } while (lVar29 != lVar24);
          *(undefined8 *)((long)piVar10 + -0x88) = *(undefined8 *)((long)piVar10 + -0xb8);
          *(char **)((long)piVar10 + -0x80) = pcVar27;
        }
        *(int **)((long)piVar10 + -0x78) = piVar33;
        *(int **)((long)piVar10 + -0x70) = piVar14;
        lVar31 = lVar24;
        if (-1 < lVar24) {
          do {
            if (*(int *)(*(long *)((long)piVar10 + -0x138) + lVar31 * 4) != 0) goto LAB_109982370;
            bVar11 = 0 < lVar31;
            lVar31 = lVar31 + -1;
          } while (bVar11);
          lVar31 = -1;
LAB_109982370:
          lVar26 = lVar24 - lVar31;
          if (lVar26 != 0 && lVar31 <= lVar24) {
            puVar28 = (undefined4 *)(*(long *)((long)piVar10 + -0x138) + lVar31 * 4);
            do {
              puVar28 = puVar28 + 1;
              *puVar28 = (int)piVar33;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
          }
        }
        *(undefined1 *)((long)piVar10 + -0xb0) = 1;
        FUN_10997cc60(*(undefined8 *)((long)piVar10 + -200),(undefined1 *)((long)piVar10 + -0xb0));
        _free(*(undefined8 *)((long)piVar10 + -0x98));
        _free(*(undefined8 *)((long)piVar10 + -0x90));
        if (*(long *)((long)piVar10 + -0x88) != 0) {
          __ZdaPv();
        }
        if (*(long *)((long)piVar10 + -0x80) != 0) {
          __ZdaPv();
        }
        return *(int **)((long)piVar10 + -200);
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1099827b8;
    }
    *(undefined8 *)(piVar33 + 4) = *(undefined8 *)(lVar31 + 0x10);
    piVar33[0xe] = 0;
    piVar33[0xf] = 0;
    if (*(long *)(piVar33 + 2) == lVar24 && *(long *)(piVar33 + 2) != 0) {
LAB_109981ecc:
      lVar26 = lVar24;
      if (*(long *)(piVar33 + 8) != 0) {
        _free();
        piVar33 = *(int **)((long)piVar10 + -200);
        piVar33[8] = 0;
        piVar33[9] = 0;
        lVar26 = *(long *)(piVar33 + 2);
      }
      _bzero(*(undefined8 *)(piVar33 + 6),lVar26 * 4 + 4);
      *(undefined8 *)(*(long *)((long)piVar10 + -200) + 0x38) = 0;
      _bzero(*(undefined8 *)(*(long *)((long)piVar10 + -200) + 0x18),
             *(long *)(*(long *)((long)piVar10 + -200) + 8) * 4 + 4);
      piVar14 = *(int **)((long)piVar10 + -200);
      if (*(long *)(piVar14 + 8) != 0) {
        _bzero(*(long *)(piVar14 + 8),*(long *)(piVar14 + 2) << 2);
        piVar14 = *(int **)((long)piVar10 + -200);
      }
      lVar29 = *(long *)(*(long *)(pcVar43 + 0x10) + 8);
      lVar44 = *(long *)(*(long *)(pcVar43 + 0x10) + 0x10);
      lVar26 = lVar44;
      if (lVar44 <= lVar29) {
        lVar26 = lVar29;
      }
      lVar47 = lVar26 * 2;
      if (lVar29 * lVar44 <= lVar26 * 2) {
        lVar47 = lVar29 * lVar44;
      }
      uVar22 = *(ulong *)(piVar14 + 0xe);
      uVar30 = lVar47 + uVar22;
      if (*(long *)(piVar14 + 0x10) < (long)uVar30) {
        lVar26 = uVar30 * 4;
        if (uVar30 >> 0x3e != 0) {
          lVar26 = -1;
        }
        lVar29 = lVar26;
        __Znam();
        __Znam();
        if ((long)uVar30 <= (long)uVar22) {
          uVar22 = uVar30;
        }
        piVar14 = *(int **)((long)piVar10 + -200);
        lVar44 = *(long *)(piVar14 + 10);
        if ((long)uVar22 < 1) {
          lVar47 = *(long *)(piVar14 + 0xc);
        }
        else {
          _memcpy(lVar29,lVar44,uVar22 << 2);
          lVar47 = *(long *)(*(long *)((long)piVar10 + -200) + 0x30);
          _memcpy(lVar26,lVar47,uVar22 << 2);
          piVar14 = *(int **)((long)piVar10 + -200);
        }
        *(long *)(piVar14 + 10) = lVar29;
        *(long *)(piVar14 + 0xc) = lVar26;
        *(ulong *)(piVar14 + 0x10) = uVar30;
        if (lVar47 != 0) {
          __ZdaPv(lVar47);
          piVar14 = *(int **)((long)piVar10 + -200);
        }
        if (lVar44 != 0) {
          __ZdaPv(lVar44);
          piVar14 = *(int **)((long)piVar10 + -200);
        }
      }
      if (0 < lVar24) {
        lVar24 = 0;
        do {
          puVar28 = (undefined4 *)(*(long *)(piVar14 + 6) + lVar24 * 4);
          puVar28[1] = *puVar28;
          piVar33 = (int *)(*(long *)(unaff_x26 + 6) + lVar24 * 4);
          lVar26 = (long)*piVar33;
          if (*(long *)(unaff_x26 + 8) == 0) {
            unaff_x28 = (int *)(long)piVar33[1];
          }
          else {
            unaff_x28 = (int *)(*(int *)(*(long *)(unaff_x26 + 8) + lVar24 * 4) + lVar26);
          }
          uVar3 = *(undefined8 *)(unaff_x26 + 0xc);
          *(undefined8 *)((long)piVar10 + -0xf0) = *(undefined8 *)(unaff_x26 + 10);
          *(undefined8 *)((long)piVar10 + -0xe8) = uVar3;
          uVar3 = *(undefined8 *)(lVar31 + 0x30);
          *(undefined8 *)((long)piVar10 + -0xe0) = *(undefined8 *)(lVar31 + 0x28);
          *(undefined8 *)((long)piVar10 + -0xd8) = uVar3;
          piVar33 = (int *)(*(long *)(lVar31 + 0x18) + lVar24 * 4);
          unaff_x26 = (int *)(long)*piVar33;
          if (*(long *)(lVar31 + 0x20) == 0) {
            lVar31 = (long)piVar33[1];
          }
          else {
            lVar31 = (long)*(int *)(*(long *)(lVar31 + 0x20) + lVar24 * 4) + (long)unaff_x26;
          }
          if (lVar26 < (long)unaff_x28) {
            iVar21 = *(int *)(*(long *)((long)piVar10 + -0xe8) + lVar26 * 4);
            if ((long)unaff_x26 < lVar31) {
              iVar20 = *(int *)(*(long *)((long)piVar10 + -0xd8) + (long)unaff_x26 * 4);
              if (iVar21 != iVar20) {
                if (iVar20 <= iVar21) {
                  if (iVar20 < iVar21) goto LAB_1099824c8;
                  goto LAB_1099826bc;
                }
                goto LAB_1099824e4;
              }
              iVar35 = *(int *)(*(long *)((long)piVar10 + -0xe0) + (long)unaff_x26 * 4) +
                       *(int *)(*(long *)((long)piVar10 + -0xf0) + lVar26 * 4);
              unaff_x26 = (int *)((long)unaff_x26 + 1);
            }
            else {
LAB_1099824e4:
              iVar35 = *(int *)(*(long *)((long)piVar10 + -0xf0) + lVar26 * 4);
            }
            lVar26 = lVar26 + 1;
joined_r0x0001099824d8:
            if (-1 < iVar21) {
              lVar29 = *(long *)(piVar14 + 0xe);
              pcVar43 = (char *)(lVar29 << 2);
              *(long *)((long)piVar10 + -0x100) = lVar31;
              *(int **)((long)piVar10 + -0xf8) = unaff_x28;
              do {
                lVar47 = lVar29 + 1;
                *(int *)((long)piVar10 + -0xc0) = iVar35;
                *(int *)((long)piVar10 + -0xb8) = iVar21;
                lVar44 = *(long *)(piVar14 + 6) + lVar24 * 4;
                iVar20 = *(int *)(lVar44 + 4);
                *(int *)(lVar44 + 4) = iVar20 + 1;
                if (*(long *)(piVar14 + 0x10) <= lVar29) {
                  *(int **)((long)piVar10 + -0xd0) = unaff_x26;
                  uVar30 = lVar47 + (long)(double)lVar47;
                  if (0x7ffffffe < (long)uVar30) {
                    uVar30 = 0x7fffffff;
                  }
                  if ((long)uVar30 <= lVar29) goto LAB_109982748;
                  lVar31 = uVar30 << 2;
                  if (uVar30 >> 0x3e != 0) {
                    lVar31 = -1;
                  }
                  lVar44 = lVar31;
                  __Znam();
                  __Znam();
                  piVar14 = *(int **)((long)piVar10 + -200);
                  lVar46 = *(long *)(piVar14 + 10);
                  if (lVar29 < 1) {
                    lVar29 = *(long *)(piVar14 + 0xc);
                  }
                  else {
                    _memcpy(lVar44,lVar46,pcVar43);
                    lVar29 = *(long *)(*(long *)((long)piVar10 + -200) + 0x30);
                    _memcpy(lVar31,lVar29,pcVar43);
                    piVar14 = *(int **)((long)piVar10 + -200);
                  }
                  *(long *)(piVar14 + 10) = lVar44;
                  *(long *)(piVar14 + 0xc) = lVar31;
                  *(ulong *)(piVar14 + 0x10) = uVar30;
                  if (lVar29 != 0) {
                    __ZdaPv(lVar29);
                    piVar14 = *(int **)((long)piVar10 + -200);
                  }
                  lVar31 = *(long *)((long)piVar10 + -0x100);
                  unaff_x28 = *(int **)((long)piVar10 + -0xf8);
                  unaff_x26 = *(int **)((long)piVar10 + -0xd0);
                  if (lVar46 != 0) {
                    __ZdaPv(lVar46);
                    piVar14 = *(int **)((long)piVar10 + -200);
                  }
                }
                lVar29 = *(long *)(piVar14 + 10);
                lVar44 = *(long *)(piVar14 + 0xc);
                pcVar27 = pcVar43 + lVar29;
                pcVar27[0] = '\0';
                pcVar27[1] = '\0';
                pcVar27[2] = '\0';
                pcVar27[3] = '\0';
                *(long *)(piVar14 + 0xe) = lVar47;
                *(undefined4 *)(pcVar43 + lVar44) = *(undefined4 *)((long)piVar10 + -0xb8);
                *(undefined4 *)(lVar29 + (long)iVar20 * 4) = *(undefined4 *)((long)piVar10 + -0xc0);
                if (lVar26 < (long)unaff_x28) {
                  iVar21 = *(int *)(*(long *)((long)piVar10 + -0xe8) + lVar26 * 4);
                  if ((long)unaff_x26 < lVar31) {
                    iVar20 = *(int *)(*(long *)((long)piVar10 + -0xd8) + (long)unaff_x26 * 4);
                    if (iVar21 == iVar20) {
                      iVar35 = *(int *)(*(long *)((long)piVar10 + -0xe0) + (long)unaff_x26 * 4) +
                               *(int *)(*(long *)((long)piVar10 + -0xf0) + lVar26 * 4);
                      lVar26 = lVar26 + 1;
                      unaff_x26 = (int *)((long)unaff_x26 + 1);
                      goto LAB_109982698;
                    }
                    if (iVar20 <= iVar21) {
                      bVar11 = iVar20 < iVar21;
                      iVar21 = iVar20;
                      if (bVar11) goto LAB_109982674;
                      break;
                    }
                  }
                  iVar35 = *(int *)(*(long *)((long)piVar10 + -0xf0) + lVar26 * 4);
                  lVar26 = lVar26 + 1;
                }
                else {
                  if (lVar31 <= (long)unaff_x26) break;
                  iVar21 = *(int *)(*(long *)((long)piVar10 + -0xd8) + (long)unaff_x26 * 4);
LAB_109982674:
                  iVar35 = *(int *)(*(long *)((long)piVar10 + -0xe0) + (long)unaff_x26 * 4);
                  unaff_x26 = (int *)((long)unaff_x26 + 1);
                }
LAB_109982698:
                pcVar43 = pcVar43 + 4;
                lVar29 = lVar47;
              } while (-1 < iVar21);
            }
          }
          else if ((long)unaff_x26 < lVar31) {
            iVar20 = *(int *)(*(long *)((long)piVar10 + -0xd8) + (long)unaff_x26 * 4);
LAB_1099824c8:
            iVar35 = *(int *)(*(long *)((long)piVar10 + -0xe0) + (long)unaff_x26 * 4);
            unaff_x26 = (int *)((long)unaff_x26 + 1);
            iVar21 = iVar20;
            goto joined_r0x0001099824d8;
          }
LAB_1099826bc:
          lVar24 = lVar24 + 1;
          unaff_x26 = *(int **)((long)piVar10 + -0x128);
          lVar31 = *(long *)((long)piVar10 + -0x130);
        } while (lVar24 != *(long *)((long)piVar10 + -0x120));
      }
      if ((*(long *)(piVar14 + 8) == 0) && (lVar31 = *(long *)(piVar14 + 2), -1 < lVar31)) {
        iVar20 = piVar14[0xe];
        lVar24 = lVar31;
        do {
          if (*(int *)(*(long *)(piVar14 + 6) + lVar24 * 4) != 0) goto LAB_109982728;
          bVar11 = 0 < lVar24;
          lVar24 = lVar24 + -1;
        } while (bVar11);
        lVar24 = -1;
LAB_109982728:
        lVar26 = lVar31 - lVar24;
        if (lVar26 != 0 && lVar24 <= lVar31) {
          piVar33 = (int *)(*(long *)(piVar14 + 6) + lVar24 * 4);
          do {
            piVar33 = piVar33 + 1;
            *piVar33 = iVar20;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
        }
      }
      return piVar14;
    }
    _free(*(undefined8 *)(piVar33 + 6));
    lVar26 = lVar24 * 4 + 4;
    _malloc();
    piVar33 = *(int **)((long)piVar10 + -200);
    *(long *)(piVar33 + 6) = lVar26;
    if (lVar26 != 0) {
      *(long *)(piVar33 + 2) = lVar24;
      goto LAB_109981ecc;
    }
  }
LAB_109982748:
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109982768:
  *(int **)((long)piVar10 + -0x78) = unaff_x26;
  *(int **)((long)piVar10 + -0x70) = unaff_x28;
  *(undefined8 *)((long)piVar10 + -0x88) = *(undefined8 *)((long)piVar10 + -0xb8);
  *(char **)((long)piVar10 + -0x80) = pcVar43;
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_1099827b8:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1099827bc);
  (*pcVar9)();
}



/* Entry: 109980ed8; end: 109981db3;  */

int * FUN_109980ed8(int *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined1 auVar6 [16];
  ulong uVar7;
  undefined8 *puVar8;
  code *pcVar9;
  int *piVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  uint *puVar22;
  long lVar23;
  char *pcVar24;
  undefined4 *puVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  uint *puVar29;
  int *piVar30;
  int iVar31;
  int *piVar32;
  int iVar33;
  long extraout_x12;
  ulong uVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  int *piVar38;
  int iVar39;
  int iVar40;
  int *unaff_x20;
  char *pcVar41;
  int *unaff_x21;
  long lVar42;
  int iVar43;
  long lVar44;
  int *unaff_x23;
  long lVar45;
  int *piVar46;
  char *pcVar47;
  int *piVar48;
  long lVar49;
  int *unaff_x26;
  ulong unaff_x27;
  int *unaff_x28;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  uint uVar66;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  undefined1 auVar67 [16];
  int aiStack_130 [2];
  int *piStack_128;
  undefined8 *puStack_120;
  int iStack_114;
  int *piStack_110;
  int *piStack_108;
  long lStack_100;
  ulong uStack_f8;
  int *piStack_f0;
  int *piStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  uint uStack_c8;
  int iStack_c4;
  int *piStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  uint uStack_9c;
  int *piStack_98;
  ulong uStack_90;
  int iStack_88;
  int iStack_84;
  int *piStack_80;
  int iStack_74;
  long lStack_70;
  
  piVar10 = aiStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a8 = *(ulong *)(param_1 + 2);
  iVar18 = (int)uStack_a8;
  uVar21 = (uint)(SQRT((double)iVar18) * 10.0);
  if ((int)uVar21 < 0x11) {
    uVar21 = 0x10;
  }
  if ((int)(iVar18 - 2U) <= (int)uVar21) {
    uVar21 = iVar18 - 2U;
  }
  piVar46 = (int *)(ulong)uVar21;
  puVar22 = *(uint **)(param_1 + 8);
  if (puVar22 == (uint *)0x0) {
    uVar27 = (ulong)(uint)((*(int **)(param_1 + 6))[uStack_a8] - **(int **)(param_1 + 6));
  }
  else if (uStack_a8 == 0) {
    uVar27 = 0;
  }
  else {
    uVar27 = (ulong)-((uint)puVar22 >> 2) & 3;
    if ((long)uStack_a8 <= (long)uVar27) {
      uVar27 = uStack_a8;
    }
    uVar20 = uStack_a8;
    if (((ulong)puVar22 & 3) == 0) {
      uVar20 = uVar27;
    }
    uVar34 = uStack_a8 - uVar20;
    uVar27 = uVar34 + 3;
    uVar7 = uVar34 + 7;
    if ((long)uVar20 <= (long)uStack_a8) {
      uVar27 = uVar34;
      uVar7 = uVar34;
    }
    if (uVar34 + 3 < 7) {
      uVar27 = (ulong)*puVar22;
      if (1 < (long)uStack_a8) {
        lVar28 = uStack_a8 - 1;
        do {
          puVar22 = puVar22 + 1;
          uVar27 = (ulong)(*puVar22 + (int)uVar27);
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
      }
    }
    else {
      puVar29 = puVar22 + uVar20;
      uVar2 = *(undefined8 *)(puVar29 + 2);
      uVar58 = (undefined1)uVar2;
      uVar59 = (undefined1)((ulong)uVar2 >> 8);
      uVar60 = (undefined1)((ulong)uVar2 >> 0x10);
      uVar61 = (undefined1)((ulong)uVar2 >> 0x18);
      uVar62 = (undefined1)((ulong)uVar2 >> 0x20);
      uVar63 = (undefined1)((ulong)uVar2 >> 0x28);
      uVar64 = (undefined1)((ulong)uVar2 >> 0x30);
      uVar65 = (undefined1)((ulong)uVar2 >> 0x38);
      uVar2 = *(undefined8 *)puVar29;
      uVar50 = (undefined1)uVar2;
      uVar51 = (undefined1)((ulong)uVar2 >> 8);
      uVar52 = (undefined1)((ulong)uVar2 >> 0x10);
      uVar53 = (undefined1)((ulong)uVar2 >> 0x18);
      uVar54 = (undefined1)((ulong)uVar2 >> 0x20);
      uVar55 = (undefined1)((ulong)uVar2 >> 0x28);
      uVar56 = (undefined1)((ulong)uVar2 >> 0x30);
      uVar57 = (undefined1)((ulong)uVar2 >> 0x38);
      if (7 < (long)uVar34) {
        lVar28 = (uVar7 & 0xfffffffffffffff8) + uVar20;
        uVar66 = puVar29[4];
        uVar68 = puVar29[5];
        uVar69 = puVar29[6];
        uVar70 = puVar29[7];
        if (0xf < uVar34) {
          lVar49 = uVar20 + 8;
          puVar29 = puVar29 + 0xc;
          do {
            iVar19 = (int)*(undefined8 *)(puVar29 + -4) +
                     CONCAT13(uVar53,CONCAT12(uVar52,CONCAT11(uVar51,uVar50)));
            uVar50 = (undefined1)iVar19;
            uVar51 = (undefined1)((uint)iVar19 >> 8);
            uVar52 = (undefined1)((uint)iVar19 >> 0x10);
            uVar53 = (undefined1)((uint)iVar19 >> 0x18);
            iVar19 = (int)((ulong)*(undefined8 *)(puVar29 + -4) >> 0x20) +
                     CONCAT13(uVar57,CONCAT12(uVar56,CONCAT11(uVar55,uVar54)));
            uVar54 = (undefined1)iVar19;
            uVar55 = (undefined1)((uint)iVar19 >> 8);
            uVar56 = (undefined1)((uint)iVar19 >> 0x10);
            uVar57 = (undefined1)((uint)iVar19 >> 0x18);
            iVar19 = (int)*(undefined8 *)(puVar29 + -2) +
                     CONCAT13(uVar61,CONCAT12(uVar60,CONCAT11(uVar59,uVar58)));
            uVar58 = (undefined1)iVar19;
            uVar59 = (undefined1)((uint)iVar19 >> 8);
            uVar60 = (undefined1)((uint)iVar19 >> 0x10);
            uVar61 = (undefined1)((uint)iVar19 >> 0x18);
            iVar19 = (int)((ulong)*(undefined8 *)(puVar29 + -2) >> 0x20) +
                     CONCAT13(uVar65,CONCAT12(uVar64,CONCAT11(uVar63,uVar62)));
            uVar62 = (undefined1)iVar19;
            uVar63 = (undefined1)((uint)iVar19 >> 8);
            uVar64 = (undefined1)((uint)iVar19 >> 0x10);
            uVar65 = (undefined1)((uint)iVar19 >> 0x18);
            uVar66 = (int)*(undefined8 *)puVar29 + uVar66;
            uVar68 = (int)((ulong)*(undefined8 *)puVar29 >> 0x20) + uVar68;
            uVar69 = (int)*(undefined8 *)(puVar29 + 2) + uVar69;
            uVar70 = (int)((ulong)*(undefined8 *)(puVar29 + 2) >> 0x20) + uVar70;
            lVar49 = lVar49 + 8;
            puVar29 = puVar29 + 8;
          } while (lVar49 < lVar28);
        }
        iVar19 = CONCAT13(uVar53,CONCAT12(uVar52,CONCAT11(uVar51,uVar50))) + uVar66;
        uVar50 = (undefined1)iVar19;
        uVar51 = (undefined1)((uint)iVar19 >> 8);
        uVar52 = (undefined1)((uint)iVar19 >> 0x10);
        uVar53 = (undefined1)((uint)iVar19 >> 0x18);
        iVar33 = CONCAT13(uVar57,CONCAT12(uVar56,CONCAT11(uVar55,uVar54))) + uVar68;
        uVar54 = (undefined1)iVar33;
        uVar55 = (undefined1)((uint)iVar33 >> 8);
        uVar56 = (undefined1)((uint)iVar33 >> 0x10);
        uVar57 = (undefined1)((uint)iVar33 >> 0x18);
        iVar17 = CONCAT13(uVar61,CONCAT12(uVar60,CONCAT11(uVar59,uVar58))) + uVar69;
        uVar58 = (undefined1)iVar17;
        uVar59 = (undefined1)((uint)iVar17 >> 8);
        uVar60 = (undefined1)((uint)iVar17 >> 0x10);
        uVar61 = (undefined1)((uint)iVar17 >> 0x18);
        iVar13 = CONCAT13(uVar65,CONCAT12(uVar64,CONCAT11(uVar63,uVar62))) + uVar70;
        uVar62 = (undefined1)iVar13;
        uVar63 = (undefined1)((uint)iVar13 >> 8);
        uVar64 = (undefined1)((uint)iVar13 >> 0x10);
        uVar65 = (undefined1)((uint)iVar13 >> 0x18);
        if ((long)(uVar7 & 0xfffffffffffffff8) < (long)(uVar27 & 0xfffffffffffffffc)) {
          puVar29 = puVar22 + lVar28;
          iVar19 = *puVar29 + iVar19;
          uVar50 = (undefined1)iVar19;
          uVar51 = (undefined1)((uint)iVar19 >> 8);
          uVar52 = (undefined1)((uint)iVar19 >> 0x10);
          uVar53 = (undefined1)((uint)iVar19 >> 0x18);
          iVar33 = puVar29[1] + iVar33;
          uVar54 = (undefined1)iVar33;
          uVar55 = (undefined1)((uint)iVar33 >> 8);
          uVar56 = (undefined1)((uint)iVar33 >> 0x10);
          uVar57 = (undefined1)((uint)iVar33 >> 0x18);
          iVar17 = puVar29[2] + iVar17;
          uVar58 = (undefined1)iVar17;
          uVar59 = (undefined1)((uint)iVar17 >> 8);
          uVar60 = (undefined1)((uint)iVar17 >> 0x10);
          uVar61 = (undefined1)((uint)iVar17 >> 0x18);
          iVar13 = puVar29[3] + iVar13;
          uVar62 = (undefined1)iVar13;
          uVar63 = (undefined1)((uint)iVar13 >> 8);
          uVar64 = (undefined1)((uint)iVar13 >> 0x10);
          uVar65 = (undefined1)((uint)iVar13 >> 0x18);
        }
      }
      lVar28 = (uVar27 & 0xfffffffffffffffc) + uVar20;
      auVar67[1] = uVar51;
      auVar67[0] = uVar50;
      auVar67[2] = uVar52;
      auVar67[3] = uVar53;
      auVar67[4] = uVar54;
      auVar67[5] = uVar55;
      auVar67[6] = uVar56;
      auVar67[7] = uVar57;
      auVar67[8] = uVar58;
      auVar67[9] = uVar59;
      auVar67[10] = uVar60;
      auVar67[0xb] = uVar61;
      auVar67[0xc] = uVar62;
      auVar67[0xd] = uVar63;
      auVar67[0xe] = uVar64;
      auVar67[0xf] = uVar65;
      auVar6[1] = uVar51;
      auVar6[0] = uVar50;
      auVar6[2] = uVar52;
      auVar6[3] = uVar53;
      auVar6[4] = uVar54;
      auVar6[5] = uVar55;
      auVar6[6] = uVar56;
      auVar6[7] = uVar57;
      auVar6[8] = uVar58;
      auVar6[9] = uVar59;
      auVar6[10] = uVar60;
      auVar6[0xb] = uVar61;
      auVar6[0xc] = uVar62;
      auVar6[0xd] = uVar63;
      auVar6[0xe] = uVar64;
      auVar6[0xf] = uVar65;
      auVar67 = NEON_ext(auVar67,auVar6,8,1);
      uVar27 = (ulong)(uint)(CONCAT13(uVar53,CONCAT12(uVar52,CONCAT11(uVar51,uVar50))) +
                             auVar67._0_4_ +
                            CONCAT13(uVar57,CONCAT12(uVar56,CONCAT11(uVar55,uVar54))) +
                            auVar67._4_4_);
      puVar29 = puVar22;
      if (0 < (long)uVar20) {
        do {
          uVar27 = (ulong)(*puVar29 + (int)uVar27);
          uVar20 = uVar20 - 1;
          puVar29 = puVar29 + 1;
        } while (uVar20 != 0);
      }
      for (; lVar28 < (long)uStack_a8; lVar28 = lVar28 + 1) {
        uVar27 = (ulong)(puVar22[lVar28] + (int)uVar27);
      }
    }
  }
  lStack_100 = (long)(iVar18 + 1);
  piVar15 = (int *)(lStack_100 << 2);
  piStack_108 = piVar15;
  if (param_2[1] == (long)(iVar18 + 1)) {
LAB_1099810c8:
    param_2[1] = lStack_100;
    iVar18 = (int)uVar27 + (int)uStack_a8 * 2 + (int)uVar27 / 5;
    unaff_x27 = (ulong)iVar18;
    piVar14 = piVar15;
    if (*(long *)(param_1 + 0x10) < (long)iVar18) {
      unaff_x23 = (int *)(unaff_x27 << 2);
      if (iVar18 < 0) {
        unaff_x23 = (int *)0xffffffffffffffff;
      }
      unaff_x20 = unaff_x23;
      __Znam();
      __Znam();
      uVar20 = *(ulong *)(param_1 + 0xe);
      if ((long)unaff_x27 <= (long)*(ulong *)(param_1 + 0xe)) {
        uVar20 = unaff_x27;
      }
      unaff_x21 = *(int **)(param_1 + 10);
      if ((long)uVar20 < 1) {
        lVar28 = *(long *)(param_1 + 0xc);
      }
      else {
        unaff_x26 = (int *)(uVar20 << 2);
        _memcpy(unaff_x20,unaff_x21,unaff_x26);
        lVar28 = *(long *)(param_1 + 0xc);
        _memcpy(unaff_x23,lVar28,unaff_x26);
      }
      *(int **)(param_1 + 10) = unaff_x20;
      *(int **)(param_1 + 0xc) = unaff_x23;
      *(ulong *)(param_1 + 0x10) = unaff_x27;
      if (lVar28 != 0) {
        __ZdaPv(lVar28);
      }
      piVar14 = piStack_108;
      unaff_x28 = piVar46;
      if (unaff_x21 != (int *)0x0) {
        __ZdaPv(unaff_x21);
        piVar14 = piStack_108;
      }
    }
    *(ulong *)(param_1 + 0xe) = unaff_x27;
    piVar15 = unaff_x20;
    if ((int)uStack_a8 * 8 + 8 < 0) goto LAB_109981d60;
    unaff_x21 = (int *)(lStack_100 * 0x20);
    piStack_110 = unaff_x21;
    uStack_d0 = unaff_x27;
    if (unaff_x21 < (int *)0x20001) {
      uVar20 = uStack_a8;
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      lVar28 = -((long)unaff_x21 + 0x1eU & 0xfffffffffffffff0);
      piVar10 = (int *)((long)aiStack_130 + lVar28);
      unaff_x21 = (int *)((long)aiStack_130 + lVar28);
      lVar28 = extraout_x12;
    }
    else {
      _malloc();
      piVar14 = piStack_108;
      uVar20 = uStack_a8;
      lVar28 = lStack_100;
      if (unaff_x21 == (int *)0x0) goto LAB_109981d60;
    }
    unaff_x28 = unaff_x21 + lVar28;
    iVar33 = (int)lVar28;
    unaff_x26 = unaff_x21 + (iVar33 << 1);
    iVar18 = iVar33 * 3;
    piVar48 = unaff_x21 + iVar18;
    piVar15 = unaff_x21 + (iVar33 << 2);
    piVar30 = unaff_x21 + iVar33 * 5;
    piVar1 = unaff_x21 + iVar33 * 6;
    unaff_x23 = (int *)*param_2;
    puVar22 = *(uint **)(param_1 + 6);
    lVar28 = *(long *)(param_1 + 0xc);
    piStack_128 = (int *)(uVar20 << 0x20);
    piStack_98 = unaff_x21 + iVar33 * 7;
    iVar19 = (int)uVar20;
    if (iVar19 < 1) {
      uStack_d8 = (ulong)iVar19;
      unaff_x21[iVar19] = 0;
      if (-1 < iVar19) goto LAB_1099812c0;
      iStack_84 = 0;
      iStack_114 = 1;
    }
    else {
      uStack_d8 = uVar20 & 0x7fffffff;
      piVar32 = unaff_x21;
      uVar34 = uStack_d8;
      puVar29 = puVar22;
      do {
        *piVar32 = puVar29[1] - *puVar29;
        uVar34 = uVar34 - 1;
        piVar32 = piVar32 + 1;
        puVar29 = puVar29 + 1;
      } while (uVar34 != 0);
      unaff_x21[uStack_d8] = 0;
LAB_1099812c0:
      piVar32 = (int *)0x0;
      do {
        *(undefined4 *)((long)piVar48 + (long)piVar32) = 0xffffffff;
        *(undefined4 *)((long)unaff_x23 + (long)piVar32) = 0xffffffff;
        *(undefined4 *)((long)unaff_x26 + (long)piVar32) = 0xffffffff;
        *(undefined4 *)((long)piStack_98 + (long)piVar32) = 0xffffffff;
        *(undefined4 *)((long)unaff_x28 + (long)piVar32) = 1;
        *(undefined4 *)((long)piVar1 + (long)piVar32) = 1;
        *(undefined4 *)((long)piVar15 + (long)piVar32) = 0;
        *(undefined4 *)((long)piVar30 + (long)piVar32) =
             *(undefined4 *)((long)unaff_x21 + (long)piVar32);
        piVar32 = piVar32 + 1;
      } while (piVar14 != piVar32);
      if (iVar19 != 0) {
        piVar14 = piVar1;
        uVar34 = uVar20 & 0x7fffffff;
        do {
          if (*piVar14 != 0) {
            *piVar14 = 1;
          }
          piVar14 = piVar14 + 1;
          uVar34 = uVar34 - 1;
        } while (uVar34 != 0);
        if (0 < iVar19) {
          uVar34 = 0;
          iStack_84 = 0;
          do {
            puVar29 = puVar22 + uVar34;
            uVar66 = *puVar29;
            if ((int)uVar66 < (int)puVar29[1]) {
              iVar17 = puVar29[1] - uVar66;
              puVar16 = (uint *)(lVar28 + (long)(int)uVar66 * 4);
              do {
                if (uVar34 == *puVar16) {
                  iVar17 = piVar30[uVar34];
                  if (iVar17 == 1) {
                    piVar15[uVar34] = -2;
                    iStack_84 = iStack_84 + 1;
                    *puVar29 = 0xffffffff;
                    piVar1[uVar34] = 0;
                    goto LAB_1099813bc;
                  }
                  if (iVar17 <= (int)uVar21) {
                    iVar13 = piVar48[iVar17];
                    if (iVar13 != -1) {
                      unaff_x23[iVar13] = (int)uVar34;
                      iVar13 = piVar48[iVar17];
                    }
                    unaff_x26[uVar34] = iVar13;
                    piVar48[iVar17] = (int)uVar34;
                    goto LAB_1099813bc;
                  }
                  break;
                }
                iVar17 = iVar17 + -1;
                puVar16 = puVar16 + 1;
              } while (iVar17 != 0);
            }
            unaff_x28[uVar34] = 0;
            piVar15[uVar34] = -1;
            iStack_84 = iStack_84 + 1;
            *puVar29 = -iVar19 - 2;
            unaff_x28[uStack_d8] = unaff_x28[uStack_d8] + 1;
LAB_1099813bc:
            uVar34 = uVar34 + 1;
          } while (uVar34 != (uVar20 & 0x7fffffff));
          iStack_114 = 0;
          goto LAB_10998141c;
        }
      }
      iStack_114 = 0;
      iStack_84 = 0;
    }
LAB_10998141c:
    piVar15[uStack_d8] = -2;
    puVar22[uStack_d8] = 0xffffffff;
    piVar1[uStack_d8] = 0;
    if (iStack_84 < iVar19) {
      iStack_c4 = 0;
      uVar34 = 0;
      uStack_f8 = uVar20 & 0x7fffffff;
      iVar19 = 2;
      piStack_f0 = unaff_x21 + iVar18;
      do {
        uVar21 = (uint)uVar27;
        iVar17 = (int)uVar34;
        if (iVar17 < (int)uVar20) {
          lVar49 = uStack_d8 - (long)iVar17;
          piVar14 = piStack_f0 + iVar17;
          do {
            iVar17 = *piVar14;
            if (iVar17 != -1) goto LAB_1099814a8;
            uVar34 = (ulong)((int)uVar34 + 1);
            lVar49 = lVar49 + -1;
            piVar14 = piVar14 + 1;
          } while (lVar49 != 0);
          iVar17 = -1;
          uVar34 = uVar20;
        }
        else {
          iVar17 = -1;
        }
LAB_1099814a8:
        lStack_b0 = (long)iVar17;
        iVar13 = unaff_x26[iVar17];
        if (iVar13 != -1) {
          unaff_x23[iVar13] = -1;
          iVar13 = unaff_x26[lStack_b0];
        }
        uVar66 = (uint)uVar34;
        piVar48[(int)uVar66] = iVar13;
        iStack_74 = piVar15[lStack_b0];
        iStack_88 = unaff_x28[lStack_b0];
        bVar11 = true;
        bVar12 = false;
        if (0 < iStack_74) {
          bVar12 = SBORROW4(uVar66 + uVar21,(int)uStack_d0);
          bVar11 = (int)((uVar66 + uVar21) - (int)uStack_d0) < 0;
        }
        uVar68 = uVar21;
        if (bVar11 == bVar12) {
          if (0 < (int)uVar20) {
            iVar13 = -2;
            puVar29 = puVar22;
            uVar27 = uStack_f8;
            do {
              uVar68 = *puVar29;
              if (-1 < (int)uVar68) {
                *puVar29 = *(uint *)(lVar28 + (ulong)uVar68 * 4);
                *(int *)(lVar28 + (ulong)uVar68 * 4) = iVar13;
              }
              iVar13 = iVar13 + -1;
              puVar29 = puVar29 + 1;
              uVar27 = uVar27 - 1;
            } while (uVar27 != 0);
          }
          if ((int)uVar21 < 1) {
            uVar68 = 0;
          }
          else {
            iVar13 = 0;
            uVar68 = 0;
            do {
              lVar49 = (long)iVar13;
              iVar13 = iVar13 + 1;
              uVar69 = -*(int *)(lVar28 + lVar49 * 4) - 2;
              if (-1 < (int)uVar69) {
                *(uint *)(lVar28 + (long)(int)uVar68 * 4) = puVar22[uVar69];
                puVar22[uVar69] = uVar68;
                uVar68 = uVar68 + 1;
                if (1 < unaff_x21[uVar69]) {
                  lVar49 = 0;
                  do {
                    *(undefined4 *)(lVar28 + (long)(int)uVar68 * 4 + lVar49 * 4) =
                         *(undefined4 *)(lVar28 + (long)iVar13 * 4 + lVar49 * 4);
                    lVar49 = lVar49 + 1;
                    iVar35 = (int)lVar49;
                  } while (iVar35 < unaff_x21[uVar69] + -1);
                  iVar13 = iVar13 + iVar35;
                  uVar68 = uVar68 + iVar35;
                }
              }
            } while (iVar13 < (int)uVar21);
          }
        }
        iStack_84 = iStack_88 + iStack_84;
        unaff_x28[lStack_b0] = -iStack_88;
        uVar21 = puVar22[lStack_b0];
        uVar69 = uVar21;
        if (iStack_74 != 0) {
          uVar69 = uVar68;
        }
        uStack_b8 = (ulong)uVar69;
        iVar13 = (int)uStack_a8;
        if (iStack_74 < 0) {
          iVar35 = 0;
          piVar30[lStack_b0] = 0;
          puVar22[lStack_b0] = uVar68;
          unaff_x21[lStack_b0] = 0;
          piVar15[lStack_b0] = -2;
LAB_109981a70:
          piVar30[lStack_b0] = iVar35;
          if (iStack_c4 <= iVar35) {
            iStack_c4 = iVar35;
          }
          iVar19 = iStack_c4 + iVar19;
          unaff_x28[lStack_b0] = iStack_88;
          unaff_x21[lStack_b0] = 0;
LAB_109981a98:
          puVar22[lStack_b0] = 0xffffffff;
          piVar1[lStack_b0] = 0;
          uVar21 = uVar69;
        }
        else {
          iVar35 = 0;
          uVar70 = -iVar17 - 2;
          iVar31 = 1;
          piStack_80 = unaff_x21 + lStack_b0;
          uVar27 = uStack_b8;
          do {
            if (iStack_74 < iVar31) {
              iVar43 = *piStack_80 - iStack_74;
              uVar36 = uVar21;
              iVar39 = iVar17;
            }
            else {
              iVar39 = *(int *)(lVar28 + (long)(int)uVar21 * 4);
              uVar21 = uVar21 + 1;
              uVar36 = puVar22[iVar39];
              iVar43 = unaff_x21[iVar39];
            }
            if (0 < iVar43) {
              piVar14 = (int *)(lVar28 + (long)(int)uVar36 * 4);
              do {
                iVar40 = *piVar14;
                iVar3 = unaff_x28[iVar40];
                if (0 < iVar3) {
                  unaff_x28[iVar40] = -iVar3;
                  *(int *)(lVar28 + (long)(int)uVar27 * 4) = iVar40;
                  unaff_x27 = (ulong)unaff_x26[iVar40];
                  uVar36 = unaff_x23[iVar40];
                  if (unaff_x26[iVar40] != -1) {
                    unaff_x23[unaff_x27] = uVar36;
                    unaff_x27 = (ulong)(uint)unaff_x26[iVar40];
                  }
                  lVar49 = (long)(iVar33 << 1);
                  if (uVar36 == 0xffffffff) {
                    uVar36 = piVar30[iVar40];
                    lVar49 = (long)iVar18;
                  }
                  piVar46 = (int *)(ulong)uVar36;
                  iVar35 = iVar3 + iVar35;
                  uVar27 = (ulong)((int)uVar27 + 1);
                  unaff_x21[lVar49 + (int)uVar36] = (int)unaff_x27;
                }
                iVar43 = iVar43 + -1;
                piVar14 = piVar14 + 1;
              } while (iVar43 != 0);
            }
            if (iVar39 != iVar17) {
              puVar22[iVar39] = uVar70;
              piVar1[iVar39] = 0;
            }
            bVar11 = iVar31 != iStack_74 + 1;
            iVar31 = iVar31 + 1;
          } while (bVar11);
          piVar14 = piVar30 + lStack_b0;
          *piVar14 = iVar35;
          puVar22[lStack_b0] = uVar69;
          iVar31 = (int)uVar27;
          *piStack_80 = iVar31 - uVar69;
          piVar15[lStack_b0] = -2;
          uStack_c8 = uVar68;
          uStack_9c = uVar66;
          if (iVar31 - uVar69 == 0 || iVar31 < (int)uVar69) {
            uVar34 = uVar34 & 0xffffffff;
            goto LAB_109981a70;
          }
          unaff_x27 = (ulong)(int)uVar69;
          uStack_90 = (ulong)iVar31;
          uVar27 = unaff_x27;
          do {
            iVar43 = *(int *)(lVar28 + uVar27 * 4);
            iVar31 = piVar15[iVar43];
            if (0 < iVar31) {
              iVar39 = unaff_x28[iVar43];
              uVar21 = puVar22[iVar43];
              lVar49 = (long)(int)uVar21;
              do {
                iVar3 = *(int *)(lVar28 + lVar49 * 4);
                iVar40 = piVar1[iVar3];
                if (iVar40 < iVar19) {
                  if (iVar40 != 0) {
                    iVar40 = iVar39 + iVar19 + piVar30[iVar3];
                    goto LAB_109981748;
                  }
                }
                else {
                  iVar40 = iVar40 + iVar39;
LAB_109981748:
                  piVar1[iVar3] = iVar40;
                  uVar21 = puVar22[iVar43];
                }
                lVar49 = lVar49 + 1;
              } while (lVar49 < (int)(uVar21 + iVar31));
            }
            uVar27 = uVar27 + 1;
            uVar20 = unaff_x27;
          } while (uVar27 != uStack_90);
          do {
            iVar31 = *(int *)(lVar28 + uVar20 * 4);
            uVar36 = puVar22[iVar31];
            lVar49 = (long)(int)uVar36;
            iVar43 = piVar15[iVar31];
            uVar66 = iVar43 + uVar36;
            piVar46 = (int *)(ulong)uVar66;
            uVar21 = uVar36;
            if (iVar43 < 1) {
              iVar39 = 0;
              iVar40 = 0;
            }
            else {
              iVar40 = 0;
              iVar39 = 0;
              lVar23 = lVar49;
              do {
                iVar3 = *(int *)(lVar28 + lVar23 * 4);
                if (piVar1[iVar3] != 0) {
                  iVar5 = piVar1[iVar3] - iVar19;
                  if (iVar5 < 1) {
                    puVar22[iVar3] = uVar70;
                    piVar1[iVar3] = 0;
                  }
                  else {
                    iVar39 = iVar5 + iVar39;
                    *(int *)(lVar28 + (long)(int)uVar21 * 4) = iVar3;
                    uVar21 = uVar21 + 1;
                    iVar40 = iVar3 + iVar40;
                  }
                }
                lVar23 = lVar23 + 1;
              } while (lVar23 < (int)uVar66);
            }
            piVar15[iVar31] = (uVar21 - uVar36) + 1;
            iVar3 = unaff_x21[iVar31];
            uVar37 = uVar21;
            if (iVar43 < iVar3) {
              lVar23 = (long)(int)uVar66;
              do {
                iVar43 = *(int *)(lVar28 + lVar23 * 4);
                if (0 < unaff_x28[iVar43]) {
                  iVar39 = unaff_x28[iVar43] + iVar39;
                  *(int *)(lVar28 + (long)(int)uVar37 * 4) = iVar43;
                  uVar37 = uVar37 + 1;
                  iVar40 = iVar43 + iVar40;
                }
                lVar23 = lVar23 + 1;
              } while (lVar23 < (int)(iVar3 + uVar36));
              if (iVar39 != 0) goto LAB_10998184c;
LAB_1099818a8:
              puVar22[iVar31] = uVar70;
              iVar43 = unaff_x28[iVar31];
              iVar35 = iVar43 + iVar35;
              iStack_88 = iStack_88 - iVar43;
              iStack_84 = iStack_84 - iVar43;
              unaff_x28[iVar31] = 0;
              piVar15[iVar31] = -1;
            }
            else {
              if (iVar39 == 0) goto LAB_1099818a8;
LAB_10998184c:
              if (piVar30[iVar31] <= iVar39) {
                iVar39 = piVar30[iVar31];
              }
              piVar30[iVar31] = iVar39;
              *(undefined4 *)(lVar28 + (long)(int)uVar37 * 4) =
                   *(undefined4 *)(lVar28 + (long)(int)uVar21 * 4);
              *(undefined4 *)(lVar28 + (long)(int)uVar21 * 4) = *(undefined4 *)(lVar28 + lVar49 * 4)
              ;
              *(int *)(lVar28 + lVar49 * 4) = iVar17;
              unaff_x21[iVar31] = (uVar37 - uVar36) + 1;
              iVar43 = 0;
              if (iVar13 != 0) {
                iVar43 = iVar40 / iVar13;
              }
              iVar40 = iVar40 - iVar43 * iVar13;
              unaff_x26[iVar31] = piStack_98[iVar40];
              piStack_98[iVar40] = iVar31;
              unaff_x23[iVar31] = iVar40;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 != uStack_90);
          *piVar14 = iVar35;
          if (iStack_c4 <= iVar35) {
            iStack_c4 = iVar35;
          }
          iVar19 = iStack_c4 + iVar19;
          uVar27 = unaff_x27;
          do {
            iVar17 = *(int *)(lVar28 + uVar27 * 4);
            if (unaff_x28[iVar17] < 0) {
              uVar21 = piStack_98[unaff_x23[iVar17]];
              piStack_98[unaff_x23[iVar17]] = -1;
              do {
                piVar32 = (int *)(ulong)uVar21;
                if ((uVar21 == 0xffffffff) ||
                   (uVar66 = unaff_x26[(int)uVar21], uVar66 == 0xffffffff)) break;
                iVar17 = unaff_x21[(int)uVar21];
                iVar31 = piVar15[(int)uVar21];
                uVar70 = puVar22[(int)uVar21];
                lVar49 = (long)(int)uVar70;
                iVar43 = iVar17 + -1;
                if ((int)uVar70 < (int)(uVar70 + iVar43)) {
                  do {
                    piVar1[*(int *)(lVar28 + 4 + lVar49 * 4)] = iVar19;
                    lVar49 = lVar49 + 1;
                  } while (lVar49 < (int)(puVar22[(int)uVar21] + iVar43));
                  uVar66 = unaff_x26[(int)uVar21];
                  if (uVar66 == 0xffffffff) {
                    iVar19 = iVar19 + 1;
                    break;
                  }
                }
                do {
                  piVar46 = (int *)(ulong)uVar66;
                  if ((unaff_x21[(int)uVar66] == iVar17) && (piVar15[(int)uVar66] == iVar31)) {
                    uVar36 = puVar22[(int)uVar66];
                    uVar70 = uVar36;
                    if ((int)uVar36 <= (int)(uVar36 + iVar43)) {
                      uVar70 = uVar36 + iVar43;
                    }
                    lVar49 = (long)(int)uVar70 - (long)(int)uVar36;
                    piVar38 = (int *)(lVar28 + 4 + (long)(int)uVar36 * 4);
                    do {
                      if (lVar49 == 0) {
                        puVar22[(int)uVar66] = -uVar21 - 2;
                        unaff_x28[(int)uVar21] = unaff_x28[(int)uVar21] + unaff_x28[(int)uVar66];
                        unaff_x28[(int)uVar66] = 0;
                        piVar15[(int)uVar66] = -1;
                        uVar66 = unaff_x26[(int)uVar66];
                        unaff_x26[(int)piVar32] = uVar66;
                        goto LAB_1099819f4;
                      }
                      iVar39 = *piVar38;
                      lVar49 = lVar49 + -1;
                      piVar38 = piVar38 + 1;
                    } while (piVar1[iVar39] == iVar19);
                  }
                  uVar66 = unaff_x26[(int)uVar66];
                  piVar32 = piVar46;
LAB_1099819f4:
                } while (uVar66 != 0xffffffff);
                uVar21 = unaff_x26[(int)uVar21];
                iVar19 = iVar19 + 1;
                piVar46 = piVar32;
              } while( true );
            }
            uVar27 = uVar27 + 1;
          } while (uVar27 != uStack_90);
          lVar49 = uStack_90 - unaff_x27;
          uVar27 = uStack_b8;
          piVar32 = (int *)(lVar28 + unaff_x27 * 4);
          do {
            iVar17 = *piVar32;
            iVar31 = unaff_x28[iVar17];
            if (iVar31 < 0) {
              unaff_x28[iVar17] = -iVar31;
              uVar21 = iVar31 + iVar35 + piVar30[iVar17];
              uVar66 = (iVar13 - iStack_84) + iVar31;
              if ((int)uVar21 <= (int)uVar66) {
                uVar66 = uVar21;
              }
              if (piVar48[(int)uVar66] == -1) {
                iVar31 = -1;
              }
              else {
                unaff_x23[piVar48[(int)uVar66]] = iVar17;
                iVar31 = piVar48[(int)uVar66];
              }
              unaff_x26[iVar17] = iVar31;
              unaff_x23[iVar17] = -1;
              piVar48[(int)uVar66] = iVar17;
              uVar21 = uVar66;
              if ((int)uStack_9c <= (int)uVar66) {
                uVar21 = uStack_9c;
              }
              piVar30[iVar17] = uVar66;
              *(int *)(lVar28 + (long)(int)uVar27 * 4) = iVar17;
              uVar27 = (ulong)((int)uVar27 + 1);
              uStack_9c = uVar21;
            }
            uVar21 = (uint)uVar27;
            lVar49 = lVar49 + -1;
            piVar32 = piVar32 + 1;
          } while (lVar49 != 0);
          unaff_x28[lStack_b0] = iStack_88;
          *piStack_80 = uVar21 - uVar69;
          uVar34 = (ulong)uStack_9c;
          piStack_e8 = piVar14;
          uStack_e0 = unaff_x27;
          if (uVar21 - uVar69 == 0) goto LAB_109981a98;
        }
        if (iStack_74 != 0) {
          uVar68 = uVar21;
        }
        uVar27 = (ulong)uVar68;
        uVar20 = uStack_a8;
      } while (iStack_84 < iVar13);
    }
    if (0 < (int)uVar20) {
      uVar34 = uVar20 & 0x7fffffff;
      puVar29 = puVar22;
      do {
        *puVar29 = -*puVar29 - 2;
        uVar34 = uVar34 - 1;
        puVar29 = puVar29 + 1;
      } while (uVar34 != 0);
    }
    puStack_120 = param_2;
    piStack_c0 = piVar48;
    if (iStack_114 == 0) {
      _memset(piVar48,0xff,piStack_108);
      uVar27 = uVar20 & 0x7fffffff;
      uVar34 = uVar27;
      do {
        if (unaff_x28[uVar34] < 1) {
          unaff_x26[uVar34] = piVar48[(int)puVar22[uVar34]];
          piVar48[(int)puVar22[uVar34]] = (int)uVar34;
        }
        bVar11 = 0 < (long)uVar34;
        uVar34 = uVar34 - 1;
      } while (bVar11);
      do {
        if ((0 < unaff_x28[uVar27]) && (puVar22[uVar27] != 0xffffffff)) {
          unaff_x26[uVar27] = piVar48[(int)puVar22[uVar27]];
          piVar48[(int)puVar22[uVar27]] = (int)uVar27;
        }
        bVar11 = 0 < (long)uVar27;
        uVar27 = uVar27 - 1;
      } while (bVar11);
      lVar28 = 0;
      iVar18 = 0;
      do {
        iVar19 = iVar18;
        if (puVar22[lVar28] == 0xffffffff) {
          iVar19 = -1;
        }
        if (puVar22[lVar28] == 0xffffffff && unaff_x23 != (int *)0x0) {
          uVar27 = 0;
          *piVar1 = (int)lVar28;
          iVar19 = iVar18;
          do {
            while( true ) {
              iVar18 = piVar1[uVar27];
              iVar33 = piVar48[iVar18];
              if (iVar33 == -1) break;
              piVar48[iVar18] = unaff_x26[iVar33];
              uVar21 = (int)uVar27 + 1;
              uVar27 = (ulong)uVar21;
              piVar1[uVar27] = iVar33;
              if ((int)uVar21 < 0) goto LAB_109981ca4;
            }
            uVar21 = (int)uVar27 - 1;
            uVar27 = (ulong)uVar21;
            unaff_x23[iVar19] = iVar18;
            iVar19 = iVar19 + 1;
          } while (-1 < (int)uVar21);
        }
LAB_109981ca4:
        lVar28 = lVar28 + 1;
        uVar27 = uVar20;
        iVar18 = iVar19;
      } while (lVar28 != lStack_100);
    }
    puVar8 = puStack_120;
    piVar15 = piStack_128;
    if ((uStack_d8 >> 0x3e != 0) || ((ulong)puStack_120[1] >> 0x3e != 0)) {
LAB_109981d3c:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x109981d60);
      (*pcVar9)();
    }
    pcVar41 = (char *)((long)piStack_128 >> 0x1e);
    piVar14 = unaff_x23;
    _realloc();
    if ((piVar15 != (int *)0x0) && (piVar14 == (int *)0x0)) goto LAB_109981d3c;
    *puVar8 = piVar14;
    puVar8[1] = uStack_d8;
    if ((int *)0x20000 < piStack_110) {
      piVar14 = unaff_x21;
      _free();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return piVar14;
    }
  }
  else {
    _free(*param_2);
    piVar15 = piStack_108;
    if ((int)uStack_a8 < 0) {
      piVar14 = (int *)0x0;
LAB_1099810c0:
      *param_2 = piVar14;
      goto LAB_1099810c8;
    }
    piVar14 = piStack_108;
    _malloc();
    unaff_x20 = piVar15;
    if (piVar14 != (int *)0x0) goto LAB_1099810c0;
LAB_109981d60:
    piVar14 = (int *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    pcVar41 = PTR___ZTISt9bad_alloc_110346a68;
    ___cxa_throw();
    piVar10 = aiStack_130;
    piVar48 = param_1;
  }
  ___stack_chk_fail();
  __ZdaPv(piVar15);
  piVar30 = piVar14;
  __Unwind_Resume();
  *(int **)((long)piVar10 + -0x60) = unaff_x28;
  *(ulong *)((long)piVar10 + -0x58) = unaff_x27;
  *(int **)((long)piVar10 + -0x50) = unaff_x26;
  *(int **)((long)piVar10 + -0x48) = piVar48;
  *(int **)((long)piVar10 + -0x40) = piVar46;
  *(int **)((long)piVar10 + -0x38) = unaff_x23;
  *(ulong *)((long)piVar10 + -0x30) = uVar27;
  *(int **)((long)piVar10 + -0x28) = unaff_x21;
  *(int **)((long)piVar10 + -0x20) = piVar15;
  *(int **)((long)piVar10 + -0x18) = piVar14;
  *(undefined1 **)((long)piVar10 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)piVar10 + -8) = FUN_109981db4;
  cVar4 = *pcVar41;
  *(int **)((long)piVar10 + -200) = piVar30;
  if (cVar4 == '\x01') {
    lVar28 = *(long *)(*(long *)(pcVar41 + 0x10) + 8);
    *(undefined8 *)(piVar30 + 4) = *(undefined8 *)(*(long *)(pcVar41 + 0x10) + 0x10);
    piVar30[0xe] = 0;
    piVar30[0xf] = 0;
    if (*(long *)(piVar30 + 2) == lVar28 && *(long *)(piVar30 + 2) != 0) {
LAB_109981e30:
      if (*(long *)(piVar30 + 8) != 0) {
        _free();
        piVar30 = *(int **)((long)piVar10 + -200);
        piVar30[8] = 0;
        piVar30[9] = 0;
        lVar28 = *(long *)(piVar30 + 2);
      }
      _bzero(*(undefined8 *)(piVar30 + 6),lVar28 * 4 + 4);
      piVar30 = *(int **)((long)piVar10 + -200);
      if (*(long *)(piVar30 + 8) != 0) {
        _free();
        piVar30 = *(int **)((long)piVar10 + -200);
        piVar30[8] = 0;
        piVar30[9] = 0;
      }
      goto LAB_109981e70;
    }
    _free(*(undefined8 *)(piVar30 + 6));
    lVar49 = lVar28 * 4 + 4;
    _malloc();
    piVar30 = *(int **)((long)piVar10 + -200);
    *(long *)(piVar30 + 6) = lVar49;
    if (lVar49 != 0) {
      *(long *)(piVar30 + 2) = lVar28;
      goto LAB_109981e30;
    }
  }
  else {
LAB_109981e70:
    unaff_x26 = *(int **)(pcVar41 + 8);
    lVar28 = *(long *)(pcVar41 + 0x10);
    lVar49 = *(long *)(lVar28 + 8);
    cVar4 = *pcVar41;
    *(int **)((long)piVar10 + -0x128) = unaff_x26;
    *(long *)((long)piVar10 + -0x120) = lVar49;
    *(long *)((long)piVar10 + -0x130) = lVar28;
    if (cVar4 != '\x01') {
      lVar26 = *(long *)(lVar28 + 0x10);
      *(undefined1 *)((long)piVar10 + -0xb0) = 0;
      *(undefined8 *)((long)piVar10 + -0xa0) = 0;
      *(undefined8 *)((long)piVar10 + -0xa8) = 0;
      *(undefined8 *)((long)piVar10 + -0x90) = 0;
      *(undefined8 *)((long)piVar10 + -0x98) = 0;
      *(undefined8 *)((long)piVar10 + -0x80) = 0;
      *(undefined8 *)((long)piVar10 + -0x88) = 0;
      *(undefined8 *)((long)piVar10 + -0x70) = 0;
      *(undefined8 *)((long)piVar10 + -0x78) = 0;
      *(long *)((long)piVar10 + -0xa0) = lVar26;
      lVar23 = 1;
      _calloc(1,lVar49 * 4 + 4);
      *(long *)((long)piVar10 + -0x98) = lVar23;
      *(long *)((long)piVar10 + -0x138) = lVar23;
      if (lVar23 != 0) {
        *(long *)((long)piVar10 + -0xa8) = lVar49;
        lVar23 = lVar26;
        if (lVar26 <= lVar49) {
          lVar23 = lVar49;
        }
        piVar46 = (int *)(lVar23 * 2);
        if (lVar26 * lVar49 <= lVar23 * 2) {
          piVar46 = (int *)(lVar26 * lVar49);
        }
        if ((long)piVar46 < 1) {
          pcVar24 = (char *)0x0;
          *(undefined8 *)((long)piVar10 + -0xb8) = 0;
          piVar46 = (int *)0x0;
        }
        else {
          pcVar24 = (char *)((long)piVar46 << 2);
          if ((ulong)piVar46 >> 0x3e != 0) {
            pcVar24 = (char *)0xffffffffffffffff;
          }
          pcVar41 = pcVar24;
          __Znam();
          *(char **)((long)piVar10 + -0xb8) = pcVar41;
          __Znam();
          *(undefined8 *)((long)piVar10 + -0x88) = *(undefined8 *)((long)piVar10 + -0xb8);
          *(char **)((long)piVar10 + -0x80) = pcVar24;
        }
        if (lVar49 < 1) {
          piVar15 = (int *)0x0;
        }
        else {
          lVar26 = 0;
          piVar15 = (int *)0x0;
          lVar23 = *(long *)((long)piVar10 + -0x138) + 4;
          *(long *)((long)piVar10 + -0x118) = lVar23;
          do {
            ((undefined4 *)(*(long *)((long)piVar10 + -0x138) + lVar26 * 4))[1] =
                 *(undefined4 *)(*(long *)((long)piVar10 + -0x138) + lVar26 * 4);
            piVar14 = (int *)(*(long *)(unaff_x26 + 6) + lVar26 * 4);
            lVar49 = (long)*piVar14;
            if (*(long *)(unaff_x26 + 8) == 0) {
              lVar42 = (long)piVar14[1];
            }
            else {
              lVar42 = *(int *)(*(long *)(unaff_x26 + 8) + lVar26 * 4) + lVar49;
            }
            uVar2 = *(undefined8 *)(unaff_x26 + 0xc);
            *(undefined8 *)((long)piVar10 + -0x100) = *(undefined8 *)(unaff_x26 + 10);
            *(undefined8 *)((long)piVar10 + -0xf8) = uVar2;
            uVar2 = *(undefined8 *)(lVar28 + 0x30);
            *(undefined8 *)((long)piVar10 + -0xf0) = *(undefined8 *)(lVar28 + 0x28);
            *(undefined8 *)((long)piVar10 + -0xe8) = uVar2;
            piVar14 = (int *)(*(long *)(lVar28 + 0x18) + lVar26 * 4);
            lVar45 = (long)*piVar14;
            if (*(long *)(lVar28 + 0x20) == 0) {
              lVar28 = (long)piVar14[1];
            }
            else {
              lVar28 = *(int *)(*(long *)(lVar28 + 0x20) + lVar26 * 4) + lVar45;
            }
            if (lVar49 < lVar42) {
              iVar19 = *(int *)(*(long *)((long)piVar10 + -0xf8) + lVar49 * 4);
              if (lVar45 < lVar28) {
                iVar18 = *(int *)(*(long *)((long)piVar10 + -0xe8) + lVar45 * 4);
                if (iVar19 != iVar18) {
                  if (iVar18 <= iVar19) {
                    if (iVar18 < iVar19) goto LAB_109982154;
                    goto LAB_109982324;
                  }
                  goto LAB_109982170;
                }
                iVar33 = *(int *)(*(long *)((long)piVar10 + -0xf0) + lVar45 * 4) +
                         *(int *)(*(long *)((long)piVar10 + -0x100) + lVar49 * 4);
                lVar45 = lVar45 + 1;
              }
              else {
LAB_109982170:
                iVar33 = *(int *)(*(long *)((long)piVar10 + -0x100) + lVar49 * 4);
              }
              lVar49 = lVar49 + 1;
joined_r0x000109982164:
              if (-1 < iVar19) {
                lVar44 = (long)piVar15 << 2;
                *(long *)((long)piVar10 + -0x110) = lVar28;
                *(long *)((long)piVar10 + -0x108) = lVar42;
                pcVar41 = pcVar24;
                unaff_x28 = piVar46;
                unaff_x26 = piVar15;
                do {
                  piVar15 = (int *)((long)unaff_x26 + 1);
                  iVar18 = *(int *)(lVar23 + lVar26 * 4);
                  *(int *)(lVar23 + lVar26 * 4) = iVar18 + 1;
                  if ((long)unaff_x26 < (long)unaff_x28) {
                    pcVar47 = *(char **)((long)piVar10 + -0xb8);
                    pcVar24 = pcVar41;
                    piVar46 = unaff_x28;
                  }
                  else {
                    *(int *)((long)piVar10 + -0xe0) = iVar33;
                    *(int *)((long)piVar10 + -0xd8) = iVar19;
                    *(long *)((long)piVar10 + -0xd0) = lVar45;
                    *(long *)((long)piVar10 + -0xc0) = lVar49;
                    piVar46 = (int *)((long)piVar15 + (long)(double)(long)piVar15);
                    if (0x7ffffffe < (long)piVar46) {
                      piVar46 = (int *)0x7fffffff;
                    }
                    if ((long)piVar46 <= (long)unaff_x26) goto LAB_109982768;
                    pcVar24 = (char *)((long)piVar46 << 2);
                    if ((ulong)piVar46 >> 0x3e != 0) {
                      pcVar24 = (char *)0xffffffffffffffff;
                    }
                    pcVar47 = pcVar24;
                    __Znam();
                    __Znam();
                    lVar28 = *(long *)((long)piVar10 + -0xb8);
                    if (0 < (long)unaff_x26) {
                      _memcpy(pcVar47,lVar28,lVar44);
                      _memcpy(pcVar24,pcVar41,lVar44);
                    }
                    if (pcVar41 != (char *)0x0) {
                      __ZdaPv(pcVar41);
                    }
                    if (lVar28 != 0) {
                      __ZdaPv(lVar28);
                    }
                    lVar23 = *(long *)((long)piVar10 + -0x118);
                    lVar28 = *(long *)((long)piVar10 + -0x110);
                    lVar49 = *(long *)((long)piVar10 + -0xc0);
                    lVar42 = *(long *)((long)piVar10 + -0x108);
                    lVar45 = *(long *)((long)piVar10 + -0xd0);
                    iVar19 = *(int *)((long)piVar10 + -0xd8);
                    iVar33 = *(int *)((long)piVar10 + -0xe0);
                  }
                  pcVar41 = pcVar47 + lVar44;
                  pcVar41[0] = '\0';
                  pcVar41[1] = '\0';
                  pcVar41[2] = '\0';
                  pcVar41[3] = '\0';
                  *(int *)(pcVar24 + lVar44) = iVar19;
                  *(int *)(pcVar47 + (long)iVar18 * 4) = iVar33;
                  *(char **)((long)piVar10 + -0xb8) = pcVar47;
                  if (lVar49 < lVar42) {
                    iVar19 = *(int *)(*(long *)((long)piVar10 + -0xf8) + lVar49 * 4);
                    if (lVar45 < lVar28) {
                      iVar18 = *(int *)(*(long *)((long)piVar10 + -0xe8) + lVar45 * 4);
                      if (iVar19 == iVar18) {
                        iVar33 = *(int *)(*(long *)((long)piVar10 + -0xf0) + lVar45 * 4) +
                                 *(int *)(*(long *)((long)piVar10 + -0x100) + lVar49 * 4);
                        lVar49 = lVar49 + 1;
                        lVar45 = lVar45 + 1;
                        goto LAB_109982300;
                      }
                      if (iVar18 <= iVar19) {
                        bVar11 = iVar18 < iVar19;
                        iVar19 = iVar18;
                        if (bVar11) goto LAB_1099822dc;
                        break;
                      }
                    }
                    iVar33 = *(int *)(*(long *)((long)piVar10 + -0x100) + lVar49 * 4);
                    lVar49 = lVar49 + 1;
                  }
                  else {
                    if (lVar28 <= lVar45) break;
                    iVar19 = *(int *)(*(long *)((long)piVar10 + -0xe8) + lVar45 * 4);
LAB_1099822dc:
                    iVar33 = *(int *)(*(long *)((long)piVar10 + -0xf0) + lVar45 * 4);
                    lVar45 = lVar45 + 1;
                  }
LAB_109982300:
                  lVar44 = lVar44 + 4;
                  pcVar41 = pcVar24;
                  unaff_x28 = piVar46;
                  unaff_x26 = piVar15;
                } while (-1 < iVar19);
              }
            }
            else if (lVar45 < lVar28) {
              iVar18 = *(int *)(*(long *)((long)piVar10 + -0xe8) + lVar45 * 4);
LAB_109982154:
              iVar33 = *(int *)(*(long *)((long)piVar10 + -0xf0) + lVar45 * 4);
              lVar45 = lVar45 + 1;
              iVar19 = iVar18;
              goto joined_r0x000109982164;
            }
LAB_109982324:
            lVar26 = lVar26 + 1;
            unaff_x26 = *(int **)((long)piVar10 + -0x128);
            lVar49 = *(long *)((long)piVar10 + -0x120);
            lVar28 = *(long *)((long)piVar10 + -0x130);
          } while (lVar26 != lVar49);
          *(undefined8 *)((long)piVar10 + -0x88) = *(undefined8 *)((long)piVar10 + -0xb8);
          *(char **)((long)piVar10 + -0x80) = pcVar24;
        }
        *(int **)((long)piVar10 + -0x78) = piVar15;
        *(int **)((long)piVar10 + -0x70) = piVar46;
        lVar28 = lVar49;
        if (-1 < lVar49) {
          do {
            if (*(int *)(*(long *)((long)piVar10 + -0x138) + lVar28 * 4) != 0) goto LAB_109982370;
            bVar11 = 0 < lVar28;
            lVar28 = lVar28 + -1;
          } while (bVar11);
          lVar28 = -1;
LAB_109982370:
          lVar23 = lVar49 - lVar28;
          if (lVar23 != 0 && lVar28 <= lVar49) {
            puVar25 = (undefined4 *)(*(long *)((long)piVar10 + -0x138) + lVar28 * 4);
            do {
              puVar25 = puVar25 + 1;
              *puVar25 = (int)piVar15;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
          }
        }
        *(undefined1 *)((long)piVar10 + -0xb0) = 1;
        FUN_10997cc60(*(undefined8 *)((long)piVar10 + -200),(undefined1 *)((long)piVar10 + -0xb0));
        _free(*(undefined8 *)((long)piVar10 + -0x98));
        _free(*(undefined8 *)((long)piVar10 + -0x90));
        if (*(long *)((long)piVar10 + -0x88) != 0) {
          __ZdaPv();
        }
        if (*(long *)((long)piVar10 + -0x80) != 0) {
          __ZdaPv();
        }
        return *(int **)((long)piVar10 + -200);
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1099827b8;
    }
    *(undefined8 *)(piVar30 + 4) = *(undefined8 *)(lVar28 + 0x10);
    piVar30[0xe] = 0;
    piVar30[0xf] = 0;
    if (*(long *)(piVar30 + 2) == lVar49 && *(long *)(piVar30 + 2) != 0) {
LAB_109981ecc:
      lVar23 = lVar49;
      if (*(long *)(piVar30 + 8) != 0) {
        _free();
        piVar30 = *(int **)((long)piVar10 + -200);
        piVar30[8] = 0;
        piVar30[9] = 0;
        lVar23 = *(long *)(piVar30 + 2);
      }
      _bzero(*(undefined8 *)(piVar30 + 6),lVar23 * 4 + 4);
      *(undefined8 *)(*(long *)((long)piVar10 + -200) + 0x38) = 0;
      _bzero(*(undefined8 *)(*(long *)((long)piVar10 + -200) + 0x18),
             *(long *)(*(long *)((long)piVar10 + -200) + 8) * 4 + 4);
      piVar46 = *(int **)((long)piVar10 + -200);
      if (*(long *)(piVar46 + 8) != 0) {
        _bzero(*(long *)(piVar46 + 8),*(long *)(piVar46 + 2) << 2);
        piVar46 = *(int **)((long)piVar10 + -200);
      }
      lVar26 = *(long *)(*(long *)(pcVar41 + 0x10) + 8);
      lVar42 = *(long *)(*(long *)(pcVar41 + 0x10) + 0x10);
      lVar23 = lVar42;
      if (lVar42 <= lVar26) {
        lVar23 = lVar26;
      }
      lVar45 = lVar23 * 2;
      if (lVar26 * lVar42 <= lVar23 * 2) {
        lVar45 = lVar26 * lVar42;
      }
      uVar20 = *(ulong *)(piVar46 + 0xe);
      uVar27 = lVar45 + uVar20;
      if (*(long *)(piVar46 + 0x10) < (long)uVar27) {
        lVar23 = uVar27 * 4;
        if (uVar27 >> 0x3e != 0) {
          lVar23 = -1;
        }
        lVar26 = lVar23;
        __Znam();
        __Znam();
        if ((long)uVar27 <= (long)uVar20) {
          uVar20 = uVar27;
        }
        piVar46 = *(int **)((long)piVar10 + -200);
        lVar42 = *(long *)(piVar46 + 10);
        if ((long)uVar20 < 1) {
          lVar45 = *(long *)(piVar46 + 0xc);
        }
        else {
          _memcpy(lVar26,lVar42,uVar20 << 2);
          lVar45 = *(long *)(*(long *)((long)piVar10 + -200) + 0x30);
          _memcpy(lVar23,lVar45,uVar20 << 2);
          piVar46 = *(int **)((long)piVar10 + -200);
        }
        *(long *)(piVar46 + 10) = lVar26;
        *(long *)(piVar46 + 0xc) = lVar23;
        *(ulong *)(piVar46 + 0x10) = uVar27;
        if (lVar45 != 0) {
          __ZdaPv(lVar45);
          piVar46 = *(int **)((long)piVar10 + -200);
        }
        if (lVar42 != 0) {
          __ZdaPv(lVar42);
          piVar46 = *(int **)((long)piVar10 + -200);
        }
      }
      if (0 < lVar49) {
        lVar49 = 0;
        do {
          puVar25 = (undefined4 *)(*(long *)(piVar46 + 6) + lVar49 * 4);
          puVar25[1] = *puVar25;
          piVar15 = (int *)(*(long *)(unaff_x26 + 6) + lVar49 * 4);
          lVar23 = (long)*piVar15;
          if (*(long *)(unaff_x26 + 8) == 0) {
            unaff_x28 = (int *)(long)piVar15[1];
          }
          else {
            unaff_x28 = (int *)(*(int *)(*(long *)(unaff_x26 + 8) + lVar49 * 4) + lVar23);
          }
          uVar2 = *(undefined8 *)(unaff_x26 + 0xc);
          *(undefined8 *)((long)piVar10 + -0xf0) = *(undefined8 *)(unaff_x26 + 10);
          *(undefined8 *)((long)piVar10 + -0xe8) = uVar2;
          uVar2 = *(undefined8 *)(lVar28 + 0x30);
          *(undefined8 *)((long)piVar10 + -0xe0) = *(undefined8 *)(lVar28 + 0x28);
          *(undefined8 *)((long)piVar10 + -0xd8) = uVar2;
          piVar15 = (int *)(*(long *)(lVar28 + 0x18) + lVar49 * 4);
          unaff_x26 = (int *)(long)*piVar15;
          if (*(long *)(lVar28 + 0x20) == 0) {
            lVar28 = (long)piVar15[1];
          }
          else {
            lVar28 = (long)*(int *)(*(long *)(lVar28 + 0x20) + lVar49 * 4) + (long)unaff_x26;
          }
          if (lVar23 < (long)unaff_x28) {
            iVar19 = *(int *)(*(long *)((long)piVar10 + -0xe8) + lVar23 * 4);
            if ((long)unaff_x26 < lVar28) {
              iVar18 = *(int *)(*(long *)((long)piVar10 + -0xd8) + (long)unaff_x26 * 4);
              if (iVar19 != iVar18) {
                if (iVar18 <= iVar19) {
                  if (iVar18 < iVar19) goto LAB_1099824c8;
                  goto LAB_1099826bc;
                }
                goto LAB_1099824e4;
              }
              iVar33 = *(int *)(*(long *)((long)piVar10 + -0xe0) + (long)unaff_x26 * 4) +
                       *(int *)(*(long *)((long)piVar10 + -0xf0) + lVar23 * 4);
              unaff_x26 = (int *)((long)unaff_x26 + 1);
            }
            else {
LAB_1099824e4:
              iVar33 = *(int *)(*(long *)((long)piVar10 + -0xf0) + lVar23 * 4);
            }
            lVar23 = lVar23 + 1;
joined_r0x0001099824d8:
            if (-1 < iVar19) {
              lVar26 = *(long *)(piVar46 + 0xe);
              pcVar41 = (char *)(lVar26 << 2);
              *(long *)((long)piVar10 + -0x100) = lVar28;
              *(int **)((long)piVar10 + -0xf8) = unaff_x28;
              do {
                lVar45 = lVar26 + 1;
                *(int *)((long)piVar10 + -0xc0) = iVar33;
                *(int *)((long)piVar10 + -0xb8) = iVar19;
                lVar42 = *(long *)(piVar46 + 6) + lVar49 * 4;
                iVar18 = *(int *)(lVar42 + 4);
                *(int *)(lVar42 + 4) = iVar18 + 1;
                if (*(long *)(piVar46 + 0x10) <= lVar26) {
                  *(int **)((long)piVar10 + -0xd0) = unaff_x26;
                  uVar27 = lVar45 + (long)(double)lVar45;
                  if (0x7ffffffe < (long)uVar27) {
                    uVar27 = 0x7fffffff;
                  }
                  if ((long)uVar27 <= lVar26) goto LAB_109982748;
                  lVar28 = uVar27 << 2;
                  if (uVar27 >> 0x3e != 0) {
                    lVar28 = -1;
                  }
                  lVar42 = lVar28;
                  __Znam();
                  __Znam();
                  piVar46 = *(int **)((long)piVar10 + -200);
                  lVar44 = *(long *)(piVar46 + 10);
                  if (lVar26 < 1) {
                    lVar26 = *(long *)(piVar46 + 0xc);
                  }
                  else {
                    _memcpy(lVar42,lVar44,pcVar41);
                    lVar26 = *(long *)(*(long *)((long)piVar10 + -200) + 0x30);
                    _memcpy(lVar28,lVar26,pcVar41);
                    piVar46 = *(int **)((long)piVar10 + -200);
                  }
                  *(long *)(piVar46 + 10) = lVar42;
                  *(long *)(piVar46 + 0xc) = lVar28;
                  *(ulong *)(piVar46 + 0x10) = uVar27;
                  if (lVar26 != 0) {
                    __ZdaPv(lVar26);
                    piVar46 = *(int **)((long)piVar10 + -200);
                  }
                  lVar28 = *(long *)((long)piVar10 + -0x100);
                  unaff_x28 = *(int **)((long)piVar10 + -0xf8);
                  unaff_x26 = *(int **)((long)piVar10 + -0xd0);
                  if (lVar44 != 0) {
                    __ZdaPv(lVar44);
                    piVar46 = *(int **)((long)piVar10 + -200);
                  }
                }
                lVar26 = *(long *)(piVar46 + 10);
                lVar42 = *(long *)(piVar46 + 0xc);
                pcVar24 = pcVar41 + lVar26;
                pcVar24[0] = '\0';
                pcVar24[1] = '\0';
                pcVar24[2] = '\0';
                pcVar24[3] = '\0';
                *(long *)(piVar46 + 0xe) = lVar45;
                *(undefined4 *)(pcVar41 + lVar42) = *(undefined4 *)((long)piVar10 + -0xb8);
                *(undefined4 *)(lVar26 + (long)iVar18 * 4) = *(undefined4 *)((long)piVar10 + -0xc0);
                if (lVar23 < (long)unaff_x28) {
                  iVar19 = *(int *)(*(long *)((long)piVar10 + -0xe8) + lVar23 * 4);
                  if ((long)unaff_x26 < lVar28) {
                    iVar18 = *(int *)(*(long *)((long)piVar10 + -0xd8) + (long)unaff_x26 * 4);
                    if (iVar19 == iVar18) {
                      iVar33 = *(int *)(*(long *)((long)piVar10 + -0xe0) + (long)unaff_x26 * 4) +
                               *(int *)(*(long *)((long)piVar10 + -0xf0) + lVar23 * 4);
                      lVar23 = lVar23 + 1;
                      unaff_x26 = (int *)((long)unaff_x26 + 1);
                      goto LAB_109982698;
                    }
                    if (iVar18 <= iVar19) {
                      bVar11 = iVar18 < iVar19;
                      iVar19 = iVar18;
                      if (bVar11) goto LAB_109982674;
                      break;
                    }
                  }
                  iVar33 = *(int *)(*(long *)((long)piVar10 + -0xf0) + lVar23 * 4);
                  lVar23 = lVar23 + 1;
                }
                else {
                  if (lVar28 <= (long)unaff_x26) break;
                  iVar19 = *(int *)(*(long *)((long)piVar10 + -0xd8) + (long)unaff_x26 * 4);
LAB_109982674:
                  iVar33 = *(int *)(*(long *)((long)piVar10 + -0xe0) + (long)unaff_x26 * 4);
                  unaff_x26 = (int *)((long)unaff_x26 + 1);
                }
LAB_109982698:
                pcVar41 = pcVar41 + 4;
                lVar26 = lVar45;
              } while (-1 < iVar19);
            }
          }
          else if ((long)unaff_x26 < lVar28) {
            iVar18 = *(int *)(*(long *)((long)piVar10 + -0xd8) + (long)unaff_x26 * 4);
LAB_1099824c8:
            iVar33 = *(int *)(*(long *)((long)piVar10 + -0xe0) + (long)unaff_x26 * 4);
            unaff_x26 = (int *)((long)unaff_x26 + 1);
            iVar19 = iVar18;
            goto joined_r0x0001099824d8;
          }
LAB_1099826bc:
          lVar49 = lVar49 + 1;
          unaff_x26 = *(int **)((long)piVar10 + -0x128);
          lVar28 = *(long *)((long)piVar10 + -0x130);
        } while (lVar49 != *(long *)((long)piVar10 + -0x120));
      }
      if ((*(long *)(piVar46 + 8) == 0) && (lVar28 = *(long *)(piVar46 + 2), -1 < lVar28)) {
        iVar18 = piVar46[0xe];
        lVar49 = lVar28;
        do {
          if (*(int *)(*(long *)(piVar46 + 6) + lVar49 * 4) != 0) goto LAB_109982728;
          bVar11 = 0 < lVar49;
          lVar49 = lVar49 + -1;
        } while (bVar11);
        lVar49 = -1;
LAB_109982728:
        lVar23 = lVar28 - lVar49;
        if (lVar23 != 0 && lVar49 <= lVar28) {
          piVar10 = (int *)(*(long *)(piVar46 + 6) + lVar49 * 4);
          do {
            piVar10 = piVar10 + 1;
            *piVar10 = iVar18;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
        }
      }
      return piVar46;
    }
    _free(*(undefined8 *)(piVar30 + 6));
    lVar23 = lVar49 * 4 + 4;
    _malloc();
    piVar30 = *(int **)((long)piVar10 + -200);
    *(long *)(piVar30 + 6) = lVar23;
    if (lVar23 != 0) {
      *(long *)(piVar30 + 2) = lVar49;
      goto LAB_109981ecc;
    }
  }
LAB_109982748:
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109982768:
  *(int **)((long)piVar10 + -0x78) = unaff_x26;
  *(int **)((long)piVar10 + -0x70) = unaff_x28;
  *(undefined8 *)((long)piVar10 + -0x88) = *(undefined8 *)((long)piVar10 + -0xb8);
  *(char **)((long)piVar10 + -0x80) = pcVar41;
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_1099827b8:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1099827bc);
  (*pcVar9)();
}



/* Entry: 109981db4; end: 109982843;  */

long FUN_109981db4(long param_1,char *param_2)

{
  bool bVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  char *pcVar8;
  long lVar9;
  char *pcVar10;
  undefined4 *puVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long unaff_x26;
  long lVar27;
  ulong unaff_x28;
  char *pcStack_b8;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  char *pcStack_88;
  char *pcStack_80;
  long lStack_78;
  ulong uStack_70;
  
  if (*param_2 == '\x01') {
    lVar19 = *(long *)(*(long *)(param_2 + 0x10) + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (*(long *)(param_1 + 8) == lVar19 && *(long *)(param_1 + 8) != 0) {
LAB_109981e30:
      if (*(long *)(param_1 + 0x20) != 0) {
        _free();
        *(undefined8 *)(param_1 + 0x20) = 0;
        lVar19 = *(long *)(param_1 + 8);
      }
      _bzero(*(undefined8 *)(param_1 + 0x18),lVar19 * 4 + 4);
      if (*(long *)(param_1 + 0x20) != 0) {
        _free();
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      goto LAB_109981e70;
    }
    _free(*(undefined8 *)(param_1 + 0x18));
    lVar14 = lVar19 * 4 + 4;
    _malloc();
    *(long *)(param_1 + 0x18) = lVar14;
    if (lVar14 != 0) {
      *(long *)(param_1 + 8) = lVar19;
      goto LAB_109981e30;
    }
  }
  else {
LAB_109981e70:
    lVar19 = *(long *)(param_2 + 8);
    lVar14 = *(long *)(param_2 + 0x10);
    lVar26 = *(long *)(lVar14 + 8);
    if (*param_2 != '\x01') {
      lVar24 = *(long *)(lVar14 + 0x10);
      auStack_b0[0] = 0;
      lStack_a8 = 0;
      uStack_90 = 0;
      lStack_98 = 0;
      pcStack_80 = (char *)0x0;
      pcStack_88 = (char *)0x0;
      uStack_70 = 0;
      lStack_78 = 0;
      lVar9 = 1;
      lStack_a0 = lVar24;
      _calloc(1,lVar26 * 4 + 4);
      lStack_98 = lVar9;
      if (lVar9 != 0) {
        lVar21 = lVar24;
        if (lVar24 <= lVar26) {
          lVar21 = lVar26;
        }
        unaff_x28 = lVar21 * 2;
        if (lVar24 * lVar26 <= lVar21 * 2) {
          unaff_x28 = lVar24 * lVar26;
        }
        lStack_a8 = lVar26;
        if ((long)unaff_x28 < 1) {
          param_2 = (char *)0x0;
          pcStack_b8 = (char *)0x0;
          unaff_x28 = 0;
        }
        else {
          param_2 = (char *)(unaff_x28 << 2);
          if (unaff_x28 >> 0x3e != 0) {
            param_2 = (char *)0xffffffffffffffff;
          }
          pcStack_b8 = param_2;
          __Znam();
          __Znam();
          pcStack_88 = pcStack_b8;
          pcStack_80 = param_2;
        }
        if (lVar26 < 1) {
          lVar24 = 0;
        }
        else {
          lVar21 = 0;
          lVar24 = 0;
          do {
            puVar11 = (undefined4 *)(lVar9 + lVar21 * 4);
            puVar11[1] = *puVar11;
            piVar3 = (int *)(*(long *)(lVar19 + 0x18) + lVar21 * 4);
            lVar23 = (long)*piVar3;
            if (*(long *)(lVar19 + 0x20) == 0) {
              lVar15 = (long)piVar3[1];
            }
            else {
              lVar15 = *(int *)(*(long *)(lVar19 + 0x20) + lVar21 * 4) + lVar23;
            }
            lVar27 = *(long *)(lVar19 + 0x28);
            lVar12 = *(long *)(lVar19 + 0x30);
            lVar25 = *(long *)(lVar14 + 0x28);
            lVar20 = *(long *)(lVar14 + 0x30);
            piVar3 = (int *)(*(long *)(lVar14 + 0x18) + lVar21 * 4);
            lVar16 = (long)*piVar3;
            if (*(long *)(lVar14 + 0x20) == 0) {
              lVar17 = (long)piVar3[1];
            }
            else {
              lVar17 = *(int *)(*(long *)(lVar14 + 0x20) + lVar21 * 4) + lVar16;
            }
            if (lVar23 < lVar15) {
              iVar18 = *(int *)(lVar12 + lVar23 * 4);
              if (lVar16 < lVar17) {
                iVar6 = *(int *)(lVar20 + lVar16 * 4);
                if (iVar18 != iVar6) {
                  if (iVar6 <= iVar18) {
                    if (iVar6 < iVar18) goto LAB_109982154;
                    goto LAB_109982324;
                  }
                  goto LAB_109982170;
                }
                iVar13 = *(int *)(lVar25 + lVar16 * 4) + *(int *)(lVar27 + lVar23 * 4);
                lVar16 = lVar16 + 1;
              }
              else {
LAB_109982170:
                iVar13 = *(int *)(lVar27 + lVar23 * 4);
              }
              lVar23 = lVar23 + 1;
joined_r0x000109982164:
              if (-1 < iVar18) {
                lVar22 = lVar24 << 2;
                unaff_x26 = lVar24;
                do {
                  lVar24 = unaff_x26 + 1;
                  iVar6 = *(int *)(lVar9 + 4 + lVar21 * 4);
                  *(int *)(lVar9 + 4 + lVar21 * 4) = iVar6 + 1;
                  pcVar8 = pcStack_b8;
                  if ((long)unaff_x28 <= unaff_x26) {
                    uVar2 = lVar24 + (long)(double)lVar24;
                    if (0x7ffffffe < (long)uVar2) {
                      uVar2 = 0x7fffffff;
                    }
                    if ((long)uVar2 <= unaff_x26) goto LAB_109982768;
                    pcVar10 = (char *)(uVar2 << 2);
                    if (uVar2 >> 0x3e != 0) {
                      pcVar10 = (char *)0xffffffffffffffff;
                    }
                    pcVar8 = pcVar10;
                    __Znam();
                    __Znam();
                    if (0 < unaff_x26) {
                      _memcpy(pcVar8,pcStack_b8,lVar22);
                      _memcpy(pcVar10,param_2,lVar22);
                    }
                    if (param_2 != (char *)0x0) {
                      __ZdaPv(param_2);
                    }
                    param_2 = pcVar10;
                    unaff_x28 = uVar2;
                    if (pcStack_b8 != (char *)0x0) {
                      __ZdaPv(pcStack_b8);
                    }
                  }
                  pcVar10 = pcVar8 + lVar22;
                  pcVar10[0] = '\0';
                  pcVar10[1] = '\0';
                  pcVar10[2] = '\0';
                  pcVar10[3] = '\0';
                  *(int *)(param_2 + lVar22) = iVar18;
                  *(int *)(pcVar8 + (long)iVar6 * 4) = iVar13;
                  pcStack_b8 = pcVar8;
                  if (lVar23 < lVar15) {
                    iVar18 = *(int *)(lVar12 + lVar23 * 4);
                    if (lVar16 < lVar17) {
                      iVar6 = *(int *)(lVar20 + lVar16 * 4);
                      if (iVar18 == iVar6) {
                        iVar13 = *(int *)(lVar25 + lVar16 * 4) + *(int *)(lVar27 + lVar23 * 4);
                        lVar23 = lVar23 + 1;
                        lVar16 = lVar16 + 1;
                        goto LAB_109982300;
                      }
                      if (iVar6 <= iVar18) {
                        bVar1 = iVar6 < iVar18;
                        iVar18 = iVar6;
                        if (bVar1) goto LAB_1099822dc;
                        break;
                      }
                    }
                    iVar13 = *(int *)(lVar27 + lVar23 * 4);
                    lVar23 = lVar23 + 1;
                  }
                  else {
                    if (lVar17 <= lVar16) break;
                    iVar18 = *(int *)(lVar20 + lVar16 * 4);
LAB_1099822dc:
                    iVar13 = *(int *)(lVar25 + lVar16 * 4);
                    lVar16 = lVar16 + 1;
                  }
LAB_109982300:
                  lVar22 = lVar22 + 4;
                  unaff_x26 = lVar24;
                } while (-1 < iVar18);
              }
            }
            else if (lVar16 < lVar17) {
              iVar6 = *(int *)(lVar20 + lVar16 * 4);
LAB_109982154:
              iVar13 = *(int *)(lVar25 + lVar16 * 4);
              lVar16 = lVar16 + 1;
              iVar18 = iVar6;
              goto joined_r0x000109982164;
            }
LAB_109982324:
            lVar21 = lVar21 + 1;
          } while (lVar21 != lVar26);
          pcStack_88 = pcStack_b8;
          pcStack_80 = param_2;
        }
        lVar19 = lVar26;
        if (-1 < lVar26) {
          do {
            if (*(int *)(lVar9 + lVar19 * 4) != 0) goto LAB_109982370;
            bVar1 = 0 < lVar19;
            lVar19 = lVar19 + -1;
          } while (bVar1);
          lVar19 = -1;
LAB_109982370:
          lVar14 = lVar26 - lVar19;
          if (lVar14 != 0 && lVar19 <= lVar26) {
            puVar11 = (undefined4 *)(lVar9 + lVar19 * 4);
            do {
              puVar11 = puVar11 + 1;
              *puVar11 = (int)lVar24;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
        }
        auStack_b0[0] = 1;
        lStack_78 = lVar24;
        uStack_70 = unaff_x28;
        FUN_10997cc60(param_1,auStack_b0);
        _free(lStack_98);
        _free(uStack_90);
        if (pcStack_88 != (char *)0x0) {
          __ZdaPv();
        }
        if (pcStack_80 == (char *)0x0) {
          return param_1;
        }
        __ZdaPv();
        return param_1;
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1099827b8;
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar14 + 0x10);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (*(long *)(param_1 + 8) == lVar26 && *(long *)(param_1 + 8) != 0) {
LAB_109981ecc:
      lVar9 = lVar26;
      if (*(long *)(param_1 + 0x20) != 0) {
        _free();
        *(undefined8 *)(param_1 + 0x20) = 0;
        lVar9 = *(long *)(param_1 + 8);
      }
      _bzero(*(undefined8 *)(param_1 + 0x18),lVar9 * 4 + 4);
      *(undefined8 *)(param_1 + 0x38) = 0;
      _bzero(*(undefined8 *)(param_1 + 0x18),*(long *)(param_1 + 8) * 4 + 4);
      if (*(long *)(param_1 + 0x20) != 0) {
        _bzero(*(long *)(param_1 + 0x20),*(long *)(param_1 + 8) << 2);
      }
      lVar24 = *(long *)(*(long *)(param_2 + 0x10) + 8);
      lVar21 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
      lVar9 = lVar21;
      if (lVar21 <= lVar24) {
        lVar9 = lVar24;
      }
      lVar23 = lVar9 * 2;
      if (lVar24 * lVar21 <= lVar9 * 2) {
        lVar23 = lVar24 * lVar21;
      }
      uVar4 = *(ulong *)(param_1 + 0x38);
      uVar2 = lVar23 + uVar4;
      if (*(long *)(param_1 + 0x40) < (long)uVar2) {
        lVar9 = uVar2 * 4;
        if (uVar2 >> 0x3e != 0) {
          lVar9 = -1;
        }
        lVar24 = lVar9;
        __Znam();
        __Znam();
        if ((long)uVar2 <= (long)uVar4) {
          uVar4 = uVar2;
        }
        lVar21 = *(long *)(param_1 + 0x28);
        if ((long)uVar4 < 1) {
          lVar23 = *(long *)(param_1 + 0x30);
        }
        else {
          _memcpy(lVar24,lVar21,uVar4 << 2);
          lVar23 = *(long *)(param_1 + 0x30);
          _memcpy(lVar9,lVar23,uVar4 << 2);
        }
        *(long *)(param_1 + 0x28) = lVar24;
        *(long *)(param_1 + 0x30) = lVar9;
        *(ulong *)(param_1 + 0x40) = uVar2;
        if (lVar23 != 0) {
          __ZdaPv(lVar23);
        }
        if (lVar21 != 0) {
          __ZdaPv(lVar21);
        }
      }
      if (0 < lVar26) {
        lVar9 = 0;
        do {
          puVar11 = (undefined4 *)(*(long *)(param_1 + 0x18) + lVar9 * 4);
          puVar11[1] = *puVar11;
          piVar3 = (int *)(*(long *)(lVar19 + 0x18) + lVar9 * 4);
          lVar24 = (long)*piVar3;
          if (*(long *)(lVar19 + 0x20) == 0) {
            unaff_x28 = (ulong)piVar3[1];
          }
          else {
            unaff_x28 = *(int *)(*(long *)(lVar19 + 0x20) + lVar9 * 4) + lVar24;
          }
          lVar21 = *(long *)(lVar19 + 0x28);
          lVar15 = *(long *)(lVar19 + 0x30);
          lVar23 = *(long *)(lVar14 + 0x28);
          lVar16 = *(long *)(lVar14 + 0x30);
          piVar3 = (int *)(*(long *)(lVar14 + 0x18) + lVar9 * 4);
          unaff_x26 = (long)*piVar3;
          if (*(long *)(lVar14 + 0x20) == 0) {
            lVar27 = (long)piVar3[1];
          }
          else {
            lVar27 = *(int *)(*(long *)(lVar14 + 0x20) + lVar9 * 4) + unaff_x26;
          }
          if (lVar24 < (long)unaff_x28) {
            iVar18 = *(int *)(lVar15 + lVar24 * 4);
            if (unaff_x26 < lVar27) {
              iVar6 = *(int *)(lVar16 + unaff_x26 * 4);
              if (iVar18 != iVar6) {
                if (iVar6 <= iVar18) {
                  if (iVar6 < iVar18) goto LAB_1099824c8;
                  goto LAB_1099826bc;
                }
                goto LAB_1099824e4;
              }
              iVar13 = *(int *)(lVar23 + unaff_x26 * 4) + *(int *)(lVar21 + lVar24 * 4);
              unaff_x26 = unaff_x26 + 1;
            }
            else {
LAB_1099824e4:
              iVar13 = *(int *)(lVar21 + lVar24 * 4);
            }
            lVar24 = lVar24 + 1;
joined_r0x0001099824d8:
            if (-1 < iVar18) {
              param_2 = (char *)(*(long *)(param_1 + 0x38) << 2);
              lVar25 = *(long *)(param_1 + 0x38);
              do {
                lVar20 = lVar25 + 1;
                pcStack_b8 = (char *)CONCAT44(pcStack_b8._4_4_,iVar18);
                lVar12 = *(long *)(param_1 + 0x18) + lVar9 * 4;
                iVar6 = *(int *)(lVar12 + 4);
                *(int *)(lVar12 + 4) = iVar6 + 1;
                if (*(long *)(param_1 + 0x40) <= lVar25) {
                  uVar2 = lVar20 + (long)(double)lVar20;
                  if (0x7ffffffe < (long)uVar2) {
                    uVar2 = 0x7fffffff;
                  }
                  if ((long)uVar2 <= lVar25) goto LAB_109982748;
                  lVar12 = uVar2 << 2;
                  if (uVar2 >> 0x3e != 0) {
                    lVar12 = -1;
                  }
                  lVar17 = lVar12;
                  __Znam();
                  __Znam();
                  lVar22 = *(long *)(param_1 + 0x28);
                  if (lVar25 < 1) {
                    lVar25 = *(long *)(param_1 + 0x30);
                  }
                  else {
                    _memcpy(lVar17,lVar22,param_2);
                    lVar25 = *(long *)(param_1 + 0x30);
                    _memcpy(lVar12,lVar25,param_2);
                  }
                  *(long *)(param_1 + 0x28) = lVar17;
                  *(long *)(param_1 + 0x30) = lVar12;
                  *(ulong *)(param_1 + 0x40) = uVar2;
                  if (lVar25 != 0) {
                    __ZdaPv(lVar25);
                  }
                  if (lVar22 != 0) {
                    __ZdaPv(lVar22);
                  }
                }
                lVar25 = *(long *)(param_1 + 0x28);
                lVar12 = *(long *)(param_1 + 0x30);
                pcVar8 = param_2 + lVar25;
                pcVar8[0] = '\0';
                pcVar8[1] = '\0';
                pcVar8[2] = '\0';
                pcVar8[3] = '\0';
                *(long *)(param_1 + 0x38) = lVar20;
                *(int *)(param_2 + lVar12) = iVar18;
                *(int *)(lVar25 + (long)iVar6 * 4) = iVar13;
                if (lVar24 < (long)unaff_x28) {
                  iVar18 = *(int *)(lVar15 + lVar24 * 4);
                  if (unaff_x26 < lVar27) {
                    iVar6 = *(int *)(lVar16 + unaff_x26 * 4);
                    if (iVar18 == iVar6) {
                      iVar13 = *(int *)(lVar23 + unaff_x26 * 4) + *(int *)(lVar21 + lVar24 * 4);
                      lVar24 = lVar24 + 1;
                      unaff_x26 = unaff_x26 + 1;
                      goto LAB_109982698;
                    }
                    if (iVar6 <= iVar18) {
                      bVar1 = iVar6 < iVar18;
                      iVar18 = iVar6;
                      if (bVar1) goto LAB_109982674;
                      break;
                    }
                  }
                  iVar13 = *(int *)(lVar21 + lVar24 * 4);
                  lVar24 = lVar24 + 1;
                }
                else {
                  if (lVar27 <= unaff_x26) break;
                  iVar18 = *(int *)(lVar16 + unaff_x26 * 4);
LAB_109982674:
                  iVar13 = *(int *)(lVar23 + unaff_x26 * 4);
                  unaff_x26 = unaff_x26 + 1;
                }
LAB_109982698:
                param_2 = param_2 + 4;
                lVar25 = lVar20;
              } while (-1 < iVar18);
            }
          }
          else if (unaff_x26 < lVar27) {
            iVar6 = *(int *)(lVar16 + unaff_x26 * 4);
LAB_1099824c8:
            iVar13 = *(int *)(lVar23 + unaff_x26 * 4);
            unaff_x26 = unaff_x26 + 1;
            iVar18 = iVar6;
            goto joined_r0x0001099824d8;
          }
LAB_1099826bc:
          lVar9 = lVar9 + 1;
        } while (lVar9 != lVar26);
      }
      if ((*(long *)(param_1 + 0x20) == 0) && (lVar19 = *(long *)(param_1 + 8), -1 < lVar19)) {
        uVar5 = *(undefined4 *)(param_1 + 0x38);
        lVar14 = lVar19;
        do {
          if (*(int *)(*(long *)(param_1 + 0x18) + lVar14 * 4) != 0) goto LAB_109982728;
          bVar1 = 0 < lVar14;
          lVar14 = lVar14 + -1;
        } while (bVar1);
        lVar14 = -1;
LAB_109982728:
        lVar26 = lVar19 - lVar14;
        if (lVar26 != 0 && lVar14 <= lVar19) {
          puVar11 = (undefined4 *)(*(long *)(param_1 + 0x18) + lVar14 * 4);
          do {
            puVar11 = puVar11 + 1;
            *puVar11 = uVar5;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
        }
      }
      return param_1;
    }
    _free(*(undefined8 *)(param_1 + 0x18));
    lVar9 = lVar26 * 4 + 4;
    _malloc();
    *(long *)(param_1 + 0x18) = lVar9;
    unaff_x26 = lVar19;
    if (lVar9 != 0) {
      *(long *)(param_1 + 8) = lVar26;
      goto LAB_109981ecc;
    }
  }
LAB_109982748:
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109982768:
  pcStack_88 = pcStack_b8;
  pcStack_80 = param_2;
  lStack_78 = unaff_x26;
  uStack_70 = unaff_x28;
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_1099827b8:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1099827bc);
  (*pcVar7)();
}



/* Entry: 109982844; end: 1099828ab;  */

long * FUN_109982844(long *param_1,long param_2,long param_3,long *param_4,undefined4 param_5)

{
  ulong uVar1;
  long lVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar1 = *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8);
  lVar2 = uVar1 * 2;
  if (0x7ffffffffffffffc < uVar1) {
    lVar2 = -1;
  }
  __Znam();
  param_1[2] = lVar2;
  *(undefined4 *)(param_1 + 3) = param_5;
  if (param_4[1] != *param_4) {
    _memmove();
  }
  return param_1;
}



/* Entry: 1099828ac; end: 109983283;  */

undefined8
FUN_1099828ac(ulong *param_1,int param_2,double *param_3,double *param_4,long param_5,
             double *param_6)

{
  bool bVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 ******ppppppuVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  undefined1 *puVar12;
  long *plVar13;
  ulong *puVar14;
  long *plVar15;
  long *plVar16;
  undefined8 ******ppppppuVar17;
  long lVar18;
  long lVar19;
  double *pdVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  double *pdVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  int iVar32;
  undefined8 uVar33;
  undefined *puVar34;
  long lVar35;
  undefined8 ******ppppppuVar36;
  long lVar37;
  ulong uVar38;
  long *plVar39;
  uint uVar40;
  undefined1 *puVar41;
  ulong uVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  undefined8 *****pppppuStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined8 *****pppppuStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [64];
  ulong uStack_e0;
  undefined1 *puStack_d8;
  undefined1 auStack_d0 [64];
  ulong uStack_90;
  undefined1 *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar23 = *param_1;
  uVar38 = *(long *)(uVar23 + 0x10) - *(long *)(uVar23 + 8);
  uVar8 = *(uint *)(uVar23 + 0x20);
  lVar37 = (long)(int)uVar8;
  uVar23 = (long)(uVar38 * 0x40000000) >> 0x20;
  uStack_90 = uVar23;
  if (uVar23 < 9) {
    puVar12 = auStack_d0;
LAB_109982930:
    uVar29 = uVar38 >> 2 & 0x7fffffff;
    iVar32 = (int)(uVar38 >> 2);
    if (0 < iVar32) {
      uVar38 = 0;
      do {
        *(undefined8 *)(puVar12 + uVar38 * 8) =
             *(undefined8 *)(*(long *)(param_1[2] + uVar38 * 8) + 0x18);
        uVar38 = uVar38 + 1;
      } while (uVar29 != uVar38);
    }
    uStack_e0 = uVar23;
    puStack_88 = puVar12;
    if (uVar23 < 9) {
      puVar12 = auStack_120;
    }
    else {
      puVar12 = (undefined1 *)(uVar23 << 3);
      __Znwm();
    }
    bVar10 = param_5 != 0;
    puVar41 = (undefined1 *)0x0;
    if (bVar10) {
      puVar41 = puVar12;
    }
    bVar1 = 0 < iVar32;
    if (bVar1 && bVar10) {
      uVar23 = 0;
      do {
        lVar26 = *(long *)(param_5 + uVar23 * 8);
        if ((lVar26 == 0) ||
           (lVar30 = *(long *)(param_1[2] + uVar23 * 8), *(long *)(lVar30 + 0x20) == 0)) {
          *(long *)(puVar12 + uVar23 * 8) = lVar26;
        }
        else {
          *(double **)(puVar12 + uVar23 * 8) = param_6;
          param_6 = param_6 + (int)(*(int *)(lVar30 + 8) * uVar8);
        }
        uVar23 = uVar23 + 1;
        puVar41 = puVar12;
      } while (uVar29 != uVar23);
    }
    if (param_4 != (double *)0x0) {
      param_6 = param_4;
    }
    puStack_d8 = puVar12;
    FUN_1099832d8(param_1,param_3,param_6,puVar41);
    plVar13 = (long *)*param_1;
    (**(code **)(*plVar13 + 0x10))(plVar13,puStack_88,param_6,puVar41);
    if (((ulong)plVar13 & 1) == 0) {
LAB_10998317c:
      uVar33 = 0;
    }
    else {
      puVar14 = param_1;
      FUN_1099838ec(param_1,puStack_88,param_3,param_6,puVar41);
      if (((ulong)puVar14 & 1) == 0) {
        FUN_1099833a8(&pppppuStack_180,param_1,puStack_88,param_3,param_6,puVar41);
        uVar29 = uStack_170;
        uVar38 = (uStack_170 & 0x7fffffffffffffff) - 1;
        uVar23 = uStack_178;
        if (-1 < (long)uStack_170) {
          uVar38 = 0x16;
          uVar23 = uStack_170 >> 0x38;
        }
        if (uVar38 - uVar23 < 0x10e) {
          uVar29 = uVar23 + 0x10e;
          if (0x7ffffffffffffff6 - uVar38 < uVar29 - uVar38) goto LAB_1099831f0;
          ppppppuVar6 = (undefined8 ******)pppppuStack_180;
          if (-1 < (long)uStack_170) {
            ppppppuVar6 = &pppppuStack_180;
          }
          if (uVar38 < 0x3ffffffffffffff3) {
            uVar42 = uVar29;
            if (uVar29 <= uVar38 * 2) {
              uVar42 = uVar38 << 1;
            }
            ppppppuVar17 = (undefined8 ******)0x19;
            if ((uVar42 | 7) != 0x17) {
              ppppppuVar17 = (undefined8 ******)((uVar42 | 7) + 1);
            }
            ppppppuVar36 = (undefined8 ******)0x17;
            if (0x16 < uVar42) {
              ppppppuVar36 = ppppppuVar17;
            }
          }
          else {
            ppppppuVar36 = (undefined8 ******)0x7ffffffffffffff7;
          }
          ppppppuVar17 = ppppppuVar36;
          __Znwm();
          _memcpy();
          if (uVar23 != 0) {
            _memmove((undefined *)((long)ppppppuVar17 + 0x10e),ppppppuVar6,uVar23);
          }
          if (uVar38 != 0x16) {
            __ZdlPv(ppppppuVar6);
          }
          uStack_170 = (ulong)ppppppuVar36 | 0x8000000000000000;
          puVar12 = (undefined1 *)((long)ppppppuVar17 + uVar29);
          pppppuStack_180 = ppppppuVar17;
          uStack_178 = uVar29;
        }
        else {
          ppppppuVar6 = (undefined8 ******)pppppuStack_180;
          if (-1 < (long)uStack_170) {
            ppppppuVar6 = &pppppuStack_180;
          }
          puVar34 = &UNK_10f58fcfd;
          if (uVar23 != 0) {
            lVar37 = 0x10e;
            if ((undefined *)((long)ppppppuVar6 + uVar23) <= &UNK_10f58fcfd ||
                &UNK_10f58fcfd < ppppppuVar6) {
              lVar37 = 0;
            }
            puVar34 = &UNK_10f58fcfd + lVar37;
            ppppppuVar36 = (undefined8 ******)pppppuStack_180;
            if (-1 < (long)uStack_170) {
              ppppppuVar36 = &pppppuStack_180;
            }
            _memmove((undefined *)((long)ppppppuVar36 + 0x10e),ppppppuVar6,uVar23);
          }
          _memcpy(ppppppuVar6,puVar34,0x10e);
          uVar23 = uVar23 + 0x10e;
          uVar38 = uVar23;
          if (-1 < (long)uVar29) {
            uStack_170 = CONCAT17((char)uVar23,(undefined7)uStack_170) & 0x7fffffffffffffff;
            uVar38 = uStack_178;
          }
          uStack_178 = uVar38;
          puVar12 = (undefined1 *)((long)ppppppuVar6 + uVar23);
        }
        *puVar12 = 0;
        uStack_198 = uStack_178;
        pppppuStack_1a0 = pppppuStack_180;
        uStack_190 = uStack_170;
        pppppuStack_180 = (undefined8 ******)0x0;
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
        FUN_1099a9f0c(&pppppuStack_180,&UNK_10f58fc76,0x81,1,FUN_1099aa768,0);
        uVar23 = uStack_198;
        ppppppuVar6 = (undefined8 ******)pppppuStack_1a0;
        if (-1 < (long)uStack_190) {
          uVar23 = uStack_190 >> 0x38;
          ppppppuVar6 = &pppppuStack_1a0;
        }
        FUN_1092b4db8(uStack_178 + 0x7540,ppppppuVar6,uVar23);
        FUN_1099ab3b0(&pppppuStack_180);
        if ((long)uStack_190 < 0) {
          __ZdlPv(pppppuStack_1a0);
        }
        goto LAB_10998317c;
      }
      if (uVar8 == 0) {
        dVar51 = 0.0;
      }
      else {
        uVar7 = uVar8 + 3;
        if (-1 < (int)uVar8) {
          uVar7 = uVar8;
        }
        if (lVar37 + 1U < 3) {
          dVar51 = *param_6 * *param_6;
        }
        else {
          uVar23 = -(ulong)((uint)((int)uVar8 / 2) >> 0x1f) & 0xfffffffe00000000 |
                   (ulong)(uint)((int)uVar8 / 2) << 1;
          dVar51 = *param_6 * *param_6;
          dVar43 = param_6[1] * param_6[1];
          if (3 < (int)uVar8) {
            uVar38 = -(ulong)((uint)((int)uVar7 >> 2) >> 0x1f) & 0xfffffffc00000000 |
                     (ulong)(uint)((int)uVar7 >> 2) << 2;
            dVar44 = param_6[2] * param_6[2];
            dVar45 = param_6[3] * param_6[3];
            if (7 < uVar8) {
              pdVar24 = param_6 + 6;
              lVar26 = 4;
              do {
                dVar51 = dVar51 + pdVar24[-2] * pdVar24[-2];
                dVar43 = dVar43 + pdVar24[-1] * pdVar24[-1];
                dVar44 = dVar44 + *pdVar24 * *pdVar24;
                dVar45 = dVar45 + pdVar24[1] * pdVar24[1];
                lVar26 = lVar26 + 4;
                pdVar24 = pdVar24 + 4;
              } while (lVar26 < (long)uVar38);
            }
            dVar51 = dVar44 + dVar51;
            dVar43 = dVar45 + dVar43;
            if ((long)uVar38 < (long)uVar23) {
              dVar45 = (param_6 + uVar38)[1];
              dVar44 = param_6[uVar38];
              dVar51 = dVar51 + dVar44 * dVar44;
              dVar43 = dVar43 + dVar45 * dVar45;
            }
          }
          dVar51 = dVar51 + dVar43;
          lVar26 = lVar37 - uVar23;
          if (lVar26 != 0 && (long)uVar23 <= lVar37) {
            pdVar24 = param_6 + ((long)((ulong)(uVar8 - ((int)uVar8 >> 0x1f)) << 0x20) >> 0x21) * 2;
            do {
              dVar51 = dVar51 + *pdVar24 * *pdVar24;
              lVar26 = lVar26 + -1;
              pdVar24 = pdVar24 + 1;
            } while (lVar26 != 0);
          }
        }
      }
      if (bVar1 && bVar10) {
        uVar23 = 0;
        do {
          lVar26 = *(long *)(param_5 + uVar23 * 8);
          if (lVar26 != 0) {
            lVar35 = *(long *)(param_1[2] + uVar23 * 8);
            lVar30 = *(long *)(lVar35 + 0x20);
            if (lVar30 != 0) {
              lVar25 = *(long *)(puStack_d8 + uVar23 * 8);
              uVar7 = *(uint *)(lVar35 + 8);
              plVar39 = (long *)(ulong)uVar7;
              plVar15 = *(long **)(lVar35 + 0x10);
              plVar13 = plVar39;
              uVar11 = uVar7;
              if (plVar15 != (long *)0x0) {
                (**(code **)(*plVar15 + 0x18))();
                plVar16 = *(long **)(lVar35 + 0x10);
                lVar26 = *(long *)(param_5 + uVar23 * 8);
                plVar13 = plVar15;
                if (plVar16 == (long *)0x0) {
                  uVar11 = *(uint *)(lVar35 + 8);
                }
                else {
                  (**(code **)(*plVar16 + 0x18))();
                  uVar11 = (uint)plVar16;
                }
              }
              lVar35 = (long)(int)uVar7;
              uVar40 = (uint)plVar13;
              if (((ulong)plVar13 & 1) != 0) {
                if (0 < (int)uVar8) {
                  lVar27 = 0;
                  lVar18 = lVar25;
                  do {
                    if ((int)uVar7 < 1) {
                      dVar43 = 0.0;
                    }
                    else {
                      lVar31 = 0;
                      dVar43 = 0.0;
                      pdVar24 = (double *)(lVar30 + (long)(int)(uVar40 - 1) * 8);
                      do {
                        dVar43 = dVar43 + *pdVar24 * *(double *)(lVar18 + lVar31);
                        lVar31 = lVar31 + 8;
                        pdVar24 = (double *)
                                  ((long)pdVar24 +
                                  (-((ulong)plVar13 >> 0x1f & 1) & 0xfffffff800000000 |
                                  ((ulong)plVar13 & 0xffffffff) << 3));
                      } while ((long)plVar39 * 8 - lVar31 != 0);
                    }
                    *(double *)(lVar26 + (long)(int)((uVar40 - 1) + uVar11 * (int)lVar27) * 8) =
                         dVar43;
                    lVar27 = lVar27 + 1;
                    lVar18 = lVar18 + lVar35 * 8;
                  } while (lVar27 != lVar37);
                }
                if (uVar40 == 1) goto LAB_109982f94;
              }
              if (((uVar40 >> 1 & 1) != 0) && (0 < (int)uVar8)) {
                lVar27 = 0;
                lVar18 = lVar25;
                do {
                  if ((int)uVar7 < 1) {
                    dVar43 = 0.0;
                    dVar44 = 0.0;
                  }
                  else {
                    lVar31 = 0;
                    dVar43 = 0.0;
                    dVar44 = 0.0;
                    pdVar24 = (double *)(lVar30 + (long)(int)(uVar40 & 0xfffffffc) * 8);
                    do {
                      dVar43 = dVar43 + *pdVar24 * *(double *)(lVar18 + lVar31);
                      dVar44 = dVar44 + pdVar24[1] * *(double *)(lVar18 + lVar31);
                      lVar31 = lVar31 + 8;
                      pdVar24 = (double *)
                                ((long)pdVar24 +
                                (-((ulong)plVar13 >> 0x1f & 1) & 0xfffffff800000000 |
                                ((ulong)plVar13 & 0xffffffff) << 3));
                    } while ((long)plVar39 * 8 - lVar31 != 0);
                  }
                  uVar28 = (uVar40 & 0xfffffffc) + uVar11 * (int)lVar27;
                  pdVar24 = (double *)
                            (lVar26 + (-(ulong)(uVar28 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar28 << 3));
                  pdVar24[1] = dVar44;
                  *pdVar24 = dVar43;
                  lVar27 = lVar27 + 1;
                  lVar18 = lVar18 + lVar35 * 8;
                } while (lVar27 != lVar37);
              }
              if (3 < (int)uVar40) {
                uVar38 = 0;
                uVar28 = (uint)((ulong)plVar39 & 0xfffffffc);
                lVar27 = lVar30;
                do {
                  if (0 < (int)uVar8) {
                    lVar18 = 0;
                    lVar31 = lVar30 + uVar38 * 8;
                    lVar19 = lVar25;
                    pdVar24 = (double *)(lVar25 + 0x10);
                    do {
                      if ((int)uVar7 < 4) {
                        lVar21 = 0;
                        dVar43 = 0.0;
                        dVar44 = 0.0;
                        dVar46 = 0.0;
                        dVar45 = 0.0;
                      }
                      else {
                        uVar42 = 0;
                        iVar32 = 0;
                        dVar43 = 0.0;
                        dVar44 = 0.0;
                        dVar45 = 0.0;
                        dVar46 = 0.0;
                        pdVar20 = pdVar24;
                        do {
                          pdVar2 = (double *)(lVar31 + (long)iVar32 * 8);
                          dVar47 = pdVar20[-2];
                          dVar48 = pdVar20[-1];
                          pdVar3 = (double *)(lVar31 + (long)(int)(uVar40 + iVar32) * 8);
                          pdVar4 = (double *)(lVar31 + (long)(int)(uVar40 * 2 + iVar32) * 8);
                          dVar49 = *pdVar20;
                          dVar50 = pdVar20[1];
                          pdVar5 = (double *)(lVar31 + (long)(int)(uVar40 * 3 + iVar32) * 8);
                          dVar45 = dVar45 + *pdVar2 * dVar47 + *pdVar3 * dVar48 + *pdVar4 * dVar49 +
                                   *pdVar5 * dVar50;
                          dVar43 = dVar43 + pdVar2[1] * dVar47 + pdVar3[1] * dVar48 +
                                   pdVar4[1] * dVar49 + pdVar5[1] * dVar50;
                          dVar44 = dVar44 + pdVar2[2] * dVar47 + pdVar3[2] * dVar48 +
                                   pdVar4[2] * dVar49 + pdVar5[2] * dVar50;
                          dVar46 = dVar46 + pdVar2[3] * dVar47 + pdVar3[3] * dVar48 +
                                   pdVar4[3] * dVar49 + pdVar5[3] * dVar50;
                          iVar32 = iVar32 + uVar40 * 4;
                          uVar42 = uVar42 + 4;
                          pdVar20 = pdVar20 + 4;
                        } while (uVar42 < ((ulong)plVar39 & 0xfffffffc));
                        lVar21 = (long)iVar32;
                      }
                      if (uVar28 != uVar7) {
                        lVar21 = lVar21 << 3;
                        lVar22 = (long)(int)uVar28;
                        do {
                          dVar47 = *(double *)(lVar19 + lVar22 * 8);
                          pdVar20 = (double *)(lVar27 + lVar21);
                          dVar45 = dVar45 + *pdVar20 * dVar47;
                          dVar43 = dVar43 + pdVar20[1] * dVar47;
                          dVar44 = dVar44 + pdVar20[2] * dVar47;
                          dVar46 = dVar46 + pdVar20[3] * dVar47;
                          lVar22 = lVar22 + 1;
                          lVar21 = lVar21 + ((ulong)plVar13 & 0xffffffff) * 8;
                        } while (lVar22 < lVar35);
                      }
                      pdVar20 = (double *)
                                (lVar26 + (long)(int)((int)uVar38 + uVar11 * (int)lVar18) * 8);
                      *pdVar20 = dVar45;
                      pdVar20[2] = dVar44;
                      pdVar20[1] = dVar43;
                      pdVar20[3] = dVar46;
                      lVar18 = lVar18 + 1;
                      pdVar24 = pdVar24 + lVar35;
                      lVar19 = lVar19 + lVar35 * 8;
                    } while (lVar18 != lVar37);
                  }
                  uVar38 = uVar38 + 4;
                  lVar27 = lVar27 + 0x20;
                } while (uVar38 < (uVar40 & 0xfffffffc));
              }
            }
          }
LAB_109982f94:
          uVar23 = uVar23 + 1;
        } while (uVar23 != uVar29);
      }
      if ((param_2 == 0) || (plVar13 = (long *)param_1[1], plVar13 == (long *)0x0)) {
        *param_3 = dVar51 * 0.5;
      }
      else {
        (**(code **)(*plVar13 + 0x10))(dVar51,plVar13,&pppppuStack_180);
        *param_3 = (double)pppppuStack_180 * 0.5;
        if (param_4 != (double *)0x0 || param_5 != 0) {
          FUN_10992d46c(dVar51,&pppppuStack_1a0,&pppppuStack_180);
          if (bVar1 && bVar10) {
            uVar23 = 0;
            do {
              lVar26 = *(long *)(param_5 + uVar23 * 8);
              if (lVar26 != 0) {
                lVar30 = *(long *)(param_1[2] + uVar23 * 8);
                plVar13 = *(long **)(lVar30 + 0x10);
                if (plVar13 == (long *)0x0) {
                  plVar13 = (long *)(ulong)*(uint *)(lVar30 + 8);
                }
                else {
                  (**(code **)(*plVar13 + 0x18))();
                  lVar26 = *(long *)(param_5 + uVar23 * 8);
                }
                func_0x00010992d648(&pppppuStack_1a0,lVar37,plVar13,param_6,lVar26);
              }
              uVar23 = uVar23 + 1;
            } while (uVar29 != uVar23);
          }
          if (param_4 != (double *)0x0) {
            func_0x00010992d59c(&pppppuStack_1a0,lVar37,param_4);
          }
        }
      }
      uVar33 = 1;
    }
    if (8 < uStack_e0) {
      __ZdlPv(puStack_d8);
    }
    if (8 < uStack_90) {
      __ZdlPv(puStack_88);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return uVar33;
    }
    ___stack_chk_fail();
  }
  else if (uVar23 >> 0x3d == 0) {
    puVar12 = (undefined1 *)(uVar23 << 3);
    __Znwm();
    goto LAB_109982930;
  }
  func_0x000104c4f740();
LAB_1099831f0:
  func_0x000104c4f6b8();
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1099831f8);
  (*pcVar9)();
}



/* Entry: 109983284; end: 1099832d7;  */

int FUN_109983284(long *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  
  lVar1 = *param_1;
  uVar3 = *(long *)(lVar1 + 0x10) - *(long *)(lVar1 + 8);
  if ((int)(uVar3 >> 2) < 1) {
    iVar2 = 1;
  }
  else {
    uVar3 = uVar3 >> 2 & 0x7fffffff;
    iVar2 = 1;
    plVar4 = (long *)param_1[2];
    do {
      if (*(long *)(*plVar4 + 0x20) != 0) {
        iVar2 = *(int *)(*plVar4 + 8) + iVar2;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
    } while (uVar3 != 0);
  }
  return *(int *)(lVar1 + 0x20) * iVar2;
}



/* Entry: 1099832d8; end: 1099833a7;  */

void FUN_1099832d8(long *param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  lVar5 = *param_1;
  lVar1 = *(long *)(lVar5 + 8);
  lVar2 = *(long *)(lVar5 + 0x10);
  uVar3 = *(uint *)(lVar5 + 0x20);
  if (param_2 != 0) {
    _memset_pattern16(param_2,&UNK_10e00cee0,8);
  }
  if ((param_3 != 0) && (0 < (int)uVar3)) {
    _memset_pattern16(param_3,&UNK_10e00cee0,(ulong)uVar3 << 3);
  }
  if ((param_4 != (long *)0x0) && (uVar6 = lVar2 - lVar1, 0 < (int)(uVar6 >> 2))) {
    uVar6 = uVar6 >> 2 & 0x7fffffff;
    plVar7 = (long *)param_1[2];
    do {
      uVar4 = *(int *)(*plVar7 + 8) * uVar3;
      if (0 < (int)uVar4 && *param_4 != 0) {
        _memset_pattern16(*param_4,&UNK_10e00cee0,(ulong)uVar4 << 3);
      }
      uVar6 = uVar6 - 1;
      param_4 = param_4 + 1;
      plVar7 = plVar7 + 1;
    } while (uVar6 != 0);
  }
  return;
}



/* Entry: 1099833a8; end: 1099838eb;  */

ulong * FUN_1099833a8(ulong *param_1,long *param_2,long param_3,long param_4,long param_5,
                     long param_6)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  code *pcVar6;
  ulong uVar7;
  long *plVar8;
  double *pdVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *unaff_x19;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  if (param_4 == 0) {
    lStack_c0 = 0;
    uStack_68 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    pcVar6 = FUN_1099aa768;
    pdVar9 = (double *)0x3;
    FUN_1099a9f0c(&lStack_c0,&UNK_10f58fe10,0x48,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_b8 + 0x7540,&UNK_10f58fe9d,0x1e);
LAB_1099838c4:
    plVar8 = &lStack_c0;
    func_0x0001099ab7c0();
    if (*(char *)((long)unaff_x19 + 0x17) < '\0') {
      __ZdlPv(*unaff_x19);
    }
    __Unwind_Resume();
    lVar10 = *plVar8;
    uVar3 = *(uint *)(lVar10 + 0x20);
    uVar18 = (ulong)uVar3;
    if ((pdVar9 != (double *)0x0) && (0 < (int)uVar3)) {
      do {
        if (0x7fefffffffffffff < (ulong)ABS(*pdVar9)) {
          return (ulong *)0x0;
        }
        if (*pdVar9 == 1e+302) {
          return (ulong *)0x0;
        }
        uVar18 = uVar18 - 1;
        pdVar9 = pdVar9 + 1;
      } while (uVar18 != 0);
    }
    if ((pcVar6 != (code *)0x0) &&
       (uVar18 = *(long *)(lVar10 + 0x10) - *(long *)(lVar10 + 8), 0 < (int)(uVar18 >> 2))) {
      uVar14 = 0;
      do {
        uVar4 = *(int *)(*(long *)(plVar8[2] + uVar14 * 8) + 8) * uVar3;
        uVar15 = (ulong)uVar4;
        pdVar9 = *(double **)(pcVar6 + uVar14 * 8);
        if (0 < (int)uVar4 && *(double **)(pcVar6 + uVar14 * 8) != (double *)0x0) {
          do {
            if (0x7fefffffffffffff < (ulong)ABS(*pdVar9)) {
              return (ulong *)0x0;
            }
            if (*pdVar9 == 1e+302) {
              return (ulong *)0x0;
            }
            uVar15 = uVar15 - 1;
            pdVar9 = pdVar9 + 1;
          } while (uVar15 != 0);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != (uVar18 >> 2 & 0x7fffffff));
    }
    return (ulong *)0x1;
  }
  if (param_5 == 0) {
    lStack_c0 = 0;
    uStack_68 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    pcVar6 = FUN_1099aa768;
    pdVar9 = (double *)0x3;
    FUN_1099a9f0c(&lStack_c0,&UNK_10f58fe10,0x49,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_b8 + 0x7540,&UNK_10f58febc,0x23);
    goto LAB_1099838c4;
  }
  lVar10 = *param_2;
  uVar13 = *(long *)(lVar10 + 0x10) - *(long *)(lVar10 + 8);
  uVar3 = *(uint *)(lVar10 + 0x20);
  *(undefined1 *)((long)param_1 + 0x17) = 0;
  *(undefined1 *)param_1 = 0;
  FUN_109988e8c(param_1,&UNK_10f58fee0);
  bVar5 = *(byte *)((long)param_1 + 0x17);
  uVar15 = param_1[2];
  uVar14 = (uVar15 & 0x7fffffffffffffff) - 1;
  uVar18 = param_1[1];
  if (-1 < (char)bVar5) {
    uVar14 = 0x16;
    uVar18 = (ulong)bVar5;
  }
  if (uVar14 - uVar18 < 0x1e0) {
    uVar15 = uVar18 + 0x1e0;
    if (0x7ffffffffffffff6 - uVar14 < uVar15 - uVar14) {
      func_0x000104c4f6b8();
      goto LAB_1099838b0;
    }
    puVar1 = (ulong *)*param_1;
    if (-1 < (char)bVar5) {
      puVar1 = param_1;
    }
    if (uVar14 < 0x3ffffffffffffff3) {
      uVar7 = uVar15;
      if (uVar15 <= uVar14 * 2) {
        uVar7 = uVar14 << 1;
      }
      uVar2 = 0x19;
      if ((uVar7 | 7) != 0x17) {
        uVar2 = (uVar7 | 7) + 1;
      }
      uVar17 = 0x17;
      if (0x16 < uVar7) {
        uVar17 = uVar2;
      }
    }
    else {
      uVar17 = 0x7ffffffffffffff7;
    }
    uVar7 = uVar17;
    __Znwm();
    if (uVar18 != 0) {
      _memmove(uVar7,puVar1,uVar18);
    }
    _memcpy(uVar7 + uVar18,&UNK_10f58ff1a,0x1e0);
    if (uVar14 != 0x16) {
      __ZdlPv(puVar1);
    }
    param_1[1] = uVar15;
    param_1[2] = uVar17 | 0x8000000000000000;
    *param_1 = uVar7;
    puVar11 = (undefined1 *)(uVar7 + uVar15);
  }
  else {
    puVar1 = (ulong *)*param_1;
    if (-1 < (char)bVar5) {
      puVar1 = param_1;
    }
    _memcpy((long)puVar1 + uVar18,&UNK_10f58ff1a,0x1e0);
    uVar18 = uVar18 + 0x1e0;
    if ((long)uVar15 < 0) {
      param_1[1] = uVar18;
    }
    else {
      *(byte *)((long)param_1 + 0x17) = (byte)uVar18 & 0x7f;
    }
    puVar11 = (undefined1 *)((long)puVar1 + uVar18);
  }
  *puVar11 = 0;
  bVar5 = *(byte *)((long)param_1 + 0x17);
  uVar14 = (param_1[2] & 0x7fffffffffffffff) - 1;
  uVar18 = param_1[1];
  if (-1 < (char)bVar5) {
    uVar14 = 0x16;
    uVar18 = (ulong)bVar5;
  }
  if (uVar14 - uVar18 < 0xf) {
    uVar15 = uVar18 + 0xf;
    if (0x7ffffffffffffff6 - uVar14 < uVar15 - uVar14) {
      func_0x000104c4f6b8();
LAB_1099838b0:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1099838b4);
      (*pcVar6)();
    }
    puVar1 = (ulong *)*param_1;
    if (-1 < (char)bVar5) {
      puVar1 = param_1;
    }
    if (uVar14 < 0x3ffffffffffffff3) {
      uVar7 = uVar15;
      if (uVar15 <= uVar14 * 2) {
        uVar7 = uVar14 << 1;
      }
      uVar2 = 0x19;
      if ((uVar7 | 7) != 0x17) {
        uVar2 = (uVar7 | 7) + 1;
      }
      uVar17 = 0x17;
      if (0x16 < uVar7) {
        uVar17 = uVar2;
      }
    }
    else {
      uVar17 = 0x7ffffffffffffff7;
    }
    uVar7 = uVar17;
    __Znwm();
    if (uVar18 != 0) {
      _memmove(uVar7,puVar1,uVar18);
    }
    *(undefined8 *)(uVar7 + uVar18) = 0x6c61756469736552;
    *(undefined8 *)((long)(uVar7 + uVar18) + 7) = 0x20202020203a736c;
    if (uVar14 != 0x16) {
      __ZdlPv(puVar1);
    }
    param_1[1] = uVar15;
    param_1[2] = uVar17 | 0x8000000000000000;
    *param_1 = uVar7;
    puVar11 = (undefined1 *)(uVar7 + uVar15);
  }
  else {
    puVar1 = (ulong *)*param_1;
    if (-1 < (char)bVar5) {
      puVar1 = param_1;
    }
    *(undefined8 *)((long)puVar1 + uVar18) = 0x6c61756469736552;
    *(undefined8 *)((long)((long)puVar1 + uVar18) + 7) = 0x20202020203a736c;
    uVar18 = uVar18 + 0xf;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      param_1[1] = uVar18;
    }
    else {
      *(byte *)((long)param_1 + 0x17) = (byte)uVar18 & 0x7f;
    }
    puVar11 = (undefined1 *)((long)puVar1 + uVar18);
  }
  *puVar11 = 0;
  FUN_109916b00((ulong)uVar3,param_5,param_1);
  FUN_109988e8c(param_1,&DAT_10f590110);
  if (0 < (int)(uVar13 >> 2)) {
    uVar18 = 0;
    do {
      uVar4 = *(uint *)(*(long *)(param_2[2] + uVar18 * 8) + 8);
      FUN_109988e8c(param_1,&UNK_10f590113);
      FUN_109988e8c(param_1,&DAT_10f68f57e);
      if (0 < (int)uVar4) {
        lVar10 = 0;
        uVar14 = 0;
        do {
          FUN_109916b00(1,*(long *)(param_3 + uVar18 * 8) + uVar14 * 8,param_1);
          FUN_109988e8c(param_1,&UNK_10f590133);
          uVar15 = (ulong)uVar3;
          lVar16 = lVar10;
          if (0 < (int)uVar3) {
            do {
              if ((param_6 == 0) || (lVar12 = *(long *)(param_6 + uVar18 * 8), lVar12 == 0)) {
                lVar12 = 0;
              }
              else {
                lVar12 = lVar12 + lVar16;
              }
              FUN_109916b00(1,lVar12,param_1);
              lVar16 = lVar16 + (ulong)uVar4 * 8;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          FUN_109988e8c(param_1,&DAT_10f68f57e);
          uVar14 = uVar14 + 1;
          lVar10 = lVar10 + 8;
        } while (uVar14 != uVar4);
      }
      FUN_109988e8c(param_1,&DAT_10f68f57e);
      uVar18 = uVar18 + 1;
    } while (uVar18 != (uVar13 >> 2 & 0x7fffffff));
  }
  FUN_109988e8c(param_1,&DAT_10f68f57e);
  return param_1;
}



/* Entry: 1099838ec; end: 1099839c7;  */

undefined8
FUN_1099838ec(long *param_1,undefined8 param_2,undefined8 param_3,double *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double *pdVar7;
  
  lVar3 = *param_1;
  uVar1 = *(uint *)(lVar3 + 0x20);
  uVar4 = (ulong)uVar1;
  if ((param_4 != (double *)0x0) && (0 < (int)uVar1)) {
    do {
      if (0x7fefffffffffffff < (ulong)ABS(*param_4)) {
        return 0;
      }
      if (*param_4 == 1e+302) {
        return 0;
      }
      uVar4 = uVar4 - 1;
      param_4 = param_4 + 1;
    } while (uVar4 != 0);
  }
  if ((param_5 != 0) &&
     (uVar4 = *(long *)(lVar3 + 0x10) - *(long *)(lVar3 + 8), 0 < (int)(uVar4 >> 2))) {
    uVar5 = 0;
    do {
      uVar2 = *(int *)(*(long *)(param_1[2] + uVar5 * 8) + 8) * uVar1;
      uVar6 = (ulong)uVar2;
      pdVar7 = *(double **)(param_5 + uVar5 * 8);
      if (0 < (int)uVar2 && pdVar7 != (double *)0x0) {
        do {
          if (0x7fefffffffffffff < (ulong)ABS(*pdVar7)) {
            return 0;
          }
          if (*pdVar7 == 1e+302) {
            return 0;
          }
          uVar6 = uVar6 - 1;
          pdVar7 = pdVar7 + 1;
        } while (uVar6 != 0);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != (uVar4 >> 2 & 0x7fffffff));
  }
  return 1;
}



/* Entry: 1099839c8; end: 109983c43;  */

undefined8 *
FUN_1099839c8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             code *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined1 **ppuVar15;
  undefined8 uVar16;
  int *piVar17;
  long extraout_x8;
  undefined **ppuVar18;
  long *plVar19;
  undefined1 auVar20 [16];
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_1a0;
  undefined2 uStack_198;
  undefined2 uStack_196;
  undefined1 uStack_194;
  undefined1 uStack_193;
  undefined1 uStack_192;
  undefined1 uStack_191;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  undefined8 auStack_138 [5];
  ulong uStack_b0;
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
  undefined1 *puStack_50;
  undefined4 uStack_44;
  
  puVar6 = &uStack_b0;
  puVar7 = &uStack_b0;
  puVar8 = &uStack_b0;
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
  *param_1 = &PTR_FUN_110b1e8b8;
  param_1[1] = 0x32aaaba7;
  uVar14 = *param_2;
  uVar3 = param_2[1];
  uVar21 = param_2[3];
  uVar16 = param_2[2];
  uVar1 = *(undefined4 *)(param_2 + 4);
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  param_1[0xf] = uVar21;
  param_1[0xe] = uVar16;
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar14;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  lVar9 = param_2[6] - param_2[5];
  if (lVar9 != 0) {
    if (lVar9 < 0) {
      FUN_10923f788();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x109983ba4);
      (*pcVar4)();
    }
    lVar5 = lVar9;
    __Znwm();
    param_1[0x11] = lVar5;
    param_1[0x12] = lVar5;
    param_1[0x13] = lVar5 + lVar9;
    _memcpy();
    param_1[0x12] = lVar5 + lVar9;
  }
  uVar14 = param_2[8];
  uVar3 = param_2[9];
  uVar22 = param_2[0xb];
  uVar21 = param_2[10];
  uVar16 = param_2[0xc];
  plVar19 = param_1 + 0x19;
  *plVar19 = 0;
  param_1[0x18] = uVar16;
  param_1[0x17] = uVar22;
  param_1[0x16] = uVar21;
  param_1[0x15] = uVar3;
  param_1[0x14] = uVar14;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  piVar17 = (int *)param_2[5];
  uStack_b0 = param_2[6] - (long)piVar17 >> 2;
  uStack_44 = 1;
  if (uStack_b0 < 2) {
    FUN_109969b80(&uStack_b0,&uStack_44,&UNK_10f590136);
    puStack_50 = (undefined1 *)puVar6;
    if (puVar6 == (ulong *)0x0) {
      piVar17 = (int *)param_2[5];
      goto LAB_109983aac;
    }
    puVar13 = &UNK_10f59015c;
    ppuVar15 = &puStack_50;
    uVar14 = 0x74;
    FUN_1099ab8e4(&uStack_b0,&UNK_10f59015c,0x74);
  }
  else {
LAB_109983aac:
    uStack_b0 = CONCAT44(uStack_b0._4_4_,*piVar17);
    uStack_44 = 0;
    if (*piVar17 < 1) {
      FUN_109904144(&uStack_b0,&uStack_44,&UNK_10f5901ec);
      puStack_50 = (undefined1 *)puVar7;
      if (puVar7 != (ulong *)0x0) {
        puVar13 = &UNK_10f59015c;
        ppuVar15 = &puStack_50;
        uVar14 = 0x75;
        FUN_1099ab8e4(&uStack_b0,&UNK_10f59015c,0x75);
        goto LAB_109983bd8;
      }
    }
    if (param_2[0xc] != 0) {
      return param_1;
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
    param_5 = FUN_1099aa768;
    ppuVar15 = (undefined1 **)0x3;
    FUN_1099a9f0c(&uStack_b0,&UNK_10f59015c,0x76,3,FUN_1099aa768,0);
    puVar13 = &UNK_10f58e30c;
    uVar14 = 0x29;
    FUN_1092b4db8(lStack_a8 + 0x7540,&UNK_10f58e30c,0x29);
  }
LAB_109983bd8:
  func_0x0001099ab7c0();
  lVar9 = param_1[0x1b];
  param_1[0x1b] = 0;
  if (lVar9 != 0) {
    __ZdaPv();
  }
  plVar10 = (long *)param_1[0x1a];
  param_1[0x1a] = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  plVar10 = (long *)*plVar19;
  *plVar19 = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  lVar9 = param_1[0x11];
  if (lVar9 != 0) {
    param_1[0x12] = lVar9;
    __ZdlPv();
  }
  FUN_109920bf4(param_1);
  __Unwind_Resume();
  puVar12 = &uStack_1a0;
  puVar11 = (undefined8 *)0x20;
  __Znwm();
  uStack_1a0._0_4_ = SUB84(puVar11,0);
  uStack_1a0._4_2_ = (undefined2)((ulong)puVar11 >> 0x20);
  uStack_1a0._6_2_ = (undefined2)((ulong)puVar11 >> 0x30);
  uStack_190 = -0x7fffffffffffffe0;
  uStack_198 = 0x1c;
  uStack_196 = 0;
  uStack_194 = 0;
  uStack_193 = 0;
  uStack_192 = 0;
  uStack_191 = 0;
  puVar11[1] = 0x53746e656d656c70;
  *puVar11 = 0x6d6f437275686353;
  *(undefined8 *)((long)puVar11 + 0x14) = 0x65766c6f533a3a72;
  *(undefined8 *)((long)puVar11 + 0xc) = 0x65766c6f53746e65;
  *(undefined1 *)((long)puVar11 + 0x1c) = 0;
  FUN_109997918(auStack_138,&uStack_1a0);
  if (uStack_190 < 0) {
    __ZdlPv(CONCAT26(uStack_1a0._6_2_,CONCAT24(uStack_1a0._4_2_,(undefined4)uStack_1a0)));
  }
  if (puVar8[0x19] != 0) goto LAB_109983dd0;
  plVar19 = *(long **)(puVar13 + 0x20);
  iVar2 = *(int *)puVar8[0x11];
  lVar9 = *plVar19;
  lVar5 = plVar19[1];
  (**(code **)(*puVar8 + 0x28))(puVar8,plVar19);
  FUN_1099333ec(plVar19,iVar2,(undefined1 *)((long)puVar8 + 0xa4),puVar8 + 0x15,
                (undefined1 *)((long)puVar8 + 0xac));
  if ((((*(int *)((long)puVar8 + 0xa4) == 2) && ((int)puVar8[0x15] == 3)) &&
      (*(int *)((long)puVar8 + 0xac) == 6)) && ((int)((ulong)(lVar5 - lVar9) >> 3) - iVar2 == 1)) {
    puVar11 = (undefined8 *)0x40;
    __Znwm();
    ppuVar18 = &PTR_FUN_110b1e9d8;
    *puVar11 = &PTR_FUN_110b1e9d8;
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    plVar19 = (long *)puVar8[0x19];
    puVar8[0x19] = (ulong)puVar11;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 8))(plVar19);
      goto LAB_109983db0;
    }
  }
  else {
    FUN_1099869a8(&uStack_1a0,puVar8 + 0xc);
    plVar19 = (long *)puVar8[0x19];
    puVar8[0x19] = CONCAT26(uStack_1a0._6_2_,CONCAT24(uStack_1a0._4_2_,(undefined4)uStack_1a0));
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 8))();
    }
LAB_109983db0:
    if ((undefined8 *)puVar8[0x19] == (undefined8 *)0x0) {
      uStack_1a0._0_4_ = 0;
      uStack_1a0._4_2_ = 0;
      uStack_1a0._6_2_ = 0;
      uStack_148 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_150 = 0;
      FUN_1099a9f0c(&uStack_1a0,&UNK_10f59015c,0x98,3,FUN_1099aa768,0);
      FUN_1092b4db8(CONCAT17(uStack_191,
                             CONCAT16(uStack_192,
                                      CONCAT15(uStack_193,
                                               CONCAT14(uStack_194,CONCAT22(uStack_196,uStack_198)))
                                     )) + 0x7540,&UNK_10f59022b,0x1a);
      func_0x0001099ab7c0();
      FUN_109997a28(auStack_138);
      __Unwind_Resume();
      *puVar12 = &PTR_FUN_110b1e8b8;
      lVar9 = puVar12[0x1b];
      puVar12[0x1b] = 0;
      if (lVar9 != 0) {
        __ZdaPv();
      }
      plVar19 = (long *)puVar12[0x1a];
      puVar12[0x1a] = 0;
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 8))();
      }
      plVar19 = (long *)puVar12[0x19];
      puVar12[0x19] = 0;
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 8))();
      }
      if (puVar12[0x11] != 0) {
        puVar12[0x12] = puVar12[0x11];
        __ZdlPv();
      }
      *puVar12 = &PTR_FUN_110b1d718;
      FUN_1099215c8(puVar12 + 9,puVar12[10]);
      __ZNSt3__15mutexD1Ev(puVar12 + 1);
      return puVar12;
    }
    ppuVar18 = *(undefined ***)puVar8[0x19];
  }
  (*(code *)ppuVar18[2])();
LAB_109983dd0:
  if (0 < (int)*(uint *)(puVar13 + 0xc)) {
    _bzero(param_5,(ulong)*(uint *)(puVar13 + 0xc) << 3);
  }
  uStack_190._7_1_ = '\x05';
  uStack_1a0._0_4_ = 0x75746553;
  uStack_1a0._4_2_ = 0x70;
  FUN_109997c38(auStack_138,&uStack_1a0);
  if (uStack_190._7_1_ < '\0') {
    __ZdlPv(CONCAT26(uStack_1a0._6_2_,CONCAT24(uStack_1a0._4_2_,(undefined4)uStack_1a0)));
  }
  auVar20 = NEON_ext(*(undefined1 (*) [16])(puVar13 + 0x18),*(undefined1 (*) [16])(puVar13 + 0x18),8
                     ,1);
  uStack_198 = auVar20._8_2_;
  uStack_196 = auVar20._10_2_;
  uStack_194 = auVar20[0xc];
  uStack_193 = auVar20[0xd];
  uStack_192 = auVar20[0xe];
  uStack_191 = auVar20[0xf];
  uStack_1a0._0_4_ = auVar20._0_4_;
  uStack_1a0._4_2_ = auVar20._4_2_;
  uStack_1a0._6_2_ = auVar20._6_2_;
  (**(code **)(*(long *)puVar8[0x19] + 0x18))
            ((long *)puVar8[0x19],&uStack_1a0,uVar14,*ppuVar15,puVar8[0x1a],puVar8[0x1b]);
  uStack_190._7_1_ = '\t';
  uStack_1a0._0_4_ = 0x6d696c45;
  uStack_1a0._4_2_ = 0x6e69;
  uStack_1a0._6_2_ = 0x7461;
  uStack_198 = 0x65;
  FUN_109997c38(auStack_138,&uStack_1a0);
  if (uStack_190._7_1_ < '\0') {
    __ZdlPv(CONCAT26(uStack_1a0._6_2_,CONCAT24(uStack_1a0._4_2_,(undefined4)uStack_1a0)));
  }
  iVar2 = *(int *)(puVar13 + 0xc);
  plVar19 = (long *)puVar8[0x1a];
  (**(code **)(*plVar19 + 0x28))();
  (**(code **)(*puVar8 + 0x30))
            (extraout_x8,puVar8,ppuVar15,param_5 + (long)(int)plVar19 * -8 + (long)iVar2 * 8);
  uStack_190._7_1_ = '\f';
  uStack_198 = 0x6c6f;
  uStack_196 = 0x6576;
  uStack_1a0._0_4_ = 0x75646552;
  uStack_1a0._4_2_ = 0x6563;
  uStack_1a0._6_2_ = 0x5364;
  uStack_194 = 0;
  FUN_109997c38(auStack_138,&uStack_1a0);
  if (uStack_190._7_1_ < '\0') {
    __ZdlPv(CONCAT26(uStack_1a0._6_2_,CONCAT24(uStack_1a0._4_2_,(undefined4)uStack_1a0)));
  }
  if (*(int *)(extraout_x8 + 0xc) == 0) {
    auVar20 = NEON_ext(*(undefined1 (*) [16])(puVar13 + 0x18),*(undefined1 (*) [16])(puVar13 + 0x18)
                       ,8,1);
    uStack_198 = auVar20._8_2_;
    uStack_196 = auVar20._10_2_;
    uStack_194 = auVar20[0xc];
    uStack_193 = auVar20[0xd];
    uStack_192 = auVar20[0xe];
    uStack_191 = auVar20[0xf];
    uStack_1a0._0_4_ = auVar20._0_4_;
    uStack_1a0._4_2_ = auVar20._4_2_;
    uStack_1a0._6_2_ = auVar20._6_2_;
    (**(code **)(*(long *)puVar8[0x19] + 0x20))
              ((long *)puVar8[0x19],&uStack_1a0,uVar14,*ppuVar15,
               param_5 + (long)(int)plVar19 * -8 + (long)iVar2 * 8,param_5);
    uStack_190._7_1_ = '\x0e';
    uStack_1a0._0_4_ = 0x6b636142;
    uStack_1a0._4_2_ = 0x7553;
    uStack_1a0._6_2_ = 0x7362;
    uStack_198 = 0x6974;
    uStack_196 = 0x7574;
    uStack_194 = 0x74;
    uStack_193 = 0x65;
    uStack_192 = 0;
    FUN_109997c38(auStack_138,&uStack_1a0);
    if (uStack_190._7_1_ < '\0') {
      __ZdlPv(CONCAT26(uStack_1a0._6_2_,CONCAT24(uStack_1a0._4_2_,(undefined4)uStack_1a0)));
    }
  }
  puVar12 = auStack_138;
  FUN_109997a28(puVar12);
  return puVar12;
}



/* Entry: 109983c44; end: 109984097;  */

undefined8 *
FUN_109983c44(long param_1,long *param_2,long param_3,undefined8 param_4,undefined8 *param_5,
             long param_6)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  long *plVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined1 uStack_e4;
  undefined1 uStack_e3;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
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
  undefined8 auStack_88 [5];
  
  puVar4 = &uStack_f0;
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  uStack_f0._0_4_ = SUB84(puVar3,0);
  uStack_f0._4_2_ = (undefined2)((ulong)puVar3 >> 0x20);
  uStack_f0._6_2_ = (undefined2)((ulong)puVar3 >> 0x30);
  uStack_e0 = -0x7fffffffffffffe0;
  uStack_e8 = 0x1c;
  uStack_e6 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e2 = 0;
  uStack_e1 = 0;
  puVar3[1] = 0x53746e656d656c70;
  *puVar3 = 0x6d6f437275686353;
  *(undefined8 *)((long)puVar3 + 0x14) = 0x65766c6f533a3a72;
  *(undefined8 *)((long)puVar3 + 0xc) = 0x65766c6f53746e65;
  *(undefined1 *)((long)puVar3 + 0x1c) = 0;
  FUN_109997918(auStack_88,&uStack_f0);
  if (uStack_e0 < 0) {
    __ZdlPv(CONCAT26(uStack_f0._6_2_,CONCAT24(uStack_f0._4_2_,(undefined4)uStack_f0)));
  }
  if (param_2[0x19] != 0) goto LAB_109983dd0;
  plVar6 = *(long **)(param_3 + 0x20);
  iVar2 = *(int *)param_2[0x11];
  lVar7 = *plVar6;
  lVar1 = plVar6[1];
  (**(code **)(*param_2 + 0x28))(param_2,plVar6);
  FUN_1099333ec(plVar6,iVar2,(long)param_2 + 0xa4,param_2 + 0x15,(long)param_2 + 0xac);
  if ((((*(int *)((long)param_2 + 0xa4) == 2) && ((int)param_2[0x15] == 3)) &&
      (*(int *)((long)param_2 + 0xac) == 6)) && ((int)((ulong)(lVar1 - lVar7) >> 3) - iVar2 == 1)) {
    puVar3 = (undefined8 *)0x40;
    __Znwm();
    ppuVar5 = &PTR_FUN_110b1e9d8;
    *puVar3 = &PTR_FUN_110b1e9d8;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    plVar6 = (long *)param_2[0x19];
    param_2[0x19] = (long)puVar3;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))(plVar6);
      goto LAB_109983db0;
    }
  }
  else {
    FUN_1099869a8(&uStack_f0,param_2 + 0xc);
    plVar6 = (long *)param_2[0x19];
    param_2[0x19] = CONCAT26(uStack_f0._6_2_,CONCAT24(uStack_f0._4_2_,(undefined4)uStack_f0));
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
LAB_109983db0:
    if ((undefined8 *)param_2[0x19] == (undefined8 *)0x0) {
      uStack_f0._0_4_ = 0;
      uStack_f0._4_2_ = 0;
      uStack_f0._6_2_ = 0;
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
      FUN_1099a9f0c(&uStack_f0,&UNK_10f59015c,0x98,3,FUN_1099aa768,0);
      FUN_1092b4db8(CONCAT17(uStack_e1,
                             CONCAT16(uStack_e2,
                                      CONCAT15(uStack_e3,
                                               CONCAT14(uStack_e4,CONCAT22(uStack_e6,uStack_e8)))))
                    + 0x7540,&UNK_10f59022b,0x1a);
      func_0x0001099ab7c0();
      FUN_109997a28(auStack_88);
      __Unwind_Resume();
      *puVar4 = &PTR_FUN_110b1e8b8;
      lVar7 = puVar4[0x1b];
      puVar4[0x1b] = 0;
      if (lVar7 != 0) {
        __ZdaPv();
      }
      plVar6 = (long *)puVar4[0x1a];
      puVar4[0x1a] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)puVar4[0x19];
      puVar4[0x19] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      if (puVar4[0x11] != 0) {
        puVar4[0x12] = puVar4[0x11];
        __ZdlPv();
      }
      *puVar4 = &PTR_FUN_110b1d718;
      FUN_1099215c8(puVar4 + 9,puVar4[10]);
      __ZNSt3__15mutexD1Ev(puVar4 + 1);
      return puVar4;
    }
    ppuVar5 = *(undefined ***)param_2[0x19];
  }
  (*(code *)ppuVar5[2])();
LAB_109983dd0:
  if (0 < (int)*(uint *)(param_3 + 0xc)) {
    _bzero(param_6,(ulong)*(uint *)(param_3 + 0xc) << 3);
  }
  uStack_e0._7_1_ = '\x05';
  uStack_f0._0_4_ = 0x75746553;
  uStack_f0._4_2_ = 0x70;
  FUN_109997c38(auStack_88,&uStack_f0);
  if (uStack_e0._7_1_ < '\0') {
    __ZdlPv(CONCAT26(uStack_f0._6_2_,CONCAT24(uStack_f0._4_2_,(undefined4)uStack_f0)));
  }
  auVar8 = NEON_ext(*(undefined1 (*) [16])(param_3 + 0x18),*(undefined1 (*) [16])(param_3 + 0x18),8,
                    1);
  uStack_e8 = auVar8._8_2_;
  uStack_e6 = auVar8._10_2_;
  uStack_e4 = auVar8[0xc];
  uStack_e3 = auVar8[0xd];
  uStack_e2 = auVar8[0xe];
  uStack_e1 = auVar8[0xf];
  uStack_f0._0_4_ = auVar8._0_4_;
  uStack_f0._4_2_ = auVar8._4_2_;
  uStack_f0._6_2_ = auVar8._6_2_;
  (**(code **)(*(long *)param_2[0x19] + 0x18))
            ((long *)param_2[0x19],&uStack_f0,param_4,*param_5,param_2[0x1a],param_2[0x1b]);
  uStack_e0._7_1_ = '\t';
  uStack_f0._0_4_ = 0x6d696c45;
  uStack_f0._4_2_ = 0x6e69;
  uStack_f0._6_2_ = 0x7461;
  uStack_e8 = 0x65;
  FUN_109997c38(auStack_88,&uStack_f0);
  if (uStack_e0._7_1_ < '\0') {
    __ZdlPv(CONCAT26(uStack_f0._6_2_,CONCAT24(uStack_f0._4_2_,(undefined4)uStack_f0)));
  }
  iVar2 = *(int *)(param_3 + 0xc);
  plVar6 = (long *)param_2[0x1a];
  (**(code **)(*plVar6 + 0x28))();
  lVar7 = param_6 + (long)iVar2 * 8 + (long)(int)plVar6 * -8;
  (**(code **)(*param_2 + 0x30))(param_1,param_2,param_5,lVar7);
  uStack_e0._7_1_ = '\f';
  uStack_e8 = 0x6c6f;
  uStack_e6 = 0x6576;
  uStack_f0._0_4_ = 0x75646552;
  uStack_f0._4_2_ = 0x6563;
  uStack_f0._6_2_ = 0x5364;
  uStack_e4 = 0;
  FUN_109997c38(auStack_88,&uStack_f0);
  if (uStack_e0._7_1_ < '\0') {
    __ZdlPv(CONCAT26(uStack_f0._6_2_,CONCAT24(uStack_f0._4_2_,(undefined4)uStack_f0)));
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    auVar8 = NEON_ext(*(undefined1 (*) [16])(param_3 + 0x18),*(undefined1 (*) [16])(param_3 + 0x18),
                      8,1);
    uStack_e8 = auVar8._8_2_;
    uStack_e6 = auVar8._10_2_;
    uStack_e4 = auVar8[0xc];
    uStack_e3 = auVar8[0xd];
    uStack_e2 = auVar8[0xe];
    uStack_e1 = auVar8[0xf];
    uStack_f0._0_4_ = auVar8._0_4_;
    uStack_f0._4_2_ = auVar8._4_2_;
    uStack_f0._6_2_ = auVar8._6_2_;
    (**(code **)(*(long *)param_2[0x19] + 0x20))
              ((long *)param_2[0x19],&uStack_f0,param_4,*param_5,lVar7,param_6);
    uStack_e0._7_1_ = '\x0e';
    uStack_f0._0_4_ = 0x6b636142;
    uStack_f0._4_2_ = 0x7553;
    uStack_f0._6_2_ = 0x7362;
    uStack_e8 = 0x6974;
    uStack_e6 = 0x7574;
    uStack_e4 = 0x74;
    uStack_e3 = 0x65;
    uStack_e2 = 0;
    FUN_109997c38(auStack_88,&uStack_f0);
    if (uStack_e0._7_1_ < '\0') {
      __ZdlPv(CONCAT26(uStack_f0._6_2_,CONCAT24(uStack_f0._4_2_,(undefined4)uStack_f0)));
    }
  }
  puVar4 = auStack_88;
  FUN_109997a28(puVar4);
  return puVar4;
}



/* Entry: 109984098; end: 109984133;  */

undefined8 * FUN_109984098(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110b1e8b8;
  lVar1 = param_1[0x1b];
  param_1[0x1b] = 0;
  if (lVar1 != 0) {
    __ZdaPv();
  }
  plVar2 = (long *)param_1[0x1a];
  param_1[0x1a] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0x19];
  param_1[0x19] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110b1d718;
  FUN_1099215c8(param_1 + 9,param_1[10]);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 109984134; end: 109984187;  */

undefined8 * FUN_109984134(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_1099839c8();
  *puVar1 = &PTR_FUN_110b1e900;
  FUN_10992d798(puVar1 + 0x1c,param_2);
  return param_1;
}



/* Entry: 109984188; end: 1099842ef;  */

undefined8 * FUN_109984188(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[0x1c];
  param_1[0x1c] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *param_1 = &PTR_FUN_110b1e8b8;
  lVar2 = param_1[0x1b];
  param_1[0x1b] = 0;
  if (lVar2 != 0) {
    __ZdaPv();
  }
  plVar1 = (long *)param_1[0x1a];
  param_1[0x1a] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0x19];
  param_1[0x19] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110b1d718;
  FUN_1099215c8(param_1 + 9,param_1[10]);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 1099842f0; end: 10998446b;  */

/* WARNING: Removing unreachable block (ram,0x00010998445c) */

void FUN_1099842f0(long param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined8 *extraout_x8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  
  puVar10 = (undefined4 *)0x0;
  iVar3 = **(int **)(param_1 + 0x88);
  lVar6 = *param_2;
  iVar13 = (int)((ulong)(param_2[1] - lVar6) >> 3);
  iVar2 = iVar13 - iVar3;
  lVar12 = (long)iVar2;
  if (iVar2 != 0) {
    if (iVar2 < 0) {
      FUN_10923f788();
      __ZdlPv(lVar12);
      __Unwind_Resume();
      extraout_x8[2] = 0;
      extraout_x8[1] = 0;
      puVar11 = extraout_x8 + 2;
      *puVar11 = 0x2e73736563637553;
      *extraout_x8 = 0xbff0000000000000;
      extraout_x8[4] = 0;
      extraout_x8[3] = 0;
      *(undefined1 *)((long)extraout_x8 + 0x27) = 8;
      lVar6 = *(long *)(param_1 + 0xd0);
      iVar3 = *(int *)(lVar6 + 8);
      if (iVar3 != 0) {
        *(undefined4 *)(extraout_x8 + 1) = 1;
        uVar1 = *(undefined8 *)(param_1 + 0xd8);
        plVar5 = *(long **)(param_1 + 0xe0);
        plVar4 = plVar5;
        (**(code **)(*plVar5 + 0x10))(plVar5,iVar3,*(undefined8 *)(lVar6 + 0x28),puVar11);
        iVar3 = (int)plVar4;
        if (iVar3 == 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5,uVar1,param_3,puVar11);
          iVar3 = (int)plVar5;
        }
        *(int *)((long)extraout_x8 + 0xc) = iVar3;
      }
      return;
    }
    puVar10 = (undefined4 *)(lVar12 << 2);
    __Znwm();
    _bzero();
  }
  if (iVar3 < iVar13) {
    puVar7 = (undefined4 *)(lVar6 + (long)iVar3 * 8);
    puVar9 = puVar10;
    do {
      *puVar9 = *puVar7;
      lVar12 = lVar12 + -1;
      puVar7 = puVar7 + 2;
      puVar9 = puVar9 + 1;
    } while (lVar12 != 0);
  }
  plVar4 = (long *)0x38;
  __Znwm();
  FUN_109919200();
  plVar5 = *(long **)(param_1 + 0xd0);
  *(long **)(param_1 + 0xd0) = plVar4;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
    plVar4 = *(long **)(param_1 + 0xd0);
  }
  (**(code **)(*plVar4 + 0x20))();
  uVar8 = -((ulong)plVar4 >> 0x1f & 1) & 0xfffffff800000000 | ((ulong)plVar4 & 0xffffffff) << 3;
  if ((int)plVar4 < 0) {
    uVar8 = 0xffffffffffffffff;
  }
  __Znam();
  _bzero();
  lVar6 = *(long *)(param_1 + 0xd8);
  *(ulong *)(param_1 + 0xd8) = uVar8;
  if (lVar6 != 0) {
    __ZdaPv();
  }
  if (puVar10 == (undefined4 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar10);
  return;
}



/* Entry: 10998446c; end: 10998453f;  */

void FUN_10998446c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  
  param_1[2] = 0;
  param_1[1] = 0;
  puVar6 = param_1 + 2;
  *puVar6 = 0x2e73736563637553;
  *param_1 = 0xbff0000000000000;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined1 *)((long)param_1 + 0x27) = 8;
  lVar5 = *(long *)(param_2 + 0xd0);
  iVar2 = *(int *)(lVar5 + 8);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 1) = 1;
    uVar1 = *(undefined8 *)(param_2 + 0xd8);
    plVar4 = *(long **)(param_2 + 0xe0);
    plVar3 = plVar4;
    (**(code **)(*plVar4 + 0x10))(plVar4,iVar2,*(undefined8 *)(lVar5 + 0x28),puVar6);
    iVar2 = (int)plVar3;
    if (iVar2 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4,uVar1,param_4,puVar6);
      iVar2 = (int)plVar4;
    }
    *(int *)((long)param_1 + 0xc) = iVar2;
  }
  return;
}



/* Entry: 109984540; end: 10998463b;  */

undefined8 * FUN_109984540(undefined8 *param_1,int *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plStack_38;
  
  puVar2 = param_1;
  FUN_1099839c8();
  *puVar2 = &PTR_FUN_110b1e948;
  puVar2[0x1d] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1f] = 0;
  puVar2[0x1e] = 0;
  puVar2[0x20] = 0;
  if (*param_2 != 5) {
    FUN_109987cfc(&plStack_38,param_2);
    plVar1 = plStack_38;
    plStack_38 = (long *)0x0;
    plVar3 = (long *)param_1[0x1f];
    param_1[0x1f] = plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
  }
  return param_1;
}



/* Entry: 10998463c; end: 1099847f3;  */

undefined8 * FUN_10998463c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[0x20];
  param_1[0x20] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0x1f];
  param_1[0x1f] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[0x1c] != 0) {
    param_1[0x1d] = param_1[0x1c];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110b1e8b8;
  lVar2 = param_1[0x1b];
  param_1[0x1b] = 0;
  if (lVar2 != 0) {
    __ZdaPv();
  }
  plVar1 = (long *)param_1[0x1a];
  param_1[0x1a] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0x19];
  param_1[0x19] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110b1d718;
  FUN_1099215c8(param_1 + 9,param_1[10]);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 1099847f4; end: 109984e67;  */

/* WARNING: Removing unreachable block (ram,0x000109984bc4) */

void FUN_1099847f4(uint *param_1,long *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  uint *puVar15;
  long lVar16;
  int *piVar17;
  undefined8 *extraout_x8;
  ulong *puVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 *puVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 *puVar29;
  ulong uVar30;
  uint *puVar31;
  long lVar32;
  uint *puVar33;
  uint *puVar34;
  uint *puVar35;
  undefined **ppuVar36;
  uint *puVar37;
  ulong uVar38;
  undefined *puVar39;
  uint *puVar40;
  long lVar41;
  uint *puVar42;
  uint *puVar43;
  undefined8 uVar44;
  int *piStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined **ppuStack_218;
  long lStack_210;
  undefined7 uStack_208;
  undefined1 uStack_201;
  undefined7 uStack_200;
  undefined1 uStack_1f9;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  uint uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined8 uStack_1b0;
  int iStack_1a4;
  undefined1 auStack_1a0 [4];
  int aiStack_19c [3];
  uint *puStack_190;
  uint *puStack_188;
  ulong uStack_180;
  uint *puStack_178;
  uint *puStack_170;
  uint *puStack_168;
  uint *puStack_160;
  uint *puStack_158;
  uint *puStack_150;
  long *plStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  uint *puStack_128;
  uint *puStack_120;
  uint *puStack_118;
  uint *puStack_110;
  long lStack_108;
  long *plStack_100;
  uint *puStack_f8;
  long alStack_f0 [12];
  long *plStack_90;
  long *plStack_88;
  long alStack_80 [2];
  uint auStack_6c [3];
  
  puStack_128 = param_1 + 0x38;
  puVar34 = *(uint **)puStack_128;
  uVar2 = **(uint **)(param_1 + 0x22);
  uVar38 = (ulong)uVar2;
  puVar33 = (uint *)(long)(int)uVar2;
  puVar40 = (uint *)(param_2[1] - *param_2);
  puVar42 = (uint *)((ulong)puVar40 >> 3);
  lStack_108 = param_2[3];
  puStack_f8 = (uint *)param_2[4];
  iVar6 = (int)puVar42 - uVar2;
  puVar15 = (uint *)(long)iVar6;
  puVar37 = *(uint **)(param_1 + 0x3a);
  puVar35 = (uint *)((long)puVar37 - (long)puVar34);
  puVar31 = (uint *)((long)puVar35 >> 2);
  puVar43 = puVar34;
  puStack_120 = param_1;
  plStack_100 = param_2;
  if (puVar31 < puVar15) {
    uVar30 = (long)puVar15 - (long)puVar31;
    if ((ulong)(*(long *)(param_1 + 0x3c) - (long)puVar37 >> 2) < uVar30) {
      puStack_110 = puVar33;
      if (iVar6 < 0) {
        FUN_10923f788();
      }
      else {
        uVar22 = *(long *)(param_1 + 0x3c) - (long)puVar34;
        puVar33 = (uint *)((long)uVar22 >> 1);
        if (puVar33 <= puVar15) {
          puVar33 = puVar15;
        }
        if (0x7ffffffffffffffb < uVar22) {
          puVar33 = (uint *)0x3fffffffffffffff;
        }
        if ((ulong)puVar33 >> 0x3e == 0) {
          puVar37 = (uint *)((long)puVar33 << 2);
          __Znwm();
          _bzero((undefined *)((long)puVar37 + (long)puVar35),
                 ((((long)puVar40 * 0x20000000 >> 0x1e) + ((long)puVar31 + (long)puStack_110) * -4)
                  - 4U & 0xfffffffffffffffc) + 4);
          _memcpy(puVar37,puVar34,puVar35);
          param_1 = puStack_120;
          *(uint **)(puStack_120 + 0x38) = puVar37;
          *(undefined **)(puStack_120 + 0x3a) =
               (undefined *)((long)puVar37 + (long)puVar35) + uVar30 * 4;
          *(uint **)(puStack_120 + 0x3c) = puVar37 + (long)puVar33;
          puVar33 = puStack_110;
          puVar43 = puVar37;
          if (puVar34 != (uint *)0x0) {
            __ZdlPv(puVar34);
            puVar33 = puStack_110;
            puVar43 = *(uint **)puStack_128;
          }
          goto LAB_10998495c;
        }
      }
      func_0x000104c4f740();
LAB_109984dec:
      uVar30 = 0x125;
      FUN_1099ab8e4(alStack_f0,&UNK_10f59015c,0x125,&plStack_90);
      plVar8 = alStack_f0;
      func_0x0001099ab7c0();
      lVar16 = alStack_80[0];
      func_0x0001091804b4(&plStack_88);
      plVar7 = plVar8;
      __Unwind_Resume();
      pcStack_138 = FUN_109984e68;
      puStack_190 = puVar42;
      puStack_188 = puVar40;
      uStack_180 = uVar38;
      puStack_178 = param_1;
      puStack_170 = puVar37;
      puStack_168 = puVar35;
      puStack_160 = puVar34;
      puStack_158 = puVar33;
      puStack_150 = puVar31;
      plStack_148 = plVar8;
      puStack_140 = &stack0xfffffffffffffff0;
      if ((int)plVar7[0xc] == 5) {
        if ((*(byte *)((long)plVar7 + 0x76) & 1) == 0) {
          ppuStack_218 = (undefined **)0x0;
          uStack_1c0 = 0;
          uStack_1bc = 0;
          uStack_200 = 0;
          uStack_1f9 = 0;
          uStack_208 = 0;
          uStack_201 = 0;
          uStack_1f0 = 0;
          lStack_1f8 = 0;
          lStack_1e0 = 0;
          lStack_1e8 = 0;
          uStack_1d0 = 0;
          uStack_1d8 = 0;
          uStack_1c8 = uStack_1c8 & 0xffffffff00000000;
          FUN_1099a9f0c(&ppuStack_218,&UNK_10f59015c,0x15f,3,FUN_1099aa768,0);
          FUN_1092b4db8(lStack_210 + 0x7540,&UNK_10f59029f,0x36);
LAB_1099857b0:
          func_0x0001099ab7c0(&ppuStack_218);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1099857bc);
          (*pcVar5)();
        }
        plVar8 = (long *)plVar7[0x1a];
        (**(code **)(*plVar8 + 0x20))();
        iVar6 = (int)plVar8;
        if (iVar6 == 0) {
          *extraout_x8 = 0xbff0000000000000;
          extraout_x8[4] = 0;
          extraout_x8[3] = 0;
          extraout_x8[2] = 0;
          extraout_x8[1] = 0;
          *(undefined1 *)((long)extraout_x8 + 0x27) = 8;
          extraout_x8[2] = 0x2e73736563637553;
        }
        else {
          piVar17 = (int *)((long)plVar7 + 100);
          if (*piVar17 != 2) {
            FUN_109986890(piVar17,2);
            piStack_238 = piVar17;
            FUN_1099ab8e4(&ppuStack_218,&UNK_10f59015c,0x16c,&piStack_238);
            goto LAB_1099857b0;
          }
          if (plVar7[0x20] == 0) {
            lVar32 = 0x40;
            __Znwm();
            FUN_109919714();
            plVar8 = (long *)plVar7[0x20];
            plVar7[0x20] = lVar32;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 8))();
            }
          }
          plVar8 = (long *)plVar7[0x1a];
          lVar32 = plVar7[0x1c];
          lVar41 = plVar7[0x1d];
          if (lVar41 != lVar32) {
            uVar38 = 0;
            do {
              iVar4 = *(int *)(lVar32 + uVar38 * 4);
              uVar22 = (ulong)iVar4;
              plVar10 = plVar8;
              FUN_10991b93c(plVar8,uVar38,uVar38,&piStack_238,aiStack_19c,auStack_1a0,&iStack_1a4);
              if (plVar10 == (long *)0x0) {
                ppuStack_218 = (undefined **)0x0;
                uStack_1c0 = 0;
                uStack_1bc = 0;
                uStack_200 = 0;
                uStack_1f9 = 0;
                uStack_208 = 0;
                uStack_201 = 0;
                uStack_1f0 = 0;
                lStack_1f8 = 0;
                lStack_1e0 = 0;
                lStack_1e8 = 0;
                uStack_1d0 = 0;
                uStack_1d8 = 0;
                uStack_1c8 = (ulong)uStack_1c8._4_4_ << 0x20;
                FUN_1099a9f0c(&ppuStack_218,&UNK_10f59015c,0x17d,3,FUN_1099aa768,0);
                FUN_1092b4db8(lStack_210 + 0x7540,&UNK_10f590304,0x26);
                goto LAB_1099857b0;
              }
              puVar18 = *(ulong **)(*(long *)(plVar7[0x20] + 0x20) + (long)(int)uVar38 * 8);
              if (puVar18 == (ulong *)0x0) {
                ppuStack_218 = (undefined **)0x0;
                uStack_1c0 = 0;
                uStack_1bc = 0;
                uStack_200 = 0;
                uStack_1f9 = 0;
                uStack_208 = 0;
                uStack_201 = 0;
                uStack_1f0 = 0;
                lStack_1f8 = 0;
                lStack_1e0 = 0;
                lStack_1e8 = 0;
                uStack_1d0 = 0;
                uStack_1d8 = 0;
                uStack_1c8 = (ulong)uStack_1c8._4_4_ << 0x20;
                FUN_1099a9f0c(&ppuStack_218,&UNK_10f59015c,0x183,3,FUN_1099aa768,0);
                FUN_1092b4db8(lStack_210 + 0x7540,&UNK_10f59032b,0x27);
                goto LAB_1099857b0;
              }
              lVar23 = (long)iStack_1a4;
              uVar24 = (ulong)*(int *)(*(long *)(plVar7[0x20] + 8) + (long)(int)uVar38 * 4);
              puVar19 = (undefined8 *)*puVar18;
              puVar26 = (undefined8 *)
                        (*plVar10 + (long)aiStack_19c[0] * 8 +
                        (long)(int)piStack_238 * (long)iStack_1a4 * 8);
              if (((ulong)puVar19 & 7) == 0) {
                if (0 < iVar4) {
                  uVar25 = 0;
                  uVar27 = (ulong)puVar19 >> 3 & 1;
                  puVar9 = puVar26;
                  puVar29 = puVar19;
                  do {
                    if (0 < (long)uVar27) {
                      puVar19[uVar25 * uVar24] = puVar26[uVar25 * lVar23];
                    }
                    lVar32 = (uVar22 - uVar27 & 0xfffffffffffffffe) + uVar27;
                    if (1 < (long)(uVar22 - uVar27)) {
                      puVar11 = puVar9 + uVar27;
                      uVar12 = uVar27;
                      puVar13 = puVar29 + uVar27;
                      do {
                        uVar44 = *puVar11;
                        puVar13[1] = puVar11[1];
                        *puVar13 = uVar44;
                        uVar12 = uVar12 + 2;
                        puVar11 = puVar11 + 2;
                        puVar13 = puVar13 + 2;
                      } while ((long)uVar12 < lVar32);
                    }
                    for (; lVar32 < (long)uVar22; lVar32 = lVar32 + 1) {
                      puVar29[lVar32] = puVar9[lVar32];
                    }
                    uVar12 = uVar27 + (uVar24 & 1);
                    uVar28 = uVar12 & 1;
                    uVar1 = -uVar28;
                    if ((long)uVar12 < 0 == SCARRY8(uVar27,uVar24 & 1)) {
                      uVar1 = uVar28;
                    }
                    uVar27 = uVar22;
                    if ((long)uVar1 <= (long)uVar22) {
                      uVar27 = uVar1;
                    }
                    uVar25 = uVar25 + 1;
                    puVar9 = puVar9 + lVar23;
                    puVar29 = puVar29 + uVar24;
                  } while (uVar25 != uVar22);
                  lVar32 = plVar7[0x1c];
                  lVar41 = plVar7[0x1d];
                }
              }
              else if (0 < iVar4) {
                uVar25 = 0;
                uVar27 = uVar22;
                puVar9 = puVar26;
                puVar29 = puVar19;
                do {
                  do {
                    *puVar19 = *puVar26;
                    uVar27 = uVar27 - 1;
                    puVar19 = puVar19 + 1;
                    puVar26 = puVar26 + 1;
                  } while (uVar27 != 0);
                  uVar25 = uVar25 + 1;
                  puVar26 = puVar9 + lVar23;
                  puVar19 = puVar29 + uVar24;
                  uVar27 = uVar22;
                  puVar9 = puVar26;
                  puVar29 = puVar19;
                } while (uVar25 != uVar22);
              }
              uVar38 = uVar38 + 1;
            } while (uVar38 < (ulong)(lVar41 - lVar32 >> 2));
          }
          FUN_109919e60(plVar7[0x20]);
          uVar22 = (ulong)iVar6;
          uVar38 = uVar30 >> 3 & 1;
          if ((long)iVar6 <= (long)uVar38) {
            uVar38 = uVar22;
          }
          if ((uVar30 & 7) != 0) {
            uVar38 = uVar22;
          }
          lVar32 = uVar22 - uVar38;
          if (0 < (long)uVar38) {
            _bzero(uVar30,uVar38 << 3);
          }
          lVar41 = (lVar32 - (lVar32 >> 0x3f) & 0xfffffffffffffffeU) + uVar38;
          if (1 < lVar32) {
            lVar23 = lVar41;
            if (lVar41 <= (long)(uVar38 + 2)) {
              lVar23 = uVar38 + 2;
            }
            _bzero(uVar30 + uVar38 * 8,(lVar23 + ~uVar38 & 0x1ffffffffffffffe) * 8 + 0x10);
          }
          if (lVar41 < (long)uVar22) {
            _bzero(uVar30 + (lVar32 / 2) * 0x10 + uVar38 * 8,(lVar32 % 2) * 8);
          }
          plVar10 = (long *)0x10;
          __Znwm();
          *plVar10 = (long)&PTR_FUN_110b1ea28;
          plVar10[1] = (long)plVar8;
          lVar32 = plVar7[0x20];
          plVar8 = (long *)0x10;
          __Znwm();
          lStack_210 = 0x100000002;
          lStack_1f8 = plVar7[0xf];
          *plVar8 = (long)&PTR_DAT_110b1ea80;
          plVar8[1] = lVar32;
          uStack_200 = 0;
          uStack_208 = 0;
          uStack_201 = 0;
          ppuStack_218 = &PTR_FUN_110b1d840;
          uStack_1f0 = CONCAT44(uStack_1f0._4_4_,1);
          lStack_1e8 = 0;
          uStack_1d8 = 0;
          lStack_1e0 = 0;
          uStack_1c8 = 0xffffffffffffffff;
          uStack_1d0 = 0xffffffff0000000a;
          uStack_1c0 = uStack_1c0 & 0xffffff00;
          uStack_1bc = 0;
          uStack_1b8 = 0xffffffff;
          uStack_1b0 = 0;
          uStack_220 = *(undefined8 *)(lVar16 + 0x18);
          uStack_228 = *(undefined8 *)(lVar16 + 0x10);
          piStack_238 = (int *)0x0;
          plStack_230 = plVar8;
          FUN_10992619c(extraout_x8,&ppuStack_218,plVar10,plVar7[0x1b],&piStack_238,uVar30);
          if (lStack_1e8 != 0) {
            lStack_1e0 = lStack_1e8;
            __ZdlPv();
          }
          (**(code **)(*plVar8 + 8))(plVar8);
          (**(code **)(*plVar10 + 8))(plVar10);
        }
        return;
      }
      *extraout_x8 = 0xbff0000000000000;
      extraout_x8[2] = 0;
      extraout_x8[1] = 0;
      puVar26 = extraout_x8 + 2;
      *puVar26 = 0x2e73736563637553;
      extraout_x8[4] = 0;
      extraout_x8[3] = 0;
      *(undefined1 *)((long)extraout_x8 + 0x27) = 8;
      lVar16 = *(long *)(plVar7[0x1a] + 0x80);
      if (*(int *)(lVar16 + 8) == 0) {
        return;
      }
      plVar8 = (long *)plVar7[0x1f];
      (**(code **)(*plVar8 + 0x10))();
      if ((int)plVar8 == 2) {
        FUN_109922860(&ppuStack_218,lVar16,0);
        uVar14 = 2;
        ppuVar36 = ppuStack_218;
      }
      else {
        FUN_109922860(&ppuStack_218,lVar16,1);
        uVar14 = 1;
        ppuVar36 = ppuStack_218;
      }
      *(undefined4 *)(ppuVar36 + 0xb) = uVar14;
      if (ppuVar36 + 0xf != (undefined **)(plVar7 + 0x1c)) {
        lVar16 = plVar7[0x1c];
        lVar32 = plVar7[0x1d];
        uVar38 = lVar32 - lVar16;
        puVar20 = ppuVar36[0x11];
        puVar39 = ppuVar36[0xf];
        if ((ulong)((long)puVar20 - (long)puVar39) < uVar38) {
          uVar22 = (long)uVar38 >> 2;
          if (puVar39 != (undefined *)0x0) {
            ppuVar36[0x10] = puVar39;
            __ZdlPv(puVar39);
            puVar20 = (undefined *)0x0;
            ppuVar36[0xf] = (undefined *)0x0;
            ppuVar36[0x10] = (undefined *)0x0;
            ppuVar36[0x11] = (undefined *)0x0;
          }
          if (uVar22 >> 0x3e != 0) goto LAB_10998570c;
          uVar24 = (long)puVar20 >> 1;
          if ((ulong)((long)puVar20 >> 1) <= uVar22) {
            uVar24 = uVar22;
          }
          if ((undefined *)0x7ffffffffffffffb < puVar20) {
            uVar24 = 0x3fffffffffffffff;
          }
          if (uVar24 >> 0x3e != 0) goto LAB_10998570c;
          puVar39 = (undefined *)(uVar24 << 2);
          __Znwm();
          ppuVar36[0xf] = puVar39;
          ppuVar36[0x10] = puVar39;
          ppuVar36[0x11] = puVar39 + uVar24 * 4;
          if (lVar32 != lVar16) {
            _memcpy(puVar39,lVar16,uVar38);
          }
LAB_109985424:
          puVar39 = puVar39 + uVar38;
        }
        else {
          puVar20 = ppuVar36[0x10];
          if (uVar38 <= (ulong)((long)puVar20 - (long)puVar39)) {
            if (lVar32 != lVar16) {
              _memmove(puVar39,lVar16,uVar38);
            }
            goto LAB_109985424;
          }
          lVar41 = lVar16 + ((long)puVar20 - (long)puVar39);
          if (puVar20 != puVar39) {
            _memmove(puVar39,lVar16);
            puVar20 = ppuVar36[0x10];
          }
          lVar32 = lVar32 - lVar41;
          if (lVar32 != 0) {
            _memmove(puVar20,lVar41,lVar32);
          }
          puVar39 = puVar20 + lVar32;
        }
        ppuVar36[0x10] = puVar39;
      }
      if (ppuVar36 + 0xc == (undefined **)(plVar7 + 0x1c)) goto LAB_109985540;
      lVar16 = plVar7[0x1c];
      lVar32 = plVar7[0x1d];
      uVar38 = lVar32 - lVar16;
      puVar20 = ppuVar36[0xe];
      puVar39 = ppuVar36[0xc];
      if ((ulong)((long)puVar20 - (long)puVar39) < uVar38) {
        uVar22 = (long)uVar38 >> 2;
        if (puVar39 != (undefined *)0x0) {
          ppuVar36[0xd] = puVar39;
          __ZdlPv(puVar39);
          puVar20 = (undefined *)0x0;
          ppuVar36[0xc] = (undefined *)0x0;
          ppuVar36[0xd] = (undefined *)0x0;
          ppuVar36[0xe] = (undefined *)0x0;
        }
        if (uVar22 >> 0x3e != 0) {
LAB_10998570c:
          FUN_10923f788();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x109985714);
          (*pcVar5)();
        }
        uVar24 = (long)puVar20 >> 1;
        if ((ulong)((long)puVar20 >> 1) <= uVar22) {
          uVar24 = uVar22;
        }
        if ((undefined *)0x7ffffffffffffffb < puVar20) {
          uVar24 = 0x3fffffffffffffff;
        }
        if (uVar24 >> 0x3e != 0) goto LAB_10998570c;
        puVar39 = (undefined *)(uVar24 << 2);
        __Znwm();
        ppuVar36[0xc] = puVar39;
        ppuVar36[0xd] = puVar39;
        ppuVar36[0xe] = puVar39 + uVar24 * 4;
        if (lVar32 != lVar16) {
          _memcpy(puVar39,lVar16,uVar38);
        }
LAB_109985538:
        puVar39 = puVar39 + uVar38;
      }
      else {
        puVar20 = ppuVar36[0xd];
        if (uVar38 <= (ulong)((long)puVar20 - (long)puVar39)) {
          if (lVar32 != lVar16) {
            _memmove(puVar39,lVar16,uVar38);
          }
          goto LAB_109985538;
        }
        lVar41 = lVar16 + ((long)puVar20 - (long)puVar39);
        if (puVar20 != puVar39) {
          _memmove(puVar39,lVar16);
          puVar20 = ppuVar36[0xd];
        }
        lVar32 = lVar32 - lVar41;
        if (lVar32 != 0) {
          _memmove(puVar20,lVar41,lVar32);
        }
        puVar39 = puVar20 + lVar32;
      }
      ppuVar36[0xd] = puVar39;
LAB_109985540:
      *(undefined4 *)(extraout_x8 + 1) = 1;
      plVar10 = (long *)plVar7[0x1f];
      lVar16 = plVar7[0x1b];
      plVar8 = plVar10;
      (**(code **)(*plVar10 + 0x18))(plVar10,ppuVar36,puVar26);
      iVar6 = (int)plVar8;
      if (iVar6 == 0) {
        (**(code **)(*plVar10 + 0x20))(plVar10,lVar16,uVar30,puVar26);
        iVar6 = (int)plVar10;
      }
      *(int *)((long)extraout_x8 + 0xc) = iVar6;
                    /* WARNING: Could not recover jumptable at 0x0001099855b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*ppuVar36 + 8))(ppuVar36);
      return;
    }
    _bzero(puVar37,((((long)puVar40 * 0x20000000 >> 0x1e) + ((long)puVar31 + (long)puVar33) * -4) -
                    4U & 0xfffffffffffffffc) + 4);
    puVar34 = puVar37 + uVar30;
  }
  else {
    if (puVar31 <= puVar15) goto LAB_10998495c;
    puVar34 = puVar34 + (long)puVar15;
  }
  *(uint **)(param_1 + 0x3a) = puVar34;
LAB_10998495c:
  if ((int)uVar2 < (int)puVar42) {
    lVar16 = ((long)puVar40 * 0x20000000 >> 0x20) - (long)puVar33;
    puVar34 = (uint *)(*plStack_100 + (long)puVar33 * 8);
    puVar33 = puVar43;
    do {
      *puVar33 = *puVar34;
      lVar16 = lVar16 + -1;
      puVar34 = puVar34 + 2;
      puVar33 = puVar33 + 1;
    } while (lVar16 != 0);
  }
  plStack_88 = alStack_80;
  alStack_80[0] = 0;
  alStack_80[1] = 0;
  if (*(uint **)(param_1 + 0x3a) != puVar43) {
    lVar16 = 0;
    uVar30 = 0;
    do {
      alStack_f0[0] = lVar16;
      FUN_10941050c(&plStack_88,alStack_f0,alStack_f0);
      uVar30 = uVar30 + 1;
      lVar16 = lVar16 + 0x100000001;
    } while (uVar30 < (ulong)(*(long *)(param_1 + 0x3a) - *(long *)(param_1 + 0x38) >> 2));
  }
  puVar42 = (uint *)((ulong)((long)puStack_f8 - lStack_108) >> 5);
  if ((int)puVar42 < 1) {
    param_1 = (uint *)0x0;
  }
  else {
    param_1 = (uint *)0x0;
    puStack_110 = (uint *)((ulong)((long)puStack_f8 - lStack_108) >> 5 & 0x7fffffff);
    puStack_118 = puVar42;
    do {
      puVar34 = (uint *)(long)(int)param_1;
      iVar6 = **(int **)(plStack_100[3] + (long)puVar34 * 0x20 + 8);
      lStack_108 = CONCAT44(lStack_108._4_4_,iVar6);
      if ((int)uVar2 <= iVar6) break;
      if ((int)param_1 < (int)puVar42) {
        puVar33 = (uint *)0x0;
        puVar35 = (uint *)0x0;
        puVar43 = (uint *)0x0;
        do {
          lVar16 = plStack_100[3] + (long)puVar34 * 0x20;
          piVar17 = *(int **)(lVar16 + 8);
          param_1 = puVar34;
          puVar42 = puStack_118;
          if (*piVar17 != (int)lStack_108) break;
          puStack_f8 = puVar34;
          if (8 < (ulong)(*(long *)(lVar16 + 0x10) - (long)piVar17)) {
            lVar32 = 8;
            uVar30 = 1;
            puVar34 = puVar33;
            do {
              uVar21 = *(int *)((long)piVar17 + lVar32) - uVar2;
              puVar40 = (uint *)(ulong)uVar21;
              if (puVar35 < puVar43) {
                *puVar35 = uVar21;
                puVar33 = puVar34;
              }
              else {
                puVar37 = (uint *)((long)puVar35 - (long)puVar34);
                uVar22 = ((long)puVar37 >> 2) + 1;
                if (uVar22 >> 0x3e != 0) {
                  FUN_10923f788();
LAB_109984de0:
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x109984de4);
                  (*pcVar5)();
                }
                uVar24 = (long)puVar43 - (long)puVar34 >> 1;
                if (uVar24 <= uVar22) {
                  uVar24 = uVar22;
                }
                if (0x7ffffffffffffffb < (ulong)((long)puVar43 - (long)puVar34)) {
                  uVar24 = 0x3fffffffffffffff;
                }
                if (uVar24 >> 0x3e != 0) {
                  func_0x000104c4f740();
                  goto LAB_109984de0;
                }
                puVar33 = (uint *)(uVar24 << 2);
                __Znwm();
                puVar35 = (uint *)((long)puVar33 + (long)puVar37);
                puVar43 = puVar33 + uVar24;
                *puVar35 = uVar21;
                _memcpy();
                if (puVar34 != (uint *)0x0) {
                  __ZdlPv(puVar34);
                }
              }
              puVar35 = puVar35 + 1;
              uVar30 = uVar30 + 1;
              piVar17 = *(int **)(lVar16 + 8);
              lVar32 = lVar32 + 8;
              puVar34 = puVar33;
            } while (uVar30 < (ulong)(*(long *)(lVar16 + 0x10) - (long)piVar17 >> 3));
          }
          puVar34 = (uint *)((long)puStack_f8 + 1);
          param_1 = puStack_118;
          puVar42 = puStack_118;
        } while (puVar34 != puStack_110);
      }
      else {
        puVar35 = (uint *)0x0;
        puVar33 = (uint *)0x0;
      }
      __ZNSt3__16__sortIRNS_6__lessIiiEEPiEEvT0_S5_T_(puVar33,puVar35,alStack_f0);
      if (puVar33 != puVar35) {
        puVar34 = puVar33 + 1;
        do {
          puVar43 = puVar34;
          if (puVar43 == puVar35) goto LAB_109984bd4;
          puVar34 = puVar43 + 1;
        } while (puVar43[-1] != *puVar43);
        puVar37 = puVar43 + -1;
        uVar21 = puVar43[-1];
        for (; puVar34 != puVar35; puVar34 = puVar34 + 1) {
          uVar3 = *puVar34;
          if (uVar21 != uVar3) {
            puVar37 = puVar37 + 1;
            *puVar37 = uVar3;
          }
          uVar21 = uVar3;
        }
        puVar37 = puVar37 + 1;
        if (puVar37 != puVar35) {
          puVar35 = puVar37;
        }
      }
LAB_109984bd4:
      if (puVar35 != puVar33) {
        puVar43 = (uint *)((long)puVar35 - (long)puVar33 >> 2);
        puVar34 = puVar43;
        if (puVar43 < (uint *)0x2) {
          puVar34 = (uint *)0x1;
        }
        puVar35 = (uint *)0x1;
        puVar15 = (uint *)0x0;
        do {
          puVar37 = (uint *)((long)puVar15 + 1);
          puVar31 = puVar35;
          if (puVar37 < puVar43) {
            do {
              alStack_f0[0] = CONCAT44(puVar33[(long)puVar31],puVar33[(long)puVar15]);
              FUN_10941050c(&plStack_88,alStack_f0,alStack_f0);
              puVar40 = (uint *)((long)puVar31 + 1);
              puVar31 = puVar40;
            } while (puVar43 != puVar40);
          }
          puVar35 = (uint *)((long)puVar35 + 1);
          puVar15 = puVar37;
        } while (puVar37 != puVar34);
      }
      if (puVar33 != (uint *)0x0) {
        __ZdlPv(puVar33);
      }
    } while ((int)param_1 < (int)puVar42);
  }
  if ((int)param_1 < (int)puVar42) {
    lVar16 = (long)(int)param_1;
    puVar34 = (uint *)&UNK_10f59026c;
    do {
      lVar32 = plStack_100[3] + lVar16 * 0x20;
      puVar31 = (uint *)(lVar32 + 8);
      puVar33 = *(uint **)puVar31;
      alStack_f0[0] = CONCAT44(alStack_f0[0]._4_4_,*puVar33);
      auStack_6c[0] = uVar2;
      if ((int)*puVar33 < (int)uVar2) {
        plVar8 = alStack_f0;
        FUN_109904144(plVar8,auStack_6c,&UNK_10f59026c);
        plStack_90 = plVar8;
        if (plVar8 != (long *)0x0) goto LAB_109984dec;
        puVar33 = *(uint **)puVar31;
        plStack_90 = (long *)0x0;
      }
      puVar35 = *(uint **)(lVar32 + 0x10);
      if (puVar35 != puVar33) {
        puVar37 = (uint *)0x0;
        do {
          if (puVar33 != puVar35) {
            uVar21 = puVar33[(long)puVar37 * 2];
            param_1 = (uint *)(ulong)uVar21;
            puVar40 = (uint *)(ulong)(uVar21 - uVar2);
            do {
              if ((int)uVar21 <= (int)*puVar33) {
                alStack_f0[0] = CONCAT44(*puVar33 - uVar2,uVar21 - uVar2);
                FUN_10941050c(&plStack_88,alStack_f0,alStack_f0);
              }
              puVar33 = puVar33 + 2;
            } while (puVar33 != puVar35);
            puVar33 = *(uint **)puVar31;
            puVar35 = *(uint **)(lVar32 + 0x10);
          }
          puVar37 = (uint *)((long)puVar37 + 1);
        } while (puVar37 < (uint *)((long)puVar35 - (long)puVar33 >> 3));
      }
      lVar16 = lVar16 + 1;
    } while ((int)lVar16 != (int)puVar42);
  }
  plVar7 = (long *)0x88;
  __Znwm();
  FUN_10991acb8();
  puVar40 = puStack_120;
  plVar8 = *(long **)(puStack_120 + 0x34);
  *(long **)(puStack_120 + 0x34) = plVar7;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
    plVar7 = *(long **)(puVar40 + 0x34);
  }
  (**(code **)(*plVar7 + 0x20))();
  uVar38 = -((ulong)plVar7 >> 0x1f & 1) & 0xfffffff800000000 | ((ulong)plVar7 & 0xffffffff) << 3;
  if ((int)plVar7 < 0) {
    uVar38 = 0xffffffffffffffff;
  }
  __Znam();
  _bzero();
  lVar16 = *(long *)(puVar40 + 0x36);
  *(ulong *)(puVar40 + 0x36) = uVar38;
  if (lVar16 != 0) {
    __ZdaPv();
  }
  func_0x0001091804b4(&plStack_88,alStack_80[0]);
  return;
}



/* Entry: 109984e68; end: 1099857b7;  */

void FUN_109984e68(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined **ppuVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  undefined *puVar28;
  long lVar29;
  int *piStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_80;
  int iStack_74;
  undefined1 auStack_70 [4];
  int aiStack_6c [3];
  
  if (*(int *)(param_2 + 0x60) == 5) {
    if ((*(byte *)(param_2 + 0x76) & 1) == 0) {
      ppuStack_e8 = (undefined **)0x0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_d0 = 0;
      uStack_c9 = 0;
      uStack_d8 = 0;
      uStack_d1 = 0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      lStack_b0 = 0;
      lStack_b8 = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_98 = uStack_98 & 0xffffffff00000000;
      FUN_1099a9f0c(&ppuStack_e8,&UNK_10f59015c,0x15f,3,FUN_1099aa768,0);
      FUN_1092b4db8(lStack_e0 + 0x7540,&UNK_10f59029f,0x36);
LAB_1099857b0:
      func_0x0001099ab7c0(&ppuStack_e8);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1099857bc);
      (*pcVar3)();
    }
    plVar5 = *(long **)(param_2 + 0xd0);
    (**(code **)(*plVar5 + 0x20))();
    iVar4 = (int)plVar5;
    if (iVar4 == 0) {
      *param_1 = 0xbff0000000000000;
      param_1[4] = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[1] = 0;
      *(undefined1 *)((long)param_1 + 0x27) = 8;
      param_1[2] = 0x2e73736563637553;
    }
    else {
      piVar6 = (int *)(param_2 + 100);
      if (*piVar6 != 2) {
        FUN_109986890(piVar6,2);
        piStack_108 = piVar6;
        FUN_1099ab8e4(&ppuStack_e8,&UNK_10f59015c,0x16c,&piStack_108);
        goto LAB_1099857b0;
      }
      if (*(long *)(param_2 + 0x100) == 0) {
        uVar7 = 0x40;
        __Znwm();
        FUN_109919714();
        plVar5 = *(long **)(param_2 + 0x100);
        *(undefined8 *)(param_2 + 0x100) = uVar7;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      plVar5 = *(long **)(param_2 + 0xd0);
      lVar25 = *(long *)(param_2 + 0xe0);
      lVar29 = *(long *)(param_2 + 0xe8);
      if (lVar29 != lVar25) {
        uVar26 = 0;
        do {
          iVar2 = *(int *)(lVar25 + uVar26 * 4);
          uVar27 = (ulong)iVar2;
          plVar9 = plVar5;
          FUN_10991b93c(plVar5,uVar26,uVar26,&piStack_108,aiStack_6c,auStack_70,&iStack_74);
          if (plVar9 == (long *)0x0) {
            ppuStack_e8 = (undefined **)0x0;
            uStack_90 = 0;
            uStack_8c = 0;
            uStack_d0 = 0;
            uStack_c9 = 0;
            uStack_d8 = 0;
            uStack_d1 = 0;
            uStack_c0 = 0;
            uStack_c8 = 0;
            lStack_b0 = 0;
            lStack_b8 = 0;
            uStack_a0 = 0;
            uStack_a8 = 0;
            uStack_98 = (ulong)uStack_98._4_4_ << 0x20;
            FUN_1099a9f0c(&ppuStack_e8,&UNK_10f59015c,0x17d,3,FUN_1099aa768,0);
            FUN_1092b4db8(lStack_e0 + 0x7540,&UNK_10f590304,0x26);
            goto LAB_1099857b0;
          }
          puVar14 = *(ulong **)
                     (*(long *)(*(long *)(param_2 + 0x100) + 0x20) + (long)(int)uVar26 * 8);
          if (puVar14 == (ulong *)0x0) {
            ppuStack_e8 = (undefined **)0x0;
            uStack_90 = 0;
            uStack_8c = 0;
            uStack_d0 = 0;
            uStack_c9 = 0;
            uStack_d8 = 0;
            uStack_d1 = 0;
            uStack_c0 = 0;
            uStack_c8 = 0;
            lStack_b0 = 0;
            lStack_b8 = 0;
            uStack_a0 = 0;
            uStack_a8 = 0;
            uStack_98 = (ulong)uStack_98._4_4_ << 0x20;
            FUN_1099a9f0c(&ppuStack_e8,&UNK_10f59015c,0x183,3,FUN_1099aa768,0);
            FUN_1092b4db8(lStack_e0 + 0x7540,&UNK_10f59032b,0x27);
            goto LAB_1099857b0;
          }
          lVar17 = (long)iStack_74;
          uVar18 = (ulong)*(int *)(*(long *)(*(long *)(param_2 + 0x100) + 8) + (long)(int)uVar26 * 4
                                  );
          puVar15 = (undefined8 *)*puVar14;
          puVar20 = (undefined8 *)
                    (*plVar9 + (long)aiStack_6c[0] * 8 +
                    (long)(int)piStack_108 * (long)iStack_74 * 8);
          if (((ulong)puVar15 & 7) == 0) {
            if (0 < iVar2) {
              uVar19 = 0;
              uVar21 = (ulong)puVar15 >> 3 & 1;
              puVar8 = puVar20;
              puVar23 = puVar15;
              do {
                if (0 < (long)uVar21) {
                  puVar15[uVar19 * uVar18] = puVar20[uVar19 * lVar17];
                }
                lVar25 = (uVar27 - uVar21 & 0xfffffffffffffffe) + uVar21;
                if (1 < (long)(uVar27 - uVar21)) {
                  puVar10 = puVar8 + uVar21;
                  uVar11 = uVar21;
                  puVar12 = puVar23 + uVar21;
                  do {
                    uVar7 = *puVar10;
                    puVar12[1] = puVar10[1];
                    *puVar12 = uVar7;
                    uVar11 = uVar11 + 2;
                    puVar10 = puVar10 + 2;
                    puVar12 = puVar12 + 2;
                  } while ((long)uVar11 < lVar25);
                }
                for (; lVar25 < (long)uVar27; lVar25 = lVar25 + 1) {
                  puVar23[lVar25] = puVar8[lVar25];
                }
                uVar11 = uVar21 + (uVar18 & 1);
                uVar22 = uVar11 & 1;
                uVar1 = -uVar22;
                if ((long)uVar11 < 0 == SCARRY8(uVar21,uVar18 & 1)) {
                  uVar1 = uVar22;
                }
                uVar21 = uVar27;
                if ((long)uVar1 <= (long)uVar27) {
                  uVar21 = uVar1;
                }
                uVar19 = uVar19 + 1;
                puVar8 = puVar8 + lVar17;
                puVar23 = puVar23 + uVar18;
              } while (uVar19 != uVar27);
              lVar25 = *(long *)(param_2 + 0xe0);
              lVar29 = *(long *)(param_2 + 0xe8);
            }
          }
          else if (0 < iVar2) {
            uVar19 = 0;
            uVar21 = uVar27;
            puVar8 = puVar20;
            puVar23 = puVar15;
            do {
              do {
                *puVar15 = *puVar20;
                uVar21 = uVar21 - 1;
                puVar15 = puVar15 + 1;
                puVar20 = puVar20 + 1;
              } while (uVar21 != 0);
              uVar19 = uVar19 + 1;
              puVar20 = puVar8 + lVar17;
              puVar15 = puVar23 + uVar18;
              uVar21 = uVar27;
              puVar8 = puVar20;
              puVar23 = puVar15;
            } while (uVar19 != uVar27);
          }
          uVar26 = uVar26 + 1;
        } while (uVar26 < (ulong)(lVar29 - lVar25 >> 2));
      }
      FUN_109919e60(*(undefined8 *)(param_2 + 0x100));
      uVar27 = (ulong)iVar4;
      uVar26 = param_4 >> 3 & 1;
      if ((long)iVar4 <= (long)uVar26) {
        uVar26 = uVar27;
      }
      if ((param_4 & 7) != 0) {
        uVar26 = uVar27;
      }
      lVar25 = uVar27 - uVar26;
      if (0 < (long)uVar26) {
        _bzero(param_4,uVar26 << 3);
      }
      lVar29 = (lVar25 - (lVar25 >> 0x3f) & 0xfffffffffffffffeU) + uVar26;
      if (1 < lVar25) {
        lVar17 = lVar29;
        if (lVar29 <= (long)(uVar26 + 2)) {
          lVar17 = uVar26 + 2;
        }
        _bzero(param_4 + uVar26 * 8,(lVar17 + ~uVar26 & 0x1ffffffffffffffe) * 8 + 0x10);
      }
      if (lVar29 < (long)uVar27) {
        _bzero(param_4 + (lVar25 / 2) * 0x10 + uVar26 * 8,(lVar25 % 2) * 8);
      }
      plVar9 = (long *)0x10;
      __Znwm();
      *plVar9 = (long)&PTR_FUN_110b1ea28;
      plVar9[1] = (long)plVar5;
      lVar25 = *(long *)(param_2 + 0x100);
      plVar5 = (long *)0x10;
      __Znwm();
      lStack_e0 = 0x100000002;
      uStack_c8 = *(undefined8 *)(param_2 + 0x78);
      *plVar5 = (long)&PTR_DAT_110b1ea80;
      plVar5[1] = lVar25;
      uStack_d0 = 0;
      uStack_d8 = 0;
      uStack_d1 = 0;
      ppuStack_e8 = &PTR_FUN_110b1d840;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,1);
      lStack_b8 = 0;
      uStack_a8 = 0;
      lStack_b0 = 0;
      uStack_98 = 0xffffffffffffffff;
      uStack_a0 = 0xffffffff0000000a;
      uStack_90 = uStack_90 & 0xffffff00;
      uStack_8c = 0;
      uStack_88 = 0xffffffff;
      uStack_80 = 0;
      uStack_f0 = *(undefined8 *)(param_3 + 0x18);
      uStack_f8 = *(undefined8 *)(param_3 + 0x10);
      piStack_108 = (int *)0x0;
      plStack_100 = plVar5;
      FUN_10992619c(param_1,&ppuStack_e8,plVar9,*(undefined8 *)(param_2 + 0xd8),&piStack_108,param_4
                   );
      if (lStack_b8 != 0) {
        lStack_b0 = lStack_b8;
        __ZdlPv();
      }
      (**(code **)(*plVar5 + 8))(plVar5);
      (**(code **)(*plVar9 + 8))(plVar9);
    }
    return;
  }
  *param_1 = 0xbff0000000000000;
  param_1[2] = 0;
  param_1[1] = 0;
  puVar20 = param_1 + 2;
  *puVar20 = 0x2e73736563637553;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined1 *)((long)param_1 + 0x27) = 8;
  lVar25 = *(long *)(*(long *)(param_2 + 0xd0) + 0x80);
  if (*(int *)(lVar25 + 8) == 0) {
    return;
  }
  plVar5 = *(long **)(param_2 + 0xf8);
  (**(code **)(*plVar5 + 0x10))();
  if ((int)plVar5 == 2) {
    FUN_109922860(&ppuStack_e8,lVar25,0);
    uVar13 = 2;
    ppuVar24 = ppuStack_e8;
  }
  else {
    FUN_109922860(&ppuStack_e8,lVar25,1);
    uVar13 = 1;
    ppuVar24 = ppuStack_e8;
  }
  *(undefined4 *)(ppuVar24 + 0xb) = uVar13;
  if (ppuVar24 + 0xf != (undefined **)(param_2 + 0xe0)) {
    lVar25 = *(long *)(param_2 + 0xe0);
    lVar29 = *(long *)(param_2 + 0xe8);
    uVar26 = lVar29 - lVar25;
    puVar16 = ppuVar24[0x11];
    puVar28 = ppuVar24[0xf];
    if ((ulong)((long)puVar16 - (long)puVar28) < uVar26) {
      uVar27 = (long)uVar26 >> 2;
      if (puVar28 != (undefined *)0x0) {
        ppuVar24[0x10] = puVar28;
        __ZdlPv(puVar28);
        puVar16 = (undefined *)0x0;
        ppuVar24[0xf] = (undefined *)0x0;
        ppuVar24[0x10] = (undefined *)0x0;
        ppuVar24[0x11] = (undefined *)0x0;
      }
      if (uVar27 >> 0x3e != 0) goto LAB_10998570c;
      uVar18 = (long)puVar16 >> 1;
      if ((ulong)((long)puVar16 >> 1) <= uVar27) {
        uVar18 = uVar27;
      }
      if ((undefined *)0x7ffffffffffffffb < puVar16) {
        uVar18 = 0x3fffffffffffffff;
      }
      if (uVar18 >> 0x3e != 0) goto LAB_10998570c;
      puVar28 = (undefined *)(uVar18 << 2);
      __Znwm();
      ppuVar24[0xf] = puVar28;
      ppuVar24[0x10] = puVar28;
      ppuVar24[0x11] = puVar28 + uVar18 * 4;
      if (lVar29 != lVar25) {
        _memcpy(puVar28,lVar25,uVar26);
      }
LAB_109985424:
      puVar28 = puVar28 + uVar26;
    }
    else {
      puVar16 = ppuVar24[0x10];
      if (uVar26 <= (ulong)((long)puVar16 - (long)puVar28)) {
        if (lVar29 != lVar25) {
          _memmove(puVar28,lVar25,uVar26);
        }
        goto LAB_109985424;
      }
      lVar17 = lVar25 + ((long)puVar16 - (long)puVar28);
      if (puVar16 != puVar28) {
        _memmove(puVar28,lVar25);
        puVar16 = ppuVar24[0x10];
      }
      lVar29 = lVar29 - lVar17;
      if (lVar29 != 0) {
        _memmove(puVar16,lVar17,lVar29);
      }
      puVar28 = puVar16 + lVar29;
    }
    ppuVar24[0x10] = puVar28;
  }
  if (ppuVar24 + 0xc == (undefined **)(param_2 + 0xe0)) goto LAB_109985540;
  lVar25 = *(long *)(param_2 + 0xe0);
  lVar29 = *(long *)(param_2 + 0xe8);
  uVar26 = lVar29 - lVar25;
  puVar16 = ppuVar24[0xe];
  puVar28 = ppuVar24[0xc];
  if ((ulong)((long)puVar16 - (long)puVar28) < uVar26) {
    uVar27 = (long)uVar26 >> 2;
    if (puVar28 != (undefined *)0x0) {
      ppuVar24[0xd] = puVar28;
      __ZdlPv(puVar28);
      puVar16 = (undefined *)0x0;
      ppuVar24[0xc] = (undefined *)0x0;
      ppuVar24[0xd] = (undefined *)0x0;
      ppuVar24[0xe] = (undefined *)0x0;
    }
    if (uVar27 >> 0x3e != 0) {
LAB_10998570c:
      FUN_10923f788();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x109985714);
      (*pcVar3)();
    }
    uVar18 = (long)puVar16 >> 1;
    if ((ulong)((long)puVar16 >> 1) <= uVar27) {
      uVar18 = uVar27;
    }
    if ((undefined *)0x7ffffffffffffffb < puVar16) {
      uVar18 = 0x3fffffffffffffff;
    }
    if (uVar18 >> 0x3e != 0) goto LAB_10998570c;
    puVar28 = (undefined *)(uVar18 << 2);
    __Znwm();
    ppuVar24[0xc] = puVar28;
    ppuVar24[0xd] = puVar28;
    ppuVar24[0xe] = puVar28 + uVar18 * 4;
    if (lVar29 != lVar25) {
      _memcpy(puVar28,lVar25,uVar26);
    }
LAB_109985538:
    puVar28 = puVar28 + uVar26;
  }
  else {
    puVar16 = ppuVar24[0xd];
    if (uVar26 <= (ulong)((long)puVar16 - (long)puVar28)) {
      if (lVar29 != lVar25) {
        _memmove(puVar28,lVar25,uVar26);
      }
      goto LAB_109985538;
    }
    lVar17 = lVar25 + ((long)puVar16 - (long)puVar28);
    if (puVar16 != puVar28) {
      _memmove(puVar28,lVar25);
      puVar16 = ppuVar24[0xd];
    }
    lVar29 = lVar29 - lVar17;
    if (lVar29 != 0) {
      _memmove(puVar16,lVar17,lVar29);
    }
    puVar28 = puVar16 + lVar29;
  }
  ppuVar24[0xd] = puVar28;
LAB_109985540:
  *(undefined4 *)(param_1 + 1) = 1;
  plVar9 = *(long **)(param_2 + 0xf8);
  uVar7 = *(undefined8 *)(param_2 + 0xd8);
  plVar5 = plVar9;
  (**(code **)(*plVar9 + 0x18))(plVar9,ppuVar24,puVar20);
  iVar4 = (int)plVar5;
  if (iVar4 == 0) {
    (**(code **)(*plVar9 + 0x20))(plVar9,uVar7,param_4,puVar20);
    iVar4 = (int)plVar9;
  }
  *(int *)((long)param_1 + 0xc) = iVar4;
                    /* WARNING: Could not recover jumptable at 0x0001099855b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*ppuVar24 + 8))(ppuVar24);
  return;
}



/* Entry: 1099857b8; end: 1099857bf;  */

void FUN_1099857b8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1099857bc);
  (*pcVar1)();
}



/* Entry: 1099857c0; end: 10998583f;  */

long FUN_1099857c0(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109985840; end: 109985bbb;  */

void FUN_109985840(long param_1,long **param_2,undefined *param_3,long **param_4,long *param_5,
                  double *param_6)

{
  uint *puVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  double *pdVar11;
  undefined *puVar12;
  long **pplVar13;
  double *pdVar14;
  double *pdVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  double *pdVar22;
  int *piVar23;
  ulong uVar24;
  double *pdVar25;
  long **pplVar26;
  double *pdVar27;
  long lVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  int iVar31;
  long lVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  undefined1 auVar68 [16];
  double adStack_2f0 [28];
  double adStack_210 [6];
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  undefined1 auStack_180 [4];
  undefined1 auStack_17c [4];
  undefined1 auStack_178 [4];
  undefined1 auStack_174 [20];
  undefined4 uStack_cc;
  long lStack_c8;
  long lStack_c0;
  long *plStack_68;
  
  iVar10 = (int)param_2;
  lStack_c8 = CONCAT44(lStack_c8._4_4_,iVar10);
  plStack_68 = (long *)((ulong)plStack_68 & 0xffffffff00000000);
  pplVar13 = param_4;
  if (iVar10 < 1) {
    param_3 = &UNK_10f589b91;
    plVar9 = &lStack_c8;
    param_2 = &plStack_68;
    FUN_109904144();
    plStack_68 = plVar9;
    if (plVar9 != (long *)0x0) {
      pplVar13 = &plStack_68;
      FUN_1099aa6cc(&lStack_c8,&UNK_10f590353,0x18a);
      puVar12 = (undefined *)0x31;
      FUN_1092b4db8(lStack_c0 + 0x7540,&UNK_10f589c37);
      param_2 = (long **)&UNK_10f589c69;
      FUN_109365950();
      goto LAB_109985bb4;
    }
  }
  lStack_c8 = ((long)param_4[1] - (long)*param_4 >> 3) - (long)iVar10;
  uStack_cc = 1;
  if (lStack_c8 != 1) {
    param_3 = &UNK_10f5903db;
    plVar9 = &lStack_c8;
    param_2 = (long **)&uStack_cc;
    FUN_109969b80();
    plStack_68 = plVar9;
    if (plVar9 != (long *)0x0) {
      param_2 = (long **)&UNK_10f590353;
      pplVar13 = &plStack_68;
      puVar12 = (undefined *)0x18d;
      FUN_1099ab8e4(&lStack_c8);
      goto LAB_109985bb4;
    }
  }
  *(int *)(param_1 + 0x20) = iVar10;
  plVar9 = param_4[3];
  plVar2 = param_4[4];
  puVar29 = *(undefined8 **)(param_1 + 8);
  *(undefined8 **)(param_1 + 0x10) = puVar29;
  iVar10 = (int)((ulong)((long)plVar2 - (long)plVar9) >> 5);
  puVar30 = puVar29;
  if (0 < iVar10) {
    iVar31 = 0;
    puVar12 = param_3;
    do {
      lVar32 = (long)iVar31;
      iVar17 = *(int *)param_4[3][lVar32 * 4 + 1];
      param_3 = puVar12;
      puVar29 = puVar30;
      if (*(int *)(param_1 + 0x20) <= iVar17) break;
      if (puVar30 < *(undefined8 **)(param_1 + 0x18)) {
        puVar29 = puVar30 + 1;
        *puVar30 = 0;
      }
      else {
        pplVar26 = *(long ***)(param_1 + 8);
        param_3 = (undefined *)((long)puVar30 - (long)pplVar26);
        uVar18 = ((long)param_3 >> 3) + 1;
        if (uVar18 >> 0x3d != 0) goto LAB_109985bac;
        uVar21 = (long)*(undefined8 **)(param_1 + 0x18) - (long)pplVar26;
        uVar19 = (long)uVar21 >> 2;
        if (uVar19 <= uVar18) {
          uVar19 = uVar18;
        }
        if (0x7ffffffffffffff7 < uVar21) {
          uVar19 = 0x1fffffffffffffff;
        }
        if (uVar19 >> 0x3d != 0) goto LAB_109985ba8;
        lVar16 = uVar19 << 3;
        __Znwm();
        puVar29 = (undefined8 *)((long)(param_3 + lVar16) + 8);
        *(undefined8 *)(param_3 + lVar16) = 0;
        param_2 = pplVar26;
        _memcpy();
        *(long *)(param_1 + 8) = lVar16;
        *(undefined8 **)(param_1 + 0x10) = puVar29;
        *(ulong *)(param_1 + 0x18) = lVar16 + uVar19 * 8;
        if (pplVar26 != (long **)0x0) {
          __ZdlPv(pplVar26);
        }
      }
      *(undefined8 **)(param_1 + 0x10) = puVar29;
      *(int *)(puVar29 + -1) = iVar31;
      *(undefined4 *)((long)puVar29 + -4) = 0;
      uVar5 = iVar10 - iVar31;
      if ((uVar5 == 0 || iVar10 < iVar31) || (*(int *)param_4[3][lVar32 * 4 + 1] != iVar17)) {
        iVar17 = 0;
      }
      else {
        uVar18 = 0;
        plVar9 = param_4[3] + lVar32 * 4 + 5;
        do {
          uVar19 = (ulong)uVar5;
          if ((ulong)uVar5 - 1 == uVar18) break;
          piVar23 = (int *)*plVar9;
          uVar19 = uVar18 + 1;
          uVar18 = uVar19;
          plVar9 = plVar9 + 4;
        } while (*piVar23 == iVar17);
        iVar17 = (int)uVar19;
        *(int *)((long)puVar29 + -4) = iVar17;
      }
      iVar31 = iVar17 + iVar31;
      puVar12 = param_3;
      puVar30 = puVar29;
    } while (iVar31 < iVar10);
    puVar30 = *(undefined8 **)(param_1 + 8);
  }
  *(int *)(param_1 + 0x24) = *(int *)((long)puVar29 + -4) + *(int *)(puVar29 + -1);
  uVar18 = ((long)puVar29 - (long)puVar30) + ((long)puVar29 - (long)puVar30 >> 3);
  lVar16 = *(long *)(param_1 + 0x28);
  lVar32 = *(long *)(param_1 + 0x30);
  lVar28 = lVar32 - lVar16;
  uVar19 = lVar28 >> 3;
  lVar8 = lVar16;
  if (uVar19 < uVar18) {
    uVar19 = uVar18 - uVar19;
    if ((ulong)(*(long *)(param_1 + 0x38) - lVar32 >> 3) < uVar19) {
      puVar12 = param_3;
      if (uVar18 >> 0x3d == 0) {
        uVar20 = *(long *)(param_1 + 0x38) - lVar16;
        uVar21 = (long)uVar20 >> 2;
        if (uVar21 <= uVar18) {
          uVar21 = uVar18;
        }
        if (0x7ffffffffffffff7 < uVar20) {
          uVar21 = 0x1fffffffffffffff;
        }
        if (uVar21 >> 0x3d == 0) {
          lVar8 = uVar21 << 3;
          __Znwm();
          _bzero(lVar8 + lVar28,uVar19 * 8);
          lVar32 = lVar8 + lVar28 + uVar19 * 8;
          _memcpy(lVar8,lVar16,lVar28);
          *(long *)(param_1 + 0x28) = lVar8;
          *(long *)(param_1 + 0x30) = lVar32;
          *(ulong *)(param_1 + 0x38) = lVar8 + uVar21 * 8;
          if (lVar16 != 0) {
            __ZdlPv(lVar16);
            lVar32 = *(long *)(param_1 + 0x30);
            lVar8 = *(long *)(param_1 + 0x28);
          }
          goto LAB_109985ad4;
        }
LAB_109985ba8:
        func_0x000104c4f740();
LAB_109985bac:
        FUN_10998687c();
      }
      FUN_1092d2ba8();
LAB_109985bb4:
      plVar9 = &lStack_c8;
      func_0x0001099ab7c0();
      (**(code **)(*param_5 + 0x10))(param_5,0,0,auStack_174,auStack_178,auStack_17c,auStack_180);
      pdVar27 = (double *)*param_5;
      pdVar27[1] = 0.0;
      *pdVar27 = 0.0;
      pdVar27[3] = 0.0;
      pdVar27[2] = 0.0;
      pdVar27[5] = 0.0;
      pdVar27[4] = 0.0;
      pdVar27[7] = 0.0;
      pdVar27[6] = 0.0;
      pdVar27[9] = 0.0;
      pdVar27[8] = 0.0;
      pdVar27[0xb] = 0.0;
      pdVar27[10] = 0.0;
      pdVar27[0xd] = 0.0;
      pdVar27[0xc] = 0.0;
      pdVar27[0xf] = 0.0;
      pdVar27[0xe] = 0.0;
      pdVar27[0x11] = 0.0;
      pdVar27[0x10] = 0.0;
      pdVar27[0x13] = 0.0;
      pdVar27[0x12] = 0.0;
      pdVar27[0x15] = 0.0;
      pdVar27[0x14] = 0.0;
      pdVar27[0x17] = 0.0;
      pdVar27[0x16] = 0.0;
      pdVar27[0x19] = 0.0;
      pdVar27[0x18] = 0.0;
      pdVar27[0x1b] = 0.0;
      pdVar27[0x1a] = 0.0;
      pdVar27[0x1d] = 0.0;
      pdVar27[0x1c] = 0.0;
      pdVar27[0x1f] = 0.0;
      pdVar27[0x1e] = 0.0;
      pdVar27[0x21] = 0.0;
      pdVar27[0x20] = 0.0;
      pdVar27[0x23] = 0.0;
      pdVar27[0x22] = 0.0;
      param_6[3] = 0.0;
      param_6[2] = 0.0;
      param_6[5] = 0.0;
      param_6[4] = 0.0;
      param_6[1] = 0.0;
      *param_6 = 0.0;
      plVar2 = *param_2;
      plVar3 = param_2[1];
      if (pplVar13 != (long **)0x0) {
        pplVar26 = pplVar13 + *(int *)(*plVar2 + (long)(int)plVar9[4] * 8 + 4);
        *pdVar27 = (double)*pplVar26 * (double)*pplVar26;
        pdVar27[7] = (double)pplVar26[1] * (double)pplVar26[1];
        pdVar27[0xe] = (double)pplVar26[2] * (double)pplVar26[2];
        pdVar27[0x15] = (double)pplVar26[3] * (double)pplVar26[3];
        pdVar27[0x1c] = (double)pplVar26[4] * (double)pplVar26[4];
        pdVar27[0x23] = (double)pplVar26[5] * (double)pplVar26[5];
      }
      lVar32 = plVar9[1];
      if (plVar9[2] != lVar32) {
        uVar18 = 0;
        puVar29 = (undefined8 *)((ulong)(adStack_2f0 + 0x12) | 8);
        do {
          piVar23 = (int *)(lVar32 + uVar18 * 8);
          lVar32 = plVar2[3] + (long)*piVar23 * 0x20;
          if (pplVar13 == (long **)0x0) {
            adStack_2f0[0x1a] = 0.0;
            adStack_2f0[0x17] = 0.0;
            adStack_2f0[0x16] = 0.0;
            adStack_2f0[0x19] = 0.0;
            adStack_2f0[0x18] = 0.0;
            adStack_2f0[0x13] = 0.0;
            adStack_2f0[0x12] = 0.0;
            adStack_2f0[0x15] = 0.0;
            adStack_2f0[0x14] = 0.0;
          }
          else {
            pplVar26 = pplVar13 + *(int *)(*plVar2 + (long)**(int **)(lVar32 + 8) * 8 + 4);
            puVar29[3] = 0;
            puVar29[2] = 0;
            puVar29[5] = 0;
            puVar29[4] = 0;
            puVar29[6] = 0;
            puVar29[1] = 0;
            *puVar29 = 0;
            adStack_2f0[0x12] = (double)*pplVar26 * (double)*pplVar26;
            adStack_2f0[0x16] = (double)pplVar26[1] * (double)pplVar26[1];
            adStack_2f0[0x1a] = (double)pplVar26[2] * (double)pplVar26[2];
          }
          adStack_2f0[0xf] = 0.0;
          adStack_2f0[0xe] = 0.0;
          adStack_2f0[0x11] = 0.0;
          adStack_2f0[0x10] = 0.0;
          adStack_2f0[0xb] = 0.0;
          adStack_2f0[10] = 0.0;
          adStack_2f0[0xd] = 0.0;
          adStack_2f0[0xc] = 0.0;
          adStack_2f0[7] = 0.0;
          adStack_2f0[6] = 0.0;
          adStack_2f0[9] = 0.0;
          adStack_2f0[8] = 0.0;
          adStack_2f0[3] = 0.0;
          adStack_2f0[2] = 0.0;
          adStack_2f0[5] = 0.0;
          adStack_2f0[4] = 0.0;
          adStack_2f0[1] = 0.0;
          adStack_2f0[0] = 0.0;
          uVar5 = piVar23[1];
          if ((int)uVar5 < 1) {
            dVar33 = 0.0;
            dVar34 = 0.0;
            dVar42 = 0.0;
            dVar41 = 0.0;
            dVar44 = 0.0;
            dVar37 = 0.0;
            auVar35 = ZEXT216(0);
            dVar36 = 0.0;
            dVar38 = 0.0;
            dVar39 = 0.0;
            auVar40 = ZEXT216(0);
            uVar45 = 0;
            uVar46 = 0;
            uVar47 = 0;
            uVar48 = 0;
            uVar49 = 0;
            uVar50 = 0;
            uVar51 = 0;
            uVar52 = 0;
            uVar53 = 0;
            uVar54 = 0;
            uVar55 = 0;
            uVar56 = 0;
            uVar57 = 0;
            uVar58 = 0;
            uVar59 = 0;
            uVar60 = 0;
          }
          else {
            uVar19 = 0;
            dVar36 = 0.0;
            dVar33 = 0.0;
            dVar34 = 0.0;
            auVar35 = ZEXT216(0);
            auVar40 = ZEXT216(0);
            dVar38 = 0.0;
            dVar39 = 0.0;
            do {
              lVar16 = lVar32 + uVar19 * 0x20;
              lVar28 = *(long *)(lVar16 + 8);
              pdVar11 = (double *)(plVar3 + *(int *)(lVar28 + 4));
              iVar10 = *(int *)(lVar16 + 4);
              dVar43 = pdVar11[1];
              dVar63 = *pdVar11;
              dVar37 = pdVar11[3];
              dVar44 = pdVar11[4];
              dVar41 = pdVar11[2];
              dVar42 = pdVar11[5];
              lVar8 = 3;
              pdVar14 = adStack_2f0 + 0x14;
              do {
                dVar65 = *pdVar11;
                dVar61 = pdVar11[3];
                pdVar14[-1] = pdVar14[-1] + dVar43 * dVar65 + dVar44 * dVar61;
                pdVar14[-2] = pdVar14[-2] + dVar63 * dVar65 + dVar37 * dVar61;
                *pdVar14 = *pdVar14 + dVar41 * dVar65 + dVar42 * dVar61;
                pdVar11 = pdVar11 + 1;
                lVar8 = lVar8 + -1;
                pdVar14 = pdVar14 + 3;
              } while (lVar8 != 0);
              pdVar11 = (double *)(puVar12 + (long)iVar10 * 8);
              dVar65 = *pdVar11;
              dVar61 = pdVar11[1];
              if (*(long *)(lVar16 + 0x10) - lVar28 != 8) {
                pdVar22 = (double *)(plVar3 + *(int *)(lVar28 + 0xc));
                lVar16 = 6;
                pdVar14 = pdVar22;
                pdVar15 = adStack_2f0 + 2;
                do {
                  dVar62 = *pdVar14;
                  dVar67 = pdVar14[6];
                  pdVar15[-1] = pdVar15[-1] + dVar43 * dVar62 + dVar44 * dVar67;
                  pdVar15[-2] = pdVar15[-2] + dVar63 * dVar62 + dVar37 * dVar67;
                  *pdVar15 = *pdVar15 + dVar41 * dVar62 + dVar42 * dVar67;
                  pdVar14 = pdVar14 + 1;
                  lVar16 = lVar16 + -1;
                  pdVar15 = pdVar15 + 3;
                } while (lVar16 != 0);
                lVar16 = 6;
                pdVar15 = pdVar22;
                pdVar14 = pdVar27 + 3;
                do {
                  pdVar14[-3] = pdVar14[-3] + *pdVar15 * *pdVar22 + pdVar15[6] * pdVar22[6];
                  pdVar14[-2] = pdVar14[-2] + *pdVar15 * pdVar22[1] + pdVar15[6] * pdVar22[7];
                  pdVar14[-1] = pdVar14[-1] + *pdVar15 * pdVar22[2] + pdVar15[6] * pdVar22[8];
                  *pdVar14 = *pdVar14 + *pdVar15 * pdVar22[3] + pdVar15[6] * pdVar22[9];
                  pdVar14[1] = pdVar14[1] + *pdVar15 * pdVar22[4] + pdVar15[6] * pdVar22[10];
                  pdVar14[2] = pdVar14[2] + *pdVar15 * pdVar22[5] + pdVar15[6] * pdVar22[0xb];
                  pdVar14 = pdVar14 + 6;
                  pdVar15 = pdVar15 + 1;
                  lVar16 = lVar16 + -1;
                } while (lVar16 != 0);
                dVar67 = *pdVar11;
                dVar64 = pdVar11[1];
                dVar38 = dVar38 + *pdVar22 * dVar67 + pdVar22[6] * dVar64;
                dVar39 = dVar39 + pdVar22[1] * dVar67 + pdVar22[7] * dVar64;
                dVar62 = auVar35._8_8_;
                auVar35._0_8_ = auVar35._0_8_ + pdVar22[2] * dVar67 + pdVar22[8] * dVar64;
                auVar35._8_8_ = dVar62 + pdVar22[3] * dVar67 + pdVar22[9] * dVar64;
                dVar33 = dVar33 + pdVar22[4] * dVar67 + pdVar22[10] * dVar64;
                dVar34 = dVar34 + pdVar22[5] * dVar67 + pdVar22[0xb] * dVar64;
              }
              dVar62 = auVar40._8_8_;
              auVar40._0_8_ = auVar40._0_8_ + dVar63 * dVar65 + dVar37 * dVar61;
              auVar40._8_8_ = dVar62 + dVar43 * dVar65 + dVar44 * dVar61;
              dVar36 = dVar36 + dVar41 * dVar65 + dVar42 * dVar61;
              uVar19 = uVar19 + 1;
            } while (uVar19 != uVar5);
            uVar53 = SUB81(adStack_2f0[0x19],0);
            uVar54 = (undefined1)((ulong)adStack_2f0[0x19] >> 8);
            uVar55 = (undefined1)((ulong)adStack_2f0[0x19] >> 0x10);
            uVar56 = (undefined1)((ulong)adStack_2f0[0x19] >> 0x18);
            uVar57 = (undefined1)((ulong)adStack_2f0[0x19] >> 0x20);
            uVar58 = (undefined1)((ulong)adStack_2f0[0x19] >> 0x28);
            uVar59 = (undefined1)((ulong)adStack_2f0[0x19] >> 0x30);
            uVar60 = (undefined1)((ulong)adStack_2f0[0x19] >> 0x38);
            uVar45 = SUB81(adStack_2f0[0x18],0);
            uVar46 = (undefined1)((ulong)adStack_2f0[0x18] >> 8);
            uVar47 = (undefined1)((ulong)adStack_2f0[0x18] >> 0x10);
            uVar48 = (undefined1)((ulong)adStack_2f0[0x18] >> 0x18);
            uVar49 = (undefined1)((ulong)adStack_2f0[0x18] >> 0x20);
            uVar50 = (undefined1)((ulong)adStack_2f0[0x18] >> 0x28);
            uVar51 = (undefined1)((ulong)adStack_2f0[0x18] >> 0x30);
            uVar52 = (undefined1)((ulong)adStack_2f0[0x18] >> 0x38);
            dVar37 = adStack_2f0[0x14];
            dVar44 = adStack_2f0[0x17];
            dVar41 = adStack_2f0[0x15];
            dVar42 = adStack_2f0[0x19];
          }
          lVar32 = 0;
          auVar68[1] = uVar46;
          auVar68[0] = uVar45;
          auVar68[2] = uVar47;
          auVar68[3] = uVar48;
          auVar68[4] = uVar49;
          auVar68[5] = uVar50;
          auVar68[6] = uVar51;
          auVar68[7] = uVar52;
          auVar68[8] = uVar53;
          auVar68[9] = uVar54;
          auVar68[10] = uVar55;
          auVar68[0xb] = uVar56;
          auVar68[0xc] = uVar57;
          auVar68[0xd] = uVar58;
          auVar68[0xe] = uVar59;
          auVar68[0xf] = uVar60;
          auVar6[1] = uVar46;
          auVar6[0] = uVar45;
          auVar6[2] = uVar47;
          auVar6[3] = uVar48;
          auVar6[4] = uVar49;
          auVar6[5] = uVar50;
          auVar6[6] = uVar51;
          auVar6[7] = uVar52;
          auVar6[8] = uVar53;
          auVar6[9] = uVar54;
          auVar6[10] = uVar55;
          auVar6[0xb] = uVar56;
          auVar6[0xc] = uVar57;
          auVar6[0xd] = uVar58;
          auVar6[0xe] = uVar59;
          auVar6[0xf] = uVar60;
          auVar68 = NEON_ext(auVar68,auVar6,8,1);
          pdVar11 = (double *)(plVar9[5] + uVar18 * 0x48);
          dVar65 = -((double)CONCAT17(uVar60,CONCAT16(uVar59,CONCAT15(uVar58,CONCAT14(uVar57,
                                                  CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,
                                                  uVar53))))))) * dVar44) +
                   adStack_2f0[0x1a] * adStack_2f0[0x16];
          dVar61 = -(adStack_2f0[0x1a] * dVar41) +
                   (double)CONCAT17(uVar52,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(uVar49,CONCAT13(
                                                  uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)))))
                                                  )) * dVar44;
          dVar63 = adStack_2f0[0x16] *
                   -(double)CONCAT17(uVar52,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(uVar49,CONCAT13
                                                  (uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))))
                                                  ))) + dVar41 * auVar68._0_8_;
          dVar62 = 1.0 / (dVar37 * dVar63 + dVar65 * adStack_2f0[0x12] + dVar61 * adStack_2f0[0x13])
          ;
          dVar63 = dVar63 * dVar62;
          dVar43 = (dVar42 * -adStack_2f0[0x12] + adStack_2f0[0x13] * auVar68._8_8_) * dVar62;
          pdVar11[5] = dVar43;
          dVar42 = (-dVar41 * adStack_2f0[0x13] + adStack_2f0[0x16] * adStack_2f0[0x12]) * dVar62;
          pdVar11[7] = (-dVar44 * adStack_2f0[0x12] + dVar41 * dVar37) * dVar62;
          pdVar11[8] = dVar42;
          pdVar11[3] = (-(adStack_2f0[0x13] * adStack_2f0[0x1a]) +
                       dVar37 * (double)CONCAT17(uVar60,CONCAT16(uVar59,CONCAT15(uVar58,CONCAT14(
                                                  uVar57,CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(
                                                  uVar54,uVar53)))))))) * dVar62;
          pdVar11[4] = (-dVar37 * (double)CONCAT17(uVar52,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(
                                                  uVar49,CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(
                                                  uVar46,uVar45))))))) +
                       adStack_2f0[0x12] * adStack_2f0[0x1a]) * dVar62;
          pdVar11[6] = (-(adStack_2f0[0x16] * dVar37) + dVar44 * adStack_2f0[0x13]) * dVar62;
          dVar65 = dVar65 * dVar62;
          dVar61 = dVar61 * dVar62;
          pdVar11[1] = dVar61;
          *pdVar11 = dVar65;
          pdVar11[2] = dVar63;
          dVar44 = pdVar11[4];
          dVar37 = pdVar11[3];
          dVar62 = pdVar11[7];
          dVar41 = pdVar11[6];
          do {
            dVar64 = *(double *)((long)adStack_2f0 + lVar32 + 8);
            dVar67 = *(double *)((long)adStack_2f0 + lVar32);
            dVar66 = *(double *)((long)adStack_2f0 + lVar32 + 0x10);
            *(double *)((long)adStack_210 + lVar32 + 8) =
                 dVar43 * dVar66 + dVar37 * dVar67 + dVar44 * dVar64;
            *(double *)((long)adStack_210 + lVar32) =
                 dVar63 * dVar66 + dVar65 * dVar67 + dVar61 * dVar64;
            *(double *)((long)adStack_210 + lVar32 + 0x10) =
                 dVar42 * dVar66 + dVar41 * dVar67 + dVar62 * dVar64;
            lVar32 = lVar32 + 0x18;
          } while (lVar32 != 0x90);
          lVar32 = 0;
          pdVar11 = pdVar27 + 4;
          do {
            dVar67 = *(double *)((long)adStack_2f0 + lVar32);
            dVar64 = *(double *)((long)adStack_2f0 + lVar32 + 8);
            dVar66 = *(double *)((long)adStack_2f0 + lVar32 + 0x10);
            pdVar11[-3] = pdVar11[-3] -
                          (adStack_210[5] * dVar66 +
                          adStack_210[3] * dVar67 + adStack_210[4] * dVar64);
            pdVar11[-4] = pdVar11[-4] -
                          (adStack_210[2] * dVar66 +
                          adStack_210[0] * dVar67 + adStack_210[1] * dVar64);
            pdVar11[-1] = pdVar11[-1] -
                          (dStack_1b8 * dVar66 + dStack_1c8 * dVar67 + dStack_1c0 * dVar64);
            pdVar11[-2] = pdVar11[-2] -
                          (dStack_1d0 * dVar66 + dStack_1e0 * dVar67 + dStack_1d8 * dVar64);
            pdVar11[1] = pdVar11[1] -
                         (dStack_188 * dVar66 + dStack_198 * dVar67 + dStack_190 * dVar64);
            *pdVar11 = *pdVar11 - (dStack_1a0 * dVar66 + dStack_1b0 * dVar67 + dStack_1a8 * dVar64);
            lVar32 = lVar32 + 0x18;
            pdVar11 = pdVar11 + 6;
          } while (lVar32 != 0x90);
          dVar67 = auVar40._0_8_;
          dVar64 = auVar40._8_8_;
          dVar63 = dVar63 * dVar36 + dVar67 * dVar65 + dVar64 * dVar61;
          dVar44 = dVar43 * dVar36 + dVar67 * dVar37 + dVar64 * dVar44;
          dVar37 = dVar36 * dVar42 + dVar67 * dVar41 + dVar64 * dVar62;
          param_6[1] = (dVar39 + param_6[1]) -
                       (adStack_2f0[5] * dVar37 + dVar63 * adStack_2f0[3] + dVar44 * adStack_2f0[4])
          ;
          *param_6 = (dVar38 + *param_6) -
                     (adStack_2f0[2] * dVar37 + dVar63 * adStack_2f0[0] + dVar44 * adStack_2f0[1]);
          param_6[3] = (auVar35._8_8_ + param_6[3]) -
                       (adStack_2f0[0xb] * dVar37 +
                       dVar63 * adStack_2f0[9] + dVar44 * adStack_2f0[10]);
          param_6[2] = (auVar35._0_8_ + param_6[2]) -
                       (adStack_2f0[8] * dVar37 + dVar63 * adStack_2f0[6] + dVar44 * adStack_2f0[7])
          ;
          param_6[5] = (dVar34 + param_6[5]) -
                       (adStack_2f0[0x11] * dVar37 +
                       dVar63 * adStack_2f0[0xf] + dVar44 * adStack_2f0[0x10]);
          param_6[4] = (dVar33 + param_6[4]) -
                       (adStack_2f0[0xe] * dVar37 +
                       dVar63 * adStack_2f0[0xc] + dVar44 * adStack_2f0[0xd]);
          uVar18 = uVar18 + 1;
          lVar32 = plVar9[1];
        } while (uVar18 < (ulong)(plVar9[2] - lVar32 >> 3));
      }
      uVar18 = (ulong)*(int *)((long)plVar9 + 0x24);
      lVar32 = plVar2[3];
      if (uVar18 < (ulong)(plVar2[4] - lVar32 >> 5)) {
        do {
          puVar1 = (uint *)(lVar32 + uVar18 * 0x20);
          iVar10 = *(int *)(*(long *)(puVar1 + 2) + 4);
          pdVar11 = (double *)(plVar3 + iVar10);
          uVar5 = *puVar1;
          uVar19 = (ulong)(int)uVar5;
          uVar4 = puVar1[1];
          if (uVar19 - 1 < 7) {
            lVar32 = 0;
            pdVar14 = (double *)(plVar3 + (long)iVar10 + 6);
            do {
              lVar16 = 0;
              pdVar22 = (double *)(plVar3 + (long)iVar10 + 6);
              do {
                dVar37 = pdVar11[lVar32] * pdVar11[lVar16];
                pdVar15 = pdVar14;
                pdVar25 = pdVar22;
                uVar21 = uVar19 - 1;
                if (1 < uVar5) {
                  do {
                    dVar37 = dVar37 + *pdVar15 * *pdVar25;
                    uVar21 = uVar21 - 1;
                    pdVar15 = pdVar15 + 6;
                    pdVar25 = pdVar25 + 6;
                  } while (uVar21 != 0);
                }
                pdVar27[lVar32 * 6 + lVar16] = dVar37 + pdVar27[lVar32 * 6 + lVar16];
                lVar16 = lVar16 + 1;
                pdVar22 = pdVar22 + 1;
              } while (lVar16 != 6);
              lVar32 = lVar32 + 1;
              pdVar14 = pdVar14 + 1;
            } while (lVar32 != 6);
          }
          else if (uVar5 != 0) {
            adStack_2f0[0] = 0.0;
            adStack_2f0[1] = 0.0;
            adStack_2f0[3] = 2.96439387504748e-323;
            adStack_2f0[2] = 2.96439387504748e-323;
            adStack_2f0[4] = (double)uVar19;
            if ((bRam00000001132dfa18 & 1) == 0) {
              iVar10 = 0x132dfa18;
              ___cxa_guard_acquire();
              if (iVar10 != 0) {
                uRam00000001132dfa08 = 0x80000;
                uRam00000001132dfa00 = 0x4000;
                lRam00000001132dfa10 = 0x80000;
                ___cxa_guard_release(0x1132dfa18);
              }
            }
            dVar44 = adStack_2f0[4];
            dVar37 = adStack_2f0[2];
            if ((long)adStack_2f0[2] <= (long)adStack_2f0[3]) {
              dVar37 = adStack_2f0[3];
            }
            dVar41 = adStack_2f0[4];
            if ((long)adStack_2f0[4] <= (long)dVar37) {
              dVar41 = dVar37;
            }
            adStack_2f0[6] = dVar44;
            if (0x2f < (long)dVar41) {
              uVar21 = (long)(uRam00000001132dfa00 - 0xc0) / 0x50 & 0xfffffffffffffff8;
              if ((long)uVar21 < 2) {
                uVar21 = 1;
              }
              if ((long)uVar21 < (long)adStack_2f0[4]) {
                uVar20 = 0;
                if (uVar21 != 0) {
                  uVar20 = (ulong)adStack_2f0[4] / uVar21;
                }
                uVar24 = (long)adStack_2f0[4] - uVar20 * uVar21;
                adStack_2f0[4] = (double)uVar21;
                if (uVar24 != 0) {
                  lVar32 = uVar20 * 8 + 8;
                  lVar16 = 0;
                  if (lVar32 != 0) {
                    lVar16 = (long)(uVar21 + ~uVar24) / lVar32;
                  }
                  adStack_2f0[4] = (double)(uVar21 + lVar16 * -8);
                }
              }
              uVar20 = (uRam00000001132dfa00 - 0xc0) +
                       (long)adStack_2f0[2] * (long)adStack_2f0[4] * -8;
              if ((long)uVar20 < (long)adStack_2f0[4] * 0x20) {
                uVar24 = 0;
                if (uVar21 << 5 != 0) {
                  uVar24 = 0x480000 / (uVar21 << 5);
                }
              }
              else {
                uVar24 = 0;
                if ((long)adStack_2f0[4] << 3 != 0) {
                  uVar24 = uVar20 / (ulong)((long)adStack_2f0[4] << 3);
                }
              }
              uVar21 = 0;
              if ((long)adStack_2f0[4] << 4 != 0) {
                uVar21 = 0x180000 / (ulong)((long)adStack_2f0[4] << 4);
              }
              if ((long)uVar21 <= (long)uVar24) {
                uVar24 = uVar21;
              }
              uVar24 = uVar24 & 0xfffffffffffffffc;
              adStack_2f0[6] = adStack_2f0[4];
              if ((long)uVar24 < (long)adStack_2f0[3]) {
                lVar32 = 0;
                if (uVar24 != 0) {
                  lVar32 = (long)adStack_2f0[3] / (long)uVar24;
                }
                lVar16 = (long)adStack_2f0[3] - lVar32 * uVar24;
                adStack_2f0[3] = (double)uVar24;
                if (lVar16 != 0) {
                  lVar32 = lVar32 * 4 + 4;
                  lVar8 = 0;
                  if (lVar32 != 0) {
                    lVar8 = (long)(uVar24 - lVar16) / lVar32;
                  }
                  adStack_2f0[3] = (double)(uVar24 + lVar8 * -4);
                }
              }
              else if (dVar44 == adStack_2f0[4]) {
                uVar20 = (long)dVar44 * (long)adStack_2f0[3] * 8;
                dVar37 = adStack_2f0[2];
                uVar21 = uRam00000001132dfa00;
                if (0x400 < (long)uVar20) {
                  if (0x23f < (long)adStack_2f0[2]) {
                    dVar37 = 2.84581812004558e-321;
                  }
                  uVar21 = uRam00000001132dfa08;
                  if (lRam00000001132dfa10 == 0 || 0x8000 < uVar20) {
                    uVar21 = 0x180000;
                    dVar37 = adStack_2f0[2];
                  }
                }
                uVar20 = 0;
                if ((long)dVar44 * 0x18 != 0) {
                  uVar20 = uVar21 / (ulong)((long)dVar44 * 0x18);
                }
                if ((long)uVar20 <= (long)dVar37) {
                  dVar37 = (double)uVar20;
                }
                if ((long)dVar37 < 7) {
                  adStack_2f0[6] = dVar44;
                  if (dVar37 == 0.0) goto LAB_10998657c;
                }
                else {
                  dVar37 = (double)((((ulong)dVar37 / 6) * 2 + (ulong)dVar37 / 6) * 2);
                }
                lVar32 = 0;
                if (dVar37 != 0.0) {
                  lVar32 = (long)adStack_2f0[2] / (long)dVar37;
                }
                lVar16 = (long)adStack_2f0[2] - lVar32 * (long)dVar37;
                adStack_2f0[6] = dVar44;
                adStack_2f0[2] = dVar37;
                if (lVar16 != 0) {
                  lVar8 = lVar32 * 6 + 6;
                  lVar32 = 0;
                  if (lVar8 != 0) {
                    lVar32 = ((long)dVar37 - lVar16) / lVar8;
                  }
                  adStack_2f0[2] = (double)((long)dVar37 + lVar32 * -6);
                }
              }
            }
LAB_10998657c:
            adStack_2f0[5] = (double)((long)adStack_2f0[2] * (long)adStack_2f0[6]);
            adStack_2f0[6] = (double)((long)adStack_2f0[6] * (long)adStack_2f0[3]);
            FUN_109404694(0x3ff0000000000000,6,6,uVar19,pdVar11,6,pdVar11,6,pdVar27,1,6,adStack_2f0,
                          0);
            _free(adStack_2f0[0]);
            _free(adStack_2f0[1]);
          }
          uVar21 = 0;
          do {
            dVar37 = 0.0;
            dVar44 = 0.0;
            pdVar14 = pdVar11;
            pdVar22 = (double *)(puVar12 + (long)(int)uVar4 * 8);
            uVar20 = uVar19;
            if (0 < (int)uVar5) {
              do {
                dVar37 = dVar37 + *pdVar14 * *pdVar22;
                dVar44 = dVar44 + pdVar14[1] * *pdVar22;
                uVar20 = uVar20 - 1;
                pdVar14 = pdVar14 + 6;
                pdVar22 = pdVar22 + 1;
              } while (uVar20 != 0);
            }
            dVar41 = param_6[uVar21];
            (param_6 + uVar21)[1] = dVar44 + (param_6 + uVar21)[1];
            param_6[uVar21] = dVar37 + dVar41;
            pdVar11 = pdVar11 + 2;
            bVar7 = uVar21 < 4;
            uVar21 = uVar21 + 2;
          } while (bVar7);
          uVar18 = uVar18 + 1;
          lVar32 = plVar2[3];
        } while (uVar18 < (ulong)(plVar2[4] - lVar32 >> 5));
      }
      return;
    }
    _bzero(lVar32,uVar19 * 8);
    lVar32 = lVar32 + uVar19 * 8;
  }
  else {
    if (uVar19 <= uVar18) goto LAB_109985ad4;
    lVar32 = lVar16 + uVar18 * 8;
  }
  *(long *)(param_1 + 0x30) = lVar32;
LAB_109985ad4:
  if (0 < lVar32 - lVar8) {
    _bzero(lVar8);
  }
  return;
}



/* Entry: 109985bbc; end: 1099866bf;  */

void FUN_109985bbc(long param_1,long *param_2,long param_3,long param_4,long *param_5,
                  double *param_6)

{
  int *piVar1;
  uint *puVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  int iVar9;
  long lVar10;
  double *pdVar11;
  ulong uVar12;
  long lVar13;
  double *pdVar14;
  double *pdVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  double *pdVar20;
  ulong uVar21;
  double *pdVar22;
  ulong uVar23;
  double *pdVar24;
  double *pdVar25;
  long lVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
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
  undefined1 uVar53;
  undefined1 uVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  undefined1 auVar62 [16];
  double adStack_210 [28];
  double adStack_130 [6];
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [4];
  undefined1 auStack_98 [4];
  undefined1 auStack_94 [20];
  
  (**(code **)(*param_5 + 0x10))(param_5,0,0,auStack_94,auStack_98,auStack_9c,auStack_a0);
  pdVar25 = (double *)*param_5;
  pdVar25[1] = 0.0;
  *pdVar25 = 0.0;
  pdVar25[3] = 0.0;
  pdVar25[2] = 0.0;
  pdVar25[5] = 0.0;
  pdVar25[4] = 0.0;
  pdVar25[7] = 0.0;
  pdVar25[6] = 0.0;
  pdVar25[9] = 0.0;
  pdVar25[8] = 0.0;
  pdVar25[0xb] = 0.0;
  pdVar25[10] = 0.0;
  pdVar25[0xd] = 0.0;
  pdVar25[0xc] = 0.0;
  pdVar25[0xf] = 0.0;
  pdVar25[0xe] = 0.0;
  pdVar25[0x11] = 0.0;
  pdVar25[0x10] = 0.0;
  pdVar25[0x13] = 0.0;
  pdVar25[0x12] = 0.0;
  pdVar25[0x15] = 0.0;
  pdVar25[0x14] = 0.0;
  pdVar25[0x17] = 0.0;
  pdVar25[0x16] = 0.0;
  pdVar25[0x19] = 0.0;
  pdVar25[0x18] = 0.0;
  pdVar25[0x1b] = 0.0;
  pdVar25[0x1a] = 0.0;
  pdVar25[0x1d] = 0.0;
  pdVar25[0x1c] = 0.0;
  pdVar25[0x1f] = 0.0;
  pdVar25[0x1e] = 0.0;
  pdVar25[0x21] = 0.0;
  pdVar25[0x20] = 0.0;
  pdVar25[0x23] = 0.0;
  pdVar25[0x22] = 0.0;
  param_6[3] = 0.0;
  param_6[2] = 0.0;
  param_6[5] = 0.0;
  param_6[4] = 0.0;
  param_6[1] = 0.0;
  *param_6 = 0.0;
  plVar3 = (long *)*param_2;
  lVar4 = param_2[1];
  if (param_4 != 0) {
    pdVar11 = (double *)
              (param_4 + (long)*(int *)(*plVar3 + (long)*(int *)(param_1 + 0x20) * 8 + 4) * 8);
    *pdVar25 = *pdVar11 * *pdVar11;
    pdVar25[7] = pdVar11[1] * pdVar11[1];
    pdVar25[0xe] = pdVar11[2] * pdVar11[2];
    pdVar25[0x15] = pdVar11[3] * pdVar11[3];
    pdVar25[0x1c] = pdVar11[4] * pdVar11[4];
    pdVar25[0x23] = pdVar11[5] * pdVar11[5];
  }
  lVar10 = *(long *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != lVar10) {
    uVar17 = 0;
    puVar19 = (undefined8 *)((ulong)(adStack_210 + 0x12) | 8);
    do {
      piVar1 = (int *)(lVar10 + uVar17 * 8);
      lVar10 = plVar3[3] + (long)*piVar1 * 0x20;
      if (param_4 == 0) {
        adStack_210[0x1a] = 0.0;
        adStack_210[0x17] = 0.0;
        adStack_210[0x16] = 0.0;
        adStack_210[0x19] = 0.0;
        adStack_210[0x18] = 0.0;
        adStack_210[0x13] = 0.0;
        adStack_210[0x12] = 0.0;
        adStack_210[0x15] = 0.0;
        adStack_210[0x14] = 0.0;
      }
      else {
        pdVar11 = (double *)
                  (param_4 + (long)*(int *)(*plVar3 + (long)**(int **)(lVar10 + 8) * 8 + 4) * 8);
        puVar19[3] = 0;
        puVar19[2] = 0;
        puVar19[5] = 0;
        puVar19[4] = 0;
        puVar19[6] = 0;
        puVar19[1] = 0;
        *puVar19 = 0;
        adStack_210[0x12] = *pdVar11 * *pdVar11;
        adStack_210[0x16] = pdVar11[1] * pdVar11[1];
        adStack_210[0x1a] = pdVar11[2] * pdVar11[2];
      }
      adStack_210[0xf] = 0.0;
      adStack_210[0xe] = 0.0;
      adStack_210[0x11] = 0.0;
      adStack_210[0x10] = 0.0;
      adStack_210[0xb] = 0.0;
      adStack_210[10] = 0.0;
      adStack_210[0xd] = 0.0;
      adStack_210[0xc] = 0.0;
      adStack_210[7] = 0.0;
      adStack_210[6] = 0.0;
      adStack_210[9] = 0.0;
      adStack_210[8] = 0.0;
      adStack_210[3] = 0.0;
      adStack_210[2] = 0.0;
      adStack_210[5] = 0.0;
      adStack_210[4] = 0.0;
      adStack_210[1] = 0.0;
      adStack_210[0] = 0.0;
      uVar6 = piVar1[1];
      if ((int)uVar6 < 1) {
        dVar27 = 0.0;
        dVar28 = 0.0;
        dVar36 = 0.0;
        dVar35 = 0.0;
        dVar38 = 0.0;
        dVar31 = 0.0;
        auVar29 = ZEXT216(0);
        dVar30 = 0.0;
        dVar32 = 0.0;
        dVar33 = 0.0;
        auVar34 = ZEXT216(0);
        uVar39 = 0;
        uVar40 = 0;
        uVar41 = 0;
        uVar42 = 0;
        uVar43 = 0;
        uVar44 = 0;
        uVar45 = 0;
        uVar46 = 0;
        uVar47 = 0;
        uVar48 = 0;
        uVar49 = 0;
        uVar50 = 0;
        uVar51 = 0;
        uVar52 = 0;
        uVar53 = 0;
        uVar54 = 0;
      }
      else {
        uVar12 = 0;
        dVar30 = 0.0;
        dVar27 = 0.0;
        dVar28 = 0.0;
        auVar29 = ZEXT216(0);
        auVar34 = ZEXT216(0);
        dVar32 = 0.0;
        dVar33 = 0.0;
        do {
          lVar16 = lVar10 + uVar12 * 0x20;
          lVar13 = *(long *)(lVar16 + 8);
          pdVar11 = (double *)(lVar4 + (long)*(int *)(lVar13 + 4) * 8);
          iVar9 = *(int *)(lVar16 + 4);
          dVar37 = pdVar11[1];
          dVar57 = *pdVar11;
          dVar31 = pdVar11[3];
          dVar38 = pdVar11[4];
          dVar35 = pdVar11[2];
          dVar36 = pdVar11[5];
          lVar26 = 3;
          pdVar14 = adStack_210 + 0x14;
          do {
            dVar59 = *pdVar11;
            dVar55 = pdVar11[3];
            pdVar14[-1] = pdVar14[-1] + dVar37 * dVar59 + dVar38 * dVar55;
            pdVar14[-2] = pdVar14[-2] + dVar57 * dVar59 + dVar31 * dVar55;
            *pdVar14 = *pdVar14 + dVar35 * dVar59 + dVar36 * dVar55;
            pdVar11 = pdVar11 + 1;
            lVar26 = lVar26 + -1;
            pdVar14 = pdVar14 + 3;
          } while (lVar26 != 0);
          pdVar11 = (double *)(param_3 + (long)iVar9 * 8);
          dVar59 = *pdVar11;
          dVar55 = pdVar11[1];
          if (*(long *)(lVar16 + 0x10) - lVar13 != 8) {
            pdVar20 = (double *)(lVar4 + (long)*(int *)(lVar13 + 0xc) * 8);
            lVar16 = 6;
            pdVar14 = pdVar20;
            pdVar15 = adStack_210 + 2;
            do {
              dVar56 = *pdVar14;
              dVar61 = pdVar14[6];
              pdVar15[-1] = pdVar15[-1] + dVar37 * dVar56 + dVar38 * dVar61;
              pdVar15[-2] = pdVar15[-2] + dVar57 * dVar56 + dVar31 * dVar61;
              *pdVar15 = *pdVar15 + dVar35 * dVar56 + dVar36 * dVar61;
              pdVar14 = pdVar14 + 1;
              lVar16 = lVar16 + -1;
              pdVar15 = pdVar15 + 3;
            } while (lVar16 != 0);
            lVar16 = 6;
            pdVar15 = pdVar20;
            pdVar14 = pdVar25 + 3;
            do {
              pdVar14[-3] = pdVar14[-3] + *pdVar15 * *pdVar20 + pdVar15[6] * pdVar20[6];
              pdVar14[-2] = pdVar14[-2] + *pdVar15 * pdVar20[1] + pdVar15[6] * pdVar20[7];
              pdVar14[-1] = pdVar14[-1] + *pdVar15 * pdVar20[2] + pdVar15[6] * pdVar20[8];
              *pdVar14 = *pdVar14 + *pdVar15 * pdVar20[3] + pdVar15[6] * pdVar20[9];
              pdVar14[1] = pdVar14[1] + *pdVar15 * pdVar20[4] + pdVar15[6] * pdVar20[10];
              pdVar14[2] = pdVar14[2] + *pdVar15 * pdVar20[5] + pdVar15[6] * pdVar20[0xb];
              pdVar14 = pdVar14 + 6;
              pdVar15 = pdVar15 + 1;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
            dVar61 = *pdVar11;
            dVar58 = pdVar11[1];
            dVar32 = dVar32 + *pdVar20 * dVar61 + pdVar20[6] * dVar58;
            dVar33 = dVar33 + pdVar20[1] * dVar61 + pdVar20[7] * dVar58;
            dVar56 = auVar29._8_8_;
            auVar29._0_8_ = auVar29._0_8_ + pdVar20[2] * dVar61 + pdVar20[8] * dVar58;
            auVar29._8_8_ = dVar56 + pdVar20[3] * dVar61 + pdVar20[9] * dVar58;
            dVar27 = dVar27 + pdVar20[4] * dVar61 + pdVar20[10] * dVar58;
            dVar28 = dVar28 + pdVar20[5] * dVar61 + pdVar20[0xb] * dVar58;
          }
          dVar56 = auVar34._8_8_;
          auVar34._0_8_ = auVar34._0_8_ + dVar57 * dVar59 + dVar31 * dVar55;
          auVar34._8_8_ = dVar56 + dVar37 * dVar59 + dVar38 * dVar55;
          dVar30 = dVar30 + dVar35 * dVar59 + dVar36 * dVar55;
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar6);
        uVar47 = SUB81(adStack_210[0x19],0);
        uVar48 = (undefined1)((ulong)adStack_210[0x19] >> 8);
        uVar49 = (undefined1)((ulong)adStack_210[0x19] >> 0x10);
        uVar50 = (undefined1)((ulong)adStack_210[0x19] >> 0x18);
        uVar51 = (undefined1)((ulong)adStack_210[0x19] >> 0x20);
        uVar52 = (undefined1)((ulong)adStack_210[0x19] >> 0x28);
        uVar53 = (undefined1)((ulong)adStack_210[0x19] >> 0x30);
        uVar54 = (undefined1)((ulong)adStack_210[0x19] >> 0x38);
        uVar39 = SUB81(adStack_210[0x18],0);
        uVar40 = (undefined1)((ulong)adStack_210[0x18] >> 8);
        uVar41 = (undefined1)((ulong)adStack_210[0x18] >> 0x10);
        uVar42 = (undefined1)((ulong)adStack_210[0x18] >> 0x18);
        uVar43 = (undefined1)((ulong)adStack_210[0x18] >> 0x20);
        uVar44 = (undefined1)((ulong)adStack_210[0x18] >> 0x28);
        uVar45 = (undefined1)((ulong)adStack_210[0x18] >> 0x30);
        uVar46 = (undefined1)((ulong)adStack_210[0x18] >> 0x38);
        dVar31 = adStack_210[0x14];
        dVar38 = adStack_210[0x17];
        dVar35 = adStack_210[0x15];
        dVar36 = adStack_210[0x19];
      }
      lVar10 = 0;
      auVar62[1] = uVar40;
      auVar62[0] = uVar39;
      auVar62[2] = uVar41;
      auVar62[3] = uVar42;
      auVar62[4] = uVar43;
      auVar62[5] = uVar44;
      auVar62[6] = uVar45;
      auVar62[7] = uVar46;
      auVar62[8] = uVar47;
      auVar62[9] = uVar48;
      auVar62[10] = uVar49;
      auVar62[0xb] = uVar50;
      auVar62[0xc] = uVar51;
      auVar62[0xd] = uVar52;
      auVar62[0xe] = uVar53;
      auVar62[0xf] = uVar54;
      auVar7[1] = uVar40;
      auVar7[0] = uVar39;
      auVar7[2] = uVar41;
      auVar7[3] = uVar42;
      auVar7[4] = uVar43;
      auVar7[5] = uVar44;
      auVar7[6] = uVar45;
      auVar7[7] = uVar46;
      auVar7[8] = uVar47;
      auVar7[9] = uVar48;
      auVar7[10] = uVar49;
      auVar7[0xb] = uVar50;
      auVar7[0xc] = uVar51;
      auVar7[0xd] = uVar52;
      auVar7[0xe] = uVar53;
      auVar7[0xf] = uVar54;
      auVar62 = NEON_ext(auVar62,auVar7,8,1);
      pdVar11 = (double *)(*(long *)(param_1 + 0x28) + uVar17 * 0x48);
      dVar59 = -((double)CONCAT17(uVar54,CONCAT16(uVar53,CONCAT15(uVar52,CONCAT14(uVar51,CONCAT13(
                                                  uVar50,CONCAT12(uVar49,CONCAT11(uVar48,uVar47)))))
                                                 )) * dVar38) +
               adStack_210[0x1a] * adStack_210[0x16];
      dVar55 = -(adStack_210[0x1a] * dVar35) +
               (double)CONCAT17(uVar46,CONCAT16(uVar45,CONCAT15(uVar44,CONCAT14(uVar43,CONCAT13(
                                                  uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39)))))
                                               )) * dVar38;
      dVar57 = adStack_210[0x16] *
               -(double)CONCAT17(uVar46,CONCAT16(uVar45,CONCAT15(uVar44,CONCAT14(uVar43,CONCAT13(
                                                  uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39)))))
                                                )) + dVar35 * auVar62._0_8_;
      dVar56 = 1.0 / (dVar31 * dVar57 + dVar59 * adStack_210[0x12] + dVar55 * adStack_210[0x13]);
      dVar57 = dVar57 * dVar56;
      dVar37 = (dVar36 * -adStack_210[0x12] + adStack_210[0x13] * auVar62._8_8_) * dVar56;
      pdVar11[5] = dVar37;
      dVar36 = (-dVar35 * adStack_210[0x13] + adStack_210[0x16] * adStack_210[0x12]) * dVar56;
      pdVar11[7] = (-dVar38 * adStack_210[0x12] + dVar35 * dVar31) * dVar56;
      pdVar11[8] = dVar36;
      pdVar11[3] = (-(adStack_210[0x13] * adStack_210[0x1a]) +
                   dVar31 * (double)CONCAT17(uVar54,CONCAT16(uVar53,CONCAT15(uVar52,CONCAT14(uVar51,
                                                  CONCAT13(uVar50,CONCAT12(uVar49,CONCAT11(uVar48,
                                                  uVar47)))))))) * dVar56;
      pdVar11[4] = (-dVar31 * (double)CONCAT17(uVar46,CONCAT16(uVar45,CONCAT15(uVar44,CONCAT14(
                                                  uVar43,CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(
                                                  uVar40,uVar39))))))) +
                   adStack_210[0x12] * adStack_210[0x1a]) * dVar56;
      pdVar11[6] = (-(adStack_210[0x16] * dVar31) + dVar38 * adStack_210[0x13]) * dVar56;
      dVar59 = dVar59 * dVar56;
      dVar55 = dVar55 * dVar56;
      pdVar11[1] = dVar55;
      *pdVar11 = dVar59;
      pdVar11[2] = dVar57;
      dVar38 = pdVar11[4];
      dVar31 = pdVar11[3];
      dVar56 = pdVar11[7];
      dVar35 = pdVar11[6];
      do {
        dVar58 = *(double *)((long)adStack_210 + lVar10 + 8);
        dVar61 = *(double *)((long)adStack_210 + lVar10);
        dVar60 = *(double *)((long)adStack_210 + lVar10 + 0x10);
        *(double *)((long)adStack_130 + lVar10 + 8) =
             dVar37 * dVar60 + dVar31 * dVar61 + dVar38 * dVar58;
        *(double *)((long)adStack_130 + lVar10) =
             dVar57 * dVar60 + dVar59 * dVar61 + dVar55 * dVar58;
        *(double *)((long)adStack_130 + lVar10 + 0x10) =
             dVar36 * dVar60 + dVar35 * dVar61 + dVar56 * dVar58;
        lVar10 = lVar10 + 0x18;
      } while (lVar10 != 0x90);
      lVar10 = 0;
      pdVar11 = pdVar25 + 4;
      do {
        dVar61 = *(double *)((long)adStack_210 + lVar10);
        dVar58 = *(double *)((long)adStack_210 + lVar10 + 8);
        dVar60 = *(double *)((long)adStack_210 + lVar10 + 0x10);
        pdVar11[-3] = pdVar11[-3] -
                      (adStack_130[5] * dVar60 + adStack_130[3] * dVar61 + adStack_130[4] * dVar58);
        pdVar11[-4] = pdVar11[-4] -
                      (adStack_130[2] * dVar60 + adStack_130[0] * dVar61 + adStack_130[1] * dVar58);
        pdVar11[-1] = pdVar11[-1] - (dStack_d8 * dVar60 + dStack_e8 * dVar61 + dStack_e0 * dVar58);
        pdVar11[-2] = pdVar11[-2] - (dStack_f0 * dVar60 + dStack_100 * dVar61 + dStack_f8 * dVar58);
        pdVar11[1] = pdVar11[1] - (dStack_a8 * dVar60 + dStack_b8 * dVar61 + dStack_b0 * dVar58);
        *pdVar11 = *pdVar11 - (dStack_c0 * dVar60 + dStack_d0 * dVar61 + dStack_c8 * dVar58);
        lVar10 = lVar10 + 0x18;
        pdVar11 = pdVar11 + 6;
      } while (lVar10 != 0x90);
      dVar61 = auVar34._0_8_;
      dVar58 = auVar34._8_8_;
      dVar57 = dVar57 * dVar30 + dVar61 * dVar59 + dVar58 * dVar55;
      dVar38 = dVar37 * dVar30 + dVar61 * dVar31 + dVar58 * dVar38;
      dVar31 = dVar30 * dVar36 + dVar61 * dVar35 + dVar58 * dVar56;
      param_6[1] = (dVar33 + param_6[1]) -
                   (adStack_210[5] * dVar31 + dVar57 * adStack_210[3] + dVar38 * adStack_210[4]);
      *param_6 = (dVar32 + *param_6) -
                 (adStack_210[2] * dVar31 + dVar57 * adStack_210[0] + dVar38 * adStack_210[1]);
      param_6[3] = (auVar29._8_8_ + param_6[3]) -
                   (adStack_210[0xb] * dVar31 + dVar57 * adStack_210[9] + dVar38 * adStack_210[10]);
      param_6[2] = (auVar29._0_8_ + param_6[2]) -
                   (adStack_210[8] * dVar31 + dVar57 * adStack_210[6] + dVar38 * adStack_210[7]);
      param_6[5] = (dVar28 + param_6[5]) -
                   (adStack_210[0x11] * dVar31 +
                   dVar57 * adStack_210[0xf] + dVar38 * adStack_210[0x10]);
      param_6[4] = (dVar27 + param_6[4]) -
                   (adStack_210[0xe] * dVar31 +
                   dVar57 * adStack_210[0xc] + dVar38 * adStack_210[0xd]);
      uVar17 = uVar17 + 1;
      lVar10 = *(long *)(param_1 + 8);
    } while (uVar17 < (ulong)(*(long *)(param_1 + 0x10) - lVar10 >> 3));
  }
  uVar17 = (ulong)*(int *)(param_1 + 0x24);
  lVar10 = plVar3[3];
  if (uVar17 < (ulong)(plVar3[4] - lVar10 >> 5)) {
    do {
      puVar2 = (uint *)(lVar10 + uVar17 * 0x20);
      pdVar11 = (double *)(lVar4 + (long)*(int *)(*(long *)(puVar2 + 2) + 4) * 8);
      uVar6 = *puVar2;
      uVar12 = (ulong)(int)uVar6;
      uVar5 = puVar2[1];
      if (uVar12 - 1 < 7) {
        lVar10 = 0;
        pdVar20 = (double *)(lVar4 + 0x30 + (long)*(int *)(*(long *)(puVar2 + 2) + 4) * 8);
        pdVar14 = pdVar20;
        do {
          lVar16 = 0;
          pdVar15 = pdVar20;
          do {
            dVar31 = pdVar11[lVar10] * pdVar11[lVar16];
            pdVar22 = pdVar14;
            pdVar24 = pdVar15;
            uVar18 = uVar12 - 1;
            if (1 < uVar6) {
              do {
                dVar31 = dVar31 + *pdVar22 * *pdVar24;
                uVar18 = uVar18 - 1;
                pdVar22 = pdVar22 + 6;
                pdVar24 = pdVar24 + 6;
              } while (uVar18 != 0);
            }
            pdVar25[lVar10 * 6 + lVar16] = dVar31 + pdVar25[lVar10 * 6 + lVar16];
            lVar16 = lVar16 + 1;
            pdVar15 = pdVar15 + 1;
          } while (lVar16 != 6);
          lVar10 = lVar10 + 1;
          pdVar14 = pdVar14 + 1;
        } while (lVar10 != 6);
      }
      else if (uVar6 != 0) {
        adStack_210[0] = 0.0;
        adStack_210[1] = 0.0;
        adStack_210[3] = 2.96439387504748e-323;
        adStack_210[2] = 2.96439387504748e-323;
        adStack_210[4] = (double)uVar12;
        if ((bRam00000001132dfa18 & 1) == 0) {
          iVar9 = 0x132dfa18;
          ___cxa_guard_acquire();
          if (iVar9 != 0) {
            uRam00000001132dfa08 = 0x80000;
            uRam00000001132dfa00 = 0x4000;
            lRam00000001132dfa10 = 0x80000;
            ___cxa_guard_release(0x1132dfa18);
          }
        }
        dVar38 = adStack_210[4];
        dVar31 = adStack_210[2];
        if ((long)adStack_210[2] <= (long)adStack_210[3]) {
          dVar31 = adStack_210[3];
        }
        dVar35 = adStack_210[4];
        if ((long)adStack_210[4] <= (long)dVar31) {
          dVar35 = dVar31;
        }
        adStack_210[6] = dVar38;
        if (0x2f < (long)dVar35) {
          uVar18 = (long)(uRam00000001132dfa00 - 0xc0) / 0x50 & 0xfffffffffffffff8;
          if ((long)uVar18 < 2) {
            uVar18 = 1;
          }
          if ((long)uVar18 < (long)adStack_210[4]) {
            uVar21 = 0;
            if (uVar18 != 0) {
              uVar21 = (ulong)adStack_210[4] / uVar18;
            }
            uVar23 = (long)adStack_210[4] - uVar21 * uVar18;
            adStack_210[4] = (double)uVar18;
            if (uVar23 != 0) {
              lVar10 = uVar21 * 8 + 8;
              lVar16 = 0;
              if (lVar10 != 0) {
                lVar16 = (long)(uVar18 + ~uVar23) / lVar10;
              }
              adStack_210[4] = (double)(uVar18 + lVar16 * -8);
            }
          }
          uVar21 = (uRam00000001132dfa00 - 0xc0) + (long)adStack_210[2] * (long)adStack_210[4] * -8;
          if ((long)uVar21 < (long)adStack_210[4] * 0x20) {
            uVar23 = 0;
            if (uVar18 << 5 != 0) {
              uVar23 = 0x480000 / (uVar18 << 5);
            }
          }
          else {
            uVar23 = 0;
            if ((long)adStack_210[4] << 3 != 0) {
              uVar23 = uVar21 / (ulong)((long)adStack_210[4] << 3);
            }
          }
          uVar18 = 0;
          if ((long)adStack_210[4] << 4 != 0) {
            uVar18 = 0x180000 / (ulong)((long)adStack_210[4] << 4);
          }
          if ((long)uVar18 <= (long)uVar23) {
            uVar23 = uVar18;
          }
          uVar23 = uVar23 & 0xfffffffffffffffc;
          adStack_210[6] = adStack_210[4];
          if ((long)uVar23 < (long)adStack_210[3]) {
            lVar10 = 0;
            if (uVar23 != 0) {
              lVar10 = (long)adStack_210[3] / (long)uVar23;
            }
            lVar16 = (long)adStack_210[3] - lVar10 * uVar23;
            adStack_210[3] = (double)uVar23;
            if (lVar16 != 0) {
              lVar10 = lVar10 * 4 + 4;
              lVar26 = 0;
              if (lVar10 != 0) {
                lVar26 = (long)(uVar23 - lVar16) / lVar10;
              }
              adStack_210[3] = (double)(uVar23 + lVar26 * -4);
            }
          }
          else if (dVar38 == adStack_210[4]) {
            uVar21 = (long)dVar38 * (long)adStack_210[3] * 8;
            dVar31 = adStack_210[2];
            uVar18 = uRam00000001132dfa00;
            if (0x400 < (long)uVar21) {
              if (0x23f < (long)adStack_210[2]) {
                dVar31 = 2.84581812004558e-321;
              }
              uVar18 = uRam00000001132dfa08;
              if (lRam00000001132dfa10 == 0 || 0x8000 < uVar21) {
                uVar18 = 0x180000;
                dVar31 = adStack_210[2];
              }
            }
            uVar21 = 0;
            if ((long)dVar38 * 0x18 != 0) {
              uVar21 = uVar18 / (ulong)((long)dVar38 * 0x18);
            }
            if ((long)uVar21 <= (long)dVar31) {
              dVar31 = (double)uVar21;
            }
            if ((long)dVar31 < 7) {
              adStack_210[6] = dVar38;
              if (dVar31 == 0.0) goto LAB_10998657c;
            }
            else {
              dVar31 = (double)((((ulong)dVar31 / 6) * 2 + (ulong)dVar31 / 6) * 2);
            }
            lVar10 = 0;
            if (dVar31 != 0.0) {
              lVar10 = (long)adStack_210[2] / (long)dVar31;
            }
            lVar16 = (long)adStack_210[2] - lVar10 * (long)dVar31;
            adStack_210[6] = dVar38;
            adStack_210[2] = dVar31;
            if (lVar16 != 0) {
              lVar26 = lVar10 * 6 + 6;
              lVar10 = 0;
              if (lVar26 != 0) {
                lVar10 = ((long)dVar31 - lVar16) / lVar26;
              }
              adStack_210[2] = (double)((long)dVar31 + lVar10 * -6);
            }
          }
        }
LAB_10998657c:
        adStack_210[5] = (double)((long)adStack_210[2] * (long)adStack_210[6]);
        adStack_210[6] = (double)((long)adStack_210[6] * (long)adStack_210[3]);
        FUN_109404694(0x3ff0000000000000,6,6,uVar12,pdVar11,6,pdVar11,6,pdVar25,1,6,adStack_210,0);
        _free(adStack_210[0]);
        _free(adStack_210[1]);
      }
      uVar18 = 0;
      do {
        dVar31 = 0.0;
        dVar38 = 0.0;
        pdVar14 = pdVar11;
        pdVar20 = (double *)(param_3 + (long)(int)uVar5 * 8);
        uVar21 = uVar12;
        if (0 < (int)uVar6) {
          do {
            dVar31 = dVar31 + *pdVar14 * *pdVar20;
            dVar38 = dVar38 + pdVar14[1] * *pdVar20;
            uVar21 = uVar21 - 1;
            pdVar14 = pdVar14 + 6;
            pdVar20 = pdVar20 + 1;
          } while (uVar21 != 0);
        }
        dVar35 = param_6[uVar18];
        (param_6 + uVar18)[1] = dVar38 + (param_6 + uVar18)[1];
        param_6[uVar18] = dVar31 + dVar35;
        pdVar11 = pdVar11 + 2;
        bVar8 = uVar18 < 4;
        uVar18 = uVar18 + 2;
      } while (bVar8);
      uVar17 = uVar17 + 1;
      lVar10 = plVar3[3];
    } while (uVar17 < (ulong)(plVar3[4] - lVar10 >> 5));
  }
  return;
}



/* Entry: 1099866c0; end: 10998687b;  */

void FUN_1099866c0(long param_1,long *param_2,long param_3,undefined8 param_4,double *param_5,
                  long param_6)

{
  int *piVar1;
  double *pdVar2;
  double *pdVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  double *pdVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  lVar5 = *(long *)(param_1 + 8);
  lVar8 = *(long *)(param_1 + 0x10) - lVar5;
  if (lVar8 != 0) {
    lVar12 = 0;
    lVar7 = param_2[1];
    lVar13 = ((long *)*param_2)[3];
    lVar14 = *(long *)(param_1 + 0x28);
    lVar15 = *(long *)*param_2;
    do {
      piVar1 = (int *)(lVar5 + lVar12 * 8);
      uVar4 = piVar1[1];
      uVar9 = (ulong)uVar4;
      lVar16 = (long)*piVar1;
      if ((int)uVar4 < 1) {
        dVar18 = 0.0;
        dVar19 = 0.0;
        dVar17 = 0.0;
      }
      else {
        plVar11 = (long *)(lVar13 + 8 + lVar16 * 0x20);
        dVar17 = 0.0;
        dVar18 = 0.0;
        dVar19 = 0.0;
        do {
          lVar6 = *plVar11;
          pdVar2 = (double *)(lVar7 + (long)*(int *)(lVar6 + 4) * 8);
          pdVar10 = (double *)(param_3 + (long)*(int *)((long)plVar11 + -4) * 8);
          if (plVar11[1] - lVar6 == 8) {
            dVar22 = *pdVar10;
            dVar23 = pdVar10[1];
            dVar20 = *pdVar2 * dVar22 + pdVar2[3] * dVar23;
            dVar21 = pdVar2[1] * dVar22 + pdVar2[4] * dVar23;
            dVar22 = dVar22 * pdVar2[2];
            dVar23 = dVar23 * pdVar2[5];
          }
          else {
            pdVar3 = (double *)(lVar7 + (long)*(int *)(lVar6 + 0xc) * 8);
            dVar22 = *pdVar10 -
                     (*pdVar3 * *param_5 + pdVar3[2] * param_5[2] + pdVar3[4] * param_5[4] +
                     pdVar3[1] * param_5[1] + pdVar3[3] * param_5[3] + pdVar3[5] * param_5[5]);
            dVar23 = pdVar10[1] -
                     (*param_5 * pdVar3[6] + param_5[2] * pdVar3[8] + param_5[4] * pdVar3[10] +
                     param_5[1] * pdVar3[7] + param_5[3] * pdVar3[9] + param_5[5] * pdVar3[0xb]);
            dVar20 = *pdVar2 * dVar22 + pdVar2[3] * dVar23;
            dVar21 = pdVar2[1] * dVar22 + pdVar2[4] * dVar23;
            dVar22 = pdVar2[2] * dVar22;
            dVar23 = pdVar2[5] * dVar23;
          }
          plVar11 = plVar11 + 4;
          dVar18 = dVar18 + dVar20;
          dVar19 = dVar19 + dVar21;
          dVar17 = dVar17 + dVar22 + dVar23;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      pdVar10 = (double *)(lVar14 + lVar12 * 0x48);
      pdVar2 = (double *)
               (param_6 +
               (long)*(int *)(lVar15 + (long)**(int **)(lVar13 + lVar16 * 0x20 + 8) * 8 + 4) * 8);
      *pdVar2 = dVar17 * pdVar10[2] + dVar18 * *pdVar10 + dVar19 * pdVar10[1];
      pdVar2[1] = dVar17 * pdVar10[5] + dVar18 * pdVar10[3] + dVar19 * pdVar10[4];
      pdVar2[2] = dVar17 * pdVar10[8] + dVar18 * pdVar10[6] + dVar19 * pdVar10[7];
      lVar12 = lVar12 + 1;
    } while (lVar12 != lVar8 >> 3);
  }
  return;
}



/* Entry: 10998687c; end: 10998688f;  */

long ** FUN_10998687c(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  long **pplVar2;
  long *plStack_38;
  
  puVar1 = (undefined4 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  FUN_1099ab908(&plStack_38,&UNK_10f5902d6);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(plStack_38,*puVar1);
  FUN_1092b4db8(plStack_38,&UNK_10f593767,5);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(plStack_38,param_2);
  pplVar2 = &plStack_38;
  FUN_1099ab984(pplVar2);
  if (plStack_38 != (long *)0x0) {
    (**(code **)(*plStack_38 + 8))();
  }
  return pplVar2;
}



/* Entry: 109986890; end: 109986937;  */

long ** FUN_109986890(undefined4 *param_1,undefined8 param_2)

{
  long **pplVar1;
  long *plStack_28;
  
  FUN_1099ab908(&plStack_28,&UNK_10f5902d6);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(plStack_28,*param_1);
  FUN_1092b4db8(plStack_28,&UNK_10f593767,5);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(plStack_28,param_2);
  pplVar1 = &plStack_28;
  FUN_1099ab984(pplVar1);
  if (plStack_28 != (long *)0x0) {
    (**(code **)(*plStack_28 + 8))();
  }
  return pplVar1;
}



/* Entry: 109986938; end: 1099869a7;  */

void FUN_109986938(void)

{
  return;
}



/* Entry: 1099869a8; end: 109986bdb;  */

ulong * FUN_1099869a8(undefined8 *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  ulong *puVar6;
  ulong *puVar7;
  long *plVar8;
  long *plVar9;
  ulong *puVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  ulong *puVar15;
  int iVar16;
  ulong *puVar17;
  undefined4 *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  ulong uStack_148;
  undefined7 uStack_140;
  undefined1 uStack_139;
  undefined7 uStack_138;
  undefined1 uStack_131;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 *puStack_120;
  undefined4 *puStack_118;
  long lStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  ulong uStack_e8;
  ulong uStack_90;
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
  
  puVar7 = &uStack_90;
  if (piRam000000011382ba48 == (int *)0x0) {
    uVar11 = 0;
    FUN_1099adbb8(0x11382ba48,0x11382bb14,&UNK_10f590407,1);
    if ((uVar11 & 1) != 0) goto LAB_109986a04;
  }
  else if (0 < *piRam000000011382ba48) {
LAB_109986a04:
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
    FUN_1099a9f0c(&uStack_90,&UNK_10f590407,0x9c,0,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_88 + 0x7540,&UNK_10f590490,0x28);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    FUN_1092b4db8();
    FUN_1099ab3b0(&uStack_90);
  }
  puVar6 = (ulong *)0x80;
  __Znwm();
  *puVar6 = (ulong)&PTR_DAT_110b1d260;
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_2 + 0x20);
  uVar11 = *(ulong *)(param_2 + 0x60);
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[0xd] = 0;
  puVar6[2] = uVar11;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  if (uVar11 != 0) {
    *param_1 = puVar6;
    return puVar6;
  }
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
  FUN_1099a9f0c(&uStack_90,&UNK_10f5904bd,0xed,3,FUN_1099aa768,0);
  plVar9 = (long *)&UNK_10f590545;
  puVar10 = (ulong *)0x22;
  FUN_1092b4db8(lStack_88 + 0x7540);
  func_0x0001099ab7c0();
  uVar11 = puVar6[0xd];
  if (uVar11 != 0) {
    puVar6[0xe] = uVar11;
    __ZdlPv();
  }
  uVar11 = puVar6[0xb];
  puVar6[0xb] = 0;
  if (uVar11 != 0) {
    __ZdaPv();
  }
  uVar11 = puVar6[10];
  puVar6[10] = 0;
  if (uVar11 != 0) {
    __ZdaPv();
  }
  FUN_109904554(puVar6 + 7);
  uVar11 = puVar6[4];
  if (uVar11 != 0) {
    puVar6[5] = uVar11;
    __ZdlPv();
  }
  __ZdlPv(puVar6);
  __Unwind_Resume();
  *puVar7 = (ulong)&PTR_FUN_110b1eae8;
  uVar19 = puVar10[1];
  uVar11 = *puVar10;
  puVar7[3] = puVar10[2];
  puVar7[2] = uVar19;
  puVar7[1] = uVar11;
  puVar6 = puVar7 + 4;
  *puVar6 = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  uVar11 = puVar10[3];
  puVar7[5] = puVar10[4];
  *puVar6 = uVar11;
  puVar7[6] = puVar10[5];
  puVar10[3] = 0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  uVar20 = puVar10[7];
  uVar19 = puVar10[6];
  uVar11 = puVar10[8];
  puVar10 = puVar7 + 10;
  *puVar10 = 0;
  puVar7[9] = uVar11;
  puVar7[8] = uVar20;
  puVar7[7] = uVar19;
  puVar7[0xb] = 0;
  piVar12 = (int *)*puVar6;
  uStack_148 = (long)(puVar7[5] - (long)piVar12) >> 2;
  uStack_150 = 1;
  if (uStack_148 < 2) {
    puVar15 = &uStack_148;
    FUN_109969b80(puVar15,&uStack_150,&UNK_10f590568);
    puStack_168 = puVar15;
    if (puVar15 != (ulong *)0x0) {
      FUN_1099ab8e4(&uStack_148,&UNK_10f59058f,0x30,&puStack_168);
      goto LAB_109987040;
    }
    piVar12 = (int *)*puVar6;
  }
  uStack_148 = CONCAT44(uStack_148._4_4_,*piVar12);
  uStack_150 = 0;
  if (*piVar12 < 1) {
    puVar15 = &uStack_148;
    FUN_109904144(puVar15,&uStack_150,&UNK_10f590623);
    puStack_168 = puVar15;
    if (puVar15 != (ulong *)0x0) {
      FUN_1099ab8e4(&uStack_148,&UNK_10f59058f,0x31,&puStack_168);
      goto LAB_109987040;
    }
    piVar12 = (int *)*puVar6;
  }
  iVar2 = *piVar12;
  iVar16 = (int)((ulong)(plVar9[1] - *plVar9) >> 3);
  uVar3 = iVar16 - iVar2;
  uStack_148 = CONCAT44(uStack_148._4_4_,uVar3);
  uStack_150 = 0;
  if ((int)uVar3 < 1) {
    puVar15 = &uStack_148;
    FUN_109904144(puVar15,&uStack_150,&UNK_10f590646);
    puStack_168 = puVar15;
    if (puVar15 != (ulong *)0x0) {
      FUN_1099aa6cc(&uStack_148,&UNK_10f59058f,0x33,&puStack_168);
      FUN_1092b4db8(CONCAT17(uStack_139,uStack_140) + 0x7540,&UNK_10f590655,0x2c);
      FUN_109365950();
      goto LAB_109987040;
    }
  }
  if (puVar7[9] == 0) {
    uStack_148 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_130 = 0;
    uStack_138 = 0;
    uStack_131 = 0;
    puStack_120 = (undefined4 *)0x0;
    uStack_128 = 0;
    lStack_110 = 0;
    puStack_118 = (undefined4 *)0x0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_f8 = 0;
    FUN_1099a9f0c(&uStack_148,&UNK_10f59058f,0x35,3,FUN_1099aa768,0);
    FUN_1092b4db8(CONCAT17(uStack_139,uStack_140) + 0x7540,&UNK_10f58c7d8,0x2a);
LAB_109987040:
    puVar15 = &uStack_148;
    func_0x0001099ab7c0();
    plVar9 = (long *)puVar7[0xb];
    puVar7[0xb] = 0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    plVar9 = (long *)*puVar10;
    *puVar10 = 0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    if (*puVar6 != 0) {
      puVar7[5] = *puVar6;
      __ZdlPv();
    }
    __Unwind_Resume();
    *puVar15 = (ulong)&PTR_FUN_110b1eae8;
    plVar9 = (long *)puVar15[0xb];
    puVar15[0xb] = 0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    plVar9 = (long *)puVar15[10];
    puVar15[10] = 0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    if (puVar15[4] != 0) {
      puVar15[5] = puVar15[4];
      __ZdlPv();
    }
    return puVar15;
  }
  puVar15 = (ulong *)0x0;
  puStack_168 = (ulong *)0x0;
  lStack_160 = 0;
  lStack_158 = 0;
  if (iVar16 != iVar2) {
    if ((int)uVar3 < 0) {
      FUN_10923f788();
      goto LAB_109986f98;
    }
    puVar17 = (ulong *)((long)(int)uVar3 * 4);
    puVar15 = puVar17;
    __Znwm();
    lStack_158 = (long)puVar15 + (long)(int)uVar3 * 4;
    puStack_168 = puVar15;
    _bzero();
    uVar11 = 0;
    lStack_160 = (long)puVar15 + (long)puVar17;
    piVar12 = (int *)*puVar6;
    lVar14 = *plVar9;
    do {
      uVar1 = (int)uVar11 + *piVar12;
      *(undefined4 *)((long)puVar15 + uVar11 * 4) =
           *(undefined4 *)
            (lVar14 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3));
      uVar11 = uVar11 + 1;
    } while (uVar3 != uVar11);
  }
  uVar11 = 0x40;
  __Znwm();
  FUN_109919714();
  plVar8 = (long *)puVar7[0xb];
  puVar7[0xb] = uVar11;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  uStack_148 = 0x100000002;
  uStack_130 = 0x100000001;
  uStack_140 = 0;
  uStack_139 = 0;
  uStack_138 = 0;
  puStack_120 = (undefined4 *)0x0;
  lStack_110 = 0;
  puStack_118 = (undefined4 *)0x0;
  uStack_108 = 10;
  uStack_f8 = uStack_f8 & 0xffffff00;
  uStack_f4 = 0;
  uStack_f0 = 0xffffffff;
  puVar4 = (undefined4 *)(puVar7[5] - puVar7[4]);
  if (puVar4 == (undefined4 *)0x0) {
    puVar18 = (undefined4 *)0x0;
  }
  else {
    if ((long)puVar4 < 0) {
      FUN_10923f788();
LAB_109986f98:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x109986f9c);
      (*pcVar5)();
    }
    puVar18 = puVar4;
    __Znwm();
    lStack_110 = (long)puVar18 + (long)puVar4;
    puStack_120 = puVar18;
    puStack_118 = puVar18;
    _memcpy();
  }
  puStack_118 = (undefined4 *)((long)puVar18 + (long)puVar4);
  uStack_128 = CONCAT44(uStack_128._4_4_,*(undefined4 *)((long)puVar7 + 0x1c));
  uStack_fc = (undefined4)puVar7[8];
  uStack_104 = (undefined4)puVar7[7];
  uStack_100 = (undefined4)(puVar7[7] >> 0x20);
  uStack_e8 = puVar7[9];
  FUN_1099869a8(&uStack_150,&uStack_148);
  plVar8 = (long *)CONCAT44(uStack_14c,uStack_150);
  plVar13 = (long *)*puVar10;
  *puVar10 = (ulong)plVar8;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))(plVar13);
    plVar8 = (long *)*puVar10;
  }
  (**(code **)(*plVar8 + 0x10))(plVar8,*puVar18,1,plVar9);
  __ZdlPv(puVar18);
  if (puVar15 != (ulong *)0x0) {
    __ZdlPv(puVar15);
  }
  return puVar7;
}



/* Entry: 109986bdc; end: 109987093;  */

ulong * FUN_109986bdc(ulong *param_1,long *param_2,ulong *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  ulong *puVar11;
  int iVar12;
  ulong *puVar13;
  undefined4 *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulong uStack_b8;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 *puStack_90;
  undefined4 *puStack_88;
  long lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulong uStack_58;
  
  *param_1 = (ulong)&PTR_FUN_110b1eae8;
  uVar17 = param_3[1];
  uVar7 = *param_3;
  param_1[3] = param_3[2];
  param_1[2] = uVar17;
  param_1[1] = uVar7;
  puVar15 = param_1 + 4;
  *puVar15 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar7 = param_3[3];
  param_1[5] = param_3[4];
  *puVar15 = uVar7;
  param_1[6] = param_3[5];
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  uVar18 = param_3[7];
  uVar17 = param_3[6];
  uVar7 = param_3[8];
  puVar16 = param_1 + 10;
  *puVar16 = 0;
  param_1[9] = uVar7;
  param_1[8] = uVar18;
  param_1[7] = uVar17;
  param_1[0xb] = 0;
  piVar8 = (int *)*puVar15;
  uStack_b8 = (long)(param_1[5] - (long)piVar8) >> 2;
  uStack_c0 = 1;
  if (uStack_b8 < 2) {
    puVar11 = &uStack_b8;
    FUN_109969b80(puVar11,&uStack_c0,&UNK_10f590568);
    puStack_d8 = puVar11;
    if (puVar11 != (ulong *)0x0) {
      FUN_1099ab8e4(&uStack_b8,&UNK_10f59058f,0x30,&puStack_d8);
      goto LAB_109987040;
    }
    piVar8 = (int *)*puVar15;
  }
  uStack_b8 = CONCAT44(uStack_b8._4_4_,*piVar8);
  uStack_c0 = 0;
  if (*piVar8 < 1) {
    puVar11 = &uStack_b8;
    FUN_109904144(puVar11,&uStack_c0,&UNK_10f590623);
    puStack_d8 = puVar11;
    if (puVar11 != (ulong *)0x0) {
      FUN_1099ab8e4(&uStack_b8,&UNK_10f59058f,0x31,&puStack_d8);
      goto LAB_109987040;
    }
    piVar8 = (int *)*puVar15;
  }
  iVar2 = *piVar8;
  iVar12 = (int)((ulong)(param_2[1] - *param_2) >> 3);
  uVar3 = iVar12 - iVar2;
  uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar3);
  uStack_c0 = 0;
  if ((int)uVar3 < 1) {
    puVar11 = &uStack_b8;
    FUN_109904144(puVar11,&uStack_c0,&UNK_10f590646);
    puStack_d8 = puVar11;
    if (puVar11 != (ulong *)0x0) {
      FUN_1099aa6cc(&uStack_b8,&UNK_10f59058f,0x33,&puStack_d8);
      FUN_1092b4db8(CONCAT17(uStack_a9,uStack_b0) + 0x7540,&UNK_10f590655,0x2c);
      FUN_109365950();
      goto LAB_109987040;
    }
  }
  if (param_1[9] == 0) {
    uStack_b8 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_a1 = 0;
    puStack_90 = (undefined4 *)0x0;
    uStack_98 = 0;
    lStack_80 = 0;
    puStack_88 = (undefined4 *)0x0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_68 = 0;
    FUN_1099a9f0c(&uStack_b8,&UNK_10f59058f,0x35,3,FUN_1099aa768,0);
    FUN_1092b4db8(CONCAT17(uStack_a9,uStack_b0) + 0x7540,&UNK_10f58c7d8,0x2a);
LAB_109987040:
    puVar11 = &uStack_b8;
    func_0x0001099ab7c0();
    plVar6 = (long *)param_1[0xb];
    param_1[0xb] = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = (long *)*puVar16;
    *puVar16 = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    if (*puVar15 != 0) {
      param_1[5] = *puVar15;
      __ZdlPv();
    }
    __Unwind_Resume();
    *puVar11 = (ulong)&PTR_FUN_110b1eae8;
    plVar6 = (long *)puVar11[0xb];
    puVar11[0xb] = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = (long *)puVar11[10];
    puVar11[10] = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    if (puVar11[4] != 0) {
      puVar11[5] = puVar11[4];
      __ZdlPv();
    }
    return puVar11;
  }
  puVar11 = (ulong *)0x0;
  puStack_d8 = (ulong *)0x0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  if (iVar12 != iVar2) {
    if ((int)uVar3 < 0) {
      FUN_10923f788();
      goto LAB_109986f98;
    }
    puVar13 = (ulong *)((long)(int)uVar3 * 4);
    puVar11 = puVar13;
    __Znwm();
    lStack_c8 = (long)puVar11 + (long)(int)uVar3 * 4;
    puStack_d8 = puVar11;
    _bzero();
    uVar7 = 0;
    lStack_d0 = (long)puVar11 + (long)puVar13;
    piVar8 = (int *)*puVar15;
    lVar10 = *param_2;
    do {
      uVar1 = (int)uVar7 + *piVar8;
      *(undefined4 *)((long)puVar11 + uVar7 * 4) =
           *(undefined4 *)
            (lVar10 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3));
      uVar7 = uVar7 + 1;
    } while (uVar3 != uVar7);
  }
  uVar7 = 0x40;
  __Znwm();
  FUN_109919714();
  plVar6 = (long *)param_1[0xb];
  param_1[0xb] = uVar7;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  uStack_b8 = 0x100000002;
  uStack_a0 = 0x100000001;
  uStack_b0 = 0;
  uStack_a9 = 0;
  uStack_a8 = 0;
  puStack_90 = (undefined4 *)0x0;
  lStack_80 = 0;
  puStack_88 = (undefined4 *)0x0;
  uStack_78 = 10;
  uStack_68 = uStack_68 & 0xffffff00;
  uStack_64 = 0;
  uStack_60 = 0xffffffff;
  puVar4 = (undefined4 *)(param_1[5] - param_1[4]);
  if (puVar4 == (undefined4 *)0x0) {
    puVar14 = (undefined4 *)0x0;
  }
  else {
    if ((long)puVar4 < 0) {
      FUN_10923f788();
LAB_109986f98:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x109986f9c);
      (*pcVar5)();
    }
    puVar14 = puVar4;
    __Znwm();
    lStack_80 = (long)puVar14 + (long)puVar4;
    puStack_90 = puVar14;
    puStack_88 = puVar14;
    _memcpy();
  }
  puStack_88 = (undefined4 *)((long)puVar14 + (long)puVar4);
  uStack_98 = CONCAT44(uStack_98._4_4_,*(undefined4 *)((long)param_1 + 0x1c));
  uStack_6c = (undefined4)param_1[8];
  uStack_74 = (undefined4)param_1[7];
  uStack_70 = (undefined4)(param_1[7] >> 0x20);
  uStack_58 = param_1[9];
  FUN_1099869a8(&uStack_c0,&uStack_b8);
  plVar6 = (long *)CONCAT44(uStack_bc,uStack_c0);
  plVar9 = (long *)*puVar16;
  *puVar16 = (ulong)plVar6;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))(plVar9);
    plVar6 = (long *)*puVar16;
  }
  (**(code **)(*plVar6 + 0x10))(plVar6,*puVar14,1,param_2);
  __ZdlPv(puVar14);
  if (puVar11 != (ulong *)0x0) {
    __ZdlPv(puVar11);
  }
  return param_1;
}



/* Entry: 109987094; end: 10998716b;  */

undefined8 * FUN_109987094(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110b1eae8;
  plVar1 = (long *)param_1[0xb];
  param_1[0xb] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[10];
  param_1[10] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10998716c; end: 109987237;  */

double ** FUN_10998716c(long param_1,long param_2,undefined8 param_3)

{
  double *pdVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  double **ppdVar5;
  double *pdVar6;
  double *pdVar7;
  long lVar8;
  double *pdVar9;
  double *pdVar10;
  undefined1 auVar11 [16];
  double *pdStack_190;
  long lStack_188;
  undefined8 uStack_178;
  double *pdStack_170;
  long lStack_168;
  double *pdStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_38;
  
  puVar3 = &uStack_a0;
  puVar4 = &uStack_a0;
  lVar8 = *(long *)(param_1 + 0x58);
  iVar2 = *(int *)(*(long *)(lVar8 + 0x38) + 8);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar2);
  puStack_38 = (undefined1 *)((ulong)puStack_38 & 0xffffffff00000000);
  if (iVar2 < 1) {
    FUN_109904144(&uStack_a0,&puStack_38,&UNK_10f59069f);
    if (puVar3 != (undefined8 *)0x0) {
      pdVar6 = (double *)&UNK_10f59058f;
      pdVar7 = (double *)0x56;
      puStack_38 = (undefined1 *)puVar3;
      FUN_1099ab8e4(&uStack_a0,&UNK_10f59058f,0x56,&puStack_38);
      func_0x0001099ab7c0();
      ppdVar5 = *(double ***)((long)puVar4 + 0x58);
      lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      if (pdVar6 == (double *)0x0) {
        pdStack_158 = (double *)0x0;
        uStack_100 = 0;
        uStack_140 = 0;
        lStack_148 = 0;
        uStack_130 = 0;
        uStack_138 = 0;
        uStack_120 = 0;
        uStack_128 = 0;
        uStack_110 = 0;
        uStack_118 = 0;
        uStack_108 = 0;
        FUN_1099a9f0c(&pdStack_158,&UNK_10f589f79,0x88,3,FUN_1099aa768,0);
        FUN_1092b4db8(lStack_150 + 0x7540,&UNK_10f58a023,0x1b);
      }
      else if (pdVar7 == (double *)0x0) {
        pdStack_158 = (double *)0x0;
        uStack_100 = 0;
        uStack_140 = 0;
        lStack_148 = 0;
        uStack_130 = 0;
        uStack_138 = 0;
        uStack_120 = 0;
        uStack_128 = 0;
        uStack_110 = 0;
        uStack_118 = 0;
        uStack_108 = 0;
        FUN_1099a9f0c(&pdStack_158,&UNK_10f589f79,0x89,3,FUN_1099aa768,0);
        FUN_1092b4db8(lStack_150 + 0x7540,&UNK_10f58a03f,0x1b);
      }
      else {
        pdVar9 = ppdVar5[1];
        pdVar1 = ppdVar5[2];
        if (pdVar9 != pdVar1) {
          pdVar10 = (double *)ppdVar5[7][5];
          do {
            iVar2 = *(int *)pdVar9;
            lVar8 = (long)iVar2;
            uStack_178 = 0x3ff0000000000000;
            pdStack_190 = pdVar7;
            lStack_188 = lVar8;
            if (iVar2 == 1) {
              *pdVar7 = *pdVar10 * *pdVar6 + *pdVar7;
            }
            else {
              ppdVar5 = &pdStack_158;
              pdStack_170 = pdVar6;
              lStack_168 = lVar8;
              pdStack_158 = pdVar10;
              lStack_150 = lVar8;
              lStack_148 = lVar8;
              FUN_10991ab6c(ppdVar5,&pdStack_170,&pdStack_190,&uStack_178);
            }
            pdVar6 = pdVar6 + lVar8;
            pdVar7 = pdVar7 + lVar8;
            pdVar10 = pdVar10 + (uint)(iVar2 * iVar2);
            pdVar9 = (double *)((long)pdVar9 + 4);
          } while (pdVar9 != pdVar1);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
          return ppdVar5;
        }
        ___stack_chk_fail();
      }
      ppdVar5 = &pdStack_158;
      func_0x0001099ab7c0();
      __Unwind_Resume();
      return (double **)(ulong)*(uint *)(ppdVar5[7] + 1);
    }
    lVar8 = *(long *)(param_1 + 0x58);
    puStack_38 = (undefined1 *)0x0;
  }
  auVar11 = NEON_ext(*(undefined1 (*) [16])(param_2 + 0x18),*(undefined1 (*) [16])(param_2 + 0x18),8
                     ,1);
  uStack_98 = auVar11._8_8_;
  uStack_a0 = auVar11._0_8_;
  (**(code **)(**(long **)(param_1 + 0x50) + 0x18))
            (*(long **)(param_1 + 0x50),&uStack_a0,0,param_3,lVar8,0);
  FUN_109919e60(*(undefined8 *)(param_1 + 0x58));
  return (double **)0x1;
}



/* Entry: 109987238; end: 10998724f;  */

double ** FUN_109987238(long param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  int iVar2;
  double **ppdVar3;
  double *pdVar4;
  double *pdVar5;
  long lVar6;
  double *pdStack_f0;
  long lStack_e8;
  undefined8 uStack_d8;
  double *pdStack_d0;
  long lStack_c8;
  double *pdStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppdVar3 = *(double ***)(param_1 + 0x58);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == (double *)0x0) {
    pdStack_b8 = (double *)0x0;
    uStack_60 = 0;
    uStack_a0 = 0;
    lStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_68 = 0;
    FUN_1099a9f0c(&pdStack_b8,&UNK_10f589f79,0x88,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_b0 + 0x7540,&UNK_10f58a023,0x1b);
  }
  else if (param_3 == (double *)0x0) {
    pdStack_b8 = (double *)0x0;
    uStack_60 = 0;
    uStack_a0 = 0;
    lStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_68 = 0;
    FUN_1099a9f0c(&pdStack_b8,&UNK_10f589f79,0x89,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_b0 + 0x7540,&UNK_10f58a03f,0x1b);
  }
  else {
    pdVar4 = ppdVar3[1];
    pdVar1 = ppdVar3[2];
    if (pdVar4 != pdVar1) {
      pdVar5 = (double *)ppdVar3[7][5];
      do {
        iVar2 = *(int *)pdVar4;
        lVar6 = (long)iVar2;
        uStack_d8 = 0x3ff0000000000000;
        pdStack_f0 = param_3;
        lStack_e8 = lVar6;
        if (iVar2 == 1) {
          *param_3 = *pdVar5 * *param_2 + *param_3;
        }
        else {
          ppdVar3 = &pdStack_b8;
          pdStack_d0 = param_2;
          lStack_c8 = lVar6;
          pdStack_b8 = pdVar5;
          lStack_b0 = lVar6;
          lStack_a8 = lVar6;
          FUN_10991ab6c(ppdVar3,&pdStack_d0,&pdStack_f0,&uStack_d8);
        }
        param_2 = param_2 + lVar6;
        param_3 = param_3 + lVar6;
        pdVar5 = pdVar5 + (uint)(iVar2 * iVar2);
        pdVar4 = (double *)((long)pdVar4 + 4);
      } while (pdVar4 != pdVar1);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return ppdVar3;
    }
    ___stack_chk_fail();
  }
  ppdVar3 = &pdStack_b8;
  func_0x0001099ab7c0();
  __Unwind_Resume();
  return (double **)(ulong)*(uint *)(ppdVar3[7] + 1);
}



/* Entry: 109987250; end: 10998732f;  */

void FUN_109987250(undefined8 *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  
  iVar5 = (int)param_3;
  puVar2 = (undefined8 *)((long)iVar5 * 8 + 0x10);
  if (0xffffffffffffffef < (ulong)((long)iVar5 * 8) || iVar5 < 0) {
    puVar2 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar2 = 8;
  puVar2[1] = (long)iVar5;
  plVar6 = puVar2 + 2;
  if (iVar5 != 0) {
    _bzero(plVar6,-(param_3 >> 0x1f & 1) & 0xfffffff800000000 | (param_3 & 0xffffffff) << 3);
  }
  *param_1 = plVar6;
  FUN_1099794a4();
  if (0 < iVar5) {
    lVar1 = (param_2 & 0xffffffff) << 3;
    if ((int)param_2 < 0) {
      lVar1 = -1;
    }
    param_3 = param_3 & 0xffffffff;
    do {
      lVar3 = lVar1;
      __Znam();
      _bzero();
      lVar4 = *plVar6;
      *plVar6 = lVar3;
      if (lVar4 != 0) {
        __ZdaPv();
      }
      plVar6 = plVar6 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 109987330; end: 10998738f;  */

void FUN_109987330(long *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (ulong)param_2 << 3;
  if ((int)param_2 < 0) {
    lVar1 = -1;
  }
  __Znam();
  _bzero();
  lVar2 = *param_1;
  *param_1 = lVar1;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 109987390; end: 10998745b;  */

void FUN_109987390(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar4 = *param_2;
  uVar5 = *(long *)(lVar4 + 0x10) - *(long *)(lVar4 + 8);
  if (0 < (int)(uVar5 >> 2)) {
    uVar6 = 0;
    iVar1 = *(int *)(lVar4 + 0x20);
    lVar4 = *param_1;
    do {
      lVar7 = *(long *)(param_2[2] + uVar6 * 8);
      if ((*(byte *)(lVar7 + 0xc) & 1) == 0) {
        plVar3 = *(long **)(lVar7 + 0x10);
        if (plVar3 == (long *)0x0) {
          iVar2 = *(int *)(lVar7 + 8);
        }
        else {
          (**(code **)(*plVar3 + 0x18))();
          iVar2 = (int)plVar3;
        }
        if (iVar2 == 0) goto LAB_109987424;
        *(long *)(param_5 + uVar6 * 8) = lVar4;
        plVar3 = *(long **)(lVar7 + 0x10);
        if (plVar3 == (long *)0x0) {
          iVar2 = *(int *)(lVar7 + 8);
        }
        else {
          (**(code **)(*plVar3 + 0x18))();
          iVar2 = (int)plVar3;
        }
        lVar4 = lVar4 + (long)(iVar2 * iVar1) * 8;
      }
      else {
LAB_109987424:
        *(undefined8 *)(param_5 + uVar6 * 8) = 0;
      }
      uVar6 = uVar6 + 1;
    } while ((uVar5 >> 2 & 0x7fffffff) != uVar6);
  }
  return;
}



/* Entry: 10998745c; end: 109987c67;  */

uint * FUN_10998745c(double *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  ulong *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  ulong uVar14;
  double *pdVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  uint uVar20;
  uint *puVar21;
  ulong *unaff_x21;
  double *pdVar22;
  long *plVar23;
  int iVar24;
  long *plVar25;
  int iVar26;
  ulong *puVar27;
  double *pdVar28;
  double *pdVar29;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  uint uStack_c4;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  if (param_3 == (long *)0x0) {
    uStack_c0 = 0;
    uStack_68 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    FUN_1099a9f0c(&uStack_c0,&UNK_10f5906ac,0x2e,3,FUN_1099aa768,0);
    plVar25 = (long *)&UNK_10f58a5c0;
    FUN_1092b4db8(lStack_b8 + 0x7540,&UNK_10f58a5c0,0x24);
LAB_109987c60:
    puVar21 = (uint *)&uStack_c0;
    func_0x0001099ab7c0();
    uVar20 = *puVar21;
    puVar21 = (uint *)(ulong)uVar20;
    uVar8 = (ulong)(int)uVar20;
    uVar14 = plVar25[1];
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar16 = uVar14 - 1 & uVar8;
    }
    else {
      uVar16 = uVar8;
      if (uVar14 <= uVar8) {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = uVar8 / uVar14;
        }
        uVar16 = uVar8 - uVar16 * uVar14;
      }
    }
    plVar25 = *(long **)(*plVar25 + uVar16 * 8);
    do {
      do {
        plVar25 = (long *)*plVar25;
      } while (plVar25[1] != uVar8);
    } while (*(uint *)(plVar25 + 2) != uVar20);
    puVar19 = (uint *)((long)plVar25 + 0x14);
    if (*puVar19 != uVar20) {
      puVar21 = puVar19;
      FUN_109987c68();
      *puVar19 = (uint)puVar21;
    }
    return puVar21;
  }
  if (param_3[3] != 0) {
    puVar5 = (ulong *)param_3[2];
    while (puVar5 != (ulong *)0x0) {
      puVar5 = (ulong *)*puVar5;
      __ZdlPv();
      unaff_x21 = puVar5;
    }
    param_3[2] = 0;
    lVar7 = param_3[1];
    if (lVar7 != 0) {
      lVar11 = 0;
      do {
        *(undefined8 *)(*param_3 + lVar11 * 8) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar7 != lVar11);
    }
    param_3[3] = 0;
  }
  plVar25 = *(long **)(param_2 + 0x10);
  if (plVar25 != (long *)0x0) {
    lVar7 = 0;
    plVar6 = param_3 + 2;
    puVar5 = (ulong *)param_3[1];
    do {
      iVar4 = (int)plVar25[2];
      puVar27 = (ulong *)(long)iVar4;
      if (puVar5 != (ulong *)0x0) {
        uVar8 = (long)puVar5 - 1;
        if (((ulong)puVar5 & uVar8) == 0) {
          unaff_x21 = (ulong *)(uVar8 & (ulong)puVar27);
        }
        else {
          unaff_x21 = puVar27;
          if (puVar5 <= puVar27) {
            uVar14 = 0;
            if (puVar5 != (ulong *)0x0) {
              uVar14 = (ulong)puVar27 / (ulong)puVar5;
            }
            unaff_x21 = (ulong *)((long)puVar27 - uVar14 * (long)puVar5);
          }
        }
        puVar12 = *(undefined8 **)(*param_3 + (long)unaff_x21 * 8);
        if (puVar12 != (undefined8 *)0x0) {
          for (plVar23 = (long *)*puVar12; plVar23 != (long *)0x0; plVar23 = (long *)*plVar23) {
            puVar13 = (ulong *)plVar23[1];
            if (puVar13 == puVar27) {
              if ((int)plVar23[2] == iVar4) goto LAB_109987690;
            }
            else {
              if (((ulong)puVar5 & uVar8) == 0) {
                puVar13 = (ulong *)((ulong)puVar13 & uVar8);
              }
              else if (puVar5 <= puVar13) {
                uVar14 = 0;
                if (puVar5 != (ulong *)0x0) {
                  uVar14 = (ulong)puVar13 / (ulong)puVar5;
                }
                puVar13 = (ulong *)((long)puVar13 - uVar14 * (long)puVar5);
              }
              if (puVar13 != unaff_x21) break;
            }
          }
        }
      }
      plVar23 = (long *)0x18;
      __Znwm();
      *plVar23 = 0;
      plVar23[1] = (long)puVar27;
      *(int *)(plVar23 + 2) = iVar4;
      *(undefined4 *)((long)plVar23 + 0x14) = 0;
      fVar2 = (float)(lVar7 + 1);
      in_b0 = SUB41(fVar2,0);
      in_register_00005001 = (undefined1)((uint)fVar2 >> 8);
      in_register_00005002 = (undefined1)((uint)fVar2 >> 0x10);
      in_register_00005003 = (undefined1)((uint)fVar2 >> 0x18);
      in_register_00005004 = 0;
      in_register_00005005 = 0;
      in_register_00005006 = 0;
      in_register_00005007 = 0;
      if ((puVar5 == (ulong *)0x0) || (*(float *)(param_3 + 4) * (float)puVar5 < fVar2)) {
        uVar8 = 1;
        if ((ulong *)0x2 < puVar5) {
          uVar8 = (ulong)(((ulong)puVar5 & (long)puVar5 - 1U) != 0);
        }
        uVar8 = uVar8 | (long)puVar5 << 1;
        fVar2 = fVar2 / *(float *)(param_3 + 4);
        in_b0 = SUB41(fVar2,0);
        in_register_00005001 = (undefined1)((uint)fVar2 >> 8);
        in_register_00005002 = (undefined1)((uint)fVar2 >> 0x10);
        in_register_00005003 = (undefined1)((uint)fVar2 >> 0x18);
        in_register_00005004 = 0;
        in_register_00005005 = 0;
        in_register_00005006 = 0;
        in_register_00005007 = 0;
        if (uVar8 <= (ulong)(long)fVar2) {
          uVar8 = (long)fVar2;
        }
        FUN_1093c8d00(param_3,uVar8);
        puVar5 = (ulong *)param_3[1];
        if (((ulong)puVar5 & (long)puVar5 - 1U) == 0) {
          unaff_x21 = (ulong *)((long)puVar5 - 1U & (ulong)puVar27);
        }
        else {
          unaff_x21 = puVar27;
          if (puVar5 <= puVar27) {
            uVar8 = 0;
            if (puVar5 != (ulong *)0x0) {
              uVar8 = (ulong)puVar27 / (ulong)puVar5;
            }
            unaff_x21 = (ulong *)((long)puVar27 - uVar8 * (long)puVar5);
          }
        }
      }
      lVar7 = *param_3;
      plVar9 = *(long **)(lVar7 + (long)unaff_x21 * 8);
      if (plVar9 == (long *)0x0) {
        *plVar23 = *plVar6;
        *plVar6 = (long)plVar23;
        *(long **)(lVar7 + (long)unaff_x21 * 8) = plVar6;
        if (*plVar23 != 0) {
          puVar27 = *(ulong **)(*plVar23 + 8);
          if (((ulong)puVar5 & (long)puVar5 - 1U) == 0) {
            puVar27 = (ulong *)((ulong)puVar27 & (long)puVar5 - 1U);
          }
          else if (puVar5 <= puVar27) {
            uVar8 = 0;
            if (puVar5 != (ulong *)0x0) {
              uVar8 = (ulong)puVar27 / (ulong)puVar5;
            }
            puVar27 = (ulong *)((long)puVar27 - uVar8 * (long)puVar5);
          }
          plVar9 = (long *)(*param_3 + (long)puVar27 * 8);
          goto LAB_109987680;
        }
      }
      else {
        *plVar23 = *plVar9;
LAB_109987680:
        *plVar9 = (long)plVar23;
      }
      lVar7 = param_3[3] + 1;
      param_3[3] = lVar7;
LAB_109987690:
      *(int *)((long)plVar23 + 0x14) = iVar4;
      plVar25 = (long *)*plVar25;
    } while (plVar25 != (long *)0x0);
    for (plVar25 = *(long **)(param_2 + 0x10); plVar25 != (long *)0x0; plVar25 = (long *)*plVar25) {
      uStack_c4 = *(uint *)(plVar25 + 2);
      uVar8 = (ulong)(int)uStack_c4;
      uVar14 = *(ulong *)(param_2 + 0x58);
      if (uVar14 == 0) {
LAB_109987b70:
        uStack_c0 = 0;
        uStack_68 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_70 = 0;
        FUN_1099a9f0c(&uStack_c0,&UNK_10f589c92,0x3f,3,FUN_1099aa768,0);
        FUN_1092b4db8(lStack_b8 + 0x7540,&UNK_10f589d12,0x25);
        FUN_1092b4db8();
        plVar25 = (long *)(ulong)uStack_c4;
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
        goto LAB_109987c60;
      }
      uVar16 = uVar14 - 1;
      if ((uVar14 & uVar16) == 0) {
        uVar17 = uVar16 & uVar8;
      }
      else {
        uVar17 = uVar8;
        if (uVar14 <= uVar8) {
          uVar17 = 0;
          if (uVar14 != 0) {
            uVar17 = uVar8 / uVar14;
          }
          uVar17 = uVar8 - uVar17 * uVar14;
        }
      }
      plVar23 = *(long **)(*(long *)(param_2 + 0x50) + uVar17 * 8);
      if (plVar23 == (long *)0x0) goto LAB_109987b70;
      do {
        while( true ) {
          plVar23 = (long *)*plVar23;
          if (plVar23 == (long *)0x0) goto LAB_109987b70;
          uVar18 = plVar23[1];
          if (uVar18 == uVar8) break;
          if ((uVar14 & uVar16) == 0) {
            uVar18 = uVar18 & uVar16;
          }
          else if (uVar14 <= uVar18) {
            uVar1 = 0;
            if (uVar14 != 0) {
              uVar1 = uVar18 / uVar14;
            }
            uVar18 = uVar18 - uVar1 * uVar14;
          }
          if (uVar18 != uVar17) goto LAB_109987b70;
        }
      } while (*(uint *)(plVar23 + 2) != uStack_c4);
      for (plVar23 = (long *)plVar23[5]; plVar23 != (long *)0x0; plVar23 = (long *)*plVar23) {
        uVar8 = (ulong)uStack_c0 >> 0x20;
        uStack_c0 = CONCAT44((int)uVar8,*(int *)(plVar23 + 2));
        if ((int)uStack_c4 <= *(int *)(plVar23 + 2)) {
          FUN_109920518(param_2,&uStack_c4,&uStack_c0);
          bVar3 = false;
          if (!NAN((double)CONCAT17(in_register_00005007,
                                    CONCAT16(in_register_00005006,
                                             CONCAT15(in_register_00005005,
                                                      CONCAT14(in_register_00005004,
                                                               CONCAT13(in_register_00005003,
                                                                        CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0)))))))) &&
              !NAN(*param_1)) {
            bVar3 = (double)CONCAT17(in_register_00005007,
                                     CONCAT16(in_register_00005006,
                                              CONCAT15(in_register_00005005,
                                                       CONCAT14(in_register_00005004,
                                                                CONCAT13(in_register_00005003,
                                                                         CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0))))))) <
                    *param_1;
          }
          if (!bVar3) {
            puVar21 = &uStack_c4;
            FUN_109987c68(puVar21,param_3);
            puVar12 = &uStack_c0;
            FUN_109987c68(puVar12,param_3);
            iVar4 = (int)puVar12;
            iVar24 = (int)puVar21;
            if (iVar24 != iVar4) {
              pdVar29 = (double *)param_3[1];
              if (iVar24 < iVar4) {
                pdVar28 = (double *)(long)iVar4;
                pdVar22 = param_1;
                if (pdVar29 != (double *)0x0) {
                  uVar8 = (long)pdVar29 - 1;
                  if (((ulong)pdVar29 & uVar8) == 0) {
                    pdVar22 = (double *)(uVar8 & (ulong)pdVar28);
                  }
                  else {
                    pdVar22 = pdVar28;
                    if (pdVar29 <= pdVar28) {
                      uVar14 = 0;
                      if (pdVar29 != (double *)0x0) {
                        uVar14 = (ulong)pdVar28 / (ulong)pdVar29;
                      }
                      pdVar22 = (double *)((long)pdVar28 - uVar14 * (long)pdVar29);
                    }
                  }
                  puVar12 = *(undefined8 **)(*param_3 + (long)pdVar22 * 8);
                  if (puVar12 != (undefined8 *)0x0) {
                    for (plVar9 = (long *)*puVar12; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9)
                    {
                      pdVar15 = (double *)plVar9[1];
                      if (pdVar15 == pdVar28) {
                        iVar26 = iVar24;
                        if ((int)plVar9[2] == iVar4) goto LAB_109987af0;
                      }
                      else {
                        if (((ulong)pdVar29 & uVar8) == 0) {
                          pdVar15 = (double *)((ulong)pdVar15 & uVar8);
                        }
                        else if (pdVar29 <= pdVar15) {
                          uVar14 = 0;
                          if (pdVar29 != (double *)0x0) {
                            uVar14 = (ulong)pdVar15 / (ulong)pdVar29;
                          }
                          pdVar15 = (double *)((long)pdVar15 - uVar14 * (long)pdVar29);
                        }
                        if (pdVar15 != pdVar22) break;
                      }
                    }
                  }
                }
                plVar9 = (long *)0x18;
                __Znwm();
                *plVar9 = 0;
                plVar9[1] = (long)pdVar28;
                *(int *)(plVar9 + 2) = iVar4;
                *(undefined4 *)((long)plVar9 + 0x14) = 0;
                fVar2 = (float)(param_3[3] + 1);
                in_b0 = SUB41(fVar2,0);
                in_register_00005001 = (undefined1)((uint)fVar2 >> 8);
                in_register_00005002 = (undefined1)((uint)fVar2 >> 0x10);
                in_register_00005003 = (undefined1)((uint)fVar2 >> 0x18);
                in_register_00005004 = 0;
                in_register_00005005 = 0;
                in_register_00005006 = 0;
                in_register_00005007 = 0;
                if ((pdVar29 == (double *)0x0) || (*(float *)(param_3 + 4) * (float)pdVar29 < fVar2)
                   ) {
                  uVar8 = 1;
                  if ((double *)0x2 < pdVar29) {
                    uVar8 = (ulong)(((ulong)pdVar29 & (long)pdVar29 - 1U) != 0);
                  }
                  uVar8 = uVar8 | (long)pdVar29 << 1;
                  fVar2 = fVar2 / *(float *)(param_3 + 4);
                  in_b0 = SUB41(fVar2,0);
                  in_register_00005001 = (undefined1)((uint)fVar2 >> 8);
                  in_register_00005002 = (undefined1)((uint)fVar2 >> 0x10);
                  in_register_00005003 = (undefined1)((uint)fVar2 >> 0x18);
                  in_register_00005004 = 0;
                  in_register_00005005 = 0;
                  in_register_00005006 = 0;
                  in_register_00005007 = 0;
                  if (uVar8 <= (ulong)(long)fVar2) {
                    uVar8 = (long)fVar2;
                  }
                  FUN_1093c8d00(param_3,uVar8);
                  pdVar29 = (double *)param_3[1];
                  if (((ulong)pdVar29 & (long)pdVar29 - 1U) == 0) {
                    pdVar22 = (double *)((long)pdVar29 - 1U & (ulong)pdVar28);
                  }
                  else {
                    pdVar22 = pdVar28;
                    if (pdVar29 <= pdVar28) {
                      uVar8 = 0;
                      if (pdVar29 != (double *)0x0) {
                        uVar8 = (ulong)pdVar28 / (ulong)pdVar29;
                      }
                      pdVar22 = (double *)((long)pdVar28 - uVar8 * (long)pdVar29);
                    }
                  }
                }
                lVar7 = *param_3;
                plVar10 = *(long **)(lVar7 + (long)pdVar22 * 8);
                iVar4 = iVar24;
                if (plVar10 == (long *)0x0) {
                  *plVar9 = *plVar6;
                  *plVar6 = (long)plVar9;
                  *(long **)(lVar7 + (long)pdVar22 * 8) = plVar6;
                  if (*plVar9 == 0) goto LAB_109987adc;
                  pdVar22 = *(double **)(*plVar9 + 8);
                  if (((ulong)pdVar29 & (long)pdVar29 - 1U) == 0) {
                    pdVar22 = (double *)((ulong)pdVar22 & (long)pdVar29 - 1U);
                  }
                  else if (pdVar29 <= pdVar22) {
                    uVar8 = 0;
                    if (pdVar29 != (double *)0x0) {
                      uVar8 = (ulong)pdVar22 / (ulong)pdVar29;
                    }
                    pdVar22 = (double *)((long)pdVar22 - uVar8 * (long)pdVar29);
                  }
                  plVar10 = (long *)(*param_3 + (long)pdVar22 * 8);
                }
                else {
                  *plVar9 = *plVar10;
                }
                *plVar10 = (long)plVar9;
              }
              else {
                pdVar28 = (double *)(long)iVar24;
                pdVar22 = param_1;
                if (pdVar29 != (double *)0x0) {
                  uVar8 = (long)pdVar29 - 1;
                  if (((ulong)pdVar29 & uVar8) == 0) {
                    pdVar22 = (double *)(uVar8 & (ulong)pdVar28);
                  }
                  else {
                    pdVar22 = pdVar28;
                    if (pdVar29 <= pdVar28) {
                      uVar14 = 0;
                      if (pdVar29 != (double *)0x0) {
                        uVar14 = (ulong)pdVar28 / (ulong)pdVar29;
                      }
                      pdVar22 = (double *)((long)pdVar28 - uVar14 * (long)pdVar29);
                    }
                  }
                  puVar12 = *(undefined8 **)(*param_3 + (long)pdVar22 * 8);
                  if (puVar12 != (undefined8 *)0x0) {
                    for (plVar9 = (long *)*puVar12; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9)
                    {
                      pdVar15 = (double *)plVar9[1];
                      if (pdVar15 == pdVar28) {
                        iVar26 = iVar4;
                        if ((int)plVar9[2] == iVar24) goto LAB_109987af0;
                      }
                      else {
                        if (((ulong)pdVar29 & uVar8) == 0) {
                          pdVar15 = (double *)((ulong)pdVar15 & uVar8);
                        }
                        else if (pdVar29 <= pdVar15) {
                          uVar14 = 0;
                          if (pdVar29 != (double *)0x0) {
                            uVar14 = (ulong)pdVar15 / (ulong)pdVar29;
                          }
                          pdVar15 = (double *)((long)pdVar15 - uVar14 * (long)pdVar29);
                        }
                        if (pdVar15 != pdVar22) break;
                      }
                    }
                  }
                }
                plVar9 = (long *)0x18;
                __Znwm();
                *plVar9 = 0;
                plVar9[1] = (long)pdVar28;
                *(int *)(plVar9 + 2) = iVar24;
                *(undefined4 *)((long)plVar9 + 0x14) = 0;
                fVar2 = (float)(param_3[3] + 1);
                in_b0 = SUB41(fVar2,0);
                in_register_00005001 = (undefined1)((uint)fVar2 >> 8);
                in_register_00005002 = (undefined1)((uint)fVar2 >> 0x10);
                in_register_00005003 = (undefined1)((uint)fVar2 >> 0x18);
                in_register_00005004 = 0;
                in_register_00005005 = 0;
                in_register_00005006 = 0;
                in_register_00005007 = 0;
                if ((pdVar29 == (double *)0x0) || (*(float *)(param_3 + 4) * (float)pdVar29 < fVar2)
                   ) {
                  uVar8 = 1;
                  if ((double *)0x2 < pdVar29) {
                    uVar8 = (ulong)(((ulong)pdVar29 & (long)pdVar29 - 1U) != 0);
                  }
                  uVar8 = uVar8 | (long)pdVar29 << 1;
                  fVar2 = fVar2 / *(float *)(param_3 + 4);
                  in_b0 = SUB41(fVar2,0);
                  in_register_00005001 = (undefined1)((uint)fVar2 >> 8);
                  in_register_00005002 = (undefined1)((uint)fVar2 >> 0x10);
                  in_register_00005003 = (undefined1)((uint)fVar2 >> 0x18);
                  in_register_00005004 = 0;
                  in_register_00005005 = 0;
                  in_register_00005006 = 0;
                  in_register_00005007 = 0;
                  if (uVar8 <= (ulong)(long)fVar2) {
                    uVar8 = (long)fVar2;
                  }
                  FUN_1093c8d00(param_3,uVar8);
                  pdVar29 = (double *)param_3[1];
                  if (((ulong)pdVar29 & (long)pdVar29 - 1U) == 0) {
                    pdVar22 = (double *)((long)pdVar29 - 1U & (ulong)pdVar28);
                  }
                  else {
                    pdVar22 = pdVar28;
                    if (pdVar29 <= pdVar28) {
                      uVar8 = 0;
                      if (pdVar29 != (double *)0x0) {
                        uVar8 = (ulong)pdVar28 / (ulong)pdVar29;
                      }
                      pdVar22 = (double *)((long)pdVar28 - uVar8 * (long)pdVar29);
                    }
                  }
                }
                lVar7 = *param_3;
                plVar10 = *(long **)(lVar7 + (long)pdVar22 * 8);
                if (plVar10 == (long *)0x0) {
                  *plVar9 = *plVar6;
                  *plVar6 = (long)plVar9;
                  *(long **)(lVar7 + (long)pdVar22 * 8) = plVar6;
                  if (*plVar9 == 0) goto LAB_109987adc;
                  pdVar22 = *(double **)(*plVar9 + 8);
                  if (((ulong)pdVar29 & (long)pdVar29 - 1U) == 0) {
                    pdVar22 = (double *)((ulong)pdVar22 & (long)pdVar29 - 1U);
                  }
                  else if (pdVar29 <= pdVar22) {
                    uVar8 = 0;
                    if (pdVar29 != (double *)0x0) {
                      uVar8 = (ulong)pdVar22 / (ulong)pdVar29;
                    }
                    pdVar22 = (double *)((long)pdVar22 - uVar8 * (long)pdVar29);
                  }
                  plVar10 = (long *)(*param_3 + (long)pdVar22 * 8);
                }
                else {
                  *plVar9 = *plVar10;
                }
                *plVar10 = (long)plVar9;
              }
LAB_109987adc:
              param_3[3] = param_3[3] + 1;
              iVar26 = iVar4;
LAB_109987af0:
              *(int *)((long)plVar9 + 0x14) = iVar26;
            }
          }
        }
      }
    }
  }
  plVar25 = (long *)param_3[2];
  if (plVar25 == (long *)0x0) {
    puVar21 = (uint *)0x0;
  }
  else {
    puVar21 = (uint *)0x0;
    do {
      plVar6 = plVar25 + 2;
      FUN_109987c68(plVar6,param_3);
      *(int *)((long)plVar25 + 0x14) = (int)plVar6;
      uVar20 = (uint)puVar21;
      if ((int)plVar25[2] == (int)plVar6) {
        uVar20 = uVar20 + 1;
      }
      puVar21 = (uint *)(ulong)uVar20;
      plVar25 = (long *)*plVar25;
    } while (plVar25 != (long *)0x0);
  }
  return puVar21;
}



/* Entry: 109987c68; end: 109987cfb;  */

void FUN_109987c68(int *param_1,long *param_2)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  int *piVar7;
  
  iVar1 = *param_1;
  uVar3 = (ulong)iVar1;
  uVar4 = param_2[1];
  if ((uVar4 & uVar4 - 1) == 0) {
    uVar5 = uVar4 - 1 & uVar3;
  }
  else {
    uVar5 = uVar3;
    if (uVar4 <= uVar3) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar3 / uVar4;
      }
      uVar5 = uVar3 - uVar5 * uVar4;
    }
  }
  plVar6 = *(long **)(*param_2 + uVar5 * 8);
  do {
    do {
      plVar6 = (long *)*plVar6;
    } while (plVar6[1] != uVar3);
  } while (*(int *)(plVar6 + 2) != iVar1);
  piVar7 = (int *)((long)plVar6 + 0x14);
  if (*piVar7 != iVar1) {
    piVar2 = piVar7;
    FUN_109987c68();
    *piVar7 = (int)piVar2;
  }
  return;
}



/* Entry: 109987cfc; end: 109987fcf;  */

void FUN_109987cfc(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long *unaff_x21;
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
  
  puVar2 = &uStack_90;
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == 2) {
    if (*(char *)(param_2 + 0x50) == '\x01') {
      FUN_1099406c0(&uStack_90);
    }
    else {
      FUN_109940524(&uStack_90,*(undefined1 *)(param_2 + 0x14));
    }
    *param_1 = uStack_90;
    iVar1 = *(int *)(param_2 + 0x54);
    if (0 < iVar1) {
      puVar2 = (undefined8 *)0x40;
      __Znwm();
      *puVar2 = &PTR_FUN_110b1e438;
      *(int *)(puVar2 + 1) = iVar1;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      puVar3 = (undefined8 *)0x20;
      __Znwm();
      *puVar3 = &PTR_FUN_110b1eb50;
      puVar3[1] = uStack_90;
      puVar3[2] = puVar2;
      puVar3[3] = 0;
      *param_1 = puVar3;
    }
    return;
  }
  if (iVar1 == 3) {
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
    FUN_1099a9f0c(&uStack_90,&UNK_10f59073e,99,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_88 + 0x7540,&UNK_10f59082b,0x3a);
    FUN_109365950();
  }
  else if (iVar1 == 1) {
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
    FUN_1099a9f0c(&uStack_90,&UNK_10f59073e,0x56,3,FUN_1099aa768,0);
    FUN_109365950(lStack_88 + 0x7540,&UNK_10f5907fa);
  }
  else if (iVar1 == 0) {
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
    FUN_1099a9f0c(&uStack_90,&UNK_10f59073e,0x3d,3,FUN_1099aa768,0);
    FUN_109365950(lStack_88 + 0x7540,&UNK_10f5907c6);
  }
  else {
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
    FUN_1099a9f0c(&uStack_90,&UNK_10f59073e,0x68,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_88 + 0x7540,&UNK_10f590879,0x2d);
    FUN_109365950();
  }
  func_0x0001099ab7c0(&uStack_90);
  *param_1 = 0;
  do {
    do {
      puVar4 = (undefined1 *)puVar2;
      __Unwind_Resume(puVar2);
      func_0x0001099563dc(puVar2);
      *param_1 = 0;
      puVar2 = (undefined8 *)puVar4;
    } while (unaff_x21 == (long *)0x0);
    (**(code **)(*unaff_x21 + 8))();
  } while( true );
}



/* Entry: 109987fd0; end: 10998806f;  */

long FUN_109987fd0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 109988070; end: 109988093;  */

void FUN_109988070(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010998807c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 109988094; end: 10998816b;  */

long * FUN_109988094(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plStack_d8;
  long lStack_90;
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
  
  plVar2 = &lStack_90;
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x20))();
    if ((int)plVar2 == 0) {
      (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
                (*(long **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),param_2,
                 *(undefined8 *)(param_1 + 8),param_3);
    }
    return plVar2;
  }
  lStack_90 = 0;
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
  FUN_1099a9f0c(&lStack_90,&UNK_10f59073e,0x9a,3,FUN_1099aa768,0);
  plVar4 = (long *)&UNK_10f5908a7;
  FUN_1092b4db8(lStack_88 + 0x7540,&UNK_10f5908a7,0x1e);
  func_0x0001099ab7c0();
  plVar2[3] = 0;
  plVar2[2] = 0;
  plVar2[5] = 0;
  plVar2[4] = 0;
  plVar2[7] = 0;
  plVar2[6] = 0;
  plVar2[0xb] = 0;
  plVar2[10] = 0;
  plVar2[8] = 0;
  plVar2[9] = (long)(plVar2 + 10);
  *plVar2 = (long)&PTR_FUN_110b1ebf0;
  plVar2[1] = 0x32aaaba7;
  lVar7 = plVar4[1];
  lVar6 = *plVar4;
  lVar9 = plVar4[3];
  lVar8 = plVar4[2];
  lVar5 = plVar4[4];
  plVar2[0x11] = 0;
  *(int *)(plVar2 + 0x10) = (int)lVar5;
  plVar2[0xf] = lVar9;
  plVar2[0xe] = lVar8;
  plVar2[0xd] = lVar7;
  plVar2[0xc] = lVar6;
  plVar2[0x12] = 0;
  plVar2[0x13] = 0;
  lVar5 = plVar4[6] - plVar4[5];
  if (lVar5 != 0) {
    if (lVar5 < 0) {
      FUN_10923f788();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10998829c);
      (*pcVar1)();
    }
    lVar6 = lVar5;
    __Znwm();
    plVar2[0x11] = lVar6;
    plVar2[0x12] = lVar6;
    plVar2[0x13] = lVar6 + lVar5;
    _memcpy();
    plVar2[0x12] = lVar6 + lVar5;
  }
  lVar7 = plVar4[9];
  lVar6 = plVar4[8];
  lVar9 = plVar4[0xb];
  lVar8 = plVar4[10];
  lVar5 = plVar4[0xc];
  plVar2[0x1a] = 0;
  plVar2[0x19] = 0;
  plVar2[0x18] = lVar5;
  plVar2[0x17] = lVar9;
  plVar2[0x16] = lVar8;
  plVar2[0x15] = lVar7;
  plVar2[0x14] = lVar6;
  plVar2[0x1c] = 0;
  plVar2[0x1b] = 0;
  FUN_109987cfc(&plStack_d8,plVar4);
  plVar4 = plStack_d8;
  plStack_d8 = (long *)0x0;
  plVar3 = (long *)plVar2[0x1b];
  plVar2[0x1b] = (long)plVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
    plVar4 = plStack_d8;
    plStack_d8 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  return plVar2;
}



/* Entry: 10998816c; end: 1099882ef;  */

undefined8 * FUN_10998816c(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plStack_48;
  
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
  *param_1 = &PTR_FUN_110b1ebf0;
  param_1[1] = 0x32aaaba7;
  uVar8 = param_2[1];
  uVar7 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  uVar1 = *(undefined4 *)(param_2 + 4);
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  param_1[0xf] = uVar10;
  param_1[0xe] = uVar9;
  param_1[0xd] = uVar8;
  param_1[0xc] = uVar7;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  lVar2 = param_2[6] - param_2[5];
  if (lVar2 != 0) {
    if (lVar2 < 0) {
      FUN_10923f788();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10998829c);
      (*pcVar4)();
    }
    lVar5 = lVar2;
    __Znwm();
    param_1[0x11] = lVar5;
    param_1[0x12] = lVar5;
    param_1[0x13] = lVar5 + lVar2;
    _memcpy();
    param_1[0x12] = lVar5 + lVar2;
  }
  uVar9 = param_2[9];
  uVar8 = param_2[8];
  uVar11 = param_2[0xb];
  uVar10 = param_2[10];
  uVar7 = param_2[0xc];
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = uVar7;
  param_1[0x17] = uVar11;
  param_1[0x16] = uVar10;
  param_1[0x15] = uVar9;
  param_1[0x14] = uVar8;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  FUN_109987cfc(&plStack_48,param_2);
  plVar3 = plStack_48;
  plStack_48 = (long *)0x0;
  plVar6 = (long *)param_1[0x1b];
  param_1[0x1b] = plVar3;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
    plVar3 = plStack_48;
    plStack_48 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  return param_1;
}



/* Entry: 1099882f0; end: 10998845f;  */

undefined8 * FUN_1099882f0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b1ebf0;
  lVar2 = param_1[0x1c];
  param_1[0x1c] = 0;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x18) != 0) {
      *(long *)(lVar2 + 0x20) = *(long *)(lVar2 + 0x18);
      __ZdlPv();
    }
    plVar1 = *(long **)(lVar2 + 0x10);
    *(undefined8 *)(lVar2 + 0x10) = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    __ZdlPv(lVar2);
  }
  plVar1 = (long *)param_1[0x1b];
  param_1[0x1b] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  _free(param_1[0x19]);
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110b1d718;
  FUN_1099215c8(param_1 + 9,param_1[10]);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 109988460; end: 109988ae3;  */

void FUN_109988460(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,long *param_5,
                  ulong param_6)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lStack_a8;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined1 uStack_98;
  undefined2 uStack_97;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  
  puVar3 = (undefined8 *)0x28;
  __Znwm();
  uStack_a0 = SUB84(puVar3,0);
  uStack_9c = (undefined2)((ulong)puVar3 >> 0x20);
  uStack_9a = (undefined1)((ulong)puVar3 >> 0x30);
  uStack_99 = (undefined1)((ulong)puVar3 >> 0x38);
  uStack_90 = -0x7fffffffffffffd8;
  uStack_98 = 0x21;
  uStack_97 = 0;
  uStack_95 = 0;
  uStack_94 = 0;
  *(undefined2 *)(puVar3 + 4) = 0x65;
  puVar3[1] = 0x6c6f68436c616d72;
  *puVar3 = 0x6f4e657372617053;
  puVar3[3] = 0x766c6f533a3a7265;
  puVar3[2] = 0x766c6f53796b7365;
  FUN_109997918(auStack_88,&uStack_a0);
  if (uStack_90 < 0) {
    __ZdlPv(CONCAT17(uStack_99,CONCAT16(uStack_9a,CONCAT24(uStack_9c,uStack_a0))));
  }
  puVar3 = param_1 + 2;
  *puVar3 = 0x2e73736563637553;
  *param_1 = 0xbff0000000000000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 1;
  *(undefined1 *)((long)param_1 + 0x27) = 8;
  iVar2 = *(int *)(param_3 + 0xc);
  uVar11 = (ulong)iVar2;
  uVar7 = param_6 >> 3 & 1;
  if ((long)uVar11 <= (long)uVar7) {
    uVar7 = uVar11;
  }
  if ((param_6 & 7) != 0) {
    uVar7 = uVar11;
  }
  lVar13 = uVar11 - uVar7;
  if (0 < (long)uVar7) {
    _bzero(param_6,uVar7 << 3);
  }
  lVar12 = (lVar13 - (lVar13 >> 0x3f) & 0xfffffffffffffffeU) + uVar7;
  if (1 < lVar13) {
    lVar4 = lVar12;
    if (lVar12 <= (long)(uVar7 + 2)) {
      lVar4 = uVar7 + 2;
    }
    _bzero(param_6 + uVar7 * 8,(lVar4 + ~uVar7 & 0x1ffffffffffffffe) * 8 + 0x10);
  }
  if (lVar12 < (long)uVar11) {
    _bzero(param_6 + (lVar13 / 2) * 0x10 + uVar7 * 8,(lVar13 % 2) * 8);
  }
  lVar13 = *(long *)(param_2 + 200);
  if (*(ulong *)(param_2 + 0xd0) != uVar11) {
    _free(lVar13);
    if (iVar2 < 1) {
      lVar13 = 0;
    }
    else {
      lVar13 = uVar11 << 3;
      _malloc();
      if (lVar13 == 0) {
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x109988620);
        (*pcVar1)();
      }
    }
    *(long *)(param_2 + 200) = lVar13;
  }
  *(ulong *)(param_2 + 0xd0) = uVar11;
  if (0 < iVar2) {
    _bzero(lVar13,uVar11 << 3);
  }
  FUN_10991cbf0(param_3,param_4,lVar13);
  uStack_90._7_1_ = '\v';
  uStack_98 = 0x52;
  uStack_97 = 0x5348;
  uStack_a0 = 0x706d6f43;
  uStack_9c = 0x7475;
  uStack_9a = 0x65;
  uStack_99 = 0x20;
  uStack_95 = 0;
  FUN_109997c38(auStack_88,&uStack_a0);
  if (uStack_90._7_1_ < '\0') {
    __ZdlPv(CONCAT17(uStack_99,CONCAT16(uStack_9a,CONCAT24(uStack_9c,uStack_a0))));
  }
  if (*param_5 != 0) {
    FUN_10991d9ec(&lStack_a8,*param_5,*(undefined8 *)(param_3 + 0x20));
    uStack_90._7_1_ = '\b';
    uStack_a0 = 0x67616944;
    uStack_9c = 0x6e6f;
    uStack_9a = 0x61;
    uStack_99 = 0x6c;
    uStack_98 = 0;
    FUN_109997c38(auStack_88,&uStack_a0);
    if (uStack_90._7_1_ < '\0') {
      __ZdlPv(CONCAT17(uStack_99,CONCAT16(uStack_9a,CONCAT24(uStack_9c,uStack_a0))));
    }
    FUN_10991dc80(param_3,lStack_a8);
    uStack_90._7_1_ = '\x06';
    uStack_a0 = 0x65707041;
    uStack_9c = 0x646e;
    uStack_9a = 0;
    FUN_109997c38(auStack_88,&uStack_a0);
    if (uStack_90._7_1_ < '\0') {
      __ZdlPv(CONCAT17(uStack_99,CONCAT16(uStack_9a,CONCAT24(uStack_9c,uStack_a0))));
    }
    lVar13 = lStack_a8;
    lStack_a8 = 0;
    if (lVar13 != 0) {
      plVar10 = *(long **)(lVar13 + 0x20);
      *(undefined8 *)(lVar13 + 0x20) = 0;
      if (plVar10 != (long *)0x0) {
        lVar12 = plVar10[3];
        if (lVar12 != 0) {
          lVar8 = plVar10[4];
          lVar4 = lVar12;
          if (lVar8 != lVar12) {
            do {
              if (*(long *)(lVar8 + -0x18) != 0) {
                *(long *)(lVar8 + -0x10) = *(long *)(lVar8 + -0x18);
                __ZdlPv();
              }
              lVar8 = lVar8 + -0x20;
            } while (lVar8 != lVar12);
            lVar4 = plVar10[3];
          }
          plVar10[4] = lVar12;
          __ZdlPv(lVar4);
        }
        if (*plVar10 != 0) {
          plVar10[1] = *plVar10;
          __ZdlPv();
        }
        __ZdlPv(plVar10);
      }
      lVar12 = *(long *)(lVar13 + 0x18);
      *(undefined8 *)(lVar13 + 0x18) = 0;
      if (lVar12 != 0) {
        __ZdaPv();
      }
      __ZdlPv(lVar13);
    }
  }
  uStack_90._7_1_ = '\v';
  uStack_98 = 0x6f;
  uStack_97 = 0x7377;
  uStack_a0 = 0x65707041;
  uStack_9c = 0x646e;
  uStack_9a = 0x20;
  uStack_99 = 0x52;
  uStack_95 = 0;
  FUN_109997c38(auStack_88,&uStack_a0);
  if (uStack_90._7_1_ < '\0') {
    __ZdlPv(CONCAT17(uStack_99,CONCAT16(uStack_9a,CONCAT24(uStack_9c,uStack_a0))));
  }
  lVar13 = *(long *)(param_2 + 0xe0);
  if (lVar13 == 0) {
    plVar10 = *(long **)(param_2 + 0xd8);
    (**(code **)(*plVar10 + 0x10))();
    FUN_1099536d4(&uStack_a0,param_3,0,
                  (ulong)(*(long *)(*(long *)(param_3 + 0x20) + 0x20) -
                         *(long *)(*(long *)(param_3 + 0x20) + 0x18)) >> 5,plVar10);
    uVar9 = CONCAT17(uStack_99,CONCAT16(uStack_9a,CONCAT24(uStack_9c,uStack_a0)));
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_9a = 0;
    uStack_99 = 0;
    lVar13 = *(long *)(param_2 + 0xe0);
    *(undefined8 *)(param_2 + 0xe0) = uVar9;
    if (lVar13 != 0) {
      if (*(long *)(lVar13 + 0x18) != 0) {
        *(long *)(lVar13 + 0x20) = *(long *)(lVar13 + 0x18);
        __ZdlPv();
      }
      plVar10 = *(long **)(lVar13 + 0x10);
      *(undefined8 *)(lVar13 + 0x10) = 0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 8))();
      }
      __ZdlPv(lVar13);
      lVar13 = CONCAT17(uStack_99,CONCAT16(uStack_9a,CONCAT24(uStack_9c,uStack_a0)));
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_9a = 0;
      uStack_99 = 0;
      if (lVar13 != 0) {
        if (*(long *)(lVar13 + 0x18) != 0) {
          *(long *)(lVar13 + 0x20) = *(long *)(lVar13 + 0x18);
          __ZdlPv();
        }
        plVar10 = *(long **)(lVar13 + 0x10);
        *(undefined8 *)(lVar13 + 0x10) = 0;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 8))();
        }
        __ZdlPv(lVar13);
      }
    }
    puVar5 = (undefined8 *)0x20;
    __Znwm();
    uStack_a0 = SUB84(puVar5,0);
    uStack_9c = (undefined2)((ulong)puVar5 >> 0x20);
    uStack_9a = (undefined1)((ulong)puVar5 >> 0x30);
    uStack_99 = (undefined1)((ulong)puVar5 >> 0x38);
    uStack_90._0_7_ = 0x20;
    uStack_90._7_1_ = -0x80;
    uStack_98 = 0x1c;
    uStack_97 = 0;
    uStack_95 = 0;
    uStack_94 = 0;
    puVar5[1] = 0x706d6f4374637564;
    *puVar5 = 0x6f725072656e6e49;
    *(undefined8 *)((long)puVar5 + 0x14) = 0x6574616572433a3a;
    *(undefined8 *)((long)puVar5 + 0xc) = 0x72657475706d6f43;
    *(undefined1 *)((long)puVar5 + 0x1c) = 0;
    FUN_109997c38(auStack_88,&uStack_a0);
    if (uStack_90._7_1_ < '\0') {
      __ZdlPv(CONCAT17(uStack_99,CONCAT16(uStack_9a,CONCAT24(uStack_9c,uStack_a0))));
    }
    lVar13 = *(long *)(param_2 + 0xe0);
  }
  FUN_109954128(lVar13);
  puVar5 = (undefined8 *)0x20;
  __Znwm();
  uStack_a0 = SUB84(puVar5,0);
  uStack_9c = (undefined2)((ulong)puVar5 >> 0x20);
  uStack_9a = (undefined1)((ulong)puVar5 >> 0x30);
  uStack_99 = (undefined1)((ulong)puVar5 >> 0x38);
  uStack_90 = -0x7fffffffffffffe0;
  uStack_98 = 0x1d;
  uStack_97 = 0;
  uStack_95 = 0;
  uStack_94 = 0;
  puVar5[1] = 0x706d6f4374637564;
  *puVar5 = 0x6f725072656e6e49;
  *(undefined8 *)((long)puVar5 + 0x15) = 0x657475706d6f433a;
  *(undefined8 *)((long)puVar5 + 0xd) = 0x3a72657475706d6f;
  *(undefined1 *)((long)puVar5 + 0x1d) = 0;
  FUN_109997c38(auStack_88,&uStack_a0);
  if (uStack_90 < 0) {
    __ZdlPv(CONCAT17(uStack_99,CONCAT16(uStack_9a,CONCAT24(uStack_9c,uStack_a0))));
  }
  if (*param_5 != 0) {
    FUN_10991e138(param_3,(ulong)((*(long **)(param_3 + 0x20))[1] - **(long **)(param_3 + 0x20)) >>
                          3);
  }
  plVar10 = *(long **)(param_2 + 0xd8);
  uVar9 = *(undefined8 *)(param_2 + 200);
  plVar6 = plVar10;
  (**(code **)(*plVar10 + 0x18))(plVar10,*(undefined8 *)(*(long *)(param_2 + 0xe0) + 0x10),puVar3);
  iVar2 = (int)plVar6;
  if (iVar2 == 0) {
    (**(code **)(*plVar10 + 0x20))(plVar10,uVar9,param_6,puVar3);
    iVar2 = (int)plVar10;
  }
  *(int *)((long)param_1 + 0xc) = iVar2;
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  uStack_a0 = SUB84(puVar3,0);
  uStack_9c = (undefined2)((ulong)puVar3 >> 0x20);
  uStack_9a = (undefined1)((ulong)puVar3 >> 0x30);
  uStack_99 = (undefined1)((ulong)puVar3 >> 0x38);
  uStack_90 = -0x7fffffffffffffe0;
  uStack_98 = 0x1e;
  uStack_97 = 0;
  uStack_95 = 0;
  uStack_94 = 0;
  puVar3[1] = 0x3a3a796b73656c6f;
  *puVar3 = 0x6843657372617053;
  *(undefined8 *)((long)puVar3 + 0x16) = 0x65766c6f53646e41;
  *(undefined8 *)((long)puVar3 + 0xe) = 0x726f746361463a3a;
  *(undefined1 *)((long)puVar3 + 0x1e) = 0;
  FUN_109997c38(auStack_88,&uStack_a0);
  if (uStack_90 < 0) {
    __ZdlPv(CONCAT17(uStack_99,CONCAT16(uStack_9a,CONCAT24(uStack_9c,uStack_a0))));
  }
  FUN_109997a28(auStack_88);
  return;
}



/* Entry: 109988ae4; end: 109988e2b;  */

void FUN_109988ae4(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_468 [1024];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = auStack_468;
  _vsnprintf(puVar6,0x400,param_2,param_3);
  uVar4 = (uint)puVar6;
  uVar10 = (ulong)(int)uVar4;
  if (uVar4 < 0x400) {
    cVar2 = *(char *)((long)param_1 + 0x17);
    uVar9 = (ulong)cVar2;
    if ((long)uVar9 < 0) {
      uVar9 = param_1[1];
      uVar13 = (param_1[2] & 0x7fffffffffffffff) - 1;
    }
    else {
      uVar13 = 0x16;
    }
    if (uVar10 <= uVar13 - uVar9) {
      if (uVar4 != 0) {
        puVar11 = param_1;
        if (cVar2 < '\0') {
          puVar11 = (ulong *)*param_1;
        }
        _memmove((long)puVar11 + uVar9,auStack_468,uVar10);
        uVar9 = uVar9 + uVar10;
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          param_1[1] = uVar9;
        }
        else {
          *(byte *)((long)param_1 + 0x17) = (byte)uVar9 & 0x7f;
        }
        puVar6 = (undefined1 *)((long)puVar11 + uVar9);
        goto LAB_109988dc0;
      }
      goto LAB_109988ddc;
    }
    uVar14 = uVar9 + uVar10;
    if (uVar14 - uVar13 <= 0x7ffffffffffffff6 - uVar13) {
      puVar11 = param_1;
      if (cVar2 < '\0') {
        puVar11 = (ulong *)*param_1;
      }
      if (uVar13 < 0x3ffffffffffffff3) {
        uVar7 = uVar14;
        if (uVar14 <= uVar13 * 2) {
          uVar7 = uVar13 << 1;
        }
        uVar8 = 0x19;
        if ((uVar7 | 7) != 0x17) {
          uVar8 = (uVar7 | 7) + 1;
        }
        uVar12 = 0x17;
        if (0x16 < uVar7) {
          uVar12 = uVar8;
        }
      }
      else {
        uVar12 = 0x7ffffffffffffff7;
      }
      uVar7 = uVar12;
      __Znwm();
      if (uVar9 != 0) {
        _memmove(uVar7,puVar11,uVar9);
      }
      _memcpy(uVar7 + uVar9,auStack_468,uVar10);
      if (uVar13 != 0x16) {
        __ZdlPv(puVar11);
      }
      param_1[1] = uVar14;
      param_1[2] = uVar12 | 0x8000000000000000;
      *param_1 = uVar7;
      puVar6 = (undefined1 *)(uVar7 + uVar14);
LAB_109988dc0:
      *puVar6 = 0;
      goto LAB_109988ddc;
    }
  }
  else {
    uVar9 = (ulong)(int)(uVar4 + 1);
    __Znam();
    uVar10 = uVar9;
    _vsnprintf();
    iVar5 = (int)uVar10;
    if ((-1 < iVar5) && (iVar5 <= (int)uVar4)) {
      uVar10 = uVar10 & 0xffffffff;
      cVar2 = *(char *)((long)param_1 + 0x17);
      uVar13 = (ulong)cVar2;
      if ((long)uVar13 < 0) {
        uVar13 = param_1[1];
        uVar14 = (param_1[2] & 0x7fffffffffffffff) - 1;
      }
      else {
        uVar14 = 0x16;
      }
      if (uVar14 - uVar13 < uVar10) {
        uVar12 = uVar13 + uVar10;
        if (0x7ffffffffffffff6 - uVar14 < uVar12 - uVar14) {
          func_0x000104c4f6b8();
          goto LAB_109988e24;
        }
        puVar11 = param_1;
        if (cVar2 < '\0') {
          puVar11 = (ulong *)*param_1;
        }
        if (uVar14 < 0x3ffffffffffffff3) {
          uVar8 = uVar12;
          if (uVar12 <= uVar14 * 2) {
            uVar8 = uVar14 << 1;
          }
          uVar1 = 0x19;
          if ((uVar8 | 7) != 0x17) {
            uVar1 = (uVar8 | 7) + 1;
          }
          uVar7 = 0x17;
          if (0x16 < uVar8) {
            uVar7 = uVar1;
          }
        }
        else {
          uVar7 = 0x7ffffffffffffff7;
        }
        uVar8 = uVar7;
        __Znwm();
        if (uVar13 != 0) {
          _memmove(uVar8,puVar11,uVar13);
        }
        _memcpy(uVar8 + uVar13,uVar9,uVar10);
        if (uVar14 != 0x16) {
          __ZdlPv(puVar11);
        }
        param_1[1] = uVar12;
        param_1[2] = uVar7 | 0x8000000000000000;
        *param_1 = uVar8;
        puVar6 = (undefined1 *)(uVar8 + uVar12);
      }
      else {
        if (iVar5 == 0) goto LAB_109988dd4;
        puVar11 = param_1;
        if (cVar2 < '\0') {
          puVar11 = (ulong *)*param_1;
        }
        _memmove((long)puVar11 + uVar13,uVar9,uVar10);
        uVar13 = uVar13 + uVar10;
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          param_1[1] = uVar13;
        }
        else {
          *(byte *)((long)param_1 + 0x17) = (byte)uVar13 & 0x7f;
        }
        puVar6 = (undefined1 *)((long)puVar11 + uVar13);
      }
      *puVar6 = 0;
    }
LAB_109988dd4:
    __ZdaPv(uVar9);
LAB_109988ddc:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x000104c4f6b8();
LAB_109988e24:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109988e28);
  (*pcVar3)();
}



/* Entry: 109988e2c; end: 109988e8b;  */

void FUN_109988e2c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_109988ae4(param_1,param_2,&stack0x00000000);
  return;
}



/* Entry: 109988e8c; end: 109988eb3;  */

void FUN_109988e8c(undefined8 param_1,undefined8 param_2)

{
  FUN_109988ae4(param_1,param_2,&stack0x00000000);
  return;
}



/* Entry: 109988eb4; end: 1099890c7;  */

long * FUN_109988eb4(long *param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lStack_b8;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined4 uStack_a8;
  undefined1 uStack_a4;
  undefined2 uStack_a3;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_64;
  undefined8 uStack_58;
  long *plStack_50;
  undefined4 uStack_44;
  
  *param_1 = (long)&PTR_FUN_110b1ec40;
  lVar7 = param_2[1];
  lVar5 = *param_2;
  param_1[3] = param_2[2];
  param_1[2] = lVar7;
  param_1[1] = lVar5;
  plVar4 = param_1 + 4;
  *plVar4 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar5 = param_2[3];
  param_1[5] = param_2[4];
  *plVar4 = lVar5;
  param_1[6] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  lVar7 = param_2[7];
  lVar5 = param_2[6];
  param_1[9] = param_2[8];
  param_1[8] = lVar7;
  param_1[7] = lVar5;
  uVar1 = *(undefined4 *)(param_3 + 0xc);
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 10) = uVar1;
  plVar6 = param_1 + 0xb;
  *plVar6 = 0;
  lStack_b8 = CONCAT44(lStack_b8._4_4_,*(int *)((long)param_1 + 0x14));
  uStack_44 = 0;
  if (*(int *)((long)param_1 + 0x14) < 0) {
    plVar2 = &lStack_b8;
    FUN_109904144(plVar2,&uStack_44,&UNK_10f59095a);
    plStack_50 = plVar2;
    if (plVar2 != (long *)0x0) {
      FUN_1099aa6cc(&lStack_b8,&UNK_10f59098e,0x31,&plStack_50);
      FUN_109365950(CONCAT17(uStack_a9,uStack_b0) + 0x7540,&UNK_10f58dded);
      plVar2 = &lStack_b8;
      func_0x0001099ab7c0();
      FUN_1099540cc(param_1 + 0xc);
      plVar3 = (long *)*plVar6;
      *plVar6 = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      if (*plVar4 != 0) {
        param_1[5] = *plVar4;
        __ZdlPv();
      }
      __Unwind_Resume();
      *plVar2 = (long)&PTR_FUN_110b1ec40;
      lVar5 = plVar2[0xc];
      plVar2[0xc] = 0;
      if (lVar5 != 0) {
        if (*(long *)(lVar5 + 0x18) != 0) {
          *(long *)(lVar5 + 0x20) = *(long *)(lVar5 + 0x18);
          __ZdlPv();
        }
        plVar4 = *(long **)(lVar5 + 0x10);
        *(undefined8 *)(lVar5 + 0x10) = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        __ZdlPv(lVar5);
      }
      plVar4 = (long *)plVar2[0xb];
      plVar2[0xb] = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (plVar2[4] != 0) {
        plVar2[5] = plVar2[4];
        __ZdlPv();
      }
      return plVar2;
    }
  }
  lStack_b8 = 0x100000002;
  uStack_a3 = 0;
  uStack_b0 = 0;
  uStack_a9 = 0;
  uStack_a0 = 0x100000001;
  uStack_98 = 1;
  lStack_90 = 0;
  uStack_80 = 0;
  lStack_88 = 0;
  uStack_70 = 0xffffffffffffffff;
  uStack_78 = 0xffffffff0000000a;
  uStack_68 = 0;
  uStack_64 = 0xffffffff00000000;
  uStack_58 = 0;
  uStack_a8 = (undefined4)param_1[2];
  uStack_a4 = (undefined1)param_1[3];
  FUN_109987cfc(&plStack_50,&lStack_b8);
  plVar4 = plStack_50;
  plStack_50 = (long *)0x0;
  plVar2 = (long *)*plVar6;
  *plVar6 = (long)plVar4;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    plVar4 = plStack_50;
    plStack_50 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1099890c8; end: 1099891e7;  */

undefined8 * FUN_1099890c8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b1ec40;
  lVar2 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x18) != 0) {
      *(long *)(lVar2 + 0x20) = *(long *)(lVar2 + 0x18);
      __ZdlPv();
    }
    plVar1 = *(long **)(lVar2 + 0x10);
    *(undefined8 *)(lVar2 + 0x10) = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    __ZdlPv(lVar2);
  }
  plVar1 = (long *)param_1[0xb];
  param_1[0xb] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1099891e8; end: 10998931b;  */

/* WARNING: Removing unreachable block (ram,0x000109989588) */

long * FUN_1099891e8(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long **pplVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  pplVar3 = &plStack_80;
  if (param_2 == 0) {
    plStack_80 = (long *)0x0;
    uStack_28 = 0;
    uStack_68 = 0;
    lStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = 0;
    FUN_1099a9f0c(&plStack_80,&UNK_10f59098e,0x3e,3,FUN_1099aa768,0);
    puVar6 = &UNK_10f58a243;
    lVar7 = 0x1b;
    FUN_1092b4db8(lStack_78 + 0x7540);
  }
  else {
    if (param_3 != 0) {
      plStack_80 = (long *)0x0;
      lStack_78 = 0;
      lStack_70 = 0;
      plVar2 = *(long **)(param_1 + 0x58);
      (**(code **)(*plVar2 + 0x20))();
      if (lStack_70 < 0) {
        __ZdlPv(plStack_80);
        plVar2 = plStack_80;
      }
      return plVar2;
    }
    plStack_80 = (long *)0x0;
    uStack_28 = 0;
    uStack_68 = 0;
    lStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = 0;
    FUN_1099a9f0c(&plStack_80,&UNK_10f59098e,0x3f,3,FUN_1099aa768,0);
    puVar6 = &UNK_10f58a25f;
    lVar7 = 0x1b;
    FUN_1092b4db8(lStack_78 + 0x7540);
  }
  func_0x0001099ab7c0();
  plVar2 = *(long **)(puVar6 + 0x20);
  if (lVar7 != 0) {
    FUN_10991d9ec(&lStack_148,lVar7,plVar2);
    FUN_10991dc80(puVar6,lStack_148);
    lVar5 = lStack_148;
    lStack_148 = 0;
    if (lVar5 != 0) {
      plVar8 = *(long **)(lVar5 + 0x20);
      *(undefined8 *)(lVar5 + 0x20) = 0;
      if (plVar8 != (long *)0x0) {
        lVar9 = plVar8[3];
        if (lVar9 != 0) {
          lVar10 = plVar8[4];
          lVar4 = lVar9;
          if (lVar10 != lVar9) {
            do {
              if (*(long *)(lVar10 + -0x18) != 0) {
                *(long *)(lVar10 + -0x10) = *(long *)(lVar10 + -0x18);
                __ZdlPv();
              }
              lVar10 = lVar10 + -0x20;
            } while (lVar10 != lVar9);
            lVar4 = plVar8[3];
          }
          plVar8[4] = lVar9;
          __ZdlPv(lVar4);
        }
        if (*plVar8 != 0) {
          plVar8[1] = *plVar8;
          __ZdlPv();
        }
        __ZdlPv(plVar8);
      }
      lVar9 = *(long *)(lVar5 + 0x18);
      *(undefined8 *)(lVar5 + 0x18) = 0;
      if (lVar9 != 0) {
        __ZdaPv();
      }
      __ZdlPv(lVar5);
    }
  }
  lVar5 = *(long *)((long)pplVar3 + 0x60);
  if (lVar5 == 0) {
    uVar1 = *(undefined4 *)((long)pplVar3 + 0x14);
    lVar5 = plVar2[3];
    lVar9 = plVar2[4];
    plVar8 = *(long **)((long)pplVar3 + 0x58);
    (**(code **)(*plVar8 + 0x10))();
    FUN_1099536d4(&lStack_148,puVar6,uVar1,(ulong)(lVar9 - lVar5) >> 5,plVar8);
    lVar5 = lStack_148;
    lStack_148 = 0;
    lVar9 = *(long *)((long)pplVar3 + 0x60);
    *(long *)((long)pplVar3 + 0x60) = lVar5;
    if (lVar9 != 0) {
      if (*(long *)(lVar9 + 0x18) != 0) {
        *(long *)(lVar9 + 0x20) = *(long *)(lVar9 + 0x18);
        __ZdlPv();
      }
      plVar8 = *(long **)(lVar9 + 0x10);
      *(undefined8 *)(lVar9 + 0x10) = 0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
      __ZdlPv(lVar9);
      lVar5 = lStack_148;
      lStack_148 = 0;
      if (lVar5 != 0) {
        if (*(long *)(lVar5 + 0x18) != 0) {
          *(long *)(lVar5 + 0x20) = *(long *)(lVar5 + 0x18);
          __ZdlPv();
        }
        plVar8 = *(long **)(lVar5 + 0x10);
        *(undefined8 *)(lVar5 + 0x10) = 0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        __ZdlPv(lVar5);
      }
    }
    lVar5 = *(long *)((long)pplVar3 + 0x60);
  }
  FUN_109954128(lVar5);
  if (lVar7 != 0) {
    FUN_10991e138(puVar6,(ulong)(plVar2[1] - *plVar2) >> 3);
  }
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_e8 = 0;
  plVar2 = *(long **)((long)pplVar3 + 0x58);
  (**(code **)(*plVar2 + 0x18))
            (plVar2,*(undefined8 *)(*(long *)((long)pplVar3 + 0x60) + 0x10),&uStack_e8);
  if ((int)plVar2 != 0) {
    lStack_148 = 0;
    uStack_f0 = 0;
    uStack_130 = 0;
    uStack_138 = 0;
    uStack_120 = 0;
    uStack_128 = 0;
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_f8 = 0;
    FUN_1099a9f0c(&lStack_148,&UNK_10f59098e,0x6e,2,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_140 + 0x7540,&UNK_10f590a1c,0x25);
    FUN_1092b4db8();
    FUN_1099ab3b0(&lStack_148);
  }
  return (long *)(ulong)((int)plVar2 == 0);
}



/* Entry: 10998931c; end: 1099895f3;  */

/* WARNING: Removing unreachable block (ram,0x000109989588) */

bool FUN_10998931c(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar4 = *(long **)(param_2 + 0x20);
  if (param_3 != 0) {
    FUN_10991d9ec(&lStack_c8,param_3,plVar4);
    FUN_10991dc80(param_2,lStack_c8);
    lVar3 = lStack_c8;
    lStack_c8 = 0;
    if (lVar3 != 0) {
      plVar5 = *(long **)(lVar3 + 0x20);
      *(undefined8 *)(lVar3 + 0x20) = 0;
      if (plVar5 != (long *)0x0) {
        lVar6 = plVar5[3];
        if (lVar6 != 0) {
          lVar7 = plVar5[4];
          lVar2 = lVar6;
          if (lVar7 != lVar6) {
            do {
              if (*(long *)(lVar7 + -0x18) != 0) {
                *(long *)(lVar7 + -0x10) = *(long *)(lVar7 + -0x18);
                __ZdlPv();
              }
              lVar7 = lVar7 + -0x20;
            } while (lVar7 != lVar6);
            lVar2 = plVar5[3];
          }
          plVar5[4] = lVar6;
          __ZdlPv(lVar2);
        }
        if (*plVar5 != 0) {
          plVar5[1] = *plVar5;
          __ZdlPv();
        }
        __ZdlPv(plVar5);
      }
      lVar6 = *(long *)(lVar3 + 0x18);
      *(undefined8 *)(lVar3 + 0x18) = 0;
      if (lVar6 != 0) {
        __ZdaPv();
      }
      __ZdlPv(lVar3);
    }
  }
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar3 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    lVar3 = plVar4[3];
    lVar6 = plVar4[4];
    plVar5 = *(long **)(param_1 + 0x58);
    (**(code **)(*plVar5 + 0x10))();
    FUN_1099536d4(&lStack_c8,param_2,uVar1,(ulong)(lVar6 - lVar3) >> 5,plVar5);
    lVar3 = lStack_c8;
    lStack_c8 = 0;
    lVar6 = *(long *)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = lVar3;
    if (lVar6 != 0) {
      if (*(long *)(lVar6 + 0x18) != 0) {
        *(long *)(lVar6 + 0x20) = *(long *)(lVar6 + 0x18);
        __ZdlPv();
      }
      plVar5 = *(long **)(lVar6 + 0x10);
      *(undefined8 *)(lVar6 + 0x10) = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      __ZdlPv(lVar6);
      lVar3 = lStack_c8;
      lStack_c8 = 0;
      if (lVar3 != 0) {
        if (*(long *)(lVar3 + 0x18) != 0) {
          *(long *)(lVar3 + 0x20) = *(long *)(lVar3 + 0x18);
          __ZdlPv();
        }
        plVar5 = *(long **)(lVar3 + 0x10);
        *(undefined8 *)(lVar3 + 0x10) = 0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))();
        }
        __ZdlPv(lVar3);
      }
    }
    lVar3 = *(long *)(param_1 + 0x60);
  }
  FUN_109954128(lVar3);
  if (param_3 != 0) {
    FUN_10991e138(param_2,(ulong)(plVar4[1] - *plVar4) >> 3);
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  plVar4 = *(long **)(param_1 + 0x58);
  (**(code **)(*plVar4 + 0x18))(plVar4,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10),&uStack_68)
  ;
  if ((int)plVar4 != 0) {
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
    FUN_1099a9f0c(&lStack_c8,&UNK_10f59098e,0x6e,2,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_c0 + 0x7540,&UNK_10f590a1c,0x25);
    FUN_1092b4db8();
    FUN_1099ab3b0(&lStack_c8);
  }
  return (int)plVar4 == 0;
}



/* Entry: 1099895f4; end: 109989603;  */

undefined4 FUN_1099895f4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



/* Entry: 109989604; end: 1099896d3;  */

void FUN_109989604(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = *(undefined8 **)(param_1 + 0x78);
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x98) = 0;
  lVar3 = (long)puVar1 - (long)puVar5;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar5);
    puVar1 = *(undefined8 **)(param_1 + 0x80);
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x78) + 8);
    *(undefined8 **)(param_1 + 0x78) = puVar5;
    lVar3 = (long)puVar1 - (long)puVar5;
  }
  if (uVar2 == 1) {
    uVar4 = 0x200;
  }
  else {
    if (uVar2 != 2) goto LAB_109989674;
    uVar4 = 0x400;
  }
  *(undefined8 *)(param_1 + 0x90) = uVar4;
LAB_109989674:
  if (puVar5 != puVar1) {
    do {
      puVar6 = puVar5 + 1;
      __ZdlPv(*puVar5);
      puVar5 = puVar6;
    } while (puVar6 != puVar1);
    lVar3 = *(long *)(param_1 + 0x80);
    if (lVar3 != *(long *)(param_1 + 0x78)) {
      *(ulong *)(param_1 + 0x80) =
           lVar3 + ((*(long *)(param_1 + 0x78) - lVar3) + 7U & 0xfffffffffffffff8);
    }
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    __ZdlPv();
  }
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 1099896d4; end: 1099897f7;  */

undefined8 * FUN_1099896d4(undefined8 *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  
  *param_1 = 0x32aaaba7;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0x3cb0b1bb;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  if (0 < param_2) {
    iVar5 = 0;
    do {
      __ZNSt3__15mutex4lockEv(param_1);
      lVar2 = param_1[0xf];
      uVar1 = 0;
      if (param_1[0x10] != lVar2) {
        uVar1 = (param_1[0x10] - lVar2) * 0x80 - 1;
      }
      lVar3 = param_1[0x13];
      uVar4 = lVar3 + param_1[0x12];
      if (uVar1 == uVar4) {
        func_0x000108a55518(param_1 + 0xe);
        lVar2 = param_1[0xf];
        lVar3 = param_1[0x13];
        uVar4 = param_1[0x12] + lVar3;
      }
      *(int *)(*(long *)(lVar2 + (uVar4 >> 10) * 8) + (uVar4 & 0x3ff) * 4) = iVar5;
      param_1[0x13] = lVar3 + 1;
      __ZNSt3__118condition_variable10notify_oneEv(param_1 + 8);
      __ZNSt3__15mutex6unlockEv(param_1);
      iVar5 = iVar5 + 1;
    } while (param_2 != iVar5);
  }
  return param_1;
}



/* Entry: 1099897f8; end: 109989933;  */

undefined1 * FUN_1099897f8(long param_1)

{
  bool bVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *unaff_x20;
  long lStack_80;
  char cStack_78;
  undefined7 uStack_77;
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
  
  plVar2 = &lStack_80;
  cStack_78 = '\x01';
  lStack_80 = param_1;
  __ZNSt3__15mutex4lockEv();
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    do {
      lVar4 = *(long *)(param_1 + 0x98);
      if (lVar4 != 0) goto LAB_10998984c;
      __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(param_1 + 0x40,&lStack_80);
    } while ((*(byte *)(param_1 + 0xa0) & 1) != 0);
  }
  lVar4 = *(long *)(param_1 + 0x98);
  if (lVar4 == 0) {
    bVar1 = false;
  }
  else {
LAB_10998984c:
    uVar6 = *(ulong *)(param_1 + 0x90);
    unaff_x20 = (undefined1 *)
                (ulong)*(uint *)((*(undefined8 **)(param_1 + 0x78))[uVar6 >> 10] +
                                (uVar6 & 0x3ff) * 4);
    *(ulong *)(param_1 + 0x90) = uVar6 + 1;
    *(long *)(param_1 + 0x98) = lVar4 + -1;
    if (0x7ff < uVar6 + 1) {
      __ZdlPv(**(undefined8 **)(param_1 + 0x78));
      *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 8;
      *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + -0x400;
    }
    bVar1 = true;
  }
  if (cStack_78 == '\x01') {
    __ZNSt3__15mutex6unlockEv(lStack_80);
  }
  if (bVar1) {
    return unaff_x20;
  }
  lStack_80 = 0;
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
  FUN_1099a9f0c(&lStack_80,&UNK_10f590a42,0x3c,3,FUN_1099aa768,0);
  uVar3 = 0xf590ad0;
  FUN_1092b4db8(CONCAT71(uStack_77,cStack_78) + 0x7540,&UNK_10f590ad0,0x25);
  func_0x0001099ab7c0();
  __ZNSt3__15mutex4lockEv();
  lVar4 = *(long *)((long)plVar2 + 0x78);
  uVar6 = 0;
  if (*(long *)((long)plVar2 + 0x80) != lVar4) {
    uVar6 = (*(long *)((long)plVar2 + 0x80) - lVar4) * 0x80 - 1;
  }
  lVar5 = *(long *)((long)plVar2 + 0x98);
  uVar7 = lVar5 + *(long *)((long)plVar2 + 0x90);
  if (uVar6 == uVar7) {
    func_0x000108a55518((undefined1 *)((long)plVar2 + 0x70));
    lVar4 = *(long *)((long)plVar2 + 0x78);
    lVar5 = *(long *)((long)plVar2 + 0x98);
    uVar7 = *(long *)((long)plVar2 + 0x90) + lVar5;
  }
  *(undefined4 *)(*(long *)(lVar4 + (uVar7 >> 10) * 8) + (uVar7 & 0x3ff) * 4) = uVar3;
  *(long *)((long)plVar2 + 0x98) = lVar5 + 1;
  __ZNSt3__118condition_variable10notify_oneEv((undefined1 *)((long)plVar2 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(plVar2);
  return (undefined1 *)plVar2;
}



/* Entry: 109989934; end: 1099899cb;  */

void FUN_109989934(long param_1,undefined4 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  __ZNSt3__15mutex4lockEv();
  lVar2 = *(long *)(param_1 + 0x78);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x80) != lVar2) {
    uVar1 = (*(long *)(param_1 + 0x80) - lVar2) * 0x80 - 1;
  }
  lVar3 = *(long *)(param_1 + 0x98);
  uVar4 = lVar3 + *(long *)(param_1 + 0x90);
  if (uVar1 == uVar4) {
    func_0x000108a55518(param_1 + 0x70);
    lVar2 = *(long *)(param_1 + 0x78);
    lVar3 = *(long *)(param_1 + 0x98);
    uVar4 = *(long *)(param_1 + 0x90) + lVar3;
  }
  *(undefined4 *)(*(long *)(lVar2 + (uVar4 >> 10) * 8) + (uVar4 & 0x3ff) * 4) = param_2;
  *(long *)(param_1 + 0x98) = lVar3 + 1;
  __ZNSt3__118condition_variable10notify_oneEv(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1);
  return;
}



/* Entry: 1099899cc; end: 109989a6b;  */

long FUN_1099899cc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar1 != 0) {
    __ZdaPv();
  }
  lVar1 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar1 != 0) {
    __ZdaPv();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar1 != 0) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 109989a6c; end: 109989c9f;  */

int * FUN_109989a6c(int *param_1,int param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  int aiStack_158 [2];
  long lStack_150;
  int *piStack_f8;
  int aiStack_b0 [24];
  undefined1 *puStack_50;
  undefined4 uStack_44;
  
  piVar7 = aiStack_b0;
  piVar8 = aiStack_b0;
  piVar5 = aiStack_b0;
  piVar6 = aiStack_b0;
  *(undefined ***)param_1 = &PTR_FUN_110b1eca8;
  iVar9 = (int)param_3;
  param_1[2] = param_2;
  param_1[3] = iVar9;
  param_1[4] = param_4;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  uStack_44 = 0;
  if ((param_2 < 0) &&
     (aiStack_b0[0] = param_2, FUN_109904144(aiStack_b0,&uStack_44,&UNK_10f590af6),
     puStack_50 = (undefined1 *)piVar7, piVar7 != (int *)0x0)) {
    puVar10 = &UNK_10f590b04;
    FUN_1099ab8e4(aiStack_b0,&UNK_10f590b04,0x3a,&puStack_50);
  }
  else {
    uStack_44 = 0;
    if ((iVar9 < 0) &&
       (aiStack_b0[0] = iVar9, FUN_109904144(aiStack_b0,&uStack_44,&UNK_10f590b92),
       puStack_50 = (undefined1 *)piVar8, piVar8 != (int *)0x0)) {
      puVar10 = &UNK_10f590b04;
      FUN_1099ab8e4(aiStack_b0,&UNK_10f590b04,0x3b,&puStack_50);
    }
    else {
      uStack_44 = 0;
      aiStack_b0[0] = param_4;
      if ((-1 < param_4) ||
         (FUN_109904144(aiStack_b0,&uStack_44,&UNK_10f590ba0), puStack_50 = (undefined1 *)piVar5,
         piVar5 == (int *)0x0)) {
        uVar13 = param_1[4];
        uVar14 = -(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar13 << 2;
        uVar11 = uVar14;
        if ((int)uVar13 < 0) {
          uVar11 = 0xffffffffffffffff;
        }
        __Znam();
        _bzero();
        lVar3 = *(long *)(param_1 + 6);
        *(ulong *)(param_1 + 6) = uVar11;
        if (lVar3 != 0) {
          __ZdaPv();
          uVar13 = param_1[4];
          uVar14 = -(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar13 << 2;
        }
        if ((int)uVar13 < 0) {
          uVar14 = 0xffffffffffffffff;
        }
        __Znam();
        _bzero();
        lVar3 = *(long *)(param_1 + 8);
        *(ulong *)(param_1 + 8) = uVar14;
        if (lVar3 != 0) {
          __ZdaPv();
          uVar13 = param_1[4];
        }
        lVar3 = (long)(int)uVar13 << 3;
        if ((int)uVar13 < 0) {
          lVar3 = -1;
        }
        __Znam();
        _bzero();
        lVar4 = *(long *)(param_1 + 10);
        *(long *)(param_1 + 10) = lVar3;
        if (lVar4 != 0) {
          __ZdaPv();
        }
        return param_1;
      }
      puVar10 = &UNK_10f590b04;
      FUN_1099ab8e4(aiStack_b0,&UNK_10f590b04,0x3c,&puStack_50);
    }
  }
  func_0x0001099ab7c0();
  lVar3 = *(long *)(param_1 + 10);
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (lVar3 != 0) {
    __ZdaPv();
  }
  lVar3 = *(long *)(param_1 + 8);
  param_1[8] = 0;
  param_1[9] = 0;
  if (lVar3 != 0) {
    __ZdaPv();
  }
  lVar3 = *(long *)(param_1 + 6);
  param_1[6] = 0;
  param_1[7] = 0;
  if (lVar3 != 0) {
    __ZdaPv();
  }
  __Unwind_Resume();
  aiStack_158[0] = piVar6[5];
  iVar9 = (int)puVar10;
  piStack_f8 = (int *)CONCAT44(piStack_f8._4_4_,iVar9);
  piVar7 = piVar6;
  if (iVar9 < aiStack_158[0]) {
    piVar8 = aiStack_158;
    FUN_109904144(piVar8,&piStack_f8,&UNK_10f590bb6);
    piVar7 = (int *)0x0;
    piStack_f8 = piVar8;
    if (piVar8 != (int *)0x0) {
      FUN_1099aa6cc(aiStack_158,&UNK_10f590b04,0x79,&piStack_f8);
      FUN_109365950(lStack_150 + 0x7540,&UNK_10f590bdc);
      piVar7 = aiStack_158;
      func_0x0001099ab7c0();
      __ZdaPv();
      __ZdaPv(param_3);
      __Unwind_Resume();
      piVar8 = piVar7;
      if (0 < piVar7[4]) {
        piVar8 = *(int **)(piVar7 + 10);
        _bzero(piVar8,(ulong)(uint)piVar7[4] << 3);
      }
      piVar7[5] = 0;
      return piVar8;
    }
  }
  if (iVar9 <= piVar6[4]) {
    return piVar7;
  }
  uVar11 = -((ulong)puVar10 >> 0x1f & 1) & 0xfffffffc00000000 | ((ulong)puVar10 & 0xffffffff) << 2;
  if (iVar9 < 0) {
    uVar11 = 0xffffffffffffffff;
  }
  uVar14 = uVar11;
  __Znam();
  _bzero();
  __Znam();
  _bzero();
  lVar3 = (long)iVar9 << 3;
  if (iVar9 < 0) {
    lVar3 = -1;
  }
  __Znam();
  _bzero();
  uVar13 = piVar6[5];
  lVar4 = *(long *)(piVar6 + 6);
  if ((int)uVar13 < 1) {
    *(ulong *)(piVar6 + 6) = uVar14;
    if (lVar4 == 0) goto LAB_109989d88;
  }
  else {
    uVar12 = 0;
    lVar1 = *(long *)(piVar6 + 8);
    lVar2 = *(long *)(piVar6 + 10);
    do {
      *(undefined4 *)(uVar14 + uVar12 * 4) = *(undefined4 *)(lVar4 + uVar12 * 4);
      *(undefined4 *)(uVar11 + uVar12 * 4) = *(undefined4 *)(lVar1 + uVar12 * 4);
      *(undefined8 *)(lVar3 + uVar12 * 8) = *(undefined8 *)(lVar2 + uVar12 * 8);
      uVar12 = uVar12 + 1;
    } while (uVar13 != uVar12);
    *(ulong *)(piVar6 + 6) = uVar14;
  }
  __ZdaPv();
LAB_109989d88:
  lVar4 = *(long *)(piVar6 + 8);
  *(ulong *)(piVar6 + 8) = uVar11;
  if (lVar4 != 0) {
    __ZdaPv();
  }
  piVar7 = *(int **)(piVar6 + 10);
  *(long *)(piVar6 + 10) = lVar3;
  if (piVar7 != (int *)0x0) {
    __ZdaPv();
  }
  piVar6[4] = iVar9;
  return piVar7;
}



/* Entry: 109989ca0; end: 109989e3f;  */

void FUN_109989ca0(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  int aiStack_a8 [2];
  long lStack_a0;
  int *piStack_48;
  
  aiStack_a8[0] = *(int *)(param_1 + 0x14);
  iVar7 = (int)param_2;
  piStack_48 = (int *)CONCAT44(piStack_48._4_4_,iVar7);
  if (iVar7 < aiStack_a8[0]) {
    piVar6 = aiStack_a8;
    FUN_109904144(piVar6,&piStack_48,&UNK_10f590bb6);
    piStack_48 = piVar6;
    if (piVar6 != (int *)0x0) {
      FUN_1099aa6cc(aiStack_a8,&UNK_10f590b04,0x79,&piStack_48);
      FUN_109365950(lStack_a0 + 0x7540,&UNK_10f590bdc);
      piVar6 = aiStack_a8;
      func_0x0001099ab7c0();
      __ZdaPv();
      __ZdaPv();
      __Unwind_Resume();
      if (0 < piVar6[4]) {
        _bzero(*(undefined8 *)(piVar6 + 10),(ulong)(uint)piVar6[4] << 3);
      }
      piVar6[5] = 0;
      return;
    }
  }
  if (iVar7 <= *(int *)(param_1 + 0x10)) {
    return;
  }
  uVar8 = -(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2;
  if (iVar7 < 0) {
    uVar8 = 0xffffffffffffffff;
  }
  uVar4 = uVar8;
  __Znam();
  _bzero();
  __Znam();
  _bzero();
  lVar9 = (long)iVar7 << 3;
  if (iVar7 < 0) {
    lVar9 = -1;
  }
  __Znam();
  _bzero();
  uVar3 = *(uint *)(param_1 + 0x14);
  lVar5 = *(long *)(param_1 + 0x18);
  if ((int)uVar3 < 1) {
    *(ulong *)(param_1 + 0x18) = uVar4;
    if (lVar5 == 0) goto LAB_109989d88;
  }
  else {
    uVar10 = 0;
    lVar1 = *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    do {
      *(undefined4 *)(uVar4 + uVar10 * 4) = *(undefined4 *)(lVar5 + uVar10 * 4);
      *(undefined4 *)(uVar8 + uVar10 * 4) = *(undefined4 *)(lVar1 + uVar10 * 4);
      *(undefined8 *)(lVar9 + uVar10 * 8) = *(undefined8 *)(lVar2 + uVar10 * 8);
      uVar10 = uVar10 + 1;
    } while (uVar3 != uVar10);
    *(ulong *)(param_1 + 0x18) = uVar4;
  }
  __ZdaPv();
LAB_109989d88:
  lVar5 = *(long *)(param_1 + 0x20);
  *(ulong *)(param_1 + 0x20) = uVar8;
  if (lVar5 != 0) {
    __ZdaPv();
  }
  lVar5 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar9;
  if (lVar5 != 0) {
    __ZdaPv();
  }
  *(int *)(param_1 + 0x10) = iVar7;
  return;
}



/* Entry: 109989e40; end: 109989f33;  */

void FUN_109989e40(long param_1)

{
  if (0 < (int)*(uint *)(param_1 + 0x10)) {
    _bzero(*(undefined8 *)(param_1 + 0x28),(ulong)*(uint *)(param_1 + 0x10) << 3);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



/* Entry: 109989f34; end: 109989fab;  */

void FUN_109989f34(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  double *pdVar2;
  int *piVar3;
  int *piVar4;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x14);
  if (0 < (int)*(uint *)(param_1 + 0x14)) {
    pdVar2 = *(double **)(param_1 + 0x28);
    piVar3 = *(int **)(param_1 + 0x20);
    piVar4 = *(int **)(param_1 + 0x18);
    do {
      *(double *)(param_3 + (long)*piVar4 * 8) =
           *(double *)(param_3 + (long)*piVar4 * 8) +
           *(double *)(param_2 + (long)*piVar3 * 8) * *pdVar2;
      uVar1 = uVar1 - 1;
      pdVar2 = pdVar2 + 1;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar1 != 0);
  }
  return;
}



/* Entry: 109989fac; end: 10998a10b;  */

void FUN_109989fac(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  ulong uVar9;
  double *pdVar10;
  int *piVar11;
  int *piVar12;
  long lVar13;
  ulong unaff_x23;
  ulong uVar14;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
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
  
  puVar4 = &uStack_b0;
  if (param_2 != 0) {
    uVar14 = (ulong)*(int *)(param_1 + 0xc);
    uVar9 = param_2 >> 3 & 1;
    if ((long)uVar14 <= (long)uVar9) {
      uVar9 = uVar14;
    }
    if ((param_2 & 7) != 0) {
      uVar9 = uVar14;
    }
    lVar13 = uVar14 - uVar9;
    if (0 < (long)uVar9) {
      _bzero(param_2,uVar9 << 3);
    }
    lVar6 = (lVar13 - (lVar13 >> 0x3f) & 0xfffffffffffffffeU) + uVar9;
    if (1 < lVar13) {
      lVar1 = lVar6;
      if (lVar6 <= (long)(uVar9 + 2)) {
        lVar1 = uVar9 + 2;
      }
      _bzero(param_2 + uVar9 * 8,(lVar1 + ~uVar9 & 0x1ffffffffffffffe) * 8 + 0x10);
    }
    if (lVar6 < (long)uVar14) {
      _bzero(param_2 + (lVar13 / 2) * 0x10 + uVar9 * 8,(lVar13 % 2) * 8);
    }
    uVar9 = (ulong)*(uint *)(param_1 + 0x14);
    if (0 < (int)*(uint *)(param_1 + 0x14)) {
      pdVar10 = *(double **)(param_1 + 0x28);
      piVar11 = *(int **)(param_1 + 0x20);
      do {
        *(double *)(param_2 + (long)*piVar11 * 8) =
             *(double *)(param_2 + (long)*piVar11 * 8) + *pdVar10 * *pdVar10;
        uVar9 = uVar9 - 1;
        pdVar10 = pdVar10 + 1;
        piVar11 = piVar11 + 1;
      } while (uVar9 != 0);
    }
    return;
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
  FUN_1099a9f0c(&uStack_b0,&UNK_10f590b04,0xb8,3,FUN_1099aa768,0);
  puVar7 = &UNK_10f58a243;
  FUN_1092b4db8(lStack_a8 + 0x7540,&UNK_10f58a243,0x1b);
  func_0x0001099ab7c0();
  puVar5 = &uStack_120;
  pcStack_b8 = FUN_10998a10c;
  if (puVar7 != (undefined *)0x0) {
    uVar9 = (ulong)*(uint *)((long)puVar4 + 0x14);
    if (0 < (int)*(uint *)((long)puVar4 + 0x14)) {
      pdVar10 = *(double **)((long)puVar4 + 0x28);
      piVar11 = *(int **)((long)puVar4 + 0x20);
      do {
        *pdVar10 = *pdVar10 * *(double *)(puVar7 + (long)*piVar11 * 8);
        uVar9 = uVar9 - 1;
        pdVar10 = pdVar10 + 1;
        piVar11 = piVar11 + 1;
      } while (uVar9 != 0);
    }
    return;
  }
  uStack_120 = 0;
  uStack_c8 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_1099a9f0c(&uStack_120,&UNK_10f590b04,0xc0,3,FUN_1099aa768,0);
  plVar8 = (long *)&UNK_10f58a27b;
  FUN_1092b4db8(lStack_118 + 0x7540,&UNK_10f58a27b,0x1f);
  func_0x0001099ab7c0();
  iVar2 = *(int *)((long)puVar5 + 8);
  iVar3 = *(int *)((long)puVar5 + 0xc);
  lVar13 = (long)iVar3;
  if (iVar2 != 0 && iVar3 != 0) {
    lVar6 = 0;
    if (lVar13 != 0) {
      lVar6 = 0x7fffffffffffffff / lVar13;
    }
    if (iVar2 <= lVar6) goto LAB_10998a1fc;
    goto LAB_10998a234;
  }
LAB_10998a1fc:
  unaff_x23 = (long)iVar3 * (long)iVar2;
  if (plVar8[2] * plVar8[1] - unaff_x23 == 0) goto LAB_10998a25c;
  _free(*plVar8);
  if ((long)unaff_x23 < 1) {
LAB_10998a254:
    lVar6 = 0;
  }
  else {
    if (unaff_x23 >> 0x3d != 0) {
LAB_10998a234:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10998a254;
    }
    lVar6 = unaff_x23 * 8;
    _malloc();
    if (lVar6 == 0) goto LAB_10998a234;
  }
  *plVar8 = lVar6;
LAB_10998a25c:
  plVar8[1] = (long)iVar2;
  plVar8[2] = lVar13;
  if (0 < (long)unaff_x23) {
    _bzero(*plVar8,unaff_x23 << 3);
  }
  uVar9 = (ulong)*(uint *)((long)puVar5 + 0x14);
  if (0 < (int)*(uint *)((long)puVar5 + 0x14)) {
    lVar13 = *plVar8;
    pdVar10 = *(double **)((long)puVar5 + 0x28);
    piVar11 = *(int **)((long)puVar5 + 0x18);
    piVar12 = *(int **)((long)puVar5 + 0x20);
    do {
      lVar6 = lVar13 + (long)*piVar11 * (long)iVar3 * 8;
      *(double *)(lVar6 + (long)*piVar12 * 8) = *pdVar10 + *(double *)(lVar6 + (long)*piVar12 * 8);
      uVar9 = uVar9 - 1;
      pdVar10 = pdVar10 + 1;
      piVar11 = piVar11 + 1;
      piVar12 = piVar12 + 1;
    } while (uVar9 != 0);
  }
  return;
}



/* Entry: 10998a10c; end: 10998a1b7;  */

void FUN_10998a10c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  double *pdVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  ulong unaff_x23;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_18;
  
  puVar3 = &uStack_70;
  if (param_2 != 0) {
    uVar6 = (ulong)*(uint *)(param_1 + 0x14);
    if (0 < (int)*(uint *)(param_1 + 0x14)) {
      pdVar7 = *(double **)(param_1 + 0x28);
      piVar8 = *(int **)(param_1 + 0x20);
      do {
        *pdVar7 = *pdVar7 * *(double *)(param_2 + (long)*piVar8 * 8);
        uVar6 = uVar6 - 1;
        pdVar7 = pdVar7 + 1;
        piVar8 = piVar8 + 1;
      } while (uVar6 != 0);
    }
    return;
  }
  uStack_70 = 0;
  uStack_18 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  FUN_1099a9f0c(&uStack_70,&UNK_10f590b04,0xc0,3,FUN_1099aa768,0);
  plVar5 = (long *)&UNK_10f58a27b;
  FUN_1092b4db8(lStack_68 + 0x7540,&UNK_10f58a27b,0x1f);
  func_0x0001099ab7c0();
  iVar1 = *(int *)((long)puVar3 + 8);
  iVar2 = *(int *)((long)puVar3 + 0xc);
  lVar10 = (long)iVar2;
  if (iVar1 != 0 && iVar2 != 0) {
    lVar4 = 0;
    if (lVar10 != 0) {
      lVar4 = 0x7fffffffffffffff / lVar10;
    }
    if (iVar1 <= lVar4) goto LAB_10998a1fc;
    goto LAB_10998a234;
  }
LAB_10998a1fc:
  unaff_x23 = (long)iVar2 * (long)iVar1;
  if (plVar5[2] * plVar5[1] - unaff_x23 == 0) goto LAB_10998a25c;
  _free(*plVar5);
  if ((long)unaff_x23 < 1) {
LAB_10998a254:
    lVar4 = 0;
  }
  else {
    if (unaff_x23 >> 0x3d != 0) {
LAB_10998a234:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10998a254;
    }
    lVar4 = unaff_x23 * 8;
    _malloc();
    if (lVar4 == 0) goto LAB_10998a234;
  }
  *plVar5 = lVar4;
LAB_10998a25c:
  plVar5[1] = (long)iVar1;
  plVar5[2] = lVar10;
  if (0 < (long)unaff_x23) {
    _bzero(*plVar5,unaff_x23 << 3);
  }
  uVar6 = (ulong)*(uint *)((long)puVar3 + 0x14);
  if (0 < (int)*(uint *)((long)puVar3 + 0x14)) {
    lVar10 = *plVar5;
    pdVar7 = *(double **)((long)puVar3 + 0x28);
    piVar8 = *(int **)((long)puVar3 + 0x18);
    piVar9 = *(int **)((long)puVar3 + 0x20);
    do {
      lVar4 = lVar10 + (long)*piVar8 * (long)iVar2 * 8;
      *(double *)(lVar4 + (long)*piVar9 * 8) = *pdVar7 + *(double *)(lVar4 + (long)*piVar9 * 8);
      uVar6 = uVar6 - 1;
      pdVar7 = pdVar7 + 1;
      piVar8 = piVar8 + 1;
      piVar9 = piVar9 + 1;
    } while (uVar6 != 0);
  }
  return;
}



/* Entry: 10998a1b8; end: 10998a2c7;  */

void FUN_10998a1b8(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  double *pdVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  ulong unaff_x23;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  lVar8 = (long)iVar2;
  if (iVar1 != 0 && iVar2 != 0) {
    lVar3 = 0;
    if (lVar8 != 0) {
      lVar3 = 0x7fffffffffffffff / lVar8;
    }
    if (iVar1 <= lVar3) goto LAB_10998a1fc;
    goto LAB_10998a234;
  }
LAB_10998a1fc:
  unaff_x23 = (long)iVar2 * (long)iVar1;
  if (param_2[2] * param_2[1] - unaff_x23 == 0) goto LAB_10998a25c;
  _free(*param_2);
  if ((long)unaff_x23 < 1) {
LAB_10998a254:
    lVar3 = 0;
  }
  else {
    if (unaff_x23 >> 0x3d != 0) {
LAB_10998a234:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10998a254;
    }
    lVar3 = unaff_x23 * 8;
    _malloc();
    if (lVar3 == 0) goto LAB_10998a234;
  }
  *param_2 = lVar3;
LAB_10998a25c:
  param_2[1] = (long)iVar1;
  param_2[2] = lVar8;
  if (0 < (long)unaff_x23) {
    _bzero(*param_2,unaff_x23 << 3);
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x14);
  if (0 < (int)*(uint *)(param_1 + 0x14)) {
    lVar8 = *param_2;
    pdVar5 = *(double **)(param_1 + 0x28);
    piVar6 = *(int **)(param_1 + 0x18);
    piVar7 = *(int **)(param_1 + 0x20);
    do {
      lVar3 = lVar8 + (long)*piVar6 * (long)iVar2 * 8;
      *(double *)(lVar3 + (long)*piVar7 * 8) = *pdVar5 + *(double *)(lVar3 + (long)*piVar7 * 8);
      uVar4 = uVar4 - 1;
      pdVar5 = pdVar5 + 1;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar4 != 0);
  }
  return;
}



/* Entry: 10998a2c8; end: 10998a2e7;  */

undefined4 FUN_10998a2c8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10998a2e8; end: 10998a3cf;  */

ulong FUN_10998a2e8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
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
  
  if (param_2 != 0) {
    uVar1 = param_1;
    if (0 < *(int *)(param_1 + 0x14)) {
      lVar3 = 0;
      do {
        uVar1 = param_2;
        _fprintf(param_2,&UNK_10f58a2e1);
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(param_1 + 0x14));
    }
    return uVar1;
  }
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
  FUN_1099a9f0c(&uStack_90,&UNK_10f590b04,0x111,3,FUN_1099aa768,0);
  FUN_1092b4db8(lStack_88 + 0x7540,&UNK_10f58a2c2,0x1e);
  puVar2 = &uStack_90;
  func_0x0001099ab7c0();
  return (ulong)*(uint *)((long)puVar2 + 0x14);
}



/* Entry: 10998a3d0; end: 10998a3d7;  */

undefined4 FUN_10998a3d0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 10998a3d8; end: 10998d267;  */

ulong * FUN_10998a3d8(ulong param_1,ulong *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  code *pcVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  undefined *puVar16;
  ulong uVar17;
  double *pdVar18;
  int *piVar19;
  double *pdVar20;
  ulong uVar21;
  long lVar22;
  double *pdVar23;
  double *pdVar24;
  undefined8 *puVar25;
  long lVar26;
  double *pdVar27;
  double *pdVar28;
  undefined4 uVar29;
  ulong uVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  ulong uVar33;
  int iVar34;
  long *plVar35;
  ulong uVar36;
  undefined8 uVar37;
  long lVar38;
  double *pdVar39;
  double dVar40;
  double dVar42;
  undefined1 auVar41 [16];
  double dVar43;
  double dVar46;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 uVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  ulong uVar51;
  undefined8 uVar52;
  double dVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined1 uStack_412;
  undefined1 uStack_411;
  undefined8 uStack_410;
  undefined8 *puStack_360;
  long *plStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  double dStack_330;
  undefined8 uStack_328;
  char cStack_319;
  undefined8 uStack_318;
  undefined8 uStack_308;
  long lStack_2e8;
  long lStack_2e0;
  ulong uStack_2d8;
  undefined8 *puStack_2d0;
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  double *pdStack_2a0;
  undefined4 uStack_298;
  undefined8 uStack_290;
  ulong uStack_288;
  undefined8 *puStack_280;
  ulong uStack_278;
  long lStack_270;
  double dStack_268;
  double dStack_260;
  ulong uStack_258;
  long lStack_250;
  long lStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  ulong uStack_230;
  double dStack_228;
  double dStack_220;
  double dStack_218;
  double dStack_210;
  double dStack_208;
  double dStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined4 uStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined8 uStack_184;
  undefined8 uStack_17c;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  char cStack_129;
  undefined8 uStack_128;
  undefined8 uStack_120;
  char cStack_111;
  undefined2 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  _gettimeofday(&uStack_288,0);
  dVar40 = (double)(long)uStack_288 + (double)(int)puStack_280 * 1e-06;
  *(double *)(param_1 + 0x2e8) = dVar40;
  *(double *)(param_1 + 0x2f0) = dVar40;
  puVar15 = (ulong *)(param_1 + 8);
  uVar33 = *param_2;
  *(ulong *)(param_1 + 0x10) = param_2[1];
  *(ulong *)(param_1 + 8) = uVar33;
  uVar33 = param_2[2];
  uVar21 = param_2[3];
  uVar17 = param_2[4];
  uVar36 = param_2[5];
  uVar51 = param_2[7];
  uVar30 = param_2[6];
  *(ulong *)(param_1 + 0x48) = param_2[8];
  *(ulong *)(param_1 + 0x40) = uVar51;
  *(ulong *)(param_1 + 0x38) = uVar30;
  *(ulong *)(param_1 + 0x30) = uVar36;
  *(ulong *)(param_1 + 0x28) = uVar17;
  *(ulong *)(param_1 + 0x20) = uVar21;
  *(ulong *)(param_1 + 0x18) = uVar33;
  if (puVar15 == param_2) {
    *(int *)(param_1 + 0x68) = (int)param_2[0xc];
    uVar33 = param_2[0x10];
    uVar21 = param_2[0x11];
    uVar17 = param_2[0x12];
    uVar36 = param_2[0x13];
    uVar30 = param_2[0x14];
    *(ulong *)(param_1 + 0xb0) = param_2[0x15];
    *(ulong *)(param_1 + 0xa8) = uVar30;
    *(ulong *)(param_1 + 0xa0) = uVar36;
    *(ulong *)(param_1 + 0x98) = uVar17;
    *(ulong *)(param_1 + 0x90) = uVar21;
    *(ulong *)(param_1 + 0x88) = uVar33;
    uVar33 = param_2[0x16];
    uVar21 = param_2[0x17];
    uVar17 = param_2[0x18];
    uVar36 = param_2[0x19];
    uVar51 = param_2[0x1b];
    uVar30 = param_2[0x1a];
    uVar37 = *(undefined8 *)((long)param_2 + 0xda);
    *(undefined8 *)(param_1 + 0xea) = *(undefined8 *)((long)param_2 + 0xe2);
    *(undefined8 *)(param_1 + 0xe2) = uVar37;
    *(ulong *)(param_1 + 0xe0) = uVar51;
    *(ulong *)(param_1 + 0xd8) = uVar30;
    *(ulong *)(param_1 + 0xd0) = uVar36;
    *(ulong *)(param_1 + 200) = uVar17;
    *(ulong *)(param_1 + 0xc0) = uVar21;
    *(ulong *)(param_1 + 0xb8) = uVar33;
  }
  else {
    uVar33 = param_2[9];
    uVar21 = param_2[10];
    uVar36 = uVar21 - uVar33;
    uVar17 = *(ulong *)(param_1 + 0x60);
    lVar38 = *(long *)(param_1 + 0x50);
    if (uVar17 - lVar38 < uVar36) {
      uVar30 = (long)uVar36 >> 2;
      if (lVar38 != 0) {
        *(long *)(param_1 + 0x58) = lVar38;
        __ZdlPv(lVar38);
        uVar17 = 0;
        *(undefined8 *)(param_1 + 0x50) = 0;
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
      }
      if (uVar30 >> 0x3e == 0) {
        uVar51 = (long)uVar17 >> 1;
        if ((ulong)((long)uVar17 >> 1) <= uVar30) {
          uVar51 = uVar30;
        }
        if (0x7ffffffffffffffb < uVar17) {
          uVar51 = 0x3fffffffffffffff;
        }
        if (uVar51 >> 0x3e == 0) {
          lVar38 = uVar51 << 2;
          __Znwm();
          *(long *)(param_1 + 0x50) = lVar38;
          *(long *)(param_1 + 0x58) = lVar38;
          *(ulong *)(param_1 + 0x60) = lVar38 + uVar51 * 4;
          if (uVar21 != uVar33) {
            _memcpy(lVar38,uVar33,uVar36);
          }
          goto LAB_10998a5bc;
        }
      }
LAB_10998d0e8:
      FUN_10923f788();
      goto LAB_10998d0ec;
    }
    lVar26 = *(long *)(param_1 + 0x58);
    if ((ulong)(lVar26 - lVar38) < uVar36) {
      lVar22 = uVar33 + (lVar26 - lVar38);
      if (lVar26 != lVar38) {
        _memmove(lVar38,uVar33);
        lVar26 = *(long *)(param_1 + 0x58);
      }
      lVar38 = uVar21 - lVar22;
      if (lVar38 != 0) {
        _memmove(lVar26,lVar22,lVar38);
      }
      lVar38 = lVar26 + lVar38;
    }
    else {
      if (uVar21 != uVar33) {
        _memmove(lVar38,uVar33,uVar36);
      }
LAB_10998a5bc:
      lVar38 = lVar38 + uVar36;
    }
    *(long *)(param_1 + 0x58) = lVar38;
    *(int *)(param_1 + 0x68) = (int)param_2[0xc];
    bVar4 = *(byte *)((long)param_2 + 0x7f);
    if (*(char *)(param_1 + 0x87) < '\0') {
      uVar33 = param_2[0xe];
      puVar14 = (ulong *)param_2[0xd];
      if (-1 < (char)bVar4) {
        uVar33 = (ulong)bVar4;
        puVar14 = param_2 + 0xd;
      }
      func_0x000107c27ba0(param_1 + 0x70,puVar14,uVar33);
    }
    else if ((char)bVar4 < '\0') {
      func_0x000107c27ba4(param_1 + 0x70,param_2[0xd],param_2[0xe]);
    }
    else {
      uVar33 = param_2[0xd];
      uVar21 = param_2[0xe];
      *(ulong *)(param_1 + 0x80) = param_2[0xf];
      *(ulong *)(param_1 + 0x78) = uVar21;
      *(ulong *)(param_1 + 0x70) = uVar33;
    }
    uVar33 = param_2[0x10];
    uVar21 = param_2[0x11];
    uVar17 = param_2[0x12];
    lVar38 = *(long *)(param_1 + 0xf8);
    uVar30 = param_2[0x15];
    uVar36 = param_2[0x14];
    *(ulong *)(param_1 + 0xa0) = param_2[0x13];
    *(ulong *)(param_1 + 0x98) = uVar17;
    *(ulong *)(param_1 + 0xb0) = uVar30;
    *(ulong *)(param_1 + 0xa8) = uVar36;
    *(ulong *)(param_1 + 0x90) = uVar21;
    *(ulong *)(param_1 + 0x88) = uVar33;
    uVar33 = param_2[0x16];
    uVar21 = param_2[0x17];
    uVar17 = param_2[0x18];
    uVar36 = param_2[0x19];
    uVar51 = param_2[0x1b];
    uVar30 = param_2[0x1a];
    uVar37 = *(undefined8 *)((long)param_2 + 0xda);
    *(undefined8 *)(param_1 + 0xea) = *(undefined8 *)((long)param_2 + 0xe2);
    *(undefined8 *)(param_1 + 0xe2) = uVar37;
    *(ulong *)(param_1 + 0xd0) = uVar36;
    *(ulong *)(param_1 + 200) = uVar17;
    *(ulong *)(param_1 + 0xe0) = uVar51;
    *(ulong *)(param_1 + 0xd8) = uVar30;
    *(ulong *)(param_1 + 0xc0) = uVar21;
    *(ulong *)(param_1 + 0xb8) = uVar33;
    uVar33 = param_2[0x1e];
    uVar21 = param_2[0x1f];
    uVar36 = uVar21 - uVar33;
    uVar17 = *(ulong *)(param_1 + 0x108);
    if (uVar17 - lVar38 < uVar36) {
      uVar30 = (long)uVar36 >> 3;
      if (lVar38 != 0) {
        *(long *)(param_1 + 0x100) = lVar38;
        __ZdlPv(lVar38);
        uVar17 = 0;
        *(long *)(param_1 + 0xf8) = 0;
        *(undefined8 *)(param_1 + 0x100) = 0;
        *(undefined8 *)(param_1 + 0x108) = 0;
      }
      if (uVar30 >> 0x3d != 0) {
LAB_10998d0ec:
        FUN_10992b9c8();
LAB_10998d0f0:
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
LAB_10998d134:
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10998d138);
        (*pcVar10)();
      }
      uVar51 = (long)uVar17 >> 2;
      if ((ulong)((long)uVar17 >> 2) <= uVar30) {
        uVar51 = uVar30;
      }
      if (0x7ffffffffffffff7 < uVar17) {
        uVar51 = 0x1fffffffffffffff;
      }
      if (uVar51 >> 0x3d != 0) goto LAB_10998d0ec;
      lVar38 = uVar51 << 3;
      __Znwm();
      *(long *)(param_1 + 0xf8) = lVar38;
      *(long *)(param_1 + 0x100) = lVar38;
      *(ulong *)(param_1 + 0x108) = lVar38 + uVar51 * 8;
      if (uVar21 != uVar33) {
        _memcpy(lVar38,uVar33,uVar36);
      }
LAB_10998a74c:
      lVar38 = lVar38 + uVar36;
    }
    else {
      lVar26 = *(long *)(param_1 + 0x100);
      if (uVar36 <= (ulong)(lVar26 - lVar38)) {
        if (uVar21 != uVar33) {
          _memmove(lVar38,uVar33,uVar36);
        }
        goto LAB_10998a74c;
      }
      lVar22 = uVar33 + (lVar26 - lVar38);
      if (lVar26 != lVar38) {
        _memmove(lVar38,uVar33);
        lVar26 = *(long *)(param_1 + 0x100);
      }
      lVar38 = uVar21 - lVar22;
      if (lVar38 != 0) {
        _memmove(lVar26,lVar22,lVar38);
      }
      lVar38 = lVar26 + lVar38;
    }
    *(long *)(param_1 + 0x100) = lVar38;
    plStack_358 = param_4;
  }
  uVar33 = param_2[0x21];
  uVar21 = param_2[0x22];
  if (uVar21 != 0) {
    plVar35 = (long *)(uVar21 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar6) {
        *plVar35 = *plVar35 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar35 = *(long **)(param_1 + 0x118);
  *(ulong *)(param_1 + 0x110) = uVar33;
  *(ulong *)(param_1 + 0x118) = uVar21;
  if (plVar35 != (long *)0x0) {
    plVar1 = plVar35 + 1;
    do {
      lVar38 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar38 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar38 == 0) {
      (**(code **)(*plVar35 + 0x10))(plVar35);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar35);
    }
  }
  uVar33 = param_2[0x23];
  uVar21 = param_2[0x24];
  if (uVar21 != 0) {
    plVar35 = (long *)(uVar21 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar6) {
        *plVar35 = *plVar35 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar35 = *(long **)(param_1 + 0x128);
  *(ulong *)(param_1 + 0x120) = uVar33;
  *(ulong *)(param_1 + 0x128) = uVar21;
  if (plVar35 != (long *)0x0) {
    plVar1 = plVar35 + 1;
    do {
      lVar38 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar38 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar38 == 0) {
      (**(code **)(*plVar35 + 0x10))(plVar35);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar35);
    }
  }
  uVar33 = param_2[0x25];
  uVar21 = param_2[0x26];
  if (uVar21 != 0) {
    plVar35 = (long *)(uVar21 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar6) {
        *plVar35 = *plVar35 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar35 = *(long **)(param_1 + 0x138);
  *(ulong *)(param_1 + 0x130) = uVar33;
  *(ulong *)(param_1 + 0x138) = uVar21;
  if (plVar35 != (long *)0x0) {
    plVar1 = plVar35 + 1;
    do {
      lVar38 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar38 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar38 == 0) {
      (**(code **)(*plVar35 + 0x10))(plVar35);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar35);
    }
  }
  uVar33 = param_2[0x27];
  uVar21 = param_2[0x28];
  if (uVar21 != 0) {
    plVar35 = (long *)(uVar21 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar6) {
        *plVar35 = *plVar35 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar35 = *(long **)(param_1 + 0x148);
  *(ulong *)(param_1 + 0x140) = uVar33;
  *(ulong *)(param_1 + 0x148) = uVar21;
  if (plVar35 != (long *)0x0) {
    plVar1 = plVar35 + 1;
    do {
      lVar38 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar38 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar38 == 0) {
      (**(code **)(*plVar35 + 0x10))(plVar35);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar35);
    }
  }
  __ZNSt3__16__sortIRNS_6__lessIiiEEPiEEvT0_S5_T_
            (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),&uStack_288);
  *(undefined8 *)(param_1 + 0x150) = param_3;
  *(long **)(param_1 + 0x158) = param_4;
  *(undefined4 *)((long)param_4 + 4) = 1;
  param_4[10] = 0;
  *(undefined1 *)(param_4 + 0x20) = *(undefined1 *)((long)param_2 + 0xe9);
  plVar35 = *(long **)(param_1 + 0x110);
  if (plVar35 == (long *)0x0) {
    uStack_288 = 0;
    uStack_230 = 0;
    lStack_270 = 0;
    uStack_278 = 0;
    dStack_260 = 0.0;
    dStack_268 = 0.0;
    lStack_250 = 0;
    uStack_258 = 0;
    uStack_240 = 0;
    lStack_248 = 0;
    uStack_238 = (ulong)uStack_238._4_4_ << 0x20;
    FUN_1099a9f0c(&uStack_288,&UNK_10f590c32,0x97,3,FUN_1099aa768,0);
    uStack_411 = 0xc1;
    FUN_1092b4db8(puStack_280 + 0xea8,&UNK_10f590cc1,0x2c);
  }
  else if (*(long *)(param_1 + 0x130) == 0) {
    uStack_288 = 0;
    uStack_230 = 0;
    lStack_270 = 0;
    uStack_278 = 0;
    dStack_260 = 0.0;
    dStack_268 = 0.0;
    lStack_250 = 0;
    uStack_258 = 0;
    uStack_240 = 0;
    lStack_248 = 0;
    uStack_238 = (ulong)uStack_238._4_4_ << 0x20;
    FUN_1099a9f0c(&uStack_288,&UNK_10f590c32,0x98,3,FUN_1099aa768,0);
    uStack_411 = 0xee;
    FUN_1092b4db8(puStack_280 + 0xea8,&UNK_10f590cee,0x2b);
  }
  else {
    if (*(long *)(param_1 + 0x120) != 0) {
      *(long **)(param_1 + 0x160) = plVar35;
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x130);
      *(long *)(param_1 + 0x170) = *(long *)(param_1 + 0x120);
      *(byte *)(param_1 + 0x180) = (byte)param_2[0x1d] ^ 1;
      *(bool *)(param_1 + 0x181) = param_2[0x27] != 0;
      *(undefined1 *)(param_1 + 0x182) = 0;
      (**(code **)(*plVar35 + 0x28))();
      *(int *)(param_1 + 0x200) = (int)plVar35;
      plVar35 = *(long **)(param_1 + 0x160);
      (**(code **)(*plVar35 + 0x30))();
      *(int *)(param_1 + 0x204) = (int)plVar35;
      plVar35 = *(long **)(param_1 + 0x160);
      (**(code **)(*plVar35 + 0x38))();
      *(int *)(param_1 + 0x208) = (int)plVar35;
      *(undefined4 *)(param_1 + 0x2f8) = 0;
      puVar31 = *(undefined8 **)(param_1 + 0x150);
      iVar34 = *(int *)(param_1 + 0x200);
      lVar38 = (long)iVar34;
      puVar12 = *(undefined8 **)(param_1 + 0x210);
      if (*(long *)(param_1 + 0x218) != lVar38) {
        _free();
        if (iVar34 < 1) {
          puVar12 = (undefined8 *)0x0;
        }
        else {
          puVar12 = (undefined8 *)(lVar38 << 3);
          _malloc();
          if (puVar12 == (undefined8 *)0x0) goto LAB_10998ad00;
        }
        *(undefined8 **)(param_1 + 0x210) = puVar12;
        *(long *)(param_1 + 0x218) = lVar38;
      }
      uVar33 = -(ulong)((uint)(iVar34 / 2) >> 0x1f) & 0xfffffffe00000000 |
               (ulong)(uint)(iVar34 / 2) << 1;
      if (1 < iVar34) {
        lVar26 = 0;
        puVar32 = puVar12;
        puVar25 = puVar31;
        do {
          uVar37 = *puVar25;
          puVar32[1] = puVar25[1];
          *puVar32 = uVar37;
          lVar26 = lVar26 + 2;
          puVar32 = puVar32 + 2;
          puVar25 = puVar25 + 2;
        } while (lVar26 < (long)uVar33);
      }
      lVar26 = lVar38 - uVar33;
      if (lVar26 != 0 && (long)uVar33 <= lVar38) {
        lVar38 = (long)((ulong)(uint)(iVar34 - (iVar34 >> 0x1f)) << 0x20) >> 0x21;
        puVar31 = puVar31 + lVar38 * 2;
        puVar12 = puVar12 + lVar38 * 2;
        do {
          *puVar12 = *puVar31;
          lVar26 = lVar26 + -1;
          puVar31 = puVar31 + 1;
          puVar12 = puVar12 + 1;
        } while (lVar26 != 0);
      }
      puVar12 = (undefined8 *)(param_1 + 0x210);
      uVar33 = *(ulong *)(param_1 + 0x218);
      if (uVar33 == 0) {
        dVar40 = 0.0;
      }
      else {
        pdVar18 = (double *)*puVar12;
        uVar21 = uVar33 + 3;
        if (-1 < (long)uVar33) {
          uVar21 = uVar33;
        }
        if (uVar33 + 1 < 3) {
          dVar40 = *pdVar18 * *pdVar18;
        }
        else {
          uVar17 = uVar33 - ((long)uVar33 >> 0x3f) & 0xfffffffffffffffe;
          dVar40 = *pdVar18 * *pdVar18;
          dVar42 = pdVar18[1] * pdVar18[1];
          if (3 < (long)uVar33) {
            uVar21 = uVar21 & 0xfffffffffffffffc;
            dVar49 = pdVar18[2] * pdVar18[2];
            dVar43 = pdVar18[3] * pdVar18[3];
            if (7 < uVar33) {
              pdVar20 = pdVar18 + 6;
              lVar38 = 4;
              do {
                dVar40 = dVar40 + pdVar20[-2] * pdVar20[-2];
                dVar42 = dVar42 + pdVar20[-1] * pdVar20[-1];
                dVar49 = dVar49 + *pdVar20 * *pdVar20;
                dVar43 = dVar43 + pdVar20[1] * pdVar20[1];
                lVar38 = lVar38 + 4;
                pdVar20 = pdVar20 + 4;
              } while (lVar38 < (long)uVar21);
            }
            dVar40 = dVar49 + dVar40;
            dVar42 = dVar43 + dVar42;
            if ((long)uVar21 < (long)uVar17) {
              dVar49 = pdVar18[uVar21];
              dVar43 = (pdVar18 + uVar21)[1];
              dVar40 = dVar40 + dVar49 * dVar49;
              dVar42 = dVar42 + dVar43 * dVar43;
            }
          }
          dVar40 = dVar40 + dVar42;
          lVar38 = (long)uVar33 % 2;
          if (lVar38 != 0 && lVar38 < 0 == SBORROW8(uVar33,uVar17)) {
            pdVar18 = pdVar18 + ((long)uVar33 / 2) * 2;
            do {
              dVar40 = dVar40 + *pdVar18 * *pdVar18;
              lVar38 = lVar38 + -1;
              pdVar18 = pdVar18 + 1;
            } while (lVar38 != 0);
          }
        }
      }
      *(double *)(param_1 + 0x2c0) = SQRT(dVar40);
      iVar34 = *(int *)(param_1 + 0x208);
      puVar31 = (undefined8 *)(long)iVar34;
      if (*(undefined8 **)(param_1 + 0x228) != puVar31) {
        _free(*(undefined8 *)(param_1 + 0x220));
        if (iVar34 < 1) {
          lVar38 = 0;
        }
        else {
          lVar38 = (long)puVar31 << 3;
          _malloc();
          if (lVar38 == 0) goto LAB_10998ad00;
        }
        *(long *)(param_1 + 0x220) = lVar38;
      }
      *(undefined8 **)(param_1 + 0x228) = puVar31;
      iVar34 = *(int *)(param_1 + 0x204);
      puVar31 = (undefined8 *)(long)iVar34;
      puVar32 = puVar31;
      puStack_360 = puVar12;
      if (*(long *)(param_1 + 0x288) != (long)iVar34) {
        _free(*(undefined8 *)(param_1 + 0x280));
        if (iVar34 < 1) {
          lVar38 = 0;
        }
        else {
          lVar38 = (long)puVar31 << 3;
          _malloc();
          if (lVar38 == 0) goto LAB_10998ad00;
        }
        *(long *)(param_1 + 0x280) = lVar38;
        iVar34 = *(int *)(param_1 + 0x204);
        puVar32 = (undefined8 *)(long)iVar34;
      }
      *(undefined8 **)(param_1 + 0x288) = puVar31;
      plStack_358 = (long *)(param_1 + 0x290);
      if (*(undefined8 **)(param_1 + 0x298) != puVar32) {
        _free(*plStack_358);
        if (iVar34 < 1) {
          lVar38 = 0;
        }
        else {
          lVar38 = (long)puVar32 << 3;
          _malloc();
          if (lVar38 == 0) goto LAB_10998ad00;
        }
        *plStack_358 = lVar38;
      }
      *(undefined8 **)(param_1 + 0x298) = puVar32;
      iVar34 = *(int *)(param_1 + 0x200);
      puVar31 = (undefined8 *)(long)iVar34;
      if (*(undefined8 **)(param_1 + 0x2a8) != puVar31) {
        _free(*(undefined8 *)(param_1 + 0x2a0));
        if (iVar34 < 1) {
          lVar38 = 0;
        }
        else {
          lVar38 = (long)puVar31 << 3;
          _malloc();
          if (lVar38 == 0) goto LAB_10998ad00;
        }
        *(long *)(param_1 + 0x2a0) = lVar38;
      }
      *(undefined8 **)(param_1 + 0x2a8) = puVar31;
      iVar34 = *(int *)(param_1 + 0x204);
      puVar31 = (undefined8 *)(long)iVar34;
      if (*(undefined8 **)(param_1 + 0x238) != puVar31) {
        _free(*(undefined8 *)(param_1 + 0x230));
        if (iVar34 < 1) {
          lVar38 = 0;
        }
        else {
          lVar38 = (long)puVar31 << 3;
          _malloc();
          if (lVar38 == 0) goto LAB_10998ad00;
        }
        *(long *)(param_1 + 0x230) = lVar38;
      }
      *(undefined8 **)(param_1 + 0x238) = puVar31;
      iVar34 = *(int *)(param_1 + 0x208);
      puVar31 = (undefined8 *)(long)iVar34;
      if (*(undefined8 **)(param_1 + 600) != puVar31) {
        _free(*(undefined8 *)(param_1 + 0x250));
        if (iVar34 < 1) {
          lVar38 = 0;
        }
        else {
          lVar38 = (long)puVar31 << 3;
          _malloc();
          if (lVar38 == 0) goto LAB_10998ad00;
        }
        *(long *)(param_1 + 0x250) = lVar38;
      }
      *(undefined8 **)(param_1 + 600) = puVar31;
      iVar34 = *(int *)(param_1 + 0x204);
      puVar31 = (undefined8 *)(long)iVar34;
      if (*(undefined8 **)(param_1 + 0x268) != puVar31) {
        _free(*(undefined8 *)(param_1 + 0x260));
        if (iVar34 < 1) {
          lVar38 = 0;
        }
        else {
          lVar38 = (long)puVar31 << 3;
          _malloc();
          if (lVar38 == 0) goto LAB_10998ad00;
        }
        *(long *)(param_1 + 0x260) = lVar38;
      }
      *(undefined8 **)(param_1 + 0x268) = puVar31;
      iVar34 = *(int *)(param_1 + 0x200);
      puVar31 = (undefined8 *)(long)iVar34;
      if (*(undefined8 **)(param_1 + 0x278) != puVar31) {
        _free(*(undefined8 *)(param_1 + 0x270));
        if (iVar34 < 1) {
          lVar38 = 0;
        }
        else {
          lVar38 = (long)puVar31 << 3;
          _malloc();
          if (lVar38 == 0) goto LAB_10998ad00;
        }
        *(long *)(param_1 + 0x270) = lVar38;
      }
      *(undefined8 **)(param_1 + 0x278) = puVar31;
      iVar34 = *(int *)(param_1 + 0x204);
      puVar31 = (undefined8 *)(long)iVar34;
      if (*(undefined8 **)(param_1 + 0x2b8) == puVar31) goto LAB_10998ad2c;
      _free(*(undefined8 *)(param_1 + 0x2b0));
      if (iVar34 < 1) goto LAB_10998ad20;
      lVar38 = (long)puVar31 << 3;
      _malloc();
      if (lVar38 != 0) goto LAB_10998ad24;
LAB_10998ad00:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
LAB_10998ad20:
      lVar38 = 0;
LAB_10998ad24:
      *(long *)(param_1 + 0x2b0) = lVar38;
      *(undefined8 **)(param_1 + 0x2b8) = puVar31;
LAB_10998ad2c:
      if (0 < (int)puVar31) {
        _memset_pattern16();
      }
      *(undefined8 *)(param_1 + 0x2c8) = 0x7fefffffffffffff;
      *(undefined8 *)(param_1 + 0x2c0) = 0xbff0000000000000;
      *(undefined8 *)(param_1 + 0x2d8) = 0;
      *(undefined8 *)(param_1 + 0x2d0) = 0x7fefffffffffffff;
      piVar2 = (int *)(param_1 + 0x188);
      *(undefined8 *)(param_1 + 0x1f8) = 0;
      *(undefined8 *)(param_1 + 400) = 0;
      piVar2[0] = 0;
      piVar2[1] = 0;
      *(undefined8 *)(param_1 + 0x1a0) = 0;
      *(undefined8 *)(param_1 + 0x198) = 0;
      *(undefined8 *)(param_1 + 0x1b0) = 0;
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      *(undefined8 *)(param_1 + 0x1c0) = 0;
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      *(undefined8 *)(param_1 + 0x1d0) = 0;
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined8 *)(param_1 + 0x1e0) = 0;
      *(undefined8 *)(param_1 + 0x1d8) = 0;
      *(undefined8 *)(param_1 + 0x1f0) = 0;
      *(undefined8 *)(param_1 + 0x1e8) = 0;
      *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_1 + 0x40);
      if (*(char *)(param_1 + 0xf1) != '\x01') goto LAB_10998af68;
      uVar37 = *(undefined8 *)(param_1 + 0x290);
      if (0 < *(long *)(param_1 + 0x298)) {
        _bzero(uVar37,*(long *)(param_1 + 0x298) << 3);
      }
      plVar35 = *(long **)(param_1 + 0x160);
      (**(code **)(*plVar35 + 0x20))
                (plVar35,*(undefined8 *)(param_1 + 0x210),uVar37,*(undefined8 *)(param_1 + 0x2a0));
      if (((ulong)plVar35 & 1) != 0) {
        puVar31 = *(undefined8 **)(param_1 + 0x2a0);
        uVar33 = *(ulong *)(param_1 + 0x2a8);
        puVar12 = *(undefined8 **)(param_1 + 0x210);
        if (*(ulong *)(param_1 + 0x218) != uVar33) {
          _free();
          if (0 < (long)uVar33) goto code_r0x00010998ade8;
          puVar12 = (undefined8 *)0x0;
          goto LAB_10998ae2c;
        }
        goto LAB_10998ae34;
      }
      func_0x000107c2c4d8(*(long *)(param_1 + 0x158) + 8,&UNK_10f590d53,0x36);
      *(undefined4 *)(*(long *)(param_1 + 0x158) + 4) = 2;
LAB_10998afac:
      uStack_288 = 0;
      uStack_230 = 0;
      lStack_270 = 0;
      uStack_278 = 0;
      dStack_260 = 0.0;
      dStack_268 = 0.0;
      lStack_250 = 0;
      uStack_258 = 0;
      uStack_240 = 0;
      lStack_248 = 0;
      uStack_238 = uStack_238 & 0xffffffff00000000;
      FUN_1099a9f0c(&uStack_288,&UNK_10f590c32,0x47,2,FUN_1099aa768,0);
      FUN_1092b4db8(puStack_280 + 0xea8,&UNK_10f58db02,0xd);
      FUN_1092b4db8();
LAB_10998b02c:
      puVar15 = &uStack_288;
      FUN_1099ab3b0(puVar15);
      return puVar15;
    }
    uStack_288 = 0;
    uStack_230 = 0;
    lStack_270 = 0;
    uStack_278 = 0;
    dStack_260 = 0.0;
    dStack_268 = 0.0;
    lStack_250 = 0;
    uStack_258 = 0;
    uStack_240 = 0;
    lStack_248 = 0;
    uStack_238 = (ulong)uStack_238._4_4_ << 0x20;
    FUN_1099a9f0c(&uStack_288,&UNK_10f590c32,0x99,3,FUN_1099aa768,0);
    uStack_411 = 0x1a;
    FUN_1092b4db8(puStack_280 + 0xea8,&UNK_10f590d1a,0x38);
  }
  puVar15 = &uStack_288;
  func_0x0001099ab7c0();
  uStack_410 = 0x3eb0c6f7a0b5ed8d;
  uStack_412 = 1;
  plVar35 = (long *)puVar15[0x2c];
  (**(code **)(*plVar35 + 0x18))
            (plVar35,&uStack_412,puVar15[0x42],puVar15 + 0x59,puVar15[0x44],puVar15[0x46],
             puVar15[0x2d]);
  if (((ulong)plVar35 & 1) == 0) {
LAB_10998d3b8:
    uVar33 = puVar15[0x2b];
    puVar16 = &UNK_10f590d8a;
    uVar37 = 0x28;
  }
  else {
    puVar15[0x32] = (ulong)((double)puVar15[0x59] + *(double *)(puVar15[0x2b] + 0x30));
    if ((char)puVar15[9] == '\x01') {
      if ((int)puVar15[0x31] == 0) {
        (**(code **)(*(long *)puVar15[0x2d] + 0x30))((long *)puVar15[0x2d],puVar15[0x56]);
        plVar35 = (long *)puVar15[0x2d];
        (**(code **)(*plVar35 + 0x28))();
        if (0 < (int)plVar35) {
          lVar38 = 0;
          do {
            *(double *)(puVar15[0x56] + lVar38 * 8) =
                 1.0 / (SQRT(*(double *)(puVar15[0x56] + lVar38 * 8)) + 1.0);
            lVar38 = lVar38 + 1;
            plVar35 = (long *)puVar15[0x2d];
            (**(code **)(*plVar35 + 0x28))();
          } while (lVar38 < (int)plVar35);
        }
      }
      (**(code **)(*(long *)puVar15[0x2d] + 0x38))((long *)puVar15[0x2d],puVar15[0x56]);
    }
    pdVar20 = (double *)puVar15[0x46];
    uVar33 = puVar15[0x47];
    pdVar18 = (double *)puVar15[0x4c];
    if (puVar15[0x4d] != uVar33) {
      _free();
      if (0 < (long)uVar33) {
        if (uVar33 >> 0x3d == 0) {
          pdVar18 = (double *)(uVar33 << 3);
          _malloc();
          if (pdVar18 != (double *)0x0) goto LAB_10998d3d4;
        }
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        goto LAB_10998d3b8;
      }
      pdVar18 = (double *)0x0;
LAB_10998d3d4:
      puVar15[0x4c] = (ulong)pdVar18;
      puVar15[0x4d] = uVar33;
    }
    uVar21 = uVar33 - ((long)uVar33 >> 0x3f) & 0xfffffffffffffffe;
    if (1 < (long)uVar33) {
      lVar38 = 0;
      pdVar23 = pdVar18;
      pdVar39 = pdVar20;
      do {
        dVar40 = *pdVar39;
        pdVar23[1] = -pdVar39[1];
        *pdVar23 = -dVar40;
        lVar38 = lVar38 + 2;
        pdVar23 = pdVar23 + 2;
        pdVar39 = pdVar39 + 2;
      } while (lVar38 < (long)uVar21);
    }
    lVar38 = (long)uVar33 % 2;
    if (lVar38 != 0 && lVar38 < 0 == SBORROW8(uVar33,uVar21)) {
      pdVar20 = pdVar20 + ((long)uVar33 / 2) * 2;
      pdVar18 = pdVar18 + ((long)uVar33 / 2) * 2;
      do {
        *pdVar18 = -*pdVar20;
        lVar38 = lVar38 + -1;
        pdVar20 = pdVar20 + 1;
        pdVar18 = pdVar18 + 1;
      } while (lVar38 != 0);
    }
    plVar35 = (long *)puVar15[0x2c];
    (**(code **)(*plVar35 + 0x20))(plVar35,puVar15[0x42],puVar15[0x4c],puVar15[0x4e]);
    if (((ulong)plVar35 & 1) != 0) {
      uVar33 = puVar15[0x4f];
      if (uVar33 == 0) {
        puVar15[0x34] = 0;
        dVar40 = 0.0;
      }
      else {
        pdVar18 = (double *)puVar15[0x42];
        pdVar20 = (double *)puVar15[0x4e];
        uVar21 = uVar33 + 3;
        if (-1 < (long)uVar33) {
          uVar21 = uVar33;
        }
        if (uVar33 + 1 < 3) {
          puVar15[0x34] = (ulong)ABS(*pdVar18 - *pdVar20);
          dVar40 = (*pdVar18 - *pdVar20) * (*pdVar18 - *pdVar20);
        }
        else {
          uVar21 = uVar21 & 0xfffffffffffffffc;
          uVar17 = uVar33 - ((long)uVar33 >> 0x3f) & 0xfffffffffffffffe;
          auVar41._0_8_ = ABS(*pdVar18 - *pdVar20);
          auVar41._8_8_ = ABS(pdVar18[1] - pdVar20[1]);
          if (3 < (long)uVar33) {
            auVar44._0_8_ = ABS(pdVar18[2] - pdVar20[2]);
            auVar44._8_8_ = ABS(pdVar18[3] - pdVar20[3]);
            if (7 < uVar33) {
              pdVar23 = pdVar20 + 6;
              pdVar39 = pdVar18 + 6;
              lVar38 = 4;
              do {
                auVar7._8_8_ = ABS(pdVar39[-1] - pdVar23[-1]);
                auVar7._0_8_ = ABS(pdVar39[-2] - pdVar23[-2]);
                auVar41 = NEON_fmax(auVar41,auVar7,8);
                auVar8._8_8_ = ABS(pdVar39[1] - pdVar23[1]);
                auVar8._0_8_ = ABS(*pdVar39 - *pdVar23);
                auVar44 = NEON_fmax(auVar44,auVar8,8);
                lVar38 = lVar38 + 4;
                pdVar23 = pdVar23 + 4;
                pdVar39 = pdVar39 + 4;
              } while (lVar38 < (long)uVar21);
            }
            auVar41 = NEON_fmax(auVar41,auVar44,8);
            if ((long)uVar21 < (long)uVar17) {
              auVar45._0_8_ = ABS(pdVar18[uVar21] - pdVar20[uVar21]);
              auVar45._8_8_ = ABS((pdVar18 + uVar21)[1] - (pdVar20 + uVar21)[1]);
              auVar41 = NEON_fmax(auVar41,auVar45,8);
            }
          }
          dVar40 = auVar41._8_8_;
          if (auVar41._8_8_ <= auVar41._0_8_) {
            dVar40 = auVar41._0_8_;
          }
          lVar38 = (long)uVar33 % 2;
          pdVar23 = pdVar18 + ((long)uVar33 / 2) * 2;
          pdVar39 = pdVar20 + ((long)uVar33 / 2) * 2;
          dVar42 = dVar40;
          if (lVar38 != 0 && lVar38 < 0 == SBORROW8(uVar33,uVar17)) {
            do {
              dVar40 = ABS(*pdVar23 - *pdVar39);
              if (ABS(*pdVar23 - *pdVar39) <= dVar42) {
                dVar40 = dVar42;
              }
              lVar38 = lVar38 + -1;
              pdVar23 = pdVar23 + 1;
              pdVar39 = pdVar39 + 1;
              dVar42 = dVar40;
            } while (lVar38 != 0);
          }
          puVar15[0x34] = (ulong)dVar40;
          dVar40 = (*pdVar18 - *pdVar20) * (*pdVar18 - *pdVar20);
          dVar42 = (pdVar18[1] - pdVar20[1]) * (pdVar18[1] - pdVar20[1]);
          if (3 < (long)uVar33) {
            dVar49 = (pdVar18[2] - pdVar20[2]) * (pdVar18[2] - pdVar20[2]);
            dVar43 = (pdVar18[3] - pdVar20[3]) * (pdVar18[3] - pdVar20[3]);
            if (7 < uVar33) {
              pdVar23 = pdVar20 + 6;
              pdVar39 = pdVar18 + 6;
              lVar38 = 4;
              do {
                dVar40 = dVar40 + (pdVar39[-2] - pdVar23[-2]) * (pdVar39[-2] - pdVar23[-2]);
                dVar42 = dVar42 + (pdVar39[-1] - pdVar23[-1]) * (pdVar39[-1] - pdVar23[-1]);
                dVar49 = dVar49 + (*pdVar39 - *pdVar23) * (*pdVar39 - *pdVar23);
                dVar43 = dVar43 + (pdVar39[1] - pdVar23[1]) * (pdVar39[1] - pdVar23[1]);
                lVar38 = lVar38 + 4;
                pdVar23 = pdVar23 + 4;
                pdVar39 = pdVar39 + 4;
              } while (lVar38 < (long)uVar21);
            }
            dVar40 = dVar49 + dVar40;
            dVar42 = dVar43 + dVar42;
            if ((long)uVar21 < (long)uVar17) {
              dVar49 = pdVar18[uVar21] - pdVar20[uVar21];
              dVar43 = (pdVar18 + uVar21)[1] - (pdVar20 + uVar21)[1];
              dVar40 = dVar40 + dVar49 * dVar49;
              dVar42 = dVar42 + dVar43 * dVar43;
            }
          }
          dVar40 = dVar40 + dVar42;
          lVar38 = (long)uVar33 % 2;
          pdVar20 = pdVar20 + ((long)uVar33 / 2) * 2;
          pdVar18 = pdVar18 + ((long)uVar33 / 2) * 2;
          if (lVar38 != 0 && lVar38 < 0 == SBORROW8(uVar33,uVar17)) {
            do {
              dVar40 = dVar40 + (*pdVar18 - *pdVar20) * (*pdVar18 - *pdVar20);
              lVar38 = lVar38 + -1;
              pdVar20 = pdVar20 + 1;
              pdVar18 = pdVar18 + 1;
            } while (lVar38 != 0);
          }
        }
      }
      puVar15[0x35] = (ulong)SQRT(dVar40);
      return (ulong *)0x1;
    }
    uVar33 = puVar15[0x2b];
    puVar16 = &UNK_10f58df41;
    uVar37 = 0x34;
  }
  func_0x000107c2c4d8(uVar33 + 8,puVar16,uVar37);
  *(undefined4 *)(puVar15[0x2b] + 4) = 2;
  return (ulong *)0x0;
code_r0x00010998ade8:
  if (uVar33 >> 0x3d == 0) {
    puVar12 = (undefined8 *)(uVar33 << 3);
    _malloc();
    if (puVar12 != (undefined8 *)0x0) {
LAB_10998ae2c:
      *(undefined8 **)(param_1 + 0x210) = puVar12;
      *(ulong *)(param_1 + 0x218) = uVar33;
LAB_10998ae34:
      uVar21 = uVar33 - ((long)uVar33 >> 0x3f) & 0xfffffffffffffffe;
      if (1 < (long)uVar33) {
        lVar38 = 0;
        puVar32 = puVar12;
        puVar25 = puVar31;
        do {
          uVar37 = *puVar25;
          puVar32[1] = puVar25[1];
          *puVar32 = uVar37;
          lVar38 = lVar38 + 2;
          puVar32 = puVar32 + 2;
          puVar25 = puVar25 + 2;
        } while (lVar38 < (long)uVar21);
      }
      lVar38 = (long)uVar33 % 2;
      if (lVar38 != 0 && lVar38 < 0 == SBORROW8(uVar33,uVar21)) {
        puVar31 = puVar31 + ((long)uVar33 / 2) * 2;
        puVar12 = puVar12 + ((long)uVar33 / 2) * 2;
        do {
          *puVar12 = *puVar31;
          lVar38 = lVar38 + -1;
          puVar31 = puVar31 + 1;
          puVar12 = puVar12 + 1;
        } while (lVar38 != 0);
      }
      uVar33 = *(ulong *)(param_1 + 0x218);
      if (uVar33 == 0) {
        dVar40 = 0.0;
      }
      else {
        pdVar18 = (double *)*puStack_360;
        uVar21 = uVar33 + 3;
        if (-1 < (long)uVar33) {
          uVar21 = uVar33;
        }
        if (uVar33 + 1 < 3) {
          dVar40 = *pdVar18 * *pdVar18;
        }
        else {
          uVar17 = uVar33 - ((long)uVar33 >> 0x3f) & 0xfffffffffffffffe;
          dVar40 = *pdVar18 * *pdVar18;
          dVar42 = pdVar18[1] * pdVar18[1];
          if (3 < (long)uVar33) {
            uVar21 = uVar21 & 0xfffffffffffffffc;
            dVar49 = pdVar18[2] * pdVar18[2];
            dVar43 = pdVar18[3] * pdVar18[3];
            if (7 < uVar33) {
              pdVar20 = pdVar18 + 6;
              lVar38 = 4;
              do {
                dVar40 = dVar40 + pdVar20[-2] * pdVar20[-2];
                dVar42 = dVar42 + pdVar20[-1] * pdVar20[-1];
                dVar49 = dVar49 + *pdVar20 * *pdVar20;
                dVar43 = dVar43 + pdVar20[1] * pdVar20[1];
                lVar38 = lVar38 + 4;
                pdVar20 = pdVar20 + 4;
              } while (lVar38 < (long)uVar21);
            }
            dVar40 = dVar49 + dVar40;
            dVar42 = dVar43 + dVar42;
            if ((long)uVar21 < (long)uVar17) {
              dVar49 = pdVar18[uVar21];
              dVar43 = (pdVar18 + uVar21)[1];
              dVar40 = dVar40 + dVar49 * dVar49;
              dVar42 = dVar42 + dVar43 * dVar43;
            }
          }
          dVar40 = dVar40 + dVar42;
          lVar38 = (long)uVar33 % 2;
          if (lVar38 != 0 && lVar38 < 0 == SBORROW8(uVar33,uVar17)) {
            pdVar18 = pdVar18 + ((long)uVar33 / 2) * 2;
            do {
              dVar40 = dVar40 + *pdVar18 * *pdVar18;
              lVar38 = lVar38 + -1;
              pdVar18 = pdVar18 + 1;
            } while (lVar38 != 0);
          }
        }
      }
      *(double *)(param_1 + 0x2c0) = SQRT(dVar40);
LAB_10998af68:
      uVar33 = param_1;
      FUN_10998d268(param_1,1);
      if ((uVar33 & 1) != 0) {
        *(double *)(*(long *)(param_1 + 0x158) + 0x20) =
             *(double *)(param_1 + 0x2c8) + *(double *)(*(long *)(param_1 + 0x158) + 0x30);
        *(undefined1 *)(param_1 + 0x18c) = 1;
        *(undefined1 *)(param_1 + 0x18e) = 1;
        if (*(char *)(param_1 + 0x49) == '\x01') {
          uVar29 = *(undefined4 *)(param_1 + 0x4c);
        }
        else {
          uVar29 = 0;
        }
        puVar13 = (undefined4 *)0x40;
        __Znwm();
        *puVar13 = uVar29;
        uVar37 = *(undefined8 *)(param_1 + 0x2c8);
        *(undefined8 *)(puVar13 + 8) = uVar37;
        *(undefined8 *)(puVar13 + 6) = uVar37;
        *(undefined8 *)(puVar13 + 4) = uVar37;
        *(undefined8 *)(puVar13 + 2) = uVar37;
        *(undefined8 *)(puVar13 + 10) = 0;
        *(undefined8 *)(puVar13 + 0xc) = 0;
        puVar13[0xe] = 0;
        lVar38 = *(long *)(param_1 + 0x178);
        *(undefined4 **)(param_1 + 0x178) = puVar13;
        if (lVar38 != 0) {
          __ZdlPv();
        }
        pdVar18 = (double *)(param_1 + 0x2e0);
        auVar41 = NEON_fmov(0xbff0000000000000,8);
        dVar42 = auVar41._8_8_;
        dVar40 = auVar41._0_8_;
LAB_10998b108:
        do {
          lVar38 = *(long *)(param_1 + 0x158);
          if (*(char *)(param_1 + 0x18e) == '\x01') {
            *(int *)(lVar38 + 0x50) = *(int *)(lVar38 + 0x50) + 1;
            if (*(double *)(param_1 + 0x2d0) <= *(double *)(param_1 + 0x2c8)) {
              *(undefined1 *)(param_1 + 0x18d) = 1;
            }
            else {
              *(double *)(param_1 + 0x2d0) = *(double *)(param_1 + 0x2c8);
              puVar12 = *(undefined8 **)(param_1 + 0x150);
              uVar21 = (ulong)*(int *)(param_1 + 0x200);
              puVar31 = *(undefined8 **)(param_1 + 0x210);
              uVar33 = (ulong)puVar12 >> 3 & 1;
              if ((long)uVar21 <= (long)uVar33) {
                uVar33 = uVar21;
              }
              if (((ulong)puVar12 & 7) != 0) {
                uVar33 = uVar21;
              }
              puVar32 = puVar12;
              puVar25 = puVar31;
              uVar17 = uVar33;
              if (0 < (long)uVar33) {
                do {
                  *puVar32 = *puVar25;
                  uVar17 = uVar17 - 1;
                  puVar32 = puVar32 + 1;
                  puVar25 = puVar25 + 1;
                } while (uVar17 != 0);
              }
              lVar26 = uVar21 - uVar33;
              lVar38 = (lVar26 - (lVar26 >> 0x3f) & 0xfffffffffffffffeU) + uVar33;
              if (1 < lVar26) {
                puVar32 = puVar12 + uVar33;
                puVar25 = puVar31 + uVar33;
                uVar17 = uVar33;
                do {
                  uVar37 = *puVar25;
                  puVar32[1] = puVar25[1];
                  *puVar32 = uVar37;
                  uVar17 = uVar17 + 2;
                  puVar32 = puVar32 + 2;
                  puVar25 = puVar25 + 2;
                } while ((long)uVar17 < lVar38);
              }
              if (lVar38 < (long)uVar21) {
                lVar38 = lVar26 % 2;
                puVar12 = puVar12 + uVar33 + (lVar26 / 2) * 2;
                puVar31 = puVar31 + uVar33 + (lVar26 / 2) * 2;
                do {
                  *puVar12 = *puVar31;
                  lVar38 = lVar38 + -1;
                  puVar12 = puVar12 + 1;
                  puVar31 = puVar31 + 1;
                } while (lVar38 != 0);
              }
              *(undefined1 *)(param_1 + 0x18d) = 0;
            }
          }
          else {
            *(int *)(lVar38 + 0x54) = *(int *)(lVar38 + 0x54) + 1;
          }
          uVar37 = (**(code **)(**(long **)(param_1 + 0x170) + 0x30))();
          *(undefined8 *)(param_1 + 0x1c0) = uVar37;
          _gettimeofday(&uStack_288,0);
          *(double *)(param_1 + 0x1e8) =
               ((double)(long)uStack_288 + (double)(int)puStack_280 * 1e-06) -
               *(double *)(param_1 + 0x2f0);
          _gettimeofday(&uStack_288,0);
          lVar38 = *(long *)(param_1 + 0x158);
          *(double *)(param_1 + 0x1f8) =
               (((double)(long)uStack_288 + (double)(int)puStack_280 * 1e-06) -
               *(double *)(param_1 + 0x2e8)) + *(double *)(lVar38 + 0x60);
          puVar12 = *(undefined8 **)(lVar38 + 0x40);
          if (*(undefined8 **)(lVar38 + 0x48) <= puVar12) {
            lVar26 = *(long *)(lVar38 + 0x38);
            uVar33 = ((long)puVar12 - lVar26 >> 3) * -0x1111111111111111 + 1;
            if (uVar33 < 0x222222222222223) {
              lVar22 = (long)*(undefined8 **)(lVar38 + 0x48) - lVar26 >> 3;
              uVar21 = lVar22 * -0x2222222222222222;
              if (uVar21 < uVar33 || uVar21 - uVar33 == 0) {
                uVar21 = uVar33;
              }
              if (0x111111111111110 < (ulong)(lVar22 * -0x1111111111111111)) {
                uVar21 = 0x222222222222222;
              }
              if (uVar21 < 0x222222222222223) {
                lVar22 = uVar21 * 0x78;
                __Znwm();
                puVar31 = (undefined8 *)(lVar22 + ((long)puVar12 - lVar26));
                uVar37 = *(undefined8 *)(param_1 + 0x1c8);
                uVar56 = *(undefined8 *)(param_1 + 0x1d8);
                uVar55 = *(undefined8 *)(param_1 + 0x1e0);
                puVar31[9] = *(undefined8 *)(param_1 + 0x1d0);
                puVar31[8] = uVar37;
                puVar31[0xb] = uVar55;
                puVar31[10] = uVar56;
                uVar37 = *(undefined8 *)(param_1 + 0x1e8);
                puVar31[0xd] = *(undefined8 *)(param_1 + 0x1f0);
                puVar31[0xc] = uVar37;
                puVar31[0xe] = *(undefined8 *)(param_1 + 0x1f8);
                uVar37 = *(undefined8 *)piVar2;
                uVar56 = *(undefined8 *)(param_1 + 0x198);
                uVar55 = *(undefined8 *)(param_1 + 0x1a0);
                puVar31[1] = *(undefined8 *)(param_1 + 400);
                *puVar31 = uVar37;
                puVar31[3] = uVar55;
                puVar31[2] = uVar56;
                uVar37 = *(undefined8 *)(param_1 + 0x1a8);
                uVar56 = *(undefined8 *)(param_1 + 0x1b8);
                uVar55 = *(undefined8 *)(param_1 + 0x1c0);
                puVar12 = puVar31 + 0xf;
                puVar31[5] = *(undefined8 *)(param_1 + 0x1b0);
                puVar31[4] = uVar37;
                puVar31[7] = uVar55;
                puVar31[6] = uVar56;
                _memcpy();
                *(long *)(lVar38 + 0x38) = lVar22;
                *(undefined8 **)(lVar38 + 0x40) = puVar12;
                *(ulong *)(lVar38 + 0x48) = lVar22 + uVar21 * 0x78;
                if (lVar26 != 0) {
                  __ZdlPv(lVar26);
                }
                goto LAB_10998b388;
              }
              func_0x000104c4f740();
            }
            FUN_109962038();
            goto LAB_10998d0e8;
          }
          uVar37 = *(undefined8 *)piVar2;
          uVar56 = *(undefined8 *)(param_1 + 400);
          uVar55 = *(undefined8 *)(param_1 + 0x198);
          uVar9 = *(undefined8 *)(param_1 + 0x1a0);
          uVar47 = *(undefined8 *)(param_1 + 0x1a8);
          uVar54 = *(undefined8 *)(param_1 + 0x1c0);
          uVar52 = *(undefined8 *)(param_1 + 0x1b8);
          puVar12[5] = *(undefined8 *)(param_1 + 0x1b0);
          puVar12[4] = uVar47;
          puVar12[7] = uVar54;
          puVar12[6] = uVar52;
          puVar12[1] = uVar56;
          *puVar12 = uVar37;
          puVar12[3] = uVar9;
          puVar12[2] = uVar55;
          uVar37 = *(undefined8 *)(param_1 + 0x1c8);
          uVar56 = *(undefined8 *)(param_1 + 0x1d0);
          uVar55 = *(undefined8 *)(param_1 + 0x1d8);
          uVar9 = *(undefined8 *)(param_1 + 0x1e0);
          uVar52 = *(undefined8 *)(param_1 + 0x1f0);
          uVar47 = *(undefined8 *)(param_1 + 0x1e8);
          puVar12[0xe] = *(undefined8 *)(param_1 + 0x1f8);
          puVar12[0xb] = uVar9;
          puVar12[10] = uVar55;
          puVar12[0xd] = uVar52;
          puVar12[0xc] = uVar47;
          puVar12[9] = uVar56;
          puVar12[8] = uVar37;
          puVar12 = puVar12 + 0xf;
LAB_10998b388:
          *(undefined8 **)(lVar38 + 0x40) = puVar12;
          puVar14 = puVar15;
          FUN_109966408(puVar15,piVar2,*(undefined8 *)(param_1 + 0x158));
          if ((int)puVar14 == 0) {
            return puVar14;
          }
          _gettimeofday(&uStack_288,0);
          if (*(double *)(param_1 + 0x10) <=
              (((double)(long)uStack_288 + (double)(int)puStack_280 * 1e-06) -
              *(double *)(param_1 + 0x2e8)) + *(double *)(*(long *)(param_1 + 0x158) + 0x60)) {
            puVar15 = (ulong *)&UNK_10f590f8c;
            FUN_109988e2c(&uStack_288,&UNK_10f590f8c);
            lVar38 = *(long *)(param_1 + 0x158);
            if (*(char *)(lVar38 + 0x1f) < '\0') {
              puVar15 = *(ulong **)(lVar38 + 8);
              __ZdlPv(puVar15);
            }
            *(ulong *)(lVar38 + 0x18) = uStack_278;
            *(undefined8 **)(lVar38 + 0x10) = puStack_280;
            *(ulong *)(lVar38 + 8) = uStack_288;
            *(undefined4 *)(*(long *)(param_1 + 0x158) + 4) = 1;
            if (*(char *)(param_1 + 0x180) != '\x01') {
              return puVar15;
            }
            if (piRam000000011373d120 == (int *)0x0) {
              puVar15 = (ulong *)0x11373d120;
              FUN_1099adbb8(0x11373d120,0x11382bb14,&UNK_10f590c32,1);
              if (((ulong)puVar15 & 1) == 0) {
                return puVar15;
              }
            }
            else if (*piRam000000011373d120 < 1) {
              return puVar15;
            }
            uStack_288 = 0;
            uStack_230 = 0;
            lStack_270 = 0;
            uStack_278 = 0;
            dStack_260 = 0.0;
            dStack_268 = 0.0;
            lStack_250 = 0;
            uStack_258 = 0;
            uStack_240 = 0;
            lStack_248 = 0;
            uStack_238 = uStack_238 & 0xffffffff00000000;
            FUN_1099a9f0c(&uStack_288,&UNK_10f590c32,0x27f,0,FUN_1099aa768,0);
            FUN_1092b4db8(puStack_280 + 0xea8,&UNK_10f58db02,0xd);
            FUN_1092b4db8();
            goto LAB_10998b02c;
          }
          if (*(int *)puVar15 <= *piVar2) {
            puVar15 = (ulong *)&UNK_10f590fc6;
            FUN_109988e2c(&uStack_288,&UNK_10f590fc6);
            lVar38 = *(long *)(param_1 + 0x158);
            if (*(char *)(lVar38 + 0x1f) < '\0') {
              puVar15 = *(ulong **)(lVar38 + 8);
              __ZdlPv(puVar15);
            }
            *(ulong *)(lVar38 + 0x18) = uStack_278;
            *(undefined8 **)(lVar38 + 0x10) = puStack_280;
            *(ulong *)(lVar38 + 8) = uStack_288;
            *(undefined4 *)(*(long *)(param_1 + 0x158) + 4) = 1;
            if (*(char *)(param_1 + 0x180) != '\x01') {
              return puVar15;
            }
            if (piRam000000011373d140 == (int *)0x0) {
              puVar15 = (ulong *)0x11373d140;
              FUN_1099adbb8(0x11373d140,0x11382bb14,&UNK_10f590c32,1);
              if (((ulong)puVar15 & 1) == 0) {
                return puVar15;
              }
            }
            else if (*piRam000000011373d140 < 1) {
              return puVar15;
            }
            uStack_288 = 0;
            uStack_230 = 0;
            lStack_270 = 0;
            uStack_278 = 0;
            dStack_260 = 0.0;
            dStack_268 = 0.0;
            lStack_250 = 0;
            uStack_258 = 0;
            uStack_240 = 0;
            lStack_248 = 0;
            uStack_238 = uStack_238 & 0xffffffff00000000;
            FUN_1099a9f0c(&uStack_288,&UNK_10f590c32,0x293,0,FUN_1099aa768,0);
            FUN_1092b4db8(puStack_280 + 0xea8,&UNK_10f58db02,0xd);
            FUN_1092b4db8();
            goto LAB_10998b02c;
          }
          if ((*(char *)(param_1 + 0x18e) == '\x01') &&
             (*(double *)(param_1 + 0x1a0) <= *(double *)(param_1 + 0x20))) {
            puVar15 = (ulong *)&UNK_10f58db4c;
            FUN_109988e2c(&uStack_288,&UNK_10f58db4c);
            lVar38 = *(long *)(param_1 + 0x158);
            if (*(char *)(lVar38 + 0x1f) < '\0') {
              puVar15 = *(ulong **)(lVar38 + 8);
              __ZdlPv(puVar15);
            }
            *(ulong *)(lVar38 + 0x18) = uStack_278;
            *(undefined8 **)(lVar38 + 0x10) = puStack_280;
            *(ulong *)(lVar38 + 8) = uStack_288;
            *(undefined4 *)(*(long *)(param_1 + 0x158) + 4) = 0;
            if (*(char *)(param_1 + 0x180) != '\x01') {
              return puVar15;
            }
            if (piRam000000011373d160 == (int *)0x0) {
              puVar15 = (ulong *)0x11373d160;
              FUN_1099adbb8(0x11373d160,0x11382bb14,&UNK_10f590c32,1);
              if (((ulong)puVar15 & 1) == 0) {
                return puVar15;
              }
            }
            else if (*piRam000000011373d160 < 1) {
              return puVar15;
            }
            uStack_288 = 0;
            uStack_230 = 0;
            lStack_270 = 0;
            uStack_278 = 0;
            dStack_260 = 0.0;
            dStack_268 = 0.0;
            lStack_250 = 0;
            uStack_258 = 0;
            uStack_240 = 0;
            lStack_248 = 0;
            uStack_238 = uStack_238 & 0xffffffff00000000;
            FUN_1099a9f0c(&uStack_288,&UNK_10f590c32,0x2a7,0,FUN_1099aa768,0);
            FUN_1092b4db8(puStack_280 + 0xea8,&UNK_10f58db02,0xd);
            FUN_1092b4db8();
            goto LAB_10998b02c;
          }
          if (*(double *)(param_1 + 0x1c0) <= *(double *)(param_1 + 0x90)) {
            puVar15 = (ulong *)&UNK_10f591006;
            FUN_109988e2c(&uStack_288,&UNK_10f591006);
            lVar38 = *(long *)(param_1 + 0x158);
            if (*(char *)(lVar38 + 0x1f) < '\0') {
              puVar15 = *(ulong **)(lVar38 + 8);
              __ZdlPv(puVar15);
            }
            *(ulong *)(lVar38 + 0x18) = uStack_278;
            *(undefined8 **)(lVar38 + 0x10) = puStack_280;
            *(ulong *)(lVar38 + 8) = uStack_288;
            *(undefined4 *)(*(long *)(param_1 + 0x158) + 4) = 0;
            if (*(char *)(param_1 + 0x180) != '\x01') {
              return puVar15;
            }
            if (piRam000000011373d180 == (int *)0x0) {
              puVar15 = (ulong *)0x11373d180;
              FUN_1099adbb8(0x11373d180,0x11382bb14,&UNK_10f590c32,1);
              if (((ulong)puVar15 & 1) == 0) {
                return puVar15;
              }
            }
            else if (*piRam000000011373d180 < 1) {
              return puVar15;
            }
            uStack_288 = 0;
            uStack_230 = 0;
            lStack_270 = 0;
            uStack_278 = 0;
            dStack_260 = 0.0;
            dStack_268 = 0.0;
            lStack_250 = 0;
            uStack_258 = 0;
            uStack_240 = 0;
            lStack_248 = 0;
            uStack_238 = uStack_238 & 0xffffffff00000000;
            FUN_1099a9f0c(&uStack_288,&UNK_10f590c32,0x2ba,0,FUN_1099aa768,0);
            FUN_1092b4db8(puStack_280 + 0xea8,&UNK_10f58db02,0xd);
            FUN_1092b4db8();
            goto LAB_10998b02c;
          }
          _gettimeofday(&uStack_288,0);
          *(double *)(param_1 + 0x2f0) = (double)(long)uStack_288 + (double)(int)puStack_280 * 1e-06
          ;
          uVar56 = *(undefined8 *)(param_1 + 0x1a0);
          uVar37 = *(undefined8 *)(param_1 + 0x1a8);
          *(undefined8 *)(param_1 + 0x1b0) = 0;
          *(undefined8 *)(param_1 + 0x1a8) = 0;
          *(undefined8 *)(param_1 + 0x1c0) = 0;
          *(undefined8 *)(param_1 + 0x1b8) = 0;
          *(undefined8 *)(param_1 + 0x1d0) = 0;
          *(undefined8 *)(param_1 + 0x1c8) = 0;
          *(undefined8 *)(param_1 + 0x1e0) = 0;
          *(undefined8 *)(param_1 + 0x1d8) = 0;
          *(undefined8 *)(param_1 + 0x1f0) = 0;
          *(undefined8 *)(param_1 + 0x1e8) = 0;
          *(undefined8 *)(param_1 + 0x1f8) = 0;
          *(undefined8 *)(param_1 + 400) = 0;
          piVar2[0] = 0;
          piVar2[1] = 0;
          *(undefined8 *)(param_1 + 0x1a0) = 0;
          *(undefined8 *)(param_1 + 0x198) = 0;
          *(int *)(param_1 + 0x188) = *(int *)(param_4[8] + -0x78) + 1;
          _gettimeofday(&uStack_288,0);
          uVar33 = uStack_288;
          iVar34 = (int)puStack_280;
          *(undefined1 *)(param_1 + 0x18c) = 0;
          lStack_2e0 = CONCAT44(lStack_2e0._4_4_,1);
          puStack_2d0 = (undefined8 *)0x0;
          uStack_2c8 = 0;
          uStack_2d8 = 0;
          lStack_2e8 = *(long *)(param_1 + 0x40);
          piVar19 = *(int **)(param_1 + 0x50);
          piVar3 = *(int **)(param_1 + 0x58);
          if (piVar19 == piVar3) {
LAB_10998b4c8:
            if (piVar19 != piVar3) {
              lStack_2e0 = CONCAT44(lStack_2e0._4_4_,*(undefined4 *)(param_1 + 0x68));
              FUN_109988e2c(&dStack_330,&UNK_10f590db3);
              FUN_109950bfc(&uStack_288,param_1 + 0x70,&dStack_330);
              if ((long)uStack_2c8 < 0) {
                __ZdlPv(uStack_2d8);
              }
              puStack_2d0 = puStack_280;
              uStack_2d8 = uStack_288;
              uStack_2c8 = uStack_278;
              uStack_278 = uStack_278 & 0xffffffffffffff;
              uStack_288 = uStack_288 & 0xffffffffffffff00;
              if (cStack_319 < '\0') {
                __ZdlPv(dStack_330);
              }
            }
          }
          else {
            do {
              if (*piVar19 == *piVar2) goto LAB_10998b4c8;
              piVar19 = piVar19 + 1;
            } while (piVar19 != piVar3);
          }
          plVar35 = &lStack_2e8;
          (**(code **)(**(long **)(param_1 + 0x170) + 0x10))
                    (*(long **)(param_1 + 0x170),plVar35,*(undefined8 *)(param_1 + 0x168),
                     *(undefined8 *)(param_1 + 0x220),*(undefined8 *)(param_1 + 0x280));
          uVar21 = (ulong)plVar35 >> 0x20;
          if (uVar21 == 3) {
            func_0x000107c2c4d8(*(long *)(param_1 + 0x158) + 8,&UNK_10f590dcf,0x62);
            *(undefined4 *)(*(long *)(param_1 + 0x158) + 4) = 2;
          }
          else {
            _gettimeofday(&uStack_288,0);
            *(double *)(param_1 + 0x1f0) =
                 ((double)(long)uStack_288 + (double)(int)puStack_280 * 1e-06) -
                 ((double)(long)uVar33 + (double)iVar34 * 1e-06);
            *(int *)(param_1 + 0x1e4) = (int)plVar35;
            if (uVar21 != 2) {
              uVar55 = *(undefined8 *)(param_1 + 0x250);
              if (0 < *(long *)(param_1 + 600)) {
                _bzero(uVar55,*(long *)(param_1 + 600) << 3);
              }
              (**(code **)(**(long **)(param_1 + 0x168) + 0x10))
                        (*(long **)(param_1 + 0x168),*(undefined8 *)(param_1 + 0x280),uVar55);
              uVar33 = *(ulong *)(param_1 + 600);
              if (uVar33 == 0) {
                *(undefined8 *)(param_1 + 0x2d8) = 0x8000000000000000;
                *(undefined1 *)(param_1 + 0x18c) = 0;
              }
              else {
                pdVar20 = *(double **)(param_1 + 0x250);
                pdVar23 = *(double **)(param_1 + 0x220);
                uVar17 = uVar33 + 3;
                if (-1 < (long)uVar33) {
                  uVar17 = uVar33;
                }
                if (uVar33 + 1 < 3) {
                  dVar49 = *pdVar20 * (*pdVar23 + *pdVar20 * 0.5);
                }
                else {
                  uVar36 = uVar33 - ((long)uVar33 >> 0x3f) & 0xfffffffffffffffe;
                  auVar41 = NEON_fmov(0x3fe0000000000000,8);
                  dVar50 = auVar41._0_8_;
                  dVar46 = auVar41._8_8_;
                  dVar49 = *pdVar20 * (*pdVar23 + *pdVar20 * dVar50);
                  dVar43 = pdVar20[1] * (pdVar23[1] + pdVar20[1] * dVar46);
                  if (3 < (long)uVar33) {
                    uVar17 = uVar17 & 0xfffffffffffffffc;
                    dVar48 = pdVar20[2] * (pdVar23[2] + pdVar20[2] * dVar50);
                    dVar53 = pdVar20[3] * (pdVar23[3] + pdVar20[3] * dVar46);
                    if (7 < uVar33) {
                      pdVar39 = pdVar23 + 6;
                      pdVar24 = pdVar20 + 6;
                      lVar38 = 4;
                      do {
                        dVar49 = dVar49 + pdVar24[-2] * (pdVar39[-2] + pdVar24[-2] * dVar50);
                        dVar43 = dVar43 + pdVar24[-1] * (pdVar39[-1] + pdVar24[-1] * dVar46);
                        dVar48 = dVar48 + *pdVar24 * (*pdVar39 + *pdVar24 * dVar50);
                        dVar53 = dVar53 + pdVar24[1] * (pdVar39[1] + pdVar24[1] * dVar46);
                        lVar38 = lVar38 + 4;
                        pdVar39 = pdVar39 + 4;
                        pdVar24 = pdVar24 + 4;
                      } while (lVar38 < (long)uVar17);
                    }
                    dVar49 = dVar48 + dVar49;
                    dVar43 = dVar53 + dVar43;
                    if ((long)uVar17 < (long)uVar36) {
                      dVar53 = (pdVar20 + uVar17)[1];
                      dVar48 = pdVar20[uVar17];
                      dVar49 = dVar49 + dVar48 * (pdVar23[uVar17] + dVar48 * dVar50);
                      dVar43 = dVar43 + dVar53 * ((pdVar23 + uVar17)[1] + dVar53 * dVar46);
                    }
                  }
                  dVar49 = dVar49 + dVar43;
                  lVar38 = (long)uVar33 % 2;
                  if (lVar38 != 0 && lVar38 < 0 == SBORROW8(uVar33,uVar36)) {
                    pdVar20 = pdVar20 + ((long)uVar33 / 2) * 2;
                    pdVar23 = pdVar23 + ((long)uVar33 / 2) * 2;
                    do {
                      dVar49 = dVar49 + *pdVar20 * (*pdVar23 + *pdVar20 * 0.5);
                      lVar38 = lVar38 + -1;
                      pdVar20 = pdVar20 + 1;
                      pdVar23 = pdVar23 + 1;
                    } while (lVar38 != 0);
                  }
                }
                *(double *)(param_1 + 0x2d8) = -dVar49;
                *(bool *)(param_1 + 0x18c) = dVar49 < 0.0;
                if (dVar49 < 0.0) {
                  pdVar23 = *(double **)(param_1 + 0x280);
                  pdVar39 = *(double **)(param_1 + 0x2b0);
                  uVar33 = *(ulong *)(param_1 + 0x2b8);
                  pdVar20 = *(double **)(param_1 + 0x290);
                  if (*(ulong *)(param_1 + 0x298) != uVar33) {
                    _free();
                    if ((long)uVar33 < 1) {
                      pdVar20 = (double *)0x0;
                    }
                    else {
                      if (uVar33 >> 0x3d != 0) goto LAB_10998d0f0;
                      pdVar20 = (double *)(uVar33 << 3);
                      _malloc();
                      if (pdVar20 == (double *)0x0) goto LAB_10998d0f0;
                    }
                    *(double **)(param_1 + 0x290) = pdVar20;
                    *(ulong *)(param_1 + 0x298) = uVar33;
                  }
                  uVar17 = uVar33 - ((long)uVar33 >> 0x3f) & 0xfffffffffffffffe;
                  if (1 < (long)uVar33) {
                    lVar38 = 0;
                    pdVar24 = pdVar20;
                    pdVar27 = pdVar23;
                    pdVar28 = pdVar39;
                    do {
                      dVar49 = *pdVar27;
                      dVar43 = *pdVar28;
                      pdVar24[1] = pdVar27[1] * pdVar28[1];
                      *pdVar24 = dVar49 * dVar43;
                      lVar38 = lVar38 + 2;
                      pdVar24 = pdVar24 + 2;
                      pdVar27 = pdVar27 + 2;
                      pdVar28 = pdVar28 + 2;
                    } while (lVar38 < (long)uVar17);
                  }
                  lVar38 = (long)uVar33 % 2;
                  if (lVar38 != 0 && lVar38 < 0 == SBORROW8(uVar33,uVar17)) {
                    lVar26 = (long)uVar33 / 2;
                    pdVar39 = pdVar39 + lVar26 * 2;
                    pdVar23 = pdVar23 + lVar26 * 2;
                    pdVar20 = pdVar20 + lVar26 * 2;
                    do {
                      *pdVar20 = *pdVar23 * *pdVar39;
                      lVar38 = lVar38 + -1;
                      pdVar39 = pdVar39 + 1;
                      pdVar23 = pdVar23 + 1;
                      pdVar20 = pdVar20 + 1;
                    } while (lVar38 != 0);
                  }
                  *(undefined4 *)(param_1 + 0x2f8) = 0;
                }
              }
              if ((*(char *)(param_1 + 0x180) == '\x01') && ((*(byte *)(param_1 + 0x18c) & 1) == 0))
              {
                if (piRam000000011373d0a0 == (int *)0x0) {
                  iVar34 = 0x1373d0a0;
                  FUN_1099adbb8(0x11373d0a0,0x11382bb14,&UNK_10f590c32,1);
                  if (iVar34 != 0) goto LAB_10998b884;
                }
                else if (0 < *piRam000000011373d0a0) {
LAB_10998b884:
                  uStack_288 = 0;
                  uStack_230 = 0;
                  lStack_270 = 0;
                  uStack_278 = 0;
                  dStack_260 = 0.0;
                  dStack_268 = 0.0;
                  lStack_250 = 0;
                  uStack_258 = 0;
                  uStack_240 = 0;
                  lStack_248 = 0;
                  uStack_238 = uStack_238 & 0xffffffff00000000;
                  FUN_1099a9f0c(&uStack_288,&UNK_10f590c32,0x1b8,0,FUN_1099aa768,0);
                  FUN_1092b4db8(puStack_280 + 0xea8,&UNK_10f590e32,0x1c);
                  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd
                            (*(undefined8 *)(param_1 + 0x2c8));
                  FUN_1092b4db8();
                  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd
                            (*(undefined8 *)(param_1 + 0x2d8));
                  FUN_1092b4db8();
                  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd
                            (*(double *)(param_1 + 0x2d8) / *(double *)(param_1 + 0x2c8));
                  FUN_1099ab3b0(&uStack_288);
                }
              }
            }
          }
          if ((long)uStack_2c8 < 0) {
            __ZdlPv(uStack_2d8);
          }
          if (uVar21 == 3) {
            uStack_288 = 0;
            uStack_230 = 0;
            lStack_270 = 0;
            uStack_278 = 0;
            dStack_260 = 0.0;
            dStack_268 = 0.0;
            lStack_250 = 0;
            uStack_258 = 0;
            uStack_240 = 0;
            lStack_248 = 0;
            uStack_238 = uStack_238 & 0xffffffff00000000;
            FUN_1099a9f0c(&uStack_288,&UNK_10f590c32,0x5d,2,FUN_1099aa768,0);
            FUN_1092b4db8(puStack_280 + 0xea8,&UNK_10f58db02,0xd);
            FUN_1092b4db8();
            goto LAB_10998b02c;
          }
          if ((*(byte *)(param_1 + 0x18c) & 1) != 0) {
            if ((*(char *)(param_1 + 0xf1) == '\x01') && (0 < *(int *)(param_1 + 0xd0))) {
              uVar55 = *(undefined8 *)(param_1 + 0x2c8);
              FUN_109957fec(&dStack_330,*(undefined8 *)(param_1 + 0x160));
              uStack_2a8 = CONCAT71(uStack_2a8._1_7_,1);
              lStack_2e8 = CONCAT44(lStack_2e8._4_4_,*(undefined4 *)(param_1 + 0xac));
              uStack_2c8 = *(ulong *)(param_1 + 0xb0);
              lStack_2e0 = *(long *)(param_1 + 0xb8);
              uStack_2d8 = *(ulong *)(param_1 + 0xc0);
              puStack_2d0 = *(undefined8 **)(param_1 + 200);
              uStack_2c0 = CONCAT44(uStack_2c0._4_4_,*(undefined4 *)(param_1 + 0xd0));
              uStack_2b8 = *(undefined8 *)(param_1 + 0xd8);
              uStack_2b0 = *(undefined8 *)(param_1 + 0xe0);
              pdStack_2a0 = &dStack_330;
              uStack_348 = 0;
              uStack_340 = 0;
              lStack_338 = 0;
              FUN_109957c58(&plStack_350,0,&lStack_2e8,&uStack_348);
              uStack_288 = uStack_288 & 0xffffffffffffff00;
              dStack_260 = 0.0;
              uStack_258 = uStack_258 & 0xffffffffffffff00;
              uStack_238 = 0;
              uStack_230 = uStack_230 & 0xffffffffffffff00;
              uStack_278 = 0;
              lStack_270 = 0;
              puStack_280 = (undefined8 *)0x0;
              dStack_268 = (double)((ulong)dStack_268 & 0xffffffffffffff00);
              lStack_250 = 0;
              lStack_248 = 0;
              uStack_240 = uStack_240 & 0xffffffffffffff00;
              dStack_228 = 0.0;
              dStack_220 = (double)((ulong)dStack_220 & 0xffffffff00000000);
              dStack_210 = 0.0;
              dStack_218 = 0.0;
              dStack_200 = 0.0;
              dStack_208 = 0.0;
              uStack_1f0 = 0;
              uStack_1f8 = 0;
              lStack_1e8 = 0;
              FUN_109958188(&dStack_330,puStack_360,plStack_358);
              uVar33 = *(ulong *)(param_1 + 0x298);
              if (uVar33 == 0) {
                dVar49 = 0.0;
              }
              else {
                pdVar20 = *(double **)(param_1 + 0x230);
                pdVar23 = *(double **)(param_1 + 0x290);
                uVar21 = uVar33 + 3;
                if (-1 < (long)uVar33) {
                  uVar21 = uVar33;
                }
                if (uVar33 + 1 < 3) {
                  dVar49 = *pdVar20 * *pdVar23;
                }
                else {
                  uVar17 = uVar33 - ((long)uVar33 >> 0x3f) & 0xfffffffffffffffe;
                  dVar49 = *pdVar20 * *pdVar23;
                  dVar43 = pdVar20[1] * pdVar23[1];
                  if (3 < (long)uVar33) {
                    uVar21 = uVar21 & 0xfffffffffffffffc;
                    dVar50 = pdVar20[2] * pdVar23[2];
                    dVar46 = pdVar20[3] * pdVar23[3];
                    if (7 < uVar33) {
                      pdVar39 = pdVar23 + 6;
                      pdVar24 = pdVar20 + 6;
                      lVar38 = 4;
                      do {
                        dVar49 = dVar49 + pdVar24[-2] * pdVar39[-2];
                        dVar43 = dVar43 + pdVar24[-1] * pdVar39[-1];
                        dVar50 = dVar50 + *pdVar24 * *pdVar39;
                        dVar46 = dVar46 + pdVar24[1] * pdVar39[1];
                        lVar38 = lVar38 + 4;
                        pdVar39 = pdVar39 + 4;
                        pdVar24 = pdVar24 + 4;
                      } while (lVar38 < (long)uVar21);
                    }
                    dVar49 = dVar50 + dVar49;
                    dVar43 = dVar46 + dVar43;
                    if ((long)uVar21 < (long)uVar17) {
                      dVar49 = dVar49 + pdVar20[uVar21] * pdVar23[uVar21];
                      dVar43 = dVar43 + (pdVar20 + uVar21)[1] * (pdVar23 + uVar21)[1];
                    }
                  }
                  dVar49 = dVar49 + dVar43;
                  lVar38 = (long)uVar33 % 2;
                  if (lVar38 != 0 && lVar38 < 0 == SBORROW8(uVar33,uVar17)) {
                    pdVar20 = pdVar20 + ((long)uVar33 / 2) * 2;
                    pdVar23 = pdVar23 + ((long)uVar33 / 2) * 2;
                    do {
                      dVar49 = dVar49 + *pdVar20 * *pdVar23;
                      lVar38 = lVar38 + -1;
                      pdVar20 = pdVar20 + 1;
                      pdVar23 = pdVar23 + 1;
                    } while (lVar38 != 0);
                  }
                }
              }
              FUN_109958ac4(0x3ff0000000000000,uVar55,dVar49,plStack_350,&uStack_288);
              lVar38 = *(long *)(param_1 + 0x158);
              *(int *)(lVar38 + 0x5c) = *(int *)(lVar38 + 0x5c) + dStack_220._0_4_;
              *(double *)(lVar38 + 0xc0) = dStack_210 + *(double *)(lVar38 + 0xc0);
              *(double *)(lVar38 + 0xb8) = dStack_218 + *(double *)(lVar38 + 0xb8);
              *(double *)(lVar38 + 0xd0) = dStack_200 + *(double *)(lVar38 + 0xd0);
              *(double *)(lVar38 + 200) = dStack_208 + *(double *)(lVar38 + 200);
              if ((char)uStack_288 == '\x01') {
                pdVar20 = *(double **)(param_1 + 0x290);
                lVar38 = *(long *)(param_1 + 0x298);
                uVar33 = lVar38 - (lVar38 >> 0x3f) & 0xfffffffffffffffe;
                if (1 < lVar38) {
                  lVar26 = 0;
                  pdVar23 = pdVar20;
                  do {
                    pdVar23[1] = pdVar23[1] * (double)puStack_280;
                    *pdVar23 = *pdVar23 * (double)puStack_280;
                    lVar26 = lVar26 + 2;
                    pdVar23 = pdVar23 + 2;
                  } while (lVar26 < (long)uVar33);
                }
                lVar26 = lVar38 % 2;
                if (lVar26 != 0 && lVar26 < 0 == SBORROW8(lVar38,uVar33)) {
                  pdVar20 = pdVar20 + (lVar38 / 2) * 2;
                  do {
                    *pdVar20 = (double)puStack_280 * *pdVar20;
                    lVar26 = lVar26 + -1;
                    pdVar20 = pdVar20 + 1;
                  } while (lVar26 != 0);
                }
              }
              if (lStack_1e8 < 0) {
                __ZdlPv(uStack_1f8);
              }
              _free(lStack_250);
              _free(uStack_278);
              plVar35 = plStack_350;
              plStack_350 = (long *)0x0;
              if (plVar35 != (long *)0x0) {
                (**(code **)(*plVar35 + 8))();
              }
              if (lStack_338 < 0) {
                __ZdlPv(uStack_348);
              }
              _free(uStack_308);
              _free(uStack_318);
              _free(uStack_328);
            }
            plVar35 = *(long **)(param_1 + 0x160);
            (**(code **)(*plVar35 + 0x20))
                      (plVar35,*(undefined8 *)(param_1 + 0x210),*(undefined8 *)(param_1 + 0x290),
                       *(undefined8 *)(param_1 + 0x2a0));
            if (((ulong)plVar35 & 1) == 0) {
              if (*(char *)(param_1 + 0x180) == '\x01') {
                uStack_288 = 0;
                uStack_230 = 0;
                lStack_270 = 0;
                uStack_278 = 0;
                dStack_260 = 0.0;
                dStack_268 = 0.0;
                lStack_250 = 0;
                uStack_258 = 0;
                uStack_240 = 0;
                lStack_248 = 0;
                uStack_238 = uStack_238 & 0xffffffff00000000;
                FUN_1099a9f0c(&uStack_288,&UNK_10f590c32,0x2f8,1,FUN_1099aa768,0);
                FUN_1092b4db8(puStack_280 + 0xea8,&UNK_10f591049,0x26);
                FUN_1092b4db8();
LAB_10998bdd0:
                FUN_1099ab3b0(&uStack_288);
              }
LAB_10998bdd8:
              *pdVar18 = 1.79769313486232e+308;
            }
            else {
              plVar35 = *(long **)(param_1 + 0x160);
              uStack_288 = CONCAT62(uStack_288._2_6_,0x101);
              (**(code **)(*plVar35 + 0x18))
                        (plVar35,&uStack_288,*(undefined8 *)(param_1 + 0x2a0),pdVar18,0,0,0);
              if (((ulong)plVar35 & 1) == 0) {
                if (*(char *)(param_1 + 0x180) == '\x01') {
                  uStack_288 = 0;
                  uStack_230 = 0;
                  lStack_270 = 0;
                  uStack_278 = 0;
                  dStack_260 = 0.0;
                  dStack_268 = 0.0;
                  lStack_250 = 0;
                  uStack_258 = 0;
                  uStack_240 = 0;
                  lStack_248 = 0;
                  uStack_238 = uStack_238 & 0xffffffff00000000;
                  FUN_1099a9f0c(&uStack_288,&UNK_10f590c32,0x302,1,FUN_1099aa768,0);
                  FUN_1092b4db8(puStack_280 + 0xea8,&UNK_10f591099,0x19);
                  FUN_1092b4db8();
                  goto LAB_10998bdd0;
                }
                goto LAB_10998bdd8;
              }
            }
            *(undefined1 *)(param_1 + 0x182) = 0;
            if ((*(char *)(param_1 + 0x181) == '\x01') && (*pdVar18 < 1.79769313486232e+308)) {
              _gettimeofday(&uStack_288,0);
              uVar33 = uStack_288;
              iVar34 = (int)puStack_280;
              *(int *)(*(long *)(param_1 + 0x158) + 0x58) =
                   *(int *)(*(long *)(param_1 + 0x158) + 0x58) + 1;
              puVar31 = *(undefined8 **)(param_1 + 0x2a0);
              uVar21 = *(ulong *)(param_1 + 0x2a8);
              puVar12 = *(undefined8 **)(param_1 + 0x240);
              if (*(ulong *)(param_1 + 0x248) != uVar21) {
                _free();
                if ((long)uVar21 < 1) {
                  puVar12 = (undefined8 *)0x0;
                }
                else {
                  if (uVar21 >> 0x3d != 0) goto LAB_10998ad00;
                  puVar12 = (undefined8 *)(uVar21 << 3);
                  _malloc();
                  if (puVar12 == (undefined8 *)0x0) goto LAB_10998ad00;
                }
                *(undefined8 **)(param_1 + 0x240) = puVar12;
                *(ulong *)(param_1 + 0x248) = uVar21;
              }
              uVar17 = uVar21 - ((long)uVar21 >> 0x3f) & 0xfffffffffffffffe;
              if (1 < (long)uVar21) {
                lVar38 = 0;
                puVar32 = puVar12;
                puVar25 = puVar31;
                do {
                  uVar55 = *puVar25;
                  puVar32[1] = puVar25[1];
                  *puVar32 = uVar55;
                  lVar38 = lVar38 + 2;
                  puVar32 = puVar32 + 2;
                  puVar25 = puVar25 + 2;
                } while (lVar38 < (long)uVar17);
              }
              lVar38 = (long)uVar21 % 2;
              if (lVar38 != 0 && lVar38 < 0 == SBORROW8(uVar21,uVar17)) {
                puVar31 = puVar31 + ((long)uVar21 / 2) * 2;
                puVar12 = puVar12 + ((long)uVar21 / 2) * 2;
                do {
                  *puVar12 = *puVar31;
                  lVar38 = lVar38 + -1;
                  puVar31 = puVar31 + 1;
                  puVar12 = puVar12 + 1;
                } while (lVar38 != 0);
              }
              uStack_288 = 0x200000001;
              puVar12 = (undefined8 *)0x20;
              __Znwm();
              puVar12[1] = 0x7361772065766c6f;
              *puVar12 = 0x533a3a7365726563;
              *(undefined8 *)((long)puVar12 + 0x14) = 0x2e64656c6c616320;
              *(undefined8 *)((long)puVar12 + 0xc) = 0x746f6e2073617720;
              *(undefined1 *)((long)puVar12 + 0x1c) = 0;
              lStack_270 = -0x7fffffffffffffe0;
              uStack_278 = 0x1c;
              uStack_258 = 0xbff0000000000000;
              lStack_250 = 0;
              lStack_248 = 0;
              uStack_240 = 0;
              uStack_238 = 0xffffffffffffffff;
              uStack_230 = 0xffffffffffffffff;
              dStack_208 = -1.0;
              dStack_200 = (double)CONCAT44(dStack_200._4_4_,0xffffffff);
              uStack_1f8 = 0xbff0000000000000;
              uStack_1f0 = CONCAT44(uStack_1f0._4_4_,0xffffffff);
              lStack_1e8 = -0x4010000000000000;
              uStack_1e0 = 0xffffffff;
              uStack_1b8 = 0xbff0000000000000;
              uStack_190 = 0xffffffffffffffff;
              uStack_198 = 0xffffffffffffffff;
              uStack_1a0 = 0xffffffffffffffff;
              uStack_1a8 = 0xffffffffffffffff;
              uStack_1b0 = 0xffffffffffffffff;
              uStack_188 = 0;
              uStack_17c = 0x200000002;
              uStack_184 = 0xffffffffffffffff;
              lStack_168 = 0;
              lStack_170 = 0;
              lStack_158 = 0;
              uStack_160 = 0;
              uStack_148 = 0;
              lStack_150 = 0;
              uStack_138 = 0;
              uStack_140 = 0;
              uStack_128 = 0;
              cStack_129 = '\0';
              cStack_111 = '\0';
              uStack_120 = 0;
              uStack_110 = 0;
              lStack_100 = 0;
              lStack_108 = 0;
              lStack_f0 = 0;
              uStack_f8 = 0;
              uStack_e0 = 0;
              lStack_e8 = 0;
              uStack_d0 = 0;
              uStack_d8 = 0;
              uStack_c8 = 0;
              uStack_b8 = 0x200000001;
              uStack_c0 = 0x200000004;
              uStack_b0 = 0xffffffff00000000;
              puStack_280 = puVar12;
              dStack_268 = dVar40;
              dStack_260 = dVar42;
              dStack_228 = dVar40;
              dStack_220 = dVar42;
              dStack_218 = dVar40;
              dStack_210 = dVar42;
              dStack_1d8 = dVar40;
              dStack_1d0 = dVar42;
              dStack_1c8 = dVar40;
              dStack_1c0 = dVar42;
              FUN_109928ac8(*(undefined8 *)(param_1 + 0x140),puVar15,
                            *(undefined8 *)(param_1 + 0x240),&uStack_288);
              plVar35 = *(long **)(param_1 + 0x160);
              lStack_2e8 = CONCAT62(lStack_2e8._2_6_,0x101);
              (**(code **)(*plVar35 + 0x18))
                        (plVar35,&lStack_2e8,*(undefined8 *)(param_1 + 0x240),&dStack_330,0,0,0);
              if (((ulong)plVar35 & 1) == 0) {
                if (*(char *)(param_1 + 0x180) != '\0') {
                  if (piRam000000011373d0c0 == (int *)0x0) {
                    iVar34 = 0x1373d0c0;
                    FUN_1099adbb8(0x11373d0c0,0x11382bb14,&UNK_10f590c32,2);
                    if (iVar34 != 0) goto LAB_10998c140;
                  }
                  else if (1 < *piRam000000011373d0c0) {
LAB_10998c140:
                    lStack_2e8 = 0;
                    uStack_290 = 0;
                    puStack_2d0 = (undefined8 *)0x0;
                    uStack_2d8 = 0;
                    uStack_2c0 = 0;
                    uStack_2c8 = 0;
                    uStack_2b0 = 0;
                    uStack_2b8 = 0;
                    pdStack_2a0 = (double *)0x0;
                    uStack_2a8 = 0;
                    uStack_298 = 0;
                    FUN_1099a9f0c(&lStack_2e8,&UNK_10f590c32,0x201,0,FUN_1099aa768,0);
                    FUN_1092b4db8(lStack_2e0 + 0x7540,&UNK_10f590ef0,0x17);
                    FUN_1099ab3b0(&lStack_2e8);
                  }
                }
              }
              else {
                if (*(char *)(param_1 + 0x180) != '\0') {
                  if (piRam000000011373d0e0 == (int *)0x0) {
                    iVar11 = 0x1373d0e0;
                    FUN_1099adbb8(0x11373d0e0,0x11382bb14,&UNK_10f590c32,2);
                    if (iVar11 != 0) goto LAB_10998c044;
                  }
                  else if (1 < *piRam000000011373d0e0) {
LAB_10998c044:
                    lStack_2e8 = 0;
                    uStack_290 = 0;
                    puStack_2d0 = (undefined8 *)0x0;
                    uStack_2d8 = 0;
                    uStack_2c0 = 0;
                    uStack_2c8 = 0;
                    uStack_2b0 = 0;
                    uStack_2b8 = 0;
                    pdStack_2a0 = (double *)0x0;
                    uStack_2a8 = 0;
                    uStack_298 = 0;
                    FUN_1099a9f0c(&lStack_2e8,&UNK_10f590c32,0x207,0,FUN_1099aa768,0);
                    FUN_1092b4db8(lStack_2e0 + 0x7540,&UNK_10f590f08,0x29);
                    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd
                              (*(undefined8 *)(param_1 + 0x2c8));
                    FUN_1092b4db8();
                    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(*pdVar18);
                    FUN_1092b4db8();
                    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(dStack_330);
                    FUN_1099ab3b0(&lStack_2e8);
                  }
                }
                puVar31 = *(undefined8 **)(param_1 + 0x240);
                uVar21 = *(ulong *)(param_1 + 0x248);
                puVar12 = *(undefined8 **)(param_1 + 0x2a0);
                if (*(ulong *)(param_1 + 0x2a8) != uVar21) {
                  _free();
                  if (0 < (long)uVar21) {
                    if (uVar21 >> 0x3d == 0) {
                      puVar12 = (undefined8 *)(uVar21 << 3);
                      _malloc();
                      if (puVar12 != (undefined8 *)0x0) goto LAB_10998c1a8;
                    }
                    ___cxa_allocate_exception(8);
                    __ZNSt9bad_allocC1Ev();
                    ___cxa_throw();
                    goto LAB_10998d134;
                  }
                  puVar12 = (undefined8 *)0x0;
LAB_10998c1a8:
                  *(undefined8 **)(param_1 + 0x2a0) = puVar12;
                  *(ulong *)(param_1 + 0x2a8) = uVar21;
                }
                uVar17 = uVar21 - ((long)uVar21 >> 0x3f) & 0xfffffffffffffffe;
                if (1 < (long)uVar21) {
                  lVar38 = 0;
                  puVar32 = puVar12;
                  puVar25 = puVar31;
                  do {
                    uVar55 = *puVar25;
                    puVar32[1] = puVar25[1];
                    *puVar32 = uVar55;
                    lVar38 = lVar38 + 2;
                    puVar32 = puVar32 + 2;
                    puVar25 = puVar25 + 2;
                  } while (lVar38 < (long)uVar17);
                }
                lVar38 = (long)uVar21 % 2;
                if (lVar38 != 0 && lVar38 < 0 == SBORROW8(uVar21,uVar17)) {
                  puVar31 = puVar31 + ((long)uVar21 / 2) * 2;
                  puVar12 = puVar12 + ((long)uVar21 / 2) * 2;
                  do {
                    *puVar12 = *puVar31;
                    lVar38 = lVar38 + -1;
                    puVar31 = puVar31 + 1;
                    puVar12 = puVar12 + 1;
                  } while (lVar38 != 0);
                }
                *(double *)(param_1 + 0x2d8) =
                     *(double *)(param_1 + 0x2d8) + (*(double *)(param_1 + 0x2e0) - dStack_330);
                *(bool *)(param_1 + 0x182) = dStack_330 < *(double *)(param_1 + 0x2c8);
                dVar49 = 1.0 - dStack_330 / *(double *)(param_1 + 0x2e0);
                *(bool *)(param_1 + 0x181) = *(double *)(param_1 + 0xe8) < dVar49;
                if ((*(char *)(param_1 + 0x180) == '\x01') &&
                   (dVar49 <= *(double *)(param_1 + 0xe8))) {
                  if (piRam000000011373d100 == (int *)0x0) {
                    iVar11 = 0x1373d100;
                    FUN_1099adbb8(0x11373d100,0x11382bb14,&UNK_10f590c32,2);
                    if (iVar11 != 0) goto LAB_10998c29c;
                  }
                  else if (1 < *piRam000000011373d100) {
LAB_10998c29c:
                    lStack_2e8 = 0;
                    uStack_290 = 0;
                    puStack_2d0 = (undefined8 *)0x0;
                    uStack_2d8 = 0;
                    uStack_2c0 = 0;
                    uStack_2c8 = 0;
                    uStack_2b0 = 0;
                    uStack_2b8 = 0;
                    pdStack_2a0 = (double *)0x0;
                    uStack_2a8 = 0;
                    uStack_298 = 0;
                    FUN_1099a9f0c(&lStack_2e8,&UNK_10f590c32,0x22e,0,FUN_1099aa768,0);
                    FUN_1092b4db8(lStack_2e0 + 0x7540,&UNK_10f590f64,0x27);
                    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(dVar49);
                    FUN_1099ab3b0(&lStack_2e8);
                  }
                }
                *(double *)(param_1 + 0x2e0) = dStack_330;
                _gettimeofday(&lStack_2e8,0);
                *(double *)(*(long *)(param_1 + 0x158) + 0xb0) =
                     (((double)lStack_2e8 + (double)(int)lStack_2e0 * 1e-06) -
                     ((double)(long)uVar33 + (double)iVar34 * 1e-06)) +
                     *(double *)(*(long *)(param_1 + 0x158) + 0xb0);
              }
              if (lStack_f0 != 0) {
                lStack_e8 = lStack_f0;
                __ZdlPv();
              }
              if (lStack_108 != 0) {
                lStack_100 = lStack_108;
                __ZdlPv();
              }
              if (cStack_111 < '\0') {
                __ZdlPv(uStack_128);
              }
              if (cStack_129 < '\0') {
                __ZdlPv(uStack_140);
              }
              if (lStack_158 != 0) {
                lStack_150 = lStack_158;
                __ZdlPv();
              }
              if (lStack_170 != 0) {
                lStack_168 = lStack_170;
                __ZdlPv();
              }
              if (lStack_250 != 0) {
                lStack_248 = lStack_250;
                __ZdlPv();
              }
              if (lStack_270 < 0) {
                __ZdlPv(puStack_280);
              }
            }
            uVar21 = *(ulong *)(param_1 + 0x2a8);
            uVar33 = uVar21 - ((long)uVar21 >> 0x3f);
            lVar38 = (long)uVar21 / 2;
            if (uVar21 == 0) {
              dVar49 = 0.0;
            }
            else {
              pdVar20 = *(double **)(param_1 + 0x210);
              pdVar23 = *(double **)(param_1 + 0x2a0);
              uVar17 = uVar21 + 3;
              if (-1 < (long)uVar21) {
                uVar17 = uVar21;
              }
              if (uVar21 + 1 < 3) {
                dVar49 = (*pdVar20 - *pdVar23) * (*pdVar20 - *pdVar23);
              }
              else {
                uVar36 = uVar33 & 0xfffffffffffffffe;
                dVar49 = (*pdVar20 - *pdVar23) * (*pdVar20 - *pdVar23);
                dVar43 = (pdVar20[1] - pdVar23[1]) * (pdVar20[1] - pdVar23[1]);
                if (3 < (long)uVar21) {
                  uVar17 = uVar17 & 0xfffffffffffffffc;
                  dVar50 = (pdVar20[2] - pdVar23[2]) * (pdVar20[2] - pdVar23[2]);
                  dVar46 = (pdVar20[3] - pdVar23[3]) * (pdVar20[3] - pdVar23[3]);
                  if (7 < uVar21) {
                    pdVar39 = pdVar23 + 6;
                    pdVar24 = pdVar20 + 6;
                    lVar26 = 4;
                    do {
                      dVar49 = dVar49 + (pdVar24[-2] - pdVar39[-2]) * (pdVar24[-2] - pdVar39[-2]);
                      dVar43 = dVar43 + (pdVar24[-1] - pdVar39[-1]) * (pdVar24[-1] - pdVar39[-1]);
                      dVar50 = dVar50 + (*pdVar24 - *pdVar39) * (*pdVar24 - *pdVar39);
                      dVar46 = dVar46 + (pdVar24[1] - pdVar39[1]) * (pdVar24[1] - pdVar39[1]);
                      lVar26 = lVar26 + 4;
                      pdVar39 = pdVar39 + 4;
                      pdVar24 = pdVar24 + 4;
                    } while (lVar26 < (long)uVar17);
                  }
                  dVar49 = dVar50 + dVar49;
                  dVar43 = dVar46 + dVar43;
                  if ((long)uVar17 < (long)uVar36) {
                    dVar50 = pdVar20[uVar17] - pdVar23[uVar17];
                    dVar46 = (pdVar20 + uVar17)[1] - (pdVar23 + uVar17)[1];
                    dVar49 = dVar49 + dVar50 * dVar50;
                    dVar43 = dVar43 + dVar46 * dVar46;
                  }
                }
                dVar49 = dVar49 + dVar43;
                lVar26 = (long)uVar21 % 2;
                if (lVar26 != 0 && lVar26 < 0 == SBORROW8(uVar21,uVar36)) {
                  pdVar20 = pdVar20 + lVar38 * 2;
                  pdVar23 = pdVar23 + lVar38 * 2;
                  do {
                    dVar49 = dVar49 + (*pdVar20 - *pdVar23) * (*pdVar20 - *pdVar23);
                    lVar26 = lVar26 + -1;
                    pdVar20 = pdVar20 + 1;
                    pdVar23 = pdVar23 + 1;
                  } while (lVar26 != 0);
                }
              }
            }
            *(double *)(param_1 + 0x1b0) = SQRT(dVar49);
            if (SQRT(dVar49) <=
                *(double *)(param_1 + 0x28) *
                (*(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x2c0))) {
              puVar15 = (ulong *)&UNK_10f58decd;
              FUN_109988e2c(&uStack_288,&UNK_10f58decd);
              lVar38 = *(long *)(param_1 + 0x158);
              if (*(char *)(lVar38 + 0x1f) < '\0') {
                puVar15 = *(ulong **)(lVar38 + 8);
                __ZdlPv(puVar15);
              }
              *(ulong *)(lVar38 + 0x18) = uStack_278;
              *(undefined8 **)(lVar38 + 0x10) = puStack_280;
              *(ulong *)(lVar38 + 8) = uStack_288;
              *(undefined4 *)(*(long *)(param_1 + 0x158) + 4) = 0;
              if (*(char *)(param_1 + 0x180) != '\x01') {
                return puVar15;
              }
              if (piRam000000011373d1a0 == (int *)0x0) {
                puVar15 = (ulong *)0x11373d1a0;
                FUN_1099adbb8(0x11373d1a0,0x11382bb14,&UNK_10f590c32,1);
                if (((ulong)puVar15 & 1) == 0) {
                  return puVar15;
                }
              }
              else if (*piRam000000011373d1a0 < 1) {
                return puVar15;
              }
              uStack_288 = 0;
              uStack_230 = 0;
              lStack_270 = 0;
              uStack_278 = 0;
              dStack_260 = 0.0;
              dStack_268 = 0.0;
              lStack_250 = 0;
              uStack_258 = 0;
              uStack_240 = 0;
              lStack_248 = 0;
              uStack_238 = uStack_238 & 0xffffffff00000000;
              FUN_1099a9f0c(&uStack_288,&UNK_10f590c32,0x2d1,0,FUN_1099aa768,0);
              FUN_1092b4db8(puStack_280 + 0xea8,&UNK_10f58db02,0xd);
              FUN_1092b4db8();
              goto LAB_10998b02c;
            }
            dVar49 = *(double *)(param_1 + 0x2c8);
            dVar43 = *(double *)(param_1 + 0x2e0);
            *(double *)(param_1 + 0x198) = dVar49 - dVar43;
            if (ABS(dVar49 - dVar43) <= dVar49 * *(double *)(param_1 + 0x30)) {
              puVar15 = (ulong *)&UNK_10f58df08;
              FUN_109988e2c(&uStack_288,&UNK_10f58df08);
              lVar38 = *(long *)(param_1 + 0x158);
              if (*(char *)(lVar38 + 0x1f) < '\0') {
                puVar15 = *(ulong **)(lVar38 + 8);
                __ZdlPv(puVar15);
              }
              *(ulong *)(lVar38 + 0x18) = uStack_278;
              *(undefined8 **)(lVar38 + 0x10) = puStack_280;
              *(ulong *)(lVar38 + 8) = uStack_288;
              *(undefined4 *)(*(long *)(param_1 + 0x158) + 4) = 0;
              if (*(char *)(param_1 + 0x180) != '\x01') {
                return puVar15;
              }
              if (piRam000000011373d1c0 == (int *)0x0) {
                puVar15 = (ulong *)0x11373d1c0;
                FUN_1099adbb8(0x11373d1c0,0x11382bb14,&UNK_10f590c32,1);
                if (((ulong)puVar15 & 1) == 0) {
                  return puVar15;
                }
              }
              else if (*piRam000000011373d1c0 < 1) {
                return puVar15;
              }
              uStack_288 = 0;
              uStack_230 = 0;
              lStack_270 = 0;
              uStack_278 = 0;
              dStack_260 = 0.0;
              dStack_268 = 0.0;
              lStack_250 = 0;
              uStack_258 = 0;
              uStack_240 = 0;
              lStack_248 = 0;
              uStack_238 = uStack_238 & 0xffffffff00000000;
              FUN_1099a9f0c(&uStack_288,&UNK_10f590c32,0x2e7,0,FUN_1099aa768,0);
              FUN_1092b4db8(puStack_280 + 0xea8,&UNK_10f58db02,0xd);
              FUN_1092b4db8();
              goto LAB_10998b02c;
            }
            if (1.79769313486232e+308 <= dVar43) {
              dVar49 = -1.79769313486232e+308;
            }
            else {
              lVar26 = *(long *)(param_1 + 0x178);
              dVar50 = (*(double *)(lVar26 + 0x10) - dVar43) / *(double *)(param_1 + 0x2d8);
              dVar49 = (*(double *)(lVar26 + 0x18) - dVar43) /
                       (*(double *)(param_1 + 0x2d8) + *(double *)(lVar26 + 0x28));
              if (dVar49 <= dVar50) {
                dVar49 = dVar50;
              }
            }
            *(double *)(param_1 + 0x1b8) = dVar49;
            if (((*(byte *)(param_1 + 0x182) & 1) != 0) || (*(double *)(param_1 + 0x38) < dVar49)) {
              puVar31 = *(undefined8 **)(param_1 + 0x2a0);
              puVar12 = *(undefined8 **)(param_1 + 0x210);
              if (*(ulong *)(param_1 + 0x218) != uVar21) {
                _free();
                if ((long)uVar21 < 1) {
                  puVar12 = (undefined8 *)0x0;
                }
                else {
                  if (uVar21 >> 0x3d != 0) goto LAB_10998ad00;
                  puVar12 = (undefined8 *)(uVar21 << 3);
                  _malloc();
                  if (puVar12 == (undefined8 *)0x0) goto LAB_10998ad00;
                }
                *(undefined8 **)(param_1 + 0x210) = puVar12;
                *(ulong *)(param_1 + 0x218) = uVar21;
              }
              uVar33 = uVar33 & 0xfffffffffffffffe;
              if (1 < (long)uVar21) {
                lVar26 = 0;
                puVar32 = puVar12;
                puVar25 = puVar31;
                do {
                  uVar37 = *puVar25;
                  puVar32[1] = puVar25[1];
                  *puVar32 = uVar37;
                  lVar26 = lVar26 + 2;
                  puVar32 = puVar32 + 2;
                  puVar25 = puVar25 + 2;
                } while (lVar26 < (long)uVar33);
              }
              lVar26 = (long)uVar21 % 2;
              if (lVar26 != 0 && lVar26 < 0 == SBORROW8(uVar21,uVar33)) {
                puVar31 = puVar31 + lVar38 * 2;
                puVar12 = puVar12 + lVar38 * 2;
                do {
                  *puVar12 = *puVar31;
                  lVar26 = lVar26 + -1;
                  puVar31 = puVar31 + 1;
                  puVar12 = puVar12 + 1;
                } while (lVar26 != 0);
              }
              uVar33 = *(ulong *)(param_1 + 0x218);
              if (uVar33 == 0) {
                dVar49 = 0.0;
              }
              else {
                pdVar20 = (double *)*puStack_360;
                uVar21 = uVar33 + 3;
                if (-1 < (long)uVar33) {
                  uVar21 = uVar33;
                }
                if (uVar33 + 1 < 3) {
                  dVar49 = *pdVar20 * *pdVar20;
                }
                else {
                  uVar17 = uVar33 - ((long)uVar33 >> 0x3f) & 0xfffffffffffffffe;
                  dVar49 = *pdVar20 * *pdVar20;
                  dVar43 = pdVar20[1] * pdVar20[1];
                  if (3 < (long)uVar33) {
                    uVar21 = uVar21 & 0xfffffffffffffffc;
                    dVar50 = pdVar20[2] * pdVar20[2];
                    dVar46 = pdVar20[3] * pdVar20[3];
                    if (7 < uVar33) {
                      pdVar23 = pdVar20 + 6;
                      lVar38 = 4;
                      do {
                        dVar49 = dVar49 + pdVar23[-2] * pdVar23[-2];
                        dVar43 = dVar43 + pdVar23[-1] * pdVar23[-1];
                        dVar50 = dVar50 + *pdVar23 * *pdVar23;
                        dVar46 = dVar46 + pdVar23[1] * pdVar23[1];
                        lVar38 = lVar38 + 4;
                        pdVar23 = pdVar23 + 4;
                      } while (lVar38 < (long)uVar21);
                    }
                    dVar49 = dVar50 + dVar49;
                    dVar43 = dVar46 + dVar43;
                    if ((long)uVar21 < (long)uVar17) {
                      dVar50 = pdVar20[uVar21];
                      dVar46 = (pdVar20 + uVar21)[1];
                      dVar49 = dVar49 + dVar50 * dVar50;
                      dVar43 = dVar43 + dVar46 * dVar46;
                    }
                  }
                  dVar49 = dVar49 + dVar43;
                  lVar38 = (long)uVar33 % 2;
                  if (lVar38 != 0 && lVar38 < 0 == SBORROW8(uVar33,uVar17)) {
                    pdVar20 = pdVar20 + ((long)uVar33 / 2) * 2;
                    do {
                      dVar49 = dVar49 + *pdVar20 * *pdVar20;
                      lVar38 = lVar38 + -1;
                      pdVar20 = pdVar20 + 1;
                    } while (lVar38 != 0);
                  }
                }
              }
              *(double *)(param_1 + 0x2c0) = SQRT(dVar49);
              uVar33 = param_1;
              FUN_10998d268(param_1,0);
              if ((int)uVar33 == 0) {
                uStack_288 = 0;
                uStack_230 = 0;
                lStack_270 = 0;
                uStack_278 = 0;
                dStack_260 = 0.0;
                dStack_268 = 0.0;
                lStack_250 = 0;
                uStack_258 = 0;
                uStack_240 = 0;
                lStack_248 = 0;
                uStack_238 = uStack_238 & 0xffffffff00000000;
                FUN_1099a9f0c(&uStack_288,&UNK_10f590c32,0x76,2,FUN_1099aa768,0);
                FUN_1092b4db8(puStack_280 + 0xea8,&UNK_10f58db02,0xd);
                FUN_1092b4db8();
                goto LAB_10998b02c;
              }
              *(undefined1 *)(param_1 + 0x18e) = 1;
              (**(code **)(**(long **)(param_1 + 0x170) + 0x18))(*(undefined8 *)(param_1 + 0x1b8));
              FUN_10998e984(*(undefined8 *)(param_1 + 0x2e0),*(undefined8 *)(param_1 + 0x2d8),
                            *(undefined8 *)(param_1 + 0x178));
            }
            else {
              *(undefined1 *)(param_1 + 0x18e) = 0;
              *(double *)(param_1 + 400) = dVar43 + *(double *)(*(long *)(param_1 + 0x158) + 0x30);
              *(undefined8 *)(param_1 + 0x1a0) = uVar56;
              *(undefined8 *)(param_1 + 0x1a8) = uVar37;
              (**(code **)(**(long **)(param_1 + 0x170) + 0x20))();
            }
            goto LAB_10998b108;
          }
          iVar34 = *(int *)(param_1 + 0x2f8) + 1;
          *(int *)(param_1 + 0x2f8) = iVar34;
          if (*(int *)(param_1 + 0x88) <= iVar34) {
            FUN_109988e2c(&uStack_288,&UNK_10f590e8b);
            lVar38 = *(long *)(param_1 + 0x158);
            if (*(char *)(lVar38 + 0x1f) < '\0') {
              __ZdlPv(*(undefined8 *)(lVar38 + 8));
            }
            *(ulong *)(lVar38 + 0x18) = uStack_278;
            *(undefined8 **)(lVar38 + 0x10) = puStack_280;
            *(ulong *)(lVar38 + 8) = uStack_288;
            *(undefined4 *)(*(long *)(param_1 + 0x158) + 4) = 2;
            uStack_288 = 0;
            uStack_230 = 0;
            lStack_270 = 0;
            uStack_278 = 0;
            dStack_260 = 0.0;
            dStack_268 = 0.0;
            lStack_250 = 0;
            uStack_258 = 0;
            uStack_240 = 0;
            lStack_248 = 0;
            uStack_238 = uStack_238 & 0xffffffff00000000;
            FUN_1099a9f0c(&uStack_288,&UNK_10f590c32,0x5f,2,FUN_1099aa768,0);
            FUN_1092b4db8(puStack_280 + 0xea8,&UNK_10f58db02,0xd);
            FUN_1092b4db8();
            goto LAB_10998b02c;
          }
          (**(code **)(**(long **)(param_1 + 0x170) + 0x28))();
          *(double *)(param_1 + 400) =
               *(double *)(param_1 + 0x2c8) + *(double *)(*(long *)(param_1 + 0x158) + 0x30);
          *(undefined8 *)(param_1 + 0x198) = 0;
          lVar38 = *(long *)(*(long *)(param_1 + 0x158) + 0x40);
          uVar37 = *(undefined8 *)(lVar38 + -0x60);
          *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(lVar38 + -0x58);
          *(undefined8 *)(param_1 + 0x1a0) = uVar37;
          *(undefined8 *)(param_1 + 0x1b0) = 0;
          *(undefined8 *)(param_1 + 0x1b8) = 0;
          *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_1 + 0x40);
        } while( true );
      }
      goto LAB_10998afac;
    }
  }
  goto LAB_10998ad00;
}



/* Entry: 10998d268; end: 10998d68f;  */

undefined8 FUN_10998d268(long param_1,undefined1 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long *plVar3;
  double *pdVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  double *pdVar8;
  ulong uVar9;
  double *pdVar10;
  long lVar11;
  double *pdVar12;
  ulong uVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  uStack_42 = 1;
  plVar3 = *(long **)(param_1 + 0x160);
  uStack_41 = param_2;
  (**(code **)(*plVar3 + 0x18))
            (plVar3,&uStack_42,*(undefined8 *)(param_1 + 0x210),param_1 + 0x2c8,
             *(undefined8 *)(param_1 + 0x220),*(undefined8 *)(param_1 + 0x230),
             *(undefined8 *)(param_1 + 0x168));
  if (((ulong)plVar3 & 1) == 0) {
LAB_10998d3b8:
    lVar11 = *(long *)(param_1 + 0x158);
    puVar5 = &UNK_10f590d8a;
    uVar6 = 0x28;
  }
  else {
    *(double *)(param_1 + 400) =
         *(double *)(param_1 + 0x2c8) + *(double *)(*(long *)(param_1 + 0x158) + 0x30);
    if (*(char *)(param_1 + 0x48) == '\x01') {
      if (*(int *)(param_1 + 0x188) == 0) {
        (**(code **)(**(long **)(param_1 + 0x168) + 0x30))
                  (*(long **)(param_1 + 0x168),*(undefined8 *)(param_1 + 0x2b0));
        plVar3 = *(long **)(param_1 + 0x168);
        (**(code **)(*plVar3 + 0x28))();
        if (0 < (int)plVar3) {
          lVar11 = 0;
          do {
            *(double *)(*(long *)(param_1 + 0x2b0) + lVar11 * 8) =
                 1.0 / (SQRT(*(double *)(*(long *)(param_1 + 0x2b0) + lVar11 * 8)) + 1.0);
            lVar11 = lVar11 + 1;
            plVar3 = *(long **)(param_1 + 0x168);
            (**(code **)(*plVar3 + 0x28))();
          } while (lVar11 < (int)plVar3);
        }
      }
      (**(code **)(**(long **)(param_1 + 0x168) + 0x38))
                (*(long **)(param_1 + 0x168),*(undefined8 *)(param_1 + 0x2b0));
    }
    pdVar12 = *(double **)(param_1 + 0x230);
    uVar13 = *(ulong *)(param_1 + 0x238);
    pdVar4 = *(double **)(param_1 + 0x260);
    if (*(ulong *)(param_1 + 0x268) != uVar13) {
      _free();
      if (0 < (long)uVar13) {
        if (uVar13 >> 0x3d == 0) {
          pdVar4 = (double *)(uVar13 << 3);
          _malloc();
          if (pdVar4 != (double *)0x0) goto LAB_10998d3d4;
        }
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        goto LAB_10998d3b8;
      }
      pdVar4 = (double *)0x0;
LAB_10998d3d4:
      *(double **)(param_1 + 0x260) = pdVar4;
      *(ulong *)(param_1 + 0x268) = uVar13;
    }
    uVar7 = uVar13 - ((long)uVar13 >> 0x3f) & 0xfffffffffffffffe;
    if (1 < (long)uVar13) {
      lVar11 = 0;
      pdVar8 = pdVar4;
      pdVar10 = pdVar12;
      do {
        dVar14 = *pdVar10;
        pdVar8[1] = -pdVar10[1];
        *pdVar8 = -dVar14;
        lVar11 = lVar11 + 2;
        pdVar8 = pdVar8 + 2;
        pdVar10 = pdVar10 + 2;
      } while (lVar11 < (long)uVar7);
    }
    lVar11 = (long)uVar13 % 2;
    if (lVar11 != 0 && lVar11 < 0 == SBORROW8(uVar13,uVar7)) {
      pdVar12 = pdVar12 + ((long)uVar13 / 2) * 2;
      pdVar4 = pdVar4 + ((long)uVar13 / 2) * 2;
      do {
        *pdVar4 = -*pdVar12;
        lVar11 = lVar11 + -1;
        pdVar12 = pdVar12 + 1;
        pdVar4 = pdVar4 + 1;
      } while (lVar11 != 0);
    }
    plVar3 = *(long **)(param_1 + 0x160);
    (**(code **)(*plVar3 + 0x20))
              (plVar3,*(undefined8 *)(param_1 + 0x210),*(undefined8 *)(param_1 + 0x260),
               *(undefined8 *)(param_1 + 0x270));
    if (((ulong)plVar3 & 1) != 0) {
      uVar13 = *(ulong *)(param_1 + 0x278);
      if (uVar13 == 0) {
        *(undefined8 *)(param_1 + 0x1a0) = 0;
        dVar14 = 0.0;
      }
      else {
        pdVar4 = *(double **)(param_1 + 0x210);
        pdVar12 = *(double **)(param_1 + 0x270);
        uVar7 = uVar13 + 3;
        if (-1 < (long)uVar13) {
          uVar7 = uVar13;
        }
        if (uVar13 + 1 < 3) {
          *(double *)(param_1 + 0x1a0) = ABS(*pdVar4 - *pdVar12);
          dVar14 = (*pdVar4 - *pdVar12) * (*pdVar4 - *pdVar12);
        }
        else {
          uVar7 = uVar7 & 0xfffffffffffffffc;
          uVar9 = uVar13 - ((long)uVar13 >> 0x3f) & 0xfffffffffffffffe;
          auVar15._0_8_ = ABS(*pdVar4 - *pdVar12);
          auVar15._8_8_ = ABS(pdVar4[1] - pdVar12[1]);
          if (3 < (long)uVar13) {
            auVar18._0_8_ = ABS(pdVar4[2] - pdVar12[2]);
            auVar18._8_8_ = ABS(pdVar4[3] - pdVar12[3]);
            if (7 < uVar13) {
              pdVar8 = pdVar12 + 6;
              pdVar10 = pdVar4 + 6;
              lVar11 = 4;
              do {
                auVar1._8_8_ = ABS(pdVar10[-1] - pdVar8[-1]);
                auVar1._0_8_ = ABS(pdVar10[-2] - pdVar8[-2]);
                auVar15 = NEON_fmax(auVar15,auVar1,8);
                auVar2._8_8_ = ABS(pdVar10[1] - pdVar8[1]);
                auVar2._0_8_ = ABS(*pdVar10 - *pdVar8);
                auVar18 = NEON_fmax(auVar18,auVar2,8);
                lVar11 = lVar11 + 4;
                pdVar8 = pdVar8 + 4;
                pdVar10 = pdVar10 + 4;
              } while (lVar11 < (long)uVar7);
            }
            auVar15 = NEON_fmax(auVar15,auVar18,8);
            if ((long)uVar7 < (long)uVar9) {
              auVar19._0_8_ = ABS(pdVar4[uVar7] - pdVar12[uVar7]);
              auVar19._8_8_ = ABS((pdVar4 + uVar7)[1] - (pdVar12 + uVar7)[1]);
              auVar15 = NEON_fmax(auVar15,auVar19,8);
            }
          }
          dVar14 = auVar15._8_8_;
          if (auVar15._8_8_ <= auVar15._0_8_) {
            dVar14 = auVar15._0_8_;
          }
          lVar11 = (long)uVar13 % 2;
          pdVar8 = pdVar4 + ((long)uVar13 / 2) * 2;
          pdVar10 = pdVar12 + ((long)uVar13 / 2) * 2;
          dVar16 = dVar14;
          if (lVar11 != 0 && lVar11 < 0 == SBORROW8(uVar13,uVar9)) {
            do {
              dVar14 = ABS(*pdVar8 - *pdVar10);
              if (ABS(*pdVar8 - *pdVar10) <= dVar16) {
                dVar14 = dVar16;
              }
              lVar11 = lVar11 + -1;
              pdVar8 = pdVar8 + 1;
              pdVar10 = pdVar10 + 1;
              dVar16 = dVar14;
            } while (lVar11 != 0);
          }
          *(double *)(param_1 + 0x1a0) = dVar14;
          dVar14 = (*pdVar4 - *pdVar12) * (*pdVar4 - *pdVar12);
          dVar16 = (pdVar4[1] - pdVar12[1]) * (pdVar4[1] - pdVar12[1]);
          if (3 < (long)uVar13) {
            dVar17 = (pdVar4[2] - pdVar12[2]) * (pdVar4[2] - pdVar12[2]);
            dVar20 = (pdVar4[3] - pdVar12[3]) * (pdVar4[3] - pdVar12[3]);
            if (7 < uVar13) {
              pdVar8 = pdVar12 + 6;
              pdVar10 = pdVar4 + 6;
              lVar11 = 4;
              do {
                dVar14 = dVar14 + (pdVar10[-2] - pdVar8[-2]) * (pdVar10[-2] - pdVar8[-2]);
                dVar16 = dVar16 + (pdVar10[-1] - pdVar8[-1]) * (pdVar10[-1] - pdVar8[-1]);
                dVar17 = dVar17 + (*pdVar10 - *pdVar8) * (*pdVar10 - *pdVar8);
                dVar20 = dVar20 + (pdVar10[1] - pdVar8[1]) * (pdVar10[1] - pdVar8[1]);
                lVar11 = lVar11 + 4;
                pdVar8 = pdVar8 + 4;
                pdVar10 = pdVar10 + 4;
              } while (lVar11 < (long)uVar7);
            }
            dVar14 = dVar17 + dVar14;
            dVar16 = dVar20 + dVar16;
            if ((long)uVar7 < (long)uVar9) {
              dVar17 = pdVar4[uVar7] - pdVar12[uVar7];
              dVar20 = (pdVar4 + uVar7)[1] - (pdVar12 + uVar7)[1];
              dVar14 = dVar14 + dVar17 * dVar17;
              dVar16 = dVar16 + dVar20 * dVar20;
            }
          }
          dVar14 = dVar14 + dVar16;
          lVar11 = (long)uVar13 % 2;
          pdVar12 = pdVar12 + ((long)uVar13 / 2) * 2;
          pdVar4 = pdVar4 + ((long)uVar13 / 2) * 2;
          if (lVar11 != 0 && lVar11 < 0 == SBORROW8(uVar13,uVar9)) {
            do {
              dVar14 = dVar14 + (*pdVar4 - *pdVar12) * (*pdVar4 - *pdVar12);
              lVar11 = lVar11 + -1;
              pdVar12 = pdVar12 + 1;
              pdVar4 = pdVar4 + 1;
            } while (lVar11 != 0);
          }
        }
      }
      *(double *)(param_1 + 0x1a8) = SQRT(dVar14);
      return 1;
    }
    lVar11 = *(long *)(param_1 + 0x158);
    puVar5 = &UNK_10f58df41;
    uVar6 = 0x34;
  }
  func_0x000107c2c4d8(lVar11 + 8,puVar5,uVar6);
  *(undefined4 *)(*(long *)(param_1 + 0x158) + 4) = 2;
  return 0;
}



/* Entry: 10998d690; end: 10998d693;  */

long FUN_10998d690(long param_1)

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



/* Entry: 10998d694; end: 10998d6a7;  */

void FUN_10998d694(void)

{
  FUN_10992b9dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10998d6a8; end: 10998e47f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10998d6a8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long ******pppppplVar11;
  long *******ppppppplVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined4 *puVar18;
  long *plVar19;
  long *plVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long *******ppppppplStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  long *******ppppppplStack_90;
  long *plStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  if (param_4 == 0) {
    ppppppplStack_f0 = (long *******)0x0;
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
    FUN_1099a9f0c(&ppppppplStack_f0,&UNK_10f5910b3,0x16a,3,FUN_1099aa768,0);
    FUN_1092b4db8(plStack_e8 + 0xea8,&UNK_10f58e007,0x1c);
    goto LAB_10998e478;
  }
  FUN_1099622c4(param_4 + 0x18);
  FUN_109971f6c(param_4 + 0x18);
  *(long *)(param_4 + 0x3b8) = param_3;
  uVar16 = *(undefined8 *)(param_3 + 0x78);
  uVar9 = uVar16;
  FUN_1099784f4(uVar16,param_4);
  if ((int)uVar9 == 0) {
    return;
  }
  uVar9 = uVar16;
  FUN_109978740(uVar16,param_4);
  if ((int)uVar9 == 0) {
    return;
  }
  FUN_109978940(&ppppppplStack_f0,uVar16,param_4 + 0x408,param_4 + 0x430,param_4);
  ppppppplVar12 = ppppppplStack_f0;
  ppppppplStack_f0 = (long *******)0x0;
  plVar17 = *(long **)(param_4 + 0x3c8);
  *(long ********)(param_4 + 0x3c8) = ppppppplVar12;
  if (plVar17 != (long *)0x0) {
    if (plVar17[3] != 0) {
      plVar17[4] = plVar17[3];
      __ZdlPv();
    }
    if (*plVar17 != 0) {
      plVar17[1] = *plVar17;
      __ZdlPv();
    }
    __ZdlPv(plVar17);
    ppppppplVar12 = ppppppplStack_f0;
    ppppppplStack_f0 = (long *******)0x0;
    if (ppppppplVar12 != (long *******)0x0) {
      if (ppppppplVar12[3] != (long ******)0x0) {
        ppppppplVar12[4] = ppppppplVar12[3];
        __ZdlPv();
      }
      if (*ppppppplVar12 != (long ******)0x0) {
        ppppppplVar12[1] = *ppppppplVar12;
        __ZdlPv();
      }
      __ZdlPv(ppppppplVar12);
    }
    ppppppplVar12 = *(long ********)(param_4 + 0x3c8);
  }
  if (ppppppplVar12 == (long *******)0x0) {
    return;
  }
  if (((long)ppppppplVar12[1] - (long)*ppppppplVar12 & 0x7fffffff8U) == 0) {
    return;
  }
  plVar17 = (long *)(param_4 + 0x148);
  *(undefined8 *)(param_4 + 0x1e8) = 0x100000002;
  *(undefined8 *)(param_4 + 0x1f0) = 0;
  *(undefined8 *)(param_4 + 0x1f8) = 0;
  *(undefined8 *)(param_4 + 0x200) = 0x100000001;
  *(undefined4 *)(param_4 + 0x208) = 1;
  puVar10 = (undefined8 *)(param_4 + 0x210);
  if (*(long *)(param_4 + 0x210) != 0) {
    *(long *)(param_4 + 0x218) = *(long *)(param_4 + 0x210);
    __ZdlPv();
    *puVar10 = 0;
    *(undefined8 *)(param_4 + 0x218) = 0;
    *(undefined8 *)(param_4 + 0x220) = 0;
  }
  *puVar10 = 0;
  *(undefined8 *)(param_4 + 0x218) = 0;
  *(undefined8 *)(param_4 + 0x220) = 0;
  *(undefined8 *)(param_4 + 0x230) = 0xffffffffffffffff;
  *(undefined8 *)(param_4 + 0x228) = 0xffffffff0000000a;
  *(undefined8 *)(param_4 + 0x238) = 0;
  *(undefined8 *)(param_4 + 0x240) = 0xffffffff;
  *(undefined8 *)(param_4 + 0x248) = 0;
  plVar20 = *(long **)(param_4 + 0x128);
  if (plVar20 == (long *)0x0) {
    puVar24 = *(undefined8 **)(param_4 + 0x3c8);
    puVar8 = (undefined8 *)0x58;
    __Znwm();
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_DAT_110b1da80;
    puVar8[5] = 0;
    puVar8[4] = (long ****)0x0;
    pppppplVar11 = (long ******)(puVar8 + 3);
    *pppppplVar11 = (long *****)(puVar8 + 4);
    puVar8[10] = 0;
    puVar8[7] = 0;
    puVar8[6] = 0;
    puVar8[9] = 0;
    puVar8[8] = 0;
    *(undefined4 *)(puVar8 + 10) = 0x3f800000;
    puVar1 = (undefined8 *)puVar24[1];
    ppppppplStack_f0 = (long *******)pppppplVar11;
    plStack_e8 = puVar8;
    for (puVar24 = (undefined8 *)*puVar24; puVar24 != puVar1; puVar24 = puVar24 + 1) {
      FUN_109968560(pppppplVar11,*(undefined8 *)*puVar24,0);
    }
    ppppppplStack_f0 = (long *******)0x0;
    plStack_e8 = (long *)0x0;
    plVar20 = *(long **)(param_4 + 0x130);
    *(long *******)(param_4 + 0x128) = pppppplVar11;
    *(undefined8 **)(param_4 + 0x130) = puVar8;
    if (plVar20 != (long *)0x0) {
      plVar19 = plVar20 + 1;
      do {
        lVar13 = *plVar19;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *plVar19 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
    plVar20 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar19 = plStack_e8 + 1;
      do {
        lVar13 = *plVar19;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *plVar19 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
  }
  else {
    ppppppplStack_f0 = (long *******)CONCAT44(ppppppplStack_f0._4_4_,(int)plVar20[2]);
    ppppppplStack_90 = (long *******)((ulong)ppppppplStack_90 & 0xffffffff00000000);
    if ((int)plVar20[2] == 0) {
      ppppppplVar12 = (long *******)&ppppppplStack_f0;
      FUN_109904144(ppppppplVar12,&ppppppplStack_90,&UNK_10f591145);
      ppppppplStack_90 = ppppppplVar12;
      if (ppppppplVar12 == (long *******)0x0) goto LAB_10998d824;
LAB_10998e358:
      FUN_1099ab8e4(&ppppppplStack_f0,&UNK_10f591156,0xb1,&ppppppplStack_90);
      goto LAB_10998e478;
    }
LAB_10998d824:
    iVar6 = *(int *)(*plVar20 + 0x20);
    if (((int)plVar20[6] != 0) &&
       (lVar13 = *(long *)(param_4 + 0x408), *(long *)(param_4 + 0x410) != lVar13)) {
      uVar23 = 0;
      do {
        FUN_10998e488(plVar20,*(undefined8 *)(lVar13 + uVar23 * 8));
        uVar23 = uVar23 + 1;
        lVar13 = *(long *)(param_4 + 0x408);
      } while (uVar23 < (ulong)(*(long *)(param_4 + 0x410) - lVar13 >> 3));
    }
    if (*(int *)(param_4 + 0xe8) - 3U < 3) {
      ppppppplStack_f0 = (long *******)CONCAT44(ppppppplStack_f0._4_4_,(int)plVar20[2]);
      ppppppplStack_90 = (long *******)((ulong)ppppppplStack_90 & 0xffffffff00000000);
      if ((int)plVar20[2] == 0) {
        ppppppplVar12 = (long *******)&ppppppplStack_f0;
        FUN_109904144(ppppppplVar12,&ppppppplStack_90,&UNK_10f591145);
        ppppppplStack_90 = ppppppplVar12;
        if (ppppppplVar12 != (long *******)0x0) goto LAB_10998e358;
      }
      if (iVar6 != *(int *)(*plVar20 + 0x20)) {
        uVar2 = *(uint *)(param_4 + 0xe8);
        puVar7 = (undefined *)(ulong)uVar2;
        if (uVar2 - 3 < 3) {
          if (uVar2 == 5) {
            uVar2 = *(uint *)(param_4 + 0xec);
            uVar23 = (ulong)uVar2;
            ppppppplStack_90 = (long *******)0x0;
            plStack_88 = (long *)0x0;
            uStack_80 = 0;
            if (uVar2 - 2 < 3) {
              uVar2 = 1;
            }
            *(undefined4 *)(param_4 + 0xe8) = 6;
            *(uint *)(param_4 + 0xec) = uVar2;
            func_0x0001099a1efc();
            FUN_1099a1ed8();
            func_0x0001099a1efc();
            puVar7 = &DAT_10f593199;
            FUN_109988e2c(&ppppppplStack_f0,&UNK_10f5911db);
          }
          else {
            if (uVar2 == 4) {
              uVar23 = 2;
            }
            else {
              uVar23 = 1;
            }
            *(int *)(param_4 + 0xe8) = (int)uVar23;
            ppppppplStack_90 = (long *******)0x0;
            plStack_88 = (long *)0x0;
            uStack_80 = 0;
            FUN_1099a1ed8();
            FUN_1099a1ed8();
            FUN_109988e2c(&ppppppplStack_f0,&UNK_10f591209);
          }
          plStack_88 = plStack_e8;
          ppppppplStack_90 = ppppppplStack_f0;
          uStack_80 = uStack_e0;
          if (*(int *)(param_4 + 0x174) != 0) {
            if (piRam000000011373d1e0 == (int *)0x0) {
              iVar6 = 0x1373d1e0;
              FUN_1099adbb8(0x11373d1e0,0x11382bb14,&UNK_10f5910b3,1);
              if (iVar6 != 0) goto LAB_10998da98;
            }
            else if (0 < *piRam000000011373d1e0) {
LAB_10998da98:
              ppppppplStack_f0 = (long *******)0x0;
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
              FUN_1099a9f0c(&ppppppplStack_f0,&UNK_10f5910b3,0x6a,0,FUN_1099aa768,0,param_7,param_8,
                            puVar7,uVar23);
              plVar20 = plStack_88;
              ppppppplVar12 = ppppppplStack_90;
              if (-1 < (long)uStack_80) {
                plVar20 = (long *)(uStack_80 >> 0x38);
                ppppppplVar12 = (long *******)&ppppppplStack_90;
              }
              FUN_1092b4db8(plStack_e8 + 0xea8,ppppppplVar12,plVar20);
              FUN_1099ab3b0(&ppppppplStack_f0);
            }
          }
          if ((long)uStack_80 < 0) {
            __ZdlPv(ppppppplStack_90);
          }
        }
      }
    }
  }
  uVar2 = *(uint *)(param_4 + 0xe8);
  uVar23 = (ulong)uVar2;
  if (uVar2 - 3 < 3) {
    FUN_109979570(uVar23,*(undefined4 *)(param_4 + 0x124),*(long *)(param_4 + 0x3b8) + 0x38,
                  *(undefined8 *)(param_4 + 0x128),*(undefined8 *)(param_4 + 0x3c8),param_4);
joined_r0x00010998dbb8:
    if ((uVar23 & 1) == 0) {
      return;
    }
  }
  else if (uVar2 == 6) {
    if (*(int *)(param_4 + 0xec) == 5) {
      lVar13 = param_4 + 0xf8;
      FUN_10997b6f4(lVar13,*(undefined8 *)(param_4 + 0x3c8));
      *(int *)(param_4 + 0x240) = (int)lVar13;
      uVar23 = (ulong)*(uint *)(param_4 + 0x124);
      FUN_10997b26c(uVar23,*(undefined8 *)(param_4 + 0x128),lVar13,*(undefined8 *)(param_4 + 0x3c8),
                    param_4);
      goto joined_r0x00010998dbb8;
    }
  }
  else if ((uVar2 == 2) && ((*(byte *)(param_4 + 0x13a) & 1) == 0)) {
    iVar6 = *(int *)(param_4 + 0x124);
    FUN_10997b26c(iVar6,*(undefined8 *)(param_4 + 0x128),0,*(undefined8 *)(param_4 + 0x3c8),param_4)
    ;
    if (iVar6 == 0) {
      return;
    }
  }
  *(undefined8 *)(param_4 + 0x200) = *(undefined8 *)(param_4 + 0x160);
  *(int *)(param_4 + 0x1e8) = *(int *)(param_4 + 0xe8);
  *(undefined8 *)(param_4 + 500) = *(undefined8 *)(param_4 + 0x120);
  *(undefined8 *)(param_4 + 0x1ec) = *(undefined8 *)(param_4 + 0xec);
  *(undefined1 *)(param_4 + 0x1fe) = *(undefined1 *)(param_4 + 0x138);
  *(undefined1 *)(param_4 + 0x1fd) = *(undefined1 *)(param_4 + 0x13a);
  *(undefined1 *)(param_4 + 0x238) = *(undefined1 *)(param_4 + 0x13b);
  *(undefined4 *)(param_4 + 0x23c) = *(undefined4 *)(param_4 + 0x13c);
  *(undefined4 *)(param_4 + 0x208) = *(undefined4 *)(param_4 + 0x90);
  *(undefined1 *)(param_4 + 0x1fc) = *(undefined1 *)(param_4 + 0x139);
  *(undefined8 *)(param_4 + 0x248) = *(undefined8 *)(*(long *)(param_4 + 0x3b8) + 0x30);
  if (*(int *)(param_4 + 0xe8) - 3U < 3) {
    uVar9 = *(undefined8 *)(param_4 + 0x128);
    FUN_10996887c(uVar9,puVar10);
    puVar21 = *(undefined4 **)(param_4 + 0x218);
    puVar18 = *(undefined4 **)(param_4 + 0x210);
    if ((long)puVar21 - (long)puVar18 == 4) {
      if (puVar21 < *(undefined4 **)(param_4 + 0x220)) {
        puVar22 = puVar21 + 1;
        *puVar21 = 0;
      }
      else {
        uVar14 = (long)*(undefined4 **)(param_4 + 0x220) - (long)puVar18;
        uVar23 = (long)uVar14 >> 1;
        if (uVar23 < 3) {
          uVar23 = 2;
        }
        if (0x7ffffffffffffffb < uVar14) {
          uVar23 = 0x3fffffffffffffff;
        }
        if (uVar23 >> 0x3e != 0) {
          func_0x000104c4f740();
          FUN_1099ab3b0(&ppppppplStack_f0);
          __Unwind_Resume(uVar9);
          goto LAB_10998e478;
        }
        puVar21 = (undefined4 *)(uVar23 << 2);
        __Znwm();
        puVar21[1] = 0;
        puVar22 = puVar21 + 2;
        *puVar21 = *puVar18;
        *(undefined4 **)(param_4 + 0x210) = puVar21;
        *(undefined4 **)(param_4 + 0x218) = puVar22;
        *(undefined4 **)(param_4 + 0x220) = puVar21 + uVar23;
        __ZdlPv(puVar18);
      }
      *(undefined4 **)(param_4 + 0x218) = puVar22;
    }
    if ((*(int *)(param_4 + 0xe8) == 4) && (*(uint *)(param_4 + 0x124) < 2)) {
      *(undefined1 *)(param_4 + 0x1fc) = 1;
    }
  }
  FUN_109964f6c(&ppppppplStack_f0,param_4 + 0x1e8);
  ppppppplVar12 = ppppppplStack_f0;
  ppppppplStack_f0 = (long *******)0x0;
  plVar20 = *(long **)(param_4 + 0x3d0);
  *(long ********)(param_4 + 0x3d0) = ppppppplVar12;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 8))();
    ppppppplVar12 = ppppppplStack_f0;
    ppppppplStack_f0 = (long *******)0x0;
    if (ppppppplVar12 != (long *******)0x0) {
      (*(code *)(*ppppppplVar12)[1])();
    }
    ppppppplVar12 = *(long ********)(param_4 + 0x3d0);
  }
  if (ppppppplVar12 == (long *******)0x0) {
    return;
  }
  *(undefined4 *)(param_4 + 0x26c) = 0;
  *(undefined8 *)(param_4 + 0x264) = 0;
  *(undefined8 *)(param_4 + 0x25c) = 0;
  *(int *)(param_4 + 600) = *(int *)(param_4 + 0xe8);
  *(undefined8 *)(param_4 + 0x250) = 1;
  if (*(int *)(param_4 + 0xe8) - 3U < 3) {
    *(int *)(param_4 + 0x254) = (int)*(undefined8 *)(**(long **)(param_4 + 0x128) + 0x38);
  }
  *(undefined4 *)(param_4 + 0x250) = *(undefined4 *)(param_4 + 0x90);
  *(undefined1 *)(param_4 + 0x25c) = *(undefined1 *)(param_4 + 0x13a);
  *(undefined8 *)(param_4 + 0x260) = *(undefined8 *)(*(long *)(param_4 + 0x3b8) + 0x30);
  *(undefined8 *)(param_4 + 0x268) = *(undefined8 *)(*(long *)(param_4 + 0x3c8) + 0x30);
  FUN_10994c548(&ppppppplStack_f0,param_4 + 0x250,*(long *)(param_4 + 0x3c8),param_4);
  ppppppplVar12 = ppppppplStack_f0;
  if (ppppppplStack_f0 == (long *******)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar10 = (undefined8 *)0x20;
    __Znwm();
    *puVar10 = &PTR_FUN_110b1d990;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = ppppppplVar12;
  }
  ppppppplStack_f0 = (long *******)0x0;
  *(long ********)(param_4 + 1000) = ppppppplVar12;
  plVar20 = *(long **)(param_4 + 0x3f0);
  *(undefined8 **)(param_4 + 0x3f0) = puVar10;
  if (plVar20 != (long *)0x0) {
    plVar19 = plVar20 + 1;
    do {
      lVar13 = *plVar19;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *plVar19 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  if (ppppppplStack_f0 != (long *******)0x0) {
    (*(code *)(*ppppppplStack_f0)[1])();
  }
  if (*(long *)(param_4 + 1000) == 0) {
    return;
  }
  if (*(char *)(param_4 + 0x140) == '\x01') {
    plVar20 = *(long **)(param_4 + 0x3c8);
    if (plVar20[6] != 0) {
      func_0x000107c2c4d8(param_4,&UNK_10f59122f,0x38);
      return;
    }
    if ((plVar20[1] - *plVar20 & 0x7fffffff8U) == 8) {
      ppppppplStack_f0 = (long *******)0x0;
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
      FUN_1099a9f0c(&ppppppplStack_f0,&UNK_10f5910b3,0x129,1,FUN_1099aa768,0);
      FUN_1092b4db8(plStack_e8 + 0xea8,&UNK_10f591268,0x32);
      FUN_1092b4db8();
LAB_10998def4:
      FUN_1099ab3b0(&ppppppplStack_f0);
    }
    else {
      lVar13 = *plVar17;
      if (lVar13 == 0) {
        FUN_109929294(&ppppppplStack_f0);
        plVar20 = plStack_e8;
        ppppppplVar12 = ppppppplStack_f0;
        ppppppplStack_f0 = (long *******)0x0;
        plStack_e8 = (long *)0x0;
        plVar19 = *(long **)(param_4 + 0x150);
        *(long **)(param_4 + 0x150) = plVar20;
        *plVar17 = (long)ppppppplVar12;
        if (plVar19 != (long *)0x0) {
          plVar17 = plVar19 + 1;
          do {
            lVar13 = *plVar17;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar4) {
              *plVar17 = lVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
          }
        }
        plVar17 = plStack_e8;
        if (plStack_e8 != (long *)0x0) {
          plVar20 = plStack_e8 + 1;
          do {
            lVar13 = *plVar20;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar4) {
              *plVar20 = lVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
      }
      else {
        iVar6 = *(int *)(lVar13 + 0x30);
        if ((iVar6 != 0) &&
           (lVar15 = *(long *)(param_4 + 0x408), *(long *)(param_4 + 0x410) != lVar15)) {
          uVar23 = 0;
          do {
            FUN_10998e488(lVar13,*(undefined8 *)(lVar15 + uVar23 * 8));
            uVar23 = uVar23 + 1;
            lVar15 = *(long *)(param_4 + 0x408);
          } while (uVar23 < (ulong)(*(long *)(param_4 + 0x410) - lVar15 >> 3));
          lVar13 = *plVar17;
          iVar6 = *(int *)(lVar13 + 0x30);
        }
        if (iVar6 == 0) {
          ppppppplStack_f0 = (long *******)0x0;
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
          FUN_1099a9f0c(&ppppppplStack_f0,&UNK_10f5910b3,0x133,1,FUN_1099aa768,0);
          FUN_1092b4db8(plStack_e8 + 0xea8,&UNK_10f5912b7,0x36);
          goto LAB_10998def4;
        }
        uVar23 = *(ulong *)(param_4 + 0x3c8);
        FUN_1099291c8(uVar23,lVar13,param_4);
        if ((uVar23 & 1) == 0) {
          return;
        }
      }
      pppppplVar11 = (long ******)0x78;
      __Znwm();
      FUN_109927750();
      puVar10 = (undefined8 *)0x20;
      ppppppplStack_f0 = (long *******)pppppplVar11;
      __Znwm();
      *puVar10 = &PTR_FUN_110b1ed98;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = pppppplVar11;
      ppppppplStack_f0 = (long *******)0x0;
      *(long *******)(param_4 + 0x3f8) = pppppplVar11;
      plVar17 = *(long **)(param_4 + 0x400);
      *(undefined8 **)(param_4 + 0x400) = puVar10;
      if (plVar17 != (long *)0x0) {
        plVar20 = plVar17 + 1;
        do {
          lVar13 = *plVar20;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *plVar20 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      if (ppppppplStack_f0 != (long *******)0x0) {
        FUN_109927860();
        __ZdlPv();
      }
      uVar9 = *(undefined8 *)(param_4 + 0x3f8);
      FUN_109927978(uVar9,*(undefined8 *)(param_4 + 0x3c8),*(long *)(param_4 + 0x3b8) + 0x38,
                    *(undefined8 *)(param_4 + 0x148),param_4);
      if ((int)uVar9 == 0) {
        return;
      }
    }
  }
  FUN_109972070(param_4);
  uVar5 = (undefined1)*(undefined8 *)(param_4 + 0x3c8);
  FUN_109978650();
  *(undefined1 *)(param_4 + 0x359) = uVar5;
  (**(code **)(**(long **)(param_4 + 1000) + 0x10))(&ppppppplStack_f0);
  ppppppplVar12 = ppppppplStack_f0;
  if (ppppppplStack_f0 == (long *******)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar10 = (undefined8 *)0x20;
    __Znwm();
    *puVar10 = &PTR_DAT_110b1d9e0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = ppppppplVar12;
  }
  ppppppplStack_f0 = (long *******)0x0;
  *(long ********)(param_4 + 0x398) = ppppppplVar12;
  plVar17 = *(long **)(param_4 + 0x3a0);
  *(undefined8 **)(param_4 + 0x3a0) = puVar10;
  if (plVar17 != (long *)0x0) {
    plVar20 = plVar17 + 1;
    do {
      lVar13 = *plVar20;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *plVar20 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  ppppppplVar12 = ppppppplStack_f0;
  ppppppplStack_f0 = (long *******)0x0;
  if (ppppppplVar12 != (long *******)0x0) {
    (*(code *)(*ppppppplVar12)[1])();
  }
  uVar9 = *(undefined8 *)(param_4 + 0x3f8);
  lVar13 = *(long *)(param_4 + 0x400);
  if (lVar13 != 0) {
    plVar17 = (long *)(lVar13 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *plVar17 = *plVar17 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(undefined8 *)(param_4 + 0x3a8) = uVar9;
  plVar17 = *(long **)(param_4 + 0x3b0);
  *(long *)(param_4 + 0x3b0) = lVar13;
  if (plVar17 != (long *)0x0) {
    plVar20 = plVar17 + 1;
    do {
      lVar13 = *plVar20;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *plVar20 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  plStack_88 = *(long **)(param_4 + 0x3d0);
  uStack_78 = *(undefined8 *)(param_4 + 0xa0);
  uStack_80 = *(ulong *)(param_4 + 0x98);
  uStack_68 = *(undefined8 *)(param_4 + 0xc0);
  uStack_70 = *(undefined8 *)(param_4 + 0xb8);
  uStack_60 = *(undefined4 *)(param_4 + 0x74);
  ppppppplStack_90 = (long *******)CONCAT44(ppppppplStack_90._4_4_,*(undefined4 *)(param_4 + 0x70));
  FUN_10998e9f8(&ppppppplStack_f0,&ppppppplStack_90);
  ppppppplVar12 = ppppppplStack_f0;
  if (ppppppplStack_f0 == (long *******)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar10 = (undefined8 *)0x20;
    __Znwm();
    *puVar10 = &PTR_DAT_110b1da30;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = ppppppplVar12;
  }
  ppppppplStack_f0 = (long *******)0x0;
  *(long ********)(param_4 + 0x388) = ppppppplVar12;
  plVar17 = *(long **)(param_4 + 0x390);
  *(undefined8 **)(param_4 + 0x390) = puVar10;
  if (plVar17 != (long *)0x0) {
    plVar20 = plVar17 + 1;
    do {
      lVar13 = *plVar20;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *plVar20 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  if (ppppppplStack_f0 != (long *******)0x0) {
    (*(code *)(*ppppppplStack_f0)[1])();
  }
  if (*(long *)(param_4 + 0x388) != 0) {
    return;
  }
  ppppppplStack_f0 = (long *******)0x0;
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
  FUN_1099a9f0c(&ppppppplStack_f0,&UNK_10f5910b3,0x162,3,FUN_1099aa768,0);
  FUN_1092b4db8(plStack_e8 + 0xea8,&UNK_10f5912ee,0x45);
LAB_10998e478:
  func_0x0001099ab7c0(&ppppppplStack_f0);
  return;
}



/* Entry: 10998e480; end: 10998e487;  */

void FUN_10998e480(void)

{
  return;
}



/* Entry: 10998e488; end: 10998e8c7;  */

void FUN_10998e488(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  int iStack_50;
  undefined1 uStack_49;
  undefined1 *puStack_48;
  
  uVar5 = param_1[4];
  if (uVar5 != 0) {
    puStack_48 = (undefined1 *)&iStack_50;
    uVar12 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
    uVar12 = (param_2 >> 0x20 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
    uVar20 = (uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
    uVar12 = uVar5 - 1;
    if ((uVar5 & uVar12) == 0) {
      uVar13 = uVar12 & uVar20;
    }
    else {
      uVar13 = uVar20;
      if (uVar5 <= uVar20) {
        uVar13 = 0;
        if (uVar5 != 0) {
          uVar13 = uVar20 / uVar5;
        }
        uVar13 = uVar20 - uVar13 * uVar5;
      }
    }
    plVar16 = *(long **)(param_1[3] + uVar13 * 8);
    if (plVar16 != (long *)0x0) {
      do {
        while( true ) {
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) {
            return;
          }
          uVar18 = plVar16[1];
          if (uVar20 - uVar18 != 0) break;
          if (plVar16[2] == param_2) {
            iStack_50 = *(int *)(plVar16 + 3);
            if (iStack_50 < 0) {
              return;
            }
            puVar3 = param_1;
            FUN_10996b1d4(param_1,&iStack_50,&UNK_10dd5b8f9,&puStack_48,&uStack_49);
            puVar9 = puVar3 + 6;
            puVar6 = (undefined8 *)*puVar9;
            puVar14 = puVar6;
            puVar19 = puVar9;
            if (puVar6 != (undefined8 *)0x0) {
              do {
                lVar15 = 8;
                if (param_2 <= (ulong)puVar14[4]) {
                  lVar15 = 0;
                  puVar19 = puVar14;
                }
                puVar10 = (undefined8 *)((long)puVar14 + lVar15);
                puVar14 = (undefined8 *)*puVar10;
              } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
              if ((puVar19 != puVar9) && ((ulong)puVar19[4] <= param_2)) {
                puVar14 = puVar19;
                puVar9 = (undefined8 *)puVar19[1];
                if ((undefined8 *)puVar19[1] == (undefined8 *)0x0) {
                  do {
                    puVar10 = (undefined8 *)puVar14[2];
                    bVar2 = (undefined8 *)*puVar10 != puVar14;
                    puVar14 = puVar10;
                  } while (bVar2);
                }
                else {
                  do {
                    puVar10 = puVar9;
                    puVar9 = (undefined8 *)*puVar10;
                  } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
                }
                if ((undefined8 *)puVar3[5] == puVar19) {
                  puVar3[5] = puVar10;
                }
                puVar3[7] = puVar3[7] + -1;
                func_0x000104c611f0(puVar6,puVar19);
                __ZdlPv(puVar19);
              }
            }
            puVar19 = param_1;
            puStack_48 = (undefined1 *)&iStack_50;
            FUN_10996b1d4(param_1,&iStack_50,&UNK_10dd5b8f9,&puStack_48,&uStack_49);
            if (puVar19[7] == 0) {
              plVar7 = param_1 + 1;
              plVar4 = (long *)*plVar7;
              plVar11 = plVar4;
              plVar16 = plVar7;
              if (plVar4 != (long *)0x0) {
                do {
                  lVar15 = 8;
                  if (iStack_50 <= (int)plVar11[4]) {
                    lVar15 = 0;
                    plVar16 = plVar11;
                  }
                  puVar19 = (undefined8 *)((long)plVar11 + lVar15);
                  plVar11 = (long *)*puVar19;
                } while ((long *)*puVar19 != (long *)0x0);
                if ((plVar16 != plVar7) && ((int)plVar16[4] <= iStack_50)) {
                  plVar11 = plVar16;
                  plVar7 = (long *)plVar16[1];
                  if ((long *)plVar16[1] == (long *)0x0) {
                    do {
                      plVar8 = (long *)plVar11[2];
                      bVar2 = (long *)*plVar8 != plVar11;
                      plVar11 = plVar8;
                    } while (bVar2);
                  }
                  else {
                    do {
                      plVar8 = plVar7;
                      plVar7 = (long *)*plVar8;
                    } while ((long *)*plVar8 != (long *)0x0);
                  }
                  if ((long *)*param_1 == plVar16) {
                    *param_1 = plVar8;
                  }
                  param_1[2] = param_1[2] + -1;
                  func_0x000104c611f0(plVar4,plVar16);
                  func_0x00010992bbf8(plVar16 + 5,plVar16[6]);
                  __ZdlPv(plVar16);
                }
              }
            }
            uVar5 = param_1[4];
            if (uVar5 == 0) {
              return;
            }
            uVar12 = uVar5 - 1;
            if ((uVar5 & uVar12) == 0) {
              uVar13 = uVar12 & uVar20;
            }
            else {
              uVar13 = uVar20;
              if (uVar5 <= uVar20) {
                uVar13 = 0;
                if (uVar5 != 0) {
                  uVar13 = uVar20 / uVar5;
                }
                uVar13 = uVar20 - uVar13 * uVar5;
              }
            }
            lVar15 = param_1[3];
            puVar19 = *(undefined8 **)(lVar15 + uVar13 * 8);
            if (puVar19 == (undefined8 *)0x0) {
              return;
            }
            plVar16 = (long *)*puVar19;
            if (plVar16 == (long *)0x0) {
              return;
            }
            do {
              uVar18 = plVar16[1];
              if (uVar18 == uVar20) {
                if (plVar16[2] == param_2) {
                  lVar17 = *plVar16;
                  if ((uVar5 & uVar12) == 0) {
                    uVar20 = uVar12 & uVar20;
                  }
                  else if (uVar5 <= uVar20) {
                    uVar13 = 0;
                    if (uVar5 != 0) {
                      uVar13 = uVar20 / uVar5;
                    }
                    uVar20 = uVar20 - uVar13 * uVar5;
                  }
                  plVar11 = *(long **)(lVar15 + uVar20 * 8);
                  do {
                    plVar4 = plVar11;
                    plVar11 = (long *)*plVar4;
                  } while ((long *)*plVar4 != plVar16);
                  if (plVar4 == param_1 + 5) {
LAB_10998e820:
                    if (lVar17 == 0) {
LAB_10998e854:
                      *(undefined8 *)(lVar15 + uVar20 * 8) = 0;
                      lVar17 = *plVar16;
                      goto LAB_10998e85c;
                    }
                    uVar13 = *(ulong *)(lVar17 + 8);
                    if ((uVar5 & uVar12) == 0) {
                      uVar18 = uVar13 & uVar12;
                    }
                    else {
                      uVar18 = uVar13;
                      if (uVar5 <= uVar13) {
                        uVar18 = 0;
                        if (uVar5 != 0) {
                          uVar18 = uVar13 / uVar5;
                        }
                        uVar18 = uVar13 - uVar18 * uVar5;
                      }
                    }
                    if (uVar18 != uVar20) goto LAB_10998e854;
                  }
                  else {
                    uVar13 = plVar4[1];
                    if ((uVar5 & uVar12) == 0) {
                      uVar13 = uVar13 & uVar12;
                    }
                    else if (uVar5 <= uVar13) {
                      uVar18 = 0;
                      if (uVar5 != 0) {
                        uVar18 = uVar13 / uVar5;
                      }
                      uVar13 = uVar13 - uVar18 * uVar5;
                    }
                    if (uVar13 != uVar20) goto LAB_10998e820;
LAB_10998e85c:
                    if (lVar17 == 0) goto LAB_10998e898;
                    uVar13 = *(ulong *)(lVar17 + 8);
                  }
                  if ((uVar5 & uVar12) == 0) {
                    uVar13 = uVar13 & uVar12;
                  }
                  else if (uVar5 <= uVar13) {
                    uVar12 = 0;
                    if (uVar5 != 0) {
                      uVar12 = uVar13 / uVar5;
                    }
                    uVar13 = uVar13 - uVar12 * uVar5;
                  }
                  if (uVar13 != uVar20) {
                    *(long **)(param_1[3] + uVar13 * 8) = plVar4;
                    lVar17 = *plVar16;
                  }
LAB_10998e898:
                  *plVar4 = lVar17;
                  *plVar16 = 0;
                  param_1[6] = param_1[6] + -1;
                  __ZdlPv();
                  return;
                }
              }
              else {
                if ((uVar5 & uVar12) == 0) {
                  uVar18 = uVar18 & uVar12;
                }
                else if (uVar5 <= uVar18) {
                  uVar1 = 0;
                  if (uVar5 != 0) {
                    uVar1 = uVar18 / uVar5;
                  }
                  uVar18 = uVar18 - uVar1 * uVar5;
                }
                if (uVar18 != uVar13) {
                  return;
                }
              }
              plVar16 = (long *)*plVar16;
              if (plVar16 == (long *)0x0) {
                return;
              }
            } while( true );
          }
        }
        if ((uVar5 & uVar12) == 0) {
          uVar18 = uVar18 & uVar12;
        }
        else if (uVar5 <= uVar18) {
          uVar1 = 0;
          if (uVar5 != 0) {
            uVar1 = uVar18 / uVar5;
          }
          uVar18 = uVar18 - uVar1 * uVar5;
        }
      } while (uVar18 == uVar13);
    }
  }
  return;
}



/* Entry: 10998e8c8; end: 10998e8fb;  */

long * FUN_10998e8c8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_109927860();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10998e8fc; end: 10998e8ff;  */

void FUN_10998e8fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10998e900; end: 10998e933;  */

void FUN_10998e900(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10998e934; end: 10998e983;  */

/* WARNING: Removing unreachable block (ram,0x00010998e960) */

undefined8 FUN_10998e934(undefined8 param_1,long param_2)

{
  if (*(undefined **)(param_2 + 8) != &UNK_10e00e96e) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10998e984; end: 10998e9f7;  */

void FUN_10998e984(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10998e9f8; end: 10998eaeb;  */

void FUN_10998e9f8(undefined8 *param_1,uint *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  undefined8 *extraout_x8;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  ulong uVar26;
  int iVar27;
  long *unaff_x21;
  long unaff_x22;
  long lVar28;
  long unaff_x23;
  ulong unaff_x24;
  long *plVar29;
  long *plVar30;
  long unaff_x25;
  long unaff_x26;
  ulong uVar31;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined8 uStack_278;
  undefined1 uStack_270;
  undefined7 uStack_26f;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined8 uStack_220;
  int iStack_214;
  long lStack_210;
  ulong uStack_208;
  long *plStack_200;
  ulong uStack_1f8;
  float fStack_1f0;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  ulong uStack_1c0;
  ulong uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  long lStack_190;
  long *plStack_188;
  undefined8 *puStack_180;
  long *plStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_90;
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
  
  plVar29 = &lStack_90;
  if (*param_2 == 1) {
    uVar7 = 0x108;
    __Znwm();
    FUN_109933a1c();
LAB_10998ea50:
    *param_1 = uVar7;
    return;
  }
  if (*param_2 == 0) {
    uVar7 = 0x60;
    __Znwm();
    FUN_109957140();
    goto LAB_10998ea50;
  }
  lStack_90 = 0;
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
  FUN_1099a9f0c(&lStack_90,&UNK_10f591334,0x35,3,FUN_1099aa768,0);
  plVar10 = (long *)0x1f;
  FUN_1092b4db8(lStack_88 + 0x7540,&UNK_10f5913c2);
  puVar9 = (undefined8 *)(ulong)*param_2;
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  func_0x0001099ab7c0();
  __ZdlPv();
  plVar24 = plVar29;
  __Unwind_Resume();
  pcStack_98 = FUN_10998eaec;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (plVar10 == (long *)0x0) {
    uStack_150 = 0;
    uStack_f8 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_100 = 0;
    FUN_1099a9f0c(&uStack_150,&UNK_10f5913e2,0x3b,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_148 + 0x7540,&UNK_10f591465,0x24);
  }
  else {
    lVar19 = *plVar10;
    unaff_x23 = plVar10[1];
    unaff_x22 = lVar19;
    if (unaff_x23 != lVar19) {
      do {
        lVar28 = unaff_x23 + -0x18;
        func_0x000105340e88(lVar28,*(undefined8 *)(unaff_x23 + -0x10));
        unaff_x23 = lVar28;
      } while (lVar28 != lVar19);
      plVar10[1] = lVar19;
      unaff_x22 = *plVar10;
      unaff_x23 = lVar19;
    }
    unaff_x26 = plVar24[1] - *plVar24 >> 3;
    iVar27 = (int)puVar9;
    uVar12 = unaff_x26 - iVar27;
    unaff_x25 = unaff_x23 - unaff_x22;
    unaff_x27 = (unaff_x25 >> 3) * -0x5555555555555555;
    unaff_x24 = uVar12 + (unaff_x25 >> 3) * 0x5555555555555555;
    if (uVar12 < unaff_x27 || unaff_x24 == 0) {
      if (uVar12 < unaff_x27) {
        lVar19 = unaff_x22 + uVar12 * 0x18;
        while (unaff_x23 != lVar19) {
          func_0x000105340e88(unaff_x23 + -0x18,*(undefined8 *)(unaff_x23 + -0x10));
          unaff_x23 = unaff_x23 + -0x18;
        }
        plVar10[1] = lVar19;
      }
LAB_10998ed28:
      lVar28 = plVar24[4];
      for (lVar19 = plVar24[3]; lVar19 != lVar28; lVar19 = lVar19 + 0x20) {
        piVar14 = *(int **)(lVar19 + 8);
        uVar12 = uStack_150 >> 0x20;
        uStack_150 = CONCAT44((int)uVar12,*piVar14);
        if ((*piVar14 < iVar27) && (8 < (ulong)(*(long *)(lVar19 + 0x10) - (long)piVar14))) {
          lVar13 = 8;
          uVar12 = 1;
          do {
            func_0x000105341058(*plVar10 + (long)(*(int *)((long)piVar14 + lVar13) - iVar27) * 0x18,
                                &uStack_150,&uStack_150);
            uVar12 = uVar12 + 1;
            piVar14 = *(int **)(lVar19 + 8);
            lVar13 = lVar13 + 8;
          } while (uVar12 < (ulong)(*(long *)(lVar19 + 0x10) - (long)piVar14 >> 3));
        }
      }
      return;
    }
    if (unaff_x24 <= (ulong)((plVar10[2] - unaff_x23 >> 3) * -0x5555555555555555)) {
      lVar19 = unaff_x24 * 0x18;
      puVar9 = (undefined8 *)(unaff_x23 + 8);
      do {
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[-1] = puVar9;
        puVar9 = puVar9 + 3;
        lVar19 = lVar19 + -0x18;
      } while (lVar19 != 0);
      plVar10[1] = unaff_x23 + unaff_x24 * 0x18;
      goto LAB_10998ed28;
    }
    if (uVar12 < 0xaaaaaaaaaaaaaab) {
      lVar19 = plVar10[2] - unaff_x22 >> 3;
      unaff_x28 = lVar19 * 0x5555555555555556;
      if (unaff_x28 < uVar12 || unaff_x28 - uVar12 == 0) {
        unaff_x28 = uVar12;
      }
      if (0x555555555555554 < (ulong)(lVar19 * -0x5555555555555555)) {
        unaff_x28 = 0xaaaaaaaaaaaaaaa;
      }
      if (unaff_x28 < 0xaaaaaaaaaaaaaab) {
        lStack_158 = (long)iVar27;
        lVar28 = unaff_x28 * 0x18;
        __Znwm();
        lVar19 = unaff_x26 * 0x18 + (unaff_x27 + lStack_158) * -0x18;
        puVar9 = (undefined8 *)(unaff_x25 + lVar28 + 8);
        do {
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[-1] = puVar9;
          puVar9 = puVar9 + 3;
          lVar19 = lVar19 + -0x18;
        } while (lVar19 != 0);
        lVar19 = (lVar28 + unaff_x25) - unaff_x25;
        if (unaff_x22 != unaff_x23) {
          lVar13 = 0;
          do {
            puVar9 = (undefined8 *)(lVar19 + lVar13);
            puVar1 = (undefined8 *)(unaff_x22 + lVar13);
            *puVar9 = *puVar1;
            plVar29 = puVar1 + 1;
            lVar23 = *plVar29;
            plVar30 = puVar9 + 1;
            *plVar30 = lVar23;
            lVar25 = puVar1[2];
            puVar9[2] = lVar25;
            if (lVar25 == 0) {
              *puVar9 = plVar30;
            }
            else {
              *(long **)(lVar23 + 0x10) = plVar30;
              *(long **)(unaff_x22 + lVar13) = plVar29;
              *plVar29 = 0;
              puVar1[2] = 0;
            }
            lVar13 = lVar13 + 0x18;
          } while (unaff_x22 + lVar13 != unaff_x23);
          do {
            func_0x000105340e88(unaff_x22,*(undefined8 *)(unaff_x22 + 8));
            unaff_x22 = unaff_x22 + 0x18;
          } while (unaff_x22 != unaff_x23);
          unaff_x22 = *plVar10;
        }
        *plVar10 = lVar19;
        plVar10[1] = lVar28 + unaff_x25 + unaff_x24 * 0x18;
        plVar10[2] = lVar28 + unaff_x28 * 0x18;
        if (unaff_x22 != 0) {
          __ZdlPv(unaff_x22);
        }
        goto LAB_10998ed28;
      }
    }
    else {
      FUN_1099900f8();
    }
    func_0x000104c4f740();
    plVar29 = plVar10;
    param_1 = puVar9;
    unaff_x21 = plVar24;
  }
  puVar8 = &uStack_150;
  func_0x0001099ab7c0();
  pcStack_168 = FUN_10998ee30;
  lVar19 = 0;
  uStack_1c0 = unaff_x28;
  uStack_1b8 = unaff_x27;
  lStack_1b0 = unaff_x26;
  lStack_1a8 = unaff_x25;
  uStack_1a0 = unaff_x24;
  lStack_198 = unaff_x23;
  lStack_190 = unaff_x22;
  plStack_188 = unaff_x21;
  puStack_180 = param_1;
  plStack_178 = plVar29;
  ppuStack_170 = &puStack_a0;
  _time();
  uVar12 = *puVar8;
  uVar26 = puVar8[1];
  if (uVar12 == uVar26) {
    plStack_1e0 = (long *)0x0;
    plStack_1d8 = (long *)0x0;
    plStack_1d0 = (long *)0x0;
    uStack_208 = 0;
    lStack_210 = 0;
    uStack_1f8 = 0;
    plStack_200 = (long *)0x0;
    fStack_1f0 = 1.0;
  }
  else {
    uVar11 = 0;
    uVar20 = uVar12;
    do {
      if (*(long *)(uVar20 + 0x10) != 0) {
        plVar24 = *(long **)(uVar20 + 8);
        plVar29 = (long *)(uVar20 + 8);
        if (plVar24 == (long *)0x0) {
          do {
            plVar10 = (long *)plVar29[2];
            bVar6 = (long *)*plVar10 == plVar29;
            plVar29 = plVar10;
          } while (bVar6);
        }
        else {
          do {
            plVar10 = plVar24;
            plVar24 = (long *)plVar10[1];
          } while ((long *)plVar10[1] != (long *)0x0);
        }
        if ((int)uVar11 <= *(int *)((long)plVar10 + 0x1c) + 1) {
          uVar11 = *(int *)((long)plVar10 + 0x1c) + 1;
        }
      }
      uVar20 = uVar20 + 0x18;
    } while (uVar20 != uVar26);
    plStack_1e0 = (long *)0x0;
    plStack_1d8 = (long *)0x0;
    plStack_1d0 = (long *)0x0;
    uStack_278 = &plStack_1e0;
    uStack_270 = 0;
    if (uVar11 != 0) {
      plVar24 = (long *)((ulong)uVar11 * 0x18);
      plVar10 = plVar24;
      __Znwm();
      plStack_1d0 = plVar10 + (ulong)uVar11 * 3;
      plVar29 = plVar10 + 1;
      do {
        *plVar29 = 0;
        plVar29[1] = 0;
        plVar29[-1] = (long)plVar29;
        plVar29 = plVar29 + 3;
        plVar24 = plVar24 + -3;
        plStack_1e0 = plVar10;
      } while (plVar24 != (long *)0x0);
    }
    iVar27 = 0;
    lVar28 = 0;
    uStack_278 = (long **)((ulong)uStack_278 & 0xffffffff00000000);
    plStack_1d8 = plStack_1d0;
    do {
      puVar9 = (undefined8 *)(uVar12 + lVar28 * 0x18);
      plVar24 = puVar9 + 1;
      plVar29 = (long *)*puVar9;
      if (plVar29 != plVar24) {
        do {
          func_0x000105341058(plStack_1e0 + (long)*(int *)((long)plVar29 + 0x1c) * 3,&uStack_278,
                              &uStack_278);
          plVar10 = (long *)plVar29[1];
          plVar30 = plVar29;
          if ((long *)plVar29[1] == (long *)0x0) {
            do {
              plVar29 = (long *)plVar30[2];
              bVar6 = (long *)*plVar29 != plVar30;
              plVar30 = plVar29;
            } while (bVar6);
          }
          else {
            do {
              plVar29 = plVar10;
              plVar10 = (long *)*plVar29;
            } while ((long *)*plVar29 != (long *)0x0);
          }
        } while (plVar29 != plVar24);
        uVar12 = *puVar8;
        uVar26 = puVar8[1];
        iVar27 = (int)uStack_278;
      }
      plVar29 = plStack_1d8;
      iVar27 = iVar27 + 1;
      uStack_278 = (long **)CONCAT44(uStack_278._4_4_,iVar27);
      lVar28 = (long)iVar27;
      uVar20 = ((long)(uVar26 - uVar12) >> 3) * -0x5555555555555555;
    } while ((ulong)(long)iVar27 <= uVar20 && uVar20 - (long)iVar27 != 0);
    uStack_208 = 0;
    lStack_210 = 0;
    uStack_1f8 = 0;
    plStack_200 = (long *)0x0;
    fStack_1f0 = 1.0;
    if (plStack_1e0 != plStack_1d8) {
      uVar12 = 0;
      uVar20 = 0;
      plVar24 = plStack_1e0;
      do {
        plVar30 = plVar24 + 1;
        plVar10 = (long *)*plVar24;
        while (plVar10 != plVar30) {
          plVar15 = (long *)plVar10[1];
          plVar21 = plVar10;
          plVar4 = plVar15;
          if (plVar15 == (long *)0x0) {
            do {
              plVar17 = (long *)plVar21[2];
              bVar6 = (long *)*plVar17 != plVar21;
              plVar21 = plVar17;
            } while (bVar6);
          }
          else {
            do {
              plVar17 = plVar4;
              plVar4 = (long *)*plVar17;
            } while ((long *)*plVar17 != (long *)0x0);
          }
          if (plVar17 != plVar30) {
            do {
              iVar27 = *(int *)((long)plVar10 + 0x1c);
              iVar2 = *(int *)((long)plVar17 + 0x1c);
              uVar31 = (ulong)iVar2;
              uVar16 = ((long)iVar27 - uVar31) + 0x1f73e299748a907e ^ uVar31 >> 0x2b;
              uVar18 = (-0x1f73e299748a907e - uVar31) - uVar16 ^ uVar16 << 9;
              uVar31 = (uVar31 - uVar16) - uVar18 ^ uVar18 >> 8;
              uVar16 = (uVar16 - uVar18) - uVar31 ^ uVar31 >> 0x26;
              uVar18 = (uVar18 - uVar31) - uVar16 ^ uVar16 << 0x17;
              uVar31 = (uVar31 - uVar16) - uVar18 ^ uVar18 >> 5;
              uVar16 = (uVar16 - uVar18) - uVar31 ^ uVar31 >> 0x23;
              uVar18 = (uVar18 - uVar31) - uVar16 ^ uVar16 << 0x31;
              uVar16 = (uVar31 - uVar16) - uVar18 ^ uVar18 >> 0xb;
              if (uVar20 != 0) {
                uVar18 = uVar20 - 1;
                if ((uVar20 & uVar18) == 0) {
                  uVar26 = uVar16 & uVar18;
                }
                else {
                  uVar26 = uVar16;
                  if (uVar20 <= uVar16) {
                    uVar26 = 0;
                    if (uVar20 != 0) {
                      uVar26 = uVar16 / uVar20;
                    }
                    uVar26 = uVar16 - uVar26 * uVar20;
                  }
                }
                puVar9 = *(undefined8 **)(lStack_210 + uVar26 * 8);
                if (puVar9 != (undefined8 *)0x0) {
                  for (plVar15 = (long *)*puVar9; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15
                      ) {
                    uVar31 = plVar15[1];
                    if (uVar31 == uVar16) {
                      if ((int)plVar15[2] == iVar27 && *(int *)((long)plVar15 + 0x14) == iVar2)
                      goto LAB_10998f544;
                    }
                    else {
                      if ((uVar20 & uVar18) == 0) {
                        uVar31 = uVar31 & uVar18;
                      }
                      else if (uVar20 <= uVar31) {
                        uVar3 = 0;
                        if (uVar20 != 0) {
                          uVar3 = uVar31 / uVar20;
                        }
                        uVar31 = uVar31 - uVar3 * uVar20;
                      }
                      if (uVar31 != uVar26) break;
                    }
                  }
                }
              }
              plVar15 = (long *)0x20;
              __Znwm();
              *plVar15 = 0;
              plVar15[1] = uVar16;
              plVar15[2] = CONCAT44(iVar2,iVar27);
              *(undefined4 *)(plVar15 + 3) = 0;
              if ((uVar20 == 0) || (fStack_1f0 * (float)uVar20 < (float)(uVar12 + 1))) {
                if (uVar20 < 3) {
                  uVar26 = 1;
                }
                else {
                  uVar26 = (ulong)((uVar20 & uVar20 - 1) != 0);
                }
                uVar26 = uVar26 | uVar20 << 1;
                uVar12 = (ulong)((float)(uVar12 + 1) / fStack_1f0);
                if (uVar26 <= uVar12) {
                  uVar26 = uVar12;
                }
                if (uVar26 - 1 == 0) {
                  uVar26 = 2;
                  if (1 < uVar20) goto LAB_10998f288;
LAB_10998f224:
                  uVar20 = uVar26;
                  lVar28 = uVar20 << 3;
                  __Znwm();
                  bVar6 = lStack_210 != 0;
                  lStack_210 = lVar28;
                  if (bVar6) {
                    __ZdlPv();
                  }
                  uVar12 = 0;
                  do {
                    *(undefined8 *)(lStack_210 + uVar12 * 8) = 0;
                    uVar12 = uVar12 + 1;
                  } while (uVar20 != uVar12);
                  uStack_208 = uVar20;
                  if (plStack_200 != (long *)0x0) {
                    uVar12 = plStack_200[1];
                    uVar26 = uVar20 - 1;
                    if ((uVar20 & uVar26) == 0) {
                      uVar12 = uVar12 & uVar26;
                    }
                    else if (uVar20 <= uVar12) {
                      uVar18 = 0;
                      if (uVar20 != 0) {
                        uVar18 = uVar12 / uVar20;
                      }
                      uVar12 = uVar12 - uVar18 * uVar20;
                    }
                    *(long ***)(lStack_210 + uVar12 * 8) = &plStack_200;
                    plVar21 = (long *)*plStack_200;
                    plVar4 = plStack_200;
                    while (plVar21 != (long *)0x0) {
                      uVar18 = plVar21[1];
                      if ((uVar20 & uVar26) == 0) {
                        uVar18 = uVar18 & uVar26;
                      }
                      else if (uVar20 <= uVar18) {
                        uVar31 = 0;
                        if (uVar20 != 0) {
                          uVar31 = uVar18 / uVar20;
                        }
                        uVar18 = uVar18 - uVar31 * uVar20;
                      }
                      plVar22 = plVar21;
                      if (uVar18 != uVar12) {
                        if (*(long *)(lStack_210 + uVar18 * 8) == 0) {
                          *(long **)(lStack_210 + uVar18 * 8) = plVar4;
                          uVar12 = uVar18;
                        }
                        else {
                          *plVar4 = *plVar21;
                          *plVar21 = **(long **)(lStack_210 + uVar18 * 8);
                          **(undefined8 **)(lStack_210 + uVar18 * 8) = plVar21;
                          plVar22 = plVar4;
                        }
                      }
                      plVar4 = plVar22;
                      plVar21 = (long *)*plVar22;
                    }
                  }
                }
                else {
                  if ((uVar26 & uVar26 - 1) != 0) {
                    __ZNSt3__112__next_primeEm();
                    uVar20 = uStack_208;
                  }
                  if (uVar20 < uVar26) {
                    if (uVar26 >> 0x3d != 0) goto LAB_10998f84c;
                    goto LAB_10998f224;
                  }
LAB_10998f288:
                  if (uVar26 < uVar20) {
                    uVar12 = (ulong)((float)uStack_1f8 / fStack_1f0);
                    if ((uVar20 < 3) || ((uVar20 & uVar20 - 1) != 0)) {
                      __ZNSt3__112__next_primeEm();
                    }
                    else if (1 < uVar12) {
                      uVar12 = 1L << (-LZCOUNT(uVar12 - 1) & 0x3fU);
                    }
                    lVar28 = lStack_210;
                    if (uVar26 <= uVar12) {
                      uVar26 = uVar12;
                    }
                    bVar6 = uVar26 < uVar20;
                    uVar20 = uStack_208;
                    if (bVar6) {
                      if (uVar26 == 0) {
                        lStack_210 = 0;
                        if (lVar28 != 0) {
                          __ZdlPv();
                        }
                        uStack_208 = 0;
                        uVar20 = 0;
                      }
                      else {
                        if (uVar26 >> 0x3d != 0) {
LAB_10998f84c:
                          func_0x000104c4f740();
                    /* WARNING: Does not return */
                          pcVar5 = (code *)SoftwareBreakpoint(1,0x10998f854);
                          (*pcVar5)();
                        }
                        lVar28 = uVar26 << 3;
                        __Znwm();
                        bVar6 = lStack_210 != 0;
                        lStack_210 = lVar28;
                        if (bVar6) {
                          __ZdlPv();
                        }
                        uVar12 = 0;
                        do {
                          *(undefined8 *)(lStack_210 + uVar12 * 8) = 0;
                          uVar12 = uVar12 + 1;
                        } while (uVar26 != uVar12);
                        uVar20 = uVar26;
                        uStack_208 = uVar26;
                        if (plStack_200 != (long *)0x0) {
                          uVar12 = plStack_200[1];
                          uVar18 = uVar26 - 1;
                          if ((uVar26 & uVar18) == 0) {
                            uVar12 = uVar12 & uVar18;
                          }
                          else if (uVar26 <= uVar12) {
                            uVar31 = 0;
                            if (uVar26 != 0) {
                              uVar31 = uVar12 / uVar26;
                            }
                            uVar12 = uVar12 - uVar31 * uVar26;
                          }
                          *(long ***)(lStack_210 + uVar12 * 8) = &plStack_200;
                          plVar21 = (long *)*plStack_200;
                          plVar4 = plStack_200;
                          while (plVar21 != (long *)0x0) {
                            uVar31 = plVar21[1];
                            if ((uVar26 & uVar18) == 0) {
                              uVar31 = uVar31 & uVar18;
                            }
                            else if (uVar26 <= uVar31) {
                              uVar3 = 0;
                              if (uVar26 != 0) {
                                uVar3 = uVar31 / uVar26;
                              }
                              uVar31 = uVar31 - uVar3 * uVar26;
                            }
                            plVar22 = plVar21;
                            if (uVar31 != uVar12) {
                              if (*(long *)(lStack_210 + uVar31 * 8) == 0) {
                                *(long **)(lStack_210 + uVar31 * 8) = plVar4;
                                uVar12 = uVar31;
                              }
                              else {
                                *plVar4 = *plVar21;
                                *plVar21 = **(long **)(lStack_210 + uVar31 * 8);
                                **(undefined8 **)(lStack_210 + uVar31 * 8) = plVar21;
                                plVar22 = plVar4;
                              }
                            }
                            plVar4 = plVar22;
                            plVar21 = (long *)*plVar22;
                          }
                        }
                      }
                    }
                  }
                }
                if ((uVar20 & uVar20 - 1) == 0) {
                  uVar26 = uVar20 - 1 & uVar16;
                }
                else {
                  uVar26 = uVar16;
                  if (uVar20 <= uVar16) {
                    uVar12 = 0;
                    if (uVar20 != 0) {
                      uVar12 = uVar16 / uVar20;
                    }
                    uVar26 = uVar16 - uVar12 * uVar20;
                  }
                }
              }
              plVar21 = *(long **)(lStack_210 + uVar26 * 8);
              if (plVar21 == (long *)0x0) {
                *plVar15 = (long)plStack_200;
                *(long ***)(lStack_210 + uVar26 * 8) = &plStack_200;
                plStack_200 = plVar15;
                if (*plVar15 != 0) {
                  uVar12 = *(ulong *)(*plVar15 + 8);
                  if ((uVar20 & uVar20 - 1) == 0) {
                    uVar12 = uVar12 & uVar20 - 1;
                  }
                  else if (uVar20 <= uVar12) {
                    uVar16 = 0;
                    if (uVar20 != 0) {
                      uVar16 = uVar12 / uVar20;
                    }
                    uVar12 = uVar12 - uVar16 * uVar20;
                  }
                  plVar21 = (long *)(lStack_210 + uVar12 * 8);
                  goto LAB_10998f534;
                }
              }
              else {
                *plVar15 = *plVar21;
LAB_10998f534:
                *plVar21 = (long)plVar15;
              }
              uVar12 = uStack_1f8 + 1;
              uStack_1f8 = uVar12;
LAB_10998f544:
              *(int *)(plVar15 + 3) = (int)plVar15[3] + 1;
              plVar15 = (long *)plVar17[1];
              plVar21 = plVar17;
              if ((long *)plVar17[1] == (long *)0x0) {
                do {
                  plVar17 = (long *)plVar21[2];
                  bVar6 = (long *)*plVar17 != plVar21;
                  plVar21 = plVar17;
                } while (bVar6);
              }
              else {
                do {
                  plVar17 = plVar15;
                  plVar15 = (long *)*plVar17;
                } while ((long *)*plVar17 != (long *)0x0);
              }
            } while (plVar17 != plVar30);
            plVar15 = (long *)plVar10[1];
          }
          plVar21 = plVar10;
          if (plVar15 == (long *)0x0) {
            do {
              plVar10 = (long *)plVar21[2];
              bVar6 = (long *)*plVar10 != plVar21;
              plVar21 = plVar10;
            } while (bVar6);
          }
          else {
            do {
              plVar10 = plVar15;
              plVar15 = (long *)*plVar10;
            } while ((long *)*plVar10 != (long *)0x0);
          }
        }
        plVar24 = plVar24 + 3;
      } while (plVar24 != plVar29);
    }
  }
  puVar9 = (undefined8 *)0xa0;
  __Znwm();
  puVar9[5] = 0;
  puVar9[4] = 0;
  puVar9[7] = 0;
  puVar9[6] = 0;
  puVar9[0x11] = 0;
  puVar9[0x10] = 0;
  puVar9[0x13] = 0;
  puVar9[0x12] = 0;
  puVar9[0xd] = 0;
  puVar9[0xc] = 0;
  puVar9[0xf] = 0;
  puVar9[0xe] = 0;
  puVar9[9] = 0;
  puVar9[8] = 0;
  puVar9[0xb] = 0;
  puVar9[10] = 0;
  puVar9[1] = 0;
  *puVar9 = 0;
  puVar9[3] = 0;
  puVar9[2] = 0;
  *(undefined4 *)(puVar9 + 4) = 0x3f800000;
  puVar9[6] = 0;
  puVar9[5] = 0;
  puVar9[8] = 0;
  puVar9[7] = 0;
  *(undefined4 *)(puVar9 + 9) = 0x3f800000;
  *(undefined4 *)(puVar9 + 0xe) = 0x3f800000;
  puVar9[0x10] = 0;
  puVar9[0xf] = 0;
  puVar9[0x12] = 0;
  puVar9[0x11] = 0;
  *(undefined4 *)(puVar9 + 0x13) = 0x3f800000;
  *extraout_x8 = puVar9;
  uStack_278 = (long **)((ulong)uStack_278 & 0xffffffff00000000);
  plVar29 = plStack_200;
  if (puVar8[1] != *puVar8) {
    do {
      FUN_109990290(0x3ff0000000000000,puVar9,&uStack_278);
      FUN_10998f930(0x3ff0000000000000,puVar9,&uStack_278,&uStack_278);
      uVar12 = (long)(int)uStack_278 + 1;
      uStack_278 = (long **)CONCAT44(uStack_278._4_4_,(int)uVar12);
      uVar26 = ((long)(puVar8[1] - *puVar8) >> 3) * -0x5555555555555555;
      plVar29 = plStack_200;
    } while (uVar12 <= uVar26 && uVar26 - uVar12 != 0);
  }
  for (; plVar29 != (long *)0x0; plVar29 = (long *)*plVar29) {
    iStack_214 = *(int *)((long)plVar29 + 0x14);
    uStack_278._4_4_ = (undefined4)((ulong)uStack_278 >> 0x20);
    uStack_278 = (long **)CONCAT44(uStack_278._4_4_,(int)plVar29[2]);
    FUN_10998f930((double)(int)plVar29[3] /
                  SQRT((double)(ulong)(*(long *)(*puVar8 + (long)iStack_214 * 0x18 + 0x10) *
                                      *(long *)(*puVar8 + (long)(int)plVar29[2] * 0x18 + 0x10))),
                  puVar9,&uStack_278,&iStack_214);
  }
  if (piRam000000011373d200 == (int *)0x0) {
    iVar27 = 0x1373d200;
    FUN_1099adbb8(0x11373d200,0x11382bb14,&UNK_10f5913e2,2);
    lVar28 = lStack_210;
    plVar29 = plStack_200;
    if (iVar27 == 0) goto joined_r0x00010998f7c8;
  }
  else {
    lVar28 = lStack_210;
    plVar29 = plStack_200;
    if (*piRam000000011373d200 < 2) goto joined_r0x00010998f7c8;
  }
  uStack_278 = (long **)0x0;
  uStack_220 = 0;
  uStack_260 = 0;
  uStack_268 = 0;
  uStack_250 = 0;
  uStack_258 = 0;
  uStack_240 = 0;
  uStack_248 = 0;
  uStack_230 = 0;
  uStack_238 = 0;
  uStack_228 = 0;
  FUN_1099a9f0c(&uStack_278,&UNK_10f5913e2,0x96,0,FUN_1099aa768,0);
  lVar28 = CONCAT71(uStack_26f,uStack_270) + 0x7540;
  FUN_1092b4db8(lVar28,&UNK_10f59148a,0x1d);
  lVar13 = 0;
  _time(0);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEl(lVar28,lVar13 - lVar19);
  FUN_1099ab3b0(&uStack_278);
  lVar28 = lStack_210;
  plVar29 = plStack_200;
joined_r0x00010998f7c8:
  while (plVar29 != (long *)0x0) {
    plVar29 = (long *)*plVar29;
    lStack_210 = lVar28;
    __ZdlPv();
    lVar28 = lStack_210;
  }
  lStack_210 = 0;
  if (lVar28 != 0) {
    __ZdlPv();
  }
  plVar24 = plStack_1e0;
  plVar29 = plStack_1d8;
  if (plStack_1e0 != (long *)0x0) {
    while (plVar29 != plVar24) {
      func_0x000105340e88(plVar29 + -3,plVar29[-2]);
      plVar29 = plVar29 + -3;
    }
    plStack_1d8 = plVar24;
    __ZdlPv(plStack_1e0);
  }
  return;
}



/* Entry: 10998eaec; end: 10998ee2f;  */

void FUN_10998eaec(long *param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  code *pcVar5;
  bool bVar6;
  ulong *puVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  undefined8 *extraout_x8;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long *unaff_x19;
  ulong uVar23;
  int iVar24;
  undefined8 unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar25;
  long unaff_x23;
  undefined8 *puVar26;
  ulong unaff_x24;
  long *plVar27;
  long *plVar28;
  long unaff_x25;
  long *plVar29;
  long unaff_x26;
  ulong uVar30;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined8 uStack_190;
  int iStack_184;
  long lStack_180;
  ulong uStack_178;
  long *plStack_170;
  ulong uStack_168;
  float fStack_160;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  ulong uStack_130;
  ulong uStack_128;
  long lStack_120;
  long lStack_118;
  ulong uStack_110;
  long lStack_108;
  long lStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  if (param_3 == (long *)0x0) {
    uStack_c0 = 0;
    uStack_68 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    FUN_1099a9f0c(&uStack_c0,&UNK_10f5913e2,0x3b,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_b8 + 0x7540,&UNK_10f591465,0x24);
  }
  else {
    lVar16 = *param_3;
    unaff_x23 = param_3[1];
    unaff_x22 = lVar16;
    if (unaff_x23 != lVar16) {
      do {
        lVar25 = unaff_x23 + -0x18;
        func_0x000105340e88(lVar25,*(undefined8 *)(unaff_x23 + -0x10));
        unaff_x23 = lVar25;
      } while (lVar25 != lVar16);
      param_3[1] = lVar16;
      unaff_x22 = *param_3;
      unaff_x23 = lVar16;
    }
    unaff_x26 = param_1[1] - *param_1 >> 3;
    iVar24 = (int)param_2;
    uVar9 = unaff_x26 - iVar24;
    unaff_x25 = unaff_x23 - unaff_x22;
    unaff_x27 = (unaff_x25 >> 3) * -0x5555555555555555;
    unaff_x24 = uVar9 + (unaff_x25 >> 3) * 0x5555555555555555;
    if (uVar9 < unaff_x27 || unaff_x24 == 0) {
      if (uVar9 < unaff_x27) {
        lVar16 = unaff_x22 + uVar9 * 0x18;
        while (unaff_x23 != lVar16) {
          func_0x000105340e88(unaff_x23 + -0x18,*(undefined8 *)(unaff_x23 + -0x10));
          unaff_x23 = unaff_x23 + -0x18;
        }
        param_3[1] = lVar16;
      }
LAB_10998ed28:
      lVar25 = param_1[4];
      for (lVar16 = param_1[3]; lVar16 != lVar25; lVar16 = lVar16 + 0x20) {
        piVar11 = *(int **)(lVar16 + 8);
        uVar9 = uStack_c0 >> 0x20;
        uStack_c0 = CONCAT44((int)uVar9,*piVar11);
        if ((*piVar11 < iVar24) && (8 < (ulong)(*(long *)(lVar16 + 0x10) - (long)piVar11))) {
          lVar10 = 8;
          uVar9 = 1;
          do {
            func_0x000105341058(*param_3 + (long)(*(int *)((long)piVar11 + lVar10) - iVar24) * 0x18,
                                &uStack_c0,&uStack_c0);
            uVar9 = uVar9 + 1;
            piVar11 = *(int **)(lVar16 + 8);
            lVar10 = lVar10 + 8;
          } while (uVar9 < (ulong)(*(long *)(lVar16 + 0x10) - (long)piVar11 >> 3));
        }
      }
      return;
    }
    if (unaff_x24 <= (ulong)((param_3[2] - unaff_x23 >> 3) * -0x5555555555555555)) {
      lVar16 = unaff_x24 * 0x18;
      puVar26 = (undefined8 *)(unaff_x23 + 8);
      do {
        *puVar26 = 0;
        puVar26[1] = 0;
        puVar26[-1] = puVar26;
        puVar26 = puVar26 + 3;
        lVar16 = lVar16 + -0x18;
      } while (lVar16 != 0);
      param_3[1] = unaff_x23 + unaff_x24 * 0x18;
      goto LAB_10998ed28;
    }
    if (uVar9 < 0xaaaaaaaaaaaaaab) {
      lVar16 = param_3[2] - unaff_x22 >> 3;
      unaff_x28 = lVar16 * 0x5555555555555556;
      if (unaff_x28 < uVar9 || unaff_x28 - uVar9 == 0) {
        unaff_x28 = uVar9;
      }
      if (0x555555555555554 < (ulong)(lVar16 * -0x5555555555555555)) {
        unaff_x28 = 0xaaaaaaaaaaaaaaa;
      }
      if (unaff_x28 < 0xaaaaaaaaaaaaaab) {
        lStack_c8 = (long)iVar24;
        lVar25 = unaff_x28 * 0x18;
        __Znwm();
        lVar16 = unaff_x26 * 0x18 + (unaff_x27 + lStack_c8) * -0x18;
        puVar26 = (undefined8 *)(unaff_x25 + lVar25 + 8);
        do {
          *puVar26 = 0;
          puVar26[1] = 0;
          puVar26[-1] = puVar26;
          puVar26 = puVar26 + 3;
          lVar16 = lVar16 + -0x18;
        } while (lVar16 != 0);
        lVar16 = (lVar25 + unaff_x25) - unaff_x25;
        if (unaff_x22 != unaff_x23) {
          lVar10 = 0;
          do {
            puVar26 = (undefined8 *)(lVar16 + lVar10);
            puVar1 = (undefined8 *)(unaff_x22 + lVar10);
            *puVar26 = *puVar1;
            plVar27 = puVar1 + 1;
            lVar20 = *plVar27;
            plVar21 = puVar26 + 1;
            *plVar21 = lVar20;
            lVar22 = puVar1[2];
            puVar26[2] = lVar22;
            if (lVar22 == 0) {
              *puVar26 = plVar21;
            }
            else {
              *(long **)(lVar20 + 0x10) = plVar21;
              *(long **)(unaff_x22 + lVar10) = plVar27;
              *plVar27 = 0;
              puVar1[2] = 0;
            }
            lVar10 = lVar10 + 0x18;
          } while (unaff_x22 + lVar10 != unaff_x23);
          do {
            func_0x000105340e88(unaff_x22,*(undefined8 *)(unaff_x22 + 8));
            unaff_x22 = unaff_x22 + 0x18;
          } while (unaff_x22 != unaff_x23);
          unaff_x22 = *param_3;
        }
        *param_3 = lVar16;
        param_3[1] = lVar25 + unaff_x25 + unaff_x24 * 0x18;
        param_3[2] = lVar25 + unaff_x28 * 0x18;
        if (unaff_x22 != 0) {
          __ZdlPv(unaff_x22);
        }
        goto LAB_10998ed28;
      }
    }
    else {
      FUN_1099900f8();
    }
    func_0x000104c4f740();
    unaff_x19 = param_3;
    unaff_x20 = param_2;
    unaff_x21 = param_1;
  }
  puVar7 = &uStack_c0;
  func_0x0001099ab7c0();
  pcStack_d8 = FUN_10998ee30;
  lVar16 = 0;
  uStack_130 = unaff_x28;
  uStack_128 = unaff_x27;
  lStack_120 = unaff_x26;
  lStack_118 = unaff_x25;
  uStack_110 = unaff_x24;
  lStack_108 = unaff_x23;
  lStack_100 = unaff_x22;
  plStack_f8 = unaff_x21;
  uStack_f0 = unaff_x20;
  plStack_e8 = unaff_x19;
  puStack_e0 = &stack0xfffffffffffffff0;
  _time();
  uVar9 = *puVar7;
  uVar23 = puVar7[1];
  if (uVar9 == uVar23) {
    plStack_150 = (long *)0x0;
    plStack_148 = (long *)0x0;
    plStack_140 = (long *)0x0;
    uStack_178 = 0;
    lStack_180 = 0;
    uStack_168 = 0;
    plStack_170 = (long *)0x0;
    fStack_160 = 1.0;
  }
  else {
    uVar8 = 0;
    uVar17 = uVar9;
    do {
      if (*(long *)(uVar17 + 0x10) != 0) {
        plVar21 = *(long **)(uVar17 + 8);
        plVar27 = (long *)(uVar17 + 8);
        if (plVar21 == (long *)0x0) {
          do {
            plVar29 = (long *)plVar27[2];
            bVar6 = (long *)*plVar29 == plVar27;
            plVar27 = plVar29;
          } while (bVar6);
        }
        else {
          do {
            plVar29 = plVar21;
            plVar21 = (long *)plVar29[1];
          } while ((long *)plVar29[1] != (long *)0x0);
        }
        if ((int)uVar8 <= *(int *)((long)plVar29 + 0x1c) + 1) {
          uVar8 = *(int *)((long)plVar29 + 0x1c) + 1;
        }
      }
      uVar17 = uVar17 + 0x18;
    } while (uVar17 != uVar23);
    plStack_150 = (long *)0x0;
    plStack_148 = (long *)0x0;
    plStack_140 = (long *)0x0;
    uStack_1e8 = &plStack_150;
    uStack_1e0 = 0;
    if (uVar8 != 0) {
      plVar21 = (long *)((ulong)uVar8 * 0x18);
      plVar29 = plVar21;
      __Znwm();
      plStack_140 = plVar29 + (ulong)uVar8 * 3;
      plVar27 = plVar29 + 1;
      do {
        *plVar27 = 0;
        plVar27[1] = 0;
        plVar27[-1] = (long)plVar27;
        plVar27 = plVar27 + 3;
        plVar21 = plVar21 + -3;
        plStack_150 = plVar29;
      } while (plVar21 != (long *)0x0);
    }
    iVar24 = 0;
    lVar25 = 0;
    uStack_1e8 = (long **)((ulong)uStack_1e8 & 0xffffffff00000000);
    plStack_148 = plStack_140;
    do {
      puVar26 = (undefined8 *)(uVar9 + lVar25 * 0x18);
      plVar21 = puVar26 + 1;
      plVar27 = (long *)*puVar26;
      if (plVar27 != plVar21) {
        do {
          func_0x000105341058(plStack_150 + (long)*(int *)((long)plVar27 + 0x1c) * 3,&uStack_1e8,
                              &uStack_1e8);
          plVar29 = (long *)plVar27[1];
          plVar28 = plVar27;
          if ((long *)plVar27[1] == (long *)0x0) {
            do {
              plVar27 = (long *)plVar28[2];
              bVar6 = (long *)*plVar27 != plVar28;
              plVar28 = plVar27;
            } while (bVar6);
          }
          else {
            do {
              plVar27 = plVar29;
              plVar29 = (long *)*plVar27;
            } while ((long *)*plVar27 != (long *)0x0);
          }
        } while (plVar27 != plVar21);
        uVar9 = *puVar7;
        uVar23 = puVar7[1];
        iVar24 = (int)uStack_1e8;
      }
      plVar27 = plStack_148;
      iVar24 = iVar24 + 1;
      uStack_1e8 = (long **)CONCAT44(uStack_1e8._4_4_,iVar24);
      lVar25 = (long)iVar24;
      uVar17 = ((long)(uVar23 - uVar9) >> 3) * -0x5555555555555555;
    } while ((ulong)(long)iVar24 <= uVar17 && uVar17 - (long)iVar24 != 0);
    uStack_178 = 0;
    lStack_180 = 0;
    uStack_168 = 0;
    plStack_170 = (long *)0x0;
    fStack_160 = 1.0;
    if (plStack_150 != plStack_148) {
      uVar9 = 0;
      uVar17 = 0;
      plVar21 = plStack_150;
      do {
        plVar28 = plVar21 + 1;
        plVar29 = (long *)*plVar21;
        while (plVar29 != plVar28) {
          plVar12 = (long *)plVar29[1];
          plVar18 = plVar29;
          plVar4 = plVar12;
          if (plVar12 == (long *)0x0) {
            do {
              plVar14 = (long *)plVar18[2];
              bVar6 = (long *)*plVar14 != plVar18;
              plVar18 = plVar14;
            } while (bVar6);
          }
          else {
            do {
              plVar14 = plVar4;
              plVar4 = (long *)*plVar14;
            } while ((long *)*plVar14 != (long *)0x0);
          }
          if (plVar14 != plVar28) {
            do {
              iVar24 = *(int *)((long)plVar29 + 0x1c);
              iVar2 = *(int *)((long)plVar14 + 0x1c);
              uVar30 = (ulong)iVar2;
              uVar13 = ((long)iVar24 - uVar30) + 0x1f73e299748a907e ^ uVar30 >> 0x2b;
              uVar15 = (-0x1f73e299748a907e - uVar30) - uVar13 ^ uVar13 << 9;
              uVar30 = (uVar30 - uVar13) - uVar15 ^ uVar15 >> 8;
              uVar13 = (uVar13 - uVar15) - uVar30 ^ uVar30 >> 0x26;
              uVar15 = (uVar15 - uVar30) - uVar13 ^ uVar13 << 0x17;
              uVar30 = (uVar30 - uVar13) - uVar15 ^ uVar15 >> 5;
              uVar13 = (uVar13 - uVar15) - uVar30 ^ uVar30 >> 0x23;
              uVar15 = (uVar15 - uVar30) - uVar13 ^ uVar13 << 0x31;
              uVar13 = (uVar30 - uVar13) - uVar15 ^ uVar15 >> 0xb;
              if (uVar17 != 0) {
                uVar15 = uVar17 - 1;
                if ((uVar17 & uVar15) == 0) {
                  uVar23 = uVar13 & uVar15;
                }
                else {
                  uVar23 = uVar13;
                  if (uVar17 <= uVar13) {
                    uVar23 = 0;
                    if (uVar17 != 0) {
                      uVar23 = uVar13 / uVar17;
                    }
                    uVar23 = uVar13 - uVar23 * uVar17;
                  }
                }
                puVar26 = *(undefined8 **)(lStack_180 + uVar23 * 8);
                if (puVar26 != (undefined8 *)0x0) {
                  for (plVar12 = (long *)*puVar26; plVar12 != (long *)0x0;
                      plVar12 = (long *)*plVar12) {
                    uVar30 = plVar12[1];
                    if (uVar30 == uVar13) {
                      if ((int)plVar12[2] == iVar24 && *(int *)((long)plVar12 + 0x14) == iVar2)
                      goto LAB_10998f544;
                    }
                    else {
                      if ((uVar17 & uVar15) == 0) {
                        uVar30 = uVar30 & uVar15;
                      }
                      else if (uVar17 <= uVar30) {
                        uVar3 = 0;
                        if (uVar17 != 0) {
                          uVar3 = uVar30 / uVar17;
                        }
                        uVar30 = uVar30 - uVar3 * uVar17;
                      }
                      if (uVar30 != uVar23) break;
                    }
                  }
                }
              }
              plVar12 = (long *)0x20;
              __Znwm();
              *plVar12 = 0;
              plVar12[1] = uVar13;
              plVar12[2] = CONCAT44(iVar2,iVar24);
              *(undefined4 *)(plVar12 + 3) = 0;
              if ((uVar17 == 0) || (fStack_160 * (float)uVar17 < (float)(uVar9 + 1))) {
                if (uVar17 < 3) {
                  uVar23 = 1;
                }
                else {
                  uVar23 = (ulong)((uVar17 & uVar17 - 1) != 0);
                }
                uVar23 = uVar23 | uVar17 << 1;
                uVar9 = (ulong)((float)(uVar9 + 1) / fStack_160);
                if (uVar23 <= uVar9) {
                  uVar23 = uVar9;
                }
                if (uVar23 - 1 == 0) {
                  uVar23 = 2;
                  if (1 < uVar17) goto LAB_10998f288;
LAB_10998f224:
                  uVar17 = uVar23;
                  lVar25 = uVar17 << 3;
                  __Znwm();
                  bVar6 = lStack_180 != 0;
                  lStack_180 = lVar25;
                  if (bVar6) {
                    __ZdlPv();
                  }
                  uVar9 = 0;
                  do {
                    *(undefined8 *)(lStack_180 + uVar9 * 8) = 0;
                    uVar9 = uVar9 + 1;
                  } while (uVar17 != uVar9);
                  uStack_178 = uVar17;
                  if (plStack_170 != (long *)0x0) {
                    uVar9 = plStack_170[1];
                    uVar23 = uVar17 - 1;
                    if ((uVar17 & uVar23) == 0) {
                      uVar9 = uVar9 & uVar23;
                    }
                    else if (uVar17 <= uVar9) {
                      uVar15 = 0;
                      if (uVar17 != 0) {
                        uVar15 = uVar9 / uVar17;
                      }
                      uVar9 = uVar9 - uVar15 * uVar17;
                    }
                    *(long ***)(lStack_180 + uVar9 * 8) = &plStack_170;
                    plVar18 = (long *)*plStack_170;
                    plVar4 = plStack_170;
                    while (plVar18 != (long *)0x0) {
                      uVar15 = plVar18[1];
                      if ((uVar17 & uVar23) == 0) {
                        uVar15 = uVar15 & uVar23;
                      }
                      else if (uVar17 <= uVar15) {
                        uVar30 = 0;
                        if (uVar17 != 0) {
                          uVar30 = uVar15 / uVar17;
                        }
                        uVar15 = uVar15 - uVar30 * uVar17;
                      }
                      plVar19 = plVar18;
                      if (uVar15 != uVar9) {
                        if (*(long *)(lStack_180 + uVar15 * 8) == 0) {
                          *(long **)(lStack_180 + uVar15 * 8) = plVar4;
                          uVar9 = uVar15;
                        }
                        else {
                          *plVar4 = *plVar18;
                          *plVar18 = **(long **)(lStack_180 + uVar15 * 8);
                          **(undefined8 **)(lStack_180 + uVar15 * 8) = plVar18;
                          plVar19 = plVar4;
                        }
                      }
                      plVar4 = plVar19;
                      plVar18 = (long *)*plVar19;
                    }
                  }
                }
                else {
                  if ((uVar23 & uVar23 - 1) != 0) {
                    __ZNSt3__112__next_primeEm();
                    uVar17 = uStack_178;
                  }
                  if (uVar17 < uVar23) {
                    if (uVar23 >> 0x3d != 0) goto LAB_10998f84c;
                    goto LAB_10998f224;
                  }
LAB_10998f288:
                  if (uVar23 < uVar17) {
                    uVar9 = (ulong)((float)uStack_168 / fStack_160);
                    if ((uVar17 < 3) || ((uVar17 & uVar17 - 1) != 0)) {
                      __ZNSt3__112__next_primeEm();
                    }
                    else if (1 < uVar9) {
                      uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
                    }
                    lVar25 = lStack_180;
                    if (uVar23 <= uVar9) {
                      uVar23 = uVar9;
                    }
                    bVar6 = uVar23 < uVar17;
                    uVar17 = uStack_178;
                    if (bVar6) {
                      if (uVar23 == 0) {
                        lStack_180 = 0;
                        if (lVar25 != 0) {
                          __ZdlPv();
                        }
                        uStack_178 = 0;
                        uVar17 = 0;
                      }
                      else {
                        if (uVar23 >> 0x3d != 0) {
LAB_10998f84c:
                          func_0x000104c4f740();
                    /* WARNING: Does not return */
                          pcVar5 = (code *)SoftwareBreakpoint(1,0x10998f854);
                          (*pcVar5)();
                        }
                        lVar25 = uVar23 << 3;
                        __Znwm();
                        bVar6 = lStack_180 != 0;
                        lStack_180 = lVar25;
                        if (bVar6) {
                          __ZdlPv();
                        }
                        uVar9 = 0;
                        do {
                          *(undefined8 *)(lStack_180 + uVar9 * 8) = 0;
                          uVar9 = uVar9 + 1;
                        } while (uVar23 != uVar9);
                        uVar17 = uVar23;
                        uStack_178 = uVar23;
                        if (plStack_170 != (long *)0x0) {
                          uVar9 = plStack_170[1];
                          uVar15 = uVar23 - 1;
                          if ((uVar23 & uVar15) == 0) {
                            uVar9 = uVar9 & uVar15;
                          }
                          else if (uVar23 <= uVar9) {
                            uVar30 = 0;
                            if (uVar23 != 0) {
                              uVar30 = uVar9 / uVar23;
                            }
                            uVar9 = uVar9 - uVar30 * uVar23;
                          }
                          *(long ***)(lStack_180 + uVar9 * 8) = &plStack_170;
                          plVar18 = (long *)*plStack_170;
                          plVar4 = plStack_170;
                          while (plVar18 != (long *)0x0) {
                            uVar30 = plVar18[1];
                            if ((uVar23 & uVar15) == 0) {
                              uVar30 = uVar30 & uVar15;
                            }
                            else if (uVar23 <= uVar30) {
                              uVar3 = 0;
                              if (uVar23 != 0) {
                                uVar3 = uVar30 / uVar23;
                              }
                              uVar30 = uVar30 - uVar3 * uVar23;
                            }
                            plVar19 = plVar18;
                            if (uVar30 != uVar9) {
                              if (*(long *)(lStack_180 + uVar30 * 8) == 0) {
                                *(long **)(lStack_180 + uVar30 * 8) = plVar4;
                                uVar9 = uVar30;
                              }
                              else {
                                *plVar4 = *plVar18;
                                *plVar18 = **(long **)(lStack_180 + uVar30 * 8);
                                **(undefined8 **)(lStack_180 + uVar30 * 8) = plVar18;
                                plVar19 = plVar4;
                              }
                            }
                            plVar4 = plVar19;
                            plVar18 = (long *)*plVar19;
                          }
                        }
                      }
                    }
                  }
                }
                if ((uVar17 & uVar17 - 1) == 0) {
                  uVar23 = uVar17 - 1 & uVar13;
                }
                else {
                  uVar23 = uVar13;
                  if (uVar17 <= uVar13) {
                    uVar9 = 0;
                    if (uVar17 != 0) {
                      uVar9 = uVar13 / uVar17;
                    }
                    uVar23 = uVar13 - uVar9 * uVar17;
                  }
                }
              }
              plVar18 = *(long **)(lStack_180 + uVar23 * 8);
              if (plVar18 == (long *)0x0) {
                *plVar12 = (long)plStack_170;
                *(long ***)(lStack_180 + uVar23 * 8) = &plStack_170;
                plStack_170 = plVar12;
                if (*plVar12 != 0) {
                  uVar9 = *(ulong *)(*plVar12 + 8);
                  if ((uVar17 & uVar17 - 1) == 0) {
                    uVar9 = uVar9 & uVar17 - 1;
                  }
                  else if (uVar17 <= uVar9) {
                    uVar13 = 0;
                    if (uVar17 != 0) {
                      uVar13 = uVar9 / uVar17;
                    }
                    uVar9 = uVar9 - uVar13 * uVar17;
                  }
                  plVar18 = (long *)(lStack_180 + uVar9 * 8);
                  goto LAB_10998f534;
                }
              }
              else {
                *plVar12 = *plVar18;
LAB_10998f534:
                *plVar18 = (long)plVar12;
              }
              uVar9 = uStack_168 + 1;
              uStack_168 = uVar9;
LAB_10998f544:
              *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
              plVar12 = (long *)plVar14[1];
              plVar18 = plVar14;
              if ((long *)plVar14[1] == (long *)0x0) {
                do {
                  plVar14 = (long *)plVar18[2];
                  bVar6 = (long *)*plVar14 != plVar18;
                  plVar18 = plVar14;
                } while (bVar6);
              }
              else {
                do {
                  plVar14 = plVar12;
                  plVar12 = (long *)*plVar14;
                } while ((long *)*plVar14 != (long *)0x0);
              }
            } while (plVar14 != plVar28);
            plVar12 = (long *)plVar29[1];
          }
          plVar18 = plVar29;
          if (plVar12 == (long *)0x0) {
            do {
              plVar29 = (long *)plVar18[2];
              bVar6 = (long *)*plVar29 != plVar18;
              plVar18 = plVar29;
            } while (bVar6);
          }
          else {
            do {
              plVar29 = plVar12;
              plVar12 = (long *)*plVar29;
            } while ((long *)*plVar29 != (long *)0x0);
          }
        }
        plVar21 = plVar21 + 3;
      } while (plVar21 != plVar27);
    }
  }
  puVar26 = (undefined8 *)0xa0;
  __Znwm();
  puVar26[5] = 0;
  puVar26[4] = 0;
  puVar26[7] = 0;
  puVar26[6] = 0;
  puVar26[0x11] = 0;
  puVar26[0x10] = 0;
  puVar26[0x13] = 0;
  puVar26[0x12] = 0;
  puVar26[0xd] = 0;
  puVar26[0xc] = 0;
  puVar26[0xf] = 0;
  puVar26[0xe] = 0;
  puVar26[9] = 0;
  puVar26[8] = 0;
  puVar26[0xb] = 0;
  puVar26[10] = 0;
  puVar26[1] = 0;
  *puVar26 = 0;
  puVar26[3] = 0;
  puVar26[2] = 0;
  *(undefined4 *)(puVar26 + 4) = 0x3f800000;
  puVar26[6] = 0;
  puVar26[5] = 0;
  puVar26[8] = 0;
  puVar26[7] = 0;
  *(undefined4 *)(puVar26 + 9) = 0x3f800000;
  *(undefined4 *)(puVar26 + 0xe) = 0x3f800000;
  puVar26[0x10] = 0;
  puVar26[0xf] = 0;
  puVar26[0x12] = 0;
  puVar26[0x11] = 0;
  *(undefined4 *)(puVar26 + 0x13) = 0x3f800000;
  *extraout_x8 = puVar26;
  uStack_1e8 = (long **)((ulong)uStack_1e8 & 0xffffffff00000000);
  plVar27 = plStack_170;
  if (puVar7[1] != *puVar7) {
    do {
      FUN_109990290(0x3ff0000000000000,puVar26,&uStack_1e8);
      FUN_10998f930(0x3ff0000000000000,puVar26,&uStack_1e8,&uStack_1e8);
      uVar9 = (long)(int)uStack_1e8 + 1;
      uStack_1e8 = (long **)CONCAT44(uStack_1e8._4_4_,(int)uVar9);
      uVar23 = ((long)(puVar7[1] - *puVar7) >> 3) * -0x5555555555555555;
      plVar27 = plStack_170;
    } while (uVar9 <= uVar23 && uVar23 - uVar9 != 0);
  }
  for (; plVar27 != (long *)0x0; plVar27 = (long *)*plVar27) {
    iStack_184 = *(int *)((long)plVar27 + 0x14);
    uStack_1e8._4_4_ = (undefined4)((ulong)uStack_1e8 >> 0x20);
    uStack_1e8 = (long **)CONCAT44(uStack_1e8._4_4_,(int)plVar27[2]);
    FUN_10998f930((double)(int)plVar27[3] /
                  SQRT((double)(ulong)(*(long *)(*puVar7 + (long)iStack_184 * 0x18 + 0x10) *
                                      *(long *)(*puVar7 + (long)(int)plVar27[2] * 0x18 + 0x10))),
                  puVar26,&uStack_1e8,&iStack_184);
  }
  if (piRam000000011373d200 == (int *)0x0) {
    iVar24 = 0x1373d200;
    FUN_1099adbb8(0x11373d200,0x11382bb14,&UNK_10f5913e2,2);
    lVar25 = lStack_180;
    plVar27 = plStack_170;
    if (iVar24 == 0) goto joined_r0x00010998f7c8;
  }
  else {
    lVar25 = lStack_180;
    plVar27 = plStack_170;
    if (*piRam000000011373d200 < 2) goto joined_r0x00010998f7c8;
  }
  uStack_1e8 = (long **)0x0;
  uStack_190 = 0;
  uStack_1d0 = 0;
  uStack_1d8 = 0;
  uStack_1c0 = 0;
  uStack_1c8 = 0;
  uStack_1b0 = 0;
  uStack_1b8 = 0;
  uStack_1a0 = 0;
  uStack_1a8 = 0;
  uStack_198 = 0;
  FUN_1099a9f0c(&uStack_1e8,&UNK_10f5913e2,0x96,0,FUN_1099aa768,0);
  lVar25 = CONCAT71(uStack_1df,uStack_1e0) + 0x7540;
  FUN_1092b4db8(lVar25,&UNK_10f59148a,0x1d);
  lVar10 = 0;
  _time(0);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEl(lVar25,lVar10 - lVar16);
  FUN_1099ab3b0(&uStack_1e8);
  lVar25 = lStack_180;
  plVar27 = plStack_170;
joined_r0x00010998f7c8:
  while (plVar27 != (long *)0x0) {
    plVar27 = (long *)*plVar27;
    lStack_180 = lVar25;
    __ZdlPv();
    lVar25 = lStack_180;
  }
  lStack_180 = 0;
  if (lVar25 != 0) {
    __ZdlPv();
  }
  plVar21 = plStack_150;
  plVar27 = plStack_148;
  if (plStack_150 != (long *)0x0) {
    while (plVar27 != plVar21) {
      func_0x000105340e88(plVar27 + -3,plVar27[-2]);
      plVar27 = plVar27 + -3;
    }
    plStack_148 = plVar21;
    __ZdlPv(plStack_150);
  }
  return;
}



/* Entry: 10998ee30; end: 10998f92f;  */

void FUN_10998ee30(undefined8 *param_1,ulong *param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  ulong uVar25;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  int iStack_b4;
  long lStack_b0;
  ulong uStack_a8;
  long *plStack_a0;
  ulong uStack_98;
  float fStack_90;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  
  lVar6 = 0;
  _time();
  uVar21 = *param_2;
  uVar19 = param_2[1];
  if (uVar21 == uVar19) {
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    plStack_70 = (long *)0x0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_98 = 0;
    plStack_a0 = (long *)0x0;
    fStack_90 = 1.0;
  }
  else {
    uVar8 = 0;
    uVar15 = uVar21;
    do {
      if (*(long *)(uVar15 + 0x10) != 0) {
        plVar18 = *(long **)(uVar15 + 8);
        plVar22 = (long *)(uVar15 + 8);
        if (plVar18 == (long *)0x0) {
          do {
            plVar24 = (long *)plVar22[2];
            bVar5 = (long *)*plVar24 == plVar22;
            plVar22 = plVar24;
          } while (bVar5);
        }
        else {
          do {
            plVar24 = plVar18;
            plVar18 = (long *)plVar24[1];
          } while ((long *)plVar24[1] != (long *)0x0);
        }
        if ((int)uVar8 <= *(int *)((long)plVar24 + 0x1c) + 1) {
          uVar8 = *(int *)((long)plVar24 + 0x1c) + 1;
        }
      }
      uVar15 = uVar15 + 0x18;
    } while (uVar15 != uVar19);
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    plStack_70 = (long *)0x0;
    uStack_118 = &plStack_80;
    uStack_110 = 0;
    if (uVar8 != 0) {
      plVar18 = (long *)((ulong)uVar8 * 0x18);
      plVar24 = plVar18;
      __Znwm();
      plStack_70 = plVar24 + (ulong)uVar8 * 3;
      plVar22 = plVar24 + 1;
      do {
        *plVar22 = 0;
        plVar22[1] = 0;
        plVar22[-1] = (long)plVar22;
        plVar22 = plVar22 + 3;
        plVar18 = plVar18 + -3;
        plStack_80 = plVar24;
      } while (plVar18 != (long *)0x0);
    }
    iVar9 = 0;
    lVar13 = 0;
    uStack_118 = (long **)((ulong)uStack_118 & 0xffffffff00000000);
    plStack_78 = plStack_70;
    do {
      puVar20 = (undefined8 *)(uVar21 + lVar13 * 0x18);
      plVar18 = puVar20 + 1;
      plVar22 = (long *)*puVar20;
      if (plVar22 != plVar18) {
        do {
          func_0x000105341058(plStack_80 + (long)*(int *)((long)plVar22 + 0x1c) * 3,&uStack_118,
                              &uStack_118);
          plVar24 = (long *)plVar22[1];
          plVar23 = plVar22;
          if ((long *)plVar22[1] == (long *)0x0) {
            do {
              plVar22 = (long *)plVar23[2];
              bVar5 = (long *)*plVar22 != plVar23;
              plVar23 = plVar22;
            } while (bVar5);
          }
          else {
            do {
              plVar22 = plVar24;
              plVar24 = (long *)*plVar22;
            } while ((long *)*plVar22 != (long *)0x0);
          }
        } while (plVar22 != plVar18);
        uVar21 = *param_2;
        uVar19 = param_2[1];
        iVar9 = (int)uStack_118;
      }
      plVar22 = plStack_78;
      iVar9 = iVar9 + 1;
      uStack_118 = (long **)CONCAT44(uStack_118._4_4_,iVar9);
      lVar13 = (long)iVar9;
      uVar15 = ((long)(uVar19 - uVar21) >> 3) * -0x5555555555555555;
    } while ((ulong)(long)iVar9 <= uVar15 && uVar15 - (long)iVar9 != 0);
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_98 = 0;
    plStack_a0 = (long *)0x0;
    fStack_90 = 1.0;
    if (plStack_80 != plStack_78) {
      uVar21 = 0;
      uVar15 = 0;
      plVar18 = plStack_80;
      do {
        plVar23 = plVar18 + 1;
        plVar24 = (long *)*plVar18;
        while (plVar24 != plVar23) {
          plVar10 = (long *)plVar24[1];
          plVar16 = plVar24;
          plVar3 = plVar10;
          if (plVar10 == (long *)0x0) {
            do {
              plVar12 = (long *)plVar16[2];
              bVar5 = (long *)*plVar12 != plVar16;
              plVar16 = plVar12;
            } while (bVar5);
          }
          else {
            do {
              plVar12 = plVar3;
              plVar3 = (long *)*plVar12;
            } while ((long *)*plVar12 != (long *)0x0);
          }
          if (plVar12 != plVar23) {
            do {
              iVar9 = *(int *)((long)plVar24 + 0x1c);
              iVar1 = *(int *)((long)plVar12 + 0x1c);
              uVar25 = (ulong)iVar1;
              uVar11 = ((long)iVar9 - uVar25) + 0x1f73e299748a907e ^ uVar25 >> 0x2b;
              uVar14 = (-0x1f73e299748a907e - uVar25) - uVar11 ^ uVar11 << 9;
              uVar25 = (uVar25 - uVar11) - uVar14 ^ uVar14 >> 8;
              uVar11 = (uVar11 - uVar14) - uVar25 ^ uVar25 >> 0x26;
              uVar14 = (uVar14 - uVar25) - uVar11 ^ uVar11 << 0x17;
              uVar25 = (uVar25 - uVar11) - uVar14 ^ uVar14 >> 5;
              uVar11 = (uVar11 - uVar14) - uVar25 ^ uVar25 >> 0x23;
              uVar14 = (uVar14 - uVar25) - uVar11 ^ uVar11 << 0x31;
              uVar11 = (uVar25 - uVar11) - uVar14 ^ uVar14 >> 0xb;
              if (uVar15 != 0) {
                uVar14 = uVar15 - 1;
                if ((uVar15 & uVar14) == 0) {
                  uVar19 = uVar11 & uVar14;
                }
                else {
                  uVar19 = uVar11;
                  if (uVar15 <= uVar11) {
                    uVar19 = 0;
                    if (uVar15 != 0) {
                      uVar19 = uVar11 / uVar15;
                    }
                    uVar19 = uVar11 - uVar19 * uVar15;
                  }
                }
                puVar20 = *(undefined8 **)(lStack_b0 + uVar19 * 8);
                if (puVar20 != (undefined8 *)0x0) {
                  for (plVar10 = (long *)*puVar20; plVar10 != (long *)0x0;
                      plVar10 = (long *)*plVar10) {
                    uVar25 = plVar10[1];
                    if (uVar25 == uVar11) {
                      if ((int)plVar10[2] == iVar9 && *(int *)((long)plVar10 + 0x14) == iVar1)
                      goto LAB_10998f544;
                    }
                    else {
                      if ((uVar15 & uVar14) == 0) {
                        uVar25 = uVar25 & uVar14;
                      }
                      else if (uVar15 <= uVar25) {
                        uVar2 = 0;
                        if (uVar15 != 0) {
                          uVar2 = uVar25 / uVar15;
                        }
                        uVar25 = uVar25 - uVar2 * uVar15;
                      }
                      if (uVar25 != uVar19) break;
                    }
                  }
                }
              }
              plVar10 = (long *)0x20;
              __Znwm();
              *plVar10 = 0;
              plVar10[1] = uVar11;
              plVar10[2] = CONCAT44(iVar1,iVar9);
              *(undefined4 *)(plVar10 + 3) = 0;
              if ((uVar15 == 0) || (fStack_90 * (float)uVar15 < (float)(uVar21 + 1))) {
                if (uVar15 < 3) {
                  uVar19 = 1;
                }
                else {
                  uVar19 = (ulong)((uVar15 & uVar15 - 1) != 0);
                }
                uVar19 = uVar19 | uVar15 << 1;
                uVar21 = (ulong)((float)(uVar21 + 1) / fStack_90);
                if (uVar19 <= uVar21) {
                  uVar19 = uVar21;
                }
                if (uVar19 - 1 == 0) {
                  uVar19 = 2;
                  if (1 < uVar15) goto LAB_10998f288;
LAB_10998f224:
                  uVar15 = uVar19;
                  lVar13 = uVar15 << 3;
                  __Znwm();
                  bVar5 = lStack_b0 != 0;
                  lStack_b0 = lVar13;
                  if (bVar5) {
                    __ZdlPv();
                  }
                  uVar21 = 0;
                  do {
                    *(undefined8 *)(lStack_b0 + uVar21 * 8) = 0;
                    uVar21 = uVar21 + 1;
                  } while (uVar15 != uVar21);
                  uStack_a8 = uVar15;
                  if (plStack_a0 != (long *)0x0) {
                    uVar21 = plStack_a0[1];
                    uVar19 = uVar15 - 1;
                    if ((uVar15 & uVar19) == 0) {
                      uVar21 = uVar21 & uVar19;
                    }
                    else if (uVar15 <= uVar21) {
                      uVar14 = 0;
                      if (uVar15 != 0) {
                        uVar14 = uVar21 / uVar15;
                      }
                      uVar21 = uVar21 - uVar14 * uVar15;
                    }
                    *(long ***)(lStack_b0 + uVar21 * 8) = &plStack_a0;
                    plVar16 = (long *)*plStack_a0;
                    plVar3 = plStack_a0;
                    while (plVar16 != (long *)0x0) {
                      uVar14 = plVar16[1];
                      if ((uVar15 & uVar19) == 0) {
                        uVar14 = uVar14 & uVar19;
                      }
                      else if (uVar15 <= uVar14) {
                        uVar25 = 0;
                        if (uVar15 != 0) {
                          uVar25 = uVar14 / uVar15;
                        }
                        uVar14 = uVar14 - uVar25 * uVar15;
                      }
                      plVar17 = plVar16;
                      if (uVar14 != uVar21) {
                        if (*(long *)(lStack_b0 + uVar14 * 8) == 0) {
                          *(long **)(lStack_b0 + uVar14 * 8) = plVar3;
                          uVar21 = uVar14;
                        }
                        else {
                          *plVar3 = *plVar16;
                          *plVar16 = **(long **)(lStack_b0 + uVar14 * 8);
                          **(undefined8 **)(lStack_b0 + uVar14 * 8) = plVar16;
                          plVar17 = plVar3;
                        }
                      }
                      plVar3 = plVar17;
                      plVar16 = (long *)*plVar17;
                    }
                  }
                }
                else {
                  if ((uVar19 & uVar19 - 1) != 0) {
                    __ZNSt3__112__next_primeEm();
                    uVar15 = uStack_a8;
                  }
                  if (uVar15 < uVar19) {
                    if (uVar19 >> 0x3d != 0) goto LAB_10998f84c;
                    goto LAB_10998f224;
                  }
LAB_10998f288:
                  if (uVar19 < uVar15) {
                    uVar21 = (ulong)((float)uStack_98 / fStack_90);
                    if ((uVar15 < 3) || ((uVar15 & uVar15 - 1) != 0)) {
                      __ZNSt3__112__next_primeEm();
                    }
                    else if (1 < uVar21) {
                      uVar21 = 1L << (-LZCOUNT(uVar21 - 1) & 0x3fU);
                    }
                    lVar13 = lStack_b0;
                    if (uVar19 <= uVar21) {
                      uVar19 = uVar21;
                    }
                    bVar5 = uVar19 < uVar15;
                    uVar15 = uStack_a8;
                    if (bVar5) {
                      if (uVar19 == 0) {
                        lStack_b0 = 0;
                        if (lVar13 != 0) {
                          __ZdlPv();
                        }
                        uStack_a8 = 0;
                        uVar15 = 0;
                      }
                      else {
                        if (uVar19 >> 0x3d != 0) {
LAB_10998f84c:
                          func_0x000104c4f740();
                    /* WARNING: Does not return */
                          pcVar4 = (code *)SoftwareBreakpoint(1,0x10998f854);
                          (*pcVar4)();
                        }
                        lVar13 = uVar19 << 3;
                        __Znwm();
                        bVar5 = lStack_b0 != 0;
                        lStack_b0 = lVar13;
                        if (bVar5) {
                          __ZdlPv();
                        }
                        uVar21 = 0;
                        do {
                          *(undefined8 *)(lStack_b0 + uVar21 * 8) = 0;
                          uVar21 = uVar21 + 1;
                        } while (uVar19 != uVar21);
                        uVar15 = uVar19;
                        uStack_a8 = uVar19;
                        if (plStack_a0 != (long *)0x0) {
                          uVar21 = plStack_a0[1];
                          uVar14 = uVar19 - 1;
                          if ((uVar19 & uVar14) == 0) {
                            uVar21 = uVar21 & uVar14;
                          }
                          else if (uVar19 <= uVar21) {
                            uVar25 = 0;
                            if (uVar19 != 0) {
                              uVar25 = uVar21 / uVar19;
                            }
                            uVar21 = uVar21 - uVar25 * uVar19;
                          }
                          *(long ***)(lStack_b0 + uVar21 * 8) = &plStack_a0;
                          plVar16 = (long *)*plStack_a0;
                          plVar3 = plStack_a0;
                          while (plVar16 != (long *)0x0) {
                            uVar25 = plVar16[1];
                            if ((uVar19 & uVar14) == 0) {
                              uVar25 = uVar25 & uVar14;
                            }
                            else if (uVar19 <= uVar25) {
                              uVar2 = 0;
                              if (uVar19 != 0) {
                                uVar2 = uVar25 / uVar19;
                              }
                              uVar25 = uVar25 - uVar2 * uVar19;
                            }
                            plVar17 = plVar16;
                            if (uVar25 != uVar21) {
                              if (*(long *)(lStack_b0 + uVar25 * 8) == 0) {
                                *(long **)(lStack_b0 + uVar25 * 8) = plVar3;
                                uVar21 = uVar25;
                              }
                              else {
                                *plVar3 = *plVar16;
                                *plVar16 = **(long **)(lStack_b0 + uVar25 * 8);
                                **(undefined8 **)(lStack_b0 + uVar25 * 8) = plVar16;
                                plVar17 = plVar3;
                              }
                            }
                            plVar3 = plVar17;
                            plVar16 = (long *)*plVar17;
                          }
                        }
                      }
                    }
                  }
                }
                if ((uVar15 & uVar15 - 1) == 0) {
                  uVar19 = uVar15 - 1 & uVar11;
                }
                else {
                  uVar19 = uVar11;
                  if (uVar15 <= uVar11) {
                    uVar21 = 0;
                    if (uVar15 != 0) {
                      uVar21 = uVar11 / uVar15;
                    }
                    uVar19 = uVar11 - uVar21 * uVar15;
                  }
                }
              }
              plVar16 = *(long **)(lStack_b0 + uVar19 * 8);
              if (plVar16 == (long *)0x0) {
                *plVar10 = (long)plStack_a0;
                *(long ***)(lStack_b0 + uVar19 * 8) = &plStack_a0;
                plStack_a0 = plVar10;
                if (*plVar10 != 0) {
                  uVar21 = *(ulong *)(*plVar10 + 8);
                  if ((uVar15 & uVar15 - 1) == 0) {
                    uVar21 = uVar21 & uVar15 - 1;
                  }
                  else if (uVar15 <= uVar21) {
                    uVar11 = 0;
                    if (uVar15 != 0) {
                      uVar11 = uVar21 / uVar15;
                    }
                    uVar21 = uVar21 - uVar11 * uVar15;
                  }
                  plVar16 = (long *)(lStack_b0 + uVar21 * 8);
                  goto LAB_10998f534;
                }
              }
              else {
                *plVar10 = *plVar16;
LAB_10998f534:
                *plVar16 = (long)plVar10;
              }
              uVar21 = uStack_98 + 1;
              uStack_98 = uVar21;
LAB_10998f544:
              *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
              plVar10 = (long *)plVar12[1];
              plVar16 = plVar12;
              if ((long *)plVar12[1] == (long *)0x0) {
                do {
                  plVar12 = (long *)plVar16[2];
                  bVar5 = (long *)*plVar12 != plVar16;
                  plVar16 = plVar12;
                } while (bVar5);
              }
              else {
                do {
                  plVar12 = plVar10;
                  plVar10 = (long *)*plVar12;
                } while ((long *)*plVar12 != (long *)0x0);
              }
            } while (plVar12 != plVar23);
            plVar10 = (long *)plVar24[1];
          }
          plVar16 = plVar24;
          if (plVar10 == (long *)0x0) {
            do {
              plVar24 = (long *)plVar16[2];
              bVar5 = (long *)*plVar24 != plVar16;
              plVar16 = plVar24;
            } while (bVar5);
          }
          else {
            do {
              plVar24 = plVar10;
              plVar10 = (long *)*plVar24;
            } while ((long *)*plVar24 != (long *)0x0);
          }
        }
        plVar18 = plVar18 + 3;
      } while (plVar18 != plVar22);
    }
  }
  puVar20 = (undefined8 *)0xa0;
  __Znwm();
  puVar20[5] = 0;
  puVar20[4] = 0;
  puVar20[7] = 0;
  puVar20[6] = 0;
  puVar20[0x11] = 0;
  puVar20[0x10] = 0;
  puVar20[0x13] = 0;
  puVar20[0x12] = 0;
  puVar20[0xd] = 0;
  puVar20[0xc] = 0;
  puVar20[0xf] = 0;
  puVar20[0xe] = 0;
  puVar20[9] = 0;
  puVar20[8] = 0;
  puVar20[0xb] = 0;
  puVar20[10] = 0;
  puVar20[1] = 0;
  *puVar20 = 0;
  puVar20[3] = 0;
  puVar20[2] = 0;
  *(undefined4 *)(puVar20 + 4) = 0x3f800000;
  puVar20[6] = 0;
  puVar20[5] = 0;
  puVar20[8] = 0;
  puVar20[7] = 0;
  *(undefined4 *)(puVar20 + 9) = 0x3f800000;
  *(undefined4 *)(puVar20 + 0xe) = 0x3f800000;
  puVar20[0x10] = 0;
  puVar20[0xf] = 0;
  puVar20[0x12] = 0;
  puVar20[0x11] = 0;
  *(undefined4 *)(puVar20 + 0x13) = 0x3f800000;
  *param_1 = puVar20;
  uStack_118 = (long **)((ulong)uStack_118 & 0xffffffff00000000);
  plVar22 = plStack_a0;
  if (param_2[1] != *param_2) {
    do {
      FUN_109990290(0x3ff0000000000000,puVar20,&uStack_118);
      FUN_10998f930(0x3ff0000000000000,puVar20,&uStack_118,&uStack_118);
      uVar21 = (long)(int)uStack_118 + 1;
      uStack_118 = (long **)CONCAT44(uStack_118._4_4_,(int)uVar21);
      uVar19 = ((long)(param_2[1] - *param_2) >> 3) * -0x5555555555555555;
      plVar22 = plStack_a0;
    } while (uVar21 <= uVar19 && uVar19 - uVar21 != 0);
  }
  for (; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
    iStack_b4 = *(int *)((long)plVar22 + 0x14);
    uStack_118._4_4_ = (undefined4)((ulong)uStack_118 >> 0x20);
    uStack_118 = (long **)CONCAT44(uStack_118._4_4_,(int)plVar22[2]);
    FUN_10998f930((double)(int)plVar22[3] /
                  SQRT((double)(ulong)(*(long *)(*param_2 + (long)iStack_b4 * 0x18 + 0x10) *
                                      *(long *)(*param_2 + (long)(int)plVar22[2] * 0x18 + 0x10))),
                  puVar20,&uStack_118,&iStack_b4);
  }
  if (piRam000000011373d200 == (int *)0x0) {
    iVar9 = 0x1373d200;
    FUN_1099adbb8(0x11373d200,0x11382bb14,&UNK_10f5913e2,2);
    lVar13 = lStack_b0;
    plVar22 = plStack_a0;
    if (iVar9 == 0) goto joined_r0x00010998f7c8;
  }
  else {
    lVar13 = lStack_b0;
    plVar22 = plStack_a0;
    if (*piRam000000011373d200 < 2) goto joined_r0x00010998f7c8;
  }
  uStack_118 = (long **)0x0;
  uStack_c0 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_c8 = 0;
  FUN_1099a9f0c(&uStack_118,&UNK_10f5913e2,0x96,0,FUN_1099aa768,0);
  lVar13 = CONCAT71(uStack_10f,uStack_110) + 0x7540;
  FUN_1092b4db8(lVar13,&UNK_10f59148a,0x1d);
  lVar7 = 0;
  _time(0);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEl(lVar13,lVar7 - lVar6);
  FUN_1099ab3b0(&uStack_118);
  lVar13 = lStack_b0;
  plVar22 = plStack_a0;
joined_r0x00010998f7c8:
  while (plVar22 != (long *)0x0) {
    plVar22 = (long *)*plVar22;
    lStack_b0 = lVar13;
    __ZdlPv();
    lVar13 = lStack_b0;
  }
  lStack_b0 = 0;
  if (lVar13 != 0) {
    __ZdlPv();
  }
  plVar18 = plStack_80;
  plVar22 = plStack_78;
  if (plStack_80 != (long *)0x0) {
    while (plVar22 != plVar18) {
      func_0x000105340e88(plVar22 + -3,plVar22[-2]);
      plVar22 = plVar22 + -3;
    }
    plStack_78 = plVar18;
    __ZdlPv(plStack_80);
  }
  return;
}



/* Entry: 10998f930; end: 1099900f7;  */

void FUN_10998f930(long param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x26;
  ulong uVar15;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined1 uStack_71;
  
  plVar11 = (long *)(param_1 + 0x50);
  uVar1 = *param_2;
  uVar15 = (ulong)uVar1;
  uVar14 = (ulong)(int)uVar1;
  uVar13 = *(ulong *)(param_1 + 0x58);
  if (uVar13 != 0) {
    uVar5 = uVar13 - 1;
    if ((uVar13 & uVar5) == 0) {
      unaff_x26 = uVar5 & uVar14;
    }
    else {
      unaff_x26 = uVar14;
      if (uVar13 <= uVar14) {
        uVar9 = 0;
        if (uVar13 != 0) {
          uVar9 = uVar14 / uVar13;
        }
        unaff_x26 = uVar14 - uVar9 * uVar13;
      }
    }
    puVar8 = *(undefined8 **)(*plVar11 + unaff_x26 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar12 = (long *)*puVar8; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        uVar9 = plVar12[1];
        if (uVar9 == uVar14) {
          if (*(uint *)(plVar12 + 2) == uVar1) goto LAB_10998fb38;
        }
        else {
          if ((uVar13 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar13 <= uVar9) {
            uVar3 = 0;
            if (uVar13 != 0) {
              uVar3 = uVar9 / uVar13;
            }
            uVar9 = uVar9 - uVar3 * uVar13;
          }
          if (uVar9 != unaff_x26) break;
        }
      }
    }
  }
  plVar12 = (long *)0x40;
  __Znwm();
  uStack_80 = 1;
  *plVar12 = 0;
  plVar12[1] = uVar14;
  *(uint *)(plVar12 + 2) = uVar1;
  plVar12[4] = 0;
  plVar12[3] = 0;
  plVar12[6] = 0;
  plVar12[5] = 0;
  *(undefined4 *)(plVar12 + 7) = 0x3f800000;
  fVar4 = (float)(*(long *)(param_1 + 0x68) + 1);
  plStack_90 = plVar12;
  if ((uVar13 == 0) || (plStack_88 = plVar11, *(float *)(param_1 + 0x70) * (float)uVar13 < fVar4)) {
    uVar5 = 1;
    if (2 < uVar13) {
      uVar5 = (ulong)((uVar13 & uVar13 - 1) != 0);
    }
    uVar5 = uVar5 | uVar13 << 1;
    uVar13 = (ulong)(fVar4 / *(float *)(param_1 + 0x70));
    if (uVar5 <= uVar13) {
      uVar5 = uVar13;
    }
    plStack_88 = plVar11;
    func_0x0001099909b0(plVar11,uVar5);
    uVar13 = *(ulong *)(param_1 + 0x58);
    if ((uVar13 & uVar13 - 1) == 0) {
      unaff_x26 = uVar13 - 1 & uVar14;
    }
    else {
      unaff_x26 = uVar14;
      if (uVar13 <= uVar14) {
        uVar5 = 0;
        if (uVar13 != 0) {
          uVar5 = uVar14 / uVar13;
        }
        unaff_x26 = uVar14 - uVar5 * uVar13;
      }
    }
  }
  lVar10 = *plVar11;
  plVar6 = *(long **)(lVar10 + unaff_x26 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)(param_1 + 0x60);
    *plVar12 = *plVar6;
    *plVar6 = (long)plVar12;
    *(long **)(lVar10 + unaff_x26 * 8) = plVar6;
    if (*plVar12 != 0) {
      uVar14 = *(ulong *)(*plVar12 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar14 = uVar14 & uVar13 - 1;
      }
      else if (uVar13 <= uVar14) {
        uVar5 = 0;
        if (uVar13 != 0) {
          uVar5 = uVar14 / uVar13;
        }
        uVar14 = uVar14 - uVar5 * uVar13;
      }
      plVar6 = (long *)(*plVar11 + uVar14 * 8);
      goto LAB_10998fb28;
    }
  }
  else {
    *plVar12 = *plVar6;
LAB_10998fb28:
    *plVar6 = (long)plVar12;
  }
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
LAB_10998fb38:
  iVar2 = *param_3;
  uVar13 = (ulong)iVar2;
  uVar14 = plVar12[4];
  if (uVar14 != 0) {
    uVar5 = uVar14 - 1;
    if ((uVar14 & uVar5) == 0) {
      uVar15 = uVar5 & uVar13;
    }
    else {
      uVar15 = uVar13;
      if (uVar14 <= uVar13) {
        uVar15 = 0;
        if (uVar14 != 0) {
          uVar15 = uVar13 / uVar14;
        }
        uVar15 = uVar13 - uVar15 * uVar14;
      }
    }
    plVar6 = *(long **)(plVar12[3] + uVar15 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_10998fbcc;
          uVar9 = plVar6[1];
          if (uVar9 != uVar13) break;
          if (*(int *)(plVar6 + 2) == iVar2) goto LAB_109990058;
        }
        if ((uVar14 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (uVar14 <= uVar9) {
          uVar3 = 0;
          if (uVar14 != 0) {
            uVar3 = uVar9 / uVar14;
          }
          uVar9 = uVar9 - uVar3 * uVar14;
        }
      } while (uVar9 == uVar15);
    }
  }
LAB_10998fbcc:
  plVar6 = (long *)0x18;
  __Znwm();
  *plVar6 = 0;
  plVar6[1] = uVar13;
  *(int *)(plVar6 + 2) = iVar2;
  if ((uVar14 == 0) || (*(float *)(plVar12 + 7) * (float)uVar14 < (float)(plVar12[6] + 1))) {
    uVar15 = 1;
    if (2 < uVar14) {
      uVar15 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar15 = uVar15 | uVar14 << 1;
    uVar14 = (ulong)((float)(plVar12[6] + 1) / *(float *)(plVar12 + 7));
    if (uVar15 <= uVar14) {
      uVar15 = uVar14;
    }
    func_0x000107c2ab20(plVar12 + 3,uVar15);
    uVar14 = plVar12[4];
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar15 = uVar14 - 1 & uVar13;
    }
    else {
      uVar15 = uVar13;
      if (uVar14 <= uVar13) {
        uVar15 = 0;
        if (uVar14 != 0) {
          uVar15 = uVar13 / uVar14;
        }
        uVar15 = uVar13 - uVar15 * uVar14;
      }
    }
  }
  lVar10 = plVar12[3];
  plVar7 = *(long **)(lVar10 + uVar15 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = plVar12 + 5;
    *plVar6 = *plVar7;
    *plVar7 = (long)plVar6;
    *(long **)(lVar10 + uVar15 * 8) = plVar7;
    if (*plVar6 != 0) {
      uVar15 = *(ulong *)(*plVar6 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar15 = uVar15 & uVar14 - 1;
      }
      else if (uVar14 <= uVar15) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = uVar15 / uVar14;
        }
        uVar15 = uVar15 - uVar5 * uVar14;
      }
      plVar7 = (long *)(plVar12[3] + uVar15 * 8);
      goto LAB_10998fcd0;
    }
  }
  else {
    *plVar6 = *plVar7;
LAB_10998fcd0:
    *plVar7 = (long)plVar6;
  }
  plVar12[6] = plVar12[6] + 1;
  iVar2 = *param_3;
  uVar14 = (ulong)iVar2;
  uVar15 = *(ulong *)(param_1 + 0x58);
  if (uVar15 != 0) {
    uVar5 = uVar15 - 1;
    if ((uVar15 & uVar5) == 0) {
      uVar13 = uVar5 & uVar14;
    }
    else {
      uVar13 = uVar14;
      if (uVar15 <= uVar14) {
        uVar13 = 0;
        if (uVar15 != 0) {
          uVar13 = uVar14 / uVar15;
        }
        uVar13 = uVar14 - uVar13 * uVar15;
      }
    }
    puVar8 = *(undefined8 **)(*plVar11 + uVar13 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar12 = (long *)*puVar8; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        uVar9 = plVar12[1];
        if (uVar9 == uVar14) {
          if ((int)plVar12[2] == iVar2) goto LAB_10998feb0;
        }
        else {
          if ((uVar15 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar15 <= uVar9) {
            uVar3 = 0;
            if (uVar15 != 0) {
              uVar3 = uVar9 / uVar15;
            }
            uVar9 = uVar9 - uVar3 * uVar15;
          }
          if (uVar9 != uVar13) break;
        }
      }
    }
  }
  plVar12 = (long *)0x40;
  __Znwm();
  uStack_80 = 1;
  *plVar12 = 0;
  plVar12[1] = uVar14;
  *(int *)(plVar12 + 2) = iVar2;
  plVar12[4] = 0;
  plVar12[3] = 0;
  plVar12[6] = 0;
  plVar12[5] = 0;
  *(undefined4 *)(plVar12 + 7) = 0x3f800000;
  fVar4 = (float)(*(long *)(param_1 + 0x68) + 1);
  plStack_90 = plVar12;
  if ((uVar15 == 0) || (plStack_88 = plVar11, *(float *)(param_1 + 0x70) * (float)uVar15 < fVar4)) {
    uVar13 = 1;
    if (2 < uVar15) {
      uVar13 = (ulong)((uVar15 & uVar15 - 1) != 0);
    }
    uVar13 = uVar13 | uVar15 << 1;
    uVar15 = (ulong)(fVar4 / *(float *)(param_1 + 0x70));
    if (uVar13 <= uVar15) {
      uVar13 = uVar15;
    }
    plStack_88 = plVar11;
    func_0x0001099909b0(plVar11,uVar13);
    uVar15 = *(ulong *)(param_1 + 0x58);
    if ((uVar15 & uVar15 - 1) == 0) {
      uVar13 = uVar15 - 1 & uVar14;
    }
    else {
      uVar13 = uVar14;
      if (uVar15 <= uVar14) {
        uVar13 = 0;
        if (uVar15 != 0) {
          uVar13 = uVar14 / uVar15;
        }
        uVar13 = uVar14 - uVar13 * uVar15;
      }
    }
  }
  lVar10 = *plVar11;
  plVar6 = *(long **)(lVar10 + uVar13 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)(param_1 + 0x60);
    *plVar12 = *plVar6;
    *plVar6 = (long)plVar12;
    *(long **)(lVar10 + uVar13 * 8) = plVar6;
    if (*plVar12 != 0) {
      uVar14 = *(ulong *)(*plVar12 + 8);
      if ((uVar15 & uVar15 - 1) == 0) {
        uVar14 = uVar14 & uVar15 - 1;
      }
      else if (uVar15 <= uVar14) {
        uVar5 = 0;
        if (uVar15 != 0) {
          uVar5 = uVar14 / uVar15;
        }
        uVar14 = uVar14 - uVar5 * uVar15;
      }
      plVar6 = (long *)(*plVar11 + uVar14 * 8);
      goto LAB_10998fea0;
    }
  }
  else {
    *plVar12 = *plVar6;
LAB_10998fea0:
    *plVar6 = (long)plVar12;
  }
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
LAB_10998feb0:
  uVar1 = *param_2;
  uVar14 = (ulong)(int)uVar1;
  uVar15 = plVar12[4];
  if (uVar15 != 0) {
    uVar5 = uVar15 - 1;
    if ((uVar15 & uVar5) == 0) {
      uVar13 = uVar5 & uVar14;
    }
    else {
      uVar13 = uVar14;
      if (uVar15 <= uVar14) {
        uVar13 = 0;
        if (uVar15 != 0) {
          uVar13 = uVar14 / uVar15;
        }
        uVar13 = uVar14 - uVar13 * uVar15;
      }
    }
    plVar11 = *(long **)(plVar12[3] + uVar13 * 8);
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_10998ff44;
          uVar9 = plVar11[1];
          if (uVar9 != uVar14) break;
          if (*(uint *)(plVar11 + 2) == uVar1) goto LAB_109990058;
        }
        if ((uVar15 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (uVar15 <= uVar9) {
          uVar3 = 0;
          if (uVar15 != 0) {
            uVar3 = uVar9 / uVar15;
          }
          uVar9 = uVar9 - uVar3 * uVar15;
        }
      } while (uVar9 == uVar13);
    }
  }
LAB_10998ff44:
  plVar11 = (long *)0x18;
  __Znwm();
  *plVar11 = 0;
  plVar11[1] = uVar14;
  *(uint *)(plVar11 + 2) = uVar1;
  if ((uVar15 == 0) || (*(float *)(plVar12 + 7) * (float)uVar15 < (float)(plVar12[6] + 1))) {
    uVar13 = 1;
    if (2 < uVar15) {
      uVar13 = (ulong)((uVar15 & uVar15 - 1) != 0);
    }
    uVar13 = uVar13 | uVar15 << 1;
    uVar15 = (ulong)((float)(plVar12[6] + 1) / *(float *)(plVar12 + 7));
    if (uVar13 <= uVar15) {
      uVar13 = uVar15;
    }
    func_0x000107c2ab20(plVar12 + 3,uVar13);
    uVar15 = plVar12[4];
    if ((uVar15 & uVar15 - 1) == 0) {
      uVar13 = uVar15 - 1 & uVar14;
    }
    else {
      uVar13 = uVar14;
      if (uVar15 <= uVar14) {
        uVar13 = 0;
        if (uVar15 != 0) {
          uVar13 = uVar14 / uVar15;
        }
        uVar13 = uVar14 - uVar13 * uVar15;
      }
    }
  }
  lVar10 = plVar12[3];
  plVar6 = *(long **)(lVar10 + uVar13 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = plVar12 + 5;
    *plVar11 = *plVar6;
    *plVar6 = (long)plVar11;
    *(long **)(lVar10 + uVar13 * 8) = plVar6;
    if (*plVar11 == 0) goto LAB_10999004c;
    uVar13 = *(ulong *)(*plVar11 + 8);
    if ((uVar15 & uVar15 - 1) == 0) {
      uVar13 = uVar13 & uVar15 - 1;
    }
    else if (uVar15 <= uVar13) {
      uVar14 = 0;
      if (uVar15 != 0) {
        uVar14 = uVar13 / uVar15;
      }
      uVar13 = uVar13 - uVar14 * uVar15;
    }
    plVar6 = (long *)(plVar12[3] + uVar13 * 8);
  }
  else {
    *plVar11 = *plVar6;
  }
  *plVar6 = (long)plVar11;
LAB_10999004c:
  plVar12[6] = plVar12[6] + 1;
LAB_109990058:
  uVar1 = *param_2;
  iVar2 = *param_3;
  if ((int)uVar1 < iVar2) {
    lStack_98 = CONCAT44(iVar2,uVar1);
  }
  else {
    lStack_98 = CONCAT44(uVar1,iVar2);
  }
  plStack_90 = &lStack_98;
  param_1 = param_1 + 0x78;
  FUN_109990c98(param_1,&lStack_98,&UNK_10dd5b8f9,&plStack_90,&uStack_71);
  *(ulong *)(param_1 + 0x18) =
       CONCAT17(in_register_00005007,
                CONCAT16(in_register_00005006,
                         CONCAT15(in_register_00005005,
                                  CONCAT14(in_register_00005004,
                                           CONCAT13(in_register_00005003,
                                                    CONCAT12(in_register_00005002,
                                                             CONCAT11(in_register_00005001,in_b0))))
                                 )));
  return;
}



/* Entry: 1099900f8; end: 10999010b;  */

long * FUN_1099900f8(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((*(byte *)(plVar1 + 1) & 1) == 0) {
    plVar4 = (long *)*plVar1;
    lVar5 = *plVar4;
    if (lVar5 != 0) {
      lVar3 = lVar5;
      lVar2 = plVar4[1];
      if (plVar4[1] != lVar5) {
        do {
          lVar3 = lVar2 + -0x18;
          func_0x000105340e88(lVar3,*(undefined8 *)(lVar2 + -0x10));
          lVar2 = lVar3;
        } while (lVar3 != lVar5);
        lVar3 = *(long *)*plVar1;
      }
      plVar4[1] = lVar5;
      __ZdlPv(lVar3);
    }
  }
  return plVar1;
}


