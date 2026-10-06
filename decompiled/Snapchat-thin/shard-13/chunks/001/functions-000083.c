/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a06b12c; end: 10a06b1e3;  */

void FUN_10a06b12c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a06b1e4(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[3];
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



/* Entry: 10a06b1e4; end: 10a06b29f;  */

undefined ** FUN_10a06b1e4(undefined **param_1,undefined **param_2)

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
    FUN_10a0605c4(ppuVar1,*param_2,FUN_10a06b2a0,0);
  }
  return ppuVar1;
}



/* Entry: 10a06b2a0; end: 10a06b35b;  */

void FUN_10a06b2a0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a06b1e4(param_2,param_3);
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



/* Entry: 10a06b35c; end: 10a06b417;  */

void FUN_10a06b35c(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6340dd,0xe);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a06b418);
  (*pcVar4)();
}



/* Entry: 10a06b418; end: 10a06b513;  */

undefined1  [16] FUN_10a06b418(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110b9c608;
  puVar1 = &UNK_10f630f1d;
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
    ppuStack_40 = &PTR_DAT_110b9c608;
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



/* Entry: 10a06b514; end: 10a06b577;  */

ulong FUN_10a06b514(ulong param_1,undefined8 *param_2)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a06b578);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a06b578,2,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a06b578; end: 10a06b73b;  */

void FUN_10a06b578(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
      FUN_10a06b73c(param_5);
      plVar6 = param_2;
      func_0x000109898518(param_2,param_4);
      lVar14 = plVar7[10];
      *(int *)(lVar14 + 0x288) = *(int *)(lVar14 + 0x288) + 1;
      plVar7 = (long *)0x40;
      __Znwm();
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_110b9e0c8;
      plVar7[4] = 0;
      plVar7[5] = 0;
      plVar7[3] = (long)&PTR_FUN_110b9b7e0;
      *(undefined1 *)(plVar7 + 6) = 1;
      *(int *)((long)plVar7 + 0x34) = (int)plVar6;
      plVar7[7] = lVar14 + 0x280;
      func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
      if (plVar7 != (long *)0x0) {
        plVar6 = plVar7 + 1;
        do {
          lVar14 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar14 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      plVar6 = plVar5 + 0x4b;
      lVar14 = plVar5[0x59];
      uVar9 = lVar14 - 1;
      plVar5[0x59] = uVar9;
      if (uVar9 < 8) {
        uVar9 = plVar6[lVar14 + 2];
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
      lVar14 = *plVar6;
      lVar13 = plVar5[0x4c];
      lVar11 = lVar13 - lVar14;
      uVar16 = lVar11 >> 4;
      if (uVar16 < uVar9) {
        uVar17 = uVar9 - uVar16;
        lVar15 = plVar5[0x4d];
        if ((ulong)(lVar15 - lVar13 >> 4) < uVar17) {
          if (uVar9 >> 0x3c == 0) {
            uVar10 = lVar15 - lVar14 >> 3;
            if (uVar10 <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x7fffffffffffffef < (ulong)(lVar15 - lVar14)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar6;
            if (uVar10 >> 0x3c == 0) {
              lVar4 = uVar10 << 4;
              __Znwm();
              lVar13 = lVar4 + lVar11;
              _bzero(lVar13,uVar17 * 0x10);
              lVar12 = lVar13 + uVar16 * -0x10;
              _memcpy(lVar12,lVar14,lVar11);
              *plVar6 = lVar12;
              plVar5[0x4c] = lVar13 + uVar17 * 0x10;
              plVar5[0x4d] = lVar4 + uVar10 * 0x10;
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
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar3)();
        }
        _bzero(lVar13,uVar17 * 0x10);
        plVar5[0x4c] = lVar13 + uVar17 * 0x10;
      }
      else if (uVar9 < uVar16) {
        lVar14 = lVar14 + uVar9 * 0x10;
        while (lVar13 != lVar14) {
          lVar13 = lVar13 + -0x10;
          func_0x00010988c204(lVar13);
        }
        plVar5[0x4c] = lVar14;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar9;
      return;
    }
    puVar8 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar8);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a06b728);
  (*pcVar3)();
}



/* Entry: 10a06b73c; end: 10a06b75f;  */

void FUN_10a06b73c(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  undefined8 uStack_40;
  
  if ((int)param_1 == 1) {
    return;
  }
  uVar3 = 1;
  FUN_10a052ee0(1,0,param_1);
  *(undefined **)(uVar3 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(uVar3 + 0x170);
  if (*(long *)(uVar3 + 0x168) != lVar1) {
    uStack_98 = *(undefined8 *)(lVar1 + -0x60);
    uStack_a0 = *(undefined8 *)(lVar1 + -0x68);
    uStack_78 = *(undefined8 *)(lVar1 + -0x40);
    uStack_80 = *(undefined8 *)(lVar1 + -0x48);
    uStack_88 = *(undefined8 *)(lVar1 + -0x50);
    uStack_90 = *(undefined8 *)(lVar1 + -0x58);
    uStack_68 = *(undefined8 *)(lVar1 + -0x30);
    uStack_70 = *(undefined8 *)(lVar1 + -0x38);
    uStack_58 = *(undefined8 *)(lVar1 + -0x20);
    uStack_60 = *(undefined8 *)(lVar1 + -0x28);
    uStack_40 = *(undefined8 *)(lVar1 + -8);
    uStack_48 = *(undefined8 *)(lVar1 + -0x10);
    uStack_50 = *(undefined8 *)(lVar1 + -0x18);
    *(long *)(uVar3 + 0x170) = lVar1 + -0x68;
    uVar4 = uVar3;
    FUN_10a0051e8();
    if ((uVar4 & 1) == 0) {
      func_0x000109894f40(uVar3,0);
      FUN_10a054234(uVar3,&uStack_a0,uVar3 + 0x1b8,&UNK_10f6340f6,0x1b);
      FUN_10a05431c(uVar3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a06b81c);
  (*pcVar2)();
}



/* Entry: 10a06b760; end: 10a06b81b;  */

void FUN_10a06b760(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6340f6,0x1b);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a06b81c);
  (*pcVar4)();
}



/* Entry: 10a06b81c; end: 10a06b82b;  */

void FUN_10a06b81c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9e0c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a06b82c; end: 10a06b84b;  */

void FUN_10a06b82c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9e0c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a06b84c; end: 10a06b857;  */

undefined8 * FUN_10a06b84c(long param_1)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar1 = *(uint *)(param_1 + 0x34);
    if (uVar1 < 6) {
      uVar3 = *(undefined8 *)(&UNK_10e492f48 + (ulong)uVar1 * 8);
      puVar4 = (&PTR_DAT_110b9fe88)[uVar1];
    }
    else {
      puVar4 = &UNK_10f6340ec;
      uVar3 = 9;
    }
    FUN_10ae03140(0,puVar4,uVar3);
    ppuVar2 = &PTR_PTR_1132ff660;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar2,&PTR_PTR_1132ff660);
    if (*(char *)(param_1 + 0x30) == '\x01') {
      *(undefined1 *)(param_1 + 0x30) = 0;
      func_0x00010a031808(*(undefined8 *)(param_1 + 0x38));
    }
  }
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10a06b858; end: 10a06b9cb;  */

long FUN_10a06b858(long param_1)

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



/* Entry: 10a06b9cc; end: 10a06b9db;  */

void FUN_10a06b9cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9e118;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a06b9dc; end: 10a06b9fb;  */

void FUN_10a06b9dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9e118;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a06b9fc; end: 10a06ba2b;  */

void FUN_10a06b9fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a06ba04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a06ba2c; end: 10a06c123;  */

void FUN_10a06ba2c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte bVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_a8;
  long *plStack_a0;
  undefined8 **appuStack_98 [3];
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  if ((*(byte *)(plVar5 + 0x3c) & 1) == 0) {
LAB_10a06bf8c:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a06bf90);
    (*pcVar4)();
  }
  plVar12 = param_2;
  FUN_10a06c164(param_2,param_4);
  plVar6 = (long *)0xf8;
  __Znwm();
  plVar11 = plVar6 + 1;
  *plVar11 = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110b9e168;
  uStack_c8 = 0;
  uStack_c0 = 0;
  puStack_d0 = (undefined8 *)0x0;
  FUN_10a04b1d4(&puStack_d0,plVar12[6],plVar12[7],plVar12[7] - plVar12[6] >> 4);
  bVar9 = *(byte *)((long)plVar12 + 0x2f);
  if ((char)bVar9 < '\0') {
    func_0x000107c3192c(&lStack_f0,plVar12[3],plVar12[4]);
    bVar9 = *(byte *)((long)plVar12 + 0x2f);
  }
  else {
    lStack_e8 = plVar12[4];
    lStack_f0 = plVar12[3];
    lStack_e0 = plVar12[5];
  }
  uVar1 = plVar12[4];
  if (-1 < (char)bVar9) {
    uVar1 = (ulong)bVar9;
  }
  if (uVar1 == 0) {
    FUN_10a00946c(&UNK_10f634112);
    goto LAB_10a06bf8c;
  }
  if (plVar12[9] == 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (appuStack_98,&UNK_10f6329ad,plVar12 + 3);
    FUN_10a012db0(&puStack_80,appuStack_98,&UNK_10f63412f);
    FUN_10a0029c0(&puStack_80);
    goto LAB_10a06bf8c;
  }
  FUN_10a8c1a44(&lStack_a8);
  if (lStack_a8 == 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (appuStack_98,&UNK_10f6329ad,plVar12 + 3);
    FUN_10a012db0(&puStack_80,appuStack_98,&UNK_10f634140);
    FUN_10a0029c0(&puStack_80);
    goto LAB_10a06bf8c;
  }
  puVar7 = (undefined8 *)0xe0;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar8 = puVar7 + 3;
  *puVar7 = &PTR_FUN_110b9d530;
  FUN_109d2e134(puVar8,&lStack_a8);
  if (((long)(puVar7[0xd] - puVar7[0xc]) >> 3) * 0x2e8ba2e8ba2e8ba3 - (plVar12[7] - plVar12[6] >> 4)
      != 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (appuStack_98,&UNK_10f6329ad,plVar12 + 3);
    FUN_10a012db0(&puStack_80,appuStack_98,&UNK_10f63416b);
    FUN_10a0029c0(&puStack_80);
    goto LAB_10a06bf8c;
  }
  if (plStack_a0 != (long *)0x0) {
    plVar12 = plStack_a0 + 1;
    do {
      lVar10 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
    }
  }
  uStack_78 = uStack_c8;
  puStack_80 = puStack_d0;
  uStack_70 = uStack_c0;
  puStack_d0 = (undefined8 *)0x0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  FUN_10a10f1dc(plVar6 + 3,&puStack_80,((long)(puVar8[0xd] - puVar8[0xc]) >> 3) * 0x2e8ba2e8ba2e8ba3
               );
  appuStack_98[0] = &puStack_80;
  FUN_10a04afa0(appuStack_98);
  plVar13 = plVar6 + 0x14;
  plVar6[0x15] = 0;
  *plVar13 = 0;
  plVar6[3] = (long)&PTR_FUN_110b9b8d0;
  plVar12 = plVar6 + 6;
  *plVar12 = (long)&PTR_DAT_110b9b938;
  plVar6[0x10] = lStack_e8;
  plVar6[0xf] = lStack_f0;
  plVar6[0x11] = lStack_e0;
  lStack_f0 = 0;
  lStack_e8 = 0;
  lStack_e0 = 0;
  plVar6[0x12] = (long)puVar8;
  plVar6[0x13] = (long)puVar7;
  plVar6[0x17] = 0;
  plVar6[0x16] = 0;
  *(undefined4 *)(plVar6 + 0x18) = 0x3f800000;
  plVar14 = plVar6 + 0x19;
  plVar6[0x1a] = 0;
  *plVar14 = 0;
  plVar6[0x1c] = 0;
  plVar6[0x1b] = 0;
  *(undefined4 *)(plVar6 + 0x1d) = 0x3f800000;
  *(undefined4 *)(plVar6 + 0x1e) = 0;
  func_0x0001092407cc(plVar13,(long)(float)(ulong)(((long)(puVar8[10] - puVar8[9]) >> 3) *
                                                  0x2e8ba2e8ba2e8ba3));
  appuStack_98[0] = (undefined8 **)0x0;
  lVar10 = puVar8[9];
  if (puVar8[10] != lVar10) {
    do {
      lVar10 = lVar10 + (long)appuStack_98[0] * 0x58;
      func_0x000109567428(plVar13,lVar10,lVar10,appuStack_98);
      appuStack_98[0] = (undefined8 **)((long)appuStack_98[0] + 1);
      lVar10 = puVar8[9];
    } while (appuStack_98[0] < (undefined8 **)((puVar8[10] - lVar10 >> 3) * 0x2e8ba2e8ba2e8ba3));
  }
  func_0x0001092407cc(plVar14,(long)((float)(ulong)(((long)(puVar8[0xd] - puVar8[0xc]) >> 3) *
                                                   0x2e8ba2e8ba2e8ba3) / *(float *)(plVar6 + 0x1d)))
  ;
  appuStack_98[0] = (undefined8 **)0x0;
  lVar10 = puVar8[0xc];
  if (puVar8[0xd] != lVar10) {
    do {
      lVar10 = lVar10 + (long)appuStack_98[0] * 0x58;
      func_0x000109567428(plVar14,lVar10,lVar10,appuStack_98);
      appuStack_98[0] = (undefined8 **)((long)appuStack_98[0] + 1);
      lVar10 = puVar8[0xc];
    } while (appuStack_98[0] < (undefined8 **)((puVar8[0xd] - lVar10 >> 3) * 0x2e8ba2e8ba2e8ba3));
  }
  if (lStack_e0 < 0) {
    __ZdlPv(lStack_f0);
  }
  puStack_80 = &puStack_d0;
  FUN_10a04afa0(&puStack_80);
  if (plVar6[8] == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar13 = plVar6 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = *plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6[7] = (long)plVar12;
    plVar6[8] = (long)plVar6;
  }
  else {
    if (*(long *)(plVar6[8] + 8) != -1) goto LAB_10a06be44;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar13 = plVar6 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = *plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6[7] = (long)plVar12;
    plVar6[8] = (long)plVar6;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
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
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
LAB_10a06be44:
  plVar12 = (long *)plVar5[4];
  if (plVar12 == (long *)0x0) {
    func_0x000109899fd8(plVar5);
    plVar12 = (long *)plVar5[4];
  }
  plVar5[4] = *plVar12;
  *plVar12 = (long)&PTR_DAT_110b17478;
  plVar12[1] = (long)(plVar6 + 3);
  plVar12[2] = (long)plVar6;
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar12,plVar6,&UNK_10989ba24,param_3);
  *param_1 = 7;
  func_0x00010988c170(plVar5 + 0x4b);
  return;
}



/* Entry: 10a06c124; end: 10a06c133;  */

void FUN_10a06c124(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9e168;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a06c134; end: 10a06c153;  */

void FUN_10a06c134(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9e168;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a06c154; end: 10a06c163;  */

void FUN_10a06c154(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a06c15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a06c164; end: 10a06c1cb;  */

void FUN_10a06c164(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 extraout_x8;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
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
      param_3 = &PTR_DAT_110b9c6a8;
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
  plVar8 = plVar6;
  func_0x000109898688(plVar6,param_2);
  if (plVar8 == (long *)0x0) {
    puVar10 = &UNK_10f68f52e;
  }
  else {
    plVar9 = plVar6;
    FUN_10a052c2c(plVar6,plVar8);
    if ((plVar9 != (long *)0x0) && (___dynamic_cast(), plVar9 != (long *)0x0)) {
      FUN_10a0584c8(param_4);
      func_0x000109898570(&stack0xffffffffffffff88,plVar6,param_3);
      FUN_10a032948(&plStack_88,plVar9,&stack0xffffffffffffff88);
      if (in_stack_ffffffffffffff98 < 0) {
        __ZdlPv(in_stack_ffffffffffffff88);
      }
      FUN_10a06c35c(extraout_x8,plVar6,&plStack_88);
      if (in_stack_ffffffffffffff80 != (long *)0x0) {
        plVar6 = in_stack_ffffffffffffff80 + 1;
        do {
          lVar13 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*in_stack_ffffffffffffff80 + 0x10))(in_stack_ffffffffffffff80);
          __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffff80);
        }
      }
      plVar6 = plVar7 + 0x4b;
      lVar13 = plVar7[0x59];
      uVar11 = lVar13 - 1;
      plVar7[0x59] = uVar11;
      if (uVar11 < 8) {
        uVar11 = plVar6[lVar13 + 2];
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
      lVar13 = *plVar6;
      lVar16 = plVar7[0x4c];
      lVar14 = lVar16 - lVar13;
      uVar18 = lVar14 >> 4;
      if (uVar18 < uVar11) {
        uVar19 = uVar11 - uVar18;
        lVar17 = plVar7[0x4d];
        if ((ulong)(lVar17 - lVar16 >> 4) < uVar19) {
          if (uVar11 >> 0x3c == 0) {
            uVar12 = lVar17 - lVar13 >> 3;
            if (uVar12 <= uVar11) {
              uVar12 = uVar11;
            }
            if (0x7fffffffffffffef < (ulong)(lVar17 - lVar13)) {
              uVar12 = 0xfffffffffffffff;
            }
            plStack_88 = plVar6;
            if (uVar12 >> 0x3c == 0) {
              lVar4 = uVar12 << 4;
              __Znwm();
              lVar16 = lVar4 + lVar14;
              _bzero(lVar16,uVar19 * 0x10);
              lVar15 = lVar16 + uVar18 * -0x10;
              _memcpy(lVar15,lVar13,lVar14);
              *plVar6 = lVar15;
              plVar7[0x4c] = lVar16 + uVar19 * 0x10;
              plVar7[0x4d] = lVar4 + uVar12 * 0x10;
              lStack_a8 = lVar13;
              lStack_a0 = lVar13;
              lStack_98 = lVar13;
              lStack_90 = lVar17;
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
        _bzero(lVar16,uVar19 * 0x10);
        plVar7[0x4c] = lVar16 + uVar19 * 0x10;
      }
      else if (uVar11 < uVar18) {
        lVar13 = lVar13 + uVar11 * 0x10;
        while (lVar16 != lVar13) {
          lVar16 = lVar16 + -0x10;
          func_0x00010988c204(lVar16);
        }
        plVar7[0x4c] = lVar13;
      }
code_r0x00010988c138:
      plVar7[0x5a] = uVar11;
      return;
    }
    puVar10 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar10);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a06c330);
  (*pcVar3)();
}



/* Entry: 10a06c1cc; end: 10a06c35b;  */

void FUN_10a06c1cc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x000109898688(param_2,param_3);
  if (plVar6 == (long *)0x0) {
    puVar8 = &UNK_10f68f52e;
  }
  else {
    plVar7 = param_2;
    FUN_10a052c2c(param_2,plVar6);
    if ((plVar7 != (long *)0x0) && (___dynamic_cast(), plVar7 != (long *)0x0)) {
      FUN_10a0584c8(param_5);
      func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
      FUN_10a032948(&plStack_68,plVar7,&stack0xffffffffffffffa8);
      if (in_stack_ffffffffffffffb8 < 0) {
        __ZdlPv(in_stack_ffffffffffffffa8);
      }
      FUN_10a06c35c(param_1,param_2,&plStack_68);
      if (in_stack_ffffffffffffffa0 != (long *)0x0) {
        plVar6 = in_stack_ffffffffffffffa0 + 1;
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
          (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
        }
      }
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
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a06c330);
  (*pcVar3)();
}



/* Entry: 10a06c35c; end: 10a06c3df;  */

void FUN_10a06c35c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  ppuStack_38 = &PTR_DAT_110ba7718;
  func_0x000109899de4(param_1,&uStack_30,&ppuStack_38,0,0);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a06c3e0; end: 10a06c56f;  */

void FUN_10a06c3e0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x000109898688(param_2,param_3);
  if (plVar6 == (long *)0x0) {
    puVar8 = &UNK_10f68f52e;
  }
  else {
    plVar7 = param_2;
    FUN_10a053854(param_2,plVar6);
    if ((plVar7 != (long *)0x0) && (___dynamic_cast(), plVar7 != (long *)0x0)) {
      FUN_10a0584c8(param_5);
      func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
      FUN_10a032a78(&plStack_68,plVar7,&stack0xffffffffffffffa8);
      if (in_stack_ffffffffffffffb8 < 0) {
        __ZdlPv(in_stack_ffffffffffffffa8);
      }
      FUN_10a06c35c(param_1,param_2,&plStack_68);
      if (in_stack_ffffffffffffffa0 != (long *)0x0) {
        plVar6 = in_stack_ffffffffffffffa0 + 1;
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
          (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
        }
      }
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
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a06c544);
  (*pcVar3)();
}



/* Entry: 10a06c570; end: 10a06c5c7;  */

long FUN_10a06c570(long param_1)

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



/* Entry: 10a06c5c8; end: 10a06c767;  */

void FUN_10a06c5c8(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 auStack_60 [8];
  ulong uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_44;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110b21040;
  param_1[3] = &DAT_11383d918;
  param_1[4] = 0;
  param_1[5] = 0;
  func_0x000107c30248(param_1 + 3,param_2,0);
  FUN_10a06c768(auStack_60);
  uVar1 = *(uint *)(param_1 + 2);
  *(uint *)(param_1 + 2) = uVar1 | 1;
  puVar7 = (undefined1 *)param_1[4];
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = (undefined1 *)param_1[1];
    if (((ulong)puVar7 & 1) != 0) {
      puVar7 = *(undefined1 **)((ulong)puVar7 & 0xfffffffffffffffe);
    }
    func_0x000109a1d7c4();
    param_1[4] = puVar7;
  }
  if (puVar7 != auStack_60) {
    uVar4 = *(ulong *)(puVar7 + 8);
    uVar3 = uVar4;
    if ((uVar4 & 1) != 0) {
      uVar3 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    uVar6 = uStack_58;
    if ((uStack_58 & 1) != 0) {
      uVar6 = *(ulong *)(uStack_58 & 0xfffffffffffffffe);
    }
    if (uVar3 == uVar6) {
      *(ulong *)(puVar7 + 8) = uStack_58;
      uVar5 = *(undefined8 *)(puVar7 + 0x10);
      *(undefined8 *)(puVar7 + 0x10) = uStack_50;
      uVar2 = *(undefined4 *)(puVar7 + 0x1c);
      *(undefined4 *)(puVar7 + 0x1c) = uStack_44;
      uStack_58 = uVar4;
      uStack_50 = uVar5;
      uStack_44 = uVar2;
    }
    else {
      func_0x000109a1c6d4(puVar7);
      func_0x000109a1c968(puVar7,auStack_60);
    }
  }
  func_0x000109a1cb94(auStack_60);
  *(uint *)(param_1 + 2) = uVar1 | 3;
  if (param_1[5] == 0) {
    uVar3 = param_1[1];
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c2ae88();
    param_1[5] = uVar3;
  }
  FUN_10a06c7dc();
  return;
}



/* Entry: 10a06c768; end: 10a06c7db;  */

void FUN_10a06c768(undefined8 *param_1)

{
  ulong uVar1;
  
  *param_1 = &PTR_DAT_110b20ff0;
  param_1[1] = 0;
  param_1[3] = 0;
  func_0x000109a1cae4(param_1);
  *(undefined4 *)((long)param_1 + 0x1c) = 1;
  uVar1 = param_1[1];
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  func_0x000109a1d6e4();
  param_1[2] = uVar1;
  *(undefined4 *)(uVar1 + 0x10) = 2;
  return;
}



/* Entry: 10a06c7dc; end: 10a06c877;  */

void FUN_10a06c7dc(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined **ppuStack_38;
  ulong uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  ppuStack_38 = &PTR_DAT_110d9b550;
  uStack_30 = 0;
  uStack_28 = *param_2;
  uStack_24 = 0;
  uVar1 = *(ulong *)(param_1 + 8);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  func_0x00010bcec254(param_1 + 0x28,uVar1,&ppuStack_38,&UNK_10e5b484d,0x14);
  if ((uStack_30 & 1) != 0) {
    func_0x00010bd2b234(&uStack_30);
  }
  return;
}



/* Entry: 10a06c878; end: 10a06c9bf;  */

void FUN_10a06c878(undefined4 *param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
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
  if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a06c9ac);
    (*pcVar1)();
  }
  puVar4 = (undefined8 *)0x70;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110b9e1b8;
  puVar4[3] = &PTR_FUN_110b9c660;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  plVar13 = (long *)plVar3[4];
  if (plVar13 == (long *)0x0) {
    func_0x000109899fd8(plVar3);
    plVar13 = (long *)plVar3[4];
  }
  plVar3[4] = *plVar13;
  *plVar13 = (long)&PTR_DAT_110b17478;
  plVar13[1] = (long)(puVar4 + 3);
  plVar13[2] = (long)puVar4;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar13,plVar5,&UNK_10989ba24,param_3);
  *param_1 = 7;
  plVar13 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar13[lVar6 + 2];
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
  lVar6 = *plVar13;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar14 = lVar9 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar13;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar15 * 0x10);
          lVar10 = lVar11 + uVar14 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar13 = lVar10;
          plVar3[0x4c] = lVar11 + uVar15 * 0x10;
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
    _bzero(lVar11,uVar15 * 0x10);
    plVar3[0x4c] = lVar11 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
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



/* Entry: 10a06c9c0; end: 10a06c9cf;  */

void FUN_10a06c9c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9e1b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a06c9d0; end: 10a06c9ef;  */

void FUN_10a06c9d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9e1b8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a06c9f0; end: 10a06c9ff;  */

void FUN_10a06c9f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a06c9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a06ca00; end: 10a06cb3f;  */

void FUN_10a06ca00(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a06cc9c(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (*(char *)((long)plVar5 + 0x2f) < '\0') {
    func_0x000107c3192c(&stack0xffffffffffffffa0,plVar5[3],plVar5[4]);
  }
  else {
    in_stack_ffffffffffffffa8 = plVar5[4];
    in_stack_ffffffffffffffa0 = (undefined1 *)plVar5[3];
    in_stack_ffffffffffffffb0 = plVar5[5];
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



/* Entry: 10a06cb40; end: 10a06cc9b;  */

/* WARNING: Possible PIC construction at 0x00010a06cc90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a06cc94) */
/* WARNING: Removing unreachable block (ram,0x00010a06ccb4) */
/* WARNING: Removing unreachable block (ram,0x00010a06ccc4) */
/* WARNING: Removing unreachable block (ram,0x00010a06ccec) */
/* WARNING: Removing unreachable block (ram,0x00010a06ccf8) */
/* WARNING: Removing unreachable block (ram,0x00010a06cd10) */
/* WARNING: Removing unreachable block (ram,0x00010a06cf04) */
/* WARNING: Removing unreachable block (ram,0x00010a06cd70) */
/* WARNING: Removing unreachable block (ram,0x00010a06cd88) */
/* WARNING: Removing unreachable block (ram,0x00010a06cdf0) */
/* WARNING: Removing unreachable block (ram,0x00010a06cdfc) */
/* WARNING: Removing unreachable block (ram,0x00010a06ce0c) */
/* WARNING: Removing unreachable block (ram,0x00010a06ce10) */
/* WARNING: Removing unreachable block (ram,0x00010a06ce18) */
/* WARNING: Removing unreachable block (ram,0x00010a06ce20) */
/* WARNING: Removing unreachable block (ram,0x00010a06ce4c) */
/* WARNING: Removing unreachable block (ram,0x00010a06ce50) */
/* WARNING: Removing unreachable block (ram,0x00010a06ce58) */
/* WARNING: Removing unreachable block (ram,0x00010a06ce60) */
/* WARNING: Removing unreachable block (ram,0x00010a06ce64) */
/* WARNING: Removing unreachable block (ram,0x00010a06ce7c) */
/* WARNING: Removing unreachable block (ram,0x00010a06cea4) */
/* WARNING: Removing unreachable block (ram,0x00010a06ceac) */
/* WARNING: Removing unreachable block (ram,0x00010a06ceb8) */
/* WARNING: Removing unreachable block (ram,0x00010a06cec4) */
/* WARNING: Removing unreachable block (ram,0x00010a06cec8) */
/* WARNING: Removing unreachable block (ram,0x00010a06cd0c) */
/* WARNING: Removing unreachable block (ram,0x00010a06cce0) */

void FUN_10a06cb40(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a06c164(param_2,param_3);
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
  if (*(char *)((long)plVar9 + 0x2f) < '\0') {
    param_2 = (long *)plVar9[3];
    __ZdlPv();
    plVar9[3] = (long)plVar10;
    plVar9[4] = CONCAT17(uStack_51,uStack_58);
    *(ulong *)((long)plVar9 + 0x27) = CONCAT71(uStack_50,uStack_51);
    *(byte *)((long)plVar9 + 0x2f) = bVar5;
    if ((char)bStack_59 < '\0') {
      param_2 = plStack_70;
      __ZdlPv();
    }
  }
  else {
    plVar9[3] = (long)plVar10;
    plVar9[4] = CONCAT17(uVar3,uVar2);
    *(ulong *)((long)plVar9 + 0x27) = CONCAT71(uVar4,uVar3);
    *(byte *)((long)plVar9 + 0x2f) = bVar5;
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    unaff_x30 = 0x10a06cc94;
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



/* Entry: 10a06cc9c; end: 10a06cd03;  */

void FUN_10a06cc9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *extraout_x8;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long *plVar19;
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  undefined **ppuStack_98;
  long in_stack_ffffffffffffff70;
  
  lVar11 = param_1;
  func_0x000109898688();
  if (lVar11 != 0) {
    FUN_10a052c2c(param_1,lVar11);
    if (param_1 != 0) {
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar9 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar9 == 1) {
    return;
  }
  plVar7 = (long *)0x1;
  uVar10 = 0;
  FUN_10a052ee0(1,0,puVar9);
  plVar8 = plVar7;
  (**(code **)(*plVar7 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar19 = plVar7;
  FUN_10a06cc9c(plVar7,uVar10);
  FUN_10a052e3c(param_4);
  lStack_c8 = 0;
  lStack_c0 = 0;
  puStack_b8 = (undefined *)0x0;
  FUN_10a04b1d4(&lStack_c8,plVar19[6],plVar19[7],plVar19[7] - plVar19[6] >> 4);
  lVar17 = lStack_c0;
  lVar11 = lStack_c8;
  lVar16 = lStack_c0 - lStack_c8 >> 4;
  (**(code **)(*plVar7 + 600))(&stack0xffffffffffffff70,plVar7,lVar16);
  lStack_a0 = in_stack_ffffffffffffff70;
  if (lVar17 != lVar11) {
    lVar17 = 0;
    do {
      lVar15 = lVar11 + lVar17 * 0x10;
      lVar13 = *(long *)(lVar15 + 8);
      plVar19 = *(long **)(lVar15 + 8);
      if (lVar13 != 0) {
        plVar1 = (long *)(lVar13 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppuStack_98 = &PTR_DAT_110ba7718;
      func_0x000109899de4(&puStack_b0,plVar7,&stack0xffffffffffffff70,&ppuStack_98,0,0);
      if (plVar19 != (long *)0x0) {
        plVar1 = plVar19 + 1;
        do {
          lVar15 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
        }
      }
      (**(code **)(*plVar7 + 0x290))(plVar7,&lStack_a0,lVar17,&puStack_b0);
      if ((3 < (int)puStack_b0) && (puStack_a8 != (undefined8 *)0x0)) {
        (**(code **)*puStack_a8)();
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 != lVar16);
  }
  *extraout_x8 = 7;
  *(long *)(extraout_x8 + 2) = lStack_a0;
  FUN_10a04afa0(&stack0xffffffffffffff70);
  ppuVar2 = (undefined **)(plVar8 + 0x4b);
  lVar11 = plVar8[0x59];
  uVar12 = lVar11 - 1;
  plVar8[0x59] = uVar12;
  if (uVar12 < 8) {
    puVar9 = ppuVar2[lVar11 + 2];
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
  puVar3 = *ppuVar2;
  puVar14 = (undefined *)plVar8[0x4c];
  lVar11 = (long)puVar14 - (long)puVar3;
  puVar18 = (undefined *)(lVar11 >> 4);
  if (puVar18 < puVar9) {
    uVar12 = (long)puVar9 - (long)puVar18;
    lVar17 = plVar8[0x4d];
    if ((ulong)(lVar17 - (long)puVar14 >> 4) < uVar12) {
      if ((ulong)puVar9 >> 0x3c == 0) {
        puVar14 = (undefined *)(lVar17 - (long)puVar3 >> 3);
        if (puVar14 <= puVar9) {
          puVar14 = puVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar17 - (long)puVar3)) {
          puVar14 = (undefined *)0xfffffffffffffff;
        }
        ppuStack_98 = ppuVar2;
        if ((ulong)puVar14 >> 0x3c == 0) {
          lVar15 = (long)puVar14 << 4;
          __Znwm();
          lVar16 = lVar15 + lVar11;
          _bzero(lVar16,uVar12 * 0x10);
          puVar18 = (undefined *)(lVar16 + (long)puVar18 * -0x10);
          _memcpy(puVar18,puVar3,lVar11);
          *ppuVar2 = puVar18;
          plVar8[0x4c] = lVar16 + uVar12 * 0x10;
          plVar8[0x4d] = lVar15 + (long)puVar14 * 0x10;
          puStack_b8 = puVar3;
          puStack_b0 = puVar3;
          puStack_a8 = (undefined8 *)puVar3;
          lStack_a0 = lVar17;
          func_0x00010988c1b8(&puStack_b8);
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
    _bzero(puVar14,uVar12 * 0x10);
    plVar8[0x4c] = (long)(puVar14 + uVar12 * 0x10);
  }
  else if (puVar9 < puVar18) {
    while (puVar14 != puVar3 + (long)puVar9 * 0x10) {
      puVar14 = puVar14 + -0x10;
      func_0x00010988c204(puVar14);
    }
    plVar8[0x4c] = (long)(puVar3 + (long)puVar9 * 0x10);
  }
code_r0x00010988c138:
  plVar8[0x5a] = (long)puVar9;
  return;
}



/* Entry: 10a06cd04; end: 10a06cd27;  */

void FUN_10a06cd04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *extraout_x8;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long *plVar19;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  undefined **ppuStack_78;
  long in_stack_ffffffffffffff90;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar7 = (long *)0x1;
  uVar10 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar8 = plVar7;
  (**(code **)(*plVar7 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar19 = plVar7;
  FUN_10a06cc9c(plVar7,uVar10);
  FUN_10a052e3c(param_4);
  lStack_a8 = 0;
  lStack_a0 = 0;
  puStack_98 = (undefined *)0x0;
  FUN_10a04b1d4(&lStack_a8,plVar19[6],plVar19[7],plVar19[7] - plVar19[6] >> 4);
  lVar17 = lStack_a0;
  lVar11 = lStack_a8;
  lVar16 = lStack_a0 - lStack_a8 >> 4;
  (**(code **)(*plVar7 + 600))(&stack0xffffffffffffff90,plVar7,lVar16);
  lStack_80 = in_stack_ffffffffffffff90;
  if (lVar17 != lVar11) {
    lVar17 = 0;
    do {
      lVar15 = lVar11 + lVar17 * 0x10;
      lVar13 = *(long *)(lVar15 + 8);
      plVar19 = *(long **)(lVar15 + 8);
      if (lVar13 != 0) {
        plVar1 = (long *)(lVar13 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppuStack_78 = &PTR_DAT_110ba7718;
      func_0x000109899de4(&puStack_90,plVar7,&stack0xffffffffffffff90,&ppuStack_78,0,0);
      if (plVar19 != (long *)0x0) {
        plVar1 = plVar19 + 1;
        do {
          lVar15 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
        }
      }
      (**(code **)(*plVar7 + 0x290))(plVar7,&lStack_80,lVar17,&puStack_90);
      if ((3 < (int)puStack_90) && (puStack_88 != (undefined8 *)0x0)) {
        (**(code **)*puStack_88)();
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 != lVar16);
  }
  *extraout_x8 = 7;
  *(long *)(extraout_x8 + 2) = lStack_80;
  FUN_10a04afa0(&stack0xffffffffffffff90);
  ppuVar2 = (undefined **)(plVar8 + 0x4b);
  lVar11 = plVar8[0x59];
  uVar12 = lVar11 - 1;
  plVar8[0x59] = uVar12;
  if (uVar12 < 8) {
    puVar9 = ppuVar2[lVar11 + 2];
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
  puVar3 = *ppuVar2;
  puVar14 = (undefined *)plVar8[0x4c];
  lVar11 = (long)puVar14 - (long)puVar3;
  puVar18 = (undefined *)(lVar11 >> 4);
  if (puVar18 < puVar9) {
    uVar12 = (long)puVar9 - (long)puVar18;
    lVar17 = plVar8[0x4d];
    if ((ulong)(lVar17 - (long)puVar14 >> 4) < uVar12) {
      if ((ulong)puVar9 >> 0x3c == 0) {
        puVar14 = (undefined *)(lVar17 - (long)puVar3 >> 3);
        if (puVar14 <= puVar9) {
          puVar14 = puVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar17 - (long)puVar3)) {
          puVar14 = (undefined *)0xfffffffffffffff;
        }
        ppuStack_78 = ppuVar2;
        if ((ulong)puVar14 >> 0x3c == 0) {
          lVar15 = (long)puVar14 << 4;
          __Znwm();
          lVar16 = lVar15 + lVar11;
          _bzero(lVar16,uVar12 * 0x10);
          puVar18 = (undefined *)(lVar16 + (long)puVar18 * -0x10);
          _memcpy(puVar18,puVar3,lVar11);
          *ppuVar2 = puVar18;
          plVar8[0x4c] = lVar16 + uVar12 * 0x10;
          plVar8[0x4d] = lVar15 + (long)puVar14 * 0x10;
          puStack_98 = puVar3;
          puStack_90 = puVar3;
          puStack_88 = (undefined8 *)puVar3;
          lStack_80 = lVar17;
          func_0x00010988c1b8(&puStack_98);
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
    _bzero(puVar14,uVar12 * 0x10);
    plVar8[0x4c] = (long)(puVar14 + uVar12 * 0x10);
  }
  else if (puVar9 < puVar18) {
    while (puVar14 != puVar3 + (long)puVar9 * 0x10) {
      puVar14 = puVar14 + -0x10;
      func_0x00010988c204(puVar14);
    }
    plVar8[0x4c] = (long)(puVar3 + (long)puVar9 * 0x10);
  }
code_r0x00010988c138:
  plVar8[0x5a] = (long)puVar9;
  return;
}



/* Entry: 10a06cd28; end: 10a06cf77;  */

void FUN_10a06cd28(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long lStack_98;
  long lStack_90;
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
  FUN_10a06cc9c(param_2,param_3);
  FUN_10a052e3c(param_5);
  lStack_98 = 0;
  lStack_90 = 0;
  puStack_88 = (undefined *)0x0;
  FUN_10a04b1d4(&lStack_98,plVar17[6],plVar17[7],plVar17[7] - plVar17[6] >> 4);
  lVar15 = lStack_90;
  lVar9 = lStack_98;
  lVar14 = lStack_90 - lStack_98 >> 4;
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
      ppuStack_68 = &PTR_DAT_110ba7718;
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
  FUN_10a04afa0(&stack0xffffffffffffffa0);
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



/* Entry: 10a06cf78; end: 10a06d50b;  */

void FUN_10a06cf78(undefined4 *param_1,long *******param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *****ppppplVar5;
  code *pcVar6;
  long lVar7;
  long *******ppppppplVar8;
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  long ******pppppplVar12;
  undefined *puVar13;
  long ******pppppplVar14;
  long ******pppppplVar15;
  long *****ppppplVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long ******pppppplVar20;
  long ******pppppplVar21;
  long *******ppppppplVar22;
  long *******ppppppplVar23;
  long *******ppppppplVar24;
  long ******pppppplStack_c8;
  long ******pppppplStack_c0;
  long ******pppppplStack_b8;
  int aiStack_b0 [2];
  undefined8 *puStack_a8;
  long *****ppppplStack_a0;
  long *****ppppplStack_98;
  long ******pppppplStack_90;
  long ******pppppplStack_88;
  long ******pppppplStack_80;
  long ******pppppplStack_78;
  long ******pppppplStack_70;
  long ******pppppplStack_68;
  
  ppppppplVar8 = param_2;
  (*(code *)(*param_2)[0xb])();
  if (ppppppplVar8[0x59] < (long ******)0x8) {
    ppppppplVar8[(long)ppppppplVar8[0x59] + 0x4e] = ppppppplVar8[0x5a];
    ppppppplVar8[0x59] = (long ******)((long)ppppppplVar8[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(ppppppplVar8 + 0x4b);
  }
  ppppppplVar9 = param_2;
  FUN_10a06c164(param_2,param_3);
  FUN_10a06d50c(param_5);
  if (*param_4 == 7) {
    ppppppplVar10 = param_2;
    (*(code *)(*param_2)[0x13])(param_2,*(undefined8 *)(param_4 + 2));
    ppppppplVar22 = param_2;
    pppppplStack_88 = (long ******)ppppppplVar10;
    (*(code *)(*param_2)[0x41])(param_2,&pppppplStack_88);
    if (((ulong)ppppppplVar22 & 1) != 0) {
      pppppplStack_90 = pppppplStack_88;
      ppppppplVar10 = param_2;
      (*(code *)(*param_2)[0x4d])(param_2,&pppppplStack_90);
      pppppplStack_c8 = (long ******)0x0;
      pppppplStack_c0 = (long ******)0x0;
      pppppplStack_b8 = (long ******)0x0;
      if (ppppppplVar10 != (long *******)0x0) {
        if ((ulong)ppppppplVar10 >> 0x3c != 0) {
          FUN_10a04af58();
          goto LAB_10a06d464;
        }
        ppppppplVar22 = &pppppplStack_c8;
        ppppppplVar11 = ppppppplVar10;
        pppppplStack_68 = (long ******)&pppppplStack_c8;
        FUN_10a04af6c();
        ppppppplVar23 =
             (long *******)((long)ppppppplVar22 - ((long)pppppplStack_c0 - (long)pppppplStack_c8));
        _memcpy(ppppppplVar23);
        pppppplStack_78 = pppppplStack_c8;
        pppppplStack_70 = pppppplStack_b8;
        pppppplStack_88 = pppppplStack_c8;
        pppppplStack_80 = pppppplStack_c8;
        pppppplStack_c8 = (long ******)ppppppplVar23;
        pppppplStack_c0 = (long ******)ppppppplVar22;
        pppppplStack_b8 = (long ******)(ppppppplVar22 + (long)ppppppplVar11 * 2);
        FUN_10a06d62c(&pppppplStack_88);
        ppppppplVar22 = (long *******)0x0;
        do {
          (*(code *)(*param_2)[0x51])(aiStack_b0,param_2,&pppppplStack_90,ppppppplVar22);
          FUN_10a06d530(&ppppplStack_a0,param_2,aiStack_b0);
          if (pppppplStack_c0 < pppppplStack_b8) {
            pppppplStack_c0[1] = ppppplStack_98;
            *pppppplStack_c0 = ppppplStack_a0;
            ppppplStack_a0 = (long *****)0x0;
            ppppplStack_98 = (long *****)0x0;
            pppppplStack_c0 = pppppplStack_c0 + 2;
          }
          else {
            lVar19 = (long)pppppplStack_c0 - (long)pppppplStack_c8;
            uVar17 = (lVar19 >> 4) + 1;
            if (uVar17 >> 0x3c != 0) {
              FUN_10a04af58();
              goto LAB_10a06d464;
            }
            uVar18 = (long)pppppplStack_b8 - (long)pppppplStack_c8 >> 3;
            if (uVar18 <= uVar17) {
              uVar18 = uVar17;
            }
            if (0x7fffffffffffffef < (ulong)((long)pppppplStack_b8 - (long)pppppplStack_c8)) {
              uVar18 = 0xfffffffffffffff;
            }
            ppppppplVar11 = &pppppplStack_c8;
            pppppplStack_68 = (long ******)&pppppplStack_c8;
            FUN_10a04af6c();
            puVar2 = (undefined8 *)((long)ppppppplVar11 + lVar19);
            ppppppplVar23 = (long *******)(puVar2 + 2);
            puVar2[1] = ppppplStack_98;
            *puVar2 = ppppplStack_a0;
            ppppplStack_a0 = (long *****)0x0;
            ppppplStack_98 = (long *****)0x0;
            ppppppplVar24 =
                 (long *******)((long)puVar2 - ((long)pppppplStack_c0 - (long)pppppplStack_c8));
            _memcpy(ppppppplVar24);
            pppppplStack_78 = pppppplStack_c8;
            pppppplStack_70 = pppppplStack_b8;
            pppppplStack_88 = pppppplStack_c8;
            pppppplStack_80 = pppppplStack_c8;
            pppppplStack_c8 = (long ******)ppppppplVar24;
            pppppplStack_c0 = (long ******)ppppppplVar23;
            pppppplStack_b8 = (long ******)(ppppppplVar11 + uVar18 * 2);
            FUN_10a06d62c(&pppppplStack_88);
            ppppplVar5 = ppppplStack_98;
            pppppplStack_c0 = (long ******)ppppppplVar23;
            if ((long ******)ppppplStack_98 != (long ******)0x0) {
              pppppplVar14 = (long ******)(ppppplStack_98 + 1);
              do {
                ppppplVar16 = *pppppplVar14;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
                if (bVar4) {
                  *pppppplVar14 = (long *****)((long)ppppplVar16 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (ppppplVar16 == (long *****)0x0) {
                (*(code *)(*ppppplStack_98)[2])(ppppplStack_98);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar5);
              }
            }
          }
          if ((3 < aiStack_b0[0]) && (puStack_a8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_a8)();
          }
          ppppppplVar22 = (long *******)((long)ppppppplVar22 + 1);
        } while (ppppppplVar22 != ppppppplVar10);
      }
      if ((long *******)pppppplStack_90 != (long *******)0x0) {
        (*(code *)**pppppplStack_90)();
      }
      pppppplVar14 = pppppplStack_c0;
      ppppppplVar10 = (long *******)pppppplStack_c8;
      if (pppppplStack_c8 == pppppplStack_c0) {
        puVar13 = &UNK_10f632a00;
LAB_10a06d450:
        FUN_10a00946c(puVar13);
        goto LAB_10a06d464;
      }
      puVar13 = &UNK_10f632a31;
      ppppppplVar22 = (long *******)pppppplStack_c8;
      do {
        ppppppplVar11 = ppppppplVar22 + 2;
        if (*ppppppplVar22 == (long ******)0x0) goto LAB_10a06d450;
        ppppppplVar22 = ppppppplVar11;
      } while (ppppppplVar11 != (long *******)pppppplStack_c0);
      ppppppplVar22 = ppppppplVar9 + 6;
      if (ppppppplVar22 != &pppppplStack_c8) {
        uVar17 = (long)pppppplStack_c0 - (long)pppppplStack_c8;
        pppppplVar15 = ppppppplVar9[8];
        pppppplVar20 = ppppppplVar9[6];
        if ((ulong)((long)pppppplVar15 - (long)pppppplVar20) < uVar17) {
          uVar17 = (long)uVar17 >> 4;
          if (pppppplVar20 != (long ******)0x0) {
            pppppplVar12 = ppppppplVar9[7];
            pppppplVar15 = pppppplVar20;
            if (pppppplVar12 != pppppplVar20) {
              do {
                pppppplVar12 = pppppplVar12 + -2;
                func_0x00010a06b8b0();
              } while (pppppplVar12 != pppppplVar20);
              pppppplVar15 = *ppppppplVar22;
            }
            ppppppplVar9[7] = pppppplVar20;
            __ZdlPv(pppppplVar15);
            pppppplVar15 = (long ******)0x0;
            *ppppppplVar22 = (long ******)0x0;
            ppppppplVar9[7] = (long ******)0x0;
            ppppppplVar9[8] = (long ******)0x0;
          }
          if (uVar17 >> 0x3c != 0) {
            FUN_10a04af58();
            goto LAB_10a06d464;
          }
          uVar18 = (long)pppppplVar15 >> 3;
          if ((ulong)((long)pppppplVar15 >> 3) <= uVar17) {
            uVar18 = uVar17;
          }
          if ((long ******)0x7fffffffffffffef < pppppplVar15) {
            uVar18 = 0xfffffffffffffff;
          }
          FUN_10a04af20(ppppppplVar22,uVar18);
          pppppplVar15 = ppppppplVar9[7];
          do {
            pppppplVar20 = ppppppplVar10[1];
            pppppplVar12 = *ppppppplVar10;
            pppppplVar15[1] = (long *****)ppppppplVar10[1];
            *pppppplVar15 = (long *****)pppppplVar12;
            if (pppppplVar20 != (long ******)0x0) {
              pppppplVar20 = pppppplVar20 + 1;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppppplVar20,0x10);
                if (bVar4) {
                  *pppppplVar20 = (long *****)((long)*pppppplVar20 + 1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            ppppppplVar10 = ppppppplVar10 + 2;
            pppppplVar15 = pppppplVar15 + 2;
          } while (ppppppplVar10 != (long *******)pppppplVar14);
        }
        else {
          pppppplVar15 = ppppppplVar9[7];
          if (uVar17 <= (ulong)((long)pppppplVar15 - (long)pppppplVar20)) {
            do {
              ppppppplVar22 = ppppppplVar10 + 2;
              func_0x00010a04b6d4(pppppplVar20,*ppppppplVar10,ppppppplVar10[1]);
              pppppplVar20 = pppppplVar20 + 2;
              ppppppplVar10 = ppppppplVar22;
            } while (ppppppplVar22 != (long *******)pppppplVar14);
            pppppplVar14 = ppppppplVar9[7];
            while (pppppplVar20 != pppppplVar14) {
              pppppplVar14 = pppppplVar14 + -2;
              func_0x00010a06b8b0();
            }
            ppppppplVar9[7] = pppppplVar20;
            goto SUB_10988c170;
          }
          ppppppplVar10 =
               (long *******)((long)pppppplStack_c8 + ((long)pppppplVar15 - (long)pppppplVar20));
          ppppppplVar22 = (long *******)pppppplStack_c8;
          if (pppppplVar15 != pppppplVar20) {
            do {
              ppppppplVar11 = ppppppplVar22 + 2;
              func_0x00010a04b6d4(pppppplVar20,*ppppppplVar22,ppppppplVar22[1]);
              pppppplVar20 = pppppplVar20 + 2;
              ppppppplVar22 = ppppppplVar11;
            } while (ppppppplVar11 != ppppppplVar10);
            pppppplVar15 = ppppppplVar9[7];
          }
          for (; ppppppplVar10 != (long *******)pppppplVar14; ppppppplVar10 = ppppppplVar10 + 2) {
            pppppplVar20 = ppppppplVar10[1];
            pppppplVar12 = *ppppppplVar10;
            pppppplVar15[1] = (long *****)ppppppplVar10[1];
            *pppppplVar15 = (long *****)pppppplVar12;
            if (pppppplVar20 != (long ******)0x0) {
              pppppplVar20 = pppppplVar20 + 1;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppppplVar20,0x10);
                if (bVar4) {
                  *pppppplVar20 = (long *****)((long)*pppppplVar20 + 1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            pppppplVar15 = pppppplVar15 + 2;
          }
        }
        ppppppplVar9[7] = pppppplVar15;
      }
SUB_10988c170:
      pppppplStack_88 = (long ******)&pppppplStack_c8;
      FUN_10a04afa0(&pppppplStack_88);
      *param_1 = 0;
      ppppppplVar9 = ppppppplVar8 + 0x4b;
      pppppplVar14 = ppppppplVar8[0x59];
      pppppplVar20 = (long ******)((long)pppppplVar14 + -1);
      ppppppplVar8[0x59] = pppppplVar20;
      if (pppppplVar20 < (long ******)0x8) {
        pppppplVar14 = ppppppplVar9[(long)pppppplVar14 + 2];
        if (ppppppplVar8[0x5a] == pppppplVar14) {
          return;
        }
      }
      else {
        pppppplVar14 = (long ******)ppppppplVar8[0x57][-1];
        ppppppplVar8[0x57] = ppppppplVar8[0x57] + -1;
        if (ppppppplVar8[0x5a] == pppppplVar14) {
          return;
        }
      }
      pppppplVar20 = *ppppppplVar9;
      pppppplVar15 = ppppppplVar8[0x4c];
      lVar19 = (long)pppppplVar15 - (long)pppppplVar20;
      pppppplVar12 = (long ******)(lVar19 >> 4);
      if (pppppplVar12 < pppppplVar14) {
        uVar17 = (long)pppppplVar14 - (long)pppppplVar12;
        pppppplVar21 = ppppppplVar8[0x4d];
        if ((ulong)((long)pppppplVar21 - (long)pppppplVar15 >> 4) < uVar17) {
          if ((ulong)pppppplVar14 >> 0x3c == 0) {
            pppppplVar15 = (long ******)((long)pppppplVar21 - (long)pppppplVar20 >> 3);
            if (pppppplVar15 <= pppppplVar14) {
              pppppplVar15 = pppppplVar14;
            }
            if (0x7fffffffffffffef < (ulong)((long)pppppplVar21 - (long)pppppplVar20)) {
              pppppplVar15 = (long ******)0xfffffffffffffff;
            }
            pppppplStack_68 = (long ******)ppppppplVar9;
            if ((ulong)pppppplVar15 >> 0x3c == 0) {
              lVar7 = (long)pppppplVar15 << 4;
              __Znwm();
              lVar1 = lVar7 + lVar19;
              _bzero(lVar1,uVar17 * 0x10);
              pppppplVar12 = (long ******)(lVar1 + (long)pppppplVar12 * -0x10);
              _memcpy(pppppplVar12,pppppplVar20,lVar19);
              *ppppppplVar9 = pppppplVar12;
              ppppppplVar8[0x4c] = (long ******)(lVar1 + uVar17 * 0x10);
              ppppppplVar8[0x4d] = (long ******)(lVar7 + (long)pppppplVar15 * 0x10);
              pppppplStack_88 = pppppplVar20;
              pppppplStack_80 = pppppplVar20;
              pppppplStack_78 = pppppplVar20;
              pppppplStack_70 = pppppplVar21;
              func_0x00010988c1b8(&pppppplStack_88);
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
        _bzero(pppppplVar15,uVar17 * 0x10);
        ppppppplVar8[0x4c] = pppppplVar15 + uVar17 * 2;
      }
      else if (pppppplVar14 < pppppplVar12) {
        while (pppppplVar15 != pppppplVar20 + (long)pppppplVar14 * 2) {
          pppppplVar15 = pppppplVar15 + -2;
          func_0x00010988c204(pppppplVar15);
        }
        ppppppplVar8[0x4c] = pppppplVar20 + (long)pppppplVar14 * 2;
      }
code_r0x00010988c138:
      ppppppplVar8[0x5a] = pppppplVar14;
      return;
    }
    if ((long *******)pppppplStack_88 != (long *******)0x0) {
      (*(code *)**pppppplStack_88)();
    }
  }
  func_0x00010988bd28(&UNK_10f58253c);
LAB_10a06d464:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a06d468);
  (*pcVar6)();
}



/* Entry: 10a06d50c; end: 10a06d52f;  */

void FUN_10a06d50c(int *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_40;
  long *plStack_38;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
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
         (___dynamic_cast(lStack_40,&PTR_DAT_110b178e0,&PTR_DAT_110ba7718,0), lStack_40 != 0)) {
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
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a06d618);
    (*pcVar3)();
  }
  *plVar4 = 0;
  plVar4[1] = 0;
  return;
}



/* Entry: 10a06d530; end: 10a06d62b;  */

void FUN_10a06d530(long *param_1,long param_2,int *param_3)

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
       (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110ba7718,0), lStack_30 != 0)) {
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
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a06d618);
  (*pcVar3)();
}



/* Entry: 10a06d62c; end: 10a06d677;  */

long * FUN_10a06d62c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010a06b8b0();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a06d678; end: 10a06d793;  */

void FUN_10a06d678(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a06cc9c(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar16 = (long *)plVar6[10];
  if (plVar6[10] != 0) {
    plVar6 = (long *)(plVar6[10] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10a06d8e4(param_1,param_2,&stack0xffffffffffffffb0);
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



/* Entry: 10a06d794; end: 10a06d8e3;  */

/* WARNING: Removing unreachable block (ram,0x00010a06d874) */
/* WARNING: Removing unreachable block (ram,0x00010a06d878) */
/* WARNING: Removing unreachable block (ram,0x00010a06d880) */
/* WARNING: Removing unreachable block (ram,0x00010a06d888) */
/* WARNING: Removing unreachable block (ram,0x00010a06d88c) */

void FUN_10a06d794(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long *in_stack_ffffffffffffffa8;
  
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
  FUN_10a06c164(param_2,param_3);
  FUN_10a06d968(param_5);
  FUN_10a06d98c(&stack0xffffffffffffffa0,param_2,param_4);
  FUN_10a0332b4(plVar6,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa8 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
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



/* Entry: 10a06d8e4; end: 10a06d967;  */

void FUN_10a06d8e4(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a052f68(param_1,&uStack_30);
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



/* Entry: 10a06d968; end: 10a06d98b;  */

void FUN_10a06d968(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *extraout_x8;
  long *plVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  if ((int)param_1 == 1) {
    return;
  }
  uVar5 = 1;
  uVar6 = 0;
  FUN_10a052ee0(1,0,param_1);
  func_0x000109898610(&lStack_50);
  if (lStack_50 == 0) {
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
  }
  else {
    ___dynamic_cast(lStack_50,&PTR_DAT_110b178e0,&PTR_DAT_110c2ca08,0x10);
    if (lStack_50 == 0) {
      plVar7 = &lStack_60;
    }
    else {
      plStack_58 = plStack_48;
      plVar7 = &lStack_50;
      lStack_60 = lStack_50;
    }
    *plVar7 = 0;
    plVar7[1] = 0;
    if (lStack_60 == 0) {
      func_0x00010988bd28(&UNK_10f685500);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a06daa8);
      (*pcVar4)();
    }
    uStack_70 = uVar5;
    uStack_68 = uVar6;
    FUN_10a06dac8(extraout_x8,&lStack_60,&uStack_70);
    plVar7 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar7 = plStack_48 + 1;
    do {
      lVar8 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  return;
}



/* Entry: 10a06d98c; end: 10a06dac7;  */

void FUN_10a06d98c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  func_0x000109898610(&lStack_40);
  if (lStack_40 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    ___dynamic_cast(lStack_40,&PTR_DAT_110b178e0,&PTR_DAT_110c2ca08,0x10);
    if (lStack_40 == 0) {
      plVar5 = &lStack_50;
    }
    else {
      plStack_48 = plStack_38;
      plVar5 = &lStack_40;
      lStack_50 = lStack_40;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    if (lStack_50 == 0) {
      func_0x00010988bd28(&UNK_10f685500);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a06daa8);
      (*pcVar4)();
    }
    uStack_60 = param_2;
    uStack_58 = param_3;
    FUN_10a06dac8(param_1,&lStack_50,&uStack_60);
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar5 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a06dac8; end: 10a06de4b;  */

void FUN_10a06dac8(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined *extraout_x8;
  long lVar8;
  undefined *puVar9;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  FUN_10a0533bc(&plStack_50,*param_2);
  if (plStack_50 == (long *)0x0) {
    lVar8 = *param_3;
    func_0x0001098849a4(&lStack_40,lVar8,param_3[1]);
    plVar5 = (long *)0x30;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_DAT_110b174d8;
    plStack_60 = plVar5 + 3;
    if ((int)lStack_40 == 3) {
      plVar5[3] = lVar8;
      *(undefined4 *)(plVar5 + 4) = 3;
      plVar5[5] = (long)plStack_38;
    }
    else if ((int)lStack_40 == 2) {
      plVar5[3] = lVar8;
      *(undefined4 *)(plVar5 + 4) = 2;
      *(undefined1 *)(plVar5 + 5) = plStack_38._0_1_;
    }
    else if ((int)lStack_40 < 4) {
      plVar5[3] = lVar8;
      *(int *)(plVar5 + 4) = (int)lStack_40;
    }
    else {
      plVar5[3] = lVar8;
      *(int *)(plVar5 + 4) = (int)lStack_40;
      plVar5[5] = (long)plStack_38;
    }
    lVar8 = *param_2;
    lVar2 = param_2[1];
    if (lVar2 != 0) {
      plVar6 = (long *)(lVar2 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar6 = (long *)0x90;
    plStack_58 = plVar5;
    lStack_40 = lVar8;
    plStack_38 = (long *)lVar2;
    __Znwm();
    plVar5 = plStack_48;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110b9fe30;
    plStack_50 = plVar6 + 3;
    *plStack_50 = lVar8;
    lStack_40 = 0;
    plStack_38 = (long *)0x0;
    plVar6[4] = lVar2;
    plVar6[5] = 0;
    plVar6[6] = 0;
    plVar6[7] = 0x32aaaba7;
    plVar6[9] = 0;
    plVar6[8] = 0;
    plVar6[0xb] = 0;
    plVar6[10] = 0;
    plVar6[0xd] = 0;
    plVar6[0xc] = 0;
    plVar6[0xf] = 0;
    plVar6[0xe] = 0;
    plVar6[0x11] = 0;
    plVar6[0x10] = 0;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        lVar8 = *plStack_48;
        plStack_48 = plVar6;
        (**(code **)(lVar8 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        plVar6 = plStack_48;
      }
    }
    plStack_48 = plVar6;
    plVar5 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar6 = plStack_38 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    func_0x00010a04a7fc(plStack_50 + 2,&plStack_60);
    lStack_40 = *param_2;
    *param_1 = lStack_40;
    param_1[1] = (long)plStack_48;
    if (plStack_48 == (long *)0x0) {
      plStack_38 = (long *)0x0;
    }
    else {
      plVar5 = plStack_48 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = *plVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plStack_38 = plStack_48;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = *plVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x00010a053e8c(plStack_50,&lStack_40);
    plVar5 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar6 = plStack_38 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    func_0x00010a053ee8(*param_2,&plStack_50);
    ppuVar7 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)(*(undefined8 *)(*param_2 + 0x50));
    puVar9 = *ppuVar7;
    if (extraout_x8 != (undefined *)0x0) {
      puVar9 = extraout_x8;
    }
    FUN_10aa89b3c(*(undefined8 *)(puVar9 + 0x870),&plStack_50);
    plVar5 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar6 = plStack_58 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  else {
    FUN_10a053e40(&lStack_40);
    param_1[1] = (long)plStack_38;
    *param_1 = lStack_40;
  }
  plVar5 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar6 = plStack_48 + 1;
    do {
      lVar8 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a06de4c; end: 10a06df47;  */

undefined1  [16] FUN_10a06de4c(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110b9c6c0;
  puVar1 = &UNK_10f630f1d;
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
    ppuStack_40 = &PTR_DAT_110b9c6c0;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110ba76b0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a06df48; end: 10a06e05b;  */

void FUN_10a06df48(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f632991,8);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a06e004);
  (*pcVar4)();
}



/* Entry: 10a06e05c; end: 10a06e0c7;  */

void FUN_10a06e05c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10a06e0c8; end: 10a06e13b;  */

long * FUN_10a06e0c8(long *param_1)

{
  long lVar1;
  
  func_0x00010a06e100(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a06e13c; end: 10a06e1a7;  */

void FUN_10a06e13c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10a06e1a8; end: 10a06e2cb;  */

long * FUN_10a06e1a8(long *param_1)

{
  long lVar1;
  
  func_0x00010a06e1e0(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a06e2cc; end: 10a06e40f;  */

void FUN_10a06e2cc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a06e410(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a033d44(&plStack_68,plVar6,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  func_0x00010a06e478(param_1,param_2,&plStack_68);
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



/* Entry: 10a06e410; end: 10a06e507;  */

void FUN_10a06e410(undefined **param_1,undefined **param_2,undefined **param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long *plStack_48;
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar5);
    param_2 = ppuVar5;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110b9c6e8;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar6 = &UNK_10f68f52e;
  func_0x00010988bd28(&UNK_10f68f52e);
  plStack_48 = (long *)param_3[1];
  puStack_50 = *param_3;
  *param_3 = (undefined *)0x0;
  param_3[1] = (undefined *)0x0;
  ppuStack_58 = &PTR_DAT_110b9c6e8;
  func_0x000109899de4(puVar6,param_2,&puStack_50,&ppuStack_58,0,0);
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a06e508; end: 10a06e5bf;  */

void FUN_10a06e508(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a06e5c0(param_1,param_2,FUN_10a033d98,0,param_3,param_4,param_5);
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



/* Entry: 10a06e5c0; end: 10a06eb27;  */

void FUN_10a06e5c0(undefined8 param_1,long *param_2,code *param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long lStack_e8;
  float fStack_e0;
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  int aiStack_a8 [2];
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  plVar3 = param_2;
  FUN_10a06e410(param_2,param_5);
  FUN_10a06eb28(param_7);
  plStack_f8 = (long *)0x0;
  lStack_100 = 0;
  lStack_e8 = 0;
  plStack_f0 = (long *)0x0;
  fStack_e0 = 1.0;
  func_0x000109884c0c(&puStack_88,param_6,param_2);
  (**(code **)(*param_2 + 0x240))(&puStack_90,param_2,&puStack_88);
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x268))(param_2,&puStack_90);
  if (plVar4 != (long *)0x0) {
    plVar12 = (long *)0x0;
    plVar11 = param_4;
    do {
      (**(code **)(*param_2 + 0x288))(&plStack_80,param_2,&puStack_90,plVar12);
      plStack_98 = plStack_78;
      (**(code **)(*param_2 + 200))(&plStack_80,param_2,&plStack_98);
      (**(code **)(*param_2 + 0x1a0))(aiStack_a8,param_2,&puStack_88,&plStack_80);
      if (plStack_80 != (long *)0x0) {
        (**(code **)*plStack_80)();
      }
      (**(code **)(*param_2 + 0x138))(&lStack_c0,param_2,&plStack_98);
      FUN_10a06d530(&lStack_d0,param_2,aiStack_a8);
      plVar7 = &lStack_100;
      func_0x000107c2b05c(plVar7,&lStack_c0);
      plVar10 = plStack_f8;
      if (plStack_f8 != (long *)0x0) {
        uVar13 = (long)plStack_f8 - 1;
        if (((ulong)plStack_f8 & uVar13) == 0) {
          plVar11 = (long *)(uVar13 & (ulong)plVar7);
        }
        else {
          plVar11 = plVar7;
          if (plStack_f8 <= plVar7) {
            uVar8 = 0;
            if (plStack_f8 != (long *)0x0) {
              uVar8 = (ulong)plVar7 / (ulong)plStack_f8;
            }
            plVar11 = (long *)((long)plVar7 - uVar8 * (long)plStack_f8);
          }
        }
        plVar5 = *(long **)(lStack_100 + (long)plVar11 * 8);
        if (plVar5 != (long *)0x0) {
          for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
            plVar6 = (long *)plVar5[1];
            if (plVar6 == plVar7) {
              plVar6 = &lStack_100;
              func_0x000107c2b068(plVar6,plVar5 + 2,&lStack_c0);
              if (((ulong)plVar6 & 1) != 0) goto LAB_10a06e8f0;
            }
            else {
              if (((ulong)plVar10 & uVar13) == 0) {
                plVar6 = (long *)((ulong)plVar6 & uVar13);
              }
              else if (plVar10 <= plVar6) {
                uVar8 = 0;
                if (plVar10 != (long *)0x0) {
                  uVar8 = (ulong)plVar6 / (ulong)plVar10;
                }
                plVar6 = (long *)((long)plVar6 - uVar8 * (long)plVar10);
              }
              if (plVar6 != plVar11) break;
            }
          }
        }
      }
      plVar5 = (long *)0x38;
      __Znwm();
      uStack_70 = 1;
      *plVar5 = 0;
      plVar5[1] = (long)plVar7;
      plVar5[3] = lStack_b8;
      plVar5[2] = lStack_c0;
      plVar5[4] = lStack_b0;
      lStack_c0 = 0;
      lStack_b8 = 0;
      lStack_b0 = 0;
      plVar5[6] = (long)plStack_c8;
      plVar5[5] = lStack_d0;
      lStack_d0 = 0;
      plStack_c8 = (long *)0x0;
      plStack_80 = plVar5;
      plStack_78 = &lStack_100;
      if ((plVar10 == (long *)0x0) || (fStack_e0 * (float)plVar10 < (float)(lStack_e8 + 1))) {
        uVar13 = 1;
        if ((long *)0x2 < plVar10) {
          uVar13 = (ulong)(((ulong)plVar10 & (long)plVar10 - 1U) != 0);
        }
        uVar13 = uVar13 | (long)plVar10 << 1;
        uVar8 = (ulong)((float)(lStack_e8 + 1) / fStack_e0);
        if (uVar13 <= uVar8) {
          uVar13 = uVar8;
        }
        FUN_10a04f298(&lStack_100,uVar13);
        plVar10 = plStack_f8;
        if (((ulong)plStack_f8 & (long)plStack_f8 - 1U) == 0) {
          plVar11 = (long *)((long)plStack_f8 - 1U & (ulong)plVar7);
        }
        else {
          plVar11 = plVar7;
          if (plStack_f8 <= plVar7) {
            uVar13 = 0;
            if (plStack_f8 != (long *)0x0) {
              uVar13 = (ulong)plVar7 / (ulong)plStack_f8;
            }
            plVar11 = (long *)((long)plVar7 - uVar13 * (long)plStack_f8);
          }
        }
      }
      plVar7 = *(long **)(lStack_100 + (long)plVar11 * 8);
      if (plVar7 == (long *)0x0) {
        *plVar5 = (long)plStack_f0;
        *(long ***)(lStack_100 + (long)plVar11 * 8) = &plStack_f0;
        plStack_f0 = plVar5;
        if (*plVar5 != 0) {
          plVar7 = *(long **)(*plVar5 + 8);
          if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
            plVar7 = (long *)((ulong)plVar7 & (long)plVar10 - 1U);
          }
          else if (plVar10 <= plVar7) {
            uVar13 = 0;
            if (plVar10 != (long *)0x0) {
              uVar13 = (ulong)plVar7 / (ulong)plVar10;
            }
            plVar7 = (long *)((long)plVar7 - uVar13 * (long)plVar10);
          }
          plVar7 = (long *)(lStack_100 + (long)plVar7 * 8);
          goto LAB_10a06e8e0;
        }
      }
      else {
        *plVar5 = *plVar7;
LAB_10a06e8e0:
        *plVar7 = (long)plVar5;
      }
      lStack_e8 = lStack_e8 + 1;
LAB_10a06e8f0:
      plVar7 = plStack_c8;
      if (plStack_c8 != (long *)0x0) {
        plVar10 = plStack_c8 + 1;
        do {
          lVar9 = *plVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *plVar10 = lVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      if (lStack_b0 < 0) {
        __ZdlPv(lStack_c0);
      }
      if ((3 < aiStack_a8[0]) && (puStack_a0 != (undefined8 *)0x0)) {
        (**(code **)*puStack_a0)();
      }
      if (plStack_98 != (long *)0x0) {
        (**(code **)*plStack_98)();
      }
      plVar12 = (long *)((long)plVar12 + 1);
    } while (plVar12 != plVar4);
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  plVar3 = (long *)((long)plVar3 + ((long)param_4 >> 1));
  if (((ulong)param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar3 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(&plStack_80,plVar3,&lStack_100);
  func_0x00010a04efb4(plStack_f0);
  lVar9 = lStack_100;
  lStack_100 = 0;
  if (lVar9 != 0) {
    __ZdlPv();
  }
  func_0x00010a06e478(param_1,param_2,&plStack_80);
  plVar3 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar4 = plStack_78 + 1;
    do {
      lVar9 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a06eb28; end: 10a06eb4b;  */

void FUN_10a06eb28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10a06e5c0(extraout_x8,plVar3,FUN_10a033e7c,0,uVar5,param_1,param_4);
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



/* Entry: 10a06eb4c; end: 10a06ec03;  */

void FUN_10a06eb4c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a06e5c0(param_1,param_2,FUN_10a033e7c,0,param_3,param_4,param_5);
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



/* Entry: 10a06ec04; end: 10a06edc3;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10a06ec04(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 *in_stack_ffffffffffffffb8;
  
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
  FUN_10a06e410(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a033f60(&plStack_70,plVar7);
  FUN_10a06edc4(&stack0xffffffffffffffb8,param_2,&stack0xffffffffffffffa0);
  (**(code **)(*param_2 + 0x30))(&plStack_68,param_2);
  func_0x0001098843c0(&stack0xffffffffffffffa0,&plStack_68,param_2,&UNK_10f634758);
  (**(code **)(*param_2 + 0x2b0))
            (param_1,param_2,&stack0xffffffffffffffa0,&stack0xffffffffffffffb0,1);
  if (&stack0x00000000 != (undefined1 *)0x70) {
    (*(code *)*plStack_70)();
  }
  if (plStack_68 != (long *)0x0) {
    (**(code **)*plStack_68)();
  }
  if (in_stack_ffffffffffffffb8 != (undefined8 *)0x0) {
    (**(code **)*in_stack_ffffffffffffffb8)();
  }
  if (plStack_70 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_70 + 1);
    do {
      uVar10 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar10 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar10 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plStack_70 + 8))();
      }
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar10 = lVar8 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar7[lVar8 + 2];
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  lVar8 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar10) {
    uVar16 = uVar10 - uVar15;
    plVar14 = (long *)plVar6[0x4d];
    if ((ulong)((long)plVar14 - lVar13 >> 4) < uVar16) {
      if (uVar10 >> 0x3c == 0) {
        uVar9 = (long)plVar14 - lVar8 >> 3;
        if (uVar9 <= uVar10) {
          uVar9 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)((long)plVar14 - lVar8)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
          plStack_70 = plVar14;
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
  else if (uVar10 < uVar15) {
    lVar8 = lVar8 + uVar10 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar10;
  return;
}



/* Entry: 10a06edc4; end: 10a06eed7;  */

void FUN_10a06edc4(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                  long param_5)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  undefined4 *extraout_x8;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *unaff_x26;
  int aiStack_168 [2];
  undefined8 *puStack_160;
  undefined8 uStack_158;
  int iStack_150;
  undefined8 *puStack_148;
  int aiStack_140 [2];
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  int iStack_108;
  undefined4 uStack_104;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  int iStack_f0;
  undefined8 *puStack_e8;
  long lStack_d8;
  undefined8 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  iVar10 = (int)&puStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0xb0))(&puStack_80,param_2,0,0);
  pcStack_78 = FUN_10a06eed8;
  ppuStack_70 = &PTR_FUN_110b9e230;
  uStack_60 = param_3[1];
  uStack_68 = *param_3;
  lVar11 = 2;
  (**(code **)(*param_2 + 0x2a0))(param_1,param_2,&puStack_80,2,&pcStack_78);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  puVar7 = puStack_80;
  if (puStack_80 != (undefined8 *)0x0) {
    (**(code **)*puStack_80)();
    puVar7 = puStack_80;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (iVar10 == 0) {
    __Unwind_Resume(puVar7);
  }
  else {
    (*(code *)*ppuStack_70)(&ppuStack_70);
  }
  func_0x000104bd46a0(puVar7);
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = *(long **)(param_5 + 0x10);
  plVar14 = *(long **)(param_5 + 0x18);
  (**(code **)(*plVar14 + 0x58))();
  lVar16 = plVar14[0x47];
  uVar13 = *(undefined8 *)(param_5 + 0x18);
  func_0x0001098849a4(aiStack_140,uVar13,lVar11);
  puVar7 = puStack_138;
  iVar10 = aiStack_140[0];
  if (aiStack_140[0] == 3) {
    puStack_130 = puStack_138;
    unaff_x26 = puVar7;
  }
  else if (aiStack_140[0] == 2) {
    puStack_130 = (undefined8 *)CONCAT71(puStack_130._1_7_,puStack_138._0_1_);
    unaff_x26 = (undefined8 *)((ulong)puStack_138 & 0xff);
  }
  else if (3 < aiStack_140[0]) {
    puStack_138 = (undefined8 *)0x0;
    puStack_130 = puVar7;
    unaff_x26 = puVar7;
  }
  aiStack_140[0] = 0;
  uVar15 = *(undefined8 *)(param_5 + 0x18);
  func_0x0001098849a4(aiStack_168,uVar15,lVar11 + 0x10);
  iVar5 = aiStack_168[0];
  iStack_150 = aiStack_168[0];
  if (aiStack_168[0] == 3) {
    puStack_148 = puStack_160;
  }
  else if (aiStack_168[0] == 2) {
    puStack_148 = (undefined8 *)CONCAT71(puStack_148._1_7_,puStack_160._0_1_);
  }
  else if (3 < aiStack_168[0]) {
    puStack_148 = puStack_160;
    puStack_160 = (undefined8 *)0x0;
  }
  aiStack_168[0] = 0;
  uStack_158 = uVar15;
  if (*plVar9 == 0) {
    FUN_10a06f994(&uStack_110,uVar15,&UNK_10f634760,0x34);
    FUN_10a05589c(&uStack_158,&uStack_110);
    if ((3 < (int)uStack_110) &&
       ((undefined8 *)CONCAT44(uStack_104,iStack_108) != (undefined8 *)0x0)) {
      (*(code *)**(undefined8 **)CONCAT44(uStack_104,iStack_108))();
    }
    plVar14 = (long *)(ulong)(3 < iVar10);
LAB_10a06f5e0:
    if ((3 < iStack_150) && (puStack_148 != (undefined8 *)0x0)) {
      (**(code **)*puStack_148)();
    }
    if ((3 < aiStack_168[0]) && (puStack_160 != (undefined8 *)0x0)) {
      (**(code **)*puStack_160)();
    }
    if (((int)plVar14 != 0) && (puStack_130 != (undefined8 *)0x0)) {
      (**(code **)*puStack_130)();
    }
    if ((3 < aiStack_140[0]) && (puStack_138 != (undefined8 *)0x0)) {
      (**(code **)*puStack_138)();
    }
    *extraout_x8 = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    iStack_108 = iVar10;
    if (iVar10 == 3) {
      puStack_100 = puStack_130;
    }
    else if (iVar10 == 2) {
      puStack_100 = (undefined8 *)CONCAT71(puStack_100._1_7_,(char)unaff_x26);
    }
    else if (3 < iVar10) {
      puStack_100 = puStack_130;
      puStack_130 = (undefined8 *)0x0;
    }
    iStack_f0 = iVar5;
    if (iVar5 == 3) {
      puStack_e8 = puStack_148;
    }
    else if (iVar5 == 2) {
      puStack_e8 = (undefined8 *)CONCAT71(puStack_e8._1_7_,puStack_148._0_1_);
    }
    else if (3 < iVar5) {
      puStack_e8 = puStack_148;
      puStack_148 = (undefined8 *)0x0;
    }
    iStack_150 = 0;
    uStack_110 = uVar13;
    uStack_f8 = uVar15;
    if (((uint)*(undefined8 *)(*plVar9 + 0x10) >> 1 & 1) == 0) {
      puVar7 = (undefined8 *)0xe8;
      __Znwm();
      *puVar7 = FUN_10a08a568;
      puVar7[1] = FUN_10a08a9c8;
      func_0x0001092ba17c(puVar7 + 2);
      plVar14 = (long *)puVar7[7];
      if (plVar14 != (long *)0x0) {
        plVar1 = plVar14 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar7[9] = *plVar9;
      *plVar9 = 0;
      puVar7[10] = uStack_110;
      *(int *)(puVar7 + 0xb) = iStack_108;
      if (iStack_108 == 3) {
        puVar7[0xc] = puStack_100;
      }
      else if (iStack_108 == 2) {
        *(undefined1 *)(puVar7 + 0xc) = puStack_100._0_1_;
      }
      else if (3 < iStack_108) {
        puVar7[0xc] = puStack_100;
        puStack_100 = (undefined8 *)0x0;
      }
      iStack_108 = 0;
      puVar7[0xd] = uStack_f8;
      *(int *)(puVar7 + 0xe) = iStack_f0;
      if (iStack_f0 == 3) {
        puVar7[0xf] = puStack_e8;
      }
      else if (iStack_f0 == 2) {
        *(undefined1 *)(puVar7 + 0xf) = puStack_e8._0_1_;
      }
      else if (3 < iStack_f0) {
        puVar7[0xf] = puStack_e8;
        puStack_e8 = (undefined8 *)0x0;
      }
      iStack_f0 = 0;
      puVar7[0x18] = lVar16;
      *(undefined1 *)(puVar7 + 0x19) = 0;
      *(undefined1 *)(puVar7 + 0x1c) = 0;
      puVar8 = puVar7 + 0x18;
      func_0x0001092ba064(puVar8,puVar7);
      if (((ulong)puVar8 & 1) == 0) {
        puVar7[0x1b] = puVar7[9];
        puVar7[9] = 0;
        puVar7[0x11] = puVar7[10];
        iVar10 = *(int *)(puVar7 + 0xb);
        *(int *)(puVar7 + 0x12) = iVar10;
        if (iVar10 == 3) {
          puVar7[0x13] = puVar7[0xc];
        }
        else if (iVar10 == 2) {
          *(undefined1 *)(puVar7 + 0x13) = *(undefined1 *)(puVar7 + 0xc);
        }
        else if (3 < iVar10) {
          puVar7[0x13] = puVar7[0xc];
          puVar7[0xc] = 0;
        }
        *(undefined4 *)(puVar7 + 0xb) = 0;
        puVar7[0x14] = puVar7[0xd];
        iVar10 = *(int *)(puVar7 + 0xe);
        *(int *)(puVar7 + 0x15) = iVar10;
        if (iVar10 == 3) {
          puVar7[0x16] = puVar7[0xf];
        }
        else if (iVar10 == 2) {
          *(undefined1 *)(puVar7 + 0x16) = *(undefined1 *)(puVar7 + 0xf);
        }
        else if (3 < iVar10) {
          puVar7[0x16] = puVar7[0xf];
          puVar7[0xf] = 0;
        }
        *(undefined4 *)(puVar7 + 0xe) = 0;
        FUN_10a06fe80(puVar7 + 0x1a,puVar7 + 0x1b,puVar7 + 0x11);
        puVar7[0x18] = puVar7[0x1a];
        plVar9 = (long *)(puVar7[0x1a] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (((uint)*(undefined8 *)(puVar7[0x18] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar7 + 0x1c) = 1;
          lVar11 = puVar7[0x18];
          plVar9 = (long *)(lVar11 + 0x10);
          uVar13 = puVar7[3];
          do {
            lVar16 = *plVar9;
            if (lVar16 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar4) {
                *plVar9 = 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                uStack_128 = 0;
                puStack_120 = puVar7;
                uStack_118 = uVar13;
                func_0x000109d1b588(lVar11 + 0x18,&uStack_128);
                *(undefined8 *)(lVar11 + 0x10) = 0;
                if (plVar14 == (long *)0x0) goto LAB_10a06f59c;
                goto LAB_10a06f558;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar16 >> 1 & 1) == 0);
        }
        plVar9 = (long *)puVar7[0x18];
        if (((uint)*(undefined8 *)(puVar7[0x18] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(plVar9 + 0x12);
          goto LAB_10a06f724;
        }
        if (plVar9 != (long *)0x0) {
          puVar2 = (ulong *)(plVar9 + 1);
          do {
            uVar12 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        plVar9 = (long *)puVar7[0x1a];
        if (plVar9 != (long *)0x0) {
          puVar2 = (ulong *)(plVar9 + 1);
          do {
            uVar12 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        if ((3 < *(int *)(puVar7 + 0x15)) && ((undefined8 *)puVar7[0x16] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar7[0x16])();
        }
        if ((3 < *(int *)(puVar7 + 0x12)) && ((undefined8 *)puVar7[0x13] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar7[0x13])();
        }
        plVar9 = (long *)puVar7[0x1b];
        if (plVar9 != (long *)0x0) {
          puVar2 = (ulong *)(plVar9 + 1);
          do {
            uVar12 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        func_0x0001092ba100(puVar7 + 2);
        if ((3 < *(int *)(puVar7 + 0xe)) && ((undefined8 *)puVar7[0xf] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar7[0xf])();
        }
        if ((3 < *(int *)(puVar7 + 0xb)) && ((undefined8 *)puVar7[0xc] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar7[0xc])();
        }
        plVar9 = (long *)puVar7[9];
        if (plVar9 != (long *)0x0) {
          puVar2 = (ulong *)(plVar9 + 1);
          do {
            uVar12 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        func_0x000109d1a1d0(puVar7 + 2);
        __ZdlPv(puVar7);
      }
      if (plVar14 != (long *)0x0) {
LAB_10a06f558:
        puVar2 = (ulong *)(plVar14 + 1);
        do {
          uVar12 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar12 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar2 - 1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar12;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          goto LAB_10a06f588;
        }
      }
LAB_10a06f59c:
      if ((3 < iStack_f0) && (puStack_e8 != (undefined8 *)0x0)) {
        (**(code **)*puStack_e8)();
      }
      if ((3 < iStack_108) && (puStack_100 != (undefined8 *)0x0)) {
        (**(code **)*puStack_100)();
      }
      plVar14 = (long *)0x0;
      goto LAB_10a06f5e0;
    }
    plVar14 = (long *)*plVar9;
    *plVar9 = 0;
    if (((uint)plVar14[2] >> 5 & 1) != 0) {
      __ZNSt13exception_ptrC1ERKS_(&uStack_128,plVar14 + 0x12);
      FUN_10a06fd2c(&uStack_f8,&uStack_128);
      __ZNSt13exception_ptrD1Ev(&uStack_128);
LAB_10a06f1a4:
      puVar2 = (ulong *)(plVar14 + 1);
      do {
        uVar12 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar12 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar12 & 0x1fffffffc) == 4) {
        do {
          uVar12 = *puVar2 - 1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar12;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_10a06f588:
        if (uVar12 == 0) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
      goto LAB_10a06f59c;
    }
    if ((((uint)plVar14[2] >> 1 & 1) != 0) && (((uint)plVar14[2] >> 5 & 1) == 0)) {
      if ((*(byte *)(plVar14 + 0x15) & 1) == 0) goto LAB_10a06f724;
      FUN_10a06fb28(&uStack_110,plVar14 + 0x13);
      goto LAB_10a06f1a4;
    }
  }
  if (((uint)plVar14[2] >> 5 & 1) == 0) {
    puVar7 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC2EPKc();
    *puVar7 = &PTR_DAT_110ae85c0;
    ___cxa_throw(puVar7,&PTR_DAT_110ae8598,&DAT_1092af9d8);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&uStack_128,plVar14 + 0x12);
    func_0x0001092af97c(&uStack_128);
  }
LAB_10a06f724:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a06f728);
  (*pcVar6)();
}



/* Entry: 10a06eed8; end: 10a06f993;  */

void FUN_10a06eed8(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  ulong *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *unaff_x26;
  int aiStack_e8 [2];
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  int iStack_d0;
  undefined8 *puStack_c8;
  int aiStack_c0 [2];
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int iStack_88;
  undefined4 uStack_84;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  int iStack_70;
  undefined8 *puStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = *(long **)(param_6 + 0x10);
  plVar14 = *(long **)(param_6 + 0x18);
  (**(code **)(*plVar14 + 0x58))();
  lVar16 = plVar14[0x47];
  uVar13 = *(undefined8 *)(param_6 + 0x18);
  func_0x0001098849a4(aiStack_c0,uVar13,param_4);
  puVar8 = puStack_b8;
  iVar3 = aiStack_c0[0];
  if (aiStack_c0[0] == 3) {
    puStack_b0 = puStack_b8;
    unaff_x26 = puVar8;
  }
  else if (aiStack_c0[0] == 2) {
    puStack_b0 = (undefined8 *)CONCAT71(puStack_b0._1_7_,puStack_b8._0_1_);
    unaff_x26 = (undefined8 *)((ulong)puStack_b8 & 0xff);
  }
  else if (3 < aiStack_c0[0]) {
    puStack_b8 = (undefined8 *)0x0;
    puStack_b0 = puVar8;
    unaff_x26 = puVar8;
  }
  aiStack_c0[0] = 0;
  uVar15 = *(undefined8 *)(param_6 + 0x18);
  func_0x0001098849a4(aiStack_e8,uVar15,param_4 + 0x10);
  iVar6 = aiStack_e8[0];
  iStack_d0 = aiStack_e8[0];
  if (aiStack_e8[0] == 3) {
    puStack_c8 = puStack_e0;
  }
  else if (aiStack_e8[0] == 2) {
    puStack_c8 = (undefined8 *)CONCAT71(puStack_c8._1_7_,puStack_e0._0_1_);
  }
  else if (3 < aiStack_e8[0]) {
    puStack_c8 = puStack_e0;
    puStack_e0 = (undefined8 *)0x0;
  }
  aiStack_e8[0] = 0;
  uStack_d8 = uVar15;
  if (*plVar10 == 0) {
    FUN_10a06f994(&uStack_90,uVar15,&UNK_10f634760,0x34);
    FUN_10a05589c(&uStack_d8,&uStack_90);
    if ((3 < (int)uStack_90) && ((undefined8 *)CONCAT44(uStack_84,iStack_88) != (undefined8 *)0x0))
    {
      (*(code *)**(undefined8 **)CONCAT44(uStack_84,iStack_88))();
    }
    plVar14 = (long *)(ulong)(3 < iVar3);
LAB_10a06f5e0:
    if ((3 < iStack_d0) && (puStack_c8 != (undefined8 *)0x0)) {
      (**(code **)*puStack_c8)();
    }
    if ((3 < aiStack_e8[0]) && (puStack_e0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_e0)();
    }
    if (((int)plVar14 != 0) && (puStack_b0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_b0)();
    }
    if ((3 < aiStack_c0[0]) && (puStack_b8 != (undefined8 *)0x0)) {
      (**(code **)*puStack_b8)();
    }
    *param_1 = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    iStack_88 = iVar3;
    if (iVar3 == 3) {
      puStack_80 = puStack_b0;
    }
    else if (iVar3 == 2) {
      puStack_80 = (undefined8 *)CONCAT71(puStack_80._1_7_,(char)unaff_x26);
    }
    else if (3 < iVar3) {
      puStack_80 = puStack_b0;
      puStack_b0 = (undefined8 *)0x0;
    }
    iStack_70 = iVar6;
    if (iVar6 == 3) {
      puStack_68 = puStack_c8;
    }
    else if (iVar6 == 2) {
      puStack_68 = (undefined8 *)CONCAT71(puStack_68._1_7_,puStack_c8._0_1_);
    }
    else if (3 < iVar6) {
      puStack_68 = puStack_c8;
      puStack_c8 = (undefined8 *)0x0;
    }
    iStack_d0 = 0;
    uStack_90 = uVar13;
    uStack_78 = uVar15;
    if (((uint)*(undefined8 *)(*plVar10 + 0x10) >> 1 & 1) == 0) {
      puVar8 = (undefined8 *)0xe8;
      __Znwm();
      *puVar8 = FUN_10a08a568;
      puVar8[1] = FUN_10a08a9c8;
      func_0x0001092ba17c(puVar8 + 2);
      plVar14 = (long *)puVar8[7];
      if (plVar14 != (long *)0x0) {
        plVar1 = plVar14 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar8[9] = *plVar10;
      *plVar10 = 0;
      puVar8[10] = uStack_90;
      *(int *)(puVar8 + 0xb) = iStack_88;
      if (iStack_88 == 3) {
        puVar8[0xc] = puStack_80;
      }
      else if (iStack_88 == 2) {
        *(undefined1 *)(puVar8 + 0xc) = puStack_80._0_1_;
      }
      else if (3 < iStack_88) {
        puVar8[0xc] = puStack_80;
        puStack_80 = (undefined8 *)0x0;
      }
      iStack_88 = 0;
      puVar8[0xd] = uStack_78;
      *(int *)(puVar8 + 0xe) = iStack_70;
      if (iStack_70 == 3) {
        puVar8[0xf] = puStack_68;
      }
      else if (iStack_70 == 2) {
        *(undefined1 *)(puVar8 + 0xf) = puStack_68._0_1_;
      }
      else if (3 < iStack_70) {
        puVar8[0xf] = puStack_68;
        puStack_68 = (undefined8 *)0x0;
      }
      iStack_70 = 0;
      puVar8[0x18] = lVar16;
      *(undefined1 *)(puVar8 + 0x19) = 0;
      *(undefined1 *)(puVar8 + 0x1c) = 0;
      puVar9 = puVar8 + 0x18;
      func_0x0001092ba064(puVar9,puVar8);
      if (((ulong)puVar9 & 1) == 0) {
        puVar8[0x1b] = puVar8[9];
        puVar8[9] = 0;
        puVar8[0x11] = puVar8[10];
        iVar3 = *(int *)(puVar8 + 0xb);
        *(int *)(puVar8 + 0x12) = iVar3;
        if (iVar3 == 3) {
          puVar8[0x13] = puVar8[0xc];
        }
        else if (iVar3 == 2) {
          *(undefined1 *)(puVar8 + 0x13) = *(undefined1 *)(puVar8 + 0xc);
        }
        else if (3 < iVar3) {
          puVar8[0x13] = puVar8[0xc];
          puVar8[0xc] = 0;
        }
        *(undefined4 *)(puVar8 + 0xb) = 0;
        puVar8[0x14] = puVar8[0xd];
        iVar3 = *(int *)(puVar8 + 0xe);
        *(int *)(puVar8 + 0x15) = iVar3;
        if (iVar3 == 3) {
          puVar8[0x16] = puVar8[0xf];
        }
        else if (iVar3 == 2) {
          *(undefined1 *)(puVar8 + 0x16) = *(undefined1 *)(puVar8 + 0xf);
        }
        else if (3 < iVar3) {
          puVar8[0x16] = puVar8[0xf];
          puVar8[0xf] = 0;
        }
        *(undefined4 *)(puVar8 + 0xe) = 0;
        FUN_10a06fe80(puVar8 + 0x1a,puVar8 + 0x1b,puVar8 + 0x11);
        puVar8[0x18] = puVar8[0x1a];
        plVar10 = (long *)(puVar8[0x1a] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = *plVar10 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((uint)*(undefined8 *)(puVar8[0x18] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar8 + 0x1c) = 1;
          lVar16 = puVar8[0x18];
          plVar10 = (long *)(lVar16 + 0x10);
          uVar13 = puVar8[3];
          do {
            lVar12 = *plVar10;
            if (lVar12 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar5) {
                *plVar10 = 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                uStack_a8 = 0;
                puStack_a0 = puVar8;
                uStack_98 = uVar13;
                func_0x000109d1b588(lVar16 + 0x18,&uStack_a8);
                *(undefined8 *)(lVar16 + 0x10) = 0;
                if (plVar14 == (long *)0x0) goto LAB_10a06f59c;
                goto LAB_10a06f558;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar12 >> 1 & 1) == 0);
        }
        plVar10 = (long *)puVar8[0x18];
        if (((uint)*(undefined8 *)(puVar8[0x18] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(plVar10 + 0x12);
          goto LAB_10a06f724;
        }
        if (plVar10 != (long *)0x0) {
          puVar2 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        plVar10 = (long *)puVar8[0x1a];
        if (plVar10 != (long *)0x0) {
          puVar2 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        if ((3 < *(int *)(puVar8 + 0x15)) && ((undefined8 *)puVar8[0x16] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar8[0x16])();
        }
        if ((3 < *(int *)(puVar8 + 0x12)) && ((undefined8 *)puVar8[0x13] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar8[0x13])();
        }
        plVar10 = (long *)puVar8[0x1b];
        if (plVar10 != (long *)0x0) {
          puVar2 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        func_0x0001092ba100(puVar8 + 2);
        if ((3 < *(int *)(puVar8 + 0xe)) && ((undefined8 *)puVar8[0xf] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar8[0xf])();
        }
        if ((3 < *(int *)(puVar8 + 0xb)) && ((undefined8 *)puVar8[0xc] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar8[0xc])();
        }
        plVar10 = (long *)puVar8[9];
        if (plVar10 != (long *)0x0) {
          puVar2 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        func_0x000109d1a1d0(puVar8 + 2);
        __ZdlPv(puVar8);
      }
      if (plVar14 != (long *)0x0) {
LAB_10a06f558:
        puVar2 = (ulong *)(plVar14 + 1);
        do {
          uVar11 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar11 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar2 - 1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto LAB_10a06f588;
        }
      }
LAB_10a06f59c:
      if ((3 < iStack_70) && (puStack_68 != (undefined8 *)0x0)) {
        (**(code **)*puStack_68)();
      }
      if ((3 < iStack_88) && (puStack_80 != (undefined8 *)0x0)) {
        (**(code **)*puStack_80)();
      }
      plVar14 = (long *)0x0;
      goto LAB_10a06f5e0;
    }
    plVar14 = (long *)*plVar10;
    *plVar10 = 0;
    if (((uint)plVar14[2] >> 5 & 1) != 0) {
      __ZNSt13exception_ptrC1ERKS_(&uStack_a8,plVar14 + 0x12);
      FUN_10a06fd2c(&uStack_78,&uStack_a8);
      __ZNSt13exception_ptrD1Ev(&uStack_a8);
LAB_10a06f1a4:
      puVar2 = (ulong *)(plVar14 + 1);
      do {
        uVar11 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar11 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar2 - 1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_10a06f588:
        if (uVar11 == 0) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
      goto LAB_10a06f59c;
    }
    if ((((uint)plVar14[2] >> 1 & 1) != 0) && (((uint)plVar14[2] >> 5 & 1) == 0)) {
      if ((*(byte *)(plVar14 + 0x15) & 1) == 0) goto LAB_10a06f724;
      FUN_10a06fb28(&uStack_90,plVar14 + 0x13);
      goto LAB_10a06f1a4;
    }
  }
  if (((uint)plVar14[2] >> 5 & 1) == 0) {
    puVar8 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC2EPKc();
    *puVar8 = &PTR_DAT_110ae85c0;
    ___cxa_throw(puVar8,&PTR_DAT_110ae8598,&DAT_1092af9d8);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&uStack_a8,plVar14 + 0x12);
    func_0x0001092af97c(&uStack_a8);
  }
LAB_10a06f724:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a06f728);
  (*pcVar7)();
}



/* Entry: 10a06f994; end: 10a06fac7;  */

void FUN_10a06f994(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puStack_68;
  long *plStack_60;
  int iStack_58;
  undefined8 *puStack_50;
  undefined1 auStack_48 [8];
  int iStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  (**(code **)(*param_2 + 0x30))(&puStack_68,param_2);
  puStack_50 = puStack_68;
  puStack_68 = (undefined8 *)0x0;
  iStack_58 = 7;
  plStack_60 = param_2;
  FUN_10a055e1c(auStack_48,&plStack_60,&DAT_10f685520);
  FUN_10a055f9c(param_1,auStack_48,&uStack_30);
  if ((3 < iStack_40) && (puStack_38 != (undefined8 *)0x0)) {
    (**(code **)*puStack_38)();
  }
  if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
    (**(code **)*puStack_50)();
  }
  if (puStack_68 != (undefined8 *)0x0) {
    (**(code **)*puStack_68)();
  }
  return;
}



/* Entry: 10a06fac8; end: 10a06fb27;  */

long FUN_10a06fac8(long param_1)

{
  if ((3 < *(int *)(param_1 + 0x20)) && (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x28))();
  }
  if ((3 < *(int *)(param_1 + 8)) && (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x10))();
  }
  return param_1;
}



/* Entry: 10a06fb28; end: 10a06fd2b;  */

void FUN_10a06fb28(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110b9c6c0;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
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
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a06fd2c; end: 10a06fe7f;  */

void FUN_10a06fd2c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001092af97c(param_2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a06fd54);
  (*pcVar1)();
}



/* Entry: 10a06fe80; end: 10a07040b;  */

void FUN_10a06fe80(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar6 = (undefined8 *)0xb0;
  __Znwm();
  *puVar6 = FUN_10a089f64;
  puVar6[1] = FUN_10a08a370;
  uVar9 = *param_2;
  *param_2 = 0;
  puVar6[9] = *param_3;
  puVar6[0x10] = uVar9;
  iVar2 = *(int *)(param_3 + 1);
  *(int *)(puVar6 + 10) = iVar2;
  if (iVar2 == 3) {
    puVar6[0xb] = param_3[2];
  }
  else if (iVar2 == 2) {
    *(undefined1 *)(puVar6 + 0xb) = *(undefined1 *)(param_3 + 2);
  }
  else if (3 < iVar2) {
    puVar6[0xb] = param_3[2];
    param_3[2] = 0;
  }
  *(undefined4 *)(param_3 + 1) = 0;
  puVar6[0xc] = param_3[3];
  iVar2 = *(int *)(param_3 + 4);
  *(int *)(puVar6 + 0xd) = iVar2;
  if (iVar2 == 3) {
    puVar6[0xe] = param_3[5];
  }
  else if (iVar2 == 2) {
    *(undefined1 *)(puVar6 + 0xe) = *(undefined1 *)(param_3 + 5);
  }
  else if (3 < iVar2) {
    puVar6[0xe] = param_3[5];
    param_3[5] = 0;
  }
  *(undefined4 *)(param_3 + 4) = 0;
  func_0x0001092ba17c(puVar6 + 2);
  lVar10 = puVar6[7];
  if (lVar10 != 0) {
    plVar8 = (long *)(lVar10 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar10;
  puVar6[0x12] = 0;
  *(undefined1 *)(puVar6 + 0x15) = 0;
  puVar7 = puVar6 + 0x12;
  FUN_10a057268(puVar7,puVar6);
  if (((ulong)puVar7 & 1) == 0) {
    puVar6[0x11] = puVar6[0x12];
    FUN_10a0704b4(puVar6 + 0x13,puVar6 + 0x11,puVar6[0x10]);
    puVar6[0x12] = puVar6[0x13];
    plVar8 = (long *)(puVar6[0x13] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar6[0x12] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x15) = 1;
      lVar10 = puVar6[0x12];
      plVar8 = (long *)(lVar10 + 0x10);
      uStack_48 = puVar6[3];
      do {
        lVar12 = *plVar8;
        if (lVar12 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_58 = 0;
            puStack_50 = puVar6;
            func_0x000109d1b588(lVar10 + 0x18,&uStack_58);
            *(undefined8 *)(lVar10 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar12 >> 1 & 1) == 0);
    }
    plVar8 = (long *)puVar6[0x12];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    plVar8 = (long *)puVar6[0x13];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    if (((uint)*(undefined8 *)(puVar6[0x11] + 0x10) >> 1 & 1) == 0) {
      lVar10 = puVar6[0x10];
      puVar6[0x14] = lVar10;
      puVar6[0x10] = 0;
      if (((uint)*(undefined8 *)(lVar10 + 0x10) >> 5 & 1) == 0) {
        func_0x0001092af8bc(puVar6 + 0x14);
        if ((*(byte *)(puVar6[0x14] + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a0702c8);
          (*pcVar5)();
        }
        FUN_10a06fb28(puVar6 + 9,puVar6[0x14] + 0x98);
      }
      else {
        __ZNSt13exception_ptrC1ERKS_(&uStack_58,puVar6[0x14] + 0x90);
        FUN_10a06fd2c(puVar6 + 0xc,&uStack_58);
        __ZNSt13exception_ptrD1Ev(&uStack_58);
      }
      plVar8 = (long *)puVar6[0x14];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar11 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
    }
    func_0x0001092ba100(puVar6 + 2);
    plVar8 = (long *)puVar6[0x11];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
    }
    func_0x000109d1a1d0(puVar6 + 2);
    if ((3 < *(int *)(puVar6 + 0xd)) && ((undefined8 *)puVar6[0xe] != (undefined8 *)0x0)) {
      (*(code *)**(undefined8 **)puVar6[0xe])();
    }
    if ((3 < *(int *)(puVar6 + 10)) && ((undefined8 *)puVar6[0xb] != (undefined8 *)0x0)) {
      (*(code *)**(undefined8 **)puVar6[0xb])();
    }
    plVar8 = (long *)puVar6[0x10];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    __ZdlPv(puVar6);
  }
  return;
}



/* Entry: 10a07040c; end: 10a0704b3;  */

long * FUN_10a07040c(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((3 < (int)param_1[5]) && ((undefined8 *)param_1[6] != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)param_1[6])();
  }
  if ((3 < (int)param_1[2]) && ((undefined8 *)param_1[3] != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)param_1[3])();
  }
  plVar4 = (long *)*param_1;
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
  return param_1;
}



/* Entry: 10a0704b4; end: 10a070a37;  */

/* WARNING: Removing unreachable block (ram,0x00010a07060c) */
/* WARNING: Removing unreachable block (ram,0x00010a07081c) */
/* WARNING: Removing unreachable block (ram,0x00010a0705cc) */
/* WARNING: Removing unreachable block (ram,0x00010a070760) */

void FUN_10a0704b4(long *param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined **ppuStack_58;
  
  if (param_3 != 0) {
    plVar9 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)0x118;
  __Znwm();
  plVar4[2] = 0;
  plVar4[1] = 0x200000006;
  *(undefined2 *)(plVar4 + 3) = 4;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = (long)(plVar4 + 3);
  plVar4[0x12] = 0;
  *(undefined1 *)(plVar4 + 0x13) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 0;
  *plVar4 = (long)&PTR_FUN_110b9e208;
  plVar10 = plVar4 + 0x16;
  *plVar10 = param_3;
  plVar9 = (long *)(*param_2 + 8);
  plVar4[0x17] = *param_2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = *plVar9 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[0x1a] = 0;
  plVar4[0x1b] = 0x32aaaba7;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  plVar4[0x22] = 0;
  lStack_78 = 0;
  plVar4[0x18] = (long)plVar4;
  plVar4[0x19] = 0;
  plStack_70 = plVar10;
  if (((uint)*(undefined8 *)(plVar4[0x17] + 0x10) >> 1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(plVar4 + 0x1b);
    lVar8 = *plVar10;
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar6 = lVar8 + 0x18;
          pcStack_68 = FUN_10a070a38;
          ppuStack_58 = &PTR_PTR_1132fed68;
          plStack_60 = plVar10;
          func_0x000109d1b588(lVar6,&pcStack_68);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          plStack_70[3] = lVar6;
          lVar8 = plVar4[0x17];
          plVar9 = (long *)(lVar8 + 0x10);
          goto LAB_10a07074c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plStack_70[3] = 0;
    lVar8 = plVar4[0x18];
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          func_0x000109d1b4dc(lVar8 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plVar9 = (long *)plVar4[0x17];
    plVar4[0x17] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
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
        (**(code **)(*plVar9 + 0x10))(plVar9);
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
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x18];
    plVar4[0x18] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x18);
    }
    *param_1 = *plVar10;
    *plVar10 = 0;
    plStack_80 = plVar4;
LAB_10a07098c:
    __ZNSt3__15mutex6unlockEv(plVar4 + 0x1b);
  }
  else {
    lVar8 = plVar4[0x18];
    plVar9 = plVar4;
    FUN_109d1857c();
    func_0x000109d1b350(lVar8,plVar9);
    plVar9 = (long *)*plVar10;
    *plVar10 = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
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
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    plVar9 = (long *)plVar4[0x17];
    plVar4[0x17] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
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
        (**(code **)(*plVar9 + 0x10))(plVar9);
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
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x18];
    plVar4[0x18] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x18);
    }
    *param_1 = (long)plVar4;
    plStack_80 = (long *)0x0;
  }
  if (lStack_78 != 0) {
    func_0x0001092b4274(&lStack_78);
  }
  if (plStack_80 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_80 + 1);
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
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  return;
LAB_10a07074c:
  do {
    lVar7 = *plVar9;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar6 = lVar8 + 0x18;
        pcStack_68 = FUN_10a070bd4;
        ppuStack_58 = &PTR_PTR_1132fed68;
        plStack_60 = plVar10;
        func_0x000109d1b588(lVar6,&pcStack_68);
        *(undefined8 *)(lVar8 + 0x10) = 0;
        plStack_70[4] = lVar6;
        *param_1 = (long)plVar4;
        goto LAB_10a070988;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar7 >> 1 & 1) == 0);
  plStack_70[4] = 0;
  lVar8 = plVar4[0x18];
  FUN_109d1857c();
  func_0x000109d1b350(lVar8,lVar6);
  plVar9 = (long *)plVar4[0x17];
  plVar4[0x17] = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
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
      (**(code **)(*plVar9 + 0x10))(plVar9);
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
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  lVar6 = *plVar10;
  plVar9 = (long *)(lVar6 + 0x10);
  lVar8 = plStack_70[3];
  while (lVar7 = *plVar9, lVar7 != 0) {
    ClearExclusiveLocal();
LAB_10a070830:
    if (((uint)lVar7 >> 1 & 1) != 0) goto LAB_10a070980;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar3) {
    *plVar9 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_10a070830;
  pcStack_68 = FUN_10a070a38;
  ppuStack_58 = &PTR_PTR_1132fed68;
  plStack_60 = plVar10;
  FUN_109d1b624(lVar6 + 0x18,&pcStack_68,lVar8);
  *(undefined8 *)(lVar6 + 0x10) = 0;
  plStack_70[3] = 0;
  plVar9 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
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
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  lVar8 = plVar4[0x18];
  plVar4[0x18] = 0;
  if (lVar8 != 0) {
    func_0x0001092b4274(plVar4 + 0x18);
  }
LAB_10a070980:
  *param_1 = (long)plVar4;
LAB_10a070988:
  plStack_80 = (long *)0x0;
  goto LAB_10a07098c;
}



/* Entry: 10a070a38; end: 10a070bd3;  */

void FUN_10a070a38(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcStack_48;
  long *plStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  pcStack_48 = FUN_10a070bd4;
  ppuStack_38 = &PTR_PTR_1132fed68;
  plStack_40 = param_1;
  func_0x0001092ba560(param_1 + 1,param_1 + 4,&pcStack_48);
  lVar8 = param_1[2];
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    func_0x0001092af8bc(param_1);
    lVar9 = *param_1;
    if ((*(byte *)(lVar9 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a070bd0);
      (*pcVar4)();
    }
    plVar5 = (long *)(lVar8 + 0x10);
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
          if (*(char *)(lVar8 + 0xa8) == '\x01') {
            func_0x00010a04d5a8(lVar8 + 0x98);
            *(undefined1 *)(lVar8 + 0xa8) = 0;
          }
          lVar7 = *(long *)(lVar9 + 0xa0);
          uVar10 = *(undefined8 *)(lVar9 + 0x98);
          *(undefined8 *)(lVar8 + 0xa0) = *(undefined8 *)(lVar9 + 0xa0);
          *(undefined8 *)(lVar8 + 0x98) = uVar10;
          if (lVar7 != 0) {
            plVar5 = (long *)(lVar7 + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar3) {
                *plVar5 = *plVar5 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          *(undefined1 *)(lVar8 + 0xa8) = 1;
          *(undefined8 *)(lVar8 + 0x10) = 2;
          FUN_109d1b4dc(lVar8 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar7 >> 1 & 1) == 0);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pcStack_48,*param_1 + 0x90);
    func_0x000109d1b350(lVar8,&pcStack_48);
    __ZNSt13exception_ptrD1Ev(&pcStack_48);
  }
  plVar5 = (long *)*param_1;
  *param_1 = 0;
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
  FUN_10a070f74(param_1,param_1 + 3);
  return;
}



/* Entry: 10a070bd4; end: 10a070cb3;  */

void FUN_10a070bd4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  pcStack_48 = FUN_10a070a38;
  ppuStack_38 = &PTR_PTR_1132fed68;
  lVar4 = param_1;
  lStack_40 = param_1;
  func_0x0001098adf90(param_1,param_1 + 0x18,&pcStack_48);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  FUN_109d1857c();
  func_0x000109d1b350(uVar6,lVar4);
  plVar7 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
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
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  FUN_10a070f74(param_1,param_1 + 0x20);
  return;
}



/* Entry: 10a070cb4; end: 10a070d27;  */

long * FUN_10a070cb4(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_1[1] != 0) {
    func_0x0001092b4274();
  }
  plVar4 = (long *)*param_1;
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
  return param_1;
}



/* Entry: 10a070d28; end: 10a070f73;  */

undefined8 * FUN_10a070d28(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110b9e208;
  __ZNSt3__15mutexD1Ev(param_1 + 0x1b);
  if (param_1[0x18] != 0) {
    func_0x0001092b4274();
  }
  plVar5 = (long *)param_1[0x17];
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
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
  plVar5 = (long *)param_1[0x16];
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
  *param_1 = &PTR_FUN_110b9d730;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    func_0x00010a04d5a8(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a070f74; end: 10a070fe3;  */

void FUN_10a070f74(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lStack_28;
  
  *param_2 = 0;
  if ((*(long *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x20) == 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
    lStack_28 = 0;
    if (lVar1 != 0) {
      func_0x0001092b4274(&lStack_28,lVar1);
      if (lStack_28 != 0) {
        func_0x0001092b4274(&lStack_28);
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 10a070fe4; end: 10a070fff;  */

void FUN_10a070fe4(void)

{
  return;
}



/* Entry: 10a071000; end: 10a0711d7;  */

void FUN_10a071000(undefined4 *param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  ulong uVar8;
  long *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
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
  if ((*(byte *)(plVar5 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a0711c4);
    (*pcVar3)();
  }
  plVar6 = (long *)0xb0;
  __Znwm();
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110b9e258;
  plVar17 = plVar6 + 3;
  *plVar17 = (long)&PTR_FUN_110b9b9c8;
  plVar6[4] = 0;
  plVar6[5] = 0;
  ppuVar7 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  plVar6[8] = (long)*ppuVar7;
  plVar6[10] = 0;
  plVar6[9] = 0;
  plVar6[0xc] = 0;
  plVar6[0xb] = 0;
  plVar6[0xe] = 0;
  plVar6[0xd] = 0;
  plVar6[0xf] = 0;
  *(undefined4 *)(plVar6 + 0x10) = 0x3f800000;
  plVar6[0x12] = 0;
  plVar6[0x11] = 0;
  plVar6[0x14] = 0;
  plVar6[0x13] = 0;
  *(undefined4 *)(plVar6 + 0x15) = 0x3f800000;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
    if (bVar2) {
      *extraout_x8 = *extraout_x8 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar15 = plVar6 + 2;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar2) {
      *plVar15 = *plVar15 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar6[6] = (long)plVar17;
  plVar6[7] = (long)plVar6;
  do {
    lVar10 = *extraout_x8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
    if (bVar2) {
      *extraout_x8 = lVar10 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar10 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
  plVar15 = (long *)plVar5[4];
  if (plVar15 == (long *)0x0) {
    func_0x000109899fd8(plVar5);
    plVar15 = (long *)plVar5[4];
  }
  plVar5[4] = *plVar15;
  *plVar15 = (long)&PTR_DAT_110b17478;
  plVar15[1] = (long)plVar17;
  plVar15[2] = (long)plVar6;
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar15,plVar6,&UNK_10989ba24,param_3);
  *param_1 = 7;
  plVar6 = plVar5 + 0x4b;
  lVar10 = plVar5[0x59];
  uVar8 = lVar10 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar6[lVar10 + 2];
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
  lVar10 = *plVar6;
  lVar13 = plVar5[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar16 = lVar11 >> 4;
  if (uVar16 < uVar8) {
    uVar18 = uVar8 - uVar16;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar18) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar4 + lVar11;
          _bzero(lVar13,uVar18 * 0x10);
          lVar12 = lVar13 + uVar16 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar6 = lVar12;
          plVar5[0x4c] = lVar13 + uVar18 * 0x10;
          plVar5[0x4d] = lVar4 + uVar9 * 0x10;
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar13,uVar18 * 0x10);
    plVar5[0x4c] = lVar13 + uVar18 * 0x10;
  }
  else if (uVar8 < uVar16) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar5[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10a0711d8; end: 10a0711e7;  */

void FUN_10a0711d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9e258;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0711e8; end: 10a071207;  */

void FUN_10a0711e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9e258;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a071208; end: 10a071217;  */

void FUN_10a071208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a071210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a071218; end: 10a071257;  */

long * FUN_10a071218(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  *param_1 = (long)param_2;
  if (param_3 == 0) {
    param_1[1] = 0;
    plVar1 = param_1;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = param_3;
    plVar1 = (long *)0x0;
    if (param_3 != 0) {
      return param_1;
    }
  }
  FUN_10a043ecc();
  lVar3 = plVar1[1];
  plVar5 = plVar1;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      *(undefined8 *)(*plVar1 + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
    plVar5 = (long *)plVar1[2];
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar6 = plVar5;
    if (plVar5 != (long *)0x0 && param_2 != (long *)0x0) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (plVar6 + 2,param_2 + 2);
        func_0x00010a04b6d4(plVar6 + 5,param_2[5],param_2[6]);
        plVar5 = (long *)*plVar6;
        FUN_10a071394(plVar1,plVar6);
        param_2 = (long *)*param_2;
        if (plVar5 == (long *)0x0) break;
        plVar6 = plVar5;
      } while (param_2 != (long *)0x0);
    }
    func_0x00010a04efb4(plVar5);
  }
  for (; param_2 != (long *)0x0; param_2 = (long *)*param_2) {
    puVar2 = (undefined8 *)0x38;
    __Znwm();
    *puVar2 = 0;
    puVar2[1] = 0;
    FUN_10a04f468(puVar2 + 2,param_2 + 2);
    plVar5 = plVar1;
    func_0x000107c2b05c(plVar1,puVar2 + 2);
    puVar2[1] = plVar5;
    plVar5 = plVar1;
    FUN_10a071394(plVar1,puVar2);
  }
  return plVar5;
}



/* Entry: 10a071258; end: 10a071393;  */

void FUN_10a071258(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
    plVar5 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    plVar2 = plVar5;
    if (plVar5 != (long *)0x0 && param_2 != (long *)0x0) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (plVar2 + 2,param_2 + 2);
        func_0x00010a04b6d4(plVar2 + 5,param_2[5],param_2[6]);
        plVar5 = (long *)*plVar2;
        FUN_10a071394(param_1,plVar2);
        param_2 = (long *)*param_2;
        if (plVar5 == (long *)0x0) break;
        plVar2 = plVar5;
      } while (param_2 != (long *)0x0);
    }
    func_0x00010a04efb4(plVar5);
  }
  for (; param_2 != (long *)0x0; param_2 = (long *)*param_2) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_10a04f468(puVar1 + 2,param_2 + 2);
    plVar2 = param_1;
    func_0x000107c2b05c(param_1,puVar1 + 2);
    puVar1[1] = plVar2;
    FUN_10a071394(param_1,puVar1);
  }
  return;
}



/* Entry: 10a071394; end: 10a0717cb;  */

void FUN_10a071394(long *param_1,long *param_2,long *param_3)

{
  char cVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *unaff_x24;
  ulong uVar17;
  uint uVar18;
  long *plVar19;
  byte bVar20;
  
  plVar9 = param_2 + 2;
  plVar12 = param_1;
  func_0x000107c2b05c(param_1,plVar9);
  param_2[1] = (long)plVar12;
  plVar16 = (long *)param_1[1];
  if ((plVar16 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar16 < (float)(param_1[3] + 1))) {
    uVar17 = 1;
    if ((long *)0x2 < plVar16) {
      uVar17 = (ulong)(((ulong)plVar16 & (long)plVar16 - 1U) != 0);
    }
    plVar8 = (long *)(uVar17 | (long)plVar16 << 1);
    plVar11 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (plVar8 <= plVar11) {
      plVar8 = plVar11;
    }
    plVar11 = plVar12;
    if ((long)plVar8 - 1U == 0) {
      plVar8 = (long *)0x2;
    }
    else if (((ulong)plVar8 & (long)plVar8 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar16 = (long *)param_1[1];
      plVar11 = plVar8;
    }
    if (plVar16 < plVar8) {
LAB_10a071450:
      if ((ulong)plVar8 >> 0x3d != 0) {
        func_0x000109ffded8();
        plVar12 = plVar11;
        func_0x000107c2b05c();
        plVar16 = (long *)plVar11[1];
        if (plVar16 != (long *)0x0) {
          uVar17 = (long)plVar16 - 1;
          if (((ulong)plVar16 & uVar17) == 0) {
            unaff_x24 = (long *)(uVar17 & (ulong)plVar12);
          }
          else {
            unaff_x24 = plVar12;
            if (plVar16 <= plVar12) {
              uVar2 = 0;
              if (plVar16 != (long *)0x0) {
                uVar2 = (ulong)plVar12 / (ulong)plVar16;
              }
              unaff_x24 = (long *)((long)plVar12 - uVar2 * (long)plVar16);
            }
          }
          plVar8 = *(long **)(*plVar11 + (long)unaff_x24 * 8);
          if (plVar8 != (long *)0x0) {
            for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
              plVar19 = (long *)plVar8[1];
              if (plVar19 == plVar12) {
                plVar19 = plVar11;
                func_0x000107c2b068(plVar11,plVar8 + 2,plVar9);
                if (((ulong)plVar19 & 1) != 0) {
                  return;
                }
              }
              else {
                if (((ulong)plVar16 & uVar17) == 0) {
                  plVar19 = (long *)((ulong)plVar19 & uVar17);
                }
                else if (plVar16 <= plVar19) {
                  uVar2 = 0;
                  if (plVar16 != (long *)0x0) {
                    uVar2 = (ulong)plVar19 / (ulong)plVar16;
                  }
                  plVar19 = (long *)((long)plVar19 - uVar2 * (long)plVar16);
                }
                if (plVar19 != unaff_x24) break;
              }
            }
          }
        }
        plVar9 = (long *)0x38;
        __Znwm();
        *plVar9 = 0;
        plVar9[1] = (long)plVar12;
        if (*(char *)((long)param_3 + 0x17) < '\0') {
          func_0x000107c3192c(plVar9 + 2,*param_3,param_3[1]);
        }
        else {
          lVar6 = *param_3;
          plVar9[3] = param_3[1];
          plVar9[2] = lVar6;
          plVar9[4] = param_3[2];
        }
        lVar7 = param_3[4];
        lVar6 = 0;
        if (param_3[3] != 0) {
          lVar6 = param_3[3] + 0x18;
        }
        plVar9[5] = lVar6;
        plVar9[6] = lVar7;
        if (lVar7 != 0) {
          plVar8 = (long *)(lVar7 + 8);
          do {
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = *plVar8 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if ((plVar16 != (long *)0x0) &&
           ((float)(plVar11[3] + 1) <= *(float *)(plVar11 + 4) * (float)plVar16))
        goto LAB_10a071b08;
        uVar17 = 1;
        if ((long *)0x2 < plVar16) {
          uVar17 = (ulong)(((ulong)plVar16 & (long)plVar16 - 1U) != 0);
        }
        plVar8 = (long *)(uVar17 | (long)plVar16 << 1);
        plVar16 = (long *)(long)((float)(plVar11[3] + 1) / *(float *)(plVar11 + 4));
        if (plVar8 <= plVar16) {
          plVar8 = plVar16;
        }
        if ((long)plVar8 - 1U == 0) {
          plVar8 = (long *)0x2;
        }
        else if (((ulong)plVar8 & (long)plVar8 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        plVar16 = (long *)plVar11[1];
        if (plVar16 < plVar8) {
LAB_10a071990:
          if ((ulong)plVar8 >> 0x3d != 0) {
            func_0x000109ffded8();
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10a071bdc);
            (*pcVar3)();
          }
          lVar6 = (long)plVar8 << 3;
          __Znwm();
          lVar7 = *plVar11;
          *plVar11 = lVar6;
          if (lVar7 != 0) {
            __ZdlPv();
          }
          plVar16 = (long *)0x0;
          plVar11[1] = (long)plVar8;
          do {
            *(undefined8 *)(*plVar11 + (long)plVar16 * 8) = 0;
            plVar16 = (long *)((long)plVar16 + 1);
          } while (plVar8 != plVar16);
          plVar19 = (long *)plVar11[2];
          plVar16 = plVar8;
          if (plVar19 != (long *)0x0) {
            plVar13 = (long *)plVar19[1];
            uVar17 = (long)plVar8 - 1;
            if (((ulong)plVar8 & uVar17) == 0) {
              plVar13 = (long *)((ulong)plVar13 & uVar17);
            }
            else if (plVar8 <= plVar13) {
              uVar2 = 0;
              if (plVar8 != (long *)0x0) {
                uVar2 = (ulong)plVar13 / (ulong)plVar8;
              }
              plVar13 = (long *)((long)plVar13 - uVar2 * (long)plVar8);
            }
            *(long **)(*plVar11 + (long)plVar13 * 8) = plVar11 + 2;
            plVar10 = (long *)*plVar19;
            while (plVar10 != (long *)0x0) {
              plVar15 = (long *)plVar10[1];
              if (((ulong)plVar8 & uVar17) == 0) {
                plVar15 = (long *)((ulong)plVar15 & uVar17);
              }
              else if (plVar8 <= plVar15) {
                uVar2 = 0;
                if (plVar8 != (long *)0x0) {
                  uVar2 = (ulong)plVar15 / (ulong)plVar8;
                }
                plVar15 = (long *)((long)plVar15 - uVar2 * (long)plVar8);
              }
              plVar14 = plVar10;
              if (plVar15 != plVar13) {
                lVar6 = *plVar11;
                if (*(long *)(lVar6 + (long)plVar15 * 8) == 0) {
                  *(long **)(lVar6 + (long)plVar15 * 8) = plVar19;
                  plVar13 = plVar15;
                }
                else {
                  *plVar19 = *plVar10;
                  *plVar10 = **(undefined8 **)(lVar6 + (long)plVar15 * 8);
                  **(long **)(lVar6 + (long)plVar15 * 8) = (long)plVar10;
                  plVar14 = plVar19;
                }
              }
              plVar19 = plVar14;
              plVar10 = (long *)*plVar14;
            }
          }
        }
        else if (plVar8 < plVar16) {
          plVar19 = (long *)(long)((float)(ulong)plVar11[3] / *(float *)(plVar11 + 4));
          if ((plVar16 < (long *)0x3) || (((ulong)plVar16 & (long)plVar16 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar19) {
            plVar19 = (long *)(1L << (-LZCOUNT((long)plVar19 + -1) & 0x3fU));
          }
          if (plVar8 <= plVar19) {
            plVar8 = plVar19;
          }
          if (plVar8 < plVar16) {
            if (plVar8 != (long *)0x0) goto LAB_10a071990;
            lVar6 = *plVar11;
            *plVar11 = 0;
            if (lVar6 != 0) {
              __ZdlPv();
            }
            plVar11[1] = 0;
            plVar16 = (long *)0x0;
          }
          else {
            plVar16 = (long *)plVar11[1];
          }
        }
        if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
          unaff_x24 = (long *)((long)plVar16 - 1U & (ulong)plVar12);
        }
        else {
          unaff_x24 = plVar12;
          if (plVar16 <= plVar12) {
            uVar17 = 0;
            if (plVar16 != (long *)0x0) {
              uVar17 = (ulong)plVar12 / (ulong)plVar16;
            }
            unaff_x24 = (long *)((long)plVar12 - uVar17 * (long)plVar16);
          }
        }
LAB_10a071b08:
        lVar6 = *plVar11;
        plVar12 = *(long **)(lVar6 + (long)unaff_x24 * 8);
        if (plVar12 == (long *)0x0) {
          plVar12 = plVar11 + 2;
          *plVar9 = *plVar12;
          *plVar12 = (long)plVar9;
          *(long **)(lVar6 + (long)unaff_x24 * 8) = plVar12;
          if (*plVar9 != 0) {
            plVar12 = *(long **)(*plVar9 + 8);
            if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
              plVar12 = (long *)((ulong)plVar12 & (long)plVar16 - 1U);
            }
            else if (plVar16 <= plVar12) {
              uVar17 = 0;
              if (plVar16 != (long *)0x0) {
                uVar17 = (ulong)plVar12 / (ulong)plVar16;
              }
              plVar12 = (long *)((long)plVar12 - uVar17 * (long)plVar16);
            }
            *(long **)(*plVar11 + (long)plVar12 * 8) = plVar9;
          }
        }
        else {
          *plVar9 = *plVar12;
          *plVar12 = (long)plVar9;
        }
        plVar11[3] = plVar11[3] + 1;
        return;
      }
      lVar6 = (long)plVar8 << 3;
      __Znwm();
      lVar7 = *param_1;
      *param_1 = lVar6;
      if (lVar7 != 0) {
        __ZdlPv();
      }
      plVar9 = (long *)0x0;
      param_1[1] = (long)plVar8;
      do {
        *(undefined8 *)(*param_1 + (long)plVar9 * 8) = 0;
        plVar9 = (long *)((long)plVar9 + 1);
      } while (plVar8 != plVar9);
      plVar9 = (long *)param_1[2];
      if (plVar9 != (long *)0x0) {
        plVar16 = (long *)plVar9[1];
        uVar17 = (long)plVar8 - 1;
        if (((ulong)plVar8 & uVar17) == 0) {
          plVar16 = (long *)((ulong)plVar16 & uVar17);
        }
        else if (plVar8 <= plVar16) {
          uVar2 = 0;
          if (plVar8 != (long *)0x0) {
            uVar2 = (ulong)plVar16 / (ulong)plVar8;
          }
          plVar16 = (long *)((long)plVar16 - uVar2 * (long)plVar8);
        }
        *(long **)(*param_1 + (long)plVar16 * 8) = param_1 + 2;
        while (plVar11 = plVar9, plVar9 = (long *)*plVar11, plVar9 != (long *)0x0) {
          plVar19 = (long *)plVar9[1];
          if (((ulong)plVar8 & uVar17) == 0) {
            plVar19 = (long *)((ulong)plVar19 & uVar17);
          }
          else if (plVar8 <= plVar19) {
            uVar2 = 0;
            if (plVar8 != (long *)0x0) {
              uVar2 = (ulong)plVar19 / (ulong)plVar8;
            }
            plVar19 = (long *)((long)plVar19 - uVar2 * (long)plVar8);
          }
          if (plVar19 != plVar16) {
            lVar6 = *param_1;
            if (*(long *)(lVar6 + (long)plVar19 * 8) == 0) {
              *(long **)(lVar6 + (long)plVar19 * 8) = plVar11;
              plVar16 = plVar19;
            }
            else {
              lVar7 = *plVar9;
              plVar13 = plVar9;
              if (lVar7 == 0) {
                plVar10 = (long *)0x0;
              }
              else {
                do {
                  plVar15 = param_1;
                  func_0x000107c2b068(param_1,plVar9 + 2,lVar7 + 0x10);
                  plVar10 = (long *)*plVar13;
                  if ((int)plVar15 == 0) goto LAB_10a0715b4;
                  lVar7 = *plVar10;
                  plVar13 = plVar10;
                } while (lVar7 != 0);
                plVar10 = (long *)0x0;
LAB_10a0715b4:
                lVar6 = *param_1;
              }
              *plVar11 = (long)plVar10;
              *plVar13 = **(long **)(lVar6 + (long)plVar19 * 8);
              **(undefined8 **)(lVar6 + (long)plVar19 * 8) = plVar9;
              plVar9 = plVar11;
            }
          }
        }
      }
    }
    else if (plVar8 < plVar16) {
      plVar11 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar16 < (long *)0x3) || (((ulong)plVar16 & (long)plVar16 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar11) {
        plVar11 = (long *)(1L << (-LZCOUNT((long)plVar11 + -1) & 0x3fU));
      }
      if (plVar8 <= plVar11) {
        plVar8 = plVar11;
      }
      if (plVar8 < plVar16) {
        if (plVar8 != (long *)0x0) goto LAB_10a071450;
        lVar6 = *param_1;
        *param_1 = 0;
        if (lVar6 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
      }
    }
    plVar16 = (long *)param_1[1];
  }
  bVar20 = POPCOUNT((char)plVar16) + POPCOUNT((char)((ulong)plVar16 >> 8)) +
           POPCOUNT((char)((ulong)plVar16 >> 0x10)) + POPCOUNT((char)((ulong)plVar16 >> 0x18)) +
           POPCOUNT((char)((ulong)plVar16 >> 0x20)) + POPCOUNT((char)((ulong)plVar16 >> 0x28)) +
           POPCOUNT((char)((ulong)plVar16 >> 0x30)) + POPCOUNT((char)((ulong)plVar16 >> 0x38));
  uVar17 = (long)plVar16 - 1;
  if (((ulong)plVar16 & uVar17) == 0) {
    plVar9 = (long *)(uVar17 & (ulong)plVar12);
  }
  else {
    plVar9 = plVar12;
    if (plVar16 <= plVar12) {
      uVar2 = 0;
      if (plVar16 != (long *)0x0) {
        uVar2 = (ulong)plVar12 / (ulong)plVar16;
      }
      plVar9 = (long *)((long)plVar12 - uVar2 * (long)plVar16);
    }
  }
  plVar8 = *(long **)(*param_1 + (long)plVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar6 = *plVar8, lVar6 != 0)) {
    uVar18 = 0;
    bVar20 = 0;
    do {
      plVar11 = *(long **)(lVar6 + 8);
      if (((ulong)plVar16 & uVar17) == 0) {
        plVar19 = (long *)((ulong)plVar11 & uVar17);
      }
      else {
        plVar19 = plVar11;
        if (plVar16 <= plVar11) {
          uVar2 = 0;
          if (plVar16 != (long *)0x0) {
            uVar2 = (ulong)plVar11 / (ulong)plVar16;
          }
          plVar19 = (long *)((long)plVar11 - uVar2 * (long)plVar16);
        }
      }
      if (plVar19 != plVar9) break;
      if (plVar11 == plVar12) {
        plVar11 = param_1;
        func_0x000107c2b068(param_1,lVar6 + 0x10,param_2 + 2);
        uVar5 = (uint)plVar11;
      }
      else {
        uVar5 = 0;
      }
      bVar4 = uVar5 != uVar18;
      if ((bool)(bVar20 & bVar4)) break;
      uVar18 = uVar18 | bVar4;
      bVar20 = bVar20 | bVar4;
      plVar8 = (long *)*plVar8;
      lVar6 = *plVar8;
    } while (lVar6 != 0);
    plVar16 = (long *)param_1[1];
    bVar20 = POPCOUNT((char)plVar16) + POPCOUNT((char)((ulong)plVar16 >> 8)) +
             POPCOUNT((char)((ulong)plVar16 >> 0x10)) + POPCOUNT((char)((ulong)plVar16 >> 0x18)) +
             POPCOUNT((char)((ulong)plVar16 >> 0x20)) + POPCOUNT((char)((ulong)plVar16 >> 0x28)) +
             POPCOUNT((char)((ulong)plVar16 >> 0x30)) + POPCOUNT((char)((ulong)plVar16 >> 0x38));
  }
  plVar9 = (long *)param_2[1];
  if (bVar20 < 2) {
    plVar9 = (long *)((long)plVar16 - 1U & (ulong)plVar9);
  }
  else if (plVar16 <= plVar9) {
    uVar17 = 0;
    if (plVar16 != (long *)0x0) {
      uVar17 = (ulong)plVar9 / (ulong)plVar16;
    }
    plVar9 = (long *)((long)plVar9 - uVar17 * (long)plVar16);
  }
  if (plVar8 == (long *)0x0) {
    plVar12 = param_1 + 2;
    *param_2 = *plVar12;
    *plVar12 = (long)param_2;
    *(long **)(*param_1 + (long)plVar9 * 8) = plVar12;
    if (*param_2 == 0) goto LAB_10a0717a0;
    plVar12 = *(long **)(*param_2 + 8);
    if (bVar20 < 2) {
      plVar12 = (long *)((ulong)plVar12 & (long)plVar16 - 1U);
    }
    else if (plVar16 <= plVar12) {
      uVar17 = 0;
      if (plVar16 != (long *)0x0) {
        uVar17 = (ulong)plVar12 / (ulong)plVar16;
      }
      plVar12 = (long *)((long)plVar12 - uVar17 * (long)plVar16);
    }
  }
  else {
    *param_2 = *plVar8;
    *plVar8 = (long)param_2;
    if (*param_2 == 0) goto LAB_10a0717a0;
    plVar12 = *(long **)(*param_2 + 8);
    if (bVar20 < 2) {
      plVar12 = (long *)((ulong)plVar12 & (long)plVar16 - 1U);
    }
    else if (plVar16 <= plVar12) {
      uVar17 = 0;
      if (plVar16 != (long *)0x0) {
        uVar17 = (ulong)plVar12 / (ulong)plVar16;
      }
      plVar12 = (long *)((long)plVar12 - uVar17 * (long)plVar16);
    }
    if (plVar12 == plVar9) goto LAB_10a0717a0;
  }
  *(long **)(*param_1 + (long)plVar12 * 8) = param_2;
LAB_10a0717a0:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a0717cc; end: 10a071bf3;  */

void FUN_10a0717cc(long *param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x24;
  ulong uVar16;
  
  plVar10 = param_1;
  func_0x000107c2b05c();
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    uVar16 = (long)plVar15 - 1;
    if (((ulong)plVar15 & uVar16) == 0) {
      unaff_x24 = (long *)(uVar16 & (ulong)plVar10);
    }
    else {
      unaff_x24 = plVar10;
      if (plVar15 <= plVar10) {
        uVar3 = 0;
        if (plVar15 != (long *)0x0) {
          uVar3 = (ulong)plVar10 / (ulong)plVar15;
        }
        unaff_x24 = (long *)((long)plVar10 - uVar3 * (long)plVar15);
      }
    }
    plVar7 = *(long **)(*param_1 + (long)unaff_x24 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar8 = (long *)plVar7[1];
        if (plVar8 == plVar10) {
          plVar8 = param_1;
          func_0x000107c2b068(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar8 & 1) != 0) {
            return;
          }
        }
        else {
          if (((ulong)plVar15 & uVar16) == 0) {
            plVar8 = (long *)((ulong)plVar8 & uVar16);
          }
          else if (plVar15 <= plVar8) {
            uVar3 = 0;
            if (plVar15 != (long *)0x0) {
              uVar3 = (ulong)plVar8 / (ulong)plVar15;
            }
            plVar8 = (long *)((long)plVar8 - uVar3 * (long)plVar15);
          }
          if (plVar8 != unaff_x24) break;
        }
      }
    }
  }
  plVar7 = (long *)0x38;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = (long)plVar10;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar7 + 2,*param_3,param_3[1]);
  }
  else {
    lVar5 = *param_3;
    plVar7[3] = param_3[1];
    plVar7[2] = lVar5;
    plVar7[4] = param_3[2];
  }
  lVar6 = param_3[4];
  lVar5 = 0;
  if (param_3[3] != 0) {
    lVar5 = param_3[3] + 0x18;
  }
  plVar7[5] = lVar5;
  plVar7[6] = lVar6;
  if (lVar6 != 0) {
    plVar8 = (long *)(lVar6 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((plVar15 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar15)) goto LAB_10a071b08;
  uVar16 = 1;
  if ((long *)0x2 < plVar15) {
    uVar16 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
  }
  plVar8 = (long *)(uVar16 | (long)plVar15 << 1);
  plVar15 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar8 <= plVar15) {
    plVar8 = plVar15;
  }
  if ((long)plVar8 - 1U == 0) {
    plVar8 = (long *)0x2;
  }
  else if (((ulong)plVar8 & (long)plVar8 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar15 = (long *)param_1[1];
  if (plVar15 < plVar8) {
LAB_10a071990:
    if ((ulong)plVar8 >> 0x3d != 0) {
      func_0x000109ffded8();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a071bdc);
      (*pcVar4)();
    }
    lVar5 = (long)plVar8 << 3;
    __Znwm();
    lVar6 = *param_1;
    *param_1 = lVar5;
    if (lVar6 != 0) {
      __ZdlPv();
    }
    plVar15 = (long *)0x0;
    param_1[1] = (long)plVar8;
    do {
      *(undefined8 *)(*param_1 + (long)plVar15 * 8) = 0;
      plVar15 = (long *)((long)plVar15 + 1);
    } while (plVar8 != plVar15);
    plVar9 = (long *)param_1[2];
    plVar15 = plVar8;
    if (plVar9 != (long *)0x0) {
      plVar11 = (long *)plVar9[1];
      uVar16 = (long)plVar8 - 1;
      if (((ulong)plVar8 & uVar16) == 0) {
        plVar11 = (long *)((ulong)plVar11 & uVar16);
      }
      else if (plVar8 <= plVar11) {
        uVar3 = 0;
        if (plVar8 != (long *)0x0) {
          uVar3 = (ulong)plVar11 / (ulong)plVar8;
        }
        plVar11 = (long *)((long)plVar11 - uVar3 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar11 * 8) = param_1 + 2;
      plVar12 = (long *)*plVar9;
      while (plVar12 != (long *)0x0) {
        plVar14 = (long *)plVar12[1];
        if (((ulong)plVar8 & uVar16) == 0) {
          plVar14 = (long *)((ulong)plVar14 & uVar16);
        }
        else if (plVar8 <= plVar14) {
          uVar3 = 0;
          if (plVar8 != (long *)0x0) {
            uVar3 = (ulong)plVar14 / (ulong)plVar8;
          }
          plVar14 = (long *)((long)plVar14 - uVar3 * (long)plVar8);
        }
        plVar13 = plVar12;
        if (plVar14 != plVar11) {
          lVar5 = *param_1;
          if (*(long *)(lVar5 + (long)plVar14 * 8) == 0) {
            *(long **)(lVar5 + (long)plVar14 * 8) = plVar9;
            plVar11 = plVar14;
          }
          else {
            *plVar9 = *plVar12;
            *plVar12 = **(undefined8 **)(lVar5 + (long)plVar14 * 8);
            **(long **)(lVar5 + (long)plVar14 * 8) = (long)plVar12;
            plVar13 = plVar9;
          }
        }
        plVar9 = plVar13;
        plVar12 = (long *)*plVar13;
      }
    }
  }
  else if (plVar8 < plVar15) {
    plVar9 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar9) {
      plVar9 = (long *)(1L << (-LZCOUNT((long)plVar9 + -1) & 0x3fU));
    }
    if (plVar8 <= plVar9) {
      plVar8 = plVar9;
    }
    if (plVar8 < plVar15) {
      if (plVar8 != (long *)0x0) goto LAB_10a071990;
      lVar5 = *param_1;
      *param_1 = 0;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
    unaff_x24 = (long *)((long)plVar15 - 1U & (ulong)plVar10);
  }
  else {
    unaff_x24 = plVar10;
    if (plVar15 <= plVar10) {
      uVar16 = 0;
      if (plVar15 != (long *)0x0) {
        uVar16 = (ulong)plVar10 / (ulong)plVar15;
      }
      unaff_x24 = (long *)((long)plVar10 - uVar16 * (long)plVar15);
    }
  }
LAB_10a071b08:
  lVar5 = *param_1;
  plVar10 = *(long **)(lVar5 + (long)unaff_x24 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    *plVar7 = *plVar10;
    *plVar10 = (long)plVar7;
    *(long **)(lVar5 + (long)unaff_x24 * 8) = plVar10;
    if (*plVar7 != 0) {
      plVar10 = *(long **)(*plVar7 + 8);
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        plVar10 = (long *)((ulong)plVar10 & (long)plVar15 - 1U);
      }
      else if (plVar15 <= plVar10) {
        uVar16 = 0;
        if (plVar15 != (long *)0x0) {
          uVar16 = (ulong)plVar10 / (ulong)plVar15;
        }
        plVar10 = (long *)((long)plVar10 - uVar16 * (long)plVar15);
      }
      *(long **)(*param_1 + (long)plVar10 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar10;
    *plVar10 = (long)plVar7;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a071bf4; end: 10a071c3b;  */

void FUN_10a071bf4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a04f57c(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a071c3c; end: 10a071ca7;  */

void FUN_10a071c3c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110b9f108;
  FUN_10ad76790(puVar2,param_2,0);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a071ca8; end: 10a071cb7;  */

void FUN_10a071ca8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9f108;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a071cb8; end: 10a071cd7;  */

void FUN_10a071cb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9f108;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a071cd8; end: 10a071d0b;  */

void FUN_10a071cd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a071ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a071d0c; end: 10a071d63;  */

long FUN_10a071d0c(long param_1)

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



/* Entry: 10a071d64; end: 10a071e5f;  */

undefined1  [16] FUN_10a071d64(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110b9c778;
  puVar1 = &UNK_10f630f1d;
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
    ppuStack_40 = &PTR_DAT_110b9c778;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110ba76e8;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a071e60; end: 10a071ec3;  */

ulong FUN_10a071e60(ulong param_1,undefined8 *param_2)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a071ec4);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a071ec4,2,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a071ec4; end: 10a071fd7;  */

void FUN_10a071ec4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
      FUN_10a071fd8(param_5);
      FUN_10a071ffc(param_2,param_4);
      FUN_10a035450(plVar5,param_2);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a071fc4);
  (*pcVar1)();
}



/* Entry: 10a071fd8; end: 10a071ffb;  */

void FUN_10a071fd8(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined8 ****ppppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 ***pppuStack_20;
  code *pcStack_18;
  
  if ((int)param_1 == 1) {
    return;
  }
  puVar4 = (undefined *)0x1;
  FUN_10a052ee0(1,0,param_1);
  puVar3 = &stack0xffffffffffffffd0;
  pcStack_18 = FUN_10a071ffc;
  ppppuVar7 = &pppuStack_20;
  puVar5 = puVar4;
  pppuStack_20 = (undefined8 ***)&stack0xfffffffffffffff0;
  func_0x000109898688();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = &UNK_10f68f52e;
    pcVar2 = FUN_10a072034;
    func_0x00010988bd28();
  }
  else {
    puVar3 = &stack0xfffffffffffffff0;
    puVar5 = puVar4;
    puVar4 = unaff_x19;
    ppppuVar7 = (undefined8 ****)pppuStack_20;
    pcVar2 = pcStack_18;
  }
  *(undefined8 *****)(puVar3 + -0x10) = ppppuVar7;
  *(code **)(puVar3 + -8) = pcVar2;
  FUN_10a053854();
  if ((puVar5 != (undefined *)0x0) && (___dynamic_cast(), puVar5 != (undefined *)0x0)) {
    return;
  }
  puVar5 = &UNK_10f685496;
  func_0x00010988bd28();
  *(undefined **)(puVar5 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(puVar5 + 0x170);
  if (*(long *)(puVar5 + 0x168) != lVar1) {
    *(undefined8 *)(puVar3 + -0x30) = unaff_x20;
    *(undefined **)(puVar3 + -0x28) = puVar4;
    *(undefined1 **)(puVar3 + -0x20) = puVar3 + -0x10;
    *(code **)(puVar3 + -0x18) = FUN_10a072074;
    uVar9 = *(undefined8 *)(lVar1 + -0x60);
    uVar8 = *(undefined8 *)(lVar1 + -0x68);
    uVar11 = *(undefined8 *)(lVar1 + -0x40);
    uVar10 = *(undefined8 *)(lVar1 + -0x48);
    uVar6 = *(undefined8 *)(lVar1 + -0x58);
    *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(lVar1 + -0x50);
    *(undefined8 *)(puVar3 + -0x90) = uVar6;
    uVar13 = *(undefined8 *)(lVar1 + -0x30);
    uVar12 = *(undefined8 *)(lVar1 + -0x38);
    uVar14 = *(undefined8 *)(lVar1 + -0x28);
    uVar6 = *(undefined8 *)(lVar1 + -8);
    uVar16 = *(undefined8 *)(lVar1 + -0x10);
    uVar15 = *(undefined8 *)(lVar1 + -0x18);
    *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)(lVar1 + -0x20);
    *(undefined8 *)(puVar3 + -0x60) = uVar14;
    *(undefined8 *)(puVar3 + -0x48) = uVar16;
    *(undefined8 *)(puVar3 + -0x50) = uVar15;
    *(undefined8 *)(puVar3 + -0x78) = uVar11;
    *(undefined8 *)(puVar3 + -0x80) = uVar10;
    *(undefined8 *)(puVar3 + -0x68) = uVar13;
    *(undefined8 *)(puVar3 + -0x70) = uVar12;
    *(undefined8 *)(puVar3 + -0x98) = uVar9;
    *(undefined8 *)(puVar3 + -0xa0) = uVar8;
    *(undefined8 *)(puVar3 + -0x40) = uVar6;
    *(long *)(puVar5 + 0x170) = lVar1 + -0x68;
    puVar4 = puVar5;
    FUN_10a0051e8();
    if (((ulong)puVar4 & 1) == 0) {
      func_0x000109894f40(puVar5,0);
      FUN_10a054234(puVar5,puVar3 + -0xa0,puVar5 + 0x1b8,&UNK_10f63426b,0xb);
      FUN_10a05431c(puVar5);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a072130);
  (*pcVar2)();
}



/* Entry: 10a071ffc; end: 10a072033;  */

void FUN_10a071ffc(undefined *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar4 = param_1;
  func_0x000109898688();
  puVar5 = param_1;
  if (puVar4 == (undefined *)0x0) {
    puVar5 = &UNK_10f68f52e;
    unaff_x30 = FUN_10a072034;
    func_0x00010988bd28();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  FUN_10a053854();
  if ((puVar5 != (undefined *)0x0) && (___dynamic_cast(), puVar5 != (undefined *)0x0)) {
    return;
  }
  puVar5 = &UNK_10f685496;
  func_0x00010988bd28();
  *(undefined **)(puVar5 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar2 = *(long *)(puVar5 + 0x170);
  if (*(long *)(puVar5 + 0x168) == lVar2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a072130);
    (*pcVar3)();
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
  *(undefined **)((long)register0x00000008 + -0x28) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x18) = FUN_10a072074;
  uVar8 = *(undefined8 *)(lVar2 + -0x60);
  uVar7 = *(undefined8 *)(lVar2 + -0x68);
  uVar10 = *(undefined8 *)(lVar2 + -0x40);
  uVar9 = *(undefined8 *)(lVar2 + -0x48);
  uVar6 = *(undefined8 *)(lVar2 + -0x58);
  *(undefined8 *)((long)register0x00000008 + -0x88) = *(undefined8 *)(lVar2 + -0x50);
  *(undefined8 *)((long)register0x00000008 + -0x90) = uVar6;
  uVar12 = *(undefined8 *)(lVar2 + -0x30);
  uVar11 = *(undefined8 *)(lVar2 + -0x38);
  uVar13 = *(undefined8 *)(lVar2 + -0x28);
  uVar6 = *(undefined8 *)(lVar2 + -8);
  uVar15 = *(undefined8 *)(lVar2 + -0x10);
  uVar14 = *(undefined8 *)(lVar2 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x58) = *(undefined8 *)(lVar2 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar13;
  *(undefined8 *)((long)register0x00000008 + -0x48) = uVar15;
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar14;
  *(undefined8 *)((long)register0x00000008 + -0x78) = uVar10;
  *(undefined8 *)((long)register0x00000008 + -0x80) = uVar9;
  *(undefined8 *)((long)register0x00000008 + -0x68) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x70) = uVar11;
  *(undefined8 *)((long)register0x00000008 + -0x98) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar7;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar6;
  *(long *)(puVar5 + 0x170) = lVar2 + -0x68;
  puVar4 = puVar5;
  FUN_10a0051e8();
  if (((ulong)puVar4 & 1) == 0) {
    func_0x000109894f40(puVar5,0);
    FUN_10a054234(puVar5,(undefined1 *)((long)register0x00000008 + -0xa0),puVar5 + 0x1b8,
                  &UNK_10f63426b,0xb);
    FUN_10a05431c(puVar5);
  }
  return;
}



/* Entry: 10a072034; end: 10a072073;  */

void FUN_10a072034(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  undefined8 uStack_40;
  
  FUN_10a053854();
  if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
    return;
  }
  puVar3 = &UNK_10f685496;
  func_0x00010988bd28();
  *(undefined **)(puVar3 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(puVar3 + 0x170);
  if (*(long *)(puVar3 + 0x168) != lVar1) {
    uStack_98 = *(undefined8 *)(lVar1 + -0x60);
    uStack_a0 = *(undefined8 *)(lVar1 + -0x68);
    uStack_78 = *(undefined8 *)(lVar1 + -0x40);
    uStack_80 = *(undefined8 *)(lVar1 + -0x48);
    uStack_88 = *(undefined8 *)(lVar1 + -0x50);
    uStack_90 = *(undefined8 *)(lVar1 + -0x58);
    uStack_68 = *(undefined8 *)(lVar1 + -0x30);
    uStack_70 = *(undefined8 *)(lVar1 + -0x38);
    uStack_58 = *(undefined8 *)(lVar1 + -0x20);
    uStack_60 = *(undefined8 *)(lVar1 + -0x28);
    uStack_40 = *(undefined8 *)(lVar1 + -8);
    uStack_48 = *(undefined8 *)(lVar1 + -0x10);
    uStack_50 = *(undefined8 *)(lVar1 + -0x18);
    *(long *)(puVar3 + 0x170) = lVar1 + -0x68;
    puVar4 = puVar3;
    FUN_10a0051e8();
    if (((ulong)puVar4 & 1) == 0) {
      func_0x000109894f40(puVar3,0);
      FUN_10a054234(puVar3,&uStack_a0,puVar3 + 0x1b8,&UNK_10f63426b,0xb);
      FUN_10a05431c(puVar3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a072130);
  (*pcVar2)();
}



/* Entry: 10a072074; end: 10a072167;  */

void FUN_10a072074(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f63426b,0xb);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a072130);
  (*pcVar4)();
}



/* Entry: 10a072168; end: 10a07224b;  */

void FUN_10a072168(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  puVar5 = *(undefined **)(param_2 + 0x10);
  ppuStack_80 = &PTR_DAT_1108a5c28;
  uStack_70 = *(undefined8 *)(puVar5 + 0x28);
  uStack_78 = *(undefined8 *)(puVar5 + 0x20);
  uStack_68 = *(undefined8 *)(puVar5 + 0x30);
  uStack_58 = *(undefined8 *)(puVar5 + 0x40);
  uStack_60 = *(undefined8 *)(puVar5 + 0x38);
  if (*(long *)(puVar5 + 0x40) != 0) {
    plVar1 = (long *)(*(long *)(puVar5 + 0x40) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a072330(auStack_50,puVar5 + 0x48);
  func_0x000109a17dd0();
  if (puVar5 == &DAT_110b20ce8) {
    FUN_10a07224c();
    *(undefined1 *)(param_1 + 0x50) = 1;
    func_0x000105675c90(&ppuStack_80);
    return;
  }
  FUN_10a04f610();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a072228);
  (*pcVar4)();
}



/* Entry: 10a07224c; end: 10a0722cf;  */

undefined8 * FUN_10a07224c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_DAT_1108a5c28;
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[2] = uVar6;
  param_1[1] = uVar5;
  lVar4 = *(long *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = uVar5;
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
  FUN_10a072330(param_1 + 6,param_2 + 0x30);
  return param_1;
}



/* Entry: 10a0722d0; end: 10a072317;  */

void FUN_10a0722d0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000105675c90(puVar1 + 3);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      __ZdlPv(*puVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a072318; end: 10a07232f;  */

void FUN_10a072318(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}


