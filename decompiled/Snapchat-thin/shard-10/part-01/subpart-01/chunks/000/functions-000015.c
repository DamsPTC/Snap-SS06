/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10790a4a4; end: 10790a51f;  */

bool FUN_10790a4a4(long *param_1,long *param_2,long param_3,long param_4)

{
  if (((*param_1 == *param_2) && (param_1[2] == param_2[2])) && (param_1[1] == param_2[1])) {
    if (*param_1 == 0) {
      func_0x00010790a520(param_3,param_1,param_2[3]);
    }
    else {
      func_0x00010790a558(param_4,param_1,param_2[3]);
      param_3 = param_4;
    }
    return param_3 < 2;
  }
  return false;
}



/* Entry: 10790ae44; end: 10790af4b;  */

void FUN_10790ae44(long param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  func_0x000107913ca4();
  bVar7 = param_2 - 2U == 0;
  if (1 < param_2) {
    uVar8 = param_2 - 2U >> 1;
    uVar1 = (long)param_3 - param_1 >> 4;
    bVar7 = uVar8 == uVar1;
    if ((long)uVar1 <= (long)uVar8) {
      lVar11 = (long)param_3 - param_1 >> 3;
      uVar1 = lVar11 + 1;
      puVar10 = (undefined8 *)(param_1 + uVar1 * 0x10);
      uVar4 = lVar11 + 2;
      uVar12 = uVar1;
      if ((long)uVar4 < param_2) {
        piVar2 = (int *)((long)puVar10 + 0xc);
        piVar3 = (int *)((long)puVar10 + 0x1c);
        lVar11 = 0x10;
        if (*piVar2 <= *piVar3) {
          lVar11 = 0;
        }
        puVar10 = (undefined8 *)((long)puVar10 + lVar11);
        uVar12 = uVar4;
        if (*piVar2 <= *piVar3) {
          uVar12 = uVar1;
        }
      }
      iVar5 = *(int *)((long)param_3 + 0xc);
      bVar7 = *(int *)((long)puVar10 + 0xc) == iVar5;
      if (*(int *)((long)puVar10 + 0xc) <= iVar5) {
        uVar13 = *param_3;
        uVar6 = *(undefined4 *)(param_3 + 1);
        do {
          puVar9 = puVar10;
          uVar14 = *puVar9;
          param_3[1] = puVar9[1];
          *param_3 = uVar14;
          bVar7 = uVar8 == uVar12;
          if ((long)uVar8 < (long)uVar12) break;
          uVar4 = uVar12 << 1 | 1;
          puVar10 = (undefined8 *)(param_1 + uVar4 * 0x10);
          uVar1 = uVar12 * 2 + 2;
          uVar12 = uVar4;
          if ((long)uVar1 < param_2) {
            piVar2 = (int *)((long)puVar10 + 0xc);
            piVar3 = (int *)((long)puVar10 + 0x1c);
            lVar11 = 0x10;
            if (*piVar2 <= *piVar3) {
              lVar11 = 0;
            }
            puVar10 = (undefined8 *)((long)puVar10 + lVar11);
            uVar12 = uVar1;
            if (*piVar2 <= *piVar3) {
              uVar12 = uVar4;
            }
          }
          bVar7 = *(int *)((long)puVar10 + 0xc) == iVar5;
          param_3 = puVar9;
        } while (*(int *)((long)puVar10 + 0xc) <= iVar5);
        *puVar9 = uVar13;
        *(undefined4 *)(puVar9 + 1) = uVar6;
        *(int *)((long)puVar9 + 0xc) = iVar5;
      }
    }
  }
  func_0x000107913564(extraout_x8);
  if (!bVar7) {
    ___stack_chk_fail();
    func_0x0001078efde4();
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    return;
  }
  return;
}



/* Entry: 10790b2b8; end: 10790b2e3;  */

void FUN_10790b2b8(void)

{
  undefined1 in_ZR;
  
  func_0x000107918910();
  if (!(bool)in_ZR) {
    return;
  }
  return;
}



/* Entry: 10790bc58; end: 10790bc97;  */

void FUN_10790bc58(long *param_1,long param_2,long param_3,long param_4,undefined8 *param_5)

{
  ulong uVar1;
  long lVar2;
  
  if (-1 < param_2) {
    param_1 = (long *)(param_1[3] + param_2 * 0x18);
  }
  uVar1 = (param_1[1] - *param_1 >> 3) - 1;
  lVar2 = 0;
  if (uVar1 != 0) {
    lVar2 = (param_4 + param_3) / (long)uVar1;
  }
  lVar2 = (param_4 + param_3) - lVar2 * uVar1;
  *param_5 = *(undefined8 *)(*param_1 + ((uVar1 & lVar2 >> 0x3f) + lVar2) * 8);
  return;
}



/* Entry: 10790cb70; end: 10790cceb;  */

void FUN_10790cb70(int param_1)

{
  int unaff_w22;
  int unaff_w23;
  
  func_0x0001079189bc();
  func_0x000107913a74();
  func_0x00010790ca7c();
  func_0x000107914bfc();
  func_0x000107917d0c();
  if (param_1 != 0) {
    func_0x0001079141e4(&stack0x00000008);
    func_0x000107915320();
    func_0x000107914ab4();
    func_0x000107914ab4();
    func_0x000107914bfc();
    func_0x000107916808();
    if (unaff_w23 != 0) {
      func_0x000107914144(&stack0x00000008);
      func_0x0001079141e4();
      func_0x000107914ab4();
      func_0x000107914bfc();
      func_0x0001079167e4();
      if (unaff_w22 != 0) {
        func_0x000107914010(&stack0x00000008);
        func_0x000107914144();
        func_0x000107915724();
        func_0x000107914ab4();
      }
    }
  }
  return;
}



/* Entry: 10790d190; end: 10790d2ef;  */

void FUN_10790d190(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  char in_NG;
  undefined1 in_ZR;
  undefined1 uVar5;
  char in_OV;
  bool bVar6;
  ulong extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar7;
  long extraout_x9;
  long extraout_x10;
  long extraout_x11;
  long extraout_x13;
  undefined8 *puVar8;
  undefined8 *unaff_x22;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  func_0x000107915994();
  func_0x0001079173fc();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x0001079173ec();
    if ((bool)in_ZR) {
      func_0x00010791640c();
    }
    *param_4 = param_5;
    puVar1 = unaff_x22 + 5;
    puVar9 = (undefined8 *)param_4[1];
    while (puVar9 != param_4 + 2) {
      func_0x000107913d6c(puVar9[4]);
      puVar9 = (undefined8 *)(extraout_x9 + (extraout_x8 & 0xf) * 0x160);
      if ((*(byte *)(puVar9 + 3) & 1) == 0) {
        iVar3 = *(int *)(puVar9 + 4);
        iVar4 = *(int *)(puVar9 + 0x18);
        if (iVar3 != 3 || iVar4 != 3) {
          if ((long)puVar9[2] < 1) {
            if (iVar3 == 1) {
              if (iVar4 != 1) goto LAB_10790d270;
            }
            else if (iVar3 != 2 || iVar4 != 2) {
LAB_10790d270:
              for (lVar11 = 0x20; bVar6 = lVar11 == 0x160, !bVar6; lVar11 = lVar11 + 0xa0) {
                func_0x000107914bdc((undefined1 *)((long)puVar9 + lVar11));
                uVar5 = (bVar6 && extraout_x8_00 == extraout_x11) && extraout_x10 == extraout_x13;
                puVar7 = puVar1;
                puVar10 = puVar1;
                if ((!bVar6 || extraout_x8_00 != extraout_x11) || extraout_x10 != extraout_x13) {
                  while (puVar8 = (undefined8 *)*puVar7, puVar8 != (undefined8 *)0x0) {
                    param_1 = puVar8 + 4;
                    func_0x000107918928(param_1,&stack0x00000018);
                    lVar2 = 8;
                    if ((bool)uVar5) {
                      lVar2 = 0;
                    }
                    puVar7 = (undefined8 *)((long)puVar8 + lVar2);
                    if ((bool)uVar5) {
                      puVar10 = puVar8;
                    }
                  }
                  if (puVar1 != puVar10) {
                    param_1 = (undefined8 *)&stack0x00000018;
                    func_0x0001078ee35c(param_1,puVar10 + 4);
                    if (((ulong)param_1 & 1) == 0) {
                      param_1 = unaff_x22;
                      FUN_10790d190();
                    }
                  }
                }
              }
            }
          }
          else if ((iVar3 != 2 || iVar4 != 2) &&
                  (param_1 = puVar9, func_0x00010790afe0(puVar9,2,1), ((ulong)param_1 & 1) == 0))
          goto LAB_10790d270;
        }
      }
      func_0x00010791598c();
      puVar9 = param_1;
    }
  }
  return;
}



/* Entry: 10790eba8; end: 10790ecb7;  */

void FUN_10790eba8(long *param_1,long param_2,ulong param_3,long param_4,long *param_5)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  int *in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined1 in_stack_00000028;
  
  func_0x000107915994();
  if (-1 < param_2) {
    param_1 = (long *)(param_1[3] + param_2 * 0x18);
  }
  lVar6 = 0;
  in_stack_00000018 = *param_1;
  in_stack_00000020 = param_1[1];
  in_stack_00000010 = (int *)(in_stack_00000018 + (param_3 + 1) * 8);
  in_stack_00000028 = 0;
  lVar1 = param_4 + ~param_3 + (in_stack_00000020 - in_stack_00000018 >> 3);
  if ((long)param_3 < param_4) {
    lVar1 = param_4 - (param_3 + 1);
  }
  do {
    if (lVar1 < lVar6) {
      return;
    }
    piVar2 = (int *)*param_5;
    if ((param_5[1] - (long)piVar2 != 8) ||
       (*piVar2 != *in_stack_00000010 || piVar2[1] != in_stack_00000010[1])) {
      while( true ) {
        iVar5 = (int)param_1;
        func_0x000107914d7c();
        func_0x000107903230();
        lVar3 = *param_5;
        lVar4 = param_5[1];
        if ((ulong)(lVar4 - lVar3) < 0x11) break;
        func_0x000107915034();
        func_0x0001079172b8();
        if (iVar5 != 0) break;
        func_0x000107915034();
        func_0x00010790ceb4();
        if (0 < iVar5) break;
        param_1 = param_5;
        func_0x00010790ead0(param_5,(lVar4 - lVar3 >> 3) + -2);
      }
    }
    lVar6 = lVar6 + 1;
    param_1 = (long *)&stack0x00000010;
    func_0x0001079092b0();
  } while( true );
}



/* Entry: 10790f004; end: 10790f0e3;  */

void FUN_10790f004(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x10;
  
  func_0x000107917aac();
  func_0x00010791375c();
  if ((bool)in_ZR) {
    func_0x0001079165ec();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x0001079165e0(extraout_x8 - extraout_x10 >> 2);
      func_0x00010790f2b4();
      func_0x000107913404();
      func_0x00010790f290();
      func_0x0001079135c0();
      func_0x00010790f300();
    }
    else {
      func_0x000107913778();
      if (!(bool)in_ZR) {
        func_0x000107914138();
      }
      func_0x00010791461c();
    }
  }
  func_0x000107915e84();
  return;
}



/* Entry: 10790f620; end: 10790f6ff;  */

ulong FUN_10790f620(ulong param_1)

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
          func_0x00010790f3ec();
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
LAB_10790f694:
    func_0x00010791658c();
    func_0x000107914dd4();
    func_0x00010790f794();
    if ((int)param_1 != 0) {
      func_0x0001079165f8();
      func_0x000107914dd4();
      func_0x00010790f794();
      goto LAB_10790f6d4;
    }
  }
  else {
    func_0x000107917310();
    func_0x000107915144();
    func_0x000107914dd4();
    func_0x00010790f794();
    if ((int)param_1 != 0) {
      func_0x0001079148c4();
      func_0x000107915314();
      func_0x00010790f7c0();
      if ((int)param_1 != 0) {
        func_0x0001079148b4();
        func_0x000107915314();
        func_0x00010790f7c0();
        if ((param_1 & 1) != 0) goto LAB_10790f694;
      }
    }
  }
  param_1 = 0;
LAB_10790f6d4:
  func_0x0001079151e0();
  func_0x00010791518c();
  func_0x000107915024();
  return param_1;
}



/* Entry: 10790fc50; end: 10790fcb3;  */

undefined8 FUN_10790fc50(ulong param_1)

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
  FUN_107906fdc();
  func_0x000107913304();
  func_0x0001079133b4();
  func_0x000107913398();
  func_0x000107915afc();
  uVar3 = 1;
  if ((bool)in_ZR) {
code_r0x00010790f8c0:
    func_0x000107915a78();
    if ((bool)uVar3) {
code_r0x00010790f928:
      func_0x000107914d34(uStack_60);
      if ((((bool)in_CY) && (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) &&
         (func_0x000107914200(), (bool)in_CY)) {
        func_0x0001079137b0();
        func_0x00010790fa58();
        if ((param_1 & 1) != 0) {
code_r0x00010790f960:
          func_0x0001079141f0();
          iVar4 = (int)param_1;
          if (((bool)in_CY) && (bVar2 = 0x62 < unaff_x20, unaff_x20 < 100)) {
            func_0x000107914280();
            iVar4 = (int)param_1;
            if (!bVar2) goto code_r0x00010790f968;
            func_0x0001079137c8();
            func_0x00010790fa58();
            if ((param_1 & 1) == 0) goto code_r0x00010790f998;
          }
          else {
code_r0x00010790f968:
            func_0x0001079142f0();
            func_0x00010790f9e8();
            if (iVar4 == 0) goto code_r0x00010790f998;
          }
          uVar5 = 1;
          goto code_r0x00010790f99c;
        }
      }
      else {
        func_0x0001079145ec();
        func_0x00010790f9e8();
        if ((int)param_1 != 0) goto code_r0x00010790f960;
      }
    }
    else {
      func_0x000107914d40();
      if (((((bool)in_CY) && (func_0x000107914210(), (bool)in_CY)) &&
          (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), (bool)in_CY)) {
        func_0x00010791682c();
        func_0x000107913840();
        func_0x00010790fa58();
        if ((int)param_1 != 0) {
          func_0x000107913828();
          func_0x00010790fa58();
          if ((param_1 & 1) != 0) goto code_r0x00010790f928;
        }
      }
      else {
        func_0x0001079145fc();
        func_0x00010790f9e8();
        if ((int)param_1 != 0) {
          func_0x0001079142e0();
          func_0x00010790f9e8();
          if ((int)param_1 != 0) goto code_r0x00010790f928;
        }
      }
    }
  }
  else {
    uVar3 = extraout_x9 - extraout_x8 == 0x80;
    uVar1 = 0;
    if ((ulong)(extraout_x9 - extraout_x8) < 0x80) {
code_r0x00010790f830:
      func_0x0001079142a0();
      func_0x00010790f9e8();
      if ((int)param_1 != 0) {
code_r0x00010790f864:
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
              func_0x00010790fa58();
              if ((int)param_1 != 0) {
                func_0x0001079137f8();
                func_0x00010790fa58();
                if ((param_1 & 1) != 0) goto code_r0x00010790f8c0;
              }
              goto code_r0x00010790f998;
            }
          }
        }
        func_0x000107914290();
        func_0x00010790f9e8();
        if ((int)param_1 != 0) {
          func_0x0001079142b0();
          func_0x00010790f9e8();
          if ((int)param_1 != 0) goto code_r0x00010790f8c0;
        }
      }
    }
    else {
      uVar1 = 0x62 < unaff_x20;
      uVar3 = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107914230(), !(bool)uVar1)) goto code_r0x00010790f830;
      func_0x000107914d1c();
      func_0x000107913668();
      func_0x00010790fa58();
      if ((param_1 & 1) != 0) goto code_r0x00010790f864;
    }
  }
code_r0x00010790f998:
  uVar5 = 0;
code_r0x00010790f99c:
  func_0x000107914e10();
  func_0x000107914df0();
  func_0x000107914dbc();
  func_0x000107914e18();
  func_0x000107914e20();
  func_0x000107914dc4();
  return uVar5;
}



/* Entry: 1079107a8; end: 107910817;  */

void FUN_1079107a8(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x10;
  
  func_0x000107917aac();
  func_0x00010791375c();
  if ((bool)in_ZR) {
    func_0x0001079165ec();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x0001079165e0(extraout_x8 - extraout_x10 >> 2);
      func_0x00010791083c();
      func_0x000107913404();
      func_0x000107910818();
      func_0x0001079135c0();
      func_0x000107910888();
    }
    else {
      func_0x000107913778();
      if (!(bool)in_ZR) {
        func_0x000107914138();
      }
      func_0x00010791461c();
    }
  }
  func_0x000107915e84();
  return;
}



/* Entry: 107910d48; end: 107910d7b;  */

/* WARNING: Possible PIC construction at 0x0001079110e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010791121c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107911208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001079111c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001079111cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010791115c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107911168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107911160) */
/* WARNING: Removing unreachable block (ram,0x000107911164) */
/* WARNING: Removing unreachable block (ram,0x0001079111d0) */
/* WARNING: Removing unreachable block (ram,0x0001079111d4) */
/* WARNING: Removing unreachable block (ram,0x0001079111c4) */
/* WARNING: Removing unreachable block (ram,0x0001079111c8) */
/* WARNING: Removing unreachable block (ram,0x00010791120c) */
/* WARNING: Removing unreachable block (ram,0x000107911220) */
/* WARNING: Removing unreachable block (ram,0x0001079110e8) */
/* WARNING: Removing unreachable block (ram,0x0001079110ec) */
/* WARNING: Removing unreachable block (ram,0x00010791116c) */

undefined8 FUN_107910d48(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  long extraout_x8;
  long lVar6;
  undefined8 unaff_x19;
  undefined8 uVar7;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  long lVar8;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  long *plStack_f0;
  long *plStack_e8;
  
  if (((ulong)(param_2[1] - *param_2) < 0x80) || (99 < param_4)) goto code_r0x000107911030;
  uVar1 = 0x78 < (ulong)(param_3[1] - *param_3);
  uVar3 = param_3[1] - *param_3 == 0x79;
  if (!(bool)uVar1) goto code_r0x000107911030;
  unaff_x29 = &stack0xfffffffffffffff0;
  func_0x000107913588();
  func_0x000107907378();
  func_0x000107913304();
  func_0x0001079133b4();
  func_0x000107913398();
  func_0x000107915afc();
  uVar4 = 1;
  plVar5 = param_2;
  if ((bool)uVar3) {
code_r0x000107911170:
    func_0x000107915a78();
    if ((bool)uVar4) {
      func_0x0001079176fc();
      param_2 = param_1;
      if (0x7f < unaff_x21) {
code_r0x0001079111e4:
        uVar3 = 0x62 < unaff_x20;
        param_2 = param_1;
        if ((unaff_x20 < 100) && (func_0x000107914200(), param_2 = param_1, (bool)uVar3)) {
          func_0x0001079137b0();
          func_0x000107911298();
          if (((ulong)param_1 & 1) != 0) {
            func_0x0001079141f0();
            if (((!(bool)uVar3) || (bVar2 = 0x62 < unaff_x20, 99 < unaff_x20)) ||
               (func_0x000107914280(), !bVar2)) {
              func_0x0001079142f0();
              unaff_x30 = &UNK_107911220;
              register0x00000008 = (BADSPACEBASE *)&plStack_f0;
              param_2 = param_1;
              goto code_r0x000107911030;
            }
            func_0x0001079137c8();
            func_0x000107911298();
            if (((ulong)param_1 & 1) != 0) {
              uVar7 = 1;
              goto code_r0x00010791124c;
            }
          }
          goto code_r0x000107911248;
        }
      }
      func_0x0001079145ec();
      unaff_x30 = &UNK_10791120c;
      register0x00000008 = (BADSPACEBASE *)&plStack_f0;
code_r0x000107911030:
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
      lVar8 = *param_2;
      bVar2 = lVar8 == param_2[1];
      if ((!bVar2) && (func_0x0001079174bc(), !bVar2)) {
        func_0x00010791589c();
        lVar6 = extraout_x8;
        for (; uVar3 = lVar8 == lVar6, !(bool)uVar3; lVar8 = lVar8 + 8) {
          while (func_0x000107916f18(), !(bool)uVar3) {
            func_0x00010791415c();
            func_0x000107910a2c();
            if (((ulong)param_2 & 1) == 0) {
              return 0;
            }
          }
          lVar6 = *(long *)(unaff_x21 + 8);
        }
      }
      return 1;
    }
    func_0x0001079156e4();
    param_2 = param_1;
    if (((!(bool)uVar1) || (func_0x000107914210(), param_2 = param_1, !(bool)uVar1)) ||
       ((bVar2 = 0x62 < unaff_x20, 99 < unaff_x20 ||
        (func_0x000107914e34(), param_2 = param_1, !bVar2)))) {
      func_0x0001079145fc();
      unaff_x30 = &UNK_1079111c4;
      register0x00000008 = (BADSPACEBASE *)&plStack_f0;
      goto code_r0x000107911030;
    }
    func_0x000107916824();
    plStack_f0 = param_1;
    plStack_e8 = plVar5;
    func_0x000107913840();
    func_0x000107911298();
    if ((int)param_1 != 0) {
      func_0x000107913828();
      func_0x000107911298();
      if (((ulong)param_1 & 1) != 0) goto code_r0x0001079111e4;
    }
  }
  else {
    func_0x0001079158b4();
    if (((!(bool)uVar1) || (uVar3 = 0x62 < unaff_x20, 99 < unaff_x20)) ||
       (func_0x000107914230(), !(bool)uVar3)) {
      func_0x0001079142a0();
      unaff_x30 = &UNK_1079110e8;
      register0x00000008 = (BADSPACEBASE *)&plStack_f0;
      param_2 = param_1;
      goto code_r0x000107911030;
    }
    func_0x000107914d28();
    plStack_f0 = param_1;
    plStack_e8 = param_2;
    func_0x000107913668();
    func_0x000107911298();
    if (((ulong)param_1 & 1) != 0) {
      plVar5 = param_2;
      func_0x000107914220();
      param_2 = param_1;
      if ((((bool)uVar3) && (func_0x0001079142c0(), param_2 = param_1, (bool)uVar3)) &&
         (unaff_x20 < 100)) {
        uVar1 = 0x78 < unaff_x21;
        uVar4 = unaff_x21 == 0x79;
        if ((bool)uVar1) {
          func_0x000107916834();
          plStack_f0 = param_1;
          plStack_e8 = plVar5;
          func_0x000107913810();
          func_0x000107911298();
          if ((int)param_1 != 0) {
            func_0x0001079137f8();
            func_0x000107911298();
            if (((ulong)param_1 & 1) != 0) goto code_r0x000107911170;
          }
          goto code_r0x000107911248;
        }
      }
      func_0x000107914290();
      unaff_x30 = &UNK_107911160;
      register0x00000008 = (BADSPACEBASE *)&plStack_f0;
      goto code_r0x000107911030;
    }
  }
code_r0x000107911248:
  uVar7 = 0;
code_r0x00010791124c:
  func_0x000107914e10();
  func_0x000107914df0();
  func_0x000107914dbc();
  func_0x000107914e18();
  func_0x000107914e20();
  func_0x000107914dc4();
  return uVar7;
}



/* Entry: 107911388; end: 1079113b3;  */

long FUN_107911388(long param_1)

{
  func_0x00010790d324(*(undefined8 *)(param_1 + 0x40));
  func_0x00010790d2f0(*(undefined8 *)(param_1 + 0x28));
  return param_1;
}



/* Entry: 10791153c; end: 1079115c7;  */

bool FUN_10791153c(long *param_1,long *param_2)

{
  if ((*param_1 == *param_2) && (param_1[5] == param_2[5])) {
    if (param_2[5] != param_1[6]) {
      return param_1[7] == param_2[7];
    }
    return true;
  }
  return false;
}



/* Entry: 107911848; end: 107911917;  */

void FUN_107911848(void)

{
  undefined1 in_ZR;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [32];
  
  func_0x0001079142d0();
  FUN_107906fdc();
  func_0x0001079135a4();
  func_0x000107913c30(auStack_50,auStack_60);
  func_0x000107911b44();
  func_0x000107915c1c();
  if (!(bool)in_ZR) {
    func_0x000107916e80(0x7fffffff7fffffff);
    func_0x000107917318();
    func_0x000107914d88();
    func_0x000107911ba8();
    func_0x000107917318();
    func_0x000107914aa0();
    func_0x000107911ca0();
    func_0x000107917318();
    func_0x000107914aa0();
    func_0x000107911ca0();
  }
  func_0x000107914d88(auStack_50,auStack_78);
  func_0x000107911ba8();
  func_0x000107914d88(auStack_60,auStack_90);
  func_0x000107911ba8();
  FUN_1079122ac(auStack_a8);
  func_0x000107917270();
  func_0x000107916d60();
  return;
}



/* Entry: 107911d5c; end: 107911dbb;  */

void FUN_107911d5c(undefined8 param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  uVar1 = param_3 == 99;
  if ((param_3 < 100) &&
     (uVar1 = param_2[1] - *param_2 == 0x79, 0x78 < (ulong)(param_2[1] - *param_2))) {
    func_0x0001079142d0(param_1,param_2,param_3 + 1);
    FUN_107906fdc();
    func_0x0001079135a4();
    func_0x000107913c30(auStack_50,auStack_60);
    func_0x000107911b44();
    func_0x000107915c1c();
    if (!(bool)uVar1) {
      func_0x000107916e80(0x7fffffff7fffffff);
      func_0x000107917318();
      func_0x000107914d88();
      func_0x000107911ba8();
      func_0x000107917318();
      func_0x000107914aa0();
      func_0x000107911ca0();
      func_0x000107917318();
      func_0x000107914aa0();
      func_0x000107911ca0();
    }
    func_0x000107914d88(auStack_50,auStack_78);
    func_0x000107911ba8();
    func_0x000107914d88(auStack_60,auStack_90);
    func_0x000107911ba8();
    FUN_1079122ac(auStack_a8);
    func_0x000107917270();
    func_0x000107916d60();
    return;
  }
  func_0x000107915d78(param_2,param_4);
  if (!(bool)uVar1) {
    func_0x000107914c78();
    lVar2 = extraout_x8;
    while (unaff_x21 != lVar2) {
      func_0x000107915d6c();
      lVar2 = extraout_x8_00;
      while (unaff_x21 = unaff_x22, unaff_x23 != lVar2) {
        func_0x00010791460c();
        func_0x000107911918();
        lVar2 = *(long *)(unaff_x20 + 8);
      }
    }
  }
  return;
}



/* Entry: 1079122ac; end: 1079122cf;  */

void FUN_1079122ac(long param_1)

{
  func_0x000107914c90();
  if (param_1 != 0) {
    func_0x000107914de8();
  }
  return;
}



/* Entry: 1079128ac; end: 107912987;  */

void FUN_1079128ac(long *param_1)

{
  long unaff_x21;
  long lVar1;
  
  func_0x000107913cd4();
  for (lVar1 = *param_1; lVar1 != *(long *)(unaff_x21 + 8); lVar1 = lVar1 + 8) {
    _exp();
    _exp();
    _atan();
    func_0x0001079168c0();
    func_0x0001078e96d4();
  }
  return;
}



/* Entry: 107912c4c; end: 107912c77;  */

void FUN_107912c4c(long param_1)

{
  func_0x00010791664c();
  if (param_1 != 0) {
    func_0x000107912c78();
  }
  return;
}



/* Entry: 107912e90; end: 107912ea3;  */

void FUN_107912e90(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107913200; end: 107913213;  */

void FUN_107913200(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107914e10; end: 10791713f;  */

void FUN_107914e10(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x00000010;
  func_0x000107914c90();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107914de8();
  }
  return;
}



/* Entry: 107918a80; end: 107918b77;  */

void FUN_107918a80(undefined8 *param_1,long *param_2)

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
  *puVar4 = &PTR_DAT_1109ea280;
  puVar4[3] = &PTR_DAT_1109ea2f8;
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
  func_0x000107918de8();
  puVar4[3] = &PTR_DAT_1109ea2d0;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_107918db4(&uStack_50);
  return;
}



/* Entry: 107918db4; end: 107918ddf;  */

long FUN_107918db4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107919018; end: 107919063;  */

undefined8 FUN_107919018(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  _objc_autoreleasePoolPush();
  func_0x00010bf12040(param_1,*(undefined8 *)(param_2 + 0x18));
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 1079193a0; end: 1079193d3;  */

void FUN_1079193a0(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    func_0x0001079193d4(*param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107919598; end: 10791959f; -[SCNSnapMapsSdkCMAnimationOptions easing] */

undefined8 FUN_107919598(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1079199d0; end: 1079199d7; -[SCNSnapMapsSdkCMCameraOptions zoom] */

undefined8 FUN_1079199d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107919b70; end: 107919cc7; -[SCNSnapMapsSdkCMCameraViewport initWithCenter:cameraOptions:latLngBounds:edgeInsets:screenSize:] */

undefined1 *
FUN_107919b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f8d78;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107919d3c; end: 107919df3;  */

void FUN_107919d3c(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_1109ea490;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_107919df4);
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
    FUN_10791a02c(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10791a02c; end: 10791a057;  */

long FUN_10791a02c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10791a4cc; end: 10791a55b; -[SCNSnapMapsSdkCameraManager moveToAnchorZoom:anchorY:zoom:animationOptions:] */

void FUN_10791a4cc(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x00010791af3c();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010791af90();
  func_0x00010791af78(*(undefined8 *)(*plVar1 + 0x30));
  func_0x00010791afa4();
  func_0x00010791af9c();
  return;
}



/* Entry: 10791a914; end: 10791aa0b; -[SCNSnapMapsSdkCameraManager setEdgeInsets:transition:] */

void FUN_10791a914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long *plVar1;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  bool bStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010791afb4();
  func_0x00010791afec();
  plVar1 = *(long **)(param_5 + 0x18);
  func_0x00010791ca50(param_7);
  uStack_78 = param_1;
  uStack_70 = param_2;
  uStack_68 = param_3;
  uStack_60 = param_4;
  func_0x00010791afec();
  if (param_8 == 0) {
    uStack_b0 = uStack_b0 & 0xffffffffffffff00;
  }
  else {
    func_0x0001079295ac(&uStack_58,param_8);
    uStack_a8 = uStack_50;
    uStack_b0 = uStack_58;
    uStack_98 = uStack_40;
    uStack_a0 = uStack_48;
    uStack_90 = uStack_38;
  }
  bStack_88 = param_8 != 0;
  func_0x00010791afac();
  (**(code **)(*plVar1 + 0x70))(plVar1,&uStack_78,&uStack_b0);
  func_0x00010791afac();
  func_0x00010791af9c();
  return;
}



/* Entry: 10791ad38; end: 10791ad83; -[SCNSnapMapsSdkCameraManager isEnabled] */

void FUN_10791ad38(void)

{
  long extraout_x8;
  
  func_0x00010791b058();
  (**(code **)(extraout_x8 + 0xb0))();
  return;
}



/* Entry: 10791b18c; end: 10791b197;  */

void FUN_10791b18c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10791b408; end: 10791b41b;  */

void FUN_10791b408(void)

{
  func_0x00010791b994();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10791b690; end: 10791b6ff;  */

ulong FUN_10791b690(void)

{
  ulong unaff_x21;
  
  func_0x00010791b9d0();
  func_0x00010791b9f8();
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791ba4c();
  func_0x00010bfc9640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791b9dc();
  func_0x0001005e7610();
  func_0x00010791ba14();
  func_0x00010791ba2c();
  return unaff_x21 & 0xffffffffff;
}



/* Entry: 10791b9a4; end: 10791b9cf;  */

long FUN_10791b9a4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10791bd10; end: 10791bda3;  */

long FUN_10791bd10(long param_1)

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
    ppuStack_38 = &PTR_DAT_1109ea790;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10791bfb4; end: 10791bfbf;  */

long FUN_10791bfb4(long param_1)

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
    ppuStack_38 = &PTR_DAT_1109ea8b8;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x00010791c214();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10791c2cc; end: 10791c3cb;  */

void FUN_10791c2cc(undefined8 *param_1,long *param_2)

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
  *puVar4 = &PTR_DAT_1109eaa20;
  puVar4[3] = &PTR_DAT_1109eaaa0;
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
  puVar4[3] = &PTR_DAT_1109eaa70;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  func_0x00010791c5cc(&uStack_50);
  return;
}



/* Entry: 10791c5bc; end: 10791c5cb;  */

void FUN_10791c5bc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109eaa20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10791c7f4; end: 10791c833;  */

void FUN_10791c7f4(void)

{
  func_0x00010791ca44();
  return;
}



/* Entry: 10791cb10; end: 10791cb6f; -[SCNSnapMapsSdkEdgeInsetsDouble initWithTop:left:bottom:right:] */

void FUN_10791cb10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f8d90;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
  }
  return;
}



/* Entry: 10791cd4c; end: 10791cd5f;  */

void FUN_10791cd4c(void)

{
  func_0x00010791cfa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10791cfe4; end: 10791d01b;  */

void FUN_10791cfe4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPush_11034d1d8)();
  return;
}



/* Entry: 10791d11c; end: 10791d123; -[SCNSnapMapsSdkExternalCustomLayerRenderParameters bearing] */

undefined8 FUN_10791d11c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10791d6b8; end: 10791d767;  */

void FUN_10791d6b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c225ec0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0,param_2,
                      *(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  plVar3 = (long *)(param_1 + 0x10);
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    lVar2 = (long)(plVar3 + 2);
    func_0x0001001011a4(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    func_0x00010791d7a4();
  }
  func_0x00010bf51e00(puVar1);
  func_0x00010791d768();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10791d9d8; end: 10791d9df; -[SCNSnapMapsSdkFeatureDescriptor lat] */

undefined4 FUN_10791d9d8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10791dd64; end: 10791dd6b; -[SCNSnapMapsSdkFontDescriptor family] */

undefined8 FUN_10791dd64(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10791df84; end: 10791df87;  */

void FUN_10791df84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109eae08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10791e410; end: 10791e423;  */

void FUN_10791e410(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar5 = *plVar2;
  lVar1 = plVar2[1];
  lVar6 = param_2[1] + ((lVar1 - lVar5) / -0x58) * 0x58;
  lVar3 = lVar6;
  for (lVar4 = lVar5; lVar4 != lVar1; lVar4 = lVar4 + 0x58) {
    func_0x00010791e55c(lVar3,lVar4);
    lVar3 = lVar3 + 0x58;
  }
  for (; lVar5 != lVar1; lVar5 = lVar5 + 0x58) {
    func_0x0001072af620(lVar5);
  }
  param_2[1] = lVar6;
  lVar4 = *plVar2;
  *plVar2 = lVar6;
  plVar2[1] = lVar4;
  param_2[1] = lVar4;
  lVar4 = plVar2[1];
  plVar2[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = plVar2[2];
  plVar2[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10791e680; end: 10791e6b7;  */

void FUN_10791e680(long param_1)

{
  _objc_alloc(PTR_PTR_1126d5660);
  func_0x00010c056160(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                      *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10791e800; end: 10791e8f7;  */

void FUN_10791e800(undefined8 *param_1,long *param_2)

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
  *puVar4 = &PTR_DAT_1109eaf40;
  puVar4[3] = &PTR_DAT_1109eafb8;
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
  func_0x00010791ebd8();
  puVar4[3] = &PTR_DAT_1109eaf90;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10791eb98(&uStack_50);
  return;
}



/* Entry: 10791eb98; end: 10791ebc3;  */

long FUN_10791eb98(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10791ed48; end: 10791ee47;  */

void FUN_10791ed48(undefined8 *param_1,long *param_2)

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
  *puVar4 = &PTR_DAT_1109eb068;
  puVar4[3] = &PTR_DAT_1109eb0e0;
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
  puVar4[3] = &PTR_DAT_1109eb0b8;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10791efc4(&uStack_50);
  return;
}



/* Entry: 10791efc4; end: 10791efef;  */

long FUN_10791efc4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10791f20c; end: 10791f29f;  */

void FUN_10791f20c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_10791e680(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791f330(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e4920(uVar2);
  func_0x00010791f428();
  func_0x00010791f420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10791f554; end: 10791f5eb; -[SCNSnapMapsSdkInputManager addPressDownListener:groups:] */

void FUN_10791f554(void)

{
  long unaff_x21;
  long *plVar1;
  
  func_0x00010791f8b4();
  func_0x00010791f974();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010791f928();
  func_0x00010791f91c();
  func_0x00010791f8c8(*(undefined8 *)(*plVar1 + 0x18));
  func_0x00010791f8f8();
  func_0x00010791f934();
  func_0x00010791f93c();
  func_0x00010791f944();
  return;
}



/* Entry: 10791f888; end: 10791f8b3;  */

long FUN_10791f888(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10791fcec; end: 10791fd3f; -[SCNSnapMapsSdkInspector .cxx_destruct] */

void FUN_10791fcec(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1109eb220;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x0001072ac7b8((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 107920088; end: 10792009b;  */

void FUN_107920088(void)

{
  func_0x000107920244();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107920280; end: 107920293;  */

void FUN_107920280(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPush_11034d1d8)();
  return;
}



/* Entry: 107920504; end: 107920567;  */

undefined1  [16] FUN_107920504(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  _objc_retain();
  func_0x00010c08aca0(param_2);
  uVar1 = param_1;
  func_0x00010c09abe0(param_2);
  _objc_release(param_2);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 107920744; end: 1079207b7; +[SCNSnapMapsSdkMapSdk getDefaultInstance] */

void FUN_107920744(void)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001072a1cc0(&uStack_30);
  func_0x000107921760(uStack_30,uStack_28);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107921f78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107920ca8; end: 107920d2f;  */

void FUN_107920ca8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  uVar2 = param_2;
  func_0x00010c08fa60(param_2);
  func_0x0001072b0c2c(param_1);
  func_0x00010006369c(param_1,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1079212fc; end: 10792134f; -[SCNSnapMapsSdkMapSdk updateAppTheme:] */

void FUN_1079212fc(void)

{
  long extraout_x8;
  
  func_0x0001079220b4();
  (**(code **)(extraout_x8 + 0x38))();
  return;
}



/* Entry: 1079217d8; end: 10792182b; -[SCNSnapMapsSdkMapSdk .cxx_destruct] */

void FUN_1079217d8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1109eb378;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x00010725afa0((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 107921a3c; end: 107921c13;  */

undefined1  [16] FUN_107921a3c(float param_1,float param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long extraout_x8;
  undefined8 extraout_x9;
  long *unaff_x19;
  long *unaff_x21;
  long *plVar5;
  ulong uVar6;
  ulong unaff_x26;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  func_0x000107922110();
  uVar6 = unaff_x19[1];
  if (uVar6 != 0) {
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      unaff_x26 = uVar7 & param_3;
    }
    else {
      unaff_x26 = param_3;
      if (uVar6 <= param_3) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = param_3 / uVar6;
        }
        unaff_x26 = param_3 - uVar4 * uVar6;
      }
    }
    plVar5 = *(long **)(*unaff_x19 + unaff_x26 * 8);
    unaff_x21 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar5;
          if (unaff_x21 == (long *)0x0) goto LAB_107921b00;
          uVar4 = unaff_x21[1];
          plVar5 = unaff_x21;
          if (uVar4 != param_3) break;
          plVar2 = unaff_x21 + 2;
          func_0x0001000e107c(plVar2,param_4);
          if (((ulong)plVar2 & 1) != 0) {
            uVar3 = 0;
            goto LAB_107921be4;
          }
        }
        if ((uVar6 & uVar7) == 0) {
          uVar4 = uVar4 & uVar7;
        }
        else if (uVar6 <= uVar4) {
          uVar1 = 0;
          if (uVar6 != 0) {
            uVar1 = uVar4 / uVar6;
          }
          uVar4 = uVar4 - uVar1 * uVar6;
        }
      } while (uVar4 == unaff_x26);
    }
  }
LAB_107921b00:
  func_0x00010792217c();
  func_0x000107921c14();
  func_0x000107922168();
  if ((uVar6 == 0) || (param_2 * (float)uVar6 < param_1)) {
    func_0x0001079220dc(uVar6 << 1);
    func_0x0001072aaaf4();
    uVar6 = unaff_x19[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x26 = uVar6 - 1 & param_3;
    }
    else {
      unaff_x26 = param_3;
      if (uVar6 <= param_3) {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = param_3 / uVar6;
        }
        unaff_x26 = param_3 - uVar7 * uVar6;
      }
    }
  }
  if (*(long *)(*unaff_x19 + unaff_x26 * 8) == 0) {
    func_0x0001079220c4();
    *(undefined8 *)(extraout_x8 + unaff_x26 * 8) = extraout_x9;
    if (*unaff_x21 != 0) {
      uVar7 = *(ulong *)(*unaff_x21 + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar7 = uVar7 & uVar6 - 1;
      }
      else if (uVar6 <= uVar7) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar7 / uVar6;
        }
        uVar7 = uVar7 - uVar4 * uVar6;
      }
      *(long **)(extraout_x8 + uVar7 * 8) = unaff_x21;
    }
  }
  else {
    func_0x000107922148();
  }
  func_0x000107921fec();
  uVar3 = 1;
LAB_107921be4:
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = unaff_x21;
  return auVar8;
}



/* Entry: 107922188; end: 1079221ff; -[SCNSnapMapsSdkMapSdkInitializationParamsBuilder initWithCpp:] */

undefined1 * FUN_107922188(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f8de8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000107922bc0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001072b0cc8(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1079225a4; end: 107922637; -[SCNSnapMapsSdkMapSdkInitializationParamsBuilder contentObjectResolver:] */

void FUN_1079225a4(void)

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
    func_0x00010791bdec();
  }
  func_0x000107922b84();
  func_0x000107922b58(*(undefined8 *)(*unaff_x20 + 0x38));
  func_0x00010726ee4c(&uStack_40);
  func_0x000107922b84();
  return;
}



/* Entry: 1079229c0; end: 107922a37;  */

void FUN_1079229c0(long param_1,long param_2)

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
    ppuStack_28 = &PTR_DAT_1109eb3b8;
    lStack_38 = param_1;
    lStack_30 = param_2;
    if (param_2 != 0) {
      do {
        func_0x000107922bc0();
      } while (extraout_w10 != 0);
    }
    func_0x00010015c218(&ppuStack_28,&lStack_38,&UNK_107922ad0);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107922bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 107922dd0; end: 107922de3;  */

void FUN_107922dd0(void)

{
  func_0x000107922fe8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107923040; end: 1079230b7; -[SCNSnapMapsSdkMapSdkSession initWithCpp:] */

undefined1 * FUN_107923040(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f8df0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x0001079267cc();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010725af7c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107923564; end: 1079235eb; -[SCNSnapMapsSdkMapSdkSession addLocalizedStrings:] */

void FUN_107923564(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_58 [40];
  
  func_0x000107926564();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000100626d7c(auStack_58);
  func_0x0001079265f8(*(undefined8 *)(*plVar1 + 0x38));
  func_0x00010028ad98(auStack_58);
  func_0x000107926620();
  return;
}



/* Entry: 1079239b8; end: 107923abb; -[SCNSnapMapsSdkMapSdkSession getTileCover:] */

void FUN_1079239b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long lStack_48;
  long lStack_40;
  
  func_0x000107926690();
  (**(code **)(extraout_x8 + 0x78))(&lStack_48);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (lStack_40 - lStack_48) / 0xc);
  _objc_retainAutoreleasedReturnValue();
  for (lVar3 = lStack_48; lVar3 != lStack_40; lVar3 = lVar3 + 0xc) {
    lVar2 = lVar3;
    func_0x000107929504(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    func_0x0001079266a0();
  }
  func_0x00010bf51e00(puVar1);
  func_0x0001079265b8();
  func_0x0001072ba170(&lStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107924110; end: 1079241af; -[SCNSnapMapsSdkMapSdkSession requestFeatureRemoval:featureId:] */

void FUN_107924110(undefined8 param_1)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107926550();
  func_0x0001079266e0();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x0001079265ec();
  func_0x0001079267b4();
  func_0x000107926614(*(undefined8 *)(*plVar1 + 0xb0),param_1,auStack_48);
  func_0x000107926754();
  func_0x0001079266e8();
  func_0x000107926638();
  func_0x000107926620();
  return;
}



/* Entry: 1079245a4; end: 1079245d7;  */

void FUN_1079245a4(undefined4 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    FUN_107926388(*param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107924d3c; end: 107924db3; -[SCNSnapMapsSdkMapSdkSession emitTrigger:] */

void FUN_107924d3c(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x000107926564();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107926648();
  func_0x0001079265f8(*(undefined8 *)(*plVar1 + 0x118));
  func_0x0001079266f0();
  func_0x000107926620();
  return;
}



/* Entry: 107925304; end: 10792534f; -[SCNSnapMapsSdkMapSdkSession enableHighZoomSatellite:] */

void FUN_107925304(void)

{
  long extraout_x8;
  
  func_0x000107926690();
  (**(code **)(extraout_x8 + 0x150))();
  return;
}



/* Entry: 10792595c; end: 1079259e7; -[SCNSnapMapsSdkMapSdkSession getRenderedFriends] */

void FUN_10792595c(void)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [40];
  
  func_0x0001079266cc();
  func_0x000107926854();
  puVar1 = auStack_48;
  FUN_10791d6b8(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001005d0538(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079260b4; end: 1079260df;  */

void FUN_1079260b4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107926194();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107926388; end: 1079263af;  */

void FUN_107926388(void)

{
  func_0x00010c0df740(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107926b30; end: 107926b33;  */

void FUN_107926b30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109eb5a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107926d90; end: 107926dbb;  */

long FUN_107926d90(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10792702c; end: 10792709f;  */

void FUN_10792702c(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_1109eb648;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000107927110();
    } while (extraout_w10 != 0);
  }
  func_0x00010015c218(&ppuStack_28,&uStack_40,&UNK_1079270a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010792712c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107927384; end: 10792743b;  */

void FUN_107927384(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_1109eb6b0;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_10792743c);
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
    FUN_107927674(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 107927674; end: 10792769f;  */

long FUN_107927674(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10792796c; end: 107927997;  */

void FUN_10792796c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107927a30();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107927c58; end: 107927c5f; -[SCNSnapMapsSdkPoint2dDouble x] */

undefined8 FUN_107927c58(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079281a4; end: 107928217;  */

void FUN_1079281a4(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_1109eb790;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000107928494();
    } while (extraout_w10 != 0);
  }
  func_0x00010015c218(&ppuStack_28,&uStack_40,&UNK_107928218);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001079284dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079284f0; end: 10792859f;  */

void FUN_1079284f0(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_1109eb7f8;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_1079285a0);
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
    func_0x00010792883c(&uStack_50);
  }
  func_0x000107928868();
  return;
}



/* Entry: 10792882c; end: 10792883b;  */

void FUN_10792882c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109eb838;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1079289b4; end: 1079289bb; -[SCNSnapMapsSdkRect bottom] */

undefined8 FUN_1079289b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107928c9c; end: 107928d0f;  */

void FUN_107928c9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126d56e0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107928d10();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010726e9f8(&uStack_30);
  return;
}



/* Entry: 107928e78; end: 107928f4b; -[SCNSnapMapsSdkStyleMetadata initWithStyleName:revision:] */

undefined1 *
FUN_107928e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8e38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10792915c; end: 107929167;  */

long FUN_10792915c(long param_1)

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
    ppuStack_38 = &PTR_DAT_1109eb930;
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



/* Entry: 10792937c; end: 107929397;  */

void FUN_10792937c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107929538; end: 107929593; -[SCNSnapMapsSdkTileId initWithX:y:z:] */

void FUN_107929538(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f8e48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0xc) = param_3;
    *(undefined4 *)((long)puVar1 + 0x10) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  return;
}



/* Entry: 1079296e0; end: 1079296eb; -[SCNSnapMapsSdkTimedTransitionOptions .cxx_destruct] */

void FUN_1079296e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}


