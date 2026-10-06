/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a386634; end: 10a386667;  */

undefined8 * FUN_10a386634(long param_1)

{
  func_0x00010a05a86c(param_1 + 0x110);
  if (*(long *)(param_1 + 0x108) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined8 *)(param_1 + 0x18) = &PTR_FUN_110c3ec18;
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110c3ecb8;
  *(undefined ***)(param_1 + 0x50) = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0xe8);
  if (*(long *)(param_1 + 0xe0) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x98);
  if (*(long *)(param_1 + 0x90) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)(param_1 + 0x87) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x70));
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x30);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10a386668; end: 10a38666b;  */

void FUN_10a386668(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a38666c; end: 10a38675f;  */

long FUN_10a38666c(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar2 = param_1;
  FUN_10a054838();
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)(uVar7 & (ulong)plVar2);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar4 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
      do {
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        plVar5 = (long *)plVar4[1];
        if (plVar5 == plVar2) {
          if (plVar4[3] == param_3) {
            uVar3 = plVar4[2];
            _memcmp(uVar3,param_2,param_3);
            if ((int)uVar3 == 0) {
              return (long)plVar4;
            }
          }
        }
        else {
          if (((ulong)plVar6 & uVar7) == 0) {
            plVar5 = (long *)((ulong)plVar5 & uVar7);
          }
          else if (plVar6 <= plVar5) {
            uVar1 = 0;
            if (plVar6 != (long *)0x0) {
              uVar1 = (ulong)plVar5 / (ulong)plVar6;
            }
            plVar5 = (long *)((long)plVar5 - uVar1 * (long)plVar6);
          }
          if (plVar5 != plVar8) {
            return 0;
          }
        }
        plVar4 = (long *)*plVar4;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10a386760; end: 10a38682f;  */

void FUN_10a386760(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [264];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a386830(auStack_150,param_1,param_2);
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110b99e70;
  ___cxa_throw(puVar2,&PTR_DAT_110b99e48,FUN_10a002a90);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a386818);
  (*pcVar1)();
}



/* Entry: 10a386830; end: 10a386917;  */

long * FUN_10a386830(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 ****ppppuVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined8 ****ppppuVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    if ((long)uStack_48 < 0) {
      __ZdlPv(pppuStack_58);
    }
    __Unwind_Resume();
    plVar8 = param_1;
    (**(code **)(*param_1 + 0x58))();
    if ((ulong)plVar8[0x59] < 8) {
      plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
      plVar8[0x59] = plVar8[0x59] + 1;
    }
    else {
      func_0x00010988bfcc(plVar8 + 0x4b);
    }
    FUN_10a3869d0(extraout_x8,param_1,FUN_10a347e10,0,param_2,param_3,param_4);
    plVar6 = plVar8 + 0x4b;
    lVar9 = plVar8[0x59];
    uVar10 = lVar9 - 1;
    plVar8[0x59] = uVar10;
    if (uVar10 < 8) {
      uVar10 = plVar6[lVar9 + 2];
      if (plVar8[0x5a] == uVar10) {
        return plVar6;
      }
    }
    else {
      uVar10 = *(ulong *)(plVar8[0x57] + -8);
      plVar8[0x57] = plVar8[0x57] + -8;
      if (plVar8[0x5a] == uVar10) {
        return plVar6;
      }
    }
    lVar9 = *plVar6;
    plVar14 = (long *)plVar8[0x4c];
    lVar12 = (long)plVar14 - lVar9;
    uVar16 = lVar12 >> 4;
    if (uVar16 < uVar10) {
      uVar17 = uVar10 - uVar16;
      lVar15 = plVar8[0x4d];
      if ((ulong)(lVar15 - (long)plVar14 >> 4) < uVar17) {
        if (uVar10 >> 0x3c == 0) {
          uVar11 = lVar15 - lVar9 >> 3;
          if (uVar11 <= uVar10) {
            uVar11 = uVar10;
          }
          if (0x7fffffffffffffef < (ulong)(lVar15 - lVar9)) {
            uVar11 = 0xfffffffffffffff;
          }
          plStack_c8 = plVar6;
          if (uVar11 >> 0x3c == 0) {
            lVar5 = uVar11 << 4;
            __Znwm();
            lVar1 = lVar5 + lVar12;
            _bzero(lVar1,uVar17 * 0x10);
            lVar13 = lVar1 + uVar16 * -0x10;
            _memcpy(lVar13,lVar9,lVar12);
            *plVar6 = lVar13;
            plVar8[0x4c] = lVar1 + uVar17 * 0x10;
            plVar8[0x4d] = lVar5 + uVar11 * 0x10;
            plVar6 = &lStack_e8;
            lStack_e8 = lVar9;
            lStack_e0 = lVar9;
            lStack_d8 = lVar9;
            lStack_d0 = lVar15;
            func_0x00010988c1b8(plVar6);
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
      plVar6 = plVar14;
      _bzero(plVar14,uVar17 * 0x10);
      plVar8[0x4c] = (long)(plVar14 + uVar17 * 2);
    }
    else if (uVar10 < uVar16) {
      plVar2 = (long *)(lVar9 + uVar10 * 0x10);
      while (plVar14 != plVar2) {
        plVar14 = plVar14 + -2;
        plVar6 = plVar14;
        func_0x00010988c204(plVar14);
      }
      plVar8[0x4c] = (long)plVar2;
    }
code_r0x00010988c138:
    plVar8[0x5a] = uVar10;
    return plVar6;
  }
  if (param_3 < 0x17) {
    uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
    ppppuVar7 = &pppuStack_58;
    if (param_3 == 0) goto LAB_10a3868b0;
  }
  else {
    ppppuVar3 = (undefined8 ****)0x19;
    if ((param_3 | 7) != 0x17) {
      ppppuVar3 = (undefined8 ****)((param_3 | 7) + 1);
    }
    ppppuVar7 = ppppuVar3;
    __Znwm();
    uStack_48 = (ulong)ppppuVar3 | 0x8000000000000000;
    pppuStack_58 = ppppuVar7;
    uStack_50 = param_3;
  }
  _memmove(ppppuVar7,param_2,param_3);
LAB_10a3868b0:
  *(undefined1 *)((long)ppppuVar7 + param_3) = 0;
  FUN_10a002a94(param_1,&pppuStack_58);
  if ((long)uStack_48 < 0) {
    __ZdlPv(pppuStack_58);
  }
  *param_1 = (long)&PTR_FUN_110b99e70;
  return param_1;
}



/* Entry: 10a386918; end: 10a3869cf;  */

void FUN_10a386918(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3869d0(param_1,param_2,FUN_10a347e10,0,param_3,param_4,param_5);
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



/* Entry: 10a3869d0; end: 10a386acb;  */

void FUN_10a3869d0(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  long lStack_80;
  long lStack_78;
  undefined8 auStack_68 [2];
  char cStack_51;
  
  lVar2 = param_2;
  FUN_10a386acc(param_2,param_5);
  FUN_10a0584c8(param_7);
  func_0x000109898570(auStack_68,param_2,param_6);
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(&lStack_80,plVar1,auStack_68);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  FUN_10a2a90b0(param_1,param_2,lStack_80,lStack_78 - lStack_80 >> 2);
  if (lStack_80 != 0) {
    lStack_78 = lStack_80;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a386acc; end: 10a386b33;  */

void FUN_10a386acc(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long in_stack_ffffffffffffff80;
  long in_stack_ffffffffffffff88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = plVar4;
  FUN_10a386acc(plVar4,param_2);
  FUN_10a052e3c(param_4);
  FUN_10a347fa4(&stack0xffffffffffffff80,plVar6);
  func_0x00010989a420(extraout_x8,plVar4,in_stack_ffffffffffffff80,
                      (in_stack_ffffffffffffff88 - in_stack_ffffffffffffff80 >> 3) *
                      -0x5555555555555555);
  FUN_10a0426d8(&stack0xffffffffffffff98);
  plVar4 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar7 + 2];
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar4;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_a8 = lVar7;
          lStack_a0 = lVar7;
          lStack_98 = lVar7;
          lStack_90 = lVar13;
          func_0x00010988c1b8(&lStack_a8);
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10a386b34; end: 10a386c3b;  */

void FUN_10a386b34(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long in_stack_ffffffffffffffa0;
  long in_stack_ffffffffffffffa8;
  
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
  FUN_10a386acc(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a347fa4(&stack0xffffffffffffffa0,plVar4);
  func_0x00010989a420(param_1,param_2,in_stack_ffffffffffffffa0,
                      (in_stack_ffffffffffffffa8 - in_stack_ffffffffffffffa0 >> 3) *
                      -0x5555555555555555);
  FUN_10a0426d8(&stack0xffffffffffffffb8);
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



/* Entry: 10a386c3c; end: 10a386d37;  */

void FUN_10a386c3c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a386acc(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a348058(&stack0xffffffffffffffa8,plVar4);
  FUN_10a36a6a0(param_1,param_2,in_stack_ffffffffffffffa8,
                in_stack_ffffffffffffffb0 - in_stack_ffffffffffffffa8 >> 6);
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



/* Entry: 10a386d38; end: 10a386de7;  */

void FUN_10a386d38(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a386de8(param_1,param_2,FUN_10a349120,0,param_3,param_5);
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



/* Entry: 10a386de8; end: 10a386e9f;  */

void FUN_10a386de8(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lStack_58;
  long lStack_50;
  
  lVar1 = param_2;
  FUN_10a386acc(param_2,param_5);
  FUN_10a052e3c(param_6);
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*(long *)(lVar1 + ((long)param_4 >> 1)) + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(&lStack_58);
  FUN_10a386ea0(param_1,param_2,lStack_58,lStack_50 - lStack_58 >> 1);
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a386ea0; end: 10a386faf;  */

void FUN_10a386ea0(undefined4 *param_1,long *param_2,long param_3,long param_4)

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
      iStack_58 = 3;
      puStack_50 = (undefined8 *)NEON_ucvtf((ulong)*(ushort *)(param_3 + lVar1 * 2));
      (**(code **)(*param_2 + 0x290))(param_2,&uStack_48,lVar1,&iStack_58);
      if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
        (**(code **)*puStack_50)();
      }
      lVar1 = lVar1 + 1;
    } while (param_4 != lVar1);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  return;
}



/* Entry: 10a386fb0; end: 10a38705f;  */

void FUN_10a386fb0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a386de8(param_1,param_2,FUN_10a3491b0,0,param_3,param_5);
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



/* Entry: 10a387060; end: 10a387173;  */

void FUN_10a387060(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  uint in_stack_ffffffffffffffa8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a386acc(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a3491b4(&plStack_68,param_2);
  if (in_stack_ffffffffffffffa8 == 0xffffffff) {
    func_0x00010988bd28(&UNK_10f634b57);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a387150);
    (*pcVar2)();
  }
  (*(code *)(&PTR_FUN_110bc78a8)[in_stack_ffffffffffffffa8])
            (param_1,&stack0xffffffffffffffb8,&plStack_68);
  FUN_10a3871d0(&plStack_68);
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



/* Entry: 10a387174; end: 10a3871cf;  */

void FUN_10a387174(undefined4 *param_1)

{
  *param_1 = 1;
  return;
}



/* Entry: 10a3871d0; end: 10a387223;  */

void FUN_10a3871d0(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110bc78c0)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 10a387224; end: 10a387237;  */

void FUN_10a387224(void)

{
  return;
}



/* Entry: 10a387238; end: 10a38738f;  */

void FUN_10a387238(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long *in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
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
  FUN_10a386acc(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a347e14(&plStack_68,plVar6,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  if (plStack_68 == (long *)0x0) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,plStack_68[2]);
  }
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa0 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
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



/* Entry: 10a387390; end: 10a387447;  */

void FUN_10a387390(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a3869d0(param_1,param_2,FUN_10a347d70,0,param_3,param_4,param_5);
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



/* Entry: 10a387448; end: 10a387583;  */

void FUN_10a387448(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
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
  FUN_10a386acc(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar7 = (long *)plVar7[0x1d];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar10 + 2];
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  lVar10 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          lStack_70 = lVar14;
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
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10a387584; end: 10a3877b3;  */

void FUN_10a387584(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  long *in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb0;
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
  FUN_10a3877b4(param_2,param_3);
  func_0x00010a38782c(param_5);
  if (*param_4 == 1) {
    FUN_10a00946c(&UNK_10f65055c);
  }
  else {
    func_0x000109898688(param_2,param_4);
    if (param_2 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      func_0x00010989879c(&stack0xffffffffffffffb0);
      puVar8 = (undefined8 *)&stack0xffffffffffffffa0;
      if ((in_stack_ffffffffffffffb0 != 0) &&
         (___dynamic_cast(in_stack_ffffffffffffffb0,&PTR_DAT_110b178e0,&PTR_DAT_110bb37d0,0x28),
         puVar8 = (undefined8 *)&stack0xffffffffffffffa0, in_stack_ffffffffffffffb0 != 0)) {
        puVar8 = (undefined8 *)&stack0xffffffffffffffb0;
        in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffb0;
        in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb8;
      }
      *puVar8 = 0;
      puVar8[1] = 0;
      if (in_stack_ffffffffffffffb8 != (long *)0x0) {
        plVar12 = in_stack_ffffffffffffffb8 + 1;
        do {
          lVar10 = *plVar12;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = lVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
        }
      }
      if (in_stack_ffffffffffffffa0 != 0) {
        if (in_stack_ffffffffffffffa8 != (long *)0x0) {
          plVar12 = in_stack_ffffffffffffffa8 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar2) {
              *plVar12 = *plVar12 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        plVar12 = (long *)plVar6[0x1d];
        plVar6[0x1c] = in_stack_ffffffffffffffa0;
        plVar6[0x1d] = (long)in_stack_ffffffffffffffa8;
        if (plVar12 != (long *)0x0) {
          plVar6 = plVar12 + 1;
          do {
            lVar10 = *plVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = lVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        if (in_stack_ffffffffffffffa8 != (long *)0x0) {
          plVar6 = in_stack_ffffffffffffffa8 + 1;
          do {
            lVar10 = *plVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = lVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
          }
        }
        *param_1 = 0;
        plVar6 = plVar5 + 0x4b;
        lVar10 = plVar5[0x59];
        uVar7 = lVar10 - 1;
        plVar5[0x59] = uVar7;
        if (uVar7 < 8) {
          uVar7 = plVar6[lVar10 + 2];
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
        lVar10 = *plVar6;
        lVar14 = plVar5[0x4c];
        lVar11 = lVar14 - lVar10;
        uVar16 = lVar11 >> 4;
        if (uVar16 < uVar7) {
          uVar17 = uVar7 - uVar16;
          lVar15 = plVar5[0x4d];
          if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
            if (uVar7 >> 0x3c == 0) {
              uVar9 = lVar15 - lVar10 >> 3;
              if (uVar9 <= uVar7) {
                uVar9 = uVar7;
              }
              if (0x7fffffffffffffef < (ulong)(lVar15 - lVar10)) {
                uVar9 = 0xfffffffffffffff;
              }
              plStack_68 = plVar6;
              if (uVar9 >> 0x3c == 0) {
                lVar4 = uVar9 << 4;
                __Znwm();
                lVar14 = lVar4 + lVar11;
                _bzero(lVar14,uVar17 * 0x10);
                lVar13 = lVar14 + uVar16 * -0x10;
                _memcpy(lVar13,lVar10,lVar11);
                *plVar6 = lVar13;
                plVar5[0x4c] = lVar14 + uVar17 * 0x10;
                plVar5[0x4d] = lVar4 + uVar9 * 0x10;
                lStack_88 = lVar10;
                lStack_80 = lVar10;
                lStack_78 = lVar10;
                lStack_70 = lVar15;
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
          _bzero(lVar14,uVar17 * 0x10);
          plVar5[0x4c] = lVar14 + uVar17 * 0x10;
        }
        else if (uVar7 < uVar16) {
          lVar10 = lVar10 + uVar7 * 0x10;
          while (lVar14 != lVar10) {
            lVar14 = lVar14 + -0x10;
            func_0x00010988c204(lVar14);
          }
          plVar5[0x4c] = lVar10;
        }
code_r0x00010988c138:
        plVar5[0x5a] = uVar7;
        return;
      }
      func_0x00010988bd28(&UNK_10f58251f);
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a38778c);
  (*pcVar3)();
}



/* Entry: 10a3877b4; end: 10a3877eb;  */

void FUN_10a3877b4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  undefined4 *extraout_x8;
  ulong uVar18;
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar19;
  undefined8 unaff_x22;
  long lVar20;
  long lVar21;
  undefined8 unaff_x23;
  long lVar22;
  undefined8 unaff_x24;
  ulong uVar23;
  undefined8 unaff_x25;
  ulong uVar24;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  double dVar25;
  undefined8 unaff_d9;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar11 = param_1;
  func_0x000109898688();
  puVar12 = param_1;
  if (puVar11 == (undefined *)0x0) {
    puVar12 = &UNK_10f68f52e;
    unaff_x30 = FUN_10a3877ec;
    func_0x00010988bd28();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  FUN_10a053854();
  if (puVar12 != (undefined *)0x0) {
    param_4 = 0x10;
    ___dynamic_cast();
    if (puVar12 != (undefined *)0x0) {
      return;
    }
  }
  puVar12 = &UNK_10f685496;
  func_0x00010988bd28();
  if ((int)puVar12 == 1) {
    return;
  }
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x18) = 0x10a38782c;
  plVar13 = (long *)0x1;
  uVar15 = 0;
  FUN_10a052ee0(1,0,puVar12);
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x20;
  *(undefined **)((long)register0x00000008 + -0x38) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x20);
  *(code **)((long)register0x00000008 + -0x28) = FUN_10a387850;
  plVar14 = plVar13;
  (**(code **)(*plVar13 + 0x58))();
  if ((ulong)plVar14[0x59] < 8) {
    plVar14[plVar14[0x59] + 0x4e] = plVar14[0x5a];
    plVar14[0x59] = plVar14[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar14 + 0x4b);
  }
  FUN_10a386acc(plVar13,uVar15);
  FUN_10a052e3c(param_4);
  plVar13 = (long *)plVar13[0x1c];
  dVar25 = 0.0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x90))();
    if (*plVar13 != 0) {
      dVar25 = (double)*(int *)(*plVar13 + 0xe8);
    }
  }
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = dVar25;
  plVar13 = plVar14 + 0x4b;
  uVar15 = *(undefined8 *)((long)register0x00000008 + -0x30);
  uVar5 = *(undefined8 *)((long)register0x00000008 + -0x28);
  uVar2 = *(undefined8 *)((long)register0x00000008 + -0x40);
  uVar6 = *(undefined8 *)((long)register0x00000008 + -0x38);
  uVar3 = *(undefined8 *)((long)register0x00000008 + -0x50);
  uVar7 = *(undefined8 *)((long)register0x00000008 + -0x48);
  uVar4 = *(undefined8 *)((long)register0x00000008 + -0x60);
  uVar8 = *(undefined8 *)((long)register0x00000008 + -0x58);
  lVar16 = plVar14[0x59];
  uVar17 = lVar16 - 1;
  plVar14[0x59] = uVar17;
  if (uVar17 < 8) {
    uVar17 = plVar13[lVar16 + 2];
    if (plVar14[0x5a] == uVar17) {
      return;
    }
  }
  else {
    uVar17 = *(ulong *)(plVar14[0x57] + -8);
    plVar14[0x57] = plVar14[0x57] + -8;
    if (plVar14[0x5a] == uVar17) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar4;
  *(undefined8 *)((long)register0x00000008 + -0x58) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar3;
  *(undefined8 *)((long)register0x00000008 + -0x48) = uVar7;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar2;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar6;
  *(undefined8 *)((long)register0x00000008 + -0x30) = uVar15;
  *(undefined8 *)((long)register0x00000008 + -0x28) = uVar5;
  lVar16 = *plVar13;
  lVar21 = plVar14[0x4c];
  lVar19 = lVar21 - lVar16;
  uVar23 = lVar19 >> 4;
  if (uVar23 < uVar17) {
    uVar24 = uVar17 - uVar23;
    lVar22 = plVar14[0x4d];
    if ((ulong)(lVar22 - lVar21 >> 4) < uVar24) {
      if (uVar17 >> 0x3c == 0) {
        uVar18 = lVar22 - lVar16 >> 3;
        if (uVar18 <= uVar17) {
          uVar18 = uVar17;
        }
        if (0x7fffffffffffffef < (ulong)(lVar22 - lVar16)) {
          uVar18 = 0xfffffffffffffff;
        }
        *(long **)((long)register0x00000008 + -0x88) = plVar13;
        if (uVar18 >> 0x3c == 0) {
          lVar10 = uVar18 << 4;
          __Znwm();
          lVar21 = lVar10 + lVar19;
          _bzero(lVar21,uVar24 * 0x10);
          lVar20 = lVar21 + uVar23 * -0x10;
          _memcpy(lVar20,lVar16,lVar19);
          *plVar13 = lVar20;
          plVar14[0x4c] = lVar21 + uVar24 * 0x10;
          plVar14[0x4d] = lVar10 + uVar18 * 0x10;
          *(long *)((long)register0x00000008 + -0x98) = lVar16;
          *(long *)((long)register0x00000008 + -0x90) = lVar22;
          *(long *)((long)register0x00000008 + -0xa8) = lVar16;
          *(long *)((long)register0x00000008 + -0xa0) = lVar16;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0xa8));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar9)();
    }
    _bzero(lVar21,uVar24 * 0x10);
    plVar14[0x4c] = lVar21 + uVar24 * 0x10;
  }
  else if (uVar17 < uVar23) {
    lVar16 = lVar16 + uVar17 * 0x10;
    while (lVar21 != lVar16) {
      lVar21 = lVar21 + -0x10;
      func_0x00010988c204(lVar21);
    }
    plVar14[0x4c] = lVar16;
  }
code_r0x00010988c138:
  plVar14[0x5a] = uVar17;
  return;
}



/* Entry: 10a3877ec; end: 10a38784f;  */

void FUN_10a3877ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  double dVar16;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  FUN_10a053854();
  if (param_1 != 0) {
    param_4 = 0x10;
    ___dynamic_cast();
    if (param_1 != 0) {
      return;
    }
  }
  puVar3 = &UNK_10f685496;
  func_0x00010988bd28();
  if ((int)puVar3 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  uVar6 = 0;
  FUN_10a052ee0(1,0,puVar3);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a386acc(plVar4,uVar6);
  FUN_10a052e3c(param_4);
  plVar4 = (long *)plVar4[0x1c];
  dVar16 = 0.0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x90))();
    if (*plVar4 != 0) {
      dVar16 = (double)*(int *)(*plVar4 + 0xe8);
    }
  }
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = dVar16;
  plVar4 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar7 + 2];
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar4;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_a8 = lVar7;
          lStack_a0 = lVar7;
          lStack_98 = lVar7;
          lStack_90 = lVar13;
          func_0x00010988c1b8(&lStack_a8);
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10a387850; end: 10a387933;  */

void FUN_10a387850(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  double dVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
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
  FUN_10a386acc(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar4 = (long *)param_2[0x1c];
  dVar14 = 0.0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x90))();
    if (*plVar4 != 0) {
      dVar14 = (double)*(int *)(*plVar4 + 0xe8);
    }
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = dVar14;
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



/* Entry: 10a387934; end: 10a387a17;  */

void FUN_10a387934(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  double dVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
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
  FUN_10a386acc(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar4 = (long *)param_2[0x1c];
  dVar14 = 0.0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x90))();
    if (*plVar4 != 0) {
      dVar14 = (double)*(int *)(*plVar4 + 0xec);
    }
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = dVar14;
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



/* Entry: 10a387a18; end: 10a387ac7;  */

void FUN_10a387a18(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a387ac8(param_1,param_2,FUN_10a348108,0,param_3,param_5);
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



/* Entry: 10a387ac8; end: 10a387b4f;  */

void FUN_10a387ac8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  long param_5,code *param_6,ulong param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  lVar1 = param_5;
  FUN_10a386acc(param_5,param_8);
  FUN_10a052e3c(param_9);
  if ((param_7 & 1) != 0) {
    param_6 = *(code **)(*(long *)(lVar1 + ((long)param_7 >> 1)) + ((ulong)param_6 & 0xffffffff));
  }
  (*param_6)();
  uStack_4c = param_1;
  uStack_48 = param_2;
  uStack_44 = param_3;
  FUN_10a065390(param_4,param_5,&uStack_4c);
  return;
}



/* Entry: 10a387b50; end: 10a387bff;  */

void FUN_10a387b50(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a387ac8(param_1,param_2,0x10a348168,0,param_3,param_5);
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



/* Entry: 10a387c00; end: 10a387c77;  */

void FUN_10a387c00(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x120;
  __Znwm();
  FUN_10a387c78();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x58) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x60), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = *(long *)(lVar5 + 0x60);
    }
    *(long *)(lVar5 + 0x58) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x60) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a387c78; end: 10a387cc7;  */

undefined8 * FUN_10a387c78(undefined8 *param_1,undefined8 *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bab2f0;
  FUN_10ac6ea60(param_1 + 3,*param_2,0);
  return param_1;
}



/* Entry: 10a387cc8; end: 10a387d43;  */

undefined8 * FUN_10a387cc8(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  *puVar1 = 0;
  param_1[2] = 0;
  *param_1 = puVar1;
  if (param_3 != 0) {
    param_3 = param_3 << 5;
    do {
      FUN_10a387d44(param_1,puVar1,param_2,param_2);
      param_2 = param_2 + 0x20;
      param_3 = param_3 + -0x20;
    } while (param_3 != 0);
  }
  return param_1;
}



/* Entry: 10a387d44; end: 10a387dc3;  */

undefined1  [16]
FUN_10a387d44(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_58 [3];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_10a387dc4(param_1,param_2,&uStack_38,auStack_40,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_10a387f6c(alStack_58,param_1,param_4);
    FUN_10a388010(param_1,uStack_38,plVar2,alStack_58[0]);
    lVar3 = alStack_58[0];
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10a387dc4; end: 10a387f6b;  */

long * FUN_10a387dc4(undefined8 *param_1,long *param_2,long *param_3,long *param_4,int *param_5)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar4 = param_1 + 1;
  if (plVar4 != param_2) {
    iVar1 = *param_5;
    if ((int)param_2[4] <= iVar1) {
      if (iVar1 <= (int)param_2[4]) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar6 = (long *)param_2[1];
      plVar7 = param_2;
      plVar5 = plVar6;
      if (plVar6 == (long *)0x0) {
        do {
          plVar3 = (long *)plVar7[2];
          bVar2 = (long *)*plVar3 != plVar7;
          plVar7 = plVar3;
        } while (bVar2);
      }
      else {
        do {
          plVar3 = plVar5;
          plVar5 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      if ((plVar3 == plVar4) || (iVar1 < (int)plVar3[4])) {
        if (plVar6 != (long *)0x0) {
          *param_3 = (long)plVar3;
          return plVar3;
        }
        *param_3 = (long)param_2;
        return param_2 + 1;
      }
      plVar7 = (long *)*plVar4;
      while (plVar5 = plVar4, plVar7 != (long *)0x0) {
        while (plVar5 = plVar7, (int)plVar5[4] <= iVar1) {
          if (iVar1 <= (int)plVar5[4]) goto LAB_10a387f64;
          plVar4 = plVar5 + 1;
          plVar7 = (long *)*plVar4;
          if ((long *)*plVar4 == (long *)0x0) goto LAB_10a387f64;
        }
        plVar4 = plVar5;
        plVar7 = (long *)*plVar5;
      }
LAB_10a387f64:
      *param_3 = (long)plVar5;
      return plVar4;
    }
  }
  plVar5 = (long *)*param_2;
  plVar7 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar6 = param_2;
    plVar3 = plVar5;
    if (plVar5 == (long *)0x0) {
      do {
        plVar7 = (long *)plVar6[2];
        bVar2 = (long *)*plVar7 == plVar6;
        plVar6 = plVar7;
      } while (bVar2);
    }
    else {
      do {
        plVar7 = plVar3;
        plVar3 = (long *)plVar7[1];
      } while ((long *)plVar7[1] != (long *)0x0);
    }
    iVar1 = *param_5;
    if (iVar1 <= (int)plVar7[4]) {
      plVar7 = (long *)*plVar4;
      while (plVar5 = plVar4, plVar7 != (long *)0x0) {
        while (plVar5 = plVar7, (int)plVar5[4] <= iVar1) {
          if (iVar1 <= (int)plVar5[4]) goto LAB_10a387ecc;
          plVar4 = plVar5 + 1;
          plVar7 = (long *)*plVar4;
          if ((long *)*plVar4 == (long *)0x0) goto LAB_10a387ecc;
        }
        plVar4 = plVar5;
        plVar7 = (long *)*plVar5;
      }
LAB_10a387ecc:
      *param_3 = (long)plVar5;
      return plVar4;
    }
  }
  if (plVar5 == (long *)0x0) {
    *param_3 = (long)param_2;
  }
  else {
    *param_3 = (long)plVar7;
    param_2 = plVar7 + 1;
  }
  return param_2;
}



/* Entry: 10a387f6c; end: 10a38800f;  */

void FUN_10a387f6c(long *param_1,long param_2,undefined4 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x40;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *(undefined4 *)(lVar1 + 0x20) = *param_3;
  if (*(char *)((long)param_3 + 0x1f) < '\0') {
    func_0x000107c3192c(lVar1 + 0x28,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4));
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(lVar1 + 0x28) = uVar2;
    *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(param_3 + 6);
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a388010; end: 10a3881b3;  */

void FUN_10a388010(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a3881b4; end: 10a3882af;  */

undefined1  [16] FUN_10a3881b4(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bc7ea0;
  puVar1 = &UNK_10f64efef;
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
    ppuStack_40 = &PTR_DAT_110bc7ea0;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c42c58;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a3882b0; end: 10a38836b;  */

void FUN_10a3882b0(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6512ca,0x13);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a38836c);
  (*pcVar4)();
}



/* Entry: 10a38836c; end: 10a3884cf;  */

void FUN_10a38836c(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lStack_40 = *param_2;
  plStack_30 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plStack_30 = lStack_40;
  plVar3[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0x32aaaba7;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *param_1 = lStack_40;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  plStack_28 = plVar3;
  func_0x00010a053e8c(plStack_30,&lStack_40);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_30 != 0) {
    func_0x00010a053ee8(*plStack_30,&plStack_30);
  }
  plVar3 = plStack_28;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a3884d0; end: 10a388567;  */

long * FUN_10a3884d0(long *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  uVar3 = param_3[1];
  uVar2 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  *puVar1 = &PTR_DAT_110bc78e8;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  param_1[1] = (long)puVar1;
  FUN_10a388568(param_1,param_2 + 0x28,param_2);
  return param_1;
}



/* Entry: 10a388568; end: 10a38868b;  */

void FUN_10a388568(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a38868c; end: 10a3886cb;  */

void FUN_10a38868c(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a3886cc; end: 10a388707;  */

long FUN_10a3886cc(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bc7928);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a388708; end: 10a38871b;  */

void FUN_10a388708(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a38871c; end: 10a38873b;  */

void FUN_10a38871c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bc7948;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a38873c; end: 10a38875b;  */

void FUN_10a38873c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a388744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a38875c; end: 10a38877b;  */

void FUN_10a38875c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bc7998;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a38877c; end: 10a38878b;  */

void FUN_10a38877c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a388784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x20))();
  return;
}



/* Entry: 10a38878c; end: 10a3887e3;  */

long FUN_10a38878c(long param_1)

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



/* Entry: 10a3887e4; end: 10a3887f3;  */

void FUN_10a3887e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc79e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a3887f4; end: 10a388813;  */

void FUN_10a3887f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc79e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a388814; end: 10a388823;  */

void FUN_10a388814(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a38881c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x20))();
  return;
}



/* Entry: 10a388824; end: 10a38887b;  */

long FUN_10a388824(long param_1)

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



/* Entry: 10a38887c; end: 10a38888b;  */

void FUN_10a38887c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc7a38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a38888c; end: 10a3888ab;  */

void FUN_10a38888c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc7a38;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3888ac; end: 10a3888bb;  */

void FUN_10a3888ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a3888b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x20))();
  return;
}



/* Entry: 10a3888bc; end: 10a3889db;  */

long FUN_10a3888bc(long param_1)

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



/* Entry: 10a3889dc; end: 10a388a0f;  */

void FUN_10a3889dc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  lVar2 = *(long *)(param_1 + 0x10);
  puVar1 = *(undefined8 **)(lVar2 + 0x48);
  if (puVar1 != (undefined8 *)0x0) {
    pcVar3 = (code *)*puVar1;
    if (*(char *)(lVar2 + 0x1f) < '\0') {
      func_0x000107c3192c(&uStack_40,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
    }
    else {
      uStack_38 = *(undefined8 *)(lVar2 + 0x10);
      uStack_40 = *(undefined8 *)(lVar2 + 8);
      lStack_30 = *(long *)(lVar2 + 0x18);
    }
    (*pcVar3)(&uStack_40,puVar1);
    if (lStack_30 < 0) {
      __ZdlPv(uStack_40);
    }
    return;
  }
  return;
}



/* Entry: 10a388a10; end: 10a388e1b;  */

void FUN_10a388a10(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x90);
    FUN_10a356f54(param_1 + 0x98,param_1 + 0x88,*(undefined8 *)(param_1 + 0x80));
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x98);
    plVar5 = (long *)(*(long *)(param_1 + 0x98) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xa8) = 1;
      lVar8 = *(long *)(param_1 + 0x90);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_38 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x90);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x98);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x10) >> 1 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x80);
    *(long *)(param_1 + 0xa0) = lVar8;
    *(undefined8 *)(param_1 + 0x80) = 0;
    if (((uint)*(undefined8 *)(lVar8 + 0x10) >> 5 & 1) == 0) {
      func_0x0001092af8bc(param_1 + 0xa0);
      if ((*(byte *)(*(long *)(param_1 + 0xa0) + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a388d3c);
        (*pcVar4)();
      }
      FUN_10a356630(param_1 + 0x48,*(long *)(param_1 + 0xa0) + 0x98);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(&uStack_48,*(long *)(param_1 + 0xa0) + 0x90);
      FUN_10a3567cc(param_1 + 0x60,&uStack_48);
      __ZNSt13exception_ptrD1Ev(&uStack_48);
    }
    plVar5 = *(long **)(param_1 + 0xa0);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  plVar5 = *(long **)(param_1 + 0x88);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
  if ((3 < *(int *)(param_1 + 0x68)) && (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x70))();
  }
  if ((3 < *(int *)(param_1 + 0x50)) && (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x58))();
  }
  plVar5 = *(long **)(param_1 + 0x80);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  __ZdlPv(param_1);
  return;
}



/* Entry: 10a388e1c; end: 10a389013;  */

void FUN_10a388e1c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x90);
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_10a388f70;
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a388f70;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar4 & 0x1fffffffc) == 4) {
        do {
          uVar4 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar4 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar4 - 1 == 0) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x98);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar4 & 0x1fffffffc) == 4) {
        do {
          uVar4 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar4 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar4 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x88);
    if (plVar5 == (long *)0x0) goto LAB_10a388f70;
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a388f70;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar4 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
LAB_10a388f70:
  func_0x000109d1a1d0(param_1 + 0x10);
  if ((3 < *(int *)(param_1 + 0x68)) && (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x70))();
  }
  if ((3 < *(int *)(param_1 + 0x50)) && (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x58))();
  }
  plVar5 = *(long **)(param_1 + 0x80);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a389014; end: 10a389473;  */

void FUN_10a389014(long param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0xe0) & 1) == 0) {
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x50);
    iVar2 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x90) = iVar2;
    if (iVar2 == 3) {
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x60);
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_1 + 0x60);
    }
    else if (3 < iVar2) {
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x68);
    iVar2 = *(int *)(param_1 + 0x70);
    *(int *)(param_1 + 0xa8) = iVar2;
    if (iVar2 == 3) {
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x78);
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_1 + 0x78);
    }
    else if (3 < iVar2) {
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_10a356920(param_1 + 0xd0,param_1 + 0xd8,param_1 + 0x88);
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xd0);
    plVar6 = (long *)(*(long *)(param_1 + 0xd0) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xe0) = 1;
      lVar9 = *(long *)(param_1 + 0xc0);
      plVar6 = (long *)(lVar9 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar8 = *plVar6;
        if (lVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_38);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
    }
  }
  plVar6 = *(long **)(param_1 + 0xc0);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a389360);
    (*pcVar5)();
  }
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0xd0);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  if ((3 < *(int *)(param_1 + 0xa8)) && (*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0xb0))();
  }
  if ((3 < *(int *)(param_1 + 0x90)) && (*(undefined8 **)(param_1 + 0x98) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x98))();
  }
  plVar6 = *(long **)(param_1 + 0xd8);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  if ((3 < *(int *)(param_1 + 0x70)) && (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x78))();
  }
  if ((3 < *(int *)(param_1 + 0x58)) && (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x60))();
  }
  plVar6 = *(long **)(param_1 + 0x48);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a389474; end: 10a389647;  */

void FUN_10a389474(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    plVar4 = *(long **)(param_1 + 0xc0);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0xd0);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    if ((3 < *(int *)(param_1 + 0xa8)) && (*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(param_1 + 0xb0))();
    }
    if ((3 < *(int *)(param_1 + 0x90)) && (*(undefined8 **)(param_1 + 0x98) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(param_1 + 0x98))();
    }
    plVar4 = *(long **)(param_1 + 0xd8);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
  }
  if ((3 < *(int *)(param_1 + 0x70)) && (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x78))();
  }
  if ((3 < *(int *)(param_1 + 0x58)) && (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x60))();
  }
  plVar4 = *(long **)(param_1 + 0x48);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a389648; end: 10a389a53;  */

void FUN_10a389648(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x90);
    FUN_10a37616c(param_1 + 0x98,param_1 + 0x88,*(undefined8 *)(param_1 + 0x80));
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x98);
    plVar5 = (long *)(*(long *)(param_1 + 0x98) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xa8) = 1;
      lVar8 = *(long *)(param_1 + 0x90);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_38 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x90);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x98);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x10) >> 1 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x80);
    *(long *)(param_1 + 0xa0) = lVar8;
    *(undefined8 *)(param_1 + 0x80) = 0;
    if (((uint)*(undefined8 *)(lVar8 + 0x10) >> 5 & 1) == 0) {
      func_0x0001092af8bc(param_1 + 0xa0);
      if ((*(byte *)(*(long *)(param_1 + 0xa0) + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a389974);
        (*pcVar4)();
      }
      FUN_10a3757e0(param_1 + 0x48,*(long *)(param_1 + 0xa0) + 0x98);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(&uStack_48,*(long *)(param_1 + 0xa0) + 0x90);
      FUN_10a3759e4(param_1 + 0x60,&uStack_48);
      __ZNSt13exception_ptrD1Ev(&uStack_48);
    }
    plVar5 = *(long **)(param_1 + 0xa0);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  plVar5 = *(long **)(param_1 + 0x88);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
  if ((3 < *(int *)(param_1 + 0x68)) && (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x70))();
  }
  if ((3 < *(int *)(param_1 + 0x50)) && (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x58))();
  }
  plVar5 = *(long **)(param_1 + 0x80);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  __ZdlPv(param_1);
  return;
}



/* Entry: 10a389a54; end: 10a389c4b;  */

void FUN_10a389a54(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x90);
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_10a389ba8;
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a389ba8;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar4 & 0x1fffffffc) == 4) {
        do {
          uVar4 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar4 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar4 - 1 == 0) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x98);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar4 & 0x1fffffffc) == 4) {
        do {
          uVar4 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar4 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar4 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x88);
    if (plVar5 == (long *)0x0) goto LAB_10a389ba8;
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a389ba8;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar4 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
LAB_10a389ba8:
  func_0x000109d1a1d0(param_1 + 0x10);
  if ((3 < *(int *)(param_1 + 0x68)) && (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x70))();
  }
  if ((3 < *(int *)(param_1 + 0x50)) && (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x58))();
  }
  plVar5 = *(long **)(param_1 + 0x80);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a389c4c; end: 10a38a0ab;  */

void FUN_10a389c4c(long param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0xe0) & 1) == 0) {
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x50);
    iVar2 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x90) = iVar2;
    if (iVar2 == 3) {
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x60);
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_1 + 0x60);
    }
    else if (3 < iVar2) {
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x68);
    iVar2 = *(int *)(param_1 + 0x70);
    *(int *)(param_1 + 0xa8) = iVar2;
    if (iVar2 == 3) {
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x78);
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_1 + 0x78);
    }
    else if (3 < iVar2) {
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_10a375b38(param_1 + 0xd0,param_1 + 0xd8,param_1 + 0x88);
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xd0);
    plVar6 = (long *)(*(long *)(param_1 + 0xd0) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xe0) = 1;
      lVar9 = *(long *)(param_1 + 0xc0);
      plVar6 = (long *)(lVar9 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar8 = *plVar6;
        if (lVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_38);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
    }
  }
  plVar6 = *(long **)(param_1 + 0xc0);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a389f98);
    (*pcVar5)();
  }
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0xd0);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  if ((3 < *(int *)(param_1 + 0xa8)) && (*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0xb0))();
  }
  if ((3 < *(int *)(param_1 + 0x90)) && (*(undefined8 **)(param_1 + 0x98) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x98))();
  }
  plVar6 = *(long **)(param_1 + 0xd8);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  if ((3 < *(int *)(param_1 + 0x70)) && (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x78))();
  }
  if ((3 < *(int *)(param_1 + 0x58)) && (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x60))();
  }
  plVar6 = *(long **)(param_1 + 0x48);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a38a0ac; end: 10a38a27f;  */

void FUN_10a38a0ac(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    plVar4 = *(long **)(param_1 + 0xc0);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0xd0);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    if ((3 < *(int *)(param_1 + 0xa8)) && (*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(param_1 + 0xb0))();
    }
    if ((3 < *(int *)(param_1 + 0x90)) && (*(undefined8 **)(param_1 + 0x98) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(param_1 + 0x98))();
    }
    plVar4 = *(long **)(param_1 + 0xd8);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
  }
  if ((3 < *(int *)(param_1 + 0x70)) && (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x78))();
  }
  if ((3 < *(int *)(param_1 + 0x58)) && (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x60))();
  }
  plVar4 = *(long **)(param_1 + 0x48);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a38a280; end: 10a38a563;  */

void FUN_10a38a280(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
    FUN_10a3523ac(param_1 + 0x90,param_1 + 0x48);
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x90);
    plVar6 = (long *)(*(long *)(param_1 + 0x90) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x80) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x98) = 1;
      lVar9 = *(long *)(param_1 + 0x80);
      plVar6 = (long *)(lVar9 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar8 = *plVar6;
        if (lVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_38);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
    }
  }
  lVar9 = *(long *)(param_1 + 0x80);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x80) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar9 + 0xa8) & 1) != 0) {
      func_0x00010a3522ec(param_1 + 0x10,lVar9 + 0x98);
      plVar6 = *(long **)(param_1 + 0x80);
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar7 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar7 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar7 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      plVar6 = *(long **)(param_1 + 0x90);
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar7 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar7 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar7 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      plVar6 = *(long **)(param_1 + 0x78);
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      if (*(char *)(param_1 + 0x6f) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x58));
      }
      plVar6 = *(long **)(param_1 + 0x50);
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar9 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a38a4a0);
  (*pcVar5)();
}



/* Entry: 10a38a564; end: 10a38a70b;  */

void FUN_10a38a564(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
    plVar5 = *(long **)(param_1 + 0x78);
    if (plVar5 != (long *)0x0) {
      plVar2 = plVar5 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (*(char *)(param_1 + 0x6f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x58));
    }
    plVar5 = *(long **)(param_1 + 0x50);
    if (plVar5 == (long *)0x0) goto LAB_10a38a6f4;
    plVar2 = plVar5 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    plVar5 = *(long **)(param_1 + 0x80);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x90);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x78);
    if (plVar5 != (long *)0x0) {
      plVar2 = plVar5 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (*(char *)(param_1 + 0x6f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x58));
    }
    plVar5 = *(long **)(param_1 + 0x50);
    if (plVar5 == (long *)0x0) goto LAB_10a38a6f4;
    plVar2 = plVar5 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_10a38a6f4:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a38a70c; end: 10a38a7ef;  */

undefined1  [16] FUN_10a38a70c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1e;
  auVar1._0_8_ = &UNK_10f652b1a;
  return auVar1;
}



/* Entry: 10a38a7f0; end: 10a38a8bf;  */

long * FUN_10a38a7f0(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  plVar1 = param_1;
  FUN_10a3c575c(param_1,param_2 + 1);
  lVar3 = *param_2;
  *plVar1 = lVar3;
  plVar1[2] = (long)&PTR_DAT_110bcf758;
  plVar1[7] = (long)&PTR_DAT_110bcf7b0;
  plVar1[0xd] = (long)&PTR_DAT_110bcf7d0;
  plVar1[0x16] = (long)&PTR_DAT_110bcf840;
  *(long *)((long)plVar1 + *(long *)(lVar3 + -0x18)) = param_2[3];
  plVar1[0x17] = (long)&PTR_DAT_110bcf870;
  plVar1[0x3e] = 0;
  puVar2 = (undefined8 *)0x58;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_110bf7fc8;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  *(undefined8 *)((long)puVar2 + 0x4d) = 0;
  *(undefined8 *)((long)puVar2 + 0x45) = 0;
  puVar2[4] = 0;
  puVar2[3] = 0;
  param_1[0x3f] = (long)(puVar2 + 3);
  param_1[0x40] = (long)puVar2;
  FUN_10a5cf1fc(param_1 + 0x3f);
  return param_1;
}



/* Entry: 10a38a8c0; end: 10a38a9e3;  */

void FUN_10a38a8c0(long param_1,long *param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  ppuVar2 = &puStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = 0xb;
  puStack_50 = &DAT_10f651cff;
  uStack_38 = 0x84a6743d00000001;
  uStack_40 = 0x214448f48510e152;
  func_0x00010a3c7a18();
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bc89e8);
  if ((int)plVar1 != 0) {
    ppuVar2 = &PTR_DAT_110bc89e8;
  }
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,ppuVar2,0);
  *(int *)(param_1 + 500) = (int)plVar1;
  ppuVar2 = &PTR_DAT_110bc8a08;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bc8a08,0);
  *(int *)(param_1 + 0x1f0) = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    func_0x00010a3c7928();
    (**(code **)(*ppuVar2 + 0x40))(ppuVar2,&PTR_DAT_110bc89e8,*(undefined4 *)((long)param_2 + 500));
                    /* WARNING: Could not recover jumptable at 0x00010a38a9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*ppuVar2 + 0x40))(ppuVar2,&PTR_DAT_110bc8a08,(int)param_2[0x3e]);
    return;
  }
  return;
}



/* Entry: 10a38a9e4; end: 10a38aadf;  */

void FUN_10a38a9e4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_30;
  long lStack_28;
  
  lVar4 = *(long *)(param_1 + 0x1f8);
  uVar5 = *(undefined8 *)(param_1 + 0x170);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(undefined8 *)(lVar4 + 0x30) = uVar5;
    lStack_28 = *(long *)(lVar4 + 0x18);
    uStack_30 = *(undefined8 *)(lVar4 + 0x10);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(uVar5,&uStack_30,&PTR_DAT_110bcf9d0);
    if (lStack_28 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)uVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)uVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a38aae0; end: 10a38b17f;  */

void FUN_10a38aae0(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f63972b,0x1a);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bcfa48;
  pppuVar2 = (undefined8 ***)&UNK_10f651d0b;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bcfa48;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bc3458;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a38b160;
    FUN_10a054dac(param_1,&UNK_10f651d0c,FUN_10a3aac1c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a38b160;
    FUN_10a054dac(param_1,&UNK_10f651d1e,FUN_10a3aad68,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a38b160;
    FUN_10a054dac(param_1,&UNK_10f651d32,FUN_10a3aaed4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a38b160;
    FUN_10a054dac(param_1,&UNK_10f651d46,FUN_10a3ab050,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a38b160;
    FUN_10a054dac(param_1,&UNK_10f651d5c,FUN_10a3ab14c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a38b160;
    FUN_10a054dac(param_1,&UNK_10f651d70,FUN_10a3ab254,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a38b160;
    FUN_10a054dac(param_1,&UNK_10f651d87,FUN_10a3ab314,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a38b160;
    FUN_10a054dac(param_1,&UNK_10f651d9a,FUN_10a3ab41c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a38b160;
    FUN_10a054dac(param_1,&UNK_10f651da8,FUN_10a3ab5c0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a38b160;
    FUN_10a054dac(param_1,&UNK_10f651dbc,FUN_10a3abc0c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a38b160;
    FUN_10a054dac(param_1,&UNK_10f651dc4,FUN_10a3abe94,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f410265,FUN_10a3ab41c,FUN_10a3ab5c0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f651dd2,FUN_10a3ac11c,FUN_10a3abe94);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f651ddd,FUN_10a3ac2c0,FUN_10a3ac388);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f651dec,FUN_10a3ac46c,FUN_10a3ac524);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f651df9,FUN_10a3ac5e4,FUN_10a3ac69c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64c8e2,FUN_10a3ac75c,FUN_10a3ac814);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f634028,FUN_10a3ac8d4,FUN_10a3ac98c);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f63972b,0x1a);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a38b160:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a38b164);
  (*pcVar6)();
}



/* Entry: 10a38b180; end: 10a38b28f;  */

bool FUN_10a38b180(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  if (((((((0x178 < *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18)) &&
          ((*(byte *)(param_1 + 0x3a0) & 1) == 0)) && ((*(byte *)(param_1 + 0x410) & 1) == 0)) &&
        ((((*(byte *)(param_1 + 0x460) & 1) == 0 && ((*(byte *)(param_1 + 0x3a1) & 1) == 0)) &&
         (((*(byte *)(param_1 + 0x411) & 1) == 0 && ((*(byte *)(param_1 + 0x461) & 1) == 0)))))) &&
       ((*(long *)(param_1 + 0x288) == 0 || (*(long *)(*(long *)(param_1 + 0x288) + 8) == -1)))) &&
      ((*(long *)(param_1 + 0x278) == 0 || (*(long *)(*(long *)(param_1 + 0x278) + 8) == -1)))) &&
     (((lVar4 = param_1, FUN_10a4247b0(), lVar4 == 0 &&
       ((ulong)(*(long *)(param_1 + 0x2a8) - *(long *)(param_1 + 0x2a0)) < 0x11)) &&
      (*(long *)(param_1 + 0x260) != 0)))) {
    plVar3 = *(long **)(*(long *)(param_1 + 0x260) + 0xe0);
    if (plVar3 == (long *)0x0) {
      return false;
    }
    (**(code **)(*plVar3 + 0x90))();
    lVar4 = *plVar3;
    if ((lVar4 != 0) &&
       ((*(char *)(param_1 + 0x358) != '\x01' ||
        (*(long *)(lVar4 + 0x40) == *(long *)(lVar4 + 0x48))))) {
      uVar1 = *(uint *)(lVar4 + 0xf0);
      if (uVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar1 != 0) {
          uVar2 = (ulong)(*(long *)(lVar4 + 0x18) - *(long *)(lVar4 + 0x10)) / (ulong)uVar1;
        }
        return (uVar2 & 0xffffffc0) == 0;
      }
      return true;
    }
  }
  return false;
}



/* Entry: 10a38b290; end: 10a38b29b;  */

void FUN_10a38b290(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a38b298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c8))();
  return;
}



/* Entry: 10a38b29c; end: 10a38b537;  */

undefined *** FUN_10a38b29c(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  code **ppcVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_2d8 [8];
  undefined **ppuStack_2d0;
  undefined ***pppuStack_2c8;
  undefined1 **ppuStack_2c0;
  code *pcStack_2b8;
  undefined8 auStack_2a8 [2];
  char cStack_291;
  code *pcStack_290;
  undefined **appuStack_288 [7];
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  code *pcStack_238;
  undefined **ppuStack_230;
  undefined8 *puStack_228;
  long lStack_1f8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_198;
  long *plStack_190;
  undefined8 auStack_188 [2];
  char cStack_171;
  code *pcStack_170;
  undefined **ppuStack_168;
  long lStack_160;
  code *pcStack_130;
  undefined **ppuStack_128;
  long lStack_120;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a2d5304();
  pcStack_130 = FUN_10a3ace48;
  ppuStack_128 = &PTR_FUN_110bceca8;
  plVar4 = param_2;
  lStack_120 = param_1;
  FUN_10a38b538(param_2,&PTR_DAT_110bce9e8,&pcStack_130,0);
  (*(code *)*ppuStack_128)(&ppuStack_128);
  if (((ulong)plVar4 & 1) == 0) {
    uStack_198 = 0;
    plStack_190 = (long *)0x0;
    FUN_10a38b704(param_1 + 0x260,&uStack_198);
    plVar4 = plStack_190;
    if (plStack_190 != (long *)0x0) {
      plVar1 = plStack_190 + 1;
      do {
        lVar12 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_190 + 0x10))(plStack_190);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  pcStack_170 = FUN_10a3ad184;
  ppuStack_168 = &PTR_FUN_110bcecd8;
  pcStack_f0 = FUN_10a3ad184;
  ppuStack_e8 = &PTR_FUN_110bcecd8;
  uStack_a0 = CONCAT17(4,(undefined7)uStack_a0);
  uStack_b0 = CONCAT35(uStack_b0._5_3_,0x6e696b73);
  pcStack_98 = FUN_10a3acf04;
  ppuStack_90 = &PTR_FUN_110bcecc0;
  puVar5 = (undefined8 *)0x58;
  lStack_160 = param_1;
  lStack_e0 = param_1;
  __Znwm();
  *puVar5 = FUN_10a3ad184;
  puVar5[1] = &PTR_FUN_110bcecd8;
  puVar5[2] = param_1;
  puVar5[9] = uStack_a8;
  puVar5[8] = uStack_b0;
  puVar5[10] = uStack_a0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  puStack_88 = puVar5;
  func_0x000107c2b054(auStack_188,&UNK_10f651d0b);
  ppuVar8 = &PTR_DAT_110bcea08;
  ppcVar10 = &pcStack_98;
  uVar11 = 0;
  (**(code **)(*param_2 + 0x250))(param_2,&PTR_DAT_110bcea08,ppcVar10,0,auStack_188);
  if (cStack_171 < '\0') {
    __ZdlPv(auStack_188[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (uStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  pppuVar6 = &ppuStack_168;
  (*(code *)*ppuStack_168)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pppuVar6;
  }
  ___stack_chk_fail();
  FUN_10a0e3194(&uStack_198);
  __Unwind_Resume();
  pcStack_1a8 = FUN_10a38b538;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_290 = *ppcVar10;
  puStack_1b0 = &stack0xfffffffffffffff0;
  (**(code **)(ppcVar10[1] + 0x10))(appuStack_288,ppcVar10 + 1);
  FUN_109ffe064(&uStack_250,*ppuVar8,ppuVar8[1]);
  pcStack_238 = FUN_10a3acb8c;
  ppuStack_230 = &PTR_FUN_110bcfb80;
  puVar5 = (undefined8 *)0x58;
  __Znwm();
  *puVar5 = pcStack_290;
  (*(code *)appuStack_288[0][2])(puVar5 + 1,appuStack_288);
  puVar5[9] = uStack_248;
  puVar5[8] = uStack_250;
  puVar5[10] = lStack_240;
  uStack_248 = 0;
  lStack_240 = 0;
  uStack_250 = 0;
  puStack_228 = puVar5;
  func_0x000107c2b054(auStack_2a8,&UNK_10f651d0b);
  ppuVar9 = ppuVar8;
  (*(code *)(*pppuVar6)[0x4a])(pppuVar6,ppuVar8,&pcStack_238,uVar11,auStack_2a8);
  if (cStack_291 < '\0') {
    __ZdlPv(auStack_2a8[0]);
  }
  (*(code *)*ppuStack_230)(&ppuStack_230);
  if (lStack_240 < 0) {
    __ZdlPv(uStack_250);
  }
  pppuVar7 = appuStack_288;
  (*(code *)*appuStack_288[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return pppuVar6;
  }
  ___stack_chk_fail();
  if (cStack_291 < '\0') {
    __ZdlPv(auStack_2a8[0]);
  }
  (*(code *)*ppuStack_230)(&ppuStack_230);
  if (lStack_240 < 0) {
    __ZdlPv(uStack_250);
  }
  (*(code *)*appuStack_288[0])(appuStack_288);
  pppuVar6 = pppuVar7;
  __Unwind_Resume();
  pcStack_2b8 = FUN_10a38b704;
  if (*pppuVar6 != (undefined **)*ppuVar9) {
    ppuStack_2d0 = ppuVar8;
    pppuStack_2c8 = pppuVar7;
    ppuStack_2c0 = &puStack_1b0;
    FUN_10a192264(pppuVar6);
    func_0x00010a1bd170(auStack_2d8);
    FUN_10a3aca4c(pppuVar6);
  }
  return pppuVar6;
}



/* Entry: 10a38b538; end: 10a38b703;  */

undefined8 **
FUN_10a38b538(undefined8 **param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined1 auStack_138 [8];
  undefined8 *puStack_130;
  undefined8 **ppuStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 uStack_f0;
  undefined8 *apuStack_e8 [7];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f0 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_e8,param_3 + 1);
  FUN_109ffe064(&uStack_b0,*param_2,param_2[1]);
  pcStack_98 = FUN_10a3acb8c;
  ppuStack_90 = &PTR_FUN_110bcfb80;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  *puVar1 = uStack_f0;
  (*(code *)apuStack_e8[0][2])(puVar1 + 1,apuStack_e8);
  puVar1[9] = uStack_a8;
  puVar1[8] = uStack_b0;
  puVar1[10] = lStack_a0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  uStack_b0 = 0;
  puStack_88 = puVar1;
  func_0x000107c2b054(auStack_108,&UNK_10f651d0b);
  puVar1 = param_2;
  (*(code *)(*param_1)[0x4a])(param_1,param_2,&pcStack_98,param_4,auStack_108);
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  ppuVar2 = apuStack_e8;
  (*(code *)*apuStack_e8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*apuStack_e8[0])(apuStack_e8);
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  pcStack_118 = FUN_10a38b704;
  if (*ppuVar3 != (undefined8 *)*puVar1) {
    puStack_130 = param_2;
    ppuStack_128 = ppuVar2;
    puStack_120 = &stack0xfffffffffffffff0;
    FUN_10a192264(ppuVar3);
    func_0x00010a1bd170(auStack_138);
    FUN_10a3aca4c(ppuVar3);
  }
  return ppuVar3;
}



/* Entry: 10a38b704; end: 10a38b7b3;  */

long * FUN_10a38b704(long *param_1,long *param_2)

{
  undefined1 auStack_28 [8];
  
  if (*param_1 != *param_2) {
    FUN_10a192264(param_1);
    func_0x00010a1bd170(auStack_28);
    FUN_10a3aca4c(param_1);
  }
  return param_1;
}



/* Entry: 10a38b7b4; end: 10a38b85b;  */

void FUN_10a38b7b4(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plStack_38 = (long *)param_3[1];
  uStack_40 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_30 = param_4;
  uStack_28 = param_5;
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_40,&uStack_30);
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



/* Entry: 10a38b85c; end: 10a38b97b;  */

void FUN_10a38b85c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  plVar4 = (long *)param_3[1];
  uStack_40 = param_4;
  uStack_38 = param_5;
  if ((plVar4 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_48 = plVar4, plVar4 == (long *)0x0)) {
    uStack_60 = 0;
    plStack_58 = (long *)0x0;
  }
  else {
    uStack_60 = *param_3;
    plVar1 = plVar4 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plStack_58 = plVar4;
      uStack_50 = uStack_60;
    } while (cVar2 != '\0');
  }
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_60,&uStack_40);
  plVar4 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a38b97c; end: 10a38c2ab;  */

void FUN_10a38b97c(long param_1,long *param_2,undefined **param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined ***pppuVar3;
  char cVar4;
  bool bVar5;
  undefined ***pppuVar6;
  long **pplVar7;
  long *plVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined8 *extraout_x8;
  undefined **ppuVar12;
  undefined *puVar13;
  long *plVar14;
  long lVar15;
  undefined ***pppuVar16;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **ppuVar17;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined ***pppuStack_140;
  long *plStack_138;
  long lStack_130;
  long *plStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined ***pppuStack_110;
  undefined ***pppuStack_108;
  undefined **ppuStack_100;
  undefined **appuStack_f8 [2];
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  long *plStack_d8;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = param_3;
  FUN_10a2d597c();
  lVar15 = *(long *)(param_1 + 0x260);
  ppuStack_e8 = (undefined **)FUN_10a3ad348;
  ppuStack_e0 = &PTR_FUN_110bcecf0;
  plStack_d8 = param_2;
  if (lVar15 == 0) {
    ppuStack_a8 = (undefined **)0x0;
    FUN_10a2e9e64(&ppuStack_e8,&ppuStack_a8);
  }
  else if (param_3 == (undefined **)0x0) {
    FUN_10a3ad2b8(&ppuStack_a8,lVar15);
    FUN_10a3ad22c(&ppuStack_e8,&ppuStack_a8);
    if (ppuStack_a0 != (undefined **)0x0) {
      ppuVar12 = ppuStack_a0 + 1;
      do {
        puVar13 = *ppuVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
        if (bVar5) {
          *ppuVar12 = puVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_10a38bb1c:
      ppuVar12 = ppuStack_a0;
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuStack_a0 + 0x10))(ppuStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar12);
      }
    }
  }
  else {
    unaff_x23 = *(undefined ***)(lVar15 + 0x40);
    unaff_x24 = *(undefined ***)(lVar15 + 0x48);
    if (*(char *)(param_3 + 0x17) == '\x01') {
      ppuStack_a8 = (undefined **)FUN_10a3ad348;
      ppuStack_a0 = &PTR_FUN_110bcecf0;
      ppuVar10 = unaff_x24;
      plStack_98 = param_2;
      FUN_10a069d9c(param_3,unaff_x23,unaff_x24,&ppuStack_a8);
    }
    else {
      ppuVar12 = param_3 + 0x11;
      ppuStack_a8 = unaff_x23;
      ppuStack_a0 = unaff_x24;
      func_0x00010a35bf90(ppuVar12,&ppuStack_a8);
      pppuVar16 = &ppuStack_a0;
      pppuVar3 = &ppuStack_a8;
      if (ppuVar12 != (undefined **)0x0) {
        pppuVar16 = (undefined ***)(ppuVar12 + 5);
        pppuVar3 = (undefined ***)(ppuVar12 + 4);
      }
      ppuVar12 = *pppuVar16;
      ppuVar17 = *pppuVar3;
      if (unaff_x23 == ppuVar17 && unaff_x24 == ppuVar12) {
        FUN_10a3ad2b8(&ppuStack_a8,lVar15);
        FUN_10a3ad22c(&ppuStack_e8,&ppuStack_a8);
        if (ppuStack_a0 != (undefined **)0x0) {
          ppuVar12 = ppuStack_a0 + 1;
          do {
            puVar13 = *ppuVar12;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
            if (bVar5) {
              *ppuVar12 = puVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto LAB_10a38bb1c;
        }
        goto LAB_10a38bb38;
      }
      ppuStack_a8 = ppuStack_e8;
      (*(code *)ppuStack_e0[3])(&ppuStack_a0,&ppuStack_e0);
      FUN_10a069d9c(param_3,ppuVar17,ppuVar12,&ppuStack_a8);
      ppuVar10 = ppuVar12;
    }
    (*(code *)*ppuStack_a0)(&ppuStack_a0);
  }
LAB_10a38bb38:
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  pppuStack_110 = (undefined ***)0x0;
  pppuStack_108 = (undefined ***)0x0;
  plVar8 = *(long **)(param_1 + 0x278);
  if (((plVar8 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), pppuStack_108 = (undefined ***)plVar8,
      plVar8 == (long *)0x0)) ||
     (pppuVar16 = *(undefined ****)(param_1 + 0x270), pppuStack_110 = pppuVar16,
     pppuVar16 == (undefined ***)0x0)) {
    ppuVar12 = (undefined **)param_2[0x4f];
    param_2[0x4f] = 0;
    param_2[0x4e] = 0;
    if (ppuVar12 != (undefined **)0x0) {
LAB_10a38bbd0:
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar12);
    }
  }
  else if (param_3 == (undefined **)0x0) {
    FUN_10a3ad44c(&ppuStack_100,pppuVar16);
    if (appuStack_f8[0] != (undefined **)0x0) {
      ppuVar12 = appuStack_f8[0] + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
        if (bVar5) {
          *ppuVar12 = *ppuVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar15 = param_2[0x4f];
    param_2[0x4f] = (long)appuStack_f8[0];
    param_2[0x4e] = (long)ppuStack_100;
    if (lVar15 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (appuStack_f8[0] != (undefined **)0x0) {
      ppuVar12 = appuStack_f8[0] + 1;
      do {
        puVar13 = *ppuVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
        if (bVar5) {
          *ppuVar12 = puVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_10a38bf84:
      ppuVar12 = appuStack_f8[0];
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*appuStack_f8[0] + 0x10))(appuStack_f8[0]);
        goto LAB_10a38bbd0;
      }
    }
  }
  else {
    unaff_x24 = pppuVar16[8];
    unaff_x23 = pppuVar16[9];
    if (*(char *)(param_3 + 0x17) == '\x01') {
      pppuVar16 = &ppuStack_a0;
      ppuStack_a8 = (undefined **)FUN_10a3ad89c;
      ppuStack_a0 = &PTR_FUN_110bced30;
      ppuVar10 = unaff_x23;
      plStack_98 = param_2 + 0x4e;
      FUN_10a3ad4dc(param_3,unaff_x24,unaff_x23,&ppuStack_a8);
      ppuVar12 = ppuStack_a0;
    }
    else {
      ppuVar10 = param_3 + 0x11;
      ppuStack_100 = unaff_x24;
      appuStack_f8[0] = unaff_x23;
      func_0x00010a35bf90(ppuVar10,&ppuStack_100);
      pppuVar3 = appuStack_f8;
      pppuVar6 = &ppuStack_100;
      if (ppuVar10 != (undefined **)0x0) {
        pppuVar3 = (undefined ***)(ppuVar10 + 5);
        pppuVar6 = (undefined ***)(ppuVar10 + 4);
      }
      ppuVar10 = *pppuVar3;
      if ((unaff_x24 == *pppuVar6) && (unaff_x23 == ppuVar10)) {
        FUN_10a3ad44c(&ppuStack_100,pppuVar16);
        if (appuStack_f8[0] != (undefined **)0x0) {
          ppuVar12 = appuStack_f8[0] + 2;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
            if (bVar5) {
              *ppuVar12 = *ppuVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar15 = param_2[0x4f];
        param_2[0x4f] = (long)appuStack_f8[0];
        param_2[0x4e] = (long)ppuStack_100;
        if (lVar15 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (appuStack_f8[0] != (undefined **)0x0) {
          ppuVar12 = appuStack_f8[0] + 1;
          do {
            puVar13 = *ppuVar12;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
            if (bVar5) {
              *ppuVar12 = puVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto LAB_10a38bf84;
        }
        goto LAB_10a38bbd4;
      }
      pppuVar16 = &ppuStack_e0;
      ppuStack_e8 = (undefined **)FUN_10a3ad95c;
      ppuStack_e0 = &PTR_FUN_110bced50;
      plStack_d8 = param_2 + 0x4e;
      FUN_10a3ad4dc(param_3,*pppuVar6,ppuVar10,&ppuStack_e8);
      ppuVar12 = ppuStack_e0;
    }
    (*(code *)*ppuVar12)(pppuVar16);
  }
LAB_10a38bbd4:
  pppuVar16 = pppuStack_108;
  if (pppuStack_108 != (undefined ***)0x0) {
    plVar8 = (long *)(pppuStack_108 + 1);
    do {
      lVar15 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)((long)*pppuStack_108 + 0x10))(pppuStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar16);
    }
  }
  pppuStack_110 = (undefined ***)0x0;
  pppuStack_108 = (undefined ***)0x0;
  pppuVar16 = *(undefined ****)(param_1 + 0x288);
  if (((pppuVar16 == (undefined ***)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), pppuStack_108 = pppuVar16,
      pppuVar16 == (undefined ***)0x0)) ||
     (pppuVar16 = *(undefined ****)(param_1 + 0x280), pppuStack_110 = pppuVar16,
     pppuVar16 == (undefined ***)0x0)) {
    ppuVar12 = (undefined **)param_2[0x51];
    param_2[0x51] = 0;
    param_2[0x50] = 0;
    if (ppuVar12 != (undefined **)0x0) {
LAB_10a38bc94:
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar12);
    }
  }
  else if (param_3 == (undefined **)0x0) {
    FUN_10a3ada1c(&ppuStack_100,pppuVar16);
    ppuVar12 = appuStack_f8[0];
    if (appuStack_f8[0] != (undefined **)0x0) {
      ppuVar17 = appuStack_f8[0] + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar5) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar15 = param_2[0x51];
    param_2[0x51] = (long)appuStack_f8[0];
    param_2[0x50] = (long)ppuStack_100;
    if (lVar15 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (ppuVar12 != (undefined **)0x0) {
      ppuVar17 = ppuVar12 + 1;
      do {
        puVar13 = *ppuVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar5) {
          *ppuVar17 = puVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_10a38c038:
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuVar12 + 0x10))(ppuVar12);
        goto LAB_10a38bc94;
      }
    }
  }
  else {
    unaff_x24 = pppuVar16[8];
    unaff_x23 = pppuVar16[9];
    if (*(char *)(param_3 + 0x17) == '\x01') {
      pppuVar16 = &ppuStack_a0;
      ppuStack_a8 = (undefined **)FUN_10a3addf0;
      ppuStack_a0 = &PTR_FUN_110bced90;
      ppuVar10 = unaff_x23;
      plStack_98 = param_2 + 0x50;
      FUN_10a3adab0(param_3,unaff_x24,unaff_x23,&ppuStack_a8);
      ppuVar12 = ppuStack_a0;
    }
    else {
      ppuVar10 = param_3 + 0x11;
      ppuStack_100 = unaff_x24;
      appuStack_f8[0] = unaff_x23;
      func_0x00010a35bf90(ppuVar10,&ppuStack_100);
      pppuVar3 = appuStack_f8;
      pppuVar6 = &ppuStack_100;
      if (ppuVar10 != (undefined **)0x0) {
        pppuVar3 = (undefined ***)(ppuVar10 + 5);
        pppuVar6 = (undefined ***)(ppuVar10 + 4);
      }
      ppuVar10 = *pppuVar3;
      if ((unaff_x24 == *pppuVar6) && (unaff_x23 == ppuVar10)) {
        FUN_10a3ada1c(&ppuStack_100,pppuVar16);
        ppuVar12 = appuStack_f8[0];
        if (appuStack_f8[0] != (undefined **)0x0) {
          ppuVar17 = appuStack_f8[0] + 2;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
            if (bVar5) {
              *ppuVar17 = *ppuVar17 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar15 = param_2[0x51];
        param_2[0x51] = (long)appuStack_f8[0];
        param_2[0x50] = (long)ppuStack_100;
        if (lVar15 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (ppuVar12 != (undefined **)0x0) {
          ppuVar17 = ppuVar12 + 1;
          do {
            puVar13 = *ppuVar17;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
            if (bVar5) {
              *ppuVar17 = puVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto LAB_10a38c038;
        }
        goto LAB_10a38bc98;
      }
      pppuVar16 = &ppuStack_e0;
      ppuStack_e8 = (undefined **)FUN_10a3adeb0;
      ppuStack_e0 = &PTR_FUN_110bcedb0;
      plStack_d8 = param_2 + 0x50;
      FUN_10a3adab0(param_3,*pppuVar6,ppuVar10,&ppuStack_e8);
      ppuVar12 = ppuStack_e0;
    }
    (*(code *)*ppuVar12)(pppuVar16);
  }
LAB_10a38bc98:
  pppuVar16 = pppuStack_108;
  if (pppuStack_108 != (undefined ***)0x0) {
    pppuVar3 = pppuStack_108 + 1;
    do {
      ppuVar12 = *pppuVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
      if (bVar5) {
        *pppuVar3 = (undefined **)((long)ppuVar12 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar12 == (undefined **)0x0) {
      (*(code *)(*pppuStack_108)[2])(pppuStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar16);
    }
  }
  pppuStack_110 = (undefined ***)0x0;
  pppuStack_108 = (undefined ***)0x0;
  plVar8 = *(long **)(param_1 + 0x298);
  if (((plVar8 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), pppuStack_108 = (undefined ***)plVar8,
      plVar8 == (long *)0x0)) ||
     (pppuVar16 = *(undefined ****)(param_1 + 0x290), pppuStack_110 = pppuVar16,
     pppuVar16 == (undefined ***)0x0)) {
    ppuVar12 = (undefined **)param_2[0x53];
    param_2[0x53] = 0;
    param_2[0x52] = 0;
    if (ppuVar12 == (undefined **)0x0) goto LAB_10a38bd5c;
  }
  else {
    if (param_3 != (undefined **)0x0) {
      unaff_x24 = pppuVar16[8];
      unaff_x23 = pppuVar16[9];
      if (*(char *)(param_3 + 0x17) == '\x01') {
        pppuVar16 = &ppuStack_a0;
        ppuStack_a8 = (undefined **)FUN_10a3ae418;
        ppuStack_a0 = &PTR_FUN_110bcedf0;
        ppuVar10 = unaff_x23;
        plStack_98 = param_2 + 0x52;
        FUN_10a3ae058(param_3,unaff_x24,unaff_x23,&ppuStack_a8);
        ppuVar12 = ppuStack_a0;
      }
      else {
        ppuVar10 = param_3 + 0x11;
        ppuStack_100 = unaff_x24;
        appuStack_f8[0] = unaff_x23;
        func_0x00010a35bf90(ppuVar10,&ppuStack_100);
        pppuVar3 = appuStack_f8;
        pppuVar6 = &ppuStack_100;
        if (ppuVar10 != (undefined **)0x0) {
          pppuVar3 = (undefined ***)(ppuVar10 + 5);
          pppuVar6 = (undefined ***)(ppuVar10 + 4);
        }
        ppuVar10 = *pppuVar3;
        if ((unaff_x24 == *pppuVar6) && (unaff_x23 == ppuVar10)) {
          func_0x00010a3adfc8(&ppuStack_100,pppuVar16);
          if (appuStack_f8[0] != (undefined **)0x0) {
            ppuVar12 = appuStack_f8[0] + 2;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
              if (bVar5) {
                *ppuVar12 = *ppuVar12 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar15 = param_2[0x53];
          param_2[0x53] = (long)appuStack_f8[0];
          param_2[0x52] = (long)ppuStack_100;
          if (lVar15 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          if (appuStack_f8[0] == (undefined **)0x0) goto LAB_10a38bd5c;
          ppuVar12 = appuStack_f8[0] + 1;
          do {
            puVar13 = *ppuVar12;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
            if (bVar5) {
              *ppuVar12 = puVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto LAB_10a38c0f0;
        }
        pppuVar16 = &ppuStack_e0;
        ppuStack_e8 = (undefined **)FUN_10a3ae4d8;
        ppuStack_e0 = &PTR_FUN_110bcee10;
        plStack_d8 = param_2 + 0x52;
        FUN_10a3ae058(param_3,*pppuVar6,ppuVar10,&ppuStack_e8);
        ppuVar12 = ppuStack_e0;
      }
      (*(code *)*ppuVar12)(pppuVar16);
      goto LAB_10a38bd5c;
    }
    func_0x00010a3adfc8(&ppuStack_100,pppuVar16);
    if (appuStack_f8[0] != (undefined **)0x0) {
      ppuVar12 = appuStack_f8[0] + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
        if (bVar5) {
          *ppuVar12 = *ppuVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar15 = param_2[0x53];
    param_2[0x53] = (long)appuStack_f8[0];
    param_2[0x52] = (long)ppuStack_100;
    if (lVar15 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (appuStack_f8[0] == (undefined **)0x0) goto LAB_10a38bd5c;
    ppuVar12 = appuStack_f8[0] + 1;
    do {
      puVar13 = *ppuVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
      if (bVar5) {
        *ppuVar12 = puVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_10a38c0f0:
    ppuVar12 = appuStack_f8[0];
    if (puVar13 != (undefined *)0x0) goto LAB_10a38bd5c;
    (**(code **)(*appuStack_f8[0] + 0x10))(appuStack_f8[0]);
  }
  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar12);
LAB_10a38bd5c:
  pppuVar3 = pppuStack_108;
  if (pppuStack_108 != (undefined ***)0x0) {
    plVar8 = (long *)(pppuStack_108 + 1);
    do {
      lVar15 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)((long)*pppuStack_108 + 0x10))(pppuStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar3);
    }
  }
  puVar13 = (undefined *)(param_1 + 0x318);
  FUN_10a0d4bb0(param_2,puVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    (*(code *)**pppuVar16)(pppuVar16);
    FUN_10a3adf70(&pppuStack_110);
    plVar8 = param_2;
    __Unwind_Resume();
    plStack_138 = (long *)pppuVar3;
    pcStack_118 = FUN_10a38c2ac;
    ppuStack_150 = unaff_x24;
    ppuStack_148 = unaff_x23;
    pppuStack_140 = pppuVar16;
    lStack_130 = param_1;
    plStack_128 = param_2;
    puStack_120 = &stack0xfffffffffffffff0;
    if (ppuVar10 == (undefined **)0x0) {
      plVar14 = plVar8;
      puVar11 = puVar13;
      func_0x00010a0fda30();
    }
    else {
      plStack_158 = (long *)plVar8[9];
      plStack_160 = (long *)plVar8[8];
      ppuVar12 = ppuVar10 + 0x11;
      func_0x00010a35bf90(ppuVar12,&plStack_160);
      ppuVar17 = (undefined **)((ulong)&plStack_160 | 8);
      pplVar7 = &plStack_160;
      if (ppuVar12 != (undefined **)0x0) {
        ppuVar17 = ppuVar12 + 5;
        pplVar7 = (long **)(ppuVar12 + 4);
      }
      puVar11 = *ppuVar17;
      plVar14 = *pplVar7;
    }
    FUN_10a0d4c50(&plStack_170,plVar8[0x2e],plVar14,puVar11);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (plStack_170 + 0x2a,plVar8 + 0x2a);
    uVar1 = (*(ushort *)(plVar8 + 0x30) >> 1 & 1) << 1;
    uVar2 = *(ushort *)(plStack_170 + 0x30) & 0xfffc;
    *(ushort *)(plStack_170 + 0x30) = uVar2 | *(ushort *)(plStack_170 + 0x30) & 1 | uVar1;
    *(ushort *)(plStack_170 + 0x30) = uVar2 | uVar1 | *(ushort *)(plVar8 + 0x30) & 1;
    plStack_160 = plStack_170;
    plStack_158 = plStack_168;
    if (plStack_168 != (long *)0x0) {
      plVar14 = plStack_168 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *plVar14 = *plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_10a3c7ce8(puVar13,&plStack_160);
    plVar14 = plStack_158;
    if (plStack_158 != (long *)0x0) {
      plVar9 = plStack_158 + 1;
      do {
        lVar15 = *plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_158 + 0x10))(plStack_158);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    plVar14 = plStack_170;
    plVar9 = plVar8;
    (**(code **)(*plVar8 + 0x128))(plVar8);
    (**(code **)(*plVar14 + 0x130))(plVar14,plVar9);
    (**(code **)(*plVar8 + 0x218))(plVar8,plStack_170,ppuVar10);
    extraout_x8[1] = plStack_168;
    *extraout_x8 = plStack_170;
    return;
  }
  return;
}



/* Entry: 10a38c2ac; end: 10a38c44f;  */

void FUN_10a38c2ac(undefined8 *param_1,long *param_2,undefined8 param_3,long param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long **pplVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    plVar9 = param_2;
    uVar8 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = (long *)param_2[9];
    plStack_50 = (long *)param_2[8];
    lVar10 = param_4 + 0x88;
    func_0x00010a35bf90(lVar10,&plStack_50);
    puVar3 = (undefined8 *)((ulong)&plStack_50 | 8);
    pplVar6 = &plStack_50;
    if (lVar10 != 0) {
      puVar3 = (undefined8 *)(lVar10 + 0x28);
      pplVar6 = (long **)(lVar10 + 0x20);
    }
    uVar8 = *puVar3;
    plVar9 = *pplVar6;
  }
  FUN_10a0d4c50(&plStack_60,param_2[0x2e],plVar9,uVar8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (plStack_60 + 0x2a,param_2 + 0x2a);
  uVar1 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar2 = *(ushort *)(plStack_60 + 0x30) & 0xfffc;
  *(ushort *)(plStack_60 + 0x30) = uVar2 | *(ushort *)(plStack_60 + 0x30) & 1 | uVar1;
  *(ushort *)(plStack_60 + 0x30) = uVar2 | uVar1 | *(ushort *)(param_2 + 0x30) & 1;
  plStack_50 = plStack_60;
  plStack_48 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar9 = plStack_58 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10a3c7ce8(param_3,&plStack_50);
  plVar9 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar7 = plStack_48 + 1;
    do {
      lVar10 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_60;
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x128))(param_2);
  (**(code **)(*plVar9 + 0x130))(plVar9,plVar7);
  (**(code **)(*param_2 + 0x218))(param_2,plStack_60,param_4);
  param_1[1] = plStack_58;
  *param_1 = plStack_60;
  return;
}



/* Entry: 10a38c450; end: 10a38c4bb;  */

long FUN_10a38c450(long param_1)

{
  undefined8 auStack_40 [2];
  char cStack_29;
  
  FUN_10a0d09b4(auStack_40);
  param_1 = param_1 + 0x318;
  FUN_10a428b30(param_1,auStack_40);
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  return param_1;
}



/* Entry: 10a38c4bc; end: 10a38c59f;  */

undefined1  [16] FUN_10a38c4bc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1e;
  auVar1._0_8_ = &UNK_10f652b69;
  return auVar1;
}



/* Entry: 10a38c5a0; end: 10a38c603;  */

void FUN_10a38c5a0(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  
  uStack_50 = 0xffffffff00000002;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f651d0b;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_1c = 0x16e00000124;
  FUN_10a38c604(param_1,&uStack_58);
  FUN_10a3ae694();
  return;
}



/* Entry: 10a38c604; end: 10a38c6db;  */

/* WARNING: Removing unreachable block (ram,0x00010a38c69c) */

undefined1  [16] FUN_10a38c604(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f652b69,0x1e);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a3ae598(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a38c6dc; end: 10a38c747;  */

void FUN_10a38c6dc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bc8e88;
  param_1[2] = &PTR_DAT_110bc8f98;
  param_1[7] = &PTR_DAT_110bc8ff0;
  param_1[0xd] = &PTR_DAT_110bc9010;
  param_1[0x41] = &PTR_DAT_110bc9110;
  param_1[0x16] = &PTR_DAT_110bc9080;
  param_1[0x17] = &PTR_DAT_110bc90b0;
  if (param_1[0x40] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110bcc790;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x41] = &PTR_DAT_110bcc8c0;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a38c748; end: 10a38c783;  */

void FUN_10a38c748(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bc8e88;
  param_1[2] = &PTR_DAT_110bc8f98;
  param_1[7] = &PTR_DAT_110bc8ff0;
  param_1[0xd] = &PTR_DAT_110bc9010;
  param_1[0x41] = &PTR_DAT_110bc9110;
  param_1[0x16] = &PTR_DAT_110bc9080;
  param_1[0x17] = &PTR_DAT_110bc90b0;
  if (param_1[0x40] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110bcc790;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x41] = &PTR_DAT_110bcc8c0;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a38c784; end: 10a38c80f;  */

void FUN_10a38c784(void)

{
  FUN_10a38c6dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a38c810; end: 10a38c83f;  */

void FUN_10a38c810(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a38c6dc((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a38c840; end: 10a38c8af;  */

void FUN_10a38c840(long param_1)

{
  long lVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar1 = *(long *)(param_1 + 0x170);
  func_0x000107c2b054(auStack_38,&UNK_10f651e0c);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_38);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a38c8b0; end: 10a38c8b7;  */

void FUN_10a38c8b0(long param_1)

{
  long lVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar1 = *(long *)(param_1 + 0x108);
  func_0x000107c2b054(auStack_38,&UNK_10f651e0c);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_38);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a38c8b8; end: 10a38cc8f;  */

void FUN_10a38c8b8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
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
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_98;
  float fStack_90;
  float fStack_8c;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (*(char *)(param_1 + 0x1f0) == '\x01') {
    lVar8 = *(long *)(param_1 + 0x168);
    lVar7 = *(long *)(lVar8 + 0x120);
    plVar5 = *(long **)(param_1 + 0x200);
    if ((plVar5 == (long *)0x0) || (plVar5[1] == -1)) {
      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
        func_0x00010ae06f08(1,2,&UNK_10f651e21,&UNK_10f651e61,0x24,&UNK_10f651eaa);
      }
      puStack_c8 = (undefined8 *)0x0;
      puStack_c0 = (undefined8 *)0x0;
      uStack_b8 = 0;
      uStack_78 = *(long **)(lVar8 + 0x138);
      uStack_80 = *(long *)(lVar8 + 0x130);
      lVar9 = *(long *)(lVar7 + 0x4d0);
      if (lVar9 == lVar7 + 0x4c8) {
LAB_10a38cc5c:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a38cc60);
        (*pcVar4)();
      }
      do {
        if (*(long *)(lVar9 + 0x10) != 0) {
          plVar5 = (long *)(*(long *)(lVar9 + 0x10) + 0xb0);
          (**(code **)(*plVar5 + 0x18))(plVar5,0x49f6491c8e4b2468);
          plStack_88 = plVar5;
          if ((plVar5 != (long *)0x0) &&
             (lVar6 = lVar7, FUN_10a3df848(lVar7,*(undefined8 *)(lVar9 + 0x10),&uStack_80,1),
             (int)lVar6 != 0)) {
            FUN_10a3ae750(&puStack_c8,&plStack_88);
          }
        }
        lVar9 = *(long *)(lVar9 + 8);
      } while (lVar9 != lVar7 + 0x4c8);
      if (puStack_c8 == puStack_c0) goto LAB_10a38cc5c;
      FUN_10a38cc90(&uStack_80,*puStack_c8);
      if (uStack_78 != (long *)0x0) {
        plVar5 = uStack_78 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar7 = *(long *)(param_1 + 0x200);
      *(long **)(param_1 + 0x200) = uStack_78;
      *(long *)(param_1 + 0x1f8) = uStack_80;
      if (lVar7 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar5 = uStack_78;
      if (uStack_78 != (long *)0x0) {
        plVar1 = uStack_78 + 1;
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
          (**(code **)(*uStack_78 + 0x10))(uStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      if (puStack_c8 != (undefined8 *)0x0) {
        puStack_c0 = puStack_c8;
        __ZdlPv();
      }
      plVar5 = *(long **)(param_1 + 0x200);
    }
    lVar7 = *(long *)(lVar8 + 0x140);
    __ZNSt3__119__shared_weak_count4lockEv();
    uStack_80 = *(long *)(param_1 + 0x1f8);
    lVar8 = *(long *)(uStack_80 + 0x178);
    uStack_78 = plVar5;
    if ((*(byte *)(lVar8 + 0x2a) & 0x24) != 0) {
      FUN_10a3e8fd4(lVar8);
    }
    if ((*(byte *)(lVar7 + 0x2a) >> 6 & 1) != 0) {
      func_0x00010a3e933c(lVar7);
    }
    func_0x000109519fd0(&puStack_c8,lVar8 + 0xc0,lVar7 + 0x100);
    plVar1 = plVar5 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    fVar19 = 0.0;
    fVar10 = 0.0 - fStack_90 / fStack_8c;
    fVar13 = 0.0 - (float)uStack_98 / fStack_8c;
    fVar14 = 0.0 - (float)((ulong)uStack_98 >> 0x20) / fStack_8c;
    fVar20 = 1.0;
    fVar15 = 1.0 / SQRT(fVar10 * fVar10 + fVar13 * fVar13 + fVar14 * fVar14);
    fVar10 = fVar10 * fVar15;
    fVar13 = fVar13 * fVar15;
    fVar14 = fVar14 * fVar15;
    fVar11 = SQRT(fVar10 * fVar10 + fVar13 * fVar13 + fVar14 * fVar14);
    fVar18 = fVar10 + fVar13 * 0.0 + fVar14 * 0.0 + fVar11;
    fVar16 = -1.0;
    fVar12 = 0.0;
    fVar17 = 0.0;
    fVar15 = 0.0;
    if (fVar11 * 1e-06 <= fVar18) {
      fVar12 = fVar10 * 0.0 - fVar14;
      fVar16 = fVar13 + fVar10 * -0.0;
      fVar17 = fVar13 * -0.0 + fVar14 * 0.0;
      fVar15 = fVar18;
    }
    fVar10 = fVar16 * fVar16 + fVar17 * fVar17 + fVar12 * fVar12 + fVar15 * fVar15;
    if (fVar10 == 0.0) {
      fVar16 = 0.0;
      fVar17 = 0.0;
    }
    else {
      fVar10 = 1.0 / SQRT(fVar10);
      fVar20 = fVar15 * fVar10;
      fVar19 = fVar12 * fVar10;
      fVar16 = fVar16 * fVar10;
      fVar17 = fVar17 * fVar10;
    }
    func_0x00010a0d8ae0(lVar7);
    fVar15 = *(float *)(lVar7 + 0x54);
    fVar10 = *(float *)(lVar7 + 0x58);
    fVar11 = *(float *)(lVar7 + 0x5c);
    fVar12 = *(float *)(lVar7 + 0x60);
    uStack_80 = CONCAT44((fVar20 * fVar10 + fVar16 * fVar12 + fVar19 * fVar11) - fVar17 * fVar15,
                         (fVar20 * fVar15 + fVar19 * fVar12 + fVar17 * fVar10) - fVar16 * fVar11);
    uStack_78 = (long *)CONCAT44(((-(fVar15 * fVar19) + fVar20 * fVar12) - fVar16 * fVar10) -
                                 fVar17 * fVar11,
                                 (fVar20 * fVar11 + fVar17 * fVar12 + fVar16 * fVar15) -
                                 fVar19 * fVar10);
    FUN_10a3e82bc(lVar7,&uStack_80);
  }
  return;
}



/* Entry: 10a38cc90; end: 10a38cd1f;  */

void FUN_10a38cc90(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  (**(code **)(*param_2 + 0x50))(&uStack_30);
  param_1[1] = plStack_28;
  *param_1 = uStack_30;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return;
}



/* Entry: 10a38cd20; end: 10a38cd27;  */

void FUN_10a38cd20(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
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
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_98;
  float fStack_90;
  float fStack_8c;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (*(char *)(param_1 + 0x188) == '\x01') {
    lVar8 = *(long *)(param_1 + 0x100);
    lVar7 = *(long *)(lVar8 + 0x120);
    plVar5 = *(long **)(param_1 + 0x198);
    if ((plVar5 == (long *)0x0) || (plVar5[1] == -1)) {
      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
        func_0x00010ae06f08(1,2,&UNK_10f651e21,&UNK_10f651e61,0x24,&UNK_10f651eaa);
      }
      puStack_c8 = (undefined8 *)0x0;
      puStack_c0 = (undefined8 *)0x0;
      uStack_b8 = 0;
      uStack_78 = *(long **)(lVar8 + 0x138);
      uStack_80 = *(long *)(lVar8 + 0x130);
      lVar9 = *(long *)(lVar7 + 0x4d0);
      if (lVar9 == lVar7 + 0x4c8) {
LAB_10a38cc5c:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a38cc60);
        (*pcVar4)();
      }
      do {
        if (*(long *)(lVar9 + 0x10) != 0) {
          plVar5 = (long *)(*(long *)(lVar9 + 0x10) + 0xb0);
          (**(code **)(*plVar5 + 0x18))(plVar5,0x49f6491c8e4b2468);
          plStack_88 = plVar5;
          if ((plVar5 != (long *)0x0) &&
             (lVar6 = lVar7, FUN_10a3df848(lVar7,*(undefined8 *)(lVar9 + 0x10),&uStack_80,1),
             (int)lVar6 != 0)) {
            FUN_10a3ae750(&puStack_c8,&plStack_88);
          }
        }
        lVar9 = *(long *)(lVar9 + 8);
      } while (lVar9 != lVar7 + 0x4c8);
      if (puStack_c8 == puStack_c0) goto LAB_10a38cc5c;
      FUN_10a38cc90(&uStack_80,*puStack_c8);
      if (uStack_78 != (long *)0x0) {
        plVar5 = uStack_78 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar7 = *(long *)(param_1 + 0x198);
      *(long **)(param_1 + 0x198) = uStack_78;
      *(long *)(param_1 + 400) = uStack_80;
      if (lVar7 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar5 = uStack_78;
      if (uStack_78 != (long *)0x0) {
        plVar1 = uStack_78 + 1;
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
          (**(code **)(*uStack_78 + 0x10))(uStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      if (puStack_c8 != (undefined8 *)0x0) {
        puStack_c0 = puStack_c8;
        __ZdlPv();
      }
      plVar5 = *(long **)(param_1 + 0x198);
    }
    lVar7 = *(long *)(lVar8 + 0x140);
    __ZNSt3__119__shared_weak_count4lockEv();
    uStack_80 = *(long *)(param_1 + 400);
    lVar8 = *(long *)(uStack_80 + 0x178);
    uStack_78 = plVar5;
    if ((*(byte *)(lVar8 + 0x2a) & 0x24) != 0) {
      FUN_10a3e8fd4(lVar8);
    }
    if ((*(byte *)(lVar7 + 0x2a) >> 6 & 1) != 0) {
      func_0x00010a3e933c(lVar7);
    }
    func_0x000109519fd0(&puStack_c8,lVar8 + 0xc0,lVar7 + 0x100);
    plVar1 = plVar5 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    fVar19 = 0.0;
    fVar10 = 0.0 - fStack_90 / fStack_8c;
    fVar13 = 0.0 - (float)uStack_98 / fStack_8c;
    fVar14 = 0.0 - (float)((ulong)uStack_98 >> 0x20) / fStack_8c;
    fVar20 = 1.0;
    fVar15 = 1.0 / SQRT(fVar10 * fVar10 + fVar13 * fVar13 + fVar14 * fVar14);
    fVar10 = fVar10 * fVar15;
    fVar13 = fVar13 * fVar15;
    fVar14 = fVar14 * fVar15;
    fVar11 = SQRT(fVar10 * fVar10 + fVar13 * fVar13 + fVar14 * fVar14);
    fVar18 = fVar10 + fVar13 * 0.0 + fVar14 * 0.0 + fVar11;
    fVar16 = -1.0;
    fVar12 = 0.0;
    fVar17 = 0.0;
    fVar15 = 0.0;
    if (fVar11 * 1e-06 <= fVar18) {
      fVar12 = fVar10 * 0.0 - fVar14;
      fVar16 = fVar13 + fVar10 * -0.0;
      fVar17 = fVar13 * -0.0 + fVar14 * 0.0;
      fVar15 = fVar18;
    }
    fVar10 = fVar16 * fVar16 + fVar17 * fVar17 + fVar12 * fVar12 + fVar15 * fVar15;
    if (fVar10 == 0.0) {
      fVar16 = 0.0;
      fVar17 = 0.0;
    }
    else {
      fVar10 = 1.0 / SQRT(fVar10);
      fVar20 = fVar15 * fVar10;
      fVar19 = fVar12 * fVar10;
      fVar16 = fVar16 * fVar10;
      fVar17 = fVar17 * fVar10;
    }
    func_0x00010a0d8ae0(lVar7);
    fVar15 = *(float *)(lVar7 + 0x54);
    fVar10 = *(float *)(lVar7 + 0x58);
    fVar11 = *(float *)(lVar7 + 0x5c);
    fVar12 = *(float *)(lVar7 + 0x60);
    uStack_80 = CONCAT44((fVar20 * fVar10 + fVar16 * fVar12 + fVar19 * fVar11) - fVar17 * fVar15,
                         (fVar20 * fVar15 + fVar19 * fVar12 + fVar17 * fVar10) - fVar16 * fVar11);
    uStack_78 = (long *)CONCAT44(((-(fVar15 * fVar19) + fVar20 * fVar12) - fVar16 * fVar10) -
                                 fVar17 * fVar11,
                                 (fVar20 * fVar11 + fVar17 * fVar12 + fVar16 * fVar15) -
                                 fVar19 * fVar10);
    FUN_10a3e82bc(lVar7,&uStack_80);
  }
  return;
}



/* Entry: 10a38cd28; end: 10a38ce03;  */

void FUN_10a38cd28(long param_1,long *param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a3c7a18();
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bc9168,0);
  *(char *)(param_1 + 0x1f0) = (char)plVar4;
  lStack_58 = param_1 + 0x1f8;
  pcStack_68 = FUN_10a3ae85c;
  ppuStack_60 = &PTR_DAT_110bcee30;
  ppuVar6 = &PTR_DAT_110bcea28;
  FUN_10a1dd7c8(param_2,&PTR_DAT_110bcea28,&pcStack_68,0);
  pppuVar5 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_60)(&ppuStack_60);
    __Unwind_Resume();
    func_0x00010a3c7928();
    (**(code **)(*ppuVar6 + 0x70))(ppuVar6,&PTR_DAT_110bc9168,*(undefined1 *)(pppuVar5 + 0x3e));
    puStack_b0 = &UNK_10f652b9b;
    uStack_a8 = 0x10;
    ppuStack_c0 = (undefined **)0x0;
    ppuStack_b8 = (undefined **)0x0;
    ppuStack_c8 = pppuVar5[0x40];
    if ((ppuStack_c8 == (undefined **)0x0) ||
       (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_b8 = ppuStack_c8,
       ppuStack_c8 == (undefined **)0x0)) {
      ppuStack_d0 = (undefined **)0x0;
      ppuStack_c8 = (undefined **)0x0;
    }
    else {
      ppuStack_d0 = pppuVar5[0x3f];
      ppuVar1 = ppuStack_c8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar3) {
          *ppuVar1 = *ppuVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        ppuStack_c0 = ppuStack_d0;
      } while (cVar2 != '\0');
    }
    (**(code **)(*ppuVar6 + 0x108))(ppuVar6,&PTR_DAT_110bcea28,&ppuStack_d0,&puStack_b0);
    ppuVar6 = ppuStack_c8;
    if (ppuStack_c8 != (undefined **)0x0) {
      ppuVar1 = ppuStack_c8 + 1;
      do {
        puVar7 = *ppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar3) {
          *ppuVar1 = puVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar7 == (undefined *)0x0) {
        (**(code **)(*ppuStack_c8 + 0x10))(ppuStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
      }
    }
    ppuVar6 = ppuStack_b8;
    if (ppuStack_b8 != (undefined **)0x0) {
      ppuVar1 = ppuStack_b8 + 1;
      do {
        puVar7 = *ppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar3) {
          *ppuVar1 = puVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar7 == (undefined *)0x0) {
        (**(code **)(*ppuStack_b8 + 0x10))(ppuStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
      }
    }
    return;
  }
  return;
}



/* Entry: 10a38ce04; end: 10a38ce5f;  */

void FUN_10a38ce04(long param_1,long *param_2)

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
  undefined *puStack_40;
  undefined8 uStack_38;
  
  FUN_10a3c7928();
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bc9168,*(undefined1 *)(param_1 + 0x1f0));
  puStack_40 = &UNK_10f652b9b;
  uStack_38 = 0x10;
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  plStack_58 = *(long **)(param_1 + 0x200);
  if ((plStack_58 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_48 = plStack_58, plStack_58 == (long *)0x0))
  {
    uStack_60 = 0;
    plStack_58 = (long *)0x0;
  }
  else {
    uStack_60 = *(undefined8 *)(param_1 + 0x1f8);
    plVar1 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      uStack_50 = uStack_60;
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110bcea28,&uStack_60,&puStack_40);
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
  return;
}



/* Entry: 10a38ce60; end: 10a38d153;  */

void FUN_10a38ce60(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lStack_60;
  long *plStack_58;
  
  if (param_4 == 0) {
    lVar10 = param_2;
    uVar9 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_58 = *(long **)(param_2 + 0x48);
    lStack_60 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_60);
    puVar4 = (undefined8 *)((ulong)&lStack_60 | 8);
    plVar7 = &lStack_60;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar7 = (long *)(param_4 + 0x20);
    }
    uVar9 = *puVar4;
    lVar10 = *plVar7;
  }
  lVar11 = *(long *)(param_2 + 0x170);
  FUN_10a3dd220(lVar11);
  FUN_10a3ae8b0(lVar11,lVar10,uVar9);
  plVar7 = (long *)0x28;
  __Znwm();
  plVar8 = plVar7 + 1;
  *plVar8 = 0;
  *plVar7 = (long)&PTR_FUN_110bcee58;
  plVar7[2] = 0;
  plVar7[3] = lVar11;
  plVar7[4] = (long)FUN_10a3df8cc;
  if (lVar11 != 0) {
    if (*(long *)(lVar11 + 0x30) == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar11 + 0x28) = lVar11;
      *(long **)(lVar11 + 0x30) = plVar7;
    }
    else {
      if (*(long *)(*(long *)(lVar11 + 0x30) + 8) != -1) goto LAB_10a38cfcc;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar11 + 0x28) = lVar11;
      *(long **)(lVar11 + 0x30) = plVar7;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar10 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
LAB_10a38cfcc:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar11 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar11 + 0x180) & 0xfffc;
  *(ushort *)(lVar11 + 0x180) = uVar3 | *(ushort *)(lVar11 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar11 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = *plVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lStack_60 = lVar11;
  plStack_58 = plVar7;
  FUN_10a3c7ce8(param_3,&lStack_60);
  plVar8 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  *(undefined1 *)(lVar11 + 0x1f0) = *(undefined1 *)(param_2 + 0x1f0);
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  plVar8 = *(long **)(param_2 + 0x200);
  if ((plVar8 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_58 = plVar8, plVar8 != (long *)0x0)) {
    lStack_60 = *(long *)(param_2 + 0x1f8);
  }
  plVar8 = plStack_58;
  FUN_10a38d154();
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  param_1[1] = (long)plVar7;
  *param_1 = lVar11;
  return;
}



/* Entry: 10a38d154; end: 10a38d3c3;  */

undefined1  [16] FUN_10a38d154(undefined ***param_1,undefined **param_2,long param_3)

{
  undefined ****ppppuVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined ***unaff_x21;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined **ppuStack_e0;
  undefined ***apppuStack_d8 [2];
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == (undefined ***)0x0) {
    pppuVar5 = (undefined ***)param_2[1];
    *param_2 = (undefined *)0x0;
    param_2[1] = (undefined *)0x0;
    if (pppuVar5 != (undefined ***)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
        auVar11._8_8_ = param_2;
        auVar11._0_8_ = pppuVar5;
        return auVar11;
      }
      goto LAB_10a38d398;
    }
  }
  else {
    unaff_x21 = param_1;
    if (param_3 == 0) {
      ppuVar8 = param_2;
      FUN_10a38cc90(&ppuStack_e0,param_1);
      if (apppuStack_d8[0] != (undefined ***)0x0) {
        pppuVar5 = apppuStack_d8[0] + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
          if (bVar3) {
            *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pppuVar5 = (undefined ***)param_2[1];
      param_2[1] = (undefined *)apppuStack_d8[0];
      *param_2 = (undefined *)ppuStack_e0;
      param_2 = ppuVar8;
      if (pppuVar5 != (undefined ***)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_2 = ppuVar8;
      }
      if (apppuStack_d8[0] != (undefined ***)0x0) {
        pppuVar6 = apppuStack_d8[0] + 1;
        do {
          ppuVar8 = *pppuVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
          if (bVar3) {
            *pppuVar6 = (undefined **)((long)ppuVar8 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_10a38d34c:
        pppuVar6 = apppuStack_d8[0];
        if (ppuVar8 == (undefined **)0x0) {
          (*(code *)(*apppuStack_d8[0])[2])(apppuStack_d8[0]);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar6);
          pppuVar5 = pppuVar6;
        }
      }
    }
    else {
      ppuVar8 = param_1[8];
      pppuVar5 = (undefined ***)param_1[9];
      if (*(char *)(param_3 + 0xb8) == '\x01') {
        unaff_x21 = &ppuStack_80;
        pcStack_88 = FUN_10a3aedc0;
        ppuStack_80 = &PTR_FUN_110bceeb8;
        ppuStack_78 = param_2;
        FUN_10a3aea38(param_3,ppuVar8,pppuVar5,&pcStack_88);
        ppuVar7 = ppuVar8;
        ppuVar8 = ppuStack_80;
      }
      else {
        lVar4 = param_3 + 0x88;
        ppuStack_e0 = ppuVar8;
        apppuStack_d8[0] = pppuVar5;
        func_0x00010a35bf90(lVar4,&ppuStack_e0);
        ppppuVar1 = apppuStack_d8;
        pppuVar6 = &ppuStack_e0;
        if (lVar4 != 0) {
          ppppuVar1 = (undefined ****)(lVar4 + 0x28);
          pppuVar6 = (undefined ***)(lVar4 + 0x20);
        }
        ppuVar7 = *pppuVar6;
        if (ppuVar8 == ppuVar7 && pppuVar5 == *ppppuVar1) {
          FUN_10a38cc90(&ppuStack_e0,param_1);
          if (apppuStack_d8[0] != (undefined ***)0x0) {
            pppuVar5 = apppuStack_d8[0] + 2;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
              if (bVar3) {
                *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          pppuVar5 = (undefined ***)param_2[1];
          param_2[1] = (undefined *)apppuStack_d8[0];
          *param_2 = (undefined *)ppuStack_e0;
          if (pppuVar5 != (undefined ***)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          param_2 = ppuVar7;
          if (apppuStack_d8[0] != (undefined ***)0x0) {
            pppuVar6 = apppuStack_d8[0] + 1;
            do {
              ppuVar8 = *pppuVar6;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
              if (bVar3) {
                *pppuVar6 = (undefined **)((long)ppuVar8 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            goto LAB_10a38d34c;
          }
          goto LAB_10a38d368;
        }
        unaff_x21 = &ppuStack_c0;
        pcStack_c8 = FUN_10a3aee80;
        ppuStack_c0 = &PTR_FUN_110bceed8;
        ppuStack_b8 = param_2;
        FUN_10a3aea38(param_3,ppuVar7,*ppppuVar1,&pcStack_c8);
        ppuVar8 = ppuStack_c0;
      }
      pppuVar5 = unaff_x21;
      (*(code *)*ppuVar8)(unaff_x21);
      param_2 = ppuVar7;
    }
  }
LAB_10a38d368:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = pppuVar5;
    return auVar9;
  }
LAB_10a38d398:
  ___stack_chk_fail();
  (*(code *)**unaff_x21)(unaff_x21);
  __Unwind_Resume(pppuVar5);
  auVar10._8_8_ = 0x17;
  auVar10._0_8_ = &UNK_10f652bac;
  return auVar10;
}



/* Entry: 10a38d3c4; end: 10a38d493;  */

undefined1  [16] FUN_10a38d3c4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10f652bac;
  return auVar1;
}


