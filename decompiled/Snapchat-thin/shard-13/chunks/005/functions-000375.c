/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a83c390; end: 10a83c4bf;  */

void FUN_10a83c390(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined4 *extraout_x8;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined1 *in_stack_ffffffffffffff40;
  ulong in_stack_ffffffffffffff48;
  ulong in_stack_ffffffffffffff50;
  undefined8 in_stack_ffffffffffffff58;
  
  ppuVar9 = param_1;
  func_0x000109898688();
  if (ppuVar9 != (undefined **)0x0) {
    FUN_10a052c2c();
    param_2 = ppuVar9;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar9 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar4 = ppuVar9;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a053854();
    param_2 = ppuVar4;
    if (ppuVar9 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (ppuVar9 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar5 = &UNK_10f68f52e;
  func_0x00010988bd28();
  puVar12 = (undefined *)(long)*(char *)((long)param_2 + 0x17);
  if ((long)puVar12 < 0) {
    puVar12 = param_2[1];
  }
  ppuVar9 = param_2;
  if (puVar12 < (undefined *)0x1f) {
    ppuVar9 = (undefined **)0x3a;
    ppuVar4 = param_2;
    __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(param_2,0x3a,0);
    if (ppuVar4 == (undefined **)0xffffffffffffffff) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
                (puVar5 + 0x28,param_2);
      return;
    }
  }
  plVar6 = (long *)&UNK_10f67ca81;
  FUN_10a00946c();
  plVar7 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar8 = plVar6;
  FUN_10a83c390(plVar6,ppuVar9);
  FUN_10a052e3c(param_4);
  if (*(char *)((long)plVar8 + 0x3f) < '\0') {
    func_0x000107c3192c(&stack0xffffffffffffff40,plVar8[5],plVar8[6]);
  }
  else {
    in_stack_ffffffffffffff48 = plVar8[6];
    in_stack_ffffffffffffff40 = (undefined1 *)plVar8[5];
    in_stack_ffffffffffffff50 = plVar8[7];
  }
  puVar1 = in_stack_ffffffffffffff40;
  if (-1 < (long)in_stack_ffffffffffffff50) {
    in_stack_ffffffffffffff48 = in_stack_ffffffffffffff50 >> 0x38;
    puVar1 = &stack0xffffffffffffff40;
  }
  (**(code **)(*plVar6 + 0x128))(&stack0xffffffffffffff58,plVar6,puVar1,in_stack_ffffffffffffff48);
  *extraout_x8 = 6;
  *(undefined8 *)(extraout_x8 + 2) = in_stack_ffffffffffffff58;
  if ((long)in_stack_ffffffffffffff50 < 0) {
    __ZdlPv(in_stack_ffffffffffffff40);
  }
  plVar6 = plVar7 + 0x4b;
  lVar10 = plVar7[0x59];
  uVar11 = lVar10 - 1;
  plVar7[0x59] = uVar11;
  if (uVar11 < 8) {
    uVar11 = plVar6[lVar10 + 2];
    if (plVar7[0x5a] == uVar11) {
      return;
    }
  }
  else {
    uVar11 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar11) {
      return;
    }
  }
  lVar10 = *plVar6;
  lVar16 = plVar7[0x4c];
  lVar14 = lVar16 - lVar10;
  uVar18 = lVar14 >> 4;
  if (uVar18 < uVar11) {
    uVar19 = uVar11 - uVar18;
    lVar17 = plVar7[0x4d];
    if ((ulong)(lVar17 - lVar16 >> 4) < uVar19) {
      if (uVar11 >> 0x3c == 0) {
        uVar13 = lVar17 - lVar10 >> 3;
        if (uVar13 <= uVar11) {
          uVar13 = uVar11;
        }
        if (0x7fffffffffffffef < (ulong)(lVar17 - lVar10)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_c8 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar3 = uVar13 << 4;
          __Znwm();
          lVar16 = lVar3 + lVar14;
          _bzero(lVar16,uVar19 * 0x10);
          lVar15 = lVar16 + uVar18 * -0x10;
          _memcpy(lVar15,lVar10,lVar14);
          *plVar6 = lVar15;
          plVar7[0x4c] = lVar16 + uVar19 * 0x10;
          plVar7[0x4d] = lVar3 + uVar13 * 0x10;
          lStack_e8 = lVar10;
          lStack_e0 = lVar10;
          lStack_d8 = lVar10;
          lStack_d0 = lVar17;
          func_0x00010988c1b8(&lStack_e8);
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
    _bzero(lVar16,uVar19 * 0x10);
    plVar7[0x4c] = lVar16 + uVar19 * 0x10;
  }
  else if (uVar11 < uVar18) {
    lVar10 = lVar10 + uVar11 * 0x10;
    while (lVar16 != lVar10) {
      lVar16 = lVar16 + -0x10;
      func_0x00010988c204(lVar16);
    }
    plVar7[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar11;
  return;
}



/* Entry: 10a83c4c0; end: 10a83c5ff;  */

void FUN_10a83c4c0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
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
  undefined1 *in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a83c390(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (*(char *)((long)plVar5 + 0x3f) < '\0') {
    func_0x000107c3192c(&stack0xffffffffffffffa0,plVar5[5],plVar5[6]);
  }
  else {
    in_stack_ffffffffffffffa8 = plVar5[6];
    in_stack_ffffffffffffffa0 = (undefined1 *)plVar5[5];
    in_stack_ffffffffffffffb0 = plVar5[7];
  }
  puVar1 = in_stack_ffffffffffffffa0;
  if (-1 < (long)in_stack_ffffffffffffffb0) {
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
    puVar1 = &stack0xffffffffffffffa0;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffb8,param_2,puVar1,in_stack_ffffffffffffffa8)
  ;
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb8;
  if ((long)in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
  }
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a83c600; end: 10a83c733;  */

void FUN_10a83c600(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
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
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  func_0x00010a83c3f8(param_2,param_3);
  FUN_10a06cd04(param_5);
  func_0x000109898570(&lStack_78,param_2,param_4);
  plVar1 = plStack_68;
  lVar6 = lStack_78;
  lStack_78 = 0;
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
  func_0x00010a83c460(plVar5,&stack0xffffffffffffffa0);
  if ((long)plVar1 < 0) {
    __ZdlPv(lVar6);
  }
  if ((long)plStack_68 < 0) {
    __ZdlPv(lStack_78);
  }
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
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
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a83c734; end: 10a83c93b;  */

void FUN_10a83c734(ulong param_1)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  code *pcVar9;
  ulong uVar10;
  undefined **appuStack_c0 [2];
  char cStack_a9;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  
  func_0x000109887da8(appuStack_c0,&UNK_10e4ddc4c,199);
  pppuVar1 = (undefined ***)appuStack_c0[0];
  if (-1 < cStack_a9) {
    pppuVar1 = appuStack_c0;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c22048;
  ppuVar2 = (undefined **)&UNK_10f67a8c5;
  if (pppuVar1 != (undefined ***)0x0) {
    ppuVar2 = (undefined **)pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,ppuVar2);
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_a8 = (undefined **)pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c22048;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_40,&ppuStack_a8);
  }
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a83c91c;
    FUN_10a054dac(param_1,&DAT_10f68571c,FUN_10a83c93c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a83c91c;
    FUN_10a054dac(param_1,&DAT_10f685720,FUN_10a83d170,2,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar7 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar7) {
    uVar3 = *(undefined4 *)(lVar7 + -0x50);
    uVar5 = *(undefined4 *)(lVar7 + -0x4c);
    uVar4 = *(undefined4 *)(lVar7 + -0x48);
    uVar6 = *(undefined4 *)(lVar7 + -0x44);
    uVar8 = *(undefined4 *)(lVar7 + -0x18);
    *(long *)(param_1 + 0x170) = lVar7 + -0x68;
    uVar10 = param_1;
    FUN_10a0051e8(param_1,uVar3,uVar5,uVar8,uVar4,uVar6);
    if ((uVar10 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a83c91c:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a83c920);
  (*pcVar9)();
}



/* Entry: 10a83c93c; end: 10a83cf57;  */

/* WARNING: Possible PIC construction at 0x00010a83cf4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a83cf50) */
/* WARNING: Removing unreachable block (ram,0x00010a83cf70) */
/* WARNING: Removing unreachable block (ram,0x00010a83cf80) */
/* WARNING: Removing unreachable block (ram,0x00010a83cfa8) */
/* WARNING: Removing unreachable block (ram,0x00010a83cfb4) */
/* WARNING: Removing unreachable block (ram,0x00010a83cfcc) */
/* WARNING: Removing unreachable block (ram,0x00010a83d008) */
/* WARNING: Removing unreachable block (ram,0x00010a83d034) */
/* WARNING: Removing unreachable block (ram,0x00010a83d020) */
/* WARNING: Removing unreachable block (ram,0x00010a83d028) */
/* WARNING: Removing unreachable block (ram,0x00010a83d038) */
/* WARNING: Removing unreachable block (ram,0x00010a83d040) */
/* WARNING: Removing unreachable block (ram,0x00010a83d050) */
/* WARNING: Removing unreachable block (ram,0x00010a83d05c) */
/* WARNING: Removing unreachable block (ram,0x00010a83d07c) */
/* WARNING: Removing unreachable block (ram,0x00010a83d068) */
/* WARNING: Removing unreachable block (ram,0x00010a83d070) */
/* WARNING: Removing unreachable block (ram,0x00010a83d080) */
/* WARNING: Removing unreachable block (ram,0x00010a83d088) */
/* WARNING: Removing unreachable block (ram,0x00010a83d08c) */
/* WARNING: Removing unreachable block (ram,0x00010a83d0b0) */
/* WARNING: Removing unreachable block (ram,0x00010a83d098) */
/* WARNING: Removing unreachable block (ram,0x00010a83d0a4) */
/* WARNING: Removing unreachable block (ram,0x00010a83d0b4) */
/* WARNING: Removing unreachable block (ram,0x00010a83d0bc) */
/* WARNING: Removing unreachable block (ram,0x00010a83d0c4) */
/* WARNING: Removing unreachable block (ram,0x00010a83d0c8) */
/* WARNING: Removing unreachable block (ram,0x00010a83d0cc) */
/* WARNING: Removing unreachable block (ram,0x00010a83d0e8) */
/* WARNING: Removing unreachable block (ram,0x00010a83d0d4) */
/* WARNING: Removing unreachable block (ram,0x00010a83d0dc) */
/* WARNING: Removing unreachable block (ram,0x00010a83d0ec) */
/* WARNING: Removing unreachable block (ram,0x00010a83d0f4) */
/* WARNING: Removing unreachable block (ram,0x00010a83d100) */
/* WARNING: Removing unreachable block (ram,0x00010a83d134) */
/* WARNING: Removing unreachable block (ram,0x00010a83d160) */
/* WARNING: Removing unreachable block (ram,0x00010a83d144) */
/* WARNING: Removing unreachable block (ram,0x00010a83cfc8) */
/* WARNING: Removing unreachable block (ram,0x00010a83cf9c) */

void FUN_10a83c93c(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long lVar17;
  long *unaff_x22;
  long lVar18;
  long lVar19;
  long *unaff_x23;
  long lVar20;
  long *unaff_x24;
  long *plVar21;
  long *unaff_x25;
  long *plVar22;
  ulong unaff_x26;
  ulong uVar23;
  ulong unaff_x27;
  ulong uVar24;
  long *unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uStack_110;
  long *plStack_108;
  long *plStack_100;
  long lStack_f8;
  long *plStack_f0;
  long lStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long lStack_a0;
  byte bStack_78;
  long lStack_70;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_2;
  uStack_110 = param_1;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  plStack_108 = plVar8;
  FUN_10a83cf58(param_2,param_3);
  FUN_10a83cfc0(param_5);
  if (*param_4 == 7) {
    plVar8 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar11 = param_2;
    plStack_d0 = plVar8;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_d0);
    if ((int)plVar11 != 0) {
      plVar8 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar10 = plVar8[0x48];
      if ((lVar10 == 0) ||
         (___dynamic_cast(lVar10,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar8 = plStack_d0,
         lVar10 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a83cf3c;
      }
      plStack_d0 = (long *)0x0;
      lStack_b0 = CONCAT44(lStack_b0._4_4_,7);
      plStack_a8 = plVar8;
      plStack_b8 = param_2;
      FUN_10a688ac0(&plStack_100,&plStack_b8,*(undefined8 *)(lVar10 + 8));
      if ((3 < (int)lStack_b0) && (plStack_a8 != (long *)0x0)) {
        (**(code **)*plStack_a8)();
      }
    }
    if (plStack_d0 != (long *)0x0) {
      (**(code **)*plStack_d0)();
    }
    if (((ulong)plVar11 & 1) != 0) {
      plStack_b8 = plStack_100;
      lStack_b0 = lStack_f8;
      if (lStack_f8 != 0) {
        plVar8 = (long *)(lStack_f8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = *plVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_a0 = lStack_e8;
      plStack_a8 = plStack_f0;
      if (lStack_e8 != 0) {
        plVar8 = (long *)(lStack_e8 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = *plVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      bStack_78 = 2;
      plVar11 = (long *)0x30;
      __Znwm();
      plVar8 = plVar9 + 3;
      plVar12 = plVar11 + 1;
      *plVar12 = 0;
      plVar11[2] = 0;
      *plVar11 = (long)&PTR_FUN_110b9fc88;
      plVar22 = plVar11 + 3;
      *plVar22 = (long)&PTR_FUN_110c0f9b0;
      plVar11[4] = 0;
      plVar11[5] = 0;
      uVar14 = ((ulong)(uint)((int)plVar22 << 3) + 8 ^ (ulong)plVar22 >> 0x20) * -0x622015f714c7d297
      ;
      uVar14 = ((ulong)plVar22 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
      uVar24 = (uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297;
      uVar23 = plVar9[4];
      uVar14 = unaff_x21;
      plStack_e0 = plVar22;
      plStack_d8 = plVar11;
      if (uVar23 != 0) {
        uVar13 = uVar23 - 1;
        if ((uVar23 & uVar13) == 0) {
          uVar14 = uVar13 & uVar24;
        }
        else {
          uVar14 = uVar24;
          if (uVar23 <= uVar24) {
            uVar14 = 0;
            if (uVar23 != 0) {
              uVar14 = uVar24 / uVar23;
            }
            uVar14 = uVar24 - uVar14 * uVar23;
          }
        }
        puVar15 = *(undefined8 **)(*plVar8 + uVar14 * 8);
        if (puVar15 != (undefined8 *)0x0) {
          for (plVar21 = (long *)*puVar15; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
            uVar16 = plVar21[1];
            if (uVar16 == uVar24) {
              if ((long *)plVar21[2] == plVar22) goto LAB_10a83ccf0;
            }
            else {
              if ((uVar23 & uVar13) == 0) {
                uVar16 = uVar16 & uVar13;
              }
              else if (uVar23 <= uVar16) {
                uVar5 = 0;
                if (uVar23 != 0) {
                  uVar5 = uVar16 / uVar23;
                }
                uVar16 = uVar16 - uVar5 * uVar23;
              }
              if (uVar16 != uVar14) break;
            }
          }
        }
      }
      plVar21 = (long *)0x68;
      __Znwm();
      uStack_c0 = 1;
      *plVar21 = 0;
      plVar21[1] = uVar24;
      plVar21[2] = (long)plVar22;
      plVar21[3] = (long)plVar11;
      plStack_e0 = (long *)0x0;
      plStack_d8 = (long *)0x0;
      *(undefined1 *)(plVar21 + 0xc) = 3;
      plVar21[4] = (long)plStack_100;
      plVar21[5] = lStack_b0;
      if (lStack_b0 != 0) {
        plVar11 = (long *)(lStack_b0 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar21[7] = lStack_a0;
      plVar21[6] = (long)plStack_a8;
      if (lStack_a0 != 0) {
        plVar11 = (long *)(lStack_a0 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(byte *)(plVar21 + 0xc) = bStack_78;
      plStack_c8 = plVar8;
      if ((uVar23 == 0) || (*(float *)(plVar9 + 7) * (float)uVar23 < (float)(plVar9[6] + 1))) {
        uVar14 = 1;
        if (2 < uVar23) {
          uVar14 = (ulong)((uVar23 & uVar23 - 1) != 0);
        }
        uVar14 = uVar14 | uVar23 << 1;
        uVar23 = (ulong)((float)(plVar9[6] + 1) / *(float *)(plVar9 + 7));
        if (uVar14 <= uVar23) {
          uVar14 = uVar23;
        }
        FUN_10a727670(plVar8,uVar14);
        uVar23 = plVar9[4];
        if ((uVar23 & uVar23 - 1) == 0) {
          uVar14 = uVar23 - 1 & uVar24;
        }
        else {
          uVar14 = uVar24;
          if (uVar23 <= uVar24) {
            uVar14 = 0;
            if (uVar23 != 0) {
              uVar14 = uVar24 / uVar23;
            }
            uVar14 = uVar24 - uVar14 * uVar23;
          }
        }
      }
      lVar10 = *plVar8;
      plVar11 = *(long **)(lVar10 + uVar14 * 8);
      if (plVar11 == (long *)0x0) {
        plVar11 = plVar9 + 5;
        *plVar21 = *plVar11;
        *plVar11 = (long)plVar21;
        *(long **)(lVar10 + uVar14 * 8) = plVar11;
        if (*plVar21 != 0) {
          uVar13 = *(ulong *)(*plVar21 + 8);
          if ((uVar23 & uVar23 - 1) == 0) {
            uVar13 = uVar13 & uVar23 - 1;
          }
          else if (uVar23 <= uVar13) {
            uVar16 = 0;
            if (uVar23 != 0) {
              uVar16 = uVar13 / uVar23;
            }
            uVar13 = uVar13 - uVar16 * uVar23;
          }
          plVar11 = (long *)(*plVar8 + uVar13 * 8);
          goto LAB_10a83cd94;
        }
      }
      else {
        *plVar21 = *plVar11;
LAB_10a83cd94:
        *plVar11 = (long)plVar21;
      }
      plVar9[6] = plVar9[6] + 1;
      goto LAB_10a83cda4;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
  goto LAB_10a83cf3c;
LAB_10a83ccf0:
  do {
    lVar10 = *plVar12;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *plVar12 = lVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar10 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
  }
LAB_10a83cda4:
  if (*(char *)(plVar9[9] + 8) == '\x01') {
    (*(code *)plVar9[8])(plVar9);
  }
  plVar11 = plStack_108;
  plStack_c8 = (long *)plVar21[3];
  plStack_d0 = (long *)plVar21[2];
  if (plVar21[3] != 0) {
    plVar12 = (long *)(plVar21[3] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((ulong)bStack_78 < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[bStack_78])(&plStack_b8);
    FUN_10a688c1c(&plStack_100);
    FUN_10a05ff7c(uStack_110,param_2,&plStack_d0);
    plVar12 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      plVar2 = plStack_c8 + 1;
      do {
        lVar10 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_2 = plVar12;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
      ___stack_chk_fail();
      plStack_d0 = (long *)0x0;
      func_0x00010a72787c(plVar11 + 1,plVar21);
      FUN_10a004978(&plStack_e0);
      if (3 < (ulong)bStack_78) goto LAB_10a83cf3c;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_78])(&plStack_b8);
      FUN_10a688c1c(&plStack_100);
      unaff_x30 = 0x10a83cf50;
      register0x00000008 = (BADSPACEBASE *)&uStack_110;
      unaff_x19 = plVar11;
      unaff_x20 = param_2;
      unaff_x21 = uVar14;
      unaff_x22 = plVar9;
      unaff_x23 = plVar8;
      unaff_x24 = plVar21;
      unaff_x25 = plVar22;
      unaff_x26 = uVar23;
      unaff_x27 = uVar24;
      unaff_x28 = plStack_100;
      unaff_x29 = puVar1;
      plVar11 = plStack_108;
    }
    plVar8 = plVar11 + 0x4b;
    lVar10 = plVar11[0x59];
    uVar14 = lVar10 - 1;
    plVar11[0x59] = uVar14;
    if (uVar14 < 8) {
      uVar14 = plVar8[lVar10 + 2];
      if (plVar11[0x5a] == uVar14) {
        return;
      }
    }
    else {
      uVar14 = *(ulong *)(plVar11[0x57] + -8);
      plVar11[0x57] = plVar11[0x57] + -8;
      if (plVar11[0x5a] == uVar14) {
        return;
      }
    }
    *(long **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    lVar10 = *plVar8;
    lVar19 = plVar11[0x4c];
    lVar17 = lVar19 - lVar10;
    uVar23 = lVar17 >> 4;
    if (uVar23 < uVar14) {
      uVar24 = uVar14 - uVar23;
      lVar20 = plVar11[0x4d];
      if ((ulong)(lVar20 - lVar19 >> 4) < uVar24) {
        if (uVar14 >> 0x3c == 0) {
          uVar13 = lVar20 - lVar10 >> 3;
          if (uVar13 <= uVar14) {
            uVar13 = uVar14;
          }
          if (0x7fffffffffffffef < (ulong)(lVar20 - lVar10)) {
            uVar13 = 0xfffffffffffffff;
          }
          *(long **)((long)register0x00000008 + -0x68) = plVar8;
          if (uVar13 >> 0x3c == 0) {
            lVar7 = uVar13 << 4;
            __Znwm();
            lVar19 = lVar7 + lVar17;
            _bzero(lVar19,uVar24 * 0x10);
            lVar18 = lVar19 + uVar23 * -0x10;
            _memcpy(lVar18,lVar10,lVar17);
            *plVar8 = lVar18;
            plVar11[0x4c] = lVar19 + uVar24 * 0x10;
            plVar11[0x4d] = lVar7 + uVar13 * 0x10;
            *(long *)((long)register0x00000008 + -0x78) = lVar10;
            *(long *)((long)register0x00000008 + -0x70) = lVar20;
            *(long *)((long)register0x00000008 + -0x88) = lVar10;
            *(long *)((long)register0x00000008 + -0x80) = lVar10;
            func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
            goto code_r0x00010988c138;
          }
          func_0x000104c4f740();
        }
        else {
          func_0x00010988c1a4();
        }
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
        (*pcVar6)();
      }
      _bzero(lVar19,uVar24 * 0x10);
      plVar11[0x4c] = lVar19 + uVar24 * 0x10;
    }
    else if (uVar14 < uVar23) {
      lVar10 = lVar10 + uVar14 * 0x10;
      while (lVar19 != lVar10) {
        lVar19 = lVar19 + -0x10;
        func_0x00010988c204(lVar19);
      }
      plVar11[0x4c] = lVar10;
    }
code_r0x00010988c138:
    plVar11[0x5a] = uVar14;
    return;
  }
LAB_10a83cf3c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a83cf40);
  (*pcVar6)();
}



/* Entry: 10a83cf58; end: 10a83cfbf;  */

void FUN_10a83cf58(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plStack_60;
  undefined1 uStack_58;
  undefined4 uStack_57;
  undefined3 uStack_53;
  
  lVar4 = param_1;
  func_0x000109898688();
  if (lVar4 != 0) {
    FUN_10a053854(param_1,lVar4);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar3 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar3 == 1) {
    return;
  }
  lVar4 = 1;
  FUN_10a052ee0(1,0,puVar3);
  plVar1 = (long *)(lVar4 + 0x18);
  plVar5 = plVar1;
  FUN_10a727988();
  if (plVar5 == (long *)0x0) goto LAB_10a83d134;
  uVar8 = *(ulong *)(lVar4 + 0x20);
  lVar6 = *plVar5;
  uVar7 = plVar5[1];
  uVar9 = uVar8 - 1;
  if ((uVar8 & uVar9) == 0) {
    uVar7 = uVar9 & uVar7;
  }
  else if (uVar8 <= uVar7) {
    uVar11 = 0;
    if (uVar8 != 0) {
      uVar11 = uVar7 / uVar8;
    }
    uVar7 = uVar7 - uVar11 * uVar8;
  }
  plVar2 = *(long **)(*plVar1 + uVar7 * 8);
  do {
    plVar10 = plVar2;
    plVar2 = (long *)*plVar10;
  } while ((long *)*plVar10 != plVar5);
  if (plVar10 == (long *)(lVar4 + 0x28)) {
LAB_10a83d088:
    if (lVar6 == 0) {
LAB_10a83d0bc:
      *(undefined8 *)(*plVar1 + uVar7 * 8) = 0;
      lVar6 = *plVar5;
      goto LAB_10a83d0c4;
    }
    uVar11 = *(ulong *)(lVar6 + 8);
    if ((uVar8 & uVar9) == 0) {
      uVar12 = uVar11 & uVar9;
    }
    else {
      uVar12 = uVar11;
      if (uVar8 <= uVar11) {
        uVar12 = 0;
        if (uVar8 != 0) {
          uVar12 = uVar11 / uVar8;
        }
        uVar12 = uVar11 - uVar12 * uVar8;
      }
    }
    if (uVar12 != uVar7) goto LAB_10a83d0bc;
LAB_10a83d0cc:
    if ((uVar8 & uVar9) == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar8 <= uVar11) {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar9 * uVar8;
    }
    if (uVar11 != uVar7) {
      *(long **)(*plVar1 + uVar11 * 8) = plVar10;
      lVar6 = *plVar5;
    }
  }
  else {
    uVar11 = plVar10[1];
    if ((uVar8 & uVar9) == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar8 <= uVar11) {
      uVar12 = 0;
      if (uVar8 != 0) {
        uVar12 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar12 * uVar8;
    }
    if (uVar11 != uVar7) goto LAB_10a83d088;
LAB_10a83d0c4:
    if (lVar6 != 0) {
      uVar11 = *(ulong *)(lVar6 + 8);
      goto LAB_10a83d0cc;
    }
  }
  *plVar10 = lVar6;
  *plVar5 = 0;
  *(long *)(lVar4 + 0x30) = *(long *)(lVar4 + 0x30) + -1;
  uStack_58 = 1;
  uStack_57 = 0;
  uStack_53 = 0;
  plStack_60 = plVar1;
  func_0x00010a72787c(&plStack_60);
LAB_10a83d134:
  if (*(char *)(*(long *)(lVar4 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a83d15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x40))(lVar4);
    return;
  }
  return;
}



/* Entry: 10a83cfc0; end: 10a83cfe3;  */

void FUN_10a83cfc0(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plStack_40;
  undefined1 uStack_38;
  undefined4 uStack_37;
  undefined3 uStack_33;
  
  if ((int)param_1 == 1) {
    return;
  }
  lVar3 = 1;
  FUN_10a052ee0(1,0,param_1);
  plVar1 = (long *)(lVar3 + 0x18);
  plVar4 = plVar1;
  FUN_10a727988();
  if (plVar4 == (long *)0x0) goto LAB_10a83d134;
  uVar7 = *(ulong *)(lVar3 + 0x20);
  lVar5 = *plVar4;
  uVar6 = plVar4[1];
  uVar8 = uVar7 - 1;
  if ((uVar7 & uVar8) == 0) {
    uVar6 = uVar8 & uVar6;
  }
  else if (uVar7 <= uVar6) {
    uVar10 = 0;
    if (uVar7 != 0) {
      uVar10 = uVar6 / uVar7;
    }
    uVar6 = uVar6 - uVar10 * uVar7;
  }
  plVar2 = *(long **)(*plVar1 + uVar6 * 8);
  do {
    plVar9 = plVar2;
    plVar2 = (long *)*plVar9;
  } while ((long *)*plVar9 != plVar4);
  if (plVar9 == (long *)(lVar3 + 0x28)) {
LAB_10a83d088:
    if (lVar5 == 0) {
LAB_10a83d0bc:
      *(undefined8 *)(*plVar1 + uVar6 * 8) = 0;
      lVar5 = *plVar4;
      goto LAB_10a83d0c4;
    }
    uVar10 = *(ulong *)(lVar5 + 8);
    if ((uVar7 & uVar8) == 0) {
      uVar11 = uVar10 & uVar8;
    }
    else {
      uVar11 = uVar10;
      if (uVar7 <= uVar10) {
        uVar11 = 0;
        if (uVar7 != 0) {
          uVar11 = uVar10 / uVar7;
        }
        uVar11 = uVar10 - uVar11 * uVar7;
      }
    }
    if (uVar11 != uVar6) goto LAB_10a83d0bc;
LAB_10a83d0cc:
    if ((uVar7 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar7 <= uVar10) {
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar8 * uVar7;
    }
    if (uVar10 != uVar6) {
      *(long **)(*plVar1 + uVar10 * 8) = plVar9;
      lVar5 = *plVar4;
    }
  }
  else {
    uVar10 = plVar9[1];
    if ((uVar7 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar7 <= uVar10) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar11 * uVar7;
    }
    if (uVar10 != uVar6) goto LAB_10a83d088;
LAB_10a83d0c4:
    if (lVar5 != 0) {
      uVar10 = *(ulong *)(lVar5 + 8);
      goto LAB_10a83d0cc;
    }
  }
  *plVar9 = lVar5;
  *plVar4 = 0;
  *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + -1;
  uStack_38 = 1;
  uStack_37 = 0;
  uStack_33 = 0;
  plStack_40 = plVar1;
  func_0x00010a72787c(&plStack_40);
LAB_10a83d134:
  if (*(char *)(*(long *)(lVar3 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a83d15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x40))(lVar3);
    return;
  }
  return;
}



/* Entry: 10a83cfe4; end: 10a83d16f;  */

void FUN_10a83cfe4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plStack_30;
  undefined1 uStack_28;
  undefined4 uStack_27;
  undefined3 uStack_23;
  
  plVar1 = (long *)(param_1 + 0x18);
  plVar3 = plVar1;
  FUN_10a727988();
  if (plVar3 == (long *)0x0) goto LAB_10a83d134;
  uVar6 = *(ulong *)(param_1 + 0x20);
  lVar4 = *plVar3;
  uVar5 = plVar3[1];
  uVar7 = uVar6 - 1;
  if ((uVar6 & uVar7) == 0) {
    uVar5 = uVar7 & uVar5;
  }
  else if (uVar6 <= uVar5) {
    uVar9 = 0;
    if (uVar6 != 0) {
      uVar9 = uVar5 / uVar6;
    }
    uVar5 = uVar5 - uVar9 * uVar6;
  }
  plVar2 = *(long **)(*plVar1 + uVar5 * 8);
  do {
    plVar8 = plVar2;
    plVar2 = (long *)*plVar8;
  } while ((long *)*plVar8 != plVar3);
  if (plVar8 == (long *)(param_1 + 0x28)) {
LAB_10a83d088:
    if (lVar4 == 0) {
LAB_10a83d0bc:
      *(undefined8 *)(*plVar1 + uVar5 * 8) = 0;
      lVar4 = *plVar3;
      goto LAB_10a83d0c4;
    }
    uVar9 = *(ulong *)(lVar4 + 8);
    if ((uVar6 & uVar7) == 0) {
      uVar10 = uVar9 & uVar7;
    }
    else {
      uVar10 = uVar9;
      if (uVar6 <= uVar9) {
        uVar10 = 0;
        if (uVar6 != 0) {
          uVar10 = uVar9 / uVar6;
        }
        uVar10 = uVar9 - uVar10 * uVar6;
      }
    }
    if (uVar10 != uVar5) goto LAB_10a83d0bc;
LAB_10a83d0cc:
    if ((uVar6 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar6 <= uVar9) {
      uVar7 = 0;
      if (uVar6 != 0) {
        uVar7 = uVar9 / uVar6;
      }
      uVar9 = uVar9 - uVar7 * uVar6;
    }
    if (uVar9 != uVar5) {
      *(long **)(*plVar1 + uVar9 * 8) = plVar8;
      lVar4 = *plVar3;
    }
  }
  else {
    uVar9 = plVar8[1];
    if ((uVar6 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar6 <= uVar9) {
      uVar10 = 0;
      if (uVar6 != 0) {
        uVar10 = uVar9 / uVar6;
      }
      uVar9 = uVar9 - uVar10 * uVar6;
    }
    if (uVar9 != uVar5) goto LAB_10a83d088;
LAB_10a83d0c4:
    if (lVar4 != 0) {
      uVar9 = *(ulong *)(lVar4 + 8);
      goto LAB_10a83d0cc;
    }
  }
  *plVar8 = lVar4;
  *plVar3 = 0;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  uStack_28 = 1;
  uStack_27 = 0;
  uStack_23 = 0;
  plStack_30 = plVar1;
  func_0x00010a72787c(&plStack_30);
LAB_10a83d134:
  if (*(char *)(*(long *)(param_1 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a83d15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(param_1);
    return;
  }
  return;
}



/* Entry: 10a83d170; end: 10a83d28b;  */

void FUN_10a83d170(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a83cf58(param_2,param_3);
  FUN_10a060490(param_5);
  FUN_10a0604b4(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a83cfe4(plVar6,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
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
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a83d28c; end: 10a83d3bf;  */

void FUN_10a83d28c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
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
  plVar6 = param_2;
  FUN_10a83c390(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar16 = (long *)plVar6[9];
  if (plVar6[9] != 0) {
    plVar6 = (long *)(plVar6[9] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
  if (plVar16 != (long *)0x0) {
    plVar6 = plVar16 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
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
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a83d3c0; end: 10a83d5c7;  */

void FUN_10a83d3c0(ulong param_1)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  code *pcVar9;
  ulong uVar10;
  undefined **appuStack_c0 [2];
  char cStack_a9;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  
  func_0x000109887da8(appuStack_c0,&UNK_10e4dddc2,0xa5);
  pppuVar1 = (undefined ***)appuStack_c0[0];
  if (-1 < cStack_a9) {
    pppuVar1 = appuStack_c0;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c22060;
  ppuVar2 = (undefined **)&UNK_10f67a8c5;
  if (pppuVar1 != (undefined ***)0x0) {
    ppuVar2 = (undefined **)pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,ppuVar2);
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_a8 = (undefined **)pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c22060;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_40,&ppuStack_a8);
  }
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a83d5a8;
    FUN_10a054dac(param_1,&DAT_10f68571c,FUN_10a83d5c8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a83d5a8;
    FUN_10a054dac(param_1,&DAT_10f685720,FUN_10a83ddfc,2,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar7 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar7) {
    uVar3 = *(undefined4 *)(lVar7 + -0x50);
    uVar5 = *(undefined4 *)(lVar7 + -0x4c);
    uVar4 = *(undefined4 *)(lVar7 + -0x48);
    uVar6 = *(undefined4 *)(lVar7 + -0x44);
    uVar8 = *(undefined4 *)(lVar7 + -0x18);
    *(long *)(param_1 + 0x170) = lVar7 + -0x68;
    uVar10 = param_1;
    FUN_10a0051e8(param_1,uVar3,uVar5,uVar8,uVar4,uVar6);
    if ((uVar10 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a83d5a8:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a83d5ac);
  (*pcVar9)();
}



/* Entry: 10a83d5c8; end: 10a83dbe3;  */

/* WARNING: Possible PIC construction at 0x00010a83dbd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a83dbdc) */
/* WARNING: Removing unreachable block (ram,0x00010a83dbfc) */
/* WARNING: Removing unreachable block (ram,0x00010a83dc0c) */
/* WARNING: Removing unreachable block (ram,0x00010a83dc34) */
/* WARNING: Removing unreachable block (ram,0x00010a83dc40) */
/* WARNING: Removing unreachable block (ram,0x00010a83dc58) */
/* WARNING: Removing unreachable block (ram,0x00010a83dc94) */
/* WARNING: Removing unreachable block (ram,0x00010a83dcc0) */
/* WARNING: Removing unreachable block (ram,0x00010a83dcac) */
/* WARNING: Removing unreachable block (ram,0x00010a83dcb4) */
/* WARNING: Removing unreachable block (ram,0x00010a83dcc4) */
/* WARNING: Removing unreachable block (ram,0x00010a83dccc) */
/* WARNING: Removing unreachable block (ram,0x00010a83dcdc) */
/* WARNING: Removing unreachable block (ram,0x00010a83dce8) */
/* WARNING: Removing unreachable block (ram,0x00010a83dd08) */
/* WARNING: Removing unreachable block (ram,0x00010a83dcf4) */
/* WARNING: Removing unreachable block (ram,0x00010a83dcfc) */
/* WARNING: Removing unreachable block (ram,0x00010a83dd0c) */
/* WARNING: Removing unreachable block (ram,0x00010a83dd14) */
/* WARNING: Removing unreachable block (ram,0x00010a83dd18) */
/* WARNING: Removing unreachable block (ram,0x00010a83dd3c) */
/* WARNING: Removing unreachable block (ram,0x00010a83dd24) */
/* WARNING: Removing unreachable block (ram,0x00010a83dd30) */
/* WARNING: Removing unreachable block (ram,0x00010a83dd40) */
/* WARNING: Removing unreachable block (ram,0x00010a83dd48) */
/* WARNING: Removing unreachable block (ram,0x00010a83dd50) */
/* WARNING: Removing unreachable block (ram,0x00010a83dd54) */
/* WARNING: Removing unreachable block (ram,0x00010a83dd58) */
/* WARNING: Removing unreachable block (ram,0x00010a83dd74) */
/* WARNING: Removing unreachable block (ram,0x00010a83dd60) */
/* WARNING: Removing unreachable block (ram,0x00010a83dd68) */
/* WARNING: Removing unreachable block (ram,0x00010a83dd78) */
/* WARNING: Removing unreachable block (ram,0x00010a83dd80) */
/* WARNING: Removing unreachable block (ram,0x00010a83dd8c) */
/* WARNING: Removing unreachable block (ram,0x00010a83ddc0) */
/* WARNING: Removing unreachable block (ram,0x00010a83ddec) */
/* WARNING: Removing unreachable block (ram,0x00010a83ddd0) */
/* WARNING: Removing unreachable block (ram,0x00010a83dc54) */
/* WARNING: Removing unreachable block (ram,0x00010a83dc28) */

void FUN_10a83d5c8(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long lVar17;
  long *unaff_x22;
  long lVar18;
  long lVar19;
  long *unaff_x23;
  long lVar20;
  long *unaff_x24;
  long *plVar21;
  long *unaff_x25;
  long *plVar22;
  ulong unaff_x26;
  ulong uVar23;
  ulong unaff_x27;
  ulong uVar24;
  long *unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uStack_110;
  long *plStack_108;
  long *plStack_100;
  long lStack_f8;
  long *plStack_f0;
  long lStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long lStack_a0;
  byte bStack_78;
  long lStack_70;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_2;
  uStack_110 = param_1;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  plStack_108 = plVar8;
  FUN_10a83dbe4(param_2,param_3);
  FUN_10a83dc4c(param_5);
  if (*param_4 == 7) {
    plVar8 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar11 = param_2;
    plStack_d0 = plVar8;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_d0);
    if ((int)plVar11 != 0) {
      plVar8 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar10 = plVar8[0x48];
      if ((lVar10 == 0) ||
         (___dynamic_cast(lVar10,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar8 = plStack_d0,
         lVar10 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a83dbc8;
      }
      plStack_d0 = (long *)0x0;
      lStack_b0 = CONCAT44(lStack_b0._4_4_,7);
      plStack_a8 = plVar8;
      plStack_b8 = param_2;
      FUN_10a688ac0(&plStack_100,&plStack_b8,*(undefined8 *)(lVar10 + 8));
      if ((3 < (int)lStack_b0) && (plStack_a8 != (long *)0x0)) {
        (**(code **)*plStack_a8)();
      }
    }
    if (plStack_d0 != (long *)0x0) {
      (**(code **)*plStack_d0)();
    }
    if (((ulong)plVar11 & 1) != 0) {
      plStack_b8 = plStack_100;
      lStack_b0 = lStack_f8;
      if (lStack_f8 != 0) {
        plVar8 = (long *)(lStack_f8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = *plVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_a0 = lStack_e8;
      plStack_a8 = plStack_f0;
      if (lStack_e8 != 0) {
        plVar8 = (long *)(lStack_e8 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = *plVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      bStack_78 = 2;
      plVar11 = (long *)0x30;
      __Znwm();
      plVar8 = plVar9 + 3;
      plVar12 = plVar11 + 1;
      *plVar12 = 0;
      plVar11[2] = 0;
      *plVar11 = (long)&PTR_FUN_110b9fc88;
      plVar22 = plVar11 + 3;
      *plVar22 = (long)&PTR_FUN_110c0f9b0;
      plVar11[4] = 0;
      plVar11[5] = 0;
      uVar14 = ((ulong)(uint)((int)plVar22 << 3) + 8 ^ (ulong)plVar22 >> 0x20) * -0x622015f714c7d297
      ;
      uVar14 = ((ulong)plVar22 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
      uVar24 = (uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297;
      uVar23 = plVar9[4];
      uVar14 = unaff_x21;
      plStack_e0 = plVar22;
      plStack_d8 = plVar11;
      if (uVar23 != 0) {
        uVar13 = uVar23 - 1;
        if ((uVar23 & uVar13) == 0) {
          uVar14 = uVar13 & uVar24;
        }
        else {
          uVar14 = uVar24;
          if (uVar23 <= uVar24) {
            uVar14 = 0;
            if (uVar23 != 0) {
              uVar14 = uVar24 / uVar23;
            }
            uVar14 = uVar24 - uVar14 * uVar23;
          }
        }
        puVar15 = *(undefined8 **)(*plVar8 + uVar14 * 8);
        if (puVar15 != (undefined8 *)0x0) {
          for (plVar21 = (long *)*puVar15; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
            uVar16 = plVar21[1];
            if (uVar16 == uVar24) {
              if ((long *)plVar21[2] == plVar22) goto LAB_10a83d97c;
            }
            else {
              if ((uVar23 & uVar13) == 0) {
                uVar16 = uVar16 & uVar13;
              }
              else if (uVar23 <= uVar16) {
                uVar5 = 0;
                if (uVar23 != 0) {
                  uVar5 = uVar16 / uVar23;
                }
                uVar16 = uVar16 - uVar5 * uVar23;
              }
              if (uVar16 != uVar14) break;
            }
          }
        }
      }
      plVar21 = (long *)0x68;
      __Znwm();
      uStack_c0 = 1;
      *plVar21 = 0;
      plVar21[1] = uVar24;
      plVar21[2] = (long)plVar22;
      plVar21[3] = (long)plVar11;
      plStack_e0 = (long *)0x0;
      plStack_d8 = (long *)0x0;
      *(undefined1 *)(plVar21 + 0xc) = 3;
      plVar21[4] = (long)plStack_100;
      plVar21[5] = lStack_b0;
      if (lStack_b0 != 0) {
        plVar11 = (long *)(lStack_b0 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar21[7] = lStack_a0;
      plVar21[6] = (long)plStack_a8;
      if (lStack_a0 != 0) {
        plVar11 = (long *)(lStack_a0 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(byte *)(plVar21 + 0xc) = bStack_78;
      plStack_c8 = plVar8;
      if ((uVar23 == 0) || (*(float *)(plVar9 + 7) * (float)uVar23 < (float)(plVar9[6] + 1))) {
        uVar14 = 1;
        if (2 < uVar23) {
          uVar14 = (ulong)((uVar23 & uVar23 - 1) != 0);
        }
        uVar14 = uVar14 | uVar23 << 1;
        uVar23 = (ulong)((float)(plVar9[6] + 1) / *(float *)(plVar9 + 7));
        if (uVar14 <= uVar23) {
          uVar14 = uVar23;
        }
        FUN_10a726d70(plVar8,uVar14);
        uVar23 = plVar9[4];
        if ((uVar23 & uVar23 - 1) == 0) {
          uVar14 = uVar23 - 1 & uVar24;
        }
        else {
          uVar14 = uVar24;
          if (uVar23 <= uVar24) {
            uVar14 = 0;
            if (uVar23 != 0) {
              uVar14 = uVar24 / uVar23;
            }
            uVar14 = uVar24 - uVar14 * uVar23;
          }
        }
      }
      lVar10 = *plVar8;
      plVar11 = *(long **)(lVar10 + uVar14 * 8);
      if (plVar11 == (long *)0x0) {
        plVar11 = plVar9 + 5;
        *plVar21 = *plVar11;
        *plVar11 = (long)plVar21;
        *(long **)(lVar10 + uVar14 * 8) = plVar11;
        if (*plVar21 != 0) {
          uVar13 = *(ulong *)(*plVar21 + 8);
          if ((uVar23 & uVar23 - 1) == 0) {
            uVar13 = uVar13 & uVar23 - 1;
          }
          else if (uVar23 <= uVar13) {
            uVar16 = 0;
            if (uVar23 != 0) {
              uVar16 = uVar13 / uVar23;
            }
            uVar13 = uVar13 - uVar16 * uVar23;
          }
          plVar11 = (long *)(*plVar8 + uVar13 * 8);
          goto LAB_10a83da20;
        }
      }
      else {
        *plVar21 = *plVar11;
LAB_10a83da20:
        *plVar11 = (long)plVar21;
      }
      plVar9[6] = plVar9[6] + 1;
      goto LAB_10a83da30;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
  goto LAB_10a83dbc8;
LAB_10a83d97c:
  do {
    lVar10 = *plVar12;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *plVar12 = lVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar10 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
  }
LAB_10a83da30:
  if (*(char *)(plVar9[9] + 8) == '\x01') {
    (*(code *)plVar9[8])(plVar9);
  }
  plVar11 = plStack_108;
  plStack_c8 = (long *)plVar21[3];
  plStack_d0 = (long *)plVar21[2];
  if (plVar21[3] != 0) {
    plVar12 = (long *)(plVar21[3] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((ulong)bStack_78 < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[bStack_78])(&plStack_b8);
    FUN_10a688c1c(&plStack_100);
    FUN_10a05ff7c(uStack_110,param_2,&plStack_d0);
    plVar12 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      plVar2 = plStack_c8 + 1;
      do {
        lVar10 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_2 = plVar12;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
      ___stack_chk_fail();
      plStack_d0 = (long *)0x0;
      func_0x00010a726f7c(plVar11 + 1,plVar21);
      FUN_10a004978(&plStack_e0);
      if (3 < (ulong)bStack_78) goto LAB_10a83dbc8;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_78])(&plStack_b8);
      FUN_10a688c1c(&plStack_100);
      unaff_x30 = 0x10a83dbdc;
      register0x00000008 = (BADSPACEBASE *)&uStack_110;
      unaff_x19 = plVar11;
      unaff_x20 = param_2;
      unaff_x21 = uVar14;
      unaff_x22 = plVar9;
      unaff_x23 = plVar8;
      unaff_x24 = plVar21;
      unaff_x25 = plVar22;
      unaff_x26 = uVar23;
      unaff_x27 = uVar24;
      unaff_x28 = plStack_100;
      unaff_x29 = puVar1;
      plVar11 = plStack_108;
    }
    plVar8 = plVar11 + 0x4b;
    lVar10 = plVar11[0x59];
    uVar14 = lVar10 - 1;
    plVar11[0x59] = uVar14;
    if (uVar14 < 8) {
      uVar14 = plVar8[lVar10 + 2];
      if (plVar11[0x5a] == uVar14) {
        return;
      }
    }
    else {
      uVar14 = *(ulong *)(plVar11[0x57] + -8);
      plVar11[0x57] = plVar11[0x57] + -8;
      if (plVar11[0x5a] == uVar14) {
        return;
      }
    }
    *(long **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    lVar10 = *plVar8;
    lVar19 = plVar11[0x4c];
    lVar17 = lVar19 - lVar10;
    uVar23 = lVar17 >> 4;
    if (uVar23 < uVar14) {
      uVar24 = uVar14 - uVar23;
      lVar20 = plVar11[0x4d];
      if ((ulong)(lVar20 - lVar19 >> 4) < uVar24) {
        if (uVar14 >> 0x3c == 0) {
          uVar13 = lVar20 - lVar10 >> 3;
          if (uVar13 <= uVar14) {
            uVar13 = uVar14;
          }
          if (0x7fffffffffffffef < (ulong)(lVar20 - lVar10)) {
            uVar13 = 0xfffffffffffffff;
          }
          *(long **)((long)register0x00000008 + -0x68) = plVar8;
          if (uVar13 >> 0x3c == 0) {
            lVar7 = uVar13 << 4;
            __Znwm();
            lVar19 = lVar7 + lVar17;
            _bzero(lVar19,uVar24 * 0x10);
            lVar18 = lVar19 + uVar23 * -0x10;
            _memcpy(lVar18,lVar10,lVar17);
            *plVar8 = lVar18;
            plVar11[0x4c] = lVar19 + uVar24 * 0x10;
            plVar11[0x4d] = lVar7 + uVar13 * 0x10;
            *(long *)((long)register0x00000008 + -0x78) = lVar10;
            *(long *)((long)register0x00000008 + -0x70) = lVar20;
            *(long *)((long)register0x00000008 + -0x88) = lVar10;
            *(long *)((long)register0x00000008 + -0x80) = lVar10;
            func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
            goto code_r0x00010988c138;
          }
          func_0x000104c4f740();
        }
        else {
          func_0x00010988c1a4();
        }
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
        (*pcVar6)();
      }
      _bzero(lVar19,uVar24 * 0x10);
      plVar11[0x4c] = lVar19 + uVar24 * 0x10;
    }
    else if (uVar14 < uVar23) {
      lVar10 = lVar10 + uVar14 * 0x10;
      while (lVar19 != lVar10) {
        lVar19 = lVar19 + -0x10;
        func_0x00010988c204(lVar19);
      }
      plVar11[0x4c] = lVar10;
    }
code_r0x00010988c138:
    plVar11[0x5a] = uVar14;
    return;
  }
LAB_10a83dbc8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a83dbcc);
  (*pcVar6)();
}



/* Entry: 10a83dbe4; end: 10a83dc4b;  */

void FUN_10a83dbe4(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plStack_60;
  undefined1 uStack_58;
  undefined4 uStack_57;
  undefined3 uStack_53;
  
  lVar4 = param_1;
  func_0x000109898688();
  if (lVar4 != 0) {
    FUN_10a053854(param_1,lVar4);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar3 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar3 == 1) {
    return;
  }
  lVar4 = 1;
  FUN_10a052ee0(1,0,puVar3);
  plVar1 = (long *)(lVar4 + 0x18);
  plVar5 = plVar1;
  FUN_10a727088();
  if (plVar5 == (long *)0x0) goto LAB_10a83ddc0;
  uVar8 = *(ulong *)(lVar4 + 0x20);
  lVar6 = *plVar5;
  uVar7 = plVar5[1];
  uVar9 = uVar8 - 1;
  if ((uVar8 & uVar9) == 0) {
    uVar7 = uVar9 & uVar7;
  }
  else if (uVar8 <= uVar7) {
    uVar11 = 0;
    if (uVar8 != 0) {
      uVar11 = uVar7 / uVar8;
    }
    uVar7 = uVar7 - uVar11 * uVar8;
  }
  plVar2 = *(long **)(*plVar1 + uVar7 * 8);
  do {
    plVar10 = plVar2;
    plVar2 = (long *)*plVar10;
  } while ((long *)*plVar10 != plVar5);
  if (plVar10 == (long *)(lVar4 + 0x28)) {
LAB_10a83dd14:
    if (lVar6 == 0) {
LAB_10a83dd48:
      *(undefined8 *)(*plVar1 + uVar7 * 8) = 0;
      lVar6 = *plVar5;
      goto LAB_10a83dd50;
    }
    uVar11 = *(ulong *)(lVar6 + 8);
    if ((uVar8 & uVar9) == 0) {
      uVar12 = uVar11 & uVar9;
    }
    else {
      uVar12 = uVar11;
      if (uVar8 <= uVar11) {
        uVar12 = 0;
        if (uVar8 != 0) {
          uVar12 = uVar11 / uVar8;
        }
        uVar12 = uVar11 - uVar12 * uVar8;
      }
    }
    if (uVar12 != uVar7) goto LAB_10a83dd48;
LAB_10a83dd58:
    if ((uVar8 & uVar9) == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar8 <= uVar11) {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar9 * uVar8;
    }
    if (uVar11 != uVar7) {
      *(long **)(*plVar1 + uVar11 * 8) = plVar10;
      lVar6 = *plVar5;
    }
  }
  else {
    uVar11 = plVar10[1];
    if ((uVar8 & uVar9) == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar8 <= uVar11) {
      uVar12 = 0;
      if (uVar8 != 0) {
        uVar12 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar12 * uVar8;
    }
    if (uVar11 != uVar7) goto LAB_10a83dd14;
LAB_10a83dd50:
    if (lVar6 != 0) {
      uVar11 = *(ulong *)(lVar6 + 8);
      goto LAB_10a83dd58;
    }
  }
  *plVar10 = lVar6;
  *plVar5 = 0;
  *(long *)(lVar4 + 0x30) = *(long *)(lVar4 + 0x30) + -1;
  uStack_58 = 1;
  uStack_57 = 0;
  uStack_53 = 0;
  plStack_60 = plVar1;
  func_0x00010a726f7c(&plStack_60);
LAB_10a83ddc0:
  if (*(char *)(*(long *)(lVar4 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a83dde8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x40))(lVar4);
    return;
  }
  return;
}



/* Entry: 10a83dc4c; end: 10a83dc6f;  */

void FUN_10a83dc4c(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plStack_40;
  undefined1 uStack_38;
  undefined4 uStack_37;
  undefined3 uStack_33;
  
  if ((int)param_1 == 1) {
    return;
  }
  lVar3 = 1;
  FUN_10a052ee0(1,0,param_1);
  plVar1 = (long *)(lVar3 + 0x18);
  plVar4 = plVar1;
  FUN_10a727088();
  if (plVar4 == (long *)0x0) goto LAB_10a83ddc0;
  uVar7 = *(ulong *)(lVar3 + 0x20);
  lVar5 = *plVar4;
  uVar6 = plVar4[1];
  uVar8 = uVar7 - 1;
  if ((uVar7 & uVar8) == 0) {
    uVar6 = uVar8 & uVar6;
  }
  else if (uVar7 <= uVar6) {
    uVar10 = 0;
    if (uVar7 != 0) {
      uVar10 = uVar6 / uVar7;
    }
    uVar6 = uVar6 - uVar10 * uVar7;
  }
  plVar2 = *(long **)(*plVar1 + uVar6 * 8);
  do {
    plVar9 = plVar2;
    plVar2 = (long *)*plVar9;
  } while ((long *)*plVar9 != plVar4);
  if (plVar9 == (long *)(lVar3 + 0x28)) {
LAB_10a83dd14:
    if (lVar5 == 0) {
LAB_10a83dd48:
      *(undefined8 *)(*plVar1 + uVar6 * 8) = 0;
      lVar5 = *plVar4;
      goto LAB_10a83dd50;
    }
    uVar10 = *(ulong *)(lVar5 + 8);
    if ((uVar7 & uVar8) == 0) {
      uVar11 = uVar10 & uVar8;
    }
    else {
      uVar11 = uVar10;
      if (uVar7 <= uVar10) {
        uVar11 = 0;
        if (uVar7 != 0) {
          uVar11 = uVar10 / uVar7;
        }
        uVar11 = uVar10 - uVar11 * uVar7;
      }
    }
    if (uVar11 != uVar6) goto LAB_10a83dd48;
LAB_10a83dd58:
    if ((uVar7 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar7 <= uVar10) {
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar8 * uVar7;
    }
    if (uVar10 != uVar6) {
      *(long **)(*plVar1 + uVar10 * 8) = plVar9;
      lVar5 = *plVar4;
    }
  }
  else {
    uVar10 = plVar9[1];
    if ((uVar7 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar7 <= uVar10) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar11 * uVar7;
    }
    if (uVar10 != uVar6) goto LAB_10a83dd14;
LAB_10a83dd50:
    if (lVar5 != 0) {
      uVar10 = *(ulong *)(lVar5 + 8);
      goto LAB_10a83dd58;
    }
  }
  *plVar9 = lVar5;
  *plVar4 = 0;
  *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + -1;
  uStack_38 = 1;
  uStack_37 = 0;
  uStack_33 = 0;
  plStack_40 = plVar1;
  func_0x00010a726f7c(&plStack_40);
LAB_10a83ddc0:
  if (*(char *)(*(long *)(lVar3 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a83dde8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x40))(lVar3);
    return;
  }
  return;
}



/* Entry: 10a83dc70; end: 10a83ddfb;  */

void FUN_10a83dc70(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plStack_30;
  undefined1 uStack_28;
  undefined4 uStack_27;
  undefined3 uStack_23;
  
  plVar1 = (long *)(param_1 + 0x18);
  plVar3 = plVar1;
  FUN_10a727088();
  if (plVar3 == (long *)0x0) goto LAB_10a83ddc0;
  uVar6 = *(ulong *)(param_1 + 0x20);
  lVar4 = *plVar3;
  uVar5 = plVar3[1];
  uVar7 = uVar6 - 1;
  if ((uVar6 & uVar7) == 0) {
    uVar5 = uVar7 & uVar5;
  }
  else if (uVar6 <= uVar5) {
    uVar9 = 0;
    if (uVar6 != 0) {
      uVar9 = uVar5 / uVar6;
    }
    uVar5 = uVar5 - uVar9 * uVar6;
  }
  plVar2 = *(long **)(*plVar1 + uVar5 * 8);
  do {
    plVar8 = plVar2;
    plVar2 = (long *)*plVar8;
  } while ((long *)*plVar8 != plVar3);
  if (plVar8 == (long *)(param_1 + 0x28)) {
LAB_10a83dd14:
    if (lVar4 == 0) {
LAB_10a83dd48:
      *(undefined8 *)(*plVar1 + uVar5 * 8) = 0;
      lVar4 = *plVar3;
      goto LAB_10a83dd50;
    }
    uVar9 = *(ulong *)(lVar4 + 8);
    if ((uVar6 & uVar7) == 0) {
      uVar10 = uVar9 & uVar7;
    }
    else {
      uVar10 = uVar9;
      if (uVar6 <= uVar9) {
        uVar10 = 0;
        if (uVar6 != 0) {
          uVar10 = uVar9 / uVar6;
        }
        uVar10 = uVar9 - uVar10 * uVar6;
      }
    }
    if (uVar10 != uVar5) goto LAB_10a83dd48;
LAB_10a83dd58:
    if ((uVar6 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar6 <= uVar9) {
      uVar7 = 0;
      if (uVar6 != 0) {
        uVar7 = uVar9 / uVar6;
      }
      uVar9 = uVar9 - uVar7 * uVar6;
    }
    if (uVar9 != uVar5) {
      *(long **)(*plVar1 + uVar9 * 8) = plVar8;
      lVar4 = *plVar3;
    }
  }
  else {
    uVar9 = plVar8[1];
    if ((uVar6 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar6 <= uVar9) {
      uVar10 = 0;
      if (uVar6 != 0) {
        uVar10 = uVar9 / uVar6;
      }
      uVar9 = uVar9 - uVar10 * uVar6;
    }
    if (uVar9 != uVar5) goto LAB_10a83dd14;
LAB_10a83dd50:
    if (lVar4 != 0) {
      uVar9 = *(ulong *)(lVar4 + 8);
      goto LAB_10a83dd58;
    }
  }
  *plVar8 = lVar4;
  *plVar3 = 0;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  uStack_28 = 1;
  uStack_27 = 0;
  uStack_23 = 0;
  plStack_30 = plVar1;
  func_0x00010a726f7c(&plStack_30);
LAB_10a83ddc0:
  if (*(char *)(*(long *)(param_1 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a83dde8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(param_1);
    return;
  }
  return;
}



/* Entry: 10a83ddfc; end: 10a83df17;  */

void FUN_10a83ddfc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a83dbe4(param_2,param_3);
  FUN_10a060490(param_5);
  FUN_10a0604b4(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a83dc70(plVar6,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
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
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a83df18; end: 10a83e04b;  */

void FUN_10a83df18(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
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
  plVar6 = param_2;
  FUN_10a83c390(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar16 = (long *)plVar6[0xb];
  if (plVar6[0xb] != 0) {
    plVar6 = (long *)(plVar6[0xb] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
  if (plVar16 != (long *)0x0) {
    plVar6 = plVar16 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
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
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a83e04c; end: 10a83e2b3;  */

void FUN_10a83e04c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined **ppuStack_78;
  long *plStack_70;
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
  FUN_10a052e3c(param_5);
  plVar5 = (long *)0x78;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110c22088;
  plVar5[3] = (long)&PTR_FUN_110c20e98;
  plVar5[5] = 0;
  plVar5[4] = 0;
  plVar5[0xb] = 0;
  plVar5[10] = 0;
  plVar5[0xd] = 0;
  plVar5[0xc] = 0;
  plVar5[0xe] = 0;
  plVar5[7] = 0;
  plVar5[6] = 0;
  plVar5[9] = 0;
  plVar5[8] = 0;
  plVar5[10] = 0;
  puVar6 = (undefined8 *)0x98;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_110c220d8;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0x12] = 0;
  puVar6[3] = &PTR_FUN_110c22128;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 10) = 0x3f800000;
  puVar6[0xb] = FUN_10a83e570;
  puVar6[0xc] = &PTR_DAT_110ae9180;
  plVar5[0xb] = (long)(puVar6 + 3);
  plVar5[0xc] = (long)puVar6;
  puVar6 = (undefined8 *)0x98;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110c22180;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0x12] = 0;
  puVar6[3] = &PTR_FUN_110c221d0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 10) = 0x3f800000;
  puVar6[0xb] = FUN_10a83e7fc;
  puVar6[0xc] = &PTR_DAT_110ae9180;
  plVar5[0xd] = (long)(puVar6 + 3);
  plVar5[0xe] = (long)puVar6;
  ppuStack_78 = &PTR_DAT_110c23318;
  plStack_70 = plVar5 + 3;
  plStack_68 = plVar5;
  func_0x000109899de4(param_1,param_2,&plStack_70,&ppuStack_78,0,0);
  plVar5 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10a83e2b4; end: 10a83e2c3;  */

void FUN_10a83e2b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c22088;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a83e2c4; end: 10a83e2e3;  */

void FUN_10a83e2c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c22088;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a83e2e4; end: 10a83e303;  */

void FUN_10a83e2e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a83e2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a83e304; end: 10a83e323;  */

void FUN_10a83e304(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c220d8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a83e324; end: 10a83e333;  */

void FUN_10a83e324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a83e32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a83e334; end: 10a83e3db;  */

undefined8 * FUN_10a83e334(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c22128;
  (**(code **)param_1[9])();
  func_0x00010a7278e8(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a83e3dc; end: 10a83e43f;  */

bool FUN_10a83e3dc(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 199) {
    iVar1 = 0xe4ddc4c;
    _memcmp(&UNK_10e4ddc4c);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a83e440; end: 10a83e55f;  */

void FUN_10a83e440(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f67a8c5);
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010989f98c(&ppuStack_38,param_2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uStack_30;
    *param_1 = (long)ppuStack_38;
    param_1[2] = CONCAT17(bStack_21,uStack_28);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685178,7);
  __ZNSt3__19to_stringEm(&ppuStack_38,*(undefined8 *)(param_2 + 0x30));
  pppuVar2 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar2 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f684600,1);
  return;
}



/* Entry: 10a83e560; end: 10a83e56f;  */

undefined1  [16] FUN_10a83e560(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 199;
  auVar1._0_8_ = &UNK_10e4ddc4c;
  return auVar1;
}



/* Entry: 10a83e570; end: 10a83e57f;  */

void FUN_10a83e570(undefined8 param_1,undefined8 *param_2)

{
  func_0x000105277f8c();
  *param_2 = &PTR_FUN_110c22180;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a83e580; end: 10a83e58f;  */

void FUN_10a83e580(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c22180;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a83e590; end: 10a83e5af;  */

void FUN_10a83e590(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c22180;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a83e5b0; end: 10a83e5bf;  */

void FUN_10a83e5b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a83e5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a83e5c0; end: 10a83e667;  */

undefined8 * FUN_10a83e5c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c221d0;
  (**(code **)param_1[9])();
  func_0x00010a726fe8(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a83e668; end: 10a83e6cb;  */

bool FUN_10a83e668(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0xa5) {
    iVar1 = 0xe4dddc2;
    _memcmp(&UNK_10e4dddc2);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a83e6cc; end: 10a83e7eb;  */

void FUN_10a83e6cc(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f67a8c5);
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010989f98c(&ppuStack_38,param_2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uStack_30;
    *param_1 = (long)ppuStack_38;
    param_1[2] = CONCAT17(bStack_21,uStack_28);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685178,7);
  __ZNSt3__19to_stringEm(&ppuStack_38,*(undefined8 *)(param_2 + 0x30));
  pppuVar2 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar2 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f684600,1);
  return;
}



/* Entry: 10a83e7ec; end: 10a83e7fb;  */

undefined1  [16] FUN_10a83e7ec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xa5;
  auVar1._0_8_ = &UNK_10e4dddc2;
  return auVar1;
}



/* Entry: 10a83e7fc; end: 10a83e80b;  */

/* WARNING: Removing unreachable block (ram,0x00010a83ed04) */
/* WARNING: Removing unreachable block (ram,0x00010a83eb50) */
/* WARNING: Removing unreachable block (ram,0x00010a83ecf4) */
/* WARNING: Removing unreachable block (ram,0x00010a83ed14) */

void FUN_10a83e7fc(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long **pplVar11;
  long *plVar12;
  undefined8 *puVar13;
  char *pcVar14;
  ulong uVar15;
  undefined4 *extraout_x8;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  undefined1 auStack_190 [8];
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  long lStack_170;
  long *plStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  undefined8 auStack_148 [2];
  char cStack_131;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long *plStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  
  plVar10 = param_2;
  func_0x000105277f8c();
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar8 = param_2;
  FUN_10a83efd8(param_2,plVar10);
  FUN_10a83f040(param_4);
  func_0x000109898570(auStack_160,param_2,param_3);
  FUN_10a83f064(&lStack_170,param_2,param_3 + 0x10);
  if (*(int *)(param_3 + 0x20) == 7) {
    plVar10 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_3 + 0x28));
    plVar12 = param_2;
    plStack_b0 = plVar10;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_b0);
    if ((int)plVar12 != 0) {
      plVar10 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar9 = plVar10[0x48];
      if ((lVar9 == 0) ||
         (___dynamic_cast(lVar9,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar10 = plStack_b0,
         lVar9 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a83ee30;
      }
      plStack_b0 = (long *)0x0;
      plStack_88 = (long *)CONCAT44(plStack_88._4_4_,7);
      plStack_80 = plVar10;
      plStack_90 = param_2;
      FUN_10a688ac0(&plStack_110,&plStack_90,*(undefined8 *)(lVar9 + 8));
      if ((3 < (int)plStack_88) && (plStack_80 != (long *)0x0)) {
        (**(code **)*plStack_80)();
      }
    }
    if (plStack_b0 != (long *)0x0) {
      (**(code **)*plStack_b0)();
    }
    if (((ulong)plVar12 & 1) != 0) {
      plVar10 = (long *)0x60;
      __Znwm();
      plVar12 = plVar10 + 1;
      *plVar12 = 0;
      plVar10[2] = 0;
      *plVar10 = (long)&PTR_FUN_110c22228;
      plVar22 = plVar10 + 3;
      plVar10[4] = (long)plStack_108;
      *plVar22 = (long)plStack_110;
      if (plStack_108 != (long *)0x0) {
        plStack_108 = (long *)((long)plStack_108 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_108,0x10);
          if (bVar3) {
            *plStack_108 = *plStack_108 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar10[6] = (long)plStack_f8;
      plVar10[5] = (long)uStack_100;
      if (plStack_f8 != (long *)0x0) {
        plStack_f8 = (long *)((long)plStack_f8 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_f8,0x10);
          if (bVar3) {
            *plStack_f8 = *plStack_f8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined1 *)(plVar10 + 0xb) = 2;
      plStack_180 = plVar22;
      plStack_178 = plVar10;
      FUN_10a688c1c(&plStack_110);
      FUN_10a768f5c(auStack_190,param_2,param_3 + 0x30);
      func_0x000107c2b054(&plStack_110,&UNK_10f67a8f3);
      uVar15 = *(ulong *)(lStack_170 + 0x28);
      if (-1 < (char)*(byte *)(lStack_170 + 0x37)) {
        uVar15 = (ulong)*(byte *)(lStack_170 + 0x37);
      }
      if (uVar15 == 0) {
        if ((long)uStack_100 < 0) {
          __ZdlPv(plStack_110);
        }
        lVar9 = plVar8[6];
        if (*(char *)(lVar9 + 0xff) < '\0') {
          func_0x000107c3192c(&plStack_90,*(undefined8 *)(lVar9 + 0xe8),
                              *(undefined8 *)(lVar9 + 0xf0));
        }
        else {
          plStack_88 = *(long **)(lVar9 + 0xf0);
          plStack_90 = *(long **)(lVar9 + 0xe8);
          plStack_80 = *(long **)(lVar9 + 0xf8);
        }
        if (*(char *)(lStack_170 + 0x37) < '\0') {
          func_0x000107c3192c(&plStack_b0,*(undefined8 *)(lStack_170 + 0x20),
                              *(undefined8 *)(lStack_170 + 0x28));
        }
        else {
          uStack_a8 = *(undefined8 *)(lStack_170 + 0x28);
          plStack_b0 = *(long **)(lStack_170 + 0x20);
          uStack_a0 = *(undefined8 *)(lStack_170 + 0x30);
        }
        FUN_10a0b4df8(&plStack_110,plVar8 + 0xb,&plStack_90);
        pplVar11 = &plStack_110;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(pplVar11,":",1)
        ;
        plStack_c8 = pplVar11[1];
        plStack_d0 = *pplVar11;
        plStack_c0 = pplVar11[2];
        pplVar11[1] = (long *)0x0;
        pplVar11[2] = (long *)0x0;
        *pplVar11 = (long *)0x0;
        if ((long)uStack_100 < 0) {
          __ZdlPv(plStack_110);
        }
        FUN_10a0b4df8(&plStack_110,&plStack_d0,plVar8 + 8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (lStack_170 + 0x20,&plStack_110);
        if (uStack_100._7_1_ < '\0') {
          __ZdlPv(plStack_110);
        }
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plStack_f8 = plStack_c8;
        uStack_100 = plStack_d0;
        plStack_f0 = plStack_c0;
        plVar12 = (long *)0x60;
        plStack_110 = plVar22;
        plStack_108 = plVar10;
        __Znwm();
        plVar12[1] = 0;
        plVar12[2] = 0;
        *plVar12 = (long)&PTR_DAT_110c16f88;
        plStack_e0 = plVar12 + 3;
        *plStack_e0 = (long)FUN_10a840764;
        plVar12[4] = (long)&PTR_FUN_110c222d0;
        plVar12[6] = (long)plStack_108;
        plVar12[5] = (long)plStack_110;
        plVar12[8] = (long)plStack_f8;
        plVar12[7] = (long)uStack_100;
        plVar12[9] = (long)plStack_f0;
        *(undefined1 *)(plVar12 + 0xb) = 1;
        plStack_d8 = plVar12;
        FUN_10a7508c0(plVar8[4],auStack_160,lStack_170,&plStack_e0,auStack_190);
        func_0x000107c2b054(&plStack_110,&UNK_10f67a8c5);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (lStack_170 + 0x20,&plStack_110);
        if ((long)uStack_100 < 0) {
          __ZdlPv(plStack_110);
        }
        uVar4 = *(int *)(lStack_170 + 0x18) - 1;
        if (uVar4 < 3) {
          pcVar14 = (&PTR_DAT_110c236a8)[uVar4];
        }
        else {
          pcVar14 = "Unknown";
        }
        lVar9 = plVar8[3];
        func_0x000107c2b054(auStack_148,pcVar14);
        puVar13 = auStack_148;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (puVar13,0,&UNK_10f67a910,4);
        uStack_128 = puVar13[1];
        uStack_130 = *puVar13;
        lStack_120 = puVar13[2];
        puVar13[1] = 0;
        puVar13[2] = 0;
        *puVar13 = 0;
        if (lVar9 != 0) {
          uVar17 = *(undefined8 *)(lVar9 + 0x8d8);
          func_0x000107c2b054(&plStack_110,&DAT_10f67308b);
          FUN_10a76bdb0(uVar17,&uStack_130,&plStack_110);
          if ((long)uStack_100 < 0) {
            __ZdlPv(plStack_110);
          }
        }
        if (lStack_120 < 0) {
          __ZdlPv(uStack_130);
        }
        if (cStack_131 < '\0') {
          __ZdlPv(auStack_148[0]);
        }
        plVar10 = plStack_d8;
        if (plStack_d8 != (long *)0x0) {
          plVar8 = plStack_d8 + 1;
          do {
            lVar9 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        if (plStack_188 != (long *)0x0) {
          plVar10 = plStack_188 + 1;
          do {
            lVar9 = *plVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_188 + 0x10))(plStack_188);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_188);
          }
        }
        plVar10 = plStack_178;
        if (plStack_178 != (long *)0x0) {
          plVar8 = plStack_178 + 1;
          do {
            lVar9 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_178 + 0x10))(plStack_178);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        if (plStack_168 != (long *)0x0) {
          plVar10 = plStack_168 + 1;
          do {
            lVar9 = *plVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_168 + 0x10))(plStack_168);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_168);
          }
        }
        if (cStack_149 < '\0') {
          __ZdlPv(auStack_160[0]);
        }
        *extraout_x8 = 0;
        plVar10 = plVar7 + 0x4b;
        lVar9 = plVar7[0x59];
        uVar15 = lVar9 - 1;
        plVar7[0x59] = uVar15;
        if (uVar15 < 8) {
          uVar15 = plVar10[lVar9 + 2];
          if (plVar7[0x5a] == uVar15) {
            return;
          }
        }
        else {
          uVar15 = *(ulong *)(plVar7[0x57] + -8);
          plVar7[0x57] = plVar7[0x57] + -8;
          if (plVar7[0x5a] == uVar15) {
            return;
          }
        }
        plVar8 = (long *)*plVar10;
        plVar12 = (long *)plVar7[0x4c];
        lVar9 = (long)plVar12 - (long)plVar8;
        uVar20 = lVar9 >> 4;
        if (uVar20 < uVar15) {
          uVar21 = uVar15 - uVar20;
          lVar19 = plVar7[0x4d];
          if ((ulong)(lVar19 - (long)plVar12 >> 4) < uVar21) {
            if (uVar15 >> 0x3c == 0) {
              uVar16 = lVar19 - (long)plVar8 >> 3;
              if (uVar16 <= uVar15) {
                uVar16 = uVar15;
              }
              if (0x7fffffffffffffef < (ulong)(lVar19 - (long)plVar8)) {
                uVar16 = 0xfffffffffffffff;
              }
              plStack_78 = plVar10;
              if (uVar16 >> 0x3c == 0) {
                lVar6 = uVar16 << 4;
                __Znwm();
                lVar1 = lVar6 + lVar9;
                _bzero(lVar1,uVar21 * 0x10);
                lVar18 = lVar1 + uVar20 * -0x10;
                _memcpy(lVar18,plVar8,lVar9);
                *plVar10 = lVar18;
                plVar7[0x4c] = lVar1 + uVar21 * 0x10;
                plVar7[0x4d] = lVar6 + uVar16 * 0x10;
                plStack_98 = plVar8;
                plStack_90 = plVar8;
                plStack_88 = plVar8;
                plStack_80 = (long *)lVar19;
                func_0x00010988c1b8(&plStack_98);
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar5)();
          }
          _bzero(plVar12,uVar21 * 0x10);
          plVar7[0x4c] = (long)(plVar12 + uVar21 * 2);
        }
        else if (uVar15 < uVar20) {
          while (plVar12 != plVar8 + uVar15 * 2) {
            plVar12 = plVar12 + -2;
            func_0x00010988c204(plVar12);
          }
          plVar7[0x4c] = (long)(plVar8 + uVar15 * 2);
        }
code_r0x00010988c138:
        plVar7[0x5a] = uVar15;
        return;
      }
      FUN_10a109200(&plStack_110);
      goto LAB_10a83ee30;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a83ee30:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a83ee34);
  (*pcVar5)();
}



/* Entry: 10a83e80c; end: 10a83efd7;  */

/* WARNING: Removing unreachable block (ram,0x00010a83ed04) */
/* WARNING: Removing unreachable block (ram,0x00010a83eb50) */
/* WARNING: Removing unreachable block (ram,0x00010a83ecf4) */
/* WARNING: Removing unreachable block (ram,0x00010a83ed14) */

void FUN_10a83e80c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long **pplVar11;
  long *plVar12;
  undefined8 *puVar13;
  char *pcVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  undefined1 auStack_180 [8];
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  long lStack_160;
  long *plStack_158;
  undefined8 auStack_150 [2];
  char cStack_139;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long *plStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar8 = param_2;
  FUN_10a83efd8(param_2,param_3);
  FUN_10a83f040(param_5);
  func_0x000109898570(auStack_150,param_2,param_4);
  FUN_10a83f064(&lStack_160,param_2,param_4 + 0x10);
  if (*(int *)(param_4 + 0x20) == 7) {
    plVar10 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 0x28));
    plVar12 = param_2;
    plStack_a0 = plVar10;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_a0);
    if ((int)plVar12 != 0) {
      plVar10 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar9 = plVar10[0x48];
      if ((lVar9 == 0) ||
         (___dynamic_cast(lVar9,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar10 = plStack_a0,
         lVar9 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a83ee30;
      }
      plStack_a0 = (long *)0x0;
      plStack_78 = (long *)CONCAT44(plStack_78._4_4_,7);
      plStack_70 = plVar10;
      plStack_80 = param_2;
      FUN_10a688ac0(&plStack_100,&plStack_80,*(undefined8 *)(lVar9 + 8));
      if ((3 < (int)plStack_78) && (plStack_70 != (long *)0x0)) {
        (**(code **)*plStack_70)();
      }
    }
    if (plStack_a0 != (long *)0x0) {
      (**(code **)*plStack_a0)();
    }
    if (((ulong)plVar12 & 1) != 0) {
      plVar10 = (long *)0x60;
      __Znwm();
      plVar12 = plVar10 + 1;
      *plVar12 = 0;
      plVar10[2] = 0;
      *plVar10 = (long)&PTR_FUN_110c22228;
      plVar22 = plVar10 + 3;
      plVar10[4] = (long)plStack_f8;
      *plVar22 = (long)plStack_100;
      if (plStack_f8 != (long *)0x0) {
        plStack_f8 = (long *)((long)plStack_f8 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_f8,0x10);
          if (bVar3) {
            *plStack_f8 = *plStack_f8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar10[6] = (long)plStack_e8;
      plVar10[5] = (long)uStack_f0;
      if (plStack_e8 != (long *)0x0) {
        plStack_e8 = (long *)((long)plStack_e8 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_e8,0x10);
          if (bVar3) {
            *plStack_e8 = *plStack_e8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined1 *)(plVar10 + 0xb) = 2;
      plStack_170 = plVar22;
      plStack_168 = plVar10;
      FUN_10a688c1c(&plStack_100);
      FUN_10a768f5c(auStack_180,param_2,param_4 + 0x30);
      func_0x000107c2b054(&plStack_100,&UNK_10f67a8f3);
      uVar15 = *(ulong *)(lStack_160 + 0x28);
      if (-1 < (char)*(byte *)(lStack_160 + 0x37)) {
        uVar15 = (ulong)*(byte *)(lStack_160 + 0x37);
      }
      if (uVar15 == 0) {
        if ((long)uStack_f0 < 0) {
          __ZdlPv(plStack_100);
        }
        lVar9 = plVar8[6];
        if (*(char *)(lVar9 + 0xff) < '\0') {
          func_0x000107c3192c(&plStack_80,*(undefined8 *)(lVar9 + 0xe8),
                              *(undefined8 *)(lVar9 + 0xf0));
        }
        else {
          plStack_78 = *(long **)(lVar9 + 0xf0);
          plStack_80 = *(long **)(lVar9 + 0xe8);
          plStack_70 = *(long **)(lVar9 + 0xf8);
        }
        if (*(char *)(lStack_160 + 0x37) < '\0') {
          func_0x000107c3192c(&plStack_a0,*(undefined8 *)(lStack_160 + 0x20),
                              *(undefined8 *)(lStack_160 + 0x28));
        }
        else {
          uStack_98 = *(undefined8 *)(lStack_160 + 0x28);
          plStack_a0 = *(long **)(lStack_160 + 0x20);
          uStack_90 = *(undefined8 *)(lStack_160 + 0x30);
        }
        FUN_10a0b4df8(&plStack_100,plVar8 + 0xb,&plStack_80);
        pplVar11 = &plStack_100;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(pplVar11,":",1)
        ;
        plStack_b8 = pplVar11[1];
        plStack_c0 = *pplVar11;
        plStack_b0 = pplVar11[2];
        pplVar11[1] = (long *)0x0;
        pplVar11[2] = (long *)0x0;
        *pplVar11 = (long *)0x0;
        if ((long)uStack_f0 < 0) {
          __ZdlPv(plStack_100);
        }
        FUN_10a0b4df8(&plStack_100,&plStack_c0,plVar8 + 8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (lStack_160 + 0x20,&plStack_100);
        if (uStack_f0._7_1_ < '\0') {
          __ZdlPv(plStack_100);
        }
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plStack_e8 = plStack_b8;
        uStack_f0 = plStack_c0;
        plStack_e0 = plStack_b0;
        plVar12 = (long *)0x60;
        plStack_100 = plVar22;
        plStack_f8 = plVar10;
        __Znwm();
        plVar12[1] = 0;
        plVar12[2] = 0;
        *plVar12 = (long)&PTR_DAT_110c16f88;
        plStack_d0 = plVar12 + 3;
        *plStack_d0 = (long)FUN_10a840764;
        plVar12[4] = (long)&PTR_FUN_110c222d0;
        plVar12[6] = (long)plStack_f8;
        plVar12[5] = (long)plStack_100;
        plVar12[8] = (long)plStack_e8;
        plVar12[7] = (long)uStack_f0;
        plVar12[9] = (long)plStack_e0;
        *(undefined1 *)(plVar12 + 0xb) = 1;
        plStack_c8 = plVar12;
        FUN_10a7508c0(plVar8[4],auStack_150,lStack_160,&plStack_d0,auStack_180);
        func_0x000107c2b054(&plStack_100,&UNK_10f67a8c5);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (lStack_160 + 0x20,&plStack_100);
        if ((long)uStack_f0 < 0) {
          __ZdlPv(plStack_100);
        }
        uVar4 = *(int *)(lStack_160 + 0x18) - 1;
        if (uVar4 < 3) {
          pcVar14 = (&PTR_DAT_110c236a8)[uVar4];
        }
        else {
          pcVar14 = "Unknown";
        }
        lVar9 = plVar8[3];
        func_0x000107c2b054(auStack_138,pcVar14);
        puVar13 = auStack_138;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (puVar13,0,&UNK_10f67a910,4);
        uStack_118 = puVar13[1];
        uStack_120 = *puVar13;
        lStack_110 = puVar13[2];
        puVar13[1] = 0;
        puVar13[2] = 0;
        *puVar13 = 0;
        if (lVar9 != 0) {
          uVar17 = *(undefined8 *)(lVar9 + 0x8d8);
          func_0x000107c2b054(&plStack_100,&DAT_10f67308b);
          FUN_10a76bdb0(uVar17,&uStack_120,&plStack_100);
          if ((long)uStack_f0 < 0) {
            __ZdlPv(plStack_100);
          }
        }
        if (lStack_110 < 0) {
          __ZdlPv(uStack_120);
        }
        if (cStack_121 < '\0') {
          __ZdlPv(auStack_138[0]);
        }
        plVar8 = plStack_c8;
        if (plStack_c8 != (long *)0x0) {
          plVar10 = plStack_c8 + 1;
          do {
            lVar9 = *plVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        if (plStack_178 != (long *)0x0) {
          plVar8 = plStack_178 + 1;
          do {
            lVar9 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_178 + 0x10))(plStack_178);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_178);
          }
        }
        plVar8 = plStack_168;
        if (plStack_168 != (long *)0x0) {
          plVar10 = plStack_168 + 1;
          do {
            lVar9 = *plVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_168 + 0x10))(plStack_168);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        if (plStack_158 != (long *)0x0) {
          plVar8 = plStack_158 + 1;
          do {
            lVar9 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_158 + 0x10))(plStack_158);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_158);
          }
        }
        if (cStack_139 < '\0') {
          __ZdlPv(auStack_150[0]);
        }
        *param_1 = 0;
        plVar8 = plVar7 + 0x4b;
        lVar9 = plVar7[0x59];
        uVar15 = lVar9 - 1;
        plVar7[0x59] = uVar15;
        if (uVar15 < 8) {
          uVar15 = plVar8[lVar9 + 2];
          if (plVar7[0x5a] == uVar15) {
            return;
          }
        }
        else {
          uVar15 = *(ulong *)(plVar7[0x57] + -8);
          plVar7[0x57] = plVar7[0x57] + -8;
          if (plVar7[0x5a] == uVar15) {
            return;
          }
        }
        plVar10 = (long *)*plVar8;
        plVar12 = (long *)plVar7[0x4c];
        lVar9 = (long)plVar12 - (long)plVar10;
        uVar20 = lVar9 >> 4;
        if (uVar20 < uVar15) {
          uVar21 = uVar15 - uVar20;
          lVar19 = plVar7[0x4d];
          if ((ulong)(lVar19 - (long)plVar12 >> 4) < uVar21) {
            if (uVar15 >> 0x3c == 0) {
              uVar16 = lVar19 - (long)plVar10 >> 3;
              if (uVar16 <= uVar15) {
                uVar16 = uVar15;
              }
              if (0x7fffffffffffffef < (ulong)(lVar19 - (long)plVar10)) {
                uVar16 = 0xfffffffffffffff;
              }
              plStack_68 = plVar8;
              if (uVar16 >> 0x3c == 0) {
                lVar6 = uVar16 << 4;
                __Znwm();
                lVar1 = lVar6 + lVar9;
                _bzero(lVar1,uVar21 * 0x10);
                lVar18 = lVar1 + uVar20 * -0x10;
                _memcpy(lVar18,plVar10,lVar9);
                *plVar8 = lVar18;
                plVar7[0x4c] = lVar1 + uVar21 * 0x10;
                plVar7[0x4d] = lVar6 + uVar16 * 0x10;
                plStack_88 = plVar10;
                plStack_80 = plVar10;
                plStack_78 = plVar10;
                plStack_70 = (long *)lVar19;
                func_0x00010988c1b8(&plStack_88);
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar5)();
          }
          _bzero(plVar12,uVar21 * 0x10);
          plVar7[0x4c] = (long)(plVar12 + uVar21 * 2);
        }
        else if (uVar15 < uVar20) {
          while (plVar12 != plVar10 + uVar15 * 2) {
            plVar12 = plVar12 + -2;
            func_0x00010988c204(plVar12);
          }
          plVar7[0x4c] = (long)(plVar10 + uVar15 * 2);
        }
code_r0x00010988c138:
        plVar7[0x5a] = uVar15;
        return;
      }
      FUN_10a109200(&plStack_100);
      goto LAB_10a83ee30;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a83ee30:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a83ee34);
  (*pcVar5)();
}



/* Entry: 10a83efd8; end: 10a83f03f;  */

void FUN_10a83efd8(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  
  lVar6 = param_1;
  func_0x000109898688();
  if (lVar6 != 0) {
    FUN_10a053854(param_1,lVar6);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  piVar4 = (int *)&UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)piVar4 == 4) {
    return;
  }
  plVar5 = (long *)0x4;
  lVar6 = 0;
  FUN_10a052ee0();
  if (*piVar4 != 1) {
    func_0x000109898688(lVar6,piVar4);
    if (lVar6 == 0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      func_0x00010989879c(&lStack_60);
      plVar7 = plVar5;
      if ((lStack_60 != 0) &&
         (___dynamic_cast(lStack_60,&PTR_DAT_110b178e0,&PTR_DAT_110c161e0,0), lStack_60 != 0)) {
        *plVar5 = lStack_60;
        plVar5[1] = (long)plStack_58;
        plVar7 = &lStack_60;
      }
      *plVar7 = 0;
      plVar7[1] = 0;
      if (plStack_58 != (long *)0x0) {
        plVar7 = plStack_58 + 1;
        do {
          lVar6 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
        }
      }
      if (*plVar5 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a83f14c);
    (*pcVar3)();
  }
  *plVar5 = 0;
  plVar5[1] = 0;
  return;
}



/* Entry: 10a83f040; end: 10a83f063;  */

void FUN_10a83f040(int *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_40;
  long *plStack_38;
  
  if ((int)param_1 == 4) {
    return;
  }
  plVar4 = (long *)0x4;
  lVar5 = 0;
  FUN_10a052ee0();
  if (*param_1 != 1) {
    func_0x000109898688(lVar5,param_1);
    if (lVar5 == 0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      func_0x00010989879c(&lStack_40);
      plVar6 = plVar4;
      if ((lStack_40 != 0) &&
         (___dynamic_cast(lStack_40,&PTR_DAT_110b178e0,&PTR_DAT_110c161e0,0), lStack_40 != 0)) {
        *plVar4 = lStack_40;
        plVar4[1] = (long)plStack_38;
        plVar6 = &lStack_40;
      }
      *plVar6 = 0;
      plVar6[1] = 0;
      if (plStack_38 != (long *)0x0) {
        plVar6 = plStack_38 + 1;
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
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
        }
      }
      if (*plVar4 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a83f14c);
    (*pcVar3)();
  }
  *plVar4 = 0;
  plVar4[1] = 0;
  return;
}



/* Entry: 10a83f064; end: 10a83f15f;  */

void FUN_10a83f064(long *param_1,long param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  if (*param_3 == 1) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  func_0x000109898688(param_2,param_3);
  if (param_2 == 0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else {
    func_0x00010989879c(&lStack_30);
    plVar4 = param_1;
    if ((lStack_30 != 0) &&
       (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110c161e0,0), lStack_30 != 0)) {
      *param_1 = lStack_30;
      param_1[1] = (long)plStack_28;
      plVar4 = &lStack_30;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    if (plStack_28 != (long *)0x0) {
      plVar4 = plStack_28 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
    if (*param_1 != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a83f14c);
  (*pcVar3)();
}



/* Entry: 10a83f160; end: 10a83f16f;  */

void FUN_10a83f160(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c22228;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a83f170; end: 10a83f18f;  */

void FUN_10a83f170(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c22228;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a83f190; end: 10a83f1b7;  */

undefined1  [16] FUN_10a83f190(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  if (3 < (ulong)bVar2) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a83f1b4);
    (*UNRECOVERED_JUMPTABLE)();
  }
  auVar10._8_8_ = (code **)(&PTR_FUN_110b9a040)[bVar2];
  puVar5 = (undefined8 *)(param_1 + 0x18);
  switch(bVar2) {
  case 0:
    auVar10._0_8_ = puVar5;
    return auVar10;
  case 1:
    puVar5 = (undefined8 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)*puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010a00496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar11._0_8_ = puVar5;
    return auVar11;
  case 3:
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._0_8_ = puVar5;
    return auVar12;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (((*ppuVar6 == (undefined *)0x0) &&
      (plVar7 = *(long **)(param_1 + 0x30), plVar7 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x870);
      uStack_60 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *puVar5;
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      pcStack_78 = FUN_10a69fabc;
      ppuStack_70 = &PTR_DAT_110c0ce80;
      auVar10._8_8_ = &pcStack_78;
      FUN_10a4634ec(uVar8);
      (*(code *)*ppuStack_70)(&ppuStack_70);
    }
    plVar1 = plVar7 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004dac(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)auVar10._8_8_ == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  auVar14._8_8_ = 0x18;
  auVar14._0_8_ = &UNK_10f66c09c;
  return auVar14;
}



/* Entry: 10a83f1b8; end: 10a83f20f;  */

long FUN_10a83f1b8(long param_1)

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



/* Entry: 10a83f210; end: 10a83f8b7;  */

void FUN_10a83f210(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  char *pcVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 unaff_x28;
  undefined1 auStack_180 [8];
  long *plStack_178;
  undefined1 auStack_170 [8];
  long *plStack_168;
  long lStack_160;
  long *plStack_158;
  undefined8 auStack_150 [2];
  char cStack_139;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined7 uStack_f8;
  char cStack_f1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [40];
  long lStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  undefined1 uStack_59;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar8 = param_2;
  FUN_10a83efd8(param_2,param_3);
  FUN_10a83f8b8(param_5);
  func_0x000109898570(auStack_150,param_2,param_4);
  FUN_10a7694c4(auStack_b0,param_2,param_4 + 0x10);
  if (*(int *)(param_4 + 0x20) == 1) {
    lStack_160 = 0;
    plStack_158 = (long *)0x0;
LAB_10a83f368:
    lVar17 = lStack_160;
    FUN_10a05dcbc(auStack_170,param_2,param_4 + 0x30);
    FUN_10a768f5c(auStack_180,param_2,param_4 + 0x40);
    if (*(char *)(lVar17 + 0x4f) < '\0') {
      func_0x000107c3192c(&lStack_d0,*(undefined8 *)(lVar17 + 0x38),*(undefined8 *)(lVar17 + 0x40));
    }
    else {
      plStack_c8 = *(long **)(lVar17 + 0x40);
      lStack_d0 = *(long *)(lVar17 + 0x38);
      uStack_c0 = *(long *)(lVar17 + 0x48);
    }
    func_0x000107c2b054(&uStack_f0,&UNK_10f67a8f3);
    plVar9 = plStack_c8;
    if (-1 < (char)uStack_c0._7_1_) {
      plVar9 = (long *)(ulong)uStack_c0._7_1_;
    }
    if (plVar9 != (long *)0x0) {
      FUN_10a109200(&uStack_f0);
      goto LAB_10a83f8a0;
    }
    if (lStack_e0 < 0) {
      __ZdlPv(uStack_f0);
      if (uStack_c0 < 0) goto LAB_10a83f414;
    }
    else if (((uint)(int)(char)uStack_c0._7_1_ >> 7 & 1) != 0) {
LAB_10a83f414:
      __ZdlPv(lStack_d0);
    }
    lVar15 = plVar8[6];
    if (*(char *)(lVar15 + 0xff) < '\0') {
      func_0x000107c3192c(&uStack_f0,*(undefined8 *)(lVar15 + 0xe8),*(undefined8 *)(lVar15 + 0xf0));
    }
    else {
      uStack_e8 = *(undefined8 *)(lVar15 + 0xf0);
      uStack_f0 = *(undefined8 *)(lVar15 + 0xe8);
      lStack_e0 = *(long *)(lVar15 + 0xf8);
    }
    FUN_10a0b4df8(&lStack_108,plVar8 + 0xb,&uStack_f0);
    plVar9 = &lStack_108;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(plVar9,":",1);
    plStack_c8 = (long *)plVar9[1];
    lStack_d0 = *plVar9;
    uStack_c0 = plVar9[2];
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = 0;
    uVar13 = plVar8[9];
    plVar9 = (long *)plVar8[8];
    if (-1 < (char)*(byte *)((long)plVar8 + 0x57)) {
      uVar13 = (ulong)*(byte *)((long)plVar8 + 0x57);
      plVar9 = plVar8 + 8;
    }
    plVar10 = &lStack_d0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar10,plVar9,uVar13);
    lVar15 = *plVar10;
    uStack_68 = (undefined7)plVar10[1];
    uStack_61 = (undefined1)*(undefined8 *)((long)plVar10 + 0xf);
    uStack_60 = (undefined7)((ulong)*(undefined8 *)((long)plVar10 + 0xf) >> 8);
    uVar1 = *(undefined1 *)((long)plVar10 + 0x17);
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = 0;
    if (*(char *)(lVar17 + 0x4f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar17 + 0x38));
    }
    *(long *)(lVar17 + 0x38) = lVar15;
    *(ulong *)(lVar17 + 0x40) = CONCAT17(uStack_61,uStack_68);
    *(ulong *)(lVar17 + 0x47) = CONCAT71(uStack_60,uStack_61);
    *(undefined1 *)(lVar17 + 0x4f) = uVar1;
    if (uStack_c0 < 0) {
      __ZdlPv(lStack_d0);
    }
    if (cStack_f1 < '\0') {
      __ZdlPv(CONCAT71(lStack_108._1_7_,(undefined1)lStack_108));
    }
    *(undefined4 *)(lVar17 + 0x1c) = 1;
    FUN_10a750c5c(plVar8[4],auStack_150,auStack_b0,lVar17,auStack_170,auStack_180);
    func_0x000107c2b054(&lStack_108,&UNK_10f67a8c5);
    if (*(char *)(lVar17 + 0x4f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar17 + 0x38));
    }
    *(undefined8 *)(lVar17 + 0x40) = uStack_100;
    *(ulong *)(lVar17 + 0x38) = CONCAT71(lStack_108._1_7_,(undefined1)lStack_108);
    *(ulong *)(lVar17 + 0x48) = CONCAT17(cStack_f1,uStack_f8);
    cStack_f1 = '\0';
    lStack_108._0_1_ = 0;
    uVar4 = *(int *)(lVar17 + 0x18) - 1;
    if (uVar4 < 3) {
      pcVar12 = (&PTR_DAT_110c236a8)[uVar4];
    }
    else {
      pcVar12 = "Unknown";
    }
    lVar17 = plVar8[3];
    func_0x000107c2b054(auStack_138,pcVar12);
    puVar11 = auStack_138;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar11,0,&UNK_10f67a910,4);
    uStack_118 = puVar11[1];
    uStack_120 = *puVar11;
    lStack_110 = puVar11[2];
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = 0;
    if (lVar17 != 0) {
      uVar18 = *(undefined8 *)(lVar17 + 0x8d8);
      func_0x000107c2b054(&lStack_d0,&DAT_10f673094);
      FUN_10a76bdb0(uVar18,&uStack_120,&lStack_d0);
      if (uStack_c0 < 0) {
        __ZdlPv(lStack_d0);
      }
    }
    if (lStack_110 < 0) {
      __ZdlPv(uStack_120);
    }
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    if (lStack_e0 < 0) {
      __ZdlPv(uStack_f0);
    }
    if (plStack_178 != (long *)0x0) {
      plVar8 = plStack_178 + 1;
      do {
        lVar17 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_178 + 0x10))(plStack_178);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_178);
      }
    }
    if (plStack_168 != (long *)0x0) {
      plVar8 = plStack_168 + 1;
      do {
        lVar17 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_168 + 0x10))(plStack_168);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_168);
      }
    }
    plVar8 = plStack_158;
    if (plStack_158 != (long *)0x0) {
      plVar9 = plStack_158 + 1;
      do {
        lVar17 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_158 + 0x10))(plStack_158);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (10 < (uStack_70 & 0xff)) goto LAB_10a83f8a0;
    (*(code *)(&PTR_FUN_110c17158)[uStack_70 & 0xff])(auStack_b0);
    if (cStack_139 < '\0') {
      __ZdlPv(auStack_150[0]);
    }
    *param_1 = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
      plVar8 = plVar7 + 0x4b;
      lVar14 = plVar7[0x59];
      uVar13 = lVar14 - 1;
      plVar7[0x59] = uVar13;
      if (uVar13 < 8) {
        uVar13 = plVar8[lVar14 + 2];
        if (plVar7[0x5a] == uVar13) {
          return;
        }
      }
      else {
        uVar13 = *(ulong *)(plVar7[0x57] + -8);
        plVar7[0x57] = plVar7[0x57] + -8;
        if (plVar7[0x5a] == uVar13) {
          return;
        }
      }
      uStack_60 = (undefined7)unaff_x28;
      uStack_59 = (undefined1)((ulong)unaff_x28 >> 0x38);
      lVar14 = *plVar8;
      lVar17 = plVar7[0x4c];
      lVar15 = lVar17 - lVar14;
      uVar21 = lVar15 >> 4;
      if (uVar21 < uVar13) {
        uVar22 = uVar13 - uVar21;
        lVar20 = plVar7[0x4d];
        if ((ulong)(lVar20 - lVar17 >> 4) < uVar22) {
          if (uVar13 >> 0x3c == 0) {
            uVar16 = lVar20 - lVar14 >> 3;
            if (uVar16 <= uVar13) {
              uVar16 = uVar13;
            }
            if (0x7fffffffffffffef < (ulong)(lVar20 - lVar14)) {
              uVar16 = 0xfffffffffffffff;
            }
            uStack_68 = SUB87(plVar8,0);
            uStack_61 = (undefined1)((ulong)plVar8 >> 0x38);
            if (uVar16 >> 0x3c == 0) {
              lVar6 = uVar16 << 4;
              __Znwm();
              lVar17 = lVar6 + lVar15;
              _bzero(lVar17,uVar22 * 0x10);
              lVar19 = lVar17 + uVar21 * -0x10;
              _memcpy(lVar19,lVar14,lVar15);
              *plVar8 = lVar19;
              plVar7[0x4c] = lVar17 + uVar22 * 0x10;
              plVar7[0x4d] = lVar6 + uVar16 * 0x10;
              lStack_88 = lVar14;
              lStack_80 = lVar14;
              lStack_78 = lVar14;
              uStack_70 = lVar20;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar5)();
        }
        _bzero(lVar17,uVar22 * 0x10);
        plVar7[0x4c] = lVar17 + uVar22 * 0x10;
      }
      else if (uVar13 < uVar21) {
        lVar14 = lVar14 + uVar13 * 0x10;
        while (lVar17 != lVar14) {
          lVar17 = lVar17 + -0x10;
          func_0x00010988c204(lVar17);
        }
        plVar7[0x4c] = lVar14;
      }
code_r0x00010988c138:
      plVar7[0x5a] = uVar13;
      return;
    }
    ___stack_chk_fail();
  }
  else {
    plVar9 = param_2;
    func_0x000109898688();
    if (plVar9 != (long *)0x0) {
      func_0x00010989879c(&lStack_d0);
      if ((lStack_d0 == 0) ||
         (lVar17 = lStack_d0, ___dynamic_cast(lStack_d0,&PTR_DAT_110b178e0,&PTR_DAT_110c16210,0),
         lVar17 == 0)) {
        plVar9 = &lStack_160;
      }
      else {
        plStack_158 = plStack_c8;
        plVar9 = &lStack_d0;
        lStack_160 = lVar17;
      }
      *plVar9 = 0;
      plVar9[1] = 0;
      plVar9 = plStack_c8;
      if (plStack_c8 != (long *)0x0) {
        plVar10 = plStack_c8 + 1;
        do {
          lVar17 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar17 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      if (lStack_160 == 0) {
        func_0x00010988bd28(&UNK_10f58251f);
        goto LAB_10a83f8a0;
      }
      goto LAB_10a83f368;
    }
  }
  func_0x00010988bd28(&UNK_10f68f52e);
LAB_10a83f8a0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a83f8a4);
  (*pcVar5)();
}



/* Entry: 10a83f8b8; end: 10a83f8db;  */

long FUN_10a83f8b8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_1 == 5) {
    return param_1;
  }
  lVar4 = 5;
  FUN_10a052ee0(5,0,param_1);
  plVar6 = *(long **)(lVar4 + 8);
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
  return lVar4;
}



/* Entry: 10a83f8dc; end: 10a83f933;  */

long FUN_10a83f8dc(long param_1)

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



/* Entry: 10a83f934; end: 10a83fe0b;  */

/* WARNING: Removing unreachable block (ram,0x00010a83fb4c) */
/* WARNING: Removing unreachable block (ram,0x00010a83fa24) */
/* WARNING: Removing unreachable block (ram,0x00010a83fae8) */
/* WARNING: Removing unreachable block (ram,0x00010a83fbe8) */

void FUN_10a83f934(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 auStack_110 [8];
  long *plStack_108;
  undefined1 auStack_100 [8];
  long *plStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long alStack_c8 [2];
  char cStack_b1;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a83efd8(param_2,param_3);
  FUN_10a83fe0c(param_5);
  func_0x000109898570(auStack_e0,param_2,param_4);
  FUN_10a83f064(&lStack_f0,param_2,param_4 + 0x10);
  FUN_10a05dcbc(auStack_100,param_2,param_4 + 0x20);
  FUN_10a768f5c(auStack_110,param_2,param_4 + 0x30);
  func_0x000107c2b054(&lStack_70,&UNK_10f67a8f3);
  uVar11 = *(ulong *)(lStack_f0 + 0x28);
  if (-1 < (char)*(byte *)(lStack_f0 + 0x37)) {
    uVar11 = (ulong)*(byte *)(lStack_f0 + 0x37);
  }
  if (uVar11 != 0) {
    FUN_10a109200();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a83fd10);
    (*pcVar4)();
  }
  lVar12 = plVar7[6];
  if (*(char *)(lVar12 + 0xff) < '\0') {
    func_0x000107c3192c(&uStack_90,*(undefined8 *)(lVar12 + 0xe8),*(undefined8 *)(lVar12 + 0xf0));
  }
  else {
    lStack_88 = *(long *)(lVar12 + 0xf0);
    uStack_90 = *(undefined8 *)(lVar12 + 0xe8);
    lStack_80 = *(long *)(lVar12 + 0xf8);
  }
  FUN_10a0b4df8(alStack_c8,plVar7 + 0xb,&uStack_90);
  plVar8 = alStack_c8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(plVar8,":",1);
  lStack_a8 = plVar8[1];
  lStack_b0 = *plVar8;
  lStack_a0 = plVar8[2];
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = 0;
  uVar11 = plVar7[9];
  plVar8 = (long *)plVar7[8];
  if (-1 < (char)*(byte *)((long)plVar7 + 0x57)) {
    uVar11 = (ulong)*(byte *)((long)plVar7 + 0x57);
    plVar8 = plVar7 + 8;
  }
  plVar9 = &lStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(plVar9,plVar8,uVar11)
  ;
  plStack_68 = (long *)plVar9[1];
  lStack_70 = *plVar9;
  lStack_60 = plVar9[2];
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lStack_f0 + 0x20,&lStack_70);
  if (lStack_a0 < 0) {
    __ZdlPv(lStack_b0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(alStack_c8[0]);
  }
  FUN_10a750f9c(plVar7[4],auStack_e0,lStack_f0,auStack_100,auStack_110);
  func_0x000107c2b054(&lStack_70,&UNK_10f67a8c5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lStack_f0 + 0x20,&lStack_70);
  uVar3 = *(int *)(lStack_f0 + 0x18) - 1;
  if (uVar3 < 3) {
    pcVar10 = (&PTR_DAT_110c236a8)[uVar3];
  }
  else {
    pcVar10 = "Unknown";
  }
  lVar12 = plVar7[3];
  func_0x000107c2b054(alStack_c8,pcVar10);
  plVar7 = alStack_c8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (plVar7,0,&UNK_10f67a910,4);
  lStack_a8 = plVar7[1];
  lStack_b0 = *plVar7;
  lStack_a0 = plVar7[2];
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = 0;
  if (lVar12 != 0) {
    uVar14 = *(undefined8 *)(lVar12 + 0x8d8);
    func_0x000107c2b054(&lStack_70,&UNK_10f6730a8);
    FUN_10a76bdb0(uVar14,&lStack_b0,&lStack_70);
  }
  if (lStack_a0 < 0) {
    __ZdlPv(lStack_b0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(alStack_c8[0]);
  }
  if (lStack_80 < 0) {
    __ZdlPv(uStack_90);
  }
  if (plStack_108 != (long *)0x0) {
    plVar7 = plStack_108 + 1;
    do {
      lVar12 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_108);
    }
  }
  if (plStack_f8 != (long *)0x0) {
    plVar7 = plStack_f8 + 1;
    do {
      lVar12 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
    }
  }
  if (plStack_e8 != (long *)0x0) {
    plVar7 = plStack_e8 + 1;
    do {
      lVar12 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e8);
    }
  }
  if (cStack_c9 < '\0') {
    __ZdlPv(auStack_e0[0]);
  }
  *param_1 = 0;
  plVar7 = plVar6 + 0x4b;
  lVar12 = plVar6[0x59];
  uVar11 = lVar12 - 1;
  plVar6[0x59] = uVar11;
  if (uVar11 < 8) {
    uVar11 = plVar7[lVar12 + 2];
    if (plVar6[0x5a] == uVar11) {
      return;
    }
  }
  else {
    uVar11 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar11) {
      return;
    }
  }
  lVar12 = *plVar7;
  lVar17 = plVar6[0x4c];
  lVar15 = lVar17 - lVar12;
  uVar19 = lVar15 >> 4;
  if (uVar19 < uVar11) {
    uVar20 = uVar11 - uVar19;
    lVar18 = plVar6[0x4d];
    if ((ulong)(lVar18 - lVar17 >> 4) < uVar20) {
      if (uVar11 >> 0x3c == 0) {
        uVar13 = lVar18 - lVar12 >> 3;
        if (uVar13 <= uVar11) {
          uVar13 = uVar11;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - lVar12)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar17 = lVar5 + lVar15;
          _bzero(lVar17,uVar20 * 0x10);
          lVar16 = lVar17 + uVar19 * -0x10;
          _memcpy(lVar16,lVar12,lVar15);
          *plVar7 = lVar16;
          plVar6[0x4c] = lVar17 + uVar20 * 0x10;
          plVar6[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_88 = lVar12;
          lStack_80 = lVar12;
          lStack_78 = lVar12;
          lStack_70 = lVar18;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar17,uVar20 * 0x10);
    plVar6[0x4c] = lVar17 + uVar20 * 0x10;
  }
  else if (uVar11 < uVar19) {
    lVar12 = lVar12 + uVar11 * 0x10;
    while (lVar17 != lVar12) {
      lVar17 = lVar17 + -0x10;
      func_0x00010988c204(lVar17);
    }
    plVar6[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar11;
  return;
}



/* Entry: 10a83fe0c; end: 10a83fe2f;  */

/* WARNING: Removing unreachable block (ram,0x00010a840380) */
/* WARNING: Removing unreachable block (ram,0x00010a8401e0) */
/* WARNING: Removing unreachable block (ram,0x00010a840390) */

void FUN_10a83fe0c(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long **pplVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  char *pcVar17;
  ulong uVar18;
  undefined4 *extraout_x8;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  undefined1 auStack_158 [8];
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined8 auStack_128 [2];
  char cStack_111;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long *plStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 4) {
    return;
  }
  plVar7 = (long *)0x4;
  uVar16 = 0;
  FUN_10a052ee0(4,0);
  plVar8 = plVar7;
  (**(code **)(*plVar7 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = plVar7;
  FUN_10a83efd8(plVar7,uVar16);
  FUN_10a840638(param_4);
  if (*param_1 == 1) {
    plStack_138 = (long *)0x0;
    plStack_130 = (long *)0x0;
  }
  else {
    plVar10 = plVar7;
    func_0x000109898688(plVar7,param_1);
    if (plVar10 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f68f52e);
      goto LAB_10a8404bc;
    }
    func_0x00010989879c(&plStack_f0);
    if ((plStack_f0 == (long *)0x0) ||
       (plVar10 = plStack_f0, ___dynamic_cast(plStack_f0,&PTR_DAT_110b178e0,&PTR_DAT_110c16170,0),
       plVar10 == (long *)0x0)) {
      pplVar14 = &plStack_138;
    }
    else {
      plStack_130 = plStack_e8;
      pplVar14 = &plStack_f0;
      plStack_138 = plVar10;
    }
    *pplVar14 = (long *)0x0;
    pplVar14[1] = (long *)0x0;
    plVar10 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar13 = plStack_e8 + 1;
      do {
        lVar12 = *plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if (plStack_138 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f58251f);
      goto LAB_10a8404bc;
    }
  }
  plVar10 = plStack_138;
  if (param_1[4] == 7) {
    plVar13 = plVar7;
    (**(code **)(*plVar7 + 0x98))(plVar7,*(undefined8 *)(param_1 + 6));
    plVar11 = plVar7;
    plStack_b0 = plVar13;
    (**(code **)(*plVar7 + 0x228))(plVar7,&plStack_b0);
    if ((int)plVar11 != 0) {
      plVar13 = plVar7;
      (**(code **)(*plVar7 + 0x58))();
      lVar12 = plVar13[0x48];
      if ((lVar12 == 0) ||
         (___dynamic_cast(lVar12,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar13 = plStack_b0,
         lVar12 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a8404bc;
      }
      plStack_b0 = (long *)0x0;
      plStack_88 = (long *)CONCAT44(plStack_88._4_4_,7);
      plStack_80 = plVar13;
      plStack_90 = plVar7;
      FUN_10a688ac0(&plStack_f0,&plStack_90,*(undefined8 *)(lVar12 + 8));
      if ((3 < (int)plStack_88) && (plStack_80 != (long *)0x0)) {
        (**(code **)*plStack_80)();
      }
    }
    if (plStack_b0 != (long *)0x0) {
      (**(code **)*plStack_b0)();
    }
    if (((ulong)plVar11 & 1) != 0) {
      plVar13 = (long *)0x60;
      __Znwm();
      plVar11 = plVar13 + 1;
      *plVar11 = 0;
      plVar13[2] = 0;
      *plVar13 = (long)&PTR_FUN_110c22278;
      plVar24 = plVar13 + 3;
      plVar13[4] = (long)plStack_e8;
      *plVar24 = (long)plStack_f0;
      if (plStack_e8 != (long *)0x0) {
        plStack_e8 = plStack_e8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_e8,0x10);
          if (bVar3) {
            *plStack_e8 = *plStack_e8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar13[6] = (long)plStack_d8;
      plVar13[5] = (long)uStack_e0;
      if (plStack_d8 != (long *)0x0) {
        plStack_d8 = (long *)((long)plStack_d8 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
          if (bVar3) {
            *plStack_d8 = *plStack_d8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined1 *)(plVar13 + 0xb) = 2;
      plStack_148 = plVar24;
      plStack_140 = plVar13;
      FUN_10a688c1c(&plStack_f0);
      FUN_10a768f5c(auStack_158,plVar7,param_1 + 8);
      func_0x000107c2b054(&plStack_f0,&UNK_10f67a8f3);
      uVar18 = plVar10[8];
      if (-1 < (char)*(byte *)((long)plVar10 + 0x4f)) {
        uVar18 = (ulong)*(byte *)((long)plVar10 + 0x4f);
      }
      if (uVar18 == 0) {
        if ((long)uStack_e0 < 0) {
          __ZdlPv(plStack_f0);
        }
        lVar12 = plVar9[6];
        if (*(char *)(lVar12 + 0xff) < '\0') {
          func_0x000107c3192c(&plStack_90,*(undefined8 *)(lVar12 + 0xe8),
                              *(undefined8 *)(lVar12 + 0xf0));
        }
        else {
          plStack_88 = *(long **)(lVar12 + 0xf0);
          plStack_90 = *(long **)(lVar12 + 0xe8);
          plStack_80 = *(long **)(lVar12 + 0xf8);
        }
        FUN_10a0b4df8(&plStack_f0,plVar9 + 0xb,&plStack_90);
        pplVar14 = &plStack_f0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(pplVar14,":",1)
        ;
        plStack_a8 = pplVar14[1];
        plStack_b0 = *pplVar14;
        plStack_a0 = pplVar14[2];
        pplVar14[1] = (long *)0x0;
        pplVar14[2] = (long *)0x0;
        *pplVar14 = (long *)0x0;
        if ((long)uStack_e0 < 0) {
          __ZdlPv(plStack_f0);
        }
        FUN_10a0b4df8(&plStack_f0,&plStack_b0,plVar9 + 8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (plVar10 + 7,&plStack_f0);
        if (uStack_e0._7_1_ < '\0') {
          __ZdlPv(plStack_f0);
        }
        *(undefined4 *)(plVar10 + 10) = 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = *plVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plStack_d8 = plStack_a8;
        uStack_e0 = plStack_b0;
        plStack_d0 = plStack_a0;
        plVar7 = (long *)0x60;
        plStack_f0 = plVar24;
        plStack_e8 = plVar13;
        __Znwm();
        plVar7[1] = 0;
        plVar7[2] = 0;
        *plVar7 = (long)&PTR_DAT_110c16fd8;
        plStack_c0 = plVar7 + 3;
        *plStack_c0 = (long)FUN_10a8412e0;
        plVar7[4] = (long)&PTR_FUN_110c22308;
        plVar7[6] = (long)plStack_e8;
        plVar7[5] = (long)plStack_f0;
        plVar7[8] = (long)plStack_d8;
        plVar7[7] = (long)uStack_e0;
        plVar7[9] = (long)plStack_d0;
        *(undefined1 *)(plVar7 + 0xb) = 1;
        plStack_b8 = plVar7;
        FUN_10a750ed4(plVar9[4],plVar10,&plStack_c0,auStack_158);
        func_0x000107c2b054(&plStack_f0,&UNK_10f67a8c5);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (plVar10 + 7,&plStack_f0);
        if ((long)uStack_e0 < 0) {
          __ZdlPv(plStack_f0);
        }
        uVar4 = (int)plVar10[3] - 1;
        if (uVar4 < 3) {
          pcVar17 = (&PTR_DAT_110c236a8)[uVar4];
        }
        else {
          pcVar17 = "Unknown";
        }
        lVar12 = plVar9[3];
        func_0x000107c2b054(auStack_128,pcVar17);
        puVar15 = auStack_128;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (puVar15,0,&UNK_10f67a910,4);
        uStack_108 = puVar15[1];
        uStack_110 = *puVar15;
        lStack_100 = puVar15[2];
        puVar15[1] = 0;
        puVar15[2] = 0;
        *puVar15 = 0;
        if (lVar12 != 0) {
          uVar16 = *(undefined8 *)(lVar12 + 0x8d8);
          func_0x000107c2b054(&plStack_f0,&UNK_10f67309d);
          FUN_10a76bdb0(uVar16,&uStack_110,&plStack_f0);
          if ((long)uStack_e0 < 0) {
            __ZdlPv(plStack_f0);
          }
        }
        if (lStack_100 < 0) {
          __ZdlPv(uStack_110);
        }
        if (cStack_111 < '\0') {
          __ZdlPv(auStack_128[0]);
        }
        plVar7 = plStack_b8;
        if (plStack_b8 != (long *)0x0) {
          plVar9 = plStack_b8 + 1;
          do {
            lVar12 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        if (plStack_150 != (long *)0x0) {
          plVar7 = plStack_150 + 1;
          do {
            lVar12 = *plVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_150 + 0x10))(plStack_150);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_150);
          }
        }
        plVar7 = plStack_140;
        if (plStack_140 != (long *)0x0) {
          plVar9 = plStack_140 + 1;
          do {
            lVar12 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_140 + 0x10))(plStack_140);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        plVar7 = plStack_130;
        if (plStack_130 != (long *)0x0) {
          plVar9 = plStack_130 + 1;
          do {
            lVar12 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_130 + 0x10))(plStack_130);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        *extraout_x8 = 0;
        plVar7 = plVar8 + 0x4b;
        lVar12 = plVar8[0x59];
        uVar18 = lVar12 - 1;
        plVar8[0x59] = uVar18;
        if (uVar18 < 8) {
          uVar18 = plVar7[lVar12 + 2];
          if (plVar8[0x5a] == uVar18) {
            return;
          }
        }
        else {
          uVar18 = *(ulong *)(plVar8[0x57] + -8);
          plVar8[0x57] = plVar8[0x57] + -8;
          if (plVar8[0x5a] == uVar18) {
            return;
          }
        }
        plVar9 = (long *)*plVar7;
        plVar10 = (long *)plVar8[0x4c];
        lVar12 = (long)plVar10 - (long)plVar9;
        uVar22 = lVar12 >> 4;
        if (uVar22 < uVar18) {
          uVar23 = uVar18 - uVar22;
          lVar21 = plVar8[0x4d];
          if ((ulong)(lVar21 - (long)plVar10 >> 4) < uVar23) {
            if (uVar18 >> 0x3c == 0) {
              uVar19 = lVar21 - (long)plVar9 >> 3;
              if (uVar19 <= uVar18) {
                uVar19 = uVar18;
              }
              if (0x7fffffffffffffef < (ulong)(lVar21 - (long)plVar9)) {
                uVar19 = 0xfffffffffffffff;
              }
              plStack_78 = plVar7;
              if (uVar19 >> 0x3c == 0) {
                lVar6 = uVar19 << 4;
                __Znwm();
                lVar1 = lVar6 + lVar12;
                _bzero(lVar1,uVar23 * 0x10);
                lVar20 = lVar1 + uVar22 * -0x10;
                _memcpy(lVar20,plVar9,lVar12);
                *plVar7 = lVar20;
                plVar8[0x4c] = lVar1 + uVar23 * 0x10;
                plVar8[0x4d] = lVar6 + uVar19 * 0x10;
                plStack_98 = plVar9;
                plStack_90 = plVar9;
                plStack_88 = plVar9;
                plStack_80 = (long *)lVar21;
                func_0x00010988c1b8(&plStack_98);
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar5)();
          }
          _bzero(plVar10,uVar23 * 0x10);
          plVar8[0x4c] = (long)(plVar10 + uVar23 * 2);
        }
        else if (uVar18 < uVar22) {
          while (plVar10 != plVar9 + uVar18 * 2) {
            plVar10 = plVar10 + -2;
            func_0x00010988c204(plVar10);
          }
          plVar8[0x4c] = (long)(plVar9 + uVar18 * 2);
        }
code_r0x00010988c138:
        plVar8[0x5a] = uVar18;
        return;
      }
      FUN_10a109200(&plStack_f0);
      goto LAB_10a8404bc;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a8404bc:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a8404c0);
  (*pcVar5)();
}



/* Entry: 10a83fe30; end: 10a840637;  */

/* WARNING: Removing unreachable block (ram,0x00010a840380) */
/* WARNING: Removing unreachable block (ram,0x00010a8401e0) */
/* WARNING: Removing unreachable block (ram,0x00010a840390) */

void FUN_10a83fe30(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long **pplVar12;
  long *plVar13;
  undefined8 *puVar14;
  char *pcVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  undefined1 auStack_148 [8];
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar8 = param_2;
  FUN_10a83efd8(param_2,param_3);
  FUN_10a840638(param_5);
  if (*param_4 == 1) {
    plStack_128 = (long *)0x0;
    plStack_120 = (long *)0x0;
  }
  else {
    plVar9 = param_2;
    func_0x000109898688(param_2,param_4);
    if (plVar9 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f68f52e);
      goto LAB_10a8404bc;
    }
    func_0x00010989879c(&plStack_e0);
    if ((plStack_e0 == (long *)0x0) ||
       (plVar9 = plStack_e0, ___dynamic_cast(plStack_e0,&PTR_DAT_110b178e0,&PTR_DAT_110c16170,0),
       plVar9 == (long *)0x0)) {
      pplVar12 = &plStack_128;
    }
    else {
      plStack_120 = plStack_d8;
      pplVar12 = &plStack_e0;
      plStack_128 = plVar9;
    }
    *pplVar12 = (long *)0x0;
    pplVar12[1] = (long *)0x0;
    plVar9 = plStack_d8;
    if (plStack_d8 != (long *)0x0) {
      plVar11 = plStack_d8 + 1;
      do {
        lVar10 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    if (plStack_128 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f58251f);
      goto LAB_10a8404bc;
    }
  }
  plVar9 = plStack_128;
  if (param_4[4] == 7) {
    plVar11 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 6));
    plVar13 = param_2;
    plStack_a0 = plVar11;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_a0);
    if ((int)plVar13 != 0) {
      plVar11 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar10 = plVar11[0x48];
      if ((lVar10 == 0) ||
         (___dynamic_cast(lVar10,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar11 = plStack_a0,
         lVar10 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a8404bc;
      }
      plStack_a0 = (long *)0x0;
      plStack_78 = (long *)CONCAT44(plStack_78._4_4_,7);
      plStack_70 = plVar11;
      plStack_80 = param_2;
      FUN_10a688ac0(&plStack_e0,&plStack_80,*(undefined8 *)(lVar10 + 8));
      if ((3 < (int)plStack_78) && (plStack_70 != (long *)0x0)) {
        (**(code **)*plStack_70)();
      }
    }
    if (plStack_a0 != (long *)0x0) {
      (**(code **)*plStack_a0)();
    }
    if (((ulong)plVar13 & 1) != 0) {
      plVar11 = (long *)0x60;
      __Znwm();
      plVar13 = plVar11 + 1;
      *plVar13 = 0;
      plVar11[2] = 0;
      *plVar11 = (long)&PTR_FUN_110c22278;
      plVar23 = plVar11 + 3;
      plVar11[4] = (long)plStack_d8;
      *plVar23 = (long)plStack_e0;
      if (plStack_d8 != (long *)0x0) {
        plStack_d8 = plStack_d8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
          if (bVar3) {
            *plStack_d8 = *plStack_d8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar11[6] = (long)plStack_c8;
      plVar11[5] = (long)uStack_d0;
      if (plStack_c8 != (long *)0x0) {
        plStack_c8 = (long *)((long)plStack_c8 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_c8,0x10);
          if (bVar3) {
            *plStack_c8 = *plStack_c8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined1 *)(plVar11 + 0xb) = 2;
      plStack_138 = plVar23;
      plStack_130 = plVar11;
      FUN_10a688c1c(&plStack_e0);
      FUN_10a768f5c(auStack_148,param_2,param_4 + 8);
      func_0x000107c2b054(&plStack_e0,&UNK_10f67a8f3);
      uVar16 = plVar9[8];
      if (-1 < (char)*(byte *)((long)plVar9 + 0x4f)) {
        uVar16 = (ulong)*(byte *)((long)plVar9 + 0x4f);
      }
      if (uVar16 == 0) {
        if ((long)uStack_d0 < 0) {
          __ZdlPv(plStack_e0);
        }
        lVar10 = plVar8[6];
        if (*(char *)(lVar10 + 0xff) < '\0') {
          func_0x000107c3192c(&plStack_80,*(undefined8 *)(lVar10 + 0xe8),
                              *(undefined8 *)(lVar10 + 0xf0));
        }
        else {
          plStack_78 = *(long **)(lVar10 + 0xf0);
          plStack_80 = *(long **)(lVar10 + 0xe8);
          plStack_70 = *(long **)(lVar10 + 0xf8);
        }
        FUN_10a0b4df8(&plStack_e0,plVar8 + 0xb,&plStack_80);
        pplVar12 = &plStack_e0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(pplVar12,":",1)
        ;
        plStack_98 = pplVar12[1];
        plStack_a0 = *pplVar12;
        plStack_90 = pplVar12[2];
        pplVar12[1] = (long *)0x0;
        pplVar12[2] = (long *)0x0;
        *pplVar12 = (long *)0x0;
        if ((long)uStack_d0 < 0) {
          __ZdlPv(plStack_e0);
        }
        FUN_10a0b4df8(&plStack_e0,&plStack_a0,plVar8 + 8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (plVar9 + 7,&plStack_e0);
        if (uStack_d0._7_1_ < '\0') {
          __ZdlPv(plStack_e0);
        }
        *(undefined4 *)(plVar9 + 10) = 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = *plVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plStack_c8 = plStack_98;
        uStack_d0 = plStack_a0;
        plStack_c0 = plStack_90;
        plVar13 = (long *)0x60;
        plStack_e0 = plVar23;
        plStack_d8 = plVar11;
        __Znwm();
        plVar13[1] = 0;
        plVar13[2] = 0;
        *plVar13 = (long)&PTR_DAT_110c16fd8;
        plStack_b0 = plVar13 + 3;
        *plStack_b0 = (long)FUN_10a8412e0;
        plVar13[4] = (long)&PTR_FUN_110c22308;
        plVar13[6] = (long)plStack_d8;
        plVar13[5] = (long)plStack_e0;
        plVar13[8] = (long)plStack_c8;
        plVar13[7] = (long)uStack_d0;
        plVar13[9] = (long)plStack_c0;
        *(undefined1 *)(plVar13 + 0xb) = 1;
        plStack_a8 = plVar13;
        FUN_10a750ed4(plVar8[4],plVar9,&plStack_b0,auStack_148);
        func_0x000107c2b054(&plStack_e0,&UNK_10f67a8c5);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (plVar9 + 7,&plStack_e0);
        if ((long)uStack_d0 < 0) {
          __ZdlPv(plStack_e0);
        }
        uVar4 = (int)plVar9[3] - 1;
        if (uVar4 < 3) {
          pcVar15 = (&PTR_DAT_110c236a8)[uVar4];
        }
        else {
          pcVar15 = "Unknown";
        }
        lVar10 = plVar8[3];
        func_0x000107c2b054(auStack_118,pcVar15);
        puVar14 = auStack_118;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (puVar14,0,&UNK_10f67a910,4);
        uStack_f8 = puVar14[1];
        uStack_100 = *puVar14;
        lStack_f0 = puVar14[2];
        puVar14[1] = 0;
        puVar14[2] = 0;
        *puVar14 = 0;
        if (lVar10 != 0) {
          uVar18 = *(undefined8 *)(lVar10 + 0x8d8);
          func_0x000107c2b054(&plStack_e0,&UNK_10f67309d);
          FUN_10a76bdb0(uVar18,&uStack_100,&plStack_e0);
          if ((long)uStack_d0 < 0) {
            __ZdlPv(plStack_e0);
          }
        }
        if (lStack_f0 < 0) {
          __ZdlPv(uStack_100);
        }
        if (cStack_101 < '\0') {
          __ZdlPv(auStack_118[0]);
        }
        plVar8 = plStack_a8;
        if (plStack_a8 != (long *)0x0) {
          plVar9 = plStack_a8 + 1;
          do {
            lVar10 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        if (plStack_140 != (long *)0x0) {
          plVar8 = plStack_140 + 1;
          do {
            lVar10 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_140 + 0x10))(plStack_140);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_140);
          }
        }
        plVar8 = plStack_130;
        if (plStack_130 != (long *)0x0) {
          plVar9 = plStack_130 + 1;
          do {
            lVar10 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_130 + 0x10))(plStack_130);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        plVar8 = plStack_120;
        if (plStack_120 != (long *)0x0) {
          plVar9 = plStack_120 + 1;
          do {
            lVar10 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_120 + 0x10))(plStack_120);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        *param_1 = 0;
        plVar8 = plVar7 + 0x4b;
        lVar10 = plVar7[0x59];
        uVar16 = lVar10 - 1;
        plVar7[0x59] = uVar16;
        if (uVar16 < 8) {
          uVar16 = plVar8[lVar10 + 2];
          if (plVar7[0x5a] == uVar16) {
            return;
          }
        }
        else {
          uVar16 = *(ulong *)(plVar7[0x57] + -8);
          plVar7[0x57] = plVar7[0x57] + -8;
          if (plVar7[0x5a] == uVar16) {
            return;
          }
        }
        plVar9 = (long *)*plVar8;
        plVar11 = (long *)plVar7[0x4c];
        lVar10 = (long)plVar11 - (long)plVar9;
        uVar21 = lVar10 >> 4;
        if (uVar21 < uVar16) {
          uVar22 = uVar16 - uVar21;
          lVar20 = plVar7[0x4d];
          if ((ulong)(lVar20 - (long)plVar11 >> 4) < uVar22) {
            if (uVar16 >> 0x3c == 0) {
              uVar17 = lVar20 - (long)plVar9 >> 3;
              if (uVar17 <= uVar16) {
                uVar17 = uVar16;
              }
              if (0x7fffffffffffffef < (ulong)(lVar20 - (long)plVar9)) {
                uVar17 = 0xfffffffffffffff;
              }
              plStack_68 = plVar8;
              if (uVar17 >> 0x3c == 0) {
                lVar6 = uVar17 << 4;
                __Znwm();
                lVar1 = lVar6 + lVar10;
                _bzero(lVar1,uVar22 * 0x10);
                lVar19 = lVar1 + uVar21 * -0x10;
                _memcpy(lVar19,plVar9,lVar10);
                *plVar8 = lVar19;
                plVar7[0x4c] = lVar1 + uVar22 * 0x10;
                plVar7[0x4d] = lVar6 + uVar17 * 0x10;
                plStack_88 = plVar9;
                plStack_80 = plVar9;
                plStack_78 = plVar9;
                plStack_70 = (long *)lVar20;
                func_0x00010988c1b8(&plStack_88);
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar5)();
          }
          _bzero(plVar11,uVar22 * 0x10);
          plVar7[0x4c] = (long)(plVar11 + uVar22 * 2);
        }
        else if (uVar16 < uVar21) {
          while (plVar11 != plVar9 + uVar16 * 2) {
            plVar11 = plVar11 + -2;
            func_0x00010988c204(plVar11);
          }
          plVar7[0x4c] = (long)(plVar9 + uVar16 * 2);
        }
code_r0x00010988c138:
        plVar7[0x5a] = uVar16;
        return;
      }
      FUN_10a109200(&plStack_e0);
      goto LAB_10a8404bc;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a8404bc:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a8404c0);
  (*pcVar5)();
}



/* Entry: 10a840638; end: 10a84065b;  */

void FUN_10a840638(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 3) {
    return;
  }
  puVar1 = (undefined8 *)0x3;
  FUN_10a052ee0(3,0,param_1);
  *puVar1 = &PTR_FUN_110c22278;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a84065c; end: 10a84066b;  */

void FUN_10a84065c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c22278;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a84066c; end: 10a84068b;  */

void FUN_10a84066c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c22278;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a84068c; end: 10a8406b3;  */

undefined1  [16] FUN_10a84068c(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  if (3 < (ulong)bVar2) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a8406b0);
    (*UNRECOVERED_JUMPTABLE)();
  }
  auVar10._8_8_ = (code **)(&PTR_FUN_110b9a040)[bVar2];
  puVar5 = (undefined8 *)(param_1 + 0x18);
  switch(bVar2) {
  case 0:
    auVar10._0_8_ = puVar5;
    return auVar10;
  case 1:
    puVar5 = (undefined8 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)*puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010a00496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar11._0_8_ = puVar5;
    return auVar11;
  case 3:
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._0_8_ = puVar5;
    return auVar12;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (((*ppuVar6 == (undefined *)0x0) &&
      (plVar7 = *(long **)(param_1 + 0x30), plVar7 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x870);
      uStack_60 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *puVar5;
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      pcStack_78 = FUN_10a69fabc;
      ppuStack_70 = &PTR_DAT_110c0ce80;
      auVar10._8_8_ = &pcStack_78;
      FUN_10a4634ec(uVar8);
      (*(code *)*ppuStack_70)(&ppuStack_70);
    }
    plVar1 = plVar7 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004dac(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)auVar10._8_8_ == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  auVar14._8_8_ = 0x18;
  auVar14._0_8_ = &UNK_10f66c09c;
  return auVar14;
}



/* Entry: 10a8406b4; end: 10a840763;  */

long FUN_10a8406b4(long param_1)

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



/* Entry: 10a840764; end: 10a840b8b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a840764(long *param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  long **pplVar7;
  long *plVar8;
  long *plVar9;
  long **pplVar10;
  long *plVar11;
  long **pplVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x23;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  int aiStack_1e0 [2];
  undefined8 *puStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [16];
  int aiStack_1b0 [2];
  undefined8 **ppuStack_1a8;
  undefined8 **ppuStack_1a0;
  long *plStack_198;
  undefined1 *puStack_190;
  undefined4 **ppuStack_188;
  undefined4 *puStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined7 uStack_130;
  char cStack_129;
  long *plStack_128;
  long lStack_120;
  long *plStack_118;
  long *plStack_110;
  long lStack_108;
  long lStack_100;
  long alStack_f8 [8];
  byte bStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  long lStack_58;
  
  pplVar7 = &plStack_140;
  pplVar10 = &plStack_140;
  pplVar12 = &plStack_140;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = (long *)(long)*(char *)(param_4 + 0x37);
  if ((long)plVar9 < 0) {
    plVar9 = *(long **)(param_4 + 0x28);
  }
  plVar11 = (long *)0xffffffffffffffff;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
            (&plStack_140,param_1,plVar9,0xffffffffffffffff,&lStack_120);
  plVar15 = *(long **)(param_4 + 0x10);
  if (plVar15 == (long *)0x0 || (char)plVar15[8] != '\x02') {
    plVar8 = param_1;
    if ((plVar15 != (long *)0x0) && ((char)plVar15[8] == '\x01')) {
      pplVar7 = (long **)param_2;
      plVar8 = param_3;
      plVar11 = plVar15;
      (*(code *)*plVar15)(param_2,param_3,&plStack_140);
      plVar9 = (long *)pplVar10;
    }
  }
  else {
    plVar14 = plVar15;
    FUN_10a688b40();
    if (plVar14 == (long *)0x0) {
      plVar8 = (long *)0x0;
      pplVar7 = (long **)(long *)0x0;
      if (param_1 != (long *)0x0) {
        plStack_118 = (long *)plVar15[1];
        lStack_120 = *plVar15;
        if (plVar15[1] != 0) {
          plVar9 = (long *)(plVar15[1] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *plVar9 = *plVar9 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          func_0x000107c3192c(&plStack_110,*param_2,param_2[1]);
        }
        else {
          lStack_108 = param_2[1];
          plStack_110 = (long *)*param_2;
          lStack_100 = param_2[2];
        }
        param_2 = alStack_f8;
        bStack_b8 = 10;
        plStack_128 = param_2;
        func_0x00010a840fd8(&plStack_128,param_3,(char)param_3[8]);
        bStack_b8 = *(byte *)(param_3 + 8);
        if (cStack_129 < '\0') {
          func_0x000107c3192c(&plStack_b0,plStack_140,plStack_138);
        }
        else {
          plStack_a8 = plStack_138;
          plStack_b0 = plStack_140;
          uStack_a0 = CONCAT17(cStack_129,uStack_130);
        }
        lStack_98 = 0x10a8410f4;
        ppuStack_90 = &PTR_FUN_110c222b8;
        param_3 = (long *)0x88;
        __Znwm();
        param_3[1] = (long)plStack_118;
        *param_3 = lStack_120;
        lStack_120 = 0;
        plStack_118 = (long *)0x0;
        if (lStack_100 < 0) {
          func_0x000107c3192c(param_3 + 2,plStack_110,lStack_108);
        }
        else {
          param_3[3] = lStack_108;
          param_3[2] = (long)plStack_110;
          param_3[4] = lStack_100;
        }
        unaff_x23 = param_3 + 5;
        *(undefined1 *)(param_3 + 0xd) = 10;
        plVar9 = (long *)(ulong)bStack_b8;
        plStack_128 = unaff_x23;
        func_0x00010a840fd8(&plStack_128,param_2,plVar9);
        *(byte *)(param_3 + 0xd) = bStack_b8;
        if (uStack_a0 < 0) {
          plVar9 = plStack_a8;
          func_0x000107c3192c(param_3 + 0xe,plStack_b0,plStack_a8);
        }
        else {
          param_3[0xf] = (long)plStack_a8;
          param_3[0xe] = (long)plStack_b0;
          param_3[0x10] = uStack_a0;
        }
        plVar15 = &lStack_98;
        plVar8 = &lStack_98;
        plStack_88 = param_3;
        FUN_10a4634ec(param_1);
        (*(code *)*ppuStack_90)(&ppuStack_90);
        if (uStack_a0._7_1_ < '\0') {
          __ZdlPv(plStack_b0);
        }
        if (10 < (ulong)bStack_b8) goto LAB_10a840ad4;
        pplVar7 = (long **)param_2;
        (*(code *)(&PTR_FUN_110c17158)[bStack_b8])();
        if (lStack_100 < 0) {
          pplVar7 = (long **)plStack_110;
          __ZdlPv();
        }
        plVar14 = plStack_118;
        if (plStack_118 != (long *)0x0) {
          plVar1 = plStack_118 + 1;
          do {
            lVar13 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_118 + 0x10))(plStack_118);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pplVar7 = (long **)plVar14;
          }
        }
      }
    }
    else {
      *plVar14 = CONCAT44((int)((ulong)*plVar14 >> 0x20) + 1,(int)*plVar14 + 1);
      pplVar7 = (long **)*plVar15;
      plVar8 = param_2;
      plVar9 = param_3;
      FUN_10a840b8c(pplVar7,param_2,param_3);
      iVar5 = *(int *)((long)plVar14 + 4) + -1;
      *(int *)((long)plVar14 + 4) = iVar5;
      plVar11 = (long *)pplVar12;
      unaff_x23 = plVar14;
      if (iVar5 == 0) {
        *(undefined4 *)plVar14 = 0;
      }
    }
  }
  if (cStack_129 < '\0') {
    pplVar7 = (long **)plStack_140;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((ulong)*(byte *)(param_3 + 0xd) < 0xb) {
    (*(code *)(&PTR_FUN_110c17158)[*(byte *)(param_3 + 0xd)])(unaff_x23);
    if (*(char *)((long)param_3 + 0x27) < '\0') {
      __ZdlPv(*plVar15);
    }
    func_0x00010a004dac(param_3);
    __ZdlPv();
    FUN_10a840e14(&lStack_120);
    if (cStack_129 < '\0') {
      __ZdlPv(plStack_140);
    }
    plVar14 = (long *)pplVar7;
    __Unwind_Resume();
    pcStack_148 = FUN_10a840b8c;
    plStack_170 = plVar15;
    plStack_168 = param_3;
    plStack_160 = param_2;
    plStack_158 = (long *)pplVar7;
    puStack_150 = &stack0xfffffffffffffff0;
    func_0x000109884c0c(&uStack_1d0,plVar14 + 1,*plVar14);
    func_0x000109884820(&puStack_1e8,&uStack_1d0,*plVar14);
    if ((undefined8 *)CONCAT44(uStack_1cc,uStack_1d0) != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)CONCAT44(uStack_1cc,uStack_1d0))();
    }
    (**(code **)(*(long *)*plVar14 + 0x30))(&puStack_1f0);
    plVar14 = (long *)*plVar14;
    uVar2 = plVar8[1];
    plVar15 = (long *)*plVar8;
    if (-1 < (char)*(byte *)((long)plVar8 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)plVar8 + 0x17);
      plVar15 = plVar8;
    }
    (**(code **)(*plVar14 + 0x128))(auStack_1c8,plVar14,plVar15,uVar2);
    uStack_1d0 = 6;
    FUN_10a840e78(auStack_1c0,plVar14,plVar9);
    puStack_180 = &uStack_1d0;
    uVar2 = plVar11[1];
    plVar9 = (long *)*plVar11;
    if (-1 < (char)*(byte *)((long)plVar11 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)plVar11 + 0x17);
      plVar9 = plVar11;
    }
    (**(code **)(*plVar14 + 0x128))(&ppuStack_1a0,plVar14,plVar9,uVar2);
    aiStack_1b0[0] = 6;
    ppuStack_1a8 = ppuStack_1a0;
    uStack_178 = 3;
    (**(code **)(*plVar14 + 0x58))(plVar14);
    ppuStack_1a0 = &puStack_1e8;
    ppuStack_188 = &puStack_180;
    plStack_198 = plVar14;
    puStack_190 = (undefined1 *)&puStack_1f0;
    func_0x0001098960c0(aiStack_1e0);
    if ((3 < aiStack_1e0[0]) && (puStack_1d8 != (undefined8 *)0x0)) {
      (**(code **)*puStack_1d8)();
    }
    lVar13 = 0;
    do {
      if ((3 < *(int *)((long)aiStack_1b0 + lVar13)) &&
         (*(undefined8 **)((long)&ppuStack_1a8 + lVar13) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)((long)&ppuStack_1a8 + lVar13))();
      }
      lVar13 = lVar13 + -0x10;
    } while (lVar13 != -0x30);
    if (puStack_1f0 != (undefined8 *)0x0) {
      (**(code **)*puStack_1f0)();
    }
    if (puStack_1e8 != (undefined8 *)0x0) {
      (**(code **)*puStack_1e8)();
    }
    return;
  }
LAB_10a840ad4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a840ad8);
  (*pcVar6)();
}



/* Entry: 10a840b8c; end: 10a840e13;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a840b8c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  int aiStack_a0 [2];
  undefined8 *puStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  int aiStack_70 [2];
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&uStack_90,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_a8,&uStack_90,*param_1);
  if ((undefined8 *)CONCAT44(uStack_8c,uStack_90) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_8c,uStack_90))();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_b0);
  plVar4 = (long *)*param_1;
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  (**(code **)(*plVar4 + 0x128))(auStack_88,plVar4,puVar2,uVar1);
  uStack_90 = 6;
  FUN_10a840e78(auStack_80,plVar4,param_3);
  puStack_40 = &uStack_90;
  uVar1 = param_4[1];
  puVar2 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar2 = param_4;
  }
  (**(code **)(*plVar4 + 0x128))(&ppuStack_60,plVar4,puVar2,uVar1);
  aiStack_70[0] = 6;
  ppuStack_68 = ppuStack_60;
  uStack_38 = 3;
  (**(code **)(*plVar4 + 0x58))(plVar4);
  ppuStack_60 = &puStack_a8;
  ppuStack_48 = &puStack_40;
  plStack_58 = plVar4;
  puStack_50 = (undefined1 *)&puStack_b0;
  func_0x0001098960c0(aiStack_a0);
  if ((3 < aiStack_a0[0]) && (puStack_98 != (undefined8 *)0x0)) {
    (**(code **)*puStack_98)();
  }
  lVar3 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar3)) &&
       (*(undefined8 **)((long)&ppuStack_68 + lVar3) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&ppuStack_68 + lVar3))();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x30);
  if (puStack_b0 != (undefined8 *)0x0) {
    (**(code **)*puStack_b0)();
  }
  if (puStack_a8 != (undefined8 *)0x0) {
    (**(code **)*puStack_a8)();
  }
  return;
}



/* Entry: 10a840e14; end: 10a840e77;  */

long FUN_10a840e14(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  if (*(char *)(param_1 + 0x87) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x70));
  }
  if ((ulong)*(byte *)(param_1 + 0x68) < 0xb) {
    (*(code *)(&PTR_FUN_110c17158)[*(byte *)(param_1 + 0x68)])(param_1 + 0x28);
    if (*(char *)(param_1 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x10));
    }
    plVar6 = *(long **)(param_1 + 8);
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
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a840e78);
  (*pcVar4)();
}



/* Entry: 10a840e78; end: 10a840eb3;  */

void FUN_10a840e78(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 *extraout_x8;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plStack_60;
  long *plStack_58;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uStack_18;
  
  uVar4 = (ulong)*(byte *)(param_2 + 8);
  if (uVar4 != 10) {
    uStack_18 = param_1;
    FUN_10a840eb4(&uStack_18);
    return;
  }
  plVar3 = (long *)&UNK_10f634b57;
  func_0x00010988bd28();
  if (uVar4 == 0) {
    uVar4 = param_2[1];
    plVar2 = (long *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
      plVar2 = param_2;
    }
    (**(code **)(*(long *)*plVar3 + 0x128))(&stack0xffffffffffffffb8,(long *)*plVar3,plVar2,uVar4);
    *extraout_x8 = 6;
    *(undefined8 *)(extraout_x8 + 2) = in_stack_ffffffffffffffb8;
    return;
  }
  if (uVar4 == 1) {
    lVar5 = *param_2;
    *extraout_x8 = 3;
    *(long *)(extraout_x8 + 2) = lVar5;
    return;
  }
  if (uVar4 == 2) {
    lVar5 = *param_2;
    *extraout_x8 = 2;
    *(char *)(extraout_x8 + 2) = (char)lVar5;
    return;
  }
  if (uVar4 == 3) {
    plVar3 = (long *)*plVar3;
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x58))();
    if ((*(byte *)(plVar2 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a07afa8);
      (*pcVar1)();
    }
    plStack_60 = (long *)plVar2[4];
    if (plStack_60 == (long *)0x0) {
      func_0x000109899fd8(plVar2);
      plStack_60 = (long *)plVar2[4];
    }
    plVar2[4] = *plStack_60;
    plStack_60[1] = 0;
    plStack_60[2] = 0;
    *plStack_60 = (long)&PTR_FUN_110b9fae8;
    plStack_60[1] = *param_2;
    plStack_58 = plVar2;
    FUN_10a07afac(extraout_x8,plVar3,&plStack_60);
    plVar3 = plStack_60;
    plStack_60 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plStack_58);
    }
    return;
  }
  if (uVar4 == 4) {
    plVar3 = (long *)*plVar3;
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x58))();
    if ((*(byte *)(plVar2 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a088274);
      (*pcVar1)();
    }
    plStack_60 = (long *)plVar2[4];
    if (plStack_60 == (long *)0x0) {
      func_0x000109899fd8(plVar2);
      plStack_60 = (long *)plVar2[4];
    }
    plVar2[4] = *plStack_60;
    plStack_60[1] = 0;
    plStack_60[2] = 0;
    *plStack_60 = (long)&PTR_FUN_110b9fbb0;
    lVar5 = *param_2;
    *(int *)(plStack_60 + 2) = (int)param_2[1];
    plStack_60[1] = lVar5;
    plStack_58 = plVar2;
    FUN_10a065450(extraout_x8,plVar3,&plStack_60);
    plVar3 = plStack_60;
    plStack_60 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plStack_58);
    }
    return;
  }
  if (uVar4 == 5) {
    plVar3 = (long *)*plVar3;
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x58))();
    if ((*(byte *)(plVar2 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1fbe50);
      (*pcVar1)();
    }
    plStack_60 = (long *)plVar2[4];
    if (plStack_60 == (long *)0x0) {
      func_0x000109899fd8(plVar2);
      plStack_60 = (long *)plVar2[4];
    }
    plVar2[4] = *plStack_60;
    plStack_60[1] = 0;
    plStack_60[2] = 0;
    *plStack_60 = (long)&PTR_FUN_110bb3c30;
    lVar5 = *param_2;
    plStack_60[2] = param_2[1];
    plStack_60[1] = lVar5;
    plStack_58 = plVar2;
    FUN_10a1fb904(extraout_x8,plVar3,&plStack_60);
    plVar3 = plStack_60;
    plStack_60 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plStack_58);
    }
    return;
  }
  if (uVar4 != 6) {
    if (uVar4 == 7) {
      plVar3 = (long *)*plVar3;
      plVar2 = plVar3;
      (**(code **)(*plVar3 + 0x58))();
      if ((*(byte *)(plVar2 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3685f0);
        (*pcVar1)();
      }
      plStack_60 = (long *)plVar2[9];
      if (plStack_60 == (long *)0x0) {
        FUN_10a140784(plVar2 + 5);
        plStack_60 = (long *)plVar2[9];
      }
      plVar2[9] = *plStack_60;
      plStack_60[8] = 0;
      plStack_60[7] = 0;
      plStack_60[6] = 0;
      plStack_60[5] = 0;
      plStack_60[4] = 0;
      plStack_60[3] = 0;
      plStack_60[2] = 0;
      plStack_60[1] = 0;
      *plStack_60 = (long)&PTR_FUN_110bb3c68;
      lVar6 = param_2[1];
      lVar5 = *param_2;
      lVar8 = param_2[3];
      lVar7 = param_2[2];
      *(int *)(plStack_60 + 5) = (int)param_2[4];
      plStack_60[4] = lVar8;
      plStack_60[3] = lVar7;
      plStack_60[2] = lVar6;
      plStack_60[1] = lVar5;
      plStack_58 = plVar2;
      FUN_10a1f8534(extraout_x8,plVar3,&plStack_60);
      plVar3 = plStack_60;
      plStack_60 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plStack_58);
      }
      return;
    }
    plVar3 = (long *)*plVar3;
    if (uVar4 == 8) {
      plVar2 = plVar3;
      (**(code **)(*plVar3 + 0x58))();
      if ((*(byte *)(plVar2 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a368724);
        (*pcVar1)();
      }
      plStack_60 = (long *)plVar2[9];
      if (plStack_60 == (long *)0x0) {
        FUN_10a140784(plVar2 + 5);
        plStack_60 = (long *)plVar2[9];
      }
      plVar2[9] = *plStack_60;
      plStack_60[8] = 0;
      plStack_60[7] = 0;
      plStack_60[6] = 0;
      plStack_60[5] = 0;
      plStack_60[4] = 0;
      plStack_60[3] = 0;
      plStack_60[2] = 0;
      plStack_60[1] = 0;
      *plStack_60 = (long)&PTR_FUN_110ba79f8;
      lVar6 = param_2[1];
      lVar5 = *param_2;
      lVar8 = param_2[3];
      lVar7 = param_2[2];
      lVar10 = param_2[5];
      lVar9 = param_2[4];
      lVar11 = param_2[6];
      plStack_60[8] = param_2[7];
      plStack_60[7] = lVar11;
      plStack_60[6] = lVar10;
      plStack_60[5] = lVar9;
      plStack_60[4] = lVar8;
      plStack_60[3] = lVar7;
      plStack_60[2] = lVar6;
      plStack_60[1] = lVar5;
      plStack_58 = plVar2;
      FUN_10a1406a0(extraout_x8,plVar3,&plStack_60);
      plVar3 = plStack_60;
      plStack_60 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plStack_58);
      }
      return;
    }
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x58))();
    if ((*(byte *)(plVar2 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a07a408);
      (*pcVar1)();
    }
    plStack_60 = (long *)plVar2[4];
    if (plStack_60 == (long *)0x0) {
      func_0x000109899fd8(plVar2);
      plStack_60 = (long *)plVar2[4];
    }
    plVar2[4] = *plStack_60;
    plStack_60[1] = 0;
    plStack_60[2] = 0;
    *plStack_60 = (long)&PTR_FUN_110b9fbe8;
    lVar5 = *param_2;
    plStack_60[2] = param_2[1];
    plStack_60[1] = lVar5;
    plStack_58 = plVar2;
    FUN_10a07a40c(extraout_x8,plVar3,&plStack_60);
    plVar3 = plStack_60;
    plStack_60 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plStack_58);
    }
    return;
  }
  plVar3 = (long *)*plVar3;
  plVar2 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3683b0);
    (*pcVar1)();
  }
  plStack_60 = (long *)plVar2[4];
  if (plStack_60 == (long *)0x0) {
    func_0x000109899fd8(plVar2);
    plStack_60 = (long *)plVar2[4];
  }
  plVar2[4] = *plStack_60;
  plStack_60[1] = 0;
  plStack_60[2] = 0;
  *plStack_60 = (long)&PTR_FUN_110bc7bb8;
  lVar5 = *param_2;
  plStack_60[2] = param_2[1];
  plStack_60[1] = lVar5;
  plStack_58 = plVar2;
  FUN_10a3683b4(extraout_x8,plVar3,&plStack_60);
  plVar3 = plStack_60;
  plStack_60 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plStack_58);
  }
  return;
}



/* Entry: 10a840eb4; end: 10a840efb;  */

void FUN_10a840eb4(undefined4 *param_1,long *param_2,long *param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plStack_40;
  long *plStack_38;
  undefined8 in_stack_ffffffffffffffd8;
  
  if (param_4 == 0) {
    uVar1 = param_3[1];
    plVar3 = (long *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
      plVar3 = param_3;
    }
    (**(code **)(*(long *)*param_2 + 0x128))(&stack0xffffffffffffffd8,(long *)*param_2,plVar3,uVar1)
    ;
    *param_1 = 6;
    *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffd8;
    return;
  }
  if (param_4 == 1) {
    lVar4 = *param_3;
    *param_1 = 3;
    *(long *)(param_1 + 2) = lVar4;
    return;
  }
  if (param_4 == 2) {
    lVar4 = *param_3;
    *param_1 = 2;
    *(char *)(param_1 + 2) = (char)lVar4;
    return;
  }
  if (param_4 == 3) {
    param_2 = (long *)*param_2;
    plVar3 = param_2;
    (**(code **)(*param_2 + 0x58))();
    if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a07afa8);
      (*pcVar2)();
    }
    plStack_40 = (long *)plVar3[4];
    if (plStack_40 == (long *)0x0) {
      func_0x000109899fd8(plVar3);
      plStack_40 = (long *)plVar3[4];
    }
    plVar3[4] = *plStack_40;
    plStack_40[1] = 0;
    plStack_40[2] = 0;
    *plStack_40 = (long)&PTR_FUN_110b9fae8;
    plStack_40[1] = *param_3;
    plStack_38 = plVar3;
    FUN_10a07afac(param_1,param_2,&plStack_40);
    plVar3 = plStack_40;
    plStack_40 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plStack_38);
    }
    return;
  }
  if (param_4 == 4) {
    param_2 = (long *)*param_2;
    plVar3 = param_2;
    (**(code **)(*param_2 + 0x58))();
    if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a088274);
      (*pcVar2)();
    }
    plStack_40 = (long *)plVar3[4];
    if (plStack_40 == (long *)0x0) {
      func_0x000109899fd8(plVar3);
      plStack_40 = (long *)plVar3[4];
    }
    plVar3[4] = *plStack_40;
    plStack_40[1] = 0;
    plStack_40[2] = 0;
    *plStack_40 = (long)&PTR_FUN_110b9fbb0;
    lVar4 = *param_3;
    *(int *)(plStack_40 + 2) = (int)param_3[1];
    plStack_40[1] = lVar4;
    plStack_38 = plVar3;
    FUN_10a065450(param_1,param_2,&plStack_40);
    plVar3 = plStack_40;
    plStack_40 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plStack_38);
    }
    return;
  }
  if (param_4 == 5) {
    param_2 = (long *)*param_2;
    plVar3 = param_2;
    (**(code **)(*param_2 + 0x58))();
    if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a1fbe50);
      (*pcVar2)();
    }
    plStack_40 = (long *)plVar3[4];
    if (plStack_40 == (long *)0x0) {
      func_0x000109899fd8(plVar3);
      plStack_40 = (long *)plVar3[4];
    }
    plVar3[4] = *plStack_40;
    plStack_40[1] = 0;
    plStack_40[2] = 0;
    *plStack_40 = (long)&PTR_FUN_110bb3c30;
    lVar4 = *param_3;
    plStack_40[2] = param_3[1];
    plStack_40[1] = lVar4;
    plStack_38 = plVar3;
    FUN_10a1fb904(param_1,param_2,&plStack_40);
    plVar3 = plStack_40;
    plStack_40 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plStack_38);
    }
    return;
  }
  if (param_4 == 6) {
    param_2 = (long *)*param_2;
    plVar3 = param_2;
    (**(code **)(*param_2 + 0x58))();
    if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a3683b0);
      (*pcVar2)();
    }
    plStack_40 = (long *)plVar3[4];
    if (plStack_40 == (long *)0x0) {
      func_0x000109899fd8(plVar3);
      plStack_40 = (long *)plVar3[4];
    }
    plVar3[4] = *plStack_40;
    plStack_40[1] = 0;
    plStack_40[2] = 0;
    *plStack_40 = (long)&PTR_FUN_110bc7bb8;
    lVar4 = *param_3;
    plStack_40[2] = param_3[1];
    plStack_40[1] = lVar4;
    plStack_38 = plVar3;
    FUN_10a3683b4(param_1,param_2,&plStack_40);
    plVar3 = plStack_40;
    plStack_40 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plStack_38);
    }
    return;
  }
  if (param_4 != 7) {
    param_2 = (long *)*param_2;
    if (param_4 != 8) {
      plVar3 = param_2;
      (**(code **)(*param_2 + 0x58))();
      if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a07a408);
        (*pcVar2)();
      }
      plStack_40 = (long *)plVar3[4];
      if (plStack_40 == (long *)0x0) {
        func_0x000109899fd8(plVar3);
        plStack_40 = (long *)plVar3[4];
      }
      plVar3[4] = *plStack_40;
      plStack_40[1] = 0;
      plStack_40[2] = 0;
      *plStack_40 = (long)&PTR_FUN_110b9fbe8;
      lVar4 = *param_3;
      plStack_40[2] = param_3[1];
      plStack_40[1] = lVar4;
      plStack_38 = plVar3;
      FUN_10a07a40c(param_1,param_2,&plStack_40);
      plVar3 = plStack_40;
      plStack_40 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plStack_38);
      }
      return;
    }
    plVar3 = param_2;
    (**(code **)(*param_2 + 0x58))();
    if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a368724);
      (*pcVar2)();
    }
    plStack_40 = (long *)plVar3[9];
    if (plStack_40 == (long *)0x0) {
      FUN_10a140784(plVar3 + 5);
      plStack_40 = (long *)plVar3[9];
    }
    plVar3[9] = *plStack_40;
    plStack_40[8] = 0;
    plStack_40[7] = 0;
    plStack_40[6] = 0;
    plStack_40[5] = 0;
    plStack_40[4] = 0;
    plStack_40[3] = 0;
    plStack_40[2] = 0;
    plStack_40[1] = 0;
    *plStack_40 = (long)&PTR_FUN_110ba79f8;
    lVar5 = param_3[1];
    lVar4 = *param_3;
    lVar7 = param_3[3];
    lVar6 = param_3[2];
    lVar9 = param_3[5];
    lVar8 = param_3[4];
    lVar10 = param_3[6];
    plStack_40[8] = param_3[7];
    plStack_40[7] = lVar10;
    plStack_40[6] = lVar9;
    plStack_40[5] = lVar8;
    plStack_40[4] = lVar7;
    plStack_40[3] = lVar6;
    plStack_40[2] = lVar5;
    plStack_40[1] = lVar4;
    plStack_38 = plVar3;
    FUN_10a1406a0(param_1,param_2,&plStack_40);
    plVar3 = plStack_40;
    plStack_40 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plStack_38);
    }
    return;
  }
  param_2 = (long *)*param_2;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a3685f0);
    (*pcVar2)();
  }
  plStack_40 = (long *)plVar3[9];
  if (plStack_40 == (long *)0x0) {
    FUN_10a140784(plVar3 + 5);
    plStack_40 = (long *)plVar3[9];
  }
  plVar3[9] = *plStack_40;
  plStack_40[8] = 0;
  plStack_40[7] = 0;
  plStack_40[6] = 0;
  plStack_40[5] = 0;
  plStack_40[4] = 0;
  plStack_40[3] = 0;
  plStack_40[2] = 0;
  plStack_40[1] = 0;
  *plStack_40 = (long)&PTR_FUN_110bb3c68;
  lVar5 = param_3[1];
  lVar4 = *param_3;
  lVar7 = param_3[3];
  lVar6 = param_3[2];
  *(int *)(plStack_40 + 5) = (int)param_3[4];
  plStack_40[4] = lVar7;
  plStack_40[3] = lVar6;
  plStack_40[2] = lVar5;
  plStack_40[1] = lVar4;
  plStack_38 = plVar3;
  FUN_10a1f8534(param_1,param_2,&plStack_40);
  plVar3 = plStack_40;
  plStack_40 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plStack_38);
  }
  return;
}



/* Entry: 10a840efc; end: 10a840f5f;  */

void FUN_10a840efc(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uStack_28;
  
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  (**(code **)(*(long *)*param_2 + 0x128))(&uStack_28,(long *)*param_2,puVar2,uVar1);
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = uStack_28;
  return;
}



/* Entry: 10a840f60; end: 10a841107;  */

void FUN_10a840f60(undefined8 param_1,long *param_2,long *param_3,long param_4)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plStack_40;
  long *plStack_38;
  
  if (param_4 == 3) {
    param_2 = (long *)*param_2;
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x58))();
    if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
      plStack_40 = (long *)plVar2[4];
      if (plStack_40 == (long *)0x0) {
        func_0x000109899fd8(plVar2);
        plStack_40 = (long *)plVar2[4];
      }
      plVar2[4] = *plStack_40;
      plStack_40[1] = 0;
      plStack_40[2] = 0;
      *plStack_40 = (long)&PTR_FUN_110b9fae8;
      plStack_40[1] = *param_3;
      plStack_38 = plVar2;
      FUN_10a07afac(param_1,param_2,&plStack_40);
      plVar2 = plStack_40;
      plStack_40 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plStack_38);
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a07afa8);
    (*pcVar1)();
  }
  if (param_4 == 4) {
    param_2 = (long *)*param_2;
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x58))();
    if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
      plStack_40 = (long *)plVar2[4];
      if (plStack_40 == (long *)0x0) {
        func_0x000109899fd8(plVar2);
        plStack_40 = (long *)plVar2[4];
      }
      plVar2[4] = *plStack_40;
      plStack_40[1] = 0;
      plStack_40[2] = 0;
      *plStack_40 = (long)&PTR_FUN_110b9fbb0;
      lVar3 = *param_3;
      *(int *)(plStack_40 + 2) = (int)param_3[1];
      plStack_40[1] = lVar3;
      plStack_38 = plVar2;
      FUN_10a065450(param_1,param_2,&plStack_40);
      plVar2 = plStack_40;
      plStack_40 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plStack_38);
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a088274);
    (*pcVar1)();
  }
  if (param_4 == 5) {
    param_2 = (long *)*param_2;
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x58))();
    if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
      plStack_40 = (long *)plVar2[4];
      if (plStack_40 == (long *)0x0) {
        func_0x000109899fd8(plVar2);
        plStack_40 = (long *)plVar2[4];
      }
      plVar2[4] = *plStack_40;
      plStack_40[1] = 0;
      plStack_40[2] = 0;
      *plStack_40 = (long)&PTR_FUN_110bb3c30;
      lVar3 = *param_3;
      plStack_40[2] = param_3[1];
      plStack_40[1] = lVar3;
      plStack_38 = plVar2;
      FUN_10a1fb904(param_1,param_2,&plStack_40);
      plVar2 = plStack_40;
      plStack_40 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plStack_38);
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1fbe50);
    (*pcVar1)();
  }
  if (param_4 == 6) {
    param_2 = (long *)*param_2;
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x58))();
    if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
      plStack_40 = (long *)plVar2[4];
      if (plStack_40 == (long *)0x0) {
        func_0x000109899fd8(plVar2);
        plStack_40 = (long *)plVar2[4];
      }
      plVar2[4] = *plStack_40;
      plStack_40[1] = 0;
      plStack_40[2] = 0;
      *plStack_40 = (long)&PTR_FUN_110bc7bb8;
      lVar3 = *param_3;
      plStack_40[2] = param_3[1];
      plStack_40[1] = lVar3;
      plStack_38 = plVar2;
      FUN_10a3683b4(param_1,param_2,&plStack_40);
      plVar2 = plStack_40;
      plStack_40 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plStack_38);
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3683b0);
    (*pcVar1)();
  }
  if (param_4 == 7) {
    param_2 = (long *)*param_2;
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x58))();
    if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
      plStack_40 = (long *)plVar2[9];
      if (plStack_40 == (long *)0x0) {
        FUN_10a140784(plVar2 + 5);
        plStack_40 = (long *)plVar2[9];
      }
      plVar2[9] = *plStack_40;
      plStack_40[8] = 0;
      plStack_40[7] = 0;
      plStack_40[6] = 0;
      plStack_40[5] = 0;
      plStack_40[4] = 0;
      plStack_40[3] = 0;
      plStack_40[2] = 0;
      plStack_40[1] = 0;
      *plStack_40 = (long)&PTR_FUN_110bb3c68;
      lVar4 = param_3[1];
      lVar3 = *param_3;
      lVar6 = param_3[3];
      lVar5 = param_3[2];
      *(int *)(plStack_40 + 5) = (int)param_3[4];
      plStack_40[4] = lVar6;
      plStack_40[3] = lVar5;
      plStack_40[2] = lVar4;
      plStack_40[1] = lVar3;
      plStack_38 = plVar2;
      FUN_10a1f8534(param_1,param_2,&plStack_40);
      plVar2 = plStack_40;
      plStack_40 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plStack_38);
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3685f0);
    (*pcVar1)();
  }
  param_2 = (long *)*param_2;
  if (param_4 != 8) {
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x58))();
    if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
      plStack_40 = (long *)plVar2[4];
      if (plStack_40 == (long *)0x0) {
        func_0x000109899fd8(plVar2);
        plStack_40 = (long *)plVar2[4];
      }
      plVar2[4] = *plStack_40;
      plStack_40[1] = 0;
      plStack_40[2] = 0;
      *plStack_40 = (long)&PTR_FUN_110b9fbe8;
      lVar3 = *param_3;
      plStack_40[2] = param_3[1];
      plStack_40[1] = lVar3;
      plStack_38 = plVar2;
      FUN_10a07a40c(param_1,param_2,&plStack_40);
      plVar2 = plStack_40;
      plStack_40 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plStack_38);
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a07a408);
    (*pcVar1)();
  }
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plStack_40 = (long *)plVar2[9];
    if (plStack_40 == (long *)0x0) {
      FUN_10a140784(plVar2 + 5);
      plStack_40 = (long *)plVar2[9];
    }
    plVar2[9] = *plStack_40;
    plStack_40[8] = 0;
    plStack_40[7] = 0;
    plStack_40[6] = 0;
    plStack_40[5] = 0;
    plStack_40[4] = 0;
    plStack_40[3] = 0;
    plStack_40[2] = 0;
    plStack_40[1] = 0;
    *plStack_40 = (long)&PTR_FUN_110ba79f8;
    lVar4 = param_3[1];
    lVar3 = *param_3;
    lVar6 = param_3[3];
    lVar5 = param_3[2];
    lVar8 = param_3[5];
    lVar7 = param_3[4];
    lVar9 = param_3[6];
    plStack_40[8] = param_3[7];
    plStack_40[7] = lVar9;
    plStack_40[6] = lVar8;
    plStack_40[5] = lVar7;
    plStack_40[4] = lVar6;
    plStack_40[3] = lVar5;
    plStack_40[2] = lVar4;
    plStack_40[1] = lVar3;
    plStack_38 = plVar2;
    FUN_10a1406a0(param_1,param_2,&plStack_40);
    plVar2 = plStack_40;
    plStack_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plStack_38);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a368724);
  (*pcVar1)();
}



/* Entry: 10a841108; end: 10a84117f;  */

void FUN_10a841108(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    return;
  }
  if (*(char *)(lVar2 + 0x87) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar2 + 0x70));
  }
  if ((ulong)*(byte *)(lVar2 + 0x68) < 0xb) {
    (*(code *)(&PTR_FUN_110c17158)[*(byte *)(lVar2 + 0x68)])(lVar2 + 0x28);
    if (*(char *)(lVar2 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar2 + 0x10));
    }
    func_0x00010a004dac(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a841180);
  (*pcVar1)();
}



/* Entry: 10a841180; end: 10a841197;  */

void FUN_10a841180(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a841198; end: 10a8411c7;  */

long FUN_10a841198(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a8411c8; end: 10a8411fb;  */

void FUN_10a8411c8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110c222d0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 10a8411fc; end: 10a841287;  */

void FUN_10a8411fc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_110c222d0;
  lVar4 = *(long *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(char *)(param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(param_1 + 3,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20))
    ;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    param_1[5] = *(undefined8 *)(param_2 + 0x28);
    param_1[4] = uVar6;
    param_1[3] = uVar5;
  }
  return;
}



/* Entry: 10a841288; end: 10a8412df;  */

long FUN_10a841288(long param_1)

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



/* Entry: 10a8412e0; end: 10a8416cb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a8412e0(code *******param_1,code *******param_2,code *******param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  code *******pppppppcVar4;
  code *******pppppppcVar5;
  code *******pppppppcVar6;
  code *******pppppppcVar7;
  code *******pppppppcVar8;
  code ******ppppppcVar9;
  code *******pppppppcVar10;
  long lVar11;
  code ******ppppppcVar12;
  code *******unaff_x23;
  code ******unaff_x24;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  int aiStack_1d0 [2];
  undefined8 *puStack_1c8;
  undefined8 *apuStack_1c0 [2];
  undefined4 uStack_1b0;
  code ***pppcStack_1a8;
  int aiStack_1a0 [2];
  code ***pppcStack_198;
  code ***pppcStack_190;
  code ******ppppppcStack_188;
  undefined1 *puStack_180;
  undefined8 ***pppuStack_178;
  undefined8 **ppuStack_170;
  undefined8 uStack_168;
  code ******ppppppcStack_160;
  code *******pppppppcStack_158;
  code *******pppppppcStack_150;
  code *******pppppppcStack_148;
  code *******pppppppcStack_140;
  code *******pppppppcStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  code *******pppppppcStack_118;
  code *******pppppppcStack_110;
  undefined7 uStack_108;
  char cStack_101;
  code ******ppppppcStack_100;
  code *******pppppppcStack_f8;
  code *****pppppcStack_f0;
  code *******pppppppcStack_e8;
  undefined8 uStack_e0;
  code ******ppppppcStack_d8;
  code *******pppppppcStack_d0;
  code ******ppppppcStack_c8;
  code *******pppppppcStack_c0;
  code *******pppppppcStack_b8;
  undefined8 uStack_b0;
  code *******pppppppcStack_a0;
  code ******ppppppcStack_98;
  undefined **ppuStack_90;
  code *******pppppppcStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppcVar7 = (code *******)(long)*(char *)(param_4 + 0x37);
  if ((long)pppppppcVar7 < 0) {
    pppppppcVar7 = *(code ********)(param_4 + 0x28);
  }
  pppppppcVar5 = (code *******)&pppppppcStack_118;
  pppppppcVar8 = (code *******)0xffffffffffffffff;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_();
  pppppppcVar10 = *(code ********)(param_4 + 0x10);
  if (pppppppcVar10 == (code *******)0x0 || *(char *)(pppppppcVar10 + 8) != '\x02') {
    pppppppcVar6 = param_1;
    if ((pppppppcVar10 != (code *******)0x0) && (*(char *)(pppppppcVar10 + 8) == '\x01')) {
      pppppppcVar7 = (code *******)&pppppppcStack_118;
      pppppppcVar5 = param_2;
      pppppppcVar6 = param_3;
      pppppppcVar8 = pppppppcVar10;
      (*(code *)*pppppppcVar10)();
    }
  }
  else {
    pppppppcVar4 = pppppppcVar10;
    FUN_10a688b40();
    if (pppppppcVar4 == (code *******)0x0) {
      pppppppcVar5 = (code *******)0x0;
      pppppppcVar6 = (code *******)0x0;
      if (param_1 != (code *******)0x0) {
        pppppppcStack_f8 = (code *******)pppppppcVar10[1];
        ppppppcStack_100 = *pppppppcVar10;
        if (pppppppcVar10[1] != (code ******)0x0) {
          ppppppcVar9 = pppppppcVar10[1] + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppppppcVar9,0x10);
            if (bVar2) {
              *ppppppcVar9 = (code *****)((long)*ppppppcVar9 + 1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        unaff_x23 = &ppppppcStack_100;
        pppppcStack_f0 = (code *****)0x0;
        pppppppcStack_e8 = (code *******)0x0;
        uStack_e0 = 0;
        FUN_10a841c20(&pppppcStack_f0,*param_2,param_2[1],
                      ((long)param_2[1] - (long)*param_2 >> 3) * -0x5555555555555555);
        if (*(char *)((long)param_3 + 0x17) < '\0') {
          func_0x000107c3192c(&ppppppcStack_d8,*param_3,param_3[1]);
        }
        else {
          pppppppcStack_d0 = (code *******)param_3[1];
          ppppppcStack_d8 = *param_3;
          ppppppcStack_c8 = param_3[2];
        }
        unaff_x24 = (code ******)&ppppppcStack_100;
        if (cStack_101 < '\0') {
          func_0x000107c3192c(&pppppppcStack_c0,pppppppcStack_118,pppppppcStack_110);
        }
        else {
          pppppppcStack_b8 = pppppppcStack_110;
          pppppppcStack_c0 = pppppppcStack_118;
          uStack_b0 = (code ******)CONCAT17(cStack_101,uStack_108);
        }
        ppppppcStack_98 = (code ******)FUN_10a842180;
        ppuStack_90 = &PTR_FUN_110c222f0;
        param_3 = (code *******)0x58;
        __Znwm();
        param_3[1] = (code ******)pppppppcStack_f8;
        *param_3 = ppppppcStack_100;
        ppppppcStack_100 = (code ******)0x0;
        pppppppcStack_f8 = (code *******)0x0;
        param_3[2] = (code ******)0x0;
        param_3[3] = (code ******)0x0;
        param_3[4] = (code ******)0x0;
        pppppppcVar8 = (code *******)
                       (((long)pppppppcStack_e8 - (long)pppppcStack_f0 >> 3) * -0x5555555555555555);
        pppppppcVar7 = pppppppcStack_e8;
        FUN_10a841c20(param_3 + 2);
        if ((long)ppppppcStack_c8 < 0) {
          pppppppcVar7 = pppppppcStack_d0;
          func_0x000107c3192c(param_3 + 5,ppppppcStack_d8);
        }
        else {
          param_3[6] = (code ******)pppppppcStack_d0;
          param_3[5] = ppppppcStack_d8;
          param_3[7] = ppppppcStack_c8;
        }
        if ((long)uStack_b0 < 0) {
          pppppppcVar7 = pppppppcStack_b8;
          func_0x000107c3192c(param_3 + 8,pppppppcStack_c0);
        }
        else {
          param_3[9] = (code ******)pppppppcStack_b8;
          param_3[8] = (code ******)pppppppcStack_c0;
          param_3[10] = uStack_b0;
        }
        param_2 = &ppppppcStack_98;
        pppppppcVar6 = &ppppppcStack_98;
        pppppppcStack_88 = param_3;
        FUN_10a4634ec(param_1);
        (*(code *)*ppuStack_90)(&ppuStack_90);
        if (uStack_b0._7_1_ < '\0') {
          __ZdlPv(pppppppcStack_c0);
        }
        if ((long)ppppppcStack_c8 < 0) {
          __ZdlPv(ppppppcStack_d8);
        }
        pppppppcVar5 = (code *******)&pppppppcStack_a0;
        pppppppcStack_a0 = (code *******)&pppppcStack_f0;
        FUN_10a842110();
        pppppppcVar10 = pppppppcStack_f8;
        if (pppppppcStack_f8 != (code *******)0x0) {
          pppppppcVar4 = pppppppcStack_f8 + 1;
          do {
            ppppppcVar9 = *pppppppcVar4;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppppppcVar4,0x10);
            if (bVar2) {
              *pppppppcVar4 = (code ******)((long)ppppppcVar9 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (ppppppcVar9 == (code ******)0x0) {
            (*(code *)(*pppppppcStack_f8)[2])(pppppppcStack_f8);
            pppppppcVar5 = pppppppcVar10;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
      }
    }
    else {
      *pppppppcVar4 =
           (code ******)CONCAT44((int)((ulong)*pppppppcVar4 >> 0x20) + 1,(int)*pppppppcVar4 + 1);
      pppppppcVar5 = (code *******)*pppppppcVar10;
      pppppppcVar8 = (code *******)&pppppppcStack_118;
      pppppppcVar6 = param_2;
      pppppppcVar7 = param_3;
      FUN_10a8416cc();
      iVar3 = *(int *)((long)pppppppcVar4 + 4) + -1;
      *(int *)((long)pppppppcVar4 + 4) = iVar3;
      unaff_x23 = pppppppcVar4;
      if (iVar3 == 0) {
        *(undefined4 *)pppppppcVar4 = 0;
      }
    }
  }
  if (cStack_101 < '\0') {
    pppppppcVar5 = pppppppcStack_118;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (*(char *)((long)param_3 + 0x3f) < '\0') {
      __ZdlPv(param_3[5]);
    }
    pppppppcStack_a0 = param_2;
    FUN_10a842110(&pppppppcStack_a0);
    func_0x00010a004dac(param_3);
    __ZdlPv();
    FUN_10a841974(&ppppppcStack_100);
    if (cStack_101 < '\0') {
      __ZdlPv(pppppppcStack_118);
    }
    pppppppcVar4 = pppppppcVar5;
    __Unwind_Resume();
    pcStack_128 = FUN_10a8416cc;
    ppppppcStack_160 = unaff_x24;
    pppppppcStack_158 = unaff_x23;
    pppppppcStack_150 = param_2;
    pppppppcStack_148 = param_3;
    pppppppcStack_140 = pppppppcVar5;
    pppppppcStack_138 = pppppppcVar10;
    puStack_130 = &stack0xfffffffffffffff0;
    func_0x000109884c0c(apuStack_1c0,pppppppcVar4 + 1,*pppppppcVar4);
    func_0x000109884820(&puStack_1d8,apuStack_1c0,*pppppppcVar4);
    if (apuStack_1c0[0] != (undefined8 *)0x0) {
      (**(code **)*apuStack_1c0[0])();
    }
    (*(code *)(**pppppppcVar4)[6])(&puStack_1e0);
    ppppppcVar12 = *pppppppcVar4;
    FUN_10a8419d0(apuStack_1c0,ppppppcVar12,*pppppppcVar6,
                  ((long)pppppppcVar6[1] - (long)*pppppppcVar6 >> 3) * -0x5555555555555555);
    ppppppcVar9 = pppppppcVar7[1];
    pppppppcVar5 = (code *******)*pppppppcVar7;
    if (-1 < (char)*(byte *)((long)pppppppcVar7 + 0x17)) {
      ppppppcVar9 = (code ******)(ulong)*(byte *)((long)pppppppcVar7 + 0x17);
      pppppppcVar5 = pppppppcVar7;
    }
    (*(code *)(*ppppppcVar12)[0x25])(&pppcStack_190,ppppppcVar12,pppppppcVar5,ppppppcVar9);
    uStack_1b0 = 6;
    pppcStack_1a8 = pppcStack_190;
    ppuStack_170 = apuStack_1c0;
    ppppppcVar9 = pppppppcVar8[1];
    pppppppcVar7 = (code *******)*pppppppcVar8;
    if (-1 < (char)*(byte *)((long)pppppppcVar8 + 0x17)) {
      ppppppcVar9 = (code ******)(ulong)*(byte *)((long)pppppppcVar8 + 0x17);
      pppppppcVar7 = pppppppcVar8;
    }
    (*(code *)(*ppppppcVar12)[0x25])(&pppcStack_190,ppppppcVar12,pppppppcVar7,ppppppcVar9);
    aiStack_1a0[0] = 6;
    pppcStack_198 = pppcStack_190;
    uStack_168 = 3;
    (*(code *)(*ppppppcVar12)[0xb])(ppppppcVar12);
    pppcStack_190 = (code ***)&puStack_1d8;
    pppuStack_178 = &ppuStack_170;
    ppppppcStack_188 = ppppppcVar12;
    puStack_180 = (undefined1 *)&puStack_1e0;
    func_0x0001098960c0(aiStack_1d0);
    if ((3 < aiStack_1d0[0]) && (puStack_1c8 != (undefined8 *)0x0)) {
      (**(code **)*puStack_1c8)();
    }
    lVar11 = 0;
    do {
      if ((3 < *(int *)((long)aiStack_1a0 + lVar11)) &&
         (*(undefined8 **)((long)&pppcStack_198 + lVar11) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)((long)&pppcStack_198 + lVar11))();
      }
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != -0x30);
    if (puStack_1e0 != (undefined8 *)0x0) {
      (**(code **)*puStack_1e0)();
    }
    if (puStack_1d8 != (undefined8 *)0x0) {
      (**(code **)*puStack_1d8)();
    }
    return;
  }
  return;
}



/* Entry: 10a8416cc; end: 10a841973;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a8416cc(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  int aiStack_b0 [2];
  undefined8 *puStack_a8;
  undefined8 *apuStack_a0 [2];
  undefined4 uStack_90;
  undefined8 **ppuStack_88;
  int aiStack_80 [2];
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 ***pppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  func_0x000109884c0c(apuStack_a0,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_b8,apuStack_a0,*param_1);
  if (apuStack_a0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_a0[0])();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_c0);
  plVar4 = (long *)*param_1;
  FUN_10a8419d0(apuStack_a0,plVar4,*param_2,(param_2[1] - *param_2 >> 3) * -0x5555555555555555);
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  (**(code **)(*plVar4 + 0x128))(&ppuStack_70,plVar4,puVar2,uVar1);
  uStack_90 = 6;
  ppuStack_88 = ppuStack_70;
  ppuStack_50 = apuStack_a0;
  uVar1 = param_4[1];
  puVar2 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar2 = param_4;
  }
  (**(code **)(*plVar4 + 0x128))(&ppuStack_70,plVar4,puVar2,uVar1);
  aiStack_80[0] = 6;
  ppuStack_78 = ppuStack_70;
  uStack_48 = 3;
  (**(code **)(*plVar4 + 0x58))(plVar4);
  ppuStack_70 = &puStack_b8;
  pppuStack_58 = &ppuStack_50;
  plStack_68 = plVar4;
  puStack_60 = (undefined1 *)&puStack_c0;
  func_0x0001098960c0(aiStack_b0);
  if ((3 < aiStack_b0[0]) && (puStack_a8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_a8)();
  }
  lVar3 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar3)) &&
       (*(undefined8 **)((long)&ppuStack_78 + lVar3) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&ppuStack_78 + lVar3))();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x30);
  if (puStack_c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_c0)();
  }
  if (puStack_b8 != (undefined8 *)0x0) {
    (**(code **)*puStack_b8)();
  }
  return;
}



/* Entry: 10a841974; end: 10a8419cf;  */

void FUN_10a841974(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0x57) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x40));
  }
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  lStack_28 = param_1 + 0x10;
  FUN_10a842110(&lStack_28);
  func_0x00010a004dac(param_1);
  return;
}



/* Entry: 10a8419d0; end: 10a841b07;  */

void FUN_10a8419d0(undefined4 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  (**(code **)(*param_2 + 600))(&iStack_58,param_2,param_4);
  uStack_48 = CONCAT44(uStack_54,iStack_58);
  if (param_4 != 0) {
    lVar1 = 0;
    plVar2 = (long *)(param_3 + 8);
    do {
      FUN_10a841b08(&iStack_58,param_2,plVar2[-1],(*plVar2 - plVar2[-1] >> 3) * -0x71c71c71c71c71c7)
      ;
      (**(code **)(*param_2 + 0x290))(param_2,&uStack_48,lVar1,&iStack_58);
      if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
        (**(code **)*puStack_50)();
      }
      plVar2 = plVar2 + 3;
      lVar1 = lVar1 + 1;
    } while (param_4 != lVar1);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  return;
}



/* Entry: 10a841b08; end: 10a841c1f;  */

void FUN_10a841b08(undefined4 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  (**(code **)(*param_2 + 600))(&iStack_58,param_2,param_4);
  uStack_48 = CONCAT44(uStack_54,iStack_58);
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_10a840e78(&iStack_58,param_2,param_3);
      (**(code **)(*param_2 + 0x290))(param_2,&uStack_48,lVar1,&iStack_58);
      if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
        (**(code **)*puStack_50)();
      }
      lVar1 = lVar1 + 1;
      param_3 = param_3 + 0x48;
    } while (param_4 != lVar1);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  return;
}



/* Entry: 10a841c20; end: 10a841ca3;  */

void FUN_10a841c20(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a841ca4(param_1,param_4);
    lVar1 = param_1;
    FUN_10a841d44(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a841ca4; end: 10a841ceb;  */

undefined1  [16] FUN_10a841ca4(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined1 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    plVar1 = param_1;
    FUN_10a841d00();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 3);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10a841cec();
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    lVar3 = (long)param_2 * 0x18;
    __Znwm(lVar3);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar3;
    return auVar5;
  }
  func_0x000109ffded8();
  ppuStack_a8 = &puStack_90;
  ppuStack_a0 = &puStack_88;
  uStack_98 = 0;
  puStack_b0 = puVar2;
  plVar1 = param_2;
  puStack_90 = param_4;
  for (; puStack_88 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    plVar1 = (long *)*param_2;
    FUN_10a841e04(param_4,plVar1,param_2[1],(param_2[1] - (long)plVar1 >> 3) * -0x71c71c71c71c71c7);
    param_4 = puStack_88 + 3;
  }
  uStack_98 = 1;
  FUN_10a842094(&puStack_b0);
  auVar6._8_8_ = plVar1;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a841cec; end: 10a841cff;  */

undefined1  [16] FUN_10a841cec(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    lVar2 = (long)param_2 * 0x18;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  ppuStack_88 = &puStack_70;
  ppuStack_80 = &puStack_68;
  uStack_78 = 0;
  puStack_90 = puVar1;
  plVar3 = param_2;
  puStack_70 = param_4;
  for (; puStack_68 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    plVar3 = (long *)*param_2;
    FUN_10a841e04(param_4,plVar3,param_2[1],(param_2[1] - (long)plVar3 >> 3) * -0x71c71c71c71c71c7);
    param_4 = puStack_68 + 3;
  }
  uStack_78 = 1;
  FUN_10a842094(&puStack_90);
  auVar5._8_8_ = plVar3;
  auVar5._0_8_ = param_4;
  return auVar5;
}



/* Entry: 10a841d00; end: 10a841d43;  */

undefined1  [16] FUN_10a841d00(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    lVar1 = (long)param_2 * 0x18;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  ppuStack_78 = &puStack_60;
  ppuStack_70 = &puStack_58;
  uStack_68 = 0;
  uStack_80 = param_1;
  plVar2 = param_2;
  puStack_60 = param_4;
  for (; puStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    plVar2 = (long *)*param_2;
    FUN_10a841e04(param_4,plVar2,param_2[1],(param_2[1] - (long)plVar2 >> 3) * -0x71c71c71c71c71c7);
    param_4 = puStack_58 + 3;
  }
  uStack_68 = 1;
  FUN_10a842094(&uStack_80);
  auVar4._8_8_ = plVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a841d44; end: 10a841e03;  */

undefined8 * FUN_10a841d44(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    FUN_10a841e04(param_4,*param_2,param_2[1],(param_2[1] - *param_2 >> 3) * -0x71c71c71c71c71c7);
    param_4 = puStack_38 + 3;
  }
  uStack_48 = 1;
  FUN_10a842094(&uStack_60);
  return param_4;
}



/* Entry: 10a841e04; end: 10a841e87;  */

void FUN_10a841e04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a841e88(param_1,param_4);
    lVar1 = param_1;
    FUN_10a841f30(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a841e88; end: 10a841ed3;  */

undefined1  [16] FUN_10a841e88(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lStack_98;
  
  if (param_2 < 0x38e38e38e38e38f) {
    plVar1 = param_1;
    FUN_10a841ee8();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 9);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10a841ed4();
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < 0x38e38e38e38e38f) {
    lVar2 = param_2 * 0x48;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  uVar3 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x48) {
    *(undefined1 *)(param_4 + 0x40) = 10;
    uVar3 = param_2;
    lStack_98 = param_4;
    func_0x00010a840fd8(&lStack_98,param_2,*(undefined1 *)(param_2 + 0x40));
    *(undefined1 *)(param_4 + 0x40) = *(undefined1 *)(param_2 + 0x40);
    param_4 = param_4 + 0x48;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a841ed4; end: 10a841ee7;  */

undefined1  [16] FUN_10a841ed4(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lStack_78;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < 0x38e38e38e38e38f) {
    lVar1 = param_2 * 0x48;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x48) {
    *(undefined1 *)(param_4 + 0x40) = 10;
    uVar2 = param_2;
    lStack_78 = param_4;
    func_0x00010a840fd8(&lStack_78,param_2,*(undefined1 *)(param_2 + 0x40));
    *(undefined1 *)(param_4 + 0x40) = *(undefined1 *)(param_2 + 0x40);
    param_4 = param_4 + 0x48;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a841ee8; end: 10a841f2f;  */

undefined1  [16] FUN_10a841ee8(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lStack_68;
  
  if (param_2 < 0x38e38e38e38e38f) {
    lVar1 = param_2 * 0x48;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x48) {
    *(undefined1 *)(param_4 + 0x40) = 10;
    uVar2 = param_2;
    lStack_68 = param_4;
    func_0x00010a840fd8(&lStack_68,param_2,*(undefined1 *)(param_2 + 0x40));
    *(undefined1 *)(param_4 + 0x40) = *(undefined1 *)(param_2 + 0x40);
    param_4 = param_4 + 0x48;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a841f30; end: 10a841ffb;  */

long FUN_10a841f30(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lStack_48;
  
  for (; param_2 != param_3; param_2 = param_2 + 0x48) {
    *(undefined1 *)(param_4 + 0x40) = 10;
    lStack_48 = param_4;
    func_0x00010a840fd8(&lStack_48,param_2,*(undefined1 *)(param_2 + 0x40));
    *(undefined1 *)(param_4 + 0x40) = *(undefined1 *)(param_2 + 0x40);
    param_4 = param_4 + 0x48;
  }
  return param_4;
}



/* Entry: 10a841ffc; end: 10a842093;  */

void FUN_10a841ffc(long *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)*param_1;
  lVar6 = *plVar5;
  if (lVar6 == 0) {
    return;
  }
  lVar4 = plVar5[1];
  lVar3 = lVar6;
  if (lVar4 != lVar6) {
    do {
      pbVar1 = (byte *)(lVar4 + -8);
      if (10 < (ulong)*pbVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a842094);
        (*pcVar2)();
      }
      lVar4 = lVar4 + -0x48;
      (*(code *)(&PTR_FUN_110c17158)[*pbVar1])(lVar4);
    } while (lVar4 != lVar6);
    lVar3 = *(long *)*param_1;
  }
  plVar5[1] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar3);
  return;
}



/* Entry: 10a842094; end: 10a8420c7;  */

long FUN_10a842094(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a8420c8(param_1);
  }
  return param_1;
}



/* Entry: 10a8420c8; end: 10a84210f;  */

void FUN_10a8420c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    lStack_28 = lVar1;
    FUN_10a841ffc(&lStack_28);
  }
  return;
}



/* Entry: 10a842110; end: 10a84217f;  */

void FUN_10a842110(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_38;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar4 = plVar2[1];
    lVar1 = lVar3;
    if (lVar4 != lVar3) {
      do {
        lVar4 = lVar4 + -0x18;
        lStack_38 = lVar4;
        FUN_10a841ffc(&lStack_38);
      } while (lVar4 != lVar3);
      lVar1 = *(long *)*param_1;
    }
    plVar2[1] = lVar3;
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10a842180; end: 10a842193;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a842180(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  int aiStack_b0 [2];
  undefined8 *puStack_a8;
  undefined8 *apuStack_a0 [2];
  undefined4 uStack_90;
  undefined8 **ppuStack_88;
  int aiStack_80 [2];
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 ***pppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  puVar3 = (undefined8 *)*puVar4;
  func_0x000109884c0c(apuStack_a0,puVar3 + 1,*puVar3);
  func_0x000109884820(&puStack_b8,apuStack_a0,*puVar3);
  if (apuStack_a0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_a0[0])();
  }
  (**(code **)(*(long *)*puVar3 + 0x30))(&puStack_c0);
  plVar6 = (long *)*puVar3;
  FUN_10a8419d0(apuStack_a0,plVar6,puVar4[2],
                ((long)(puVar4[3] - puVar4[2]) >> 3) * -0x5555555555555555);
  uVar1 = puVar4[6];
  plVar2 = (long *)puVar4[5];
  if (-1 < (char)*(byte *)((long)puVar4 + 0x3f)) {
    uVar1 = (ulong)*(byte *)((long)puVar4 + 0x3f);
    plVar2 = puVar4 + 5;
  }
  (**(code **)(*plVar6 + 0x128))(&ppuStack_70,plVar6,plVar2,uVar1);
  uStack_90 = 6;
  ppuStack_88 = ppuStack_70;
  ppuStack_50 = apuStack_a0;
  uVar1 = puVar4[9];
  puVar3 = (undefined8 *)puVar4[8];
  if (-1 < (char)*(byte *)((long)puVar4 + 0x57)) {
    uVar1 = (ulong)*(byte *)((long)puVar4 + 0x57);
    puVar3 = puVar4 + 8;
  }
  (**(code **)(*plVar6 + 0x128))(&ppuStack_70,plVar6,puVar3,uVar1);
  aiStack_80[0] = 6;
  ppuStack_78 = ppuStack_70;
  uStack_48 = 3;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_70 = &puStack_b8;
  pppuStack_58 = &ppuStack_50;
  plStack_68 = plVar6;
  puStack_60 = (undefined1 *)&puStack_c0;
  func_0x0001098960c0(aiStack_b0);
  if ((3 < aiStack_b0[0]) && (puStack_a8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_a8)();
  }
  lVar5 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar5)) &&
       (*(undefined8 **)((long)&ppuStack_78 + lVar5) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&ppuStack_78 + lVar5))();
    }
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != -0x30);
  if (puStack_c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_c0)();
  }
  if (puStack_b8 != (undefined8 *)0x0) {
    (**(code **)*puStack_b8)();
  }
  return;
}



/* Entry: 10a842194; end: 10a8421f7;  */

void FUN_10a842194(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x57) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x40));
    }
    if (*(char *)(lVar1 + 0x3f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x28));
    }
    lStack_28 = lVar1 + 0x10;
    FUN_10a842110(&lStack_28);
    func_0x00010a004dac(lVar1);
    __ZdlPv();
  }
  return;
}



/* Entry: 10a8421f8; end: 10a84220f;  */

void FUN_10a8421f8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a842210; end: 10a84223f;  */

long FUN_10a842210(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a842240; end: 10a842273;  */

void FUN_10a842240(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110c22308;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 10a842274; end: 10a8422ff;  */

void FUN_10a842274(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_110c22308;
  lVar4 = *(long *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(char *)(param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(param_1 + 3,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20))
    ;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    param_1[5] = *(undefined8 *)(param_2 + 0x28);
    param_1[4] = uVar6;
    param_1[3] = uVar5;
  }
  return;
}



/* Entry: 10a842300; end: 10a8423fb;  */

undefined1  [16] FUN_10a842300(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c20f08;
  puVar1 = &UNK_10f67a8c5;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
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
    ppuStack_40 = &PTR_DAT_110c20f08;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c67f30;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a8423fc; end: 10a8424b7;  */

void FUN_10a8423fc(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f67c02b,0x2e);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8424b8);
  (*pcVar4)();
}



/* Entry: 10a8424b8; end: 10a8425b3;  */

undefined1  [16] FUN_10a8424b8(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c20f40;
  puVar1 = &UNK_10f67a8c5;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
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
    ppuStack_40 = &PTR_DAT_110c20f40;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c62ee8;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a8425b4; end: 10a84266f;  */

void FUN_10a8425b4(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f67c05a,0x1f);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a842670);
  (*pcVar4)();
}



/* Entry: 10a842670; end: 10a8426cb;  */

long * FUN_10a842670(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a8426cc(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a8426cc; end: 10a8427c7;  */

void FUN_10a8426cc(undefined8 *param_1)

{
  func_0x00010a22de78(param_1 + 3);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a8427c8; end: 10a8428e3;  */

void FUN_10a8427c8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
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
  plVar6 = param_2;
  FUN_10a842a4c(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar16 = (long *)plVar6[0x21];
  if (plVar6[0x21] != 0) {
    plVar6 = (long *)(plVar6[0x21] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10a080b34(param_1,param_2,&stack0xffffffffffffffb0);
  if (plVar16 != (long *)0x0) {
    plVar6 = plVar16 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
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
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}


