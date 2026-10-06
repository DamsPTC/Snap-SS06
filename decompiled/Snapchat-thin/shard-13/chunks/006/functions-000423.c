/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a9b3c08; end: 10a9b3d03;  */

undefined1  [16] FUN_10a9b3c08(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c33830;
  puVar1 = &UNK_10f68581c;
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
    ppuStack_40 = &PTR_DAT_110c33830;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c33600;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a9b3d04; end: 10a9b3d5b;  */

ulong FUN_10a9b3d04(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a9b3d5c,FUN_10a9b3ea8);
  }
  return param_1;
}



/* Entry: 10a9b3d5c; end: 10a9b3ea7;  */

void FUN_10a9b3d5c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
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
  func_0x000109898688(param_2,param_3);
  if (plVar5 == (long *)0x0) {
    puVar7 = &UNK_10f68f52e;
  }
  else {
    plVar6 = param_2;
    FUN_10a052c2c(param_2,plVar5);
    if ((plVar6 != (long *)0x0) && (___dynamic_cast(), plVar6 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      uVar1 = *(uint *)(plVar6 + 3);
      lVar14 = plVar6[4];
      FUN_10a97ab94((ulong)uVar1,*(undefined8 *)(lVar14 + 0x40),*(undefined8 *)(lVar14 + 0x48));
      uVar8 = (ulong)uVar1 & 0x3fff;
      uVar10 = (*(long *)(lVar14 + 0x48) - *(long *)(lVar14 + 0x40) >> 4) * 0x4ec4ec4ec4ec4ec5;
      if (uVar8 <= uVar10 && uVar10 - uVar8 != 0) {
        FUN_10a2715a0(param_1,param_2,*(long *)(lVar14 + 0x40) + uVar8 * 0xd0 + 0x28);
        plVar5 = plVar4 + 0x4b;
        lVar14 = plVar4[0x59];
        uVar8 = lVar14 - 1;
        plVar4[0x59] = uVar8;
        if (uVar8 < 8) {
          uVar8 = plVar5[lVar14 + 2];
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
        lVar14 = *plVar5;
        lVar13 = plVar4[0x4c];
        lVar11 = lVar13 - lVar14;
        uVar10 = lVar11 >> 4;
        if (uVar10 < uVar8) {
          uVar16 = uVar8 - uVar10;
          lVar15 = plVar4[0x4d];
          if ((ulong)(lVar15 - lVar13 >> 4) < uVar16) {
            if (uVar8 >> 0x3c == 0) {
              uVar9 = lVar15 - lVar14 >> 3;
              if (uVar9 <= uVar8) {
                uVar9 = uVar8;
              }
              if (0x7fffffffffffffef < (ulong)(lVar15 - lVar14)) {
                uVar9 = 0xfffffffffffffff;
              }
              plStack_68 = plVar5;
              if (uVar9 >> 0x3c == 0) {
                lVar3 = uVar9 << 4;
                __Znwm();
                lVar13 = lVar3 + lVar11;
                _bzero(lVar13,uVar16 * 0x10);
                lVar12 = lVar13 + uVar10 * -0x10;
                _memcpy(lVar12,lVar14,lVar11);
                *plVar5 = lVar12;
                plVar4[0x4c] = lVar13 + uVar16 * 0x10;
                plVar4[0x4d] = lVar3 + uVar9 * 0x10;
                lStack_88 = lVar14;
                lStack_80 = lVar14;
                lStack_78 = lVar14;
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
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar2)();
          }
          _bzero(lVar13,uVar16 * 0x10);
          plVar4[0x4c] = lVar13 + uVar16 * 0x10;
        }
        else if (uVar8 < uVar10) {
          lVar14 = lVar14 + uVar8 * 0x10;
          while (lVar13 != lVar14) {
            lVar13 = lVar13 + -0x10;
            func_0x00010988c204(lVar13);
          }
          plVar4[0x4c] = lVar14;
        }
code_r0x00010988c138:
        plVar4[0x5a] = uVar8;
        return;
      }
      goto LAB_10a9b3e90;
    }
    puVar7 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar7);
LAB_10a9b3e90:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9b3e94);
  (*pcVar2)();
}



/* Entry: 10a9b3ea8; end: 10a9b3fbb;  */

void FUN_10a9b3ea8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
    FUN_10a053854(param_2,plVar4);
    if ((plVar5 != (long *)0x0) && (___dynamic_cast(), plVar5 != (long *)0x0)) {
      FUN_10a271768(param_5);
      func_0x00010a27178c(param_2,param_4);
      func_0x00010a97b33c(plVar5,param_2);
      *param_1 = 0;
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9b3fa8);
  (*pcVar1)();
}



/* Entry: 10a9b3fbc; end: 10a9b4077;  */

void FUN_10a9b3fbc(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68757c,0x17);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9b4078);
  (*pcVar4)();
}



/* Entry: 10a9b4078; end: 10a9b414f;  */

void FUN_10a9b4078(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined4 uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
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
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a9b4150(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = (undefined4)param_2[3];
  puVar10 = (undefined8 *)(param_2[4] + 0x68);
  FUN_10a978384(uVar2,*puVar10,*(undefined8 *)(param_2[4] + 0x70));
  FUN_10a97d404(puVar10,uVar2);
  FUN_10a97d5e0(puVar10,uVar2);
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
  lVar12 = plVar5[0x4c];
  lVar9 = lVar12 - lVar6;
  uVar14 = lVar9 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar9;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar6,lVar9);
          *plVar1 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
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
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar12 != lVar6) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a9b4150; end: 10a9b41b7;  */

void FUN_10a9b4150(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar5);
    param_2 = ppuVar5;
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
  FUN_10a9b4384(plVar6,param_2);
  FUN_10a052e3c(param_4);
  uVar1 = *(uint *)(plVar6 + 3);
  lVar12 = plVar6[4];
  FUN_10a978384((ulong)uVar1,*(undefined8 *)(lVar12 + 0x68),*(undefined8 *)(lVar12 + 0x70));
  uVar8 = (ulong)uVar1 & 0x3fff;
  uVar10 = (*(long *)(lVar12 + 0x70) - *(long *)(lVar12 + 0x68) >> 4) * -0x5555555555555555;
  if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9b42a8);
    (*pcVar3)();
  }
  cVar2 = *(char *)(*(long *)(lVar12 + 0x68) + uVar8 * 0x30);
  *extraout_x8 = 2;
  *(bool *)(extraout_x8 + 2) = cVar2 == '\0';
  plVar6 = plVar7 + 0x4b;
  lVar12 = plVar7[0x59];
  uVar8 = lVar12 - 1;
  plVar7[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar6[lVar12 + 2];
    if (plVar7[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar8) {
      return;
    }
  }
  lVar12 = *plVar6;
  lVar14 = plVar7[0x4c];
  lVar11 = lVar14 - lVar12;
  uVar10 = lVar11 >> 4;
  if (uVar10 < uVar8) {
    uVar16 = uVar8 - uVar10;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar15 - lVar12 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar12)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_88 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar14 = lVar4 + lVar11;
          _bzero(lVar14,uVar16 * 0x10);
          lVar13 = lVar14 + uVar10 * -0x10;
          _memcpy(lVar13,lVar12,lVar11);
          *plVar6 = lVar13;
          plVar7[0x4c] = lVar14 + uVar16 * 0x10;
          plVar7[0x4d] = lVar4 + uVar9 * 0x10;
          lStack_a8 = lVar12;
          lStack_a0 = lVar12;
          lStack_98 = lVar12;
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
    _bzero(lVar14,uVar16 * 0x10);
    plVar7[0x4c] = lVar14 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar10) {
    lVar12 = lVar12 + uVar8 * 0x10;
    while (lVar14 != lVar12) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar7[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar8;
  return;
}



/* Entry: 10a9b41b8; end: 10a9b42bb;  */

void FUN_10a9b41b8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
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
  FUN_10a9b4384(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(uint *)(param_2 + 3);
  lVar11 = param_2[4];
  FUN_10a978384((ulong)uVar2,*(undefined8 *)(lVar11 + 0x68),*(undefined8 *)(lVar11 + 0x70));
  uVar7 = (ulong)uVar2 & 0x3fff;
  uVar9 = (*(long *)(lVar11 + 0x70) - *(long *)(lVar11 + 0x68) >> 4) * -0x5555555555555555;
  if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9b42a8);
    (*pcVar4)();
  }
  cVar3 = *(char *)(*(long *)(lVar11 + 0x68) + uVar7 * 0x30);
  *param_1 = 2;
  *(bool *)(param_1 + 2) = cVar3 == '\0';
  plVar1 = plVar6 + 0x4b;
  lVar11 = plVar6[0x59];
  uVar7 = lVar11 - 1;
  plVar6[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar11 + 2];
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
  lVar11 = *plVar1;
  lVar13 = plVar6[0x4c];
  lVar10 = lVar13 - lVar11;
  uVar9 = lVar10 >> 4;
  if (uVar9 < uVar7) {
    uVar15 = uVar7 - uVar9;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar14 - lVar11 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar11)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar5 = uVar8 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar10;
          _bzero(lVar13,uVar15 * 0x10);
          lVar12 = lVar13 + uVar9 * -0x10;
          _memcpy(lVar12,lVar11,lVar10);
          *plVar1 = lVar12;
          plVar6[0x4c] = lVar13 + uVar15 * 0x10;
          plVar6[0x4d] = lVar5 + uVar8 * 0x10;
          lStack_88 = lVar11;
          lStack_80 = lVar11;
          lStack_78 = lVar11;
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
    _bzero(lVar13,uVar15 * 0x10);
    plVar6[0x4c] = lVar13 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar9) {
    lVar11 = lVar11 + uVar7 * 0x10;
    while (lVar13 != lVar11) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar7;
  return;
}



/* Entry: 10a9b42bc; end: 10a9b4383;  */

void FUN_10a9b42bc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b4150(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  FUN_10a97b754(plVar4,param_2);
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



/* Entry: 10a9b4384; end: 10a9b43eb;  */

void FUN_10a9b4384(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

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
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar3);
    param_2 = ppuVar3;
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
  FUN_10a9b4384(plVar4,param_2);
  FUN_10a052e3c(param_4);
  FUN_10a97b7c4();
  FUN_10a44ba80(extraout_x8,plVar4,*plVar6,plVar6[1] - *plVar6 >> 4);
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



/* Entry: 10a9b43ec; end: 10a9b44b3;  */

void FUN_10a9b43ec(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b4384(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a97b7c4();
  FUN_10a44ba80(param_1,param_2,*plVar4,plVar4[1] - *plVar4 >> 4);
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



/* Entry: 10a9b44b4; end: 10a9b45ab;  */

void FUN_10a9b44b4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b4150(param_2,param_3);
  FUN_10a9b45ac(param_5);
  FUN_10a44bc58(&stack0xffffffffffffffa0,param_2,param_4);
  FUN_10a97b824(plVar4,&stack0xffffffffffffffa0);
  FUN_10a3f9078(&stack0xffffffffffffffb8);
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



/* Entry: 10a9b45ac; end: 10a9b45cf;  */

void FUN_10a9b45ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  uVar7 = 0;
  FUN_10a052ee0(1,0,param_1);
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
  FUN_10a9b4384(plVar4,uVar7);
  FUN_10a052e3c(param_4);
  uVar1 = *(uint *)(plVar6 + 3);
  lVar14 = plVar6[4];
  FUN_10a978384((ulong)uVar1,*(undefined8 *)(lVar14 + 0x68),*(undefined8 *)(lVar14 + 0x70));
  uVar8 = (ulong)uVar1 & 0x3fff;
  uVar10 = (*(long *)(lVar14 + 0x70) - *(long *)(lVar14 + 0x68) >> 4) * -0x5555555555555555;
  if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9b46b8);
    (*pcVar2)();
  }
  FUN_10a44d540(extraout_x8,plVar4,*(long *)(lVar14 + 0x68) + uVar8 * 0x30 + 0x20);
  plVar4 = plVar5 + 0x4b;
  lVar14 = plVar5[0x59];
  uVar8 = lVar14 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar14 + 2];
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
  lVar14 = *plVar4;
  lVar13 = plVar5[0x4c];
  lVar11 = lVar13 - lVar14;
  uVar10 = lVar11 >> 4;
  if (uVar10 < uVar8) {
    uVar16 = uVar8 - uVar10;
    lVar15 = plVar5[0x4d];
    if ((ulong)(lVar15 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar15 - lVar14 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar14)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar10 * -0x10;
          _memcpy(lVar12,lVar14,lVar11);
          *plVar4 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar3 + uVar9 * 0x10;
          lStack_98 = lVar14;
          lStack_90 = lVar14;
          lStack_88 = lVar14;
          lStack_80 = lVar15;
          func_0x00010988c1b8(&lStack_98);
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
    _bzero(lVar13,uVar16 * 0x10);
    plVar5[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar10) {
    lVar14 = lVar14 + uVar8 * 0x10;
    while (lVar13 != lVar14) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar5[0x4c] = lVar14;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10a9b45d0; end: 10a9b46cb;  */

void FUN_10a9b45d0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
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
  FUN_10a9b4384(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar1 = *(uint *)(plVar5 + 3);
  lVar12 = plVar5[4];
  FUN_10a978384((ulong)uVar1,*(undefined8 *)(lVar12 + 0x68),*(undefined8 *)(lVar12 + 0x70));
  uVar6 = (ulong)uVar1 & 0x3fff;
  uVar8 = (*(long *)(lVar12 + 0x70) - *(long *)(lVar12 + 0x68) >> 4) * -0x5555555555555555;
  if (uVar8 < uVar6 || uVar8 - uVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9b46b8);
    (*pcVar2)();
  }
  FUN_10a44d540(param_1,param_2,*(long *)(lVar12 + 0x68) + uVar6 * 0x30 + 0x20);
  plVar5 = plVar4 + 0x4b;
  lVar12 = plVar4[0x59];
  uVar6 = lVar12 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar5[lVar12 + 2];
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
  lVar12 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar12;
  uVar8 = lVar9 >> 4;
  if (uVar8 < uVar6) {
    uVar14 = uVar6 - uVar8;
    lVar13 = plVar4[0x4d];
    if ((ulong)(lVar13 - lVar11 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar13 - lVar12 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar12)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar8 * -0x10;
          _memcpy(lVar10,lVar12,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar12;
          lStack_80 = lVar12;
          lStack_78 = lVar12;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar8) {
    lVar12 = lVar12 + uVar6 * 0x10;
    while (lVar11 != lVar12) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a9b46cc; end: 10a9b47e7;  */

void FUN_10a9b46cc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b4150(param_2,param_3);
  FUN_10a9b47e8(param_5);
  FUN_10a44d608(&stack0xffffffffffffffb0,param_2,param_4);
  func_0x00010a97b89c(plVar6,&stack0xffffffffffffffb0);
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



/* Entry: 10a9b47e8; end: 10a9b480b;  */

void FUN_10a9b47e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  uVar7 = 0;
  FUN_10a052ee0(1,0,param_1);
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
  FUN_10a9b4384(plVar4,uVar7);
  FUN_10a052e3c(param_4);
  lVar15 = plVar6[4];
  uVar1 = *(uint *)(plVar6 + 3);
  FUN_10a978384((ulong)uVar1,*(undefined8 *)(lVar15 + 0x68),*(undefined8 *)(lVar15 + 0x70));
  uVar8 = (ulong)uVar1 & 0x3fff;
  uVar10 = (*(long *)(lVar15 + 0x70) - *(long *)(lVar15 + 0x68) >> 4) * -0x5555555555555555;
  if (uVar8 <= uVar10 && uVar10 - uVar8 != 0) {
    lVar15 = *(long *)(lVar15 + 0x68) + uVar8 * 0x30;
    if (*(long *)(lVar15 + 8) == *(long *)(lVar15 + 0x10)) {
      FUN_10a00946c(&UNK_10f686a5c);
    }
    else {
      lVar15 = plVar6[4];
      uVar1 = *(uint *)(plVar6 + 3);
      FUN_10a978384((ulong)uVar1,*(undefined8 *)(lVar15 + 0x68),*(undefined8 *)(lVar15 + 0x70));
      uVar8 = (ulong)uVar1 & 0x3fff;
      uVar10 = (*(long *)(lVar15 + 0x70) - *(long *)(lVar15 + 0x68) >> 4) * -0x5555555555555555;
      if ((uVar8 <= uVar10 && uVar10 - uVar8 != 0) &&
         (lVar15 = *(long *)(lVar15 + 0x68) + uVar8 * 0x30, plVar6 = *(long **)(lVar15 + 8),
         *(long **)(lVar15 + 0x10) != plVar6)) {
        FUN_10a05b924(extraout_x8,plVar4,*plVar6 + 0x28);
        plVar4 = plVar5 + 0x4b;
        lVar15 = plVar5[0x59];
        uVar8 = lVar15 - 1;
        plVar5[0x59] = uVar8;
        if (uVar8 < 8) {
          uVar8 = plVar4[lVar15 + 2];
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
        lVar15 = *plVar4;
        lVar13 = plVar5[0x4c];
        lVar11 = lVar13 - lVar15;
        uVar10 = lVar11 >> 4;
        if (uVar10 < uVar8) {
          uVar16 = uVar8 - uVar10;
          lVar14 = plVar5[0x4d];
          if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
            if (uVar8 >> 0x3c == 0) {
              uVar9 = lVar14 - lVar15 >> 3;
              if (uVar9 <= uVar8) {
                uVar9 = uVar8;
              }
              if (0x7fffffffffffffef < (ulong)(lVar14 - lVar15)) {
                uVar9 = 0xfffffffffffffff;
              }
              plStack_78 = plVar4;
              if (uVar9 >> 0x3c == 0) {
                lVar3 = uVar9 << 4;
                __Znwm();
                lVar13 = lVar3 + lVar11;
                _bzero(lVar13,uVar16 * 0x10);
                lVar12 = lVar13 + uVar10 * -0x10;
                _memcpy(lVar12,lVar15,lVar11);
                *plVar4 = lVar12;
                plVar5[0x4c] = lVar13 + uVar16 * 0x10;
                plVar5[0x4d] = lVar3 + uVar9 * 0x10;
                lStack_98 = lVar15;
                lStack_90 = lVar15;
                lStack_88 = lVar15;
                lStack_80 = lVar14;
                func_0x00010988c1b8(&lStack_98);
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
          _bzero(lVar13,uVar16 * 0x10);
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
        }
        else if (uVar8 < uVar10) {
          lVar15 = lVar15 + uVar8 * 0x10;
          while (lVar13 != lVar15) {
            lVar13 = lVar13 + -0x10;
            func_0x00010988c204(lVar13);
          }
          plVar5[0x4c] = lVar15;
        }
code_r0x00010988c138:
        plVar5[0x5a] = uVar8;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9b495c);
  (*pcVar2)();
}



/* Entry: 10a9b480c; end: 10a9b496f;  */

void FUN_10a9b480c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
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
  FUN_10a9b4384(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar13 = plVar5[4];
  uVar1 = *(uint *)(plVar5 + 3);
  FUN_10a978384((ulong)uVar1,*(undefined8 *)(lVar13 + 0x68),*(undefined8 *)(lVar13 + 0x70));
  uVar6 = (ulong)uVar1 & 0x3fff;
  uVar8 = (*(long *)(lVar13 + 0x70) - *(long *)(lVar13 + 0x68) >> 4) * -0x5555555555555555;
  if (uVar6 <= uVar8 && uVar8 - uVar6 != 0) {
    lVar13 = *(long *)(lVar13 + 0x68) + uVar6 * 0x30;
    if (*(long *)(lVar13 + 8) == *(long *)(lVar13 + 0x10)) {
      FUN_10a00946c(&UNK_10f686a5c);
    }
    else {
      lVar13 = plVar5[4];
      uVar1 = *(uint *)(plVar5 + 3);
      FUN_10a978384((ulong)uVar1,*(undefined8 *)(lVar13 + 0x68),*(undefined8 *)(lVar13 + 0x70));
      uVar6 = (ulong)uVar1 & 0x3fff;
      uVar8 = (*(long *)(lVar13 + 0x70) - *(long *)(lVar13 + 0x68) >> 4) * -0x5555555555555555;
      if ((uVar6 <= uVar8 && uVar8 - uVar6 != 0) &&
         (lVar13 = *(long *)(lVar13 + 0x68) + uVar6 * 0x30, plVar5 = *(long **)(lVar13 + 8),
         *(long **)(lVar13 + 0x10) != plVar5)) {
        FUN_10a05b924(param_1,param_2,*plVar5 + 0x28);
        plVar5 = plVar4 + 0x4b;
        lVar13 = plVar4[0x59];
        uVar6 = lVar13 - 1;
        plVar4[0x59] = uVar6;
        if (uVar6 < 8) {
          uVar6 = plVar5[lVar13 + 2];
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
        lVar13 = *plVar5;
        lVar11 = plVar4[0x4c];
        lVar9 = lVar11 - lVar13;
        uVar8 = lVar9 >> 4;
        if (uVar8 < uVar6) {
          uVar14 = uVar6 - uVar8;
          lVar12 = plVar4[0x4d];
          if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
            if (uVar6 >> 0x3c == 0) {
              uVar7 = lVar12 - lVar13 >> 3;
              if (uVar7 <= uVar6) {
                uVar7 = uVar6;
              }
              if (0x7fffffffffffffef < (ulong)(lVar12 - lVar13)) {
                uVar7 = 0xfffffffffffffff;
              }
              plStack_68 = plVar5;
              if (uVar7 >> 0x3c == 0) {
                lVar3 = uVar7 << 4;
                __Znwm();
                lVar11 = lVar3 + lVar9;
                _bzero(lVar11,uVar14 * 0x10);
                lVar10 = lVar11 + uVar8 * -0x10;
                _memcpy(lVar10,lVar13,lVar9);
                *plVar5 = lVar10;
                plVar4[0x4c] = lVar11 + uVar14 * 0x10;
                plVar4[0x4d] = lVar3 + uVar7 * 0x10;
                lStack_88 = lVar13;
                lStack_80 = lVar13;
                lStack_78 = lVar13;
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
        else if (uVar6 < uVar8) {
          lVar13 = lVar13 + uVar6 * 0x10;
          while (lVar11 != lVar13) {
            lVar11 = lVar11 + -0x10;
            func_0x00010988c204(lVar11);
          }
          plVar4[0x4c] = lVar13;
        }
code_r0x00010988c138:
        plVar4[0x5a] = uVar6;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9b495c);
  (*pcVar2)();
}



/* Entry: 10a9b4970; end: 10a9b4a8b;  */

void FUN_10a9b4970(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b4150(param_2,param_3);
  FUN_10a1f9134(param_5);
  FUN_10a065cdc(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a97b980(plVar6,&stack0xffffffffffffffb0);
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



/* Entry: 10a9b4a8c; end: 10a9b4b63;  */

void FUN_10a9b4a8c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined4 uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
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
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a9b4b64(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = (undefined4)param_2[3];
  puVar10 = (undefined8 *)param_2[4];
  FUN_10a97bf1c(uVar2,*puVar10,puVar10[1]);
  func_0x00010a977544(puVar10,uVar2);
  FUN_10a9775b4(puVar10,uVar2);
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
  lVar12 = plVar5[0x4c];
  lVar9 = lVar12 - lVar6;
  uVar14 = lVar9 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar9;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar6,lVar9);
          *plVar1 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
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
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar12 != lVar6) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a9b4b64; end: 10a9b4bcb;  */

void FUN_10a9b4b64(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

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
      param_3 = &PTR_DAT_110c33940;
      param_4 = 0;
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
  FUN_10a9b4c84(extraout_x8,plVar4,FUN_10a97c13c,0,param_2,param_3,param_4);
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



/* Entry: 10a9b4bcc; end: 10a9b4c83;  */

void FUN_10a9b4bcc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b4c84(param_1,param_2,FUN_10a97c13c,0,param_3,param_4,param_5);
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



/* Entry: 10a9b4c84; end: 10a9b4e1b;  */

void FUN_10a9b4c84(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  int *param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar7 = param_2;
  FUN_10a9b4b64(param_2,param_5);
  FUN_10a9b4e1c(param_7);
  if (*param_6 != 1) {
    func_0x000109898688(param_2,param_6);
    if (param_2 == 0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      func_0x00010989879c(&lStack_60);
      plVar5 = &lStack_70;
      if ((lStack_60 != 0) &&
         (___dynamic_cast(lStack_60,&PTR_DAT_110b178e0,&PTR_DAT_110c338b8,0), plVar5 = &lStack_70,
         lStack_60 != 0)) {
        plStack_68 = plStack_58;
        plVar5 = &lStack_60;
        lStack_70 = lStack_60;
      }
      *plVar5 = 0;
      plVar5[1] = 0;
      if (plStack_58 != (long *)0x0) {
        plVar5 = plStack_58 + 1;
        do {
          lVar6 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
        }
      }
      if (lStack_70 != 0) goto LAB_10a9b4d78;
    }
    func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9b4e04);
    (*pcVar4)();
  }
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
LAB_10a9b4d78:
  plVar5 = (long *)(lVar7 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar5 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar5,&lStack_70);
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
  *param_1 = 0;
  return;
}



/* Entry: 10a9b4e1c; end: 10a9b4e3f;  */

void FUN_10a9b4e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
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
  FUN_10a9b4c84(extraout_x8,plVar3,FUN_10a97c304,0,uVar5,param_1,param_4);
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



/* Entry: 10a9b4e40; end: 10a9b4ef7;  */

void FUN_10a9b4e40(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b4c84(param_1,param_2,FUN_10a97c304,0,param_3,param_4,param_5);
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



/* Entry: 10a9b4ef8; end: 10a9b5003;  */

void FUN_10a9b4ef8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
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
  FUN_10a9b50cc(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar1 = *(uint *)(param_2 + 3);
  plVar11 = (long *)param_2[4];
  FUN_10a97bf1c((ulong)uVar1,*plVar11,plVar11[1]);
  uVar7 = (ulong)uVar1 & 0x3fff;
  uVar9 = (plVar11[1] - *plVar11 >> 3) * -0x71c71c71c71c71c7;
  if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9b4ff0);
    (*pcVar3)();
  }
  cVar2 = *(char *)(*plVar11 + uVar7 * 0x48);
  *param_1 = 2;
  *(bool *)(param_1 + 2) = cVar2 == '\0';
  plVar11 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar11[lVar6 + 2];
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
  lVar6 = *plVar11;
  lVar13 = plVar5[0x4c];
  lVar10 = lVar13 - lVar6;
  uVar9 = lVar10 >> 4;
  if (uVar9 < uVar7) {
    uVar15 = uVar7 - uVar9;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar14 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar11;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar13 = lVar4 + lVar10;
          _bzero(lVar13,uVar15 * 0x10);
          lVar12 = lVar13 + uVar9 * -0x10;
          _memcpy(lVar12,lVar6,lVar10);
          *plVar11 = lVar12;
          plVar5[0x4c] = lVar13 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar13,uVar15 * 0x10);
    plVar5[0x4c] = lVar13 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar9) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar13 != lVar6) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a9b5004; end: 10a9b50cb;  */

void FUN_10a9b5004(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b4b64(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  FUN_10a97bf80(plVar4,param_2);
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



/* Entry: 10a9b50cc; end: 10a9b5133;  */

void FUN_10a9b50cc(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

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
  uint in_stack_ffffffffffffff88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar3);
    param_2 = ppuVar3;
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
  FUN_10a9b50cc(plVar4,param_2);
  FUN_10a052e3c(param_4);
  func_0x00010a97bff8(&plStack_88,plVar4);
  if (in_stack_ffffffffffffff88 == 0xffffffff) {
    func_0x00010988bd28(&UNK_10f634b57);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9b5224);
    (*pcVar1)();
  }
  (*(code *)(&PTR_FUN_110c34e78)[in_stack_ffffffffffffff88])
            (extraout_x8,&stack0xffffffffffffff98,&plStack_88);
  FUN_10a9b565c(&plStack_88);
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



/* Entry: 10a9b5134; end: 10a9b5247;  */

void FUN_10a9b5134(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b50cc(param_2,param_3);
  FUN_10a052e3c(param_5);
  func_0x00010a97bff8(&plStack_68,param_2);
  if (in_stack_ffffffffffffffa8 == 0xffffffff) {
    func_0x00010988bd28(&UNK_10f634b57);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9b5224);
    (*pcVar2)();
  }
  (*(code *)(&PTR_FUN_110c34e78)[in_stack_ffffffffffffffa8])
            (param_1,&stack0xffffffffffffffb8,&plStack_68);
  FUN_10a9b565c(&plStack_68);
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



/* Entry: 10a9b5248; end: 10a9b5597;  */

void FUN_10a9b5248(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long lStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
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
  FUN_10a9b4b64(param_2,param_3);
  FUN_10a9b56c8(param_5);
  plVar17 = param_2;
  func_0x000109898688(param_2,param_4);
  if (plVar17 == (long *)0x0) {
LAB_10a9b53d0:
    plVar17 = param_2;
    func_0x000109898688(param_2,param_4);
    if (plVar17 != (long *)0x0) {
      FUN_10a1fc684(&lStack_70);
      plVar17 = plStack_68;
      lVar10 = lStack_70;
      if (plStack_68 != (long *)0x0) {
        plVar16 = plStack_68 + 1;
        do {
          lVar13 = *plVar16;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar5) {
            *plVar16 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      if (lVar10 != 0) {
        FUN_10a3bdee4(&lStack_70,param_2,param_4);
        plStack_88 = plStack_68;
        lStack_90 = lStack_70;
        uStack_80 = (long *)CONCAT44(uStack_80._4_4_,1);
        plVar17 = (long *)plVar9[4];
        uVar2 = *(uint *)(plVar9 + 3);
        FUN_10a97bf1c((ulong)uVar2,*plVar17,plVar17[1]);
        plStack_68 = plStack_88;
        lStack_70 = lStack_90;
        if (plStack_88 != (long *)0x0) {
          plVar16 = plStack_88 + 2;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar5) {
              *plVar16 = *plVar16 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uVar11 = (ulong)uVar2 & 0x3fff;
        uVar14 = (plVar17[1] - *plVar17 >> 3) * -0x71c71c71c71c71c7;
        if (uVar14 < uVar11 || uVar14 - uVar11 == 0) goto LAB_10a9b555c;
        FUN_10a90fda4(*plVar17 + uVar11 * 0x48 + 0x30,&lStack_70);
        FUN_10a3f9220(&lStack_70);
        plVar17 = (long *)plVar9[10];
        plVar9[9] = 0;
        plVar9[10] = 0;
        if (plVar17 != (long *)0x0) {
          plVar9 = plVar17 + 1;
          do {
            lVar10 = *plVar9;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *plVar9 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        goto SUB_10988c170;
      }
    }
    func_0x00010988bd28(&UNK_10f634795);
LAB_10a9b555c:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a9b5560);
    (*pcVar6)();
  }
  FUN_10a9b5770(&lStack_70,plVar17);
  plVar17 = plStack_68;
  lVar10 = lStack_70;
  if (plStack_68 != (long *)0x0) {
    plVar16 = plStack_68 + 1;
    do {
      lVar13 = *plVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  if (lVar10 == 0) goto LAB_10a9b53d0;
  uStack_80._4_4_ = (uint)((ulong)uStack_80 >> 0x20);
  FUN_10a9b56ec(&lStack_70,param_2,param_4);
  plStack_88 = plStack_68;
  lStack_90 = lStack_70;
  uStack_80 = (long *)((ulong)uStack_80._4_4_ << 0x20);
  if (lStack_70 == 0) {
    FUN_10a00946c(&UNK_10f686b24);
    goto LAB_10a9b555c;
  }
  plVar17 = (long *)plVar9[4];
  uVar2 = *(uint *)(plVar9 + 3);
  FUN_10a97bf1c((ulong)uVar2,*plVar17,plVar17[1]);
  uVar3 = *(undefined4 *)(lStack_90 + 0x18);
  FUN_10a9781b4(uVar3,*(undefined8 *)(*(long *)(lStack_90 + 0x20) + 0x88),
                *(undefined8 *)(*(long *)(lStack_90 + 0x20) + 0x90));
  lStack_70 = CONCAT44(lStack_70._4_4_,uVar3);
  uVar11 = (ulong)uVar2 & 0x3fff;
  uVar14 = (plVar17[1] - *plVar17 >> 3) * -0x71c71c71c71c71c7;
  if (uVar14 < uVar11 || uVar14 - uVar11 == 0) goto LAB_10a9b555c;
  FUN_10a90fda4(*plVar17 + uVar11 * 0x48 + 0x30,&lStack_70);
  FUN_10a3f9220(&lStack_70);
  FUN_10a97c0c8(plVar9 + 9,lStack_90,plStack_88);
SUB_10988c170:
  FUN_10a9b565c(&lStack_90);
  *param_1 = 0;
  plVar9 = plVar8 + 0x4b;
  lVar10 = plVar8[0x59];
  uVar11 = lVar10 - 1;
  plVar8[0x59] = uVar11;
  if (uVar11 < 8) {
    uVar11 = plVar9[lVar10 + 2];
    if (plVar8[0x5a] == uVar11) {
      return;
    }
  }
  else {
    uVar11 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar11) {
      return;
    }
  }
  plVar17 = (long *)*plVar9;
  plVar16 = (long *)plVar8[0x4c];
  lVar10 = (long)plVar16 - (long)plVar17;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar11) {
    uVar18 = uVar11 - uVar14;
    lVar13 = plVar8[0x4d];
    if ((ulong)(lVar13 - (long)plVar16 >> 4) < uVar18) {
      if (uVar11 >> 0x3c == 0) {
        uVar12 = lVar13 - (long)plVar17 >> 3;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - (long)plVar17)) {
          uVar12 = 0xfffffffffffffff;
        }
        plStack_68 = plVar9;
        if (uVar12 >> 0x3c == 0) {
          lVar7 = uVar12 << 4;
          __Znwm();
          lVar1 = lVar7 + lVar10;
          _bzero(lVar1,uVar18 * 0x10);
          lVar15 = lVar1 + uVar14 * -0x10;
          _memcpy(lVar15,plVar17,lVar10);
          *plVar9 = lVar15;
          plVar8[0x4c] = lVar1 + uVar18 * 0x10;
          plVar8[0x4d] = lVar7 + uVar12 * 0x10;
          plStack_88 = plVar17;
          uStack_80 = plVar17;
          plStack_78 = plVar17;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&plStack_88);
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
    _bzero(plVar16,uVar18 * 0x10);
    plVar8[0x4c] = (long)(plVar16 + uVar18 * 2);
  }
  else if (uVar11 < uVar14) {
    while (plVar16 != plVar17 + uVar11 * 2) {
      plVar16 = plVar16 + -2;
      func_0x00010988c204(plVar16);
    }
    plVar8[0x4c] = (long)(plVar17 + uVar11 * 2);
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar11;
  return;
}



/* Entry: 10a9b5598; end: 10a9b55bb;  */

void FUN_10a9b5598(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  uVar5 = *(undefined8 *)*param_2;
  uStack_30 = *param_3;
  plStack_28 = (long *)param_3[1];
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
  ppuStack_38 = &PTR_DAT_110c33578;
  func_0x000109899de4(param_1,uVar5,&uStack_30,&ppuStack_38,0,0);
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



/* Entry: 10a9b55bc; end: 10a9b565b;  */

void FUN_10a9b55bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  if (param_4 != (long *)0x0) {
    plVar1 = param_4 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_38 = &PTR_DAT_110c33578;
  uStack_30 = param_3;
  plStack_28 = param_4;
  func_0x000109899de4(param_1,param_2,&uStack_30,&ppuStack_38,0,0);
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



/* Entry: 10a9b565c; end: 10a9b56af;  */

void FUN_10a9b565c(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110c34e88)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 10a9b56b0; end: 10a9b56c7;  */

long FUN_10a9b56b0(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 8);
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
  return param_2;
}



/* Entry: 10a9b56c8; end: 10a9b56eb;  */

void FUN_10a9b56c8(int *param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar2 = (long *)0x1;
  lVar3 = 0;
  FUN_10a052ee0();
  if (*param_1 != 1) {
    func_0x000109898688(lVar3,param_1);
    if (lVar3 == 0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      FUN_10a9b5770(plVar2,lVar3);
      if (*plVar2 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9b575c);
    (*pcVar1)();
  }
  *plVar2 = 0;
  plVar2[1] = 0;
  return;
}



/* Entry: 10a9b56ec; end: 10a9b576f;  */

void FUN_10a9b56ec(long *param_1,long param_2,int *param_3)

{
  code *pcVar1;
  
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
    FUN_10a9b5770(param_1,param_2);
    if (*param_1 != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9b575c);
  (*pcVar1)();
}



/* Entry: 10a9b5770; end: 10a9b580b;  */

void FUN_10a9b5770(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  func_0x00010989879c(&lStack_30,param_2);
  if ((lStack_30 != 0) &&
     (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110c33578,0), lStack_30 != 0)) {
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



/* Entry: 10a9b580c; end: 10a9b5a17;  */

void FUN_10a9b580c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long *plVar17;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  undefined **ppuStack_68;
  long in_stack_ffffffffffffffa0;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar17 = param_2;
  FUN_10a9b50cc(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar9 = plVar17[6];
  lVar15 = plVar17[7];
  lVar14 = lVar15 - lVar9 >> 4;
  (**(code **)(*param_2 + 600))(&stack0xffffffffffffffa0,param_2,lVar14);
  lStack_70 = in_stack_ffffffffffffffa0;
  if (lVar15 != lVar9) {
    lVar15 = 0;
    do {
      lVar13 = lVar9 + lVar15 * 0x10;
      lVar11 = *(long *)(lVar13 + 8);
      plVar17 = *(long **)(lVar13 + 8);
      if (lVar11 != 0) {
        plVar1 = (long *)(lVar11 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppuStack_68 = &PTR_DAT_110c338b8;
      func_0x000109899de4(&puStack_80,param_2,&stack0xffffffffffffffa0,&ppuStack_68,0,0);
      if (plVar17 != (long *)0x0) {
        plVar1 = plVar17 + 1;
        do {
          lVar13 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      (**(code **)(*param_2 + 0x290))(param_2,&lStack_70,lVar15,&puStack_80);
      if ((3 < (int)puStack_80) && (puStack_78 != (undefined8 *)0x0)) {
        (**(code **)*puStack_78)();
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != lVar14);
  }
  *param_1 = 7;
  *(long *)(param_1 + 2) = lStack_70;
  ppuVar2 = (undefined **)(plVar7 + 0x4b);
  lVar9 = plVar7[0x59];
  uVar10 = lVar9 - 1;
  plVar7[0x59] = uVar10;
  if (uVar10 < 8) {
    puVar8 = ppuVar2[lVar9 + 2];
    if ((undefined *)plVar7[0x5a] == puVar8) {
      return;
    }
  }
  else {
    puVar8 = *(undefined **)(plVar7[0x57] + -8);
    plVar7[0x57] = (long)(plVar7[0x57] + -8);
    if ((undefined *)plVar7[0x5a] == puVar8) {
      return;
    }
  }
  puVar3 = *ppuVar2;
  puVar12 = (undefined *)plVar7[0x4c];
  lVar9 = (long)puVar12 - (long)puVar3;
  puVar16 = (undefined *)(lVar9 >> 4);
  if (puVar16 < puVar8) {
    uVar10 = (long)puVar8 - (long)puVar16;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - (long)puVar12 >> 4) < uVar10) {
      if ((ulong)puVar8 >> 0x3c == 0) {
        puVar12 = (undefined *)(lVar15 - (long)puVar3 >> 3);
        if (puVar12 <= puVar8) {
          puVar12 = puVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - (long)puVar3)) {
          puVar12 = (undefined *)0xfffffffffffffff;
        }
        ppuStack_68 = ppuVar2;
        if ((ulong)puVar12 >> 0x3c == 0) {
          lVar13 = (long)puVar12 << 4;
          __Znwm();
          lVar14 = lVar13 + lVar9;
          _bzero(lVar14,uVar10 * 0x10);
          puVar16 = (undefined *)(lVar14 + (long)puVar16 * -0x10);
          _memcpy(puVar16,puVar3,lVar9);
          *ppuVar2 = puVar16;
          plVar7[0x4c] = lVar14 + uVar10 * 0x10;
          plVar7[0x4d] = lVar13 + (long)puVar12 * 0x10;
          puStack_88 = puVar3;
          puStack_80 = puVar3;
          puStack_78 = (undefined8 *)puVar3;
          lStack_70 = lVar15;
          func_0x00010988c1b8(&puStack_88);
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
    _bzero(puVar12,uVar10 * 0x10);
    plVar7[0x4c] = (long)(puVar12 + uVar10 * 0x10);
  }
  else if (puVar8 < puVar16) {
    while (puVar12 != puVar3 + (long)puVar8 * 0x10) {
      puVar12 = puVar12 + -0x10;
      func_0x00010988c204(puVar12);
    }
    plVar7[0x4c] = (long)(puVar3 + (long)puVar8 * 0x10);
  }
code_r0x00010988c138:
  plVar7[0x5a] = (long)puVar8;
  return;
}



/* Entry: 10a9b5a18; end: 10a9b5acf;  */

void FUN_10a9b5a18(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b50cc(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a9b55bc(param_1,param_2,plVar4[9],plVar4[10]);
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



/* Entry: 10a9b5ad0; end: 10a9b5beb;  */

void FUN_10a9b5ad0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b4b64(param_2,param_3);
  FUN_10a9b5bec(param_5);
  FUN_10a9b56ec(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a97c510(plVar6,&stack0xffffffffffffffb0);
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



/* Entry: 10a9b5bec; end: 10a9b5c0f;  */

void FUN_10a9b5bec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
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
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  uVar6 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a9b5cf0(plVar4,uVar6);
  FUN_10a052e3c(param_4);
  uVar1 = (undefined4)plVar4[3];
  lVar12 = plVar4[4];
  FUN_10a97c2a8(uVar1,*(undefined8 *)(lVar12 + 0x20),*(undefined8 *)(lVar12 + 0x28));
  FUN_10a977780(lVar12,uVar1);
  FUN_10a91000c((undefined8 *)(lVar12 + 0x20),uVar1);
  *extraout_x8 = 0;
  plVar4 = plVar5 + 0x4b;
  lVar12 = plVar5[0x59];
  uVar7 = lVar12 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar12 + 2];
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
  lVar12 = *plVar4;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar12;
  uVar14 = lVar9 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar11 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar12 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar12)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_78 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar15 * 0x10);
          lVar10 = lVar11 + uVar14 * -0x10;
          _memcpy(lVar10,lVar12,lVar9);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar15 * 0x10;
          plVar5[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_98 = lVar12;
          lStack_90 = lVar12;
          lStack_88 = lVar12;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar15 * 0x10);
    plVar5[0x4c] = lVar11 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar12 = lVar12 + uVar7 * 0x10;
    while (lVar11 != lVar12) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a9b5c10; end: 10a9b5cef;  */

void FUN_10a9b5c10(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined4 uVar2;
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
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a9b5cf0(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = (undefined4)param_2[3];
  lVar11 = param_2[4];
  FUN_10a97c2a8(uVar2,*(undefined8 *)(lVar11 + 0x20),*(undefined8 *)(lVar11 + 0x28));
  FUN_10a977780(lVar11,uVar2);
  FUN_10a91000c((undefined8 *)(lVar11 + 0x20),uVar2);
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar11 = plVar5[0x59];
  uVar6 = lVar11 - 1;
  plVar5[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar11 + 2];
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
  lVar11 = *plVar1;
  lVar10 = plVar5[0x4c];
  lVar8 = lVar10 - lVar11;
  uVar13 = lVar8 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar10 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar12 - lVar11 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar11)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar4 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar4 + lVar8;
          _bzero(lVar10,uVar14 * 0x10);
          lVar9 = lVar10 + uVar13 * -0x10;
          _memcpy(lVar9,lVar11,lVar8);
          *plVar1 = lVar9;
          plVar5[0x4c] = lVar10 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar7 * 0x10;
          lStack_88 = lVar11;
          lStack_80 = lVar11;
          lStack_78 = lVar11;
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
    _bzero(lVar10,uVar14 * 0x10);
    plVar5[0x4c] = lVar10 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar13) {
    lVar11 = lVar11 + uVar6 * 0x10;
    while (lVar10 != lVar11) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar5[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar6;
  return;
}



/* Entry: 10a9b5cf0; end: 10a9b5d57;  */

void FUN_10a9b5cf0(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

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
      param_3 = &PTR_DAT_110c338b8;
      param_4 = 0;
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
  FUN_10a9b5e10(extraout_x8,plVar4,FUN_10a97ca50,0,param_2,param_3,param_4);
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



/* Entry: 10a9b5d58; end: 10a9b5e0f;  */

void FUN_10a9b5d58(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b5e10(param_1,param_2,FUN_10a97ca50,0,param_3,param_4,param_5);
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



/* Entry: 10a9b5e10; end: 10a9b5fa7;  */

void FUN_10a9b5e10(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  int *param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar7 = param_2;
  FUN_10a9b5cf0(param_2,param_5);
  FUN_10a9b5fa8(param_7);
  if (*param_6 != 1) {
    func_0x000109898688(param_2,param_6);
    if (param_2 == 0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      func_0x00010989879c(&lStack_60);
      plVar5 = &lStack_70;
      if ((lStack_60 != 0) &&
         (___dynamic_cast(lStack_60,&PTR_DAT_110b178e0,&PTR_DAT_110c33600,0), plVar5 = &lStack_70,
         lStack_60 != 0)) {
        plStack_68 = plStack_58;
        plVar5 = &lStack_60;
        lStack_70 = lStack_60;
      }
      *plVar5 = 0;
      plVar5[1] = 0;
      if (plStack_58 != (long *)0x0) {
        plVar5 = plStack_58 + 1;
        do {
          lVar6 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
        }
      }
      if (lStack_70 != 0) goto LAB_10a9b5f04;
    }
    func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9b5f90);
    (*pcVar4)();
  }
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
LAB_10a9b5f04:
  plVar5 = (long *)(lVar7 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar5 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar5,&lStack_70);
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
  *param_1 = 0;
  return;
}



/* Entry: 10a9b5fa8; end: 10a9b5fcb;  */

void FUN_10a9b5fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
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
  FUN_10a9b5e10(extraout_x8,plVar3,FUN_10a97cbbc,0,uVar5,param_1,param_4);
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



/* Entry: 10a9b5fcc; end: 10a9b6083;  */

void FUN_10a9b5fcc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b5e10(param_1,param_2,FUN_10a97cbbc,0,param_3,param_4,param_5);
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



/* Entry: 10a9b6084; end: 10a9b6187;  */

void FUN_10a9b6084(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
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
  FUN_10a9b6250(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(uint *)(param_2 + 3);
  lVar11 = param_2[4];
  FUN_10a97c2a8((ulong)uVar2,*(undefined8 *)(lVar11 + 0x20),*(undefined8 *)(lVar11 + 0x28));
  uVar7 = (ulong)uVar2 & 0x3fff;
  uVar9 = (*(long *)(lVar11 + 0x28) - *(long *)(lVar11 + 0x20) >> 3) * -0x3333333333333333;
  if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9b6174);
    (*pcVar4)();
  }
  cVar3 = *(char *)(*(long *)(lVar11 + 0x20) + uVar7 * 0x28);
  *param_1 = 2;
  *(bool *)(param_1 + 2) = cVar3 == '\0';
  plVar1 = plVar6 + 0x4b;
  lVar11 = plVar6[0x59];
  uVar7 = lVar11 - 1;
  plVar6[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar11 + 2];
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
  lVar11 = *plVar1;
  lVar13 = plVar6[0x4c];
  lVar10 = lVar13 - lVar11;
  uVar9 = lVar10 >> 4;
  if (uVar9 < uVar7) {
    uVar15 = uVar7 - uVar9;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar14 - lVar11 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar11)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar5 = uVar8 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar10;
          _bzero(lVar13,uVar15 * 0x10);
          lVar12 = lVar13 + uVar9 * -0x10;
          _memcpy(lVar12,lVar11,lVar10);
          *plVar1 = lVar12;
          plVar6[0x4c] = lVar13 + uVar15 * 0x10;
          plVar6[0x4d] = lVar5 + uVar8 * 0x10;
          lStack_88 = lVar11;
          lStack_80 = lVar11;
          lStack_78 = lVar11;
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
    _bzero(lVar13,uVar15 * 0x10);
    plVar6[0x4c] = lVar13 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar9) {
    lVar11 = lVar11 + uVar7 * 0x10;
    while (lVar13 != lVar11) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar7;
  return;
}



/* Entry: 10a9b6188; end: 10a9b624f;  */

void FUN_10a9b6188(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b5cf0(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  FUN_10a97c9e0(plVar4,param_2);
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



/* Entry: 10a9b6250; end: 10a9b62b7;  */

void FUN_10a9b6250(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined **ppuVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *extraout_x8;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long *plVar18;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined **ppuStack_88;
  long in_stack_ffffffffffffff80;
  
  ppuVar6 = param_1;
  func_0x000109898688();
  if (ppuVar6 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar6);
    param_2 = ppuVar6;
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
  plVar18 = plVar7;
  FUN_10a9b6250(plVar7,param_2);
  FUN_10a052e3c(param_4);
  lVar10 = plVar18[6];
  lVar16 = plVar18[7];
  lVar15 = lVar16 - lVar10 >> 4;
  (**(code **)(*plVar7 + 600))(&stack0xffffffffffffff80,plVar7,lVar15);
  lStack_90 = in_stack_ffffffffffffff80;
  if (lVar16 != lVar10) {
    lVar16 = 0;
    do {
      lVar14 = lVar10 + lVar16 * 0x10;
      lVar12 = *(long *)(lVar14 + 8);
      plVar18 = *(long **)(lVar14 + 8);
      if (lVar12 != 0) {
        plVar1 = (long *)(lVar12 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppuStack_88 = &PTR_DAT_110c33600;
      func_0x000109899de4(&puStack_a0,plVar7,&stack0xffffffffffffff80,&ppuStack_88,0,0);
      if (plVar18 != (long *)0x0) {
        plVar1 = plVar18 + 1;
        do {
          lVar14 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
      (**(code **)(*plVar7 + 0x290))(plVar7,&lStack_90,lVar16,&puStack_a0);
      if ((3 < (int)puStack_a0) && (puStack_98 != (undefined8 *)0x0)) {
        (**(code **)*puStack_98)();
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != lVar15);
  }
  *extraout_x8 = 7;
  *(long *)(extraout_x8 + 2) = lStack_90;
  ppuVar6 = (undefined **)(plVar8 + 0x4b);
  lVar10 = plVar8[0x59];
  uVar11 = lVar10 - 1;
  plVar8[0x59] = uVar11;
  if (uVar11 < 8) {
    puVar9 = ppuVar6[lVar10 + 2];
    if ((undefined *)plVar8[0x5a] == puVar9) {
      return;
    }
  }
  else {
    puVar9 = *(undefined **)(plVar8[0x57] + -8);
    plVar8[0x57] = (long)(plVar8[0x57] + -8);
    if ((undefined *)plVar8[0x5a] == puVar9) {
      return;
    }
  }
  puVar2 = *ppuVar6;
  puVar13 = (undefined *)plVar8[0x4c];
  lVar10 = (long)puVar13 - (long)puVar2;
  puVar17 = (undefined *)(lVar10 >> 4);
  if (puVar17 < puVar9) {
    uVar11 = (long)puVar9 - (long)puVar17;
    lVar16 = plVar8[0x4d];
    if ((ulong)(lVar16 - (long)puVar13 >> 4) < uVar11) {
      if ((ulong)puVar9 >> 0x3c == 0) {
        puVar13 = (undefined *)(lVar16 - (long)puVar2 >> 3);
        if (puVar13 <= puVar9) {
          puVar13 = puVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - (long)puVar2)) {
          puVar13 = (undefined *)0xfffffffffffffff;
        }
        ppuStack_88 = ppuVar6;
        if ((ulong)puVar13 >> 0x3c == 0) {
          lVar14 = (long)puVar13 << 4;
          __Znwm();
          lVar15 = lVar14 + lVar10;
          _bzero(lVar15,uVar11 * 0x10);
          puVar17 = (undefined *)(lVar15 + (long)puVar17 * -0x10);
          _memcpy(puVar17,puVar2,lVar10);
          *ppuVar6 = puVar17;
          plVar8[0x4c] = lVar15 + uVar11 * 0x10;
          plVar8[0x4d] = lVar14 + (long)puVar13 * 0x10;
          puStack_a8 = puVar2;
          puStack_a0 = puVar2;
          puStack_98 = (undefined8 *)puVar2;
          lStack_90 = lVar16;
          func_0x00010988c1b8(&puStack_a8);
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
    _bzero(puVar13,uVar11 * 0x10);
    plVar8[0x4c] = (long)(puVar13 + uVar11 * 0x10);
  }
  else if (puVar9 < puVar17) {
    while (puVar13 != puVar2 + (long)puVar9 * 0x10) {
      puVar13 = puVar13 + -0x10;
      func_0x00010988c204(puVar13);
    }
    plVar8[0x4c] = (long)(puVar2 + (long)puVar9 * 0x10);
  }
code_r0x00010988c138:
  plVar8[0x5a] = (long)puVar9;
  return;
}



/* Entry: 10a9b62b8; end: 10a9b64c3;  */

void FUN_10a9b62b8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long *plVar17;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  undefined **ppuStack_68;
  long in_stack_ffffffffffffffa0;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar17 = param_2;
  FUN_10a9b6250(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar9 = plVar17[6];
  lVar15 = plVar17[7];
  lVar14 = lVar15 - lVar9 >> 4;
  (**(code **)(*param_2 + 600))(&stack0xffffffffffffffa0,param_2,lVar14);
  lStack_70 = in_stack_ffffffffffffffa0;
  if (lVar15 != lVar9) {
    lVar15 = 0;
    do {
      lVar13 = lVar9 + lVar15 * 0x10;
      lVar11 = *(long *)(lVar13 + 8);
      plVar17 = *(long **)(lVar13 + 8);
      if (lVar11 != 0) {
        plVar1 = (long *)(lVar11 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppuStack_68 = &PTR_DAT_110c33600;
      func_0x000109899de4(&puStack_80,param_2,&stack0xffffffffffffffa0,&ppuStack_68,0,0);
      if (plVar17 != (long *)0x0) {
        plVar1 = plVar17 + 1;
        do {
          lVar13 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      (**(code **)(*param_2 + 0x290))(param_2,&lStack_70,lVar15,&puStack_80);
      if ((3 < (int)puStack_80) && (puStack_78 != (undefined8 *)0x0)) {
        (**(code **)*puStack_78)();
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != lVar14);
  }
  *param_1 = 7;
  *(long *)(param_1 + 2) = lStack_70;
  ppuVar2 = (undefined **)(plVar7 + 0x4b);
  lVar9 = plVar7[0x59];
  uVar10 = lVar9 - 1;
  plVar7[0x59] = uVar10;
  if (uVar10 < 8) {
    puVar8 = ppuVar2[lVar9 + 2];
    if ((undefined *)plVar7[0x5a] == puVar8) {
      return;
    }
  }
  else {
    puVar8 = *(undefined **)(plVar7[0x57] + -8);
    plVar7[0x57] = (long)(plVar7[0x57] + -8);
    if ((undefined *)plVar7[0x5a] == puVar8) {
      return;
    }
  }
  puVar3 = *ppuVar2;
  puVar12 = (undefined *)plVar7[0x4c];
  lVar9 = (long)puVar12 - (long)puVar3;
  puVar16 = (undefined *)(lVar9 >> 4);
  if (puVar16 < puVar8) {
    uVar10 = (long)puVar8 - (long)puVar16;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - (long)puVar12 >> 4) < uVar10) {
      if ((ulong)puVar8 >> 0x3c == 0) {
        puVar12 = (undefined *)(lVar15 - (long)puVar3 >> 3);
        if (puVar12 <= puVar8) {
          puVar12 = puVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - (long)puVar3)) {
          puVar12 = (undefined *)0xfffffffffffffff;
        }
        ppuStack_68 = ppuVar2;
        if ((ulong)puVar12 >> 0x3c == 0) {
          lVar13 = (long)puVar12 << 4;
          __Znwm();
          lVar14 = lVar13 + lVar9;
          _bzero(lVar14,uVar10 * 0x10);
          puVar16 = (undefined *)(lVar14 + (long)puVar16 * -0x10);
          _memcpy(puVar16,puVar3,lVar9);
          *ppuVar2 = puVar16;
          plVar7[0x4c] = lVar14 + uVar10 * 0x10;
          plVar7[0x4d] = lVar13 + (long)puVar12 * 0x10;
          puStack_88 = puVar3;
          puStack_80 = puVar3;
          puStack_78 = (undefined8 *)puVar3;
          lStack_70 = lVar15;
          func_0x00010988c1b8(&puStack_88);
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
    _bzero(puVar12,uVar10 * 0x10);
    plVar7[0x4c] = (long)(puVar12 + uVar10 * 0x10);
  }
  else if (puVar8 < puVar16) {
    while (puVar12 != puVar3 + (long)puVar8 * 0x10) {
      puVar12 = puVar12 + -0x10;
      func_0x00010988c204(puVar12);
    }
    plVar7[0x4c] = (long)(puVar3 + (long)puVar8 * 0x10);
  }
code_r0x00010988c138:
  plVar7[0x5a] = (long)puVar8;
  return;
}



/* Entry: 10a9b64c4; end: 10a9b65ab;  */

void FUN_10a9b64c4(undefined8 *param_1,undefined8 param_2,uint param_3)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9b6538);
  (*pcVar1)();
}



/* Entry: 10a9b65ac; end: 10a9b6893;  */

undefined8 ** FUN_10a9b65ac(long *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  uint *puVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long *plVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  undefined8 uVar28;
  long lStack_118;
  ulong uStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long *plStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  undefined8 *puStack_68;
  
  ppuVar9 = &puStack_90;
  lVar27 = *param_1;
  plVar24 = (long *)param_1[1];
  lVar18 = (long)plVar24 - lVar27 >> 4;
  uVar25 = lVar18 * -0x5555555555555555;
  uVar21 = ((uint)uVar25 & 0x7fff) << 1;
  if (uVar21 < 0xb) {
    uVar21 = 10;
  }
  if (0x3ffd < uVar21) {
    uVar21 = 0x3ffe;
  }
  uVar26 = (ulong)uVar21;
  uVar15 = uVar26 + lVar18 * 0x5555555555555555;
  if (uVar26 < uVar25 || uVar15 == 0) {
    ppuVar9 = (undefined8 **)param_1;
    if (uVar26 < uVar25) {
      func_0x00010a3f8fb8(param_1,lVar27 + uVar26 * 0x30);
    }
  }
  else if ((ulong)((param_1[2] - (long)plVar24 >> 4) * -0x5555555555555555) < uVar15) {
    lVar13 = param_1[2] - lVar27 >> 4;
    uVar16 = lVar13 * 0x5555555555555556;
    if (uVar16 < uVar26 || uVar16 - uVar26 == 0) {
      uVar16 = uVar26;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar13 * -0x5555555555555555)) {
      uVar16 = 0x555555555555555;
    }
    plStack_70 = param_1;
    if (0x555555555555555 < uVar16) {
      plVar10 = param_1;
      func_0x000109ffded8();
      plStack_80 = plVar24;
      FUN_10a9b6a3c(&puStack_90);
      plVar11 = plVar10;
      __Unwind_Resume();
      pcStack_98 = FUN_10a9b6894;
      lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      *(undefined1 *)plVar11 = 0;
      *(undefined2 *)((long)plVar11 + 2) = 0x3fff;
      *(undefined4 *)((long)plVar11 + 4) = 0;
      plVar12 = (long *)0x90;
      uStack_c0 = uVar25;
      plStack_b8 = plVar24;
      plStack_b0 = plVar10;
      plStack_a8 = param_1;
      puStack_a0 = &stack0xfffffffffffffff0;
      __Znwm();
      plVar24 = plVar11 + 1;
      plVar12[1] = 0;
      plVar12[2] = 0;
      *plVar12 = (long)&PTR_DAT_110bd9c58;
      *(undefined1 *)(plVar12 + 4) = 0;
      plVar12[7] = 0;
      plVar12[6] = 0;
      plVar12[9] = 0;
      plVar12[8] = 0;
      plVar12[0xb] = 0;
      plVar12[10] = 0;
      plVar12[0xd] = 0;
      plVar12[0xc] = 0;
      plVar12[0xe] = 0;
      plStack_d8 = plVar12 + 3;
      *plStack_d8 = (long)&PTR_DAT_110bd6cc8;
      plVar12[5] = (long)&PTR_DAT_110bd6d28;
      *(undefined1 *)(plVar12 + 0xf) = 0;
      *(undefined8 *)((long)plVar12 + 0x84) = 0x3f80000000000000;
      *(undefined8 *)((long)plVar12 + 0x7c) = 0;
      *(undefined1 *)((long)plVar12 + 0x8c) = 0;
      plVar11[2] = 0;
      plVar11[3] = 0;
      *plVar24 = 0;
      plStack_d0 = plVar12;
      FUN_10a5e7178(plVar24,&plStack_d8,&lStack_c8,1);
      plVar10 = plStack_d0;
      if (plStack_d0 != (long *)0x0) {
        plVar12 = plStack_d0 + 1;
        do {
          lVar27 = *plVar12;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = lVar27 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar27 == 0) {
          (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      plVar12 = (long *)0x88;
      __Znwm();
      plVar12[1] = 0;
      plVar12[2] = 0;
      *plVar12 = (long)&PTR_FUN_110bd9bb8;
      *(undefined1 *)(plVar12 + 4) = 0;
      plVar12[7] = 0;
      plVar12[6] = 0;
      plVar12[9] = 0;
      plVar12[8] = 0;
      plVar12[0xb] = 0;
      plVar12[10] = 0;
      plVar12[0xd] = 0;
      plVar12[0xc] = 0;
      plVar12[0xe] = 0;
      plVar12[3] = (long)&PTR_DAT_110bd6d80;
      plVar12[5] = (long)&PTR_DAT_110bd6de0;
      *(undefined2 *)(plVar12 + 0xf) = 0;
      *(undefined8 *)((long)plVar12 + 0x7c) = 0x3f800000;
      plVar11[4] = (long)(plVar12 + 3);
      plVar11[5] = (long)plVar12;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
        ___stack_chk_fail();
        plStack_d8 = plVar24;
        FUN_10a3f9078(&plStack_d8);
        plVar11 = plVar12;
        __Unwind_Resume();
        plStack_108 = plVar10;
        pcStack_e8 = FUN_10a9b6a3c;
        lVar27 = plVar11[1];
        lVar18 = plVar11[2];
        uStack_110 = uVar25;
        plStack_100 = plVar24;
        plStack_f8 = plVar12;
        ppuStack_f0 = &puStack_a0;
        while (lVar18 != lVar27) {
          plVar11[2] = lVar18 + -0x30;
          FUN_10a3f9020(lVar18 + -0x10);
          lStack_118 = lVar18 + -0x28;
          FUN_10a3f9078(&lStack_118);
          lVar18 = plVar11[2];
        }
        if (*plVar11 != 0) {
          __ZdlPv();
        }
        return (undefined8 **)plVar11;
      }
      return (undefined8 **)plVar11;
    }
    puVar8 = (undefined8 *)(uVar16 * 0x30);
    __Znwm();
    puVar1 = (undefined8 *)((long)puVar8 + ((long)plVar24 - lVar27));
    lVar27 = uVar26 * 0x30 + lVar18 * -0x10;
    puVar17 = puVar1;
    puStack_90 = puVar8;
    puStack_88 = puVar1;
    puStack_78 = puVar8 + uVar16 * 6;
    do {
      puVar17[3] = 0;
      puVar17[2] = 0;
      puVar17[5] = 0;
      puVar17[4] = 0;
      puVar17[1] = 0;
      *puVar17 = 0;
      FUN_10a9b6894(puVar17);
      puVar17 = puVar17 + 6;
      lVar27 = lVar27 + -0x30;
    } while (lVar27 != 0);
    puVar23 = (undefined8 *)*param_1;
    puVar4 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)((long)puVar1 + ((long)puVar23 - (long)puVar4));
    puVar14 = puVar2;
    puVar17 = puVar23;
    if (puVar4 != puVar23) {
      do {
        *puVar14 = *puVar17;
        puVar14[1] = 0;
        puVar14[2] = 0;
        puVar14[3] = 0;
        uVar28 = puVar17[1];
        puVar14[2] = puVar17[2];
        puVar14[1] = uVar28;
        puVar14[3] = puVar17[3];
        puVar17[1] = 0;
        puVar17[2] = 0;
        puVar17[3] = 0;
        uVar28 = puVar17[4];
        puVar14[5] = puVar17[5];
        puVar14[4] = uVar28;
        puVar17[4] = 0;
        puVar17[5] = 0;
        puVar17 = puVar17 + 6;
        puVar14 = puVar14 + 6;
      } while (puVar17 != puVar4);
      do {
        FUN_10a3f9020(puVar23 + 4);
        puStack_68 = puVar23 + 1;
        FUN_10a3f9078(&puStack_68);
        puVar23 = puVar23 + 6;
      } while (puVar23 != puVar4);
      puVar23 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar2;
    param_1[1] = (long)(puVar1 + (uVar15 & 0xffffffff) * 6);
    puStack_78 = (undefined8 *)param_1[2];
    param_1[2] = (long)(puVar8 + uVar16 * 6);
    puStack_90 = puVar23;
    puStack_88 = puVar23;
    plStack_80 = puVar23;
    FUN_10a9b6a3c(&puStack_90);
  }
  else {
    plVar10 = plVar24 + (uVar15 & 0xffffffff) * 6;
    lVar27 = uVar26 * 0x30 + lVar18 * -0x10;
    do {
      plVar24[3] = 0;
      plVar24[2] = 0;
      plVar24[5] = 0;
      plVar24[4] = 0;
      plVar24[1] = 0;
      *plVar24 = 0;
      ppuVar9 = (undefined8 **)plVar24;
      FUN_10a9b6894(plVar24);
      plVar24 = plVar24 + 6;
      lVar27 = lVar27 + -0x30;
    } while (lVar27 != 0);
    param_1[1] = (long)plVar10;
  }
  uVar15 = uVar26 - 1;
  lVar27 = *param_1;
  lVar13 = param_1[1] - lVar27 >> 4;
  uVar16 = lVar13 * -0x5555555555555555;
  if (uVar25 < uVar15 || uVar25 - uVar15 == 0) {
    uVar3 = uVar25;
    if (uVar25 < uVar16 || uVar25 + lVar13 * 0x5555555555555555 == 0) {
      uVar3 = uVar16;
    }
    puVar20 = (uint *)(lVar27 + lVar18 * 0x10 + 4);
    uVar22 = uVar25;
    uVar19 = uVar25;
    do {
      uVar19 = uVar19 + 1;
      if (uVar19 - uVar3 == 1) goto LAB_10a9b6868;
      uVar21 = (uint)uVar22;
      uVar22 = uVar22 + 1;
      *(short *)((long)puVar20 + -2) = (short)uVar19;
      *puVar20 = uVar21 & 0xbfff | param_2 << 0x1d | 0x4000U;
      puVar20 = puVar20 + 0xc;
    } while (uVar22 != uVar26);
  }
  if (uVar15 <= uVar16 && uVar16 - uVar15 != 0) {
    *(undefined2 *)(lVar27 + (long)(int)uVar15 * 0x30 + 2) = 0x3fff;
    *(short *)(param_1 + 3) = (short)uVar25;
    *(short *)((long)param_1 + 0x1a) = (short)uVar15;
    return ppuVar9;
  }
LAB_10a9b6868:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a9b686c);
  (*pcVar7)();
}



/* Entry: 10a9b6894; end: 10a9b6a3b;  */

long * FUN_10a9b6894(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lStack_88;
  long *plStack_48;
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)param_1 = 0;
  *(undefined2 *)((long)param_1 + 2) = 0x3fff;
  *(undefined4 *)((long)param_1 + 4) = 0;
  plVar5 = (long *)0x90;
  __Znwm();
  plVar1 = param_1 + 1;
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_DAT_110bd9c58;
  *(undefined1 *)(plVar5 + 4) = 0;
  plVar5[7] = 0;
  plVar5[6] = 0;
  plVar5[9] = 0;
  plVar5[8] = 0;
  plVar5[0xb] = 0;
  plVar5[10] = 0;
  plVar5[0xd] = 0;
  plVar5[0xc] = 0;
  plVar5[0xe] = 0;
  plStack_48 = plVar5 + 3;
  *plStack_48 = (long)&PTR_DAT_110bd6cc8;
  plVar5[5] = (long)&PTR_DAT_110bd6d28;
  *(undefined1 *)(plVar5 + 0xf) = 0;
  *(undefined8 *)((long)plVar5 + 0x84) = 0x3f80000000000000;
  *(undefined8 *)((long)plVar5 + 0x7c) = 0;
  *(undefined1 *)((long)plVar5 + 0x8c) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *plVar1 = 0;
  plStack_40 = plVar5;
  FUN_10a5e7178(plVar1,&plStack_48,&lStack_38,1);
  plVar5 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    plVar2 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = (long *)0x88;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110bd9bb8;
  *(undefined1 *)(plVar5 + 4) = 0;
  plVar5[7] = 0;
  plVar5[6] = 0;
  plVar5[9] = 0;
  plVar5[8] = 0;
  plVar5[0xb] = 0;
  plVar5[10] = 0;
  plVar5[0xd] = 0;
  plVar5[0xc] = 0;
  plVar5[0xe] = 0;
  plVar5[3] = (long)&PTR_DAT_110bd6d80;
  plVar5[5] = (long)&PTR_DAT_110bd6de0;
  *(undefined2 *)(plVar5 + 0xf) = 0;
  *(undefined8 *)((long)plVar5 + 0x7c) = 0x3f800000;
  param_1[4] = (long)(plVar5 + 3);
  param_1[5] = (long)plVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  plStack_48 = plVar1;
  FUN_10a3f9078(&plStack_48);
  __Unwind_Resume();
  lVar6 = plVar5[1];
  lVar7 = plVar5[2];
  while (lVar7 != lVar6) {
    plVar5[2] = lVar7 + -0x30;
    FUN_10a3f9020(lVar7 + -0x10);
    lStack_88 = lVar7 + -0x28;
    FUN_10a3f9078(&lStack_88);
    lVar7 = plVar5[2];
  }
  if (*plVar5 != 0) {
    __ZdlPv();
  }
  return plVar5;
}



/* Entry: 10a9b6a3c; end: 10a9b6aab;  */

long * FUN_10a9b6a3c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x30;
    FUN_10a3f9020(lVar2 + -0x10);
    lStack_38 = lVar2 + -0x28;
    FUN_10a3f9078(&lStack_38);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a9b6aac; end: 10a9b73fb;  */

/* WARNING: Possible PIC construction at 0x00010a9b73f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a9b7bf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a9b73f4) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7414) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7424) */
/* WARNING: Removing unreachable block (ram,0x00010a9b744c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7458) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7470) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7ab0) */
/* WARNING: Removing unreachable block (ram,0x00010a9b74e8) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7500) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7560) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7564) */
/* WARNING: Removing unreachable block (ram,0x00010a9b756c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7574) */
/* WARNING: Removing unreachable block (ram,0x00010a9b757c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7580) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7588) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7590) */
/* WARNING: Removing unreachable block (ram,0x00010a9b75a0) */
/* WARNING: Removing unreachable block (ram,0x00010a9b75a4) */
/* WARNING: Removing unreachable block (ram,0x00010a9b75ac) */
/* WARNING: Removing unreachable block (ram,0x00010a9b75b4) */
/* WARNING: Removing unreachable block (ram,0x00010a9b75b8) */
/* WARNING: Removing unreachable block (ram,0x00010a9b75c4) */
/* WARNING: Removing unreachable block (ram,0x00010a9b75c8) */
/* WARNING: Removing unreachable block (ram,0x00010a9b75d0) */
/* WARNING: Removing unreachable block (ram,0x00010a9b75d8) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7634) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7ac8) */
/* WARNING: Removing unreachable block (ram,0x00010a9b763c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7648) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7abc) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7650) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7670) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7ad4) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7678) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7680) */
/* WARNING: Removing unreachable block (ram,0x00010a9b76a8) */
/* WARNING: Removing unreachable block (ram,0x00010a9b76b8) */
/* WARNING: Removing unreachable block (ram,0x00010a9b76bc) */
/* WARNING: Removing unreachable block (ram,0x00010a9b76c4) */
/* WARNING: Removing unreachable block (ram,0x00010a9b76cc) */
/* WARNING: Removing unreachable block (ram,0x00010a9b76d0) */
/* WARNING: Removing unreachable block (ram,0x00010a9b76e8) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7ae0) */
/* WARNING: Removing unreachable block (ram,0x00010a9b76ec) */
/* WARNING: Removing unreachable block (ram,0x00010a9b778c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7798) */
/* WARNING: Removing unreachable block (ram,0x00010a9b783c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7848) */
/* WARNING: Removing unreachable block (ram,0x00010a9b78b4) */
/* WARNING: Removing unreachable block (ram,0x00010a9b78c0) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7854) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7858) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7860) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7868) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7880) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7884) */
/* WARNING: Removing unreachable block (ram,0x00010a9b788c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7894) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7898) */
/* WARNING: Removing unreachable block (ram,0x00010a9b78e8) */
/* WARNING: Removing unreachable block (ram,0x00010a9b78f0) */
/* WARNING: Removing unreachable block (ram,0x00010a9b78f4) */
/* WARNING: Removing unreachable block (ram,0x00010a9b78fc) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7904) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7908) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7920) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7928) */
/* WARNING: Removing unreachable block (ram,0x00010a9b792c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7934) */
/* WARNING: Removing unreachable block (ram,0x00010a9b793c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7940) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7958) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7970) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7974) */
/* WARNING: Removing unreachable block (ram,0x00010a9b797c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7984) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7988) */
/* WARNING: Removing unreachable block (ram,0x00010a9b79a0) */
/* WARNING: Removing unreachable block (ram,0x00010a9b79a8) */
/* WARNING: Removing unreachable block (ram,0x00010a9b79ac) */
/* WARNING: Removing unreachable block (ram,0x00010a9b79b4) */
/* WARNING: Removing unreachable block (ram,0x00010a9b79bc) */
/* WARNING: Removing unreachable block (ram,0x00010a9b79c0) */
/* WARNING: Removing unreachable block (ram,0x00010a9b79d8) */
/* WARNING: Removing unreachable block (ram,0x00010a9b79dc) */
/* WARNING: Removing unreachable block (ram,0x00010a9b79e4) */
/* WARNING: Removing unreachable block (ram,0x00010a9b79e8) */
/* WARNING: Removing unreachable block (ram,0x00010a9b79f0) */
/* WARNING: Removing unreachable block (ram,0x00010a9b79f8) */
/* WARNING: Removing unreachable block (ram,0x00010a9b79fc) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7a04) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7a0c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7a10) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7a28) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7a30) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7a34) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7a3c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7a44) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7a48) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7a60) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7a68) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7a70) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7af0) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7b08) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7b18) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7b64) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7b9c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7bbc) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7bc4) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7bc8) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7bd0) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7be8) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7bf0) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7a8c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b746c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7440) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7bf8) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c0c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c50) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c3c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c5c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c6c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c90) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d64) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7cdc) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7cf4) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d7c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d04) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d14) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d70) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d84) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d30) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c88) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c08) */
/* WARNING: Removing unreachable block (ram,0x00010a9b6d18) */
/* WARNING: Removing unreachable block (ram,0x00010a9b6c04) */
/* WARNING: Removing unreachable block (ram,0x00010a9b6df0) */
/* WARNING: Removing unreachable block (ram,0x00010a9b72a4) */

void FUN_10a9b6aac(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,long *param_5)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long ***ppplVar11;
  undefined **ppuVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined *puVar17;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar18;
  long *unaff_x22;
  long lVar19;
  long lVar20;
  long ***unaff_x23;
  long lVar21;
  long *unaff_x24;
  ulong uVar22;
  undefined4 *unaff_x25;
  ulong uVar23;
  undefined8 ****unaff_x26;
  undefined8 ****ppppuVar24;
  ulong unaff_x27;
  long *unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long lStack_270;
  ulong uStack_268;
  undefined ***pppuStack_260;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  long *plStack_228;
  long *plStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 ***pppuStack_1f8;
  ulong uStack_1f0;
  byte bStack_1e1;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long **pplStack_1a0;
  long **pplStack_198;
  long **pplStack_190;
  long *plStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  long **pplStack_160;
  undefined8 uStack_158;
  undefined7 uStack_150;
  char cStack_149;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long **pplStack_c8;
  long *plStack_c0;
  undefined1 auStack_b8 [56];
  undefined8 uStack_80;
  long lStack_78;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  FUN_10a9b73fc(param_2,param_3);
  FUN_10a9b7464(param_5);
  func_0x000109898f04(&plStack_228,param_2,param_4);
  FUN_10a1cf048(&uStack_238,param_2,param_4 + 0x10);
  plVar9 = param_2;
  FUN_10a1cf048(&plStack_248,param_2,param_4 + 0x20);
  plVar10 = plStack_248;
  if (plStack_228 == plStack_220) {
    FUN_10a00946c(&UNK_10f686e82);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9b7270);
    (*pcVar5)();
  }
  if ((long)plStack_220 - (long)plStack_228 == 0x18) {
    if (*(char *)((long)plStack_228 + 0x17) < '\0') {
      if (plStack_228[1] == 0xf) {
        plStack_228 = (long *)*plStack_228;
        goto LAB_10a9b6ba8;
      }
    }
    else if (*(char *)((long)plStack_228 + 0x17) == '\x0f') {
LAB_10a9b6ba8:
      if (*plStack_228 == 0x49415247454e4946 &&
          *(long *)((long)plStack_228 + 7) == 0x53474f4444454e49) {
        func_0x000107c2b054(&pplStack_c8,&UNK_10f686ea3);
        FUN_10a1bcbe0(plVar10,&pplStack_c8);
        plVar9 = plVar10;
      }
    }
  }
  plVar10 = plVar8 + 0x22;
  if (((int)*plVar10 == 0) ||
     (__ZNSt3__16chrono12steady_clock3nowEv(), 1000000000 < (long)plVar9 - plVar8[0x21])) {
    if (plStack_230 != (long *)0x0) {
      plVar9 = plStack_230 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (plStack_240 != (long *)0x0) {
      plVar9 = plStack_240 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_180 = uStack_238;
    plStack_178 = plStack_230;
    if (plStack_230 != (long *)0x0) {
      plVar9 = plStack_230 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_170 = plStack_248;
    plStack_168 = plStack_240;
    if (plStack_240 != (long *)0x0) {
      plVar9 = plStack_240 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_258 = plStack_240;
    plStack_250 = plStack_230;
    plStack_188 = plVar8;
    func_0x000107c2b054(&pplStack_160,&DAT_10f68e8ee);
    FUN_10a97e3f4(&pplStack_c8,&plStack_228,&pplStack_160);
    ppplVar11 = &pplStack_c8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (ppplVar11,0,&UNK_10f665df4,10);
    pplStack_198 = ppplVar11[1];
    pplStack_1a0 = *ppplVar11;
    pplStack_190 = ppplVar11[2];
    ppplVar11[1] = (long **)0x0;
    ppplVar11[2] = (long **)0x0;
    *ppplVar11 = (long **)0x0;
    if (cStack_149 < '\0') {
      __ZdlPv(pplStack_160);
    }
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    ppuStack_1d0 = &PTR_DAT_110b1b018;
    puStack_1b8 = &DAT_11383d918;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x000107c30248(&puStack_1b8,*(long *)(plVar8[0x1c] + 0x100) + 0x208,0);
    if (plVar8[0x1d] != 0) {
      FUN_10a97e060(&pplStack_c8);
      if (plStack_c0 != (long *)0x0) {
        plVar9 = plStack_c0 + 1;
        do {
          lVar16 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar16 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c0);
        }
      }
      if (pplStack_c8 == (long **)0x0) {
        FUN_10a97ded8(plVar8,&ppuStack_1d0);
      }
    }
    FUN_10a3bf4bc(&pplStack_160,&ppuStack_1d0);
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&pppuStack_1f8,&UNK_10f686f1b,&pplStack_1a0);
    lVar16 = *(long *)(plVar8[0x1c] + 0x100);
    FUN_10a97e580(&uStack_210,plVar8[0x1f],&plStack_188);
    ppuVar12 = (undefined **)0x138;
    __Znwm();
    pplStack_c8 = pplStack_160;
    ppuVar12[1] = (undefined *)0x0;
    ppuVar12[2] = (undefined *)0x0;
    *ppuVar12 = (undefined *)&PTR_FUN_110b9f3b0;
    uVar14 = uStack_1f0;
    ppppuVar24 = (undefined8 ****)pppuStack_1f8;
    if (-1 < (char)bStack_1e1) {
      uVar14 = (ulong)bStack_1e1;
      ppppuVar24 = &pppuStack_1f8;
    }
    pplStack_160 = (long **)0x0;
    plStack_c0 = (long *)uStack_158;
    (**(code **)(CONCAT17(cStack_149,uStack_150) + 0x10))(auStack_b8,&uStack_150);
    uStack_80 = uStack_118;
    uStack_268 = *(ulong *)(lVar16 + 0x210);
    lStack_270 = *(long *)(lVar16 + 0x208);
    if (-1 < (char)*(byte *)(lVar16 + 0x21f)) {
      uStack_268 = (ulong)*(byte *)(lVar16 + 0x21f);
      lStack_270 = lVar16 + 0x208;
    }
    pppuStack_260 = &ppuStack_110;
    ppuStack_110 = (undefined **)FUN_10a9b8008;
    ppuStack_108 = &PTR_FUN_110c34ec8;
    uStack_100 = uStack_210;
    uStack_f0 = uStack_200;
    uStack_f8 = uStack_208;
    uStack_208 = 0;
    uStack_200 = 0;
    FUN_10a23708c(ppuVar12 + 3,ppppuVar24,uVar14,&DAT_10f685c7a,4,&pplStack_c8,0);
    (*(code *)*ppuStack_108)(&ppuStack_108);
    FUN_10a042634(&pplStack_c8);
    ppuStack_1e0 = ppuVar12 + 3;
    ppuStack_1d8 = ppuVar12;
    FUN_10a97e830(&uStack_210);
    plVar9 = plStack_250;
    param_2 = plStack_258;
    if ((char)bStack_1e1 < '\0') {
      __ZdlPv(pppuStack_1f8);
    }
    param_5 = *(long **)(*(long *)(plVar8[0x1c] + 0x100) + 0x1c8);
    (**(code **)(*param_5 + 0x60))();
    pplStack_c8 = (long **)0x0;
    plStack_c0 = (long *)0x0;
    plVar13 = (long *)param_5[1];
    if (((plVar13 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_c0 = plVar13, plVar13 == (long *)0x0)) ||
       (pplStack_c8 = (long **)*param_5, pplStack_c8 == (long **)0x0)) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f686d82,&UNK_10f686f34,0x9f,&UNK_10f66488a);
      }
    }
    else {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *(int *)plVar10 = (int)*plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      __ZNSt3__16chrono12steady_clock3nowEv();
      plVar8[0x21] = (long)plVar13;
      ppuStack_108 = ppuStack_1d8;
      ppuStack_110 = ppuStack_1e0;
      if (ppuStack_1d8 != (undefined **)0x0) {
        ppuVar12 = ppuStack_1d8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
          if (bVar4) {
            *ppuVar12 = *ppuVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      (*(code *)**pplStack_c8)(pplStack_c8,&ppuStack_110);
      ppuVar12 = ppuStack_108;
      if (ppuStack_108 != (undefined **)0x0) {
        ppuVar2 = ppuStack_108 + 1;
        do {
          puVar17 = *ppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar4) {
            *ppuVar2 = puVar17 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar17 == (undefined *)0x0) {
          (**(code **)(*ppuStack_108 + 0x10))(ppuStack_108);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar12);
        }
      }
    }
    plVar8 = plStack_c0;
    if (plStack_c0 != (long *)0x0) {
      plVar13 = plStack_c0 + 1;
      do {
        lVar16 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    ppuVar12 = ppuStack_1d8;
    if (ppuStack_1d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_1d8 + 1;
      do {
        puVar17 = *ppuVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = puVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar17 == (undefined *)0x0) {
        (**(code **)(*ppuStack_1d8 + 0x10))(ppuStack_1d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar12);
      }
    }
    FUN_10a042634(&pplStack_160);
    func_0x0001098d9560(&ppuStack_1d0);
    if ((long)pplStack_190 < 0) {
      __ZdlPv(pplStack_1a0);
    }
    plVar8 = plStack_168;
    if (plStack_168 != (long *)0x0) {
      plVar13 = plStack_168 + 1;
      do {
        lVar16 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_168 + 0x10))(plStack_168);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    plVar8 = plStack_178;
    if (plStack_178 != (long *)0x0) {
      plVar13 = plStack_178 + 1;
      do {
        lVar16 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_178 + 0x10))(plStack_178);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (param_2 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(param_2);
    }
    if (plVar9 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  else {
    lStack_270 = 1;
    FUN_10a0ee900(&pplStack_c8,&UNK_10f686ec1,0x59);
    FUN_10a1bcbe0(plStack_248,&pplStack_c8);
    plVar9 = unaff_x20;
    ppppuVar24 = unaff_x26;
    uVar14 = unaff_x27;
  }
  if (plStack_240 != (long *)0x0) {
    plVar8 = plStack_240 + 1;
    do {
      lVar16 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_240 + 0x10))(plStack_240);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_240);
    }
  }
  if (plStack_230 != (long *)0x0) {
    plVar8 = plStack_230 + 1;
    do {
      lVar16 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_230 + 0x10))(plStack_230);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_230);
    }
  }
  pplStack_c8 = &plStack_228;
  ppplVar11 = &pplStack_c8;
  FUN_10a0426d8();
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    FUN_10a1c9d6c(&plStack_248);
    FUN_10a1c9d6c(&uStack_238);
    pplStack_160 = &plStack_228;
    FUN_10a0426d8(&pplStack_160);
    unaff_x30 = 0x10a9b73f4;
    register0x00000008 = (BADSPACEBASE *)&lStack_270;
    unaff_x19 = plVar7;
    unaff_x20 = plVar9;
    unaff_x21 = plStack_230;
    unaff_x22 = param_2;
    unaff_x23 = ppplVar11;
    unaff_x24 = param_5;
    unaff_x25 = param_1;
    unaff_x26 = ppppuVar24;
    unaff_x27 = uVar14;
    unaff_x28 = plVar10;
    unaff_x29 = puVar1;
  }
  plVar10 = plVar7 + 0x4b;
  lVar16 = plVar7[0x59];
  uVar14 = lVar16 - 1;
  plVar7[0x59] = uVar14;
  if (uVar14 < 8) {
    uVar14 = plVar10[lVar16 + 2];
    if (plVar7[0x5a] == uVar14) {
      return;
    }
  }
  else {
    uVar14 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar14) {
      return;
    }
  }
  *(long **)((long)register0x00000008 + -0x60) = unaff_x28;
  *(ulong *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *****)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined4 **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long ****)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar16 = *plVar10;
  lVar20 = plVar7[0x4c];
  lVar18 = lVar20 - lVar16;
  uVar22 = lVar18 >> 4;
  if (uVar22 < uVar14) {
    uVar23 = uVar14 - uVar22;
    lVar21 = plVar7[0x4d];
    if ((ulong)(lVar21 - lVar20 >> 4) < uVar23) {
      if (uVar14 >> 0x3c == 0) {
        uVar15 = lVar21 - lVar16 >> 3;
        if (uVar15 <= uVar14) {
          uVar15 = uVar14;
        }
        if (0x7fffffffffffffef < (ulong)(lVar21 - lVar16)) {
          uVar15 = 0xfffffffffffffff;
        }
        *(long **)((long)register0x00000008 + -0x68) = plVar10;
        if (uVar15 >> 0x3c == 0) {
          lVar6 = uVar15 << 4;
          __Znwm();
          lVar20 = lVar6 + lVar18;
          _bzero(lVar20,uVar23 * 0x10);
          lVar19 = lVar20 + uVar22 * -0x10;
          _memcpy(lVar19,lVar16,lVar18);
          *plVar10 = lVar19;
          plVar7[0x4c] = lVar20 + uVar23 * 0x10;
          plVar7[0x4d] = lVar6 + uVar15 * 0x10;
          *(long *)((long)register0x00000008 + -0x78) = lVar16;
          *(long *)((long)register0x00000008 + -0x70) = lVar21;
          *(long *)((long)register0x00000008 + -0x88) = lVar16;
          *(long *)((long)register0x00000008 + -0x80) = lVar16;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
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
    _bzero(lVar20,uVar23 * 0x10);
    plVar7[0x4c] = lVar20 + uVar23 * 0x10;
  }
  else if (uVar14 < uVar22) {
    lVar16 = lVar16 + uVar14 * 0x10;
    while (lVar20 != lVar16) {
      lVar20 = lVar20 + -0x10;
      func_0x00010988c204(lVar20);
    }
    plVar7[0x4c] = lVar16;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar14;
  return;
}



/* Entry: 10a9b73fc; end: 10a9b7463;  */

/* WARNING: Possible PIC construction at 0x00010a9b7bf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a9b7bf8) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c0c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c50) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c3c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c5c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c6c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c90) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d64) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7cdc) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7cf4) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d7c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d04) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d14) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d70) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d84) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d30) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c88) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c08) */

void FUN_10a9b73fc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 ***pppuVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined **ppuVar11;
  long *plVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined4 *extraout_x8;
  ulong uVar19;
  long lVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  undefined ***unaff_x20;
  undefined ***unaff_x21;
  long lVar23;
  undefined ***pppuVar24;
  undefined ***unaff_x22;
  long lVar25;
  undefined8 *unaff_x23;
  long lVar26;
  undefined **unaff_x24;
  undefined **ppuVar27;
  undefined **unaff_x25;
  ulong uVar28;
  undefined **ppuVar29;
  undefined **unaff_x26;
  undefined ***pppuVar30;
  undefined ***unaff_x27;
  long lVar31;
  long unaff_x28;
  undefined8 ****ppppuVar32;
  long lStack_250;
  ulong uStack_248;
  undefined ***pppuStack_240;
  undefined8 uStack_230;
  undefined ***pppuStack_228;
  undefined8 uStack_220;
  undefined ***pppuStack_218;
  undefined ***apppuStack_210 [2];
  char cStack_1f9;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined ***pppuStack_198;
  undefined8 uStack_190;
  undefined ***pppuStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  long alStack_170 [7];
  undefined8 uStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_f0;
  long *plStack_e8;
  undefined1 auStack_e0 [56];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 ***pppuStack_40;
  code *pcStack_38;
  undefined8 **ppuStack_30;
  code *pcStack_28;
  
  plVar8 = param_1;
  func_0x000109898688();
  if (plVar8 != (long *)0x0) {
    plVar9 = param_1;
    FUN_10a053854(param_1,plVar8);
    if (plVar9 != (long *)0x0) {
      param_4 = 0x10;
      ___dynamic_cast();
      if (plVar9 != (long *)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar21 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar21 == 3) {
    return;
  }
  pcStack_28 = FUN_10a9b7464;
  plVar9 = (long *)0x3;
  uVar16 = 0;
  ppuStack_30 = (undefined8 **)&stack0xfffffffffffffff0;
  FUN_10a052ee0(3,0,puVar21);
  pcStack_38 = FUN_10a9b7488;
  ppppuVar32 = &pppuStack_40;
  pppuVar6 = (undefined8 ***)&lStack_250;
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = plVar9;
  pppuStack_40 = &ppuStack_30;
  (**(code **)(*plVar9 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar12 = plVar9;
  FUN_10a9b73fc(plVar9,uVar16);
  FUN_10a9b7c00(param_4);
  func_0x000109898570(apppuStack_210,plVar9,puVar21);
  plVar10 = plVar9;
  FUN_10a9b7c24(plVar9,puVar21 + 0x10);
  FUN_10a1cf048(&uStack_220,plVar9,puVar21 + 0x20);
  FUN_10a1cf048(&uStack_230,plVar9,puVar21 + 0x30);
  pppuVar15 = pppuStack_218;
  pppuVar24 = pppuStack_228;
  if (pppuStack_218 != (undefined ***)0x0) {
    pppuVar30 = pppuStack_218 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar30,0x10);
      if (bVar4) {
        *pppuVar30 = (undefined **)((long)*pppuVar30 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (pppuStack_228 != (undefined ***)0x0) {
    pppuVar30 = pppuStack_228 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar30,0x10);
      if (bVar4) {
        *pppuVar30 = (undefined **)((long)*pppuVar30 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_1a0 = uStack_220;
  pppuStack_198 = pppuStack_218;
  if (pppuStack_218 != (undefined ***)0x0) {
    pppuVar30 = pppuStack_218 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar30,0x10);
      if (bVar4) {
        *pppuVar30 = (undefined **)((long)*pppuVar30 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_190 = uStack_230;
  pppuStack_188 = pppuStack_228;
  if (pppuStack_228 != (undefined ***)0x0) {
    pppuVar30 = pppuStack_228 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar30,0x10);
      if (bVar4) {
        *pppuVar30 = (undefined **)((long)*pppuVar30 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_1c0 = 0;
  uStack_1c8 = 0;
  ppuStack_1d0 = &PTR_DAT_110b1b018;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  puStack_1b8 = &DAT_11383d918;
  func_0x000107c30248(&puStack_1b8,*(long *)(plVar12[0x1c] + 0x100) + 0x208,0);
  uStack_1c0 = uStack_1c0 | 2;
  if (uStack_1a8 == 0) {
    uVar18 = uStack_1c8;
    if ((uStack_1c8 & 1) != 0) {
      uVar18 = *(ulong *)(uStack_1c8 & 0xfffffffffffffffe);
    }
    func_0x0001098d9934();
    uStack_1a8 = uVar18;
  }
  uVar18 = uStack_1a8;
  uVar17 = *(ulong *)(uStack_1a8 + 8);
  if ((uVar17 & 1) != 0) {
    uVar17 = *(ulong *)(uVar17 & 0xfffffffffffffffe);
  }
  func_0x000107c30248(uStack_1a8 + 0x18,apppuStack_210,uVar17);
  *(uint *)(uVar18 + 0x10) = *(uint *)(uVar18 + 0x10) | 1;
  uVar17 = *(ulong *)(uVar18 + 0x20);
  if (uVar17 == 0) {
    uVar17 = *(ulong *)(uVar18 + 8);
    if ((uVar17 & 1) != 0) {
      uVar17 = *(ulong *)(uVar17 & 0xfffffffffffffffe);
    }
    func_0x0001098d98f8();
    *(ulong *)(uVar18 + 0x20) = uVar17;
  }
  *(int *)(uVar17 + 0x1c) = (int)plVar10[6];
  *(int *)(uVar17 + 0x18) = (int)plVar10[5];
  *(undefined4 *)(uVar17 + 0x10) = *(undefined4 *)((long)plVar10 + 0x24);
  *(undefined4 *)(uVar17 + 0x14) = *(undefined4 *)((long)plVar10 + 0x2c);
  if (plVar12[0x1d] != 0) {
    FUN_10a97e060(&puStack_f0);
    if (plStack_e8 != (long *)0x0) {
      plVar9 = plStack_e8 + 1;
      do {
        lVar20 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar20 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e8);
      }
    }
    if (puStack_f0 == (undefined8 *)0x0) {
      FUN_10a97ded8(plVar12,&ppuStack_1d0);
      FUN_10a3bf4bc(&puStack_180,&ppuStack_1d0);
      lVar31 = *(long *)(plVar12[0x1c] + 0x100);
      FUN_10a97e0cc(&uStack_1f8,plVar12[0x1f],&uStack_1a0);
      ppuVar11 = (undefined **)0x138;
      __Znwm();
      puStack_f0 = puStack_180;
      lVar20 = lVar31 + 0x208;
      ppuVar29 = ppuVar11 + 1;
      *ppuVar29 = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      *ppuVar11 = (undefined *)&PTR_FUN_110b9f3b0;
      ppuVar27 = ppuVar11 + 3;
      puStack_180 = (undefined8 *)0x0;
      plStack_e8 = (long *)uStack_178;
      (**(code **)(alStack_170[0] + 0x10))(auStack_e0,alStack_170);
      uStack_a8 = uStack_138;
      uStack_248 = *(ulong *)(lVar31 + 0x210);
      lStack_250 = *(long *)(lVar31 + 0x208);
      if (-1 < (char)*(byte *)(lVar31 + 0x21f)) {
        uStack_248 = (ulong)*(byte *)(lVar31 + 0x21f);
        lStack_250 = lVar20;
      }
      pppuVar30 = &ppuStack_130;
      ppuStack_130 = (undefined **)FUN_10a9b7edc;
      ppuStack_128 = &PTR_FUN_110c34eb0;
      uStack_120 = uStack_1f8;
      uStack_110 = uStack_1e8;
      uStack_118 = uStack_1f0;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      pppuStack_240 = pppuVar30;
      FUN_10a23708c(ppuVar27,&UNK_10f686d69,0x18,&DAT_10f685c7a,4,&puStack_f0,0);
      (*(code *)*ppuStack_128)(&ppuStack_128);
      FUN_10a042634(&puStack_f0);
      ppuStack_1e0 = ppuVar27;
      ppuStack_1d8 = ppuVar11;
      FUN_10a97e374(&uStack_1f8);
      plVar9 = *(long **)(*(long *)(plVar12[0x1c] + 0x100) + 0x1c8);
      (**(code **)(*plVar9 + 0x60))();
      puStack_f0 = (undefined8 *)0x0;
      plStack_e8 = (long *)0x0;
      plVar12 = (long *)plVar9[1];
      if (((plVar12 == (long *)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), plStack_e8 = plVar12, plVar12 == (long *)0x0))
         || (puStack_f0 = (undefined8 *)*plVar9, puStack_f0 == (undefined8 *)0x0)) {
        if ((bRam000000011330a9e8 & 1) != 0) {
          func_0x00010ae06f08(0,1,&UNK_10f686d82,&UNK_10f686dbb,0x67,&UNK_10f66488a);
        }
      }
      else {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar29,0x10);
          if (bVar4) {
            *ppuVar29 = *ppuVar29 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        ppuStack_130 = ppuVar27;
        ppuStack_128 = ppuVar11;
        (**(code **)*puStack_f0)(puStack_f0,&ppuStack_130);
        ppuVar22 = ppuStack_128;
        if (ppuStack_128 != (undefined **)0x0) {
          ppuVar1 = ppuStack_128 + 1;
          do {
            puVar21 = *ppuVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
            if (bVar4) {
              *ppuVar1 = puVar21 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (puVar21 == (undefined *)0x0) {
            (**(code **)(*ppuStack_128 + 0x10))(ppuStack_128);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar22);
          }
        }
      }
      plVar9 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        plVar12 = plStack_e8 + 1;
        do {
          lVar31 = *plVar12;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = lVar31 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar31 == 0) {
          (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      ppuVar22 = ppuStack_1d8;
      if (ppuStack_1d8 != (undefined **)0x0) {
        ppuVar1 = ppuStack_1d8 + 1;
        do {
          puVar21 = *ppuVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar4) {
            *ppuVar1 = puVar21 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar21 == (undefined *)0x0) {
          (**(code **)(*ppuStack_1d8 + 0x10))(ppuStack_1d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar22);
        }
      }
      FUN_10a042634(&puStack_180);
      pppuVar13 = &ppuStack_1d0;
      func_0x0001098d9560();
      pppuVar14 = pppuStack_188;
      if (pppuStack_188 != (undefined ***)0x0) {
        pppuVar2 = pppuStack_188 + 1;
        do {
          ppuVar22 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar22 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar22 == (undefined **)0x0) {
          (*(code *)(*pppuStack_188)[2])(pppuStack_188);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar13 = pppuVar14;
        }
      }
      pppuVar14 = pppuStack_198;
      if (pppuStack_198 != (undefined ***)0x0) {
        pppuVar2 = pppuStack_198 + 1;
        do {
          ppuVar22 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar22 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar22 == (undefined **)0x0) {
          (*(code *)(*pppuStack_198)[2])(pppuStack_198);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar13 = pppuVar14;
        }
      }
      if (pppuVar24 != (undefined ***)0x0) {
        pppuVar13 = pppuVar24;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (pppuVar15 != (undefined ***)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppuVar13 = pppuVar15;
      }
      if (pppuStack_228 != (undefined ***)0x0) {
        pppuVar15 = pppuStack_228 + 1;
        do {
          ppuVar22 = *pppuVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
          if (bVar4) {
            *pppuVar15 = (undefined **)((long)ppuVar22 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar22 == (undefined **)0x0) {
          (*(code *)(*pppuStack_228)[2])(pppuStack_228);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar13 = pppuStack_228;
        }
      }
      if (pppuStack_218 != (undefined ***)0x0) {
        pppuVar15 = pppuStack_218 + 1;
        do {
          ppuVar22 = *pppuVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
          if (bVar4) {
            *pppuVar15 = (undefined **)((long)ppuVar22 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar22 == (undefined **)0x0) {
          (*(code *)(*pppuStack_218)[2])(pppuStack_218);
          pppuVar13 = pppuStack_218;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      if (cStack_1f9 < '\0') {
        pppuVar13 = apppuStack_210[0];
        __ZdlPv();
      }
      *extraout_x8 = 0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
        pppuVar6 = &ppuStack_30;
        pppuVar13 = unaff_x20;
        pppuVar24 = unaff_x22;
        ppuVar11 = unaff_x24;
        ppuVar27 = unaff_x25;
        ppuVar29 = unaff_x26;
        pppuVar30 = unaff_x27;
        lVar20 = unaff_x28;
        ppppuVar32 = (undefined8 ****)pppuStack_40;
        pcVar5 = pcStack_38;
      }
      else {
        ___stack_chk_fail();
        FUN_10a05bd88(&ppuStack_130);
        func_0x00010a05a8c4(&puStack_f0);
        FUN_10a05bd88(&ppuStack_1e0);
        FUN_10a042634(&puStack_180);
        unaff_x23 = &uStack_1a0;
        func_0x0001098d9560(&ppuStack_1d0);
        FUN_10a1c9d6c(&uStack_190);
        FUN_10a1c9d6c(&uStack_1a0);
        if (pppuVar24 != (undefined ***)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar24);
        }
        if (pppuStack_218 != (undefined ***)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_218);
        }
        FUN_10a1c9d6c(&uStack_230);
        FUN_10a1c9d6c(&uStack_220);
        if (cStack_1f9 < '\0') {
          __ZdlPv(apppuStack_210[0]);
        }
        pcVar5 = (code *)0x10a9b7bf8;
        param_1 = plVar8;
        unaff_x21 = pppuStack_218;
      }
      plVar9 = plVar8 + 0x4b;
      lVar31 = plVar8[0x59];
      uVar18 = lVar31 - 1;
      plVar8[0x59] = uVar18;
      if (uVar18 < 8) {
        uVar18 = plVar9[lVar31 + 2];
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
      *(long *)((long)pppuVar6 + -0x60) = lVar20;
      *(undefined ****)((long)pppuVar6 + -0x58) = pppuVar30;
      *(undefined ***)((long)pppuVar6 + -0x50) = ppuVar29;
      *(undefined ***)((long)pppuVar6 + -0x48) = ppuVar27;
      *(undefined ***)((long)pppuVar6 + -0x40) = ppuVar11;
      *(undefined8 **)((long)pppuVar6 + -0x38) = unaff_x23;
      *(undefined ****)((long)pppuVar6 + -0x30) = pppuVar24;
      *(undefined ****)((long)pppuVar6 + -0x28) = unaff_x21;
      *(undefined ****)((long)pppuVar6 + -0x20) = pppuVar13;
      *(long **)((long)pppuVar6 + -0x18) = param_1;
      *(undefined8 *****)((long)pppuVar6 + -0x10) = ppppuVar32;
      *(code **)((long)pppuVar6 + -8) = pcVar5;
      lVar20 = *plVar9;
      lVar31 = plVar8[0x4c];
      lVar23 = lVar31 - lVar20;
      uVar17 = lVar23 >> 4;
      if (uVar17 < uVar18) {
        uVar28 = uVar18 - uVar17;
        lVar26 = plVar8[0x4d];
        if ((ulong)(lVar26 - lVar31 >> 4) < uVar28) {
          if (uVar18 >> 0x3c == 0) {
            uVar19 = lVar26 - lVar20 >> 3;
            if (uVar19 <= uVar18) {
              uVar19 = uVar18;
            }
            if (0x7fffffffffffffef < (ulong)(lVar26 - lVar20)) {
              uVar19 = 0xfffffffffffffff;
            }
            *(long **)((long)pppuVar6 + -0x68) = plVar9;
            if (uVar19 >> 0x3c == 0) {
              lVar7 = uVar19 << 4;
              __Znwm();
              lVar31 = lVar7 + lVar23;
              _bzero(lVar31,uVar28 * 0x10);
              lVar25 = lVar31 + uVar17 * -0x10;
              _memcpy(lVar25,lVar20,lVar23);
              *plVar9 = lVar25;
              plVar8[0x4c] = lVar31 + uVar28 * 0x10;
              plVar8[0x4d] = lVar7 + uVar19 * 0x10;
              *(long *)((long)pppuVar6 + -0x78) = lVar20;
              *(long *)((long)pppuVar6 + -0x70) = lVar26;
              *(long *)((long)pppuVar6 + -0x88) = lVar20;
              *(long *)((long)pppuVar6 + -0x80) = lVar20;
              func_0x00010988c1b8((undefined1 *)((long)pppuVar6 + -0x88));
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
        _bzero(lVar31,uVar28 * 0x10);
        plVar8[0x4c] = lVar31 + uVar28 * 0x10;
      }
      else if (uVar18 < uVar17) {
        lVar20 = lVar20 + uVar18 * 0x10;
        while (lVar31 != lVar20) {
          lVar31 = lVar31 + -0x10;
          func_0x00010988c204(lVar31);
        }
        plVar8[0x4c] = lVar20;
      }
code_r0x00010988c138:
      plVar8[0x5a] = uVar18;
      return;
    }
  }
  FUN_10a00946c(&UNK_10f686d3d);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9b7af0);
  (*pcVar5)();
}



/* Entry: 10a9b7464; end: 10a9b7487;  */

/* WARNING: Possible PIC construction at 0x00010a9b7bf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a9b7bf8) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c0c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c50) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c3c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c5c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c6c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c90) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d64) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7cdc) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7cf4) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d7c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d04) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d14) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d70) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d84) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d30) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c88) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c08) */

void FUN_10a9b7464(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined **ppuVar11;
  long *plVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined4 *extraout_x8;
  ulong uVar19;
  long lVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  long *unaff_x19;
  undefined ***unaff_x20;
  undefined ***unaff_x21;
  long lVar23;
  undefined ***pppuVar24;
  undefined ***unaff_x22;
  long lVar25;
  undefined8 *unaff_x23;
  long lVar26;
  undefined **unaff_x24;
  undefined **ppuVar27;
  undefined **unaff_x25;
  ulong uVar28;
  undefined **ppuVar29;
  undefined **unaff_x26;
  undefined ***pppuVar30;
  undefined ***unaff_x27;
  long lVar31;
  long unaff_x28;
  undefined8 ****ppppuVar32;
  long lStack_230;
  ulong uStack_228;
  undefined ***pppuStack_220;
  undefined8 uStack_210;
  undefined ***pppuStack_208;
  undefined8 uStack_200;
  undefined ***pppuStack_1f8;
  undefined ***apppuStack_1f0 [2];
  char cStack_1d9;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined ***pppuStack_178;
  undefined8 uStack_170;
  undefined ***pppuStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  long alStack_150 [7];
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_d0;
  long *plStack_c8;
  undefined1 auStack_c0 [56];
  undefined8 uStack_88;
  long lStack_80;
  undefined8 ***pppuStack_20;
  code *pcStack_18;
  
  if ((int)param_1 == 3) {
    return;
  }
  plVar8 = (long *)0x3;
  uVar16 = 0;
  FUN_10a052ee0(3,0,param_1);
  pcStack_18 = FUN_10a9b7488;
  ppppuVar32 = &pppuStack_20;
  plVar6 = &lStack_230;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = plVar8;
  pppuStack_20 = (undefined8 ***)&stack0xfffffffffffffff0;
  (**(code **)(*plVar8 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar12 = plVar8;
  FUN_10a9b73fc(plVar8,uVar16);
  FUN_10a9b7c00(param_4);
  func_0x000109898570(apppuStack_1f0,plVar8,param_1);
  plVar10 = plVar8;
  FUN_10a9b7c24(plVar8,param_1 + 0x10);
  FUN_10a1cf048(&uStack_200,plVar8,param_1 + 0x20);
  FUN_10a1cf048(&uStack_210,plVar8,param_1 + 0x30);
  pppuVar15 = pppuStack_1f8;
  pppuVar24 = pppuStack_208;
  if (pppuStack_1f8 != (undefined ***)0x0) {
    pppuVar30 = pppuStack_1f8 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar30,0x10);
      if (bVar4) {
        *pppuVar30 = (undefined **)((long)*pppuVar30 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (pppuStack_208 != (undefined ***)0x0) {
    pppuVar30 = pppuStack_208 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar30,0x10);
      if (bVar4) {
        *pppuVar30 = (undefined **)((long)*pppuVar30 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_180 = uStack_200;
  pppuStack_178 = pppuStack_1f8;
  if (pppuStack_1f8 != (undefined ***)0x0) {
    pppuVar30 = pppuStack_1f8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar30,0x10);
      if (bVar4) {
        *pppuVar30 = (undefined **)((long)*pppuVar30 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_170 = uStack_210;
  pppuStack_168 = pppuStack_208;
  if (pppuStack_208 != (undefined ***)0x0) {
    pppuVar30 = pppuStack_208 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar30,0x10);
      if (bVar4) {
        *pppuVar30 = (undefined **)((long)*pppuVar30 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_1a0 = 0;
  uStack_1a8 = 0;
  ppuStack_1b0 = &PTR_DAT_110b1b018;
  uStack_190 = 0;
  uStack_188 = 0;
  puStack_198 = &DAT_11383d918;
  func_0x000107c30248(&puStack_198,*(long *)(plVar12[0x1c] + 0x100) + 0x208,0);
  uStack_1a0 = uStack_1a0 | 2;
  if (uStack_188 == 0) {
    uVar18 = uStack_1a8;
    if ((uStack_1a8 & 1) != 0) {
      uVar18 = *(ulong *)(uStack_1a8 & 0xfffffffffffffffe);
    }
    func_0x0001098d9934();
    uStack_188 = uVar18;
  }
  uVar18 = uStack_188;
  uVar17 = *(ulong *)(uStack_188 + 8);
  if ((uVar17 & 1) != 0) {
    uVar17 = *(ulong *)(uVar17 & 0xfffffffffffffffe);
  }
  func_0x000107c30248(uStack_188 + 0x18,apppuStack_1f0,uVar17);
  *(uint *)(uVar18 + 0x10) = *(uint *)(uVar18 + 0x10) | 1;
  uVar17 = *(ulong *)(uVar18 + 0x20);
  if (uVar17 == 0) {
    uVar17 = *(ulong *)(uVar18 + 8);
    if ((uVar17 & 1) != 0) {
      uVar17 = *(ulong *)(uVar17 & 0xfffffffffffffffe);
    }
    func_0x0001098d98f8();
    *(ulong *)(uVar18 + 0x20) = uVar17;
  }
  *(int *)(uVar17 + 0x1c) = (int)plVar10[6];
  *(int *)(uVar17 + 0x18) = (int)plVar10[5];
  *(undefined4 *)(uVar17 + 0x10) = *(undefined4 *)((long)plVar10 + 0x24);
  *(undefined4 *)(uVar17 + 0x14) = *(undefined4 *)((long)plVar10 + 0x2c);
  if (plVar12[0x1d] != 0) {
    FUN_10a97e060(&puStack_d0);
    if (plStack_c8 != (long *)0x0) {
      plVar8 = plStack_c8 + 1;
      do {
        lVar20 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar20 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
      }
    }
    if (puStack_d0 == (undefined8 *)0x0) {
      FUN_10a97ded8(plVar12,&ppuStack_1b0);
      FUN_10a3bf4bc(&puStack_160,&ppuStack_1b0);
      lVar31 = *(long *)(plVar12[0x1c] + 0x100);
      FUN_10a97e0cc(&uStack_1d8,plVar12[0x1f],&uStack_180);
      ppuVar11 = (undefined **)0x138;
      __Znwm();
      puStack_d0 = puStack_160;
      lVar20 = lVar31 + 0x208;
      ppuVar29 = ppuVar11 + 1;
      *ppuVar29 = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      *ppuVar11 = (undefined *)&PTR_FUN_110b9f3b0;
      ppuVar27 = ppuVar11 + 3;
      puStack_160 = (undefined8 *)0x0;
      plStack_c8 = (long *)uStack_158;
      (**(code **)(alStack_150[0] + 0x10))(auStack_c0,alStack_150);
      uStack_88 = uStack_118;
      uStack_228 = *(ulong *)(lVar31 + 0x210);
      lStack_230 = *(long *)(lVar31 + 0x208);
      if (-1 < (char)*(byte *)(lVar31 + 0x21f)) {
        uStack_228 = (ulong)*(byte *)(lVar31 + 0x21f);
        lStack_230 = lVar20;
      }
      pppuVar30 = &ppuStack_110;
      ppuStack_110 = (undefined **)FUN_10a9b7edc;
      ppuStack_108 = &PTR_FUN_110c34eb0;
      uStack_100 = uStack_1d8;
      uStack_f0 = uStack_1c8;
      uStack_f8 = uStack_1d0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      pppuStack_220 = pppuVar30;
      FUN_10a23708c(ppuVar27,&UNK_10f686d69,0x18,&DAT_10f685c7a,4,&puStack_d0,0);
      (*(code *)*ppuStack_108)(&ppuStack_108);
      FUN_10a042634(&puStack_d0);
      ppuStack_1c0 = ppuVar27;
      ppuStack_1b8 = ppuVar11;
      FUN_10a97e374(&uStack_1d8);
      plVar8 = *(long **)(*(long *)(plVar12[0x1c] + 0x100) + 0x1c8);
      (**(code **)(*plVar8 + 0x60))();
      puStack_d0 = (undefined8 *)0x0;
      plStack_c8 = (long *)0x0;
      plVar12 = (long *)plVar8[1];
      if (((plVar12 == (long *)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), plStack_c8 = plVar12, plVar12 == (long *)0x0))
         || (puStack_d0 = (undefined8 *)*plVar8, puStack_d0 == (undefined8 *)0x0)) {
        if ((bRam000000011330a9e8 & 1) != 0) {
          func_0x00010ae06f08(0,1,&UNK_10f686d82,&UNK_10f686dbb,0x67,&UNK_10f66488a);
        }
      }
      else {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar29,0x10);
          if (bVar4) {
            *ppuVar29 = *ppuVar29 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        ppuStack_110 = ppuVar27;
        ppuStack_108 = ppuVar11;
        (**(code **)*puStack_d0)(puStack_d0,&ppuStack_110);
        ppuVar22 = ppuStack_108;
        if (ppuStack_108 != (undefined **)0x0) {
          ppuVar1 = ppuStack_108 + 1;
          do {
            puVar21 = *ppuVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
            if (bVar4) {
              *ppuVar1 = puVar21 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (puVar21 == (undefined *)0x0) {
            (**(code **)(*ppuStack_108 + 0x10))(ppuStack_108);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar22);
          }
        }
      }
      plVar8 = plStack_c8;
      if (plStack_c8 != (long *)0x0) {
        plVar12 = plStack_c8 + 1;
        do {
          lVar31 = *plVar12;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = lVar31 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar31 == 0) {
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      ppuVar22 = ppuStack_1b8;
      if (ppuStack_1b8 != (undefined **)0x0) {
        ppuVar1 = ppuStack_1b8 + 1;
        do {
          puVar21 = *ppuVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar4) {
            *ppuVar1 = puVar21 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar21 == (undefined *)0x0) {
          (**(code **)(*ppuStack_1b8 + 0x10))(ppuStack_1b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar22);
        }
      }
      FUN_10a042634(&puStack_160);
      pppuVar13 = &ppuStack_1b0;
      func_0x0001098d9560();
      pppuVar14 = pppuStack_168;
      if (pppuStack_168 != (undefined ***)0x0) {
        pppuVar2 = pppuStack_168 + 1;
        do {
          ppuVar22 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar22 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar22 == (undefined **)0x0) {
          (*(code *)(*pppuStack_168)[2])(pppuStack_168);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar13 = pppuVar14;
        }
      }
      pppuVar14 = pppuStack_178;
      if (pppuStack_178 != (undefined ***)0x0) {
        pppuVar2 = pppuStack_178 + 1;
        do {
          ppuVar22 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar22 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar22 == (undefined **)0x0) {
          (*(code *)(*pppuStack_178)[2])(pppuStack_178);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar13 = pppuVar14;
        }
      }
      if (pppuVar24 != (undefined ***)0x0) {
        pppuVar13 = pppuVar24;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (pppuVar15 != (undefined ***)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppuVar13 = pppuVar15;
      }
      if (pppuStack_208 != (undefined ***)0x0) {
        pppuVar15 = pppuStack_208 + 1;
        do {
          ppuVar22 = *pppuVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
          if (bVar4) {
            *pppuVar15 = (undefined **)((long)ppuVar22 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar22 == (undefined **)0x0) {
          (*(code *)(*pppuStack_208)[2])(pppuStack_208);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar13 = pppuStack_208;
        }
      }
      if (pppuStack_1f8 != (undefined ***)0x0) {
        pppuVar15 = pppuStack_1f8 + 1;
        do {
          ppuVar22 = *pppuVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
          if (bVar4) {
            *pppuVar15 = (undefined **)((long)ppuVar22 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar22 == (undefined **)0x0) {
          (*(code *)(*pppuStack_1f8)[2])(pppuStack_1f8);
          pppuVar13 = pppuStack_1f8;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      if (cStack_1d9 < '\0') {
        pppuVar13 = apppuStack_1f0[0];
        __ZdlPv();
      }
      *extraout_x8 = 0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
        plVar6 = (long *)&stack0xfffffffffffffff0;
        pppuVar13 = unaff_x20;
        pppuVar24 = unaff_x22;
        ppuVar11 = unaff_x24;
        ppuVar27 = unaff_x25;
        ppuVar29 = unaff_x26;
        pppuVar30 = unaff_x27;
        lVar20 = unaff_x28;
        ppppuVar32 = (undefined8 ****)pppuStack_20;
        pcVar5 = pcStack_18;
      }
      else {
        ___stack_chk_fail();
        FUN_10a05bd88(&ppuStack_110);
        func_0x00010a05a8c4(&puStack_d0);
        FUN_10a05bd88(&ppuStack_1c0);
        FUN_10a042634(&puStack_160);
        unaff_x23 = &uStack_180;
        func_0x0001098d9560(&ppuStack_1b0);
        FUN_10a1c9d6c(&uStack_170);
        FUN_10a1c9d6c(&uStack_180);
        if (pppuVar24 != (undefined ***)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar24);
        }
        if (pppuStack_1f8 != (undefined ***)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_1f8);
        }
        FUN_10a1c9d6c(&uStack_210);
        FUN_10a1c9d6c(&uStack_200);
        if (cStack_1d9 < '\0') {
          __ZdlPv(apppuStack_1f0[0]);
        }
        pcVar5 = (code *)0x10a9b7bf8;
        unaff_x19 = plVar9;
        unaff_x21 = pppuStack_1f8;
      }
      plVar8 = plVar9 + 0x4b;
      lVar31 = plVar9[0x59];
      uVar18 = lVar31 - 1;
      plVar9[0x59] = uVar18;
      if (uVar18 < 8) {
        uVar18 = plVar8[lVar31 + 2];
        if (plVar9[0x5a] == uVar18) {
          return;
        }
      }
      else {
        uVar18 = *(ulong *)(plVar9[0x57] + -8);
        plVar9[0x57] = plVar9[0x57] + -8;
        if (plVar9[0x5a] == uVar18) {
          return;
        }
      }
      *(long *)((long)plVar6 + -0x60) = lVar20;
      *(undefined ****)((long)plVar6 + -0x58) = pppuVar30;
      *(undefined ***)((long)plVar6 + -0x50) = ppuVar29;
      *(undefined ***)((long)plVar6 + -0x48) = ppuVar27;
      *(undefined ***)((long)plVar6 + -0x40) = ppuVar11;
      *(undefined8 **)((long)plVar6 + -0x38) = unaff_x23;
      *(undefined ****)((long)plVar6 + -0x30) = pppuVar24;
      *(undefined ****)((long)plVar6 + -0x28) = unaff_x21;
      *(undefined ****)((long)plVar6 + -0x20) = pppuVar13;
      *(long **)((long)plVar6 + -0x18) = unaff_x19;
      *(undefined8 *****)((long)plVar6 + -0x10) = ppppuVar32;
      *(code **)((long)plVar6 + -8) = pcVar5;
      lVar20 = *plVar8;
      lVar31 = plVar9[0x4c];
      lVar23 = lVar31 - lVar20;
      uVar17 = lVar23 >> 4;
      if (uVar17 < uVar18) {
        uVar28 = uVar18 - uVar17;
        lVar26 = plVar9[0x4d];
        if ((ulong)(lVar26 - lVar31 >> 4) < uVar28) {
          if (uVar18 >> 0x3c == 0) {
            uVar19 = lVar26 - lVar20 >> 3;
            if (uVar19 <= uVar18) {
              uVar19 = uVar18;
            }
            if (0x7fffffffffffffef < (ulong)(lVar26 - lVar20)) {
              uVar19 = 0xfffffffffffffff;
            }
            *(long **)((long)plVar6 + -0x68) = plVar8;
            if (uVar19 >> 0x3c == 0) {
              lVar7 = uVar19 << 4;
              __Znwm();
              lVar31 = lVar7 + lVar23;
              _bzero(lVar31,uVar28 * 0x10);
              lVar25 = lVar31 + uVar17 * -0x10;
              _memcpy(lVar25,lVar20,lVar23);
              *plVar8 = lVar25;
              plVar9[0x4c] = lVar31 + uVar28 * 0x10;
              plVar9[0x4d] = lVar7 + uVar19 * 0x10;
              *(long *)((long)plVar6 + -0x78) = lVar20;
              *(long *)((long)plVar6 + -0x70) = lVar26;
              *(long *)((long)plVar6 + -0x88) = lVar20;
              *(long *)((long)plVar6 + -0x80) = lVar20;
              func_0x00010988c1b8((undefined1 *)((long)plVar6 + -0x88));
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
        _bzero(lVar31,uVar28 * 0x10);
        plVar9[0x4c] = lVar31 + uVar28 * 0x10;
      }
      else if (uVar18 < uVar17) {
        lVar20 = lVar20 + uVar18 * 0x10;
        while (lVar31 != lVar20) {
          lVar31 = lVar31 + -0x10;
          func_0x00010988c204(lVar31);
        }
        plVar9[0x4c] = lVar20;
      }
code_r0x00010988c138:
      plVar9[0x5a] = uVar18;
      return;
    }
  }
  FUN_10a00946c(&UNK_10f686d3d);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9b7af0);
  (*pcVar5)();
}



/* Entry: 10a9b7488; end: 10a9b7bff;  */

/* WARNING: Possible PIC construction at 0x00010a9b7bf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a9b7bf8) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c0c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c50) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c3c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c5c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c6c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c90) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d64) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7cdc) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7cf4) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d7c) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d04) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d14) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d70) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d84) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7d30) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c88) */
/* WARNING: Removing unreachable block (ram,0x00010a9b7c08) */

void FUN_10a9b7488(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined ***pppuVar4;
  char cVar5;
  bool bVar6;
  undefined ***pppuVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  undefined **ppuVar11;
  long *plVar12;
  long *plVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  undefined **ppuVar23;
  long *unaff_x19;
  undefined ***unaff_x20;
  undefined ***unaff_x21;
  long lVar24;
  undefined ***unaff_x22;
  long lVar25;
  undefined8 *unaff_x23;
  long lVar26;
  undefined **unaff_x24;
  undefined **unaff_x25;
  ulong uVar27;
  undefined **unaff_x26;
  undefined **ppuVar28;
  undefined ***unaff_x27;
  undefined ***pppuVar29;
  long unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long lStack_220;
  ulong uStack_218;
  undefined ***pppuStack_210;
  undefined8 uStack_200;
  undefined ***pppuStack_1f8;
  undefined8 uStack_1f0;
  undefined ***pppuStack_1e8;
  undefined ***apppuStack_1e0 [2];
  char cStack_1c9;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined ***pppuStack_168;
  undefined8 uStack_160;
  undefined ***pppuStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  long alStack_140 [7];
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined1 auStack_b0 [56];
  undefined8 uStack_78;
  long lStack_70;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar10[0x59] < 8) {
    plVar10[plVar10[0x59] + 0x4e] = plVar10[0x5a];
    plVar10[0x59] = plVar10[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar10 + 0x4b);
  }
  plVar12 = param_2;
  FUN_10a9b73fc(param_2,param_3);
  FUN_10a9b7c00(param_5);
  func_0x000109898570(apppuStack_1e0,param_2,param_4);
  plVar13 = param_2;
  FUN_10a9b7c24(param_2,param_4 + 0x10);
  FUN_10a1cf048(&uStack_1f0,param_2,param_4 + 0x20);
  FUN_10a1cf048(&uStack_200,param_2,param_4 + 0x30);
  pppuVar16 = pppuStack_1e8;
  pppuVar7 = pppuStack_1f8;
  if (pppuStack_1e8 != (undefined ***)0x0) {
    pppuVar29 = pppuStack_1e8 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppuVar29,0x10);
      if (bVar6) {
        *pppuVar29 = (undefined **)((long)*pppuVar29 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (pppuStack_1f8 != (undefined ***)0x0) {
    pppuVar29 = pppuStack_1f8 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppuVar29,0x10);
      if (bVar6) {
        *pppuVar29 = (undefined **)((long)*pppuVar29 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uStack_170 = uStack_1f0;
  pppuStack_168 = pppuStack_1e8;
  if (pppuStack_1e8 != (undefined ***)0x0) {
    pppuVar29 = pppuStack_1e8 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppuVar29,0x10);
      if (bVar6) {
        *pppuVar29 = (undefined **)((long)*pppuVar29 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uStack_160 = uStack_200;
  pppuStack_158 = pppuStack_1f8;
  if (pppuStack_1f8 != (undefined ***)0x0) {
    pppuVar29 = pppuStack_1f8 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppuVar29,0x10);
      if (bVar6) {
        *pppuVar29 = (undefined **)((long)*pppuVar29 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uStack_190 = 0;
  uStack_198 = 0;
  ppuStack_1a0 = &PTR_DAT_110b1b018;
  uStack_180 = 0;
  uStack_178 = 0;
  puStack_188 = &DAT_11383d918;
  func_0x000107c30248(&puStack_188,*(long *)(plVar12[0x1c] + 0x100) + 0x208,0);
  uStack_190 = uStack_190 | 2;
  if (uStack_178 == 0) {
    uVar18 = uStack_198;
    if ((uStack_198 & 1) != 0) {
      uVar18 = *(ulong *)(uStack_198 & 0xfffffffffffffffe);
    }
    func_0x0001098d9934();
    uStack_178 = uVar18;
  }
  uVar18 = uStack_178;
  uVar17 = *(ulong *)(uStack_178 + 8);
  if ((uVar17 & 1) != 0) {
    uVar17 = *(ulong *)(uVar17 & 0xfffffffffffffffe);
  }
  func_0x000107c30248(uStack_178 + 0x18,apppuStack_1e0,uVar17);
  *(uint *)(uVar18 + 0x10) = *(uint *)(uVar18 + 0x10) | 1;
  uVar17 = *(ulong *)(uVar18 + 0x20);
  if (uVar17 == 0) {
    uVar17 = *(ulong *)(uVar18 + 8);
    if ((uVar17 & 1) != 0) {
      uVar17 = *(ulong *)(uVar17 & 0xfffffffffffffffe);
    }
    func_0x0001098d98f8();
    *(ulong *)(uVar18 + 0x20) = uVar17;
  }
  *(int *)(uVar17 + 0x1c) = (int)plVar13[6];
  *(int *)(uVar17 + 0x18) = (int)plVar13[5];
  *(undefined4 *)(uVar17 + 0x10) = *(undefined4 *)((long)plVar13 + 0x24);
  *(undefined4 *)(uVar17 + 0x14) = *(undefined4 *)((long)plVar13 + 0x2c);
  if (plVar12[0x1d] != 0) {
    FUN_10a97e060(&puStack_c0);
    if (plStack_b8 != (long *)0x0) {
      plVar13 = plStack_b8 + 1;
      do {
        lVar20 = *plVar13;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = lVar20 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
      }
    }
    if (puStack_c0 == (undefined8 *)0x0) {
      FUN_10a97ded8(plVar12,&ppuStack_1a0);
      FUN_10a3bf4bc(&puStack_150,&ppuStack_1a0);
      lVar20 = *(long *)(plVar12[0x1c] + 0x100);
      FUN_10a97e0cc(&uStack_1c8,plVar12[0x1f],&uStack_170);
      ppuVar11 = (undefined **)0x138;
      __Znwm();
      puStack_c0 = puStack_150;
      ppuVar28 = ppuVar11 + 1;
      *ppuVar28 = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      *ppuVar11 = (undefined *)&PTR_FUN_110b9f3b0;
      ppuVar2 = ppuVar11 + 3;
      puStack_150 = (undefined8 *)0x0;
      plStack_b8 = (long *)uStack_148;
      (**(code **)(alStack_140[0] + 0x10))(auStack_b0,alStack_140);
      uStack_78 = uStack_108;
      uStack_218 = *(ulong *)(lVar20 + 0x210);
      lStack_220 = *(long *)(lVar20 + 0x208);
      if (-1 < (char)*(byte *)(lVar20 + 0x21f)) {
        uStack_218 = (ulong)*(byte *)(lVar20 + 0x21f);
        lStack_220 = lVar20 + 0x208;
      }
      pppuVar29 = &ppuStack_100;
      ppuStack_100 = (undefined **)FUN_10a9b7edc;
      ppuStack_f8 = &PTR_FUN_110c34eb0;
      uStack_f0 = uStack_1c8;
      uStack_e0 = uStack_1b8;
      uStack_e8 = uStack_1c0;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      pppuStack_210 = pppuVar29;
      FUN_10a23708c(ppuVar2,&UNK_10f686d69,0x18,&DAT_10f685c7a,4,&puStack_c0,0);
      (*(code *)*ppuStack_f8)(&ppuStack_f8);
      FUN_10a042634(&puStack_c0);
      ppuStack_1b0 = ppuVar2;
      ppuStack_1a8 = ppuVar11;
      FUN_10a97e374(&uStack_1c8);
      plVar12 = *(long **)(*(long *)(plVar12[0x1c] + 0x100) + 0x1c8);
      (**(code **)(*plVar12 + 0x60))();
      puStack_c0 = (undefined8 *)0x0;
      plStack_b8 = (long *)0x0;
      plVar13 = (long *)plVar12[1];
      if (((plVar13 == (long *)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b8 = plVar13, plVar13 == (long *)0x0))
         || (puStack_c0 = (undefined8 *)*plVar12, puStack_c0 == (undefined8 *)0x0)) {
        if ((bRam000000011330a9e8 & 1) != 0) {
          func_0x00010ae06f08(0,1,&UNK_10f686d82,&UNK_10f686dbb,0x67,&UNK_10f66488a);
        }
      }
      else {
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar28,0x10);
          if (bVar6) {
            *ppuVar28 = *ppuVar28 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        ppuStack_100 = ppuVar2;
        ppuStack_f8 = ppuVar11;
        (**(code **)*puStack_c0)(puStack_c0,&ppuStack_100);
        ppuVar23 = ppuStack_f8;
        if (ppuStack_f8 != (undefined **)0x0) {
          ppuVar3 = ppuStack_f8 + 1;
          do {
            puVar21 = *ppuVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
            if (bVar6) {
              *ppuVar3 = puVar21 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (puVar21 == (undefined *)0x0) {
            (**(code **)(*ppuStack_f8 + 0x10))(ppuStack_f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar23);
          }
        }
      }
      plVar12 = plStack_b8;
      if (plStack_b8 != (long *)0x0) {
        plVar13 = plStack_b8 + 1;
        do {
          lVar22 = *plVar13;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = lVar22 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar22 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      ppuVar23 = ppuStack_1a8;
      if (ppuStack_1a8 != (undefined **)0x0) {
        ppuVar3 = ppuStack_1a8 + 1;
        do {
          puVar21 = *ppuVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
          if (bVar6) {
            *ppuVar3 = puVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar21 == (undefined *)0x0) {
          (**(code **)(*ppuStack_1a8 + 0x10))(ppuStack_1a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar23);
        }
      }
      FUN_10a042634(&puStack_150);
      pppuVar14 = &ppuStack_1a0;
      func_0x0001098d9560();
      pppuVar15 = pppuStack_158;
      if (pppuStack_158 != (undefined ***)0x0) {
        pppuVar4 = pppuStack_158 + 1;
        do {
          ppuVar23 = *pppuVar4;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
          if (bVar6) {
            *pppuVar4 = (undefined **)((long)ppuVar23 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppuVar23 == (undefined **)0x0) {
          (*(code *)(*pppuStack_158)[2])(pppuStack_158);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar14 = pppuVar15;
        }
      }
      pppuVar15 = pppuStack_168;
      if (pppuStack_168 != (undefined ***)0x0) {
        pppuVar4 = pppuStack_168 + 1;
        do {
          ppuVar23 = *pppuVar4;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
          if (bVar6) {
            *pppuVar4 = (undefined **)((long)ppuVar23 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppuVar23 == (undefined **)0x0) {
          (*(code *)(*pppuStack_168)[2])(pppuStack_168);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar14 = pppuVar15;
        }
      }
      if (pppuVar7 != (undefined ***)0x0) {
        pppuVar14 = pppuVar7;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (pppuVar16 != (undefined ***)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppuVar14 = pppuVar16;
      }
      if (pppuStack_1f8 != (undefined ***)0x0) {
        pppuVar16 = pppuStack_1f8 + 1;
        do {
          ppuVar23 = *pppuVar16;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppuVar16,0x10);
          if (bVar6) {
            *pppuVar16 = (undefined **)((long)ppuVar23 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppuVar23 == (undefined **)0x0) {
          (*(code *)(*pppuStack_1f8)[2])(pppuStack_1f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar14 = pppuStack_1f8;
        }
      }
      if (pppuStack_1e8 != (undefined ***)0x0) {
        pppuVar16 = pppuStack_1e8 + 1;
        do {
          ppuVar23 = *pppuVar16;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppuVar16,0x10);
          if (bVar6) {
            *pppuVar16 = (undefined **)((long)ppuVar23 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppuVar23 == (undefined **)0x0) {
          (*(code *)(*pppuStack_1e8)[2])(pppuStack_1e8);
          pppuVar14 = pppuStack_1e8;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      if (cStack_1c9 < '\0') {
        pppuVar14 = apppuStack_1e0[0];
        __ZdlPv();
      }
      *param_1 = 0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
        ___stack_chk_fail();
        FUN_10a05bd88(&ppuStack_100);
        func_0x00010a05a8c4(&puStack_c0);
        FUN_10a05bd88(&ppuStack_1b0);
        FUN_10a042634(&puStack_150);
        unaff_x23 = &uStack_170;
        func_0x0001098d9560(&ppuStack_1a0);
        FUN_10a1c9d6c(&uStack_160);
        FUN_10a1c9d6c(&uStack_170);
        if (pppuVar7 != (undefined ***)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar7);
        }
        if (pppuStack_1e8 != (undefined ***)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_1e8);
        }
        FUN_10a1c9d6c(&uStack_200);
        FUN_10a1c9d6c(&uStack_1f0);
        if (cStack_1c9 < '\0') {
          __ZdlPv(apppuStack_1e0[0]);
        }
        unaff_x30 = 0x10a9b7bf8;
        register0x00000008 = (BADSPACEBASE *)&lStack_220;
        unaff_x19 = plVar10;
        unaff_x20 = pppuVar14;
        unaff_x21 = pppuStack_1e8;
        unaff_x22 = pppuVar7;
        unaff_x24 = ppuVar11;
        unaff_x25 = ppuVar2;
        unaff_x26 = ppuVar28;
        unaff_x27 = pppuVar29;
        unaff_x28 = lVar20 + 0x208;
        unaff_x29 = puVar1;
      }
      plVar12 = plVar10 + 0x4b;
      lVar20 = plVar10[0x59];
      uVar18 = lVar20 - 1;
      plVar10[0x59] = uVar18;
      if (uVar18 < 8) {
        uVar18 = plVar12[lVar20 + 2];
        if (plVar10[0x5a] == uVar18) {
          return;
        }
      }
      else {
        uVar18 = *(ulong *)(plVar10[0x57] + -8);
        plVar10[0x57] = plVar10[0x57] + -8;
        if (plVar10[0x5a] == uVar18) {
          return;
        }
      }
      *(long *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined ****)((long)register0x00000008 + -0x58) = unaff_x27;
      *(undefined ***)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined ***)((long)register0x00000008 + -0x48) = unaff_x25;
      *(undefined ***)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined ****)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined ****)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined ****)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      lVar20 = *plVar12;
      lVar22 = plVar10[0x4c];
      lVar24 = lVar22 - lVar20;
      uVar17 = lVar24 >> 4;
      if (uVar17 < uVar18) {
        uVar27 = uVar18 - uVar17;
        lVar26 = plVar10[0x4d];
        if ((ulong)(lVar26 - lVar22 >> 4) < uVar27) {
          if (uVar18 >> 0x3c == 0) {
            uVar19 = lVar26 - lVar20 >> 3;
            if (uVar19 <= uVar18) {
              uVar19 = uVar18;
            }
            if (0x7fffffffffffffef < (ulong)(lVar26 - lVar20)) {
              uVar19 = 0xfffffffffffffff;
            }
            *(long **)((long)register0x00000008 + -0x68) = plVar12;
            if (uVar19 >> 0x3c == 0) {
              lVar9 = uVar19 << 4;
              __Znwm();
              lVar22 = lVar9 + lVar24;
              _bzero(lVar22,uVar27 * 0x10);
              lVar25 = lVar22 + uVar17 * -0x10;
              _memcpy(lVar25,lVar20,lVar24);
              *plVar12 = lVar25;
              plVar10[0x4c] = lVar22 + uVar27 * 0x10;
              plVar10[0x4d] = lVar9 + uVar19 * 0x10;
              *(long *)((long)register0x00000008 + -0x78) = lVar20;
              *(long *)((long)register0x00000008 + -0x70) = lVar26;
              *(long *)((long)register0x00000008 + -0x88) = lVar20;
              *(long *)((long)register0x00000008 + -0x80) = lVar20;
              func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar8)();
        }
        _bzero(lVar22,uVar27 * 0x10);
        plVar10[0x4c] = lVar22 + uVar27 * 0x10;
      }
      else if (uVar18 < uVar17) {
        lVar20 = lVar20 + uVar18 * 0x10;
        while (lVar22 != lVar20) {
          lVar22 = lVar22 + -0x10;
          func_0x00010988c204(lVar22);
        }
        plVar10[0x4c] = lVar20;
      }
code_r0x00010988c138:
      plVar10[0x5a] = uVar18;
      return;
    }
  }
  FUN_10a00946c(&UNK_10f686d3d);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a9b7af0);
  (*pcVar8)();
}



/* Entry: 10a9b7c00; end: 10a9b7c23;  */

void FUN_10a9b7c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  long lVar21;
  ulong uVar22;
  undefined8 extraout_x8;
  ulong uVar23;
  undefined **unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar24;
  undefined8 unaff_x22;
  long lVar25;
  long lVar26;
  undefined8 unaff_x23;
  long lVar27;
  undefined8 unaff_x24;
  ulong uVar28;
  undefined8 unaff_x25;
  ulong uVar29;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar30;
  undefined8 ***pppuStack_20;
  code *pcStack_18;
  
  if ((int)param_1 == 4) {
    return;
  }
  ppuVar12 = (undefined **)0x4;
  ppuVar20 = (undefined **)0x0;
  FUN_10a052ee0(4,0,param_1);
  puVar10 = &stack0xffffffffffffffd0;
  pcStack_18 = FUN_10a9b7c24;
  ppppuVar30 = &pppuStack_20;
  ppuVar13 = ppuVar12;
  pppuStack_20 = (undefined8 ***)&stack0xfffffffffffffff0;
  func_0x000109898688();
  if (ppuVar13 == (undefined **)0x0) {
    ppuVar14 = (undefined **)&UNK_10f68f52e;
    pcVar9 = FUN_10a9b7c5c;
    func_0x00010988bd28();
  }
  else {
    puVar10 = &stack0xfffffffffffffff0;
    ppuVar14 = ppuVar12;
    ppuVar20 = ppuVar13;
    ppuVar12 = unaff_x19;
    ppppuVar30 = (undefined8 ****)pppuStack_20;
    pcVar9 = pcStack_18;
  }
  *(undefined8 *****)(puVar10 + -0x10) = ppppuVar30;
  *(code **)(puVar10 + -8) = pcVar9;
  FUN_10a053854();
  if (ppuVar14 != (undefined **)0x0) {
    ppuVar20 = &PTR_DAT_110b178e0;
    param_4 = 0;
    ___dynamic_cast();
    if (ppuVar14 != (undefined **)0x0) {
      return;
    }
  }
  plVar15 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  *(undefined8 *)(puVar10 + -0x50) = unaff_x24;
  *(undefined8 *)(puVar10 + -0x48) = unaff_x23;
  *(undefined8 *)(puVar10 + -0x40) = unaff_x22;
  *(undefined8 *)(puVar10 + -0x38) = unaff_x21;
  *(undefined8 *)(puVar10 + -0x30) = unaff_x20;
  *(undefined ***)(puVar10 + -0x28) = ppuVar12;
  *(undefined1 **)(puVar10 + -0x20) = puVar10 + -0x10;
  *(code **)(puVar10 + -0x18) = FUN_10a9b7c9c;
  plVar16 = plVar15;
  (**(code **)(*plVar15 + 0x58))();
  if ((ulong)plVar16[0x59] < 8) {
    plVar16[plVar16[0x59] + 0x4e] = plVar16[0x5a];
    plVar16[0x59] = plVar16[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar16 + 0x4b);
  }
  plVar17 = plVar15;
  func_0x000109898688(plVar15,ppuVar20);
  if (plVar17 == (long *)0x0) {
    puVar19 = &UNK_10f68f52e;
  }
  else {
    plVar18 = plVar15;
    FUN_10a052c2c(plVar15,plVar17);
    if ((plVar18 != (long *)0x0) && (___dynamic_cast(), plVar18 != (long *)0x0)) {
      FUN_10a052e3c(param_4);
      FUN_10a05b924(extraout_x8,plVar15,plVar18 + 0x1d);
      plVar15 = plVar16 + 0x4b;
      uVar1 = *(undefined8 *)(puVar10 + -0x20);
      uVar5 = *(undefined8 *)(puVar10 + -0x18);
      uVar2 = *(undefined8 *)(puVar10 + -0x30);
      uVar6 = *(undefined8 *)(puVar10 + -0x28);
      uVar3 = *(undefined8 *)(puVar10 + -0x40);
      uVar7 = *(undefined8 *)(puVar10 + -0x38);
      uVar4 = *(undefined8 *)(puVar10 + -0x50);
      uVar8 = *(undefined8 *)(puVar10 + -0x48);
      lVar21 = plVar16[0x59];
      uVar22 = lVar21 - 1;
      plVar16[0x59] = uVar22;
      if (uVar22 < 8) {
        uVar22 = plVar15[lVar21 + 2];
        if (plVar16[0x5a] == uVar22) {
          return;
        }
      }
      else {
        uVar22 = *(ulong *)(plVar16[0x57] + -8);
        plVar16[0x57] = plVar16[0x57] + -8;
        if (plVar16[0x5a] == uVar22) {
          return;
        }
      }
      *(undefined8 *)(puVar10 + -0x70) = unaff_x28;
      *(undefined8 *)(puVar10 + -0x68) = unaff_x27;
      *(undefined8 *)(puVar10 + -0x60) = unaff_x26;
      *(undefined8 *)(puVar10 + -0x58) = unaff_x25;
      *(undefined8 *)(puVar10 + -0x50) = uVar4;
      *(undefined8 *)(puVar10 + -0x48) = uVar8;
      *(undefined8 *)(puVar10 + -0x40) = uVar3;
      *(undefined8 *)(puVar10 + -0x38) = uVar7;
      *(undefined8 *)(puVar10 + -0x30) = uVar2;
      *(undefined8 *)(puVar10 + -0x28) = uVar6;
      *(undefined8 *)(puVar10 + -0x20) = uVar1;
      *(undefined8 *)(puVar10 + -0x18) = uVar5;
      lVar21 = *plVar15;
      lVar26 = plVar16[0x4c];
      lVar24 = lVar26 - lVar21;
      uVar28 = lVar24 >> 4;
      if (uVar28 < uVar22) {
        uVar29 = uVar22 - uVar28;
        lVar27 = plVar16[0x4d];
        if ((ulong)(lVar27 - lVar26 >> 4) < uVar29) {
          if (uVar22 >> 0x3c == 0) {
            uVar23 = lVar27 - lVar21 >> 3;
            if (uVar23 <= uVar22) {
              uVar23 = uVar22;
            }
            if (0x7fffffffffffffef < (ulong)(lVar27 - lVar21)) {
              uVar23 = 0xfffffffffffffff;
            }
            *(long **)(puVar10 + -0x78) = plVar15;
            if (uVar23 >> 0x3c == 0) {
              lVar11 = uVar23 << 4;
              __Znwm();
              lVar26 = lVar11 + lVar24;
              _bzero(lVar26,uVar29 * 0x10);
              lVar25 = lVar26 + uVar28 * -0x10;
              _memcpy(lVar25,lVar21,lVar24);
              *plVar15 = lVar25;
              plVar16[0x4c] = lVar26 + uVar29 * 0x10;
              plVar16[0x4d] = lVar11 + uVar23 * 0x10;
              *(long *)(puVar10 + -0x88) = lVar21;
              *(long *)(puVar10 + -0x80) = lVar27;
              *(long *)(puVar10 + -0x98) = lVar21;
              *(long *)(puVar10 + -0x90) = lVar21;
              func_0x00010988c1b8(puVar10 + -0x98);
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
        _bzero(lVar26,uVar29 * 0x10);
        plVar16[0x4c] = lVar26 + uVar29 * 0x10;
      }
      else if (uVar22 < uVar28) {
        lVar21 = lVar21 + uVar22 * 0x10;
        while (lVar26 != lVar21) {
          lVar26 = lVar26 + -0x10;
          func_0x00010988c204(lVar26);
        }
        plVar16[0x4c] = lVar21;
      }
code_r0x00010988c138:
      plVar16[0x5a] = uVar22;
      return;
    }
    puVar19 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar19);
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a9b7d8c);
  (*pcVar9)();
}



/* Entry: 10a9b7c24; end: 10a9b7c5b;  */

void FUN_10a9b7c24(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined *puVar18;
  long lVar19;
  ulong uVar20;
  undefined8 extraout_x8;
  ulong uVar21;
  undefined **unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar22;
  undefined8 unaff_x22;
  long lVar23;
  long lVar24;
  undefined8 unaff_x23;
  long lVar25;
  undefined8 unaff_x24;
  ulong uVar26;
  undefined8 unaff_x25;
  ulong uVar27;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  ppuVar12 = param_1;
  func_0x000109898688();
  ppuVar13 = param_1;
  if (ppuVar12 == (undefined **)0x0) {
    ppuVar13 = (undefined **)&UNK_10f68f52e;
    unaff_x30 = FUN_10a9b7c5c;
    func_0x00010988bd28();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    ppuVar12 = param_2;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  FUN_10a053854();
  if (ppuVar13 != (undefined **)0x0) {
    ppuVar12 = &PTR_DAT_110b178e0;
    param_4 = 0;
    ___dynamic_cast();
    if (ppuVar13 != (undefined **)0x0) {
      return;
    }
  }
  plVar14 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
  *(undefined ***)((long)register0x00000008 + -0x28) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x18) = FUN_10a9b7c9c;
  plVar15 = plVar14;
  (**(code **)(*plVar14 + 0x58))();
  if ((ulong)plVar15[0x59] < 8) {
    plVar15[plVar15[0x59] + 0x4e] = plVar15[0x5a];
    plVar15[0x59] = plVar15[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar15 + 0x4b);
  }
  plVar16 = plVar14;
  func_0x000109898688(plVar14,ppuVar12);
  if (plVar16 == (long *)0x0) {
    puVar18 = &UNK_10f68f52e;
  }
  else {
    plVar17 = plVar14;
    FUN_10a052c2c(plVar14,plVar16);
    if ((plVar17 != (long *)0x0) && (___dynamic_cast(), plVar17 != (long *)0x0)) {
      FUN_10a052e3c(param_4);
      FUN_10a05b924(extraout_x8,plVar14,plVar17 + 0x1d);
      plVar14 = plVar15 + 0x4b;
      uVar2 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar6 = *(undefined8 *)((long)register0x00000008 + -0x18);
      uVar3 = *(undefined8 *)((long)register0x00000008 + -0x30);
      uVar7 = *(undefined8 *)((long)register0x00000008 + -0x28);
      uVar4 = *(undefined8 *)((long)register0x00000008 + -0x40);
      uVar8 = *(undefined8 *)((long)register0x00000008 + -0x38);
      uVar5 = *(undefined8 *)((long)register0x00000008 + -0x50);
      uVar9 = *(undefined8 *)((long)register0x00000008 + -0x48);
      lVar19 = plVar15[0x59];
      uVar20 = lVar19 - 1;
      plVar15[0x59] = uVar20;
      if (uVar20 < 8) {
        uVar20 = plVar14[lVar19 + 2];
        if (plVar15[0x5a] == uVar20) {
          return;
        }
      }
      else {
        uVar20 = *(ulong *)(plVar15[0x57] + -8);
        plVar15[0x57] = plVar15[0x57] + -8;
        if (plVar15[0x5a] == uVar20) {
          return;
        }
      }
      *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0x50) = uVar5;
      *(undefined8 *)((long)register0x00000008 + -0x48) = uVar9;
      *(undefined8 *)((long)register0x00000008 + -0x40) = uVar4;
      *(undefined8 *)((long)register0x00000008 + -0x38) = uVar8;
      *(undefined8 *)((long)register0x00000008 + -0x30) = uVar3;
      *(undefined8 *)((long)register0x00000008 + -0x28) = uVar7;
      *(undefined8 *)((long)register0x00000008 + -0x20) = uVar2;
      *(undefined8 *)((long)register0x00000008 + -0x18) = uVar6;
      lVar19 = *plVar14;
      lVar24 = plVar15[0x4c];
      lVar22 = lVar24 - lVar19;
      uVar26 = lVar22 >> 4;
      if (uVar26 < uVar20) {
        uVar27 = uVar20 - uVar26;
        lVar25 = plVar15[0x4d];
        if ((ulong)(lVar25 - lVar24 >> 4) < uVar27) {
          if (uVar20 >> 0x3c == 0) {
            uVar21 = lVar25 - lVar19 >> 3;
            if (uVar21 <= uVar20) {
              uVar21 = uVar20;
            }
            if (0x7fffffffffffffef < (ulong)(lVar25 - lVar19)) {
              uVar21 = 0xfffffffffffffff;
            }
            *(long **)((long)register0x00000008 + -0x78) = plVar14;
            if (uVar21 >> 0x3c == 0) {
              lVar11 = uVar21 << 4;
              __Znwm();
              lVar24 = lVar11 + lVar22;
              _bzero(lVar24,uVar27 * 0x10);
              lVar23 = lVar24 + uVar26 * -0x10;
              _memcpy(lVar23,lVar19,lVar22);
              *plVar14 = lVar23;
              plVar15[0x4c] = lVar24 + uVar27 * 0x10;
              plVar15[0x4d] = lVar11 + uVar21 * 0x10;
              *(long *)((long)register0x00000008 + -0x88) = lVar19;
              *(long *)((long)register0x00000008 + -0x80) = lVar25;
              *(long *)((long)register0x00000008 + -0x98) = lVar19;
              *(long *)((long)register0x00000008 + -0x90) = lVar19;
              func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x98));
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar10)();
        }
        _bzero(lVar24,uVar27 * 0x10);
        plVar15[0x4c] = lVar24 + uVar27 * 0x10;
      }
      else if (uVar20 < uVar26) {
        lVar19 = lVar19 + uVar20 * 0x10;
        while (lVar24 != lVar19) {
          lVar24 = lVar24 + -0x10;
          func_0x00010988c204(lVar24);
        }
        plVar15[0x4c] = lVar19;
      }
code_r0x00010988c138:
      plVar15[0x5a] = uVar20;
      return;
    }
    puVar18 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar18);
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10a9b7d8c);
  (*pcVar10)();
}



/* Entry: 10a9b7c5c; end: 10a9b7c9b;  */

void FUN_10a9b7c5c(long param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  FUN_10a053854();
  if (param_1 != 0) {
    param_2 = &PTR_DAT_110b178e0;
    param_4 = 0;
    ___dynamic_cast();
    if (param_1 != 0) {
      return;
    }
  }
  plVar3 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
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
  func_0x000109898688(plVar3,param_2);
  if (plVar5 == (long *)0x0) {
    puVar7 = &UNK_10f68f52e;
  }
  else {
    plVar6 = plVar3;
    FUN_10a052c2c(plVar3,plVar5);
    if ((plVar6 != (long *)0x0) && (___dynamic_cast(), plVar6 != (long *)0x0)) {
      FUN_10a052e3c(param_4);
      FUN_10a05b924(extraout_x8,plVar3,plVar6 + 0x1d);
      plVar3 = plVar4 + 0x4b;
      lVar8 = plVar4[0x59];
      uVar9 = lVar8 - 1;
      plVar4[0x59] = uVar9;
      if (uVar9 < 8) {
        uVar9 = plVar3[lVar8 + 2];
        if (plVar4[0x5a] == uVar9) {
          return;
        }
      }
      else {
        uVar9 = *(ulong *)(plVar4[0x57] + -8);
        plVar4[0x57] = plVar4[0x57] + -8;
        if (plVar4[0x5a] == uVar9) {
          return;
        }
      }
      lVar8 = *plVar3;
      lVar13 = plVar4[0x4c];
      lVar11 = lVar13 - lVar8;
      uVar15 = lVar11 >> 4;
      if (uVar15 < uVar9) {
        uVar16 = uVar9 - uVar15;
        lVar14 = plVar4[0x4d];
        if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
          if (uVar9 >> 0x3c == 0) {
            uVar10 = lVar14 - lVar8 >> 3;
            if (uVar10 <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_78 = plVar3;
            if (uVar10 >> 0x3c == 0) {
              lVar2 = uVar10 << 4;
              __Znwm();
              lVar13 = lVar2 + lVar11;
              _bzero(lVar13,uVar16 * 0x10);
              lVar12 = lVar13 + uVar15 * -0x10;
              _memcpy(lVar12,lVar8,lVar11);
              *plVar3 = lVar12;
              plVar4[0x4c] = lVar13 + uVar16 * 0x10;
              plVar4[0x4d] = lVar2 + uVar10 * 0x10;
              lStack_98 = lVar8;
              lStack_90 = lVar8;
              lStack_88 = lVar8;
              lStack_80 = lVar14;
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
        _bzero(lVar13,uVar16 * 0x10);
        plVar4[0x4c] = lVar13 + uVar16 * 0x10;
      }
      else if (uVar9 < uVar15) {
        lVar8 = lVar8 + uVar9 * 0x10;
        while (lVar13 != lVar8) {
          lVar13 = lVar13 + -0x10;
          func_0x00010988c204(lVar13);
        }
        plVar4[0x4c] = lVar8;
      }
code_r0x00010988c138:
      plVar4[0x5a] = uVar9;
      return;
    }
    puVar7 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar7);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9b7d8c);
  (*pcVar1)();
}



/* Entry: 10a9b7c9c; end: 10a9b7d9f;  */

void FUN_10a9b7c9c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
      FUN_10a05b924(param_1,param_2,plVar5 + 0x1d);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9b7d8c);
  (*pcVar1)();
}



/* Entry: 10a9b7da0; end: 10a9b7eab;  */

void FUN_10a9b7da0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b73fc(param_2,param_3);
  FUN_10a1f9134(param_5);
  FUN_10a065cdc(&stack0xffffffffffffffb0,param_2,param_4);
  func_0x00010a04a704(plVar6 + 0x1d,&stack0xffffffffffffffb0);
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



/* Entry: 10a9b7eac; end: 10a9b7edb;  */

undefined8 * FUN_10a9b7eac(undefined8 *param_1,long param_2)

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
  plVar6 = *(long **)(lVar5 + 0xf0);
  *(undefined8 *)(lVar5 + 0xf0) = uVar8;
  *(undefined8 *)(lVar5 + 0xe8) = uVar7;
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
  return (undefined8 *)(lVar5 + 0xe8);
}



/* Entry: 10a9b7edc; end: 10a9b7fdb;  */

void FUN_10a9b7edc(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  plVar4 = *(long **)(param_2 + 0x20);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_2 + 0x18) != 0) {
        lVar5 = *(long *)(param_2 + 0x10);
        if (*(int *)(param_1 + 0x30) - 200U < 100) {
          FUN_109ffe064(auStack_48,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x80));
          FUN_10a1bcbe0(*(undefined8 *)(lVar5 + 0x18),auStack_48);
          if (cStack_31 < '\0') {
            __ZdlPv(auStack_48[0]);
          }
        }
        else {
          FUN_10a1bcbe0(*(undefined8 *)(lVar5 + 0x28),param_1 + 0x18);
        }
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
  }
  return;
}



/* Entry: 10a9b7fdc; end: 10a9b8007;  */

undefined8 * FUN_10a9b7fdc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10a05c0fc(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
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
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10a9b8008; end: 10a9b811f;  */

void FUN_10a9b8008(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_40;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  plStack_40 = (long *)0x0;
  plVar4 = *(long **)(param_2 + 0x20);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_40 = plVar4;
    if ((plVar4 != (long *)0x0) && (*(long *)(param_2 + 0x18) != 0)) {
      lVar5 = *(long *)(param_2 + 0x10);
      piVar1 = (int *)(*(long *)(lVar5 + 0x18) + 0x110);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (*(int *)(param_1 + 0x30) - 200U < 100) {
        FUN_109ffe064(auStack_38,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x80));
        FUN_10a1bcbe0(*(undefined8 *)(lVar5 + 0x20),auStack_38);
        if (cStack_21 < '\0') {
          __ZdlPv(auStack_38[0]);
        }
      }
      else {
        FUN_10a1bcbe0(*(undefined8 *)(lVar5 + 0x30),param_1 + 0x18);
      }
    }
  }
  if (plStack_40 != (long *)0x0) {
    plVar4 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  return;
}



/* Entry: 10a9b8120; end: 10a9b814b;  */

undefined8 * FUN_10a9b8120(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10a05c0fc(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
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
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10a9b814c; end: 10a9b81a3;  */

long FUN_10a9b814c(long param_1)

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



/* Entry: 10a9b81a4; end: 10a9b829f;  */

undefined1  [16] FUN_10a9b81a4(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c33970;
  puVar1 = &UNK_10f68581c;
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
    ppuStack_40 = &PTR_DAT_110c33970;
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



/* Entry: 10a9b82a0; end: 10a9b82f3;  */

ulong FUN_10a9b82a0(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a9b82f4,0);
  }
  return param_1;
}



/* Entry: 10a9b82f4; end: 10a9b83ab;  */

void FUN_10a9b82f4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b83ac(param_2,param_3);
  FUN_10a052e3c(param_5);
  func_0x00010a9b8414(param_1,param_2,plVar4[3],plVar4[4]);
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



/* Entry: 10a9b83ac; end: 10a9b8507;  */

void FUN_10a9b83ac(undefined **param_1,undefined **param_2,undefined **param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long *plStack_48;
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar5);
    param_2 = ppuVar5;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c33970;
      param_4 = (long *)0x0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar6 = &UNK_10f68f52e;
  func_0x00010988bd28(&UNK_10f68f52e);
  if (param_4 != (long *)0x0) {
    plVar1 = param_4 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_58 = &PTR_DAT_110bd3138;
  ppuStack_50 = param_3;
  plStack_48 = param_4;
  func_0x000109899de4(puVar6,param_2,&ppuStack_50,&ppuStack_58,0,0);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a9b8508; end: 10a9b85bf;  */

void FUN_10a9b8508(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b83ac(param_2,param_3);
  FUN_10a052e3c(param_5);
  func_0x00010a9b8414(param_1,param_2,plVar4[5],plVar4[6]);
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



/* Entry: 10a9b85c0; end: 10a9b867b;  */

void FUN_10a9b85c0(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6878f5,0x18);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9b867c);
  (*pcVar4)();
}



/* Entry: 10a9b867c; end: 10a9b876b;  */

undefined1  [16] FUN_10a9b867c(ulong param_1,ulong *param_2,ulong param_3)

{
  undefined *puVar1;
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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c339d0;
  puVar1 = &UNK_10f68581c;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
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
    ppuStack_40 = &PTR_DAT_110c339d0;
    uStack_38 = 0;
    auStack_a8[0] = auStack_a8[0] & 0xffffffffffffff00;
    auStack_a8[2] = auStack_a8[2] & 0xffffffffffffff00;
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,auStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)(uint)param_2[1] << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a9b876c; end: 10a9b87bf;  */

ulong FUN_10a9b876c(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a9b87c0,0);
  }
  return param_1;
}



/* Entry: 10a9b87c0; end: 10a9b889f;  */

void FUN_10a9b87c0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b88a0(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[3];
  plVar1 = (long *)plVar5[2];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x27)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x27);
    plVar1 = plVar5 + 2;
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



/* Entry: 10a9b88a0; end: 10a9b88e3;  */

undefined8 * FUN_10a9b88a0(undefined8 *param_1)

{
  func_0x000109898688();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*param_1 == &PTR_FUN_110c34ee0) {
    return param_1 + 1;
  }
  func_0x00010988bd28(&UNK_10f685496);
  return (undefined8 *)0x0;
}



/* Entry: 10a9b88e4; end: 10a9b88fb;  */

undefined8 FUN_10a9b88e4(void)

{
  return 0;
}



/* Entry: 10a9b88fc; end: 10a9b898f;  */

void FUN_10a9b88fc(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)param_2[1])();
    *param_2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 **)(param_1 + 0x48) = param_2;
  }
  return;
}



/* Entry: 10a9b8990; end: 10a9b8a6f;  */

void FUN_10a9b8990(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b88a0(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[6];
  plVar1 = (long *)plVar5[5];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x3f)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x3f);
    plVar1 = plVar5 + 5;
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



/* Entry: 10a9b8a70; end: 10a9b8b2b;  */

void FUN_10a9b8a70(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f68790e,9);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9b8b2c);
  (*pcVar4)();
}



/* Entry: 10a9b8b2c; end: 10a9b8c0b;  */

void FUN_10a9b8b2c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b8c0c(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[3];
  plVar1 = (long *)plVar5[2];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x27)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x27);
    plVar1 = plVar5 + 2;
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



/* Entry: 10a9b8c0c; end: 10a9b8c4f;  */

undefined8 * FUN_10a9b8c0c(undefined8 *param_1)

{
  func_0x000109898688();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*param_1 == &PTR_FUN_110c34f08) {
    return param_1 + 1;
  }
  func_0x00010988bd28(&UNK_10f685496);
  return (undefined8 *)0x0;
}



/* Entry: 10a9b8c50; end: 10a9b8c67;  */

undefined8 FUN_10a9b8c50(void)

{
  return 0;
}



/* Entry: 10a9b8c68; end: 10a9b8c9f;  */

void FUN_10a9b8c68(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    (*(code *)**(undefined8 **)(param_2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a9b8ca0; end: 10a9b8d7f;  */

void FUN_10a9b8ca0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b8c0c(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[6];
  plVar1 = (long *)plVar5[5];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x3f)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x3f);
    plVar1 = plVar5 + 5;
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



/* Entry: 10a9b8d80; end: 10a9b8e5f;  */

void FUN_10a9b8d80(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b8c0c(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[9];
  plVar1 = (long *)plVar5[8];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x57)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x57);
    plVar1 = plVar5 + 8;
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



/* Entry: 10a9b8e60; end: 10a9b91cf;  */

void FUN_10a9b8e60(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
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
  FUN_10a9b8c0c(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar7 = plVar4[0xb];
  lVar14 = plVar4[0xc];
  lVar11 = lVar14 - lVar7 >> 6;
  (**(code **)(*param_2 + 600))(&puStack_70,param_2,lVar11);
  puStack_78 = puStack_70;
  if (lVar14 != lVar7) {
    lVar14 = 0;
    pcVar10 = (char *)(lVar7 + 0x27);
    do {
      plVar4 = param_2;
      (**(code **)(*param_2 + 0x58))();
      if ((*(byte *)(plVar4 + 0x3c) & 1) == 0) {
LAB_10a9b9164:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9b9168);
        (*pcVar2)();
      }
      plVar18 = (long *)plVar4[9];
      if (plVar18 == (long *)0x0) {
        FUN_10a140784(plVar4 + 5);
        plVar18 = (long *)plVar4[9];
      }
      plVar4[9] = *plVar18;
      plVar18[8] = 0;
      plVar18[7] = 0;
      plVar18[6] = 0;
      plVar18[5] = 0;
      plVar4 = plVar18 + 3;
      plVar18[4] = 0;
      *plVar4 = 0;
      plVar18[2] = 0;
      plVar18[1] = 0;
      *plVar18 = (long)&PTR_FUN_110c34ee0;
      *(char *)(plVar18 + 2) = pcVar10[-0x1f];
      plVar18[1] = (long)&PTR_DAT_110c33998;
      if (*pcVar10 < '\0') {
        func_0x000107c3192c(plVar4,*(undefined8 *)(pcVar10 + -0x17),*(undefined8 *)(pcVar10 + -0xf))
        ;
      }
      else {
        lVar12 = *(long *)(pcVar10 + -0xf);
        lVar7 = *(long *)(pcVar10 + -0x17);
        plVar18[5] = *(long *)(pcVar10 + -7);
        plVar18[4] = lVar12;
        *plVar4 = lVar7;
      }
      if (pcVar10[0x18] < '\0') {
        func_0x000107c3192c(plVar18 + 6,*(undefined8 *)(pcVar10 + 1),*(undefined8 *)(pcVar10 + 9));
      }
      else {
        lVar12 = *(long *)(pcVar10 + 9);
        lVar7 = *(long *)(pcVar10 + 1);
        plVar18[8] = *(long *)(pcVar10 + 0x11);
        plVar18[7] = lVar12;
        plVar18[6] = lVar7;
      }
      plVar5 = param_2;
      (**(code **)(*param_2 + 0x58))();
      plVar4 = plVar5;
      FUN_10a065534();
      if (plVar4 == (long *)0x0) {
        if ((*(byte *)(plVar5 + 0x3c) & 1) == 0) goto LAB_10a9b9164;
        plVar4 = plVar5 + 0x1b;
      }
      puStack_70 = (undefined8 *)CONCAT44(puStack_70._4_4_,7);
      plVar6 = param_2;
      (**(code **)(*param_2 + 0x98))(param_2,*plVar4);
      plStack_68 = plVar6;
      (**(code **)(*param_2 + 0x2f8))(&puStack_80,param_2,plVar18,plVar5,&UNK_10989ba24,&puStack_70)
      ;
      puStack_88 = (undefined8 *)CONCAT44(puStack_88._4_4_,7);
      if ((3 < (int)puStack_70) && (plStack_68 != (long *)0x0)) {
        (**(code **)*plStack_68)();
      }
      (**(code **)(*param_2 + 0x290))(param_2,&puStack_78,lVar14,&puStack_88);
      if ((3 < (int)puStack_88) && (puStack_80 != (undefined8 *)0x0)) {
        (**(code **)*puStack_80)();
      }
      lVar14 = lVar14 + 1;
      pcVar10 = pcVar10 + 0x40;
    } while (lVar11 != lVar14);
  }
  *param_1 = 7;
  *(undefined8 **)(param_1 + 2) = puStack_78;
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
  puVar1 = (undefined8 *)*plVar4;
  puVar13 = (undefined8 *)plVar3[0x4c];
  lVar7 = (long)puVar13 - (long)puVar1;
  uVar16 = lVar7 >> 4;
  if (uVar16 < uVar8) {
    uVar17 = uVar8 - uVar16;
    puVar15 = (undefined8 *)plVar3[0x4d];
    if ((ulong)((long)puVar15 - (long)puVar13 >> 4) < uVar17) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = (long)puVar15 - (long)puVar1 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar15 - (long)puVar1)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar11 = uVar9 << 4;
          __Znwm();
          lVar14 = lVar11 + lVar7;
          _bzero(lVar14,uVar17 * 0x10);
          lVar12 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar12,puVar1,lVar7);
          *plVar4 = lVar12;
          plVar3[0x4c] = lVar14 + uVar17 * 0x10;
          plVar3[0x4d] = lVar11 + uVar9 * 0x10;
          puStack_88 = puVar1;
          puStack_80 = puVar1;
          puStack_78 = puVar1;
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
    _bzero(puVar13,uVar17 * 0x10);
    plVar3[0x4c] = (long)(puVar13 + uVar17 * 2);
  }
  else if (uVar8 < uVar16) {
    while (puVar13 != puVar1 + uVar8 * 2) {
      puVar13 = puVar13 + -2;
      func_0x00010988c204(puVar13);
    }
    plVar3[0x4c] = (long)(puVar1 + uVar8 * 2);
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar8;
  return;
}



/* Entry: 10a9b91d0; end: 10a9b932f;  */

void FUN_10a9b91d0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b9330(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a982820(&lStack_70,plVar7);
  plVar7 = plStack_68;
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
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
  plVar7 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
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



/* Entry: 10a9b9330; end: 10a9b9397;  */

void FUN_10a9b9330(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

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
  undefined8 extraout_x8;
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
  long *in_stack_ffffffffffffff80;
  undefined8 in_stack_ffffffffffffff88;
  long in_stack_ffffffffffffff98;
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar5);
    param_2 = ppuVar5;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c33a48;
      param_4 = 0x10;
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
  FUN_10a9b9330(plVar6,param_2);
  FUN_10a0584c8(param_4);
  func_0x000109898570(&stack0xffffffffffffff88,plVar6,param_3);
  FUN_10a982a78(&plStack_88,plVar8,&stack0xffffffffffffff88);
  if (in_stack_ffffffffffffff98 < 0) {
    __ZdlPv(in_stack_ffffffffffffff88);
  }
  FUN_10a0584ec(extraout_x8,plVar6,&plStack_88);
  if (in_stack_ffffffffffffff80 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffff80 + 1;
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
      (**(code **)(*in_stack_ffffffffffffff80 + 0x10))(in_stack_ffffffffffffff80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffff80);
    }
  }
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



/* Entry: 10a9b9398; end: 10a9b94db;  */

void FUN_10a9b9398(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b9330(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a982a78(&plStack_68,plVar6,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a0584ec(param_1,param_2,&plStack_68);
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



/* Entry: 10a9b94dc; end: 10a9b95a3;  */

void FUN_10a9b94dc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9b9330(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  FUN_10a982ba0(plVar4,param_2);
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



/* Entry: 10a9b95a4; end: 10a9b9a67;  */

void FUN_10a9b95a4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
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
  FUN_10a9b9a68(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar13 = plVar7[0x28];
  lVar4 = plVar7[0x29];
  (**(code **)(*param_2 + 600))(&puStack_70,param_2);
  puStack_78 = puStack_70;
  if (lVar4 != lVar13) {
    lVar18 = 0;
    do {
      plVar7 = param_2;
      (**(code **)(*param_2 + 0x58))();
      if ((*(byte *)(plVar7 + 0x3c) & 1) == 0) {
LAB_10a9b9940:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9b9944);
        (*pcVar5)();
      }
      puVar8 = (undefined8 *)0x78;
      puVar12 = PTR___ZSt7nothrow_1103469d8;
      __ZnwmRKSt9nothrow_t();
      if (puVar8 != (undefined8 *)0x0) {
        lVar15 = lVar13 + lVar18 * 0x70;
        *puVar8 = &PTR_FUN_110c34f08;
        *(undefined1 *)(puVar8 + 2) = *(undefined1 *)(lVar15 + 8);
        puVar8[1] = &PTR_DAT_110c339f8;
        if (*(char *)(lVar15 + 0x27) < '\0') {
          puVar12 = *(undefined **)(lVar15 + 0x10);
          func_0x000107c3192c(puVar8 + 3,puVar12,*(undefined8 *)(lVar15 + 0x18));
        }
        else {
          uVar23 = *(undefined8 *)(lVar15 + 0x18);
          uVar22 = *(undefined8 *)(lVar15 + 0x10);
          puVar8[5] = *(undefined8 *)(lVar15 + 0x20);
          puVar8[4] = uVar23;
          puVar8[3] = uVar22;
        }
        if (*(char *)(lVar15 + 0x3f) < '\0') {
          puVar12 = *(undefined **)(lVar15 + 0x28);
          func_0x000107c3192c(puVar8 + 6,puVar12,*(undefined8 *)(lVar15 + 0x30));
        }
        else {
          uVar23 = *(undefined8 *)(lVar15 + 0x30);
          uVar22 = *(undefined8 *)(lVar15 + 0x28);
          puVar8[8] = *(undefined8 *)(lVar15 + 0x38);
          puVar8[7] = uVar23;
          puVar8[6] = uVar22;
        }
        if (*(char *)(lVar15 + 0x57) < '\0') {
          puVar12 = *(undefined **)(lVar15 + 0x40);
          func_0x000107c3192c(puVar8 + 9,puVar12,*(undefined8 *)(lVar15 + 0x48));
        }
        else {
          uVar23 = *(undefined8 *)(lVar15 + 0x48);
          uVar22 = *(undefined8 *)(lVar15 + 0x40);
          puVar8[0xb] = *(undefined8 *)(lVar15 + 0x50);
          puVar8[10] = uVar23;
          puVar8[9] = uVar22;
        }
        puVar8[0xc] = 0;
        puVar8[0xd] = 0;
        puVar8[0xe] = 0;
        lVar3 = *(long *)(lVar15 + 0x58);
        lVar15 = *(long *)(lVar15 + 0x60);
        lVar21 = lVar15 - lVar3;
        if (lVar21 != 0) {
          uVar9 = lVar21 >> 6;
          if (uVar9 >> 0x3a != 0) {
            FUN_10a9b9ad0();
            goto LAB_10a9b9940;
          }
          FUN_10a9b9ae4();
          lVar21 = 0;
          puVar8[0xc] = uVar9;
          puVar8[0xd] = uVar9;
          puVar8[0xe] = uVar9 + (long)puVar12 * 0x40;
          do {
            puVar16 = (undefined8 *)(uVar9 + lVar21);
            lVar1 = lVar3 + lVar21;
            *(undefined1 *)(puVar16 + 1) = *(undefined1 *)(lVar1 + 8);
            *puVar16 = &PTR_DAT_110c33998;
            if (*(char *)(lVar1 + 0x27) < '\0') {
              func_0x000107c3192c(puVar16 + 2,*(undefined8 *)(lVar1 + 0x10),
                                  *(undefined8 *)(lVar1 + 0x18));
            }
            else {
              uVar23 = *(undefined8 *)(lVar1 + 0x18);
              uVar22 = *(undefined8 *)(lVar1 + 0x10);
              puVar16[4] = *(undefined8 *)(lVar1 + 0x20);
              puVar16[3] = uVar23;
              puVar16[2] = uVar22;
            }
            lVar1 = uVar9 + lVar21;
            lVar2 = lVar3 + lVar21;
            if (*(char *)(lVar2 + 0x3f) < '\0') {
              func_0x000107c3192c(lVar1 + 0x28,*(undefined8 *)(lVar2 + 0x28),
                                  *(undefined8 *)(lVar2 + 0x30));
            }
            else {
              uVar23 = *(undefined8 *)(lVar2 + 0x30);
              uVar22 = *(undefined8 *)(lVar2 + 0x28);
              *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(lVar2 + 0x38);
              *(undefined8 *)(lVar1 + 0x30) = uVar23;
              *(undefined8 *)(lVar1 + 0x28) = uVar22;
            }
            lVar21 = lVar21 + 0x40;
          } while (lVar3 + lVar21 != lVar15);
          puVar8[0xd] = uVar9 + lVar21;
        }
      }
      plVar10 = param_2;
      (**(code **)(*param_2 + 0x58))();
      plVar7 = plVar10;
      FUN_10a065534();
      if (plVar7 == (long *)0x0) {
        if ((*(byte *)(plVar10 + 0x3c) & 1) == 0) goto LAB_10a9b9940;
        plVar7 = plVar10 + 0x1b;
      }
      puStack_70 = (undefined8 *)CONCAT44(puStack_70._4_4_,7);
      plVar11 = param_2;
      (**(code **)(*param_2 + 0x98))(param_2,*plVar7);
      plStack_68 = plVar11;
      (**(code **)(*param_2 + 0x2f8))(&puStack_80,param_2,puVar8,plVar10,&UNK_10989ba24,&puStack_70)
      ;
      puStack_88 = (undefined8 *)CONCAT44(puStack_88._4_4_,7);
      if ((3 < (int)puStack_70) && (plStack_68 != (long *)0x0)) {
        (**(code **)*plStack_68)();
      }
      (**(code **)(*param_2 + 0x290))(param_2,&puStack_78,lVar18,&puStack_88);
      if ((3 < (int)puStack_88) && (puStack_80 != (undefined8 *)0x0)) {
        (**(code **)*puStack_80)();
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 != (lVar4 - lVar13 >> 4) * 0x6db6db6db6db6db7);
  }
  *param_1 = 7;
  *(undefined8 **)(param_1 + 2) = puStack_78;
  plVar7 = plVar6 + 0x4b;
  lVar13 = plVar6[0x59];
  uVar9 = lVar13 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar7[lVar13 + 2];
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  puVar8 = (undefined8 *)*plVar7;
  puVar16 = (undefined8 *)plVar6[0x4c];
  lVar13 = (long)puVar16 - (long)puVar8;
  uVar19 = lVar13 >> 4;
  if (uVar19 < uVar9) {
    uVar20 = uVar9 - uVar19;
    puVar17 = (undefined8 *)plVar6[0x4d];
    if ((ulong)((long)puVar17 - (long)puVar16 >> 4) < uVar20) {
      if (uVar9 >> 0x3c == 0) {
        uVar14 = (long)puVar17 - (long)puVar8 >> 3;
        if (uVar14 <= uVar9) {
          uVar14 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar17 - (long)puVar8)) {
          uVar14 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar14 >> 0x3c == 0) {
          lVar18 = uVar14 << 4;
          __Znwm();
          lVar4 = lVar18 + lVar13;
          _bzero(lVar4,uVar20 * 0x10);
          lVar15 = lVar4 + uVar19 * -0x10;
          _memcpy(lVar15,puVar8,lVar13);
          *plVar7 = lVar15;
          plVar6[0x4c] = lVar4 + uVar20 * 0x10;
          plVar6[0x4d] = lVar18 + uVar14 * 0x10;
          puStack_88 = puVar8;
          puStack_80 = puVar8;
          puStack_78 = puVar8;
          puStack_70 = puVar17;
          func_0x00010988c1b8(&puStack_88);
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
    _bzero(puVar16,uVar20 * 0x10);
    plVar6[0x4c] = (long)(puVar16 + uVar20 * 2);
  }
  else if (uVar9 < uVar19) {
    while (puVar16 != puVar8 + uVar9 * 2) {
      puVar16 = puVar16 + -2;
      func_0x00010988c204(puVar16);
    }
    plVar6[0x4c] = (long)(puVar8 + uVar9 * 2);
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10a9b9a68; end: 10a9b9acf;  */

void FUN_10a9b9a68(long param_1)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **appuStack_110 [2];
  char cStack_f9;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  
  lVar9 = param_1;
  func_0x000109898688();
  if (lVar9 != 0) {
    FUN_10a052c2c(param_1,lVar9);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  func_0x00010988bd28(&UNK_10f68f52e);
  puVar10 = &UNK_10f687210;
  FUN_109ffde64();
  if ((ulong)puVar10 >> 0x3a == 0) {
    __Znwm((long)puVar10 << 6);
    return;
  }
  func_0x000109ffded8();
  func_0x000109887da8(appuStack_110,&UNK_10e4e7d78,0x62);
  pppuVar1 = (undefined ***)appuStack_110[0];
  if (-1 < cStack_f9) {
    pppuVar1 = appuStack_110;
  }
  *(undefined ***)(puVar10 + 0x1b0) = &PTR_DAT_110c34f30;
  ppuVar2 = (undefined **)&UNK_10f68581c;
  if (pppuVar1 != (undefined ***)0x0) {
    ppuVar2 = (undefined **)pppuVar1;
  }
  func_0x000107c2c4dc(puVar10 + 0x1b8,ppuVar2);
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_d8 = 0xffffffffffffffff;
  uStack_e0 = 0x100000064;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0xffffffff;
  uStack_a0 = 0;
  uStack_98 = 0;
  ppuStack_f8 = (undefined **)pppuVar1;
  func_0x00010a052690(puVar10 + 0x168,&ppuStack_f8);
  puVar11 = puVar10;
  FUN_10a0051e8(puVar10,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar11 & 1) == 0) {
    ppuStack_90 = &PTR_DAT_110c34f30;
    uStack_88 = 0;
    ppuStack_f8 = &PTR_DAT_110b178e0;
    uStack_f0 = 0;
    uStack_e8 = CONCAT71(uStack_e8._1_7_,1);
    func_0x0001098949cc(puVar10,pppuVar1,&ppuStack_90,&ppuStack_f8);
  }
  if (cStack_f9 < '\0') {
    __ZdlPv(appuStack_110[0]);
  }
  puVar11 = puVar10;
  FUN_10a0051e8(puVar10,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar11 & 1) == 0) {
    if ((puVar10[0x78] & 1) == 0) goto LAB_10a9b9d00;
    FUN_10a054dac(puVar10,&DAT_10f68571c,FUN_10a9ba32c,2,*(undefined8 *)(puVar10 + 0x40));
  }
  puVar11 = puVar10;
  FUN_10a0051e8(puVar10,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar11 & 1) == 0) {
    if ((puVar10[0x78] & 1) == 0) goto LAB_10a9b9d00;
    FUN_10a054dac(puVar10,&DAT_10f685720,FUN_10a9ba728,2,*(undefined8 *)(puVar10 + 0x40));
  }
  *(undefined **)(puVar10 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar9 = *(long *)(puVar10 + 0x170);
  if (*(long *)(puVar10 + 0x168) != lVar9) {
    uVar3 = *(undefined4 *)(lVar9 + -0x50);
    uVar5 = *(undefined4 *)(lVar9 + -0x4c);
    uVar4 = *(undefined4 *)(lVar9 + -0x48);
    uVar6 = *(undefined4 *)(lVar9 + -0x44);
    uVar7 = *(undefined4 *)(lVar9 + -0x18);
    *(long *)(puVar10 + 0x170) = lVar9 + -0x68;
    puVar11 = puVar10;
    FUN_10a0051e8(puVar10,uVar3,uVar5,uVar7,uVar4,uVar6);
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000109894f40(puVar10,0);
      FUN_10a05431c(puVar10);
    }
    return;
  }
LAB_10a9b9d00:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a9b9d04);
  (*pcVar8)();
}



/* Entry: 10a9b9ad0; end: 10a9b9ae3;  */

void FUN_10a9b9ad0(void)

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
  undefined *puVar10;
  undefined *puVar11;
  undefined **appuStack_f0 [2];
  char cStack_d9;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  
  puVar10 = &UNK_10f687210;
  FUN_109ffde64();
  if ((ulong)puVar10 >> 0x3a == 0) {
    __Znwm((long)puVar10 << 6);
    return;
  }
  func_0x000109ffded8();
  func_0x000109887da8(appuStack_f0,&UNK_10e4e7d78,0x62);
  pppuVar1 = (undefined ***)appuStack_f0[0];
  if (-1 < cStack_d9) {
    pppuVar1 = appuStack_f0;
  }
  *(undefined ***)(puVar10 + 0x1b0) = &PTR_DAT_110c34f30;
  ppuVar2 = (undefined **)&UNK_10f68581c;
  if (pppuVar1 != (undefined ***)0x0) {
    ppuVar2 = (undefined **)pppuVar1;
  }
  func_0x000107c2c4dc(puVar10 + 0x1b8,ppuVar2);
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_b8 = 0xffffffffffffffff;
  uStack_c0 = 0x100000064;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_88 = 0xffffffff;
  uStack_80 = 0;
  uStack_78 = 0;
  ppuStack_d8 = (undefined **)pppuVar1;
  func_0x00010a052690(puVar10 + 0x168,&ppuStack_d8);
  puVar11 = puVar10;
  FUN_10a0051e8(puVar10,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar11 & 1) == 0) {
    ppuStack_70 = &PTR_DAT_110c34f30;
    uStack_68 = 0;
    ppuStack_d8 = &PTR_DAT_110b178e0;
    uStack_d0 = 0;
    uStack_c8 = CONCAT71(uStack_c8._1_7_,1);
    func_0x0001098949cc(puVar10,pppuVar1,&ppuStack_70,&ppuStack_d8);
  }
  if (cStack_d9 < '\0') {
    __ZdlPv(appuStack_f0[0]);
  }
  puVar11 = puVar10;
  FUN_10a0051e8(puVar10,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar11 & 1) == 0) {
    if ((puVar10[0x78] & 1) == 0) goto LAB_10a9b9d00;
    FUN_10a054dac(puVar10,&DAT_10f68571c,FUN_10a9ba32c,2,*(undefined8 *)(puVar10 + 0x40));
  }
  puVar11 = puVar10;
  FUN_10a0051e8(puVar10,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar11 & 1) == 0) {
    if ((puVar10[0x78] & 1) == 0) goto LAB_10a9b9d00;
    FUN_10a054dac(puVar10,&DAT_10f685720,FUN_10a9ba728,2,*(undefined8 *)(puVar10 + 0x40));
  }
  *(undefined **)(puVar10 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar7 = *(long *)(puVar10 + 0x170);
  if (*(long *)(puVar10 + 0x168) != lVar7) {
    uVar3 = *(undefined4 *)(lVar7 + -0x50);
    uVar5 = *(undefined4 *)(lVar7 + -0x4c);
    uVar4 = *(undefined4 *)(lVar7 + -0x48);
    uVar6 = *(undefined4 *)(lVar7 + -0x44);
    uVar8 = *(undefined4 *)(lVar7 + -0x18);
    *(long *)(puVar10 + 0x170) = lVar7 + -0x68;
    puVar11 = puVar10;
    FUN_10a0051e8(puVar10,uVar3,uVar5,uVar8,uVar4,uVar6);
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000109894f40(puVar10,0);
      FUN_10a05431c(puVar10);
    }
    return;
  }
LAB_10a9b9d00:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a9b9d04);
  (*pcVar9)();
}



/* Entry: 10a9b9ae4; end: 10a9b9b17;  */

void FUN_10a9b9ae4(ulong param_1)

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
  undefined **appuStack_e0 [2];
  char cStack_c9;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
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
  undefined **ppuStack_60;
  undefined8 uStack_58;
  
  if (param_1 >> 0x3a == 0) {
    __Znwm(param_1 << 6);
    return;
  }
  func_0x000109ffded8();
  func_0x000109887da8(appuStack_e0,&UNK_10e4e7d78,0x62);
  pppuVar1 = (undefined ***)appuStack_e0[0];
  if (-1 < cStack_c9) {
    pppuVar1 = appuStack_e0;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c34f30;
  ppuVar2 = (undefined **)&UNK_10f68581c;
  if (pppuVar1 != (undefined ***)0x0) {
    ppuVar2 = (undefined **)pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,ppuVar2);
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_a8 = 0xffffffffffffffff;
  uStack_b0 = 0x100000064;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_78 = 0xffffffff;
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_c8 = (undefined **)pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_c8);
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    ppuStack_60 = &PTR_DAT_110c34f30;
    uStack_58 = 0;
    ppuStack_c8 = &PTR_DAT_110b178e0;
    uStack_c0 = 0;
    uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_60,&ppuStack_c8);
  }
  if (cStack_c9 < '\0') {
    __ZdlPv(appuStack_e0[0]);
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9b9d00;
    FUN_10a054dac(param_1,&DAT_10f68571c,FUN_10a9ba32c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9b9d00;
    FUN_10a054dac(param_1,&DAT_10f685720,FUN_10a9ba728,2,*(undefined8 *)(param_1 + 0x40));
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
LAB_10a9b9d00:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a9b9d04);
  (*pcVar9)();
}



/* Entry: 10a9b9b18; end: 10a9b9d1f;  */

void FUN_10a9b9b18(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c0,&UNK_10e4e7d78,0x62);
  pppuVar1 = (undefined ***)appuStack_c0[0];
  if (-1 < cStack_a9) {
    pppuVar1 = appuStack_c0;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c34f30;
  ppuVar2 = (undefined **)&UNK_10f68581c;
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
    ppuStack_40 = &PTR_DAT_110c34f30;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9b9d00;
    FUN_10a054dac(param_1,&DAT_10f68571c,FUN_10a9ba32c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9b9d00;
    FUN_10a054dac(param_1,&DAT_10f685720,FUN_10a9ba728,2,*(undefined8 *)(param_1 + 0x40));
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
LAB_10a9b9d00:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a9b9d04);
  (*pcVar9)();
}



/* Entry: 10a9b9d20; end: 10a9ba10b;  */

void FUN_10a9b9d20(long *param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x25;
  long *plVar14;
  float fVar15;
  long lVar16;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte bStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = param_3[1];
  uStack_a0 = *param_3;
  if (param_3[1] != 0) {
    plVar5 = (long *)(param_3[1] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_88 = param_3[3];
  uStack_90 = param_3[2];
  if (param_3[3] != 0) {
    plVar5 = (long *)(param_3[3] + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  bStack_60 = 2;
  plVar5 = (long *)0x30;
  __Znwm();
  plVar6 = plVar5 + 1;
  *plVar6 = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110b9fc88;
  plVar14 = plVar5 + 3;
  *plVar14 = (long)&PTR_FUN_110c0f9b0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  uVar9 = ((ulong)(uint)((int)plVar14 << 3) + 8 ^ (ulong)plVar14 >> 0x20) * -0x622015f714c7d297;
  uVar9 = ((ulong)plVar14 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
  uVar13 = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
  uVar9 = *(ulong *)(param_2 + 0x20);
  plStack_b8 = plVar14;
  plStack_b0 = plVar5;
  if (uVar9 != 0) {
    uVar7 = uVar9 - 1;
    if ((uVar9 & uVar7) == 0) {
      unaff_x25 = uVar7 & uVar13;
    }
    else {
      unaff_x25 = uVar13;
      if (uVar9 <= uVar13) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar13 / uVar9;
        }
        unaff_x25 = uVar13 - uVar11 * uVar9;
      }
    }
    puVar10 = *(undefined8 **)(*(long *)(param_2 + 0x18) + unaff_x25 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (plVar12 = (long *)*puVar10; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        uVar11 = plVar12[1];
        if (uVar11 == uVar13) {
          if ((long *)plVar12[2] == plVar14) goto LAB_10a9b9f68;
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
          if (uVar11 != unaff_x25) break;
        }
      }
    }
  }
  plVar12 = (long *)0x68;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = uVar13;
  plVar12[2] = (long)plVar14;
  plVar12[3] = (long)plVar5;
  plStack_b8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  plStack_a8 = plVar12 + 4;
  *(undefined1 *)(plVar12 + 0xc) = 3;
  FUN_10a05fae4(&plStack_a8,&uStack_a0,2);
  *(byte *)(plVar12 + 0xc) = bStack_60;
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
    FUN_10a9ba10c(param_2 + 0x18,uVar7);
    uVar9 = *(ulong *)(param_2 + 0x20);
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x25 = uVar9 - 1 & uVar13;
    }
    else {
      unaff_x25 = uVar13;
      if (uVar9 <= uVar13) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar13 / uVar9;
        }
        unaff_x25 = uVar13 - uVar7 * uVar9;
      }
    }
  }
  lVar8 = *(long *)(param_2 + 0x18);
  plVar5 = *(long **)(lVar8 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)(param_2 + 0x28);
    *plVar12 = *plVar5;
    *plVar5 = (long)plVar12;
    *(long **)(lVar8 + unaff_x25 * 8) = plVar5;
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
      plVar5 = (long *)(*(long *)(param_2 + 0x18) + uVar13 * 8);
      goto LAB_10a9ba00c;
    }
  }
  else {
    *plVar12 = *plVar5;
LAB_10a9ba00c:
    *plVar5 = (long)plVar12;
  }
  *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + 1;
LAB_10a9ba01c:
  if (*(char *)(*(long *)(param_2 + 0x48) + 8) == '\x01') {
    (**(code **)(param_2 + 0x40))(param_2);
  }
  lVar8 = plVar12[3];
  lVar16 = plVar12[2];
  param_1[1] = plVar12[3];
  *param_1 = lVar16;
  if (lVar8 != 0) {
    plVar5 = (long *)(lVar8 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((ulong)bStack_60 < 4) {
    puVar10 = &uStack_a0;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_60])(puVar10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
    FUN_10a9ba2dc(1,plVar12);
    FUN_10a004978(&plStack_b8);
    if ((ulong)bStack_60 < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[bStack_60])(&uStack_a0);
      __Unwind_Resume(puVar10);
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9ba10c);
  (*pcVar4)();
LAB_10a9b9f68:
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
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  goto LAB_10a9ba01c;
}


