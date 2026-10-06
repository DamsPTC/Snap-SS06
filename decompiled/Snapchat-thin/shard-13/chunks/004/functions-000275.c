/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a56746c; end: 10a56753b;  */

void FUN_10a56746c(undefined8 param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double *pdVar1;
  double *pdVar2;
  undefined8 uStack_48;
  
  pdVar1 = param_2;
  (**(code **)((long)*param_2 + 0x58))();
  if ((ulong)pdVar1[0x59] < 8) {
    pdVar1[(long)pdVar1[0x59] + 0x4e] = pdVar1[0x5a];
    pdVar1[0x59] = (double)((long)pdVar1[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(pdVar1 + 0x4b);
  }
  pdVar2 = param_2;
  FUN_10a56753c(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = CONCAT44((float)pdVar2[1],(float)*pdVar2);
  FUN_10a07ff64(param_1,param_2,&uStack_48);
  func_0x00010988c170(pdVar1 + 0x4b);
  return;
}



/* Entry: 10a56753c; end: 10a56757f;  */

undefined8 * FUN_10a56753c(undefined8 *param_1)

{
  func_0x000109898688();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*param_1 == &PTR_FUN_110bf0988) {
    return param_1 + 2;
  }
  func_0x00010988bd28(&UNK_10f685496);
  return (undefined8 *)0x0;
}



/* Entry: 10a567580; end: 10a5675a7;  */

undefined8 FUN_10a567580(void)

{
  return 0;
}



/* Entry: 10a5675a8; end: 10a567667;  */

void FUN_10a5675a8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  double dVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a56753c(param_2,param_3);
  FUN_10a052e3c(param_5);
  dVar14 = (double)param_2[2];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(float)dVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a567668; end: 10a567723;  */

void FUN_10a567668(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a56753c(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[3];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a567724; end: 10a5677df;  */

void FUN_10a567724(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a56753c(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar2 = *(int *)((long)param_2 + 0x1c);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a5677e0; end: 10a5678cf;  */

undefined1  [16] FUN_10a5677e0(ulong param_1,ulong *param_2,ulong param_3)

{
  char *pcVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  ulong auStack_a8 [3];
  undefined4 uStack_90;
  ulong uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bf09b0;
  pcVar1 = "";
  if ((char *)*param_2 != (char *)0x0) {
    pcVar1 = (char *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pcVar1);
  auStack_a8[0] = *param_2;
  auStack_a8[1] = 0;
  auStack_a8[2] = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = (undefined4)param_2[2];
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = (undefined4)param_2[8];
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,auStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,(int)param_2[1],(int)param_2[8],*(undefined4 *)((long)param_2 + 0xc)
                ,(int)param_2[2]);
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110bf09b0;
    uStack_38 = 0;
    auStack_a8[0] = auStack_a8[0] & 0xffffffffffffff00;
    auStack_a8[2] = auStack_a8[2] & 0xffffffffffffff00;
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,auStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)(uint)param_2[1] << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a5678d0; end: 10a567933;  */

ulong FUN_10a5678d0(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a567934);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a567934,1,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a567934; end: 10a567c27;  */

void FUN_10a567934(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a567c28(param_2,param_3);
  FUN_10a052e3c(param_5);
  lStack_a0 = 0;
  lStack_98 = 0;
  uStack_90 = 0;
  FUN_10a35e32c(&lStack_a0,*plVar4,plVar4[1],plVar4[1] - *plVar4 >> 5);
  lVar14 = lStack_98;
  lVar8 = lStack_a0;
  lVar12 = lStack_98 - lStack_a0 >> 5;
  (**(code **)(*param_2 + 600))(&puStack_70,param_2,lVar12);
  puVar1 = PTR___ZSt7nothrow_1103469d8;
  puStack_78 = puStack_70;
  if (lVar14 != lVar8) {
    lVar14 = 0;
    puVar11 = (undefined8 *)(lVar8 + 0x10);
    do {
      plVar4 = param_2;
      (**(code **)(*param_2 + 0x58))();
      if ((*(byte *)(plVar4 + 0x3c) & 1) == 0) {
LAB_10a567ba0:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a567ba4);
        (*pcVar2)();
      }
      puVar5 = (undefined8 *)0x30;
      __ZnwmRKSt9nothrow_t(0x30,puVar1);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_FUN_110bf0988;
        uVar18 = puVar11[-2];
        puVar5[3] = puVar11[-1];
        puVar5[2] = uVar18;
        uVar18 = *puVar11;
        puVar5[5] = puVar11[1];
        puVar5[4] = uVar18;
      }
      plVar6 = param_2;
      (**(code **)(*param_2 + 0x58))();
      plVar4 = plVar6;
      FUN_10a065534();
      if (plVar4 == (long *)0x0) {
        if ((*(byte *)(plVar6 + 0x3c) & 1) == 0) goto LAB_10a567ba0;
        plVar4 = plVar6 + 0x1b;
      }
      puStack_70 = (undefined8 *)CONCAT44(puStack_70._4_4_,7);
      plVar7 = param_2;
      (**(code **)(*param_2 + 0x98))(param_2,*plVar4);
      plStack_68 = plVar7;
      (**(code **)(*param_2 + 0x2f8))(&puStack_80,param_2,puVar5,plVar6,&UNK_10989ba24,&puStack_70);
      puStack_88 = (undefined8 *)CONCAT44(puStack_88._4_4_,7);
      if ((3 < (int)puStack_70) && (plStack_68 != (long *)0x0)) {
        (**(code **)*plStack_68)();
      }
      (**(code **)(*param_2 + 0x290))(param_2,&puStack_78,lVar14,&puStack_88);
      if ((3 < (int)puStack_88) && (puStack_80 != (undefined8 *)0x0)) {
        (**(code **)*puStack_80)();
      }
      lVar14 = lVar14 + 1;
      puVar11 = puVar11 + 4;
    } while (lVar12 != lVar14);
  }
  *param_1 = 7;
  *(undefined8 **)(param_1 + 2) = puStack_78;
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    _free();
  }
  plVar4 = plVar3 + 0x4b;
  lVar8 = plVar3[0x59];
  uVar9 = lVar8 - 1;
  plVar3[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar4[lVar8 + 2];
    if (plVar3[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar9) {
      return;
    }
  }
  puVar11 = (undefined8 *)*plVar4;
  puVar5 = (undefined8 *)plVar3[0x4c];
  lVar8 = (long)puVar5 - (long)puVar11;
  uVar16 = lVar8 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    puVar15 = (undefined8 *)plVar3[0x4d];
    if ((ulong)((long)puVar15 - (long)puVar5 >> 4) < uVar17) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = (long)puVar15 - (long)puVar11 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar15 - (long)puVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar10 >> 0x3c == 0) {
          lVar12 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar12 + lVar8;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,puVar11,lVar8);
          *plVar4 = lVar13;
          plVar3[0x4c] = lVar14 + uVar17 * 0x10;
          plVar3[0x4d] = lVar12 + uVar10 * 0x10;
          puStack_88 = puVar11;
          puStack_80 = puVar11;
          puStack_78 = puVar11;
          puStack_70 = puVar15;
          func_0x00010988c1b8(&puStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(puVar5,uVar17 * 0x10);
    plVar3[0x4c] = (long)(puVar5 + uVar17 * 2);
  }
  else if (uVar9 < uVar16) {
    while (puVar5 != puVar11 + uVar9 * 2) {
      puVar5 = puVar5 + -2;
      func_0x00010988c204(puVar5);
    }
    plVar3[0x4c] = (long)(puVar11 + uVar9 * 2);
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar9;
  return;
}



/* Entry: 10a567c28; end: 10a567c6b;  */

undefined8 * FUN_10a567c28(undefined8 *param_1)

{
  func_0x000109898688();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*param_1 == &PTR_FUN_110bf09c0) {
    return param_1 + 1;
  }
  func_0x00010988bd28(&UNK_10f685496);
  return (undefined8 *)0x0;
}



/* Entry: 10a567c6c; end: 10a567c83;  */

undefined8 FUN_10a567c6c(void)

{
  return 0;
}



/* Entry: 10a567c84; end: 10a567cd3;  */

void FUN_10a567c84(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    if (param_2[4] != 0) {
      param_2[5] = param_2[4];
      _free();
    }
    if (param_2[1] != 0) {
      param_2[2] = param_2[1];
      _free();
    }
    *param_2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 **)(param_1 + 0x48) = param_2;
  }
  return;
}



/* Entry: 10a567cd4; end: 10a567d67;  */

void FUN_10a567cd4(undefined8 *param_1,long param_2)

{
  double *pdVar1;
  double *pdVar2;
  undefined8 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107458bb4(param_1,*(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18) >> 4);
  pdVar1 = *(double **)(param_2 + 0x20);
  for (pdVar2 = *(double **)(param_2 + 0x18); pdVar2 != pdVar1; pdVar2 = pdVar2 + 2) {
    uStack_38 = CONCAT44((float)pdVar2[1],(float)*pdVar2);
    func_0x00010a558044(param_1,&uStack_38);
  }
  return;
}



/* Entry: 10a567d68; end: 10a567dcb;  */

ulong FUN_10a567d68(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a567dcc);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a567dcc,1,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a567dcc; end: 10a567ec7;  */

void FUN_10a567dcc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb0;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a567c28(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a567cd4(&stack0xffffffffffffffa8,plVar4);
  FUN_10a07b090(param_1,param_2,in_stack_ffffffffffffffa8,
                in_stack_ffffffffffffffb0 - in_stack_ffffffffffffffa8 >> 3);
  if (in_stack_ffffffffffffffa8 != 0) {
    __ZdlPv();
  }
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a567ec8; end: 10a567f2b;  */

ulong FUN_10a567ec8(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a567f2c);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a567f2c,1,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a567f2c; end: 10a567feb;  */

void FUN_10a567f2c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  double dVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a567c28(param_2,param_3);
  FUN_10a052e3c(param_5);
  dVar14 = (double)param_2[6];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(float)dVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a567fec; end: 10a5680a7;  */

void FUN_10a567fec(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6619c3,0x11);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5680a8);
  (*pcVar4)();
}



/* Entry: 10a5680a8; end: 10a568197;  */

undefined1  [16] FUN_10a5680a8(ulong param_1,ulong *param_2,ulong param_3)

{
  char *pcVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  ulong auStack_a8 [3];
  undefined4 uStack_90;
  ulong uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bc7c30;
  pcVar1 = "";
  if ((char *)*param_2 != (char *)0x0) {
    pcVar1 = (char *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pcVar1);
  auStack_a8[0] = *param_2;
  auStack_a8[1] = 0;
  auStack_a8[2] = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = (undefined4)param_2[2];
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = (undefined4)param_2[8];
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,auStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,(int)param_2[1],(int)param_2[8],*(undefined4 *)((long)param_2 + 0xc)
                ,(int)param_2[2]);
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110bc7c30;
    uStack_38 = 0;
    auStack_a8[0] = auStack_a8[0] & 0xffffffffffffff00;
    auStack_a8[2] = auStack_a8[2] & 0xffffffffffffff00;
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,auStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)(uint)param_2[1] << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a568198; end: 10a56821b;  */

void FUN_10a568198(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a35e32c(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 5);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_10a35e454();
  param_1[6] = param_2[6];
  *(int *)(param_1 + 7) = (int)param_2[7];
  return;
}



/* Entry: 10a56821c; end: 10a56827f;  */

ulong FUN_10a56821c(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a568280);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a568280,1,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a568280; end: 10a568413;  */

void FUN_10a568280(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  undefined4 in_stack_ffffffffffffffa8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a568414(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a568198(&lStack_90,plVar4);
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((*(byte *)(plVar4 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5683fc);
    (*pcVar1)();
  }
  plVar7 = (long *)plVar4[9];
  if (plVar7 == (long *)0x0) {
    FUN_10a140784(plVar4 + 5);
    plVar7 = (long *)plVar4[9];
  }
  lVar5 = lStack_78;
  plVar4[9] = *plVar7;
  plVar7[8] = 0;
  plVar7[7] = 0;
  *plVar7 = (long)&PTR_FUN_110bf09c0;
  plVar7[2] = lStack_88;
  plVar7[1] = lStack_90;
  plVar7[3] = lStack_80;
  lStack_88 = 0;
  lStack_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  plVar7[5] = lStack_70;
  plVar7[4] = lVar5;
  plVar7[6] = (long)plStack_68;
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
  *(undefined4 *)(plVar7 + 8) = in_stack_ffffffffffffffa8;
  plVar7[7] = in_stack_ffffffffffffffa0;
  FUN_10a568458(param_1,param_2,&stack0xffffffffffffffb0);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar4);
  }
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    _free();
  }
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    _free();
  }
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar5;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar5 >> 3;
        if (uVar8 <= uVar6) {
          uVar8 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar5)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar5,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar13) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar11 != lVar5) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a568414; end: 10a568457;  */

long * FUN_10a568414(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  int aiStack_60 [2];
  long *plStack_58;
  
  func_0x000109898688();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*param_1 == &PTR_FUN_110bc7c40) {
    return param_1 + 1;
  }
  puVar2 = (undefined4 *)&UNK_10f685496;
  func_0x00010988bd28();
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  uVar6 = *param_3;
  *param_3 = 0;
  plVar4 = plVar3;
  FUN_10a065534();
  if (plVar4 == (long *)0x0) {
    if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a568540);
      (*pcVar1)();
    }
    plVar4 = plVar3 + 0x1b;
  }
  aiStack_60[0] = 7;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*plVar4);
  plStack_58 = plVar5;
  (**(code **)(*param_2 + 0x2f8))(puVar2 + 2,param_2,uVar6,plVar3,&UNK_10989ba24,aiStack_60);
  *puVar2 = 7;
  if ((3 < aiStack_60[0]) && (param_2 = plStack_58, plStack_58 != (long *)0x0)) {
    (**(code **)*plStack_58)();
    param_2 = plStack_58;
  }
  return param_2;
}



/* Entry: 10a568458; end: 10a56853f;  */

void FUN_10a568458(undefined4 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int aiStack_50 [2];
  long *plStack_48;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  uVar5 = *param_3;
  *param_3 = 0;
  plVar3 = plVar2;
  FUN_10a065534();
  if (plVar3 == (long *)0x0) {
    if ((*(byte *)(plVar2 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a568540);
      (*pcVar1)();
    }
    plVar3 = plVar2 + 0x1b;
  }
  aiStack_50[0] = 7;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*plVar3);
  plStack_48 = plVar4;
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,uVar5,plVar2,&UNK_10989ba24,aiStack_50);
  *param_1 = 7;
  if ((3 < aiStack_50[0]) && (plStack_48 != (long *)0x0)) {
    (**(code **)*plStack_48)();
  }
  return;
}



/* Entry: 10a568540; end: 10a5685a3;  */

ulong FUN_10a568540(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5685a4);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a5685a4,1,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a5685a4; end: 10a5688a7;  */

void FUN_10a5685a4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar2[0x59] < 8) {
    plVar2[plVar2[0x59] + 0x4e] = plVar2[0x5a];
    plVar2[0x59] = plVar2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar2 + 0x4b);
  }
  plVar3 = param_2;
  FUN_10a568414(param_2,param_3);
  FUN_10a052e3c(param_5);
  lStack_a0 = 0;
  lStack_98 = 0;
  uStack_90 = 0;
  FUN_10a35e518(&lStack_a0,plVar3[8],plVar3[9],plVar3[9] - plVar3[8] >> 6);
  lVar11 = lStack_98;
  lVar6 = lStack_a0;
  lVar9 = lStack_98 - lStack_a0 >> 6;
  (**(code **)(*param_2 + 600))(&plStack_70,param_2,lVar9);
  plStack_78 = plStack_70;
  if (lVar11 != lVar6) {
    lVar11 = 0;
    plVar3 = (long *)(lVar6 + 0x18);
    do {
      plVar4 = param_2;
      (**(code **)(*param_2 + 0x58))();
      if ((*(byte *)(plVar4 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a568834);
        (*pcVar1)();
      }
      plVar8 = (long *)plVar4[9];
      if (plVar8 == (long *)0x0) {
        FUN_10a140784(plVar4 + 5);
        plVar8 = (long *)plVar4[9];
      }
      plVar4[9] = *plVar8;
      plVar12 = plVar8 + 4;
      plVar8[5] = 0;
      *plVar12 = 0;
      plVar8[8] = 0;
      plVar8[7] = 0;
      plVar8[6] = 0;
      *plVar8 = (long)&PTR_FUN_110bf09c0;
      plVar8[1] = 0;
      plVar8[2] = 0;
      plVar8[3] = 0;
      FUN_10a35e32c(plVar8 + 1,plVar3[-3],plVar3[-2],plVar3[-2] - plVar3[-3] >> 5);
      *plVar12 = 0;
      plVar8[5] = 0;
      plVar8[6] = 0;
      FUN_10a35e454(plVar12,*plVar3,plVar3[1],plVar3[1] - *plVar3 >> 4);
      lVar6 = plVar3[3];
      *(int *)(plVar8 + 8) = (int)plVar3[4];
      plVar8[7] = lVar6;
      plStack_70 = plVar8;
      plStack_68 = plVar4;
      FUN_10a568458(&plStack_88,param_2,&plStack_70);
      if (plStack_70 != (long *)0x0) {
        (**(code **)(*plStack_70 + 0x18))(plStack_68);
      }
      (**(code **)(*param_2 + 0x290))(param_2,&plStack_78,lVar11,&plStack_88);
      if ((3 < (int)plStack_88) && (plStack_80 != (undefined8 *)0x0)) {
        (**(code **)*plStack_80)();
      }
      lVar11 = lVar11 + 1;
      plVar3 = plVar3 + 8;
    } while (lVar9 != lVar11);
  }
  *param_1 = 7;
  *(long **)(param_1 + 2) = plStack_78;
  plStack_70 = &lStack_a0;
  FUN_10a34ef08(&plStack_70);
  plVar3 = plVar2 + 0x4b;
  lVar6 = plVar2[0x59];
  uVar5 = lVar6 - 1;
  plVar2[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar3[lVar6 + 2];
    if (plVar2[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar2[0x57] + -8);
    plVar2[0x57] = plVar2[0x57] + -8;
    if (plVar2[0x5a] == uVar5) {
      return;
    }
  }
  plVar4 = (long *)*plVar3;
  plVar8 = (long *)plVar2[0x4c];
  lVar6 = (long)plVar8 - (long)plVar4;
  uVar13 = lVar6 >> 4;
  if (uVar13 < uVar5) {
    uVar14 = uVar5 - uVar13;
    plVar12 = (long *)plVar2[0x4d];
    if ((ulong)((long)plVar12 - (long)plVar8 >> 4) < uVar14) {
      if (uVar5 >> 0x3c == 0) {
        uVar7 = (long)plVar12 - (long)plVar4 >> 3;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)((long)plVar12 - (long)plVar4)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar3;
        if (uVar7 >> 0x3c == 0) {
          lVar9 = uVar7 << 4;
          __Znwm();
          lVar11 = lVar9 + lVar6;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,plVar4,lVar6);
          *plVar3 = lVar10;
          plVar2[0x4c] = lVar11 + uVar14 * 0x10;
          plVar2[0x4d] = lVar9 + uVar7 * 0x10;
          plStack_88 = plVar4;
          plStack_80 = plVar4;
          plStack_78 = plVar4;
          plStack_70 = plVar12;
          func_0x00010988c1b8(&plStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(plVar8,uVar14 * 0x10);
    plVar2[0x4c] = (long)(plVar8 + uVar14 * 2);
  }
  else if (uVar5 < uVar13) {
    while (plVar8 != plVar4 + uVar5 * 2) {
      plVar8 = plVar8 + -2;
      func_0x00010988c204(plVar8);
    }
    plVar2[0x4c] = (long)(plVar4 + uVar5 * 2);
  }
code_r0x00010988c138:
  plVar2[0x5a] = uVar5;
  return;
}



/* Entry: 10a5688a8; end: 10a568963;  */

void FUN_10a5688a8(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6619d5,0x12);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a568964);
  (*pcVar4)();
}



/* Entry: 10a568964; end: 10a568a5f;  */

undefined1  [16] FUN_10a568964(ulong param_1,undefined8 *param_2,ulong param_3)

{
  char *pcVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bf06f8;
  pcVar1 = "";
  if ((char *)*param_2 != (char *)0x0) {
    pcVar1 = (char *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pcVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110bf06f8;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110bf0a98;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a568a60; end: 10a568bcb;  */

void FUN_10a568a60(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f660f99,0x12);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a568b1c);
  (*pcVar4)();
}



/* Entry: 10a568bcc; end: 10a568bcf;  */

void FUN_10a568bcc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a568bd0; end: 10a568be3;  */

void FUN_10a568bd0(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a568be4; end: 10a568bfb;  */

void FUN_10a568be4(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a568bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a568bfc; end: 10a568c33;  */

undefined8 FUN_10a568bfc(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bf0a48);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a568c34; end: 10a568c37;  */

void FUN_10a568c34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a568c38; end: 10a568ef3;  */

void FUN_10a568c38(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long lStack_70;
  long *plStack_68;
  undefined **ppuStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a568ef4(param_5);
  plVar7 = param_2;
  FUN_10a373c54(param_2,param_4);
  uVar8 = (ulong)*(byte *)(plVar7[10] + 0x29);
  if (5 < uVar8) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a568ea8);
    (*pcVar3)();
  }
  FUN_10aba1500(&lStack_50,*(undefined8 *)(plVar7[10] + uVar8 * 8 + 0x30),plVar7,0);
  lVar5 = 200;
  __Znwm();
  plVar6 = (long *)plVar7[0x4d];
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar6 + 0xb0))();
    plVar7 = (long *)plVar7[0x4d];
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0xb8))();
      goto LAB_10a568d1c;
    }
  }
  plVar7 = (long *)0x0;
LAB_10a568d1c:
  FUN_10a557fc0(lVar5,&lStack_50,plVar6,plVar7);
  plVar7 = (long *)0x20;
  lStack_70 = lVar5;
  __Znwm();
  *plVar7 = (long)&PTR_FUN_110bf09f8;
  plVar7[1] = 0;
  plVar7[2] = 0;
  plVar7[3] = lVar5;
  plStack_68 = plVar7;
  func_0x00010a568b1c(&lStack_70,lVar5 + 0x98,lVar5);
  *(undefined1 *)(lStack_70 + 0xc0) = 1;
  *(undefined1 *)(lStack_70 + 0x90) = 1;
  fVar11 = *(float *)(lStack_70 + 0x88) / *(float *)(lStack_70 + 0x8c);
  fVar10 = 100.0;
  if (fVar11 <= 1.0) {
    fVar9 = 100.0;
    fVar10 = fVar11 * 100.0;
  }
  else {
    fVar9 = 100.0 / fVar11;
  }
  *(float *)(lStack_70 + 0x58) = fVar10;
  *(float *)(lStack_70 + 0x5c) = fVar9;
  if (plStack_48 != (long *)0x0) {
    plVar7 = plStack_48 + 1;
    do {
      lVar5 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  plStack_48 = plStack_68;
  lStack_50 = lStack_70;
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
  ppuStack_58 = &PTR_DAT_110bf06f8;
  func_0x000109899de4(param_1,param_2,&lStack_50,&ppuStack_58,0,0);
  plVar7 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar6 = plStack_48 + 1;
    do {
      lVar5 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar5 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10a568ef4; end: 10a568f17;  */

void FUN_10a568ef4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_50;
  long *plStack_48;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar5 = 0;
  FUN_10a052ee0(1,0);
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  plVar4 = (long *)param_1[1];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_48 = plVar4;
    if (plVar4 != (long *)0x0) {
      uStack_50 = *param_1;
    }
  }
  (**(code **)(*plVar3 + 0x108))(plVar3,uVar5,&uStack_50,param_4);
  plVar3 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar4 = plStack_48 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a568f18; end: 10a568fd7;  */

void FUN_10a568f18(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar4 = (long *)param_3[1];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_38 = plVar4;
    if (plVar4 != (long *)0x0) {
      uStack_40 = *param_3;
    }
  }
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_40,param_4);
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a568fd8; end: 10a5690c7;  */

void FUN_10a568fd8(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lStack_30;
  long *plStack_28;
  
  lVar4 = *param_3;
  if (lVar4 != 0) {
    ___dynamic_cast(lVar4,&PTR_DAT_110bf32c0,&PTR_DAT_110c42c58,0);
    if (lVar4 == 0) {
      lStack_30 = 0;
      plStack_28 = (long *)0x0;
    }
    else {
      plStack_28 = (long *)param_3[1];
      if (plStack_28 != (long *)0x0) {
        plVar5 = plStack_28 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar5 = param_1;
      lStack_30 = lVar4;
      (**(code **)(*param_1 + 0x1b0))(param_1,&lStack_30);
      if ((int)plVar5 != 0) {
        (**(code **)(*param_1 + 0x120))(param_1,lStack_30,0);
      }
    }
    plVar5 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  return;
}



/* Entry: 10a5690c8; end: 10a56924b;  */

void FUN_10a5690c8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  if (param_1[1] == 0) {
    lStack_40 = 0;
    plStack_38 = (long *)0x0;
  }
  else {
    FUN_10a3c37bc(&lStack_40,*(undefined8 *)(param_1[1] + 0x858),param_3,param_4);
    if (lStack_40 != 0) {
      FUN_10a03d13c(&uStack_50);
      if (plStack_48 != (long *)0x0) {
        plVar1 = plStack_48 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      goto LAB_10a569148;
    }
  }
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
LAB_10a569148:
  uStack_60 = uStack_50;
  plStack_58 = plStack_48;
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_60,param_5);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a56924c; end: 10a5692a7;  */

undefined8 FUN_10a56924c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*param_2 != 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    plVar1 = *(long **)(param_1 + 0x18);
    if (plVar2 == plVar1) {
LAB_10a569284:
      if (plVar2 != plVar1) {
        return 0;
      }
    }
    else {
      do {
        if (*plVar2 == *param_2) goto LAB_10a569284;
        plVar2 = plVar2 + 2;
      } while (plVar2 != plVar1);
    }
  }
  FUN_10a3c0d5c(param_1 + 0x10);
  return 1;
}



/* Entry: 10a5692a8; end: 10a56934f;  */

void FUN_10a5692a8(void)

{
  return;
}



/* Entry: 10a569350; end: 10a570433;  */

undefined8 * FUN_10a569350(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  code *pcStack_98;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xf) = 0;
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a577edc;
  puStack_b8 = &UNK_10f663059;
  uStack_b0 = 0x11;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a577f60;
  puStack_b8 = &UNK_10f645a5f;
  uStack_b0 = 0x15;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a578008;
  puStack_b8 = &UNK_10f66306b;
  uStack_b0 = 0x19;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57800c;
  puStack_b8 = &UNK_10f652ce3;
  uStack_b0 = 0x1f;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a578010;
  puStack_b8 = &UNK_10f65892e;
  uStack_b0 = 0x10;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a578014;
  puStack_b8 = &UNK_10f65c8b1;
  uStack_b0 = 0x23;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a578018;
  puStack_b8 = &UNK_10f65c8f3;
  uStack_b0 = 0x29;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57801c;
  puStack_b8 = &UNK_10f662d3d;
  uStack_b0 = 0xf;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a578078;
  puStack_b8 = &UNK_10f64c61b;
  uStack_b0 = 0xb;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57807c;
  puStack_b8 = &UNK_10f663085;
  uStack_b0 = 0x1f;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57811c;
  puStack_b8 = &UNK_10f6630a5;
  uStack_b0 = 0x1e;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a578168;
  puStack_b8 = &UNK_10f6630c4;
  uStack_b0 = 0x1c;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5781b0;
  puStack_b8 = &UNK_10f6630e1;
  uStack_b0 = 0x26;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5781f8;
  puStack_b8 = &UNK_10f663108;
  uStack_b0 = 0x23;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,1);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5782b4;
  puStack_b8 = &UNK_10f66312c;
  uStack_b0 = 0x23;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5782fc;
  puStack_b8 = &UNK_10f663150;
  uStack_b0 = 0x29;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a578344;
  puStack_b8 = &UNK_10f66317a;
  uStack_b0 = 0x1e;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5783f0;
  puStack_b8 = &UNK_10f663199;
  uStack_b0 = 0x1e;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a578438;
  puStack_b8 = &UNK_10f6631b8;
  uStack_b0 = 0x1d;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5784dc;
  puStack_b8 = &UNK_10f6631d6;
  uStack_b0 = 0x21;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a578524;
  puStack_b8 = &UNK_10f6631f8;
  uStack_b0 = 0x1b;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57856c;
  puStack_b8 = &UNK_10f647a28;
  uStack_b0 = 0x1c;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5785b8;
  puStack_b8 = &UNK_10f663214;
  uStack_b0 = 0x1b;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a578600;
  puStack_b8 = &UNK_10f645a33;
  uStack_b0 = 0x1b;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a578874;
  puStack_b8 = &UNK_10f663230;
  uStack_b0 = 0x18;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a578904;
  puStack_b8 = &UNK_10f663249;
  uStack_b0 = 0x27;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5789ec;
  puStack_b8 = &UNK_10f663271;
  uStack_b0 = 0x1d;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a578a34;
  puStack_b8 = &UNK_10f66328f;
  uStack_b0 = 0x25;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a578a7c;
  puStack_b8 = &UNK_10f6632b5;
  uStack_b0 = 0x24;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a578ac4;
  puStack_b8 = &UNK_10f6632da;
  uStack_b0 = 0x22;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a578b54;
  puStack_b8 = &UNK_10f6457e0;
  uStack_b0 = 0x1d;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a578ba4;
  puStack_b8 = &UNK_10f6632fd;
  uStack_b0 = 0x21;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a578c4c;
  puStack_b8 = &UNK_10f66331f;
  uStack_b0 = 0x28;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a578c94;
  puStack_b8 = &UNK_10f64131a;
  uStack_b0 = 0x24;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a578cdc;
  puStack_b8 = &UNK_10f663348;
  uStack_b0 = 0x1a;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a578cdc;
  puStack_b8 = &UNK_10f663363;
  uStack_b0 = 0x1c;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a578d3c;
  puStack_b8 = &UNK_10f663380;
  uStack_b0 = 0x16;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a578dc0;
  puStack_b8 = &UNK_10f663397;
  uStack_b0 = 0x1c;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a578e20;
  puStack_b8 = &UNK_10f6633b4;
  uStack_b0 = 0x21;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a578e78;
  puStack_b8 = &UNK_10f6633d6;
  uStack_b0 = 0x1d;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a578ec0;
  puStack_b8 = &UNK_10f6633f4;
  uStack_b0 = 0x10;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a578f40;
  puStack_b8 = &UNK_10f68f3f8;
  uStack_b0 = 0x19;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a578fa0;
  puStack_b8 = &UNK_10f663405;
  uStack_b0 = 0x18;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a579000;
  puStack_b8 = &UNK_10f633550;
  uStack_b0 = 0x27;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a579048;
  puStack_b8 = &UNK_10f64a871;
  uStack_b0 = 0x13;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5790a8;
  puStack_b8 = &UNK_10f66341e;
  uStack_b0 = 0x18;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a579108;
  puStack_b8 = &UNK_10f663437;
  uStack_b0 = 0x12;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a579168;
  puStack_b8 = &UNK_10f64c8c8;
  uStack_b0 = 0x19;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57916c;
  puStack_b8 = &UNK_10f64c8f4;
  uStack_b0 = 0x14;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5791ec;
  puStack_b8 = &UNK_10f66344a;
  uStack_b0 = 0x1e;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a579284;
  puStack_b8 = &UNK_10f663469;
  uStack_b0 = 0x28;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5792cc;
  puStack_b8 = &UNK_10f645a1b;
  uStack_b0 = 10;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a579360;
  puStack_b8 = &UNK_10f645c6c;
  uStack_b0 = 0x10;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a579458;
  puStack_b8 = &UNK_10f645c7d;
  uStack_b0 = 0x14;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a579544;
  puStack_b8 = &UNK_10f662d2d;
  uStack_b0 = 0xf;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,1);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57960c;
  puStack_b8 = &UNK_10f663492;
  uStack_b0 = 0xe;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a579668;
  puStack_b8 = &UNK_10f6634a1;
  uStack_b0 = 0x10;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5796c4;
  puStack_b8 = &UNK_10f6459d5;
  uStack_b0 = 0x15;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57970c;
  puStack_b8 = &UNK_10f65839d;
  uStack_b0 = 0x13;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,1);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a579710;
  puStack_b8 = &UNK_10f6583cb;
  uStack_b0 = 0x14;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,1);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5797bc;
  puStack_b8 = &UNK_10f6583e0;
  uStack_b0 = 0x18;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,1);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5797bc;
  puStack_b8 = &UNK_10f658473;
  uStack_b0 = 0x19;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5797c4;
  puStack_b8 = &UNK_10f661fc4;
  uStack_b0 = 0x22;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57985c;
  puStack_b8 = &UNK_10f661fe7;
  uStack_b0 = 0x28;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5798f8;
  puStack_b8 = &UNK_10f662010;
  uStack_b0 = 0x21;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a579994;
  puStack_b8 = &UNK_10f662032;
  uStack_b0 = 0x21;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a579a30;
  puStack_b8 = &UNK_10f662054;
  uStack_b0 = 0x1b;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a579ac8;
  puStack_b8 = &UNK_10f662070;
  uStack_b0 = 0x21;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a579b64;
  puStack_b8 = &UNK_10f662092;
  uStack_b0 = 0x27;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a579c08;
  puStack_b8 = &UNK_10f6620ba;
  uStack_b0 = 0x26;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a579ca0;
  puStack_b8 = &UNK_10f6620e1;
  uStack_b0 = 0x24;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a579d38;
  puStack_b8 = &UNK_10f662106;
  uStack_b0 = 0x2a;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = (code *)&UNK_10f661fc4;
  ppuStack_a0 = (undefined **)0x22;
  puStack_b8 = &UNK_10f661a85;
  uStack_b0 = 0x23;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f661fe7;
  ppuStack_a0 = (undefined **)0x28;
  puStack_b8 = &UNK_10f661aa9;
  uStack_b0 = 0x29;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f662010;
  ppuStack_a0 = (undefined **)0x21;
  puStack_b8 = &UNK_10f661ad3;
  uStack_b0 = 0x22;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f662032;
  ppuStack_a0 = (undefined **)0x21;
  puStack_b8 = &UNK_10f661af6;
  uStack_b0 = 0x22;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f662054;
  ppuStack_a0 = (undefined **)0x1b;
  puStack_b8 = &UNK_10f661b19;
  uStack_b0 = 0x1c;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f662070;
  ppuStack_a0 = (undefined **)0x21;
  puStack_b8 = &UNK_10f661b36;
  uStack_b0 = 0x22;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f662092;
  ppuStack_a0 = (undefined **)0x27;
  puStack_b8 = &UNK_10f661b59;
  uStack_b0 = 0x28;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f6620ba;
  ppuStack_a0 = (undefined **)0x26;
  puStack_b8 = &UNK_10f661b82;
  uStack_b0 = 0x27;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f6620e1;
  ppuStack_a0 = (undefined **)0x24;
  puStack_b8 = &UNK_10f661baa;
  uStack_b0 = 0x25;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f662106;
  ppuStack_a0 = (undefined **)0x2a;
  puStack_b8 = &UNK_10f661bd0;
  uStack_b0 = 0x2b;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a579dd0;
  puStack_b8 = &UNK_10f6634b2;
  uStack_b0 = 0x1b;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a579e68;
  puStack_b8 = &UNK_10f6634ce;
  uStack_b0 = 0xf;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a579ee8;
  puStack_b8 = &UNK_10f6634de;
  uStack_b0 = 0x13;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a579f9c;
  puStack_b8 = &UNK_10f6634f2;
  uStack_b0 = 0x1f;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a579fe4;
  puStack_b8 = &UNK_10f633e9d;
  uStack_b0 = 0xd;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57a044;
  puStack_b8 = &UNK_10f633eab;
  uStack_b0 = 0xe;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57a0a4;
  puStack_b8 = &UNK_10f6512b9;
  uStack_b0 = 0x10;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57a13c;
  puStack_b8 = &UNK_10f68f46c;
  uStack_b0 = 0x11;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57a19c;
  puStack_b8 = &UNK_10f663512;
  uStack_b0 = 0x11;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57a1fc;
  puStack_b8 = &UNK_10f63349d;
  uStack_b0 = 0xe;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57a27c;
  puStack_b8 = &UNK_10f663524;
  uStack_b0 = 0xf;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57a2dc;
  puStack_b8 = &UNK_10f663534;
  uStack_b0 = 0x11;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57a35c;
  puStack_b8 = &UNK_10f663546;
  uStack_b0 = 0x14;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57a3bc;
  puStack_b8 = &UNK_10f66355b;
  uStack_b0 = 0xe;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57a41c;
  puStack_b8 = &UNK_10f652ccf;
  uStack_b0 = 0x13;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57a4a8;
  puStack_b8 = &UNK_10f66356a;
  uStack_b0 = 0x16;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57a508;
  puStack_b8 = &UNK_10f663581;
  uStack_b0 = 0x19;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57a568;
  puStack_b8 = &UNK_10f66359b;
  uStack_b0 = 0x18;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57a5f4;
  puStack_b8 = &UNK_10f6635b4;
  uStack_b0 = 0x17;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57a654;
  puStack_b8 = &UNK_10f6635cc;
  uStack_b0 = 0x1f;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57a6b4;
  puStack_b8 = &UNK_10f6635ec;
  uStack_b0 = 0xf;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57a73c;
  puStack_b8 = &UNK_10f6635fc;
  uStack_b0 = 0x1d;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57a7d4;
  puStack_b8 = &UNK_10f651261;
  uStack_b0 = 0x19;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57a834;
  puStack_b8 = &UNK_10f651220;
  uStack_b0 = 0x17;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57a894;
  puStack_b8 = &UNK_10f66361a;
  uStack_b0 = 0x10;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57a8f4;
  puStack_b8 = &UNK_10f66362b;
  uStack_b0 = 0x1a;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57a98c;
  puStack_b8 = &UNK_10f652b9b;
  uStack_b0 = 0x10;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57a990;
  puStack_b8 = &UNK_10f64c492;
  uStack_b0 = 0x15;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57a994;
  puStack_b8 = &UNK_10f63972b;
  uStack_b0 = 0x1a;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57a998;
  puStack_b8 = &UNK_10f6586c9;
  uStack_b0 = 0x15;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,1);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57a99c;
  puStack_b8 = &UNK_10f663646;
  uStack_b0 = 0x15;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57aa60;
  puStack_b8 = &UNK_10f66365c;
  uStack_b0 = 0x11;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57aa64;
  puStack_b8 = &UNK_10f66366e;
  uStack_b0 = 0xd;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,1);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57ab18;
  puStack_b8 = &UNK_10f66367c;
  uStack_b0 = 0x16;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,1);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57ab1c;
  puStack_b8 = &UNK_10f663693;
  uStack_b0 = 0x17;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,1);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57ab20;
  puStack_b8 = &UNK_10f652d97;
  uStack_b0 = 0x19;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57ab24;
  puStack_b8 = &UNK_10e4b880f;
  uStack_b0 = 0x10;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57ab80;
  puStack_b8 = &UNK_10e4b8820;
  uStack_b0 = 0xe;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57abdc;
  puStack_b8 = &UNK_10e4b882f;
  uStack_b0 = 0xf;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57ac34;
  puStack_b8 = &UNK_10e4b883f;
  uStack_b0 = 0xf;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57ac90;
  puStack_b8 = &UNK_10e4b884f;
  uStack_b0 = 0xf;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57acec;
  puStack_b8 = &UNK_10e4b885f;
  uStack_b0 = 0xf;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57ad50;
  puStack_b8 = &UNK_10e4b886f;
  uStack_b0 = 0x11;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57adac;
  puStack_b8 = &UNK_10e4b8881;
  uStack_b0 = 0xf;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57ae1c;
  puStack_b8 = &UNK_10e4b8891;
  uStack_b0 = 0xf;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57ae80;
  puStack_b8 = &UNK_10e4b88a1;
  uStack_b0 = 0xf;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57aef0;
  puStack_b8 = &UNK_10e4b88b1;
  uStack_b0 = 0xf;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57af4c;
  puStack_b8 = &UNK_10e4b88c1;
  uStack_b0 = 0x15;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57afb0;
  puStack_b8 = &UNK_10e4b88d7;
  uStack_b0 = 0x17;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57b014;
  puStack_b8 = &UNK_10e4b88ef;
  uStack_b0 = 0x14;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57b070;
  puStack_b8 = &UNK_10e4b8904;
  uStack_b0 = 0x15;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57b0cc;
  puStack_b8 = &UNK_10e4b891a;
  uStack_b0 = 0x13;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57b128;
  puStack_b8 = &UNK_10e4b892e;
  uStack_b0 = 0x14;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57b184;
  puStack_b8 = &UNK_10e4b8943;
  uStack_b0 = 0x1c;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57b1ec;
  puStack_b8 = &UNK_10e4b8960;
  uStack_b0 = 0x1a;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57b250;
  puStack_b8 = &UNK_10e4b897b;
  uStack_b0 = 0x14;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57b2ac;
  puStack_b8 = &UNK_10e4b8990;
  uStack_b0 = 0x14;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57b308;
  puStack_b8 = &UNK_10e4b89a5;
  uStack_b0 = 0x14;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57b364;
  puStack_b8 = &UNK_10e4b89ba;
  uStack_b0 = 0x14;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57b3c0;
  puStack_b8 = &UNK_10e4b89cf;
  uStack_b0 = 0x14;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57b41c;
  puStack_b8 = &UNK_10e4b89e4;
  uStack_b0 = 0x14;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57b478;
  puStack_b8 = &UNK_10e4b89f9;
  uStack_b0 = 0x16;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57b4d4;
  puStack_b8 = &UNK_10e4b8a10;
  uStack_b0 = 0x19;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57b52c;
  puStack_b8 = &UNK_10f652b5a;
  uStack_b0 = 0xe;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57b530;
  puStack_b8 = &UNK_10f6636ab;
  uStack_b0 = 0x19;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57b534;
  puStack_b8 = &UNK_10f6636c5;
  uStack_b0 = 0x11;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57b590;
  puStack_b8 = &UNK_10f662cf5;
  uStack_b0 = 0x18;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57b644;
  puStack_b8 = &UNK_10f65c6f9;
  uStack_b0 = 0x22;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57b648;
  puStack_b8 = &UNK_10f65c943;
  uStack_b0 = 0x17;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,1);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57b64c;
  puStack_b8 = &UNK_10f662d0e;
  uStack_b0 = 0x1e;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57b650;
  puStack_b8 = &UNK_10f64cb48;
  uStack_b0 = 0x1e;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a581a08;
  puStack_b8 = &UNK_10f64c627;
  uStack_b0 = 0x1d;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a581a0c;
  puStack_b8 = &UNK_10f662cd1;
  uStack_b0 = 0x23;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a581a10;
  puStack_b8 = &UNK_10f64c5e5;
  uStack_b0 = 0x19;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a581a14;
  puStack_b8 = &UNK_10f65c6c3;
  uStack_b0 = 0x15;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a581a18;
  puStack_b8 = &UNK_10f65869f;
  uStack_b0 = 0x19;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,1);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a581a1c;
  puStack_b8 = &UNK_10f685132;
  uStack_b0 = 0x20;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a581d54;
  puStack_b8 = &UNK_10f64c956;
  uStack_b0 = 0x1c;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a581d58;
  puStack_b8 = &UNK_10f6636d7;
  uStack_b0 = 0x1c;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a581d5c;
  puStack_b8 = &UNK_10f6636f4;
  uStack_b0 = 0x14;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a581e28;
  puStack_b8 = &UNK_10f663709;
  uStack_b0 = 0x16;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a581e84;
  puStack_b8 = &UNK_10f663720;
  uStack_b0 = 0x1a;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a581e88;
  puStack_b8 = &UNK_10f65112b;
  uStack_b0 = 0x19;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a581f0c;
  puStack_b8 = &UNK_10f66373b;
  uStack_b0 = 0x13;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a581f88;
  puStack_b8 = &UNK_10f645f59;
  uStack_b0 = 0x1a;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a582074;
  puStack_b8 = &UNK_10f651145;
  uStack_b0 = 0x14;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a582160;
  puStack_b8 = &UNK_10f66374f;
  uStack_b0 = 0x1c;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5821c0;
  puStack_b8 = &UNK_10f65ce00;
  uStack_b0 = 0x17;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a582244;
  puStack_b8 = &UNK_10f66376c;
  uStack_b0 = 0x17;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5822c0;
  puStack_b8 = &UNK_10f663784;
  uStack_b0 = 0x18;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a582320;
  puStack_b8 = &UNK_10f66379d;
  uStack_b0 = 0x17;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a582380;
  puStack_b8 = &UNK_10f6637b5;
  uStack_b0 = 0x20;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a58240c;
  puStack_b8 = &UNK_10f6637d6;
  uStack_b0 = 0x21;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a582498;
  puStack_b8 = &UNK_10f6637f8;
  uStack_b0 = 0x16;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a582524;
  puStack_b8 = &UNK_10f66380f;
  uStack_b0 = 0x1a;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5825b0;
  puStack_b8 = &UNK_10f66382a;
  uStack_b0 = 0x1f;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a582610;
  puStack_b8 = &UNK_10f66384a;
  uStack_b0 = 0x16;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,1);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a582670;
  puStack_b8 = &UNK_10f663861;
  uStack_b0 = 0x17;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5826f8;
  puStack_b8 = &UNK_10f663879;
  uStack_b0 = 0x1b;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a582758;
  puStack_b8 = &UNK_10f663895;
  uStack_b0 = 0x1a;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5827b8;
  puStack_b8 = &UNK_10f6638b0;
  uStack_b0 = 0x1a;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a582850;
  puStack_b8 = &UNK_10f6638cb;
  uStack_b0 = 0x18;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a5828f4;
  puStack_b8 = &UNK_10f6638e4;
  uStack_b0 = 0x1a;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a582998;
  puStack_b8 = &UNK_10f6638ff;
  uStack_b0 = 0x19;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a582a2c;
  puStack_b8 = &UNK_10f663919;
  uStack_b0 = 0x18;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a582ac4;
  puStack_b8 = &UNK_10f663932;
  uStack_b0 = 0x13;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a582b58;
  puStack_b8 = &UNK_10f663946;
  uStack_b0 = 0x19;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a582bec;
  puStack_b8 = &UNK_10f663960;
  uStack_b0 = 0x1e;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a582c7c;
  puStack_b8 = &UNK_10f66397f;
  uStack_b0 = 0x1f;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a582d18;
  puStack_b8 = &UNK_10f66399f;
  uStack_b0 = 0x1d;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a582db4;
  puStack_b8 = &UNK_10f6639bd;
  uStack_b0 = 0x1e;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a582e48;
  puStack_b8 = &UNK_10f6639dc;
  uStack_b0 = 0x1c;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a582edc;
  puStack_b8 = &UNK_10f6639f9;
  uStack_b0 = 0x1a;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a582f70;
  puStack_b8 = &UNK_10f663a14;
  uStack_b0 = 0x15;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a583004;
  puStack_b8 = &UNK_10f663a2a;
  uStack_b0 = 0x18;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a583098;
  puStack_b8 = &UNK_10f663a43;
  uStack_b0 = 0x1f;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a583130;
  puStack_b8 = &UNK_10f663a63;
  uStack_b0 = 0x1e;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a5831c8;
  puStack_b8 = &UNK_10f663a82;
  uStack_b0 = 0x20;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a583260;
  puStack_b8 = &UNK_10f66300c;
  uStack_b0 = 0x24;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5832c0;
  puStack_b8 = &UNK_10f663aa3;
  uStack_b0 = 0x24;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a583320;
  puStack_b8 = &UNK_10f662ff0;
  uStack_b0 = 0x1b;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a5833a8;
  puStack_b8 = &UNK_10f663ac8;
  uStack_b0 = 0x1f;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a583440;
  puStack_b8 = &UNK_10f663ae8;
  uStack_b0 = 0x1e;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a5834d8;
  puStack_b8 = &UNK_10f663b07;
  uStack_b0 = 0x1d;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a583570;
  puStack_b8 = &UNK_10f663b25;
  uStack_b0 = 0x21;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a583608;
  puStack_b8 = &UNK_10f663b47;
  uStack_b0 = 0x20;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a5836a0;
  puStack_b8 = &UNK_10f663b68;
  uStack_b0 = 0x1f;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a583738;
  puStack_b8 = &UNK_10f663b88;
  uStack_b0 = 0x17;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a5837c0;
  puStack_b8 = &UNK_10f663ba0;
  uStack_b0 = 0x17;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a583848;
  puStack_b8 = &UNK_10f663bb8;
  uStack_b0 = 0x19;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a5838d0;
  puStack_b8 = &UNK_10f663bd2;
  uStack_b0 = 0x17;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a583958;
  puStack_b8 = &UNK_10f663bea;
  uStack_b0 = 0x18;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a5839e0;
  puStack_b8 = &UNK_10f663c03;
  uStack_b0 = 0x25;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a583a68;
  puStack_b8 = &UNK_10f663c29;
  uStack_b0 = 0x24;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a583af0;
  puStack_b8 = &UNK_10f663c4e;
  uStack_b0 = 0x25;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a583b50;
  puStack_b8 = &UNK_10f663c74;
  uStack_b0 = 0x24;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a583bb0;
  puStack_b8 = &UNK_10f663c99;
  uStack_b0 = 0x24;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a583c38;
  puStack_b8 = &UNK_10f663cbe;
  uStack_b0 = 0x23;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a583cc0;
  puStack_b8 = &UNK_10f663ce2;
  uStack_b0 = 0x21;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a583d48;
  puStack_b8 = &UNK_10f663d04;
  uStack_b0 = 0x20;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a583dd0;
  puStack_b8 = &UNK_10f663d25;
  uStack_b0 = 0x18;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a583e58;
  puStack_b8 = &UNK_10f663d3e;
  uStack_b0 = 0x19;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a583ee0;
  puStack_b8 = &UNK_10f663d58;
  uStack_b0 = 0x12;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a583f5c;
  puStack_b8 = &UNK_10f663d6b;
  uStack_b0 = 0x15;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a583fd8;
  puStack_b8 = &UNK_10f663d81;
  uStack_b0 = 0x16;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a584038;
  puStack_b8 = &UNK_10f663d98;
  uStack_b0 = 0x19;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5840b4;
  puStack_b8 = &UNK_10f663db2;
  uStack_b0 = 0x1d;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a584130;
  puStack_b8 = &UNK_10f663dd0;
  uStack_b0 = 0x17;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5841ac;
  puStack_b8 = &UNK_10f663de8;
  uStack_b0 = 0x18;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a584228;
  puStack_b8 = &UNK_10f663e01;
  uStack_b0 = 0x1a;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5842a4;
  puStack_b8 = &UNK_10f663e1c;
  uStack_b0 = 0x1e;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a584320;
  puStack_b8 = &UNK_10f6334f8;
  uStack_b0 = 0x14;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a584380;
  puStack_b8 = &UNK_10f663e3b;
  uStack_b0 = 0x15;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5843fc;
  puStack_b8 = &UNK_10f663e51;
  uStack_b0 = 0x18;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a573938;
  puStack_b8 = &UNK_10f662131;
  uStack_b0 = 0x21;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a573980;
  puStack_b8 = &UNK_10f662153;
  uStack_b0 = 0x17;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  FUN_10a573a28(param_1);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a573af0;
  puStack_b8 = &UNK_10f66216b;
  uStack_b0 = 0x17;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a573b50;
  puStack_b8 = &UNK_10f662183;
  uStack_b0 = 0x21;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a573b9c;
  puStack_b8 = &UNK_10f6621a5;
  uStack_b0 = 0x23;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a573be4;
  puStack_b8 = &UNK_10f6621c9;
  uStack_b0 = 0x21;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a573c2c;
  puStack_b8 = &UNK_10f65ce18;
  uStack_b0 = 0x19;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a573cd4;
  puStack_b8 = &UNK_10f6621eb;
  uStack_b0 = 0x1c;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a573d7c;
  puStack_b8 = &UNK_10f662208;
  uStack_b0 = 0x26;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a573dc4;
  puStack_b8 = &UNK_10f66222f;
  uStack_b0 = 0x30;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  FUN_10a573e0c(param_1);
  FUN_10a573ed0(param_1);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57408c;
  puStack_b8 = &UNK_10f662260;
  uStack_b0 = 0x20;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  FUN_10a573e0c(param_1);
  FUN_10a573ed0(param_1);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a574108;
  puStack_b8 = &UNK_10f662281;
  uStack_b0 = 0x1f;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a574174;
  puStack_b8 = &UNK_10f6622a1;
  uStack_b0 = 0x1d;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5741d4;
  puStack_b8 = &UNK_10f64c7f0;
  uStack_b0 = 0x18;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  FUN_10a573a28(param_1);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5741d8;
  puStack_b8 = &UNK_10f6622bf;
  uStack_b0 = 0x23;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a574284;
  puStack_b8 = &UNK_10f6622e3;
  uStack_b0 = 0x21;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a574334;
  puStack_b8 = &UNK_10f662305;
  uStack_b0 = 0x19;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5744c4;
  puStack_b8 = &UNK_10f66231f;
  uStack_b0 = 0x19;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a574524;
  puStack_b8 = &UNK_10f650b34;
  uStack_b0 = 0x12;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5745f0;
  puStack_b8 = &UNK_10f64c852;
  uStack_b0 = 0x19;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5746b8;
  puStack_b8 = &UNK_10f662339;
  uStack_b0 = 0x2c;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a574700;
  puStack_b8 = &UNK_10f662366;
  uStack_b0 = 0x26;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a574748;
  puStack_b8 = &UNK_10f66238d;
  uStack_b0 = 0x2d;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  FUN_10a573ed0(param_1);
  FUN_10a573e0c(param_1);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a574c48;
  puStack_b8 = &UNK_10f6623bb;
  uStack_b0 = 0x29;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a574ca4;
  puStack_b8 = &UNK_10f6623e5;
  uStack_b0 = 0x1c;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a574d00;
  puStack_b8 = &UNK_10f6345f0;
  uStack_b0 = 0x13;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a574d88;
  puStack_b8 = &UNK_10f662402;
  uStack_b0 = 0x20;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a574de8;
  puStack_b8 = &UNK_10f662423;
  uStack_b0 = 0x25;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a574e30;
  puStack_b8 = &UNK_10f662449;
  uStack_b0 = 0x20;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  FUN_10a574ac0(param_1);
  FUN_10a574b84(param_1);
  FUN_10a574b84(param_1);
  FUN_10a574ac0(param_1);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a574fac;
  puStack_b8 = &UNK_10f6624a7;
  uStack_b0 = 0x33;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a574ff8;
  puStack_b8 = &UNK_10f6624db;
  uStack_b0 = 0x31;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575090;
  puStack_b8 = &UNK_10f66250d;
  uStack_b0 = 0x31;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575128;
  puStack_b8 = &UNK_10f66253f;
  uStack_b0 = 0x1f;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,1);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575170;
  puStack_b8 = &UNK_10f66255f;
  uStack_b0 = 0x21;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5751bc;
  puStack_b8 = &UNK_10f662581;
  uStack_b0 = 0xe;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575218;
  puStack_b8 = &UNK_10f662590;
  uStack_b0 = 0x1b;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5752c8;
  puStack_b8 = &UNK_10f6625ac;
  uStack_b0 = 0x1b;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575378;
  puStack_b8 = &UNK_10f6625c8;
  uStack_b0 = 0x1b;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575428;
  puStack_b8 = &UNK_10f6625e4;
  uStack_b0 = 0x1c;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5754d8;
  puStack_b8 = &UNK_10f662601;
  uStack_b0 = 0x25;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575588;
  puStack_b8 = &UNK_10f662627;
  uStack_b0 = 0x19;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5755e8;
  puStack_b8 = &UNK_10f662641;
  uStack_b0 = 0x18;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575648;
  puStack_b8 = &UNK_10f66265a;
  uStack_b0 = 0x1b;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5756f8;
  puStack_b8 = &UNK_10f662676;
  uStack_b0 = 0x1c;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5757a8;
  puStack_b8 = &UNK_10f662693;
  uStack_b0 = 0x1c;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575858;
  puStack_b8 = &UNK_10f6626b0;
  uStack_b0 = 0x1d;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575908;
  puStack_b8 = &UNK_10f6626ce;
  uStack_b0 = 0x1e;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575968;
  puStack_b8 = &UNK_10f65ca92;
  uStack_b0 = 0x18;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57596c;
  puStack_b8 = &UNK_10f6626ed;
  uStack_b0 = 0x17;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a575970;
  puStack_b8 = &UNK_10f652bac;
  uStack_b0 = 0x17;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575974;
  puStack_b8 = &UNK_10f662705;
  uStack_b0 = 0x20;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5759bc;
  puStack_b8 = &UNK_10f65cab9;
  uStack_b0 = 0x19;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5759bc;
  puStack_b8 = &UNK_10f662726;
  uStack_b0 = 0x1b;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575a1c;
  puStack_b8 = &UNK_10f65cbd0;
  uStack_b0 = 0x18;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575a20;
  puStack_b8 = &UNK_10f662742;
  uStack_b0 = 0x1c;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575a6c;
  puStack_b8 = &UNK_10f66275f;
  uStack_b0 = 0x28;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575ab4;
  puStack_b8 = &UNK_10f662788;
  uStack_b0 = 0x2c;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575afc;
  puStack_b8 = &UNK_10f6627b5;
  uStack_b0 = 0x27;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,1);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575bc0;
  puStack_b8 = &UNK_10f6627dd;
  uStack_b0 = 0x20;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575c08;
  puStack_b8 = &UNK_10f645950;
  uStack_b0 = 0x17;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575c88;
  puStack_b8 = &UNK_10f64592b;
  uStack_b0 = 0x24;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575cd0;
  puStack_b8 = &UNK_10f6627fe;
  uStack_b0 = 0x14;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = (code *)&UNK_10f662813;
  ppuStack_a0 = (undefined **)0x14;
  FUN_10ab162a0(param_1,&pcStack_a8,100);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575d30;
  puStack_b8 = &UNK_10f662828;
  uStack_b0 = 0x1d;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575d78;
  puStack_b8 = &UNK_10f662846;
  uStack_b0 = 0x22;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575dc0;
  puStack_b8 = &UNK_10f662869;
  uStack_b0 = 0x1a;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575e40;
  puStack_b8 = &UNK_10f662884;
  uStack_b0 = 0x15;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575e44;
  puStack_b8 = &UNK_10f66289a;
  uStack_b0 = 0x11;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575ec4;
  puStack_b8 = &UNK_10f6628ac;
  uStack_b0 = 0x22;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a575f10;
  puStack_b8 = &UNK_10f6628cf;
  uStack_b0 = 0x28;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a575fa0;
  puStack_b8 = &UNK_10f6628f8;
  uStack_b0 = 0x2a;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a576030;
  puStack_b8 = &UNK_10f662923;
  uStack_b0 = 0x2a;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  FUN_10aa23034(param_1,0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5760c0;
  puStack_b8 = &UNK_10f68544c;
  uStack_b0 = 0x16;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a576120;
  puStack_b8 = &UNK_10f66294e;
  uStack_b0 = 0x13;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,1);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57617c;
  puStack_b8 = &UNK_10f65ca56;
  uStack_b0 = 0x18;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57617c;
  puStack_b8 = &UNK_10f662962;
  uStack_b0 = 0x1f;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5761dc;
  puStack_b8 = &UNK_10f662982;
  uStack_b0 = 0x28;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57623c;
  puStack_b8 = &UNK_10f662fcd;
  uStack_b0 = 0x22;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57629c;
  puStack_b8 = &UNK_10f6629ab;
  uStack_b0 = 0x28;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a57632c;
  puStack_b8 = &UNK_10f6629d4;
  uStack_b0 = 0x2a;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a5763bc;
  puStack_b8 = &UNK_10f6629ff;
  uStack_b0 = 0x2a;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57644c;
  puStack_b8 = &UNK_10f662a2a;
  uStack_b0 = 0x1d;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5764a4;
  puStack_b8 = &UNK_10f662a48;
  uStack_b0 = 0x19;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a576500;
  puStack_b8 = &UNK_10f662a62;
  uStack_b0 = 0x15;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57655c;
  puStack_b8 = &UNK_10f662a78;
  uStack_b0 = 0xd;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a57661c;
  puStack_b8 = &UNK_10f662a86;
  uStack_b0 = 0xb;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = (code *)0x10a5766e8;
  puStack_b8 = &UNK_10f562af1;
  uStack_b0 = 7;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a576760;
  puStack_b8 = &UNK_10f662a92;
  uStack_b0 = 0x20;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5767a8;
  puStack_b8 = &UNK_10f662ab3;
  uStack_b0 = 0x1f;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5767f0;
  puStack_b8 = &UNK_10f662ad3;
  uStack_b0 = 0x22;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a576838;
  puStack_b8 = &UNK_10f662af6;
  uStack_b0 = 0x20;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a576884;
  puStack_b8 = &UNK_10f662b17;
  uStack_b0 = 0x1c;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5768cc;
  puStack_b8 = &UNK_10f662b34;
  uStack_b0 = 0x1c;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a576ec0;
  puStack_b8 = &UNK_10f658525;
  uStack_b0 = 0x15;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a576f40;
  puStack_b8 = &UNK_10f65856b;
  uStack_b0 = 0x16;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a576fc0;
  puStack_b8 = &UNK_10f65853b;
  uStack_b0 = 0x1e;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a576fc0;
  puStack_b8 = &UNK_10f6584b8;
  uStack_b0 = 0x18;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a576fc8;
  puStack_b8 = &UNK_10f662b51;
  uStack_b0 = 0x20;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a577078;
  puStack_b8 = &UNK_10f662b72;
  uStack_b0 = 0x1f;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,0x19,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a577194;
  puStack_b8 = &UNK_10f65c735;
  uStack_b0 = 0x15;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  FUN_10a5770d0(param_1);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5771f4;
  puStack_b8 = &UNK_10f662b92;
  uStack_b0 = 0x14;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  FUN_10a5770d0(param_1);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a577250;
  puStack_b8 = &UNK_10f662ba7;
  uStack_b0 = 0x13;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5772d0;
  puStack_b8 = &UNK_10f656540;
  uStack_b0 = 0x1b;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a577350;
  puStack_b8 = &UNK_10f662bbb;
  uStack_b0 = 0x19;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5778a8;
  puStack_b8 = &UNK_10f662bd5;
  uStack_b0 = 0x1d;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = (code *)&UNK_10f662bf3;
  ppuStack_a0 = (undefined **)0x18;
  FUN_10ab162a0(param_1,&pcStack_a8,100);
  pcStack_a8 = (code *)&UNK_10f662c0c;
  ppuStack_a0 = (undefined **)0x1b;
  FUN_10ab162a0(param_1,&pcStack_a8,0x19);
  pcStack_a8 = (code *)&UNK_10f662c28;
  ppuStack_a0 = (undefined **)0x23;
  FUN_10ab162a0(param_1,&pcStack_a8,0x19);
  pcStack_a8 = (code *)&UNK_10f662c4c;
  ppuStack_a0 = (undefined **)0x13;
  FUN_10ab162a0(param_1,&pcStack_a8,100);
  pcStack_a8 = (code *)&UNK_10f662c60;
  ppuStack_a0 = (undefined **)0x18;
  FUN_10ab162a0(param_1,&pcStack_a8,0x19);
  pcStack_a8 = FUN_10a061484;
  ppuStack_a0 = &PTR_DAT_110b9ec98;
  pcStack_98 = FUN_10a5778f0;
  puStack_b8 = &UNK_10f6346cc;
  uStack_b0 = 0x1c;
  FUN_10a57077c(param_1,&puStack_b8,&pcStack_a8,100,0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pcStack_a8 = (code *)&UNK_10f662c79;
  ppuStack_a0 = (undefined **)0x1a;
  FUN_10ab162a0(param_1,&pcStack_a8,100);
  pcStack_a8 = (code *)&UNK_10f662c94;
  ppuStack_a0 = (undefined **)0x1c;
  FUN_10ab162a0(param_1,&pcStack_a8,100);
  pcStack_a8 = (code *)&UNK_10f662cb1;
  ppuStack_a0 = (undefined **)0x1f;
  FUN_10ab162a0(param_1,&pcStack_a8,100);
  FUN_10a5770d0(param_1);
  FUN_10aa34780(param_1);
  func_0x00010a4083e4(param_1);
  pcStack_a8 = (code *)&UNK_10f674b12;
  ppuStack_a0 = (undefined **)0x18;
  FUN_10ab162a0(param_1,&pcStack_a8,0x19);
  pcStack_a8 = (code *)&UNK_10f674b2b;
  ppuStack_a0 = (undefined **)0x15;
  FUN_10ab162a0(param_1,&pcStack_a8,0x19);
  pcStack_a8 = (code *)&UNK_10f6340f6;
  ppuStack_a0 = (undefined **)0x1b;
  FUN_10ab162a0(param_1,&pcStack_a8,0x19);
  pcStack_a8 = (code *)&UNK_10f68281c;
  ppuStack_a0 = (undefined **)0x16;
  FUN_10ab162a0(param_1,&pcStack_a8,100);
  FUN_10a74ce08(param_1,0);
  FUN_10a00f228(param_1,0);
  pcStack_a8 = (code *)&UNK_10f652ccf;
  ppuStack_a0 = (undefined **)0x13;
  puStack_b8 = &UNK_10f661bfc;
  uStack_b0 = 0xc;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f662cd1;
  ppuStack_a0 = (undefined **)0x23;
  puStack_b8 = &UNK_10f661c09;
  uStack_b0 = 0x1c;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f64cb48;
  ppuStack_a0 = (undefined **)0x1e;
  puStack_b8 = &UNK_10f661c26;
  uStack_b0 = 0xf;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f64cb48;
  ppuStack_a0 = (undefined **)0x1e;
  puStack_b8 = &UNK_10f661c36;
  uStack_b0 = 0x18;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f652d97;
  ppuStack_a0 = (undefined **)0x19;
  puStack_b8 = &UNK_10f661c4f;
  uStack_b0 = 0x10;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f662cf5;
  ppuStack_a0 = (undefined **)0x18;
  puStack_b8 = &UNK_10f661c60;
  uStack_b0 = 0xf;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f65c943;
  ppuStack_a0 = (undefined **)0x17;
  puStack_b8 = &UNK_10f661c70;
  uStack_b0 = 0xe;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f662d0e;
  ppuStack_a0 = (undefined **)0x1e;
  puStack_b8 = &UNK_10f661c7f;
  uStack_b0 = 0x15;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f65c6c3;
  ppuStack_a0 = (undefined **)0x15;
  puStack_b8 = &UNK_10f661c95;
  uStack_b0 = 0x14;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f662d2d;
  ppuStack_a0 = (undefined **)0xf;
  puStack_b8 = &UNK_10f661caa;
  uStack_b0 = 0x14;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f662d3d;
  ppuStack_a0 = (undefined **)0xf;
  puStack_b8 = &UNK_10f661cbf;
  uStack_b0 = 0x18;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f63972b;
  ppuStack_a0 = (undefined **)0x1a;
  puStack_b8 = &UNK_10f68f608;
  uStack_b0 = 0x14;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f65853b;
  ppuStack_a0 = (undefined **)0x1e;
  puStack_b8 = &UNK_10f662d4d;
  uStack_b0 = 0x1d;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f6584b8;
  ppuStack_a0 = (undefined **)0x18;
  puStack_b8 = &UNK_10f662d6b;
  uStack_b0 = 0x15;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f66253f;
  ppuStack_a0 = (undefined **)0x1f;
  puStack_b8 = &UNK_10f662d81;
  uStack_b0 = 0x19;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f6625e4;
  ppuStack_a0 = (undefined **)0x1c;
  puStack_b8 = &UNK_10f662d9b;
  uStack_b0 = 0x24;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f6625c8;
  ppuStack_a0 = (undefined **)0x1b;
  puStack_b8 = &UNK_10f662dc0;
  uStack_b0 = 0x23;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f662601;
  ppuStack_a0 = (undefined **)0x25;
  puStack_b8 = &UNK_10f662de4;
  uStack_b0 = 0x2d;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f6625ac;
  ppuStack_a0 = (undefined **)0x1b;
  puStack_b8 = &UNK_10f662e12;
  uStack_b0 = 0x22;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f662590;
  ppuStack_a0 = (undefined **)0x1b;
  puStack_b8 = &UNK_10f662e35;
  uStack_b0 = 0x22;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f6626b0;
  ppuStack_a0 = (undefined **)0x1d;
  puStack_b8 = &UNK_10f662e58;
  uStack_b0 = 0x21;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f662676;
  ppuStack_a0 = (undefined **)0x1c;
  puStack_b8 = &UNK_10f662e7a;
  uStack_b0 = 0x20;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f66265a;
  ppuStack_a0 = (undefined **)0x1b;
  puStack_b8 = &UNK_10f662e9b;
  uStack_b0 = 0x1f;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f662693;
  ppuStack_a0 = (undefined **)0x1c;
  puStack_b8 = &UNK_10f662ebb;
  uStack_b0 = 0x20;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f6627b5;
  ppuStack_a0 = (undefined **)0x27;
  puStack_b8 = &UNK_10f662edc;
  uStack_b0 = 0x1e;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f65cbd0;
  ppuStack_a0 = (undefined **)0x18;
  puStack_b8 = &UNK_10f662efb;
  uStack_b0 = 0x17;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f64c7f0;
  ppuStack_a0 = (undefined **)0x18;
  puStack_b8 = &UNK_10f662f13;
  uStack_b0 = 0x19;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f65ca56;
  ppuStack_a0 = (undefined **)0x18;
  puStack_b8 = &UNK_10f662f2d;
  uStack_b0 = 0x17;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f65c897;
  ppuStack_a0 = (undefined **)0x19;
  puStack_b8 = &UNK_10f662f45;
  uStack_b0 = 0x29;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f656540;
  ppuStack_a0 = (undefined **)0x1b;
  puStack_b8 = &UNK_10f662f6f;
  uStack_b0 = 0x21;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f662846;
  ppuStack_a0 = (undefined **)0x22;
  puStack_b8 = &UNK_10f662f91;
  uStack_b0 = 0x1f;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f65c897;
  ppuStack_a0 = (undefined **)0x19;
  puStack_b8 = &UNK_10f662fb1;
  uStack_b0 = 0x1b;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f65c897;
  ppuStack_a0 = (undefined **)0x19;
  puStack_b8 = &UNK_10f662f45;
  uStack_b0 = 0x29;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f662fcd;
  ppuStack_a0 = (undefined **)0x22;
  puStack_b8 = &UNK_10f661cd8;
  uStack_b0 = 0x24;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f662ff0;
  ppuStack_a0 = (undefined **)0x1b;
  puStack_b8 = &UNK_10f661cfd;
  uStack_b0 = 0x1d;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  pcStack_a8 = (code *)&UNK_10f66300c;
  ppuStack_a0 = (undefined **)0x24;
  puStack_b8 = &UNK_10f661d1b;
  uStack_b0 = 0x30;
  puVar1 = param_1;
  FUN_10a570434(param_1,&pcStack_a8,&puStack_b8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  do {
    func_0x00010a3f6014(param_1 + 10);
    func_0x000109f6f4d4(param_1 + 5);
    func_0x00010a3f60c0(param_1);
    __Unwind_Resume(puVar1);
  } while( true );
}



/* Entry: 10a570434; end: 10a57077b;  */

void FUN_10a570434(long *param_1,undefined8 *param_2,long *param_3,undefined4 param_4,byte param_5)

{
  undefined8 uVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x22;
  long *unaff_x23;
  long *plVar11;
  long *unaff_x27;
  ulong uVar12;
  undefined8 **ppuStack_188;
  undefined *puStack_180;
  undefined8 **ppuStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined1 uStack_159;
  undefined8 *puStack_158;
  undefined4 uStack_150;
  byte bStack_14c;
  undefined8 *puStack_148;
  undefined8 *apuStack_140 [7];
  long lStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined8 **ppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long *plStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined4 uStack_b0;
  undefined1 uStack_ac;
  long lStack_a8;
  undefined8 *apuStack_a0 [7];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = param_1;
  puVar5 = param_2;
  plVar11 = param_3;
  uStack_150 = param_4;
  FUN_10a10bbb4();
  ppuVar2 = (undefined8 **)0x0;
  if (plVar7 == (long *)0x0) goto LAB_10a5706e0;
  plStack_b8 = (long *)param_3[1];
  lStack_c0 = *param_3;
  uStack_b0 = (undefined4)plVar7[4];
  uStack_ac = *(undefined1 *)((long)plVar7 + 0x24);
  lStack_a8 = plVar7[5];
  (**(code **)(plVar7[6] + 0x18))(apuStack_a0);
  unaff_x22 = param_1;
  FUN_10a054838(param_1,lStack_c0,plStack_b8);
  unaff_x23 = plStack_b8;
  lVar10 = lStack_c0;
  plVar11 = (long *)param_1[1];
  plStack_c8 = param_3;
  if (plVar11 != (long *)0x0) {
    uVar12 = (long)plVar11 - 1;
    if (((ulong)plVar11 & uVar12) == 0) {
      unaff_x27 = (long *)(uVar12 & (ulong)unaff_x22);
    }
    else {
      unaff_x27 = unaff_x22;
      if (plVar11 <= unaff_x22) {
        uVar9 = 0;
        if (plVar11 != (long *)0x0) {
          uVar9 = (ulong)unaff_x22 / (ulong)plVar11;
        }
        unaff_x27 = (long *)((long)unaff_x22 - uVar9 * (long)plVar11);
      }
    }
    plVar7 = *(long **)(*param_1 + (long)unaff_x27 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar8 = (long *)plVar7[1];
        if (plVar8 == unaff_x22) {
          if ((long *)plVar7[3] == unaff_x23) {
            uVar1 = plVar7[2];
            _memcmp(uVar1,lVar10,unaff_x23);
            if ((int)uVar1 == 0) goto LAB_10a5706bc;
          }
        }
        else {
          if (((ulong)plVar11 & uVar12) == 0) {
            plVar8 = (long *)((ulong)plVar8 & uVar12);
          }
          else if (plVar11 <= plVar8) {
            uVar9 = 0;
            if (plVar11 != (long *)0x0) {
              uVar9 = (ulong)plVar8 / (ulong)plVar11;
            }
            plVar8 = (long *)((long)plVar8 - uVar9 * (long)plVar11);
          }
          if (plVar8 != unaff_x27) break;
        }
      }
    }
  }
  unaff_x23 = (long *)0x68;
  __Znwm();
  *unaff_x23 = 0;
  unaff_x23[1] = (long)unaff_x22;
  unaff_x23[3] = (long)plStack_b8;
  unaff_x23[2] = lStack_c0;
  *(undefined4 *)(unaff_x23 + 4) = uStack_b0;
  *(undefined1 *)((long)unaff_x23 + 0x24) = uStack_ac;
  unaff_x23[5] = lStack_a8;
  (*(code *)apuStack_a0[0][2])(unaff_x23 + 6,apuStack_a0);
  if ((plVar11 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar11 < (float)(param_1[3] + 1))) {
    uVar12 = 1;
    if ((long *)0x2 < plVar11) {
      uVar12 = (ulong)(((ulong)plVar11 & (long)plVar11 - 1U) != 0);
    }
    uVar12 = uVar12 | (long)plVar11 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar12 <= uVar9) {
      uVar12 = uVar9;
    }
    FUN_10a584710(param_1,uVar12);
    plVar11 = (long *)param_1[1];
    if (((ulong)plVar11 & (long)plVar11 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar11 - 1U & (ulong)unaff_x22);
    }
    else {
      unaff_x27 = unaff_x22;
      if (plVar11 <= unaff_x22) {
        uVar12 = 0;
        if (plVar11 != (long *)0x0) {
          uVar12 = (ulong)unaff_x22 / (ulong)plVar11;
        }
        unaff_x27 = (long *)((long)unaff_x22 - uVar12 * (long)plVar11);
      }
    }
  }
  lVar10 = *param_1;
  plVar7 = *(long **)(lVar10 + (long)unaff_x27 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *unaff_x23 = *plVar7;
    *plVar7 = (long)unaff_x23;
    *(long **)(lVar10 + (long)unaff_x27 * 8) = plVar7;
    if (*unaff_x23 != 0) {
      plVar7 = *(long **)(*unaff_x23 + 8);
      if (((ulong)plVar11 & (long)plVar11 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar11 - 1U);
      }
      else if (plVar11 <= plVar7) {
        uVar12 = 0;
        if (plVar11 != (long *)0x0) {
          uVar12 = (ulong)plVar7 / (ulong)plVar11;
        }
        plVar7 = (long *)((long)plVar7 - uVar12 * (long)plVar11);
      }
      plVar7 = (long *)(*param_1 + (long)plVar7 * 8);
      goto LAB_10a5706ac;
    }
  }
  else {
    *unaff_x23 = *plVar7;
LAB_10a5706ac:
    *plVar7 = (long)unaff_x23;
  }
  param_1[3] = param_1[3] + 1;
LAB_10a5706bc:
  ppuVar2 = apuStack_a0;
  (*(code *)*apuStack_a0[0])();
  func_0x000109887510();
  puVar5 = (undefined8 *)*param_2;
  plVar11 = (long *)param_2[1];
  uStack_150 = (undefined4)*plStack_c8;
  param_5 = (byte)plStack_c8[1];
  func_0x000109887600();
LAB_10a5706e0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  (**(code **)unaff_x23[6])(unaff_x23 + 6);
  __ZdlPv(unaff_x23);
  (*(code *)*apuStack_a0[0])(apuStack_a0);
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  pcStack_d8 = FUN_10a57077c;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bStack_14c = param_5 & 1;
  puStack_148 = (undefined8 *)*plVar11;
  plStack_100 = unaff_x22;
  plStack_f8 = param_1;
  plStack_f0 = &lStack_c0;
  ppuStack_e8 = ppuVar2;
  puStack_e0 = &stack0xfffffffffffffff0;
  (**(code **)(plVar11[1] + 0x18))(apuStack_140,plVar11 + 1);
  puVar6 = &UNK_10dd5b8f9;
  ppuVar2 = &puStack_158;
  puStack_158 = puVar5;
  FUN_10a584484(ppuVar3,puVar5,&UNK_10dd5b8f9,ppuVar2,&uStack_159);
  ppuVar4 = ppuVar3 + 6;
  *(undefined4 *)(ppuVar3 + 4) = uStack_150;
  *(byte *)((long)ppuVar3 + 0x24) = bStack_14c;
  ppuVar3[5] = puStack_148;
  (*(code *)**ppuVar4)(ppuVar4);
  ppuVar3 = apuStack_140;
  (*(code *)apuStack_140[0][2])(ppuVar4);
  ppuVar4 = apuStack_140;
  (*(code *)*apuStack_140[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_140[0])(apuStack_140);
  __Unwind_Resume();
  pcStack_168 = FUN_10a570894;
  ppuVar4 = ppuVar4 + 10;
  ppuStack_188 = ppuVar3;
  puStack_180 = puVar6;
  ppuStack_178 = ppuVar2;
  ppuStack_170 = &puStack_e0;
  func_0x00010a584a9c(ppuVar4,&ppuStack_188);
  if (ppuVar4 != (undefined8 **)0x0) {
    FUN_10a2677b4(ppuVar4 + 3,&puStack_180);
  }
  return;
}



/* Entry: 10a57077c; end: 10a570893;  */

void FUN_10a57077c(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                  byte param_5)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 **ppuStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 uStack_89;
  undefined8 uStack_88;
  undefined4 uStack_80;
  byte bStack_7c;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bStack_7c = param_5 & 1;
  uStack_78 = *param_3;
  uStack_80 = param_4;
  (**(code **)(param_3[1] + 0x18))(apuStack_70,param_3 + 1);
  puVar3 = &UNK_10dd5b8f9;
  puVar4 = &uStack_88;
  uStack_88 = param_2;
  FUN_10a584484(param_1,param_2,&UNK_10dd5b8f9,puVar4,&uStack_89);
  puVar5 = (undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x20) = uStack_80;
  *(byte *)(param_1 + 0x24) = bStack_7c;
  *(undefined8 *)(param_1 + 0x28) = uStack_78;
  (**(code **)*puVar5)(puVar5);
  ppuVar2 = apuStack_70;
  (*(code *)apuStack_70[0][2])(puVar5);
  ppuVar1 = apuStack_70;
  (*(code *)*apuStack_70[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_70[0])(apuStack_70);
  __Unwind_Resume();
  pcStack_98 = FUN_10a570894;
  ppuVar1 = ppuVar1 + 10;
  ppuStack_b8 = ppuVar2;
  puStack_b0 = puVar3;
  puStack_a8 = puVar4;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010a584a9c(ppuVar1,&ppuStack_b8);
  if (ppuVar1 != (undefined8 **)0x0) {
    FUN_10a2677b4(ppuVar1 + 3,&puStack_b0);
  }
  return;
}



/* Entry: 10a570894; end: 10a5708cf;  */

void FUN_10a570894(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  param_1 = param_1 + 0x50;
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x00010a584a9c(param_1,&uStack_28);
  if (param_1 != 0) {
    FUN_10a2677b4(param_1 + 0x18,&uStack_20);
  }
  return;
}



/* Entry: 10a5708d0; end: 10a570953;  */

undefined8 * FUN_10a5708d0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_10a0f984c();
  *puVar1 = &PTR_FUN_110bf2bd8;
  puVar1[1] = &PTR_FUN_110bf2da0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 10,*param_3,param_3[1]);
  }
  else {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    param_1[0xc] = param_3[2];
    param_1[0xb] = uVar3;
    param_1[10] = uVar2;
  }
  param_1[0xd] = param_2;
  return param_1;
}



/* Entry: 10a570954; end: 10a5709d3;  */

undefined8 * FUN_10a570954(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110ba53b0;
  param_1[1] = &PTR_FUN_110ba5578;
  plVar1 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[6] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  param_1[4] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  param_1[2] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 10a5709d4; end: 10a570b03;  */

void FUN_10a5709d4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 **ppuStack_78;
  long lStack_70;
  char cStack_61;
  undefined8 **ppuStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  ppuStack_60 = (undefined8 ***)0x0;
  lStack_58 = 0;
  uStack_50 = 0;
  uVar2 = param_3;
  FUN_10ad01a04(param_3);
  func_0x000107c2b054(&ppuStack_78,&UNK_10f661d4c);
  FUN_10a570b04(uVar2,param_3,&ppuStack_78,&ppuStack_60,&uStack_48,param_1[0xd]);
  if (cStack_61 < '\0') {
    __ZdlPv(ppuStack_78);
  }
  lStack_70 = (long)uStack_50._7_1_;
  if (lStack_70 < 0) {
    ppuStack_78 = ppuStack_60;
    lStack_70 = lStack_58;
    if (lStack_58 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a570abc);
      (*pcVar1)();
    }
  }
  else {
    ppuStack_78 = &ppuStack_60;
  }
  (**(code **)(*param_1 + 0x30))(param_1,param_2,&ppuStack_78);
  if (uStack_50 < 0) {
    __ZdlPv(ppuStack_60);
  }
  if (lStack_38 < 0) {
    __ZdlPv(uStack_48);
  }
  return;
}



/* Entry: 10a570b04; end: 10a570dd3;  */

/* WARNING: Removing unreachable block (ram,0x00010a571024) */
/* WARNING: Removing unreachable block (ram,0x00010a570f60) */
/* WARNING: Removing unreachable block (ram,0x00010a571034) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a570b04(int param_1,undefined8 *******param_2,undefined8 ******param_3,
                  undefined8 *param_4,undefined8 *******param_5,undefined8 param_6)

{
  undefined8 *****pppppuVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined1 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *puVar8;
  undefined8 *******pppppppuVar9;
  undefined8 ******ppppppuVar10;
  undefined8 ******unaff_x22;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 *******pppppppuStack_160;
  ulong uStack_158;
  byte bStack_149;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined7 uStack_138;
  char cStack_131;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  char cStack_101;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 ******ppppppuStack_c0;
  undefined8 *puStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined8 *******pppppppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 *******pppppppuStack_88;
  undefined8 ******ppppppuStack_80;
  byte bStack_71;
  undefined8 *******pppppppuStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == 0) {
    FUN_10a57796c(&pppppppuStack_70,param_2);
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      __ZdlPv(*param_4);
    }
    param_4[1] = uStack_68;
    *param_4 = pppppppuStack_70;
    param_4[2] = lStack_60;
    pppppuVar1 = param_3[1];
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      pppppuVar1 = (undefined8 *****)(ulong)*(byte *)((long)param_3 + 0x17);
    }
    FUN_10a003c90(&pppppppuStack_70,(long)pppppuVar1 + 1,&pppppppuStack_88);
    pppppppuVar9 = pppppppuStack_70;
    if (-1 < lStack_60) {
      pppppppuVar9 = &pppppppuStack_70;
    }
    if (pppppuVar1 != (undefined8 *****)0x0) {
      ppppppuVar10 = (undefined8 ******)*param_3;
      if (-1 < *(char *)((long)param_3 + 0x17)) {
        ppppppuVar10 = param_3;
      }
      _memmove(pppppppuVar9,ppppppuVar10,pppppuVar1);
    }
    *(undefined2 *)((long)pppppppuVar9 + (long)pppppuVar1) = 0x2f;
    FUN_10a099f6c(&pppppppuStack_88,param_2);
    ppppppuVar10 = ppppppuStack_80;
    pppppppuVar9 = pppppppuStack_88;
    if (-1 < (char)bStack_71) {
      ppppppuVar10 = (undefined8 ******)(ulong)bStack_71;
      pppppppuVar9 = &pppppppuStack_88;
    }
    pppppppuVar7 = &pppppppuStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppuVar7,pppppppuVar9);
    param_2 = (undefined8 *******)*pppppppuVar7;
    uStack_58 = SUB87(pppppppuVar7[1],0);
    uStack_51 = (undefined1)*(undefined8 *)((long)pppppppuVar7 + 0xf);
    uStack_50 = (undefined7)((ulong)*(undefined8 *)((long)pppppppuVar7 + 0xf) >> 8);
    bVar3 = *(byte *)((long)pppppppuVar7 + 0x17);
    param_4 = (undefined8 *)(ulong)bVar3;
    pppppppuVar7[1] = (undefined8 ******)0x0;
    pppppppuVar7[2] = (undefined8 ******)0x0;
    *pppppppuVar7 = (undefined8 ******)0x0;
    if (*(char *)((long)param_5 + 0x17) < '\0') {
      pppppppuVar7 = (undefined8 *******)*param_5;
      __ZdlPv();
    }
    *param_5 = param_2;
    param_5[1] = (undefined8 ******)CONCAT17(uStack_51,uStack_58);
    *(ulong *)((long)param_5 + 0xf) = CONCAT71(uStack_50,uStack_51);
    *(byte *)((long)param_5 + 0x17) = bVar3;
    param_5 = pppppppuVar7;
    if ((char)bStack_71 < '\0') {
      param_5 = pppppppuStack_88;
      __ZdlPv();
    }
    if (lStack_60 < 0) {
      param_5 = pppppppuStack_70;
      __ZdlPv();
    }
  }
  else {
    uVar6 = param_6;
    FUN_10a9dd6c8(param_6,param_2);
    if ((int)uVar6 == 0) {
      uStack_68 = 0x2f6c616e726574;
      pppppppuStack_70 = (undefined8 *******)0x78455f5343462f7e;
      lStack_60 = 0xf00000000000000;
      FUN_10ad02700(&pppppppuStack_88,param_2);
      ppppppuVar10 = ppppppuStack_80;
      pppppppuVar9 = pppppppuStack_88;
      if (-1 < (char)bStack_71) {
        ppppppuVar10 = (undefined8 ******)(ulong)bStack_71;
        pppppppuVar9 = &pppppppuStack_88;
      }
      pppppppuVar7 = &pppppppuStack_70;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar7,pppppppuVar9);
      unaff_x22 = *pppppppuVar7;
      uStack_58 = SUB87(pppppppuVar7[1],0);
      uStack_51 = (undefined1)*(undefined8 *)((long)pppppppuVar7 + 0xf);
      uStack_50 = (undefined7)((ulong)*(undefined8 *)((long)pppppppuVar7 + 0xf) >> 8);
      uVar4 = *(undefined1 *)((long)pppppppuVar7 + 0x17);
      pppppppuVar7[1] = (undefined8 ******)0x0;
      pppppppuVar7[2] = (undefined8 ******)0x0;
      *pppppppuVar7 = (undefined8 ******)0x0;
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        __ZdlPv(*param_4);
      }
      *param_4 = unaff_x22;
      param_4[1] = CONCAT17(uStack_51,uStack_58);
      *(ulong *)((long)param_4 + 0xf) = CONCAT71(uStack_50,uStack_51);
      *(undefined1 *)((long)param_4 + 0x17) = uVar4;
      if ((char)bStack_71 < '\0') {
        __ZdlPv(pppppppuStack_88);
      }
      if (lStack_60 < 0) {
        __ZdlPv(pppppppuStack_70);
      }
    }
    else {
      FUN_10a9dd7c4(&pppppppuStack_70,param_6,param_2);
      ppppppuVar10 = param_3;
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        __ZdlPv(*param_4);
        ppppppuVar10 = param_3;
      }
      param_4[1] = uStack_68;
      *param_4 = pppppppuStack_70;
      param_4[2] = lStack_60;
    }
    pppppppuVar9 = param_2;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_5,param_2);
    param_3 = unaff_x22;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if ((char)bStack_71 < '\0') {
      __ZdlPv(pppppppuStack_88);
    }
    if (lStack_60 < 0) {
      __ZdlPv(pppppppuStack_70);
    }
    pppppppuVar7 = param_5;
    __Unwind_Resume();
    pcStack_98 = FUN_10a570dd4;
    uStack_e0 = 0;
    uStack_d8 = 0;
    lStack_d0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    ppppppuStack_c0 = param_3;
    puStack_b8 = param_4;
    pppppppuStack_b0 = param_2;
    pppppppuStack_a8 = param_5;
    puStack_a0 = &stack0xfffffffffffffff0;
    FUN_10a570b04(*(int *)(ppppppuVar10 + 6) == 2,ppppppuVar10,ppppppuVar10 + 3,&uStack_f8,
                  &uStack_e0,pppppppuVar7[0xd]);
    FUN_10a0ff18c(&uStack_130,&uStack_f8,0);
    FUN_10a1002c8(pppppppuVar7,pppppppuVar9,&uStack_130);
    if (cStack_101 < '\0') {
      __ZdlPv(uStack_118);
    }
    if (uStack_120._7_1_ < '\0') {
      __ZdlPv(uStack_130);
    }
    ppppppuVar10 = pppppppuVar7[0xb];
    if (-1 < (char)*(byte *)((long)pppppppuVar7 + 0x67)) {
      ppppppuVar10 = (undefined8 ******)(ulong)*(byte *)((long)pppppppuVar7 + 0x67);
    }
    FUN_10a003c90(&uStack_148,(long)ppppppuVar10 + 1,&pppppppuStack_160);
    puVar2 = (undefined1 *)CONCAT71(uStack_148._1_7_,(undefined1)uStack_148);
    if (-1 < cStack_131) {
      puVar2 = (undefined1 *)&uStack_148;
    }
    if (ppppppuVar10 != (undefined8 ******)0x0) {
      pppppppuVar9 = (undefined8 *******)pppppppuVar7[10];
      if (-1 < *(char *)((long)pppppppuVar7 + 0x67)) {
        pppppppuVar9 = pppppppuVar7 + 10;
      }
      _memmove(puVar2,pppppppuVar9,ppppppuVar10);
    }
    *(undefined2 *)(puVar2 + (long)ppppppuVar10) = 0x2f;
    FUN_10a099f6c(&pppppppuStack_160,&uStack_f8);
    pppppppuVar9 = pppppppuStack_160;
    if (-1 < (char)bStack_149) {
      uStack_158 = (ulong)bStack_149;
      pppppppuVar9 = &pppppppuStack_160;
    }
    puVar8 = &uStack_148;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar8,pppppppuVar9,uStack_158);
    uStack_128 = puVar8[1];
    uStack_130 = *puVar8;
    uStack_120 = puVar8[2];
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    if ((char)bStack_149 < '\0') {
      __ZdlPv(pppppppuStack_160);
    }
    if (cStack_131 < '\0') {
      __ZdlPv(CONCAT71(uStack_148._1_7_,(undefined1)uStack_148));
    }
    uStack_178 = uStack_d8;
    uStack_180 = uStack_e0;
    lStack_170 = lStack_d0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    lStack_d0 = 0;
    FUN_10a0f2224(&uStack_148,&uStack_180);
    uStack_d8 = uStack_140;
    cStack_131 = 0;
    uStack_148._0_1_ = 0;
    if (lStack_170 < 0) {
      __ZdlPv(uStack_180);
    }
    uStack_198 = uStack_128;
    uStack_1a0 = uStack_130;
    lStack_190 = uStack_120;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    FUN_10a0f2224(&uStack_148,&uStack_1a0);
    uStack_130 = CONCAT71(uStack_148._1_7_,(undefined1)uStack_148);
    uStack_128 = uStack_140;
    uStack_120 = CONCAT17(cStack_131,uStack_138);
    cStack_131 = 0;
    uStack_148._0_1_ = 0;
    if (lStack_190 < 0) {
      __ZdlPv(uStack_1a0);
    }
    puVar8 = &uStack_e0;
    FUN_10ad015f0(puVar8,0x4000);
    if ((int)puVar8 == 0) {
      puVar8 = &uStack_e0;
      FUN_10ad01348(puVar8,&uStack_130);
    }
    else {
      puVar8 = &uStack_e0;
      FUN_10ad00fd8(puVar8,&uStack_130);
    }
    if (((ulong)puVar8 & 1) == 0) {
      FUN_10a0ee900(&uStack_148,&UNK_10f661d4d,0x39);
      FUN_10a0029c0(&uStack_148);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a57109c);
      (*pcVar5)();
    }
    if (uStack_120 < 0) {
      __ZdlPv(uStack_130);
    }
    return;
  }
  return;
}



/* Entry: 10a570dd4; end: 10a571163;  */

/* WARNING: Removing unreachable block (ram,0x00010a571024) */
/* WARNING: Removing unreachable block (ram,0x00010a570f60) */
/* WARNING: Removing unreachable block (ram,0x00010a571034) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a570dd4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *******pppppppuVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 *******pppppppuStack_d0;
  ulong uStack_c8;
  byte bStack_b9;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined7 uStack_a8;
  char cStack_a1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char cStack_71;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_10a570b04(*(int *)(param_3 + 0x30) == 2,param_3,param_3 + 0x18,&uStack_68,&uStack_50,
                *(undefined8 *)(param_1 + 0x68));
  FUN_10a0ff18c(&uStack_a0,&uStack_68,0);
  FUN_10a1002c8(param_1,param_2,&uStack_a0);
  if (cStack_71 < '\0') {
    __ZdlPv(uStack_88);
  }
  if (uStack_90._7_1_ < '\0') {
    __ZdlPv(uStack_a0);
  }
  uVar1 = *(ulong *)(param_1 + 0x58);
  if (-1 < (char)*(byte *)(param_1 + 0x67)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x67);
  }
  FUN_10a003c90(&uStack_b8,uVar1 + 1,&pppppppuStack_d0);
  puVar2 = (undefined1 *)CONCAT71(uStack_b8._1_7_,(undefined1)uStack_b8);
  if (-1 < cStack_a1) {
    puVar2 = (undefined1 *)&uStack_b8;
  }
  if (uVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x50);
    if (-1 < *(char *)(param_1 + 0x67)) {
      lVar3 = param_1 + 0x50;
    }
    _memmove(puVar2,lVar3,uVar1);
  }
  *(undefined2 *)(puVar2 + uVar1) = 0x2f;
  FUN_10a099f6c(&pppppppuStack_d0,&uStack_68);
  pppppppuVar4 = pppppppuStack_d0;
  if (-1 < (char)bStack_b9) {
    uStack_c8 = (ulong)bStack_b9;
    pppppppuVar4 = &pppppppuStack_d0;
  }
  puVar6 = &uStack_b8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,pppppppuVar4,uStack_c8);
  uStack_98 = puVar6[1];
  uStack_a0 = *puVar6;
  uStack_90 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  if ((char)bStack_b9 < '\0') {
    __ZdlPv(pppppppuStack_d0);
  }
  if (cStack_a1 < '\0') {
    __ZdlPv(CONCAT71(uStack_b8._1_7_,(undefined1)uStack_b8));
  }
  uStack_e8 = uStack_48;
  uStack_f0 = uStack_50;
  lStack_e0 = lStack_40;
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_40 = 0;
  FUN_10a0f2224(&uStack_b8,&uStack_f0);
  uStack_48 = uStack_b0;
  cStack_a1 = 0;
  uStack_b8._0_1_ = 0;
  if (lStack_e0 < 0) {
    __ZdlPv(uStack_f0);
  }
  uStack_108 = uStack_98;
  uStack_110 = uStack_a0;
  lStack_100 = uStack_90;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  FUN_10a0f2224(&uStack_b8,&uStack_110);
  uStack_a0 = CONCAT71(uStack_b8._1_7_,(undefined1)uStack_b8);
  uStack_98 = uStack_b0;
  uStack_90 = CONCAT17(cStack_a1,uStack_a8);
  cStack_a1 = 0;
  uStack_b8._0_1_ = 0;
  if (lStack_100 < 0) {
    __ZdlPv(uStack_110);
  }
  puVar6 = &uStack_50;
  FUN_10ad015f0(puVar6,0x4000);
  if ((int)puVar6 == 0) {
    puVar6 = &uStack_50;
    FUN_10ad01348(puVar6,&uStack_a0);
  }
  else {
    puVar6 = &uStack_50;
    FUN_10ad00fd8(puVar6,&uStack_a0);
  }
  if (((ulong)puVar6 & 1) == 0) {
    FUN_10a0ee900(&uStack_b8,&UNK_10f661d4d,0x39);
    FUN_10a0029c0(&uStack_b8);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a57109c);
    (*pcVar5)();
  }
  if (uStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  return;
}



/* Entry: 10a571164; end: 10a5711bb;  */

void FUN_10a571164(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_30 = param_2;
  uStack_28 = param_3;
  FUN_10a5711bc(param_1 + 0x30,&uStack_30,param_4);
  param_1 = param_1 + 8;
  FUN_10a35c038(param_1,&uStack_30,&uStack_30,&uStack_30);
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x28) = uStack_28;
    *(undefined8 *)(param_1 + 0x20) = uStack_30;
  }
  return;
}



/* Entry: 10a5711bc; end: 10a57120b;  */

undefined1  [16] FUN_10a5711bc(long param_1,ulong param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  FUN_10a584b74(param_1,param_2,param_2,param_3);
  if ((param_2 & 1) == 0) {
    func_0x00010a34d270(param_1 + 0x20,param_3);
  }
  auVar1._8_8_ = param_2 & 0xff;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 10a57120c; end: 10a57123f;  */

void FUN_10a57120c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_10a584dc4(param_1 + 8);
  func_0x00010a584e28(param_1 + 0x30);
  puVar1 = *(undefined8 **)(param_1 + 0x58);
  if (*(undefined8 **)(param_1 + 0x60) != puVar1) {
    puVar2 = *(undefined8 **)(param_1 + 0x60) + -0xb;
    do {
      if (*(char *)((long)puVar2 + 0x4f) < '\0') {
        __ZdlPv(puVar2[7]);
      }
      puVar3 = puVar2 + -3;
      (**(code **)*puVar2)(puVar2);
      puVar2 = puVar2 + -0xe;
    } while (puVar3 != puVar1);
  }
  *(undefined8 **)(param_1 + 0x60) = puVar1;
  return;
}



/* Entry: 10a571240; end: 10a571453;  */

void FUN_10a571240(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long **unaff_x25;
  long lStack_170;
  long *plStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long *plStack_148;
  undefined1 uStack_d1;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 *apuStack_b8 [7];
  long lStack_80;
  long lStack_78;
  long lStack_70;
  char cStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)param_1[0xb];
  plVar2 = (long *)param_1[0xc];
  plVar5 = param_1;
  plVar10 = param_2;
  if (plVar12 != plVar2) {
    unaff_x25 = &plStack_d0;
    do {
      if ((*(char *)(plVar12[3] + 8) == '\x01') && ((*plVar12 != -1 || (plVar12[1] != -1)))) {
        plVar5 = param_1 + 6;
        plVar10 = plVar12;
        plStack_d0 = plVar12;
        FUN_10a584e7c(plVar5,plVar12,&UNK_10dd5b8f9,&plStack_d0,&uStack_d1);
        plVar8 = plVar5 + 4;
        if ((*plVar8 != 0) && ((char)plVar12[0xd] == '\x01')) {
          lStack_c8 = plVar12[1];
          plStack_d0 = (long *)*plVar12;
          lStack_c0 = plVar12[2];
          (**(code **)(plVar12[3] + 0x10))(apuStack_b8,plVar12 + 3);
          lStack_78 = plVar12[0xb];
          lStack_80 = plVar12[10];
          lStack_70 = plVar12[0xc];
          plVar12[10] = 0;
          plVar12[0xb] = 0;
          plVar12[0xc] = 0;
          cStack_68 = (char)plVar12[0xd];
          FUN_10a0ff6e0(param_2 + 0xb,&plStack_d0);
          if (lStack_70 < 0) {
            __ZdlPv(lStack_80);
          }
          (*(code *)*apuStack_b8[0])(apuStack_b8);
          plVar5 = param_2 + 6;
          plStack_d0 = plVar12;
          FUN_10a584e7c(plVar5,plVar12,&UNK_10dd5b8f9,&plStack_d0,&uStack_d1);
          func_0x00010a34d270(plVar5 + 4,plVar8);
          plVar5 = param_1 + 1;
          plVar10 = plVar12;
          FUN_10a35c254();
          if ((plVar5 != (long *)0x0) &&
             ((plVar10 = plVar5 + 4, *plVar10 != *plVar12 || (plVar5[5] != plVar12[1])))) {
            plVar5 = param_2 + 6;
            plStack_d0 = plVar10;
            FUN_10a584e7c(plVar5,plVar10,&UNK_10dd5b8f9,&plStack_d0,&uStack_d1);
            plVar5 = plVar5 + 4;
            func_0x00010a34d270();
            plVar10 = plVar8;
          }
        }
      }
      plVar12 = plVar12 + 0xe;
    } while (plVar12 != plVar2);
  }
  uVar7 = (uint)plVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_70 < 0) {
    __ZdlPv(lStack_80);
  }
  (*(code *)*apuStack_b8[0])(unaff_x25 + 3);
  __Unwind_Resume();
  plVar12 = (long *)plVar5[0xb];
  plVar2 = (long *)plVar5[0xc];
  do {
    if (plVar12 == plVar2) {
      return;
    }
    plVar10 = plVar12 + 3;
    if ((*(char *)(*plVar10 + 8) == '\x01') && (*(byte *)(plVar12 + 0xd) <= uVar7)) {
      plVar8 = plVar12 + 2;
      lStack_158 = plVar12[1];
      lStack_160 = *plVar12;
      if (lStack_160 == -1 && lStack_158 == -1) {
        lStack_150 = 0;
        plStack_148 = (long *)0x0;
        (*(code *)*plVar8)(&lStack_150,plVar8);
        plVar6 = plStack_148;
        if (plStack_148 != (long *)0x0) {
          plVar1 = plStack_148 + 1;
          do {
            lVar11 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_148 + 0x10))(plStack_148);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        *plVar8 = (long)FUN_10a5850a8;
        (**(code **)*plVar10)(plVar10);
        *plVar10 = (long)&PTR_DAT_110ae9180;
      }
      else {
        plStack_148 = (long *)plVar12[1];
        lStack_150 = *plVar12;
        if ((char)*plVar5 == '\x01') {
          plVar6 = plVar5 + 1;
          FUN_10a35c254(plVar6,&lStack_160);
          if (plVar6 != (long *)0x0) {
            plStack_148 = (long *)plVar6[5];
            lStack_150 = plVar6[4];
            goto LAB_10a571504;
          }
          if ((bRam000000011330a9e8 >> 3 & 1) == 0) goto LAB_10a5715fc;
          plVar10 = plVar12 + 10;
          if (*(char *)((long)plVar12 + 0x67) < '\0') {
            plVar10 = (long *)*plVar10;
          }
          uVar9 = 0x5f;
LAB_10a571680:
          func_0x00010ae06f08(1,8,&UNK_10f661d87,&UNK_10f661dc2,uVar9,&UNK_10f661e24,in_x6,in_x7,
                              plVar10);
        }
        else {
LAB_10a571504:
          plVar6 = plVar5 + 6;
          FUN_10a5850b8(plVar6,&lStack_150);
          if (plVar6 == (long *)0x0) {
            if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
              plVar10 = plVar12 + 10;
              if (*(char *)((long)plVar12 + 0x67) < '\0') {
                plVar10 = (long *)*plVar10;
              }
              uVar9 = 0x68;
              goto LAB_10a571680;
            }
          }
          else {
            plStack_168 = (long *)plVar6[5];
            lStack_170 = plVar6[4];
            if (plVar6[5] != 0) {
              plVar6 = (long *)(plVar6[5] + 8);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar4) {
                  *plVar6 = *plVar6 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            FUN_10a1f495c(plVar8,&lStack_170);
            *plVar8 = (long)FUN_10a5850a8;
            (**(code **)*plVar10)(plVar10);
            plVar8 = plStack_168;
            *plVar10 = (long)&PTR_DAT_110ae9180;
            if (plStack_168 != (long *)0x0) {
              plVar10 = plStack_168 + 1;
              do {
                lVar11 = *plVar10;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar4) {
                  *plVar10 = lVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar11 == 0) {
                (**(code **)(*plStack_168 + 0x10))(plStack_168);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
              }
            }
          }
        }
      }
    }
LAB_10a5715fc:
    plVar12 = plVar12 + 0xe;
  } while( true );
}



/* Entry: 10a571454; end: 10a5716cf;  */

void FUN_10a571454(char *param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 uStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = *(long **)(param_1 + 0x58);
  plVar4 = *(long **)(param_1 + 0x60);
  do {
    if (plVar3 == plVar4) {
      return;
    }
    plVar9 = plVar3 + 3;
    if ((*(char *)(*plVar9 + 8) == '\x01') && (*(byte *)(plVar3 + 0xd) <= param_2)) {
      plVar11 = plVar3 + 2;
      lStack_78 = plVar3[1];
      lStack_80 = *plVar3;
      if (lStack_80 == -1 && lStack_78 == -1) {
        lStack_70 = 0;
        plStack_68 = (long *)0x0;
        (*(code *)*plVar11)(&lStack_70,plVar11);
        plVar1 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar2 = plStack_68 + 1;
          do {
            lVar10 = *plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = lVar10 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        *plVar11 = (long)FUN_10a5850a8;
        (**(code **)*plVar9)(plVar9);
        *plVar9 = (long)&PTR_DAT_110ae9180;
      }
      else {
        plStack_68 = (long *)plVar3[1];
        lStack_70 = *plVar3;
        if (*param_1 == '\x01') {
          pcVar7 = param_1 + 8;
          FUN_10a35c254(pcVar7,&lStack_80);
          if (pcVar7 != (char *)0x0) {
            plStack_68 = *(long **)(pcVar7 + 0x28);
            lStack_70 = *(long *)(pcVar7 + 0x20);
            goto LAB_10a571504;
          }
          if ((bRam000000011330a9e8 >> 3 & 1) == 0) goto LAB_10a5715fc;
          plVar9 = plVar3 + 10;
          if (*(char *)((long)plVar3 + 0x67) < '\0') {
            plVar9 = (long *)*plVar9;
          }
          uVar8 = 0x5f;
LAB_10a571680:
          func_0x00010ae06f08(1,8,&UNK_10f661d87,&UNK_10f661dc2,uVar8,&UNK_10f661e24,in_x6,in_x7,
                              plVar9);
        }
        else {
LAB_10a571504:
          pcVar7 = param_1 + 0x30;
          FUN_10a5850b8(pcVar7,&lStack_70);
          if (pcVar7 == (char *)0x0) {
            if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
              plVar9 = plVar3 + 10;
              if (*(char *)((long)plVar3 + 0x67) < '\0') {
                plVar9 = (long *)*plVar9;
              }
              uVar8 = 0x68;
              goto LAB_10a571680;
            }
          }
          else {
            plStack_88 = *(long **)(pcVar7 + 0x28);
            uStack_90 = *(undefined8 *)(pcVar7 + 0x20);
            if (*(long *)(pcVar7 + 0x28) != 0) {
              plVar1 = (long *)(*(long *)(pcVar7 + 0x28) + 8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *plVar1 = *plVar1 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            FUN_10a1f495c(plVar11,&uStack_90);
            *plVar11 = (long)FUN_10a5850a8;
            (**(code **)*plVar9)(plVar9);
            plVar11 = plStack_88;
            *plVar9 = (long)&PTR_DAT_110ae9180;
            if (plStack_88 != (long *)0x0) {
              plVar9 = plStack_88 + 1;
              do {
                lVar10 = *plVar9;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar6) {
                  *plVar9 = lVar10 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plStack_88 + 0x10))(plStack_88);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
              }
            }
          }
        }
      }
    }
LAB_10a5715fc:
    plVar3 = plVar3 + 0xe;
  } while( true );
}



/* Entry: 10a5716d0; end: 10a57175f;  */

undefined8 * FUN_10a5716d0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bf1728;
  param_1[1] = &PTR_DAT_110bf18e8;
  puStack_28 = param_1 + 0x2a;
  FUN_10a577b90(&puStack_28);
  FUN_10a10a718(param_1 + 0x25);
  puStack_28 = param_1 + 0x22;
  FUN_10a577b90(&puStack_28);
  FUN_10a10a718(param_1 + 0x1d);
  FUN_10a10a718(param_1 + 0x18);
  func_0x00010a10a78c(param_1 + 0x11);
  func_0x00010a577e94(param_1 + 0xc);
  FUN_10a3f2240(param_1 + 7);
  func_0x00010a577e4c(param_1 + 2);
  return param_1;
}



/* Entry: 10a571760; end: 10a57176b;  */

undefined8 * FUN_10a571760(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bf1728;
  param_1[1] = &PTR_DAT_110bf18e8;
  puStack_28 = param_1 + 0x2a;
  FUN_10a577b90(&puStack_28);
  FUN_10a10a718(param_1 + 0x25);
  puStack_28 = param_1 + 0x22;
  FUN_10a577b90(&puStack_28);
  FUN_10a10a718(param_1 + 0x1d);
  FUN_10a10a718(param_1 + 0x18);
  func_0x00010a10a78c(param_1 + 0x11);
  func_0x00010a577e94(param_1 + 0xc);
  FUN_10a3f2240(param_1 + 7);
  func_0x00010a577e4c(param_1 + 2);
  return param_1;
}



/* Entry: 10a57176c; end: 10a571797;  */

void FUN_10a57176c(void)

{
  FUN_10a5716d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a571798; end: 10a5717e7;  */

void FUN_10a571798(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x00010a0fda30();
  param_1 = param_1 + 0x88;
  puVar2 = &uStack_30;
  lStack_40 = lVar1;
  uStack_38 = param_2;
  FUN_10a585160(param_1,puVar2,&uStack_30,&lStack_40);
  if (((ulong)puVar2 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x28) = uStack_38;
    *(long *)(param_1 + 0x20) = lStack_40;
  }
  return;
}



/* Entry: 10a5717e8; end: 10a5723a3;  */

void FUN_10a5717e8(long param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  ulong unaff_x25;
  long *plVar21;
  float fVar22;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_71;
  undefined1 *puStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  lVar6 = *param_3;
  if (lVar6 == 0) {
    return;
  }
  plVar17 = (long *)(param_1 + 0xc0);
  lVar5 = *(long *)(lVar6 + 0x40);
  uVar9 = *(ulong *)(lVar6 + 0x48);
  uVar20 = *(ulong *)(param_1 + 200);
  if (uVar20 != 0) {
    uVar7 = uVar20 - 1;
    if ((uVar20 & uVar7) == 0) {
      unaff_x25 = uVar7 & uVar9;
    }
    else {
      unaff_x25 = uVar9;
      if (uVar20 <= uVar9) {
        uVar11 = 0;
        if (uVar20 != 0) {
          uVar11 = uVar9 / uVar20;
        }
        unaff_x25 = uVar9 - uVar11 * uVar20;
      }
    }
    puVar10 = *(undefined8 **)(*plVar17 + unaff_x25 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (plVar19 = (long *)*puVar10; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
        uVar11 = plVar19[1];
        if (uVar11 == uVar9) {
          if (plVar19[2] == lVar5 && plVar19[3] == uVar9) goto LAB_10a5719d8;
        }
        else {
          if ((uVar20 & uVar7) == 0) {
            uVar11 = uVar11 & uVar7;
          }
          else if (uVar20 <= uVar11) {
            uVar3 = 0;
            if (uVar20 != 0) {
              uVar3 = uVar11 / uVar20;
            }
            uVar11 = uVar11 - uVar3 * uVar20;
          }
          if (uVar11 != unaff_x25) break;
        }
      }
    }
  }
  plVar19 = (long *)0x30;
  __Znwm();
  uStack_58 = 1;
  *plVar19 = 0;
  plVar19[1] = uVar9;
  plVar19[2] = lVar5;
  plVar19[3] = uVar9;
  plVar19[4] = 0;
  plVar19[5] = 0;
  fVar22 = (float)(*(long *)(param_1 + 0xd8) + 1);
  plStack_68 = plVar19;
  plStack_60 = plVar17;
  if ((uVar20 == 0) || (*(float *)(param_1 + 0xe0) * (float)uVar20 < fVar22)) {
    uVar7 = 1;
    if (2 < uVar20) {
      uVar7 = (ulong)((uVar20 & uVar20 - 1) != 0);
    }
    uVar7 = uVar7 | uVar20 << 1;
    uVar20 = (ulong)(fVar22 / *(float *)(param_1 + 0xe0));
    if (uVar7 <= uVar20) {
      uVar7 = uVar20;
    }
    FUN_10a10cd20(plVar17,uVar7);
    uVar20 = *(ulong *)(param_1 + 200);
    if ((uVar20 & uVar20 - 1) == 0) {
      unaff_x25 = uVar20 - 1 & uVar9;
    }
    else {
      unaff_x25 = uVar9;
      if (uVar20 <= uVar9) {
        uVar7 = 0;
        if (uVar20 != 0) {
          uVar7 = uVar9 / uVar20;
        }
        unaff_x25 = uVar9 - uVar7 * uVar20;
      }
    }
  }
  lVar6 = *plVar17;
  plVar8 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)(param_1 + 0xd0);
    *plVar19 = *plVar8;
    *plVar8 = (long)plVar19;
    *(long **)(lVar6 + unaff_x25 * 8) = plVar8;
    if (*plVar19 != 0) {
      uVar9 = *(ulong *)(*plVar19 + 8);
      if ((uVar20 & uVar20 - 1) == 0) {
        uVar9 = uVar9 & uVar20 - 1;
      }
      else if (uVar20 <= uVar9) {
        uVar7 = 0;
        if (uVar20 != 0) {
          uVar7 = uVar9 / uVar20;
        }
        uVar9 = uVar9 - uVar7 * uVar20;
      }
      plVar8 = (long *)(*plVar17 + uVar9 * 8);
      goto LAB_10a5719c8;
    }
  }
  else {
    *plVar19 = *plVar8;
LAB_10a5719c8:
    *plVar8 = (long)plVar19;
  }
  *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 1;
LAB_10a5719d8:
  func_0x00010a34d270(plVar19 + 4,param_3);
  lVar6 = *param_3;
  if (lVar6 == 0) {
    return;
  }
  lVar5 = lVar6;
  ___dynamic_cast(lVar6,&PTR_DAT_110bf32c0,&PTR_DAT_110c42c58,0);
  if (lVar5 != 0) {
    plVar17 = (long *)param_3[1];
    if (plVar17 != (long *)0x0) {
      plVar8 = plVar17 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    FUN_10a2ea178(&plStack_68,*param_3);
    plVar8 = plStack_68;
    lVar6 = *(long *)(*param_3 + 0x40);
    plVar17 = *(long **)(*param_3 + 0x48);
    plVar21 = *(long **)(param_1 + 0x18);
    if (plVar21 != (long *)0x0) {
      uVar9 = (long)plVar21 - 1;
      if (((ulong)plVar21 & uVar9) == 0) {
        plVar19 = (long *)(uVar9 & (ulong)plVar17);
      }
      else {
        plVar19 = plVar17;
        if (plVar21 <= plVar17) {
          uVar20 = 0;
          if (plVar21 != (long *)0x0) {
            uVar20 = (ulong)plVar17 / (ulong)plVar21;
          }
          plVar19 = (long *)((long)plVar17 - uVar20 * (long)plVar21);
        }
      }
      puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)plVar19 * 8);
      if (puVar10 != (undefined8 *)0x0) {
        for (plVar18 = (long *)*puVar10; plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
          plVar12 = (long *)plVar18[1];
          if (plVar12 == plVar17) {
            if (plVar18[2] == lVar6 && (long *)plVar18[3] == plVar17) goto LAB_10a571d8c;
          }
          else {
            if (((ulong)plVar21 & uVar9) == 0) {
              plVar12 = (long *)((ulong)plVar12 & uVar9);
            }
            else if (plVar21 <= plVar12) {
              uVar20 = 0;
              if (plVar21 != (long *)0x0) {
                uVar20 = (ulong)plVar12 / (ulong)plVar21;
              }
              plVar12 = (long *)((long)plVar12 - uVar20 * (long)plVar21);
            }
            if (plVar12 != plVar19) break;
          }
        }
      }
    }
    plVar18 = (long *)0x28;
    __Znwm();
    *plVar18 = 0;
    plVar18[1] = (long)plVar17;
    plVar18[2] = lVar6;
    plVar18[3] = (long)plVar17;
    plVar18[4] = 0;
    fVar22 = (float)(*(long *)(param_1 + 0x28) + 1);
    if ((plVar21 == (long *)0x0) || (*(float *)(param_1 + 0x30) * (float)plVar21 < fVar22)) {
      uVar9 = 1;
      if ((long *)0x2 < plVar21) {
        uVar9 = (ulong)(((ulong)plVar21 & (long)plVar21 - 1U) != 0);
      }
      plVar19 = (long *)(uVar9 | (long)plVar21 << 1);
      plVar12 = (long *)(long)(fVar22 / *(float *)(param_1 + 0x30));
      if (plVar19 <= plVar12) {
        plVar19 = plVar12;
      }
      if ((long)plVar19 - 1U == 0) {
        plVar19 = (long *)0x2;
      }
      else if (((ulong)plVar19 & (long)plVar19 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
        plVar21 = *(long **)(param_1 + 0x18);
      }
      if (plVar21 < plVar19) {
LAB_10a571ba0:
        if ((ulong)plVar19 >> 0x3d != 0) {
          func_0x000109ffded8();
          goto LAB_10a572338;
        }
        lVar6 = (long)plVar19 << 3;
        __Znwm();
        lVar5 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar6;
        if (lVar5 != 0) {
          __ZdlPv();
        }
        plVar21 = (long *)0x0;
        *(long **)(param_1 + 0x18) = plVar19;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)plVar21 * 8) = 0;
          plVar21 = (long *)((long)plVar21 + 1);
        } while (plVar19 != plVar21);
        plVar12 = *(long **)(param_1 + 0x20);
        plVar21 = plVar19;
        if (plVar12 != (long *)0x0) {
          plVar13 = (long *)plVar12[1];
          uVar9 = (long)plVar19 - 1;
          if (((ulong)plVar19 & uVar9) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar9);
          }
          else if (plVar19 <= plVar13) {
            uVar20 = 0;
            if (plVar19 != (long *)0x0) {
              uVar20 = (ulong)plVar13 / (ulong)plVar19;
            }
            plVar13 = (long *)((long)plVar13 - uVar20 * (long)plVar19);
          }
          *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)plVar13 * 8) =
               (undefined8 *)(param_1 + 0x20);
          plVar14 = (long *)*plVar12;
          while (plVar14 != (long *)0x0) {
            plVar16 = (long *)plVar14[1];
            if (((ulong)plVar19 & uVar9) == 0) {
              plVar16 = (long *)((ulong)plVar16 & uVar9);
            }
            else if (plVar19 <= plVar16) {
              uVar20 = 0;
              if (plVar19 != (long *)0x0) {
                uVar20 = (ulong)plVar16 / (ulong)plVar19;
              }
              plVar16 = (long *)((long)plVar16 - uVar20 * (long)plVar19);
            }
            plVar15 = plVar14;
            if (plVar16 != plVar13) {
              lVar6 = *(long *)(param_1 + 0x10);
              if (*(long *)(lVar6 + (long)plVar16 * 8) == 0) {
                *(long **)(lVar6 + (long)plVar16 * 8) = plVar12;
                plVar13 = plVar16;
              }
              else {
                *plVar12 = *plVar14;
                *plVar14 = **(undefined8 **)(lVar6 + (long)plVar16 * 8);
                **(long **)(lVar6 + (long)plVar16 * 8) = (long)plVar14;
                plVar15 = plVar12;
              }
            }
            plVar12 = plVar15;
            plVar14 = (long *)*plVar15;
          }
        }
      }
      else if (plVar19 < plVar21) {
        plVar12 = (long *)(long)((float)*(ulong *)(param_1 + 0x28) / *(float *)(param_1 + 0x30));
        if ((plVar21 < (long *)0x3) || (((ulong)plVar21 & (long)plVar21 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((long *)0x1 < plVar12) {
          plVar12 = (long *)(1L << (-LZCOUNT((long)plVar12 + -1) & 0x3fU));
        }
        if (plVar19 <= plVar12) {
          plVar19 = plVar12;
        }
        if (plVar19 < plVar21) {
          if (plVar19 != (long *)0x0) goto LAB_10a571ba0;
          lVar6 = *(long *)(param_1 + 0x10);
          *(undefined8 *)(param_1 + 0x10) = 0;
          if (lVar6 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(param_1 + 0x18) = 0;
          plVar21 = (long *)0x0;
        }
        else {
          plVar21 = *(long **)(param_1 + 0x18);
        }
      }
      if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
        plVar19 = (long *)((long)plVar21 - 1U & (ulong)plVar17);
      }
      else {
        plVar19 = plVar17;
        if (plVar21 <= plVar17) {
          uVar9 = 0;
          if (plVar21 != (long *)0x0) {
            uVar9 = (ulong)plVar17 / (ulong)plVar21;
          }
          plVar19 = (long *)((long)plVar17 - uVar9 * (long)plVar21);
        }
      }
    }
    lVar6 = *(long *)(param_1 + 0x10);
    plVar17 = *(long **)(lVar6 + (long)plVar19 * 8);
    if (plVar17 == (long *)0x0) {
      plVar17 = (long *)(param_1 + 0x20);
      *plVar18 = *plVar17;
      *plVar17 = (long)plVar18;
      *(long **)(lVar6 + (long)plVar19 * 8) = plVar17;
      if (*plVar18 != 0) {
        plVar17 = *(long **)(*plVar18 + 8);
        if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
          plVar17 = (long *)((ulong)plVar17 & (long)plVar21 - 1U);
        }
        else if (plVar21 <= plVar17) {
          uVar9 = 0;
          if (plVar21 != (long *)0x0) {
            uVar9 = (ulong)plVar17 / (ulong)plVar21;
          }
          plVar17 = (long *)((long)plVar17 - uVar9 * (long)plVar21);
        }
        plVar17 = (long *)(*(long *)(param_1 + 0x10) + (long)plVar17 * 8);
        goto LAB_10a571d7c;
      }
    }
    else {
      *plVar18 = *plVar17;
LAB_10a571d7c:
      *plVar17 = (long)plVar18;
    }
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
LAB_10a571d8c:
    plVar17 = plStack_60;
    plVar18[4] = (long)plVar8;
    if (plStack_60 != (long *)0x0) {
      plVar8 = plStack_60 + 1;
      do {
        lVar6 = *plVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    lVar6 = *param_3;
    if (lVar6 == 0) {
      return;
    }
  }
  lVar5 = lVar6;
  ___dynamic_cast(lVar6,&PTR_DAT_110bf32c0,&PTR_DAT_110bd31d8,0);
  if (lVar5 == 0) goto LAB_10a5721f0;
  plVar17 = (long *)param_3[1];
  if (plVar17 != (long *)0x0) {
    plVar8 = plVar17 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      lVar6 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  FUN_10a3c759c(&plStack_68,*param_3);
  plVar8 = plStack_68;
  lVar6 = *(long *)(*param_3 + 0x40);
  plVar17 = *(long **)(*param_3 + 0x48);
  plVar21 = *(long **)(param_1 + 0x68);
  if (plVar21 != (long *)0x0) {
    uVar9 = (long)plVar21 - 1;
    if (((ulong)plVar21 & uVar9) == 0) {
      plVar19 = (long *)(uVar9 & (ulong)plVar17);
    }
    else {
      plVar19 = plVar17;
      if (plVar21 <= plVar17) {
        uVar20 = 0;
        if (plVar21 != (long *)0x0) {
          uVar20 = (ulong)plVar17 / (ulong)plVar21;
        }
        plVar19 = (long *)((long)plVar17 - uVar20 * (long)plVar21);
      }
    }
    puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x60) + (long)plVar19 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (plVar18 = (long *)*puVar10; plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
        plVar12 = (long *)plVar18[1];
        if (plVar12 == plVar17) {
          if (plVar18[2] == lVar6 && (long *)plVar18[3] == plVar17) goto LAB_10a5721ac;
        }
        else {
          if (((ulong)plVar21 & uVar9) == 0) {
            plVar12 = (long *)((ulong)plVar12 & uVar9);
          }
          else if (plVar21 <= plVar12) {
            uVar20 = 0;
            if (plVar21 != (long *)0x0) {
              uVar20 = (ulong)plVar12 / (ulong)plVar21;
            }
            plVar12 = (long *)((long)plVar12 - uVar20 * (long)plVar21);
          }
          if (plVar12 != plVar19) break;
        }
      }
    }
  }
  plVar18 = (long *)0x28;
  __Znwm();
  *plVar18 = 0;
  plVar18[1] = (long)plVar17;
  plVar18[2] = lVar6;
  plVar18[3] = (long)plVar17;
  plVar18[4] = 0;
  fVar22 = (float)(*(long *)(param_1 + 0x78) + 1);
  if ((plVar21 == (long *)0x0) || (*(float *)(param_1 + 0x80) * (float)plVar21 < fVar22)) {
    uVar9 = 1;
    if ((long *)0x2 < plVar21) {
      uVar9 = (ulong)(((ulong)plVar21 & (long)plVar21 - 1U) != 0);
    }
    plVar19 = (long *)(uVar9 | (long)plVar21 << 1);
    plVar12 = (long *)(long)(fVar22 / *(float *)(param_1 + 0x80));
    if (plVar19 <= plVar12) {
      plVar19 = plVar12;
    }
    if ((long)plVar19 - 1U == 0) {
      plVar19 = (long *)0x2;
    }
    else if (((ulong)plVar19 & (long)plVar19 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar21 = *(long **)(param_1 + 0x68);
    }
    if (plVar21 < plVar19) {
LAB_10a571f84:
      if ((ulong)plVar19 >> 0x3d != 0) {
        func_0x000109ffded8();
LAB_10a572338:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a57233c);
        (*pcVar4)();
      }
      lVar6 = (long)plVar19 << 3;
      __Znwm();
      lVar5 = *(long *)(param_1 + 0x60);
      *(long *)(param_1 + 0x60) = lVar6;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      plVar21 = (long *)0x0;
      *(long **)(param_1 + 0x68) = plVar19;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x60) + (long)plVar21 * 8) = 0;
        plVar21 = (long *)((long)plVar21 + 1);
      } while (plVar19 != plVar21);
      plVar12 = *(long **)(param_1 + 0x70);
      plVar21 = plVar19;
      if (plVar12 != (long *)0x0) {
        plVar13 = (long *)plVar12[1];
        uVar9 = (long)plVar19 - 1;
        if (((ulong)plVar19 & uVar9) == 0) {
          plVar13 = (long *)((ulong)plVar13 & uVar9);
        }
        else if (plVar19 <= plVar13) {
          uVar20 = 0;
          if (plVar19 != (long *)0x0) {
            uVar20 = (ulong)plVar13 / (ulong)plVar19;
          }
          plVar13 = (long *)((long)plVar13 - uVar20 * (long)plVar19);
        }
        *(undefined8 **)(*(long *)(param_1 + 0x60) + (long)plVar13 * 8) =
             (undefined8 *)(param_1 + 0x70);
        plVar14 = (long *)*plVar12;
        while (plVar14 != (long *)0x0) {
          plVar16 = (long *)plVar14[1];
          if (((ulong)plVar19 & uVar9) == 0) {
            plVar16 = (long *)((ulong)plVar16 & uVar9);
          }
          else if (plVar19 <= plVar16) {
            uVar20 = 0;
            if (plVar19 != (long *)0x0) {
              uVar20 = (ulong)plVar16 / (ulong)plVar19;
            }
            plVar16 = (long *)((long)plVar16 - uVar20 * (long)plVar19);
          }
          plVar15 = plVar14;
          if (plVar16 != plVar13) {
            lVar6 = *(long *)(param_1 + 0x60);
            if (*(long *)(lVar6 + (long)plVar16 * 8) == 0) {
              *(long **)(lVar6 + (long)plVar16 * 8) = plVar12;
              plVar13 = plVar16;
            }
            else {
              *plVar12 = *plVar14;
              *plVar14 = **(undefined8 **)(lVar6 + (long)plVar16 * 8);
              **(long **)(lVar6 + (long)plVar16 * 8) = (long)plVar14;
              plVar15 = plVar12;
            }
          }
          plVar12 = plVar15;
          plVar14 = (long *)*plVar15;
        }
      }
    }
    else if (plVar19 < plVar21) {
      plVar12 = (long *)(long)((float)*(ulong *)(param_1 + 0x78) / *(float *)(param_1 + 0x80));
      if ((plVar21 < (long *)0x3) || (((ulong)plVar21 & (long)plVar21 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar12) {
        plVar12 = (long *)(1L << (-LZCOUNT((long)plVar12 + -1) & 0x3fU));
      }
      if (plVar19 <= plVar12) {
        plVar19 = plVar12;
      }
      if (plVar19 < plVar21) {
        if (plVar19 != (long *)0x0) goto LAB_10a571f84;
        lVar6 = *(long *)(param_1 + 0x60);
        *(undefined8 *)(param_1 + 0x60) = 0;
        if (lVar6 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(param_1 + 0x68) = 0;
        plVar21 = (long *)0x0;
      }
      else {
        plVar21 = *(long **)(param_1 + 0x68);
      }
    }
    if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
      plVar19 = (long *)((long)plVar21 - 1U & (ulong)plVar17);
    }
    else {
      plVar19 = plVar17;
      if (plVar21 <= plVar17) {
        uVar9 = 0;
        if (plVar21 != (long *)0x0) {
          uVar9 = (ulong)plVar17 / (ulong)plVar21;
        }
        plVar19 = (long *)((long)plVar17 - uVar9 * (long)plVar21);
      }
    }
  }
  lVar6 = *(long *)(param_1 + 0x60);
  plVar17 = *(long **)(lVar6 + (long)plVar19 * 8);
  if (plVar17 == (long *)0x0) {
    plVar17 = (long *)(param_1 + 0x70);
    *plVar18 = *plVar17;
    *plVar17 = (long)plVar18;
    *(long **)(lVar6 + (long)plVar19 * 8) = plVar17;
    if (*plVar18 != 0) {
      plVar17 = *(long **)(*plVar18 + 8);
      if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
        plVar17 = (long *)((ulong)plVar17 & (long)plVar21 - 1U);
      }
      else if (plVar21 <= plVar17) {
        uVar9 = 0;
        if (plVar21 != (long *)0x0) {
          uVar9 = (ulong)plVar17 / (ulong)plVar21;
        }
        plVar17 = (long *)((long)plVar17 - uVar9 * (long)plVar21);
      }
      plVar17 = (long *)(*(long *)(param_1 + 0x60) + (long)plVar17 * 8);
      goto LAB_10a57219c;
    }
  }
  else {
    *plVar18 = *plVar17;
LAB_10a57219c:
    *plVar17 = (long)plVar18;
  }
  *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
LAB_10a5721ac:
  plVar17 = plStack_60;
  plVar18[4] = (long)plVar8;
  if (plStack_60 != (long *)0x0) {
    plVar19 = plStack_60 + 1;
    do {
      lVar6 = *plVar19;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar2) {
        *plVar19 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  lVar6 = *param_3;
  if (lVar6 == 0) {
    return;
  }
LAB_10a5721f0:
  ___dynamic_cast(lVar6,&PTR_DAT_110bf32c0,&PTR_DAT_110bd3290,0);
  if (lVar6 != 0) {
    plVar17 = (long *)param_3[1];
    if (plVar17 != (long *)0x0) {
      plVar19 = plVar17 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar2) {
          *plVar19 = *plVar19 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar19;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar2) {
          *plVar19 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    func_0x00010a0d77bc(&plStack_68,*param_3);
    plVar17 = plStack_68;
    uStack_88 = *(undefined8 *)(*param_3 + 0x48);
    uStack_90 = *(undefined8 *)(*param_3 + 0x40);
    param_1 = param_1 + 0x38;
    puStack_70 = (undefined1 *)&uStack_90;
    FUN_10a3f9630(param_1,&uStack_90,&UNK_10dd5b8f9,&puStack_70,&uStack_71);
    plVar19 = plStack_60;
    *(long **)(param_1 + 0x20) = plVar17;
    if (plStack_60 != (long *)0x0) {
      plVar17 = plStack_60 + 1;
      do {
        lVar6 = *plVar17;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar2) {
          *plVar17 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
      }
    }
  }
  return;
}



/* Entry: 10a5723a4; end: 10a572463;  */

void FUN_10a5723a4(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar4 = (long *)param_3[1];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_38 = plVar4;
    if (plVar4 != (long *)0x0) {
      uStack_40 = *param_3;
    }
  }
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_40,param_4);
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a572464; end: 10a57259b;  */

void FUN_10a572464(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long *plStack_38;
  
  plStack_38 = (long *)param_4[1];
  lStack_40 = *param_4;
  if (param_4[1] != 0) {
    plVar1 = (long *)(param_4[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_50 = param_2;
  uStack_48 = param_3;
  FUN_10a10caf8(param_1 + 0xe8,&uStack_50,&uStack_50);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  lStack_40 = *param_4;
  plStack_38 = (long *)param_4[1];
  uStack_48 = *(undefined8 *)(lStack_40 + 0x48);
  uStack_50 = *(undefined8 *)(lStack_40 + 0x40);
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a10caf8(param_1 + 0xc0,&uStack_50,&uStack_50);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a57259c; end: 10a5726c3;  */

void FUN_10a57259c(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  long *plVar5;
  long *extraout_x8;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 auStack_100 [8];
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_d9;
  undefined8 *puStack_d8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *apuStack_78 [8];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_a0 = param_2;
  uStack_98 = param_3;
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    lVar7 = param_1 + 0x10;
    FUN_10a58537c(lVar7,&lStack_a0);
    if (lVar7 != 0) {
      uStack_88 = uStack_98;
      lStack_90 = lStack_a0;
      uStack_80 = *param_4;
      (**(code **)(param_4[1] + 0x18))(apuStack_78,param_4 + 1);
      plVar5 = &lStack_90;
      func_0x00010a577c1c(param_1 + 0x150);
      goto LAB_10a572654;
    }
  }
  uStack_88 = uStack_98;
  lStack_90 = lStack_a0;
  uStack_80 = *param_4;
  (**(code **)(param_4[1] + 0x18))(apuStack_78,param_4 + 1);
  plVar5 = &lStack_90;
  func_0x00010a577c1c(param_1 + 0x110);
LAB_10a572654:
  ppuVar3 = apuStack_78;
  (*(code *)*apuStack_78[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    (*(code *)*apuStack_78[0])(apuStack_78);
    __Unwind_Resume();
    if (*(char *)(ppuVar3 + 0x17) == '\x01') {
      uStack_e8 = *(undefined8 *)(*plVar5 + 0x48);
      uStack_f0 = *(undefined8 *)(*plVar5 + 0x40);
      ppuVar4 = ppuVar3 + 0x25;
      FUN_10a5850b8(ppuVar4,&uStack_f0);
      if (ppuVar4 == (undefined8 **)0x0) {
        (**(code **)(*(long *)*plVar5 + 0x48))(auStack_100,(long *)*plVar5,0,ppuVar3);
        ppuVar3 = ppuVar3 + 0x25;
        puStack_d8 = &uStack_f0;
        FUN_10a584e7c(ppuVar3,&uStack_f0,&UNK_10dd5b8f9,&puStack_d8,&uStack_d9);
        ppuVar3 = ppuVar3 + 4;
        func_0x00010a34d270(ppuVar3,auStack_100);
        puVar6 = ppuVar3[1];
        puVar8 = *ppuVar3;
        extraout_x8[1] = (long)ppuVar3[1];
        *extraout_x8 = (long)puVar8;
        if (puVar6 != (undefined8 *)0x0) {
          plVar5 = puVar6 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = *plVar5 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (plStack_f8 != (long *)0x0) {
          plVar5 = plStack_f8 + 1;
          do {
            lVar7 = *plVar5;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = lVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
          }
        }
      }
      else {
        puVar6 = ppuVar4[5];
        puVar8 = ppuVar4[4];
        extraout_x8[1] = (long)ppuVar4[5];
        *extraout_x8 = (long)puVar8;
        if (puVar6 != (undefined8 *)0x0) {
          plVar5 = puVar6 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = *plVar5 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
    }
    else {
      lVar7 = plVar5[1];
      lVar9 = *plVar5;
      extraout_x8[1] = plVar5[1];
      *extraout_x8 = lVar9;
      if (lVar7 != 0) {
        plVar5 = (long *)(lVar7 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    return;
  }
  return;
}



/* Entry: 10a5726c4; end: 10a57282b;  */

void FUN_10a5726c4(long *param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_39;
  undefined8 *puStack_38;
  
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    uStack_48 = *(undefined8 *)(*param_3 + 0x48);
    uStack_50 = *(undefined8 *)(*param_3 + 0x40);
    lVar5 = param_2 + 0x128;
    FUN_10a5850b8(lVar5,&uStack_50);
    if (lVar5 == 0) {
      (**(code **)(*(long *)*param_3 + 0x48))(auStack_60,(long *)*param_3,0,param_2);
      param_2 = param_2 + 0x128;
      puStack_38 = &uStack_50;
      FUN_10a584e7c(param_2,&uStack_50,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
      plVar3 = (long *)(param_2 + 0x20);
      func_0x00010a34d270(plVar3,auStack_60);
      lVar5 = plVar3[1];
      lVar4 = *plVar3;
      param_1[1] = plVar3[1];
      *param_1 = lVar4;
      if (lVar5 != 0) {
        plVar3 = (long *)(lVar5 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (plStack_58 != (long *)0x0) {
        plVar3 = plStack_58 + 1;
        do {
          lVar5 = *plVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
        }
      }
    }
    else {
      lVar4 = *(long *)(lVar5 + 0x28);
      lVar6 = *(long *)(lVar5 + 0x20);
      param_1[1] = *(long *)(lVar5 + 0x28);
      *param_1 = lVar6;
      if (lVar4 != 0) {
        plVar3 = (long *)(lVar4 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
  }
  else {
    lVar5 = param_3[1];
    lVar4 = *param_3;
    param_1[1] = param_3[1];
    *param_1 = lVar4;
    if (lVar5 != 0) {
      plVar3 = (long *)(lVar5 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return;
}



/* Entry: 10a57282c; end: 10a572c8f;  */

void FUN_10a57282c(undefined8 *****param_1,undefined8 ******param_2,undefined8 *****param_3)

{
  undefined8 ******ppppppuVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *****pppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined *puVar12;
  undefined8 *****pppppuVar13;
  undefined8 **ppuVar14;
  undefined8 *****pppppuVar15;
  undefined8 *****unaff_x20;
  long *plVar16;
  undefined8 ******ppppppuVar17;
  undefined8 *****pppppuStack_100;
  undefined8 ****ppppuStack_f8;
  undefined8 ****ppppuStack_f0;
  undefined8 ****ppppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 *****pppppuStack_d0;
  undefined8 ****ppppuStack_c8;
  undefined8 *****pppppuStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined1 uStack_a1;
  undefined8 *****pppppuStack_a0;
  undefined8 ****ppppuStack_98;
  undefined8 ****ppppuStack_90;
  undefined8 ***apppuStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar1 = (undefined8 ******)param_1[0x23];
  pppppuVar8 = param_1;
  for (ppppppuVar17 = (undefined8 ******)param_1[0x22]; ppppppuVar17 != ppppppuVar1;
      ppppppuVar17 = ppppppuVar17 + 10) {
    ppppuStack_98 = ppppppuVar17[1];
    pppppuStack_a0 = *ppppppuVar17;
    ppppuStack_90 = ppppppuVar17[2];
    (*(code *)ppppppuVar17[3][3])(apppuStack_88);
    ppppuStack_b8 = ppppuStack_98;
    pppppuStack_c0 = pppppuStack_a0;
    pppppuStack_d0 = (undefined8 ******)0x0;
    ppppuStack_c8 = (undefined8 *****)0x0;
    if ((*(char *)(param_1 + 0x17) == '\x01') &&
       (pppppuVar8 = (undefined8 *****)param_1[0x1e], pppppuVar8 != (undefined8 *****)0x0)) {
      puVar12 = (undefined *)((long)pppppuVar8 + -1);
      if (((ulong)pppppuVar8 & (ulong)puVar12) == 0) {
        pppppuVar13 = (undefined8 *****)((ulong)puVar12 & (ulong)ppppuStack_98);
      }
      else {
        pppppuVar13 = (undefined8 *****)ppppuStack_98;
        if (pppppuVar8 <= ppppuStack_98) {
          uVar4 = 0;
          if (pppppuVar8 != (undefined8 *****)0x0) {
            uVar4 = (ulong)ppppuStack_98 / (ulong)pppppuVar8;
          }
          pppppuVar13 = (undefined8 *****)((long)ppppuStack_98 - uVar4 * (long)pppppuVar8);
        }
      }
      if (param_1[0x1d][(long)pppppuVar13] != (undefined8 ***)0x0) {
        for (ppuVar14 = *param_1[0x1d][(long)pppppuVar13]; ppuVar14 != (undefined8 **)0x0;
            ppuVar14 = (undefined8 **)*ppuVar14) {
          pppppuVar15 = (undefined8 *****)ppuVar14[1];
          if ((undefined8 *****)ppppuStack_98 == pppppuVar15) {
            if ((undefined8 *****)ppuVar14[2] == pppppuStack_a0 &&
                (undefined8 ****)ppuVar14[3] == ppppuStack_98) {
              pppppuVar8 = param_1 + 0x1d;
              FUN_10a5850b8(pppppuVar8,&pppppuStack_c0);
              goto LAB_10a57294c;
            }
          }
          else {
            if (((ulong)pppppuVar8 & (ulong)puVar12) == 0) {
              pppppuVar15 = (undefined8 *****)((ulong)pppppuVar15 & (ulong)puVar12);
            }
            else if (pppppuVar8 <= pppppuVar15) {
              uVar4 = 0;
              if (pppppuVar8 != (undefined8 *****)0x0) {
                uVar4 = (ulong)pppppuVar15 / (ulong)pppppuVar8;
              }
              pppppuVar15 = (undefined8 *****)((long)pppppuVar15 - uVar4 * (long)pppppuVar8);
            }
            if (pppppuVar15 != pppppuVar13) break;
          }
        }
      }
    }
    pppppuVar8 = param_1 + 0x18;
    FUN_10a5850b8(pppppuVar8,&pppppuStack_c0);
LAB_10a57294c:
    if (pppppuVar8 == (undefined8 *****)0x0) {
      FUN_109ffdddc(&UNK_10f639994);
      goto LAB_10a572c1c;
    }
    func_0x00010a34d270(&pppppuStack_d0,pppppuVar8 + 4);
    param_2 = (undefined8 ******)pppppuStack_d0;
    param_3 = (undefined8 *****)ppppuStack_c8;
    FUN_10a572c90(&ppppuStack_90);
    unaff_x20 = (undefined8 *****)ppppuStack_c8;
    if ((undefined8 *****)ppppuStack_c8 != (undefined8 *****)0x0) {
      pppppuVar8 = (undefined8 *****)(ppppuStack_c8 + 1);
      do {
        ppppuVar9 = *pppppuVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar8,0x10);
        if (bVar3) {
          *pppppuVar8 = (undefined8 ****)((long)ppppuVar9 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppuVar9 == (undefined8 ****)0x0) {
        (*(code *)(*ppppuStack_c8)[2])(ppppuStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
      }
    }
    pppppuVar8 = (undefined8 *****)apppuStack_88;
    (*(code *)*apppuStack_88[0])();
  }
  ppppuVar9 = param_1[0x2a];
  ppppuVar11 = param_1[0x2b];
  if (ppppuVar9 == ppppuVar11) {
LAB_10a572bd0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010a052384(&pppppuStack_c0);
    (*(code *)*apppuStack_88[0])(ppppppuVar17 + 3);
    pppppuVar13 = pppppuVar8;
    __Unwind_Resume();
    pcStack_d8 = FUN_10a572c90;
    ppppuVar9 = *pppppuVar13;
    if (param_3 != (undefined8 *****)0x0) {
      pppppuVar15 = param_3 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar15,0x10);
        if (bVar3) {
          *pppppuVar15 = (undefined8 ****)((long)*pppppuVar15 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppppuStack_100 = param_2;
    ppppuStack_f8 = param_3;
    ppppuStack_f0 = unaff_x20;
    ppppuStack_e8 = pppppuVar8;
    puStack_e0 = &stack0xfffffffffffffff0;
    (*(code *)ppppuVar9)(&pppppuStack_100,pppppuVar13);
    ppppuVar9 = ppppuStack_f8;
    if ((undefined8 *****)ppppuStack_f8 != (undefined8 *****)0x0) {
      pppppuVar8 = (undefined8 *****)(ppppuStack_f8 + 1);
      do {
        ppppuVar11 = *pppppuVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar8,0x10);
        if (bVar3) {
          *pppppuVar8 = (undefined8 ****)((long)ppppuVar11 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppuVar11 == (undefined8 ****)0x0) {
        (*(code *)(*ppppuStack_f8)[2])(ppppuStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar9);
      }
    }
    return;
  }
  ppppppuVar17 = &pppppuStack_a0;
  unaff_x20 = (undefined8 *****)&UNK_10dd5b8f9;
LAB_10a5729ec:
  ppppuStack_98 = (undefined8 ****)ppppuVar9[1];
  pppppuStack_a0 = (undefined8 *****)*ppppuVar9;
  ppppuStack_90 = (undefined8 ****)ppppuVar9[2];
  (*(code *)ppppuVar9[3][3])(apppuStack_88);
  pppppuVar8 = param_1 + 0x25;
  FUN_10a5850b8(pppppuVar8,&pppppuStack_a0);
  if (pppppuVar8 == (undefined8 *****)0x0) {
    pppppuVar8 = (undefined8 *****)param_1[3];
    if (pppppuVar8 != (undefined8 *****)0x0) {
      puVar12 = (undefined *)((long)pppppuVar8 + -1);
      if (((ulong)pppppuVar8 & (ulong)puVar12) == 0) {
        pppppuVar13 = (undefined8 *****)((ulong)puVar12 & (ulong)ppppuStack_98);
      }
      else {
        pppppuVar13 = (undefined8 *****)ppppuStack_98;
        if (pppppuVar8 <= ppppuStack_98) {
          uVar4 = 0;
          if (pppppuVar8 != (undefined8 *****)0x0) {
            uVar4 = (ulong)ppppuStack_98 / (ulong)pppppuVar8;
          }
          pppppuVar13 = (undefined8 *****)((long)ppppuStack_98 - uVar4 * (long)pppppuVar8);
        }
      }
      if ((param_1[2][(long)pppppuVar13] != (undefined8 ***)0x0) &&
         (ppuVar14 = *param_1[2][(long)pppppuVar13], ppuVar14 != (undefined8 **)0x0)) {
        do {
          pppppuVar15 = (undefined8 *****)ppuVar14[1];
          if (pppppuVar15 == (undefined8 *****)ppppuStack_98) {
            if ((undefined8 *****)ppuVar14[2] == pppppuStack_a0 &&
                (undefined8 ****)ppuVar14[3] == ppppuStack_98) goto LAB_10a572aec;
          }
          else {
            if (((ulong)pppppuVar8 & (ulong)puVar12) == 0) {
              pppppuVar15 = (undefined8 *****)((ulong)pppppuVar15 & (ulong)puVar12);
            }
            else if (pppppuVar8 <= pppppuVar15) {
              uVar4 = 0;
              if (pppppuVar8 != (undefined8 *****)0x0) {
                uVar4 = (ulong)pppppuVar15 / (ulong)pppppuVar8;
              }
              pppppuVar15 = (undefined8 *****)((long)pppppuVar15 - uVar4 * (long)pppppuVar8);
            }
            if (pppppuVar15 != pppppuVar13) break;
          }
          ppuVar14 = (undefined8 **)*ppuVar14;
          if (ppuVar14 == (undefined8 **)0x0) break;
        } while( true );
      }
    }
    FUN_109ffdddc(&UNK_10f639994);
LAB_10a572c1c:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a572c20);
    (*pcVar6)();
  }
  param_2 = (undefined8 ******)pppppuVar8[4];
  param_3 = (undefined8 *****)pppppuVar8[5];
  FUN_10a572c90(&ppppuStack_90);
  goto LAB_10a572a2c;
LAB_10a572aec:
  plVar16 = ppuVar14[4];
  plVar7 = plVar16;
  (**(code **)(*plVar16 + 0x80))();
  if ((int)plVar7 == 0) {
    FUN_10a03d13c(&pppppuStack_c0,plVar16);
    param_2 = &pppppuStack_c0;
    FUN_10a069fb8(&ppppuStack_90);
    if ((undefined8 *****)ppppuStack_b8 == (undefined8 *****)0x0) goto LAB_10a572a2c;
    pppppuVar8 = (undefined8 *****)(ppppuStack_b8 + 1);
    do {
      ppppuVar10 = *pppppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppuVar8,0x10);
      if (bVar3) {
        *pppppuVar8 = (undefined8 ****)((long)ppppuVar10 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    param_2 = (undefined8 ******)0x0;
    param_3 = param_1;
    (**(code **)(*plVar16 + 0x48))(&pppppuStack_c0,plVar16);
    if ((undefined8 ******)pppppuStack_c0 != (undefined8 ******)0x0) {
      pppppuVar8 = param_1 + 0x25;
      pppppuStack_d0 = ppppppuVar17;
      FUN_10a584e7c(pppppuVar8,&pppppuStack_a0,&UNK_10dd5b8f9,&pppppuStack_d0,&uStack_a1);
      func_0x00010a34d270(pppppuVar8 + 4,&pppppuStack_c0);
      param_2 = (undefined8 ******)pppppuStack_c0;
      param_3 = (undefined8 *****)ppppuStack_b8;
      FUN_10a572c90(&ppppuStack_90);
    }
    if ((undefined8 *****)ppppuStack_b8 == (undefined8 *****)0x0) goto LAB_10a572a2c;
    pppppuVar8 = (undefined8 *****)(ppppuStack_b8 + 1);
    do {
      ppppuVar10 = *pppppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppuVar8,0x10);
      if (bVar3) {
        *pppppuVar8 = (undefined8 ****)((long)ppppuVar10 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppppuVar5 = ppppuStack_b8;
  if (ppppuVar10 == (undefined8 ****)0x0) {
    (*(code *)(*ppppuStack_b8)[2])(ppppuStack_b8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar5);
  }
LAB_10a572a2c:
  pppppuVar8 = (undefined8 *****)apppuStack_88;
  (*(code *)*apppuStack_88[0])();
  ppppuVar9 = ppppuVar9 + 10;
  if (ppppuVar9 == ppppuVar11) goto LAB_10a572bd0;
  goto LAB_10a5729ec;
}



/* Entry: 10a572c90; end: 10a572d2b;  */

void FUN_10a572c90(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar5 = (code *)*param_1;
  if (param_3 != (long *)0x0) {
    plVar1 = param_3 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_30 = param_2;
  plStack_28 = param_3;
  (*pcVar5)(&uStack_30,param_1);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a572d2c; end: 10a572dd7;  */

undefined1  [16] FUN_10a572d2c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x13;
  auVar1._0_8_ = &UNK_10f663031;
  return auVar1;
}



/* Entry: 10a572dd8; end: 10a572e7b;  */

void FUN_10a572dd8(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  puStack_70 = &UNK_10f661d4c;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &UNK_10f661d4c;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10a572e7c(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f661e63;
  uStack_68 = 0xffffffffffffffff;
  puStack_70 = (undefined *)0x100000064;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0xb0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a585520();
  FUN_10a5856e4(param_1);
  return;
}



/* Entry: 10a572e7c; end: 10a572f53;  */

/* WARNING: Removing unreachable block (ram,0x00010a572f14) */

undefined1  [16] FUN_10a572e7c(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f663031,0x13);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a585424(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a572f54; end: 10a572f93;  */

long FUN_10a572f54(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x18);
  return param_1;
}



/* Entry: 10a572f94; end: 10a573053;  */

void FUN_10a572f94(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a573054; end: 10a573153;  */

void FUN_10a573054(undefined8 param_1)

{
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  ppuStack_90 = (undefined **)0xffffffff00000002;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_5c = 0x124;
  uStack_58 = 0x13c;
  FUN_10a573154(param_1,&puStack_98);
  puStack_a0 = &UNK_10f661e8b;
  puStack_98 = &UNK_10f661e74;
  uStack_88 = 1;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  ppuStack_90 = &puStack_a0;
  FUN_10a58589c();
  puStack_a0 = &UNK_10f661ea0;
  puStack_98 = &UNK_10f661e94;
  uStack_88 = 1;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  ppuStack_90 = &puStack_a0;
  FUN_10a585bf4(param_1,&puStack_98,0);
  FUN_10a585d54(param_1);
  return;
}



/* Entry: 10a573154; end: 10a57322b;  */

/* WARNING: Removing unreachable block (ram,0x00010a5731ec) */

undefined1  [16] FUN_10a573154(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f663045,0x13);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a5857a0(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a57322c; end: 10a57329f;  */

undefined8 * FUN_10a57322c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf1908;
  param_1[3] = &PTR_FUN_110bf1970;
  (**(code **)param_1[0xc])();
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a5732a0; end: 10a5732ab;  */

undefined8 * FUN_10a5732a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf1908;
  param_1[3] = &PTR_FUN_110bf1970;
  (**(code **)param_1[0xc])();
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a5732ac; end: 10a5732d7;  */

void FUN_10a5732ac(void)

{
  FUN_10a57322c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5732d8; end: 10a5735ab;  */

int FUN_10a5732d8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  int aiStack_c8 [2];
  double dStack_c0;
  int aiStack_b8 [2];
  undefined8 *puStack_b0;
  undefined8 **ppuStack_a8;
  long *plStack_a0;
  undefined8 **ppuStack_98;
  int **ppiStack_90;
  int *piStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    FUN_10a00946c(&UNK_10f661ea9);
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x98) + 0x870);
    (**(code **)(lVar3 + 0x100))(auStack_78,lVar3 + 0x100);
    if ((*(byte *)(param_1 + 0x50) & 1) == 0) goto LAB_10a5734dc;
    puVar5 = *(undefined8 **)(param_1 + 0x30);
    func_0x000109884c0c(&ppuStack_a8,puVar5 + 1,*puVar5);
    func_0x000109884820(&puStack_d0,&ppuStack_a8,*puVar5);
    if (ppuStack_a8 != (undefined8 **)0x0) {
      (*(code *)**ppuStack_a8)();
    }
    (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_d8);
    plStack_a0 = (long *)*puVar5;
    uVar1 = param_2[1];
    puVar5 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar5 = param_2;
    }
    (**(code **)(*plStack_a0 + 0x128))(&puStack_b0,plStack_a0,puVar5,uVar1);
    aiStack_b8[0] = 6;
    uStack_80 = 1;
    piStack_88 = aiStack_b8;
    (**(code **)(*plStack_a0 + 0x58))(plStack_a0);
    ppuStack_a8 = &puStack_d0;
    ppiStack_90 = &piStack_88;
    ppuStack_98 = &puStack_d8;
    func_0x0001098960c0(aiStack_c8);
    if (aiStack_c8[0] == 3) {
      if ((ulong)ABS(dStack_c0) < 0x7ff0000000000000) {
        iVar4 = (int)dStack_c0;
      }
      else {
        if (NAN(dStack_c0)) goto LAB_10a5734e4;
        iVar4 = 0x7fffffff;
        if (dStack_c0 <= 0.0) {
          iVar4 = -0x80000000;
        }
      }
      while( true ) {
        if ((3 < aiStack_b8[0]) && (puStack_b0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_b0)();
        }
        if (puStack_d8 != (undefined8 *)0x0) {
          (**(code **)*puStack_d8)();
        }
        if (puStack_d0 != (undefined8 *)0x0) {
          (**(code **)*puStack_d0)();
        }
        FUN_10a044790(auStack_78);
        (*(code *)*apuStack_70[0])(apuStack_70);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) break;
        ___stack_chk_fail();
LAB_10a5734e4:
        iVar4 = 0;
      }
      return iVar4;
    }
  }
  func_0x00010988bd28(&UNK_10f68f550);
LAB_10a5734dc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5734e0);
  (*pcVar2)();
}



/* Entry: 10a5735ac; end: 10a57361f;  */

int FUN_10a5735ac(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  int aiStack_c8 [2];
  double dStack_c0;
  int aiStack_b8 [2];
  undefined8 *puStack_b0;
  undefined8 **ppuStack_a8;
  long *plStack_a0;
  undefined8 **ppuStack_98;
  int **ppiStack_90;
  int *piStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    FUN_10a00946c(&UNK_10f661ea9);
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x80) + 0x870);
    (**(code **)(lVar3 + 0x100))(auStack_78,lVar3 + 0x100);
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) goto LAB_10a5734dc;
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    func_0x000109884c0c(&ppuStack_a8,puVar5 + 1,*puVar5);
    func_0x000109884820(&puStack_d0,&ppuStack_a8,*puVar5);
    if (ppuStack_a8 != (undefined8 **)0x0) {
      (*(code *)**ppuStack_a8)();
    }
    (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_d8);
    plStack_a0 = (long *)*puVar5;
    uVar1 = param_2[1];
    puVar5 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar5 = param_2;
    }
    (**(code **)(*plStack_a0 + 0x128))(&puStack_b0,plStack_a0,puVar5,uVar1);
    aiStack_b8[0] = 6;
    uStack_80 = 1;
    piStack_88 = aiStack_b8;
    (**(code **)(*plStack_a0 + 0x58))(plStack_a0);
    ppuStack_a8 = &puStack_d0;
    ppiStack_90 = &piStack_88;
    ppuStack_98 = &puStack_d8;
    func_0x0001098960c0(aiStack_c8);
    if (aiStack_c8[0] == 3) {
      if ((ulong)ABS(dStack_c0) < 0x7ff0000000000000) {
        iVar4 = (int)dStack_c0;
      }
      else {
        if (NAN(dStack_c0)) goto LAB_10a5734e4;
        iVar4 = 0x7fffffff;
        if (dStack_c0 <= 0.0) {
          iVar4 = -0x80000000;
        }
      }
      while( true ) {
        if ((3 < aiStack_b8[0]) && (puStack_b0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_b0)();
        }
        if (puStack_d8 != (undefined8 *)0x0) {
          (**(code **)*puStack_d8)();
        }
        if (puStack_d0 != (undefined8 *)0x0) {
          (**(code **)*puStack_d0)();
        }
        FUN_10a044790(auStack_78);
        (*(code *)*apuStack_70[0])(apuStack_70);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) break;
        ___stack_chk_fail();
LAB_10a5734e4:
        iVar4 = 0;
      }
      return iVar4;
    }
  }
  func_0x00010988bd28(&UNK_10f68f550);
LAB_10a5734dc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5734e0);
  (*pcVar2)();
}



/* Entry: 10a573620; end: 10a5736ab;  */

undefined8 * FUN_10a573620(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 2;
  *param_1 = &PTR_FUN_110bf1560;
  FUN_10a34cfd0(&puStack_28);
  return param_1;
}



/* Entry: 10a5736ac; end: 10a57374b;  */

undefined8 * FUN_10a5736ac(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110bf2bd8;
  param_1[1] = &PTR_FUN_110bf2da0;
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  *param_1 = &PTR_FUN_110ba53b0;
  param_1[1] = &PTR_FUN_110ba5578;
  plVar1 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[6] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  param_1[4] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  param_1[2] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 10a57374c; end: 10a5737eb;  */

void FUN_10a57374c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110bf2bd8;
  param_1[1] = &PTR_FUN_110bf2da0;
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  *param_1 = &PTR_FUN_110ba53b0;
  param_1[1] = &PTR_FUN_110ba5578;
  plVar1 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[6] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  param_1[4] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  param_1[2] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a5737ec; end: 10a573887;  */

void FUN_10a5737ec(undefined8 *param_1)

{
  long *plVar1;
  
  param_1[-1] = &PTR_FUN_110bf2bd8;
  *param_1 = &PTR_FUN_110bf2da0;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  param_1[-1] = &PTR_FUN_110ba53b0;
  *param_1 = &PTR_FUN_110ba5578;
  plVar1 = (long *)param_1[8];
  param_1[8] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[5] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  param_1[3] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  param_1[1] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(param_1 + 1);
  return;
}



/* Entry: 10a573888; end: 10a573937;  */

void FUN_10a573888(undefined8 *param_1)

{
  long *plVar1;
  
  param_1[-1] = &PTR_FUN_110bf2bd8;
  *param_1 = &PTR_FUN_110bf2da0;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  param_1[-1] = &PTR_FUN_110ba53b0;
  *param_1 = &PTR_FUN_110ba5578;
  plVar1 = (long *)param_1[8];
  param_1[8] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[5] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  param_1[3] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  param_1[1] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -1);
  return;
}



/* Entry: 10a573938; end: 10a57397f;  */

undefined8 FUN_10a573938(void)

{
  undefined8 uVar1;
  
  uVar1 = 400;
  __Znwm(400);
  FUN_10a7e2fb0();
  return uVar1;
}



/* Entry: 10a573980; end: 10a573a27;  */

undefined8 * FUN_10a573980(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x148;
  __Znwm();
  FUN_10aa7093c();
  *puVar1 = &PTR_DAT_110c202a0;
  puVar1[2] = &PTR_FUN_110c20348;
  puVar1[7] = &PTR_DAT_110c203a0;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  puVar1[0x27] = 0;
  puVar1[0x20] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x22] = 0;
  puVar1[0x21] = 0;
  puVar1[0x24] = 0;
  puVar1[0x23] = 0;
  puVar1[0x26] = 0;
  puVar1[0x25] = 0;
  *(undefined4 *)(puVar1 + 0x27) = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x28) = 0;
  return puVar1;
}



/* Entry: 10a573a28; end: 10a573aeb;  */

undefined *** FUN_10a573a28(undefined8 param_1)

{
  undefined ***pppuVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  pcStack_58 = FUN_10a573aec;
  puStack_78 = &UNK_10f64c86c;
  uStack_70 = 0x1a;
  FUN_10a57077c(param_1,&puStack_78,&pcStack_68,100,0);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar1);
  pppuVar1 = (undefined ***)0x2d8;
  __Znwm(0x2d8);
  FUN_10a2d8894();
  return pppuVar1;
}



/* Entry: 10a573aec; end: 10a573aef;  */

undefined8 FUN_10a573aec(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x2d8;
  __Znwm(0x2d8);
  FUN_10a2d8894();
  return uVar1;
}



/* Entry: 10a573af0; end: 10a573b4f;  */

undefined8 FUN_10a573af0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x148;
  __Znwm(0x148);
  FUN_10a7f68ec();
  return uVar1;
}



/* Entry: 10a573b50; end: 10a573b9b;  */

undefined8 FUN_10a573b50(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x238;
  __Znwm(0x238);
  FUN_10a7ef668();
  return uVar1;
}



/* Entry: 10a573b9c; end: 10a573be3;  */

undefined8 FUN_10a573b9c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x388;
  __Znwm(0x388);
  FUN_10a7ee290();
  return uVar1;
}



/* Entry: 10a573be4; end: 10a573c2b;  */

undefined8 FUN_10a573be4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x3b8;
  __Znwm(0x3b8);
  FUN_10a7eaa0c();
  return uVar1;
}



/* Entry: 10a573c2c; end: 10a573cd3;  */

undefined8 * FUN_10a573c2c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x148;
  __Znwm();
  FUN_10aa7093c();
  *puVar1 = &PTR_DAT_110c203c0;
  puVar1[2] = &PTR_FUN_110c20468;
  puVar1[7] = &PTR_DAT_110c204c0;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x20] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x22] = 0;
  puVar1[0x21] = 0;
  puVar1[0x24] = 0;
  puVar1[0x23] = 0;
  *(undefined4 *)(puVar1 + 0x25) = 0x3f800000;
  puVar1[0x27] = 0;
  *(undefined1 *)(puVar1 + 0x28) = 0;
  return puVar1;
}



/* Entry: 10a573cd4; end: 10a573d7b;  */

undefined8 * FUN_10a573cd4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x178;
  __Znwm();
  FUN_10aa7093c();
  *puVar1 = &PTR_FUN_110b9a228;
  puVar1[2] = &PTR_DAT_110b9a2f8;
  puVar1[7] = &PTR_FUN_110b9a350;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  *(undefined4 *)(puVar1 + 0x20) = 0x3f800000;
  puVar1[0x2b] = 0;
  puVar1[0x22] = 0;
  puVar1[0x21] = 0;
  puVar1[0x24] = 0;
  puVar1[0x23] = 0;
  puVar1[0x26] = 0;
  puVar1[0x25] = 0;
  puVar1[0x28] = 0;
  puVar1[0x27] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x29] = 0;
  *(undefined4 *)(puVar1 + 0x2c) = 0x3f800000;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  return puVar1;
}



/* Entry: 10a573d7c; end: 10a573dc3;  */

undefined8 FUN_10a573d7c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x1b8;
  __Znwm(0x1b8);
  FUN_10a7f9388();
  return uVar1;
}



/* Entry: 10a573dc4; end: 10a573e0b;  */

undefined8 FUN_10a573dc4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x398;
  __Znwm(0x398);
  FUN_10a7ec98c();
  return uVar1;
}



/* Entry: 10a573e0c; end: 10a573ecf;  */

undefined *** FUN_10a573e0c(undefined8 param_1)

{
  undefined ***pppuVar1;
  undefined **ppuStack_e0;
  code *pcStack_d8;
  long lStack_a8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  pcStack_58 = FUN_10a573f94;
  puStack_78 = &UNK_10f64c73f;
  uStack_70 = 0x21;
  FUN_10a57077c(param_1,&puStack_78,&pcStack_68,100,0);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar1);
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e0 = &PTR_DAT_110b9ec98;
  pcStack_d8 = FUN_10a573f98;
  FUN_10a57077c();
  pppuVar1 = &ppuStack_e0;
  (*(code *)*ppuStack_e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  __Unwind_Resume(pppuVar1);
  pppuVar1 = (undefined ***)0x280;
  __Znwm(0x280);
  FUN_10a2d2e14();
  return pppuVar1;
}



/* Entry: 10a573ed0; end: 10a573f93;  */

undefined *** FUN_10a573ed0(undefined8 param_1)

{
  undefined ***pppuVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  pcStack_58 = FUN_10a573f98;
  puStack_78 = &UNK_10f64c77d;
  uStack_70 = 0x11;
  FUN_10a57077c(param_1,&puStack_78,&pcStack_68,100,0);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar1);
  pppuVar1 = (undefined ***)0x280;
  __Znwm(0x280);
  FUN_10a2d2e14();
  return pppuVar1;
}



/* Entry: 10a573f94; end: 10a573f97;  */

undefined8 FUN_10a573f94(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x280;
  __Znwm(0x280);
  FUN_10a2d2e14();
  return uVar1;
}



/* Entry: 10a573f98; end: 10a574033;  */

undefined8 * FUN_10a573f98(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xf8;
  __Znwm();
  FUN_10aa7093c();
  *puVar1 = &PTR_FUN_110c49cd0;
  puVar1[2] = &PTR_DAT_110c49d70;
  puVar1[7] = &PTR_DAT_110c49dc8;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined4 *)(puVar1 + 0x1e) = 0x3f800000;
  return puVar1;
}



/* Entry: 10a574034; end: 10a57408b;  */

long FUN_10a574034(long param_1)

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


