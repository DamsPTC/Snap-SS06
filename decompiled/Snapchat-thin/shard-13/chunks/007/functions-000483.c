/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ab78d18; end: 10ab78d6f;  */

ulong FUN_10ab78d18(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10ab78d70,FUN_10ab78ed8);
  }
  return param_1;
}



/* Entry: 10ab78d70; end: 10ab78ed7;  */

void FUN_10ab78d70(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
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
  plVar17 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar17 == (long *)0x0) {
    puVar7 = &UNK_10f68f52e;
  }
  else {
    plVar6 = param_2;
    FUN_10a052c2c(param_2,plVar17);
    if ((plVar6 != (long *)0x0) && (___dynamic_cast(), plVar6 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      plVar17 = (long *)plVar6[0x1d];
      if (plVar6[0x1d] != 0) {
        plVar6 = (long *)(plVar6[0x1d] + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10a05b924(param_1,param_2,&stack0xffffffffffffffb0);
      if (plVar17 != (long *)0x0) {
        plVar6 = plVar17 + 1;
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
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      plVar17 = plVar5 + 0x4b;
      lVar10 = plVar5[0x59];
      uVar8 = lVar10 - 1;
      plVar5[0x59] = uVar8;
      if (uVar8 < 8) {
        uVar8 = plVar17[lVar10 + 2];
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
      lVar10 = *plVar17;
      lVar13 = plVar5[0x4c];
      lVar11 = lVar13 - lVar10;
      uVar15 = lVar11 >> 4;
      if (uVar15 < uVar8) {
        uVar16 = uVar8 - uVar15;
        lVar14 = plVar5[0x4d];
        if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
          if (uVar8 >> 0x3c == 0) {
            uVar9 = lVar14 - lVar10 >> 3;
            if (uVar9 <= uVar8) {
              uVar9 = uVar8;
            }
            if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
              uVar9 = 0xfffffffffffffff;
            }
            plStack_68 = plVar17;
            if (uVar9 >> 0x3c == 0) {
              lVar4 = uVar9 << 4;
              __Znwm();
              lVar13 = lVar4 + lVar11;
              _bzero(lVar13,uVar16 * 0x10);
              lVar12 = lVar13 + uVar15 * -0x10;
              _memcpy(lVar12,lVar10,lVar11);
              *plVar17 = lVar12;
              plVar5[0x4c] = lVar13 + uVar16 * 0x10;
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
        _bzero(lVar13,uVar16 * 0x10);
        plVar5[0x4c] = lVar13 + uVar16 * 0x10;
      }
      else if (uVar8 < uVar15) {
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
    puVar7 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar7);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ab78ec4);
  (*pcVar3)();
}



/* Entry: 10ab78ed8; end: 10ab79073;  */

/* WARNING: Removing unreachable block (ram,0x00010ab78fe8) */
/* WARNING: Removing unreachable block (ram,0x00010ab78fec) */
/* WARNING: Removing unreachable block (ram,0x00010ab78ff4) */
/* WARNING: Removing unreachable block (ram,0x00010ab78ffc) */
/* WARNING: Removing unreachable block (ram,0x00010ab79000) */

void FUN_10ab78ed8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x000109898688(param_2,param_3);
  if (plVar6 == (long *)0x0) {
    puVar8 = &UNK_10f68f52e;
  }
  else {
    plVar7 = param_2;
    FUN_10a053854(param_2,plVar6);
    if ((plVar7 != (long *)0x0) && (___dynamic_cast(), plVar7 != (long *)0x0)) {
      FUN_10a065cb8(param_5);
      FUN_10a065cdc(&stack0xffffffffffffffa0,param_2,param_4);
      FUN_10a015bec(plVar7 + 0x1c,&stack0xffffffffffffffb0);
      if (in_stack_ffffffffffffffa8 != (long *)0x0) {
        plVar6 = in_stack_ffffffffffffffa8 + 1;
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
          (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
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
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ab79060);
  (*pcVar3)();
}



/* Entry: 10ab79074; end: 10ab7919f;  */

void FUN_10ab79074(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6941a9,0x1a);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab79130);
  (*pcVar4)();
}



/* Entry: 10ab791a0; end: 10ab791bb;  */

void FUN_10ab791a0(void)

{
  return;
}



/* Entry: 10ab791bc; end: 10ab792b7;  */

undefined1  [16] FUN_10ab791bc(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c4efc0;
  puVar1 = &UNK_10f6937f5;
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
    ppuStack_40 = &PTR_DAT_110c4efc0;
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



/* Entry: 10ab792b8; end: 10ab79373;  */

void FUN_10ab792b8(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6941c4,0x13);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab79374);
  (*pcVar4)();
}



/* Entry: 10ab79374; end: 10ab7946f;  */

undefined1  [16] FUN_10ab79374(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c4eb38;
  puVar1 = &UNK_10f6937f5;
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
    ppuStack_40 = &PTR_DAT_110c4eb38;
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



/* Entry: 10ab79470; end: 10ab794c7;  */

ulong FUN_10ab79470(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10ab794c8,FUN_10ab7959c);
  }
  return param_1;
}



/* Entry: 10ab794c8; end: 10ab7959b;  */

void FUN_10ab794c8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lStack_50;
  undefined4 uStack_48;
  
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
  FUN_10ab79668(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = (undefined4)plVar2[0x1d];
  lStack_50 = plVar2[0x1c];
  FUN_10a065390(param_1,param_2,&lStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10ab7959c; end: 10ab79667;  */

void FUN_10ab7959c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010ab796d0(param_2,param_3);
  FUN_10a0655b4(param_5);
  func_0x00010a0655d8(param_2,param_4);
  lVar5 = param_2[1];
  plVar4[0x1c] = *param_2;
  *(int *)(plVar4 + 0x1d) = (int)lVar5;
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



/* Entry: 10ab79668; end: 10ab7978f;  */

undefined ** FUN_10ab79668(undefined **param_1,undefined **param_2)

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
  func_0x000109898688();
  if (ppuVar2 != (undefined **)0x0) {
    FUN_10a053854();
    param_2 = ppuVar2;
    if (ppuVar1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (ppuVar1 != (undefined **)0x0) {
        return ppuVar1;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar1 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar2 = ppuVar1;
  FUN_10a0051e8();
  if (((ulong)ppuVar2 & 1) == 0) {
    FUN_10a052828(ppuVar1,*param_2,FUN_10ab79790,FUN_10ab79864);
  }
  return ppuVar1;
}



/* Entry: 10ab79790; end: 10ab79863;  */

void FUN_10ab79790(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
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
  FUN_10ab79668(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = *(undefined4 *)((long)plVar2 + 0xf4);
  uStack_50 = *(undefined8 *)((long)plVar2 + 0xec);
  FUN_10a065390(param_1,param_2,&uStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10ab79864; end: 10ab7992f;  */

void FUN_10ab79864(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010ab796d0(param_2,param_3);
  FUN_10a0655b4(param_5);
  func_0x00010a0655d8(param_2,param_4);
  lVar5 = param_2[1];
  *(long *)((long)plVar4 + 0xec) = *param_2;
  *(int *)((long)plVar4 + 0xf4) = (int)lVar5;
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



/* Entry: 10ab79930; end: 10ab799eb;  */

void FUN_10ab79930(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f69432d,0x14);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab799ec);
  (*pcVar4)();
}



/* Entry: 10ab799ec; end: 10ab79a6b;  */

void FUN_10ab799ec(float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  lVar1 = param_2;
  FUN_10abd8298();
  if (param_2 + 8 == lVar1) {
    lVar1 = param_2;
    uStack_38 = param_3;
    FUN_10abd8314(param_2,param_3,&UNK_10dd5b8f9,&uStack_38,&uStack_39);
  }
  else if (*(float *)(lVar1 + 0x38) == param_1) {
    return;
  }
  *(float *)(lVar1 + 0x38) = param_1;
  *(undefined1 *)(param_2 + 0x30) = 1;
  return;
}



/* Entry: 10ab79a6c; end: 10ab79b1f;  */

void FUN_10ab79a6c(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)*param_1;
  while (plVar3 != param_1 + 1) {
    lVar2 = param_2;
    FUN_10a1f3e94(param_2,plVar3 + 4);
    if (*(long *)(param_2 + 8) == lVar2) {
      plVar4 = param_1;
      func_0x00010abd8574(param_1,plVar3);
      *(undefined1 *)(param_1 + 6) = 1;
      plVar3 = plVar4;
    }
    else {
      plVar4 = (long *)plVar3[1];
      plVar5 = plVar3;
      if ((long *)plVar3[1] == (long *)0x0) {
        do {
          plVar3 = (long *)plVar5[2];
          bVar1 = (long *)*plVar3 != plVar5;
          plVar5 = plVar3;
        } while (bVar1);
      }
      else {
        do {
          plVar3 = plVar4;
          plVar4 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
    }
  }
  if (param_1[2] == 0) {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}



/* Entry: 10ab79b20; end: 10ab79b87;  */

long * FUN_10ab79b20(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 0x18);
  if (*plVar3 == 0) {
    lVar1 = 0;
    FUN_10a2421c8();
    plVar2 = *(long **)(lVar1 + 0x228);
    (**(code **)(*plVar2 + 0x48))();
    FUN_10a174ef8(plVar3,plVar2);
    (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
              (*(long **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x28),1);
  }
  return plVar3;
}



/* Entry: 10ab79b88; end: 10ab79c97;  */

void FUN_10ab79b88(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  uVar2 = param_1;
  FUN_10a3158cc();
  if ((int)uVar2 != -1) {
    return;
  }
  iVar3 = (int)param_1;
  if (iVar3 < 0x13) {
    if (iVar3 != 1) {
      if (iVar3 != 2) {
        if (iVar3 == 4) {
          return;
        }
        goto LAB_10ab79c08;
      }
      goto LAB_10ab79c34;
    }
LAB_10ab79c3c:
  }
  else {
    switch(iVar3) {
    case 0x13:
    case 0x16:
    case 0x1c:
    case 0x1f:
    case 0x2a:
      break;
    default:
LAB_10ab79c08:
      __ZNSt3__19to_stringEi(auStack_50,param_1);
      FUN_109feb280(auStack_38,&UNK_10f6944aa,auStack_50);
      FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab79c34);
      (*pcVar1)();
    case 0x20:
      break;
    case 0x22:
      break;
    case 0x23:
      goto LAB_10ab79c3c;
    case 0x24:
LAB_10ab79c34:
      break;
    case 0x25:
    case 0x29:
      break;
    case 0x26:
      break;
    case 0x2e:
    }
  }
  return;
}



/* Entry: 10ab79c98; end: 10ab79cff;  */

undefined4 FUN_10ab79c98(int param_1)

{
  if (param_1 - 6U < 10) {
    return *(undefined4 *)(&UNK_10e502bd8 + (ulong)(param_1 - 6U) * 4);
  }
  return 4;
}



/* Entry: 10ab79d00; end: 10ab79db7;  */

undefined8 * FUN_10ab79d00(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110c50768;
  uVar1 = 1;
  FUN_10a303694();
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_110c4f108;
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110c4f158;
  *(undefined4 *)((long)param_1 + 0x34) = param_2;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_10a303694(1);
  _glGenBuffers(1,param_1 + 7);
  return param_1;
}



/* Entry: 10ab79db8; end: 10ab79e5b;  */

undefined8 * FUN_10ab79db8(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_110c4f108;
  param_1[3] = &PTR_DAT_110c4f158;
  lVar1 = 1;
  FUN_10a303694();
  if (*(char *)(lVar1 + 0x270) == '\x01') {
    iVar2 = *(int *)(param_1 + 7);
    if (iVar2 == *(int *)(lVar1 + 0xac)) {
      *(undefined4 *)(lVar1 + 0xac) = 0xffffffff;
      iVar2 = *(int *)(param_1 + 7);
    }
    if (iVar2 == *(int *)(lVar1 + 0xa8)) {
      *(undefined4 *)(lVar1 + 0xa8) = 0xffffffff;
    }
  }
  _glDeleteBuffers(1,param_1 + 7);
  param_1[3] = &PTR_FUN_110baa1f0;
  func_0x00010a045fb4(param_1 + 4);
  *param_1 = &PTR_DAT_110c50768;
  return param_1;
}



/* Entry: 10ab79e5c; end: 10ab79e67;  */

undefined8 * FUN_10ab79e5c(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_110c4f108;
  param_1[3] = &PTR_DAT_110c4f158;
  lVar1 = 1;
  FUN_10a303694();
  if (*(char *)(lVar1 + 0x270) == '\x01') {
    iVar2 = *(int *)(param_1 + 7);
    if (iVar2 == *(int *)(lVar1 + 0xac)) {
      *(undefined4 *)(lVar1 + 0xac) = 0xffffffff;
      iVar2 = *(int *)(param_1 + 7);
    }
    if (iVar2 == *(int *)(lVar1 + 0xa8)) {
      *(undefined4 *)(lVar1 + 0xa8) = 0xffffffff;
    }
  }
  _glDeleteBuffers(1,param_1 + 7);
  param_1[3] = &PTR_FUN_110baa1f0;
  func_0x00010a045fb4(param_1 + 4);
  *param_1 = &PTR_DAT_110c50768;
  return param_1;
}



/* Entry: 10ab79e68; end: 10ab79e93;  */

void FUN_10ab79e68(void)

{
  FUN_10ab79db8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab79e94; end: 10ab79eff;  */

void FUN_10ab79e94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  
  FUN_10a303694(1);
  FUN_10a5bc294();
  FUN_10a303694(1);
  _glBufferSubData(*(undefined4 *)(param_1 + 0x34),param_3,param_4,param_2);
  lVar2 = 1;
  FUN_10a303694();
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 0x8893 && *(char *)(lVar2 + 0x270) != '\0') {
    if (*(int *)(lVar2 + 0xac) == 0) {
      return;
    }
    _glBindBuffer(0x8893,0);
LAB_10a5bc308:
    *(undefined4 *)(lVar2 + 0xac) = 0;
  }
  else {
    if ((iVar1 == 0x8892) && (*(char *)(lVar2 + 0x270) != '\0')) {
      if (*(int *)(lVar2 + 0xa8) == 0) {
        return;
      }
      _glBindBuffer(0x8892,0);
    }
    else {
      _glBindBuffer(iVar1,0);
      if (iVar1 != 0x8892) {
        if (iVar1 != 0x8893) {
          return;
        }
        goto LAB_10a5bc308;
      }
    }
    *(undefined4 *)(lVar2 + 0xa8) = 0;
  }
  return;
}



/* Entry: 10ab79f00; end: 10ab7a033;  */

void FUN_10ab79f00(undefined *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar4;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    uVar3 = param_3;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (uVar3 != 0) break;
    FUN_10a00946c(&UNK_10f6944ba);
LAB_10ab7a010:
    unaff_x19 = &UNK_10f6944e2;
    FUN_10a00946c();
    FUN_10abcabc4((undefined1 *)((long)register0x00000008 + -0x60));
    param_1 = unaff_x19;
    __Unwind_Resume();
    unaff_x30 = FUN_10ab7a034;
    func_0x000104bd46a0();
    param_3 = param_2 & 0xffffffff;
    if (((uint)(byte)param_1[0x48] == (uint)uVar3) && (param_3 <= *(ulong *)(param_1 + 0x40))) {
      return;
    }
    param_2 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_4 = uVar3;
  }
  iVar1 = 0;
  if ((int)param_4 != 2) {
    iVar1 = (int)param_4;
  }
  param_1[0x48] = (char)iVar1;
  *(ulong *)(param_1 + 0x40) = uVar3;
  if (iVar1 == 0) {
    uVar4 = 0x88e4;
  }
  else {
    unaff_x20 = param_2;
    unaff_x21 = uVar3;
    if (iVar1 != 1) goto LAB_10ab7a010;
    uVar4 = 0x88e8;
  }
  FUN_10a303694(1);
  FUN_10a5bc294();
  lVar2 = 1;
  FUN_10a303694();
  iVar1 = *(int *)(param_1 + 0x34);
  if ((uint)uVar3 < *(uint *)(lVar2 + 0x284)) {
    _glBufferData(iVar1,uVar3,param_2,uVar4);
  }
  else {
    *(ulong *)((long)register0x00000008 + -0x60) = uVar3;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x50) = 0;
    FUN_10a321efc(1,(undefined1 *)((long)register0x00000008 + -0x41),0,0);
    _glBufferData(iVar1,uVar3,param_2,uVar4);
    __ZSt19uncaught_exceptionsv();
    FUN_10abcac00(iVar1 == 0,(undefined1 *)((long)register0x00000008 + -0x60),0,0);
  }
  lVar2 = 1;
  FUN_10a303694();
  iVar1 = *(int *)(param_1 + 0x34);
  *(undefined8 *)((long)register0x00000008 + -0x30) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  if (iVar1 == 0x8893 && *(char *)(lVar2 + 0x270) != '\0') {
    if (*(int *)(lVar2 + 0xac) == 0) {
      return;
    }
    _glBindBuffer(0x8893,0);
LAB_10a5bc308:
    *(undefined4 *)(lVar2 + 0xac) = 0;
  }
  else {
    if ((iVar1 == 0x8892) && (*(char *)(lVar2 + 0x270) != '\0')) {
      if (*(int *)(lVar2 + 0xa8) == 0) {
        return;
      }
      _glBindBuffer(0x8892,0);
    }
    else {
      _glBindBuffer(iVar1,0);
      if (iVar1 != 0x8892) {
        if (iVar1 != 0x8893) {
          return;
        }
        goto LAB_10a5bc308;
      }
    }
    *(undefined4 *)(lVar2 + 0xa8) = 0;
  }
  return;
}



/* Entry: 10ab7a034; end: 10ab7a08f;  */

void FUN_10ab7a034(undefined *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  undefined *unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 uVar7;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    uVar4 = (uint)param_2;
    uVar5 = param_2 & 0xffffffff;
    uVar6 = (uint)param_3;
    if (((byte)param_1[0x48] == uVar6) && (uVar5 <= *(ulong *)(param_1 + 0x40))) {
      return;
    }
    param_2 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (uVar5 == 0) {
      FUN_10a00946c(&UNK_10f6944ba);
      param_3 = uVar5;
    }
    else {
      unaff_x20 = 0;
      uVar1 = 0;
      if (uVar6 != 2) {
        uVar1 = uVar6;
      }
      param_1[0x48] = (char)uVar1;
      *(ulong *)(param_1 + 0x40) = uVar5;
      if (uVar1 == 0) {
        uVar7 = 0x88e4;
        goto LAB_10ab79f50;
      }
      param_3 = uVar5;
      unaff_x21 = uVar5;
      if (uVar1 == 1) break;
    }
    unaff_x19 = &UNK_10f6944e2;
    FUN_10a00946c();
    FUN_10abcabc4((undefined1 *)((long)register0x00000008 + -0x60));
    param_1 = unaff_x19;
    __Unwind_Resume();
    unaff_x30 = FUN_10ab7a034;
    func_0x000104bd46a0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
  } while( true );
  uVar7 = 0x88e8;
LAB_10ab79f50:
  FUN_10a303694(1);
  FUN_10a5bc294();
  lVar3 = 1;
  FUN_10a303694();
  iVar2 = *(int *)(param_1 + 0x34);
  if (uVar4 < *(uint *)(lVar3 + 0x284)) {
    _glBufferData(iVar2,uVar5,0,uVar7);
  }
  else {
    *(ulong *)((long)register0x00000008 + -0x60) = uVar5;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x50) = 0;
    FUN_10a321efc(1,(undefined1 *)((long)register0x00000008 + -0x41),0,0);
    _glBufferData(iVar2,uVar5,0,uVar7);
    __ZSt19uncaught_exceptionsv();
    FUN_10abcac00(iVar2 == 0,(undefined1 *)((long)register0x00000008 + -0x60),0,0);
  }
  lVar3 = 1;
  FUN_10a303694();
  iVar2 = *(int *)(param_1 + 0x34);
  *(undefined8 *)((long)register0x00000008 + -0x30) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  if (iVar2 == 0x8893 && *(char *)(lVar3 + 0x270) != '\0') {
    if (*(int *)(lVar3 + 0xac) == 0) {
      return;
    }
    _glBindBuffer(0x8893,0);
LAB_10a5bc308:
    *(undefined4 *)(lVar3 + 0xac) = 0;
  }
  else {
    if ((iVar2 == 0x8892) && (*(char *)(lVar3 + 0x270) != '\0')) {
      if (*(int *)(lVar3 + 0xa8) == 0) {
        return;
      }
      _glBindBuffer(0x8892,0);
    }
    else {
      _glBindBuffer(iVar2,0);
      if (iVar2 != 0x8892) {
        if (iVar2 != 0x8893) {
          return;
        }
        goto LAB_10a5bc308;
      }
    }
    *(undefined4 *)(lVar3 + 0xa8) = 0;
  }
  return;
}



/* Entry: 10ab7a090; end: 10ab7a1e7;  */

void FUN_10ab7a090(undefined *param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 *unaff_x19;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 unaff_x20;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 unaff_x21;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 uVar16;
  code *pcVar17;
  code *unaff_x30;
  
  uVar8 = (undefined4)((ulong)param_5 >> 0x20);
  uVar7 = (uint)param_5;
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_10f6944fa;
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0x13;
    if (param_3 != 0) break;
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x48);
    FUN_10a0edfc4();
    if (*(long *)((long)register0x00000008 + -0x48) != 0) {
      *(long *)((long)register0x00000008 + -0x40) = *(long *)((long)register0x00000008 + -0x48);
      __ZdlPv();
    }
    unaff_x30 = FUN_10ab7a1e8;
    puVar4 = unaff_x19;
    __Unwind_Resume();
    param_1 = puVar4 + -0x18;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((byte)param_1[0x48] == uVar7) {
    uVar12 = param_4 & 0xffffffff;
    uVar11 = param_3 + uVar12;
    if (param_2 == 0) {
      if (uVar11 <= *(ulong *)(param_1 + 0x40)) {
        return;
      }
      param_2 = 0;
      param_3 = uVar11;
      goto LAB_10ab7a160;
    }
    if (*(ulong *)(param_1 + 0x40) < uVar11) {
      if ((int)param_4 != 0) {
        FUN_10ab79f00(param_1,0,uVar11,CONCAT44(uVar8,uVar7));
        FUN_10ab79e94(param_1,param_2,uVar12,param_3);
        *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
        *(undefined1 *)((long)register0x00000008 + -0x49) = 0;
        func_0x000105343774((undefined1 *)((long)register0x00000008 + -0x48),uVar12,
                            (undefined1 *)((long)register0x00000008 + -0x49));
        FUN_10ab79e94(param_1,*(undefined8 *)((long)register0x00000008 + -0x48),0,uVar12);
        if (*(long *)((long)register0x00000008 + -0x48) == 0) {
          return;
        }
        *(long *)((long)register0x00000008 + -0x40) = *(long *)((long)register0x00000008 + -0x48);
        __ZdlPv();
        return;
      }
      goto LAB_10ab7a160;
    }
    *(undefined8 *)((long)register0x00000008 + -0x30) =
         *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    FUN_10a303694(1);
    FUN_10a5bc294();
    FUN_10a303694(1);
    _glBufferSubData(*(undefined4 *)(param_1 + 0x34),uVar12,param_3,param_2);
    lVar2 = 1;
    FUN_10a303694();
    iVar1 = *(int *)(param_1 + 0x34);
    uVar15 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar16 = *(undefined8 *)((long)register0x00000008 + -8);
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0x20);
    uVar9 = *(undefined8 *)((long)register0x00000008 + -0x18);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar13 = *(undefined8 *)((long)register0x00000008 + -0x28);
  }
  else {
LAB_10ab7a160:
    puVar4 = *(undefined1 **)((long)register0x00000008 + -0x10);
    pcVar17 = *(code **)((long)register0x00000008 + -8);
    uVar11 = *(ulong *)((long)register0x00000008 + -0x20);
    puVar3 = *(undefined **)((long)register0x00000008 + -0x18);
    uVar15 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar12 = *(ulong *)((long)register0x00000008 + -0x28);
    uVar6 = CONCAT44(uVar8,uVar7);
    while( true ) {
      uVar5 = param_3;
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x30) = uVar15;
      *(ulong *)((long)register0x00000008 + -0x28) = uVar12;
      *(ulong *)((long)register0x00000008 + -0x20) = uVar11;
      *(undefined **)((long)register0x00000008 + -0x18) = puVar3;
      *(undefined1 **)((long)register0x00000008 + -0x10) = puVar4;
      *(code **)((long)register0x00000008 + -8) = pcVar17;
      puVar4 = (undefined1 *)((long)register0x00000008 + -0x10);
      if (uVar5 != 0) break;
      FUN_10a00946c(&UNK_10f6944ba);
LAB_10ab7a010:
      puVar3 = &UNK_10f6944e2;
      FUN_10a00946c();
      FUN_10abcabc4((undefined1 *)((long)register0x00000008 + -0x60));
      param_1 = puVar3;
      __Unwind_Resume();
      pcVar17 = FUN_10ab7a034;
      func_0x000104bd46a0();
      param_3 = param_2 & 0xffffffff;
      if (((uint)(byte)param_1[0x48] == (uint)uVar5) && (param_3 <= *(ulong *)(param_1 + 0x40))) {
        return;
      }
      param_2 = 0;
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
      uVar6 = uVar5;
    }
    iVar1 = 0;
    if ((int)uVar6 != 2) {
      iVar1 = (int)uVar6;
    }
    param_1[0x48] = (char)iVar1;
    *(ulong *)(param_1 + 0x40) = uVar5;
    if (iVar1 == 0) {
      uVar15 = 0x88e4;
    }
    else {
      uVar11 = param_2;
      uVar12 = uVar5;
      if (iVar1 != 1) goto LAB_10ab7a010;
      uVar15 = 0x88e8;
    }
    FUN_10a303694(1);
    FUN_10a5bc294();
    lVar2 = 1;
    FUN_10a303694();
    iVar1 = *(int *)(param_1 + 0x34);
    if ((uint)uVar5 < *(uint *)(lVar2 + 0x284)) {
      _glBufferData(iVar1,uVar5,param_2,uVar15);
    }
    else {
      *(ulong *)((long)register0x00000008 + -0x60) = uVar5;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x50) = 0;
      FUN_10a321efc(1,(undefined1 *)((long)register0x00000008 + -0x41),0,0);
      _glBufferData(iVar1,uVar5,param_2,uVar15);
      __ZSt19uncaught_exceptionsv();
      FUN_10abcac00(iVar1 == 0,(undefined1 *)((long)register0x00000008 + -0x60),0,0);
    }
    lVar2 = 1;
    FUN_10a303694();
    iVar1 = *(int *)(param_1 + 0x34);
    uVar15 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar16 = *(undefined8 *)((long)register0x00000008 + -8);
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0x20);
    uVar9 = *(undefined8 *)((long)register0x00000008 + -0x18);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar13 = *(undefined8 *)((long)register0x00000008 + -0x28);
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = uVar14;
  *(undefined8 *)((long)register0x00000008 + -0x28) = uVar13;
  *(undefined8 *)((long)register0x00000008 + -0x20) = uVar10;
  *(undefined8 *)((long)register0x00000008 + -0x18) = uVar9;
  *(undefined8 *)((long)register0x00000008 + -0x10) = uVar15;
  *(undefined8 *)((long)register0x00000008 + -8) = uVar16;
  if (iVar1 == 0x8893 && *(char *)(lVar2 + 0x270) != '\0') {
    if (*(int *)(lVar2 + 0xac) == 0) {
      return;
    }
    _glBindBuffer(0x8893,0);
LAB_10a5bc308:
    *(undefined4 *)(lVar2 + 0xac) = 0;
  }
  else {
    if ((iVar1 == 0x8892) && (*(char *)(lVar2 + 0x270) != '\0')) {
      if (*(int *)(lVar2 + 0xa8) == 0) {
        return;
      }
      _glBindBuffer(0x8892,0);
    }
    else {
      _glBindBuffer(iVar1,0);
      if (iVar1 != 0x8892) {
        if (iVar1 != 0x8893) {
          return;
        }
        goto LAB_10a5bc308;
      }
    }
    *(undefined4 *)(lVar2 + 0xa8) = 0;
  }
  return;
}



/* Entry: 10ab7a1e8; end: 10ab7a1ef;  */

void FUN_10ab7a1e8(undefined1 *param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 *unaff_x19;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 unaff_x20;
  undefined8 uVar13;
  undefined8 unaff_x21;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar16;
  undefined1 *unaff_x29;
  undefined8 uVar17;
  code *pcVar18;
  code *unaff_x30;
  
  uVar8 = (undefined4)((ulong)param_5 >> 0x20);
  uVar7 = (uint)param_5;
  while( true ) {
    puVar4 = param_1 + -0x18;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_10f6944fa;
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0x13;
    if (param_3 != 0) break;
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x48);
    FUN_10a0edfc4();
    if (*(long *)((long)register0x00000008 + -0x48) != 0) {
      *(long *)((long)register0x00000008 + -0x40) = *(long *)((long)register0x00000008 + -0x48);
      __ZdlPv();
    }
    unaff_x30 = FUN_10ab7a1e8;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((byte)param_1[0x30] == uVar7) {
    uVar12 = param_4 & 0xffffffff;
    uVar11 = param_3 + uVar12;
    if (param_2 == 0) {
      if (uVar11 <= *(ulong *)(param_1 + 0x28)) {
        return;
      }
      param_2 = 0;
      param_3 = uVar11;
      goto LAB_10ab7a160;
    }
    if (*(ulong *)(param_1 + 0x28) < uVar11) {
      if ((int)param_4 != 0) {
        FUN_10ab79f00(puVar4,0,uVar11,CONCAT44(uVar8,uVar7));
        FUN_10ab79e94(puVar4,param_2,uVar12,param_3);
        *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
        *(undefined1 *)((long)register0x00000008 + -0x49) = 0;
        func_0x000105343774((undefined1 *)((long)register0x00000008 + -0x48),uVar12,
                            (undefined1 *)((long)register0x00000008 + -0x49));
        FUN_10ab79e94(puVar4,*(undefined8 *)((long)register0x00000008 + -0x48),0,uVar12);
        if (*(long *)((long)register0x00000008 + -0x48) == 0) {
          return;
        }
        *(long *)((long)register0x00000008 + -0x40) = *(long *)((long)register0x00000008 + -0x48);
        __ZdlPv();
        return;
      }
      goto LAB_10ab7a160;
    }
    *(undefined8 *)((long)register0x00000008 + -0x30) =
         *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    FUN_10a303694(1);
    FUN_10a5bc294();
    FUN_10a303694(1);
    _glBufferSubData(*(undefined4 *)(param_1 + 0x1c),uVar12,param_3,param_2);
    lVar2 = 1;
    FUN_10a303694();
    iVar1 = *(int *)(param_1 + 0x1c);
    uVar15 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar17 = *(undefined8 *)((long)register0x00000008 + -8);
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0x20);
    uVar9 = *(undefined8 *)((long)register0x00000008 + -0x18);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar13 = *(undefined8 *)((long)register0x00000008 + -0x28);
  }
  else {
LAB_10ab7a160:
    puVar16 = *(undefined1 **)((long)register0x00000008 + -0x10);
    pcVar18 = *(code **)((long)register0x00000008 + -8);
    uVar11 = *(ulong *)((long)register0x00000008 + -0x20);
    puVar3 = *(undefined **)((long)register0x00000008 + -0x18);
    uVar15 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar12 = *(ulong *)((long)register0x00000008 + -0x28);
    uVar6 = CONCAT44(uVar8,uVar7);
    while( true ) {
      uVar5 = param_3;
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x30) = uVar15;
      *(ulong *)((long)register0x00000008 + -0x28) = uVar12;
      *(ulong *)((long)register0x00000008 + -0x20) = uVar11;
      *(undefined **)((long)register0x00000008 + -0x18) = puVar3;
      *(undefined1 **)((long)register0x00000008 + -0x10) = puVar16;
      *(code **)((long)register0x00000008 + -8) = pcVar18;
      puVar16 = (undefined1 *)((long)register0x00000008 + -0x10);
      if (uVar5 != 0) break;
      FUN_10a00946c(&UNK_10f6944ba);
LAB_10ab7a010:
      puVar3 = &UNK_10f6944e2;
      FUN_10a00946c();
      FUN_10abcabc4((undefined1 *)((long)register0x00000008 + -0x60));
      puVar4 = puVar3;
      __Unwind_Resume();
      pcVar18 = FUN_10ab7a034;
      func_0x000104bd46a0();
      param_3 = param_2 & 0xffffffff;
      if (((uint)(byte)puVar4[0x48] == (uint)uVar5) && (param_3 <= *(ulong *)(puVar4 + 0x40))) {
        return;
      }
      param_2 = 0;
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
      uVar6 = uVar5;
    }
    iVar1 = 0;
    if ((int)uVar6 != 2) {
      iVar1 = (int)uVar6;
    }
    puVar4[0x48] = (char)iVar1;
    *(ulong *)(puVar4 + 0x40) = uVar5;
    if (iVar1 == 0) {
      uVar15 = 0x88e4;
    }
    else {
      uVar11 = param_2;
      uVar12 = uVar5;
      if (iVar1 != 1) goto LAB_10ab7a010;
      uVar15 = 0x88e8;
    }
    FUN_10a303694(1);
    FUN_10a5bc294();
    lVar2 = 1;
    FUN_10a303694();
    iVar1 = *(int *)(puVar4 + 0x34);
    if ((uint)uVar5 < *(uint *)(lVar2 + 0x284)) {
      _glBufferData(iVar1,uVar5,param_2,uVar15);
    }
    else {
      *(ulong *)((long)register0x00000008 + -0x60) = uVar5;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x50) = 0;
      FUN_10a321efc(1,(undefined1 *)((long)register0x00000008 + -0x41),0,0);
      _glBufferData(iVar1,uVar5,param_2,uVar15);
      __ZSt19uncaught_exceptionsv();
      FUN_10abcac00(iVar1 == 0,(undefined1 *)((long)register0x00000008 + -0x60),0,0);
    }
    lVar2 = 1;
    FUN_10a303694();
    iVar1 = *(int *)(puVar4 + 0x34);
    uVar15 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar17 = *(undefined8 *)((long)register0x00000008 + -8);
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0x20);
    uVar9 = *(undefined8 *)((long)register0x00000008 + -0x18);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar13 = *(undefined8 *)((long)register0x00000008 + -0x28);
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = uVar14;
  *(undefined8 *)((long)register0x00000008 + -0x28) = uVar13;
  *(undefined8 *)((long)register0x00000008 + -0x20) = uVar10;
  *(undefined8 *)((long)register0x00000008 + -0x18) = uVar9;
  *(undefined8 *)((long)register0x00000008 + -0x10) = uVar15;
  *(undefined8 *)((long)register0x00000008 + -8) = uVar17;
  if (iVar1 == 0x8893 && *(char *)(lVar2 + 0x270) != '\0') {
    if (*(int *)(lVar2 + 0xac) == 0) {
      return;
    }
    _glBindBuffer(0x8893,0);
LAB_10a5bc308:
    *(undefined4 *)(lVar2 + 0xac) = 0;
  }
  else {
    if ((iVar1 == 0x8892) && (*(char *)(lVar2 + 0x270) != '\0')) {
      if (*(int *)(lVar2 + 0xa8) == 0) {
        return;
      }
      _glBindBuffer(0x8892,0);
    }
    else {
      _glBindBuffer(iVar1,0);
      if (iVar1 != 0x8892) {
        if (iVar1 != 0x8893) {
          return;
        }
        goto LAB_10a5bc308;
      }
    }
    *(undefined4 *)(lVar2 + 0xa8) = 0;
  }
  return;
}



/* Entry: 10ab7a1f0; end: 10ab7a25f;  */

void FUN_10ab7a1f0(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10a2421c8();
  *(undefined4 *)(param_1 + 0x58) = param_2;
  func_0x00010a244e04();
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  return;
}



/* Entry: 10ab7a260; end: 10ab7a267;  */

void FUN_10ab7a260(void)

{
  return;
}



/* Entry: 10ab7a268; end: 10ab7a30b;  */

void FUN_10ab7a268(long *param_1,ulong param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined1 *puVar2;
  
  if (param_4 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1,param_1[10] + (param_2 & 0xffffffff),param_4,param_3);
  }
  lVar1 = 0;
  FUN_10a2421c8();
  puVar2 = (undefined1 *)(lVar1 + 0x2c8);
  lVar1 = 0x80;
  do {
    if (*(long *)(puVar2 + -0x18) == param_1[10]) {
      *puVar2 = 0;
      break;
    }
    puVar2 = puVar2 + 0x20;
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  return;
}



/* Entry: 10ab7a30c; end: 10ab7a36b;  */

long * FUN_10ab7a30c(long *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar1 = 0;
  FUN_10a2421c8();
  puVar2 = (undefined1 *)(lVar1 + 0x2c8);
  lVar1 = 0x80;
  do {
    if (*(long *)(puVar2 + -0x18) == *(long *)(lVar3 + 0x50)) {
      *puVar2 = 0;
      break;
    }
    puVar2 = puVar2 + 0x20;
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0);
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined4 *)(lVar3 + 0x58) = 0;
  return param_1;
}



/* Entry: 10ab7a36c; end: 10ab7a373;  */

void FUN_10ab7a36c(long param_1,ulong param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined1 *puVar2;
  
  if (param_4 != 0) {
    (**(code **)(*(long *)(param_1 + -0x18) + 0x18))
              ((long *)(param_1 + -0x18),*(long *)(param_1 + 0x38) + (param_2 & 0xffffffff),param_4,
               param_3);
  }
  lVar1 = 0;
  FUN_10a2421c8();
  puVar2 = (undefined1 *)(lVar1 + 0x2c8);
  lVar1 = 0x80;
  do {
    if (*(long *)(puVar2 + -0x18) == *(long *)(param_1 + 0x38)) {
      *puVar2 = 0;
      break;
    }
    puVar2 = puVar2 + 0x20;
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10ab7a374; end: 10ab7a43b;  */

long FUN_10ab7a374(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x78);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x60);
    __ZdlPv();
  }
  func_0x00010abcb234(param_1 + 0x48);
  FUN_10abcaf70(param_1 + 0x28);
  lStack_28 = param_1 + 8;
  func_0x00010a18b64c(&lStack_28);
  return param_1;
}



/* Entry: 10ab7a43c; end: 10ab7a693;  */

void FUN_10ab7a43c(long *param_1)

{
  long *plStack_28;
  
  *param_1 = (long)&PTR_FUN_110c4f1b0;
  param_1[0x1ac] = (long)&PTR_DAT_110c4f368;
  FUN_10a08dbac(param_1[0x248]);
  (**(code **)(*param_1 + 0xf0))(param_1);
  FUN_10a18b954(param_1 + 0x24a);
  func_0x000107c2826c(param_1 + 0x242);
  func_0x00010a157978(param_1 + 0x23f);
  FUN_10a197580(param_1 + 0x23e,0);
  FUN_10a197558(param_1 + 0x23b,0);
  func_0x00010a0523dc(param_1 + 0x238);
  func_0x00010a0523dc(param_1 + 0x236);
  func_0x00010a0523dc(param_1 + 0x234);
  func_0x00010a0523dc(param_1 + 0x232);
  if (param_1[0x22f] != 0) {
    param_1[0x230] = param_1[0x22f];
    __ZdlPv();
  }
  func_0x00010abcb2a0(param_1 + 0x22b);
  func_0x00010abcb2a0(param_1 + 0x228);
  if (param_1[0x224] != 0) {
    param_1[0x225] = param_1[0x224];
    __ZdlPv();
  }
  if (param_1[0x221] != 0) {
    param_1[0x222] = param_1[0x221];
    __ZdlPv();
  }
  func_0x00010abcb234(param_1 + 0x21e);
  FUN_10abcaf70(param_1 + 0x21a);
  plStack_28 = param_1 + 0x216;
  func_0x00010a18b64c(&plStack_28);
  plStack_28 = param_1 + 0x211;
  func_0x00010a18bab8(&plStack_28);
  plStack_28 = param_1 + 0x20e;
  FUN_10a18bb84(&plStack_28);
  func_0x00010a0eb82c(param_1 + 0x1f6);
  if (param_1[0x1e1] != 0) {
    param_1[0x1e2] = param_1[0x1e1];
    __ZdlPv();
  }
  FUN_10abcad88(param_1 + 0x1dd);
  if (param_1[0x1da] != 0) {
    param_1[0x1db] = param_1[0x1da];
    __ZdlPv();
  }
  if (param_1[0x1d6] != 0) {
    param_1[0x1d7] = param_1[0x1d6];
    __ZdlPv();
  }
  func_0x00010a0616d0(param_1 + 0x1d3);
  FUN_10a1974e4(param_1 + 0x1ce);
  func_0x00010a0523dc(param_1 + 0x1cc);
  FUN_10a0d92c8(param_1 + 0x1ca);
  func_0x00010a0523dc(param_1 + 0x1c8);
  func_0x00010a0523dc(param_1 + 0x1c6);
  if (param_1[0x1c3] != 0) {
    param_1[0x1c4] = param_1[0x1c3];
    __ZdlPv();
  }
  if (param_1[0x1c0] != 0) {
    param_1[0x1c1] = param_1[0x1c0];
    __ZdlPv();
  }
  if (param_1[0x1bd] != 0) {
    param_1[0x1be] = param_1[0x1bd];
    __ZdlPv();
  }
  func_0x00010abd867c(param_1 + 0x1bb,0);
  func_0x00010abd867c(param_1 + 0x1ba,0);
  func_0x00010abd867c(param_1 + 0x1b9,0);
  func_0x00010abd867c(param_1 + 0x1b8,0);
  func_0x00010a0a038c(param_1 + 0x1b5);
  FUN_10a0617bc(param_1 + 0x1b1);
  param_1[0x1ac] = (long)&PTR_DAT_110c50768;
  FUN_10abe9780(param_1);
  return;
}



/* Entry: 10ab7a694; end: 10ab7a69f;  */

void FUN_10ab7a694(long *param_1)

{
  long *plStack_28;
  
  *param_1 = (long)&PTR_FUN_110c4f1b0;
  param_1[0x1ac] = (long)&PTR_DAT_110c4f368;
  FUN_10a08dbac(param_1[0x248]);
  (**(code **)(*param_1 + 0xf0))(param_1);
  FUN_10a18b954(param_1 + 0x24a);
  func_0x000107c2826c(param_1 + 0x242);
  func_0x00010a157978(param_1 + 0x23f);
  FUN_10a197580(param_1 + 0x23e,0);
  FUN_10a197558(param_1 + 0x23b,0);
  func_0x00010a0523dc(param_1 + 0x238);
  func_0x00010a0523dc(param_1 + 0x236);
  func_0x00010a0523dc(param_1 + 0x234);
  func_0x00010a0523dc(param_1 + 0x232);
  if (param_1[0x22f] != 0) {
    param_1[0x230] = param_1[0x22f];
    __ZdlPv();
  }
  func_0x00010abcb2a0(param_1 + 0x22b);
  func_0x00010abcb2a0(param_1 + 0x228);
  if (param_1[0x224] != 0) {
    param_1[0x225] = param_1[0x224];
    __ZdlPv();
  }
  if (param_1[0x221] != 0) {
    param_1[0x222] = param_1[0x221];
    __ZdlPv();
  }
  func_0x00010abcb234(param_1 + 0x21e);
  FUN_10abcaf70(param_1 + 0x21a);
  plStack_28 = param_1 + 0x216;
  func_0x00010a18b64c(&plStack_28);
  plStack_28 = param_1 + 0x211;
  func_0x00010a18bab8(&plStack_28);
  plStack_28 = param_1 + 0x20e;
  FUN_10a18bb84(&plStack_28);
  func_0x00010a0eb82c(param_1 + 0x1f6);
  if (param_1[0x1e1] != 0) {
    param_1[0x1e2] = param_1[0x1e1];
    __ZdlPv();
  }
  FUN_10abcad88(param_1 + 0x1dd);
  if (param_1[0x1da] != 0) {
    param_1[0x1db] = param_1[0x1da];
    __ZdlPv();
  }
  if (param_1[0x1d6] != 0) {
    param_1[0x1d7] = param_1[0x1d6];
    __ZdlPv();
  }
  func_0x00010a0616d0(param_1 + 0x1d3);
  FUN_10a1974e4(param_1 + 0x1ce);
  func_0x00010a0523dc(param_1 + 0x1cc);
  FUN_10a0d92c8(param_1 + 0x1ca);
  func_0x00010a0523dc(param_1 + 0x1c8);
  func_0x00010a0523dc(param_1 + 0x1c6);
  if (param_1[0x1c3] != 0) {
    param_1[0x1c4] = param_1[0x1c3];
    __ZdlPv();
  }
  if (param_1[0x1c0] != 0) {
    param_1[0x1c1] = param_1[0x1c0];
    __ZdlPv();
  }
  if (param_1[0x1bd] != 0) {
    param_1[0x1be] = param_1[0x1bd];
    __ZdlPv();
  }
  func_0x00010abd867c(param_1 + 0x1bb,0);
  func_0x00010abd867c(param_1 + 0x1ba,0);
  func_0x00010abd867c(param_1 + 0x1b9,0);
  func_0x00010abd867c(param_1 + 0x1b8,0);
  func_0x00010a0a038c(param_1 + 0x1b5);
  FUN_10a0617bc(param_1 + 0x1b1);
  param_1[0x1ac] = (long)&PTR_DAT_110c50768;
  FUN_10abe9780(param_1);
  return;
}



/* Entry: 10ab7a6a0; end: 10ab7a6cb;  */

void FUN_10ab7a6a0(void)

{
  FUN_10ab7a43c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab7a6cc; end: 10ab7a6d7;  */

void FUN_10ab7a6cc(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  plVar3 = *(long **)(param_1 + 0x1258);
  for (plVar8 = *(long **)(param_1 + 0x1250); plVar8 != plVar3; plVar8 = plVar8 + 2) {
    plVar6 = (long *)plVar8[1];
    if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)
       ) {
      if (*plVar8 != 0) {
        *(undefined1 *)(*plVar8 + 0x18) = 0;
      }
      plVar1 = plVar6 + 1;
      do {
        lVar7 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  plVar3 = *(long **)(param_1 + 0x1270);
  for (plVar8 = *(long **)(param_1 + 0x1268); plVar8 != plVar3; plVar8 = plVar8 + 2) {
    plVar6 = (long *)plVar8[1];
    if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)
       ) {
      if (*plVar8 != 0) {
        *(undefined1 *)(*plVar8 + 0x18) = 0;
      }
      plVar1 = plVar6 + 1;
      do {
        lVar7 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  FUN_10a18b79c((undefined8 *)(param_1 + 0x1250));
  FUN_10a18b714((undefined8 *)(param_1 + 0x1268));
  if (*(ulong *)(param_1 + 0x12b0) != 0) {
    FUN_10ae6cbe8(param_1 + 0x12a0,&UNK_110c53608,*(ulong *)(param_1 + 0x12b0) < 0x80);
  }
  if (*(ulong *)(param_1 + 0x12f0) != 0) {
    plVar8 = (long *)(param_1 + 0x12e0);
    *(undefined8 *)(param_1 + 0x12f8) = 0;
    if (*(ulong *)(param_1 + 0x12f0) < 0x80) {
      lVar9 = *(long *)(param_1 + 0x12f0);
      lVar7 = *plVar8;
      _memset(lVar7,0x80,lVar9 + 8);
      *(undefined1 *)(lVar7 + lVar9) = 0xff;
      uVar2 = *(ulong *)(param_1 + 0x12f0);
      lVar7 = 6;
      if (uVar2 != 7) {
        lVar7 = uVar2 - (uVar2 >> 3);
      }
      *(long *)(*plVar8 + -8) = lVar7 - *(long *)(param_1 + 0x12f8);
    }
    else {
      (*(code *)&DAT_104c32e5c)(plVar8);
      *(undefined8 *)(param_1 + 0x12e8) = 0;
      *(undefined8 *)(param_1 + 0x12f0) = 0;
      *plVar8 = (long)&UNK_10e52b660;
    }
    return;
  }
  return;
}



/* Entry: 10ab7a6d8; end: 10ab7a82f;  */

void FUN_10ab7a6d8(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  plVar3 = (long *)param_1[1];
  for (plVar8 = (long *)*param_1; plVar8 != plVar3; plVar8 = plVar8 + 2) {
    plVar6 = (long *)plVar8[1];
    if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)
       ) {
      if (*plVar8 != 0) {
        *(undefined1 *)(*plVar8 + 0x18) = 0;
      }
      plVar1 = plVar6 + 1;
      do {
        lVar7 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  plVar3 = (long *)param_1[4];
  for (plVar8 = (long *)param_1[3]; plVar8 != plVar3; plVar8 = plVar8 + 2) {
    plVar6 = (long *)plVar8[1];
    if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)
       ) {
      if (*plVar8 != 0) {
        *(undefined1 *)(*plVar8 + 0x18) = 0;
      }
      plVar1 = plVar6 + 1;
      do {
        lVar7 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  FUN_10a18b79c(param_1);
  FUN_10a18b714(param_1 + 3);
  if (param_1[0xc] != 0) {
    FUN_10ae6cbe8(param_1 + 10,&UNK_110c53608,(ulong)param_1[0xc] < 0x80);
  }
  if (param_1[0x14] != 0) {
    plVar8 = param_1 + 0x12;
    param_1[0x15] = 0;
    if ((ulong)param_1[0x14] < 0x80) {
      lVar9 = param_1[0x14];
      lVar7 = *plVar8;
      _memset(lVar7,0x80,lVar9 + 8);
      *(undefined1 *)(lVar7 + lVar9) = 0xff;
      uVar2 = param_1[0x14];
      lVar7 = 6;
      if (uVar2 != 7) {
        lVar7 = uVar2 - (uVar2 >> 3);
      }
      *(long *)(*plVar8 + -8) = lVar7 - param_1[0x15];
    }
    else {
      (*(code *)&DAT_104c32e5c)(plVar8);
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      *plVar8 = (long)&UNK_10e52b660;
    }
    return;
  }
  return;
}



/* Entry: 10ab7a830; end: 10ab7a85f;  */

bool FUN_10ab7a830(long param_1)

{
  if (*(int *)(*(long *)(param_1 + 0xd68) + 0x1f0) < 3000) {
    return false;
  }
  return 1 < iRam00000001132ffd98;
}



/* Entry: 10ab7a860; end: 10ab7a8e7;  */

void FUN_10ab7a860(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  int iVar3;
  
  FUN_10abf0f30();
  FUN_10ab7a8e8(param_1 + 0xea8);
  iVar3 = 0;
  lVar2 = *(long *)(param_1 + 0xd68);
  do {
    func_0x00010a5bc348(lVar2,iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x10);
  ppuVar1 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  func_0x00010a5bc890(*ppuVar1);
  *(undefined8 *)(lVar2 + 0x27c) = 0;
  *(undefined2 *)(param_1 + 0x9c0) = 0xffff;
  return;
}



/* Entry: 10ab7a8e8; end: 10ab7aa3f;  */

void FUN_10ab7a8e8(undefined2 *param_1)

{
  undefined8 uStack_a8;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0xffffffffffffffff;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  func_0x00010928bd7c(param_1 + 0x40,&uStack_a8);
  *(undefined8 *)(param_1 + 0x54) = uStack_80;
  func_0x000109261f4c(param_1 + 0x58,&uStack_78);
  *(undefined8 *)(param_1 + 0x6c) = uStack_50;
  func_0x000109261f4c(param_1 + 0x70,&uStack_48);
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x14);
  *param_1 = 0x101;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_1 + 0x30);
  return;
}



/* Entry: 10ab7aa40; end: 10ab7acdf;  */

void FUN_10ab7aa40(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xd68);
  FUN_10a5bbed8(lVar1,0xb44);
  FUN_10a5bbed8(lVar1,0xb71);
  FUN_10a5bbed8(lVar1,0xb90);
  FUN_10a5bbed8(lVar1,0xbe2);
  FUN_10a5bbed8(lVar1,0x809e);
  if ((*(char *)(lVar1 + 0x270) == '\x01') && (*(char *)(lVar1 + 0x1dd) == '\x01')) {
LAB_10ab7aac8:
    if (*(int *)(lVar1 + 0xb8) != 0x203) goto LAB_10ab7aad4;
  }
  else {
    _glDepthMask(1);
    *(undefined1 *)(lVar1 + 0x1dd) = 1;
    if (*(char *)(lVar1 + 0x270) == '\x01') goto LAB_10ab7aac8;
LAB_10ab7aad4:
    _glDepthFunc(0x203);
    *(undefined4 *)(lVar1 + 0xb8) = 0x203;
  }
  func_0x00010a5bbf2c(lVar1,0x408,0xff);
  FUN_10a5bbfec(lVar1,0x408,0x1e00,0x1e00,0x1e00);
  func_0x00010a5bc0f0(lVar1,0x408,0x207,0,0xff);
  func_0x00010a5bc1f4(lVar1,0xf);
  if ((*(char *)(lVar1 + 0x270) == '\x01') && (*(int *)(lVar1 + 0xb4) == 0x405)) {
LAB_10ab7ab64:
    if (*(float *)(lVar1 + 0x18c) == 1.0) goto LAB_10ab7ab84;
  }
  else {
    _glCullFace(0x405);
    *(undefined4 *)(lVar1 + 0xb4) = 0x405;
    if (*(char *)(lVar1 + 0x270) == '\x01') goto LAB_10ab7ab64;
  }
  _glLineWidth(0x3f800000);
  *(undefined4 *)(lVar1 + 0x18c) = 0x3f800000;
LAB_10ab7ab84:
  _glFrontFace(0x901);
  _glSampleCoverage(0x3f800000,0);
  FUN_10a5bc294(lVar1,0x8892,0);
  FUN_10a5bc294(lVar1,0x8893,0);
  if ((*(char *)(lVar1 + 0x270) != '\x01') || (*(int *)(lVar1 + 0xa4) != 0)) {
    _glUseProgram(0);
    *(undefined4 *)(lVar1 + 0xa4) = 0;
    *(int *)(lVar1 + 0x280) = *(int *)(lVar1 + 0x280) + 1;
  }
  if ((*(byte *)(param_1 + 0xd9c) & 1) == 0) {
    _glBindFramebuffer(0x8d40,0);
    *(undefined4 *)(lVar1 + 0xa0) = 0;
  }
  return;
}



/* Entry: 10ab7ace0; end: 10ab7ace7;  */

void FUN_10ab7ace0(long param_1)

{
  undefined8 uStack_a8;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0xffffffffffffffff;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  *(undefined4 *)(param_1 + 0xf20) = 0;
  func_0x00010928bd7c(param_1 + 0xf28,&uStack_a8);
  *(undefined8 *)(param_1 + 0xf50) = uStack_80;
  func_0x000109261f4c(param_1 + 0xf58,&uStack_78);
  *(undefined8 *)(param_1 + 0xf80) = uStack_50;
  func_0x000109261f4c(param_1 + 0xf88,&uStack_48);
  *(undefined8 *)(param_1 + 0xf00) = 0;
  *(undefined8 *)(param_1 + 0xeb8) = *(undefined8 *)(param_1 + 0xeb0);
  *(undefined8 *)(param_1 + 0xed8) = *(undefined8 *)(param_1 + 0xed0);
  *(undefined2 *)(param_1 + 0xea8) = 0x101;
  *(undefined8 *)(param_1 + 0xf10) = *(undefined8 *)(param_1 + 0xf08);
  return;
}



/* Entry: 10ab7ace8; end: 10ab7ae1f;  */

void FUN_10ab7ace8(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  FUN_10ab7a8e8(param_1 + 0xea8);
  lVar4 = *(long *)(param_1 + 0x9b8);
  lVar5 = *(long *)(lVar4 + 0x18);
  if (lVar5 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0xd68);
    plVar9 = (long *)(lVar4 + 0x20);
    do {
      puVar2 = (undefined8 *)*plVar9;
      if (puVar2 != (undefined8 *)0x0) {
        FUN_10abf1b04();
        (**(code **)(*(long *)*puVar2 + 0xb0))();
        puVar2 = (undefined8 *)*plVar9;
        func_0x00010abf88c0();
        plVar1 = (long *)puVar2[1];
        for (plVar10 = (long *)*puVar2; plVar10 != plVar1; plVar10 = plVar10 + 1) {
          plVar3 = (long *)*plVar10;
          if ((plVar3 != (long *)0x0) &&
             (___dynamic_cast(plVar3,&PTR_DAT_110ba0e18,&PTR_DAT_110c545f0,0), plVar3 != (long *)0x0
             )) {
            FUN_10a303840(uVar7,*(undefined4 *)((long)plVar3 + 0x7c),
                          *(undefined4 *)((long)plVar3 + 0x5c),0);
            (**(code **)(*plVar3 + 200))(plVar3,0x2801,0x2600);
            (**(code **)(*plVar3 + 200))(plVar3,0x2800,0x2600);
            FUN_10a303840(uVar7,*(undefined4 *)((long)plVar3 + 0x7c),0,0);
          }
        }
      }
      plVar9 = plVar9 + 2;
    } while (plVar9 != (long *)(lVar4 + lVar5 * 0x10 + 0x20));
  }
  lVar4 = *(long *)(param_1 + 0x9b8);
  if (*(long *)(lVar4 + 0x18) != 0) {
    uVar6 = 0;
    lVar5 = 0x20;
    do {
      lVar8 = *(long *)(lVar4 + lVar5);
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x2b8) == '\x01')) {
        FUN_10a18cbd8(lVar8 + 0x2a8);
        *(undefined1 *)(lVar8 + 0x2b8) = 0;
        lVar4 = *(long *)(param_1 + 0x9b8);
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (uVar6 < *(ulong *)(lVar4 + 0x18));
  }
  return;
}



/* Entry: 10ab7ae20; end: 10ab7ae23;  */

void FUN_10ab7ae20(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 unaff_w21;
  long unaff_x22;
  long lStack_50;
  long lStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  lVar1 = param_1 + 0x20;
  FUN_10a01f6d4();
  FUN_10a01f6d4(param_1 + 0x20,param_2);
  plVar2 = *(long **)(param_1 + 0x848);
  if ((int)plVar2[4] != 0) {
    if ((*plVar2 != 0) && ((int)plVar2[5] == 0)) {
      *(undefined4 *)(plVar2 + 5) = 1;
      plVar2[0x29] = plVar2[0x28];
      lVar3 = plVar2[1];
      if ((lVar3 != 0) &&
         (FUN_10ad5dad4(lVar3,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18)),
         lStack_50 = lVar3, lVar3 != 0)) {
        FUN_10ad60104(plVar2 + 0x28,&lStack_50);
      }
      FUN_10ac04884(&lStack_50,&UNK_10f6a880e);
      *(undefined4 *)(plVar2 + 0xe) = (undefined4)lStack_50;
      plVar2[0xf] = lStack_48;
      *(undefined4 *)(plVar2 + 0x10) = uStack_40;
      plVar2[0x12] = unaff_x22;
      plVar2[0x11] = lStack_38;
      *(undefined1 *)(plVar2 + 0x13) = unaff_w21;
    }
  }
  return;
}



/* Entry: 10ab7ae24; end: 10ab7ae53;  */

void FUN_10ab7ae24(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  long *plVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined1 uVar15;
  undefined *puVar16;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined4 uVar19;
  undefined *puVar20;
  undefined8 *puVar21;
  ushort uVar23;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 uStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 *puVar22;
  
  FUN_10ab7ae54(param_1,1);
  plVar10 = *(long **)(param_1 + 0x848);
  if ((((int)plVar10[4] == 0) || (*plVar10 == 0)) || ((int)plVar10[5] != 1)) {
    return;
  }
  *(undefined4 *)(plVar10 + 5) = 0;
  ppuVar13 = (undefined **)(plVar10 + 0xe);
  ppuVar12 = (undefined **)(plVar10 + 0x28);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar14 = ppuVar12;
  if (((*(byte *)((long)plVar10 + 0x71) & 1) == 0) &&
     (*(undefined1 *)((long)plVar10 + 0x71) = 1, unaff_x19 = ppuVar13, *(char *)ppuVar13 == '\x01'))
  {
    *(undefined1 *)ppuVar13 = 0;
    puVar16 = PTR___tlv_bootstrap_11340d750;
    ppuVar17 = &PTR___tlv_bootstrap_11340d750;
    ppuVar11 = ppuVar17;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar13 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar11 & 1) == 0) {
      ppuVar14 = ppuVar13;
      (*(code *)PTR___tlv_bootstrap_11340d738)();
      __tlv_atexit(0x10a132a8c,ppuVar14,0x100000000);
      (*(code *)puVar16)();
      *(undefined1 *)ppuVar17 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    unaff_x20 = (undefined **)ppuVar13[2];
    if (unaff_x20 != (undefined **)0x0) {
      if (plVar10[0x11] != 0) {
        puVar16 = unaff_x20[1];
        if ((((puVar16[0x42] | puVar16[0x43]) & 1) != 0) || (puVar16[0x3f] == '\x01')) {
          uVar8 = cntfrq_el0;
          InstructionSynchronizationBarrier();
          puVar18 = (undefined *)cntvct_el0;
          if (uVar8 != 1000000000) {
            uVar6 = 0;
            if (uVar8 != 0) {
              uVar6 = (ulong)puVar18 / uVar8;
            }
            uVar7 = 0;
            if (uVar8 != 0) {
              uVar7 = (((long)puVar18 - uVar6 * uVar8) * 1000000000) / uVar8;
            }
            puVar18 = (undefined *)(uVar7 + uVar6 * 1000000000);
          }
          if (((puVar16[0x42] | puVar16[0x43]) & 1) != 0) {
            uVar19 = (undefined4)plVar10[0x10];
            uVar23 = *(ushort *)((long)plVar10 + 0x72);
            puVar16 = (undefined *)plVar10[0xf];
            puVar21 = (undefined8 *)*ppuVar12;
            puVar2 = (undefined8 *)plVar10[0x29];
            if (puVar2 == puVar21) {
              ppuVar13 = unaff_x20;
              FUN_10a1333cc();
              if (ppuVar13 != (undefined **)0x0) {
                ppuVar17 = (undefined **)0x0;
                ppuVar12 = ppuVar13;
                goto LAB_10ad5e3a0;
              }
            }
            else {
              uStack_80 = (uint)uVar23;
              puVar20 = unaff_x20[2];
              ppuVar13 = &puStack_78;
              uStack_7c = uVar19;
              puStack_70 = puVar20;
              FUN_10ad605e8();
              *ppuVar13 = (undefined *)0x0;
              ppuVar13[1] = (undefined *)0x0;
              ppuVar13[2] = (undefined *)0x0;
              ppuVar13[4] = puVar20;
              func_0x00010ad60458();
              iVar3 = *(int *)((long)unaff_x20 + 0x34);
              do {
                puVar22 = puVar21 + 1;
                puStack_78 = (undefined *)*puVar21;
                ppuVar14 = &puStack_78;
                if (iVar3 != (int)((ulong)puStack_78 >> 0x20)) {
                  ppuVar14 = (undefined **)&UNK_10e510508;
                }
                func_0x00010ad60504(ppuVar13);
                puVar21 = puVar22;
              } while (puVar22 != puVar2);
              ppuVar12 = unaff_x20;
              FUN_10a1333cc();
              if (ppuVar12 == (undefined **)0x0) {
                puVar18 = unaff_x20[2];
                puVar16 = *ppuVar13;
                if (puVar16 != (undefined *)0x0) {
                  ppuVar13[1] = puVar16;
                  puVar20 = ppuVar13[2];
                  plVar1 = (long *)(ppuVar13[4] + 8);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar5) {
                      *plVar1 = *plVar1 - ((long)puVar20 - (long)puVar16);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  __ZdlPv();
                }
                plVar1 = (long *)(puVar18 + 8);
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar5) {
                    *plVar1 = *plVar1 + -0x28;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                __ZdlPv();
              }
              else {
                uVar23 = (ushort)uStack_80;
                ppuVar17 = ppuVar13;
                uVar19 = uStack_7c;
LAB_10ad5e3a0:
                ppuVar13 = ppuVar12;
                uVar15 = 6;
                if (ppuVar17 != (undefined **)0x0) {
                  uVar15 = 0xe;
                }
                *ppuVar13 = puVar16;
                ppuVar13[1] = (undefined *)ppuVar17;
                ppuVar13[2] = puVar18;
                *(undefined4 *)(ppuVar13 + 3) = uVar19;
                *(ushort *)((long)ppuVar13 + 0x1c) = uVar23;
                *(undefined1 *)((long)ppuVar13 + 0x1e) = uVar15;
                if (((ulong)unaff_x20[0x38] & 1) == 0) {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(1,0x10ad5e50c);
                  (*pcVar9)();
                }
                unaff_x20[0x18] = unaff_x20[0x18] + 1;
              }
            }
          }
        }
      }
      if (((unaff_x20[1][0x41] == '\x01') && ((char)plVar10[0x13] == '\x01')) &&
         (ppuVar13 = (undefined **)unaff_x20[0xb], ppuVar13 != (undefined **)0x0)) {
        ppuVar14 = (undefined **)plVar10[0x12];
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010ad5e494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*ppuVar13 + 0x30))();
          return;
        }
        goto LAB_10ad5e50c;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
LAB_10ad5e50c:
  ___stack_chk_fail();
  __Unwind_Resume();
  if (*(int *)(ppuVar13 + 4) != 0) {
    pcStack_88 = FUN_10ad5e514;
    if ((*ppuVar13 != (undefined *)0x0) && (*(int *)((long)ppuVar13 + 0x2c) == 0)) {
      *(undefined4 *)((long)ppuVar13 + 0x2c) = 1;
      ppuStack_a0 = unaff_x20;
      ppuStack_98 = unaff_x19;
      puStack_90 = &stack0xfffffffffffffff0;
      FUN_10ad61728(ppuVar13[2]);
      ppuVar13[0x2c] = ppuVar13[0x2b];
      puVar16 = ppuVar13[1];
      if ((puVar16 != (undefined *)0x0) &&
         (FUN_10ad5dad4(puVar16,ppuVar14[3],ppuVar14[4]), uStack_c0 = puVar16,
         puVar16 != (undefined *)0x0)) {
        FUN_10ad60104(ppuVar13 + 0x2b,&uStack_c0);
      }
      FUN_10ad60210(&uStack_c0);
      *(undefined4 *)(ppuVar13 + 0x14) = (undefined4)uStack_c0;
      *(undefined4 *)((long)ppuVar13 + 0xa4) = uStack_c0._4_4_;
      ppuVar13[0x16] = puStack_b0;
      ppuVar13[0x15] = puStack_b8;
      *(undefined1 *)(ppuVar13 + 0x17) = uStack_a8;
    }
  }
  return;
}



/* Entry: 10ab7ae54; end: 10ab7b6cb;  */

void FUN_10ab7ae54(long *param_1,int param_2)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  long lStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  code *pcStack_88;
  code *pcStack_80;
  long *plStack_78;
  undefined8 *puStack_70;
  
  plVar8 = param_1;
  __ZSt19uncaught_exceptionsv();
  if ((int)plVar8 == 0) {
    if (*(char *)((long)param_1 + 0x11e9) == '\x01') {
      lVar10 = param_1[0x22a];
      while ((((lVar10 != 0 && (lVar10 = param_1[0x229], (*(byte *)(lVar10 + 0x30) & 1) == 0)) &&
              (lVar11 = *(long *)(*(long *)(*(long *)(lVar10 + 0x18) + 0x50) + 0x410), lVar11 != 0))
             && (((uint)*(undefined8 *)(lVar11 + 0x10) >> 1 & 1) != 0))) {
        if (param_1[0x22a] == 0) goto LAB_10ab7b634;
        *(undefined1 *)(param_1[0x229] + 0x30) = 1;
        *(int *)(param_1 + 0x22e) = (int)param_1[0x22e] + 1;
        if (*(char *)((long)param_1 + 0x11eb) == '\x01') {
          FUN_10ab83498(&plStack_a0,param_1,*(undefined8 *)(lVar10 + 0x10),
                        *(undefined8 *)(lVar10 + 0x18));
          *(undefined4 *)(lVar10 + 0x20) = plStack_a0._0_4_;
          plVar8 = *(long **)(lVar10 + 0x28);
          if (plVar8 != (long *)0x0) {
            puVar1 = (ulong *)(plVar8 + 1);
            do {
              uVar12 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar12 - 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((uVar12 & 0x1fffffffc) == 4) {
              do {
                uVar12 = *puVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = uVar12 - 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (uVar12 - 1 == 0) {
                (**(code **)(*plVar8 + 8))();
              }
            }
          }
          *(long **)(lVar10 + 0x28) = plStack_98;
        }
        FUN_10ab83788(param_1,*(undefined8 *)(lVar10 + 0x10),*(undefined8 *)(lVar10 + 0x18),
                      lVar10 + 0x20);
        plVar8 = param_1 + 0x228;
        FUN_10abcb888();
        lVar10 = param_1[0x22a];
      }
    }
    if ((ulong)*(uint *)((long)param_1 + 0x11e4) <= (ulong)param_1[0x22a]) {
      param_2 = 1;
    }
    if (param_1[0x22a] != 0 && param_2 != 0) {
      plVar3 = param_1 + 0x228;
      if (*(byte *)((long)param_1 + 0x11ea) < 5 &&
          (1 << (ulong)(*(byte *)((long)param_1 + 0x11ea) & 0x1f) & 0x16U) != 0) {
        plVar8 = (long *)param_1[0x23b];
        FUN_10ab86810();
      }
      if (*(char *)((long)param_1 + 0x11eb) == '\x01') {
        uVar13 = param_1[0x22a];
        uVar12 = uVar13 >> 2;
        if (uVar12 < 2) {
          uVar12 = 1;
        }
        plVar16 = (long *)param_1[0x229];
        uVar20 = 0;
        uVar14 = uVar20;
        if (plVar3 != plVar16) {
          plVar19 = plVar3;
          do {
            uVar14 = uVar13 - uVar12;
            if (uVar20 == uVar13 - uVar12) break;
            plVar15 = (long *)*plVar19;
            if ((*(byte *)(plVar15 + 6) & 1) == 0) {
              FUN_109d1a80c();
              puVar17 = (undefined8 *)*plVar8;
              lVar11 = plVar15[3];
              pcVar7 = (code *)plVar15[2];
              lVar10 = plVar15[4];
              plVar16 = (long *)plVar15[5];
              if (plVar16 != (long *)0x0) {
                plVar8 = plVar16 + 1;
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                  if (bVar5) {
                    *plVar8 = *plVar8 + 4;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              lVar6 = plVar15[6];
              plVar8 = (long *)puVar17[2];
              plStack_98 = (long *)0x0;
              puStack_90 = (undefined8 *)0x0;
              if (plVar8 == (long *)0x0) {
                if (plVar16 != (long *)0x0) {
                  plVar8 = plVar16 + 1;
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                    if (bVar5) {
                      *plVar8 = *plVar8 + 4;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                puVar9 = (undefined8 *)0xe8;
                pcStack_80 = pcVar7;
                plStack_78 = (long *)lVar11;
                __Znwm();
                puVar9[2] = 0;
                puVar9[1] = 0x200000006;
                *(undefined2 *)(puVar9 + 3) = 4;
                puVar9[5] = 0;
                puVar9[4] = 0;
                puVar9[7] = 0;
                puVar9[6] = 0;
                puVar9[9] = 0;
                puVar9[8] = 0;
                puVar9[0xb] = 0;
                puVar9[10] = 0;
                puVar9[0xd] = 0;
                puVar9[0xc] = 0;
                puVar9[0xf] = 0;
                puVar9[0xe] = 0;
                puVar9[0x10] = 0;
                puVar9[0x11] = puVar9 + 3;
                puVar9[0x12] = 0;
                *(undefined1 *)(puVar9 + 0x13) = 0;
                *(undefined1 *)((long)puVar9 + 0x9c) = 0;
                *puVar9 = &PTR_DAT_110c507c0;
                plVar8 = puVar9 + 0x14;
                *plVar8 = (long)param_1;
                puVar9[0x16] = plStack_78;
                puVar9[0x15] = pcStack_80;
                *(int *)(puVar9 + 0x17) = (int)lVar10;
                puVar9[0x18] = plVar16;
                if (plVar16 != (long *)0x0) {
                  plVar18 = plVar16 + 1;
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                    if (bVar5) {
                      *plVar18 = *plVar18 + 4;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                *(char *)(puVar9 + 0x19) = (char)lVar6;
                *(undefined1 *)(puVar9 + 0x1b) = 1;
                puVar9[0x1c] = 0;
                if (plStack_98 != (long *)0x0) {
                  puVar1 = (ulong *)(plStack_98 + 1);
                  do {
                    uVar14 = *puVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *puVar1 = uVar14 - 4;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if ((uVar14 & 0x1fffffffc) == 4) {
                    do {
                      uVar14 = *puVar1;
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar5) {
                        *puVar1 = uVar14 - 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (uVar14 - 1 == 0) {
                      (**(code **)(*plStack_98 + 8))();
                    }
                  }
                }
                plStack_98 = puVar9;
                if (puStack_90 != (undefined8 *)0x0) {
                  func_0x0001092b4274(&puStack_90);
                }
                plStack_a0 = plVar8;
                puStack_90 = puVar9;
                if (plVar16 != (long *)0x0) {
                  puVar1 = (ulong *)(plVar16 + 1);
                  do {
                    uVar14 = *puVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *puVar1 = uVar14 - 4;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if ((uVar14 & 0x1fffffffc) == 4) {
                    do {
                      uVar14 = *puVar1;
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar5) {
                        *puVar1 = uVar14 - 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (uVar14 - 1 == 0) {
                      (**(code **)(*plVar16 + 8))(plVar16);
                    }
                  }
                }
                pcStack_88 = FUN_10abcb9a0;
              }
              else {
                lStack_a8 = 0;
                (**(code **)(*plVar8 + 0x28))(plVar8,0,&lStack_a8);
                if (lStack_a8 != 0) {
                  func_0x0001092af97c(&lStack_a8);
                  goto LAB_10ab7b634;
                }
                if (plVar16 != (long *)0x0) {
                  plVar18 = plVar16 + 1;
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                    if (bVar5) {
                      *plVar18 = *plVar18 + 4;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                puVar9 = (undefined8 *)0xf0;
                pcStack_80 = pcVar7;
                plStack_78 = (long *)lVar11;
                __Znwm();
                puVar9[2] = 0;
                puVar9[1] = 0x200000006;
                *(undefined2 *)(puVar9 + 3) = 4;
                puVar9[5] = 0;
                puVar9[4] = 0;
                puVar9[7] = 0;
                puVar9[6] = 0;
                puVar9[9] = 0;
                puVar9[8] = 0;
                puVar9[0xb] = 0;
                puVar9[10] = 0;
                puVar9[0xd] = 0;
                puVar9[0xc] = 0;
                puVar9[0xf] = 0;
                puVar9[0xe] = 0;
                puVar9[0x10] = 0;
                puVar9[0x11] = puVar9 + 3;
                puVar9[0x12] = 0;
                *(undefined1 *)(puVar9 + 0x13) = 0;
                *(undefined1 *)((long)puVar9 + 0x9c) = 0;
                *puVar9 = &PTR_FUN_110c50788;
                plVar18 = puVar9 + 0x14;
                *plVar18 = (long)param_1;
                puVar9[0x16] = plStack_78;
                puVar9[0x15] = pcStack_80;
                *(int *)(puVar9 + 0x17) = (int)lVar10;
                puVar9[0x18] = plVar16;
                if (plVar16 != (long *)0x0) {
                  plVar2 = plVar16 + 1;
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar5) {
                      *plVar2 = *plVar2 + 4;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                *(char *)(puVar9 + 0x19) = (char)lVar6;
                *(undefined1 *)(puVar9 + 0x1b) = 1;
                puVar9[0x1c] = 0;
                puVar9[0x1d] = plVar8;
                if (plStack_98 != (long *)0x0) {
                  puVar1 = (ulong *)(plStack_98 + 1);
                  do {
                    uVar14 = *puVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *puVar1 = uVar14 - 4;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if ((uVar14 & 0x1fffffffc) == 4) {
                    do {
                      uVar14 = *puVar1;
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar5) {
                        *puVar1 = uVar14 - 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (uVar14 - 1 == 0) {
                      (**(code **)(*plStack_98 + 8))();
                    }
                  }
                }
                plStack_98 = puVar9;
                if (puStack_90 != (undefined8 *)0x0) {
                  func_0x0001092b4274(&puStack_90);
                }
                plStack_a0 = plVar18;
                puStack_90 = puVar9;
                if (plVar16 != (long *)0x0) {
                  puVar1 = (ulong *)(plVar16 + 1);
                  do {
                    uVar14 = *puVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *puVar1 = uVar14 - 4;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if ((uVar14 & 0x1fffffffc) == 4) {
                    do {
                      uVar14 = *puVar1;
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar5) {
                        *puVar1 = uVar14 - 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (uVar14 - 1 == 0) {
                      (**(code **)(*plVar16 + 8))(plVar16);
                    }
                  }
                }
                pcStack_88 = (code *)0x10abcb970;
                __ZNSt13exception_ptrD1Ev(&lStack_a8);
              }
              plVar8 = plStack_a0;
              if (plStack_a0[8] != 0) {
                func_0x0001092b4274();
              }
              plVar8[8] = (long)puStack_90;
              puStack_90 = (undefined8 *)0x0;
              pcStack_80 = pcStack_88;
              plStack_78 = plStack_a0;
              puStack_70 = puVar17;
              (**(code **)*puVar17)(puVar17,&pcStack_80);
              plVar18 = plStack_98;
              plStack_98 = (long *)0x0;
              if ((puStack_90 != (undefined8 *)0x0) &&
                 (func_0x0001092b4274(&puStack_90), plStack_98 != (long *)0x0)) {
                puVar1 = (ulong *)(plStack_98 + 1);
                do {
                  uVar14 = *puVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *puVar1 = uVar14 - 4;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if ((uVar14 & 0x1fffffffc) == 4) {
                  do {
                    uVar14 = *puVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *puVar1 = uVar14 - 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (uVar14 - 1 == 0) {
                    (**(code **)(*plStack_98 + 8))();
                  }
                }
              }
              plVar8 = (long *)plVar15[5];
              if (plVar8 != (long *)0x0) {
                puVar1 = (ulong *)(plVar8 + 1);
                do {
                  uVar14 = *puVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *puVar1 = uVar14 - 4;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if ((uVar14 & 0x1fffffffc) == 4) {
                  do {
                    uVar14 = *puVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *puVar1 = uVar14 - 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (uVar14 - 1 == 0) {
                    (**(code **)(*plVar8 + 8))();
                  }
                }
              }
              plVar15[5] = (long)plVar18;
              if (plVar16 != (long *)0x0) {
                puVar1 = (ulong *)(plVar16 + 1);
                do {
                  uVar14 = *puVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *puVar1 = uVar14 - 4;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if ((uVar14 & 0x1fffffffc) == 4) {
                  do {
                    uVar14 = *puVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *puVar1 = uVar14 - 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (uVar14 - 1 == 0) {
                    (**(code **)(*plVar16 + 8))();
                    plVar8 = plVar16;
                  }
                }
              }
              plVar15 = (long *)*plVar19;
              plVar16 = (long *)param_1[0x229];
            }
            uVar20 = uVar20 + 1;
            plVar19 = plVar15;
            uVar14 = uVar20;
          } while (plVar15 != plVar16);
        }
        if (plVar16 != plVar3) {
          do {
            if ((*(byte *)(plVar16 + 6) & 1) == 0) {
              if (uVar13 <= uVar14) break;
              FUN_10ab83498(&plStack_a0,param_1,plVar16[2],plVar16[3]);
              *(undefined4 *)(plVar16 + 4) = plStack_a0._0_4_;
              plVar8 = (long *)plVar16[5];
              if (plVar8 != (long *)0x0) {
                puVar1 = (ulong *)(plVar8 + 1);
                do {
                  uVar12 = *puVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *puVar1 = uVar12 - 4;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if ((uVar12 & 0x1fffffffc) == 4) {
                  do {
                    uVar12 = *puVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *puVar1 = uVar12 - 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (uVar12 - 1 == 0) {
                    (**(code **)(*plVar8 + 8))();
                  }
                }
              }
              plVar16[5] = (long)plStack_98;
            }
            uVar14 = uVar14 + 1;
            plVar16 = (long *)plVar16[1];
          } while (plVar16 != plVar3);
          plVar16 = (long *)param_1[0x229];
        }
        for (; plVar16 != plVar3; plVar16 = (long *)plVar16[1]) {
          if (((*(byte *)(plVar16 + 6) & 1) == 0) && (plVar8 = plVar16 + 5, *plVar8 != 0)) {
            FUN_109d1a244(plVar8);
            func_0x0001092af8bc(plVar8);
            if ((*(byte *)(*plVar8 + 0x9c) & 1) == 0) {
LAB_10ab7b634:
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10ab7b638);
              (*pcVar7)();
            }
            *(undefined4 *)(plVar16 + 4) = *(undefined4 *)(*plVar8 + 0x98);
          }
        }
      }
      lVar10 = param_1[0x22a];
      while (lVar10 != 0) {
        lVar10 = param_1[0x229];
        if ((*(byte *)(lVar10 + 0x30) & 1) != 0) {
          return;
        }
        *(undefined1 *)(lVar10 + 0x30) = 1;
        *(int *)(param_1 + 0x22e) = (int)param_1[0x22e] + 1;
        FUN_10ab83788(param_1,*(undefined8 *)(lVar10 + 0x10),*(undefined8 *)(lVar10 + 0x18),
                      lVar10 + 0x20);
        FUN_10abcb888(plVar3);
        lVar10 = param_1[0x22a];
      }
      FUN_10ab86a8c(param_1 + 0x215);
    }
  }
  return;
}



/* Entry: 10ab7b6cc; end: 10ab7b8eb;  */

void FUN_10ab7b6cc(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined2 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  ulong uStack_58;
  
  FUN_10abf17a4();
  lVar8 = param_1 + 0x20;
  FUN_10a01f6d4(lVar8,param_2);
  uVar3 = *(ushort *)(lVar8 + 0x20);
  bVar1 = (byte)(uVar3 >> 2) & 1;
  if ((uVar3 & 0x100) != 0) {
    bVar1 = 2;
  }
  lVar7 = *(long *)(param_1 + 0x9b0);
  *(byte *)(lVar7 + 0x90) = bVar1;
  if ((uVar3 >> 2 & 1) == 0) {
    if (*(long **)(lVar8 + 0x170) == *(long **)(lVar8 + 0x168)) goto LAB_10ab7b8e8;
    bVar5 = false;
    if (**(long **)(lVar8 + 0x168) != 0) {
      bVar5 = *(char *)(lVar8 + 0x1dc) != '\0';
    }
  }
  else {
    bVar5 = false;
  }
  *(bool *)(lVar7 + 0x91) = bVar5;
  if ((int)param_2 == 0xffff) {
    if ((ulong)((*(long *)(param_1 + 0x1c0) - *(long *)(param_1 + 0x1b8) >> 3) * 0x28cbfbeb9a020a33)
        >> 0x10 == 0) {
LAB_10ab7b8e8:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab7b8ec);
      (*pcVar4)();
    }
    uVar13 = 0;
    uVar12 = 0;
    uVar10 = 0;
    uVar11 = 0;
    bStack_60 = 0;
    uVar2 = *(undefined1 *)(*(long *)(param_1 + 0x1b8) + 0x7d7f84d);
    goto LAB_10ab7b854;
  }
  lVar8 = param_1 + 0x5e0;
  func_0x00010a04a0d4(lVar8,param_2);
  cVar6 = *(char *)(lVar8 + 1);
  if (cVar6 == '\x02') {
LAB_10ab7b788:
    *(char *)(*(long *)(param_1 + 0x9b0) + 0x92) = cVar6;
  }
  else {
    lVar8 = param_1 + 0x5e0;
    func_0x00010a04a0d4(lVar8,param_2);
    cVar6 = '\x01';
    if (*(char *)(lVar8 + 1) == '\x01') goto LAB_10ab7b788;
  }
  lVar8 = param_1 + 0x5e0;
  func_0x00010a04a0d4(lVar8,param_2);
  uVar10 = *(undefined4 *)(lVar8 + 0x900);
  lVar8 = param_1 + 0x5e0;
  func_0x00010a04a0d4(lVar8,param_2);
  uVar11 = *(undefined2 *)(lVar8 + 0x906);
  lVar8 = param_1 + 0x20;
  FUN_10a01f6d4(lVar8,param_2);
  uVar12 = *(undefined1 *)(lVar8 + 0x1d9);
  lVar8 = param_1 + 0x20;
  FUN_10a01f6d4(lVar8,param_2);
  uVar2 = *(undefined1 *)(lVar8 + 0x25);
  lVar8 = param_1 + 0x5e0;
  func_0x00010a04a0d4(lVar8,param_2);
  uVar9 = 1;
  if (*(char *)(lVar8 + 1) != '\x01') {
    uVar9 = 2;
  }
  uVar13 = 0;
  if (*(char *)(lVar8 + 1) != '\0') {
    uVar13 = uVar9;
  }
  lVar8 = param_1 + 0x20;
  FUN_10a01f6d4(lVar8,param_2);
  bStack_60 = (byte)(*(ushort *)(lVar8 + 0x20) >> 6) & 1;
LAB_10ab7b854:
  lVar8 = param_1 + 0x5e0;
  func_0x00010a04a0d4(lVar8,param_2);
  uStack_58 = *(ulong *)(lVar8 + 0x2b8);
  if (uStack_58 < 2) {
    uStack_58 = 1;
  }
  uStack_68 = 0;
  uStack_78 = uVar10;
  uStack_74 = uVar11;
  uStack_72 = uVar12;
  uStack_71 = uVar2;
  uStack_70 = uVar13;
  FUN_10a1e4fa4(&uStack_78);
  lVar8 = *(long *)(param_1 + 0x9b0);
  *(ulong *)(lVar8 + 0x70) = CONCAT71(uStack_6f,uStack_70);
  *(ulong *)(lVar8 + 0x68) = CONCAT17(uStack_71,CONCAT16(uStack_72,CONCAT24(uStack_74,uStack_78)));
  *(ulong *)(lVar8 + 0x80) = CONCAT71(uStack_5f,bStack_60);
  *(undefined8 *)(lVar8 + 0x78) = uStack_68;
  *(ulong *)(lVar8 + 0x88) = uStack_58;
  lVar8 = param_1 + 0x10a8;
  FUN_10a18cc7c(lVar8,*(long *)(param_1 + 0x9b0) + 0x68);
  *(long *)(*(long *)(param_1 + 0x9b0) + 0x60) = lVar8;
  return;
}



/* Entry: 10ab7b8ec; end: 10ab7b917;  */

/* WARNING: Removing unreachable block (ram,0x00010abf1450) */

void FUN_10ab7b8ec(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  FUN_10ab7aa40();
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x150))();
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x158))(param_1,*(undefined1 *)(param_2 + 0x18));
  if (((((int)plVar1 == 0) || ((*(byte *)(param_1[0x137] + 8) & 1) == 0)) &&
      ((*(byte *)(param_2 + 0x20) & 1) == 0)) || ((int)plVar2 == 0)) {
    lVar4 = param_1[0x137];
    *(undefined1 *)(lVar4 + 1) = 0;
    uVar3 = 3;
  }
  else {
    lVar4 = param_1[0x137];
    *(undefined1 *)(lVar4 + 1) = *(undefined1 *)(param_2 + 0x18);
    uVar3 = *(undefined1 *)(param_2 + 0x19);
  }
  *(undefined1 *)(lVar4 + 2) = uVar3;
  *(undefined4 *)(lVar4 + 4) = *(undefined4 *)(param_2 + 0x1c);
  FUN_10ac04f70(lVar4 + 0x18,param_2 + 0xa8);
  uVar6 = *(undefined8 *)(param_2 + 0xf8);
  uVar5 = *(undefined8 *)(param_2 + 0xf0);
  uVar8 = *(undefined8 *)(param_2 + 0x108);
  uVar7 = *(undefined8 *)(param_2 + 0x100);
  uVar9 = *(undefined8 *)(param_2 + 0x109);
  *(undefined8 *)(lVar4 + 0x81) = *(undefined8 *)(param_2 + 0x111);
  *(undefined8 *)(lVar4 + 0x79) = uVar9;
  *(undefined8 *)(lVar4 + 0x68) = uVar6;
  *(undefined8 *)(lVar4 + 0x60) = uVar5;
  *(undefined8 *)(lVar4 + 0x78) = uVar8;
  *(undefined8 *)(lVar4 + 0x70) = uVar7;
  lVar4 = param_1[0x137];
  *(undefined1 *)(lVar4 + 9) = 0;
  uVar3 = *(undefined1 *)(param_2 + 0x2c);
  *(undefined1 *)(lVar4 + 0xd) = uVar3;
  *(undefined1 *)(lVar4 + 0xe) = *(undefined1 *)(param_2 + 0x2d);
  FUN_10abf1508(param_1 + 4,lVar4 + 200,param_2 + 0x98,param_2 + 0x9c,uVar3,
                *(char *)(lVar4 + 1) == '\x01',lVar4 + 10,lVar4 + 0xb,lVar4 + 0xc);
  return;
}



/* Entry: 10ab7b918; end: 10ab7b963;  */

undefined1 FUN_10ab7b918(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd82);
}



/* Entry: 10ab7b964; end: 10ab7b9d7;  */

void FUN_10ab7b964(long *param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 *in_x5;
  long *in_x6;
  long *in_x7;
  undefined1 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  undefined8 *in_stack_00000000;
  ulong in_stack_fffffffffffffca0;
  long lStack_340;
  long *plStack_338;
  undefined8 ***pppuStack_330;
  long *plStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined4 uStack_310;
  undefined8 ***pppuStack_308;
  long *plStack_300;
  undefined7 uStack_2f8;
  char cStack_2f1;
  undefined1 auStack_2f0 [8];
  long *plStack_2e8;
  undefined8 uStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  undefined1 uStack_2c8;
  undefined7 uStack_2c7;
  undefined4 uStack_2c0;
  int iStack_2b8;
  undefined4 uStack_2b4;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long *plStack_298;
  undefined8 uStack_290;
  long *plStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  long *plStack_e0;
  long *plStack_b8;
  long lStack_88;
  
  FUN_10ab7aa40();
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_328 = (long *)0x0;
  pppuStack_330 = (undefined8 ****)0x3f800000;
  uStack_318 = 0;
  plStack_320 = (long *)0x3f800000;
  uStack_310 = 0x3f800000;
  lStack_340 = 0;
  plStack_338 = (long *)0x0;
  plVar12 = param_1;
  if (in_x6 != (long *)0x0) {
    puVar9 = (undefined8 *)0x1;
    plVar12 = in_x6;
    FUN_10a088744();
    uStack_2e0 = (undefined8 ****)CONCAT44(uStack_2e0._4_4_,(int)plVar12);
    if (puVar9 == (undefined8 *)0x0) {
      plStack_2d8 = (long *)0x0;
      plStack_2d0 = (long *)0x0;
    }
    else {
      plStack_2d8 = (long *)*puVar9;
      plStack_2d0 = (long *)puVar9[1];
      if (puVar9[1] != 0) {
        plVar14 = (long *)(puVar9[1] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = *plVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    if ((int)plVar12 == 2) {
      FUN_10a026ab4(&lStack_340,&plStack_2d8);
      (**(code **)(*in_x6 + 0x90))(&uStack_290);
      plStack_328 = plStack_288;
      pppuStack_330 = uStack_290;
      uStack_318 = uStack_278;
      plStack_320 = plStack_280;
      uStack_310 = uStack_270;
      plVar12 = in_x6;
    }
    plVar14 = plStack_2d0;
    if (plStack_2d0 != (long *)0x0) {
      plVar1 = plStack_2d0 + 1;
      do {
        lVar11 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_2d0 + 0x10))(plStack_2d0);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar12 = plVar14;
      }
    }
  }
  iVar7 = (int)plVar12;
  if (param_2 < 2) {
    if (lStack_340 == 0) {
      FUN_10a00946c(&UNK_10f69aa55);
      goto LAB_10abf4fd8;
    }
LAB_10abf461c:
    FUN_10ad055a0();
    if (iVar7 == 0) {
LAB_10abf4650:
      if (*(short *)(param_1[0x136] + 4) == -1) {
        uVar10 = 0;
LAB_10abf4698:
        uVar16 = 0;
      }
      else {
        plVar12 = param_1 + 4;
        FUN_10a01f6d4();
        uVar10 = *(undefined1 *)((long)plVar12 + 0x44);
        if (*(short *)(param_1[0x136] + 4) == -1) goto LAB_10abf4698;
        plVar12 = param_1 + 4;
        FUN_10a01f6d4();
        uVar16 = (undefined4)plVar12[8];
      }
      FUN_10a025e68(&uStack_290,in_x5,uVar10,uVar16,2,2,2,0xffffffffffffffff,0xffffffffffffffff);
      (**(code **)(*param_1 + 0x88))(param_1,&uStack_290);
      if (plStack_b8 != (long *)0x0) {
        plVar12 = plStack_b8 + 1;
        do {
          lVar11 = *plVar12;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
        }
      }
      if (plStack_e0 != (long *)0x0) {
        plVar12 = plStack_e0 + 1;
        do {
          lVar11 = *plVar12;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
        }
      }
      func_0x00010a048e34(&plStack_288,uStack_290);
      uVar13 = *(undefined8 *)(param_1[0x137] + 0x20);
      if (*(short *)(param_1[0x136] + 4) == -1) {
        uVar10 = 0;
      }
      else {
        plVar12 = param_1 + 4;
        FUN_10a01f6d4();
        uVar10 = *(undefined1 *)((long)plVar12 + 0x44);
      }
      FUN_10abf1f44(param_1,uVar13,uVar10);
      plVar12 = (long *)*in_x5;
      pppuStack_308 = (undefined8 ****)0x0;
      plStack_300 = (long *)0x0;
      plStack_288 = (long *)0x0;
      uStack_290 = (undefined8 ****)0x3f800000;
      uStack_278 = 0;
      plStack_280 = (long *)0x3f800000;
      uStack_270 = 0x3f800000;
      uStack_2a0 = *in_stack_00000000;
      plStack_298 = (long *)in_stack_00000000[1];
      if (in_x7 == (long *)0x0) {
        FUN_10a026ab4(&pppuStack_308,param_1[0x10b] + 0x108);
      }
      else {
        puVar9 = (undefined8 *)0x1;
        plVar14 = in_x7;
        FUN_10a088744();
        iStack_2b8 = (int)plVar14;
        if (puVar9 == (undefined8 *)0x0) {
          plVar14 = (long *)0x0;
          plStack_2b0 = (long *)0x0;
          uStack_2a8 = (long *)0x0;
        }
        else {
          plVar14 = (long *)puVar9[1];
          plStack_2b0 = (long *)*puVar9;
          uStack_2a8 = (long *)puVar9[1];
          if (plVar14 != (long *)0x0) {
            plVar1 = plVar14 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = *plVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        if (iStack_2b8 == 2) {
          if (*(char *)((long)param_1 + 0x4c) == '\x01') {
            auVar17 = NEON_fmov(0x3f800000,4);
            plStack_298 = auVar17._8_8_;
            uStack_2a0 = auVar17._0_8_;
          }
          FUN_10a026ab4(&pppuStack_308,&plStack_2b0);
          (**(code **)(*in_x7 + 0x90))(&uStack_2e0,in_x7);
          uStack_278 = CONCAT71(uStack_2c7,uStack_2c8);
          plStack_288 = plStack_2d8;
          uStack_290 = uStack_2e0;
          plStack_280 = plStack_2d0;
          uStack_270 = uStack_2c0;
          plVar14 = uStack_2a8;
        }
        if (plVar14 != (long *)0x0) {
          plVar1 = plVar14 + 1;
          do {
            lVar11 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
        }
      }
      if (*(short *)(param_1[0x136] + 4) == -1) {
        uVar15 = 0;
      }
      else {
        plVar14 = param_1 + 4;
        FUN_10a01f6d4();
        uVar15 = (uint)*(byte *)((long)plVar14 + 0x44);
      }
      plVar14 = plVar12;
      (**(code **)(*plVar12 + 0x28))();
      uVar3 = (uint)plVar14 >> (ulong)(uVar15 & 0x1f);
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      (**(code **)(*plVar12 + 0x30))();
      FUN_10a24473c(param_1[0x10b]);
      uVar15 = (uint)plVar12 >> (ulong)(uVar15 & 0x1f);
      if (uVar15 < 2) {
        uVar15 = 1;
      }
      uStack_2e0 = (undefined8 ****)CONCAT44((float)uVar15,(float)uVar3);
      FUN_10ab10600();
      plVar12 = plStack_300;
      if (plStack_300 != (long *)0x0) {
        plVar14 = plStack_300 + 1;
        do {
          lVar11 = *plVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_300 + 0x10))(plStack_300);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      (**(code **)(*param_1 + 0x90))(param_1,0,3,3);
      goto LAB_10abf49a4;
    }
    ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar8 == (undefined *)0x0) {
      ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar12 = (long *)*ppuVar8;
      if ((plVar12 == (long *)0x0) || ((**(code **)(*plVar12 + 0x18))(), plVar12 == (long *)0x0))
      goto LAB_10abf4650;
      plVar12 = plVar12 + 7;
    }
    else {
      plVar12 = (long *)(*ppuVar8 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar12 + 0x10) >> 1 & 1) == 0) goto LAB_10abf4650;
  }
  else {
    if (param_2 == 3) {
      if (*(short *)(param_1[0x136] + 4) == -1) {
        uVar15 = 0;
LAB_10abf4124:
        uVar16 = 0;
      }
      else {
        plVar12 = param_1 + 4;
        FUN_10a01f6d4();
        uVar15 = (uint)*(byte *)((long)plVar12 + 0x44);
        if (*(short *)(param_1[0x136] + 4) == -1) goto LAB_10abf4124;
        plVar12 = param_1 + 4;
        FUN_10a01f6d4();
        uVar16 = (undefined4)plVar12[8];
      }
      plVar12 = (long *)*in_x5;
      (**(code **)(*plVar12 + 0x28))();
      uVar3 = (uint)plVar12 >> (ulong)(uVar15 & 0x1f);
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      plVar12 = (long *)*in_x5;
      (**(code **)(*plVar12 + 0x30))();
      uVar2 = (uint)plVar12 >> (ulong)(uVar15 & 0x1f);
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      in_stack_fffffffffffffca0 = in_stack_fffffffffffffca0 & 0xffffffffffffff00;
      FUN_10a048e7c(&uStack_2a0,*(undefined8 *)(param_1[0x10b] + 0x1e0),0,uVar3,uVar2,1,4,1,0,
                    in_stack_fffffffffffffca0);
      uVar13 = *(undefined8 *)(param_1[0x10b] + 0x1e0);
      FUN_10a048e7c(auStack_2f0,uVar13,0,uVar3,uVar2,1,4,1,0,
                    in_stack_fffffffffffffca0 & 0xffffffffffffff00);
      iVar7 = (int)uVar13;
      FUN_10ad055a0();
      if (iVar7 != 0) {
        ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
        (*(code *)PTR___tlv_bootstrap_11340dfd8)();
        if (*ppuVar8 == (undefined *)0x0) {
          ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
          (*(code *)PTR___tlv_bootstrap_11340dd98)();
          plVar12 = (long *)*ppuVar8;
          if ((plVar12 == (long *)0x0) || ((**(code **)(*plVar12 + 0x18))(), plVar12 == (long *)0x0)
             ) goto LAB_10abf41f4;
          plVar12 = plVar12 + 7;
        }
        else {
          plVar12 = (long *)(*ppuVar8 + 8);
        }
        if (((uint)*(undefined8 *)(*plVar12 + 0x10) >> 1 & 1) != 0) {
          func_0x000107c2b054(&iStack_2b8,&UNK_10f69aaad);
          func_0x000107c2b054(&pppuStack_308,"");
          if ((long)uStack_2a8 < 0) {
            uStack_290 = (undefined8 ****)"null";
            if (plStack_2b0 != (long *)0x0) {
              uStack_290 = (undefined8 ****)CONCAT44(uStack_2b4,iStack_2b8);
            }
          }
          else {
            uStack_290 = (undefined8 ****)"null";
            if (uStack_2a8._7_1_ != '\0') {
              uStack_290 = (undefined8 ****)&iStack_2b8;
            }
          }
          if (cStack_2f1 < '\0') {
            uStack_2e0 = (undefined8 ****)"null";
            if (plStack_300 != (long *)0x0) {
              uStack_2e0 = (undefined8 ****)pppuStack_308;
            }
          }
          else {
            uStack_2e0 = (undefined8 ****)"null";
            if (cStack_2f1 != '\0') {
              uStack_2e0 = &pppuStack_308;
            }
          }
          FUN_10a224324(&uStack_290,&uStack_2e0);
          if ((long)uStack_2a8 < 0) {
            if (plStack_2b0 == (long *)0x0) goto LAB_10abf4d5c;
            func_0x000107c3192c(&uStack_290,CONCAT44(uStack_2b4,iStack_2b8));
LAB_10abf4e94:
            uVar10 = 1;
          }
          else {
            if (uStack_2a8._7_1_ != '\0') {
              uStack_290 = (undefined8 ****)CONCAT44(uStack_2b4,iStack_2b8);
              plStack_288 = plStack_2b0;
              plStack_280 = uStack_2a8;
              goto LAB_10abf4e94;
            }
LAB_10abf4d5c:
            uVar10 = 0;
            uStack_290 = (undefined8 ****)((ulong)uStack_290 & 0xffffffffffffff00);
          }
          uStack_278 = CONCAT71(uStack_278._1_7_,uVar10);
          if (cStack_2f1 < '\0') {
            if (plStack_300 == (long *)0x0) goto LAB_10abf4ec0;
            func_0x000107c3192c(&uStack_2e0,pppuStack_308);
LAB_10abf4f74:
            uStack_2c8 = 1;
          }
          else {
            if (cStack_2f1 != '\0') {
              plStack_2d8 = plStack_300;
              uStack_2e0 = (undefined8 ****)pppuStack_308;
              plStack_2d0 = (long *)CONCAT17(cStack_2f1,uStack_2f8);
              goto LAB_10abf4f74;
            }
LAB_10abf4ec0:
            uStack_2c8 = 0;
            uStack_2e0 = (undefined8 ****)((ulong)uStack_2e0 & 0xffffffffffffff00);
          }
          FUN_10a234a0c(&uStack_290,&uStack_2e0);
          goto LAB_10abf4fd8;
        }
      }
LAB_10abf41f4:
      FUN_10a025e68(&uStack_290,&uStack_2a0,uVar15,uVar16,2,2,2,0xffffffffffffffff,
                    0xffffffffffffffff);
      (**(code **)(*param_1 + 0x88))(param_1,&uStack_290);
      plVar12 = plStack_b8;
      if (plStack_b8 != (long *)0x0) {
        plVar14 = plStack_b8 + 1;
        do {
          lVar11 = *plVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      plVar12 = plStack_e0;
      if (plStack_e0 != (long *)0x0) {
        plVar14 = plStack_e0 + 1;
        do {
          lVar11 = *plVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      func_0x00010a048e34(&plStack_288,uStack_290);
      FUN_10abf1f44(param_1,*(undefined8 *)(param_1[0x137] + 0x20),uVar15);
      FUN_10a244794(param_1[0x10b]);
      fVar18 = (float)uVar3;
      fVar19 = (float)uVar2;
      uStack_290 = (undefined8 ****)CONCAT44(fVar19,fVar18);
      FUN_10a73f1a0();
      plVar12 = param_1;
      (**(code **)(*param_1 + 0x90))(param_1,0,3,3);
      iVar7 = (int)plVar12;
      FUN_10ad055a0();
      if (iVar7 != 0) {
        ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
        (*(code *)PTR___tlv_bootstrap_11340dfd8)();
        if (*ppuVar8 == (undefined *)0x0) {
          ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
          (*(code *)PTR___tlv_bootstrap_11340dd98)();
          plVar12 = (long *)*ppuVar8;
          if ((plVar12 == (long *)0x0) || ((**(code **)(*plVar12 + 0x18))(), plVar12 == (long *)0x0)
             ) goto LAB_10abf4344;
          plVar12 = plVar12 + 7;
        }
        else {
          plVar12 = (long *)(*ppuVar8 + 8);
        }
        if (((uint)*(undefined8 *)(*plVar12 + 0x10) >> 1 & 1) != 0) {
          func_0x000107c2b054(&iStack_2b8,&UNK_10f69aacd);
          func_0x000107c2b054(&pppuStack_308,"");
          if ((long)uStack_2a8 < 0) {
            uStack_290 = (undefined8 ****)"null";
            if (plStack_2b0 != (long *)0x0) {
              uStack_290 = (undefined8 ****)CONCAT44(uStack_2b4,iStack_2b8);
            }
          }
          else {
            uStack_290 = (undefined8 ****)"null";
            if (uStack_2a8._7_1_ != '\0') {
              uStack_290 = (undefined8 ****)&iStack_2b8;
            }
          }
          if (cStack_2f1 < '\0') {
            uStack_2e0 = (undefined8 ****)"null";
            if (plStack_300 != (long *)0x0) {
              uStack_2e0 = (undefined8 ****)pppuStack_308;
            }
          }
          else {
            uStack_2e0 = (undefined8 ****)"null";
            if (cStack_2f1 != '\0') {
              uStack_2e0 = &pppuStack_308;
            }
          }
          FUN_10a224324(&uStack_290,&uStack_2e0);
          if ((long)uStack_2a8 < 0) {
            if (plStack_2b0 == (long *)0x0) goto LAB_10abf4de8;
            func_0x000107c3192c(&uStack_290,CONCAT44(uStack_2b4,iStack_2b8));
LAB_10abf4ee0:
            uVar10 = 1;
          }
          else {
            if (uStack_2a8._7_1_ != '\0') {
              uStack_290 = (undefined8 ****)CONCAT44(uStack_2b4,iStack_2b8);
              plStack_288 = plStack_2b0;
              plStack_280 = uStack_2a8;
              goto LAB_10abf4ee0;
            }
LAB_10abf4de8:
            uVar10 = 0;
            uStack_290 = (undefined8 ****)((ulong)uStack_290 & 0xffffffffffffff00);
          }
          uStack_278 = CONCAT71(uStack_278._1_7_,uVar10);
          if (cStack_2f1 < '\0') {
            if (plStack_300 == (long *)0x0) goto LAB_10abf4f0c;
            func_0x000107c3192c(&uStack_2e0,pppuStack_308);
LAB_10abf4f9c:
            uStack_2c8 = 1;
          }
          else {
            if (cStack_2f1 != '\0') {
              plStack_2d8 = plStack_300;
              uStack_2e0 = (undefined8 ****)pppuStack_308;
              plStack_2d0 = (long *)CONCAT17(cStack_2f1,uStack_2f8);
              goto LAB_10abf4f9c;
            }
LAB_10abf4f0c:
            uStack_2c8 = 0;
            uStack_2e0 = (undefined8 ****)((ulong)uStack_2e0 & 0xffffffffffffff00);
          }
          FUN_10a234a0c(&uStack_290,&uStack_2e0);
          goto LAB_10abf4fd8;
        }
      }
LAB_10abf4344:
      FUN_10a025e68(&uStack_290,auStack_2f0,uVar15,uVar16,2,2,2,0xffffffffffffffff,
                    0xffffffffffffffff);
      (**(code **)(*param_1 + 0x88))(param_1,&uStack_290);
      plVar12 = plStack_b8;
      if (plStack_b8 != (long *)0x0) {
        plVar14 = plStack_b8 + 1;
        do {
          lVar11 = *plVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      plVar12 = plStack_e0;
      if (plStack_e0 != (long *)0x0) {
        plVar14 = plStack_e0 + 1;
        do {
          lVar11 = *plVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      func_0x00010a048e34(&plStack_288,uStack_290);
      FUN_10abf1f44(param_1,*(undefined8 *)(param_1[0x137] + 0x20),uVar15);
      FUN_10a2447ec(param_1[0x10b]);
      uStack_290 = (undefined8 ****)CONCAT44(fVar19,fVar18);
      FUN_10a73ecd4();
      plVar12 = param_1;
      (**(code **)(*param_1 + 0x90))(param_1,0,3,3);
      iVar7 = (int)plVar12;
      FUN_10ad055a0();
      if (iVar7 != 0) {
        ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
        (*(code *)PTR___tlv_bootstrap_11340dfd8)();
        if (*ppuVar8 == (undefined *)0x0) {
          ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
          (*(code *)PTR___tlv_bootstrap_11340dd98)();
          plVar12 = (long *)*ppuVar8;
          if ((plVar12 == (long *)0x0) || ((**(code **)(*plVar12 + 0x18))(), plVar12 == (long *)0x0)
             ) goto LAB_10abf448c;
          plVar12 = plVar12 + 7;
        }
        else {
          plVar12 = (long *)(*ppuVar8 + 8);
        }
        if (((uint)*(undefined8 *)(*plVar12 + 0x10) >> 1 & 1) != 0) {
          func_0x000107c2b054(&iStack_2b8,&UNK_10f69aaed);
          func_0x000107c2b054(&pppuStack_308,"");
          if ((long)uStack_2a8 < 0) {
            uStack_290 = (undefined8 ****)"null";
            if (plStack_2b0 != (long *)0x0) {
              uStack_290 = (undefined8 ****)CONCAT44(uStack_2b4,iStack_2b8);
            }
          }
          else {
            uStack_290 = (undefined8 ****)"null";
            if (uStack_2a8._7_1_ != '\0') {
              uStack_290 = (undefined8 ****)&iStack_2b8;
            }
          }
          if (cStack_2f1 < '\0') {
            uStack_2e0 = (undefined8 ****)"null";
            if (plStack_300 != (long *)0x0) {
              uStack_2e0 = (undefined8 ****)pppuStack_308;
            }
          }
          else {
            uStack_2e0 = (undefined8 ****)"null";
            if (cStack_2f1 != '\0') {
              uStack_2e0 = &pppuStack_308;
            }
          }
          FUN_10a224324(&uStack_290,&uStack_2e0);
          if ((long)uStack_2a8 < 0) {
            if (plStack_2b0 == (long *)0x0) goto LAB_10abf4e74;
            func_0x000107c3192c(&uStack_290,CONCAT44(uStack_2b4,iStack_2b8));
LAB_10abf4f2c:
            uVar10 = 1;
          }
          else {
            if (uStack_2a8._7_1_ != '\0') {
              uStack_290 = (undefined8 ****)CONCAT44(uStack_2b4,iStack_2b8);
              plStack_288 = plStack_2b0;
              plStack_280 = uStack_2a8;
              goto LAB_10abf4f2c;
            }
LAB_10abf4e74:
            uVar10 = 0;
            uStack_290 = (undefined8 ****)((ulong)uStack_290 & 0xffffffffffffff00);
          }
          uStack_278 = CONCAT71(uStack_278._1_7_,uVar10);
          if (cStack_2f1 < '\0') {
            if (plStack_300 == (long *)0x0) goto LAB_10abf4f58;
            func_0x000107c3192c(&uStack_2e0,pppuStack_308);
LAB_10abf4fc4:
            uStack_2c8 = 1;
          }
          else {
            if (cStack_2f1 != '\0') {
              plStack_2d8 = plStack_300;
              uStack_2e0 = (undefined8 ****)pppuStack_308;
              plStack_2d0 = (long *)CONCAT17(cStack_2f1,uStack_2f8);
              goto LAB_10abf4fc4;
            }
LAB_10abf4f58:
            uStack_2c8 = 0;
            uStack_2e0 = (undefined8 ****)((ulong)uStack_2e0 & 0xffffffffffffff00);
          }
          FUN_10a234a0c(&uStack_290,&uStack_2e0);
          goto LAB_10abf4fd8;
        }
      }
LAB_10abf448c:
      FUN_10a025e68(&uStack_290,in_x5,uVar15,uVar16,2,2,2,0xffffffffffffffff,0xffffffffffffffff);
      (**(code **)(*param_1 + 0x88))(param_1,&uStack_290);
      plVar12 = plStack_b8;
      if (plStack_b8 != (long *)0x0) {
        plVar14 = plStack_b8 + 1;
        do {
          lVar11 = *plVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      plVar12 = plStack_e0;
      if (plStack_e0 != (long *)0x0) {
        plVar14 = plStack_e0 + 1;
        do {
          lVar11 = *plVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      func_0x00010a048e34(&plStack_288,uStack_290);
      FUN_10abf1f44(param_1,*(undefined8 *)(param_1[0x137] + 0x20),uVar15);
      FUN_10a244844(param_1[0x10b]);
      uStack_290 = (undefined8 ****)CONCAT44(fVar19,fVar18);
      FUN_10a73f7a8();
      plVar12 = param_1;
      (**(code **)(*param_1 + 0x90))(param_1,0,3,3);
      iVar7 = (int)plVar12;
      if (plStack_2e8 != (long *)0x0) {
        plVar12 = plStack_2e8 + 1;
        do {
          lVar11 = *plVar12;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_2e8 + 0x10))(plStack_2e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          iVar7 = (int)plStack_2e8;
        }
      }
      plVar12 = plStack_298;
      if (plStack_298 != (long *)0x0) {
        plVar14 = plStack_298 + 1;
        do {
          lVar11 = *plVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_298 + 0x10))(plStack_298);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          iVar7 = (int)plVar12;
        }
      }
    }
    if (lStack_340 != 0) goto LAB_10abf461c;
LAB_10abf49a4:
    plVar12 = plStack_338;
    if (plStack_338 != (long *)0x0) {
      plVar14 = plStack_338 + 1;
      do {
        lVar11 = *plVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *plVar14 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_338 + 0x10))(plStack_338);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x000107c2b054(&iStack_2b8,&UNK_10f69aa8c);
  func_0x000107c2b054(&pppuStack_308,"");
  if ((long)uStack_2a8 < 0) {
    uStack_290 = (undefined8 ****)"null";
    if (plStack_2b0 != (long *)0x0) {
      uStack_290 = (undefined8 ****)CONCAT44(uStack_2b4,iStack_2b8);
    }
  }
  else {
    uStack_290 = (undefined8 ****)"null";
    if (uStack_2a8._7_1_ != '\0') {
      uStack_290 = (undefined8 ****)&iStack_2b8;
    }
  }
  if (cStack_2f1 < '\0') {
    uStack_2e0 = (undefined8 ****)"null";
    if (plStack_300 != (long *)0x0) {
      uStack_2e0 = (undefined8 ****)pppuStack_308;
    }
  }
  else {
    uStack_2e0 = (undefined8 ****)"null";
    if (cStack_2f1 != '\0') {
      uStack_2e0 = &pppuStack_308;
    }
  }
  FUN_10a224324(&uStack_290,&uStack_2e0);
  if ((long)uStack_2a8 < 0) {
    if (plStack_2b0 == (long *)0x0) goto LAB_10abf4c5c;
    func_0x000107c3192c(&uStack_290,CONCAT44(uStack_2b4,iStack_2b8));
LAB_10abf4c7c:
    uVar10 = 1;
  }
  else {
    if (uStack_2a8._7_1_ != '\0') {
      uStack_290 = (undefined8 ****)CONCAT44(uStack_2b4,iStack_2b8);
      plStack_288 = plStack_2b0;
      plStack_280 = uStack_2a8;
      goto LAB_10abf4c7c;
    }
LAB_10abf4c5c:
    uVar10 = 0;
    uStack_290 = (undefined8 ****)((ulong)uStack_290 & 0xffffffffffffff00);
  }
  uStack_278 = CONCAT71(uStack_278._1_7_,uVar10);
  if (cStack_2f1 < '\0') {
    if (plStack_300 == (long *)0x0) goto LAB_10abf4ca8;
    func_0x000107c3192c(&uStack_2e0,pppuStack_308);
LAB_10abf4cc4:
    uStack_2c8 = 1;
  }
  else {
    if (cStack_2f1 != '\0') {
      plStack_2d8 = plStack_300;
      uStack_2e0 = (undefined8 ****)pppuStack_308;
      plStack_2d0 = (long *)CONCAT17(cStack_2f1,uStack_2f8);
      goto LAB_10abf4cc4;
    }
LAB_10abf4ca8:
    uStack_2c8 = 0;
    uStack_2e0 = (undefined8 ****)((ulong)uStack_2e0 & 0xffffffffffffff00);
  }
  FUN_10a234a0c(&uStack_290,&uStack_2e0);
LAB_10abf4fd8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10abf4fdc);
  (*pcVar6)();
}



/* Entry: 10ab7b9d8; end: 10ab7ba57;  */

void FUN_10ab7b9d8(long param_1,ulong param_2)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 0x270) == '\x01') {
    if (0xf < (uint)param_2) {
LAB_10ab7ba54:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab7ba58);
      (*pcVar1)();
    }
    if (*(char *)(param_1 + (param_2 & 0xffffffff) + 0x19c) == '\x01') {
      return;
    }
    _glEnableVertexAttribArray(param_2);
  }
  else {
    _glEnableVertexAttribArray(param_2);
    if (0xf < (uint)param_2) goto LAB_10ab7ba54;
  }
  *(undefined1 *)(param_1 + (param_2 & 0xffffffff) + 0x19c) = 1;
  return;
}



/* Entry: 10ab7ba58; end: 10ab7ba97;  */

void FUN_10ab7ba58(long param_1,ulong *param_2,undefined8 param_3,uint param_4,int param_5,
                  ulong param_6,uint *param_7,long param_8)

{
  long *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  uint *puVar9;
  code *pcVar10;
  int iVar11;
  undefined *puVar12;
  ulong *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  byte bVar17;
  undefined4 uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  undefined8 *puVar25;
  long lVar26;
  long lVar27;
  ulong *puVar28;
  uint *puVar29;
  ulong uVar30;
  uint uVar31;
  int iVar32;
  ulong *puVar33;
  ulong uStack_170;
  ulong uStack_168;
  uint *puStack_160;
  ulong *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined8 uStack_128;
  ulong *puStack_120;
  long lStack_118;
  uint uStack_10c;
  uint *puStack_108;
  uint *puStack_100;
  uint *puStack_f8;
  uint *puStack_f0;
  int iStack_e4;
  long lStack_e0;
  uint *puStack_d8;
  long lStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined1 auStack_89 [9];
  undefined1 *puStack_30;
  code *pcStack_28;
  
  lVar22 = param_1;
  puVar33 = param_2;
  FUN_10ad4ae18();
  if ((*(byte *)(lVar22 + 10) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbecf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glVertexAttribDivisor_11034b8f0)(param_1,param_2);
    return;
  }
  puVar12 = &UNK_10f697a8c;
  FUN_10a00946c();
  pcStack_28 = FUN_10ab7ba98;
  puVar13 = puVar33;
  lStack_118 = param_8;
  uStack_10c = param_4;
  puStack_108 = param_7;
  iStack_e4 = param_5;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((puVar12[0x20] == '\x01') && (*(long *)(puVar12 + 0xb58) != 0)) {
    lVar22 = *(long *)(puVar12 + 0xb58) * 0x68;
    puVar25 = (undefined8 *)(puVar12 + 0xb60);
    do {
      uStack_b0 = (undefined *)*puVar25;
      puVar13 = &uStack_b0;
      FUN_10a197980(puVar12 + 0x7c0,puVar13,&uStack_b0);
      lVar22 = lVar22 + -0x68;
      puVar25 = puVar25 + 0xd;
    } while (lVar22 != 0);
  }
  uVar20 = (*(long *)(puVar12 + 0xef0) - *(long *)(puVar12 + 0xee8) >> 3) * -0x6e25006e25006e25;
  if (uVar20 < (param_6 & 0xffffffff) || uVar20 - (param_6 & 0xffffffff) == 0) goto LAB_10ab7c2b4;
  puVar29 = (uint *)(*(long *)(puVar12 + 0xee8) + (param_6 & 0xffffffff) * 0x1298);
  lStack_e0 = *(long *)(puVar12 + 0xd68);
  uVar3 = *puVar29;
  uVar20 = (ulong)uVar3;
  uVar31 = 0;
  uStack_128 = param_3;
  puStack_120 = puVar33;
  puStack_d8 = puVar29;
  if (uVar3 < puVar29[1] + uVar3) {
    lVar26 = 0;
    puStack_f0 = puVar29 + 0x180;
    puStack_f8 = puVar29 + 0x14f;
    puStack_100 = puVar29 + 0x15f;
    lVar22 = uVar20 * 0x18;
    do {
      lVar23 = *(long *)(puVar12 + 0xf08);
      uVar19 = (*(long *)(puVar12 + 0xf10) - lVar23 >> 3) * -0x5555555555555555;
      if ((uVar19 < uVar20 || uVar19 - uVar20 == 0) ||
         (uVar3 = *(uint *)(lVar23 + lVar22 + 4), uVar19 = (ulong)uVar3, 0xf < uVar3))
      goto LAB_10ab7c2b4;
      lVar27 = *(long *)(puStack_f0 + uVar19 * 2);
      uVar3 = puStack_f8[uVar19];
      uVar6 = puStack_100[uVar19];
      puVar33 = (ulong *)(ulong)uVar6;
      if (lVar27 != lVar26) {
        FUN_10a303694(1);
        FUN_10a5bc294();
        lVar26 = lVar27;
      }
      uVar4 = *(uint *)(lVar23 + lVar22);
      lVar27 = lStack_e0;
      FUN_10ab7b9d8(lStack_e0,uVar4);
      puVar29 = puStack_d8;
      iVar11 = (int)lVar27;
      uVar5 = ((uint *)(lVar23 + lVar22))[2];
      if ((int)uVar5 < 4) {
        if (uVar5 == 1) {
          uVar18 = 0x1400;
        }
        else if (uVar5 == 2) {
          uVar18 = 0x1401;
        }
        else {
          if (uVar5 != 3) {
LAB_10ab7c28c:
            FUN_10a00946c(&UNK_10f697a76);
            goto LAB_10ab7c298;
          }
          uVar18 = 0x1402;
        }
      }
      else if (uVar5 == 4) {
        uVar18 = 0x1403;
      }
      else if (uVar5 == 5) {
        uVar18 = 0x1406;
      }
      else {
        if (uVar5 != 6) goto LAB_10ab7c28c;
        FUN_10ad4bd78();
        uVar18 = 0x140b;
        if (iVar11 < 3000) {
          uVar18 = 0x8d61;
        }
      }
      lVar23 = lVar23 + lVar22;
      puVar13 = (ulong *)(ulong)*(uint *)(lVar23 + 0x10);
      _glVertexAttribPointer
                (uVar4,puVar13,uVar18,*(undefined1 *)(lVar23 + 0x14),uVar3,
                 *(int *)(lVar23 + 0xc) + uVar3 * iStack_e4);
      if (uVar6 != 0) {
        FUN_10ab7ba58(uVar4);
        puVar13 = puVar33;
      }
      uVar31 = 1 << (ulong)(uVar4 & 0x1f) | uVar31;
      uVar20 = uVar20 + 1;
      lVar22 = lVar22 + 0x18;
    } while (uVar20 < puVar29[1] + *puVar29);
  }
  lVar22 = lStack_e0;
  puVar33 = puStack_120;
  uVar16 = uStack_128;
  if (*(int *)(puVar12 + 0x40) < 0xa8) {
    lVar26 = *(long *)(*(long *)(puVar29 + 0x170) + 0x18);
    FUN_10ab91b60(lVar26);
    for (plVar24 = *(long **)(lVar26 + 0x28); plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
      uVar3 = *(uint *)(plVar24 + 8);
      if ((uVar31 >> (ulong)(uVar3 & 0x1f) & 1) == 0) {
        puVar13 = (ulong *)(ulong)uVar3;
        func_0x00010a5bc348(lVar22);
        _glVertexAttrib4f(0x3f800000,0x3f800000,0x3f800000,0x3f800000,(ulong *)(ulong)uVar3);
      }
    }
  }
  puVar28 = (ulong *)0x0;
  do {
    if (((uVar31 >> (ulong)((uint)puVar28 & 0x1f) & 1) == 0) &&
       (*(char *)((long)puVar28 + lVar22 + 0x19c) == '\x01')) {
      puVar13 = puVar28;
      func_0x00010a5bc348(lVar22);
    }
    uVar3 = uStack_10c;
    puVar28 = (ulong *)((long)puVar28 + 1);
  } while (puVar28 != (ulong *)0x10);
  cVar7 = *(char *)(*(long *)(lStack_118 + 0x40) + 0x2a);
  uVar31 = puVar29[0xb0];
  if ((int)uVar31 < 2) {
    if (uVar31 == 0) {
      uVar20 = (ulong)uStack_10c / 3;
      iVar11 = 4;
    }
    else {
      if (uVar31 != 1) {
LAB_10ab7c2b8:
        puVar12 = &UNK_10f697adc;
        FUN_10a00946c();
        FUN_10a31bc68(&uStack_b0);
        func_0x00010abd86b8(&lStack_d0);
        func_0x00010a0616d0(&uStack_c0);
        puVar14 = puVar12;
        __Unwind_Resume();
        lStack_150 = lVar22;
        pcStack_138 = FUN_10ab7c318;
        uVar19 = *puVar13;
        puVar15 = puVar14 + 0x30;
        uVar20 = uVar19;
        puStack_160 = puVar29;
        puStack_158 = puVar28;
        puStack_148 = puVar12;
        ppuStack_140 = &puStack_30;
        FUN_10abd9efc();
        if ((uVar20 & 1) != 0) {
          *(ulong *)(*(long *)(puVar14 + 0x38) + (long)puVar15 * 8) = uVar19;
          func_0x00010a1759fc(puVar14 + 0xe0,puVar13);
        }
        puVar12 = puVar14 + 0x50;
        uVar20 = uVar19;
        FUN_10abd9efc();
        if ((uVar20 & 1) != 0) {
          *(ulong *)(*(long *)(puVar14 + 0x58) + (long)puVar12 * 8) = uVar19;
          uStack_168 = puVar13[1];
          uStack_170 = *puVar13;
          if (puVar13[1] != 0) {
            plVar24 = (long *)(puVar13[1] + 0x10);
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar8) {
                *plVar24 = *plVar24 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          func_0x00010aba31b4(puVar14,&uStack_170);
          if (uStack_168 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          *(undefined1 *)(uVar19 + 0x18) = 1;
        }
        return;
      }
      uVar20 = (ulong)(uStack_10c - 2);
      iVar11 = 5;
    }
  }
  else {
    uVar20 = (ulong)uStack_10c;
    if (uVar31 == 2) {
      iVar11 = 0;
    }
    else if (uVar31 == 3) {
      uVar20 = (ulong)(uStack_10c >> 1);
      iVar11 = 1;
    }
    else {
      if (uVar31 != 4) goto LAB_10ab7c2b8;
      uVar20 = (ulong)(uStack_10c - 1);
      iVar11 = 3;
    }
  }
  if (*(char *)(lStack_118 + 0x61) == '\x01') {
    uVar31 = puStack_108[1];
    uStack_b0 = (undefined *)CONCAT44(uStack_b0._4_4_,puStack_108[2]);
    lVar22 = *(long *)(*(long *)(puVar29 + 0x4a2) + 0xb8);
    if (lVar22 != 0) {
      lVar26 = *(long *)(*(long *)(puVar29 + 0x4a2) + 0x18);
      func_0x00010ab805d4(*(undefined8 *)(lVar26 + 0x90),*(undefined8 *)(lVar26 + 0x98),
                          *(undefined4 *)(lVar22 + 0x10),&uStack_b0);
    }
  }
  else {
    uVar31 = *puStack_108;
  }
  lVar22 = *(long *)(*(long *)(puVar29 + 0x4a2) + 0xc0);
  if (lVar22 != 0) {
    uStack_b0 = (undefined *)CONCAT44((float)(uVar31 >> (cVar7 == '\x01')),(float)uVar20);
    uStack_a8 = (ulong)(uint)(float)uVar3;
    lVar26 = *(long *)(*(long *)(puVar29 + 0x4a2) + 0x18);
    func_0x00010ab80910(*(undefined8 *)(lVar26 + 0x90),*(undefined8 *)(lVar26 + 0x98),
                        *(undefined4 *)(lVar22 + 0x10),&uStack_b0);
  }
  lVar22 = lStack_e0;
  uStack_c0 = puVar33[7];
  plStack_b8 = (long *)puVar33[8];
  if (plStack_b8 != (long *)0x0) {
    plVar24 = plStack_b8 + 1;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar8) {
        *plVar24 = *plVar24 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  iVar32 = (int)uVar16;
  if (uStack_c0 == 0) {
    if ((int)*puStack_108 < 2) {
      FUN_10ab7c3e4(*(undefined4 *)(lStack_e0 + 0x278),iVar11,uVar16,uVar3);
    }
    else {
      FUN_10a30478c(lStack_e0,iVar11,uVar16,uVar3);
    }
    goto LAB_10ab7c0f0;
  }
  FUN_10ab7c318(puVar12 + 0x1250,&uStack_c0);
  plVar24 = plStack_b8;
  if (plStack_b8 == (long *)0x0) {
    lStack_d0 = 0;
    if (uStack_c0 != 0) {
      lStack_d0 = uStack_c0 - 0x18;
    }
    plStack_c8 = (long *)0x0;
  }
  else {
    plVar1 = plStack_b8 + 1;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = *plVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    lStack_d0 = 0;
    if (uStack_c0 != 0) {
      lStack_d0 = uStack_c0 - 0x18;
    }
    plStack_c8 = plStack_b8;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = *plVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    do {
      lVar26 = *plVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar26 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
    }
  }
  FUN_10a303694(1);
  FUN_10a5bc294();
  (**(code **)(*puVar33 + 0x20))(puVar33);
  puVar13 = puVar33;
  (**(code **)(*puVar33 + 0x28))();
  (**(code **)(*puVar13 + 0x20))();
  uVar31 = (uint)puVar33[0x18];
  if ((uVar31 == 4) && (*(int *)(lVar22 + 0x1f0) < 3000)) {
LAB_10ab7c298:
    FUN_10a00946c(&UNK_10f69460b);
    goto LAB_10ab7c2b4;
  }
  if ((int)*puStack_108 < 2) {
    if (uVar31 == 2) {
      uVar16 = 0x1403;
    }
    else {
      if (uVar31 != 4) goto LAB_10ab7c2a8;
      uVar16 = 0x1405;
    }
    if ((*(byte *)(lVar22 + 0x278) & 1) == 0) {
      _glDrawElements(iVar11,uStack_10c,uVar16,(long)iVar32);
    }
    else {
      uStack_b0 = &UNK_10f697b31;
      uStack_a8 = 0xe;
      uStack_a0 = 0;
      uStack_98 = 0;
      FUN_10a31bca4(1,auStack_89,0,0);
      _glDrawElements(iVar11,uStack_10c,uVar16,(long)iVar32);
      __ZSt19uncaught_exceptionsv();
      FUN_10a31bf24(iVar11 == 0,&uStack_b0,uStack_a0,uStack_98);
    }
  }
  else {
    if (uVar31 == 2) {
      uVar16 = 0x1403;
    }
    else {
      if (uVar31 != 4) {
LAB_10ab7c2a8:
        FUN_10a00946c(&UNK_10f697b1e);
LAB_10ab7c2b4:
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10ab7c2b8);
        (*pcVar10)();
      }
      uVar16 = 0x1405;
    }
    FUN_10a304628(lVar22,iVar11,uVar3,uVar16,(long)iVar32);
  }
  plVar24 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar1 = plStack_c8 + 1;
    do {
      lVar22 = *plVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar22 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
    }
  }
LAB_10ab7c0f0:
  puVar9 = puStack_d8;
  if ((puVar29[0x14e] != 0) && (puStack_d8[0x15f] != 0)) {
    uVar3 = *puStack_d8;
    uVar19 = (ulong)uVar3;
    uVar31 = puStack_d8[1];
    if (uVar3 < uVar31 + uVar3) {
      lVar22 = uVar19 * 0x18;
      uVar30 = uVar19;
      do {
        uVar21 = (*(long *)(puVar12 + 0xf10) - *(long *)(puVar12 + 0xf08) >> 3) *
                 -0x5555555555555555;
        if (uVar21 < uVar30 || uVar21 - uVar30 == 0) goto LAB_10ab7c2b4;
        puVar2 = (undefined4 *)(*(long *)(puVar12 + 0xf08) + lVar22);
        uVar3 = puVar2[1];
        if (0xf < uVar3) goto LAB_10ab7c2b4;
        if (puVar9[(ulong)uVar3 + 0x15f] != 0) {
          FUN_10ab7ba58(*puVar2,0);
          uVar19 = (ulong)*puStack_d8;
          uVar31 = puStack_d8[1];
        }
        uVar30 = uVar30 + 1;
        lVar22 = lVar22 + 0x18;
      } while (uVar30 < (int)uVar19 + uVar31);
    }
  }
  bVar17 = 0;
  if (*(long *)(puStack_d8 + 0x10a) != 0) {
    bVar17 = (byte)puStack_d8[0xca];
  }
  FUN_10ad5f570(*(undefined8 *)(puVar12 + 0x848),bVar17 & 1);
  plVar24 = *(long **)(puVar12 + 0x848);
  puVar13 = puVar33;
  (**(code **)(*puVar33 + 0x28))();
  (**(code **)(*puVar13 + 0x20))();
  puVar28 = puVar33;
  (**(code **)(*puVar33 + 0x20))();
  if ((iVar32 == 0) && (lVar22 = *plVar24, lVar22 != 0)) {
    iVar11 = 0;
    if ((ulong)(uint)*puVar28 != 0) {
      iVar11 = (int)((ulong)puVar13 / (ulong)(uint)*puVar28);
    }
    *(int *)(lVar22 + 8) = *(int *)(lVar22 + 8) + iVar11;
  }
  plVar24 = *(long **)(puVar12 + 0x848);
  lVar22 = *plVar24;
  if (lVar22 != 0) {
    uVar3 = *(int *)(lVar22 + 0x10) + (int)uVar20;
    uStack_b0 = (undefined *)(ulong)uVar3;
    *(uint *)(lVar22 + 0x10) = uVar3;
    FUN_10ad5f894(&lStack_d0,&uStack_b0);
    plVar24 = *(long **)(puVar12 + 0x848);
  }
  FUN_10ad5f510(plVar24,puVar33[1],puVar33[2]);
  plVar24 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar1 = plStack_b8 + 1;
    do {
      lVar22 = *plVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar22 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
    }
  }
  return;
}



/* Entry: 10ab7ba98; end: 10ab7c317;  */

void FUN_10ab7ba98(long param_1,ulong *param_2,undefined8 param_3,uint param_4,int param_5,
                  uint param_6,uint *param_7,long param_8)

{
  long *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  uint *puVar9;
  code *pcVar10;
  int iVar11;
  ulong *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  byte bVar17;
  undefined4 uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  undefined8 *puVar25;
  long lVar26;
  long lVar27;
  ulong *puVar28;
  uint *puVar29;
  ulong uVar30;
  uint uVar31;
  int iVar32;
  ulong *puVar33;
  ulong uStack_150;
  ulong uStack_148;
  uint *puStack_140;
  ulong *puStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_108;
  ulong *puStack_100;
  long lStack_f8;
  uint uStack_ec;
  uint *puStack_e8;
  uint *puStack_e0;
  uint *puStack_d8;
  uint *puStack_d0;
  int iStack_c4;
  long lStack_c0;
  uint *puStack_b8;
  long lStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_69 [9];
  
  puVar12 = param_2;
  lStack_f8 = param_8;
  uStack_ec = param_4;
  puStack_e8 = param_7;
  iStack_c4 = param_5;
  if ((*(char *)(param_1 + 0x20) == '\x01') && (*(long *)(param_1 + 0xb58) != 0)) {
    lVar22 = *(long *)(param_1 + 0xb58) * 0x68;
    puVar25 = (undefined8 *)(param_1 + 0xb60);
    do {
      uStack_90 = (undefined *)*puVar25;
      puVar12 = &uStack_90;
      FUN_10a197980(param_1 + 0x7c0,puVar12,&uStack_90);
      lVar22 = lVar22 + -0x68;
      puVar25 = puVar25 + 0xd;
    } while (lVar22 != 0);
  }
  uVar20 = (*(long *)(param_1 + 0xef0) - *(long *)(param_1 + 0xee8) >> 3) * -0x6e25006e25006e25;
  if (uVar20 < param_6 || uVar20 - param_6 == 0) goto LAB_10ab7c2b4;
  puVar29 = (uint *)(*(long *)(param_1 + 0xee8) + (ulong)param_6 * 0x1298);
  lStack_c0 = *(long *)(param_1 + 0xd68);
  uVar3 = *puVar29;
  uVar20 = (ulong)uVar3;
  uVar31 = 0;
  uStack_108 = param_3;
  puStack_100 = param_2;
  puStack_b8 = puVar29;
  if (uVar3 < puVar29[1] + uVar3) {
    lVar26 = 0;
    puStack_d0 = puVar29 + 0x180;
    puStack_d8 = puVar29 + 0x14f;
    puStack_e0 = puVar29 + 0x15f;
    lVar22 = uVar20 * 0x18;
    do {
      lVar23 = *(long *)(param_1 + 0xf08);
      uVar19 = (*(long *)(param_1 + 0xf10) - lVar23 >> 3) * -0x5555555555555555;
      if ((uVar19 < uVar20 || uVar19 - uVar20 == 0) ||
         (uVar3 = *(uint *)(lVar23 + lVar22 + 4), uVar19 = (ulong)uVar3, 0xf < uVar3))
      goto LAB_10ab7c2b4;
      lVar27 = *(long *)(puStack_d0 + uVar19 * 2);
      uVar3 = puStack_d8[uVar19];
      uVar6 = puStack_e0[uVar19];
      puVar33 = (ulong *)(ulong)uVar6;
      if (lVar27 != lVar26) {
        FUN_10a303694(1);
        FUN_10a5bc294();
        lVar26 = lVar27;
      }
      uVar4 = *(uint *)(lVar23 + lVar22);
      lVar27 = lStack_c0;
      FUN_10ab7b9d8(lStack_c0,uVar4);
      puVar29 = puStack_b8;
      iVar11 = (int)lVar27;
      uVar5 = ((uint *)(lVar23 + lVar22))[2];
      if ((int)uVar5 < 4) {
        if (uVar5 == 1) {
          uVar18 = 0x1400;
        }
        else if (uVar5 == 2) {
          uVar18 = 0x1401;
        }
        else {
          if (uVar5 != 3) {
LAB_10ab7c28c:
            FUN_10a00946c(&UNK_10f697a76);
            goto LAB_10ab7c298;
          }
          uVar18 = 0x1402;
        }
      }
      else if (uVar5 == 4) {
        uVar18 = 0x1403;
      }
      else if (uVar5 == 5) {
        uVar18 = 0x1406;
      }
      else {
        if (uVar5 != 6) goto LAB_10ab7c28c;
        FUN_10ad4bd78();
        uVar18 = 0x140b;
        if (iVar11 < 3000) {
          uVar18 = 0x8d61;
        }
      }
      lVar23 = lVar23 + lVar22;
      puVar12 = (ulong *)(ulong)*(uint *)(lVar23 + 0x10);
      _glVertexAttribPointer
                (uVar4,puVar12,uVar18,*(undefined1 *)(lVar23 + 0x14),uVar3,
                 *(int *)(lVar23 + 0xc) + uVar3 * iStack_c4);
      if (uVar6 != 0) {
        FUN_10ab7ba58(uVar4);
        puVar12 = puVar33;
      }
      uVar31 = 1 << (ulong)(uVar4 & 0x1f) | uVar31;
      uVar20 = uVar20 + 1;
      lVar22 = lVar22 + 0x18;
    } while (uVar20 < puVar29[1] + *puVar29);
  }
  lVar22 = lStack_c0;
  puVar33 = puStack_100;
  uVar16 = uStack_108;
  if (*(int *)(param_1 + 0x40) < 0xa8) {
    lVar26 = *(long *)(*(long *)(puVar29 + 0x170) + 0x18);
    FUN_10ab91b60(lVar26);
    for (plVar24 = *(long **)(lVar26 + 0x28); plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
      uVar3 = *(uint *)(plVar24 + 8);
      if ((uVar31 >> (ulong)(uVar3 & 0x1f) & 1) == 0) {
        puVar12 = (ulong *)(ulong)uVar3;
        func_0x00010a5bc348(lVar22);
        _glVertexAttrib4f(0x3f800000,0x3f800000,0x3f800000,0x3f800000,(ulong *)(ulong)uVar3);
      }
    }
  }
  puVar28 = (ulong *)0x0;
  do {
    if (((uVar31 >> (ulong)((uint)puVar28 & 0x1f) & 1) == 0) &&
       (*(char *)((long)puVar28 + lVar22 + 0x19c) == '\x01')) {
      puVar12 = puVar28;
      func_0x00010a5bc348(lVar22);
    }
    uVar3 = uStack_ec;
    puVar28 = (ulong *)((long)puVar28 + 1);
  } while (puVar28 != (ulong *)0x10);
  cVar7 = *(char *)(*(long *)(lStack_f8 + 0x40) + 0x2a);
  uVar31 = puVar29[0xb0];
  if ((int)uVar31 < 2) {
    if (uVar31 == 0) {
      uVar20 = (ulong)uStack_ec / 3;
      iVar11 = 4;
    }
    else {
      if (uVar31 != 1) {
LAB_10ab7c2b8:
        puVar13 = &UNK_10f697adc;
        FUN_10a00946c();
        FUN_10a31bc68(&uStack_90);
        func_0x00010abd86b8(&lStack_b0);
        func_0x00010a0616d0(&uStack_a0);
        puVar14 = puVar13;
        __Unwind_Resume();
        lStack_130 = lVar22;
        pcStack_118 = FUN_10ab7c318;
        uVar19 = *puVar12;
        puVar15 = puVar14 + 0x30;
        uVar20 = uVar19;
        puStack_140 = puVar29;
        puStack_138 = puVar28;
        puStack_128 = puVar13;
        puStack_120 = &stack0xfffffffffffffff0;
        FUN_10abd9efc();
        if ((uVar20 & 1) != 0) {
          *(ulong *)(*(long *)(puVar14 + 0x38) + (long)puVar15 * 8) = uVar19;
          func_0x00010a1759fc(puVar14 + 0xe0,puVar12);
        }
        puVar13 = puVar14 + 0x50;
        uVar20 = uVar19;
        FUN_10abd9efc();
        if ((uVar20 & 1) != 0) {
          *(ulong *)(*(long *)(puVar14 + 0x58) + (long)puVar13 * 8) = uVar19;
          uStack_148 = puVar12[1];
          uStack_150 = *puVar12;
          if (puVar12[1] != 0) {
            plVar24 = (long *)(puVar12[1] + 0x10);
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar8) {
                *plVar24 = *plVar24 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          func_0x00010aba31b4(puVar14,&uStack_150);
          if (uStack_148 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          *(undefined1 *)(uVar19 + 0x18) = 1;
        }
        return;
      }
      uVar20 = (ulong)(uStack_ec - 2);
      iVar11 = 5;
    }
  }
  else {
    uVar20 = (ulong)uStack_ec;
    if (uVar31 == 2) {
      iVar11 = 0;
    }
    else if (uVar31 == 3) {
      uVar20 = (ulong)(uStack_ec >> 1);
      iVar11 = 1;
    }
    else {
      if (uVar31 != 4) goto LAB_10ab7c2b8;
      uVar20 = (ulong)(uStack_ec - 1);
      iVar11 = 3;
    }
  }
  if (*(char *)(lStack_f8 + 0x61) == '\x01') {
    uVar31 = puStack_e8[1];
    uStack_90 = (undefined *)CONCAT44(uStack_90._4_4_,puStack_e8[2]);
    lVar22 = *(long *)(*(long *)(puVar29 + 0x4a2) + 0xb8);
    if (lVar22 != 0) {
      lVar26 = *(long *)(*(long *)(puVar29 + 0x4a2) + 0x18);
      func_0x00010ab805d4(*(undefined8 *)(lVar26 + 0x90),*(undefined8 *)(lVar26 + 0x98),
                          *(undefined4 *)(lVar22 + 0x10),&uStack_90);
    }
  }
  else {
    uVar31 = *puStack_e8;
  }
  lVar22 = *(long *)(*(long *)(puVar29 + 0x4a2) + 0xc0);
  if (lVar22 != 0) {
    uStack_90 = (undefined *)CONCAT44((float)(uVar31 >> (cVar7 == '\x01')),(float)uVar20);
    uStack_88 = (ulong)(uint)(float)uVar3;
    lVar26 = *(long *)(*(long *)(puVar29 + 0x4a2) + 0x18);
    func_0x00010ab80910(*(undefined8 *)(lVar26 + 0x90),*(undefined8 *)(lVar26 + 0x98),
                        *(undefined4 *)(lVar22 + 0x10),&uStack_90);
  }
  lVar22 = lStack_c0;
  uStack_a0 = puVar33[7];
  plStack_98 = (long *)puVar33[8];
  if (plStack_98 != (long *)0x0) {
    plVar24 = plStack_98 + 1;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar8) {
        *plVar24 = *plVar24 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  iVar32 = (int)uVar16;
  if (uStack_a0 == 0) {
    if ((int)*puStack_e8 < 2) {
      FUN_10ab7c3e4(*(undefined4 *)(lStack_c0 + 0x278),iVar11,uVar16,uVar3);
    }
    else {
      FUN_10a30478c(lStack_c0,iVar11,uVar16,uVar3);
    }
    goto LAB_10ab7c0f0;
  }
  FUN_10ab7c318(param_1 + 0x1250,&uStack_a0);
  plVar24 = plStack_98;
  if (plStack_98 == (long *)0x0) {
    lStack_b0 = 0;
    if (uStack_a0 != 0) {
      lStack_b0 = uStack_a0 - 0x18;
    }
    plStack_a8 = (long *)0x0;
  }
  else {
    plVar1 = plStack_98 + 1;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = *plVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    lStack_b0 = 0;
    if (uStack_a0 != 0) {
      lStack_b0 = uStack_a0 - 0x18;
    }
    plStack_a8 = plStack_98;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = *plVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    do {
      lVar26 = *plVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar26 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
    }
  }
  FUN_10a303694(1);
  FUN_10a5bc294();
  (**(code **)(*puVar33 + 0x20))(puVar33);
  puVar12 = puVar33;
  (**(code **)(*puVar33 + 0x28))();
  (**(code **)(*puVar12 + 0x20))();
  uVar31 = (uint)puVar33[0x18];
  if ((uVar31 == 4) && (*(int *)(lVar22 + 0x1f0) < 3000)) {
LAB_10ab7c298:
    FUN_10a00946c(&UNK_10f69460b);
    goto LAB_10ab7c2b4;
  }
  if ((int)*puStack_e8 < 2) {
    if (uVar31 == 2) {
      uVar16 = 0x1403;
    }
    else {
      if (uVar31 != 4) goto LAB_10ab7c2a8;
      uVar16 = 0x1405;
    }
    if ((*(byte *)(lVar22 + 0x278) & 1) == 0) {
      _glDrawElements(iVar11,uStack_ec,uVar16,(long)iVar32);
    }
    else {
      uStack_90 = &UNK_10f697b31;
      uStack_88 = 0xe;
      uStack_80 = 0;
      uStack_78 = 0;
      FUN_10a31bca4(1,auStack_69,0,0);
      _glDrawElements(iVar11,uStack_ec,uVar16,(long)iVar32);
      __ZSt19uncaught_exceptionsv();
      FUN_10a31bf24(iVar11 == 0,&uStack_90,uStack_80,uStack_78);
    }
  }
  else {
    if (uVar31 == 2) {
      uVar16 = 0x1403;
    }
    else {
      if (uVar31 != 4) {
LAB_10ab7c2a8:
        FUN_10a00946c(&UNK_10f697b1e);
LAB_10ab7c2b4:
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10ab7c2b8);
        (*pcVar10)();
      }
      uVar16 = 0x1405;
    }
    FUN_10a304628(lVar22,iVar11,uVar3,uVar16,(long)iVar32);
  }
  plVar24 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar1 = plStack_a8 + 1;
    do {
      lVar22 = *plVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar22 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
    }
  }
LAB_10ab7c0f0:
  puVar9 = puStack_b8;
  if ((puVar29[0x14e] != 0) && (puStack_b8[0x15f] != 0)) {
    uVar3 = *puStack_b8;
    uVar19 = (ulong)uVar3;
    uVar31 = puStack_b8[1];
    if (uVar3 < uVar31 + uVar3) {
      lVar22 = uVar19 * 0x18;
      uVar30 = uVar19;
      do {
        uVar21 = (*(long *)(param_1 + 0xf10) - *(long *)(param_1 + 0xf08) >> 3) *
                 -0x5555555555555555;
        if (uVar21 < uVar30 || uVar21 - uVar30 == 0) goto LAB_10ab7c2b4;
        puVar2 = (undefined4 *)(*(long *)(param_1 + 0xf08) + lVar22);
        uVar3 = puVar2[1];
        if (0xf < uVar3) goto LAB_10ab7c2b4;
        if (puVar9[(ulong)uVar3 + 0x15f] != 0) {
          FUN_10ab7ba58(*puVar2,0);
          uVar19 = (ulong)*puStack_b8;
          uVar31 = puStack_b8[1];
        }
        uVar30 = uVar30 + 1;
        lVar22 = lVar22 + 0x18;
      } while (uVar30 < (int)uVar19 + uVar31);
    }
  }
  bVar17 = 0;
  if (*(long *)(puStack_b8 + 0x10a) != 0) {
    bVar17 = (byte)puStack_b8[0xca];
  }
  FUN_10ad5f570(*(undefined8 *)(param_1 + 0x848),bVar17 & 1);
  plVar24 = *(long **)(param_1 + 0x848);
  puVar12 = puVar33;
  (**(code **)(*puVar33 + 0x28))();
  (**(code **)(*puVar12 + 0x20))();
  puVar28 = puVar33;
  (**(code **)(*puVar33 + 0x20))();
  if ((iVar32 == 0) && (lVar22 = *plVar24, lVar22 != 0)) {
    iVar11 = 0;
    if ((ulong)(uint)*puVar28 != 0) {
      iVar11 = (int)((ulong)puVar12 / (ulong)(uint)*puVar28);
    }
    *(int *)(lVar22 + 8) = *(int *)(lVar22 + 8) + iVar11;
  }
  plVar24 = *(long **)(param_1 + 0x848);
  lVar22 = *plVar24;
  if (lVar22 != 0) {
    uVar3 = *(int *)(lVar22 + 0x10) + (int)uVar20;
    uStack_90 = (undefined *)(ulong)uVar3;
    *(uint *)(lVar22 + 0x10) = uVar3;
    FUN_10ad5f894(&lStack_b0,&uStack_90);
    plVar24 = *(long **)(param_1 + 0x848);
  }
  FUN_10ad5f510(plVar24,puVar33[1],puVar33[2]);
  plVar24 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar1 = plStack_98 + 1;
    do {
      lVar22 = *plVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar22 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
    }
  }
  return;
}



/* Entry: 10ab7c318; end: 10ab7c3e3;  */

void FUN_10ab7c318(long param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar6 = *param_2;
  lVar4 = param_1 + 0x30;
  uVar5 = uVar6;
  FUN_10abd9efc();
  if ((uVar5 & 1) != 0) {
    *(ulong *)(*(long *)(param_1 + 0x38) + lVar4 * 8) = uVar6;
    func_0x00010a1759fc(param_1 + 0xe0,param_2);
  }
  lVar4 = param_1 + 0x50;
  uVar5 = uVar6;
  FUN_10abd9efc();
  if ((uVar5 & 1) != 0) {
    *(ulong *)(*(long *)(param_1 + 0x58) + lVar4 * 8) = uVar6;
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
    if (param_2[1] != 0) {
      plVar1 = (long *)(param_2[1] + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x00010aba31b4(param_1,&uStack_40);
    if (uStack_38 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    *(undefined1 *)(uVar6 + 0x18) = 1;
  }
  return;
}



/* Entry: 10ab7c3e4; end: 10ab7c4ab;  */

void FUN_10ab7c3e4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined1 uStack_31;
  
  if ((param_1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glDrawArrays_11034b530)(param_2,param_3,param_4);
    return;
  }
  puStack_58 = &UNK_10f697b40;
  uStack_50 = 0xc;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a31bca4(1,&uStack_31,0,0);
  _glDrawArrays(param_2,param_3,param_4);
  iVar1 = (int)param_2;
  __ZSt19uncaught_exceptionsv();
  FUN_10a31bf24(iVar1 == 0,&puStack_58,uStack_48,uStack_40);
  return;
}



/* Entry: 10ab7c4ac; end: 10ab7cdd7;  */

void FUN_10ab7c4ac(long param_1,long param_2,float *param_3,ulong param_4,ulong param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  byte bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  code *pcVar16;
  bool bVar17;
  long *plVar18;
  undefined *puVar19;
  long *plVar20;
  float *pfVar21;
  undefined8 uVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  float fVar37;
  undefined8 uVar38;
  undefined4 extraout_s1;
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined8 uStack_880;
  undefined8 uStack_878;
  float afStack_870 [2];
  undefined8 uStack_868;
  float afStack_860 [2];
  undefined8 uStack_858;
  float afStack_850 [2];
  undefined8 uStack_848;
  float afStack_800 [32];
  undefined8 auStack_780 [6];
  undefined4 auStack_750 [20];
  undefined8 auStack_700 [6];
  float afStack_6d0 [20];
  undefined8 uStack_680;
  undefined4 uStack_678;
  undefined8 uStack_674;
  undefined4 uStack_66c;
  undefined8 uStack_668;
  undefined4 auStack_660 [28];
  undefined8 auStack_5f0 [6];
  undefined4 auStack_5c0 [20];
  undefined8 auStack_570 [6];
  float afStack_540 [20];
  float afStack_4f0 [2];
  undefined8 uStack_4e8;
  float afStack_4e0 [2];
  undefined8 uStack_4d8;
  float afStack_4d0 [2];
  undefined8 uStack_4c8;
  float afStack_4c0 [20];
  float afStack_470 [32];
  undefined8 auStack_3f0 [6];
  float afStack_3c0 [20];
  undefined8 auStack_370 [6];
  float afStack_340 [20];
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  undefined8 uStack_2bc;
  undefined8 uStack_2b4;
  float fStack_2ac;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  undefined4 uStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  undefined4 uStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  undefined4 uStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  undefined4 uStack_22c;
  undefined8 auStack_228 [6];
  undefined4 auStack_1f8 [20];
  undefined8 auStack_1a8 [8];
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 uStack_98;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  ulong uStack_7c;
  undefined4 uStack_74;
  
  plVar18 = (long *)(param_1 + 0x20);
  pfVar21 = param_3;
  FUN_10a01f140();
  lVar24 = *(long *)(param_2 + 0xcb8);
  if (*(long *)(lVar24 + 0xe8) == *(long *)(lVar24 + 0xf0)) {
LAB_10ab7c790:
    uVar28 = 0;
  }
  else {
    uVar34 = plVar18[4] - plVar18[3];
    uVar28 = (*(long *)(lVar24 + 0xf0) - *(long *)(lVar24 + 0xe8) >> 3) * -0x71c71c71c71c71c7;
    if (uVar34 <= uVar28) {
      uVar28 = uVar34;
    }
    if (plVar18[4] == plVar18[3]) goto LAB_10ab7c790;
    uVar34 = 0;
    lVar24 = 0x40;
    do {
      if ((ulong)(plVar18[4] - plVar18[3]) <= uVar34) goto LAB_10ab7cdbc;
      uVar29 = (ulong)*(byte *)(plVar18[3] + uVar34);
      uVar25 = (*(long *)(param_1 + 0x160) - *(long *)(param_1 + 0x158) >> 3) * -0x7063e7063e7063e7;
      if (uVar25 < uVar29 || uVar25 - uVar29 == 0) goto LAB_10ab7cdbc;
      lVar36 = *(long *)(param_2 + 0xcb8);
      lVar26 = *(long *)(lVar36 + 0xe8);
      uVar25 = (*(long *)(lVar36 + 0xf0) - lVar26 >> 3) * -0x71c71c71c71c71c7;
      if (uVar25 < uVar34 || uVar25 - uVar34 == 0) goto LAB_10ab7cdcc;
      lVar35 = *(long *)(param_1 + 0x158) + uVar29 * 0x148;
      lVar30 = *(long *)(lVar26 + lVar24 + -0x40);
      if (lVar30 != 0) {
        param_4 = (ulong)(*(float *)(lVar35 + 0x18) != 0.0);
        pfVar21 = (float *)(ulong)*(uint *)(lVar30 + 0x10);
        param_3 = *(float **)(*(long *)(lVar36 + 0x18) + 0x98);
        FUN_10ab80514(*(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x90));
        lVar26 = *(long *)(lVar36 + 0xe8);
        uVar25 = (*(long *)(lVar36 + 0xf0) - lVar26 >> 3) * -0x71c71c71c71c71c7;
      }
      if (uVar25 <= uVar34) goto LAB_10ab7cdbc;
      lVar30 = *(long *)(lVar26 + lVar24 + -0x38);
      if (lVar30 != 0) {
        pfVar21 = (float *)(ulong)*(uint *)(lVar30 + 0x10);
        param_3 = *(float **)(*(long *)(lVar36 + 0x18) + 0x98);
        param_4 = lVar35 + 0x18;
        func_0x00010ab80694(*(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x90));
        lVar26 = *(long *)(lVar36 + 0xe8);
        uVar25 = (*(long *)(lVar36 + 0xf0) - lVar26 >> 3) * -0x71c71c71c71c71c7;
      }
      if (uVar25 <= uVar34) goto LAB_10ab7cdbc;
      lVar30 = *(long *)(lVar26 + lVar24 + -0x30);
      if (lVar30 != 0) {
        pfVar21 = (float *)(ulong)*(uint *)(lVar30 + 0x10);
        param_3 = *(float **)(*(long *)(lVar36 + 0x18) + 0x98);
        param_4 = lVar35 + 0x1c;
        func_0x00010ab80694(*(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x90));
        lVar26 = *(long *)(lVar36 + 0xe8);
        uVar25 = (*(long *)(lVar36 + 0xf0) - lVar26 >> 3) * -0x71c71c71c71c71c7;
      }
      if (uVar25 <= uVar34) goto LAB_10ab7cdbc;
      lVar30 = *(long *)(lVar26 + lVar24 + -0x28);
      if (lVar30 != 0) {
        pfVar21 = (float *)(ulong)*(uint *)(lVar30 + 0x10);
        param_3 = *(float **)(*(long *)(lVar36 + 0x18) + 0x98);
        param_4 = lVar35 + 0x20;
        func_0x00010ab80694(*(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x90));
        lVar26 = *(long *)(lVar36 + 0xe8);
        uVar25 = (*(long *)(lVar36 + 0xf0) - lVar26 >> 3) * -0x71c71c71c71c71c7;
      }
      if (uVar25 <= uVar34) goto LAB_10ab7cdbc;
      lVar30 = *(long *)(lVar26 + lVar24 + -0x20);
      if (lVar30 != 0) {
        pfVar21 = (float *)(ulong)*(uint *)(lVar30 + 0x10);
        param_3 = *(float **)(*(long *)(lVar36 + 0x18) + 0x98);
        param_4 = lVar35 + 0x24;
        func_0x00010ab80694(*(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x90));
        lVar26 = *(long *)(lVar36 + 0xe8);
        uVar25 = (*(long *)(lVar36 + 0xf0) - lVar26 >> 3) * -0x71c71c71c71c71c7;
      }
      if (uVar25 <= uVar34) goto LAB_10ab7cdbc;
      lVar30 = *(long *)(lVar26 + lVar24 + -0x18);
      if (lVar30 != 0) {
        pfVar21 = (float *)(ulong)*(uint *)(lVar30 + 0x10);
        param_3 = *(float **)(*(long *)(lVar36 + 0x18) + 0x98);
        param_4 = lVar35 + 0x28;
        func_0x00010ab80820(*(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x90));
        lVar26 = *(long *)(lVar36 + 0xe8);
        uVar25 = (*(long *)(lVar36 + 0xf0) - lVar26 >> 3) * -0x71c71c71c71c71c7;
      }
      if (uVar25 <= uVar34) goto LAB_10ab7cdbc;
      lVar30 = *(long *)(lVar26 + lVar24 + -0x10);
      if (lVar30 != 0) {
        pfVar21 = (float *)(ulong)*(uint *)(lVar30 + 0x10);
        param_3 = *(float **)(*(long *)(lVar36 + 0x18) + 0x98);
        param_4 = lVar35 + 0x34;
        func_0x00010ab80820(*(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x90));
        lVar26 = *(long *)(lVar36 + 0xe8);
        uVar25 = (*(long *)(lVar36 + 0xf0) - lVar26 >> 3) * -0x71c71c71c71c71c7;
      }
      if (uVar25 <= uVar34) goto LAB_10ab7cdbc;
      lVar30 = *(long *)(lVar26 + lVar24 + -8);
      if (lVar30 != 0) {
        pfVar21 = (float *)(ulong)*(uint *)(lVar30 + 0x10);
        param_3 = *(float **)(*(long *)(lVar36 + 0x18) + 0x98);
        param_4 = lVar35 + 0x40;
        func_0x00010ab80910(*(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x90));
        lVar26 = *(long *)(lVar36 + 0xe8);
        uVar25 = (*(long *)(lVar36 + 0xf0) - lVar26 >> 3) * -0x71c71c71c71c71c7;
      }
      if (uVar25 <= uVar34) goto LAB_10ab7cdbc;
      if (*(long *)(lVar26 + lVar24) != 0) {
        pfVar21 = (float *)(ulong)*(uint *)(*(long *)(lVar26 + lVar24) + 0x10);
        param_3 = *(float **)(*(long *)(lVar36 + 0x18) + 0x98);
        param_4 = lVar35 + 0xe8;
        func_0x00010ab805d4(*(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x90));
      }
      uVar34 = uVar34 + 1;
      lVar24 = lVar24 + 0x48;
    } while (uVar28 != uVar34);
    lVar24 = *(long *)(param_2 + 0xcb8);
  }
  uStack_8c = (undefined4)uVar28;
  if (*(long *)(lVar24 + 0x100) != *(long *)(lVar24 + 0x108)) {
    uVar34 = plVar18[1] - *plVar18;
    uVar28 = *(long *)(lVar24 + 0x108) - *(long *)(lVar24 + 0x100) >> 5;
    if (uVar34 <= uVar28) {
      uVar28 = uVar34;
    }
    if (plVar18[1] != *plVar18) {
      lVar24 = 0;
      uVar34 = 0;
      do {
        if ((ulong)(plVar18[1] - *plVar18) <= uVar34) goto LAB_10ab7cdbc;
        uVar29 = (ulong)*(byte *)(*plVar18 + uVar34);
        uVar25 = (*(long *)(param_1 + 0x148) - *(long *)(param_1 + 0x140) >> 4) *
                 -0x30c30c30c30c30c3;
        if (uVar25 < uVar29 || uVar25 - uVar29 == 0) goto LAB_10ab7cdbc;
        lVar36 = *(long *)(param_2 + 0xcb8);
        lVar26 = *(long *)(lVar36 + 0x100);
        uVar25 = *(long *)(lVar36 + 0x108) - lVar26 >> 5;
        if (uVar25 <= uVar34) {
          FUN_10a00946c(&UNK_10f696875);
LAB_10ab7cdcc:
          puVar19 = &UNK_10f696854;
          FUN_10a00946c();
          lVar24 = *(long *)(param_3 + 0x32e);
          lVar26 = *(long *)(lVar24 + 0xb0);
          if (puVar19[0x20] == '\x01') {
            if (lVar26 != 0) {
              lVar30 = *(long *)(puVar19 + 0x7c);
              lVar36 = lVar30;
              ___sincosf_stret();
              uStack_878 = CONCAT44(extraout_s1,(int)lVar36);
              uStack_880 = lVar30;
LAB_10ab7ce58:
              lVar24 = *(long *)(lVar24 + 0x18);
              func_0x00010ab80910(*(undefined8 *)(lVar24 + 0x90),*(undefined8 *)(lVar24 + 0x98),
                                  *(undefined4 *)(lVar26 + 0x10),&uStack_880);
            }
          }
          else if (lVar26 != 0) {
            uStack_878 = 0x3f80000000000000;
            uStack_880 = 0;
            goto LAB_10ab7ce58;
          }
          lVar36 = *(long *)(param_3 + 0x32e);
          FUN_10a5d31f0(&uStack_880,param_4);
          lVar26 = uStack_878;
          lVar24 = uStack_880;
          uStack_168 = *(undefined8 *)(param_4 + 0xd0);
          uStack_160 = *(undefined4 *)(param_4 + 0xd8);
          if (*(long *)(lVar36 + 0xd0) != 0) {
            func_0x00010ab80820(*(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x90),
                                *(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x98),
                                *(undefined4 *)(*(long *)(lVar36 + 0xd0) + 0x10),&uStack_168);
          }
          if (*(long *)(lVar36 + 0xd8) != 0) {
            func_0x00010ab80694(*(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x90),
                                *(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x98),
                                *(undefined4 *)(*(long *)(lVar36 + 0xd8) + 0x10),param_4 + 8);
          }
          if (*(long *)(lVar36 + 0xe0) != 0) {
            auStack_1a8[0] = *(undefined8 *)(param_4 + 0x10);
            func_0x00010ab80754(*(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x90),
                                *(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x98),
                                *(undefined4 *)(*(long *)(lVar36 + 0xe0) + 0x10),auStack_1a8);
          }
          if ((*(char *)(param_4 + 1) != '\0') && (*(long *)(lVar36 + 0xa8) != 0)) {
            uVar11 = *(undefined4 *)(*(long *)(lVar36 + 0xa8) + 0x10);
            FUN_10a303694(1);
            _glUniform4fv(uVar11,(ulong)(lVar26 - lVar24) >> 4,lVar24);
          }
          if (uStack_880 != 0) {
            uStack_878 = uStack_880;
            __ZdlPv();
          }
          lVar24 = *(long *)(param_3 + 0x32e);
          if (*(long *)(lVar24 + 0x1b0) != 0) {
            auVar40._0_8_ = *(undefined8 *)(puVar19 + 0xb14);
            uVar32 = NEON_scvtf(*(undefined8 *)(puVar19 + 0xb0c),4);
            auVar40._8_8_ = auVar40._0_8_;
            auVar40 = NEON_scvtf(auVar40,4);
            fVar37 = (float)uVar32;
            fVar39 = (float)((ulong)uVar32 >> 0x20);
            uVar32 = NEON_fmov(0x3f800000,4);
            uStack_880 = CONCAT44((float)((ulong)uVar32 >> 0x20) / (auVar40._4_4_ - fVar39),
                                  (float)uVar32 / (auVar40._0_4_ - fVar37));
            uStack_878 = CONCAT44(-fVar39 / (auVar40._12_4_ - fVar39),
                                  -fVar37 / (auVar40._8_4_ - fVar37));
            func_0x00010ab80910(*(undefined8 *)(*(long *)(lVar24 + 0x18) + 0x90),
                                *(undefined8 *)(*(long *)(lVar24 + 0x18) + 0x98),
                                *(undefined4 *)(*(long *)(lVar24 + 0x1b0) + 0x10),&uStack_880);
          }
          if (*(long *)(lVar24 + 0x1b8) != 0) {
            uStack_880 = CONCAT44((float)(param_5 >> 0x20),(float)(param_5 & 0xffffffff));
            uStack_878 = CONCAT44(1.0 / (float)(param_5 >> 0x20),1.0 / (float)(param_5 & 0xffffffff)
                                 );
            func_0x00010ab80910(*(undefined8 *)(*(long *)(lVar24 + 0x18) + 0x90),
                                *(undefined8 *)(*(long *)(lVar24 + 0x18) + 0x98),
                                *(undefined4 *)(*(long *)(lVar24 + 0x1b8) + 0x10),&uStack_880);
          }
          lVar24 = 0;
          do {
            lVar26 = 0;
            do {
              puVar1 = (undefined8 *)((long)&uStack_880 + lVar26 + lVar24);
              puVar1[1] = 0;
              *puVar1 = 0x3f800000;
              *(undefined4 *)(puVar1 + 3) = 0;
              *(undefined4 *)((long)puVar1 + 0x1c) = 0;
              *(undefined4 *)(puVar1 + 2) = 0;
              *(undefined4 *)((long)puVar1 + 0x14) = 0x3f800000;
              puVar1[5] = 0x3f800000;
              puVar1[4] = 0;
              puVar1[7] = 0x3f80000000000000;
              puVar1[6] = 0;
              lVar26 = lVar26 + 0x40;
            } while (lVar26 != 0x80);
            lVar24 = lVar24 + 0x80;
          } while (lVar24 != 0x100);
          lVar24 = 0x100;
          do {
            lVar26 = 0;
            do {
              puVar1 = (undefined8 *)((long)&uStack_880 + lVar26 + lVar24);
              puVar1[1] = 0;
              *puVar1 = 0x3f800000;
              *(undefined4 *)(puVar1 + 3) = 0;
              *(undefined4 *)((long)puVar1 + 0x1c) = 0;
              *(undefined4 *)(puVar1 + 2) = 0;
              *(undefined4 *)((long)puVar1 + 0x14) = 0x3f800000;
              puVar1[5] = 0x3f800000;
              puVar1[4] = 0;
              puVar1[7] = 0x3f80000000000000;
              puVar1[6] = 0;
              lVar26 = lVar26 + 0x40;
            } while (lVar26 != 0x80);
            lVar24 = lVar24 + 0x80;
          } while (lVar24 != 0x200);
          lVar24 = 0x200;
          do {
            lVar26 = 0;
            do {
              puVar1 = (undefined8 *)((long)&uStack_880 + lVar26 + lVar24);
              puVar1[1] = 0;
              *puVar1 = 0x3f800000;
              puVar1[3] = 0;
              puVar1[2] = 0x3f800000;
              *(undefined4 *)(puVar1 + 4) = 0x3f800000;
              lVar26 = lVar26 + 0x24;
            } while (lVar26 != 0x48);
            lVar24 = lVar24 + 0x48;
          } while (lVar24 != 0x290);
          lVar24 = 0x290;
          do {
            lVar26 = 0;
            do {
              puVar1 = (undefined8 *)((long)&uStack_880 + lVar26 + lVar24);
              puVar1[1] = 0;
              *puVar1 = 0x3f800000;
              *(undefined4 *)(puVar1 + 3) = 0;
              *(undefined4 *)((long)puVar1 + 0x1c) = 0;
              *(undefined4 *)(puVar1 + 2) = 0;
              *(undefined4 *)((long)puVar1 + 0x14) = 0x3f800000;
              puVar1[5] = 0x3f800000;
              puVar1[4] = 0;
              puVar1[7] = 0x3f80000000000000;
              puVar1[6] = 0;
              lVar26 = lVar26 + 0x40;
            } while (lVar26 != 0x80);
            lVar24 = lVar24 + 0x80;
          } while (lVar24 != 0x390);
          lVar24 = 0x390;
          do {
            lVar26 = 0;
            do {
              puVar1 = (undefined8 *)((long)&uStack_880 + lVar26 + lVar24);
              puVar1[1] = 0;
              *puVar1 = 0x3f800000;
              *(undefined4 *)(puVar1 + 3) = 0;
              *(undefined4 *)((long)puVar1 + 0x1c) = 0;
              *(undefined4 *)(puVar1 + 2) = 0;
              *(undefined4 *)((long)puVar1 + 0x14) = 0x3f800000;
              puVar1[5] = 0x3f800000;
              puVar1[4] = 0;
              puVar1[7] = 0x3f80000000000000;
              puVar1[6] = 0;
              lVar26 = lVar26 + 0x40;
            } while (lVar26 != 0x80);
            lVar24 = lVar24 + 0x80;
          } while (lVar24 != 0x490);
          lVar24 = 0x490;
          do {
            lVar26 = 0;
            do {
              puVar1 = (undefined8 *)((long)&uStack_880 + lVar26 + lVar24);
              puVar1[1] = 0;
              *puVar1 = 0x3f800000;
              *(undefined4 *)(puVar1 + 3) = 0;
              *(undefined4 *)((long)puVar1 + 0x1c) = 0;
              *(undefined4 *)(puVar1 + 2) = 0;
              *(undefined4 *)((long)puVar1 + 0x14) = 0x3f800000;
              puVar1[5] = 0x3f800000;
              puVar1[4] = 0;
              puVar1[7] = 0x3f80000000000000;
              puVar1[6] = 0;
              lVar26 = lVar26 + 0x40;
            } while (lVar26 != 0x80);
            lVar24 = lVar24 + 0x80;
          } while (lVar24 != 0x590);
          lVar24 = 0x590;
          do {
            *(undefined8 *)((long)afStack_870 + lVar24 + -8) = 0;
            *(undefined8 *)((long)&uStack_880 + lVar24) = 0x3f800000;
            *(undefined8 *)((long)&uStack_868 + lVar24) = 0;
            *(undefined8 *)((long)afStack_870 + lVar24) = 0x3f800000;
            *(undefined4 *)((long)afStack_860 + lVar24) = 0x3f800000;
            lVar24 = lVar24 + 0x24;
          } while (lVar24 != 0x5d8);
          lVar24 = 0x5d8;
          do {
            *(undefined8 *)((long)afStack_870 + lVar24 + -8) = 0;
            *(undefined8 *)((long)&uStack_880 + lVar24) = 0x3f800000;
            *(undefined4 *)((long)&uStack_868 + lVar24) = 0;
            *(undefined4 *)((long)afStack_860 + lVar24 + -4) = 0;
            *(undefined4 *)((long)afStack_870 + lVar24) = 0;
            *(undefined4 *)((long)afStack_870 + lVar24 + 4) = 0x3f800000;
            *(undefined8 *)((long)&uStack_858 + lVar24) = 0x3f800000;
            *(undefined8 *)((long)afStack_860 + lVar24) = 0;
            *(undefined8 *)((long)&uStack_848 + lVar24) = 0x3f80000000000000;
            *(undefined8 *)((long)afStack_850 + lVar24) = 0;
            lVar24 = lVar24 + 0x40;
          } while (lVar24 != 0x658);
          lVar24 = 0x658;
          do {
            *(undefined8 *)((long)afStack_870 + lVar24 + -8) = 0;
            *(undefined8 *)((long)&uStack_880 + lVar24) = 0x3f800000;
            *(undefined4 *)((long)&uStack_868 + lVar24) = 0;
            *(undefined4 *)((long)afStack_860 + lVar24 + -4) = 0;
            *(undefined4 *)((long)afStack_870 + lVar24) = 0;
            *(undefined4 *)((long)afStack_870 + lVar24 + 4) = 0x3f800000;
            *(undefined8 *)((long)&uStack_858 + lVar24) = 0x3f800000;
            *(undefined8 *)((long)afStack_860 + lVar24) = 0;
            *(undefined8 *)((long)&uStack_848 + lVar24) = 0x3f80000000000000;
            *(undefined8 *)((long)afStack_850 + lVar24) = 0;
            lVar24 = lVar24 + 0x40;
          } while (lVar24 != 0x6d8);
          lVar33 = *(long *)(param_3 + 0x32e);
          lVar24 = *(long *)(lVar33 + 0x28);
          lVar3 = *(long *)(lVar33 + 0x30);
          lVar26 = *(long *)(lVar33 + 0x38);
          lVar4 = *(long *)(lVar33 + 0x40);
          lVar36 = *(long *)(lVar33 + 0x48);
          lVar5 = *(long *)(lVar33 + 0x50);
          lVar30 = *(long *)(lVar33 + 0x68);
          lVar6 = *(long *)(lVar33 + 0x70);
          lVar35 = *(long *)(lVar33 + 0x58);
          lVar7 = *(long *)(lVar33 + 0x60);
          lVar27 = *(long *)(lVar33 + 0x78);
          lVar8 = *(long *)(lVar33 + 0x80);
          lVar31 = *(long *)(lVar33 + 0x88);
          lVar9 = *(long *)(lVar33 + 0x90);
          lVar2 = *(long *)(lVar33 + 0x98);
          lVar10 = *(long *)(lVar33 + 0xa0);
          if (*(long *)(param_4 + 0x2b8) == 0) {
            uVar28 = 0;
          }
          else {
            uVar34 = 0;
            uVar25 = param_4;
            do {
              if (lVar24 != 0 || lVar3 != 0) {
                uVar28 = uVar34 & 0xff;
                uVar38 = *(undefined8 *)(uVar25 + 0x2d0);
                uVar32 = *(undefined8 *)(uVar25 + 0x2e0);
                uVar22 = *(undefined8 *)(uVar25 + 0x2e8);
                *(undefined8 *)(afStack_870 + uVar28 * 0x10 + -2) = *(undefined8 *)(uVar25 + 0x2d8);
                (&uStack_880)[uVar28 * 8] = uVar38;
                (&uStack_868)[uVar28 * 8] = uVar22;
                *(undefined8 *)(afStack_870 + uVar28 * 0x10) = uVar32;
                uVar32 = *(undefined8 *)(uVar25 + 0x2f0);
                fVar37 = *(float *)(uVar25 + 0x300);
                fVar39 = *(float *)(uVar25 + 0x304);
                uVar11 = *(undefined4 *)(uVar25 + 0x308);
                uVar13 = *(undefined4 *)(uVar25 + 0x30c);
                (&uStack_858)[uVar28 * 8] = *(undefined8 *)(uVar25 + 0x2f8);
                *(undefined8 *)(afStack_860 + uVar28 * 0x10) = uVar32;
                *(undefined4 *)(&uStack_848 + uVar28 * 8) = uVar11;
                *(undefined4 *)((long)&uStack_848 + uVar28 * 0x40 + 4) = uVar13;
                afStack_850[uVar28 * 0x10] = fVar37;
                afStack_850[uVar28 * 0x10 + 1] = fVar39;
              }
              if (lVar26 != 0 || lVar4 != 0) {
                uVar28 = uVar34 & 0xff;
                uVar38 = *(undefined8 *)(uVar25 + 0x310);
                uVar32 = *(undefined8 *)(uVar25 + 800);
                uVar22 = *(undefined8 *)(uVar25 + 0x328);
                auStack_780[uVar28 * 8 + 1] = *(undefined8 *)(uVar25 + 0x318);
                auStack_780[uVar28 * 8] = uVar38;
                auStack_780[uVar28 * 8 + 3] = uVar22;
                auStack_780[uVar28 * 8 + 2] = uVar32;
                uVar32 = *(undefined8 *)(uVar25 + 0x330);
                uVar11 = *(undefined4 *)(uVar25 + 0x340);
                uVar13 = *(undefined4 *)(uVar25 + 0x344);
                uVar14 = *(undefined4 *)(uVar25 + 0x348);
                uVar15 = *(undefined4 *)(uVar25 + 0x34c);
                auStack_780[uVar28 * 8 + 5] = *(undefined8 *)(uVar25 + 0x338);
                auStack_780[uVar28 * 8 + 4] = uVar32;
                auStack_750[uVar28 * 0x10 + 2] = uVar14;
                auStack_750[uVar28 * 0x10 + 3] = uVar15;
                auStack_750[uVar28 * 0x10] = uVar11;
                auStack_750[uVar28 * 0x10 + 1] = uVar13;
              }
              if (lVar27 != 0) {
                func_0x000109519fd0(auStack_1a8,uVar25 + 0x2d0,pfVar21);
                FUN_10a1716ec(&uStack_168,auStack_1a8);
                uVar28 = uVar34 & 0xff;
                lVar33 = uVar28 * 0x24;
                *(undefined8 *)((long)&uStack_680 + lVar33) = uStack_168;
                (&uStack_678)[uVar28 * 9] = uStack_160;
                *(undefined8 *)((long)&uStack_674 + lVar33) = uStack_158;
                (&uStack_66c)[uVar28 * 9] = uStack_150;
                *(undefined8 *)((long)&uStack_668 + lVar33) = uStack_148;
                auStack_660[uVar28 * 9] = uStack_140;
              }
              if (lVar36 != 0 || lVar5 != 0) {
                uVar28 = uVar34 & 0xff;
                uVar38 = *(undefined8 *)(uVar25 + 0x350);
                uVar32 = *(undefined8 *)(uVar25 + 0x360);
                uVar22 = *(undefined8 *)(uVar25 + 0x368);
                auStack_5f0[uVar28 * 8 + 1] = *(undefined8 *)(uVar25 + 0x358);
                auStack_5f0[uVar28 * 8] = uVar38;
                auStack_5f0[uVar28 * 8 + 3] = uVar22;
                auStack_5f0[uVar28 * 8 + 2] = uVar32;
                uVar32 = *(undefined8 *)(uVar25 + 0x370);
                uVar11 = *(undefined4 *)(uVar25 + 0x380);
                uVar13 = *(undefined4 *)(uVar25 + 900);
                uVar14 = *(undefined4 *)(uVar25 + 0x388);
                uVar15 = *(undefined4 *)(uVar25 + 0x38c);
                auStack_5f0[uVar28 * 8 + 5] = *(undefined8 *)(uVar25 + 0x378);
                auStack_5f0[uVar28 * 8 + 4] = uVar32;
                auStack_5c0[uVar28 * 0x10 + 2] = uVar14;
                auStack_5c0[uVar28 * 0x10 + 3] = uVar15;
                auStack_5c0[uVar28 * 0x10] = uVar11;
                auStack_5c0[uVar28 * 0x10 + 1] = uVar13;
              }
              if (lVar30 != 0 || lVar6 != 0) {
                func_0x000109519fd0(&uStack_168,uVar25 + 0x2d0,pfVar21);
                uVar38 = uStack_158;
                uVar22 = uStack_168;
                uVar28 = uVar34 & 0xff;
                uVar32 = CONCAT44(uStack_14c,uStack_150);
                (&uStack_4e8)[uVar28 * 8] = CONCAT44(uStack_15c,uStack_160);
                *(undefined8 *)(afStack_4f0 + uVar28 * 0x10) = uVar22;
                (&uStack_4d8)[uVar28 * 8] = uVar32;
                *(undefined8 *)(afStack_4e0 + uVar28 * 0x10) = uVar38;
                fVar42 = fStack_12c;
                fVar41 = fStack_130;
                fVar39 = fStack_134;
                fVar37 = fStack_138;
                uVar32 = uStack_148;
                (&uStack_4c8)[uVar28 * 8] = CONCAT44(uStack_13c,uStack_140);
                *(undefined8 *)(afStack_4d0 + uVar28 * 0x10) = uVar32;
                afStack_4c0[uVar28 * 0x10 + 2] = fVar41;
                afStack_4c0[uVar28 * 0x10 + 3] = fVar42;
                afStack_4c0[uVar28 * 0x10] = fVar37;
                afStack_4c0[uVar28 * 0x10 + 1] = fVar39;
              }
              if (lVar35 != 0 || lVar7 != 0) {
                func_0x000109519fd0(&uStack_168,uVar25 + 0x350,pfVar21);
                uVar38 = uStack_158;
                uVar22 = uStack_168;
                uVar28 = uVar34 & 0xff;
                uVar32 = CONCAT44(uStack_14c,uStack_150);
                auStack_3f0[uVar28 * 8 + 1] = CONCAT44(uStack_15c,uStack_160);
                auStack_3f0[uVar28 * 8] = uVar22;
                auStack_3f0[uVar28 * 8 + 3] = uVar32;
                auStack_3f0[uVar28 * 8 + 2] = uVar38;
                fVar42 = fStack_12c;
                fVar41 = fStack_130;
                fVar39 = fStack_134;
                fVar37 = fStack_138;
                uVar32 = uStack_148;
                auStack_3f0[uVar28 * 8 + 5] = CONCAT44(uStack_13c,uStack_140);
                auStack_3f0[uVar28 * 8 + 4] = uVar32;
                afStack_3c0[uVar28 * 0x10 + 2] = fVar41;
                afStack_3c0[uVar28 * 0x10 + 3] = fVar42;
                afStack_3c0[uVar28 * 0x10] = fVar37;
                afStack_3c0[uVar28 * 0x10 + 1] = fVar39;
              }
              if (lVar9 != 0 || lVar2 != 0) {
                fVar37 = *pfVar21;
                fVar39 = pfVar21[1];
                fVar41 = pfVar21[2];
                fVar42 = pfVar21[4];
                fVar43 = pfVar21[5];
                fVar44 = pfVar21[6];
                fVar45 = pfVar21[8];
                fVar46 = pfVar21[9];
                fVar47 = pfVar21[10];
                fVar49 = -(fVar39 * (-(fVar44 * fVar45) + fVar47 * fVar42)) +
                         (-(fVar44 * fVar46) + fVar47 * fVar43) * fVar37 +
                         (-(fVar43 * fVar45) + fVar46 * fVar42) * fVar41;
                uStack_2e8 = CONCAT44((-(fVar39 * fVar47) - -(fVar46 * fVar41)) / fVar49,
                                      (-(fVar45 * fVar43) + fVar46 * fVar42) / fVar49);
                uStack_2f0 = CONCAT44((-(fVar42 * fVar47) - -(fVar45 * fVar44)) / fVar49,
                                      (-(fVar46 * fVar44) + fVar47 * fVar43) / fVar49);
                fStack_2d8 = (-(fVar43 * fVar41) + fVar44 * fVar39) / fVar49;
                fStack_2d4 = (-(fVar37 * fVar44) - -(fVar42 * fVar41)) / fVar49;
                fStack_2e0 = (-(fVar45 * fVar41) + fVar47 * fVar37) / fVar49;
                fStack_2dc = (-(fVar37 * fVar46) - -(fVar45 * fVar39)) / fVar49;
                fStack_2d0 = (-(fVar42 * fVar39) + fVar43 * fVar37) / fVar49;
              }
              if (lVar8 != 0 || lVar31 != 0) {
                uStack_2a0 = *(undefined8 *)(pfVar21 + 2);
                uStack_2a8 = *(undefined8 *)pfVar21;
                uStack_290 = *(undefined8 *)(pfVar21 + 6);
                uStack_298 = *(undefined8 *)(pfVar21 + 4);
                uStack_280 = *(undefined8 *)(pfVar21 + 10);
                uStack_288 = *(undefined8 *)(pfVar21 + 8);
                fStack_270 = pfVar21[0xe];
                fStack_26c = pfVar21[0xf];
                fStack_278 = pfVar21[0xc];
                fStack_274 = pfVar21[0xd];
              }
              if (lVar10 != 0) {
                uVar28 = uVar34 & 0xff;
                uVar38 = *(undefined8 *)(uVar25 + 0x750);
                uVar32 = *(undefined8 *)(uVar25 + 0x760);
                uVar22 = *(undefined8 *)(uVar25 + 0x768);
                auStack_228[uVar28 * 8 + 1] = *(undefined8 *)(uVar25 + 0x758);
                auStack_228[uVar28 * 8] = uVar38;
                auStack_228[uVar28 * 8 + 3] = uVar22;
                auStack_228[uVar28 * 8 + 2] = uVar32;
                uVar32 = *(undefined8 *)(uVar25 + 0x770);
                uVar11 = *(undefined4 *)(uVar25 + 0x780);
                uVar13 = *(undefined4 *)(uVar25 + 0x784);
                uVar14 = *(undefined4 *)(uVar25 + 0x788);
                uVar15 = *(undefined4 *)(uVar25 + 0x78c);
                auStack_228[uVar28 * 8 + 5] = *(undefined8 *)(uVar25 + 0x778);
                auStack_228[uVar28 * 8 + 4] = uVar32;
                auStack_1f8[uVar28 * 0x10 + 2] = uVar14;
                auStack_1f8[uVar28 * 0x10 + 3] = uVar15;
                auStack_1f8[uVar28 * 0x10] = uVar11;
                auStack_1f8[uVar28 * 0x10 + 1] = uVar13;
              }
              uVar28 = uVar34 & 0xff;
              if (lVar3 != 0) {
                fVar37 = *(float *)(&uStack_880 + uVar28 * 8);
                fVar41 = *(float *)((long)&uStack_880 + uVar28 * 0x40 + 4);
                fVar42 = afStack_870[uVar28 * 0x10 + -2];
                fVar43 = afStack_870[uVar28 * 0x10];
                fVar44 = afStack_870[uVar28 * 0x10 + 1];
                fVar45 = *(float *)(&uStack_868 + uVar28 * 8);
                fVar46 = afStack_860[uVar28 * 0x10];
                fVar47 = afStack_860[uVar28 * 0x10 + 1];
                fVar48 = *(float *)(&uStack_858 + uVar28 * 8);
                fVar50 = -(fVar47 * fVar45) + fVar48 * fVar44;
                fVar51 = -(fVar47 * fVar42) + fVar48 * fVar41;
                fVar49 = -(fVar44 * fVar42) + fVar45 * fVar41;
                fVar39 = 1.0 / (-(fVar43 * fVar51) + fVar50 * fVar37 + fVar49 * fVar46);
                fVar50 = fVar50 * fVar39;
                fVar52 = -((-(fVar46 * fVar45) + fVar48 * fVar43) * fVar39);
                fVar53 = (-(fVar46 * fVar44) + fVar47 * fVar43) * fVar39;
                fVar51 = -(fVar51 * fVar39);
                fVar48 = (-(fVar46 * fVar42) + fVar48 * fVar37) * fVar39;
                fVar46 = -((-(fVar46 * fVar41) + fVar47 * fVar37) * fVar39);
                fVar49 = fVar49 * fVar39;
                fVar42 = -((-(fVar43 * fVar42) + fVar45 * fVar37) * fVar39);
                fVar39 = (-(fVar43 * fVar41) + fVar44 * fVar37) * fVar39;
                fVar37 = afStack_850[uVar28 * 0x10];
                fVar41 = afStack_850[uVar28 * 0x10 + 1];
                fVar43 = *(float *)(&uStack_848 + uVar28 * 8);
                afStack_800[uVar28 * 0x10] = fVar50;
                afStack_800[uVar28 * 0x10 + 1] = fVar51;
                afStack_800[uVar28 * 0x10 + 2] = fVar49;
                afStack_800[uVar28 * 0x10 + 3] = 0.0;
                afStack_800[uVar28 * 0x10 + 4] = fVar52;
                afStack_800[uVar28 * 0x10 + 5] = fVar48;
                afStack_800[uVar28 * 0x10 + 6] = fVar42;
                afStack_800[uVar28 * 0x10 + 7] = 0.0;
                afStack_800[uVar28 * 0x10 + 8] = fVar53;
                afStack_800[uVar28 * 0x10 + 9] = fVar46;
                afStack_800[uVar28 * 0x10 + 10] = fVar39;
                afStack_800[uVar28 * 0x10 + 0xb] = 0.0;
                afStack_800[uVar28 * 0x10 + 0xc] =
                     (-(fVar52 * fVar41) - fVar37 * fVar50) - fVar43 * fVar53;
                afStack_800[uVar28 * 0x10 + 0xd] =
                     (-(fVar48 * fVar41) - fVar37 * fVar51) - fVar43 * fVar46;
                afStack_800[uVar28 * 0x10 + 0xe] =
                     (-(fVar42 * fVar41) - fVar37 * fVar49) - fVar43 * fVar39;
                afStack_800[uVar28 * 0x10 + 0xf] = 1.0;
              }
              if (lVar4 != 0) {
                func_0x0001094f5708(&uStack_168,auStack_780 + uVar28 * 8);
                auStack_700[uVar28 * 8 + 1] = CONCAT44(uStack_15c,uStack_160);
                auStack_700[uVar28 * 8] = uStack_168;
                auStack_700[uVar28 * 8 + 3] = CONCAT44(uStack_14c,uStack_150);
                auStack_700[uVar28 * 8 + 2] = uStack_158;
                auStack_700[uVar28 * 8 + 5] = CONCAT44(uStack_13c,uStack_140);
                auStack_700[uVar28 * 8 + 4] = uStack_148;
                afStack_6d0[uVar28 * 0x10 + 2] = fStack_130;
                afStack_6d0[uVar28 * 0x10 + 3] = fStack_12c;
                afStack_6d0[uVar28 * 0x10] = fStack_138;
                afStack_6d0[uVar28 * 0x10 + 1] = fStack_134;
              }
              if (lVar5 != 0) {
                func_0x0001094f5708(&uStack_168,auStack_5f0 + uVar28 * 8);
                auStack_570[uVar28 * 8 + 1] = CONCAT44(uStack_15c,uStack_160);
                auStack_570[uVar28 * 8] = uStack_168;
                auStack_570[uVar28 * 8 + 3] = CONCAT44(uStack_14c,uStack_150);
                auStack_570[uVar28 * 8 + 2] = uStack_158;
                auStack_570[uVar28 * 8 + 5] = CONCAT44(uStack_13c,uStack_140);
                auStack_570[uVar28 * 8 + 4] = uStack_148;
                afStack_540[uVar28 * 0x10 + 2] = fStack_130;
                afStack_540[uVar28 * 0x10 + 3] = fStack_12c;
                afStack_540[uVar28 * 0x10] = fStack_138;
                afStack_540[uVar28 * 0x10 + 1] = fStack_134;
              }
              if (lVar6 != 0) {
                fVar37 = afStack_4f0[uVar28 * 0x10];
                fVar41 = afStack_4f0[uVar28 * 0x10 + 1];
                fVar42 = *(float *)(&uStack_4e8 + uVar28 * 8);
                fVar43 = afStack_4e0[uVar28 * 0x10];
                fVar44 = afStack_4e0[uVar28 * 0x10 + 1];
                fVar45 = *(float *)(&uStack_4d8 + uVar28 * 8);
                fVar46 = afStack_4d0[uVar28 * 0x10];
                fVar47 = afStack_4d0[uVar28 * 0x10 + 1];
                fVar48 = *(float *)(&uStack_4c8 + uVar28 * 8);
                fVar50 = -(fVar47 * fVar45) + fVar48 * fVar44;
                fVar51 = -(fVar47 * fVar42) + fVar48 * fVar41;
                fVar49 = -(fVar44 * fVar42) + fVar45 * fVar41;
                fVar39 = 1.0 / (-(fVar43 * fVar51) + fVar50 * fVar37 + fVar49 * fVar46);
                fVar50 = fVar50 * fVar39;
                fVar52 = -((-(fVar46 * fVar45) + fVar48 * fVar43) * fVar39);
                fVar53 = (-(fVar46 * fVar44) + fVar47 * fVar43) * fVar39;
                fVar51 = -(fVar51 * fVar39);
                fVar48 = (-(fVar46 * fVar42) + fVar48 * fVar37) * fVar39;
                fVar46 = -((-(fVar46 * fVar41) + fVar47 * fVar37) * fVar39);
                fVar49 = fVar49 * fVar39;
                fVar42 = -((-(fVar43 * fVar42) + fVar45 * fVar37) * fVar39);
                fVar39 = (-(fVar43 * fVar41) + fVar44 * fVar37) * fVar39;
                fVar37 = afStack_4c0[uVar28 * 0x10];
                fVar41 = afStack_4c0[uVar28 * 0x10 + 1];
                fVar43 = afStack_4c0[uVar28 * 0x10 + 2];
                afStack_470[uVar28 * 0x10] = fVar50;
                afStack_470[uVar28 * 0x10 + 1] = fVar51;
                afStack_470[uVar28 * 0x10 + 2] = fVar49;
                afStack_470[uVar28 * 0x10 + 3] = 0.0;
                afStack_470[uVar28 * 0x10 + 4] = fVar52;
                afStack_470[uVar28 * 0x10 + 5] = fVar48;
                afStack_470[uVar28 * 0x10 + 6] = fVar42;
                afStack_470[uVar28 * 0x10 + 7] = 0.0;
                afStack_470[uVar28 * 0x10 + 8] = fVar53;
                afStack_470[uVar28 * 0x10 + 9] = fVar46;
                afStack_470[uVar28 * 0x10 + 10] = fVar39;
                afStack_470[uVar28 * 0x10 + 0xb] = 0.0;
                afStack_470[uVar28 * 0x10 + 0xc] =
                     (-(fVar52 * fVar41) - fVar37 * fVar50) - fVar43 * fVar53;
                afStack_470[uVar28 * 0x10 + 0xd] =
                     (-(fVar48 * fVar41) - fVar37 * fVar51) - fVar43 * fVar46;
                afStack_470[uVar28 * 0x10 + 0xe] =
                     (-(fVar42 * fVar41) - fVar37 * fVar49) - fVar43 * fVar39;
                afStack_470[uVar28 * 0x10 + 0xf] = 1.0;
              }
              if (lVar7 != 0) {
                func_0x0001094f5708(&uStack_168,auStack_3f0 + uVar28 * 8);
                auStack_370[uVar28 * 8 + 1] = CONCAT44(uStack_15c,uStack_160);
                auStack_370[uVar28 * 8] = uStack_168;
                auStack_370[uVar28 * 8 + 3] = CONCAT44(uStack_14c,uStack_150);
                auStack_370[uVar28 * 8 + 2] = uStack_158;
                auStack_370[uVar28 * 8 + 5] = CONCAT44(uStack_13c,uStack_140);
                auStack_370[uVar28 * 8 + 4] = uStack_148;
                afStack_340[uVar28 * 0x10 + 2] = fStack_130;
                afStack_340[uVar28 * 0x10 + 3] = fStack_12c;
                afStack_340[uVar28 * 0x10] = fStack_138;
                afStack_340[uVar28 * 0x10 + 1] = fStack_134;
              }
              if (lVar2 != 0) {
                fVar37 = -(fStack_2d4 * fStack_2dc) + fStack_2d0 * fStack_2e0;
                fVar41 = -(fStack_2e0 * (float)uStack_2e8) + fStack_2dc * uStack_2f0._4_4_;
                fVar39 = 1.0 / (-(uStack_2e8._4_4_ *
                                 (-(fStack_2d4 * (float)uStack_2e8) + fStack_2d0 * uStack_2f0._4_4_)
                                 ) + fVar37 * (float)uStack_2f0 + fVar41 * fStack_2d8);
                fStack_2c4 = fVar41 * fVar39;
                fStack_2c0 = (-(uStack_2e8._4_4_ * fStack_2d0) - -(fStack_2d8 * fStack_2dc)) *
                             fVar39;
                fStack_2cc = fVar37 * fVar39;
                fStack_2c8 = (-(uStack_2f0._4_4_ * fStack_2d0) - -(fStack_2d4 * (float)uStack_2e8))
                             * fVar39;
                uStack_2b4 = CONCAT44((-((float)uStack_2f0 * fStack_2d4) -
                                      -(fStack_2d8 * uStack_2f0._4_4_)) * fVar39,
                                      (-(fStack_2d8 * fStack_2e0) + fStack_2d4 * uStack_2e8._4_4_) *
                                      fVar39);
                uStack_2bc = CONCAT44((-((float)uStack_2f0 * fStack_2dc) -
                                      -(uStack_2e8._4_4_ * (float)uStack_2e8)) * fVar39,
                                      (-(fStack_2d8 * (float)uStack_2e8) +
                                      fStack_2d0 * (float)uStack_2f0) * fVar39);
                fStack_2ac = (-(uStack_2e8._4_4_ * uStack_2f0._4_4_) +
                             fStack_2e0 * (float)uStack_2f0) * fVar39;
              }
              if (lVar31 != 0) {
                fStack_268 = -(uStack_288._4_4_ * (float)uStack_290) +
                             (float)uStack_280 * uStack_298._4_4_;
                fVar37 = -(uStack_288._4_4_ * (float)uStack_2a0) +
                         (float)uStack_280 * uStack_2a8._4_4_;
                fStack_260 = -(uStack_298._4_4_ * (float)uStack_2a0) +
                             (float)uStack_290 * uStack_2a8._4_4_;
                fStack_240 = 1.0 / (-((float)uStack_298 * fVar37) + fStack_268 * (float)uStack_2a8 +
                                   fStack_260 * (float)uStack_288);
                fStack_268 = fStack_268 * fStack_240;
                fStack_258 = -((-((float)uStack_288 * (float)uStack_290) +
                               (float)uStack_280 * (float)uStack_298) * fStack_240);
                fStack_248 = (-((float)uStack_288 * uStack_298._4_4_) +
                             uStack_288._4_4_ * (float)uStack_298) * fStack_240;
                fStack_264 = -(fVar37 * fStack_240);
                fStack_254 = (-((float)uStack_288 * (float)uStack_2a0) +
                             (float)uStack_280 * (float)uStack_2a8) * fStack_240;
                fStack_244 = -((-((float)uStack_288 * uStack_2a8._4_4_) +
                               uStack_288._4_4_ * (float)uStack_2a8) * fStack_240);
                fStack_260 = fStack_260 * fStack_240;
                fStack_250 = -((-((float)uStack_298 * (float)uStack_2a0) +
                               (float)uStack_290 * (float)uStack_2a8) * fStack_240);
                fStack_240 = (-((float)uStack_298 * uStack_2a8._4_4_) +
                             uStack_298._4_4_ * (float)uStack_2a8) * fStack_240;
                uStack_25c = 0;
                uStack_24c = 0;
                uStack_23c = 0;
                fStack_238 = (-(fStack_258 * fStack_274) - fStack_278 * fStack_268) -
                             fStack_270 * fStack_248;
                fStack_234 = (-(fStack_254 * fStack_274) - fStack_278 * fStack_264) -
                             fStack_270 * fStack_244;
                fStack_230 = (-(fStack_250 * fStack_274) - fStack_278 * fStack_260) -
                             fStack_270 * fStack_240;
                uStack_22c = 0x3f800000;
              }
              uVar34 = uVar34 + 1;
              uVar28 = *(ulong *)(param_4 + 0x2b8);
              uVar25 = uVar25 + 0x110;
            } while (uVar34 < uVar28);
            lVar33 = *(long *)(param_3 + 0x32e);
          }
          if (uVar28 < 2) {
            uVar28 = 1;
          }
          uVar23 = 2;
          if (*(char *)(lVar33 + 0x17b) == '\0') {
            uVar23 = (uint)uVar28;
          }
          if (lVar24 != 0) {
            if (2 < uVar23) goto LAB_10ab7dc94;
            func_0x00010abcb34c(lVar33,0,&uStack_880,uVar23);
          }
          if (lVar26 != 0) {
            if (2 < uVar23) goto LAB_10ab7dc94;
            func_0x00010abcb34c(lVar33,2,auStack_780,uVar23);
          }
          if (lVar27 != 0) {
            if (2 < uVar23) goto LAB_10ab7dc94;
            func_0x00010abcb3e8(lVar33,10,&uStack_680,uVar23);
          }
          if (lVar36 != 0) {
            if (2 < uVar23) goto LAB_10ab7dc94;
            func_0x00010abcb34c(lVar33,4,auStack_5f0,uVar23);
          }
          if (lVar30 != 0) {
            if (2 < uVar23) goto LAB_10ab7dc94;
            func_0x00010abcb34c(lVar33,8,afStack_4f0,uVar23);
          }
          if (lVar35 != 0) {
            if (2 < uVar23) goto LAB_10ab7dc94;
            func_0x00010abcb34c(lVar33,6,auStack_3f0,uVar23);
          }
          if (lVar3 != 0) {
            if (2 < uVar23) goto LAB_10ab7dc94;
            func_0x00010abcb34c(lVar33,1,afStack_800,uVar23);
          }
          if (lVar4 != 0) {
            if (2 < uVar23) goto LAB_10ab7dc94;
            func_0x00010abcb34c(lVar33,3,auStack_700,uVar23);
          }
          if (lVar5 != 0) {
            if (2 < uVar23) goto LAB_10ab7dc94;
            func_0x00010abcb34c(lVar33,5,auStack_570,uVar23);
          }
          if (lVar6 != 0) {
            if (2 < uVar23) goto LAB_10ab7dc94;
            func_0x00010abcb34c(lVar33,9,afStack_470,uVar23);
          }
          if (lVar7 != 0) {
            if (2 < uVar23) goto LAB_10ab7dc94;
            func_0x00010abcb34c(lVar33,7,auStack_370,uVar23);
          }
          if (lVar8 != 0) {
            func_0x00010abcb34c(lVar33,0xb,&uStack_2a8,1);
          }
          if (lVar9 != 0) {
            func_0x00010abcb3e8(lVar33,0xd,&uStack_2f0,1);
          }
          if (lVar31 != 0) {
            func_0x00010abcb34c(lVar33,0xc,&fStack_268,1);
          }
          if (lVar2 != 0) {
            func_0x00010abcb3e8(lVar33,0xe,&fStack_2cc,1);
          }
          if (lVar10 != 0) {
            if (2 < uVar23) {
LAB_10ab7dc94:
                    /* WARNING: Does not return */
              pcVar16 = (code *)SoftwareBreakpoint(1,0x10ab7dc98);
              (*pcVar16)();
            }
            func_0x00010abcb34c(lVar33,0xf,auStack_228,uVar23);
          }
          lVar24 = *(long *)(puVar19 + 0x9b8);
          if (*(char *)(lVar24 + 1) == '\x04') {
            uStack_168 = 0;
            if (*(long *)(lVar24 + 0x18) != 0) {
              uStack_168 = *(undefined8 *)(*(long *)(lVar24 + 0x20) + 0x31c);
            }
            lVar24 = *(long *)(*(long *)(param_3 + 0x32e) + 200);
            if (lVar24 != 0) {
              lVar26 = *(long *)(*(long *)(param_3 + 0x32e) + 0x18);
              func_0x00010ab80754(*(undefined8 *)(lVar26 + 0x90),*(undefined8 *)(lVar26 + 0x98),
                                  *(undefined4 *)(lVar24 + 0x10),&uStack_168);
            }
          }
          return;
        }
        lVar30 = *(long *)(param_1 + 0x140) + uVar29 * 0x150;
        if (*(long *)(lVar26 + lVar24) != 0) {
          pfVar21 = (float *)(ulong)*(uint *)(*(long *)(lVar26 + lVar24) + 0x10);
          param_3 = *(float **)(*(long *)(lVar36 + 0x18) + 0x98);
          param_4 = lVar30 + 0x2c;
          func_0x00010ab80820(*(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x90));
          lVar26 = *(long *)(lVar36 + 0x100);
          uVar25 = *(long *)(lVar36 + 0x108) - lVar26 >> 5;
        }
        if (uVar25 <= uVar34) goto LAB_10ab7cdbc;
        lVar35 = *(long *)(lVar26 + lVar24 + 8);
        if (lVar35 != 0) {
          pfVar21 = (float *)(ulong)*(uint *)(lVar35 + 0x10);
          param_3 = *(float **)(*(long *)(lVar36 + 0x18) + 0x98);
          param_4 = lVar30 + 0x38;
          func_0x00010ab80910(*(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x90));
          lVar26 = *(long *)(lVar36 + 0x100);
          uVar25 = *(long *)(lVar36 + 0x108) - lVar26 >> 5;
        }
        if (uVar25 <= uVar34) goto LAB_10ab7cdbc;
        lVar35 = *(long *)(lVar26 + lVar24 + 0x10);
        if (lVar35 != 0) {
          pfVar21 = (float *)(ulong)*(uint *)(lVar35 + 0x10);
          param_3 = *(float **)(*(long *)(lVar36 + 0x18) + 0x98);
          param_4 = lVar30 + 0x48;
          func_0x00010ab80910(*(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x90));
          lVar26 = *(long *)(lVar36 + 0x100);
          uVar25 = *(long *)(lVar36 + 0x108) - lVar26 >> 5;
        }
        if (uVar25 <= uVar34) goto LAB_10ab7cdbc;
        lVar26 = *(long *)(lVar26 + lVar24 + 0x18);
        if (lVar26 != 0) {
          pfVar21 = (float *)(ulong)*(uint *)(lVar26 + 0x10);
          param_3 = *(float **)(*(long *)(lVar36 + 0x18) + 0x98);
          param_4 = lVar30 + 0x100;
          func_0x00010ab805d4(*(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x90));
        }
        uVar34 = uVar34 + 1;
        lVar24 = lVar24 + 0x20;
      } while (uVar28 != uVar34);
      lVar24 = *(long *)(param_2 + 0xcb8);
      goto LAB_10ab7c8fc;
    }
  }
  uVar28 = 0;
LAB_10ab7c8fc:
  uStack_88 = (undefined4)uVar28;
  if ((((*(long *)(lVar24 + 0x118) != *(long *)(lVar24 + 0x120)) || (*(long *)(lVar24 + 0x180) != 0)
       ) || (*(long *)(lVar24 + 0x188) != 0)) || (lVar26 = 0, *(long *)(lVar24 + 0x1a0) != 0)) {
    uVar28 = plVar18[6];
    lVar24 = plVar18[7];
    lVar26 = lVar24 - uVar28;
    if (lVar26 == 0) {
      plVar20 = *(long **)(param_1 + 0x858);
      FUN_10a243348(plVar20,4);
      uVar32 = *(undefined8 *)(*plVar20 + 0x268);
      uStack_98 = uVar32;
    }
    else {
      uVar34 = 0;
      uVar32 = 0;
      uStack_98 = 0;
      lVar36 = 0x20;
      do {
        if ((ulong)(plVar18[7] - plVar18[6]) <= uVar34) goto LAB_10ab7cdbc;
        uVar25 = (ulong)*(byte *)(plVar18[6] + uVar34);
        uVar29 = (*(long *)(param_1 + 0x178) - *(long *)(param_1 + 0x170) >> 3) * -0xf0f0f0f0f0f0f0f
        ;
        if (uVar29 < uVar25 || uVar29 - uVar25 == 0) goto LAB_10ab7cdbc;
        lVar30 = *(long *)(param_1 + 0x170) + uVar25 * 0x88;
        bVar12 = *(byte *)(lVar30 + 0x40);
        lVar35 = *(long *)(param_2 + 0xcb8);
        if (bVar12 - 3 < 2) {
          uVar22 = 0;
          uStack_98 = *(undefined8 *)(lVar30 + 0x20);
          lVar27 = 0x28;
          if (bVar12 != 3) {
            lVar27 = 0x38;
            uStack_98 = 0;
          }
          if (uVar34 < (ulong)(*(long *)(lVar35 + 0x120) - *(long *)(lVar35 + 0x118) >> 6)) {
            uVar22 = *(undefined8 *)(*(long *)(lVar35 + 0x118) + lVar36 + -8);
          }
          uVar32 = *(undefined8 *)(lVar30 + lVar27);
          FUN_10ab7de98(param_1,param_2,uVar22,uVar32,&UNK_10e4ac998);
          lVar35 = *(long *)(*(long *)(param_2 + 0xcb8) + 0x118);
          if (uVar34 < (ulong)(*(long *)(*(long *)(param_2 + 0xcb8) + 0x120) - lVar35 >> 6)) {
            uVar22 = *(undefined8 *)(lVar35 + lVar36 + -0x10);
          }
          else {
            uVar22 = 0;
          }
          FUN_10ab7de98(param_1,param_2,uVar22,uStack_98,&UNK_10e4ac998);
          lVar35 = *(long *)(param_2 + 0xcb8);
          bVar17 = *(byte *)(lVar30 + 0x40) - 3 < 2;
        }
        else {
          bVar17 = false;
        }
        uStack_74 = (int)plVar18[0xe];
        if (*(char *)(lVar30 + 0x18) != '\x04') {
          uStack_74 = 0x3f800000;
        }
        lVar27 = *(long *)(lVar35 + 0x118);
        uVar25 = *(long *)(lVar35 + 0x120) - lVar27 >> 6;
        if (bVar17) {
          if (uVar34 < uVar25) {
            uVar29 = uVar25;
            if (*(long *)(lVar27 + lVar36) != 0) {
              func_0x00010ab80694(*(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x90),
                                  *(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x98),
                                  *(undefined4 *)(*(long *)(lVar27 + lVar36) + 0x10),lVar30 + 0x54);
              lVar27 = *(long *)(lVar35 + 0x118);
              uVar29 = *(long *)(lVar35 + 0x120) - lVar27 >> 6;
            }
            if (uVar29 <= uVar34) goto LAB_10ab7cdbc;
            lVar27 = *(long *)(lVar27 + lVar36 + 8);
            if (lVar27 != 0) {
              uStack_7c = (ulong)*(uint *)(lVar30 + 0x58);
              uStack_80 = 0;
              func_0x00010ab80820(*(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x90),
                                  *(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x98),
                                  *(undefined4 *)(lVar27 + 0x10),&uStack_80);
            }
          }
          if (*(long *)(lVar35 + 0x198) != 0) {
            func_0x00010ab80694(*(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x90),
                                *(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x98),
                                *(undefined4 *)(*(long *)(lVar35 + 0x198) + 0x10),lVar30 + 0x54);
          }
          if (*(long *)(lVar35 + 400) != 0) {
            uStack_7c = (ulong)*(uint *)(lVar30 + 0x58);
            uStack_80 = 0;
            func_0x00010ab80820(*(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x90),
                                *(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x98),
                                *(undefined4 *)(*(long *)(lVar35 + 400) + 0x10),&uStack_80);
          }
        }
        if (uVar34 < uVar25) {
          lVar27 = *(long *)(lVar35 + 0x118);
          uVar25 = *(long *)(lVar35 + 0x120) - lVar27 >> 6;
          if (uVar25 <= uVar34) goto LAB_10ab7cdbc;
          lVar31 = *(long *)(lVar27 + lVar36 + -0x20);
          if (lVar31 != 0) {
            func_0x00010ab80820(*(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x90),
                                *(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x98),
                                *(undefined4 *)(lVar31 + 0x10),lVar30 + 0x44);
            lVar27 = *(long *)(lVar35 + 0x118);
            uVar25 = *(long *)(lVar35 + 0x120) - lVar27 >> 6;
          }
          if (uVar25 <= uVar34) goto LAB_10ab7cdbc;
          lVar31 = *(long *)(lVar27 + lVar36 + 0x10);
          if (lVar31 != 0) {
            func_0x00010ab80694(*(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x90),
                                *(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x98),
                                *(undefined4 *)(lVar31 + 0x10),lVar30 + 0x50);
            lVar27 = *(long *)(lVar35 + 0x118);
            uVar25 = *(long *)(lVar35 + 0x120) - lVar27 >> 6;
          }
          if (uVar25 <= uVar34) goto LAB_10ab7cdbc;
          lVar30 = *(long *)(lVar27 + lVar36 + 0x18);
          if (lVar30 != 0) {
            func_0x00010ab80694(*(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x90),
                                *(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x98),
                                *(undefined4 *)(lVar30 + 0x10),&uStack_74);
          }
        }
        bVar17 = ~uVar28 + lVar24 != uVar34;
        uVar34 = uVar34 + 1;
        lVar36 = lVar36 + 0x40;
      } while (bVar12 != 4 && bVar17);
    }
    FUN_10ab7de98(param_1,param_2,*(undefined8 *)(*(long *)(param_2 + 0xcb8) + 0x180),uStack_98,
                  &UNK_10e4ac998);
    FUN_10ab7de98(param_1,param_2,*(undefined8 *)(*(long *)(param_2 + 0xcb8) + 0x188),uVar32,
                  &UNK_10e4ac998);
    lVar24 = *(long *)(param_2 + 0xcb8);
  }
  uStack_84 = (undefined4)lVar26;
  if (((*(long *)(lVar24 + 0x130) != *(long *)(lVar24 + 0x138)) || (*(long *)(lVar24 + 0x148) != 0))
     && ((byte *)plVar18[10] != (byte *)plVar18[9])) {
    uVar28 = (ulong)*(byte *)plVar18[9];
    uVar34 = (*(long *)(param_1 + 400) - *(long *)(param_1 + 0x188) >> 4) * -0x5555555555555555;
    if (uVar34 < uVar28 || uVar34 - uVar28 == 0) {
LAB_10ab7cdbc:
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10ab7cdc0);
      (*pcVar16)();
    }
    plVar20 = (long *)0x1;
    FUN_10a197dc8(*(undefined8 *)(*(long *)(param_1 + 0x188) + uVar28 * 0x30 + 0x28));
    if ((plVar20 != (long *)0x0) && (lVar24 = *plVar20, lVar24 != 0)) {
      lVar36 = *(long *)(param_2 + 0xcb8);
      lVar26 = *(long *)(lVar36 + 0x130);
      if (*(long *)(lVar36 + 0x138) != lVar26) {
        lVar27 = 0;
        uVar28 = 0;
        lVar30 = lVar24 + 0x9c;
        lVar35 = lVar24 + 300;
        do {
          if (*(long *)(lVar26 + lVar27) != 0) {
            if (0xb < uVar28) goto LAB_10ab7cdbc;
            func_0x00010ab80820(*(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x90),
                                *(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x98),
                                *(undefined4 *)(*(long *)(lVar26 + lVar27) + 0x10),lVar30 + -0x90);
          }
          lVar31 = *(long *)(lVar26 + lVar27 + 8);
          if (lVar31 != 0) {
            if (0xb < uVar28) goto LAB_10ab7cdbc;
            func_0x00010ab80820(*(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x90),
                                *(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x98),
                                *(undefined4 *)(lVar31 + 0x10),lVar30);
          }
          lVar26 = *(long *)(lVar26 + lVar27 + 0x10);
          if (lVar26 != 0) {
            if (0xb < uVar28) goto LAB_10ab7cdbc;
            func_0x00010ab80694(*(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x90),
                                *(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x98),
                                *(undefined4 *)(lVar26 + 0x10),lVar35);
          }
          uVar28 = uVar28 + 1;
          lVar26 = *(long *)(lVar36 + 0x130);
          lVar35 = lVar35 + 4;
          lVar30 = lVar30 + 0xc;
          lVar27 = lVar27 + 0x18;
        } while (uVar28 < (ulong)((*(long *)(lVar36 + 0x138) - lVar26 >> 3) * -0x5555555555555555));
      }
      if (*(long *)(lVar36 + 0x148) != 0) {
        func_0x00010ab80820(*(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x90),
                            *(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x98),
                            *(undefined4 *)(*(long *)(lVar36 + 0x148) + 0x10),lVar24 + 0x15c);
      }
    }
  }
  FUN_10ad5f28c(*(undefined8 *)(param_1 + 0x848),param_1 + 0x20,plVar18,&uStack_8c);
  return;
}



/* Entry: 10ab7cdd8; end: 10ab7dcb3;  */

void FUN_10ab7cdd8(long param_1,long param_2,float *param_3,long param_4,ulong param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  code *pcVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  float fVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined4 extraout_s1;
  float fVar32;
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
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
  float fVar46;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  float afStack_7c0 [2];
  undefined8 uStack_7b8;
  float afStack_7b0 [2];
  undefined8 uStack_7a8;
  float afStack_7a0 [2];
  undefined8 uStack_798;
  float afStack_750 [32];
  undefined8 auStack_6d0 [6];
  undefined4 auStack_6a0 [20];
  undefined8 auStack_650 [6];
  float afStack_620 [20];
  undefined8 uStack_5d0;
  undefined4 uStack_5c8;
  undefined8 uStack_5c4;
  undefined4 uStack_5bc;
  undefined8 uStack_5b8;
  undefined4 auStack_5b0 [28];
  undefined8 auStack_540 [6];
  undefined4 auStack_510 [20];
  undefined8 auStack_4c0 [6];
  float afStack_490 [20];
  float afStack_440 [2];
  undefined8 uStack_438;
  float afStack_430 [2];
  undefined8 uStack_428;
  float afStack_420 [2];
  undefined8 uStack_418;
  float afStack_410 [20];
  float afStack_3c0 [32];
  undefined8 auStack_340 [6];
  float afStack_310 [20];
  undefined8 auStack_2c0 [6];
  float afStack_290 [20];
  undefined8 uStack_240;
  undefined8 uStack_238;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  undefined8 uStack_20c;
  undefined8 uStack_204;
  float fStack_1fc;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  undefined4 uStack_1ac;
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
  undefined4 uStack_17c;
  undefined8 auStack_178 [6];
  undefined4 auStack_148 [20];
  undefined8 auStack_f8 [8];
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  lVar23 = *(long *)(param_2 + 0xcb8);
  lVar24 = *(long *)(lVar23 + 0xb0);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    if (lVar24 != 0) {
      lVar29 = *(long *)(param_1 + 0x7c);
      lVar25 = lVar29;
      ___sincosf_stret();
      uStack_7c8 = CONCAT44(extraout_s1,(int)lVar25);
      uStack_7d0 = lVar29;
LAB_10ab7ce58:
      lVar23 = *(long *)(lVar23 + 0x18);
      func_0x00010ab80910(*(undefined8 *)(lVar23 + 0x90),*(undefined8 *)(lVar23 + 0x98),
                          *(undefined4 *)(lVar24 + 0x10),&uStack_7d0);
    }
  }
  else if (lVar24 != 0) {
    uStack_7c8 = 0x3f80000000000000;
    uStack_7d0 = 0;
    goto LAB_10ab7ce58;
  }
  lVar25 = *(long *)(param_2 + 0xcb8);
  FUN_10a5d31f0(&uStack_7d0,param_4);
  lVar24 = uStack_7c8;
  lVar23 = uStack_7d0;
  uStack_b8 = *(undefined8 *)(param_4 + 0xd0);
  uStack_b0 = *(undefined4 *)(param_4 + 0xd8);
  if (*(long *)(lVar25 + 0xd0) != 0) {
    func_0x00010ab80820(*(undefined8 *)(*(long *)(lVar25 + 0x18) + 0x90),
                        *(undefined8 *)(*(long *)(lVar25 + 0x18) + 0x98),
                        *(undefined4 *)(*(long *)(lVar25 + 0xd0) + 0x10),&uStack_b8);
  }
  if (*(long *)(lVar25 + 0xd8) != 0) {
    func_0x00010ab80694(*(undefined8 *)(*(long *)(lVar25 + 0x18) + 0x90),
                        *(undefined8 *)(*(long *)(lVar25 + 0x18) + 0x98),
                        *(undefined4 *)(*(long *)(lVar25 + 0xd8) + 0x10),param_4 + 8);
  }
  if (*(long *)(lVar25 + 0xe0) != 0) {
    auStack_f8[0] = *(undefined8 *)(param_4 + 0x10);
    func_0x00010ab80754(*(undefined8 *)(*(long *)(lVar25 + 0x18) + 0x90),
                        *(undefined8 *)(*(long *)(lVar25 + 0x18) + 0x98),
                        *(undefined4 *)(*(long *)(lVar25 + 0xe0) + 0x10),auStack_f8);
  }
  if ((*(char *)(param_4 + 1) != '\0') && (*(long *)(lVar25 + 0xa8) != 0)) {
    uVar14 = *(undefined4 *)(*(long *)(lVar25 + 0xa8) + 0x10);
    FUN_10a303694(1);
    _glUniform4fv(uVar14,(ulong)(lVar24 - lVar23) >> 4,lVar23);
  }
  if (uStack_7d0 != 0) {
    uStack_7c8 = uStack_7d0;
    __ZdlPv();
  }
  lVar23 = *(long *)(param_2 + 0xcb8);
  if (*(long *)(lVar23 + 0x1b0) != 0) {
    auVar33._0_8_ = *(undefined8 *)(param_1 + 0xb14);
    uVar30 = NEON_scvtf(*(undefined8 *)(param_1 + 0xb0c),4);
    auVar33._8_8_ = auVar33._0_8_;
    auVar33 = NEON_scvtf(auVar33,4);
    fVar28 = (float)uVar30;
    fVar32 = (float)((ulong)uVar30 >> 0x20);
    uVar30 = NEON_fmov(0x3f800000,4);
    uStack_7d0 = CONCAT44((float)((ulong)uVar30 >> 0x20) / (auVar33._4_4_ - fVar32),
                          (float)uVar30 / (auVar33._0_4_ - fVar28));
    uStack_7c8 = CONCAT44(-fVar32 / (auVar33._12_4_ - fVar32),-fVar28 / (auVar33._8_4_ - fVar28));
    func_0x00010ab80910(*(undefined8 *)(*(long *)(lVar23 + 0x18) + 0x90),
                        *(undefined8 *)(*(long *)(lVar23 + 0x18) + 0x98),
                        *(undefined4 *)(*(long *)(lVar23 + 0x1b0) + 0x10),&uStack_7d0);
  }
  if (*(long *)(lVar23 + 0x1b8) != 0) {
    uStack_7d0 = CONCAT44((float)(param_5 >> 0x20),(float)(param_5 & 0xffffffff));
    uStack_7c8 = CONCAT44(1.0 / (float)(param_5 >> 0x20),1.0 / (float)(param_5 & 0xffffffff));
    func_0x00010ab80910(*(undefined8 *)(*(long *)(lVar23 + 0x18) + 0x90),
                        *(undefined8 *)(*(long *)(lVar23 + 0x18) + 0x98),
                        *(undefined4 *)(*(long *)(lVar23 + 0x1b8) + 0x10),&uStack_7d0);
  }
  lVar23 = 0;
  do {
    lVar24 = 0;
    do {
      puVar1 = (undefined8 *)((long)&uStack_7d0 + lVar24 + lVar23);
      puVar1[1] = 0;
      *puVar1 = 0x3f800000;
      *(undefined4 *)(puVar1 + 3) = 0;
      *(undefined4 *)((long)puVar1 + 0x1c) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined4 *)((long)puVar1 + 0x14) = 0x3f800000;
      puVar1[5] = 0x3f800000;
      puVar1[4] = 0;
      puVar1[7] = 0x3f80000000000000;
      puVar1[6] = 0;
      lVar24 = lVar24 + 0x40;
    } while (lVar24 != 0x80);
    lVar23 = lVar23 + 0x80;
  } while (lVar23 != 0x100);
  lVar23 = 0x100;
  do {
    lVar24 = 0;
    do {
      puVar1 = (undefined8 *)((long)&uStack_7d0 + lVar24 + lVar23);
      puVar1[1] = 0;
      *puVar1 = 0x3f800000;
      *(undefined4 *)(puVar1 + 3) = 0;
      *(undefined4 *)((long)puVar1 + 0x1c) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined4 *)((long)puVar1 + 0x14) = 0x3f800000;
      puVar1[5] = 0x3f800000;
      puVar1[4] = 0;
      puVar1[7] = 0x3f80000000000000;
      puVar1[6] = 0;
      lVar24 = lVar24 + 0x40;
    } while (lVar24 != 0x80);
    lVar23 = lVar23 + 0x80;
  } while (lVar23 != 0x200);
  lVar23 = 0x200;
  do {
    lVar24 = 0;
    do {
      puVar1 = (undefined8 *)((long)&uStack_7d0 + lVar24 + lVar23);
      puVar1[1] = 0;
      *puVar1 = 0x3f800000;
      puVar1[3] = 0;
      puVar1[2] = 0x3f800000;
      *(undefined4 *)(puVar1 + 4) = 0x3f800000;
      lVar24 = lVar24 + 0x24;
    } while (lVar24 != 0x48);
    lVar23 = lVar23 + 0x48;
  } while (lVar23 != 0x290);
  lVar23 = 0x290;
  do {
    lVar24 = 0;
    do {
      puVar1 = (undefined8 *)((long)&uStack_7d0 + lVar24 + lVar23);
      puVar1[1] = 0;
      *puVar1 = 0x3f800000;
      *(undefined4 *)(puVar1 + 3) = 0;
      *(undefined4 *)((long)puVar1 + 0x1c) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined4 *)((long)puVar1 + 0x14) = 0x3f800000;
      puVar1[5] = 0x3f800000;
      puVar1[4] = 0;
      puVar1[7] = 0x3f80000000000000;
      puVar1[6] = 0;
      lVar24 = lVar24 + 0x40;
    } while (lVar24 != 0x80);
    lVar23 = lVar23 + 0x80;
  } while (lVar23 != 0x390);
  lVar23 = 0x390;
  do {
    lVar24 = 0;
    do {
      puVar1 = (undefined8 *)((long)&uStack_7d0 + lVar24 + lVar23);
      puVar1[1] = 0;
      *puVar1 = 0x3f800000;
      *(undefined4 *)(puVar1 + 3) = 0;
      *(undefined4 *)((long)puVar1 + 0x1c) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined4 *)((long)puVar1 + 0x14) = 0x3f800000;
      puVar1[5] = 0x3f800000;
      puVar1[4] = 0;
      puVar1[7] = 0x3f80000000000000;
      puVar1[6] = 0;
      lVar24 = lVar24 + 0x40;
    } while (lVar24 != 0x80);
    lVar23 = lVar23 + 0x80;
  } while (lVar23 != 0x490);
  lVar23 = 0x490;
  do {
    lVar24 = 0;
    do {
      puVar1 = (undefined8 *)((long)&uStack_7d0 + lVar24 + lVar23);
      puVar1[1] = 0;
      *puVar1 = 0x3f800000;
      *(undefined4 *)(puVar1 + 3) = 0;
      *(undefined4 *)((long)puVar1 + 0x1c) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined4 *)((long)puVar1 + 0x14) = 0x3f800000;
      puVar1[5] = 0x3f800000;
      puVar1[4] = 0;
      puVar1[7] = 0x3f80000000000000;
      puVar1[6] = 0;
      lVar24 = lVar24 + 0x40;
    } while (lVar24 != 0x80);
    lVar23 = lVar23 + 0x80;
  } while (lVar23 != 0x590);
  lVar23 = 0x590;
  do {
    *(undefined8 *)((long)afStack_7c0 + lVar23 + -8) = 0;
    *(undefined8 *)((long)&uStack_7d0 + lVar23) = 0x3f800000;
    *(undefined8 *)((long)&uStack_7b8 + lVar23) = 0;
    *(undefined8 *)((long)afStack_7c0 + lVar23) = 0x3f800000;
    *(undefined4 *)((long)afStack_7b0 + lVar23) = 0x3f800000;
    lVar23 = lVar23 + 0x24;
  } while (lVar23 != 0x5d8);
  lVar23 = 0x5d8;
  do {
    *(undefined8 *)((long)afStack_7c0 + lVar23 + -8) = 0;
    *(undefined8 *)((long)&uStack_7d0 + lVar23) = 0x3f800000;
    *(undefined4 *)((long)&uStack_7b8 + lVar23) = 0;
    *(undefined4 *)((long)afStack_7b0 + lVar23 + -4) = 0;
    *(undefined4 *)((long)afStack_7c0 + lVar23) = 0;
    *(undefined4 *)((long)afStack_7c0 + lVar23 + 4) = 0x3f800000;
    *(undefined8 *)((long)&uStack_7a8 + lVar23) = 0x3f800000;
    *(undefined8 *)((long)afStack_7b0 + lVar23) = 0;
    *(undefined8 *)((long)&uStack_798 + lVar23) = 0x3f80000000000000;
    *(undefined8 *)((long)afStack_7a0 + lVar23) = 0;
    lVar23 = lVar23 + 0x40;
  } while (lVar23 != 0x658);
  lVar23 = 0x658;
  do {
    *(undefined8 *)((long)afStack_7c0 + lVar23 + -8) = 0;
    *(undefined8 *)((long)&uStack_7d0 + lVar23) = 0x3f800000;
    *(undefined4 *)((long)&uStack_7b8 + lVar23) = 0;
    *(undefined4 *)((long)afStack_7b0 + lVar23 + -4) = 0;
    *(undefined4 *)((long)afStack_7c0 + lVar23) = 0;
    *(undefined4 *)((long)afStack_7c0 + lVar23 + 4) = 0x3f800000;
    *(undefined8 *)((long)&uStack_7a8 + lVar23) = 0x3f800000;
    *(undefined8 *)((long)afStack_7b0 + lVar23) = 0;
    *(undefined8 *)((long)&uStack_798 + lVar23) = 0x3f80000000000000;
    *(undefined8 *)((long)afStack_7a0 + lVar23) = 0;
    lVar23 = lVar23 + 0x40;
  } while (lVar23 != 0x6d8);
  lVar26 = *(long *)(param_2 + 0xcb8);
  lVar23 = *(long *)(lVar26 + 0x28);
  lVar6 = *(long *)(lVar26 + 0x30);
  lVar24 = *(long *)(lVar26 + 0x38);
  lVar7 = *(long *)(lVar26 + 0x40);
  lVar25 = *(long *)(lVar26 + 0x48);
  lVar8 = *(long *)(lVar26 + 0x50);
  lVar29 = *(long *)(lVar26 + 0x68);
  lVar9 = *(long *)(lVar26 + 0x70);
  lVar2 = *(long *)(lVar26 + 0x58);
  lVar10 = *(long *)(lVar26 + 0x60);
  lVar3 = *(long *)(lVar26 + 0x78);
  lVar11 = *(long *)(lVar26 + 0x80);
  lVar4 = *(long *)(lVar26 + 0x88);
  lVar12 = *(long *)(lVar26 + 0x90);
  lVar5 = *(long *)(lVar26 + 0x98);
  lVar13 = *(long *)(lVar26 + 0xa0);
  if (*(long *)(param_4 + 0x2b8) == 0) {
    uVar22 = 0;
  }
  else {
    uVar27 = 0;
    lVar26 = param_4;
    do {
      if (lVar23 != 0 || lVar6 != 0) {
        uVar22 = uVar27 & 0xff;
        uVar31 = *(undefined8 *)(lVar26 + 0x2d0);
        uVar30 = *(undefined8 *)(lVar26 + 0x2e0);
        uVar16 = *(undefined8 *)(lVar26 + 0x2e8);
        *(undefined8 *)(afStack_7c0 + uVar22 * 0x10 + -2) = *(undefined8 *)(lVar26 + 0x2d8);
        (&uStack_7d0)[uVar22 * 8] = uVar31;
        (&uStack_7b8)[uVar22 * 8] = uVar16;
        *(undefined8 *)(afStack_7c0 + uVar22 * 0x10) = uVar30;
        uVar30 = *(undefined8 *)(lVar26 + 0x2f0);
        fVar28 = *(float *)(lVar26 + 0x300);
        fVar32 = *(float *)(lVar26 + 0x304);
        uVar14 = *(undefined4 *)(lVar26 + 0x308);
        uVar17 = *(undefined4 *)(lVar26 + 0x30c);
        (&uStack_7a8)[uVar22 * 8] = *(undefined8 *)(lVar26 + 0x2f8);
        *(undefined8 *)(afStack_7b0 + uVar22 * 0x10) = uVar30;
        *(undefined4 *)(&uStack_798 + uVar22 * 8) = uVar14;
        *(undefined4 *)((long)&uStack_798 + uVar22 * 0x40 + 4) = uVar17;
        afStack_7a0[uVar22 * 0x10] = fVar28;
        afStack_7a0[uVar22 * 0x10 + 1] = fVar32;
      }
      if (lVar24 != 0 || lVar7 != 0) {
        uVar22 = uVar27 & 0xff;
        uVar31 = *(undefined8 *)(lVar26 + 0x310);
        uVar30 = *(undefined8 *)(lVar26 + 800);
        uVar16 = *(undefined8 *)(lVar26 + 0x328);
        auStack_6d0[uVar22 * 8 + 1] = *(undefined8 *)(lVar26 + 0x318);
        auStack_6d0[uVar22 * 8] = uVar31;
        auStack_6d0[uVar22 * 8 + 3] = uVar16;
        auStack_6d0[uVar22 * 8 + 2] = uVar30;
        uVar30 = *(undefined8 *)(lVar26 + 0x330);
        uVar14 = *(undefined4 *)(lVar26 + 0x340);
        uVar17 = *(undefined4 *)(lVar26 + 0x344);
        uVar18 = *(undefined4 *)(lVar26 + 0x348);
        uVar19 = *(undefined4 *)(lVar26 + 0x34c);
        auStack_6d0[uVar22 * 8 + 5] = *(undefined8 *)(lVar26 + 0x338);
        auStack_6d0[uVar22 * 8 + 4] = uVar30;
        auStack_6a0[uVar22 * 0x10 + 2] = uVar18;
        auStack_6a0[uVar22 * 0x10 + 3] = uVar19;
        auStack_6a0[uVar22 * 0x10] = uVar14;
        auStack_6a0[uVar22 * 0x10 + 1] = uVar17;
      }
      if (lVar3 != 0) {
        func_0x000109519fd0(auStack_f8,lVar26 + 0x2d0,param_3);
        FUN_10a1716ec(&uStack_b8,auStack_f8);
        uVar22 = uVar27 & 0xff;
        lVar15 = uVar22 * 0x24;
        *(undefined8 *)((long)&uStack_5d0 + lVar15) = uStack_b8;
        (&uStack_5c8)[uVar22 * 9] = uStack_b0;
        *(undefined8 *)((long)&uStack_5c4 + lVar15) = uStack_a8;
        (&uStack_5bc)[uVar22 * 9] = uStack_a0;
        *(undefined8 *)((long)&uStack_5b8 + lVar15) = uStack_98;
        auStack_5b0[uVar22 * 9] = uStack_90;
      }
      if (lVar25 != 0 || lVar8 != 0) {
        uVar22 = uVar27 & 0xff;
        uVar31 = *(undefined8 *)(lVar26 + 0x350);
        uVar30 = *(undefined8 *)(lVar26 + 0x360);
        uVar16 = *(undefined8 *)(lVar26 + 0x368);
        auStack_540[uVar22 * 8 + 1] = *(undefined8 *)(lVar26 + 0x358);
        auStack_540[uVar22 * 8] = uVar31;
        auStack_540[uVar22 * 8 + 3] = uVar16;
        auStack_540[uVar22 * 8 + 2] = uVar30;
        uVar30 = *(undefined8 *)(lVar26 + 0x370);
        uVar14 = *(undefined4 *)(lVar26 + 0x380);
        uVar17 = *(undefined4 *)(lVar26 + 900);
        uVar18 = *(undefined4 *)(lVar26 + 0x388);
        uVar19 = *(undefined4 *)(lVar26 + 0x38c);
        auStack_540[uVar22 * 8 + 5] = *(undefined8 *)(lVar26 + 0x378);
        auStack_540[uVar22 * 8 + 4] = uVar30;
        auStack_510[uVar22 * 0x10 + 2] = uVar18;
        auStack_510[uVar22 * 0x10 + 3] = uVar19;
        auStack_510[uVar22 * 0x10] = uVar14;
        auStack_510[uVar22 * 0x10 + 1] = uVar17;
      }
      if (lVar29 != 0 || lVar9 != 0) {
        func_0x000109519fd0(&uStack_b8,lVar26 + 0x2d0,param_3);
        uVar31 = uStack_a8;
        uVar16 = uStack_b8;
        uVar22 = uVar27 & 0xff;
        uVar30 = CONCAT44(uStack_9c,uStack_a0);
        (&uStack_438)[uVar22 * 8] = CONCAT44(uStack_ac,uStack_b0);
        *(undefined8 *)(afStack_440 + uVar22 * 0x10) = uVar16;
        (&uStack_428)[uVar22 * 8] = uVar30;
        *(undefined8 *)(afStack_430 + uVar22 * 0x10) = uVar31;
        fVar35 = fStack_7c;
        fVar34 = fStack_80;
        fVar32 = fStack_84;
        fVar28 = fStack_88;
        uVar30 = uStack_98;
        (&uStack_418)[uVar22 * 8] = CONCAT44(uStack_8c,uStack_90);
        *(undefined8 *)(afStack_420 + uVar22 * 0x10) = uVar30;
        afStack_410[uVar22 * 0x10 + 2] = fVar34;
        afStack_410[uVar22 * 0x10 + 3] = fVar35;
        afStack_410[uVar22 * 0x10] = fVar28;
        afStack_410[uVar22 * 0x10 + 1] = fVar32;
      }
      if (lVar2 != 0 || lVar10 != 0) {
        func_0x000109519fd0(&uStack_b8,lVar26 + 0x350,param_3);
        uVar31 = uStack_a8;
        uVar16 = uStack_b8;
        uVar22 = uVar27 & 0xff;
        uVar30 = CONCAT44(uStack_9c,uStack_a0);
        auStack_340[uVar22 * 8 + 1] = CONCAT44(uStack_ac,uStack_b0);
        auStack_340[uVar22 * 8] = uVar16;
        auStack_340[uVar22 * 8 + 3] = uVar30;
        auStack_340[uVar22 * 8 + 2] = uVar31;
        fVar35 = fStack_7c;
        fVar34 = fStack_80;
        fVar32 = fStack_84;
        fVar28 = fStack_88;
        uVar30 = uStack_98;
        auStack_340[uVar22 * 8 + 5] = CONCAT44(uStack_8c,uStack_90);
        auStack_340[uVar22 * 8 + 4] = uVar30;
        afStack_310[uVar22 * 0x10 + 2] = fVar34;
        afStack_310[uVar22 * 0x10 + 3] = fVar35;
        afStack_310[uVar22 * 0x10] = fVar28;
        afStack_310[uVar22 * 0x10 + 1] = fVar32;
      }
      if (lVar12 != 0 || lVar5 != 0) {
        fVar28 = *param_3;
        fVar32 = param_3[1];
        fVar34 = param_3[2];
        fVar35 = param_3[4];
        fVar36 = param_3[5];
        fVar37 = param_3[6];
        fVar38 = param_3[8];
        fVar39 = param_3[9];
        fVar40 = param_3[10];
        fVar42 = -(fVar32 * (-(fVar37 * fVar38) + fVar40 * fVar35)) +
                 (-(fVar37 * fVar39) + fVar40 * fVar36) * fVar28 +
                 (-(fVar36 * fVar38) + fVar39 * fVar35) * fVar34;
        uStack_238 = CONCAT44((-(fVar32 * fVar40) - -(fVar39 * fVar34)) / fVar42,
                              (-(fVar38 * fVar36) + fVar39 * fVar35) / fVar42);
        uStack_240 = CONCAT44((-(fVar35 * fVar40) - -(fVar38 * fVar37)) / fVar42,
                              (-(fVar39 * fVar37) + fVar40 * fVar36) / fVar42);
        fStack_228 = (-(fVar36 * fVar34) + fVar37 * fVar32) / fVar42;
        fStack_224 = (-(fVar28 * fVar37) - -(fVar35 * fVar34)) / fVar42;
        fStack_230 = (-(fVar38 * fVar34) + fVar40 * fVar28) / fVar42;
        fStack_22c = (-(fVar28 * fVar39) - -(fVar38 * fVar32)) / fVar42;
        fStack_220 = (-(fVar35 * fVar32) + fVar36 * fVar28) / fVar42;
      }
      if (lVar11 != 0 || lVar4 != 0) {
        uStack_1f0 = *(undefined8 *)(param_3 + 2);
        uStack_1f8 = *(undefined8 *)param_3;
        uStack_1e0 = *(undefined8 *)(param_3 + 6);
        uStack_1e8 = *(undefined8 *)(param_3 + 4);
        uStack_1d0 = *(undefined8 *)(param_3 + 10);
        uStack_1d8 = *(undefined8 *)(param_3 + 8);
        fStack_1c0 = param_3[0xe];
        fStack_1bc = param_3[0xf];
        fStack_1c8 = param_3[0xc];
        fStack_1c4 = param_3[0xd];
      }
      if (lVar13 != 0) {
        uVar22 = uVar27 & 0xff;
        uVar31 = *(undefined8 *)(lVar26 + 0x750);
        uVar30 = *(undefined8 *)(lVar26 + 0x760);
        uVar16 = *(undefined8 *)(lVar26 + 0x768);
        auStack_178[uVar22 * 8 + 1] = *(undefined8 *)(lVar26 + 0x758);
        auStack_178[uVar22 * 8] = uVar31;
        auStack_178[uVar22 * 8 + 3] = uVar16;
        auStack_178[uVar22 * 8 + 2] = uVar30;
        uVar30 = *(undefined8 *)(lVar26 + 0x770);
        uVar14 = *(undefined4 *)(lVar26 + 0x780);
        uVar17 = *(undefined4 *)(lVar26 + 0x784);
        uVar18 = *(undefined4 *)(lVar26 + 0x788);
        uVar19 = *(undefined4 *)(lVar26 + 0x78c);
        auStack_178[uVar22 * 8 + 5] = *(undefined8 *)(lVar26 + 0x778);
        auStack_178[uVar22 * 8 + 4] = uVar30;
        auStack_148[uVar22 * 0x10 + 2] = uVar18;
        auStack_148[uVar22 * 0x10 + 3] = uVar19;
        auStack_148[uVar22 * 0x10] = uVar14;
        auStack_148[uVar22 * 0x10 + 1] = uVar17;
      }
      uVar22 = uVar27 & 0xff;
      if (lVar6 != 0) {
        fVar28 = *(float *)(&uStack_7d0 + uVar22 * 8);
        fVar34 = *(float *)((long)&uStack_7d0 + uVar22 * 0x40 + 4);
        fVar35 = afStack_7c0[uVar22 * 0x10 + -2];
        fVar36 = afStack_7c0[uVar22 * 0x10];
        fVar37 = afStack_7c0[uVar22 * 0x10 + 1];
        fVar38 = *(float *)(&uStack_7b8 + uVar22 * 8);
        fVar39 = afStack_7b0[uVar22 * 0x10];
        fVar40 = afStack_7b0[uVar22 * 0x10 + 1];
        fVar41 = *(float *)(&uStack_7a8 + uVar22 * 8);
        fVar43 = -(fVar40 * fVar38) + fVar41 * fVar37;
        fVar44 = -(fVar40 * fVar35) + fVar41 * fVar34;
        fVar42 = -(fVar37 * fVar35) + fVar38 * fVar34;
        fVar32 = 1.0 / (-(fVar36 * fVar44) + fVar43 * fVar28 + fVar42 * fVar39);
        fVar43 = fVar43 * fVar32;
        fVar45 = -((-(fVar39 * fVar38) + fVar41 * fVar36) * fVar32);
        fVar46 = (-(fVar39 * fVar37) + fVar40 * fVar36) * fVar32;
        fVar44 = -(fVar44 * fVar32);
        fVar41 = (-(fVar39 * fVar35) + fVar41 * fVar28) * fVar32;
        fVar39 = -((-(fVar39 * fVar34) + fVar40 * fVar28) * fVar32);
        fVar42 = fVar42 * fVar32;
        fVar35 = -((-(fVar36 * fVar35) + fVar38 * fVar28) * fVar32);
        fVar32 = (-(fVar36 * fVar34) + fVar37 * fVar28) * fVar32;
        fVar28 = afStack_7a0[uVar22 * 0x10];
        fVar34 = afStack_7a0[uVar22 * 0x10 + 1];
        fVar36 = *(float *)(&uStack_798 + uVar22 * 8);
        afStack_750[uVar22 * 0x10] = fVar43;
        afStack_750[uVar22 * 0x10 + 1] = fVar44;
        afStack_750[uVar22 * 0x10 + 2] = fVar42;
        afStack_750[uVar22 * 0x10 + 3] = 0.0;
        afStack_750[uVar22 * 0x10 + 4] = fVar45;
        afStack_750[uVar22 * 0x10 + 5] = fVar41;
        afStack_750[uVar22 * 0x10 + 6] = fVar35;
        afStack_750[uVar22 * 0x10 + 7] = 0.0;
        afStack_750[uVar22 * 0x10 + 8] = fVar46;
        afStack_750[uVar22 * 0x10 + 9] = fVar39;
        afStack_750[uVar22 * 0x10 + 10] = fVar32;
        afStack_750[uVar22 * 0x10 + 0xb] = 0.0;
        afStack_750[uVar22 * 0x10 + 0xc] = (-(fVar45 * fVar34) - fVar28 * fVar43) - fVar36 * fVar46;
        afStack_750[uVar22 * 0x10 + 0xd] = (-(fVar41 * fVar34) - fVar28 * fVar44) - fVar36 * fVar39;
        afStack_750[uVar22 * 0x10 + 0xe] = (-(fVar35 * fVar34) - fVar28 * fVar42) - fVar36 * fVar32;
        afStack_750[uVar22 * 0x10 + 0xf] = 1.0;
      }
      if (lVar7 != 0) {
        func_0x0001094f5708(&uStack_b8,auStack_6d0 + uVar22 * 8);
        auStack_650[uVar22 * 8 + 1] = CONCAT44(uStack_ac,uStack_b0);
        auStack_650[uVar22 * 8] = uStack_b8;
        auStack_650[uVar22 * 8 + 3] = CONCAT44(uStack_9c,uStack_a0);
        auStack_650[uVar22 * 8 + 2] = uStack_a8;
        auStack_650[uVar22 * 8 + 5] = CONCAT44(uStack_8c,uStack_90);
        auStack_650[uVar22 * 8 + 4] = uStack_98;
        afStack_620[uVar22 * 0x10 + 2] = fStack_80;
        afStack_620[uVar22 * 0x10 + 3] = fStack_7c;
        afStack_620[uVar22 * 0x10] = fStack_88;
        afStack_620[uVar22 * 0x10 + 1] = fStack_84;
      }
      if (lVar8 != 0) {
        func_0x0001094f5708(&uStack_b8,auStack_540 + uVar22 * 8);
        auStack_4c0[uVar22 * 8 + 1] = CONCAT44(uStack_ac,uStack_b0);
        auStack_4c0[uVar22 * 8] = uStack_b8;
        auStack_4c0[uVar22 * 8 + 3] = CONCAT44(uStack_9c,uStack_a0);
        auStack_4c0[uVar22 * 8 + 2] = uStack_a8;
        auStack_4c0[uVar22 * 8 + 5] = CONCAT44(uStack_8c,uStack_90);
        auStack_4c0[uVar22 * 8 + 4] = uStack_98;
        afStack_490[uVar22 * 0x10 + 2] = fStack_80;
        afStack_490[uVar22 * 0x10 + 3] = fStack_7c;
        afStack_490[uVar22 * 0x10] = fStack_88;
        afStack_490[uVar22 * 0x10 + 1] = fStack_84;
      }
      if (lVar9 != 0) {
        fVar28 = afStack_440[uVar22 * 0x10];
        fVar34 = afStack_440[uVar22 * 0x10 + 1];
        fVar35 = *(float *)(&uStack_438 + uVar22 * 8);
        fVar36 = afStack_430[uVar22 * 0x10];
        fVar37 = afStack_430[uVar22 * 0x10 + 1];
        fVar38 = *(float *)(&uStack_428 + uVar22 * 8);
        fVar39 = afStack_420[uVar22 * 0x10];
        fVar40 = afStack_420[uVar22 * 0x10 + 1];
        fVar41 = *(float *)(&uStack_418 + uVar22 * 8);
        fVar43 = -(fVar40 * fVar38) + fVar41 * fVar37;
        fVar44 = -(fVar40 * fVar35) + fVar41 * fVar34;
        fVar42 = -(fVar37 * fVar35) + fVar38 * fVar34;
        fVar32 = 1.0 / (-(fVar36 * fVar44) + fVar43 * fVar28 + fVar42 * fVar39);
        fVar43 = fVar43 * fVar32;
        fVar45 = -((-(fVar39 * fVar38) + fVar41 * fVar36) * fVar32);
        fVar46 = (-(fVar39 * fVar37) + fVar40 * fVar36) * fVar32;
        fVar44 = -(fVar44 * fVar32);
        fVar41 = (-(fVar39 * fVar35) + fVar41 * fVar28) * fVar32;
        fVar39 = -((-(fVar39 * fVar34) + fVar40 * fVar28) * fVar32);
        fVar42 = fVar42 * fVar32;
        fVar35 = -((-(fVar36 * fVar35) + fVar38 * fVar28) * fVar32);
        fVar32 = (-(fVar36 * fVar34) + fVar37 * fVar28) * fVar32;
        fVar28 = afStack_410[uVar22 * 0x10];
        fVar34 = afStack_410[uVar22 * 0x10 + 1];
        fVar36 = afStack_410[uVar22 * 0x10 + 2];
        afStack_3c0[uVar22 * 0x10] = fVar43;
        afStack_3c0[uVar22 * 0x10 + 1] = fVar44;
        afStack_3c0[uVar22 * 0x10 + 2] = fVar42;
        afStack_3c0[uVar22 * 0x10 + 3] = 0.0;
        afStack_3c0[uVar22 * 0x10 + 4] = fVar45;
        afStack_3c0[uVar22 * 0x10 + 5] = fVar41;
        afStack_3c0[uVar22 * 0x10 + 6] = fVar35;
        afStack_3c0[uVar22 * 0x10 + 7] = 0.0;
        afStack_3c0[uVar22 * 0x10 + 8] = fVar46;
        afStack_3c0[uVar22 * 0x10 + 9] = fVar39;
        afStack_3c0[uVar22 * 0x10 + 10] = fVar32;
        afStack_3c0[uVar22 * 0x10 + 0xb] = 0.0;
        afStack_3c0[uVar22 * 0x10 + 0xc] = (-(fVar45 * fVar34) - fVar28 * fVar43) - fVar36 * fVar46;
        afStack_3c0[uVar22 * 0x10 + 0xd] = (-(fVar41 * fVar34) - fVar28 * fVar44) - fVar36 * fVar39;
        afStack_3c0[uVar22 * 0x10 + 0xe] = (-(fVar35 * fVar34) - fVar28 * fVar42) - fVar36 * fVar32;
        afStack_3c0[uVar22 * 0x10 + 0xf] = 1.0;
      }
      if (lVar10 != 0) {
        func_0x0001094f5708(&uStack_b8,auStack_340 + uVar22 * 8);
        auStack_2c0[uVar22 * 8 + 1] = CONCAT44(uStack_ac,uStack_b0);
        auStack_2c0[uVar22 * 8] = uStack_b8;
        auStack_2c0[uVar22 * 8 + 3] = CONCAT44(uStack_9c,uStack_a0);
        auStack_2c0[uVar22 * 8 + 2] = uStack_a8;
        auStack_2c0[uVar22 * 8 + 5] = CONCAT44(uStack_8c,uStack_90);
        auStack_2c0[uVar22 * 8 + 4] = uStack_98;
        afStack_290[uVar22 * 0x10 + 2] = fStack_80;
        afStack_290[uVar22 * 0x10 + 3] = fStack_7c;
        afStack_290[uVar22 * 0x10] = fStack_88;
        afStack_290[uVar22 * 0x10 + 1] = fStack_84;
      }
      if (lVar5 != 0) {
        fVar28 = -(fStack_224 * fStack_22c) + fStack_220 * fStack_230;
        fVar34 = -(fStack_230 * (float)uStack_238) + fStack_22c * uStack_240._4_4_;
        fVar32 = 1.0 / (-(uStack_238._4_4_ *
                         (-(fStack_224 * (float)uStack_238) + fStack_220 * uStack_240._4_4_)) +
                        fVar28 * (float)uStack_240 + fVar34 * fStack_228);
        fStack_214 = fVar34 * fVar32;
        fStack_210 = (-(uStack_238._4_4_ * fStack_220) - -(fStack_228 * fStack_22c)) * fVar32;
        fStack_21c = fVar28 * fVar32;
        fStack_218 = (-(uStack_240._4_4_ * fStack_220) - -(fStack_224 * (float)uStack_238)) * fVar32
        ;
        uStack_204 = CONCAT44((-((float)uStack_240 * fStack_224) - -(fStack_228 * uStack_240._4_4_))
                              * fVar32,(-(fStack_228 * fStack_230) + fStack_224 * uStack_238._4_4_)
                                       * fVar32);
        uStack_20c = CONCAT44((-((float)uStack_240 * fStack_22c) -
                              -(uStack_238._4_4_ * (float)uStack_238)) * fVar32,
                              (-(fStack_228 * (float)uStack_238) + fStack_220 * (float)uStack_240) *
                              fVar32);
        fStack_1fc = (-(uStack_238._4_4_ * uStack_240._4_4_) + fStack_230 * (float)uStack_240) *
                     fVar32;
      }
      if (lVar4 != 0) {
        fStack_1b8 = -(uStack_1d8._4_4_ * (float)uStack_1e0) + (float)uStack_1d0 * uStack_1e8._4_4_;
        fVar28 = -(uStack_1d8._4_4_ * (float)uStack_1f0) + (float)uStack_1d0 * uStack_1f8._4_4_;
        fStack_1b0 = -(uStack_1e8._4_4_ * (float)uStack_1f0) + (float)uStack_1e0 * uStack_1f8._4_4_;
        fStack_190 = 1.0 / (-((float)uStack_1e8 * fVar28) + fStack_1b8 * (float)uStack_1f8 +
                           fStack_1b0 * (float)uStack_1d8);
        fStack_1b8 = fStack_1b8 * fStack_190;
        fStack_1a8 = -((-((float)uStack_1d8 * (float)uStack_1e0) +
                       (float)uStack_1d0 * (float)uStack_1e8) * fStack_190);
        fStack_198 = (-((float)uStack_1d8 * uStack_1e8._4_4_) + uStack_1d8._4_4_ * (float)uStack_1e8
                     ) * fStack_190;
        fStack_1b4 = -(fVar28 * fStack_190);
        fStack_1a4 = (-((float)uStack_1d8 * (float)uStack_1f0) +
                     (float)uStack_1d0 * (float)uStack_1f8) * fStack_190;
        fStack_194 = -((-((float)uStack_1d8 * uStack_1f8._4_4_) +
                       uStack_1d8._4_4_ * (float)uStack_1f8) * fStack_190);
        fStack_1b0 = fStack_1b0 * fStack_190;
        fStack_1a0 = -((-((float)uStack_1e8 * (float)uStack_1f0) +
                       (float)uStack_1e0 * (float)uStack_1f8) * fStack_190);
        fStack_190 = (-((float)uStack_1e8 * uStack_1f8._4_4_) + uStack_1e8._4_4_ * (float)uStack_1f8
                     ) * fStack_190;
        uStack_1ac = 0;
        uStack_19c = 0;
        uStack_18c = 0;
        fStack_188 = (-(fStack_1a8 * fStack_1c4) - fStack_1c8 * fStack_1b8) -
                     fStack_1c0 * fStack_198;
        fStack_184 = (-(fStack_1a4 * fStack_1c4) - fStack_1c8 * fStack_1b4) -
                     fStack_1c0 * fStack_194;
        fStack_180 = (-(fStack_1a0 * fStack_1c4) - fStack_1c8 * fStack_1b0) -
                     fStack_1c0 * fStack_190;
        uStack_17c = 0x3f800000;
      }
      uVar27 = uVar27 + 1;
      uVar22 = *(ulong *)(param_4 + 0x2b8);
      lVar26 = lVar26 + 0x110;
    } while (uVar27 < uVar22);
    lVar26 = *(long *)(param_2 + 0xcb8);
  }
  if (uVar22 < 2) {
    uVar22 = 1;
  }
  uVar21 = 2;
  if (*(char *)(lVar26 + 0x17b) == '\0') {
    uVar21 = (uint)uVar22;
  }
  if (lVar23 != 0) {
    if (2 < uVar21) goto LAB_10ab7dc94;
    func_0x00010abcb34c(lVar26,0,&uStack_7d0,uVar21);
  }
  if (lVar24 != 0) {
    if (2 < uVar21) goto LAB_10ab7dc94;
    func_0x00010abcb34c(lVar26,2,auStack_6d0,uVar21);
  }
  if (lVar3 != 0) {
    if (2 < uVar21) goto LAB_10ab7dc94;
    func_0x00010abcb3e8(lVar26,10,&uStack_5d0,uVar21);
  }
  if (lVar25 != 0) {
    if (2 < uVar21) goto LAB_10ab7dc94;
    func_0x00010abcb34c(lVar26,4,auStack_540,uVar21);
  }
  if (lVar29 != 0) {
    if (2 < uVar21) goto LAB_10ab7dc94;
    func_0x00010abcb34c(lVar26,8,afStack_440,uVar21);
  }
  if (lVar2 != 0) {
    if (2 < uVar21) goto LAB_10ab7dc94;
    func_0x00010abcb34c(lVar26,6,auStack_340,uVar21);
  }
  if (lVar6 != 0) {
    if (2 < uVar21) goto LAB_10ab7dc94;
    func_0x00010abcb34c(lVar26,1,afStack_750,uVar21);
  }
  if (lVar7 != 0) {
    if (2 < uVar21) goto LAB_10ab7dc94;
    func_0x00010abcb34c(lVar26,3,auStack_650,uVar21);
  }
  if (lVar8 != 0) {
    if (2 < uVar21) goto LAB_10ab7dc94;
    func_0x00010abcb34c(lVar26,5,auStack_4c0,uVar21);
  }
  if (lVar9 != 0) {
    if (2 < uVar21) goto LAB_10ab7dc94;
    func_0x00010abcb34c(lVar26,9,afStack_3c0,uVar21);
  }
  if (lVar10 != 0) {
    if (2 < uVar21) goto LAB_10ab7dc94;
    func_0x00010abcb34c(lVar26,7,auStack_2c0,uVar21);
  }
  if (lVar11 != 0) {
    func_0x00010abcb34c(lVar26,0xb,&uStack_1f8,1);
  }
  if (lVar12 != 0) {
    func_0x00010abcb3e8(lVar26,0xd,&uStack_240,1);
  }
  if (lVar4 != 0) {
    func_0x00010abcb34c(lVar26,0xc,&fStack_1b8,1);
  }
  if (lVar5 != 0) {
    func_0x00010abcb3e8(lVar26,0xe,&fStack_21c,1);
  }
  if (lVar13 != 0) {
    if (2 < uVar21) {
LAB_10ab7dc94:
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x10ab7dc98);
      (*pcVar20)();
    }
    func_0x00010abcb34c(lVar26,0xf,auStack_178,uVar21);
  }
  lVar23 = *(long *)(param_1 + 0x9b8);
  if (*(char *)(lVar23 + 1) == '\x04') {
    uStack_b8 = 0;
    if (*(long *)(lVar23 + 0x18) != 0) {
      uStack_b8 = *(undefined8 *)(*(long *)(lVar23 + 0x20) + 0x31c);
    }
    lVar23 = *(long *)(*(long *)(param_2 + 0xcb8) + 200);
    if (lVar23 != 0) {
      lVar24 = *(long *)(*(long *)(param_2 + 0xcb8) + 0x18);
      func_0x00010ab80754(*(undefined8 *)(lVar24 + 0x90),*(undefined8 *)(lVar24 + 0x98),
                          *(undefined4 *)(lVar23 + 0x10),&uStack_b8);
    }
  }
  return;
}



/* Entry: 10ab7dcb4; end: 10ab7de97;  */

void FUN_10ab7dcb4(long param_1,long param_2,long param_3,long *param_4,undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  undefined1 auStack_68 [8];
  float fStack_60;
  undefined8 uStack_5c;
  float fStack_54;
  long lStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined8 uStack_30;
  float fStack_28;
  
  if ((param_4 == (long *)0x0) || (*param_4 == 0)) {
    param_4 = (long *)(param_3 + 0x5c);
  }
  else {
    param_4 = param_4 + 2;
  }
  iVar2 = 0;
  while ((fVar3 = *(float *)(param_2 + 0x118), iVar2 == 1 ||
         (fVar3 = *(float *)(param_2 + 0x114), iVar2 != 2))) {
    bVar1 = fVar3 < 0.0;
    while (iVar2 = iVar2 + 1, bVar1) {
      if (iVar2 == 2) goto LAB_10ab7dd44;
      bVar1 = true;
    }
  }
  if (*(float *)(param_2 + 0x11c) < 0.0) {
LAB_10ab7dd44:
    fStack_40 = *(float *)(param_2 + 0x104);
    fStack_48 = *(float *)(param_4 + 1);
    fStack_3c = fStack_40 + *(float *)((long)param_4 + 0x14);
    lStack_50 = *param_4;
    fStack_44 = fStack_40 + (float)*(undefined8 *)((long)param_4 + 0xc);
    fStack_40 = fStack_40 + (float)((ulong)*(undefined8 *)((long)param_4 + 0xc) >> 0x20);
  }
  else {
    lStack_50 = *(long *)(param_2 + 0x108);
    fStack_48 = (float)*(undefined8 *)(param_2 + 0x110);
    fStack_44 = (float)((ulong)*(undefined8 *)(param_2 + 0x110) >> 0x20);
    fStack_40 = (float)*(undefined8 *)(param_2 + 0x118);
    fStack_3c = (float)((ulong)*(undefined8 *)(param_2 + 0x118) >> 0x20);
  }
  FUN_10a005448(auStack_68,&lStack_50,param_5);
  if (*(long *)(param_1 + 0x1e8) != 0) {
    fStack_28 = fStack_48 - fStack_3c;
    uStack_30 = CONCAT44((float)((ulong)lStack_50 >> 0x20) - fStack_40,(float)lStack_50 - fStack_44)
    ;
    func_0x00010ab80820(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x90),
                        *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x98),
                        *(undefined4 *)(*(long *)(param_1 + 0x1e8) + 0x10),&uStack_30);
  }
  if (*(long *)(param_1 + 0x1f0) != 0) {
    fStack_28 = fStack_48 + fStack_3c;
    uStack_30 = CONCAT44((float)((ulong)lStack_50 >> 0x20) + fStack_40,(float)lStack_50 + fStack_44)
    ;
    func_0x00010ab80820(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x90),
                        *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x98),
                        *(undefined4 *)(*(long *)(param_1 + 0x1f0) + 0x10),&uStack_30);
  }
  if (*(long *)(param_1 + 0x1f8) != 0) {
    fStack_28 = fStack_60 - fStack_54;
    uStack_30 = CONCAT44(auStack_68._4_4_ - (float)((ulong)uStack_5c >> 0x20),
                         auStack_68._0_4_ - (float)uStack_5c);
    func_0x00010ab80820(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x90),
                        *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x98),
                        *(undefined4 *)(*(long *)(param_1 + 0x1f8) + 0x10),&uStack_30);
  }
  if (*(long *)(param_1 + 0x200) != 0) {
    fStack_28 = fStack_60 + fStack_54;
    uStack_30 = CONCAT44(auStack_68._4_4_ + (float)((ulong)uStack_5c >> 0x20),
                         auStack_68._0_4_ + (float)uStack_5c);
    func_0x00010ab80820(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x90),
                        *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x98),
                        *(undefined4 *)(*(long *)(param_1 + 0x200) + 0x10),&uStack_30);
  }
  return;
}



/* Entry: 10ab7de98; end: 10ab7e6db;  */

long * FUN_10ab7de98(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                    long *param_5,long param_6,float *param_7,long *param_8,undefined8 *param_9)

{
  long *plVar1;
  undefined **ppuVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  float *pfVar19;
  float fVar20;
  undefined4 uVar21;
  long lVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_124 [36];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long *plStack_d0;
  int iStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if (param_7 == (float *)0x0) {
    return param_5;
  }
  if (param_8 == (long *)0x0) {
    lVar18 = *(long *)(param_7 + 8);
    if (lVar18 == 0) {
      return param_5;
    }
    fVar20 = param_7[0x20];
    uStack_98 = param_9[1];
    uStack_a0 = *param_9;
    uStack_88 = param_9[3];
    uStack_90 = param_9[2];
    uStack_80 = param_9[4];
    plVar8 = (long *)param_5[0x10b];
    if ((int)fVar20 < 0x8513) {
      if (fVar20 == 4.97881e-42) {
        uVar13 = 0;
      }
      else {
        if (fVar20 != 4.60733e-41) {
LAB_10ab7e64c:
          puVar9 = &UNK_10f697b97;
          FUN_10a0ee06c();
          func_0x00010a0523dc(&lStack_c0);
          func_0x00010a0523dc(&lStack_b0);
          __Unwind_Resume();
          FUN_10ab91b60();
          puVar10 = puVar9 + 0x40;
          FUN_10abd8fbc(puVar10,*(undefined8 *)(param_6 + 0x18));
          if (puVar10 != (undefined *)0x0) {
            uVar17 = (ulong)*(int *)(puVar10 + 0x40);
            lVar18 = *(long *)(puVar9 + 0x90);
            uVar15 = (*(long *)(puVar9 + 0x98) - lVar18 >> 2) * -0xf0f0f0f0f0f0f0f;
            if (uVar15 < uVar17 || uVar15 - uVar17 == 0) {
LAB_10ab7e7f4:
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10ab7e7f8);
              (*pcVar7)();
            }
            pfVar19 = (float *)(lVar18 + (long)*(int *)(puVar10 + 0x40) * 0x44);
            bVar4 = *(byte *)(pfVar19 + 0x10);
            if ((lVar18 == 0) || (bVar4 != 7)) {
              if (0x11 < bVar4) goto LAB_10ab7e7f4;
            }
            else if ((((*pfVar19 == *param_7) && (pfVar19[1] == param_7[1])) &&
                     (pfVar19[2] == param_7[2])) && (pfVar19[3] == param_7[3])) goto LAB_10ab7e7dc;
            (*(code *)(&PTR_FUN_110c530b8)[bVar4])(pfVar19);
            *(undefined1 *)(pfVar19 + 0x10) = 0x11;
            uVar13 = *(undefined8 *)param_7;
            *(undefined8 *)(pfVar19 + 2) = *(undefined8 *)(param_7 + 2);
            *(undefined8 *)pfVar19 = uVar13;
            *(undefined1 *)(pfVar19 + 0x10) = 7;
            FUN_10a303694(1);
            _glUniform4fv(uVar17,1,param_7);
          }
LAB_10ab7e7dc:
          return (long *)(ulong)(puVar10 != (undefined *)0x0);
        }
        uVar13 = 2;
      }
    }
    else if (fVar20 == 4.7738e-41) {
      uVar13 = 3;
    }
    else {
      if (fVar20 != 5.0259e-41) goto LAB_10ab7e64c;
      uVar13 = 1;
    }
    FUN_10a243348(plVar8,uVar13);
    param_8 = *(long **)(*plVar8 + 0x268);
    param_9 = (undefined8 *)&UNK_10e4ac858;
  }
  else {
    plVar8 = param_8;
    (**(code **)(*param_8 + 0xd0))();
    if ((int)plVar8 == 4) {
      lVar18 = *(long *)(param_7 + 10);
      if (lVar18 == 0) {
        lVar18 = *(long *)(param_7 + 8);
        if (lVar18 == 0) {
          return plVar8;
        }
        fVar20 = 5.0259e-41;
        if (param_7[0x20] != 5.0259e-41) {
          return plVar8;
        }
      }
      else {
        fVar20 = param_7[0x21];
      }
    }
    else {
      lVar18 = *(long *)(param_7 + 8);
      if (lVar18 == 0) {
        return plVar8;
      }
      fVar20 = param_7[0x20];
    }
  }
  uStack_98 = param_9[1];
  uStack_a0 = *param_9;
  uStack_88 = param_9[3];
  uVar13 = param_9[2];
  uStack_80 = param_9[4];
  lStack_b0 = 0;
  plStack_a8 = (long *)0x0;
  plVar11 = (long *)0x1;
  plVar8 = param_8;
  uStack_90 = uVar13;
  FUN_10a088744();
  uVar23 = (undefined4)uVar13;
  iStack_c8 = (int)plVar8;
  if (plVar11 == (long *)0x0) {
    lStack_c0 = 0;
    plStack_b8 = (long *)0x0;
  }
  else {
    plStack_b8 = (long *)plVar11[1];
    lStack_c0 = *plVar11;
    if (plVar11[1] != 0) {
      plVar8 = (long *)(plVar11[1] + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  if ((iStack_c8 == 2) && (lStack_c0 != 0)) {
    lVar12 = param_5[0x10b];
    lStack_d8 = lStack_c0;
    plStack_d0 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar8 = plStack_b8 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    FUN_10ab81730(&uStack_100,lVar12,param_7,&lStack_d8,param_8,fVar20,(char)param_5[0x247]);
    plVar8 = plStack_a8;
    plStack_a8 = uStack_f8;
    lVar12 = uStack_100;
    uStack_100 = 0;
    uStack_f8 = (long *)0x0;
    lStack_b0 = lVar12;
    if (plVar8 != (long *)0x0) {
      plVar11 = plVar8 + 1;
      do {
        lVar16 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    plVar8 = uStack_f8;
    uVar21 = (undefined4)lVar12;
    if (uStack_f8 != (long *)0x0) {
      plVar11 = uStack_f8 + 1;
      do {
        lVar12 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*uStack_f8 + 0x10))(uStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    plVar8 = plStack_d0;
    if (plStack_d0 != (long *)0x0) {
      plVar11 = plStack_d0 + 1;
      do {
        lVar12 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  else {
    plVar8 = (long *)param_5[0x10b];
    if ((int)fVar20 < 0x8513) {
      if (fVar20 == 4.97881e-42) {
        uVar13 = 0;
      }
      else {
        if (fVar20 != 4.60733e-41) {
LAB_10ab7e63c:
          FUN_10a0ee06c(&UNK_10f697b97);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10ab7e64c);
          (*pcVar7)();
        }
        uVar13 = 2;
      }
    }
    else if (fVar20 == 4.7738e-41) {
      uVar13 = 3;
    }
    else {
      if (fVar20 != 5.0259e-41) goto LAB_10ab7e63c;
      uVar13 = 1;
    }
    FUN_10a243348(plVar8,uVar13);
    param_8 = *(long **)(*plVar8 + 0x268);
    uVar21 = 0;
    uVar23 = 1;
    uStack_98 = 0x100000001;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 1;
    uStack_80 = 0x3e8000000000000;
    plVar14 = (long *)0x1;
    plVar11 = param_8;
    FUN_10a088744();
    plVar8 = plStack_b8;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
      lStack_c0 = 0;
    }
    else {
      lStack_c0 = *plVar14;
      plVar14 = (long *)plVar14[1];
      if (plVar14 != (long *)0x0) {
        plVar1 = plVar14 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
    iStack_c8 = (int)plVar11;
    if (plStack_b8 != (long *)0x0) {
      plVar11 = plStack_b8 + 1;
      do {
        lVar12 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar12 == 0) {
        lVar12 = *plStack_b8;
        plStack_b8 = plVar14;
        (**(code **)(lVar12 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        plVar14 = plStack_b8;
      }
    }
    plStack_b8 = plVar14;
    FUN_10a026ab4(&lStack_b0,&lStack_c0);
  }
  lVar12 = *(long *)(param_7 + 0xc);
  if (lVar12 != 0) {
    lVar16 = *(long *)(param_6 + 0xcb8);
    (**(code **)(*param_8 + 0x90))(&uStack_100,param_8);
    lVar16 = *(long *)(lVar16 + 0x18);
    FUN_10ab99ad0(*(undefined8 *)(lVar16 + 0x90),*(undefined8 *)(lVar16 + 0x98),
                  *(undefined4 *)(lVar12 + 0x10),&uStack_100);
  }
  if (*(long *)(param_7 + 0xe) != 0) {
    iVar3 = (int)param_5[8];
    plVar8 = param_8;
    (**(code **)(*param_8 + 0xe8))();
    ppuVar2 = &PTR_DAT_110ae4700 + ((ulong)plVar8 & 0xffffffff) * 4;
    if (0x56 < (uint)plVar8) {
      ppuVar2 = &PTR_DAT_110ae4700;
    }
    if ((*(byte *)((long)ppuVar2 + 0x14) & 1) == 0) {
      if (iVar3 < 0x113) {
        uStack_100 = 0;
        lVar12 = *(long *)(*(long *)(param_6 + 0xcb8) + 0x18);
        func_0x00010ab80754(*(undefined8 *)(lVar12 + 0x90),*(undefined8 *)(lVar12 + 0x98),
                            *(undefined4 *)(*(long *)(param_7 + 0xe) + 0x10),&uStack_100);
      }
      else {
        uStack_100 = 0;
        uStack_f8 = (long *)0x0;
        lVar12 = *(long *)(*(long *)(param_6 + 0xcb8) + 0x18);
        func_0x00010ab80910(*(undefined8 *)(lVar12 + 0x90),*(undefined8 *)(lVar12 + 0x98),
                            *(undefined4 *)(*(long *)(param_7 + 0xe) + 0x10),&uStack_100);
      }
    }
    else {
      plVar8 = param_8;
      ___dynamic_cast(param_8,&PTR_DAT_110bb3788,&PTR_DAT_110bab2a8,0xfffffffffffffffe);
      lVar16 = *(long *)(param_6 + 0xcb8);
      lVar12 = *(long *)(param_7 + 0xe);
      if (plVar8 == (long *)0x0) {
        if (iVar3 < 0x113) {
          uStack_100 = 0;
          func_0x00010ab80754(*(undefined8 *)(*(long *)(lVar16 + 0x18) + 0x90),
                              *(undefined8 *)(*(long *)(lVar16 + 0x18) + 0x98),
                              *(undefined4 *)(lVar12 + 0x10),&uStack_100);
        }
        else {
          uStack_100 = 0;
          uStack_f8 = (long *)0x0;
          func_0x00010ab80910(*(undefined8 *)(*(long *)(lVar16 + 0x18) + 0x90),
                              *(undefined8 *)(*(long *)(lVar16 + 0x18) + 0x98),
                              *(undefined4 *)(lVar12 + 0x10),&uStack_100);
        }
      }
      else if (iVar3 < 0x113) {
        (**(code **)(*plVar8 + 0x10))();
        lVar22 = *plVar8;
        uStack_100 = lVar22;
        func_0x00010ab80754(*(undefined8 *)(*(long *)(lVar16 + 0x18) + 0x90),
                            *(undefined8 *)(*(long *)(lVar16 + 0x18) + 0x98),
                            *(undefined4 *)(lVar12 + 0x10),&uStack_100);
        uVar21 = (undefined4)lVar22;
      }
      else {
        (**(code **)(*plVar8 + 0x10))();
        func_0x00010ab80910(*(undefined8 *)(*(long *)(lVar16 + 0x18) + 0x90),
                            *(undefined8 *)(*(long *)(lVar16 + 0x18) + 0x98),
                            *(undefined4 *)(lVar12 + 0x10),plVar8);
      }
    }
  }
  lVar12 = *(long *)(param_7 + 0x10);
  if (lVar12 != 0) {
    lVar16 = *(long *)(param_6 + 0xcb8);
    (**(code **)(*param_8 + 0xd8))(param_8);
    uStack_100 = CONCAT44(uVar23,uVar21);
    uStack_f8 = (long *)CONCAT44(param_4,param_3);
    lVar16 = *(long *)(lVar16 + 0x18);
    func_0x00010ab80910(*(undefined8 *)(lVar16 + 0x90),*(undefined8 *)(lVar16 + 0x98),
                        *(undefined4 *)(lVar12 + 0x10),&uStack_100);
  }
  if (*(long *)(param_7 + 0x12) != 0) {
    lVar12 = *(long *)(*(long *)(param_6 + 0xcb8) + 0x18);
    func_0x00010ab80910(*(undefined8 *)(lVar12 + 0x90),*(undefined8 *)(lVar12 + 0x98),
                        *(undefined4 *)(*(long *)(param_7 + 0x12) + 0x10),(long)&uStack_90 + 4);
  }
  if (*(long *)(param_7 + 0x14) != 0) {
    plVar8 = param_8;
    (**(code **)(*param_8 + 0xb0))();
    plVar11 = param_8;
    (**(code **)(*param_8 + 0xb8))();
    fVar25 = 0.0;
    if ((int)plVar8 != 0) {
      fVar25 = 1.0 / (float)((ulong)plVar8 & 0xffffffff);
    }
    fVar24 = 0.0;
    if ((int)plVar11 != 0) {
      fVar24 = 1.0 / (float)((ulong)plVar11 & 0xffffffff);
    }
    uStack_100 = CONCAT44((float)((ulong)plVar11 & 0xffffffff),(float)((ulong)plVar8 & 0xffffffff));
    uStack_f8 = (long *)CONCAT44(fVar24,fVar25);
    lVar12 = *(long *)(*(long *)(param_6 + 0xcb8) + 0x18);
    func_0x00010ab80910(*(undefined8 *)(lVar12 + 0x90),*(undefined8 *)(lVar12 + 0x98),
                        *(undefined4 *)(*(long *)(param_7 + 0x14) + 0x10),&uStack_100);
  }
  if (*(long *)(param_7 + 0x16) != 0) {
    plVar8 = param_8;
    (**(code **)(*param_8 + 0xc0))();
    fVar25 = 0.0;
    if ((int)plVar8 != 0) {
      fVar25 = 1.0 / (float)((ulong)plVar8 & 0xffffffff);
    }
    uStack_100 = CONCAT44(fVar25,(float)((ulong)plVar8 & 0xffffffff));
    lVar12 = *(long *)(*(long *)(param_6 + 0xcb8) + 0x18);
    func_0x00010ab80754(*(undefined8 *)(lVar12 + 0x90),*(undefined8 *)(lVar12 + 0x98),
                        *(undefined4 *)(*(long *)(param_7 + 0x16) + 0x10),&uStack_100);
  }
  if (*(long *)(param_7 + 0x18) != 0) {
    plVar8 = param_8;
    (**(code **)(*param_8 + 200))();
    lVar12 = *(long *)(param_7 + 0x18);
    if (*(short *)(lVar12 + 8) == 7) {
      fVar25 = 0.0;
      if ((int)plVar8 != 0) {
        fVar25 = 1.0 / (float)((ulong)plVar8 & 0xffffffff);
      }
      uStack_100 = CONCAT44(fVar25,(float)((ulong)plVar8 & 0xffffffff));
      lVar16 = *(long *)(*(long *)(param_6 + 0xcb8) + 0x18);
      func_0x00010ab80754(*(undefined8 *)(lVar16 + 0x90),*(undefined8 *)(lVar16 + 0x98),
                          *(undefined4 *)(lVar12 + 0x10),&uStack_100);
    }
    else if (*(short *)(lVar12 + 8) == 9) {
      fVar25 = 0.0;
      if ((int)plVar8 != 0) {
        fVar25 = 1.0 / (float)((ulong)plVar8 & 0xffffffff);
      }
      uStack_100 = CONCAT44(fVar25,(float)((ulong)plVar8 & 0xffffffff));
      uStack_f8 = (long *)0x0;
      lVar16 = *(long *)(*(long *)(param_6 + 0xcb8) + 0x18);
      func_0x00010ab80910(*(undefined8 *)(lVar16 + 0x90),*(undefined8 *)(lVar16 + 0x98),
                          *(undefined4 *)(lVar12 + 0x10),&uStack_100);
    }
  }
  FUN_10ab81618(param_7,lStack_b0,param_6);
  uStack_f8 = (long *)uStack_98;
  uStack_100 = uStack_a0;
  uStack_e8 = uStack_88;
  uStack_f0 = uStack_90;
  uStack_e0 = uStack_80;
  (**(code **)(*param_8 + 0x90))(auStack_124,param_8);
  FUN_10ab80e24(param_5,&uStack_100,&lStack_b0,param_7,lVar18,auStack_124,fVar20,param_6,
                param_5 + 0x1d5);
  plVar8 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar11 = plStack_b8 + 1;
    do {
      lVar18 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      param_5 = plVar8;
    }
  }
  plVar8 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar11 = plStack_a8 + 1;
    do {
      lVar18 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      param_5 = plVar8;
    }
  }
  return param_5;
}



/* Entry: 10ab7e6dc; end: 10ab7e937;  */

bool FUN_10ab7e6dc(long param_1,long param_2,float *param_3)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  undefined8 uVar8;
  
  FUN_10ab91b60();
  lVar4 = param_1 + 0x40;
  FUN_10abd8fbc(lVar4,*(undefined8 *)(param_2 + 0x18));
  if (lVar4 != 0) {
    uVar6 = (ulong)*(int *)(lVar4 + 0x40);
    lVar1 = *(long *)(param_1 + 0x90);
    uVar5 = (*(long *)(param_1 + 0x98) - lVar1 >> 2) * -0xf0f0f0f0f0f0f0f;
    if (uVar5 < uVar6 || uVar5 - uVar6 == 0) {
LAB_10ab7e7f4:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10ab7e7f8);
      (*pcVar3)();
    }
    pfVar7 = (float *)(lVar1 + (long)*(int *)(lVar4 + 0x40) * 0x44);
    bVar2 = *(byte *)(pfVar7 + 0x10);
    if ((lVar1 == 0) || (bVar2 != 7)) {
      if (0x11 < bVar2) goto LAB_10ab7e7f4;
    }
    else if ((((*pfVar7 == *param_3) && (pfVar7[1] == param_3[1])) && (pfVar7[2] == param_3[2])) &&
            (pfVar7[3] == param_3[3])) goto LAB_10ab7e7dc;
    (*(code *)(&PTR_FUN_110c530b8)[bVar2])(pfVar7);
    *(undefined1 *)(pfVar7 + 0x10) = 0x11;
    uVar8 = *(undefined8 *)param_3;
    *(undefined8 *)(pfVar7 + 2) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)pfVar7 = uVar8;
    *(undefined1 *)(pfVar7 + 0x10) = 7;
    FUN_10a303694(1);
    _glUniform4fv(uVar6,1,param_3);
  }
LAB_10ab7e7dc:
  return lVar4 != 0;
}



/* Entry: 10ab7e938; end: 10ab7f007;  */

bool FUN_10ab7e938(long param_1,int *param_2,ulong param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  uint uVar10;
  ulong uVar11;
  code *pcVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  undefined4 *puVar25;
  long lVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  float fVar30;
  undefined4 uStack_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  param_2[0x14e] = 0;
  param_2[1] = 0;
  plVar24 = param_4;
  (**(code **)(*param_4 + 0x20))();
  plVar13 = param_4;
  (**(code **)(*param_4 + 0x28))();
  if (0xf < (uint)param_2[0x14e]) goto LAB_10ab7efec;
  *(long **)(param_3 + (ulong)(uint)param_2[0x14e] * 8 + 0x30) = plVar13;
  plVar13 = param_4 + 5;
  FUN_10ab7f008(param_1 + 0x1250);
  uVar6 = param_2[0x14e];
  if (0xf < uVar6) goto LAB_10ab7efec;
  param_2[(ulong)uVar6 + 0x14f] = (int)*plVar24;
  param_2[(ulong)uVar6 + 0x15f] = *(int *)((long)plVar24 + 0x44);
  lVar26 = *(long *)(param_2 + 0x170);
  uVar6 = *(uint *)(param_4 + 0x19);
  uVar27 = (ulong)uVar6;
  (**(code **)(*param_4 + 0x20))();
  uVar29 = *(ulong *)(lVar26 + 0x220);
  if (uVar29 != 0) {
    uVar16 = uVar29 - 1;
    uVar28 = (uint)uVar29;
    if ((uVar29 & uVar16) == 0) {
      uVar18 = (ulong)(uVar28 - 1 & uVar6);
    }
    else {
      uVar18 = uVar27;
      if (uVar29 <= uVar27) {
        uVar10 = 0;
        if (uVar28 != 0) {
          uVar10 = uVar6 / uVar28;
        }
        uVar18 = (ulong)(uVar6 - uVar10 * uVar28);
      }
    }
    puVar19 = *(undefined8 **)(*(long *)(lVar26 + 0x218) + uVar18 * 8);
    if (puVar19 != (undefined8 *)0x0) {
      for (plVar24 = (long *)*puVar19; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        uVar20 = plVar24[1];
        if (uVar20 == uVar27) {
          if (*(uint *)(plVar24 + 2) == uVar6) goto LAB_10ab7eee8;
        }
        else {
          if ((uVar29 & uVar16) == 0) {
            uVar20 = uVar20 & uVar16;
          }
          else if (uVar29 <= uVar20) {
            uVar23 = 0;
            if (uVar29 != 0) {
              uVar23 = uVar20 / uVar29;
            }
            uVar20 = uVar20 - uVar23 * uVar29;
          }
          if (uVar20 != uVar18) break;
        }
      }
    }
    if ((uVar29 & uVar16) == 0) {
      param_3 = (ulong)(uVar28 - 1 & uVar6);
    }
    else {
      param_3 = uVar27;
      if (uVar29 <= uVar27) {
        uVar10 = 0;
        if (uVar28 != 0) {
          uVar10 = uVar6 / uVar28;
        }
        param_3 = (ulong)(uVar6 - uVar10 * uVar28);
      }
    }
    puVar19 = *(undefined8 **)(*(long *)(lVar26 + 0x218) + param_3 * 8);
    if (puVar19 != (undefined8 *)0x0) {
      for (plVar24 = (long *)*puVar19; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
        uVar18 = plVar24[1];
        if (uVar18 == uVar27) {
          if (*(uint *)(plVar24 + 2) == uVar6) goto LAB_10ab7edac;
        }
        else {
          if ((uVar29 & uVar16) == 0) {
            uVar18 = uVar18 & uVar16;
          }
          else if (uVar29 <= uVar18) {
            uVar20 = 0;
            if (uVar29 != 0) {
              uVar20 = uVar18 / uVar29;
            }
            uVar18 = uVar18 - uVar20 * uVar29;
          }
          if (uVar18 != param_3) break;
        }
      }
    }
  }
  plVar24 = (long *)0x30;
  __Znwm();
  *plVar24 = 0;
  plVar24[1] = uVar27;
  *(uint *)(plVar24 + 2) = uVar6;
  plVar24[4] = 0;
  plVar24[5] = 0;
  plVar24[3] = 0;
  fVar30 = (float)(*(long *)(lVar26 + 0x230) + 1);
  if ((uVar29 == 0) || (*(float *)(lVar26 + 0x238) * (float)uVar29 < fVar30)) {
    uVar16 = 1;
    if (2 < uVar29) {
      uVar16 = (ulong)((uVar29 & uVar29 - 1) != 0);
    }
    uVar16 = uVar16 | uVar29 << 1;
    uVar18 = (ulong)(fVar30 / *(float *)(lVar26 + 0x238));
    if (uVar16 <= uVar18) {
      uVar16 = uVar18;
    }
    if (uVar16 - 1 == 0) {
      uVar16 = 2;
    }
    else if ((uVar16 & uVar16 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar29 = *(ulong *)(lVar26 + 0x220);
    }
    if (uVar29 < uVar16) {
LAB_10ab7ebbc:
      if (uVar16 >> 0x3d != 0) {
LAB_10ab7efe8:
        func_0x000109ffded8();
        goto LAB_10ab7efec;
      }
      lVar14 = uVar16 << 3;
      __Znwm();
      lVar15 = *(long *)(lVar26 + 0x218);
      *(long *)(lVar26 + 0x218) = lVar14;
      if (lVar15 != 0) {
        __ZdlPv();
      }
      uVar29 = 0;
      *(ulong *)(lVar26 + 0x220) = uVar16;
      do {
        *(undefined8 *)(*(long *)(lVar26 + 0x218) + uVar29 * 8) = 0;
        uVar29 = uVar29 + 1;
      } while (uVar16 != uVar29);
      plVar17 = *(long **)(lVar26 + 0x228);
      uVar29 = uVar16;
      if (plVar17 != (long *)0x0) {
        uVar18 = plVar17[1];
        uVar20 = uVar16 - 1;
        if ((uVar16 & uVar20) == 0) {
          uVar18 = uVar18 & uVar20;
        }
        else if (uVar16 <= uVar18) {
          uVar23 = 0;
          if (uVar16 != 0) {
            uVar23 = uVar18 / uVar16;
          }
          uVar18 = uVar18 - uVar23 * uVar16;
        }
        *(long *)(*(long *)(lVar26 + 0x218) + uVar18 * 8) = lVar26 + 0x228;
        plVar21 = (long *)*plVar17;
        while (plVar21 != (long *)0x0) {
          uVar23 = plVar21[1];
          if ((uVar16 & uVar20) == 0) {
            uVar23 = uVar23 & uVar20;
          }
          else if (uVar16 <= uVar23) {
            uVar11 = 0;
            if (uVar16 != 0) {
              uVar11 = uVar23 / uVar16;
            }
            uVar23 = uVar23 - uVar11 * uVar16;
          }
          plVar22 = plVar21;
          if (uVar23 != uVar18) {
            lVar14 = *(long *)(lVar26 + 0x218);
            if (*(long *)(lVar14 + uVar23 * 8) == 0) {
              *(long **)(lVar14 + uVar23 * 8) = plVar17;
              uVar18 = uVar23;
            }
            else {
              *plVar17 = *plVar21;
              *plVar21 = **(undefined8 **)(lVar14 + uVar23 * 8);
              **(long **)(lVar14 + uVar23 * 8) = (long)plVar21;
              plVar22 = plVar17;
            }
          }
          plVar17 = plVar22;
          plVar21 = (long *)*plVar22;
        }
      }
    }
    else if (uVar16 < uVar29) {
      uVar18 = (ulong)((float)*(ulong *)(lVar26 + 0x230) / *(float *)(lVar26 + 0x238));
      if ((uVar29 < 3) || ((uVar29 & uVar29 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar18) {
        uVar18 = 1L << (-LZCOUNT(uVar18 - 1) & 0x3fU);
      }
      if (uVar16 <= uVar18) {
        uVar16 = uVar18;
      }
      if (uVar16 < uVar29) {
        if (uVar16 != 0) goto LAB_10ab7ebbc;
        lVar14 = *(long *)(lVar26 + 0x218);
        *(undefined8 *)(lVar26 + 0x218) = 0;
        if (lVar14 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(lVar26 + 0x220) = 0;
        uVar29 = 0;
      }
      else {
        uVar29 = *(ulong *)(lVar26 + 0x220);
      }
    }
    if ((uVar29 & uVar29 - 1) == 0) {
      param_3 = (ulong)((int)uVar29 - 1U & uVar6);
    }
    else {
      param_3 = uVar27;
      if (uVar29 <= uVar27) {
        uVar16 = 0;
        if (uVar29 != 0) {
          uVar16 = uVar27 / uVar29;
        }
        param_3 = uVar27 - uVar16 * uVar29;
      }
    }
  }
  lVar14 = *(long *)(lVar26 + 0x218);
  plVar17 = *(long **)(lVar14 + param_3 * 8);
  if (plVar17 == (long *)0x0) {
    *plVar24 = *(long *)(lVar26 + 0x228);
    *(long **)(lVar26 + 0x228) = plVar24;
    *(long *)(lVar14 + param_3 * 8) = lVar26 + 0x228;
    if (*plVar24 != 0) {
      uVar27 = *(ulong *)(*plVar24 + 8);
      if ((uVar29 & uVar29 - 1) == 0) {
        uVar27 = uVar27 & uVar29 - 1;
      }
      else if (uVar29 <= uVar27) {
        uVar16 = 0;
        if (uVar29 != 0) {
          uVar16 = uVar27 / uVar29;
        }
        uVar27 = uVar27 - uVar16 * uVar29;
      }
      plVar17 = (long *)(*(long *)(lVar26 + 0x218) + uVar27 * 8);
      goto LAB_10ab7ed9c;
    }
  }
  else {
    *plVar24 = *plVar17;
LAB_10ab7ed9c:
    *plVar17 = (long)plVar24;
  }
  *(long *)(lVar26 + 0x230) = *(long *)(lVar26 + 0x230) + 1;
LAB_10ab7edac:
  lVar26 = *(long *)(lVar26 + 0x18);
  FUN_10ab91b60(lVar26);
  for (plVar17 = *(long **)(lVar26 + 0x28); plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
    lVar26 = param_4[1];
    lVar14 = param_4[2];
    if (lVar26 == lVar14) {
LAB_10ab7edfc:
      if (lVar26 != lVar14 && lVar26 != 0) {
        uVar7 = *(undefined4 *)(plVar17 + 8);
        uVar8 = *(undefined4 *)(lVar26 + 0x30);
        uVar2 = *(undefined4 *)(lVar26 + 0x24);
        uVar3 = *(undefined4 *)(lVar26 + 0x28);
        uVar9 = *(undefined1 *)(lVar26 + 0x2c);
        puVar4 = (undefined4 *)plVar24[4];
        if (puVar4 < (undefined4 *)plVar24[5]) {
          *puVar4 = uVar7;
          puVar4[1] = 0;
          puVar4[2] = uVar2;
          puVar4[3] = uVar8;
          puVar4[4] = uVar3;
          puVar25 = puVar4 + 6;
          *(undefined1 *)(puVar4 + 5) = uVar9;
        }
        else {
          lVar26 = (long)puVar4 - plVar24[3];
          uVar29 = (lVar26 >> 3) * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar29) {
            FUN_10abcc200();
            goto LAB_10ab7efe8;
          }
          lVar14 = plVar24[5] - plVar24[3] >> 3;
          uVar27 = lVar14 * 0x5555555555555556;
          if (uVar27 < uVar29 || uVar27 - uVar29 == 0) {
            uVar27 = uVar29;
          }
          if (0x555555555555554 < (ulong)(lVar14 * -0x5555555555555555)) {
            uVar27 = 0xaaaaaaaaaaaaaaa;
          }
          FUN_10abcc214();
          puVar4 = (undefined4 *)(uVar27 + lVar26);
          lVar26 = (long)plVar13 * 0x18;
          *puVar4 = uVar7;
          puVar4[1] = 0;
          puVar4[2] = uVar2;
          puVar4[3] = uVar8;
          puVar4[4] = uVar3;
          *(undefined1 *)(puVar4 + 5) = uVar9;
          puVar25 = puVar4 + 6;
          plVar13 = (long *)plVar24[3];
          lVar15 = (long)puVar4 - (plVar24[4] - (long)plVar13);
          _memcpy(lVar15);
          lVar14 = plVar24[3];
          plVar24[3] = lVar15;
          plVar24[4] = (long)puVar25;
          plVar24[5] = uVar27 + lVar26;
          if (lVar14 != 0) {
            __ZdlPv();
          }
        }
        plVar24[4] = (long)puVar25;
      }
    }
    else {
      do {
        if (*(long *)(lVar26 + 0x18) == plVar17[5]) goto LAB_10ab7edfc;
        lVar26 = lVar26 + 0x38;
      } while (lVar26 != lVar14);
    }
  }
LAB_10ab7eee8:
  puVar19 = (undefined8 *)plVar24[3];
  puVar5 = (undefined8 *)plVar24[4];
  if (puVar5 == puVar19) {
    if (0xf < (uint)param_2[0x14e]) {
LAB_10ab7efec:
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10ab7eff0);
      (*pcVar12)();
    }
    param_2[(ulong)(uint)param_2[0x14e] + 0x14f] = 0;
  }
  *param_2 = (int)((ulong)(*(long *)(param_1 + 0xf10) - *(long *)(param_1 + 0xf08)) >> 3) *
             -0x55555555;
  for (puVar1 = puVar19; puVar5 != puVar1; puVar1 = puVar1 + 3) {
    uStack_78 = puVar1[1];
    uStack_70 = puVar1[2];
    _uStack_80 = CONCAT44(param_2[0x14e],(int)*puVar1);
    func_0x00010ab8e8f8(param_1 + 0xf08,&uStack_80);
    param_2[1] = param_2[1] + 1;
  }
  param_2[0x14e] = param_2[0x14e] + 1;
  return puVar5 != puVar19;
}



/* Entry: 10ab7f008; end: 10ab7f0d3;  */

void FUN_10ab7f008(long param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar6 = *param_2;
  lVar4 = param_1 + 0x30;
  uVar5 = uVar6;
  FUN_10abd9efc();
  if ((uVar5 & 1) != 0) {
    *(ulong *)(*(long *)(param_1 + 0x38) + lVar4 * 8) = uVar6;
    func_0x00010a1759fc(param_1 + 200,param_2);
  }
  lVar4 = param_1 + 0x50;
  uVar5 = uVar6;
  FUN_10abd9efc();
  if ((uVar5 & 1) != 0) {
    *(ulong *)(*(long *)(param_1 + 0x58) + lVar4 * 8) = uVar6;
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
    if (param_2[1] != 0) {
      plVar1 = (long *)(param_2[1] + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x00010aba31b4(param_1,&uStack_40);
    if (uStack_38 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    *(undefined1 *)(uVar6 + 0x18) = 1;
  }
  return;
}



/* Entry: 10ab7f0d4; end: 10ab7f103;  */

void FUN_10ab7f0d4(long param_1,uint *param_2,long param_3,uint *param_4)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ushort uVar4;
  code *pcVar5;
  undefined *puVar6;
  uint *puVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  long *plVar15;
  long *plVar16;
  uint uStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  byte bStack_74;
  
  if ((uint)param_2 < 6) {
    *(undefined4 *)(param_1 + 0x2c0) =
         *(undefined4 *)(&UNK_10e502de0 + ((ulong)param_2 & 0xffffffff) * 4);
    return;
  }
  puVar6 = &UNK_10f697b69;
  FUN_10a0ee06c();
  puVar7 = param_4;
  (**(code **)(*(long *)param_4 + 0x20))();
  (**(code **)(*(long *)param_4 + 0x28))();
  (**(code **)(*(long *)param_4 + 0x20))();
  uVar9 = *puVar7;
  uVar14 = *param_2;
  uVar11 = (ulong)uVar14;
  uVar2 = param_2[1] + uVar14;
  if (uVar14 < uVar2) {
    uVar12 = (*(long *)(puVar6 + 0xf10) - *(long *)(puVar6 + 0xf08) >> 3) * -0x5555555555555555;
    uVar3 = 0;
    if (uVar11 <= uVar12) {
      uVar3 = uVar12 - uVar11;
    }
    if (uVar3 <= param_2[1] - 1) goto LAB_10ab7f40c;
    uVar14 = 0;
    lVar10 = uVar2 - uVar11;
    puVar7 = (uint *)(*(long *)(puVar6 + 0xf08) + uVar11 * 0x18);
    do {
      uVar14 = 1 << (ulong)(*puVar7 & 0x1f) | uVar14;
      lVar10 = lVar10 + -1;
      puVar7 = puVar7 + 6;
    } while (lVar10 != 0);
  }
  else {
    uVar14 = 0;
  }
  if (0xa7 < *(int *)(puVar6 + 0x40)) {
    lVar10 = *(long *)(*(long *)(param_2 + 0x170) + 0x18);
    FUN_10ab91b60(lVar10);
    plVar16 = *(long **)(lVar10 + 0x28);
    if (plVar16 != (long *)0x0) {
      bVar8 = false;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = (uint)param_4 / uVar9;
      }
      do {
        while ((uVar14 >> (ulong)(*(uint *)(plVar16 + 8) & 0x1f) & 1) == 0) {
          uVar4 = *(ushort *)(plVar16 + 7);
          bStack_74 = uVar4 < 10 & (byte)(0x388 >> (ulong)(uVar4 & 0x1f));
          uVar9 = (uint)uVar4;
          if (uVar9 < 0x20) {
            if ((1 << (ulong)(uVar9 & 0x1f) & 0x800388U) != 0) {
              uStack_80 = 2;
              goto LAB_10ab7f264;
            }
            if (uVar9 != 0x1f) goto LAB_10ab7f2a8;
            uStack_80 = 7;
LAB_10ab7f2a0:
            uStack_78 = 2;
          }
          else {
LAB_10ab7f2a8:
            uStack_80 = 0;
LAB_10ab7f264:
            uVar9 = (uint)uVar4;
            if (uVar9 < 0x20) {
              if ((1 << (ulong)(uVar9 & 0x1f) & 0x800388U) != 0) {
                uStack_78 = 4;
                goto LAB_10ab7f2b4;
              }
              if (uVar9 == 0x1f) goto LAB_10ab7f2a0;
            }
            uStack_78 = 0;
          }
LAB_10ab7f2b4:
          uStack_7c = 0;
          uStack_84 = param_2[0x14e];
          uStack_88 = *(uint *)(plVar16 + 8);
          func_0x00010ab8e8f8(puVar6 + 0xf08,&uStack_88);
          param_2[1] = param_2[1] + 1;
          plVar16 = (long *)*plVar16;
          bVar8 = true;
          if (plVar16 == (long *)0x0) goto LAB_10ab7f2f0;
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
      if (bVar8) {
LAB_10ab7f2f0:
        puVar1 = (ulong *)(puVar6 + 0xe98);
        plVar16 = *(long **)(puVar6 + 0xe98);
        if (plVar16 == (long *)0x0) {
          FUN_10a2421c8();
          plVar16 = (long *)plVar16[0x45];
          (**(code **)(*plVar16 + 0x48))();
          FUN_10a174ef8(puVar1,plVar16);
          plVar16 = (long *)*puVar1;
        }
        if (uVar2 < 2) {
          uVar2 = 1;
        }
        plVar13 = (long *)(ulong)(uVar2 << 2);
        (**(code **)(*plVar16 + 0x20))();
        if (plVar16 < plVar13) {
          plVar15 = (long *)*puVar1;
          plVar16 = plVar15;
          (**(code **)(*plVar15 + 0x30))(plVar15,plVar13);
          _memset();
          uVar11 = 0;
          do {
            *(undefined4 *)((long)plVar16 + uVar11 * 4) = 0xffff00ff;
            uVar11 = uVar11 + 2;
          } while (uVar11 < uVar2);
          (**(code **)(*plVar15 + 0x38))(plVar15);
          (**(code **)(*plVar15 + 0x40))(plVar15,0,0,plVar13,1);
        }
        FUN_10ab7f008(puVar6 + 0x1250,puVar1);
        uVar2 = param_2[0x14e];
        if (0xf < uVar2) {
LAB_10ab7f40c:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab7f410);
          (*pcVar5)();
        }
        *(ulong *)(param_3 + (ulong)uVar2 * 8 + 0x30) = *puVar1;
        param_2[(ulong)uVar2 + 0x14f] = 4;
        param_2[0x14e] = uVar2 + 1;
      }
    }
  }
  return;
}



/* Entry: 10ab7f104; end: 10ab7f40f;  */

void FUN_10ab7f104(long param_1,uint *param_2,long param_3,uint *param_4)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ushort uVar4;
  code *pcVar5;
  uint *puVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  uint uVar13;
  long *plVar14;
  long *plVar15;
  uint uStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  byte bStack_64;
  
  puVar6 = param_4;
  (**(code **)(*(long *)param_4 + 0x20))();
  (**(code **)(*(long *)param_4 + 0x28))();
  (**(code **)(*(long *)param_4 + 0x20))();
  uVar8 = *puVar6;
  uVar13 = *param_2;
  uVar10 = (ulong)uVar13;
  uVar2 = param_2[1] + uVar13;
  if (uVar13 < uVar2) {
    uVar11 = (*(long *)(param_1 + 0xf10) - *(long *)(param_1 + 0xf08) >> 3) * -0x5555555555555555;
    uVar3 = 0;
    if (uVar10 <= uVar11) {
      uVar3 = uVar11 - uVar10;
    }
    if (uVar3 <= param_2[1] - 1) goto LAB_10ab7f40c;
    uVar13 = 0;
    lVar9 = uVar2 - uVar10;
    puVar6 = (uint *)(*(long *)(param_1 + 0xf08) + uVar10 * 0x18);
    do {
      uVar13 = 1 << (ulong)(*puVar6 & 0x1f) | uVar13;
      lVar9 = lVar9 + -1;
      puVar6 = puVar6 + 6;
    } while (lVar9 != 0);
  }
  else {
    uVar13 = 0;
  }
  if (0xa7 < *(int *)(param_1 + 0x40)) {
    lVar9 = *(long *)(*(long *)(param_2 + 0x170) + 0x18);
    FUN_10ab91b60(lVar9);
    plVar15 = *(long **)(lVar9 + 0x28);
    if (plVar15 != (long *)0x0) {
      bVar7 = false;
      uVar2 = 0;
      if (uVar8 != 0) {
        uVar2 = (uint)param_4 / uVar8;
      }
      do {
        while ((uVar13 >> (ulong)(*(uint *)(plVar15 + 8) & 0x1f) & 1) == 0) {
          uVar4 = *(ushort *)(plVar15 + 7);
          bStack_64 = uVar4 < 10 & (byte)(0x388 >> (ulong)(uVar4 & 0x1f));
          uVar8 = (uint)uVar4;
          if (uVar8 < 0x20) {
            if ((1 << (ulong)(uVar8 & 0x1f) & 0x800388U) != 0) {
              uStack_70 = 2;
              goto LAB_10ab7f264;
            }
            if (uVar8 != 0x1f) goto LAB_10ab7f2a8;
            uStack_70 = 7;
LAB_10ab7f2a0:
            uStack_68 = 2;
          }
          else {
LAB_10ab7f2a8:
            uStack_70 = 0;
LAB_10ab7f264:
            uVar8 = (uint)uVar4;
            if (uVar8 < 0x20) {
              if ((1 << (ulong)(uVar8 & 0x1f) & 0x800388U) != 0) {
                uStack_68 = 4;
                goto LAB_10ab7f2b4;
              }
              if (uVar8 == 0x1f) goto LAB_10ab7f2a0;
            }
            uStack_68 = 0;
          }
LAB_10ab7f2b4:
          uStack_6c = 0;
          uStack_74 = param_2[0x14e];
          uStack_78 = *(uint *)(plVar15 + 8);
          func_0x00010ab8e8f8(param_1 + 0xf08,&uStack_78);
          param_2[1] = param_2[1] + 1;
          plVar15 = (long *)*plVar15;
          bVar7 = true;
          if (plVar15 == (long *)0x0) goto LAB_10ab7f2f0;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
      if (bVar7) {
LAB_10ab7f2f0:
        puVar1 = (ulong *)(param_1 + 0xe98);
        plVar15 = *(long **)(param_1 + 0xe98);
        if (plVar15 == (long *)0x0) {
          FUN_10a2421c8();
          plVar15 = (long *)plVar15[0x45];
          (**(code **)(*plVar15 + 0x48))();
          FUN_10a174ef8(puVar1,plVar15);
          plVar15 = (long *)*puVar1;
        }
        if (uVar2 < 2) {
          uVar2 = 1;
        }
        plVar12 = (long *)(ulong)(uVar2 << 2);
        (**(code **)(*plVar15 + 0x20))();
        if (plVar15 < plVar12) {
          plVar14 = (long *)*puVar1;
          plVar15 = plVar14;
          (**(code **)(*plVar14 + 0x30))(plVar14,plVar12);
          _memset();
          uVar10 = 0;
          do {
            *(undefined4 *)((long)plVar15 + uVar10 * 4) = 0xffff00ff;
            uVar10 = uVar10 + 2;
          } while (uVar10 < uVar2);
          (**(code **)(*plVar14 + 0x38))(plVar14);
          (**(code **)(*plVar14 + 0x40))(plVar14,0,0,plVar12,1);
        }
        FUN_10ab7f008(param_1 + 0x1250,puVar1);
        uVar2 = param_2[0x14e];
        if (0xf < uVar2) {
LAB_10ab7f40c:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab7f410);
          (*pcVar5)();
        }
        *(ulong *)(param_3 + (ulong)uVar2 * 8 + 0x30) = *puVar1;
        param_2[(ulong)uVar2 + 0x14f] = 4;
        param_2[0x14e] = uVar2 + 1;
      }
    }
  }
  return;
}



/* Entry: 10ab7f410; end: 10ab7f41f;  */

bool FUN_10ab7f410(long param_1)

{
  return *(long *)(param_1 + 0xd78) != 0;
}



/* Entry: 10ab7f420; end: 10ab8047f;  */

long * FUN_10ab7f420(long param_1,long *param_2)

{
  long *plVar1;
  undefined7 *puVar2;
  ulong uVar3;
  code *pcVar4;
  long **pplVar5;
  undefined1 **ppuVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  float fVar23;
  undefined1 *puStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined1 uStack_a0;
  undefined6 uStack_9f;
  char cStack_99;
  undefined8 uStack_98;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined1 uStack_71;
  long lStack_70;
  long lStack_68;
  
  ppuVar6 = &puStack_d0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_2[1];
  plStack_b0 = (long *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar10 = (ulong)*(byte *)((long)param_2 + 0x17);
    plStack_b0 = param_2;
  }
  uStack_a8 = (undefined7)uVar10;
  uStack_a1 = (undefined1)(uVar10 >> 0x38);
  pplVar5 = &plStack_b0;
  FUN_10a159054(pplVar5,&UNK_10f64090a,5);
  plStack_b0 = (long *)&UNK_10f69689c;
  uStack_a8 = 0x56;
  uStack_a1 = 0;
  if ((int)pplVar5 != 0) {
    FUN_10a0edfc4(&plStack_b0);
    goto LAB_10ab803bc;
  }
  plVar1 = (long *)(param_1 + 0x150);
  uVar10 = *(ulong *)(param_1 + 0x158);
  if (uVar10 != 0) {
    uVar11 = param_2[3];
    uVar13 = uVar10 - 1;
    if ((uVar10 & uVar13) == 0) {
      uVar14 = uVar13 & uVar11;
    }
    else {
      uVar14 = uVar11;
      if (uVar10 <= uVar11) {
        uVar14 = 0;
        if (uVar10 != 0) {
          uVar14 = uVar11 / uVar10;
        }
        uVar14 = uVar11 - uVar14 * uVar10;
      }
    }
    plVar17 = *(long **)(*plVar1 + uVar14 * 8);
    if (plVar17 != (long *)0x0) {
      do {
        while( true ) {
          plVar17 = (long *)*plVar17;
          if (plVar17 == (long *)0x0) goto LAB_10ab7f52c;
          uVar19 = plVar17[1];
          if (uVar19 != uVar11) break;
          if (plVar17[5] == uVar11) {
            plVar17 = plVar17 + 6;
            goto LAB_10ab80330;
          }
        }
        if ((uVar10 & uVar13) == 0) {
          uVar19 = uVar19 & uVar13;
        }
        else if (uVar10 <= uVar19) {
          uVar18 = 0;
          if (uVar10 != 0) {
            uVar18 = uVar19 / uVar10;
          }
          uVar19 = uVar19 - uVar18 * uVar10;
        }
      } while (uVar19 == uVar14);
    }
  }
LAB_10ab7f52c:
  lVar20 = *(long *)(param_1 + 0x18);
  FUN_10ab91b60(lVar20);
  lVar20 = lVar20 + 0x40;
  FUN_10abd8fbc(lVar20,param_2[3]);
  lVar8 = 0;
  if (lVar20 != 0) {
    lVar8 = lVar20 + 0x30;
  }
  lVar22 = *(long *)(param_1 + 0x18);
  uStack_c0 = CONCAT17(5,(undefined7)uStack_c0);
  puStack_d0 = (undefined1 *)CONCAT26(puStack_d0._6_2_,0x4353727241);
  uVar10 = param_2[1];
  plVar17 = (long *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar10 = (ulong)*(byte *)((long)param_2 + 0x17);
    plVar17 = param_2;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (&puStack_d0,0,plVar17,uVar10);
  plStack_b0 = (long *)*ppuVar6;
  uStack_80 = SUB87(ppuVar6[1],0);
  uStack_79 = (undefined1)*(undefined8 *)((long)ppuVar6 + 0xf);
  uStack_78 = (undefined7)((ulong)*(undefined8 *)((long)ppuVar6 + 0xf) >> 8);
  cStack_99 = *(char *)((long)ppuVar6 + 0x17);
  ppuVar6[1] = (undefined1 *)0x0;
  ppuVar6[2] = (undefined1 *)0x0;
  *ppuVar6 = (undefined1 *)0x0;
  uStack_a0 = (undefined1)uStack_78;
  uStack_9f = (undefined6)((uint7)uStack_78 >> 8);
  uStack_a8 = uStack_80;
  uStack_a1 = uStack_79;
  uStack_98 = 0;
  func_0x000107c2b080(&plStack_b0);
  FUN_10ab91b60(lVar22);
  uVar10 = lVar22 + 0x40;
  FUN_10abd8fbc(uVar10,uStack_98);
  lVar22 = 0;
  if (uVar10 != 0) {
    lVar22 = uVar10 + 0x30;
  }
  if (cStack_99 < '\0') {
    __ZdlPv(plStack_b0);
  }
  if ((long)uStack_c0 < 0) {
    __ZdlPv(puStack_d0);
    if (lVar20 != 0) goto LAB_10ab7f628;
LAB_10ab7f640:
    plVar17 = (long *)0x0;
    if (uVar10 != 0) {
      if ((*(ushort *)(uVar10 + 0x38) - 0x19 < 6) || (*(ushort *)(uVar10 + 0x38) == 0xd))
      goto LAB_10ab7f654;
      plVar17 = (long *)0x0;
    }
LAB_10ab80330:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return plVar17;
    }
    ___stack_chk_fail();
  }
  else {
    if (lVar20 == 0) goto LAB_10ab7f640;
LAB_10ab7f628:
    if ((5 < *(ushort *)(lVar20 + 0x38) - 0x19) && (*(ushort *)(lVar20 + 0x38) != 0xd))
    goto LAB_10ab7f640;
LAB_10ab7f654:
    uVar13 = param_2[3];
    uVar11 = *(ulong *)(param_1 + 0x158);
    if (uVar11 != 0) {
      uVar14 = uVar11 - 1;
      if ((uVar11 & uVar14) == 0) {
        uVar10 = uVar14 & uVar13;
      }
      else {
        uVar10 = uVar13;
        if (uVar11 <= uVar13) {
          uVar10 = 0;
          if (uVar11 != 0) {
            uVar10 = uVar13 / uVar11;
          }
          uVar10 = uVar13 - uVar10 * uVar11;
        }
      }
      puVar12 = *(undefined8 **)(*plVar1 + uVar10 * 8);
      if (puVar12 != (undefined8 *)0x0) {
        for (plVar21 = (long *)*puVar12; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
          uVar19 = plVar21[1];
          if (uVar19 == uVar13) {
            if (plVar21[5] == uVar13) goto LAB_10ab7f9f0;
          }
          else {
            if ((uVar11 & uVar14) == 0) {
              uVar19 = uVar19 & uVar14;
            }
            else if (uVar11 <= uVar19) {
              uVar18 = 0;
              if (uVar11 != 0) {
                uVar18 = uVar19 / uVar11;
              }
              uVar19 = uVar19 - uVar18 * uVar11;
            }
            if (uVar19 != uVar10) break;
          }
        }
      }
    }
    plVar21 = (long *)0xb8;
    __Znwm();
    uStack_a8 = SUB87(plVar1,0);
    uStack_a1 = (undefined1)((ulong)plVar1 >> 0x38);
    uStack_a0 = 0;
    uStack_9f = 0;
    cStack_99 = '\0';
    *plVar21 = 0;
    plVar21[1] = uVar13;
    plStack_b0 = plVar21;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(plVar21 + 2,*param_2,param_2[1]);
      uVar14 = param_2[3];
    }
    else {
      lVar20 = *param_2;
      plVar21[3] = param_2[1];
      plVar21[2] = lVar20;
      plVar21[4] = param_2[2];
      uVar14 = uVar13;
    }
    plVar21[5] = uVar14;
    plVar21[6] = 0;
    plVar21[7] = 0;
    plVar21[8] = 0;
    plVar21[9] = 0x28cd94bfde;
    plVar21[0xb] = 0;
    plVar21[10] = 0;
    plVar21[0xd] = 0;
    plVar21[0xc] = 0;
    plVar21[0xf] = 0;
    plVar21[0xe] = 0;
    plVar21[0x11] = 0;
    plVar21[0x10] = 0;
    plVar21[0x13] = 0;
    plVar21[0x12] = 0;
    plVar21[0x15] = 0;
    plVar21[0x14] = 0;
    plVar21[0x16] = 0;
    uStack_a0 = 1;
    fVar23 = (float)(*(long *)(param_1 + 0x168) + 1);
    if ((uVar11 != 0) && (fVar23 <= *(float *)(param_1 + 0x170) * (float)uVar11)) {
LAB_10ab7f97c:
      lVar20 = *plVar1;
      plVar17 = *(long **)(lVar20 + uVar10 * 8);
      if (plVar17 == (long *)0x0) {
        *plVar21 = *(long *)(param_1 + 0x160);
        *(long **)(param_1 + 0x160) = plVar21;
        *(long *)(lVar20 + uVar10 * 8) = param_1 + 0x160;
        if (*plVar21 != 0) {
          uVar10 = *(ulong *)(*plVar21 + 8);
          if ((uVar11 & uVar11 - 1) == 0) {
            uVar10 = uVar10 & uVar11 - 1;
          }
          else if (uVar11 <= uVar10) {
            uVar13 = 0;
            if (uVar11 != 0) {
              uVar13 = uVar10 / uVar11;
            }
            uVar10 = uVar10 - uVar13 * uVar11;
          }
          *(long **)(*plVar1 + uVar10 * 8) = plVar21;
        }
      }
      else {
        *plVar21 = *plVar17;
        *plVar17 = (long)plVar21;
      }
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + 1;
LAB_10ab7f9f0:
      plVar17 = plVar21 + 6;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar17,param_2);
      plVar21[9] = param_2[3];
      plVar21[10] = lVar8;
      plVar21[0xb] = lVar22;
      FUN_10ab9da90();
      *(int *)(plVar21 + 0x16) = (int)lVar8;
      FUN_10ab9da90();
      *(int *)((long)plVar21 + 0xb4) = (int)lVar22;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(&puStack_d0,*param_2,param_2[1]);
      }
      else {
        uStack_c8 = param_2[1];
        puStack_d0 = (undefined1 *)*param_2;
        uStack_c0 = param_2[2];
      }
      lVar20 = *(long *)(param_1 + 0x18);
      uVar10 = uStack_c8;
      if (-1 < (long)uStack_c0) {
        uVar10 = uStack_c0 >> 0x38;
      }
      FUN_10a003c90(&uStack_80,uVar10 + 9,&uStack_81);
      puVar2 = (undefined7 *)CONCAT17(uStack_79,uStack_80);
      if (-1 < lStack_70) {
        puVar2 = &uStack_80;
      }
      if (uVar10 != 0) {
        ppuVar6 = (undefined1 **)puStack_d0;
        if (-1 < (long)uStack_c0) {
          ppuVar6 = &puStack_d0;
        }
        _memmove(puVar2,ppuVar6,uVar10);
      }
      *(undefined8 *)((long)puVar2 + uVar10) = 0x726f66736e617254;
      *(undefined2 *)((undefined8 *)((long)puVar2 + uVar10) + 1) = 0x6d;
      lVar8 = lStack_70;
      plStack_b0 = (long *)CONCAT17(uStack_79,uStack_80);
      uStack_a8 = uStack_78;
      uStack_78 = 0;
      uStack_71 = 0;
      lStack_70 = 0;
      uStack_80 = 0;
      uStack_79 = 0;
      uStack_a0 = (undefined1)lVar8;
      uStack_9f = (undefined6)((ulong)lVar8 >> 8);
      cStack_99 = (char)((ulong)lVar8 >> 0x38);
      uStack_98 = 0;
      func_0x000107c2b080(&plStack_b0);
      FUN_10ab91b60(lVar20);
      lVar20 = lVar20 + 0x40;
      FUN_10abd8fbc(lVar20,uStack_98);
      if (cStack_99 < '\0') {
        __ZdlPv(plStack_b0);
      }
      if (lStack_70 < 0) {
        __ZdlPv(CONCAT17(uStack_79,uStack_80));
      }
      if (lVar20 != 0) {
        plVar21[0xc] = lVar20 + 0x30;
      }
      lVar20 = *(long *)(param_1 + 0x18);
      uVar10 = uStack_c8;
      if (-1 < (long)uStack_c0) {
        uVar10 = uStack_c0 >> 0x38;
      }
      FUN_10a003c90(&uStack_80,uVar10 + 0x15,&uStack_81);
      puVar2 = (undefined7 *)CONCAT17(uStack_79,uStack_80);
      if (-1 < lStack_70) {
        puVar2 = &uStack_80;
      }
      if (uVar10 != 0) {
        ppuVar6 = (undefined1 **)puStack_d0;
        if (-1 < (long)uStack_c0) {
          ppuVar6 = &puStack_d0;
        }
        _memmove(puVar2,ppuVar6,uVar10);
      }
      puVar12 = (undefined8 *)((long)puVar2 + uVar10);
      puVar12[1] = 0x78697274614d6e6f;
      *puVar12 = 0x697463656a6f7250;
      *(undefined8 *)((long)puVar12 + 0xd) = 0x736d726554786972;
      lVar8 = lStack_70;
      *(undefined1 *)((long)puVar12 + 0x15) = 0;
      plStack_b0 = (long *)CONCAT17(uStack_79,uStack_80);
      uStack_a8 = uStack_78;
      uStack_a1 = uStack_71;
      uStack_78 = 0;
      uStack_71 = 0;
      lStack_70 = 0;
      uStack_80 = 0;
      uStack_79 = 0;
      uStack_a0 = (undefined1)lVar8;
      uStack_9f = (undefined6)((ulong)lVar8 >> 8);
      cStack_99 = (char)((ulong)lVar8 >> 0x38);
      uStack_98 = 0;
      func_0x000107c2b080(&plStack_b0);
      FUN_10ab91b60(lVar20);
      lVar20 = lVar20 + 0x40;
      FUN_10abd8fbc(lVar20,uStack_98);
      if (cStack_99 < '\0') {
        __ZdlPv(plStack_b0);
      }
      if (lStack_70 < 0) {
        __ZdlPv(CONCAT17(uStack_79,uStack_80));
      }
      if (lVar20 != 0) {
        plVar21[0xd] = lVar20 + 0x30;
      }
      lVar20 = *(long *)(param_1 + 0x18);
      uVar10 = uStack_c8;
      if (-1 < (long)uStack_c0) {
        uVar10 = uStack_c0 >> 0x38;
      }
      FUN_10a003c90(&uStack_80,uVar10 + 8,&uStack_81);
      puVar2 = (undefined7 *)CONCAT17(uStack_79,uStack_80);
      if (-1 < lStack_70) {
        puVar2 = &uStack_80;
      }
      if (uVar10 != 0) {
        ppuVar6 = (undefined1 **)puStack_d0;
        if (-1 < (long)uStack_c0) {
          ppuVar6 = &puStack_d0;
        }
        _memmove(puVar2,ppuVar6,uVar10);
      }
      *(undefined8 *)((long)puVar2 + uVar10) = 0x78614d6e694d7655;
      *(undefined1 *)((undefined8 *)((long)puVar2 + uVar10) + 1) = 0;
      lVar8 = lStack_70;
      plStack_b0 = (long *)CONCAT17(uStack_79,uStack_80);
      uStack_a8 = uStack_78;
      uStack_a1 = uStack_71;
      uStack_78 = 0;
      uStack_71 = 0;
      lStack_70 = 0;
      uStack_80 = 0;
      uStack_79 = 0;
      uStack_a0 = (undefined1)lVar8;
      uStack_9f = (undefined6)((ulong)lVar8 >> 8);
      cStack_99 = (char)((ulong)lVar8 >> 0x38);
      uStack_98 = 0;
      func_0x000107c2b080(&plStack_b0);
      FUN_10ab91b60(lVar20);
      lVar20 = lVar20 + 0x40;
      FUN_10abd8fbc(lVar20,uStack_98);
      if (cStack_99 < '\0') {
        __ZdlPv(plStack_b0);
      }
      if (lStack_70 < 0) {
        __ZdlPv(CONCAT17(uStack_79,uStack_80));
      }
      if (lVar20 != 0) {
        plVar21[0xe] = lVar20 + 0x30;
      }
      lVar20 = *(long *)(param_1 + 0x18);
      uVar10 = uStack_c8;
      if (-1 < (long)uStack_c0) {
        uVar10 = uStack_c0 >> 0x38;
      }
      FUN_10a003c90(&uStack_80,uVar10 + 0xb,&uStack_81);
      puVar2 = (undefined7 *)CONCAT17(uStack_79,uStack_80);
      if (-1 < lStack_70) {
        puVar2 = &uStack_80;
      }
      if (uVar10 != 0) {
        ppuVar6 = (undefined1 **)puStack_d0;
        if (-1 < (long)uStack_c0) {
          ppuVar6 = &puStack_d0;
        }
        _memmove(puVar2,ppuVar6,uVar10);
      }
      puVar12 = (undefined8 *)((long)puVar2 + uVar10);
      *puVar12 = 0x6f43726564726f42;
      *(undefined4 *)((long)puVar12 + 7) = 0x726f6c6f;
      *(undefined1 *)((long)puVar12 + 0xb) = 0;
      lVar8 = lStack_70;
      plStack_b0 = (long *)CONCAT17(uStack_79,uStack_80);
      uStack_a8 = uStack_78;
      uStack_a1 = uStack_71;
      uStack_80 = 0;
      uStack_79 = 0;
      uStack_78 = 0;
      uStack_71 = 0;
      lStack_70 = 0;
      uStack_a0 = (undefined1)lVar8;
      uStack_9f = (undefined6)((ulong)lVar8 >> 8);
      cStack_99 = (char)((ulong)lVar8 >> 0x38);
      uStack_98 = 0;
      func_0x000107c2b080(&plStack_b0);
      FUN_10ab91b60(lVar20);
      lVar20 = lVar20 + 0x40;
      FUN_10abd8fbc(lVar20,uStack_98);
      if (cStack_99 < '\0') {
        __ZdlPv(plStack_b0);
      }
      if (lStack_70 < 0) {
        __ZdlPv(CONCAT17(uStack_79,uStack_80));
      }
      if (lVar20 != 0) {
        plVar21[0xf] = lVar20 + 0x30;
      }
      lVar20 = *(long *)(param_1 + 0x18);
      uVar10 = uStack_c8;
      if (-1 < (long)uStack_c0) {
        uVar10 = uStack_c0 >> 0x38;
      }
      FUN_10a003c90(&uStack_80,uVar10 + 4,&uStack_81);
      puVar2 = (undefined7 *)CONCAT17(uStack_79,uStack_80);
      if (-1 < lStack_70) {
        puVar2 = &uStack_80;
      }
      if (uVar10 != 0) {
        ppuVar6 = (undefined1 **)puStack_d0;
        if (-1 < (long)uStack_c0) {
          ppuVar6 = &puStack_d0;
        }
        _memmove(puVar2,ppuVar6,uVar10);
      }
      *(undefined4 *)((long)puVar2 + uVar10) = 0x736d6944;
      *(undefined1 *)((undefined4 *)((long)puVar2 + uVar10) + 1) = 0;
      lVar8 = lStack_70;
      plStack_b0 = (long *)CONCAT17(uStack_79,uStack_80);
      uStack_a8 = uStack_78;
      uStack_a1 = uStack_71;
      uStack_78 = 0;
      uStack_71 = 0;
      lStack_70 = 0;
      uStack_80 = 0;
      uStack_79 = 0;
      uStack_a0 = (undefined1)lVar8;
      uStack_9f = (undefined6)((ulong)lVar8 >> 8);
      cStack_99 = (char)((ulong)lVar8 >> 0x38);
      uStack_98 = 0;
      func_0x000107c2b080(&plStack_b0);
      FUN_10ab91b60(lVar20);
      lVar20 = lVar20 + 0x40;
      FUN_10abd8fbc(lVar20,uStack_98);
      if (cStack_99 < '\0') {
        __ZdlPv(plStack_b0);
      }
      if (lStack_70 < 0) {
        __ZdlPv(CONCAT17(uStack_79,uStack_80));
      }
      if (lVar20 != 0) {
        plVar21[0x13] = lVar20 + 0x30;
      }
      lVar20 = *(long *)(param_1 + 0x18);
      uVar10 = uStack_c8;
      if (-1 < (long)uStack_c0) {
        uVar10 = uStack_c0 >> 0x38;
      }
      FUN_10a003c90(&uStack_80,uVar10 + 9,&uStack_81);
      puVar2 = (undefined7 *)CONCAT17(uStack_79,uStack_80);
      if (-1 < lStack_70) {
        puVar2 = &uStack_80;
      }
      if (uVar10 != 0) {
        ppuVar6 = (undefined1 **)puStack_d0;
        if (-1 < (long)uStack_c0) {
          ppuVar6 = &puStack_d0;
        }
        _memmove(puVar2,ppuVar6,uVar10);
      }
      *(undefined8 *)((long)puVar2 + uVar10) = 0x69636552736d6944;
      *(undefined2 *)((undefined8 *)((long)puVar2 + uVar10) + 1) = 0x70;
      lVar8 = lStack_70;
      plStack_b0 = (long *)CONCAT17(uStack_79,uStack_80);
      uStack_a8 = uStack_78;
      uStack_a1 = uStack_71;
      uStack_78 = 0;
      uStack_71 = 0;
      lStack_70 = 0;
      uStack_80 = 0;
      uStack_79 = 0;
      uStack_a0 = (undefined1)lVar8;
      uStack_9f = (undefined6)((ulong)lVar8 >> 8);
      cStack_99 = (char)((ulong)lVar8 >> 0x38);
      uStack_98 = 0;
      func_0x000107c2b080(&plStack_b0);
      FUN_10ab91b60(lVar20);
      lVar20 = lVar20 + 0x40;
      FUN_10abd8fbc(lVar20,uStack_98);
      if (cStack_99 < '\0') {
        __ZdlPv(plStack_b0);
      }
      if (lStack_70 < 0) {
        __ZdlPv(CONCAT17(uStack_79,uStack_80));
      }
      if (lVar20 != 0) {
        plVar21[0x14] = lVar20 + 0x30;
      }
      lVar20 = *(long *)(param_1 + 0x18);
      uVar10 = uStack_c8;
      if (-1 < (long)uStack_c0) {
        uVar10 = uStack_c0 >> 0x38;
      }
      FUN_10a003c90(&uStack_80,uVar10 + 4,&uStack_81);
      puVar2 = (undefined7 *)CONCAT17(uStack_79,uStack_80);
      if (-1 < lStack_70) {
        puVar2 = &uStack_80;
      }
      if (uVar10 != 0) {
        ppuVar6 = (undefined1 **)puStack_d0;
        if (-1 < (long)uStack_c0) {
          ppuVar6 = &puStack_d0;
        }
        _memmove(puVar2,ppuVar6,uVar10);
      }
      *(undefined4 *)((long)puVar2 + uVar10) = 0x77656956;
      *(undefined1 *)((undefined4 *)((long)puVar2 + uVar10) + 1) = 0;
      lVar8 = lStack_70;
      plStack_b0 = (long *)CONCAT17(uStack_79,uStack_80);
      uStack_a8 = uStack_78;
      uStack_a1 = uStack_71;
      uStack_78 = 0;
      uStack_71 = 0;
      lStack_70 = 0;
      uStack_80 = 0;
      uStack_79 = 0;
      uStack_a0 = (undefined1)lVar8;
      uStack_9f = (undefined6)((ulong)lVar8 >> 8);
      cStack_99 = (char)((ulong)lVar8 >> 0x38);
      uStack_98 = 0;
      func_0x000107c2b080(&plStack_b0);
      FUN_10ab91b60(lVar20);
      lVar20 = lVar20 + 0x40;
      FUN_10abd8fbc(lVar20,uStack_98);
      if (cStack_99 < '\0') {
        __ZdlPv(plStack_b0);
      }
      if (lStack_70 < 0) {
        __ZdlPv(CONCAT17(uStack_79,uStack_80));
      }
      if (lVar20 != 0) {
        plVar21[0x15] = lVar20 + 0x30;
      }
      lVar20 = *(long *)(param_1 + 0x18);
      uVar10 = uStack_c8;
      if (-1 < (long)uStack_c0) {
        uVar10 = uStack_c0 >> 0x38;
      }
      FUN_10a003c90(&uStack_80,uVar10 + 4,&uStack_81);
      puVar2 = (undefined7 *)CONCAT17(uStack_79,uStack_80);
      if (-1 < lStack_70) {
        puVar2 = &uStack_80;
      }
      if (uVar10 != 0) {
        ppuVar6 = (undefined1 **)puStack_d0;
        if (-1 < (long)uStack_c0) {
          ppuVar6 = &puStack_d0;
        }
        _memmove(puVar2,ppuVar6,uVar10);
      }
      *(undefined4 *)((long)puVar2 + uVar10) = 0x657a6953;
      *(undefined1 *)((undefined4 *)((long)puVar2 + uVar10) + 1) = 0;
      lVar8 = lStack_70;
      plStack_b0 = (long *)CONCAT17(uStack_79,uStack_80);
      uStack_a8 = uStack_78;
      uStack_a1 = uStack_71;
      uStack_78 = 0;
      uStack_71 = 0;
      lStack_70 = 0;
      uStack_80 = 0;
      uStack_79 = 0;
      uStack_a0 = (undefined1)lVar8;
      uStack_9f = (undefined6)((ulong)lVar8 >> 8);
      cStack_99 = (char)((ulong)lVar8 >> 0x38);
      uStack_98 = 0;
      func_0x000107c2b080(&plStack_b0);
      FUN_10ab91b60(lVar20);
      lVar20 = lVar20 + 0x40;
      FUN_10abd8fbc(lVar20,uStack_98);
      if (cStack_99 < '\0') {
        __ZdlPv(plStack_b0);
      }
      if (lStack_70 < 0) {
        __ZdlPv(CONCAT17(uStack_79,uStack_80));
      }
      if (lVar20 != 0) {
        plVar21[0x10] = lVar20 + 0x30;
      }
      iVar9 = (int)plVar21[0x16];
      if (iVar9 == 0x8c1a) {
        lVar20 = *(long *)(param_1 + 0x18);
        uVar10 = uStack_c8;
        if (-1 < (long)uStack_c0) {
          uVar10 = uStack_c0 >> 0x38;
        }
        FUN_10a003c90(&uStack_80,uVar10 + 10,&uStack_81);
        puVar2 = (undefined7 *)CONCAT17(uStack_79,uStack_80);
        if (-1 < lStack_70) {
          puVar2 = &uStack_80;
        }
        if (uVar10 != 0) {
          ppuVar6 = (undefined1 **)puStack_d0;
          if (-1 < (long)uStack_c0) {
            ppuVar6 = &puStack_d0;
          }
          _memmove(puVar2,ppuVar6,uVar10);
        }
        puVar12 = (undefined8 *)((long)puVar2 + uVar10);
        *puVar12 = 0x756f437961727241;
        *(undefined2 *)(puVar12 + 1) = 0x746e;
        *(undefined1 *)((long)puVar12 + 10) = 0;
        lVar8 = lStack_70;
        plStack_b0 = (long *)CONCAT17(uStack_79,uStack_80);
        uStack_a8 = uStack_78;
        uStack_a1 = uStack_71;
        uStack_80 = 0;
        uStack_79 = 0;
        uStack_78 = 0;
        uStack_71 = 0;
        lStack_70 = 0;
        uStack_a0 = (undefined1)lVar8;
        uStack_9f = (undefined6)((ulong)lVar8 >> 8);
        cStack_99 = (char)((ulong)lVar8 >> 0x38);
        uStack_98 = 0;
        func_0x000107c2b080(&plStack_b0);
        FUN_10ab91b60(lVar20);
        lVar20 = lVar20 + 0x40;
        FUN_10abd8fbc(lVar20,uStack_98);
        if (cStack_99 < '\0') {
          __ZdlPv(plStack_b0);
        }
        if (lStack_70 < 0) {
          __ZdlPv(CONCAT17(uStack_79,uStack_80));
        }
        if (lVar20 != 0) {
          plVar21[0x12] = lVar20 + 0x30;
        }
        iVar9 = (int)plVar21[0x16];
      }
      if (iVar9 == 0x806f) {
        lVar20 = *(long *)(param_1 + 0x18);
        uVar10 = uStack_c8;
        if (-1 < (long)uStack_c0) {
          uVar10 = uStack_c0 >> 0x38;
        }
        FUN_10a003c90(&uStack_80,uVar10 + 5,&uStack_81);
        puVar2 = (undefined7 *)CONCAT17(uStack_79,uStack_80);
        if (-1 < lStack_70) {
          puVar2 = &uStack_80;
        }
        if (uVar10 != 0) {
          ppuVar6 = (undefined1 **)puStack_d0;
          if (-1 < (long)uStack_c0) {
            ppuVar6 = &puStack_d0;
          }
          _memmove(puVar2,ppuVar6,uVar10);
        }
        *(undefined4 *)((long)puVar2 + uVar10) = 0x74706544;
        *(undefined2 *)((undefined4 *)((long)puVar2 + uVar10) + 1) = 0x68;
        lVar8 = lStack_70;
        plStack_b0 = (long *)CONCAT17(uStack_79,uStack_80);
        uStack_a8 = uStack_78;
        uStack_a1 = uStack_71;
        uStack_78 = 0;
        uStack_71 = 0;
        lStack_70 = 0;
        uStack_80 = 0;
        uStack_79 = 0;
        uStack_a0 = (undefined1)lVar8;
        uStack_9f = (undefined6)((ulong)lVar8 >> 8);
        cStack_99 = (char)((ulong)lVar8 >> 0x38);
        uStack_98 = 0;
        func_0x000107c2b080(&plStack_b0);
        FUN_10ab91b60(lVar20);
        lVar20 = lVar20 + 0x40;
        FUN_10abd8fbc(lVar20,uStack_98);
        if (cStack_99 < '\0') {
          __ZdlPv(plStack_b0);
        }
        if (lStack_70 < 0) {
          __ZdlPv(CONCAT17(uStack_79,uStack_80));
        }
        if (lVar20 != 0) {
          plVar21[0x11] = lVar20 + 0x30;
        }
      }
      if ((long)uStack_c0 < 0) {
        __ZdlPv(puStack_d0);
      }
      goto LAB_10ab80330;
    }
    uVar10 = 1;
    if (2 < uVar11) {
      uVar10 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar10 = uVar10 | uVar11 << 1;
    uVar11 = (ulong)(fVar23 / *(float *)(param_1 + 0x170));
    if (uVar10 <= uVar11) {
      uVar10 = uVar11;
    }
    if (uVar10 - 1 == 0) {
      uVar10 = 2;
    }
    else if ((uVar10 & uVar10 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    uVar11 = *(ulong *)(param_1 + 0x158);
    if (uVar10 <= uVar11) {
      if (uVar10 < uVar11) {
        uVar14 = (ulong)((float)*(ulong *)(param_1 + 0x168) / *(float *)(param_1 + 0x170));
        if ((uVar11 < 3) || ((uVar11 & uVar11 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar14) {
          uVar14 = 1L << (-LZCOUNT(uVar14 - 1) & 0x3fU);
        }
        if (uVar10 <= uVar14) {
          uVar10 = uVar14;
        }
        if (uVar10 < uVar11) {
          if (uVar10 != 0) goto LAB_10ab7f7ec;
          lVar20 = *plVar1;
          *plVar1 = 0;
          if (lVar20 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(param_1 + 0x158) = 0;
          uVar11 = 0;
        }
        else {
          uVar11 = *(ulong *)(param_1 + 0x158);
        }
      }
LAB_10ab7f950:
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar10 = uVar11 - 1 & uVar13;
      }
      else {
        uVar10 = uVar13;
        if (uVar11 <= uVar13) {
          uVar10 = 0;
          if (uVar11 != 0) {
            uVar10 = uVar13 / uVar11;
          }
          uVar10 = uVar13 - uVar10 * uVar11;
        }
      }
      goto LAB_10ab7f97c;
    }
LAB_10ab7f7ec:
    if (uVar10 >> 0x3d == 0) {
      lVar20 = uVar10 << 3;
      __Znwm();
      lVar7 = *plVar1;
      *plVar1 = lVar20;
      if (lVar7 != 0) {
        __ZdlPv();
      }
      uVar11 = 0;
      *(ulong *)(param_1 + 0x158) = uVar10;
      do {
        *(undefined8 *)(*plVar1 + uVar11 * 8) = 0;
        uVar11 = uVar11 + 1;
      } while (uVar10 != uVar11);
      plVar17 = *(long **)(param_1 + 0x160);
      uVar11 = uVar10;
      if (plVar17 != (long *)0x0) {
        uVar14 = plVar17[1];
        uVar19 = uVar10 - 1;
        if ((uVar10 & uVar19) == 0) {
          uVar14 = uVar14 & uVar19;
        }
        else if (uVar10 <= uVar14) {
          uVar18 = 0;
          if (uVar10 != 0) {
            uVar18 = uVar14 / uVar10;
          }
          uVar14 = uVar14 - uVar18 * uVar10;
        }
        *(long *)(*plVar1 + uVar14 * 8) = param_1 + 0x160;
        plVar15 = (long *)*plVar17;
        while (plVar15 != (long *)0x0) {
          uVar18 = plVar15[1];
          if ((uVar10 & uVar19) == 0) {
            uVar18 = uVar18 & uVar19;
          }
          else if (uVar10 <= uVar18) {
            uVar3 = 0;
            if (uVar10 != 0) {
              uVar3 = uVar18 / uVar10;
            }
            uVar18 = uVar18 - uVar3 * uVar10;
          }
          plVar16 = plVar15;
          if (uVar18 != uVar14) {
            lVar20 = *plVar1;
            if (*(long *)(lVar20 + uVar18 * 8) == 0) {
              *(long **)(lVar20 + uVar18 * 8) = plVar17;
              uVar14 = uVar18;
            }
            else {
              *plVar17 = *plVar15;
              *plVar15 = **(undefined8 **)(lVar20 + uVar18 * 8);
              **(long **)(lVar20 + uVar18 * 8) = (long)plVar15;
              plVar16 = plVar17;
            }
          }
          plVar17 = plVar16;
          plVar15 = (long *)*plVar16;
        }
      }
      goto LAB_10ab7f950;
    }
  }
  func_0x000109ffded8();
LAB_10ab803bc:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab803c0);
  (*pcVar4)();
}



/* Entry: 10ab80480; end: 10ab80513;  */

undefined8 FUN_10ab80480(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_30;
  long *plStack_28;
  
  plVar3 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar3 + 0x10))();
  if ((int)plVar3 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_10abdd170(&lStack_30,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),plVar3,
                  3);
    uVar5 = *(undefined8 *)(lStack_30 + 8);
    if (plStack_28 != (long *)0x0) {
      plVar3 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return uVar5;
}



/* Entry: 10ab80514; end: 10ab80a07;  */

void FUN_10ab80514(long param_1,long param_2,undefined8 param_3,byte param_4)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uStack_34;
  
  uVar4 = (param_2 - param_1 >> 2) * -0xf0f0f0f0f0f0f0f;
  iVar3 = (int)param_3;
  if ((ulong)(long)iVar3 <= uVar4 && uVar4 - (long)iVar3 != 0) {
    pbVar5 = (byte *)(param_1 + (long)iVar3 * 0x44);
    bVar1 = pbVar5[0x40];
    if ((param_1 == 0) || (bVar1 != 1)) {
      if (0x11 < bVar1) goto LAB_10ab805d0;
    }
    else if (*pbVar5 == param_4) {
      return;
    }
    (*(code *)(&PTR_FUN_110c530b8)[bVar1])(pbVar5);
    *pbVar5 = param_4;
    pbVar5[0x40] = 1;
    FUN_10a303694(1);
    uStack_34 = (uint)param_4;
    _glUniform1iv(param_3,1,&uStack_34);
    return;
  }
LAB_10ab805d0:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab805d4);
  (*pcVar2)();
}



/* Entry: 10ab80a08; end: 10ab80e23;  */

void FUN_10ab80a08(long param_1,char *param_2,ulong *param_3,undefined4 *param_4,undefined8 param_5,
                  undefined8 *param_6,int param_7,long param_8)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  long *plVar8;
  undefined *puVar9;
  long *plVar10;
  char *pcVar11;
  ulong *puVar12;
  undefined4 *puVar13;
  undefined1 uVar14;
  byte bVar15;
  ulong uVar16;
  ulong extraout_x8;
  long lVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  long lStack_a8;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  *(undefined4 *)(param_3 + 1) = 3;
  if (*(long *)(param_1 + 0xd00) == 0) {
    *(undefined2 *)(param_3 + 0x5d) = 0;
    *(undefined1 *)(param_3 + 0x5e) = 0;
    iVar19 = *(int *)(param_1 + 0xb58);
    puStack_50 = &UNK_10f6947b7;
    uStack_48 = 0x48;
    if (iVar19 == 0) {
      FUN_10a0edfc4(&puStack_50);
LAB_10ab80e0c:
      FUN_10a0ee06c(&UNK_10f6947a2);
      pcVar11 = param_2;
      puVar12 = param_3;
      puVar13 = param_4;
LAB_10ab80e18:
      puVar9 = &UNK_10f697b7e;
      FUN_10a0ee06c();
      lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar8 = (long *)*puVar12;
      iVar19 = *(int *)((long)plVar8 + 0x7c);
      if (iVar19 == 0x8d41) {
        FUN_10a00946c();
LAB_10ab80fb4:
        ___stack_chk_fail();
      }
      else if ((iVar19 == param_7) || (iVar19 == puVar13[0x20])) {
        plVar10 = plVar8;
        (**(code **)(*plVar8 + 0x50))();
        ppuVar2 = &PTR_DAT_110ae4700 + ((ulong)plVar10 & 0xffffffff) * 4;
        if (0x56 < (uint)plVar10) {
          ppuVar2 = &PTR_DAT_110ae4700;
        }
        if ((*(byte *)((long)ppuVar2 + 0x14) & 1) == 0) {
          if ((*pcVar11 == '\x01') &&
             (plVar10 = plVar8, (**(code **)(*plVar8 + 0x68))(), (int)plVar10 == 0)) {
            plStack_100 = plVar8;
            FUN_10a175494(puStack_50 + 8,&plStack_100);
          }
        }
        else {
          pcVar11[4] = '\0';
          pcVar11[5] = '\0';
          pcVar11[6] = '\0';
          pcVar11[7] = '\0';
          *pcVar11 = '\0';
        }
        uStack_f8 = *(undefined8 *)(pcVar11 + 8);
        plStack_100 = *(long **)pcVar11;
        uStack_e8 = *(undefined8 *)(pcVar11 + 0x18);
        uStack_f0 = *(undefined8 *)(pcVar11 + 0x10);
        uStack_e0 = *(undefined8 *)(pcVar11 + 0x20);
        uStack_c8 = param_6[1];
        uStack_d0 = *param_6;
        uStack_b8 = param_6[3];
        uStack_c0 = param_6[2];
        uStack_b0 = *(undefined4 *)(param_6 + 4);
        uVar5 = *(uint *)(param_8 + 0xb0);
        if (0x1f < uVar5) goto LAB_10ab8104c;
        lVar17 = param_8 + (ulong)uVar5 * 0x60;
        *(long **)(lVar17 + 0xb8) = plVar8;
        *(undefined8 *)(lVar17 + 0xc0) = param_5;
        *(undefined8 *)(lVar17 + 0xd0) = uStack_f8;
        *(long **)(lVar17 + 200) = plStack_100;
        *(undefined8 *)(lVar17 + 0xe0) = uStack_e8;
        *(undefined8 *)(lVar17 + 0xd8) = uStack_f0;
        *(undefined8 *)(lVar17 + 0xe8) = uStack_e0;
        *(undefined8 *)(lVar17 + 0xf8) = uStack_c8;
        *(undefined8 *)(lVar17 + 0xf0) = uStack_d0;
        *(undefined8 *)(lVar17 + 0x108) = uStack_b8;
        *(undefined8 *)(lVar17 + 0x100) = uStack_c0;
        *(undefined4 *)(lVar17 + 0x110) = uStack_b0;
        *(uint *)(param_8 + 0xb0) = uVar5 + 1;
        FUN_10ab81220(puVar9 + 0x1250,puVar12);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
          return;
        }
        goto LAB_10ab80fb4;
      }
      FUN_10ab81074();
      FUN_10ab81074();
      FUN_10a0ee900(&plStack_100,&UNK_10f69486b,0x38);
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f69450e,&UNK_10f6948a4,0x539,"%s");
      }
      FUN_10a1084cc(&plStack_100);
LAB_10ab8104c:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab81050);
      (*pcVar6)();
    }
    *param_4 = *(undefined4 *)(param_2 + 0xd38);
LAB_10ab80b84:
    plVar8 = *(long **)(param_1 + 0xb60);
    pcVar11 = param_2;
    puVar12 = param_3;
    puVar13 = param_4;
    (**(code **)(*plVar8 + 0x60))();
    uVar7 = (uint)plVar8;
    uVar5 = uVar7 - 2;
    if (uVar5 < 0x3f) {
      if ((1L << ((ulong)uVar5 & 0x3f) & 0x4000000040004040U) == 0) {
        if ((1L << ((ulong)uVar5 & 0x3f) & 5U) == 0) goto LAB_10ab80bec;
      }
      else {
        uVar7 = 8;
      }
    }
    else {
LAB_10ab80bec:
      if (1 < uVar7) goto LAB_10ab80e18;
      uVar7 = 1;
    }
    puVar12 = param_3 + 0x65;
    *(uint *)(param_3 + 0x5c) = uVar7;
    if (**(char **)(param_1 + 0x9b8) == '\x01') {
      *(undefined1 *)((long)param_3 + 0x2e4) = 0;
      *(undefined1 *)(param_3 + 0xb9) = 0;
      FUN_10a160848(puVar12,iVar19);
      uVar16 = param_3[0x85];
      if (uVar16 != 0) {
        puVar13 = (undefined4 *)((long)param_3 + 0x344);
        do {
          *(undefined1 *)(puVar13 + -7) = 0;
          *puVar13 = 0xf;
          uVar16 = uVar16 - 1;
          puVar13 = puVar13 + 8;
        } while (uVar16 != 0);
      }
    }
    else {
      lVar17 = *(long *)(param_1 + 0xd68);
      if ((param_2[0xcd6] == '\x01') && (*(char *)(lVar17 + 0x201) == '\x01')) {
        bVar15 = *(byte *)(*(long *)(*(char **)(param_1 + 0x9b8) + 0x20) + 0x318);
      }
      else {
        bVar15 = 0;
      }
      *(byte *)((long)param_3 + 0x2e4) = bVar15 & 1;
      *(char *)(param_3 + 0xb9) = param_2[0xcd5];
      FUN_10a160848(puVar12,iVar19);
      uVar21 = *(undefined8 *)(param_2 + 0xcd8);
      *(undefined8 *)(param_4 + 6) = *(undefined8 *)(param_2 + 0xce0);
      *(undefined8 *)(param_4 + 4) = uVar21;
      uVar16 = param_3[0x85];
      if (uVar16 == 0) {
        if ((((param_2[0xcd5] & 1U) != 0) && (*(char *)(lVar17 + 500) == '\x01')) &&
           (*(int *)(lVar17 + 0x1f8) < 0xc80)) {
LAB_10ab80d44:
          FUN_10a00946c(&UNK_10f694800);
          uVar16 = extraout_x8;
          goto LAB_10ab80d50;
        }
      }
      else {
        uVar3 = *(undefined4 *)(param_2 + 0xd08);
        puVar13 = (undefined4 *)((long)param_3 + 0x344);
        uVar20 = uVar16;
        do {
          *puVar13 = uVar3;
          uVar20 = uVar20 - 1;
          puVar13 = puVar13 + 8;
        } while (uVar20 != 0);
        if ((param_2[0xcd5] & 1U) == 0) {
LAB_10ab80d50:
          uVar20 = 0;
          uVar18 = 1;
          do {
            cVar4 = param_2[0xce8];
            *(char *)(puVar12 + uVar20 * 4) = cVar4;
            if (cVar4 == '\x01') {
              FUN_10a17540c(puVar12 + uVar20 * 4,param_2 + 0xce8);
              uVar16 = param_3[0x85];
            }
            bVar1 = uVar18 < uVar16;
            uVar20 = uVar18;
            uVar18 = (ulong)((int)uVar18 + 1);
          } while (bVar1);
        }
        else {
          if ((*(char *)(lVar17 + 500) == '\x01') && (*(int *)(lVar17 + 0x1f8) < 0xc80))
          goto LAB_10ab80d44;
          uVar20 = 0;
          pcVar11 = param_2 + 0xce8;
          do {
            if (uVar20 == 4) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab80e04);
              (*pcVar6)();
            }
            cVar4 = *pcVar11;
            *(char *)puVar12 = cVar4;
            if (cVar4 == '\x01') {
              FUN_10a17540c(puVar12,pcVar11);
              uVar16 = param_3[0x85];
            }
            uVar20 = uVar20 + 1;
            pcVar11 = pcVar11 + 7;
            puVar12 = puVar12 + 4;
          } while (uVar20 < uVar16);
        }
      }
    }
  }
  else {
    bVar15 = param_2[0xcd0];
    *(byte *)((long)param_3 + 0x2e9) = bVar15 & 1;
    *(byte *)(param_3 + 0x5d) = bVar15 >> 1 & 1;
    if ((bVar15 >> 1 & 1) == 0) {
      if ((bVar15 & 1) != 0) {
        *(undefined1 *)((long)param_3 + 0x2e9) = 0;
      }
    }
    else {
      *(undefined4 *)((long)param_3 + 0x2ec) = *(undefined4 *)(param_2 + 0xd0c);
    }
    *(byte *)(param_3 + 0x5e) = bVar15 >> 2 & 1;
    if ((bVar15 >> 2 & 1) != 0) {
      cVar4 = param_2[0xd10];
      if (cVar4 == '\x02') {
        uVar14 = 0;
        *(undefined8 *)((long)param_3 + 0x2fc) = 0x700000000;
        *(undefined8 *)((long)param_3 + 0x2f4) = 0;
        *(undefined8 *)((long)param_3 + 0x304) = 0;
        uVar22 = *(undefined8 *)(param_2 + 0xd1c);
        uVar21 = *(undefined8 *)(param_2 + 0xd14);
        *(undefined8 *)((long)param_3 + 0x31c) = *(undefined8 *)(param_2 + 0xd24);
        *(undefined8 *)((long)param_3 + 0x314) = uVar22;
        *(undefined8 *)((long)param_3 + 0x30c) = uVar21;
        uVar3 = *(undefined4 *)(param_2 + 0xd2c);
        param_4[2] = 0;
        param_4[3] = uVar3;
      }
      else if (cVar4 == '\x01') {
        uVar14 = 0;
        uVar22 = *(undefined8 *)(param_2 + 0xd1c);
        uVar21 = *(undefined8 *)(param_2 + 0xd14);
        *(undefined8 *)((long)param_3 + 0x304) = *(undefined8 *)(param_2 + 0xd24);
        *(undefined8 *)((long)param_3 + 0x2fc) = uVar22;
        *(undefined8 *)((long)param_3 + 0x2f4) = uVar21;
        *(undefined8 *)((long)param_3 + 0x314) = 0x700000000;
        *(undefined8 *)((long)param_3 + 0x30c) = 0;
        *(undefined8 *)((long)param_3 + 0x31c) = 0;
        param_4[2] = *(undefined4 *)(param_2 + 0xd2c);
        param_4[3] = 0;
      }
      else {
        if (cVar4 != '\0') goto LAB_10ab80e0c;
        uVar22 = *(undefined8 *)(param_2 + 0xd1c);
        uVar21 = *(undefined8 *)(param_2 + 0xd14);
        *(undefined8 *)((long)param_3 + 0x304) = *(undefined8 *)(param_2 + 0xd24);
        *(undefined8 *)((long)param_3 + 0x2fc) = uVar22;
        *(undefined8 *)((long)param_3 + 0x2f4) = uVar21;
        uVar22 = *(undefined8 *)(param_2 + 0xd1c);
        uVar21 = *(undefined8 *)(param_2 + 0xd14);
        *(undefined8 *)((long)param_3 + 0x31c) = *(undefined8 *)(param_2 + 0xd24);
        *(undefined8 *)((long)param_3 + 0x314) = uVar22;
        *(undefined8 *)((long)param_3 + 0x30c) = uVar21;
        uVar3 = *(undefined4 *)(param_2 + 0xd2c);
        param_4[2] = uVar3;
        param_4[3] = uVar3;
        uVar14 = 1;
      }
      *(undefined1 *)(param_4 + 1) = uVar14;
    }
    iVar19 = *(int *)(param_1 + 0xb58);
    *param_4 = *(undefined4 *)(param_2 + 0xd38);
    if (iVar19 != 0) goto LAB_10ab80b84;
    *(undefined4 *)(param_3 + 0x5c) = 1;
    *(undefined1 *)((long)param_3 + 0x2e4) = 0;
    *(undefined1 *)(param_3 + 0xb9) = 0;
    param_3[0x85] = 0;
  }
  *(undefined1 *)((long)param_3 + 0x2c4) = 1;
  *(undefined4 *)(param_3 + 0x59) = *(undefined4 *)(param_2 + 0xd04);
  if (ABS(*(float *)(param_2 + 0xd30)) <= 1e-06) {
    fVar23 = ABS(*(float *)(param_2 + 0xd34));
    *(bool *)((long)param_3 + 0x2d4) = 1e-06 <= fVar23 && fVar23 != 1e-06;
    if (1e-06 > fVar23 || fVar23 == 1e-06) goto LAB_10ab80de0;
  }
  else {
    *(undefined1 *)((long)param_3 + 0x2d4) = 1;
  }
  param_4[8] = *(undefined4 *)(param_2 + 0xd34);
  *(ulong *)(param_4 + 9) = (ulong)*(uint *)(param_2 + 0xd30);
LAB_10ab80de0:
  *(undefined4 *)((long)param_3 + 0x2cc) = *(undefined4 *)(param_2 + 0xd3c);
  return;
}



/* Entry: 10ab80e24; end: 10ab81073;  */

void FUN_10ab80e24(long param_1,char *param_2,ulong *param_3,long param_4,undefined8 param_5,
                  undefined8 *param_6,int param_7,long param_8,long param_9)

{
  undefined **ppuVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = (long *)*param_3;
  iVar2 = *(int *)((long)plVar7 + 0x7c);
  if (iVar2 == 0x8d41) {
    FUN_10a00946c();
LAB_10ab80fb4:
    ___stack_chk_fail();
  }
  else if ((iVar2 == param_7) || (iVar2 == *(int *)(param_4 + 0x80))) {
    plVar5 = plVar7;
    (**(code **)(*plVar7 + 0x50))();
    ppuVar1 = &PTR_DAT_110ae4700 + ((ulong)plVar5 & 0xffffffff) * 4;
    if (0x56 < (uint)plVar5) {
      ppuVar1 = &PTR_DAT_110ae4700;
    }
    if ((*(byte *)((long)ppuVar1 + 0x14) & 1) == 0) {
      if ((*param_2 == '\x01') &&
         (plVar5 = plVar7, (**(code **)(*plVar7 + 0x68))(), (int)plVar5 == 0)) {
        plStack_b0 = plVar7;
        FUN_10a175494(param_9 + 8,&plStack_b0);
      }
    }
    else {
      param_2[4] = '\0';
      param_2[5] = '\0';
      param_2[6] = '\0';
      param_2[7] = '\0';
      *param_2 = '\0';
    }
    uStack_a8 = *(undefined8 *)(param_2 + 8);
    plStack_b0 = *(long **)param_2;
    uStack_98 = *(undefined8 *)(param_2 + 0x18);
    uStack_a0 = *(undefined8 *)(param_2 + 0x10);
    uStack_90 = *(undefined8 *)(param_2 + 0x20);
    uStack_78 = param_6[1];
    uStack_80 = *param_6;
    uStack_68 = param_6[3];
    uStack_70 = param_6[2];
    uStack_60 = *(undefined4 *)(param_6 + 4);
    uVar3 = *(uint *)(param_8 + 0xb0);
    if (0x1f < uVar3) goto LAB_10ab8104c;
    lVar6 = param_8 + (ulong)uVar3 * 0x60;
    *(long **)(lVar6 + 0xb8) = plVar7;
    *(undefined8 *)(lVar6 + 0xc0) = param_5;
    *(undefined8 *)(lVar6 + 0xd0) = uStack_a8;
    *(long **)(lVar6 + 200) = plStack_b0;
    *(undefined8 *)(lVar6 + 0xe0) = uStack_98;
    *(undefined8 *)(lVar6 + 0xd8) = uStack_a0;
    *(undefined8 *)(lVar6 + 0xe8) = uStack_90;
    *(undefined8 *)(lVar6 + 0xf8) = uStack_78;
    *(undefined8 *)(lVar6 + 0xf0) = uStack_80;
    *(undefined8 *)(lVar6 + 0x108) = uStack_68;
    *(undefined8 *)(lVar6 + 0x100) = uStack_70;
    *(undefined4 *)(lVar6 + 0x110) = uStack_60;
    *(uint *)(param_8 + 0xb0) = uVar3 + 1;
    FUN_10ab81220(param_1 + 0x1250,param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    goto LAB_10ab80fb4;
  }
  FUN_10ab81074();
  FUN_10ab81074();
  FUN_10a0ee900(&plStack_b0,&UNK_10f69486b,0x38);
  if ((bRam000000011330a9e8 & 1) != 0) {
    func_0x00010ae06f08(0,1,&UNK_10f69450e,&UNK_10f6948a4,0x539,"%s");
  }
  FUN_10a1084cc(&plStack_b0);
LAB_10ab8104c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab81050);
  (*pcVar4)();
}



/* Entry: 10ab81074; end: 10ab8121f;  */

undefined * FUN_10ab81074(int param_1)

{
  if (param_1 < 0x8516) {
    if (param_1 < 0x806f) {
      if (param_1 == 0) {
        return &UNK_10f55f5be;
      }
      if (param_1 == 6) {
        return &UNK_10f55f6b1;
      }
      if (param_1 == 0xde1) {
        return &UNK_10f55f5d4;
      }
    }
    else if (param_1 < 0x8513) {
      if (param_1 == 0x806f) {
        return &UNK_10f55f5ed;
      }
      if (param_1 == 0x84f5) {
        return &UNK_10f55f690;
      }
    }
    else {
      if (param_1 == 0x8513) {
        return &UNK_10f55f5f7;
      }
      if (param_1 == 0x8515) {
        return &UNK_10f55f606;
      }
    }
  }
  else if (param_1 < 0x851a) {
    if (param_1 < 0x8518) {
      if (param_1 == 0x8516) {
        return &UNK_10f55f61d;
      }
      if (param_1 == 0x8517) {
        return &UNK_10f55f634;
      }
    }
    else {
      if (param_1 == 0x8518) {
        return &UNK_10f55f64b;
      }
      if (param_1 == 0x8519) {
        return &UNK_10f55f662;
      }
    }
  }
  else if (param_1 < 0x8d41) {
    if (param_1 == 0x851a) {
      return &UNK_10f55f679;
    }
    if (param_1 == 0x8c1a) {
      return &UNK_10f55f5de;
    }
  }
  else {
    if (param_1 == 0x8d65) {
      return &UNK_10f55f6a1;
    }
    if (param_1 == 0x8d41) {
      return &UNK_10f55f5c7;
    }
  }
  return &DAT_10f55f4b6;
}



/* Entry: 10ab81220; end: 10ab812eb;  */

void FUN_10ab81220(long param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar6 = *param_2;
  lVar4 = param_1 + 0x70;
  uVar5 = uVar6;
  FUN_10abd9b28();
  if ((uVar5 & 1) != 0) {
    *(ulong *)(*(long *)(param_1 + 0x78) + lVar4 * 8) = uVar6;
    FUN_10ab129f0(param_1 + 0x110,param_2);
  }
  lVar4 = param_1 + 0x90;
  uVar5 = uVar6;
  FUN_10abd9b28();
  if ((uVar5 & 1) != 0) {
    *(ulong *)(*(long *)(param_1 + 0x98) + lVar4 * 8) = uVar6;
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
    if (param_2[1] != 0) {
      plVar1 = (long *)(param_2[1] + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10aba30d0(param_1 + 0x18,&uStack_40);
    if (uStack_38 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    *(undefined1 *)(uVar6 + 0x18) = 1;
  }
  return;
}



/* Entry: 10ab812ec; end: 10ab815df;  */

void FUN_10ab812ec(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5,long param_6,long *param_7)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  int iStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  param_5[3] = 0x28cd94bfde;
  plVar10 = (long *)((long)param_5 + 0x24);
  *(undefined1 *)plVar10 = 0;
  *(undefined1 *)(param_5 + 4) = 0;
  *(undefined4 *)(param_5 + 5) = 1;
  *(undefined8 *)((long)param_5 + 0x2c) = 0;
  *(undefined8 *)((long)param_5 + 0x3c) = 0;
  *(undefined8 *)((long)param_5 + 0x34) = 0;
  *(undefined8 *)((long)param_5 + 0x42) = 0;
  plVar6 = param_5 + 10;
  param_5[0xb] = 0;
  *plVar6 = 0;
  *(undefined2 *)((long)param_5 + 0x4a) = 1000;
  param_5[0xd] = 0;
  param_5[0xc] = 0;
  param_5[0xe] = 0;
  uVar12 = NEON_fmov(0x3f800000,4);
  param_5[0xf] = uVar12;
  *(undefined4 *)(param_5 + 0x14) = 0x3f800000;
  param_5[0x11] = 0;
  param_5[0x10] = 0x3f800000;
  param_5[0x13] = 0;
  param_5[0x12] = 0x3f800000;
  *(undefined8 *)((long)param_5 + 0xa4) = 0;
  param_5[0x17] = 0;
  *(undefined8 *)((long)param_5 + 0xac) = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  param_5[3] = *(undefined8 *)(param_6 + 0x18);
  plVar2 = *(long **)(param_6 + 0x30);
  if (param_7 != (long *)0x0) {
    plVar2 = param_7;
  }
  param_5[0x17] = plVar2;
  if (plVar2 == (long *)0x0) {
    *(undefined1 *)(param_5 + 4) = 0;
  }
  else {
    plVar9 = plVar2;
    (**(code **)(*plVar2 + 0xd0))();
    *(char *)(param_5 + 4) = (char)plVar9;
    puVar7 = (undefined8 *)0x1;
    plVar9 = plVar2;
    FUN_10a088744();
    iStack_78 = (int)plVar9;
    if (puVar7 == (undefined8 *)0x0) {
      plVar9 = (long *)0x0;
      uStack_70 = 0;
      plStack_68 = (long *)0x0;
    }
    else {
      plVar9 = (long *)puVar7[1];
      plStack_68 = (long *)puVar7[1];
      uStack_70 = *puVar7;
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    if (iStack_78 == 2) {
      FUN_10a026ab4(plVar6,&uStack_70);
      plVar9 = plStack_68;
    }
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
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
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
  }
  if (*plVar6 == 0) {
    *(undefined8 *)((long)param_5 + 0x2c) = 0x100000001;
    *plVar10 = 0;
    *(undefined8 *)((long)param_5 + 0x3c) = 0;
    *(undefined8 *)((long)param_5 + 0x34) = 1;
    *(undefined8 *)((long)param_5 + 0x44) = 0x3e8000000000000;
  }
  else {
    lVar8 = *(long *)(param_6 + 0x3c);
    uVar14 = *(undefined8 *)(param_6 + 0x54);
    uVar12 = *(undefined8 *)(param_6 + 0x4c);
    *(undefined8 *)((long)param_5 + 0x2c) = *(undefined8 *)(param_6 + 0x44);
    *plVar10 = lVar8;
    *(undefined8 *)((long)param_5 + 0x3c) = uVar14;
    *(undefined8 *)((long)param_5 + 0x34) = uVar12;
    *(undefined8 *)((long)param_5 + 0x44) = *(undefined8 *)(param_6 + 0x5c);
    plVar6 = plVar2;
    (**(code **)(*plVar2 + 0xe8))();
    uVar13 = (undefined4)uVar12;
    ppuVar3 = &PTR_DAT_110ae4700 + ((ulong)plVar6 & 0xffffffff) * 4;
    if (0x56 < (uint)plVar6) {
      ppuVar3 = &PTR_DAT_110ae4700;
    }
    if (((*(byte *)((long)ppuVar3 + 0x14) & 1) == 0) ||
       (plVar6 = plVar2,
       ___dynamic_cast(plVar2,&PTR_DAT_110bb3788,&PTR_DAT_110bab2a8,0xfffffffffffffffe),
       plVar6 == (long *)0x0)) {
      param_5[0xc] = 0;
      param_5[0xd] = 0;
    }
    else {
      (**(code **)(*plVar6 + 0x10))();
      lVar8 = *plVar6;
      param_5[0xd] = plVar6[1];
      param_5[0xc] = lVar8;
    }
    uVar11 = (undefined4)lVar8;
    (**(code **)(*plVar2 + 0xd8))(plVar2);
    *(undefined4 *)(param_5 + 0xe) = uVar11;
    *(undefined4 *)((long)param_5 + 0x74) = uVar13;
    *(undefined4 *)(param_5 + 0xf) = param_3;
    *(undefined4 *)((long)param_5 + 0x7c) = param_4;
    plVar6 = plVar2;
    (**(code **)(*plVar2 + 0xc0))();
    *(int *)((long)param_5 + 0xa4) = (int)plVar6;
    plVar6 = plVar2;
    (**(code **)(*plVar2 + 200))();
    *(int *)(param_5 + 0x15) = (int)plVar6;
    plVar6 = plVar2;
    (**(code **)(*plVar2 + 0xb0))();
    *(int *)((long)param_5 + 0xac) = (int)plVar6;
    plVar6 = plVar2;
    (**(code **)(*plVar2 + 0xb8))();
    *(int *)(param_5 + 0x16) = (int)plVar6;
    (**(code **)(*plVar2 + 0x90))(&iStack_78,plVar2);
    param_5[0x11] = uStack_70;
    param_5[0x10] = CONCAT44(uStack_74,iStack_78);
    param_5[0x13] = uStack_60;
    param_5[0x12] = plStack_68;
    *(undefined4 *)(param_5 + 0x14) = uStack_58;
  }
  return;
}



/* Entry: 10ab815e0; end: 10ab81617;  */

undefined8 * FUN_10ab815e0(undefined8 *param_1)

{
  func_0x00010a0523dc(param_1 + 10);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10ab81618; end: 10ab8172f;  */

void FUN_10ab81618(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  if ((*(long *)(param_1 + 0x68) != 0) || (*(long *)(param_1 + 0x70) != 0)) {
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x28))();
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x30))();
    plVar3 = param_2;
    (**(code **)(*param_2 + 0x48))();
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x38))();
    (**(code **)(*param_2 + 0x40))();
    fStack_54 = (float)((ulong)param_2 & 0xffffffff);
    fStack_58 = (float)((ulong)plVar4 & 0xffffffff);
    if ((float)((ulong)plVar4 & 0xffffffff) <= (float)((ulong)plVar3 & 0xffffffff)) {
      fStack_58 = (float)((ulong)plVar3 & 0xffffffff);
    }
    fStack_60 = (float)((ulong)plVar1 & 0xffffffff);
    fStack_5c = (float)((ulong)plVar2 & 0xffffffff);
    if (*(long *)(param_1 + 0x68) != 0) {
      lVar5 = *(long *)(*(long *)(param_3 + 0xcb8) + 0x18);
      func_0x00010ab80910(*(undefined8 *)(lVar5 + 0x90),*(undefined8 *)(lVar5 + 0x98),
                          *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x10),&fStack_60);
    }
    if (*(long *)(param_1 + 0x70) != 0) {
      auVar6 = NEON_fmov(0x3f800000,4);
      uStack_70 = CONCAT44(auVar6._4_4_ / fStack_5c,auVar6._0_4_ / fStack_60);
      uStack_68 = CONCAT44(auVar6._12_4_ / fStack_54,auVar6._8_4_ / fStack_58);
      lVar5 = *(long *)(*(long *)(param_3 + 0xcb8) + 0x18);
      func_0x00010ab80910(*(undefined8 *)(lVar5 + 0x90),*(undefined8 *)(lVar5 + 0x98),
                          *(undefined4 *)(*(long *)(param_1 + 0x70) + 0x10),&uStack_70);
    }
  }
  return;
}



/* Entry: 10ab81730; end: 10ab81aa3;  */

void FUN_10ab81730(ulong *param_1,long *param_2,ulong param_3,ulong *param_4,long *param_5,
                  undefined8 param_6,int param_7)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  ulong *puVar6;
  uint uVar7;
  long *plVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  ulong unaff_x24;
  long *plVar14;
  ulong uVar15;
  long *plStack_58;
  
  plVar14 = (long *)*param_4;
  iVar12 = (int)param_6;
  plVar13 = param_2;
  uVar10 = param_3;
  if (plVar14 == (long *)0x0) {
    if (iVar12 < 0x8513) {
      if (iVar12 == 0xde1) {
        lVar11 = param_2[0x18];
        uVar15 = param_2[0x18];
        uVar10 = param_2[0x17];
LAB_10ab818e4:
        param_1[1] = uVar15;
        *param_1 = uVar10;
        if (lVar11 != 0) {
          plVar13 = (long *)(lVar11 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = *plVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
      if (iVar12 == 0x806f) {
        lVar11 = param_2[0x1c];
        uVar15 = param_2[0x1c];
        uVar10 = param_2[0x1b];
        goto LAB_10ab818e4;
      }
    }
    else {
      if (iVar12 == 0x8513) {
        lVar11 = param_2[0x1e];
        uVar15 = param_2[0x1e];
        uVar10 = param_2[0x1d];
        goto LAB_10ab818e4;
      }
      if (iVar12 == 0x8c1a) {
        lVar11 = param_2[0x1a];
        uVar15 = param_2[0x1a];
        uVar10 = param_2[0x19];
        goto LAB_10ab818e4;
      }
    }
  }
  else {
    if (param_7 == 0) {
LAB_10ab8185c:
      uVar10 = param_4[1];
      *param_1 = (ulong)plVar14;
      param_1[1] = uVar10;
      if (uVar10 == 0) {
        return;
      }
      plVar13 = (long *)(uVar10 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = *plVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return;
    }
    plVar4 = plVar14;
    puVar6 = param_4;
    plVar8 = param_5;
    (**(code **)(*plVar14 + 0x20))();
    if ((int)plVar4 == 0) {
      (**(code **)(*plVar14 + 0x50))();
      ppuVar1 = &PTR_DAT_110ae4700 + ((ulong)plVar14 & 0xffffffff) * 4;
      if (0x56 < (uint)plVar14) {
        ppuVar1 = &PTR_DAT_110ae4700;
      }
      if ((1 < *(byte *)(ppuVar1 + 3) || 1 < *(byte *)((long)ppuVar1 + 0x19)) &&
         ((*(int *)(param_3 + 0x80) == 0x806f || (*(int *)(param_3 + 0x80) == 0x8513)))) {
        (**(code **)(*param_5 + 0xf8))(param_5);
        puVar6 = (ulong *)0x1;
        FUN_10a088744();
        if (puVar6 == (ulong *)0x0) {
          plVar13 = (long *)0x0;
          plStack_58 = (long *)0x0;
        }
        else {
          plVar13 = (long *)*puVar6;
          plStack_58 = (long *)puVar6[1];
          if (plStack_58 != (long *)0x0) {
            plVar14 = plStack_58 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar3) {
                *plVar14 = *plVar14 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        if ((int)param_5 == 2) {
          if (plStack_58 != (long *)0x0) {
            plVar14 = plStack_58 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar3) {
                *plVar14 = *plVar14 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if ((plVar13 == (long *)0x0) ||
             ((plVar14 = plVar13, (**(code **)(*plVar13 + 0x20))(), (int)plVar14 != 2 &&
              (plVar14 = plVar13, (**(code **)(*plVar13 + 0x20))(), (int)plVar14 != 3)))) {
            FUN_10abbacac(param_1,param_2,param_6);
            if (plStack_58 != (long *)0x0) {
              plVar13 = plStack_58 + 1;
              do {
                lVar11 = *plVar13;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar3) {
                  *plVar13 = lVar11 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar11 == 0) {
                (**(code **)(*plStack_58 + 0x10))(plStack_58);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
              }
            }
          }
          else {
            *param_1 = (ulong)plVar13;
            param_1[1] = (ulong)plStack_58;
          }
        }
        else {
          FUN_10abbacac(param_1,param_2,param_6);
        }
        if (plStack_58 == (long *)0x0) {
          return;
        }
        plVar13 = plStack_58 + 1;
        do {
          lVar11 = *plVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 != 0) {
          return;
        }
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
        return;
      }
    }
    plVar14 = (long *)*param_4;
    if (plVar14 != (long *)0x0) goto LAB_10ab8185c;
    param_4 = puVar6;
    param_5 = plVar8;
    unaff_x24 = param_3;
    if (iVar12 < 0x8513) {
      if (iVar12 == 0xde1) {
        lVar11 = param_2[0x18];
        uVar15 = param_2[0x18];
        uVar10 = param_2[0x17];
LAB_10ab8193c:
        param_1[1] = uVar15;
        *param_1 = uVar10;
        if (lVar11 == 0) {
          return;
        }
        plVar13 = (long *)(lVar11 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = *plVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        return;
      }
      if (iVar12 == 0x806f) {
        lVar11 = param_2[0x1c];
        uVar15 = param_2[0x1c];
        uVar10 = param_2[0x1b];
        goto LAB_10ab8193c;
      }
    }
    else {
      if (iVar12 == 0x8513) {
        lVar11 = param_2[0x1e];
        uVar15 = param_2[0x1e];
        uVar10 = param_2[0x1d];
        goto LAB_10ab8193c;
      }
      if (iVar12 == 0x8c1a) {
        lVar11 = param_2[0x1a];
        uVar15 = param_2[0x1a];
        uVar10 = param_2[0x19];
        goto LAB_10ab8193c;
      }
    }
  }
  uVar7 = (uint)param_5;
  puVar5 = &UNK_10f697b97;
  FUN_10a0ee06c();
  func_0x00010a0523dc(unaff_x24 + 8);
  __Unwind_Resume();
  if (uVar7 != 0) {
    if (uVar7 == 3) {
      uVar9 = 0x812d;
      if (*(char *)(*(long *)(puVar5 + 0xd68) + 0x20a) == '\0') {
        uVar9 = 0x812f;
      }
      goto LAB_10ab81b04;
    }
    if ((((uVar10 & 1) != 0) || (uVar7 - 3 < 0xfffffffe)) ||
       (2999 < *(int *)(*(long *)(puVar5 + 0xd68) + 0x1f0))) {
      if (3 < uVar7) {
        return;
      }
      uVar9 = *(undefined4 *)(&UNK_10e502cf8 + (ulong)(uVar7 - 1) * 4);
      goto LAB_10ab81b04;
    }
  }
  uVar9 = 0x812f;
LAB_10ab81b04:
                    /* WARNING: Could not recover jumptable at 0x00010ab81b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar13 + 200))(plVar13,param_4,uVar9);
  return;
}



/* Entry: 10ab81aa4; end: 10ab81b1b;  */

void FUN_10ab81aa4(long param_1,long *param_2,ulong param_3,undefined8 param_4,uint param_5)

{
  undefined4 uVar1;
  
  if (param_5 != 0) {
    if (param_5 == 3) {
      uVar1 = 0x812d;
      if (*(char *)(*(long *)(param_1 + 0xd68) + 0x20a) == '\0') {
        uVar1 = 0x812f;
      }
      goto LAB_10ab81b04;
    }
    if ((((param_3 & 1) != 0) || (param_5 - 3 < 0xfffffffe)) ||
       (2999 < *(int *)(*(long *)(param_1 + 0xd68) + 0x1f0))) {
      if (3 < param_5) {
        return;
      }
      uVar1 = *(undefined4 *)(&UNK_10e502cf8 + (ulong)(param_5 - 1) * 4);
      goto LAB_10ab81b04;
    }
  }
  uVar1 = 0x812f;
LAB_10ab81b04:
                    /* WARNING: Could not recover jumptable at 0x00010ab81b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 200))(param_2,param_4,uVar1);
  return;
}



/* Entry: 10ab81b1c; end: 10ab81da3;  */

void FUN_10ab81b1c(long param_1,long *param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 uVar7;
  
  if ((*param_3 == '\x01') &&
     (plVar4 = param_2, (**(code **)(*param_2 + 0x68))(), ((uint)plVar4 & 0xfffffffe) == 2)) {
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x40))();
    bVar2 = 1 < (uint)plVar4;
  }
  else {
    bVar2 = false;
  }
  lVar6 = *(long *)(param_1 + 0xd68);
  uVar3 = *(uint *)(lVar6 + 0x27c);
  FUN_10a303840(lVar6,*(undefined4 *)((long)param_2 + 0x7c),*(undefined4 *)((long)param_2 + 0x5c),
                param_4);
  if (uVar3 < *(uint *)(lVar6 + 0x27c)) {
    func_0x00010ad5f600(*(undefined8 *)(param_1 + 0x848));
  }
  if (2999 < *(int *)(lVar6 + 0x1f0)) {
    (**(code **)(*param_2 + 200))(param_2,0x813a,(long)*(short *)(param_3 + 0x24));
    (**(code **)(*param_2 + 200))(param_2,0x813b,(long)*(short *)(param_3 + 0x26));
    (**(code **)(*param_2 + 200))(param_2,0x813d,(long)*(short *)(param_3 + 0x26));
  }
  iVar1 = *(int *)(param_3 + 4);
  if (iVar1 == 2) {
    uVar7 = 0x2601;
    uVar5 = 0x2703;
LAB_10ab81c54:
    if (!bVar2) {
      uVar5 = uVar7;
    }
    (**(code **)(*param_2 + 200))(param_2,0x2801,uVar5);
    (**(code **)(*param_2 + 200))(param_2,0x2800,uVar7);
  }
  else {
    if (iVar1 == 1) {
      uVar7 = 0x2601;
      uVar5 = 0x2701;
      goto LAB_10ab81c54;
    }
    if (iVar1 == 0) {
      uVar7 = 0x2600;
      uVar5 = 0x2700;
      goto LAB_10ab81c54;
    }
  }
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x28))();
  uVar3 = (uint)plVar4 - 1;
  if (uVar3 < ((uint)plVar4 ^ uVar3)) {
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x30))();
    uVar3 = (uint)plVar4;
    if (uVar3 != 0) {
      bVar2 = (uVar3 & uVar3 - 1) == 0;
      goto LAB_10ab81ccc;
    }
  }
  bVar2 = false;
LAB_10ab81ccc:
  FUN_10ab81aa4(param_1,param_2,bVar2,0x2802,*(undefined4 *)(param_3 + 8));
  FUN_10ab81aa4(param_1,param_2,bVar2,0x2803,*(undefined4 *)(param_3 + 0xc));
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x20))();
  if ((int)plVar4 == 2) {
    FUN_10ab81aa4(param_1,param_2,bVar2,0x8072,*(undefined4 *)(param_3 + 0x10));
  }
  if ((((*(int *)(param_3 + 8) == 3) || (*(int *)(param_3 + 0xc) == 3)) ||
      (*(int *)(param_3 + 0x10) == 3)) && (*(char *)(lVar6 + 0x20a) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010ab81d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0xd0))(param_2,0x1004,param_3 + 0x14,4);
    return;
  }
  return;
}



/* Entry: 10ab81da4; end: 10ab81f83;  */

void FUN_10ab81da4(long param_1,long *param_2,ulong param_3,long *param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  uint *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  
  uVar6 = (*(long *)(param_1 + 0x120) - *(long *)(param_1 + 0x118) >> 4) * -0x5555555555555555;
  if (param_3 <= uVar6 && uVar6 - param_3 != 0) {
    plVar12 = (long *)(*(long *)(param_1 + 0x118) + param_3 * 0x30);
    lVar10 = *plVar12;
    lVar1 = plVar12[1];
    lVar3 = lVar1 - lVar10;
    lVar7 = lVar3 >> 2;
    lVar11 = *(long *)(param_1 + 0x100);
    lVar2 = *(long *)(param_1 + 0x108);
    func_0x00010983d048(param_4,(lVar3 >> 1) + lVar7);
    FUN_10a4248c8(param_5,lVar7);
    if (lVar1 != lVar10) {
      uVar6 = (lVar2 - lVar11 >> 5) * -0x5555555555555555;
      lVar11 = *(long *)(param_1 + 0x100);
      lVar10 = *param_2;
      pfVar8 = (float *)(*param_5 + 0x20);
      pfVar9 = (float *)(*param_4 + 0x18);
      puVar13 = (uint *)*plVar12;
      do {
        uVar5 = (ulong)*puVar13;
        if (uVar5 <= uVar6 && uVar6 - uVar5 != 0) {
          func_0x000109519fd0(&fStack_b0,lVar10 + uVar5 * 0x40,lVar11 + uVar5 * 0x60 + 0x20);
          fVar14 = -(fStack_98 * fStack_8c) + fStack_88 * fStack_9c;
          fVar16 = -(fStack_9c * fStack_90) + fStack_8c * fStack_a0;
          fVar15 = 1.0 / (-(fStack_ac * (-(fStack_98 * fStack_90) + fStack_88 * fStack_a0)) +
                          fVar14 * fStack_b0 + fVar16 * fStack_a8);
          pfVar9[-6] = fStack_b0;
          pfVar9[-5] = fStack_a0;
          pfVar9[-4] = fStack_90;
          pfVar9[-3] = fStack_80;
          pfVar9[-2] = fStack_ac;
          pfVar9[-1] = fStack_9c;
          *pfVar9 = fStack_8c;
          pfVar9[1] = fStack_7c;
          pfVar9[2] = fStack_a8;
          pfVar9[3] = fStack_98;
          pfVar9[4] = fStack_88;
          pfVar9[5] = fStack_78;
          *(ulong *)(pfVar8 + -6) =
               CONCAT44((-(fStack_ac * fStack_88) - -(fStack_a8 * fStack_8c)) * fVar15,
                        fVar16 * fVar15);
          *(ulong *)(pfVar8 + -8) =
               CONCAT44((-(fStack_a0 * fStack_88) - -(fStack_98 * fStack_90)) * fVar15,
                        fVar14 * fVar15);
          *(ulong *)(pfVar8 + -2) =
               CONCAT44((-(fStack_b0 * fStack_98) - -(fStack_a8 * fStack_a0)) * fVar15,
                        (-(fStack_a8 * fStack_9c) + fStack_98 * fStack_ac) * fVar15);
          *(ulong *)(pfVar8 + -4) =
               CONCAT44((-(fStack_b0 * fStack_8c) - -(fStack_ac * fStack_90)) * fVar15,
                        (-(fStack_a8 * fStack_90) + fStack_88 * fStack_b0) * fVar15);
          *pfVar8 = (-(fStack_ac * fStack_a0) + fStack_9c * fStack_b0) * fVar15;
        }
        pfVar8 = pfVar8 + 9;
        pfVar9 = pfVar9 + 0xc;
        lVar7 = lVar7 + -1;
        puVar13 = puVar13 + 1;
      } while (lVar7 != 0);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab81f84);
  (*pcVar4)();
}



/* Entry: 10ab81f84; end: 10ab82147;  */

void FUN_10ab81f84(ulong param_1,int *param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  char *pcVar8;
  int *piVar9;
  undefined2 *puVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  byte bVar17;
  undefined4 uVar18;
  uint uVar19;
  ulong uVar20;
  byte *pbVar21;
  ulong uVar22;
  int iVar23;
  uint uVar24;
  int *piVar25;
  byte *pbVar26;
  long lVar27;
  uint uVar28;
  long lVar29;
  ulong uVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  long *plVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  int iStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  byte bStack_ec;
  undefined7 uStack_eb;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  pcVar8 = (char *)(param_1 + 0x20);
  func_0x00010a01e9ec(pcVar8,*param_2);
  if (*pcVar8 == '\x02') {
    iVar23 = *param_2;
    FUN_10ab7ae54(param_1,1);
    lVar27 = param_1 + 0x20;
    func_0x00010a01e9ec(lVar27,iVar23);
    uStack_78 = *(undefined8 *)(lVar27 + 0xf4);
    uStack_80 = *(undefined8 *)(lVar27 + 0xec);
    uStack_88 = 1;
    FUN_10ab8b9ec(*(undefined4 *)(lVar27 + 0xfc),*(undefined8 *)(param_1 + 0xd68),
                  &stack0xffffffffffffffc0,&uStack_88,*(uint *)(lVar27 + 0x18) >> 9 & 1,
                  *(undefined1 *)(lVar27 + 0x100),*(undefined1 *)(lVar27 + 0x101));
    return;
  }
  if ((*pcVar8 == '\x04') && (*(int *)(*(long *)(param_1 + 0xd68) + 0x1f0) < 3000)) {
    if ((bRam000000011330a9e8 >> 1 & 1) == 0) {
      return;
    }
    FUN_10ae06f30(1,2,&UNK_10f69450e,&UNK_10f6949f2,0x74a,&UNK_10f694a51,&stack0x00000000);
    return;
  }
  lVar27 = param_1 + 0x20;
  FUN_10a015150(lVar27,*param_2);
  piVar9 = (int *)(param_1 + 0x10c8);
  FUN_10abcb484();
  piVar25 = *(int **)(param_1 + 0x9b0);
  iVar23 = piVar25[2];
  *piVar9 = *param_2;
  piVar9[1] = iVar23;
  *(short *)(piVar9 + 2) = (short)piVar25[1];
  *(undefined2 *)((long)piVar9 + 10) = *(undefined2 *)(param_1 + 0x9c0);
  piVar9[3] = *piVar25;
  *(short *)(piVar9 + 4) = (short)param_2[1];
  lVar29 = *(long *)(param_2 + 0x2c);
  *(undefined1 *)((long)piVar9 + 0x12) = *(undefined1 *)((long)param_2 + 0x62);
  lVar16 = *(long *)(lVar27 + 0xa8);
  if (lVar29 != 0) {
    lVar16 = lVar29;
  }
  *(long *)(piVar9 + 6) = lVar16;
  lVar27 = *(long *)(lVar27 + 0xb0);
  if (*(long *)(param_2 + 0x2e) != 0) {
    lVar27 = *(long *)(param_2 + 0x2e);
  }
  *(long *)(piVar9 + 8) = lVar27;
  uVar36 = *(undefined8 *)(param_2 + 0x29);
  uVar35 = *(undefined8 *)(param_2 + 0x27);
  uVar38 = *(undefined8 *)(param_2 + 0x25);
  uVar37 = *(undefined8 *)(param_2 + 0x23);
  uVar40 = *(undefined8 *)(param_2 + 0x21);
  uVar39 = *(undefined8 *)(param_2 + 0x1f);
  uVar41 = *(undefined8 *)(param_2 + 0x1b);
  *(undefined8 *)(piVar9 + 0xe) = *(undefined8 *)(param_2 + 0x1d);
  *(undefined8 *)(piVar9 + 0xc) = uVar41;
  *(undefined8 *)(piVar9 + 0x12) = uVar40;
  *(undefined8 *)(piVar9 + 0x10) = uVar39;
  *(undefined8 *)(piVar9 + 0x16) = uVar38;
  *(undefined8 *)(piVar9 + 0x14) = uVar37;
  *(undefined8 *)(piVar9 + 0x1a) = uVar36;
  *(undefined8 *)(piVar9 + 0x18) = uVar35;
  *(int **)(piVar9 + 10) = param_2 + 0x2c;
  *(byte *)((long)piVar9 + 0x71) = (byte)((ushort)(short)param_2[0x18] >> 10) & 1;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = (undefined2 *)(param_1 + 0x10e8);
  FUN_10abcb5f4();
  uVar20 = param_1;
  FUN_10a175558(param_1,(short)piVar9[4]);
  *puVar10 = (short)uVar20;
  *(ulong *)(puVar10 + 0x24) = param_1 + 0x28;
  uVar22 = param_1 + 0x20;
  FUN_10a021e20(uVar22,uVar20);
  *(undefined1 *)(param_1 + 0x828) = 0;
  plVar11 = *(long **)(piVar9 + 6);
  if (plVar11 == (long *)0x0) {
LAB_10ab82ba8:
    *(undefined1 *)(param_1 + 0x828) = 1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
LAB_10ab82bec:
    ___stack_chk_fail();
LAB_10ab82bf0:
    puVar13 = &UNK_10f697bcd;
  }
  else {
    if (*piVar9 == -1) {
      lVar27 = 0;
      lVar16 = 0;
LAB_10ab82228:
      bVar4 = false;
    }
    else {
      lVar27 = param_1 + 0x20;
      FUN_10a015150();
      lVar16 = param_1 + 0x20;
      func_0x00010a01e9ec(lVar16,*piVar9);
      plVar11 = *(long **)(piVar9 + 6);
      if ((*(byte *)(lVar16 + 0x18) >> 6 & 1) == 0) goto LAB_10ab82228;
      bVar4 = true;
      if (*(char *)((long)plVar11 + 0xb9) != '\x01') {
        *(undefined1 *)((long)plVar11 + 0xb9) = 1;
        (**(code **)(*plVar11 + 0xa0))();
        plVar11 = *(long **)(piVar9 + 6);
      }
    }
    iStack_148 = (int)plVar11;
    puVar14 = (undefined8 *)0x1;
    FUN_10a061940();
    if (puVar14 == (undefined8 *)0x0) {
      plStack_140 = (long *)0x0;
      plStack_138 = (long *)0x0;
    }
    else {
      plStack_140 = (long *)*puVar14;
      plStack_138 = (long *)puVar14[1];
      if (plStack_138 != (long *)0x0) {
        plVar11 = plStack_138 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = *plVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
    plVar34 = plStack_138;
    plVar11 = plStack_140;
    if ((iStack_148 != 2) || (uVar20 = uVar22, func_0x00010abf3eb4(), (uVar20 & 1) == 0)) {
LAB_10ab82b70:
      plVar11 = plStack_138;
      if (plStack_138 != (long *)0x0) {
        plVar34 = plStack_138 + 1;
        do {
          lVar27 = *plVar34;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar4) {
            *plVar34 = lVar27 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar27 == 0) {
          (**(code **)(*plStack_138 + 0x10))(plStack_138);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      goto LAB_10ab82ba8;
    }
    if (plVar34 == (long *)0x0) {
      plStack_128 = (long *)0x0;
    }
    else {
      plVar1 = plVar34 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        plStack_128 = plVar34;
      } while (cVar5 != '\0');
    }
    plStack_130 = plVar11;
    func_0x00010a1755ac(puVar10 + 4,&plStack_130);
    plVar11 = plStack_128;
    if (plStack_128 != (long *)0x0) {
      plVar1 = plStack_128 + 1;
      do {
        lVar29 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar29 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar29 == 0) {
        (**(code **)(*plStack_128 + 0x10))(plStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    if (plVar34 != (long *)0x0) {
      plVar11 = plVar34 + 1;
      do {
        lVar29 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar29 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar29 == 0) {
        (**(code **)(*plVar34 + 0x10))(plVar34);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar34);
      }
    }
    lVar29 = *(long *)(*(long *)(puVar10 + 4) + 0x130);
    lVar15 = *(long *)(*(long *)(puVar10 + 4) + 0x138);
    uVar19 = (int)((ulong)(lVar15 - lVar29) >> 3) * -0x3b13b13b;
    uVar20 = (ulong)uVar19;
    if (uVar19 == 0) goto LAB_10ab82b70;
    if (lVar15 == lVar29) goto LAB_10ab82d70;
    iVar23 = 0;
    piVar25 = (int *)(lVar29 + 4);
    do {
      iVar23 = *piVar25 + iVar23;
      uVar20 = uVar20 - 1;
      piVar25 = piVar25 + 0x1a;
    } while (uVar20 != 0);
    if (iVar23 == 0) goto LAB_10ab82b70;
    *(undefined8 *)(puVar10 + 0x20) = *(undefined8 *)(*(long *)(param_1 + 0x9b0) + 0x60);
    if (*(short *)((long)piVar9 + 10) == -1) {
LAB_10ab82448:
      bVar32 = 0;
      bVar31 = 0;
      bVar33 = 0;
      bVar6 = false;
    }
    else {
      lVar29 = param_1 + 0x20;
      FUN_10a01f6d4();
      uVar20 = (ulong)*(byte *)(lVar29 + 0x24);
      if (uVar20 == 0xff) {
        uVar20 = (ulong)*(byte *)(lVar29 + 0x23);
        if (uVar20 == 0xff) goto LAB_10ab82448;
        uVar30 = (*(long *)(param_1 + 0x160) - *(long *)(param_1 + 0x158) >> 3) *
                 -0x7063e7063e7063e7;
        if (uVar30 < uVar20 || uVar30 - uVar20 == 0) goto LAB_10ab82d70;
        lVar29 = *(long *)(param_1 + 0x158) + uVar20 * 0x148;
        pbVar21 = (byte *)(lVar29 + 0x54);
        bVar31 = *(byte *)(lVar29 + 0x55);
        pbVar26 = (byte *)(lVar29 + 0x56);
      }
      else {
        uVar30 = (*(long *)(param_1 + 0x148) - *(long *)(param_1 + 0x140) >> 4) *
                 -0x30c30c30c30c30c3;
        if (uVar30 < uVar20 || uVar30 - uVar20 == 0) goto LAB_10ab82d70;
        lVar29 = *(long *)(param_1 + 0x140) + uVar20 * 0x150;
        pbVar21 = (byte *)(lVar29 + 0x6c);
        bVar31 = *(byte *)(lVar29 + 0x6d);
        pbVar26 = (byte *)(lVar29 + 0x6e);
      }
      bVar32 = bVar31 & *pbVar26;
      bVar33 = *pbVar21;
      bVar6 = true;
    }
    *(byte *)(param_1 + 0xb1e) = (bVar33 | bVar6 ^ 0xffU) & 1;
    uVar20 = param_1;
    FUN_10abf63d4(param_1,*(undefined8 *)(puVar10 + 0x20),lVar16);
    *(char *)(puVar10 + 0xc) = (char)uVar20;
    if (lVar16 == 0) {
      uVar18 = 0;
      *(undefined1 *)((long)puVar10 + 0x19) = 0;
      plVar11 = (long *)0x0;
      uVar35 = 0;
      plVar34 = (long *)0x0;
    }
    else {
      if ((*(byte *)(lVar16 + 0x1d) & 0xfe) == 2) {
        bVar17 = *(byte *)(*(long *)(puVar10 + 0x20) + 0x29);
      }
      else {
        bVar17 = 0;
      }
      *(byte *)((long)puVar10 + 0x19) = bVar17 & 1;
      plStack_130 = (long *)0x0;
      plStack_128 = (long *)0x0;
      uStack_120 = 0;
      if (((*(byte *)(lVar16 + 0x18) >> 3 & 1) == 0) ||
         (FUN_10a175d58(*(long *)(lVar16 + 0x170),
                        (*(long *)(lVar16 + 0x178) - *(long *)(lVar16 + 0x170) >> 3) *
                        -0x5555555555555555,*(long *)(puVar10 + 4) + 0x48,&plStack_130),
         plStack_128 == plStack_130)) {
        uVar18 = 0;
        plVar11 = plStack_130;
        uVar35 = uStack_120;
        plVar34 = plStack_128;
      }
      else {
        uVar18 = 1;
        plVar11 = plStack_130;
        uVar35 = uStack_120;
        plVar34 = plStack_128;
        if ((*(byte *)(lVar16 + 0x18) & 0x10) != 0) {
          uVar18 = 2;
        }
      }
    }
    lVar29 = *(long *)(puVar10 + 0x14);
    *(undefined4 *)(puVar10 + 0x10) = uVar18;
    if (lVar29 != 0) {
      *(long *)(puVar10 + 0x18) = lVar29;
      __ZdlPv();
      *(long *)(puVar10 + 0x14) = 0;
      *(undefined8 *)(puVar10 + 0x18) = 0;
      *(undefined8 *)(puVar10 + 0x1c) = 0;
    }
    *(long **)(puVar10 + 0x14) = plVar11;
    *(long **)(puVar10 + 0x18) = plVar34;
    *(undefined8 *)(puVar10 + 0x1c) = uVar35;
    puVar2 = (undefined1 *)((long)piVar9 + 0x72);
    if (lVar16 != 0) {
      puVar2 = (undefined1 *)(lVar16 + 1);
    }
    uVar3 = *puVar2;
    if ((bVar4) && (*(long *)(piVar9 + 8) != 0)) {
      FUN_10ab82db0(*(undefined4 *)(lVar16 + 0x120),*(undefined4 *)(lVar16 + 0x124),
                    *(undefined8 *)(puVar10 + 4));
    }
    puVar14 = (undefined8 *)0x1;
    FUN_10a044920(*(undefined8 *)(uVar22 + 0x160));
    if (puVar14 == (undefined8 *)0x0) {
      uVar35 = 0;
    }
    else {
      uVar35 = *puVar14;
    }
    *(undefined1 *)(puVar10 + 0x30) = 0;
    if (lVar16 == 0) {
      uVar19 = 0;
LAB_10ab825d4:
      uVar20 = 0;
    }
    else {
      uVar24 = *(uint *)(lVar16 + 0x18);
      uVar19 = uVar24 >> 5 & 1;
      *(char *)(puVar10 + 0x30) = (char)uVar19;
      if ((uVar24 >> 5 & 1) == 0) goto LAB_10ab825d4;
      uVar20 = (ulong)*(uint *)(param_1 + 0xd98);
      uVar19 = 1;
    }
    lVar29 = *(long *)(puVar10 + 4);
    uVar30 = (*(long *)(lVar29 + 0x108) - *(long *)(lVar29 + 0x100) >> 5) * -0x5555555555555555;
    if (uVar30 < uVar20 || uVar30 - uVar20 == 0) {
      uVar24 = (uint)(((int)((ulong)(*(long *)(lVar29 + 0x138) - *(long *)(lVar29 + 0x130)) >> 3) *
                       -0x3b13b13b & 0xfffffffeU) != 0);
    }
    else {
      uVar24 = 1;
    }
    uVar28 = 0;
    if ((*(char *)(*(long *)(param_1 + 0xd68) + 0x21e) == '\x01') && (1 < *(uint *)(uVar22 + 0x68)))
    {
      if ((ulong)((*(long *)(lVar29 + 0x120) - *(long *)(lVar29 + 0x118) >> 4) * -0x5555555555555555
                 ) < 2) {
        uVar28 = 0;
      }
      else {
        uVar28 = ((int)((ulong)(*(long *)(lVar29 + 0x138) - *(long *)(lVar29 + 0x130)) >> 3) *
                  -0x3b13b13b & 0xfffffffeU) == 0 & uVar24;
      }
    }
    if (uVar19 == 0) {
      uVar28 = 0;
      *(undefined1 *)((long)puVar10 + 0x61) = 0;
    }
    else {
      *(char *)((long)puVar10 + 0x61) = (char)uVar28;
      if (uVar24 == 0) {
        lVar15 = *(long *)(*(long *)(piVar9 + 10) + 8);
        if (lVar15 == 0) {
          lVar15 = *(long *)(lVar27 + 0xb0);
        }
        FUN_10ab82e08(lVar29,lVar15);
        uVar28 = (uint)*(byte *)((long)puVar10 + 0x61);
      }
    }
    uVar28 = uVar28 | (uint)*(byte *)((long)puVar10 + 0x19) << 4;
    uVar19 = uVar28 | 0x40;
    if (!bVar6) {
      uVar19 = uVar28;
    }
    uVar24 = uVar19 | 0x80;
    if ((bVar33 & 1) == 0) {
      uVar24 = uVar19;
    }
    uVar19 = uVar24 | 0x100;
    if ((bVar31 & 1) == 0) {
      uVar19 = uVar24;
    }
    uVar24 = uVar19 | 0x200;
    if ((bVar32 & 1) == 0) {
      uVar24 = uVar19;
    }
    uVar22 = param_1;
    FUN_10abf5aa0(param_1,param_1 + 0x1068,piVar9[1],*puVar10,uVar24,uVar35,uVar3,
                  *(undefined4 *)(puVar10 + 0x10),(int)uVar20,*(undefined1 *)(puVar10 + 0xc),
                  param_1 + 0xfb0,*(undefined8 *)(puVar10 + 0x20),*(undefined2 *)((long)piVar9 + 10)
                 );
    uStack_160 = 0;
    plStack_158 = (long *)0x0;
    if ((ulong)(*(long *)(param_1 + 0x1090) - *(long *)(param_1 + 0x1088) >> 10) <=
        (uVar22 & 0xffffffff)) goto LAB_10ab82d70;
    lVar27 = *(long *)(param_1 + 0x1088) + (uVar22 & 0xffffffff) * 0x400;
    uVar35 = *(undefined8 *)(lVar27 + 0x3f0);
    FUN_10ab86b34(uVar35,lVar27);
    func_0x00010a175734(&uStack_160,uVar35);
    FUN_10ab87278(*(undefined8 *)(param_1 + 0x11d8),&uStack_160);
    func_0x00010a175610(puVar10 + 0x28,&uStack_160);
    plVar11 = plStack_158;
    if (plStack_158 != (long *)0x0) {
      plVar34 = plStack_158 + 1;
      do {
        lVar27 = *plVar34;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar4) {
          *plVar34 = lVar27 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar27 == 0) {
        (**(code **)(*plStack_158 + 0x10))(plStack_158);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    lVar27 = param_1 + 0x20;
    FUN_10a021e20(lVar27,*puVar10);
    uStack_160 = 0;
    plStack_158 = (long *)0x0;
    uStack_170 = 0;
    uStack_168 = 0;
    if ((lVar16 != 0) && ((ulong)*(byte *)((long)piVar9 + 0x12) < *(ulong *)(lVar16 + 0x130))) {
      puVar14 = (undefined8 *)
                (*(long *)(lVar16 + 0x128) + (ulong)*(byte *)((long)piVar9 + 0x12) * 0x30);
      plStack_158 = (long *)puVar14[1];
      uStack_160 = *puVar14;
      uStack_168 = puVar14[3];
      uStack_170 = puVar14[2];
    }
    lVar16 = *(long *)(lVar27 + 0x88) + *(long *)(lVar27 + 0xb0) * 0x18;
    uVar22 = param_1 + 0x10a8;
    FUN_10ab832f4(uVar22,lVar16,*(long *)(lVar27 + 0x88) + *(long *)(lVar27 + 0xa0) * 0x18);
    *(ulong *)(puVar10 + 0x638) = uVar22;
    *(long *)(puVar10 + 0x63c) = lVar16;
    uStack_178 = 0;
    if ((plStack_158 != (long *)0x0) && (uVar22 < lVar16 + uVar22)) {
      lVar29 = uVar22 * 0x18;
      do {
        lVar15 = *(long *)(param_1 + 0x1120);
        uVar20 = (*(long *)(param_1 + 0x1128) - lVar15 >> 3) * -0x5555555555555555;
        if (uVar20 < uVar22 || uVar20 - uVar22 == 0) goto LAB_10ab82d70;
        FUN_10abfef18(&plStack_130,lVar15 + lVar29,&uStack_160,&uStack_178);
        if (bStack_ec == 1) {
          lVar15 = lVar15 + lVar29;
          lVar12 = lVar27 + 0xb8;
          FUN_10abff074(lVar12,lVar27 + 0xd0,(long)*(short *)(lVar15 + 8),&plStack_130);
          iVar23 = (int)*(short *)(lVar15 + 8);
          FUN_10abff248();
          *(int *)(lVar15 + 0xc) = (int)lVar12;
          *(int *)(lVar15 + 0x10) = iVar23;
          if ((bStack_ec & 1) != 0) {
            if (0x10 < (ulong)(byte)uStack_f0) goto LAB_10ab82d70;
            (*(code *)(&PTR_FUN_110ba1f88)[(byte)uStack_f0])(&plStack_130);
          }
        }
        uVar22 = uVar22 + 1;
        lVar29 = lVar29 + 0x18;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    uStack_178 = 0;
    lVar29 = *(long *)(lVar27 + 0xf0);
    for (lVar16 = *(long *)(lVar27 + 0xe8); lVar16 != lVar29; lVar16 = lVar16 + 0x68) {
      lVar15 = lVar16;
      FUN_10a5e23ac(lVar16,&uStack_170,&uStack_178);
      FUN_10ab812ec(&plStack_130,lVar16,lVar15);
      uVar22 = *(ulong *)(puVar10 + 0x34);
      if (0xf < uVar22) {
        FUN_10a0a2358();
        goto LAB_10ab82bec;
      }
      puVar14 = (undefined8 *)(puVar10 + uVar22 * 0x60 + 0x38);
      puVar14[2] = uStack_120;
      puVar14[1] = plStack_128;
      *puVar14 = plStack_130;
      plStack_128 = (long *)0x0;
      uStack_120 = 0;
      plStack_130 = (long *)0x0;
      puVar14[3] = uStack_118;
      *(ulong *)((long)puVar14 + 0x44) = CONCAT71(uStack_eb,bStack_ec);
      *(ulong *)((long)puVar14 + 0x3c) = CONCAT44(uStack_f0,uStack_f4);
      puVar14[5] = uStack_108;
      puVar14[4] = uStack_110;
      puVar14[7] = CONCAT44(uStack_f4,uStack_f8);
      puVar14[6] = uStack_100;
      puVar14[0xb] = uStack_d8;
      puVar14[10] = uStack_e0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      puVar14[0xd] = uStack_c8;
      puVar14[0xc] = uStack_d0;
      puVar14[0x15] = uStack_88;
      puVar14[0x14] = uStack_90;
      puVar14[0x17] = uStack_78;
      puVar14[0x16] = uStack_80;
      puVar14[0x11] = uStack_a8;
      puVar14[0x10] = uStack_b0;
      puVar14[0x13] = uStack_98;
      puVar14[0x12] = uStack_a0;
      puVar14[0xf] = uStack_b8;
      puVar14[0xe] = uStack_c0;
      *(ulong *)(puVar10 + 0x34) = uVar22 + 1;
    }
    uVar36 = *(undefined8 *)(lVar27 + 0x28);
    uVar35 = *(undefined8 *)(lVar27 + 0x20);
    uVar37 = *(undefined8 *)(lVar27 + 0x30);
    uVar39 = *(undefined8 *)(lVar27 + 0x48);
    uVar38 = *(undefined8 *)(lVar27 + 0x40);
    *(undefined8 *)(puVar10 + 0x676) = *(undefined8 *)(lVar27 + 0x38);
    *(undefined8 *)(puVar10 + 0x672) = uVar37;
    *(undefined8 *)(puVar10 + 0x67e) = uVar39;
    *(undefined8 *)(puVar10 + 0x67a) = uVar38;
    *(undefined8 *)(puVar10 + 0x66e) = uVar36;
    *(undefined8 *)(puVar10 + 0x66a) = uVar35;
    bVar31 = *(byte *)(lVar27 + 100);
    if ((bVar31 == 1) || (bVar31 == 0)) {
      *(uint *)(puVar10 + 0x682) = (uint)bVar31;
      *(uint *)(puVar10 + 0x684) = (uint)*(byte *)(lVar27 + 0x1b);
      bVar33 = *(byte *)(lVar27 + 0x18);
      bVar32 = *(byte *)(puVar10 + 0x668);
      bVar31 = bVar33 >> 1 & 1;
      bVar17 = (byte)((bVar33 & 4) >> 1);
      *(byte *)(puVar10 + 0x668) = bVar32 & 0xfc | bVar31 | bVar17;
      if ((bVar33 >> 2 & 1) != 0) {
        if (*(byte *)(lVar27 + 0x65) < 8) {
          *(uint *)(puVar10 + 0x686) = (uint)*(byte *)(lVar27 + 0x65);
          goto LAB_10ab82a44;
        }
LAB_10ab82bfc:
        puVar13 = &UNK_10f697bb6;
        goto LAB_10ab82c1c;
      }
LAB_10ab82a44:
      cVar5 = *(char *)(lVar27 + 0x50);
      *(byte *)(puVar10 + 0x668) = bVar32 & 0xf8 | bVar31 | bVar17 | cVar5 << 2;
      if (cVar5 != '\x01') {
LAB_10ab82ad8:
        *(undefined4 *)(puVar10 + 0x69c) = *(undefined4 *)(lVar27 + 0x78);
        *(undefined8 *)(puVar10 + 0x698) = *(undefined8 *)(lVar27 + 0x70);
        if ((*(byte *)(lVar27 + 0x18) >> 3 & 1) == 0) {
          if (2 < (ulong)*(byte *)(lVar27 + 0x1c)) {
            puVar13 = &UNK_10f697bed;
            goto LAB_10ab82c1c;
          }
          uVar18 = *(undefined4 *)(&UNK_10e502df8 + (ulong)*(byte *)(lVar27 + 0x1c) * 4);
        }
        else {
          uVar18 = 2;
        }
        *(undefined4 *)(puVar10 + 0x69e) = uVar18;
        plVar11 = *(long **)(puVar10 + 4);
        (**(code **)(*plVar11 + 0x58))();
        lVar16 = param_1 + 0x10a8;
        FUN_10ab833d0(lVar16,plVar11);
        *(int *)(puVar10 + 0x6a0) = (int)lVar16;
        *(byte *)(puVar10 + 0x668) =
             *(byte *)(puVar10 + 0x668) & 0xe7 | (*(byte *)(lVar27 + 0x19) & 3) << 3;
        FUN_10ab83454(param_1 + 0x1140,piVar9,puVar10);
        FUN_10ab7ae54(param_1,0);
        goto LAB_10ab82b70;
      }
      *(undefined1 *)(puVar10 + 0x688) = *(undefined1 *)(lVar27 + 0x51);
      if ((ulong)*(byte *)(lVar27 + 0x52) < 8) {
        *(undefined4 *)(puVar10 + 0x68a) =
             *(undefined4 *)(&UNK_10e502e04 + (ulong)*(byte *)(lVar27 + 0x52) * 4);
        if ((ulong)*(byte *)(lVar27 + 0x53) < 8) {
          *(undefined4 *)(puVar10 + 0x68e) =
               *(undefined4 *)(&UNK_10e502e04 + (ulong)*(byte *)(lVar27 + 0x53) * 4);
          if ((ulong)*(byte *)(lVar27 + 0x54) < 8) {
            *(undefined4 *)(puVar10 + 0x68c) =
                 *(undefined4 *)(&UNK_10e502e04 + (ulong)*(byte *)(lVar27 + 0x54) * 4);
            if (7 < (ulong)*(byte *)(lVar27 + 0x55)) goto LAB_10ab82bfc;
            *(undefined4 *)(puVar10 + 0x690) =
                 *(undefined4 *)(&UNK_10e502e24 + (ulong)*(byte *)(lVar27 + 0x55) * 4);
            *(undefined8 *)(puVar10 + 0x692) = *(undefined8 *)(lVar27 + 0x5c);
            *(undefined4 *)(puVar10 + 0x696) = *(undefined4 *)(lVar27 + 0x58);
            goto LAB_10ab82ad8;
          }
        }
      }
      goto LAB_10ab82bf0;
    }
    puVar13 = &UNK_10f697b69;
  }
LAB_10ab82c1c:
  FUN_10a0ee06c(puVar13);
LAB_10ab82d70:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10ab82d74);
  (*pcVar7)();
}



/* Entry: 10ab82148; end: 10ab82daf;  */

void FUN_10ab82148(ulong param_1,int *param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined2 *puVar8;
  long *plVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  byte bVar15;
  undefined4 uVar16;
  uint uVar17;
  ulong uVar18;
  byte *pbVar19;
  ulong uVar20;
  int iVar21;
  uint uVar22;
  long lVar23;
  byte *pbVar24;
  long lVar25;
  uint uVar26;
  int *piVar27;
  ulong uVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  long *plVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  int iStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  byte bStack_ec;
  undefined7 uStack_eb;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = (undefined2 *)(param_1 + 0x10e8);
  FUN_10abcb5f4();
  uVar18 = param_1;
  FUN_10a175558(param_1,(short)param_2[4]);
  *puVar8 = (short)uVar18;
  *(ulong *)(puVar8 + 0x24) = param_1 + 0x28;
  uVar20 = param_1 + 0x20;
  FUN_10a021e20(uVar20,uVar18);
  *(undefined1 *)(param_1 + 0x828) = 0;
  plVar9 = *(long **)(param_2 + 6);
  if (plVar9 == (long *)0x0) {
LAB_10ab82ba8:
    *(undefined1 *)(param_1 + 0x828) = 1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
LAB_10ab82bec:
    ___stack_chk_fail();
LAB_10ab82bf0:
    puVar11 = &UNK_10f697bcd;
  }
  else {
    if (*param_2 == -1) {
      lVar25 = 0;
      lVar14 = 0;
LAB_10ab82228:
      bVar4 = false;
    }
    else {
      lVar25 = param_1 + 0x20;
      FUN_10a015150();
      lVar14 = param_1 + 0x20;
      func_0x00010a01e9ec(lVar14,*param_2);
      plVar9 = *(long **)(param_2 + 6);
      if ((*(byte *)(lVar14 + 0x18) >> 6 & 1) == 0) goto LAB_10ab82228;
      bVar4 = true;
      if (*(char *)((long)plVar9 + 0xb9) != '\x01') {
        *(undefined1 *)((long)plVar9 + 0xb9) = 1;
        (**(code **)(*plVar9 + 0xa0))();
        plVar9 = *(long **)(param_2 + 6);
      }
    }
    iStack_148 = (int)plVar9;
    puVar12 = (undefined8 *)0x1;
    FUN_10a061940();
    if (puVar12 == (undefined8 *)0x0) {
      plStack_140 = (long *)0x0;
      plStack_138 = (long *)0x0;
    }
    else {
      plStack_140 = (long *)*puVar12;
      plStack_138 = (long *)puVar12[1];
      if (plStack_138 != (long *)0x0) {
        plVar9 = plStack_138 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = *plVar9 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
    plVar32 = plStack_138;
    plVar9 = plStack_140;
    if ((iStack_148 != 2) || (uVar18 = uVar20, func_0x00010abf3eb4(), (uVar18 & 1) == 0)) {
LAB_10ab82b70:
      plVar9 = plStack_138;
      if (plStack_138 != (long *)0x0) {
        plVar32 = plStack_138 + 1;
        do {
          lVar25 = *plVar32;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar4) {
            *plVar32 = lVar25 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*plStack_138 + 0x10))(plStack_138);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      goto LAB_10ab82ba8;
    }
    if (plVar32 == (long *)0x0) {
      plStack_128 = (long *)0x0;
    }
    else {
      plVar1 = plVar32 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        plStack_128 = plVar32;
      } while (cVar5 != '\0');
    }
    plStack_130 = plVar9;
    func_0x00010a1755ac(puVar8 + 4,&plStack_130);
    plVar9 = plStack_128;
    if (plStack_128 != (long *)0x0) {
      plVar1 = plStack_128 + 1;
      do {
        lVar23 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar23 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar23 == 0) {
        (**(code **)(*plStack_128 + 0x10))(plStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    if (plVar32 != (long *)0x0) {
      plVar9 = plVar32 + 1;
      do {
        lVar23 = *plVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = lVar23 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar23 == 0) {
        (**(code **)(*plVar32 + 0x10))(plVar32);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
      }
    }
    lVar23 = *(long *)(*(long *)(puVar8 + 4) + 0x130);
    lVar13 = *(long *)(*(long *)(puVar8 + 4) + 0x138);
    uVar17 = (int)((ulong)(lVar13 - lVar23) >> 3) * -0x3b13b13b;
    uVar18 = (ulong)uVar17;
    if (uVar17 == 0) goto LAB_10ab82b70;
    if (lVar13 == lVar23) goto LAB_10ab82d70;
    iVar21 = 0;
    piVar27 = (int *)(lVar23 + 4);
    do {
      iVar21 = *piVar27 + iVar21;
      uVar18 = uVar18 - 1;
      piVar27 = piVar27 + 0x1a;
    } while (uVar18 != 0);
    if (iVar21 == 0) goto LAB_10ab82b70;
    *(undefined8 *)(puVar8 + 0x20) = *(undefined8 *)(*(long *)(param_1 + 0x9b0) + 0x60);
    if (*(short *)((long)param_2 + 10) == -1) {
LAB_10ab82448:
      bVar30 = 0;
      bVar29 = 0;
      bVar31 = 0;
      bVar6 = false;
    }
    else {
      lVar23 = param_1 + 0x20;
      FUN_10a01f6d4();
      uVar18 = (ulong)*(byte *)(lVar23 + 0x24);
      if (uVar18 == 0xff) {
        uVar18 = (ulong)*(byte *)(lVar23 + 0x23);
        if (uVar18 == 0xff) goto LAB_10ab82448;
        uVar28 = (*(long *)(param_1 + 0x160) - *(long *)(param_1 + 0x158) >> 3) *
                 -0x7063e7063e7063e7;
        if (uVar28 < uVar18 || uVar28 - uVar18 == 0) goto LAB_10ab82d70;
        lVar23 = *(long *)(param_1 + 0x158) + uVar18 * 0x148;
        pbVar19 = (byte *)(lVar23 + 0x54);
        bVar29 = *(byte *)(lVar23 + 0x55);
        pbVar24 = (byte *)(lVar23 + 0x56);
      }
      else {
        uVar28 = (*(long *)(param_1 + 0x148) - *(long *)(param_1 + 0x140) >> 4) *
                 -0x30c30c30c30c30c3;
        if (uVar28 < uVar18 || uVar28 - uVar18 == 0) goto LAB_10ab82d70;
        lVar23 = *(long *)(param_1 + 0x140) + uVar18 * 0x150;
        pbVar19 = (byte *)(lVar23 + 0x6c);
        bVar29 = *(byte *)(lVar23 + 0x6d);
        pbVar24 = (byte *)(lVar23 + 0x6e);
      }
      bVar30 = bVar29 & *pbVar24;
      bVar31 = *pbVar19;
      bVar6 = true;
    }
    *(byte *)(param_1 + 0xb1e) = (bVar31 | bVar6 ^ 0xffU) & 1;
    uVar18 = param_1;
    FUN_10abf63d4(param_1,*(undefined8 *)(puVar8 + 0x20),lVar14);
    *(char *)(puVar8 + 0xc) = (char)uVar18;
    if (lVar14 == 0) {
      uVar16 = 0;
      *(undefined1 *)((long)puVar8 + 0x19) = 0;
      plVar9 = (long *)0x0;
      uVar33 = 0;
      plVar32 = (long *)0x0;
    }
    else {
      if ((*(byte *)(lVar14 + 0x1d) & 0xfe) == 2) {
        bVar15 = *(byte *)(*(long *)(puVar8 + 0x20) + 0x29);
      }
      else {
        bVar15 = 0;
      }
      *(byte *)((long)puVar8 + 0x19) = bVar15 & 1;
      plStack_130 = (long *)0x0;
      plStack_128 = (long *)0x0;
      uStack_120 = 0;
      if (((*(byte *)(lVar14 + 0x18) >> 3 & 1) == 0) ||
         (FUN_10a175d58(*(long *)(lVar14 + 0x170),
                        (*(long *)(lVar14 + 0x178) - *(long *)(lVar14 + 0x170) >> 3) *
                        -0x5555555555555555,*(long *)(puVar8 + 4) + 0x48,&plStack_130),
         plStack_128 == plStack_130)) {
        uVar16 = 0;
        plVar9 = plStack_130;
        uVar33 = uStack_120;
        plVar32 = plStack_128;
      }
      else {
        uVar16 = 1;
        plVar9 = plStack_130;
        uVar33 = uStack_120;
        plVar32 = plStack_128;
        if ((*(byte *)(lVar14 + 0x18) & 0x10) != 0) {
          uVar16 = 2;
        }
      }
    }
    lVar23 = *(long *)(puVar8 + 0x14);
    *(undefined4 *)(puVar8 + 0x10) = uVar16;
    if (lVar23 != 0) {
      *(long *)(puVar8 + 0x18) = lVar23;
      __ZdlPv();
      *(long *)(puVar8 + 0x14) = 0;
      *(undefined8 *)(puVar8 + 0x18) = 0;
      *(undefined8 *)(puVar8 + 0x1c) = 0;
    }
    *(long **)(puVar8 + 0x14) = plVar9;
    *(long **)(puVar8 + 0x18) = plVar32;
    *(undefined8 *)(puVar8 + 0x1c) = uVar33;
    puVar2 = (undefined1 *)((long)param_2 + 0x72);
    if (lVar14 != 0) {
      puVar2 = (undefined1 *)(lVar14 + 1);
    }
    uVar3 = *puVar2;
    if ((bVar4) && (*(long *)(param_2 + 8) != 0)) {
      FUN_10ab82db0(*(undefined4 *)(lVar14 + 0x120),*(undefined4 *)(lVar14 + 0x124),
                    *(undefined8 *)(puVar8 + 4));
    }
    puVar12 = (undefined8 *)0x1;
    FUN_10a044920(*(undefined8 *)(uVar20 + 0x160));
    if (puVar12 == (undefined8 *)0x0) {
      uVar33 = 0;
    }
    else {
      uVar33 = *puVar12;
    }
    *(undefined1 *)(puVar8 + 0x30) = 0;
    if (lVar14 == 0) {
      uVar17 = 0;
LAB_10ab825d4:
      uVar18 = 0;
    }
    else {
      uVar22 = *(uint *)(lVar14 + 0x18);
      uVar17 = uVar22 >> 5 & 1;
      *(char *)(puVar8 + 0x30) = (char)uVar17;
      if ((uVar22 >> 5 & 1) == 0) goto LAB_10ab825d4;
      uVar18 = (ulong)*(uint *)(param_1 + 0xd98);
      uVar17 = 1;
    }
    lVar23 = *(long *)(puVar8 + 4);
    uVar28 = (*(long *)(lVar23 + 0x108) - *(long *)(lVar23 + 0x100) >> 5) * -0x5555555555555555;
    if (uVar28 < uVar18 || uVar28 - uVar18 == 0) {
      uVar22 = (uint)(((int)((ulong)(*(long *)(lVar23 + 0x138) - *(long *)(lVar23 + 0x130)) >> 3) *
                       -0x3b13b13b & 0xfffffffeU) != 0);
    }
    else {
      uVar22 = 1;
    }
    uVar26 = 0;
    if ((*(char *)(*(long *)(param_1 + 0xd68) + 0x21e) == '\x01') && (1 < *(uint *)(uVar20 + 0x68)))
    {
      if ((ulong)((*(long *)(lVar23 + 0x120) - *(long *)(lVar23 + 0x118) >> 4) * -0x5555555555555555
                 ) < 2) {
        uVar26 = 0;
      }
      else {
        uVar26 = ((int)((ulong)(*(long *)(lVar23 + 0x138) - *(long *)(lVar23 + 0x130)) >> 3) *
                  -0x3b13b13b & 0xfffffffeU) == 0 & uVar22;
      }
    }
    if (uVar17 == 0) {
      uVar26 = 0;
      *(undefined1 *)((long)puVar8 + 0x61) = 0;
    }
    else {
      *(char *)((long)puVar8 + 0x61) = (char)uVar26;
      if (uVar22 == 0) {
        lVar13 = *(long *)(*(long *)(param_2 + 10) + 8);
        if (lVar13 == 0) {
          lVar13 = *(long *)(lVar25 + 0xb0);
        }
        FUN_10ab82e08(lVar23,lVar13);
        uVar26 = (uint)*(byte *)((long)puVar8 + 0x61);
      }
    }
    uVar26 = uVar26 | (uint)*(byte *)((long)puVar8 + 0x19) << 4;
    uVar17 = uVar26 | 0x40;
    if (!bVar6) {
      uVar17 = uVar26;
    }
    uVar22 = uVar17 | 0x80;
    if ((bVar31 & 1) == 0) {
      uVar22 = uVar17;
    }
    uVar17 = uVar22 | 0x100;
    if ((bVar29 & 1) == 0) {
      uVar17 = uVar22;
    }
    uVar22 = uVar17 | 0x200;
    if ((bVar30 & 1) == 0) {
      uVar22 = uVar17;
    }
    uVar20 = param_1;
    FUN_10abf5aa0(param_1,param_1 + 0x1068,param_2[1],*puVar8,uVar22,uVar33,uVar3,
                  *(undefined4 *)(puVar8 + 0x10),(int)uVar18,*(undefined1 *)(puVar8 + 0xc),
                  param_1 + 0xfb0,*(undefined8 *)(puVar8 + 0x20),*(undefined2 *)((long)param_2 + 10)
                 );
    uStack_160 = 0;
    plStack_158 = (long *)0x0;
    if ((ulong)(*(long *)(param_1 + 0x1090) - *(long *)(param_1 + 0x1088) >> 10) <=
        (uVar20 & 0xffffffff)) goto LAB_10ab82d70;
    lVar25 = *(long *)(param_1 + 0x1088) + (uVar20 & 0xffffffff) * 0x400;
    uVar33 = *(undefined8 *)(lVar25 + 0x3f0);
    FUN_10ab86b34(uVar33,lVar25);
    func_0x00010a175734(&uStack_160,uVar33);
    FUN_10ab87278(*(undefined8 *)(param_1 + 0x11d8),&uStack_160);
    func_0x00010a175610(puVar8 + 0x28,&uStack_160);
    plVar9 = plStack_158;
    if (plStack_158 != (long *)0x0) {
      plVar32 = plStack_158 + 1;
      do {
        lVar25 = *plVar32;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar32,0x10);
        if (bVar4) {
          *plVar32 = lVar25 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plStack_158 + 0x10))(plStack_158);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    lVar25 = param_1 + 0x20;
    FUN_10a021e20(lVar25,*puVar8);
    uStack_160 = 0;
    plStack_158 = (long *)0x0;
    uStack_170 = 0;
    uStack_168 = 0;
    if ((lVar14 != 0) && ((ulong)*(byte *)((long)param_2 + 0x12) < *(ulong *)(lVar14 + 0x130))) {
      puVar12 = (undefined8 *)
                (*(long *)(lVar14 + 0x128) + (ulong)*(byte *)((long)param_2 + 0x12) * 0x30);
      plStack_158 = (long *)puVar12[1];
      uStack_160 = *puVar12;
      uStack_168 = puVar12[3];
      uStack_170 = puVar12[2];
    }
    lVar14 = *(long *)(lVar25 + 0x88) + *(long *)(lVar25 + 0xb0) * 0x18;
    uVar20 = param_1 + 0x10a8;
    FUN_10ab832f4(uVar20,lVar14,*(long *)(lVar25 + 0x88) + *(long *)(lVar25 + 0xa0) * 0x18);
    *(ulong *)(puVar8 + 0x638) = uVar20;
    *(long *)(puVar8 + 0x63c) = lVar14;
    uStack_178 = 0;
    if ((plStack_158 != (long *)0x0) && (uVar20 < lVar14 + uVar20)) {
      lVar23 = uVar20 * 0x18;
      do {
        lVar13 = *(long *)(param_1 + 0x1120);
        uVar18 = (*(long *)(param_1 + 0x1128) - lVar13 >> 3) * -0x5555555555555555;
        if (uVar18 < uVar20 || uVar18 - uVar20 == 0) goto LAB_10ab82d70;
        FUN_10abfef18(&plStack_130,lVar13 + lVar23,&uStack_160,&uStack_178);
        if (bStack_ec == 1) {
          lVar13 = lVar13 + lVar23;
          lVar10 = lVar25 + 0xb8;
          FUN_10abff074(lVar10,lVar25 + 0xd0,(long)*(short *)(lVar13 + 8),&plStack_130);
          iVar21 = (int)*(short *)(lVar13 + 8);
          FUN_10abff248();
          *(int *)(lVar13 + 0xc) = (int)lVar10;
          *(int *)(lVar13 + 0x10) = iVar21;
          if ((bStack_ec & 1) != 0) {
            if (0x10 < (ulong)(byte)uStack_f0) goto LAB_10ab82d70;
            (*(code *)(&PTR_FUN_110ba1f88)[(byte)uStack_f0])(&plStack_130);
          }
        }
        uVar20 = uVar20 + 1;
        lVar23 = lVar23 + 0x18;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    uStack_178 = 0;
    lVar23 = *(long *)(lVar25 + 0xf0);
    for (lVar14 = *(long *)(lVar25 + 0xe8); lVar14 != lVar23; lVar14 = lVar14 + 0x68) {
      lVar13 = lVar14;
      FUN_10a5e23ac(lVar14,&uStack_170,&uStack_178);
      FUN_10ab812ec(&plStack_130,lVar14,lVar13);
      uVar20 = *(ulong *)(puVar8 + 0x34);
      if (0xf < uVar20) {
        FUN_10a0a2358();
        goto LAB_10ab82bec;
      }
      puVar12 = (undefined8 *)(puVar8 + uVar20 * 0x60 + 0x38);
      puVar12[2] = uStack_120;
      puVar12[1] = plStack_128;
      *puVar12 = plStack_130;
      plStack_128 = (long *)0x0;
      uStack_120 = 0;
      plStack_130 = (long *)0x0;
      puVar12[3] = uStack_118;
      *(ulong *)((long)puVar12 + 0x44) = CONCAT71(uStack_eb,bStack_ec);
      *(ulong *)((long)puVar12 + 0x3c) = CONCAT44(uStack_f0,uStack_f4);
      puVar12[5] = uStack_108;
      puVar12[4] = uStack_110;
      puVar12[7] = CONCAT44(uStack_f4,uStack_f8);
      puVar12[6] = uStack_100;
      puVar12[0xb] = uStack_d8;
      puVar12[10] = uStack_e0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      puVar12[0xd] = uStack_c8;
      puVar12[0xc] = uStack_d0;
      puVar12[0x15] = uStack_88;
      puVar12[0x14] = uStack_90;
      puVar12[0x17] = uStack_78;
      puVar12[0x16] = uStack_80;
      puVar12[0x11] = uStack_a8;
      puVar12[0x10] = uStack_b0;
      puVar12[0x13] = uStack_98;
      puVar12[0x12] = uStack_a0;
      puVar12[0xf] = uStack_b8;
      puVar12[0xe] = uStack_c0;
      *(ulong *)(puVar8 + 0x34) = uVar20 + 1;
    }
    uVar34 = *(undefined8 *)(lVar25 + 0x28);
    uVar33 = *(undefined8 *)(lVar25 + 0x20);
    uVar35 = *(undefined8 *)(lVar25 + 0x30);
    uVar37 = *(undefined8 *)(lVar25 + 0x48);
    uVar36 = *(undefined8 *)(lVar25 + 0x40);
    *(undefined8 *)(puVar8 + 0x676) = *(undefined8 *)(lVar25 + 0x38);
    *(undefined8 *)(puVar8 + 0x672) = uVar35;
    *(undefined8 *)(puVar8 + 0x67e) = uVar37;
    *(undefined8 *)(puVar8 + 0x67a) = uVar36;
    *(undefined8 *)(puVar8 + 0x66e) = uVar34;
    *(undefined8 *)(puVar8 + 0x66a) = uVar33;
    bVar29 = *(byte *)(lVar25 + 100);
    if ((bVar29 == 1) || (bVar29 == 0)) {
      *(uint *)(puVar8 + 0x682) = (uint)bVar29;
      *(uint *)(puVar8 + 0x684) = (uint)*(byte *)(lVar25 + 0x1b);
      bVar31 = *(byte *)(lVar25 + 0x18);
      bVar30 = *(byte *)(puVar8 + 0x668);
      bVar29 = bVar31 >> 1 & 1;
      bVar15 = (byte)((bVar31 & 4) >> 1);
      *(byte *)(puVar8 + 0x668) = bVar30 & 0xfc | bVar29 | bVar15;
      if ((bVar31 >> 2 & 1) != 0) {
        if (*(byte *)(lVar25 + 0x65) < 8) {
          *(uint *)(puVar8 + 0x686) = (uint)*(byte *)(lVar25 + 0x65);
          goto LAB_10ab82a44;
        }
LAB_10ab82bfc:
        puVar11 = &UNK_10f697bb6;
        goto LAB_10ab82c1c;
      }
LAB_10ab82a44:
      cVar5 = *(char *)(lVar25 + 0x50);
      *(byte *)(puVar8 + 0x668) = bVar30 & 0xf8 | bVar29 | bVar15 | cVar5 << 2;
      if (cVar5 != '\x01') {
LAB_10ab82ad8:
        *(undefined4 *)(puVar8 + 0x69c) = *(undefined4 *)(lVar25 + 0x78);
        *(undefined8 *)(puVar8 + 0x698) = *(undefined8 *)(lVar25 + 0x70);
        if ((*(byte *)(lVar25 + 0x18) >> 3 & 1) == 0) {
          if (2 < (ulong)*(byte *)(lVar25 + 0x1c)) {
            puVar11 = &UNK_10f697bed;
            goto LAB_10ab82c1c;
          }
          uVar16 = *(undefined4 *)(&UNK_10e502df8 + (ulong)*(byte *)(lVar25 + 0x1c) * 4);
        }
        else {
          uVar16 = 2;
        }
        *(undefined4 *)(puVar8 + 0x69e) = uVar16;
        plVar9 = *(long **)(puVar8 + 4);
        (**(code **)(*plVar9 + 0x58))();
        lVar14 = param_1 + 0x10a8;
        FUN_10ab833d0(lVar14,plVar9);
        *(int *)(puVar8 + 0x6a0) = (int)lVar14;
        *(byte *)(puVar8 + 0x668) =
             *(byte *)(puVar8 + 0x668) & 0xe7 | (*(byte *)(lVar25 + 0x19) & 3) << 3;
        FUN_10ab83454(param_1 + 0x1140,param_2,puVar8);
        FUN_10ab7ae54(param_1,0);
        goto LAB_10ab82b70;
      }
      *(undefined1 *)(puVar8 + 0x688) = *(undefined1 *)(lVar25 + 0x51);
      if ((ulong)*(byte *)(lVar25 + 0x52) < 8) {
        *(undefined4 *)(puVar8 + 0x68a) =
             *(undefined4 *)(&UNK_10e502e04 + (ulong)*(byte *)(lVar25 + 0x52) * 4);
        if ((ulong)*(byte *)(lVar25 + 0x53) < 8) {
          *(undefined4 *)(puVar8 + 0x68e) =
               *(undefined4 *)(&UNK_10e502e04 + (ulong)*(byte *)(lVar25 + 0x53) * 4);
          if ((ulong)*(byte *)(lVar25 + 0x54) < 8) {
            *(undefined4 *)(puVar8 + 0x68c) =
                 *(undefined4 *)(&UNK_10e502e04 + (ulong)*(byte *)(lVar25 + 0x54) * 4);
            if (7 < (ulong)*(byte *)(lVar25 + 0x55)) goto LAB_10ab82bfc;
            *(undefined4 *)(puVar8 + 0x690) =
                 *(undefined4 *)(&UNK_10e502e24 + (ulong)*(byte *)(lVar25 + 0x55) * 4);
            *(undefined8 *)(puVar8 + 0x692) = *(undefined8 *)(lVar25 + 0x5c);
            *(undefined4 *)(puVar8 + 0x696) = *(undefined4 *)(lVar25 + 0x58);
            goto LAB_10ab82ad8;
          }
        }
      }
      goto LAB_10ab82bf0;
    }
    puVar11 = &UNK_10f697b69;
  }
LAB_10ab82c1c:
  FUN_10a0ee06c(puVar11);
LAB_10ab82d70:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10ab82d74);
  (*pcVar7)();
}



/* Entry: 10ab82db0; end: 10ab82e07;  */

void FUN_10ab82db0(long param_1,long param_2)

{
  long lVar1;
  
  if ((param_2 != 0) && (*(long *)(param_1 + 0xf0) != 0)) {
    FUN_10a1781d0();
    lVar1 = *(long *)(*(long *)(param_1 + 0xf0) + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010ab82df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x28) + 0x10))
              (*(long **)(param_1 + 0x28),lVar1,*(long *)(*(long *)(param_1 + 0xf0) + 0x30) - lVar1,
               0,*(undefined1 *)(param_1 + 0x148));
    return;
  }
  return;
}



/* Entry: 10ab82e08; end: 10ab832f3;  */

undefined1  [16] FUN_10ab82e08(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  code *pcVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  long *plVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uStack_b4;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  int *piVar22;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((1 < (ulong)((*(long *)(param_1 + 0x120) - *(long *)(param_1 + 0x118) >> 4) *
                  -0x5555555555555555)) &&
     (1 < (ulong)((*(long *)(param_2 + 0x90) - *(long *)(param_2 + 0x88) >> 4) * -0x5555555555555555
                 ))) {
    uVar16 = (ulong)*(uint *)(param_2 + 0x130);
    uVar18 = (*(long *)(param_2 + 0x100) - *(long *)(param_2 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
    if (uVar18 < uVar16 || uVar18 - uVar16 == 0) goto LAB_10ab8329c;
    lVar26 = *(long *)(param_2 + 0xf8) + uVar16 * 0x38;
    if (*(int *)(lVar26 + 0x24) != 5) goto LAB_10ab83260;
    lStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000104bec9f0(&lStack_98,*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10),0);
    FUN_10ab4a3d8(param_1 + 0x118,1);
    lStack_80 = 0;
    uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
    if (*(long *)(param_1 + 0x120) == *(long *)(param_1 + 0x118)) {
LAB_10ab831dc:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10ab831e0);
      (*pcVar11)();
    }
    FUN_10a0d3a24(*(long *)(param_1 + 0x118) + 0x18,&lStack_80,(long)&uStack_78 + 4,1);
    puVar3 = *(undefined8 **)(param_1 + 0x118);
    if (*(undefined8 **)(param_1 + 0x120) == puVar3) goto LAB_10ab831dc;
    puVar3[1] = *puVar3;
    func_0x0001056c5718(puVar3,(*(long *)(param_1 + 0x108) - *(long *)(param_1 + 0x100) >> 5) *
                               -0x5555555555555555);
    lStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    FUN_10a05151c(&lStack_80,*(long *)(param_2 + 0x10),*(long *)(param_2 + 0x18),
                  *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10));
    lVar25 = *(long *)(param_2 + 0x88);
    if (lVar25 == *(long *)(param_2 + 0x90)) {
      lStack_b0 = 0;
      lStack_a8 = 0;
      uStack_a0 = 0;
    }
    else {
      lVar27 = *(long *)(param_2 + 0x28);
      uVar9 = *(uint *)(param_2 + 0xf0);
      if (*(long *)(lVar25 + 0x18) == *(long *)(lVar25 + 0x20)) {
LAB_10ab82fb8:
        iVar28 = 0;
      }
      else {
        lVar4 = *(long *)(param_2 + 0xd0);
        if (lVar4 == *(long *)(param_2 + 0xd8)) goto LAB_10ab82fb8;
        uVar16 = (ulong)*(uint *)(*(long *)(lVar25 + 0x18) + 8);
        uVar18 = (*(long *)(param_2 + 0xd8) - lVar4 >> 3) * 0x4ec4ec4ec4ec4ec5;
        if (uVar18 < uVar16 || uVar18 - uVar16 == 0) goto LAB_10ab831dc;
        iVar28 = *(int *)(lVar4 + uVar16 * 0x68 + 8);
      }
      uVar16 = 0;
      lStack_b0 = 0;
      uStack_a0 = 0;
      do {
        lStack_a8 = lStack_b0;
        plVar29 = (long *)(lVar25 + uVar16 * 0x30);
        lVar25 = *plVar29;
        if (plVar29[1] != lVar25) {
          uVar18 = 0;
          do {
            plVar5 = *(long **)(param_1 + 0x118);
            if (*(long **)(param_1 + 0x120) == plVar5) goto LAB_10ab831dc;
            piVar6 = (int *)*plVar5;
            piVar7 = (int *)plVar5[1];
            piVar20 = piVar6;
            if (piVar6 != piVar7) {
              piVar19 = piVar6;
              piVar21 = piVar6;
              do {
                piVar22 = piVar21 + 1;
                piVar20 = piVar19;
                if (*piVar21 == *(int *)(lVar25 + uVar18 * 4)) break;
                piVar19 = piVar19 + 1;
                piVar20 = piVar7;
                piVar21 = piVar22;
              } while (piVar22 != piVar7);
            }
            if (piVar7 == piVar20) {
              uStack_b4 = (undefined4)((ulong)((long)piVar7 - (long)piVar6) >> 2);
              FUN_10a1b210c(&lStack_b0,&uStack_b4);
              if ((*(long *)(param_1 + 0x120) == *(long *)(param_1 + 0x118)) ||
                 ((ulong)(plVar29[1] - *plVar29 >> 2) <= uVar18)) goto LAB_10ab831dc;
              FUN_10a0e6678(*(long *)(param_1 + 0x118),*plVar29 + uVar18 * 4);
            }
            else {
              uStack_b4 = (undefined4)((ulong)((long)piVar20 - (long)piVar6) >> 2);
              FUN_10a1b210c(&lStack_b0,&uStack_b4);
            }
            uVar18 = uVar18 + 1;
            lVar25 = *plVar29;
          } while (uVar18 < (ulong)(plVar29[1] - lVar25 >> 2));
        }
        puVar8 = (uint *)plVar29[4];
        for (puVar17 = (uint *)plVar29[3]; puVar17 != puVar8; puVar17 = puVar17 + 3) {
          uVar23 = *puVar17;
          uVar18 = (ulong)uVar23;
          uVar2 = puVar17[1];
          uVar1 = uVar2 + uVar23;
          if (uVar23 < uVar1) {
            iVar10 = *(int *)(param_2 + 0xe8);
            do {
              if (iVar10 == 1) {
                uVar23 = (uint)*(ushort *)(lVar27 + uVar18 * 2);
              }
              else {
                uVar23 = *(uint *)(lVar27 + uVar18 * 4);
              }
              uVar24 = (ulong)(uVar23 + iVar28);
              if (uStack_90 <= uVar24) goto LAB_10ab831dc;
              uVar12 = (ulong)(uVar23 + iVar28 >> 6);
              uVar13 = 1L << (uVar24 & 0x3f);
              uVar14 = *(ulong *)(lStack_98 + uVar12 * 8);
              if ((uVar14 & uVar13) == 0) {
                *(ulong *)(lStack_98 + uVar12 * 8) = uVar14 | uVar13;
                uVar24 = (ulong)*(uint *)(lVar26 + 0x30) + uVar24 * uVar9;
                if ((ulong)(uStack_78 - lStack_80) <= uVar24) goto LAB_10ab831dc;
                lVar25 = 0;
                lVar4 = lStack_80 + uVar24;
                do {
                  fVar30 = *(float *)(lVar4 + lVar25);
                  if (fVar30 != 0.0) {
                    iVar15 = (int)fVar30;
                    if ((ulong)(lStack_a8 - lStack_b0 >> 2) <= (ulong)(long)iVar15)
                    goto LAB_10ab831dc;
                    fVar31 = (float)NEON_ucvtf(*(undefined4 *)(lStack_b0 + (long)iVar15 * 4));
                    *(float *)(lVar4 + lVar25) = (fVar30 - (float)iVar15) + fVar31;
                  }
                  lVar25 = lVar25 + 4;
                } while (lVar25 != 0x10);
              }
              uVar18 = uVar18 + 1;
            } while (uVar18 != uVar1);
          }
          lVar25 = *(long *)(param_1 + 0x118);
          if ((*(long *)(param_1 + 0x120) == lVar25) ||
             (lVar4 = *(long *)(lVar25 + 0x18), *(long *)(lVar25 + 0x20) == lVar4))
          goto LAB_10ab831dc;
          *(uint *)(lVar4 + 4) = *(int *)(lVar4 + 4) + uVar2;
        }
        uVar16 = uVar16 + 1;
        lVar25 = *(long *)(param_2 + 0x88);
      } while (uVar16 < (ulong)((*(long *)(param_2 + 0x90) - lVar25 >> 4) * -0x5555555555555555));
    }
    param_3 = uStack_78 - lStack_80;
    param_2 = lStack_80;
    (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
    if (lStack_b0 != 0) {
      lStack_a8 = lStack_b0;
      __ZdlPv();
    }
    if (lStack_80 != 0) {
      uStack_78 = lStack_80;
      __ZdlPv();
    }
    param_1 = lStack_98;
    if (lStack_98 != 0) {
      __ZdlPv();
    }
  }
LAB_10ab83260:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar32._8_8_ = param_2;
    auVar32._0_8_ = param_1;
    return auVar32;
  }
  ___stack_chk_fail();
LAB_10ab8329c:
  FUN_10ab725fc();
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  if (lStack_80 != 0) {
    uStack_78 = lStack_80;
    __ZdlPv();
  }
  if (lStack_98 != 0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  lVar26 = *(long *)(param_1 + 0x90);
  uVar16 = (param_3 - param_2 >> 3) * -0x5555555555555555;
  if (param_3 - param_2 != 0) {
    lVar25 = *(long *)(param_1 + 0x78);
    lVar27 = (*(long *)(param_1 + 0x80) - lVar25 >> 3) * -0x5555555555555555;
    uVar18 = lVar27 - lVar26;
    if (uVar16 <= uVar18) {
      uVar18 = uVar16;
    }
    uVar24 = lVar27 - lVar26;
    if (uVar24 != 0) {
      _memmove(lVar25 + lVar26 * 0x18,param_2,uVar18 * 0x18 + -4);
    }
    if (uVar24 < uVar16) {
      param_2 = param_2 + uVar18 * 0x18;
      FUN_10a1981b0((long *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),param_2,param_3,
                    (param_3 - param_2 >> 3) * -0x5555555555555555);
    }
    *(ulong *)(param_1 + 0x90) = lVar26 + uVar16;
  }
  auVar33._8_8_ = uVar16;
  auVar33._0_8_ = lVar26;
  return auVar33;
}



/* Entry: 10ab832f4; end: 10ab833cf;  */

undefined1  [16] FUN_10ab832f4(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  lVar5 = *(long *)(param_1 + 0x90);
  uVar6 = (param_3 - param_2 >> 3) * -0x5555555555555555;
  if (param_3 - param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x78);
    lVar4 = (*(long *)(param_1 + 0x80) - lVar1 >> 3) * -0x5555555555555555;
    uVar2 = lVar4 - lVar5;
    if (uVar6 <= uVar2) {
      uVar2 = uVar6;
    }
    uVar3 = lVar4 - lVar5;
    if (uVar3 != 0) {
      _memmove(lVar1 + lVar5 * 0x18,param_2,uVar2 * 0x18 + -4);
    }
    if (uVar3 < uVar6) {
      param_2 = param_2 + uVar2 * 0x18;
      FUN_10a1981b0((long *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),param_2,param_3,
                    (param_3 - param_2 >> 3) * -0x5555555555555555);
    }
    *(ulong *)(param_1 + 0x90) = lVar5 + uVar6;
  }
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = lVar5;
  return auVar7;
}



/* Entry: 10ab833d0; end: 10ab83453;  */

uint FUN_10ab833d0(long param_1,long *param_2)

{
  int iVar1;
  
  FUN_10a18ce64(param_1 + 0x60,*(undefined8 *)(param_1 + 0x68),*param_2,param_2[1],
                (param_2[1] - *param_2 >> 3) * 0x4ec4ec4ec4ec4ec5);
  iVar1 = (int)((ulong)(*(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60)) >> 3);
  return iVar1 * -0x3b13b13b + ((uint)((int)param_2[1] - (int)*param_2) >> 3) * 0x3b13b13b & 0xffff
         | iVar1 * 0x4ec50000;
}



/* Entry: 10ab83454; end: 10ab83497;  */

void FUN_10ab83454(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = param_1;
  if ((int)param_1[6] != 0) {
    for (plVar2 = (long *)param_1[1];
        (plVar1 = param_1, plVar2 != param_1 && (plVar1 = plVar2, (*(byte *)(plVar2 + 6) & 1) == 0))
        ; plVar2 = (long *)plVar2[1]) {
    }
  }
  lVar3 = param_1[5];
  if (lVar3 == 0) {
    plVar2 = (long *)0x38;
    __Znwm();
    plVar2[2] = param_2;
    plVar2[3] = param_3;
    *(undefined4 *)(plVar2 + 4) = 0xffffffff;
    plVar2[5] = 0;
    *(undefined1 *)(plVar2 + 6) = 0;
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    *plVar1 = (long)plVar2;
    plVar2[1] = (long)plVar1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    plVar2 = (long *)param_1[4];
    if ((plVar1 != plVar2) && (plVar4 = (long *)plVar2[1], plVar4 != plVar1)) {
      lVar5 = *plVar2;
      *(long **)(lVar5 + 8) = plVar4;
      *plVar4 = lVar5;
      lVar5 = *plVar1;
      *(long **)(lVar5 + 8) = plVar2;
      *plVar2 = lVar5;
      *plVar1 = (long)plVar2;
      plVar2[1] = (long)plVar1;
      param_1[5] = lVar3 + -1;
      param_1[2] = param_1[2] + 1;
    }
    plVar2[2] = param_2;
    plVar2[3] = param_3;
    *(undefined1 *)(plVar2 + 6) = 0;
  }
  return;
}



/* Entry: 10ab83498; end: 10ab83787;  */

void FUN_10ab83498(uint *param_1,long param_2,long param_3,long param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined1 auStack_90 [48];
  
  *param_1 = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((*(char *)(param_2 + 0x11eb) == '\x01') && (piVar10 = (int *)(param_4 + 0x20), *piVar10 == 0))
  {
    pbVar1 = (byte *)(param_2 + 0x1208);
    do {
      bVar2 = *pbVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar5) {
        *pbVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    while ((bVar2 & 1) != 0) {
      do {
      } while ((*pbVar1 & 1) != 0);
      do {
        bVar2 = *pbVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
        if (bVar5) {
          *pbVar1 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar7 = param_2;
    FUN_10ab87438(param_2,param_4 + 0x50,*(undefined4 *)(param_3 + 4),
                  *(undefined2 *)(param_3 + 0x10));
    lVar8 = param_2 + 0xea8;
    FUN_10ab87b9c(lVar8,lVar7);
    uVar3 = *(uint *)(lVar8 + 0x1290);
    *param_1 = uVar3;
    *(undefined1 *)(lVar7 + 0x240) = 1;
    *(undefined4 *)(lVar8 + 0x440) = *(undefined4 *)(param_2 + 0xf20);
    if (lVar8 + 0x440 == param_2 + 0xf20) {
      *(undefined8 *)(lVar8 + 0x470) = *(undefined8 *)(param_2 + 0xf50);
      *(undefined8 *)(lVar8 + 0x4a0) = *(undefined8 *)(param_2 + 0xf80);
    }
    else {
      *(undefined8 *)(lVar8 + 0x468) = 0;
      if (*(long *)(param_2 + 0xf48) != 0) {
        lVar7 = param_2 + 0xf28;
        lVar11 = *(long *)(param_2 + 0xf48) << 2;
        do {
          func_0x00010928bcfc(lVar8 + 0x448,lVar7);
          lVar7 = lVar7 + 4;
          lVar11 = lVar11 + -4;
        } while (lVar11 != 0);
      }
      *(undefined8 *)(lVar8 + 0x470) = *(undefined8 *)(param_2 + 0xf50);
      *(undefined8 *)(lVar8 + 0x498) = 0;
      if (*(long *)(param_2 + 0xf78) != 0) {
        lVar7 = param_2 + 0xf58;
        lVar11 = *(long *)(param_2 + 0xf78) << 2;
        do {
          func_0x000109261ecc(lVar8 + 0x478,lVar7);
          lVar7 = lVar7 + 4;
          lVar11 = lVar11 + -4;
        } while (lVar11 != 0);
      }
      *(undefined8 *)(lVar8 + 0x4a0) = *(undefined8 *)(param_2 + 0xf80);
      *(undefined8 *)(lVar8 + 0x4c8) = 0;
      if (*(long *)(param_2 + 0xfa8) != 0) {
        lVar7 = param_2 + 0xf88;
        lVar11 = *(long *)(param_2 + 0xfa8) << 2;
        do {
          func_0x000109261ecc(lVar8 + 0x4a8,lVar7);
          lVar7 = lVar7 + 4;
          lVar11 = lVar11 + -4;
        } while (lVar11 != 0);
      }
    }
    FUN_10ab7f0d4(lVar8,*(undefined4 *)(*(long *)(param_4 + 8) + 0xc4));
    FUN_10ab7e938(param_2,lVar8,lVar8 + 0x5d0,*(undefined8 *)(param_4 + 8));
    if (*piVar10 != 0) {
      FUN_10ab87e54(auStack_90,param_2,piVar10,lVar8,lVar8 + 0x5d0,*(undefined8 *)(param_4 + 8));
    }
    FUN_10ab7f104(param_2,lVar8,lVar8 + 0x5d0,*(undefined8 *)(param_4 + 8));
    FUN_10ab80a08(param_2,param_4,lVar8,lVar8 + 0x5d0);
    FUN_10ab88394(lVar8,param_4);
    *(undefined1 *)(*(long *)(lVar8 + 0x5c0) + 0x240) = 0;
    *pbVar1 = 0;
    uVar9 = (*(long *)(param_2 + 0xef0) - *(long *)(param_2 + 0xee8) >> 3) * -0x6e25006e25006e25;
    if (uVar9 < uVar3 || uVar9 - uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab83704);
      (*pcVar6)();
    }
    FUN_10ab88424(*(undefined8 *)(*(long *)(param_2 + 0xee8) + (ulong)uVar3 * 0x1298 + 0x5c0));
  }
  return;
}



/* Entry: 10ab83788; end: 10ab8680f;  */

/* WARNING: Removing unreachable block (ram,0x00010ab85900) */
/* WARNING: Removing unreachable block (ram,0x00010ab85824) */
/* WARNING: Removing unreachable block (ram,0x00010ab857ec) */
/* WARNING: Removing unreachable block (ram,0x00010ab85124) */
/* WARNING: Removing unreachable block (ram,0x00010ab84f1c) */
/* WARNING: Removing unreachable block (ram,0x00010ab854ec) */
/* WARNING: Removing unreachable block (ram,0x00010ab85058) */
/* WARNING: Removing unreachable block (ram,0x00010ab858b8) */
/* WARNING: Removing unreachable block (ram,0x00010ab8593c) */

void FUN_10ab83788(long *param_1,int *param_2,undefined2 *param_3,uint *param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined8 *****pppppuVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  char cVar11;
  ulong uVar12;
  code *pcVar13;
  bool bVar14;
  long *plVar15;
  long *****ppppplVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  short sVar21;
  undefined8 uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  long lVar26;
  byte *pbVar27;
  undefined4 uVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  byte bVar35;
  undefined1 uVar36;
  long lVar37;
  int *piVar38;
  long *****ppppplVar39;
  int iVar40;
  long lVar41;
  int *piVar42;
  float *pfVar43;
  byte *pbVar44;
  uint uVar45;
  long lVar46;
  long *plVar47;
  long *plVar48;
  ulong *puVar49;
  ulong *puVar50;
  long lVar51;
  undefined2 *puVar52;
  float fVar53;
  undefined8 uVar54;
  float fVar55;
  float fVar56;
  undefined8 uStack_b70;
  long lStack_b68;
  undefined8 uStack_b30;
  long lStack_b28;
  undefined8 uStack_b20;
  long lStack_b18;
  long *plStack_b00;
  long *plStack_ae0;
  long ****pppplStack_ab0;
  long *plStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined4 uStack_a88;
  undefined1 uStack_a81;
  undefined8 uStack_a80;
  long lStack_a78;
  long ****pppplStack_a70;
  long *plStack_a68;
  ulong uStack_a60;
  undefined8 ****ppppuStack_a50;
  ulong uStack_a48;
  ulong uStack_a40;
  undefined1 uStack_a30;
  undefined1 uStack_a2f;
  undefined1 uStack_a2e;
  undefined1 uStack_a2d;
  float fStack_a2c;
  float fStack_a28;
  float fStack_a24;
  undefined4 uStack_a20;
  uint uStack_a1c;
  undefined4 uStack_a18;
  undefined4 uStack_a14;
  undefined4 uStack_a10;
  undefined4 uStack_a0c;
  long lStack_a08;
  long lStack_a00;
  undefined4 uStack_9f8;
  undefined4 uStack_9f4;
  uint uStack_9f0;
  undefined8 uStack_9ec;
  undefined1 auStack_9e0 [8];
  long *plStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  uint uStack_9a0;
  undefined4 uStack_99c;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined1 auStack_770 [544];
  undefined8 uStack_550;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 auStack_370 [544];
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  long alStack_118 [3];
  long *plStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long ***ppplStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  byte bStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar5 = *(int *)param_1[0x136];
  *(int *)param_1[0x136] = param_2[3];
  *(undefined1 *)param_1[0x137] = 0;
  lVar37 = param_1[0x109];
  plVar48 = param_1 + 4;
  FUN_10a021e20(plVar48,*param_3);
  FUN_10ad5eae0(lVar37,plVar48);
  uVar45 = *param_4;
  if (uVar45 == 0xffffffff) {
    plVar48 = param_1;
    FUN_10ab87438(param_1,param_3 + 0x28,param_2[1],(short)param_2[4]);
  }
  else {
    uVar31 = (param_1[0x1de] - param_1[0x1dd] >> 3) * -0x6e25006e25006e25;
    if (uVar31 < uVar45 || uVar31 - uVar45 == 0) goto LAB_10ab86718;
    plVar48 = *(long **)(param_1[0x1dd] + (ulong)uVar45 * 0x1298 + 0x5c0);
  }
  FUN_10ab88424(plVar48);
  FUN_10ad5ec0c(param_1[0x109]);
  plVar15 = param_1 + 4;
  FUN_10a021e20(plVar15,*param_3);
  FUN_10ad5ec40(param_1[0x109],plVar15);
  *(undefined1 *)(param_1 + 0x105) = 1;
  iVar6 = param_2[1];
  uVar36 = *(undefined1 *)((long)param_2 + 0x71);
  *(undefined8 *)((long)param_1 + 0xafc) = 0x100000001;
  uStack_b8 = *(long *)((long)param_1 + 0xb04);
  uStack_d0 = FUN_10ac09d40;
  uStack_c8 = &PTR_DAT_110c55800;
  ppplStack_c0 = (long ***)param_1;
  if (iVar6 == -1) {
    bVar35 = 0;
  }
  else {
    plVar17 = param_1 + 4;
    func_0x00010a01e9ec();
    bVar35 = *(byte *)(plVar17 + 3) >> 1 & 2;
  }
  if ((((plVar48[0x38] != 0) || ((*(byte *)(plVar15 + 3) >> 4 & 1) != 0)) &&
      (plVar17 = param_1, FUN_10abf0c94(param_1,plVar15), ((ulong)plVar17 & 1) == 0)) &&
     (*(long *)(param_1[0x137] + 0x18) != 0)) {
    (**(code **)(*param_1 + 0x50))(param_1,*(undefined8 *)(param_1[0x137] + 0x20),uVar36,bVar35);
  }
  lVar37 = plVar15[0x1d];
  lVar26 = plVar15[0x1e];
  if (lVar37 != lVar26) {
    uVar31 = 0;
    do {
      plVar15 = plVar48;
      FUN_10ab7f420(plVar48,lVar37);
      if ((plVar15 != (long *)0x0) &&
         (plVar15 = param_1, FUN_10abf2cc4(param_1,*(undefined8 *)(lVar37 + 0x30),bVar35),
         (int)plVar15 != 0)) {
        FUN_10ab812ec(&uStack_a30,lVar37,0);
        if (*(ulong *)(param_3 + 0x34) <= uVar31) {
          FUN_10a0a2358();
          goto LAB_10ab86420;
        }
        if (0xf < (uint)uVar31) goto LAB_10ab86718;
        puVar19 = (undefined8 *)(param_3 + uVar31 * 0x60 + 0x38);
        if (*(char *)((long)puVar19 + 0x17) < '\0') {
          __ZdlPv(*puVar19);
        }
        puVar19[1] = CONCAT44(fStack_a24,fStack_a28);
        *puVar19 = CONCAT44(fStack_a2c,
                            CONCAT13(uStack_a2d,CONCAT12(uStack_a2e,CONCAT11(uStack_a2f,uStack_a30))
                                    ));
        uVar22 = CONCAT44(uStack_a1c,uStack_a20);
        uStack_a1c = uStack_a1c & 0xffffff;
        uStack_a30 = 0;
        puVar19[2] = uVar22;
        puVar19[3] = CONCAT44(uStack_a14,uStack_a18);
        puVar19[5] = lStack_a08;
        puVar19[4] = CONCAT44(uStack_a0c,uStack_a10);
        puVar19[7] = CONCAT44(uStack_9f4,uStack_9f8);
        puVar19[6] = lStack_a00;
        *(undefined8 *)((long)puVar19 + 0x44) = uStack_9ec;
        *(ulong *)((long)puVar19 + 0x3c) = CONCAT44(uStack_9f0,uStack_9f4);
        FUN_10a00e5c4(puVar19 + 10,auStack_9e0);
        plVar15 = plStack_9d8;
        puVar19[0xd] = uStack_9c8;
        puVar19[0xc] = uStack_9d0;
        puVar19[0xf] = uStack_9b8;
        puVar19[0xe] = uStack_9c0;
        puVar19[0x11] = uStack_9a8;
        puVar19[0x10] = uStack_9b0;
        puVar19[0x13] = uStack_998;
        puVar19[0x12] = CONCAT44(uStack_99c,uStack_9a0);
        puVar19[0x15] = uStack_988;
        puVar19[0x14] = uStack_990;
        puVar19[0x17] = uStack_978;
        puVar19[0x16] = uStack_980;
        if (plStack_9d8 != (long *)0x0) {
          plVar17 = plStack_9d8 + 1;
          do {
            lVar29 = *plVar17;
            cVar11 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar14) {
              *plVar17 = lVar29 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (lVar29 == 0) {
            (**(code **)(*plStack_9d8 + 0x10))(plStack_9d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
        if ((int)uStack_a1c < 0) {
          __ZdlPv(CONCAT44(fStack_a2c,
                           CONCAT13(uStack_a2d,CONCAT12(uStack_a2e,CONCAT11(uStack_a2f,uStack_a30)))
                          ));
        }
      }
      uVar31 = (ulong)((uint)uVar31 + 1);
      lVar37 = lVar37 + 0x68;
    } while (lVar37 != lVar26);
  }
  FUN_10a044790(&uStack_d0);
  (*(code *)*uStack_c8)(&uStack_c8);
  *(undefined1 *)(param_1 + 0x105) = 0;
  plVar15 = param_1 + 4;
  FUN_10a021e20(plVar15,*param_3);
  if (*param_2 == -1) {
    plStack_ae0 = (long *)0x0;
    plStack_b00 = (long *)0x0;
  }
  else {
    plStack_b00 = param_1 + 4;
    FUN_10a015150();
    plStack_ae0 = param_1 + 4;
    func_0x00010a01e9ec(plStack_ae0,*param_2);
  }
  plVar17 = param_1 + 0x1d5;
  *(undefined1 *)(param_1 + 0x1d5) = 0;
  uVar45 = *param_4;
  if (uVar45 == 0xffffffff) {
    plVar47 = plVar17;
    FUN_10ab87b9c(plVar17,plVar48);
  }
  else {
    uVar31 = (param_1[0x1de] - param_1[0x1dd] >> 3) * -0x6e25006e25006e25;
    if (uVar31 < uVar45 || uVar31 - uVar45 == 0) goto LAB_10ab86718;
    plVar47 = (long *)(param_1[0x1dd] + (ulong)uVar45 * 0x1298);
  }
  *(undefined1 *)((long)param_1 + 0xea9) = 0;
  *(undefined1 *)(plVar48 + 0x48) = 1;
  FUN_10ab7f0d4(plVar47,*(undefined4 *)(*(long *)(param_3 + 4) + 0xc4));
  pfVar1 = (float *)(plVar47 + 0xba);
  plVar48 = param_1;
  FUN_10ab7e938(param_1,plVar47,pfVar1,*(undefined8 *)(param_3 + 4));
  if (((ulong)plVar48 & 1) == 0) {
    plVar48 = param_1;
    FUN_10a175558(param_1,*param_3);
    FUN_10a021e20(param_1 + 4,plVar48);
    if (*param_2 != -1) {
      func_0x00010a01e9ec(param_1 + 4);
    }
    FUN_10a5e1470(param_1 + 4,plVar48);
  }
  piVar38 = (int *)(param_3 + 0x10);
  if (*piVar38 != 0) {
    FUN_10ab87e54(&uStack_a30,param_1,piVar38,plVar47,pfVar1,*(undefined8 *)(param_3 + 4));
    lStack_b18 = CONCAT44(fStack_a24,fStack_a28);
    uStack_b20 = CONCAT44(fStack_a2c,
                          CONCAT13(uStack_a2d,CONCAT12(uStack_a2e,CONCAT11(uStack_a2f,uStack_a30))))
    ;
    lStack_b28 = CONCAT44(uStack_a14,uStack_a18);
    uStack_b30 = CONCAT44(uStack_a1c,uStack_a20);
    uStack_b70 = CONCAT44(uStack_a0c,uStack_a10);
    lStack_b68 = lStack_a08;
  }
  FUN_10ab7f104(param_1,plVar47,pfVar1,*(undefined8 *)(param_3 + 4));
  FUN_10ab80a08(param_1,param_3,plVar47,pfVar1);
  FUN_10ab88394(plVar47,param_3);
  *(undefined1 *)(plVar47[0xb8] + 0x240) = 0;
  plVar48 = param_1;
  (**(code **)(*param_1 + 0x70))();
  if ((int)plVar48 == 0) {
    uVar45 = 0;
  }
  else {
    uVar45 = (uint)(*(char *)(*(long *)(param_3 + 0x20) + 0x2a) == '\x01');
  }
  FUN_10ab88424(plVar47[0xb8]);
  lVar37 = param_1[0x1ad];
  uVar25 = *(uint *)(lVar37 + 0x280);
  FUN_10ab93570(*(undefined8 *)(plVar47[0xb8] + 0x18));
  if (uVar25 < *(uint *)(lVar37 + 0x280)) {
    func_0x00010ad5f5c4(param_1[0x109]);
  }
  lVar37 = plVar47[0xb8];
  param_1[0x1af] = lVar37;
  if ((short)param_2[2] == -1) {
    uStack_a30 = 0;
    uStack_a2f = 0;
    uStack_a2e = 0;
    fStack_a24 = NAN;
    uStack_a20 = 0x7fc00000;
    fStack_a2c = NAN;
    fStack_a28 = NAN;
    uStack_a14 = 0x7fc00000;
    uStack_a10 = 0x7fc00000;
    uStack_a1c = 0x7fc00000;
    uStack_a18 = 0x7fc00000;
    uStack_a0c = 0x7fa00000;
    uStack_9a0 = uStack_9a0 & 0xffffff00;
    lStack_a08 = 0;
    uStack_9f8 = 0;
    uStack_9f4 = 0;
    lStack_a00 = 0;
    uStack_9f0 = uStack_9f0 & 0xffffff00;
    uStack_99c = 3;
    uStack_998 = NEON_fmov(0x3f800000,4);
    uStack_988 = 0;
    uStack_990 = 0x3f800000;
    uStack_978 = 0;
    uStack_980 = 0x3f80000000000000;
    uStack_968 = 0x3f800000;
    uStack_970 = 0;
    uStack_958 = 0x3f80000000000000;
    uStack_960 = 0;
    uStack_880 = 0;
    uStack_888 = 0;
    uStack_870 = 0;
    uStack_878 = 0x3f800000;
    uStack_860 = 0;
    uStack_868 = 0x3f80000000000000;
    uStack_850 = 0x3f800000;
    uStack_858 = 0;
    uStack_840 = 0x3f80000000000000;
    uStack_848 = 0;
    uStack_830 = 0;
    uStack_838 = 0x3f800000;
    uStack_820 = 0;
    uStack_828 = 0x3f80000000000000;
    uStack_810 = 0x3f800000;
    uStack_818 = 0;
    uStack_800 = 0x3f80000000000000;
    uStack_808 = 0;
    uStack_7f0 = 0;
    uStack_7f8 = 0x3f800000;
    uStack_7e0 = 0;
    uStack_7e8 = 0x3f80000000000000;
    uStack_7d0 = 0x3f800000;
    uStack_7d8 = 0;
    uStack_7c0 = 0x3f80000000000000;
    uStack_7c8 = 0;
    uStack_790 = 0x3f800000;
    uStack_798 = 0;
    uStack_780 = 0x3f80000000000000;
    uStack_788 = 0;
    uStack_7b0 = 0;
    uStack_7b8 = 0x3f800000;
    uStack_7a0 = 0;
    uStack_7a8 = 0x3f80000000000000;
    uStack_950 = 0;
    uStack_778 = 1;
    _memcpy(auStack_770,&UNK_10e4ff180,0x110);
    uStack_550 = 0;
    uStack_480 = 0;
    uStack_488 = 0;
    uStack_470 = 0;
    uStack_478 = 0x3f800000;
    uStack_460 = 0;
    uStack_468 = 0x3f80000000000000;
    uStack_450 = 0x3f800000;
    uStack_458 = 0;
    uStack_440 = 0x3f80000000000000;
    uStack_448 = 0;
    uStack_410 = 0x3f800000;
    uStack_418 = 0;
    uStack_400 = 0x3f80000000000000;
    uStack_408 = 0;
    uStack_430 = 0;
    uStack_438 = 0x3f800000;
    uStack_420 = 0;
    uStack_428 = 0x3f80000000000000;
    uStack_3f0 = 0;
    uStack_3f8 = 0x3f800000;
    uStack_3e0 = 0;
    uStack_3e8 = 0x3f80000000000000;
    uStack_3d0 = 0x3f800000;
    uStack_3d8 = 0;
    uStack_3c0 = 0x3f80000000000000;
    uStack_3c8 = 0;
    uStack_3b0 = 0;
    uStack_3b8 = 0x3f800000;
    uStack_3a0 = 0;
    uStack_3a8 = 0x3f80000000000000;
    uStack_390 = 0x3f800000;
    uStack_398 = 0;
    uStack_380 = 0x3f80000000000000;
    uStack_388 = 0;
    uStack_378 = 1;
    _memcpy(auStack_370,&UNK_10e4ff180,0x110);
    uStack_120 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    lStack_f8 = 0;
    plStack_100 = (long *)0x0;
    uStack_e8 = 0;
    lStack_f0 = 0;
    uStack_e0 = 0;
    lStack_150 = 0;
    uStack_140 = 0;
    lStack_148 = 0;
    uStack_138 = 0;
    FUN_10ab7cdd8(param_1,pfVar1,param_2 + 0xc,&uStack_a30,param_1[0x1d9]);
    puVar19 = *(undefined8 **)(*(long *)(plVar47[0x251] + 0x18) + 0x90);
    puVar4 = *(undefined8 **)(*(long *)(plVar47[0x251] + 0x18) + 0x98);
    if (puVar19 != puVar4) {
      do {
        bStack_90 = 0;
        if (puVar19 == &uStack_d0) {
          uVar31 = 0;
        }
        else {
          if (0x11 < (ulong)*(byte *)(puVar19 + 8)) goto LAB_10ab86718;
          (*(code *)(&PTR_FUN_110c530b8)[*(byte *)(puVar19 + 8)])(puVar19);
          bVar35 = bStack_90;
          *(undefined1 *)(puVar19 + 8) = 0x11;
          uVar31 = (ulong)bStack_90;
          if (bStack_90 == 0) {
            *(undefined1 *)(puVar19 + 8) = 0;
          }
          else {
            FUN_10abcc290(puVar19,&uStack_d0,uVar31);
            *(byte *)(puVar19 + 8) = bVar35;
            if (0x11 < bVar35) goto LAB_10ab86718;
          }
        }
        (*(code *)(&PTR_FUN_110c530b8)[uVar31])(&uStack_d0);
        puVar19 = (undefined8 *)((long)puVar19 + 0x44);
      } while (puVar19 != puVar4);
    }
    if (lStack_f8 != 0) {
      lStack_f0 = lStack_f8;
      __ZdlPv();
    }
    if (plStack_100 == alStack_118) {
      lVar37 = 0x20;
LAB_10ab83ef8:
      (**(code **)(*plStack_100 + lVar37))();
    }
    else if (plStack_100 != (long *)0x0) {
      lVar37 = 0x28;
      goto LAB_10ab83ef8;
    }
    if (lStack_150 != 0) {
      lStack_148 = lStack_150;
      __ZdlPv();
    }
    if (lStack_a08 != 0) {
      lStack_a00 = lStack_a08;
      __ZdlPv();
    }
    lVar37 = plVar47[0xb8];
  }
  lVar41 = param_1[0x224];
  lVar46 = *(long *)(param_3 + 0x638);
  lVar29 = *(long *)(param_3 + 0x63c);
  lVar26 = plVar15[0x17];
  uStack_a30 = 0x96;
  uStack_a2f = 0x46;
  uStack_a2e = 0x69;
  uStack_a2d = 0xf;
  fStack_a2c = 1.4013e-45;
  fStack_a28 = 3.22299e-44;
  fStack_a24 = 0.0;
  if (lVar37 == 0) {
    FUN_10a0edfc4(&uStack_a30);
    goto LAB_10ab86718;
  }
  if (*(long *)(lVar37 + 0x208) != 0) {
    uStack_a30 = 0;
    uStack_a2f = 0;
    uStack_a2e = 0;
    uStack_a2d = 0;
    func_0x00010ab80694(*(undefined8 *)(*(long *)(lVar37 + 0x18) + 0x90),
                        *(undefined8 *)(*(long *)(lVar37 + 0x18) + 0x98),
                        *(undefined4 *)(*(long *)(lVar37 + 0x208) + 0x10),&uStack_a30);
  }
  lVar51 = *(long *)(lVar37 + 0x18);
  FUN_10ab91b60(lVar51);
  if (lVar29 != 0) {
    puVar50 = (ulong *)(lVar41 + lVar46 * 0x18);
    puVar49 = puVar50 + lVar29 * 3;
    do {
      uVar31 = *(ulong *)(lVar51 + 0x48);
      if (uVar31 != 0) {
        uVar30 = *puVar50;
        uVar32 = uVar31 - 1;
        if ((uVar31 & uVar32) == 0) {
          uVar33 = uVar32 & uVar30;
        }
        else {
          uVar33 = uVar30;
          if (uVar31 <= uVar30) {
            uVar33 = 0;
            if (uVar31 != 0) {
              uVar33 = uVar30 / uVar31;
            }
            uVar33 = uVar30 - uVar33 * uVar31;
          }
        }
        plVar48 = *(long **)(*(long *)(lVar51 + 0x40) + uVar33 * 8);
        if (plVar48 != (long *)0x0) {
          do {
            while( true ) {
              plVar48 = (long *)*plVar48;
              if (plVar48 == (long *)0x0) goto LAB_10ab840c8;
              uVar34 = plVar48[1];
              if (uVar30 != uVar34) break;
              if (plVar48[5] == uVar30) {
                if (*(int *)(plVar48 + 8) < 0) goto LAB_10ab840c8;
                if (*(short *)(plVar48 + 7) != (short)puVar50[1]) {
                  if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
                    func_0x00010ae06f08(1,2,&UNK_10f69450e,&UNK_10f6946ae,0x43c,&UNK_10f694754);
                  }
                  goto LAB_10ab840c8;
                }
                switch(*(short *)(plVar48 + 7)) {
                case 1:
                  func_0x00010ab80514(*(undefined8 *)(*(long *)(lVar37 + 0x18) + 0x90),
                                      *(undefined8 *)(*(long *)(lVar37 + 0x18) + 0x98),
                                      *(int *)(plVar48 + 8),
                                      *(undefined1 *)
                                       (lVar26 + (ulong)*(uint *)((long)puVar50 + 0xc)));
                  goto LAB_10ab840c8;
                case 2:
                  uVar28 = *(undefined4 *)(lVar26 + (ulong)*(uint *)((long)puVar50 + 0xc));
                  uStack_a30 = (undefined1)uVar28;
                  uStack_a2f = (undefined1)((uint)uVar28 >> 8);
                  uStack_a2e = (undefined1)((uint)uVar28 >> 0x10);
                  uStack_a2d = (undefined1)((uint)uVar28 >> 0x18);
                  func_0x00010ab805d4(*(undefined8 *)(*(long *)(lVar37 + 0x18) + 0x90),
                                      *(undefined8 *)(*(long *)(lVar37 + 0x18) + 0x98),
                                      *(undefined4 *)(plVar48 + 8),&uStack_a30);
                  goto LAB_10ab840c8;
                case 3:
                  uVar28 = *(undefined4 *)(lVar26 + (ulong)*(uint *)((long)puVar50 + 0xc));
                  uStack_a30 = (undefined1)uVar28;
                  uStack_a2f = (undefined1)((uint)uVar28 >> 8);
                  uStack_a2e = (undefined1)((uint)uVar28 >> 0x10);
                  uStack_a2d = (undefined1)((uint)uVar28 >> 0x18);
                  func_0x00010ab80694(*(undefined8 *)(*(long *)(lVar37 + 0x18) + 0x90),
                                      *(undefined8 *)(*(long *)(lVar37 + 0x18) + 0x98),
                                      *(undefined4 *)(plVar48 + 8),&uStack_a30);
                default:
                  goto LAB_10ab840c8;
                case 6:
                  iVar6 = *(int *)(lVar26 + (ulong)*(uint *)((long)puVar50 + 0xc));
                  uStack_a30 = (undefined1)iVar6;
                  uStack_a2f = (undefined1)((uint)iVar6 >> 8);
                  uStack_a2e = (undefined1)((uint)iVar6 >> 0x10);
                  uStack_a2d = (undefined1)((uint)iVar6 >> 0x18);
                  uVar30 = (ulong)*(int *)(plVar48 + 8);
                  lVar29 = *(long *)(*(long *)(lVar37 + 0x18) + 0x90);
                  uVar31 = (*(long *)(*(long *)(lVar37 + 0x18) + 0x98) - lVar29 >> 2) *
                           -0xf0f0f0f0f0f0f0f;
                  if (uVar31 < uVar30 || uVar31 - uVar30 == 0) goto LAB_10ab86718;
                  piVar42 = (int *)(lVar29 + (long)*(int *)(plVar48 + 8) * 0x44);
                  bVar35 = *(byte *)(piVar42 + 0x10);
                  if ((lVar29 == 0) || (bVar35 != 3)) {
                    if (0x11 < bVar35) goto LAB_10ab86718;
                  }
                  else if (*piVar42 == iVar6) goto LAB_10ab840c8;
                  (*(code *)(&PTR_FUN_110c530b8)[bVar35])(piVar42);
                  *piVar42 = CONCAT13(uStack_a2d,
                                      CONCAT12(uStack_a2e,CONCAT11(uStack_a2f,uStack_a30)));
                  *(undefined1 *)(piVar42 + 0x10) = 3;
                  FUN_10a303694(1);
                  _glUniform1uiv(uVar30,1,&uStack_a30);
                  goto LAB_10ab840c8;
                case 7:
                  uVar22 = *(undefined8 *)(lVar26 + (ulong)*(uint *)((long)puVar50 + 0xc));
                  uStack_a30 = (undefined1)uVar22;
                  uStack_a2f = (undefined1)((ulong)uVar22 >> 8);
                  uStack_a2e = (undefined1)((ulong)uVar22 >> 0x10);
                  uStack_a2d = (undefined1)((ulong)uVar22 >> 0x18);
                  fStack_a2c = (float)((ulong)uVar22 >> 0x20);
                  func_0x00010ab80754(*(undefined8 *)(*(long *)(lVar37 + 0x18) + 0x90),
                                      *(undefined8 *)(*(long *)(lVar37 + 0x18) + 0x98),
                                      *(undefined4 *)(plVar48 + 8),&uStack_a30);
                  goto LAB_10ab840c8;
                case 8:
                  puVar19 = (undefined8 *)(lVar26 + (ulong)*(uint *)((long)puVar50 + 0xc));
                  fStack_a28 = *(float *)(puVar19 + 1);
                  uVar22 = *puVar19;
                  uStack_a30 = (undefined1)uVar22;
                  uStack_a2f = (undefined1)((ulong)uVar22 >> 8);
                  uStack_a2e = (undefined1)((ulong)uVar22 >> 0x10);
                  uStack_a2d = (undefined1)((ulong)uVar22 >> 0x18);
                  fStack_a2c = (float)((ulong)uVar22 >> 0x20);
                  func_0x00010ab80820(*(undefined8 *)(*(long *)(lVar37 + 0x18) + 0x90),
                                      *(undefined8 *)(*(long *)(lVar37 + 0x18) + 0x98),
                                      *(undefined4 *)(plVar48 + 8),&uStack_a30);
                  goto LAB_10ab840c8;
                case 9:
                  puVar19 = (undefined8 *)(lVar26 + (ulong)*(uint *)((long)puVar50 + 0xc));
                  uVar54 = puVar19[1];
                  uVar22 = *puVar19;
                  fStack_a28 = (float)uVar54;
                  fStack_a24 = (float)((ulong)uVar54 >> 0x20);
                  uStack_a30 = (undefined1)uVar22;
                  uStack_a2f = (undefined1)((ulong)uVar22 >> 8);
                  uStack_a2e = (undefined1)((ulong)uVar22 >> 0x10);
                  uStack_a2d = (undefined1)((ulong)uVar22 >> 0x18);
                  fStack_a2c = (float)((ulong)uVar22 >> 0x20);
                  func_0x00010ab80910(*(undefined8 *)(*(long *)(lVar37 + 0x18) + 0x90),
                                      *(undefined8 *)(*(long *)(lVar37 + 0x18) + 0x98),
                                      *(undefined4 *)(plVar48 + 8),&uStack_a30);
                  goto LAB_10ab840c8;
                case 10:
                  puVar19 = (undefined8 *)(lVar26 + (ulong)*(uint *)((long)puVar50 + 0xc));
                  uVar22 = *puVar19;
                  uStack_a10 = *(undefined4 *)(puVar19 + 4);
                  fStack_a28 = (float)puVar19[1];
                  fStack_a24 = (float)((ulong)puVar19[1] >> 0x20);
                  uStack_a30 = (undefined1)uVar22;
                  uStack_a2f = (undefined1)((ulong)uVar22 >> 8);
                  uStack_a2e = (undefined1)((ulong)uVar22 >> 0x10);
                  uStack_a2d = (undefined1)((ulong)uVar22 >> 0x18);
                  fStack_a2c = (float)((ulong)uVar22 >> 0x20);
                  uStack_a18 = (undefined4)puVar19[3];
                  uStack_a14 = (undefined4)((ulong)puVar19[3] >> 0x20);
                  uStack_a20 = (undefined4)puVar19[2];
                  uStack_a1c = (uint)((ulong)puVar19[2] >> 0x20);
                  FUN_10ab99ad0(*(undefined8 *)(*(long *)(lVar37 + 0x18) + 0x90),
                                *(undefined8 *)(*(long *)(lVar37 + 0x18) + 0x98),
                                *(undefined4 *)(plVar48 + 8),&uStack_a30);
                  goto LAB_10ab840c8;
                case 0xb:
                  puVar19 = (undefined8 *)(lVar26 + (ulong)*(uint *)((long)puVar50 + 0xc));
                  uVar22 = *puVar19;
                  lStack_a08 = puVar19[5];
                  lStack_a00 = puVar19[6];
                  uStack_a10 = (undefined4)puVar19[4];
                  uStack_a0c = (undefined4)((ulong)puVar19[4] >> 0x20);
                  uStack_9f8 = (undefined4)puVar19[7];
                  uStack_9f4 = (undefined4)((ulong)puVar19[7] >> 0x20);
                  fStack_a28 = (float)puVar19[1];
                  fStack_a24 = (float)((ulong)puVar19[1] >> 0x20);
                  uStack_a30 = (undefined1)uVar22;
                  uStack_a2f = (undefined1)((ulong)uVar22 >> 8);
                  uStack_a2e = (undefined1)((ulong)uVar22 >> 0x10);
                  uStack_a2d = (undefined1)((ulong)uVar22 >> 0x18);
                  fStack_a2c = (float)((ulong)uVar22 >> 0x20);
                  uStack_a18 = (undefined4)puVar19[3];
                  uStack_a14 = (undefined4)((ulong)puVar19[3] >> 0x20);
                  uStack_a20 = (undefined4)puVar19[2];
                  uStack_a1c = (uint)((ulong)puVar19[2] >> 0x20);
                  FUN_10abd8758(*(undefined8 *)(*(long *)(lVar37 + 0x18) + 0x90),
                                *(undefined8 *)(*(long *)(lVar37 + 0x18) + 0x98),
                                *(undefined4 *)(plVar48 + 8),&uStack_a30);
                  goto LAB_10ab840c8;
                case 0x16:
                  goto code_r0x00010ab84558;
                case 0x1f:
                  uVar22 = *(undefined8 *)(lVar26 + (ulong)*(uint *)((long)puVar50 + 0xc));
                  uStack_a30 = (undefined1)uVar22;
                  uStack_a2f = (undefined1)((ulong)uVar22 >> 8);
                  uStack_a2e = (undefined1)((ulong)uVar22 >> 0x10);
                  uStack_a2d = (undefined1)((ulong)uVar22 >> 0x18);
                  fStack_a2c = (float)((ulong)uVar22 >> 0x20);
                  uVar30 = (ulong)*(int *)(plVar48 + 8);
                  lVar29 = *(long *)(*(long *)(lVar37 + 0x18) + 0x90);
                  uVar31 = (*(long *)(*(long *)(lVar37 + 0x18) + 0x98) - lVar29 >> 2) *
                           -0xf0f0f0f0f0f0f0f;
                  if (uVar31 < uVar30 || uVar31 - uVar30 == 0) goto LAB_10ab86718;
                  piVar42 = (int *)(lVar29 + (long)*(int *)(plVar48 + 8) * 0x44);
                  bVar35 = *(byte *)(piVar42 + 0x10);
                  if ((lVar29 == 0) || (bVar35 != 8)) {
                    if (0x11 < bVar35) goto LAB_10ab86718;
                  }
                  else if (*piVar42 == (int)uVar22 && (float)piVar42[1] == fStack_a2c)
                  goto LAB_10ab840c8;
                  (*(code *)(&PTR_FUN_110c530b8)[bVar35])(piVar42);
                  *(undefined1 *)(piVar42 + 0x10) = 0x11;
                  *(ulong *)piVar42 =
                       CONCAT44(fStack_a2c,
                                CONCAT13(uStack_a2d,
                                         CONCAT12(uStack_a2e,CONCAT11(uStack_a2f,uStack_a30))));
                  *(undefined1 *)(piVar42 + 0x10) = 8;
                  FUN_10a303694(1);
                  _glUniform2iv(uVar30,1,&uStack_a30);
                  goto LAB_10ab840c8;
                case 0x22:
                  puVar19 = (undefined8 *)(lVar26 + (ulong)*(uint *)((long)puVar50 + 0xc));
                  fStack_a28 = *(float *)(puVar19 + 1);
                  uVar22 = *puVar19;
                  uStack_a30 = (undefined1)uVar22;
                  uStack_a2f = (undefined1)((ulong)uVar22 >> 8);
                  uStack_a2e = (undefined1)((ulong)uVar22 >> 0x10);
                  uStack_a2d = (undefined1)((ulong)uVar22 >> 0x18);
                  fStack_a2c = (float)((ulong)uVar22 >> 0x20);
                  uVar30 = (ulong)*(int *)(plVar48 + 8);
                  lVar29 = *(long *)(*(long *)(lVar37 + 0x18) + 0x90);
                  uVar31 = (*(long *)(*(long *)(lVar37 + 0x18) + 0x98) - lVar29 >> 2) *
                           -0xf0f0f0f0f0f0f0f;
                  if (uVar31 < uVar30 || uVar31 - uVar30 == 0) goto LAB_10ab86718;
                  piVar42 = (int *)(lVar29 + (long)*(int *)(plVar48 + 8) * 0x44);
                  bVar35 = *(byte *)(piVar42 + 0x10);
                  if ((lVar29 == 0) || (bVar35 != 9)) {
                    if (0x11 < bVar35) goto LAB_10ab86718;
                  }
                  else if (((*piVar42 == (int)uVar22) && ((float)piVar42[1] == fStack_a2c)) &&
                          ((float)piVar42[2] == fStack_a28)) goto LAB_10ab840c8;
                  (*(code *)(&PTR_FUN_110c530b8)[bVar35])(piVar42);
                  *(undefined1 *)(piVar42 + 0x10) = 0x11;
                  piVar42[2] = (int)fStack_a28;
                  *(ulong *)piVar42 =
                       CONCAT44(fStack_a2c,
                                CONCAT13(uStack_a2d,
                                         CONCAT12(uStack_a2e,CONCAT11(uStack_a2f,uStack_a30))));
                  *(undefined1 *)(piVar42 + 0x10) = 9;
                  FUN_10a303694(1);
                  _glUniform3iv(uVar30,1,&uStack_a30);
                  goto LAB_10ab840c8;
                case 0x23:
                  puVar19 = (undefined8 *)(lVar26 + (ulong)*(uint *)((long)puVar50 + 0xc));
                  uVar54 = puVar19[1];
                  uVar22 = *puVar19;
                  fStack_a28 = (float)uVar54;
                  fStack_a24 = (float)((ulong)uVar54 >> 0x20);
                  uStack_a30 = (undefined1)uVar22;
                  uStack_a2f = (undefined1)((ulong)uVar22 >> 8);
                  uStack_a2e = (undefined1)((ulong)uVar22 >> 0x10);
                  uStack_a2d = (undefined1)((ulong)uVar22 >> 0x18);
                  fStack_a2c = (float)((ulong)uVar22 >> 0x20);
                  uVar30 = (ulong)*(int *)(plVar48 + 8);
                  lVar29 = *(long *)(*(long *)(lVar37 + 0x18) + 0x90);
                  uVar31 = (*(long *)(*(long *)(lVar37 + 0x18) + 0x98) - lVar29 >> 2) *
                           -0xf0f0f0f0f0f0f0f;
                  if (uVar31 < uVar30 || uVar31 - uVar30 == 0) goto LAB_10ab86718;
                  piVar42 = (int *)(lVar29 + (long)*(int *)(plVar48 + 8) * 0x44);
                  bVar35 = *(byte *)(piVar42 + 0x10);
                  if ((lVar29 == 0) || (bVar35 != 10)) {
                    if (0x11 < bVar35) goto LAB_10ab86718;
                  }
                  else if ((((*piVar42 == (int)uVar22) && ((float)piVar42[1] == fStack_a2c)) &&
                           ((float)piVar42[2] == fStack_a28)) && ((float)piVar42[3] == fStack_a24))
                  goto LAB_10ab840c8;
                  (*(code *)(&PTR_FUN_110c530b8)[bVar35])(piVar42);
                  *(undefined1 *)(piVar42 + 0x10) = 0x11;
                  *(ulong *)(piVar42 + 2) = CONCAT44(fStack_a24,fStack_a28);
                  *(ulong *)piVar42 =
                       CONCAT44(fStack_a2c,
                                CONCAT13(uStack_a2d,
                                         CONCAT12(uStack_a2e,CONCAT11(uStack_a2f,uStack_a30))));
                  *(undefined1 *)(piVar42 + 0x10) = 10;
                  FUN_10a303694(1);
                  _glUniform4iv(uVar30,1,&uStack_a30);
                  goto LAB_10ab840c8;
                case 0x24:
                  uVar22 = *(undefined8 *)(lVar26 + (ulong)*(uint *)((long)puVar50 + 0xc));
                  uStack_a30 = (undefined1)uVar22;
                  uStack_a2f = (undefined1)((ulong)uVar22 >> 8);
                  uStack_a2e = (undefined1)((ulong)uVar22 >> 0x10);
                  uStack_a2d = (undefined1)((ulong)uVar22 >> 0x18);
                  fStack_a2c = (float)((ulong)uVar22 >> 0x20);
                  uVar30 = (ulong)*(int *)(plVar48 + 8);
                  lVar29 = *(long *)(*(long *)(lVar37 + 0x18) + 0x90);
                  uVar31 = (*(long *)(*(long *)(lVar37 + 0x18) + 0x98) - lVar29 >> 2) *
                           -0xf0f0f0f0f0f0f0f;
                  if (uVar31 < uVar30 || uVar31 - uVar30 == 0) goto LAB_10ab86718;
                  piVar42 = (int *)(lVar29 + (long)*(int *)(plVar48 + 8) * 0x44);
                  bVar35 = *(byte *)(piVar42 + 0x10);
                  if ((lVar29 == 0) || (bVar35 != 0xb)) {
                    if (0x11 < bVar35) goto LAB_10ab86718;
                  }
                  else if (*piVar42 == (int)uVar22 && (float)piVar42[1] == fStack_a2c)
                  goto LAB_10ab840c8;
                  (*(code *)(&PTR_FUN_110c530b8)[bVar35])(piVar42);
                  *(undefined1 *)(piVar42 + 0x10) = 0x11;
                  *(ulong *)piVar42 =
                       CONCAT44(fStack_a2c,
                                CONCAT13(uStack_a2d,
                                         CONCAT12(uStack_a2e,CONCAT11(uStack_a2f,uStack_a30))));
                  *(undefined1 *)(piVar42 + 0x10) = 0xb;
                  FUN_10a303694(1);
                  _glUniform2uiv(uVar30,1,&uStack_a30);
                  goto LAB_10ab840c8;
                case 0x25:
                  puVar19 = (undefined8 *)(lVar26 + (ulong)*(uint *)((long)puVar50 + 0xc));
                  fStack_a28 = *(float *)(puVar19 + 1);
                  uVar22 = *puVar19;
                  uStack_a30 = (undefined1)uVar22;
                  uStack_a2f = (undefined1)((ulong)uVar22 >> 8);
                  uStack_a2e = (undefined1)((ulong)uVar22 >> 0x10);
                  uStack_a2d = (undefined1)((ulong)uVar22 >> 0x18);
                  fStack_a2c = (float)((ulong)uVar22 >> 0x20);
                  uVar30 = (ulong)*(int *)(plVar48 + 8);
                  lVar29 = *(long *)(*(long *)(lVar37 + 0x18) + 0x90);
                  uVar31 = (*(long *)(*(long *)(lVar37 + 0x18) + 0x98) - lVar29 >> 2) *
                           -0xf0f0f0f0f0f0f0f;
                  if (uVar31 < uVar30 || uVar31 - uVar30 == 0) goto LAB_10ab86718;
                  piVar42 = (int *)(lVar29 + (long)*(int *)(plVar48 + 8) * 0x44);
                  bVar35 = *(byte *)(piVar42 + 0x10);
                  if ((lVar29 == 0) || (bVar35 != 0xc)) {
                    if (0x11 < bVar35) goto LAB_10ab86718;
                  }
                  else if (((*piVar42 == (int)uVar22) && ((float)piVar42[1] == fStack_a2c)) &&
                          ((float)piVar42[2] == fStack_a28)) goto LAB_10ab840c8;
                  (*(code *)(&PTR_FUN_110c530b8)[bVar35])(piVar42);
                  *(undefined1 *)(piVar42 + 0x10) = 0x11;
                  piVar42[2] = (int)fStack_a28;
                  *(ulong *)piVar42 =
                       CONCAT44(fStack_a2c,
                                CONCAT13(uStack_a2d,
                                         CONCAT12(uStack_a2e,CONCAT11(uStack_a2f,uStack_a30))));
                  *(undefined1 *)(piVar42 + 0x10) = 0xc;
                  FUN_10a303694(1);
                  _glUniform3uiv(uVar30,1,&uStack_a30);
                  goto LAB_10ab840c8;
                case 0x26:
                  puVar19 = (undefined8 *)(lVar26 + (ulong)*(uint *)((long)puVar50 + 0xc));
                  uVar54 = puVar19[1];
                  uVar22 = *puVar19;
                  fStack_a28 = (float)uVar54;
                  fStack_a24 = (float)((ulong)uVar54 >> 0x20);
                  uStack_a30 = (undefined1)uVar22;
                  uStack_a2f = (undefined1)((ulong)uVar22 >> 8);
                  uStack_a2e = (undefined1)((ulong)uVar22 >> 0x10);
                  uStack_a2d = (undefined1)((ulong)uVar22 >> 0x18);
                  fStack_a2c = (float)((ulong)uVar22 >> 0x20);
                  uVar30 = (ulong)*(int *)(plVar48 + 8);
                  lVar29 = *(long *)(*(long *)(lVar37 + 0x18) + 0x90);
                  uVar31 = (*(long *)(*(long *)(lVar37 + 0x18) + 0x98) - lVar29 >> 2) *
                           -0xf0f0f0f0f0f0f0f;
                  if (uVar31 < uVar30 || uVar31 - uVar30 == 0) goto LAB_10ab86718;
                  piVar42 = (int *)(lVar29 + (long)*(int *)(plVar48 + 8) * 0x44);
                  bVar35 = *(byte *)(piVar42 + 0x10);
                  if ((lVar29 == 0) || (bVar35 != 0xd)) {
                    if (0x11 < bVar35) goto LAB_10ab86718;
                  }
                  else if ((((*piVar42 == (int)uVar22) && ((float)piVar42[1] == fStack_a2c)) &&
                           ((float)piVar42[2] == fStack_a28)) && ((float)piVar42[3] == fStack_a24))
                  goto LAB_10ab840c8;
                  (*(code *)(&PTR_FUN_110c530b8)[bVar35])(piVar42);
                  *(undefined1 *)(piVar42 + 0x10) = 0x11;
                  *(ulong *)(piVar42 + 2) = CONCAT44(fStack_a24,fStack_a28);
                  *(ulong *)piVar42 =
                       CONCAT44(fStack_a2c,
                                CONCAT13(uStack_a2d,
                                         CONCAT12(uStack_a2e,CONCAT11(uStack_a2f,uStack_a30))));
                  *(undefined1 *)(piVar42 + 0x10) = 0xd;
                  FUN_10a303694(1);
                  _glUniform4uiv(uVar30,1,&uStack_a30);
                  goto LAB_10ab840c8;
                }
              }
            }
            if ((uVar31 & uVar32) == 0) {
              uVar34 = uVar34 & uVar32;
            }
            else if (uVar31 <= uVar34) {
              uVar12 = 0;
              if (uVar31 != 0) {
                uVar12 = uVar34 / uVar31;
              }
              uVar34 = uVar34 - uVar12 * uVar31;
            }
          } while (uVar34 == uVar33);
        }
      }
LAB_10ab840c8:
      puVar50 = puVar50 + 3;
    } while (puVar50 != puVar49);
  }
  if (*(long *)(param_3 + 0x34) != 0) {
    uVar31 = 0;
    fVar55 = 0.0;
    do {
      if (uVar31 == 0x10) goto LAB_10ab86718;
      puVar52 = param_3 + uVar31 * 0x60 + 0x38;
      lVar37 = plVar47[0x251];
      FUN_10ab7f420(lVar37,puVar52);
      if (lVar37 != 0) {
        if (*(char *)(puVar52 + 0x10) == '\x04') {
          lVar26 = *(long *)(lVar37 + 0x28);
          if (lVar26 == 0) {
            lVar26 = *(long *)(lVar37 + 0x20);
            if ((lVar26 == 0) || (uVar28 = 0x8c1a, *(int *)(lVar37 + 0x80) != 0x8c1a))
            goto LAB_10ab84c1c;
          }
          else {
            uVar28 = *(undefined4 *)(lVar37 + 0x84);
          }
        }
        else {
          lVar26 = *(long *)(lVar37 + 0x20);
          if (lVar26 == 0) goto LAB_10ab84c1c;
          uVar28 = *(undefined4 *)(lVar37 + 0x80);
        }
        uVar22 = *(undefined8 *)(puVar52 + 0x12);
        fStack_a28 = (float)*(undefined8 *)(puVar52 + 0x16);
        fStack_a24 = (float)((ulong)*(undefined8 *)(puVar52 + 0x16) >> 0x20);
        uStack_a30 = (undefined1)uVar22;
        uStack_a2f = (undefined1)((ulong)uVar22 >> 8);
        uStack_a2e = (undefined1)((ulong)uVar22 >> 0x10);
        uStack_a2d = (undefined1)((ulong)uVar22 >> 0x18);
        fStack_a2c = (float)((ulong)uVar22 >> 0x20);
        uStack_a18 = (undefined4)*(undefined8 *)(puVar52 + 0x1e);
        uStack_a14 = (undefined4)((ulong)*(undefined8 *)(puVar52 + 0x1e) >> 0x20);
        uStack_a20 = (undefined4)*(undefined8 *)(puVar52 + 0x1a);
        uStack_a1c = (uint)((ulong)*(undefined8 *)(puVar52 + 0x1a) >> 0x20);
        uStack_a10 = (undefined4)*(undefined8 *)(puVar52 + 0x22);
        uStack_a0c = (undefined4)((ulong)*(undefined8 *)(puVar52 + 0x22) >> 0x20);
        lVar41 = param_1[0x10b];
        lVar29 = param_1[0x247];
        plVar48 = *(long **)(puVar52 + 0x2c);
        uStack_c8 = *(undefined ***)(puVar52 + 0x2c);
        uStack_d0 = *(code **)(puVar52 + 0x28);
        if (plVar48 != (long *)0x0) {
          plVar18 = plVar48 + 1;
          do {
            cVar11 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar14) {
              *plVar18 = *plVar18 + 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
        }
        FUN_10ab81730(&pppplStack_ab0,lVar41,lVar37,&uStack_d0,*(undefined8 *)(puVar52 + 0x5c),
                      uVar28,(char)lVar29);
        if (plVar48 != (long *)0x0) {
          plVar18 = plVar48 + 1;
          do {
            lVar29 = *plVar18;
            cVar11 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar14) {
              *plVar18 = lVar29 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (lVar29 == 0) {
            (**(code **)(*plVar48 + 0x10))(plVar48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar48);
          }
        }
        if (*(long *)(lVar37 + 0x30) != 0) {
          FUN_10ab99ad0(*(undefined8 *)(*(long *)(plVar47[0x251] + 0x18) + 0x90),
                        *(undefined8 *)(*(long *)(plVar47[0x251] + 0x18) + 0x98),
                        *(undefined4 *)(*(long *)(lVar37 + 0x30) + 0x10),puVar52 + 0x40);
        }
        lVar29 = *(long *)(lVar37 + 0x38);
        if (lVar29 != 0) {
          if ((int)param_1[8] < 0x113) {
            uStack_d0 = *(code **)(puVar52 + 0x30);
            lVar41 = *(long *)(plVar47[0x251] + 0x18);
            func_0x00010ab80754(*(undefined8 *)(lVar41 + 0x90),*(undefined8 *)(lVar41 + 0x98),
                                *(undefined4 *)(lVar29 + 0x10),&uStack_d0);
          }
          else {
            lVar41 = *(long *)(plVar47[0x251] + 0x18);
            func_0x00010ab80910(*(undefined8 *)(lVar41 + 0x90),*(undefined8 *)(lVar41 + 0x98),
                                *(undefined4 *)(lVar29 + 0x10),puVar52 + 0x30);
          }
        }
        if (*(long *)(lVar37 + 0x40) != 0) {
          func_0x00010ab80910(*(undefined8 *)(*(long *)(plVar47[0x251] + 0x18) + 0x90),
                              *(undefined8 *)(*(long *)(plVar47[0x251] + 0x18) + 0x98),
                              *(undefined4 *)(*(long *)(lVar37 + 0x40) + 0x10),puVar52 + 0x38);
        }
        if (*(long *)(lVar37 + 0x48) != 0) {
          func_0x00010ab80910(*(undefined8 *)(*(long *)(plVar47[0x251] + 0x18) + 0x90),
                              *(undefined8 *)(*(long *)(plVar47[0x251] + 0x18) + 0x98),
                              *(undefined4 *)(*(long *)(lVar37 + 0x48) + 0x10),&uStack_a1c);
        }
        lVar29 = *(long *)(lVar37 + 0x50);
        if (lVar29 != 0) {
          ppppplVar39 = (long *****)(ulong)*(uint *)(puVar52 + 0x56);
          if ((*(uint *)(puVar52 + 0x56) == 0) ||
             (ppppplVar16 = (long *****)(ulong)*(uint *)(puVar52 + 0x58),
             *(uint *)(puVar52 + 0x58) == 0)) {
            ppppplVar39 = (long *****)pppplStack_ab0;
            (*(code *)(*pppplStack_ab0)[5])();
            ppppplVar16 = (long *****)pppplStack_ab0;
            (*(code *)(*pppplStack_ab0)[6])();
            lVar29 = *(long *)(lVar37 + 0x50);
          }
          fVar56 = fVar55;
          if ((int)ppppplVar39 != 0) {
            fVar56 = 1.0 / (float)((ulong)ppppplVar39 & 0xffffffff);
          }
          fVar53 = fVar55;
          if ((int)ppppplVar16 != 0) {
            fVar53 = 1.0 / (float)((ulong)ppppplVar16 & 0xffffffff);
          }
          uStack_d0 = (code *)CONCAT44((float)((ulong)ppppplVar16 & 0xffffffff),
                                       (float)((ulong)ppppplVar39 & 0xffffffff));
          uStack_c8 = (undefined **)CONCAT44(fVar53,fVar56);
          func_0x00010ab80910(*(undefined8 *)(*(long *)(plVar47[0x251] + 0x18) + 0x90),
                              *(undefined8 *)(*(long *)(plVar47[0x251] + 0x18) + 0x98),
                              *(undefined4 *)(lVar29 + 0x10),&uStack_d0);
        }
        if (*(long *)(lVar37 + 0x58) != 0) {
          fVar53 = (float)*(uint *)(puVar52 + 0x52);
          fVar56 = fVar55;
          if (*(uint *)(puVar52 + 0x52) != 0) {
            fVar56 = 1.0 / fVar53;
          }
          uStack_d0 = (code *)CONCAT44(fVar56,fVar53);
          func_0x00010ab80754(*(undefined8 *)(*(long *)(plVar47[0x251] + 0x18) + 0x90),
                              *(undefined8 *)(*(long *)(plVar47[0x251] + 0x18) + 0x98),
                              *(undefined4 *)(*(long *)(lVar37 + 0x58) + 0x10),&uStack_d0);
        }
        lVar29 = *(long *)(lVar37 + 0x60);
        if (lVar29 != 0) {
          uVar25 = *(uint *)(puVar52 + 0x54);
          if (*(short *)(lVar29 + 8) == 9) {
            fVar56 = fVar55;
            if (uVar25 != 0) {
              fVar56 = 1.0 / (float)uVar25;
            }
            uStack_d0 = (code *)CONCAT44(fVar56,(float)uVar25);
            uStack_c8 = (undefined **)0x0;
            func_0x00010ab80910(*(undefined8 *)(*(long *)(plVar47[0x251] + 0x18) + 0x90),
                                *(undefined8 *)(*(long *)(plVar47[0x251] + 0x18) + 0x98),
                                *(undefined4 *)(lVar29 + 0x10),&uStack_d0);
          }
          else if (*(short *)(lVar29 + 8) == 7) {
            fVar56 = fVar55;
            if (uVar25 != 0) {
              fVar56 = 1.0 / (float)uVar25;
            }
            uStack_d0 = (code *)CONCAT44(fVar56,(float)uVar25);
            func_0x00010ab80754(*(undefined8 *)(*(long *)(plVar47[0x251] + 0x18) + 0x90),
                                *(undefined8 *)(*(long *)(plVar47[0x251] + 0x18) + 0x98),
                                *(undefined4 *)(lVar29 + 0x10),&uStack_d0);
          }
        }
        FUN_10ab81618(lVar37,pppplStack_ab0,pfVar1);
        uStack_c8 = (undefined **)CONCAT44(fStack_a24,fStack_a28);
        uStack_d0 = (code *)CONCAT44(fStack_a2c,
                                     CONCAT13(uStack_a2d,
                                              CONCAT12(uStack_a2e,CONCAT11(uStack_a2f,uStack_a30))))
        ;
        uStack_b8 = CONCAT44(uStack_a14,uStack_a18);
        ppplStack_c0 = (long ***)CONCAT44(uStack_a1c,uStack_a20);
        uStack_b0 = CONCAT44(uStack_a0c,uStack_a10);
        FUN_10ab80e24(param_1,&uStack_d0,&pppplStack_ab0,lVar37,lVar26,puVar52 + 0x40,uVar28,pfVar1,
                      plVar17);
        plVar48 = plStack_aa8;
        if (plStack_aa8 != (long *)0x0) {
          plVar18 = plStack_aa8 + 1;
          do {
            lVar37 = *plVar18;
            cVar11 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar14) {
              *plVar18 = lVar37 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (lVar37 == 0) {
            (**(code **)(*plStack_aa8 + 0x10))(plStack_aa8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar48);
          }
        }
      }
LAB_10ab84c1c:
      uVar31 = uVar31 + 1;
    } while (uVar31 < *(ulong *)(param_3 + 0x34));
  }
  lVar37 = *(long *)(plVar47[0x251] + 0x1c0);
  if (lVar37 != 0) {
    plVar48 = param_1;
    FUN_10abf0c94(param_1,plVar15);
    if (((ulong)plVar48 & 1) == 0) {
      if (*(long *)(param_1[0x137] + 0x18) != 0) {
        lVar26 = 0x28;
        goto LAB_10ab84c68;
      }
      uVar22 = 0;
    }
    else {
      lVar26 = 0x98;
LAB_10ab84c68:
      uVar22 = *(undefined8 *)(param_1[0x137] + lVar26);
    }
    FUN_10ab7de98(param_1,pfVar1,lVar37,uVar22,&UNK_10e4ac830);
  }
  if (*(short *)((long)param_2 + 10) != -1) {
    lVar26 = plVar47[0x251];
    lVar37 = *(long *)(lVar26 + 0x1c8);
    uVar22 = *(undefined8 *)(lVar26 + 0x1d0);
    func_0x000107c2b07c(&uStack_a30,&UNK_10f694670);
    FUN_10ab7f420(lVar26,&uStack_a30);
    if ((int)uStack_a1c < 0) {
      __ZdlPv(CONCAT44(fStack_a2c,
                       CONCAT13(uStack_a2d,CONCAT12(uStack_a2e,CONCAT11(uStack_a2f,uStack_a30)))));
    }
    plVar48 = param_1 + 4;
    FUN_10a01f6d4(plVar48,*(undefined2 *)((long)param_2 + 10));
    if ((*(ushort *)(plVar48 + 4) >> 2 & 1) == 0) {
      if ((*(ushort *)(plVar48 + 4) >> 8 & 1) == 0) goto LAB_10ab84d7c;
      FUN_10ab7de98(param_1,pfVar1,lVar37,plVar48[0x30],&UNK_10e4ac8d0);
      FUN_10ab7de98(param_1,pfVar1,uVar22,plVar48[0x30],&UNK_10e4ac8a8);
      plVar48 = (long *)param_1[0x10b];
      FUN_10a243ce0(plVar48,2,0);
      if (*plVar48 == 0) {
        lVar29 = 0;
      }
      else {
        lVar29 = *(long *)(*plVar48 + 0x268);
      }
      puVar20 = &UNK_10e4ac8d0;
      lVar37 = lVar26;
    }
    else {
      lVar29 = plVar48[0x3a];
      puVar20 = &UNK_10e4ac8a8;
    }
    FUN_10ab7de98(param_1,pfVar1,lVar37,lVar29,puVar20);
  }
LAB_10ab84d7c:
  if ((short)param_2[2] == -1) {
    uStack_a30 = 0;
    uStack_a2f = 0;
    uStack_a2e = 0;
    uStack_a2d = 0;
    fStack_a2c = 0.0;
    sVar21 = -1;
  }
  else {
    plVar48 = param_1 + 4;
    FUN_10a01f6d4();
    if (*(char *)((long)plVar48 + 0x1dc) != '\0') {
      plVar17 = (long *)param_1[0x154];
      FUN_10a1753d0(plVar17,2);
      if (((plVar17 != (long *)0x0) &&
          (plVar18 = plVar17, (**(code **)(*plVar17 + 8))(), (int)plVar18 != 0)) &&
         (FUN_10ab80480(plVar17,plVar48[2],plVar48[3]), plVar17 != (long *)0x0)) {
        lVar37 = plVar47[0x251];
        func_0x000107c2b07c(&uStack_a30,&UNK_10f694687);
        FUN_10ab7f420(lVar37,&uStack_a30);
        FUN_10ab7de98(param_1,pfVar1,lVar37,plVar17,&UNK_10e4ac8a8);
        if ((int)uStack_a1c < 0) {
          __ZdlPv(CONCAT44(fStack_a2c,
                           CONCAT13(uStack_a2d,CONCAT12(uStack_a2e,CONCAT11(uStack_a2f,uStack_a30)))
                          ));
        }
      }
    }
    uStack_a30 = 0;
    uStack_a2f = 0;
    uStack_a2e = 0;
    uStack_a2d = 0;
    fStack_a2c = 0.0;
    sVar21 = -1;
    if ((short)param_2[2] != -1) {
      plVar48 = param_1 + 0xbc;
      func_0x00010a04a0d4(plVar48,(short)param_2[2]);
      FUN_10a18d87c(&uStack_a30,plVar48 + 0x1c);
      sVar21 = (short)param_2[2];
    }
  }
  if (*param_2 == -1) {
    if (sVar21 != -1) {
      plVar48 = param_1 + 0xbc;
      func_0x00010a04a0d4(plVar48);
      FUN_10ab7cdd8(param_1,pfVar1,param_2 + 0xc,plVar48,param_1[0x1d9]);
      FUN_10ab7c4ac(param_1,pfVar1,param_2[1]);
    }
    if (param_2[1] != -1) {
      plVar48 = param_1 + 4;
      func_0x00010a01e9ec(plVar48);
      plVar17 = param_1 + 4;
      FUN_10a015150(plVar17,param_2[1]);
      FUN_10ab7dcb4(plVar47[0x251],plVar48,plVar17,0,param_2 + 0xc);
    }
  }
  else {
    plVar48 = param_1 + 0xbc;
    func_0x00010a04a0d4(plVar48);
    FUN_10ab7cdd8(param_1,pfVar1,param_2 + 0xc,plVar48,param_1[0x1d9]);
    FUN_10ab7dcb4(plVar47[0x251],plStack_ae0,plStack_b00,*(undefined8 *)(param_2 + 10),param_2 + 0xc
                 );
    FUN_10ab7c4ac(param_1,pfVar1,param_2[1]);
    if (*(byte *)(param_3 + 0xc) - 2 < 2) {
      plVar48 = param_1 + 0xbc;
      func_0x00010a04a0d4(plVar48,*(undefined2 *)((long)param_2 + 10));
      lVar37 = plVar47[0x251];
      func_0x000107c2b074(&uStack_d0,&PTR_DAT_110c52910);
      func_0x00010ab7e8d8(*(undefined8 *)(lVar37 + 0x18),&uStack_d0,plVar48 + 0x6a);
      plVar48 = param_1 + 4;
      FUN_10a01f140(plVar48,param_2[1]);
      uStack_a80 = 0;
      lStack_a78 = 0;
      uStack_a88 = 0x3f800000;
      if ((byte *)*plVar48 != (byte *)plVar48[1]) {
        uVar31 = (param_1[0x29] - param_1[0x28] >> 4) * -0x30c30c30c30c30c3;
        pbVar44 = (byte *)*plVar48;
        do {
          pbVar27 = pbVar44 + 1;
          uVar30 = (ulong)*pbVar44;
          if (uVar31 < uVar30 || uVar31 - uVar30 == 0) goto LAB_10ab86718;
          pbVar44 = (byte *)(param_1[0x28] + uVar30 * 0x150);
          if ((*pbVar44 >> 1 & 1) != 0) {
            if (*(int *)(pbVar44 + 0x100) == -1) {
              lStack_a78 = *(long *)(pbVar44 + 0x50);
              uStack_a80 = *(undefined8 *)(pbVar44 + 0x48);
              uStack_a88 = *(undefined4 *)(pbVar44 + 0x18);
            }
            else {
              func_0x000107c2b054(&pppplStack_ab0,&UNK_10f694637);
              __ZNSt3__19to_stringEi(&pppplStack_a70,*(undefined4 *)(pbVar44 + 0x100));
              plVar17 = plStack_a68;
              ppppplVar39 = (long *****)pppplStack_a70;
              if (-1 < (long)uStack_a60) {
                plVar17 = (long *)(uStack_a60 >> 0x38);
                ppppplVar39 = &pppplStack_a70;
              }
              ppppplVar16 = &pppplStack_ab0;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (ppppplVar16,ppppplVar39,plVar17);
              uStack_c8 = (undefined **)ppppplVar16[1];
              uStack_d0 = (code *)*ppppplVar16;
              ppplStack_c0 = (long ***)ppppplVar16[2];
              ppppplVar16[1] = (long ****)0x0;
              ppppplVar16[2] = (long ****)0x0;
              *ppppplVar16 = (long ****)0x0;
              puVar19 = &uStack_d0;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (puVar19,&UNK_10f63ff44,2);
              uStack_a48 = puVar19[1];
              ppppuStack_a50 = (undefined8 ****)*puVar19;
              uStack_a40 = puVar19[2];
              puVar19[1] = 0;
              puVar19[2] = 0;
              *puVar19 = 0;
              if ((long)uStack_a60 < 0) {
                __ZdlPv(pppplStack_a70);
              }
              if (uStack_aa0._7_1_ < '\0') {
                __ZdlPv(pppplStack_ab0);
              }
              uVar30 = uStack_a40;
              uStack_c8 = *(undefined ***)(pbVar44 + 0x50);
              uStack_d0 = *(code **)(pbVar44 + 0x48);
              ppplStack_c0 = *(long ****)(pbVar44 + 0x108);
              uStack_b8 = CONCAT44(*(undefined4 *)(pbVar44 + 0x18),*(undefined4 *)(pbVar44 + 0x110))
              ;
              uStack_b0 = *(undefined8 *)(pbVar44 + 0x74);
              uStack_a8 = (ulong)*(uint *)(pbVar44 + 0x7c);
              uStack_a0 = CONCAT44((float)*(int *)(pbVar44 + 0x70),*(undefined4 *)(pbVar44 + 0x68));
              uStack_98 = 0;
              lVar37 = plVar47[0x251];
              uVar31 = uStack_a48;
              if (-1 < (long)uStack_a40) {
                uVar31 = uStack_a40 >> 0x38;
              }
              FUN_10a003c90(&pppplStack_a70,uVar31 + 6,&uStack_a81);
              ppppplVar39 = (long *****)pppplStack_a70;
              if (-1 < (long)uStack_a60) {
                ppppplVar39 = &pppplStack_a70;
              }
              if (uVar31 != 0) {
                pppppuVar3 = (undefined8 *****)ppppuStack_a50;
                if (-1 < (long)uVar30) {
                  pppppuVar3 = &ppppuStack_a50;
                }
                _memmove(ppppplVar39,pppppuVar3,uVar31);
              }
              puVar2 = (undefined4 *)((long)ppppplVar39 + uVar31);
              *(undefined2 *)(puVar2 + 1) = 0x736d;
              *puVar2 = 0x61726170;
              *(undefined1 *)((long)puVar2 + 6) = 0;
              uStack_aa0 = uStack_a60;
              plStack_aa8 = plStack_a68;
              pppplStack_ab0 = pppplStack_a70;
              plStack_a68 = (long *)0x0;
              uStack_a60 = 0;
              pppplStack_a70 = (long ****)0x0;
              uStack_a98 = 0;
              func_0x000107c2b080(&pppplStack_ab0);
              func_0x00010ab7e8d8(*(undefined8 *)(lVar37 + 0x18),&pppplStack_ab0,&uStack_d0);
              if ((long)uStack_aa0 < 0) {
                __ZdlPv(pppplStack_ab0);
              }
              if ((long)uStack_a60 < 0) {
                __ZdlPv(pppplStack_a70);
              }
              lVar37 = plVar47[0x251];
              FUN_10a003c90(&pppplStack_a70,uVar31 + 0x10,&uStack_a81);
              ppppplVar39 = (long *****)pppplStack_a70;
              if (-1 < (long)uStack_a60) {
                ppppplVar39 = &pppplStack_a70;
              }
              if (uVar31 != 0) {
                pppppuVar3 = (undefined8 *****)ppppuStack_a50;
                if (-1 < (long)uVar30) {
                  pppppuVar3 = &ppppuStack_a50;
                }
                _memmove(ppppplVar39,pppppuVar3,uVar31);
              }
              puVar19 = (undefined8 *)((long)ppppplVar39 + uVar31);
              puVar19[1] = 0x78697274614d6563;
              *puVar19 = 0x617053746867696c;
              *(undefined1 *)(puVar19 + 2) = 0;
              uStack_aa0 = uStack_a60;
              plStack_aa8 = plStack_a68;
              pppplStack_ab0 = pppplStack_a70;
              pppplStack_a70 = (long ****)0x0;
              plStack_a68 = (long *)0x0;
              uStack_a60 = 0;
              uStack_a98 = 0;
              func_0x000107c2b080(&pppplStack_ab0);
              func_0x00010ab7e8d8(*(undefined8 *)(lVar37 + 0x18),&pppplStack_ab0,pbVar44 + 0x80);
              if ((long)uStack_aa0 < 0) {
                __ZdlPv(pppplStack_ab0);
              }
              if ((long)uStack_a60 < 0) {
                __ZdlPv(pppplStack_a70);
              }
              lVar37 = plVar47[0x251];
              FUN_10a003c90(&pppplStack_a70,uVar31 + 0x13,&uStack_a81);
              ppppplVar39 = (long *****)pppplStack_a70;
              if (-1 < (long)uStack_a60) {
                ppppplVar39 = &pppplStack_a70;
              }
              if (uVar31 != 0) {
                pppppuVar3 = (undefined8 *****)ppppuStack_a50;
                if (-1 < (long)uVar30) {
                  pppppuVar3 = &ppppuStack_a50;
                }
                _memmove(ppppplVar39,pppppuVar3,uVar31);
              }
              puVar19 = (undefined8 *)((long)ppppplVar39 + uVar31);
              puVar19[1] = 0x74614d6563617053;
              *puVar19 = 0x746867694c766e69;
              *(undefined4 *)((long)puVar19 + 0xf) = 0x78697274;
              uStack_aa0 = uStack_a60;
              *(undefined1 *)((long)puVar19 + 0x13) = 0;
              plStack_aa8 = plStack_a68;
              pppplStack_ab0 = pppplStack_a70;
              pppplStack_a70 = (long ****)0x0;
              plStack_a68 = (long *)0x0;
              uStack_a60 = 0;
              uStack_a98 = 0;
              func_0x000107c2b080(&pppplStack_ab0);
              func_0x00010ab7e8d8(*(undefined8 *)(lVar37 + 0x18),&pppplStack_ab0,pbVar44 + 0xc0);
              if ((long)uStack_aa0 < 0) {
                __ZdlPv(pppplStack_ab0);
              }
              if ((long)uStack_a60 < 0) {
                __ZdlPv(pppplStack_a70);
              }
              if ((long)uVar30 < 0) {
                __ZdlPv(ppppuStack_a50);
              }
            }
            break;
          }
          pbVar44 = pbVar27;
        } while (pbVar27 != (byte *)plVar48[1]);
      }
      pbVar44 = (byte *)plVar48[3];
      if (pbVar44 != (byte *)plVar48[4]) {
        uVar31 = (param_1[0x2c] - param_1[0x2b] >> 3) * -0x7063e7063e7063e7;
        do {
          uVar30 = (ulong)*pbVar44;
          if (uVar31 < uVar30 || uVar31 - uVar30 == 0) goto LAB_10ab86718;
          pbVar27 = (byte *)(param_1[0x2b] + uVar30 * 0x148);
          if (((*pbVar27 >> 1 & 1) != 0) && (*(int *)(pbVar27 + 0xe8) != -1)) {
            func_0x000107c2b054(&pppplStack_ab0,&UNK_10f694637);
            __ZNSt3__19to_stringEi(&pppplStack_a70,*(undefined4 *)(pbVar27 + 0xe8));
            plVar48 = plStack_a68;
            ppppplVar39 = (long *****)pppplStack_a70;
            if (-1 < (long)uStack_a60) {
              plVar48 = (long *)(uStack_a60 >> 0x38);
              ppppplVar39 = &pppplStack_a70;
            }
            ppppplVar16 = &pppplStack_ab0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (ppppplVar16,ppppplVar39,plVar48);
            uStack_c8 = (undefined **)ppppplVar16[1];
            uStack_d0 = (code *)*ppppplVar16;
            ppplStack_c0 = (long ***)ppppplVar16[2];
            ppppplVar16[1] = (long ****)0x0;
            ppppplVar16[2] = (long ****)0x0;
            *ppppplVar16 = (long ****)0x0;
            puVar19 = &uStack_d0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (puVar19,&UNK_10f63ff44,2);
            uStack_a48 = puVar19[1];
            ppppuStack_a50 = (undefined8 ****)*puVar19;
            uStack_a40 = puVar19[2];
            puVar19[1] = 0;
            puVar19[2] = 0;
            *puVar19 = 0;
            if ((long)uStack_a60 < 0) {
              __ZdlPv(pppplStack_a70);
            }
            if ((long)uStack_aa0 < 0) {
              __ZdlPv(pppplStack_ab0);
            }
            uVar30 = uStack_a40;
            uStack_c8 = *(undefined ***)(pbVar27 + 0x10c);
            uStack_d0 = *(code **)(pbVar27 + 0x104);
            ppplStack_c0 = *(long ****)(pbVar27 + 0x5c);
            uStack_b8 = CONCAT44(*(undefined4 *)(pbVar27 + 0x100),*(undefined4 *)(pbVar27 + 100));
            uStack_b0 = *(undefined8 *)(pbVar27 + 0x11c);
            uStack_a8 = CONCAT44(*(undefined4 *)(pbVar27 + 0x50),*(undefined4 *)(pbVar27 + 0x124));
            uStack_a0 = *(undefined8 *)(pbVar27 + 0x114);
            uStack_98 = (ulong)(uint)(float)*(int *)(pbVar27 + 0x58);
            lVar37 = plVar47[0x251];
            uVar31 = uStack_a48;
            if (-1 < (long)uStack_a40) {
              uVar31 = uStack_a40 >> 0x38;
            }
            FUN_10a003c90(&pppplStack_a70,uVar31 + 6,&uStack_a81);
            ppppplVar39 = (long *****)pppplStack_a70;
            if (-1 < (long)uStack_a60) {
              ppppplVar39 = &pppplStack_a70;
            }
            if (uVar31 != 0) {
              pppppuVar3 = (undefined8 *****)ppppuStack_a50;
              if (-1 < (long)uVar30) {
                pppppuVar3 = &ppppuStack_a50;
              }
              _memmove(ppppplVar39,pppppuVar3,uVar31);
            }
            puVar2 = (undefined4 *)((long)ppppplVar39 + uVar31);
            *(undefined2 *)(puVar2 + 1) = 0x736d;
            *puVar2 = 0x61726170;
            *(undefined1 *)((long)puVar2 + 6) = 0;
            uStack_aa0 = uStack_a60;
            plStack_aa8 = plStack_a68;
            pppplStack_ab0 = pppplStack_a70;
            plStack_a68 = (long *)0x0;
            uStack_a60 = 0;
            pppplStack_a70 = (long ****)0x0;
            uStack_a98 = 0;
            func_0x000107c2b080(&pppplStack_ab0);
            func_0x00010ab7e8d8(*(undefined8 *)(lVar37 + 0x18),&pppplStack_ab0,&uStack_d0);
            if ((long)uStack_aa0 < 0) {
              __ZdlPv(pppplStack_ab0);
            }
            if ((long)uStack_a60 < 0) {
              __ZdlPv(pppplStack_a70);
            }
            lVar37 = plVar47[0x251];
            FUN_10a003c90(&pppplStack_a70,uVar31 + 0x10,&uStack_a81);
            ppppplVar39 = (long *****)pppplStack_a70;
            if (-1 < (long)uStack_a60) {
              ppppplVar39 = &pppplStack_a70;
            }
            if (uVar31 != 0) {
              pppppuVar3 = (undefined8 *****)ppppuStack_a50;
              if (-1 < (long)uVar30) {
                pppppuVar3 = &ppppuStack_a50;
              }
              _memmove(ppppplVar39,pppppuVar3,uVar31);
            }
            puVar19 = (undefined8 *)((long)ppppplVar39 + uVar31);
            puVar19[1] = 0x78697274614d6563;
            *puVar19 = 0x617053746867696c;
            *(undefined1 *)(puVar19 + 2) = 0;
            uStack_aa0 = uStack_a60;
            plStack_aa8 = plStack_a68;
            pppplStack_ab0 = pppplStack_a70;
            pppplStack_a70 = (long ****)0x0;
            plStack_a68 = (long *)0x0;
            uStack_a60 = 0;
            uStack_a98 = 0;
            func_0x000107c2b080(&pppplStack_ab0);
            func_0x00010ab7e8d8(*(undefined8 *)(lVar37 + 0x18),&pppplStack_ab0,pbVar27 + 0x68);
            if ((long)uStack_aa0 < 0) {
              __ZdlPv(pppplStack_ab0);
            }
            if ((long)uStack_a60 < 0) {
              __ZdlPv(pppplStack_a70);
            }
            lVar37 = plVar47[0x251];
            FUN_10a003c90(&pppplStack_a70,uVar31 + 0x13,&uStack_a81);
            ppppplVar39 = (long *****)pppplStack_a70;
            if (-1 < (long)uStack_a60) {
              ppppplVar39 = &pppplStack_a70;
            }
            if (uVar31 != 0) {
              pppppuVar3 = (undefined8 *****)ppppuStack_a50;
              if (-1 < (long)uVar30) {
                pppppuVar3 = &ppppuStack_a50;
              }
              _memmove(ppppplVar39,pppppuVar3,uVar31);
            }
            puVar19 = (undefined8 *)((long)ppppplVar39 + uVar31);
            puVar19[1] = 0x74614d6563617053;
            *puVar19 = 0x746867694c766e69;
            *(undefined4 *)((long)puVar19 + 0xf) = 0x78697274;
            uStack_aa0 = uStack_a60;
            *(undefined1 *)((long)puVar19 + 0x13) = 0;
            plStack_aa8 = plStack_a68;
            pppplStack_ab0 = pppplStack_a70;
            pppplStack_a70 = (long ****)0x0;
            plStack_a68 = (long *)0x0;
            uStack_a60 = 0;
            uStack_a98 = 0;
            func_0x000107c2b080(&pppplStack_ab0);
            func_0x00010ab7e8d8(*(undefined8 *)(lVar37 + 0x18),&pppplStack_ab0,pbVar27 + 0xa8);
            if ((long)uStack_aa0 < 0) {
              __ZdlPv(pppplStack_ab0);
            }
            if ((long)uStack_a60 < 0) {
              __ZdlPv(pppplStack_a70);
            }
            if ((long)uVar30 < 0) {
              __ZdlPv(ppppuStack_a50);
            }
            break;
          }
          pbVar44 = pbVar44 + 1;
        } while (pbVar44 != (byte *)plVar48[4]);
      }
      lVar37 = plVar47[0x251];
      func_0x000107c2b074(&uStack_d0,&PTR_DAT_110c528c0);
      func_0x00010ab7e6dc(*(undefined8 *)(lVar37 + 0x18),&uStack_d0,&uStack_a80);
      lVar37 = plVar47[0x251];
      func_0x000107c2b074(&uStack_d0,&PTR_DAT_110c528e8);
      func_0x00010ab7e7f8(*(undefined8 *)(lVar37 + 0x18),&uStack_d0,&uStack_a88);
    }
    else if (*(byte *)(param_3 + 0xc) == 1) {
      lVar37 = plVar47[0x251];
      func_0x000107c2b074(&uStack_d0,&PTR_DAT_110c528c0);
      func_0x00010ab7e6dc(*(undefined8 *)(lVar37 + 0x18),&uStack_d0,(long)plStack_ae0 + 0xec);
      lVar37 = plVar47[0x251];
      func_0x000107c2b074(&uStack_d0,&PTR_DAT_110c528e8);
      func_0x00010ab7e7f8(*(undefined8 *)(lVar37 + 0x18),&uStack_d0,(long)plStack_ae0 + 0xfc);
    }
    if (*piVar38 != 0) {
      uStack_aa0 = 0x3049ed2bcec9ad1b;
      plStack_aa8 = (long *)0x8;
      pppplStack_ab0 = (long ****)&DAT_10f694bbc;
      uStack_a40 = 0x70f9ed2bcec9ad1b;
      uStack_a48 = 8;
      ppppuStack_a50 = (undefined8 ****)&DAT_10f694bc5;
      plStack_a68 = (long *)0x8;
      pppplStack_a70 = (long ****)&DAT_10f694bce;
      uStack_a60 = 0x7269ed2bcec9ad1b;
      lVar37 = plVar47[0x251];
      func_0x000107c2b074(&uStack_d0,&pppplStack_ab0);
      lStack_a78 = lStack_b18;
      uStack_a80 = uStack_b20;
      uVar22 = *(undefined8 *)(lVar37 + 0x18);
      func_0x00010ab7e6dc(uVar22,&uStack_d0,&uStack_a80);
      if ((int)uVar22 != 0) {
        lVar37 = plVar47[0x251];
        func_0x000107c2b074(&uStack_d0,&ppppuStack_a50);
        lStack_a78 = lStack_b28;
        uStack_a80 = uStack_b30;
        uVar22 = *(undefined8 *)(lVar37 + 0x18);
        func_0x00010ab7e6dc(uVar22,&uStack_d0,&uStack_a80);
        if ((int)uVar22 != 0) {
          lVar37 = plVar47[0x251];
          func_0x000107c2b074(&uStack_d0,&pppplStack_a70);
          lStack_a78 = lStack_b68;
          uStack_a80 = uStack_b70;
          func_0x00010ab7e6dc(*(undefined8 *)(lVar37 + 0x18),&uStack_d0,&uStack_a80);
        }
      }
    }
  }
  lVar37 = param_1[0x1ad];
  if (*(char *)((long)plVar47 + 0x2e9) == '\x01') {
    if ((*(char *)(lVar37 + 0x270) == '\0') || (*(char *)(lVar37 + 0x1dd) != '\x01')) {
      uVar36 = 1;
LAB_10ab85980:
      _glDepthMask(uVar36);
      *(undefined1 *)(lVar37 + 0x1dd) = uVar36;
    }
  }
  else if ((*(char *)(lVar37 + 0x270) == '\0') || (*(char *)(lVar37 + 0x1dd) != '\0')) {
    uVar36 = 0;
    goto LAB_10ab85980;
  }
  if ((char)plVar47[0x5d] == '\x01') {
    FUN_10ab8e8a0(lVar37,0xb71);
    if (*(uint *)((long)plVar47 + 0x2ec) < 8) {
      uVar25 = *(uint *)((long)plVar47 + 0x2ec) | 0x200;
      if ((*(char *)(lVar37 + 0x270) != '\x01') || (*(uint *)(lVar37 + 0xb8) != uVar25)) {
        _glDepthFunc(uVar25);
        *(uint *)(lVar37 + 0xb8) = uVar25;
      }
      goto LAB_10ab859e8;
    }
    goto LAB_10ab8642c;
  }
  func_0x00010a5bbed8(lVar37,0xb71);
LAB_10ab859e8:
  if ((char)plVar47[0x5e] == '\x01') {
    FUN_10ab8e8a0(lVar37,0xb90);
    uVar25 = *(uint *)((long)plVar47 + 0x2f4);
    if (*(char *)((long)plVar47 + 0x5d4) == '\x01') {
      if (((uVar25 < 8) && (*(uint *)((long)plVar47 + 0x2fc) < 8)) &&
         (*(uint *)(plVar47 + 0x5f) < 8)) {
        FUN_10a5bbfec(lVar37,0x408,*(undefined4 *)(&UNK_10e502d04 + (ulong)uVar25 * 4),
                      *(undefined4 *)(&UNK_10e502d04 + (ulong)*(uint *)((long)plVar47 + 0x2fc) * 4),
                      *(undefined4 *)(&UNK_10e502d04 + (ulong)*(uint *)(plVar47 + 0x5f) * 4));
        if (7 < *(uint *)(plVar47 + 0x60)) goto LAB_10ab8642c;
        uVar22 = 0x408;
        func_0x00010a5bc0f0(lVar37,0x408,*(uint *)(plVar47 + 0x60) | 0x200,(int)plVar47[0xbb],
                            *(undefined4 *)((long)plVar47 + 0x304));
        lVar26 = 0x308;
LAB_10ab85b9c:
        func_0x00010a5bbf2c(lVar37,uVar22,*(undefined4 *)((long)plVar47 + lVar26));
        goto LAB_10ab85bac;
      }
LAB_10ab86420:
      puVar20 = &UNK_10f697c46;
    }
    else {
      if (((7 < uVar25) || (7 < *(uint *)((long)plVar47 + 0x2fc))) ||
         (7 < *(uint *)(plVar47 + 0x5f))) goto LAB_10ab86420;
      FUN_10a5bbfec(lVar37,0x404,*(undefined4 *)(&UNK_10e502d04 + (ulong)uVar25 * 4),
                    *(undefined4 *)(&UNK_10e502d04 + (ulong)*(uint *)((long)plVar47 + 0x2fc) * 4),
                    *(undefined4 *)(&UNK_10e502d04 + (ulong)*(uint *)(plVar47 + 0x5f) * 4));
      if (*(uint *)(plVar47 + 0x60) < 8) {
        func_0x00010a5bc0f0(lVar37,0x404,*(uint *)(plVar47 + 0x60) | 0x200,(int)plVar47[0xbb],
                            *(undefined4 *)((long)plVar47 + 0x304));
        func_0x00010a5bbf2c(lVar37,0x404,(int)plVar47[0x61]);
        if (((7 < *(uint *)((long)plVar47 + 0x30c)) || (7 < *(uint *)((long)plVar47 + 0x314))) ||
           (7 < *(uint *)(plVar47 + 0x62))) goto LAB_10ab86420;
        FUN_10a5bbfec(lVar37,0x405,
                      *(undefined4 *)(&UNK_10e502d04 + (ulong)*(uint *)((long)plVar47 + 0x30c) * 4),
                      *(undefined4 *)(&UNK_10e502d04 + (ulong)*(uint *)((long)plVar47 + 0x314) * 4),
                      *(undefined4 *)(&UNK_10e502d04 + (ulong)*(uint *)(plVar47 + 0x62) * 4));
        if (*(uint *)(plVar47 + 99) < 8) {
          uVar22 = 0x405;
          func_0x00010a5bc0f0(lVar37,0x405,*(uint *)(plVar47 + 99) | 0x200,
                              *(undefined4 *)((long)plVar47 + 0x5dc),
                              *(undefined4 *)((long)plVar47 + 0x31c));
          lVar26 = 800;
          goto LAB_10ab85b9c;
        }
      }
LAB_10ab8642c:
      puVar20 = &UNK_10f697c2d;
    }
    goto LAB_10ab8645c;
  }
  func_0x00010a5bbed8(lVar37,0xb90);
  func_0x00010a5bc0f0(lVar37,0x408,0x207,0,1);
  FUN_10a5bbfec(lVar37,0x408,0x1e00,0x1e00,0x1e00);
LAB_10ab85bac:
  plVar48 = (long *)&UNK_10e4fe888;
  if (plVar47[0x85] != 0) {
    plVar48 = plVar47 + 0x65;
  }
  func_0x00010a5bc1f4(lVar37,*(char *)((long)plVar48 + 0x1c));
  if ((char)plVar47[0xb9] == '\x01') {
    _glBlendColor((int)plVar47[0xbc],*(undefined4 *)((long)plVar47 + 0x5e4),(int)plVar47[0xbd],
                  *(undefined4 *)((long)plVar47 + 0x5ec));
    if (plVar47[0x85] != 0) {
      if ((char)plVar47[0x65] == '\x01') {
        if ((((0xe < *(uint *)((long)plVar47 + 0x32c)) || (0xe < *(uint *)(plVar47 + 0x66))) ||
            (0xe < *(uint *)(plVar47 + 0x67))) || (0xe < *(uint *)((long)plVar47 + 0x33c)))
        goto LAB_10ab86438;
        if ((4 < *(uint *)((long)plVar47 + 0x334)) || (4 < *(uint *)(plVar47 + 0x68))) {
          puVar20 = &UNK_10f640b36;
          goto LAB_10ab8645c;
        }
      }
      FUN_10a00946c(&UNK_10f64d3d2);
      goto LAB_10ab86718;
    }
LAB_10ab85e64:
    if (*(char *)((long)plVar47 + 0x2e4) == '\x01') {
      FUN_10ab8e8a0(lVar37,0x809e);
    }
    else {
      func_0x00010a5bbed8(lVar37,0x809e);
    }
    fVar55 = *pfVar1;
    if ((*(char *)(lVar37 + 0x270) != '\x01') || (*(float *)(lVar37 + 0x18c) != fVar55)) {
      _glLineWidth(fVar55);
      *(float *)(lVar37 + 0x18c) = fVar55;
    }
    iVar6 = *(int *)((long)plVar47 + 0x2cc);
    if (iVar6 == 0) {
      FUN_10ab8e8a0(lVar37,0xb44);
      if ((*(char *)(lVar37 + 0x270) != '\x01') || (*(int *)(lVar37 + 0xb4) != 0x405)) {
        uVar28 = 0x405;
        _glCullFace(0x405);
LAB_10ab85f44:
        *(undefined4 *)(lVar37 + 0xb4) = uVar28;
      }
LAB_10ab85f48:
      if (*(char *)((long)plVar47 + 0x2d4) == '\x01') {
        FUN_10ab8e8a0(lVar37,0x8037);
        fVar55 = *(float *)((long)plVar47 + 0x5f4);
        fVar56 = *(float *)(plVar47 + 0xbe);
        if (((*(char *)(lVar37 + 0x270) != '\x01') || (*(float *)(lVar37 + 400) != fVar55)) ||
           (*(float *)(lVar37 + 0x194) != fVar56)) {
          _glPolygonOffset(fVar55,fVar56);
          *(float *)(lVar37 + 400) = fVar55;
          *(float *)(lVar37 + 0x194) = fVar56;
        }
      }
      else {
        func_0x00010a5bbed8(lVar37,0x8037);
      }
      plVar48 = (long *)param_1[0x1d6];
      plVar17 = (long *)param_1[0x1d7];
      if (plVar48 != plVar17) {
        do {
          lVar37 = *plVar48;
          if ((lVar37 != 0) &&
             (___dynamic_cast(lVar37,&PTR_DAT_110ba0e18,&PTR_DAT_110c545f0,0), lVar37 != 0)) {
            uVar22 = 1;
            FUN_10a303694(1);
            FUN_10ab9a490(lVar37,uVar22);
          }
          plVar48 = plVar48 + 1;
        } while (plVar48 != plVar17);
        plVar48 = (long *)param_1[0x1d6];
      }
      param_1[0x1d7] = (long)plVar48;
      uStack_c8 = (undefined **)0x0;
      uStack_d0 = (code *)0x0;
      uStack_b8 = 0;
      ppplStack_c0 = (long ***)0x0;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,0x3f800000);
      lVar37 = *(long *)(plVar47[0x251] + 0x18);
      if ((int)plVar47[0xd0] == 0) {
        uVar25 = 0;
      }
      else {
        uVar31 = 0;
        plVar48 = plVar47 + 0xd3;
        do {
          if (uVar31 == 0x20) goto LAB_10ab86718;
          FUN_10ab81b1c(param_1,plVar48[-2],plVar48,uVar31);
          pppplStack_ab0._0_4_ = (int)uVar31;
          func_0x00010ab805d4(*(undefined8 *)(*(long *)(plVar47[0x251] + 0x18) + 0x90),
                              *(undefined8 *)(*(long *)(plVar47[0x251] + 0x18) + 0x98),
                              *(undefined4 *)(plVar48[-1] + 0x10),&pppplStack_ab0);
          pppplStack_ab0 =
               (long ****)CONCAT44(pppplStack_ab0._4_4_,*(undefined4 *)(plVar48[-1] + 0x10));
          func_0x000107c2aca0(&uStack_d0,&pppplStack_ab0,&pppplStack_ab0);
          uVar31 = uVar31 + 1;
          uVar25 = *(uint *)(plVar47 + 0xd0);
          plVar48 = plVar48 + 0xc;
        } while (uVar31 < uVar25);
      }
      if ((*(long *)(lVar37 + 0x80) != uStack_b8) && (*(char *)((long)param_1 + 0xaf9) == '\x01')) {
        lVar26 = param_1[0x10b];
        pppplStack_ab0 = (long ****)CONCAT44(pppplStack_ab0._4_4_,uVar25);
        for (plVar48 = *(long **)(lVar37 + 0x78); plVar48 != (long *)0x0; plVar48 = (long *)*plVar48
            ) {
          puVar19 = &uStack_d0;
          func_0x0001091963a0(puVar19,plVar48 + 2);
          if (puVar19 == (undefined8 *)0x0) {
            uVar10 = *(ushort *)(plVar48 + 4);
            if (uVar10 < 0x1b) {
              if (uVar10 == 0xd) {
                FUN_10ab81b1c(param_1,*(undefined8 *)(lVar26 + 0xb8),&UNK_10e4ac858,
                              (ulong)pppplStack_ab0 & 0xffffffff);
                func_0x00010ab805d4(*(undefined8 *)(*(long *)(plVar47[0x251] + 0x18) + 0x90),
                                    *(undefined8 *)(*(long *)(plVar47[0x251] + 0x18) + 0x98),
                                    *(undefined4 *)(plVar48 + 5),&pppplStack_ab0);
              }
              else if (uVar10 == 0x1a) {
                FUN_10ab81b1c(param_1,*(undefined8 *)(lVar26 + 200),&UNK_10e4ac858,
                              (ulong)pppplStack_ab0 & 0xffffffff);
                func_0x00010ab805d4(*(undefined8 *)(*(long *)(plVar47[0x251] + 0x18) + 0x90),
                                    *(undefined8 *)(*(long *)(plVar47[0x251] + 0x18) + 0x98),
                                    *(undefined4 *)(plVar48 + 5),&pppplStack_ab0);
              }
            }
            else if (uVar10 == 0x1b) {
              FUN_10ab81b1c(param_1,*(undefined8 *)(lVar26 + 0xd8),&UNK_10e4ac858,
                            (ulong)pppplStack_ab0 & 0xffffffff);
              func_0x00010ab805d4(*(undefined8 *)(*(long *)(plVar47[0x251] + 0x18) + 0x90),
                                  *(undefined8 *)(*(long *)(plVar47[0x251] + 0x18) + 0x98),
                                  *(undefined4 *)(plVar48 + 5),&pppplStack_ab0);
            }
            else if (uVar10 == 0x1c) {
              FUN_10ab81b1c(param_1,*(undefined8 *)(lVar26 + 0xe8),&UNK_10e4ac858,
                            (ulong)pppplStack_ab0 & 0xffffffff);
              func_0x00010ab805d4(*(undefined8 *)(*(long *)(plVar47[0x251] + 0x18) + 0x90),
                                  *(undefined8 *)(*(long *)(plVar47[0x251] + 0x18) + 0x98),
                                  *(undefined4 *)(plVar48 + 5),&pppplStack_ab0);
            }
          }
        }
      }
      func_0x000107c2ab24(&uStack_d0);
      ppppplVar39 = (long *****)param_1[0x1ad];
      pppplStack_ab0 = (long ****)ppppplVar39;
      if (uVar45 == 0) {
        plStack_aa8 = (long *)((ulong)plStack_aa8._1_7_ << 8);
      }
      else {
        plStack_aa8 = (long *)CONCAT71(plStack_aa8._1_7_,*(char *)((long)ppppplVar39 + 0x21f));
        if (*(char *)((long)ppppplVar39 + 0x21f) == '\x01') {
          FUN_10ab8e8a0(ppppplVar39,0x3000);
        }
      }
      ppplStack_c0 = (long ***)0x0;
      uStack_b8 = 0;
      uStack_c8 = (undefined **)0x0;
      iVar6 = (int)plVar15[0xd];
      if (*(char *)((long)ppppplVar39 + 0x21e) == '\0') {
        iVar6 = 1;
      }
      uStack_d0 = (code *)CONCAT44(1,iVar6);
      if ((*(int *)((long)plVar15 + 0x6c) != 0) && ((bRam00000001137ec4a0 & 1) == 0)) {
        if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
          func_0x00010ae06f08(1,2,&UNK_10f69450e,&UNK_10f694ac4,0xa60,&UNK_10f694b5b);
        }
        bRam00000001137ec4a0 = 1;
      }
      uStack_c8 = (undefined **)((ulong)uStack_c8 & 0xffffffff);
      if (*param_2 == -1) {
        if (uVar45 != 0) {
          uStack_d0 = (code *)CONCAT44(uStack_d0._4_4_,iVar6 << 1);
        }
        FUN_10ab8b194(param_1,*(undefined8 *)(param_3 + 4),param_2 + 0xc,&uStack_a30,plVar47,pfVar1,
                      (short)param_2[2],&uStack_d0,param_3);
      }
      else {
        uStack_d0 = (code *)CONCAT44(uStack_d0._4_4_,iVar6 << (ulong)uVar45);
        if (*(char *)(param_3 + 0x30) == '\x01') {
          if (*(char *)((long)param_3 + 0x61) == '\x01') {
            uVar28 = 1;
            if (*(char *)(*(long *)(param_3 + 0x20) + 0x2a) == '\x01') {
              uVar28 = 2;
            }
            uStack_d0 = (code *)CONCAT44(iVar6 << (ulong)uVar45,uVar28);
            if (iVar6 != 0) {
              iVar40 = 0;
              do {
                uStack_c8 = (undefined **)CONCAT44(uStack_c8._4_4_,iVar40);
                FUN_10ab8b450(param_1,*(undefined8 *)(param_3 + 4),plStack_ae0 + 0x31,plVar47,
                              &uStack_d0,param_3);
                iVar40 = iVar40 + 1;
              } while (iVar6 != iVar40);
            }
          }
          else {
            FUN_10ab8b450(param_1,*(undefined8 *)(param_3 + 4),plStack_ae0 + 0x31,plVar47,&uStack_d0
                          ,param_3);
          }
        }
        else {
          FUN_10ab8b194(param_1,*(undefined8 *)(param_3 + 4),param_2 + 0xc,&uStack_a30,plVar47,
                        pfVar1,(short)param_2[2],&uStack_d0,param_3);
        }
      }
      FUN_10abcbe08(&pppplStack_ab0);
      *(undefined2 *)(param_1 + 0x1d5) = 0x101;
      *(undefined1 *)(param_1 + 0x105) = 1;
      FUN_10ad5e650(param_1[0x109]);
      param_1[0x1af] = 0;
      *(int *)param_1[0x136] = iVar5;
      *(undefined1 *)param_1[0x137] = 0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
        return;
      }
      ___stack_chk_fail();
    }
    else {
      if (iVar6 == 1) {
        FUN_10ab8e8a0(lVar37,0xb44);
        if ((*(char *)(lVar37 + 0x270) != '\x01') || (*(int *)(lVar37 + 0xb4) != 0x404)) {
          uVar28 = 0x404;
          _glCullFace(0x404);
          goto LAB_10ab85f44;
        }
        goto LAB_10ab85f48;
      }
      if (iVar6 == 2) {
        func_0x00010a5bbed8(lVar37,0xb44);
        goto LAB_10ab85f48;
      }
    }
    puVar20 = &UNK_10f694d78;
  }
  else {
    if ((char)*plVar48 != '\x01') {
      func_0x00010a5bbed8(lVar37,0xbe2);
      goto LAB_10ab85e64;
    }
    if ((((*(uint *)((long)plVar48 + 4) < 0xf) && (*(uint *)(plVar48 + 1) < 0xf)) &&
        (*(uint *)(plVar48 + 2) < 0xf)) && (*(uint *)((long)plVar48 + 0x14) < 0xf)) {
      iVar40 = *(int *)(&UNK_10e502d24 + (ulong)*(uint *)((long)plVar48 + 4) * 4);
      iVar7 = *(int *)(&UNK_10e502d24 + (ulong)*(uint *)(plVar48 + 1) * 4);
      iVar8 = *(int *)(&UNK_10e502d24 + (ulong)*(uint *)(plVar48 + 2) * 4);
      iVar9 = *(int *)(&UNK_10e502d24 + (ulong)*(uint *)((long)plVar48 + 0x14) * 4);
      iVar6 = *(int *)((long)plVar48 + 0xc);
      puVar20 = &UNK_10f640b36;
      if (iVar6 < 3) {
        if (iVar6 == 0) {
LAB_10ab85d34:
          iVar23 = 0x8006;
        }
        else if (iVar6 == 1) {
          iVar23 = 0x800a;
        }
        else {
          if (iVar6 != 2) goto LAB_10ab8645c;
          iVar23 = 0x800b;
        }
      }
      else {
        if (1 < iVar6 - 3U) goto LAB_10ab8645c;
        lVar26 = param_1[0x1ad];
        if (((*(char *)(lVar26 + 500) == '\x01') && (*(int *)(lVar26 + 0x1f8) == 2000)) &&
           (*(char *)(lVar26 + 0x202) != '\x01')) goto LAB_10ab85d34;
        iVar23 = 0x8007;
        if (iVar6 != 3) {
          iVar23 = 0x8008;
        }
      }
      iVar6 = (int)plVar48[3];
      if (iVar6 < 3) {
        if (iVar6 == 0) {
LAB_10ab85dac:
          iVar24 = 0x8006;
        }
        else if (iVar6 == 1) {
          iVar24 = 0x800a;
        }
        else {
          if (iVar6 != 2) goto LAB_10ab8645c;
          iVar24 = 0x800b;
        }
      }
      else {
        if (1 < iVar6 - 3U) goto LAB_10ab8645c;
        lVar26 = param_1[0x1ad];
        if (((*(char *)(lVar26 + 500) == '\x01') && (*(int *)(lVar26 + 0x1f8) == 2000)) &&
           (*(char *)(lVar26 + 0x202) != '\x01')) goto LAB_10ab85dac;
        iVar24 = 0x8007;
        if (iVar6 != 3) {
          iVar24 = 0x8008;
        }
      }
      FUN_10ab8e8a0(lVar37,0xbe2);
      if ((((*(char *)(lVar37 + 0x270) == '\x01') && (*(int *)(lVar37 + 0xbc) == iVar40)) &&
          (*(int *)(lVar37 + 0xc4) == iVar7)) &&
         ((*(int *)(lVar37 + 0xc0) == iVar8 && (*(int *)(lVar37 + 200) == iVar9)))) {
LAB_10ab85e28:
        if ((*(int *)(lVar37 + 0xcc) != iVar23) || (*(int *)(lVar37 + 0xd0) != iVar24))
        goto LAB_10ab85e40;
      }
      else {
        _glBlendFuncSeparate(iVar40,iVar7,iVar8,iVar9);
        *(int *)(lVar37 + 0xbc) = iVar40;
        *(int *)(lVar37 + 0xc0) = iVar8;
        *(int *)(lVar37 + 0xc4) = iVar7;
        *(int *)(lVar37 + 200) = iVar9;
        if (*(char *)(lVar37 + 0x270) == '\x01') goto LAB_10ab85e28;
LAB_10ab85e40:
        _glBlendEquationSeparate(iVar23,iVar24);
        *(int *)(lVar37 + 0xcc) = iVar23;
        *(int *)(lVar37 + 0xd0) = iVar24;
      }
      _glBlendColor((int)plVar47[0xbc],*(undefined4 *)((long)plVar47 + 0x5e4),(int)plVar47[0xbd],
                    *(undefined4 *)((long)plVar47 + 0x5ec));
      goto LAB_10ab85e64;
    }
LAB_10ab86438:
    puVar20 = &UNK_10f68e8f2;
  }
LAB_10ab8645c:
  FUN_10a0ee06c(puVar20);
LAB_10ab86718:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10ab8671c);
  (*pcVar13)();
code_r0x00010ab84558:
  puVar19 = (undefined8 *)(lVar26 + (ulong)*(uint *)((long)puVar50 + 0xc));
  uVar54 = puVar19[1];
  uVar22 = *puVar19;
  fStack_a28 = (float)uVar54;
  fStack_a24 = (float)((ulong)uVar54 >> 0x20);
  uStack_a30 = (undefined1)uVar22;
  uStack_a2f = (undefined1)((ulong)uVar22 >> 8);
  uStack_a2e = (undefined1)((ulong)uVar22 >> 0x10);
  uStack_a2d = (undefined1)((ulong)uVar22 >> 0x18);
  fStack_a2c = (float)((ulong)uVar22 >> 0x20);
  uVar30 = (ulong)*(int *)(plVar48 + 8);
  lVar29 = *(long *)(*(long *)(lVar37 + 0x18) + 0x90);
  uVar31 = (*(long *)(*(long *)(lVar37 + 0x18) + 0x98) - lVar29 >> 2) * -0xf0f0f0f0f0f0f0f;
  if (uVar31 < uVar30 || uVar31 - uVar30 == 0) goto LAB_10ab86718;
  pfVar43 = (float *)(lVar29 + (long)*(int *)(plVar48 + 8) * 0x44);
  bVar35 = *(byte *)(pfVar43 + 0x10);
  if ((lVar29 == 0) || (bVar35 != 0xe)) {
    if (0x11 < bVar35) goto LAB_10ab86718;
  }
  else {
    bVar14 = false;
    if ((*pfVar43 == (float)uVar22) && (bVar14 = false, !NAN(pfVar43[1]) && !NAN(fStack_a2c))) {
      bVar14 = pfVar43[1] == fStack_a2c;
    }
    if (bVar14) {
      bVar14 = false;
      if ((pfVar43[2] == fStack_a28) && (bVar14 = false, !NAN(pfVar43[3]) && !NAN(fStack_a24))) {
        bVar14 = pfVar43[3] == fStack_a24;
      }
      if (bVar14) goto LAB_10ab840c8;
    }
  }
  (*(code *)(&PTR_FUN_110c530b8)[bVar35])(pfVar43);
  *(undefined1 *)(pfVar43 + 0x10) = 0x11;
  *(ulong *)(pfVar43 + 2) = CONCAT44(fStack_a24,fStack_a28);
  *(ulong *)pfVar43 =
       CONCAT44(fStack_a2c,CONCAT13(uStack_a2d,CONCAT12(uStack_a2e,CONCAT11(uStack_a2f,uStack_a30)))
               );
  *(undefined1 *)(pfVar43 + 0x10) = 0xe;
  FUN_10a303694(1);
  _glUniformMatrix2fv(uVar30,1,0,&uStack_a30);
  goto LAB_10ab840c8;
}



/* Entry: 10ab86810; end: 10ab86a8b;  */

void FUN_10ab86810(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  FUN_10aba4f68();
  plVar3 = *(long **)(param_1 + 0x20);
  plVar4 = *(long **)(param_1 + 0x28);
  bVar6 = plVar3 != plVar4;
  if ((*(byte *)(param_1 + 0x39) & 1) == 0) {
    while (bVar6) {
      plVar7 = (long *)plVar3[1];
      if ((plVar7 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_48 = plVar7, plVar7 != (long *)0x0)) {
        lStack_50 = *plVar3;
        if ((lStack_50 != 0) && (*(long *)(lStack_50 + 0x410) == 0)) {
          uStack_68 = 0;
          plStack_60 = (long *)0x0;
          uStack_78 = 0;
          uStack_70 = 0;
          FUN_10aba4090(&plStack_58,lStack_50,*(undefined1 *)(param_1 + 0x38),&uStack_68,&uStack_78)
          ;
          plVar7 = plStack_60;
          if (plStack_60 != (long *)0x0) {
            plVar2 = plStack_60 + 1;
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
              (**(code **)(*plStack_60 + 0x10))(plStack_60);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          FUN_109d1a244(&plStack_58);
          if (plStack_58 != (long *)0x0) {
            puVar1 = (ulong *)(plStack_58 + 1);
            do {
              uVar9 = *puVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar9 - 4;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((uVar9 & 0x1fffffffc) == 4) {
              do {
                uVar9 = *puVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar6) {
                  *puVar1 = uVar9 - 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (uVar9 - 1 == 0) {
                (**(code **)(*plStack_58 + 8))();
              }
            }
          }
          if (plStack_48 == (long *)0x0) goto LAB_10ab86a28;
        }
        plVar2 = plStack_48;
        plVar7 = plStack_48 + 1;
        do {
          lVar10 = *plVar7;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar6) {
            *plVar7 = lVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
LAB_10ab86a28:
      plVar3 = plVar3 + 2;
      bVar6 = plVar3 != plVar4;
    }
  }
  else {
    while (bVar6) {
      plVar7 = (long *)plVar3[1];
      if ((plVar7 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_48 = plVar7, plVar7 != (long *)0x0)) {
        lVar10 = *plVar3;
        lStack_50 = lVar10;
        if ((lVar10 != 0) &&
           (((*(long *)(lVar10 + 0x410) == 0 &&
             (lVar8 = lVar10, func_0x00010aba4da8(), (int)lVar8 != 0)) &&
            (FUN_10aba4090(&plStack_80,lVar10,*(undefined1 *)(param_1 + 0x38),param_1,param_1 + 0x10
                          ), plStack_80 != (long *)0x0)))) {
          puVar1 = (ulong *)(plStack_80 + 1);
          do {
            uVar9 = *puVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar9 - 4;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((uVar9 & 0x1fffffffc) == 4) {
            do {
              uVar9 = *puVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar9 - 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (uVar9 - 1 == 0) {
              (**(code **)(*plStack_80 + 8))();
            }
          }
        }
        plVar2 = plVar7 + 1;
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
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      plVar3 = plVar3 + 2;
      bVar6 = plVar3 != plVar4;
    }
  }
  FUN_10aba4f68(param_1);
  return;
}



/* Entry: 10ab86a8c; end: 10ab86b33;  */

void FUN_10ab86a8c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  for (puVar2 = *(undefined8 **)(param_1 + 0x28); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    *(undefined8 *)*puVar2 = 0;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  for (puVar2 = *(undefined8 **)(param_1 + 0x48); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    plVar4 = (long *)*puVar2;
    if (*plVar4 != 0) {
      lVar5 = *plVar4 * 0xd60;
      plVar3 = plVar4 + 1;
      do {
        func_0x00010abcb1a8(plVar3);
        plVar3 = plVar3 + 0x1ac;
        lVar5 = lVar5 + -0xd60;
      } while (lVar5 != 0);
    }
    *plVar4 = 0;
  }
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x90) = 0;
  return;
}



/* Entry: 10ab86b34; end: 10ab87277;  */

long * FUN_10ab86b34(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  float fVar23;
  undefined1 auStack_458 [8];
  undefined8 uStack_450;
  char cStack_439;
  long *plStack_428;
  undefined1 auStack_348 [696];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)(param_1 + 8);
  if (*(long *)(param_1 + 0x20) == 1) {
    lVar9 = *(long *)(param_1 + 0x18) + 0x10;
    FUN_10a1e52f4(lVar9,param_2);
    if ((int)lVar9 == 0) goto LAB_10ab86c34;
    plVar16 = (long *)(*(long *)(param_1 + 0x18) + 0x400);
  }
  else {
    uVar22 = *(ulong *)(param_1 + 0x10);
    if (uVar22 != 0) {
      uVar18 = *(ulong *)(param_2 + 1000);
      uVar19 = uVar22 - 1;
      if ((uVar22 & uVar19) == 0) {
        uVar21 = uVar19 & uVar18;
      }
      else {
        uVar21 = uVar18;
        if (uVar22 <= uVar18) {
          uVar21 = 0;
          if (uVar22 != 0) {
            uVar21 = uVar18 / uVar22;
          }
          uVar21 = uVar18 - uVar21 * uVar22;
        }
      }
      plVar16 = *(long **)(*plVar1 + uVar21 * 8);
      if (plVar16 != (long *)0x0) {
        for (plVar16 = (long *)*plVar16; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
          uVar8 = plVar16[1];
          if (uVar8 == uVar18) {
            uVar8 = (ulong)(plVar16 + 2);
            FUN_10a1e52f4(uVar8,param_2);
            if ((uVar8 & 1) != 0) {
              plVar16 = plVar16 + 0x80;
              goto LAB_10ab8717c;
            }
          }
          else {
            if ((uVar22 & uVar19) == 0) {
              uVar8 = uVar8 & uVar19;
            }
            else if (uVar22 <= uVar8) {
              uVar4 = 0;
              if (uVar22 != 0) {
                uVar4 = uVar8 / uVar22;
              }
              uVar8 = uVar8 - uVar4 * uVar22;
            }
            if (uVar8 != uVar21) break;
          }
        }
      }
    }
LAB_10ab86c34:
    lVar9 = *(long *)(param_1 + 0x40);
    lVar7 = *(long *)(param_1 + 0x48);
    plVar6 = (long *)0x430;
    __Znwm();
    plVar16 = plVar6 + 1;
    *plVar16 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110c53638;
    plVar12 = plVar6 + 3;
    if (lVar7 == 0) {
      *plVar12 = 0;
      plVar6[4] = 0;
      plVar6[6] = 0;
      plVar6[5] = lVar9;
    }
    else {
      plVar17 = (long *)(lVar7 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar3) {
          *plVar17 = *plVar17 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *plVar12 = 0;
      plVar6[4] = 0;
      plVar6[6] = lVar7;
      plVar6[5] = lVar9;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar3) {
          *plVar17 = *plVar17 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a1e536c(plVar6 + 7,0,param_2);
    plVar6[0x85] = 0;
    if (lVar7 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(lVar7);
    }
    if (plVar6[4] == 0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar17 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar3) {
          *plVar17 = *plVar17 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar6[3] = (long)(plVar6 + 3);
      plVar6[4] = (long)plVar6;
LAB_10ab86d44:
      do {
        lVar9 = *plVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    else if (*(long *)(plVar6[4] + 8) == -1) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar17 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar3) {
          *plVar17 = *plVar17 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar6[3] = (long)(plVar6 + 3);
      plVar6[4] = (long)plVar6;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      goto LAB_10ab86d44;
    }
    FUN_10a1e536c(auStack_458,0,param_2);
    plVar20 = *(long **)(param_1 + 0x10);
    plVar17 = plVar6;
    if (plVar20 != (long *)0x0) {
      uVar22 = (long)plVar20 - 1;
      if (((ulong)plVar20 & uVar22) == 0) {
        plVar17 = (long *)(uVar22 & (ulong)plStack_70);
      }
      else {
        plVar17 = plStack_70;
        if (plVar20 <= plStack_70) {
          uVar18 = 0;
          if (plVar20 != (long *)0x0) {
            uVar18 = (ulong)plStack_70 / (ulong)plVar20;
          }
          plVar17 = (long *)((long)plStack_70 - uVar18 * (long)plVar20);
        }
      }
      puVar10 = *(undefined8 **)(*plVar1 + (long)plVar17 * 8);
      if (puVar10 != (undefined8 *)0x0) {
        for (plVar16 = (long *)*puVar10; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
          plVar11 = (long *)plVar16[1];
          if (plVar11 == plStack_70) {
            plVar11 = plVar16 + 2;
            FUN_10a1e52f4(plVar11,auStack_458);
            if (((ulong)plVar11 & 1) != 0) goto LAB_10ab870d4;
          }
          else {
            if (((ulong)plVar20 & uVar22) == 0) {
              plVar11 = (long *)((ulong)plVar11 & uVar22);
            }
            else if (plVar20 <= plVar11) {
              uVar18 = 0;
              if (plVar20 != (long *)0x0) {
                uVar18 = (ulong)plVar11 / (ulong)plVar20;
              }
              plVar11 = (long *)((long)plVar11 - uVar18 * (long)plVar20);
            }
            if (plVar11 != plVar17) break;
          }
        }
      }
    }
    plVar16 = (long *)0x410;
    __Znwm();
    *plVar16 = 0;
    plVar16[1] = (long)plStack_70;
    FUN_10abda510(plVar16 + 2,auStack_458);
    plVar16[0x81] = (long)plVar6;
    plVar16[0x80] = (long)plVar12;
    if (plVar6 != (long *)0x0) {
      plVar12 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    fVar23 = (float)(*(long *)(param_1 + 0x20) + 1);
    if ((plVar20 == (long *)0x0) || (*(float *)(param_1 + 0x28) * (float)plVar20 < fVar23)) {
      uVar22 = 1;
      if ((long *)0x2 < plVar20) {
        uVar22 = (ulong)(((ulong)plVar20 & (long)plVar20 - 1U) != 0);
      }
      plVar12 = (long *)(uVar22 | (long)plVar20 << 1);
      plVar17 = (long *)(long)(fVar23 / *(float *)(param_1 + 0x28));
      if (plVar12 <= plVar17) {
        plVar12 = plVar17;
      }
      if ((long)plVar12 - 1U == 0) {
        plVar12 = (long *)0x2;
      }
      else if (((ulong)plVar12 & (long)plVar12 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      plVar20 = *(long **)(param_1 + 0x10);
      if (plVar20 < plVar12) {
LAB_10ab86ee8:
        if ((ulong)plVar12 >> 0x3d != 0) goto LAB_10ab87200;
        lVar9 = (long)plVar12 << 3;
        __Znwm();
        lVar7 = *plVar1;
        *plVar1 = lVar9;
        if (lVar7 != 0) {
          __ZdlPv();
        }
        plVar17 = (long *)0x0;
        *(long **)(param_1 + 0x10) = plVar12;
        do {
          *(undefined8 *)(*plVar1 + (long)plVar17 * 8) = 0;
          plVar17 = (long *)((long)plVar17 + 1);
        } while (plVar12 != plVar17);
        plVar17 = *(long **)(param_1 + 0x18);
        plVar20 = plVar12;
        if (plVar17 != (long *)0x0) {
          plVar11 = (long *)plVar17[1];
          uVar22 = (long)plVar12 - 1;
          if (((ulong)plVar12 & uVar22) == 0) {
            plVar11 = (long *)((ulong)plVar11 & uVar22);
          }
          else if (plVar12 <= plVar11) {
            uVar18 = 0;
            if (plVar12 != (long *)0x0) {
              uVar18 = (ulong)plVar11 / (ulong)plVar12;
            }
            plVar11 = (long *)((long)plVar11 - uVar18 * (long)plVar12);
          }
          *(undefined8 **)(*plVar1 + (long)plVar11 * 8) = (undefined8 *)(param_1 + 0x18);
          plVar13 = (long *)*plVar17;
          while (plVar13 != (long *)0x0) {
            plVar15 = (long *)plVar13[1];
            if (((ulong)plVar12 & uVar22) == 0) {
              plVar15 = (long *)((ulong)plVar15 & uVar22);
            }
            else if (plVar12 <= plVar15) {
              uVar18 = 0;
              if (plVar12 != (long *)0x0) {
                uVar18 = (ulong)plVar15 / (ulong)plVar12;
              }
              plVar15 = (long *)((long)plVar15 - uVar18 * (long)plVar12);
            }
            plVar14 = plVar13;
            if (plVar15 != plVar11) {
              lVar9 = *plVar1;
              if (*(long *)(lVar9 + (long)plVar15 * 8) == 0) {
                *(long **)(lVar9 + (long)plVar15 * 8) = plVar17;
                plVar11 = plVar15;
              }
              else {
                *plVar17 = *plVar13;
                *plVar13 = **(undefined8 **)(lVar9 + (long)plVar15 * 8);
                **(long **)(lVar9 + (long)plVar15 * 8) = (long)plVar13;
                plVar14 = plVar17;
              }
            }
            plVar17 = plVar14;
            plVar13 = (long *)*plVar14;
          }
        }
      }
      else if (plVar12 < plVar20) {
        plVar17 = (long *)(long)((float)*(ulong *)(param_1 + 0x20) / *(float *)(param_1 + 0x28));
        if ((plVar20 < (long *)0x3) || (((ulong)plVar20 & (long)plVar20 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((long *)0x1 < plVar17) {
          plVar17 = (long *)(1L << (-LZCOUNT((long)plVar17 + -1) & 0x3fU));
        }
        if (plVar12 <= plVar17) {
          plVar12 = plVar17;
        }
        if (plVar12 < plVar20) {
          if (plVar12 != (long *)0x0) goto LAB_10ab86ee8;
          lVar9 = *plVar1;
          *plVar1 = 0;
          if (lVar9 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(param_1 + 0x10) = 0;
          plVar20 = (long *)0x0;
        }
        else {
          plVar20 = *(long **)(param_1 + 0x10);
        }
      }
      if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
        plVar17 = (long *)((long)plVar20 - 1U & (ulong)plStack_70);
      }
      else {
        plVar17 = plStack_70;
        if (plVar20 <= plStack_70) {
          uVar22 = 0;
          if (plVar20 != (long *)0x0) {
            uVar22 = (ulong)plStack_70 / (ulong)plVar20;
          }
          plVar17 = (long *)((long)plStack_70 - uVar22 * (long)plVar20);
        }
      }
    }
    lVar9 = *plVar1;
    plVar12 = *(long **)(lVar9 + (long)plVar17 * 8);
    if (plVar12 == (long *)0x0) {
      plVar12 = (long *)(param_1 + 0x18);
      *plVar16 = *plVar12;
      *plVar12 = (long)plVar16;
      *(long **)(lVar9 + (long)plVar17 * 8) = plVar12;
      if (*plVar16 != 0) {
        plVar12 = *(long **)(*plVar16 + 8);
        if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
          plVar12 = (long *)((ulong)plVar12 & (long)plVar20 - 1U);
        }
        else if (plVar20 <= plVar12) {
          uVar22 = 0;
          if (plVar20 != (long *)0x0) {
            uVar22 = (ulong)plVar12 / (ulong)plVar20;
          }
          plVar12 = (long *)((long)plVar12 - uVar22 * (long)plVar20);
        }
        *(long **)(*plVar1 + (long)plVar12 * 8) = plVar16;
      }
    }
    else {
      *plVar16 = *plVar12;
      *plVar12 = (long)plVar16;
    }
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
LAB_10ab870d4:
    FUN_10a1902ec(auStack_88,0);
    func_0x00010a19032c(auStack_90,0);
    FUN_10a19036c(auStack_348);
    if (plStack_428 != (long *)0x0) {
      plVar1 = plStack_428 + 1;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_428 + 0x10))(plStack_428);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_428);
      }
    }
    if (cStack_439 < '\0') {
      __ZdlPv(uStack_450);
    }
    plVar16 = plVar16 + 0x80;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
LAB_10ab8717c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar16;
  }
  ___stack_chk_fail();
LAB_10ab87200:
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab87208);
  (*pcVar5)();
}



/* Entry: 10ab87278; end: 10ab87437;  */

void FUN_10ab87278(long param_1,long *param_2)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plStack_58;
  
  if ((*(char *)(param_1 + 0x3a) == '\x01') &&
     (FUN_10aba4090(&plStack_58,*param_2,*(undefined1 *)(param_1 + 0x38),param_1,param_1 + 0x10),
     plStack_58 != (long *)0x0)) {
    puVar1 = (ulong *)(plStack_58 + 1);
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
        (**(code **)(*plStack_58 + 8))();
      }
    }
  }
  if (*(char *)(param_1 + 0x39) == '\x01') {
    iVar6 = (int)*param_2;
    func_0x00010aba4da8();
    if (iVar6 != 0) {
      lVar14 = *param_2;
      if (*(long *)(lVar14 + 0x410) != 0) {
        if (((uint)*(undefined8 *)(*(long *)(lVar14 + 0x410) + 0x10) >> 1 & 1) != 0) {
          return;
        }
        lVar14 = *param_2;
      }
      lVar11 = param_2[1];
      if (lVar11 != 0) {
        plVar15 = (long *)(lVar11 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *plVar15 = *plVar15 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar15 = *(long **)(param_1 + 0x28);
      if (plVar15 < *(long **)(param_1 + 0x30)) {
        *plVar15 = lVar14;
        plVar15[1] = lVar11;
        plVar15 = plVar15 + 2;
      }
      else {
        lVar12 = *(long *)(param_1 + 0x20);
        lVar13 = (long)plVar15 - lVar12;
        uVar9 = (lVar13 >> 4) + 1;
        if (uVar9 >> 0x3c != 0) {
          FUN_10abd4e00();
LAB_10ab8741c:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab87420);
          (*pcVar5)();
        }
        uVar8 = (long)*(long **)(param_1 + 0x30) - lVar12;
        uVar10 = (long)uVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < uVar8) {
          uVar10 = 0xfffffffffffffff;
        }
        if (uVar10 >> 0x3c != 0) {
          func_0x000109ffded8();
          goto LAB_10ab8741c;
        }
        lVar7 = uVar10 << 4;
        __Znwm();
        plVar2 = (long *)(lVar7 + lVar13);
        *plVar2 = lVar14;
        plVar2[1] = lVar11;
        plVar15 = plVar2 + 2;
        _memcpy(plVar2 + (lVar13 >> 4) * -2,lVar12,lVar13);
        *(long **)(param_1 + 0x20) = plVar2 + (lVar13 >> 4) * -2;
        *(long **)(param_1 + 0x28) = plVar15;
        *(ulong *)(param_1 + 0x30) = lVar7 + uVar10 * 0x10;
        if (lVar12 != 0) {
          __ZdlPv(lVar12);
        }
      }
      *(long **)(param_1 + 0x28) = plVar15;
    }
  }
  return;
}



/* Entry: 10ab87438; end: 10ab87533;  */

undefined8 FUN_10ab87438(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x11d8);
  FUN_10ab87534();
  return *puVar1;
}



/* Entry: 10ab87534; end: 10ab87b9b;  */

/* WARNING: Possible PIC construction at 0x00010aba5518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010aba551c) */
/* WARNING: Removing unreachable block (ram,0x00010aba559c) */
/* WARNING: Removing unreachable block (ram,0x00010aba5534) */
/* WARNING: Removing unreachable block (ram,0x00010aba5548) */
/* WARNING: Removing unreachable block (ram,0x00010aba554c) */
/* WARNING: Removing unreachable block (ram,0x00010aba5554) */
/* WARNING: Removing unreachable block (ram,0x00010aba555c) */
/* WARNING: Removing unreachable block (ram,0x00010aba5568) */
/* WARNING: Removing unreachable block (ram,0x00010aba5570) */
/* WARNING: Removing unreachable block (ram,0x00010aba5578) */
/* WARNING: Removing unreachable block (ram,0x00010aba557c) */
/* WARNING: Removing unreachable block (ram,0x00010aba5588) */

long * FUN_10ab87534(long param_1,long *param_2)

{
  long *plVar1;
  long ****pppplVar2;
  ulong *puVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  long *****ppppplVar9;
  long *plVar10;
  undefined *puVar11;
  long lVar12;
  long ***ppplVar13;
  ulong uVar14;
  long *plVar15;
  int iVar16;
  long ***ppplStack_b0;
  long *plStack_a8;
  long ***ppplStack_98;
  long ****pppplStack_90;
  long ****pppplStack_88;
  long ****pppplStack_80;
  long *plStack_78;
  long ***ppplStack_70;
  long *plStack_68;
  long ****pppplStack_60;
  long *plStack_58;
  long lStack_50;
  long ***ppplStack_48;
  
  if ((*(long *)(*param_2 + 0x410) != 0) &&
     (((uint)*(undefined8 *)(*(long *)(*param_2 + 0x410) + 0x10) >> 1 & 1) != 0)) {
    plVar15 = param_2;
    FUN_10ad055a0();
    plVar10 = (long *)*param_2;
    if (((ulong)plVar15 & 1) == 0) {
      if (plVar10[0x82] != 0) {
        func_0x0001092af8bc(plVar10 + 0x82);
        lVar12 = plVar10[0x82];
        if ((*(byte *)(lVar12 + 0xa8) & 1) != 0) {
          return (long *)(lVar12 + 0x98);
        }
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10aba55e8);
        (*pcVar7)();
      }
      puVar11 = &UNK_10f6984b5;
      FUN_10a00946c();
    }
    else {
      FUN_10aba55a8();
      if (*plVar10 != 0) {
        return plVar10;
      }
      puVar11 = (undefined *)*param_2;
    }
    plVar15 = *(long **)(puVar11 + 0x410);
    if (plVar15 != (long *)0x0) {
      puVar3 = (ulong *)(plVar15 + 1);
      do {
        uVar14 = *puVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar6) {
          *puVar3 = uVar14 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar14 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plVar15 + 8))();
        }
      }
    }
    *(undefined8 *)(puVar11 + 0x410) = 0;
    return plVar15;
  }
  FUN_10aba4f68(param_1);
  if (*(char *)(param_1 + 0x39) == '\x01') {
    iVar16 = (int)*param_2;
    func_0x00010aba4da8();
    ppplStack_70 = (long ***)0x0;
    plStack_68 = (long *)0x0;
    if (iVar16 != 0) {
      plStack_a8 = (long *)0x0;
      ppplStack_b0 = (long ***)0x0;
      if (*(int *)(param_1 + 0x3c) < 1) {
        plVar15 = *(long **)(param_1 + 0x20);
        plVar10 = *(long **)(param_1 + 0x28);
        if (plVar15 != plVar10) {
          uVar4 = *(undefined1 *)(param_1 + 0x38);
LAB_10ab875b4:
          plVar8 = (long *)plVar15[1];
          if ((plVar8 == (long *)0x0) ||
             (__ZNSt3__119__shared_weak_count4lockEv(), plStack_58 = plVar8, plVar8 == (long *)0x0))
          goto LAB_10ab8761c;
          pppplStack_60 = (long ****)*plVar15;
          if ((pppplStack_60 == (long ****)0x0) ||
             ((pppplStack_60 == (long ****)*param_2 || (pppplStack_60[0x82] != (long ***)0x0)))) {
            plVar1 = plVar8 + 1;
            do {
              lVar12 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
            goto LAB_10ab8761c;
          }
          FUN_10aba4090(&pppplStack_90,pppplStack_60,uVar4,param_1,param_1 + 0x10);
          if (pppplStack_90 != (long ****)0x0) {
            pppplVar2 = pppplStack_90 + 1;
            do {
              ppplVar13 = *pppplVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppplVar2,0x10);
              if (bVar6) {
                *pppplVar2 = (long ***)((long)ppplVar13 - 4);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (((ulong)ppplVar13 & 0x1fffffffc) == 4) {
              do {
                ppplVar13 = *pppplVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(pppplVar2,0x10);
                if (bVar6) {
                  *pppplVar2 = (long ***)((long)ppplVar13 - 1U);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if ((long ***)((long)ppplVar13 - 1U) == (long ***)0x0) {
                (*(code *)(*pppplStack_90)[1])();
              }
            }
          }
          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
          plStack_a8 = plStack_58;
          ppplStack_b0 = (long ***)pppplStack_60;
        }
      }
LAB_10ab87628:
      plStack_68 = plStack_a8;
      ppplStack_70 = ppplStack_b0;
    }
  }
  else {
    ppplStack_70 = (long ***)0x0;
    plStack_68 = (long *)0x0;
  }
  pppplStack_60 = (long ****)0x0;
  plStack_58 = (long *)0x0;
  pppplStack_90 = (long ****)0x0;
  pppplStack_88 = (long ****)0x0;
  FUN_10aba4090(&plStack_78,*param_2,*(undefined1 *)(param_1 + 0x38),&pppplStack_60,&pppplStack_90);
  plVar15 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar10 = plStack_58 + 1;
    do {
      lVar12 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  pppplStack_90 = (long ****)0x0;
  pppplStack_88 = (long ****)0x0;
  pppplStack_80 = (long ****)0x0;
  ppppplVar9 = &pppplStack_90;
  FUN_10abd4e14(ppppplVar9,&plStack_78);
  pppplStack_88 = (long ****)ppppplVar9;
  if (0 < *(int *)(param_1 + 0x3c)) {
    plVar10 = *(long **)(param_1 + 0x28);
    for (plVar15 = *(long **)(param_1 + 0x20); plVar15 != plVar10; plVar15 = plVar15 + 2) {
      plVar8 = (long *)plVar15[1];
      if ((plVar8 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_58 = plVar8, plVar8 != (long *)0x0)) {
        pppplStack_60 = (long ****)*plVar15;
        iVar16 = 3;
        if ((pppplStack_60 != (long ****)0x0) && (pppplStack_60 != (long ****)ppplStack_70)) {
          if (pppplStack_60[0x82] == (long ***)0x0) {
            FUN_10aba4090(&ppplStack_48,pppplStack_60,*(undefined1 *)(param_1 + 0x38),param_1,
                          param_1 + 0x10);
            if (pppplStack_88 < pppplStack_80) {
              if ((long ****)ppplStack_48 != (long ****)0x0) {
                pppplVar2 = (long ****)(ppplStack_48 + 1);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(pppplVar2,0x10);
                  if (bVar6) {
                    *pppplVar2 = (long ***)((long)*pppplVar2 + 4);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              ppppplVar9 = (long *****)(pppplStack_88 + 1);
              *pppplStack_88 = ppplStack_48;
            }
            else {
              ppppplVar9 = &pppplStack_90;
              FUN_10abd4e14(ppppplVar9,&ppplStack_48);
            }
            pppplStack_88 = (long ****)ppppplVar9;
            if ((long ****)ppplStack_48 != (long ****)0x0) {
              pppplVar2 = (long ****)(ppplStack_48 + 1);
              do {
                ppplVar13 = *pppplVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(pppplVar2,0x10);
                if (bVar6) {
                  *pppplVar2 = (long ***)((long)ppplVar13 + -4);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (((ulong)ppplVar13 & 0x1fffffffc) == 4) {
                do {
                  ppplVar13 = *pppplVar2;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(pppplVar2,0x10);
                  if (bVar6) {
                    *pppplVar2 = (long ***)((long)ppplVar13 + -1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if ((long ***)((long)ppplVar13 + -1) == (long ***)0x0) {
                  (*(code *)(*ppplStack_48)[1])();
                }
              }
            }
            if (plStack_58 == (long *)0x0) break;
            iVar16 = 2;
          }
          else {
            iVar16 = 0;
          }
        }
        plVar1 = plStack_58;
        plVar8 = plStack_58 + 1;
        do {
          lVar12 = *plVar8;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
        if ((iVar16 != 3) && (iVar16 != 0)) break;
      }
    }
  }
  pppplVar2 = pppplStack_88;
  ppppplVar9 = (long *****)pppplStack_90;
  if (pppplStack_90 == pppplStack_88) {
    FUN_109d1b124(&ppplStack_98);
  }
  else {
    ppplStack_48 = (long ***)((long)pppplStack_88 - (long)pppplStack_90 >> 3);
    func_0x0001098b7954(&pppplStack_60,&ppplStack_48);
    plVar15 = (long *)(lStack_50 + 8);
    if (*plVar15 != 0) {
      func_0x0001092b4274(plVar15);
    }
    *plVar15 = (long)plStack_58;
    plStack_58 = (long *)0x0;
    lVar12 = 0;
    do {
      func_0x0001098b799c(lStack_50,lVar12,ppppplVar9);
      ppppplVar9 = ppppplVar9 + 1;
      lVar12 = lVar12 + 1;
    } while (ppppplVar9 != (long *****)pppplVar2);
    ppplStack_98 = (long ***)pppplStack_60;
    pppplStack_60 = (long ****)0x0;
    if ((plStack_58 != (long *)0x0) &&
       (func_0x0001092b4274(&plStack_58), pppplStack_60 != (long ****)0x0)) {
      pppplVar2 = pppplStack_60 + 1;
      do {
        ppplVar13 = *pppplVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppplVar2,0x10);
        if (bVar6) {
          *pppplVar2 = (long ***)((long)ppplVar13 - 4);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (((ulong)ppplVar13 & 0x1fffffffc) == 4) {
        do {
          ppplVar13 = *pppplVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppplVar2,0x10);
          if (bVar6) {
            *pppplVar2 = (long ***)((long)ppplVar13 - 1U);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((long ***)((long)ppplVar13 - 1U) == (long ***)0x0) {
          (*(code *)(*pppplStack_60)[1])();
        }
      }
    }
  }
  FUN_109d1a244(&ppplStack_98);
  if ((long ****)ppplStack_98 != (long ****)0x0) {
    pppplVar2 = (long ****)(ppplStack_98 + 1);
    do {
      ppplVar13 = *pppplVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppplVar2,0x10);
      if (bVar6) {
        *pppplVar2 = (long ***)((long)ppplVar13 - 4);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((ulong)ppplVar13 & 0x1fffffffc) == 4) {
      do {
        ppplVar13 = *pppplVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppplVar2,0x10);
        if (bVar6) {
          *pppplVar2 = (long ***)((long)ppplVar13 - 1U);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((long ***)((long)ppplVar13 - 1U) == (long ***)0x0) {
        (*(code *)(*ppplStack_98)[1])();
      }
    }
  }
  FUN_10aba54d0(param_2);
  pppplStack_60 = (long ****)&pppplStack_90;
  FUN_10a2325bc(&pppplStack_60);
  if (plStack_78 != (long *)0x0) {
    puVar3 = (ulong *)(plStack_78 + 1);
    do {
      uVar14 = *puVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar6) {
        *puVar3 = uVar14 - 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((uVar14 & 0x1fffffffc) == 4) {
      do {
        uVar14 = *puVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar6) {
          *puVar3 = uVar14 - 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (uVar14 - 1 == 0) {
        (**(code **)(*plStack_78 + 8))();
      }
    }
  }
  plVar15 = plStack_68;
  if ((long ****)ppplStack_70 != (long ****)0x0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
  }
  if (plStack_68 != (long *)0x0) {
    plVar10 = plStack_68 + 1;
    do {
      lVar12 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  FUN_10aba4f68(param_1);
  return param_2;
LAB_10ab8761c:
  plVar15 = plVar15 + 2;
  if (plVar15 == plVar10) goto LAB_10ab87628;
  goto LAB_10ab875b4;
}



/* Entry: 10ab87b9c; end: 10ab87e53;  */

undefined8 *
FUN_10ab87b9c(long param_1,long param_2,int *param_3,long param_4,long param_5,long param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined3 uStack_124;
  char cStack_121;
  undefined4 uStack_120;
  undefined4 uStack_118;
  undefined3 uStack_114;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  plVar8 = (long *)(param_1 + 0x40);
  lVar11 = *plVar8;
  uVar13 = *(ulong *)(param_1 + 0x58);
  puVar6 = *(undefined8 **)(param_1 + 0x48);
  uVar14 = ((long)puVar6 - lVar11 >> 3) * -0x6e25006e25006e25;
  if (uVar13 == uVar14) {
    if (puVar6 < *(undefined8 **)(param_1 + 0x50)) {
      FUN_10abcbe44(puVar6,param_2);
      puVar6 = puVar6 + 0x253;
    }
    else {
      uVar13 = uVar13 + 1;
      if (0xdc4a00dc4a00d < uVar13) {
        FUN_10abcc0a4();
LAB_10ab87e50:
        func_0x000109ffded8();
        iVar9 = *param_3;
        if (iVar9 != 0) {
          puVar15 = *(undefined8 **)(param_3 + 2);
          puVar3 = *(undefined8 **)(param_3 + 4);
          puStack_f8 = (undefined8 *)0x0;
          puStack_f0 = (undefined8 *)0x0;
          uStack_e8 = 0;
          puVar6[1] = 0;
          *puVar6 = 0;
          puVar6[3] = 0;
          puVar6[2] = 0;
          puVar6[5] = 0;
          puVar6[4] = 0;
          puStack_110 = &uStack_108;
          uStack_108 = 0;
          lStack_100 = 0;
          if (puVar15 != puVar3) {
            uVar13 = 0;
            uVar14 = ((long)puVar3 - (long)puVar15 >> 3) * -0x5555555555555555;
            uVar10 = 3;
            if (iVar9 != 2) {
              uVar10 = 6;
            }
            uVar1 = uVar10 - 2;
            if (uVar14 < uVar10 || uVar14 - uVar10 == 0) {
              uVar1 = uVar10;
            }
            do {
              if (uVar13 < uVar1) {
                puVar16 = (undefined8 *)puVar15[1];
                if ((undefined8 *)0x7ffffffffffffff7 < puVar16) {
                  func_0x000109ffde50();
                  goto LAB_10ab88314;
                }
                uVar17 = *puVar15;
                if (puVar16 < (undefined8 *)0x17) {
                  uStack_130 = (undefined8 *)CONCAT17((char)puVar16,(undefined7)uStack_130);
                  puVar7 = &uStack_140;
                  if (puVar16 != (undefined8 *)0x0) goto LAB_10ab87f98;
                }
                else {
                  puVar2 = (undefined8 *)0x19;
                  if (((ulong)puVar16 | 7) != 0x17) {
                    puVar2 = (undefined8 *)(((ulong)puVar16 | 7) + 1);
                  }
                  puVar7 = puVar2;
                  __Znwm();
                  uStack_130 = (undefined8 *)((ulong)puVar2 | 0x8000000000000000);
                  uStack_140 = (undefined8 **)puVar7;
                  puStack_138 = puVar16;
LAB_10ab87f98:
                  _memmove(puVar7,uVar17,puVar16);
                }
                *(undefined1 *)((long)puVar7 + (long)puVar16) = 0;
                lVar11 = param_6;
                FUN_10ab8b950(param_6,&uStack_140);
                func_0x00010a1759fc(&puStack_f8,lVar11);
                if ((long)uStack_130 < 0) {
                  __ZdlPv(uStack_140);
                }
                *(undefined4 *)((long)puVar6 + uVar13 * 4) = *(undefined4 *)(puVar15 + 2);
              }
              else {
                puVar16 = (undefined8 *)puVar15[1];
                if ((undefined8 *)0x7ffffffffffffff7 < puVar16) {
                  func_0x000109ffde50();
                  goto LAB_10ab88314;
                }
                uVar17 = *puVar15;
                if (puVar16 < (undefined8 *)0x17) {
                  uStack_130 = (undefined8 *)CONCAT17((char)puVar16,(undefined7)uStack_130);
                  puVar7 = &uStack_140;
                  if (puVar16 != (undefined8 *)0x0) goto LAB_10ab8800c;
                }
                else {
                  puVar2 = (undefined8 *)0x19;
                  if (((ulong)puVar16 | 7) != 0x17) {
                    puVar2 = (undefined8 *)(((ulong)puVar16 | 7) + 1);
                  }
                  puVar7 = puVar2;
                  __Znwm();
                  uStack_130 = (undefined8 *)((ulong)puVar2 | 0x8000000000000000);
                  uStack_140 = (undefined8 **)puVar7;
                  puStack_138 = puVar16;
LAB_10ab8800c:
                  _memmove(puVar7,uVar17,puVar16);
                }
                *(undefined1 *)((long)puVar7 + (long)puVar16) = 0;
                puVar7 = uStack_130;
                puVar2 = puStack_138;
                puVar16 = uStack_140;
                uStack_118 = (undefined4)uStack_130;
                uStack_114 = (undefined3)((ulong)uStack_130 >> 0x20);
                cVar4 = uStack_130._7_1_;
                uVar18 = *(undefined4 *)(puVar15 + 2);
                uStack_140 = (undefined8 **)
                             CONCAT44(uStack_140._4_4_,*(undefined4 *)((long)puVar15 + 0x14));
                if ((long)uStack_130 < 0) {
                  func_0x000107c3192c(&puStack_138,puVar16);
                }
                else {
                  puStack_138 = puVar16;
                  uStack_130 = puVar2;
                  uStack_124 = uStack_114;
                  cStack_121 = cVar4;
                  uStack_128 = uStack_118;
                }
                uStack_120 = uVar18;
                FUN_10a1987cc(&puStack_110,&uStack_140);
                if (cStack_121 < '\0') {
                  __ZdlPv(puStack_138);
                }
                if ((long)puVar7 < 0) {
                  __ZdlPv(puVar16);
                }
              }
              uVar13 = uVar13 + 1;
              puVar15 = puVar15 + 3;
            } while (puVar15 != puVar3);
            if (lStack_100 != 0) {
              FUN_10abf6518(param_6,&puStack_110);
              if (*(long *)(param_6 + 0xd0) != 0) {
                FUN_10abf67ac(param_2,param_6,&puStack_f8,puVar6,1,iVar9 == 2);
              }
              if (*(long *)(param_6 + 0xe0) != 0) {
                FUN_10abf67ac(param_2,param_6,&puStack_f8,puVar6,0,iVar9 == 2);
              }
            }
          }
          if (puStack_f8 != puStack_f0) {
            uVar13 = 0;
            uVar14 = 3;
            if (iVar9 != 2) {
              uVar14 = 6;
            }
            do {
              if (uVar13 < (ulong)((long)puStack_f0 - (long)puStack_f8 >> 4)) {
                uVar10 = *(uint *)(param_4 + 0x538);
                if (0xf < uVar10) {
LAB_10ab88314:
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab88318);
                  (*pcVar5)();
                }
                puVar6 = puStack_f8 + uVar13 * 2;
              }
              else if ((puStack_f0 == puStack_f8) ||
                      (uVar10 = *(uint *)(param_4 + 0x538), puVar6 = puStack_f8, 0xf < uVar10))
              goto LAB_10ab88314;
              *(undefined8 *)(param_5 + 0x30 + (ulong)uVar10 * 8) = *puVar6;
              FUN_10ab7f008(param_2 + 0x1250);
              if (0xf < *(uint *)(param_4 + 0x538)) goto LAB_10ab88314;
              *(undefined4 *)(param_4 + 0x53c + (ulong)*(uint *)(param_4 + 0x538) * 4) = 0x18;
              lVar11 = *(long *)(param_2 + 0xb20);
              if ((ulong)(*(long *)(param_2 + 0xb28) - lVar11 >> 5) <= uVar13) goto LAB_10ab88314;
              lVar12 = *(long *)(*(long *)(param_5 + 0xcb8) + 0x18);
              FUN_10ab91b60(lVar12);
              lVar12 = lVar12 + 0x18;
              func_0x00010abd9058(lVar12,*(undefined8 *)(lVar11 + uVar13 * 0x20 + 0x18));
              if (lVar12 != 0) {
                uStack_140 = (undefined8 **)
                             CONCAT44(*(undefined4 *)(param_4 + 0x538),
                                      *(undefined4 *)(lVar12 + 0x40));
                puStack_138 = (undefined8 *)0x5;
                uStack_130 = (undefined8 *)CONCAT35(uStack_130._5_3_,3);
                func_0x00010ab8e8f8(param_2 + 0xf08,&uStack_140);
                *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
              }
              if (iVar9 == 2) {
                lVar11 = *(long *)(param_2 + 0xb38);
                if ((ulong)(*(long *)(param_2 + 0xb40) - lVar11 >> 5) <= uVar13) goto LAB_10ab88314;
                lVar12 = *(long *)(*(long *)(param_5 + 0xcb8) + 0x18);
                FUN_10ab91b60(lVar12);
                lVar12 = lVar12 + 0x18;
                func_0x00010abd9058(lVar12,*(undefined8 *)(lVar11 + uVar13 * 0x20 + 0x18));
                if (lVar12 != 0) {
                  uStack_140 = (undefined8 **)
                               CONCAT44(*(undefined4 *)(param_4 + 0x538),
                                        *(undefined4 *)(lVar12 + 0x40));
                  puStack_138 = (undefined8 *)0xc00000005;
                  uStack_130 = (undefined8 *)CONCAT35(uStack_130._5_3_,3);
                  func_0x00010ab8e8f8(param_2 + 0xf08,&uStack_140);
                  *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
                }
              }
              *(int *)(param_4 + 0x538) = *(int *)(param_4 + 0x538) + 1;
              uVar13 = uVar13 + 1;
            } while (uVar13 != uVar14);
          }
          func_0x00010a19877c(&puStack_110,uStack_108);
          uStack_140 = &puStack_f8;
          puVar6 = &uStack_140;
          FUN_10a18d9ec(puVar6);
        }
        return puVar6;
      }
      lVar12 = (long)*(undefined8 **)(param_1 + 0x50) - lVar11 >> 3;
      uVar14 = lVar12 * 0x23b5ff23b5ff23b6;
      if (uVar14 < uVar13 || uVar14 - uVar13 == 0) {
        uVar14 = uVar13;
      }
      if (0x6e25006e25005 < (ulong)(lVar12 * -0x6e25006e25006e25)) {
        uVar14 = 0xdc4a00dc4a00d;
      }
      plStack_48 = plVar8;
      if (uVar14 == 0) {
        lVar12 = 0;
      }
      else {
        if (0xdc4a00dc4a00d < uVar14) goto LAB_10ab87e50;
        lVar12 = uVar14 * 0x1298;
        __Znwm();
      }
      lVar11 = lVar12 + ((long)puVar6 - lVar11);
      FUN_10abcbe44(lVar11,param_2);
      puVar6 = (undefined8 *)(lVar11 + 0x1298);
      lVar11 = lVar11 + (*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x48));
      FUN_10abcc0b8(*(long *)(param_1 + 0x40),*(long *)(param_1 + 0x48),lVar11);
      uStack_68 = *(undefined8 *)(param_1 + 0x40);
      *(long *)(param_1 + 0x40) = lVar11;
      *(undefined8 **)(param_1 + 0x48) = puVar6;
      uStack_50 = *(undefined8 *)(param_1 + 0x50);
      *(ulong *)(param_1 + 0x50) = lVar12 + uVar14 * 0x1298;
      uStack_60 = uStack_68;
      uStack_58 = uStack_68;
      FUN_10abcc1a0(&uStack_68);
    }
    *(undefined8 **)(param_1 + 0x48) = puVar6;
    puVar15 = puVar6 + -0x253;
    lVar11 = *(long *)(param_1 + 0x58);
    *(int *)(puVar6 + -1) = (int)lVar11;
  }
  else {
    if (uVar14 < uVar13 || uVar14 - uVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab87e4c);
      (*pcVar5)();
    }
    puVar15 = (undefined8 *)(lVar11 + uVar13 * 0x1298);
    puVar15[0xb8] = param_2;
    *puVar15 = 0;
    if (*(uint *)(puVar15 + 0xa7) != 0) {
      lVar11 = (ulong)*(uint *)(puVar15 + 0xa7) << 2;
      _bzero((long)puVar15 + 0x53c,lVar11);
      _bzero((long)puVar15 + 0x57c,lVar11);
    }
    *(undefined4 *)(puVar15 + 0xa7) = 0;
    *(undefined4 *)(puVar15 + 1) = 0;
    puVar15[0x46] = 0;
    puVar15[0x5b] = 0;
    puVar15[0x58] = 0;
    puVar15[0x57] = 0;
    puVar15[0x5a] = 0;
    puVar15[0x59] = 0;
    *(undefined4 *)(puVar15 + 0x5c) = 1;
    *(undefined2 *)((long)puVar15 + 0x2e4) = 0;
    puVar15[0x5d] = 0x700000000;
    puVar15[0x5f] = 0;
    puVar15[0x5e] = 0;
    *(undefined4 *)(puVar15 + 0x60) = 7;
    *(undefined4 *)((long)puVar15 + 0x314) = 0;
    *(undefined8 *)((long)puVar15 + 0x30c) = 0;
    *(undefined8 *)((long)puVar15 + 0x304) = 0;
    puVar15[99] = 7;
    *(undefined4 *)(puVar15 + 100) = 0;
    *(undefined1 *)(puVar15 + 0xb9) = 0;
    puVar15[0x86] = 0;
    puVar15[0x85] = 0;
    puVar15[0x8e] = 0;
    puVar15[0x8d] = 0;
    puVar15[0x251] = param_2;
    *(undefined4 *)(puVar15 + 0xba) = 0x3f800000;
    *(undefined1 *)((long)puVar15 + 0x5d4) = 0;
    puVar15[0xc1] = 0;
    puVar15[0xc0] = 0;
    puVar15[0xc3] = 0;
    puVar15[0xc2] = 0;
    puVar15[0xc5] = 0;
    puVar15[0xc4] = 0;
    puVar15[199] = 0;
    puVar15[0xc6] = 0;
    puVar15[0xc9] = 0;
    puVar15[200] = 0;
    puVar15[0xcb] = 0;
    puVar15[0xca] = 0;
    puVar15[0xcd] = 0;
    puVar15[0xcc] = 0;
    puVar15[0xcf] = 0;
    puVar15[0xce] = 0;
    puVar15[0xbc] = 0;
    puVar15[0xbb] = 0;
    puVar15[0xbe] = 0;
    puVar15[0xbd] = 0;
    *(undefined4 *)(puVar15 + 0xbf) = 0;
    iVar9 = *(int *)(puVar15 + 0xd0);
    if (iVar9 != 0) {
      puVar6 = puVar15 + 0xd1;
      do {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0x100000000;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        *(undefined8 *)((long)puVar6 + 0x2e) = 0;
        *(undefined2 *)((long)puVar6 + 0x36) = 1000;
        *(undefined4 *)(puVar6 + 0xb) = 0x3f800000;
        puVar6[8] = 0;
        puVar6[7] = 0x3f800000;
        puVar6[10] = 0;
        puVar6[9] = 0x3f800000;
        puVar6 = puVar6 + 0xc;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    *(undefined4 *)(puVar15 + 0xd0) = 0;
    lVar11 = *(long *)(param_1 + 0x58);
    *(int *)(puVar15 + 0x252) = (int)lVar11;
  }
  *(long *)(param_1 + 0x58) = lVar11 + 1;
  return puVar15;
}



/* Entry: 10ab87e54; end: 10ab88393;  */

void FUN_10ab87e54(undefined8 *param_1,long param_2,int *param_3,long param_4,long param_5,
                  long param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined3 uStack_b4;
  char cStack_b1;
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  undefined3 uStack_a4;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  
  iVar4 = *param_3;
  if (iVar4 != 0) {
    puVar8 = *(undefined8 **)(param_3 + 2);
    puVar3 = *(undefined8 **)(param_3 + 4);
    puStack_88 = (undefined8 *)0x0;
    puStack_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    puStack_a0 = &uStack_98;
    uStack_98 = 0;
    lStack_90 = 0;
    if (puVar8 != puVar3) {
      uVar12 = 0;
      uVar9 = ((long)puVar3 - (long)puVar8 >> 3) * -0x5555555555555555;
      uVar10 = 3;
      if (iVar4 != 2) {
        uVar10 = 6;
      }
      uVar1 = uVar10 - 2;
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        uVar1 = uVar10;
      }
      do {
        if (uVar12 < uVar1) {
          puVar13 = (undefined8 *)puVar8[1];
          if ((undefined8 *)0x7ffffffffffffff7 < puVar13) {
            func_0x000109ffde50();
            goto LAB_10ab88314;
          }
          uVar15 = *puVar8;
          if (puVar13 < (undefined8 *)0x17) {
            uStack_c0 = (undefined8 *)CONCAT17((char)puVar13,(undefined7)uStack_c0);
            puVar7 = &uStack_d0;
            if (puVar13 != (undefined8 *)0x0) goto LAB_10ab87f98;
          }
          else {
            puVar2 = (undefined8 *)0x19;
            if (((ulong)puVar13 | 7) != 0x17) {
              puVar2 = (undefined8 *)(((ulong)puVar13 | 7) + 1);
            }
            puVar7 = puVar2;
            __Znwm();
            uStack_c0 = (undefined8 *)((ulong)puVar2 | 0x8000000000000000);
            uStack_d0 = (undefined8 **)puVar7;
            puStack_c8 = puVar13;
LAB_10ab87f98:
            _memmove(puVar7,uVar15,puVar13);
          }
          *(undefined1 *)((long)puVar7 + (long)puVar13) = 0;
          lVar14 = param_6;
          FUN_10ab8b950(param_6,&uStack_d0);
          func_0x00010a1759fc(&puStack_88,lVar14);
          if ((long)uStack_c0 < 0) {
            __ZdlPv(uStack_d0);
          }
          *(undefined4 *)((long)param_1 + uVar12 * 4) = *(undefined4 *)(puVar8 + 2);
        }
        else {
          puVar13 = (undefined8 *)puVar8[1];
          if ((undefined8 *)0x7ffffffffffffff7 < puVar13) {
            func_0x000109ffde50();
            goto LAB_10ab88314;
          }
          uVar15 = *puVar8;
          if (puVar13 < (undefined8 *)0x17) {
            uStack_c0 = (undefined8 *)CONCAT17((char)puVar13,(undefined7)uStack_c0);
            puVar7 = &uStack_d0;
            if (puVar13 != (undefined8 *)0x0) goto LAB_10ab8800c;
          }
          else {
            puVar2 = (undefined8 *)0x19;
            if (((ulong)puVar13 | 7) != 0x17) {
              puVar2 = (undefined8 *)(((ulong)puVar13 | 7) + 1);
            }
            puVar7 = puVar2;
            __Znwm();
            uStack_c0 = (undefined8 *)((ulong)puVar2 | 0x8000000000000000);
            uStack_d0 = (undefined8 **)puVar7;
            puStack_c8 = puVar13;
LAB_10ab8800c:
            _memmove(puVar7,uVar15,puVar13);
          }
          *(undefined1 *)((long)puVar7 + (long)puVar13) = 0;
          puVar7 = uStack_c0;
          puVar2 = puStack_c8;
          puVar13 = uStack_d0;
          uStack_a8 = (undefined4)uStack_c0;
          uStack_a4 = (undefined3)((ulong)uStack_c0 >> 0x20);
          cVar5 = uStack_c0._7_1_;
          uVar16 = *(undefined4 *)(puVar8 + 2);
          uStack_d0 = (undefined8 **)CONCAT44(uStack_d0._4_4_,*(undefined4 *)((long)puVar8 + 0x14));
          if ((long)uStack_c0 < 0) {
            func_0x000107c3192c(&puStack_c8,puVar13);
          }
          else {
            puStack_c8 = puVar13;
            uStack_c0 = puVar2;
            uStack_b4 = uStack_a4;
            cStack_b1 = cVar5;
            uStack_b8 = uStack_a8;
          }
          uStack_b0 = uVar16;
          FUN_10a1987cc(&puStack_a0,&uStack_d0);
          if (cStack_b1 < '\0') {
            __ZdlPv(puStack_c8);
          }
          if ((long)puVar7 < 0) {
            __ZdlPv(puVar13);
          }
        }
        uVar12 = uVar12 + 1;
        puVar8 = puVar8 + 3;
      } while (puVar8 != puVar3);
      if (lStack_90 != 0) {
        FUN_10abf6518(param_6,&puStack_a0);
        if (*(long *)(param_6 + 0xd0) != 0) {
          FUN_10abf67ac(param_2,param_6,&puStack_88,param_1,1,iVar4 == 2);
        }
        if (*(long *)(param_6 + 0xe0) != 0) {
          FUN_10abf67ac(param_2,param_6,&puStack_88,param_1,0,iVar4 == 2);
        }
      }
    }
    if (puStack_88 != puStack_80) {
      uVar12 = 0;
      uVar9 = 3;
      if (iVar4 != 2) {
        uVar9 = 6;
      }
      do {
        if (uVar12 < (ulong)((long)puStack_80 - (long)puStack_88 >> 4)) {
          uVar10 = *(uint *)(param_4 + 0x538);
          if (0xf < uVar10) {
LAB_10ab88314:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab88318);
            (*pcVar6)();
          }
          puVar8 = puStack_88 + uVar12 * 2;
        }
        else if ((puStack_80 == puStack_88) ||
                (uVar10 = *(uint *)(param_4 + 0x538), puVar8 = puStack_88, 0xf < uVar10))
        goto LAB_10ab88314;
        *(undefined8 *)(param_5 + 0x30 + (ulong)uVar10 * 8) = *puVar8;
        FUN_10ab7f008(param_2 + 0x1250);
        if (0xf < *(uint *)(param_4 + 0x538)) goto LAB_10ab88314;
        *(undefined4 *)(param_4 + 0x53c + (ulong)*(uint *)(param_4 + 0x538) * 4) = 0x18;
        lVar14 = *(long *)(param_2 + 0xb20);
        if ((ulong)(*(long *)(param_2 + 0xb28) - lVar14 >> 5) <= uVar12) goto LAB_10ab88314;
        lVar11 = *(long *)(*(long *)(param_5 + 0xcb8) + 0x18);
        FUN_10ab91b60(lVar11);
        lVar11 = lVar11 + 0x18;
        func_0x00010abd9058(lVar11,*(undefined8 *)(lVar14 + uVar12 * 0x20 + 0x18));
        if (lVar11 != 0) {
          uStack_d0 = (undefined8 **)
                      CONCAT44(*(undefined4 *)(param_4 + 0x538),*(undefined4 *)(lVar11 + 0x40));
          puStack_c8 = (undefined8 *)0x5;
          uStack_c0 = (undefined8 *)CONCAT35(uStack_c0._5_3_,3);
          func_0x00010ab8e8f8(param_2 + 0xf08,&uStack_d0);
          *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
        }
        if (iVar4 == 2) {
          lVar14 = *(long *)(param_2 + 0xb38);
          if ((ulong)(*(long *)(param_2 + 0xb40) - lVar14 >> 5) <= uVar12) goto LAB_10ab88314;
          lVar11 = *(long *)(*(long *)(param_5 + 0xcb8) + 0x18);
          FUN_10ab91b60(lVar11);
          lVar11 = lVar11 + 0x18;
          func_0x00010abd9058(lVar11,*(undefined8 *)(lVar14 + uVar12 * 0x20 + 0x18));
          if (lVar11 != 0) {
            uStack_d0 = (undefined8 **)
                        CONCAT44(*(undefined4 *)(param_4 + 0x538),*(undefined4 *)(lVar11 + 0x40));
            puStack_c8 = (undefined8 *)0xc00000005;
            uStack_c0 = (undefined8 *)CONCAT35(uStack_c0._5_3_,3);
            func_0x00010ab8e8f8(param_2 + 0xf08,&uStack_d0);
            *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
          }
        }
        *(int *)(param_4 + 0x538) = *(int *)(param_4 + 0x538) + 1;
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar9);
    }
    func_0x00010a19877c(&puStack_a0,uStack_98);
    uStack_d0 = &puStack_88;
    FUN_10a18d9ec(&uStack_d0);
  }
  return;
}



/* Entry: 10ab88394; end: 10ab88423;  */

void FUN_10ab88394(long param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  
  cVar2 = *(char *)(param_2 + 0x18);
  if ((((cVar2 != '\0') && (*(undefined4 *)(param_1 + 8) = 3, cVar2 == '\x01')) &&
      (uVar1 = *(uint *)(*(long *)(param_2 + 0x48) + 0x18), 0x43 < (int)uVar1)) &&
     (*(char *)(*(long *)(param_2 + 0x40) + 0x28) == '\x01')) {
    *(undefined1 *)(param_1 + 0x2e4) = 0;
    *(undefined2 *)(param_1 + 0x2e8) = 0;
    *(undefined1 *)(param_1 + 0x2f0) = 0;
    lVar3 = *(long *)(param_1 + 0x428);
    if (lVar3 != 0) {
      puVar4 = (undefined1 *)(param_1 + 0x328);
      uVar5 = 4;
      if (uVar1 < 0x4d) {
        uVar5 = 1;
      }
      do {
        *puVar4 = 1;
        *(undefined4 *)(puVar4 + 0x1c) = 0xf;
        *(undefined4 *)(puVar4 + 4) = uVar5;
        *(uint *)(puVar4 + 8) = (uint)(uVar1 < 0x4d);
        *(undefined8 *)(puVar4 + 0x14) = 1;
        *(undefined8 *)(puVar4 + 0xc) = 0x100000000;
        puVar4 = puVar4 + 0x20;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  return;
}


