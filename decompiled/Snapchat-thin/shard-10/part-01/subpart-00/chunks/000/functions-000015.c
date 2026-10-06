/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107909ec0; end: 107909f7f;  */

void FUN_107909ec0(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  func_0x000107914a04();
  if ((!(bool)in_CY || (bool)in_ZR) && (func_0x0001079147b4(), (bool)in_CY)) {
    func_0x000107914240();
    func_0x0001079135a4();
    func_0x0001079134a0();
    func_0x000107915c1c();
    if (!(bool)in_ZR) {
      func_0x000107917310();
      func_0x000107915144();
      func_0x000107914dd4();
      func_0x00010790a008();
      func_0x0001079148c4();
      func_0x000107915314();
      func_0x00010790a034();
      func_0x0001079148b4();
      func_0x000107915314();
      func_0x00010790a034();
    }
    func_0x00010791658c();
    func_0x000107914dd4();
    func_0x00010790a008();
    func_0x0001079165f8();
    func_0x000107914dd4();
    func_0x00010790a008();
    func_0x0001079151e0();
    func_0x00010791518c();
    func_0x000107915024();
    return;
  }
  func_0x000107914da4();
  func_0x000107915d78();
  if (!(bool)in_ZR) {
    func_0x000107914c78();
    lVar1 = extraout_x8;
    while (unaff_x21 != lVar1) {
      func_0x000107915d6c();
      lVar1 = extraout_x8_00;
      while (unaff_x21 = unaff_x22, unaff_x23 != lVar1) {
        func_0x00010791460c();
        func_0x000107909c84();
        lVar1 = *(long *)(unaff_x20 + 8);
      }
    }
  }
  return;
}



/* Entry: 10790a428; end: 10790a4a3;  */

void FUN_10790a428(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  long extraout_x8;
  long extraout_x9;
  ulong unaff_x20;
  undefined8 uStack_60;
  
  func_0x000107913588();
  func_0x000107906fdc();
  func_0x000107913304();
  func_0x0001079133b4();
  func_0x000107913398();
  func_0x000107915afc();
  uVar3 = 1;
  if ((bool)in_ZR) goto code_r0x00010790a11c;
  uVar3 = extraout_x9 - extraout_x8 == 0x80;
  uVar1 = 0;
  if ((ulong)(extraout_x9 - extraout_x8) < 0x80) {
code_r0x00010790a0a4:
    func_0x0001079142a0();
    func_0x00010790a218();
  }
  else {
    uVar1 = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((99 < unaff_x20) || (func_0x000107914230(), !(bool)uVar1)) goto code_r0x00010790a0a4;
    func_0x000107914d1c();
    func_0x000107913668();
    func_0x00010790a274();
  }
  func_0x000107914220();
  in_CY = 0;
  if (((bool)uVar1) && (func_0x0001079142c0(), in_CY = 0, (bool)uVar1)) {
    in_CY = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((unaff_x20 < 100) && (func_0x000107914e9c(), (bool)in_CY)) {
      func_0x00010791683c();
      func_0x000107913810();
      func_0x00010790a274();
      func_0x0001079137f8();
      func_0x00010790a274();
      goto code_r0x00010790a11c;
    }
  }
  func_0x000107914290();
  func_0x00010790a218();
  func_0x0001079142b0();
  func_0x00010790a218();
code_r0x00010790a11c:
  func_0x000107915a78();
  if (!(bool)uVar3) {
    func_0x000107914d40();
    if (((((bool)in_CY) && (func_0x000107914210(), (bool)in_CY)) &&
        (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), (bool)in_CY)) {
      func_0x00010791682c();
      func_0x000107913840();
      func_0x00010790a274();
      func_0x000107913828();
      func_0x00010790a274();
    }
    else {
      func_0x0001079145fc();
      func_0x00010790a218();
      func_0x0001079142e0();
      func_0x00010790a218();
    }
  }
  func_0x000107914d34(uStack_60);
  if ((((bool)in_CY) && (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107914200(), (bool)in_CY)) {
    func_0x0001079137b0();
    func_0x00010790a274();
  }
  else {
    func_0x0001079145ec();
    func_0x00010790a218();
  }
  func_0x0001079141f0();
  if ((((bool)in_CY) && (bVar2 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107914280(), bVar2)) {
    func_0x0001079137c8();
    func_0x00010790a274();
  }
  else {
    func_0x0001079142f0();
    func_0x00010790a218();
  }
  func_0x000107914e10();
  func_0x000107914df0();
  func_0x000107914dbc();
  func_0x000107914e18();
  func_0x000107914e20();
  func_0x000107914dc4();
  return;
}



/* Entry: 10790acc0; end: 10790ae43;  */

void FUN_10790acc0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  bool bVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 extraout_x8;
  long lVar11;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar12;
  ulong extraout_x9;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 *unaff_x19;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar10 = param_2;
  func_0x000107913c90();
  lVar11 = (long)puVar10 - param_1 >> 4;
  uVar7 = lVar11 == 5;
  lVar9 = 1;
  switch(lVar11) {
  case 0:
  case 1:
    goto LAB_10790ae20;
  case 2:
    uVar7 = *(int *)((long)param_2 + -4) == *(int *)((long)unaff_x19 + 0xc);
    if (*(int *)((long)unaff_x19 + 0xc) < *(int *)((long)param_2 + -4)) {
      uVar20 = unaff_x19[1];
      uVar17 = *unaff_x19;
      uVar21 = param_2[-2];
      unaff_x19[1] = param_2[-1];
      *unaff_x19 = uVar21;
      param_2[-1] = uVar20;
      param_2[-2] = uVar17;
    }
    goto LAB_10790ae20;
  case 3:
    param_3 = param_2 + -2;
    puVar10 = unaff_x19 + 2;
    func_0x00010790ab6c();
    break;
  case 4:
    puVar10 = unaff_x19 + 2;
    param_3 = unaff_x19 + 4;
    func_0x00010790ac0c();
    break;
  case 5:
    puVar10 = unaff_x19 + 2;
    param_3 = unaff_x19 + 4;
    func_0x00010790ac54();
    break;
  default:
    puVar10 = unaff_x19 + 2;
    func_0x000107915b84();
    func_0x00010790ab6c();
    func_0x00010791766c();
    lVar9 = extraout_x8_00;
    uVar13 = extraout_x9;
    puVar14 = unaff_x19 + 6;
    puVar19 = unaff_x19 + 4;
    while (puVar15 = puVar14, uVar7 = puVar15 == param_2, !(bool)uVar7) {
      iVar5 = *(int *)((long)puVar15 + 0xc);
      if (*(int *)((long)puVar19 + 0xc) < iVar5) {
        uVar17 = *puVar15;
        uVar6 = *(undefined4 *)(puVar15 + 1);
        lVar11 = lVar9;
        do {
          lVar18 = lVar11;
          *(undefined8 *)((long)unaff_x19 + lVar18 + 0x38) =
               *(undefined8 *)((long)unaff_x19 + lVar18 + 0x28);
          *(undefined8 *)((long)unaff_x19 + lVar18 + 0x30) =
               *(undefined8 *)((long)unaff_x19 + lVar18 + 0x20);
          puVar14 = unaff_x19;
          if (lVar18 == -0x20) goto LAB_10790addc;
          lVar11 = lVar18 + -0x10;
        } while (*(int *)((long)unaff_x19 + lVar18 + 0x1c) < iVar5);
        puVar14 = (undefined8 *)((long)unaff_x19 + lVar18 + 0x20);
LAB_10790addc:
        *puVar14 = uVar17;
        *(undefined4 *)(puVar14 + 1) = uVar6;
        *(int *)((long)puVar14 + 0xc) = iVar5;
        uVar3 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar3;
        uVar7 = uVar3 == 8;
        if ((bool)uVar7) {
          func_0x0001079176f0(puVar15 + 2);
          lVar9 = param_1;
          goto LAB_10790ae20;
        }
      }
      lVar9 = lVar9 + 0x10;
      puVar19 = puVar15;
      puVar14 = puVar15 + 2;
    }
  }
  lVar9 = 1;
LAB_10790ae20:
  func_0x000107913564(extraout_x8);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107913ca4();
  bVar8 = (long)puVar10 - 2U == 0;
  if (1 < (long)puVar10) {
    uVar12 = (long)puVar10 - 2U >> 1;
    uVar13 = (long)param_3 - lVar9 >> 4;
    bVar8 = uVar12 == uVar13;
    if ((long)uVar13 <= (long)uVar12) {
      lVar11 = (long)param_3 - lVar9 >> 3;
      uVar13 = lVar11 + 1;
      puVar14 = (undefined8 *)(lVar9 + uVar13 * 0x10);
      uVar4 = lVar11 + 2;
      uVar16 = uVar13;
      if ((long)uVar4 < (long)puVar10) {
        piVar1 = (int *)((long)puVar14 + 0xc);
        piVar2 = (int *)((long)puVar14 + 0x1c);
        lVar11 = 0x10;
        if (*piVar1 <= *piVar2) {
          lVar11 = 0;
        }
        puVar14 = (undefined8 *)((long)puVar14 + lVar11);
        uVar16 = uVar4;
        if (*piVar1 <= *piVar2) {
          uVar16 = uVar13;
        }
      }
      iVar5 = *(int *)((long)param_3 + 0xc);
      bVar8 = *(int *)((long)puVar14 + 0xc) == iVar5;
      if (*(int *)((long)puVar14 + 0xc) <= iVar5) {
        uVar17 = *param_3;
        uVar6 = *(undefined4 *)(param_3 + 1);
        do {
          puVar19 = puVar14;
          uVar20 = *puVar19;
          param_3[1] = puVar19[1];
          *param_3 = uVar20;
          bVar8 = uVar12 == uVar16;
          if ((long)uVar12 < (long)uVar16) break;
          uVar4 = uVar16 << 1 | 1;
          puVar14 = (undefined8 *)(lVar9 + uVar4 * 0x10);
          uVar13 = uVar16 * 2 + 2;
          uVar16 = uVar4;
          if ((long)uVar13 < (long)puVar10) {
            piVar1 = (int *)((long)puVar14 + 0xc);
            piVar2 = (int *)((long)puVar14 + 0x1c);
            lVar11 = 0x10;
            if (*piVar1 <= *piVar2) {
              lVar11 = 0;
            }
            puVar14 = (undefined8 *)((long)puVar14 + lVar11);
            uVar16 = uVar13;
            if (*piVar1 <= *piVar2) {
              uVar16 = uVar4;
            }
          }
          bVar8 = *(int *)((long)puVar14 + 0xc) == iVar5;
          param_3 = puVar19;
        } while (*(int *)((long)puVar14 + 0xc) <= iVar5);
        *puVar19 = uVar17;
        *(undefined4 *)(puVar19 + 1) = uVar6;
        *(int *)((long)puVar19 + 0xc) = iVar5;
      }
    }
  }
  func_0x000107913564(extraout_x8_01);
  if (!bVar8) {
    ___stack_chk_fail();
    func_0x0001078efde4();
    *(undefined8 *)(lVar9 + 0x20) = puVar10[4];
    return;
  }
  return;
}



/* Entry: 10790b194; end: 10790b2b7;  */

undefined4 FUN_10790b194(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  func_0x000107917a38();
  if ((ulong)((long)param_4 - (long)param_3) < 0x20) {
    return 0xffffffff;
  }
  iVar5 = 0;
LAB_10790b1d0:
  do {
    while( true ) {
      piVar6 = param_3 + 2;
      if (piVar6 == param_4) {
        if (iVar5 == 0) {
          return 0xffffffff;
        }
        return 1;
      }
      iVar3 = *param_3;
      iVar4 = param_3[1];
      iVar1 = *piVar6;
      iVar2 = param_3[3];
      param_3 = piVar6;
      if (iVar3 != param_1 || iVar1 != param_1) break;
      if (iVar4 <= param_2 && param_2 <= iVar2) {
        return 0;
      }
      if (param_2 <= iVar4 && iVar2 <= param_2) {
        return 0;
      }
    }
    if (iVar3 == param_1) {
      iVar7 = -1;
      if (param_1 < iVar1) {
        iVar7 = 1;
      }
LAB_10790b230:
      iVar3 = -iVar7;
      if (iVar4 <= param_2) {
        iVar3 = iVar7;
      }
      if (param_2 == iVar4) {
        return 0;
      }
    }
    else {
      if (iVar1 == param_1) {
        iVar7 = 1;
        iVar4 = iVar2;
        if (param_1 < iVar3) {
          iVar7 = -1;
        }
        goto LAB_10790b230;
      }
      if ((param_1 > iVar3 && iVar1 != param_1) && (param_1 <= iVar3 || param_1 <= iVar1)) {
        iVar7 = 2;
      }
      else {
        if (iVar3 <= param_1 || param_1 <= iVar1) goto LAB_10790b1d0;
        iVar7 = -2;
      }
      func_0x00010790827c();
      if (iVar3 == 0) {
        return 0;
      }
    }
    if (iVar7 * iVar3 < 1) {
      iVar7 = 0;
    }
    iVar5 = iVar7 + iVar5;
  } while( true );
}



/* Entry: 10790bc1c; end: 10790bc57;  */

undefined8 FUN_10790bc1c(long param_1,long param_2,long *param_3)

{
  if (*param_3 != 0) {
    if (*param_3 != 1) {
      return 0;
    }
    param_1 = param_2 + param_3[1] * 0x30;
  }
  func_0x00010790bc58(param_1,param_3[2],param_3[3]);
  return 1;
}



/* Entry: 10790c2b0; end: 10790cb6f;  */

/* WARNING: Possible PIC construction at 0x00010790cc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790cb90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010790cc34) */
/* WARNING: Removing unreachable block (ram,0x00010790cc44) */
/* WARNING: Removing unreachable block (ram,0x00010790cc74) */
/* WARNING: Removing unreachable block (ram,0x00010790cca0) */
/* WARNING: Removing unreachable block (ram,0x00010790cccc) */
/* WARNING: Removing unreachable block (ram,0x00010790cce4) */
/* WARNING: Removing unreachable block (ram,0x00010790cb94) */
/* WARNING: Removing unreachable block (ram,0x00010790cba0) */
/* WARNING: Removing unreachable block (ram,0x00010790cbcc) */
/* WARNING: Removing unreachable block (ram,0x00010790cbf8) */
/* WARNING: Removing unreachable block (ram,0x00010790cc10) */
/* WARNING: Removing unreachable block (ram,0x000107913bd4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10790c2b0(undefined8 ******param_1,undefined8 ******param_2,undefined8 ******param_3,
                  long param_4,uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined8 ******ppppppuVar6;
  undefined8 ******ppppppuVar7;
  undefined8 ******ppppppuVar8;
  undefined8 ******ppppppuVar9;
  undefined8 *******pppppppuVar10;
  ulong uVar11;
  undefined8 ******unaff_x20;
  undefined8 ******ppppppuVar12;
  undefined8 ******ppppppuVar13;
  undefined8 ******unaff_x22;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *******unaff_x29;
  undefined *unaff_x30;
  undefined8 ******ppppppuStack_168;
  undefined8 ******ppppppuStack_160;
  uint uStack_154;
  undefined8 ******ppppppuStack_150;
  long lStack_148;
  undefined8 ******ppppppuStack_140;
  undefined8 ******appppppuStack_138 [13];
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 *******pppppppuStack_b0;
  undefined *puStack_a8;
  
  ppppppuVar7 = param_1;
  uStack_154 = param_5;
LAB_10790c2e8:
  ppppppuStack_150 = param_2 + -0xd;
  ppppppuStack_160 = param_2 + -0x1a;
  ppppppuStack_168 = param_2 + -0x27;
  ppppppuStack_140 = param_2;
LAB_10790c304:
  iVar5 = (int)param_1;
  uVar11 = (long)param_2 - (long)ppppppuVar7;
  uVar16 = (long)uVar11 / 0x68;
  switch(uVar16) {
  case 0:
  case 1:
    goto LAB_10790c650;
  case 2:
    func_0x000107914838();
    func_0x000107915d0c();
    if (iVar5 != 0) {
      func_0x000107913e1c(&pppppppuStack_d0);
      ppppppuVar8 = ppppppuStack_150;
      func_0x000107914144(ppppppuVar7);
      func_0x000107914ab4(ppppppuVar8,&pppppppuStack_d0);
    }
    goto LAB_10790c650;
  case 3:
    ppppppuVar6 = ppppppuVar7;
    func_0x000107916c24(ppppppuVar7,ppppppuVar7 + 0xd,ppppppuStack_150);
    goto code_r0x00010790ca7c;
  case 4:
    ppppppuVar8 = param_3;
    func_0x000107916c24(ppppppuVar7,ppppppuVar7 + 0xd,ppppppuVar7 + 0x1a,ppppppuStack_150);
    break;
  case 5:
    ppppppuVar8 = ppppppuStack_150;
    func_0x000107916c24(ppppppuVar7,ppppppuVar7 + 0xd,ppppppuVar7 + 0x1a,ppppppuVar7 + 0x27,
                        ppppppuStack_150,param_3);
    func_0x0001079189bc();
    unaff_x29 = &pppppppuStack_d0;
    func_0x000107913908();
    unaff_x30 = &UNK_10790cc34;
    break;
  default:
    if ((long)uVar11 < 0x9c0) {
      if ((uStack_154 & 1) == 0) {
        if (ppppppuVar7 != param_2) {
          ppppppuVar8 = ppppppuVar7 + -0xd;
          while (ppppppuVar7 = ppppppuVar7 + 0xd, ppppppuVar7 != param_2) {
            func_0x000107914838();
            func_0x000107915d0c();
            if ((int)param_1 != 0) {
              func_0x000107914010(&pppppppuStack_d0);
              ppppppuVar6 = ppppppuVar8;
              do {
                param_1 = ppppppuVar6;
                ppppppuVar9 = param_1 + 0x1a;
                func_0x000107914ab4(ppppppuVar9,param_1 + 0xd);
                func_0x000107914838();
                func_0x000107915d0c();
                ppppppuVar6 = param_1 + -0xd;
              } while (((ulong)ppppppuVar9 & 1) != 0);
              param_1 = param_1 + 0xd;
              func_0x000107914ab4(param_1,&pppppppuStack_d0);
            }
            ppppppuVar8 = ppppppuVar8 + 0xd;
          }
        }
        goto LAB_10790c650;
      }
      if (ppppppuVar7 == param_2) goto LAB_10790c650;
      lVar14 = 0;
      ppppppuVar8 = ppppppuVar7;
      goto LAB_10790c728;
    }
    if (param_4 != 0) {
      ppppppuVar8 = ppppppuVar7 + (uVar16 >> 1) * 0xd;
      if (uVar11 < 0x3401) {
        func_0x000107915848();
        func_0x000107916854();
      }
      else {
        func_0x000107914e28();
        func_0x000107916854();
        func_0x000107916854(ppppppuVar7 + 0xd,ppppppuVar8 + -0xd,ppppppuStack_160);
        func_0x000107916854(ppppppuVar7 + 0x1a,ppppppuVar8 + 0xd,ppppppuStack_168);
        func_0x00010791522c();
        func_0x000107916854();
        func_0x000107913e1c(&pppppppuStack_d0);
        func_0x000107914010(ppppppuVar7);
        func_0x000107914ab4(ppppppuVar8,&pppppppuStack_d0);
        param_1 = ppppppuVar8;
      }
      lStack_148 = param_4 + -1;
      if ((uStack_154 & 1) != 0) {
LAB_10790c3dc:
        ppppppuVar8 = appppppuStack_138;
        func_0x000107913e1c();
        lVar14 = 0;
        do {
          lVar14 = lVar14 + 0x68;
          func_0x000107913e08();
          func_0x00010790c958();
        } while (((ulong)ppppppuVar8 & 1) != 0);
        ppppppuVar9 = (undefined8 ******)((long)ppppppuVar7 + lVar14);
        ppppppuVar12 = ppppppuStack_140;
        ppppppuVar6 = ppppppuVar9;
        if (lVar14 == 0x68) {
          do {
            ppppppuVar13 = ppppppuVar12;
            if (ppppppuVar12 <= ppppppuVar9) break;
            ppppppuVar12 = ppppppuVar12 + -0xd;
            func_0x000107913e08();
            func_0x000107917dc4();
            ppppppuVar13 = ppppppuVar12;
          } while (((ulong)ppppppuVar8 & 1) == 0);
        }
        else {
          do {
            ppppppuVar12 = ppppppuVar12 + -0xd;
            func_0x000107913e08();
            func_0x000107917dc4();
            ppppppuVar13 = ppppppuVar12;
          } while ((int)ppppppuVar8 == 0);
        }
        while (ppppppuVar6 < ppppppuVar12) {
          func_0x000107914ab4(&pppppppuStack_d0,ppppppuVar6);
          func_0x0001079141e4(ppppppuVar6);
          ppppppuVar8 = ppppppuVar12;
          func_0x000107914ab4(ppppppuVar12,&pppppppuStack_d0);
          do {
            ppppppuVar6 = ppppppuVar6 + 0xd;
            func_0x000107917858();
            func_0x00010790c958();
          } while (((ulong)ppppppuVar8 & 1) != 0);
          do {
            ppppppuVar12 = ppppppuVar12 + -0xd;
            func_0x000107917858();
            func_0x00010790c958();
          } while (((ulong)ppppppuVar8 & 1) == 0);
        }
        unaff_x22 = ppppppuVar6 + -0xd;
        if (ppppppuVar7 != unaff_x22) {
          func_0x0001079141e4(ppppppuVar7);
        }
        unaff_x20 = unaff_x22;
        func_0x000107914ab4(unaff_x22,appppppuStack_138);
        param_2 = ppppppuStack_140;
        param_4 = lStack_148;
        param_1 = unaff_x20;
        if (ppppppuVar13 <= ppppppuVar9) {
          func_0x000107915260();
          func_0x00010790ccec();
          param_1 = unaff_x20;
          func_0x0001079171fc();
          func_0x00010790ccec();
          if ((int)param_1 != 0) goto LAB_10790c62c;
          ppppppuVar13 = unaff_x20;
          ppppppuVar7 = ppppppuVar6;
          if (((ulong)unaff_x20 & 1) != 0) goto LAB_10790c304;
        }
        unaff_x20 = ppppppuVar13;
        func_0x000107915260();
        FUN_10790c2b0();
        uStack_154 = 0;
        ppppppuVar7 = ppppppuVar6;
        goto LAB_10790c304;
      }
      unaff_x22 = (undefined8 ******)(ulong)*(uint *)((long)param_3[1] + 4);
      func_0x000107913e08();
      func_0x000107915d0c();
      if (((ulong)param_1 & 1) != 0) goto LAB_10790c3dc;
      ppppppuVar8 = appppppuStack_138;
      func_0x000107913e1c();
      func_0x000107913e08();
      func_0x00010790c958();
      ppppppuVar6 = ppppppuVar7;
      if (((ulong)ppppppuVar8 & 1) == 0) {
        do {
          ppppppuVar6 = ppppppuVar6 + 0xd;
          if (param_2 <= ppppppuVar6) break;
          func_0x000107913e08();
          func_0x000107917dcc();
        } while ((int)ppppppuVar8 == 0);
      }
      else {
        do {
          ppppppuVar6 = ppppppuVar6 + 0xd;
          func_0x000107913e08();
          func_0x000107917dcc();
        } while (((ulong)ppppppuVar8 & 1) == 0);
      }
      ppppppuVar9 = param_2;
      if (ppppppuVar6 < param_2) {
        do {
          ppppppuVar9 = ppppppuVar9 + -0xd;
          func_0x000107913e08();
          func_0x0001079167e4();
        } while (((ulong)ppppppuVar8 & 1) != 0);
      }
      while (ppppppuVar6 < ppppppuVar9) {
        func_0x000107914ab4(&pppppppuStack_d0,ppppppuVar6);
        func_0x000107914010(ppppppuVar6);
        ppppppuVar8 = ppppppuVar9;
        func_0x000107914ab4(ppppppuVar9,&pppppppuStack_d0);
        unaff_x22 = (undefined8 ******)(ulong)*(uint *)*param_3;
        do {
          ppppppuVar6 = ppppppuVar6 + 0xd;
          func_0x000107917708();
          func_0x000107917dcc();
        } while ((int)ppppppuVar8 == 0);
        do {
          ppppppuVar9 = ppppppuVar9 + -0xd;
          func_0x000107917708();
          func_0x0001079167e4();
        } while (((ulong)ppppppuVar8 & 1) != 0);
      }
      unaff_x20 = ppppppuVar6 + -0xd;
      if (ppppppuVar7 != unaff_x20) {
        func_0x000107914010(ppppppuVar7);
      }
      param_1 = unaff_x20;
      func_0x000107914ab4(unaff_x20,appppppuStack_138);
      uStack_154 = 0;
      param_4 = lStack_148;
      ppppppuVar7 = ppppppuVar6;
      goto LAB_10790c304;
    }
    if (ppppppuVar7 == param_2) goto LAB_10790c650;
    func_0x0001079169f0();
    for (; -1 < (long)unaff_x22; unaff_x22 = (undefined8 ******)((long)unaff_x22 + -1)) {
      func_0x0001079143fc();
      func_0x00010790cef4();
    }
    do {
      if ((long)uVar16 < 2) goto LAB_10790c650;
      ppppppuVar8 = appppppuStack_138;
      ppppppuStack_140 = param_2;
      func_0x000107913e1c();
      uVar11 = 0;
      ppppppuVar6 = ppppppuVar7;
      do {
        iVar5 = (int)ppppppuVar8;
        uVar2 = uVar11 << 1 | 1;
        uVar1 = uVar11 * 2 + 2;
        ppppppuVar9 = ppppppuVar6 + uVar11 * 0xd + 0xd;
        uVar4 = uVar2;
        if ((long)uVar1 < (long)uVar16) {
          func_0x000107914838();
          func_0x0001079170f0();
          ppppppuVar9 = ppppppuVar6 + uVar11 * 0xd + 0x1a;
          uVar4 = uVar1;
          if (iVar5 == 0) {
            ppppppuVar9 = ppppppuVar6 + uVar11 * 0xd + 0xd;
            uVar4 = uVar2;
          }
        }
        uVar11 = uVar4;
        func_0x000107914010();
        ppppppuVar8 = ppppppuVar6;
        ppppppuVar6 = ppppppuVar9;
      } while ((long)uVar11 <= (long)(uVar16 - 2 >> 1));
      param_2 = ppppppuStack_140 + -0xd;
      if (ppppppuVar9 == param_2) {
        pppppppuVar10 = appppppuStack_138;
LAB_10790c8e0:
        func_0x000107914ab4(ppppppuVar9,pppppppuVar10);
      }
      else {
        func_0x000107914ab4(ppppppuVar9,param_2);
        ppppppuVar8 = param_2;
        func_0x000107914ab4(param_2,appppppuStack_138);
        iVar5 = (int)ppppppuVar8;
        uVar11 = (long)ppppppuVar9 + (0x68 - (long)ppppppuVar7);
        if (0x68 < (long)uVar11) {
          uVar11 = uVar11 / 0x68 - 2 >> 1;
          func_0x000107914838();
          func_0x0001079167e4();
          if (iVar5 != 0) {
            func_0x000107914010(&pppppppuStack_d0);
            ppppppuVar8 = ppppppuVar9;
            do {
              ppppppuVar9 = ppppppuVar7 + uVar11 * 0xd;
              func_0x0001079141e4();
              if (uVar11 == 0) break;
              func_0x000107918584();
              func_0x000107914838();
              func_0x00010790c958();
              uVar1 = (ulong)ppppppuVar8 & 1;
              ppppppuVar8 = ppppppuVar9;
            } while (uVar1 != 0);
            pppppppuVar10 = &pppppppuStack_d0;
            goto LAB_10790c8e0;
          }
        }
      }
      uVar16 = uVar16 - 1;
    } while( true );
  }
  func_0x0001079189bc();
  pppppppuStack_d0 = unaff_x29;
  puStack_c8 = unaff_x30;
  func_0x000107913a74();
  unaff_x30 = &UNK_10790cb94;
  ppppppuVar6 = ppppppuVar7;
  ppppppuVar7 = ppppppuVar8;
  unaff_x29 = &pppppppuStack_d0;
code_r0x00010790ca7c:
  func_0x000107916658();
  pppppppuStack_b0 = unaff_x29;
  puStack_a8 = unaff_x30;
  func_0x0001079144b8();
  func_0x000107915034();
  func_0x000107915d0c();
  iVar5 = (int)ppppppuVar6;
  func_0x000107915034();
  func_0x000107916808();
  if (((ulong)ppppppuVar6 & 1) == 0) {
    if (iVar5 == 0) {
      return;
    }
    func_0x000107914144(&ppppppuStack_168);
    func_0x000107914010(param_3);
    func_0x000107914ab4(unaff_x20,&ppppppuStack_168);
    iVar5 = (int)unaff_x20;
    func_0x00010791532c(*unaff_x22);
    func_0x000107915d0c();
    if (iVar5 == 0) {
      return;
    }
    func_0x000107913e1c(&ppppppuStack_168);
    func_0x000107914144(ppppppuVar7);
    func_0x000107915724();
  }
  else {
    if (iVar5 == 0) {
      func_0x000107913e1c(&ppppppuStack_168);
      func_0x000107914144();
      iVar5 = (int)ppppppuVar7;
      func_0x000107915724();
      func_0x000107914ab4();
      func_0x00010791532c(*unaff_x22);
      func_0x000107916808();
      if (iVar5 == 0) {
        return;
      }
      func_0x000107914144(&ppppppuStack_168);
    }
    else {
      func_0x000107913e1c(&ppppppuStack_168);
      param_3 = ppppppuVar7;
    }
    func_0x000107914010(param_3);
  }
  func_0x000107914ab4();
  return;
LAB_10790c728:
  ppppppuVar8 = ppppppuVar8 + 0xd;
  if (ppppppuVar8 == param_2) {
LAB_10790c650:
    func_0x000107916c24(unaff_x30);
    return;
  }
  func_0x000107914838();
  func_0x000107917dc4();
  if ((int)param_1 != 0) {
    func_0x000107914010(&pppppppuStack_d0);
    lVar3 = lVar14;
    do {
      lVar15 = lVar3;
      ppppppuVar6 = ppppppuVar7;
      func_0x000107914ab4();
      param_1 = ppppppuVar7;
      if (lVar15 == 0) goto LAB_10790c784;
      func_0x000107914838();
      func_0x00010790c958();
      lVar3 = lVar15 + -0x68;
    } while (((ulong)ppppppuVar6 & 1) != 0);
    param_1 = (undefined8 ******)((long)ppppppuVar7 + lVar15);
LAB_10790c784:
    func_0x000107914ab4(param_1,&pppppppuStack_d0);
  }
  lVar14 = lVar14 + 0x68;
  goto LAB_10790c728;
LAB_10790c62c:
  param_2 = unaff_x22;
  if (((ulong)unaff_x20 & 1) != 0) goto LAB_10790c650;
  goto LAB_10790c2e8;
}



/* Entry: 10790d154; end: 10790d18f;  */

void FUN_10790d154(long param_1)

{
  long unaff_x19;
  
  if (param_1 != 0) {
    func_0x000107914c90();
    FUN_10790d154();
    FUN_10790d154(*(undefined8 *)(unaff_x19 + 8));
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      func_0x000107917b0c();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10790ead0; end: 10790eba7;  */

void FUN_10790ead0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x10;
  long lVar3;
  long *unaff_x19;
  ulong unaff_x20;
  ulong uVar4;
  ulong unaff_x22;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  long in_stack_00000020;
  
  func_0x000107917aac();
  func_0x000107914d64();
  func_0x000107918644();
  uVar4 = extraout_x10 >> 3;
  if (uVar4 < param_2) {
    func_0x000107918630();
    if ((ulong)(extraout_x9_00 >> 3) < unaff_x22) {
      func_0x000107914d7c();
      func_0x0001079032d0();
      lVar3 = *unaff_x19;
      lVar1 = unaff_x19[1];
      if (param_1 == 0) {
        param_2 = 0;
      }
      else {
        FUN_107903354();
      }
      in_stack_00000010 = (undefined8 *)(param_1 + (lVar1 - lVar3));
      in_stack_00000020 = param_1 + param_2 * 8;
      in_stack_00000018 = in_stack_00000010 + unaff_x22;
      puVar2 = in_stack_00000010;
      for (lVar3 = unaff_x20 * 8 + uVar4 * -8; lVar3 != 0; lVar3 = lVar3 + -8) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      func_0x000107915724();
      func_0x000107903310();
      func_0x00010790337c(&stack0x00000008);
    }
    else {
      puVar2 = extraout_x8;
      for (lVar3 = unaff_x20 * 8 + uVar4 * -8; lVar3 != 0; lVar3 = lVar3 + -8) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      unaff_x19[1] = (long)(extraout_x8 + unaff_x22);
    }
  }
  else if (unaff_x20 < uVar4) {
    unaff_x19[1] = extraout_x9 + unaff_x20 * 8;
  }
  return;
}



/* Entry: 10790efe0; end: 10790f003;  */

long FUN_10790efe0(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * 0xaa + -1;
  }
  return lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
}



/* Entry: 10790f3ec; end: 10790f61f;  */

void FUN_10790f3ec(void)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x9;
  uint *extraout_x10;
  uint *puVar10;
  uint *extraout_x10_00;
  int iVar11;
  ulong uVar12;
  uint *unaff_x24;
  long unaff_x26;
  ulong uVar13;
  uint *unaff_x28;
  uint *puStack_220;
  long lStack_218;
  uint *puStack_210;
  uint auStack_1e8 [46];
  ulong uStack_130;
  uint *puStack_128;
  uint *puStack_120;
  uint *puStack_118;
  undefined1 uStack_100;
  undefined1 uStack_f0;
  uint *puStack_e8;
  uint *puStack_c0;
  uint *puStack_28;
  
  func_0x000107915f10();
  func_0x000107917140();
  if ((((extraout_x8 & 1) == 0) && ((unaff_x24[0x14] & 1) == 0)) &&
     (func_0x000107918140(), (extraout_x8_00 & 1) == 0)) {
    uVar1 = unaff_x28[0xb];
    func_0x000107916a1c();
    if (-1 < *(long *)(extraout_x9 + 0x18)) {
      func_0x000107915928();
    }
    func_0x0001079164e4();
    uVar12 = (ulong)*unaff_x24;
    uVar13 = (ulong)*puStack_210;
    uVar8 = *(ulong *)(unaff_x24 + 0xe);
    func_0x000107914184();
    func_0x00010790fc58();
    func_0x000107917648();
    FUN_107914df8();
    func_0x0001079169d0();
    puVar10 = extraout_x10;
    while (puStack_28 + 2 != puVar10) {
      iVar11 = (int)uVar12;
      cVar2 = SCARRY4(iVar11,1);
      cVar3 = iVar11 + 1 < 0;
      if (iVar11 == -1) {
        func_0x000107915d54(*puStack_28);
        if (cVar3 != cVar2) {
          return;
        }
      }
      else {
        cVar2 = SBORROW4(iVar11,1);
        cVar3 = iVar11 + -1 < 0;
        bVar4 = iVar11 == 1;
        if ((bVar4) && (func_0x000107916440(), !bVar4 && cVar3 == cVar2)) {
          return;
        }
      }
      func_0x000107915048();
      func_0x000107915e20();
      func_0x00010790fc58();
      puStack_e8 = puStack_c0;
      func_0x000107916180();
      func_0x000107916180();
      func_0x000107917a08();
      puVar10 = puStack_c0;
      while (puStack_28 = puVar10 + 2, puStack_28 != puStack_220) {
        iVar11 = (int)uVar13;
        cVar2 = SCARRY4(iVar11,1);
        cVar3 = iVar11 + 1 < 0;
        uVar5 = iVar11 == -1;
        if ((bool)uVar5) {
          func_0x000107915d54();
          uVar9 = uVar8;
          if (cVar3 != cVar2) break;
        }
        else {
          uVar5 = 0;
          uVar9 = uVar8;
          if ((iVar11 == 1) &&
             (uVar5 = *puVar10 == unaff_x24[10], !(bool)uVar5 && (int)unaff_x24[10] <= (int)*puVar10
             )) break;
        }
        func_0x000107916fd0();
        if ((bool)uVar5) {
          cVar2 = SBORROW8((long)unaff_x28,(long)unaff_x24);
          cVar3 = (long)unaff_x28 - (long)unaff_x24 < 0;
          if (((unaff_x28 != unaff_x24) || ((char)uVar1 == '\0')) ||
             ((uVar8 = uVar9, puVar6 = puVar10, uVar13 = 1, unaff_x26 != 0 &&
              ((unaff_x24 = unaff_x28, lStack_218 != 0 ||
               (func_0x000107917900(), uVar8 = uVar9, uVar13 = 1, cVar3 != cVar2))))))
          goto LAB_10790f59c;
        }
        else {
LAB_10790f59c:
          puStack_118 = puStack_e8;
          uStack_100 = 0;
          uStack_f0 = 0;
          puVar6 = auStack_1e8;
          uStack_130 = uVar12;
          puStack_128 = puVar10;
          puStack_120 = puStack_28;
          func_0x0001079104b0();
          func_0x000107914fa8();
          func_0x0001079152e8();
          func_0x000107910428();
          uVar7 = 1;
          uVar8 = uVar9;
          FUN_107910770();
          func_0x000107916750();
          uVar13 = uVar9;
          if ((uVar7 & 1) != 0) {
            return;
          }
        }
        uVar12 = uVar12 + 1;
        func_0x000107916180();
        func_0x0001079181c8();
        puVar10 = puVar6;
      }
      func_0x000107914300();
      func_0x000107917774();
      puVar10 = extraout_x10_00;
    }
  }
  return;
}



/* Entry: 10790fa60; end: 10790fc4f;  */

undefined8 FUN_10790fa60(ulong param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x000107913588();
  func_0x000107907378();
  func_0x000107913304();
  func_0x0001079133b4();
  func_0x000107913398();
  func_0x000107915afc();
  if ((bool)in_ZR) {
LAB_10790fb28:
    func_0x000107915a78();
    if ((bool)in_ZR) {
      func_0x0001079176fc();
LAB_10790fb94:
      uVar2 = 0x7f < unaff_x21;
      if ((bool)uVar2) {
LAB_10790fb9c:
        uVar2 = 0x62 < unaff_x20;
        if ((99 < unaff_x20) || (func_0x000107914200(), !(bool)uVar2)) goto LAB_10790fbbc;
        func_0x0001079137b0();
        func_0x00010790fc50();
        if ((param_1 & 1) == 0) goto LAB_10790fc00;
      }
      else {
LAB_10790fbbc:
        func_0x0001079145ec();
        func_0x00010790f9e8();
        if ((int)param_1 == 0) goto LAB_10790fc00;
      }
      func_0x0001079141f0();
      iVar3 = (int)param_1;
      if (((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) {
        func_0x000107914280();
        iVar3 = (int)param_1;
        if (!bVar1) goto LAB_10790fbd0;
        func_0x0001079137c8();
        func_0x00010790fc50();
        if ((param_1 & 1) == 0) goto LAB_10790fc00;
      }
      else {
LAB_10790fbd0:
        func_0x0001079142f0();
        func_0x00010790f9e8();
        if (iVar3 == 0) goto LAB_10790fc00;
      }
      uVar4 = 1;
      goto LAB_10790fc04;
    }
    func_0x0001079156e4();
    if (((((bool)in_CY) && (func_0x000107914210(), (bool)in_CY)) &&
        (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), bVar1)) {
      func_0x000107916824();
      func_0x000107913840();
      func_0x00010790fc50();
      if ((int)param_1 != 0) {
        func_0x000107913828();
        func_0x00010790fc50();
        if ((param_1 & 1) != 0) goto LAB_10790fb9c;
      }
    }
    else {
      func_0x0001079145fc();
      func_0x00010790f9e8();
      if ((int)param_1 != 0) {
        func_0x0001079142e0();
        func_0x00010790f9e8();
        if ((int)param_1 != 0) goto LAB_10790fb94;
      }
    }
  }
  else {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107914230(), !(bool)uVar2)) goto LAB_10790fa98;
      func_0x000107914d28();
      func_0x000107913668();
      func_0x00010790fc50();
      if ((param_1 & 1) != 0) goto LAB_10790facc;
    }
    else {
LAB_10790fa98:
      func_0x0001079142a0();
      func_0x00010790f9e8();
      if ((int)param_1 != 0) {
LAB_10790facc:
        func_0x000107914220();
        in_CY = false;
        if ((bool)uVar2) {
          func_0x0001079142c0();
          in_CY = false;
          if ((bool)uVar2) {
            in_CY = 0x62 < unaff_x20;
            in_ZR = unaff_x20 == 99;
            if (unaff_x20 < 100) {
              in_CY = 0x78 < unaff_x21;
              in_ZR = unaff_x21 == 0x79;
              if ((bool)in_CY) {
                func_0x000107916834();
                func_0x000107913810();
                func_0x00010790fc50();
                if ((int)param_1 != 0) {
                  func_0x0001079137f8();
                  func_0x00010790fc50();
                  if ((param_1 & 1) != 0) goto LAB_10790fb28;
                }
                goto LAB_10790fc00;
              }
            }
          }
        }
        func_0x000107914290();
        func_0x00010790f9e8();
        if ((int)param_1 != 0) {
          func_0x0001079142b0();
          func_0x00010790f9e8();
          if ((int)param_1 != 0) goto LAB_10790fb28;
        }
      }
    }
  }
LAB_10790fc00:
  uVar4 = 0;
LAB_10790fc04:
  func_0x000107914e10();
  func_0x000107914df0();
  func_0x000107914dbc();
  func_0x000107914e18();
  func_0x000107914e20();
  func_0x000107914dc4();
  return uVar4;
}



/* Entry: 107910770; end: 1079107a7;  */

void FUN_107910770(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 107910c68; end: 107910d47;  */

ulong FUN_107910c68(ulong param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long unaff_x21;
  long unaff_x22;
  
  func_0x000107914a04();
  if (((bool)in_CY && !(bool)in_ZR) || (func_0x0001079147b4(), !(bool)in_CY)) {
    func_0x000107914da4();
    func_0x000107915d78();
    if (!(bool)in_ZR) {
      func_0x000107914c78();
      lVar2 = extraout_x8;
      while (uVar1 = unaff_x21 == lVar2, !(bool)uVar1) {
        func_0x000107915d6c();
        while (func_0x000107916f18(), lVar2 = extraout_x8_00, unaff_x21 = unaff_x22, !(bool)uVar1) {
          func_0x00010791460c();
          func_0x000107910a2c();
          if ((param_1 & 1) == 0) {
            return 0;
          }
        }
      }
    }
    return 1;
  }
  func_0x000107914240();
  func_0x0001079135a4();
  func_0x0001079134a0();
  func_0x000107915c1c();
  if ((bool)in_ZR) {
LAB_107910cdc:
    func_0x00010791658c();
    func_0x000107914dd4();
    func_0x000107910ddc();
    if ((int)param_1 != 0) {
      func_0x0001079165f8();
      func_0x000107914dd4();
      func_0x000107910ddc();
      goto LAB_107910d1c;
    }
  }
  else {
    func_0x000107917310();
    func_0x000107915144();
    func_0x000107914dd4();
    func_0x000107910ddc();
    if ((int)param_1 != 0) {
      func_0x0001079148c4();
      func_0x000107915314();
      func_0x000107910e08();
      if ((int)param_1 != 0) {
        func_0x0001079148b4();
        func_0x000107915314();
        func_0x000107910e08();
        if ((param_1 & 1) != 0) goto LAB_107910cdc;
      }
    }
  }
  param_1 = 0;
LAB_107910d1c:
  func_0x0001079151e0();
  func_0x00010791518c();
  func_0x000107915024();
  return param_1;
}



/* Entry: 107911298; end: 107911387;  */

undefined8 FUN_107911298(ulong param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  long extraout_x8;
  long extraout_x9;
  undefined8 uVar5;
  ulong unaff_x20;
  undefined8 uStack_60;
  
  func_0x000107913588();
  func_0x000107906fdc();
  func_0x000107913304();
  func_0x0001079133b4();
  func_0x000107913398();
  func_0x000107915afc();
  uVar3 = 1;
  if ((bool)in_ZR) {
code_r0x000107910f08:
    func_0x000107915a78();
    if ((bool)uVar3) {
code_r0x000107910f70:
      func_0x000107914d34(uStack_60);
      if ((((bool)in_CY) && (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) &&
         (func_0x000107914200(), (bool)in_CY)) {
        func_0x0001079137b0();
        func_0x0001079110a0();
        if ((param_1 & 1) != 0) {
code_r0x000107910fa8:
          func_0x0001079141f0();
          iVar4 = (int)param_1;
          if (((bool)in_CY) && (bVar2 = 0x62 < unaff_x20, unaff_x20 < 100)) {
            func_0x000107914280();
            iVar4 = (int)param_1;
            if (!bVar2) goto code_r0x000107910fb0;
            func_0x0001079137c8();
            func_0x0001079110a0();
            if ((param_1 & 1) == 0) goto code_r0x000107910fe0;
          }
          else {
code_r0x000107910fb0:
            func_0x0001079142f0();
            func_0x000107911030();
            if (iVar4 == 0) goto code_r0x000107910fe0;
          }
          uVar5 = 1;
          goto code_r0x000107910fe4;
        }
      }
      else {
        func_0x0001079145ec();
        func_0x000107911030();
        if ((int)param_1 != 0) goto code_r0x000107910fa8;
      }
    }
    else {
      func_0x000107914d40();
      if (((((bool)in_CY) && (func_0x000107914210(), (bool)in_CY)) &&
          (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), (bool)in_CY)) {
        func_0x00010791682c();
        func_0x000107913840();
        func_0x0001079110a0();
        if ((int)param_1 != 0) {
          func_0x000107913828();
          func_0x0001079110a0();
          if ((param_1 & 1) != 0) goto code_r0x000107910f70;
        }
      }
      else {
        func_0x0001079145fc();
        func_0x000107911030();
        if ((int)param_1 != 0) {
          func_0x0001079142e0();
          func_0x000107911030();
          if ((int)param_1 != 0) goto code_r0x000107910f70;
        }
      }
    }
  }
  else {
    uVar3 = extraout_x9 - extraout_x8 == 0x80;
    uVar1 = 0;
    if ((ulong)(extraout_x9 - extraout_x8) < 0x80) {
code_r0x000107910e78:
      func_0x0001079142a0();
      func_0x000107911030();
      if ((int)param_1 != 0) {
code_r0x000107910eac:
        func_0x000107914220();
        in_CY = 0;
        if ((bool)uVar1) {
          func_0x0001079142c0();
          in_CY = 0;
          if ((bool)uVar1) {
            in_CY = 0x62 < unaff_x20;
            uVar3 = unaff_x20 == 99;
            if ((unaff_x20 < 100) && (func_0x000107914e9c(), (bool)in_CY)) {
              func_0x00010791683c();
              func_0x000107913810();
              func_0x0001079110a0();
              if ((int)param_1 != 0) {
                func_0x0001079137f8();
                func_0x0001079110a0();
                if ((param_1 & 1) != 0) goto code_r0x000107910f08;
              }
              goto code_r0x000107910fe0;
            }
          }
        }
        func_0x000107914290();
        func_0x000107911030();
        if ((int)param_1 != 0) {
          func_0x0001079142b0();
          func_0x000107911030();
          if ((int)param_1 != 0) goto code_r0x000107910f08;
        }
      }
    }
    else {
      uVar1 = 0x62 < unaff_x20;
      uVar3 = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107914230(), !(bool)uVar1)) goto code_r0x000107910e78;
      func_0x000107914d1c();
      func_0x000107913668();
      func_0x0001079110a0();
      if ((param_1 & 1) != 0) goto code_r0x000107910eac;
    }
  }
code_r0x000107910fe0:
  uVar5 = 0;
code_r0x000107910fe4:
  func_0x000107914e10();
  func_0x000107914df0();
  func_0x000107914dbc();
  func_0x000107914e18();
  func_0x000107914e20();
  func_0x000107914dc4();
  return uVar5;
}



/* Entry: 107911504; end: 10791153b;  */

void FUN_107911504(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107914c78();
  func_0x000107918678();
  func_0x0001079114b4();
  func_0x0001079114b4(unaff_x20 + 0x28,*(undefined8 *)(unaff_x19 + 0x18),
                      *(undefined8 *)(unaff_x19 + 0x20));
  func_0x000107917960();
  return;
}



/* Entry: 107911834; end: 107911847;  */

void FUN_107911834(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107911d08; end: 107911d5b;  */

void FUN_107911d08(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  func_0x000107915d78();
  if (!(bool)in_ZR) {
    func_0x000107914c78();
    lVar1 = extraout_x8;
    while (unaff_x21 != lVar1) {
      func_0x000107915d6c();
      lVar1 = extraout_x8_00;
      while (unaff_x21 = unaff_x22, unaff_x23 != lVar1) {
        func_0x00010791460c();
        func_0x000107911918();
        lVar1 = *(long *)(unaff_x20 + 8);
      }
    }
  }
  return;
}



/* Entry: 107912284; end: 1079122ab;  */

undefined1  [16] FUN_107912284(undefined8 param_1)

{
  undefined1 auStack_20 [16];
  
  func_0x000107917c60(0x7fffffff7fffffff,param_1,param_1);
  return auStack_20;
}



/* Entry: 107912794; end: 1079128ab;  */

void FUN_107912794(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *unaff_x19;
  undefined8 *puVar3;
  long *unaff_x20;
  
  func_0x000107914d64();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc();
  func_0x0001079172e4();
  puVar1 = (undefined8 *)unaff_x20[1];
  for (puVar3 = (undefined8 *)*unaff_x20; puVar3 != puVar1; puVar3 = puVar3 + 2) {
    func_0x000107914d7c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc();
    func_0x0001079172e4();
    func_0x000107915fe0(*puVar3);
    func_0x000107915724();
    func_0x0001004c3ca0();
    func_0x000107917db0();
    func_0x0001079172dc();
    func_0x000107915fe0(puVar3[1]);
    func_0x000107915724();
    func_0x0001004c3ca0();
    func_0x000107917db0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc();
    func_0x0001079172dc();
  }
  lVar2 = (long)*(char *)((long)unaff_x19 + 0x17);
  puVar3 = unaff_x19;
  if (lVar2 < 0) {
    puVar3 = (undefined8 *)*unaff_x19;
    lVar2 = unaff_x19[1];
  }
  *(undefined1 *)((long)puVar3 + lVar2 + -1) = 0x5d;
  return;
}



/* Entry: 107912bfc; end: 107912c4b;  */

long * FUN_107912bfc(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1);
    func_0x000107914d94();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107912e8c; end: 107912e8f;  */

void FUN_107912e8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 1079131fc; end: 1079131ff;  */

void FUN_1079131fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107914df8; end: 107914e0f;  */

/* WARNING: Possible PIC construction at 0x000107914e00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107914e04) */

void FUN_107914df8(void)

{
  byte bVar1;
  long *plVar2;
  byte bVar3;
  long lVar4;
  long unaff_x29;
  
  plVar2 = (long *)(unaff_x29 + -0xa0);
  bVar3 = 1;
  lVar4 = *plVar2;
  do {
    *plVar2 = lVar4 + 8;
    if (lVar4 + 8 != *(long *)(unaff_x29 + -0x90)) {
      return;
    }
    *plVar2 = *(long *)(unaff_x29 + -0x98);
    bVar1 = bVar3 & *(byte *)(unaff_x29 + -0x88);
    bVar3 = 0;
    lVar4 = *(long *)(unaff_x29 + -0x98);
  } while (bVar1 != 0);
  return;
}



/* Entry: 1079189d0; end: 107918a7f;  */

void FUN_1079189d0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_1109ea240;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_107918a80);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x000107918db4(&uStack_50);
  }
  func_0x000107918de0();
  return;
}



/* Entry: 107918da4; end: 107918db3;  */

void FUN_107918da4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109ea280;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107918fd8; end: 107919017;  */

void FUN_107918fd8(void)

{
  func_0x000107919134();
  return;
}



/* Entry: 10791935c; end: 10791939f;  */

void FUN_10791935c(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001079193fc();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    func_0x00010791bac4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107919590; end: 107919597; -[SCNSnapMapsSdkCMAnimationOptions minZoom] */

undefined8 FUN_107919590(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107919894; end: 1079199cf; -[SCNSnapMapsSdkCMCameraOptions initWithZoom:bearing:pitch:layerGate:] */

undefined1 *
FUN_107919894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f8d70;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107919b64; end: 107919b6f;  */

void FUN_107919b64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107919d34; end: 107919d3b;  */

void FUN_107919d34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 10791a01c; end: 10791a02b;  */

void FUN_10791a01c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109ea4d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10791a3f0; end: 10791a4cb; -[SCNSnapMapsSdkCameraManager moveToAnchor:anchorY:cameraOptions:animationOptions:] */

void FUN_10791a3f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *extraout_x8;
  long *plVar1;
  long unaff_x22;
  
  func_0x00010791afb4();
  func_0x00010791afec();
  plVar1 = *(long **)(param_3 + 0x18);
  func_0x00010791b0a0();
  func_0x00010791b088();
  func_0x00010791b10c(*(undefined8 *)(*plVar1 + 0x28));
  (*extraout_x8)(param_1,param_2);
  func_0x00010791afa4();
  func_0x0001001148fc(unaff_x22 + 0x30);
  func_0x00010791afac();
  func_0x00010791af9c();
  return;
}



/* Entry: 10791a8c8; end: 10791a913; -[SCNSnapMapsSdkCameraManager isGestureInProgress] */

void FUN_10791a8c8(void)

{
  long extraout_x8;
  
  func_0x00010791b058();
  (**(code **)(extraout_x8 + 0x68))();
  return;
}



/* Entry: 10791acec; end: 10791ad37; -[SCNSnapMapsSdkCameraManager isDefaultBearingAndPitch] */

void FUN_10791acec(void)

{
  long extraout_x8;
  
  func_0x00010791b058();
  (**(code **)(extraout_x8 + 0xa8))();
  return;
}



/* Entry: 10791b120; end: 10791b18b;  */

void FUN_10791b120(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d5638;
  _objc_alloc(PTR_PTR_1126d5638);
  lVar2 = param_1;
  func_0x0001001011a4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfff5e0(puVar1,param_2,lVar2,(long)*(int *)(param_1 + 0x18));
  func_0x00010791b18c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10791b404; end: 10791b407;  */

void FUN_10791b404(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ea608;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10791b628; end: 10791b68f;  */

void FUN_10791b628(void)

{
  func_0x00010791b9e8();
  func_0x00010791ba34();
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791bab8();
  func_0x00010bfc2fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791ba14();
  func_0x00010791ba7c();
  func_0x00010791ba44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10791b994; end: 10791b9a3;  */

void FUN_10791b994(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ea608;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10791bca0; end: 10791bd0f;  */

void FUN_10791bca0(void)

{
  func_0x00010791bde0();
  return;
}



/* Entry: 10791bfa0; end: 10791bfb3;  */

void FUN_10791bfa0(void)

{
  func_0x00010791c1c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10791c21c; end: 10791c2cb;  */

void FUN_10791c21c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_1109ea9e0;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_10791c2cc);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x00010791c5cc(&uStack_50);
  }
  func_0x00010791c5f8();
  return;
}



/* Entry: 10791c52c; end: 10791c5bb;  */

long FUN_10791c52c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109ea9e0;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    func_0x00010791c60c();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10791c7e8; end: 10791c7f3;  */

long FUN_10791c7e8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109eab18;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10791cadc; end: 10791cb0f;  */

void FUN_10791cadc(undefined8 *param_1)

{
  _objc_alloc(PTR_PTR_1126d55f0);
  func_0x00010c0541a0(*param_1,param_1[1],param_1[2],param_1[3]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10791cd48; end: 10791cd4b;  */

void FUN_10791cd48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109eac80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10791cfb8; end: 10791cfe3;  */

long FUN_10791cfb8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10791d114; end: 10791d11b; -[SCNSnapMapsSdkExternalCustomLayerRenderParameters zoom] */

undefined8 FUN_10791d114(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10791d5f8; end: 10791d6b7;  */

void FUN_10791d5f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  int iStack_30;
  
  uVar1 = param_1;
  func_0x000107932f68();
  func_0x000100291d50(&uStack_38,uVar1);
  func_0x00010b4d1758(param_1,uStack_38,iStack_30 - (int)uStack_38);
  func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2050;
  _objc_alloc(PTR_PTR_1126b2050);
  func_0x00010c008360();
  func_0x00010791d768();
  func_0x000100100fec(&uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10791d9d0; end: 10791d9d7; -[SCNSnapMapsSdkFeatureDescriptor interactionLabels] */

undefined8 FUN_10791d9d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10791dc24; end: 10791dd63; -[SCNSnapMapsSdkFontDescriptor initWithFamily:weight:style:fontData:] */

undefined1 *
FUN_10791dc24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f8da8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x00010791ddc8(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x00010791ddc8(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010791ddc8(uVar3);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10791de88; end: 10791df83;  */

void FUN_10791de88(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109eae08;
  puVar4[3] = &PTR_DAT_1109eae88;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_DAT_1109eae58;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  func_0x00010791e60c(&uStack_50);
  return;
}



/* Entry: 10791e17c; end: 10791e40f;  */

void FUN_10791e17c(long *param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_1b8 [88];
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [16];
  long lStack_108;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar3 = param_2;
  func_0x00010bf529e0();
  plVar7 = param_1 + 2;
  if ((ulong)((*plVar7 - *param_1) / 0x58) < uVar3) {
    if (0x2e8ba2e8ba2e8ba < uVar3) goto LAB_10791e3b0;
    func_0x00010791e4e0(auStack_1b8,uVar3,(param_1[1] - *param_1) / 0x58,plVar7);
    func_0x00010791e424(param_1,auStack_1b8);
    func_0x00010791e5b4(auStack_1b8);
  }
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uVar3 = param_2;
  _objc_retain();
  func_0x00010791e63c();
  if (uVar3 != 0) {
    lVar9 = *plStack_150;
    do {
      uVar10 = 0;
      do {
        if (*plStack_150 != lVar9) {
          _objc_enumerationMutation(param_2);
        }
        uVar8 = *(ulong *)(lStack_158 + uVar10 * 8);
        _objc_retain(uVar8);
        func_0x00010791da5c(auStack_1b8,uVar8);
        uVar4 = param_1[1];
        if (uVar4 < (ulong)param_1[2]) {
          func_0x00010791e55c(uVar4,auStack_1b8);
          lVar6 = uVar4 + 0x58;
        }
        else {
          lVar6 = (long)(uVar4 - *param_1) / 0x58;
          uVar4 = lVar6 + 1;
          if (0x2e8ba2e8ba2e8ba < uVar4) {
            func_0x00010791e410();
            goto LAB_10791e3b4;
          }
          uVar1 = (param_1[2] - *param_1) / 0x58;
          uVar5 = uVar1 * 2;
          if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
            uVar5 = uVar4;
          }
          if (0x1745d1745d1745c < uVar1) {
            uVar5 = 0x2e8ba2e8ba2e8ba;
          }
          func_0x00010791e4e0(auStack_118,uVar5,lVar6,plVar7);
          func_0x00010791e55c(lStack_108,auStack_1b8);
          lStack_108 = lStack_108 + 0x58;
          func_0x00010791e424(param_1,auStack_118);
          lVar6 = param_1[1];
          func_0x00010791e5b4(auStack_118);
        }
        param_1[1] = lVar6;
        func_0x0001072af620(auStack_1b8);
        _objc_release();
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar3);
      func_0x00010791e63c();
      uVar3 = uVar8;
    } while (uVar8 != 0);
  }
  func_0x00010791e650();
  func_0x00010791e650();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_10791e3b0:
  func_0x00010791e410();
LAB_10791e3b4:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10791e3b8);
  (*pcVar2)();
}



/* Entry: 10791e634; end: 10791e67f;  */

void FUN_10791e634(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10791e750; end: 10791e7ff;  */

void FUN_10791e750(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_1109eaf00;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_10791e800);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x00010791eb98(&uStack_50);
  }
  func_0x00010791ebc4();
  return;
}



/* Entry: 10791eb88; end: 10791eb97;  */

void FUN_10791eb88(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109eaf40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10791ec90; end: 10791ed47;  */

void FUN_10791ec90(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_1109eb028;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_10791ed48);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x00010791efc4(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10791efb4; end: 10791efc3;  */

void FUN_10791efb4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109eb068;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10791f1cc; end: 10791f20b;  */

void FUN_10791f1cc(void)

{
  func_0x00010791f438();
  return;
}



/* Entry: 10791f4bc; end: 10791f553; -[SCNSnapMapsSdkInputManager addSingleClickListener:groups:] */

void FUN_10791f4bc(void)

{
  long unaff_x21;
  long *plVar1;
  
  func_0x00010791f8b4();
  func_0x00010791f974();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010791f928();
  func_0x00010791f91c();
  func_0x00010791f8c8(*(undefined8 *)(*plVar1 + 0x10));
  func_0x00010791f8f8();
  func_0x00010791f934();
  func_0x00010791f93c();
  func_0x00010791f944();
  return;
}



/* Entry: 10791f818; end: 10791f887;  */

void FUN_10791f818(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126d5678;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010791f90c();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010791f888(&uStack_30);
  return;
}



/* Entry: 10791fcc0; end: 10791fceb;  */

void FUN_10791fcc0(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010791fd84();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107920084; end: 107920087;  */

void FUN_107920084(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109eb2c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107920254; end: 10792027f;  */

long FUN_107920254(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1079204d4; end: 107920503; -[SCNSnapMapsSdkLatLngBoundsDouble .cxx_destruct] */

void FUN_1079204d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079206c0; end: 107920743; +[SCNSnapMapsSdkMapSdk setDefaultInstance:] */

void FUN_1079206c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [16];
  
  func_0x000107921fd0();
  func_0x000107920700(auStack_30,param_3);
  func_0x0001072a1d50(auStack_30);
  func_0x00010725afa0(auStack_30);
  func_0x000107921fa0();
  return;
}



/* Entry: 107920a34; end: 107920ca7; -[SCNSnapMapsSdkMapSdk initialize:authContextProviders:publicUserInfoProvider:dateTimeFormatter:contentObjectResolver:bitmojiFetcher:fontProvider:crashLoggingProvider:] */

void FUN_107920a34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long *plVar1;
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [40];
  undefined1 auStack_120 [192];
  
  func_0x000107921fd0();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107920ca8(auStack_120,param_3);
  func_0x000107920d30(auStack_148,param_4);
  func_0x0001079284f0(auStack_158,param_5);
  func_0x00010791c620(auStack_168,param_6);
  func_0x00010791bdec(auStack_178,param_7);
  func_0x00010792c428(auStack_188,param_8);
  func_0x000107920e30(auStack_198,param_9);
  func_0x000107920e6c(auStack_1a8,param_10);
  (**(code **)(*plVar1 + 0x20))
            (plVar1,auStack_120,auStack_148,auStack_158,auStack_168,auStack_178,auStack_188,
             auStack_198,auStack_1a8);
  func_0x0001072adad8(auStack_1a8);
  func_0x0001072a8dec(auStack_198);
  func_0x0001072adb8c(auStack_188);
  func_0x00010726ee4c(auStack_178);
  func_0x0001072ac94c(auStack_168);
  func_0x00010726ee28(auStack_158);
  func_0x0001072aa7e4(auStack_148);
  func_0x00010793c9d8(auStack_120);
  func_0x000107922084();
  func_0x00010792208c();
  func_0x000107922094();
  func_0x00010792209c();
  _objc_release(param_6);
  func_0x000107922100();
  func_0x00010792203c();
  func_0x000107921fa0();
  return;
}



/* Entry: 107921278; end: 1079212fb; -[SCNSnapMapsSdkMapSdk initializeFromBuilder:] */

void FUN_107921278(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x000107921f90();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_107922970(auStack_40);
  func_0x0001079220f4(*(undefined8 *)(*plVar1 + 0x30));
  func_0x0001072b0cc8(auStack_40);
  func_0x000107921fa0();
  return;
}



/* Entry: 107921760; end: 1079217d7;  */

void FUN_107921760(long param_1,long param_2)

{
  int extraout_w10;
  undefined8 unaff_x19;
  long lStack_38;
  long lStack_30;
  undefined **ppuStack_28;
  
  if (param_1 == 0) {
    unaff_x19 = 0;
  }
  else {
    ppuStack_28 = &PTR_DAT_1109eb378;
    lStack_38 = param_1;
    lStack_30 = param_2;
    if (param_2 != 0) {
      do {
        func_0x000107922004();
      } while (extraout_w10 != 0);
    }
    func_0x00010015c218(&ppuStack_28,&lStack_38,&UNK_10792186c);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107922078();
    func_0x0001000df524();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 107921a1c; end: 107921a3b;  */

void FUN_107921a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107921a3c(param_1,param_2,param_2,param_3);
  return;
}



/* Entry: 107921f78; end: 107922187;  */

undefined8 FUN_107921f78(undefined8 param_1)

{
  func_0x00010725c0a0();
  if ((undefined1 *)register0x00000008 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107922510; end: 1079225a3; -[SCNSnapMapsSdkMapSdkInitializationParamsBuilder dateTimeFormatter:] */

void FUN_107922510(void)

{
  long unaff_x19;
  long *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107922b38();
  func_0x000107922b8c();
  if (unaff_x19 == 0) {
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x000107922bd0();
    func_0x00010791c620();
  }
  func_0x000107922b84();
  func_0x000107922b58(*(undefined8 *)(*unaff_x20 + 0x30));
  func_0x0001072ac94c(&uStack_40);
  func_0x000107922b84();
  return;
}



/* Entry: 107922970; end: 1079229bf;  */

void FUN_107922970(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x000107922bc0();
      } while (extraout_w10 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107922dcc; end: 107922dcf;  */

void FUN_107922dcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109eb460;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107923024; end: 10792303f;  */

void FUN_107923024(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1079234d8; end: 107923563; -[SCNSnapMapsSdkMapSdkSession registerObserver:] */

void FUN_1079234d8(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x000107926564();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107922c1c(auStack_40);
  func_0x000107926700(*(undefined8 *)(*plVar1 + 0x30));
  func_0x0001072bca58(auStack_40);
  func_0x000107926620();
  return;
}



/* Entry: 107923940; end: 1079239b7; -[SCNSnapMapsSdkMapSdkSession deregisterAuthContextProvider:] */

void FUN_107923940(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x000107926564();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107926648();
  func_0x0001079265f8(*(undefined8 *)(*plVar1 + 0x70));
  func_0x0001079266f0();
  func_0x000107926620();
  return;
}



/* Entry: 107923fc8; end: 10792410f; -[SCNSnapMapsSdkMapSdkSession getFeatures:] */

void FUN_107923fc8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long *plVar2;
  undefined1 auStack_70 [24];
  long lStack_58;
  long lStack_50;
  
  func_0x000107926564();
  plVar2 = *(long **)(unaff_x20 + 0x18);
  func_0x0001079266b0(auStack_70);
  (**(code **)(*plVar2 + 0xa8))(&lStack_58,plVar2,auStack_70);
  func_0x000107926754();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  for (; lStack_58 != lStack_50; lStack_58 = lStack_58 + 0x58) {
    FUN_10791d5f8(lStack_58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    func_0x000107926734();
  }
  func_0x00010bf51e00(puVar1);
  func_0x0001079266a0();
  func_0x0001072ba554(&lStack_58);
  func_0x000107926620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079244fc; end: 1079245a3; -[SCNSnapMapsSdkMapSdkSession getImagePixelRatio:] */

void FUN_1079244fc(void)

{
  long *plVar1;
  long unaff_x20;
  long *plVar2;
  undefined1 auStack_50 [24];
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  func_0x000107926564();
  plVar2 = *(long **)(unaff_x20 + 0x18);
  func_0x0001079266b0(auStack_50);
  plVar1 = plVar2;
  (**(code **)(*plVar2 + 0xe8))(plVar2,auStack_50);
  uStack_38 = SUB84(plVar1,0);
  uStack_34 = (undefined1)((ulong)plVar1 >> 0x20);
  func_0x000107926754();
  func_0x0001079245a4(&uStack_38);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001079265b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar2);
  return;
}



/* Entry: 107924cc4; end: 107924d3b; -[SCNSnapMapsSdkMapSdkSession removeExternalLayer:] */

void FUN_107924cc4(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x000107926564();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107926648();
  func_0x0001079265f8(*(undefined8 *)(*plVar1 + 0x110));
  func_0x0001079266f0();
  func_0x000107926620();
  return;
}



/* Entry: 1079252b8; end: 107925303; -[SCNSnapMapsSdkMapSdkSession setFriendsLoaded:] */

void FUN_1079252b8(void)

{
  long extraout_x8;
  
  func_0x000107926690();
  (**(code **)(extraout_x8 + 0x148))();
  return;
}



/* Entry: 107925878; end: 10792595b; -[SCNSnapMapsSdkMapSdkSession getMapBrowsingContext] */

void FUN_107925878(void)

{
  undefined1 *puVar1;
  undefined1 auStack_60 [32];
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  puVar1 = auStack_60;
  func_0x0001079266cc();
  func_0x00010792675c();
  func_0x000107941304(auStack_60);
  func_0x000100291d50(auStack_38,puVar1);
  func_0x000107926954();
  func_0x0001079268ac();
  func_0x00010bf64a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_alloc(PTR_PTR_1126b1df8);
  uStack_40 = 0;
  func_0x0001079267f0();
  func_0x0001079265b8();
  func_0x00010792685c();
  func_0x000107926828();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107925df4; end: 1079260b3; -[SCNSnapMapsSdkMapSdkSession updateOverlayFrames:] */

void FUN_107925df4(undefined8 param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  code *pcVar1;
  undefined1 in_ZR;
  long **pplVar2;
  undefined8 extraout_x8;
  long unaff_x20;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  long *plVar6;
  long lVar7;
  long **pplVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined8 uStack_88;
  
  func_0x00010792673c();
  uStack_88 = extraout_x8;
  func_0x000107926640();
  plVar3 = *(long **)(unaff_x20 + 0x18);
  func_0x000107926780();
  plStack_180 = (long *)0x0;
  plStack_178 = (long *)0x0;
  plStack_188 = (long *)0x0;
  func_0x000107926884();
  pplVar2 = (long **)0x0;
  if (param_5 != 0) {
    if (param_5 >> 0x3b != 0) goto LAB_107926034;
    func_0x0001072ffdcc(&plStack_108,param_5,0,&plStack_178);
    plVar4 = (long *)((long)plStack_100 - ((long)plStack_180 - (long)plStack_188));
    _memcpy(plVar4);
    plVar9 = plStack_178;
    plStack_178 = plStack_f0;
    plStack_180 = plStack_f8;
    plStack_f8 = plStack_188;
    plStack_f0 = plVar9;
    plStack_108 = plStack_188;
    plStack_100 = plStack_188;
    pplVar2 = &plStack_108;
    plStack_188 = plVar4;
    func_0x0001072ffe54();
  }
  plVar9 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  func_0x000107926780();
  func_0x0001079265c4();
  if (pplVar2 != (long **)0x0) {
    lVar7 = *plStack_160;
    do {
      pplVar8 = (long **)0x0;
      do {
        lVar10 = param_2;
        lVar11 = param_3;
        lVar12 = param_4;
        if (*plStack_160 != lVar7) {
          func_0x00010792687c();
          lVar10 = param_2;
          lVar11 = param_3;
          lVar12 = param_4;
        }
        pplVar5 = *(long ***)(lStack_168 + (long)pplVar8 * 8);
        func_0x00010792683c();
        func_0x000107928884();
        param_2 = lVar10;
        param_3 = lVar11;
        param_4 = lVar12;
        if (plStack_180 < plStack_178) {
          *plStack_180 = (long)plVar9;
          plStack_180[1] = lVar10;
          plVar4 = plStack_180 + 4;
          plStack_180[2] = lVar11;
          plStack_180[3] = lVar12;
        }
        else {
          pplVar5 = &plStack_188;
          func_0x0001072ffd80(pplVar5,((long)plStack_180 - (long)plStack_188 >> 5) + 1);
          func_0x0001072ffdcc(&plStack_130,pplVar5,(long)plStack_180 - (long)plStack_188 >> 5,
                              &plStack_178);
          *plStack_120 = (long)plVar9;
          plStack_120[1] = lVar10;
          plStack_120[2] = lVar11;
          plStack_120[3] = lVar12;
          plStack_120 = plStack_120 + 4;
          plVar6 = (long *)((long)plStack_128 - ((long)plStack_180 - (long)plStack_188));
          _memcpy(plVar6);
          plVar4 = plStack_120;
          plVar9 = plStack_178;
          plStack_178 = plStack_118;
          plStack_180 = plStack_120;
          plStack_120 = plStack_188;
          plStack_118 = plVar9;
          plStack_130 = plStack_188;
          plStack_128 = plStack_188;
          pplVar5 = &plStack_130;
          plStack_188 = plVar6;
          func_0x0001072ffe54();
          plVar9 = plVar4;
        }
        plStack_180 = plVar4;
        func_0x000107926734();
        pplVar8 = (long **)((long)pplVar8 + 1);
        in_ZR = pplVar8 == pplVar2;
      } while (pplVar8 < pplVar2);
      func_0x0001079265c4();
      pplVar2 = pplVar5;
    } while (pplVar5 != (long **)0x0);
  }
  func_0x000107926620();
  func_0x000107926620();
  (**(code **)(*plVar3 + 0x1c8))(plVar3,&plStack_188);
  func_0x0001079268e0();
  func_0x000107926620();
  func_0x0001079266b8(uStack_88);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_107926034:
  func_0x0001072ffdc0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x107926090);
  (*pcVar1)();
}



/* Entry: 107926310; end: 107926387;  */

long FUN_107926310(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107926a30; end: 107926b2f;  */

void FUN_107926a30(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109eb5a8;
  puVar4[3] = &PTR_DAT_1109eb628;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_DAT_1109eb5f8;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  func_0x000107926d90(&uStack_50);
  return;
}



/* Entry: 107926d80; end: 107926d8f;  */

void FUN_107926d80(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109eb5a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107926fe8; end: 10792702b; -[SCNSnapMapsSdkMemoriesFetcherCallback .cxx_construct] */

undefined8 * FUN_107926fe8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107927110();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 107927338; end: 107927383; -[SCNSnapMapsSdkParticleEffectImageLoaderObserver .cxx_construct] */

undefined8 * FUN_107927338(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  func_0x00010015c19c();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 107927664; end: 107927673;  */

void FUN_107927664(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109eb6f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1079278d4; end: 10792796b; -[SCNSnapMapsSdkPlaceManager setVisibleAnnotations:] */

void FUN_1079278d4(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107927b14();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x0001000fbed0(auStack_48);
  func_0x000107927b34(*(undefined8 *)(*plVar1 + 0x30));
  func_0x0001000e30f4(auStack_48);
  func_0x000107927b40();
  return;
}



/* Entry: 107927c0c; end: 107927c57; -[SCNSnapMapsSdkPoint2dDouble initWithX:y:] */

void FUN_107927c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8e10;
  uStack_30 = param_3;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
  }
  return;
}



/* Entry: 10792811c; end: 1079281a3; -[SCNSnapMapsSdkPublicUserInfoCallback .cxx_construct] */

undefined8 * FUN_10792811c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_107928494();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 107928494; end: 1079284ef;  */

void FUN_107928494(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10792879c; end: 10792882b;  */

long FUN_10792879c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109eb7f8;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    func_0x00010792887c();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 1079289ac; end: 1079289b3; -[SCNSnapMapsSdkRect left] */

undefined8 FUN_1079289ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107928c24; end: 107928c9b;  */

void FUN_107928c24(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_1109eb8c8;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000107928d10();
    } while (extraout_w10 != 0);
  }
  func_0x00010015c218(&ppuStack_28,&uStack_40,&UNK_107928c9c);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107928d3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107928e6c; end: 107928e77;  */

void FUN_107928e6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107929148; end: 10792915b;  */

void FUN_107929148(void)

{
  func_0x00010792927c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1079292c4; end: 10792937b;  */

void FUN_1079292c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d56f8;
  _objc_alloc(PTR_PTR_1126d56f8);
  lVar2 = param_1;
  func_0x0001006a7df8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x20;
  func_0x0001006a7df8(lVar3);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x40;
  func_0x0001006a7df8(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c017ce0(puVar1,param_2,lVar2,lVar3,param_1);
  func_0x00010792938c();
  func_0x000107929384();
  func_0x00010792937c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107929504; end: 107929537;  */

void FUN_107929504(void)

{
  _objc_alloc(PTR_PTR_1126d5700);
  func_0x00010c063640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


