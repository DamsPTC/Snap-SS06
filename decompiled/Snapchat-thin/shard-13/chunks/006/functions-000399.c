/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a8ef75c; end: 10a8ef857;  */

undefined1  [16] FUN_10a8ef75c(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c275a0;
  puVar1 = &UNK_10f67fb58;
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
    ppuStack_40 = &PTR_DAT_110c275a0;
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



/* Entry: 10a8ef858; end: 10a8ef8ab;  */

ulong FUN_10a8ef858(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a8ef8ac,0);
  }
  return param_1;
}



/* Entry: 10a8ef8ac; end: 10a8ef963;  */

void FUN_10a8ef8ac(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a8ef964(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a368520(param_1,param_2,plVar4 + 0x11);
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



/* Entry: 10a8ef964; end: 10a8efa1f;  */

undefined ** FUN_10a8ef964(undefined **param_1,undefined **param_2)

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
    FUN_10a0605c4(ppuVar1,*param_2,FUN_10a8efa20,0);
  }
  return ppuVar1;
}



/* Entry: 10a8efa20; end: 10a8efad7;  */

void FUN_10a8efa20(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a8ef964(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a368520(param_1,param_2,(long)plVar4 + 0xac);
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



/* Entry: 10a8efad8; end: 10a8efb93;  */

void FUN_10a8efad8(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68197b,0xb);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8efb94);
  (*pcVar4)();
}



/* Entry: 10a8efb94; end: 10a8efc8f;  */

undefined1  [16] FUN_10a8efb94(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c2c758;
  puVar1 = &UNK_10f67fb58;
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
    ppuStack_40 = &PTR_DAT_110c2c758;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110bb3788;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a8efc90; end: 10a8efce7;  */

ulong FUN_10a8efc90(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a8efce8,FUN_10a8efdec);
  }
  return param_1;
}



/* Entry: 10a8efce8; end: 10a8efdeb;  */

void FUN_10a8efce8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
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
    puVar6 = &UNK_10f68f52e;
  }
  else {
    plVar5 = param_2;
    FUN_10a052c2c(param_2,plVar4);
    if ((plVar5 != (long *)0x0) && (___dynamic_cast(), plVar5 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      FUN_10a05b924(param_1,param_2,plVar5 + 0x51);
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
    puVar6 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar6);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8efdd8);
  (*pcVar1)();
}



/* Entry: 10a8efdec; end: 10a8eff53;  */

void FUN_10a8efdec(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
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
  func_0x000109898688(param_2,param_3);
  if (plVar6 == (long *)0x0) {
    puVar8 = &UNK_10f68f52e;
  }
  else {
    plVar7 = param_2;
    FUN_10a053854(param_2,plVar6);
    if ((plVar7 != (long *)0x0) && (___dynamic_cast(), plVar7 != (long *)0x0)) {
      FUN_10a1f9134(param_5);
      FUN_10a065cdc(&stack0xffffffffffffffb0,param_2,param_4);
      FUN_10a8cda2c(plVar7,&stack0xffffffffffffffb0);
      if (in_stack_ffffffffffffffb8 != (long *)0x0) {
        plVar6 = in_stack_ffffffffffffffb8 + 1;
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
          (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
        }
      }
      *param_1 = 0;
      plVar6 = plVar5 + 0x4b;
      lVar11 = plVar5[0x59];
      uVar9 = lVar11 - 1;
      plVar5[0x59] = uVar9;
      if (uVar9 < 8) {
        uVar9 = plVar6[lVar11 + 2];
        if (plVar5[0x5a] == uVar9) {
          return;
        }
      }
      else {
        uVar9 = *(ulong *)(plVar5[0x57] + -8);
        plVar5[0x57] = plVar5[0x57] + -8;
        if (plVar5[0x5a] == uVar9) {
          return;
        }
      }
      lVar11 = *plVar6;
      lVar14 = plVar5[0x4c];
      lVar12 = lVar14 - lVar11;
      uVar16 = lVar12 >> 4;
      if (uVar16 < uVar9) {
        uVar17 = uVar9 - uVar16;
        lVar15 = plVar5[0x4d];
        if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
          if (uVar9 >> 0x3c == 0) {
            uVar10 = lVar15 - lVar11 >> 3;
            if (uVar10 <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar6;
            if (uVar10 >> 0x3c == 0) {
              lVar4 = uVar10 << 4;
              __Znwm();
              lVar14 = lVar4 + lVar12;
              _bzero(lVar14,uVar17 * 0x10);
              lVar13 = lVar14 + uVar16 * -0x10;
              _memcpy(lVar13,lVar11,lVar12);
              *plVar6 = lVar13;
              plVar5[0x4c] = lVar14 + uVar17 * 0x10;
              plVar5[0x4d] = lVar4 + uVar10 * 0x10;
              lStack_88 = lVar11;
              lStack_80 = lVar11;
              lStack_78 = lVar11;
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
      else if (uVar9 < uVar16) {
        lVar11 = lVar11 + uVar9 * 0x10;
        while (lVar14 != lVar11) {
          lVar14 = lVar14 + -0x10;
          func_0x00010988c204(lVar14);
        }
        plVar5[0x4c] = lVar11;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar9;
      return;
    }
    puVar8 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar8);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a8eff30);
  (*pcVar3)();
}



/* Entry: 10a8eff54; end: 10a8f0057;  */

void FUN_10a8eff54(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f681a23,0x1c);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8f0010);
  (*pcVar4)();
}



/* Entry: 10a8f0058; end: 10a8f0073;  */

void FUN_10a8f0058(void)

{
  return;
}



/* Entry: 10a8f0074; end: 10a8f01df;  */

/* WARNING: Removing unreachable block (ram,0x00010a8f0174) */
/* WARNING: Removing unreachable block (ram,0x00010a8f0178) */
/* WARNING: Removing unreachable block (ram,0x00010a8f0180) */
/* WARNING: Removing unreachable block (ram,0x00010a8f0188) */
/* WARNING: Removing unreachable block (ram,0x00010a8f018c) */

void FUN_10a8f0074(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a8f01e0(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a8cebb8(&plStack_68,plVar6);
  plStack_68 = (long *)0x0;
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
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



/* Entry: 10a8f01e0; end: 10a8f0247;  */

void FUN_10a8f01e0(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
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
  float fVar15;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar3);
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
  FUN_10a8f01e0(plVar4,param_2);
  FUN_10a052e3c(param_4);
  fVar15 = *(float *)((long)plVar4 + 0x31c);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)fVar15;
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



/* Entry: 10a8f0248; end: 10a8f0303;  */

void FUN_10a8f0248(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  float fVar14;
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
  FUN_10a8f01e0(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 0x31c);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
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



/* Entry: 10a8f0304; end: 10a8f03fb;  */

void FUN_10a8f0304(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
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
  FUN_10a8f04a0(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a8f03e8);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)((long)param_2 + 0x31c) = fVar2;
  FUN_10a8ce170(param_2);
  *param_1 = 0;
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



/* Entry: 10a8f03fc; end: 10a8f049f;  */

void FUN_10a8f03fc(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined **param_5,
                  int *param_6,undefined8 param_7)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined8 in_stack_ffffffffffffff48;
  long in_stack_ffffffffffffff58;
  
  uVar7 = param_4;
  FUN_10a8f04a0(param_2,param_5);
  FUN_10a05ed04(param_7);
  if (*param_6 == 3) {
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(*(long *)(param_2 + ((long)param_4 >> 1)) + ((ulong)param_3 & 0xffffffff)
                          );
    }
    fVar16 = (float)*(double *)(param_6 + 2);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_6 + 2))) {
      fVar16 = 0.0;
    }
    (*param_3)(fVar16);
    *param_1 = 0;
    return;
  }
  ppuVar3 = (undefined **)&UNK_10f68f550;
  func_0x00010988bd28();
  ppuVar4 = ppuVar3;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a053854(ppuVar3,ppuVar4);
    param_5 = ppuVar4;
    if (ppuVar3 != (undefined **)0x0) {
      param_5 = &PTR_DAT_110b178e0;
      uVar7 = 0x28;
      ___dynamic_cast();
      if (ppuVar3 != (undefined **)0x0) {
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
  FUN_10a8f01e0(plVar5,param_5);
  FUN_10a052e3c(uVar7);
  lVar10 = plVar5[0x12];
  func_0x000107c2b054(&stack0xffffffffffffff48,&UNK_10f680b56);
  if (lVar10 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar10 + 0x8d8),&stack0xffffffffffffff48);
  }
  if (in_stack_ffffffffffffff58 < 0) {
    __ZdlPv(in_stack_ffffffffffffff48);
  }
  lVar10 = plVar5[0x60];
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)(int)lVar10;
  plVar5 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar7 = lVar10 - 1;
  plVar6[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar10 + 2];
    if (plVar6[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar7) {
      return;
    }
  }
  lVar10 = *plVar5;
  lVar12 = plVar6[0x4c];
  lVar9 = lVar12 - lVar10;
  uVar14 = lVar9 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar6[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar10 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar10)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_c8 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar9;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar10,lVar9);
          *plVar5 = lVar11;
          plVar6[0x4c] = lVar12 + uVar15 * 0x10;
          plVar6[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_e8 = lVar10;
          lStack_e0 = lVar10;
          lStack_d8 = lVar10;
          lStack_d0 = lVar13;
          func_0x00010988c1b8(&lStack_e8);
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
    plVar6[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar10 = lVar10 + uVar7 * 0x10;
    while (lVar12 != lVar10) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar6[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar7;
  return;
}



/* Entry: 10a8f04a0; end: 10a8f0507;  */

void FUN_10a8f04a0(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 *extraout_x8;
  ulong uVar7;
  long lVar8;
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
  undefined8 in_stack_ffffffffffffff88;
  long in_stack_ffffffffffffff98;
  
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
  FUN_10a8f01e0(plVar4,param_2);
  FUN_10a052e3c(param_4);
  lVar9 = plVar4[0x12];
  func_0x000107c2b054(&stack0xffffffffffffff88,&UNK_10f680b56);
  if (lVar9 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar9 + 0x8d8),&stack0xffffffffffffff88);
  }
  if (in_stack_ffffffffffffff98 < 0) {
    __ZdlPv(in_stack_ffffffffffffff88);
  }
  lVar9 = plVar4[0x60];
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)(int)lVar9;
  plVar4 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar6 = lVar9 - 1;
  plVar5[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar9 + 2];
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
  lVar9 = *plVar4;
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
        plStack_88 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar8;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar9,lVar8);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_a8 = lVar9;
          lStack_a0 = lVar9;
          lStack_98 = lVar9;
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



/* Entry: 10a8f0508; end: 10a8f0617;  */

void FUN_10a8f0508(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
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
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a8f01e0(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar8 = param_2[0x12];
  func_0x000107c2b054(&stack0xffffffffffffffa8,&UNK_10f680b56);
  if (lVar8 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar8 + 0x8d8),&stack0xffffffffffffffa8);
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  lVar8 = param_2[0x60];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar8;
  plVar1 = plVar4 + 0x4b;
  lVar8 = plVar4[0x59];
  uVar5 = lVar8 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar8 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar8 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar7 = lVar10 - lVar8;
  uVar12 = lVar7 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar11 - lVar8 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar8)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar7;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar8,lVar7);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
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
  else if (uVar5 < uVar12) {
    lVar8 = lVar8 + uVar5 * 0x10;
    while (lVar10 != lVar8) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a8f0618; end: 10a8f06df;  */

void FUN_10a8f0618(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a8f04a0(param_2,param_3);
  FUN_10a8f06e0(param_5);
  func_0x000109898518(param_2,param_4);
  FUN_10a8cea68(plVar4,param_2);
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



/* Entry: 10a8f06e0; end: 10a8f0703;  */

void FUN_10a8f06e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
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
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar6 = 0;
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
  plVar5 = plVar3;
  FUN_10a8f01e0(plVar3,uVar6);
  FUN_10a052e3c(param_4);
  FUN_10a07aef4(extraout_x8,plVar3,plVar5 + 0x61);
  plVar3 = plVar4 + 0x4b;
  lVar7 = plVar4[0x59];
  uVar8 = lVar7 - 1;
  plVar4[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar3[lVar7 + 2];
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar3;
  lVar12 = plVar4[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar4[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar3 = lVar11;
          plVar4[0x4c] = lVar12 + uVar15 * 0x10;
          plVar4[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_98 = lVar7;
          lStack_90 = lVar7;
          lStack_88 = lVar7;
          lStack_80 = lVar13;
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar4[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar4[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar8;
  return;
}



/* Entry: 10a8f0704; end: 10a8f07bb;  */

void FUN_10a8f0704(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a8f01e0(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a07aef4(param_1,param_2,plVar4 + 0x61);
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



/* Entry: 10a8f07bc; end: 10a8f0887;  */

void FUN_10a8f07bc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a8f04a0(param_2,param_3);
  FUN_10a1fa9e8(param_5);
  FUN_10a05a42c(param_2,param_4);
  plVar4[0x61] = *param_2;
  FUN_10a8ce170(plVar4);
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



/* Entry: 10a8f0888; end: 10a8f0943;  */

void FUN_10a8f0888(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a8f01e0(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar2 = *(int *)((long)param_2 + 0x304);
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



/* Entry: 10a8f0944; end: 10a8f0a0b;  */

void FUN_10a8f0944(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a8f04a0(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)((long)plVar4 + 0x304) = (int)param_2;
  FUN_10a8ce170(plVar4);
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



/* Entry: 10a8f0a0c; end: 10a8f0b1b;  */

void FUN_10a8f0a0c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
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
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a8f01e0(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar8 = param_2[0x12];
  func_0x000107c2b054(&stack0xffffffffffffffa8,&UNK_10f680a67);
  if (lVar8 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar8 + 0x8d8),&stack0xffffffffffffffa8);
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  fVar14 = *(float *)(param_2 + 0x62);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar8 = plVar4[0x59];
  uVar5 = lVar8 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar8 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar8 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar7 = lVar10 - lVar8;
  uVar12 = lVar7 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar11 - lVar8 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar8)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar7;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar8,lVar7);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
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
  else if (uVar5 < uVar12) {
    lVar8 = lVar8 + uVar5 * 0x10;
    while (lVar10 != lVar8) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a8f0b1c; end: 10a8f0bd3;  */

void FUN_10a8f0b1c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a8f03fc(param_1,param_2,FUN_10a8ce8c4,0,param_3,param_4,param_5);
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



/* Entry: 10a8f0bd4; end: 10a8f0ce3;  */

void FUN_10a8f0bd4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
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
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a8f01e0(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar8 = param_2[0x12];
  func_0x000107c2b054(&stack0xffffffffffffffa8,&UNK_10f680ab9);
  if (lVar8 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar8 + 0x8d8),&stack0xffffffffffffffa8);
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  fVar14 = *(float *)((long)param_2 + 0x314);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar8 = plVar4[0x59];
  uVar5 = lVar8 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar8 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar8 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar7 = lVar10 - lVar8;
  uVar12 = lVar7 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar11 - lVar8 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar8)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar7;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar8,lVar7);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
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
  else if (uVar5 < uVar12) {
    lVar8 = lVar8 + uVar5 * 0x10;
    while (lVar10 != lVar8) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a8f0ce4; end: 10a8f0d9b;  */

void FUN_10a8f0ce4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a8f03fc(param_1,param_2,FUN_10a8ce950,0,param_3,param_4,param_5);
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



/* Entry: 10a8f0d9c; end: 10a8f0eab;  */

void FUN_10a8f0d9c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
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
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a8f01e0(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar8 = param_2[0x12];
  func_0x000107c2b054(&stack0xffffffffffffffa8,&UNK_10f680b05);
  if (lVar8 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar8 + 0x8d8),&stack0xffffffffffffffa8);
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  fVar14 = *(float *)(param_2 + 99);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar8 = plVar4[0x59];
  uVar5 = lVar8 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar8 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar8 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar7 = lVar10 - lVar8;
  uVar12 = lVar7 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar11 - lVar8 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar8)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar7;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar8,lVar7);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
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
  else if (uVar5 < uVar12) {
    lVar8 = lVar8 + uVar5 * 0x10;
    while (lVar10 != lVar8) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a8f0eac; end: 10a8f0f63;  */

void FUN_10a8f0eac(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a8f03fc(param_1,param_2,FUN_10a8ce9dc,0,param_3,param_4,param_5);
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



/* Entry: 10a8f0f64; end: 10a8f101b;  */

void FUN_10a8f0f64(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a8f01e0(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a3af424(param_1,param_2,plVar4 + 0x6c);
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



/* Entry: 10a8f101c; end: 10a8f111b;  */

void FUN_10a8f101c(undefined4 *param_1,long *param_2,undefined8 param_3,uint *param_4,
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
  FUN_10a8f04a0(param_2,param_3);
  FUN_10a3af5a8(param_5);
  if (1 < *param_4) {
    FUN_10a3af5cc(&stack0xffffffffffffffa8,param_2,param_4);
  }
  FUN_10a3a754c(plVar4 + 0x6c,&stack0xffffffffffffffa8);
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



/* Entry: 10a8f111c; end: 10a8f11d3;  */

void FUN_10a8f111c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a8f01e0(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a3b04a0(param_1,param_2,plVar4 + 0x5c);
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



/* Entry: 10a8f11d4; end: 10a8f122b;  */

long FUN_10a8f11d4(long param_1)

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



/* Entry: 10a8f122c; end: 10a8f12e7;  */

void FUN_10a8f122c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a8f13b0(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0x75];
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



/* Entry: 10a8f12e8; end: 10a8f13af;  */

void FUN_10a8f12e8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a8f1418(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  if ((uint)param_2 < 0x80) {
    *(uint *)(plVar4 + 0x75) = (uint)param_2;
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



/* Entry: 10a8f13b0; end: 10a8f147f;  */

void FUN_10a8f13b0(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  
  ppuVar4 = param_1;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar4);
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
  ppuVar4 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar5 = ppuVar4;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a053854(ppuVar4,ppuVar5);
    param_2 = ppuVar5;
    if (ppuVar4 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x28;
      ___dynamic_cast();
      if (ppuVar4 != (undefined **)0x0) {
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
  FUN_10a8f13b0(plVar6,param_2);
  FUN_10a052e3c(param_4);
  uVar10 = plVar8[0x77];
  plVar1 = (long *)plVar8[0x76];
  if (-1 < (char)*(byte *)((long)plVar8 + 0x3c7)) {
    uVar10 = (ulong)*(byte *)((long)plVar8 + 0x3c7);
    plVar1 = plVar8 + 0x76;
  }
  (**(code **)(*plVar6 + 0x128))(extraout_x8 + 2,plVar6,plVar1,uVar10);
  *extraout_x8 = 6;
  plVar6 = plVar7 + 0x4b;
  lVar9 = plVar7[0x59];
  uVar10 = lVar9 - 1;
  plVar7[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar6[lVar9 + 2];
    if (plVar7[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar10) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar14 = plVar7[0x4c];
  lVar12 = lVar14 - lVar9;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar10) {
    uVar17 = uVar10 - uVar16;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar15 - lVar9 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar9)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_a8 = plVar6;
        if (uVar11 >> 0x3c == 0) {
          lVar3 = uVar11 << 4;
          __Znwm();
          lVar14 = lVar3 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar9,lVar12);
          *plVar6 = lVar13;
          plVar7[0x4c] = lVar14 + uVar17 * 0x10;
          plVar7[0x4d] = lVar3 + uVar11 * 0x10;
          lStack_c8 = lVar9;
          lStack_c0 = lVar9;
          lStack_b8 = lVar9;
          lStack_b0 = lVar15;
          func_0x00010988c1b8(&lStack_c8);
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
    _bzero(lVar14,uVar17 * 0x10);
    plVar7[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar10 < uVar16) {
    lVar9 = lVar9 + uVar10 * 0x10;
    while (lVar14 != lVar9) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar7[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar10;
  return;
}



/* Entry: 10a8f1480; end: 10a8f1563;  */

void FUN_10a8f1480(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a8f13b0(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[0x77];
  plVar1 = (long *)plVar5[0x76];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x3c7)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x3c7);
    plVar1 = plVar5 + 0x76;
  }
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar1,uVar7);
  *param_1 = 6;
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



/* Entry: 10a8f1564; end: 10a8f165f;  */

void FUN_10a8f1564(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a8f1418(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (plVar4 + 0x76,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
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



/* Entry: 10a8f1660; end: 10a8f1717;  */

void FUN_10a8f1660(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a8f13b0(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a2f8144(param_1,param_2,plVar4 + 0x65);
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



/* Entry: 10a8f1718; end: 10a8f1843;  */

void FUN_10a8f1718(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a8f1418(param_2,param_3);
  FUN_10a2f81c8(param_5);
  FUN_10a2f81ec(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a2e25b8(plVar6 + 0x65,&stack0xffffffffffffffb0);
  (**(code **)(*plVar6 + 0x130))(plVar6);
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



/* Entry: 10a8f1844; end: 10a8f198b;  */

void FUN_10a8f1844(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a8f13b0(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (*(char *)((long)plVar5 + 0x407) < '\0') {
    func_0x000107c3192c(&stack0xffffffffffffffa0,plVar5[0x7e],plVar5[0x7f]);
  }
  else {
    in_stack_ffffffffffffffa8 = plVar5[0x7f];
    in_stack_ffffffffffffffa0 = (undefined1 *)plVar5[0x7e];
    in_stack_ffffffffffffffb0 = plVar5[0x80];
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



/* Entry: 10a8f198c; end: 10a8f1af7;  */

/* WARNING: Possible PIC construction at 0x00010a8f1aec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a8f1af0) */

void FUN_10a8f198c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined7 uVar2;
  undefined1 uVar3;
  undefined7 uVar4;
  byte bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar13;
  ulong unaff_x22;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *unaff_x23;
  long lVar17;
  undefined8 unaff_x24;
  ulong uVar18;
  undefined8 unaff_x25;
  ulong uVar19;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long *plStack_70;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  byte bStack_59;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  long lStack_48;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  func_0x00010a8f1418(param_2,param_3);
  FUN_10a06cd04(param_5);
  func_0x000109898570(&plStack_70,param_2,param_4);
  bVar5 = bStack_59;
  uVar4 = uStack_60;
  uVar3 = uStack_61;
  uVar2 = uStack_68;
  plVar10 = plStack_70;
  uStack_58 = uStack_68;
  uStack_51 = uStack_61;
  uStack_50 = uStack_60;
  uVar14 = (ulong)bStack_59;
  uStack_68 = 0;
  uStack_61 = 0;
  uStack_60 = 0;
  bStack_59 = '\0';
  plStack_70 = (long *)0x0;
  if (*(char *)((long)plVar9 + 0x407) < '\0') {
    param_2 = (long *)plVar9[0x7e];
    __ZdlPv();
    plVar9[0x7e] = (long)plVar10;
    plVar9[0x7f] = CONCAT17(uStack_51,uStack_58);
    *(ulong *)((long)plVar9 + 0x3ff) = CONCAT71(uStack_50,uStack_51);
    *(byte *)((long)plVar9 + 0x407) = bVar5;
    if ((char)bStack_59 < '\0') {
      param_2 = plStack_70;
      __ZdlPv();
    }
  }
  else {
    plVar9[0x7e] = (long)plVar10;
    plVar9[0x7f] = CONCAT17(uVar3,uVar2);
    *(ulong *)((long)plVar9 + 0x3ff) = CONCAT71(uVar4,uVar3);
    *(byte *)((long)plVar9 + 0x407) = bVar5;
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    unaff_x30 = 0x10a8f1af0;
    register0x00000008 = (BADSPACEBASE *)&plStack_70;
    unaff_x19 = plVar8;
    unaff_x20 = param_2;
    unaff_x21 = plVar9;
    unaff_x22 = uVar14;
    unaff_x23 = plVar10;
    unaff_x24 = param_5;
    unaff_x29 = puVar1;
  }
  plVar10 = plVar8 + 0x4b;
  lVar11 = plVar8[0x59];
  uVar14 = lVar11 - 1;
  plVar8[0x59] = uVar14;
  if (uVar14 < 8) {
    uVar14 = plVar10[lVar11 + 2];
    if (plVar8[0x5a] == uVar14) {
      return;
    }
  }
  else {
    uVar14 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar14) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar11 = *plVar10;
  lVar16 = plVar8[0x4c];
  lVar13 = lVar16 - lVar11;
  uVar18 = lVar13 >> 4;
  if (uVar18 < uVar14) {
    uVar19 = uVar14 - uVar18;
    lVar17 = plVar8[0x4d];
    if ((ulong)(lVar17 - lVar16 >> 4) < uVar19) {
      if (uVar14 >> 0x3c == 0) {
        uVar12 = lVar17 - lVar11 >> 3;
        if (uVar12 <= uVar14) {
          uVar12 = uVar14;
        }
        if (0x7fffffffffffffef < (ulong)(lVar17 - lVar11)) {
          uVar12 = 0xfffffffffffffff;
        }
        *(long **)((long)register0x00000008 + -0x68) = plVar10;
        if (uVar12 >> 0x3c == 0) {
          lVar7 = uVar12 << 4;
          __Znwm();
          lVar16 = lVar7 + lVar13;
          _bzero(lVar16,uVar19 * 0x10);
          lVar15 = lVar16 + uVar18 * -0x10;
          _memcpy(lVar15,lVar11,lVar13);
          *plVar10 = lVar15;
          plVar8[0x4c] = lVar16 + uVar19 * 0x10;
          plVar8[0x4d] = lVar7 + uVar12 * 0x10;
          *(long *)((long)register0x00000008 + -0x78) = lVar11;
          *(long *)((long)register0x00000008 + -0x70) = lVar17;
          *(long *)((long)register0x00000008 + -0x88) = lVar11;
          *(long *)((long)register0x00000008 + -0x80) = lVar11;
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
    _bzero(lVar16,uVar19 * 0x10);
    plVar8[0x4c] = lVar16 + uVar19 * 0x10;
  }
  else if (uVar14 < uVar18) {
    lVar11 = lVar11 + uVar14 * 0x10;
    while (lVar16 != lVar11) {
      lVar16 = lVar16 + -0x10;
      func_0x00010988c204(lVar16);
    }
    plVar8[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar14;
  return;
}



/* Entry: 10a8f1af8; end: 10a8f1b2f;  */

void FUN_10a8f1af8(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x10);
  FUN_10a2e25b8(plVar1 + 0x65,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010a8f1b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x130))(plVar1);
  return;
}



/* Entry: 10a8f1b30; end: 10a8f1b4b;  */

void FUN_10a8f1b30(void)

{
  return;
}



/* Entry: 10a8f1b4c; end: 10a8f1c47;  */

undefined1  [16] FUN_10a8f1b4c(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c2a500;
  puVar1 = &UNK_10f67fb58;
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
    ppuStack_40 = &PTR_DAT_110c2a500;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c29d38;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a8f1c48; end: 10a8f1d03;  */

void FUN_10a8f1c48(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f681a55,0x2d);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8f1d04);
  (*pcVar4)();
}



/* Entry: 10a8f1d04; end: 10a8f1dff;  */

undefined1  [16] FUN_10a8f1d04(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c2ac98;
  puVar1 = &UNK_10f67fb58;
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
    ppuStack_40 = &PTR_DAT_110c2ac98;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c29d38;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a8f1e00; end: 10a8f1f13;  */

void FUN_10a8f1e00(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f681a83,0x26);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8f1ebc);
  (*pcVar4)();
}



/* Entry: 10a8f1f14; end: 10a8f1f23;  */

void FUN_10a8f1f14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2bd98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a8f1f24; end: 10a8f1f43;  */

void FUN_10a8f1f24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2bd98;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8f1f44; end: 10a8f1f53;  */

void FUN_10a8f1f44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a8f1f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a8f1f54; end: 10a8f213b;  */

void FUN_10a8f1f54(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  FUN_10a8f2324(param_3,param_4);
  lStack_60 = *param_2;
  plStack_58 = (long *)param_2[1];
  lStack_70 = lStack_60;
  plStack_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plStack_58 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
  }
  FUN_10a05b208(auStack_50,param_3,&lStack_60);
  FUN_10a05b04c(param_1,auStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  if (plStack_58 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  lVar5 = *param_2;
  if ((lVar5 != 0) && (lStack_80 = *param_1, lStack_80 != 0)) {
    plStack_78 = (long *)param_1[1];
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10aa88c30(lVar5,&lStack_80);
    plVar1 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar2 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a8f213c; end: 10a8f2323;  */

/* WARNING: Removing unreachable block (ram,0x00010a8f2250) */
/* WARNING: Removing unreachable block (ram,0x00010a8f2254) */
/* WARNING: Removing unreachable block (ram,0x00010a8f225c) */
/* WARNING: Removing unreachable block (ram,0x00010a8f2264) */
/* WARNING: Removing unreachable block (ram,0x00010a8f2268) */

undefined *** FUN_10a8f213c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long *plVar11;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined ***pppuStack_78;
  undefined1 uStack_69;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined8 *)&uStack_81;
  FUN_10a8f23f8(&puStack_68,&uStack_69,puVar6,param_2,param_3);
  FUN_10a05b04c(&uStack_80,&puStack_68);
  if (ppuStack_60 != (undefined **)0x0) {
    ppuVar9 = ppuStack_60 + 1;
    do {
      puVar8 = *ppuVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
      if (bVar3) {
        *ppuVar9 = puVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar8 == (undefined *)0x0) {
      (**(code **)(*ppuStack_60 + 0x10))(ppuStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_60);
    }
  }
  if (pppuStack_78 == (undefined ***)0x0) {
    *param_1 = uStack_80;
    param_1[1] = 0;
  }
  else {
    pppuVar4 = pppuStack_78 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
      if (bVar3) {
        *pppuVar4 = (undefined **)((long)*pppuVar4 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *param_1 = uStack_80;
    param_1[1] = pppuStack_78;
    if (pppuStack_78 != (undefined ***)0x0) {
      pppuVar4 = pppuStack_78 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
        if (bVar3) {
          *pppuVar4 = (undefined **)((long)*pppuVar4 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  pppuVar4 = &ppuStack_60;
  param_1[2] = FUN_10a8f2568;
  param_1[3] = &PTR_DAT_110c2ca38;
  param_1[4] = uStack_80;
  param_1[5] = pppuStack_78;
  uStack_50 = 0;
  uStack_58 = 0;
  puStack_68 = &UNK_1053a6a3c;
  ppuStack_60 = &PTR_DAT_110ae9180;
  FUN_10a044790(&puStack_68);
  (*(code *)*ppuStack_60)();
  if (pppuStack_78 != (undefined ***)0x0) {
    pppuVar5 = pppuStack_78 + 1;
    do {
      ppuVar9 = *pppuVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
      if (bVar3) {
        *pppuVar5 = (undefined **)((long)ppuVar9 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar9 == (undefined **)0x0) {
      (*(code *)(*pppuStack_78)[2])(pppuStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar4 = pppuStack_78;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  func_0x00010a05248c(&puStack_68);
  __Unwind_Resume();
  pppuVar5 = (undefined ***)0x2a8;
  puVar7 = puVar6;
  __Znwm(0x2a8);
  ppuVar9 = *pppuVar4;
  plVar11 = (long *)puVar6[1];
  uStack_c8 = puVar6[1];
  uStack_d0 = *puVar6;
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pppuVar4 = pppuVar5;
  func_0x00010a0fda30();
  FUN_10ab6a888(pppuVar5,ppuVar9,&uStack_d0,pppuVar4,puVar7);
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
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
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  return pppuVar5;
}



/* Entry: 10a8f2324; end: 10a8f23f7;  */

undefined8 FUN_10a8f2324(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = 0x2a8;
  puVar6 = param_2;
  __Znwm(0x2a8);
  uVar9 = *param_1;
  plVar8 = (long *)param_2[1];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar5 = uVar4;
  func_0x00010a0fda30();
  FUN_10ab6a888(uVar4,uVar9,&uStack_40,uVar5,puVar6);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
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
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return uVar4;
}



/* Entry: 10a8f23f8; end: 10a8f246f;  */

void FUN_10a8f23f8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x2c0;
  __Znwm();
  FUN_10a8f2470();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x40) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x48), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
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
      lVar4 = *(long *)(lVar5 + 0x48);
    }
    *(long *)(lVar5 + 0x40) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x48) = plVar6;
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



/* Entry: 10a8f2470; end: 10a8f24b7;  */

undefined8 * FUN_10a8f2470(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b9fda0;
  FUN_10a8f24b8(param_1 + 3);
  return param_1;
}



/* Entry: 10a8f24b8; end: 10a8f2567;  */

undefined8
FUN_10a8f24b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar6 = (long *)param_4[1];
  uStack_28 = param_4[1];
  uStack_30 = *param_4;
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
  }
  uVar4 = param_1;
  func_0x00010a0fda30();
  FUN_10ab6a888(param_1,0,&uStack_30,uVar4,param_2);
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



/* Entry: 10a8f2568; end: 10a8f25d7;  */

void FUN_10a8f2568(long param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    uVar1 = *(ushort *)(lVar2 + 0x209);
    if ((uVar1 & 0x7f) != 0) {
      *(ushort *)(lVar2 + 0x209) = uVar1 & 0xff00 | uVar1 - 1 & 0x7f;
      uStack_28 = 0;
      uStack_30 = 0;
      uStack_18 = 0;
      uStack_20 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      *(undefined8 *)(lVar2 + 0x218) = 0;
      FUN_10a1cc408(lVar2 + 0x220,(ulong)&uStack_60 | 8);
    }
    return;
  }
  return;
}



/* Entry: 10a8f25d8; end: 10a8f264f;  */

void FUN_10a8f25d8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x2c0;
  __Znwm();
  FUN_10a8f2650();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x40) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x48), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
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
      lVar4 = *(long *)(lVar5 + 0x48);
    }
    *(long *)(lVar5 + 0x40) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x48) = plVar6;
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



/* Entry: 10a8f2650; end: 10a8f2697;  */

undefined8 * FUN_10a8f2650(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b9fda0;
  FUN_10a8f2698(param_1 + 3);
  return param_1;
}



/* Entry: 10a8f2698; end: 10a8f2753;  */

undefined8
FUN_10a8f2698(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar7 = *param_3;
  plVar6 = (long *)param_4[1];
  uStack_38 = param_4[1];
  uStack_40 = *param_4;
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
  }
  uVar4 = param_1;
  func_0x00010a0fda30();
  FUN_10ab6a888(param_1,uVar7,&uStack_40,uVar4,param_2);
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



/* Entry: 10a8f2754; end: 10a8f278b;  */

void FUN_10a8f2754(long param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    uVar1 = *(ushort *)(lVar2 + 0x209);
    if ((uVar1 & 0x7f) != 0) {
      *(ushort *)(lVar2 + 0x209) = uVar1 & 0xff00 | uVar1 - 1 & 0x7f;
      uStack_28 = 0;
      uStack_30 = 0;
      uStack_18 = 0;
      uStack_20 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      *(undefined8 *)(lVar2 + 0x218) = 0;
      FUN_10a1cc408(lVar2 + 0x220,(ulong)&uStack_60 | 8);
    }
    return;
  }
  return;
}



/* Entry: 10a8f278c; end: 10a8f29d3;  */

undefined8 * FUN_10a8f278c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110c2ca60;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
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
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((long)param_1 + 0xb9) = 0;
  *(undefined8 *)((long)param_1 + 0xb1) = 0;
  param_1[0x19] = 0xffffffffffffffff;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  FUN_10a8f4b10(param_1 + 0x18,0,0);
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((long)param_1 + 0x10c) = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0xffffffffffffffff;
  param_1[0x2b] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  FUN_10a8f4b10(param_1 + 0x23,0,0);
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x36] = 0x3f80000000000000;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x3f] = param_2;
  param_1[0x40] = &PTR_DAT_110bd3ea8;
  *(undefined4 *)(param_1 + 0x41) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x214) = 0;
  *(undefined8 *)((long)param_1 + 0x20c) = 0;
  *(undefined4 *)((long)param_1 + 0x21c) = 0x3f800000;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x23c) = 0;
  *(undefined8 *)((long)param_1 + 0x234) = 0;
  *(undefined4 *)((long)param_1 + 0x244) = 0x3f800000;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  param_1[0x4d] = &PTR_DAT_110bd3ea8;
  *(undefined4 *)(param_1 + 0x4e) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x27c) = 0;
  *(undefined8 *)((long)param_1 + 0x274) = 0;
  *(undefined4 *)((long)param_1 + 0x284) = 0x3f800000;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x2a4) = 0;
  *(undefined8 *)((long)param_1 + 0x29c) = 0;
  *(undefined4 *)((long)param_1 + 0x2ac) = 0x3f800000;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0x3f800000;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  FUN_10a8f95c4(param_1 + 0x5d);
  param_1[0x4e2] = 0;
  param_1[0x4e1] = 0;
  param_1[0x4e3] = 0;
  param_1[0x4e4] = &PTR_FUN_110c331c8;
  param_1[0x4e6] = 0;
  param_1[0x4e5] = 0;
  param_1[0x4e8] = 0;
  param_1[0x4e7] = 0;
  param_1[0x4ea] = 0;
  param_1[0x4e9] = 0;
  return param_1;
}



/* Entry: 10a8f29d4; end: 10a8f2b43;  */

undefined8 * FUN_10a8f29d4(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c2ca60;
  param_1[0x4e4] = &PTR_FUN_110c331c8;
  puStack_28 = param_1 + 0x4e8;
  func_0x00010a1f4bf4(&puStack_28);
  puStack_28 = param_1 + 0x4e5;
  func_0x00010a1f4bf4(&puStack_28);
  if (param_1[0x4e1] != 0) {
    param_1[0x4e2] = param_1[0x4e1];
    __ZdlPv();
  }
  if (param_1[0x5a] != 0) {
    param_1[0x5b] = param_1[0x5a];
    __ZdlPv();
  }
  if (param_1[0x3a] != 0) {
    param_1[0x3b] = param_1[0x3a];
    __ZdlPv();
  }
  if (param_1[0x37] != 0) {
    param_1[0x38] = param_1[0x37];
    __ZdlPv();
  }
  _free(param_1[0x34]);
  _free(param_1[0x32]);
  _free(param_1[0x30]);
  _free(param_1[0x2e]);
  _free(param_1[0x2c]);
  _free(param_1[0x26]);
  _free(param_1[0x27]);
  func_0x00010a910584(param_1 + 0x28);
  _free(param_1[0x1b]);
  _free(param_1[0x1c]);
  func_0x00010a910584(param_1 + 0x1d);
  if (param_1[0x15] != 0) {
    param_1[0x16] = param_1[0x15];
    __ZdlPv();
  }
  if (param_1[0x12] != 0) {
    param_1[0x13] = param_1[0x12];
    __ZdlPv();
  }
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a8f2b44; end: 10a8f2b47;  */

undefined8 * FUN_10a8f2b44(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c2ca60;
  param_1[0x4e4] = &PTR_FUN_110c331c8;
  puStack_28 = param_1 + 0x4e8;
  func_0x00010a1f4bf4(&puStack_28);
  puStack_28 = param_1 + 0x4e5;
  func_0x00010a1f4bf4(&puStack_28);
  if (param_1[0x4e1] != 0) {
    param_1[0x4e2] = param_1[0x4e1];
    __ZdlPv();
  }
  if (param_1[0x5a] != 0) {
    param_1[0x5b] = param_1[0x5a];
    __ZdlPv();
  }
  if (param_1[0x3a] != 0) {
    param_1[0x3b] = param_1[0x3a];
    __ZdlPv();
  }
  if (param_1[0x37] != 0) {
    param_1[0x38] = param_1[0x37];
    __ZdlPv();
  }
  _free(param_1[0x34]);
  _free(param_1[0x32]);
  _free(param_1[0x30]);
  _free(param_1[0x2e]);
  _free(param_1[0x2c]);
  _free(param_1[0x26]);
  _free(param_1[0x27]);
  func_0x00010a910584(param_1 + 0x28);
  _free(param_1[0x1b]);
  _free(param_1[0x1c]);
  func_0x00010a910584(param_1 + 0x1d);
  if (param_1[0x15] != 0) {
    param_1[0x16] = param_1[0x15];
    __ZdlPv();
  }
  if (param_1[0x12] != 0) {
    param_1[0x13] = param_1[0x12];
    __ZdlPv();
  }
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a8f2b48; end: 10a8f2b5b;  */

void FUN_10a8f2b48(void)

{
  FUN_10a8f29d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8f2b5c; end: 10a8f2ddf;  */

void FUN_10a8f2b5c(long param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  float fVar14;
  
  plVar5 = (long *)*param_2;
  if (param_2[1] - (long)plVar5 != 0) {
    iVar2 = (int)((ulong)(param_2[1] - (long)plVar5) >> 3) * -0x55555555;
    iVar9 = (int)((ulong)(plVar5[1] - *plVar5) >> 2) * 0x55555556 + -1;
    *(int *)(param_1 + 8) = iVar2;
    *(int *)(param_1 + 0xc) = iVar9;
    lVar13 = (long)(iVar9 * iVar2);
    func_0x0001096b5198(param_1 + 0x18,lVar13);
    func_0x0001096b5198(param_1 + 0x48,lVar13);
    func_0x0001096b5198(param_1 + 0x30,lVar13);
    func_0x0001096b5198(param_1 + 0x78,lVar13);
    func_0x0001096b5198(param_1 + 0x60,lVar13);
    iVar9 = *(int *)(param_1 + 8);
    if (iVar9 < 1) {
      plVar5 = (long *)*param_2;
      plVar8 = (long *)param_2[1];
    }
    else {
      uVar4 = 0;
      do {
        if (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x18)) goto LAB_10a8f2d18;
        plVar5 = (long *)*param_2;
        plVar8 = (long *)param_2[1];
        lVar13 = (long)plVar8 - (long)plVar5;
        if (lVar13 == 0) goto LAB_10a8f2d18;
        if (plVar5[1] != *plVar5) {
          lVar10 = 0;
          uVar11 = 0;
          puVar12 = (undefined8 *)
                    (*(long *)(param_1 + 0x18) + (long)(*(int *)(param_1 + 0xc) * (int)uVar4) * 0xc)
          ;
          do {
            uVar6 = (lVar13 >> 3) * -0x5555555555555555;
            if ((uVar6 < uVar4 || uVar6 - uVar4 == 0) ||
               (lVar13 = plVar5[uVar4 * 3],
               uVar6 = ((plVar5 + uVar4 * 3)[1] - lVar13 >> 2) * -0x5555555555555555,
               uVar6 < uVar11 || uVar6 - uVar11 == 0)) goto LAB_10a8f2d18;
            puVar1 = (undefined8 *)(lVar13 + lVar10);
            uVar7 = *puVar1;
            *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar1 + 1);
            *puVar12 = uVar7;
            plVar5 = (long *)*param_2;
            plVar8 = (long *)param_2[1];
            lVar13 = (long)plVar8 - (long)plVar5;
            if (lVar13 == 0) goto LAB_10a8f2d18;
            uVar11 = uVar11 + 1;
            lVar10 = lVar10 + 0xc;
            puVar12 = puVar12 + 3;
          } while (uVar11 < (ulong)((plVar5[1] - *plVar5 >> 2) * -0x5555555555555555));
          iVar9 = *(int *)(param_1 + 8);
        }
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)iVar9);
    }
    if (plVar8 != plVar5) {
      fVar14 = (float)((plVar5[1] - *plVar5 >> 2) * -0x5555555555555555 - 2) / 18.0;
      *(float *)(param_1 + 0x10) = fVar14 * fVar14;
      return;
    }
  }
LAB_10a8f2d18:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a8f2d1c);
  (*pcVar3)();
}



/* Entry: 10a8f2de0; end: 10a8f458b;  */

void FUN_10a8f2de0(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  bool bVar14;
  int *piVar15;
  undefined4 *puVar16;
  uint *puVar17;
  float *pfVar18;
  float *pfVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  int *piVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  int *piVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  float *pfVar34;
  uint uVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  ulong uVar39;
  long lVar40;
  long lVar41;
  ulong uVar42;
  undefined8 uVar43;
  int *piVar44;
  float *pfVar45;
  float *pfVar46;
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
  undefined1 uVar61;
  undefined1 uVar62;
  int iVar63;
  int iVar65;
  int iVar66;
  int iVar67;
  undefined1 auVar64 [16];
  float fVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  float fVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  undefined4 uStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  undefined4 uStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  undefined8 uStack_164;
  undefined8 uStack_15c;
  undefined4 uStack_154;
  uint auStack_150 [6];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 *puStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uVar43 = *(undefined8 *)(param_2 + 8);
  uVar22 = *(undefined8 *)(param_2 + 0x18);
  uVar11 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x270) = uVar43;
  *(undefined8 *)(param_1 + 0x288) = uVar11;
  *(undefined8 *)(param_1 + 0x280) = uVar22;
  uVar22 = *(undefined8 *)(param_2 + 0x30);
  uVar43 = *(undefined8 *)(param_2 + 0x28);
  uVar11 = *(undefined8 *)(param_2 + 0x38);
  uVar12 = *(undefined8 *)(param_2 + 0x40);
  uVar69 = *(undefined8 *)(param_2 + 0x50);
  uVar20 = *(undefined8 *)(param_2 + 0x48);
  uVar70 = *(undefined8 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x2c4) = *(undefined8 *)(param_2 + 0x5c);
  *(undefined8 *)(param_1 + 700) = uVar70;
  *(undefined8 *)(param_1 + 0x2a8) = uVar12;
  *(undefined8 *)(param_1 + 0x2a0) = uVar11;
  *(undefined8 *)(param_1 + 0x2b8) = uVar69;
  *(undefined8 *)(param_1 + 0x2b0) = uVar20;
  *(undefined8 *)(param_1 + 0x298) = uVar22;
  *(undefined8 *)(param_1 + 0x290) = uVar43;
  uVar22 = *(undefined8 *)(param_2 + 0x10);
  uVar43 = *(undefined8 *)(param_2 + 8);
  uVar11 = *(undefined8 *)(param_2 + 0x18);
  uVar12 = *(undefined8 *)(param_2 + 0x20);
  uVar70 = *(undefined8 *)(param_2 + 0x30);
  uVar69 = *(undefined8 *)(param_2 + 0x28);
  uVar73 = *(undefined8 *)(param_2 + 0x40);
  uVar72 = *(undefined8 *)(param_2 + 0x38);
  uVar75 = *(undefined8 *)(param_2 + 0x50);
  uVar74 = *(undefined8 *)(param_2 + 0x48);
  uVar20 = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 600) = uVar20;
  *(undefined8 *)(param_1 + 0x240) = uVar73;
  *(undefined8 *)(param_1 + 0x238) = uVar72;
  *(undefined8 *)(param_1 + 0x250) = uVar75;
  *(undefined8 *)(param_1 + 0x248) = uVar74;
  *(undefined8 *)(param_1 + 0x220) = uVar12;
  *(undefined8 *)(param_1 + 0x218) = uVar11;
  *(undefined8 *)(param_1 + 0x230) = uVar70;
  *(undefined8 *)(param_1 + 0x228) = uVar69;
  *(undefined8 *)(param_1 + 0x210) = uVar22;
  *(undefined8 *)(param_1 + 0x208) = uVar43;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  iVar5 = *(int *)(param_1 + 8);
  iVar6 = *(int *)(param_1 + 0xc);
  iVar7 = iVar6 * 3;
  uVar25 = iVar7 - 9;
  func_0x00010742a308(param_1 + 0x90,(long)(iVar6 * 0x24));
  func_0x00010742a308(param_1 + 0xa8,(long)iVar7);
  FUN_10a8f4b10(param_1 + 0xc0,(long)(int)uVar25,(long)(int)uVar25);
  piVar44 = *(int **)(param_1 + 0xe0);
  lVar41 = *(long *)(param_1 + 200);
  piVar15 = (int *)(lVar41 * 4);
  if (piVar44 == (int *)0x0) {
    _malloc();
    *(int **)(param_1 + 0xe0) = piVar15;
    if (piVar15 != (int *)0x0) {
      if (lVar41 < 1) {
        lVar41 = 0;
      }
      else {
        iVar63 = 0;
        piVar44 = piVar15;
        lVar32 = lVar41;
        piVar27 = *(int **)(param_1 + 0xd8);
        do {
          *piVar44 = iVar63;
          iVar63 = ((iVar63 + piVar27[1]) - *piVar27) + 0xc;
          lVar32 = lVar32 + -1;
          piVar44 = piVar44 + 1;
          piVar27 = piVar27 + 1;
        } while (lVar32 != 0);
        lVar41 = lVar41 * 0xc;
      }
      FUN_10a9105bc(param_1 + 0xe8,lVar41);
      lVar41 = *(long *)(param_1 + 0xd8);
      uVar42 = *(ulong *)(param_1 + 200);
      uVar35 = *(uint *)(lVar41 + uVar42 * 4);
      if (0 < (long)uVar42) {
        lVar32 = *(long *)(param_1 + 0xe0);
        uVar21 = uVar42;
        uVar28 = (ulong)uVar35;
        do {
          uVar36 = uVar21 - 1;
          uVar35 = *(uint *)(lVar41 + uVar36 * 4);
          uVar30 = (ulong)uVar35;
          iVar63 = (int)uVar28 - uVar35;
          if (iVar63 == 0 || (int)uVar28 < (int)uVar35) {
            iVar65 = piVar15[uVar36];
          }
          else {
            uVar38 = (ulong)(uint)piVar15[uVar36];
            uVar28 = (ulong)(iVar63 - 1);
            lVar40 = uVar28 + 1;
            lVar37 = *(long *)(param_1 + 0xe8) + uVar28 * 4;
            lVar31 = *(long *)(param_1 + 0xf0) + uVar28 * 4;
            do {
              *(undefined4 *)(lVar31 + (long)(int)uVar38 * 4) =
                   *(undefined4 *)(lVar31 + (long)(int)uVar30 * 4);
              uVar30 = (ulong)*(int *)(lVar41 + uVar36 * 4);
              iVar65 = piVar15[uVar36];
              uVar38 = (ulong)iVar65;
              *(undefined4 *)(lVar37 + uVar38 * 4) = *(undefined4 *)(lVar37 + uVar30 * 4);
              lVar37 = lVar37 + -4;
              lVar31 = lVar31 + -4;
              lVar40 = lVar40 + -1;
            } while (lVar40 != 0);
          }
          *(int *)(lVar41 + uVar36 * 4) = iVar65;
          *(int *)(lVar32 + uVar36 * 4) = iVar63;
          bVar14 = 1 < uVar21;
          uVar21 = uVar36;
          uVar28 = uVar30;
        } while (bVar14);
        lVar37 = uVar42 * 4 + -4;
        uVar35 = *(int *)(lVar41 + lVar37) + *(int *)(lVar32 + lVar37) + 0xc;
        *(uint *)(lVar41 + uVar42 * 4) = uVar35;
      }
      FUN_10a9106b4(param_1 + 0xe8,(long)(int)uVar35);
      goto LAB_10a8f30e4;
    }
LAB_10a8f44c8:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  else {
    piVar15 = piVar15 + 1;
    _malloc();
    if (piVar15 == (int *)0x0) goto LAB_10a8f44c8;
    if (lVar41 < 1) {
      iVar63 = 0;
    }
    else {
      iVar63 = 0;
      piVar23 = *(int **)(param_1 + 0xd8);
      iVar65 = *piVar23;
      piVar27 = piVar15;
      lVar32 = lVar41;
      do {
        piVar23 = piVar23 + 1;
        *piVar27 = iVar63;
        iVar66 = iVar65 + *piVar44;
        iVar65 = *piVar23;
        iVar66 = iVar65 - iVar66;
        if (iVar66 < 0xd) {
          iVar66 = 0xc;
        }
        iVar63 = *piVar44 + iVar63 + iVar66;
        lVar32 = lVar32 + -1;
        piVar27 = piVar27 + 1;
        piVar44 = piVar44 + 1;
      } while (lVar32 != 0);
    }
    piVar15[lVar41] = iVar63;
    FUN_10a9106b4(param_1 + 0xe8,(long)iVar63);
    lVar41 = *(long *)(param_1 + 0xd8);
    uVar42 = *(ulong *)(param_1 + 200);
    if (0 < (long)*(ulong *)(param_1 + 200)) {
      do {
        uVar21 = uVar42 - 1;
        iVar63 = piVar15[uVar21];
        uVar35 = *(uint *)(lVar41 + uVar21 * 4);
        uVar28 = (ulong)uVar35;
        if (((int)uVar35 < iVar63) &&
           (iVar65 = *(int *)(*(long *)(param_1 + 0xe0) + uVar21 * 4), uVar36 = (ulong)(iVar65 - 1),
           0 < iVar65)) {
          lVar31 = uVar36 + 1;
          lVar32 = *(long *)(param_1 + 0xe8) + uVar36 * 4;
          lVar37 = *(long *)(param_1 + 0xf0) + uVar36 * 4;
          do {
            *(undefined4 *)(lVar37 + (long)iVar63 * 4) =
                 *(undefined4 *)(lVar37 + (long)(int)uVar28 * 4);
            uVar28 = (ulong)*(int *)(lVar41 + uVar21 * 4);
            *(undefined4 *)(lVar32 + (long)iVar63 * 4) = *(undefined4 *)(lVar32 + uVar28 * 4);
            lVar32 = lVar32 + -4;
            lVar37 = lVar37 + -4;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
        }
        bVar14 = 1 < uVar42;
        uVar42 = uVar21;
      } while (bVar14);
    }
    *(int **)(param_1 + 0xd8) = piVar15;
    _free();
LAB_10a8f30e4:
    if (3 < iVar6) {
      uVar42 = 0;
      if ((int)uVar25 < 2) {
        uVar25 = 1;
      }
      do {
        iVar65 = (int)((uVar42 & 0xffffffff) / 3);
        iVar63 = iVar65 * 3;
        iVar66 = iVar63 + -9;
        if (iVar66 == 0 || iVar63 < 9) {
          iVar63 = 9;
        }
        if ((long)iVar66 <= (long)uVar42) {
          lVar32 = -(ulong)(iVar63 - 9);
          lVar41 = (ulong)(iVar63 - 9) * 4;
          iVar65 = iVar65 * 3;
          if (iVar65 < 10) {
            iVar65 = 9;
          }
          uVar21 = (ulong)(iVar65 - 9);
          do {
            lVar41 = lVar41 + 4;
            piVar15 = *(int **)(param_1 + 0xd8);
            lVar37 = *(long *)(param_1 + 0xe0);
            if (lVar37 == 0) {
              lVar31 = *(long *)(param_1 + 200);
              if (piVar15[lVar31] == *piVar15) {
                if (*(long *)(param_1 + 0x100) == 0) {
                  FUN_10a9105bc(param_1 + 0xe8,*(long *)(param_1 + 0xd0) << 1);
                  lVar31 = *(long *)(param_1 + 200);
                }
                lVar37 = 1;
                _calloc(1,lVar31 << 2);
                *(long *)(param_1 + 0xe0) = lVar37;
                if (lVar37 == 0) goto LAB_10a8f44c8;
                piVar15 = *(int **)(param_1 + 0xd8);
                if (0 < lVar31) {
                  uVar10 = *(undefined4 *)(param_1 + 0x100);
                  lVar40 = 4;
                  do {
                    *(undefined4 *)((long)piVar15 + lVar40) = uVar10;
                    lVar40 = lVar40 + 4;
                    lVar31 = lVar31 + -1;
                  } while (lVar31 != 0);
                }
              }
              else {
                lVar37 = lVar31 << 2;
                _malloc();
                *(long *)(param_1 + 0xe0) = lVar37;
                if (lVar37 == 0) goto LAB_10a8f44c8;
                if (0 < lVar31) {
                  lVar40 = 0;
                  do {
                    *(int *)(lVar37 + lVar40 * 4) = (piVar15 + lVar40)[1] - piVar15[lVar40];
                    lVar40 = lVar40 + 1;
                  } while (lVar31 != lVar40);
                }
              }
            }
            lVar31 = *(long *)(param_1 + 0x100);
            if (lVar31 == piVar15[uVar21]) {
              lVar40 = *(long *)(param_1 + 0xf8);
              uVar28 = uVar21;
              do {
                if (*(int *)(lVar37 + uVar28 * 4) != 0) break;
                piVar15[uVar28] = (int)lVar40;
                bVar14 = 0 < (long)uVar28;
                uVar28 = uVar28 - 1;
              } while (bVar14);
              *(int *)(lVar37 + uVar21 * 4) = *(int *)(lVar37 + uVar21 * 4) + 1;
              FUN_10a9106b4(param_1 + 0xe8,lVar40 + 1);
              lVar37 = *(long *)(param_1 + 0xe8);
              *(undefined4 *)(lVar37 + lVar40 * 4) = 0;
              *(int *)(*(long *)(param_1 + 0xf0) + lVar40 * 4) = (int)uVar42;
              lVar24 = *(long *)(param_1 + 0x100);
              if ((lVar31 != lVar24) && ((long)uVar21 < *(long *)(param_1 + 200))) {
                lVar26 = *(long *)(param_1 + 0xd8);
                lVar29 = *(long *)(param_1 + 200) + lVar32;
                do {
                  if (lVar31 == *(int *)(lVar26 + lVar41)) {
                    *(int *)(lVar26 + lVar41) = (int)lVar24;
                  }
                  lVar26 = lVar26 + 4;
                  lVar29 = lVar29 + -1;
                } while (lVar29 != 0);
              }
              puVar16 = (undefined4 *)(lVar37 + ((lVar40 << 0x20) >> 0x1e));
            }
            else {
              if (lVar31 == piVar15[uVar21 + 1]) {
                iVar63 = *(int *)(lVar37 + uVar21 * 4);
                lVar24 = (long)iVar63 + (long)piVar15[uVar21];
                lVar40 = *(long *)(param_1 + 0xf8);
                if (lVar40 == lVar24) {
                  *(int *)(lVar37 + uVar21 * 4) = iVar63 + 1;
                  FUN_10a9106b4(param_1 + 0xe8,lVar24 + 1);
                  lVar37 = *(long *)(param_1 + 0x100);
                  if (lVar31 == lVar37) {
                    lVar40 = *(long *)(param_1 + 0xd8);
                  }
                  else {
                    lVar40 = *(long *)(param_1 + 0xd8);
                    if ((long)uVar21 < *(long *)(param_1 + 200)) {
                      lVar24 = *(long *)(param_1 + 200) + lVar32;
                      piVar15 = (int *)(lVar40 + lVar41);
                      do {
                        if (lVar31 == *piVar15) {
                          *piVar15 = (int)lVar37;
                        }
                        piVar15 = piVar15 + 1;
                        lVar24 = lVar24 + -1;
                      } while (lVar24 != 0);
                    }
                  }
                  iVar63 = *(int *)(lVar40 + uVar21 * 4);
                  iVar65 = iVar63 + *(int *)(*(long *)(param_1 + 0xe0) + uVar21 * 4) + -1;
                  lVar40 = *(long *)(param_1 + 0xf0);
                  lVar37 = (long)iVar65;
                  lVar31 = (long)iVar65;
                  if (iVar63 < iVar65) {
                    do {
                      iVar65 = *(int *)(lVar40 + lVar37 * 4 + -4);
                      lVar31 = lVar37;
                      if ((long)iVar65 <= (long)uVar42) break;
                      lVar31 = lVar37 + -1;
                      *(int *)(lVar40 + lVar37 * 4) = iVar65;
                      puVar16 = (undefined4 *)(*(long *)(param_1 + 0xe8) + lVar37 * 4);
                      *puVar16 = puVar16[-1];
                      lVar37 = lVar31;
                    } while (iVar63 < lVar31);
                  }
                  *(int *)(lVar40 + lVar31 * 4) = (int)uVar42;
                  puVar16 = (undefined4 *)(*(long *)(param_1 + 0xe8) + lVar31 * 4);
                  *puVar16 = 0;
                  goto LAB_10a8f35f4;
                }
              }
              else {
                lVar40 = *(long *)(param_1 + 0xf8);
              }
              if (lVar40 != lVar31) {
                FUN_10a9106b4(param_1 + 0xe8,lVar31);
                piVar44 = *(int **)(param_1 + 0xe0);
                lVar37 = *(long *)(param_1 + 200);
                piVar15 = (int *)(lVar37 * 4);
                if (piVar44 == (int *)0x0) {
                  _malloc();
                  *(int **)(param_1 + 0xe0) = piVar15;
                  if (piVar15 == (int *)0x0) goto LAB_10a8f44c8;
                  if (lVar37 < 1) {
                    lVar37 = 0;
                  }
                  else {
                    iVar63 = 0;
                    piVar44 = piVar15;
                    lVar31 = lVar37;
                    piVar27 = *(int **)(param_1 + 0xd8);
                    do {
                      *piVar44 = iVar63;
                      iVar63 = ((iVar63 + piVar27[1]) - *piVar27) + 2;
                      lVar31 = lVar31 + -1;
                      piVar44 = piVar44 + 1;
                      piVar27 = piVar27 + 1;
                    } while (lVar31 != 0);
                    lVar37 = lVar37 << 1;
                  }
                  FUN_10a9105bc(param_1 + 0xe8,lVar37);
                  lVar37 = *(long *)(param_1 + 0xd8);
                  uVar28 = *(ulong *)(param_1 + 200);
                  uVar35 = *(uint *)(lVar37 + uVar28 * 4);
                  if (0 < (long)uVar28) {
                    lVar31 = *(long *)(param_1 + 0xe0);
                    uVar36 = uVar28;
                    uVar30 = (ulong)uVar35;
                    do {
                      uVar38 = uVar36 - 1;
                      uVar35 = *(uint *)(lVar37 + uVar38 * 4);
                      uVar33 = (ulong)uVar35;
                      iVar63 = (int)uVar30 - uVar35;
                      if (iVar63 == 0 || (int)uVar30 < (int)uVar35) {
                        iVar65 = piVar15[uVar38];
                      }
                      else {
                        uVar39 = (ulong)(uint)piVar15[uVar38];
                        uVar30 = (ulong)(iVar63 - 1);
                        lVar26 = uVar30 + 1;
                        lVar40 = *(long *)(param_1 + 0xe8) + uVar30 * 4;
                        lVar24 = *(long *)(param_1 + 0xf0) + uVar30 * 4;
                        do {
                          *(undefined4 *)(lVar24 + (long)(int)uVar39 * 4) =
                               *(undefined4 *)(lVar24 + (long)(int)uVar33 * 4);
                          uVar33 = (ulong)*(int *)(lVar37 + uVar38 * 4);
                          iVar65 = piVar15[uVar38];
                          uVar39 = (ulong)iVar65;
                          *(undefined4 *)(lVar40 + uVar39 * 4) =
                               *(undefined4 *)(lVar40 + uVar33 * 4);
                          lVar40 = lVar40 + -4;
                          lVar24 = lVar24 + -4;
                          lVar26 = lVar26 + -1;
                        } while (lVar26 != 0);
                      }
                      *(int *)(lVar37 + uVar38 * 4) = iVar65;
                      *(int *)(lVar31 + uVar38 * 4) = iVar63;
                      bVar14 = 1 < uVar36;
                      uVar36 = uVar38;
                      uVar30 = uVar33;
                    } while (bVar14);
                    lVar40 = uVar28 * 4 + -4;
                    uVar35 = *(int *)(lVar37 + lVar40) + *(int *)(lVar31 + lVar40) + 2;
                    *(uint *)(lVar37 + uVar28 * 4) = uVar35;
                  }
                  FUN_10a9106b4(param_1 + 0xe8,(long)(int)uVar35);
                }
                else {
                  piVar15 = piVar15 + 1;
                  _malloc();
                  if (piVar15 == (int *)0x0) goto LAB_10a8f44c8;
                  if (lVar37 < 1) {
                    iVar63 = 0;
                  }
                  else {
                    iVar63 = 0;
                    piVar23 = *(int **)(param_1 + 0xd8);
                    iVar65 = *piVar23;
                    piVar27 = piVar15;
                    lVar31 = lVar37;
                    do {
                      piVar23 = piVar23 + 1;
                      *piVar27 = iVar63;
                      iVar66 = iVar65 + *piVar44;
                      iVar65 = *piVar23;
                      iVar66 = iVar65 - iVar66;
                      if (iVar66 < 3) {
                        iVar66 = 2;
                      }
                      iVar63 = *piVar44 + iVar63 + iVar66;
                      lVar31 = lVar31 + -1;
                      piVar27 = piVar27 + 1;
                      piVar44 = piVar44 + 1;
                    } while (lVar31 != 0);
                  }
                  piVar15[lVar37] = iVar63;
                  FUN_10a9106b4(param_1 + 0xe8,(long)iVar63);
                  lVar37 = *(long *)(param_1 + 0xd8);
                  uVar28 = *(ulong *)(param_1 + 200);
                  if (0 < (long)*(ulong *)(param_1 + 200)) {
                    do {
                      uVar36 = uVar28 - 1;
                      iVar63 = piVar15[uVar36];
                      uVar35 = *(uint *)(lVar37 + uVar36 * 4);
                      uVar30 = (ulong)uVar35;
                      if (((int)uVar35 < iVar63) &&
                         (iVar65 = *(int *)(*(long *)(param_1 + 0xe0) + uVar36 * 4),
                         uVar38 = (ulong)(iVar65 - 1), 0 < iVar65)) {
                        lVar24 = uVar38 + 1;
                        lVar31 = *(long *)(param_1 + 0xe8) + uVar38 * 4;
                        lVar40 = *(long *)(param_1 + 0xf0) + uVar38 * 4;
                        do {
                          *(undefined4 *)(lVar40 + (long)iVar63 * 4) =
                               *(undefined4 *)(lVar40 + (long)(int)uVar30 * 4);
                          uVar30 = (ulong)*(int *)(lVar37 + uVar36 * 4);
                          *(undefined4 *)(lVar31 + (long)iVar63 * 4) =
                               *(undefined4 *)(lVar31 + uVar30 * 4);
                          lVar31 = lVar31 + -4;
                          lVar40 = lVar40 + -4;
                          lVar24 = lVar24 + -1;
                        } while (lVar24 != 0);
                      }
                      bVar14 = 1 < uVar28;
                      uVar28 = uVar36;
                    } while (bVar14);
                  }
                  *(int **)(param_1 + 0xd8) = piVar15;
                  _free();
                }
              }
              puVar16 = (undefined4 *)(param_1 + 0xc0);
              FUN_10a9107e4(puVar16,uVar42,uVar21);
            }
LAB_10a8f35f4:
            *puVar16 = 0x3f800000;
            lVar32 = lVar32 + -1;
            bVar14 = uVar21 < uVar42;
            uVar21 = uVar21 + 1;
          } while (bVar14);
        }
        uVar42 = uVar42 + 1;
      } while (uVar42 != uVar25);
    }
    puVar17 = *(uint **)(param_1 + 0xe0);
    if (puVar17 != (uint *)0x0) {
      lVar41 = *(long *)(param_1 + 0xd8);
      iVar63 = *(int *)(lVar41 + 4);
      uVar25 = *puVar17;
      *(uint *)(lVar41 + 4) = uVar25;
      lVar32 = *(long *)(param_1 + 200);
      if (1 < lVar32) {
        lVar37 = 1;
        do {
          uVar42 = (ulong)uVar25;
          lVar31 = lVar37 + 1;
          iVar65 = *(int *)(lVar41 + lVar31 * 4);
          uVar35 = puVar17[lVar37];
          if (((int)uVar25 < iVar63) && (0 < (int)uVar35)) {
            lVar40 = 0;
            lVar24 = *(long *)(param_1 + 0xe8);
            lVar26 = *(long *)(param_1 + 0xf0);
            do {
              *(undefined4 *)(lVar26 + (long)(int)uVar42 * 4 + lVar40 * 4) =
                   *(undefined4 *)(lVar26 + (long)iVar63 * 4 + lVar40 * 4);
              uVar25 = *(uint *)(lVar41 + lVar37 * 4);
              uVar42 = (ulong)(int)uVar25;
              *(undefined4 *)(lVar24 + uVar42 * 4 + lVar40 * 4) =
                   *(undefined4 *)(lVar24 + (long)iVar63 * 4 + lVar40 * 4);
              lVar40 = lVar40 + 1;
              uVar35 = puVar17[lVar37];
            } while (lVar40 < (int)uVar35);
          }
          uVar25 = uVar25 + uVar35;
          *(uint *)(lVar41 + lVar31 * 4) = uVar25;
          lVar37 = lVar31;
          iVar63 = iVar65;
        } while (lVar31 != lVar32);
      }
      _free();
      *(undefined8 *)(param_1 + 0xe0) = 0;
      FUN_10a9106b4(param_1 + 0xe8,
                    (long)*(int *)(*(long *)(param_1 + 0xd8) + *(long *)(param_1 + 200) * 4));
      uVar42 = *(ulong *)(param_1 + 0xf8);
      if ((long)uVar42 < *(long *)(param_1 + 0x100)) {
        lVar32 = uVar42 << 2;
        lVar41 = lVar32;
        if (uVar42 >> 0x3e != 0) {
          lVar41 = -1;
        }
        lVar37 = lVar41;
        __Znam();
        __Znam();
        lVar31 = *(long *)(param_1 + 0xe8);
        if ((long)uVar42 < 1) {
          lVar40 = *(long *)(param_1 + 0xf0);
        }
        else {
          _memcpy(lVar37,lVar31,lVar32);
          lVar40 = *(long *)(param_1 + 0xf0);
          _memcpy(lVar41,lVar40,lVar32);
        }
        *(long *)(param_1 + 0xe8) = lVar37;
        *(long *)(param_1 + 0xf0) = lVar41;
        *(ulong *)(param_1 + 0x100) = uVar42;
        if (lVar40 != 0) {
          __ZdaPv(lVar40);
        }
        if (lVar31 != 0) {
          __ZdaPv(lVar31);
        }
      }
    }
    auStack_150[0] = auStack_150[0] & 0xffffff00;
    auStack_150[4] = 0;
    auStack_150[5] = 0;
    auStack_150[2] = 0;
    auStack_150[3] = 0;
    uStack_130 = 0;
    uStack_138 = 0;
    uStack_120 = 0;
    uStack_128 = 0;
    uStack_110 = 0;
    uStack_118 = 0;
    FUN_10a8f4b10(auStack_150,*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 200));
    uVar43 = *(undefined8 *)(param_1 + 0xd0);
    auStack_108[0] = 0;
    puStack_f0 = (undefined4 *)0x0;
    uStack_f8 = 0;
    lStack_e0 = 0;
    uStack_e8 = 0;
    uStack_d0 = 0;
    lStack_d8 = 0;
    uStack_100 = 0xffffffffffffffff;
    uStack_c8 = 0;
    FUN_10a8f4b10(auStack_108,0,0);
    uVar42 = *(ulong *)(param_1 + 0xd0);
    if (0 < (long)uVar42) {
      if (uVar42 >> 0x3e == 0) {
        piVar15 = (int *)0x1;
        _calloc(1,uVar42 << 2);
        if (piVar15 != (int *)0x0) goto LAB_10a8f3824;
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10a8f4508;
    }
    piVar15 = (int *)0x0;
LAB_10a8f3824:
    FUN_10a8f4b10(auStack_108,uVar42,uVar42);
    lVar41 = uVar42 - 1;
    if ((long)uVar42 < 1) {
      if (uVar42 != 0) goto LAB_10a8f38b4;
      lVar41 = 0;
    }
    else {
      uVar21 = 0;
      lVar31 = *(long *)(param_1 + 0xf0);
      lVar32 = *(long *)(param_1 + 0xd8);
      lVar37 = *(long *)(param_1 + 0xe0);
      do {
        piVar44 = (int *)(lVar32 + uVar21 * 4);
        lVar40 = (long)*piVar44;
        if (lVar37 == 0) {
          lVar24 = (long)piVar44[1];
        }
        else {
          lVar24 = *(int *)(lVar37 + uVar21 * 4) + lVar40;
        }
        lVar26 = lVar24 - lVar40;
        if (lVar26 != 0 && lVar40 <= lVar24) {
          piVar44 = (int *)(lVar31 + lVar40 * 4);
          do {
            uVar28 = (ulong)*piVar44;
            if (uVar21 == uVar28) {
LAB_10a8f388c:
              piVar15[uVar21] = piVar15[uVar21] + 1;
            }
            else if ((long)uVar21 < (long)uVar28) {
              piVar15[uVar28] = piVar15[uVar28] + 1;
              goto LAB_10a8f388c;
            }
            lVar26 = lVar26 + -1;
            piVar44 = piVar44 + 1;
          } while (lVar26 != 0);
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar42);
LAB_10a8f38b4:
      uVar21 = uVar42 + 3;
      uVar28 = uVar42 + 7;
      if (-1 < (long)uVar42) {
        uVar21 = uVar42;
        uVar28 = uVar42;
      }
      if (uVar42 + 3 < 7) {
        iVar63 = *piVar15;
        piVar44 = piVar15;
        if (1 < (long)uVar42) {
          do {
            iVar63 = piVar44[1] + iVar63;
            lVar41 = lVar41 + -1;
            piVar44 = piVar44 + 1;
          } while (lVar41 != 0);
        }
      }
      else {
        uVar22 = *(undefined8 *)(piVar15 + 2);
        uVar55 = (undefined1)uVar22;
        uVar56 = (undefined1)((ulong)uVar22 >> 8);
        uVar57 = (undefined1)((ulong)uVar22 >> 0x10);
        uVar58 = (undefined1)((ulong)uVar22 >> 0x18);
        uVar59 = (undefined1)((ulong)uVar22 >> 0x20);
        uVar60 = (undefined1)((ulong)uVar22 >> 0x28);
        uVar61 = (undefined1)((ulong)uVar22 >> 0x30);
        uVar62 = (undefined1)((ulong)uVar22 >> 0x38);
        uVar22 = *(undefined8 *)piVar15;
        uVar47 = (undefined1)uVar22;
        uVar48 = (undefined1)((ulong)uVar22 >> 8);
        uVar49 = (undefined1)((ulong)uVar22 >> 0x10);
        uVar50 = (undefined1)((ulong)uVar22 >> 0x18);
        uVar51 = (undefined1)((ulong)uVar22 >> 0x20);
        uVar52 = (undefined1)((ulong)uVar22 >> 0x28);
        uVar53 = (undefined1)((ulong)uVar22 >> 0x30);
        uVar54 = (undefined1)((ulong)uVar22 >> 0x38);
        if (7 < (long)uVar42) {
          uVar28 = uVar28 & 0xfffffffffffffff8;
          iVar63 = piVar15[4];
          iVar65 = piVar15[5];
          iVar66 = piVar15[6];
          iVar67 = piVar15[7];
          if (0xf < uVar42) {
            piVar44 = piVar15 + 0xc;
            lVar41 = 8;
            do {
              iVar9 = (int)*(undefined8 *)(piVar44 + -4) +
                      CONCAT13(uVar50,CONCAT12(uVar49,CONCAT11(uVar48,uVar47)));
              uVar47 = (undefined1)iVar9;
              uVar48 = (undefined1)((uint)iVar9 >> 8);
              uVar49 = (undefined1)((uint)iVar9 >> 0x10);
              uVar50 = (undefined1)((uint)iVar9 >> 0x18);
              iVar9 = (int)((ulong)*(undefined8 *)(piVar44 + -4) >> 0x20) +
                      CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)));
              uVar51 = (undefined1)iVar9;
              uVar52 = (undefined1)((uint)iVar9 >> 8);
              uVar53 = (undefined1)((uint)iVar9 >> 0x10);
              uVar54 = (undefined1)((uint)iVar9 >> 0x18);
              iVar9 = (int)*(undefined8 *)(piVar44 + -2) +
                      CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55)));
              uVar55 = (undefined1)iVar9;
              uVar56 = (undefined1)((uint)iVar9 >> 8);
              uVar57 = (undefined1)((uint)iVar9 >> 0x10);
              uVar58 = (undefined1)((uint)iVar9 >> 0x18);
              iVar9 = (int)((ulong)*(undefined8 *)(piVar44 + -2) >> 0x20) +
                      CONCAT13(uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59)));
              uVar59 = (undefined1)iVar9;
              uVar60 = (undefined1)((uint)iVar9 >> 8);
              uVar61 = (undefined1)((uint)iVar9 >> 0x10);
              uVar62 = (undefined1)((uint)iVar9 >> 0x18);
              iVar63 = (int)*(undefined8 *)piVar44 + iVar63;
              iVar65 = (int)((ulong)*(undefined8 *)piVar44 >> 0x20) + iVar65;
              iVar66 = (int)*(undefined8 *)(piVar44 + 2) + iVar66;
              iVar67 = (int)((ulong)*(undefined8 *)(piVar44 + 2) >> 0x20) + iVar67;
              lVar41 = lVar41 + 8;
              piVar44 = piVar44 + 8;
            } while (lVar41 < (long)uVar28);
          }
          iVar63 = CONCAT13(uVar50,CONCAT12(uVar49,CONCAT11(uVar48,uVar47))) + iVar63;
          uVar47 = (undefined1)iVar63;
          uVar48 = (undefined1)((uint)iVar63 >> 8);
          uVar49 = (undefined1)((uint)iVar63 >> 0x10);
          uVar50 = (undefined1)((uint)iVar63 >> 0x18);
          iVar65 = CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) + iVar65;
          uVar51 = (undefined1)iVar65;
          uVar52 = (undefined1)((uint)iVar65 >> 8);
          uVar53 = (undefined1)((uint)iVar65 >> 0x10);
          uVar54 = (undefined1)((uint)iVar65 >> 0x18);
          iVar66 = CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) + iVar66;
          uVar55 = (undefined1)iVar66;
          uVar56 = (undefined1)((uint)iVar66 >> 8);
          uVar57 = (undefined1)((uint)iVar66 >> 0x10);
          uVar58 = (undefined1)((uint)iVar66 >> 0x18);
          iVar67 = CONCAT13(uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59))) + iVar67;
          uVar59 = (undefined1)iVar67;
          uVar60 = (undefined1)((uint)iVar67 >> 8);
          uVar61 = (undefined1)((uint)iVar67 >> 0x10);
          uVar62 = (undefined1)((uint)iVar67 >> 0x18);
          if ((long)uVar28 < (long)(uVar21 & 0xfffffffffffffffc)) {
            piVar44 = piVar15 + uVar28;
            iVar63 = *piVar44 + iVar63;
            uVar47 = (undefined1)iVar63;
            uVar48 = (undefined1)((uint)iVar63 >> 8);
            uVar49 = (undefined1)((uint)iVar63 >> 0x10);
            uVar50 = (undefined1)((uint)iVar63 >> 0x18);
            iVar65 = piVar44[1] + iVar65;
            uVar51 = (undefined1)iVar65;
            uVar52 = (undefined1)((uint)iVar65 >> 8);
            uVar53 = (undefined1)((uint)iVar65 >> 0x10);
            uVar54 = (undefined1)((uint)iVar65 >> 0x18);
            iVar66 = piVar44[2] + iVar66;
            uVar55 = (undefined1)iVar66;
            uVar56 = (undefined1)((uint)iVar66 >> 8);
            uVar57 = (undefined1)((uint)iVar66 >> 0x10);
            uVar58 = (undefined1)((uint)iVar66 >> 0x18);
            iVar67 = piVar44[3] + iVar67;
            uVar59 = (undefined1)iVar67;
            uVar60 = (undefined1)((uint)iVar67 >> 8);
            uVar61 = (undefined1)((uint)iVar67 >> 0x10);
            uVar62 = (undefined1)((uint)iVar67 >> 0x18);
          }
        }
        auVar64[1] = uVar48;
        auVar64[0] = uVar47;
        auVar64[2] = uVar49;
        auVar64[3] = uVar50;
        auVar64[4] = uVar51;
        auVar64[5] = uVar52;
        auVar64[6] = uVar53;
        auVar64[7] = uVar54;
        auVar64[8] = uVar55;
        auVar64[9] = uVar56;
        auVar64[10] = uVar57;
        auVar64[0xb] = uVar58;
        auVar64[0xc] = uVar59;
        auVar64[0xd] = uVar60;
        auVar64[0xe] = uVar61;
        auVar64[0xf] = uVar62;
        auVar8[1] = uVar48;
        auVar8[0] = uVar47;
        auVar8[2] = uVar49;
        auVar8[3] = uVar50;
        auVar8[4] = uVar51;
        auVar8[5] = uVar52;
        auVar8[6] = uVar53;
        auVar8[7] = uVar54;
        auVar8[8] = uVar55;
        auVar8[9] = uVar56;
        auVar8[10] = uVar57;
        auVar8[0xb] = uVar58;
        auVar8[0xc] = uVar59;
        auVar8[0xd] = uVar60;
        auVar8[0xe] = uVar61;
        auVar8[0xf] = uVar62;
        auVar64 = NEON_ext(auVar64,auVar8,8,1);
        iVar63 = CONCAT13(uVar50,CONCAT12(uVar49,CONCAT11(uVar48,uVar47))) + auVar64._0_4_ +
                 CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) + auVar64._4_4_;
        lVar41 = (long)uVar42 % 4;
        if (lVar41 != 0 && lVar41 < 0 == SBORROW8(uVar42,uVar21 & 0xfffffffffffffffc)) {
          piVar44 = piVar15 + ((long)uVar21 >> 2) * 4;
          do {
            iVar63 = *piVar44 + iVar63;
            lVar41 = lVar41 + -1;
            piVar44 = piVar44 + 1;
          } while (lVar41 != 0);
        }
      }
      lVar41 = (long)iVar63;
    }
    FUN_10a9106b4(&lStack_e0,lVar41);
    *puStack_f0 = 0;
    if (0 < (long)uVar42) {
      iVar63 = 0;
      uVar21 = 0;
      do {
        iVar63 = piVar15[uVar21] + iVar63;
        uVar28 = uVar21 + 1;
        puStack_f0[uVar21 + 1] = iVar63;
        uVar21 = uVar28;
      } while (uVar42 != uVar28);
      _memcpy(piVar15,puStack_f0,uVar42 << 2);
      uVar21 = 0;
      lVar41 = *(long *)(param_1 + 0xe8);
      lVar37 = *(long *)(param_1 + 0xf0);
      lVar32 = *(long *)(param_1 + 0xd8);
      lVar31 = *(long *)(param_1 + 0xe0);
      do {
        piVar44 = (int *)(lVar32 + uVar21 * 4);
        lVar40 = (long)*piVar44;
        if (lVar31 == 0) {
          lVar24 = (long)piVar44[1];
        }
        else {
          lVar24 = *(int *)(lVar31 + uVar21 * 4) + lVar40;
        }
        lVar26 = lVar24 - lVar40;
        if (lVar26 != 0 && lVar40 <= lVar24) {
          uVar28 = -(uVar21 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar21 & 0xffffffff) << 2;
          puVar16 = (undefined4 *)(lVar41 + lVar40 * 4);
          puVar17 = (uint *)(lVar37 + lVar40 * 4);
          do {
            uVar25 = *puVar17;
            lVar40 = (long)(int)uVar25;
            if (uVar21 == uVar25) {
              lVar24 = (long)piVar15[lVar40];
              piVar15[lVar40] = piVar15[lVar40] + 1;
              *(uint *)(lStack_d8 + lVar24 * 4) = uVar25;
              uVar10 = *puVar16;
              uVar47 = (undefined1)uVar10;
              uVar48 = (undefined1)((uint)uVar10 >> 8);
              uVar49 = (undefined1)((uint)uVar10 >> 0x10);
              uVar50 = (undefined1)((uint)uVar10 >> 0x18);
LAB_10a8f3a6c:
              *(uint *)(lStack_e0 + lVar24 * 4) =
                   CONCAT13(uVar50,CONCAT12(uVar49,CONCAT11(uVar48,uVar47)));
            }
            else if ((long)uVar21 < lVar40) {
              iVar63 = *(int *)((long)piVar15 + uVar28);
              *(int *)((long)piVar15 + uVar28) = iVar63 + 1;
              *(uint *)(lStack_d8 + (long)iVar63 * 4) = uVar25;
              uVar10 = *puVar16;
              uVar47 = (undefined1)uVar10;
              uVar48 = (undefined1)((uint)uVar10 >> 8);
              uVar49 = (undefined1)((uint)uVar10 >> 0x10);
              uVar50 = (undefined1)((uint)uVar10 >> 0x18);
              *(undefined4 *)(lStack_e0 + (long)iVar63 * 4) = uVar10;
              lVar24 = (long)piVar15[lVar40];
              piVar15[lVar40] = piVar15[lVar40] + 1;
              *(int *)(lStack_d8 + lVar24 * 4) = (int)uVar21;
              goto LAB_10a8f3a6c;
            }
            puVar16 = puVar16 + 1;
            lVar26 = lVar26 + -1;
            puVar17 = puVar17 + 1;
          } while (lVar26 != 0);
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar42);
    }
    _free(piVar15);
    uStack_c0 = 0;
    uStack_b8 = 0xffffffffffffffff;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 0;
    FUN_10a8f4b10(&uStack_c0,0,0);
    func_0x000109947024(auStack_108,&uStack_c0);
    func_0x0001099471bc(&uStack_c0,param_1 + 0x1a0);
    _free(uStack_a8);
    _free(uStack_a0);
    func_0x00010a910584(&uStack_98);
    _free(puStack_f0);
    _free(uStack_e8);
    func_0x00010a910584(&lStack_e0);
    uVar42 = *(ulong *)(param_1 + 0x1a8);
    if ((long)uVar42 < 1) {
      if (*(long *)(param_1 + 0x198) != 0) {
        _free(*(undefined8 *)(param_1 + 400));
        *(undefined8 *)(param_1 + 400) = 0;
      }
      *(undefined8 *)(param_1 + 0x198) = 0;
LAB_10a8f3b7c:
      FUN_10a8f4b10(auStack_150,uVar43,uVar43);
      FUN_10a910d40(param_1 + 0xc0,auStack_150,*(undefined8 *)(param_1 + 400));
      FUN_10a910b04(param_1 + 0x108,auStack_150);
      _free(uStack_138);
      _free(uStack_130);
      func_0x00010a910584(&uStack_128);
      iVar63 = *(int *)(param_1 + 8);
      if (0 < iVar63) {
        iVar65 = 0;
        do {
          if (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x18)) goto LAB_10a8f4508;
          if (1 < *(int *)(param_1 + 0xc)) {
            uVar25 = 0;
            lVar41 = 1;
            pfVar34 = (float *)(*(long *)(param_1 + 0x18) +
                                (long)(*(int *)(param_1 + 0xc) * iVar65) * 0xc + 0x14);
            do {
              fVar77 = pfVar34[3] - pfVar34[-3];
              fVar71 = (float)*(undefined8 *)(pfVar34 + 1);
              fVar79 = (float)*(undefined8 *)(pfVar34 + -5);
              fVar81 = fVar71 - fVar79;
              fVar76 = (float)((ulong)*(undefined8 *)(pfVar34 + 1) >> 0x20);
              fVar80 = (float)((ulong)*(undefined8 *)(pfVar34 + -5) >> 0x20);
              fVar83 = fVar76 - fVar80;
              fVar78 = SQRT(fVar81 * fVar81 + fVar83 * fVar83 + fVar77 * fVar77);
              fVar68 = 1e-06;
              if (1e-06 <= fVar78) {
                fVar68 = fVar78;
              }
              fVar84 = (fVar81 / fVar68) * *(float *)(&UNK_10e4db3e0 + (ulong)(uVar25 & 3) * 4) +
                       (fVar83 / fVar68) * 0.0 +
                       (fVar77 / fVar68) * *(float *)(&UNK_10e4e3430 + (ulong)(uVar25 & 3) * 4);
              fVar82 = *(float *)(&UNK_10e4db3e0 + (ulong)(uVar25 & 3) * 4) -
                       (fVar81 / fVar68) * fVar84;
              fVar83 = 0.0 - (fVar83 / fVar68) * fVar84;
              fVar77 = *(float *)(&UNK_10e4e3430 + (ulong)(uVar25 & 3) * 4) -
                       (fVar77 / fVar68) * fVar84;
              fVar81 = SQRT(fVar77 * fVar77 + fVar82 * fVar82 + fVar83 * fVar83);
              fVar68 = 1e-06;
              if (1e-06 <= fVar81) {
                fVar68 = fVar81;
              }
              *(ulong *)(pfVar34 + -2) =
                   CONCAT44((fVar76 + fVar80) * 0.5 + (fVar83 / fVar68) * fVar78 * 1.7320508 * 0.5,
                            (fVar71 + fVar79) * 0.5 + (fVar82 / fVar68) * fVar78 * 1.7320508 * 0.5);
              *pfVar34 = (pfVar34[3] + pfVar34[-3]) * 0.5 +
                         fVar78 * (fVar77 / fVar68) * 1.7320508 * 0.5;
              lVar41 = lVar41 + 2;
              uVar25 = uVar25 + 1;
              pfVar34 = pfVar34 + 6;
            } while (lVar41 < *(int *)(param_1 + 0xc));
            iVar63 = *(int *)(param_1 + 8);
          }
          iVar65 = iVar65 + 1;
        } while (iVar65 < iVar63);
      }
      func_0x00010742a308(param_1 + 0x1b8,(long)(iVar7 * iVar5));
      iVar7 = (iVar6 - 3U) * 4;
      func_0x00010742a308(param_1 + 0x1d0,(long)(iVar7 * iVar5));
      auStack_150[0] = 0x3f800000;
      auStack_150[3] = 0;
      auStack_150[4] = 0;
      auStack_150[1] = 0;
      auStack_150[2] = 0;
      auStack_150[5] = 0x3f800000;
      uStack_138 = 0;
      uStack_130 = 0;
      fVar68 = *(float *)(param_1 + 0x250) * 0.0;
      fVar71 = (float)*(undefined8 *)(param_1 + 0x248);
      fVar77 = fVar71 * 0.0;
      fVar76 = (float)((ulong)*(undefined8 *)(param_1 + 0x248) >> 0x20);
      fVar78 = fVar76 * 0.0;
      uVar43 = NEON_rev64(CONCAT44(fVar78,fVar77),4);
      fVar77 = fVar77 + fVar78;
      uStack_120 = CONCAT44(fVar76 + (float)((ulong)uVar43 >> 0x20) + fVar68 + 0.0,
                            fVar71 + (float)uVar43 + fVar68 + 0.0);
      uStack_128 = 0x3f800000;
      uStack_118 = CONCAT44(fVar77 + fVar68 + 1.0,*(float *)(param_1 + 0x250) + fVar77 + 0.0);
      fVar68 = *(float *)(param_1 + 0x254);
      fVar71 = *(float *)(param_1 + 600);
      fVar76 = *(float *)(param_1 + 0x25c);
      fVar77 = *(float *)(param_1 + 0x260);
      fStack_190 = (fVar71 * fVar71 + fVar76 * fVar76) * -2.0 + 1.0;
      fStack_18c = fVar68 * fVar71 + fVar76 * fVar77;
      fStack_18c = fStack_18c + fStack_18c;
      fStack_188 = fVar68 * fVar76 - fVar71 * fVar77;
      fStack_188 = fStack_188 + fStack_188;
      fStack_180 = fVar68 * fVar71 - fVar76 * fVar77;
      fStack_180 = fStack_180 + fStack_180;
      fStack_17c = (fVar68 * fVar68 + fVar76 * fVar76) * -2.0 + 1.0;
      fStack_178 = fVar71 * fVar76 + fVar68 * fVar77;
      fStack_178 = fStack_178 + fStack_178;
      fStack_170 = fVar68 * fVar76 + fVar71 * fVar77;
      fStack_170 = fStack_170 + fStack_170;
      fStack_16c = fVar71 * fVar76 - fVar68 * fVar77;
      fStack_16c = fStack_16c + fStack_16c;
      uStack_184 = 0;
      uStack_174 = 0;
      fStack_168 = (fVar68 * fVar68 + fVar71 * fVar71) * -2.0 + 1.0;
      uStack_15c = 0;
      uStack_164 = 0;
      uStack_154 = 0x3f800000;
      func_0x000109519fd0(auStack_108,auStack_150,&fStack_190);
      func_0x000109519fd0(&uStack_c0,auStack_108,(undefined8 *)(param_1 + 0x208));
      uVar25 = *(uint *)(param_1 + 8);
      if (0 < (int)uVar25) {
        lVar41 = *(long *)(param_1 + 0x18);
        if (((*(long *)(param_1 + 0x20) == lVar41) ||
            (lVar32 = *(long *)(param_1 + 0x1b8), *(long *)(param_1 + 0x1c0) == lVar32)) ||
           (lVar37 = *(long *)(param_1 + 0x1d0), *(long *)(param_1 + 0x1d8) == lVar37))
        goto LAB_10a8f4508;
        uVar21 = 0;
        uVar42 = 0;
        iVar5 = *(int *)(param_1 + 0xc);
        lVar31 = (long)iVar5;
        uVar35 = iVar5 - 1;
        fVar77 = (float)((ulong)uStack_90 >> 0x20);
        fVar76 = (float)((ulong)uStack_a0 >> 0x20);
        fVar68 = (float)((uint7)uStack_bf >> 0x18);
        fVar71 = (float)((ulong)uStack_b0 >> 0x20);
        pfVar34 = (float *)(lVar41 + 0x14);
        pfVar18 = (float *)(lVar41 + 4);
        do {
          lVar40 = lVar41 + uVar42 * lVar31 * 0xc;
          fVar79 = (float)uStack_b0;
          fVar78 = (float)CONCAT71(uStack_bf,uStack_c0);
          fVar80 = (float)uStack_a0;
          fVar81 = (float)uStack_90;
          if (1 < iVar5) {
            lVar24 = 0;
            uVar28 = 0;
            pfVar19 = pfVar34;
            do {
              uVar1 = (int)uVar28 + 3;
              uVar4 = uVar35;
              if ((int)uVar1 <= (int)uVar35) {
                uVar4 = uVar1;
              }
              pfVar45 = (float *)(lVar40 + uVar28 * 0xc);
              pfVar46 = pfVar19;
              lVar26 = lVar24;
              uVar36 = uVar28;
              do {
                fVar83 = pfVar46[-2];
                fVar85 = pfVar46[-1];
                fVar86 = *pfVar46;
                fVar87 = *pfVar45;
                fVar88 = pfVar45[1];
                fVar89 = pfVar45[2];
                fVar82 = (fVar81 + fVar79 * fVar85 + fVar78 * fVar83 + fVar80 * fVar86) -
                         (fVar81 + fVar79 * fVar88 + fVar78 * fVar87 + fVar80 * fVar89);
                fVar84 = (fVar77 + fVar71 * fVar85 + fVar68 * fVar83 + fVar76 * fVar86) -
                         (fVar77 + fVar71 * fVar88 + fVar68 * fVar87 + fVar76 * fVar89);
                fVar83 = ((float)uStack_88 +
                         (float)uStack_a8 * fVar85 + fVar83 * (float)uStack_b8 +
                         fVar86 * (float)uStack_98) -
                         ((float)uStack_88 +
                         (float)uStack_a8 * fVar88 + fVar87 * (float)uStack_b8 +
                         fVar89 * (float)uStack_98);
                *(float *)(lVar32 + lVar31 * 0xc * uVar42 + (lVar26 >> 0x1e)) =
                     SQRT(fVar83 * fVar83 + fVar82 * fVar82 + fVar84 * fVar84);
                uVar36 = uVar36 + 1;
                lVar26 = lVar26 + 0x100000000;
                pfVar46 = pfVar46 + 3;
              } while ((long)uVar36 < (long)(int)uVar4);
              uVar28 = uVar28 + 1;
              lVar24 = lVar24 + 0x300000000;
              pfVar19 = pfVar19 + 3;
            } while (uVar28 != uVar35);
          }
          if (3 < iVar6) {
            uVar28 = 0;
            pfVar19 = pfVar18;
            do {
              lVar24 = lVar40 + uVar28 * 0xc;
              uVar36 = 0;
              pfVar46 = pfVar19;
              do {
                uVar30 = uVar36 + 1;
                pfVar45 = (float *)(lVar24 + (uVar30 & 3) * 0xc);
                fVar83 = *pfVar45;
                fVar84 = pfVar45[1];
                fVar86 = pfVar45[2];
                pfVar45 = (float *)(lVar24 + (uVar36 ^ 2) * 0xc);
                fVar87 = *pfVar45;
                fVar88 = pfVar45[1];
                fVar89 = pfVar45[2];
                fVar82 = fVar81 + fVar79 * fVar88 + fVar87 * fVar78 + fVar89 * fVar80;
                fVar85 = fVar77 + fVar71 * fVar88 + fVar87 * fVar68 + fVar89 * fVar76;
                fVar89 = (float)uStack_88 +
                         (float)uStack_a8 * fVar88 + fVar87 * (float)uStack_b8 +
                         fVar89 * (float)uStack_98;
                fVar87 = (fVar81 + fVar79 * fVar84 + fVar83 * fVar78 + fVar86 * fVar80) - fVar82;
                fVar88 = (fVar77 + fVar71 * fVar84 + fVar83 * fVar68 + fVar86 * fVar76) - fVar85;
                fVar83 = ((float)uStack_88 +
                         (float)uStack_a8 * fVar84 + fVar83 * (float)uStack_b8 +
                         fVar86 * (float)uStack_98) - fVar89;
                pfVar45 = (float *)(lVar24 + (ulong)((int)uVar36 - 1U & 3) * 0xc);
                fVar84 = *pfVar45;
                fVar86 = pfVar45[1];
                fVar91 = pfVar45[2];
                fVar90 = (fVar81 + fVar79 * fVar86 + fVar84 * fVar78 + fVar91 * fVar80) - fVar82;
                fVar92 = (fVar77 + fVar71 * fVar86 + fVar84 * fVar68 + fVar91 * fVar76) - fVar85;
                fVar84 = ((float)uStack_88 +
                         (float)uStack_a8 * fVar86 + fVar84 * (float)uStack_b8 +
                         fVar91 * (float)uStack_98) - fVar89;
                fVar91 = -(fVar92 * fVar83) + fVar84 * fVar88;
                fVar84 = -(fVar84 * fVar87) + fVar90 * fVar83;
                fVar86 = -(fVar90 * fVar88) + fVar92 * fVar87;
                fVar87 = SQRT(fVar86 * fVar86 + fVar91 * fVar91 + fVar84 * fVar84);
                fVar83 = 1e-06;
                if (1e-06 <= fVar87) {
                  fVar83 = fVar87;
                }
                fVar87 = pfVar46[-1];
                fVar88 = *pfVar46;
                fVar90 = pfVar46[1];
                *(float *)(lVar37 + (-(uVar21 >> 0x1f) & 0xfffffffc00000000 | uVar21 << 2) +
                           (uVar28 & 0x3fffffff) * 0x10 + uVar36 * 4) =
                     (fVar89 - ((float)uStack_88 +
                               (float)uStack_a8 * fVar88 + fVar87 * (float)uStack_b8 +
                               fVar90 * (float)uStack_98)) * (fVar86 / fVar83) +
                     (fVar82 - (fVar81 + fVar79 * fVar88 + fVar87 * fVar78 + fVar90 * fVar80)) *
                     (fVar91 / fVar83) +
                     (fVar85 - (fVar77 + fVar71 * fVar88 + fVar87 * fVar68 + fVar90 * fVar76)) *
                     (fVar84 / fVar83);
                pfVar46 = pfVar46 + 3;
                uVar36 = uVar30;
              } while (uVar30 != 4);
              uVar28 = uVar28 + 1;
              pfVar19 = pfVar19 + 3;
            } while (uVar28 != iVar6 - 3U);
          }
          uVar42 = uVar42 + 1;
          pfVar34 = pfVar34 + lVar31 * 3;
          uVar21 = (ulong)(uint)((int)uVar21 + iVar7);
          pfVar18 = pfVar18 + lVar31 * 3;
        } while (uVar42 != uVar25);
      }
      iVar5 = (*(int *)(param_1 + 0xc) + -3) * uVar25;
      func_0x000109634dec(param_1 + 0x2728,0x1e848);
      func_0x000109634dec(param_1 + 0x2740,
                          (long)((ulong)(uint)(iVar5 - (iVar5 >> 0x1f)) << 0x20) >> 0x21);
      iVar5 = (*(int *)(param_1 + 0xc) + -3) * *(int *)(param_1 + 8);
      func_0x0001096b5198(param_1 + 0x2708,
                          (long)((ulong)(uint)(iVar5 - (iVar5 >> 0x1f)) << 0x20) >> 0x21);
      if (*(long *)(param_1 + 0x80) != *(long *)(param_1 + 0x78)) {
        _bzero(*(long *)(param_1 + 0x78),
               (long)*(int *)(param_1 + 8) * (long)*(int *)(param_1 + 0xc) * 0xc);
        if (*(long *)(param_1 + 0x68) != *(long *)(param_1 + 0x60)) {
          _bzero(*(long *)(param_1 + 0x60),
                 (long)*(int *)(param_1 + 8) * (long)*(int *)(param_1 + 0xc) * 0xc);
          auStack_150[0] = 0x3f800000;
          auStack_150[3] = 0;
          auStack_150[4] = 0;
          auStack_150[1] = 0;
          auStack_150[2] = 0;
          auStack_150[5] = 0x3f800000;
          uStack_138 = 0;
          uStack_130 = 0;
          fVar68 = *(float *)(param_1 + 0x2b8) * 0.0;
          fVar71 = (float)*(undefined8 *)(param_1 + 0x2b0);
          fVar77 = fVar71 * 0.0;
          fVar76 = (float)((ulong)*(undefined8 *)(param_1 + 0x2b0) >> 0x20);
          fVar78 = fVar76 * 0.0;
          uVar43 = NEON_rev64(CONCAT44(fVar78,fVar77),4);
          fVar77 = fVar77 + fVar78;
          uStack_120 = CONCAT44(fVar76 + (float)((ulong)uVar43 >> 0x20) + fVar68 + 0.0,
                                fVar71 + (float)uVar43 + fVar68 + 0.0);
          uStack_128 = 0x3f800000;
          uStack_118 = CONCAT44(fVar77 + fVar68 + 1.0,*(float *)(param_1 + 0x2b8) + fVar77 + 0.0);
          fVar68 = *(float *)(param_1 + 700);
          fVar71 = *(float *)(param_1 + 0x2c0);
          fVar76 = *(float *)(param_1 + 0x2c4);
          fVar77 = *(float *)(param_1 + 0x2c8);
          fStack_190 = (fVar71 * fVar71 + fVar76 * fVar76) * -2.0 + 1.0;
          fStack_18c = fVar68 * fVar71 + fVar76 * fVar77;
          fStack_18c = fStack_18c + fStack_18c;
          fStack_188 = fVar68 * fVar76 - fVar71 * fVar77;
          fStack_188 = fStack_188 + fStack_188;
          fStack_180 = fVar68 * fVar71 - fVar76 * fVar77;
          fStack_180 = fStack_180 + fStack_180;
          fStack_17c = (fVar68 * fVar68 + fVar76 * fVar76) * -2.0 + 1.0;
          fStack_178 = fVar71 * fVar76 + fVar68 * fVar77;
          fStack_178 = fStack_178 + fStack_178;
          fStack_170 = fVar68 * fVar76 + fVar71 * fVar77;
          fStack_170 = fStack_170 + fStack_170;
          fStack_16c = fVar71 * fVar76 - fVar68 * fVar77;
          fStack_16c = fStack_16c + fStack_16c;
          uStack_184 = 0;
          uStack_174 = 0;
          fStack_168 = (fVar68 * fVar68 + fVar71 * fVar71) * -2.0 + 1.0;
          uStack_15c = 0;
          uStack_164 = 0;
          uStack_154 = 0x3f800000;
          func_0x000109519fd0(auStack_108,auStack_150,&fStack_190);
          func_0x000109519fd0(&uStack_c0,auStack_108,param_1 + 0x270);
          if (0 < *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8)) {
            lVar41 = 0;
            uVar42 = 0;
            do {
              uVar21 = (*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18) >> 2) *
                       -0x5555555555555555;
              if ((uVar21 < uVar42 || uVar21 - uVar42 == 0) ||
                 (uVar21 = (*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2) *
                           -0x5555555555555555, uVar21 < uVar42 || uVar21 - uVar42 == 0))
              goto LAB_10a8f4508;
              pfVar34 = (float *)(*(long *)(param_1 + 0x18) + lVar41);
              fVar76 = pfVar34[1];
              fVar68 = pfVar34[2];
              fVar71 = *pfVar34;
              puVar2 = (undefined8 *)(*(long *)(param_1 + 0x48) + lVar41);
              *puVar2 = CONCAT44((float)((ulong)uStack_90 >> 0x20) +
                                 (float)((ulong)uStack_b0 >> 0x20) * fVar76 +
                                 (float)((uint7)uStack_bf >> 0x18) * fVar71 +
                                 (float)((ulong)uStack_a0 >> 0x20) * fVar68,
                                 (float)uStack_90 +
                                 (float)uStack_b0 * fVar76 +
                                 (float)CONCAT71(uStack_bf,uStack_c0) * fVar71 +
                                 (float)uStack_a0 * fVar68);
              *(float *)(puVar2 + 1) =
                   (float)uStack_88 +
                   (float)uStack_a8 * fVar76 + fVar71 * (float)uStack_b8 + fVar68 * (float)uStack_98
              ;
              uVar21 = (*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30) >> 2) *
                       -0x5555555555555555;
              if (uVar21 < uVar42 || uVar21 - uVar42 == 0) goto LAB_10a8f4508;
              puVar3 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar41);
              uVar43 = *puVar2;
              *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar2 + 1);
              *puVar3 = uVar43;
              uVar42 = uVar42 + 1;
              lVar41 = lVar41 + 0xc;
            } while ((long)uVar42 < (long)*(int *)(param_1 + 0xc) * (long)*(int *)(param_1 + 8));
          }
          FUN_10a8f458c(param_1 + 0x2e8);
          return;
        }
      }
      goto LAB_10a8f4508;
    }
    if (uVar42 >> 0x3e == 0) {
      lVar41 = uVar42 << 2;
      _malloc();
      if (lVar41 != 0) {
        if (0 < (int)uVar42) {
          uVar21 = 0;
          lVar32 = *(long *)(param_1 + 0x1a0);
          do {
            *(int *)(lVar41 + (long)*(int *)(lVar32 + uVar21 * 4) * 4) = (int)uVar21;
            uVar21 = uVar21 + 1;
          } while ((uVar42 & 0x7fffffff) != uVar21);
        }
        uVar22 = *(undefined8 *)(param_1 + 400);
        *(long *)(param_1 + 400) = lVar41;
        *(ulong *)(param_1 + 0x198) = uVar42;
        _free(uVar22);
        goto LAB_10a8f3b7c;
      }
    }
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10a8f4508:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10a8f450c);
  (*pcVar13)();
}



/* Entry: 10a8f458c; end: 10a8f47d7;  */

void FUN_10a8f458c(undefined4 *param_1)

{
  undefined8 *puVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  lVar3 = 0;
  *param_1 = 0;
  pfVar2 = (float *)(param_1 + 0x187);
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar3 + 0xa1c);
    uVar8 = puVar1[1];
    uVar5 = *puVar1;
    fVar10 = 0.0;
    fVar4 = (float)uVar5 * 0.0;
    fVar6 = (float)((ulong)uVar5 >> 0x20) * 0.0;
    fVar7 = (float)uVar8 * 0.0;
    fVar9 = (float)((ulong)uVar8 >> 0x20) * 0.0;
    ___sincosf_stret();
    fVar11 = fVar10;
    ___sincosf_stret();
    fVar12 = fVar11;
    ___sincosf_stret();
    fVar13 = fVar12;
    ___sincosf_stret();
    pfVar2[-0x100] = fVar4 * pfVar2[1] + *pfVar2 * fVar11;
    pfVar2[-0xff] = *pfVar2 * -fVar4 + pfVar2[1] * fVar11;
    pfVar2[-0xfe] = fVar6 * pfVar2[3] + pfVar2[2] * fVar10;
    pfVar2[-0xfd] = pfVar2[2] * -fVar6 + pfVar2[3] * fVar10;
    pfVar2[-0xfc] = fVar7 * pfVar2[5] + pfVar2[4] * fVar12;
    pfVar2[-0xfb] = pfVar2[4] * -fVar7 + pfVar2[5] * fVar12;
    pfVar2[-0xfa] = fVar9 * pfVar2[7] + pfVar2[6] * fVar13;
    pfVar2[-0xf9] = pfVar2[6] * -fVar9 + pfVar2[7] * fVar13;
    lVar3 = lVar3 + 0x10;
    pfVar2 = pfVar2 + 8;
  } while (lVar3 != 0x200);
  lVar3 = 0;
  pfVar2 = (float *)(param_1 + 0x387);
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar3 + 0x161c);
    uVar8 = puVar1[1];
    uVar5 = *puVar1;
    fVar10 = 0.0;
    fVar4 = (float)uVar5 * 0.0;
    fVar6 = (float)((ulong)uVar5 >> 0x20) * 0.0;
    fVar7 = (float)uVar8 * 0.0;
    fVar9 = (float)((ulong)uVar8 >> 0x20) * 0.0;
    ___sincosf_stret();
    fVar11 = fVar10;
    ___sincosf_stret();
    fVar12 = fVar11;
    ___sincosf_stret();
    fVar13 = fVar12;
    ___sincosf_stret();
    *pfVar2 = fVar4 * pfVar2[0x101] + pfVar2[0x100] * fVar11;
    pfVar2[1] = pfVar2[0x100] * -fVar4 + pfVar2[0x101] * fVar11;
    pfVar2[2] = fVar6 * pfVar2[0x103] + pfVar2[0x102] * fVar10;
    pfVar2[3] = pfVar2[0x102] * -fVar6 + pfVar2[0x103] * fVar10;
    pfVar2[4] = fVar7 * pfVar2[0x105] + pfVar2[0x104] * fVar12;
    pfVar2[5] = pfVar2[0x104] * -fVar7 + pfVar2[0x105] * fVar12;
    pfVar2[6] = fVar9 * pfVar2[0x107] + pfVar2[0x106] * fVar13;
    pfVar2[7] = pfVar2[0x106] * -fVar9 + pfVar2[0x107] * fVar13;
    pfVar2 = pfVar2 + 8;
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x200);
  lVar3 = 0;
  pfVar2 = (float *)(param_1 + 0x687);
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar3 + 0x221c);
    uVar8 = puVar1[1];
    uVar5 = *puVar1;
    fVar10 = 0.0;
    fVar4 = (float)uVar5 * 0.0;
    fVar6 = (float)((ulong)uVar5 >> 0x20) * 0.0;
    fVar7 = (float)uVar8 * 0.0;
    fVar9 = (float)((ulong)uVar8 >> 0x20) * 0.0;
    ___sincosf_stret();
    fVar11 = fVar10;
    ___sincosf_stret();
    fVar12 = fVar11;
    ___sincosf_stret();
    fVar13 = fVar12;
    ___sincosf_stret();
    *pfVar2 = fVar4 * pfVar2[0x101] + pfVar2[0x100] * fVar11;
    pfVar2[1] = pfVar2[0x100] * -fVar4 + pfVar2[0x101] * fVar11;
    pfVar2[2] = fVar6 * pfVar2[0x103] + pfVar2[0x102] * fVar10;
    pfVar2[3] = pfVar2[0x102] * -fVar6 + pfVar2[0x103] * fVar10;
    pfVar2[4] = fVar7 * pfVar2[0x105] + pfVar2[0x104] * fVar12;
    pfVar2[5] = pfVar2[0x104] * -fVar7 + pfVar2[0x105] * fVar12;
    pfVar2[6] = fVar9 * pfVar2[0x107] + pfVar2[0x106] * fVar13;
    pfVar2[7] = pfVar2[0x106] * -fVar9 + pfVar2[0x107] * fVar13;
    pfVar2 = pfVar2 + 8;
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x200);
  return;
}



/* Entry: 10a8f47d8; end: 10a8f490f;  */

void FUN_10a8f47d8(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  
  param_1 = param_1 + *(float *)(param_2 + 0x1e8);
  *(float *)(param_2 + 0x1e8) = param_1;
  fVar3 = (float)*(int *)(*(long *)(param_2 + 0x1f8) + 0x28);
  fVar4 = 1.0 / fVar3;
  uVar2 = (uint)(param_1 * fVar3);
  if ((int)uVar2 < 5) {
    *(float *)(param_2 + 0x1ec) = fVar4 / 0.033333335;
    if ((int)uVar2 < 1) {
      return;
    }
    param_1 = (float)uVar2 / fVar3;
  }
  else {
    *(float *)(param_2 + 0x1ec) = fVar4 / 0.033333335;
    uVar2 = 4;
  }
  uVar1 = 0;
  do {
    *(float *)(param_2 + 0x1f0) = (fVar4 * (float)(uVar1 + 1)) / *(float *)(param_2 + 0x1e8);
    *(float *)(param_2 + 500) = (fVar4 * (float)uVar1) / *(float *)(param_2 + 0x1e8);
    FUN_10a8f4910(param_2);
    if (uVar2 == 1) {
      FUN_10a8f494c(auStack_b8,*(undefined4 *)(param_2 + 0x1f0),param_2 + 0x200,param_2 + 0x268);
      *(undefined8 *)(param_2 + 0x230) = uStack_88;
      *(undefined8 *)(param_2 + 0x228) = uStack_90;
      *(undefined8 *)(param_2 + 0x240) = uStack_78;
      *(undefined8 *)(param_2 + 0x238) = uStack_80;
      *(ulong *)(param_2 + 0x250) = CONCAT44(uStack_64,uStack_68);
      *(undefined8 *)(param_2 + 0x248) = uStack_70;
      *(undefined8 *)(param_2 + 0x25c) = uStack_5c;
      *(ulong *)(param_2 + 0x254) = CONCAT44(uStack_60,uStack_64);
      *(undefined8 *)(param_2 + 0x210) = uStack_a8;
      *(undefined8 *)(param_2 + 0x208) = uStack_b0;
      *(undefined8 *)(param_2 + 0x220) = uStack_98;
      *(undefined8 *)(param_2 + 0x218) = uStack_a0;
      *(float *)(param_2 + 0x1e8) = *(float *)(param_2 + 0x1e8) - param_1;
    }
    uVar2 = uVar2 - 1;
    uVar1 = uVar1 + 1;
  } while (uVar2 != 0);
  return;
}



/* Entry: 10a8f4910; end: 10a8f494b;  */

void FUN_10a8f4910(long param_1)

{
  code *pcVar1;
  
  FUN_10a8f4ba8();
  FUN_10a8f5264(param_1);
  FUN_10a8f7810(param_1);
  func_0x00010a8f78d0(param_1);
  if ((*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) &&
     (*(long *)(param_1 + 0x38) != *(long *)(param_1 + 0x30))) {
    _memcpy(*(long *)(param_1 + 0x48),*(long *)(param_1 + 0x30),
            (long)*(int *)(param_1 + 8) * (long)*(int *)(param_1 + 0xc) * 0xc);
    if ((*(long *)(param_1 + 0x80) != *(long *)(param_1 + 0x78)) &&
       (*(long *)(param_1 + 0x68) != *(long *)(param_1 + 0x60))) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (*(long *)(param_1 + 0x78),*(long *)(param_1 + 0x60),
                 (long)*(int *)(param_1 + 8) * (long)*(int *)(param_1 + 0xc) * 0xc);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8f7b54);
  (*pcVar1)();
}



/* Entry: 10a8f494c; end: 10a8f4b0f;  */

void FUN_10a8f494c(undefined8 *param_1,float param_2,long param_3,long param_4)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  
  fVar36 = 1.0 - param_2;
  uVar38 = *(undefined8 *)(param_3 + 0x10);
  uVar37 = *(undefined8 *)(param_3 + 8);
  uVar40 = *(undefined8 *)(param_4 + 0x10);
  uVar39 = *(undefined8 *)(param_4 + 8);
  uVar33 = *(undefined8 *)(param_3 + 0x20);
  uVar32 = *(undefined8 *)(param_3 + 0x18);
  uVar35 = *(undefined8 *)(param_4 + 0x20);
  uVar34 = *(undefined8 *)(param_4 + 0x18);
  uVar25 = *(undefined8 *)(param_3 + 0x30);
  uVar24 = *(undefined8 *)(param_3 + 0x28);
  uVar31 = *(undefined8 *)(param_4 + 0x30);
  uVar30 = *(undefined8 *)(param_4 + 0x28);
  uVar21 = *(undefined8 *)(param_3 + 0x40);
  uVar20 = *(undefined8 *)(param_3 + 0x38);
  uVar23 = *(undefined8 *)(param_4 + 0x40);
  uVar22 = *(undefined8 *)(param_4 + 0x38);
  fVar26 = *(float *)(param_3 + 0x50);
  uVar29 = *(undefined8 *)(param_3 + 0x48);
  uVar28 = *(undefined8 *)(param_4 + 0x48);
  fVar27 = *(float *)(param_4 + 0x50);
  pauVar1 = (undefined1 (*) [12])(param_4 + 0x54);
  fVar7 = (float)*(undefined8 *)(param_4 + 0x5c);
  fVar5 = (float)((ulong)*(undefined8 *)(param_4 + 0x5c) >> 0x20);
  fVar8 = (float)*(undefined8 *)*pauVar1;
  fVar6 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  fVar16 = (float)*(undefined8 *)(param_3 + 0x54);
  fVar9 = fVar8 * fVar16;
  fVar17 = (float)((ulong)*(undefined8 *)(param_3 + 0x54) >> 0x20);
  fVar10 = fVar6 * fVar17;
  fVar18 = (float)*(undefined8 *)(param_3 + 0x5c);
  fVar11 = fVar7 * fVar18;
  fVar19 = (float)((ulong)*(undefined8 *)(param_3 + 0x5c) >> 0x20);
  auVar2._4_4_ = fVar10;
  auVar2._0_4_ = fVar9;
  auVar2._8_4_ = fVar11;
  auVar2._12_4_ = fVar5 * fVar19;
  auVar3._4_4_ = fVar10;
  auVar3._0_4_ = fVar9;
  auVar3._8_4_ = fVar11;
  auVar3._12_4_ = fVar5 * fVar19;
  auVar13 = NEON_ext(auVar2,auVar3,8,1);
  uVar12 = NEON_rev64(auVar13._0_8_,4);
  fVar9 = fVar9 + (float)uVar12 + fVar10 + (float)((ulong)uVar12 >> 0x20);
  auVar14._0_4_ = -(uint)(fVar9 < 0.0);
  auVar14._4_4_ = auVar14._0_4_;
  auVar14._8_4_ = auVar14._0_4_;
  auVar14._12_4_ = auVar14._0_4_;
  auVar13._12_4_ = fVar5;
  auVar13._0_12_ = *pauVar1;
  auVar4._4_4_ = -fVar6;
  auVar4._0_4_ = -fVar8;
  auVar4._8_4_ = -fVar7;
  auVar4._12_4_ = -fVar5;
  auVar15._12_4_ = fVar5;
  auVar15._0_12_ = *pauVar1;
  auVar15 = auVar15 ^ (auVar13 ^ auVar4) & auVar14;
  fVar8 = -fVar9;
  if (0.0 <= fVar9) {
    fVar8 = fVar9;
  }
  if (fVar8 <= 0.9999999) {
    _acosf();
    fVar6 = fVar36 * fVar8;
    _sinf();
    fVar7 = param_2 * fVar8;
    _sinf();
    _sinf();
    fVar5 = (fVar16 * fVar6 + auVar15._0_4_ * fVar7) / fVar8;
    fVar9 = (fVar17 * fVar6 + auVar15._4_4_ * fVar7) / fVar8;
    fVar10 = (fVar18 * fVar6 + auVar15._8_4_ * fVar7) / fVar8;
    fVar8 = (fVar19 * fVar6 + auVar15._12_4_ * fVar7) / fVar8;
  }
  else {
    fVar5 = auVar15._0_4_ * param_2 + fVar16 * fVar36;
    fVar9 = auVar15._4_4_ * param_2 + fVar17 * fVar36;
    fVar10 = auVar15._8_4_ * param_2 + fVar18 * fVar36;
    fVar8 = auVar15._12_4_ * param_2 + fVar19 * fVar36;
  }
  *param_1 = &PTR_DAT_110bd3ea8;
  param_1[2] = CONCAT44((float)((ulong)uVar38 >> 0x20) * fVar36 +
                        (float)((ulong)uVar40 >> 0x20) * param_2,
                        (float)uVar38 * fVar36 + (float)uVar40 * param_2);
  param_1[1] = CONCAT44((float)((ulong)uVar37 >> 0x20) * fVar36 +
                        (float)((ulong)uVar39 >> 0x20) * param_2,
                        (float)uVar37 * fVar36 + (float)uVar39 * param_2);
  param_1[4] = CONCAT44((float)((ulong)uVar33 >> 0x20) * fVar36 +
                        (float)((ulong)uVar35 >> 0x20) * param_2,
                        (float)uVar33 * fVar36 + (float)uVar35 * param_2);
  param_1[3] = CONCAT44((float)((ulong)uVar32 >> 0x20) * fVar36 +
                        (float)((ulong)uVar34 >> 0x20) * param_2,
                        (float)uVar32 * fVar36 + (float)uVar34 * param_2);
  param_1[6] = CONCAT44((float)((ulong)uVar25 >> 0x20) * fVar36 +
                        (float)((ulong)uVar31 >> 0x20) * param_2,
                        (float)uVar25 * fVar36 + (float)uVar31 * param_2);
  param_1[5] = CONCAT44((float)((ulong)uVar24 >> 0x20) * fVar36 +
                        (float)((ulong)uVar30 >> 0x20) * param_2,
                        (float)uVar24 * fVar36 + (float)uVar30 * param_2);
  param_1[8] = CONCAT44((float)((ulong)uVar21 >> 0x20) * fVar36 +
                        (float)((ulong)uVar23 >> 0x20) * param_2,
                        (float)uVar21 * fVar36 + (float)uVar23 * param_2);
  param_1[7] = CONCAT44((float)((ulong)uVar20 >> 0x20) * fVar36 +
                        (float)((ulong)uVar22 >> 0x20) * param_2,
                        (float)uVar20 * fVar36 + (float)uVar22 * param_2);
  param_1[9] = CONCAT44(fVar36 * (float)((ulong)uVar29 >> 0x20) +
                        param_2 * (float)((ulong)uVar28 >> 0x20),
                        fVar36 * (float)uVar29 + param_2 * (float)uVar28);
  *(float *)(param_1 + 10) = fVar36 * fVar26 + param_2 * fVar27;
  *(ulong *)((long)param_1 + 0x5c) = CONCAT44(fVar8,fVar10);
  *(ulong *)((long)param_1 + 0x54) = CONCAT44(fVar9,fVar5);
  return;
}



/* Entry: 10a8f4b10; end: 10a8f4ba7;  */

void FUN_10a8f4b10(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  code *pcVar10;
  long lVar11;
  float *pfVar12;
  float *pfVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  float *pfVar21;
  ulong uVar22;
  float *pfVar23;
  float *pfVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
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
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [72];
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  undefined4 uStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  undefined8 uStack_15c;
  undefined8 uStack_154;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 uStack_144;
  undefined8 uStack_13c;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  float fStack_110;
  float fStack_10c;
  undefined1 auStack_108 [64];
  undefined1 auStack_c8 [8];
  float fStack_c0;
  undefined8 uStack_b8;
  float fStack_b0;
  undefined8 uStack_a8;
  float fStack_a0;
  undefined8 uStack_98;
  float fStack_90;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(long *)(param_1 + 8) != param_3 || *(long *)(param_1 + 8) == 0) {
    _free(*(undefined8 *)(param_1 + 0x18));
    lVar11 = param_3 * 4 + 4;
    _malloc();
    *(long *)(param_1 + 0x18) = lVar11;
    if (lVar11 == 0) {
      lVar11 = 8;
      ___cxa_allocate_exception();
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      FUN_10a8f494c(auStack_1f0,*(undefined4 *)(lVar11 + 0x1f0),lVar11 + 0x200,lVar11 + 0x268);
      uStack_13c = 0;
      uStack_144 = 0;
      uStack_148 = 0x3f800000;
      uStack_134 = 0x3f800000;
      uStack_130 = 0;
      uStack_128 = 0;
      fVar26 = fStack_1a0 * 0.0;
      fVar32 = (float)auStack_1e8._64_8_ * 0.0;
      fVar33 = SUB84(auStack_1e8._64_8_,4) * 0.0;
      uVar35 = NEON_rev64(CONCAT44(fVar33,fVar32),4);
      fVar32 = fVar32 + fVar33;
      uStack_118 = CONCAT44(SUB84(auStack_1e8._64_8_,4) + (float)((ulong)uVar35 >> 0x20) + fVar26 +
                            0.0,(float)auStack_1e8._64_8_ + (float)uVar35 + fVar26 + 0.0);
      fStack_110 = fStack_1a0 + fVar32 + 0.0;
      fStack_10c = fVar32 + fVar26 + 1.0;
      uStack_120 = 0x3f800000;
      fStack_188 = (fStack_198 * fStack_198 + fStack_194 * fStack_194) * -2.0 + 1.0;
      fStack_184 = fStack_19c * fStack_198 + fStack_194 * fStack_190;
      fStack_184 = fStack_184 + fStack_184;
      fStack_180 = fStack_19c * fStack_194 - fStack_198 * fStack_190;
      fStack_180 = fStack_180 + fStack_180;
      fStack_178 = fStack_19c * fStack_198 - fStack_194 * fStack_190;
      fStack_178 = fStack_178 + fStack_178;
      fStack_174 = (fStack_19c * fStack_19c + fStack_194 * fStack_194) * -2.0 + 1.0;
      fStack_170 = fStack_198 * fStack_194 + fStack_19c * fStack_190;
      fStack_170 = fStack_170 + fStack_170;
      fStack_168 = fStack_19c * fStack_194 + fStack_198 * fStack_190;
      fStack_168 = fStack_168 + fStack_168;
      fStack_164 = fStack_198 * fStack_194 - fStack_19c * fStack_190;
      fStack_164 = fStack_164 + fStack_164;
      uStack_17c = 0;
      uStack_16c = 0;
      fStack_160 = (fStack_19c * fStack_19c + fStack_198 * fStack_198) * -2.0 + 1.0;
      uStack_154 = 0;
      uStack_15c = 0;
      uStack_14c = 0x3f800000;
      func_0x000109519fd0(auStack_108,&uStack_148,&fStack_188);
      func_0x000109519fd0(auStack_c8,auStack_108,auStack_1e8);
      uVar19 = *(uint *)(lVar11 + 8);
      fVar33 = (float)uStack_b8;
      fVar27 = (float)((ulong)uStack_b8 >> 0x20);
      fVar26 = auStack_c8._0_4_;
      fVar32 = auStack_c8._4_4_;
      fVar28 = (float)uStack_a8;
      fVar29 = (float)((ulong)uStack_a8 >> 0x20);
      fVar30 = (float)uStack_98;
      fVar31 = (float)((ulong)uStack_98 >> 0x20);
      if (0 < (int)uVar19) {
        iVar15 = 0;
        do {
          lVar5 = *(long *)(lVar11 + 0x18);
          if (((*(long *)(lVar11 + 0x20) == lVar5) ||
              (lVar6 = *(long *)(lVar11 + 0x48), *(long *)(lVar11 + 0x50) == lVar6)) ||
             (lVar7 = *(long *)(lVar11 + 0x60), *(long *)(lVar11 + 0x68) == lVar7))
          goto LAB_10a8f5260;
          lVar16 = 0;
          iVar8 = *(int *)(lVar11 + 0xc) * iVar15;
          do {
            pfVar12 = (float *)(lVar5 + (long)iVar8 * 0xc + 4 + lVar16);
            fVar34 = pfVar12[-1];
            fVar36 = *pfVar12;
            fVar37 = pfVar12[1];
            puVar3 = (undefined8 *)(lVar6 + (long)iVar8 * 0xc + lVar16);
            fVar38 = *(float *)(puVar3 + 1);
            fVar39 = *(float *)(lVar11 + 0x1ec);
            uVar35 = *puVar3;
            puVar3 = (undefined8 *)(lVar7 + (long)iVar8 * 0xc + lVar16);
            *puVar3 = CONCAT44(((fVar31 + fVar27 * fVar36 + fVar32 * fVar34 + fVar29 * fVar37) -
                               (float)((ulong)uVar35 >> 0x20)) / fVar39,
                               ((fVar30 + fVar33 * fVar36 + fVar26 * fVar34 + fVar28 * fVar37) -
                               (float)uVar35) / fVar39);
            *(float *)(puVar3 + 1) =
                 ((fStack_90 + fStack_b0 * fVar36 + fVar34 * fStack_c0 + fVar37 * fStack_a0) -
                 fVar38) / fVar39;
            lVar16 = lVar16 + 0xc;
          } while (lVar16 != 0x24);
          iVar15 = iVar15 + 1;
          uVar19 = *(uint *)(lVar11 + 8);
        } while (iVar15 < (int)uVar19);
      }
      if (((((((*(float *)(lVar11 + 0x208) != *(float *)(lVar11 + 0x270)) ||
              (*(float *)(lVar11 + 0x20c) != *(float *)(lVar11 + 0x274))) ||
             ((*(float *)(lVar11 + 0x210) != *(float *)(lVar11 + 0x278) ||
              ((*(float *)(lVar11 + 0x214) != *(float *)(lVar11 + 0x27c) ||
               (*(float *)(lVar11 + 0x218) != *(float *)(lVar11 + 0x280))))))) ||
            (*(float *)(lVar11 + 0x21c) != *(float *)(lVar11 + 0x284))) ||
           ((((*(float *)(lVar11 + 0x220) != *(float *)(lVar11 + 0x288) ||
              (*(float *)(lVar11 + 0x224) != *(float *)(lVar11 + 0x28c))) ||
             (*(float *)(lVar11 + 0x228) != *(float *)(lVar11 + 0x290))) ||
            ((*(float *)(lVar11 + 0x22c) != *(float *)(lVar11 + 0x294) ||
             (*(float *)(lVar11 + 0x230) != *(float *)(lVar11 + 0x298))))))) ||
          (((*(float *)(lVar11 + 0x234) != *(float *)(lVar11 + 0x29c) ||
            ((*(float *)(lVar11 + 0x238) != *(float *)(lVar11 + 0x2a0) ||
             (*(float *)(lVar11 + 0x23c) != *(float *)(lVar11 + 0x2a4))))) ||
           ((*(float *)(lVar11 + 0x240) != *(float *)(lVar11 + 0x2a8) ||
            (*(float *)(lVar11 + 0x244) != *(float *)(lVar11 + 0x2ac))))))) && (0 < (int)uVar19)) {
        lVar5 = *(long *)(lVar11 + 0x18);
        if (((*(long *)(lVar11 + 0x20) == lVar5) ||
            (lVar6 = *(long *)(lVar11 + 0x1b8), *(long *)(lVar11 + 0x1c0) == lVar6)) ||
           (lVar7 = *(long *)(lVar11 + 0x1d0), *(long *)(lVar11 + 0x1d8) == lVar7)) {
LAB_10a8f5260:
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10a8f5264);
          (*pcVar10)();
        }
        uVar17 = 0;
        uVar18 = 0;
        iVar15 = *(int *)(lVar11 + 0xc);
        lVar11 = (long)iVar15;
        uVar9 = iVar15 - 1;
        pfVar12 = (float *)(lVar5 + 0x14);
        pfVar13 = (float *)(lVar5 + 4);
        do {
          if (1 < iVar15) {
            lVar16 = 0;
            uVar20 = 0;
            lVar14 = lVar5 + uVar18 * lVar11 * 0xc;
            pfVar21 = pfVar12;
            do {
              uVar1 = (int)uVar20 + 3;
              uVar4 = uVar9;
              if ((int)uVar1 <= (int)uVar9) {
                uVar4 = uVar1;
              }
              pfVar23 = (float *)(lVar14 + uVar20 * 0xc);
              pfVar24 = pfVar21;
              lVar25 = lVar16;
              uVar22 = uVar20;
              do {
                fVar34 = pfVar24[-2];
                fVar38 = pfVar24[-1];
                fVar39 = *pfVar24;
                fVar40 = *pfVar23;
                fVar41 = pfVar23[1];
                fVar42 = pfVar23[2];
                fVar36 = (fVar30 + fVar33 * fVar38 + fVar26 * fVar34 + fVar28 * fVar39) -
                         (fVar30 + fVar33 * fVar41 + fVar26 * fVar40 + fVar28 * fVar42);
                fVar37 = (fVar31 + fVar27 * fVar38 + fVar32 * fVar34 + fVar29 * fVar39) -
                         (fVar31 + fVar27 * fVar41 + fVar32 * fVar40 + fVar29 * fVar42);
                fVar34 = (fStack_90 + fStack_b0 * fVar38 + fVar34 * fStack_c0 + fVar39 * fStack_a0)
                         - (fStack_90 + fStack_b0 * fVar41 + fVar40 * fStack_c0 + fVar42 * fStack_a0
                           );
                *(float *)(lVar6 + uVar18 * lVar11 * 0xc + (lVar25 >> 0x1e)) =
                     SQRT(fVar34 * fVar34 + fVar36 * fVar36 + fVar37 * fVar37);
                uVar22 = uVar22 + 1;
                lVar25 = lVar25 + 0x100000000;
                pfVar24 = pfVar24 + 3;
              } while ((long)uVar22 < (long)(int)uVar4);
              uVar20 = uVar20 + 1;
              lVar16 = lVar16 + 0x300000000;
              pfVar21 = pfVar21 + 3;
            } while (uVar20 != uVar9);
            if (3 < iVar15) {
              uVar20 = 0;
              pfVar21 = pfVar13;
              do {
                lVar16 = lVar14 + uVar20 * 0xc;
                uVar22 = 0;
                pfVar24 = pfVar21;
                do {
                  uVar2 = uVar22 + 1;
                  pfVar23 = (float *)(lVar16 + (uVar2 & 3) * 0xc);
                  fVar34 = *pfVar23;
                  fVar37 = pfVar23[1];
                  fVar39 = pfVar23[2];
                  pfVar23 = (float *)(lVar16 + (uVar22 ^ 2) * 0xc);
                  fVar40 = *pfVar23;
                  fVar41 = pfVar23[1];
                  fVar42 = pfVar23[2];
                  fVar36 = fVar30 + fVar33 * fVar41 + fVar40 * fVar26 + fVar42 * fVar28;
                  fVar38 = fVar31 + fVar27 * fVar41 + fVar40 * fVar32 + fVar42 * fVar29;
                  fVar42 = fStack_90 + fStack_b0 * fVar41 + fVar40 * fStack_c0 + fVar42 * fStack_a0;
                  fVar40 = (fVar30 + fVar33 * fVar37 + fVar34 * fVar26 + fVar39 * fVar28) - fVar36;
                  fVar41 = (fVar31 + fVar27 * fVar37 + fVar34 * fVar32 + fVar39 * fVar29) - fVar38;
                  fVar34 = (fStack_90 + fStack_b0 * fVar37 + fVar34 * fStack_c0 + fVar39 * fStack_a0
                           ) - fVar42;
                  pfVar23 = (float *)(lVar16 + (ulong)((int)uVar22 - 1U & 3) * 0xc);
                  fVar37 = *pfVar23;
                  fVar39 = pfVar23[1];
                  fVar44 = pfVar23[2];
                  fVar43 = (fVar30 + fVar33 * fVar39 + fVar37 * fVar26 + fVar44 * fVar28) - fVar36;
                  fVar45 = (fVar31 + fVar27 * fVar39 + fVar37 * fVar32 + fVar44 * fVar29) - fVar38;
                  fVar37 = (fStack_90 + fStack_b0 * fVar39 + fVar37 * fStack_c0 + fVar44 * fStack_a0
                           ) - fVar42;
                  fVar44 = -(fVar45 * fVar34) + fVar37 * fVar41;
                  fVar37 = -(fVar37 * fVar40) + fVar43 * fVar34;
                  fVar39 = -(fVar43 * fVar41) + fVar45 * fVar40;
                  fVar40 = SQRT(fVar39 * fVar39 + fVar44 * fVar44 + fVar37 * fVar37);
                  fVar34 = 1e-06;
                  if (1e-06 <= fVar40) {
                    fVar34 = fVar40;
                  }
                  fVar40 = pfVar24[-1];
                  fVar41 = *pfVar24;
                  fVar43 = pfVar24[1];
                  *(float *)(lVar7 + (-(uVar17 >> 0x1f) & 0xfffffffc00000000 | uVar17 << 2) +
                             (uVar20 & 0x3fffffff) * 0x10 + uVar22 * 4) =
                       (fVar42 - (fStack_90 +
                                 fStack_b0 * fVar41 + fVar40 * fStack_c0 + fVar43 * fStack_a0)) *
                       (fVar39 / fVar34) +
                       (fVar36 - (fVar30 + fVar33 * fVar41 + fVar40 * fVar26 + fVar43 * fVar28)) *
                       (fVar44 / fVar34) +
                       (fVar38 - (fVar31 + fVar27 * fVar41 + fVar40 * fVar32 + fVar43 * fVar29)) *
                       (fVar37 / fVar34);
                  pfVar24 = pfVar24 + 3;
                  uVar22 = uVar2;
                } while (uVar2 != 4);
                uVar20 = uVar20 + 1;
                pfVar21 = pfVar21 + 3;
              } while (uVar20 != iVar15 - 3U);
            }
          }
          uVar18 = uVar18 + 1;
          pfVar12 = pfVar12 + lVar11 * 3;
          uVar17 = (ulong)((int)uVar17 + (iVar15 - 3U) * 4);
          pfVar13 = pfVar13 + lVar11 * 3;
        } while (uVar18 != uVar19);
      }
      return;
    }
    *(long *)(param_1 + 8) = param_3;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    _free();
    *(undefined8 *)(param_1 + 0x20) = 0;
    param_3 = *(long *)(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(*(undefined8 *)(param_1 + 0x18),param_3 * 4 + 4);
  return;
}



/* Entry: 10a8f4ba8; end: 10a8f5263;  */

void FUN_10a8f4ba8(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  code *pcVar10;
  float *pfVar11;
  float *pfVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  float *pfVar21;
  ulong uVar22;
  float *pfVar23;
  float *pfVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
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
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [72];
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  undefined8 uStack_13c;
  undefined8 uStack_134;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined8 uStack_124;
  undefined8 uStack_11c;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  float fStack_f0;
  float fStack_ec;
  undefined1 auStack_e8 [64];
  undefined1 auStack_a8 [8];
  float fStack_a0;
  undefined8 uStack_98;
  float fStack_90;
  undefined8 uStack_88;
  float fStack_80;
  undefined8 uStack_78;
  float fStack_70;
  
  FUN_10a8f494c(auStack_1d0,*(undefined4 *)(param_1 + 0x1f0),param_1 + 0x200,param_1 + 0x268);
  uStack_11c = 0;
  uStack_124 = 0;
  uStack_128 = 0x3f800000;
  uStack_114 = 0x3f800000;
  uStack_110 = 0;
  uStack_108 = 0;
  fVar26 = fStack_180 * 0.0;
  fVar32 = (float)auStack_1c8._64_8_ * 0.0;
  fVar33 = SUB84(auStack_1c8._64_8_,4) * 0.0;
  uVar35 = NEON_rev64(CONCAT44(fVar33,fVar32),4);
  fVar32 = fVar32 + fVar33;
  uStack_f8 = CONCAT44(SUB84(auStack_1c8._64_8_,4) + (float)((ulong)uVar35 >> 0x20) + fVar26 + 0.0,
                       (float)auStack_1c8._64_8_ + (float)uVar35 + fVar26 + 0.0);
  fStack_f0 = fStack_180 + fVar32 + 0.0;
  fStack_ec = fVar32 + fVar26 + 1.0;
  uStack_100 = 0x3f800000;
  fStack_168 = (fStack_178 * fStack_178 + fStack_174 * fStack_174) * -2.0 + 1.0;
  fStack_164 = fStack_17c * fStack_178 + fStack_174 * fStack_170;
  fStack_164 = fStack_164 + fStack_164;
  fStack_160 = fStack_17c * fStack_174 - fStack_178 * fStack_170;
  fStack_160 = fStack_160 + fStack_160;
  fStack_158 = fStack_17c * fStack_178 - fStack_174 * fStack_170;
  fStack_158 = fStack_158 + fStack_158;
  fStack_154 = (fStack_17c * fStack_17c + fStack_174 * fStack_174) * -2.0 + 1.0;
  fStack_150 = fStack_178 * fStack_174 + fStack_17c * fStack_170;
  fStack_150 = fStack_150 + fStack_150;
  fStack_148 = fStack_17c * fStack_174 + fStack_178 * fStack_170;
  fStack_148 = fStack_148 + fStack_148;
  fStack_144 = fStack_178 * fStack_174 - fStack_17c * fStack_170;
  fStack_144 = fStack_144 + fStack_144;
  uStack_15c = 0;
  uStack_14c = 0;
  fStack_140 = (fStack_17c * fStack_17c + fStack_178 * fStack_178) * -2.0 + 1.0;
  uStack_134 = 0;
  uStack_13c = 0;
  uStack_12c = 0x3f800000;
  func_0x000109519fd0(auStack_e8,&uStack_128,&fStack_168);
  func_0x000109519fd0(auStack_a8,auStack_e8,auStack_1c8);
  uVar19 = *(uint *)(param_1 + 8);
  fVar33 = (float)uStack_98;
  fVar27 = (float)((ulong)uStack_98 >> 0x20);
  fVar26 = auStack_a8._0_4_;
  fVar32 = auStack_a8._4_4_;
  fVar28 = (float)uStack_88;
  fVar29 = (float)((ulong)uStack_88 >> 0x20);
  fVar30 = (float)uStack_78;
  fVar31 = (float)((ulong)uStack_78 >> 0x20);
  if (0 < (int)uVar19) {
    iVar15 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x18);
      if (((*(long *)(param_1 + 0x20) == lVar5) ||
          (lVar6 = *(long *)(param_1 + 0x48), *(long *)(param_1 + 0x50) == lVar6)) ||
         (lVar7 = *(long *)(param_1 + 0x60), *(long *)(param_1 + 0x68) == lVar7))
      goto LAB_10a8f5260;
      lVar16 = 0;
      iVar8 = *(int *)(param_1 + 0xc) * iVar15;
      do {
        pfVar11 = (float *)(lVar5 + (long)iVar8 * 0xc + 4 + lVar16);
        fVar34 = pfVar11[-1];
        fVar36 = *pfVar11;
        fVar37 = pfVar11[1];
        puVar3 = (undefined8 *)(lVar6 + (long)iVar8 * 0xc + lVar16);
        fVar38 = *(float *)(puVar3 + 1);
        fVar39 = *(float *)(param_1 + 0x1ec);
        uVar35 = *puVar3;
        puVar3 = (undefined8 *)(lVar7 + (long)iVar8 * 0xc + lVar16);
        *puVar3 = CONCAT44(((fVar31 + fVar27 * fVar36 + fVar32 * fVar34 + fVar29 * fVar37) -
                           (float)((ulong)uVar35 >> 0x20)) / fVar39,
                           ((fVar30 + fVar33 * fVar36 + fVar26 * fVar34 + fVar28 * fVar37) -
                           (float)uVar35) / fVar39);
        *(float *)(puVar3 + 1) =
             ((fStack_70 + fStack_90 * fVar36 + fVar34 * fStack_a0 + fVar37 * fStack_80) - fVar38) /
             fVar39;
        lVar16 = lVar16 + 0xc;
      } while (lVar16 != 0x24);
      iVar15 = iVar15 + 1;
      uVar19 = *(uint *)(param_1 + 8);
    } while (iVar15 < (int)uVar19);
  }
  if (((((((*(float *)(param_1 + 0x208) != *(float *)(param_1 + 0x270)) ||
          (*(float *)(param_1 + 0x20c) != *(float *)(param_1 + 0x274))) ||
         ((*(float *)(param_1 + 0x210) != *(float *)(param_1 + 0x278) ||
          ((*(float *)(param_1 + 0x214) != *(float *)(param_1 + 0x27c) ||
           (*(float *)(param_1 + 0x218) != *(float *)(param_1 + 0x280))))))) ||
        (*(float *)(param_1 + 0x21c) != *(float *)(param_1 + 0x284))) ||
       ((((*(float *)(param_1 + 0x220) != *(float *)(param_1 + 0x288) ||
          (*(float *)(param_1 + 0x224) != *(float *)(param_1 + 0x28c))) ||
         (*(float *)(param_1 + 0x228) != *(float *)(param_1 + 0x290))) ||
        ((*(float *)(param_1 + 0x22c) != *(float *)(param_1 + 0x294) ||
         (*(float *)(param_1 + 0x230) != *(float *)(param_1 + 0x298))))))) ||
      (((*(float *)(param_1 + 0x234) != *(float *)(param_1 + 0x29c) ||
        ((*(float *)(param_1 + 0x238) != *(float *)(param_1 + 0x2a0) ||
         (*(float *)(param_1 + 0x23c) != *(float *)(param_1 + 0x2a4))))) ||
       ((*(float *)(param_1 + 0x240) != *(float *)(param_1 + 0x2a8) ||
        (*(float *)(param_1 + 0x244) != *(float *)(param_1 + 0x2ac))))))) && (0 < (int)uVar19)) {
    lVar5 = *(long *)(param_1 + 0x18);
    if (((*(long *)(param_1 + 0x20) == lVar5) ||
        (lVar6 = *(long *)(param_1 + 0x1b8), *(long *)(param_1 + 0x1c0) == lVar6)) ||
       (lVar7 = *(long *)(param_1 + 0x1d0), *(long *)(param_1 + 0x1d8) == lVar7)) {
LAB_10a8f5260:
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10a8f5264);
      (*pcVar10)();
    }
    uVar17 = 0;
    uVar18 = 0;
    iVar15 = *(int *)(param_1 + 0xc);
    lVar16 = (long)iVar15;
    uVar9 = iVar15 - 1;
    pfVar11 = (float *)(lVar5 + 0x14);
    pfVar12 = (float *)(lVar5 + 4);
    do {
      if (1 < iVar15) {
        lVar14 = 0;
        uVar20 = 0;
        lVar13 = lVar5 + uVar18 * lVar16 * 0xc;
        pfVar21 = pfVar11;
        do {
          uVar1 = (int)uVar20 + 3;
          uVar4 = uVar9;
          if ((int)uVar1 <= (int)uVar9) {
            uVar4 = uVar1;
          }
          pfVar23 = (float *)(lVar13 + uVar20 * 0xc);
          pfVar24 = pfVar21;
          lVar25 = lVar14;
          uVar22 = uVar20;
          do {
            fVar34 = pfVar24[-2];
            fVar38 = pfVar24[-1];
            fVar39 = *pfVar24;
            fVar40 = *pfVar23;
            fVar41 = pfVar23[1];
            fVar42 = pfVar23[2];
            fVar36 = (fVar30 + fVar33 * fVar38 + fVar26 * fVar34 + fVar28 * fVar39) -
                     (fVar30 + fVar33 * fVar41 + fVar26 * fVar40 + fVar28 * fVar42);
            fVar37 = (fVar31 + fVar27 * fVar38 + fVar32 * fVar34 + fVar29 * fVar39) -
                     (fVar31 + fVar27 * fVar41 + fVar32 * fVar40 + fVar29 * fVar42);
            fVar34 = (fStack_70 + fStack_90 * fVar38 + fVar34 * fStack_a0 + fVar39 * fStack_80) -
                     (fStack_70 + fStack_90 * fVar41 + fVar40 * fStack_a0 + fVar42 * fStack_80);
            *(float *)(lVar6 + uVar18 * lVar16 * 0xc + (lVar25 >> 0x1e)) =
                 SQRT(fVar34 * fVar34 + fVar36 * fVar36 + fVar37 * fVar37);
            uVar22 = uVar22 + 1;
            lVar25 = lVar25 + 0x100000000;
            pfVar24 = pfVar24 + 3;
          } while ((long)uVar22 < (long)(int)uVar4);
          uVar20 = uVar20 + 1;
          lVar14 = lVar14 + 0x300000000;
          pfVar21 = pfVar21 + 3;
        } while (uVar20 != uVar9);
        if (3 < iVar15) {
          uVar20 = 0;
          pfVar21 = pfVar12;
          do {
            lVar14 = lVar13 + uVar20 * 0xc;
            uVar22 = 0;
            pfVar24 = pfVar21;
            do {
              uVar2 = uVar22 + 1;
              pfVar23 = (float *)(lVar14 + (uVar2 & 3) * 0xc);
              fVar34 = *pfVar23;
              fVar37 = pfVar23[1];
              fVar39 = pfVar23[2];
              pfVar23 = (float *)(lVar14 + (uVar22 ^ 2) * 0xc);
              fVar40 = *pfVar23;
              fVar41 = pfVar23[1];
              fVar42 = pfVar23[2];
              fVar36 = fVar30 + fVar33 * fVar41 + fVar40 * fVar26 + fVar42 * fVar28;
              fVar38 = fVar31 + fVar27 * fVar41 + fVar40 * fVar32 + fVar42 * fVar29;
              fVar42 = fStack_70 + fStack_90 * fVar41 + fVar40 * fStack_a0 + fVar42 * fStack_80;
              fVar40 = (fVar30 + fVar33 * fVar37 + fVar34 * fVar26 + fVar39 * fVar28) - fVar36;
              fVar41 = (fVar31 + fVar27 * fVar37 + fVar34 * fVar32 + fVar39 * fVar29) - fVar38;
              fVar34 = (fStack_70 + fStack_90 * fVar37 + fVar34 * fStack_a0 + fVar39 * fStack_80) -
                       fVar42;
              pfVar23 = (float *)(lVar14 + (ulong)((int)uVar22 - 1U & 3) * 0xc);
              fVar37 = *pfVar23;
              fVar39 = pfVar23[1];
              fVar44 = pfVar23[2];
              fVar43 = (fVar30 + fVar33 * fVar39 + fVar37 * fVar26 + fVar44 * fVar28) - fVar36;
              fVar45 = (fVar31 + fVar27 * fVar39 + fVar37 * fVar32 + fVar44 * fVar29) - fVar38;
              fVar37 = (fStack_70 + fStack_90 * fVar39 + fVar37 * fStack_a0 + fVar44 * fStack_80) -
                       fVar42;
              fVar44 = -(fVar45 * fVar34) + fVar37 * fVar41;
              fVar37 = -(fVar37 * fVar40) + fVar43 * fVar34;
              fVar39 = -(fVar43 * fVar41) + fVar45 * fVar40;
              fVar40 = SQRT(fVar39 * fVar39 + fVar44 * fVar44 + fVar37 * fVar37);
              fVar34 = 1e-06;
              if (1e-06 <= fVar40) {
                fVar34 = fVar40;
              }
              fVar40 = pfVar24[-1];
              fVar41 = *pfVar24;
              fVar43 = pfVar24[1];
              *(float *)(lVar7 + (-(uVar17 >> 0x1f) & 0xfffffffc00000000 | uVar17 << 2) +
                         (uVar20 & 0x3fffffff) * 0x10 + uVar22 * 4) =
                   (fVar42 - (fStack_70 +
                             fStack_90 * fVar41 + fVar40 * fStack_a0 + fVar43 * fStack_80)) *
                   (fVar39 / fVar34) +
                   (fVar36 - (fVar30 + fVar33 * fVar41 + fVar40 * fVar26 + fVar43 * fVar28)) *
                   (fVar44 / fVar34) +
                   (fVar38 - (fVar31 + fVar27 * fVar41 + fVar40 * fVar32 + fVar43 * fVar29)) *
                   (fVar37 / fVar34);
              pfVar24 = pfVar24 + 3;
              uVar22 = uVar2;
            } while (uVar2 != 4);
            uVar20 = uVar20 + 1;
            pfVar21 = pfVar21 + 3;
          } while (uVar20 != iVar15 - 3U);
        }
      }
      uVar18 = uVar18 + 1;
      pfVar11 = pfVar11 + lVar16 * 3;
      uVar17 = (ulong)((int)uVar17 + (iVar15 - 3U) * 4);
      pfVar12 = pfVar12 + lVar16 * 3;
    } while (uVar18 != uVar19);
  }
  return;
}



/* Entry: 10a8f5264; end: 10a8f780f;  */

void FUN_10a8f5264(long param_1)

{
  int iVar1;
  ulong *puVar2;
  float *pfVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  code *pcVar19;
  bool bVar20;
  long *plVar21;
  ulong uVar22;
  undefined4 *puVar23;
  float *pfVar24;
  undefined4 *puVar25;
  int iVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  int iVar32;
  long lVar33;
  float *pfVar34;
  float *pfVar35;
  undefined **ppuVar36;
  undefined **ppuVar37;
  ulong uVar38;
  long lVar39;
  float *pfVar40;
  long lVar41;
  float *pfVar42;
  float *pfVar43;
  undefined8 *puVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  long lVar48;
  int iVar49;
  long lVar50;
  undefined8 *puVar51;
  undefined **ppuVar52;
  undefined8 *puVar53;
  long lVar54;
  int *piVar55;
  long lVar56;
  int iVar57;
  ulong uVar58;
  long lVar59;
  undefined4 *puVar60;
  long lVar61;
  long lVar62;
  ulong uVar63;
  long lVar64;
  uint uVar65;
  int iVar66;
  float fVar67;
  float fVar68;
  uint uVar69;
  undefined *puVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float extraout_s2;
  float extraout_s2_00;
  undefined1 auVar79 [16];
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  float fVar95;
  float fVar96;
  undefined8 uVar97;
  undefined8 uVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fStack_308;
  float fStack_304;
  long lStack_258;
  long lStack_250;
  long lStack_240;
  long lStack_238;
  long lStack_228;
  long lStack_220;
  undefined8 uStack_210;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  undefined4 uStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  undefined8 uStack_17c;
  undefined8 uStack_174;
  undefined4 uStack_16c;
  float fStack_168;
  undefined8 uStack_164;
  long lStack_15c;
  float fStack_154;
  ulong uStack_150;
  undefined8 uStack_148;
  float fStack_140;
  undefined4 uStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float afStack_128 [12];
  undefined8 uStack_f8;
  float fStack_f0;
  float fStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  float fStack_d0;
  ulong uStack_c8;
  float fStack_c0;
  undefined8 uStack_b8;
  float fStack_b0;
  
  iVar6 = *(int *)(param_1 + 0xc);
  FUN_10a8f494c(&uStack_210,*(undefined4 *)(param_1 + 500),param_1 + 0x200,param_1 + 0x268);
  lStack_15c = 0;
  uStack_164 = 0;
  fStack_168 = 1.0;
  fStack_154 = 1.0;
  uStack_148 = 0;
  uStack_150 = 0;
  fVar73 = fStack_1c0 * 0.0;
  fVar83 = (float)uStack_1c8 * 0.0;
  fVar81 = (float)((ulong)uStack_1c8 >> 0x20);
  fVar87 = fVar81 * 0.0;
  uVar92 = NEON_rev64(CONCAT44(fVar87,fVar83),4);
  fVar83 = fVar83 + fVar87;
  fStack_138 = (float)uStack_1c8 + (float)uVar92 + fVar73 + 0.0;
  fStack_134 = fVar81 + (float)((ulong)uVar92 >> 0x20) + fVar73 + 0.0;
  fStack_130 = fStack_1c0 + fVar83 + 0.0;
  fVar67 = 1.0;
  fStack_12c = fVar83 + fVar73 + 1.0;
  fStack_140 = 1.0;
  uStack_13c = 0;
  fStack_1a8 = (fStack_1b8 * fStack_1b8 + fStack_1b4 * fStack_1b4) * -2.0 + 1.0;
  fStack_1a4 = fStack_1bc * fStack_1b8 + fStack_1b4 * fStack_1b0;
  fStack_1a4 = fStack_1a4 + fStack_1a4;
  fStack_1a0 = fStack_1bc * fStack_1b4 - fStack_1b8 * fStack_1b0;
  fStack_1a0 = fStack_1a0 + fStack_1a0;
  fStack_198 = fStack_1bc * fStack_1b8 - fStack_1b4 * fStack_1b0;
  fStack_198 = fStack_198 + fStack_198;
  fStack_194 = (fStack_1bc * fStack_1bc + fStack_1b4 * fStack_1b4) * -2.0 + 1.0;
  fStack_190 = fStack_1b8 * fStack_1b4 + fStack_1bc * fStack_1b0;
  fStack_190 = fStack_190 + fStack_190;
  fStack_188 = fStack_1bc * fStack_1b4 + fStack_1b8 * fStack_1b0;
  fStack_188 = fStack_188 + fStack_188;
  fStack_184 = fStack_1b8 * fStack_1b4 - fStack_1bc * fStack_1b0;
  fStack_184 = fStack_184 + fStack_184;
  uStack_19c = 0;
  uStack_18c = 0;
  fStack_180 = (fStack_1bc * fStack_1bc + fStack_1b8 * fStack_1b8) * -2.0 + 1.0;
  uStack_174 = 0;
  uStack_17c = 0;
  uStack_16c = 0x3f800000;
  func_0x000109519fd0(afStack_128,&fStack_168,&fStack_1a8);
  func_0x000109519fd0(&uStack_e8,afStack_128,&fStack_208);
  fVar18 = fStack_b0;
  uVar16 = uStack_b8;
  fVar87 = fStack_c0;
  uVar14 = uStack_c8;
  fVar81 = fStack_d0;
  uVar92 = uStack_d8;
  uVar13 = uStack_e0;
  puVar11 = uStack_e8;
  fVar73 = (float)uStack_e0;
  FUN_10a8f494c(&uStack_210,*(undefined4 *)(param_1 + 0x1f0),param_1 + 0x200,param_1 + 0x268);
  lStack_15c = 0;
  uStack_164 = 0;
  fStack_168 = 1.0;
  fStack_154 = 1.0;
  uStack_148 = 0;
  uStack_150 = 0;
  fVar83 = fStack_1c0 * 0.0;
  fVar84 = (float)uStack_1c8 * 0.0;
  fVar82 = (float)((ulong)uStack_1c8 >> 0x20);
  fVar88 = fVar82 * 0.0;
  uVar93 = NEON_rev64(CONCAT44(fVar88,fVar84),4);
  fVar84 = fVar84 + fVar88;
  fStack_138 = (float)uStack_1c8 + (float)uVar93 + fVar83 + 0.0;
  fStack_134 = fVar82 + (float)((ulong)uVar93 >> 0x20) + fVar83 + 0.0;
  fStack_130 = fStack_1c0 + fVar84 + 0.0;
  fStack_12c = fVar84 + fVar83 + fVar67;
  fStack_140 = 1.0;
  uStack_13c = 0;
  fStack_1a8 = fVar67 + (fStack_1b8 * fStack_1b8 + fStack_1b4 * fStack_1b4) * -2.0;
  fStack_1a4 = fStack_1bc * fStack_1b8 + fStack_1b4 * fStack_1b0;
  fStack_1a4 = fStack_1a4 + fStack_1a4;
  fStack_1a0 = fStack_1bc * fStack_1b4 - fStack_1b8 * fStack_1b0;
  fStack_1a0 = fStack_1a0 + fStack_1a0;
  fStack_198 = fStack_1bc * fStack_1b8 - fStack_1b4 * fStack_1b0;
  fStack_198 = fStack_198 + fStack_198;
  fStack_194 = fVar67 + (fStack_1bc * fStack_1bc + fStack_1b4 * fStack_1b4) * -2.0;
  fStack_190 = fStack_1b8 * fStack_1b4 + fStack_1bc * fStack_1b0;
  fStack_190 = fStack_190 + fStack_190;
  fStack_188 = fStack_1bc * fStack_1b4 + fStack_1b8 * fStack_1b0;
  fStack_188 = fStack_188 + fStack_188;
  fStack_184 = fStack_1b8 * fStack_1b4 - fStack_1bc * fStack_1b0;
  fStack_184 = fStack_184 + fStack_184;
  uStack_19c = 0;
  uStack_18c = 0;
  fStack_180 = fVar67 + (fStack_1bc * fStack_1bc + fStack_1b8 * fStack_1b8) * -2.0;
  uStack_174 = 0;
  uStack_17c = 0;
  uStack_16c = 0x3f800000;
  func_0x000109519fd0(afStack_128,&fStack_168,&fStack_1a8);
  func_0x000109519fd0(&uStack_e8,afStack_128,&fStack_208);
  fVar84 = fStack_b0;
  uVar17 = uStack_b8;
  fVar82 = fStack_c0;
  uVar15 = uStack_c8;
  fVar83 = fStack_d0;
  uVar93 = uStack_d8;
  puVar12 = uStack_e8;
  fVar88 = (float)uStack_e0;
  FUN_10a90dfd0(&lStack_228,*(long *)(param_1 + 0x2d8) - *(long *)(param_1 + 0x2d0) >> 3);
  FUN_10a90dfd0(&lStack_240,*(long *)(param_1 + 0x2d8) - *(long *)(param_1 + 0x2d0) >> 3);
  FUN_10a90dfd0(&lStack_258,*(long *)(param_1 + 0x2d8) - *(long *)(param_1 + 0x2d0) >> 3);
  lVar33 = *(long *)(param_1 + 0x2d0);
  if (*(long *)(param_1 + 0x2d8) != lVar33) {
    lVar61 = 0;
    uVar63 = 0;
    fVar67 = 0.0;
    do {
      lVar33 = *(long *)(lVar33 + uVar63 * 8);
      afStack_128[3] = 0.0;
      afStack_128[4] = 0.0;
      afStack_128[1] = 0.0;
      afStack_128[2] = 0.0;
      afStack_128[0] = 1.0;
      afStack_128[5] = 1.0;
      afStack_128[6] = 0.0;
      afStack_128[7] = 0.0;
      afStack_128[8] = 0.0;
      afStack_128[9] = 0.0;
      fVar71 = *(float *)(lVar33 + 0xc4);
      fVar74 = *(float *)(lVar33 + 0xc0) * fVar67;
      fVar75 = (float)*(undefined8 *)(lVar33 + 0xb8);
      fVar85 = fVar75 * 0.0;
      fVar76 = (float)((ulong)*(undefined8 *)(lVar33 + 0xb8) >> 0x20);
      fVar89 = fVar76 * 0.0;
      uVar94 = NEON_rev64(CONCAT44(fVar89,fVar85),4);
      fVar85 = fVar85 + fVar89;
      uStack_f8 = CONCAT44(fVar76 + (float)((ulong)uVar94 >> 0x20) + fVar74 + 0.0,
                           fVar75 + (float)uVar94 + fVar74 + 0.0);
      fStack_f0 = *(float *)(lVar33 + 0xc0) + fVar85 + fVar67;
      fStack_ec = fVar85 + fVar74 + 1.0;
      afStack_128[10] = 1.0;
      afStack_128[0xb] = 0.0;
      fVar75 = *(float *)(lVar33 + 200);
      fVar74 = *(float *)(lVar33 + 0xcc);
      fVar103 = *(float *)(lVar33 + 0xd0);
      fStack_168 = (fVar75 * fVar75 + fVar74 * fVar74) * -2.0 + 1.0;
      fVar105 = fVar71 * fVar75 + fVar74 * fVar103;
      fVar107 = fVar71 * fVar74 - fVar75 * fVar103;
      fVar85 = fVar71 * fVar75 - fVar74 * fVar103;
      fStack_154 = (fVar71 * fVar71 + fVar74 * fVar74) * -2.0 + 1.0;
      fVar89 = fVar75 * fVar74 + fVar71 * fVar103;
      fVar76 = fVar71 * fVar74 + fVar75 * fVar103;
      fVar74 = fVar75 * fVar74 - fVar71 * fVar103;
      uStack_164 = CONCAT44(fVar107 + fVar107,fVar105 + fVar105);
      lStack_15c = (ulong)(uint)(fVar85 + fVar85) << 0x20;
      fStack_140 = (fVar71 * fVar71 + fVar75 * fVar75) * -2.0 + 1.0;
      uStack_150 = (ulong)(uint)(fVar89 + fVar89);
      uStack_148 = CONCAT44(fVar74 + fVar74,fVar76 + fVar76);
      fStack_134 = 0.0;
      fStack_130 = 0.0;
      uStack_13c = 0;
      fStack_138 = 0.0;
      fStack_12c = 1.0;
      func_0x000109519fd0(&uStack_e8,afStack_128,&fStack_168);
      func_0x000109519fd0(&uStack_210,&uStack_e8,lVar33 + 0x78);
      uVar38 = (lStack_220 - lStack_228 >> 4) * -0x5555555555555555;
      if (uVar38 < uVar63 || uVar38 - uVar63 == 0) goto LAB_10a8f7768;
      puVar44 = (undefined8 *)(lStack_228 + lVar61);
      *puVar44 = uStack_210;
      *(float *)(puVar44 + 1) = fStack_208;
      *(ulong *)((long)puVar44 + 0xc) = CONCAT44(fStack_1fc,fStack_200);
      *(undefined4 *)((long)puVar44 + 0x14) = uStack_1f8;
      puVar44[3] = uStack_1f0;
      *(undefined4 *)(puVar44 + 4) = (undefined4)uStack_1e8;
      *(ulong *)((long)puVar44 + 0x24) = CONCAT44(uStack_1dc,uStack_1e0);
      *(undefined4 *)((long)puVar44 + 0x2c) = uStack_1d8;
      FUN_10a8f7b54(&uStack_210,lVar33 + 8);
      uVar38 = (lStack_238 - lStack_240 >> 4) * -0x5555555555555555;
      if (uVar38 < uVar63 || uVar38 - uVar63 == 0) goto LAB_10a8f7768;
      puVar44 = (undefined8 *)(lStack_240 + lVar61);
      puVar44[3] = CONCAT44(uStack_1f4,uStack_1f8);
      puVar44[2] = CONCAT44(fStack_1fc,fStack_200);
      puVar44[5] = uStack_1e8;
      puVar44[4] = uStack_1f0;
      puVar44[1] = CONCAT44(fStack_204,fStack_208);
      *puVar44 = uStack_210;
      uStack_210 = &PTR_DAT_110bd3ea8;
      uStack_1c8 = 0;
      uStack_1e8 = *(undefined8 *)(lVar33 + 0x30);
      uStack_1f0 = *(undefined8 *)(lVar33 + 0x28);
      uStack_1f8 = (undefined4)*(undefined8 *)(lVar33 + 0x20);
      uStack_1f4 = (undefined4)((ulong)*(undefined8 *)(lVar33 + 0x20) >> 0x20);
      uStack_1e0 = (undefined4)*(undefined8 *)(lVar33 + 0x38);
      uStack_1dc = (undefined4)((ulong)*(undefined8 *)(lVar33 + 0x38) >> 0x20);
      uStack_1d0 = (undefined4)*(undefined8 *)(lVar33 + 0x48);
      uStack_1cc = (undefined4)((ulong)*(undefined8 *)(lVar33 + 0x48) >> 0x20);
      uStack_1d8 = (undefined4)*(undefined8 *)(lVar33 + 0x40);
      uStack_1d4 = (undefined4)((ulong)*(undefined8 *)(lVar33 + 0x40) >> 0x20);
      fStack_200 = (float)*(undefined8 *)(lVar33 + 0x18);
      fStack_1fc = (float)((ulong)*(undefined8 *)(lVar33 + 0x18) >> 0x20);
      fStack_208 = (float)*(undefined8 *)(lVar33 + 0x10);
      fStack_204 = (float)((ulong)*(undefined8 *)(lVar33 + 0x10) >> 0x20);
      fStack_1c0 = 0.0;
      fStack_1b4 = (float)*(undefined8 *)(lVar33 + 100);
      fStack_1b0 = (float)((ulong)*(undefined8 *)(lVar33 + 100) >> 0x20);
      fStack_1bc = (float)*(undefined8 *)(lVar33 + 0x5c);
      fStack_1b8 = (float)((ulong)*(undefined8 *)(lVar33 + 0x5c) >> 0x20);
      lStack_15c = 0;
      uStack_164 = 0;
      fStack_168 = 1.0;
      fStack_154 = 1.0;
      uStack_150 = 0;
      uStack_148 = 0;
      fStack_134 = 0.0;
      fStack_130 = 0.0;
      uStack_13c = 0;
      fStack_138 = 0.0;
      fStack_140 = 1.0;
      fStack_12c = 1.0;
      fStack_1a8 = (fStack_1b8 * fStack_1b8 + fStack_1b4 * fStack_1b4) * -2.0 + 1.0;
      fStack_1a4 = fStack_1bc * fStack_1b8 + fStack_1b4 * fStack_1b0;
      fStack_1a4 = fStack_1a4 + fStack_1a4;
      fStack_1a0 = fStack_1bc * fStack_1b4 - fStack_1b8 * fStack_1b0;
      fStack_1a0 = fStack_1a0 + fStack_1a0;
      fStack_198 = fStack_1bc * fStack_1b8 - fStack_1b4 * fStack_1b0;
      fStack_198 = fStack_198 + fStack_198;
      fStack_194 = (fStack_1bc * fStack_1bc + fStack_1b4 * fStack_1b4) * -2.0 + 1.0;
      fStack_190 = fStack_1b8 * fStack_1b4 + fStack_1bc * fStack_1b0;
      fStack_190 = fStack_190 + fStack_190;
      fStack_188 = fStack_1bc * fStack_1b4 + fStack_1b8 * fStack_1b0;
      fStack_188 = fStack_188 + fStack_188;
      fStack_184 = fStack_1b8 * fStack_1b4 - fStack_1bc * fStack_1b0;
      fStack_184 = fStack_184 + fStack_184;
      fStack_180 = (fStack_1bc * fStack_1bc + fStack_1b8 * fStack_1b8) * -2.0 + 1.0;
      uStack_19c = 0;
      uStack_18c = 0;
      uStack_174 = 0;
      uStack_17c = 0;
      uStack_16c = 0x3f800000;
      func_0x000109519fd0(afStack_128,&fStack_168,&fStack_1a8);
      func_0x000109519fd0(&uStack_e8,afStack_128,&fStack_208);
      uVar38 = (lStack_250 - lStack_258 >> 4) * -0x5555555555555555;
      if (uVar38 < uVar63 || uVar38 - uVar63 == 0) goto LAB_10a8f7768;
      puVar2 = (ulong *)(lStack_258 + lVar61);
      *puVar2 = (ulong)uStack_e8;
      *(float *)(puVar2 + 1) = (float)uStack_e0;
      *(undefined8 *)((long)puVar2 + 0xc) = uStack_d8;
      *(float *)((long)puVar2 + 0x14) = fStack_d0;
      puVar2[3] = uStack_c8;
      *(float *)(puVar2 + 4) = fStack_c0;
      *(undefined8 *)((long)puVar2 + 0x24) = uStack_b8;
      *(float *)((long)puVar2 + 0x2c) = fStack_b0;
      uVar63 = uVar63 + 1;
      lVar33 = *(long *)(param_1 + 0x2d0);
      lVar61 = lVar61 + 0x30;
    } while (uVar63 < (ulong)(*(long *)(param_1 + 0x2d8) - lVar33 >> 3));
  }
  pfVar34 = *(float **)(param_1 + 0x1f8);
  fVar67 = *(float *)(param_1 + 0x1ec);
  fVar89 = pfVar34[8];
  fVar99 = pfVar34[9];
  fVar107 = pfVar34[6];
  fVar100 = pfVar34[7];
  fVar74 = *pfVar34;
  fVar75 = pfVar34[1];
  fVar71 = pfVar34[2];
  fVar103 = pfVar34[3];
  fVar85 = pfVar34[4];
  fVar105 = pfVar34[5];
  fVar76 = pfVar34[0xc];
  if (*(char *)(pfVar34 + 0xf) == '\x01') {
    iVar49 = *(int *)(param_1 + 8);
    if (iVar49 < 1) {
      iVar66 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar32 = 0;
      do {
        lVar33 = *(long *)(param_1 + 0x2708);
        if (*(long *)(param_1 + 10000) == lVar33) goto LAB_10a8f7768;
        iVar66 = *(int *)(param_1 + 0xc);
        if (4 < iVar66) {
          lVar61 = 0;
          iVar49 = iVar66 + -3;
          do {
            uVar63 = lVar61 + iVar32 * iVar66 + 4;
            uVar38 = (*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2) *
                     -0x5555555555555555;
            if (uVar38 < uVar63 || uVar38 - uVar63 == 0) goto LAB_10a8f7768;
            puVar44 = (undefined8 *)(*(long *)(param_1 + 0x48) + uVar63 * 0xc);
            puVar53 = (undefined8 *)
                      (lVar33 + (long)((iVar49 * iVar32) / 2) * 0xc + (long)((int)lVar61 >> 1) * 0xc
                      );
            uVar94 = *puVar44;
            *(undefined4 *)(puVar53 + 1) = *(undefined4 *)(puVar44 + 1);
            *puVar53 = uVar94;
            iVar66 = *(int *)(param_1 + 0xc);
            lVar61 = lVar61 + 2;
          } while ((int)lVar61 + 4 < iVar66);
          iVar49 = *(int *)(param_1 + 8);
        }
        iVar32 = iVar32 + 1;
      } while (iVar32 < iVar49);
      pfVar34 = *(float **)(param_1 + 0x1f8);
    }
    FUN_10a9881f8(pfVar34[0x11],param_1 + 0x2720,param_1 + 0x2708,(iVar66 + -3) / 2);
    pfVar34 = *(float **)(param_1 + 0x1f8);
  }
  uVar94 = *(undefined8 *)(pfVar34 + 0x14);
  *(float *)(param_1 + 0x300) = pfVar34[0x16];
  *(undefined8 *)(param_1 + 0x2f8) = uVar94;
  *(float *)(param_1 + 0x2f4) = pfVar34[0x17];
  *(undefined8 *)(param_1 + 0x2ec) = *(undefined8 *)(pfVar34 + 0x18);
  FUN_10a8f7d00(1.0 / (float)(int)pfVar34[10],param_1 + 0x2e8);
  if (0 < *(int *)(param_1 + 8)) {
    uVar63 = 0;
    lVar33 = 0;
    uVar8 = iVar6 * 3 - 9;
    fVar85 = fVar67 * fVar85;
    fVar76 = fVar67 * fVar76;
    fVar105 = (0.25 / fVar67) * fVar105 + 1.0;
    fVar107 = fVar105 + fVar67 * fVar107;
    puVar44 = (undefined8 *)(-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2);
    uVar4 = uVar8;
    if ((int)uVar8 < 2) {
      uVar4 = 1;
    }
    fVar101 = 1e-06;
    do {
      lVar61 = *(long *)(param_1 + 0x18);
      if (((((*(long *)(param_1 + 0x20) == lVar61) ||
            (lVar64 = *(long *)(param_1 + 0x48), *(long *)(param_1 + 0x50) == lVar64)) ||
           (*(long *)(param_1 + 0x80) == *(long *)(param_1 + 0x78))) ||
          ((lVar5 = *(long *)(param_1 + 0x60), *(long *)(param_1 + 0x68) == lVar5 ||
           (lVar39 = *(long *)(param_1 + 0x1b8), *(long *)(param_1 + 0x1c0) == lVar39)))) ||
         ((lVar62 = *(long *)(param_1 + 0x1d0), *(long *)(param_1 + 0x1d8) == lVar62 ||
          ((lVar48 = *(long *)(param_1 + 0xa8), *(long *)(param_1 + 0xb0) == lVar48 ||
           (lVar50 = *(long *)(param_1 + 0x90), *(long *)(param_1 + 0x98) == lVar50))))))
      goto LAB_10a8f7768;
      uVar7 = *(uint *)(param_1 + 0xc);
      uVar38 = (ulong)uVar7;
      iVar66 = (int)lVar33;
      iVar49 = uVar7 * iVar66;
      lVar45 = lVar64 + (long)iVar49 * 0xc;
      fStack_308 = (float)uVar14;
      fStack_304 = (float)(uVar14 >> 0x20);
      if (0 < (int)uVar7) {
        lVar46 = 0;
        pfVar34 = (float *)(*(long *)(param_1 + 0x78) + (long)(int)(uVar7 * iVar66) * 0xc + 8);
        pfVar24 = (float *)(lVar48 + 8);
        uVar47 = uVar38;
        do {
          pfVar43 = (float *)(lVar50 + (lVar46 >> 0x1e));
          *pfVar43 = fVar107;
          pfVar43[0xc] = 0.0;
          pfVar43[0xd] = fVar107;
          pfVar43[0x18] = 0.0;
          pfVar43[0x19] = 0.0;
          pfVar43[0x1a] = fVar107;
          pfVar24[-2] = fVar67 * fVar100 + pfVar34[-2] * fVar105;
          pfVar24[-1] = fVar67 * fVar89 + pfVar34[-1] * fVar105;
          *pfVar24 = fVar67 * fVar99 + *pfVar34 * fVar105;
          lVar46 = lVar46 + 0x2400000000;
          uVar47 = uVar47 - 1;
          pfVar34 = pfVar34 + 3;
          pfVar24 = pfVar24 + 3;
        } while (uVar47 != 0);
        lVar41 = 0;
        uVar47 = 0;
        lVar46 = lVar64 + (long)(int)(uVar7 * iVar66) * 0xc;
        lVar56 = 0x2400000000;
        uVar69 = uVar7 - 1;
        lVar54 = lVar48;
        do {
          lVar54 = lVar54 + 0xc;
          uVar10 = uVar69 - 1;
          if (uVar10 == 0 || (int)uVar69 < 1) {
            uVar69 = 1;
          }
          uVar58 = (ulong)uVar69;
          if (2 < uVar58) {
            uVar58 = 3;
          }
          if ((long)uVar47 <= (long)(uVar38 - 2)) {
            lVar59 = 0;
            pfVar34 = (float *)(lVar45 + uVar47 * 0xc);
            pfVar24 = (float *)(lVar48 + uVar47 * 0xc);
            uVar30 = 1;
            pfVar43 = (float *)(lVar50 + ((long)((ulong)(uint)((int)uVar47 * 9) << 0x22) >> 0x1e));
            lVar28 = lVar41;
            lVar29 = lVar56;
            do {
              fVar78 = fVar74;
              if ((uVar47 & 1) == 0) {
                if (2 < uVar30) {
                  fVar78 = fVar71;
                }
              }
              else if (((int)uVar30 != 1) && (fVar78 = fVar75, (int)uVar30 != 2)) {
                fVar78 = fVar71;
              }
              fVar68 = fVar67 * fVar78 * *(float *)(param_1 + 0x10);
              fVar72 = *(float *)(lVar46 + lVar59 + 0xc) - *pfVar34;
              fVar86 = *(float *)(param_1 + 0x1ec);
              pfVar3 = (float *)(lVar54 + lVar59);
              pfVar35 = (float *)(lVar50 + (lVar29 >> 0x1e));
              uVar94 = *(undefined8 *)(lVar46 + lVar59 + 0x10);
              uVar97 = *(undefined8 *)(pfVar34 + 1);
              fVar90 = (float)uVar94 - (float)uVar97;
              fVar95 = (float)((ulong)uVar94 >> 0x20) - (float)((ulong)uVar97 >> 0x20);
              fVar77 = SQRT(fVar72 * fVar72 + fVar90 * fVar90 + fVar95 * fVar95);
              fVar78 = fVar101;
              if (1e-06 <= fVar77) {
                fVar78 = fVar77;
              }
              fVar72 = fVar72 / fVar78;
              fVar90 = fVar90 / fVar78;
              fVar95 = fVar95 / fVar78;
              fVar77 = fVar77 - *(float *)(lVar39 + (long)(iVar49 * 3) * 4 + (lVar28 >> 0x1e));
              fVar109 = fVar77 * fVar68 * fVar72;
              fVar102 = fVar77 * fVar90 * fVar68;
              fVar77 = fVar77 * fVar95 * fVar68;
              fVar78 = fVar86 * fVar68 * fVar72;
              fVar80 = fVar90 * fVar68 * fVar86;
              fVar86 = fVar95 * fVar68 * fVar86;
              fVar68 = fVar90 * fVar80;
              *pfVar43 = *pfVar43 + fVar72 * fVar78;
              *pfVar35 = *pfVar35 + fVar72 * fVar78;
              *(float *)((long)pfVar35 + lVar59 + 0xc) = -(fVar72 * fVar78);
              *(ulong *)((long)pfVar35 + lVar59 + 0x10) =
                   CONCAT44(-fVar86 * fVar72,-fVar80 * fVar72);
              *pfVar24 = fVar109 + *pfVar24;
              *pfVar3 = *pfVar3 - fVar109;
              pfVar43[0xc] = fVar78 * fVar90 + pfVar43[0xc];
              pfVar43[0xd] = fVar68 + pfVar43[0xd];
              pfVar35[0xc] = fVar78 * fVar90 + pfVar35[0xc];
              pfVar35[0xd] = fVar68 + pfVar35[0xd];
              *(float *)((long)pfVar35 + lVar59 + 0x3c) = -(fVar90 * fVar78);
              *(float *)((long)pfVar35 + lVar59 + 0x40) = -fVar68;
              *(float *)((long)pfVar35 + lVar59 + 0x44) = -fVar86 * fVar90;
              pfVar24[1] = fVar102 + pfVar24[1];
              pfVar3[1] = pfVar3[1] - fVar102;
              pfVar43[0x18] = fVar78 * fVar95 + pfVar43[0x18];
              pfVar43[0x19] = fVar80 * fVar95 + pfVar43[0x19];
              pfVar43[0x1a] = fVar95 * fVar86 + pfVar43[0x1a];
              pfVar35[0x18] = fVar78 * fVar95 + pfVar35[0x18];
              pfVar35[0x19] = fVar80 * fVar95 + pfVar35[0x19];
              pfVar35[0x1a] = fVar95 * fVar86 + pfVar35[0x1a];
              *(float *)((long)pfVar35 + lVar59 + 0x6c) = -(fVar95 * fVar78);
              *(float *)((long)pfVar35 + lVar59 + 0x70) = -(fVar95 * fVar80);
              *(float *)((long)pfVar35 + lVar59 + 0x74) = -(fVar95 * fVar86);
              pfVar24[2] = fVar77 + pfVar24[2];
              pfVar3[2] = pfVar3[2] - fVar77;
              uVar30 = uVar30 + 1;
              lVar59 = lVar59 + 0xc;
              lVar29 = lVar29 + 0x2400000000;
              lVar28 = lVar28 + 0x100000000;
            } while (uVar58 * 0xc - lVar59 != 0);
          }
          uVar47 = uVar47 + 1;
          lVar56 = lVar56 + 0x2400000000;
          lVar46 = lVar46 + 0xc;
          lVar41 = lVar41 + 0x300000000;
          uVar69 = uVar10;
        } while (uVar47 != uVar38);
      }
      lVar39 = *(long *)(param_1 + 0x1f8);
      if (0.0 < *(float *)(lVar39 + 0xc) && 3 < iVar6) {
        uVar38 = 0;
        pfVar34 = (float *)(lVar64 + (long)(int)(uVar7 * iVar66) * 0xc + 4);
        fVar78 = fVar67 * fVar103;
        do {
          lVar39 = lVar45 + uVar38 * 0xc;
          pfVar43 = (float *)(lVar48 + uVar38 * 0xc);
          pfVar3 = (float *)(lVar50 + ((long)((ulong)(uint)((int)uVar38 * 9) << 0x22) >> 0x1e));
          pfVar24 = pfVar34;
          uVar47 = 0;
          do {
            uVar58 = uVar47 + 1;
            pfVar42 = (float *)(lVar39 + (uVar58 & 3) * 0xc);
            uVar65 = (uint)uVar47;
            uVar10 = uVar65 ^ 2;
            pfVar40 = (float *)(lVar39 + (ulong)uVar10 * 0xc);
            uVar69 = uVar65 - 1 & 3;
            pfVar35 = (float *)(lVar39 + (ulong)uVar69 * 0xc);
            fVar86 = *pfVar40;
            fVar90 = pfVar40[1];
            fVar80 = pfVar40[2];
            fVar102 = -((pfVar35[1] - fVar90) * (pfVar42[2] - fVar80)) +
                      (pfVar35[2] - fVar80) * (pfVar42[1] - fVar90);
            fVar95 = -((pfVar35[2] - fVar80) * (*pfVar42 - fVar86)) +
                     (*pfVar35 - fVar86) * (pfVar42[2] - fVar80);
            fVar77 = -((*pfVar35 - fVar86) * (pfVar42[1] - fVar90)) +
                     (pfVar35[1] - fVar90) * (*pfVar42 - fVar86);
            fVar72 = SQRT(fVar77 * fVar77 + fVar102 * fVar102 + fVar95 * fVar95);
            fVar68 = fVar101;
            if (1e-06 <= fVar72) {
              fVar68 = fVar72;
            }
            fVar102 = fVar102 / fVar68;
            fVar95 = fVar95 / fVar68;
            fVar77 = fVar77 / fVar68;
            fVar86 = (fVar80 - pfVar24[1]) * fVar77 +
                     (fVar86 - pfVar24[-1]) * fVar102 + (fVar90 - *pfVar24) * fVar95;
            fVar68 = pfVar24[-1] + fVar102 * fVar86;
            fVar72 = *pfVar24 + fVar95 * fVar86;
            uStack_e8 = (undefined8 *)CONCAT44(fVar72,fVar68);
            uStack_e0 = CONCAT44(uStack_e0._4_4_,pfVar24[1] + fVar77 * fVar86);
            uStack_210 = *(undefined ***)pfVar42;
            fStack_208 = pfVar42[2];
            fStack_1fc = pfVar40[2];
            fStack_204 = (float)*(undefined8 *)pfVar40;
            fStack_200 = (float)((ulong)*(undefined8 *)pfVar40 >> 0x20);
            uStack_1f0 = CONCAT44(uStack_1f0._4_4_,pfVar35[2]);
            uStack_1f8 = (undefined4)*(undefined8 *)pfVar35;
            uStack_1f4 = (undefined4)((ulong)*(undefined8 *)pfVar35 >> 0x20);
            FUN_10a0f0254(&uStack_e8,&uStack_210);
            uStack_210 = (undefined **)((ulong)uStack_210 & 0xffffffff00000000);
            afStack_128[0] = 0.0;
            fStack_168 = 0.0;
            fStack_1a8 = 0.0;
            if (uVar65 == 3) {
              pfVar35 = &fStack_1a8;
            }
            else if (uVar65 == 2) {
              pfVar35 = &fStack_168;
            }
            else if (uVar65 == 1) {
              pfVar35 = afStack_128;
            }
            else {
              pfVar35 = (float *)&uStack_210;
            }
            uVar65 = (uint)uVar58 & 3;
            *pfVar35 = 1.0;
            if (uVar65 == 1 || (uVar58 & 3) == 0) {
              if ((uVar58 & 3) == 0) {
                pfVar35 = (float *)&uStack_210;
              }
              else {
                pfVar35 = afStack_128;
              }
            }
            else if (uVar65 == 2) {
              pfVar35 = &fStack_168;
            }
            else {
              pfVar35 = &fStack_1a8;
            }
            *pfVar35 = -fVar68;
            if (uVar10 == 3) {
              pfVar35 = &fStack_1a8;
            }
            else if (uVar10 == 2) {
              pfVar35 = &fStack_168;
            }
            else if (uVar10 == 1) {
              pfVar35 = afStack_128;
            }
            else {
              pfVar35 = (float *)&uStack_210;
            }
            *pfVar35 = -fVar72;
            if (uVar69 < 2) {
              if (uVar69 == 0) {
                pfVar35 = (float *)&uStack_210;
              }
              else {
                pfVar35 = afStack_128;
              }
            }
            else if (uVar69 == 2) {
              pfVar35 = &fStack_168;
            }
            else {
              pfVar35 = &fStack_1a8;
            }
            pfVar24 = pfVar24 + 3;
            *pfVar35 = -extraout_s2;
            fVar68 = fVar78 * (2.0 / (extraout_s2 * extraout_s2 + fVar68 * fVar68 + fVar72 * fVar72
                                     + 1.0));
            fVar68 = (fVar68 + fVar68) * *(float *)(param_1 + 0x10);
            fVar96 = fVar68 * (fVar86 - *(float *)(lVar62 + (-(uVar63 >> 0x1f) & 0xfffffffc00000000
                                                            | uVar63 << 2) +
                                                   (uVar38 & 0x3fffffff) * 0x10 + uVar47 * 4));
            fVar68 = fVar68 * *(float *)(param_1 + 0x1ec);
            fVar109 = fVar102 * fVar102;
            fVar90 = fVar95 * fVar95;
            fVar72 = fVar77 * fVar77;
            fVar91 = fVar102 * fVar95;
            fVar86 = fVar95 * fVar77;
            fVar80 = fVar77 * fVar102;
            fVar104 = fVar96 * (float)uStack_210;
            fVar106 = (float)uStack_210 * fVar68 * (float)uStack_210;
            *pfVar3 = *pfVar3 + fVar109 * fVar106;
            pfVar3[0xc] = pfVar3[0xc] + fVar91 * fVar106;
            pfVar3[0xd] = pfVar3[0xd] + fVar90 * fVar106;
            pfVar3[0x18] = pfVar3[0x18] + fVar80 * fVar106;
            pfVar3[0x19] = pfVar3[0x19] + fVar86 * fVar106;
            pfVar3[0x1a] = pfVar3[0x1a] + fVar72 * fVar106;
            *pfVar43 = *pfVar43 + fVar102 * fVar104;
            pfVar43[1] = pfVar43[1] + fVar95 * fVar104;
            pfVar43[2] = pfVar43[2] + fVar77 * fVar104;
            fVar104 = fVar96 * afStack_128[0];
            fVar110 = (float)uStack_210 * fVar68 * afStack_128[0];
            pfVar3[0x27] = pfVar3[0x27] + fVar109 * fVar110;
            pfVar3[0x28] = pfVar3[0x28] + fVar91 * fVar110;
            pfVar3[0x29] = fVar80 * fVar110 + pfVar3[0x29];
            pfVar3[0x33] = fVar91 * fVar110 + pfVar3[0x33];
            pfVar3[0x34] = pfVar3[0x34] + fVar90 * fVar110;
            pfVar3[0x35] = fVar86 * fVar110 + pfVar3[0x35];
            pfVar3[0x40] = fVar86 * fVar110 + pfVar3[0x40];
            pfVar3[0x41] = pfVar3[0x41] + fVar72 * fVar110;
            fVar106 = afStack_128[0] * fVar68 * afStack_128[0];
            pfVar3[0x24] = pfVar3[0x24] + fVar109 * fVar106;
            pfVar3[0x30] = pfVar3[0x30] + fVar91 * fVar106;
            pfVar3[0x31] = pfVar3[0x31] + fVar90 * fVar106;
            pfVar3[0x3c] = pfVar3[0x3c] + fVar80 * fVar106;
            pfVar3[0x3d] = pfVar3[0x3d] + fVar86 * fVar106;
            pfVar3[0x3e] = pfVar3[0x3e] + fVar72 * fVar106;
            pfVar3[0x3f] = fVar80 * fVar110 + pfVar3[0x3f];
            pfVar43[3] = pfVar43[3] + fVar102 * fVar104;
            pfVar43[4] = pfVar43[4] + fVar95 * fVar104;
            pfVar43[5] = pfVar43[5] + fVar77 * fVar104;
            fVar104 = fVar96 * fStack_168;
            fVar106 = fVar68 * fStack_168;
            fVar110 = (float)uStack_210 * fVar106;
            pfVar3[0x4e] = pfVar3[0x4e] + fVar109 * fVar110;
            pfVar3[0x4f] = pfVar3[0x4f] + fVar91 * fVar110;
            pfVar3[0x50] = fVar80 * fVar110 + pfVar3[0x50];
            pfVar3[0x5a] = fVar91 * fVar110 + pfVar3[0x5a];
            pfVar3[0x5b] = pfVar3[0x5b] + fVar90 * fVar110;
            pfVar3[0x5c] = fVar86 * fVar110 + pfVar3[0x5c];
            pfVar3[0x66] = fVar80 * fVar110 + pfVar3[0x66];
            pfVar3[0x67] = fVar86 * fVar110 + pfVar3[0x67];
            pfVar3[0x68] = pfVar3[0x68] + fVar72 * fVar110;
            fVar110 = afStack_128[0] * fVar106;
            pfVar3[0x4b] = pfVar3[0x4b] + fVar109 * fVar110;
            pfVar3[0x4c] = fVar91 * fVar110 + pfVar3[0x4c];
            pfVar3[0x4d] = fVar80 * fVar110 + pfVar3[0x4d];
            pfVar3[0x57] = fVar91 * fVar110 + pfVar3[0x57];
            pfVar3[0x58] = pfVar3[0x58] + fVar90 * fVar110;
            pfVar3[0x59] = fVar86 * fVar110 + pfVar3[0x59];
            pfVar3[99] = fVar80 * fVar110 + pfVar3[99];
            pfVar3[100] = fVar86 * fVar110 + pfVar3[100];
            pfVar3[0x65] = pfVar3[0x65] + fVar72 * fVar110;
            fVar106 = fStack_168 * fVar106;
            pfVar3[0x48] = pfVar3[0x48] + fVar109 * fVar106;
            pfVar3[0x54] = pfVar3[0x54] + fVar91 * fVar106;
            pfVar3[0x55] = pfVar3[0x55] + fVar90 * fVar106;
            pfVar3[0x60] = pfVar3[0x60] + fVar80 * fVar106;
            pfVar3[0x61] = pfVar3[0x61] + fVar86 * fVar106;
            pfVar3[0x62] = pfVar3[0x62] + fVar72 * fVar106;
            pfVar43[6] = pfVar43[6] + fVar102 * fVar104;
            pfVar43[7] = pfVar43[7] + fVar95 * fVar104;
            pfVar43[8] = pfVar43[8] + fVar77 * fVar104;
            fVar96 = fVar96 * fStack_1a8;
            fVar68 = fVar68 * fStack_1a8;
            fVar104 = (float)uStack_210 * fVar68;
            pfVar3[0x75] = pfVar3[0x75] + fVar109 * fVar104;
            pfVar3[0x76] = pfVar3[0x76] + fVar91 * fVar104;
            pfVar3[0x77] = fVar80 * fVar104 + pfVar3[0x77];
            pfVar3[0x81] = fVar91 * fVar104 + pfVar3[0x81];
            pfVar3[0x82] = pfVar3[0x82] + fVar90 * fVar104;
            pfVar3[0x83] = fVar86 * fVar104 + pfVar3[0x83];
            pfVar3[0x8d] = fVar80 * fVar104 + pfVar3[0x8d];
            pfVar3[0x8e] = fVar86 * fVar104 + pfVar3[0x8e];
            pfVar3[0x8f] = pfVar3[0x8f] + fVar72 * fVar104;
            fVar104 = afStack_128[0] * fVar68;
            pfVar3[0x72] = pfVar3[0x72] + fVar109 * fVar104;
            pfVar3[0x73] = fVar91 * fVar104 + pfVar3[0x73];
            pfVar3[0x74] = fVar80 * fVar104 + pfVar3[0x74];
            pfVar3[0x7e] = fVar91 * fVar104 + pfVar3[0x7e];
            pfVar3[0x7f] = pfVar3[0x7f] + fVar90 * fVar104;
            pfVar3[0x80] = fVar86 * fVar104 + pfVar3[0x80];
            pfVar3[0x8a] = fVar80 * fVar104 + pfVar3[0x8a];
            pfVar3[0x8b] = fVar86 * fVar104 + pfVar3[0x8b];
            pfVar3[0x8c] = pfVar3[0x8c] + fVar72 * fVar104;
            fVar104 = fStack_168 * fVar68;
            pfVar3[0x6f] = pfVar3[0x6f] + fVar109 * fVar104;
            pfVar3[0x70] = fVar91 * fVar104 + pfVar3[0x70];
            pfVar3[0x71] = fVar80 * fVar104 + pfVar3[0x71];
            pfVar3[0x7b] = fVar91 * fVar104 + pfVar3[0x7b];
            pfVar3[0x7c] = pfVar3[0x7c] + fVar90 * fVar104;
            pfVar3[0x7d] = fVar86 * fVar104 + pfVar3[0x7d];
            pfVar3[0x87] = fVar80 * fVar104 + pfVar3[0x87];
            pfVar3[0x88] = fVar86 * fVar104 + pfVar3[0x88];
            pfVar3[0x89] = pfVar3[0x89] + fVar72 * fVar104;
            fVar68 = fStack_1a8 * fVar68;
            pfVar3[0x6c] = pfVar3[0x6c] + fVar109 * fVar68;
            pfVar3[0x78] = pfVar3[0x78] + fVar91 * fVar68;
            pfVar3[0x79] = pfVar3[0x79] + fVar90 * fVar68;
            pfVar3[0x84] = pfVar3[0x84] + fVar80 * fVar68;
            pfVar3[0x85] = pfVar3[0x85] + fVar86 * fVar68;
            pfVar3[0x86] = pfVar3[0x86] + fVar72 * fVar68;
            pfVar43[9] = pfVar43[9] + fVar102 * fVar96;
            pfVar43[10] = pfVar43[10] + fVar95 * fVar96;
            pfVar43[0xb] = pfVar43[0xb] + fVar77 * fVar96;
            uVar47 = uVar58;
          } while (uVar58 != 4);
          uVar38 = uVar38 + 1;
          pfVar34 = pfVar34 + 3;
        } while (uVar38 != iVar6 - 3U);
        lVar39 = *(long *)(param_1 + 0x1f8);
      }
      uVar47 = (ulong)(uint)*(float *)(lVar39 + 0x10);
      uVar38 = uVar13 & 0xffffffff;
      if ((0.0 < *(float *)(lVar39 + 0x10)) && (uVar69 = *(uint *)(param_1 + 0xc), 4 < (int)uVar69))
      {
        pfVar34 = (float *)(lVar64 + (long)(int)(uVar7 * iVar66) * 0xc + 0x38);
        pfVar24 = (float *)(lVar61 + (long)(int)(uVar7 * iVar66) * 0xc + 0x38);
        lVar61 = 0x9000000000;
        uVar58 = 4;
        pfVar43 = (float *)(lVar48 + 0x38);
        do {
          fVar86 = pfVar24[-2];
          fVar80 = pfVar24[-1];
          fVar90 = *pfVar24;
          fVar102 = fVar84 + fVar83 * fVar80 + fVar86 * fVar88 + fVar90 * fVar82;
          fVar95 = *(float *)(param_1 + 0x1ec);
          pfVar3 = (float *)(lVar50 + (lVar61 >> 0x1e));
          fVar68 = fVar102 - *pfVar34;
          fVar109 = (float)uVar17 +
                    (float)uVar93 * fVar80 + SUB84(puVar12,0) * fVar86 + (float)uVar15 * fVar90;
          fVar91 = (float)((ulong)uVar17 >> 0x20) +
                   (float)((ulong)uVar93 >> 0x20) * fVar80 +
                   (float)((ulong)puVar12 >> 0x20) * fVar86 + (float)(uVar15 >> 0x20) * fVar90;
          fVar77 = fVar109 - (float)*(undefined8 *)(pfVar34 + -2);
          fVar72 = fVar91 - (float)((ulong)*(undefined8 *)(pfVar34 + -2) >> 0x20);
          fVar96 = SQRT(fVar77 * fVar77 + fVar72 * fVar72 + fVar68 * fVar68);
          fVar78 = fVar101;
          if (1e-06 <= fVar96) {
            fVar78 = fVar96;
          }
          fVar104 = fVar77 / fVar78;
          fVar106 = fVar72 / fVar78;
          fVar78 = fVar68 / fVar78;
          fVar110 = fVar104 * fVar85 * fVar95;
          fVar108 = fVar106 * fVar85 * fVar95;
          fVar111 = fVar110 * fVar106;
          *pfVar3 = *pfVar3 + fVar104 * fVar110;
          *(ulong *)(pfVar3 + 0xc) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar3 + 0xc) >> 0x20) + fVar108 * fVar106,
                        (float)*(undefined8 *)(pfVar3 + 0xc) + fVar111);
          *(ulong *)(pfVar3 + 0x18) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar3 + 0x18) >> 0x20) + fVar108 * fVar78,
                        (float)*(undefined8 *)(pfVar3 + 0x18) + fVar110 * fVar78);
          fVar102 = (fVar102 - (fVar18 + fVar81 * fVar80 + fVar86 * fVar73 + fVar90 * fVar87)) /
                    fVar95;
          fVar96 = fVar95 * fVar85 * fVar78;
          fVar109 = (fVar109 -
                    ((float)uVar16 +
                    (float)uVar92 * fVar80 + SUB84(puVar11,0) * fVar86 + fStack_308 * fVar90)) /
                    fVar95;
          fVar95 = (fVar91 - ((float)((ulong)uVar16 >> 0x20) +
                             (float)((ulong)uVar92 >> 0x20) * fVar80 +
                             (float)((ulong)puVar11 >> 0x20) * fVar86 + fStack_304 * fVar90)) /
                   fVar95;
          uVar98 = NEON_ext(CONCAT44(fVar108 * fVar106,fVar111),
                            CONCAT44(fVar106 * fVar108,fVar104 * fVar110),4,1);
          uVar97 = NEON_rev64(CONCAT44(fVar95,fVar109),4);
          pfVar3[0x1a] = fVar78 * fVar96 + pfVar3[0x1a];
          uVar94 = NEON_rev64(CONCAT44(fVar106 * fVar96,fVar104 * fVar96),4);
          uVar94 = NEON_rev64(CONCAT44((float)((ulong)uVar94 >> 0x20) * fVar102 +
                                       fVar95 * fVar104 * fVar108 +
                                       (float)((ulong)uVar97 >> 0x20) *
                                       (float)((ulong)uVar98 >> 0x20),
                                       (float)uVar94 * fVar102 +
                                       fVar109 * fVar111 + (float)uVar97 * (float)uVar98),4);
          *(ulong *)(pfVar43 + -2) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar43 + -2) >> 0x20) +
                        fVar72 * fVar85 + (float)((ulong)uVar94 >> 0x20),
                        (float)*(undefined8 *)(pfVar43 + -2) + fVar77 * fVar85 + (float)uVar94);
          fVar78 = fVar85 * fVar68 +
                   fVar102 * fVar78 * fVar96 +
                   fVar109 * fVar110 * fVar78 + fVar95 * fVar108 * fVar78 + *pfVar43;
          uVar47 = (ulong)(uint)fVar78;
          *pfVar43 = fVar78;
          uVar58 = uVar58 + 2;
          lVar61 = lVar61 + 0x4800000000;
          pfVar34 = pfVar34 + 6;
          pfVar24 = pfVar24 + 6;
          pfVar43 = pfVar43 + 6;
        } while (uVar58 < uVar69);
      }
      if (*(char *)(lVar39 + 0x2d) == '\x01') {
        lVar39 = *(long *)(param_1 + 0x2d0);
        lVar61 = *(long *)(param_1 + 0x2d8);
        if ((lVar39 != lVar61) && (4 < *(int *)(param_1 + 0xc))) {
          lVar62 = 4;
          do {
            bVar20 = lVar61 != lVar39;
            lVar61 = lVar39;
            if (bVar20) {
              lVar46 = 0;
              uVar58 = 0;
              pfVar34 = (float *)(lVar45 + lVar62 * 0xc);
              fVar72 = 0.0;
              fVar86 = 0.0;
              fVar95 = 0.0;
              fVar90 = 0.0;
              fVar77 = 0.0;
              fVar78 = 0.0;
              fVar68 = 0.0;
              do {
                uVar38 = (lStack_238 - lStack_240 >> 4) * -0x5555555555555555;
                if (uVar38 < uVar58 || uVar38 - uVar58 == 0) goto LAB_10a8f7768;
                puVar53 = (undefined8 *)(lStack_240 + lVar46);
                fVar80 = *pfVar34;
                fVar109 = pfVar34[1];
                fVar91 = pfVar34[2];
                fVar96 = *(float *)((long)puVar53 + 0x2c) +
                         fVar109 * *(float *)((long)puVar53 + 0x14) +
                         fVar80 * *(float *)(puVar53 + 1) + fVar91 * *(float *)(puVar53 + 4);
                fVar102 = (float)*(undefined8 *)((long)puVar53 + 0xc) * fVar109 +
                          (float)*puVar53 * fVar80 + (float)puVar53[3] * fVar91;
                fVar80 = (float)((ulong)*(undefined8 *)((long)puVar53 + 0xc) >> 0x20) * fVar109 +
                         (float)((ulong)*puVar53 >> 0x20) * fVar80 +
                         (float)((ulong)puVar53[3] >> 0x20) * fVar91;
                uVar38 = CONCAT44(fVar80,fVar102);
                fVar102 = (float)*(undefined8 *)((long)puVar53 + 0x24) + fVar102;
                fVar80 = (float)((ulong)*(undefined8 *)((long)puVar53 + 0x24) >> 0x20) + fVar80;
                uStack_e8 = (undefined8 *)CONCAT44(fVar80,fVar102);
                plVar21 = *(long **)(lVar39 + uVar58 * 8);
                uVar69 = *(uint *)(*(long *)(param_1 + 0x1f8) + 0x34);
                uVar47 = (ulong)uVar69;
                uStack_e0 = CONCAT44(uVar69,fVar96);
                (**(code **)(*plVar21 + 0x18))(&uStack_210,plVar21,&uStack_e8);
                if ((char)uStack_210 == '\x01') {
                  uVar38 = (lStack_250 - lStack_258 >> 4) * -0x5555555555555555;
                  if ((uVar38 < uVar58 || uVar38 - uVar58 == 0) ||
                     (uVar38 = (lStack_220 - lStack_228 >> 4) * -0x5555555555555555,
                     uVar38 < uVar58 || uVar38 - uVar58 == 0)) goto LAB_10a8f7768;
                  fVar95 = fVar95 + uStack_210._4_4_;
                  puVar53 = (undefined8 *)(lStack_258 + lVar46);
                  fVar91 = uStack_210._4_4_ * fStack_200;
                  fVar109 = uStack_210._4_4_ * fStack_208;
                  fVar104 = uStack_210._4_4_ * fStack_204;
                  fVar90 = fVar90 + *(float *)((long)puVar53 + 0x2c) +
                                    fVar104 * *(float *)((long)puVar53 + 0x14) +
                                    fVar109 * *(float *)(puVar53 + 1) +
                                    fVar91 * *(float *)(puVar53 + 4);
                  fVar72 = fVar72 + (float)*(undefined8 *)((long)puVar53 + 0x24) +
                                    (float)*(undefined8 *)((long)puVar53 + 0xc) * fVar104 +
                                    (float)*puVar53 * fVar109 + (float)puVar53[3] * fVar91;
                  fVar86 = fVar86 + (float)((ulong)*(undefined8 *)((long)puVar53 + 0x24) >> 0x20) +
                                    (float)((ulong)*(undefined8 *)((long)puVar53 + 0xc) >> 0x20) *
                                    fVar104 + (float)((ulong)*puVar53 >> 0x20) * fVar109 +
                                    (float)((ulong)puVar53[3] >> 0x20) * fVar91;
                  puVar53 = (undefined8 *)(lStack_228 + lVar46);
                  fVar104 = *(float *)(param_1 + 0x1ec);
                  uVar94 = NEON_rev64(CONCAT44((((float)((ulong)*(undefined8 *)
                                                                 ((long)puVar53 + 0x24) >> 0x20) +
                                                (float)((ulong)*(undefined8 *)((long)puVar53 + 0xc)
                                                       >> 0x20) * fVar80 +
                                                (float)((ulong)*puVar53 >> 0x20) * fVar102 +
                                                (float)((ulong)puVar53[3] >> 0x20) * fVar96) -
                                               (float)((ulong)*(undefined8 *)pfVar34 >> 0x20)) /
                                               fVar104,(((float)*(undefined8 *)
                                                                 ((long)puVar53 + 0x24) +
                                                        (float)*(undefined8 *)((long)puVar53 + 0xc)
                                                        * fVar80 + (float)*puVar53 * fVar102 +
                                                        (float)puVar53[3] * fVar96) -
                                                       (float)*(undefined8 *)pfVar34) / fVar104),4);
                  fVar109 = (float)uVar94 * uStack_210._4_4_;
                  fVar91 = (float)((ulong)uVar94 >> 0x20) * uStack_210._4_4_;
                  uVar38 = CONCAT44(fVar91,fVar109);
                  fVar80 = uStack_210._4_4_ *
                           (((*(float *)((long)puVar53 + 0x2c) +
                             *(float *)((long)puVar53 + 0x14) * fVar80 +
                             fVar102 * *(float *)(puVar53 + 1) + fVar96 * *(float *)(puVar53 + 4)) -
                            pfVar34[2]) / fVar104);
                  uVar47 = (ulong)(uint)fVar80;
                  fVar78 = fVar78 + fVar109;
                  fVar68 = fVar68 + fVar91;
                  fVar77 = fVar77 + fVar80;
                }
                uVar58 = uVar58 + 1;
                lVar61 = *(long *)(param_1 + 0x2d8);
                lVar39 = *(long *)(param_1 + 0x2d0);
                lVar46 = lVar46 + 0x30;
              } while (uVar58 < (ulong)(lVar61 - lVar39 >> 3));
              if (fVar95 != 0.0) {
                fVar102 = SQRT(fVar72 * fVar72 + fVar86 * fVar86 + fVar90 * fVar90);
                fVar80 = fVar101;
                if (1e-06 <= fVar102) {
                  fVar80 = fVar102;
                }
                fVar102 = fVar90 / fVar80;
                fVar78 = fVar78 / fVar95;
                fVar68 = fVar68 / fVar95;
                fVar77 = fVar77 / fVar95;
                fVar109 = *(float *)(param_1 + 0x1ec);
                fVar96 = *(float *)(*(long *)(param_1 + 0x1f8) + 0x38) + 1.0;
                fVar104 = fVar76 * fVar102 * fVar109 * fVar96;
                puVar53 = (undefined8 *)(lVar48 + lVar62 * 0xc);
                pfVar34 = (float *)(lVar50 + ((long)((ulong)(uint)((int)lVar62 * 9) << 0x22) >> 0x1e
                                             ));
                fVar95 = fVar72 / fVar80;
                fVar80 = fVar86 / fVar80;
                fVar91 = fVar95 * fVar76 * fVar109 * fVar96;
                fVar96 = fVar80 * fVar76 * fVar109 * fVar96;
                *pfVar34 = *pfVar34 + fVar95 * fVar91;
                *(ulong *)(pfVar34 + 0xc) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar34 + 0xc) >> 0x20) +
                              fVar96 * fVar80,
                              (float)*(undefined8 *)(pfVar34 + 0xc) + fVar91 * fVar80);
                *(ulong *)(pfVar34 + 0x18) =
                     CONCAT44(fVar96 * fVar102 +
                              (float)((ulong)*(undefined8 *)(pfVar34 + 0x18) >> 0x20),
                              fVar91 * fVar102 + (float)*(undefined8 *)(pfVar34 + 0x18));
                pfVar34[0x1a] = fVar102 * fVar104 + pfVar34[0x1a];
                uVar94 = NEON_rev64(CONCAT44(fVar68,fVar78),4);
                *puVar53 = CONCAT44(fVar86 * fVar76 +
                                    fVar80 * fVar104 * fVar77 +
                                    fVar68 * fVar91 * fVar80 +
                                    (float)((ulong)uVar94 >> 0x20) * fVar96 * fVar80 +
                                    (float)((ulong)*puVar53 >> 0x20),
                                    fVar72 * fVar76 +
                                    fVar95 * fVar104 * fVar77 +
                                    fVar78 * fVar95 * fVar96 + (float)uVar94 * fVar95 * fVar91 +
                                    (float)*puVar53);
                uVar38 = (ulong)(uint)*(float *)(puVar53 + 1);
                fVar78 = fVar76 * fVar90 +
                         fVar77 * fVar102 * fVar104 +
                         fVar91 * fVar102 * fVar68 + fVar78 * fVar96 * fVar102 +
                         *(float *)(puVar53 + 1);
                uVar47 = (ulong)(uint)fVar78;
                *(float *)(puVar53 + 1) = fVar78;
              }
            }
            lVar62 = lVar62 + 2;
          } while (lVar62 < *(int *)(param_1 + 0xc));
        }
      }
      lVar61 = *(long *)(param_1 + 0x1f8);
      if (*(char *)(lVar61 + 0x3c) == '\x01') {
        uVar69 = *(uint *)(param_1 + 0xc);
        if (4 < (int)uVar69) {
          iVar32 = (int)(uVar69 - 3) / 2;
          lVar39 = *(long *)(param_1 + 0x2740);
          uVar30 = (*(long *)(param_1 + 0x2748) - lVar39 >> 3) * -0x5555555555555555;
          uVar58 = 4;
          do {
            iVar1 = iVar32 * iVar66 + ((int)uVar58 + -4 >> 1);
            if (uVar30 < (ulong)(long)iVar1 || uVar30 - (long)iVar1 == 0) goto LAB_10a8f7768;
            plVar21 = (long *)(lVar39 + (long)iVar1 * 0x18);
            piVar55 = (int *)*plVar21;
            lVar62 = plVar21[1] - (long)piVar55;
            if (lVar62 != 0) {
              fVar78 = *(float *)(param_1 + 0x1ec) * *(float *)(lVar61 + 0x40);
              uVar47 = (ulong)(uint)fVar78;
              puVar53 = (undefined8 *)(lVar45 + uVar58 * 0xc);
              lVar62 = lVar62 >> 2;
              lVar46 = *(long *)(param_1 + 0x48);
              uVar22 = (*(long *)(param_1 + 0x50) - lVar46 >> 2) * -0x5555555555555555;
              pfVar24 = (float *)(lVar48 + uVar58 * 0xc);
              pfVar34 = (float *)(lVar50 + ((long)((ulong)(uint)((int)uVar58 * 9) << 0x22) >> 0x1e))
              ;
              do {
                iVar1 = 0;
                if (iVar32 != 0) {
                  iVar1 = *piVar55 / iVar32;
                }
                iVar1 = iVar1 * uVar69 + (*piVar55 - iVar1 * iVar32) * 2 + 4;
                if (uVar22 < (ulong)(long)iVar1 || uVar22 - (long)iVar1 == 0) goto LAB_10a8f7768;
                uVar38 = (ulong)iVar1;
                uVar31 = (*(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78) >> 2) *
                         -0x5555555555555555;
                if (uVar31 < uVar38 || uVar31 - uVar38 == 0) goto LAB_10a8f7768;
                puVar51 = (undefined8 *)(lVar46 + uVar38 * 0xc);
                pfVar43 = (float *)(*(long *)(param_1 + 0x78) + uVar38 * 0xc);
                fVar77 = *(float *)(puVar51 + 1) - *(float *)(puVar53 + 1);
                fVar86 = *(float *)(param_1 + 0x1ec);
                fVar90 = *(float *)(lVar61 + 0x48) + 1.0;
                uVar94 = *puVar51;
                uVar97 = *puVar53;
                fVar95 = (float)uVar94 - (float)uVar97;
                fVar80 = (float)((ulong)uVar94 >> 0x20) - (float)((ulong)uVar97 >> 0x20);
                fVar72 = SQRT(fVar95 * fVar95 + fVar80 * fVar80 + fVar77 * fVar77);
                fVar68 = fVar101;
                if (1e-06 <= fVar72) {
                  fVar68 = fVar72;
                }
                fVar95 = fVar95 / fVar68;
                fVar80 = fVar80 / fVar68;
                fVar77 = fVar77 / fVar68;
                fVar72 = fVar72 - *(float *)(lVar61 + 0x44);
                fVar68 = fVar95 * fVar78 * fVar86 * fVar90;
                fVar102 = fVar80 * fVar78 * fVar86 * fVar90;
                fVar90 = fVar90 * fVar86 * fVar78 * fVar77;
                *pfVar34 = *pfVar34 + fVar95 * fVar68;
                *(ulong *)(pfVar34 + 0xc) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar34 + 0xc) >> 0x20) +
                              fVar102 * fVar80,
                              (float)*(undefined8 *)(pfVar34 + 0xc) + fVar68 * fVar80);
                *(ulong *)(pfVar34 + 0x18) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar34 + 0x18) >> 0x20) +
                              fVar102 * fVar77,
                              (float)*(undefined8 *)(pfVar34 + 0x18) + fVar68 * fVar77);
                pfVar34[0x1a] = fVar77 * fVar90 + pfVar34[0x1a];
                *pfVar24 = *pfVar24 +
                           fVar72 * fVar95 * fVar78 +
                           *pfVar43 * fVar95 * fVar68 + fVar95 * fVar102 * pfVar43[1] +
                           fVar90 * fVar95 * pfVar43[2];
                pfVar24[1] = pfVar24[1] +
                             fVar72 * fVar80 * fVar78 +
                             *pfVar43 * fVar68 * fVar80 + pfVar43[1] * fVar102 * fVar80 +
                             fVar90 * fVar80 * pfVar43[2];
                fVar68 = pfVar24[2] +
                         fVar72 * fVar78 * fVar77 +
                         *pfVar43 * fVar68 * fVar77 + pfVar43[1] * fVar102 * fVar77 +
                         fVar77 * fVar90 * pfVar43[2];
                uVar38 = (ulong)(uint)fVar68;
                pfVar24[2] = fVar68;
                lVar62 = lVar62 + -1;
                piVar55 = piVar55 + 1;
              } while (lVar62 != 0);
            }
            uVar58 = uVar58 + 2;
          } while (uVar58 < uVar69);
        }
      }
      if ((*(char *)(lVar61 + 0x4c) == '\x01') && (4 < (int)*(uint *)(param_1 + 0xc))) {
        lVar39 = (ulong)*(uint *)(param_1 + 0xc) - 4;
        lVar61 = lVar64 + (long)(int)(uVar7 * iVar66) * 0xc + 0x30;
        pfVar34 = (float *)(lVar48 + 0x38);
        do {
          fVar68 = (float)uVar38;
          fVar78 = (float)uVar47;
          FUN_10a8f7f6c(param_1 + 0x2e8,lVar61);
          fVar77 = *(float *)(param_1 + 0x1ec);
          uVar38 = *(ulong *)(pfVar34 + -2);
          *(ulong *)(pfVar34 + -2) =
               CONCAT44((float)(uVar38 >> 0x20) + fVar68 * fVar77,(float)uVar38 + fVar78 * fVar77);
          fVar78 = fVar77 * extraout_s2_00 + *pfVar34;
          uVar47 = (ulong)(uint)fVar78;
          *pfVar34 = fVar78;
          lVar61 = lVar61 + 0xc;
          lVar39 = lVar39 + -1;
          pfVar34 = pfVar34 + 3;
        } while (lVar39 != 0);
      }
      lVar61 = *(long *)(param_1 + 0xe8);
      uStack_e8 = (undefined8 *)0x0;
      uStack_e0 = 0;
      puVar53 = uStack_e8;
      if (uVar8 != 0) {
        if (iVar6 < 4) {
          puVar53 = (undefined8 *)0x0;
        }
        else {
          puVar53 = puVar44;
          _malloc();
          if (puVar53 == (undefined8 *)0x0) {
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
LAB_10a8f7768:
                    /* WARNING: Does not return */
            pcVar19 = (code *)SoftwareBreakpoint(1,0x10a8f776c);
            (*pcVar19)();
          }
        }
      }
      uStack_e8 = puVar53;
      if (3 < iVar6) {
        uVar38 = 0;
        iVar32 = 0;
        iVar1 = *(int *)(param_1 + 0xc);
        lVar64 = lVar50 + 0x1c4;
        do {
          iVar26 = (int)((uVar38 & 0xffffffff) / 3);
          iVar9 = (iVar1 + -4) - iVar26;
          iVar57 = iVar9;
          if (iVar9 < 2) {
            iVar57 = 1;
          }
          if (2 < iVar57) {
            iVar57 = 3;
          }
          fVar78 = *(float *)(lVar48 + uVar38 * 4 + 0x24);
          *(float *)((long)uStack_e8 + uVar38 * 4) = fVar78;
          if (uVar38 < 9) {
            uVar58 = (uVar38 & 0xff) / 3;
            uVar47 = uVar58 - 1;
            pfVar34 = (float *)(lVar5 + 0x20 +
                               uVar58 * -0xc +
                               ((long)(int)(uVar7 * iVar66) + (uVar38 & 0xffffffff) / 3) * 0xc);
            lVar39 = lVar64;
            do {
              pfVar24 = (float *)(lVar39 + uVar58 * 0xc);
              fVar78 = fVar78 - (pfVar34[-1] * pfVar24[-1] + pfVar24[-2] * pfVar34[-2] +
                                *pfVar24 * *pfVar34);
              *(float *)((long)uStack_e8 + uVar38 * 4) = fVar78;
              uVar47 = uVar47 + 1;
              lVar39 = lVar39 + 0xc;
              pfVar34 = pfVar34 + -3;
            } while (uVar47 < 2);
          }
          iVar27 = (int)((uVar38 & 0xffffffff) / 3);
          uVar69 = (int)uVar38 - (iVar27 + iVar26 * 2);
          iVar26 = (iVar27 + 3) * 0x24;
          puVar23 = (undefined4 *)(lVar50 + (long)iVar26 * 4);
          if (uVar69 == 1) {
LAB_10a8f71f4:
            *(undefined4 *)(lVar61 + (long)iVar32 * 4) = puVar23[(ulong)uVar69 + 0xc];
            iVar32 = iVar32 + 1;
          }
          else if (uVar69 == 0) {
            *(undefined4 *)(lVar61 + (long)iVar32 * 4) = *puVar23;
            iVar32 = iVar32 + 1;
            goto LAB_10a8f71f4;
          }
          *(undefined4 *)(lVar61 + (long)iVar32 * 4) = puVar23[uVar69 | 0x18];
          iVar27 = iVar32 + 1;
          if (0 < iVar9) {
            lVar39 = (long)iVar26 * 4;
            puVar23 = (undefined4 *)(lVar61 + 0xc + (long)iVar32 * 4);
            puVar25 = (undefined4 *)(lVar50 + 0x9c + lVar39 + (ulong)(uVar69 | 0x18) * 4);
            puVar60 = (undefined4 *)
                      (lVar50 + 0xcc +
                      lVar39 + (uVar38 & 0xffffffff) * 4 + ((uVar38 & 0xffffffff) / 3) * -0xc);
            do {
              *(undefined4 *)(lVar61 + (long)iVar27 * 4) = puVar60[-0xc];
              puVar23[-1] = *puVar60;
              *puVar23 = *puVar25;
              iVar27 = iVar27 + 3;
              iVar57 = iVar57 + -1;
              puVar23 = puVar23 + 3;
              puVar25 = puVar25 + 0x27;
              puVar60 = puVar60 + 0x27;
            } while (iVar57 != 0);
          }
          iVar32 = iVar27;
          uVar38 = uVar38 + 1;
          lVar64 = lVar64 + 0x30;
        } while (uVar38 != uVar4);
      }
      uStack_210 = (undefined **)((ulong)uStack_210 & 0xffffffffffffff00);
      fStack_200 = 0.0;
      fStack_1fc = 0.0;
      fStack_208 = 0.0;
      fStack_204 = 0.0;
      uStack_1f0 = 0;
      uStack_1f8 = 0;
      uStack_1f4 = 0;
      uStack_1e0 = 0;
      uStack_1dc = 0;
      uStack_1e8 = 0;
      uStack_1d0 = 0;
      uStack_1cc = 0;
      uStack_1d8 = 0;
      uStack_1d4 = 0;
      uStack_e0 = (long)(int)uVar8;
      FUN_10a8f4b10(&uStack_210,*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 200));
      FUN_10a910d40(param_1 + 0xc0,&uStack_210,*(undefined8 *)(param_1 + 400));
      FUN_10a910f70(param_1 + 0x108,&uStack_210);
      _free(CONCAT44(uStack_1f4,uStack_1f8));
      _free(uStack_1f0);
      func_0x00010a910584(&uStack_1e8);
      uStack_210 = (undefined **)0x0;
      fStack_208 = 0.0;
      fStack_204 = 0.0;
      func_0x0001093c61bc(&uStack_210,*(undefined8 *)(param_1 + 0x120),1);
      if (CONCAT44(fStack_204,fStack_208) != *(long *)(param_1 + 0x120)) {
        func_0x0001093c61bc(&uStack_210,*(long *)(param_1 + 0x120),1);
      }
      puVar53 = uStack_e8;
      if (*(int *)(param_1 + 0x10c) == 0) {
        lVar61 = *(long *)(param_1 + 0x198);
        if (lVar61 < 1) {
          uVar38 = uStack_e0;
          if (CONCAT44(fStack_204,fStack_208) != uStack_e0) {
            func_0x0001093c61bc(&uStack_210,uStack_e0,1);
            uVar38 = CONCAT44(fStack_204,fStack_208);
          }
          uVar47 = uVar38 + 3;
          if (-1 < (long)uVar38) {
            uVar47 = uVar38;
          }
          if (3 < (long)uVar38) {
            lVar61 = 0;
            ppuVar36 = uStack_210;
            puVar51 = puVar53;
            do {
              puVar70 = (undefined *)*puVar51;
              ppuVar36[1] = (undefined *)puVar51[1];
              *ppuVar36 = puVar70;
              lVar61 = lVar61 + 4;
              ppuVar36 = ppuVar36 + 2;
              puVar51 = puVar51 + 2;
            } while (lVar61 < (long)(uVar47 & 0xfffffffffffffffc));
          }
          lVar61 = (long)uVar38 % 4;
          if (lVar61 != 0 && lVar61 < 0 == SBORROW8(uVar38,uVar47 & 0xfffffffffffffffc)) {
            ppuVar36 = uStack_210 + ((long)uVar47 >> 2) * 2;
            puVar53 = puVar53 + ((long)uVar47 >> 2) * 2;
            do {
              *(undefined4 *)ppuVar36 = *(undefined4 *)puVar53;
              lVar61 = lVar61 + -1;
              ppuVar36 = (undefined **)((long)ppuVar36 + 4);
              puVar53 = (undefined8 *)((long)puVar53 + 4);
            } while (lVar61 != 0);
          }
        }
        else {
          if (CONCAT44(fStack_204,fStack_208) != lVar61) {
            func_0x0001093c61bc(&uStack_210,lVar61,1);
          }
          func_0x00010946c680(&uStack_210,param_1 + 400,&uStack_e8);
        }
        lVar61 = *(long *)(param_1 + 0x138);
        if (lVar61 == 0) {
          lVar64 = *(long *)(param_1 + 0x120);
          iVar66 = (*(int **)(param_1 + 0x130))[lVar64] - **(int **)(param_1 + 0x130);
LAB_10a8f740c:
          if ((0 < iVar66) && (0 < lVar64)) {
            lVar39 = 0;
            lVar62 = *(long *)(param_1 + 0x140);
            lVar48 = *(long *)(param_1 + 0x148);
            lVar50 = *(long *)(param_1 + 0x130);
            do {
              if (*(float *)((long)uStack_210 + lVar39 * 4) != 0.0) {
                piVar55 = (int *)(lVar50 + lVar39 * 4);
                lVar45 = (long)*piVar55;
                if (lVar61 == 0) {
                  lVar46 = (long)piVar55[1];
                }
                else {
                  lVar46 = *(int *)(lVar61 + lVar39 * 4) + lVar45;
                }
                if (lVar45 < lVar46) {
                  lVar56 = -lVar45;
                  piVar55 = (int *)(lVar48 + lVar45 * 4);
                  do {
                    if (lVar39 <= *piVar55) {
                      lVar45 = (ulong)(lVar39 == *piVar55) - lVar56;
                      goto LAB_10a8f748c;
                    }
                    lVar56 = lVar56 + -1;
                    piVar55 = piVar55 + 1;
                  } while (-lVar56 != lVar46);
                }
                else {
LAB_10a8f748c:
                  lVar56 = lVar46 - lVar45;
                  if (lVar56 != 0 && lVar45 <= lVar46) {
                    pfVar34 = (float *)(lVar62 + lVar45 * 4);
                    piVar55 = (int *)(lVar48 + lVar45 * 4);
                    do {
                      *(float *)((long)uStack_210 + (long)*piVar55 * 4) =
                           *(float *)((long)uStack_210 + (long)*piVar55 * 4) -
                           *pfVar34 * *(float *)((long)uStack_210 + lVar39 * 4);
                      lVar56 = lVar56 + -1;
                      pfVar34 = pfVar34 + 1;
                      piVar55 = piVar55 + 1;
                    } while (lVar56 != 0);
                  }
                }
              }
              lVar39 = lVar39 + 1;
            } while (lVar39 != lVar64);
          }
        }
        else {
          lVar64 = *(long *)(param_1 + 0x120);
          if (lVar64 != 0) {
            lVar39 = lVar61;
            FUN_10a9109f4(lVar61,lVar61,lVar64);
            iVar66 = (int)lVar39;
            goto LAB_10a8f740c;
          }
        }
        ppuVar36 = uStack_210;
        uVar38 = *(ulong *)(param_1 + 0x168);
        if (0 < (long)uVar38) {
          puVar53 = *(undefined8 **)(param_1 + 0x160);
          if (CONCAT44(fStack_204,fStack_208) != uVar38) {
            func_0x0001093c61bc(&uStack_210,uVar38,1);
            uVar38 = CONCAT44(fStack_204,fStack_208);
          }
          uVar47 = uVar38 + 3;
          if (-1 < (long)uVar38) {
            uVar47 = uVar38;
          }
          if (3 < (long)uVar38) {
            lVar61 = 0;
            ppuVar37 = uStack_210;
            ppuVar52 = ppuVar36;
            puVar51 = puVar53;
            do {
              puVar70 = *ppuVar52;
              uVar94 = *puVar51;
              auVar79 = NEON_fmov(0x3f800000,4);
              ppuVar37[1] = (undefined *)
                            CONCAT44((float)((ulong)ppuVar52[1] >> 0x20) *
                                     (auVar79._12_4_ / (float)((ulong)puVar51[1] >> 0x20)),
                                     SUB84(ppuVar52[1],0) * (auVar79._8_4_ / (float)puVar51[1]));
              *ppuVar37 = (undefined *)
                          CONCAT44((float)((ulong)puVar70 >> 0x20) *
                                   (auVar79._4_4_ / (float)((ulong)uVar94 >> 0x20)),
                                   SUB84(puVar70,0) * (auVar79._0_4_ / (float)uVar94));
              lVar61 = lVar61 + 4;
              ppuVar37 = ppuVar37 + 2;
              ppuVar52 = ppuVar52 + 2;
              puVar51 = puVar51 + 2;
            } while (lVar61 < (long)(uVar47 & 0xfffffffffffffffc));
          }
          lVar61 = (long)uVar38 % 4;
          if (lVar61 != 0 && lVar61 < 0 == SBORROW8(uVar38,uVar47 & 0xfffffffffffffffc)) {
            lVar64 = (long)uVar47 >> 2;
            ppuVar37 = uStack_210 + lVar64 * 2;
            ppuVar36 = ppuVar36 + lVar64 * 2;
            pfVar34 = (float *)(puVar53 + lVar64 * 2);
            do {
              *(float *)ppuVar37 = (1.0 / *pfVar34) * *(float *)ppuVar36;
              lVar61 = lVar61 + -1;
              ppuVar37 = (undefined **)((long)ppuVar37 + 4);
              ppuVar36 = (undefined **)((long)ppuVar36 + 4);
              pfVar34 = pfVar34 + 1;
            } while (lVar61 != 0);
          }
        }
        lVar61 = *(long *)(param_1 + 0x138);
        if (lVar61 == 0) {
          lVar64 = *(long *)(param_1 + 0x120);
          iVar66 = (*(int **)(param_1 + 0x130))[lVar64] - **(int **)(param_1 + 0x130);
LAB_10a8f75b4:
          if ((0 < iVar66) && (0 < lVar64)) {
            lVar39 = *(long *)(param_1 + 0x140);
            lVar62 = *(long *)(param_1 + 0x148);
            lVar48 = *(long *)(param_1 + 0x130);
            do {
              lVar45 = lVar64 + -1;
              piVar55 = (int *)(lVar48 + lVar45 * 4);
              lVar50 = (long)*piVar55;
              if (lVar61 == 0) {
                lVar46 = (long)piVar55[1];
              }
              else {
                lVar46 = *(int *)(lVar61 + lVar45 * 4) + lVar50;
              }
              fVar78 = *(float *)((long)uStack_210 + lVar45 * 4);
              if (lVar50 < lVar46) {
                lVar56 = -lVar50;
                piVar55 = (int *)(lVar62 + lVar50 * 4);
                do {
                  if (lVar45 <= *piVar55) {
                    lVar50 = (ulong)(lVar45 == *piVar55) - lVar56;
                    goto LAB_10a8f7630;
                  }
                  lVar56 = lVar56 + -1;
                  piVar55 = piVar55 + 1;
                } while (-lVar56 != lVar46);
              }
              else {
LAB_10a8f7630:
                lVar56 = lVar46 - lVar50;
                if (lVar56 != 0 && lVar50 <= lVar46) {
                  pfVar34 = (float *)(lVar39 + lVar50 * 4);
                  piVar55 = (int *)(lVar62 + lVar50 * 4);
                  do {
                    fVar78 = fVar78 - *(float *)((long)uStack_210 + (long)*piVar55 * 4) * *pfVar34;
                    lVar56 = lVar56 + -1;
                    pfVar34 = pfVar34 + 1;
                    piVar55 = piVar55 + 1;
                  } while (lVar56 != 0);
                }
              }
              *(float *)((long)uStack_210 + lVar45 * 4) = fVar78;
              bVar20 = 1 < lVar64;
              lVar64 = lVar45;
            } while (bVar20);
          }
        }
        else {
          lVar64 = *(long *)(param_1 + 0x120);
          if (lVar64 != 0) {
            lVar39 = lVar61;
            FUN_10a9109f4(lVar61,lVar61,lVar64);
            iVar66 = (int)lVar39;
            goto LAB_10a8f75b4;
          }
        }
        if (0 < *(long *)(param_1 + 0x198)) {
          if (CONCAT44(fStack_204,fStack_208) != *(long *)(param_1 + 0x1a8)) {
            func_0x0001093c61bc(&uStack_210,*(long *)(param_1 + 0x1a8),1);
          }
          func_0x00010946c680(&uStack_210,param_1 + 0x1a0,&uStack_210);
        }
      }
      _memcpy(lVar5 + (long)iVar49 * 0xc + 0x24,uStack_210,puVar44);
      _free(uStack_210);
      _free(uStack_e8);
      lVar33 = lVar33 + 1;
      uVar63 = (ulong)((int)uVar63 + (iVar6 - 3U) * 4);
    } while (lVar33 < *(int *)(param_1 + 8));
  }
  if (lStack_258 != 0) {
    lStack_250 = lStack_258;
    __ZdlPv();
  }
  if (lStack_240 != 0) {
    lStack_238 = lStack_240;
    __ZdlPv();
  }
  if (lStack_228 != 0) {
    lStack_220 = lStack_228;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a8f7810; end: 10a8f7adf;  */

void FUN_10a8f7810(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  
  if (0 < *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8)) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      uVar7 = (*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2) * -0x5555555555555555;
      if (((uVar7 < uVar6 || uVar7 - uVar6 == 0) ||
          (uVar7 = (*(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60) >> 2) *
                   -0x5555555555555555, uVar7 < uVar6 || uVar7 - uVar6 == 0)) ||
         (uVar7 = (*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30) >> 2) * -0x5555555555555555
         , uVar7 < uVar6 || uVar7 - uVar6 == 0)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8f78d0);
        (*pcVar4)();
      }
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x48) + lVar5);
      fVar8 = *(float *)(puVar1 + 1);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar5);
      fVar9 = *(float *)(puVar2 + 1);
      fVar11 = *(float *)(param_1 + 0x1ec);
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar5);
      uVar10 = *puVar1;
      uVar12 = *puVar2;
      *puVar3 = CONCAT44((float)((ulong)uVar10 >> 0x20) + (float)((ulong)uVar12 >> 0x20) * fVar11,
                         (float)uVar10 + (float)uVar12 * fVar11);
      *(float *)(puVar3 + 1) = fVar8 + fVar9 * fVar11;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0xc;
    } while ((long)uVar6 < (long)*(int *)(param_1 + 0xc) * (long)*(int *)(param_1 + 8));
  }
  return;
}



/* Entry: 10a8f7ae0; end: 10a8f7b53;  */

void FUN_10a8f7ae0(long param_1)

{
  code *pcVar1;
  
  if ((*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) &&
     (*(long *)(param_1 + 0x38) != *(long *)(param_1 + 0x30))) {
    _memcpy(*(long *)(param_1 + 0x48),*(long *)(param_1 + 0x30),
            (long)*(int *)(param_1 + 8) * (long)*(int *)(param_1 + 0xc) * 0xc);
    if ((*(long *)(param_1 + 0x80) != *(long *)(param_1 + 0x78)) &&
       (*(long *)(param_1 + 0x68) != *(long *)(param_1 + 0x60))) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (*(long *)(param_1 + 0x78),*(long *)(param_1 + 0x60),
                 (long)*(int *)(param_1 + 8) * (long)*(int *)(param_1 + 0xc) * 0xc);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8f7b54);
  (*pcVar1)();
}



/* Entry: 10a8f7b54; end: 10a8f7cff;  */

void FUN_10a8f7b54(undefined8 *param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  undefined4 uStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  undefined4 uStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  undefined8 uStack_144;
  undefined8 uStack_13c;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined8 uStack_124;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  float fStack_f8;
  float fStack_f4;
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [64];
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  uStack_130 = 0x3f800000;
  uStack_124 = 0;
  uStack_12c = 0;
  uStack_11c = 0x3f800000;
  uStack_118 = 0;
  uStack_110 = 0;
  fVar1 = *(float *)(param_2 + 0x54);
  fVar2 = *(float *)(param_2 + 0x50) * 0.0;
  fVar3 = (float)*(undefined8 *)(param_2 + 0x48);
  fVar4 = fVar3 * 0.0;
  fVar7 = (float)((ulong)*(undefined8 *)(param_2 + 0x48) >> 0x20);
  fVar5 = fVar7 * 0.0;
  uVar6 = NEON_rev64(CONCAT44(fVar5,fVar4),4);
  fVar4 = fVar4 + fVar5;
  uStack_100 = CONCAT44(fVar7 + (float)((ulong)uVar6 >> 0x20) + fVar2 + 0.0,
                        fVar3 + (float)uVar6 + fVar2 + 0.0);
  fStack_f8 = *(float *)(param_2 + 0x50) + fVar4 + 0.0;
  fStack_f4 = fVar4 + fVar2 + 1.0;
  uStack_108 = 0x3f800000;
  fVar2 = *(float *)(param_2 + 0x58);
  fVar3 = *(float *)(param_2 + 0x5c);
  fVar7 = *(float *)(param_2 + 0x60);
  fStack_170 = (fVar2 * fVar2 + fVar3 * fVar3) * -2.0 + 1.0;
  fStack_16c = fVar1 * fVar2 + fVar3 * fVar7;
  fStack_16c = fStack_16c + fStack_16c;
  fStack_168 = fVar1 * fVar3 - fVar2 * fVar7;
  fStack_168 = fStack_168 + fStack_168;
  fStack_160 = fVar1 * fVar2 - fVar3 * fVar7;
  fStack_160 = fStack_160 + fStack_160;
  fStack_15c = (fVar1 * fVar1 + fVar3 * fVar3) * -2.0 + 1.0;
  fStack_158 = fVar2 * fVar3 + fVar1 * fVar7;
  fStack_158 = fStack_158 + fStack_158;
  fStack_150 = fVar1 * fVar3 + fVar2 * fVar7;
  fStack_150 = fStack_150 + fStack_150;
  fStack_14c = fVar2 * fVar3 - fVar1 * fVar7;
  fStack_14c = fStack_14c + fStack_14c;
  uStack_164 = 0;
  uStack_154 = 0;
  fStack_148 = (fVar1 * fVar1 + fVar2 * fVar2) * -2.0 + 1.0;
  uStack_13c = 0;
  uStack_144 = 0;
  uStack_134 = 0x3f800000;
  func_0x000109519fd0(auStack_f0,&uStack_130,&fStack_170);
  func_0x000109519fd0(auStack_b0,auStack_f0,param_2 + 8);
  func_0x0001094f5708(&uStack_70,auStack_b0);
  *param_1 = uStack_70;
  *(undefined4 *)(param_1 + 1) = uStack_68;
  *(undefined8 *)((long)param_1 + 0xc) = uStack_60;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_58;
  param_1[3] = uStack_50;
  *(undefined4 *)(param_1 + 4) = uStack_48;
  *(undefined8 *)((long)param_1 + 0x24) = uStack_40;
  *(undefined4 *)((long)param_1 + 0x2c) = uStack_38;
  return;
}



/* Entry: 10a8f7d00; end: 10a8f7f6b;  */

void FUN_10a8f7d00(float param_1,float *param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar3 = 0;
  fVar10 = *param_2;
  *param_2 = param_1 + fVar10;
  fVar10 = (param_1 + fVar10) * param_2[2];
  pfVar2 = param_2 + 0x187;
  do {
    puVar1 = (undefined8 *)((long)param_2 + lVar3 + 0xa1c);
    uVar8 = puVar1[1];
    uVar5 = *puVar1;
    fVar4 = (float)uVar5 * fVar10;
    fVar6 = (float)((ulong)uVar5 >> 0x20) * fVar10;
    fVar7 = (float)uVar8 * fVar10;
    fVar9 = (float)((ulong)uVar8 >> 0x20) * fVar10;
    fVar11 = fVar10;
    ___sincosf_stret();
    fVar12 = fVar11;
    ___sincosf_stret();
    fVar13 = fVar12;
    ___sincosf_stret();
    fVar14 = fVar13;
    ___sincosf_stret();
    pfVar2[-0x100] = fVar4 * pfVar2[1] + *pfVar2 * fVar12;
    pfVar2[-0xff] = *pfVar2 * -fVar4 + pfVar2[1] * fVar12;
    pfVar2[-0xfe] = fVar6 * pfVar2[3] + pfVar2[2] * fVar11;
    pfVar2[-0xfd] = pfVar2[2] * -fVar6 + pfVar2[3] * fVar11;
    pfVar2[-0xfc] = fVar7 * pfVar2[5] + pfVar2[4] * fVar13;
    pfVar2[-0xfb] = pfVar2[4] * -fVar7 + pfVar2[5] * fVar13;
    pfVar2[-0xfa] = fVar9 * pfVar2[7] + pfVar2[6] * fVar14;
    pfVar2[-0xf9] = pfVar2[6] * -fVar9 + pfVar2[7] * fVar14;
    lVar3 = lVar3 + 0x10;
    pfVar2 = pfVar2 + 8;
  } while (lVar3 != 0x200);
  lVar3 = 0;
  pfVar2 = param_2 + 0x387;
  do {
    puVar1 = (undefined8 *)((long)param_2 + lVar3 + 0x161c);
    uVar8 = puVar1[1];
    uVar5 = *puVar1;
    fVar4 = (float)uVar5 * fVar10;
    fVar6 = (float)((ulong)uVar5 >> 0x20) * fVar10;
    fVar7 = (float)uVar8 * fVar10;
    fVar9 = (float)((ulong)uVar8 >> 0x20) * fVar10;
    fVar11 = fVar10;
    ___sincosf_stret();
    fVar12 = fVar11;
    ___sincosf_stret();
    fVar13 = fVar12;
    ___sincosf_stret();
    fVar14 = fVar13;
    ___sincosf_stret();
    *pfVar2 = fVar4 * pfVar2[0x101] + pfVar2[0x100] * fVar12;
    pfVar2[1] = pfVar2[0x100] * -fVar4 + pfVar2[0x101] * fVar12;
    pfVar2[2] = fVar6 * pfVar2[0x103] + pfVar2[0x102] * fVar11;
    pfVar2[3] = pfVar2[0x102] * -fVar6 + pfVar2[0x103] * fVar11;
    pfVar2[4] = fVar7 * pfVar2[0x105] + pfVar2[0x104] * fVar13;
    pfVar2[5] = pfVar2[0x104] * -fVar7 + pfVar2[0x105] * fVar13;
    pfVar2[6] = fVar9 * pfVar2[0x107] + pfVar2[0x106] * fVar14;
    pfVar2[7] = pfVar2[0x106] * -fVar9 + pfVar2[0x107] * fVar14;
    pfVar2 = pfVar2 + 8;
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x200);
  lVar3 = 0;
  pfVar2 = param_2 + 0x687;
  do {
    puVar1 = (undefined8 *)((long)param_2 + lVar3 + 0x221c);
    uVar8 = puVar1[1];
    uVar5 = *puVar1;
    fVar4 = (float)uVar5 * fVar10;
    fVar6 = (float)((ulong)uVar5 >> 0x20) * fVar10;
    fVar7 = (float)uVar8 * fVar10;
    fVar9 = (float)((ulong)uVar8 >> 0x20) * fVar10;
    fVar11 = fVar10;
    ___sincosf_stret();
    fVar12 = fVar11;
    ___sincosf_stret();
    fVar13 = fVar12;
    ___sincosf_stret();
    fVar14 = fVar13;
    ___sincosf_stret();
    *pfVar2 = fVar4 * pfVar2[0x101] + pfVar2[0x100] * fVar12;
    pfVar2[1] = pfVar2[0x100] * -fVar4 + pfVar2[0x101] * fVar12;
    pfVar2[2] = fVar6 * pfVar2[0x103] + pfVar2[0x102] * fVar11;
    pfVar2[3] = pfVar2[0x102] * -fVar6 + pfVar2[0x103] * fVar11;
    pfVar2[4] = fVar7 * pfVar2[0x105] + pfVar2[0x104] * fVar13;
    pfVar2[5] = pfVar2[0x104] * -fVar7 + pfVar2[0x105] * fVar13;
    pfVar2[6] = fVar9 * pfVar2[0x107] + pfVar2[0x106] * fVar14;
    pfVar2[7] = pfVar2[0x106] * -fVar9 + pfVar2[0x107] * fVar14;
    pfVar2 = pfVar2 + 8;
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x200);
  return;
}



/* Entry: 10a8f7f6c; end: 10a8f820f;  */

float FUN_10a8f7f6c(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
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
  float fVar13;
  float fVar14;
  
  fVar1 = *(float *)(param_1 + 4);
  fVar9 = fVar1 * *param_2;
  fVar12 = fVar1 * param_2[1];
  fVar1 = fVar1 * param_2[2];
  fVar13 = fVar9 + 0.0001;
  fVar14 = fVar12 + 0.0001;
  fVar7 = fVar1 + 0.0001;
  fVar2 = fVar9 - (float)(int)fVar9;
  fVar11 = fVar2 * fVar2 * fVar2 * (10.0 - (15.0 - fVar2 * 6.0) * fVar2);
  fVar2 = fVar12 - (float)(int)fVar12;
  fVar8 = fVar2 * fVar2 * fVar2 * (10.0 - (15.0 - fVar2 * 6.0) * fVar2);
  fVar2 = fVar1 - (float)(int)fVar1;
  fVar3 = fVar2 * fVar2 * fVar2 * (10.0 - (15.0 - fVar2 * 6.0) * fVar2);
  fVar2 = fVar13 - (float)(int)fVar13;
  fVar10 = fVar2 * fVar2 * fVar2 * (10.0 - (15.0 - fVar2 * 6.0) * fVar2);
  fVar2 = fVar14 - (float)(int)fVar14;
  fVar4 = fVar2 * fVar2 * fVar2 * (10.0 - (15.0 - fVar2 * 6.0) * fVar2);
  fVar2 = fVar7 - (float)(int)fVar7;
  fVar5 = fVar2 * fVar2 * fVar2 * (10.0 - (15.0 - fVar2 * 6.0) * fVar2);
  fVar2 = fVar9;
  FUN_10a8f94dc(fVar9,fVar12,fVar11,fVar8,param_1 + 0x1c);
  FUN_10a8f94dc(fVar13,fVar12,fVar10,fVar8,param_1 + 0x1c);
  fVar6 = fVar9;
  FUN_10a8f94dc(fVar9,fVar14,fVar11,fVar4,param_1 + 0x1c);
  FUN_10a8f94dc(fVar12,fVar1,fVar8,fVar3,param_1 + 0xc1c);
  FUN_10a8f94dc(fVar14,fVar1,fVar4,fVar3,param_1 + 0xc1c);
  FUN_10a8f94dc(fVar12,fVar7,fVar8,fVar5,param_1 + 0xc1c);
  fVar4 = fVar1;
  FUN_10a8f94dc(fVar1,fVar9,fVar3,fVar11,param_1 + 0x181c);
  FUN_10a8f94dc(fVar7,fVar9,fVar5,fVar11,param_1 + 0x181c);
  FUN_10a8f94dc(fVar1,fVar13,fVar3,fVar10,param_1 + 0x181c);
  return *(float *)(param_1 + 0x10) +
         ((fVar2 - fVar6) + 0.0 + (fVar7 - fVar4)) * (*(float *)(param_1 + 0xc) / 0.0002);
}



/* Entry: 10a8f8210; end: 10a8f826f;  */

undefined8 * FUN_10a8f8210(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd3db0;
  FUN_10a409540(param_1 + 0x1b);
  return param_1;
}



/* Entry: 10a8f8270; end: 10a8f83e3;  */

byte FUN_10a8f8270(float param_1,long param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  undefined8 uVar8;
  float fVar11;
  undefined8 uVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar5 = *(long *)(param_2 + 0xd8);
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x48) != 0)) {
    if ((*(byte *)(param_2 + 0x100) & 1) == 0) {
      fVar14 = *(float *)(param_2 + 0xf0);
      uVar8 = *(undefined8 *)(param_2 + 0xe8);
      uVar10 = *(undefined8 *)(param_2 + 0xf4);
      fVar6 = *(float *)(param_2 + 0xfc);
    }
    else {
      fVar12 = *(float *)(param_2 + 0x104);
      fVar13 = *(float *)(param_2 + 0x108);
      fVar14 = *(float *)(param_2 + 0x10c);
      fVar7 = 1.1920929e-07;
      if (1.1920929e-07 <= fVar12) {
        fVar7 = fVar12;
      }
      fVar15 = 1.1920929e-07;
      if (1.1920929e-07 <= fVar13) {
        fVar15 = fVar13;
      }
      fVar4 = 1.1920929e-07;
      if (1.1920929e-07 <= fVar14) {
        fVar4 = fVar14;
      }
      fVar1 = *(float *)(param_2 + 0x110);
      fVar11 = fVar1 + ((((*(float *)(lVar5 + 0x24) + *(float *)(lVar5 + 0x30)) * fVar12 + fVar1) -
                        fVar1) / fVar12) * fVar7;
      fVar2 = *(float *)(param_2 + 0x114);
      fVar9 = fVar2 + ((((*(float *)(lVar5 + 0x28) + *(float *)(lVar5 + 0x34)) * fVar13 + fVar2) -
                       fVar2) / fVar13) * fVar15;
      fVar3 = *(float *)(param_2 + 0x118);
      fVar6 = fVar3 + ((((*(float *)(lVar5 + 0x2c) + *(float *)(lVar5 + 0x38)) * fVar14 + fVar3) -
                       fVar3) / fVar14) * fVar4;
      fVar14 = (fVar3 + ((((*(float *)(lVar5 + 0x2c) - *(float *)(lVar5 + 0x38)) * fVar14 + fVar3) -
                         fVar3) / fVar14) * fVar4 + fVar6) * 0.5;
      fVar7 = (fVar1 + ((((*(float *)(lVar5 + 0x24) - *(float *)(lVar5 + 0x30)) * fVar12 + fVar1) -
                        fVar1) / fVar12) * fVar7 + fVar11) * 0.5;
      fVar12 = (fVar2 + ((((*(float *)(lVar5 + 0x28) - *(float *)(lVar5 + 0x34)) * fVar13 + fVar2) -
                         fVar2) / fVar13) * fVar15 + fVar9) * 0.5;
      uVar8 = CONCAT44(fVar12,fVar7);
      uVar10 = CONCAT44(fVar9 - fVar12,fVar11 - fVar7);
      *(undefined8 *)(param_2 + 0xe8) = uVar8;
      *(float *)(param_2 + 0xf0) = fVar14;
      *(undefined8 *)(param_2 + 0xf4) = uVar10;
      fVar6 = fVar6 - fVar14;
      *(float *)(param_2 + 0xfc) = fVar6;
      *(undefined1 *)(param_2 + 0x100) = 0;
    }
    return -(ABS((float)*param_3 - (float)uVar8) <= param_1 + (float)uVar10) &
           ABS(*(float *)(param_3 + 1) - fVar14) <= param_1 + fVar6 &
           -(ABS((float)((ulong)*param_3 >> 0x20) - (float)((ulong)uVar8 >> 0x20)) <=
            param_1 + (float)((ulong)uVar10 >> 0x20));
  }
  return 0;
}



/* Entry: 10a8f83e4; end: 10a8f879f;  */

void FUN_10a8f83e4(undefined1 *param_1,ulong param_2,float *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  code *pcVar13;
  bool bVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  uVar17 = param_2;
  FUN_10a8f8270(param_3[3]);
  if ((uVar17 & 1) == 0) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    return;
  }
  lVar15 = *(long *)(param_2 + 0xd8);
  plVar9 = *(long **)(param_2 + 0xe0);
  if (plVar9 != (long *)0x0) {
    plVar3 = plVar9 + 1;
    do {
      cVar12 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar14) {
        *plVar3 = *plVar3 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  fVar22 = 1.0 / *(float *)(lVar15 + 0x70);
  fVar19 = *(float *)(param_2 + 0x104);
  fVar24 = fVar22 * ((*param_3 - *(float *)(param_2 + 0x110)) / fVar19 - *(float *)(lVar15 + 0x58));
  if (1.0 <= fVar24) {
    fVar20 = *(float *)(param_2 + 0x108);
    fVar25 = fVar22 * ((param_3[1] - *(float *)(param_2 + 0x114)) / fVar20 -
                      *(float *)(lVar15 + 0x5c));
    iVar10 = *(int *)(lVar15 + 100);
    bVar14 = true;
    if ((fVar24 < (float)(iVar10 + -2)) && (bVar14 = false, !NAN(fVar25))) {
      bVar14 = fVar25 < 1.0;
    }
    if (!bVar14) {
      fVar21 = *(float *)(param_2 + 0x10c);
      fVar22 = fVar22 * ((param_3[2] - *(float *)(param_2 + 0x118)) / fVar21 -
                        *(float *)(lVar15 + 0x60));
      bVar14 = true;
      if ((fVar25 < (float)(*(int *)(lVar15 + 0x68) + -2)) && (bVar14 = false, !NAN(fVar22))) {
        bVar14 = fVar22 < 1.0;
      }
      if ((!bVar14) && (fVar22 < (float)(*(int *)(lVar15 + 0x6c) + -2))) {
        pfVar7 = (float *)(param_2 + 0x10c);
        fVar23 = fVar21;
        if (fVar20 <= fVar21) {
          pfVar7 = (float *)(param_2 + 0x108);
          fVar23 = fVar20;
        }
        if (fVar19 <= fVar23) {
          pfVar7 = (float *)(param_2 + 0x104);
        }
        iVar11 = *(int *)(lVar15 + 0x68) * iVar10;
        iVar16 = (int)fVar24 + iVar10 * (int)fVar25 + iVar11 * (int)fVar22;
        lVar8 = *(long *)(lVar15 + 0x78);
        uVar17 = *(long *)(lVar15 + 0x80) - lVar8 >> 2;
        if (uVar17 <= (ulong)(long)iVar16) goto LAB_10a8f879c;
        fVar23 = param_3[3];
        lVar18 = (long)iVar16;
        fVar27 = *(float *)(lVar8 + lVar18 * 4);
        if (fVar27 <= fVar23 / *pfVar7 + *(float *)(lVar15 + 0x70) * 2.0) {
          if ((uVar17 <= (ulong)(lVar18 + iVar11)) || (uVar4 = lVar18 + iVar10, uVar17 <= uVar4)) {
LAB_10a8f879c:
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10a8f87a0);
            (*pcVar13)();
          }
          lVar15 = (long)iVar11;
          uVar1 = lVar15 + (int)uVar4;
          if (uVar17 <= uVar1) goto LAB_10a8f879c;
          iVar16 = (int)(lVar18 + 1);
          if ((uVar17 <= (ulong)(long)iVar16) || (uVar5 = lVar18 + 1 + lVar15, uVar17 <= uVar5))
          goto LAB_10a8f879c;
          uVar6 = (long)iVar16 + (long)iVar10;
          if ((uVar17 <= uVar6) || (uVar2 = lVar15 + (int)uVar6, uVar17 <= uVar2))
          goto LAB_10a8f879c;
          fVar24 = fVar24 - (float)(int)fVar24;
          fVar25 = fVar25 - (float)(int)fVar25;
          fVar22 = fVar22 - (float)(int)fVar22;
          fVar26 = 1.0 - fVar24;
          fVar28 = 1.0 - fVar25;
          fVar37 = 1.0 - fVar22;
          fVar29 = *(float *)(lVar8 + (lVar18 + iVar11) * 4);
          fVar32 = *(float *)(lVar8 + uVar4 * 4);
          fVar34 = fVar22 * fVar29 + fVar37 * fVar27;
          fVar30 = *(float *)(lVar8 + uVar1 * 4);
          fVar35 = *(float *)(lVar8 + (long)iVar16 * 4);
          fVar33 = fVar22 * fVar30 + fVar37 * fVar32;
          fVar31 = *(float *)(lVar8 + uVar5 * 4);
          fVar39 = *(float *)(lVar8 + uVar6 * 4);
          fVar41 = fVar22 * fVar31 + fVar37 * fVar35;
          fVar36 = *(float *)(lVar8 + uVar2 * 4);
          fVar40 = fVar22 * fVar36 + fVar37 * fVar39;
          fVar38 = fVar25 * fVar33 + fVar28 * fVar34;
          fVar37 = fVar25 * fVar40 + fVar28 * fVar41;
          fVar22 = fVar24 * fVar37 + fVar26 * fVar38;
          if (fVar22 <= fVar23 / *pfVar7) {
            fVar37 = fVar37 - fVar38;
            fVar33 = (fVar24 * fVar40 + fVar26 * fVar33) - (fVar24 * fVar41 + fVar26 * fVar34);
            fVar25 = (fVar24 * (fVar25 * fVar36 + fVar28 * fVar31) +
                     fVar26 * (fVar25 * fVar30 + fVar28 * fVar29)) -
                     (fVar24 * (fVar25 * fVar39 + fVar28 * fVar35) +
                     fVar26 * (fVar25 * fVar32 + fVar28 * fVar27));
            fVar27 = SQRT(fVar25 * fVar25 + fVar37 * fVar37 + fVar33 * fVar33);
            fVar24 = 1.1920929e-07;
            if (1.1920929e-07 <= fVar27) {
              fVar24 = fVar27;
            }
            fVar27 = ABS(fVar22);
            fVar19 = fVar19 * fVar27 * (fVar37 / fVar24);
            fVar20 = fVar20 * fVar27 * (fVar33 / fVar24);
            fVar21 = fVar21 * fVar27 * (fVar25 / fVar24);
            fVar24 = SQRT(fVar21 * fVar21 + fVar19 * fVar19 + fVar20 * fVar20);
            if ((fVar22 < 0.0) || (fVar24 <= fVar23)) {
              fVar25 = 1.1920929e-07;
              if (1.1920929e-07 <= fVar24) {
                fVar25 = fVar24;
              }
              fVar27 = -fVar24;
              if (fVar22 < 0.0) {
                fVar27 = fVar24;
              }
              *param_1 = 1;
              *(float *)(param_1 + 4) = fVar23 + fVar27;
              *(float *)(param_1 + 8) = fVar19 / fVar25;
              *(float *)(param_1 + 0xc) = fVar20 / fVar25;
              *(float *)(param_1 + 0x10) = fVar21 / fVar25;
              goto joined_r0x00010a8f8700;
            }
          }
        }
      }
    }
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
joined_r0x00010a8f8700:
  if (plVar9 != (long *)0x0) {
    plVar3 = plVar9 + 1;
    do {
      lVar15 = *plVar3;
      cVar12 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar14) {
        *plVar3 = lVar15 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar9);
      return;
    }
  }
  return;
}



/* Entry: 10a8f87a0; end: 10a8f88d3;  */

long * FUN_10a8f87a0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar6 = (long *)*param_3;
  if ((plVar6 != (long *)0x0) &&
     (plVar4 = plVar6, ___dynamic_cast(plVar6,&PTR_DAT_110bd3f18,&PTR_DAT_110bd3dd8,0),
     plVar4 != (long *)0x0)) {
    lVar7 = param_3[1];
    lVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar6 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = *(long **)(param_1 + 0xe0);
    *(long *)(param_1 + 0xe0) = lVar7;
    *(long *)(param_1 + 0xd8) = lVar5;
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        lVar5 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    return (long *)(param_1 + 0xd8);
  }
  plStack_40 = (long *)param_3[1];
  if (plStack_40 != (long *)0x0) {
    plVar4 = plStack_40 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_48 = plVar6;
  (**(code **)(*plVar6 + 0x68))(&plStack_38,plVar6,&plStack_48);
  plVar6 = plStack_38;
  plStack_38 = (long *)0x0;
  plVar4 = (long *)*param_2;
  *param_2 = (long)plVar6;
  plVar6 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
    plVar6 = plStack_38;
    plStack_38 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  plVar4 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      plVar6 = plVar4;
    }
  }
  return plVar6;
}



/* Entry: 10a8f88d4; end: 10a8f8933;  */

undefined8 * FUN_10a8f88d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd3db0;
  FUN_10a409540(param_1 + 0x1b);
  return param_1;
}



/* Entry: 10a8f8934; end: 10a8f8a33;  */

void FUN_10a8f8934(undefined1 *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar2 = *(float *)((long)param_3 + 0xc);
  lVar1 = *(long *)(param_2 + 0xd8);
  fVar3 = (float)*param_3;
  fVar4 = (float)((ulong)*param_3 >> 0x20);
  if (((ABS(fVar3 - (float)*(undefined8 *)(lVar1 + 0x24)) <=
        fVar2 + (float)*(undefined8 *)(lVar1 + 0x30)) &&
      (ABS(fVar4 - (float)((ulong)*(undefined8 *)(lVar1 + 0x24) >> 0x20)) <=
       fVar2 + (float)((ulong)*(undefined8 *)(lVar1 + 0x30) >> 0x20))) &&
     (fVar8 = *(float *)(param_3 + 1),
     ABS(fVar8 - *(float *)(lVar1 + 0x2c)) <= fVar2 + *(float *)(lVar1 + 0x38))) {
    fVar5 = *(float *)(lVar1 + 0x48);
    fVar7 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar8 * fVar8);
    fVar9 = 1.1920929e-07;
    if (1.1920929e-07 <= fVar7) {
      fVar9 = fVar7;
    }
    fVar10 = ABS(fVar5 - fVar9);
    fVar3 = (fVar3 / fVar9) * fVar10;
    fVar4 = (fVar4 / fVar9) * fVar10;
    fVar10 = (fVar8 / fVar9) * fVar10;
    fVar8 = SQRT(fVar10 * fVar10 + fVar3 * fVar3 + fVar4 * fVar4);
    if ((fVar7 < fVar5) || (fVar8 <= fVar2)) {
      fVar9 = 1.1920929e-07;
      if (1.1920929e-07 <= fVar8) {
        fVar9 = fVar8;
      }
      fVar6 = -fVar8;
      if (fVar7 < fVar5) {
        fVar6 = fVar8;
      }
      *param_1 = 1;
      *(float *)(param_1 + 4) = fVar2 + fVar6;
      *(ulong *)(param_1 + 8) = CONCAT44(fVar4 / fVar9,fVar3 / fVar9);
      *(float *)(param_1 + 0x10) = fVar10 / fVar9;
      return;
    }
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}



/* Entry: 10a8f8a34; end: 10a8f8b67;  */

long * FUN_10a8f8a34(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar6 = (long *)*param_3;
  if ((plVar6 != (long *)0x0) &&
     (plVar4 = plVar6, ___dynamic_cast(plVar6,&PTR_DAT_110bd3f18,&PTR_DAT_110bd3df0,0),
     plVar4 != (long *)0x0)) {
    lVar7 = param_3[1];
    lVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar6 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = *(long **)(param_1 + 0xe0);
    *(long *)(param_1 + 0xe0) = lVar7;
    *(long *)(param_1 + 0xd8) = lVar5;
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        lVar5 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    return (long *)(param_1 + 0xd8);
  }
  plStack_40 = (long *)param_3[1];
  if (plStack_40 != (long *)0x0) {
    plVar4 = plStack_40 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_48 = plVar6;
  (**(code **)(*plVar6 + 0x68))(&plStack_38,plVar6,&plStack_48);
  plVar6 = plStack_38;
  plStack_38 = (long *)0x0;
  plVar4 = (long *)*param_2;
  *param_2 = (long)plVar6;
  plVar6 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
    plVar6 = plStack_38;
    plStack_38 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  plVar4 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      plVar6 = plVar4;
    }
  }
  return plVar6;
}



/* Entry: 10a8f8b68; end: 10a8f8bc7;  */

undefined8 * FUN_10a8f8b68(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd3db0;
  FUN_10a409540(param_1 + 0x1b);
  return param_1;
}



/* Entry: 10a8f8bc8; end: 10a8f8d87;  */

void FUN_10a8f8bc8(undefined1 *param_1,long param_2,float *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar5 = *(long *)(param_2 + 0xd8);
  fVar7 = param_3[3];
  fVar13 = fVar7 + *(float *)(lVar5 + 0x34);
  fVar8 = fVar7 + *(float *)(lVar5 + 0x38);
  fVar6 = ABS(param_3[1] - *(float *)(lVar5 + 0x28));
  fVar9 = ABS(param_3[2] - *(float *)(lVar5 + 0x2c));
  bVar1 = false;
  bVar3 = true;
  if (ABS(*param_3 - *(float *)(lVar5 + 0x24)) <= fVar7 + *(float *)(lVar5 + 0x30)) {
    bVar1 = false;
    bVar3 = true;
    if (!NAN(fVar6) && !NAN(fVar13)) {
      bVar1 = fVar6 == fVar13;
      bVar3 = fVar13 <= fVar6;
    }
  }
  bVar2 = false;
  bVar4 = true;
  if (!bVar3 || bVar1) {
    bVar2 = false;
    bVar4 = true;
    if (!NAN(fVar9) && !NAN(fVar8)) {
      bVar2 = fVar9 == fVar8;
      bVar4 = fVar8 <= fVar9;
    }
  }
  if (!bVar4 || bVar2) {
    fVar9 = *(float *)(lVar5 + 0x50);
    fVar7 = 1.1920929e-07;
    if (1.1920929e-07 <= *(float *)(lVar5 + 0x4c)) {
      fVar7 = *(float *)(lVar5 + 0x4c);
    }
    fVar13 = 0.5;
    fVar12 = fVar7 * 0.5;
    FUN_10a90e0fc(*(undefined1 *)(lVar5 + 0x48));
    fVar11 = fVar12 * fVar13;
    fVar10 = fVar12 * fVar6;
    fVar12 = fVar12 * fVar8;
    fVar14 = param_3[3];
    fVar7 = (fVar8 * (fVar12 - param_3[2]) +
            fVar13 * (fVar11 - *param_3) + fVar6 * (fVar10 - param_3[1])) / fVar7;
    fVar6 = 0.0;
    if (0.0 <= fVar7) {
      fVar6 = fVar7;
    }
    fVar7 = 1.0;
    if (fVar6 <= 1.0) {
      fVar7 = fVar6;
    }
    fVar6 = 1.0 - fVar7;
    fVar13 = *param_3 - (fVar11 * fVar6 - fVar11 * fVar7);
    fVar10 = param_3[1] - (fVar10 * fVar6 - fVar10 * fVar7);
    fVar8 = param_3[2] - (fVar12 * fVar6 - fVar12 * fVar7);
    fVar7 = SQRT(fVar8 * fVar8 + fVar13 * fVar13 + fVar10 * fVar10);
    fVar6 = 1.1920929e-07;
    if (1.1920929e-07 <= fVar7) {
      fVar6 = fVar7;
    }
    fVar12 = ABS(fVar9 - fVar6);
    fVar13 = (fVar13 / fVar6) * fVar12;
    fVar10 = (fVar10 / fVar6) * fVar12;
    fVar12 = (fVar8 / fVar6) * fVar12;
    fVar6 = SQRT(fVar12 * fVar12 + fVar13 * fVar13 + fVar10 * fVar10);
    if ((fVar7 < fVar9) || (fVar6 <= fVar14)) {
      fVar8 = 1.1920929e-07;
      if (1.1920929e-07 <= fVar6) {
        fVar8 = fVar6;
      }
      fVar11 = -fVar6;
      if (fVar7 < fVar9) {
        fVar11 = fVar6;
      }
      *param_1 = 1;
      *(float *)(param_1 + 4) = fVar14 + fVar11;
      *(float *)(param_1 + 8) = fVar13 / fVar8;
      *(float *)(param_1 + 0xc) = fVar10 / fVar8;
      *(float *)(param_1 + 0x10) = fVar12 / fVar8;
      return;
    }
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}



/* Entry: 10a8f8d88; end: 10a8f8ebb;  */

long * FUN_10a8f8d88(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar6 = (long *)*param_3;
  if ((plVar6 != (long *)0x0) &&
     (plVar4 = plVar6, ___dynamic_cast(plVar6,&PTR_DAT_110bd3f18,&PTR_DAT_110bd3e08,0),
     plVar4 != (long *)0x0)) {
    lVar7 = param_3[1];
    lVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar6 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = *(long **)(param_1 + 0xe0);
    *(long *)(param_1 + 0xe0) = lVar7;
    *(long *)(param_1 + 0xd8) = lVar5;
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        lVar5 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    return (long *)(param_1 + 0xd8);
  }
  plStack_40 = (long *)param_3[1];
  if (plStack_40 != (long *)0x0) {
    plVar4 = plStack_40 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_48 = plVar6;
  (**(code **)(*plVar6 + 0x68))(&plStack_38,plVar6,&plStack_48);
  plVar6 = plStack_38;
  plStack_38 = (long *)0x0;
  plVar4 = (long *)*param_2;
  *param_2 = (long)plVar6;
  plVar6 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
    plVar6 = plStack_38;
    plStack_38 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  plVar4 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      plVar6 = plVar4;
    }
  }
  return plVar6;
}



/* Entry: 10a8f8ebc; end: 10a8f8f1b;  */

undefined8 * FUN_10a8f8ebc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd3db0;
  FUN_10a409540(param_1 + 0x1b);
  return param_1;
}



/* Entry: 10a8f8f1c; end: 10a8f915f;  */

void FUN_10a8f8f1c(undefined1 *param_1,long param_2,float *param_3)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
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
  
  fVar11 = param_3[3];
  lVar6 = *(long *)(param_2 + 0xd8);
  pfVar9 = param_3 + 1;
  pfVar10 = param_3 + 2;
  fVar25 = fVar11 + *(float *)(lVar6 + 0x34);
  fVar12 = fVar11 + *(float *)(lVar6 + 0x38);
  fVar14 = ABS(*pfVar9 - *(float *)(lVar6 + 0x28));
  fVar16 = ABS(*pfVar10 - *(float *)(lVar6 + 0x2c));
  bVar2 = false;
  bVar4 = true;
  if (ABS(*param_3 - *(float *)(lVar6 + 0x24)) <= fVar11 + *(float *)(lVar6 + 0x30)) {
    bVar2 = false;
    bVar4 = true;
    if (!NAN(fVar14) && !NAN(fVar25)) {
      bVar2 = fVar14 == fVar25;
      bVar4 = fVar25 <= fVar14;
    }
  }
  bVar3 = false;
  bVar5 = true;
  if (!bVar4 || bVar2) {
    bVar3 = false;
    bVar5 = true;
    if (!NAN(fVar16) && !NAN(fVar12)) {
      bVar3 = fVar16 == fVar12;
      bVar5 = fVar12 <= fVar16;
    }
  }
  if (!bVar5 || bVar3) {
    iVar8 = 0;
    fVar25 = *(float *)(lVar6 + 0x48);
    fVar13 = *(float *)(lVar6 + 0x4c);
    fVar15 = *(float *)(lVar6 + 0x50);
    fVar11 = 3.4028235e+38;
    fVar21 = fVar25 * -0.5;
    fVar20 = fVar13 * -0.5;
    fVar17 = fVar15 * -0.5;
    fVar22 = fVar25 * 0.5;
    fVar23 = fVar13 * 0.5;
    fVar24 = fVar15 * 0.5;
    fVar12 = 0.0;
    fVar14 = 0.0;
    fVar16 = 0.0;
    do {
      FUN_10a90e0fc(iVar8);
      fVar18 = fVar21;
      pfVar7 = param_3;
      if (iVar8 == 1) {
        fVar18 = fVar20;
        pfVar7 = pfVar9;
      }
      fVar19 = fVar17;
      pfVar1 = pfVar10;
      if (iVar8 != 2) {
        fVar19 = fVar18;
        pfVar1 = pfVar7;
      }
      if (*pfVar1 - fVar19 < fVar11) {
        pfVar7 = pfVar10;
        fVar11 = fVar17;
        if ((iVar8 != 2) && (pfVar7 = param_3, fVar11 = fVar21, iVar8 == 1)) {
          pfVar7 = pfVar9;
          fVar11 = fVar20;
        }
        fVar11 = *pfVar7 - fVar11;
        fVar16 = -fVar25;
        fVar14 = -fVar13;
        fVar12 = -fVar15;
      }
      pfVar7 = pfVar10;
      fVar18 = fVar24;
      if (iVar8 != 2) {
        pfVar7 = param_3;
        fVar18 = fVar22;
      }
      pfVar1 = pfVar9;
      fVar19 = fVar23;
      if (iVar8 != 1) {
        pfVar1 = pfVar7;
        fVar19 = fVar18;
      }
      if (fVar19 - *pfVar1 < fVar11) {
        pfVar7 = pfVar10;
        fVar12 = fVar24;
        if (iVar8 != 2) {
          pfVar7 = param_3;
          fVar12 = fVar22;
        }
        pfVar1 = pfVar9;
        fVar11 = fVar23;
        if (iVar8 != 1) {
          pfVar1 = pfVar7;
          fVar11 = fVar12;
        }
        fVar11 = fVar11 - *pfVar1;
        fVar12 = fVar15;
        fVar14 = fVar13;
        fVar16 = fVar25;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 3);
    fVar25 = ABS(fVar11);
    fVar16 = fVar16 * fVar25;
    fVar14 = fVar14 * fVar25;
    fVar12 = fVar12 * fVar25;
    fVar25 = SQRT(fVar12 * fVar12 + fVar16 * fVar16 + fVar14 * fVar14);
    fVar13 = param_3[3];
    if ((0.0 < fVar11) || (fVar25 <= fVar13)) {
      fVar15 = 1.1920929e-07;
      if (1.1920929e-07 <= fVar25) {
        fVar15 = fVar25;
      }
      fVar17 = -fVar25;
      if (0.0 < fVar11) {
        fVar17 = fVar25;
      }
      *param_1 = 1;
      *(float *)(param_1 + 4) = fVar17 + fVar13;
      *(float *)(param_1 + 8) = fVar16 / fVar15;
      *(float *)(param_1 + 0xc) = fVar14 / fVar15;
      *(float *)(param_1 + 0x10) = fVar12 / fVar15;
      return;
    }
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}



/* Entry: 10a8f9160; end: 10a8f9293;  */

long * FUN_10a8f9160(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar6 = (long *)*param_3;
  if ((plVar6 != (long *)0x0) &&
     (plVar4 = plVar6, ___dynamic_cast(plVar6,&PTR_DAT_110bd3f18,&PTR_DAT_110bd3e20,0),
     plVar4 != (long *)0x0)) {
    lVar7 = param_3[1];
    lVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar6 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = *(long **)(param_1 + 0xe0);
    *(long *)(param_1 + 0xe0) = lVar7;
    *(long *)(param_1 + 0xd8) = lVar5;
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        lVar5 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    return (long *)(param_1 + 0xd8);
  }
  plStack_40 = (long *)param_3[1];
  if (plStack_40 != (long *)0x0) {
    plVar4 = plStack_40 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_48 = plVar6;
  (**(code **)(*plVar6 + 0x68))(&plStack_38,plVar6,&plStack_48);
  plVar6 = plStack_38;
  plStack_38 = (long *)0x0;
  plVar4 = (long *)*param_2;
  *param_2 = (long)plVar6;
  plVar6 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
    plVar6 = plStack_38;
    plStack_38 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  plVar4 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      plVar6 = plVar4;
    }
  }
  return plVar6;
}



/* Entry: 10a8f9294; end: 10a8f94db;  */

long FUN_10a8f9294(long param_1,int param_2)

{
  int *piVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar13;
  int iVar14;
  undefined1 auVar10 [16];
  int iVar15;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar26 [16];
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined4 uStack_b0;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  _bzero(param_1 + 0x200,0x800);
  lVar3 = 0;
  iVar9 = 0;
  iVar13 = 1;
  iVar14 = 2;
  iVar15 = 3;
  uStack_b0 = 0x3d490fdb;
  lVar4 = param_1;
  do {
    piVar1 = (int *)(param_1 + lVar3);
    piVar1[2] = iVar14;
    piVar1[3] = iVar15;
    *piVar1 = iVar9;
    piVar1[1] = iVar13;
    auVar10._4_4_ = iVar13;
    auVar10._0_4_ = iVar9;
    auVar10._8_4_ = iVar14;
    auVar10._12_4_ = iVar15;
    auVar10 = NEON_ucvtf(auVar10,4);
    uVar16 = uStack_b0;
    uVar5 = ___sincosf_stret();
    uVar17 = uVar16;
    uVar6 = ___sincosf_stret(CONCAT44(auVar10._4_4_ * 0.049087387,auVar10._0_4_ * 0.049087387));
    uVar18 = uVar17;
    uVar7 = ___sincosf_stret();
    uVar19 = uVar18;
    uVar8 = ___sincosf_stret();
    *(ulong *)(lVar4 + 0x618) = CONCAT44(uVar8,uVar19);
    *(ulong *)(lVar4 + 0x610) = CONCAT44(uVar7,uVar18);
    *(undefined4 *)(lVar4 + 0x608) = uVar16;
    *(undefined4 *)(lVar4 + 0x60c) = uVar5;
    *(undefined4 *)(lVar4 + 0x600) = uVar17;
    *(undefined4 *)(lVar4 + 0x604) = uVar6;
    *(undefined4 *)(lVar4 + 0x208) = uVar16;
    *(undefined4 *)(lVar4 + 0x20c) = uVar5;
    *(undefined4 *)(lVar4 + 0x200) = uVar17;
    *(undefined4 *)(lVar4 + 0x204) = uVar6;
    *(ulong *)(lVar4 + 0x218) = CONCAT44(uVar8,uVar19);
    *(ulong *)(lVar4 + 0x210) = CONCAT44(uVar7,uVar18);
    iVar9 = iVar9 + 4;
    iVar13 = iVar13 + 4;
    iVar14 = iVar14 + 4;
    iVar15 = iVar15 + 4;
    lVar3 = lVar3 + 0x10;
    lVar4 = lVar4 + 0x20;
  } while (lVar3 != 0x200);
  lVar3 = 1;
  do {
    uVar27 = (param_2 + (int)lVar3) - 1U ^ 0xbc602f;
    uVar28 = uVar27 * -0x61c88647;
    uVar28 = (uVar27 * -0x722191c0 | uVar28 >> 0x1a) ^ uVar28;
    uVar27 = uVar28 * -0x61c88647;
    lVar4 = lVar3 + 1;
    uVar27 = (uVar28 * -0x3910c8e0 ^ uVar27 >> 0xc) + uVar27;
    uVar28 = 0;
    uVar29 = (uint)lVar4;
    if (uVar29 != 0) {
      uVar28 = uVar27 / uVar29;
    }
    uVar27 = uVar27 - uVar28 * uVar29;
    uVar19 = *(undefined4 *)(param_1 + lVar3 * 4);
    *(undefined4 *)(param_1 + lVar3 * 4) = *(undefined4 *)(param_1 + (ulong)uVar27 * 4);
    *(undefined4 *)(param_1 + (ulong)uVar27 * 4) = uVar19;
    lVar3 = lVar4;
  } while (lVar4 != 0x80);
  auVar11._4_4_ = param_2 + 0x100;
  auVar11._0_4_ = param_2 + 0xff;
  auVar11._8_4_ = param_2 + 0x101;
  auVar11._12_4_ = param_2 + 0x102;
  lVar3 = 0xa00;
  do {
    auVar20._0_8_ = auVar11._0_8_ ^ 0xbc602f00bc602f;
    auVar20[8] = auVar11[8] ^ 0x2f;
    auVar20[9] = auVar11[9] ^ 0x60;
    auVar20[10] = auVar11[10] ^ 0xbc;
    auVar20[0xb] = auVar11[0xb];
    auVar23[0xc] = auVar11[0xc] ^ 0x2f;
    auVar23._0_12_ = auVar20;
    auVar23[0xd] = auVar11[0xd] ^ 0x60;
    auVar23[0xe] = auVar11[0xe] ^ 0xbc;
    auVar23[0xf] = auVar11[0xf];
    uVar27 = (int)auVar20._0_8_ * -0x61c88647;
    iVar13 = (int)(auVar20._0_8_ >> 0x20);
    uVar28 = iVar13 * -0x61c88647;
    uVar29 = auVar20._8_4_ * -0x61c88647;
    uVar30 = auVar23._12_4_ * -0x61c88647;
    iVar9 = (int)auVar20._0_8_ * -0x722191c0 + (uVar27 >> 0x1a);
    iVar13 = iVar13 * -0x722191c0 + (uVar28 >> 0x1a);
    iVar14 = auVar20._8_4_ * -0x722191c0 + (uVar29 >> 0x1a);
    iVar15 = auVar23._12_4_ * -0x722191c0 + (uVar30 >> 0x1a);
    iVar9 = CONCAT13((byte)((uint)iVar9 >> 0x18) ^ (byte)(uVar27 >> 0x18),
                     CONCAT12((byte)((uint)iVar9 >> 0x10) ^ (byte)(uVar27 >> 0x10),
                              CONCAT11((byte)((uint)iVar9 >> 8) ^ (byte)(uVar27 >> 8),
                                       (byte)iVar9 ^ (byte)uVar27)));
    auVar21._0_8_ =
         CONCAT17((byte)((uint)iVar13 >> 0x18) ^ (byte)(uVar28 >> 0x18),
                  CONCAT16((byte)((uint)iVar13 >> 0x10) ^ (byte)(uVar28 >> 0x10),
                           CONCAT15((byte)((uint)iVar13 >> 8) ^ (byte)(uVar28 >> 8),
                                    CONCAT14((byte)iVar13 ^ (byte)uVar28,iVar9))));
    auVar21[8] = (byte)iVar14 ^ (byte)uVar29;
    auVar21[9] = (byte)((uint)iVar14 >> 8) ^ (byte)(uVar29 >> 8);
    auVar21[10] = (byte)((uint)iVar14 >> 0x10) ^ (byte)(uVar29 >> 0x10);
    auVar21[0xb] = (byte)((uint)iVar14 >> 0x18) ^ (byte)(uVar29 >> 0x18);
    auVar24[0xc] = (byte)iVar15 ^ (byte)uVar30;
    auVar24._0_12_ = auVar21;
    auVar24[0xd] = (byte)((uint)iVar15 >> 8) ^ (byte)(uVar30 >> 8);
    auVar24[0xe] = (byte)((uint)iVar15 >> 0x10) ^ (byte)(uVar30 >> 0x10);
    auVar24[0xf] = (byte)((uint)iVar15 >> 0x18) ^ (byte)(uVar30 >> 0x18);
    uVar27 = iVar9 * -0x61c88647;
    iVar13 = (int)((ulong)auVar21._0_8_ >> 0x20);
    uVar28 = iVar13 * -0x61c88647;
    uVar29 = auVar21._8_4_ * -0x61c88647;
    uVar30 = auVar24._12_4_ * -0x61c88647;
    iVar9 = iVar9 * -0x3910c8e0;
    iVar13 = iVar13 * -0x3910c8e0;
    iVar14 = auVar21._8_4_ * -0x3910c8e0;
    iVar15 = auVar24._12_4_ * -0x3910c8e0;
    iVar9 = CONCAT13((char)((uint)iVar9 >> 0x18),
                     CONCAT12((byte)(uVar27 >> 0x1c) ^ (byte)((uint)iVar9 >> 0x10),
                              CONCAT11((byte)((uVar27 >> 0xc) >> 8) ^ (byte)((uint)iVar9 >> 8),
                                       (byte)(uVar27 >> 0xc) ^ (byte)iVar9)));
    auVar22._0_8_ =
         CONCAT17((char)((uint)iVar13 >> 0x18),
                  CONCAT16((byte)(uVar28 >> 0x1c) ^ (byte)((uint)iVar13 >> 0x10),
                           CONCAT15((byte)((uVar28 >> 0xc) >> 8) ^ (byte)((uint)iVar13 >> 8),
                                    CONCAT14((byte)(uVar28 >> 0xc) ^ (byte)iVar13,iVar9))));
    auVar22[8] = (byte)(uVar29 >> 0xc) ^ (byte)iVar14;
    auVar22[9] = (byte)((uVar29 >> 0xc) >> 8) ^ (byte)((uint)iVar14 >> 8);
    auVar22[10] = (byte)(uVar29 >> 0x1c) ^ (byte)((uint)iVar14 >> 0x10);
    auVar22[0xb] = (undefined1)((uint)iVar14 >> 0x18);
    auVar25[0xc] = (byte)(uVar30 >> 0xc) ^ (byte)iVar15;
    auVar25._0_12_ = auVar22;
    auVar25[0xd] = (byte)((uVar30 >> 0xc) >> 8) ^ (byte)((uint)iVar15 >> 8);
    auVar25[0xf] = (undefined1)((uint)iVar15 >> 0x18);
    auVar25[0xe] = (byte)(uVar30 >> 0x1c) ^ (byte)((uint)iVar15 >> 0x10);
    auVar26._0_4_ = iVar9 + uVar27;
    auVar26._4_4_ = (int)((ulong)auVar22._0_8_ >> 0x20) + uVar28;
    auVar26._8_4_ = auVar22._8_4_ + uVar29;
    auVar26._12_4_ = auVar25._12_4_ + uVar30;
    auVar10 = NEON_ucvtf(auVar26,4);
    pfVar2 = (float *)(param_1 + lVar3);
    pfVar2[2] = (auVar10._8_4_ * 2.3283064e-10 + 0.0) * 6.2831855;
    pfVar2[3] = (auVar10._12_4_ * 2.3283064e-10 + 0.0) * 6.2831855;
    *pfVar2 = (auVar10._0_4_ * 2.3283064e-10 + 0.0) * 6.2831855;
    pfVar2[1] = (auVar10._4_4_ * 2.3283064e-10 + 0.0) * 6.2831855;
    auVar12._0_4_ = auVar11._0_4_ + 4;
    auVar12._4_4_ = auVar11._4_4_ + 4;
    auVar12._8_4_ = auVar11._8_4_ + 4;
    auVar12._12_4_ = auVar11._12_4_ + 4;
    lVar3 = lVar3 + 0x10;
    auVar11 = auVar12;
  } while (lVar3 != 0xc00);
  return param_1;
}



/* Entry: 10a8f94dc; end: 10a8f95c3;  */

float FUN_10a8f94dc(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  
  iVar8 = (int)param_2;
  fVar9 = param_1 - (float)(int)(float)(int)param_1;
  param_2 = param_2 - (float)(int)(float)(int)param_2;
  iVar6 = *(int *)(param_5 + (ulong)((int)param_1 & 0x7f) * 4);
  lVar1 = param_5 + 0x200;
  pfVar2 = (float *)(lVar1 + (long)*(int *)(param_5 + (ulong)(iVar6 + iVar8 & 0x7f) * 4) * 8);
  iVar7 = *(int *)(param_5 + (ulong)((int)param_1 + 1U & 0x7f) * 4);
  pfVar3 = (float *)(lVar1 + (long)*(int *)(param_5 + (ulong)(iVar7 + iVar8 & 0x7f) * 4) * 8);
  pfVar4 = (float *)(lVar1 + (long)*(int *)(param_5 + (ulong)(iVar6 + iVar8 + 1 & 0x7f) * 4) * 8);
  pfVar5 = (float *)(lVar1 + (long)*(int *)(param_5 + (ulong)(iVar7 + iVar8 + 1 & 0x7f) * 4) * 8);
  return param_4 * (param_3 * ((param_2 + -1.0) * pfVar5[1] + *pfVar5 * (fVar9 + -1.0)) +
                   (1.0 - param_3) * ((param_2 + -1.0) * pfVar4[1] + *pfVar4 * fVar9)) +
         (1.0 - param_4) *
         (param_3 * (param_2 * pfVar3[1] + *pfVar3 * (fVar9 + -1.0)) +
         (1.0 - param_3) * (param_2 * pfVar2[1] + *pfVar2 * fVar9));
}



/* Entry: 10a8f95c4; end: 10a8f9623;  */

undefined8 * FUN_10a8f95c4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  FUN_10a8f9294((long)param_1 + 0x1c,0x1b207);
  FUN_10a8f9294((long)param_1 + 0xc1c,0x3640e);
  FUN_10a8f9294((long)param_1 + 0x181c,0x51615);
  return param_1;
}



/* Entry: 10a8f9624; end: 10a8f998f;  */

void FUN_10a8f9624(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
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
  
  FUN_10a003e74(param_1,&UNK_10f6821e5,0x16);
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c2df00;
  if (*(char *)(param_1 + 0x1cf) < '\0') {
    *(undefined8 *)(param_1 + 0x1c0) = 0x11;
    puVar6 = *(undefined8 **)(param_1 + 0x1b8);
  }
  else {
    *(undefined1 *)(param_1 + 0x1cf) = 0x11;
    puVar6 = (undefined8 *)(param_1 + 0x1b8);
  }
  *(undefined2 *)(puVar6 + 2) = 0x65;
  puVar6[1] = 0x746174536c617573;
  *puVar6 = 0x6956726f73727543;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0x4ffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  puStack_a0 = &UNK_10f6827ca;
  uStack_58 = 0x17700000177;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x00010a052690(param_1 + 0x168,&puStack_a0);
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,4);
  if ((uVar5 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c2df00;
    uStack_a8 = 0;
    puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    func_0x0001098949cc(param_1,&UNK_10f6827ca,&ppuStack_b0,&puStack_a0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10a9113d8,0,0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,"mode",FUN_10a9114fc,FUN_10a9115b8);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6821fd,FUN_10a911724,FUN_10a9117e0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68220a,FUN_10a9118d0,FUN_10a91198c);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68221a,FUN_10a911a7c,FUN_10a911b34);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68222e,FUN_10a911bf4,FUN_10a911cac);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f682235,FUN_10a911d6c,FUN_10a911e24);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_98 = *(undefined8 *)(lVar1 + -0x60);
    puStack_a0 = *(undefined **)(lVar1 + -0x68);
    uStack_78 = *(undefined8 *)(lVar1 + -0x40);
    uVar7 = *(ulong *)(lVar1 + -0x48);
    uVar8 = *(ulong *)(lVar1 + -0x50);
    uStack_90 = *(undefined8 *)(lVar1 + -0x58);
    uStack_68 = *(undefined8 *)(lVar1 + -0x30);
    uStack_70 = *(undefined8 *)(lVar1 + -0x38);
    uStack_58 = *(undefined8 *)(lVar1 + -0x20);
    uStack_60 = *(undefined8 *)(lVar1 + -0x28);
    uStack_40 = *(undefined8 *)(lVar1 + -8);
    uStack_48 = *(undefined8 *)(lVar1 + -0x10);
    uStack_50 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar2 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar3 = uStack_80._4_4_;
    uVar5 = param_1;
    uStack_88 = uVar8;
    uStack_80 = uVar7;
    FUN_10a0051e8(param_1,uVar8 & 0xffffffff,uVar2,uStack_50 & 0xffffffff,uVar7 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&puStack_a0,(undefined8 *)(param_1 + 0x1b8),&UNK_10f6827ca,0x11);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8f9990);
  (*pcVar4)();
}



/* Entry: 10a8f9990; end: 10a8f9ba7;  */

void FUN_10a8f9990(ulong param_1)

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
  puStack_a8 = &UNK_10f68223f;
  uStack_88 = 0x4ffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  puStack_70 = &UNK_10f6821fc;
  uStack_68 = 0;
  uStack_60 = 0x17700000177;
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
  puStack_a8 = &UNK_10f6442b5;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8f9ba8(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f682250;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8f9ba8();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68225a;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8f9ba8();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f682267;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8f9ba8();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f682275;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8f9ba8();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f682285;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8f9ba8();
  FUN_10a003ff4();
  return;
}


