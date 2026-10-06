/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a9cd364; end: 10a9cd41f;  */

void FUN_10a9cd364(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f688ae8,0xf);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9cd420);
  (*pcVar4)();
}



/* Entry: 10a9cd420; end: 10a9cd4f7;  */

/* WARNING: Removing unreachable block (ram,0x00010a9cd4b8) */

undefined1  [16] FUN_10a9cd420(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f688af8,0xc);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9cd4f8(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a9cd4f8; end: 10a9cd5f3;  */

undefined1  [16] FUN_10a9cd4f8(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c35a58;
  puVar1 = &UNK_10f687d39;
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
    ppuStack_40 = &PTR_DAT_110c35a58;
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



/* Entry: 10a9cd5f4; end: 10a9cd657;  */

ulong FUN_10a9cd5f4(ulong param_1,undefined8 *param_2)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9cd658);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a9cd658,3,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a9cd658; end: 10a9cd937;  */

void FUN_10a9cd658(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined8 auStack_a0 [2];
  char cStack_89;
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
  plVar9 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar9 == (long *)0x0) {
    puVar11 = &UNK_10f68f52e;
  }
  else {
    plVar8 = param_2;
    FUN_10a053854(param_2,plVar9);
    if ((plVar8 != (long *)0x0) && (___dynamic_cast(), plVar8 != (long *)0x0)) {
      FUN_10a43b1c4(param_5);
      func_0x000109898570(auStack_a0,param_2,param_4);
      func_0x000109898570(auStack_b8,param_2,param_4 + 0x10);
      plVar9 = (long *)0x60;
      __Znwm();
      plVar18 = plVar9 + 1;
      *plVar18 = 0;
      plVar9[2] = 0;
      *plVar9 = (long)&PTR_FUN_110bbbc50;
      plVar16 = plVar9 + 3;
      *plVar16 = (long)&PTR_DAT_110c368f0;
      plVar9[4] = 0;
      plVar9[5] = 0;
      plVar9[9] = 0;
      plVar9[8] = 0;
      plVar9[0xb] = 0;
      plVar9[10] = 0;
      plVar9[7] = 0;
      plVar9[6] = 0;
      plStack_88 = plVar16;
      plStack_80 = plVar9;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (plVar9 + 6,auStack_a0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (plVar9 + 9,auStack_b8);
      puVar20 = (undefined8 *)plVar8[4];
      if (puVar20 < (undefined8 *)plVar8[5]) {
        *puVar20 = plVar16;
        puVar20[1] = plVar9;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar4) {
            *plVar18 = *plVar18 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar20 = puVar20 + 2;
      }
      else {
        plVar10 = plVar8 + 3;
        lVar13 = (long)puVar20 - *plVar10;
        uVar12 = (lVar13 >> 4) + 1;
        if (uVar12 >> 0x3c != 0) {
          FUN_10a2b7708();
          goto LAB_10a9cd8e0;
        }
        uVar21 = plVar8[5] - *plVar10;
        uVar19 = (long)uVar21 >> 3;
        if (uVar19 <= uVar12) {
          uVar19 = uVar12;
        }
        if (0x7fffffffffffffef < uVar21) {
          uVar19 = 0xfffffffffffffff;
        }
        FUN_10a2b771c();
        puVar2 = (undefined8 *)((long)plVar10 + lVar13);
        *puVar2 = plVar16;
        puVar2[1] = plVar9;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar4) {
            *plVar18 = *plVar18 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar20 = puVar2 + 2;
        lVar13 = (long)puVar2 - (plVar8[4] - plVar8[3]);
        _memcpy(lVar13);
        plStack_78 = (long *)plVar8[3];
        plVar8[3] = lVar13;
        plVar8[4] = (long)puVar20;
        plVar8[5] = (long)(plVar10 + uVar19 * 2);
        plStack_70 = plStack_78;
        plStack_68 = plStack_78;
        func_0x00010a2b85a0(&plStack_78);
      }
      plVar8[4] = (long)puVar20;
      do {
        lVar13 = *plVar18;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *plVar18 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
      if (cStack_a1 < '\0') {
        __ZdlPv(auStack_b8[0]);
      }
      if (cStack_89 < '\0') {
        __ZdlPv(auStack_a0[0]);
      }
      *param_1 = 0;
      plVar9 = plVar7 + 0x4b;
      lVar13 = plVar7[0x59];
      uVar12 = lVar13 - 1;
      plVar7[0x59] = uVar12;
      if (uVar12 < 8) {
        uVar12 = plVar9[lVar13 + 2];
        if (plVar7[0x5a] == uVar12) {
          return;
        }
      }
      else {
        uVar12 = *(ulong *)(plVar7[0x57] + -8);
        plVar7[0x57] = plVar7[0x57] + -8;
        if (plVar7[0x5a] == uVar12) {
          return;
        }
      }
      plVar8 = (long *)*plVar9;
      plVar16 = (long *)plVar7[0x4c];
      lVar13 = (long)plVar16 - (long)plVar8;
      uVar19 = lVar13 >> 4;
      if (uVar19 < uVar12) {
        uVar21 = uVar12 - uVar19;
        lVar17 = plVar7[0x4d];
        if ((ulong)(lVar17 - (long)plVar16 >> 4) < uVar21) {
          if (uVar12 >> 0x3c == 0) {
            uVar14 = lVar17 - (long)plVar8 >> 3;
            if (uVar14 <= uVar12) {
              uVar14 = uVar12;
            }
            if (0x7fffffffffffffef < (ulong)(lVar17 - (long)plVar8)) {
              uVar14 = 0xfffffffffffffff;
            }
            plStack_68 = plVar9;
            if (uVar14 >> 0x3c == 0) {
              lVar6 = uVar14 << 4;
              __Znwm();
              lVar1 = lVar6 + lVar13;
              _bzero(lVar1,uVar21 * 0x10);
              lVar15 = lVar1 + uVar19 * -0x10;
              _memcpy(lVar15,plVar8,lVar13);
              *plVar9 = lVar15;
              plVar7[0x4c] = lVar1 + uVar21 * 0x10;
              plVar7[0x4d] = lVar6 + uVar14 * 0x10;
              plStack_88 = plVar8;
              plStack_80 = plVar8;
              plStack_78 = plVar8;
              plStack_70 = (long *)lVar17;
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
        _bzero(plVar16,uVar21 * 0x10);
        plVar7[0x4c] = (long)(plVar16 + uVar21 * 2);
      }
      else if (uVar12 < uVar19) {
        while (plVar16 != plVar8 + uVar12 * 2) {
          plVar16 = plVar16 + -2;
          func_0x00010988c204(plVar16);
        }
        plVar7[0x4c] = (long)(plVar8 + uVar12 * 2);
      }
code_r0x00010988c138:
      plVar7[0x5a] = uVar12;
      return;
    }
    puVar11 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar11);
LAB_10a9cd8e0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9cd8e4);
  (*pcVar5)();
}



/* Entry: 10a9cd938; end: 10a9cd98b;  */

ulong FUN_10a9cd938(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a9cd98c,0);
  }
  return param_1;
}



/* Entry: 10a9cd98c; end: 10a9cda97;  */

void FUN_10a9cd98c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
      FUN_10a9cda98(param_1,param_2,plVar5[3],plVar5[4] - plVar5[3] >> 4);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9cda84);
  (*pcVar1)();
}



/* Entry: 10a9cda98; end: 10a9cdc27;  */

void FUN_10a9cda98(undefined4 *param_1,long *param_2,long param_3,long param_4)

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
      ppuStack_68 = &PTR_DAT_110c35d90;
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



/* Entry: 10a9cdc28; end: 10a9cdce3;  */

void FUN_10a9cdc28(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f688af8,0xc);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9cdce4);
  (*pcVar4)();
}



/* Entry: 10a9cdce4; end: 10a9cddc3;  */

void FUN_10a9cdce4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9cddc4(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[4];
  plVar1 = (long *)plVar5[3];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x2f)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x2f);
    plVar1 = plVar5 + 3;
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



/* Entry: 10a9cddc4; end: 10a9cde2b;  */

void FUN_10a9cddc4(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10a9cddc4(plVar4,param_2);
  FUN_10a052e3c(param_4);
  FUN_10a9cda98(extraout_x8,plVar4,plVar6[6],plVar6[7] - plVar6[6] >> 4);
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



/* Entry: 10a9cde2c; end: 10a9cdeeb;  */

void FUN_10a9cde2c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9cddc4(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a9cda98(param_1,param_2,plVar4[6],plVar4[7] - plVar4[6] >> 4);
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



/* Entry: 10a9cdeec; end: 10a9ce01f;  */

void FUN_10a9cdeec(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9cddc4(param_2,param_3);
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



/* Entry: 10a9ce020; end: 10a9ce0f7;  */

/* WARNING: Removing unreachable block (ram,0x00010a9ce0b8) */

undefined1  [16] FUN_10a9ce020(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f688b15,0x11);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9ce0f8(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a9ce0f8; end: 10a9ce1f3;  */

undefined1  [16] FUN_10a9ce0f8(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c35e00;
  puVar1 = &UNK_10f687d39;
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
    ppuStack_40 = &PTR_DAT_110c35e00;
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



/* Entry: 10a9ce1f4; end: 10a9ce247;  */

ulong FUN_10a9ce1f4(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a9ce248,0);
  }
  return param_1;
}



/* Entry: 10a9ce248; end: 10a9ce327;  */

void FUN_10a9ce248(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9ce328(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[4];
  plVar1 = (long *)plVar5[3];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x2f)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x2f);
    plVar1 = plVar5 + 3;
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



/* Entry: 10a9ce328; end: 10a9ce3e3;  */

undefined ** FUN_10a9ce328(undefined **param_1,undefined **param_2)

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
    FUN_10a0605c4(ppuVar1,*param_2,FUN_10a9ce3e4,0);
  }
  return ppuVar1;
}



/* Entry: 10a9ce3e4; end: 10a9ce4af;  */

void FUN_10a9ce3e4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9ce328(param_2,param_3);
  FUN_10a052e3c(param_5);
  func_0x00010989a420(param_1,param_2,plVar4[6],(plVar4[7] - plVar4[6] >> 3) * -0x5555555555555555);
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



/* Entry: 10a9ce4b0; end: 10a9ce56b;  */

void FUN_10a9ce4b0(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f688b15,0x11);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9ce56c);
  (*pcVar4)();
}



/* Entry: 10a9ce56c; end: 10a9ce57b;  */

void FUN_10a9ce56c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c36390;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a9ce57c; end: 10a9ce59b;  */

void FUN_10a9ce57c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c36390;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9ce59c; end: 10a9ce5ab;  */

void FUN_10a9ce59c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9ce5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9ce5ac; end: 10a9ce5bf;  */

undefined1  [16] FUN_10a9ce5ac(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    func_0x00010a9c969c();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a9ce5c0; end: 10a9ce63f;  */

undefined1  [16] FUN_10a9ce5c0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010a9c969c();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a9ce640; end: 10a9ce8e7;  */

void FUN_10a9ce640(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  float fVar20;
  double dVar21;
  long alStack_b8 [4];
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
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
  FUN_10a9ce8e8(param_2,param_3);
  FUN_10a9ce950(param_5);
  func_0x000109898f04(alStack_b8,param_2,param_4);
  if (*(int *)(param_4 + 0x10) != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
LAB_10a9ce8a8:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9ce8ac);
    (*pcVar5)();
  }
  dVar21 = *(double *)(param_4 + 0x18);
  plVar9 = (long *)0x50;
  __Znwm();
  fVar20 = (float)dVar21;
  if (0x7fefffffffffffff < (ulong)ABS(dVar21)) {
    fVar20 = 0.0;
  }
  plVar16 = plVar9 + 1;
  *plVar16 = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&PTR_FUN_110c36390;
  plVar14 = plVar9 + 3;
  *plVar14 = (long)&PTR_FUN_110c35ac8;
  plVar9[6] = 0;
  plVar9[4] = 0;
  plVar9[5] = 0;
  plVar9[7] = 0;
  plVar9[8] = 0;
  *(float *)(plVar9 + 9) = fVar20;
  plStack_98 = plVar14;
  plStack_90 = plVar9;
  FUN_10a105cdc();
  puVar18 = (undefined8 *)plVar8[0xd];
  if (puVar18 < (undefined8 *)plVar8[0xe]) {
    *puVar18 = plVar14;
    puVar18[1] = plVar9;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = *plVar16 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar18 = puVar18 + 2;
  }
  else {
    plStack_68 = plVar8 + 0xc;
    lVar11 = (long)puVar18 - *plStack_68;
    uVar10 = (lVar11 >> 4) + 1;
    if (uVar10 >> 0x3c != 0) {
      FUN_10a9ce5ac();
      goto LAB_10a9ce8a8;
    }
    uVar19 = plVar8[0xe] - *plStack_68;
    uVar17 = (long)uVar19 >> 3;
    if (uVar17 <= uVar10) {
      uVar17 = uVar10;
    }
    if (0x7fffffffffffffef < uVar19) {
      uVar17 = 0xfffffffffffffff;
    }
    FUN_10a9ce5c0();
    puVar2 = (undefined8 *)(uVar17 + lVar11);
    *puVar2 = plVar14;
    puVar2[1] = plVar9;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = *plVar16 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar18 = puVar2 + 2;
    lVar11 = (long)puVar2 - (plVar8[0xd] - plVar8[0xc]);
    _memcpy(lVar11);
    plStack_88 = (long *)plVar8[0xc];
    plVar8[0xc] = lVar11;
    plVar8[0xd] = (long)puVar18;
    lStack_70 = plVar8[0xe];
    plVar8[0xe] = uVar17 + alStack_b8[0] * 0x10;
    plStack_80 = plStack_88;
    plStack_78 = plStack_88;
    func_0x00010a9ce5f4(&plStack_88);
  }
  plVar8[0xd] = (long)puVar18;
  do {
    lVar11 = *plVar16;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar4) {
      *plVar16 = lVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar11 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
  plStack_88 = alStack_b8;
  FUN_10a0426d8(&plStack_88);
  *param_1 = 0;
  plVar8 = plVar7 + 0x4b;
  lVar11 = plVar7[0x59];
  uVar10 = lVar11 - 1;
  plVar7[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar8[lVar11 + 2];
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
  plVar9 = (long *)*plVar8;
  plVar14 = (long *)plVar7[0x4c];
  lVar11 = (long)plVar14 - (long)plVar9;
  uVar17 = lVar11 >> 4;
  if (uVar17 < uVar10) {
    uVar19 = uVar10 - uVar17;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - (long)plVar14 >> 4) < uVar19) {
      if (uVar10 >> 0x3c == 0) {
        uVar12 = lVar15 - (long)plVar9 >> 3;
        if (uVar12 <= uVar10) {
          uVar12 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - (long)plVar9)) {
          uVar12 = 0xfffffffffffffff;
        }
        plStack_68 = plVar8;
        if (uVar12 >> 0x3c == 0) {
          lVar6 = uVar12 << 4;
          __Znwm();
          lVar1 = lVar6 + lVar11;
          _bzero(lVar1,uVar19 * 0x10);
          lVar13 = lVar1 + uVar17 * -0x10;
          _memcpy(lVar13,plVar9,lVar11);
          *plVar8 = lVar13;
          plVar7[0x4c] = lVar1 + uVar19 * 0x10;
          plVar7[0x4d] = lVar6 + uVar12 * 0x10;
          plStack_88 = plVar9;
          plStack_80 = plVar9;
          plStack_78 = plVar9;
          lStack_70 = lVar15;
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
    _bzero(plVar14,uVar19 * 0x10);
    plVar7[0x4c] = (long)(plVar14 + uVar19 * 2);
  }
  else if (uVar10 < uVar17) {
    while (plVar14 != plVar9 + uVar10 * 2) {
      plVar14 = plVar14 + -2;
      func_0x00010988c204(plVar14);
    }
    plVar7[0x4c] = (long)(plVar9 + uVar10 * 2);
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar10;
  return;
}



/* Entry: 10a9ce8e8; end: 10a9ce94f;  */

void FUN_10a9ce8e8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000109898688();
  if (lVar2 != 0) {
    FUN_10a053854(param_1,lVar2);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar1 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar1 == 2) {
    return;
  }
  lVar2 = 2;
  FUN_10a052ee0(2,0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (lVar2 + 0x18);
  return;
}



/* Entry: 10a9ce950; end: 10a9ce973;  */

void FUN_10a9ce950(undefined8 param_1)

{
  long lVar1;
  
  if ((int)param_1 == 2) {
    return;
  }
  lVar1 = 2;
  FUN_10a052ee0(2,0,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (lVar1 + 0x18);
  return;
}



/* Entry: 10a9ce974; end: 10a9ce97b;  */

void FUN_10a9ce974(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (param_1 + 0x18);
  return;
}



/* Entry: 10a9ce97c; end: 10a9cea5b;  */

void FUN_10a9ce97c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9ceb14(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[4];
  plVar1 = (long *)plVar5[3];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x2f)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x2f);
    plVar1 = plVar5 + 3;
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



/* Entry: 10a9cea5c; end: 10a9ceb13;  */

void FUN_10a9cea5c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9ceb7c(param_1,param_2,FUN_10a9ce974,0,param_3,param_4,param_5);
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



/* Entry: 10a9ceb14; end: 10a9ceb7b;  */

void FUN_10a9ceb14(undefined **param_1,undefined **param_2,undefined **param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined8 auStack_88 [2];
  char cStack_71;
  
  ppuVar2 = param_1;
  func_0x000109898688();
  if (ppuVar2 != (undefined **)0x0) {
    FUN_10a052c2c();
    param_2 = ppuVar2;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c36938;
      param_4 = 0;
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
  FUN_10a9ce8e8(param_2,param_5);
  FUN_10a0584c8(param_7);
  func_0x000109898570(auStack_88,param_2,param_6);
  plVar1 = (long *)((long)ppuVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(undefined ***)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*(code *)param_3)(plVar1,auStack_88);
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  *puVar3 = 0;
  return;
}



/* Entry: 10a9ceb7c; end: 10a9cec3b;  */

void FUN_10a9ceb7c(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  
  lVar2 = param_2;
  FUN_10a9ce8e8(param_2,param_5);
  FUN_10a0584c8(param_7);
  func_0x000109898570(auStack_68,param_2,param_6);
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,auStack_68);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a9cec3c; end: 10a9cec43;  */

void FUN_10a9cec3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (param_1 + 0x30);
  return;
}



/* Entry: 10a9cec44; end: 10a9ced23;  */

void FUN_10a9cec44(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9ceb14(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[7];
  plVar1 = (long *)plVar5[6];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x47)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x47);
    plVar1 = plVar5 + 6;
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



/* Entry: 10a9ced24; end: 10a9ceddb;  */

void FUN_10a9ced24(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9ceb7c(param_1,param_2,FUN_10a9cec3c,0,param_3,param_4,param_5);
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



/* Entry: 10a9ceddc; end: 10a9cefe7;  */

void FUN_10a9ceddc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9ceb14(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar9 = plVar17[9];
  lVar15 = plVar17[10];
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
      ppuStack_68 = &PTR_DAT_110c35a58;
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



/* Entry: 10a9cefe8; end: 10a9cf497;  */

void FUN_10a9cefe8(undefined4 *param_1,long ***param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long ***ppplVar7;
  long ***ppplVar8;
  long ***ppplVar9;
  long ***ppplVar10;
  long **pplVar11;
  long **pplVar12;
  long ****pppplVar13;
  long **pplVar14;
  ulong uVar15;
  long lVar16;
  long **pplVar17;
  long ***ppplVar18;
  long ***ppplVar19;
  ulong uVar20;
  long ***ppplVar21;
  long **pplStack_c8;
  long ***ppplStack_c0;
  long ***ppplStack_b8;
  int aiStack_b0 [2];
  undefined8 *puStack_a8;
  long **pplStack_a0;
  long **pplStack_98;
  long **pplStack_90;
  long ***ppplStack_88;
  long **pplStack_80;
  long **pplStack_78;
  long ***ppplStack_70;
  long ***ppplStack_68;
  
  ppplVar7 = param_2;
  (*(code *)(*param_2)[0xb])();
  if (ppplVar7[0x59] < (long **)0x8) {
    ppplVar7[(long)ppplVar7[0x59] + 0x4e] = ppplVar7[0x5a];
    ppplVar7[0x59] = (long **)((long)ppplVar7[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(ppplVar7 + 0x4b);
  }
  ppplVar8 = param_2;
  FUN_10a9ce8e8(param_2,param_3);
  FUN_10a9cf498(param_5);
  if (*param_4 == 7) {
    ppplVar9 = param_2;
    (*(code *)(*param_2)[0x13])(param_2,*(undefined8 *)(param_4 + 2));
    ppplVar18 = param_2;
    ppplStack_88 = ppplVar9;
    (*(code *)(*param_2)[0x41])(param_2,&ppplStack_88);
    if (((ulong)ppplVar18 & 1) != 0) {
      pplStack_90 = (long **)ppplStack_88;
      ppplVar9 = param_2;
      (*(code *)(*param_2)[0x4d])(param_2,&pplStack_90);
      pplStack_c8 = (long **)0x0;
      ppplStack_c0 = (long ***)0x0;
      ppplStack_b8 = (long ***)0x0;
      if (ppplVar9 != (long ***)0x0) {
        if ((ulong)ppplVar9 >> 0x3c != 0) {
          FUN_10a2b81d0();
          goto LAB_10a9cf3ec;
        }
        ppplVar18 = &pplStack_c8;
        ppplVar10 = ppplVar9;
        ppplStack_68 = &pplStack_c8;
        FUN_10a2b81e4();
        ppplVar19 = (long ***)((long)ppplVar18 - ((long)ppplStack_c0 - (long)pplStack_c8));
        _memcpy(ppplVar19);
        pplStack_78 = pplStack_c8;
        ppplStack_70 = ppplStack_b8;
        ppplStack_88 = (long ***)pplStack_c8;
        pplStack_80 = pplStack_c8;
        pplStack_c8 = (long **)ppplVar19;
        ppplStack_c0 = ppplVar18;
        ppplStack_b8 = ppplVar18 + (long)ppplVar10 * 2;
        FUN_10a2b82e0(&ppplStack_88);
        ppplVar18 = (long ***)0x0;
        do {
          (*(code *)(*param_2)[0x51])(aiStack_b0,param_2,&pplStack_90,ppplVar18);
          if (aiStack_b0[0] == 1) {
            pplStack_a0 = (long **)0x0;
            pplStack_98 = (long **)0x0;
          }
          else {
            ppplVar10 = param_2;
            func_0x000109898688(param_2,aiStack_b0);
            if (ppplVar10 == (long ***)0x0) {
              func_0x00010988bd28(&UNK_10f68f52e);
              goto LAB_10a9cf3ec;
            }
            func_0x00010989879c(&ppplStack_88);
            if ((ppplStack_88 == (long ***)0x0) ||
               (ppplVar10 = ppplStack_88,
               ___dynamic_cast(ppplStack_88,&PTR_DAT_110b178e0,&PTR_DAT_110c35a58,0),
               ppplVar10 == (long ***)0x0)) {
              pppplVar13 = (long ****)&pplStack_a0;
            }
            else {
              pplStack_98 = pplStack_80;
              pppplVar13 = &ppplStack_88;
              pplStack_a0 = (long **)ppplVar10;
            }
            *pppplVar13 = (long ***)0x0;
            pppplVar13[1] = (long ***)0x0;
            pplVar11 = pplStack_80;
            if ((long ***)pplStack_80 != (long ***)0x0) {
              ppplVar10 = (long ***)(pplStack_80 + 1);
              do {
                pplVar12 = *ppplVar10;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(ppplVar10,0x10);
                if (bVar4) {
                  *ppplVar10 = (long **)((long)pplVar12 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (pplVar12 == (long **)0x0) {
                (*(code *)(*pplVar11)[2])(pplVar11);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar11);
              }
            }
            if ((long ***)pplStack_a0 == (long ***)0x0) {
              func_0x00010988bd28(&UNK_10f58251f);
              goto LAB_10a9cf3ec;
            }
          }
          if (ppplStack_c0 < ppplStack_b8) {
            *ppplStack_c0 = pplStack_a0;
            ppplStack_c0[1] = pplStack_98;
            pplStack_a0 = (long **)0x0;
            pplStack_98 = (long **)0x0;
            ppplStack_c0 = ppplStack_c0 + 2;
          }
          else {
            lVar16 = (long)ppplStack_c0 - (long)pplStack_c8;
            uVar20 = (lVar16 >> 4) + 1;
            if (uVar20 >> 0x3c != 0) {
              FUN_10a2b81d0();
              goto LAB_10a9cf3ec;
            }
            uVar15 = (long)ppplStack_b8 - (long)pplStack_c8 >> 3;
            if (uVar15 <= uVar20) {
              uVar15 = uVar20;
            }
            if (0x7fffffffffffffef < (ulong)((long)ppplStack_b8 - (long)pplStack_c8)) {
              uVar15 = 0xfffffffffffffff;
            }
            ppplVar10 = &pplStack_c8;
            ppplStack_68 = &pplStack_c8;
            FUN_10a2b81e4();
            puVar2 = (undefined8 *)((long)ppplVar10 + lVar16);
            ppplVar19 = (long ***)(puVar2 + 2);
            puVar2[1] = pplStack_98;
            *puVar2 = pplStack_a0;
            pplStack_a0 = (long **)0x0;
            pplStack_98 = (long **)0x0;
            ppplVar21 = (long ***)((long)puVar2 - ((long)ppplStack_c0 - (long)pplStack_c8));
            _memcpy(ppplVar21);
            pplStack_78 = pplStack_c8;
            ppplStack_70 = ppplStack_b8;
            ppplStack_88 = (long ***)pplStack_c8;
            pplStack_80 = pplStack_c8;
            pplStack_c8 = (long **)ppplVar21;
            ppplStack_c0 = ppplVar19;
            ppplStack_b8 = ppplVar10 + uVar15 * 2;
            FUN_10a2b82e0(&ppplStack_88);
            pplVar11 = pplStack_98;
            ppplStack_c0 = ppplVar19;
            if ((long ***)pplStack_98 != (long ***)0x0) {
              ppplVar10 = (long ***)(pplStack_98 + 1);
              do {
                pplVar12 = *ppplVar10;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(ppplVar10,0x10);
                if (bVar4) {
                  *ppplVar10 = (long **)((long)pplVar12 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (pplVar12 == (long **)0x0) {
                (*(code *)(*pplStack_98)[2])(pplStack_98);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar11);
              }
            }
          }
          if ((3 < aiStack_b0[0]) && (puStack_a8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_a8)();
          }
          ppplVar18 = (long ***)((long)ppplVar18 + 1);
        } while (ppplVar18 != ppplVar9);
      }
      if ((long ***)pplStack_90 != (long ***)0x0) {
        (*(code *)**pplStack_90)();
      }
      if (ppplVar8 + 9 != &pplStack_c8) {
        FUN_10a2b832c();
      }
      ppplStack_88 = &pplStack_c8;
      FUN_10a2b8270(&ppplStack_88);
      *param_1 = 0;
      ppplVar8 = ppplVar7 + 0x4b;
      pplVar11 = ppplVar7[0x59];
      pplVar12 = (long **)((long)pplVar11 + -1);
      ppplVar7[0x59] = pplVar12;
      if (pplVar12 < (long **)0x8) {
        pplVar11 = ppplVar8[(long)pplVar11 + 2];
        if (ppplVar7[0x5a] == pplVar11) {
          return;
        }
      }
      else {
        pplVar11 = (long **)ppplVar7[0x57][-1];
        ppplVar7[0x57] = ppplVar7[0x57] + -1;
        if (ppplVar7[0x5a] == pplVar11) {
          return;
        }
      }
      ppplVar9 = (long ***)*ppplVar8;
      ppplVar18 = (long ***)ppplVar7[0x4c];
      lVar16 = (long)ppplVar18 - (long)ppplVar9;
      pplVar12 = (long **)(lVar16 >> 4);
      if (pplVar12 < pplVar11) {
        uVar20 = (long)pplVar11 - (long)pplVar12;
        pplVar17 = ppplVar7[0x4d];
        if ((ulong)((long)pplVar17 - (long)ppplVar18 >> 4) < uVar20) {
          if ((ulong)pplVar11 >> 0x3c == 0) {
            pplVar14 = (long **)((long)pplVar17 - (long)ppplVar9 >> 3);
            if (pplVar14 <= pplVar11) {
              pplVar14 = pplVar11;
            }
            if (0x7fffffffffffffef < (ulong)((long)pplVar17 - (long)ppplVar9)) {
              pplVar14 = (long **)0xfffffffffffffff;
            }
            ppplStack_68 = ppplVar8;
            if ((ulong)pplVar14 >> 0x3c == 0) {
              lVar6 = (long)pplVar14 << 4;
              __Znwm();
              lVar1 = lVar6 + lVar16;
              _bzero(lVar1,uVar20 * 0x10);
              pplVar12 = (long **)(lVar1 + (long)pplVar12 * -0x10);
              _memcpy(pplVar12,ppplVar9,lVar16);
              *ppplVar8 = pplVar12;
              ppplVar7[0x4c] = (long **)(lVar1 + uVar20 * 0x10);
              ppplVar7[0x4d] = (long **)(lVar6 + (long)pplVar14 * 0x10);
              ppplStack_88 = ppplVar9;
              pplStack_80 = (long **)ppplVar9;
              pplStack_78 = (long **)ppplVar9;
              ppplStack_70 = (long ***)pplVar17;
              func_0x00010988c1b8(&ppplStack_88);
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
        _bzero(ppplVar18,uVar20 * 0x10);
        ppplVar7[0x4c] = (long **)(ppplVar18 + uVar20 * 2);
      }
      else if (pplVar11 < pplVar12) {
        while (ppplVar18 != ppplVar9 + (long)pplVar11 * 2) {
          ppplVar18 = ppplVar18 + -2;
          func_0x00010988c204(ppplVar18);
        }
        ppplVar7[0x4c] = (long **)(ppplVar9 + (long)pplVar11 * 2);
      }
code_r0x00010988c138:
      ppplVar7[0x5a] = pplVar11;
      return;
    }
    if (ppplStack_88 != (long ***)0x0) {
      (*(code *)**ppplStack_88)();
    }
  }
  func_0x00010988bd28(&UNK_10f58253c);
LAB_10a9cf3ec:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9cf3f0);
  (*pcVar5)();
}



/* Entry: 10a9cf498; end: 10a9cf4bb;  */

undefined8 * FUN_10a9cf498(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  if ((int)param_1 == 1) {
    return param_1;
  }
  puVar4 = (undefined8 *)0x1;
  uVar5 = 0;
  FUN_10a052ee0();
  if (param_1 != (undefined8 *)0x0) {
    plVar7 = param_1 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7 = (long *)puVar4[1];
  *puVar4 = uVar5;
  puVar4[1] = param_1;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return puVar4;
}



/* Entry: 10a9cf4bc; end: 10a9cf52f;  */

undefined8 * FUN_10a9cf4bc(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10a9cf530; end: 10a9cf5ef;  */

void FUN_10a9cf530(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9ceb14(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a9cfbd8(param_1,param_2,plVar4[0xc],plVar4[0xd] - plVar4[0xc] >> 4);
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



/* Entry: 10a9cf5f0; end: 10a9cfbd7;  */

void FUN_10a9cf5f0(undefined4 *param_1,long ******param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long ******pppppplVar7;
  long ******pppppplVar8;
  long ******pppppplVar9;
  long *****ppppplVar10;
  undefined **ppuVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *****ppppplVar17;
  long ******pppppplVar18;
  long *****ppppplVar19;
  long ******pppppplVar20;
  long ******pppppplVar21;
  long *****ppppplStack_c8;
  long *****ppppplStack_c0;
  long *****ppppplStack_b8;
  long ****pppplStack_b0;
  undefined8 *puStack_a8;
  long *****ppppplStack_a0;
  long *****ppppplStack_98;
  long *****ppppplStack_90;
  long *****ppppplStack_88;
  long *****ppppplStack_80;
  long *****ppppplStack_78;
  long *****ppppplStack_70;
  long *****ppppplStack_68;
  
  pppppplVar7 = param_2;
  (*(code *)(*param_2)[0xb])();
  if (pppppplVar7[0x59] < (long *****)0x8) {
    pppppplVar7[(long)((long)pppppplVar7[0x59] + 0x4e)] = pppppplVar7[0x5a];
    pppppplVar7[0x59] = (long *****)((long)pppppplVar7[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(pppppplVar7 + 0x4b);
  }
  pppppplVar8 = param_2;
  FUN_10a9ce8e8(param_2,param_3);
  FUN_10a9cfd68(param_5);
  if (*param_4 == 7) {
    pppppplVar9 = param_2;
    (*(code *)(*param_2)[0x13])(param_2,*(undefined8 *)(param_4 + 2));
    pppppplVar18 = param_2;
    ppppplStack_88 = (long *****)pppppplVar9;
    (*(code *)(*param_2)[0x41])(param_2,&ppppplStack_88);
    if (((ulong)pppppplVar18 & 1) != 0) {
      ppppplStack_90 = ppppplStack_88;
      ppuVar11 = (undefined **)&ppppplStack_90;
      pppppplVar9 = param_2;
      (*(code *)(*param_2)[0x4d])();
      ppppplStack_c8 = (long *****)0x0;
      ppppplStack_c0 = (long *****)0x0;
      ppppplStack_b8 = (long *****)0x0;
      if (pppppplVar9 != (long ******)0x0) {
        if ((ulong)pppppplVar9 >> 0x3c != 0) {
          FUN_10a9ce5ac();
          goto LAB_10a9cfb3c;
        }
        pppppplVar18 = pppppplVar9;
        ppppplStack_68 = (long *****)&ppppplStack_c8;
        FUN_10a9ce5c0();
        pppppplVar20 = (long ******)
                       ((long)pppppplVar18 - ((long)ppppplStack_c0 - (long)ppppplStack_c8));
        _memcpy(pppppplVar20);
        ppppplStack_78 = ppppplStack_c8;
        ppppplStack_70 = ppppplStack_b8;
        ppppplStack_88 = ppppplStack_c8;
        ppppplStack_80 = ppppplStack_c8;
        ppppplStack_c8 = (long *****)pppppplVar20;
        ppppplStack_c0 = (long *****)pppppplVar18;
        ppppplStack_b8 = (long *****)(pppppplVar18 + (long)ppuVar11 * 2);
        func_0x00010a9ce5f4(&ppppplStack_88);
        pppppplVar18 = (long ******)0x0;
        do {
          ppuVar11 = (undefined **)&ppppplStack_90;
          (*(code *)(*param_2)[0x51])(&pppplStack_b0,param_2,ppuVar11,pppppplVar18);
          if ((int)pppplStack_b0 == 1) {
            ppppplStack_a0 = (long *****)0x0;
            ppppplStack_98 = (long *****)0x0;
          }
          else {
            ppuVar11 = (undefined **)&pppplStack_b0;
            pppppplVar20 = param_2;
            func_0x000109898688();
            if (pppppplVar20 == (long ******)0x0) {
              func_0x00010988bd28(&UNK_10f68f52e);
              goto LAB_10a9cfb3c;
            }
            func_0x00010989879c(&ppppplStack_88);
            if ((long ******)ppppplStack_88 == (long ******)0x0) {
LAB_10a9cf7c4:
              pppppplVar21 = &ppppplStack_a0;
            }
            else {
              ppuVar11 = &PTR_DAT_110b178e0;
              pppppplVar20 = (long ******)ppppplStack_88;
              ___dynamic_cast(ppppplStack_88,&PTR_DAT_110b178e0,&PTR_DAT_110c35b10,0);
              if (pppppplVar20 == (long ******)0x0) goto LAB_10a9cf7c4;
              ppppplStack_98 = ppppplStack_80;
              pppppplVar21 = &ppppplStack_88;
              ppppplStack_a0 = (long *****)pppppplVar20;
            }
            *pppppplVar21 = (long *****)0x0;
            pppppplVar21[1] = (long *****)0x0;
            ppppplVar12 = ppppplStack_80;
            if ((long ******)ppppplStack_80 != (long ******)0x0) {
              pppppplVar20 = (long ******)(ppppplStack_80 + 1);
              do {
                ppppplVar17 = *pppppplVar20;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppppplVar20,0x10);
                if (bVar4) {
                  *pppppplVar20 = (long *****)((long)ppppplVar17 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (ppppplVar17 == (long *****)0x0) {
                (*(code *)(*ppppplStack_80)[2])(ppppplStack_80);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar12);
              }
            }
            if ((long ******)ppppplStack_a0 == (long ******)0x0) {
              func_0x00010988bd28(&UNK_10f58251f);
              goto LAB_10a9cfb3c;
            }
          }
          ppppplVar12 = ppppplStack_a0;
          if (ppppplStack_c0 < ppppplStack_b8) {
            *ppppplStack_c0 = (long ****)ppppplStack_a0;
            ppppplStack_c0[1] = (long ****)ppppplStack_98;
            pppppplVar20 = (long ******)(ppppplStack_c0 + 2);
          }
          else {
            lVar16 = (long)ppppplStack_c0 - (long)ppppplStack_c8;
            uVar14 = (lVar16 >> 4) + 1;
            if (uVar14 >> 0x3c != 0) {
              FUN_10a9ce5ac();
              goto LAB_10a9cfb3c;
            }
            uVar15 = (long)ppppplStack_b8 - (long)ppppplStack_c8 >> 3;
            if (uVar15 <= uVar14) {
              uVar15 = uVar14;
            }
            if (0x7fffffffffffffef < (ulong)((long)ppppplStack_b8 - (long)ppppplStack_c8)) {
              uVar15 = 0xfffffffffffffff;
            }
            ppppplStack_68 = (long *****)&ppppplStack_c8;
            FUN_10a9ce5c0();
            puVar2 = (undefined8 *)(uVar15 + lVar16);
            lVar16 = (long)ppuVar11 * 0x10;
            *puVar2 = ppppplVar12;
            puVar2[1] = ppppplStack_98;
            pppppplVar20 = (long ******)(puVar2 + 2);
            pppppplVar21 = (long ******)
                           ((long)puVar2 - ((long)ppppplStack_c0 - (long)ppppplStack_c8));
            ppuVar11 = (undefined **)ppppplStack_c8;
            _memcpy(pppppplVar21);
            ppppplStack_78 = ppppplStack_c8;
            ppppplStack_70 = ppppplStack_b8;
            ppppplStack_88 = ppppplStack_c8;
            ppppplStack_80 = ppppplStack_c8;
            ppppplStack_c8 = (long *****)pppppplVar21;
            ppppplStack_c0 = (long *****)pppppplVar20;
            ppppplStack_b8 = (long *****)(uVar15 + lVar16);
            func_0x00010a9ce5f4(&ppppplStack_88);
          }
          ppppplStack_c0 = (long *****)pppppplVar20;
          if ((3 < (int)pppplStack_b0) && (puStack_a8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_a8)();
          }
          pppppplVar18 = (long ******)((long)pppppplVar18 + 1);
        } while (pppppplVar18 != pppppplVar9);
      }
      if ((long ******)ppppplStack_90 != (long ******)0x0) {
        (*(code *)**ppppplStack_90)();
      }
      ppppplVar12 = ppppplStack_c0;
      pppppplVar18 = (long ******)ppppplStack_c8;
      pppppplVar9 = pppppplVar8 + 0xc;
      if (pppppplVar9 != &ppppplStack_c8) {
        uVar14 = (long)ppppplStack_c0 - (long)ppppplStack_c8;
        ppppplVar13 = pppppplVar8[0xe];
        ppppplVar17 = pppppplVar8[0xc];
        if ((ulong)((long)ppppplVar13 - (long)ppppplVar17) < uVar14) {
          ppppplVar19 = (long *****)((long)uVar14 >> 4);
          if (ppppplVar17 != (long *****)0x0) {
            ppppplVar10 = pppppplVar8[0xd];
            ppppplVar13 = ppppplVar17;
            if (ppppplVar10 != ppppplVar17) {
              do {
                ppppplVar10 = ppppplVar10 + -2;
                func_0x00010a9c969c();
              } while (ppppplVar10 != ppppplVar17);
              ppppplVar13 = *pppppplVar9;
            }
            pppppplVar8[0xd] = ppppplVar17;
            __ZdlPv(ppppplVar13);
            ppppplVar13 = (long *****)0x0;
            *pppppplVar9 = (long *****)0x0;
            pppppplVar8[0xd] = (long *****)0x0;
            pppppplVar8[0xe] = (long *****)0x0;
          }
          if ((ulong)ppppplVar19 >> 0x3c == 0) {
            ppppplVar17 = (long *****)((long)ppppplVar13 >> 3);
            if ((long *****)((long)ppppplVar13 >> 3) <= ppppplVar19) {
              ppppplVar17 = ppppplVar19;
            }
            if ((long *****)0x7fffffffffffffef < ppppplVar13) {
              ppppplVar17 = (long *****)0xfffffffffffffff;
            }
            if ((ulong)ppppplVar17 >> 0x3c == 0) {
              FUN_10a9ce5c0();
              pppppplVar8[0xc] = ppppplVar17;
              pppppplVar8[0xd] = ppppplVar17;
              pppppplVar8[0xe] = ppppplVar17 + (long)ppuVar11 * 2;
              for (; pppppplVar18 != (long ******)ppppplVar12; pppppplVar18 = pppppplVar18 + 2) {
                ppppplVar13 = pppppplVar18[1];
                ppppplVar19 = *pppppplVar18;
                ppppplVar17[1] = (long ****)pppppplVar18[1];
                *ppppplVar17 = (long ****)ppppplVar19;
                if (ppppplVar13 != (long *****)0x0) {
                  ppppplVar13 = ppppplVar13 + 1;
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(ppppplVar13,0x10);
                    if (bVar4) {
                      *ppppplVar13 = (long ****)((long)*ppppplVar13 + 1);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                ppppplVar17 = ppppplVar17 + 2;
              }
              pppppplVar8[0xd] = ppppplVar17;
              goto SUB_10988c170;
            }
          }
          FUN_10a9ce5ac();
          goto LAB_10a9cfb3c;
        }
        ppppplVar13 = pppppplVar8[0xd];
        if ((ulong)((long)ppppplVar13 - (long)ppppplVar17) < uVar14) {
          pppppplVar9 = (long ******)
                        ((long)ppppplStack_c8 + ((long)ppppplVar13 - (long)ppppplVar17));
          if (ppppplVar13 != ppppplVar17) {
            do {
              pppppplVar20 = pppppplVar18 + 2;
              FUN_10a9cf4bc(ppppplVar17,*pppppplVar18,pppppplVar18[1]);
              ppppplVar17 = ppppplVar17 + 2;
              pppppplVar18 = pppppplVar20;
            } while (pppppplVar20 != pppppplVar9);
            ppppplVar13 = pppppplVar8[0xd];
          }
          for (; pppppplVar9 != (long ******)ppppplVar12; pppppplVar9 = pppppplVar9 + 2) {
            ppppplVar17 = pppppplVar9[1];
            ppppplVar19 = *pppppplVar9;
            ppppplVar13[1] = (long ****)pppppplVar9[1];
            *ppppplVar13 = (long ****)ppppplVar19;
            if (ppppplVar17 != (long *****)0x0) {
              ppppplVar17 = ppppplVar17 + 1;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(ppppplVar17,0x10);
                if (bVar4) {
                  *ppppplVar17 = (long ****)((long)*ppppplVar17 + 1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            ppppplVar13 = ppppplVar13 + 2;
          }
          pppppplVar8[0xd] = ppppplVar13;
        }
        else {
          pppppplVar9 = (long ******)ppppplStack_c8;
          if (ppppplStack_c8 != ppppplStack_c0) {
            do {
              pppppplVar18 = pppppplVar9 + 2;
              FUN_10a9cf4bc(ppppplVar17,*pppppplVar9,pppppplVar9[1]);
              ppppplVar17 = ppppplVar17 + 2;
              pppppplVar9 = pppppplVar18;
            } while (pppppplVar18 != (long ******)ppppplVar12);
            ppppplVar13 = pppppplVar8[0xd];
          }
          while (ppppplVar13 != ppppplVar17) {
            ppppplVar13 = ppppplVar13 + -2;
            func_0x00010a9c969c();
          }
          pppppplVar8[0xd] = ppppplVar17;
        }
      }
SUB_10988c170:
      func_0x00010a9c9640(&ppppplStack_c8);
      *param_1 = 0;
      pppppplVar8 = pppppplVar7 + 0x4b;
      ppppplVar12 = pppppplVar7[0x59];
      ppppplVar17 = (long *****)((long)ppppplVar12 + -1);
      pppppplVar7[0x59] = ppppplVar17;
      if (ppppplVar17 < (long *****)0x8) {
        ppppplVar12 = pppppplVar8[(long)((long)ppppplVar12 + 2)];
        if (pppppplVar7[0x5a] == ppppplVar12) {
          return;
        }
      }
      else {
        ppppplVar12 = (long *****)pppppplVar7[0x57][-1];
        pppppplVar7[0x57] = pppppplVar7[0x57] + -1;
        if (pppppplVar7[0x5a] == ppppplVar12) {
          return;
        }
      }
      ppppplVar17 = *pppppplVar8;
      ppppplVar13 = pppppplVar7[0x4c];
      lVar16 = (long)ppppplVar13 - (long)ppppplVar17;
      ppppplVar19 = (long *****)(lVar16 >> 4);
      if (ppppplVar19 < ppppplVar12) {
        uVar14 = (long)ppppplVar12 - (long)ppppplVar19;
        ppppplVar10 = pppppplVar7[0x4d];
        if ((ulong)((long)ppppplVar10 - (long)ppppplVar13 >> 4) < uVar14) {
          if ((ulong)ppppplVar12 >> 0x3c == 0) {
            ppppplVar13 = (long *****)((long)ppppplVar10 - (long)ppppplVar17 >> 3);
            if (ppppplVar13 <= ppppplVar12) {
              ppppplVar13 = ppppplVar12;
            }
            if (0x7fffffffffffffef < (ulong)((long)ppppplVar10 - (long)ppppplVar17)) {
              ppppplVar13 = (long *****)0xfffffffffffffff;
            }
            ppppplStack_68 = (long *****)pppppplVar8;
            if ((ulong)ppppplVar13 >> 0x3c == 0) {
              lVar6 = (long)ppppplVar13 << 4;
              __Znwm();
              lVar1 = lVar6 + lVar16;
              _bzero(lVar1,uVar14 * 0x10);
              ppppplVar19 = (long *****)(lVar1 + (long)ppppplVar19 * -0x10);
              _memcpy(ppppplVar19,ppppplVar17,lVar16);
              *pppppplVar8 = ppppplVar19;
              pppppplVar7[0x4c] = (long *****)(lVar1 + uVar14 * 0x10);
              pppppplVar7[0x4d] = (long *****)(lVar6 + (long)ppppplVar13 * 0x10);
              ppppplStack_88 = ppppplVar17;
              ppppplStack_80 = ppppplVar17;
              ppppplStack_78 = ppppplVar17;
              ppppplStack_70 = ppppplVar10;
              func_0x00010988c1b8(&ppppplStack_88);
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
        _bzero(ppppplVar13,uVar14 * 0x10);
        pppppplVar7[0x4c] = ppppplVar13 + uVar14 * 2;
      }
      else if (ppppplVar12 < ppppplVar19) {
        while (ppppplVar13 != ppppplVar17 + (long)ppppplVar12 * 2) {
          ppppplVar13 = ppppplVar13 + -2;
          func_0x00010988c204(ppppplVar13);
        }
        pppppplVar7[0x4c] = ppppplVar17 + (long)ppppplVar12 * 2;
      }
code_r0x00010988c138:
      pppppplVar7[0x5a] = ppppplVar12;
      return;
    }
    if ((long ******)ppppplStack_88 != (long ******)0x0) {
      (*(code *)**ppppplStack_88)();
    }
  }
  func_0x00010988bd28(&UNK_10f58253c);
LAB_10a9cfb3c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9cfb40);
  (*pcVar5)();
}



/* Entry: 10a9cfbd8; end: 10a9cfd67;  */

void FUN_10a9cfbd8(undefined4 *param_1,long *param_2,long param_3,long param_4)

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
      ppuStack_68 = &PTR_DAT_110c35b10;
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



/* Entry: 10a9cfd68; end: 10a9cfd8b;  */

void FUN_10a9cfd68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10a9ceb14(plVar3,uVar5);
  FUN_10a052e3c(param_4);
  lVar6 = plVar3[0xf];
  *extraout_x8 = 2;
  *(char *)(extraout_x8 + 2) = (char)lVar6;
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



/* Entry: 10a9cfd8c; end: 10a9cfe43;  */

void FUN_10a9cfd8c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9ceb14(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0xf];
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



/* Entry: 10a9cfe44; end: 10a9cff03;  */

void FUN_10a9cfe44(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9ce8e8(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)((long)plVar4 + 0x79) = (char)param_2;
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



/* Entry: 10a9cff04; end: 10a9cffbb;  */

void FUN_10a9cff04(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9ceb14(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(undefined1 *)((long)param_2 + 0x79);
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



/* Entry: 10a9cffbc; end: 10a9d002f;  */

undefined8 * FUN_10a9cffbc(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10a9d0030; end: 10a9d0043;  */

void FUN_10a9d0030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  undefined **ppuStack_98;
  long in_stack_ffffffffffffff70;
  
  plVar7 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar7 >> 0x3c == 0) {
    __Znwm((long)plVar7 << 4);
    return;
  }
  func_0x000109ffded8();
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
  FUN_10a9ceb14(plVar7,param_2);
  FUN_10a052e3c(param_4);
  lVar10 = plVar18[0x10];
  lVar16 = plVar18[0x11];
  lVar15 = lVar16 - lVar10 >> 4;
  (**(code **)(*plVar7 + 600))(&stack0xffffffffffffff70,plVar7,lVar15);
  lStack_a0 = in_stack_ffffffffffffff70;
  if (lVar16 != lVar10) {
    lVar16 = 0;
    do {
      lVar14 = lVar10 + lVar16 * 0x10;
      lVar12 = *(long *)(lVar14 + 8);
      plVar18 = *(long **)(lVar14 + 8);
      if (lVar12 != 0) {
        plVar1 = (long *)(lVar12 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppuStack_98 = &PTR_DAT_110c35aa0;
      func_0x000109899de4(&puStack_b0,plVar7,&stack0xffffffffffffff70,&ppuStack_98,0,0);
      if (plVar18 != (long *)0x0) {
        plVar1 = plVar18 + 1;
        do {
          lVar14 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
      (**(code **)(*plVar7 + 0x290))(plVar7,&lStack_a0,lVar16,&puStack_b0);
      if ((3 < (int)puStack_b0) && (puStack_a8 != (undefined8 *)0x0)) {
        (**(code **)*puStack_a8)();
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != lVar15);
  }
  *extraout_x8 = 7;
  *(long *)(extraout_x8 + 2) = lStack_a0;
  ppuVar2 = (undefined **)(plVar8 + 0x4b);
  lVar10 = plVar8[0x59];
  uVar11 = lVar10 - 1;
  plVar8[0x59] = uVar11;
  if (uVar11 < 8) {
    puVar9 = ppuVar2[lVar10 + 2];
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
  puVar13 = (undefined *)plVar8[0x4c];
  lVar10 = (long)puVar13 - (long)puVar3;
  puVar17 = (undefined *)(lVar10 >> 4);
  if (puVar17 < puVar9) {
    uVar11 = (long)puVar9 - (long)puVar17;
    lVar16 = plVar8[0x4d];
    if ((ulong)(lVar16 - (long)puVar13 >> 4) < uVar11) {
      if ((ulong)puVar9 >> 0x3c == 0) {
        puVar13 = (undefined *)(lVar16 - (long)puVar3 >> 3);
        if (puVar13 <= puVar9) {
          puVar13 = puVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - (long)puVar3)) {
          puVar13 = (undefined *)0xfffffffffffffff;
        }
        ppuStack_98 = ppuVar2;
        if ((ulong)puVar13 >> 0x3c == 0) {
          lVar14 = (long)puVar13 << 4;
          __Znwm();
          lVar15 = lVar14 + lVar10;
          _bzero(lVar15,uVar11 * 0x10);
          puVar17 = (undefined *)(lVar15 + (long)puVar17 * -0x10);
          _memcpy(puVar17,puVar3,lVar10);
          *ppuVar2 = puVar17;
          plVar8[0x4c] = lVar15 + uVar11 * 0x10;
          plVar8[0x4d] = lVar14 + (long)puVar13 * 0x10;
          puStack_b8 = puVar3;
          puStack_b0 = puVar3;
          puStack_a8 = (undefined8 *)puVar3;
          lStack_a0 = lVar16;
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
    _bzero(puVar13,uVar11 * 0x10);
    plVar8[0x4c] = (long)(puVar13 + uVar11 * 0x10);
  }
  else if (puVar9 < puVar17) {
    while (puVar13 != puVar3 + (long)puVar9 * 0x10) {
      puVar13 = puVar13 + -0x10;
      func_0x00010988c204(puVar13);
    }
    plVar8[0x4c] = (long)(puVar3 + (long)puVar9 * 0x10);
  }
code_r0x00010988c138:
  plVar8[0x5a] = (long)puVar9;
  return;
}



/* Entry: 10a9d0044; end: 10a9d0077;  */

void FUN_10a9d0044(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  undefined4 *extraout_x8;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long *plVar17;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined **ppuStack_88;
  long in_stack_ffffffffffffff80;
  
  if ((ulong)param_1 >> 0x3c == 0) {
    __Znwm((long)param_1 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar7 = param_1;
  (**(code **)(*param_1 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar17 = param_1;
  FUN_10a9ceb14(param_1,param_2);
  FUN_10a052e3c(param_4);
  lVar9 = plVar17[0x10];
  lVar15 = plVar17[0x11];
  lVar14 = lVar15 - lVar9 >> 4;
  (**(code **)(*param_1 + 600))(&stack0xffffffffffffff80,param_1,lVar14);
  lStack_90 = in_stack_ffffffffffffff80;
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
      ppuStack_88 = &PTR_DAT_110c35aa0;
      func_0x000109899de4(&puStack_a0,param_1,&stack0xffffffffffffff80,&ppuStack_88,0,0);
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
      (**(code **)(*param_1 + 0x290))(param_1,&lStack_90,lVar15,&puStack_a0);
      if ((3 < (int)puStack_a0) && (puStack_98 != (undefined8 *)0x0)) {
        (**(code **)*puStack_98)();
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != lVar14);
  }
  *extraout_x8 = 7;
  *(long *)(extraout_x8 + 2) = lStack_90;
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
        ppuStack_88 = ppuVar2;
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
          puStack_a8 = puVar3;
          puStack_a0 = puVar3;
          puStack_98 = (undefined8 *)puVar3;
          lStack_90 = lVar15;
          func_0x00010988c1b8(&puStack_a8);
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



/* Entry: 10a9d0078; end: 10a9d0283;  */

void FUN_10a9d0078(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9ceb14(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar9 = plVar17[0x10];
  lVar15 = plVar17[0x11];
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
      ppuStack_68 = &PTR_DAT_110c35aa0;
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



/* Entry: 10a9d0284; end: 10a9d086b;  */

void FUN_10a9d0284(undefined4 *param_1,long ******param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long ******pppppplVar7;
  long ******pppppplVar8;
  long ******pppppplVar9;
  long *****ppppplVar10;
  undefined **ppuVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *****ppppplVar17;
  long ******pppppplVar18;
  long *****ppppplVar19;
  long ******pppppplVar20;
  long ******pppppplVar21;
  long *****ppppplStack_c8;
  long *****ppppplStack_c0;
  long *****ppppplStack_b8;
  long ****pppplStack_b0;
  undefined8 *puStack_a8;
  long *****ppppplStack_a0;
  long *****ppppplStack_98;
  long *****ppppplStack_90;
  long *****ppppplStack_88;
  long *****ppppplStack_80;
  long *****ppppplStack_78;
  long *****ppppplStack_70;
  long *****ppppplStack_68;
  
  pppppplVar7 = param_2;
  (*(code *)(*param_2)[0xb])();
  if (pppppplVar7[0x59] < (long *****)0x8) {
    pppppplVar7[(long)((long)pppppplVar7[0x59] + 0x4e)] = pppppplVar7[0x5a];
    pppppplVar7[0x59] = (long *****)((long)pppppplVar7[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(pppppplVar7 + 0x4b);
  }
  pppppplVar8 = param_2;
  FUN_10a9ce8e8(param_2,param_3);
  FUN_10a9d086c(param_5);
  if (*param_4 == 7) {
    pppppplVar9 = param_2;
    (*(code *)(*param_2)[0x13])(param_2,*(undefined8 *)(param_4 + 2));
    pppppplVar18 = param_2;
    ppppplStack_88 = (long *****)pppppplVar9;
    (*(code *)(*param_2)[0x41])(param_2,&ppppplStack_88);
    if (((ulong)pppppplVar18 & 1) != 0) {
      ppppplStack_90 = ppppplStack_88;
      ppuVar11 = (undefined **)&ppppplStack_90;
      pppppplVar9 = param_2;
      (*(code *)(*param_2)[0x4d])();
      ppppplStack_c8 = (long *****)0x0;
      ppppplStack_c0 = (long *****)0x0;
      ppppplStack_b8 = (long *****)0x0;
      if (pppppplVar9 != (long ******)0x0) {
        if ((ulong)pppppplVar9 >> 0x3c != 0) {
          FUN_10a9d0030();
          goto LAB_10a9d07d0;
        }
        pppppplVar18 = pppppplVar9;
        ppppplStack_68 = (long *****)&ppppplStack_c8;
        FUN_10a9d0044();
        pppppplVar20 = (long ******)
                       ((long)pppppplVar18 - ((long)ppppplStack_c0 - (long)ppppplStack_c8));
        _memcpy(pppppplVar20);
        ppppplStack_78 = ppppplStack_c8;
        ppppplStack_70 = ppppplStack_b8;
        ppppplStack_88 = ppppplStack_c8;
        ppppplStack_80 = ppppplStack_c8;
        ppppplStack_c8 = (long *****)pppppplVar20;
        ppppplStack_c0 = (long *****)pppppplVar18;
        ppppplStack_b8 = (long *****)(pppppplVar18 + (long)ppuVar11 * 2);
        FUN_10a9d0890(&ppppplStack_88);
        pppppplVar18 = (long ******)0x0;
        do {
          ppuVar11 = (undefined **)&ppppplStack_90;
          (*(code *)(*param_2)[0x51])(&pppplStack_b0,param_2,ppuVar11,pppppplVar18);
          if ((int)pppplStack_b0 == 1) {
            ppppplStack_a0 = (long *****)0x0;
            ppppplStack_98 = (long *****)0x0;
          }
          else {
            ppuVar11 = (undefined **)&pppplStack_b0;
            pppppplVar20 = param_2;
            func_0x000109898688();
            if (pppppplVar20 == (long ******)0x0) {
              func_0x00010988bd28(&UNK_10f68f52e);
              goto LAB_10a9d07d0;
            }
            func_0x00010989879c(&ppppplStack_88);
            if ((long ******)ppppplStack_88 == (long ******)0x0) {
LAB_10a9d0458:
              pppppplVar21 = &ppppplStack_a0;
            }
            else {
              ppuVar11 = &PTR_DAT_110b178e0;
              pppppplVar20 = (long ******)ppppplStack_88;
              ___dynamic_cast(ppppplStack_88,&PTR_DAT_110b178e0,&PTR_DAT_110c35aa0,0);
              if (pppppplVar20 == (long ******)0x0) goto LAB_10a9d0458;
              ppppplStack_98 = ppppplStack_80;
              pppppplVar21 = &ppppplStack_88;
              ppppplStack_a0 = (long *****)pppppplVar20;
            }
            *pppppplVar21 = (long *****)0x0;
            pppppplVar21[1] = (long *****)0x0;
            ppppplVar12 = ppppplStack_80;
            if ((long ******)ppppplStack_80 != (long ******)0x0) {
              pppppplVar20 = (long ******)(ppppplStack_80 + 1);
              do {
                ppppplVar17 = *pppppplVar20;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppppplVar20,0x10);
                if (bVar4) {
                  *pppppplVar20 = (long *****)((long)ppppplVar17 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (ppppplVar17 == (long *****)0x0) {
                (*(code *)(*ppppplStack_80)[2])(ppppplStack_80);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar12);
              }
            }
            if ((long ******)ppppplStack_a0 == (long ******)0x0) {
              func_0x00010988bd28(&UNK_10f58251f);
              goto LAB_10a9d07d0;
            }
          }
          ppppplVar12 = ppppplStack_a0;
          if (ppppplStack_c0 < ppppplStack_b8) {
            *ppppplStack_c0 = (long ****)ppppplStack_a0;
            ppppplStack_c0[1] = (long ****)ppppplStack_98;
            pppppplVar20 = (long ******)(ppppplStack_c0 + 2);
          }
          else {
            lVar16 = (long)ppppplStack_c0 - (long)ppppplStack_c8;
            uVar14 = (lVar16 >> 4) + 1;
            if (uVar14 >> 0x3c != 0) {
              FUN_10a9d0030();
              goto LAB_10a9d07d0;
            }
            uVar15 = (long)ppppplStack_b8 - (long)ppppplStack_c8 >> 3;
            if (uVar15 <= uVar14) {
              uVar15 = uVar14;
            }
            if (0x7fffffffffffffef < (ulong)((long)ppppplStack_b8 - (long)ppppplStack_c8)) {
              uVar15 = 0xfffffffffffffff;
            }
            ppppplStack_68 = (long *****)&ppppplStack_c8;
            FUN_10a9d0044();
            puVar2 = (undefined8 *)(uVar15 + lVar16);
            lVar16 = (long)ppuVar11 * 0x10;
            *puVar2 = ppppplVar12;
            puVar2[1] = ppppplStack_98;
            pppppplVar20 = (long ******)(puVar2 + 2);
            pppppplVar21 = (long ******)
                           ((long)puVar2 - ((long)ppppplStack_c0 - (long)ppppplStack_c8));
            ppuVar11 = (undefined **)ppppplStack_c8;
            _memcpy(pppppplVar21);
            ppppplStack_78 = ppppplStack_c8;
            ppppplStack_70 = ppppplStack_b8;
            ppppplStack_88 = ppppplStack_c8;
            ppppplStack_80 = ppppplStack_c8;
            ppppplStack_c8 = (long *****)pppppplVar21;
            ppppplStack_c0 = (long *****)pppppplVar20;
            ppppplStack_b8 = (long *****)(uVar15 + lVar16);
            FUN_10a9d0890(&ppppplStack_88);
          }
          ppppplStack_c0 = (long *****)pppppplVar20;
          if ((3 < (int)pppplStack_b0) && (puStack_a8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_a8)();
          }
          pppppplVar18 = (long ******)((long)pppppplVar18 + 1);
        } while (pppppplVar18 != pppppplVar9);
      }
      if ((long ******)ppppplStack_90 != (long ******)0x0) {
        (*(code *)**ppppplStack_90)();
      }
      ppppplVar12 = ppppplStack_c0;
      pppppplVar18 = (long ******)ppppplStack_c8;
      pppppplVar9 = pppppplVar8 + 0x10;
      if (pppppplVar9 != &ppppplStack_c8) {
        uVar14 = (long)ppppplStack_c0 - (long)ppppplStack_c8;
        ppppplVar13 = pppppplVar8[0x12];
        ppppplVar17 = pppppplVar8[0x10];
        if ((ulong)((long)ppppplVar13 - (long)ppppplVar17) < uVar14) {
          ppppplVar19 = (long *****)((long)uVar14 >> 4);
          if (ppppplVar17 != (long *****)0x0) {
            ppppplVar10 = pppppplVar8[0x11];
            ppppplVar13 = ppppplVar17;
            if (ppppplVar10 != ppppplVar17) {
              do {
                ppppplVar10 = ppppplVar10 + -2;
                func_0x00010a9c95e8();
              } while (ppppplVar10 != ppppplVar17);
              ppppplVar13 = *pppppplVar9;
            }
            pppppplVar8[0x11] = ppppplVar17;
            __ZdlPv(ppppplVar13);
            ppppplVar13 = (long *****)0x0;
            *pppppplVar9 = (long *****)0x0;
            pppppplVar8[0x11] = (long *****)0x0;
            pppppplVar8[0x12] = (long *****)0x0;
          }
          if ((ulong)ppppplVar19 >> 0x3c == 0) {
            ppppplVar17 = (long *****)((long)ppppplVar13 >> 3);
            if ((long *****)((long)ppppplVar13 >> 3) <= ppppplVar19) {
              ppppplVar17 = ppppplVar19;
            }
            if ((long *****)0x7fffffffffffffef < ppppplVar13) {
              ppppplVar17 = (long *****)0xfffffffffffffff;
            }
            if ((ulong)ppppplVar17 >> 0x3c == 0) {
              FUN_10a9d0044();
              pppppplVar8[0x10] = ppppplVar17;
              pppppplVar8[0x11] = ppppplVar17;
              pppppplVar8[0x12] = ppppplVar17 + (long)ppuVar11 * 2;
              for (; pppppplVar18 != (long ******)ppppplVar12; pppppplVar18 = pppppplVar18 + 2) {
                ppppplVar13 = pppppplVar18[1];
                ppppplVar19 = *pppppplVar18;
                ppppplVar17[1] = (long ****)pppppplVar18[1];
                *ppppplVar17 = (long ****)ppppplVar19;
                if (ppppplVar13 != (long *****)0x0) {
                  ppppplVar13 = ppppplVar13 + 1;
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(ppppplVar13,0x10);
                    if (bVar4) {
                      *ppppplVar13 = (long ****)((long)*ppppplVar13 + 1);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                ppppplVar17 = ppppplVar17 + 2;
              }
              pppppplVar8[0x11] = ppppplVar17;
              goto SUB_10988c170;
            }
          }
          FUN_10a9d0030();
          goto LAB_10a9d07d0;
        }
        ppppplVar13 = pppppplVar8[0x11];
        if ((ulong)((long)ppppplVar13 - (long)ppppplVar17) < uVar14) {
          pppppplVar9 = (long ******)
                        ((long)ppppplStack_c8 + ((long)ppppplVar13 - (long)ppppplVar17));
          if (ppppplVar13 != ppppplVar17) {
            do {
              pppppplVar20 = pppppplVar18 + 2;
              FUN_10a9cffbc(ppppplVar17,*pppppplVar18,pppppplVar18[1]);
              ppppplVar17 = ppppplVar17 + 2;
              pppppplVar18 = pppppplVar20;
            } while (pppppplVar20 != pppppplVar9);
            ppppplVar13 = pppppplVar8[0x11];
          }
          for (; pppppplVar9 != (long ******)ppppplVar12; pppppplVar9 = pppppplVar9 + 2) {
            ppppplVar17 = pppppplVar9[1];
            ppppplVar19 = *pppppplVar9;
            ppppplVar13[1] = (long ****)pppppplVar9[1];
            *ppppplVar13 = (long ****)ppppplVar19;
            if (ppppplVar17 != (long *****)0x0) {
              ppppplVar17 = ppppplVar17 + 1;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(ppppplVar17,0x10);
                if (bVar4) {
                  *ppppplVar17 = (long ****)((long)*ppppplVar17 + 1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            ppppplVar13 = ppppplVar13 + 2;
          }
          pppppplVar8[0x11] = ppppplVar13;
        }
        else {
          pppppplVar9 = (long ******)ppppplStack_c8;
          if (ppppplStack_c8 != ppppplStack_c0) {
            do {
              pppppplVar18 = pppppplVar9 + 2;
              FUN_10a9cffbc(ppppplVar17,*pppppplVar9,pppppplVar9[1]);
              ppppplVar17 = ppppplVar17 + 2;
              pppppplVar9 = pppppplVar18;
            } while (pppppplVar18 != (long ******)ppppplVar12);
            ppppplVar13 = pppppplVar8[0x11];
          }
          while (ppppplVar13 != ppppplVar17) {
            ppppplVar13 = ppppplVar13 + -2;
            func_0x00010a9c95e8();
          }
          pppppplVar8[0x11] = ppppplVar17;
        }
      }
SUB_10988c170:
      func_0x00010a9c958c(&ppppplStack_c8);
      *param_1 = 0;
      pppppplVar8 = pppppplVar7 + 0x4b;
      ppppplVar12 = pppppplVar7[0x59];
      ppppplVar17 = (long *****)((long)ppppplVar12 + -1);
      pppppplVar7[0x59] = ppppplVar17;
      if (ppppplVar17 < (long *****)0x8) {
        ppppplVar12 = pppppplVar8[(long)((long)ppppplVar12 + 2)];
        if (pppppplVar7[0x5a] == ppppplVar12) {
          return;
        }
      }
      else {
        ppppplVar12 = (long *****)pppppplVar7[0x57][-1];
        pppppplVar7[0x57] = pppppplVar7[0x57] + -1;
        if (pppppplVar7[0x5a] == ppppplVar12) {
          return;
        }
      }
      ppppplVar17 = *pppppplVar8;
      ppppplVar13 = pppppplVar7[0x4c];
      lVar16 = (long)ppppplVar13 - (long)ppppplVar17;
      ppppplVar19 = (long *****)(lVar16 >> 4);
      if (ppppplVar19 < ppppplVar12) {
        uVar14 = (long)ppppplVar12 - (long)ppppplVar19;
        ppppplVar10 = pppppplVar7[0x4d];
        if ((ulong)((long)ppppplVar10 - (long)ppppplVar13 >> 4) < uVar14) {
          if ((ulong)ppppplVar12 >> 0x3c == 0) {
            ppppplVar13 = (long *****)((long)ppppplVar10 - (long)ppppplVar17 >> 3);
            if (ppppplVar13 <= ppppplVar12) {
              ppppplVar13 = ppppplVar12;
            }
            if (0x7fffffffffffffef < (ulong)((long)ppppplVar10 - (long)ppppplVar17)) {
              ppppplVar13 = (long *****)0xfffffffffffffff;
            }
            ppppplStack_68 = (long *****)pppppplVar8;
            if ((ulong)ppppplVar13 >> 0x3c == 0) {
              lVar6 = (long)ppppplVar13 << 4;
              __Znwm();
              lVar1 = lVar6 + lVar16;
              _bzero(lVar1,uVar14 * 0x10);
              ppppplVar19 = (long *****)(lVar1 + (long)ppppplVar19 * -0x10);
              _memcpy(ppppplVar19,ppppplVar17,lVar16);
              *pppppplVar8 = ppppplVar19;
              pppppplVar7[0x4c] = (long *****)(lVar1 + uVar14 * 0x10);
              pppppplVar7[0x4d] = (long *****)(lVar6 + (long)ppppplVar13 * 0x10);
              ppppplStack_88 = ppppplVar17;
              ppppplStack_80 = ppppplVar17;
              ppppplStack_78 = ppppplVar17;
              ppppplStack_70 = ppppplVar10;
              func_0x00010988c1b8(&ppppplStack_88);
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
        _bzero(ppppplVar13,uVar14 * 0x10);
        pppppplVar7[0x4c] = ppppplVar13 + uVar14 * 2;
      }
      else if (ppppplVar12 < ppppplVar19) {
        while (ppppplVar13 != ppppplVar17 + (long)ppppplVar12 * 2) {
          ppppplVar13 = ppppplVar13 + -2;
          func_0x00010988c204(ppppplVar13);
        }
        pppppplVar7[0x4c] = ppppplVar17 + (long)ppppplVar12 * 2;
      }
code_r0x00010988c138:
      pppppplVar7[0x5a] = ppppplVar12;
      return;
    }
    if ((long ******)ppppplStack_88 != (long ******)0x0) {
      (*(code *)**ppppplStack_88)();
    }
  }
  func_0x00010988bd28(&UNK_10f58253c);
LAB_10a9d07d0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9d07d4);
  (*pcVar5)();
}



/* Entry: 10a9d086c; end: 10a9d088f;  */

long * FUN_10a9d086c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if ((int)param_1 == 1) {
    return param_1;
  }
  plVar2 = (long *)0x1;
  FUN_10a052ee0(1,0,param_1);
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x10;
    func_0x00010a9c95e8();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a9d0890; end: 10a9d08db;  */

long * FUN_10a9d0890(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010a9c95e8();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a9d08dc; end: 10a9d08eb;  */

void FUN_10a9d08dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c363e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a9d08ec; end: 10a9d090b;  */

void FUN_10a9d08ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c363e0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9d090c; end: 10a9d091b;  */

void FUN_10a9d090c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9d0914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9d091c; end: 10a9d0abb;  */

void FUN_10a9d091c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined **ppuStack_58;
  long *plStack_50;
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
  FUN_10a052e3c(param_5);
  plVar5 = (long *)0xb0;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110c363e0;
  plVar5[3] = (long)&PTR_DAT_110c35b38;
  plVar5[4] = 0;
  plVar5[5] = 0;
  func_0x000107c2b054(plVar5 + 6,&UNK_10e4e8a60);
  plVar5[0x11] = 0;
  plVar5[0x10] = 0;
  plVar5[0xf] = 0;
  plVar5[0xe] = 0;
  plVar5[0xd] = 0;
  plVar5[0xc] = 0;
  plVar5[0xb] = 0;
  plVar5[10] = 0;
  plVar5[9] = 0;
  *(undefined2 *)(plVar5 + 0x12) = 0x101;
  *(undefined1 *)((long)plVar5 + 0x92) = 0;
  plVar5[0x14] = 0;
  plVar5[0x15] = 0;
  plVar5[0x13] = 0;
  ppuStack_58 = &PTR_DAT_110c36938;
  plStack_50 = plVar5 + 3;
  plStack_48 = plVar5;
  func_0x000109899de4(param_1,param_2,&plStack_50,&ppuStack_58,0,0);
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
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10a9d0abc; end: 10a9d0bb7;  */

undefined1  [16] FUN_10a9d0abc(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c35b98;
  puVar1 = &UNK_10f687d39;
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
    ppuStack_40 = &PTR_DAT_110c35b98;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c35a88;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a9d0bb8; end: 10a9d0c0b;  */

ulong FUN_10a9d0bb8(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a9d0c0c,0);
  }
  return param_1;
}



/* Entry: 10a9d0c0c; end: 10a9d0d37;  */

void FUN_10a9d0c0c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
      uVar8 = plVar5[0xc];
      plVar4 = (long *)plVar5[0xb];
      if (-1 < (char)*(byte *)((long)plVar5 + 0x6f)) {
        uVar8 = (ulong)*(byte *)((long)plVar5 + 0x6f);
        plVar4 = plVar5 + 0xb;
      }
      (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar4,uVar8);
      *param_1 = 6;
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9d0d24);
  (*pcVar1)();
}



/* Entry: 10a9d0d38; end: 10a9d0df3;  */

void FUN_10a9d0d38(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f688b37,0x12);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9d0df4);
  (*pcVar4)();
}



/* Entry: 10a9d0df4; end: 10a9d0e03;  */

void FUN_10a9d0df4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c36430;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a9d0e04; end: 10a9d0e23;  */

void FUN_10a9d0e04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c36430;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9d0e24; end: 10a9d0e33;  */

void FUN_10a9d0e24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9d0e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9d0e34; end: 10a9d100b;  */

void FUN_10a9d0e34(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plStack_60;
  long *plStack_58;
  char cStack_49;
  undefined **ppuStack_48;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a0584c8(param_5);
  func_0x000109898570(&plStack_60,param_2,param_4);
  plVar5 = (long *)0x80;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  plVar5[3] = (long)&PTR_FUN_110c35bc0;
  *plVar5 = (long)&PTR_FUN_110c36430;
  plVar5[5] = 0;
  plVar5[4] = 0;
  plVar5[7] = 0;
  plVar5[6] = 0;
  plVar5[8] = 0;
  plVar5[10] = 0;
  plVar5[9] = 0;
  plVar5[0xc] = 0;
  plVar5[0xb] = 0;
  plVar5[0xe] = 0;
  plVar5[0xd] = 0;
  *(undefined1 *)(plVar5 + 0xf) = 1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar5 + 9,&plStack_60);
  if (cStack_49 < '\0') {
    __ZdlPv(plStack_60);
  }
  ppuStack_48 = &PTR_DAT_110c35c10;
  plStack_60 = plVar5 + 3;
  plStack_58 = plVar5;
  func_0x000109899de4(param_1,param_2,&plStack_60,&ppuStack_48,0,0);
  plVar5 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10a9d100c; end: 10a9d1107;  */

undefined1  [16] FUN_10a9d100c(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c35c10;
  puVar1 = &UNK_10f687d39;
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
    ppuStack_40 = &PTR_DAT_110c35c10;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c35a58;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a9d1108; end: 10a9d115f;  */

ulong FUN_10a9d1108(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a9d1160,FUN_10a9d1278);
  }
  return param_1;
}



/* Entry: 10a9d1160; end: 10a9d1277;  */

void FUN_10a9d1160(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
      func_0x00010989a420(param_1,param_2,plVar5[9],
                          (plVar5[10] - plVar5[9] >> 3) * -0x5555555555555555);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9d1264);
  (*pcVar1)();
}



/* Entry: 10a9d1278; end: 10a9d13df;  */

void FUN_10a9d1278(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
      FUN_10a35c66c(param_5);
      func_0x000109898f04(&stack0xffffffffffffffa0,param_2,param_4);
      if (plVar5 + 9 != (long *)&stack0xffffffffffffffa0) {
        FUN_10a105cdc();
      }
      FUN_10a0426d8(&stack0xffffffffffffffb8);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9d13b4);
  (*pcVar1)();
}



/* Entry: 10a9d13e0; end: 10a9d149b;  */

void FUN_10a9d13e0(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f688b4a,0xe);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9d149c);
  (*pcVar4)();
}



/* Entry: 10a9d149c; end: 10a9d1597;  */

undefined1  [16] FUN_10a9d149c(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c35c28;
  puVar1 = &UNK_10f687d39;
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
    ppuStack_40 = &PTR_DAT_110c35c28;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c35a88;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a9d1598; end: 10a9d15eb;  */

ulong FUN_10a9d1598(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a9d15ec,0);
  }
  return param_1;
}



/* Entry: 10a9d15ec; end: 10a9d1717;  */

void FUN_10a9d15ec(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
      uVar8 = plVar5[0xc];
      plVar4 = (long *)plVar5[0xb];
      if (-1 < (char)*(byte *)((long)plVar5 + 0x6f)) {
        uVar8 = (ulong)*(byte *)((long)plVar5 + 0x6f);
        plVar4 = plVar5 + 0xb;
      }
      (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar4,uVar8);
      *param_1 = 6;
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9d1704);
  (*pcVar1)();
}



/* Entry: 10a9d1718; end: 10a9d17d3;  */

void FUN_10a9d1718(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f688b59,0x11);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9d17d4);
  (*pcVar4)();
}



/* Entry: 10a9d17d4; end: 10a9d17e3;  */

void FUN_10a9d17d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c36480;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a9d17e4; end: 10a9d1803;  */

void FUN_10a9d17e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c36480;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9d1804; end: 10a9d1813;  */

void FUN_10a9d1804(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9d180c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9d1814; end: 10a9d194b;  */

void FUN_10a9d1814(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined **ppuStack_48;
  long *plStack_40;
  long *plStack_38;
  
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
  plVar5 = (long *)0x68;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110c36480;
  plVar5[5] = 0;
  plVar5[4] = 0;
  plVar5[7] = 0;
  plVar5[6] = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plStack_40 = plVar5 + 3;
  *plStack_40 = (long)&PTR_FUN_110c35c50;
  plVar5[10] = 0;
  plVar5[0xb] = 0;
  *(undefined1 *)(plVar5 + 0xc) = 0;
  ppuStack_48 = &PTR_DAT_110c35ca0;
  plStack_38 = plVar5;
  func_0x000109899de4(param_1,param_2,&plStack_40,&ppuStack_48,0,0);
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10a9d194c; end: 10a9d1a47;  */

undefined1  [16] FUN_10a9d194c(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c35ca0;
  puVar1 = &UNK_10f687d39;
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
    ppuStack_40 = &PTR_DAT_110c35ca0;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c35a58;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a9d1a48; end: 10a9d1a57;  */

void FUN_10a9d1a48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c364d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a9d1a58; end: 10a9d1a77;  */

void FUN_10a9d1a58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c364d0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9d1a78; end: 10a9d1a87;  */

void FUN_10a9d1a78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9d1a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9d1a88; end: 10a9d1a9b;  */

undefined * FUN_10a9d1a88(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  puVar3 = puVar2;
  FUN_10a0051e8();
  if (((ulong)puVar3 & 1) == 0) {
    if ((puVar2[0x78] & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9d1b00);
      (*pcVar1)();
    }
    FUN_10a054dac(puVar2,*param_2,FUN_10a9d1b00,3,*(undefined8 *)(puVar2 + 0x40));
  }
  return puVar2;
}



/* Entry: 10a9d1a9c; end: 10a9d1aff;  */

ulong FUN_10a9d1a9c(ulong param_1,undefined8 *param_2)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9d1b00);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a9d1b00,3,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a9d1b00; end: 10a9d1e03;  */

void FUN_10a9d1b00(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long *plStack_70;
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
  func_0x000109898688(param_2,param_3);
  if (plVar7 == (long *)0x0) {
    puVar8 = &UNK_10f68f52e;
  }
  else {
    plVar15 = param_2;
    FUN_10a053854(param_2,plVar7);
    if ((plVar15 != (long *)0x0) && (___dynamic_cast(), plVar15 != (long *)0x0)) {
      FUN_10a9d1e04(param_5);
      func_0x000109898570(&uStack_90,param_2,param_4);
      func_0x000109898f04(&lStack_a8,param_2,param_4 + 0x10);
      plVar7 = (long *)0x60;
      __Znwm();
      plVar19 = plVar7 + 1;
      *plVar19 = 0;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_110c364d0;
      plVar17 = plVar7 + 3;
      *plVar17 = (long)&PTR_DAT_110c35db8;
      plVar7[4] = 0;
      plVar7[5] = 0;
      plVar7[9] = 0;
      plVar7[8] = 0;
      plVar7[0xb] = 0;
      plVar7[10] = 0;
      plVar7[7] = 0;
      plVar7[6] = 0;
      plStack_70 = plVar17;
      plStack_68 = plVar7;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (plVar7 + 6,&uStack_90);
      FUN_10a105cdc(plVar7 + 9,lStack_a8,lStack_a0,
                    (lStack_a0 - lStack_a8 >> 3) * -0x5555555555555555);
      puVar20 = (undefined8 *)plVar15[7];
      if (puVar20 < (undefined8 *)plVar15[8]) {
        *puVar20 = plVar17;
        puVar20[1] = plVar7;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *plVar19 = *plVar19 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puVar20 = puVar20 + 2;
      }
      else {
        lVar10 = plVar15[6];
        lVar14 = (long)puVar20 - lVar10;
        uVar9 = (lVar14 >> 4) + 1;
        if (uVar9 >> 0x3c != 0) {
          FUN_10a9d1a88();
          goto LAB_10a9d1dac;
        }
        uVar18 = plVar15[8] - lVar10;
        uVar16 = (long)uVar18 >> 3;
        if (uVar16 <= uVar9) {
          uVar16 = uVar9;
        }
        if (0x7fffffffffffffef < uVar18) {
          uVar16 = 0xfffffffffffffff;
        }
        if (uVar16 >> 0x3c != 0) {
          func_0x000109ffded8();
          goto LAB_10a9d1dac;
        }
        lVar12 = uVar16 << 4;
        __Znwm();
        puVar1 = (undefined8 *)(lVar12 + lVar14);
        *puVar1 = plVar17;
        puVar1[1] = plVar7;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *plVar19 = *plVar19 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puVar20 = puVar1 + 2;
        _memcpy(puVar1 + (lVar14 >> 4) * -2,lVar10,lVar14);
        plVar15[6] = (long)(puVar1 + (lVar14 >> 4) * -2);
        plVar15[7] = (long)puVar20;
        plVar15[8] = lVar12 + uVar16 * 0x10;
        if (lVar10 != 0) {
          __ZdlPv(lVar10);
        }
      }
      plVar15[7] = (long)puVar20;
      do {
        lVar10 = *plVar19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar3) {
          *plVar19 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
      plStack_70 = &lStack_a8;
      FUN_10a0426d8(&plStack_70);
      if (uStack_80._7_1_ < '\0') {
        __ZdlPv(uStack_90);
      }
      *param_1 = 0;
      plVar7 = plVar6 + 0x4b;
      lVar10 = plVar6[0x59];
      uVar9 = lVar10 - 1;
      plVar6[0x59] = uVar9;
      if (uVar9 < 8) {
        uVar9 = plVar7[lVar10 + 2];
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
      lVar10 = *plVar7;
      lVar14 = plVar6[0x4c];
      lVar12 = lVar14 - lVar10;
      uVar16 = lVar12 >> 4;
      if (uVar16 < uVar9) {
        uVar18 = uVar9 - uVar16;
        plVar15 = (long *)plVar6[0x4d];
        if ((ulong)((long)plVar15 - lVar14 >> 4) < uVar18) {
          if (uVar9 >> 0x3c == 0) {
            uVar11 = (long)plVar15 - lVar10 >> 3;
            if (uVar11 <= uVar9) {
              uVar11 = uVar9;
            }
            if (0x7fffffffffffffef < (ulong)((long)plVar15 - lVar10)) {
              uVar11 = 0xfffffffffffffff;
            }
            plStack_68 = plVar7;
            if (uVar11 >> 0x3c == 0) {
              lVar5 = uVar11 << 4;
              __Znwm();
              lVar14 = lVar5 + lVar12;
              _bzero(lVar14,uVar18 * 0x10);
              lVar13 = lVar14 + uVar16 * -0x10;
              _memcpy(lVar13,lVar10,lVar12);
              *plVar7 = lVar13;
              plVar6[0x4c] = lVar14 + uVar18 * 0x10;
              plVar6[0x4d] = lVar5 + uVar11 * 0x10;
              lStack_88 = lVar10;
              uStack_80 = lVar10;
              lStack_78 = lVar10;
              plStack_70 = plVar15;
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
        _bzero(lVar14,uVar18 * 0x10);
        plVar6[0x4c] = lVar14 + uVar18 * 0x10;
      }
      else if (uVar9 < uVar16) {
        lVar10 = lVar10 + uVar9 * 0x10;
        while (lVar14 != lVar10) {
          lVar14 = lVar14 + -0x10;
          func_0x00010988c204(lVar14);
        }
        plVar6[0x4c] = lVar10;
      }
code_r0x00010988c138:
      plVar6[0x5a] = uVar9;
      return;
    }
    puVar8 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar8);
LAB_10a9d1dac:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9d1db0);
  (*pcVar4)();
}



/* Entry: 10a9d1e04; end: 10a9d1e27;  */

ulong FUN_10a9d1e04(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if ((int)param_1 == 2) {
    return param_1;
  }
  uVar1 = 2;
  puVar3 = (undefined8 *)0x0;
  FUN_10a052ee0(2,0,param_1);
  uVar2 = uVar1;
  FUN_10a0051e8();
  if ((uVar2 & 1) == 0) {
    FUN_10a0605c4(uVar1,*puVar3,FUN_10a9d1e7c,0);
  }
  return uVar1;
}



/* Entry: 10a9d1e28; end: 10a9d1e7b;  */

ulong FUN_10a9d1e28(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a9d1e7c,0);
  }
  return param_1;
}



/* Entry: 10a9d1e7c; end: 10a9d20d3;  */

void FUN_10a9d1e7c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
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
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar17 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar17 == (long *)0x0) {
    puVar8 = &UNK_10f68f52e;
  }
  else {
    plVar7 = param_2;
    FUN_10a052c2c(param_2,plVar17);
    if ((plVar7 != (long *)0x0) && (___dynamic_cast(), plVar7 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      lVar9 = plVar7[6];
      lVar15 = plVar7[7];
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
            plVar7 = (long *)(lVar11 + 8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar4) {
                *plVar7 = *plVar7 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          ppuStack_68 = &PTR_DAT_110c35e00;
          func_0x000109899de4(&puStack_80,param_2,&stack0xffffffffffffffa0,&ppuStack_68,0,0);
          if (plVar17 != (long *)0x0) {
            plVar7 = plVar17 + 1;
            do {
              lVar13 = *plVar7;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar4) {
                *plVar7 = lVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
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
      ppuVar1 = (undefined **)(plVar6 + 0x4b);
      lVar9 = plVar6[0x59];
      uVar10 = lVar9 - 1;
      plVar6[0x59] = uVar10;
      if (uVar10 < 8) {
        puVar8 = ppuVar1[lVar9 + 2];
        if ((undefined *)plVar6[0x5a] == puVar8) {
          return;
        }
      }
      else {
        puVar8 = *(undefined **)(plVar6[0x57] + -8);
        plVar6[0x57] = (long)(plVar6[0x57] + -8);
        if ((undefined *)plVar6[0x5a] == puVar8) {
          return;
        }
      }
      puVar2 = *ppuVar1;
      puVar12 = (undefined *)plVar6[0x4c];
      lVar9 = (long)puVar12 - (long)puVar2;
      puVar16 = (undefined *)(lVar9 >> 4);
      if (puVar16 < puVar8) {
        uVar10 = (long)puVar8 - (long)puVar16;
        lVar15 = plVar6[0x4d];
        if ((ulong)(lVar15 - (long)puVar12 >> 4) < uVar10) {
          if ((ulong)puVar8 >> 0x3c == 0) {
            puVar12 = (undefined *)(lVar15 - (long)puVar2 >> 3);
            if (puVar12 <= puVar8) {
              puVar12 = puVar8;
            }
            if (0x7fffffffffffffef < (ulong)(lVar15 - (long)puVar2)) {
              puVar12 = (undefined *)0xfffffffffffffff;
            }
            ppuStack_68 = ppuVar1;
            if ((ulong)puVar12 >> 0x3c == 0) {
              lVar13 = (long)puVar12 << 4;
              __Znwm();
              lVar14 = lVar13 + lVar9;
              _bzero(lVar14,uVar10 * 0x10);
              puVar16 = (undefined *)(lVar14 + (long)puVar16 * -0x10);
              _memcpy(puVar16,puVar2,lVar9);
              *ppuVar1 = puVar16;
              plVar6[0x4c] = lVar14 + uVar10 * 0x10;
              plVar6[0x4d] = lVar13 + (long)puVar12 * 0x10;
              puStack_88 = puVar2;
              puStack_80 = puVar2;
              puStack_78 = (undefined8 *)puVar2;
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar5)();
        }
        _bzero(puVar12,uVar10 * 0x10);
        plVar6[0x4c] = (long)(puVar12 + uVar10 * 0x10);
      }
      else if (puVar8 < puVar16) {
        while (puVar12 != puVar2 + (long)puVar8 * 0x10) {
          puVar12 = puVar12 + -0x10;
          func_0x00010988c204(puVar12);
        }
        plVar6[0x4c] = (long)(puVar2 + (long)puVar8 * 0x10);
      }
code_r0x00010988c138:
      plVar6[0x5a] = (long)puVar8;
      return;
    }
    puVar8 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar8);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9d2084);
  (*pcVar5)();
}



/* Entry: 10a9d20d4; end: 10a9d218f;  */

void FUN_10a9d20d4(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f688b6b,0xf);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9d2190);
  (*pcVar4)();
}



/* Entry: 10a9d2190; end: 10a9d228b;  */

undefined1  [16] FUN_10a9d2190(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c35cb8;
  puVar1 = &UNK_10f687d39;
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
    ppuStack_40 = &PTR_DAT_110c35cb8;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c35a88;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a9d228c; end: 10a9d22df;  */

ulong FUN_10a9d228c(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a9d22e0,0);
  }
  return param_1;
}



/* Entry: 10a9d22e0; end: 10a9d23f7;  */

void FUN_10a9d22e0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
      func_0x00010989a420(param_1,param_2,plVar5[0xb],
                          (plVar5[0xc] - plVar5[0xb] >> 3) * -0x5555555555555555);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9d23e4);
  (*pcVar1)();
}



/* Entry: 10a9d23f8; end: 10a9d24b3;  */

void FUN_10a9d23f8(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f688b7b,0x12);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9d24b4);
  (*pcVar4)();
}



/* Entry: 10a9d24b4; end: 10a9d258b;  */

/* WARNING: Removing unreachable block (ram,0x00010a9d254c) */

undefined1  [16] FUN_10a9d24b4(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f688b8e,0x11);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9d258c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a9d258c; end: 10a9d2687;  */

undefined1  [16] FUN_10a9d258c(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c35a70;
  puVar1 = &UNK_10f687d39;
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
    ppuStack_40 = &PTR_DAT_110c35a70;
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



/* Entry: 10a9d2688; end: 10a9d26db;  */

ulong FUN_10a9d2688(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a9d26dc,0);
  }
  return param_1;
}



/* Entry: 10a9d26dc; end: 10a9d2797;  */

void FUN_10a9d26dc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9d2798(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)(param_2 + 3));
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



/* Entry: 10a9d2798; end: 10a9d2853;  */

undefined ** FUN_10a9d2798(undefined **param_1,undefined **param_2)

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
    FUN_10a0605c4(ppuVar1,*param_2,FUN_10a9d2854,0);
  }
  return ppuVar1;
}



/* Entry: 10a9d2854; end: 10a9d2933;  */

void FUN_10a9d2854(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9d2798(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[5];
  plVar1 = (long *)plVar5[4];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x37)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x37);
    plVar1 = plVar5 + 4;
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


