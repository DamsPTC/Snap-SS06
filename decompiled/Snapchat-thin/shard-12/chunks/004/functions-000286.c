/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090c74c8; end: 1090c74e7;  */

bool FUN_1090c74c8(long param_1,long *param_2)

{
  return *(int *)(param_1 + 0x60) == *(int *)(*param_2 + 0x10);
}



/* Entry: 1090c74e8; end: 1090c752b;  */

bool FUN_1090c74e8(void)

{
  bool bVar1;
  long unaff_x19;
  
  func_0x0001090c81ac();
  if (*(ulong *)(unaff_x19 + 0xa0) == 0) {
    bVar1 = true;
  }
  else {
    bVar1 = *(ulong *)(unaff_x19 + 0xa0) < *(ulong *)(unaff_x19 + 0xa8);
  }
  __ZNSt3__115recursive_mutex6unlockEv(unaff_x19 + 0x18);
  return bVar1;
}



/* Entry: 1090c752c; end: 1090c75b3;  */

void FUN_1090c752c(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long alStack_68 [2];
  undefined1 auStack_58 [48];
  undefined8 uStack_28;
  
  func_0x0001090c8098();
  lVar4 = param_2;
  func_0x0001090cf870(unaff_x19 + 0x78);
  plVar3 = alStack_68;
  func_0x00010731a274();
  func_0x0001090c8108();
  func_0x0001090c8168(FUN_1090c77a0);
  func_0x0001090c81b8();
  func_0x0001090c8158();
  func_0x0001090c8120();
  func_0x0001090c8118();
  func_0x0001090c8084(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001090c80d4();
    func_0x0001090c8120();
    func_0x0001090c8118();
    func_0x0001090c8100();
    pcStack_88 = FUN_1090c75b4;
    if (lVar4 == 0) {
      *plVar3 = 0;
      plVar3[1] = 0;
    }
    else if (*(long *)(lVar4 + 8) == 0) {
      lVar5 = *(long *)(lVar4 + 0x10);
      *plVar3 = lVar4;
      plVar3[1] = lVar5;
      if (lVar5 != 0) {
        plVar3 = (long *)(lVar5 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    else {
      lStack_a0 = param_2;
      puStack_98 = auStack_58;
      puStack_90 = &stack0xfffffffffffffff0;
      func_0x000107c278f0(&lStack_b0);
      if (lStack_b0 == 0) {
        *plVar3 = 0;
        plVar3[1] = 0;
      }
      else {
        *plVar3 = lVar4;
        plVar3[1] = lStack_a8;
        if (lStack_a8 != 0) {
          plVar3 = (long *)(lStack_a8 + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar2) {
              *plVar3 = *plVar3 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
      func_0x000107c278ec(&lStack_b0);
    }
    return;
  }
  return;
}



/* Entry: 1090c75b4; end: 1090c7657;  */

void FUN_1090c75b4(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else if (*(long *)(param_2 + 8) == 0) {
    lVar4 = *(long *)(param_2 + 0x10);
    *param_1 = param_2;
    param_1[1] = lVar4;
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
  }
  else {
    func_0x000107c278f0(&lStack_30);
    if (lStack_30 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = param_2;
      param_1[1] = lStack_28;
      if (lStack_28 != 0) {
        plVar1 = (long *)(lStack_28 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    func_0x000107c278ec(&lStack_30);
  }
  return;
}



/* Entry: 1090c7658; end: 1090c76d7;  */

void FUN_1090c7658(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined1 auStack_68 [64];
  undefined8 uStack_28;
  
  func_0x0001090c8098();
  FUN_1090cf598(unaff_x19 + 0x78);
  func_0x00010731a274(auStack_68);
  func_0x0001090c8108();
  func_0x0001090c8168(FUN_1090c7c9c);
  func_0x0001090c81b8();
  func_0x0001090c8158();
  func_0x0001090c8120();
  func_0x0001090c8118();
  func_0x0001090c8084(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001090c80d4();
  func_0x0001090c8120();
  func_0x0001090c8118();
  func_0x0001090c8100();
  return;
}



/* Entry: 1090c76d8; end: 1090c76db;  */

void FUN_1090c76d8(void)

{
  return;
}



/* Entry: 1090c76dc; end: 1090c773b;  */

bool FUN_1090c76dc(long param_1)

{
  bool bVar1;
  long lStack_30;
  undefined1 uStack_28;
  
  lStack_30 = param_1 + 0x18;
  uStack_28 = 1;
  __ZNSt3__115recursive_mutex4lockEv();
  if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
    bVar1 = *(long *)(param_1 + 0xa0) == 0;
  }
  else {
    bVar1 = false;
  }
  func_0x000107c281c0(&lStack_30);
  return bVar1;
}



/* Entry: 1090c773c; end: 1090c7747;  */

void FUN_1090c773c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090c7744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))();
  return;
}



/* Entry: 1090c7748; end: 1090c779f;  */

long * FUN_1090c7748(long *param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  bool bVar10;
  undefined1 in_ZR;
  long lVar11;
  undefined **ppuVar12;
  long *plVar13;
  undefined *extraout_x8;
  int extraout_w11;
  long unaff_x19;
  long lVar14;
  undefined *puVar15;
  long *plStack_1d8;
  long lStack_1d0;
  undefined1 uStack_1c8;
  undefined1 auStack_1c0 [8];
  undefined8 uStack_1b8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [8];
  undefined8 uStack_190;
  long lStack_178;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined **ppuStack_130;
  long lStack_128;
  undefined **ppuStack_120;
  long lStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  char cStack_a0;
  undefined8 uStack_90;
  
  func_0x0001090c81c4();
  if (param_1 == (long *)0x0) {
    __ZNSt3__120__throw_system_errorEiPKc(1,&UNK_10f2e1659);
  }
  else {
    in_ZR = *(char *)(unaff_x19 + 8) == '\x01';
    if (!(bool)in_ZR) {
      __ZNSt3__115recursive_mutex4lockEv();
      *(undefined1 *)(unaff_x19 + 8) = 1;
      return param_1;
    }
  }
  lVar11 = 0xb;
  __ZNSt3__120__throw_system_errorEiPKc(0xb,&UNK_10f2e1682);
  uStack_90 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *(long *)(lVar11 + 0x10);
  lStack_1d0 = lVar11 + 0x18;
  uStack_1c8 = 1;
  __ZNSt3__115recursive_mutex4lockEv();
  func_0x0001090f5cc0(&plStack_1d8,lVar11 + 0x78);
  if (plStack_1d8 == (long *)0x0) goto LAB_1090c7b34;
  if (*(long *)(lVar11 + 0x68) == 0) {
    FUN_1090c6158(&ppuStack_170,plStack_1d8 + 2);
    if (ppuStack_170 == (undefined **)0x0) {
      func_0x00010b99f5f8(&lStack_118,&UNK_10f54fa39);
      plVar13 = *(long **)(lVar11 + 0x58);
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x30))(plVar13,&lStack_118);
      }
      func_0x000104bda93c(&lStack_118);
    }
    else {
      FUN_1090c72b4(&lStack_118,lVar11,&ppuStack_170);
      in_ZR = lStack_118 == 1;
      if ((bool)in_ZR) {
        func_0x0001090c8184();
        func_0x0001090c8198();
        goto LAB_1090c7804;
      }
      plVar13 = *(long **)(lVar11 + 0x58);
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x30))(plVar13,&ppuStack_110);
      }
      func_0x0001090c8184();
    }
    func_0x0001090c8198();
  }
  else {
LAB_1090c7804:
    *(undefined1 *)(lVar11 + 0xb0) = 1;
    func_0x00010731a274(&lStack_1d0);
    (**(code **)(*plStack_1d8 + 0x20))(&lStack_118);
    if (lStack_118 == 1) {
      if (cStack_a0 == '\x01') {
        func_0x00010b99f5f8(&ppuStack_170,&UNK_10f54fa77);
        lStack_138 = 2;
        ppuStack_130 = ppuStack_170;
        ppuStack_170 = (undefined **)0x0;
        func_0x000104bda93c(&ppuStack_170);
      }
      else {
        FUN_1090c6d54(&lStack_128,*(undefined8 *)(lVar11 + 0x68),uStack_108,uStack_100,
                      plStack_1d8 + 10);
        if (lStack_128 == 1) {
          lVar14 = *(long *)(lVar11 + 0x68);
          puVar15 = ppuStack_120[5];
          puVar5 = ppuStack_120[6];
          func_0x0001090f5ed4(auStack_1c0,puVar5,
                              (ulong)*(uint *)(*(long *)(lVar14 + 0x18) + 0x18) | 0x100000000);
          lVar14 = *(long *)(lVar14 + 0x18);
          ppuVar12 = (undefined **)0x98;
          __Znwm();
          if (lVar14 != 0) {
            plVar13 = (long *)(lVar14 + 8);
            do {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar10) {
                *plVar13 = *plVar13 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          lVar2 = plStack_1d8[3];
          lVar6 = plStack_1d8[4];
          lVar3 = plStack_1d8[5];
          lVar7 = plStack_1d8[6];
          lVar4 = plStack_1d8[7];
          lVar8 = plStack_1d8[8];
          lStack_178 = lVar14;
          FUN_1090c7eb4(auStack_198,auStack_1c0);
          uStack_150 = 0;
          if (puVar5 != (undefined *)0x0) {
            uStack_150 = (ulong)puVar15 / (ulong)puVar5;
          }
          puVar15 = ppuStack_120[6];
          uStack_148 = 0;
          uStack_140 = 1;
          FUN_1090c7eb4(&ppuStack_170,auStack_198);
          func_0x0001090f34a0(ppuVar12,&lStack_178,lVar2,lVar6,lVar3,lVar7,lVar4,lVar8,puVar15,
                              &uStack_150,&ppuStack_170);
          func_0x0001090e5d44(uStack_168);
          func_0x0001090e5ca4(uStack_148);
          *ppuVar12 = (undefined *)&PTR_DAT_110ad8d88;
          puVar15 = (undefined *)0x0;
          if (ppuStack_120 != (undefined **)0x0) {
            do {
              func_0x0001090c81d0();
              puVar15 = extraout_x8;
            } while (extraout_w11 != 0);
          }
          ppuVar12[0x12] = puVar15;
          func_0x0001090e5d44(uStack_190);
          FUN_1090c803c(&lStack_178);
          ppuVar1 = ppuVar12 + 1;
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
            if (bVar10) {
              *ppuVar1 = *ppuVar1 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          lStack_138 = 1;
          uStack_1a0 = 0;
          ppuStack_130 = ppuVar12;
          FUN_1090ac7bc(&uStack_1a0);
          do {
            puVar15 = *ppuVar1;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
            if (bVar10) {
              *ppuVar1 = puVar15 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (puVar15 + -1 == (undefined *)0x0) {
            (**(code **)(*ppuVar12 + 8))(ppuVar12);
          }
          func_0x0001090e5d44(uStack_1b8);
        }
        else {
          lStack_138 = 2;
          ppuStack_130 = ppuStack_120;
          ppuStack_120 = (undefined **)0x0;
        }
        func_0x0001090c7e64(&lStack_128);
      }
    }
    else {
      lStack_138 = 2;
      ppuStack_130 = ppuStack_110;
      ppuStack_110 = (undefined **)0x0;
    }
    func_0x0001090c19c0(&lStack_118);
    FUN_1090c7748(&lStack_1d0);
    *(undefined1 *)(lVar11 + 0xb0) = 0;
    plVar13 = *(long **)(lVar11 + 0x58);
    in_ZR = lStack_138 == 1;
    if ((bool)in_ZR) {
      if (plVar13 != (long *)0x0) {
        lStack_118 = 0x1090c7e54;
        ppuStack_110 = &PTR_DAT_110ad8d58;
        (**(code **)(*plVar13 + 0x20))(plVar13,&ppuStack_130,&lStack_118);
        func_0x0001090c8128();
      }
    }
    else if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x30))(plVar13,&ppuStack_130);
    }
    FUN_1090ac798(&lStack_138);
  }
LAB_1090c7b34:
  FUN_1090ac7bc(&plStack_1d8);
  plVar13 = &lStack_1d0;
  func_0x000107c281c0();
  func_0x0001090c8084(uStack_90);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001090c8184();
    func_0x0001090c8198();
    FUN_1090ac7bc(&plStack_1d8);
    plVar13 = &lStack_1d0;
    func_0x000107c281c0();
    func_0x0001090c8100();
    if (plVar13[2] != 0) {
      func_0x000107c278a0();
    }
    return plVar13 + 1;
  }
  return plVar13;
}



/* Entry: 1090c77a0; end: 1090c7c2b;  */

long * FUN_1090c77a0(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  bool bVar10;
  undefined1 in_ZR;
  undefined **ppuVar11;
  long *plVar12;
  undefined *extraout_x8;
  int extraout_w11;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long *plStack_1b8;
  long lStack_1b0;
  undefined1 uStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined8 uStack_198;
  undefined8 uStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  long lStack_158;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined **ppuStack_110;
  long lStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  char cStack_80;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(param_1 + 0x10);
  lStack_1b0 = lVar13 + 0x18;
  uStack_1a8 = 1;
  __ZNSt3__115recursive_mutex4lockEv();
  func_0x0001090f5cc0(&plStack_1b8,lVar13 + 0x78);
  if (plStack_1b8 == (long *)0x0) goto LAB_1090c7b34;
  if (*(long *)(lVar13 + 0x68) == 0) {
    FUN_1090c6158(&ppuStack_150,plStack_1b8 + 2);
    if (ppuStack_150 == (undefined **)0x0) {
      func_0x00010b99f5f8(&lStack_f8,&UNK_10f54fa39);
      plVar12 = *(long **)(lVar13 + 0x58);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x30))(plVar12,&lStack_f8);
      }
      func_0x000104bda93c(&lStack_f8);
    }
    else {
      FUN_1090c72b4(&lStack_f8,lVar13,&ppuStack_150);
      in_ZR = lStack_f8 == 1;
      if ((bool)in_ZR) {
        func_0x0001090c8184();
        func_0x0001090c8198();
        goto LAB_1090c7804;
      }
      plVar12 = *(long **)(lVar13 + 0x58);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x30))(plVar12,&ppuStack_f0);
      }
      func_0x0001090c8184();
    }
    func_0x0001090c8198();
  }
  else {
LAB_1090c7804:
    *(undefined1 *)(lVar13 + 0xb0) = 1;
    func_0x00010731a274(&lStack_1b0);
    (**(code **)(*plStack_1b8 + 0x20))(&lStack_f8);
    if (lStack_f8 == 1) {
      if (cStack_80 == '\x01') {
        func_0x00010b99f5f8(&ppuStack_150,&UNK_10f54fa77);
        lStack_118 = 2;
        ppuStack_110 = ppuStack_150;
        ppuStack_150 = (undefined **)0x0;
        func_0x000104bda93c(&ppuStack_150);
      }
      else {
        FUN_1090c6d54(&lStack_108,*(undefined8 *)(lVar13 + 0x68),uStack_e8,uStack_e0,
                      plStack_1b8 + 10);
        if (lStack_108 == 1) {
          lVar14 = *(long *)(lVar13 + 0x68);
          puVar15 = ppuStack_100[5];
          puVar5 = ppuStack_100[6];
          func_0x0001090f5ed4(auStack_1a0,puVar5,
                              (ulong)*(uint *)(*(long *)(lVar14 + 0x18) + 0x18) | 0x100000000);
          lVar14 = *(long *)(lVar14 + 0x18);
          ppuVar11 = (undefined **)0x98;
          __Znwm();
          if (lVar14 != 0) {
            plVar12 = (long *)(lVar14 + 8);
            do {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar10) {
                *plVar12 = *plVar12 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          lVar2 = plStack_1b8[3];
          lVar6 = plStack_1b8[4];
          lVar3 = plStack_1b8[5];
          lVar7 = plStack_1b8[6];
          lVar4 = plStack_1b8[7];
          lVar8 = plStack_1b8[8];
          lStack_158 = lVar14;
          FUN_1090c7eb4(auStack_178,auStack_1a0);
          uStack_130 = 0;
          if (puVar5 != (undefined *)0x0) {
            uStack_130 = (ulong)puVar15 / (ulong)puVar5;
          }
          puVar15 = ppuStack_100[6];
          uStack_128 = 0;
          uStack_120 = 1;
          FUN_1090c7eb4(&ppuStack_150,auStack_178);
          func_0x0001090f34a0(ppuVar11,&lStack_158,lVar2,lVar6,lVar3,lVar7,lVar4,lVar8,puVar15,
                              &uStack_130,&ppuStack_150);
          func_0x0001090e5d44(uStack_148);
          func_0x0001090e5ca4(uStack_128);
          *ppuVar11 = (undefined *)&PTR_DAT_110ad8d88;
          puVar15 = (undefined *)0x0;
          if (ppuStack_100 != (undefined **)0x0) {
            do {
              func_0x0001090c81d0();
              puVar15 = extraout_x8;
            } while (extraout_w11 != 0);
          }
          ppuVar11[0x12] = puVar15;
          func_0x0001090e5d44(uStack_170);
          FUN_1090c803c(&lStack_158);
          ppuVar1 = ppuVar11 + 1;
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
            if (bVar10) {
              *ppuVar1 = *ppuVar1 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          lStack_118 = 1;
          uStack_180 = 0;
          ppuStack_110 = ppuVar11;
          FUN_1090ac7bc(&uStack_180);
          do {
            puVar15 = *ppuVar1;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
            if (bVar10) {
              *ppuVar1 = puVar15 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (puVar15 + -1 == (undefined *)0x0) {
            (**(code **)(*ppuVar11 + 8))(ppuVar11);
          }
          func_0x0001090e5d44(uStack_198);
        }
        else {
          lStack_118 = 2;
          ppuStack_110 = ppuStack_100;
          ppuStack_100 = (undefined **)0x0;
        }
        func_0x0001090c7e64(&lStack_108);
      }
    }
    else {
      lStack_118 = 2;
      ppuStack_110 = ppuStack_f0;
      ppuStack_f0 = (undefined **)0x0;
    }
    func_0x0001090c19c0(&lStack_f8);
    FUN_1090c7748(&lStack_1b0);
    *(undefined1 *)(lVar13 + 0xb0) = 0;
    plVar12 = *(long **)(lVar13 + 0x58);
    in_ZR = lStack_118 == 1;
    if ((bool)in_ZR) {
      if (plVar12 != (long *)0x0) {
        lStack_f8 = 0x1090c7e54;
        ppuStack_f0 = &PTR_DAT_110ad8d58;
        (**(code **)(*plVar12 + 0x20))(plVar12,&ppuStack_110,&lStack_f8);
        func_0x0001090c8128();
      }
    }
    else if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x30))(plVar12,&ppuStack_110);
    }
    FUN_1090ac798(&lStack_118);
  }
LAB_1090c7b34:
  FUN_1090ac7bc(&plStack_1b8);
  plVar12 = &lStack_1b0;
  func_0x000107c281c0();
  func_0x0001090c8084(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001090c8184();
    func_0x0001090c8198();
    FUN_1090ac7bc(&plStack_1b8);
    plVar12 = &lStack_1b0;
    func_0x000107c281c0();
    func_0x0001090c8100();
    if (plVar12[2] != 0) {
      func_0x000107c278a0();
    }
    return plVar12 + 1;
  }
  return plVar12;
}



/* Entry: 1090c7c2c; end: 1090c7c73;  */

long FUN_1090c7c2c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c278a0();
  }
  return param_1 + 8;
}



/* Entry: 1090c7c74; end: 1090c7c9b;  */

long FUN_1090c7c74(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1090c7c9c; end: 1090c7cf7;  */

void FUN_1090c7c9c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x68);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb9eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__AudioConverterReset_11034aed0)(*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}



/* Entry: 1090c7cf8; end: 1090c7d1b;  */

void FUN_1090c7cf8(void)

{
  func_0x0001090c81c4();
  FUN_1090c7d1c();
  return;
}



/* Entry: 1090c7d1c; end: 1090c7d3f;  */

void FUN_1090c7d1c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001090c80d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090c7d40; end: 1090c7d63;  */

undefined8 FUN_1090c7d40(undefined8 param_1)

{
  FUN_1090c7d64(param_1,0);
  return param_1;
}



/* Entry: 1090c7d64; end: 1090c7d7b;  */

void FUN_1090c7d64(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1090c6a80(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1090c7d7c; end: 1090c7d97;  */

void FUN_1090c7d7c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1090c6a80(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090c7d98; end: 1090c7e0b;  */

void FUN_1090c7d98(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xa8;
  __Znwm();
  *puVar1 = &PTR_DAT_110ada498;
  puVar1[2] = 0x32aaaba7;
  puVar1[1] = 1;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  puVar1[10] = &UNK_10dd5b8b0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xb] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 1090c7e0c; end: 1090c7e2f;  */

void FUN_1090c7e0c(void)

{
  func_0x0001090c81c4();
  FUN_1090c7e30();
  return;
}



/* Entry: 1090c7e30; end: 1090c7eb3;  */

void FUN_1090c7e30(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001090c80d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090c7eb4; end: 1090c7ed7;  */

void FUN_1090c7eb4(long param_1,long param_2)

{
  FUN_1090c7ed8();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return;
}



/* Entry: 1090c7ed8; end: 1090c7f03;  */

void FUN_1090c7ed8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  undefined8 uVar2;
  int extraout_w11;
  
  *param_1 = *param_2;
  uVar1 = 0;
  if (param_2[1] != 0) {
    do {
      func_0x0001090c81d0();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uVar2 = param_2[2];
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}



/* Entry: 1090c7f04; end: 1090c7f17;  */

void FUN_1090c7f04(void)

{
  func_0x0001090c7fa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090c7f18; end: 1090c7fd7;  */

void FUN_1090c7f18(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plStack_a8;
  undefined4 auStack_a0 [2];
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_30;
  long *plStack_28;
  
  plVar4 = *(long **)(param_2 + 0x90);
  lStack_98 = plVar4[3];
  lStack_90 = plVar4[5];
  plVar1 = plVar4 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  auStack_a0[0] = 7;
  uStack_30 = 0;
  plStack_a8 = plVar4;
  func_0x0001090c8148();
  plStack_28 = plVar4;
  FUN_1090c7fd8(param_1,auStack_a0);
  if (plStack_28 != (long *)0x0) {
    (**(code **)(*plStack_28 + 0x18))();
  }
  func_0x000107c27900(&plStack_a8);
  return;
}



/* Entry: 1090c7fd8; end: 1090c8003;  */

undefined8 * FUN_1090c7fd8(undefined8 *param_1)

{
  *param_1 = 1;
  FUN_1090c8004(param_1 + 1);
  return param_1;
}



/* Entry: 1090c8004; end: 1090c803b;  */

long FUN_1090c8004(long param_1,long param_2)

{
  long lVar1;
  
  _memcpy(param_1,param_2,0x71);
  lVar1 = *(long *)(param_2 + 0x78);
  if (lVar1 != 0) {
    func_0x0001090c8148();
  }
  *(long *)(param_1 + 0x78) = lVar1;
  return param_1;
}



/* Entry: 1090c803c; end: 1090c805f;  */

void FUN_1090c803c(void)

{
  func_0x0001090c81c4();
  func_0x0001090c8060();
  return;
}



/* Entry: 1090c8060; end: 1090c824b;  */

void FUN_1090c8060(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001090c80d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090c824c; end: 1090c8297;  */

undefined8 * FUN_1090c824c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad8df0;
  FUN_1090c8298();
  func_0x0001090c18e0(param_1 + 0x12);
  FUN_1090c8e50(param_1 + 0xe);
  __ZNSt3__15mutexD1Ev(param_1 + 2);
  return param_1;
}



/* Entry: 1090c8298; end: 1090c8303;  */

void FUN_1090c8298(long param_1)

{
  if (*(long *)(param_1 + 0x88) != 0) {
    _AudioOutputUnitStop();
    _AudioUnitUninitialize(*(undefined8 *)(param_1 + 0x88));
    _AudioComponentInstanceDispose(*(undefined8 *)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    _AudioUnitUninitialize();
    _AudioComponentInstanceDispose(*(undefined8 *)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    _AudioUnitUninitialize();
    _AudioComponentInstanceDispose(*(undefined8 *)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  return;
}



/* Entry: 1090c8304; end: 1090c8307;  */

undefined8 * FUN_1090c8304(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad8df0;
  FUN_1090c8298();
  func_0x0001090c18e0(param_1 + 0x12);
  FUN_1090c8e50(param_1 + 0xe);
  __ZNSt3__15mutexD1Ev(param_1 + 2);
  return param_1;
}



/* Entry: 1090c8308; end: 1090c831b;  */

void FUN_1090c8308(void)

{
  FUN_1090c824c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090c831c; end: 1090c8397;  */

undefined1  [16] FUN_1090c831c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined1 auVar3 [16];
  
  func_0x0001090c8ed0();
  lVar1 = unaff_x19 + 0x50;
  lVar2 = unaff_x19 + 0x60;
  func_0x0001090fbf64(lVar1,lVar2);
  func_0x0001090c8ef8();
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



/* Entry: 1090c8398; end: 1090c84c3;  */

code ** FUN_1090c8398(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
                     ulong param_5,uint *param_6)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  code **ppcVar4;
  undefined *puVar5;
  int iVar6;
  uint *puVar7;
  undefined8 extraout_x8;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  code *pcStack_a8;
  code *pcStack_a0;
  undefined8 *puStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  uint *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar7 = param_6;
  func_0x0001090c8f54();
  uStack_48 = extraout_x8;
  if (*puVar7 == 2) {
    param_1 = (undefined8 *)param_1[0xe];
    uStack_58 = *(undefined8 *)(param_6 + 4);
    uStack_50 = *(undefined8 *)(param_6 + 8);
    param_2 = &uStack_58;
    param_3 = 2;
    func_0x0001090fd39c();
    puVar9 = (undefined8 *)0x0;
    if ((ulong)*param_6 != 0) {
      puVar9 = (undefined8 *)((ulong)param_1 / (ulong)*param_6);
    }
  }
  else if (*puVar7 == 1) {
    param_2 = *(undefined8 **)(param_6 + 4);
    param_3 = (ulong)(param_6[3] >> 2);
    param_1 = (undefined8 *)param_1[0xe];
    func_0x0001090fd34c();
    puVar9 = param_1;
  }
  else {
    puVar9 = (undefined8 *)0x0;
  }
  bVar1 = 0;
  puVar8 = (undefined8 *)(((long)(param_5 & 0xffffffff) - (long)puVar9) * 4);
  lVar11 = 0x10;
  for (uVar10 = 0; iVar6 = (int)param_3, uVar10 < *param_6; uVar10 = uVar10 + 1) {
    if ((undefined8 *)(param_5 & 0xffffffff) != puVar9) {
      param_1 = (undefined8 *)(*(long *)((long)param_6 + lVar11) + (long)puVar9 * 4);
      param_2 = puVar8;
      _bzero();
      bVar1 = 1;
    }
    lVar11 = lVar11 + 0x10;
  }
  uVar2 = puVar9 == (undefined8 *)0x0;
  if ((bool)(bVar1 & !(bool)uVar2)) {
    param_1 = (undefined8 *)&UNK_10f54fc80;
    _puts();
  }
  func_0x0001090c8f20(uStack_48);
  if ((bool)uVar2) {
    return (code **)0x0;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_1090c84c4;
  *(char *)((long)param_2 + 0xa6) = (char)iVar6;
  puStack_80 = puVar8;
  puStack_78 = param_6;
  puStack_70 = &stack0xfffffffffffffff0;
  if (iVar6 == 0) {
    pcStack_90 = (code *)0x0;
    uStack_88 = 0;
    func_0x0001090c8ea8(param_2[0x10],0x17);
    uVar3 = param_2[0xf];
    FUN_1090c8638(uVar3,param_2[0x10]);
    if ((int)uVar3 == 0) {
      uVar3 = param_2[0xf];
      _AudioUnitInitialize();
      if ((int)uVar3 == 0) goto LAB_1090c85ac;
      puVar5 = &UNK_10f54fc1e;
    }
    else {
      puVar5 = &UNK_10f54fbfa;
    }
    FUN_1090caa2c(&pcStack_a0,puVar5,uVar3);
    *param_1 = 2;
    param_1[1] = pcStack_a0;
    pcStack_a0 = (code *)0x0;
    ppcVar4 = &pcStack_a0;
  }
  else {
    pcStack_90 = (code *)0x0;
    uStack_88 = 0;
    func_0x0001090c8ea8(param_2[0x10],1);
    pcStack_a0 = FUN_1090c8398;
    uVar3 = param_2[0x10];
    puStack_98 = param_2;
    func_0x0001090c8ea8(uVar3,0x17);
    if ((int)uVar3 != 0) {
      FUN_1090caa2c(&pcStack_a8,&UNK_10f54fbd3,uVar3);
      *param_1 = 2;
      param_1[1] = pcStack_a8;
      pcStack_a8 = (code *)0x0;
      ppcVar4 = &pcStack_a8;
      goto LAB_1090c8618;
    }
LAB_1090c85ac:
    ppcVar4 = (code **)param_2[0x10];
    FUN_1090c8638(ppcVar4,param_2[0x11]);
    if ((int)ppcVar4 == 0) {
      ppcVar4 = (code **)param_2[0x10];
      _AudioUnitInitialize();
      if ((int)ppcVar4 == 0) {
        ppcVar4 = (code **)param_2[0x11];
        _AudioUnitInitialize();
        if ((int)ppcVar4 == 0) {
          *param_1 = 1;
          return ppcVar4;
        }
        puVar5 = &UNK_10f54fc60;
      }
      else {
        puVar5 = &UNK_10f54fc41;
      }
    }
    else {
      puVar5 = &UNK_10f54fbfa;
    }
    FUN_1090caa2c(&pcStack_90,puVar5,ppcVar4);
    *param_1 = 2;
    param_1[1] = pcStack_90;
    pcStack_90 = (code *)0x0;
    ppcVar4 = &pcStack_90;
  }
LAB_1090c8618:
  func_0x000104bda93c(ppcVar4);
  return ppcVar4;
}



/* Entry: 1090c84c4; end: 1090c8637;  */

void FUN_1090c84c4(undefined8 *param_1,long param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  code **ppcVar3;
  code *pcStack_48;
  code *pcStack_40;
  long lStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  
  *(char *)(param_2 + 0xa6) = (char)param_3;
  if (param_3 == 0) {
    pcStack_30 = (code *)0x0;
    uStack_28 = 0;
    func_0x0001090c8ea8(*(undefined8 *)(param_2 + 0x80),0x17,0,param_4,&pcStack_30);
    uVar1 = *(undefined8 *)(param_2 + 0x78);
    FUN_1090c8638(uVar1,*(undefined8 *)(param_2 + 0x80));
    if ((int)uVar1 == 0) {
      uVar1 = *(undefined8 *)(param_2 + 0x78);
      _AudioUnitInitialize();
      if ((int)uVar1 == 0) goto LAB_1090c85ac;
      puVar2 = &UNK_10f54fc1e;
    }
    else {
      puVar2 = &UNK_10f54fbfa;
    }
    FUN_1090caa2c(&pcStack_40,puVar2,uVar1);
    *param_1 = 2;
    param_1[1] = pcStack_40;
    pcStack_40 = (code *)0x0;
    ppcVar3 = &pcStack_40;
  }
  else {
    pcStack_30 = (code *)0x0;
    uStack_28 = 0;
    func_0x0001090c8ea8(*(undefined8 *)(param_2 + 0x80),1,param_3,param_4,&pcStack_30);
    pcStack_40 = FUN_1090c8398;
    uVar1 = *(undefined8 *)(param_2 + 0x80);
    lStack_38 = param_2;
    func_0x0001090c8ea8(uVar1,0x17);
    if ((int)uVar1 != 0) {
      FUN_1090caa2c(&pcStack_48,&UNK_10f54fbd3,uVar1);
      *param_1 = 2;
      param_1[1] = pcStack_48;
      pcStack_48 = (code *)0x0;
      ppcVar3 = &pcStack_48;
      goto LAB_1090c8618;
    }
LAB_1090c85ac:
    uVar1 = *(undefined8 *)(param_2 + 0x80);
    FUN_1090c8638(uVar1,*(undefined8 *)(param_2 + 0x88));
    if ((int)uVar1 == 0) {
      uVar1 = *(undefined8 *)(param_2 + 0x80);
      _AudioUnitInitialize();
      if ((int)uVar1 == 0) {
        uVar1 = *(undefined8 *)(param_2 + 0x88);
        _AudioUnitInitialize();
        if ((int)uVar1 == 0) {
          *param_1 = 1;
          return;
        }
        puVar2 = &UNK_10f54fc60;
      }
      else {
        puVar2 = &UNK_10f54fc41;
      }
    }
    else {
      puVar2 = &UNK_10f54fbfa;
    }
    FUN_1090caa2c(&pcStack_30,puVar2,uVar1);
    *param_1 = 2;
    param_1[1] = pcStack_30;
    pcStack_30 = (code *)0x0;
    ppcVar3 = &pcStack_30;
  }
LAB_1090c8618:
  func_0x000104bda93c(ppcVar3);
  return;
}



/* Entry: 1090c8638; end: 1090c8663;  */

void FUN_1090c8638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  uStack_20 = param_1;
  func_0x0001090c8ea8(param_2,1,param_3,param_4,&uStack_20);
  return;
}



/* Entry: 1090c8664; end: 1090c8aa3;  */

double FUN_1090c8664(undefined8 *param_1,code ******param_2,code ******param_3,uint param_4)

{
  code *****pppppcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  code ******ppppppcVar6;
  code ******ppppppcVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 uVar9;
  code *****pppppcVar10;
  long lVar11;
  double dVar12;
  undefined4 uStack_11c;
  double dStack_118;
  code ****ppppcStack_a8;
  code *****pppppcStack_a0;
  code ****ppppcStack_98;
  undefined8 uStack_90;
  code ****ppppcStack_88;
  code ****ppppcStack_80;
  code *****pppppcStack_78;
  code ****ppppcStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001090c8f54();
  uStack_58 = extraout_x8;
  func_0x0001090c8f00();
  ppppppcVar6 = param_2;
  FUN_1090c8298();
  *(undefined4 *)(param_2 + 0x15) = 0;
  *(undefined1 *)((long)param_2 + 0xa4) = 0;
  *(uint *)(param_2 + 0x14) = param_4;
  ppppppcVar7 = param_2 + 0xe;
  uVar4 = ppppppcVar7 == param_3;
  if (!(bool)uVar4) {
    ppppppcVar6 = (code ******)*ppppppcVar7;
    pppppcVar10 = *param_3;
    if (pppppcVar10 != (code *****)0x0) {
      pppppcVar1 = pppppcVar10 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppcVar1,0x10);
        if (bVar3) {
          *pppppcVar1 = (code ****)((long)*pppppcVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *ppppppcVar7 = pppppcVar10;
    func_0x0001090c8e7c();
  }
  uStack_64 = 0;
  uStack_60 = 0;
  dVar12 = 1.3568134542095734e+243;
  ppppcStack_70 = (code ****)0x72696f6361756f75;
  uStack_68 = 0x6170706c;
  func_0x0001090c8f14();
  if (ppppppcVar6 == (code ******)0x0) {
    ppppppcVar6 = (code ******)&UNK_10f54fabe;
    ppppppcVar7 = (code ******)&ppppcStack_80;
    func_0x00010b99f5f8();
LAB_1090c877c:
    uStack_90 = 2;
    ppppcStack_88 = ppppcStack_80;
    func_0x0001090c8f6c();
    func_0x0001090c8f80();
    uVar9 = extraout_x8_00;
    if ((bool)uVar4) goto LAB_1090c8794;
  }
  else {
    _AudioComponentInstanceNew();
    if ((int)ppppppcVar6 != 0) {
      ppppppcVar7 = (code ******)&UNK_10f54fadd;
      FUN_1090caa2c(&ppppcStack_80);
      goto LAB_1090c877c;
    }
    ppppppcVar7 = (code ******)param_2[0x11];
    func_0x0001090c8eb8();
    if ((int)ppppppcVar7 != 0) {
      ppppppcVar6 = ppppppcVar7;
      func_0x0001090c8ee8();
      goto LAB_1090c877c;
    }
    uStack_90 = 1;
LAB_1090c8794:
    uStack_64 = 0;
    uStack_60 = 0;
    dVar12 = 1.2408579493539173e+224;
    ppppcStack_70 = (code ****)0x6e75747061756663;
    uStack_68 = 0x6170706c;
    func_0x0001090c8f14();
    if (ppppppcVar7 == (code ******)0x0) {
      func_0x00010b99f5f8(&ppppcStack_80,&UNK_10f54fb29);
LAB_1090c882c:
      pppppcStack_a0 = (code *****)0x2;
      ppppcStack_98 = ppppcStack_80;
      func_0x0001090c8f6c();
    }
    else {
      _AudioComponentInstanceNew();
      if ((int)ppppppcVar7 != 0) {
        FUN_1090caa2c(&ppppcStack_80,&UNK_10f54fb4c);
        goto LAB_1090c882c;
      }
      iVar5 = (int)param_2[0xf];
      func_0x0001090c8eb8();
      if (iVar5 != 0) {
        func_0x0001090c8ee8();
        goto LAB_1090c882c;
      }
      pppppcVar10 = param_2[0xf];
      func_0x0001090c8edc(pppppcVar10,8,2);
      if ((int)pppppcVar10 != 0) {
        func_0x0001090c8ee8();
        goto LAB_1090c882c;
      }
      ppppcStack_80 = (code ****)FUN_1090c8398;
      pppppcVar10 = param_2[0xf];
      pppppcStack_78 = (code *****)param_2;
      _AudioUnitSetProperty(pppppcVar10,0x17,0,0,&ppppcStack_80,0x10);
      if ((int)pppppcVar10 == 0) {
        pppppcStack_a0 = (code *****)0x1;
      }
      else {
        FUN_1090caa2c(&ppppcStack_a8,&UNK_10f54fb6c);
        ppppcStack_98 = ppppcStack_a8;
        ppppcStack_a8 = (code ****)0x0;
        func_0x000104bda93c(&ppppcStack_a8);
        pppppcStack_a0 = (code *****)0x2;
      }
    }
    ppppppcVar6 = &pppppcStack_a0;
    func_0x0001080c6694(&uStack_90);
    ppppppcVar7 = &pppppcStack_a0;
    func_0x0001080c6234();
    func_0x0001090c8f80();
    uVar9 = extraout_x8_01;
    if ((bool)uVar4) {
      uStack_64 = 0;
      uStack_60 = 0;
      dVar12 = 8.572478865231486e+218;
      ppppcStack_70 = (code ****)0x6d636d7861756d78;
      uStack_68 = 0x6170706c;
      func_0x0001090c8f14();
      if (ppppppcVar7 == (code ******)0x0) {
        func_0x00010b99f5f8(&pppppcStack_a0,&UNK_10f54fb91);
LAB_1090c8980:
        ppppcStack_80 = (code ****)0x2;
        pppppcStack_78 = pppppcStack_a0;
        pppppcStack_a0 = (code *****)0x0;
        func_0x000104bda93c(&pppppcStack_a0);
      }
      else {
        _AudioComponentInstanceNew();
        if ((int)ppppppcVar7 != 0) {
          FUN_1090caa2c(&pppppcStack_a0,&UNK_10f54fbb0);
          goto LAB_1090c8980;
        }
        ppppcStack_a8 = (code ****)CONCAT44(ppppcStack_a8._4_4_,1);
        pppppcVar10 = param_2[0x10];
        _AudioUnitSetProperty(pppppcVar10,0xb,1,0,&ppppcStack_a8,4);
        if ((int)pppppcVar10 != 0) {
          FUN_1090caa2c(&pppppcStack_a0,&UNK_10f54fbbf);
          goto LAB_1090c8980;
        }
        iVar5 = (int)param_2[0x10];
        func_0x0001090c8eb8();
        if (iVar5 != 0) {
          func_0x0001090c8f44();
          goto LAB_1090c8980;
        }
        pppppcVar10 = param_2[0x10];
        func_0x0001090c8edc(pppppcVar10,8,2);
        if ((int)pppppcVar10 != 0) {
          func_0x0001090c8f44();
          goto LAB_1090c8980;
        }
        ppppcStack_80 = (code ****)0x1;
      }
      ppppppcVar6 = (code ******)&ppppcStack_80;
      func_0x0001080c6694(&uStack_90);
      func_0x0001080c6234(&ppppcStack_80);
      func_0x0001090c8f80();
      uVar9 = extraout_x8_02;
      if ((bool)uVar4) {
        FUN_1090c84c4(&ppppcStack_70,param_2,1);
        ppppppcVar6 = (code ******)&ppppcStack_70;
        func_0x0001080c6694(&uStack_90);
        func_0x0001080c6234(&ppppcStack_70);
        func_0x0001090c8f80();
        uVar9 = extraout_x8_03;
        if ((bool)uVar4) {
          pppppcVar10 = param_2[0x10];
          uStack_68 = SUB84(param_2[0x11],0);
          uStack_64 = (undefined4)((ulong)param_2[0x11] >> 0x20);
          ppppppcVar6 = (code ******)0x2;
          ppppcStack_70 = (code ****)pppppcVar10;
          FUN_1090c8aa4(&ppppcStack_70);
          dVar12 = (double)pppppcVar10 * (double)param_4;
          param_2[0xc] = (code *****)(long)dVar12;
          param_2[0xd] = (code *****)((ulong)param_4 | 0x100000000);
          func_0x0001090c8f3c();
          *param_1 = 1;
          goto LAB_1090c8a24;
        }
      }
    }
  }
  *param_1 = uVar9;
  param_1[1] = ppppcStack_88;
  uStack_90 = 0;
LAB_1090c8a24:
  func_0x0001080c6234();
  func_0x0001090c8ef8();
  func_0x0001090c8f20(uStack_58);
  if ((bool)uVar4) {
    return dVar12;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_90;
  func_0x0001080c6234();
  func_0x0001090c8ef8();
  func_0x0001090c8f34();
  dVar12 = 0.0;
  for (lVar11 = (long)ppppppcVar6 << 3; lVar11 != 0; lVar11 = lVar11 + -8) {
    dStack_118 = 0.0;
    uStack_11c = 8;
    _AudioUnitGetProperty(*puVar8,0xc,0,0,&dStack_118,&uStack_11c);
    dVar12 = dVar12 + dStack_118;
    puVar8 = puVar8 + 1;
  }
  return dVar12;
}



/* Entry: 1090c8aa4; end: 1090c8b1f;  */

double FUN_1090c8aa4(undefined8 *param_1,long param_2)

{
  double dVar1;
  undefined4 uStack_4c;
  double dStack_48;
  
  dVar1 = 0.0;
  for (param_2 = param_2 << 3; param_2 != 0; param_2 = param_2 + -8) {
    dStack_48 = 0.0;
    uStack_4c = 8;
    _AudioUnitGetProperty(*param_1,0xc,0,0,&dStack_48,&uStack_4c);
    dVar1 = dVar1 + dStack_48;
    param_1 = param_1 + 1;
  }
  return dVar1;
}



/* Entry: 1090c8b20; end: 1090c8b53;  */

void FUN_1090c8b20(long param_1)

{
  undefined4 uVar1;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    uVar1 = 0;
    if ((*(byte *)(param_1 + 0xa5) & 1) == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0xac);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdb9fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__AudioUnitSetParameter_11034afa0)(uVar1,*(long *)(param_1 + 0x80),0,1,0,0);
    return;
  }
  return;
}



/* Entry: 1090c8b54; end: 1090c8b9f;  */

void FUN_1090c8b54(void)

{
  long unaff_x19;
  
  func_0x0001090c8ed0();
  if (*(long *)(unaff_x19 + 0x78) != 0) {
    func_0x0001090c8f08();
  }
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    func_0x0001090c8f08();
  }
  if (*(long *)(unaff_x19 + 0x88) != 0) {
    func_0x0001090c8f08();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x10);
  return;
}



/* Entry: 1090c8ba0; end: 1090c8d53;  */

void FUN_1090c8ba0(float param_1,long param_2)

{
  byte bVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  float fVar3;
  double dVar4;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  double dStack_60;
  undefined8 uStack_58;
  long alStack_48 [2];
  undefined8 uStack_38;
  
  fVar3 = param_1;
  func_0x0001090c8f54();
  uStack_38 = extraout_x8;
  func_0x0001090c8f00();
  *(float *)(param_2 + 0xa8) = param_1;
  lVar2 = *(long *)(param_2 + 0x88);
  if (lVar2 != 0) {
    if (param_1 == 0.0) {
      in_ZR = *(char *)(param_2 + 0xa4) == '\x01';
      if ((bool)in_ZR) {
        *(undefined1 *)(param_2 + 0xa4) = 0;
        _AudioOutputUnitStop();
      }
    }
    else {
      fVar3 = 1.0;
      bVar1 = *(byte *)(param_2 + 0xa6);
      in_ZR = (bool)bVar1 == (param_1 == 1.0);
      if (!(bool)in_ZR) {
        if (*(char *)(param_2 + 0xa4) == '\x01') {
          _AudioOutputUnitStop();
          *(undefined1 *)(param_2 + 0xa4) = 0;
          lVar2 = *(long *)(param_2 + 0x88);
        }
        _AudioUnitUninitialize(lVar2);
        _AudioUnitUninitialize(*(undefined8 *)(param_2 + 0x80));
        _AudioUnitUninitialize(*(undefined8 *)(param_2 + 0x78));
        fVar3 = 1.0;
        FUN_1090c84c4(alStack_48,param_2,param_1 == 1.0);
        in_ZR = alStack_48[0] == 1;
        if (!(bool)in_ZR) {
          func_0x0001090c8f64();
          goto LAB_1090c8d04;
        }
        in_ZR = param_1 == 1.0;
        if ((bool)in_ZR) {
          uStack_58 = *(undefined8 *)(param_2 + 0x88);
          dVar4 = *(double *)(param_2 + 0x80);
          dStack_60 = dVar4;
          FUN_1090c8aa4(&dStack_60,2);
        }
        else {
          uStack_78 = *(undefined8 *)(param_2 + 0x80);
          dVar4 = *(double *)(param_2 + 0x78);
          uStack_70 = *(undefined8 *)(param_2 + 0x88);
          dStack_80 = dVar4;
          FUN_1090c8aa4(&dStack_80,3);
        }
        dVar4 = dVar4 * (double)*(uint *)(param_2 + 0xa0);
        *(long *)(param_2 + 0x60) = (long)dVar4;
        *(ulong *)(param_2 + 0x68) = (ulong)*(uint *)(param_2 + 0xa0) | 0x100000000;
        func_0x0001090c8f3c();
        fVar3 = SUB84(dVar4,0);
        func_0x0001090c8f64();
        bVar1 = *(byte *)(param_2 + 0xa6);
      }
      if (((bVar1 & 1) == 0) && (*(long *)(param_2 + 0x78) != 0)) {
        fVar3 = *(float *)(param_2 + 0xa8);
        _AudioUnitSetParameter(*(long *)(param_2 + 0x78),0,0,0,0);
      }
      if ((*(byte *)(param_2 + 0xa4) & 1) == 0) {
        *(undefined1 *)(param_2 + 0xa4) = 1;
        _AudioOutputUnitStart();
      }
    }
  }
LAB_1090c8d04:
  func_0x0001090c8ef8();
  func_0x0001090c8f20(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001090c8f64();
  func_0x0001090c8ef8();
  func_0x0001090c8f34();
  func_0x0001090c8ed0();
  *(float *)(param_2 + 0xac) = fVar3;
  func_0x0001090c8f3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0x10);
  return;
}



/* Entry: 1090c8d54; end: 1090c8d93;  */

void FUN_1090c8d54(undefined4 param_1)

{
  long unaff_x19;
  
  func_0x0001090c8ed0();
  *(undefined4 *)(unaff_x19 + 0xac) = param_1;
  func_0x0001090c8f3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x10);
  return;
}



/* Entry: 1090c8d94; end: 1090c8dc3;  */

undefined4 FUN_1090c8d94(void)

{
  long unaff_x19;
  undefined4 uVar1;
  
  func_0x0001090c8ed0();
  uVar1 = *(undefined4 *)(unaff_x19 + 0xac);
  func_0x0001090c8ef8();
  return uVar1;
}



/* Entry: 1090c8dc4; end: 1090c8df7;  */

void FUN_1090c8dc4(undefined8 param_1,undefined1 param_2)

{
  long unaff_x19;
  
  func_0x0001090c8ed0();
  *(undefined1 *)(unaff_x19 + 0xa5) = param_2;
  func_0x0001090c8f3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x10);
  return;
}



/* Entry: 1090c8df8; end: 1090c8e4f;  */

undefined1 FUN_1090c8df8(void)

{
  undefined1 uVar1;
  long unaff_x19;
  
  func_0x0001090c8ed0();
  uVar1 = *(undefined1 *)(unaff_x19 + 0xa5);
  func_0x0001090c8ef8();
  return uVar1;
}



/* Entry: 1090c8e50; end: 1090c8e7b;  */

undefined8 * FUN_1090c8e50(undefined8 *param_1)

{
  FUN_1090c8e7c(*param_1);
  return param_1;
}



/* Entry: 1090c8e7c; end: 1090c8f8b;  */

void FUN_1090c8e7c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001090c8ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090c8f8c; end: 1090c90ab;  */

undefined8 *
FUN_1090c8f8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 *param_9,undefined8 param_10,undefined8 param_11)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uStack_78 = *param_9;
  lStack_70 = param_9[1];
  if (lStack_70 != 0) {
    plVar1 = (long *)(lStack_70 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = param_9[2];
  FUN_1090c7eb4(auStack_98,param_10);
  func_0x0001090f34a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,1,&uStack_78,
                      auStack_98);
  func_0x0001090e5d44(uStack_90);
  func_0x0001090e5ca4(lStack_70);
  *param_1 = &PTR_FUN_110ad8e98;
  param_1[0x12] = param_11;
  FUN_1090c19b0();
  return param_1;
}



/* Entry: 1090c90ac; end: 1090c90db;  */

undefined8 * FUN_1090c90ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad8e98;
  FUN_1090c1890(param_1 + 0x12);
  *param_1 = &PTR_DAT_110adb218;
  func_0x0001090f5fe0(param_1 + 0xe);
  func_0x0001090f5d40(param_1 + 0xb);
  FUN_1090c803c(param_1 + 2);
  return param_1;
}



/* Entry: 1090c90dc; end: 1090c90df;  */

undefined8 * FUN_1090c90dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad8e98;
  FUN_1090c1890(param_1 + 0x12);
  *param_1 = &PTR_DAT_110adb218;
  func_0x0001090f5fe0(param_1 + 0xe);
  func_0x0001090f5d40(param_1 + 0xb);
  FUN_1090c803c(param_1 + 2);
  return param_1;
}



/* Entry: 1090c90e0; end: 1090c90f3;  */

void FUN_1090c90e0(void)

{
  FUN_1090c90ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090c90f4; end: 1090c9447;  */

long * FUN_1090c90f4(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long *****ppppplVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong *puVar11;
  long *****unaff_x21;
  long *****ppppplVar12;
  ulong *puVar13;
  long *****ppppplVar14;
  long ****pppplStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined1 uStack_108;
  long ****pppplStack_100;
  long ****pppplStack_f8;
  ulong uStack_f0;
  long ****pppplStack_e8;
  long ****pppplStack_e0;
  ulong auStack_d8 [12];
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = (ulong *)(param_2 + 0x90);
  _CVPixelBufferGetPixelFormatType(*puVar11);
  FUN_1090cacb0(&lStack_78);
  if (lStack_78 == 1) {
    ppppplVar4 = (long *****)*puVar11;
    _CVPixelBufferGetPlaneCount();
    if (ppppplVar4 < (long *****)0x4) {
      uVar5 = *puVar11;
      _CVPixelBufferLockBaseAddress(uVar5,0);
      if ((int)uVar5 == 0) {
        unaff_x21 = (long *****)0x18;
        __Znwm();
        ppppplVar14 = unaff_x21 + 1;
        *ppppplVar14 = (long ****)0x1;
        *unaff_x21 = (long ****)&PTR_FUN_110ad8ed0;
        FUN_1090c1988(unaff_x21 + 2,puVar11);
        pppplStack_f8 = (long ****)unaff_x21;
        if (ppppplVar4 == (long *****)0x0) {
          uVar3 = (undefined4)uStack_70;
          uVar5 = *puVar11;
          _CVPixelBufferGetWidth();
          uVar6 = *puVar11;
          _CVPixelBufferGetHeight();
          uVar7 = *puVar11;
          _CVPixelBufferGetBaseAddress();
          uVar8 = *puVar11;
          _CVPixelBufferGetDataSize();
          uVar9 = *puVar11;
          _CVPixelBufferGetBytesPerRow();
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppppplVar14,0x10);
            if (bVar2) {
              *ppppplVar14 = (long ****)((long)*ppppplVar14 + 1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          pppplStack_178 = (long ****)CONCAT44(pppplStack_178._4_4_,uVar3);
          uStack_108 = 0;
          uStack_170 = uVar7;
          uStack_168 = uVar8;
          uStack_160 = uVar5;
          uStack_158 = uVar6;
          uStack_150 = uVar9;
          pppplStack_e0 = (long ****)unaff_x21;
          (*(code *)(*unaff_x21)[2])(unaff_x21);
          pppplStack_100 = (long ****)unaff_x21;
          func_0x0001090c9500();
          if ((long *****)pppplStack_100 != (long *****)0x0) {
            func_0x0001090c94f4();
          }
          ppppplVar4 = &pppplStack_e0;
        }
        else {
          auStack_d8[8] = 0;
          auStack_d8[7] = 0;
          auStack_d8[10] = 0;
          auStack_d8[9] = 0;
          auStack_d8[4] = 0;
          auStack_d8[3] = 0;
          auStack_d8[6] = 0;
          auStack_d8[5] = 0;
          auStack_d8[0] = 0;
          pppplStack_e0 = (long ****)0x0;
          auStack_d8[2] = 0;
          auStack_d8[1] = 0;
          puVar13 = auStack_d8 + 1;
          for (ppppplVar12 = (long *****)0x0; ppppplVar4 != ppppplVar12;
              ppppplVar12 = (long *****)((long)ppppplVar12 + 1)) {
            uVar5 = *puVar11;
            _CVPixelBufferGetBaseAddressOfPlane(uVar5,ppppplVar12);
            puVar13[-2] = uVar5;
            uVar5 = *puVar11;
            _CVPixelBufferGetWidthOfPlane(uVar5,ppppplVar12);
            puVar13[-1] = uVar5;
            uVar5 = *puVar11;
            _CVPixelBufferGetHeightOfPlane(uVar5,ppppplVar12);
            *puVar13 = uVar5;
            uVar5 = *puVar11;
            _CVPixelBufferGetBytesPerRowOfPlane(uVar5,ppppplVar12);
            puVar13[1] = uVar5;
            puVar13 = puVar13 + 4;
          }
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppppplVar14,0x10);
            if (bVar2) {
              *ppppplVar14 = (long ****)((long)*ppppplVar14 + 1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          pppplStack_e8 = (long ****)unaff_x21;
          func_0x0001090f3578(&pppplStack_178,uStack_70 & 0xffffffff,&pppplStack_e0,ppppplVar4,
                              &pppplStack_e8);
          func_0x0001090c9500();
          if ((long *****)pppplStack_100 != (long *****)0x0) {
            func_0x0001090c94f4();
          }
          ppppplVar4 = &pppplStack_e8;
        }
        func_0x000107c27900(ppppplVar4);
        FUN_1090c94a8(&pppplStack_f8);
      }
      else {
        FUN_1090caa88(&pppplStack_178,&UNK_10f54fcaf);
        *param_1 = 2;
        param_1[1] = pppplStack_178;
        pppplStack_178 = (long ****)0x0;
        func_0x000104bda93c(&pppplStack_178);
      }
    }
    else {
      auStack_d8[0] = 0;
      pppplStack_e0 = (long ****)ppppplVar4;
      func_0x000107c2793c(&UNK_10f54fc93);
      func_0x000107c3173c(&pppplStack_178);
      uStack_f0 = uStack_170;
      pppplStack_f8 = pppplStack_178;
      if (-1 < (long)uStack_168) {
        uStack_f0 = uStack_168 >> 0x38;
        pppplStack_f8 = (long ****)&pppplStack_178;
      }
      func_0x00010b99f5a8(&pppplStack_e8,&pppplStack_f8);
      *param_1 = 2;
      param_1[1] = pppplStack_e8;
      pppplStack_e8 = (long ****)0x0;
      func_0x000104bda93c(&pppplStack_e8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppplStack_178);
    }
  }
  else {
    *param_1 = 2;
    param_1[1] = uStack_70;
    uStack_70 = 0;
  }
  plVar10 = &lStack_78;
  func_0x0001090ac84c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    __ZdlPv(unaff_x21);
    func_0x0001090ac84c(&lStack_78);
    __Unwind_Resume();
    *plVar10 = (long)&PTR_FUN_110ad8ed0;
    _CVPixelBufferUnlockBaseAddress(plVar10[2],0);
    FUN_1090c1890(plVar10 + 2);
    return plVar10;
  }
  return plVar10;
}



/* Entry: 1090c9448; end: 1090c944b;  */

undefined8 * FUN_1090c9448(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad8ed0;
  _CVPixelBufferUnlockBaseAddress(param_1[2],0);
  FUN_1090c1890(param_1 + 2);
  return param_1;
}



/* Entry: 1090c944c; end: 1090c945f;  */

void FUN_1090c944c(void)

{
  FUN_1090c9460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090c9460; end: 1090c94a7;  */

undefined8 * FUN_1090c9460(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad8ed0;
  _CVPixelBufferUnlockBaseAddress(param_1[2],0);
  FUN_1090c1890(param_1 + 2);
  return param_1;
}



/* Entry: 1090c94a8; end: 1090c94f3;  */

long * FUN_1090c94a8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
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
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  return param_1;
}



/* Entry: 1090c94f4; end: 1090c950b;  */

void FUN_1090c94f4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090c94fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}



/* Entry: 1090c950c; end: 1090c954f;  */

undefined8 * FUN_1090c950c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  _CFDictionaryCreateMutable
            (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_11034ac18,
             PTR__kCFTypeDictionaryValueCallBacks_11034ac20);
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 1090c9550; end: 1090c95f3;  */

undefined8 * FUN_1090c9550(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((bRam0000000113829b80 & 1) == 0) {
    iVar1 = 0x13829b80;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0x78;
      __Znwm();
      *puVar2 = 0x32aaaba7;
      puVar2[2] = 0;
      puVar2[1] = 0;
      puVar2[4] = 0;
      puVar2[3] = 0;
      puVar2[6] = 0;
      puVar2[5] = 0;
      puVar2[7] = 0;
      puVar2[8] = &UNK_10dd5b8b0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[9] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puRam0000000113829b78 = puVar2;
      ___cxa_guard_release(0x113829b80);
    }
  }
  return puRam0000000113829b78;
}



/* Entry: 1090c95f4; end: 1090c96a3;  */

long FUN_1090c95f4(long param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x21;
  undefined1 *unaff_x22;
  long lStack_a8;
  undefined1 *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_68 [48];
  undefined8 uStack_38;
  
  func_0x0001090ca1e4();
  lVar1 = param_1;
  uStack_38 = extraout_x8;
  if (param_2 != 0) {
    func_0x0001090ca20c();
    unaff_x22 = auStack_68;
    __ZNSt3__15mutex4lockEv();
    func_0x0001090ca224();
    lVar1 = param_1;
    func_0x0001090ca244();
    if (!(bool)in_ZR) {
      FUN_1090c9764(auStack_68,param_2 + 8);
      lVar1 = unaff_x19 + 0x40;
      FUN_1090c9878(lVar1,param_1,param_2);
    }
    func_0x0001090ca1ac();
    _CFNotificationCenterGetLocalCenter();
    _CFNotificationCenterRemoveEveryObserver();
    func_0x0001090ca1c4();
    unaff_x21 = param_1;
  }
  func_0x0001090ca190(uStack_38);
  if ((bool)in_ZR) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x0001090ca1c4();
  __Unwind_Resume(lVar1);
  puStack_a0 = unaff_x22;
  lStack_98 = unaff_x21;
  lStack_90 = lVar1;
  func_0x0001090ca1d4();
  __ZNSt3__15mutex4lockEv();
  lStack_a8 = *(long *)(unaff_x21 + 0x70) + 1;
  *(long *)(unaff_x21 + 0x70) = lStack_a8;
  FUN_1090c973c(unaff_x21 + 0x40,&lStack_a8);
  FUN_1090c9764();
  __ZNSt3__15mutex6unlockEv(unaff_x21);
  _CFNotificationCenterGetLocalCenter();
  _CFNotificationCenterAddObserver();
  return lStack_a8;
}



/* Entry: 1090c96a4; end: 1090c973b;  */

long FUN_1090c96a4(void)

{
  long unaff_x21;
  long lStack_38;
  
  func_0x0001090ca1d4();
  __ZNSt3__15mutex4lockEv();
  lStack_38 = *(long *)(unaff_x21 + 0x70) + 1;
  *(long *)(unaff_x21 + 0x70) = lStack_38;
  FUN_1090c973c(unaff_x21 + 0x40,&lStack_38);
  FUN_1090c9764();
  __ZNSt3__15mutex6unlockEv();
  _CFNotificationCenterGetLocalCenter();
  _CFNotificationCenterAddObserver();
  return lStack_38;
}



/* Entry: 1090c973c; end: 1090c9763;  */

long FUN_1090c973c(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_1090c9914(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 1090c9764; end: 1090c978b;  */

undefined8 * FUN_1090c9764(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x0001080f3438(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 1090c978c; end: 1090c9847;  */

code ** FUN_1090c978c(code **param_1,long param_2)

{
  undefined1 in_ZR;
  code **ppcVar1;
  code **ppcVar2;
  code **ppcVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x9;
  long lStack_98;
  code **ppcStack_90;
  code *pcStack_68;
  code *apcStack_60 [5];
  undefined8 uStack_38;
  
  func_0x0001090ca1e4();
  uStack_38 = extraout_x8;
  FUN_1090c9550();
  func_0x0001090ca20c();
  pcStack_68 = extraout_x9;
  apcStack_60[0] = extraout_x8_00;
  __ZNSt3__15mutex4lockEv();
  func_0x0001090ca224();
  func_0x0001090ca244();
  if (!(bool)in_ZR) {
    pcStack_68 = *(code **)(param_2 + 8);
    param_1 = apcStack_60;
    param_2 = param_2 + 0x10;
    func_0x00010810412c(param_1,param_2);
  }
  func_0x0001090ca1ac();
  if (((byte)apcStack_60[0][8] & 1) == 0) {
    param_1 = &pcStack_68;
    (*pcStack_68)();
  }
  func_0x0001090ca238(apcStack_60[0]);
  func_0x0001090ca190(uStack_38);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001090ca238(apcStack_60[0]);
  ppcVar1 = param_1;
  __Unwind_Resume();
  ppcVar2 = ppcVar1;
  ppcStack_90 = param_1;
  FUN_1090c99c4();
  ppcVar3 = ppcVar1;
  FUN_1090c9f78(ppcVar1,param_2,ppcVar2,&lStack_98);
  if ((int)ppcVar3 == 0) {
    ppcVar1 = (code **)(*ppcVar1 + (long)ppcVar1[3]);
  }
  else {
    ppcVar1 = (code **)(*ppcVar1 + lStack_98);
  }
  return ppcVar1;
}



/* Entry: 1090c9848; end: 1090c9877;  */

long FUN_1090c9848(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_1090c99c4();
  plVar2 = param_1;
  FUN_1090c9f78(param_1,param_2,plVar1,&lStack_28);
  if ((int)plVar2 == 0) {
    lStack_28 = *param_1 + param_1[3];
  }
  else {
    lStack_28 = *param_1 + lStack_28;
  }
  return lStack_28;
}



/* Entry: 1090c9878; end: 1090c98c3;  */

undefined1  [16] FUN_1090c9878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001090ca1d4();
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_1090ca01c(&uStack_40);
  FUN_1090ca050();
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 1090c98c4; end: 1090c98e7;  */

undefined8 FUN_1090c98c4(undefined8 param_1)

{
  FUN_1090c98e8();
  return param_1;
}



/* Entry: 1090c98e8; end: 1090c9913;  */

void FUN_1090c98e8(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
    *param_1 = 0;
  }
  return;
}



/* Entry: 1090c9914; end: 1090c99c3;  */

void FUN_1090c9914(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  plVar2 = param_2;
  FUN_1090c99c4();
  plVar3 = param_2;
  puVar5 = param_3;
  func_0x0001090c99e8(param_2,param_3,plVar2);
  uVar4 = SUB81(puVar5,0);
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = (undefined8 *)(param_2[1] + (long)plVar3 * 0x38);
    uVar6 = *param_3;
    puVar5[4] = 0;
    puVar5[3] = 0;
    puVar5[6] = 0;
    puVar5[5] = 0;
    *puVar5 = uVar6;
    puVar5[1] = &UNK_1053a6a3c;
    puVar5[2] = &PTR_DAT_110a21c28;
    *(byte *)(*param_2 + (long)plVar3) = (byte)plVar2 & 0x7f;
    func_0x0001090ca1f4();
  }
  lVar1 = param_2[1];
  *param_1 = *param_2 + (long)plVar3;
  param_1[1] = lVar1 + (long)plVar3 * 0x38;
  *(undefined1 *)(param_1 + 2) = uVar4;
  return;
}



/* Entry: 1090c99c4; end: 1090c9ac7;  */

void FUN_1090c99c4(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  func_0x0001090c9aa8(&lStack_18);
  return;
}



/* Entry: 1090c9ac8; end: 1090c9b97;  */

void FUN_1090c9ac8(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  uVar4 = param_1[3];
  lVar1 = lVar3;
  FUN_1090c9b98(lVar3,uVar4,param_2);
  lVar2 = param_1[5];
  if (lVar2 != 0) goto LAB_1090c9b10;
  if (*(char *)(lVar3 + lVar1) == -2) {
    lVar2 = 0;
    goto LAB_1090c9b10;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
LAB_1090c9b6c:
    FUN_1090c9bd8(param_1,uVar4);
  }
  else {
    if (uVar4 - (uVar4 >> 3) >> 1 < (ulong)param_1[2]) {
      uVar4 = uVar4 << 1 | 1;
      goto LAB_1090c9b6c;
    }
    func_0x0001090c9d04(param_1);
  }
  lVar3 = *param_1;
  lVar1 = lVar3;
  FUN_1090c9b98(lVar3,param_1[3],param_2);
  lVar2 = param_1[5];
LAB_1090c9b10:
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar2 - (ulong)(*(char *)(lVar3 + lVar1) == -0x80);
  return;
}



/* Entry: 1090c9b98; end: 1090c9bd7;  */

ulong FUN_1090c9b98(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 1090c9bd8; end: 1090c9ec3;  */

void FUN_1090c9bd8(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar7 = param_1[3];
  lVar8 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar8 + param_2 * 0x38;
  __Znwm();
  *param_1 = lVar3;
  param_1[1] = lVar3 + lVar8;
  _memset();
  lVar8 = 0;
  *(undefined1 *)(lVar3 + param_2) = 0xff;
  lVar3 = 6;
  if (param_2 != 7) {
    lVar3 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar3 - param_1[2];
  param_1[3] = param_2;
  for (; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar3 = lVar5;
      FUN_1090c9ec4();
      lVar6 = *param_1;
      lVar4 = lVar6;
      FUN_1090c9b98(lVar6,param_1[3],lVar3);
      bVar2 = (byte)lVar3 & 0x7f;
      *(byte *)(lVar6 + lVar4) = bVar2;
      *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar4 - 8U) + 1) = bVar2;
      FUN_1090c9ee4(param_1[1] + lVar4 * 0x38,lVar5);
    }
    lVar5 = lVar5 + 0x38;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1090c9ec4; end: 1090c9ee3;  */

void FUN_1090c9ec4(undefined8 *param_1)

{
  undefined1 uStack_11;
  
  func_0x000107c27918(&uStack_11,*param_1);
  return;
}



/* Entry: 1090c9ee4; end: 1090c9f77;  */

void FUN_1090c9ee4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  plVar1 = param_2 + 2;
  (**(code **)(*plVar1 + 0x10))(param_1 + 2,plVar1);
                    /* WARNING: Could not recover jumptable at 0x0001090c9f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*plVar1)(plVar1);
  return;
}



/* Entry: 1090c9f78; end: 1090ca01b;  */

bool FUN_1090c9f78(long *param_1,long *param_2,ulong param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = 0;
  uVar4 = param_3 >> 7;
  uVar2 = param_1[3];
  lVar3 = *param_1;
  while( true ) {
    uVar4 = uVar4 & uVar2;
    uVar6 = *(ulong *)(lVar3 + uVar4);
    uVar5 = uVar6 ^ (param_3 & 0x7f) * 0x101010101010101;
    for (uVar5 = uVar5 + 0xfefefefefefefeff & (uVar5 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar7 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar4 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
      *param_4 = uVar7;
      if (*(long *)(param_1[1] + uVar7 * 0x38) == *param_2) goto LAB_1090ca010;
    }
    if ((uVar6 & ~uVar6 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar4 = lVar1 + uVar4;
  }
LAB_1090ca010:
  return uVar5 != 0;
}



/* Entry: 1090ca01c; end: 1090ca04f;  */

long * FUN_1090ca01c(long *param_1)

{
  param_1[1] = param_1[1] + 0x38;
  *param_1 = *param_1 + 1;
  FUN_1090ca090();
  return param_1;
}



/* Entry: 1090ca050; end: 1090ca08f;  */

void FUN_1090ca050(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  long *unaff_x21;
  
  func_0x0001090ca1d4();
  (*(code *)**(undefined8 **)(param_3 + 0x10))();
  uVar2 = 0;
  unaff_x21[2] = unaff_x21[2] + -1;
  puVar3 = (undefined1 *)((long)unaff_x20 + (-8 - *unaff_x21));
  uVar5 = *(ulong *)(*unaff_x21 + ((ulong)puVar3 & unaff_x21[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *unaff_x20 & ~*unaff_x20 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)unaff_x20 = uVar4;
  *(undefined1 *)(*unaff_x21 + (unaff_x21[3] & 7U) + (unaff_x21[3] & (ulong)puVar3) + 1) = uVar4;
  unaff_x21[5] = unaff_x21[5] + uVar2;
  return;
}



/* Entry: 1090ca090; end: 1090ca0eb;  */

void FUN_1090ca090(long *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uStack_28;
  
  pcVar2 = (char *)*param_1;
  while (*pcVar2 < -1) {
    uStack_28 = *(undefined8 *)pcVar2;
    puVar1 = &uStack_28;
    func_0x000107c27e58();
    pcVar2 = (char *)(*param_1 + ((ulong)puVar1 & 0xffffffff));
    *param_1 = (long)pcVar2;
    param_1[1] = param_1[1] + ((ulong)puVar1 & 0xffffffff) * 0x38;
  }
  return;
}



/* Entry: 1090ca0ec; end: 1090ca257;  */

void FUN_1090ca0ec(long *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = 0;
  param_1[2] = param_1[2] + -1;
  puVar3 = (undefined1 *)((long)param_2 + (-8 - *param_1));
  uVar5 = *(ulong *)(*param_1 + ((ulong)puVar3 & param_1[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar4;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)puVar3) + 1) = uVar4;
  param_1[5] = param_1[5] + uVar2;
  return;
}



/* Entry: 1090ca258; end: 1090ca32f;  */

void FUN_1090ca258(undefined8 *param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_28 [8];
  
  uVar4 = *(uint *)(param_2 + 0x18);
  uVar1 = *(ushort *)(param_2 + 0x14);
  if (*(int *)(param_2 + 0x10) == 0x6d703461) {
    iVar2 = 0;
    uVar3 = 0;
    uVar7 = 0x40000000000;
    uVar6 = 0x61616320;
  }
  else {
    if (*(int *)(param_2 + 0x10) != 0x6c70636d) {
      func_0x00010b99f5f8(auStack_28,&UNK_10f54fcd9);
      func_0x0001090cbde0();
      return;
    }
    if (*(int *)(param_2 + 0x1c) == 1) {
      iVar2 = (uint)uVar1 << 2;
      uVar6 = 0x96c70636d;
      uVar7 = CONCAT44(1,iVar2);
      uVar3 = 0x20;
    }
    else {
      iVar2 = 0;
      uVar3 = 0;
      uVar7 = 0x100000000;
      uVar6 = 0x6c70636d;
    }
  }
  *param_1 = 1;
  uVar5 = NEON_ucvtf((ulong)uVar4);
  param_1[1] = uVar5;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  *(int *)(param_1 + 4) = iVar2;
  *(uint *)((long)param_1 + 0x24) = (uint)uVar1;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  return;
}



/* Entry: 1090ca330; end: 1090caa2b;  */

void FUN_1090ca330(undefined8 *param_1,long param_2)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined1 in_ZR;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 extraout_x8;
  long *plVar9;
  long unaff_x20;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001090cbeb0();
  uStack_38 = extraout_x8;
  func_0x0001090cbe28();
  if (param_2 == 0) {
    func_0x0001090cbef0();
    if (param_2 == 0) {
      func_0x00010b99f5f8(&lStack_68,&UNK_10f54fcf1);
      *param_1 = 2;
      param_1[1] = lStack_68;
      lStack_68 = 0;
      func_0x000104bda93c();
      goto LAB_1090ca8a0;
    }
    FUN_1090ca258(&lStack_68);
    in_ZR = lStack_68 == 1;
    if ((bool)in_ZR) {
      uStack_88 = uStack_58;
      lStack_90 = lStack_60;
      uStack_78 = uStack_48;
      uStack_80 = uStack_50;
      uStack_70 = uStack_40;
      uStack_9c = 0;
      uStack_a4 = 0;
      uStack_ac = 0;
      uStack_b4 = 0;
      uStack_b0 = 0;
      if (*(short *)(param_2 + 0x14) == 1) {
        uStack_b8 = 0x640001;
        in_ZR = true;
      }
      else {
        in_ZR = *(short *)(param_2 + 0x14) == 2;
        if (!(bool)in_ZR) {
          func_0x00010b99f5f8(&uStack_98,&UNK_10f54fef6);
          *param_1 = 2;
          param_1[1] = uStack_98;
          uStack_98 = 0;
          func_0x000104bda93c(&uStack_98);
          goto LAB_1090ca758;
        }
        uStack_b8 = 0x650002;
      }
      uStack_98 = 0;
      uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
      _CMAudioFormatDescriptionCreate
                (uVar7,&lStack_90,0x20,&uStack_b8,*(undefined8 *)(param_2 + 0x30),
                 *(undefined8 *)(param_2 + 0x40),0,&uStack_98);
      if ((int)uVar7 == 0) {
        *param_1 = 1;
        param_1[1] = uStack_98;
        uStack_98 = 0;
      }
      else {
        FUN_1090caa2c(&uStack_c0,&DAT_10f54d50d);
        *param_1 = 2;
        param_1[1] = uStack_c0;
        uStack_c0 = 0;
        func_0x000104bda93c(&uStack_c0);
      }
      FUN_1090aeaf0(&uStack_98);
    }
    else {
      *param_1 = 2;
      param_1[1] = lStack_60;
      lStack_60 = 0;
    }
LAB_1090ca758:
    func_0x0001090c70f0(&lStack_68);
    unaff_x20 = param_2;
    goto LAB_1090ca8a0;
  }
  FUN_1090c950c(&uStack_c0);
  if (*(char *)(param_2 + 0x68) == '\x01') {
    func_0x0001090cbea8();
    FUN_1090cb874(*(undefined4 *)(param_2 + 0x60),&lStack_90,
                  *(undefined8 *)PTR__kCVImageBufferPixelAspectRatioHorizontalSpacingKey_11034a2f0);
    FUN_1090cb874(*(undefined4 *)(param_2 + 100),&lStack_90,
                  *(undefined8 *)PTR__kCVImageBufferPixelAspectRatioVerticalSpacingKey_11034a300);
    lStack_68 = lStack_90;
    func_0x0001090cbed8();
    FUN_1090c98c4();
    lStack_c8 = lStack_68;
    func_0x0001090cba18(&lStack_c8);
    FUN_1090cb8dc(&uStack_c0,*(undefined8 *)PTR__kCVImageBufferPixelAspectRatioKey_11034a2f8,
                  &lStack_c8);
    FUN_1090c98c4(&lStack_c8);
    FUN_1090c98c4(&lStack_68);
  }
  if (*(char *)(param_2 + 0x78) == '\x01') {
    func_0x0001090cbea8();
    func_0x0001090cbdd4();
    func_0x0001090cbe10();
    func_0x0001090cbd9c();
    func_0x0001090cbe1c();
  }
  else if (*(char *)(param_2 + 0x79) == '\x01') {
    func_0x0001090cbea8();
    func_0x0001090cbdd4();
    func_0x0001090cbe10();
    func_0x0001090cbd9c();
    func_0x0001090cbe1c();
  }
  else {
    if (*(char *)(param_2 + 0x7a) != '\x01') goto LAB_1090ca504;
    func_0x0001090cbea8();
    func_0x0001090cbdd4();
    func_0x0001090cbe10();
    func_0x0001090cbd9c();
    func_0x0001090cbe1c();
  }
  FUN_1090c98c4(auStack_d0);
  func_0x0001090cbe88();
  FUN_1090c98c4(&lStack_90);
LAB_1090ca504:
  uVar6 = param_2 + 0x1c;
  FUN_1090e4f7c();
  unaff_x20 = param_2;
  if ((uVar6 & 1) != 0) goto LAB_1090ca580;
  if ((bRam0000000113730a28 & 1) == 0) goto LAB_1090ca8c4;
  while( true ) {
    puVar8 = puRam0000000113730a20;
    uStack_88 = *(undefined8 *)(unaff_x20 + 0x24);
    lStack_90 = *(long *)(unaff_x20 + 0x1c);
    uStack_80 = *(undefined8 *)(unaff_x20 + 0x2c);
    func_0x00010b98928c(&uStack_d8,&lStack_90,6);
    uStack_b8 = SUB84(puVar8,0);
    uStack_b4 = (undefined4)((ulong)puVar8 >> 0x20);
    func_0x00010b989884(&uStack_b8);
    uStack_98 = uStack_d8;
    func_0x00010b989884(&uStack_98);
    _CFDictionaryAddValue(uStack_c0,CONCAT44(uStack_b4,uStack_b8),uStack_98);
    FUN_1090cba70(&uStack_98);
    func_0x0001090cbe78();
    func_0x0001090cbd78();
LAB_1090ca580:
    iVar5 = *(int *)(unaff_x20 + 0x10);
    if (iVar5 == 0x61766333) {
      iVar4 = 0x61766331;
    }
    else {
      iVar4 = 0x68766331;
      if (iVar5 != 0x68657631 && iVar5 != 0x68763120) {
        iVar4 = iVar5;
      }
    }
    in_ZR = 0;
    if ((*(char *)(unaff_x20 + 0x76) == '\x01') &&
       (in_ZR = 0, *(char *)(unaff_x20 + 0x6c) == '\x01')) {
      uVar3 = *(ushort *)(unaff_x20 + 0x6e) - 1;
      if ((uVar3 < 9) &&
         (((0x139U >> (ulong)(uVar3 & 0x1f) & 1) != 0 &&
          (*(long *)(&PTR__kCVImageBufferColorPrimaries_ITU_R_709_2_110ad8f20)
                    [(ulong)uVar3 & 0xffff] != 0)))) {
        func_0x0001090cbf40();
      }
      uVar2 = *(ushort *)(unaff_x20 + 0x70);
      plVar9 = (long *)PTR__kCVImageBufferTransferFunction_UseGamma_11034a340;
      if (((((uVar2 - 4 < 2) ||
            (plVar9 = (long *)PTR__kCVImageBufferTransferFunction_ITU_R_709_2_11034a328, uVar2 == 1)
            ) || (plVar9 = (long *)PTR__kCMFormatDescriptionTransferFunction_sRGB_1103485a0,
                 uVar2 == 0xd)) ||
          ((plVar9 = (long *)PTR__kCMFormatDescriptionTransferFunction_SMPTE_ST_2084_PQ_110348598,
           uVar2 == 0x10 ||
           (plVar9 = (long *)PTR__kCMFormatDescriptionTransferFunction_ITU_R_2100_HLG_110348590,
           uVar2 == 0x12)))) && (*plVar9 != 0)) {
        func_0x0001090cbf40();
      }
      plVar9 = (long *)PTR__kCVImageBufferYCbCrMatrix_ITU_R_709_2_11034a368;
      if (((*(short *)(unaff_x20 + 0x72) == 1) ||
          (plVar9 = (long *)PTR__kCMFormatDescriptionYCbCrMatrix_ITU_R_2020_1103485a8,
          *(short *)(unaff_x20 + 0x72) == 9)) && (*plVar9 != 0)) {
        func_0x0001090cbf40();
      }
      lStack_90 = *(long *)PTR__kCMFormatDescriptionExtension_FullRangeVideo_110348580;
      cVar1 = *(char *)(unaff_x20 + 0x74);
      func_0x00010b989884(&lStack_90);
      in_ZR = cVar1 == '\0';
      uVar7 = *(undefined8 *)PTR__kCFBooleanTrue_11034ab90;
      if ((bool)in_ZR) {
        uVar7 = *(undefined8 *)PTR__kCFBooleanFalse_11034ab88;
      }
      uStack_b8 = (undefined4)uVar7;
      uStack_b4 = (undefined4)((ulong)uVar7 >> 0x20);
      func_0x00010b989884(&uStack_b8);
      _CFDictionaryAddValue(uStack_c0,lStack_90,CONCAT44(uStack_b4,uStack_b8));
      func_0x0001090cbe78();
      FUN_1090cba70(&lStack_90);
    }
    lStack_90 = 0;
    uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    _CMVideoFormatDescriptionCreate
              (uVar7,iVar4,*(undefined4 *)(unaff_x20 + 0x14),*(undefined4 *)(unaff_x20 + 0x18),
               uStack_c0,&lStack_90);
    if ((int)uVar7 == 0) {
      *param_1 = 1;
      param_1[1] = lStack_90;
      lStack_90 = 0;
    }
    else {
      FUN_1090caa2c(&uStack_b8,&DAT_10f54d546);
      func_0x0001090cbdf8();
    }
    FUN_1090aeaf0(&lStack_90);
    FUN_1090c98c4(&uStack_c0);
LAB_1090ca8a0:
    func_0x0001090cbd88(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_1090ca8c4:
    iVar5 = 0x13730a28;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      puVar8 = &DAT_10f3be3bb;
      func_0x00010b9893c8();
      func_0x0001090cbed8();
      FUN_1090cba28();
      puRam0000000113730a20 = puVar8;
      ___cxa_guard_release(0x113730a28);
    }
  }
  return;
}



/* Entry: 1090caa2c; end: 1090caa87;  */

void FUN_1090caa2c(void)

{
  func_0x0001090cbe98();
  func_0x000107c2793c(&UNK_10f54fd62);
  func_0x0001090cbe48();
  func_0x0001090cbec0();
  func_0x0001090cbf14();
  func_0x0001090cbe80();
  return;
}



/* Entry: 1090caa88; end: 1090caae3;  */

void FUN_1090caa88(void)

{
  func_0x0001090cbe98();
  func_0x000107c2793c(&UNK_10f54fd75);
  func_0x0001090cbe48();
  func_0x0001090cbec0();
  func_0x0001090cbf14();
  func_0x0001090cbe80();
  return;
}



/* Entry: 1090caae4; end: 1090caae7;  */

void FUN_1090caae4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbb858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CMTimeMake_110348440)();
  return;
}



/* Entry: 1090caae8; end: 1090cac4b;  */

void FUN_1090caae8(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 == 1) {
    uStack_48 = 0;
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    uVar1 = uVar2;
    _CMVideoFormatDescriptionCreateForImageBuffer(uVar2,param_4,&uStack_48);
    if ((int)uVar1 == 0) {
      uStack_50 = 0;
      _CMSampleBufferCreateForImageBuffer(uVar2,param_4,1,0,0,uStack_48,param_2,&uStack_50);
      if ((int)uVar2 == 0) {
        FUN_1090cac4c(uStack_50,*param_5);
        *param_1 = 1;
        param_1[1] = uStack_50;
        uStack_50 = 0;
      }
      else {
        FUN_1090caa2c(auStack_58,&UNK_10f54fda8);
        func_0x0001090cbde0();
      }
      FUN_1090ac054(&uStack_50);
    }
    else {
      FUN_1090caa2c(&uStack_50,&DAT_10f54dabf);
      *param_1 = 2;
      param_1[1] = uStack_50;
      uStack_50 = 0;
      func_0x000104bda93c(&uStack_50);
    }
    FUN_1090aeaf0(&uStack_48);
  }
  else {
    func_0x00010b99f5f8(&uStack_48,&UNK_10f54fd88);
    *param_1 = 2;
    param_1[1] = uStack_48;
    uStack_48 = 0;
    func_0x000104bda93c(&uStack_48);
  }
  return;
}



/* Entry: 1090cac4c; end: 1090cacaf;  */

void FUN_1090cac4c(long param_1,ulong param_2)

{
  long lVar1;
  
  if ((((param_1 != 0) && ((param_2 & 1) != 0)) &&
      (_CMSampleBufferGetSampleAttachmentsArray(param_1,1), param_1 != 0)) &&
     (lVar1 = param_1, _CFArrayGetCount(), lVar1 != 0)) {
    _CFArrayGetValueAtIndex(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdba37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFDictionarySetValue_11034a608)();
    return;
  }
  return;
}



/* Entry: 1090cacb0; end: 1090cadff;  */

void FUN_1090cacb0(long param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 extraout_w8;
  undefined1 *puStack_60;
  ulong uStack_58;
  byte bStack_49;
  undefined1 *puStack_48;
  ulong uStack_40;
  undefined1 auStack_38 [8];
  ulong uStack_30;
  undefined8 uStack_28;
  
  if (param_2 == 0x20) {
    func_0x0001090cbe5c();
    uVar1 = 4;
  }
  else {
    if (param_2 == 0x34323066) {
      func_0x0001090cbe5c();
      *(undefined4 *)(param_1 + 8) = extraout_w8;
      return;
    }
    if (param_2 == 0x34343466) {
      func_0x0001090cbe5c();
      uVar1 = 2;
    }
    else if (param_2 == 0x41424752) {
      func_0x0001090cbe5c();
      uVar1 = 5;
    }
    else {
      if (param_2 == 0x79343230) {
        func_0x0001090cbe5c();
        *(undefined4 *)(param_1 + 8) = 0;
        return;
      }
      if (param_2 == 0x52474241) {
        func_0x0001090cbe5c();
        uVar1 = 3;
      }
      else {
        if (param_2 != 0x42475241) {
          uStack_30 = (ulong)param_2;
          uStack_28 = 0;
          func_0x000107c2793c(&UNK_10f54fdc7);
          func_0x000107c3173c(&puStack_60);
          uStack_40 = uStack_58;
          puStack_48 = puStack_60;
          if (-1 < (char)bStack_49) {
            uStack_40 = (ulong)bStack_49;
            puStack_48 = (undefined1 *)&puStack_60;
          }
          func_0x00010b99f5a8(auStack_38,&puStack_48);
          func_0x0001090cbdf8();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_60);
          return;
        }
        func_0x0001090cbe5c();
        uVar1 = 6;
      }
    }
  }
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



/* Entry: 1090cae00; end: 1090cae23;  */

void FUN_1090cae00(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001090cbdb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))();
    return;
  }
  return;
}



/* Entry: 1090cae24; end: 1090cb56f;  */

/* WARNING: Type propagation algorithm not settling */

undefined1 ** FUN_1090cae24(undefined8 *param_1,ulong *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined1 uVar11;
  ulong *puVar12;
  long *plVar13;
  undefined8 **ppuVar14;
  undefined8 ***pppuVar15;
  undefined1 **ppuVar16;
  undefined1 **ppuVar17;
  undefined1 **ppuVar18;
  long lVar19;
  undefined8 extraout_x8;
  long lVar20;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long *plVar23;
  undefined8 **unaff_x22;
  undefined8 **unaff_x23;
  ulong uVar24;
  undefined8 **ppuVar25;
  ulong uVar26;
  undefined8 *puVar27;
  ulong uVar28;
  long lVar29;
  undefined8 uStack_820;
  undefined8 uStack_818;
  long lStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  long alStack_7a0 [2];
  undefined **ppuStack_790;
  ulong uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined1 *puStack_750;
  long lStack_748;
  undefined8 uStack_740;
  long lStack_730;
  undefined8 *puStack_728;
  ulong uStack_720;
  undefined8 **ppuStack_718;
  ulong uStack_710;
  undefined8 **ppuStack_708;
  undefined8 **ppuStack_700;
  long *plStack_6f8;
  ulong *puStack_6f0;
  undefined1 **ppuStack_6e8;
  undefined1 *puStack_6e0;
  code *pcStack_6d8;
  undefined8 ***pppuStack_6d0;
  undefined8 ***pppuStack_6c8;
  undefined8 ***pppuStack_6c0;
  code *pcStack_6b8;
  undefined8 **ppuStack_6b0;
  undefined8 uStack_6a8;
  undefined8 ***pppuStack_6a0;
  undefined8 *puStack_698;
  undefined8 uStack_690;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined1 auStack_680 [8];
  undefined8 auStack_678 [9];
  long lStack_630;
  undefined8 **ppuStack_620;
  undefined8 uStack_618;
  undefined8 **ppuStack_610;
  undefined8 *puStack_608;
  ulong uStack_600;
  undefined8 **ppuStack_5f8;
  undefined8 uStack_5f0;
  ulong uStack_5d8;
  char cStack_590;
  undefined8 **ppuStack_588;
  undefined1 *puStack_580;
  long lStack_578;
  long lStack_570;
  undefined1 auStack_568 [1152];
  undefined8 **appuStack_e8 [9];
  ulong auStack_a0 [4];
  undefined4 uStack_80;
  undefined8 uStack_78;
  
  uVar24 = 0;
  ppuVar25 = &puStack_608;
  puVar12 = param_2;
  puStack_698 = param_1;
  func_0x0001090cbeb0();
  uVar26 = *puVar12;
  puVar27 = (undefined8 *)(uVar26 + 0x68);
  uStack_688 = (undefined4)*(undefined8 *)(uVar26 + 0x40);
  uStack_684 = (undefined4)((ulong)*(undefined8 *)(uVar26 + 0x40) >> 0x20);
  uStack_690._0_4_ = (undefined4)*(undefined8 *)(uVar26 + 0x38);
  uStack_690._4_4_ = (undefined4)((ulong)*(undefined8 *)(uVar26 + 0x38) >> 0x20);
  auStack_a0[1] = *(undefined8 *)(uVar26 + 0x20);
  auStack_a0[0] = *(ulong *)(uVar26 + 0x18);
  puStack_580 = auStack_568;
  puVar22 = (undefined8 *)0x0;
  lStack_570 = 0x10;
  lStack_578 = 0;
  lVar29 = 0x18;
  uStack_78 = extraout_x8;
  while( true ) {
    uVar11 = uVar24 == *(ulong *)(uVar26 + 0x78);
    if (*(ulong *)(uVar26 + 0x78) <= uVar24) break;
    puVar22 = puVar27;
    if (*(long *)(uVar26 + 0x70) != 0) {
      puVar22 = (undefined8 *)(*(long *)(uVar26 + 0x70) + lVar29);
    }
    unaff_x22 = (undefined8 **)*puVar22;
    unaff_x23 = (undefined8 **)((ulong)*(uint *)(uVar26 + 0x80) | 0x100000000);
    puVar22 = (undefined8 *)(puStack_580 + lStack_578 * 0x48);
    appuStack_e8[6] = unaff_x22;
    appuStack_e8[7] = unaff_x23;
    if (lStack_578 == lStack_570) {
      FUN_1090cbb4c(&puStack_608,&puStack_580,puVar22);
      puVar22 = puStack_608;
    }
    else {
      puVar22[8] = 0;
      puVar22[5] = 0;
      puVar22[4] = 0;
      puVar22[7] = 0;
      puVar22[6] = 0;
      puVar22[1] = 0;
      *puVar22 = 0;
      puVar22[3] = 0;
      puVar22[2] = 0;
      lStack_578 = lStack_578 + 1;
    }
    FUN_1090caae4(&puStack_608,unaff_x22,unaff_x23);
    puVar22[2] = ppuStack_5f8;
    puVar22[1] = uStack_600;
    *puVar22 = puStack_608;
    FUN_1090caae4(&puStack_608,CONCAT44(uStack_690._4_4_,(undefined4)uStack_690),
                  CONCAT44(uStack_684,uStack_688));
    puVar22[7] = uStack_600;
    puVar22[6] = puStack_608;
    puVar22[8] = ppuStack_5f8;
    FUN_1090caae4(&puStack_608,auStack_a0[0],auStack_a0[1]);
    puVar22[4] = uStack_600;
    puVar22[3] = puStack_608;
    puVar22[5] = ppuStack_5f8;
    puVar22 = puStack_608;
    func_0x0001090fc030(&uStack_690,appuStack_e8 + 6);
    puVar12 = auStack_a0;
    func_0x0001090fc030(puVar12,appuStack_e8 + 6);
    uVar24 = uVar24 + 1;
    puVar27 = puVar27 + 1;
    lVar29 = lVar29 + 8;
  }
  plVar23 = (long *)*param_2;
  if ((plVar23 != (long *)0x0) && (func_0x0001090cbef0(), puVar12 != (ulong *)0x0)) {
    FUN_1090caae8(puStack_698,puStack_580,lStack_578,puVar12[0x12],plVar23 + 0x11);
    goto LAB_1090cb47c;
  }
  (**(code **)(*plVar23 + 0x20))(&puStack_608,plVar23);
  puVar7 = PTR__kCFAllocatorDefault_11034ab78;
  uVar11 = puStack_608 == (undefined8 *)0x1;
  if ((bool)uVar11) {
    uVar28 = uStack_600 & 0xffffffff;
    uVar11 = (int)uStack_600 - 7U == 1;
    puVar27 = (undefined8 *)puVar7;
    if ((int)uStack_600 - 7U < 2) {
      FUN_1090ca330(auStack_a0,*(undefined8 *)(*param_2 + 0x10));
      uVar11 = auStack_a0[0] == 1;
      if ((bool)uVar11) {
        unaff_x23 = (undefined8 **)0x0;
        if (cStack_590 == '\0') {
          unaff_x23 = ppuStack_5f8;
        }
        uVar1 = 0;
        if (cStack_590 == '\0') {
          uVar1 = uStack_5f0;
        }
        if (*(char *)(*param_2 + 0x89) == '\x01') {
          uStack_690._0_4_ = 0;
          uStack_690._4_4_ = 0;
          plVar23 = *(long **)puVar7;
          pppuStack_6d0 = (undefined8 ***)&uStack_690;
          plVar13 = plVar23;
          _CMBlockBufferCreateWithMemoryBlock(plVar23,0,uVar1,plVar23,0,0,uVar1,1);
          if ((int)plVar13 == 0) {
            ppuVar14 = unaff_x23;
            _CMBlockBufferReplaceDataBytes
                      (unaff_x23,CONCAT44(uStack_690._4_4_,(undefined4)uStack_690),0,uVar1);
            if ((int)ppuVar14 != 0) {
              func_0x0001090cbf20(&UNK_10f54fe2c);
              goto LAB_1090cb388;
            }
            lVar19 = 1;
            unaff_x22 = (undefined8 **)CONCAT44(uStack_690._4_4_,(undefined4)uStack_690);
            appuStack_e8[6] = (undefined8 **)0x1;
            uStack_690._0_4_ = 0;
            uStack_690._4_4_ = 0;
            appuStack_e8[7] = unaff_x22;
          }
          else {
            func_0x0001090cbf20(&UNK_10f54fe03);
LAB_1090cb388:
            unaff_x22 = appuStack_e8[3];
            lVar19 = 2;
            appuStack_e8[6] = (undefined8 **)0x2;
            appuStack_e8[7] = appuStack_e8[3];
            func_0x0001090cbf28();
          }
          pppuVar15 = (undefined8 ***)&uStack_690;
        }
        else {
          uStack_690._0_4_ = 0;
          uStack_690._4_4_ = 0;
          uStack_688 = 0;
          uStack_684 = 0x90cae18;
          auStack_680._0_4_ = 1;
          if (ppuStack_588 != (undefined8 **)0x0) {
            (*(code *)(*ppuStack_588)[2])(ppuStack_588);
          }
          stack0xfffffffffffff984 = ppuStack_588;
          appuStack_e8[3] = (undefined8 **)0x0;
          plVar23 = *(long **)puVar7;
          pppuStack_6d0 = appuStack_e8 + 3;
          plVar13 = plVar23;
          _CMBlockBufferCreateWithMemoryBlock
                    (plVar23,unaff_x23,uVar1,*(undefined8 *)PTR__kCFAllocatorNull_11034ab80,
                     &uStack_690,0,uVar1,0);
          unaff_x22 = appuStack_e8[3];
          if ((int)plVar13 == 0) {
            lVar19 = 1;
            appuStack_e8[6] = (undefined8 **)0x1;
            appuStack_e8[7] = appuStack_e8[3];
            appuStack_e8[3] = (undefined8 **)0x0;
          }
          else {
            FUN_1090caa2c(appuStack_e8,&DAT_10f54f6f2);
            unaff_x22 = appuStack_e8[0];
            lVar19 = 2;
            appuStack_e8[6] = (undefined8 **)0x2;
            appuStack_e8[7] = appuStack_e8[0];
            appuStack_e8[0] = (undefined8 **)0x0;
            func_0x000104bda93c(appuStack_e8);
          }
          pppuVar15 = appuStack_e8 + 3;
        }
        FUN_1090cbc98(pppuVar15);
        uVar11 = lVar19 == 1;
        if ((bool)uVar11) {
          uVar28 = *param_2;
          uStack_690._0_4_ = 0;
          uStack_690._4_4_ = 0;
          uVar11 = *(long *)(uVar28 + 0x58) == 0;
          lVar19 = uVar28 + 0x50;
          if (!(bool)uVar11) {
            lVar19 = *(long *)(uVar28 + 0x58) + 0x18;
          }
          pppuStack_6d0 = (undefined8 ***)&uStack_690;
          plVar13 = plVar23;
          _CMSampleBufferCreateReady
                    (plVar23,unaff_x22,auStack_a0[1],*(undefined8 *)(uVar28 + 0x48),lStack_578,
                     puStack_580,*(undefined8 *)(uVar28 + 0x60),lVar19);
          if ((int)plVar13 == 0) {
            FUN_1090cac4c(CONCAT44(uStack_690._4_4_,(undefined4)uStack_690),
                          *(undefined1 *)(*param_2 + 0x88));
            *puStack_698 = 1;
            puStack_698[1] = CONCAT44(uStack_690._4_4_,(undefined4)uStack_690);
            uStack_690._0_4_ = 0;
            uStack_690._4_4_ = 0;
          }
          else {
            func_0x0001090cbf20(&DAT_10f54e026);
            *puStack_698 = 2;
            puStack_698[1] = appuStack_e8[3];
            func_0x0001090cbf28();
          }
          FUN_1090ac054(&uStack_690);
        }
        else {
          *puStack_698 = 2;
          puStack_698[1] = unaff_x22;
          appuStack_e8[7] = (undefined8 **)0x0;
        }
        func_0x0001090cbcc4(appuStack_e8 + 6);
      }
      else {
        *puStack_698 = 2;
        puStack_698[1] = auStack_a0[1];
        auStack_a0[1] = 0;
      }
      func_0x0001090aeac8(auStack_a0);
    }
    else {
      lVar19 = *(long *)(*param_2 + 0x10);
      if ((lVar19 == 0) || (func_0x0001090cbe28(), lVar19 == 0)) {
        func_0x00010b99f5f8(&uStack_690,&UNK_10f54fe5a);
        *puStack_698 = 2;
        puStack_698[1] = CONCAT44(uStack_690._4_4_,(undefined4)uStack_690);
        func_0x0001090cbf34();
      }
      else {
        uVar4 = *(undefined4 *)(&UNK_10dfb3770 + uVar28 * 4);
        auStack_a0[3] = 1;
        ppuStack_620 = (undefined8 **)0x0;
        uVar11 = cStack_590 == '\x01';
        uStack_80 = uVar4;
        if ((bool)uVar11) {
          _memcpy(&uStack_690,&ppuStack_5f8,0x68);
          puVar21 = (undefined8 *)auStack_680;
          for (lVar20 = 0; uVar11 = lStack_630 == lVar20, !(bool)uVar11; lVar20 = lVar20 + 1) {
            ppuVar25 = (undefined8 **)puVar21[-1];
            auStack_a0[lVar20] = puVar21[-2];
            appuStack_e8[lVar20 + 6] = ppuVar25;
            ppuVar25 = (undefined8 **)puVar21[1];
            appuStack_e8[lVar20 + 3] = (undefined8 **)*puVar21;
            appuStack_e8[lVar20] = ppuVar25;
            puVar21 = puVar21 + 4;
          }
          uVar2 = *(uint *)(lVar19 + 0x14);
          uVar3 = *(uint *)(lVar19 + 0x18);
          if (ppuStack_588 != (undefined8 **)0x0) {
            (*(code *)(*ppuStack_588)[2])(ppuStack_588);
          }
          plVar23 = *(long **)puVar7;
          pppuStack_6a0 = &ppuStack_620;
          uStack_6a8 = 0;
          pppuStack_6c0 = appuStack_e8;
          pcStack_6b8 = FUN_1090cae00;
          ppuStack_6b0 = ppuStack_588;
          pppuStack_6c8 = appuStack_e8 + 3;
          pppuStack_6d0 = appuStack_e8 + 6;
          _CVPixelBufferCreateWithPlanarBytes
                    (plVar23,(ulong)uVar2,(undefined8 **)(ulong)uVar3,uVar4,0,0,lStack_630,
                     auStack_a0);
          unaff_x23 = (undefined8 **)(ulong)uVar3;
          uVar24 = (ulong)uVar2;
          ppuVar25 = ppuStack_588;
        }
        else {
          ppuVar25 = (undefined8 **)(ulong)*(uint *)(lVar19 + 0x14);
          uVar26 = (ulong)*(uint *)(lVar19 + 0x18);
          if (ppuStack_588 != (undefined8 **)0x0) {
            (*(code *)(*ppuStack_588)[2])(ppuStack_588);
          }
          plVar23 = *(long **)puVar7;
          pppuStack_6c8 = &ppuStack_620;
          pppuStack_6d0 = (undefined8 ***)0x0;
          _CVPixelBufferCreateWithBytes
                    (plVar23,ppuVar25,uVar26,uVar4,ppuStack_5f8,uStack_5d8,0x1090cae0c,ppuStack_588)
          ;
          unaff_x23 = ppuStack_588;
          uVar24 = uStack_5d8;
        }
        unaff_x22 = ppuStack_620;
        if ((int)plVar23 == 0) {
          uStack_618 = 1;
          ppuStack_610 = ppuStack_620;
          ppuStack_620 = (undefined8 **)0x0;
        }
        else {
          FUN_1090caa88(&uStack_690,&UNK_10f54fde4,plVar23);
          unaff_x22 = (undefined8 **)CONCAT44(uStack_690._4_4_,(undefined4)uStack_690);
          uStack_618 = 2;
          ppuStack_610 = unaff_x22;
          func_0x0001090cbf34();
        }
        FUN_1090c1890(&ppuStack_620);
        func_0x0001090cbb38(auStack_a0 + 3);
        if ((int)plVar23 == 0) {
          FUN_1090caae8(puStack_698,puStack_580,lStack_578,unaff_x22,*param_2 + 0x88);
        }
        else {
          *puStack_698 = 2;
          puStack_698[1] = unaff_x22;
          ppuStack_610 = (undefined8 **)0x0;
        }
        func_0x0001090c1a04(&uStack_618);
      }
    }
  }
  else {
    *puStack_698 = 2;
    puStack_698[1] = uStack_600;
    uStack_600 = 0;
  }
  func_0x0001090c19c0(&puStack_608);
LAB_1090cb47c:
  ppuVar16 = &puStack_580;
  func_0x0001090cbab8();
  func_0x0001090cbd88(uStack_78);
  if ((bool)uVar11) {
    return ppuVar16;
  }
  ___stack_chk_fail();
  FUN_1090cbc98(&uStack_690);
  func_0x0001090aeac8(auStack_a0);
  func_0x0001090c19c0(&puStack_608);
  ppuVar17 = &puStack_580;
  func_0x0001090cbab8();
  func_0x0001090cbd70();
  pcStack_6d8 = FUN_1090cb570;
  ppuVar18 = ppuVar17;
  lStack_730 = lVar29;
  puStack_728 = puVar27;
  uStack_720 = uVar26;
  ppuStack_718 = ppuVar25;
  uStack_710 = uVar24;
  ppuStack_708 = unaff_x23;
  ppuStack_700 = unaff_x22;
  plStack_6f8 = plVar23;
  puStack_6f0 = param_2;
  ppuStack_6e8 = ppuVar16;
  puStack_6e0 = &stack0xfffffffffffffff0;
  func_0x0001090cbeb0();
  uStack_740 = extraout_x8_01;
  _CMSampleBufferGetFormatDescription();
  _CMFormatDescriptionGetMediaSubType();
  ppuVar16 = ppuVar18;
  _CMFormatDescriptionGetMediaType();
  uVar11 = (int)ppuVar16 == 0x76696465;
  if ((bool)uVar11) {
    _CMVideoFormatDescriptionGetDimensions(ppuVar18);
    lVar19 = 0x80;
    __Znwm();
    puVar22 = (undefined8 *)0x3f800000;
    uStack_7b8 = 0x3f80000000000000;
    lStack_7c0 = 0x3f800000;
    uStack_7b0 = 0;
    ppuStack_790 = &PTR_DAT_110d7e488;
    uStack_788 = 1;
    uStack_778 = 0;
    uStack_770 = 0;
    uStack_780 = 0;
    lVar29 = lVar19;
    func_0x0001090e5074();
    ppuStack_790 = &PTR_DAT_110d7e488;
    lStack_7c0 = lVar29;
    _free(uStack_770);
    plVar23 = (long *)(lVar19 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *plVar23 = *plVar23 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    func_0x0001090cbed8();
    FUN_1090c803c();
    FUN_1090cbaf0(&lStack_7c0);
    puStack_750 = (undefined1 *)0x1;
    lStack_748 = lVar19;
    _CMSampleBufferGetPresentationTimeStamp(&ppuStack_790,ppuVar17);
    ppuVar8 = ppuStack_790;
    uVar24 = uStack_788 & 0xffffffff;
    _CMSampleBufferGetDuration(&ppuStack_790,ppuVar17);
    ppuVar9 = ppuStack_790;
    uVar26 = uStack_788 & 0xffffffff;
    _CMSampleBufferGetDecodeTimeStamp(&ppuStack_790,ppuVar17);
    ppuVar10 = ppuStack_790;
    uVar28 = uStack_788 & 0xffffffff;
    _CMSampleBufferGetImageBuffer();
    if (ppuVar17 == (undefined1 **)0x0) {
      func_0x00010b99f5f8(&ppuStack_790,&UNK_10f54feae);
      *extraout_x8_00 = 2;
      extraout_x8_00[1] = ppuStack_790;
      func_0x0001090cbed8();
      func_0x000104bda93c();
    }
    else {
      func_0x0001090f5ed4(&lStack_7c0,ppuVar9,uVar26 | 0x100000000);
      lVar29 = 0x98;
      __Znwm();
      uStack_760 = 0;
      uStack_758 = 0;
      FUN_1090c7eb4(&ppuStack_790,&lStack_7c0);
      FUN_1090c8f8c(lVar29,&lStack_748,ppuVar8,uVar24 | 0x100000000,ppuVar9,uVar26 | 0x100000000,
                    ppuVar10,uVar28 | 0x100000000);
      alStack_7a0[0] = lVar29;
      func_0x0001090e5d44(uStack_788);
      func_0x0001090e5ca4(uStack_760);
      plVar23 = (long *)(lVar29 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *plVar23 = *plVar23 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *extraout_x8_00 = 1;
      extraout_x8_00[1] = lVar29;
      alStack_7a0[1] = 0;
      FUN_1090ac7bc(alStack_7a0 + 1);
      FUN_1090cbd0c(alStack_7a0);
      func_0x0001090e5d44(uStack_7b8);
      func_0x0001090e5ca4(0);
    }
  }
  else {
    func_0x00010b99f5f8(&ppuStack_790,&UNK_10f54fd28);
    ppuVar8 = ppuStack_790;
    func_0x0001090cbed8();
    func_0x000104bda93c();
    *extraout_x8_00 = 2;
    extraout_x8_00[1] = ppuVar8;
    puStack_750 = (undefined1 *)0x2;
    lStack_748 = 0;
  }
  ppuVar16 = &puStack_750;
  func_0x0001090cbce8();
  func_0x0001090cbd88(uStack_740);
  if ((bool)uVar11) {
    return ppuVar16;
  }
  ___stack_chk_fail();
  func_0x0001090cbce8(&puStack_750);
  func_0x0001090cbd70();
  func_0x0001090cbd60();
  func_0x00010b989268(&uStack_820,puVar22);
  _CFDictionaryAddValue(*ppuVar16,uStack_818,uStack_820);
  func_0x0001090cbd80();
  func_0x0001090cbd78();
  return ppuVar16;
}



/* Entry: 1090cb570; end: 1090cb873;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1090cb570(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long alStack_d0 [2];
  undefined **ppuStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  lVar9 = param_3;
  func_0x0001090cbeb0();
  uStack_70 = extraout_x8;
  _CMSampleBufferGetFormatDescription();
  _CMFormatDescriptionGetMediaSubType();
  lVar8 = lVar9;
  _CMFormatDescriptionGetMediaType();
  uVar7 = (int)lVar8 == 0x76696465;
  if ((bool)uVar7) {
    _CMVideoFormatDescriptionGetDimensions(lVar9);
    lVar8 = 0x80;
    __Znwm();
    param_2 = 0x3f800000;
    uStack_e8 = 0x3f80000000000000;
    lStack_f0 = 0x3f800000;
    uStack_e0 = 0;
    ppuStack_c0 = &PTR_DAT_110d7e488;
    uStack_b8 = 1;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0;
    lVar9 = lVar8;
    func_0x0001090e5074();
    ppuStack_c0 = &PTR_DAT_110d7e488;
    lStack_f0 = lVar9;
    _free(uStack_a0);
    plVar1 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    func_0x0001090cbed8();
    FUN_1090c803c();
    FUN_1090cbaf0(&lStack_f0);
    uStack_80 = 1;
    lStack_78 = lVar8;
    _CMSampleBufferGetPresentationTimeStamp(&ppuStack_c0,param_3);
    ppuVar4 = ppuStack_c0;
    uVar11 = uStack_b8 & 0xffffffff;
    _CMSampleBufferGetDuration(&ppuStack_c0,param_3);
    ppuVar5 = ppuStack_c0;
    uVar12 = uStack_b8 & 0xffffffff;
    _CMSampleBufferGetDecodeTimeStamp(&ppuStack_c0,param_3);
    ppuVar6 = ppuStack_c0;
    uVar13 = uStack_b8 & 0xffffffff;
    _CMSampleBufferGetImageBuffer();
    if (param_3 == 0) {
      func_0x00010b99f5f8(&ppuStack_c0,&UNK_10f54feae);
      *param_1 = 2;
      param_1[1] = ppuStack_c0;
      func_0x0001090cbed8();
      func_0x000104bda93c();
    }
    else {
      func_0x0001090f5ed4(&lStack_f0,ppuVar5,uVar12 | 0x100000000);
      lVar9 = 0x98;
      __Znwm();
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_1090c7eb4(&ppuStack_c0,&lStack_f0);
      FUN_1090c8f8c(lVar9,&lStack_78,ppuVar4,uVar11 | 0x100000000,ppuVar5,uVar12 | 0x100000000,
                    ppuVar6,uVar13 | 0x100000000);
      alStack_d0[0] = lVar9;
      func_0x0001090e5d44(uStack_b8);
      func_0x0001090e5ca4(uStack_90);
      plVar1 = (long *)(lVar9 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *param_1 = 1;
      param_1[1] = lVar9;
      alStack_d0[1] = 0;
      FUN_1090ac7bc(alStack_d0 + 1);
      FUN_1090cbd0c(alStack_d0);
      func_0x0001090e5d44(uStack_e8);
      func_0x0001090e5ca4(0);
    }
  }
  else {
    func_0x00010b99f5f8(&ppuStack_c0,&UNK_10f54fd28);
    ppuVar4 = ppuStack_c0;
    func_0x0001090cbed8();
    func_0x000104bda93c();
    *param_1 = 2;
    param_1[1] = ppuVar4;
    uStack_80 = 2;
    lStack_78 = 0;
  }
  puVar10 = &uStack_80;
  func_0x0001090cbce8();
  func_0x0001090cbd88(uStack_70);
  if ((bool)uVar7) {
    return puVar10;
  }
  ___stack_chk_fail();
  func_0x0001090cbce8(&uStack_80);
  func_0x0001090cbd70();
  func_0x0001090cbd60();
  func_0x00010b989268(&uStack_150,param_2);
  _CFDictionaryAddValue(*puVar10,uStack_148,uStack_150);
  func_0x0001090cbd80();
  func_0x0001090cbd78();
  return puVar10;
}



/* Entry: 1090cb874; end: 1090cb8db;  */

void FUN_1090cb874(undefined8 param_1)

{
  undefined8 *unaff_x19;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001090cbd60();
  func_0x00010b989268(&uStack_40,param_1);
  _CFDictionaryAddValue(*unaff_x19,uStack_38,uStack_40);
  func_0x0001090cbd80();
  func_0x0001090cbd78();
  return;
}



/* Entry: 1090cb8dc; end: 1090cb933;  */

void FUN_1090cb8dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x19;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001090cbd60();
  FUN_1090cba08(&uStack_30,param_3);
  _CFDictionaryAddValue(*unaff_x19,uStack_28,uStack_30);
  func_0x0001090cbd80();
  func_0x0001090cbd78();
  return;
}



/* Entry: 1090cb934; end: 1090cb9af;  */

undefined8 * FUN_1090cb934(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b9893c8();
  uStack_38 = param_2;
  func_0x00010b989404(&uStack_40,param_3);
  _CFDictionaryAddValue(*param_1,param_2,uStack_40);
  func_0x0001090cbd80();
  func_0x0001090cbd78();
  return param_1;
}



/* Entry: 1090cb9b0; end: 1090cba07;  */

void FUN_1090cb9b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x19;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001090cbd60();
  uStack_30 = param_3;
  func_0x00010b989884(&uStack_30);
  _CFDictionaryAddValue(*unaff_x19,uStack_28,uStack_30);
  func_0x0001090cbd80();
  func_0x0001090cbd78();
  return;
}



/* Entry: 1090cba08; end: 1090cba27;  */

void FUN_1090cba08(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRetain_11034a770)();
    return;
  }
  return;
}



/* Entry: 1090cba28; end: 1090cba4b;  */

undefined8 FUN_1090cba28(undefined8 param_1)

{
  FUN_1090cba4c();
  return param_1;
}



/* Entry: 1090cba4c; end: 1090cba6f;  */

void FUN_1090cba4c(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001090cbee4();
  if (param_1 != 0) {
    _CFRelease();
    *unaff_x19 = 0;
  }
  return;
}



/* Entry: 1090cba70; end: 1090cba93;  */

undefined8 FUN_1090cba70(undefined8 param_1)

{
  FUN_1090cba94();
  return param_1;
}


