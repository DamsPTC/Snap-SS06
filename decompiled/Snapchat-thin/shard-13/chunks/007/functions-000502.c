/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ac477d0; end: 10ac47827;  */

ulong FUN_10ac477d0(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10ac47828,FUN_10ac478f0);
  }
  return param_1;
}



/* Entry: 10ac47828; end: 10ac478ef;  */

void FUN_10ac47828(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac47a0c(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*param_2 + 0xa0))();
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)param_2;
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



/* Entry: 10ac478f0; end: 10ac47a0b;  */

void FUN_10ac478f0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
      FUN_10a076f00(param_5);
      func_0x000109898518(param_2,param_4);
      (**(code **)(*plVar5 + 0x98))(plVar5,param_2);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac479f8);
  (*pcVar1)();
}



/* Entry: 10ac47a0c; end: 10ac47ac7;  */

undefined ** FUN_10ac47a0c(undefined **param_1,undefined **param_2)

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
    FUN_10a0605c4(ppuVar1,*param_2,FUN_10ac47ac8,0);
  }
  return ppuVar1;
}



/* Entry: 10ac47ac8; end: 10ac47b8f;  */

void FUN_10ac47ac8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac47a0c(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*param_2 + 0x90))();
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)param_2;
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



/* Entry: 10ac47b90; end: 10ac47c4b;  */

void FUN_10ac47b90(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f69d9dd,0x1b);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac47c4c);
  (*pcVar4)();
}



/* Entry: 10ac47c4c; end: 10ac4813b;  */

void FUN_10ac47c4c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined4 *puVar20;
  ulong uVar21;
  ulong uVar22;
  long *plStack_150;
  long *plStack_148;
  undefined8 auStack_140 [2];
  char cStack_129;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined4 *puStack_e8;
  ulong *puStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long lStack_90;
  undefined4 *puStack_88;
  undefined4 **ppuStack_80;
  undefined4 *puStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar11 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar11[0x59] < 8) {
    plVar11[plVar11[0x59] + 0x4e] = plVar11[0x5a];
    plVar11[0x59] = plVar11[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar11 + 0x4b);
  }
  plVar12 = param_2;
  FUN_10ac4813c(param_2,param_3);
  FUN_10ac481a4(param_5);
  func_0x000109898570(auStack_140,param_2,param_4);
  FUN_10a1f7d54(&plStack_150,param_2,param_4 + 0x10);
  if (plStack_150 == (long *)0x0) {
    FUN_10ac49070(plVar12 + 0x79,auStack_140);
  }
  else {
    uVar8 = (int)plStack_150[1] * 8 - 3;
    lStack_118 = *plStack_150;
    uVar4 = uVar8 & 0xfff;
    uStack_128._0_4_ = uVar4 | 0x42ff0000;
    puStack_e8 = &uStack_120;
    uStack_128._4_4_ = 2;
    uStack_120 = 1;
    uStack_11c = 1;
    lStack_100 = 0;
    lStack_108 = 0;
    lStack_f0 = 0;
    uStack_f8 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    lStack_110 = lStack_118;
    puStack_e0 = &uStack_d8;
    if (lStack_118 == 0) {
      puVar13 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar13 = 1;
      plStack_68 = (long *)(puVar13 + 1);
      *(undefined1 *)(puVar13 + 8) = 0;
      *(undefined8 *)(puVar13 + 3) = 0x207c7c2030203d3d;
      *(undefined8 *)(puVar13 + 1) = 0x2029286c61746f74;
      *(undefined8 *)(puVar13 + 6) = 0x4c4c554e203d2120;
      *(undefined8 *)(puVar13 + 4) = 0x61746164207c7c20;
      func_0x000109ac3188(0xffffff29,&plStack_68,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10ac480ac);
      (*pcVar9)();
    }
    uStack_128._0_4_ = uVar4 | 0x42ff4000;
    uStack_d8 = (ulong)((uVar8 >> 1 & 0x7fc) + 4);
    lStack_108 = lStack_118 + uStack_d8;
    uStack_c8._0_4_ = 0x42ff0000;
    puStack_88 = &uStack_c0;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_c8._4_4_ = 0;
    uStack_c0 = 0;
    uStack_ac = 0;
    uStack_a8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_9c = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    lStack_90 = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    puStack_78 = (undefined4 *)0x0;
    lStack_70 = 0;
    plStack_68 = (long *)CONCAT44(plStack_68._4_4_,0x2010000);
    lStack_100 = lStack_108;
    uStack_d0 = uStack_d8;
    ppuStack_80 = &puStack_78;
    func_0x000109a479a0(&uStack_128,&plStack_68);
    if (lStack_f0 != 0) {
      piVar1 = (int *)(lStack_f0 + 0x14);
      do {
        iVar5 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 + -1 == 0) {
        func_0x000109a848d4(&uStack_128);
      }
    }
    lStack_f0 = 0;
    lStack_110 = 0;
    lStack_118 = 0;
    lStack_100 = 0;
    lStack_108 = 0;
    if (0 < uStack_128._4_4_) {
      lVar15 = 0;
      do {
        puStack_e8[lVar15] = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < uStack_128._4_4_);
    }
    if (puStack_e0 != &uStack_d8 && puStack_e0 != (ulong *)0x0) {
      _free(puStack_e0[-1]);
    }
    uStack_128 = auStack_140;
    plVar12 = plVar12 + 0x79;
    func_0x0001095b3c7c(plVar12,auStack_140,&UNK_10dd5b8f9,&uStack_128,&plStack_68);
    plVar2 = plVar12 + 5;
    if (plVar2 != &uStack_c8) {
      if (lStack_90 != 0) {
        piVar1 = (int *)(lStack_90 + 0x14);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (plVar12[0xc] != 0) {
        piVar1 = (int *)(plVar12[0xc] + 0x14);
        do {
          iVar5 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar5 + -1 == 0) {
          func_0x000109a848d4(plVar2);
        }
      }
      plVar12[0xc] = 0;
      plVar12[8] = 0;
      plVar12[7] = 0;
      plVar12[10] = 0;
      plVar12[9] = 0;
      if (*(int *)((long)plVar12 + 0x2c) < 1) {
        *(undefined4 *)plVar2 = (undefined4)uStack_c8;
LAB_10ac47f0c:
        if (2 < uStack_c8._4_4_) goto LAB_10ac47f40;
        *(int *)((long)plVar12 + 0x2c) = uStack_c8._4_4_;
        plVar12[6] = CONCAT44(uStack_bc,uStack_c0);
        puVar18 = (undefined8 *)plVar12[0xe];
        *puVar18 = *ppuStack_80;
        puVar18[1] = ppuStack_80[1];
      }
      else {
        lVar15 = 0;
        lVar17 = plVar12[0xd];
        do {
          *(undefined4 *)(lVar17 + lVar15 * 4) = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < *(int *)((long)plVar12 + 0x2c));
        *(undefined4 *)plVar2 = (undefined4)uStack_c8;
        if (*(int *)((long)plVar12 + 0x2c) < 3) goto LAB_10ac47f0c;
LAB_10ac47f40:
        func_0x000109a84868(plVar2,&uStack_c8);
      }
      plVar12[8] = CONCAT44(uStack_ac,uStack_b0);
      plVar12[7] = CONCAT44(uStack_b4,uStack_b8);
      plVar12[10] = CONCAT44(uStack_9c,uStack_a0);
      plVar12[9] = CONCAT44(uStack_a4,uStack_a8);
      plVar12[0xc] = lStack_90;
      plVar12[0xb] = CONCAT44(uStack_94,uStack_98);
    }
    if (lStack_90 != 0) {
      piVar1 = (int *)(lStack_90 + 0x14);
      do {
        iVar5 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 + -1 == 0) {
        func_0x000109a848d4(&uStack_c8);
      }
    }
    lStack_90 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    if (0 < uStack_c8._4_4_) {
      lVar15 = 0;
      do {
        puStack_88[lVar15] = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < uStack_c8._4_4_);
    }
    if (ppuStack_80 != &puStack_78 && ppuStack_80 != (undefined4 **)0x0) {
      _free(ppuStack_80[-1]);
    }
  }
  if (plStack_148 != (long *)0x0) {
    plVar12 = plStack_148 + 1;
    do {
      lVar15 = *plVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = lVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_148);
    }
  }
  if (cStack_129 < '\0') {
    __ZdlPv(auStack_140[0]);
  }
  *param_1 = 0;
  plVar12 = plVar11 + 0x4b;
  lVar15 = plVar11[0x59];
  uVar14 = lVar15 - 1;
  plVar11[0x59] = uVar14;
  if (uVar14 < 8) {
    uVar14 = plVar12[lVar15 + 2];
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
  puVar13 = (undefined4 *)*plVar12;
  puVar20 = (undefined4 *)plVar11[0x4c];
  lVar15 = (long)puVar20 - (long)puVar13;
  uVar21 = lVar15 >> 4;
  if (uVar21 < uVar14) {
    uVar22 = uVar14 - uVar21;
    lVar17 = plVar11[0x4d];
    if ((ulong)(lVar17 - (long)puVar20 >> 4) < uVar22) {
      if (uVar14 >> 0x3c == 0) {
        uVar16 = lVar17 - (long)puVar13 >> 3;
        if (uVar16 <= uVar14) {
          uVar16 = uVar14;
        }
        if (0x7fffffffffffffef < (ulong)(lVar17 - (long)puVar13)) {
          uVar16 = 0xfffffffffffffff;
        }
        plStack_68 = plVar12;
        if (uVar16 >> 0x3c == 0) {
          lVar10 = uVar16 << 4;
          __Znwm();
          lVar3 = lVar10 + lVar15;
          _bzero(lVar3,uVar22 * 0x10);
          lVar19 = lVar3 + uVar21 * -0x10;
          _memcpy(lVar19,puVar13,lVar15);
          *plVar12 = lVar19;
          plVar11[0x4c] = lVar3 + uVar22 * 0x10;
          plVar11[0x4d] = lVar10 + uVar16 * 0x10;
          puStack_88 = puVar13;
          ppuStack_80 = (undefined4 **)puVar13;
          puStack_78 = puVar13;
          lStack_70 = lVar17;
          func_0x00010988c1b8(&puStack_88);
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
    _bzero(puVar20,uVar22 * 0x10);
    plVar11[0x4c] = (long)(puVar20 + uVar22 * 4);
  }
  else if (uVar14 < uVar21) {
    while (puVar20 != puVar13 + uVar14 * 4) {
      puVar20 = puVar20 + -4;
      func_0x00010988c204(puVar20);
    }
    plVar11[0x4c] = (long)(puVar13 + uVar14 * 4);
  }
code_r0x00010988c138:
  plVar11[0x5a] = uVar14;
  return;
}



/* Entry: 10ac4813c; end: 10ac481a3;  */

void FUN_10ac4813c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  code *pcVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined4 *extraout_x8;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lStack_148;
  long *plStack_140;
  long alStack_138 [2];
  char cStack_121;
  undefined4 auStack_120 [2];
  uint *puStack_118;
  undefined8 uStack_110;
  uint uStack_108;
  int iStack_104;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long *plStack_98;
  uint *puStack_90;
  undefined8 uStack_88;
  
  lVar14 = param_1;
  func_0x000109898688();
  if (lVar14 != 0) {
    FUN_10a053854(param_1,lVar14);
    if (param_1 != 0) {
      param_4 = 0x28;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar9 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar9 == 2) {
    return;
  }
  plVar10 = (long *)0x2;
  uVar13 = 0;
  FUN_10a052ee0(2,0,puVar9);
  plVar11 = plVar10;
  (**(code **)(*plVar10 + 0x58))();
  if ((ulong)plVar11[0x59] < 8) {
    plVar11[plVar11[0x59] + 0x4e] = plVar11[0x5a];
    plVar11[0x59] = plVar11[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar11 + 0x4b);
  }
  plVar12 = plVar10;
  FUN_10ac4813c(plVar10,uVar13);
  FUN_10ac4865c(param_4);
  func_0x000109898570(alStack_138,plVar10,puVar9);
  FUN_10a065cdc(&lStack_148,plVar10,puVar9 + 0x10);
  if (lStack_148 == 0) {
    FUN_10ac49070(plVar12 + 0x79,alStack_138);
  }
  else {
    uVar16 = (ulong)*(byte *)(plVar12[0x12] + 0x29);
    if (5 < uVar16) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10ac485ec);
      (*pcVar7)();
    }
    FUN_10aba1500(&lStack_a8,*(undefined8 *)(plVar12[0x12] + uVar16 * 8 + 0x30),lStack_148,0);
    lVar14 = 0;
    if (lStack_a8 != 0) {
      lVar14 = lStack_a8 + 0x10;
    }
    FUN_10a0f3910(&uStack_108,lVar14,0);
    uVar6 = uStack_108 >> 3 & 0x1ff;
    if (uVar6 == 2) {
      plStack_98 = (long *)CONCAT44(plStack_98._4_4_,0x1010000);
      puStack_118 = &uStack_108;
      uStack_88 = 0;
      auStack_120[0] = 0x2010000;
      uStack_110 = 0;
      puStack_90 = puStack_118;
      func_0x000109ac9fc8(&plStack_98,auStack_120,4,0);
    }
    else if (uVar6 == 3) {
      plStack_98 = (long *)CONCAT44(plStack_98._4_4_,0x1010000);
      puStack_118 = &uStack_108;
      uStack_88 = 0;
      auStack_120[0] = 0x2010000;
      uStack_110 = 0;
      puStack_90 = puStack_118;
      func_0x000109ac9fc8(&plStack_98,auStack_120,3,0);
    }
    plStack_98._0_4_ = 0x2010000;
    uStack_88 = 0;
    puStack_90 = &uStack_108;
    func_0x000109a41858(0x3ff0000000000000,0,&uStack_108,&plStack_98,uStack_108 & 0xff8 | 5);
    plStack_98 = (long *)CONCAT44(plStack_98._4_4_,0x2010000);
    uStack_88 = 0;
    puStack_90 = &uStack_108;
    func_0x000109a41858(0x3f70101010101010,0,&uStack_108,&plStack_98,0xffffffff);
    plStack_98 = alStack_138;
    plVar12 = plVar12 + 0x79;
    func_0x0001095b3c7c(plVar12,alStack_138,&UNK_10dd5b8f9,&plStack_98,auStack_120);
    puVar1 = (uint *)(plVar12 + 5);
    if (puVar1 != &uStack_108) {
      if (lStack_d0 != 0) {
        piVar2 = (int *)(lStack_d0 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (plVar12[0xc] != 0) {
        piVar2 = (int *)(plVar12[0xc] + 0x14);
        do {
          iVar3 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(puVar1);
        }
      }
      plVar12[0xc] = 0;
      plVar12[8] = 0;
      plVar12[7] = 0;
      plVar12[10] = 0;
      plVar12[9] = 0;
      if (*(int *)((long)plVar12 + 0x2c) < 1) {
        *puVar1 = uStack_108;
LAB_10ac48460:
        if (2 < iStack_104) goto LAB_10ac48494;
        *(int *)((long)plVar12 + 0x2c) = iStack_104;
        plVar12[6] = lStack_100;
        plVar10 = (long *)plVar12[0xe];
        *plVar10 = *plStack_c0;
        plVar10[1] = plStack_c0[1];
      }
      else {
        lVar14 = 0;
        lVar17 = plVar12[0xd];
        do {
          *(undefined4 *)(lVar17 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < *(int *)((long)plVar12 + 0x2c));
        *puVar1 = uStack_108;
        if (*(int *)((long)plVar12 + 0x2c) < 3) goto LAB_10ac48460;
LAB_10ac48494:
        func_0x000109a84868(puVar1,&uStack_108);
      }
      plVar12[8] = lStack_f0;
      plVar12[7] = lStack_f8;
      plVar12[10] = lStack_e0;
      plVar12[9] = lStack_e8;
      plVar12[0xc] = lStack_d0;
      plVar12[0xb] = lStack_d8;
    }
    if (lStack_d0 != 0) {
      piVar2 = (int *)(lStack_d0 + 0x14);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_108);
      }
    }
    lStack_d0 = 0;
    lStack_f0 = 0;
    lStack_f8 = 0;
    lStack_e0 = 0;
    lStack_e8 = 0;
    if (0 < iStack_104) {
      lVar14 = 0;
      do {
        *(undefined4 *)(lStack_c8 + lVar14 * 4) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < iStack_104);
    }
    if (plStack_c0 != &lStack_b8 && plStack_c0 != (long *)0x0) {
      _free(plStack_c0[-1]);
    }
    if (plStack_a0 != (long *)0x0) {
      plVar10 = plStack_a0 + 1;
      do {
        lVar14 = *plVar10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
      }
    }
  }
  if (plStack_140 != (long *)0x0) {
    plVar10 = plStack_140 + 1;
    do {
      lVar14 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_140 + 0x10))(plStack_140);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_140);
    }
  }
  if (cStack_121 < '\0') {
    __ZdlPv(alStack_138[0]);
  }
  *extraout_x8 = 0;
  plVar10 = plVar11 + 0x4b;
  lVar14 = plVar11[0x59];
  uVar16 = lVar14 - 1;
  plVar11[0x59] = uVar16;
  if (uVar16 < 8) {
    uVar16 = plVar10[lVar14 + 2];
    if (plVar11[0x5a] == uVar16) {
      return;
    }
  }
  else {
    uVar16 = *(ulong *)(plVar11[0x57] + -8);
    plVar11[0x57] = plVar11[0x57] + -8;
    if (plVar11[0x5a] == uVar16) {
      return;
    }
  }
  lVar14 = *plVar10;
  lVar17 = plVar11[0x4c];
  lVar18 = lVar17 - lVar14;
  uVar21 = lVar18 >> 4;
  if (uVar21 < uVar16) {
    uVar22 = uVar16 - uVar21;
    lVar20 = plVar11[0x4d];
    if ((ulong)(lVar20 - lVar17 >> 4) < uVar22) {
      if (uVar16 >> 0x3c == 0) {
        uVar15 = lVar20 - lVar14 >> 3;
        if (uVar15 <= uVar16) {
          uVar15 = uVar16;
        }
        if (0x7fffffffffffffef < (ulong)(lVar20 - lVar14)) {
          uVar15 = 0xfffffffffffffff;
        }
        plStack_98 = plVar10;
        if (uVar15 >> 0x3c == 0) {
          lVar8 = uVar15 << 4;
          __Znwm();
          lVar17 = lVar8 + lVar18;
          _bzero(lVar17,uVar22 * 0x10);
          lVar19 = lVar17 + uVar21 * -0x10;
          _memcpy(lVar19,lVar14,lVar18);
          *plVar10 = lVar19;
          plVar11[0x4c] = lVar17 + uVar22 * 0x10;
          plVar11[0x4d] = lVar8 + uVar15 * 0x10;
          lStack_b8 = lVar14;
          lStack_b0 = lVar14;
          lStack_a8 = lVar14;
          plStack_a0 = (long *)lVar20;
          func_0x00010988c1b8(&lStack_b8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar7)();
    }
    _bzero(lVar17,uVar22 * 0x10);
    plVar11[0x4c] = lVar17 + uVar22 * 0x10;
  }
  else if (uVar16 < uVar21) {
    lVar14 = lVar14 + uVar16 * 0x10;
    while (lVar17 != lVar14) {
      lVar17 = lVar17 + -0x10;
      func_0x00010988c204(lVar17);
    }
    plVar11[0x4c] = lVar14;
  }
code_r0x00010988c138:
  plVar11[0x5a] = uVar16;
  return;
}



/* Entry: 10ac481a4; end: 10ac481c7;  */

void FUN_10ac481a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined4 *extraout_x8;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lStack_128;
  long *plStack_120;
  long alStack_118 [2];
  char cStack_101;
  undefined4 auStack_100 [2];
  uint *puStack_f8;
  undefined8 uStack_f0;
  uint uStack_e8;
  int iStack_e4;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  uint *puStack_70;
  undefined8 uStack_68;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar9 = (long *)0x2;
  uVar12 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar10 = plVar9;
  (**(code **)(*plVar9 + 0x58))();
  if ((ulong)plVar10[0x59] < 8) {
    plVar10[plVar10[0x59] + 0x4e] = plVar10[0x5a];
    plVar10[0x59] = plVar10[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar10 + 0x4b);
  }
  plVar11 = plVar9;
  FUN_10ac4813c(plVar9,uVar12);
  FUN_10ac4865c(param_4);
  func_0x000109898570(alStack_118,plVar9,param_1);
  FUN_10a065cdc(&lStack_128,plVar9,param_1 + 0x10);
  if (lStack_128 == 0) {
    FUN_10ac49070(plVar11 + 0x79,alStack_118);
  }
  else {
    uVar15 = (ulong)*(byte *)(plVar11[0x12] + 0x29);
    if (5 < uVar15) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10ac485ec);
      (*pcVar7)();
    }
    FUN_10aba1500(&lStack_88,*(undefined8 *)(plVar11[0x12] + uVar15 * 8 + 0x30),lStack_128,0);
    lVar13 = 0;
    if (lStack_88 != 0) {
      lVar13 = lStack_88 + 0x10;
    }
    FUN_10a0f3910(&uStack_e8,lVar13,0);
    uVar6 = uStack_e8 >> 3 & 0x1ff;
    if (uVar6 == 2) {
      plStack_78 = (long *)CONCAT44(plStack_78._4_4_,0x1010000);
      puStack_f8 = &uStack_e8;
      uStack_68 = 0;
      auStack_100[0] = 0x2010000;
      uStack_f0 = 0;
      puStack_70 = puStack_f8;
      func_0x000109ac9fc8(&plStack_78,auStack_100,4,0);
    }
    else if (uVar6 == 3) {
      plStack_78 = (long *)CONCAT44(plStack_78._4_4_,0x1010000);
      puStack_f8 = &uStack_e8;
      uStack_68 = 0;
      auStack_100[0] = 0x2010000;
      uStack_f0 = 0;
      puStack_70 = puStack_f8;
      func_0x000109ac9fc8(&plStack_78,auStack_100,3,0);
    }
    plStack_78._0_4_ = 0x2010000;
    uStack_68 = 0;
    puStack_70 = &uStack_e8;
    func_0x000109a41858(0x3ff0000000000000,0,&uStack_e8,&plStack_78,uStack_e8 & 0xff8 | 5);
    plStack_78 = (long *)CONCAT44(plStack_78._4_4_,0x2010000);
    uStack_68 = 0;
    puStack_70 = &uStack_e8;
    func_0x000109a41858(0x3f70101010101010,0,&uStack_e8,&plStack_78,0xffffffff);
    plStack_78 = alStack_118;
    plVar11 = plVar11 + 0x79;
    func_0x0001095b3c7c(plVar11,alStack_118,&UNK_10dd5b8f9,&plStack_78,auStack_100);
    puVar1 = (uint *)(plVar11 + 5);
    if (puVar1 != &uStack_e8) {
      if (lStack_b0 != 0) {
        piVar2 = (int *)(lStack_b0 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (plVar11[0xc] != 0) {
        piVar2 = (int *)(plVar11[0xc] + 0x14);
        do {
          iVar3 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(puVar1);
        }
      }
      plVar11[0xc] = 0;
      plVar11[8] = 0;
      plVar11[7] = 0;
      plVar11[10] = 0;
      plVar11[9] = 0;
      if (*(int *)((long)plVar11 + 0x2c) < 1) {
        *puVar1 = uStack_e8;
LAB_10ac48460:
        if (2 < iStack_e4) goto LAB_10ac48494;
        *(int *)((long)plVar11 + 0x2c) = iStack_e4;
        plVar11[6] = lStack_e0;
        plVar9 = (long *)plVar11[0xe];
        *plVar9 = *plStack_a0;
        plVar9[1] = plStack_a0[1];
      }
      else {
        lVar13 = 0;
        lVar16 = plVar11[0xd];
        do {
          *(undefined4 *)(lVar16 + lVar13 * 4) = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)((long)plVar11 + 0x2c));
        *puVar1 = uStack_e8;
        if (*(int *)((long)plVar11 + 0x2c) < 3) goto LAB_10ac48460;
LAB_10ac48494:
        func_0x000109a84868(puVar1,&uStack_e8);
      }
      plVar11[8] = lStack_d0;
      plVar11[7] = lStack_d8;
      plVar11[10] = lStack_c0;
      plVar11[9] = lStack_c8;
      plVar11[0xc] = lStack_b0;
      plVar11[0xb] = lStack_b8;
    }
    if (lStack_b0 != 0) {
      piVar2 = (int *)(lStack_b0 + 0x14);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_e8);
      }
    }
    lStack_b0 = 0;
    lStack_d0 = 0;
    lStack_d8 = 0;
    lStack_c0 = 0;
    lStack_c8 = 0;
    if (0 < iStack_e4) {
      lVar13 = 0;
      do {
        *(undefined4 *)(lStack_a8 + lVar13 * 4) = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < iStack_e4);
    }
    if (plStack_a0 != &lStack_98 && plStack_a0 != (long *)0x0) {
      _free(plStack_a0[-1]);
    }
    if (plStack_80 != (long *)0x0) {
      plVar9 = plStack_80 + 1;
      do {
        lVar13 = *plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
      }
    }
  }
  if (plStack_120 != (long *)0x0) {
    plVar9 = plStack_120 + 1;
    do {
      lVar13 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_120 + 0x10))(plStack_120);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_120);
    }
  }
  if (cStack_101 < '\0') {
    __ZdlPv(alStack_118[0]);
  }
  *extraout_x8 = 0;
  plVar9 = plVar10 + 0x4b;
  lVar13 = plVar10[0x59];
  uVar15 = lVar13 - 1;
  plVar10[0x59] = uVar15;
  if (uVar15 < 8) {
    uVar15 = plVar9[lVar13 + 2];
    if (plVar10[0x5a] == uVar15) {
      return;
    }
  }
  else {
    uVar15 = *(ulong *)(plVar10[0x57] + -8);
    plVar10[0x57] = plVar10[0x57] + -8;
    if (plVar10[0x5a] == uVar15) {
      return;
    }
  }
  lVar13 = *plVar9;
  lVar16 = plVar10[0x4c];
  lVar17 = lVar16 - lVar13;
  uVar20 = lVar17 >> 4;
  if (uVar20 < uVar15) {
    uVar21 = uVar15 - uVar20;
    lVar19 = plVar10[0x4d];
    if ((ulong)(lVar19 - lVar16 >> 4) < uVar21) {
      if (uVar15 >> 0x3c == 0) {
        uVar14 = lVar19 - lVar13 >> 3;
        if (uVar14 <= uVar15) {
          uVar14 = uVar15;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - lVar13)) {
          uVar14 = 0xfffffffffffffff;
        }
        plStack_78 = plVar9;
        if (uVar14 >> 0x3c == 0) {
          lVar8 = uVar14 << 4;
          __Znwm();
          lVar16 = lVar8 + lVar17;
          _bzero(lVar16,uVar21 * 0x10);
          lVar18 = lVar16 + uVar20 * -0x10;
          _memcpy(lVar18,lVar13,lVar17);
          *plVar9 = lVar18;
          plVar10[0x4c] = lVar16 + uVar21 * 0x10;
          plVar10[0x4d] = lVar8 + uVar14 * 0x10;
          lStack_98 = lVar13;
          lStack_90 = lVar13;
          lStack_88 = lVar13;
          plStack_80 = (long *)lVar19;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar7)();
    }
    _bzero(lVar16,uVar21 * 0x10);
    plVar10[0x4c] = lVar16 + uVar21 * 0x10;
  }
  else if (uVar15 < uVar20) {
    lVar13 = lVar13 + uVar15 * 0x10;
    while (lVar16 != lVar13) {
      lVar16 = lVar16 + -0x10;
      func_0x00010988c204(lVar16);
    }
    plVar10[0x4c] = lVar13;
  }
code_r0x00010988c138:
  plVar10[0x5a] = uVar15;
  return;
}



/* Entry: 10ac481c8; end: 10ac4865b;  */

void FUN_10ac481c8(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lStack_118;
  long *plStack_110;
  long alStack_108 [2];
  char cStack_f1;
  undefined4 auStack_f0 [2];
  uint *puStack_e8;
  undefined8 uStack_e0;
  uint uStack_d8;
  int iStack_d4;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  uint *puStack_60;
  undefined8 uStack_58;
  
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = param_2;
  FUN_10ac4813c(param_2,param_3);
  FUN_10ac4865c(param_5);
  func_0x000109898570(alStack_108,param_2,param_4);
  FUN_10a065cdc(&lStack_118,param_2,param_4 + 0x10);
  if (lStack_118 == 0) {
    FUN_10ac49070(plVar10 + 0x79,alStack_108);
  }
  else {
    uVar13 = (ulong)*(byte *)(plVar10[0x12] + 0x29);
    if (5 < uVar13) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10ac485ec);
      (*pcVar7)();
    }
    FUN_10aba1500(&lStack_78,*(undefined8 *)(plVar10[0x12] + uVar13 * 8 + 0x30),lStack_118,0);
    lVar11 = 0;
    if (lStack_78 != 0) {
      lVar11 = lStack_78 + 0x10;
    }
    FUN_10a0f3910(&uStack_d8,lVar11,0);
    uVar6 = uStack_d8 >> 3 & 0x1ff;
    if (uVar6 == 2) {
      plStack_68 = (long *)CONCAT44(plStack_68._4_4_,0x1010000);
      puStack_e8 = &uStack_d8;
      uStack_58 = 0;
      auStack_f0[0] = 0x2010000;
      uStack_e0 = 0;
      puStack_60 = puStack_e8;
      func_0x000109ac9fc8(&plStack_68,auStack_f0,4,0);
    }
    else if (uVar6 == 3) {
      plStack_68 = (long *)CONCAT44(plStack_68._4_4_,0x1010000);
      puStack_e8 = &uStack_d8;
      uStack_58 = 0;
      auStack_f0[0] = 0x2010000;
      uStack_e0 = 0;
      puStack_60 = puStack_e8;
      func_0x000109ac9fc8(&plStack_68,auStack_f0,3,0);
    }
    plStack_68._0_4_ = 0x2010000;
    uStack_58 = 0;
    puStack_60 = &uStack_d8;
    func_0x000109a41858(0x3ff0000000000000,0,&uStack_d8,&plStack_68,uStack_d8 & 0xff8 | 5);
    plStack_68 = (long *)CONCAT44(plStack_68._4_4_,0x2010000);
    uStack_58 = 0;
    puStack_60 = &uStack_d8;
    func_0x000109a41858(0x3f70101010101010,0,&uStack_d8,&plStack_68,0xffffffff);
    plStack_68 = alStack_108;
    plVar10 = plVar10 + 0x79;
    func_0x0001095b3c7c(plVar10,alStack_108,&UNK_10dd5b8f9,&plStack_68,auStack_f0);
    puVar1 = (uint *)(plVar10 + 5);
    if (puVar1 != &uStack_d8) {
      if (lStack_a0 != 0) {
        piVar2 = (int *)(lStack_a0 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (plVar10[0xc] != 0) {
        piVar2 = (int *)(plVar10[0xc] + 0x14);
        do {
          iVar3 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(puVar1);
        }
      }
      plVar10[0xc] = 0;
      plVar10[8] = 0;
      plVar10[7] = 0;
      plVar10[10] = 0;
      plVar10[9] = 0;
      if (*(int *)((long)plVar10 + 0x2c) < 1) {
        *puVar1 = uStack_d8;
LAB_10ac48460:
        if (2 < iStack_d4) goto LAB_10ac48494;
        *(int *)((long)plVar10 + 0x2c) = iStack_d4;
        plVar10[6] = lStack_d0;
        plVar15 = (long *)plVar10[0xe];
        *plVar15 = *plStack_90;
        plVar15[1] = plStack_90[1];
      }
      else {
        lVar11 = 0;
        lVar14 = plVar10[0xd];
        do {
          *(undefined4 *)(lVar14 + lVar11 * 4) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)((long)plVar10 + 0x2c));
        *puVar1 = uStack_d8;
        if (*(int *)((long)plVar10 + 0x2c) < 3) goto LAB_10ac48460;
LAB_10ac48494:
        func_0x000109a84868(puVar1,&uStack_d8);
      }
      plVar10[8] = lStack_c0;
      plVar10[7] = lStack_c8;
      plVar10[10] = lStack_b0;
      plVar10[9] = lStack_b8;
      plVar10[0xc] = lStack_a0;
      plVar10[0xb] = lStack_a8;
    }
    if (lStack_a0 != 0) {
      piVar2 = (int *)(lStack_a0 + 0x14);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_d8);
      }
    }
    lStack_a0 = 0;
    lStack_c0 = 0;
    lStack_c8 = 0;
    lStack_b0 = 0;
    lStack_b8 = 0;
    if (0 < iStack_d4) {
      lVar11 = 0;
      do {
        *(undefined4 *)(lStack_98 + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < iStack_d4);
    }
    if (plStack_90 != &lStack_88 && plStack_90 != (long *)0x0) {
      _free(plStack_90[-1]);
    }
    if (plStack_70 != (long *)0x0) {
      plVar10 = plStack_70 + 1;
      do {
        lVar11 = *plVar10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
      }
    }
  }
  if (plStack_110 != (long *)0x0) {
    plVar10 = plStack_110 + 1;
    do {
      lVar11 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_110 + 0x10))(plStack_110);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_110);
    }
  }
  if (cStack_f1 < '\0') {
    __ZdlPv(alStack_108[0]);
  }
  *param_1 = 0;
  plVar10 = plVar9 + 0x4b;
  lVar11 = plVar9[0x59];
  uVar13 = lVar11 - 1;
  plVar9[0x59] = uVar13;
  if (uVar13 < 8) {
    uVar13 = plVar10[lVar11 + 2];
    if (plVar9[0x5a] == uVar13) {
      return;
    }
  }
  else {
    uVar13 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar13) {
      return;
    }
  }
  lVar11 = *plVar10;
  lVar14 = plVar9[0x4c];
  lVar16 = lVar14 - lVar11;
  uVar19 = lVar16 >> 4;
  if (uVar19 < uVar13) {
    uVar20 = uVar13 - uVar19;
    lVar18 = plVar9[0x4d];
    if ((ulong)(lVar18 - lVar14 >> 4) < uVar20) {
      if (uVar13 >> 0x3c == 0) {
        uVar12 = lVar18 - lVar11 >> 3;
        if (uVar12 <= uVar13) {
          uVar12 = uVar13;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - lVar11)) {
          uVar12 = 0xfffffffffffffff;
        }
        plStack_68 = plVar10;
        if (uVar12 >> 0x3c == 0) {
          lVar8 = uVar12 << 4;
          __Znwm();
          lVar14 = lVar8 + lVar16;
          _bzero(lVar14,uVar20 * 0x10);
          lVar17 = lVar14 + uVar19 * -0x10;
          _memcpy(lVar17,lVar11,lVar16);
          *plVar10 = lVar17;
          plVar9[0x4c] = lVar14 + uVar20 * 0x10;
          plVar9[0x4d] = lVar8 + uVar12 * 0x10;
          lStack_88 = lVar11;
          lStack_80 = lVar11;
          lStack_78 = lVar11;
          plStack_70 = (long *)lVar18;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar7)();
    }
    _bzero(lVar14,uVar20 * 0x10);
    plVar9[0x4c] = lVar14 + uVar20 * 0x10;
  }
  else if (uVar13 < uVar19) {
    lVar11 = lVar11 + uVar13 * 0x10;
    while (lVar14 != lVar11) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar9[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar13;
  return;
}



/* Entry: 10ac4865c; end: 10ac4867f;  */

void FUN_10ac4865c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
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
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long *in_stack_ffffffffffffffa8;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar5 = (long *)0x2;
  uVar8 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = plVar5;
  FUN_10ac4813c(plVar5,uVar8);
  FUN_10a2f3410(param_4);
  FUN_10a05dcbc(&stack0xffffffffffffffa0,plVar5,param_1);
  func_0x00010a2e268c(plVar7 + 0xaa,&stack0xffffffffffffffa0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar5 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar11 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  *extraout_x8 = 0;
  plVar5 = plVar6 + 0x4b;
  lVar11 = plVar6[0x59];
  uVar9 = lVar11 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar5[lVar11 + 2];
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
  lVar11 = *plVar5;
  lVar14 = plVar6[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    lVar15 = plVar6[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar11 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_78 = plVar5;
        if (uVar10 >> 0x3c == 0) {
          lVar4 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar4 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar5 = lVar13;
          plVar6[0x4c] = lVar14 + uVar17 * 0x10;
          plVar6[0x4d] = lVar4 + uVar10 * 0x10;
          lStack_98 = lVar11;
          lStack_90 = lVar11;
          lStack_88 = lVar11;
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar14,uVar17 * 0x10);
    plVar6[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar9 < uVar16) {
    lVar11 = lVar11 + uVar9 * 0x10;
    while (lVar14 != lVar11) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar6[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10ac48680; end: 10ac4878b;  */

void FUN_10ac48680(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac4813c(param_2,param_3);
  FUN_10a2f3410(param_5);
  FUN_10a05dcbc(&stack0xffffffffffffffb0,param_2,param_4);
  func_0x00010a2e268c(plVar6 + 0xaa,&stack0xffffffffffffffb0);
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



/* Entry: 10ac4878c; end: 10ac48843;  */

void FUN_10ac4878c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac48950(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a05b924(param_1,param_2,plVar4 + 0x6f);
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



/* Entry: 10ac48844; end: 10ac4894f;  */

void FUN_10ac48844(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac4813c(param_2,param_3);
  FUN_10a1f9134(param_5);
  FUN_10a065cdc(&stack0xffffffffffffffb0,param_2,param_4);
  func_0x00010a04a704(plVar6 + 0x6f,&stack0xffffffffffffffb0);
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



/* Entry: 10ac48950; end: 10ac489b7;  */

void FUN_10ac48950(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

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
  plVar6 = plVar4;
  FUN_10ac48950(plVar4,param_2);
  FUN_10a052e3c(param_4);
  FUN_10a052e5c(extraout_x8,plVar4,plVar6 + 0x7e);
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



/* Entry: 10ac489b8; end: 10ac48a6f;  */

void FUN_10ac489b8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac48950(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a052e5c(param_1,param_2,plVar4 + 0x7e);
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



/* Entry: 10ac48a70; end: 10ac48b8b;  */

void FUN_10ac48a70(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac4813c(param_2,param_3);
  FUN_10a05395c(param_5);
  FUN_10a053980(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10ac1c330(plVar6,&stack0xffffffffffffffb0);
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



/* Entry: 10ac48b8c; end: 10ac48c43;  */

void FUN_10ac48b8c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac48950(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(undefined1 *)((long)param_2 + 0x50d);
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



/* Entry: 10ac48c44; end: 10ac48d0b;  */

void FUN_10ac48c44(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac4813c(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)((long)plVar4 + 0x50d) = (char)param_2;
  if ((int)param_2 != 0) {
    *(undefined4 *)((long)plVar4 + 0x74) = 0;
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



/* Entry: 10ac48d0c; end: 10ac48dc3;  */

void FUN_10ac48d0c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac48950(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0xae];
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



/* Entry: 10ac48dc4; end: 10ac48e9b;  */

void FUN_10ac48dc4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac4813c(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  (**(code **)(*(long *)plVar4[0x5d] + 0x28))((long *)plVar4[0x5d],param_2);
  *(char *)(plVar4 + 0xae) = (char)param_2;
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



/* Entry: 10ac48e9c; end: 10ac48f4b;  */

long FUN_10ac48e9c(long param_1)

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



/* Entry: 10ac48f4c; end: 10ac48f5b;  */

void FUN_10ac48f4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c5de30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ac48f5c; end: 10ac48f7b;  */

void FUN_10ac48f5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c5de30;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac48f7c; end: 10ac48f8f;  */

void FUN_10ac48f7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ac48f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ac48f90; end: 10ac48fa3;  */

void FUN_10ac48f90(void)

{
  func_0x0001094a9640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac48fa4; end: 10ac48fb3;  */

void FUN_10ac48fa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c5def0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ac48fb4; end: 10ac48fd3;  */

void FUN_10ac48fb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c5def0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac48fd4; end: 10ac4900f;  */

void FUN_10ac48fd4(long param_1)

{
  __ZNSt3__17promiseIvED1Ev(param_1 + 0x40);
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10ac49010; end: 10ac4906f;  */

void FUN_10ac49010(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac49070; end: 10ac491e7;  */

void FUN_10ac49070(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  plVar2 = param_1;
  func_0x0001095b41e4();
  if (plVar2 == (long *)0x0) {
    return;
  }
  uVar5 = param_1[1];
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar1 = *(long **)(*param_1 + uVar4 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  if (plVar7 == param_1 + 2) {
LAB_10ac49114:
    if (lVar3 == 0) {
LAB_10ac49148:
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_10ac49150;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
        uVar9 = uVar8 - uVar9 * uVar5;
      }
    }
    if (uVar9 != uVar4) goto LAB_10ac49148;
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar9 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10ac49114;
LAB_10ac49150:
    if (lVar3 == 0) goto LAB_10ac4918c;
    uVar8 = *(ulong *)(lVar3 + 8);
  }
  if ((uVar5 & uVar6) == 0) {
    uVar8 = uVar8 & uVar6;
  }
  else if (uVar5 <= uVar8) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar8 / uVar5;
    }
    uVar8 = uVar8 - uVar6 * uVar5;
  }
  if (uVar8 != uVar4) {
    *(long **)(*param_1 + uVar8 * 8) = plVar7;
    lVar3 = *plVar2;
  }
LAB_10ac4918c:
  *plVar7 = lVar3;
  *plVar2 = 0;
  param_1[3] = param_1[3] + -1;
  FUN_10a6d6d40(plVar2 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar2);
  return;
}



/* Entry: 10ac491e8; end: 10ac493cf;  */

void FUN_10ac491e8(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_40;
  long *plStack_38;
  
  plVar3 = *(long **)(param_1 + 0x18);
  if (plVar3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_38 = plVar3;
    if (plVar3 != (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x10);
      plStack_40 = plVar6;
      if (plVar6 != (long *)0x0) {
        uStack_50._7_1_ = '\t';
        uStack_58 = CONCAT62(uStack_58._2_6_,0x6c);
        uStack_60 = 0x65646f4d6e69616d;
        (**(code **)(*plVar6 + 0x10))(plVar6,&uStack_60,param_1 + 0x20);
        if (uStack_50._7_1_ < '\0') {
          __ZdlPv(uStack_60);
        }
        lVar4 = plVar6[6];
        puVar5 = *(undefined8 **)(param_1 + 0x30);
        *puVar5 = *(undefined8 *)(lVar4 + 0x40);
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(lVar4 + 0x50);
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        func_0x0001092cc0dc(&uStack_60,*(long *)(lVar4 + 0x58),*(long *)(lVar4 + 0x60),
                            *(long *)(lVar4 + 0x60) - *(long *)(lVar4 + 0x58) >> 2);
        lVar7 = *(long *)(param_1 + 0x30);
        lVar4 = lVar7;
        if (*(long *)(lVar7 + 0x10) != 0) {
          *(long *)(lVar7 + 0x18) = *(long *)(lVar7 + 0x10);
          __ZdlPv();
          *(undefined8 *)(lVar7 + 0x20) = 0;
          lVar4 = *(long *)(param_1 + 0x30);
        }
        *(undefined8 *)(lVar7 + 0x18) = uStack_58;
        *(undefined8 *)(lVar7 + 0x10) = uStack_60;
        *(undefined8 *)(lVar7 + 0x20) = uStack_50;
        *(char *)(lVar4 + 0x30) = (char)*(undefined4 *)(plVar6[6] + 0xe0);
        __ZNSt3__17promiseIvE9set_valueEv(lVar4 + 0x28);
      }
      plVar6 = plVar3 + 1;
      do {
        lVar4 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  (**(code **)(param_1 + 0x48))(param_1);
  return;
}



/* Entry: 10ac493d0; end: 10ac4946f;  */

void FUN_10ac493d0(long param_1)

{
  if (param_1 != 0) {
    FUN_10ac48e9c(param_1 + 0x30);
    func_0x00010a202f70(param_1 + 0x20);
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(long *)(param_1 + 8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ac49470; end: 10ac4956b;  */

undefined1  [16] FUN_10ac49470(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c5ef38;
  puVar1 = &UNK_10f69b9ca;
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
    ppuStack_40 = &PTR_DAT_110c5ef38;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c681e8;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10ac4956c; end: 10ac49627;  */

void FUN_10ac4956c(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f69da29,0x18);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac49628);
  (*pcVar4)();
}



/* Entry: 10ac49628; end: 10ac49637;  */

void FUN_10ac49628(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c5df70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ac49638; end: 10ac49657;  */

void FUN_10ac49638(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c5df70;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac49658; end: 10ac49663;  */

long FUN_10ac49658(long param_1)

{
  if (*(long *)(param_1 + 0x78) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a1e3810(param_1 + 0x20);
  return param_1 + 0x18;
}



/* Entry: 10ac49664; end: 10ac4977b;  */

void FUN_10ac49664(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac4977c(param_2,param_3);
  FUN_10a7583d0(param_5);
  FUN_10a7583f4(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a73fecc(plVar6 + 0x5e,&stack0xffffffffffffffb0);
  *(byte *)(plVar6 + 0x55) = *(byte *)(plVar6 + 0x55) & 0xfd;
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



/* Entry: 10ac4977c; end: 10ac497e3;  */

void FUN_10ac4977c(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

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
  plVar6 = plVar4;
  FUN_10ac499a8(plVar4,param_2);
  FUN_10a052e3c(param_4);
  FUN_10a05b924(extraout_x8,plVar4,plVar6 + 0x58);
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



/* Entry: 10ac497e4; end: 10ac4989b;  */

void FUN_10ac497e4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac499a8(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a05b924(param_1,param_2,plVar4 + 0x58);
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



/* Entry: 10ac4989c; end: 10ac499a7;  */

void FUN_10ac4989c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac4977c(param_2,param_3);
  FUN_10a1f9134(param_5);
  FUN_10a065cdc(&stack0xffffffffffffffb0,param_2,param_4);
  func_0x00010a04a704(plVar6 + 0x58,&stack0xffffffffffffffb0);
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



/* Entry: 10ac499a8; end: 10ac49a0f;  */

void FUN_10ac499a8(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
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
  plVar7 = plVar5;
  FUN_10ac499a8(plVar5,param_2);
  FUN_10a052e3c(param_4);
  uVar9 = plVar7[0x5b];
  plVar1 = (long *)plVar7[0x5a];
  if (-1 < (char)*(byte *)((long)plVar7 + 0x2e7)) {
    uVar9 = (ulong)*(byte *)((long)plVar7 + 0x2e7);
    plVar1 = plVar7 + 0x5a;
  }
  (**(code **)(*plVar5 + 0x128))(extraout_x8 + 2,plVar5,plVar1,uVar9);
  *extraout_x8 = 6;
  plVar5 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar9 = lVar8 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar5[lVar8 + 2];
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
  lVar8 = *plVar5;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_88 = plVar5;
        if (uVar10 >> 0x3c == 0) {
          lVar3 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar5 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar3 + uVar10 * 0x10;
          lStack_a8 = lVar8;
          lStack_a0 = lVar8;
          lStack_98 = lVar8;
          lStack_90 = lVar14;
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
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10ac49a10; end: 10ac49af3;  */

void FUN_10ac49a10(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac499a8(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[0x5b];
  plVar1 = (long *)plVar5[0x5a];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x2e7)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x2e7);
    plVar1 = plVar5 + 0x5a;
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



/* Entry: 10ac49af4; end: 10ac49bfb;  */

void FUN_10ac49af4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac4977c(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (plVar4 + 0x5a,&stack0xffffffffffffffa8);
  *(byte *)(plVar4 + 0x55) = *(byte *)(plVar4 + 0x55) & 0xfd;
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



/* Entry: 10ac49bfc; end: 10ac49cb7;  */

void FUN_10ac49bfc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac499a8(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0x5d];
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



/* Entry: 10ac49cb8; end: 10ac49d6f;  */

void FUN_10ac49cb8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac49d70(param_1,param_2,FUN_10ac2030c,0,param_3,param_4,param_5);
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



/* Entry: 10ac49d70; end: 10ac49df7;  */

void FUN_10ac49d70(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_2;
  FUN_10ac4977c(param_2,param_5);
  FUN_10a076f00(param_7);
  func_0x000109898518(param_2,param_6);
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,param_2);
  *param_1 = 0;
  return;
}



/* Entry: 10ac49df8; end: 10ac49eb3;  */

void FUN_10ac49df8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac499a8(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar2 = *(int *)((long)param_2 + 0x2ec);
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



/* Entry: 10ac49eb4; end: 10ac49f6b;  */

void FUN_10ac49eb4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac49d70(param_1,param_2,0x10ac20364,0,param_3,param_4,param_5);
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



/* Entry: 10ac49f6c; end: 10ac4a027;  */

void FUN_10ac49f6c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac499a8(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0x60];
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



/* Entry: 10ac4a028; end: 10ac4a0f3;  */

void FUN_10ac4a028(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac4977c(param_2,param_3);
  FUN_10ac4a0f4(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)(plVar4 + 0x60) = (int)param_2;
  *(byte *)(plVar4 + 0x55) = *(byte *)(plVar4 + 0x55) & 0xfd;
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



/* Entry: 10ac4a0f4; end: 10ac4a18b;  */

void FUN_10ac4a0f4(int param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int aiStack_30 [2];
  undefined8 *puStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if (param_1 == 1) {
    return;
  }
  puVar2 = (undefined8 *)0x1;
  uVar3 = 0;
  FUN_10a052ee0(1,0);
  if (puVar2[2] != puVar2[3]) {
    uStack_18 = 0x10ac4a118;
    aiStack_30[0] = 3;
    puStack_28 = (undefined8 *)(double)param_1;
    puStack_20 = &stack0xfffffffffffffff0;
    FUN_10a005308(puVar2[3] + -8,*puVar2,uVar3,aiStack_30);
    if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
      (**(code **)*puStack_28)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac4a18c);
  (*pcVar1)();
}



/* Entry: 10ac4a18c; end: 10ac4a1e3;  */

long FUN_10ac4a18c(long param_1)

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



/* Entry: 10ac4a1e4; end: 10ac4a347;  */

void FUN_10ac4a1e4(long *param_1,long *param_2)

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



/* Entry: 10ac4a348; end: 10ac4a467;  */

void FUN_10ac4a348(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  if ((lVar4 == 0) || (*(long *)(lVar4 + 8) == -1)) {
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



/* Entry: 10ac4a468; end: 10ac4a4a7;  */

void FUN_10ac4a468(long param_1)

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



/* Entry: 10ac4a4a8; end: 10ac4a4e3;  */

long FUN_10ac4a4a8(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c5e000);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ac4a4e4; end: 10ac4a4e7;  */

void FUN_10ac4a4e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac4a4e8; end: 10ac4a53f;  */

long FUN_10ac4a4e8(long param_1)

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



/* Entry: 10ac4a540; end: 10ac4a73f;  */

void FUN_10ac4a540(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  plVar3 = *(long **)(param_2 + 0x18);
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar3 != (long *)0x0) {
      lVar9 = *(long *)(param_2 + 0x10);
      if (lVar9 != 0) {
        puVar4 = (undefined8 *)0xd0;
        __Znwm();
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar5 = puVar4 + 3;
        *puVar4 = &PTR_FUN_110c5e020;
        FUN_10ab9acd0(puVar5,param_1,0);
        *(undefined8 **)(lVar9 + 0x2b0) = puVar5;
        plVar11 = *(long **)(lVar9 + 0x2b8);
        *(undefined8 **)(lVar9 + 0x2b8) = puVar4;
        if (plVar11 != (long *)0x0) {
          plVar6 = plVar11 + 1;
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
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        plVar10 = *(long **)(lVar9 + 0x2b0);
        plVar11 = plVar10;
        (**(code **)(*plVar10 + 0x28))(plVar10);
        plVar6 = plVar10;
        (**(code **)(*plVar10 + 0x30))(plVar10);
        plVar7 = plVar10;
        (**(code **)(*plVar10 + 0x50))(plVar10);
        (**(code **)(*plVar10 + 0x70))(plVar10);
        FUN_10a1da3a4(lVar9,plVar11,plVar6,0,0,plVar7,plVar10,0);
        *(byte *)(lVar9 + 0x2a8) = *(byte *)(lVar9 + 0x2a8) | 2;
        goto LAB_10ac4a6b0;
      }
    }
  }
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f69de6e,&UNK_10f69deaf,0xbd,&UNK_10f69df54);
  }
LAB_10ac4a6b0:
  if (plVar3 != (long *)0x0) {
    plVar11 = plVar3 + 1;
    do {
      lVar9 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
      return;
    }
  }
  return;
}



/* Entry: 10ac4a740; end: 10ac4a74f;  */

void FUN_10ac4a740(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c5e020;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ac4a750; end: 10ac4a76f;  */

void FUN_10ac4a750(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c5e020;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac4a770; end: 10ac4a7df;  */

void FUN_10ac4a770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ac4a778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ac4a7e0; end: 10ac4ab5f;  */

void FUN_10ac4a7e0(long *param_1,long param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined ***unaff_x19;
  long *plVar12;
  ulong uVar13;
  undefined **ppuVar14;
  undefined **unaff_x26;
  float fVar15;
  long lVar16;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  long *plStack_190;
  long *plStack_188;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  long *plStack_80;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = *(long **)(param_2 + 0x10);
  if (*param_1 == 0) {
    __ZNSt3__15mutex4lockEv(plVar12 + 0x67);
    pppuVar4 = (undefined ***)(plVar12 + 0x6f);
    param_2 = param_2 + 0x18;
    func_0x00010596ff64();
    *(undefined1 *)((long)plVar12 + 0x304) = 1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(plVar12 + 0x67);
      return;
    }
    goto LAB_10ac4aae8;
  }
  plStack_108 = plVar12;
  if (*(char *)(param_2 + 0x2f) < '\0') {
    pcStack_e8 = (code *)plVar12;
    func_0x000107c3192c(&ppuStack_e0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20)
                       );
    pcStack_a8 = FUN_10ac4ab60;
    ppuStack_a0 = &PTR_FUN_110c5e080;
    plStack_88 = plStack_d8;
    ppuStack_90 = ppuStack_e0;
    plStack_98 = (long *)pcStack_e8;
    plStack_80 = plStack_d0;
    if (-1 < *(char *)(param_2 + 0x2f)) goto LAB_10ac4a924;
    func_0x000107c3192c(&plStack_100,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20)
                       );
  }
  else {
    plStack_88 = *(long **)(param_2 + 0x20);
    ppuStack_90 = *(undefined ***)(param_2 + 0x18);
    plStack_80 = *(long **)(param_2 + 0x28);
    plStack_98 = plVar12;
LAB_10ac4a924:
    ppuStack_a0 = &PTR_FUN_110c5e080;
    pcStack_a8 = FUN_10ac4ab60;
    uStack_f8 = *(undefined8 *)(param_2 + 0x20);
    plStack_100 = *(long **)(param_2 + 0x18);
    uStack_f0 = *(undefined8 *)(param_2 + 0x28);
  }
  unaff_x19 = &ppuStack_a0;
  pcStack_e8 = FUN_10ac4b014;
  ppuStack_e0 = &PTR_FUN_110c5e0a0;
  uStack_c0 = uStack_f0;
  uStack_c8 = uStack_f8;
  plStack_d0 = plStack_100;
  plVar5 = (long *)0x60;
  plStack_d8 = plStack_108;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_DAT_110b9f5b8;
  *(undefined1 *)(plVar5 + 0xb) = 3;
  unaff_x26 = &PTR_DAT_110950c70;
  plVar5[4] = (long)&PTR_DAT_110950c70;
  plVar5[3] = (long)pcStack_a8;
  (*(code *)ppuStack_a0[2])(plVar5 + 4,unaff_x19);
  *(undefined1 *)(plVar5 + 0xb) = 1;
  plVar6 = (long *)0x60;
  plStack_108 = plVar5 + 3;
  plStack_100 = plVar5;
  __Znwm();
  plVar5 = plVar6 + 1;
  *plVar5 = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_DAT_110b9f608;
  *(undefined1 *)(plVar6 + 0xb) = 3;
  plVar6[4] = (long)&PTR_DAT_110950c70;
  plVar6[3] = (long)pcStack_e8;
  (*(code *)ppuStack_e0[2])(plVar6 + 4,&ppuStack_e0);
  *(undefined1 *)(plVar6 + 0xb) = 1;
  param_2 = *param_1;
  plStack_118 = plVar6 + 3;
  plStack_110 = plVar6;
  FUN_10a340d28(plVar12[0x65],param_2,&plStack_108,&plStack_118);
  do {
    lVar7 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
  plVar12 = plStack_100;
  if (plStack_100 != (long *)0x0) {
    plVar5 = plStack_100 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_100 + 0x10))(plStack_100);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  pppuVar4 = unaff_x19;
  (*(code *)*ppuStack_a0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
LAB_10ac4aae8:
  ___stack_chk_fail();
  (*(code *)*ppuStack_a0)(unaff_x19);
  __Unwind_Resume();
  ppuStack_1e8 = pppuVar4[1];
  ppuStack_1f0 = *pppuVar4;
  *pppuVar4 = (undefined **)0x0;
  pppuVar4[1] = (undefined **)0x0;
  lVar7 = *(long *)(param_2 + 0x10);
  plVar5 = (long *)ppuStack_1f0[0x4d];
  plVar12 = (long *)ppuStack_1f0[0x4e];
  if (plVar12 != (long *)0x0) {
    plVar6 = plVar12 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_190 = plVar5;
  plStack_188 = plVar12;
  (**(code **)(*plVar5 + 0x90))(&fStack_1b4,plVar5);
  uStack_1d8 = (long *)CONCAT44(fStack_1ac + (fStack_1b4 * 0.0 - fStack_1b0),
                                fStack_1b4 + fStack_1b0 * 0.0 + fStack_1ac * 0.0);
  uStack_1d0 = (undefined **)
               CONCAT44(fStack_1a8 + fStack_1a4 * 0.0 + fStack_1a0 * 0.0,
                        fStack_1ac + fStack_1b0 * 0.0 + fStack_1b4 * 0.0);
  uStack_1c8 = CONCAT44(fStack_1a0 + fStack_1a4 * 0.0 + fStack_1a8 * 0.0,
                        fStack_1a0 + (fStack_1a8 * 0.0 - fStack_1a4));
  fStack_1c0 = fStack_19c + fStack_198 * 0.0 + fStack_194 * 0.0;
  fStack_1bc = fStack_194 + (fStack_19c * 0.0 - fStack_198);
  fStack_1b8 = fStack_194 + fStack_198 * 0.0 + fStack_19c * 0.0;
  (**(code **)(*plVar5 + 0x98))(plVar5,&uStack_1d8);
  __ZNSt3__15mutex4lockEv(lVar7 + 0x338);
  func_0x00010a04a704(lVar7 + 0x308,&ppuStack_1f0);
  *(byte *)(lVar7 + 0x2a8) = *(byte *)(lVar7 + 0x2a8) | 2;
  func_0x00010596ff64(lVar7 + 0x378,param_2 + 0x18);
  ppuVar1 = (undefined **)(lVar7 + 0x3a0);
  ppuVar11 = ppuVar1;
  func_0x000107c2b05c(ppuVar1,param_2 + 0x18);
  ppuVar14 = *(undefined ***)(lVar7 + 0x3a8);
  if (ppuVar14 != (undefined **)0x0) {
    uVar13 = (long)ppuVar14 - 1;
    if (((ulong)ppuVar14 & uVar13) == 0) {
      unaff_x26 = (undefined **)(uVar13 & (ulong)ppuVar11);
    }
    else {
      unaff_x26 = ppuVar11;
      if (ppuVar14 <= ppuVar11) {
        uVar10 = 0;
        if (ppuVar14 != (undefined **)0x0) {
          uVar10 = (ulong)ppuVar11 / (ulong)ppuVar14;
        }
        unaff_x26 = (undefined **)((long)ppuVar11 - uVar10 * (long)ppuVar14);
      }
    }
    if (*(long **)(*ppuVar1 + (long)unaff_x26 * 8) != (long *)0x0) {
      for (plVar5 = (long *)**(long **)(*ppuVar1 + (long)unaff_x26 * 8); plVar5 != (long *)0x0;
          plVar5 = (long *)*plVar5) {
        ppuVar8 = (undefined **)plVar5[1];
        if (ppuVar8 == ppuVar11) {
          ppuVar8 = ppuVar1;
          func_0x000107c2b068(ppuVar1,plVar5 + 2,param_2 + 0x18);
          if (((ulong)ppuVar8 & 1) != 0) goto LAB_10ac4aeb8;
        }
        else {
          if (((ulong)ppuVar14 & uVar13) == 0) {
            ppuVar8 = (undefined **)((ulong)ppuVar8 & uVar13);
          }
          else if (ppuVar14 <= ppuVar8) {
            uVar10 = 0;
            if (ppuVar14 != (undefined **)0x0) {
              uVar10 = (ulong)ppuVar8 / (ulong)ppuVar14;
            }
            ppuVar8 = (undefined **)((long)ppuVar8 - uVar10 * (long)ppuVar14);
          }
          if (ppuVar8 != unaff_x26) break;
        }
      }
    }
  }
  plVar5 = (long *)0x38;
  __Znwm();
  uStack_1c8 = 0;
  *plVar5 = 0;
  plVar5[1] = (long)ppuVar11;
  uStack_1d8 = plVar5;
  uStack_1d0 = ppuVar1;
  if (*(char *)(param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(plVar5 + 2,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  }
  else {
    lVar16 = *(long *)(param_2 + 0x18);
    plVar5[3] = *(long *)(param_2 + 0x20);
    plVar5[2] = lVar16;
    plVar5[4] = *(long *)(param_2 + 0x28);
  }
  plVar5[6] = (long)ppuStack_1e8;
  plVar5[5] = (long)ppuStack_1f0;
  if (ppuStack_1e8 != (undefined **)0x0) {
    ppuVar8 = ppuStack_1e8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar3) {
        *ppuVar8 = *ppuVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_1c8 = CONCAT71(uStack_1c8._1_7_,1);
  fVar15 = (float)(*(long *)(lVar7 + 0x3b8) + 1);
  if ((ppuVar14 == (undefined **)0x0) || (*(float *)(lVar7 + 0x3c0) * (float)ppuVar14 < fVar15)) {
    uVar13 = 1;
    if ((undefined **)0x2 < ppuVar14) {
      uVar13 = (ulong)(((ulong)ppuVar14 & (long)ppuVar14 - 1U) != 0);
    }
    uVar13 = uVar13 | (long)ppuVar14 << 1;
    uVar10 = (ulong)(fVar15 / *(float *)(lVar7 + 0x3c0));
    if (uVar13 <= uVar10) {
      uVar13 = uVar10;
    }
    FUN_10aa086b4(ppuVar1,uVar13);
    ppuVar14 = *(undefined ***)(lVar7 + 0x3a8);
    if (((ulong)ppuVar14 & (long)ppuVar14 - 1U) == 0) {
      unaff_x26 = (undefined **)((long)ppuVar14 - 1U & (ulong)ppuVar11);
    }
    else {
      unaff_x26 = ppuVar11;
      if (ppuVar14 <= ppuVar11) {
        uVar13 = 0;
        if (ppuVar14 != (undefined **)0x0) {
          uVar13 = (ulong)ppuVar11 / (ulong)ppuVar14;
        }
        unaff_x26 = (undefined **)((long)ppuVar11 - uVar13 * (long)ppuVar14);
      }
    }
  }
  puVar9 = *ppuVar1;
  plVar5 = *(long **)(puVar9 + (long)unaff_x26 * 8);
  if (plVar5 == (long *)0x0) {
    *uStack_1d8 = *(long *)(lVar7 + 0x3b0);
    *(long **)(lVar7 + 0x3b0) = uStack_1d8;
    *(long *)(puVar9 + (long)unaff_x26 * 8) = lVar7 + 0x3b0;
    if (*uStack_1d8 != 0) {
      ppuVar11 = *(undefined ***)(*uStack_1d8 + 8);
      if (((ulong)ppuVar14 & (long)ppuVar14 - 1U) == 0) {
        ppuVar11 = (undefined **)((ulong)ppuVar11 & (long)ppuVar14 - 1U);
      }
      else if (ppuVar14 <= ppuVar11) {
        uVar13 = 0;
        if (ppuVar14 != (undefined **)0x0) {
          uVar13 = (ulong)ppuVar11 / (ulong)ppuVar14;
        }
        ppuVar11 = (undefined **)((long)ppuVar11 - uVar13 * (long)ppuVar14);
      }
      *(long **)(*ppuVar1 + (long)ppuVar11 * 8) = uStack_1d8;
    }
  }
  else {
    *uStack_1d8 = *plVar5;
    *plVar5 = (long)uStack_1d8;
  }
  *(long *)(lVar7 + 0x3b8) = *(long *)(lVar7 + 0x3b8) + 1;
LAB_10ac4aeb8:
  __ZNSt3__15mutex6unlockEv(lVar7 + 0x338);
  if (plVar12 != (long *)0x0) {
    plVar5 = plVar12 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  ppuVar1 = ppuStack_1e8;
  if (ppuStack_1e8 != (undefined **)0x0) {
    ppuVar11 = ppuStack_1e8 + 1;
    do {
      puVar9 = *ppuVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar3) {
        *ppuVar11 = puVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar9 == (undefined *)0x0) {
      (**(code **)(*ppuStack_1e8 + 0x10))(ppuStack_1e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar1);
    }
  }
  return;
}



/* Entry: 10ac4ab60; end: 10ac4af97;  */

void FUN_10ac4ab60(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *unaff_x26;
  float fVar13;
  long lStack_d0;
  long *plStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  long *plStack_70;
  long *plStack_68;
  
  plStack_c8 = (long *)param_1[1];
  lStack_d0 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  lVar11 = *(long *)(param_2 + 0x10);
  plVar9 = *(long **)(lStack_d0 + 0x268);
  plVar8 = *(long **)(lStack_d0 + 0x270);
  if (plVar8 != (long *)0x0) {
    plVar7 = plVar8 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plStack_70 = plVar9;
  plStack_68 = plVar8;
  (**(code **)(*plVar9 + 0x90))(&fStack_94,plVar9);
  uStack_b8 = (long *)CONCAT44(fStack_8c + (fStack_94 * 0.0 - fStack_90),
                               fStack_94 + fStack_90 * 0.0 + fStack_8c * 0.0);
  uStack_b0 = (long *)CONCAT44(fStack_88 + fStack_84 * 0.0 + fStack_80 * 0.0,
                               fStack_8c + fStack_90 * 0.0 + fStack_94 * 0.0);
  uStack_a8 = CONCAT44(fStack_80 + fStack_84 * 0.0 + fStack_88 * 0.0,
                       fStack_80 + (fStack_88 * 0.0 - fStack_84));
  fStack_a0 = fStack_7c + fStack_78 * 0.0 + fStack_74 * 0.0;
  fStack_9c = fStack_74 + (fStack_7c * 0.0 - fStack_78);
  fStack_98 = fStack_74 + fStack_78 * 0.0 + fStack_7c * 0.0;
  (**(code **)(*plVar9 + 0x98))(plVar9,&uStack_b8);
  __ZNSt3__15mutex4lockEv(lVar11 + 0x338);
  func_0x00010a04a704(lVar11 + 0x308,&lStack_d0);
  *(byte *)(lVar11 + 0x2a8) = *(byte *)(lVar11 + 0x2a8) | 2;
  func_0x00010596ff64(lVar11 + 0x378,param_2 + 0x18);
  plVar9 = (long *)(lVar11 + 0x3a0);
  plVar7 = plVar9;
  func_0x000107c2b05c(plVar9,param_2 + 0x18);
  plVar12 = *(long **)(lVar11 + 0x3a8);
  if (plVar12 != (long *)0x0) {
    uVar10 = (long)plVar12 - 1;
    if (((ulong)plVar12 & uVar10) == 0) {
      unaff_x26 = (long *)(uVar10 & (ulong)plVar7);
    }
    else {
      unaff_x26 = plVar7;
      if (plVar12 <= plVar7) {
        uVar6 = 0;
        if (plVar12 != (long *)0x0) {
          uVar6 = (ulong)plVar7 / (ulong)plVar12;
        }
        unaff_x26 = (long *)((long)plVar7 - uVar6 * (long)plVar12);
      }
    }
    plVar3 = *(long **)(*plVar9 + (long)unaff_x26 * 8);
    if (plVar3 != (long *)0x0) {
      for (plVar3 = (long *)*plVar3; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar7) {
          plVar4 = plVar9;
          func_0x000107c2b068(plVar9,plVar3 + 2,param_2 + 0x18);
          if (((ulong)plVar4 & 1) != 0) goto LAB_10ac4aeb8;
        }
        else {
          if (((ulong)plVar12 & uVar10) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar10);
          }
          else if (plVar12 <= plVar4) {
            uVar6 = 0;
            if (plVar12 != (long *)0x0) {
              uVar6 = (ulong)plVar4 / (ulong)plVar12;
            }
            plVar4 = (long *)((long)plVar4 - uVar6 * (long)plVar12);
          }
          if (plVar4 != unaff_x26) break;
        }
      }
    }
  }
  plVar3 = (long *)0x38;
  __Znwm();
  uStack_a8 = 0;
  *plVar3 = 0;
  plVar3[1] = (long)plVar7;
  uStack_b8 = plVar3;
  uStack_b0 = plVar9;
  if (*(char *)(param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(plVar3 + 2,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  }
  else {
    lVar5 = *(long *)(param_2 + 0x18);
    plVar3[3] = *(long *)(param_2 + 0x20);
    plVar3[2] = lVar5;
    plVar3[4] = *(long *)(param_2 + 0x28);
  }
  plVar3[6] = (long)plStack_c8;
  plVar3[5] = lStack_d0;
  if (plStack_c8 != (long *)0x0) {
    plVar3 = plStack_c8 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_a8 = CONCAT71(uStack_a8._1_7_,1);
  fVar13 = (float)(*(long *)(lVar11 + 0x3b8) + 1);
  if ((plVar12 == (long *)0x0) || (*(float *)(lVar11 + 0x3c0) * (float)plVar12 < fVar13)) {
    uVar10 = 1;
    if ((long *)0x2 < plVar12) {
      uVar10 = (ulong)(((ulong)plVar12 & (long)plVar12 - 1U) != 0);
    }
    uVar10 = uVar10 | (long)plVar12 << 1;
    uVar6 = (ulong)(fVar13 / *(float *)(lVar11 + 0x3c0));
    if (uVar10 <= uVar6) {
      uVar10 = uVar6;
    }
    FUN_10aa086b4(plVar9,uVar10);
    plVar12 = *(long **)(lVar11 + 0x3a8);
    if (((ulong)plVar12 & (long)plVar12 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar12 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x26 = plVar7;
      if (plVar12 <= plVar7) {
        uVar10 = 0;
        if (plVar12 != (long *)0x0) {
          uVar10 = (ulong)plVar7 / (ulong)plVar12;
        }
        unaff_x26 = (long *)((long)plVar7 - uVar10 * (long)plVar12);
      }
    }
  }
  lVar5 = *plVar9;
  plVar7 = *(long **)(lVar5 + (long)unaff_x26 * 8);
  if (plVar7 == (long *)0x0) {
    *uStack_b8 = *(long *)(lVar11 + 0x3b0);
    *(long **)(lVar11 + 0x3b0) = uStack_b8;
    *(long *)(lVar5 + (long)unaff_x26 * 8) = lVar11 + 0x3b0;
    if (*uStack_b8 != 0) {
      plVar7 = *(long **)(*uStack_b8 + 8);
      if (((ulong)plVar12 & (long)plVar12 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar12 - 1U);
      }
      else if (plVar12 <= plVar7) {
        uVar10 = 0;
        if (plVar12 != (long *)0x0) {
          uVar10 = (ulong)plVar7 / (ulong)plVar12;
        }
        plVar7 = (long *)((long)plVar7 - uVar10 * (long)plVar12);
      }
      *(long **)(*plVar9 + (long)plVar7 * 8) = uStack_b8;
    }
  }
  else {
    *uStack_b8 = *plVar7;
    *plVar7 = (long)uStack_b8;
  }
  *(long *)(lVar11 + 0x3b8) = *(long *)(lVar11 + 0x3b8) + 1;
LAB_10ac4aeb8:
  __ZNSt3__15mutex6unlockEv(lVar11 + 0x338);
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 1;
    do {
      lVar11 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar9 = plStack_c8 + 1;
    do {
      lVar11 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return;
}



/* Entry: 10ac4af98; end: 10ac4b013;  */

void FUN_10ac4af98(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x27)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10ac4b014; end: 10ac4b0ef;  */

void FUN_10ac4b014(long *param_1,long param_2)

{
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_2 + 0x10);
  if ((bRam000000011330a9e8 & 1) != 0) {
    plVar2 = (long *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      plVar2 = param_1;
    }
    func_0x00010ae06f08(0,1,&UNK_10f69de6e,&UNK_10f69df93,0x11e,&UNK_10f69e07f,in_x6,in_x7,plVar2);
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f69de6e,&UNK_10f69df93,0x11f,&UNK_10f69e0cf,in_x6,in_x7,plVar2)
      ;
    }
  }
  __ZNSt3__15mutex4lockEv(lVar1 + 0x338);
  func_0x00010596ff64(lVar1 + 0x378,param_2 + 0x18);
  *(undefined1 *)(lVar1 + 0x304) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar1 + 0x338);
  return;
}



/* Entry: 10ac4b0f0; end: 10ac4b1e7;  */

void FUN_10ac4b0f0(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x27)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10ac4b1e8; end: 10ac4b2ab;  */

void FUN_10ac4b1e8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac4b2ac(param_2,param_3);
  FUN_10a052e3c(param_5);
  *(undefined4 *)(param_2 + 0x7f) = 2;
  if ((*(byte *)((long)param_2 + 0x3fc) & 1) == 0) {
    func_0x00010ac8a3ac(param_2 + 0x69);
  }
  *param_1 = 0;
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



/* Entry: 10ac4b2ac; end: 10ac4b313;  */

void FUN_10ac4b2ac(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10ac4b2ac(plVar4,param_2);
  FUN_10a052e3c(param_4);
  *(undefined4 *)(plVar4 + 0x7f) = 3;
  if ((*(byte *)((long)plVar4 + 0x3fc) & 1) == 0) {
    func_0x00010ac8a3ec(plVar4 + 0x69);
  }
  *extraout_x8 = 0;
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



/* Entry: 10ac4b314; end: 10ac4b3d7;  */

void FUN_10ac4b314(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac4b2ac(param_2,param_3);
  FUN_10a052e3c(param_5);
  *(undefined4 *)(param_2 + 0x7f) = 3;
  if ((*(byte *)((long)param_2 + 0x3fc) & 1) == 0) {
    func_0x00010ac8a3ec(param_2 + 0x69);
  }
  *param_1 = 0;
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



/* Entry: 10ac4b3d8; end: 10ac4b497;  */

void FUN_10ac4b3d8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac4b2ac(param_2,param_3);
  FUN_10a052e3c(param_5);
  *(undefined4 *)(param_2 + 0x7f) = 0;
  func_0x00010ac8a284(param_2 + 0x69);
  func_0x00010ac8a20c(param_2 + 0x69);
  *param_1 = 0;
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



/* Entry: 10ac4b498; end: 10ac4b577;  */

void FUN_10ac4b498(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
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
  FUN_10ac4b2ac(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  bVar7 = 0x10;
  if ((int)param_2 == 0) {
    bVar7 = 0;
  }
  *(byte *)(plVar4 + 0x69) = *(byte *)(plVar4 + 0x69) & 0xef | bVar7;
  func_0x00010ac8a2ec(plVar4 + 0x69);
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



/* Entry: 10ac4b578; end: 10ac4b673;  */

void FUN_10ac4b578(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
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
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10ac4b2ac(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10ac4b660);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  cVar4 = (char)param_2 + 'H';
  FUN_10ac8a47c(fVar2);
  *param_1 = 2;
  *(char *)(param_1 + 2) = cVar4;
  plVar1 = plVar6 + 0x4b;
  lVar7 = plVar6[0x59];
  uVar8 = lVar7 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar1[lVar7 + 2];
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
  lVar7 = *plVar1;
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
        plStack_68 = plVar1;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar5 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar1 = lVar11;
          plVar6[0x4c] = lVar12 + uVar15 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
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



/* Entry: 10ac4b674; end: 10ac4b67b;  */

undefined8 * FUN_10ac4b674(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = *(long **)(param_1 + 0x408);
  *(undefined8 *)(param_1 + 0x408) = uVar7;
  *(undefined8 *)(param_1 + 0x400) = uVar6;
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
  return (undefined8 *)(param_1 + 0x400);
}



/* Entry: 10ac4b67c; end: 10ac4b733;  */

void FUN_10ac4b67c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac4b734(param_1,param_2,FUN_10ac4b674,0,param_3,param_4,param_5);
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



/* Entry: 10ac4b734; end: 10ac4b85f;  */

void FUN_10ac4b734(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  lVar5 = param_2;
  FUN_10ac4b2ac(param_2,param_5);
  FUN_10a2fbdf0(param_7);
  FUN_10a05dcbc(&uStack_70,param_2,param_6);
  plVar2 = (long *)(lVar5 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar2 + ((ulong)param_3 & 0xffffffff));
  }
  plStack_58 = plStack_68;
  uStack_60 = uStack_70;
  uStack_70 = 0;
  plStack_68 = (long *)0x0;
  (*param_3)(plVar2,&uStack_60);
  plVar2 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10ac4b860; end: 10ac4b867;  */

undefined8 * FUN_10ac4b860(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = *(long **)(param_1 + 0x418);
  *(undefined8 *)(param_1 + 0x418) = uVar7;
  *(undefined8 *)(param_1 + 0x410) = uVar6;
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
  return (undefined8 *)(param_1 + 0x410);
}



/* Entry: 10ac4b868; end: 10ac4b91f;  */

void FUN_10ac4b868(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac4b734(param_1,param_2,FUN_10ac4b860,0,param_3,param_4,param_5);
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



/* Entry: 10ac4b920; end: 10ac4b9e3;  */

void FUN_10ac4b920(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac4bafc(param_2,param_3);
  FUN_10a052e3c(param_5);
  func_0x00010ac8a2ec(param_2 + 0x69);
  fVar14 = *(float *)(param_2 + 0x6a);
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



/* Entry: 10ac4b9e4; end: 10ac4bafb;  */

void FUN_10ac4b9e4(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  float fVar15;
  float fVar16;
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
  FUN_10ac4b2ac(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10ac4bae8);
    (*pcVar3)();
  }
  fVar15 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar15 = 0.0;
  }
  fVar16 = 1.0;
  if (fVar15 <= 1.0) {
    fVar16 = fVar15;
  }
  fVar2 = 0.0;
  if (0.0 <= fVar15) {
    fVar2 = fVar16;
  }
  *(float *)(param_2 + 0x6a) = fVar2;
  *(byte *)(param_2 + 0x69) = *(byte *)(param_2 + 0x69) | 4;
  func_0x00010ac8a2ec(param_2 + 0x69);
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



/* Entry: 10ac4bafc; end: 10ac4bb63;  */

void FUN_10ac4bafc(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10ac4bafc(plVar4,param_2);
  FUN_10a052e3c(param_4);
  func_0x00010ac8a2ec(plVar4 + 0x69);
  fVar15 = *(float *)((long)plVar4 + 0x354);
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



/* Entry: 10ac4bb64; end: 10ac4bc27;  */

void FUN_10ac4bb64(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac4bafc(param_2,param_3);
  FUN_10a052e3c(param_5);
  func_0x00010ac8a2ec(param_2 + 0x69);
  fVar14 = *(float *)((long)param_2 + 0x354);
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



/* Entry: 10ac4bc28; end: 10ac4bd3f;  */

void FUN_10ac4bc28(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  float fVar15;
  float fVar16;
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
  FUN_10ac4b2ac(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10ac4bd2c);
    (*pcVar3)();
  }
  fVar15 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar15 = 0.0;
  }
  fVar16 = 1.0;
  if (fVar15 <= 1.0) {
    fVar16 = fVar15;
  }
  fVar2 = 0.0;
  if (0.0 <= fVar15) {
    fVar2 = fVar16;
  }
  *(float *)((long)param_2 + 0x354) = fVar2;
  *(byte *)(param_2 + 0x69) = *(byte *)(param_2 + 0x69) | 4;
  func_0x00010ac8a2ec(param_2 + 0x69);
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



/* Entry: 10ac4bd40; end: 10ac4bdfb;  */

void FUN_10ac4bd40(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac4bafc(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 0x34c);
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



/* Entry: 10ac4bdfc; end: 10ac4beef;  */

void FUN_10ac4bdfc(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
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
  FUN_10ac4b2ac(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10ac4bedc);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  func_0x00010ac8a42c(fVar2,param_2 + 0x69);
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



/* Entry: 10ac4bef0; end: 10ac4bfab;  */

void FUN_10ac4bef0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  byte bVar2;
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
  FUN_10ac4bafc(param_2,param_3);
  FUN_10a052e3c(param_5);
  bVar2 = *(byte *)(param_2 + 0x69);
  *param_1 = 2;
  *(byte *)(param_1 + 2) = bVar2 >> 4 & 1;
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



/* Entry: 10ac4bfac; end: 10ac4c073;  */

void FUN_10ac4bfac(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
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
  FUN_10ac4bafc(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar6 = (long)*(char *)((long)param_2 + 0x2a7);
  if (lVar6 < 0) {
    lVar6 = param_2[0x53];
  }
  *param_1 = 2;
  *(bool *)(param_1 + 2) = lVar6 != 0;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar5 = lVar6 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar6 + 2];
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
  lVar6 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar6;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar6 >> 3;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar6)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar6,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
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
    lVar6 = lVar6 + uVar5 * 0x10;
    while (lVar10 != lVar6) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10ac4c074; end: 10ac4c12f;  */

void FUN_10ac4c074(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  byte bVar2;
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
  FUN_10ac4bafc(param_2,param_3);
  FUN_10a052e3c(param_5);
  bVar2 = *(byte *)(param_2 + 0x69);
  *param_1 = 2;
  *(byte *)(param_1 + 2) = bVar2 >> 3 & 1;
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



/* Entry: 10ac4c130; end: 10ac4c1f7;  */

void FUN_10ac4c130(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac4bafc(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar4 = (long *)param_2[0x6e];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x60))();
  }
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)plVar4;
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



/* Entry: 10ac4c1f8; end: 10ac4c2bb;  */

void FUN_10ac4c1f8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac4bafc(param_2,param_3);
  FUN_10a052e3c(param_5);
  func_0x00010ac8a2ec(param_2 + 0x69);
  fVar14 = *(float *)(param_2 + 0x73);
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



/* Entry: 10ac4c2bc; end: 10ac4c38f;  */

void FUN_10ac4c2bc(undefined4 *param_1,float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

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
  
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10ac4bafc(param_3,param_4);
  FUN_10a052e3c(param_6);
  if ((long *)param_3[0x6e] == (long *)0x0) {
    param_2 = 0.0;
  }
  else {
    (**(code **)(*(long *)param_3[0x6e] + 0x70))();
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)param_2;
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



/* Entry: 10ac4c390; end: 10ac4c44b;  */

void FUN_10ac4c390(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac4bafc(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 0x74);
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



/* Entry: 10ac4c44c; end: 10ac4c547;  */

undefined1  [16] FUN_10ac4c44c(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c5a9c8;
  puVar1 = &UNK_10f69b9ca;
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
    ppuStack_40 = &PTR_DAT_110c5a9c8;
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



/* Entry: 10ac4c548; end: 10ac4c5b7;  */

ulong FUN_10ac4c548(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    uVar2 = *param_2;
    FUN_10a05ef6c(param_1,&PTR_DAT_110c5e0e0,FUN_10ac4c5b8);
    FUN_10a0605c4(param_1,uVar2,FUN_10ac4d3c0,0);
  }
  return param_1;
}



/* Entry: 10ac4c5b8; end: 10ac4c7bf;  */

void FUN_10ac4c5b8(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c0,&UNK_10e509241,0x81);
  pppuVar1 = (undefined ***)appuStack_c0[0];
  if (-1 < cStack_a9) {
    pppuVar1 = appuStack_c0;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c5e0e0;
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
    ppuStack_40 = &PTR_DAT_110c5e0e0;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac4c7a0;
    FUN_10a054dac(param_1,&DAT_10f68571c,FUN_10ac4c9e0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac4c7a0;
    FUN_10a054dac(param_1,&DAT_10f685720,FUN_10ac4d2a4,2,*(undefined8 *)(param_1 + 0x40));
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
LAB_10ac4c7a0:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10ac4c7a4);
  (*pcVar9)();
}



/* Entry: 10ac4c7c0; end: 10ac4c98f;  */

void FUN_10ac4c7c0(long *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar5 = param_1;
  plVar7 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 > param_2 || param_2 == plVar10) {
    if (plVar10 <= param_2) {
      return;
    }
    plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar5) {
      plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar10 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar5 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar5 * 8) = 0;
      plVar5 = (long *)((long)plVar5 + 1);
    } while (param_2 != plVar5);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      plVar7 = (long *)plVar5[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        plVar7 = (long *)((ulong)plVar7 & uVar6);
      }
      else if (param_2 <= plVar7) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)param_2;
        }
        plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar5;
      while (plVar10 != (long *)0x0) {
        plVar9 = (long *)plVar10[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar6);
        }
        else if (param_2 <= plVar9) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)param_2;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
        }
        plVar8 = plVar10;
        if (plVar9 != plVar7) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar9 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar9 * 8) = plVar5;
            plVar7 = plVar9;
          }
          else {
            *plVar5 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar9 * 8);
            **(long **)(lVar3 + (long)plVar9 * 8) = (long)plVar10;
            plVar8 = plVar5;
          }
        }
        plVar5 = plVar8;
        plVar10 = (long *)*plVar8;
      }
    }
    return;
  }
  func_0x000109ffded8();
  if (((ulong)plVar5 & 1) != 0) {
    if (3 < (ulong)*(byte *)(plVar7 + 0xc)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10ac4c9e0);
      (*pcVar2)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar7 + 0xc)])(plVar7 + 4);
    FUN_10a004978(plVar7 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar7);
  return;
}



/* Entry: 10ac4c990; end: 10ac4c9df;  */

void FUN_10ac4c990(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac4c9e0);
      (*pcVar1)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
    FUN_10a004978(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10ac4c9e0; end: 10ac4cfdb;  */

/* WARNING: Possible PIC construction at 0x00010ac4cfd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ac4cfd4) */
/* WARNING: Removing unreachable block (ram,0x00010ac4cff4) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d004) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d02c) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d038) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d050) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d088) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d0b4) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d0a0) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d0a8) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d0b8) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d0c0) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d0d0) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d0dc) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d0fc) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d0e8) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d0f0) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d100) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d108) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d10c) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d130) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d118) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d124) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d134) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d13c) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d144) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d148) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d14c) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d168) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d154) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d15c) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d16c) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d174) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d180) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d19c) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d1c4) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d1ac) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d04c) */
/* WARNING: Removing unreachable block (ram,0x00010ac4d020) */

void FUN_10ac4c9e0(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
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
  long *unaff_x21;
  long lVar17;
  long *unaff_x22;
  long lVar18;
  long lVar19;
  long *unaff_x23;
  long *plVar20;
  long lVar21;
  long *unaff_x24;
  long *plVar22;
  ulong unaff_x25;
  ulong uVar23;
  ulong unaff_x26;
  ulong uVar24;
  long *unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  byte bStack_70;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_2;
  uStack_e8 = param_1;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  FUN_10ac4cfdc(param_2,param_3);
  FUN_10ac4d044(param_5);
  if (*param_4 == 7) {
    plVar11 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar12 = param_2;
    plStack_c0 = plVar11;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_c0);
    if ((int)plVar12 != 0) {
      plVar11 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar10 = plVar11[0x48];
      if ((lVar10 == 0) ||
         (___dynamic_cast(lVar10,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar11 = plStack_c0,
         lVar10 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10ac4cfc4;
      }
      plStack_c0 = (long *)0x0;
      lStack_a8 = CONCAT44(lStack_a8._4_4_,7);
      plStack_a0 = plVar11;
      plStack_b0 = param_2;
      FUN_10a688ac0(&plStack_e0,&plStack_b0,*(undefined8 *)(lVar10 + 8));
      if ((3 < (int)lStack_a8) && (plStack_a0 != (long *)0x0)) {
        (**(code **)*plStack_a0)();
      }
    }
    if (plStack_c0 != (long *)0x0) {
      (**(code **)*plStack_c0)();
    }
    if (((ulong)plVar12 & 1) != 0) {
      plStack_b0 = plStack_e0;
      lStack_a8 = lStack_d8;
      if (lStack_d8 != 0) {
        plVar11 = (long *)(lStack_d8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_98 = lStack_c8;
      plStack_a0 = plStack_d0;
      if (lStack_c8 != 0) {
        plVar11 = (long *)(lStack_c8 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      bStack_70 = 2;
      plVar11 = (long *)0x30;
      __Znwm();
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
      uVar14 = unaff_x28;
      plStack_c0 = plVar22;
      plStack_b8 = plVar11;
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
        puVar15 = *(undefined8 **)(plVar9[3] + uVar14 * 8);
        if (puVar15 != (undefined8 *)0x0) {
          for (plVar20 = (long *)*puVar15; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
            uVar16 = plVar20[1];
            if (uVar16 == uVar24) {
              if ((long *)plVar20[2] == plVar22) goto LAB_10ac4cd80;
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
      plVar20 = (long *)0x68;
      __Znwm();
      *plVar20 = 0;
      plVar20[1] = uVar24;
      plVar20[2] = (long)plVar22;
      plVar20[3] = (long)plVar11;
      plStack_c0 = (long *)0x0;
      plStack_b8 = (long *)0x0;
      *(undefined1 *)(plVar20 + 0xc) = 3;
      plVar20[4] = (long)plStack_e0;
      plVar20[5] = lStack_a8;
      if (lStack_a8 != 0) {
        plVar12 = (long *)(lStack_a8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar20[7] = lStack_98;
      plVar20[6] = (long)plStack_a0;
      if (lStack_98 != 0) {
        plVar12 = (long *)(lStack_98 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(byte *)(plVar20 + 0xc) = bStack_70;
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
        FUN_10ac4c7c0(plVar9 + 3,uVar14);
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
      lVar10 = plVar9[3];
      plVar12 = *(long **)(lVar10 + uVar14 * 8);
      if (plVar12 == (long *)0x0) {
        plVar12 = plVar9 + 5;
        *plVar20 = *plVar12;
        *plVar12 = (long)plVar20;
        *(long **)(lVar10 + uVar14 * 8) = plVar12;
        if (*plVar20 != 0) {
          uVar13 = *(ulong *)(*plVar20 + 8);
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
          plVar12 = (long *)(plVar9[3] + uVar13 * 8);
          goto LAB_10ac4ce24;
        }
      }
      else {
        *plVar20 = *plVar12;
LAB_10ac4ce24:
        *plVar12 = (long)plVar20;
      }
      plVar9[6] = plVar9[6] + 1;
      goto LAB_10ac4ce34;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
  goto LAB_10ac4cfc4;
LAB_10ac4cd80:
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
LAB_10ac4ce34:
  if (*(char *)(plVar9[9] + 8) == '\x01') {
    (*(code *)plVar9[8])(plVar9);
  }
  plStack_b8 = (long *)plVar20[3];
  plStack_c0 = (long *)plVar20[2];
  if (plVar20[3] != 0) {
    plVar12 = (long *)(plVar20[3] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((ulong)bStack_70 < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[bStack_70])(&plStack_b0);
    FUN_10a688c1c(&plStack_e0);
    FUN_10a05ff7c(uStack_e8,param_2,&plStack_c0);
    plVar12 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar2 = plStack_b8 + 1;
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
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_2 = plVar12;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      FUN_10ac4c990(1,plVar20);
      FUN_10a004978(&plStack_c0);
      if (3 < (ulong)bStack_70) goto LAB_10ac4cfc4;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_70])(&plStack_b0);
      FUN_10a688c1c(&plStack_e0);
      unaff_x30 = 0x10ac4cfd4;
      register0x00000008 = (BADSPACEBASE *)auStack_f0;
      unaff_x19 = plVar8;
      unaff_x20 = param_2;
      unaff_x21 = plVar11;
      unaff_x22 = plVar9;
      unaff_x23 = plVar20;
      unaff_x24 = plVar22;
      unaff_x25 = uVar23;
      unaff_x26 = uVar24;
      unaff_x27 = plStack_e0;
      unaff_x28 = uVar14;
      unaff_x29 = puVar1;
    }
    plVar9 = plVar8 + 0x4b;
    lVar10 = plVar8[0x59];
    uVar14 = lVar10 - 1;
    plVar8[0x59] = uVar14;
    if (uVar14 < 8) {
      uVar14 = plVar9[lVar10 + 2];
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
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    lVar10 = *plVar9;
    lVar19 = plVar8[0x4c];
    lVar17 = lVar19 - lVar10;
    uVar23 = lVar17 >> 4;
    if (uVar23 < uVar14) {
      uVar24 = uVar14 - uVar23;
      lVar21 = plVar8[0x4d];
      if ((ulong)(lVar21 - lVar19 >> 4) < uVar24) {
        if (uVar14 >> 0x3c == 0) {
          uVar13 = lVar21 - lVar10 >> 3;
          if (uVar13 <= uVar14) {
            uVar13 = uVar14;
          }
          if (0x7fffffffffffffef < (ulong)(lVar21 - lVar10)) {
            uVar13 = 0xfffffffffffffff;
          }
          *(long **)((long)register0x00000008 + -0x68) = plVar9;
          if (uVar13 >> 0x3c == 0) {
            lVar7 = uVar13 << 4;
            __Znwm();
            lVar19 = lVar7 + lVar17;
            _bzero(lVar19,uVar24 * 0x10);
            lVar18 = lVar19 + uVar23 * -0x10;
            _memcpy(lVar18,lVar10,lVar17);
            *plVar9 = lVar18;
            plVar8[0x4c] = lVar19 + uVar24 * 0x10;
            plVar8[0x4d] = lVar7 + uVar13 * 0x10;
            *(long *)((long)register0x00000008 + -0x78) = lVar10;
            *(long *)((long)register0x00000008 + -0x70) = lVar21;
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
      plVar8[0x4c] = lVar19 + uVar24 * 0x10;
    }
    else if (uVar14 < uVar23) {
      lVar10 = lVar10 + uVar14 * 0x10;
      while (lVar19 != lVar10) {
        lVar19 = lVar19 + -0x10;
        func_0x00010988c204(lVar19);
      }
      plVar8[0x4c] = lVar10;
    }
code_r0x00010988c138:
    plVar8[0x5a] = uVar14;
    return;
  }
LAB_10ac4cfc4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac4cfc8);
  (*pcVar6)();
}


