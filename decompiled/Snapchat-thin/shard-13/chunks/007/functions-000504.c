/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ac513b0; end: 10ac51403;  */

ulong FUN_10ac513b0(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10ac51404,0);
  }
  return param_1;
}



/* Entry: 10ac51404; end: 10ac51533;  */

void FUN_10ac51404(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
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
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar5 = &UNK_10f68f52e;
  }
  else {
    FUN_10a052c2c(param_2,plVar4);
    if (param_2 != (long *)0x0) {
      uVar8 = 0;
      ___dynamic_cast();
      if (param_2 != (long *)0x0) {
        FUN_10a052e3c(param_5);
        plVar4 = (long *)param_2[0x56];
        if ((plVar4 == (long *)0x0) || ((**(code **)(*plVar4 + 0x18))(), (uVar8 & 1) == 0)) {
          uVar6 = 1;
        }
        else {
          *(double *)(param_1 + 2) = (double)(long)plVar4 / 1000000.0;
          uVar6 = 3;
        }
        *param_1 = uVar6;
        plVar4 = plVar3 + 0x4b;
        lVar7 = plVar3[0x59];
        uVar8 = lVar7 - 1;
        plVar3[0x59] = uVar8;
        if (uVar8 < 8) {
          uVar8 = plVar4[lVar7 + 2];
          if (plVar3[0x5a] == uVar8) {
            return;
          }
        }
        else {
          uVar8 = *(ulong *)(plVar3[0x57] + -8);
          plVar3[0x57] = plVar3[0x57] + -8;
          if (plVar3[0x5a] == uVar8) {
            return;
          }
        }
        lVar7 = *plVar4;
        lVar12 = plVar3[0x4c];
        lVar10 = lVar12 - lVar7;
        uVar14 = lVar10 >> 4;
        if (uVar14 < uVar8) {
          uVar15 = uVar8 - uVar14;
          lVar13 = plVar3[0x4d];
          if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
            if (uVar8 >> 0x3c == 0) {
              uVar9 = lVar13 - lVar7 >> 3;
              if (uVar9 <= uVar8) {
                uVar9 = uVar8;
              }
              if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
                uVar9 = 0xfffffffffffffff;
              }
              plStack_68 = plVar4;
              if (uVar9 >> 0x3c == 0) {
                lVar2 = uVar9 << 4;
                __Znwm();
                lVar12 = lVar2 + lVar10;
                _bzero(lVar12,uVar15 * 0x10);
                lVar11 = lVar12 + uVar14 * -0x10;
                _memcpy(lVar11,lVar7,lVar10);
                *plVar4 = lVar11;
                plVar3[0x4c] = lVar12 + uVar15 * 0x10;
                plVar3[0x4d] = lVar2 + uVar9 * 0x10;
                lStack_88 = lVar7;
                lStack_80 = lVar7;
                lStack_78 = lVar7;
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
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar1)();
          }
          _bzero(lVar12,uVar15 * 0x10);
          plVar3[0x4c] = lVar12 + uVar15 * 0x10;
        }
        else if (uVar8 < uVar14) {
          lVar7 = lVar7 + uVar8 * 0x10;
          while (lVar12 != lVar7) {
            lVar12 = lVar12 + -0x10;
            func_0x00010988c204(lVar12);
          }
          plVar3[0x4c] = lVar7;
        }
code_r0x00010988c138:
        plVar3[0x5a] = uVar8;
        return;
      }
    }
    puVar5 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac51520);
  (*pcVar1)();
}



/* Entry: 10ac51534; end: 10ac515ef;  */

void FUN_10ac51534(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f69dca5,0x26);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac515f0);
  (*pcVar4)();
}



/* Entry: 10ac515f0; end: 10ac516c3;  */

void FUN_10ac515f0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,long *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long *plVar2;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_6;
  FUN_10ac516c4(param_6,param_7);
  FUN_10a052e3c(param_9);
  FUN_10ac6cfec(plVar2);
  uStack_50 = param_2;
  uStack_4c = param_3;
  uStack_48 = param_4;
  uStack_44 = param_5;
  FUN_10a1fb84c(param_1,param_6,&uStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10ac516c4; end: 10ac5172b;  */

void FUN_10ac516c4(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long *in_stack_ffffffffffffff98;
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar5);
    param_2 = ppuVar5;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c5c848;
      param_4 = 0x28;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar6 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
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
  FUN_10ac5185c(plVar6,param_2);
  FUN_10a2f3410(param_4);
  FUN_10a05dcbc(&stack0xffffffffffffff90,plVar6,param_3);
  func_0x00010a2e268c(plVar8 + 0xbd,&stack0xffffffffffffff90);
  FUN_10a79ce18(*(undefined8 *)(plVar8[0x12] + 3000));
  *(undefined1 *)((long)plVar8 + 0x5e4) = 1;
  if (in_stack_ffffffffffffff98 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffff98 + 1;
    do {
      lVar11 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*in_stack_ffffffffffffff98 + 0x10))(in_stack_ffffffffffffff98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffff98);
    }
  }
  *extraout_x8 = 0;
  plVar6 = plVar7 + 0x4b;
  lVar11 = plVar7[0x59];
  uVar9 = lVar11 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar11 + 2];
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  lVar11 = *plVar6;
  lVar14 = plVar7[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar11 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_88 = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar4 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar4 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar6 = lVar13;
          plVar7[0x4c] = lVar14 + uVar17 * 0x10;
          plVar7[0x4d] = lVar4 + uVar10 * 0x10;
          lStack_a8 = lVar11;
          lStack_a0 = lVar11;
          lStack_98 = lVar11;
          lStack_90 = lVar15;
          func_0x00010988c1b8(&lStack_a8);
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
    plVar7[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar9 < uVar16) {
    lVar11 = lVar11 + uVar9 * 0x10;
    while (lVar14 != lVar11) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar7[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return;
}



/* Entry: 10ac5172c; end: 10ac5185b;  */

void FUN_10ac5172c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac5185c(param_2,param_3);
  FUN_10a2f3410(param_5);
  FUN_10a05dcbc(&stack0xffffffffffffffb0,param_2,param_4);
  func_0x00010a2e268c(plVar6 + 0xbd,&stack0xffffffffffffffb0);
  FUN_10a79ce18(*(undefined8 *)(plVar6[0x12] + 3000));
  *(undefined1 *)((long)plVar6 + 0x5e4) = 1;
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



/* Entry: 10ac5185c; end: 10ac5191b;  */

undefined ** FUN_10ac5185c(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = param_1;
  func_0x000109898688();
  if (ppuVar1 != (undefined **)0x0) {
    FUN_10a053854();
    param_2 = ppuVar1;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return param_1;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar1 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar2 = ppuVar1;
  FUN_10a0051e8();
  if (((ulong)ppuVar2 & 1) == 0) {
    FUN_10a052828(ppuVar1,*param_2,FUN_10ac5191c,FUN_10ac519d4);
  }
  return ppuVar1;
}



/* Entry: 10ac5191c; end: 10ac519d3;  */

void FUN_10ac5191c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac516c4(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0xb7];
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)lVar5;
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



/* Entry: 10ac519d4; end: 10ac51a9b;  */

void FUN_10ac519d4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac5185c(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  FUN_10ac6d040(plVar4,param_2);
  *param_1 = 0;
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



/* Entry: 10ac51a9c; end: 10ac51b53;  */

void FUN_10ac51a9c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac516c4(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10ac51c74(param_1,param_2,plVar4 + 0xc1);
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



/* Entry: 10ac51b54; end: 10ac51c73;  */

void FUN_10ac51b54(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
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
  FUN_10ac5185c(param_2,param_3);
  FUN_10ac51d70(param_5);
  FUN_10ac51d94(auStack_50,param_2,param_4);
  FUN_10ac6ccd0(plVar4,auStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar4 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  *param_1 = 0;
  func_0x00010988c170(plVar3 + 0x4b);
  return;
}



/* Entry: 10ac51c74; end: 10ac51d6f;  */

void FUN_10ac51c74(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuStack_38;
  long lStack_30;
  long *plStack_28;
  
  lVar5 = *param_2;
  plStack_28 = (long *)param_2[1];
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_30 = 0;
  if (lVar5 != 0) {
    lStack_30 = lVar5 + 0x28;
  }
  ppuStack_38 = &PTR_DAT_110c5f280;
  func_0x000109899de4(param_1,&lStack_30,&ppuStack_38,0,0);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10ac51d70; end: 10ac51d93;  */

void FUN_10ac51d70(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  int *piVar3;
  long *extraout_x8;
  
  if ((int)param_1 == 1) {
    return;
  }
  lVar2 = 1;
  piVar3 = (int *)0x0;
  FUN_10a052ee0(1,0,param_1);
  if (*piVar3 != 1) {
    func_0x000109898688();
    if (lVar2 == 0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      FUN_10ac51e0c(extraout_x8);
      if (*extraout_x8 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac51df8);
    (*pcVar1)();
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  return;
}



/* Entry: 10ac51d94; end: 10ac51e0b;  */

void FUN_10ac51d94(long *param_1,long param_2,int *param_3)

{
  code *pcVar1;
  
  if (*param_3 == 1) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  func_0x000109898688();
  if (param_2 == 0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else {
    FUN_10ac51e0c(param_1);
    if (*param_1 != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac51df8);
  (*pcVar1)();
}



/* Entry: 10ac51e0c; end: 10ac51ea3;  */

void FUN_10ac51e0c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  func_0x00010989879c(&lStack_30);
  if ((lStack_30 != 0) &&
     (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110c5f280,0x28), lStack_30 != 0)) {
    *param_1 = lStack_30;
    param_1[1] = (long)plStack_28;
    param_1 = &lStack_30;
  }
  *param_1 = 0;
  param_1[1] = 0;
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
  return;
}



/* Entry: 10ac51ea4; end: 10ac51fc3;  */

void FUN_10ac51ea4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac51fc4(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = *(long *)(plVar4[0x39] + 0x20);
  lVar10 = *(long *)(plVar4[0x39] + 0x28);
  FUN_10a0cf0cc(&stack0xffffffffffffffa0,lVar5,lVar10,(lVar10 - lVar5 >> 3) * -0x5555555555555555);
  func_0x00010989a420(param_1,param_2,0,0);
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



/* Entry: 10ac51fc4; end: 10ac5202b;  */

void FUN_10ac51fc4(float param_1,undefined **param_2,undefined **param_3,undefined **param_4,
                  undefined8 param_5)

{
  long lVar1;
  long ***ppplVar2;
  long ****pppplVar3;
  code *pcVar4;
  long lVar5;
  undefined **ppuVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long ***ppplVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *extraout_x8;
  long ***ppplVar13;
  long lVar14;
  long ***ppplVar15;
  long **pplStack_a8;
  long **pplStack_a0;
  long **pplStack_98;
  long lStack_90;
  long ***ppplStack_88;
  ulong in_stack_ffffffffffffff80;
  ulong in_stack_ffffffffffffff88;
  
  ppuVar6 = param_2;
  func_0x000109898688();
  if (ppuVar6 != (undefined **)0x0) {
    FUN_10a052c2c(param_2,ppuVar6);
    param_3 = ppuVar6;
    if (param_2 != (undefined **)0x0) {
      param_3 = &PTR_DAT_110b178e0;
      param_4 = &PTR_DAT_110c5d0b0;
      param_5 = 0x28;
      ___dynamic_cast();
      if (param_2 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar7 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
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
  FUN_10ac51fc4(plVar7,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&ppplStack_88,plVar7,param_4);
  pppplVar3 = (long ****)ppplStack_88;
  if (-1 < (long)in_stack_ffffffffffffff88) {
    in_stack_ffffffffffffff80 = in_stack_ffffffffffffff88 >> 0x38;
    pppplVar3 = &ppplStack_88;
  }
  FUN_10aca1e14(plVar9[0x39],pppplVar3,in_stack_ffffffffffffff80);
  if ((long)in_stack_ffffffffffffff88 < 0) {
    __ZdlPv(ppplStack_88);
  }
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)param_1;
  pppplVar3 = (long ****)(plVar8 + 0x4b);
  lVar11 = plVar8[0x59];
  uVar12 = lVar11 - 1;
  plVar8[0x59] = uVar12;
  if (uVar12 < 8) {
    ppplVar10 = pppplVar3[lVar11 + 2];
    if ((long ***)plVar8[0x5a] == ppplVar10) {
      return;
    }
  }
  else {
    ppplVar10 = *(long ****)(plVar8[0x57] + -8);
    plVar8[0x57] = (long)(plVar8[0x57] + -8);
    if ((long ***)plVar8[0x5a] == ppplVar10) {
      return;
    }
  }
  ppplVar2 = *pppplVar3;
  ppplVar13 = (long ***)plVar8[0x4c];
  lVar11 = (long)ppplVar13 - (long)ppplVar2;
  ppplVar15 = (long ***)(lVar11 >> 4);
  if (ppplVar15 < ppplVar10) {
    uVar12 = (long)ppplVar10 - (long)ppplVar15;
    lVar14 = plVar8[0x4d];
    if ((ulong)(lVar14 - (long)ppplVar13 >> 4) < uVar12) {
      if ((ulong)ppplVar10 >> 0x3c == 0) {
        ppplVar13 = (long ***)(lVar14 - (long)ppplVar2 >> 3);
        if (ppplVar13 <= ppplVar10) {
          ppplVar13 = ppplVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - (long)ppplVar2)) {
          ppplVar13 = (long ***)0xfffffffffffffff;
        }
        ppplStack_88 = (long ***)pppplVar3;
        if ((ulong)ppplVar13 >> 0x3c == 0) {
          lVar5 = (long)ppplVar13 << 4;
          __Znwm();
          lVar1 = lVar5 + lVar11;
          _bzero(lVar1,uVar12 * 0x10);
          ppplVar15 = (long ***)(lVar1 + (long)ppplVar15 * -0x10);
          _memcpy(ppplVar15,ppplVar2,lVar11);
          *pppplVar3 = ppplVar15;
          plVar8[0x4c] = lVar1 + uVar12 * 0x10;
          plVar8[0x4d] = lVar5 + (long)ppplVar13 * 0x10;
          pplStack_a8 = (long **)ppplVar2;
          pplStack_a0 = (long **)ppplVar2;
          pplStack_98 = (long **)ppplVar2;
          lStack_90 = lVar14;
          func_0x00010988c1b8(&pplStack_a8);
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
    _bzero(ppplVar13,uVar12 * 0x10);
    plVar8[0x4c] = (long)(ppplVar13 + uVar12 * 2);
  }
  else if (ppplVar10 < ppplVar15) {
    while (ppplVar13 != ppplVar2 + (long)ppplVar10 * 2) {
      ppplVar13 = ppplVar13 + -2;
      func_0x00010988c204(ppplVar13);
    }
    plVar8[0x4c] = (long)(ppplVar2 + (long)ppplVar10 * 2);
  }
code_r0x00010988c138:
  plVar8[0x5a] = (long)ppplVar10;
  return;
}



/* Entry: 10ac5202c; end: 10ac52157;  */

void FUN_10ac5202c(undefined4 *param_1,float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long ***ppplVar2;
  long ****pppplVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long ***ppplVar8;
  long lVar9;
  ulong uVar10;
  long ***ppplVar11;
  long lVar12;
  long ***ppplVar13;
  long **pplStack_88;
  long **pplStack_80;
  long **pplStack_78;
  long lStack_70;
  long ***ppplStack_68;
  ulong in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  
  plVar6 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_3;
  FUN_10ac51fc4(param_3,param_4);
  FUN_10a48f3fc(param_6);
  FUN_10a3f3f30(&ppplStack_68,param_3,param_5);
  pppplVar3 = (long ****)ppplStack_68;
  if (-1 < (long)in_stack_ffffffffffffffa8) {
    in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa8 >> 0x38;
    pppplVar3 = &ppplStack_68;
  }
  FUN_10aca1e14(plVar7[0x39],pppplVar3,in_stack_ffffffffffffffa0);
  if ((long)in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(ppplStack_68);
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)param_2;
  pppplVar3 = (long ****)(plVar6 + 0x4b);
  lVar9 = plVar6[0x59];
  uVar10 = lVar9 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    ppplVar8 = pppplVar3[lVar9 + 2];
    if ((long ***)plVar6[0x5a] == ppplVar8) {
      return;
    }
  }
  else {
    ppplVar8 = *(long ****)(plVar6[0x57] + -8);
    plVar6[0x57] = (long)(plVar6[0x57] + -8);
    if ((long ***)plVar6[0x5a] == ppplVar8) {
      return;
    }
  }
  ppplVar2 = *pppplVar3;
  ppplVar11 = (long ***)plVar6[0x4c];
  lVar9 = (long)ppplVar11 - (long)ppplVar2;
  ppplVar13 = (long ***)(lVar9 >> 4);
  if (ppplVar13 < ppplVar8) {
    uVar10 = (long)ppplVar8 - (long)ppplVar13;
    lVar12 = plVar6[0x4d];
    if ((ulong)(lVar12 - (long)ppplVar11 >> 4) < uVar10) {
      if ((ulong)ppplVar8 >> 0x3c == 0) {
        ppplVar11 = (long ***)(lVar12 - (long)ppplVar2 >> 3);
        if (ppplVar11 <= ppplVar8) {
          ppplVar11 = ppplVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - (long)ppplVar2)) {
          ppplVar11 = (long ***)0xfffffffffffffff;
        }
        ppplStack_68 = (long ***)pppplVar3;
        if ((ulong)ppplVar11 >> 0x3c == 0) {
          lVar5 = (long)ppplVar11 << 4;
          __Znwm();
          lVar1 = lVar5 + lVar9;
          _bzero(lVar1,uVar10 * 0x10);
          ppplVar13 = (long ***)(lVar1 + (long)ppplVar13 * -0x10);
          _memcpy(ppplVar13,ppplVar2,lVar9);
          *pppplVar3 = ppplVar13;
          plVar6[0x4c] = lVar1 + uVar10 * 0x10;
          plVar6[0x4d] = lVar5 + (long)ppplVar11 * 0x10;
          pplStack_88 = (long **)ppplVar2;
          pplStack_80 = (long **)ppplVar2;
          pplStack_78 = (long **)ppplVar2;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&pplStack_88);
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
    _bzero(ppplVar11,uVar10 * 0x10);
    plVar6[0x4c] = (long)(ppplVar11 + uVar10 * 2);
  }
  else if (ppplVar8 < ppplVar13) {
    while (ppplVar11 != ppplVar2 + (long)ppplVar8 * 2) {
      ppplVar11 = ppplVar11 + -2;
      func_0x00010988c204(ppplVar11);
    }
    plVar6[0x4c] = (long)(ppplVar2 + (long)ppplVar8 * 2);
  }
code_r0x00010988c138:
  plVar6[0x5a] = (long)ppplVar8;
  return;
}



/* Entry: 10ac52158; end: 10ac52227;  */

void FUN_10ac52158(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac51fc4(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (*(long *)(plVar4[0x39] + 0x38) == 0) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,*(undefined8 *)(*(long *)(plVar4[0x39] + 0x38) + 0x10));
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



/* Entry: 10ac52228; end: 10ac522f3;  */

void FUN_10ac52228(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac51fc4(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (plVar4[0x3b] == 0) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,*(undefined8 *)(plVar4[0x3b] + 0x10));
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



/* Entry: 10ac522f4; end: 10ac523ab;  */

void FUN_10ac522f4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac51fc4(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0x25];
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)lVar5;
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



/* Entry: 10ac523ac; end: 10ac5247f;  */

void FUN_10ac523ac(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac52480(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  if ((uint)*(byte *)(plVar4 + 0x25) != (uint)param_2) {
    *(char *)(plVar4 + 0x25) = (char)param_2;
    *(undefined2 *)(plVar4 + 0x38) = 0x101;
  }
  *param_1 = 0;
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



/* Entry: 10ac52480; end: 10ac524e7;  */

void FUN_10ac52480(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
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
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar4 = param_1;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar4);
    param_2 = ppuVar4;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x28;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar5 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10ac51fc4(plVar5,param_2);
  FUN_10a052e3c(param_4);
  uVar1 = *(undefined *)((long)plVar5 + 0x129);
  *extraout_x8 = 2;
  *(undefined1 *)(extraout_x8 + 2) = uVar1;
  plVar5 = plVar6 + 0x4b;
  lVar7 = plVar6[0x59];
  uVar8 = lVar7 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar5[lVar7 + 2];
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
  lVar7 = *plVar5;
  lVar12 = plVar6[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar6[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_88 = plVar5;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar3 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar5 = lVar11;
          plVar6[0x4c] = lVar12 + uVar15 * 0x10;
          plVar6[0x4d] = lVar3 + uVar9 * 0x10;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar6[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar6[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10ac524e8; end: 10ac5259f;  */

void FUN_10ac524e8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 uVar2;
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
  FUN_10ac51fc4(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(undefined1 *)((long)param_2 + 0x129);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar2;
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



/* Entry: 10ac525a0; end: 10ac52673;  */

void FUN_10ac525a0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac52480(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  if ((uint)*(byte *)((long)plVar4 + 0x129) != (uint)param_2) {
    *(char *)((long)plVar4 + 0x129) = (char)param_2;
    *(undefined2 *)(plVar4 + 0x38) = 0x101;
  }
  *param_1 = 0;
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



/* Entry: 10ac52674; end: 10ac5272b;  */

void FUN_10ac52674(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 uVar2;
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
  FUN_10ac51fc4(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(undefined1 *)((long)param_2 + 0x12a);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar2;
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



/* Entry: 10ac5272c; end: 10ac527ff;  */

void FUN_10ac5272c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac52480(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  if ((uint)*(byte *)((long)plVar4 + 0x12a) != (uint)param_2) {
    *(char *)((long)plVar4 + 0x12a) = (char)param_2;
    *(undefined2 *)(plVar4 + 0x38) = 0x101;
  }
  *param_1 = 0;
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



/* Entry: 10ac52800; end: 10ac528b7;  */

void FUN_10ac52800(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 uVar2;
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
  FUN_10ac51fc4(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(undefined1 *)((long)param_2 + 299);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar2;
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



/* Entry: 10ac528b8; end: 10ac5298b;  */

void FUN_10ac528b8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac52480(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  if ((uint)*(byte *)((long)plVar4 + 299) != (uint)param_2) {
    *(char *)((long)plVar4 + 299) = (char)param_2;
    *(undefined2 *)(plVar4 + 0x38) = 0x101;
  }
  *param_1 = 0;
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



/* Entry: 10ac5298c; end: 10ac52a43;  */

void FUN_10ac5298c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 uVar2;
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
  FUN_10ac51fc4(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(undefined1 *)((long)param_2 + 300);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar2;
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



/* Entry: 10ac52a44; end: 10ac52b17;  */

void FUN_10ac52a44(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac52480(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  if ((uint)*(byte *)((long)plVar4 + 300) != (uint)param_2) {
    *(char *)((long)plVar4 + 300) = (char)param_2;
    *(undefined2 *)(plVar4 + 0x38) = 0x101;
  }
  *param_1 = 0;
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



/* Entry: 10ac52b18; end: 10ac52bcf;  */

void FUN_10ac52b18(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 uVar2;
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
  FUN_10ac51fc4(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(undefined1 *)((long)param_2 + 0x12d);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar2;
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



/* Entry: 10ac52bd0; end: 10ac52ca3;  */

void FUN_10ac52bd0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac52480(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  if ((uint)*(byte *)((long)plVar4 + 0x12d) != (uint)param_2) {
    *(char *)((long)plVar4 + 0x12d) = (char)param_2;
    *(undefined2 *)(plVar4 + 0x38) = 0x101;
  }
  *param_1 = 0;
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



/* Entry: 10ac52ca4; end: 10ac52d5f;  */

void FUN_10ac52ca4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac51fc4(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar2 = *(int *)((long)param_2 + 0x124);
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



/* Entry: 10ac52d60; end: 10ac52e37;  */

void FUN_10ac52d60(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac52480(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  if (0x7f < (uint)param_2) {
    FUN_10a00946c(&UNK_10f652c32);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac52e24);
    (*pcVar1)();
  }
  *(uint *)((long)plVar4 + 0x124) = (uint)param_2;
  *param_1 = 0;
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



/* Entry: 10ac52e38; end: 10ac5303f;  */

void FUN_10ac52e38(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c0,&UNK_10e4e39ce,0x75);
  pppuVar1 = (undefined ***)appuStack_c0[0];
  if (-1 < cStack_a9) {
    pppuVar1 = appuStack_c0;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c2e2c0;
  ppuVar2 = (undefined **)&UNK_10f69b9ca;
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
    ppuStack_40 = &PTR_DAT_110c2e2c0;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac53020;
    FUN_10a054dac(param_1,&DAT_10f68571c,FUN_10ac53040,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac53020;
    FUN_10a054dac(param_1,&DAT_10f685720,FUN_10ac53874,2,*(undefined8 *)(param_1 + 0x40));
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
LAB_10ac53020:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10ac53024);
  (*pcVar9)();
}



/* Entry: 10ac53040; end: 10ac5365b;  */

/* WARNING: Possible PIC construction at 0x00010ac53650: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ac53654) */
/* WARNING: Removing unreachable block (ram,0x00010ac53674) */
/* WARNING: Removing unreachable block (ram,0x00010ac53684) */
/* WARNING: Removing unreachable block (ram,0x00010ac536ac) */
/* WARNING: Removing unreachable block (ram,0x00010ac536b8) */
/* WARNING: Removing unreachable block (ram,0x00010ac536d0) */
/* WARNING: Removing unreachable block (ram,0x00010ac5370c) */
/* WARNING: Removing unreachable block (ram,0x00010ac53738) */
/* WARNING: Removing unreachable block (ram,0x00010ac53724) */
/* WARNING: Removing unreachable block (ram,0x00010ac5372c) */
/* WARNING: Removing unreachable block (ram,0x00010ac5373c) */
/* WARNING: Removing unreachable block (ram,0x00010ac53744) */
/* WARNING: Removing unreachable block (ram,0x00010ac53754) */
/* WARNING: Removing unreachable block (ram,0x00010ac53760) */
/* WARNING: Removing unreachable block (ram,0x00010ac53780) */
/* WARNING: Removing unreachable block (ram,0x00010ac5376c) */
/* WARNING: Removing unreachable block (ram,0x00010ac53774) */
/* WARNING: Removing unreachable block (ram,0x00010ac53784) */
/* WARNING: Removing unreachable block (ram,0x00010ac5378c) */
/* WARNING: Removing unreachable block (ram,0x00010ac53790) */
/* WARNING: Removing unreachable block (ram,0x00010ac537b4) */
/* WARNING: Removing unreachable block (ram,0x00010ac5379c) */
/* WARNING: Removing unreachable block (ram,0x00010ac537a8) */
/* WARNING: Removing unreachable block (ram,0x00010ac537b8) */
/* WARNING: Removing unreachable block (ram,0x00010ac537c0) */
/* WARNING: Removing unreachable block (ram,0x00010ac537c8) */
/* WARNING: Removing unreachable block (ram,0x00010ac537cc) */
/* WARNING: Removing unreachable block (ram,0x00010ac537d0) */
/* WARNING: Removing unreachable block (ram,0x00010ac537ec) */
/* WARNING: Removing unreachable block (ram,0x00010ac537d8) */
/* WARNING: Removing unreachable block (ram,0x00010ac537e0) */
/* WARNING: Removing unreachable block (ram,0x00010ac537f0) */
/* WARNING: Removing unreachable block (ram,0x00010ac537f8) */
/* WARNING: Removing unreachable block (ram,0x00010ac53804) */
/* WARNING: Removing unreachable block (ram,0x00010ac53838) */
/* WARNING: Removing unreachable block (ram,0x00010ac53864) */
/* WARNING: Removing unreachable block (ram,0x00010ac53848) */
/* WARNING: Removing unreachable block (ram,0x00010ac536cc) */
/* WARNING: Removing unreachable block (ram,0x00010ac536a0) */

void FUN_10ac53040(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
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
  FUN_10ac5365c(param_2,param_3);
  FUN_10ac536c4(param_5);
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
        goto LAB_10ac53640;
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
              if ((long *)plVar21[2] == plVar22) goto LAB_10ac533f4;
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
        FUN_10a90e7c4(plVar8,uVar14);
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
          goto LAB_10ac53498;
        }
      }
      else {
        *plVar21 = *plVar11;
LAB_10ac53498:
        *plVar11 = (long)plVar21;
      }
      plVar9[6] = plVar9[6] + 1;
      goto LAB_10ac534a8;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
  goto LAB_10ac53640;
LAB_10ac533f4:
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
LAB_10ac534a8:
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
      FUN_10a90ed38(plVar11 + 1,plVar21);
      FUN_10a004978(&plStack_e0);
      if (3 < (ulong)bStack_78) goto LAB_10ac53640;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_78])(&plStack_b8);
      FUN_10a688c1c(&plStack_100);
      unaff_x30 = 0x10ac53654;
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
LAB_10ac53640:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac53644);
  (*pcVar6)();
}



/* Entry: 10ac5365c; end: 10ac536c3;  */

void FUN_10ac5365c(long param_1)

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
  FUN_10a90ee44();
  if (plVar5 == (long *)0x0) goto LAB_10ac53838;
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
LAB_10ac5378c:
    if (lVar6 == 0) {
LAB_10ac537c0:
      *(undefined8 *)(*plVar1 + uVar7 * 8) = 0;
      lVar6 = *plVar5;
      goto LAB_10ac537c8;
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
    if (uVar12 != uVar7) goto LAB_10ac537c0;
LAB_10ac537d0:
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
    if (uVar11 != uVar7) goto LAB_10ac5378c;
LAB_10ac537c8:
    if (lVar6 != 0) {
      uVar11 = *(ulong *)(lVar6 + 8);
      goto LAB_10ac537d0;
    }
  }
  *plVar10 = lVar6;
  *plVar5 = 0;
  *(long *)(lVar4 + 0x30) = *(long *)(lVar4 + 0x30) + -1;
  uStack_58 = 1;
  uStack_57 = 0;
  uStack_53 = 0;
  plStack_60 = plVar1;
  FUN_10a90ed38(&plStack_60);
LAB_10ac53838:
  if (*(char *)(*(long *)(lVar4 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010ac53860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x40))(lVar4);
    return;
  }
  return;
}



/* Entry: 10ac536c4; end: 10ac536e7;  */

void FUN_10ac536c4(undefined8 param_1)

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
  FUN_10a90ee44();
  if (plVar4 == (long *)0x0) goto LAB_10ac53838;
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
LAB_10ac5378c:
    if (lVar5 == 0) {
LAB_10ac537c0:
      *(undefined8 *)(*plVar1 + uVar6 * 8) = 0;
      lVar5 = *plVar4;
      goto LAB_10ac537c8;
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
    if (uVar11 != uVar6) goto LAB_10ac537c0;
LAB_10ac537d0:
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
    if (uVar10 != uVar6) goto LAB_10ac5378c;
LAB_10ac537c8:
    if (lVar5 != 0) {
      uVar10 = *(ulong *)(lVar5 + 8);
      goto LAB_10ac537d0;
    }
  }
  *plVar9 = lVar5;
  *plVar4 = 0;
  *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + -1;
  uStack_38 = 1;
  uStack_37 = 0;
  uStack_33 = 0;
  plStack_40 = plVar1;
  FUN_10a90ed38(&plStack_40);
LAB_10ac53838:
  if (*(char *)(*(long *)(lVar3 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010ac53860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x40))(lVar3);
    return;
  }
  return;
}



/* Entry: 10ac536e8; end: 10ac53873;  */

void FUN_10ac536e8(long param_1)

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
  FUN_10a90ee44();
  if (plVar3 == (long *)0x0) goto LAB_10ac53838;
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
LAB_10ac5378c:
    if (lVar4 == 0) {
LAB_10ac537c0:
      *(undefined8 *)(*plVar1 + uVar5 * 8) = 0;
      lVar4 = *plVar3;
      goto LAB_10ac537c8;
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
    if (uVar10 != uVar5) goto LAB_10ac537c0;
LAB_10ac537d0:
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
    if (uVar9 != uVar5) goto LAB_10ac5378c;
LAB_10ac537c8:
    if (lVar4 != 0) {
      uVar9 = *(ulong *)(lVar4 + 8);
      goto LAB_10ac537d0;
    }
  }
  *plVar8 = lVar4;
  *plVar3 = 0;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  uStack_28 = 1;
  uStack_27 = 0;
  uStack_23 = 0;
  plStack_30 = plVar1;
  FUN_10a90ed38(&plStack_30);
LAB_10ac53838:
  if (*(char *)(*(long *)(param_1 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010ac53860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(param_1);
    return;
  }
  return;
}



/* Entry: 10ac53874; end: 10ac5398f;  */

void FUN_10ac53874(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac5365c(param_2,param_3);
  FUN_10a060490(param_5);
  FUN_10a0604b4(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10ac536e8(plVar6,&stack0xffffffffffffffb0);
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



/* Entry: 10ac53990; end: 10ac53ac3;  */

void FUN_10ac53990(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac51fc4(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar16 = (long *)plVar6[0x23];
  if (plVar6[0x23] != 0) {
    plVar6 = (long *)(plVar6[0x23] + 8);
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



/* Entry: 10ac53ac4; end: 10ac53bcf;  */

void FUN_10ac53ac4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
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
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
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
  FUN_10ac51fc4(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar10 = plVar4[0x12];
  func_0x000107c2b054(&stack0xffffffffffffffa8,&UNK_10f69d4d7);
  if (lVar10 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar10 + 0x8d8),&stack0xffffffffffffffa8);
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a05b924(param_1,param_2,plVar4 + 0x4e);
  plVar4 = plVar3 + 0x4b;
  lVar10 = plVar3[0x59];
  uVar5 = lVar10 - 1;
  plVar3[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar4[lVar10 + 2];
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  lVar10 = *plVar4;
  lVar9 = plVar3[0x4c];
  lVar7 = lVar9 - lVar10;
  uVar12 = lVar7 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar9 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar11 - lVar10 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar10)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar6 >> 0x3c == 0) {
          lVar2 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar2 + lVar7;
          _bzero(lVar9,uVar13 * 0x10);
          lVar8 = lVar9 + uVar12 * -0x10;
          _memcpy(lVar8,lVar10,lVar7);
          *plVar4 = lVar8;
          plVar3[0x4c] = lVar9 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar6 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
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
    _bzero(lVar9,uVar13 * 0x10);
    plVar3[0x4c] = lVar9 + uVar13 * 0x10;
  }
  else if (uVar5 < uVar12) {
    lVar10 = lVar10 + uVar5 * 0x10;
    while (lVar9 != lVar10) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    plVar3[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar5;
  return;
}



/* Entry: 10ac53bd0; end: 10ac53ceb;  */

void FUN_10ac53bd0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac52480(param_2,param_3);
  FUN_10a1f9134(param_5);
  FUN_10a065cdc(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10ac3aaf4(plVar6,&stack0xffffffffffffffb0);
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



/* Entry: 10ac53cec; end: 10ac53da3;  */

void FUN_10ac53cec(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac51fc4(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a3af424(param_1,param_2,plVar4 + 0x50);
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



/* Entry: 10ac53da4; end: 10ac53ea3;  */

void FUN_10ac53da4(undefined4 *param_1,long *param_2,undefined8 param_3,uint *param_4,
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
  FUN_10ac52480(param_2,param_3);
  FUN_10a3af5a8(param_5);
  if (1 < *param_4) {
    FUN_10a3af5cc(&stack0xffffffffffffffa8,param_2,param_4);
  }
  FUN_10a3a754c(plVar4 + 0x50,&stack0xffffffffffffffa8);
  FUN_10a3a75a8(&stack0xffffffffffffffa8);
  *param_1 = 0;
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



/* Entry: 10ac53ea4; end: 10ac53f87;  */

/* WARNING: Removing unreachable block (ram,0x00010ac53f30) */
/* WARNING: Removing unreachable block (ram,0x00010ac53f34) */
/* WARNING: Removing unreachable block (ram,0x00010ac53f3c) */
/* WARNING: Removing unreachable block (ram,0x00010ac53f44) */
/* WARNING: Removing unreachable block (ram,0x00010ac53f48) */

void FUN_10ac53ea4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_40;
  long *plStack_38;
  
  uVar2 = *param_1;
  plVar3 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  lVar7 = *(long *)(param_2 + 0x10);
  FUN_10ac3a8e8(lVar7,uVar2);
  uStack_40 = uVar2;
  plStack_38 = plVar3;
  FUN_10a192264(lVar7 + 0x220,&uStack_40);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  *(undefined1 *)(lVar7 + 0x1c0) = 1;
  return;
}



/* Entry: 10ac53f88; end: 10ac53fa3;  */

void FUN_10ac53f88(void)

{
  return;
}



/* Entry: 10ac53fa4; end: 10ac54073;  */

void FUN_10ac53fa4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10ac541c0(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = *(undefined8 *)((long)plVar2 + 0x504);
  FUN_10a07ff64(param_1,param_2,&uStack_48);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10ac54074; end: 10ac5413b;  */

void FUN_10ac54074(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac542b0(param_2,param_3);
  FUN_10a1fa9e8(param_5);
  FUN_10a05a42c(param_2,param_4);
  *(long *)((long)plVar4 + 0x504) = *param_2;
  *param_1 = 0;
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



/* Entry: 10ac5413c; end: 10ac541bf;  */

void FUN_10ac5413c(undefined4 param_1,undefined4 param_2,undefined8 param_3,long param_4,
                  code *param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  lVar1 = param_4;
  FUN_10ac541c0(param_4,param_7);
  FUN_10a052e3c(param_8);
  if ((param_6 & 1) != 0) {
    param_5 = *(code **)(*(long *)(lVar1 + ((long)param_6 >> 1)) + ((ulong)param_5 & 0xffffffff));
  }
  (*param_5)();
  uStack_48 = param_1;
  uStack_44 = param_2;
  FUN_10a07ff64(param_3,param_4,&uStack_48);
  return;
}



/* Entry: 10ac541c0; end: 10ac54227;  */

void FUN_10ac541c0(undefined **param_1,undefined **param_2,undefined **param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  
  ppuVar2 = param_1;
  func_0x000109898688();
  if (ppuVar2 != (undefined **)0x0) {
    FUN_10a052c2c();
    param_2 = ppuVar2;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c5f280;
      param_4 = 0x28;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar3 = (undefined4 *)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar2 = param_2;
  FUN_10ac542b0(param_2,param_5);
  FUN_10a1fa9e8(param_7);
  FUN_10a05a42c(param_2,param_6);
  plVar1 = (long *)((long)ppuVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(undefined ***)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*(code *)param_3)(plVar1,param_2);
  *puVar3 = 0;
  return;
}



/* Entry: 10ac54228; end: 10ac542af;  */

void FUN_10ac54228(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_2;
  FUN_10ac542b0(param_2,param_5);
  FUN_10a1fa9e8(param_7);
  FUN_10a05a42c(param_2,param_6);
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,param_2);
  *param_1 = 0;
  return;
}



/* Entry: 10ac542b0; end: 10ac54317;  */

void FUN_10ac542b0(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x28;
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
  FUN_10ac5413c(extraout_x8,plVar4,FUN_10ac3c93c,0,param_2,param_4);
  plVar4 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
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
  lVar6 = *plVar4;
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
        plStack_88 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_a8 = lVar6;
          lStack_a0 = lVar6;
          lStack_98 = lVar6;
          lStack_90 = lVar12;
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



/* Entry: 10ac54318; end: 10ac543c7;  */

void FUN_10ac54318(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac5413c(param_1,param_2,FUN_10ac3c93c,0,param_3,param_5);
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



/* Entry: 10ac543c8; end: 10ac5447f;  */

void FUN_10ac543c8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac54228(param_1,param_2,FUN_10ac3c9b8,0,param_3,param_4,param_5);
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



/* Entry: 10ac54480; end: 10ac5452f;  */

void FUN_10ac54480(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac5413c(param_1,param_2,FUN_10ac3ca44,0,param_3,param_5);
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



/* Entry: 10ac54530; end: 10ac545e7;  */

void FUN_10ac54530(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac54228(param_1,param_2,FUN_10ac3cac0,0,param_3,param_4,param_5);
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



/* Entry: 10ac545e8; end: 10ac546f7;  */

void FUN_10ac545e8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
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
  FUN_10ac541c0(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar9 = param_2[0x12];
  func_0x000107c2b054(&stack0xffffffffffffffa8,&UNK_10f69d762);
  if (lVar9 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar9 + 0x8d8),&stack0xffffffffffffffa8);
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  iVar2 = *(int *)((long)param_2 + 0x51c);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar2;
  plVar1 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar6 = lVar9 - 1;
  plVar5[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar9 + 2];
    if (plVar5[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar6) {
      return;
    }
  }
  lVar9 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar8 = lVar11 - lVar9;
  uVar13 = lVar8 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar12 - lVar9 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar9)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar4 = uVar7 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar8;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar9,lVar8);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar7 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
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
  else if (uVar6 < uVar13) {
    lVar9 = lVar9 + uVar6 * 0x10;
    while (lVar11 != lVar9) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar6;
  return;
}



/* Entry: 10ac546f8; end: 10ac547bf;  */

void FUN_10ac546f8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac542b0(param_2,param_3);
  FUN_10ac547c0(param_5);
  func_0x000109898518(param_2,param_4);
  FUN_10ac3cb4c(plVar4,param_2);
  *param_1 = 0;
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



/* Entry: 10ac547c0; end: 10ac547e3;  */

void FUN_10ac547c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar5 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10ac541c0(plVar3,uVar5);
  FUN_10a052e3c(param_4);
  lVar6 = plVar3[0xad];
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)(int)lVar6;
  plVar3 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar3[lVar6 + 2];
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
  lVar6 = *plVar3;
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
        plStack_78 = plVar3;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar3 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_98 = lVar6;
          lStack_90 = lVar6;
          lStack_88 = lVar6;
          lStack_80 = lVar12;
          func_0x00010988c1b8(&lStack_98);
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



/* Entry: 10ac547e4; end: 10ac5489f;  */

void FUN_10ac547e4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac541c0(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0xad];
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



/* Entry: 10ac548a0; end: 10ac5495f;  */

void FUN_10ac548a0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac542b0(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)(plVar4 + 0xad) = (int)param_2;
  *param_1 = 0;
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



/* Entry: 10ac54960; end: 10ac54a17;  */

void FUN_10ac54960(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac541c0(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a05b924(param_1,param_2,plVar4 + 0xb5);
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



/* Entry: 10ac54a18; end: 10ac54b23;  */

void FUN_10ac54a18(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac542b0(param_2,param_3);
  FUN_10a1f9134(param_5);
  FUN_10a065cdc(&stack0xffffffffffffffb0,param_2,param_4);
  func_0x00010a04a704(plVar6 + 0xb5,&stack0xffffffffffffffb0);
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



/* Entry: 10ac54b24; end: 10ac54b97;  */

void FUN_10ac54b24(undefined8 *param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  int aiStack_20 [2];
  undefined8 *puStack_18;
  
  if (param_1[2] != param_1[3]) {
    aiStack_20[0] = 3;
    puStack_18 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,param_2,aiStack_20);
    if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
      (**(code **)*puStack_18)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac54b98);
  (*pcVar1)();
}



/* Entry: 10ac54b98; end: 10ac54c37;  */

void FUN_10ac54b98(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10ac54b98(*param_1);
    FUN_10ac54b98(param_1[1]);
    if (param_1[5] != 0) {
      param_1[6] = param_1[5];
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ac54c38; end: 10ac54c77;  */

undefined8 * FUN_10ac54c38(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar5 = *(long *)(param_2 + 0x10);
  uVar8 = param_1[1];
  uVar7 = *param_1;
  if (param_1[1] != 0) {
    plVar6 = (long *)(param_1[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = *(long **)(lVar5 + 0x5b0);
  *(undefined8 *)(lVar5 + 0x5b0) = uVar8;
  *(undefined8 *)(lVar5 + 0x5a8) = uVar7;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return (undefined8 *)(lVar5 + 0x5a8);
}



/* Entry: 10ac54c78; end: 10ac54c97;  */

void FUN_10ac54c78(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c5e368;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac54c98; end: 10ac54ca7;  */

void FUN_10ac54c98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ac54ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ac54ca8; end: 10ac550f7;  */

void FUN_10ac54ca8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    plVar5 = *(long **)(param_1 + 0x58);
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar5 + 0x12);
      goto LAB_10ac54fb8;
    }
    if ((*(byte *)(plVar5 + 0x15) & 1) == 0) goto LAB_10ac54fb8;
    *(long *)(param_1 + 0x48) = plVar5[0x13];
    lVar6 = plVar5[0x14];
    *(long *)(param_1 + 0x50) = lVar6;
    if (lVar6 == 0) {
LAB_10ac54d10:
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    else {
      plVar5 = (long *)(lVar6 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = *(long **)(param_1 + 0x58);
      if (plVar5 != (long *)0x0) goto LAB_10ac54d10;
    }
    plVar7 = *(long **)(param_1 + 0x68);
    plVar5 = (long *)*plVar7;
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      plVar7 = *(long **)(param_1 + 0x68);
    }
    *plVar7 = 0;
    lVar6 = *(long *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(long *)(param_1 + 0x58) = lVar6;
    *(long *)(param_1 + 0x60) = lVar6;
    plVar5 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x78) = 1;
      lVar6 = *(long *)(param_1 + 0x60);
      plVar5 = (long *)(lVar6 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar9 = *plVar5;
        if (lVar9 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar6 + 0x18,&uStack_38);
            *(undefined8 *)(lVar6 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar9 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x60);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 5 & 1) == 0) {
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
    func_0x00010ac469a4(*(undefined8 *)(param_1 + 0x70));
    func_0x0001092ba100(param_1 + 0x10);
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x50);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  func_0x0001092af97c(plVar5 + 0x12);
LAB_10ac54fb8:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac54fbc);
  (*pcVar4)();
}



/* Entry: 10ac550f8; end: 10ac5523b;  */

void FUN_10ac550f8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x58);
    if (plVar4 == (long *)0x0) goto LAB_10ac55224;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10ac55224;
    do {
      uVar5 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    plVar4 = *(long **)(param_1 + 0x60);
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
    plVar4 = *(long **)(param_1 + 0x58);
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
    plVar4 = *(long **)(param_1 + 0x50);
    if (plVar4 == (long *)0x0) goto LAB_10ac55224;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10ac55224;
    do {
      uVar5 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar5 == 0) {
    (**(code **)(*plVar4 + 8))();
  }
LAB_10ac55224:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ac5523c; end: 10ac554df;  */

void FUN_10ac5523c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
    FUN_10ac46c80(param_1 + 0xa8,param_1 + 0x48);
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0xa8);
    plVar5 = (long *)(*(long *)(param_1 + 0xa8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xb0) = 1;
      lVar8 = *(long *)(param_1 + 0x98);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
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
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
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
  plVar5 = *(long **)(param_1 + 0x98);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac5541c);
    (*pcVar4)();
  }
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
  plVar5 = *(long **)(param_1 + 0xa8);
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
  func_0x0001092ba100(param_1 + 0x10);
  func_0x0001092ba41c(param_1 + 0x50);
  plVar5 = *(long **)(param_1 + 0x48);
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ac554e0; end: 10ac555f3;  */

void FUN_10ac554e0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x98);
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
    plVar4 = *(long **)(param_1 + 0xa8);
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
  func_0x0001092ba41c(param_1 + 0x50);
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



/* Entry: 10ac555f4; end: 10ac556f3;  */

undefined1  [16] FUN_10ac555f4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 10;
  auVar1._0_8_ = &UNK_10f69f5cc;
  return auVar1;
}



/* Entry: 10ac556f4; end: 10ac55803;  */

void FUN_10ac556f4(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000002;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x124;
  uStack_48 = 0x13c;
  FUN_10ac7abf0(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f69e317;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10ac7adc4();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f69e31c;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010ac7b07c(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f69e324;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10ac7b294(param_1,&puStack_88);
  FUN_10ac7b494(param_1);
  return;
}



/* Entry: 10ac55804; end: 10ac55b73;  */

void FUN_10ac55804(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f662705,0x20);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c62c10;
  pppuVar2 = (undefined8 ***)&UNK_10f69e32c;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000019;
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
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c62c10;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bb3788;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64420f,FUN_10ac7b550,FUN_10ac7b66c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f69e32d,FUN_10ac7b898,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f69e337,FUN_10ac7ba88,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f69e342,FUN_10ac7bb60,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f69e34c,FUN_10ac7bc38,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f69e357,FUN_10ac7bd10,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f69e363,FUN_10ac7bde8,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f662705,0x20);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac55b58);
  (*pcVar6)();
}



/* Entry: 10ac55b74; end: 10ac55c9f;  */

void FUN_10ac55b74(long param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined *puVar3;
  int iVar4;
  float *pfVar5;
  undefined8 *puVar6;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 uStack_28;
  int iStack_20;
  undefined1 auStack_1c [4];
  long lStack_18;
  
  iVar4 = 0;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar1 = param_2 + 1;
  pfVar2 = param_2 + 2;
  do {
    pfVar5 = pfVar2;
    if ((iVar4 != 2) && (pfVar5 = param_2, iVar4 == 1)) {
      pfVar5 = pfVar1;
    }
    if (0x7f7fffff < (uint)ABS(*pfVar5)) {
LAB_10ac55c90:
      puVar3 = &UNK_10f63b8ac;
      FUN_10a00946c();
      goto LAB_10ac55c9c;
    }
    pfVar5 = pfVar2;
    if ((iVar4 != 2) && (pfVar5 = param_2, iVar4 == 1)) {
      pfVar5 = pfVar1;
    }
    if (*pfVar5 < 0.0) goto LAB_10ac55c90;
    pfVar5 = pfVar2;
    if ((iVar4 != 2) && (pfVar5 = param_2, iVar4 == 1)) {
      pfVar5 = pfVar1;
    }
    if (115.0 <= *pfVar5) goto LAB_10ac55c90;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  uStack_28 = CONCAT44((int)(float)((ulong)*(undefined8 *)param_2 >> 0x20),
                       (int)(float)*(undefined8 *)param_2);
  iStack_20 = (int)param_2[2];
  puVar3 = (undefined *)(param_1 + 0x18);
  param_2 = (float *)&uStack_28;
  FUN_10a5bb0e4(puVar3,param_2,auStack_1c,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
LAB_10ac55c9c:
  ___stack_chk_fail();
  puVar6 = (undefined8 *)(puVar3 + 0x18);
  *(undefined8 *)(puVar3 + 0x20) = *puVar6;
  iStack_54 = (int)*param_2;
  FUN_109febd04(puVar6,&iStack_54);
  iStack_58 = (int)param_2[1];
  FUN_109febd04(puVar6,&iStack_58);
  iStack_5c = (int)param_2[2];
  FUN_109febd04(puVar6,&iStack_5c);
  *(float *)(puVar3 + 0x30) = param_2[3];
  *(float *)(puVar3 + 0x34) = param_2[4];
  *(float *)(puVar3 + 0x38) = param_2[5];
  *(float *)(puVar3 + 0x3c) = param_2[6];
  *(float *)(puVar3 + 0x40) = param_2[7];
  return;
}



/* Entry: 10ac55ca0; end: 10ac55d6f;  */

void FUN_10ac55ca0(long param_1,float *param_2)

{
  undefined8 *puVar1;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *puVar1;
  iStack_24 = (int)*param_2;
  FUN_109febd04(puVar1,&iStack_24);
  iStack_28 = (int)param_2[1];
  FUN_109febd04(puVar1,&iStack_28);
  iStack_2c = (int)param_2[2];
  FUN_109febd04(puVar1,&iStack_2c);
  *(float *)(param_1 + 0x30) = param_2[3];
  *(float *)(param_1 + 0x34) = param_2[4];
  *(float *)(param_1 + 0x38) = param_2[5];
  *(float *)(param_1 + 0x3c) = param_2[6];
  *(float *)(param_1 + 0x40) = param_2[7];
  return;
}



/* Entry: 10ac55d70; end: 10ac5601b;  */

undefined8 * FUN_10ac55d70(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined2 uStack_42;
  
  param_1[0x75] = &PTR_FUN_110c383b8;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  *(undefined2 *)(param_1 + 0x78) = 0x100;
  puVar1 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110c5f630,param_2);
  puVar1 = puVar1 + 0x51;
  FUN_10a0040d0(puVar1,&PTR_PTR_110c5f650);
  uStack_42 = 1;
  FUN_10a00db68(param_1 + 0x56,param_2,&uStack_42);
  *param_1 = &PTR_FUN_110c5f360;
  param_1[2] = &PTR_FUN_110c5f4a0;
  param_1[5] = &PTR_FUN_110c5f4d0;
  param_1[0x75] = &PTR_FUN_110c5f5f0;
  param_1[0x15] = &PTR_FUN_110c5f528;
  param_1[0x51] = &PTR_FUN_110c5f550;
  param_1[0x56] = &PTR_FUN_110c5f598;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  FUN_10ac77f18(param_1 + 0x67);
  FUN_10ac77f18(param_1 + 0x6d);
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  plVar3 = (long *)((long)puVar1 + *(long *)(param_1[0x51] + -0x18));
  if ((*(byte *)(plVar3 + 3) & 1) == 0) {
    *(undefined1 *)(plVar3 + 3) = 1;
    plVar3[2] = param_2;
    if (param_2 != 0) {
      plVar3[1] = *(long *)(*(long *)(param_2 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar3 + 0x18))();
  }
  FUN_10a5ae998(param_1[0x54],&PTR_DAT_110b99f08,param_2,puVar1);
  uVar2 = 0x11a8;
  __Znwm();
  FUN_10a14a504();
  plVar3 = (long *)param_1[0x5b];
  param_1[0x5b] = uVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_10ac55ca0(param_1[0x67],&UNK_10e509640);
  FUN_10ac55ca0(param_1[0x69],&UNK_10e509660);
  FUN_10ac55ca0(param_1[0x6b],&UNK_10e509680);
  FUN_10ac55ca0(param_1[0x6d],&UNK_10e5096a0);
  FUN_10ac55ca0(param_1[0x6f],&UNK_10e5096c0);
  FUN_10ac55ca0(param_1[0x71],&UNK_10e5096e0);
  return param_1;
}



/* Entry: 10ac5601c; end: 10ac560bb;  */

void FUN_10ac5601c(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x80);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined4 *)((long)register0x00000008 + -0x80) = *(undefined4 *)(param_1 + 0x2e0);
    *(undefined4 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x40) = 9;
    *(undefined1 *)((long)register0x00000008 + -0x3c) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x38) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x34) = 0xffffffff;
    *(undefined1 *)((long)register0x00000008 + -0x30) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x2c) = 0;
    FUN_10a4c3ba4(param_2 + 0x58);
    FUN_10a22d0f8();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28))
    break;
    ___stack_chk_fail();
    FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0x80));
    unaff_x30 = FUN_10ac560bc;
    param_1 = puVar1;
    __Unwind_Resume();
    param_1 = param_1 + -0x288;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    param_2 = puVar2;
    unaff_x19 = puVar1;
  }
  return;
}



/* Entry: 10ac560bc; end: 10ac560c3;  */

void FUN_10ac560bc(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x80);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined4 *)((long)register0x00000008 + -0x80) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x40) = 9;
    *(undefined1 *)((long)register0x00000008 + -0x3c) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x38) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x34) = 0xffffffff;
    *(undefined1 *)((long)register0x00000008 + -0x30) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x2c) = 0;
    FUN_10a4c3ba4(param_2 + 0x58);
    FUN_10a22d0f8();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28))
    break;
    ___stack_chk_fail();
    FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0x80));
    unaff_x30 = FUN_10ac560bc;
    param_1 = puVar1;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    param_2 = puVar2;
    unaff_x19 = puVar1;
  }
  return;
}



/* Entry: 10ac560c4; end: 10ac56143;  */

void FUN_10ac560c4(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined8 uStack_30;
  
  if (*(long *)(param_1 + 0x2f8) != 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x90);
  FUN_10a2421c8();
  plVar2 = *(long **)(lVar1 + 0x228);
  uStack_58 = 0x100000200;
  uStack_60 = 0x20000000000;
  uStack_48 = 0x100000001;
  uStack_50 = 4;
  uStack_40 = 1;
  uStack_38 = 0;
  uStack_30 = 0;
  (**(code **)(*plVar2 + 0x20))(plVar2,&uStack_60);
  FUN_10a099d88(param_1 + 0x2f8,plVar2);
  return;
}



/* Entry: 10ac56144; end: 10ac5614b;  */

void FUN_10ac56144(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined8 uStack_30;
  
  if (*(long *)(param_1 + 0x2e8) != 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x80);
  FUN_10a2421c8();
  plVar2 = *(long **)(lVar1 + 0x228);
  uStack_58 = 0x100000200;
  uStack_60 = 0x20000000000;
  uStack_48 = 0x100000001;
  uStack_50 = 4;
  uStack_40 = 1;
  uStack_38 = 0;
  uStack_30 = 0;
  (**(code **)(*plVar2 + 0x20))(plVar2,&uStack_60);
  FUN_10a099d88(param_1 + 0x2e8,plVar2);
  return;
}



/* Entry: 10ac5614c; end: 10ac561cb;  */

void FUN_10ac5614c(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x2e8) == 0) {
    plVar2 = *(long **)(param_1 + 0x90);
    FUN_10a3dedfc();
    plVar2 = (long *)*plVar2;
    while ((plVar2 != (long *)0x0 &&
           (plVar1 = plVar2, (**(code **)(*plVar2 + 0x80))(), (int)plVar1 == 2))) {
      plVar2 = (long *)plVar2[0x13];
    }
  }
  else {
    plVar2 = *(long **)(*(long *)(param_1 + 0x2e8) + 0x268);
    while ((plVar2 != (long *)0x0 &&
           (plVar1 = plVar2, (**(code **)(*plVar2 + 0x80))(), (int)plVar1 == 2))) {
      plVar2 = (long *)plVar2[0x13];
    }
  }
  return;
}



/* Entry: 10ac561cc; end: 10ac5621f;  */

long * FUN_10ac561cc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long lVar5;
  long *plVar6;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  ppuVar4 = &puStack_20;
  if (*(long *)(param_1 + 0x2f8) == 0) {
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x100) + 0x260);
    puStack_20 = &UNK_10f653c20;
    uStack_18 = 0x21;
    if (lVar5 == 0) {
      FUN_10a0edfc4();
      if (*(long **)((long)ppuVar4 + 0x98) != (long *)0x0) {
        (**(code **)(**(long **)((long)ppuVar4 + 0x98) + 0x50))();
      }
      func_0x00010a1ec8c8(ppuVar4);
      plVar6 = *(long **)((long)ppuVar4 + 0x300);
      *(long *)((long)ppuVar4 + 0x2f8) = 0;
      *(undefined8 *)((long)ppuVar4 + 0x300) = 0;
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
          return plVar6;
        }
      }
      return (long *)((long)ppuVar4 + 0x2f8);
    }
    plVar6 = (long *)(lVar5 + 0xb8);
  }
  else {
    plVar6 = (long *)(param_1 + 0x2f8);
  }
  return plVar6;
}



/* Entry: 10ac56220; end: 10ac5625b;  */

void FUN_10ac56220(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long **)(param_1 + 0x98) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x50))();
  }
  func_0x00010a1ec8c8(param_1);
  plVar5 = *(long **)(param_1 + 0x300);
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
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
  return;
}



/* Entry: 10ac5625c; end: 10ac56437;  */

float FUN_10ac5625c(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined4 *puVar12;
  float fVar13;
  undefined4 *puStack_88;
  undefined4 *puStack_80;
  undefined4 *puStack_78;
  
  puStack_88 = (undefined4 *)0x0;
  puVar12 = (undefined4 *)0x0;
  puVar10 = (undefined4 *)0x0;
  uVar11 = 0;
  puStack_80 = (undefined4 *)0x0;
  puStack_78 = (undefined4 *)0x0;
  puVar7 = (undefined4 *)0x0;
  do {
    lVar2 = *param_2;
    if ((ulong)(param_2[1] - lVar2 >> 2) <= uVar11) goto LAB_10ac563f8;
    if (puVar12 < puVar10) {
      *puVar12 = *(undefined4 *)(lVar2 + uVar11 * 4);
      fVar13 = *(float *)((long)param_2 + uVar11 * 4 + 0x18);
      puVar12[1] = fVar13;
      puVar8 = puVar7;
    }
    else {
      lVar9 = (long)puVar12 - (long)puVar7;
      uVar1 = (lVar9 >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
        puStack_88 = puVar7;
        puStack_78 = puVar10;
        func_0x00010ac78204();
LAB_10ac563f8:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac563fc);
        (*pcVar4)();
      }
      uVar6 = (long)puVar10 - (long)puVar7 >> 2;
      if (uVar6 <= uVar1) {
        uVar6 = uVar1;
      }
      if (0x7ffffffffffffff7 < (ulong)((long)puVar10 - (long)puVar7)) {
        uVar6 = 0x1fffffffffffffff;
      }
      if (uVar6 >> 0x3d != 0) {
        puStack_88 = puVar7;
        puStack_78 = puVar10;
        func_0x000109ffded8();
        goto LAB_10ac563f8;
      }
      lVar5 = uVar6 << 3;
      __Znwm();
      puVar12 = (undefined4 *)(lVar5 + lVar9);
      puVar10 = (undefined4 *)(lVar5 + uVar6 * 8);
      *puVar12 = *(undefined4 *)(lVar2 + uVar11 * 4);
      fVar13 = *(float *)((long)param_2 + uVar11 * 4 + 0x18);
      puVar12[1] = fVar13;
      puVar8 = puVar12 + (lVar9 >> 3) * -2;
      _memcpy(puVar8,puVar7,lVar9);
      if (puVar7 != (undefined4 *)0x0) {
        __ZdlPv(puVar7);
      }
    }
    puVar12 = puVar12 + 2;
    uVar11 = uVar11 + 1;
    puVar7 = puVar8;
    if (uVar11 == 3) {
      puStack_88 = puVar8;
      puStack_80 = puVar12;
      puStack_78 = puVar10;
      FUN_10a14add0(*(undefined8 *)(param_1 + 0x2d8),&puStack_88);
      iVar3 = *(int *)(param_1 + 0x398);
      if (puStack_88 != (undefined4 *)0x0) {
        puStack_80 = puStack_88;
        __ZdlPv();
      }
      return (fVar13 / (float)iVar3) * 2.0 + -1.0;
    }
  } while( true );
}



/* Entry: 10ac56438; end: 10ac56857;  */

void FUN_10ac56438(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  uint uStack_210;
  uint auStack_20c [3];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_19c;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_16c;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_13c;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_98;
  long *plStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c5f670);
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c5f690,0);
  *(int *)(param_1 + 0x2e0) = (int)plVar5;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  FUN_10a015bec(param_1 + 0x2e8,&uStack_98);
  plVar5 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    plVar6 = plStack_90 + 1;
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  pcStack_88 = FUN_10ac7be98;
  ppuStack_80 = &PTR_DAT_110c66fb0;
  lStack_78 = param_1;
  FUN_10a02d928(param_2,&PTR_DAT_110c5f6b0,&pcStack_88,0);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c5f6d0);
  lVar10 = *(long *)(param_1 + 0x338);
  FUN_10ac56858(&uStack_d0,param_1,&PTR_DAT_110c5f6f0,param_2,&UNK_10e509640);
  lVar9 = *(long *)(lVar10 + 0x18);
  if (lVar9 != 0) {
    *(long *)(lVar10 + 0x20) = lVar9;
    __ZdlPv();
    *(long *)(lVar10 + 0x18) = 0;
    *(undefined8 *)(lVar10 + 0x20) = 0;
    *(undefined8 *)(lVar10 + 0x28) = 0;
  }
  uVar3 = uStack_c0;
  *(undefined8 *)(lVar10 + 0x20) = uStack_c8;
  *(undefined8 *)(lVar10 + 0x18) = uStack_d0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d0 = 0;
  *(undefined8 *)(lVar10 + 0x28) = uVar3;
  *(undefined8 *)(lVar10 + 0x30) = uStack_b8;
  *(undefined4 *)(lVar10 + 0x38) = uStack_b0;
  *(undefined8 *)(lVar10 + 0x3c) = uStack_ac;
  lVar10 = *(long *)(param_1 + 0x348);
  FUN_10ac56858(&uStack_100,param_1,&PTR_s_normal_110c5f710,param_2,&UNK_10e509660);
  lVar9 = *(long *)(lVar10 + 0x18);
  if (lVar9 != 0) {
    *(long *)(lVar10 + 0x20) = lVar9;
    __ZdlPv();
    *(long *)(lVar10 + 0x18) = 0;
    *(undefined8 *)(lVar10 + 0x20) = 0;
    *(undefined8 *)(lVar10 + 0x28) = 0;
  }
  uVar3 = uStack_f0;
  *(undefined8 *)(lVar10 + 0x20) = uStack_f8;
  *(undefined8 *)(lVar10 + 0x18) = uStack_100;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_100 = 0;
  *(undefined8 *)(lVar10 + 0x28) = uVar3;
  *(undefined8 *)(lVar10 + 0x30) = uStack_e8;
  *(undefined4 *)(lVar10 + 0x38) = uStack_e0;
  *(undefined8 *)(lVar10 + 0x3c) = uStack_dc;
  lVar10 = *(long *)(param_1 + 0x358);
  FUN_10ac56858(&uStack_130,param_1,&PTR_DAT_110c66908,param_2,&UNK_10e509680);
  lVar9 = *(long *)(lVar10 + 0x18);
  if (lVar9 != 0) {
    *(long *)(lVar10 + 0x20) = lVar9;
    __ZdlPv();
    *(long *)(lVar10 + 0x18) = 0;
    *(undefined8 *)(lVar10 + 0x20) = 0;
    *(undefined8 *)(lVar10 + 0x28) = 0;
  }
  uVar3 = uStack_120;
  *(undefined8 *)(lVar10 + 0x20) = uStack_128;
  *(undefined8 *)(lVar10 + 0x18) = uStack_130;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_130 = 0;
  *(undefined8 *)(lVar10 + 0x28) = uVar3;
  *(undefined8 *)(lVar10 + 0x30) = uStack_118;
  *(undefined4 *)(lVar10 + 0x38) = uStack_110;
  *(undefined8 *)(lVar10 + 0x3c) = uStack_10c;
  (**(code **)(*param_2 + 0x220))(param_2);
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c5f730);
  lVar10 = *(long *)(param_1 + 0x368);
  FUN_10ac56858(&uStack_160,param_1,&PTR_DAT_110c5f6f0,param_2,&UNK_10e5096a0);
  lVar9 = *(long *)(lVar10 + 0x18);
  if (lVar9 != 0) {
    *(long *)(lVar10 + 0x20) = lVar9;
    __ZdlPv();
    *(long *)(lVar10 + 0x18) = 0;
    *(undefined8 *)(lVar10 + 0x20) = 0;
    *(undefined8 *)(lVar10 + 0x28) = 0;
  }
  uVar3 = uStack_150;
  *(undefined8 *)(lVar10 + 0x20) = uStack_158;
  *(undefined8 *)(lVar10 + 0x18) = uStack_160;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_160 = 0;
  *(undefined8 *)(lVar10 + 0x28) = uVar3;
  *(undefined8 *)(lVar10 + 0x30) = uStack_148;
  *(undefined4 *)(lVar10 + 0x38) = uStack_140;
  *(undefined8 *)(lVar10 + 0x3c) = uStack_13c;
  lVar10 = *(long *)(param_1 + 0x378);
  FUN_10ac56858(&uStack_190,param_1,&PTR_s_normal_110c5f710,param_2,&UNK_10e5096c0);
  lVar9 = *(long *)(lVar10 + 0x18);
  if (lVar9 != 0) {
    *(long *)(lVar10 + 0x20) = lVar9;
    __ZdlPv();
    *(long *)(lVar10 + 0x18) = 0;
    *(undefined8 *)(lVar10 + 0x20) = 0;
    *(undefined8 *)(lVar10 + 0x28) = 0;
  }
  uVar3 = uStack_180;
  *(undefined8 *)(lVar10 + 0x20) = uStack_188;
  *(undefined8 *)(lVar10 + 0x18) = uStack_190;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_190 = 0;
  *(undefined8 *)(lVar10 + 0x28) = uVar3;
  *(undefined8 *)(lVar10 + 0x30) = uStack_178;
  *(undefined4 *)(lVar10 + 0x38) = uStack_170;
  *(undefined8 *)(lVar10 + 0x3c) = uStack_16c;
  lVar10 = *(long *)(param_1 + 0x388);
  ppuVar7 = &PTR_DAT_110c66908;
  pfVar8 = (float *)&UNK_10e5096e0;
  plVar5 = param_2;
  FUN_10ac56858(&uStack_1c0,param_1,&PTR_DAT_110c66908);
  lVar9 = *(long *)(lVar10 + 0x18);
  if (lVar9 != 0) {
    *(long *)(lVar10 + 0x20) = lVar9;
    __ZdlPv();
    *(long *)(lVar10 + 0x18) = 0;
    *(undefined8 *)(lVar10 + 0x20) = 0;
    *(undefined8 *)(lVar10 + 0x28) = 0;
  }
  uVar3 = uStack_1b0;
  *(undefined8 *)(lVar10 + 0x20) = uStack_1b8;
  *(undefined8 *)(lVar10 + 0x18) = uStack_1c0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1c0 = 0;
  *(undefined8 *)(lVar10 + 0x28) = uVar3;
  *(undefined8 *)(lVar10 + 0x30) = uStack_1a8;
  *(undefined4 *)(lVar10 + 0x38) = uStack_1a0;
  *(undefined8 *)(lVar10 + 0x3c) = uStack_19c;
  (**(code **)(*param_2 + 0x220))(param_2);
  (**(code **)(*param_2 + 0x220))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(lVar10 + 8);
  __Unwind_Resume();
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  (**(code **)(*plVar5 + 0x210))(plVar5,ppuVar7);
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0xd0))(plVar5,&PTR_DAT_110c66948,(int)*pfVar8);
  auStack_20c[0] = (uint)plVar6;
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0xd0))(plVar5,&PTR_DAT_110c66968,(int)pfVar8[1]);
  auStack_20c[1] = (uint)plVar6;
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0xd0))(plVar5,&PTR_DAT_110c66988,(int)pfVar8[2]);
  lVar9 = 0;
  auStack_20c[2] = (int)plVar6;
  do {
    if (*(ulong *)(*(long *)(param_1 + 0x2d8) + 0x40) <= (ulong)*(uint *)((long)auStack_20c + lVar9)
       ) {
      FUN_10a00946c(&UNK_10f63b8ac);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac56a1c);
      (*pcVar4)();
    }
    uStack_210 = *(uint *)((long)auStack_20c + lVar9);
    FUN_109febd04(param_2,&uStack_210);
    lVar9 = lVar9 + 4;
  } while (lVar9 != 0xc);
  fVar11 = pfVar8[3];
  (**(code **)(*plVar5 + 0x48))(plVar5,&PTR_DAT_110c5f750);
  *(float *)(param_2 + 3) = fVar11;
  fVar11 = pfVar8[4];
  (**(code **)(*plVar5 + 0x48))(plVar5,&PTR_DAT_110c5f770);
  *(float *)((long)param_2 + 0x1c) = fVar11;
  fVar11 = pfVar8[5];
  (**(code **)(*plVar5 + 0x48))(plVar5,&PTR_DAT_110c5f790);
  *(float *)(param_2 + 4) = fVar11;
  fVar11 = pfVar8[6];
  (**(code **)(*plVar5 + 0x48))(plVar5,&PTR_s_width_110c669a8);
  *(float *)((long)param_2 + 0x24) = fVar11;
  fVar11 = pfVar8[7];
  (**(code **)(*plVar5 + 0x48))(plVar5,&PTR_s_height_110c5f7b0);
  *(float *)(param_2 + 5) = fVar11;
  (**(code **)(*plVar5 + 0x220))(plVar5);
  return;
}



/* Entry: 10ac56858; end: 10ac56a3f;  */

void FUN_10ac56858(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,float *param_5)

{
  float fVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  uint uStack_50;
  uint auStack_4c [3];
  
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  (**(code **)(*param_4 + 0x210))(param_4,param_3);
  plVar3 = param_4;
  (**(code **)(*param_4 + 0xd0))(param_4,&PTR_DAT_110c66948,(int)*param_5);
  auStack_4c[0] = (uint)plVar3;
  plVar3 = param_4;
  (**(code **)(*param_4 + 0xd0))(param_4,&PTR_DAT_110c66968,(int)param_5[1]);
  auStack_4c[1] = (uint)plVar3;
  plVar3 = param_4;
  (**(code **)(*param_4 + 0xd0))(param_4,&PTR_DAT_110c66988,(int)param_5[2]);
  lVar4 = 0;
  auStack_4c[2] = (int)plVar3;
  do {
    if (*(ulong *)(*(long *)(param_2 + 0x2d8) + 0x40) <= (ulong)*(uint *)((long)auStack_4c + lVar4))
    {
      FUN_10a00946c(&UNK_10f63b8ac);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10ac56a1c);
      (*pcVar2)();
    }
    uStack_50 = *(uint *)((long)auStack_4c + lVar4);
    FUN_109febd04(param_1,&uStack_50);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0xc);
  fVar1 = param_5[3];
  uVar5 = SUB41(fVar1,0);
  uVar6 = (undefined1)((uint)fVar1 >> 8);
  uVar7 = (undefined1)((uint)fVar1 >> 0x10);
  uVar8 = (undefined1)((uint)fVar1 >> 0x18);
  (**(code **)(*param_4 + 0x48))(param_4,&PTR_DAT_110c5f750);
  *(uint *)(param_1 + 3) = CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5)));
  fVar1 = param_5[4];
  uVar5 = SUB41(fVar1,0);
  uVar6 = (undefined1)((uint)fVar1 >> 8);
  uVar7 = (undefined1)((uint)fVar1 >> 0x10);
  uVar8 = (undefined1)((uint)fVar1 >> 0x18);
  (**(code **)(*param_4 + 0x48))(param_4,&PTR_DAT_110c5f770);
  *(uint *)((long)param_1 + 0x1c) = CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5)));
  fVar1 = param_5[5];
  uVar5 = SUB41(fVar1,0);
  uVar6 = (undefined1)((uint)fVar1 >> 8);
  uVar7 = (undefined1)((uint)fVar1 >> 0x10);
  uVar8 = (undefined1)((uint)fVar1 >> 0x18);
  (**(code **)(*param_4 + 0x48))(param_4,&PTR_DAT_110c5f790);
  *(uint *)(param_1 + 4) = CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5)));
  fVar1 = param_5[6];
  uVar5 = SUB41(fVar1,0);
  uVar6 = (undefined1)((uint)fVar1 >> 8);
  uVar7 = (undefined1)((uint)fVar1 >> 0x10);
  uVar8 = (undefined1)((uint)fVar1 >> 0x18);
  (**(code **)(*param_4 + 0x48))(param_4,&PTR_s_width_110c669a8);
  *(uint *)((long)param_1 + 0x24) = CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5)));
  fVar1 = param_5[7];
  uVar5 = SUB41(fVar1,0);
  uVar6 = (undefined1)((uint)fVar1 >> 8);
  uVar7 = (undefined1)((uint)fVar1 >> 0x10);
  uVar8 = (undefined1)((uint)fVar1 >> 0x18);
  (**(code **)(*param_4 + 0x48))(param_4,&PTR_s_height_110c5f7b0);
  *(uint *)(param_1 + 5) = CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5)));
  (**(code **)(*param_4 + 0x220))(param_4);
  return;
}



/* Entry: 10ac56a40; end: 10ac56d77;  */

void FUN_10ac56a40(long param_1,long *param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puStack_60 = &UNK_10f662705;
  puStack_58 = (undefined *)0x20;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c66928,&puStack_60);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c5f670);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c5f690,*(undefined4 *)(param_1 + 0x2e0));
  FUN_10a02e188(param_2,&PTR_DAT_110c5f6b0,param_1 + 0x2e8,&UNK_10f633e9d,0xd);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c5f6d0);
  lVar1 = *(long *)(param_1 + 0x338);
  puStack_58 = (undefined *)0x0;
  uStack_50 = 0;
  puStack_60 = (undefined *)0x0;
  FUN_10a0e9a40(&puStack_60,*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x20),
                *(long *)(lVar1 + 0x20) - *(long *)(lVar1 + 0x18) >> 2);
  uStack_40 = *(undefined8 *)(lVar1 + 0x38);
  uStack_48 = *(undefined8 *)(lVar1 + 0x30);
  uStack_38 = *(undefined4 *)(lVar1 + 0x40);
  FUN_10ac56d78(&PTR_DAT_110c5f6f0,&puStack_60,param_2);
  if (puStack_60 != (undefined *)0x0) {
    puStack_58 = puStack_60;
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x348);
  puStack_58 = (undefined *)0x0;
  uStack_50 = 0;
  puStack_60 = (undefined *)0x0;
  FUN_10a0e9a40(&puStack_60,*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x20),
                *(long *)(lVar1 + 0x20) - *(long *)(lVar1 + 0x18) >> 2);
  uStack_40 = *(undefined8 *)(lVar1 + 0x38);
  uStack_48 = *(undefined8 *)(lVar1 + 0x30);
  uStack_38 = *(undefined4 *)(lVar1 + 0x40);
  FUN_10ac56d78(&PTR_s_normal_110c5f710,&puStack_60,param_2);
  if (puStack_60 != (undefined *)0x0) {
    puStack_58 = puStack_60;
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x358);
  puStack_58 = (undefined *)0x0;
  uStack_50 = 0;
  puStack_60 = (undefined *)0x0;
  FUN_10a0e9a40(&puStack_60,*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x20),
                *(long *)(lVar1 + 0x20) - *(long *)(lVar1 + 0x18) >> 2);
  uStack_40 = *(undefined8 *)(lVar1 + 0x38);
  uStack_48 = *(undefined8 *)(lVar1 + 0x30);
  uStack_38 = *(undefined4 *)(lVar1 + 0x40);
  FUN_10ac56d78(&PTR_DAT_110c66908,&puStack_60,param_2);
  if (puStack_60 != (undefined *)0x0) {
    puStack_58 = puStack_60;
    __ZdlPv();
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c5f730);
  lVar1 = *(long *)(param_1 + 0x368);
  puStack_58 = (undefined *)0x0;
  uStack_50 = 0;
  puStack_60 = (undefined *)0x0;
  FUN_10a0e9a40(&puStack_60,*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x20),
                *(long *)(lVar1 + 0x20) - *(long *)(lVar1 + 0x18) >> 2);
  uStack_40 = *(undefined8 *)(lVar1 + 0x38);
  uStack_48 = *(undefined8 *)(lVar1 + 0x30);
  uStack_38 = *(undefined4 *)(lVar1 + 0x40);
  FUN_10ac56d78(&PTR_DAT_110c5f6f0,&puStack_60,param_2);
  if (puStack_60 != (undefined *)0x0) {
    puStack_58 = puStack_60;
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x378);
  puStack_58 = (undefined *)0x0;
  uStack_50 = 0;
  puStack_60 = (undefined *)0x0;
  FUN_10a0e9a40(&puStack_60,*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x20),
                *(long *)(lVar1 + 0x20) - *(long *)(lVar1 + 0x18) >> 2);
  uStack_40 = *(undefined8 *)(lVar1 + 0x38);
  uStack_48 = *(undefined8 *)(lVar1 + 0x30);
  uStack_38 = *(undefined4 *)(lVar1 + 0x40);
  FUN_10ac56d78(&PTR_s_normal_110c5f710,&puStack_60,param_2);
  if (puStack_60 != (undefined *)0x0) {
    puStack_58 = puStack_60;
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x388);
  puStack_58 = (undefined *)0x0;
  uStack_50 = 0;
  puStack_60 = (undefined *)0x0;
  FUN_10a0e9a40(&puStack_60,*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x20),
                *(long *)(lVar1 + 0x20) - *(long *)(lVar1 + 0x18) >> 2);
  uStack_40 = *(undefined8 *)(lVar1 + 0x38);
  uStack_48 = *(undefined8 *)(lVar1 + 0x30);
  uStack_38 = *(undefined4 *)(lVar1 + 0x40);
  FUN_10ac56d78(&PTR_DAT_110c66908,&puStack_60,param_2);
  if (puStack_60 != (undefined *)0x0) {
    puStack_58 = puStack_60;
    __ZdlPv();
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10ac56d78; end: 10ac56ec7;  */

void FUN_10ac56d78(undefined8 param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  
  (**(code **)(*param_3 + 0x18))(param_3,param_1);
  if ((undefined4 *)*param_2 == (undefined4 *)param_2[1]) {
LAB_10ac56e20:
    (**(code **)(*param_3 + 0x60))((int)param_2[3],param_3,&PTR_DAT_110c5f750);
    (**(code **)(*param_3 + 0x60))(*(undefined4 *)((long)param_2 + 0x1c),param_3,&PTR_DAT_110c5f770)
    ;
    (**(code **)(*param_3 + 0x60))((int)param_2[4],param_3,&PTR_DAT_110c5f790);
    (**(code **)(*param_3 + 0x60))
              (*(undefined4 *)((long)param_2 + 0x24),param_3,&PTR_s_width_110c669a8);
    (**(code **)(*param_3 + 0x60))((int)param_2[5],param_3,&PTR_s_height_110c5f7b0);
                    /* WARNING: Could not recover jumptable at 0x00010ac56ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x20))(param_3);
    return;
  }
  (**(code **)(*param_3 + 0x50))(param_3,&PTR_DAT_110c66948,*(undefined4 *)*param_2);
  if (4 < (ulong)(param_2[1] - *param_2)) {
    (**(code **)(*param_3 + 0x50))(param_3,&PTR_DAT_110c66968,*(undefined4 *)(*param_2 + 4));
    if (8 < (ulong)(param_2[1] - *param_2)) {
      (**(code **)(*param_3 + 0x50))(param_3,&PTR_DAT_110c66988,*(undefined4 *)(*param_2 + 8));
      goto LAB_10ac56e20;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac56ec8);
  (*pcVar1)();
}



/* Entry: 10ac56ec8; end: 10ac5811f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10ac56ec8(long *******param_1,long *param_2)

{
  long *******ppppppplVar1;
  long *******ppppppplVar2;
  long ******pppppplVar3;
  long **pplVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  bool bVar8;
  code *pcVar9;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  long *****ppppplVar12;
  long *plVar13;
  long *plVar14;
  long **pplVar15;
  long ******pppppplVar16;
  ulong uVar17;
  bool bVar18;
  int iVar19;
  long ***ppplVar20;
  long ****pppplVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long *****ppppplVar25;
  long ******pppppplVar26;
  long lVar27;
  float *pfVar28;
  int iVar29;
  undefined8 *puVar30;
  bool bVar31;
  undefined **ppuVar32;
  undefined8 *puVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 *puVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 *puStack_378;
  long *****ppppplStack_350;
  undefined8 uStack_348;
  long *******ppppppplStack_340;
  long *******ppppppplStack_338;
  long ******pppppplStack_330;
  long ******pppppplStack_328;
  undefined4 uStack_320;
  long *******ppppppplStack_318;
  long *plStack_310;
  undefined1 uStack_301;
  uint uStack_300;
  uint uStack_2fc;
  uint uStack_2f8;
  uint uStack_2f4;
  undefined4 uStack_2f0;
  int iStack_2ec;
  undefined8 *puStack_2e8;
  uint uStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  undefined4 uStack_2d4;
  uint uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  long ******pppppplStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long *******ppppppplStack_290;
  long *******ppppppplStack_288;
  long ******pppppplStack_280;
  long ******pppppplStack_278;
  undefined4 uStack_270;
  float fStack_26c;
  float fStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  long ******apppppplStack_258 [2];
  long ******pppppplStack_248;
  char cStack_241;
  long ******pppppplStack_240;
  long ******pppppplStack_238;
  long ******pppppplStack_230;
  undefined4 uStack_228;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  ppplVar20 = param_1[0x12][0x118][3][0xd];
  if (ppplVar20 != (long ***)0x0) {
    pplVar15 = ppplVar20[5];
    pplVar4 = ppplVar20[6];
    if (pplVar15 == pplVar4) {
LAB_10ac56f50:
      if ((pplVar15 != pplVar4) && (pplVar15 != (long **)0x0)) {
        FUN_10a14ca80(pplVar15 + 1,param_1[0x5b]);
        pppppplVar26 = param_1[0x5b];
        fVar35 = SUB84(pppppplVar26[2],0);
        fVar40 = (float)((ulong)pppppplVar26[2] >> 0x20);
        fVar34 = 2.220446e-16;
        if (2.220446e-16 <=
            ABS(SQRT(*(float *)((long)pppppplVar26 + 0xc) * *(float *)((long)pppppplVar26 + 0xc) +
                     fVar35 * fVar35 + fVar40 * fVar40))) {
          pppppplVar16 = *(long *******)((long)pppppplVar26 + 0x119c);
          param_1[0x73] = pppppplVar16;
          *(float *)(param_1 + 0x74) =
               (float)(int)pppppplVar16 / (float)(int)((ulong)pppppplVar16 >> 0x20);
          FUN_10a14af2c(pppppplVar26);
          fVar35 = fVar34;
          func_0x00010a14af38(pppppplVar26);
          fVar40 = 0.0625;
          *(float *)((long)param_1 + 0x3a4) =
               (((fVar35 - fVar34) *
                SQRT(*(float *)((long)pppppplVar26 + 0xc) * *(float *)((long)pppppplVar26 + 0xc) +
                     *(float *)(pppppplVar26 + 2) * *(float *)(pppppplVar26 + 2) +
                     *(float *)((long)pppppplVar26 + 0x14) * *(float *)((long)pppppplVar26 + 0x14)))
               / (float)(int)pppppplVar16) * 0.25 * 9.0 * 0.0625;
          ppppppplVar10 = param_1;
          (*(code *)(*param_1)[0xd])(param_1,2);
          ppppppplVar1 = param_1 + 0x61;
          if (param_1[0x61] == (long ******)0x0) {
            FUN_10ab6e898();
            if (*(char *)((long)ppppppplVar10 + 0x17) < '\0') {
              ppppppplVar11 = (long *******)&ppppppplStack_290;
              func_0x000107c3192c(ppppppplVar11,*ppppppplVar10,ppppppplVar10[1]);
            }
            else {
              ppppppplStack_288 = (long *******)ppppppplVar10[1];
              ppppppplStack_290 = (long *******)*ppppppplVar10;
              pppppplStack_280 = ppppppplVar10[2];
              ppppppplVar11 = ppppppplVar10;
            }
            pppppplStack_278 = ppppppplVar10[3];
            uStack_260 = *(undefined4 *)(ppppppplVar10 + 6);
            fStack_268 = SUB84(ppppppplVar10[5],0);
            uStack_264 = (undefined4)((ulong)ppppppplVar10[5] >> 0x20);
            uStack_270 = SUB84(ppppppplVar10[4],0);
            fStack_26c = (float)((ulong)ppppppplVar10[4] >> 0x20);
            FUN_10ab6f020();
            if (*(char *)((long)ppppppplVar11 + 0x17) < '\0') {
              func_0x000107c3192c(apppppplStack_258,*ppppppplVar11,ppppppplVar11[1]);
            }
            else {
              pppppplStack_248 = ppppppplVar11[2];
              apppppplStack_258[1] = ppppppplVar11[1];
              apppppplStack_258[0] = *ppppppplVar11;
            }
            pppppplStack_240 = ppppppplVar11[3];
            pppppplStack_230 = ppppppplVar11[5];
            pppppplStack_238 = ppppppplVar11[4];
            uStack_228 = *(undefined4 *)(ppppppplVar11 + 6);
            FUN_10ab6f520(&uStack_300,&ppppppplStack_290,2);
            lVar27 = 0;
            do {
              if ((&cStack_241)[lVar27] < '\0') {
                __ZdlPv(*(undefined8 *)((long)apppppplStack_258 + lVar27));
              }
              lVar27 = lVar27 + -0x38;
            } while (lVar27 != -0x70);
            ppppppplVar10 = (long *******)&ppppppplStack_340;
            FUN_10a0d0194(&ppppppplStack_290);
            ppppppplVar11 = ppppppplStack_290;
            *(uint *)(ppppppplStack_290 + 0x1e) = uStack_300;
            if (ppppppplStack_290 + 0x1e != (long *******)&uStack_300) {
              ppppppplVar10 = ppppppplStack_290 + 0x1f;
              FUN_10a1903c4();
            }
            ppppppplVar2 = ppppppplStack_290;
            pppppplVar26 = (long ******)CONCAT44(uStack_2cc,uStack_2d0);
            ppppppplVar11[0x23] = (long ******)CONCAT44(uStack_2d4,fStack_2d8);
            ppppppplVar11[0x22] = (long ******)CONCAT44(fStack_2dc,uStack_2e0);
            ppppppplVar11[0x25] = (long ******)CONCAT44(uStack_2c4,uStack_2c8);
            ppppppplVar11[0x24] = pppppplVar26;
            ppppppplVar11[0x26] = pppppplStack_2c0;
            ppppppplStack_290[0x1d] = (long ******)0x100000000;
            FUN_10ab6e898();
            fVar40 = SUB84(pppppplVar26,0);
            uVar7 = *(int *)((long)ppppppplVar10 + 0x24) - 1;
            if (uVar7 < 7) {
              iVar29 = *(int *)(&UNK_10e50a6c8 + (ulong)uVar7 * 4);
            }
            else {
              iVar29 = 0;
            }
            iVar5 = *(int *)(ppppppplVar10 + 5);
            FUN_10ab6f020();
            uVar7 = *(int *)((long)ppppppplVar10 + 0x24) - 1;
            if (uVar7 < 7) {
              iVar19 = *(int *)(&UNK_10e50a6c8 + (ulong)uVar7 * 4);
            }
            else {
              iVar19 = 0;
            }
            uVar17 = (ulong)(((*(int *)(ppppppplVar10 + 5) * iVar19 + 3U & 0x3ffffffc) +
                             (iVar5 * iVar29 + 3U & 0x3ffffffc)) * 4);
            uVar22 = (long)ppppppplVar2[3] - (long)ppppppplVar2[2];
            if (uVar17 < uVar22 || uVar17 - uVar22 == 0) {
              if (uVar17 < uVar22) {
                ppppppplVar2[3] = (long ******)((long)ppppppplVar2[2] + uVar17);
              }
            }
            else {
              func_0x000107c27d58(ppppppplVar2 + 2,uVar17 - uVar22);
            }
            if (uStack_2e0 == 0xffffffff) {
              lVar27 = 0;
            }
            else {
              uVar17 = (CONCAT44(iStack_2ec,uStack_2f0) - CONCAT44(uStack_2f4,uStack_2f8) >> 3) *
                       0x6db6db6db6db6db7;
              if (uVar17 < uStack_2e0 || uVar17 - uStack_2e0 == 0) {
                FUN_10ab725fc();
                goto LAB_10ac57f70;
              }
              lVar27 = CONCAT44(uStack_2f4,uStack_2f8) + (ulong)uStack_2e0 * 0x38;
            }
            if (uStack_2d0 == 0xffffffff) {
              lVar23 = 0;
            }
            else {
              uVar17 = (CONCAT44(iStack_2ec,uStack_2f0) - CONCAT44(uStack_2f4,uStack_2f8) >> 3) *
                       0x6db6db6db6db6db7;
              if (uVar17 < uStack_2d0 || uVar17 - uStack_2d0 == 0) {
                FUN_10ab725fc();
                goto LAB_10ac57f70;
              }
              lVar23 = CONCAT44(uStack_2f4,uStack_2f8) + (ulong)uStack_2d0 * 0x38;
            }
            uVar7 = *(int *)(lVar27 + 0x24) - 1;
            if (uVar7 < 7) {
              iVar29 = *(int *)(&UNK_10e50a6c8 + (ulong)uVar7 * 4);
            }
            else {
              iVar29 = 0;
            }
            if (*(int *)(lVar27 + 0x28) * iVar29 == 8) {
              puVar33 = (undefined8 *)((long)ppppppplStack_290[2] + (ulong)*(uint *)(lVar27 + 0x30))
              ;
              uVar17 = (ulong)*(uint *)(ppppppplStack_290 + 0x1e);
            }
            else {
              puVar33 = (undefined8 *)0x0;
              uVar17 = 0;
            }
            uVar7 = *(int *)(lVar23 + 0x24) - 1;
            if (uVar7 < 7) {
              iVar29 = *(int *)(&UNK_10e50a6c8 + (ulong)uVar7 * 4);
            }
            else {
              iVar29 = 0;
            }
            if (*(int *)(lVar23 + 0x28) * iVar29 == 8) {
              puVar30 = (undefined8 *)((long)ppppppplStack_290[2] + (ulong)*(uint *)(lVar23 + 0x30))
              ;
              uVar22 = (ulong)*(uint *)(ppppppplStack_290 + 0x1e);
            }
            else {
              puVar30 = (undefined8 *)0x0;
              uVar22 = 0;
            }
            lVar27 = 0;
            do {
              *puVar33 = *(undefined8 *)(&UNK_10e509700 + lVar27);
              *puVar30 = *(undefined8 *)(&UNK_10e509720 + lVar27);
              lVar27 = lVar27 + 8;
              puVar30 = (undefined8 *)((long)puVar30 + uVar22);
              puVar33 = (undefined8 *)((long)puVar33 + uVar17);
            } while (lVar27 != 0x20);
            ppppppplStack_318 = (long *******)0x0;
            ppppplStack_350 = (long *****)((ulong)ppppplStack_350 & 0xffffffff00000000);
            FUN_10a276954(&ppppppplStack_340,&uStack_301,&ppppppplStack_318,&ppppplStack_350,
                          &ppppppplStack_290);
            func_0x00010a2432e4(ppppppplVar1,&ppppppplStack_340);
            ppppppplVar10 = ppppppplStack_338;
            if (ppppppplStack_338 != (long *******)0x0) {
              ppppppplVar11 = ppppppplStack_338 + 1;
              do {
                pppppplVar26 = *ppppppplVar11;
                cVar6 = '\x01';
                bVar31 = (bool)ExclusiveMonitorPass(ppppppplVar11,0x10);
                if (bVar31) {
                  *ppppppplVar11 = (long ******)((long)pppppplVar26 + -1);
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (pppppplVar26 == (long ******)0x0) {
                (*(code *)(*ppppppplStack_338)[2])(ppppppplStack_338);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar10);
              }
            }
            ppppppplVar10 = ppppppplStack_288;
            if (ppppppplStack_288 != (long *******)0x0) {
              ppppppplVar11 = ppppppplStack_288 + 1;
              do {
                pppppplVar26 = *ppppppplVar11;
                cVar6 = '\x01';
                bVar31 = (bool)ExclusiveMonitorPass(ppppppplVar11,0x10);
                if (bVar31) {
                  *ppppppplVar11 = (long ******)((long)pppppplVar26 + -1);
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (pppppplVar26 == (long ******)0x0) {
                (*(code *)(*ppppppplStack_288)[2])(ppppppplStack_288);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar10);
              }
            }
            ppppppplStack_290 = (long *******)&uStack_2f8;
            func_0x00010a190844(&ppppppplStack_290);
          }
          ppppppplVar10 = param_1 + 0x65;
          if (param_1[0x65] == (long ******)0x0) {
            FUN_10ab451f4(&ppppppplStack_290,0,&UNK_10f69e36e,0x20,&UNK_10f69e38f,0x1c,
                          &UNK_10f69e3ac,0xd,1);
            func_0x00010a015c50(ppppppplVar10,&ppppppplStack_290);
            ppppplVar25 = (*ppppppplVar10)[0x45];
            if (ppppplVar25 == (*ppppppplVar10)[0x46]) {
              pppplVar21 = (long ****)0x0;
            }
            else {
              pppplVar21 = *ppppplVar25;
            }
            func_0x00010a332748((long)pppplVar21 + 0x219,0);
            func_0x00010a332700((long)pppplVar21 + 0x21a,0);
            func_0x00010a3326b8(pppplVar21 + 0x43,1);
            *(undefined4 *)((long)pppplVar21 + 0x21e) = 0x1010101;
            ppppppplStack_340 = (long *******)0x0;
            FUN_10a063b58(&uStack_300,&ppppppplStack_318,&ppppppplStack_340);
            FUN_10a02bf24(param_1 + 99,&uStack_300);
            plVar13 = (long *)CONCAT44(uStack_2f4,uStack_2f8);
            if (plVar13 != (long *)0x0) {
              plVar14 = plVar13 + 1;
              do {
                lVar27 = *plVar14;
                cVar6 = '\x01';
                bVar31 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                if (bVar31) {
                  *plVar14 = lVar27 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar27 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
              }
            }
            ppppppplStack_340 = (long *******)0x0;
            FUN_10a17647c(&uStack_300,&ppppppplStack_340,param_1 + 99);
            func_0x000107c2b074(&ppppppplStack_340,&PTR_DAT_110c669c8);
            FUN_10a3368d0(pppplVar21,&ppppppplStack_340,&uStack_300,&UNK_10e4ac8a8,0xd);
            if ((long)pppppplStack_330 < 0) {
              __ZdlPv(ppppppplStack_340);
            }
            FUN_10a044790(&uStack_2f0);
            (*(code *)*puStack_2e8)(&puStack_2e8);
            plVar13 = (long *)CONCAT44(uStack_2f4,uStack_2f8);
            if (plVar13 != (long *)0x0) {
              plVar14 = plVar13 + 1;
              do {
                lVar27 = *plVar14;
                cVar6 = '\x01';
                bVar31 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                if (bVar31) {
                  *plVar14 = lVar27 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar27 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
              }
            }
            FUN_10a044790(&pppppplStack_280);
            (*(code *)*pppppplStack_278)(&pppppplStack_278);
            ppppppplVar11 = ppppppplStack_288;
            if (ppppppplStack_288 != (long *******)0x0) {
              ppppppplVar2 = ppppppplStack_288 + 1;
              do {
                pppppplVar26 = *ppppppplVar2;
                cVar6 = '\x01';
                bVar31 = (bool)ExclusiveMonitorPass(ppppppplVar2,0x10);
                if (bVar31) {
                  *ppppppplVar2 = (long ******)((long)pppppplVar26 + -1);
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (pppppplVar26 == (long ******)0x0) {
                (*(code *)(*ppppppplStack_288)[2])(ppppppplStack_288);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar11);
              }
            }
          }
          if ((*ppppppplVar1 != (long ******)0x0) && (*ppppppplVar10 != (long ******)0x0)) {
            func_0x0001096dc9c0((long)param_1[0x12][0x118][3][0xd][0xb] + 0xc);
            puVar30 = (undefined8 *)0x0;
            puStack_378 = (undefined8 *)0x0;
            puVar33 = (undefined8 *)0x0;
            bVar31 = false;
            fVar35 = -0.6;
            if (fVar40 <= 0.6) {
              fVar35 = -fVar40;
            }
            fVar34 = 0.6;
            if (fVar35 <= 0.6) {
              fVar34 = fVar35;
            }
            fVar40 = ABS(fVar34) / 0.6;
            uVar22 = (ulong)(uint)fVar40;
            ppppppplStack_340 = param_1 + 0x67;
            ppppppplStack_318 = param_1 + 0x6d;
            ppppppplVar11 = (long *******)&ppppppplStack_340;
            fVar35 = 1.0 - fVar40;
            uVar17 = uVar22;
            bVar8 = true;
            do {
              bVar18 = bVar8;
              fVar41 = (float)uVar17;
              pppppplVar26 = *ppppppplVar11;
              ppppplVar25 = pppppplVar26[2];
              ppppppplStack_290 = (long *******)0x0;
              ppppppplStack_288 = (long *******)0x0;
              pppppplStack_280 = (long ******)0x0;
              FUN_10a0e9a40(&ppppppplStack_290,ppppplVar25[3],ppppplVar25[4],
                            (long)ppppplVar25[4] - (long)ppppplVar25[3] >> 2);
              pppppplStack_278 = (long ******)ppppplVar25[6];
              uStack_270 = SUB84(ppppplVar25[7],0);
              fStack_26c = (float)((ulong)ppppplVar25[7] >> 0x20);
              fStack_268 = *(float *)(ppppplVar25 + 8);
              lVar27 = 0x20;
              if (bVar31 != fVar34 <= 0.0) {
                lVar27 = 0;
              }
              lVar27 = *(long *)((long)pppppplVar26 + lVar27);
              uStack_300 = 0;
              uStack_2fc = 0;
              uStack_2f8 = 0;
              uStack_2f4 = 0;
              uStack_2f0 = 0;
              iStack_2ec = 0;
              FUN_10a0e9a40(&uStack_300,*(long *)(lVar27 + 0x18),*(long *)(lVar27 + 0x20),
                            *(long *)(lVar27 + 0x20) - *(long *)(lVar27 + 0x18) >> 2);
              puVar37 = *(undefined8 **)(lVar27 + 0x30);
              uStack_2e0 = (uint)*(undefined8 *)(lVar27 + 0x38);
              fStack_2dc = (float)((ulong)*(undefined8 *)(lVar27 + 0x38) >> 0x20);
              fStack_2d8 = *(float *)(lVar27 + 0x40);
              puStack_2e8 = puVar37;
              FUN_10ac5625c(param_1,&ppppppplStack_290);
              fVar36 = fVar43;
              fVar42 = fVar41;
              FUN_10ac5625c(param_1,&uStack_300);
              fVar43 = SUB84(puVar37,0);
              uVar38 = CONCAT44(fVar41 * fVar35 + fVar42 * fVar40,fVar43 * fVar35 + fVar36 * fVar40)
              ;
              uVar39 = CONCAT44(fStack_268 * fVar35 + fStack_2d8 * fVar40,
                                fStack_26c * fVar35 + fStack_2dc * fVar40);
              if (puVar33 < puVar30) {
                puVar33[1] = uVar39;
                *puVar33 = uVar38;
                uVar17 = uVar22;
                puVar37 = puStack_378;
              }
              else {
                lVar27 = (long)puVar33 - (long)puStack_378;
                uVar17 = (lVar27 >> 4) + 1;
                if (uVar17 >> 0x3c != 0) goto LAB_10ac57f54;
                uVar24 = (long)puVar30 - (long)puStack_378 >> 3;
                if (uVar24 <= uVar17) {
                  uVar24 = uVar17;
                }
                if (0x7fffffffffffffef < (ulong)((long)puVar30 - (long)puStack_378)) {
                  uVar24 = 0xfffffffffffffff;
                }
                if (uVar24 >> 0x3c != 0) {
                  func_0x000109ffded8();
                  goto LAB_10ac57f70;
                }
                lVar23 = uVar24 << 4;
                uVar17 = uVar22;
                __Znwm();
                puVar33 = (undefined8 *)(lVar23 + lVar27);
                puVar30 = (undefined8 *)(lVar23 + uVar24 * 0x10);
                puVar37 = puVar33 + (lVar27 >> 4) * -2;
                puVar33[1] = uVar39;
                *puVar33 = uVar38;
                _memcpy(puVar37,puStack_378,lVar27);
                if (puStack_378 != (undefined8 *)0x0) {
                  __ZdlPv(puStack_378);
                }
              }
              puStack_378 = puVar37;
              puVar33 = puVar33 + 2;
              if (CONCAT44(uStack_2fc,uStack_300) != 0) {
                uStack_2f8 = uStack_300;
                uStack_2f4 = uStack_2fc;
                __ZdlPv();
              }
              if (ppppppplStack_290 != (long *******)0x0) {
                ppppppplStack_288 = ppppppplStack_290;
                __ZdlPv();
              }
              ppppppplVar11 = (long *******)&ppppppplStack_318;
              bVar31 = true;
              bVar8 = false;
            } while (bVar18);
            ppppppplStack_318 = (long *******)0x0;
            plStack_310 = (long *)0x0;
            ppppppplStack_338 = (long *******)0x0;
            ppppppplStack_340 = (long *******)0x3f800000;
            pppppplStack_328 = (long ******)0x0;
            pppppplStack_330 = (long ******)0x3f800000;
            uStack_320 = 0x3f800000;
            pppppplVar26 = param_1[0x5d];
            if (pppppplVar26 == (long ******)0x0) {
              pppppplVar26 = param_1[0x12];
              FUN_10a3dedfc();
              ppppplVar25 = *pppppplVar26;
              uStack_348 = pppppplVar26[1];
              if (uStack_348 != (long *****)0x0) {
                ppppplVar12 = uStack_348 + 1;
                do {
                  cVar6 = '\x01';
                  bVar31 = (bool)ExclusiveMonitorPass(ppppplVar12,0x10);
                  if (bVar31) {
                    *ppppplVar12 = (long ****)((long)*ppppplVar12 + 1);
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              puVar30 = (undefined8 *)0x1;
              ppppplVar12 = ppppplVar25;
              ppppplStack_350 = ppppplVar25;
              FUN_10a088744();
              uStack_300 = (uint)ppppplVar12;
              if (puVar30 == (undefined8 *)0x0) {
                uStack_2f8 = 0;
                uStack_2f4 = 0;
                uStack_2f0 = 0;
                iStack_2ec = 0;
              }
              else {
                uStack_2f0 = (undefined4)puVar30[1];
                iStack_2ec = (int)((ulong)puVar30[1] >> 0x20);
                uStack_2f8 = (uint)*puVar30;
                uStack_2f4 = (uint)((ulong)*puVar30 >> 0x20);
                if (puVar30[1] != 0) {
                  plVar13 = (long *)(puVar30[1] + 8);
                  do {
                    cVar6 = '\x01';
                    bVar31 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                    if (bVar31) {
                      *plVar13 = *plVar13 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                }
              }
              if (uStack_300 == 2) {
                FUN_10a026ab4(&ppppppplStack_318,&uStack_2f8);
                (*(code *)(*ppppplVar25)[0x12])(&ppppppplStack_290,ppppplVar25);
                ppppppplStack_338 = ppppppplStack_288;
                ppppppplStack_340 = ppppppplStack_290;
                pppppplStack_328 = pppppplStack_278;
                pppppplStack_330 = pppppplStack_280;
                uStack_320 = uStack_270;
                plVar13 = (long *)CONCAT44(iStack_2ec,uStack_2f0);
                if (plVar13 != (long *)0x0) {
                  plVar14 = plVar13 + 1;
                  do {
                    lVar27 = *plVar14;
                    cVar6 = '\x01';
                    bVar31 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar31) {
                      *plVar14 = lVar27 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (lVar27 == 0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                  }
                }
                if (uStack_348 != (long *****)0x0) {
                  ppppplVar25 = uStack_348 + 1;
                  do {
                    pppplVar21 = *ppppplVar25;
                    cVar6 = '\x01';
                    bVar31 = (bool)ExclusiveMonitorPass(ppppplVar25,0x10);
                    if (bVar31) {
                      *ppppplVar25 = (long ****)((long)pppplVar21 + -1);
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  goto LAB_10ac57a94;
                }
                goto LAB_10ac57ab0;
              }
              plVar13 = (long *)CONCAT44(iStack_2ec,uStack_2f0);
              if (plVar13 != (long *)0x0) {
                plVar14 = plVar13 + 1;
                do {
                  lVar27 = *plVar14;
                  cVar6 = '\x01';
                  bVar31 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar31) {
                    *plVar14 = lVar27 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (lVar27 == 0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                }
              }
              if (uStack_348 != (long *****)0x0) {
                ppppplVar25 = uStack_348 + 1;
                do {
                  pppplVar21 = *ppppplVar25;
                  cVar6 = '\x01';
                  bVar31 = (bool)ExclusiveMonitorPass(ppppplVar25,0x10);
                  if (bVar31) {
                    *ppppplVar25 = (long ****)((long)pppplVar21 + -1);
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                goto LAB_10ac57eb4;
              }
            }
            else {
              ppppplVar25 = pppppplVar26[0x4d];
              uStack_348 = pppppplVar26[0x4e];
              if (uStack_348 != (long *****)0x0) {
                ppppplVar12 = uStack_348 + 1;
                do {
                  cVar6 = '\x01';
                  bVar31 = (bool)ExclusiveMonitorPass(ppppplVar12,0x10);
                  if (bVar31) {
                    *ppppplVar12 = (long ****)((long)*ppppplVar12 + 1);
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              puVar30 = (undefined8 *)0x1;
              ppppplVar12 = ppppplVar25;
              ppppplStack_350 = ppppplVar25;
              FUN_10a088744();
              uStack_300 = (uint)ppppplVar12;
              if (puVar30 == (undefined8 *)0x0) {
                uStack_2f8 = 0;
                uStack_2f4 = 0;
                uStack_2f0 = 0;
                iStack_2ec = 0;
              }
              else {
                uStack_2f0 = (undefined4)puVar30[1];
                iStack_2ec = (int)((ulong)puVar30[1] >> 0x20);
                uStack_2f8 = (uint)*puVar30;
                uStack_2f4 = (uint)((ulong)*puVar30 >> 0x20);
                if (puVar30[1] != 0) {
                  plVar13 = (long *)(puVar30[1] + 8);
                  do {
                    cVar6 = '\x01';
                    bVar31 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                    if (bVar31) {
                      *plVar13 = *plVar13 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                }
              }
              if (uStack_300 == 2) {
                FUN_10a026ab4(&ppppppplStack_318,&uStack_2f8);
                (*(code *)(*ppppplVar25)[0x12])(&ppppppplStack_290,ppppplVar25);
                ppppppplStack_338 = ppppppplStack_288;
                ppppppplStack_340 = ppppppplStack_290;
                pppppplStack_328 = pppppplStack_278;
                pppppplStack_330 = pppppplStack_280;
                uStack_320 = uStack_270;
                plVar13 = (long *)CONCAT44(iStack_2ec,uStack_2f0);
                if (plVar13 != (long *)0x0) {
                  plVar14 = plVar13 + 1;
                  do {
                    lVar27 = *plVar14;
                    cVar6 = '\x01';
                    bVar31 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar31) {
                      *plVar14 = lVar27 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (lVar27 == 0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                  }
                }
                if (uStack_348 != (long *****)0x0) {
                  ppppplVar25 = uStack_348 + 1;
                  do {
                    pppplVar21 = *ppppplVar25;
                    cVar6 = '\x01';
                    bVar31 = (bool)ExclusiveMonitorPass(ppppplVar25,0x10);
                    if (bVar31) {
                      *ppppplVar25 = (long ****)((long)pppplVar21 + -1);
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
LAB_10ac57a94:
                  ppppplVar25 = uStack_348;
                  if (pppplVar21 == (long ****)0x0) {
                    (*(code *)(*uStack_348)[2])(uStack_348);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar25);
                  }
                }
LAB_10ac57ab0:
                ppppppplStack_290 = (long *******)0x0;
                uStack_e8 = 0;
                uStack_d8 = 0;
                plStack_e0 = (long *)0x0;
                uStack_d0 = 0xffffffffffffffff;
                uStack_c8 = 0xffffffffffffffff;
                uStack_b0 = 0;
                plStack_b8 = (long *)0x0;
                uStack_c0 = 0;
                uStack_a8 = 0xffffffffffffffff;
                uStack_a0 = 0xffffffffffffffff;
                uStack_98 = 0x3f800000;
                uStack_94 = 0;
                uStack_90 = 0;
                uStack_8c = 0;
                uStack_2a8 = 0;
                uStack_2f8 = 0;
                uStack_2f4 = 0;
                uStack_300 = 0;
                uStack_2fc = 0;
                uStack_2f0 = 0;
                iStack_2ec = 0;
                puStack_2e8 = (undefined8 *)0xffffffffffffffff;
                uStack_2e0 = 0xffffffff;
                fStack_2dc = -NAN;
                fStack_2d8 = 0.0;
                uStack_2d4 = 0;
                uStack_2d0 = 0;
                uStack_2cc = 0;
                uStack_2c8 = 0;
                uStack_2c4 = 0;
                pppppplStack_2c0 = (long ******)0xffffffffffffffff;
                uStack_2b8 = 0xffffffffffffffff;
                uStack_2b0 = 0;
                uStack_2a0 = 0;
                FUN_10a061728(&ppppppplStack_290,&uStack_300);
                plVar13 = (long *)CONCAT44(uStack_2cc,uStack_2d0);
                if (plVar13 != (long *)0x0) {
                  plVar14 = plVar13 + 1;
                  do {
                    lVar27 = *plVar14;
                    cVar6 = '\x01';
                    bVar31 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar31) {
                      *plVar14 = lVar27 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (lVar27 == 0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                  }
                }
                plVar13 = (long *)CONCAT44(uStack_2f4,uStack_2f8);
                if (plVar13 != (long *)0x0) {
                  plVar14 = plVar13 + 1;
                  do {
                    lVar27 = *plVar14;
                    cVar6 = '\x01';
                    bVar31 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar31) {
                      *plVar14 = lVar27 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (lVar27 == 0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                  }
                }
                pppppplVar26 = pppppplStack_280;
                ppppppplStack_288 = (long *******)param_1[0x5f];
                pppppplVar16 = param_1[0x60];
                if (pppppplVar16 != (long ******)0x0) {
                  pppppplVar3 = pppppplVar16 + 1;
                  do {
                    cVar6 = '\x01';
                    bVar31 = (bool)ExclusiveMonitorPass(pppppplVar3,0x10);
                    if (bVar31) {
                      *pppppplVar3 = (long *****)((long)*pppppplVar3 + 1);
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                }
                if (pppppplStack_280 != (long ******)0x0) {
                  pppppplVar3 = pppppplStack_280 + 1;
                  do {
                    ppppplVar25 = *pppppplVar3;
                    cVar6 = '\x01';
                    bVar31 = (bool)ExclusiveMonitorPass(pppppplVar3,0x10);
                    if (bVar31) {
                      *pppppplVar3 = (long *****)((long)ppppplVar25 + -1);
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (ppppplVar25 == (long *****)0x0) {
                    ppppplVar25 = *pppppplStack_280;
                    pppppplStack_280 = pppppplVar16;
                    (*(code *)ppppplVar25[2])(pppppplVar26);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar26);
                    pppppplVar16 = pppppplStack_280;
                  }
                }
                pppppplStack_280 = pppppplVar16;
                pppppplStack_278 = (long ******)0x0;
                uStack_270 = 0xffffffff;
                fStack_26c = -NAN;
                fStack_268 = -NAN;
                uStack_264 = 0xffffffff;
                uStack_228 = 2;
                uStack_90 = 2;
                uStack_8c = 2;
                (**(code **)(*param_2 + 0x88))(param_2,&ppppppplStack_290);
                pppppplVar16 = param_1[0x5f];
                pppppplVar26 = pppppplVar16;
                (*(code *)(*pppppplVar16)[5])();
                (*(code *)(*pppppplVar16)[6])();
                uStack_2f8 = (uint)pppppplVar26;
                if (uStack_2f8 < 2) {
                  uStack_2f8 = 1;
                }
                uStack_2f4 = (uint)pppppplVar16;
                if (uStack_2f4 < 2) {
                  uStack_2f4 = 1;
                }
                uStack_300 = 0;
                uStack_2fc = 0;
                (**(code **)(*param_2 + 0xc0))(param_2,&uStack_300);
                (*(code *)(*param_1[99])[0x13])(param_1[99],&ppppppplStack_340);
                FUN_10a1db4cc(param_1[99],&ppppppplStack_318);
                plVar13 = param_2 + 4;
                FUN_10a5dfd94(plVar13,*ppppppplVar10);
                plVar14 = param_2 + 4;
                FUN_10a01eacc(plVar14,plVar13);
                if ((long)puVar33 - (long)puStack_378 != 0) {
                  lVar27 = (long)puVar33 - (long)puStack_378 >> 4;
                  pfVar28 = (float *)(puStack_378 + 1);
                  lVar23 = 2;
                  ppuVar32 = &PTR_DAT_110c669e0;
                  do {
                    ppppplStack_350 = *(long ******)(pfVar28 + -2);
                    uStack_348 = (long *****)
                                 CONCAT44(*(float *)((long)param_1 + 0x3a4) * pfVar28[1] *
                                          *(float *)(param_1 + 0x74),
                                          *pfVar28 * *(float *)((long)param_1 + 0x3a4));
                    if (lVar23 == 0) goto LAB_10ac57f70;
                    func_0x000107c2b074(&uStack_300,ppuVar32);
                    FUN_10a015dcc(plVar14,&uStack_300,&ppppplStack_350);
                    if (iStack_2ec < 0) {
                      __ZdlPv(CONCAT44(uStack_2fc,uStack_300));
                    }
                    pfVar28 = pfVar28 + 4;
                    ppuVar32 = ppuVar32 + 3;
                    lVar23 = lVar23 + -1;
                    lVar27 = lVar27 + -1;
                  } while (lVar27 != 0);
                }
                uStack_300 = 0x3f800000;
                uStack_2f4 = 0;
                uStack_2f0 = 0;
                uStack_2fc = 0;
                uStack_2f8 = 0;
                iStack_2ec = 0x3f800000;
                puStack_2e8 = (undefined8 *)0x0;
                uStack_2e0 = 0;
                fStack_2dc = 0.0;
                fStack_2d8 = 1.0;
                uStack_2cc = 0;
                uStack_2c8 = 0;
                uStack_2d4 = 0;
                uStack_2d0 = 0;
                uStack_2c4 = 0x3f800000;
                (**(code **)(*param_2 + 0x58))(param_2,*ppppppplVar1,plVar13,&uStack_300,3);
                (**(code **)(*param_2 + 0x90))(param_2,0,3,3);
                plVar13 = plStack_b8;
                *(undefined4 *)((long)param_1 + 0x74) = 2;
                if (plStack_b8 != (long *)0x0) {
                  plVar14 = plStack_b8 + 1;
                  do {
                    lVar27 = *plVar14;
                    cVar6 = '\x01';
                    bVar31 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar31) {
                      *plVar14 = lVar27 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (lVar27 == 0) {
                    (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                  }
                }
                plVar13 = plStack_e0;
                if (plStack_e0 != (long *)0x0) {
                  plVar14 = plStack_e0 + 1;
                  do {
                    lVar27 = *plVar14;
                    cVar6 = '\x01';
                    bVar31 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar31) {
                      *plVar14 = lVar27 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (lVar27 == 0) {
                    (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                  }
                }
                func_0x00010a048e34(&ppppppplStack_288,ppppppplStack_290);
              }
              else {
                plVar13 = (long *)CONCAT44(iStack_2ec,uStack_2f0);
                if (plVar13 != (long *)0x0) {
                  plVar14 = plVar13 + 1;
                  do {
                    lVar27 = *plVar14;
                    cVar6 = '\x01';
                    bVar31 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar31) {
                      *plVar14 = lVar27 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (lVar27 == 0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                  }
                }
                if (uStack_348 != (long *****)0x0) {
                  ppppplVar25 = uStack_348 + 1;
                  do {
                    pppplVar21 = *ppppplVar25;
                    cVar6 = '\x01';
                    bVar31 = (bool)ExclusiveMonitorPass(ppppplVar25,0x10);
                    if (bVar31) {
                      *ppppplVar25 = (long ****)((long)pppplVar21 + -1);
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
LAB_10ac57eb4:
                  ppppplVar25 = uStack_348;
                  if (pppplVar21 == (long ****)0x0) {
                    (*(code *)(*uStack_348)[2])(uStack_348);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar25);
                  }
                }
              }
            }
            plVar13 = plStack_310;
            if (plStack_310 != (long *)0x0) {
              plVar14 = plStack_310 + 1;
              do {
                lVar27 = *plVar14;
                cVar6 = '\x01';
                bVar31 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                if (bVar31) {
                  *plVar14 = lVar27 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar27 == 0) {
                (**(code **)(*plStack_310 + 0x10))(plStack_310);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
              }
            }
            if (puStack_378 != (undefined8 *)0x0) {
              __ZdlPv(puStack_378);
            }
          }
        }
      }
    }
    else {
      do {
        if ((*(int *)pplVar15 == 0) && (*(int *)((long)pplVar15 + 4) == *(int *)(param_1 + 0x5c)))
        goto LAB_10ac56f50;
        pplVar15 = pplVar15 + 0x44;
      } while (pplVar15 != pplVar4);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
LAB_10ac57f54:
  FUN_10ac781f0();
LAB_10ac57f70:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10ac57f74);
  (*pcVar9)();
}



/* Entry: 10ac58120; end: 10ac581b3;  */

void FUN_10ac58120(long param_1,long *param_2)

{
  long *plVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  code *pcVar8;
  uint **ppuVar9;
  uint **ppuVar10;
  long *plVar11;
  uint **ppuVar12;
  int *piVar13;
  undefined8 uVar14;
  ulong uVar15;
  uint *puVar16;
  bool bVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  float *pfVar23;
  int iVar24;
  undefined8 *puVar25;
  bool bVar26;
  long *plVar27;
  long *plVar28;
  uint *puVar29;
  undefined **ppuVar30;
  undefined8 *puVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 *puVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 *puStack_378;
  long *plStack_350;
  undefined8 uStack_348;
  uint *puStack_340;
  uint *puStack_338;
  uint *puStack_330;
  uint *puStack_328;
  undefined4 uStack_320;
  uint *puStack_318;
  long *plStack_310;
  undefined1 uStack_301;
  uint uStack_300;
  uint uStack_2fc;
  uint uStack_2f8;
  uint uStack_2f4;
  undefined4 uStack_2f0;
  int iStack_2ec;
  undefined8 *puStack_2e8;
  uint uStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  undefined4 uStack_2d4;
  uint uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  uint *puStack_290;
  uint *puStack_288;
  uint *puStack_280;
  uint *puStack_278;
  undefined4 uStack_270;
  float fStack_26c;
  float fStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  uint *apuStack_258 [2];
  uint *puStack_248;
  char cStack_241;
  uint *puStack_240;
  uint *puStack_238;
  uint *puStack_230;
  undefined4 uStack_228;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long lStack_88;
  
  ppuVar12 = (uint **)(param_1 + -0x2b0);
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)(param_1 + -0x23c) = 0;
  lVar19 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + -0x220) + 0x8c0) + 0x18) + 0x68);
  if (lVar19 != 0) {
    piVar13 = *(int **)(lVar19 + 0x28);
    piVar3 = *(int **)(lVar19 + 0x30);
    if (piVar13 == piVar3) {
LAB_10ac56f50:
      if ((piVar13 != piVar3) && (piVar13 != (int *)0x0)) {
        FUN_10a14ca80(piVar13 + 2,*(undefined8 *)(param_1 + 0x28));
        lVar19 = *(long *)(param_1 + 0x28);
        fVar33 = (float)*(undefined8 *)(lVar19 + 0x10);
        fVar37 = (float)((ulong)*(undefined8 *)(lVar19 + 0x10) >> 0x20);
        fVar32 = 2.220446e-16;
        if (2.220446e-16 <=
            ABS(SQRT(*(float *)(lVar19 + 0xc) * *(float *)(lVar19 + 0xc) + fVar33 * fVar33 +
                     fVar37 * fVar37))) {
          uVar14 = *(undefined8 *)(lVar19 + 0x119c);
          *(undefined8 *)(param_1 + 0xe8) = uVar14;
          *(float *)(param_1 + 0xf0) = (float)(int)uVar14 / (float)(int)((ulong)uVar14 >> 0x20);
          FUN_10a14af2c(lVar19);
          fVar33 = fVar32;
          func_0x00010a14af38(lVar19);
          fVar37 = 0.0625;
          *(float *)(param_1 + 0xf4) =
               (((fVar33 - fVar32) *
                SQRT(*(float *)(lVar19 + 0xc) * *(float *)(lVar19 + 0xc) +
                     *(float *)(lVar19 + 0x10) * *(float *)(lVar19 + 0x10) +
                     *(float *)(lVar19 + 0x14) * *(float *)(lVar19 + 0x14))) / (float)(int)uVar14) *
               0.25 * 9.0 * 0.0625;
          ppuVar9 = ppuVar12;
          (**(code **)(*ppuVar12 + 0x1a))(ppuVar12,2);
          plVar1 = (long *)(param_1 + 0x58);
          if (*(long *)(param_1 + 0x58) == 0) {
            FUN_10ab6e898();
            if (*(char *)((long)ppuVar9 + 0x17) < '\0') {
              ppuVar10 = &puStack_290;
              func_0x000107c3192c(ppuVar10,*ppuVar9,ppuVar9[1]);
            }
            else {
              puStack_288 = ppuVar9[1];
              puStack_290 = *ppuVar9;
              puStack_280 = ppuVar9[2];
              ppuVar10 = ppuVar9;
            }
            puStack_278 = ppuVar9[3];
            uStack_260 = *(undefined4 *)(ppuVar9 + 6);
            fStack_268 = SUB84(ppuVar9[5],0);
            uStack_264 = (undefined4)((ulong)ppuVar9[5] >> 0x20);
            uStack_270 = SUB84(ppuVar9[4],0);
            fStack_26c = (float)((ulong)ppuVar9[4] >> 0x20);
            FUN_10ab6f020();
            if (*(char *)((long)ppuVar10 + 0x17) < '\0') {
              func_0x000107c3192c(apuStack_258,*ppuVar10,ppuVar10[1]);
            }
            else {
              puStack_248 = ppuVar10[2];
              apuStack_258[1] = ppuVar10[1];
              apuStack_258[0] = *ppuVar10;
            }
            puStack_240 = ppuVar10[3];
            puStack_230 = ppuVar10[5];
            puStack_238 = ppuVar10[4];
            uStack_228 = *(undefined4 *)(ppuVar10 + 6);
            FUN_10ab6f520(&uStack_300,&puStack_290,2);
            lVar19 = 0;
            do {
              if ((&cStack_241)[lVar19] < '\0') {
                __ZdlPv(*(undefined8 *)((long)apuStack_258 + lVar19));
              }
              lVar19 = lVar19 + -0x38;
            } while (lVar19 != -0x70);
            ppuVar9 = &puStack_340;
            FUN_10a0d0194(&puStack_290);
            puVar29 = puStack_290;
            puStack_290[0x3c] = uStack_300;
            if (puStack_290 + 0x3c != &uStack_300) {
              ppuVar9 = (uint **)(puStack_290 + 0x3e);
              FUN_10a1903c4();
            }
            puVar16 = puStack_290;
            uVar14 = CONCAT44(uStack_2cc,uStack_2d0);
            *(ulong *)(puVar29 + 0x46) = CONCAT44(uStack_2d4,fStack_2d8);
            *(ulong *)(puVar29 + 0x44) = CONCAT44(fStack_2dc,uStack_2e0);
            *(ulong *)(puVar29 + 0x4a) = CONCAT44(uStack_2c4,uStack_2c8);
            *(undefined8 *)(puVar29 + 0x48) = uVar14;
            *(undefined8 *)(puVar29 + 0x4c) = uStack_2c0;
            puStack_290[0x3a] = 0;
            puStack_290[0x3b] = 1;
            FUN_10ab6e898();
            fVar37 = (float)uVar14;
            uVar5 = *(uint *)((long)ppuVar9 + 0x24) - 1;
            if (uVar5 < 7) {
              iVar24 = *(int *)(&UNK_10e50a6c8 + (ulong)uVar5 * 4);
            }
            else {
              iVar24 = 0;
            }
            uVar5 = *(uint *)(ppuVar9 + 5);
            FUN_10ab6f020();
            uVar6 = *(uint *)((long)ppuVar9 + 0x24) - 1;
            if (uVar6 < 7) {
              iVar18 = *(int *)(&UNK_10e50a6c8 + (ulong)uVar6 * 4);
            }
            else {
              iVar18 = 0;
            }
            uVar15 = (ulong)(((*(uint *)(ppuVar9 + 5) * iVar18 + 3 & 0x3ffffffc) +
                             (uVar5 * iVar24 + 3 & 0x3ffffffc)) * 4);
            uVar20 = *(long *)(puVar16 + 6) - *(long *)(puVar16 + 4);
            if (uVar15 < uVar20 || uVar15 - uVar20 == 0) {
              if (uVar15 < uVar20) {
                *(ulong *)(puVar16 + 6) = *(long *)(puVar16 + 4) + uVar15;
              }
            }
            else {
              func_0x000107c27d58(puVar16 + 4,uVar15 - uVar20);
            }
            if (uStack_2e0 == 0xffffffff) {
              lVar19 = 0;
            }
            else {
              uVar15 = (CONCAT44(iStack_2ec,uStack_2f0) - CONCAT44(uStack_2f4,uStack_2f8) >> 3) *
                       0x6db6db6db6db6db7;
              if (uVar15 < uStack_2e0 || uVar15 - uStack_2e0 == 0) {
                FUN_10ab725fc();
                goto LAB_10ac57f70;
              }
              lVar19 = CONCAT44(uStack_2f4,uStack_2f8) + (ulong)uStack_2e0 * 0x38;
            }
            if (uStack_2d0 == 0xffffffff) {
              lVar21 = 0;
            }
            else {
              uVar15 = (CONCAT44(iStack_2ec,uStack_2f0) - CONCAT44(uStack_2f4,uStack_2f8) >> 3) *
                       0x6db6db6db6db6db7;
              if (uVar15 < uStack_2d0 || uVar15 - uStack_2d0 == 0) {
                FUN_10ab725fc();
                goto LAB_10ac57f70;
              }
              lVar21 = CONCAT44(uStack_2f4,uStack_2f8) + (ulong)uStack_2d0 * 0x38;
            }
            uVar5 = *(int *)(lVar19 + 0x24) - 1;
            if (uVar5 < 7) {
              iVar24 = *(int *)(&UNK_10e50a6c8 + (ulong)uVar5 * 4);
            }
            else {
              iVar24 = 0;
            }
            if (*(int *)(lVar19 + 0x28) * iVar24 == 8) {
              puVar31 = (undefined8 *)(*(long *)(puStack_290 + 4) + (ulong)*(uint *)(lVar19 + 0x30))
              ;
              uVar15 = (ulong)puStack_290[0x3c];
            }
            else {
              puVar31 = (undefined8 *)0x0;
              uVar15 = 0;
            }
            uVar5 = *(int *)(lVar21 + 0x24) - 1;
            if (uVar5 < 7) {
              iVar24 = *(int *)(&UNK_10e50a6c8 + (ulong)uVar5 * 4);
            }
            else {
              iVar24 = 0;
            }
            if (*(int *)(lVar21 + 0x28) * iVar24 == 8) {
              puVar25 = (undefined8 *)(*(long *)(puStack_290 + 4) + (ulong)*(uint *)(lVar21 + 0x30))
              ;
              uVar20 = (ulong)puStack_290[0x3c];
            }
            else {
              puVar25 = (undefined8 *)0x0;
              uVar20 = 0;
            }
            lVar19 = 0;
            do {
              *puVar31 = *(undefined8 *)(&UNK_10e509700 + lVar19);
              *puVar25 = *(undefined8 *)(&UNK_10e509720 + lVar19);
              lVar19 = lVar19 + 8;
              puVar25 = (undefined8 *)((long)puVar25 + uVar20);
              puVar31 = (undefined8 *)((long)puVar31 + uVar15);
            } while (lVar19 != 0x20);
            puStack_318 = (uint *)0x0;
            plStack_350 = (long *)((ulong)plStack_350 & 0xffffffff00000000);
            FUN_10a276954(&puStack_340,&uStack_301,&puStack_318,&plStack_350,&puStack_290);
            func_0x00010a2432e4(plVar1,&puStack_340);
            puVar29 = puStack_338;
            if (puStack_338 != (uint *)0x0) {
              puVar16 = puStack_338 + 2;
              do {
                lVar19 = *(long *)puVar16;
                cVar4 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(puVar16,0x10);
                if (bVar26) {
                  *(long *)puVar16 = lVar19 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar19 == 0) {
                (**(code **)(*(long *)puStack_338 + 0x10))(puStack_338);
                __ZNSt3__119__shared_weak_count14__release_weakEv(puVar29);
              }
            }
            puVar29 = puStack_288;
            if (puStack_288 != (uint *)0x0) {
              puVar16 = puStack_288 + 2;
              do {
                lVar19 = *(long *)puVar16;
                cVar4 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(puVar16,0x10);
                if (bVar26) {
                  *(long *)puVar16 = lVar19 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar19 == 0) {
                (**(code **)(*(long *)puStack_288 + 0x10))(puStack_288);
                __ZNSt3__119__shared_weak_count14__release_weakEv(puVar29);
              }
            }
            puStack_290 = &uStack_2f8;
            func_0x00010a190844(&puStack_290);
          }
          plVar11 = (long *)(param_1 + 0x78);
          if (*(long *)(param_1 + 0x78) == 0) {
            FUN_10ab451f4(&puStack_290,0,&UNK_10f69e36e,0x20,&UNK_10f69e38f,0x1c,&UNK_10f69e3ac,0xd,
                          1);
            func_0x00010a015c50(plVar11,&puStack_290);
            plVar27 = *(long **)(*plVar11 + 0x228);
            if (plVar27 == *(long **)(*plVar11 + 0x230)) {
              lVar19 = 0;
            }
            else {
              lVar19 = *plVar27;
            }
            func_0x00010a332748(lVar19 + 0x219,0);
            func_0x00010a332700(lVar19 + 0x21a,0);
            func_0x00010a3326b8(lVar19 + 0x218,1);
            *(undefined4 *)(lVar19 + 0x21e) = 0x1010101;
            puStack_340 = (uint *)0x0;
            FUN_10a063b58(&uStack_300,&puStack_318,&puStack_340);
            FUN_10a02bf24(param_1 + 0x68,&uStack_300);
            plVar27 = (long *)CONCAT44(uStack_2f4,uStack_2f8);
            if (plVar27 != (long *)0x0) {
              plVar28 = plVar27 + 1;
              do {
                lVar21 = *plVar28;
                cVar4 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar26) {
                  *plVar28 = lVar21 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar21 == 0) {
                (**(code **)(*plVar27 + 0x10))(plVar27);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
              }
            }
            puStack_340 = (uint *)0x0;
            FUN_10a17647c(&uStack_300,&puStack_340,param_1 + 0x68);
            func_0x000107c2b074(&puStack_340,&PTR_DAT_110c669c8);
            FUN_10a3368d0(lVar19,&puStack_340,&uStack_300,&UNK_10e4ac8a8,0xd);
            if ((long)puStack_330 < 0) {
              __ZdlPv(puStack_340);
            }
            FUN_10a044790(&uStack_2f0);
            (*(code *)*puStack_2e8)(&puStack_2e8);
            plVar27 = (long *)CONCAT44(uStack_2f4,uStack_2f8);
            if (plVar27 != (long *)0x0) {
              plVar28 = plVar27 + 1;
              do {
                lVar19 = *plVar28;
                cVar4 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar26) {
                  *plVar28 = lVar19 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar19 == 0) {
                (**(code **)(*plVar27 + 0x10))(plVar27);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
              }
            }
            FUN_10a044790(&puStack_280);
            (**(code **)puStack_278)(&puStack_278);
            puVar29 = puStack_288;
            if (puStack_288 != (uint *)0x0) {
              puVar16 = puStack_288 + 2;
              do {
                lVar19 = *(long *)puVar16;
                cVar4 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(puVar16,0x10);
                if (bVar26) {
                  *(long *)puVar16 = lVar19 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar19 == 0) {
                (**(code **)(*(long *)puStack_288 + 0x10))(puStack_288);
                __ZNSt3__119__shared_weak_count14__release_weakEv(puVar29);
              }
            }
          }
          if ((*plVar1 != 0) && (*plVar11 != 0)) {
            func_0x0001096dc9c0(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + -0x220)
                                                                       + 0x8c0) + 0x18) + 0x68) +
                                         0x58) + 0xc);
            puVar25 = (undefined8 *)0x0;
            puStack_378 = (undefined8 *)0x0;
            puVar31 = (undefined8 *)0x0;
            bVar26 = false;
            fVar33 = -0.6;
            if (fVar37 <= 0.6) {
              fVar33 = -fVar37;
            }
            fVar32 = 0.6;
            if (fVar33 <= 0.6) {
              fVar32 = fVar33;
            }
            fVar37 = ABS(fVar32) / 0.6;
            uVar20 = (ulong)(uint)fVar37;
            puStack_340 = (uint *)(param_1 + 0x88);
            puStack_318 = (uint *)(param_1 + 0xb8);
            ppuVar9 = &puStack_340;
            fVar33 = 1.0 - fVar37;
            uVar15 = uVar20;
            bVar7 = true;
            do {
              bVar17 = bVar7;
              fVar38 = (float)uVar15;
              puVar29 = *ppuVar9;
              lVar19 = *(long *)(puVar29 + 4);
              puStack_290 = (uint *)0x0;
              puStack_288 = (uint *)0x0;
              puStack_280 = (uint *)0x0;
              FUN_10a0e9a40(&puStack_290,*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x20),
                            *(long *)(lVar19 + 0x20) - *(long *)(lVar19 + 0x18) >> 2);
              puStack_278 = *(uint **)(lVar19 + 0x30);
              uStack_270 = (undefined4)*(undefined8 *)(lVar19 + 0x38);
              fStack_26c = (float)((ulong)*(undefined8 *)(lVar19 + 0x38) >> 0x20);
              fStack_268 = *(float *)(lVar19 + 0x40);
              lVar19 = 0x20;
              if (bVar26 != fVar32 <= 0.0) {
                lVar19 = 0;
              }
              lVar19 = *(long *)((long)puVar29 + lVar19);
              uStack_300 = 0;
              uStack_2fc = 0;
              uStack_2f8 = 0;
              uStack_2f4 = 0;
              uStack_2f0 = 0;
              iStack_2ec = 0;
              FUN_10a0e9a40(&uStack_300,*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x20),
                            *(long *)(lVar19 + 0x20) - *(long *)(lVar19 + 0x18) >> 2);
              puVar35 = *(undefined8 **)(lVar19 + 0x30);
              uStack_2e0 = (uint)*(undefined8 *)(lVar19 + 0x38);
              fStack_2dc = (float)((ulong)*(undefined8 *)(lVar19 + 0x38) >> 0x20);
              fStack_2d8 = *(float *)(lVar19 + 0x40);
              puStack_2e8 = puVar35;
              FUN_10ac5625c(ppuVar12,&puStack_290);
              fVar34 = fVar40;
              fVar39 = fVar38;
              FUN_10ac5625c(ppuVar12,&uStack_300);
              fVar40 = SUB84(puVar35,0);
              uVar14 = CONCAT44(fVar38 * fVar33 + fVar39 * fVar37,fVar40 * fVar33 + fVar34 * fVar37)
              ;
              uVar36 = CONCAT44(fStack_268 * fVar33 + fStack_2d8 * fVar37,
                                fStack_26c * fVar33 + fStack_2dc * fVar37);
              if (puVar31 < puVar25) {
                puVar31[1] = uVar36;
                *puVar31 = uVar14;
                uVar15 = uVar20;
                puVar35 = puStack_378;
              }
              else {
                lVar19 = (long)puVar31 - (long)puStack_378;
                uVar15 = (lVar19 >> 4) + 1;
                if (uVar15 >> 0x3c != 0) goto LAB_10ac57f54;
                uVar22 = (long)puVar25 - (long)puStack_378 >> 3;
                if (uVar22 <= uVar15) {
                  uVar22 = uVar15;
                }
                if (0x7fffffffffffffef < (ulong)((long)puVar25 - (long)puStack_378)) {
                  uVar22 = 0xfffffffffffffff;
                }
                if (uVar22 >> 0x3c != 0) {
                  func_0x000109ffded8();
                  goto LAB_10ac57f70;
                }
                lVar21 = uVar22 << 4;
                uVar15 = uVar20;
                __Znwm();
                puVar31 = (undefined8 *)(lVar21 + lVar19);
                puVar25 = (undefined8 *)(lVar21 + uVar22 * 0x10);
                puVar35 = puVar31 + (lVar19 >> 4) * -2;
                puVar31[1] = uVar36;
                *puVar31 = uVar14;
                _memcpy(puVar35,puStack_378,lVar19);
                if (puStack_378 != (undefined8 *)0x0) {
                  __ZdlPv(puStack_378);
                }
              }
              puStack_378 = puVar35;
              puVar31 = puVar31 + 2;
              if (CONCAT44(uStack_2fc,uStack_300) != 0) {
                uStack_2f8 = uStack_300;
                uStack_2f4 = uStack_2fc;
                __ZdlPv();
              }
              if (puStack_290 != (uint *)0x0) {
                puStack_288 = puStack_290;
                __ZdlPv();
              }
              ppuVar9 = &puStack_318;
              bVar26 = true;
              bVar7 = false;
            } while (bVar17);
            puStack_318 = (uint *)0x0;
            plStack_310 = (long *)0x0;
            puStack_338 = (uint *)0x0;
            puStack_340 = (uint *)0x3f800000;
            puStack_328 = (uint *)0x0;
            puStack_330 = (uint *)0x3f800000;
            uStack_320 = 0x3f800000;
            lVar19 = *(long *)(param_1 + 0x38);
            if (lVar19 == 0) {
              puVar25 = *(undefined8 **)(param_1 + -0x220);
              FUN_10a3dedfc();
              plVar27 = (long *)*puVar25;
              uStack_348 = (long *)puVar25[1];
              if (uStack_348 != (long *)0x0) {
                plVar28 = uStack_348 + 1;
                do {
                  cVar4 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                  if (bVar26) {
                    *plVar28 = *plVar28 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              puVar25 = (undefined8 *)0x1;
              plVar28 = plVar27;
              plStack_350 = plVar27;
              FUN_10a088744();
              uStack_300 = (uint)plVar28;
              if (puVar25 == (undefined8 *)0x0) {
                uStack_2f8 = 0;
                uStack_2f4 = 0;
                uStack_2f0 = 0;
                iStack_2ec = 0;
              }
              else {
                uStack_2f0 = (undefined4)puVar25[1];
                iStack_2ec = (int)((ulong)puVar25[1] >> 0x20);
                uStack_2f8 = (uint)*puVar25;
                uStack_2f4 = (uint)((ulong)*puVar25 >> 0x20);
                if (puVar25[1] != 0) {
                  plVar28 = (long *)(puVar25[1] + 8);
                  do {
                    cVar4 = '\x01';
                    bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                    if (bVar26) {
                      *plVar28 = *plVar28 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
              }
              if (uStack_300 == 2) {
                FUN_10a026ab4(&puStack_318,&uStack_2f8);
                (**(code **)(*plVar27 + 0x90))(&puStack_290,plVar27);
                puStack_338 = puStack_288;
                puStack_340 = puStack_290;
                puStack_328 = puStack_278;
                puStack_330 = puStack_280;
                uStack_320 = uStack_270;
                plVar27 = (long *)CONCAT44(iStack_2ec,uStack_2f0);
                if (plVar27 != (long *)0x0) {
                  plVar28 = plVar27 + 1;
                  do {
                    lVar19 = *plVar28;
                    cVar4 = '\x01';
                    bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                    if (bVar26) {
                      *plVar28 = lVar19 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (lVar19 == 0) {
                    (**(code **)(*plVar27 + 0x10))(plVar27);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
                  }
                }
                if (uStack_348 != (long *)0x0) {
                  plVar27 = uStack_348 + 1;
                  do {
                    lVar19 = *plVar27;
                    cVar4 = '\x01';
                    bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                    if (bVar26) {
                      *plVar27 = lVar19 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  goto LAB_10ac57a94;
                }
                goto LAB_10ac57ab0;
              }
              plVar1 = (long *)CONCAT44(iStack_2ec,uStack_2f0);
              if (plVar1 != (long *)0x0) {
                plVar11 = plVar1 + 1;
                do {
                  lVar19 = *plVar11;
                  cVar4 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar26) {
                    *plVar11 = lVar19 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (lVar19 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
                }
              }
              if (uStack_348 != (long *)0x0) {
                plVar1 = uStack_348 + 1;
                do {
                  lVar19 = *plVar1;
                  cVar4 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar26) {
                    *plVar1 = lVar19 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                goto LAB_10ac57eb4;
              }
            }
            else {
              plVar27 = *(long **)(lVar19 + 0x268);
              uStack_348 = *(long **)(lVar19 + 0x270);
              if (uStack_348 != (long *)0x0) {
                plVar28 = uStack_348 + 1;
                do {
                  cVar4 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                  if (bVar26) {
                    *plVar28 = *plVar28 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              puVar25 = (undefined8 *)0x1;
              plVar28 = plVar27;
              plStack_350 = plVar27;
              FUN_10a088744();
              uStack_300 = (uint)plVar28;
              if (puVar25 == (undefined8 *)0x0) {
                uStack_2f8 = 0;
                uStack_2f4 = 0;
                uStack_2f0 = 0;
                iStack_2ec = 0;
              }
              else {
                uStack_2f0 = (undefined4)puVar25[1];
                iStack_2ec = (int)((ulong)puVar25[1] >> 0x20);
                uStack_2f8 = (uint)*puVar25;
                uStack_2f4 = (uint)((ulong)*puVar25 >> 0x20);
                if (puVar25[1] != 0) {
                  plVar28 = (long *)(puVar25[1] + 8);
                  do {
                    cVar4 = '\x01';
                    bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                    if (bVar26) {
                      *plVar28 = *plVar28 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
              }
              if (uStack_300 == 2) {
                FUN_10a026ab4(&puStack_318,&uStack_2f8);
                (**(code **)(*plVar27 + 0x90))(&puStack_290,plVar27);
                puStack_338 = puStack_288;
                puStack_340 = puStack_290;
                puStack_328 = puStack_278;
                puStack_330 = puStack_280;
                uStack_320 = uStack_270;
                plVar27 = (long *)CONCAT44(iStack_2ec,uStack_2f0);
                if (plVar27 != (long *)0x0) {
                  plVar28 = plVar27 + 1;
                  do {
                    lVar19 = *plVar28;
                    cVar4 = '\x01';
                    bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                    if (bVar26) {
                      *plVar28 = lVar19 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (lVar19 == 0) {
                    (**(code **)(*plVar27 + 0x10))(plVar27);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
                  }
                }
                if (uStack_348 != (long *)0x0) {
                  plVar27 = uStack_348 + 1;
                  do {
                    lVar19 = *plVar27;
                    cVar4 = '\x01';
                    bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                    if (bVar26) {
                      *plVar27 = lVar19 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
LAB_10ac57a94:
                  plVar27 = uStack_348;
                  if (lVar19 == 0) {
                    (**(code **)(*uStack_348 + 0x10))(uStack_348);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
                  }
                }
LAB_10ac57ab0:
                puStack_290 = (uint *)0x0;
                uStack_e8 = 0;
                uStack_d8 = 0;
                plStack_e0 = (long *)0x0;
                uStack_d0 = 0xffffffffffffffff;
                uStack_c8 = 0xffffffffffffffff;
                uStack_b0 = 0;
                plStack_b8 = (long *)0x0;
                uStack_c0 = 0;
                uStack_a8 = 0xffffffffffffffff;
                uStack_a0 = 0xffffffffffffffff;
                uStack_98 = 0x3f800000;
                uStack_94 = 0;
                uStack_90 = 0;
                uStack_8c = 0;
                uStack_2a8 = 0;
                uStack_2f8 = 0;
                uStack_2f4 = 0;
                uStack_300 = 0;
                uStack_2fc = 0;
                uStack_2f0 = 0;
                iStack_2ec = 0;
                puStack_2e8 = (undefined8 *)0xffffffffffffffff;
                uStack_2e0 = 0xffffffff;
                fStack_2dc = -NAN;
                fStack_2d8 = 0.0;
                uStack_2d4 = 0;
                uStack_2d0 = 0;
                uStack_2cc = 0;
                uStack_2c8 = 0;
                uStack_2c4 = 0;
                uStack_2c0 = 0xffffffffffffffff;
                uStack_2b8 = 0xffffffffffffffff;
                uStack_2b0 = 0;
                uStack_2a0 = 0;
                FUN_10a061728(&puStack_290,&uStack_300);
                plVar27 = (long *)CONCAT44(uStack_2cc,uStack_2d0);
                if (plVar27 != (long *)0x0) {
                  plVar28 = plVar27 + 1;
                  do {
                    lVar19 = *plVar28;
                    cVar4 = '\x01';
                    bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                    if (bVar26) {
                      *plVar28 = lVar19 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (lVar19 == 0) {
                    (**(code **)(*plVar27 + 0x10))(plVar27);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
                  }
                }
                plVar27 = (long *)CONCAT44(uStack_2f4,uStack_2f8);
                if (plVar27 != (long *)0x0) {
                  plVar28 = plVar27 + 1;
                  do {
                    lVar19 = *plVar28;
                    cVar4 = '\x01';
                    bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                    if (bVar26) {
                      *plVar28 = lVar19 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (lVar19 == 0) {
                    (**(code **)(*plVar27 + 0x10))(plVar27);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
                  }
                }
                puVar29 = puStack_280;
                puStack_288 = *(uint **)(param_1 + 0x48);
                puVar16 = *(uint **)(param_1 + 0x50);
                if (puVar16 != (uint *)0x0) {
                  puVar2 = puVar16 + 2;
                  do {
                    cVar4 = '\x01';
                    bVar26 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar26) {
                      *(long *)puVar2 = *(long *)puVar2 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                if (puStack_280 != (uint *)0x0) {
                  puVar2 = puStack_280 + 2;
                  do {
                    lVar19 = *(long *)puVar2;
                    cVar4 = '\x01';
                    bVar26 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar26) {
                      *(long *)puVar2 = lVar19 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (lVar19 == 0) {
                    lVar19 = *(long *)puStack_280;
                    puStack_280 = puVar16;
                    (**(code **)(lVar19 + 0x10))(puVar29);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(puVar29);
                    puVar16 = puStack_280;
                  }
                }
                puStack_280 = puVar16;
                puStack_278 = (uint *)0x0;
                uStack_270 = 0xffffffff;
                fStack_26c = -NAN;
                fStack_268 = -NAN;
                uStack_264 = 0xffffffff;
                uStack_228 = 2;
                uStack_90 = 2;
                uStack_8c = 2;
                (**(code **)(*param_2 + 0x88))(param_2,&puStack_290);
                plVar28 = *(long **)(param_1 + 0x48);
                plVar27 = plVar28;
                (**(code **)(*plVar28 + 0x28))();
                (**(code **)(*plVar28 + 0x30))();
                uStack_2f8 = (uint)plVar27;
                if (uStack_2f8 < 2) {
                  uStack_2f8 = 1;
                }
                uStack_2f4 = (uint)plVar28;
                if (uStack_2f4 < 2) {
                  uStack_2f4 = 1;
                }
                uStack_300 = 0;
                uStack_2fc = 0;
                (**(code **)(*param_2 + 0xc0))(param_2,&uStack_300);
                (**(code **)(**(long **)(param_1 + 0x68) + 0x98))
                          (*(long **)(param_1 + 0x68),&puStack_340);
                FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x68),&puStack_318);
                plVar27 = param_2 + 4;
                FUN_10a5dfd94(plVar27,*plVar11);
                plVar11 = param_2 + 4;
                FUN_10a01eacc(plVar11,plVar27);
                if ((long)puVar31 - (long)puStack_378 != 0) {
                  lVar19 = (long)puVar31 - (long)puStack_378 >> 4;
                  pfVar23 = (float *)(puStack_378 + 1);
                  lVar21 = 2;
                  ppuVar30 = &PTR_DAT_110c669e0;
                  do {
                    plStack_350 = *(long **)(pfVar23 + -2);
                    uStack_348 = (long *)CONCAT44(*(float *)(param_1 + 0xf4) * pfVar23[1] *
                                                  *(float *)(param_1 + 0xf0),
                                                  *pfVar23 * *(float *)(param_1 + 0xf4));
                    if (lVar21 == 0) goto LAB_10ac57f70;
                    func_0x000107c2b074(&uStack_300,ppuVar30);
                    FUN_10a015dcc(plVar11,&uStack_300,&plStack_350);
                    if (iStack_2ec < 0) {
                      __ZdlPv(CONCAT44(uStack_2fc,uStack_300));
                    }
                    pfVar23 = pfVar23 + 4;
                    ppuVar30 = ppuVar30 + 3;
                    lVar21 = lVar21 + -1;
                    lVar19 = lVar19 + -1;
                  } while (lVar19 != 0);
                }
                uStack_300 = 0x3f800000;
                uStack_2f4 = 0;
                uStack_2f0 = 0;
                uStack_2fc = 0;
                uStack_2f8 = 0;
                iStack_2ec = 0x3f800000;
                puStack_2e8 = (undefined8 *)0x0;
                uStack_2e0 = 0;
                fStack_2dc = 0.0;
                fStack_2d8 = 1.0;
                uStack_2cc = 0;
                uStack_2c8 = 0;
                uStack_2d4 = 0;
                uStack_2d0 = 0;
                uStack_2c4 = 0x3f800000;
                (**(code **)(*param_2 + 0x58))(param_2,*plVar1,plVar27,&uStack_300,3);
                (**(code **)(*param_2 + 0x90))(param_2,0,3,3);
                plVar1 = plStack_b8;
                *(undefined4 *)(param_1 + -0x23c) = 2;
                if (plStack_b8 != (long *)0x0) {
                  plVar11 = plStack_b8 + 1;
                  do {
                    lVar19 = *plVar11;
                    cVar4 = '\x01';
                    bVar26 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar26) {
                      *plVar11 = lVar19 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (lVar19 == 0) {
                    (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
                  }
                }
                plVar1 = plStack_e0;
                if (plStack_e0 != (long *)0x0) {
                  plVar11 = plStack_e0 + 1;
                  do {
                    lVar19 = *plVar11;
                    cVar4 = '\x01';
                    bVar26 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar26) {
                      *plVar11 = lVar19 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (lVar19 == 0) {
                    (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
                  }
                }
                func_0x00010a048e34(&puStack_288,puStack_290);
              }
              else {
                plVar1 = (long *)CONCAT44(iStack_2ec,uStack_2f0);
                if (plVar1 != (long *)0x0) {
                  plVar11 = plVar1 + 1;
                  do {
                    lVar19 = *plVar11;
                    cVar4 = '\x01';
                    bVar26 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar26) {
                      *plVar11 = lVar19 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (lVar19 == 0) {
                    (**(code **)(*plVar1 + 0x10))(plVar1);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
                  }
                }
                if (uStack_348 != (long *)0x0) {
                  plVar1 = uStack_348 + 1;
                  do {
                    lVar19 = *plVar1;
                    cVar4 = '\x01';
                    bVar26 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar26) {
                      *plVar1 = lVar19 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
LAB_10ac57eb4:
                  plVar1 = uStack_348;
                  if (lVar19 == 0) {
                    (**(code **)(*uStack_348 + 0x10))(uStack_348);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
                  }
                }
              }
            }
            plVar1 = plStack_310;
            if (plStack_310 != (long *)0x0) {
              plVar11 = plStack_310 + 1;
              do {
                lVar19 = *plVar11;
                cVar4 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar26) {
                  *plVar11 = lVar19 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar19 == 0) {
                (**(code **)(*plStack_310 + 0x10))(plStack_310);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
              }
            }
            if (puStack_378 != (undefined8 *)0x0) {
              __ZdlPv(puStack_378);
            }
          }
        }
      }
    }
    else {
      do {
        if ((*piVar13 == 0) && (piVar13[1] == *(int *)(param_1 + 0x30))) goto LAB_10ac56f50;
        piVar13 = piVar13 + 0x88;
      } while (piVar13 != piVar3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
LAB_10ac57f54:
  FUN_10ac781f0();
LAB_10ac57f70:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10ac57f74);
  (*pcVar8)();
}



/* Entry: 10ac581b4; end: 10ac584cf;  */

void FUN_10ac581b4(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f662ab3,0x1f);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c62eb0;
  pppuVar2 = (undefined8 ***)&UNK_10f69e32c;
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
  uStack_58 = 0x90;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c62eb0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c5efc0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac584b0;
    FUN_10a054dac(param_1,&UNK_10f69e3ba,FUN_10ac7bec8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac584b0;
    FUN_10a054dac(param_1,&UNK_10f69e3c8,FUN_10ac7c080,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"duration",FUN_10ac7c1dc,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f20c,FUN_10ac7c31c,FUN_10ac7c3f4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f5adece,FUN_10ac7c508,FUN_10ac7c5c4);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f662ab3,0x1f);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10ac584b0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac584b4);
  (*pcVar6)();
}



/* Entry: 10ac584d0; end: 10ac585cb;  */

undefined8 * FUN_10ac584d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x26] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x29) = 0x100;
  puVar1 = param_1;
  FUN_10ac1b018(param_1,&PTR_PTR_110c5f9a0,param_2);
  *puVar1 = &PTR_DAT_110c62c70;
  puVar1[2] = &PTR_FUN_110c56130;
  puVar1[5] = &PTR_DAT_110c56160;
  puVar1[0x26] = &PTR_DAT_110c62d58;
  FUN_10a1e394c(puVar1 + 0x15);
  *param_1 = &PTR_DAT_110c5f7e8;
  param_1[2] = &PTR_FUN_110c5f8a0;
  param_1[5] = &PTR_DAT_110c5f8d0;
  param_1[0x26] = &PTR_DAT_110c5f958;
  *(undefined4 *)(param_1 + 0x1f) = 1;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0x3f80000000000000;
  param_1[0x24] = 0xac443f800000;
  *(bool *)(param_1 + 0x25) = 0x145 < *(int *)(*(long *)(param_1[0x12] + 0xa20) + 0x18);
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  return param_1;
}



/* Entry: 10ac585cc; end: 10ac585fb;  */

void FUN_10ac585cc(long param_1)

{
  if (*(long *)(param_1 + 0x100) != 0) {
    func_0x00010a3a4b08(param_1 + 0x100);
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  return;
}



/* Entry: 10ac585fc; end: 10ac58713;  */

void FUN_10ac585fc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_50;
  long *plStack_48;
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if (param_1[0x20] == 0) {
    FUN_10a08d2e0(&uStack_50,param_1 + 0x16);
    FUN_10ac58714(auStack_38,param_1,&uStack_50);
    if (cStack_39 < '\0') {
      __ZdlPv(uStack_50);
    }
    FUN_10ac7c69c(&uStack_50,auStack_38,0);
    func_0x00010a41cc44(param_1 + 0x20,&uStack_50);
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
    (**(code **)(*param_1 + 0x98))(param_1,*(undefined4 *)((long)param_1 + 0x124));
    *(undefined4 *)((long)param_1 + 0x74) = 2;
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0x74) = 2;
  }
  return;
}



/* Entry: 10ac58714; end: 10ac587d3;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10ac58714(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  plVar2 = param_3;
  FUN_10ad01a04();
  if ((int)plVar2 == 0) {
    FUN_10a099f6c(&lStack_48,param_3);
    FUN_10a0b4df8(param_1,param_2 + 0x78,&lStack_48);
    if (uStack_38._7_1_ < '\0') {
      __ZdlPv(lStack_48);
    }
  }
  else {
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      lVar5 = *param_3;
      uVar1 = param_3[1];
      if (uVar1 < 0x17) {
        *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memmove_11034c660)(param_1,lVar5,uVar1 + 1);
        return;
      }
      if (uVar1 < 0x7ffffffffffffff7) {
        lVar3 = 0x19;
        if ((uVar1 | 7) != 0x17) {
          lVar3 = (uVar1 | 7) + 1;
        }
        puVar4 = &UNK_100033e00;
      }
      else {
        puVar4 = &UNK_100033e30;
        lVar3 = lVar5;
        func_0x000104bd47d4();
      }
      lStack_48 = lVar5;
      puStack_40 = &stack0xfffffffffffffff0;
      uStack_38 = puVar4;
      func_0x000107c60e20(lVar3);
      return;
    }
    lVar5 = *param_3;
    param_1[1] = param_3[1];
    *param_1 = lVar5;
    param_1[2] = param_3[2];
  }
  return;
}



/* Entry: 10ac587d4; end: 10ac587e3;  */

void FUN_10ac587d4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_50;
  long *plStack_48;
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  plVar4 = (long *)(param_1 + -0x10);
  if (*(long *)(param_1 + 0xf0) == 0) {
    FUN_10a08d2e0(&uStack_50,param_1 + 0xa0);
    FUN_10ac58714(auStack_38,plVar4,&uStack_50);
    if (cStack_39 < '\0') {
      __ZdlPv(uStack_50);
    }
    FUN_10ac7c69c(&uStack_50,auStack_38,0);
    func_0x00010a41cc44(param_1 + 0xf0,&uStack_50);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
    (**(code **)(*plVar4 + 0x98))(plVar4,*(undefined4 *)(param_1 + 0x114));
    *(undefined4 *)(param_1 + 100) = 2;
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  else {
    *(undefined4 *)(param_1 + 100) = 2;
  }
  return;
}


