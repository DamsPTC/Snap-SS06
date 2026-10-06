/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a961064; end: 10a96115f;  */

undefined1  [16] FUN_10a961064(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c308f0;
  puVar1 = &UNK_10f683c80;
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
    ppuStack_40 = &PTR_DAT_110c308f0;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a961160; end: 10a9611b3;  */

ulong FUN_10a961160(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a9611b4,0);
  }
  return param_1;
}



/* Entry: 10a9611b4; end: 10a96126b;  */

void FUN_10a9611b4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a96126c(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a0881b8(param_1,param_2,plVar4 + 3);
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



/* Entry: 10a96126c; end: 10a961327;  */

undefined ** FUN_10a96126c(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = param_1;
  func_0x000109898688();
  if (ppuVar1 != (undefined **)0x0) {
    FUN_10a052c2c();
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
    FUN_10a0605c4(ppuVar1,*param_2,FUN_10a961328,0);
  }
  return ppuVar1;
}



/* Entry: 10a961328; end: 10a9613df;  */

void FUN_10a961328(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a96126c(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a0881b8(param_1,param_2,(long)plVar4 + 0x24);
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



/* Entry: 10a9613e0; end: 10a961433;  */

ulong FUN_10a9613e0(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a961434,0);
  }
  return param_1;
}



/* Entry: 10a961434; end: 10a9614ef;  */

void FUN_10a961434(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uVar14;
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
  FUN_10a96126c(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)(param_2 + 6));
  *(undefined8 *)(param_1 + 2) = uVar14;
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



/* Entry: 10a9614f0; end: 10a9615ab;  */

void FUN_10a9614f0(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f685434,0x17);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9615ac);
  (*pcVar4)();
}



/* Entry: 10a9615ac; end: 10a9616d3;  */

void FUN_10a9615ac(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  code *extraout_x9;
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
  FUN_10a480834(param_5);
  plVar4 = param_2;
  func_0x00010a0655d8(param_2,param_4);
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  ppuVar5 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  (*extraout_x9)(&stack0xffffffffffffffa0,*ppuVar5,plVar4);
  FUN_10a4bddfc(param_1,param_2,in_stack_ffffffffffffffa0,
                in_stack_ffffffffffffffa8 - in_stack_ffffffffffffffa0 >> 4);
  FUN_10a4be000(&stack0xffffffffffffffb8);
  plVar4 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar7;
  return;
}



/* Entry: 10a9616d4; end: 10a9616ef;  */

void FUN_10a9616d4(void)

{
  return;
}



/* Entry: 10a9616f0; end: 10a961817;  */

void FUN_10a9616f0(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  code *extraout_x9;
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
  FUN_10a961818(param_5);
  plVar4 = param_2;
  FUN_10a05a42c(param_2,param_4);
  FUN_10a445704(param_2,param_4 + 0x10);
  ppuVar5 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  (*extraout_x9)(&stack0xffffffffffffffa0,*ppuVar5,plVar4);
  FUN_10a4bddfc(param_1,param_2,in_stack_ffffffffffffffa0,
                in_stack_ffffffffffffffa8 - in_stack_ffffffffffffffa0 >> 4);
  FUN_10a4be000(&stack0xffffffffffffffb8);
  plVar4 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar7;
  return;
}



/* Entry: 10a961818; end: 10a96183b;  */

void FUN_10a961818(undefined8 param_1)

{
  if ((int)param_1 == 2) {
    return;
  }
  FUN_10a052ee0(2,0,param_1);
  return;
}



/* Entry: 10a96183c; end: 10a961857;  */

void FUN_10a96183c(void)

{
  return;
}



/* Entry: 10a961858; end: 10a96197f;  */

void FUN_10a961858(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  code *extraout_x9;
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
  FUN_10a480834(param_5);
  plVar4 = param_2;
  func_0x00010a0655d8(param_2,param_4);
  func_0x00010a0655d8(param_2,param_4 + 0x10);
  ppuVar5 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  (*extraout_x9)(&stack0xffffffffffffffa0,*ppuVar5,plVar4);
  FUN_10a961980(param_1,param_2,in_stack_ffffffffffffffa0,
                in_stack_ffffffffffffffa8 - in_stack_ffffffffffffffa0 >> 4);
  FUN_10a4afac4(&stack0xffffffffffffffb8);
  plVar4 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar7;
  return;
}



/* Entry: 10a961980; end: 10a961b0f;  */

void FUN_10a961980(undefined4 *param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  (**(code **)(*param_2 + 600))(&uStack_60,param_2,param_4);
  uStack_70 = uStack_60;
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar7 * 0x10);
      plStack_58 = (long *)puVar3[1];
      uStack_60 = *puVar3;
      if (puVar3[1] != 0) {
        plVar1 = (long *)(puVar3[1] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppuStack_68 = &PTR_DAT_110c6b2e8;
      func_0x000109899de4(aiStack_80,param_2,&uStack_60,&ppuStack_68,0,0);
      plVar1 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar2 = plStack_58 + 1;
        do {
          lVar6 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      (**(code **)(*param_2 + 0x290))(param_2,&uStack_70,lVar7,aiStack_80);
      if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
        (**(code **)*puStack_78)();
      }
      lVar7 = lVar7 + 1;
      uStack_60 = uStack_70;
    } while (lVar7 != param_4);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = uStack_60;
  return;
}



/* Entry: 10a961b10; end: 10a961b2b;  */

void FUN_10a961b10(void)

{
  return;
}



/* Entry: 10a961b2c; end: 10a961c53;  */

void FUN_10a961b2c(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  code *extraout_x9;
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
  FUN_10a961818(param_5);
  plVar4 = param_2;
  FUN_10a05a42c(param_2,param_4);
  FUN_10a445704(param_2,param_4 + 0x10);
  ppuVar5 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  (*extraout_x9)(&stack0xffffffffffffffa0,*ppuVar5,plVar4);
  FUN_10a961980(param_1,param_2,in_stack_ffffffffffffffa0,
                in_stack_ffffffffffffffa8 - in_stack_ffffffffffffffa0 >> 4);
  FUN_10a4afac4(&stack0xffffffffffffffb8);
  plVar4 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar7;
  return;
}



/* Entry: 10a961c54; end: 10a961c6f;  */

void FUN_10a961c54(void)

{
  return;
}



/* Entry: 10a961c70; end: 10a961d6b;  */

undefined1  [16] FUN_10a961c70(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c30a28;
  puVar1 = &UNK_10f683c80;
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
    ppuStack_40 = &PTR_DAT_110c30a28;
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



/* Entry: 10a961d6c; end: 10a961e27;  */

void FUN_10a961d6c(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f685474,0x1e);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a961e28);
  (*pcVar4)();
}



/* Entry: 10a961e28; end: 10a962233;  */

void FUN_10a961e28(long param_1)

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
    FUN_10a953de8(param_1 + 0x98,param_1 + 0x88,*(undefined8 *)(param_1 + 0x80));
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a962154);
        (*pcVar4)();
      }
      FUN_10a9534d0(param_1 + 0x48,*(long *)(param_1 + 0xa0) + 0x98);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(&uStack_48,*(long *)(param_1 + 0xa0) + 0x90);
      FUN_10a953660(param_1 + 0x60,&uStack_48);
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



/* Entry: 10a962234; end: 10a96242b;  */

void FUN_10a962234(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x90);
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_10a962388;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a962388;
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
    if (plVar5 == (long *)0x0) goto LAB_10a962388;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a962388;
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
LAB_10a962388:
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



/* Entry: 10a96242c; end: 10a96288b;  */

void FUN_10a96242c(long param_1)

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
    FUN_10a9537b4(param_1 + 0xd0,param_1 + 0xd8,param_1 + 0x88);
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
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a962778);
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



/* Entry: 10a96288c; end: 10a962a5f;  */

void FUN_10a96288c(long param_1)

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



/* Entry: 10a962a60; end: 10a962e63;  */

/* WARNING: Removing unreachable block (ram,0x00010a962c08) */

void FUN_10a962a60(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_29;
  
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    plVar6 = *(long **)(param_1 + 0x68);
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar6 + 0x12);
      goto LAB_10a962da8;
    }
    if ((*(byte *)(plVar6 + 0x17) & 1) == 0) goto LAB_10a962da8;
    *(char *)(param_1 + 0x48) = (char)plVar6[0x13];
    if (*(char *)((long)plVar6 + 0xb7) < '\0') {
      func_0x000107c3192c(param_1 + 0x50,plVar6[0x14],plVar6[0x15]);
      plVar6 = *(long **)(param_1 + 0x68);
      if (plVar6 != (long *)0x0) goto LAB_10a962b58;
    }
    else {
      lVar10 = plVar6[0x15];
      lVar7 = plVar6[0x14];
      *(long *)(param_1 + 0x60) = plVar6[0x16];
      *(long *)(param_1 + 0x58) = lVar10;
      *(long *)(param_1 + 0x50) = lVar7;
LAB_10a962b58:
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar9 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar9 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
      FUN_10a00946c(&UNK_10f685104);
      goto LAB_10a962da8;
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (*(char *)(*(long *)(param_1 + 0x80) + 0x18) != '\x01') goto LAB_10a962c24;
    lVar7 = *(long *)(*(long *)(param_1 + 0x80) + 0x10);
    *(long *)(param_1 + 0x78) = lVar7;
    plVar6 = (long *)(lVar7 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x88) = 1;
      lVar7 = *(long *)(param_1 + 0x78);
      plVar6 = (long *)(lVar7 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar10 = *plVar6;
        if (lVar10 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_58 = 0;
            plStack_50 = (long *)param_1;
            uStack_48 = uVar11;
            func_0x000109d1b588(lVar7 + 0x18,&uStack_58);
            *(undefined8 *)(lVar7 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
  }
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x10);
  plVar6 = *(long **)(param_1 + 0x78);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar9 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar9 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar9 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  if (((uint)uVar11 >> 5 & 1) == 0) {
    func_0x0001092af8bc(*(long *)(param_1 + 0x80) + 0x10);
    lVar7 = *(long *)(*(long *)(param_1 + 0x80) + 0x10);
    if ((*(byte *)(lVar7 + 0xa8) & 1) == 0) {
LAB_10a962da8:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a962dac);
      (*pcVar5)();
    }
    func_0x00010a94f0ac(param_1 + 0x68,*(long *)(lVar7 + 0x98) + 0x268);
  }
LAB_10a962c24:
  FUN_10a0ff18c(&uStack_58,param_1 + 0x50,2);
  FUN_10a94f128(&lStack_68,**(undefined8 **)(param_1 + 0x80),&uStack_58,param_1 + 0x68);
  if (cStack_29 < '\0') {
    __ZdlPv(uStack_40);
  }
  if (uStack_48._7_1_ < '\0') {
    __ZdlPv(uStack_58);
  }
  puVar8 = *(undefined8 **)(param_1 + 0x80);
  *(undefined1 *)(lStack_68 + 0x288) = 1;
  FUN_10a37bb00(&uStack_58,*puVar8,&lStack_68);
  func_0x00010a94e9c0(param_1 + 0x10,&uStack_58);
  if (plStack_50 != (long *)0x0) {
    plVar6 = plStack_50 + 1;
    do {
      lVar7 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
    }
  }
  if (plStack_60 != (long *)0x0) {
    plVar6 = plStack_60 + 1;
    do {
      lVar7 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_60);
    }
  }
  plVar6 = *(long **)(param_1 + 0x70);
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  func_0x000109d1a1d0(param_1 + 0x10);
  __ZdlPv(param_1);
  return;
}



/* Entry: 10a962e64; end: 10a962f73;  */

void FUN_10a962e64(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0x88) == '\x01') {
    plVar5 = *(long **)(param_1 + 0x78);
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
    plVar5 = *(long **)(param_1 + 0x70);
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
    if (*(char *)(param_1 + 0x67) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x50));
    }
  }
  else {
    plVar5 = *(long **)(param_1 + 0x68);
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
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a962f74; end: 10a96328b;  */

void FUN_10a962f74(long param_1)

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
  
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    FUN_10a94ea80(param_1 + 0x80,param_1 + 0x48);
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x80);
    plVar5 = (long *)(*(long *)(param_1 + 0x80) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x88) = 1;
      lVar8 = *(long *)(param_1 + 0x70);
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
  lVar8 = *(long *)(param_1 + 0x70);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar8 + 0xa8) & 1) != 0) {
      func_0x00010a94e9c0(param_1 + 0x10,lVar8 + 0x98);
      plVar5 = *(long **)(param_1 + 0x70);
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
      plVar5 = *(long **)(param_1 + 0x68);
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
      if ((*(char *)(param_1 + 0x60) == '\x01') &&
         (plVar5 = *(long **)(param_1 + 0x58), plVar5 != (long *)0x0)) {
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
      plVar5 = *(long **)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x50) = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar8 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9631c8);
  (*pcVar4)();
}



/* Entry: 10a96328c; end: 10a96348f;  */

void FUN_10a96328c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x68);
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
    if ((*(char *)(param_1 + 0x60) != '\x01') ||
       (plVar4 = *(long **)(param_1 + 0x58), plVar4 == (long *)0x0)) goto LAB_10a963460;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a963460;
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
    plVar4 = *(long **)(param_1 + 0x70);
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
    plVar4 = *(long **)(param_1 + 0x80);
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
    plVar4 = *(long **)(param_1 + 0x68);
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
    if ((*(char *)(param_1 + 0x60) != '\x01') ||
       (plVar4 = *(long **)(param_1 + 0x58), plVar4 == (long *)0x0)) goto LAB_10a963460;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a963460;
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
LAB_10a963460:
  plVar4 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a963490; end: 10a96389b;  */

void FUN_10a963490(long param_1)

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
    FUN_10a9585c4(param_1 + 0x98,param_1 + 0x88,*(undefined8 *)(param_1 + 0x80));
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9637bc);
        (*pcVar4)();
      }
      FUN_10a957c38(param_1 + 0x48,*(long *)(param_1 + 0xa0) + 0x98);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(&uStack_48,*(long *)(param_1 + 0xa0) + 0x90);
      FUN_10a957e3c(param_1 + 0x60,&uStack_48);
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



/* Entry: 10a96389c; end: 10a963a93;  */

void FUN_10a96389c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x90);
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_10a9639f0;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a9639f0;
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
    if (plVar5 == (long *)0x0) goto LAB_10a9639f0;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a9639f0;
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
LAB_10a9639f0:
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



/* Entry: 10a963a94; end: 10a963ef3;  */

void FUN_10a963a94(long param_1)

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
    FUN_10a957f90(param_1 + 0xd0,param_1 + 0xd8,param_1 + 0x88);
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
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a963de0);
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



/* Entry: 10a963ef4; end: 10a9640c7;  */

void FUN_10a963ef4(long param_1)

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



/* Entry: 10a9640c8; end: 10a964153;  */

undefined1  [16] FUN_10a9640c8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f6871c2;
  return auVar1;
}



/* Entry: 10a964154; end: 10a964263;  */

void FUN_10a964154(undefined8 param_1)

{
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_90 = (undefined1 *)0xffffffff00000001;
  puStack_98 = (undefined *)0x0;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f68581c;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x129;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a964264(param_1,&puStack_98);
  puStack_a0 = &UNK_10f685829;
  puStack_98 = &UNK_10f68581d;
  uStack_88 = 1;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f68581c;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_90 = (undefined1 *)&puStack_a0;
  FUN_10a98b2e8();
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68582f;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x12a;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a98b60c(param_1,&puStack_98);
  FUN_10a98b7a0(param_1);
  return;
}



/* Entry: 10a964264; end: 10a96433b;  */

/* WARNING: Removing unreachable block (ram,0x00010a9642fc) */

undefined1  [16] FUN_10a964264(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6871c2,0x11);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a98b1ec(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a96433c; end: 10a9643c7;  */

undefined8 * FUN_10a96433c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c31820;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 3,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[5] = param_2[2];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  return param_1;
}



/* Entry: 10a9643c8; end: 10a964457;  */

undefined1  [16] FUN_10a9643c8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x19;
  auVar1._0_8_ = &UNK_10f663581;
  return auVar1;
}



/* Entry: 10a964458; end: 10a96488b;  */

void FUN_10a964458(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f663581,0x19);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c331d8;
  pppuVar2 = (undefined8 ***)&UNK_10f68581c;
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
  uStack_58 = 0x129;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c331d8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c42c58;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a96486c;
    FUN_10a054dac(param_1,&UNK_10f685837,FUN_10a98b90c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a96486c;
    FUN_10a054dac(param_1,&UNK_10f68584c,FUN_10a98bb24,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a96486c;
    FUN_10a054dac(param_1,&UNK_10f68585d,FUN_10a98bcec,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c33dd8,FUN_10a98be78);
    FUN_10a0605c4(param_1,&UNK_10f685871,FUN_10a98c7a8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c33dd8,FUN_10a98be78);
    FUN_10a0605c4(param_1,&UNK_10f685880,FUN_10a98c9d0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f68588f,FUN_10a98caac,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f68589e,FUN_10a98cc44,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6858ad,FUN_10a98ccf4,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f663581,0x19);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a96486c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a964870);
  (*pcVar6)();
}



/* Entry: 10a96488c; end: 10a964913;  */

undefined8 * FUN_10a96488c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 uStack_21;
  
  puVar1 = param_1;
  FUN_10aa7093c();
  *puVar1 = &PTR_FUN_110c31878;
  puVar1[2] = &PTR_DAT_110c31918;
  puVar1[7] = &PTR_DAT_110c31970;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  FUN_10a05a5d4(puVar1 + 0x1e,&uStack_21);
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  return param_1;
}



/* Entry: 10a964914; end: 10a965777;  */

void FUN_10a964914(long param_1)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code *****pppppcVar9;
  code *****pppppcVar10;
  code *****pppppcVar11;
  undefined8 in_x7;
  code ****ppppcVar12;
  long *plVar13;
  code *****pppppcVar14;
  long lVar15;
  long lVar16;
  code *****pppppcVar17;
  double dVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  code ****ppppcStack_160;
  code ****ppppcStack_158;
  code ****ppppcStack_150;
  code ****ppppcStack_148;
  long alStack_140 [7];
  undefined8 uStack_108;
  code ****ppppcStack_100;
  code ****ppppcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  code ***pppcStack_c0;
  code ****ppppcStack_b8;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *(long *)(param_1 + 0x50);
  puVar5 = (undefined8 *)0x98;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = lVar15;
  puVar5[4] = 0;
  *puVar5 = &PTR_FUN_110c33e00;
  puVar5[5] = 0;
  *(undefined2 *)(puVar5 + 6) = 0;
  if (*(int *)(*(long *)(lVar15 + 0x100) + 0x2a8) == 8) {
    dVar18 = *(double *)(*(long *)(lVar15 + 0x850) + 8) * 1000.0;
  }
  else {
    puVar6 = puVar5;
    __ZNSt3__16chrono12system_clock3nowEv();
    dVar18 = (double)((long)puVar6 / 1000);
  }
  *(float *)((long)puVar5 + 0x34) = (float)dVar18;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[7] = 0;
  *(undefined1 *)(puVar5 + 10) = 0;
  puVar6 = (undefined8 *)0x98;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_110c34278;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0x12] = 0;
  puVar6[3] = &PTR_FUN_110c342c8;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 10) = 0x3f800000;
  puVar6[0xb] = FUN_10a994ee0;
  puVar6[0xc] = &PTR_DAT_110ae9180;
  puVar5[0xb] = puVar6 + 3;
  puVar5[0xc] = puVar6;
  puVar6 = (undefined8 *)0x98;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_110c34278;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0x12] = 0;
  puVar6[3] = &PTR_FUN_110c342c8;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 10) = 0x3f800000;
  puVar6[0xb] = FUN_10a994ee0;
  puVar6[0xc] = &PTR_DAT_110ae9180;
  puVar5[0xd] = puVar6 + 3;
  puVar5[0xe] = puVar6;
  puVar6 = (undefined8 *)0x98;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110b9a070;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0x12] = 0;
  puVar6[3] = &PTR_FUN_110b9a0c0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 10) = 0x3f800000;
  puVar6[0xb] = FUN_10a004c4c;
  puVar6[0xc] = &PTR_DAT_110ae9180;
  puVar5[0xf] = puVar6 + 3;
  puVar5[0x10] = puVar6;
  puVar6 = (undefined8 *)0x98;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110b9a070;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0x12] = 0;
  puVar6[3] = &PTR_FUN_110b9a0c0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 10) = 0x3f800000;
  puVar6[0xb] = FUN_10a004c4c;
  puVar6[0xc] = &PTR_DAT_110ae9180;
  puVar5[0x11] = puVar6 + 3;
  puVar5[0x12] = puVar6;
  plVar13 = *(long **)(param_1 + 0x108);
  *(undefined8 **)(param_1 + 0x100) = puVar5 + 3;
  *(undefined8 **)(param_1 + 0x108) = puVar5;
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 1;
    do {
      lVar15 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  lVar16 = *(long *)(param_1 + 0x50);
  puVar5 = (undefined8 *)0x180;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110c33e50;
  puVar6 = puVar5 + 3;
  *puVar6 = &PTR_DAT_110b17898;
  puVar5[4] = 0;
  puVar5[5] = 0;
  FUN_10a03c0d0(puVar5 + 6);
  *puVar6 = &PTR_FUN_110c31a98;
  puVar5[6] = &PTR_FUN_110c31af8;
  lVar15 = *(long *)(lVar16 + 0x100);
  if (*(char *)(lVar15 + 0x21f) < '\0') {
    func_0x000107c3192c(puVar5 + 10,*(undefined8 *)(lVar15 + 0x208),*(undefined8 *)(lVar15 + 0x210))
    ;
    lVar15 = *(long *)(lVar16 + 0x100);
  }
  else {
    uVar21 = *(undefined8 *)(lVar15 + 0x210);
    uVar19 = *(undefined8 *)(lVar15 + 0x208);
    puVar5[0xc] = *(undefined8 *)(lVar15 + 0x218);
    puVar5[0xb] = uVar21;
    puVar5[10] = uVar19;
  }
  plVar13 = *(long **)(lVar15 + 0x1c8);
  (**(code **)(*plVar13 + 0x60))();
  lVar15 = plVar13[1];
  lVar20 = *plVar13;
  puVar5[0xe] = plVar13[1];
  puVar5[0xd] = lVar20;
  if (lVar15 != 0) {
    plVar13 = (long *)(lVar15 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = *plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar19 = *(undefined8 *)(param_1 + 0x100);
  puVar5[0x10] = *(undefined8 *)(param_1 + 0x108);
  puVar5[0xf] = uVar19;
  if (*(long *)(param_1 + 0x108) != 0) {
    plVar13 = (long *)(*(long *)(param_1 + 0x108) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = *plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a05a5d4(puVar5 + 0x11,&pppcStack_c0);
  puVar7 = (undefined8 *)0x58;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_DAT_110bf7fc8;
  puVar7[8] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[5] = 0;
  *(undefined8 *)((long)puVar7 + 0x4d) = 0;
  *(undefined8 *)((long)puVar7 + 0x45) = 0;
  puVar7[4] = 0;
  puVar7[3] = 0;
  puVar5[0x13] = puVar7 + 3;
  puVar5[0x14] = puVar7;
  FUN_10a5cf1fc(puVar5 + 0x13);
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  puVar5[0x16] = 0;
  puVar5[0x15] = puVar5 + 0x16;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x17] = 0;
  puVar5[0x18] = puVar5 + 0x19;
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar7 = (undefined8 *)0x98;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110b9a070;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  puVar7[0x11] = 0;
  puVar7[0x10] = 0;
  puVar7[0x12] = 0;
  puVar7[3] = &PTR_FUN_110b9a0c0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  *(undefined4 *)(puVar7 + 10) = 0x3f800000;
  puVar7[0xb] = FUN_10a004c4c;
  puVar7[0xc] = &PTR_DAT_110ae9180;
  puVar5[0x21] = puVar7 + 3;
  puVar5[0x22] = puVar7;
  puVar7 = (undefined8 *)0x98;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110b9a070;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  puVar7[0x11] = 0;
  puVar7[0x10] = 0;
  puVar7[0x12] = 0;
  puVar7[3] = &PTR_FUN_110b9a0c0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  *(undefined4 *)(puVar7 + 10) = 0x3f800000;
  puVar7[0xb] = FUN_10a004c4c;
  puVar7[0xc] = &PTR_DAT_110ae9180;
  puVar5[0x23] = puVar7 + 3;
  puVar5[0x24] = puVar7;
  puVar7 = (undefined8 *)0x98;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110c33f88;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  puVar7[0x11] = 0;
  puVar7[0x10] = 0;
  puVar7[0x12] = 0;
  puVar7[3] = &PTR_FUN_110c33fd8;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  *(undefined4 *)(puVar7 + 10) = 0x3f800000;
  puVar7[0xb] = FUN_10a991ab4;
  puVar7[0xc] = &PTR_DAT_110ae9180;
  puVar5[0x25] = puVar7 + 3;
  puVar5[0x26] = puVar7;
  puVar7 = (undefined8 *)0x98;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110c33f88;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  puVar7[0x11] = 0;
  puVar7[0x10] = 0;
  puVar7[0x12] = 0;
  puVar7[3] = &PTR_FUN_110c33fd8;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  *(undefined4 *)(puVar7 + 10) = 0x3f800000;
  puVar7[0xb] = FUN_10a991ab4;
  puVar7[0xc] = &PTR_DAT_110ae9180;
  puVar5[0x27] = puVar7 + 3;
  puVar5[0x28] = puVar7;
  puVar7 = (undefined8 *)0x98;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110c34030;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  puVar7[0x11] = 0;
  puVar7[0x10] = 0;
  puVar7[0x12] = 0;
  puVar7[3] = &PTR_FUN_110c34080;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  *(undefined4 *)(puVar7 + 10) = 0x3f800000;
  puVar7[0xb] = FUN_10a991e18;
  puVar7[0xc] = &PTR_DAT_110ae9180;
  puVar5[0x29] = puVar7 + 3;
  puVar5[0x2a] = puVar7;
  puVar7 = (undefined8 *)0x98;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110c34030;
  uVar19 = 0;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  puVar7[0x11] = 0;
  puVar7[0x10] = 0;
  puVar7[0x12] = 0;
  puVar7[3] = &PTR_FUN_110c34080;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  *(undefined4 *)(puVar7 + 10) = 0x3f800000;
  puVar7[0xb] = FUN_10a991e18;
  puVar7[0xc] = &PTR_DAT_110ae9180;
  puVar5[0x2b] = puVar7 + 3;
  puVar5[0x2c] = puVar7;
  puVar5[0x2d] = 0;
  puVar5[0x2e] = 0;
  *(undefined2 *)(puVar5 + 0x2f) = 0;
  FUN_10a5ae998(puVar5[0x13],&PTR_DAT_110b9f988,lVar16,puVar5 + 6);
  puVar5[0x2d] = puVar5[0x18];
  FUN_10a9676d0(puVar5[0xf]);
  puVar5[0x2e] = uVar19;
  plVar13 = *(long **)(param_1 + 0x118);
  *(undefined8 **)(param_1 + 0x110) = puVar6;
  *(undefined8 **)(param_1 + 0x118) = puVar5;
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 1;
    do {
      lVar15 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  lVar16 = *(long *)(param_1 + 0x50);
  puVar6 = (undefined8 *)0x150;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_110c33ea0;
  puVar7 = puVar6 + 3;
  *puVar7 = &PTR_DAT_110b17898;
  puVar6[4] = 0;
  puVar6[5] = 0;
  FUN_10a03c0d0(puVar6 + 6);
  *puVar7 = &PTR_FUN_110c31bd0;
  puVar6[6] = &PTR_FUN_110c31c30;
  lVar15 = *(long *)(lVar16 + 0x100);
  if (*(char *)(lVar15 + 0x21f) < '\0') {
    func_0x000107c3192c(puVar6 + 10,*(undefined8 *)(lVar15 + 0x208),*(undefined8 *)(lVar15 + 0x210))
    ;
    lVar15 = *(long *)(lVar16 + 0x100);
  }
  else {
    uVar21 = *(undefined8 *)(lVar15 + 0x210);
    uVar19 = *(undefined8 *)(lVar15 + 0x208);
    puVar6[0xc] = *(undefined8 *)(lVar15 + 0x218);
    puVar6[0xb] = uVar21;
    puVar6[10] = uVar19;
  }
  plVar13 = *(long **)(lVar15 + 0x1c8);
  (**(code **)(*plVar13 + 0x60))();
  lVar15 = plVar13[1];
  lVar20 = *plVar13;
  puVar6[0xe] = plVar13[1];
  puVar6[0xd] = lVar20;
  if (lVar15 != 0) {
    plVar13 = (long *)(lVar15 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = *plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar19 = *(undefined8 *)(param_1 + 0x100);
  puVar6[0x10] = *(undefined8 *)(param_1 + 0x108);
  puVar6[0xf] = uVar19;
  if (*(long *)(param_1 + 0x108) != 0) {
    plVar13 = (long *)(*(long *)(param_1 + 0x108) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = *plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a05a5d4(puVar6 + 0x11,&pppcStack_c0);
  puVar8 = (undefined8 *)0x58;
  __Znwm();
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_DAT_110bf7fc8;
  puVar8[8] = 0;
  puVar8[7] = 0;
  puVar8[6] = 0;
  puVar8[5] = 0;
  *(undefined8 *)((long)puVar8 + 0x4d) = 0;
  *(undefined8 *)((long)puVar8 + 0x45) = 0;
  puVar8[4] = 0;
  puVar8[3] = 0;
  puVar6[0x13] = puVar8 + 3;
  puVar6[0x14] = puVar8;
  FUN_10a5cf1fc(puVar6 + 0x13);
  puVar6[0x1e] = 0;
  puVar6[0x1d] = 0;
  puVar6[0x16] = 0;
  puVar6[0x15] = puVar6 + 0x16;
  puVar6[0x19] = 0;
  puVar6[0x1a] = 0;
  puVar6[0x17] = 0;
  puVar6[0x18] = puVar6 + 0x19;
  puVar6[0x1c] = 0;
  puVar6[0x1b] = 0;
  puVar8 = (undefined8 *)0x98;
  __Znwm();
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_110b9a070;
  puVar8[0xd] = 0;
  puVar8[0xc] = 0;
  puVar8[0xf] = 0;
  puVar8[0xe] = 0;
  puVar8[0x11] = 0;
  puVar8[0x10] = 0;
  puVar8[0x12] = 0;
  puVar8[3] = &PTR_FUN_110b9a0c0;
  puVar8[9] = 0;
  puVar8[8] = 0;
  puVar8[0xb] = 0;
  puVar8[10] = 0;
  puVar8[5] = 0;
  puVar8[4] = 0;
  puVar8[7] = 0;
  puVar8[6] = 0;
  *(undefined4 *)(puVar8 + 10) = 0x3f800000;
  puVar8[0xb] = FUN_10a004c4c;
  puVar8[0xc] = &PTR_DAT_110ae9180;
  puVar6[0x1f] = puVar8 + 3;
  puVar6[0x20] = puVar8;
  puVar8 = (undefined8 *)0x98;
  __Znwm();
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_110b9a070;
  puVar8[0xd] = 0;
  puVar8[0xc] = 0;
  puVar8[0xf] = 0;
  puVar8[0xe] = 0;
  puVar8[0x11] = 0;
  puVar8[0x10] = 0;
  puVar8[0x12] = 0;
  puVar8[3] = &PTR_FUN_110b9a0c0;
  puVar8[9] = 0;
  puVar8[8] = 0;
  puVar8[0xb] = 0;
  puVar8[10] = 0;
  puVar8[5] = 0;
  puVar8[4] = 0;
  puVar8[7] = 0;
  puVar8[6] = 0;
  *(undefined4 *)(puVar8 + 10) = 0x3f800000;
  puVar8[0xb] = FUN_10a004c4c;
  puVar8[0xc] = &PTR_DAT_110ae9180;
  puVar6[0x21] = puVar8 + 3;
  puVar6[0x22] = puVar8;
  puVar8 = (undefined8 *)0x98;
  __Znwm();
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_110c34350;
  puVar8[0xd] = 0;
  puVar8[0xc] = 0;
  puVar8[0xf] = 0;
  puVar8[0xe] = 0;
  puVar8[0x11] = 0;
  puVar8[0x10] = 0;
  puVar8[0x12] = 0;
  puVar8[3] = &PTR_FUN_110c343a0;
  puVar8[9] = 0;
  puVar8[8] = 0;
  puVar8[0xb] = 0;
  puVar8[10] = 0;
  puVar8[5] = 0;
  puVar8[4] = 0;
  puVar8[7] = 0;
  puVar8[6] = 0;
  *(undefined4 *)(puVar8 + 10) = 0x3f800000;
  puVar8[0xb] = FUN_10a997764;
  puVar8[0xc] = &PTR_DAT_110ae9180;
  puVar6[0x23] = puVar8 + 3;
  puVar6[0x24] = puVar8;
  puVar8 = (undefined8 *)0x98;
  __Znwm();
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_110c34350;
  uVar19 = 0;
  puVar8[0xd] = 0;
  puVar8[0xc] = 0;
  puVar8[0xf] = 0;
  puVar8[0xe] = 0;
  puVar8[0x11] = 0;
  puVar8[0x10] = 0;
  puVar8[0x12] = 0;
  puVar8[3] = &PTR_FUN_110c343a0;
  puVar8[9] = 0;
  puVar8[8] = 0;
  puVar8[0xb] = 0;
  puVar8[10] = 0;
  puVar8[5] = 0;
  puVar8[4] = 0;
  puVar8[7] = 0;
  puVar8[6] = 0;
  *(undefined4 *)(puVar8 + 10) = 0x3f800000;
  puVar8[0xb] = FUN_10a997764;
  puVar8[0xc] = &PTR_DAT_110ae9180;
  puVar6[0x25] = puVar8 + 3;
  puVar6[0x26] = puVar8;
  puVar6[0x27] = 0;
  puVar6[0x28] = 0;
  *(undefined2 *)(puVar6 + 0x29) = 0;
  FUN_10a5ae998(puVar6[0x13],&PTR_DAT_110b9f988,lVar16,puVar6 + 6);
  puVar6[0x27] = puVar6[0x18];
  FUN_10a9676d0(puVar6[0xf]);
  puVar6[0x28] = uVar19;
  plVar13 = *(long **)(param_1 + 0x128);
  *(undefined8 **)(param_1 + 0x120) = puVar7;
  *(undefined8 **)(param_1 + 0x128) = puVar6;
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 1;
    do {
      lVar15 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  FUN_10a3bf120(&ppppcStack_150);
  lVar16 = *(long *)(*(long *)(param_1 + 0x50) + 0x100);
  FUN_10a9662a4(&uStack_178,*(undefined8 *)(param_1 + 0xf0),param_1);
  pppppcVar9 = (code *****)0x138;
  __Znwm();
  pppcStack_c0 = (code ***)ppppcStack_150;
  pppppcVar17 = pppppcVar9 + 1;
  *pppppcVar17 = (code ****)0x0;
  pppppcVar9[2] = (code ****)0x0;
  *pppppcVar9 = (code ****)&PTR_FUN_110b9f3b0;
  pppppcVar11 = pppppcVar9 + 3;
  ppppcStack_150 = (code ****)0x0;
  ppppcStack_b8 = ppppcStack_148;
  (**(code **)(alStack_140[0] + 0x10))(&uStack_b0,alStack_140);
  uStack_78 = uStack_108;
  uVar2 = *(ulong *)(lVar16 + 0x210);
  lVar15 = *(long *)(lVar16 + 0x208);
  if (-1 < (char)*(byte *)(lVar16 + 0x21f)) {
    uVar2 = (ulong)*(byte *)(lVar16 + 0x21f);
    lVar15 = lVar16 + 0x208;
  }
  ppppcStack_100 = (code ****)FUN_10a98cf60;
  ppppcStack_f8 = (code ****)&PTR_FUN_110c33f30;
  uStack_f0 = uStack_178;
  uStack_e0 = uStack_168;
  uStack_e8 = uStack_170;
  uStack_170 = 0;
  uStack_168 = 0;
  FUN_10a23708c(pppppcVar11,&UNK_10f6871d4,0x1e,&UNK_10f647b45,3,&pppcStack_c0,1,in_x7,lVar15,uVar2,
                &ppppcStack_100);
  (*(code *)*ppppcStack_f8)(&ppppcStack_f8);
  FUN_10a042634(&pppcStack_c0);
  ppppcStack_160 = (code ****)pppppcVar11;
  ppppcStack_158 = (code ****)pppppcVar9;
  FUN_10a96634c(&uStack_178);
  FUN_10a042634(&ppppcStack_150);
  plVar13 = *(long **)(*(long *)(*(long *)(param_1 + 0x50) + 0x100) + 0x1c8);
  (**(code **)(*plVar13 + 0x60))();
  pppppcVar10 = (code *****)plVar13[1];
  pppppcVar14 = &ppppcStack_100;
  if ((pppppcVar10 != (code *****)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), ppppcStack_148 = (code ****)pppppcVar10,
     pppppcVar10 != (code *****)0x0)) {
    pppppcVar10 = (code *****)*plVar13;
    ppppcStack_150 = (code ****)pppppcVar10;
    if (pppppcVar10 != (code *****)0x0) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppcVar17,0x10);
        if (bVar4) {
          *pppppcVar17 = (code ****)((long)*pppppcVar17 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      ppppcStack_100 = (code ****)pppppcVar11;
      ppppcStack_f8 = (code ****)pppppcVar9;
      (*(code *)(*pppppcVar10)[2])(&pppcStack_c0,pppppcVar10,&ppppcStack_100);
      if (*(char *)(param_1 + 0x147) < '\0') {
        pppppcVar10 = *(code ******)(param_1 + 0x130);
        __ZdlPv(pppppcVar10);
      }
      pppppcVar11 = (code *****)ppppcStack_f8;
      *(code *****)(param_1 + 0x138) = ppppcStack_b8;
      *(code ****)(param_1 + 0x130) = pppcStack_c0;
      *(ulong *)(param_1 + 0x140) = CONCAT17(uStack_a9,uStack_b0);
      uStack_a9 = 0;
      pppcStack_c0 = (code ***)((ulong)pppcStack_c0 & 0xffffffffffffff00);
      if ((code *****)ppppcStack_f8 != (code *****)0x0) {
        pppppcVar17 = (code *****)(ppppcStack_f8 + 1);
        do {
          ppppcVar12 = *pppppcVar17;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppcVar17,0x10);
          if (bVar4) {
            *pppppcVar17 = (code ****)((long)ppppcVar12 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppppcVar12 == (code ****)0x0) {
          (*(code *)(*ppppcStack_f8)[2])(ppppcStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppcVar11);
          pppppcVar10 = pppppcVar11;
        }
      }
      pppppcVar14 = (code *****)ppppcStack_148;
      if ((code *****)ppppcStack_148 == (code *****)0x0) goto LAB_10a965430;
    }
    pppppcVar14 = (code *****)ppppcStack_148;
    pppppcVar11 = (code *****)(ppppcStack_148 + 1);
    do {
      ppppcVar12 = *pppppcVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppppcVar11,0x10);
      if (bVar4) {
        *pppppcVar11 = (code ****)((long)ppppcVar12 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppppcVar12 == (code ****)0x0) {
      (*(code *)(*ppppcStack_148)[2])(ppppcStack_148);
      pppppcVar10 = pppppcVar14;
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppcVar14);
    }
  }
LAB_10a965430:
  pppppcVar11 = (code *****)ppppcStack_158;
  if ((code *****)ppppcStack_158 != (code *****)0x0) {
    pppppcVar17 = (code *****)(ppppcStack_158 + 1);
    do {
      ppppcVar12 = *pppppcVar17;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppppcVar17,0x10);
      if (bVar4) {
        *pppppcVar17 = (code ****)((long)ppppcVar12 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppppcVar12 == (code ****)0x0) {
      (*(code *)(*ppppcStack_158)[2])(ppppcStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppcVar11);
      pppppcVar10 = pppppcVar11;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&ppppcStack_100);
  func_0x00010a05a8c4(&ppppcStack_150);
  FUN_10a05bd88(&ppppcStack_160);
  do {
    __Unwind_Resume(pppppcVar10);
    FUN_10a004cfc(&uStack_f0);
    func_0x00010a98ecf8(&ppppcStack_100);
    FUN_10a991f9c(puVar5 + 0x1d);
    func_0x00010a98b8b4(puVar6 + 0x1b);
    func_0x00010a991f24(*pppppcVar14);
    func_0x00010a991ea8(puVar6[0xf]);
    func_0x00010a004e5c(pppppcVar9 + 0x13);
    func_0x00010a05a86c(pppppcVar9 + 0x11);
    FUN_10a98ce14(puVar6 + 4);
    if (pppppcVar9[0xe] != (code ****)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(char *)((long)pppppcVar9 + 0x67) < '\0') {
      __ZdlPv(pppppcVar9[10]);
    }
    pppppcVar9[6] = (code ****)&PTR_FUN_110b9f9a8;
    if (pppppcVar9[9] != (code ****)0x0) {
      *pppppcVar9[9] = (code ***)0x0;
    }
    func_0x00010a004e5c(pppppcVar9 + 7);
    pppppcVar9[3] = (code ****)&PTR_DAT_110b17898;
    func_0x00010a004dac(puVar7);
    __ZNSt3__119__shared_weak_countD2Ev(pppppcVar9);
    __ZdlPv();
  } while( true );
}



/* Entry: 10a965778; end: 10a9658fb;  */

undefined8 * FUN_10a965778(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  cVar1 = *(char *)((long)param_1 + 0x147);
  if (cVar1 < '\0') {
    if (param_1[0x27] != 0) goto LAB_10a96584c;
LAB_10a96579c:
    if (((uint)(int)cVar1 >> 7 & 1) == 0) goto LAB_10a9657a0;
  }
  else {
    if (cVar1 == '\0') goto LAB_10a96579c;
LAB_10a96584c:
    plVar3 = *(long **)(*(long *)(param_1[10] + 0x100) + 0x1c8);
    (**(code **)(*plVar3 + 0x60))();
    plVar5 = (long *)plVar3[1];
    if (plVar5 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar5 != (long *)0x0) {
        plVar3 = (long *)*plVar3;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))(plVar3,param_1 + 0x26);
        }
        plVar3 = plVar5 + 1;
        do {
          lVar4 = *plVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    if (-1 < *(char *)((long)param_1 + 0x147)) goto LAB_10a9657a0;
  }
  __ZdlPv(param_1[0x26]);
LAB_10a9657a0:
  plVar5 = (long *)param_1[0x25];
  if (plVar5 != (long *)0x0) {
    plVar3 = plVar5 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = (long *)param_1[0x23];
  if (plVar5 != (long *)0x0) {
    plVar3 = plVar5 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  FUN_10a98ce14(param_1 + 0x20);
  func_0x00010a05a86c(param_1 + 0x1e);
  if (param_1[0x1d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a9658fc; end: 10a96590f;  */

undefined8 * FUN_10a9658fc(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  cVar1 = *(char *)((long)param_1 + 0x147);
  if (cVar1 < '\0') {
    if (param_1[0x27] != 0) goto LAB_10a96584c;
LAB_10a96579c:
    if (((uint)(int)cVar1 >> 7 & 1) == 0) goto LAB_10a9657a0;
  }
  else {
    if (cVar1 == '\0') goto LAB_10a96579c;
LAB_10a96584c:
    plVar3 = *(long **)(*(long *)(param_1[10] + 0x100) + 0x1c8);
    (**(code **)(*plVar3 + 0x60))();
    plVar5 = (long *)plVar3[1];
    if (plVar5 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar5 != (long *)0x0) {
        plVar3 = (long *)*plVar3;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))(plVar3,param_1 + 0x26);
        }
        plVar3 = plVar5 + 1;
        do {
          lVar4 = *plVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    if (-1 < *(char *)((long)param_1 + 0x147)) goto LAB_10a9657a0;
  }
  __ZdlPv(param_1[0x26]);
LAB_10a9657a0:
  plVar5 = (long *)param_1[0x25];
  if (plVar5 != (long *)0x0) {
    plVar3 = plVar5 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = (long *)param_1[0x23];
  if (plVar5 != (long *)0x0) {
    plVar3 = plVar5 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  FUN_10a98ce14(param_1 + 0x20);
  func_0x00010a05a86c(param_1 + 0x1e);
  if (param_1[0x1d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a965910; end: 10a965953;  */

void FUN_10a965910(void)

{
  FUN_10a965778();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a965954; end: 10a965dfb;  */

void FUN_10a965954(undefined8 *param_1,code **param_2)

{
  long *plVar1;
  long *plVar2;
  code **ppcVar3;
  char cVar4;
  bool bVar5;
  code **ppcVar6;
  code **ppcVar7;
  long lVar8;
  code *pcVar9;
  code **ppcVar10;
  code *pcStack_e0;
  code **ppcStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined1 auStack_b0 [8];
  long *plStack_a8;
  code *pcStack_a0;
  code **ppcStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  code **ppcStack_80;
  byte bStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar10 = (code **)param_2[0x22];
  ppcVar6 = param_2;
  if (((ulong)ppcVar10[0x2c] & 1) == 0) {
    uStack_c0 = *(undefined8 *)(ppcVar10[0xc] + 0x50);
    plStack_b8 = *(long **)(ppcVar10[0xc] + 0x58);
    if (plStack_b8 != (long *)0x0) {
      plVar1 = plStack_b8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pcStack_a0 = FUN_10a9921c4;
    ppcStack_98 = (code **)&PTR_FUN_110c340f0;
    pcStack_90 = FUN_10a968608;
    uStack_88 = 0;
    bStack_60 = 1;
    ppcStack_80 = ppcVar10;
    FUN_10a9682cc(auStack_b0,uStack_c0,&pcStack_a0);
    if (plStack_a8 != (long *)0x0) {
      plVar1 = plStack_a8 + 1;
      do {
        lVar8 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
      }
    }
    if (3 < (ulong)bStack_60) goto LAB_10a965df8;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_60])(&pcStack_a0);
    plVar1 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar2 = plStack_b8 + 1;
      do {
        lVar8 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    uStack_d0 = *(undefined8 *)(ppcVar10[0xc] + 0x60);
    plStack_c8 = *(long **)(ppcVar10[0xc] + 0x68);
    if (plStack_c8 != (long *)0x0) {
      plVar1 = plStack_c8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pcStack_a0 = (code *)0x10a9922a4;
    ppcStack_98 = (code **)&PTR_DAT_110c34110;
    pcStack_90 = FUN_10a968c20;
    uStack_88 = 0;
    bStack_60 = 1;
    ppcStack_80 = ppcVar10;
    FUN_10a07ca84(&uStack_c0,uStack_d0,&pcStack_a0);
    plVar1 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar2 = plStack_b8 + 1;
      do {
        lVar8 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    if (3 < (ulong)bStack_60) goto LAB_10a965df8;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_60])(&pcStack_a0);
    plVar1 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      plVar2 = plStack_c8 + 1;
      do {
        lVar8 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    pcStack_e0 = *(code **)(ppcVar10[0xc] + 0x70);
    ppcStack_d8 = *(code ***)(ppcVar10[0xc] + 0x78);
    if (ppcStack_d8 != (code **)0x0) {
      ppcVar6 = ppcStack_d8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppcVar6,0x10);
        if (bVar5) {
          *ppcVar6 = *ppcVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pcStack_a0 = (code *)0x10a9922a4;
    ppcStack_98 = (code **)&PTR_DAT_110c34110;
    pcStack_90 = FUN_10a968c2c;
    uStack_88 = 0;
    bStack_60 = 1;
    ppcStack_80 = ppcVar10;
    FUN_10a07ca84(&uStack_d0,pcStack_e0,&pcStack_a0);
    plVar1 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      plVar2 = plStack_c8 + 1;
      do {
        lVar8 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    if (3 < (ulong)bStack_60) goto LAB_10a965df8;
    ppcVar6 = &pcStack_a0;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_60])(ppcVar6);
    ppcVar7 = ppcStack_d8;
    if (ppcStack_d8 != (code **)0x0) {
      ppcVar3 = ppcStack_d8 + 1;
      do {
        pcVar9 = *ppcVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppcVar3,0x10);
        if (bVar5) {
          *ppcVar3 = pcVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (pcVar9 == (code *)0x0) {
        (**(code **)(*ppcStack_d8 + 0x10))(ppcStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppcVar7);
        ppcVar6 = ppcVar7;
      }
    }
    *(code *)(ppcVar10 + 0x2c) = (code)0x1;
    pcStack_a0 = *(code **)(ppcVar10[0xc] + 8);
    ppcStack_98 = *(code ***)(ppcVar10[0xc] + 0x10);
    if (ppcStack_98 == (code **)0x0) {
      if (pcStack_a0 != (code *)0x0) {
        ppcStack_d8 = (code **)0x0;
        goto LAB_10a965c88;
      }
    }
    else {
      ppcVar7 = ppcStack_98 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppcVar7,0x10);
        if (bVar5) {
          *ppcVar7 = *ppcVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (pcStack_a0 != (code *)0x0) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppcVar7,0x10);
          if (bVar5) {
            *ppcVar7 = *ppcVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          ppcStack_d8 = ppcStack_98;
        } while (cVar4 != '\0');
LAB_10a965c88:
        pcStack_e0 = pcStack_a0;
        FUN_10a968608(ppcVar10,&pcStack_e0);
        ppcVar7 = ppcStack_d8;
        ppcVar6 = ppcVar10;
        if (ppcStack_d8 != (code **)0x0) {
          ppcVar10 = ppcStack_d8 + 1;
          do {
            pcVar9 = *ppcVar10;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppcVar10,0x10);
            if (bVar5) {
              *ppcVar10 = pcVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pcVar9 == (code *)0x0) {
            (**(code **)(*ppcStack_d8 + 0x10))(ppcStack_d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppcVar7);
            ppcVar6 = ppcVar7;
          }
        }
      }
      ppcVar10 = ppcStack_98;
      if (ppcStack_98 != (code **)0x0) {
        ppcVar7 = ppcStack_98 + 1;
        do {
          pcVar9 = *ppcVar7;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppcVar7,0x10);
          if (bVar5) {
            *ppcVar7 = pcVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (pcVar9 == (code *)0x0) {
          (**(code **)(*ppcStack_98 + 0x10))(ppcStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppcVar10);
          ppcVar6 = ppcVar10;
        }
      }
    }
    ppcVar10 = (code **)param_2[0x22];
  }
  pcVar9 = param_2[0x23];
  *param_1 = ppcVar10;
  param_1[1] = pcVar9;
  if (pcVar9 != (code *)0x0) {
    pcVar9 = pcVar9 + 8;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar9,0x10);
      if (bVar5) {
        *(long *)pcVar9 = *(long *)pcVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a98b8b4(&pcStack_e0);
  func_0x00010a98b8b4(&pcStack_a0);
  __Unwind_Resume(ppcVar6);
LAB_10a965df8:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a965dfc);
  (*pcVar9)();
}



/* Entry: 10a965dfc; end: 10a9662a3;  */

void FUN_10a965dfc(undefined8 *param_1,code **param_2)

{
  long *plVar1;
  long *plVar2;
  code **ppcVar3;
  char cVar4;
  bool bVar5;
  code **ppcVar6;
  code **ppcVar7;
  long lVar8;
  code *pcVar9;
  code **ppcVar10;
  code *pcStack_e0;
  code **ppcStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined1 auStack_b0 [8];
  long *plStack_a8;
  code *pcStack_a0;
  code **ppcStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  code **ppcStack_80;
  byte bStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar10 = (code **)param_2[0x24];
  ppcVar6 = param_2;
  if (((ulong)ppcVar10[0x26] & 1) == 0) {
    uStack_c0 = *(undefined8 *)(ppcVar10[0xc] + 0x50);
    plStack_b8 = *(long **)(ppcVar10[0xc] + 0x58);
    if (plStack_b8 != (long *)0x0) {
      plVar1 = plStack_b8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pcStack_a0 = FUN_10a997938;
    ppcStack_98 = (code **)&PTR_FUN_110c34400;
    pcStack_90 = FUN_10a96b02c;
    uStack_88 = 0;
    bStack_60 = 1;
    ppcStack_80 = ppcVar10;
    FUN_10a9682cc(auStack_b0,uStack_c0,&pcStack_a0);
    if (plStack_a8 != (long *)0x0) {
      plVar1 = plStack_a8 + 1;
      do {
        lVar8 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
      }
    }
    if (3 < (ulong)bStack_60) goto LAB_10a9662a0;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_60])(&pcStack_a0);
    plVar1 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar2 = plStack_b8 + 1;
      do {
        lVar8 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    uStack_d0 = *(undefined8 *)(ppcVar10[0xc] + 0x60);
    plStack_c8 = *(long **)(ppcVar10[0xc] + 0x68);
    if (plStack_c8 != (long *)0x0) {
      plVar1 = plStack_c8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pcStack_a0 = (code *)0x10a997a18;
    ppcStack_98 = (code **)&PTR_DAT_110c34420;
    pcStack_90 = FUN_10a96b644;
    uStack_88 = 0;
    bStack_60 = 1;
    ppcStack_80 = ppcVar10;
    FUN_10a07ca84(&uStack_c0,uStack_d0,&pcStack_a0);
    plVar1 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar2 = plStack_b8 + 1;
      do {
        lVar8 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    if (3 < (ulong)bStack_60) goto LAB_10a9662a0;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_60])(&pcStack_a0);
    plVar1 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      plVar2 = plStack_c8 + 1;
      do {
        lVar8 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    pcStack_e0 = *(code **)(ppcVar10[0xc] + 0x70);
    ppcStack_d8 = *(code ***)(ppcVar10[0xc] + 0x78);
    if (ppcStack_d8 != (code **)0x0) {
      ppcVar6 = ppcStack_d8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppcVar6,0x10);
        if (bVar5) {
          *ppcVar6 = *ppcVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pcStack_a0 = (code *)0x10a997a18;
    ppcStack_98 = (code **)&PTR_DAT_110c34420;
    pcStack_90 = FUN_10a96b64c;
    uStack_88 = 0;
    bStack_60 = 1;
    ppcStack_80 = ppcVar10;
    FUN_10a07ca84(&uStack_d0,pcStack_e0,&pcStack_a0);
    plVar1 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      plVar2 = plStack_c8 + 1;
      do {
        lVar8 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    if (3 < (ulong)bStack_60) goto LAB_10a9662a0;
    ppcVar6 = &pcStack_a0;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_60])(ppcVar6);
    ppcVar7 = ppcStack_d8;
    if (ppcStack_d8 != (code **)0x0) {
      ppcVar3 = ppcStack_d8 + 1;
      do {
        pcVar9 = *ppcVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppcVar3,0x10);
        if (bVar5) {
          *ppcVar3 = pcVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (pcVar9 == (code *)0x0) {
        (**(code **)(*ppcStack_d8 + 0x10))(ppcStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppcVar7);
        ppcVar6 = ppcVar7;
      }
    }
    *(code *)(ppcVar10 + 0x26) = (code)0x1;
    pcStack_a0 = *(code **)(ppcVar10[0xc] + 8);
    ppcStack_98 = *(code ***)(ppcVar10[0xc] + 0x10);
    if (ppcStack_98 == (code **)0x0) {
      if (pcStack_a0 != (code *)0x0) {
        ppcStack_d8 = (code **)0x0;
        goto LAB_10a966130;
      }
    }
    else {
      ppcVar7 = ppcStack_98 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppcVar7,0x10);
        if (bVar5) {
          *ppcVar7 = *ppcVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (pcStack_a0 != (code *)0x0) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppcVar7,0x10);
          if (bVar5) {
            *ppcVar7 = *ppcVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          ppcStack_d8 = ppcStack_98;
        } while (cVar4 != '\0');
LAB_10a966130:
        pcStack_e0 = pcStack_a0;
        FUN_10a96b02c(ppcVar10,&pcStack_e0);
        ppcVar7 = ppcStack_d8;
        ppcVar6 = ppcVar10;
        if (ppcStack_d8 != (code **)0x0) {
          ppcVar10 = ppcStack_d8 + 1;
          do {
            pcVar9 = *ppcVar10;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppcVar10,0x10);
            if (bVar5) {
              *ppcVar10 = pcVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pcVar9 == (code *)0x0) {
            (**(code **)(*ppcStack_d8 + 0x10))(ppcStack_d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppcVar7);
            ppcVar6 = ppcVar7;
          }
        }
      }
      ppcVar10 = ppcStack_98;
      if (ppcStack_98 != (code **)0x0) {
        ppcVar7 = ppcStack_98 + 1;
        do {
          pcVar9 = *ppcVar7;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppcVar7,0x10);
          if (bVar5) {
            *ppcVar7 = pcVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (pcVar9 == (code *)0x0) {
          (**(code **)(*ppcStack_98 + 0x10))(ppcStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppcVar10);
          ppcVar6 = ppcVar10;
        }
      }
    }
    ppcVar10 = (code **)param_2[0x24];
  }
  pcVar9 = param_2[0x25];
  *param_1 = ppcVar10;
  param_1[1] = pcVar9;
  if (pcVar9 != (code *)0x0) {
    pcVar9 = pcVar9 + 8;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar9,0x10);
      if (bVar5) {
        *(long *)pcVar9 = *(long *)pcVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a98b8b4(&pcStack_e0);
  func_0x00010a98b8b4(&pcStack_a0);
  __Unwind_Resume(ppcVar6);
LAB_10a9662a0:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a9662a4);
  (*pcVar9)();
}



/* Entry: 10a9662a4; end: 10a96634b;  */

void FUN_10a9662a4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  plVar6 = (long *)0x48;
  __Znwm();
  plVar6[2] = (long)&PTR_FUN_110c33ab0;
  plVar6[3] = param_3;
  puVar2 = (undefined8 *)param_2[0xb];
  lVar3 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar2;
  *puVar2 = plVar6;
  param_2[0xb] = plVar6;
  param_2[0xc] = lVar3 + 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = plVar6;
  param_1[2] = uVar8;
  param_1[1] = uVar7;
  return;
}



/* Entry: 10a96634c; end: 10a9663cb;  */

undefined8 * FUN_10a96634c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a9663cc; end: 10a96652b;  */

undefined1  [16] FUN_10a9663cc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 10;
  auVar1._0_8_ = &UNK_10f6871f3;
  return auVar1;
}



/* Entry: 10a96652c; end: 10a9667e3;  */

void FUN_10a96652c(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6871f3,10);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c331f0;
  pppuVar2 = (undefined8 ***)&UNK_10f68581c;
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
    ppuStack_b0 = &PTR_DAT_110c331f0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
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
    FUN_10a0605c4(param_1,"duration",FUN_10a98dcd0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"text",FUN_10a98ddf4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f63975c,FUN_10a98ded4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f309658,FUN_10a98df8c,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6871f3,10);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a9667c8);
  (*pcVar6)();
}



/* Entry: 10a9667e4; end: 10a966a9b;  */

void FUN_10a9667e4(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6871fe,10);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c33208;
  pppuVar2 = (undefined8 ***)&UNK_10f68581c;
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
    ppuStack_b0 = &PTR_DAT_110c33208;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
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
    FUN_10a0605c4(param_1,&UNK_10f6858b8,FUN_10a98e044,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6858c5,FUN_10a98e1d0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f63975c,FUN_10a98e438,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f309658,FUN_10a98e4f0,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6871fe,10);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a966a80);
  (*pcVar6)();
}



/* Entry: 10a966a9c; end: 10a966bbf;  */

void FUN_10a966a9c(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f68581c;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f68581c;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a966bc0(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6858cb;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f68581c;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a98e6a4();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6858d1;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f68581c;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a98e9c8(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6858de;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f68581c;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a98ead4(param_1,&puStack_98);
  FUN_10a98ebe4(param_1);
  return;
}



/* Entry: 10a966bc0; end: 10a966c97;  */

/* WARNING: Removing unreachable block (ram,0x00010a966c58) */

undefined1  [16] FUN_10a966bc0(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f687209,6);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a98e5a8(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a966c98; end: 10a966e07;  */

void FUN_10a966c98(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6858e3;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68581c;
  uStack_78 = 0;
  puStack_70 = &UNK_10f68581c;
  uStack_68 = 0;
  uStack_60 = 0x129;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f3d9096;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68581c;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x129;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a966e08(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6858ee;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68581c;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x129;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a966e08();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6858f7;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68581c;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x129;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a966e08();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a966e08; end: 10a966eaf;  */

undefined8 * FUN_10a966e08(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a966eb0);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a966eb0; end: 10a966f97;  */

void FUN_10a966eb0(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar3 = *(long **)(param_2 + 0x20);
  for (plVar2 = *(long **)(param_2 + 0x18); plVar2 != plVar3; plVar2 = plVar2 + 2) {
    lVar8 = *plVar2;
    plVar4 = (long *)plVar2[1];
    if (plVar4 != (long *)0x0) {
      plVar7 = plVar4 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar6) {
          *plVar7 = *plVar7 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uVar1 = *(ulong *)(lVar8 + 0x20);
    plVar7 = (long *)*(long *)(lVar8 + 0x18);
    if (-1 < (char)*(byte *)(lVar8 + 0x2f)) {
      uVar1 = (ulong)*(byte *)(lVar8 + 0x2f);
      plVar7 = (long *)(lVar8 + 0x18);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,plVar7,uVar1);
    if (plVar4 != (long *)0x0) {
      plVar7 = plVar4 + 1;
      do {
        lVar8 = *plVar7;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar6) {
          *plVar7 = lVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  return;
}



/* Entry: 10a966f98; end: 10a96701b;  */

undefined1  [16] FUN_10a966f98(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xd;
  auVar1._0_8_ = &UNK_10f687217;
  return auVar1;
}



/* Entry: 10a96701c; end: 10a9675b7;  */

void FUN_10a96701c(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f687217,0xd);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c33238;
  pppuVar2 = (undefined8 ***)&UNK_10f68581c;
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
  uStack_58 = 0x129;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c33238;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
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
    FUN_10a0605c4(param_1,&UNK_10f685900,FUN_10a98ed50,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f68590b,FUN_10a98eeec,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f685914,FUN_10a98f0b4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f685920,FUN_10a98f164,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f685932,FUN_10a98f2d0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c33f48,FUN_10a98f380);
    FUN_10a0605c4(param_1,&UNK_10f685942,FUN_10a990188,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c33f48,FUN_10a98f380);
    FUN_10a0605c4(param_1,&UNK_10f68594e,FUN_10a990350,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c33f60,FUN_10a990400);
    FUN_10a0605c4(param_1,&UNK_10f685958,FUN_10a991208,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c33f60,FUN_10a990400);
    FUN_10a0605c4(param_1,&UNK_10f685964,FUN_10a9913d0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c33dd8,FUN_10a98be78);
    FUN_10a0605c4(param_1,&DAT_10f385181,FUN_10a991480,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f68596e,FUN_10a9915a0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f3becc6,FUN_10a991650,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f68597e,FUN_10a991728,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f687217,0xd);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a96759c);
  (*pcVar6)();
}



/* Entry: 10a9675b8; end: 10a9676cf;  */

void FUN_10a9675b8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0xe8);
  uVar5 = *(undefined8 *)(param_2 + 0xe0);
  param_1[1] = *(undefined8 *)(param_2 + 0xe8);
  *param_1 = uVar5;
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
  return;
}



/* Entry: 10a9676d0; end: 10a96777f;  */

double FUN_10a9676d0(long *param_1)

{
  long *plVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = 0.0;
  if ((char)param_1[3] == '\x01') {
    if ((*(byte *)((long)param_1 + 0x19) & 1) == 0) {
      if (*(int *)(*(long *)(*param_1 + 0x100) + 0x2a8) == 8) {
        dVar2 = *(double *)(*(long *)(*param_1 + 0x850) + 8) * 1000.0;
      }
      else {
        plVar1 = param_1;
        __ZNSt3__16chrono12system_clock3nowEv();
        dVar2 = (double)((long)plVar1 / 1000);
      }
    }
    else {
      dVar2 = (double)*(float *)((long)param_1 + 0x1c);
    }
    dVar3 = (double)NEON_ucvtf(param_1[6]);
    dVar2 = dVar2 - dVar3;
  }
  dVar3 = (double)NEON_ucvtf(param_1[4]);
  return (dVar2 + dVar3) / 1000.0;
}



/* Entry: 10a967780; end: 10a9677ab;  */

void FUN_10a967780(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(param_2 + 0x60);
  lVar4 = *(long *)(lVar5 + 0x68);
  uVar6 = *(undefined8 *)(lVar5 + 0x60);
  param_1[1] = *(undefined8 *)(lVar5 + 0x68);
  *param_1 = uVar6;
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
  return;
}



/* Entry: 10a9677ac; end: 10a9679a7;  */

void FUN_10a9677ac(double param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  if ((*(char *)(param_2 + 0x160) == '\x01') &&
     ((((lVar7 = *(long *)(param_2 + 0x60), *(char *)(lVar7 + 0x18) == '\x01' &&
        (*(char *)(lVar7 + 0x19) != '\x01')) ||
       (FUN_10a969bc0(lVar7), *(char *)(lVar7 + 0x38) == '\x01')) &&
      (*(long *)(param_2 + 0xb8) != 0)))) {
    if ((*(byte *)(param_2 + 0x161) & 1) == 0) {
      FUN_10a9676d0(*(undefined8 *)(param_2 + 0x60));
      plVar5 = (long *)(param_2 + 0xb0);
      plVar6 = (long *)*plVar5;
      *(double *)(param_2 + 0x158) = param_1;
      plVar4 = plVar5;
      if (plVar6 == (long *)0x0) {
        *(long **)(param_2 + 0x150) = plVar5;
        *(undefined1 *)(param_2 + 0x161) = 1;
      }
      else {
        do {
          lVar7 = 0;
          plVar3 = plVar6;
          if ((double)plVar6[4] <= param_1) {
            lVar7 = 8;
            plVar3 = plVar4;
          }
          plVar6 = *(long **)((long)plVar6 + lVar7);
          plVar4 = plVar3;
        } while (plVar6 != (long *)0x0);
        *(long **)(param_2 + 0x150) = plVar3;
        *(undefined1 *)(param_2 + 0x161) = 1;
        if ((plVar3 != plVar5) && (bVar1 = *(byte *)(plVar3 + 7), 1 < bVar1)) {
          do {
            if (plVar4 == *(long **)(param_2 + 0xa8)) goto LAB_10a9678bc;
            plVar5 = (long *)*plVar4;
            plVar6 = plVar4;
            if ((long *)*plVar4 == (long *)0x0) {
              do {
                plVar4 = (long *)plVar6[2];
                bVar2 = (long *)*plVar4 == plVar6;
                plVar6 = plVar4;
              } while (bVar2);
            }
            else {
              do {
                plVar4 = plVar5;
                plVar5 = (long *)plVar4[1];
              } while ((long *)plVar4[1] != (long *)0x0);
            }
          } while ((char)plVar4[7] != '\0');
          FUN_10a9679a8(param_2,plVar4);
          plVar3 = *(long **)(param_2 + 0x150);
          bVar1 = *(byte *)(plVar3 + 7);
LAB_10a9678bc:
          if (bVar1 == 3) {
            do {
              if (plVar3 == *(long **)(param_2 + 0xa8)) goto LAB_10a967924;
              plVar4 = (long *)*plVar3;
              plVar5 = plVar3;
              if ((long *)*plVar3 == (long *)0x0) {
                do {
                  plVar3 = (long *)plVar5[2];
                  bVar2 = (long *)*plVar3 == plVar5;
                  plVar5 = plVar3;
                } while (bVar2);
              }
              else {
                do {
                  plVar3 = plVar4;
                  plVar4 = (long *)plVar3[1];
                } while ((long *)plVar3[1] != (long *)0x0);
              }
            } while ((char)plVar3[7] != '\x02');
            FUN_10a9679a8(param_2);
          }
        }
      }
    }
LAB_10a967924:
    if (*(long **)(param_2 + 0x150) != (long *)(param_2 + 0xb0)) {
      FUN_10a9676d0(*(undefined8 *)(param_2 + 0x60));
      *(double *)(param_2 + 0x158) = param_1;
      plVar4 = *(long **)(param_2 + 0x150);
      while ((plVar4 != (long *)(param_2 + 0xb0) &&
             ((double)plVar4[4] <= *(double *)(param_2 + 0x158)))) {
        FUN_10a9679a8(param_2);
        plVar6 = (long *)(*(long **)(param_2 + 0x150))[1];
        plVar5 = *(long **)(param_2 + 0x150);
        if (plVar6 == (long *)0x0) {
          do {
            plVar4 = (long *)plVar5[2];
            bVar2 = (long *)*plVar4 != plVar5;
            plVar5 = plVar4;
          } while (bVar2);
        }
        else {
          do {
            plVar4 = plVar6;
            plVar6 = (long *)*plVar4;
          } while ((long *)*plVar4 != (long *)0x0);
        }
        *(long **)(param_2 + 0x150) = plVar4;
      }
    }
  }
  return;
}



/* Entry: 10a9679a8; end: 10a968037;  */

void FUN_10a9679a8(undefined **param_1,undefined **param_2,long param_3)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined1 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  code *pcVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  ulong uVar22;
  long *plVar23;
  undefined *puVar24;
  long *plVar25;
  undefined **unaff_x21;
  undefined8 *unaff_x22;
  long *plVar26;
  undefined ***unaff_x23;
  undefined **ppuVar27;
  undefined *unaff_x26;
  float fVar28;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  int aiStack_190 [2];
  undefined8 *puStack_188;
  int aiStack_180 [2];
  undefined8 *puStack_178;
  undefined8 **ppuStack_170;
  long *plStack_168;
  undefined1 *puStack_160;
  int **ppiStack_158;
  int *piStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined8 *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  float fStack_f0;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  long *plStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar3 = *(byte *)(param_3 + 0x38);
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      puVar7 = *(undefined **)(param_3 + 0x30);
      param_1 = *(undefined ***)(param_3 + 0x28);
      if (*(long *)(param_3 + 0x30) != 0) {
        plVar25 = (long *)(*(long *)(param_3 + 0x30) + 8);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar6) {
            *plVar25 = *plVar25 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar25 = (long *)param_2[0x1d];
      param_2[0x1d] = puVar7;
      param_2[0x1c] = (undefined *)param_1;
      if (plVar25 != (long *)0x0) {
        plVar26 = plVar25 + 1;
        do {
          lVar19 = *plVar26;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar6) {
            *plVar26 = lVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
        }
      }
      puVar7 = param_2[0x22];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
        pppuVar1 = (undefined ***)(param_3 + 0x28);
        plVar25 = &lStack_110;
        lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_108 = (undefined *)0x0;
        lStack_110 = 0;
        lStack_f8 = 0;
        ppuStack_100 = (undefined **)0x0;
        fStack_f0 = *(float *)(puVar7 + 0x38);
        pppuVar11 = *(undefined ****)(puVar7 + 0x20);
        FUN_10a98f588(&lStack_110);
        plVar26 = *(long **)(puVar7 + 0x28);
        if (plVar26 != (long *)0x0) {
          unaff_x23 = (undefined ***)0x9ddfea08eb382d69;
          do {
            puVar21 = puStack_108;
            uVar15 = plVar26[2];
            uVar22 = ((ulong)(uint)((int)uVar15 << 3) + 8 ^ uVar15 >> 0x20) * -0x622015f714c7d297;
            uVar22 = (uVar15 >> 0x20 ^ uVar22 >> 0x2f ^ uVar22) * -0x622015f714c7d297;
            puVar8 = (undefined *)((uVar22 ^ uVar22 >> 0x2f) * -0x622015f714c7d297);
            if (puStack_108 != (undefined *)0x0) {
              puVar20 = puStack_108 + -1;
              if (((ulong)puStack_108 & (ulong)puVar20) == 0) {
                unaff_x26 = (undefined *)((ulong)puVar8 & (ulong)puVar20);
              }
              else {
                unaff_x26 = puVar8;
                if (puStack_108 <= puVar8) {
                  uVar22 = 0;
                  if (puStack_108 != (undefined *)0x0) {
                    uVar22 = (ulong)puVar8 / (ulong)puStack_108;
                  }
                  unaff_x26 = puVar8 + -(uVar22 * (long)puStack_108);
                }
              }
              plVar23 = *(long **)(lStack_110 + (long)unaff_x26 * 8);
              if (plVar23 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar23 = (long *)*plVar23;
                    if (plVar23 == (long *)0x0) goto LAB_10a994344;
                    puVar24 = (undefined *)plVar23[1];
                    if (puVar24 != puVar8) break;
                    if (plVar23[2] == uVar15) goto LAB_10a9944a4;
                  }
                  if (((ulong)puStack_108 & (ulong)puVar20) == 0) {
                    puVar24 = (undefined *)((ulong)puVar24 & (ulong)puVar20);
                  }
                  else if (puStack_108 <= puVar24) {
                    uVar22 = 0;
                    if (puStack_108 != (undefined *)0x0) {
                      uVar22 = (ulong)puVar24 / (ulong)puStack_108;
                    }
                    puVar24 = puVar24 + -(uVar22 * (long)puStack_108);
                  }
                } while (puVar24 == unaff_x26);
              }
            }
LAB_10a994344:
            unaff_x21 = (undefined **)0x68;
            __Znwm();
            *unaff_x21 = (undefined *)0x0;
            unaff_x21[1] = puVar8;
            lVar19 = plVar26[3];
            puVar20 = (undefined *)plVar26[2];
            unaff_x21[3] = (undefined *)plVar26[3];
            unaff_x21[2] = puVar20;
            if (lVar19 != 0) {
              plVar23 = (long *)(lVar19 + 8);
              do {
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                if (bVar6) {
                  *plVar23 = *plVar23 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            ppuStack_c0 = unaff_x21 + 4;
            *(undefined1 *)(unaff_x21 + 0xc) = 3;
            if ((char)plVar26[0xc] == '\0') {
              uVar13 = 0;
            }
            else {
              pppuVar11 = (undefined ***)(plVar26 + 4);
              FUN_10a005398(&ppuStack_c0);
              uVar13 = (undefined1)plVar26[0xc];
            }
            *(undefined1 *)(unaff_x21 + 0xc) = uVar13;
            if ((puVar21 == (undefined *)0x0) ||
               (fStack_f0 * (float)puVar21 < (float)(lStack_f8 + 1))) {
              uVar15 = 1;
              if ((undefined *)0x2 < puVar21) {
                uVar15 = (ulong)(((ulong)puVar21 & (ulong)(puVar21 + -1)) != 0);
              }
              pppuVar11 = (undefined ***)(uVar15 | (long)puVar21 << 1);
              pppuVar12 = (undefined ***)(long)((float)(lStack_f8 + 1) / fStack_f0);
              if (pppuVar11 <= pppuVar12) {
                pppuVar11 = pppuVar12;
              }
              FUN_10a98f588(&lStack_110);
              puVar21 = puStack_108;
              if (((ulong)puStack_108 & (ulong)(puStack_108 + -1)) == 0) {
                unaff_x26 = (undefined *)((ulong)(puStack_108 + -1) & (ulong)puVar8);
              }
              else {
                unaff_x26 = puVar8;
                if (puStack_108 <= puVar8) {
                  uVar15 = 0;
                  if (puStack_108 != (undefined *)0x0) {
                    uVar15 = (ulong)puVar8 / (ulong)puStack_108;
                  }
                  unaff_x26 = puVar8 + -(uVar15 * (long)puStack_108);
                }
              }
            }
            plVar23 = *(long **)(lStack_110 + (long)unaff_x26 * 8);
            if (plVar23 == (long *)0x0) {
              *unaff_x21 = (undefined *)ppuStack_100;
              *(undefined ****)(lStack_110 + (long)unaff_x26 * 8) = &ppuStack_100;
              ppuStack_100 = unaff_x21;
              if (*unaff_x21 != (undefined *)0x0) {
                puVar8 = *(undefined **)(*unaff_x21 + 8);
                if (((ulong)puVar21 & (ulong)(puVar21 + -1)) == 0) {
                  puVar8 = (undefined *)((ulong)puVar8 & (ulong)(puVar21 + -1));
                }
                else if (puVar21 <= puVar8) {
                  uVar15 = 0;
                  if (puVar21 != (undefined *)0x0) {
                    uVar15 = (ulong)puVar8 / (ulong)puVar21;
                  }
                  puVar8 = puVar8 + -(uVar15 * (long)puVar21);
                }
                *(undefined ***)(lStack_110 + (long)puVar8 * 8) = unaff_x21;
              }
            }
            else {
              *unaff_x21 = (undefined *)*plVar23;
              *plVar23 = (long)unaff_x21;
            }
            lStack_f8 = lStack_f8 + 1;
LAB_10a9944a4:
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        puVar10 = (undefined8 *)0x0;
        if (ppuStack_100 != (undefined **)0x0) {
          puVar10 = &uStack_e0;
          unaff_x23 = &ppuStack_c0;
          ppuVar27 = ppuStack_100;
          do {
            pppuVar12 = (undefined ***)ppuVar27[2];
            puVar21 = puVar7 + 0x18;
            FUN_10a98ff98();
            pppuVar11 = pppuVar12;
            if (puVar21 != (undefined *)0x0) {
              if (*(char *)(ppuVar27 + 0xc) == '\x01') {
                pcVar16 = (code *)ppuVar27[4];
                ppuStack_b8 = *(undefined ***)(param_3 + 0x30);
                ppuStack_c0 = *pppuVar1;
                if (*(long *)(param_3 + 0x30) != 0) {
                  plVar26 = (long *)(*(long *)(param_3 + 0x30) + 8);
                  do {
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                    if (bVar6) {
                      *plVar26 = *plVar26 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                pppuVar11 = (undefined ***)(ppuVar27 + 4);
                (*pcVar16)(&ppuStack_c0);
                unaff_x21 = ppuStack_b8;
                if (ppuStack_b8 != (undefined **)0x0) {
                  ppuVar2 = ppuStack_b8 + 1;
                  do {
                    puVar21 = *ppuVar2;
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
                    if (bVar6) {
                      *ppuVar2 = puVar21 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
LAB_10a994584:
                  if (puVar21 == (undefined *)0x0) {
                    (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
                  }
                }
              }
              else if (*(char *)(ppuVar27 + 0xc) == '\x02') {
                unaff_x21 = ppuVar27 + 4;
                FUN_10a688b40();
                if (unaff_x21 == (undefined **)0x0) {
                  pppuVar11 = (undefined ***)0x0;
                  if (pppuVar12 != (undefined ***)0x0) {
                    puStack_b0 = ppuVar27[4];
                    puStack_a8 = ppuVar27[5];
                    if (puStack_a8 != (undefined *)0x0) {
                      plVar26 = (long *)(puStack_a8 + 8);
                      do {
                        cVar4 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                        if (bVar6) {
                          *plVar26 = *plVar26 + 1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                    }
                    ppuStack_d0 = *pppuVar1;
                    plVar26 = *(long **)(param_3 + 0x30);
                    if (plVar26 == (long *)0x0) {
                      plStack_98 = (long *)0x0;
                    }
                    else {
                      plVar23 = plVar26 + 1;
                      do {
                        cVar4 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                        if (bVar6) {
                          *plVar23 = *plVar23 + 1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      do {
                        cVar4 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                        if (bVar6) {
                          *plVar23 = *plVar23 + 1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                        plStack_98 = plVar26;
                      } while (cVar4 != '\0');
                    }
                    ppuStack_b8 = &PTR_FUN_110c34238;
                    ppuStack_d8 = (undefined **)0x0;
                    uStack_e0 = 0;
                    ppuStack_c0 = (undefined **)FUN_10a994904;
                    pppuVar11 = &ppuStack_c0;
                    plStack_c8 = plVar26;
                    ppuStack_a0 = ppuStack_d0;
                    FUN_10a4634ec(pppuVar12);
                    (*(code *)*ppuStack_b8)(&ppuStack_b8);
                    if (plVar26 != (long *)0x0) {
                      plVar23 = plVar26 + 1;
                      do {
                        lVar19 = *plVar23;
                        cVar4 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                        if (bVar6) {
                          *plVar23 = lVar19 + -1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if (lVar19 == 0) {
                        (**(code **)(*plVar26 + 0x10))(plVar26);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
                      }
                    }
                    unaff_x21 = ppuStack_d8;
                    if (ppuStack_d8 != (undefined **)0x0) {
                      ppuVar2 = ppuStack_d8 + 1;
                      do {
                        puVar21 = *ppuVar2;
                        cVar4 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
                        if (bVar6) {
                          *ppuVar2 = puVar21 + -1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      goto LAB_10a994584;
                    }
                  }
                }
                else {
                  *unaff_x21 = (undefined *)
                               CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
                  pppuVar11 = pppuVar1;
                  FUN_10a994774(ppuVar27[4]);
                  iVar5 = *(int *)((long)unaff_x21 + 4) + -1;
                  *(int *)((long)unaff_x21 + 4) = iVar5;
                  if (iVar5 == 0) {
                    *(undefined4 *)unaff_x21 = 0;
                  }
                }
              }
            }
            ppuVar27 = (undefined **)*ppuVar27;
          } while (ppuVar27 != (undefined **)0x0);
        }
        FUN_10a991ac4();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
          ___stack_chk_fail();
          (*(code *)*ppuStack_b8)(unaff_x23 + 1);
          func_0x00010a98ecf8(puVar10 + 2);
          func_0x00010a004dac(&uStack_e0);
          FUN_10a991ac4(&lStack_110);
          puVar14 = plVar25;
          __Unwind_Resume();
          pcStack_118 = FUN_10a994774;
          puStack_140 = puVar10;
          ppuStack_138 = unaff_x21;
          ppuStack_130 = (undefined **)puVar7;
          puStack_128 = plVar25;
          puStack_120 = &stack0xfffffffffffffff0;
          func_0x000109884c0c(&ppuStack_170,puVar14 + 1,*puVar14);
          func_0x000109884820(&puStack_198,&ppuStack_170,*puVar14);
          if (ppuStack_170 != (undefined8 **)0x0) {
            (*(code *)**ppuStack_170)();
          }
          (**(code **)(*(long *)*puVar14 + 0x30))(&puStack_1a0);
          plVar25 = (long *)*puVar14;
          func_0x00010a98e928(aiStack_180,plVar25,*pppuVar11,pppuVar11[1]);
          uStack_148 = 1;
          piStack_150 = aiStack_180;
          (**(code **)(*plVar25 + 0x58))(plVar25);
          ppuStack_170 = &puStack_198;
          ppiStack_158 = &piStack_150;
          plStack_168 = plVar25;
          puStack_160 = (undefined1 *)&puStack_1a0;
          func_0x0001098960c0(aiStack_190);
          if ((3 < aiStack_190[0]) && (puStack_188 != (undefined8 *)0x0)) {
            (**(code **)*puStack_188)();
          }
          if ((3 < aiStack_180[0]) && (puStack_178 != (undefined8 *)0x0)) {
            (**(code **)*puStack_178)();
          }
          if (puStack_1a0 != (undefined8 *)0x0) {
            (**(code **)*puStack_1a0)();
          }
          if (puStack_198 != (undefined8 *)0x0) {
            (**(code **)*puStack_198)();
          }
          return;
        }
        return;
      }
    }
    else {
      if (bVar3 != 1) goto FUN_10a9677ac;
      FUN_10a994214(param_2[0x24],param_3 + 0x28);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
        plVar25 = (long *)param_2[0x1d];
        param_2[0x1c] = (undefined *)0x0;
        param_2[0x1d] = (undefined *)0x0;
        if (plVar25 != (long *)0x0) {
          plVar26 = plVar25 + 1;
          do {
            lVar19 = *plVar26;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar6) {
              *plVar26 = lVar19 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar19 == 0) {
            (**(code **)(*plVar25 + 0x10))(plVar25);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar25);
            return;
          }
        }
        return;
      }
    }
  }
  else {
    if (bVar3 == 2) {
      lVar19 = 0x130;
    }
    else {
      if (bVar3 != 3) goto FUN_10a9677ac;
      lVar19 = 0x140;
    }
    lVar19 = *(long *)((long)param_2 + lVar19);
    puStack_108 = (undefined *)0x0;
    lStack_110 = 0;
    lStack_f8 = 0;
    ppuStack_100 = (undefined **)0x0;
    fStack_f0 = *(float *)(lVar19 + 0x38);
    param_1 = (undefined **)(ulong)(uint)fStack_f0;
    FUN_10a990608(&lStack_110,*(undefined8 *)(lVar19 + 0x20));
    plVar25 = *(long **)(lVar19 + 0x28);
    if (plVar25 != (long *)0x0) {
      unaff_x23 = (undefined ***)0x9ddfea08eb382d69;
      do {
        puVar7 = puStack_108;
        uVar15 = plVar25[2];
        uVar22 = ((ulong)(uint)((int)uVar15 << 3) + 8 ^ uVar15 >> 0x20) * -0x622015f714c7d297;
        uVar22 = (uVar15 >> 0x20 ^ uVar22 >> 0x2f ^ uVar22) * -0x622015f714c7d297;
        puVar21 = (undefined *)((uVar22 ^ uVar22 >> 0x2f) * -0x622015f714c7d297);
        if (puStack_108 != (undefined *)0x0) {
          puVar8 = puStack_108 + -1;
          if (((ulong)puStack_108 & (ulong)puVar8) == 0) {
            unaff_x26 = (undefined *)((ulong)puVar21 & (ulong)puVar8);
          }
          else {
            unaff_x26 = puVar21;
            if (puStack_108 <= puVar21) {
              uVar22 = 0;
              if (puStack_108 != (undefined *)0x0) {
                uVar22 = (ulong)puVar21 / (ulong)puStack_108;
              }
              unaff_x26 = puVar21 + -(uVar22 * (long)puStack_108);
            }
          }
          plVar26 = *(long **)(lStack_110 + (long)unaff_x26 * 8);
          if (plVar26 != (long *)0x0) {
            do {
              while( true ) {
                plVar26 = (long *)*plVar26;
                if (plVar26 == (long *)0x0) goto LAB_10a967bfc;
                puVar20 = (undefined *)plVar26[1];
                if (puVar20 != puVar21) break;
                if (plVar26[2] == uVar15) goto LAB_10a967d5c;
              }
              if (((ulong)puStack_108 & (ulong)puVar8) == 0) {
                puVar20 = (undefined *)((ulong)puVar20 & (ulong)puVar8);
              }
              else if (puStack_108 <= puVar20) {
                uVar22 = 0;
                if (puStack_108 != (undefined *)0x0) {
                  uVar22 = (ulong)puVar20 / (ulong)puStack_108;
                }
                puVar20 = puVar20 + -(uVar22 * (long)puStack_108);
              }
            } while (puVar20 == unaff_x26);
          }
        }
LAB_10a967bfc:
        param_2 = (undefined **)0x68;
        __Znwm();
        *param_2 = (undefined *)0x0;
        param_2[1] = puVar21;
        lVar18 = plVar25[3];
        puVar8 = (undefined *)plVar25[2];
        param_2[3] = (undefined *)plVar25[3];
        param_2[2] = puVar8;
        if (lVar18 != 0) {
          plVar26 = (long *)(lVar18 + 8);
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar6) {
              *plVar26 = *plVar26 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        ppuStack_c0 = param_2 + 4;
        *(undefined1 *)(param_2 + 0xc) = 3;
        if ((char)plVar25[0xc] == '\0') {
          uVar13 = 0;
        }
        else {
          FUN_10a005398(&ppuStack_c0,plVar25 + 4);
          uVar13 = (undefined1)plVar25[0xc];
        }
        *(undefined1 *)(param_2 + 0xc) = uVar13;
        fVar28 = (float)(lStack_f8 + 1);
        param_1 = (undefined **)(ulong)(uint)fVar28;
        if ((puVar7 == (undefined *)0x0) || (fStack_f0 * (float)puVar7 < fVar28)) {
          uVar15 = 1;
          if ((undefined *)0x2 < puVar7) {
            uVar15 = (ulong)(((ulong)puVar7 & (ulong)(puVar7 + -1)) != 0);
          }
          uVar15 = uVar15 | (long)puVar7 << 1;
          param_1 = (undefined **)(ulong)(uint)(fVar28 / fStack_f0);
          uVar22 = (ulong)(fVar28 / fStack_f0);
          if (uVar15 <= uVar22) {
            uVar15 = uVar22;
          }
          FUN_10a990608(&lStack_110,uVar15);
          puVar7 = puStack_108;
          if (((ulong)puStack_108 & (ulong)(puStack_108 + -1)) == 0) {
            unaff_x26 = (undefined *)((ulong)(puStack_108 + -1) & (ulong)puVar21);
          }
          else {
            unaff_x26 = puVar21;
            if (puStack_108 <= puVar21) {
              uVar15 = 0;
              if (puStack_108 != (undefined *)0x0) {
                uVar15 = (ulong)puVar21 / (ulong)puStack_108;
              }
              unaff_x26 = puVar21 + -(uVar15 * (long)puStack_108);
            }
          }
        }
        plVar26 = *(long **)(lStack_110 + (long)unaff_x26 * 8);
        if (plVar26 == (long *)0x0) {
          *param_2 = (undefined *)ppuStack_100;
          *(undefined ****)(lStack_110 + (long)unaff_x26 * 8) = &ppuStack_100;
          ppuStack_100 = param_2;
          if (*param_2 != (undefined *)0x0) {
            puVar21 = *(undefined **)(*param_2 + 8);
            if (((ulong)puVar7 & (ulong)(puVar7 + -1)) == 0) {
              puVar21 = (undefined *)((ulong)puVar21 & (ulong)(puVar7 + -1));
            }
            else if (puVar7 <= puVar21) {
              uVar15 = 0;
              if (puVar7 != (undefined *)0x0) {
                uVar15 = (ulong)puVar21 / (ulong)puVar7;
              }
              puVar21 = puVar21 + -(uVar15 * (long)puVar7);
            }
            *(undefined ***)(lStack_110 + (long)puVar21 * 8) = param_2;
          }
        }
        else {
          *param_2 = (undefined *)*plVar26;
          *plVar26 = (long)param_2;
        }
        lStack_f8 = lStack_f8 + 1;
LAB_10a967d5c:
        plVar25 = (long *)*plVar25;
      } while (plVar25 != (long *)0x0);
    }
    unaff_x22 = (undefined8 *)0x0;
    if (ppuStack_100 != (undefined **)0x0) {
      unaff_x22 = &uStack_e0;
      unaff_x23 = &ppuStack_c0;
      ppuVar27 = ppuStack_100;
      do {
        puVar7 = ppuVar27[2];
        lVar18 = lVar19 + 0x18;
        FUN_10a991018();
        if (lVar18 != 0) {
          if (*(char *)(ppuVar27 + 0xc) == '\x01') {
            pcVar16 = (code *)ppuVar27[4];
            ppuStack_b8 = *(undefined ***)(param_3 + 0x30);
            param_1 = *(undefined ***)(param_3 + 0x28);
            if (*(long *)(param_3 + 0x30) != 0) {
              plVar25 = (long *)(*(long *)(param_3 + 0x30) + 8);
              do {
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar6) {
                  *plVar25 = *plVar25 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            ppuStack_c0 = param_1;
            (*pcVar16)(&ppuStack_c0,ppuVar27 + 4);
            param_2 = ppuStack_b8;
            if (ppuStack_b8 != (undefined **)0x0) {
              ppuVar2 = ppuStack_b8 + 1;
              do {
                puVar7 = *ppuVar2;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
                if (bVar6) {
                  *ppuVar2 = puVar7 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
LAB_10a967e3c:
              if (puVar7 == (undefined *)0x0) {
                (**(code **)(*param_2 + 0x10))(param_2);
                __ZNSt3__119__shared_weak_count14__release_weakEv(param_2);
              }
            }
          }
          else if (*(char *)(ppuVar27 + 0xc) == '\x02') {
            param_2 = ppuVar27 + 4;
            FUN_10a688b40();
            if (param_2 == (undefined **)0x0) {
              if (puVar7 != (undefined *)0x0) {
                puStack_b0 = ppuVar27[4];
                puStack_a8 = ppuVar27[5];
                if (puStack_a8 != (undefined *)0x0) {
                  plVar25 = (long *)(puStack_a8 + 8);
                  do {
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar6) {
                      *plVar25 = *plVar25 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                ppuStack_d0 = *(undefined ***)(param_3 + 0x28);
                plVar25 = *(long **)(param_3 + 0x30);
                if (plVar25 == (long *)0x0) {
                  plStack_98 = (long *)0x0;
                }
                else {
                  plVar26 = plVar25 + 1;
                  do {
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                    if (bVar6) {
                      *plVar26 = *plVar26 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  do {
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                    if (bVar6) {
                      *plVar26 = *plVar26 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                    plStack_98 = plVar25;
                  } while (cVar4 != '\0');
                }
                ppuStack_b8 = &PTR_FUN_110c34250;
                ppuStack_d8 = (undefined **)0x0;
                uStack_e0 = 0;
                ppuStack_c0 = (undefined **)FUN_10a994b0c;
                plStack_c8 = plVar25;
                ppuStack_a0 = ppuStack_d0;
                FUN_10a4634ec(puVar7,&ppuStack_c0);
                (*(code *)*ppuStack_b8)(&ppuStack_b8);
                if (plVar25 != (long *)0x0) {
                  plVar26 = plVar25 + 1;
                  do {
                    lVar18 = *plVar26;
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                    if (bVar6) {
                      *plVar26 = lVar18 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (lVar18 == 0) {
                    (**(code **)(*plVar25 + 0x10))(plVar25);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
                  }
                }
                param_2 = ppuStack_d8;
                if (ppuStack_d8 != (undefined **)0x0) {
                  ppuVar2 = ppuStack_d8 + 1;
                  do {
                    puVar7 = *ppuVar2;
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
                    if (bVar6) {
                      *ppuVar2 = puVar7 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  goto LAB_10a967e3c;
                }
              }
            }
            else {
              param_1 = (undefined **)CONCAT44((int)((ulong)*param_2 >> 0x20) + 1,(int)*param_2 + 1)
              ;
              *param_2 = (undefined *)param_1;
              FUN_10a99497c(ppuVar27[4],param_3 + 0x28);
              iVar5 = *(int *)((long)param_2 + 4) + -1;
              *(int *)((long)param_2 + 4) = iVar5;
              if (iVar5 == 0) {
                *(undefined4 *)param_2 = 0;
              }
            }
          }
        }
        ppuVar27 = (undefined **)*ppuVar27;
      } while (ppuVar27 != (undefined **)0x0);
    }
    FUN_10a991e28(&lStack_110);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
  }
  ___stack_chk_fail();
FUN_10a9677ac:
  puVar7 = &UNK_10f68728d;
  FUN_10a05bab8();
  (*(code *)*ppuStack_b8)(unaff_x23 + 1);
  func_0x00010a98eca0(unaff_x22 + 2);
  func_0x00010a004dac(&uStack_e0);
  FUN_10a991e28(&lStack_110);
  puVar21 = puVar7;
  __Unwind_Resume();
  puVar8 = puVar21 + -0x18;
  if (puVar21[0x148] == '\x01') {
    pcStack_118 = FUN_10a968038;
    lVar19 = *(long *)(puVar21 + 0x48);
    ppuStack_130 = param_2;
    puStack_128 = (undefined8 *)puVar7;
    puStack_120 = &stack0xfffffffffffffff0;
    if ((((*(char *)(lVar19 + 0x18) == '\x01') && (*(char *)(lVar19 + 0x19) != '\x01')) ||
        (FUN_10a969bc0(lVar19), *(char *)(lVar19 + 0x38) == '\x01')) &&
       (*(long *)(puVar21 + 0xa0) != 0)) {
      if ((puVar21[0x149] & 1) == 0) {
        FUN_10a9676d0(*(undefined8 *)(puVar21 + 0x48));
        puVar14 = (undefined8 *)(puVar21 + 0x98);
        puVar17 = (undefined8 *)*puVar14;
        *(undefined ***)(puVar21 + 0x140) = param_1;
        puVar10 = puVar14;
        if (puVar17 == (undefined8 *)0x0) {
          *(undefined8 **)(puVar21 + 0x138) = puVar14;
          puVar21[0x149] = 1;
        }
        else {
          do {
            lVar19 = 0;
            puVar9 = puVar17;
            if ((double)puVar17[4] <= (double)param_1) {
              lVar19 = 8;
              puVar9 = puVar10;
            }
            puVar17 = *(undefined8 **)((long)puVar17 + lVar19);
            puVar10 = puVar9;
          } while (puVar17 != (undefined8 *)0x0);
          *(undefined8 **)(puVar21 + 0x138) = puVar9;
          puVar21[0x149] = 1;
          if ((puVar9 != puVar14) && (bVar3 = *(byte *)(puVar9 + 7), 1 < bVar3)) {
            do {
              if (puVar10 == *(undefined8 **)(puVar21 + 0x90)) goto LAB_10a9678bc;
              puVar14 = (undefined8 *)*puVar10;
              puVar17 = puVar10;
              if ((undefined8 *)*puVar10 == (undefined8 *)0x0) {
                do {
                  puVar10 = (undefined8 *)puVar17[2];
                  bVar6 = (undefined8 *)*puVar10 == puVar17;
                  puVar17 = puVar10;
                } while (bVar6);
              }
              else {
                do {
                  puVar10 = puVar14;
                  puVar14 = (undefined8 *)puVar10[1];
                } while ((undefined8 *)puVar10[1] != (undefined8 *)0x0);
              }
            } while (*(char *)(puVar10 + 7) != '\0');
            FUN_10a9679a8(puVar8,puVar10);
            puVar9 = *(undefined8 **)(puVar21 + 0x138);
            bVar3 = *(byte *)(puVar9 + 7);
LAB_10a9678bc:
            if (bVar3 == 3) {
              do {
                if (puVar9 == *(undefined8 **)(puVar21 + 0x90)) goto LAB_10a967924;
                puVar10 = (undefined8 *)*puVar9;
                puVar14 = puVar9;
                if ((undefined8 *)*puVar9 == (undefined8 *)0x0) {
                  do {
                    puVar9 = (undefined8 *)puVar14[2];
                    bVar6 = (undefined8 *)*puVar9 == puVar14;
                    puVar14 = puVar9;
                  } while (bVar6);
                }
                else {
                  do {
                    puVar9 = puVar10;
                    puVar10 = (undefined8 *)puVar9[1];
                  } while ((undefined8 *)puVar9[1] != (undefined8 *)0x0);
                }
              } while (*(char *)(puVar9 + 7) != '\x02');
              FUN_10a9679a8(puVar8);
            }
          }
        }
      }
LAB_10a967924:
      if (*(undefined8 **)(puVar21 + 0x138) != (undefined8 *)(puVar21 + 0x98)) {
        FUN_10a9676d0(*(undefined8 *)(puVar21 + 0x48));
        *(undefined ***)(puVar21 + 0x140) = param_1;
        puVar10 = *(undefined8 **)(puVar21 + 0x138);
        while ((puVar10 != (undefined8 *)(puVar21 + 0x98) &&
               ((double)puVar10[4] <= *(double *)(puVar21 + 0x140)))) {
          FUN_10a9679a8(puVar8);
          puVar17 = (undefined8 *)(*(undefined8 **)(puVar21 + 0x138))[1];
          puVar14 = *(undefined8 **)(puVar21 + 0x138);
          if (puVar17 == (undefined8 *)0x0) {
            do {
              puVar10 = (undefined8 *)puVar14[2];
              bVar6 = (undefined8 *)*puVar10 != puVar14;
              puVar14 = puVar10;
            } while (bVar6);
          }
          else {
            do {
              puVar10 = puVar17;
              puVar17 = (undefined8 *)*puVar10;
            } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
          }
          *(undefined8 **)(puVar21 + 0x138) = puVar10;
        }
      }
    }
  }
  return;
}



/* Entry: 10a968038; end: 10a96803f;  */

void FUN_10a968038(double param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  lVar3 = param_2 + -0x18;
  if ((*(char *)(param_2 + 0x148) == '\x01') &&
     ((((lVar8 = *(long *)(param_2 + 0x48), *(char *)(lVar8 + 0x18) == '\x01' &&
        (*(char *)(lVar8 + 0x19) != '\x01')) ||
       (FUN_10a969bc0(lVar8), *(char *)(lVar8 + 0x38) == '\x01')) &&
      (*(long *)(param_2 + 0xa0) != 0)))) {
    if ((*(byte *)(param_2 + 0x149) & 1) == 0) {
      FUN_10a9676d0(*(undefined8 *)(param_2 + 0x48));
      plVar6 = (long *)(param_2 + 0x98);
      plVar7 = (long *)*plVar6;
      *(double *)(param_2 + 0x140) = param_1;
      plVar5 = plVar6;
      if (plVar7 == (long *)0x0) {
        *(long **)(param_2 + 0x138) = plVar6;
        *(undefined1 *)(param_2 + 0x149) = 1;
      }
      else {
        do {
          lVar8 = 0;
          plVar4 = plVar7;
          if ((double)plVar7[4] <= param_1) {
            lVar8 = 8;
            plVar4 = plVar5;
          }
          plVar7 = *(long **)((long)plVar7 + lVar8);
          plVar5 = plVar4;
        } while (plVar7 != (long *)0x0);
        *(long **)(param_2 + 0x138) = plVar4;
        *(undefined1 *)(param_2 + 0x149) = 1;
        if ((plVar4 != plVar6) && (bVar1 = *(byte *)(plVar4 + 7), 1 < bVar1)) {
          do {
            if (plVar5 == *(long **)(param_2 + 0x90)) goto LAB_10a9678bc;
            plVar6 = (long *)*plVar5;
            plVar7 = plVar5;
            if ((long *)*plVar5 == (long *)0x0) {
              do {
                plVar5 = (long *)plVar7[2];
                bVar2 = (long *)*plVar5 == plVar7;
                plVar7 = plVar5;
              } while (bVar2);
            }
            else {
              do {
                plVar5 = plVar6;
                plVar6 = (long *)plVar5[1];
              } while ((long *)plVar5[1] != (long *)0x0);
            }
          } while ((char)plVar5[7] != '\0');
          FUN_10a9679a8(lVar3,plVar5);
          plVar4 = *(long **)(param_2 + 0x138);
          bVar1 = *(byte *)(plVar4 + 7);
LAB_10a9678bc:
          if (bVar1 == 3) {
            do {
              if (plVar4 == *(long **)(param_2 + 0x90)) goto LAB_10a967924;
              plVar5 = (long *)*plVar4;
              plVar6 = plVar4;
              if ((long *)*plVar4 == (long *)0x0) {
                do {
                  plVar4 = (long *)plVar6[2];
                  bVar2 = (long *)*plVar4 == plVar6;
                  plVar6 = plVar4;
                } while (bVar2);
              }
              else {
                do {
                  plVar4 = plVar5;
                  plVar5 = (long *)plVar4[1];
                } while ((long *)plVar4[1] != (long *)0x0);
              }
            } while ((char)plVar4[7] != '\x02');
            FUN_10a9679a8(lVar3);
          }
        }
      }
    }
LAB_10a967924:
    if (*(long **)(param_2 + 0x138) != (long *)(param_2 + 0x98)) {
      FUN_10a9676d0(*(undefined8 *)(param_2 + 0x48));
      *(double *)(param_2 + 0x140) = param_1;
      plVar5 = *(long **)(param_2 + 0x138);
      while ((plVar5 != (long *)(param_2 + 0x98) &&
             ((double)plVar5[4] <= *(double *)(param_2 + 0x140)))) {
        FUN_10a9679a8(lVar3);
        plVar7 = (long *)(*(long **)(param_2 + 0x138))[1];
        plVar6 = *(long **)(param_2 + 0x138);
        if (plVar7 == (long *)0x0) {
          do {
            plVar5 = (long *)plVar6[2];
            bVar2 = (long *)*plVar5 != plVar6;
            plVar6 = plVar5;
          } while (bVar2);
        }
        else {
          do {
            plVar5 = plVar7;
            plVar7 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
        *(long **)(param_2 + 0x138) = plVar5;
      }
    }
  }
  return;
}



/* Entry: 10a968040; end: 10a968187;  */

void FUN_10a968040(long *param_1,long param_2)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar6 = *(long *)(param_2 + 0x60);
  if (((*(char *)(lVar6 + 0x18) == '\x01') && (*(char *)(lVar6 + 0x19) != '\x01')) ||
     (FUN_10a969bc0(lVar6), *(char *)(lVar6 + 0x38) == '\x01')) {
    plVar7 = *(long **)(param_2 + 0x150);
    if (plVar7 != (long *)(param_2 + 0xb0)) {
      do {
        if (*(byte *)(plVar7 + 7) == 0) {
          lVar6 = plVar7[5];
          lVar4 = plVar7[6];
          if (lVar4 != 0) {
            plVar5 = (long *)(lVar4 + 8);
            do {
              cVar1 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar3) {
                *plVar5 = *plVar5 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
        }
        else {
          if (3 < *(byte *)(plVar7 + 7)) {
            FUN_10a05bab8(&UNK_10f68728d);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a968170);
            (*pcVar2)();
          }
          lVar6 = 0;
          lVar4 = 0;
        }
        plVar5 = (long *)param_1[1];
        *param_1 = lVar6;
        param_1[1] = lVar4;
        if (plVar5 != (long *)0x0) {
          plVar8 = plVar5 + 1;
          do {
            lVar6 = *plVar8;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar6 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
        plVar5 = (long *)plVar7[1];
        plVar8 = plVar7;
        if ((long *)plVar7[1] == (long *)0x0) {
          do {
            plVar7 = (long *)plVar8[2];
            bVar3 = (long *)*plVar7 != plVar8;
            plVar8 = plVar7;
          } while (bVar3);
        }
        else {
          do {
            plVar7 = plVar5;
            plVar5 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
      } while ((plVar7 != (long *)(param_2 + 0xb0)) && (*param_1 == 0));
    }
  }
  return;
}



/* Entry: 10a968188; end: 10a968213;  */

void FUN_10a968188(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  FUN_10a968214(param_1 + 0xc0);
  func_0x00010a968270(param_1 + 0xe0);
  puVar6 = (undefined8 *)(param_1 + 0xb0);
  func_0x00010a991f24(*puVar6);
  *puVar6 = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 **)(param_1 + 0xa8) = puVar6;
  *(undefined8 **)(param_1 + 0x150) = puVar6;
  plVar5 = *(long **)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
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
  *(undefined1 *)(param_1 + 0x161) = 0;
  return;
}



/* Entry: 10a968214; end: 10a9682cb;  */

void FUN_10a968214(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
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



/* Entry: 10a9682cc; end: 10a968607;  */

void FUN_10a9682cc(long *param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x26;
  long *plVar14;
  float fVar15;
  long lVar16;
  long *plStack_68;
  
  plVar4 = (long *)0x30;
  __Znwm();
  plVar6 = plVar4 + 1;
  *plVar6 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110b9fc88;
  plVar14 = plVar4 + 3;
  *plVar14 = (long)&PTR_FUN_110c0f9b0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  uVar9 = ((ulong)(uint)((int)plVar14 << 3) + 8 ^ (ulong)plVar14 >> 0x20) * -0x622015f714c7d297;
  uVar9 = ((ulong)plVar14 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
  uVar13 = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
  uVar9 = *(ulong *)(param_2 + 0x20);
  if (uVar9 != 0) {
    uVar7 = uVar9 - 1;
    if ((uVar9 & uVar7) == 0) {
      unaff_x26 = uVar13 & uVar7;
    }
    else {
      unaff_x26 = uVar13;
      if (uVar9 <= uVar13) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar13 / uVar9;
        }
        unaff_x26 = uVar13 - uVar11 * uVar9;
      }
    }
    puVar10 = *(undefined8 **)(*(long *)(param_2 + 0x18) + unaff_x26 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (plVar12 = (long *)*puVar10; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        uVar11 = plVar12[1];
        if (uVar11 == uVar13) {
          if ((long *)plVar12[2] == plVar14) goto LAB_10a968444;
        }
        else {
          if ((uVar9 & uVar7) == 0) {
            uVar11 = uVar11 & uVar7;
          }
          else if (uVar9 <= uVar11) {
            uVar3 = 0;
            if (uVar9 != 0) {
              uVar3 = uVar11 / uVar9;
            }
            uVar11 = uVar11 - uVar3 * uVar9;
          }
          if (uVar11 != unaff_x26) break;
        }
      }
    }
  }
  plVar12 = (long *)0x68;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = uVar13;
  plVar12[2] = (long)plVar14;
  plVar12[3] = (long)plVar4;
  plStack_68 = plVar12 + 4;
  *(undefined1 *)(plVar12 + 0xc) = 3;
  if (*(char *)(param_3 + 0x40) == '\0') {
    uVar5 = 0;
  }
  else {
    FUN_10a05fae4(&plStack_68,param_3);
    uVar5 = *(undefined1 *)(param_3 + 0x40);
  }
  *(undefined1 *)(plVar12 + 0xc) = uVar5;
  fVar15 = (float)(*(long *)(param_2 + 0x30) + 1);
  if ((uVar9 == 0) || (*(float *)(param_2 + 0x38) * (float)uVar9 < fVar15)) {
    uVar7 = 1;
    if (2 < uVar9) {
      uVar7 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar7 = uVar7 | uVar9 << 1;
    uVar9 = (ulong)(fVar15 / *(float *)(param_2 + 0x38));
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    FUN_10a991ff4(param_2 + 0x18,uVar7);
    uVar9 = *(ulong *)(param_2 + 0x20);
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x26 = uVar9 - 1 & uVar13;
    }
    else {
      unaff_x26 = uVar13;
      if (uVar9 <= uVar13) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar13 / uVar9;
        }
        unaff_x26 = uVar13 - uVar7 * uVar9;
      }
    }
  }
  lVar8 = *(long *)(param_2 + 0x18);
  plVar4 = *(long **)(lVar8 + unaff_x26 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)(param_2 + 0x28);
    *plVar12 = *plVar4;
    *plVar4 = (long)plVar12;
    *(long **)(lVar8 + unaff_x26 * 8) = plVar4;
    if (*plVar12 != 0) {
      uVar13 = *(ulong *)(*plVar12 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar13 = uVar13 & uVar9 - 1;
      }
      else if (uVar9 <= uVar13) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar13 / uVar9;
        }
        uVar13 = uVar13 - uVar7 * uVar9;
      }
      plVar4 = (long *)(*(long *)(param_2 + 0x18) + uVar13 * 8);
      goto LAB_10a96856c;
    }
  }
  else {
    *plVar12 = *plVar4;
LAB_10a96856c:
    *plVar4 = (long)plVar12;
  }
  *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + 1;
LAB_10a96857c:
  if (*(char *)(*(long *)(param_2 + 0x48) + 8) == '\x01') {
    (**(code **)(param_2 + 0x40))(param_2);
  }
  lVar8 = plVar12[3];
  lVar16 = plVar12[2];
  param_1[1] = plVar12[3];
  *param_1 = lVar16;
  if (lVar8 != 0) {
    plVar4 = (long *)(lVar8 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
LAB_10a968444:
  do {
    lVar8 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar8 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  goto LAB_10a96857c;
}



/* Entry: 10a968608; end: 10a968c1f;  */

/* WARNING: Removing unreachable block (ram,0x00010a96875c) */
/* WARNING: Removing unreachable block (ram,0x00010a9687cc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a968608(undefined8 *******param_1,long *param_2)

{
  undefined8 ******ppppppuVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 ******ppppppuVar7;
  undefined8 *******pppppppuVar8;
  undefined1 *puVar9;
  undefined **ppuVar10;
  undefined8 in_x7;
  long lVar11;
  undefined8 *****pppppuVar12;
  undefined *puVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******unaff_x22;
  long *plVar15;
  undefined8 *******pppppppuVar16;
  undefined8 *******pppppppuVar17;
  undefined **ppuVar18;
  undefined8 *******pppppppuStack_1d0;
  undefined8 *****pppppuStack_1c8;
  undefined8 *****pppppuStack_1c0;
  long lStack_1b0;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined8 *******pppppppuStack_178;
  ulong uStack_170;
  byte bStack_161;
  undefined1 uStack_160;
  undefined8 *******pppppppuStack_158;
  undefined8 ******ppppppuStack_150;
  undefined8 ******ppppppuStack_148;
  undefined8 *****pppppuStack_140;
  undefined8 uStack_138;
  long alStack_130 [7];
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 ******ppppppuStack_b0;
  undefined8 ******ppppppuStack_a8;
  undefined8 *****apppppuStack_a0 [7];
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *param_2;
  pppppppuVar16 = param_1;
  if (lVar11 == 0) goto LAB_10a968af8;
  pppppppuVar16 = param_1 + 0x18;
  ppppppuVar7 = *pppppppuVar16;
  if (ppppppuVar7 == (undefined8 ******)0x0) {
LAB_10a9686b4:
    FUN_10a968188(param_1);
    FUN_10a07e58c(param_1[0x20]);
  }
  else {
    plVar15 = (long *)param_2[1];
    if (plVar15 != (long *)0x0) {
      plVar2 = plVar15 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = *plVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lStack_1b0 = lVar11;
    plStack_1a8 = plVar15;
    FUN_10a968d78(ppppppuVar7,&lStack_1b0);
    if (plVar15 != (long *)0x0) {
      plVar2 = plVar15 + 1;
      do {
        lVar11 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
    if (((ulong)ppppppuVar7 & 1) == 0) goto LAB_10a9686b4;
  }
  FUN_10a968ea8(pppppppuVar16,*param_2,param_2[1]);
  *(undefined1 *)((long)param_1 + 0x161) = 0;
  ppppppuVar7 = param_1[0x18];
  if (*(char *)((long)ppppppuVar7 + 0x2f) < '\0') {
    func_0x000107c3192c(&ppppppuStack_b0,ppppppuVar7[3],ppppppuVar7[4]);
  }
  else {
    ppppppuStack_a8 = (undefined8 ******)ppppppuVar7[4];
    ppppppuStack_b0 = (undefined8 ******)ppppppuVar7[3];
    apppppuStack_a0[0] = ppppppuVar7[5];
  }
  pppppppuVar14 = param_1 + 0x13;
  pppppppuVar17 = (undefined8 *******)*pppppppuVar14;
  unaff_x22 = pppppppuVar14;
  if (pppppppuVar17 == (undefined8 *******)0x0) {
LAB_10a968750:
    unaff_x22 = pppppppuVar14;
  }
  else {
    do {
      pppppppuVar8 = pppppppuVar17 + 4;
      FUN_10a003e3c(pppppppuVar8,&ppppppuStack_b0);
      if (-1 < (char)pppppppuVar8) {
        unaff_x22 = pppppppuVar17;
      }
      pppppppuVar17 = *(undefined8 ********)((long)pppppppuVar17 + ((ulong)pppppppuVar8 >> 4 & 8));
    } while (pppppppuVar17 != (undefined8 *******)0x0);
    if (unaff_x22 == pppppppuVar14) goto LAB_10a968750;
    ppppppuVar7 = &ppppppuStack_b0;
    FUN_10a003e3c(ppppppuVar7,unaff_x22 + 4);
    if (((uint)ppppppuVar7 >> 7 & 1) != 0) goto LAB_10a968750;
  }
  if (pppppppuVar14 != unaff_x22) {
    ppppppuVar7 = *pppppppuVar16;
    if (*(char *)((long)ppppppuVar7 + 0x2f) < '\0') {
      func_0x000107c3192c(&ppppppuStack_b0,ppppppuVar7[3],ppppppuVar7[4]);
    }
    else {
      ppppppuStack_a8 = (undefined8 ******)ppppppuVar7[4];
      ppppppuStack_b0 = (undefined8 ******)ppppppuVar7[3];
      apppppuStack_a0[0] = ppppppuVar7[5];
    }
    FUN_10a968f1c(param_1,&ppppppuStack_b0);
    pppppppuVar16 = param_1;
    goto LAB_10a968af8;
  }
  ppppppuVar7 = *pppppppuVar16;
  if (*(char *)((long)ppppppuVar7 + 0x2f) < '\0') {
    func_0x000107c3192c(&pppppppuStack_1d0,ppppppuVar7[3],ppppppuVar7[4]);
  }
  else {
    pppppuStack_1c8 = ppppppuVar7[4];
    pppppppuStack_1d0 = (undefined8 *******)ppppppuVar7[3];
    pppppuStack_1c0 = ppppppuVar7[5];
  }
  pppppppuVar16 = (undefined8 *******)*pppppppuVar14;
  pppppppuVar17 = pppppppuVar14;
  if (pppppppuVar16 == (undefined8 *******)0x0) {
LAB_10a96882c:
    ppppppuStack_150._0_1_ = 0;
    unaff_x22 = &ppppppuStack_150;
    ppppppuStack_148 = (undefined8 ******)0x0;
    pppppppuStack_158 = (undefined8 *******)0x0;
    uStack_160 = 3;
    pppppppuVar16 = &pppppppuStack_1d0;
    func_0x00010938229c();
    puVar9 = (undefined1 *)&ppppppuStack_150;
    pppppppuStack_158 = pppppppuVar16;
    func_0x00010945a80c(puVar9,&UNK_10f68582f);
    uVar4 = *puVar9;
    *puVar9 = uStack_160;
    ppppppuVar7 = *(undefined8 *******)(puVar9 + 8);
    uStack_160 = uVar4;
    *(undefined8 ********)(puVar9 + 8) = pppppppuStack_158;
    pppppppuStack_158 = (undefined8 *******)ppppppuVar7;
    func_0x000109380ffc(&pppppppuStack_158);
    FUN_10a0c32e4(&pppppppuStack_178,&ppppppuStack_150,0xffffffff,0x20,0,0);
    pppppppuVar16 = pppppppuStack_178;
    if (-1 < (char)bStack_161) {
      uStack_170 = (ulong)bStack_161;
      pppppppuVar16 = &pppppppuStack_178;
    }
    FUN_10a3bf330(&pppppuStack_140,pppppppuVar16,uStack_170);
    FUN_10a968c50(&uStack_1a0,param_1[0xe],param_1);
    ppuVar10 = (undefined **)0x138;
    __Znwm();
    ppppppuStack_b0 = (undefined8 ******)pppppuStack_140;
    ppuVar18 = ppuVar10 + 1;
    *ppuVar18 = (undefined *)0x0;
    ppuVar10[2] = (undefined *)0x0;
    *ppuVar10 = (undefined *)&PTR_FUN_110b9f3b0;
    ppuVar3 = ppuVar10 + 3;
    pppppuStack_140 = (undefined8 *****)0x0;
    ppppppuStack_a8 = (undefined8 ******)uStack_138;
    (**(code **)(alStack_130[0] + 0x10))(apppppuStack_a0,alStack_130);
    uStack_68 = uStack_f8;
    ppppppuVar7 = param_1[8];
    pppppppuVar16 = (undefined8 *******)param_1[7];
    if (-1 < (char)*(byte *)((long)param_1 + 0x4f)) {
      ppppppuVar7 = (undefined8 ******)(ulong)*(byte *)((long)param_1 + 0x4f);
      pppppppuVar16 = param_1 + 7;
    }
    ppuStack_f0 = (undefined **)FUN_10a992304;
    ppuStack_e8 = &PTR_FUN_110c34220;
    uStack_e0 = uStack_1a0;
    uStack_d0 = uStack_190;
    uStack_d8 = uStack_198;
    uStack_198 = 0;
    uStack_190 = 0;
    FUN_10a23708c(ppuVar3,&UNK_10f687225,0x15,&UNK_10f647b45,3,&ppppppuStack_b0,1,in_x7,
                  pppppppuVar16,ppppppuVar7,&ppuStack_f0);
    (*(code *)*ppuStack_e8)(&ppuStack_e8);
    FUN_10a042634(&ppppppuStack_b0);
    ppuStack_188 = ppuVar3;
    ppuStack_180 = ppuVar10;
    FUN_10a968cf8(&uStack_1a0);
    ppppppuStack_b0 = (undefined8 ******)0x0;
    ppppppuStack_a8 = (undefined8 ******)0x0;
    ppppppuVar7 = param_1[0xb];
    if (((ppppppuVar7 != (undefined8 ******)0x0) &&
        (__ZNSt3__119__shared_weak_count4lockEv(), ppppppuStack_a8 = ppppppuVar7,
        ppppppuVar7 != (undefined8 ******)0x0)) &&
       (ppppppuStack_b0 = param_1[10], ppppppuStack_b0 != (undefined8 ******)0x0)) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar6) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      ppuStack_f0 = ppuVar3;
      ppuStack_e8 = ppuVar10;
      (*(code *)**ppppppuStack_b0)(ppppppuStack_b0,&ppuStack_f0);
      ppuVar3 = ppuStack_e8;
      if (ppuStack_e8 != (undefined **)0x0) {
        ppuVar10 = ppuStack_e8 + 1;
        do {
          puVar13 = *ppuVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
          if (bVar6) {
            *ppuVar10 = puVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar13 == (undefined *)0x0) {
          (**(code **)(*ppuStack_e8 + 0x10))(ppuStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar3);
        }
      }
    }
    ppppppuVar7 = ppppppuStack_a8;
    if (ppppppuStack_a8 != (undefined8 ******)0x0) {
      ppppppuVar1 = ppppppuStack_a8 + 1;
      do {
        pppppuVar12 = *ppppppuVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
        if (bVar6) {
          *ppppppuVar1 = (undefined8 *****)((long)pppppuVar12 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppppuVar12 == (undefined8 *****)0x0) {
        (*(code *)(*ppppppuStack_a8)[2])(ppppppuStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar7);
      }
    }
    ppuVar3 = ppuStack_180;
    if (ppuStack_180 != (undefined **)0x0) {
      ppuVar10 = ppuStack_180 + 1;
      do {
        puVar13 = *ppuVar10;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
        if (bVar6) {
          *ppuVar10 = puVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuStack_180 + 0x10))(ppuStack_180);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar3);
      }
    }
    FUN_10a042634(&pppppuStack_140);
    if ((char)bStack_161 < '\0') {
      __ZdlPv(pppppppuStack_178);
    }
    pppppppuVar16 = &ppppppuStack_148;
    func_0x000109380ffc(pppppppuVar16,ppppppuStack_150._0_1_);
  }
  else {
    do {
      pppppppuVar8 = pppppppuVar16 + 4;
      FUN_10a003e3c(pppppppuVar8,&pppppppuStack_1d0);
      if (-1 < (char)pppppppuVar8) {
        pppppppuVar17 = pppppppuVar16;
      }
      pppppppuVar16 = *(undefined8 ********)((long)pppppppuVar16 + ((ulong)pppppppuVar8 >> 4 & 8));
    } while (pppppppuVar16 != (undefined8 *******)0x0);
    if (pppppppuVar17 == pppppppuVar14) goto LAB_10a96882c;
    pppppppuVar16 = &pppppppuStack_1d0;
    FUN_10a003e3c(pppppppuVar16,pppppppuVar17 + 4);
    unaff_x22 = (undefined8 *******)0x0;
    if (((uint)pppppppuVar16 >> 7 & 1) != 0) goto LAB_10a96882c;
  }
  if ((long)pppppuStack_1c0 < 0) {
    pppppppuVar16 = pppppppuStack_1d0;
    __ZdlPv();
  }
LAB_10a968af8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&ppuStack_f0);
  func_0x00010a05a8c4(&ppppppuStack_b0);
  FUN_10a05bd88(&ppuStack_188);
  FUN_10a042634(&pppppuStack_140);
  if ((char)bStack_161 < '\0') {
    __ZdlPv(pppppppuStack_178);
  }
  func_0x000109380ffc(unaff_x22 + 1,ppppppuStack_150._0_1_);
  if ((long)pppppuStack_1c0 < 0) {
    __ZdlPv(pppppppuStack_1d0);
  }
  __Unwind_Resume();
  *(undefined1 *)((long)pppppppuVar16 + 0x161) = 0;
  ppppppuVar7 = pppppppuVar16[0x1d];
  pppppppuVar16[0x1c] = (undefined8 ******)0x0;
  pppppppuVar16[0x1d] = (undefined8 ******)0x0;
  if (ppppppuVar7 != (undefined8 ******)0x0) {
    ppppppuVar1 = ppppppuVar7 + 1;
    do {
      pppppuVar12 = *ppppppuVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
      if (bVar6) {
        *ppppppuVar1 = (undefined8 *****)((long)pppppuVar12 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (pppppuVar12 == (undefined8 *****)0x0) {
      (*(code *)(*ppppppuVar7)[2])(ppppppuVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(ppppppuVar7);
      return;
    }
  }
  return;
}



/* Entry: 10a968c20; end: 10a968c2b;  */

void FUN_10a968c20(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined1 *)(param_1 + 0x161) = 0;
  plVar5 = *(long **)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
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



/* Entry: 10a968c2c; end: 10a968c4f;  */

void FUN_10a968c2c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  FUN_10a968188();
  lVar2 = *(long *)(param_1 + 0x100);
  FUN_10a07e628(auStack_48,lVar2 + 0x18);
  for (plVar3 = (long *)lStack_38; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    lVar1 = lVar2 + 0x18;
    FUN_10a07d408(lVar1,plVar3 + 2);
    if (lVar1 != 0) {
      if (*(char *)(plVar3 + 0xc) == '\x01') {
        (*(code *)plVar3[4])(plVar3 + 4);
      }
      else if (*(char *)(plVar3 + 0xc) == '\x02') {
        FUN_10a05e614(plVar3 + 4);
      }
    }
  }
  FUN_10a004c5c(auStack_48);
  return;
}



/* Entry: 10a968c50; end: 10a968cf7;  */

void FUN_10a968c50(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  plVar6 = (long *)0x48;
  __Znwm();
  plVar6[2] = (long)&PTR_FUN_110c33ac8;
  plVar6[3] = param_3;
  puVar2 = (undefined8 *)param_2[0xb];
  lVar3 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar2;
  *puVar2 = plVar6;
  param_2[0xb] = plVar6;
  param_2[0xc] = lVar3 + 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = plVar6;
  param_1[2] = uVar8;
  param_1[1] = uVar7;
  return;
}



/* Entry: 10a968cf8; end: 10a968d77;  */

undefined8 * FUN_10a968cf8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a968d78; end: 10a968ea7;  */

bool FUN_10a968d78(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 **ppuVar3;
  ulong uVar4;
  bool bVar5;
  undefined8 ****ppppuVar6;
  long lVar7;
  uint uVar8;
  undefined1 *puStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 ***pppuStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  
  lVar7 = *param_2;
  if (lVar7 == 0) {
    bVar5 = false;
  }
  else {
    if (*(char *)(lVar7 + 0x2f) < '\0') {
      func_0x000107c3192c(&pppuStack_50,*(undefined8 *)(lVar7 + 0x18),*(undefined8 *)(lVar7 + 0x20))
      ;
    }
    else {
      uStack_48 = *(ulong *)(lVar7 + 0x20);
      pppuStack_50 = *(undefined8 ****)(lVar7 + 0x18);
      uStack_40 = *(undefined8 *)(lVar7 + 0x28);
    }
    if (*(char *)(param_1 + 0x2f) < '\0') {
      func_0x000107c3192c(&puStack_70,*(undefined8 *)(param_1 + 0x18),
                          *(undefined8 *)(param_1 + 0x20));
    }
    else {
      uStack_68 = *(ulong *)(param_1 + 0x20);
      puStack_70 = *(undefined1 **)(param_1 + 0x18);
      uStack_60 = *(ulong *)(param_1 + 0x28);
    }
    uVar4 = uStack_60;
    uVar8 = (uint)(char)uStack_40._7_1_;
    uVar1 = uStack_48;
    if (-1 < (int)uVar8) {
      uVar1 = (ulong)uStack_40._7_1_;
    }
    uVar2 = uStack_68;
    if (-1 < (long)uStack_60) {
      uVar2 = uStack_60 >> 0x38;
    }
    if (uVar1 == uVar2) {
      ppppuVar6 = (undefined8 ****)pppuStack_50;
      if (-1 < (int)uVar8) {
        ppppuVar6 = &pppuStack_50;
      }
      ppuVar3 = (undefined1 **)puStack_70;
      if (-1 < (long)uStack_60) {
        ppuVar3 = &puStack_70;
      }
      _memcmp(ppppuVar6,ppuVar3);
      bVar5 = (int)ppppuVar6 == 0;
    }
    else {
      bVar5 = false;
    }
    if ((long)uVar4 < 0) {
      __ZdlPv(puStack_70);
      uVar8 = (uint)uStack_40._7_1_;
    }
    if ((uVar8 >> 7 & 1) != 0) {
      __ZdlPv(pppuStack_50);
    }
  }
  return bVar5;
}



/* Entry: 10a968ea8; end: 10a968f1b;  */

undefined8 * FUN_10a968ea8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = param_3;
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



/* Entry: 10a968f1c; end: 10a96965f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a968f1c(long param_1,undefined8 *param_2)

{
  undefined8 ******ppppppuVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  byte bVar6;
  char cVar7;
  long lVar8;
  ulong uVar9;
  bool bVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *****pppppuVar16;
  undefined8 ******ppppppuVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *plVar21;
  undefined8 *******pppppppuVar22;
  undefined8 *puVar23;
  undefined8 ******ppppppuVar24;
  undefined8 ******ppppppuVar25;
  double dVar26;
  double dVar27;
  long lStack_110;
  long *plStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 *******pppppppuStack_90;
  undefined8 *puStack_88;
  ulong uStack_80;
  
  lVar14 = *(long *)(param_1 + 0xc0);
  if (lVar14 != 0) {
    if (*(char *)(lVar14 + 0x2f) < '\0') {
      func_0x000107c3192c(&pppppppuStack_90,*(undefined8 *)(lVar14 + 0x18),
                          *(undefined8 *)(lVar14 + 0x20));
    }
    else {
      puStack_88 = *(undefined8 **)(lVar14 + 0x20);
      pppppppuStack_90 = *(undefined8 ********)(lVar14 + 0x18);
      uStack_80 = *(ulong *)(lVar14 + 0x28);
    }
    uVar9 = uStack_80;
    bVar6 = *(byte *)((long)param_2 + 0x17);
    puVar19 = (undefined8 *)param_2[1];
    if (-1 < (char)bVar6) {
      puVar19 = (undefined8 *)(ulong)bVar6;
    }
    puVar23 = puStack_88;
    if (-1 < (long)uStack_80) {
      puVar23 = (undefined8 *)(uStack_80 >> 0x38);
    }
    if (puVar19 == puVar23) {
      puVar19 = (undefined8 *)*param_2;
      if (-1 < (char)bVar6) {
        puVar19 = param_2;
      }
      pppppppuVar22 = pppppppuStack_90;
      if (-1 < (long)uStack_80) {
        pppppppuVar22 = &pppppppuStack_90;
      }
      _memcmp(puVar19,pppppppuVar22);
      bVar10 = (int)puVar19 == 0;
    }
    else {
      bVar10 = false;
    }
    if ((long)uVar9 < 0) {
      __ZdlPv(pppppppuStack_90);
    }
    if (bVar10) {
      puVar19 = (undefined8 *)(param_1 + 0x90);
      puVar23 = puVar19;
      FUN_10a994010(puVar19,&plStack_a8,param_2);
      pppppppuVar22 = (undefined8 *******)*puVar23;
      if (pppppppuVar22 == (undefined8 *******)0x0) {
        pppppppuVar22 = (undefined8 *******)0x48;
        __Znwm();
        uStack_80 = 0;
        pppppppuStack_90 = pppppppuVar22;
        puStack_88 = puVar19;
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          func_0x000107c3192c(pppppppuVar22 + 4,*param_2,param_2[1]);
        }
        else {
          ppppppuVar17 = (undefined8 ******)*param_2;
          pppppppuVar22[5] = (undefined8 ******)param_2[1];
          pppppppuVar22[4] = ppppppuVar17;
          pppppppuVar22[6] = (undefined8 ******)param_2[2];
        }
        pppppppuVar22[7] = (undefined8 ******)0x0;
        pppppppuVar22[8] = (undefined8 ******)0x0;
        FUN_10a994094(puVar19,plStack_a8,puVar23,pppppppuVar22);
      }
      ppppppuVar17 = pppppppuVar22[8];
      ppppppuVar25 = pppppppuVar22[8];
      ppppppuVar24 = pppppppuVar22[7];
      if (ppppppuVar17 != (undefined8 ******)0x0) {
        ppppppuVar1 = ppppppuVar17 + 1;
        do {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
          if (bVar10) {
            *ppppppuVar1 = (undefined8 *****)((long)*ppppppuVar1 + 1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      plVar18 = *(long **)(param_1 + 0xd8);
      *(undefined8 *******)(param_1 + 0xd8) = ppppppuVar25;
      *(undefined8 *******)(param_1 + 0xd0) = ppppppuVar24;
      if (plVar18 != (long *)0x0) {
        plVar2 = plVar18 + 1;
        do {
          lVar14 = *plVar2;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar10) {
            *plVar2 = lVar14 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
        ppppppuVar17 = *(undefined8 *******)(param_1 + 0xd8);
      }
      lVar14 = *(long *)(param_1 + 0xd0);
      if (ppppppuVar17 != (undefined8 ******)0x0) {
        ppppppuVar24 = ppppppuVar17 + 1;
        do {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar24,0x10);
          if (bVar10) {
            *ppppppuVar24 = (undefined8 *****)((long)*ppppppuVar24 + 1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      puVar23 = (undefined8 *)(param_1 + 0xb0);
      func_0x00010a991f24(*puVar23);
      puVar19 = (undefined8 *)(param_1 + 0xa8);
      *puVar19 = puVar23;
      *puVar23 = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      plStack_a8 = (long *)0x0;
      plStack_a0 = (long *)0x0;
      uStack_98 = 0;
      lVar11 = *(long *)(lVar14 + 0x30);
      lVar14 = *(long *)(lVar14 + 0x38);
      FUN_10a989a84(&plStack_a8,lVar11,lVar14,lVar14 - lVar11 >> 4);
      plVar2 = plStack_a0;
      for (plVar18 = plStack_a8; plVar18 != plVar2; plVar18 = plVar18 + 2) {
        lVar14 = *plVar18;
        plVar5 = (long *)plVar18[1];
        if (plVar5 == (long *)0x0) {
          plVar20 = (long *)0x0;
          plStack_c8 = (long *)0x0;
          lVar11 = lVar14;
          lStack_d0 = lVar14;
        }
        else {
          plVar20 = plVar5 + 1;
          do {
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar10) {
              *plVar20 = *plVar20 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          plVar20 = (long *)plVar18[1];
          plStack_c8 = (long *)plVar18[1];
          lStack_d0 = *plVar18;
          lVar11 = lStack_d0;
          if (plVar20 != (long *)0x0) {
            plVar3 = plVar20 + 1;
            do {
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar10) {
                *plVar3 = *plVar3 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            lVar11 = *plVar18;
          }
        }
        lVar8 = lStack_d0;
        dVar26 = *(double *)(lVar11 + 0x30);
        lVar11 = 0x40;
        lStack_b8 = lVar14;
        plStack_b0 = plVar5;
        __Znwm();
        uStack_80 = 1;
        *(double *)(lVar11 + 0x20) = dVar26;
        *(long *)(lVar11 + 0x28) = lVar14;
        *(long **)(lVar11 + 0x30) = plVar5;
        if (plVar5 != (long *)0x0) {
          plVar5 = plVar5 + 1;
          do {
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar10) {
              *plVar5 = *plVar5 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        *(undefined1 *)(lVar11 + 0x38) = 0;
        puVar15 = (undefined8 *)*puVar23;
        puVar12 = puVar23;
        while (puVar13 = puVar12, puVar15 != (undefined8 *)0x0) {
          while (puVar12 = puVar15, (double)puVar12[4] <= dVar26) {
            puVar15 = (undefined8 *)puVar12[1];
            if ((undefined8 *)puVar12[1] == (undefined8 *)0x0) {
              puVar13 = puVar12 + 1;
              goto LAB_10a969218;
            }
          }
          puVar15 = (undefined8 *)*puVar12;
        }
LAB_10a969218:
        puStack_88 = puVar19;
        FUN_10a99415c(puVar19,puVar12,puVar13);
        pppppppuStack_90 = (undefined8 *******)0x0;
        func_0x00010a9941b0(&pppppppuStack_90);
        plStack_e0 = (long *)0x0;
        uStack_d8 = 0;
        plStack_e8 = (long *)0x0;
        lVar14 = *(long *)(*plVar18 + 0x18);
        lVar11 = *(long *)(*plVar18 + 0x20);
        FUN_10a98993c(&plStack_e8,lVar14,lVar11,lVar11 - lVar14 >> 4);
        plVar3 = plStack_e0;
        for (plVar5 = plStack_e8; plVar5 != plVar3; plVar5 = plVar5 + 2) {
          lVar14 = *plVar5;
          plVar20 = (long *)plVar5[1];
          if (plVar20 == (long *)0x0) {
            plVar21 = (long *)0x0;
            lVar11 = lVar14;
            lStack_110 = lVar14;
          }
          else {
            plVar21 = plVar20 + 1;
            do {
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar10) {
                *plVar21 = *plVar21 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            plVar21 = (long *)plVar5[1];
            lStack_110 = *plVar5;
            lVar11 = lStack_110;
            if (plVar21 != (long *)0x0) {
              plVar4 = plVar21 + 1;
              do {
                cVar7 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                if (bVar10) {
                  *plVar4 = *plVar4 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              lVar11 = *plVar5;
            }
          }
          dVar26 = *(double *)(*plVar18 + 0x30);
          dVar27 = *(double *)(lVar11 + 0x30);
          lVar11 = 0x40;
          __Znwm();
          dVar26 = dVar26 + dVar27;
          uStack_80 = 1;
          *(double *)(lVar11 + 0x20) = dVar26;
          *(long *)(lVar11 + 0x28) = lVar14;
          *(long **)(lVar11 + 0x30) = plVar20;
          if (plVar20 != (long *)0x0) {
            plVar4 = plVar20 + 1;
            do {
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar10) {
                *plVar4 = *plVar4 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          *(undefined1 *)(lVar11 + 0x38) = 2;
          puVar15 = (undefined8 *)*puVar23;
          puVar12 = puVar23;
          while (puVar13 = puVar12, puVar15 != (undefined8 *)0x0) {
            while (puVar12 = puVar15, (double)puVar12[4] <= dVar26) {
              puVar15 = (undefined8 *)puVar12[1];
              if ((undefined8 *)puVar12[1] == (undefined8 *)0x0) {
                puVar13 = puVar12 + 1;
                goto LAB_10a969344;
              }
            }
            puVar15 = (undefined8 *)*puVar12;
          }
LAB_10a969344:
          puStack_88 = puVar19;
          FUN_10a99415c(puVar19,puVar12,puVar13);
          pppppppuStack_90 = (undefined8 *******)0x0;
          func_0x00010a9941b0(&pppppppuStack_90);
          dVar26 = *(double *)(*plVar18 + 0x30);
          dVar27 = *(double *)(*plVar5 + 0x38);
          lVar14 = 0x40;
          __Znwm();
          dVar26 = dVar26 + dVar27;
          uStack_80 = 1;
          *(double *)(lVar14 + 0x20) = dVar26;
          *(long *)(lVar14 + 0x28) = lStack_110;
          *(long **)(lVar14 + 0x30) = plVar21;
          if (plVar21 != (long *)0x0) {
            plVar4 = plVar21 + 1;
            do {
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar10) {
                *plVar4 = *plVar4 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          *(undefined1 *)(lVar14 + 0x38) = 3;
          puVar15 = (undefined8 *)*puVar23;
          puVar12 = puVar23;
          while (puVar13 = puVar12, puVar15 != (undefined8 *)0x0) {
            while (puVar12 = puVar15, (double)puVar12[4] <= dVar26) {
              puVar15 = (undefined8 *)puVar12[1];
              if ((undefined8 *)puVar12[1] == (undefined8 *)0x0) {
                puVar13 = puVar12 + 1;
                goto LAB_10a9693e0;
              }
            }
            puVar15 = (undefined8 *)*puVar12;
          }
LAB_10a9693e0:
          puStack_88 = puVar19;
          FUN_10a99415c(puVar19,puVar12,puVar13);
          pppppppuStack_90 = (undefined8 *******)0x0;
          func_0x00010a9941b0(&pppppppuStack_90);
          if (plVar21 != (long *)0x0) {
            plVar4 = plVar21 + 1;
            do {
              lVar14 = *plVar4;
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar10) {
                *plVar4 = lVar14 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
            }
          }
          if (plVar20 != (long *)0x0) {
            plVar21 = plVar20 + 1;
            do {
              lVar14 = *plVar21;
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar10) {
                *plVar21 = lVar14 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
            }
          }
          plVar20 = plStack_c8;
          lVar8 = lStack_d0;
        }
        func_0x00010a989a28(&plStack_e8);
        dVar26 = *(double *)(*plVar18 + 0x38);
        lVar14 = 0x40;
        __Znwm();
        uStack_80 = 1;
        *(double *)(lVar14 + 0x20) = dVar26;
        *(long *)(lVar14 + 0x28) = lVar8;
        *(long **)(lVar14 + 0x30) = plVar20;
        if (plVar20 != (long *)0x0) {
          plVar20 = plVar20 + 1;
          do {
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar10) {
              *plVar20 = *plVar20 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        *(undefined1 *)(lVar14 + 0x38) = 1;
        puVar15 = (undefined8 *)*puVar23;
        puVar12 = puVar23;
        while (puVar13 = puVar12, puVar15 != (undefined8 *)0x0) {
          while (puVar12 = puVar15, (double)puVar12[4] <= dVar26) {
            puVar15 = (undefined8 *)puVar12[1];
            if ((undefined8 *)puVar12[1] == (undefined8 *)0x0) {
              puVar13 = puVar12 + 1;
              goto LAB_10a9694f0;
            }
          }
          puVar15 = (undefined8 *)*puVar12;
        }
LAB_10a9694f0:
        puStack_88 = puVar19;
        FUN_10a99415c(puVar19,puVar12,puVar13);
        pppppppuStack_90 = (undefined8 *******)0x0;
        func_0x00010a9941b0(&pppppppuStack_90);
        plVar5 = plStack_c8;
        if (plStack_c8 != (long *)0x0) {
          plVar20 = plStack_c8 + 1;
          do {
            lVar14 = *plVar20;
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar10) {
              *plVar20 = lVar14 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
        plVar5 = plStack_b0;
        if (plStack_b0 != (long *)0x0) {
          plVar20 = plStack_b0 + 1;
          do {
            lVar14 = *plVar20;
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar10) {
              *plVar20 = lVar14 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
      }
      func_0x00010a989b70(&plStack_a8);
      if (ppppppuVar17 != (undefined8 ******)0x0) {
        ppppppuVar24 = ppppppuVar17 + 1;
        do {
          pppppuVar16 = *ppppppuVar24;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar24,0x10);
          if (bVar10) {
            *ppppppuVar24 = (undefined8 *****)((long)pppppuVar16 + -1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (pppppuVar16 == (undefined8 *****)0x0) {
          (*(code *)(*ppppppuVar17)[2])(ppppppuVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar17);
        }
      }
      FUN_10a07e58c(*(undefined8 *)(param_1 + 0xf0));
    }
  }
  return;
}



/* Entry: 10a969660; end: 10a969bbf;  */

void FUN_10a969660(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined1 uVar10;
  ulong uVar11;
  code *pcVar12;
  ulong uVar13;
  long *plVar14;
  code *pcVar15;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  long *plVar16;
  undefined1 *puVar17;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined **unaff_x25;
  code *unaff_x26;
  code *unaff_x27;
  code *unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  double dVar18;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  do {
    plVar7 = (long *)((long)register0x00000008 + -0x110);
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(code **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(code **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(code **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined ***)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    *(undefined4 *)((long)register0x00000008 + -0xf0) = *(undefined4 *)(param_1 + 0x38);
    FUN_10a991ff4((undefined1 *)((long)register0x00000008 + -0x110),*(undefined8 *)(param_1 + 0x20))
    ;
    plVar16 = *(long **)(param_1 + 0x28);
    if (plVar16 != (long *)0x0) {
      unaff_x23 = (undefined1 *)0x9ddfea08eb382d69;
      unaff_x25 = (undefined **)0x3;
      do {
        uVar11 = plVar16[2];
        uVar13 = ((ulong)(uint)((int)uVar11 << 3) + 8 ^ uVar11 >> 0x20) * -0x622015f714c7d297;
        uVar13 = (uVar11 >> 0x20 ^ uVar13 >> 0x2f ^ uVar13) * -0x622015f714c7d297;
        unaff_x28 = (code *)((uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297);
        unaff_x27 = *(code **)((long)register0x00000008 + -0x108);
        if (unaff_x27 != (code *)0x0) {
          pcVar12 = unaff_x27 + -1;
          if (((ulong)unaff_x27 & (ulong)pcVar12) == 0) {
            unaff_x26 = (code *)((ulong)unaff_x28 & (ulong)pcVar12);
          }
          else {
            unaff_x26 = unaff_x28;
            if (unaff_x27 <= unaff_x28) {
              uVar13 = 0;
              if (unaff_x27 != (code *)0x0) {
                uVar13 = (ulong)unaff_x28 / (ulong)unaff_x27;
              }
              unaff_x26 = unaff_x28 + -(uVar13 * (long)unaff_x27);
            }
          }
          plVar14 = *(long **)(*(long *)((long)register0x00000008 + -0x110) + (long)unaff_x26 * 8);
          if (plVar14 != (long *)0x0) {
            do {
              while( true ) {
                plVar14 = (long *)*plVar14;
                if (plVar14 == (long *)0x0) goto LAB_10a969790;
                pcVar15 = (code *)plVar14[1];
                if (pcVar15 != unaff_x28) break;
                if (plVar14[2] == uVar11) goto LAB_10a9698f0;
              }
              if (((ulong)unaff_x27 & (ulong)pcVar12) == 0) {
                pcVar15 = (code *)((ulong)pcVar15 & (ulong)pcVar12);
              }
              else if (unaff_x27 <= pcVar15) {
                uVar13 = 0;
                if (unaff_x27 != (code *)0x0) {
                  uVar13 = (ulong)pcVar15 / (ulong)unaff_x27;
                }
                pcVar15 = pcVar15 + -(uVar13 * (long)unaff_x27);
              }
            } while (pcVar15 == unaff_x26);
          }
        }
LAB_10a969790:
        unaff_x21 = (long *)0x68;
        __Znwm();
        *unaff_x21 = 0;
        unaff_x21[1] = (long)unaff_x28;
        lVar8 = plVar16[3];
        lVar9 = plVar16[2];
        unaff_x21[3] = plVar16[3];
        unaff_x21[2] = lVar9;
        if (lVar8 != 0) {
          plVar14 = (long *)(lVar8 + 8);
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar6) {
              *plVar14 = *plVar14 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        *(undefined1 *)(unaff_x21 + 0xc) = 3;
        *(long **)((long)register0x00000008 + -0xc0) = unaff_x21 + 4;
        if ((char)plVar16[0xc] == '\0') {
          uVar10 = 0;
        }
        else {
          FUN_10a005398((undefined1 *)((long)register0x00000008 + -0xc0),plVar16 + 4);
          uVar10 = (undefined1)plVar16[0xc];
        }
        *(undefined1 *)(unaff_x21 + 0xc) = uVar10;
        if ((unaff_x27 == (code *)0x0) ||
           (*(float *)((long)register0x00000008 + -0xf0) * (float)unaff_x27 <
            (float)(*(long *)((long)register0x00000008 + -0xf8) + 1))) {
          uVar11 = 1;
          if ((code *)0x2 < unaff_x27) {
            uVar11 = (ulong)(((ulong)unaff_x27 & (ulong)(unaff_x27 + -1)) != 0);
          }
          uVar11 = uVar11 | (long)unaff_x27 << 1;
          uVar13 = (ulong)((float)(*(long *)((long)register0x00000008 + -0xf8) + 1) /
                          *(float *)((long)register0x00000008 + -0xf0));
          if (uVar11 <= uVar13) {
            uVar11 = uVar13;
          }
          FUN_10a991ff4((undefined1 *)((long)register0x00000008 + -0x110),uVar11);
          unaff_x27 = *(code **)((long)register0x00000008 + -0x108);
          if (((ulong)unaff_x27 & (ulong)(unaff_x27 + -1)) == 0) {
            unaff_x26 = (code *)((ulong)(unaff_x27 + -1) & (ulong)unaff_x28);
          }
          else {
            unaff_x26 = unaff_x28;
            if (unaff_x27 <= unaff_x28) {
              uVar11 = 0;
              if (unaff_x27 != (code *)0x0) {
                uVar11 = (ulong)unaff_x28 / (ulong)unaff_x27;
              }
              unaff_x26 = unaff_x28 + -(uVar11 * (long)unaff_x27);
            }
          }
        }
        lVar8 = *(long *)((long)register0x00000008 + -0x110);
        plVar14 = *(long **)(lVar8 + (long)unaff_x26 * 8);
        if (plVar14 == (long *)0x0) {
          *unaff_x21 = *(long *)((long)register0x00000008 + -0x100);
          *(long **)((long)register0x00000008 + -0x100) = unaff_x21;
          *(undefined1 **)(lVar8 + (long)unaff_x26 * 8) =
               (undefined1 *)((long)register0x00000008 + -0x100);
          if (*unaff_x21 != 0) {
            pcVar12 = *(code **)(*unaff_x21 + 8);
            if (((ulong)unaff_x27 & (ulong)(unaff_x27 + -1)) == 0) {
              pcVar12 = (code *)((ulong)pcVar12 & (ulong)(unaff_x27 + -1));
            }
            else if (unaff_x27 <= pcVar12) {
              uVar11 = 0;
              if (unaff_x27 != (code *)0x0) {
                uVar11 = (ulong)pcVar12 / (ulong)unaff_x27;
              }
              pcVar12 = pcVar12 + -(uVar11 * (long)unaff_x27);
            }
            *(long **)(*(long *)((long)register0x00000008 + -0x110) + (long)pcVar12 * 8) = unaff_x21
            ;
          }
        }
        else {
          *unaff_x21 = *plVar14;
          *plVar14 = (long)unaff_x21;
        }
        *(long *)((long)register0x00000008 + -0xf8) =
             *(long *)((long)register0x00000008 + -0xf8) + 1;
LAB_10a9698f0:
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
    puVar17 = (undefined1 *)0x0;
    plVar16 = *(long **)((long)register0x00000008 + -0x100);
    if (plVar16 != (long *)0x0) {
      puVar17 = (undefined1 *)((long)register0x00000008 + -0xe0);
      unaff_x23 = (undefined1 *)((long)register0x00000008 + -0xc0);
      unaff_x25 = &PTR_FUN_110c34310;
      unaff_d8 = 0x100000001;
      unaff_x26 = FUN_10a995174;
      do {
        lVar9 = plVar16[2];
        lVar8 = param_1 + 0x18;
        FUN_10a98c568();
        if (lVar8 != 0) {
          if ((char)plVar16[0xc] == '\x01') {
            pcVar12 = (code *)plVar16[4];
            lVar8 = param_2[1];
            lVar9 = *param_2;
            *(long *)((long)register0x00000008 + -0xb8) = param_2[1];
            *(long *)((long)register0x00000008 + -0xc0) = lVar9;
            if (lVar8 != 0) {
              plVar14 = (long *)(lVar8 + 8);
              do {
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                if (bVar6) {
                  *plVar14 = *plVar14 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            (*pcVar12)((undefined1 *)((long)register0x00000008 + -0xc0),plVar16 + 4);
            unaff_x21 = *(long **)((long)register0x00000008 + -0xb8);
            if (unaff_x21 != (long *)0x0) {
              plVar14 = unaff_x21 + 1;
              do {
                lVar8 = *plVar14;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                if (bVar6) {
                  *plVar14 = lVar8 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
LAB_10a9699d0:
              if (lVar8 == 0) {
                (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
                __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
              }
            }
          }
          else if ((char)plVar16[0xc] == '\x02') {
            unaff_x21 = plVar16 + 4;
            FUN_10a688b40();
            if (unaff_x21 == (long *)0x0) {
              if (lVar9 != 0) {
                lVar8 = plVar16[4];
                lVar3 = plVar16[5];
                if (lVar3 != 0) {
                  plVar14 = (long *)(lVar3 + 8);
                  do {
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar6) {
                      *plVar14 = *plVar14 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                lVar2 = *param_2;
                plVar14 = (long *)param_2[1];
                *(long *)((long)register0x00000008 + -0xd0) = lVar2;
                *(long **)((long)register0x00000008 + -200) = plVar14;
                if (plVar14 == (long *)0x0) {
                  *(undefined ***)((long)register0x00000008 + -0xb8) = &PTR_FUN_110c34310;
                  *(long *)((long)register0x00000008 + -0xb0) = lVar8;
                  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
                  *(long *)((long)register0x00000008 + -0xa8) = lVar3;
                  *(long *)((long)register0x00000008 + -0xa0) = lVar2;
                  *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
                }
                else {
                  plVar1 = plVar14 + 1;
                  do {
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar6) {
                      *plVar1 = *plVar1 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  *(undefined ***)((long)register0x00000008 + -0xb8) = &PTR_FUN_110c34310;
                  *(long *)((long)register0x00000008 + -0xb0) = lVar8;
                  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
                  *(long *)((long)register0x00000008 + -0xa8) = lVar3;
                  *(long *)((long)register0x00000008 + -0xa0) = lVar2;
                  *(long **)((long)register0x00000008 + -0x98) = plVar14;
                  do {
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar6) {
                      *plVar1 = *plVar1 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                *(code **)((long)register0x00000008 + -0xc0) = FUN_10a995174;
                FUN_10a4634ec(lVar9,(undefined1 *)((long)register0x00000008 + -0xc0));
                (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))
                          ((undefined1 *)((long)register0x00000008 + -0xb8));
                if (plVar14 != (long *)0x0) {
                  plVar1 = plVar14 + 1;
                  do {
                    lVar8 = *plVar1;
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar6) {
                      *plVar1 = lVar8 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (lVar8 == 0) {
                    (**(code **)(*plVar14 + 0x10))(plVar14);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
                  }
                }
                unaff_x21 = *(long **)((long)register0x00000008 + -0xd8);
                if (unaff_x21 != (long *)0x0) {
                  plVar14 = unaff_x21 + 1;
                  do {
                    lVar8 = *plVar14;
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar6) {
                      *plVar14 = lVar8 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  goto LAB_10a9699d0;
                }
              }
            }
            else {
              *unaff_x21 = CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
              FUN_10a994f70(plVar16[4],param_2);
              iVar5 = *(int *)((long)unaff_x21 + 4) + -1;
              *(int *)((long)unaff_x21 + 4) = iVar5;
              if (iVar5 == 0) {
                *(undefined4 *)unaff_x21 = 0;
              }
            }
          }
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
    unaff_x24 = 0;
    FUN_10a994ef0();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80)) {
      return;
    }
    ___stack_chk_fail();
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))(unaff_x23 + 8);
    func_0x00010a98b8b4(puVar17 + 0x10);
    func_0x00010a004dac((undefined1 *)((long)register0x00000008 + -0xe0));
    FUN_10a994ef0((undefined1 *)((long)register0x00000008 + -0x110));
    plVar16 = plVar7;
    __Unwind_Resume();
    *(undefined1 **)((long)register0x00000008 + -0x140) = puVar17;
    *(long **)((long)register0x00000008 + -0x138) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x130) = param_1;
    *(long **)((long)register0x00000008 + -0x128) = plVar7;
    *(undefined1 **)((long)register0x00000008 + -0x120) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x118) = FUN_10a969bc0;
    param_2 = plVar16 + 1;
    if ((*param_2 == 0) ||
       (bVar6 = *(byte *)(*plVar16 + 0xe2d) - 1 < 2,
       *(byte *)(*plVar16 + 0xe2d) != 2 || (bool)(char)plVar16[7] == bVar6)) {
      return;
    }
    *(bool *)(plVar16 + 7) = bVar6;
    lVar8 = plVar16[0xc];
    FUN_10a07e58c();
    lVar9 = *plVar16;
    if (*(int *)(*(long *)(lVar9 + 0x100) + 0x2a8) == 8) {
      *(float *)((long)plVar16 + 0x1c) = (float)(*(double *)(*(long *)(lVar9 + 0x850) + 8) * 1000.0)
      ;
      *(undefined2 *)(plVar16 + 3) = 1;
LAB_10a969ca4:
      dVar18 = *(double *)(*(long *)(lVar9 + 0x850) + 8) * 1000.0;
    }
    else {
      __ZNSt3__16chrono12system_clock3nowEv();
      lVar9 = *plVar16;
      iVar5 = *(int *)(*(long *)(lVar9 + 0x100) + 0x2a8);
      *(float *)((long)plVar16 + 0x1c) = (float)(lVar8 / 1000);
      *(undefined2 *)(plVar16 + 3) = 1;
      if (iVar5 == 8) goto LAB_10a969ca4;
      __ZNSt3__16chrono12system_clock3nowEv();
      dVar18 = (double)(lVar8 / 1000);
    }
    plVar16[6] = (long)dVar18;
    param_1 = plVar16[8];
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x120);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x118);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x130);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x128);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x140);
    unaff_x21 = *(long **)((long)register0x00000008 + -0x138);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
  } while( true );
}



/* Entry: 10a969bc0; end: 10a969ceb;  */

void FUN_10a969bc0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  undefined1 uVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  long *plVar13;
  code *pcVar14;
  long *unaff_x19;
  long *plVar15;
  long unaff_x20;
  long *unaff_x21;
  long *plVar16;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined **unaff_x25;
  code *unaff_x26;
  code *unaff_x27;
  code *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  double dVar17;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  do {
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    plVar15 = param_1 + 1;
    if ((*plVar15 == 0) ||
       (bVar6 = *(byte *)(*param_1 + 0xe2d) - 1 < 2,
       *(byte *)(*param_1 + 0xe2d) != 2 || (bool)(char)param_1[7] == bVar6)) {
      return;
    }
    *(bool *)(param_1 + 7) = bVar6;
    lVar7 = param_1[0xc];
    FUN_10a07e58c();
    lVar10 = *param_1;
    if (*(int *)(*(long *)(lVar10 + 0x100) + 0x2a8) == 8) {
      *(float *)((long)param_1 + 0x1c) =
           (float)(*(double *)(*(long *)(lVar10 + 0x850) + 8) * 1000.0);
      *(undefined2 *)(param_1 + 3) = 1;
LAB_10a969ca4:
      dVar17 = *(double *)(*(long *)(lVar10 + 0x850) + 8) * 1000.0;
    }
    else {
      __ZNSt3__16chrono12system_clock3nowEv();
      lVar10 = *param_1;
      iVar5 = *(int *)(*(long *)(lVar10 + 0x100) + 0x2a8);
      *(float *)((long)param_1 + 0x1c) = (float)(lVar7 / 1000);
      *(undefined2 *)(param_1 + 3) = 1;
      if (iVar5 == 8) goto LAB_10a969ca4;
      __ZNSt3__16chrono12system_clock3nowEv();
      dVar17 = (double)(lVar7 / 1000);
    }
    param_1[6] = (long)dVar17;
    unaff_x20 = param_1[8];
    unaff_x21 = *(long **)((long)register0x00000008 + -0x28);
    unaff_x19 = (long *)((long)register0x00000008 + -0x110);
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(code **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(code **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(code **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined ***)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) =
         *(undefined8 *)((long)register0x00000008 + -0x30);
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    *(undefined4 *)((long)register0x00000008 + -0xf0) = *(undefined4 *)(unaff_x20 + 0x38);
    FUN_10a991ff4((undefined1 *)((long)register0x00000008 + -0x110),
                  *(undefined8 *)(unaff_x20 + 0x20));
    plVar16 = *(long **)(unaff_x20 + 0x28);
    if (plVar16 != (long *)0x0) {
      unaff_x23 = (undefined1 *)0x9ddfea08eb382d69;
      unaff_x25 = (undefined **)0x3;
      do {
        uVar9 = plVar16[2];
        uVar12 = ((ulong)(uint)((int)uVar9 << 3) + 8 ^ uVar9 >> 0x20) * -0x622015f714c7d297;
        uVar12 = (uVar9 >> 0x20 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
        unaff_x28 = (code *)((uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297);
        unaff_x27 = *(code **)((long)register0x00000008 + -0x108);
        if (unaff_x27 != (code *)0x0) {
          pcVar11 = unaff_x27 + -1;
          if (((ulong)unaff_x27 & (ulong)pcVar11) == 0) {
            unaff_x26 = (code *)((ulong)unaff_x28 & (ulong)pcVar11);
          }
          else {
            unaff_x26 = unaff_x28;
            if (unaff_x27 <= unaff_x28) {
              uVar12 = 0;
              if (unaff_x27 != (code *)0x0) {
                uVar12 = (ulong)unaff_x28 / (ulong)unaff_x27;
              }
              unaff_x26 = unaff_x28 + -(uVar12 * (long)unaff_x27);
            }
          }
          plVar13 = *(long **)(*(long *)((long)register0x00000008 + -0x110) + (long)unaff_x26 * 8);
          if (plVar13 != (long *)0x0) {
            do {
              while( true ) {
                plVar13 = (long *)*plVar13;
                if (plVar13 == (long *)0x0) goto LAB_10a969790;
                pcVar14 = (code *)plVar13[1];
                if (pcVar14 != unaff_x28) break;
                if (plVar13[2] == uVar9) goto LAB_10a9698f0;
              }
              if (((ulong)unaff_x27 & (ulong)pcVar11) == 0) {
                pcVar14 = (code *)((ulong)pcVar14 & (ulong)pcVar11);
              }
              else if (unaff_x27 <= pcVar14) {
                uVar12 = 0;
                if (unaff_x27 != (code *)0x0) {
                  uVar12 = (ulong)pcVar14 / (ulong)unaff_x27;
                }
                pcVar14 = pcVar14 + -(uVar12 * (long)unaff_x27);
              }
            } while (pcVar14 == unaff_x26);
          }
        }
LAB_10a969790:
        unaff_x21 = (long *)0x68;
        __Znwm();
        *unaff_x21 = 0;
        unaff_x21[1] = (long)unaff_x28;
        lVar7 = plVar16[3];
        lVar10 = plVar16[2];
        unaff_x21[3] = plVar16[3];
        unaff_x21[2] = lVar10;
        if (lVar7 != 0) {
          plVar13 = (long *)(lVar7 + 8);
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = *plVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        *(undefined1 *)(unaff_x21 + 0xc) = 3;
        *(long **)((long)register0x00000008 + -0xc0) = unaff_x21 + 4;
        if ((char)plVar16[0xc] == '\0') {
          uVar8 = 0;
        }
        else {
          FUN_10a005398((undefined1 *)((long)register0x00000008 + -0xc0),plVar16 + 4);
          uVar8 = (undefined1)plVar16[0xc];
        }
        *(undefined1 *)(unaff_x21 + 0xc) = uVar8;
        if ((unaff_x27 == (code *)0x0) ||
           (*(float *)((long)register0x00000008 + -0xf0) * (float)unaff_x27 <
            (float)(*(long *)((long)register0x00000008 + -0xf8) + 1))) {
          uVar9 = 1;
          if ((code *)0x2 < unaff_x27) {
            uVar9 = (ulong)(((ulong)unaff_x27 & (ulong)(unaff_x27 + -1)) != 0);
          }
          uVar9 = uVar9 | (long)unaff_x27 << 1;
          uVar12 = (ulong)((float)(*(long *)((long)register0x00000008 + -0xf8) + 1) /
                          *(float *)((long)register0x00000008 + -0xf0));
          if (uVar9 <= uVar12) {
            uVar9 = uVar12;
          }
          FUN_10a991ff4((undefined1 *)((long)register0x00000008 + -0x110),uVar9);
          unaff_x27 = *(code **)((long)register0x00000008 + -0x108);
          if (((ulong)unaff_x27 & (ulong)(unaff_x27 + -1)) == 0) {
            unaff_x26 = (code *)((ulong)(unaff_x27 + -1) & (ulong)unaff_x28);
          }
          else {
            unaff_x26 = unaff_x28;
            if (unaff_x27 <= unaff_x28) {
              uVar9 = 0;
              if (unaff_x27 != (code *)0x0) {
                uVar9 = (ulong)unaff_x28 / (ulong)unaff_x27;
              }
              unaff_x26 = unaff_x28 + -(uVar9 * (long)unaff_x27);
            }
          }
        }
        lVar7 = *(long *)((long)register0x00000008 + -0x110);
        plVar13 = *(long **)(lVar7 + (long)unaff_x26 * 8);
        if (plVar13 == (long *)0x0) {
          *unaff_x21 = *(long *)((long)register0x00000008 + -0x100);
          *(long **)((long)register0x00000008 + -0x100) = unaff_x21;
          *(undefined1 **)(lVar7 + (long)unaff_x26 * 8) =
               (undefined1 *)((long)register0x00000008 + -0x100);
          if (*unaff_x21 != 0) {
            pcVar11 = *(code **)(*unaff_x21 + 8);
            if (((ulong)unaff_x27 & (ulong)(unaff_x27 + -1)) == 0) {
              pcVar11 = (code *)((ulong)pcVar11 & (ulong)(unaff_x27 + -1));
            }
            else if (unaff_x27 <= pcVar11) {
              uVar9 = 0;
              if (unaff_x27 != (code *)0x0) {
                uVar9 = (ulong)pcVar11 / (ulong)unaff_x27;
              }
              pcVar11 = pcVar11 + -(uVar9 * (long)unaff_x27);
            }
            *(long **)(*(long *)((long)register0x00000008 + -0x110) + (long)pcVar11 * 8) = unaff_x21
            ;
          }
        }
        else {
          *unaff_x21 = *plVar13;
          *plVar13 = (long)unaff_x21;
        }
        *(long *)((long)register0x00000008 + -0xf8) =
             *(long *)((long)register0x00000008 + -0xf8) + 1;
LAB_10a9698f0:
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
    unaff_x22 = (undefined1 *)0x0;
    plVar16 = *(long **)((long)register0x00000008 + -0x100);
    if (plVar16 != (long *)0x0) {
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0xe0);
      unaff_x23 = (undefined1 *)((long)register0x00000008 + -0xc0);
      unaff_x25 = &PTR_FUN_110c34310;
      unaff_d8 = 0x100000001;
      unaff_x26 = FUN_10a995174;
      do {
        lVar10 = plVar16[2];
        lVar7 = unaff_x20 + 0x18;
        FUN_10a98c568();
        if (lVar7 != 0) {
          if ((char)plVar16[0xc] == '\x01') {
            pcVar11 = (code *)plVar16[4];
            lVar7 = param_1[2];
            lVar10 = *plVar15;
            *(long *)((long)register0x00000008 + -0xb8) = param_1[2];
            *(long *)((long)register0x00000008 + -0xc0) = lVar10;
            if (lVar7 != 0) {
              plVar13 = (long *)(lVar7 + 8);
              do {
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar6) {
                  *plVar13 = *plVar13 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            (*pcVar11)((undefined1 *)((long)register0x00000008 + -0xc0),plVar16 + 4);
            unaff_x21 = *(long **)((long)register0x00000008 + -0xb8);
            if (unaff_x21 != (long *)0x0) {
              plVar13 = unaff_x21 + 1;
              do {
                lVar7 = *plVar13;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar6) {
                  *plVar13 = lVar7 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
LAB_10a9699d0:
              if (lVar7 == 0) {
                (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
                __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
              }
            }
          }
          else if ((char)plVar16[0xc] == '\x02') {
            unaff_x21 = plVar16 + 4;
            FUN_10a688b40();
            if (unaff_x21 == (long *)0x0) {
              if (lVar10 != 0) {
                lVar7 = plVar16[4];
                lVar3 = plVar16[5];
                if (lVar3 != 0) {
                  plVar13 = (long *)(lVar3 + 8);
                  do {
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                    if (bVar6) {
                      *plVar13 = *plVar13 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                lVar2 = *plVar15;
                plVar13 = (long *)param_1[2];
                *(long *)((long)register0x00000008 + -0xd0) = lVar2;
                *(long **)((long)register0x00000008 + -200) = plVar13;
                if (plVar13 == (long *)0x0) {
                  *(undefined ***)((long)register0x00000008 + -0xb8) = &PTR_FUN_110c34310;
                  *(long *)((long)register0x00000008 + -0xb0) = lVar7;
                  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
                  *(long *)((long)register0x00000008 + -0xa8) = lVar3;
                  *(long *)((long)register0x00000008 + -0xa0) = lVar2;
                  *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
                }
                else {
                  plVar1 = plVar13 + 1;
                  do {
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar6) {
                      *plVar1 = *plVar1 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  *(undefined ***)((long)register0x00000008 + -0xb8) = &PTR_FUN_110c34310;
                  *(long *)((long)register0x00000008 + -0xb0) = lVar7;
                  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
                  *(long *)((long)register0x00000008 + -0xa8) = lVar3;
                  *(long *)((long)register0x00000008 + -0xa0) = lVar2;
                  *(long **)((long)register0x00000008 + -0x98) = plVar13;
                  do {
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar6) {
                      *plVar1 = *plVar1 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                *(code **)((long)register0x00000008 + -0xc0) = FUN_10a995174;
                FUN_10a4634ec(lVar10,(undefined1 *)((long)register0x00000008 + -0xc0));
                (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))
                          ((undefined1 *)((long)register0x00000008 + -0xb8));
                if (plVar13 != (long *)0x0) {
                  plVar1 = plVar13 + 1;
                  do {
                    lVar7 = *plVar1;
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar6) {
                      *plVar1 = lVar7 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (lVar7 == 0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                  }
                }
                unaff_x21 = *(long **)((long)register0x00000008 + -0xd8);
                if (unaff_x21 != (long *)0x0) {
                  plVar13 = unaff_x21 + 1;
                  do {
                    lVar7 = *plVar13;
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                    if (bVar6) {
                      *plVar13 = lVar7 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  goto LAB_10a9699d0;
                }
              }
            }
            else {
              *unaff_x21 = CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
              FUN_10a994f70(plVar16[4],plVar15);
              iVar5 = *(int *)((long)unaff_x21 + 4) + -1;
              *(int *)((long)unaff_x21 + 4) = iVar5;
              if (iVar5 == 0) {
                *(undefined4 *)unaff_x21 = 0;
              }
            }
          }
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
    unaff_x24 = 0;
    FUN_10a994ef0();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80)) {
      return;
    }
    ___stack_chk_fail();
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))(unaff_x23 + 8);
    func_0x00010a98b8b4(unaff_x22 + 0x10);
    func_0x00010a004dac((undefined1 *)((long)register0x00000008 + -0xe0));
    FUN_10a994ef0((undefined1 *)((long)register0x00000008 + -0x110));
    unaff_x30 = FUN_10a969bc0;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
  } while( true );
}



/* Entry: 10a969cec; end: 10a969e67;  */

undefined1  [16] FUN_10a969cec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xd;
  auVar1._0_8_ = &UNK_10f68723b;
  return auVar1;
}



/* Entry: 10a969e68; end: 10a969f5f;  */

void FUN_10a969e68(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0xffffffff00000001;
  puStack_98 = (undefined *)0x0;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f68581c;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x13b00000141;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a969f60(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f685a44;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f68581c;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a9952e8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f685a4e;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f68581c;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a99545c(param_1,&puStack_98);
  FUN_10a99556c(param_1);
  return;
}



/* Entry: 10a969f60; end: 10a96a037;  */

/* WARNING: Removing unreachable block (ram,0x00010a969ff8) */

undefined1  [16] FUN_10a969f60(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f68723b,0xd);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9951ec(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a96a038; end: 10a96a3a3;  */

void FUN_10a96a038(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f687249,9);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c33288;
  pppuVar2 = (undefined8 ***)&UNK_10f68581c;
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
    ppuStack_b0 = &PTR_DAT_110c33288;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
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
    FUN_10a0605c4(param_1,&UNK_10f68582f,FUN_10a995628,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f685a58,FUN_10a9957d0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f685a6d,FUN_10a995888,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f685a7a,FUN_10a995940,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"numBeatsInMeasure",FUN_10a9959f8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f685a89,FUN_10a995ab4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f685a9f,FUN_10a995c1c,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f687249,9);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a96a388);
  (*pcVar6)();
}



/* Entry: 10a96a3a4; end: 10a96a817;  */

void FUN_10a96a3a4(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f687253,0x10);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c332a0;
  pppuVar2 = (undefined8 ***)&UNK_10f68581c;
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
    ppuStack_b0 = &PTR_DAT_110c332a0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
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
    FUN_10a0605c4(param_1,&UNK_10f685ab3,FUN_10a995ccc,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f685ac1,FUN_10a995e68,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f685ad6,FUN_10a995fd4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c34328,FUN_10a996084);
    FUN_10a0605c4(param_1,&UNK_10f685ae9,FUN_10a996e8c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c34328,FUN_10a996084);
    FUN_10a0605c4(param_1,&UNK_10f685af0,FUN_10a997054,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f68597e,FUN_10a997104,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f3becc6,FUN_10a9971bc,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c33dd8,FUN_10a98be78);
    FUN_10a0605c4(param_1,&DAT_10f385181,FUN_10a997294,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f68596e,FUN_10a9973e0,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f687253,0x10);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a96a7fc);
  (*pcVar6)();
}



/* Entry: 10a96a818; end: 10a96a8ef;  */

void FUN_10a96a818(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *(long *)(param_2 + 0x50);
  lVar2 = *(long *)(param_2 + 0x58);
  lVar3 = lVar2 - lVar1 >> 3;
  if (lVar3 != 0) {
    FUN_10a0cf094(param_1,lVar3);
    lVar3 = param_1[1];
    lVar2 = lVar2 - lVar1;
    if (lVar2 != 0) {
      _memmove(lVar3,lVar1,lVar2);
    }
    param_1[1] = lVar3 + lVar2;
  }
  return;
}



/* Entry: 10a96a8f0; end: 10a96af9f;  */

void FUN_10a96a8f0(double param_1,undefined *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  long lVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  double *pdVar16;
  double dVar17;
  ulong uVar18;
  long *plVar19;
  undefined *puVar20;
  undefined *unaff_x19;
  double *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  long *plVar21;
  undefined8 unaff_x24;
  undefined1 *unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar22;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(double **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if (((param_2[0x130] == '\x01') &&
        (((unaff_x20 = *(double **)(param_2 + 0x60), *(char *)(unaff_x20 + 3) == '\x01' &&
          (*(char *)((long)unaff_x20 + 0x19) != '\x01')) ||
         (FUN_10a969bc0(unaff_x20), *(char *)(unaff_x20 + 7) == '\x01')))) &&
       (*(long *)(param_2 + 0xb8) != 0)) {
      if (param_2[0x131] == '\x01') {
        puVar10 = *(undefined8 **)(param_2 + 0x120);
      }
      else {
        FUN_10a9676d0(*(undefined8 *)(param_2 + 0x60));
        puVar14 = *(undefined8 **)(param_2 + 0xb0);
        *(double *)(param_2 + 0x128) = param_1;
        puVar10 = (undefined8 *)(param_2 + 0xb0);
        for (; puVar14 != (undefined8 *)0x0; puVar14 = *(undefined8 **)((long)puVar14 + lVar11)) {
          lVar11 = 0;
          puVar2 = puVar14;
          if ((double)puVar14[4] <= param_1) {
            lVar11 = 8;
            puVar2 = puVar10;
          }
          puVar10 = puVar2;
        }
        *(undefined8 **)(param_2 + 0x120) = puVar10;
        param_2[0x131] = 1;
      }
      *(undefined **)((long)register0x00000008 + -0x118) = param_2 + 0xb0;
      if (puVar10 != (undefined8 *)(param_2 + 0xb0)) {
        FUN_10a9676d0(*(undefined8 *)(param_2 + 0x60));
        *(double *)(param_2 + 0x128) = param_1;
        unaff_x27 = *(long **)(param_2 + 0x120);
        if (unaff_x27 != *(long **)((long)register0x00000008 + -0x118)) {
          unaff_x24 = 0x9ddfea08eb382d69;
          unaff_x25 = (undefined1 *)((long)register0x00000008 + -0x100);
          unaff_d8 = 0x100000001;
          unaff_x28 = 3;
          *(undefined **)((long)register0x00000008 + -0x120) = param_2;
          do {
            param_1 = (double)unaff_x27[4];
            if (*(double *)(param_2 + 0x128) < param_1) break;
            if ((char)unaff_x27[7] == '\0') {
              lVar11 = 0x100;
            }
            else {
              if ((char)unaff_x27[7] != '\x01') goto LAB_10a96aef4;
              lVar11 = 0x110;
            }
            unaff_x26 = *(long *)(param_2 + lVar11);
            *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
            param_1 = (double)(ulong)*(uint *)(unaff_x26 + 0x38);
            *(uint *)((long)register0x00000008 + -0xf0) = *(uint *)(unaff_x26 + 0x38);
            FUN_10a99628c((undefined1 *)((long)register0x00000008 + -0x110),
                          *(undefined8 *)(unaff_x26 + 0x20));
            for (plVar21 = *(long **)(unaff_x26 + 0x28); plVar21 != (long *)0x0;
                plVar21 = (long *)*plVar21) {
              uVar12 = plVar21[2];
              uVar18 = ((ulong)(uint)((int)uVar12 << 3) + 8 ^ uVar12 >> 0x20) * -0x622015f714c7d297;
              uVar18 = (uVar12 >> 0x20 ^ uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
              unaff_x22 = (undefined *)((uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297);
              unaff_x21 = *(undefined **)((long)register0x00000008 + -0x108);
              if (unaff_x21 != (undefined *)0x0) {
                puVar15 = unaff_x21 + -1;
                if (((ulong)unaff_x21 & (ulong)puVar15) == 0) {
                  param_2 = (undefined *)((ulong)unaff_x22 & (ulong)puVar15);
                }
                else {
                  param_2 = unaff_x22;
                  if (unaff_x21 <= unaff_x22) {
                    uVar18 = 0;
                    if (unaff_x21 != (undefined *)0x0) {
                      uVar18 = (ulong)unaff_x22 / (ulong)unaff_x21;
                    }
                    param_2 = unaff_x22 + -(uVar18 * (long)unaff_x21);
                  }
                }
                plVar19 = *(long **)(*(long *)((long)register0x00000008 + -0x110) +
                                    (long)param_2 * 8);
                if (plVar19 != (long *)0x0) {
                  do {
                    while( true ) {
                      plVar19 = (long *)*plVar19;
                      if (plVar19 == (long *)0x0) goto LAB_10a96ab18;
                      puVar20 = (undefined *)plVar19[1];
                      if (puVar20 != unaff_x22) break;
                      if (plVar19[2] == uVar12) goto LAB_10a96ac78;
                    }
                    if (((ulong)unaff_x21 & (ulong)puVar15) == 0) {
                      puVar20 = (undefined *)((ulong)puVar20 & (ulong)puVar15);
                    }
                    else if (unaff_x21 <= puVar20) {
                      uVar18 = 0;
                      if (unaff_x21 != (undefined *)0x0) {
                        uVar18 = (ulong)puVar20 / (ulong)unaff_x21;
                      }
                      puVar20 = puVar20 + -(uVar18 * (long)unaff_x21);
                    }
                  } while (puVar20 == param_2);
                }
              }
LAB_10a96ab18:
              unaff_x20 = (double *)0x68;
              __Znwm();
              *unaff_x20 = 0.0;
              unaff_x20[1] = (double)unaff_x22;
              lVar11 = plVar21[3];
              dVar17 = (double)plVar21[2];
              unaff_x20[3] = (double)plVar21[3];
              unaff_x20[2] = dVar17;
              if (lVar11 != 0) {
                plVar19 = (long *)(lVar11 + 8);
                do {
                  cVar5 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar7) {
                    *plVar19 = *plVar19 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              *(undefined1 *)(unaff_x20 + 0xc) = 3;
              *(double **)((long)register0x00000008 + -0xc0) = unaff_x20 + 4;
              if (*(char *)(plVar21 + 0xc) == '\0') {
                uVar9 = 0;
              }
              else {
                FUN_10a005398((undefined1 *)((long)register0x00000008 + -0xc0),plVar21 + 4);
                uVar9 = *(undefined1 *)(plVar21 + 0xc);
              }
              *(undefined1 *)(unaff_x20 + 0xc) = uVar9;
              fVar22 = (float)(*(long *)((long)register0x00000008 + -0xf8) + 1);
              param_1 = (double)(ulong)(uint)fVar22;
              if ((unaff_x21 == (undefined *)0x0) ||
                 (*(float *)((long)register0x00000008 + -0xf0) * (float)unaff_x21 < fVar22)) {
                uVar12 = 1;
                if ((undefined *)0x2 < unaff_x21) {
                  uVar12 = (ulong)(((ulong)unaff_x21 & (ulong)(unaff_x21 + -1)) != 0);
                }
                uVar12 = uVar12 | (long)unaff_x21 << 1;
                fVar22 = fVar22 / *(float *)((long)register0x00000008 + -0xf0);
                param_1 = (double)(ulong)(uint)fVar22;
                uVar18 = (ulong)fVar22;
                if (uVar12 <= uVar18) {
                  uVar12 = uVar18;
                }
                FUN_10a99628c((undefined1 *)((long)register0x00000008 + -0x110),uVar12);
                unaff_x21 = *(undefined **)((long)register0x00000008 + -0x108);
                if (((ulong)unaff_x21 & (ulong)(unaff_x21 + -1)) == 0) {
                  param_2 = (undefined *)((ulong)(unaff_x21 + -1) & (ulong)unaff_x22);
                }
                else {
                  param_2 = unaff_x22;
                  if (unaff_x21 <= unaff_x22) {
                    uVar12 = 0;
                    if (unaff_x21 != (undefined *)0x0) {
                      uVar12 = (ulong)unaff_x22 / (ulong)unaff_x21;
                    }
                    param_2 = unaff_x22 + -(uVar12 * (long)unaff_x21);
                  }
                }
              }
              lVar11 = *(long *)((long)register0x00000008 + -0x110);
              pdVar16 = *(double **)(lVar11 + (long)param_2 * 8);
              if (pdVar16 == (double *)0x0) {
                *unaff_x20 = *(double *)((long)register0x00000008 + -0x100);
                *(double **)((long)register0x00000008 + -0x100) = unaff_x20;
                *(undefined1 **)(lVar11 + (long)param_2 * 8) = unaff_x25;
                if (*unaff_x20 != 0.0) {
                  puVar15 = *(undefined **)((long)*unaff_x20 + 8);
                  if (((ulong)unaff_x21 & (ulong)(unaff_x21 + -1)) == 0) {
                    puVar15 = (undefined *)((ulong)puVar15 & (ulong)(unaff_x21 + -1));
                  }
                  else if (unaff_x21 <= puVar15) {
                    uVar12 = 0;
                    if (unaff_x21 != (undefined *)0x0) {
                      uVar12 = (ulong)puVar15 / (ulong)unaff_x21;
                    }
                    puVar15 = puVar15 + -(uVar12 * (long)unaff_x21);
                  }
                  *(double **)(*(long *)((long)register0x00000008 + -0x110) + (long)puVar15 * 8) =
                       unaff_x20;
                }
              }
              else {
                *unaff_x20 = *pdVar16;
                *pdVar16 = (double)unaff_x20;
              }
              *(long *)((long)register0x00000008 + -0xf8) =
                   *(long *)((long)register0x00000008 + -0xf8) + 1;
LAB_10a96ac78:
            }
            for (plVar21 = *(long **)((long)register0x00000008 + -0x100); plVar21 != (long *)0x0;
                plVar21 = (long *)*plVar21) {
              lVar8 = plVar21[2];
              lVar11 = unaff_x26 + 0x18;
              FUN_10a996c9c();
              if (lVar11 != 0) {
                if (*(char *)(plVar21 + 0xc) == '\x01') {
                  pcVar13 = (code *)plVar21[4];
                  lVar11 = unaff_x27[6];
                  param_1 = (double)unaff_x27[5];
                  *(long *)((long)register0x00000008 + -0xb8) = unaff_x27[6];
                  *(double *)((long)register0x00000008 + -0xc0) = param_1;
                  if (lVar11 != 0) {
                    plVar19 = (long *)(lVar11 + 8);
                    do {
                      cVar5 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                      if (bVar7) {
                        *plVar19 = *plVar19 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  }
                  (*pcVar13)((undefined1 *)((long)register0x00000008 + -0xc0),plVar21 + 4);
                  unaff_x20 = *(double **)((long)register0x00000008 + -0xb8);
                  if (unaff_x20 != (double *)0x0) {
                    pdVar16 = unaff_x20 + 1;
                    do {
                      dVar17 = *pdVar16;
                      cVar5 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(pdVar16,0x10);
                      if (bVar7) {
                        *pdVar16 = (double)((long)dVar17 + -1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
LAB_10a96ad3c:
                    if (dVar17 == 0.0) {
                      (**(code **)((long)*unaff_x20 + 0x10))(unaff_x20);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
                    }
                  }
                }
                else if (*(char *)(plVar21 + 0xc) == '\x02') {
                  unaff_x20 = (double *)(plVar21 + 4);
                  FUN_10a688b40();
                  if (unaff_x20 == (double *)0x0) {
                    if (lVar8 != 0) {
                      uVar3 = plVar21[4];
                      lVar11 = plVar21[5];
                      if (lVar11 != 0) {
                        plVar19 = (long *)(lVar11 + 8);
                        do {
                          cVar5 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                          if (bVar7) {
                            *plVar19 = *plVar19 + 1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                      }
                      lVar4 = unaff_x27[5];
                      plVar19 = (long *)unaff_x27[6];
                      *(long *)((long)register0x00000008 + -0xd0) = lVar4;
                      *(long **)((long)register0x00000008 + -200) = plVar19;
                      if (plVar19 == (long *)0x0) {
                        *(undefined ***)((long)register0x00000008 + -0xb8) = &PTR_FUN_110c344f8;
                        *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar3;
                        *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
                        *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
                        *(long *)((long)register0x00000008 + -0xa8) = lVar11;
                        *(long *)((long)register0x00000008 + -0xa0) = lVar4;
                        *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
                      }
                      else {
                        plVar1 = plVar19 + 1;
                        do {
                          cVar5 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                          if (bVar7) {
                            *plVar1 = *plVar1 + 1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        *(undefined ***)((long)register0x00000008 + -0xb8) = &PTR_FUN_110c344f8;
                        *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar3;
                        *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
                        *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
                        *(long *)((long)register0x00000008 + -0xa8) = lVar11;
                        *(long *)((long)register0x00000008 + -0xa0) = lVar4;
                        *(long **)((long)register0x00000008 + -0x98) = plVar19;
                        do {
                          cVar5 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                          if (bVar7) {
                            *plVar1 = *plVar1 + 1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                      }
                      *(code **)((long)register0x00000008 + -0xc0) = FUN_10a998bec;
                      FUN_10a4634ec(lVar8,(undefined1 *)((long)register0x00000008 + -0xc0));
                      (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))
                                ((undefined1 *)((long)register0x00000008 + -0xb8));
                      if (plVar19 != (long *)0x0) {
                        plVar1 = plVar19 + 1;
                        do {
                          lVar11 = *plVar1;
                          cVar5 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                          if (bVar7) {
                            *plVar1 = lVar11 + -1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        if (lVar11 == 0) {
                          (**(code **)(*plVar19 + 0x10))(plVar19);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
                        }
                      }
                      unaff_x20 = *(double **)((long)register0x00000008 + -0xd8);
                      if (unaff_x20 != (double *)0x0) {
                        pdVar16 = unaff_x20 + 1;
                        do {
                          dVar17 = *pdVar16;
                          cVar5 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(pdVar16,0x10);
                          if (bVar7) {
                            *pdVar16 = (double)((long)dVar17 + -1);
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        goto LAB_10a96ad3c;
                      }
                    }
                  }
                  else {
                    param_1 = (double)CONCAT44((int)((ulong)*unaff_x20 >> 0x20) + 1,
                                               SUB84(*unaff_x20,0) + 1);
                    *unaff_x20 = param_1;
                    FUN_10a9989e8(plVar21[4],unaff_x27 + 5);
                    iVar6 = *(int *)((long)unaff_x20 + 4) + -1;
                    *(int *)((long)unaff_x20 + 4) = iVar6;
                    if (iVar6 == 0) {
                      *(undefined4 *)unaff_x20 = 0;
                    }
                  }
                }
              }
            }
            FUN_10a997774((undefined1 *)((long)register0x00000008 + -0x110));
            param_2 = *(undefined **)((long)register0x00000008 + -0x120);
            plVar19 = (long *)(*(long **)(param_2 + 0x120))[1];
            plVar21 = *(long **)(param_2 + 0x120);
            if (plVar19 == (long *)0x0) {
              do {
                unaff_x27 = (long *)plVar21[2];
                bVar7 = (long *)*unaff_x27 != plVar21;
                plVar21 = unaff_x27;
              } while (bVar7);
            }
            else {
              do {
                unaff_x27 = plVar19;
                plVar19 = (long *)*unaff_x27;
              } while ((long *)*unaff_x27 != (long *)0x0);
            }
            *(long **)(param_2 + 0x120) = unaff_x27;
            unaff_x23 = 0;
          } while (unaff_x27 != *(long **)((long)register0x00000008 + -0x118));
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80)) {
      return;
    }
    ___stack_chk_fail();
LAB_10a96aef4:
    unaff_x19 = &UNK_10f68728d;
    FUN_10a05bab8();
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))
              ((undefined1 *)((long)register0x00000008 + -0xb8));
    FUN_10a9988d8((undefined1 *)((long)register0x00000008 + -0xd0));
    func_0x00010a004dac((undefined1 *)((long)register0x00000008 + -0xe0));
    FUN_10a997774((undefined1 *)((long)register0x00000008 + -0x110));
    unaff_x30 = FUN_10a96afa0;
    param_2 = unaff_x19;
    __Unwind_Resume();
    param_2 = param_2 + -0x18;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x120);
  } while( true );
}



/* Entry: 10a96afa0; end: 10a96afa7;  */

void FUN_10a96afa0(double param_1,undefined *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  double *pdVar17;
  double dVar18;
  ulong uVar19;
  long *plVar20;
  undefined *puVar21;
  undefined *unaff_x19;
  double *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  long *plVar22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar23;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  do {
    puVar8 = param_2 + -0x18;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(double **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if (((param_2[0x118] == '\x01') &&
        (((unaff_x20 = *(double **)(param_2 + 0x48), *(char *)(unaff_x20 + 3) == '\x01' &&
          (*(char *)((long)unaff_x20 + 0x19) != '\x01')) ||
         (FUN_10a969bc0(unaff_x20), *(char *)(unaff_x20 + 7) == '\x01')))) &&
       (*(long *)(param_2 + 0xa0) != 0)) {
      if (param_2[0x119] == '\x01') {
        puVar11 = *(undefined8 **)(param_2 + 0x108);
      }
      else {
        FUN_10a9676d0(*(undefined8 *)(param_2 + 0x48));
        puVar15 = *(undefined8 **)(param_2 + 0x98);
        *(double *)(param_2 + 0x110) = param_1;
        puVar11 = (undefined8 *)(param_2 + 0x98);
        for (; puVar15 != (undefined8 *)0x0; puVar15 = *(undefined8 **)((long)puVar15 + lVar12)) {
          lVar12 = 0;
          puVar2 = puVar15;
          if ((double)puVar15[4] <= param_1) {
            lVar12 = 8;
            puVar2 = puVar11;
          }
          puVar11 = puVar2;
        }
        *(undefined8 **)(param_2 + 0x108) = puVar11;
        param_2[0x119] = 1;
      }
      *(undefined **)((long)register0x00000008 + -0x118) = param_2 + 0x98;
      if (puVar11 != (undefined8 *)(param_2 + 0x98)) {
        FUN_10a9676d0(*(undefined8 *)(param_2 + 0x48));
        *(double *)(param_2 + 0x110) = param_1;
        unaff_x27 = *(long **)(param_2 + 0x108);
        if (unaff_x27 != *(long **)((long)register0x00000008 + -0x118)) {
          unaff_x24 = 0x9ddfea08eb382d69;
          unaff_x25 = (undefined1 *)((long)register0x00000008 + -0x100);
          unaff_d8 = 0x100000001;
          unaff_x28 = 3;
          *(undefined **)((long)register0x00000008 + -0x120) = puVar8;
          do {
            param_1 = (double)unaff_x27[4];
            if (*(double *)(puVar8 + 0x128) < param_1) break;
            if ((char)unaff_x27[7] == '\0') {
              lVar12 = 0x100;
            }
            else {
              if ((char)unaff_x27[7] != '\x01') goto LAB_10a96aef4;
              lVar12 = 0x110;
            }
            unaff_x26 = *(long *)(puVar8 + lVar12);
            *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
            param_1 = (double)(ulong)*(uint *)(unaff_x26 + 0x38);
            *(uint *)((long)register0x00000008 + -0xf0) = *(uint *)(unaff_x26 + 0x38);
            FUN_10a99628c((undefined1 *)((long)register0x00000008 + -0x110),
                          *(undefined8 *)(unaff_x26 + 0x20));
            for (plVar22 = *(long **)(unaff_x26 + 0x28); plVar22 != (long *)0x0;
                plVar22 = (long *)*plVar22) {
              uVar13 = plVar22[2];
              uVar19 = ((ulong)(uint)((int)uVar13 << 3) + 8 ^ uVar13 >> 0x20) * -0x622015f714c7d297;
              uVar19 = (uVar13 >> 0x20 ^ uVar19 >> 0x2f ^ uVar19) * -0x622015f714c7d297;
              unaff_x22 = (undefined *)((uVar19 ^ uVar19 >> 0x2f) * -0x622015f714c7d297);
              unaff_x21 = *(undefined **)((long)register0x00000008 + -0x108);
              if (unaff_x21 != (undefined *)0x0) {
                puVar16 = unaff_x21 + -1;
                if (((ulong)unaff_x21 & (ulong)puVar16) == 0) {
                  puVar8 = (undefined *)((ulong)unaff_x22 & (ulong)puVar16);
                }
                else {
                  puVar8 = unaff_x22;
                  if (unaff_x21 <= unaff_x22) {
                    uVar19 = 0;
                    if (unaff_x21 != (undefined *)0x0) {
                      uVar19 = (ulong)unaff_x22 / (ulong)unaff_x21;
                    }
                    puVar8 = unaff_x22 + -(uVar19 * (long)unaff_x21);
                  }
                }
                plVar20 = *(long **)(*(long *)((long)register0x00000008 + -0x110) + (long)puVar8 * 8
                                    );
                if (plVar20 != (long *)0x0) {
                  do {
                    while( true ) {
                      plVar20 = (long *)*plVar20;
                      if (plVar20 == (long *)0x0) goto LAB_10a96ab18;
                      puVar21 = (undefined *)plVar20[1];
                      if (puVar21 != unaff_x22) break;
                      if (plVar20[2] == uVar13) goto LAB_10a96ac78;
                    }
                    if (((ulong)unaff_x21 & (ulong)puVar16) == 0) {
                      puVar21 = (undefined *)((ulong)puVar21 & (ulong)puVar16);
                    }
                    else if (unaff_x21 <= puVar21) {
                      uVar19 = 0;
                      if (unaff_x21 != (undefined *)0x0) {
                        uVar19 = (ulong)puVar21 / (ulong)unaff_x21;
                      }
                      puVar21 = puVar21 + -(uVar19 * (long)unaff_x21);
                    }
                  } while (puVar21 == puVar8);
                }
              }
LAB_10a96ab18:
              unaff_x20 = (double *)0x68;
              __Znwm();
              *unaff_x20 = 0.0;
              unaff_x20[1] = (double)unaff_x22;
              lVar12 = plVar22[3];
              dVar18 = (double)plVar22[2];
              unaff_x20[3] = (double)plVar22[3];
              unaff_x20[2] = dVar18;
              if (lVar12 != 0) {
                plVar20 = (long *)(lVar12 + 8);
                do {
                  cVar5 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                  if (bVar7) {
                    *plVar20 = *plVar20 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              *(undefined1 *)(unaff_x20 + 0xc) = 3;
              *(double **)((long)register0x00000008 + -0xc0) = unaff_x20 + 4;
              if (*(char *)(plVar22 + 0xc) == '\0') {
                uVar10 = 0;
              }
              else {
                FUN_10a005398((undefined1 *)((long)register0x00000008 + -0xc0),plVar22 + 4);
                uVar10 = *(undefined1 *)(plVar22 + 0xc);
              }
              *(undefined1 *)(unaff_x20 + 0xc) = uVar10;
              fVar23 = (float)(*(long *)((long)register0x00000008 + -0xf8) + 1);
              param_1 = (double)(ulong)(uint)fVar23;
              if ((unaff_x21 == (undefined *)0x0) ||
                 (*(float *)((long)register0x00000008 + -0xf0) * (float)unaff_x21 < fVar23)) {
                uVar13 = 1;
                if ((undefined *)0x2 < unaff_x21) {
                  uVar13 = (ulong)(((ulong)unaff_x21 & (ulong)(unaff_x21 + -1)) != 0);
                }
                uVar13 = uVar13 | (long)unaff_x21 << 1;
                fVar23 = fVar23 / *(float *)((long)register0x00000008 + -0xf0);
                param_1 = (double)(ulong)(uint)fVar23;
                uVar19 = (ulong)fVar23;
                if (uVar13 <= uVar19) {
                  uVar13 = uVar19;
                }
                FUN_10a99628c((undefined1 *)((long)register0x00000008 + -0x110),uVar13);
                unaff_x21 = *(undefined **)((long)register0x00000008 + -0x108);
                if (((ulong)unaff_x21 & (ulong)(unaff_x21 + -1)) == 0) {
                  puVar8 = (undefined *)((ulong)(unaff_x21 + -1) & (ulong)unaff_x22);
                }
                else {
                  puVar8 = unaff_x22;
                  if (unaff_x21 <= unaff_x22) {
                    uVar13 = 0;
                    if (unaff_x21 != (undefined *)0x0) {
                      uVar13 = (ulong)unaff_x22 / (ulong)unaff_x21;
                    }
                    puVar8 = unaff_x22 + -(uVar13 * (long)unaff_x21);
                  }
                }
              }
              lVar12 = *(long *)((long)register0x00000008 + -0x110);
              pdVar17 = *(double **)(lVar12 + (long)puVar8 * 8);
              if (pdVar17 == (double *)0x0) {
                *unaff_x20 = *(double *)((long)register0x00000008 + -0x100);
                *(double **)((long)register0x00000008 + -0x100) = unaff_x20;
                *(undefined1 **)(lVar12 + (long)puVar8 * 8) = unaff_x25;
                if (*unaff_x20 != 0.0) {
                  puVar16 = *(undefined **)((long)*unaff_x20 + 8);
                  if (((ulong)unaff_x21 & (ulong)(unaff_x21 + -1)) == 0) {
                    puVar16 = (undefined *)((ulong)puVar16 & (ulong)(unaff_x21 + -1));
                  }
                  else if (unaff_x21 <= puVar16) {
                    uVar13 = 0;
                    if (unaff_x21 != (undefined *)0x0) {
                      uVar13 = (ulong)puVar16 / (ulong)unaff_x21;
                    }
                    puVar16 = puVar16 + -(uVar13 * (long)unaff_x21);
                  }
                  *(double **)(*(long *)((long)register0x00000008 + -0x110) + (long)puVar16 * 8) =
                       unaff_x20;
                }
              }
              else {
                *unaff_x20 = *pdVar17;
                *pdVar17 = (double)unaff_x20;
              }
              *(long *)((long)register0x00000008 + -0xf8) =
                   *(long *)((long)register0x00000008 + -0xf8) + 1;
LAB_10a96ac78:
            }
            for (plVar22 = *(long **)((long)register0x00000008 + -0x100); plVar22 != (long *)0x0;
                plVar22 = (long *)*plVar22) {
              lVar9 = plVar22[2];
              lVar12 = unaff_x26 + 0x18;
              FUN_10a996c9c();
              if (lVar12 != 0) {
                if (*(char *)(plVar22 + 0xc) == '\x01') {
                  pcVar14 = (code *)plVar22[4];
                  lVar12 = unaff_x27[6];
                  param_1 = (double)unaff_x27[5];
                  *(long *)((long)register0x00000008 + -0xb8) = unaff_x27[6];
                  *(double *)((long)register0x00000008 + -0xc0) = param_1;
                  if (lVar12 != 0) {
                    plVar20 = (long *)(lVar12 + 8);
                    do {
                      cVar5 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                      if (bVar7) {
                        *plVar20 = *plVar20 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  }
                  (*pcVar14)((undefined1 *)((long)register0x00000008 + -0xc0),plVar22 + 4);
                  unaff_x20 = *(double **)((long)register0x00000008 + -0xb8);
                  if (unaff_x20 != (double *)0x0) {
                    pdVar17 = unaff_x20 + 1;
                    do {
                      dVar18 = *pdVar17;
                      cVar5 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(pdVar17,0x10);
                      if (bVar7) {
                        *pdVar17 = (double)((long)dVar18 + -1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
LAB_10a96ad3c:
                    if (dVar18 == 0.0) {
                      (**(code **)((long)*unaff_x20 + 0x10))(unaff_x20);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
                    }
                  }
                }
                else if (*(char *)(plVar22 + 0xc) == '\x02') {
                  unaff_x20 = (double *)(plVar22 + 4);
                  FUN_10a688b40();
                  if (unaff_x20 == (double *)0x0) {
                    if (lVar9 != 0) {
                      uVar3 = plVar22[4];
                      lVar12 = plVar22[5];
                      if (lVar12 != 0) {
                        plVar20 = (long *)(lVar12 + 8);
                        do {
                          cVar5 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                          if (bVar7) {
                            *plVar20 = *plVar20 + 1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                      }
                      lVar4 = unaff_x27[5];
                      plVar20 = (long *)unaff_x27[6];
                      *(long *)((long)register0x00000008 + -0xd0) = lVar4;
                      *(long **)((long)register0x00000008 + -200) = plVar20;
                      if (plVar20 == (long *)0x0) {
                        *(undefined ***)((long)register0x00000008 + -0xb8) = &PTR_FUN_110c344f8;
                        *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar3;
                        *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
                        *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
                        *(long *)((long)register0x00000008 + -0xa8) = lVar12;
                        *(long *)((long)register0x00000008 + -0xa0) = lVar4;
                        *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
                      }
                      else {
                        plVar1 = plVar20 + 1;
                        do {
                          cVar5 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                          if (bVar7) {
                            *plVar1 = *plVar1 + 1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        *(undefined ***)((long)register0x00000008 + -0xb8) = &PTR_FUN_110c344f8;
                        *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar3;
                        *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
                        *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
                        *(long *)((long)register0x00000008 + -0xa8) = lVar12;
                        *(long *)((long)register0x00000008 + -0xa0) = lVar4;
                        *(long **)((long)register0x00000008 + -0x98) = plVar20;
                        do {
                          cVar5 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                          if (bVar7) {
                            *plVar1 = *plVar1 + 1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                      }
                      *(code **)((long)register0x00000008 + -0xc0) = FUN_10a998bec;
                      FUN_10a4634ec(lVar9,(undefined1 *)((long)register0x00000008 + -0xc0));
                      (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))
                                ((undefined1 *)((long)register0x00000008 + -0xb8));
                      if (plVar20 != (long *)0x0) {
                        plVar1 = plVar20 + 1;
                        do {
                          lVar12 = *plVar1;
                          cVar5 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                          if (bVar7) {
                            *plVar1 = lVar12 + -1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        if (lVar12 == 0) {
                          (**(code **)(*plVar20 + 0x10))(plVar20);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
                        }
                      }
                      unaff_x20 = *(double **)((long)register0x00000008 + -0xd8);
                      if (unaff_x20 != (double *)0x0) {
                        pdVar17 = unaff_x20 + 1;
                        do {
                          dVar18 = *pdVar17;
                          cVar5 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(pdVar17,0x10);
                          if (bVar7) {
                            *pdVar17 = (double)((long)dVar18 + -1);
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        goto LAB_10a96ad3c;
                      }
                    }
                  }
                  else {
                    param_1 = (double)CONCAT44((int)((ulong)*unaff_x20 >> 0x20) + 1,
                                               SUB84(*unaff_x20,0) + 1);
                    *unaff_x20 = param_1;
                    FUN_10a9989e8(plVar22[4],unaff_x27 + 5);
                    iVar6 = *(int *)((long)unaff_x20 + 4) + -1;
                    *(int *)((long)unaff_x20 + 4) = iVar6;
                    if (iVar6 == 0) {
                      *(undefined4 *)unaff_x20 = 0;
                    }
                  }
                }
              }
            }
            FUN_10a997774((undefined1 *)((long)register0x00000008 + -0x110));
            puVar8 = *(undefined **)((long)register0x00000008 + -0x120);
            plVar20 = (long *)(*(long **)(puVar8 + 0x120))[1];
            plVar22 = *(long **)(puVar8 + 0x120);
            if (plVar20 == (long *)0x0) {
              do {
                unaff_x27 = (long *)plVar22[2];
                bVar7 = (long *)*unaff_x27 != plVar22;
                plVar22 = unaff_x27;
              } while (bVar7);
            }
            else {
              do {
                unaff_x27 = plVar20;
                plVar20 = (long *)*unaff_x27;
              } while ((long *)*unaff_x27 != (long *)0x0);
            }
            *(long **)(puVar8 + 0x120) = unaff_x27;
            unaff_x23 = 0;
          } while (unaff_x27 != *(long **)((long)register0x00000008 + -0x118));
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80)) {
      return;
    }
    ___stack_chk_fail();
LAB_10a96aef4:
    unaff_x19 = &UNK_10f68728d;
    FUN_10a05bab8();
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xb8))
              ((undefined1 *)((long)register0x00000008 + -0xb8));
    FUN_10a9988d8((undefined1 *)((long)register0x00000008 + -0xd0));
    func_0x00010a004dac((undefined1 *)((long)register0x00000008 + -0xe0));
    FUN_10a997774((undefined1 *)((long)register0x00000008 + -0x110));
    unaff_x30 = FUN_10a96afa0;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x120);
  } while( true );
}



/* Entry: 10a96afa8; end: 10a96b02b;  */

void FUN_10a96afa8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  FUN_10a968214(param_1 + 0xc0);
  puVar6 = (undefined8 *)(param_1 + 0xb0);
  func_0x00010a997870(*puVar6);
  *puVar6 = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 **)(param_1 + 0xa8) = puVar6;
  *(undefined8 **)(param_1 + 0x120) = puVar6;
  plVar5 = *(long **)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
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
  *(undefined1 *)(param_1 + 0x131) = 0;
  return;
}



/* Entry: 10a96b02c; end: 10a96b643;  */

/* WARNING: Removing unreachable block (ram,0x00010a96b180) */
/* WARNING: Removing unreachable block (ram,0x00010a96b1f0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a96b02c(undefined8 *******param_1,long *param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined8 ******ppppppuVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 ******ppppppuVar7;
  undefined8 *******pppppppuVar8;
  undefined1 *puVar9;
  undefined **ppuVar10;
  undefined8 in_x7;
  long lVar11;
  undefined *puVar12;
  undefined8 *****pppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******unaff_x22;
  long *plVar15;
  undefined8 *******pppppppuVar16;
  undefined8 *******pppppppuVar17;
  undefined **ppuVar18;
  undefined8 *******pppppppuStack_1d0;
  undefined8 *****pppppuStack_1c8;
  undefined8 *****pppppuStack_1c0;
  long lStack_1b0;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined8 *******pppppppuStack_178;
  ulong uStack_170;
  byte bStack_161;
  undefined1 uStack_160;
  undefined8 *******pppppppuStack_158;
  undefined8 ******ppppppuStack_150;
  undefined8 ******ppppppuStack_148;
  undefined8 *****pppppuStack_140;
  undefined8 uStack_138;
  long alStack_130 [7];
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 ******ppppppuStack_b0;
  undefined8 ******ppppppuStack_a8;
  undefined8 *****apppppuStack_a0 [7];
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *param_2;
  pppppppuVar16 = param_1;
  if (lVar11 == 0) goto LAB_10a96b51c;
  pppppppuVar16 = param_1 + 0x18;
  ppppppuVar7 = *pppppppuVar16;
  if (ppppppuVar7 == (undefined8 ******)0x0) {
LAB_10a96b0d8:
    FUN_10a96afa8(param_1);
    FUN_10a07e58c(param_1[0x1e]);
  }
  else {
    plVar15 = (long *)param_2[1];
    if (plVar15 != (long *)0x0) {
      plVar1 = plVar15 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lStack_1b0 = lVar11;
    plStack_1a8 = plVar15;
    FUN_10a968d78(ppppppuVar7,&lStack_1b0);
    if (plVar15 != (long *)0x0) {
      plVar1 = plVar15 + 1;
      do {
        lVar11 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
    if (((ulong)ppppppuVar7 & 1) == 0) goto LAB_10a96b0d8;
  }
  FUN_10a968ea8(pppppppuVar16,*param_2,param_2[1]);
  *(undefined1 *)((long)param_1 + 0x131) = 0;
  ppppppuVar7 = param_1[0x18];
  if (*(char *)((long)ppppppuVar7 + 0x2f) < '\0') {
    func_0x000107c3192c(&ppppppuStack_b0,ppppppuVar7[3],ppppppuVar7[4]);
  }
  else {
    ppppppuStack_a8 = (undefined8 ******)ppppppuVar7[4];
    ppppppuStack_b0 = (undefined8 ******)ppppppuVar7[3];
    apppppuStack_a0[0] = ppppppuVar7[5];
  }
  pppppppuVar14 = param_1 + 0x13;
  pppppppuVar17 = (undefined8 *******)*pppppppuVar14;
  unaff_x22 = pppppppuVar14;
  if (pppppppuVar17 == (undefined8 *******)0x0) {
LAB_10a96b174:
    unaff_x22 = pppppppuVar14;
  }
  else {
    do {
      pppppppuVar8 = pppppppuVar17 + 4;
      FUN_10a003e3c(pppppppuVar8,&ppppppuStack_b0);
      if (-1 < (char)pppppppuVar8) {
        unaff_x22 = pppppppuVar17;
      }
      pppppppuVar17 = *(undefined8 ********)((long)pppppppuVar17 + ((ulong)pppppppuVar8 >> 4 & 8));
    } while (pppppppuVar17 != (undefined8 *******)0x0);
    if (unaff_x22 == pppppppuVar14) goto LAB_10a96b174;
    ppppppuVar7 = &ppppppuStack_b0;
    FUN_10a003e3c(ppppppuVar7,unaff_x22 + 4);
    if (((uint)ppppppuVar7 >> 7 & 1) != 0) goto LAB_10a96b174;
  }
  if (pppppppuVar14 != unaff_x22) {
    ppppppuVar7 = *pppppppuVar16;
    if (*(char *)((long)ppppppuVar7 + 0x2f) < '\0') {
      func_0x000107c3192c(&ppppppuStack_b0,ppppppuVar7[3],ppppppuVar7[4]);
    }
    else {
      ppppppuStack_a8 = (undefined8 ******)ppppppuVar7[4];
      ppppppuStack_b0 = (undefined8 ******)ppppppuVar7[3];
      apppppuStack_a0[0] = ppppppuVar7[5];
    }
    FUN_10a96b798(param_1,&ppppppuStack_b0);
    pppppppuVar16 = param_1;
    goto LAB_10a96b51c;
  }
  ppppppuVar7 = *pppppppuVar16;
  if (*(char *)((long)ppppppuVar7 + 0x2f) < '\0') {
    func_0x000107c3192c(&pppppppuStack_1d0,ppppppuVar7[3],ppppppuVar7[4]);
  }
  else {
    pppppuStack_1c8 = ppppppuVar7[4];
    pppppppuStack_1d0 = (undefined8 *******)ppppppuVar7[3];
    pppppuStack_1c0 = ppppppuVar7[5];
  }
  pppppppuVar16 = (undefined8 *******)*pppppppuVar14;
  pppppppuVar17 = pppppppuVar14;
  if (pppppppuVar16 == (undefined8 *******)0x0) {
LAB_10a96b250:
    ppppppuStack_150._0_1_ = 0;
    unaff_x22 = &ppppppuStack_150;
    ppppppuStack_148 = (undefined8 ******)0x0;
    pppppppuStack_158 = (undefined8 *******)0x0;
    uStack_160 = 3;
    pppppppuVar16 = &pppppppuStack_1d0;
    func_0x00010938229c();
    puVar9 = (undefined1 *)&ppppppuStack_150;
    pppppppuStack_158 = pppppppuVar16;
    func_0x00010945a80c(puVar9,&UNK_10f68582f);
    uVar4 = *puVar9;
    *puVar9 = uStack_160;
    ppppppuVar7 = *(undefined8 *******)(puVar9 + 8);
    uStack_160 = uVar4;
    *(undefined8 ********)(puVar9 + 8) = pppppppuStack_158;
    pppppppuStack_158 = (undefined8 *******)ppppppuVar7;
    func_0x000109380ffc(&pppppppuStack_158);
    FUN_10a0c32e4(&pppppppuStack_178,&ppppppuStack_150,0xffffffff,0x20,0,0);
    pppppppuVar16 = pppppppuStack_178;
    if (-1 < (char)bStack_161) {
      uStack_170 = (ulong)bStack_161;
      pppppppuVar16 = &pppppppuStack_178;
    }
    FUN_10a3bf330(&pppppuStack_140,pppppppuVar16,uStack_170);
    FUN_10a96b670(&uStack_1a0,param_1[0xe],param_1);
    ppuVar10 = (undefined **)0x138;
    __Znwm();
    ppppppuStack_b0 = (undefined8 ******)pppppuStack_140;
    ppuVar18 = ppuVar10 + 1;
    *ppuVar18 = (undefined *)0x0;
    ppuVar10[2] = (undefined *)0x0;
    *ppuVar10 = (undefined *)&PTR_FUN_110b9f3b0;
    ppuVar2 = ppuVar10 + 3;
    pppppuStack_140 = (undefined8 *****)0x0;
    ppppppuStack_a8 = (undefined8 ******)uStack_138;
    (**(code **)(alStack_130[0] + 0x10))(apppppuStack_a0,alStack_130);
    uStack_68 = uStack_f8;
    ppppppuVar7 = param_1[8];
    pppppppuVar16 = (undefined8 *******)param_1[7];
    if (-1 < (char)*(byte *)((long)param_1 + 0x4f)) {
      ppppppuVar7 = (undefined8 ******)(ulong)*(byte *)((long)param_1 + 0x4f);
      pppppppuVar16 = param_1 + 7;
    }
    ppuStack_f0 = (undefined **)FUN_10a997a78;
    ppuStack_e8 = &PTR_FUN_110c34490;
    uStack_e0 = uStack_1a0;
    uStack_d0 = uStack_190;
    uStack_d8 = uStack_198;
    uStack_198 = 0;
    uStack_190 = 0;
    FUN_10a23708c(ppuVar2,&UNK_10f687264,0x18,&UNK_10f647b45,3,&ppppppuStack_b0,1,in_x7,
                  pppppppuVar16,ppppppuVar7,&ppuStack_f0);
    (*(code *)*ppuStack_e8)(&ppuStack_e8);
    FUN_10a042634(&ppppppuStack_b0);
    ppuStack_188 = ppuVar2;
    ppuStack_180 = ppuVar10;
    FUN_10a96b718(&uStack_1a0);
    ppppppuStack_b0 = (undefined8 ******)0x0;
    ppppppuStack_a8 = (undefined8 ******)0x0;
    ppppppuVar7 = param_1[0xb];
    if (((ppppppuVar7 != (undefined8 ******)0x0) &&
        (__ZNSt3__119__shared_weak_count4lockEv(), ppppppuStack_a8 = ppppppuVar7,
        ppppppuVar7 != (undefined8 ******)0x0)) &&
       (ppppppuStack_b0 = param_1[10], ppppppuStack_b0 != (undefined8 ******)0x0)) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar6) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      ppuStack_f0 = ppuVar2;
      ppuStack_e8 = ppuVar10;
      (*(code *)**ppppppuStack_b0)(ppppppuStack_b0,&ppuStack_f0);
      ppuVar2 = ppuStack_e8;
      if (ppuStack_e8 != (undefined **)0x0) {
        ppuVar10 = ppuStack_e8 + 1;
        do {
          puVar12 = *ppuVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
          if (bVar6) {
            *ppuVar10 = puVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar12 == (undefined *)0x0) {
          (**(code **)(*ppuStack_e8 + 0x10))(ppuStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar2);
        }
      }
    }
    ppppppuVar7 = ppppppuStack_a8;
    if (ppppppuStack_a8 != (undefined8 ******)0x0) {
      ppppppuVar3 = ppppppuStack_a8 + 1;
      do {
        pppppuVar13 = *ppppppuVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar3,0x10);
        if (bVar6) {
          *ppppppuVar3 = (undefined8 *****)((long)pppppuVar13 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppppuVar13 == (undefined8 *****)0x0) {
        (*(code *)(*ppppppuStack_a8)[2])(ppppppuStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar7);
      }
    }
    ppuVar2 = ppuStack_180;
    if (ppuStack_180 != (undefined **)0x0) {
      ppuVar10 = ppuStack_180 + 1;
      do {
        puVar12 = *ppuVar10;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
        if (bVar6) {
          *ppuVar10 = puVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (puVar12 == (undefined *)0x0) {
        (**(code **)(*ppuStack_180 + 0x10))(ppuStack_180);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar2);
      }
    }
    FUN_10a042634(&pppppuStack_140);
    if ((char)bStack_161 < '\0') {
      __ZdlPv(pppppppuStack_178);
    }
    pppppppuVar16 = &ppppppuStack_148;
    func_0x000109380ffc(pppppppuVar16,ppppppuStack_150._0_1_);
  }
  else {
    do {
      pppppppuVar8 = pppppppuVar16 + 4;
      FUN_10a003e3c(pppppppuVar8,&pppppppuStack_1d0);
      if (-1 < (char)pppppppuVar8) {
        pppppppuVar17 = pppppppuVar16;
      }
      pppppppuVar16 = *(undefined8 ********)((long)pppppppuVar16 + ((ulong)pppppppuVar8 >> 4 & 8));
    } while (pppppppuVar16 != (undefined8 *******)0x0);
    if (pppppppuVar17 == pppppppuVar14) goto LAB_10a96b250;
    pppppppuVar16 = &pppppppuStack_1d0;
    FUN_10a003e3c(pppppppuVar16,pppppppuVar17 + 4);
    unaff_x22 = (undefined8 *******)0x0;
    if (((uint)pppppppuVar16 >> 7 & 1) != 0) goto LAB_10a96b250;
  }
  if ((long)pppppuStack_1c0 < 0) {
    pppppppuVar16 = pppppppuStack_1d0;
    __ZdlPv();
  }
LAB_10a96b51c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&ppuStack_f0);
  func_0x00010a05a8c4(&ppppppuStack_b0);
  FUN_10a05bd88(&ppuStack_188);
  FUN_10a042634(&pppppuStack_140);
  if ((char)bStack_161 < '\0') {
    __ZdlPv(pppppppuStack_178);
  }
  func_0x000109380ffc(unaff_x22 + 1,ppppppuStack_150._0_1_);
  if ((long)pppppuStack_1c0 < 0) {
    __ZdlPv(pppppppuStack_1d0);
  }
  __Unwind_Resume();
  *(undefined1 *)((long)pppppppuVar16 + 0x131) = 0;
  return;
}



/* Entry: 10a96b644; end: 10a96b64b;  */

void FUN_10a96b644(long param_1)

{
  *(undefined1 *)(param_1 + 0x131) = 0;
  return;
}



/* Entry: 10a96b64c; end: 10a96b66f;  */

void FUN_10a96b64c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  FUN_10a96afa8();
  lVar2 = *(long *)(param_1 + 0xf0);
  FUN_10a07e628(auStack_48,lVar2 + 0x18);
  for (plVar3 = (long *)lStack_38; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    lVar1 = lVar2 + 0x18;
    FUN_10a07d408(lVar1,plVar3 + 2);
    if (lVar1 != 0) {
      if (*(char *)(plVar3 + 0xc) == '\x01') {
        (*(code *)plVar3[4])(plVar3 + 4);
      }
      else if (*(char *)(plVar3 + 0xc) == '\x02') {
        FUN_10a05e614(plVar3 + 4);
      }
    }
  }
  FUN_10a004c5c(auStack_48);
  return;
}



/* Entry: 10a96b670; end: 10a96b717;  */

void FUN_10a96b670(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  plVar6 = (long *)0x48;
  __Znwm();
  plVar6[2] = (long)&PTR_DAT_110c33ae0;
  plVar6[3] = param_3;
  puVar2 = (undefined8 *)param_2[0xb];
  lVar3 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar2;
  *puVar2 = plVar6;
  param_2[0xb] = plVar6;
  param_2[0xc] = lVar3 + 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = plVar6;
  param_1[2] = uVar8;
  param_1[1] = uVar7;
  return;
}



/* Entry: 10a96b718; end: 10a96b797;  */

undefined8 * FUN_10a96b718(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a96b798; end: 10a96bdd7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a96b798(long param_1,undefined8 *param_2)

{
  undefined8 ******ppppppuVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *****pppppuVar11;
  undefined8 *****pppppuVar12;
  long lVar13;
  undefined8 *****pppppuVar14;
  long *plVar15;
  int iVar16;
  undefined8 ******ppppppuVar17;
  long *plVar18;
  undefined8 ******ppppppuVar19;
  long *plVar20;
  undefined8 *******pppppppuVar21;
  undefined8 *****pppppuVar22;
  ulong uVar23;
  int iVar24;
  undefined8 ******ppppppuVar25;
  double dVar26;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 *******pppppppuStack_90;
  undefined8 ******ppppppuStack_88;
  ulong uStack_80;
  
  lVar13 = *(long *)(param_1 + 0xc0);
  if (lVar13 != 0) {
    if (*(char *)(lVar13 + 0x2f) < '\0') {
      func_0x000107c3192c(&pppppppuStack_90,*(undefined8 *)(lVar13 + 0x18),
                          *(undefined8 *)(lVar13 + 0x20));
    }
    else {
      ppppppuStack_88 = *(undefined8 *******)(lVar13 + 0x20);
      pppppppuStack_90 = *(undefined8 ********)(lVar13 + 0x18);
      uStack_80 = *(ulong *)(lVar13 + 0x28);
    }
    uVar23 = uStack_80;
    bVar5 = *(byte *)((long)param_2 + 0x17);
    puVar9 = (undefined8 *)param_2[1];
    if (-1 < (char)bVar5) {
      puVar9 = (undefined8 *)(ulong)bVar5;
    }
    ppppppuVar17 = ppppppuStack_88;
    if (-1 < (long)uStack_80) {
      ppppppuVar17 = (undefined8 ******)(uStack_80 >> 0x38);
    }
    if ((undefined8 ******)puVar9 == ppppppuVar17) {
      puVar9 = (undefined8 *)*param_2;
      if (-1 < (char)bVar5) {
        puVar9 = param_2;
      }
      pppppppuVar21 = pppppppuStack_90;
      if (-1 < (long)uStack_80) {
        pppppppuVar21 = &pppppppuStack_90;
      }
      _memcmp(puVar9,pppppppuVar21);
      bVar8 = (int)puVar9 == 0;
    }
    else {
      bVar8 = false;
    }
    if ((long)uVar23 < 0) {
      __ZdlPv(pppppppuStack_90);
    }
    if (bVar8) {
      puVar9 = (undefined8 *)(param_1 + 0x90);
      puVar10 = puVar9;
      FUN_10a99874c(puVar9,&lStack_a8,param_2);
      pppppppuVar21 = (undefined8 *******)*puVar10;
      if (pppppppuVar21 == (undefined8 *******)0x0) {
        pppppppuVar21 = (undefined8 *******)0x48;
        __Znwm();
        uStack_80 = 0;
        pppppppuStack_90 = pppppppuVar21;
        ppppppuStack_88 = (undefined8 ******)puVar9;
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          func_0x000107c3192c(pppppppuVar21 + 4,*param_2,param_2[1]);
        }
        else {
          ppppppuVar17 = (undefined8 ******)*param_2;
          pppppppuVar21[5] = (undefined8 ******)param_2[1];
          pppppppuVar21[4] = ppppppuVar17;
          pppppppuVar21[6] = (undefined8 ******)param_2[2];
        }
        pppppppuVar21[7] = (undefined8 ******)0x0;
        pppppppuVar21[8] = (undefined8 ******)0x0;
        FUN_10a9987d0(puVar9,lStack_a8,puVar10,pppppppuVar21);
      }
      ppppppuVar17 = pppppppuVar21[8];
      ppppppuVar25 = pppppppuVar21[8];
      ppppppuVar19 = pppppppuVar21[7];
      if (ppppppuVar17 != (undefined8 ******)0x0) {
        ppppppuVar1 = ppppppuVar17 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
          if (bVar8) {
            *ppppppuVar1 = (undefined8 *****)((long)*ppppppuVar1 + 1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      plVar18 = *(long **)(param_1 + 0xd8);
      *(undefined8 *******)(param_1 + 0xd8) = ppppppuVar25;
      *(undefined8 *******)(param_1 + 0xd0) = ppppppuVar19;
      if (plVar18 != (long *)0x0) {
        plVar15 = plVar18 + 1;
        do {
          lVar13 = *plVar15;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar8) {
            *plVar15 = lVar13 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
        ppppppuVar17 = *(undefined8 *******)(param_1 + 0xd8);
      }
      lVar13 = *(long *)(param_1 + 0xd0);
      if (ppppppuVar17 != (undefined8 ******)0x0) {
        ppppppuVar19 = ppppppuVar17 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppuVar19,0x10);
          if (bVar8) {
            *ppppppuVar19 = (undefined8 *****)((long)*ppppppuVar19 + 1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      pppppuVar22 = (undefined8 *****)(param_1 + 0xb0);
      func_0x00010a997870(*pppppuVar22);
      ppppppuVar19 = (undefined8 ******)(param_1 + 0xa8);
      *ppppppuVar19 = pppppuVar22;
      *pppppuVar22 = (undefined8 ****)0x0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      pppppppuStack_90 = (undefined8 *******)0x0;
      ppppppuStack_88 = (undefined8 ******)0x0;
      uStack_80 = 0;
      FUN_10a108d94(&pppppppuStack_90,*(long *)(lVar13 + 0x68),*(long *)(lVar13 + 0x70),
                    *(long *)(lVar13 + 0x70) - *(long *)(lVar13 + 0x68) >> 3);
      lVar2 = 0x50;
      if ((undefined8 *******)ppppppuStack_88 != pppppppuStack_90) {
        lVar2 = 0x68;
      }
      lVar3 = 0x58;
      if ((undefined8 *******)ppppppuStack_88 != pppppppuStack_90) {
        lVar3 = 0x70;
      }
      lStack_a0 = 0;
      uStack_98 = 0;
      lStack_a8 = 0;
      FUN_10a108d94(&lStack_a8,*(long *)(lVar13 + lVar2),*(long *)(lVar13 + lVar3),
                    *(long *)(lVar13 + lVar3) - *(long *)(lVar13 + lVar2) >> 3);
      if (pppppppuStack_90 != (undefined8 *******)0x0) {
        ppppppuStack_88 = pppppppuStack_90;
        __ZdlPv();
      }
      lStack_c0 = 0;
      lStack_b8 = 0;
      uStack_b0 = 0;
      FUN_10a108d94(&lStack_c0,*(long *)(lVar13 + 0x50),*(long *)(lVar13 + 0x58),
                    *(long *)(lVar13 + 0x58) - *(long *)(lVar13 + 0x50) >> 3);
      if (lStack_a0 != lStack_a8) {
        uVar23 = 0;
        iVar24 = 0;
        iVar4 = *(int *)(lVar13 + 0x48);
        iVar16 = 1;
        do {
          dVar26 = *(double *)(lStack_a8 + uVar23 * 8);
          if (((ulong)(lStack_b8 - lStack_c0 >> 3) <= (ulong)(long)iVar24) ||
             (dVar26 < *(double *)(lStack_c0 + (long)iVar24 * 8))) {
            bVar8 = false;
          }
          else {
            iVar24 = iVar24 + 1;
            iVar16 = 1;
            bVar8 = true;
          }
          plVar18 = (long *)0x40;
          __Znwm();
          plVar20 = plVar18 + 1;
          *plVar20 = 0;
          plVar18[2] = 0;
          *plVar18 = (long)&PTR_DAT_110c344b8;
          plVar15 = plVar18 + 3;
          *plVar15 = (long)&PTR_FUN_110c31b20;
          plVar18[4] = 0;
          plVar18[5] = 0;
          dVar26 = dVar26 / 1000.0;
          plVar18[6] = (long)dVar26;
          *(int *)(plVar18 + 7) = iVar16;
          if (bVar8) {
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar8) {
                *plVar20 = *plVar20 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            lVar13 = 0x40;
            __Znwm();
            uStack_80 = 1;
            *(double *)(lVar13 + 0x20) = dVar26;
            *(long **)(lVar13 + 0x28) = plVar15;
            *(long **)(lVar13 + 0x30) = plVar18;
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar8) {
                *plVar20 = *plVar20 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            *(undefined1 *)(lVar13 + 0x38) = 1;
            pppppuVar14 = (undefined8 *****)*pppppuVar22;
            pppppuVar11 = pppppuVar22;
            while (pppppuVar12 = pppppuVar11, pppppuVar14 != (undefined8 *****)0x0) {
              while (pppppuVar11 = pppppuVar14, (double)pppppuVar11[4] <= dVar26) {
                pppppuVar14 = (undefined8 *****)pppppuVar11[1];
                if ((undefined8 *****)pppppuVar11[1] == (undefined8 *****)0x0) {
                  pppppuVar12 = pppppuVar11 + 1;
                  goto LAB_10a96bb30;
                }
              }
              pppppuVar14 = (undefined8 *****)*pppppuVar11;
            }
LAB_10a96bb30:
            ppppppuStack_88 = ppppppuVar19;
            func_0x00010a998930(ppppppuVar19,pppppuVar11,pppppuVar12);
            pppppppuStack_90 = (undefined8 *******)0x0;
            func_0x00010a998984(&pppppppuStack_90);
            if (plVar18 != (long *)0x0) {
              plVar20 = plVar18 + 1;
              do {
                lVar13 = *plVar20;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar8) {
                  *plVar20 = lVar13 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (lVar13 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
              }
            }
            if (plVar18 != (long *)0x0) goto LAB_10a96bb9c;
          }
          else {
LAB_10a96bb9c:
            plVar20 = plVar18 + 1;
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar8) {
                *plVar20 = *plVar20 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          dVar26 = (double)plVar18[6];
          lVar13 = 0x40;
          __Znwm();
          uStack_80 = 1;
          *(double *)(lVar13 + 0x20) = dVar26;
          *(long **)(lVar13 + 0x28) = plVar15;
          *(long **)(lVar13 + 0x30) = plVar18;
          if (plVar18 != (long *)0x0) {
            plVar15 = plVar18 + 1;
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar8) {
                *plVar15 = *plVar15 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          *(undefined1 *)(lVar13 + 0x38) = 0;
          pppppuVar14 = (undefined8 *****)*pppppuVar22;
          pppppuVar11 = pppppuVar22;
          while (pppppuVar12 = pppppuVar11, pppppuVar14 != (undefined8 *****)0x0) {
            while (pppppuVar11 = pppppuVar14, (double)pppppuVar11[4] <= dVar26) {
              pppppuVar14 = (undefined8 *****)pppppuVar11[1];
              if ((undefined8 *****)pppppuVar11[1] == (undefined8 *****)0x0) {
                pppppuVar12 = pppppuVar11 + 1;
                goto LAB_10a96bc24;
              }
            }
            pppppuVar14 = (undefined8 *****)*pppppuVar11;
          }
LAB_10a96bc24:
          ppppppuStack_88 = ppppppuVar19;
          func_0x00010a998930(ppppppuVar19,pppppuVar11,pppppuVar12);
          pppppppuStack_90 = (undefined8 *******)0x0;
          func_0x00010a998984(&pppppppuStack_90);
          if (plVar18 != (long *)0x0) {
            plVar15 = plVar18 + 1;
            do {
              lVar13 = *plVar15;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar8) {
                *plVar15 = lVar13 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
            }
          }
          if (plVar18 != (long *)0x0) {
            plVar15 = plVar18 + 1;
            do {
              lVar13 = *plVar15;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar8) {
                *plVar15 = lVar13 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
            }
          }
          iVar6 = 0;
          if (iVar4 != 0) {
            iVar6 = iVar16 / iVar4;
          }
          iVar16 = (iVar16 - iVar6 * iVar4) + 1;
          uVar23 = uVar23 + 1;
        } while (uVar23 < (ulong)(lStack_a0 - lStack_a8 >> 3));
      }
      if (lStack_c0 != 0) {
        lStack_b8 = lStack_c0;
        __ZdlPv(lStack_c0);
      }
      if (lStack_a8 != 0) {
        lStack_a0 = lStack_a8;
        __ZdlPv();
      }
      if (ppppppuVar17 != (undefined8 ******)0x0) {
        ppppppuVar19 = ppppppuVar17 + 1;
        do {
          pppppuVar22 = *ppppppuVar19;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppuVar19,0x10);
          if (bVar8) {
            *ppppppuVar19 = (undefined8 *****)((long)pppppuVar22 + -1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (pppppuVar22 == (undefined8 *****)0x0) {
          (*(code *)(*ppppppuVar17)[2])(ppppppuVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar17);
        }
      }
      FUN_10a07e58c(*(undefined8 *)(param_1 + 0xe0));
    }
  }
  return;
}



/* Entry: 10a96bdd8; end: 10a96be73;  */

void FUN_10a96bdd8(float *param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *param_3 * 2.0 + -1.0;
  fVar6 = param_3[1] * -2.0 + 1.0;
  fVar3 = -1.0;
  fVar1 = fVar5;
  fVar2 = fVar6;
  func_0x00010a42cf34();
  fVar4 = 1.0;
  func_0x00010a42cf34(param_2);
  *param_1 = fVar1;
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  param_1[3] = fVar5 - fVar1;
  param_1[4] = fVar6 - fVar2;
  param_1[5] = fVar4 - fVar3;
  return;
}



/* Entry: 10a96be74; end: 10a96c207;  */

void FUN_10a96be74(long *param_1,long *param_2,float *param_3,float *param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
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
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  undefined1 uStack_fc;
  undefined8 uStack_f8;
  float fStack_f0;
  undefined8 uStack_e8;
  float fStack_e0;
  undefined8 uStack_d8;
  float fStack_d0;
  undefined8 uStack_c8;
  float fStack_c0;
  undefined8 uStack_b8;
  float fStack_b0;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a96c208(param_1,param_2[1] - *param_2 >> 4);
  plVar2 = (long *)param_2[1];
  for (param_2 = (long *)*param_2; param_2 != plVar2; param_2 = param_2 + 2) {
    lVar8 = *param_2;
    func_0x0001094f5708(&uStack_e8,lVar8 + 0x34);
    fVar10 = *param_3;
    fVar13 = param_3[1];
    fVar15 = param_3[2];
    fStack_f0 = fVar10 * fStack_e0 + fVar13 * fStack_d0 + fVar15 * fStack_c0 + fStack_b0;
    fVar16 = (float)((ulong)uStack_e8 >> 0x20);
    fVar12 = (float)((ulong)uStack_d8 >> 0x20);
    fVar14 = (float)((ulong)uStack_c8 >> 0x20);
    fVar17 = (float)((ulong)uStack_b8 >> 0x20);
    fVar11 = (float)uStack_e8 * fVar10 + (float)uStack_d8 * fVar13 +
             (float)uStack_c8 * fVar15 + (float)uStack_b8;
    fVar10 = fVar16 * fVar10 + fVar12 * fVar13 + fVar14 * fVar15 + fVar17;
    uStack_f8 = CONCAT44(fVar10,fVar11);
    fVar13 = *param_4;
    fVar15 = param_4[1];
    fVar32 = param_4[2];
    plStack_130 = (long *)CONCAT44((fVar16 * fVar13 + fVar12 * fVar15 + fVar17 + fVar14 * fVar32) -
                                   fVar10,((float)uStack_e8 * fVar13 + (float)uStack_d8 * fVar15 +
                                          (float)uStack_b8 + (float)uStack_c8 * fVar32) - fVar11);
    plStack_128 = (long *)CONCAT44(plStack_128._4_4_,
                                   (fStack_e0 * fVar13 + fStack_d0 * fVar15 +
                                   fStack_b0 + fStack_c0 * fVar32) - fStack_f0);
    FUN_10acb0120(&uStack_120,*param_2,&uStack_f8,&plStack_130,1);
    uVar6 = uStack_fc;
    fVar15 = fStack_108;
    fVar14 = fStack_10c;
    fVar13 = fStack_110;
    fVar11 = fStack_114;
    fVar10 = fStack_118;
    if ((char)uStack_120 == '\x01') {
      fVar16 = uStack_120._4_4_;
      fVar17 = *(float *)(lVar8 + 0x3c);
      fVar32 = *(float *)(lVar8 + 0x4c);
      fVar31 = *(float *)(lVar8 + 0x5c);
      uVar29 = *(undefined8 *)(lVar8 + 0x34);
      uVar23 = *(undefined8 *)(lVar8 + 0x44);
      uVar20 = *(undefined8 *)(lVar8 + 0x54);
      uVar26 = *(undefined8 *)(lVar8 + 100);
      fVar18 = *(float *)(lVar8 + 0x6c);
      plVar7 = (long *)0x60;
      __Znwm();
      fVar12 = fVar17 * fVar13 + fVar32 * fVar14 + fVar18 * 0.0 + fVar31 * fVar15;
      fVar28 = (float)uVar29;
      fVar30 = (float)((ulong)uVar29 >> 0x20);
      fVar22 = (float)uVar23;
      fVar24 = (float)((ulong)uVar23 >> 0x20);
      fVar19 = (float)uVar20;
      fVar21 = (float)((ulong)uVar20 >> 0x20);
      plVar9 = plVar7 + 1;
      *plVar9 = 0;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_DAT_110c34520;
      plVar7[3] = (long)&PTR_FUN_110c6aab0;
      plVar7[4] = 0;
      plVar7[5] = 0;
      plVar7[0xb] = 0;
      plVar7[10] = 0;
      *(undefined8 *)((long)plVar7 + 0x3c) = 0;
      *(undefined8 *)((long)plVar7 + 0x41) = 0;
      fVar25 = (float)uVar26;
      fVar27 = (float)((ulong)uVar26 >> 0x20);
      plVar7[6] = CONCAT44(fVar30 * fVar16 + fVar24 * fVar10 + fVar21 * fVar11 + fVar27,
                           fVar28 * fVar16 + fVar22 * fVar10 + fVar19 * fVar11 + fVar25);
      *(float *)(plVar7 + 7) = fVar16 * fVar17 + fVar10 * fVar32 + fVar11 * fVar31 + fVar18;
      func_0x00010a58e2e0(plVar7 + 10,param_2);
      fVar10 = fVar28 * fVar13 + fVar22 * fVar14 + fVar25 * 0.0 + fVar19 * fVar15;
      fVar11 = fVar30 * fVar13 + fVar24 * fVar14 + fVar27 * 0.0 + fVar21 * fVar15;
      fVar13 = 1.0 / SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11);
      *(ulong *)((long)plVar7 + 0x3c) = CONCAT44(fVar11 * fVar13,fVar10 * fVar13);
      *(float *)((long)plVar7 + 0x44) = fVar12 * fVar13;
      *(undefined1 *)(plVar7 + 9) = uVar6;
      plStack_130 = plVar7 + 3;
      plStack_128 = plVar7;
      func_0x00010a96c2a4(param_1,&plStack_130);
      do {
        lVar8 = *plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  lVar1 = *param_1;
  lVar3 = param_1[1];
  lVar8 = 0;
  if (lVar3 != lVar1) {
    lVar8 = LZCOUNT(lVar3 - lVar1 >> 4) * -2 + 0x7e;
  }
  uStack_120 = param_3;
  FUN_10a998ca4(lVar1,lVar3,&uStack_120,lVar8,1);
  return;
}



/* Entry: 10a96c208; end: 10a96c3b7;  */

void FUN_10a96c208(long *param_1,float *param_2,float *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  code *pcVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  float *pfVar13;
  long lVar14;
  long *extraout_x8;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar27;
  undefined8 uVar26;
  float fVar28;
  float fVar30;
  undefined8 uVar29;
  float fVar31;
  float fVar33;
  undefined8 uVar32;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  char acStack_1f8 [4];
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined8 uStack_1e0;
  float fStack_1d8;
  float *pfStack_1d0;
  float *pfStack_1c8;
  float *pfStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  float fStack_1a8;
  undefined8 uStack_1a0;
  float fStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar14 = *param_1;
  if ((float *)(param_1[2] - lVar14 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      FUN_10a989c04();
      puVar18 = (undefined8 *)param_1[1];
      if (puVar18 < (undefined8 *)param_1[2]) {
        lVar14 = *(long *)(param_2 + 2);
        uVar26 = *(undefined8 *)param_2;
        puVar18[1] = *(undefined8 *)(param_2 + 2);
        *puVar18 = uVar26;
        if (lVar14 != 0) {
          plVar1 = (long *)(lVar14 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        puVar18 = puVar18 + 2;
      }
      else {
        lVar14 = (long)puVar18 - *param_1;
        uVar10 = (lVar14 >> 4) + 1;
        if (uVar10 >> 0x3c != 0) {
          FUN_10a989c04();
          *extraout_x8 = 0;
          extraout_x8[1] = 0;
          extraout_x8[2] = 0;
          plVar1 = (long *)*param_1;
          plVar21 = (long *)param_1[1];
          if ((long)plVar21 - (long)plVar1 != 0) {
            uVar10 = (long)plVar21 - (long)plVar1 >> 4;
            if (uVar10 >> 0x3c != 0) {
              FUN_10a989c98();
LAB_10a96c7ac:
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10a96c7b0);
              (*pcVar9)();
            }
            pfVar13 = param_2;
            plStack_1b0 = extraout_x8;
            FUN_10a989cac();
            lVar14 = uVar10 - (extraout_x8[1] - *extraout_x8);
            _memcpy(lVar14);
            pfStack_1d0 = (float *)*extraout_x8;
            *extraout_x8 = lVar14;
            extraout_x8[1] = uVar10;
            lStack_1b8 = extraout_x8[2];
            extraout_x8[2] = uVar10 + (long)pfVar13 * 0x10;
            pfStack_1c8 = pfStack_1d0;
            pfStack_1c0 = pfStack_1d0;
            func_0x00010a989ce0(&pfStack_1d0);
            plVar1 = (long *)*param_1;
            plVar21 = (long *)param_1[1];
          }
          do {
            if (plVar1 == plVar21) {
              lVar15 = *extraout_x8;
              lVar3 = extraout_x8[1];
              lVar14 = 0;
              if (lVar3 != lVar15) {
                lVar14 = LZCOUNT(lVar3 - lVar15 >> 4) * -2 + 0x7e;
              }
              pfStack_1d0 = param_2;
              FUN_10a99a628(lVar15,lVar3,&pfStack_1d0,lVar14,1);
              return;
            }
            lVar14 = *plVar1;
            func_0x0001094f5708(&pfStack_1d0,lVar14 + 0x1c);
            fVar36 = fStack_198;
            fVar8 = fStack_1a8;
            fVar22 = *param_2;
            fVar23 = param_2[1];
            fVar24 = param_2[2];
            fVar6 = pfStack_1c8._0_4_;
            fVar7 = (float)lStack_1b8;
            fStack_1d8 = fVar22 * pfStack_1c8._0_4_ + fVar23 * (float)lStack_1b8 +
                         fVar24 * fStack_1a8 + fStack_198;
            fVar35 = SUB84(pfStack_1d0,0);
            fVar37 = (float)((ulong)pfStack_1d0 >> 0x20);
            fVar31 = SUB84(pfStack_1c0,0);
            fVar33 = (float)((ulong)pfStack_1c0 >> 0x20);
            fVar28 = SUB84(plStack_1b0,0);
            fVar30 = (float)((ulong)plStack_1b0 >> 0x20);
            fVar25 = (float)uStack_1a0;
            fVar27 = (float)((ulong)uStack_1a0 >> 0x20);
            uStack_1e0 = CONCAT44(fVar37 * fVar22 + fVar33 * fVar23 + fVar30 * fVar24 + fVar27,
                                  fVar35 * fVar22 + fVar31 * fVar23 + fVar28 * fVar24 + fVar25);
            fVar22 = *param_3;
            fVar23 = param_3[1];
            fVar24 = param_3[2];
            plVar11 = *(long **)(*(long *)(*plVar1 + 0x78) + 0xe0);
            (**(code **)(*plVar11 + 0x90))();
            lStack_190 = CONCAT44((fVar37 * fVar22 + fVar33 * fVar23 + fVar27 + fVar30 * fVar24) -
                                  (float)((ulong)uStack_1e0 >> 0x20),
                                  (fVar35 * fVar22 + fVar31 * fVar23 + fVar25 + fVar28 * fVar24) -
                                  (float)uStack_1e0);
            lStack_188 = CONCAT44(lStack_188._4_4_,
                                  (fVar6 * fVar22 + fVar7 * fVar23 + fVar36 + fVar8 * fVar24) -
                                  fStack_1d8);
            FUN_10ab4e33c(acStack_1f8,*plVar11,&uStack_1e0,&lStack_190,1);
            fVar8 = fStack_1ec;
            fVar7 = fStack_1f0;
            fVar6 = fStack_1f4;
            if (acStack_1f8[0] == '\x01') {
              fVar22 = *(float *)(lVar14 + 0x24);
              fVar23 = *(float *)(lVar14 + 0x34);
              fVar36 = *(float *)(lVar14 + 0x44);
              uVar34 = *(undefined8 *)(lVar14 + 0x1c);
              uVar32 = *(undefined8 *)(lVar14 + 0x2c);
              uVar29 = *(undefined8 *)(lVar14 + 0x3c);
              uVar26 = *(undefined8 *)(lVar14 + 0x4c);
              fVar24 = *(float *)(lVar14 + 0x54);
              plVar12 = (long *)0x50;
              __Znwm();
              plVar19 = plVar12 + 1;
              *plVar19 = 0;
              plVar12[2] = 0;
              plVar20 = plVar12 + 3;
              *plVar20 = (long)&PTR_FUN_110c6ac70;
              *plVar12 = (long)&PTR_FUN_110c34570;
              plVar12[4] = 0;
              plVar12[5] = 0;
              plVar12[8] = 0;
              plVar12[9] = 0;
              plVar12[6] = CONCAT44((float)((ulong)uVar34 >> 0x20) * fVar6 +
                                    (float)((ulong)uVar32 >> 0x20) * fVar7 +
                                    (float)((ulong)uVar29 >> 0x20) * fVar8 +
                                    (float)((ulong)uVar26 >> 0x20),
                                    (float)uVar34 * fVar6 + (float)uVar32 * fVar7 +
                                    (float)uVar29 * fVar8 + (float)uVar26);
              *(float *)(plVar12 + 7) = fVar6 * fVar22 + fVar7 * fVar23 + fVar8 * fVar36 + fVar24;
              plVar11 = plVar1;
              func_0x00010a4afa48();
              puVar18 = (undefined8 *)extraout_x8[1];
              if (puVar18 < (undefined8 *)extraout_x8[2]) {
                *puVar18 = plVar20;
                puVar18[1] = plVar12;
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar5) {
                    *plVar19 = *plVar19 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                puVar18 = puVar18 + 2;
              }
              else {
                lVar14 = (long)puVar18 - *extraout_x8;
                uVar10 = (lVar14 >> 4) + 1;
                if (uVar10 >> 0x3c != 0) {
                  FUN_10a989c98();
                  goto LAB_10a96c7ac;
                }
                uVar16 = extraout_x8[2] - *extraout_x8;
                uVar17 = (long)uVar16 >> 3;
                if (uVar17 <= uVar10) {
                  uVar17 = uVar10;
                }
                if (0x7fffffffffffffef < uVar16) {
                  uVar17 = 0xfffffffffffffff;
                }
                FUN_10a989cac();
                puVar2 = (undefined8 *)(uVar17 + lVar14);
                *puVar2 = plVar20;
                puVar2[1] = plVar12;
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar5) {
                    *plVar19 = *plVar19 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                puVar18 = puVar2 + 2;
                lVar14 = (long)puVar2 - (extraout_x8[1] - *extraout_x8);
                _memcpy(lVar14);
                lStack_190 = *extraout_x8;
                *extraout_x8 = lVar14;
                extraout_x8[1] = (long)puVar18;
                lStack_178 = extraout_x8[2];
                extraout_x8[2] = uVar17 + (long)plVar11 * 0x10;
                lStack_188 = lStack_190;
                lStack_180 = lStack_190;
                func_0x00010a989ce0(&lStack_190);
              }
              extraout_x8[1] = (long)puVar18;
              do {
                lVar14 = *plVar19;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar5) {
                  *plVar19 = lVar14 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar14 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
              }
            }
            plVar1 = plVar1 + 2;
          } while( true );
        }
        uVar16 = param_1[2] - *param_1;
        uVar17 = (long)uVar16 >> 3;
        if (uVar17 <= uVar10) {
          uVar17 = uVar10;
        }
        if (0x7fffffffffffffef < uVar16) {
          uVar17 = 0xfffffffffffffff;
        }
        pfVar13 = param_2;
        plStack_98 = param_1;
        FUN_10a989c18();
        puVar2 = (undefined8 *)(uVar17 + lVar14);
        lVar14 = *(long *)(param_2 + 2);
        uVar26 = *(undefined8 *)param_2;
        puVar2[1] = *(undefined8 *)(param_2 + 2);
        *puVar2 = uVar26;
        if (lVar14 != 0) {
          plVar1 = (long *)(lVar14 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        puVar18 = puVar2 + 2;
        lVar14 = (long)puVar2 - (param_1[1] - *param_1);
        _memcpy(lVar14);
        lStack_b8 = *param_1;
        *param_1 = lVar14;
        param_1[1] = (long)puVar18;
        lStack_a0 = param_1[2];
        param_1[2] = uVar17 + (long)pfVar13 * 0x10;
        lStack_b0 = lStack_b8;
        lStack_a8 = lStack_b8;
        func_0x00010a989c4c(&lStack_b8);
      }
      param_1[1] = (long)puVar18;
      return;
    }
    lVar15 = param_1[1];
    pfVar13 = param_2;
    plStack_38 = param_1;
    FUN_10a989c18();
    lVar14 = (long)param_2 + (lVar15 - lVar14);
    lVar15 = lVar14 - (param_1[1] - *param_1);
    _memcpy(lVar15);
    lStack_58 = *param_1;
    *param_1 = lVar15;
    param_1[1] = lVar14;
    lStack_40 = param_1[2];
    param_1[2] = (long)(param_2 + (long)pfVar13 * 4);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a989c4c(&lStack_58);
  }
  return;
}



/* Entry: 10a96c3b8; end: 10a96c7eb;  */

void FUN_10a96c3b8(long *param_1,long *param_2,float *param_3,float *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  code *pcVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  float *pfVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  undefined8 *puVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar27;
  undefined8 uVar26;
  float fVar28;
  float fVar30;
  undefined8 uVar29;
  float fVar31;
  float fVar33;
  undefined8 uVar32;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  char acStack_138 [4];
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 uStack_120;
  float fStack_118;
  float *pfStack_110;
  float *pfStack_108;
  float *pfStack_100;
  long lStack_f8;
  long *plStack_f0;
  float fStack_e8;
  undefined8 uStack_e0;
  float fStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long *plStack_b0;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar2 = (long *)*param_2;
  plVar20 = (long *)param_2[1];
  if ((long)plVar20 - (long)plVar2 != 0) {
    uVar11 = (long)plVar20 - (long)plVar2 >> 4;
    if (uVar11 >> 0x3c != 0) {
      FUN_10a989c98();
LAB_10a96c7ac:
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10a96c7b0);
      (*pcVar10)();
    }
    pfVar14 = param_3;
    plStack_f0 = param_1;
    FUN_10a989cac();
    lVar18 = uVar11 - (param_1[1] - *param_1);
    _memcpy(lVar18);
    pfStack_110 = (float *)*param_1;
    *param_1 = lVar18;
    param_1[1] = uVar11;
    lStack_f8 = param_1[2];
    param_1[2] = uVar11 + (long)pfVar14 * 0x10;
    pfStack_108 = pfStack_110;
    pfStack_100 = pfStack_110;
    func_0x00010a989ce0(&pfStack_110);
    plVar2 = (long *)*param_2;
    plVar20 = (long *)param_2[1];
  }
  do {
    if (plVar2 == plVar20) {
      lVar3 = *param_1;
      lVar4 = param_1[1];
      lVar18 = 0;
      if (lVar4 != lVar3) {
        lVar18 = LZCOUNT(lVar4 - lVar3 >> 4) * -2 + 0x7e;
      }
      pfStack_110 = param_3;
      FUN_10a99a628(lVar3,lVar4,&pfStack_110,lVar18,1);
      return;
    }
    lVar18 = *plVar2;
    func_0x0001094f5708(&pfStack_110,lVar18 + 0x1c);
    fVar36 = fStack_d8;
    fVar9 = fStack_e8;
    fVar22 = *param_3;
    fVar23 = param_3[1];
    fVar24 = param_3[2];
    fVar7 = pfStack_108._0_4_;
    fVar8 = (float)lStack_f8;
    fStack_118 = fVar22 * pfStack_108._0_4_ + fVar23 * (float)lStack_f8 +
                 fVar24 * fStack_e8 + fStack_d8;
    fVar35 = SUB84(pfStack_110,0);
    fVar37 = (float)((ulong)pfStack_110 >> 0x20);
    fVar31 = SUB84(pfStack_100,0);
    fVar33 = (float)((ulong)pfStack_100 >> 0x20);
    fVar28 = SUB84(plStack_f0,0);
    fVar30 = (float)((ulong)plStack_f0 >> 0x20);
    fVar25 = (float)uStack_e0;
    fVar27 = (float)((ulong)uStack_e0 >> 0x20);
    uStack_120 = CONCAT44(fVar37 * fVar22 + fVar33 * fVar23 + fVar30 * fVar24 + fVar27,
                          fVar35 * fVar22 + fVar31 * fVar23 + fVar28 * fVar24 + fVar25);
    fVar22 = *param_4;
    fVar23 = param_4[1];
    fVar24 = param_4[2];
    plVar12 = *(long **)(*(long *)(*plVar2 + 0x78) + 0xe0);
    (**(code **)(*plVar12 + 0x90))();
    lStack_d0 = CONCAT44((fVar37 * fVar22 + fVar33 * fVar23 + fVar27 + fVar30 * fVar24) -
                         (float)((ulong)uStack_120 >> 0x20),
                         (fVar35 * fVar22 + fVar31 * fVar23 + fVar25 + fVar28 * fVar24) -
                         (float)uStack_120);
    lStack_c8 = CONCAT44(lStack_c8._4_4_,
                         (fVar7 * fVar22 + fVar8 * fVar23 + fVar36 + fVar9 * fVar24) - fStack_118);
    FUN_10ab4e33c(acStack_138,*plVar12,&uStack_120,&lStack_d0,1);
    fVar9 = fStack_12c;
    fVar8 = fStack_130;
    fVar7 = fStack_134;
    if (acStack_138[0] == '\x01') {
      fVar22 = *(float *)(lVar18 + 0x24);
      fVar23 = *(float *)(lVar18 + 0x34);
      fVar36 = *(float *)(lVar18 + 0x44);
      uVar34 = *(undefined8 *)(lVar18 + 0x1c);
      uVar32 = *(undefined8 *)(lVar18 + 0x2c);
      uVar29 = *(undefined8 *)(lVar18 + 0x3c);
      uVar26 = *(undefined8 *)(lVar18 + 0x4c);
      fVar24 = *(float *)(lVar18 + 0x54);
      plVar13 = (long *)0x50;
      __Znwm();
      plVar17 = plVar13 + 1;
      *plVar17 = 0;
      plVar13[2] = 0;
      plVar19 = plVar13 + 3;
      *plVar19 = (long)&PTR_FUN_110c6ac70;
      *plVar13 = (long)&PTR_FUN_110c34570;
      plVar13[4] = 0;
      plVar13[5] = 0;
      plVar13[8] = 0;
      plVar13[9] = 0;
      plVar13[6] = CONCAT44((float)((ulong)uVar34 >> 0x20) * fVar7 +
                            (float)((ulong)uVar32 >> 0x20) * fVar8 +
                            (float)((ulong)uVar29 >> 0x20) * fVar9 + (float)((ulong)uVar26 >> 0x20),
                            (float)uVar34 * fVar7 + (float)uVar32 * fVar8 +
                            (float)uVar29 * fVar9 + (float)uVar26);
      *(float *)(plVar13 + 7) = fVar7 * fVar22 + fVar8 * fVar23 + fVar9 * fVar36 + fVar24;
      plVar12 = plVar2;
      func_0x00010a4afa48();
      puVar21 = (undefined8 *)param_1[1];
      if (puVar21 < (undefined8 *)param_1[2]) {
        *puVar21 = plVar19;
        puVar21[1] = plVar13;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = *plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        puVar21 = puVar21 + 2;
      }
      else {
        lVar18 = (long)puVar21 - *param_1;
        uVar11 = (lVar18 >> 4) + 1;
        if (uVar11 >> 0x3c != 0) {
          FUN_10a989c98();
          goto LAB_10a96c7ac;
        }
        uVar15 = param_1[2] - *param_1;
        uVar16 = (long)uVar15 >> 3;
        if (uVar16 <= uVar11) {
          uVar16 = uVar11;
        }
        if (0x7fffffffffffffef < uVar15) {
          uVar16 = 0xfffffffffffffff;
        }
        plStack_b0 = param_1;
        FUN_10a989cac();
        puVar1 = (undefined8 *)(uVar16 + lVar18);
        *puVar1 = plVar19;
        puVar1[1] = plVar13;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = *plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        puVar21 = puVar1 + 2;
        lVar18 = (long)puVar1 - (param_1[1] - *param_1);
        _memcpy(lVar18);
        lStack_d0 = *param_1;
        *param_1 = lVar18;
        param_1[1] = (long)puVar21;
        lStack_b8 = param_1[2];
        param_1[2] = uVar16 + (long)plVar12 * 0x10;
        lStack_c8 = lStack_d0;
        lStack_c0 = lStack_d0;
        func_0x00010a989ce0(&lStack_d0);
      }
      param_1[1] = (long)puVar21;
      do {
        lVar18 = *plVar17;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *plVar17 = lVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    plVar2 = plVar2 + 2;
  } while( true );
}



/* Entry: 10a96c7ec; end: 10a96ccdb;  */

void FUN_10a96c7ec(long *param_1,undefined8 param_2,float param_3,long *param_4,ulong *param_5,
                  long *param_6)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  char cVar4;
  ulong *puVar5;
  ulong *puVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong uVar18;
  long *plVar19;
  float *pfVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  long *plStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  float fStack_108;
  ulong **ppuStack_100;
  float fStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  undefined8 uStack_e0;
  float fStack_d8;
  undefined8 uStack_d0;
  float fStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  undefined8 uStack_b0;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a96c208(param_1,(param_6[1] - *param_6 >> 2) * -0x5555555555555555);
  pfVar20 = (float *)*param_6;
  pfVar2 = (float *)param_6[1];
  if (pfVar20 == pfVar2) {
LAB_10a96cc24:
    lVar1 = *param_1;
    lVar3 = param_1[1];
    lVar14 = 0;
    if (lVar3 != lVar1) {
      lVar14 = LZCOUNT(lVar3 - lVar1 >> 4) * -2 + 0x7e;
    }
    puStack_c0 = param_5;
    FUN_10a998ca4(lVar1,lVar3,&puStack_c0,lVar14,1);
    return;
  }
  do {
    puStack_c0 = (ulong *)0x0;
    puStack_b8 = (ulong *)0x0;
    uStack_b0 = 0;
    puVar15 = (ulong *)*param_4;
    puVar16 = (ulong *)param_4[1];
    fStack_f8 = (float)((uint)fStack_f8 & 0xffffff00);
    lVar14 = (long)puVar16 - (long)puVar15;
    ppuStack_100 = &puStack_c0;
    if (lVar14 == 0) {
      puVar15 = (ulong *)0x0;
    }
    else {
      FUN_10a58e2a8(&puStack_c0,lVar14 >> 4);
      do {
        puVar10 = puStack_b8;
        uVar13 = puVar15[1];
        uVar18 = *puVar15;
        puVar10[1] = puVar15[1];
        *puVar10 = uVar18;
        if (uVar13 != 0) {
          plVar8 = (long *)(uVar13 + 8);
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar7) {
              *plVar8 = *plVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        puVar15 = puVar15 + 2;
        puStack_b8 = puVar10 + 2;
      } while (puVar15 != puVar16);
      puVar15 = puStack_b8;
      if (puStack_c0 != puStack_b8) {
        puVar16 = puStack_c0;
        puVar17 = puStack_c0;
        do {
          puVar17 = puVar17 + 2;
          fVar24 = *(float *)(*puVar16 + 0x6c) - pfVar20[2];
          uVar26 = *(undefined8 *)(*puVar16 + 100);
          fVar25 = (float)uVar26 - (float)*(undefined8 *)pfVar20;
          fVar27 = (float)((ulong)uVar26 >> 0x20) - (float)((ulong)*(undefined8 *)pfVar20 >> 0x20);
          if (param_3 * param_3 < fVar25 * fVar25 + fVar27 * fVar27 + fVar24 * fVar24) {
            puVar15 = puVar16;
            puVar6 = puVar16;
            if (puVar16 != puStack_b8) {
              while (puVar5 = puVar17, puVar15 = puVar16, puVar6 != puVar10) {
                fVar24 = *(float *)(*puVar5 + 0x6c) - pfVar20[2];
                uVar26 = *(undefined8 *)(*puVar5 + 100);
                fVar25 = (float)uVar26 - (float)*(undefined8 *)pfVar20;
                fVar27 = (float)((ulong)uVar26 >> 0x20) -
                         (float)((ulong)*(undefined8 *)pfVar20 >> 0x20);
                if (fVar25 * fVar25 + fVar27 * fVar27 + fVar24 * fVar24 <= param_3 * param_3) {
                  FUN_10a293e40(puVar16,puVar5);
                  puVar16 = puVar16 + 2;
                }
                puVar17 = puVar5 + 2;
                puVar6 = puVar5;
              }
            }
            break;
          }
          bVar7 = puVar16 != puVar10;
          puVar16 = puVar16 + 2;
        } while (bVar7);
      }
    }
    FUN_10a293dac(&puStack_c0,puVar15,puStack_b8);
    puVar16 = puStack_b8;
    puVar15 = puStack_c0;
    while( true ) {
      if (puVar15 == puVar16) goto LAB_10a96cc0c;
      uVar18 = *puVar15;
      func_0x0001094f5708(&ppuStack_100,uVar18 + 0x34);
      fVar24 = *pfVar20;
      fVar25 = pfVar20[1];
      fVar27 = pfVar20[2];
      fStack_108 = fVar24 * fStack_f8 + fVar25 * fStack_e8 + fVar27 * fStack_d8 + fStack_c8;
      uStack_110 = CONCAT44((float)((ulong)ppuStack_100 >> 0x20) * fVar24 +
                            (float)((ulong)uStack_f0 >> 0x20) * fVar25 +
                            (float)((ulong)uStack_e0 >> 0x20) * fVar27 +
                            (float)((ulong)uStack_d0 >> 0x20),
                            SUB84(ppuStack_100,0) * fVar24 + (float)uStack_f0 * fVar25 +
                            (float)uStack_e0 * fVar27 + (float)uStack_d0);
      uVar13 = *puVar15;
      puVar9 = &uStack_110;
      FUN_10acafe84(param_2);
      fVar24 = fStack_108;
      uVar26 = uStack_110;
      if ((uVar13 & 1) != 0) break;
      puVar15 = puVar15 + 2;
    }
    fVar27 = uStack_110._4_4_;
    fVar35 = *(float *)(uVar18 + 0x3c);
    fVar36 = *(float *)(uVar18 + 0x4c);
    fVar32 = *(float *)(uVar18 + 0x5c);
    uVar40 = *(undefined8 *)(uVar18 + 0x34);
    uVar30 = *(undefined8 *)(uVar18 + 0x44);
    uVar23 = *(undefined8 *)(uVar18 + 0x54);
    uVar22 = *(undefined8 *)(uVar18 + 100);
    fVar37 = *(float *)(uVar18 + 0x6c);
    plVar8 = (long *)0x60;
    __Znwm();
    fVar11 = (float)(uVar13 >> 0x20);
    fVar25 = SUB84(puVar9,0);
    fVar12 = (float)((ulong)puVar9 >> 0x20);
    fVar21 = fVar35 * fVar11 + fVar36 * fVar25 + fVar32 * fVar12 + fVar37 * 0.0;
    fVar28 = (float)uVar26;
    fVar38 = (float)uVar40;
    fVar41 = (float)((ulong)uVar40 >> 0x20);
    fVar29 = (float)uVar30;
    fVar31 = (float)((ulong)uVar30 >> 0x20);
    fVar39 = (float)uVar23;
    fVar42 = (float)((ulong)uVar23 >> 0x20);
    plVar19 = plVar8 + 1;
    *plVar19 = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_DAT_110c34520;
    plVar8[3] = (long)&PTR_FUN_110c6aab0;
    plVar8[4] = 0;
    plVar8[5] = 0;
    plVar8[0xb] = 0;
    plVar8[10] = 0;
    *(undefined8 *)((long)plVar8 + 0x3c) = 0;
    *(undefined8 *)((long)plVar8 + 0x41) = 0;
    fVar33 = (float)uVar22;
    fVar34 = (float)((ulong)uVar22 >> 0x20);
    plVar8[6] = CONCAT44(fVar41 * fVar28 + fVar31 * fVar27 + fVar42 * fVar24 + fVar34,
                         fVar38 * fVar28 + fVar29 * fVar27 + fVar39 * fVar24 + fVar33);
    *(float *)(plVar8 + 7) = fVar28 * fVar35 + fVar27 * fVar36 + fVar24 * fVar32 + fVar37;
    func_0x00010a58e2e0(plVar8 + 10,puVar15);
    fVar24 = fVar38 * fVar11 + fVar29 * fVar25 + fVar39 * fVar12 + fVar33 * 0.0;
    fVar25 = fVar41 * fVar11 + fVar31 * fVar25 + fVar42 * fVar12 + fVar34 * 0.0;
    fVar27 = 1.0 / SQRT(fVar21 * fVar21 + fVar24 * fVar24 + fVar25 * fVar25);
    *(ulong *)((long)plVar8 + 0x3c) = CONCAT44(fVar25 * fVar27,fVar24 * fVar27);
    *(float *)((long)plVar8 + 0x44) = fVar21 * fVar27;
    *(char *)(plVar8 + 9) = (char)(uVar13 >> 8);
    plStack_120 = plVar8 + 3;
    plStack_118 = plVar8;
    func_0x00010a96c2a4(param_1,&plStack_120);
    do {
      lVar14 = *plVar19;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar7) {
        *plVar19 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
LAB_10a96cc0c:
    ppuStack_100 = &puStack_c0;
    FUN_10a26e034(&ppuStack_100);
    pfVar20 = pfVar20 + 3;
    if (pfVar20 == pfVar2) goto LAB_10a96cc24;
  } while( true );
}



/* Entry: 10a96ccdc; end: 10a96cd67;  */

undefined1  [16] FUN_10a96ccdc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x12;
  auVar1._0_8_ = &UNK_10f654f76;
  return auVar1;
}



/* Entry: 10a96cd68; end: 10a96d087;  */

void FUN_10a96cd68(ulong param_1)

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
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000109887da8(appuStack_d8,&UNK_10f654f76,0x12);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c35158;
  pppuVar2 = (undefined8 ***)&UNK_10f68581c;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c35158;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f685afb,FUN_10a99bf6c,FUN_10a99c024);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f35d8cb,FUN_10a99c1d4,FUN_10a99c290);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f685b08,FUN_10a99c374,FUN_10a99c430);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    puStack_78 = *(undefined **)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f654f76,0x12);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f654f76;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f68581c;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_78 = &UNK_10f68581c;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a96d068;
      FUN_10a054dac(param_1,&DAT_10f68efec,FUN_10a99c514,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a96d068:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a96d06c);
  (*pcVar6)();
}



/* Entry: 10a96d088; end: 10a96d1eb;  */

void FUN_10a96d088(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f685b1a;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f68581c;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x12400000161;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f4717a8;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x12400000161;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a96d1ec(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f3eaad1;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x12400000161;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a96d1ec();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f3f44e7;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x12400000161;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a96d1ec();
  FUN_10a003ff4();
  return;
}


