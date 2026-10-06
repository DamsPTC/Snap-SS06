/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a033358; end: 10a0333db;  */

void FUN_10a033358(undefined8 param_1)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  FUN_10a003e74(param_1,&UNK_10f632981,0xf);
  uStack_68 = 0;
  uStack_60 = 0xffffffff00000001;
  uStack_58 = 0xffffffff;
  puStack_50 = &UNK_10f630f1d;
  uStack_48 = 0;
  puStack_40 = &UNK_10f630f1d;
  uStack_38 = 0;
  uStack_30 = 0x16f00000000;
  uStack_28 = 0xffffffff;
  FUN_10a0333dc(param_1,&uStack_68);
  FUN_10a06df48();
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a0333dc; end: 10a0334b3;  */

/* WARNING: Removing unreachable block (ram,0x00010a033474) */

undefined1  [16] FUN_10a0333dc(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f632991,8);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a06de4c(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a0334b4; end: 10a03393f;  */

/* WARNING: Removing unreachable block (ram,0x00010a033890) */
/* WARNING: Removing unreachable block (ram,0x00010a033894) */
/* WARNING: Removing unreachable block (ram,0x00010a03389c) */
/* WARNING: Removing unreachable block (ram,0x00010a0338a4) */
/* WARNING: Removing unreachable block (ram,0x00010a0338a8) */

void FUN_10a0334b4(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  char cVar10;
  bool bVar11;
  code *pcVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 *puStack_e0;
  long *plStack_d8;
  undefined8 *puStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  long *plStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *(long *)(param_2 + 0x138);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  lVar15 = *(long *)(param_2 + 0x40);
  if (lVar15 != 0) {
    plVar18 = (long *)(lVar15 + 8);
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar11) {
        *plVar18 = *plVar18 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  uVar4 = *param_3;
  uVar7 = param_3[1];
  uVar5 = param_3[2];
  lVar8 = param_3[3];
  param_3[2] = 0;
  param_3[3] = 0;
  lVar6 = param_3[4];
  uVar9 = param_3[5];
  param_3[4] = 0;
  param_3[5] = 0;
  uVar19 = param_3[6];
  plVar18 = *(long **)(lVar16 + 200);
  plStack_d8 = (long *)0x0;
  puStack_d0 = (undefined8 *)0x0;
  uStack_118 = uVar7;
  uStack_f0 = uVar19;
  if (plVar18 == (long *)0x0) {
    uStack_110 = 0;
    lStack_100 = 0;
    uStack_f8 = 0;
    lStack_108 = 0;
    puVar13 = (undefined8 *)0x118;
    puStack_b0 = (undefined8 *)uVar4;
    uStack_a8 = uVar7;
    uStack_80 = uVar19;
    __Znwm();
    puVar13[2] = 0;
    puVar13[1] = 0x200000006;
    *(undefined2 *)(puVar13 + 3) = 4;
    puVar13[5] = 0;
    puVar13[4] = 0;
    puVar13[7] = 0;
    puVar13[6] = 0;
    puVar13[9] = 0;
    puVar13[8] = 0;
    puVar13[0xb] = 0;
    puVar13[10] = 0;
    puVar13[0xd] = 0;
    puVar13[0xc] = 0;
    puVar13[0xf] = 0;
    puVar13[0xe] = 0;
    puVar13[0x10] = 0;
    puVar13[0x11] = puVar13 + 3;
    puVar13[0x12] = 0;
    *(undefined1 *)(puVar13 + 0x13) = 0;
    *(undefined1 *)(puVar13 + 0x16) = 0;
    *puVar13 = &PTR_DAT_110b9d5f0;
    puStack_e0 = puVar13 + 0x17;
    *puStack_e0 = uVar3;
    pcStack_c0 = (code *)0x0;
    plStack_b8 = (long *)0x0;
    puVar13[0x18] = lVar15;
    puVar13[0x19] = uVar4;
    puVar13[0x1a] = uVar7;
    puVar13[0x1b] = uVar5;
    puVar13[0x1c] = lVar8;
    puVar13[0x1d] = lVar6;
    uStack_a0 = 0;
    lStack_98 = 0;
    lStack_90 = 0;
    uStack_88 = 0;
    puVar13[0x1e] = uVar9;
    puVar13[0x1f] = uVar19;
    *(undefined1 *)(puVar13 + 0x21) = 1;
    puVar13[0x22] = 0;
    plStack_d8 = puVar13;
    puStack_d0 = puVar13;
    func_0x000109a18110(&uStack_a8);
    pcStack_c8 = FUN_10a04b778;
  }
  else {
    lStack_e8 = 0;
    uStack_110 = uVar5;
    lStack_108 = lVar8;
    lStack_100 = lVar6;
    uStack_f8 = uVar9;
    (**(code **)(*plVar18 + 0x28))(plVar18,0,&lStack_e8);
    uVar19 = uStack_f0;
    uVar9 = uStack_f8;
    lVar8 = lStack_100;
    lVar6 = lStack_108;
    uVar7 = uStack_110;
    uVar5 = uStack_118;
    if (lStack_e8 != 0) goto LAB_10a0338fc;
    uStack_a8 = uStack_118;
    uStack_110 = 0;
    lStack_100 = 0;
    uStack_f8 = 0;
    lStack_108 = 0;
    uStack_80 = uStack_f0;
    puVar13 = (undefined8 *)0x120;
    puStack_b0 = (undefined8 *)uVar4;
    __Znwm();
    puVar13[2] = 0;
    puVar13[1] = 0x200000006;
    *(undefined2 *)(puVar13 + 3) = 4;
    puVar13[5] = 0;
    puVar13[4] = 0;
    puVar13[7] = 0;
    puVar13[6] = 0;
    puVar13[9] = 0;
    puVar13[8] = 0;
    puVar13[0xb] = 0;
    puVar13[10] = 0;
    puVar13[0xd] = 0;
    puVar13[0xc] = 0;
    puVar13[0xf] = 0;
    puVar13[0xe] = 0;
    puVar13[0x10] = 0;
    puVar13[0x11] = puVar13 + 3;
    puVar13[0x12] = 0;
    *(undefined1 *)(puVar13 + 0x13) = 0;
    *(undefined1 *)(puVar13 + 0x16) = 0;
    *puVar13 = &PTR_FUN_110b9d580;
    puVar17 = puVar13 + 0x17;
    puVar13[0x18] = lVar15;
    *puVar17 = uVar3;
    pcStack_c0 = (code *)0x0;
    plStack_b8 = (long *)0x0;
    puVar13[0x19] = uVar4;
    uStack_a0 = 0;
    puVar13[0x1b] = uVar7;
    puVar13[0x1a] = uVar5;
    puVar13[0x1d] = lVar8;
    puVar13[0x1c] = lVar6;
    lStack_90 = 0;
    uStack_88 = 0;
    lStack_98 = 0;
    puVar13[0x1e] = uVar9;
    puVar13[0x1f] = uVar19;
    *(undefined1 *)(puVar13 + 0x21) = 1;
    puVar13[0x22] = 0;
    puVar13[0x23] = plVar18;
    if (plStack_d8 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_d8 + 1);
      do {
        uVar14 = *puVar1;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar11) {
          *puVar1 = uVar14 - 4;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar11) {
            *puVar1 = uVar14 - 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plStack_d8 + 8))();
        }
      }
    }
    plStack_d8 = puVar13;
    if (puStack_d0 != (undefined8 *)0x0) {
      func_0x0001092b4274(&puStack_d0);
    }
    puStack_e0 = puVar17;
    puStack_d0 = puVar13;
    if (lStack_98 != 0) {
      lStack_90 = lStack_98;
      __ZdlPv();
    }
    func_0x000109a18110(&uStack_a8);
    plVar18 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar2 = plStack_b8 + 1;
      do {
        lVar15 = *plVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar11) {
          *plVar2 = lVar15 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
      }
    }
    pcStack_c8 = (code *)0x10a04b748;
    __ZNSt13exception_ptrD1Ev(&lStack_e8);
  }
  puVar17 = puStack_e0;
  puVar13 = (undefined8 *)(lVar16 + 0xb8);
  if (puStack_e0[0xb] != 0) {
    func_0x0001092b4274();
  }
  puVar17[0xb] = puStack_d0;
  puStack_d0 = (undefined8 *)0x0;
  pcStack_c0 = pcStack_c8;
  plStack_b8 = puStack_e0;
  puStack_b0 = puVar13;
  (**(code **)*puVar13)(puVar13,&pcStack_c0);
  *param_1 = plStack_d8;
  plStack_d8 = (long *)0x0;
  if ((puStack_d0 != (undefined8 *)0x0) &&
     (func_0x0001092b4274(&puStack_d0), plStack_d8 != (long *)0x0)) {
    puVar1 = (ulong *)(plStack_d8 + 1);
    do {
      uVar14 = *puVar1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar11) {
        *puVar1 = uVar14 - 4;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if ((uVar14 & 0x1fffffffc) == 4) {
      do {
        uVar14 = *puVar1;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar11) {
          *puVar1 = uVar14 - 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (uVar14 - 1 == 0) {
        (**(code **)(*plStack_d8 + 8))();
      }
    }
  }
  if (lStack_108 != 0) {
    lStack_100 = lStack_108;
    __ZdlPv();
  }
  func_0x000109a18110(&uStack_118);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_10a0338fc:
  func_0x0001092af97c(&lStack_e8);
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x10a033908);
  (*pcVar12)();
}



/* Entry: 10a033940; end: 10a033977;  */

long FUN_10a033940(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  func_0x000109a18110(param_1 + 0x18);
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



/* Entry: 10a033978; end: 10a0339eb;  */

undefined1  [16] FUN_10a033978(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 7;
  auVar1._0_8_ = &DAT_10f6341c5;
  return auVar1;
}



/* Entry: 10a0339ec; end: 10a033d43;  */

void FUN_10a0339ec(ulong param_1)

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
  ulong uVar10;
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
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  FUN_10a003e74(param_1,&UNK_10f632981,0xf);
  FUN_10a003e74(param_1,&UNK_10f632991,8);
  func_0x000109887da8(appuStack_c8,&DAT_10f6341c5,7);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110b9c6e8;
  pppuVar2 = (undefined8 ***)&UNK_10f630f1d;
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
  uStack_54 = 0x16f;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110b9c6e8;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a033d24;
    FUN_10a054dac(param_1,&UNK_10f632a68,FUN_10a06e2cc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a033d24;
    FUN_10a054dac(param_1,&UNK_10f632a70,FUN_10a06e508,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a033d24;
    FUN_10a054dac(param_1,&UNK_10f632a7a,FUN_10a06eb4c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a033d24;
    FUN_10a054dac(param_1,&UNK_10f632a85,FUN_10a06ec04,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10a071000,0,0);
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
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&DAT_10f6341c5,7);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a033d24:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a033d28);
  (*pcVar6)();
}



/* Entry: 10a033d44; end: 10a033d97;  */

/* WARNING: Removing unreachable block (ram,0x00010a0348a0) */
/* WARNING: Removing unreachable block (ram,0x00010a034be8) */
/* WARNING: Removing unreachable block (ram,0x00010a034bec) */
/* WARNING: Removing unreachable block (ram,0x00010a034bf4) */
/* WARNING: Removing unreachable block (ram,0x00010a034bfc) */
/* WARNING: Removing unreachable block (ram,0x00010a034c00) */

long * FUN_10a033d44(long *param_1,long param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  long **pplVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *unaff_x19;
  long *plVar14;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long *plVar15;
  long *plVar16;
  undefined8 unaff_x22;
  long *plVar17;
  undefined8 ******unaff_x29;
  code *unaff_x30;
  undefined1 auStack_4b8 [136];
  long *plStack_430;
  undefined8 uStack_428;
  long lStack_420;
  long lStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined4 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined4 uStack_3d0;
  long lStack_3c0;
  undefined8 *puStack_3b8;
  long *plStack_3b0;
  undefined8 *puStack_3a8;
  code *pcStack_3a0;
  undefined8 uStack_398;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  long *plStack_310;
  long *plStack_308;
  code *pcStack_300;
  undefined8 *apuStack_2f8 [7];
  long *plStack_2c0;
  long *plStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  code *pcStack_290;
  undefined **appuStack_288 [7];
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  code *pcStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  long lStack_220;
  long alStack_218 [2];
  undefined8 uStack_208;
  long alStack_1f0 [2];
  undefined8 uStack_1e0;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined8 *puStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  code *pcStack_1a0;
  undefined8 *apuStack_198 [7];
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long lStack_138;
  undefined1 auStack_c8 [8];
  undefined8 auStack_c0 [2];
  char cStack_a9;
  undefined8 auStack_a8 [2];
  char cStack_91;
  code *pcStack_78;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 *****pppppuStack_30;
  code *pcStack_28;
  
  uVar11 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar11 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  if (uVar11 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_2 + 0x30);
    plVar14 = *(long **)(param_2 + 0x18);
    lVar10 = *(long *)(param_2 + 0x20);
    puVar12 = (undefined8 *)register0x00000008;
    plVar15 = param_1;
    param_1 = unaff_x19;
FUN_10a071218:
    *(undefined8 *)((long)puVar12 + -0x20) = unaff_x20;
    *(long **)((long)puVar12 + -0x18) = param_1;
    *(undefined8 *******)((long)puVar12 + -0x10) = unaff_x29;
    *(code **)((long)puVar12 + -8) = unaff_x30;
    *plVar15 = (long)plVar14;
    if (lVar10 == 0) {
      plVar15[1] = 0;
      plVar17 = plVar15;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      plVar15[1] = lVar10;
      plVar17 = (long *)0x0;
      if (lVar10 != 0) {
        return plVar15;
      }
    }
    FUN_10a043ecc();
    *(undefined8 *)((long)puVar12 + -0x50) = unaff_x22;
    *(undefined8 *)((long)puVar12 + -0x48) = unaff_x21;
    *(undefined8 *)((long)puVar12 + -0x40) = unaff_x20;
    *(long **)((long)puVar12 + -0x38) = plVar15;
    *(undefined1 **)((long)puVar12 + -0x30) = (undefined1 *)((long)puVar12 + -0x10);
    *(code **)((long)puVar12 + -0x28) = FUN_10a071258;
    lVar10 = plVar17[1];
    plVar15 = plVar17;
    if (lVar10 != 0) {
      lVar13 = 0;
      do {
        *(undefined8 *)(*plVar17 + lVar13 * 8) = 0;
        lVar13 = lVar13 + 1;
      } while (lVar10 != lVar13);
      plVar15 = (long *)plVar17[2];
      plVar17[2] = 0;
      plVar17[3] = 0;
      plVar16 = plVar15;
      if (plVar15 != (long *)0x0 && plVar14 != (long *)0x0) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (plVar16 + 2,plVar14 + 2);
          func_0x00010a04b6d4(plVar16 + 5,plVar14[5],plVar14[6]);
          plVar15 = (long *)*plVar16;
          FUN_10a071394(plVar17,plVar16);
          plVar14 = (long *)*plVar14;
          if (plVar15 == (long *)0x0) break;
          plVar16 = plVar15;
        } while (plVar14 != (long *)0x0);
      }
      func_0x00010a04efb4(plVar15);
    }
    for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
      puVar9 = (undefined8 *)0x38;
      __Znwm();
      *(undefined8 **)((long)puVar12 + -0x68) = puVar9;
      *(long **)((long)puVar12 + -0x60) = plVar17;
      *(undefined8 *)((long)puVar12 + -0x58) = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      FUN_10a04f468(puVar9 + 2,plVar14 + 2);
      *(undefined1 *)((long)puVar12 + -0x58) = 1;
      plVar15 = plVar17;
      func_0x000107c2b05c(plVar17,puVar9 + 2);
      puVar9[1] = plVar15;
      plVar15 = plVar17;
      FUN_10a071394(plVar17,puVar9);
    }
    return plVar15;
  }
  puVar6 = &UNK_10f632a90;
  FUN_10a00946c();
  puVar12 = auStack_70;
  pcStack_28 = FUN_10a033d98;
  unaff_x29 = &pppppuStack_30;
  pppppuStack_30 = (undefined8 *****)&stack0xfffffffffffffff0;
  if (param_3[3] != 0) {
    lVar10 = param_3[2];
    for (plVar14 = (long *)lVar10; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
      if (plVar14[5] == 0) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_70,&UNK_10f632ae3,plVar14 + 2);
        FUN_10a012db0(auStack_58,auStack_70,&UNK_10f594713);
        FUN_10a0029c0(auStack_58);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a033e3c);
        (*pcVar5)();
      }
    }
    if ((long *)(puVar6 + 0x48) != param_3) {
      *(int *)(puVar6 + 0x68) = (int)param_3[4];
      FUN_10a071258(puVar6 + 0x48,lVar10);
    }
    plVar14 = *(long **)(puVar6 + 0x18);
    lVar10 = *(long *)(puVar6 + 0x20);
    puVar12 = (undefined8 *)&stack0xffffffffffffffe0;
    plVar15 = extraout_x8;
    unaff_x29 = (undefined8 ******)pppppuStack_30;
    unaff_x30 = pcStack_28;
    goto FUN_10a071218;
  }
  param_1 = (long *)&UNK_10f632ab7;
  FUN_10a00946c();
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  plVar15 = param_1;
  __Unwind_Resume();
  pcStack_78 = FUN_10a033e7c;
  if (param_3[3] != 0) {
    lVar10 = param_3[2];
    for (plVar14 = (long *)lVar10; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
      if (plVar14[5] == 0) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_c0,&UNK_10f632b34,plVar14 + 2);
        FUN_10a012db0(auStack_a8,auStack_c0,&UNK_10f594713);
        FUN_10a0029c0(auStack_a8);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a033f20);
        (*pcVar5)();
      }
    }
    if (plVar15 + 0xe != param_3) {
      *(int *)(plVar15 + 0x12) = (int)param_3[4];
      FUN_10a071258(plVar15 + 0xe,lVar10);
    }
    plVar14 = (long *)plVar15[3];
    lVar10 = plVar15[4];
    plVar15 = extraout_x8_00;
    unaff_x30 = pcStack_78;
    goto FUN_10a071218;
  }
  puVar6 = &UNK_10f632b06;
  FUN_10a00946c();
  if (cStack_91 < '\0') {
    __ZdlPv(auStack_a8[0]);
  }
  if (cStack_a9 < '\0') {
    __ZdlPv(auStack_c0[0]);
  }
  __Unwind_Resume();
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)(char)puVar6[0x47];
  if (lVar10 < 0) {
    lVar10 = *(long *)(puVar6 + 0x38);
  }
  if (lVar10 == 0) {
    FUN_10a00946c(&UNK_10f632b59);
  }
  else if (*(long *)(puVar6 + 0x60) != 0) {
    if (*(long *)(puVar6 + 0x88) == 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&uStack_398,&UNK_10f632b83,puVar6 + 0x30);
      FUN_10a012db0(&pcStack_238,&uStack_398,&UNK_10f632ba2);
      FUN_10a0029c0(&pcStack_238);
      goto LAB_10a034d68;
    }
    uStack_400 = 0;
    lStack_418 = 0;
    lStack_420 = 0;
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_428 = 0;
    plStack_430 = (long *)0x0;
    uStack_3f8 = 0x3f800000;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_3d0 = 0x3f800000;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (&plStack_430,puVar6 + 0x30);
    for (plVar14 = *(long **)(puVar6 + 0x58); plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
      FUN_10a0717cc(&lStack_418,plVar14 + 2,plVar14 + 2);
    }
    for (plVar14 = *(long **)(puVar6 + 0x80); plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
      FUN_10a0717cc(&uStack_3f0,plVar14 + 2,plVar14 + 2);
    }
    pplVar7 = &plStack_430;
    func_0x000109a1fa88(auStack_4b8);
    FUN_10a0f367c();
    plStack_298 = pplVar7[1];
    plStack_2a0 = *pplVar7;
    if (pplVar7[1] != (long *)0x0) {
      plVar14 = pplVar7[1] + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = *plVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pcStack_290 = FUN_10a071c3c;
    appuStack_288[0] = &PTR_DAT_110b9e298;
    func_0x00010ad031c0();
    if (*(char *)((long)pplVar7 + 0x17) < '\0') {
      func_0x000107c3192c(&plStack_250,*pplVar7,pplVar7[1]);
    }
    else {
      plStack_248 = pplVar7[1];
      plStack_250 = *pplVar7;
      plStack_240 = pplVar7[2];
    }
    plVar14 = *(long **)(*(long *)(puVar6 + 0x28) + 0x870);
    FUN_10a462144();
    plVar15 = (long *)plVar14[7];
    if (plVar15 != (long *)0x0) {
      plVar17 = plVar15 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *plVar17 = *plVar17 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar17 = plVar14;
    FUN_10a0f3780();
    puVar12 = (undefined8 *)*plVar17;
    lVar10 = plVar17[1];
    if (lVar10 != 0) {
      plVar17 = (long *)(lVar10 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *plVar17 = *plVar17 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x000109a19274(&uStack_398,0,auStack_4b8);
    plStack_308 = plStack_298;
    plStack_310 = plStack_2a0;
    plStack_298 = (long *)0x0;
    plStack_2a0 = (long *)0x0;
    pcStack_300 = pcStack_290;
    (*(code *)appuStack_288[0][2])(apuStack_2f8,appuStack_288);
    plStack_2b0 = plStack_240;
    plStack_2b8 = plStack_248;
    plStack_2c0 = plStack_250;
    plStack_248 = (long *)0x0;
    plStack_240 = (long *)0x0;
    plStack_250 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      plVar17 = plVar15 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *plVar17 = *plVar17 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar17 = (long *)puVar12[2];
    plStack_3b0 = (long *)0x0;
    puStack_3a8 = (undefined8 *)0x0;
    plStack_2a8 = plVar15;
    if (plVar17 == (long *)0x0) {
      func_0x000109a19274(&pcStack_238,0,&uStack_398);
      plStack_1a8 = plStack_308;
      plStack_1b0 = plStack_310;
      plStack_310 = (long *)0x0;
      plStack_308 = (long *)0x0;
      pcStack_1a0 = pcStack_300;
      (*(code *)apuStack_2f8[0][2])(apuStack_198,apuStack_2f8);
      plStack_150 = plStack_2b0;
      plStack_158 = plStack_2b8;
      plStack_160 = plStack_2c0;
      plStack_2b8 = (long *)0x0;
      plStack_2b0 = (long *)0x0;
      plStack_2c0 = (long *)0x0;
      plStack_148 = plStack_2a8;
      plStack_2a8 = (long *)0x0;
      puVar8 = (undefined8 *)0x1c0;
      __Znwm();
      puVar8[2] = 0;
      puVar8[1] = 0x200000006;
      *(undefined2 *)(puVar8 + 3) = 4;
      puVar8[5] = 0;
      puVar8[4] = 0;
      puVar8[7] = 0;
      puVar8[6] = 0;
      puVar8[9] = 0;
      puVar8[8] = 0;
      puVar8[0xb] = 0;
      puVar8[10] = 0;
      puVar8[0xd] = 0;
      puVar8[0xc] = 0;
      puVar8[0xf] = 0;
      puVar8[0xe] = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = puVar8 + 3;
      puVar8[0x12] = 0;
      *(undefined1 *)(puVar8 + 0x13) = 0;
      *(undefined1 *)(puVar8 + 0x15) = 0;
      puVar9 = puVar8 + 0x16;
      *puVar8 = &PTR_FUN_110b9d698;
      func_0x00010a04c360(puVar9,&pcStack_238);
      puVar8[0x37] = 0;
      if (plStack_3b0 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_3b0 + 1);
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
            (**(code **)(*plStack_3b0 + 8))();
          }
        }
      }
      plStack_3b0 = puVar8;
      if (puStack_3a8 != (undefined8 *)0x0) {
        func_0x0001092b4274(&puStack_3a8);
      }
      plVar17 = plStack_148;
      puStack_3b8 = puVar9;
      puStack_3a8 = puVar8;
      if (plStack_148 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_148 + 1);
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
          (**(code **)(*plStack_148 + 0x10))(plStack_148);
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
            (**(code **)(*plVar17 + 8))(plVar17);
          }
        }
      }
      if ((long)plStack_150 < 0) {
        __ZdlPv(plStack_160);
      }
      (*(code *)*apuStack_198[0])(apuStack_198);
      plVar17 = plStack_1a8;
      if (plStack_1a8 != (long *)0x0) {
        plVar16 = plStack_1a8 + 1;
        do {
          lVar13 = *plVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      func_0x000109a1dbe4(&pcStack_238);
      pcStack_3a0 = FUN_10a04bc34;
LAB_10a03459c:
      puVar9 = puStack_3b8;
      if (puStack_3b8[0x21] != 0) {
        func_0x0001092b4274(puStack_3b8 + 0x21);
      }
      puVar9[0x21] = puStack_3a8;
      puStack_3a8 = (undefined8 *)0x0;
      pcStack_238 = pcStack_3a0;
      puStack_230 = puStack_3b8;
      puStack_228 = puVar12;
      (**(code **)*puVar12)(puVar12,&pcStack_238);
      plVar17 = plStack_3b0;
      plStack_3b0 = (long *)0x0;
      if ((puStack_3a8 != (undefined8 *)0x0) &&
         (func_0x0001092b4274(&puStack_3a8), plStack_3b0 != (long *)0x0)) {
        puVar1 = (ulong *)(plStack_3b0 + 1);
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
            (**(code **)(*plStack_3b0 + 8))();
          }
        }
      }
      plVar16 = plStack_2a8;
      if (plStack_2a8 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_2a8 + 1);
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
          (**(code **)(*plStack_2a8 + 0x10))(plStack_2a8);
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
            (**(code **)(*plVar16 + 8))(plVar16);
          }
        }
      }
      if ((long)plStack_2b0 < 0) {
        __ZdlPv(plStack_2c0);
      }
      (*(code *)*apuStack_2f8[0])(apuStack_2f8);
      plVar16 = plStack_308;
      if (plStack_308 != (long *)0x0) {
        plVar2 = plStack_308 + 1;
        do {
          lVar13 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_308 + 0x10))(plStack_308);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      func_0x000109a1dbe4(&uStack_398);
      pcStack_238 = *(code **)(puVar6 + 0x28);
      if ((char)puVar6[0x47] < '\0') {
        func_0x000107c3192c(&puStack_230,*(undefined8 *)(puVar6 + 0x30),
                            *(undefined8 *)(puVar6 + 0x38));
      }
      else {
        puStack_228 = *(undefined8 **)(puVar6 + 0x38);
        puStack_230 = *(undefined8 **)(puVar6 + 0x30);
        lStack_220 = *(long *)(puVar6 + 0x40);
      }
      FUN_10a04f02c(alStack_218,puVar6 + 0x48);
      FUN_10a04f02c(alStack_1f0,puVar6 + 0x70);
      plStack_1c8 = plVar17;
      puVar9 = (undefined8 *)0xf8;
      plStack_1c0 = plVar15;
      puStack_1b8 = puVar12;
      plStack_1b0 = (long *)lVar10;
      __Znwm();
      *puVar9 = FUN_10a08b368;
      puVar9[1] = FUN_10a08b6d4;
      FUN_10a04d454(puVar9 + 2);
      lVar10 = puVar9[7];
      if (lVar10 != 0) {
        plVar15 = (long *)(lVar10 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *plVar15 = *plVar15 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *extraout_x8_01 = lVar10;
      puVar9[9] = pcStack_238;
      puVar9[0xb] = puStack_228;
      puVar9[10] = puStack_230;
      puVar9[0xc] = lStack_220;
      lStack_220 = 0;
      puStack_228 = (undefined8 *)0x0;
      puStack_230 = (undefined8 *)0x0;
      FUN_10a04d600(puVar9 + 0xd,alStack_218);
      FUN_10a04d600(puVar9 + 0x12,alStack_1f0);
      puVar9[0x18] = plStack_1c0;
      puVar9[0x17] = plStack_1c8;
      plStack_1c0 = (long *)0x0;
      plStack_1c8 = (long *)0x0;
      puVar9[0x1a] = plStack_1b0;
      puVar9[0x19] = puStack_1b8;
      plStack_1b0 = (long *)0x0;
      puStack_1b8 = (undefined8 *)0x0;
      puVar9[0x1b] = plVar14;
      *(undefined1 *)(puVar9 + 0x1c) = 0;
      *(undefined1 *)(puVar9 + 0x1e) = 0;
      puStack_3b8 = (undefined8 *)0x0;
      FUN_109d18960(puVar9 + 2,plVar14,&puStack_3b8);
      if (puStack_3b8 != (undefined8 *)0x0) {
        func_0x0001092af97c(&puStack_3b8);
        goto LAB_10a034d68;
      }
      if ((*(byte *)(puVar9 + 0x1c) & 1) == 0) {
        puStack_388 = (undefined8 *)puVar9[0x1b];
        uStack_398 = 0;
        puStack_390 = puVar9;
        (**(code **)*puStack_388)(puStack_388,&uStack_398);
        __ZNSt13exception_ptrD1Ev(&puStack_3b8);
      }
      else {
        __ZNSt13exception_ptrD1Ev(&puStack_3b8);
        FUN_10a04c73c(puVar9 + 0x1d,puVar9 + 9);
        puVar9[0x1b] = puVar9[0x1d];
        plVar14 = (long *)(puVar9[0x1d] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = *plVar14 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (((uint)*(undefined8 *)(puVar9[0x1b] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar9 + 0x1e) = 1;
          lVar10 = puVar9[0x1b];
          plVar14 = (long *)(lVar10 + 0x10);
          puVar12 = (undefined8 *)puVar9[3];
          do {
            lVar13 = *plVar14;
            if (lVar13 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar4) {
                *plVar14 = 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                uStack_398 = 0;
                puStack_390 = puVar9;
                puStack_388 = puVar12;
                func_0x000109d1b588(lVar10 + 0x18,&uStack_398);
                *(undefined8 *)(lVar10 + 0x10) = 0;
                goto LAB_10a034ac4;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar13 >> 1 & 1) == 0);
        }
        lVar10 = puVar9[0x1b];
        if (((uint)*(undefined8 *)(puVar9[0x1b] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(lVar10 + 0x90);
          goto LAB_10a034d68;
        }
        if ((*(byte *)(lVar10 + 0xa8) & 1) == 0) goto LAB_10a034d68;
        FUN_10a04c67c(puVar9 + 2,lVar10 + 0x98);
        plVar14 = (long *)puVar9[0x1b];
        if (plVar14 != (long *)0x0) {
          puVar1 = (ulong *)(plVar14 + 1);
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
              (**(code **)(*plVar14 + 8))();
            }
          }
        }
        plVar14 = (long *)puVar9[0x1d];
        if (plVar14 != (long *)0x0) {
          puVar1 = (ulong *)(plVar14 + 1);
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
              (**(code **)(*plVar14 + 8))();
            }
          }
        }
        plVar14 = (long *)puVar9[0x1a];
        if (plVar14 != (long *)0x0) {
          plVar15 = plVar14 + 1;
          do {
            lVar10 = *plVar15;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar4) {
              *plVar15 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
        }
        plVar14 = (long *)puVar9[0x18];
        if (plVar14 != (long *)0x0) {
          puVar1 = (ulong *)(plVar14 + 1);
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
            (**(code **)(*plVar14 + 0x10))(plVar14);
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
              (**(code **)(*plVar14 + 8))(plVar14);
            }
          }
        }
        plVar14 = (long *)puVar9[0x17];
        if (plVar14 != (long *)0x0) {
          puVar1 = (ulong *)(plVar14 + 1);
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
              (**(code **)(*plVar14 + 8))();
            }
          }
        }
        func_0x00010a04ef7c(puVar9 + 0x12);
        func_0x00010a04ef7c(puVar9 + 0xd);
        if (*(char *)((long)puVar9 + 0x67) < '\0') {
          __ZdlPv(puVar9[10]);
        }
        func_0x000109d1a1d0(puVar9 + 2);
        __ZdlPv(puVar9);
      }
LAB_10a034ac4:
      plVar14 = plStack_1b0;
      if (plStack_1b0 != (long *)0x0) {
        plVar15 = plStack_1b0 + 1;
        do {
          lVar10 = *plVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *plVar15 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
      }
      plVar14 = plStack_1c0;
      if (plStack_1c0 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_1c0 + 1);
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
          (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
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
            (**(code **)(*plVar14 + 8))(plVar14);
          }
        }
      }
      if (plStack_1c8 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_1c8 + 1);
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
            (**(code **)(*plStack_1c8 + 8))();
          }
        }
      }
      func_0x00010a04efb4(uStack_1e0);
      lVar10 = alStack_1f0[0];
      alStack_1f0[0] = 0;
      if (lVar10 != 0) {
        __ZdlPv();
      }
      func_0x00010a04efb4(uStack_208);
      lVar10 = alStack_218[0];
      alStack_218[0] = 0;
      if (lVar10 != 0) {
        __ZdlPv();
      }
      if (lStack_220 < 0) {
        __ZdlPv(puStack_230);
      }
      if ((long)plStack_240 < 0) {
        __ZdlPv(plStack_250);
      }
      (*(code *)*appuStack_288[0])(appuStack_288);
      plVar14 = plStack_298;
      if (plStack_298 != (long *)0x0) {
        plVar15 = plStack_298 + 1;
        do {
          lVar10 = *plVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *plVar15 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_298 + 0x10))(plStack_298);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
      }
      func_0x000109a1dbe4(auStack_4b8);
      FUN_10a04f520(&uStack_3f0);
      plVar14 = &lStack_418;
      FUN_10a04f520(plVar14);
      if (lStack_420 < 0) {
        plVar14 = plStack_430;
        __ZdlPv(plStack_430);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
        return plVar14;
      }
      ___stack_chk_fail();
    }
    else {
      lStack_3c0 = 0;
      (**(code **)(*plVar17 + 0x28))(plVar17,0,&lStack_3c0);
      if (lStack_3c0 == 0) {
        func_0x000109a19274(&pcStack_238,0,&uStack_398);
        plStack_1a8 = plStack_308;
        plStack_1b0 = plStack_310;
        plStack_310 = (long *)0x0;
        plStack_308 = (long *)0x0;
        pcStack_1a0 = pcStack_300;
        (*(code *)apuStack_2f8[0][2])(apuStack_198,apuStack_2f8);
        plStack_150 = plStack_2b0;
        plStack_158 = plStack_2b8;
        plStack_160 = plStack_2c0;
        plStack_2b8 = (long *)0x0;
        plStack_2b0 = (long *)0x0;
        plStack_2c0 = (long *)0x0;
        plStack_148 = plStack_2a8;
        plStack_2a8 = (long *)0x0;
        puVar8 = (undefined8 *)0x1c8;
        __Znwm();
        puVar8[2] = 0;
        puVar8[1] = 0x200000006;
        *(undefined2 *)(puVar8 + 3) = 4;
        puVar8[5] = 0;
        puVar8[4] = 0;
        puVar8[7] = 0;
        puVar8[6] = 0;
        puVar8[9] = 0;
        puVar8[8] = 0;
        puVar8[0xb] = 0;
        puVar8[10] = 0;
        puVar8[0xd] = 0;
        puVar8[0xc] = 0;
        puVar8[0xf] = 0;
        puVar8[0xe] = 0;
        puVar8[0x10] = 0;
        puVar8[0x11] = puVar8 + 3;
        puVar8[0x12] = 0;
        *(undefined1 *)(puVar8 + 0x13) = 0;
        *(undefined1 *)(puVar8 + 0x15) = 0;
        puVar9 = puVar8 + 0x16;
        *puVar8 = &PTR_FUN_110b9d628;
        func_0x00010a04c360(puVar9,&pcStack_238);
        puVar8[0x37] = 0;
        puVar8[0x38] = plVar17;
        if (plStack_3b0 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_3b0 + 1);
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
              (**(code **)(*plStack_3b0 + 8))();
            }
          }
        }
        plStack_3b0 = puVar8;
        if (puStack_3a8 != (undefined8 *)0x0) {
          func_0x0001092b4274(&puStack_3a8);
        }
        plVar17 = plStack_148;
        puStack_3b8 = puVar9;
        puStack_3a8 = puVar8;
        if (plStack_148 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_148 + 1);
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
            (**(code **)(*plStack_148 + 0x10))(plStack_148);
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
              (**(code **)(*plVar17 + 8))(plVar17);
            }
          }
        }
        if ((long)plStack_150 < 0) {
          __ZdlPv(plStack_160);
        }
        (*(code *)*apuStack_198[0])(apuStack_198);
        plVar17 = plStack_1a8;
        if (plStack_1a8 != (long *)0x0) {
          plVar16 = plStack_1a8 + 1;
          do {
            lVar13 = *plVar16;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar4) {
              *plVar16 = lVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        func_0x000109a1dbe4(&pcStack_238);
        pcStack_3a0 = (code *)0x10a04bc04;
        __ZNSt13exception_ptrD1Ev(&lStack_3c0);
        goto LAB_10a03459c;
      }
    }
    func_0x0001092af97c(&lStack_3c0);
    goto LAB_10a034d68;
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&uStack_398,&UNK_10f632b83,puVar6 + 0x30);
  FUN_10a012db0(&pcStack_238,&uStack_398,&UNK_10f632b8e);
  FUN_10a0029c0(&pcStack_238);
LAB_10a034d68:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a034d6c);
  (*pcVar5)();
}



/* Entry: 10a033d98; end: 10a033e7b;  */

/* WARNING: Removing unreachable block (ram,0x00010a0348a0) */
/* WARNING: Removing unreachable block (ram,0x00010a034be8) */
/* WARNING: Removing unreachable block (ram,0x00010a034bec) */
/* WARNING: Removing unreachable block (ram,0x00010a034bf4) */
/* WARNING: Removing unreachable block (ram,0x00010a034bfc) */
/* WARNING: Removing unreachable block (ram,0x00010a034c00) */

long * FUN_10a033d98(long *param_1,long param_2,undefined *param_3)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  long **pplVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *extraout_x8;
  long *extraout_x8_00;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar18;
  code *unaff_x30;
  undefined1 auStack_498 [136];
  long *plStack_410;
  undefined8 uStack_408;
  long lStack_400;
  long lStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined4 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  long lStack_3a0;
  undefined8 *puStack_398;
  long *plStack_390;
  undefined8 *puStack_388;
  code *pcStack_380;
  undefined8 uStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  long *plStack_2f0;
  long *plStack_2e8;
  code *pcStack_2e0;
  undefined8 *apuStack_2d8 [7];
  long *plStack_2a0;
  long *plStack_298;
  long *plStack_290;
  long *plStack_288;
  long *plStack_280;
  long *plStack_278;
  code *pcStack_270;
  undefined **appuStack_268 [7];
  long *plStack_230;
  long *plStack_228;
  long *plStack_220;
  code *pcStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  long lStack_200;
  long alStack_1f8 [2];
  undefined8 uStack_1e8;
  long alStack_1d0 [2];
  undefined8 uStack_1c0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined8 *puStack_198;
  long *plStack_190;
  long *plStack_188;
  code *pcStack_180;
  undefined8 *apuStack_178 [7];
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  long lStack_118;
  undefined1 auStack_a8 [8];
  undefined8 auStack_a0 [2];
  char cStack_89;
  undefined8 auStack_88 [2];
  char cStack_71;
  code *pcStack_58;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  puVar13 = auStack_50;
  puVar18 = &stack0xfffffffffffffff0;
  if (*(long *)(param_3 + 0x18) != 0) {
    lVar10 = *(long *)(param_3 + 0x10);
    for (plVar11 = (long *)lVar10; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      if (plVar11[5] == 0) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_50,&UNK_10f632ae3,plVar11 + 2);
        FUN_10a012db0(auStack_38,auStack_50,&UNK_10f594713);
        FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a033e3c);
        (*pcVar5)();
      }
    }
    if ((undefined *)(param_2 + 0x48) != param_3) {
      *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_3 + 0x20);
      FUN_10a071258((undefined *)(param_2 + 0x48),lVar10);
    }
    plVar11 = *(long **)(param_2 + 0x18);
    lVar10 = *(long *)(param_2 + 0x20);
    puVar13 = (undefined8 *)register0x00000008;
    puVar18 = unaff_x29;
FUN_10a071218:
    *(undefined8 *)((long)puVar13 + -0x20) = unaff_x20;
    *(undefined **)((long)puVar13 + -0x18) = unaff_x19;
    *(undefined1 **)((long)puVar13 + -0x10) = puVar18;
    *(code **)((long)puVar13 + -8) = unaff_x30;
    *param_1 = (long)plVar11;
    if (lVar10 == 0) {
      param_1[1] = 0;
      plVar15 = param_1;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      param_1[1] = lVar10;
      plVar15 = (long *)0x0;
      if (lVar10 != 0) {
        return param_1;
      }
    }
    FUN_10a043ecc();
    *(undefined8 *)((long)puVar13 + -0x50) = unaff_x22;
    *(undefined8 *)((long)puVar13 + -0x48) = unaff_x21;
    *(undefined8 *)((long)puVar13 + -0x40) = unaff_x20;
    *(long **)((long)puVar13 + -0x38) = param_1;
    *(undefined1 **)((long)puVar13 + -0x30) = (undefined1 *)((long)puVar13 + -0x10);
    *(code **)((long)puVar13 + -0x28) = FUN_10a071258;
    lVar10 = plVar15[1];
    plVar16 = plVar15;
    if (lVar10 != 0) {
      lVar14 = 0;
      do {
        *(undefined8 *)(*plVar15 + lVar14 * 8) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar10 != lVar14);
      plVar16 = (long *)plVar15[2];
      plVar15[2] = 0;
      plVar15[3] = 0;
      plVar17 = plVar16;
      if (plVar16 != (long *)0x0 && plVar11 != (long *)0x0) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (plVar17 + 2,plVar11 + 2);
          func_0x00010a04b6d4(plVar17 + 5,plVar11[5],plVar11[6]);
          plVar16 = (long *)*plVar17;
          FUN_10a071394(plVar15,plVar17);
          plVar11 = (long *)*plVar11;
          if (plVar16 == (long *)0x0) break;
          plVar17 = plVar16;
        } while (plVar11 != (long *)0x0);
      }
      func_0x00010a04efb4(plVar16);
    }
    for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      puVar9 = (undefined8 *)0x38;
      __Znwm();
      *(undefined8 **)((long)puVar13 + -0x68) = puVar9;
      *(long **)((long)puVar13 + -0x60) = plVar15;
      *(undefined8 *)((long)puVar13 + -0x58) = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      FUN_10a04f468(puVar9 + 2,plVar11 + 2);
      *(undefined1 *)((long)puVar13 + -0x58) = 1;
      plVar16 = plVar15;
      func_0x000107c2b05c(plVar15,puVar9 + 2);
      puVar9[1] = plVar16;
      plVar16 = plVar15;
      FUN_10a071394(plVar15,puVar9);
    }
    return plVar16;
  }
  unaff_x19 = &UNK_10f632ab7;
  FUN_10a00946c();
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  puVar6 = unaff_x19;
  __Unwind_Resume();
  pcStack_58 = FUN_10a033e7c;
  if (*(long *)(param_3 + 0x18) != 0) {
    lVar10 = *(long *)(param_3 + 0x10);
    for (plVar11 = (long *)lVar10; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      if (plVar11[5] == 0) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_a0,&UNK_10f632b34,plVar11 + 2);
        FUN_10a012db0(auStack_88,auStack_a0,&UNK_10f594713);
        FUN_10a0029c0(auStack_88);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a033f20);
        (*pcVar5)();
      }
    }
    if (puVar6 + 0x70 != param_3) {
      *(undefined4 *)(puVar6 + 0x90) = *(undefined4 *)(param_3 + 0x20);
      FUN_10a071258(puVar6 + 0x70,lVar10);
    }
    plVar11 = *(long **)(puVar6 + 0x18);
    lVar10 = *(long *)(puVar6 + 0x20);
    param_1 = extraout_x8;
    unaff_x30 = pcStack_58;
    goto FUN_10a071218;
  }
  puVar6 = &UNK_10f632b06;
  FUN_10a00946c();
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)(char)puVar6[0x47];
  if (lVar10 < 0) {
    lVar10 = *(long *)(puVar6 + 0x38);
  }
  if (lVar10 == 0) {
    FUN_10a00946c(&UNK_10f632b59);
  }
  else if (*(long *)(puVar6 + 0x60) != 0) {
    if (*(long *)(puVar6 + 0x88) == 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&uStack_378,&UNK_10f632b83,puVar6 + 0x30);
      FUN_10a012db0(&pcStack_218,&uStack_378,&UNK_10f632ba2);
      FUN_10a0029c0(&pcStack_218);
      goto LAB_10a034d68;
    }
    uStack_3e0 = 0;
    lStack_3f8 = 0;
    lStack_400 = 0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_408 = 0;
    plStack_410 = (long *)0x0;
    uStack_3d8 = 0x3f800000;
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3b0 = 0x3f800000;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (&plStack_410,puVar6 + 0x30);
    for (plVar11 = *(long **)(puVar6 + 0x58); plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      FUN_10a0717cc(&lStack_3f8,plVar11 + 2,plVar11 + 2);
    }
    for (plVar11 = *(long **)(puVar6 + 0x80); plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      FUN_10a0717cc(&uStack_3d0,plVar11 + 2,plVar11 + 2);
    }
    pplVar7 = &plStack_410;
    func_0x000109a1fa88(auStack_498);
    FUN_10a0f367c();
    plStack_278 = pplVar7[1];
    plStack_280 = *pplVar7;
    if (pplVar7[1] != (long *)0x0) {
      plVar11 = pplVar7[1] + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = *plVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pcStack_270 = FUN_10a071c3c;
    appuStack_268[0] = &PTR_DAT_110b9e298;
    func_0x00010ad031c0();
    if (*(char *)((long)pplVar7 + 0x17) < '\0') {
      func_0x000107c3192c(&plStack_230,*pplVar7,pplVar7[1]);
    }
    else {
      plStack_228 = pplVar7[1];
      plStack_230 = *pplVar7;
      plStack_220 = pplVar7[2];
    }
    plVar11 = *(long **)(*(long *)(puVar6 + 0x28) + 0x870);
    FUN_10a462144();
    plVar15 = (long *)plVar11[7];
    if (plVar15 != (long *)0x0) {
      plVar16 = plVar15 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = *plVar16 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar16 = plVar11;
    FUN_10a0f3780();
    puVar13 = (undefined8 *)*plVar16;
    lVar10 = plVar16[1];
    if (lVar10 != 0) {
      plVar16 = (long *)(lVar10 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = *plVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x000109a19274(&uStack_378,0,auStack_498);
    plStack_2e8 = plStack_278;
    plStack_2f0 = plStack_280;
    plStack_278 = (long *)0x0;
    plStack_280 = (long *)0x0;
    pcStack_2e0 = pcStack_270;
    (*(code *)appuStack_268[0][2])(apuStack_2d8,appuStack_268);
    plStack_290 = plStack_220;
    plStack_298 = plStack_228;
    plStack_2a0 = plStack_230;
    plStack_228 = (long *)0x0;
    plStack_220 = (long *)0x0;
    plStack_230 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      plVar16 = plVar15 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = *plVar16 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar16 = (long *)puVar13[2];
    plStack_390 = (long *)0x0;
    puStack_388 = (undefined8 *)0x0;
    plStack_288 = plVar15;
    if (plVar16 == (long *)0x0) {
      func_0x000109a19274(&pcStack_218,0,&uStack_378);
      plStack_188 = plStack_2e8;
      plStack_190 = plStack_2f0;
      plStack_2f0 = (long *)0x0;
      plStack_2e8 = (long *)0x0;
      pcStack_180 = pcStack_2e0;
      (*(code *)apuStack_2d8[0][2])(apuStack_178,apuStack_2d8);
      plStack_130 = plStack_290;
      plStack_138 = plStack_298;
      plStack_140 = plStack_2a0;
      plStack_298 = (long *)0x0;
      plStack_290 = (long *)0x0;
      plStack_2a0 = (long *)0x0;
      plStack_128 = plStack_288;
      plStack_288 = (long *)0x0;
      puVar8 = (undefined8 *)0x1c0;
      __Znwm();
      puVar8[2] = 0;
      puVar8[1] = 0x200000006;
      *(undefined2 *)(puVar8 + 3) = 4;
      puVar8[5] = 0;
      puVar8[4] = 0;
      puVar8[7] = 0;
      puVar8[6] = 0;
      puVar8[9] = 0;
      puVar8[8] = 0;
      puVar8[0xb] = 0;
      puVar8[10] = 0;
      puVar8[0xd] = 0;
      puVar8[0xc] = 0;
      puVar8[0xf] = 0;
      puVar8[0xe] = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = puVar8 + 3;
      puVar8[0x12] = 0;
      *(undefined1 *)(puVar8 + 0x13) = 0;
      *(undefined1 *)(puVar8 + 0x15) = 0;
      puVar9 = puVar8 + 0x16;
      *puVar8 = &PTR_FUN_110b9d698;
      func_0x00010a04c360(puVar9,&pcStack_218);
      puVar8[0x37] = 0;
      if (plStack_390 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_390 + 1);
        do {
          uVar12 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar12 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plStack_390 + 8))();
          }
        }
      }
      plStack_390 = puVar8;
      if (puStack_388 != (undefined8 *)0x0) {
        func_0x0001092b4274(&puStack_388);
      }
      plVar16 = plStack_128;
      puStack_398 = puVar9;
      puStack_388 = puVar8;
      if (plStack_128 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_128 + 1);
        do {
          uVar12 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar12 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          (**(code **)(*plStack_128 + 0x10))(plStack_128);
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar16 + 8))(plVar16);
          }
        }
      }
      if ((long)plStack_130 < 0) {
        __ZdlPv(plStack_140);
      }
      (*(code *)*apuStack_178[0])(apuStack_178);
      plVar16 = plStack_188;
      if (plStack_188 != (long *)0x0) {
        plVar17 = plStack_188 + 1;
        do {
          lVar14 = *plVar17;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar4) {
            *plVar17 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_188 + 0x10))(plStack_188);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      func_0x000109a1dbe4(&pcStack_218);
      pcStack_380 = FUN_10a04bc34;
LAB_10a03459c:
      puVar9 = puStack_398;
      if (puStack_398[0x21] != 0) {
        func_0x0001092b4274(puStack_398 + 0x21);
      }
      puVar9[0x21] = puStack_388;
      puStack_388 = (undefined8 *)0x0;
      pcStack_218 = pcStack_380;
      puStack_210 = puStack_398;
      puStack_208 = puVar13;
      (**(code **)*puVar13)(puVar13,&pcStack_218);
      plVar16 = plStack_390;
      plStack_390 = (long *)0x0;
      if ((puStack_388 != (undefined8 *)0x0) &&
         (func_0x0001092b4274(&puStack_388), plStack_390 != (long *)0x0)) {
        puVar1 = (ulong *)(plStack_390 + 1);
        do {
          uVar12 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar12 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plStack_390 + 8))();
          }
        }
      }
      plVar17 = plStack_288;
      if (plStack_288 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_288 + 1);
        do {
          uVar12 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar12 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          (**(code **)(*plStack_288 + 0x10))(plStack_288);
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar17 + 8))(plVar17);
          }
        }
      }
      if ((long)plStack_290 < 0) {
        __ZdlPv(plStack_2a0);
      }
      (*(code *)*apuStack_2d8[0])(apuStack_2d8);
      plVar17 = plStack_2e8;
      if (plStack_2e8 != (long *)0x0) {
        plVar2 = plStack_2e8 + 1;
        do {
          lVar14 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_2e8 + 0x10))(plStack_2e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      func_0x000109a1dbe4(&uStack_378);
      pcStack_218 = *(code **)(puVar6 + 0x28);
      if ((char)puVar6[0x47] < '\0') {
        func_0x000107c3192c(&puStack_210,*(undefined8 *)(puVar6 + 0x30),
                            *(undefined8 *)(puVar6 + 0x38));
      }
      else {
        puStack_208 = *(undefined8 **)(puVar6 + 0x38);
        puStack_210 = *(undefined8 **)(puVar6 + 0x30);
        lStack_200 = *(long *)(puVar6 + 0x40);
      }
      FUN_10a04f02c(alStack_1f8,puVar6 + 0x48);
      FUN_10a04f02c(alStack_1d0,puVar6 + 0x70);
      plStack_1a8 = plVar16;
      puVar9 = (undefined8 *)0xf8;
      plStack_1a0 = plVar15;
      puStack_198 = puVar13;
      plStack_190 = (long *)lVar10;
      __Znwm();
      *puVar9 = FUN_10a08b368;
      puVar9[1] = FUN_10a08b6d4;
      FUN_10a04d454(puVar9 + 2);
      lVar10 = puVar9[7];
      if (lVar10 != 0) {
        plVar15 = (long *)(lVar10 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *plVar15 = *plVar15 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *extraout_x8_00 = lVar10;
      puVar9[9] = pcStack_218;
      puVar9[0xb] = puStack_208;
      puVar9[10] = puStack_210;
      puVar9[0xc] = lStack_200;
      lStack_200 = 0;
      puStack_208 = (undefined8 *)0x0;
      puStack_210 = (undefined8 *)0x0;
      FUN_10a04d600(puVar9 + 0xd,alStack_1f8);
      FUN_10a04d600(puVar9 + 0x12,alStack_1d0);
      puVar9[0x18] = plStack_1a0;
      puVar9[0x17] = plStack_1a8;
      plStack_1a0 = (long *)0x0;
      plStack_1a8 = (long *)0x0;
      puVar9[0x1a] = plStack_190;
      puVar9[0x19] = puStack_198;
      plStack_190 = (long *)0x0;
      puStack_198 = (undefined8 *)0x0;
      puVar9[0x1b] = plVar11;
      *(undefined1 *)(puVar9 + 0x1c) = 0;
      *(undefined1 *)(puVar9 + 0x1e) = 0;
      puStack_398 = (undefined8 *)0x0;
      FUN_109d18960(puVar9 + 2,plVar11,&puStack_398);
      if (puStack_398 != (undefined8 *)0x0) {
        func_0x0001092af97c(&puStack_398);
        goto LAB_10a034d68;
      }
      if ((*(byte *)(puVar9 + 0x1c) & 1) == 0) {
        puStack_368 = (undefined8 *)puVar9[0x1b];
        uStack_378 = 0;
        puStack_370 = puVar9;
        (**(code **)*puStack_368)(puStack_368,&uStack_378);
        __ZNSt13exception_ptrD1Ev(&puStack_398);
      }
      else {
        __ZNSt13exception_ptrD1Ev(&puStack_398);
        FUN_10a04c73c(puVar9 + 0x1d,puVar9 + 9);
        puVar9[0x1b] = puVar9[0x1d];
        plVar11 = (long *)(puVar9[0x1d] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (((uint)*(undefined8 *)(puVar9[0x1b] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar9 + 0x1e) = 1;
          lVar10 = puVar9[0x1b];
          plVar11 = (long *)(lVar10 + 0x10);
          puVar13 = (undefined8 *)puVar9[3];
          do {
            lVar14 = *plVar11;
            if (lVar14 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *plVar11 = 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                uStack_378 = 0;
                puStack_370 = puVar9;
                puStack_368 = puVar13;
                func_0x000109d1b588(lVar10 + 0x18,&uStack_378);
                *(undefined8 *)(lVar10 + 0x10) = 0;
                goto LAB_10a034ac4;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar14 >> 1 & 1) == 0);
        }
        lVar10 = puVar9[0x1b];
        if (((uint)*(undefined8 *)(puVar9[0x1b] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(lVar10 + 0x90);
          goto LAB_10a034d68;
        }
        if ((*(byte *)(lVar10 + 0xa8) & 1) == 0) goto LAB_10a034d68;
        FUN_10a04c67c(puVar9 + 2,lVar10 + 0x98);
        plVar11 = (long *)puVar9[0x1b];
        if (plVar11 != (long *)0x0) {
          puVar1 = (ulong *)(plVar11 + 1);
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar11 + 8))();
            }
          }
        }
        plVar11 = (long *)puVar9[0x1d];
        if (plVar11 != (long *)0x0) {
          puVar1 = (ulong *)(plVar11 + 1);
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar11 + 8))();
            }
          }
        }
        plVar11 = (long *)puVar9[0x1a];
        if (plVar11 != (long *)0x0) {
          plVar15 = plVar11 + 1;
          do {
            lVar10 = *plVar15;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar4) {
              *plVar15 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        plVar11 = (long *)puVar9[0x18];
        if (plVar11 != (long *)0x0) {
          puVar1 = (ulong *)(plVar11 + 1);
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            do {
              uVar12 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar11 + 8))(plVar11);
            }
          }
        }
        plVar11 = (long *)puVar9[0x17];
        if (plVar11 != (long *)0x0) {
          puVar1 = (ulong *)(plVar11 + 1);
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar11 + 8))();
            }
          }
        }
        func_0x00010a04ef7c(puVar9 + 0x12);
        func_0x00010a04ef7c(puVar9 + 0xd);
        if (*(char *)((long)puVar9 + 0x67) < '\0') {
          __ZdlPv(puVar9[10]);
        }
        func_0x000109d1a1d0(puVar9 + 2);
        __ZdlPv(puVar9);
      }
LAB_10a034ac4:
      plVar11 = plStack_190;
      if (plStack_190 != (long *)0x0) {
        plVar15 = plStack_190 + 1;
        do {
          lVar10 = *plVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *plVar15 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_190 + 0x10))(plStack_190);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      plVar11 = plStack_1a0;
      if (plStack_1a0 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_1a0 + 1);
        do {
          uVar12 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar12 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar11 + 8))(plVar11);
          }
        }
      }
      if (plStack_1a8 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_1a8 + 1);
        do {
          uVar12 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar12 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plStack_1a8 + 8))();
          }
        }
      }
      func_0x00010a04efb4(uStack_1c0);
      lVar10 = alStack_1d0[0];
      alStack_1d0[0] = 0;
      if (lVar10 != 0) {
        __ZdlPv();
      }
      func_0x00010a04efb4(uStack_1e8);
      lVar10 = alStack_1f8[0];
      alStack_1f8[0] = 0;
      if (lVar10 != 0) {
        __ZdlPv();
      }
      if (lStack_200 < 0) {
        __ZdlPv(puStack_210);
      }
      if ((long)plStack_220 < 0) {
        __ZdlPv(plStack_230);
      }
      (*(code *)*appuStack_268[0])(appuStack_268);
      plVar11 = plStack_278;
      if (plStack_278 != (long *)0x0) {
        plVar15 = plStack_278 + 1;
        do {
          lVar10 = *plVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *plVar15 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_278 + 0x10))(plStack_278);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      func_0x000109a1dbe4(auStack_498);
      FUN_10a04f520(&uStack_3d0);
      plVar11 = &lStack_3f8;
      FUN_10a04f520(plVar11);
      if (lStack_400 < 0) {
        plVar11 = plStack_410;
        __ZdlPv(plStack_410);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
        return plVar11;
      }
      ___stack_chk_fail();
    }
    else {
      lStack_3a0 = 0;
      (**(code **)(*plVar16 + 0x28))(plVar16,0,&lStack_3a0);
      if (lStack_3a0 == 0) {
        func_0x000109a19274(&pcStack_218,0,&uStack_378);
        plStack_188 = plStack_2e8;
        plStack_190 = plStack_2f0;
        plStack_2f0 = (long *)0x0;
        plStack_2e8 = (long *)0x0;
        pcStack_180 = pcStack_2e0;
        (*(code *)apuStack_2d8[0][2])(apuStack_178,apuStack_2d8);
        plStack_130 = plStack_290;
        plStack_138 = plStack_298;
        plStack_140 = plStack_2a0;
        plStack_298 = (long *)0x0;
        plStack_290 = (long *)0x0;
        plStack_2a0 = (long *)0x0;
        plStack_128 = plStack_288;
        plStack_288 = (long *)0x0;
        puVar8 = (undefined8 *)0x1c8;
        __Znwm();
        puVar8[2] = 0;
        puVar8[1] = 0x200000006;
        *(undefined2 *)(puVar8 + 3) = 4;
        puVar8[5] = 0;
        puVar8[4] = 0;
        puVar8[7] = 0;
        puVar8[6] = 0;
        puVar8[9] = 0;
        puVar8[8] = 0;
        puVar8[0xb] = 0;
        puVar8[10] = 0;
        puVar8[0xd] = 0;
        puVar8[0xc] = 0;
        puVar8[0xf] = 0;
        puVar8[0xe] = 0;
        puVar8[0x10] = 0;
        puVar8[0x11] = puVar8 + 3;
        puVar8[0x12] = 0;
        *(undefined1 *)(puVar8 + 0x13) = 0;
        *(undefined1 *)(puVar8 + 0x15) = 0;
        puVar9 = puVar8 + 0x16;
        *puVar8 = &PTR_FUN_110b9d628;
        func_0x00010a04c360(puVar9,&pcStack_218);
        puVar8[0x37] = 0;
        puVar8[0x38] = plVar16;
        if (plStack_390 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_390 + 1);
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plStack_390 + 8))();
            }
          }
        }
        plStack_390 = puVar8;
        if (puStack_388 != (undefined8 *)0x0) {
          func_0x0001092b4274(&puStack_388);
        }
        plVar16 = plStack_128;
        puStack_398 = puVar9;
        puStack_388 = puVar8;
        if (plStack_128 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_128 + 1);
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            (**(code **)(*plStack_128 + 0x10))(plStack_128);
            do {
              uVar12 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar16 + 8))(plVar16);
            }
          }
        }
        if ((long)plStack_130 < 0) {
          __ZdlPv(plStack_140);
        }
        (*(code *)*apuStack_178[0])(apuStack_178);
        plVar16 = plStack_188;
        if (plStack_188 != (long *)0x0) {
          plVar17 = plStack_188 + 1;
          do {
            lVar14 = *plVar17;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar4) {
              *plVar17 = lVar14 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_188 + 0x10))(plStack_188);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
          }
        }
        func_0x000109a1dbe4(&pcStack_218);
        pcStack_380 = (code *)0x10a04bc04;
        __ZNSt13exception_ptrD1Ev(&lStack_3a0);
        goto LAB_10a03459c;
      }
    }
    func_0x0001092af97c(&lStack_3a0);
    goto LAB_10a034d68;
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&uStack_378,&UNK_10f632b83,puVar6 + 0x30);
  FUN_10a012db0(&pcStack_218,&uStack_378,&UNK_10f632b8e);
  FUN_10a0029c0(&pcStack_218);
LAB_10a034d68:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a034d6c);
  (*pcVar5)();
}



/* Entry: 10a033e7c; end: 10a033f5f;  */

/* WARNING: Removing unreachable block (ram,0x00010a0348a0) */
/* WARNING: Removing unreachable block (ram,0x00010a034be8) */
/* WARNING: Removing unreachable block (ram,0x00010a034bec) */
/* WARNING: Removing unreachable block (ram,0x00010a034bf4) */
/* WARNING: Removing unreachable block (ram,0x00010a034bfc) */
/* WARNING: Removing unreachable block (ram,0x00010a034c00) */

long * FUN_10a033e7c(long *param_1,long param_2,long param_3)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  long **pplVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *extraout_x8;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined1 auStack_448 [136];
  long *plStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined4 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined4 uStack_360;
  long lStack_350;
  undefined8 *puStack_348;
  long *plStack_340;
  undefined8 *puStack_338;
  code *pcStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  long *plStack_2a0;
  long *plStack_298;
  code *pcStack_290;
  undefined8 *apuStack_288 [7];
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  long *plStack_230;
  long *plStack_228;
  code *pcStack_220;
  undefined **appuStack_218 [7];
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  code *pcStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  long lStack_1b0;
  long alStack_1a8 [2];
  undefined8 uStack_198;
  long alStack_180 [2];
  undefined8 uStack_170;
  long *plStack_158;
  long *plStack_150;
  undefined8 *puStack_148;
  long *plStack_140;
  long *plStack_138;
  code *pcStack_130;
  undefined8 *apuStack_128 [7];
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long lStack_c8;
  undefined8 in_stack_ffffffffffffffb0;
  long lStack_40;
  long *plStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_3 + 0x18) != 0) {
    lVar11 = *(long *)(param_3 + 0x10);
    for (plVar12 = (long *)lVar11; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      if (plVar12[5] == 0) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (&stack0xffffffffffffffb0,&UNK_10f632b34,plVar12 + 2);
        FUN_10a012db0(&plStack_38,&stack0xffffffffffffffb0,&UNK_10f594713);
        FUN_10a0029c0(&plStack_38);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a033f20);
        (*pcVar5)();
      }
    }
    if (param_2 + 0x70 != param_3) {
      *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_3 + 0x20);
      FUN_10a071258(param_2 + 0x70,lVar11);
    }
    plVar12 = *(long **)(param_2 + 0x18);
    lVar11 = *(long *)(param_2 + 0x20);
    *param_1 = (long)plVar12;
    if (lVar11 == 0) {
      param_1[1] = 0;
      plVar15 = param_1;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      param_1[1] = lVar11;
      plVar15 = (long *)0x0;
      if (lVar11 != 0) {
        return param_1;
      }
    }
    FUN_10a043ecc();
    uStack_28 = FUN_10a071258;
    lVar11 = plVar15[1];
    plVar16 = plVar15;
    plStack_38 = param_1;
    puStack_30 = &stack0xfffffffffffffff0;
    if (lVar11 != 0) {
      lVar14 = 0;
      do {
        *(undefined8 *)(*plVar15 + lVar14 * 8) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar11 != lVar14);
      plVar16 = (long *)plVar15[2];
      plVar15[2] = 0;
      plVar15[3] = 0;
      plVar17 = plVar16;
      if (plVar16 != (long *)0x0 && plVar12 != (long *)0x0) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (plVar17 + 2,plVar12 + 2);
          func_0x00010a04b6d4(plVar17 + 5,plVar12[5],plVar12[6]);
          plVar16 = (long *)*plVar17;
          FUN_10a071394(plVar15,plVar17);
          plVar12 = (long *)*plVar12;
          if (plVar16 == (long *)0x0) break;
          plVar17 = plVar16;
        } while (plVar12 != (long *)0x0);
      }
      func_0x00010a04efb4(plVar16);
    }
    for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      puVar10 = (undefined8 *)0x38;
      __Znwm();
      *puVar10 = 0;
      puVar10[1] = 0;
      FUN_10a04f468(puVar10 + 2,plVar12 + 2);
      plVar16 = plVar15;
      func_0x000107c2b05c(plVar15,puVar10 + 2);
      puVar10[1] = plVar16;
      plVar16 = plVar15;
      FUN_10a071394(plVar15,puVar10);
    }
    return plVar16;
  }
  puVar6 = &UNK_10f632b06;
  FUN_10a00946c();
  if (uStack_28._7_1_ < '\0') {
    __ZdlPv(plStack_38);
  }
  if (lStack_40 < 0) {
    __ZdlPv(in_stack_ffffffffffffffb0);
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)(char)puVar6[0x47];
  if (lVar11 < 0) {
    lVar11 = *(long *)(puVar6 + 0x38);
  }
  if (lVar11 == 0) {
    FUN_10a00946c(&UNK_10f632b59);
  }
  else if (*(long *)(puVar6 + 0x60) != 0) {
    if (*(long *)(puVar6 + 0x88) == 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&uStack_328,&UNK_10f632b83,puVar6 + 0x30);
      FUN_10a012db0(&pcStack_1c8,&uStack_328,&UNK_10f632ba2);
      FUN_10a0029c0(&pcStack_1c8);
      goto LAB_10a034d68;
    }
    uStack_390 = 0;
    lStack_3a8 = 0;
    lStack_3b0 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_3b8 = 0;
    plStack_3c0 = (long *)0x0;
    uStack_388 = 0x3f800000;
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_360 = 0x3f800000;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (&plStack_3c0,puVar6 + 0x30);
    for (plVar12 = *(long **)(puVar6 + 0x58); plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      FUN_10a0717cc(&lStack_3a8,plVar12 + 2,plVar12 + 2);
    }
    for (plVar12 = *(long **)(puVar6 + 0x80); plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      FUN_10a0717cc(&uStack_380,plVar12 + 2,plVar12 + 2);
    }
    pplVar7 = &plStack_3c0;
    func_0x000109a1fa88(auStack_448);
    FUN_10a0f367c();
    plStack_228 = pplVar7[1];
    plStack_230 = *pplVar7;
    if (pplVar7[1] != (long *)0x0) {
      plVar12 = pplVar7[1] + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = *plVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pcStack_220 = FUN_10a071c3c;
    appuStack_218[0] = &PTR_DAT_110b9e298;
    func_0x00010ad031c0();
    if (*(char *)((long)pplVar7 + 0x17) < '\0') {
      func_0x000107c3192c(&plStack_1e0,*pplVar7,pplVar7[1]);
    }
    else {
      plStack_1d8 = pplVar7[1];
      plStack_1e0 = *pplVar7;
      plStack_1d0 = pplVar7[2];
    }
    plVar12 = *(long **)(*(long *)(puVar6 + 0x28) + 0x870);
    FUN_10a462144();
    plVar15 = (long *)plVar12[7];
    if (plVar15 != (long *)0x0) {
      plVar16 = plVar15 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = *plVar16 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar16 = plVar12;
    FUN_10a0f3780();
    puVar10 = (undefined8 *)*plVar16;
    lVar11 = plVar16[1];
    if (lVar11 != 0) {
      plVar16 = (long *)(lVar11 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = *plVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x000109a19274(&uStack_328,0,auStack_448);
    plStack_298 = plStack_228;
    plStack_2a0 = plStack_230;
    plStack_228 = (long *)0x0;
    plStack_230 = (long *)0x0;
    pcStack_290 = pcStack_220;
    (*(code *)appuStack_218[0][2])(apuStack_288,appuStack_218);
    plStack_240 = plStack_1d0;
    plStack_248 = plStack_1d8;
    plStack_250 = plStack_1e0;
    plStack_1d8 = (long *)0x0;
    plStack_1d0 = (long *)0x0;
    plStack_1e0 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      plVar16 = plVar15 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = *plVar16 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar16 = (long *)puVar10[2];
    plStack_340 = (long *)0x0;
    puStack_338 = (undefined8 *)0x0;
    plStack_238 = plVar15;
    if (plVar16 == (long *)0x0) {
      func_0x000109a19274(&pcStack_1c8,0,&uStack_328);
      plStack_138 = plStack_298;
      plStack_140 = plStack_2a0;
      plStack_2a0 = (long *)0x0;
      plStack_298 = (long *)0x0;
      pcStack_130 = pcStack_290;
      (*(code *)apuStack_288[0][2])(apuStack_128,apuStack_288);
      plStack_e0 = plStack_240;
      plStack_e8 = plStack_248;
      plStack_f0 = plStack_250;
      plStack_248 = (long *)0x0;
      plStack_240 = (long *)0x0;
      plStack_250 = (long *)0x0;
      plStack_d8 = plStack_238;
      plStack_238 = (long *)0x0;
      puVar8 = (undefined8 *)0x1c0;
      __Znwm();
      puVar8[2] = 0;
      puVar8[1] = 0x200000006;
      *(undefined2 *)(puVar8 + 3) = 4;
      puVar8[5] = 0;
      puVar8[4] = 0;
      puVar8[7] = 0;
      puVar8[6] = 0;
      puVar8[9] = 0;
      puVar8[8] = 0;
      puVar8[0xb] = 0;
      puVar8[10] = 0;
      puVar8[0xd] = 0;
      puVar8[0xc] = 0;
      puVar8[0xf] = 0;
      puVar8[0xe] = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = puVar8 + 3;
      puVar8[0x12] = 0;
      *(undefined1 *)(puVar8 + 0x13) = 0;
      *(undefined1 *)(puVar8 + 0x15) = 0;
      puVar9 = puVar8 + 0x16;
      *puVar8 = &PTR_FUN_110b9d698;
      func_0x00010a04c360(puVar9,&pcStack_1c8);
      puVar8[0x37] = 0;
      if (plStack_340 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_340 + 1);
        do {
          uVar13 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar13 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plStack_340 + 8))();
          }
        }
      }
      plStack_340 = puVar8;
      if (puStack_338 != (undefined8 *)0x0) {
        func_0x0001092b4274(&puStack_338);
      }
      plVar16 = plStack_d8;
      puStack_348 = puVar9;
      puStack_338 = puVar8;
      if (plStack_d8 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_d8 + 1);
        do {
          uVar13 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar13 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          do {
            uVar13 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar16 + 8))(plVar16);
          }
        }
      }
      if ((long)plStack_e0 < 0) {
        __ZdlPv(plStack_f0);
      }
      (*(code *)*apuStack_128[0])(apuStack_128);
      plVar16 = plStack_138;
      if (plStack_138 != (long *)0x0) {
        plVar17 = plStack_138 + 1;
        do {
          lVar14 = *plVar17;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar4) {
            *plVar17 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_138 + 0x10))(plStack_138);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      func_0x000109a1dbe4(&pcStack_1c8);
      pcStack_330 = FUN_10a04bc34;
LAB_10a03459c:
      puVar9 = puStack_348;
      if (puStack_348[0x21] != 0) {
        func_0x0001092b4274(puStack_348 + 0x21);
      }
      puVar9[0x21] = puStack_338;
      puStack_338 = (undefined8 *)0x0;
      pcStack_1c8 = pcStack_330;
      puStack_1c0 = puStack_348;
      puStack_1b8 = puVar10;
      (**(code **)*puVar10)(puVar10,&pcStack_1c8);
      plVar16 = plStack_340;
      plStack_340 = (long *)0x0;
      if ((puStack_338 != (undefined8 *)0x0) &&
         (func_0x0001092b4274(&puStack_338), plStack_340 != (long *)0x0)) {
        puVar1 = (ulong *)(plStack_340 + 1);
        do {
          uVar13 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar13 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plStack_340 + 8))();
          }
        }
      }
      plVar17 = plStack_238;
      if (plStack_238 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_238 + 1);
        do {
          uVar13 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar13 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          (**(code **)(*plStack_238 + 0x10))(plStack_238);
          do {
            uVar13 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar17 + 8))(plVar17);
          }
        }
      }
      if ((long)plStack_240 < 0) {
        __ZdlPv(plStack_250);
      }
      (*(code *)*apuStack_288[0])(apuStack_288);
      plVar17 = plStack_298;
      if (plStack_298 != (long *)0x0) {
        plVar2 = plStack_298 + 1;
        do {
          lVar14 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_298 + 0x10))(plStack_298);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      func_0x000109a1dbe4(&uStack_328);
      pcStack_1c8 = *(code **)(puVar6 + 0x28);
      if ((char)puVar6[0x47] < '\0') {
        func_0x000107c3192c(&puStack_1c0,*(undefined8 *)(puVar6 + 0x30),
                            *(undefined8 *)(puVar6 + 0x38));
      }
      else {
        puStack_1b8 = *(undefined8 **)(puVar6 + 0x38);
        puStack_1c0 = *(undefined8 **)(puVar6 + 0x30);
        lStack_1b0 = *(long *)(puVar6 + 0x40);
      }
      FUN_10a04f02c(alStack_1a8,puVar6 + 0x48);
      FUN_10a04f02c(alStack_180,puVar6 + 0x70);
      plStack_158 = plVar16;
      puVar9 = (undefined8 *)0xf8;
      plStack_150 = plVar15;
      puStack_148 = puVar10;
      plStack_140 = (long *)lVar11;
      __Znwm();
      *puVar9 = FUN_10a08b368;
      puVar9[1] = FUN_10a08b6d4;
      FUN_10a04d454(puVar9 + 2);
      lVar11 = puVar9[7];
      if (lVar11 != 0) {
        plVar15 = (long *)(lVar11 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *plVar15 = *plVar15 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *extraout_x8 = lVar11;
      puVar9[9] = pcStack_1c8;
      puVar9[0xb] = puStack_1b8;
      puVar9[10] = puStack_1c0;
      puVar9[0xc] = lStack_1b0;
      lStack_1b0 = 0;
      puStack_1b8 = (undefined8 *)0x0;
      puStack_1c0 = (undefined8 *)0x0;
      FUN_10a04d600(puVar9 + 0xd,alStack_1a8);
      FUN_10a04d600(puVar9 + 0x12,alStack_180);
      puVar9[0x18] = plStack_150;
      puVar9[0x17] = plStack_158;
      plStack_150 = (long *)0x0;
      plStack_158 = (long *)0x0;
      puVar9[0x1a] = plStack_140;
      puVar9[0x19] = puStack_148;
      plStack_140 = (long *)0x0;
      puStack_148 = (undefined8 *)0x0;
      puVar9[0x1b] = plVar12;
      *(undefined1 *)(puVar9 + 0x1c) = 0;
      *(undefined1 *)(puVar9 + 0x1e) = 0;
      puStack_348 = (undefined8 *)0x0;
      FUN_109d18960(puVar9 + 2,plVar12,&puStack_348);
      if (puStack_348 != (undefined8 *)0x0) {
        func_0x0001092af97c(&puStack_348);
        goto LAB_10a034d68;
      }
      if ((*(byte *)(puVar9 + 0x1c) & 1) == 0) {
        puStack_318 = (undefined8 *)puVar9[0x1b];
        uStack_328 = 0;
        puStack_320 = puVar9;
        (**(code **)*puStack_318)(puStack_318,&uStack_328);
        __ZNSt13exception_ptrD1Ev(&puStack_348);
      }
      else {
        __ZNSt13exception_ptrD1Ev(&puStack_348);
        FUN_10a04c73c(puVar9 + 0x1d,puVar9 + 9);
        puVar9[0x1b] = puVar9[0x1d];
        plVar12 = (long *)(puVar9[0x1d] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (((uint)*(undefined8 *)(puVar9[0x1b] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar9 + 0x1e) = 1;
          lVar11 = puVar9[0x1b];
          plVar12 = (long *)(lVar11 + 0x10);
          puVar10 = (undefined8 *)puVar9[3];
          do {
            lVar14 = *plVar12;
            if (lVar14 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar4) {
                *plVar12 = 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                uStack_328 = 0;
                puStack_320 = puVar9;
                puStack_318 = puVar10;
                func_0x000109d1b588(lVar11 + 0x18,&uStack_328);
                *(undefined8 *)(lVar11 + 0x10) = 0;
                goto LAB_10a034ac4;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar14 >> 1 & 1) == 0);
        }
        lVar11 = puVar9[0x1b];
        if (((uint)*(undefined8 *)(puVar9[0x1b] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(lVar11 + 0x90);
          goto LAB_10a034d68;
        }
        if ((*(byte *)(lVar11 + 0xa8) & 1) == 0) goto LAB_10a034d68;
        FUN_10a04c67c(puVar9 + 2,lVar11 + 0x98);
        plVar12 = (long *)puVar9[0x1b];
        if (plVar12 != (long *)0x0) {
          puVar1 = (ulong *)(plVar12 + 1);
          do {
            uVar13 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plVar12 + 8))();
            }
          }
        }
        plVar12 = (long *)puVar9[0x1d];
        if (plVar12 != (long *)0x0) {
          puVar1 = (ulong *)(plVar12 + 1);
          do {
            uVar13 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plVar12 + 8))();
            }
          }
        }
        plVar12 = (long *)puVar9[0x1a];
        if (plVar12 != (long *)0x0) {
          plVar15 = plVar12 + 1;
          do {
            lVar11 = *plVar15;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar4) {
              *plVar15 = lVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        plVar12 = (long *)puVar9[0x18];
        if (plVar12 != (long *)0x0) {
          puVar1 = (ulong *)(plVar12 + 1);
          do {
            uVar13 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            do {
              uVar13 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plVar12 + 8))(plVar12);
            }
          }
        }
        plVar12 = (long *)puVar9[0x17];
        if (plVar12 != (long *)0x0) {
          puVar1 = (ulong *)(plVar12 + 1);
          do {
            uVar13 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plVar12 + 8))();
            }
          }
        }
        func_0x00010a04ef7c(puVar9 + 0x12);
        func_0x00010a04ef7c(puVar9 + 0xd);
        if (*(char *)((long)puVar9 + 0x67) < '\0') {
          __ZdlPv(puVar9[10]);
        }
        func_0x000109d1a1d0(puVar9 + 2);
        __ZdlPv(puVar9);
      }
LAB_10a034ac4:
      plVar12 = plStack_140;
      if (plStack_140 != (long *)0x0) {
        plVar15 = plStack_140 + 1;
        do {
          lVar11 = *plVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *plVar15 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_140 + 0x10))(plStack_140);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      plVar12 = plStack_150;
      if (plStack_150 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_150 + 1);
        do {
          uVar13 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar13 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          (**(code **)(*plStack_150 + 0x10))(plStack_150);
          do {
            uVar13 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar12 + 8))(plVar12);
          }
        }
      }
      if (plStack_158 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_158 + 1);
        do {
          uVar13 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar13 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plStack_158 + 8))();
          }
        }
      }
      func_0x00010a04efb4(uStack_170);
      lVar11 = alStack_180[0];
      alStack_180[0] = 0;
      if (lVar11 != 0) {
        __ZdlPv();
      }
      func_0x00010a04efb4(uStack_198);
      lVar11 = alStack_1a8[0];
      alStack_1a8[0] = 0;
      if (lVar11 != 0) {
        __ZdlPv();
      }
      if (lStack_1b0 < 0) {
        __ZdlPv(puStack_1c0);
      }
      if ((long)plStack_1d0 < 0) {
        __ZdlPv(plStack_1e0);
      }
      (*(code *)*appuStack_218[0])(appuStack_218);
      plVar12 = plStack_228;
      if (plStack_228 != (long *)0x0) {
        plVar15 = plStack_228 + 1;
        do {
          lVar11 = *plVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *plVar15 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_228 + 0x10))(plStack_228);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      func_0x000109a1dbe4(auStack_448);
      FUN_10a04f520(&uStack_380);
      plVar12 = &lStack_3a8;
      FUN_10a04f520(plVar12);
      if (lStack_3b0 < 0) {
        plVar12 = plStack_3c0;
        __ZdlPv(plStack_3c0);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
        return plVar12;
      }
      ___stack_chk_fail();
    }
    else {
      lStack_350 = 0;
      (**(code **)(*plVar16 + 0x28))(plVar16,0,&lStack_350);
      if (lStack_350 == 0) {
        func_0x000109a19274(&pcStack_1c8,0,&uStack_328);
        plStack_138 = plStack_298;
        plStack_140 = plStack_2a0;
        plStack_2a0 = (long *)0x0;
        plStack_298 = (long *)0x0;
        pcStack_130 = pcStack_290;
        (*(code *)apuStack_288[0][2])(apuStack_128,apuStack_288);
        plStack_e0 = plStack_240;
        plStack_e8 = plStack_248;
        plStack_f0 = plStack_250;
        plStack_248 = (long *)0x0;
        plStack_240 = (long *)0x0;
        plStack_250 = (long *)0x0;
        plStack_d8 = plStack_238;
        plStack_238 = (long *)0x0;
        puVar8 = (undefined8 *)0x1c8;
        __Znwm();
        puVar8[2] = 0;
        puVar8[1] = 0x200000006;
        *(undefined2 *)(puVar8 + 3) = 4;
        puVar8[5] = 0;
        puVar8[4] = 0;
        puVar8[7] = 0;
        puVar8[6] = 0;
        puVar8[9] = 0;
        puVar8[8] = 0;
        puVar8[0xb] = 0;
        puVar8[10] = 0;
        puVar8[0xd] = 0;
        puVar8[0xc] = 0;
        puVar8[0xf] = 0;
        puVar8[0xe] = 0;
        puVar8[0x10] = 0;
        puVar8[0x11] = puVar8 + 3;
        puVar8[0x12] = 0;
        *(undefined1 *)(puVar8 + 0x13) = 0;
        *(undefined1 *)(puVar8 + 0x15) = 0;
        puVar9 = puVar8 + 0x16;
        *puVar8 = &PTR_FUN_110b9d628;
        func_0x00010a04c360(puVar9,&pcStack_1c8);
        puVar8[0x37] = 0;
        puVar8[0x38] = plVar16;
        if (plStack_340 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_340 + 1);
          do {
            uVar13 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plStack_340 + 8))();
            }
          }
        }
        plStack_340 = puVar8;
        if (puStack_338 != (undefined8 *)0x0) {
          func_0x0001092b4274(&puStack_338);
        }
        plVar16 = plStack_d8;
        puStack_348 = puVar9;
        puStack_338 = puVar8;
        if (plStack_d8 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_d8 + 1);
          do {
            uVar13 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
            do {
              uVar13 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plVar16 + 8))(plVar16);
            }
          }
        }
        if ((long)plStack_e0 < 0) {
          __ZdlPv(plStack_f0);
        }
        (*(code *)*apuStack_128[0])(apuStack_128);
        plVar16 = plStack_138;
        if (plStack_138 != (long *)0x0) {
          plVar17 = plStack_138 + 1;
          do {
            lVar14 = *plVar17;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar4) {
              *plVar17 = lVar14 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_138 + 0x10))(plStack_138);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
          }
        }
        func_0x000109a1dbe4(&pcStack_1c8);
        pcStack_330 = (code *)0x10a04bc04;
        __ZNSt13exception_ptrD1Ev(&lStack_350);
        goto LAB_10a03459c;
      }
    }
    func_0x0001092af97c(&lStack_350);
    goto LAB_10a034d68;
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&uStack_328,&UNK_10f632b83,puVar6 + 0x30);
  FUN_10a012db0(&pcStack_1c8,&uStack_328,&UNK_10f632b8e);
  FUN_10a0029c0(&pcStack_1c8);
LAB_10a034d68:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a034d6c);
  (*pcVar5)();
}



/* Entry: 10a033f60; end: 10a03503f;  */

/* WARNING: Removing unreachable block (ram,0x00010a0348a0) */
/* WARNING: Removing unreachable block (ram,0x00010a034be8) */
/* WARNING: Removing unreachable block (ram,0x00010a034bec) */
/* WARNING: Removing unreachable block (ram,0x00010a034bf4) */
/* WARNING: Removing unreachable block (ram,0x00010a034bfc) */
/* WARNING: Removing unreachable block (ram,0x00010a034c00) */

void FUN_10a033f60(long *param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined1 auStack_3f8 [136];
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined4 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined4 uStack_310;
  long lStack_300;
  undefined8 *puStack_2f8;
  long *plStack_2f0;
  undefined8 *puStack_2e8;
  code *pcStack_2e0;
  undefined8 uStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_250;
  long *plStack_248;
  code *pcStack_240;
  undefined8 *apuStack_238 [7];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  code *pcStack_1d0;
  undefined **appuStack_1c8 [7];
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  code *pcStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  long lStack_160;
  long alStack_158 [2];
  undefined8 uStack_148;
  long alStack_130 [2];
  undefined8 uStack_120;
  long *plStack_108;
  long *plStack_100;
  undefined8 *puStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  code *pcStack_e0;
  undefined8 *apuStack_d8 [7];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)*(char *)(param_2 + 0x47);
  if (lVar9 < 0) {
    lVar9 = *(long *)(param_2 + 0x38);
  }
  if (lVar9 == 0) {
    FUN_10a00946c(&UNK_10f632b59);
  }
  else if (*(long *)(param_2 + 0x60) != 0) {
    if (*(long *)(param_2 + 0x88) == 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&uStack_2d8,&UNK_10f632b83,param_2 + 0x30);
      FUN_10a012db0(&pcStack_178,&uStack_2d8,&UNK_10f632ba2);
      FUN_10a0029c0(&pcStack_178);
      goto LAB_10a034d68;
    }
    uStack_340 = 0;
    uStack_358 = 0;
    lStack_360 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_338 = 0x3f800000;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_310 = 0x3f800000;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (&uStack_370,param_2 + 0x30);
    for (plVar13 = *(long **)(param_2 + 0x58); plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
      FUN_10a0717cc(&uStack_358,plVar13 + 2,plVar13 + 2);
    }
    for (plVar13 = *(long **)(param_2 + 0x80); plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
      FUN_10a0717cc(&uStack_330,plVar13 + 2,plVar13 + 2);
    }
    puVar12 = &uStack_370;
    func_0x000109a1fa88(auStack_3f8);
    FUN_10a0f367c();
    plStack_1d8 = (long *)puVar12[1];
    uStack_1e0 = *puVar12;
    if (puVar12[1] != 0) {
      plVar13 = (long *)(puVar12[1] + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = *plVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pcStack_1d0 = FUN_10a071c3c;
    appuStack_1c8[0] = &PTR_DAT_110b9e298;
    func_0x00010ad031c0();
    if (*(char *)((long)puVar12 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_190,*puVar12,puVar12[1]);
    }
    else {
      uStack_188 = puVar12[1];
      uStack_190 = *puVar12;
      lStack_180 = puVar12[2];
    }
    plVar13 = *(long **)(*(long *)(param_2 + 0x28) + 0x870);
    FUN_10a462144();
    plVar14 = (long *)plVar13[7];
    if (plVar14 != (long *)0x0) {
      plVar15 = plVar14 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = *plVar15 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar15 = plVar13;
    FUN_10a0f3780();
    puVar12 = (undefined8 *)*plVar15;
    lVar9 = plVar15[1];
    if (lVar9 != 0) {
      plVar15 = (long *)(lVar9 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = *plVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    func_0x000109a19274(&uStack_2d8,0,auStack_3f8);
    plStack_248 = plStack_1d8;
    uStack_250 = uStack_1e0;
    plStack_1d8 = (long *)0x0;
    uStack_1e0 = 0;
    pcStack_240 = pcStack_1d0;
    (*(code *)appuStack_1c8[0][2])(apuStack_238,appuStack_1c8);
    lStack_1f0 = lStack_180;
    uStack_1f8 = uStack_188;
    uStack_200 = uStack_190;
    uStack_188 = 0;
    lStack_180 = 0;
    uStack_190 = 0;
    if (plVar14 != (long *)0x0) {
      plVar15 = plVar14 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = *plVar15 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar15 = (long *)puVar12[2];
    plStack_2f0 = (long *)0x0;
    puStack_2e8 = (undefined8 *)0x0;
    plStack_1e8 = plVar14;
    if (plVar15 == (long *)0x0) {
      func_0x000109a19274(&pcStack_178,0,&uStack_2d8);
      plStack_e8 = plStack_248;
      plStack_f0 = (long *)uStack_250;
      uStack_250 = 0;
      plStack_248 = (long *)0x0;
      pcStack_e0 = pcStack_240;
      (*(code *)apuStack_238[0][2])(apuStack_d8,apuStack_238);
      lStack_90 = lStack_1f0;
      uStack_98 = uStack_1f8;
      uStack_a0 = uStack_200;
      uStack_1f8 = 0;
      lStack_1f0 = 0;
      uStack_200 = 0;
      plStack_88 = plStack_1e8;
      plStack_1e8 = (long *)0x0;
      puVar7 = (undefined8 *)0x1c0;
      __Znwm();
      puVar7[2] = 0;
      puVar7[1] = 0x200000006;
      *(undefined2 *)(puVar7 + 3) = 4;
      puVar7[5] = 0;
      puVar7[4] = 0;
      puVar7[7] = 0;
      puVar7[6] = 0;
      puVar7[9] = 0;
      puVar7[8] = 0;
      puVar7[0xb] = 0;
      puVar7[10] = 0;
      puVar7[0xd] = 0;
      puVar7[0xc] = 0;
      puVar7[0xf] = 0;
      puVar7[0xe] = 0;
      puVar7[0x10] = 0;
      puVar7[0x11] = puVar7 + 3;
      puVar7[0x12] = 0;
      *(undefined1 *)(puVar7 + 0x13) = 0;
      *(undefined1 *)(puVar7 + 0x15) = 0;
      puVar8 = puVar7 + 0x16;
      *puVar7 = &PTR_FUN_110b9d698;
      func_0x00010a04c360(puVar8,&pcStack_178);
      puVar7[0x37] = 0;
      if (plStack_2f0 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_2f0 + 1);
        do {
          uVar10 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar10 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar10 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plStack_2f0 + 8))();
          }
        }
      }
      plStack_2f0 = puVar7;
      if (puStack_2e8 != (undefined8 *)0x0) {
        func_0x0001092b4274(&puStack_2e8);
      }
      plVar15 = plStack_88;
      puStack_2f8 = puVar8;
      puStack_2e8 = puVar7;
      if (plStack_88 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_88 + 1);
        do {
          uVar10 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar10 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          do {
            uVar10 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar10 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar15 + 8))(plVar15);
          }
        }
      }
      if (lStack_90 < 0) {
        __ZdlPv(uStack_a0);
      }
      (*(code *)*apuStack_d8[0])(apuStack_d8);
      plVar15 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        plVar2 = plStack_e8 + 1;
        do {
          lVar11 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        }
      }
      func_0x000109a1dbe4(&pcStack_178);
      pcStack_2e0 = FUN_10a04bc34;
LAB_10a03459c:
      puVar8 = puStack_2f8;
      if (puStack_2f8[0x21] != 0) {
        func_0x0001092b4274(puStack_2f8 + 0x21);
      }
      puVar8[0x21] = puStack_2e8;
      puStack_2e8 = (undefined8 *)0x0;
      pcStack_178 = pcStack_2e0;
      puStack_170 = puStack_2f8;
      puStack_168 = puVar12;
      (**(code **)*puVar12)(puVar12,&pcStack_178);
      plVar15 = plStack_2f0;
      plStack_2f0 = (long *)0x0;
      if ((puStack_2e8 != (undefined8 *)0x0) &&
         (func_0x0001092b4274(&puStack_2e8), plStack_2f0 != (long *)0x0)) {
        puVar1 = (ulong *)(plStack_2f0 + 1);
        do {
          uVar10 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar10 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar10 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plStack_2f0 + 8))();
          }
        }
      }
      plVar2 = plStack_1e8;
      if (plStack_1e8 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_1e8 + 1);
        do {
          uVar10 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar10 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
          do {
            uVar10 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar10 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar2 + 8))(plVar2);
          }
        }
      }
      if (lStack_1f0 < 0) {
        __ZdlPv(uStack_200);
      }
      (*(code *)*apuStack_238[0])(apuStack_238);
      plVar2 = plStack_248;
      if (plStack_248 != (long *)0x0) {
        plVar3 = plStack_248 + 1;
        do {
          lVar11 = *plVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *plVar3 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_248 + 0x10))(plStack_248);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      func_0x000109a1dbe4(&uStack_2d8);
      pcStack_178 = *(code **)(param_2 + 0x28);
      if (*(char *)(param_2 + 0x47) < '\0') {
        func_0x000107c3192c(&puStack_170,*(undefined8 *)(param_2 + 0x30),
                            *(undefined8 *)(param_2 + 0x38));
      }
      else {
        puStack_168 = *(undefined8 **)(param_2 + 0x38);
        puStack_170 = *(undefined8 **)(param_2 + 0x30);
        lStack_160 = *(long *)(param_2 + 0x40);
      }
      FUN_10a04f02c(alStack_158,param_2 + 0x48);
      FUN_10a04f02c(alStack_130,param_2 + 0x70);
      plStack_108 = plVar15;
      puVar8 = (undefined8 *)0xf8;
      plStack_100 = plVar14;
      puStack_f8 = puVar12;
      plStack_f0 = (long *)lVar9;
      __Znwm();
      *puVar8 = FUN_10a08b368;
      puVar8[1] = FUN_10a08b6d4;
      FUN_10a04d454(puVar8 + 2);
      lVar9 = puVar8[7];
      if (lVar9 != 0) {
        plVar14 = (long *)(lVar9 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = *plVar14 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *param_1 = lVar9;
      puVar8[9] = pcStack_178;
      puVar8[0xb] = puStack_168;
      puVar8[10] = puStack_170;
      puVar8[0xc] = lStack_160;
      lStack_160 = 0;
      puStack_168 = (undefined8 *)0x0;
      puStack_170 = (undefined8 *)0x0;
      FUN_10a04d600(puVar8 + 0xd,alStack_158);
      FUN_10a04d600(puVar8 + 0x12,alStack_130);
      puVar8[0x18] = plStack_100;
      puVar8[0x17] = plStack_108;
      plStack_100 = (long *)0x0;
      plStack_108 = (long *)0x0;
      puVar8[0x1a] = plStack_f0;
      puVar8[0x19] = puStack_f8;
      plStack_f0 = (long *)0x0;
      puStack_f8 = (undefined8 *)0x0;
      puVar8[0x1b] = plVar13;
      *(undefined1 *)(puVar8 + 0x1c) = 0;
      *(undefined1 *)(puVar8 + 0x1e) = 0;
      puStack_2f8 = (undefined8 *)0x0;
      FUN_109d18960(puVar8 + 2,plVar13,&puStack_2f8);
      if (puStack_2f8 != (undefined8 *)0x0) {
        func_0x0001092af97c(&puStack_2f8);
        goto LAB_10a034d68;
      }
      if ((*(byte *)(puVar8 + 0x1c) & 1) == 0) {
        puStack_2c8 = (undefined8 *)puVar8[0x1b];
        uStack_2d8 = 0;
        puStack_2d0 = puVar8;
        (**(code **)*puStack_2c8)(puStack_2c8,&uStack_2d8);
        __ZNSt13exception_ptrD1Ev(&puStack_2f8);
      }
      else {
        __ZNSt13exception_ptrD1Ev(&puStack_2f8);
        FUN_10a04c73c(puVar8 + 0x1d,puVar8 + 9);
        puVar8[0x1b] = puVar8[0x1d];
        plVar13 = (long *)(puVar8[0x1d] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = *plVar13 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((uint)*(undefined8 *)(puVar8[0x1b] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar8 + 0x1e) = 1;
          lVar9 = puVar8[0x1b];
          plVar13 = (long *)(lVar9 + 0x10);
          puVar12 = (undefined8 *)puVar8[3];
          do {
            lVar11 = *plVar13;
            if (lVar11 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar5) {
                *plVar13 = 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                uStack_2d8 = 0;
                puStack_2d0 = puVar8;
                puStack_2c8 = puVar12;
                func_0x000109d1b588(lVar9 + 0x18,&uStack_2d8);
                *(undefined8 *)(lVar9 + 0x10) = 0;
                goto LAB_10a034ac4;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar11 >> 1 & 1) == 0);
        }
        lVar9 = puVar8[0x1b];
        if (((uint)*(undefined8 *)(puVar8[0x1b] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(lVar9 + 0x90);
          goto LAB_10a034d68;
        }
        if ((*(byte *)(lVar9 + 0xa8) & 1) == 0) goto LAB_10a034d68;
        FUN_10a04c67c(puVar8 + 2,lVar9 + 0x98);
        plVar13 = (long *)puVar8[0x1b];
        if (plVar13 != (long *)0x0) {
          puVar1 = (ulong *)(plVar13 + 1);
          do {
            uVar10 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar10 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar10 & 0x1fffffffc) == 4) {
            do {
              uVar10 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar10 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar10 - 1 == 0) {
              (**(code **)(*plVar13 + 8))();
            }
          }
        }
        plVar13 = (long *)puVar8[0x1d];
        if (plVar13 != (long *)0x0) {
          puVar1 = (ulong *)(plVar13 + 1);
          do {
            uVar10 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar10 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar10 & 0x1fffffffc) == 4) {
            do {
              uVar10 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar10 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar10 - 1 == 0) {
              (**(code **)(*plVar13 + 8))();
            }
          }
        }
        plVar13 = (long *)puVar8[0x1a];
        if (plVar13 != (long *)0x0) {
          plVar14 = plVar13 + 1;
          do {
            lVar9 = *plVar14;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar5) {
              *plVar14 = lVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        plVar13 = (long *)puVar8[0x18];
        if (plVar13 != (long *)0x0) {
          puVar1 = (ulong *)(plVar13 + 1);
          do {
            uVar10 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar10 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar10 & 0x1fffffffc) == 4) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            do {
              uVar10 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar10 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar10 - 1 == 0) {
              (**(code **)(*plVar13 + 8))(plVar13);
            }
          }
        }
        plVar13 = (long *)puVar8[0x17];
        if (plVar13 != (long *)0x0) {
          puVar1 = (ulong *)(plVar13 + 1);
          do {
            uVar10 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar10 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar10 & 0x1fffffffc) == 4) {
            do {
              uVar10 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar10 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar10 - 1 == 0) {
              (**(code **)(*plVar13 + 8))();
            }
          }
        }
        func_0x00010a04ef7c(puVar8 + 0x12);
        func_0x00010a04ef7c(puVar8 + 0xd);
        if (*(char *)((long)puVar8 + 0x67) < '\0') {
          __ZdlPv(puVar8[10]);
        }
        func_0x000109d1a1d0(puVar8 + 2);
        __ZdlPv(puVar8);
      }
LAB_10a034ac4:
      plVar13 = plStack_f0;
      if (plStack_f0 != (long *)0x0) {
        plVar14 = plStack_f0 + 1;
        do {
          lVar9 = *plVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      plVar13 = plStack_100;
      if (plStack_100 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_100 + 1);
        do {
          uVar10 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar10 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          (**(code **)(*plStack_100 + 0x10))(plStack_100);
          do {
            uVar10 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar10 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar13 + 8))(plVar13);
          }
        }
      }
      if (plStack_108 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_108 + 1);
        do {
          uVar10 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar10 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar10 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plStack_108 + 8))();
          }
        }
      }
      func_0x00010a04efb4(uStack_120);
      lVar9 = alStack_130[0];
      alStack_130[0] = 0;
      if (lVar9 != 0) {
        __ZdlPv();
      }
      func_0x00010a04efb4(uStack_148);
      lVar9 = alStack_158[0];
      alStack_158[0] = 0;
      if (lVar9 != 0) {
        __ZdlPv();
      }
      if (lStack_160 < 0) {
        __ZdlPv(puStack_170);
      }
      if (lStack_180 < 0) {
        __ZdlPv(uStack_190);
      }
      (*(code *)*appuStack_1c8[0])(appuStack_1c8);
      plVar13 = plStack_1d8;
      if (plStack_1d8 != (long *)0x0) {
        plVar14 = plStack_1d8 + 1;
        do {
          lVar9 = *plVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      func_0x000109a1dbe4(auStack_3f8);
      FUN_10a04f520(&uStack_330);
      FUN_10a04f520(&uStack_358);
      if (lStack_360 < 0) {
        __ZdlPv(uStack_370);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
        return;
      }
      ___stack_chk_fail();
    }
    else {
      lStack_300 = 0;
      (**(code **)(*plVar15 + 0x28))(plVar15,0,&lStack_300);
      if (lStack_300 == 0) {
        func_0x000109a19274(&pcStack_178,0,&uStack_2d8);
        plStack_e8 = plStack_248;
        plStack_f0 = (long *)uStack_250;
        uStack_250 = 0;
        plStack_248 = (long *)0x0;
        pcStack_e0 = pcStack_240;
        (*(code *)apuStack_238[0][2])(apuStack_d8,apuStack_238);
        lStack_90 = lStack_1f0;
        uStack_98 = uStack_1f8;
        uStack_a0 = uStack_200;
        uStack_1f8 = 0;
        lStack_1f0 = 0;
        uStack_200 = 0;
        plStack_88 = plStack_1e8;
        plStack_1e8 = (long *)0x0;
        puVar7 = (undefined8 *)0x1c8;
        __Znwm();
        puVar7[2] = 0;
        puVar7[1] = 0x200000006;
        *(undefined2 *)(puVar7 + 3) = 4;
        puVar7[5] = 0;
        puVar7[4] = 0;
        puVar7[7] = 0;
        puVar7[6] = 0;
        puVar7[9] = 0;
        puVar7[8] = 0;
        puVar7[0xb] = 0;
        puVar7[10] = 0;
        puVar7[0xd] = 0;
        puVar7[0xc] = 0;
        puVar7[0xf] = 0;
        puVar7[0xe] = 0;
        puVar7[0x10] = 0;
        puVar7[0x11] = puVar7 + 3;
        puVar7[0x12] = 0;
        *(undefined1 *)(puVar7 + 0x13) = 0;
        *(undefined1 *)(puVar7 + 0x15) = 0;
        puVar8 = puVar7 + 0x16;
        *puVar7 = &PTR_FUN_110b9d628;
        func_0x00010a04c360(puVar8,&pcStack_178);
        puVar7[0x37] = 0;
        puVar7[0x38] = plVar15;
        if (plStack_2f0 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_2f0 + 1);
          do {
            uVar10 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar10 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar10 & 0x1fffffffc) == 4) {
            do {
              uVar10 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar10 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar10 - 1 == 0) {
              (**(code **)(*plStack_2f0 + 8))();
            }
          }
        }
        plStack_2f0 = puVar7;
        if (puStack_2e8 != (undefined8 *)0x0) {
          func_0x0001092b4274(&puStack_2e8);
        }
        plVar15 = plStack_88;
        puStack_2f8 = puVar8;
        puStack_2e8 = puVar7;
        if (plStack_88 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_88 + 1);
          do {
            uVar10 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar10 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar10 & 0x1fffffffc) == 4) {
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            do {
              uVar10 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar10 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar10 - 1 == 0) {
              (**(code **)(*plVar15 + 8))(plVar15);
            }
          }
        }
        if (lStack_90 < 0) {
          __ZdlPv(uStack_a0);
        }
        (*(code *)*apuStack_d8[0])(apuStack_d8);
        plVar15 = plStack_e8;
        if (plStack_e8 != (long *)0x0) {
          plVar2 = plStack_e8 + 1;
          do {
            lVar11 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
        func_0x000109a1dbe4(&pcStack_178);
        pcStack_2e0 = (code *)0x10a04bc04;
        __ZNSt13exception_ptrD1Ev(&lStack_300);
        goto LAB_10a03459c;
      }
    }
    func_0x0001092af97c(&lStack_300);
    goto LAB_10a034d68;
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&uStack_2d8,&UNK_10f632b83,param_2 + 0x30);
  FUN_10a012db0(&pcStack_178,&uStack_2d8,&UNK_10f632b8e);
  FUN_10a0029c0(&pcStack_178);
LAB_10a034d68:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a034d6c);
  (*pcVar6)();
}



/* Entry: 10a035040; end: 10a0351df;  */

long FUN_10a035040(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0xf0);
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
  if (*(char *)(param_1 + 0xef) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xd8));
  }
  (*(code *)**(undefined8 **)(param_1 + 0xa0))();
  FUN_10a071d0c(param_1 + 0x88);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x70);
  func_0x000107c30258(param_1 + 0x78);
  func_0x000109a1e8b4(param_1 + 0x58);
  if (0 < *(int *)(param_1 + 0x44)) {
    if (*(long *)(*(long *)(param_1 + 0x48) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x2c)) {
    if (*(long *)(*(long *)(param_1 + 0x30) + -8) == 0) {
      __ZdlPv();
    }
  }
  func_0x000109a1e8e8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10a0351e0; end: 10a03521f;  */

undefined8 * FUN_10a0351e0(undefined8 *param_1)

{
  FUN_10a04f520(param_1 + 8);
  FUN_10a04f520(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a035220; end: 10a035277;  */

undefined1  [16] FUN_10a035220(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xb;
  auVar1._0_8_ = &UNK_10f63426b;
  return auVar1;
}



/* Entry: 10a035278; end: 10a035377;  */

void FUN_10a035278(undefined8 param_1)

{
  undefined8 uVar1;
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
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10a003e74(param_1,&UNK_10f632981,0xf);
  FUN_10a003e74(param_1,&UNK_10f632991,8);
  puStack_98 = (undefined *)0x0;
  puStack_90 = (undefined1 *)0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f630f1d;
  uStack_78 = 0;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_60 = 0x16f00000000;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a035378(param_1,&puStack_98);
  puStack_a0 = &UNK_10f632bbf;
  puStack_98 = &UNK_10f632bb7;
  uStack_88 = 1;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f630f1d;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_90 = (undefined1 *)&puStack_a0;
  FUN_10a071e60();
  FUN_10a072074(uVar1);
  func_0x00010a004064(param_1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a035378; end: 10a03544f;  */

/* WARNING: Removing unreachable block (ram,0x00010a035410) */

undefined1  [16] FUN_10a035378(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f63426b,0xb);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a071d64(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a035450; end: 10a035777;  */

undefined1  [16] FUN_10a035450(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *unaff_x22;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_1b0 [8];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined1 auStack_180 [32];
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined1 auStack_130 [32];
  long lStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [32];
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  puVar5 = auStack_1b0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a91da7c(param_2);
  FUN_109d0f438(auStack_1b0);
  plVar4 = *(long **)(param_1 + 0x20);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_108 = plVar4;
    if (plVar4 != (long *)0x0) {
      lVar6 = *(long *)(param_1 + 0x18);
      lStack_110 = lVar6;
      if (lVar6 != 0) {
        ppuStack_160 = &PTR_DAT_1108a5c28;
        uStack_150 = uStack_1a0;
        uStack_158 = uStack_1a8;
        uStack_148 = uStack_198;
        lStack_138 = lStack_188;
        uStack_140 = uStack_190;
        if (lStack_188 != 0) {
          plVar1 = (long *)(lStack_188 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_10a072330(auStack_130,auStack_180);
        if (*(char *)(param_1 + 0x3f) < '\0') {
          func_0x000107c3192c(&uStack_100,*(undefined8 *)(param_1 + 0x28),
                              *(undefined8 *)(param_1 + 0x30));
        }
        else {
          uStack_f8 = *(undefined8 *)(param_1 + 0x30);
          uStack_100 = *(undefined8 *)(param_1 + 0x28);
          lStack_f0 = *(long *)(param_1 + 0x38);
        }
        ppuStack_e8 = &PTR_DAT_1108a5c28;
        uStack_d8 = uStack_150;
        uStack_e0 = uStack_158;
        uStack_d0 = uStack_148;
        lStack_c0 = lStack_138;
        uStack_c8 = uStack_140;
        if (lStack_138 != 0) {
          plVar1 = (long *)(lStack_138 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_10a072330(auStack_b8,auStack_130);
        pcStack_98 = FUN_10a072168;
        ppuStack_90 = &PTR_FUN_110b9e2b8;
        unaff_x22 = (undefined8 *)0x68;
        __Znwm();
        if (lStack_f0 < 0) {
          func_0x000107c3192c(unaff_x22,uStack_100,uStack_f8);
        }
        else {
          unaff_x22[1] = uStack_f8;
          *unaff_x22 = uStack_100;
          unaff_x22[2] = lStack_f0;
        }
        unaff_x22[8] = lStack_c0;
        unaff_x22[7] = uStack_c8;
        unaff_x22[3] = &PTR_DAT_1108a5c28;
        unaff_x22[5] = uStack_d8;
        unaff_x22[4] = uStack_e0;
        unaff_x22[6] = uStack_d0;
        if (lStack_c0 != 0) {
          plVar1 = (long *)(lStack_c0 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_10a072330(unaff_x22 + 9,auStack_b8);
        param_2 = param_1 + 0x28;
        puStack_88 = unaff_x22;
        FUN_10a10e118(lVar6,param_2,&pcStack_98);
        (*(code *)*ppuStack_90)(&ppuStack_90);
        func_0x000105675c90(&ppuStack_e8);
        if (lStack_f0 < 0) {
          __ZdlPv(uStack_100);
        }
        func_0x000105675c90(&ppuStack_160);
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  func_0x000105675c90(auStack_1b0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = puVar5;
    return auVar7;
  }
  ___stack_chk_fail();
  __ZdlPv(unaff_x22);
  func_0x00010a072130(&uStack_100);
  func_0x000105675c90(&ppuStack_160);
  FUN_10a04ef24(&lStack_110);
  func_0x000105675c90(auStack_1b0);
  __Unwind_Resume(puVar5);
  auVar8._8_8_ = 0xc;
  auVar8._0_8_ = &UNK_10f634277;
  return auVar8;
}



/* Entry: 10a035778; end: 10a0357c7;  */

undefined1  [16] FUN_10a035778(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xc;
  auVar1._0_8_ = &UNK_10f634277;
  return auVar1;
}



/* Entry: 10a0357c8; end: 10a0358af;  */

void FUN_10a0357c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10a003e74(param_1,&UNK_10f632981,0xf);
  FUN_10a003e74(param_1,&UNK_10f632991,8);
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f630f1d;
  uStack_78 = 0;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  puStack_60 = (undefined *)0x16f00000000;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a0358b0(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f632bc6;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &UNK_10f630f1d;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a072544();
  FUN_10a07353c(uVar1);
  func_0x00010a004064(param_1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a0358b0; end: 10a035987;  */

/* WARNING: Removing unreachable block (ram,0x00010a035948) */

undefined1  [16] FUN_10a0358b0(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f634277,0xc);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a072448(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a035988; end: 10a035f5f;  */

undefined1  [16] FUN_10a035988(undefined **param_1,code **param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined **ppuVar5;
  code **ppcVar6;
  undefined1 uVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  ulong uVar11;
  long *plVar12;
  undefined *puVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined8 *unaff_x21;
  long *plVar19;
  code **unaff_x22;
  ulong uVar20;
  ulong unaff_x28;
  long lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  code *pcStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  ulong uStack_108;
  long *plStack_100;
  long lStack_f8;
  float fStack_f0;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  code *pcStack_c0;
  undefined **ppuStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined **ppuStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2[1] == (code *)&DAT_110b20ce8) {
    ppuVar5 = (undefined **)0x0;
    if (*(long *)(param_1[5] + 0x870) != 0) {
      FUN_10a91d92c(&pcStack_120,*(long *)(param_1[5] + 0x870),*param_2);
      puVar18 = param_1[3];
      uStack_108 = 0;
      puStack_110 = (undefined *)0x0;
      lStack_f8 = 0;
      plStack_100 = (long *)0x0;
      fStack_f0 = *(float *)(puVar18 + 0x38);
      param_2 = *(code ***)(puVar18 + 0x20);
      FUN_10a0727bc(&puStack_110,param_2);
      plVar19 = *(long **)(puVar18 + 0x28);
      if (plVar19 != (long *)0x0) {
        unaff_x22 = (code **)0x9ddfea08eb382d69;
        do {
          uVar20 = uStack_108;
          uVar8 = plVar19[2];
          uVar14 = ((ulong)(uint)((int)uVar8 << 3) + 8 ^ uVar8 >> 0x20) * -0x622015f714c7d297;
          uVar14 = (uVar8 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
          uVar14 = (uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297;
          if (uStack_108 != 0) {
            uVar11 = uStack_108 - 1;
            if ((uStack_108 & uVar11) == 0) {
              unaff_x28 = uVar14 & uVar11;
            }
            else {
              unaff_x28 = uVar14;
              if (uStack_108 <= uVar14) {
                uVar16 = 0;
                if (uStack_108 != 0) {
                  uVar16 = uVar14 / uStack_108;
                }
                unaff_x28 = uVar14 - uVar16 * uStack_108;
              }
            }
            plVar15 = *(long **)(puStack_110 + unaff_x28 * 8);
            if (plVar15 != (long *)0x0) {
              do {
                while( true ) {
                  plVar15 = (long *)*plVar15;
                  if (plVar15 == (long *)0x0) goto LAB_10a035ae8;
                  uVar16 = plVar15[1];
                  if (uVar16 != uVar14) break;
                  if (plVar15[2] == uVar8) goto LAB_10a035c44;
                }
                if ((uStack_108 & uVar11) == 0) {
                  uVar16 = uVar16 & uVar11;
                }
                else if (uStack_108 <= uVar16) {
                  uVar4 = 0;
                  if (uStack_108 != 0) {
                    uVar4 = uVar16 / uStack_108;
                  }
                  uVar16 = uVar16 - uVar4 * uStack_108;
                }
              } while (uVar16 == unaff_x28);
            }
          }
LAB_10a035ae8:
          plVar15 = (long *)0x68;
          __Znwm();
          *plVar15 = 0;
          plVar15[1] = uVar14;
          lVar9 = plVar19[3];
          lVar21 = plVar19[2];
          plVar15[3] = plVar19[3];
          plVar15[2] = lVar21;
          if (lVar9 != 0) {
            plVar12 = (long *)(lVar9 + 8);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar2) {
                *plVar12 = *plVar12 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          pcStack_c0 = (code *)(plVar15 + 4);
          *(undefined1 *)(plVar15 + 0xc) = 3;
          if ((char)plVar19[0xc] == '\0') {
            uVar7 = 0;
          }
          else {
            param_2 = (code **)(plVar19 + 4);
            FUN_10a005398(&pcStack_c0,param_2);
            uVar7 = (undefined1)plVar19[0xc];
          }
          *(undefined1 *)(plVar15 + 0xc) = uVar7;
          if ((uVar20 == 0) || (fStack_f0 * (float)uVar20 < (float)(lStack_f8 + 1))) {
            uVar8 = 1;
            if (2 < uVar20) {
              uVar8 = (ulong)((uVar20 & uVar20 - 1) != 0);
            }
            param_2 = (code **)(uVar8 | uVar20 << 1);
            ppcVar6 = (code **)(long)((float)(lStack_f8 + 1) / fStack_f0);
            if (param_2 <= ppcVar6) {
              param_2 = ppcVar6;
            }
            FUN_10a0727bc(&puStack_110,param_2);
            uVar20 = uStack_108;
            if ((uStack_108 & uStack_108 - 1) == 0) {
              unaff_x28 = uStack_108 - 1 & uVar14;
            }
            else {
              unaff_x28 = uVar14;
              if (uStack_108 <= uVar14) {
                uVar8 = 0;
                if (uStack_108 != 0) {
                  uVar8 = uVar14 / uStack_108;
                }
                unaff_x28 = uVar14 - uVar8 * uStack_108;
              }
            }
          }
          plVar12 = *(long **)(puStack_110 + unaff_x28 * 8);
          if (plVar12 == (long *)0x0) {
            *plVar15 = (long)plStack_100;
            *(long ***)(puStack_110 + unaff_x28 * 8) = &plStack_100;
            plStack_100 = plVar15;
            if (*plVar15 != 0) {
              uVar8 = *(ulong *)(*plVar15 + 8);
              if ((uVar20 & uVar20 - 1) == 0) {
                uVar8 = uVar8 & uVar20 - 1;
              }
              else if (uVar20 <= uVar8) {
                uVar14 = 0;
                if (uVar20 != 0) {
                  uVar14 = uVar8 / uVar20;
                }
                uVar8 = uVar8 - uVar14 * uVar20;
              }
              *(long **)(puStack_110 + uVar8 * 8) = plVar15;
            }
          }
          else {
            *plVar15 = *plVar12;
            *plVar12 = (long)plVar15;
          }
          lStack_f8 = lStack_f8 + 1;
LAB_10a035c44:
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      unaff_x21 = (undefined8 *)0x0;
      if (plStack_100 != (long *)0x0) {
        unaff_x21 = &uStack_e0;
        unaff_x22 = &pcStack_c0;
        plVar19 = plStack_100;
        do {
          ppcVar6 = (code **)plVar19[2];
          puVar13 = puVar18 + 0x18;
          FUN_10a0731cc();
          param_2 = ppcVar6;
          if (puVar13 != (undefined *)0x0) {
            if ((char)plVar19[0xc] == '\x01') {
              pcVar10 = (code *)plVar19[4];
              ppuStack_b8 = ppuStack_118;
              pcStack_c0 = pcStack_120;
              if (ppuStack_118 != (undefined **)0x0) {
                ppuVar5 = ppuStack_118 + 1;
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                  if (bVar2) {
                    *ppuVar5 = *ppuVar5 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              param_2 = (code **)(plVar19 + 4);
              (*pcVar10)(&pcStack_c0,param_2);
              if (ppuStack_b8 != (undefined **)0x0) {
                ppuVar5 = ppuStack_b8 + 1;
                do {
                  puVar13 = *ppuVar5;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                  if (bVar2) {
                    *ppuVar5 = puVar13 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                  ppuVar17 = ppuStack_b8;
                } while (cVar1 != '\0');
LAB_10a035d24:
                if (puVar13 == (undefined *)0x0) {
                  (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
                }
              }
            }
            else if ((char)plVar19[0xc] == '\x02') {
              plVar15 = plVar19 + 4;
              FUN_10a688b40();
              ppuVar5 = ppuStack_118;
              if (plVar15 == (long *)0x0) {
                param_2 = (code **)0x0;
                if (ppcVar6 != (code **)0x0) {
                  lStack_b0 = plVar19[4];
                  lStack_a8 = plVar19[5];
                  if (lStack_a8 != 0) {
                    plVar15 = (long *)(lStack_a8 + 8);
                    do {
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                      if (bVar2) {
                        *plVar15 = *plVar15 + 1;
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar1 != '\0');
                  }
                  pcStack_d0 = pcStack_120;
                  ppuStack_c8 = ppuStack_118;
                  if (ppuStack_118 == (undefined **)0x0) {
                    ppuStack_98 = (undefined **)0x0;
                  }
                  else {
                    ppuVar17 = ppuStack_118 + 1;
                    do {
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
                      if (bVar2) {
                        *ppuVar17 = *ppuVar17 + 1;
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar1 != '\0');
                    ppuStack_98 = ppuStack_118;
                    do {
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
                      if (bVar2) {
                        *ppuVar17 = *ppuVar17 + 1;
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar1 != '\0');
                  }
                  ppuStack_b8 = &PTR_FUN_110b9e390;
                  ppuStack_d8 = (undefined **)0x0;
                  uStack_e0 = 0;
                  pcStack_c0 = FUN_10a073b60;
                  param_2 = &pcStack_c0;
                  FUN_10a4634ec(ppcVar6,param_2);
                  (*(code *)*ppuStack_b8)(&ppuStack_b8);
                  if (ppuVar5 != (undefined **)0x0) {
                    ppuVar17 = ppuVar5 + 1;
                    do {
                      puVar13 = *ppuVar17;
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
                      if (bVar2) {
                        *ppuVar17 = puVar13 + -1;
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar1 != '\0');
                    if (puVar13 == (undefined *)0x0) {
                      (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
                    }
                  }
                  if (ppuStack_d8 != (undefined **)0x0) {
                    ppuVar5 = ppuStack_d8 + 1;
                    do {
                      puVar13 = *ppuVar5;
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                      if (bVar2) {
                        *ppuVar5 = puVar13 + -1;
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                      ppuVar17 = ppuStack_d8;
                    } while (cVar1 != '\0');
                    goto LAB_10a035d24;
                  }
                }
              }
              else {
                *plVar15 = CONCAT44((int)((ulong)*plVar15 >> 0x20) + 1,(int)*plVar15 + 1);
                param_2 = &pcStack_120;
                FUN_10a07395c(plVar19[4],&pcStack_120);
                iVar3 = *(int *)((long)plVar15 + 4) + -1;
                *(int *)((long)plVar15 + 4) = iVar3;
                if (iVar3 == 0) {
                  *(undefined4 *)plVar15 = 0;
                }
              }
            }
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      ppuVar5 = &puStack_110;
      FUN_10a073884(ppuVar5);
      if (ppuStack_118 != (undefined **)0x0) {
        ppuVar17 = ppuStack_118 + 1;
        do {
          puVar18 = *ppuVar17;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
          if (bVar2) {
            *ppuVar17 = puVar18 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (puVar18 == (undefined *)0x0) {
          (**(code **)(*ppuStack_118 + 0x10))(ppuStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_118);
          ppuVar5 = ppuStack_118;
        }
      }
    }
    param_1 = ppuVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      auVar22._8_8_ = param_2;
      auVar22._0_8_ = ppuVar5;
      return auVar22;
    }
  }
  else {
    FUN_10a04f610();
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b8)(unaff_x22 + 1);
  FUN_10a073904(unaff_x21 + 2);
  func_0x00010a004dac(&uStack_e0);
  FUN_10a073884(&puStack_110);
  FUN_10a073904(&pcStack_120);
  __Unwind_Resume(param_1);
  auVar23._8_8_ = 0xb;
  auVar23._0_8_ = &UNK_10f634284;
  return auVar23;
}



/* Entry: 10a035f60; end: 10a035fb7;  */

undefined1  [16] FUN_10a035f60(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xb;
  auVar1._0_8_ = &UNK_10f634284;
  return auVar1;
}



/* Entry: 10a035fb8; end: 10a03609b;  */

void FUN_10a035fb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_98;
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
  
  FUN_10a003e74(param_1,&UNK_10f632981,0xf);
  FUN_10a003e74(param_1,&UNK_10f632991,8);
  uStack_98 = 0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f630f1d;
  uStack_78 = 0;
  puStack_70 = &UNK_10f630f1d;
  uStack_68 = 0;
  uStack_60 = 0x16f00000000;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a03609c(param_1,&uStack_98);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f630f1d;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a073cd4();
  FUN_10a073e44(uVar1);
  func_0x00010a004064(param_1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a03609c; end: 10a036173;  */

/* WARNING: Removing unreachable block (ram,0x00010a036134) */

undefined1  [16] FUN_10a03609c(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f634284,0xb);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a073bd8(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a036174; end: 10a03622f;  */

void FUN_10a036174(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  *param_1 = &PTR_DAT_110b20ff0;
  param_1[1] = 0;
  param_1[3] = 0;
  func_0x00010b4d1294(auStack_38,&PTR_PTR_1132fd3a8);
  func_0x000109a1cae4(param_1);
  *(undefined4 *)((long)param_1 + 0x1c) = 100;
  param_1[2] = &DAT_11383d918;
  uVar1 = param_1[1];
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  func_0x000107c3024c(param_1 + 2,auStack_38,uVar1);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a036230; end: 10a036347;  */

void FUN_10a036230(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  *param_1 = &PTR_DAT_110b20ff0;
  param_1[1] = 0;
  param_1[3] = 0;
  func_0x00010b4d1294(auStack_38,&PTR_PTR_1132fd3a8);
  func_0x000109a1cae4(param_1);
  *(undefined4 *)((long)param_1 + 0x1c) = 100;
  param_1[2] = &DAT_11383d918;
  uVar1 = param_1[1];
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  func_0x000107c3024c(param_1 + 2,auStack_38,uVar1);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a036348; end: 10a0367e7;  */

void FUN_10a036348(ulong param_1)

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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000109887da8(appuStack_d8,&UNK_10f632c04,0xb);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110b9f038;
  pppuVar2 = (undefined8 ***)&UNK_10f630f1d;
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
  uStack_78 = 0;
  uStack_68 = 0xe4;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110b9f038;
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
    FUN_10a0605c4(param_1,&UNK_10f632bcf,FUN_10a073fcc,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f390956,FUN_10a0740ec,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f632be2,FUN_10a0741a4,FUN_10a07425c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f632beb,FUN_10a0743d4,FUN_10a07448c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f393a76,FUN_10a074578,FUN_10a074630);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f393a7f,FUN_10a07471c,FUN_10a0747d4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f393a92,FUN_10a0748c0,FUN_10a074978);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"timestamp",FUN_10a074a64,FUN_10a074b30);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f632bf5,FUN_10a074ed4,FUN_10a074ff8);
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
    uStack_78 = *(undefined8 *)(lVar3 + -0x30);
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
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f632c04,0xb);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f632c04;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f630f1d;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a0367c8;
      FUN_10a054dac(param_1,&DAT_10f68efec,FUN_10a0750f4,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a0367c8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a0367cc);
  (*pcVar6)();
}



/* Entry: 10a0367e8; end: 10a036b43;  */

void FUN_10a0367e8(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f634290,0xf);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110b9ef90;
  pppuVar2 = (undefined8 ***)&UNK_10f630f1d;
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
    ppuStack_b0 = &PTR_DAT_110b9ef90;
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
  FUN_10a0051e8(param_1,100,0x100,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a036b24;
    FUN_10a054dac(param_1,&UNK_10f632c10,FUN_10a075238,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9e478,FUN_10a075afc);
    FUN_10a0605c4(param_1,&UNK_10f632c23,FUN_10a076904,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f632c43,FUN_10a076aa0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f509ddb,FUN_10a076be0,FUN_10a076c9c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f632c54,FUN_10a076d80,FUN_10a076e3c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f632c69,FUN_10a076f24,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f634290,0xf);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a036b24:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a036b28);
  (*pcVar6)();
}



/* Entry: 10a036b44; end: 10a036d5b;  */

void FUN_10a036b44(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *extraout_x8;
  code *pcStack_90;
  undefined **ppuStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_88 = (undefined **)0x0;
  pcStack_80 = (code *)0x0;
  pcStack_90 = (code *)&DAT_10f2fc6b9;
  uStack_70 = 0xffffffffffffffff;
  uStack_78 = 0x100000064;
  puStack_68 = &UNK_10f630f1d;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0xffffffff;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x00010a004eb4(param_1,&pcStack_90);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar2 & 1) == 0) {
    pcStack_90 = FUN_10a076fec;
    ppuStack_88 = &PTR_FUN_110b9e490;
    pcStack_80 = FUN_10a036d5c;
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a036d50;
    FUN_10a0544d8(param_1,&UNK_10f632c7a,&pcStack_90,0,*(long *)(param_1 + 0x18) + -8);
    (*(code *)*ppuStack_88)(&ppuStack_88);
  }
  uVar2 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar2 & 1) == 0) {
    pcStack_90 = FUN_10a07716c;
    ppuStack_88 = &PTR_DAT_110b9e4a8;
    pcStack_80 = FUN_10a036f80;
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a036d50;
    FUN_10a0544d8(param_1,&UNK_10f632c90,&pcStack_90,1,*(long *)(param_1 + 0x18) + -8);
    (*(code *)*ppuStack_88)(&ppuStack_88);
  }
  uVar2 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar2 & 1) == 0) {
    pcStack_90 = FUN_10a077348;
    ppuStack_88 = &PTR_FUN_110b9e4d8;
    pcStack_80 = FUN_10a03701c;
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
LAB_10a036d50:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a036d54);
      (*pcVar1)();
    }
    FUN_10a0544d8(param_1,&UNK_10f632ca7,&pcStack_90,1,*(long *)(param_1 + 0x18) + -8);
    (*(code *)*ppuStack_88)(&ppuStack_88);
  }
  func_0x00010a004064();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar3 = (undefined8 *)0x170;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = &PTR_DAT_110b17898;
  *puVar3 = &PTR_FUN_110b9e628;
  puVar3[0x2b] = 0;
  puVar3[0x2c] = 0;
  puVar3[0x2a] = &PTR_FUN_110c383b8;
  *(undefined2 *)(puVar3 + 0x2d) = 0x100;
  puVar3[4] = 0;
  puVar3[5] = 0;
  FUN_10a0040d0(puVar3 + 6,&PTR_PTR_110b9bc48);
  puVar3[3] = &PTR_FUN_110b9bb20;
  puVar3[6] = &PTR_DAT_110b9bb90;
  puVar3[0x2a] = &PTR_DAT_110b9bc08;
  puVar4 = (undefined8 *)0x98;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110b9e500;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x11] = 0;
  puVar4[0x10] = 0;
  puVar4[0x12] = 0;
  puVar4[3] = &PTR_FUN_110b9e550;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  *(undefined4 *)(puVar4 + 10) = 0x3f800000;
  puVar4[0xb] = FUN_10a07a0e8;
  puVar4[0xc] = &PTR_DAT_110ae9180;
  puVar3[0xb] = puVar4 + 3;
  puVar3[0xc] = puVar4;
  puVar3[0xd] = param_1;
  puVar3[0xe] = 0x4014000000000000;
  puVar3[0xf] = 1000;
  *(undefined1 *)(puVar3 + 0x10) = 0;
  puVar3[0x16] = 0;
  puVar3[0x15] = 0;
  puVar3[0x1b] = 0x32aaaba7;
  puVar3[0x18] = 0;
  puVar3[0x17] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x19] = 0;
  puVar3[0x12] = 0;
  puVar3[0x11] = 0;
  puVar3[0x14] = 0;
  puVar3[0x13] = 0;
  puVar3[0x1d] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x21] = 0;
  puVar3[0x20] = 0;
  puVar3[0x23] = 0;
  puVar3[0x22] = 0;
  puVar3[0x25] = 0;
  puVar3[0x24] = 0;
  *(undefined1 *)(puVar3 + 0x26) = 1;
  puVar3[0x27] = 0x7fffffffffffffff;
  *(undefined1 *)(puVar3 + 0x28) = 0;
  *(undefined1 *)(puVar3 + 0x29) = 0;
  if ((*(byte *)(puVar3 + 0x2d) & 1) == 0) {
    *(undefined1 *)(puVar3 + 0x2d) = 1;
    puVar3[0x2c] = param_1;
    if (param_1 != 0) {
      puVar3[0x2b] = *(undefined8 *)(*(long *)(param_1 + 0x850) + 0x2c);
    }
  }
  FUN_10a5ae998(puVar3[9],&PTR_DAT_110b99f08,param_1,puVar3 + 6);
  *extraout_x8 = puVar3 + 3;
  extraout_x8[1] = puVar3;
  return;
}



/* Entry: 10a036d5c; end: 10a036f7f;  */

void FUN_10a036d5c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x170;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = &PTR_DAT_110b17898;
  *puVar1 = &PTR_FUN_110b9e628;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2a] = &PTR_FUN_110c383b8;
  *(undefined2 *)(puVar1 + 0x2d) = 0x100;
  puVar1[4] = 0;
  puVar1[5] = 0;
  FUN_10a0040d0(puVar1 + 6,&PTR_PTR_110b9bc48);
  puVar1[3] = &PTR_FUN_110b9bb20;
  puVar1[6] = &PTR_DAT_110b9bb90;
  puVar1[0x2a] = &PTR_DAT_110b9bc08;
  puVar2 = (undefined8 *)0x98;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110b9e500;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[0x12] = 0;
  puVar2[3] = &PTR_FUN_110b9e550;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 10) = 0x3f800000;
  puVar2[0xb] = FUN_10a07a0e8;
  puVar2[0xc] = &PTR_DAT_110ae9180;
  puVar1[0xb] = puVar2 + 3;
  puVar1[0xc] = puVar2;
  puVar1[0xd] = param_2;
  puVar1[0xe] = 0x4014000000000000;
  puVar1[0xf] = 1000;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  puVar1[0x1b] = 0x32aaaba7;
  puVar1[0x18] = 0;
  puVar1[0x17] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x19] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  puVar1[0x23] = 0;
  puVar1[0x22] = 0;
  puVar1[0x25] = 0;
  puVar1[0x24] = 0;
  *(undefined1 *)(puVar1 + 0x26) = 1;
  puVar1[0x27] = 0x7fffffffffffffff;
  *(undefined1 *)(puVar1 + 0x28) = 0;
  *(undefined1 *)(puVar1 + 0x29) = 0;
  if ((*(byte *)(puVar1 + 0x2d) & 1) == 0) {
    *(undefined1 *)(puVar1 + 0x2d) = 1;
    puVar1[0x2c] = param_2;
    if (param_2 != 0) {
      puVar1[0x2b] = *(undefined8 *)(*(long *)(param_2 + 0x850) + 0x2c);
    }
  }
  FUN_10a5ae998(puVar1[9],&PTR_DAT_110b99f08,param_2,puVar1 + 6);
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a036f80; end: 10a03701b;  */

double FUN_10a036f80(undefined8 param_1,float *param_2)

{
  float fVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_2;
  fVar3 = param_2[1];
  fVar8 = param_2[2];
  fVar7 = param_2[3];
  fVar4 = fVar7 * fVar7 + fVar1 * fVar1 + fVar3 * fVar3 + fVar8 * fVar8;
  dVar6 = (double)(-fVar3 / fVar4);
  dVar5 = (double)(-fVar8 / fVar4);
  dVar2 = ((double)(fVar1 / fVar4) + (double)(fVar1 / fVar4)) * dVar5 +
          (double)(fVar7 / fVar4) * (dVar6 + dVar6);
  _atan2(dVar2,(1.0 - dVar6 * (dVar6 + dVar6)) + dVar5 * dVar5 * -2.0);
  return (dVar2 * -180.0) / 3.141592653589793;
}



/* Entry: 10a03701c; end: 10a03773b;  */

/* WARNING: Removing unreachable block (ram,0x00010a0374f4) */
/* WARNING: Removing unreachable block (ram,0x00010a0374f8) */
/* WARNING: Removing unreachable block (ram,0x00010a037500) */
/* WARNING: Removing unreachable block (ram,0x00010a037508) */
/* WARNING: Removing unreachable block (ram,0x00010a037528) */

void FUN_10a03701c(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  lVar8 = *param_3;
  if (lVar8 == 0) {
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f632cca,&UNK_10f632e4f,0xf6,&UNK_10f632ef1);
    }
    func_0x000105688514(&UNK_10f632ef1);
LAB_10a037598:
    func_0x000105688514(&UNK_10f632f3e);
  }
  else {
    if (*(char *)(lVar8 + 0xe0) != '\x01') goto LAB_10a037598;
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f632cca,&UNK_10f632e4f,0xfb,&UNK_10f632f1a);
      lVar8 = *param_3;
    }
    lVar14 = param_3[1];
    if (lVar14 != 0) {
      plVar7 = (long *)(lVar14 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_58 = (undefined8 *)((ulong)puStack_58 & 0xffffffffffffff);
    uStack_68 = uStack_68 & 0xffffffffffffff00;
    plVar7 = (long *)*(long *)(lVar8 + 0xe8);
    if (-1 < *(char *)(lVar8 + 0xff)) {
      plVar7 = (long *)(lVar8 + 0xe8);
    }
    func_0x000107c2b054(&plStack_90,plVar7);
    FUN_10a6e855c(&plStack_78,param_2,&uStack_68,&plStack_90,2);
    if (uStack_80._7_1_ < '\0') {
      __ZdlPv(plStack_90);
    }
    if ((long)puStack_58 < 0) {
      __ZdlPv(uStack_68);
    }
    plVar7 = plStack_78;
    lVar9 = *(long *)(param_2 + 0x870);
    lVar13 = *(long *)(lVar9 + 0x38);
    if (lVar13 == 0) {
      lVar13 = *(long *)(lVar9 + 0x28);
      plVar10 = *(long **)(lVar9 + 0x30);
    }
    else {
      plVar10 = *(long **)(lVar9 + 0x40);
    }
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_78 = (long *)0x0;
    plStack_90 = plVar7;
    puVar6 = (undefined8 *)0x80;
    lStack_88 = lVar8;
    uStack_80 = (long *)lVar14;
    __Znwm();
    *puVar6 = FUN_10a08c87c;
    puVar6[1] = FUN_10a08cb60;
    FUN_10a04fe80(puVar6 + 2);
    lVar9 = puVar6[7];
    if (lVar9 != 0) {
      plVar1 = (long *)(lVar9 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
        lVar14 = (long)uStack_80;
        plVar7 = plStack_90;
        lVar8 = lStack_88;
      } while (cVar3 != '\0');
    }
    *param_1 = lVar9;
    plStack_90 = (long *)0x0;
    puVar6[9] = plVar7;
    puVar6[10] = lVar8;
    lStack_88 = 0;
    uStack_80 = (long *)0x0;
    puVar6[0xb] = lVar14;
    puVar6[0xc] = lVar13;
    *(undefined1 *)(puVar6 + 0xd) = 0;
    *(undefined1 *)(puVar6 + 0xf) = 0;
    lStack_70 = 0;
    FUN_109d18960(puVar6 + 2,lVar13,&lStack_70);
    if (lStack_70 == 0) {
      if ((*(byte *)(puVar6 + 0xd) & 1) == 0) {
        puStack_58 = (undefined8 *)puVar6[0xc];
        uStack_68 = 0;
        puStack_60 = puVar6;
        (**(code **)*puStack_58)(puStack_58,&uStack_68);
        __ZNSt13exception_ptrD1Ev(&lStack_70);
LAB_10a0373ec:
        plVar7 = uStack_80;
        if (uStack_80 != (long *)0x0) {
          plVar1 = uStack_80 + 1;
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
            (**(code **)(*uStack_80 + 0x10))(uStack_80);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        if (plStack_90 != (long *)0x0) {
          puVar2 = (ulong *)(plStack_90 + 1);
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
              (**(code **)(*plStack_90 + 8))();
            }
          }
        }
        if (plVar10 != (long *)0x0) {
          plVar7 = plVar10 + 1;
          do {
            lVar8 = *plVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        if (plStack_78 != (long *)0x0) {
          puVar2 = (ulong *)(plStack_78 + 1);
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
              (**(code **)(*plStack_78 + 8))();
            }
          }
        }
        return;
      }
      __ZNSt13exception_ptrD1Ev(&lStack_70);
      FUN_10a04fb20(puVar6 + 0xe,puVar6 + 9);
      puVar6[0xc] = puVar6[0xe];
      plVar7 = (long *)(puVar6[0xe] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (((uint)*(undefined8 *)(puVar6[0xc] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(puVar6 + 0xf) = 1;
        lVar8 = puVar6[0xc];
        plVar7 = (long *)(lVar8 + 0x10);
        puVar11 = (undefined8 *)puVar6[3];
        do {
          lVar14 = *plVar7;
          if (lVar14 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              uStack_68 = 0;
              puStack_60 = puVar6;
              puStack_58 = puVar11;
              func_0x000109d1b588(lVar8 + 0x18,&uStack_68);
              *(undefined8 *)(lVar8 + 0x10) = 0;
              goto LAB_10a0373ec;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar14 >> 1 & 1) == 0);
      }
      lVar8 = puVar6[0xc];
      if (((uint)*(undefined8 *)(puVar6[0xc] + 0x10) >> 5 & 1) == 0) {
        if ((*(byte *)(lVar8 + 0xa8) & 1) != 0) {
          FUN_10a04fa60(puVar6 + 2,lVar8 + 0x98);
          plVar7 = (long *)puVar6[0xc];
          if (plVar7 != (long *)0x0) {
            puVar2 = (ulong *)(plVar7 + 1);
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
                (**(code **)(*plVar7 + 8))();
              }
            }
          }
          plVar7 = (long *)puVar6[0xe];
          if (plVar7 != (long *)0x0) {
            puVar2 = (ulong *)(plVar7 + 1);
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
                (**(code **)(*plVar7 + 8))();
              }
            }
          }
          plVar7 = (long *)puVar6[0xb];
          if (plVar7 != (long *)0x0) {
            plVar1 = plVar7 + 1;
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
              (**(code **)(*plVar7 + 0x10))(plVar7);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          plVar7 = (long *)puVar6[9];
          if (plVar7 != (long *)0x0) {
            puVar2 = (ulong *)(plVar7 + 1);
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
                (**(code **)(*plVar7 + 8))();
              }
            }
          }
          func_0x000109d1a1d0(puVar6 + 2);
          __ZdlPv(puVar6);
          goto LAB_10a0373ec;
        }
      }
      else {
        func_0x0001092af97c(lVar8 + 0x90);
      }
      goto LAB_10a0375b8;
    }
  }
  func_0x0001092af97c(&lStack_70);
LAB_10a0375b8:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a0375bc);
  (*pcVar5)();
}



/* Entry: 10a03773c; end: 10a0378a7;  */

void FUN_10a03773c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  
  if (*(long *)(param_1 + 0xb8) == 0) {
    bVar3 = *(long *)(param_1 + 0x100) != *(long *)(param_1 + 0x108);
  }
  else {
    bVar3 = true;
  }
  if (*(long *)(param_1 + 0x120) != 0x7fffffffffffffff || !bVar3) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      puVar1 = &UNK_10f632e1f;
      if (*(long *)(param_1 + 0x120) != 0x7fffffffffffffff) {
        puVar1 = &UNK_10f632e24;
      }
      puVar2 = &UNK_10f632e1f;
      if (!bVar3) {
        puVar2 = &UNK_10f632e24;
      }
      func_0x00010ae06f08(0,1,&UNK_10f632cca,&UNK_10f632d5f,0x37,&UNK_10f632da3,in_x6,in_x7,
                          &UNK_10f632e08,puVar1,puVar2);
    }
    return;
  }
  lVar4 = param_1 + 0xc0;
  __ZNSt3__15mutex4lockEv();
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(long *)(param_1 + 0x120) = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0xc0);
  return;
}



/* Entry: 10a0378a8; end: 10a03791b;  */

void FUN_10a0378a8(double *param_1,double *param_2)

{
  byte bVar1;
  byte bVar2;
  double dVar3;
  double dVar4;
  
  if (((ulong)param_1[3] & 1) == 0) {
    dVar4 = param_2[1];
    dVar3 = *param_2;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
    param_1[1] = dVar4;
    *param_1 = dVar3;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  dVar3 = *param_2;
  if (*param_1 <= *param_2) {
    dVar3 = *param_1;
  }
  *param_1 = dVar3;
  dVar3 = param_2[1];
  if ((long)param_1[1] <= (long)param_2[1]) {
    dVar3 = param_1[1];
  }
  param_1[1] = dVar3;
  bVar1 = *(byte *)(param_1 + 2);
  bVar2 = *(byte *)(param_2 + 2);
  if (bVar1 != 0) {
    if (bVar2 == 0) {
      return;
    }
    if (bVar1 <= bVar2) {
      bVar2 = bVar1;
    }
  }
  *(byte *)(param_1 + 2) = bVar2;
  return;
}



/* Entry: 10a03791c; end: 10a038673;  */

void FUN_10a03791c(undefined **param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  byte bVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  float *pfVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  code *pcVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  undefined **ppuVar19;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined8 uVar20;
  long *plVar21;
  undefined **unaff_x21;
  undefined8 uVar22;
  undefined8 *puVar23;
  long *unaff_x22;
  undefined1 *unaff_x23;
  undefined **ppuVar24;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined8 *puVar25;
  code *unaff_x26;
  undefined **unaff_x27;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar26;
  long lVar27;
  undefined *puVar28;
  float fVar29;
  undefined *puVar30;
  undefined *puVar31;
  float fVar32;
  float fVar33;
  undefined *puVar34;
  undefined *puVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d13;
    *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_d12;
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_d11;
    *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_d10;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(undefined8 **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined ***)((long)register0x00000008 + -0x58) = unaff_x27;
    *(code **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined ***)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined ***)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined ***)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0xa8) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar9 = param_2;
    (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
              ((long)param_1 + *(long *)(*param_1 + -0x18));
    unaff_x24 = (undefined **)param_1[8];
    if (unaff_x24[6] != (undefined *)0x0) {
      *(undefined4 *)((long)register0x00000008 + -0x368) = 0xffffffff;
      pfVar11 = (float *)param_2[0x15];
      if (pfVar11 != (float *)0x0) {
        fVar38 = *pfVar11;
        fVar33 = pfVar11[1];
        fVar32 = pfVar11[2];
        fVar36 = pfVar11[3];
        fVar39 = pfVar11[4];
        fVar26 = pfVar11[5];
        fVar37 = pfVar11[6];
        fVar29 = pfVar11[7];
        fVar40 = pfVar11[8];
        if (*(char *)(param_2 + 0x20) == '\x01') {
          uVar1 = *(undefined4 *)(param_2 + 0x1e);
          *(undefined4 *)((long)register0x00000008 + -0x374) = uVar1;
          *(undefined4 *)((long)register0x00000008 + -0x368) = uVar1;
        }
        else {
          *(undefined4 *)((long)register0x00000008 + -0x374) = 0xffffffff;
        }
        fVar41 = (fVar38 - fVar39) - fVar40;
        fVar42 = (fVar39 - fVar38) - fVar40;
        fVar44 = (fVar40 - fVar38) - fVar39;
        fVar40 = fVar38 + fVar39 + fVar40;
        fVar38 = fVar41;
        if (fVar41 <= fVar40) {
          fVar38 = fVar40;
        }
        bVar6 = 2;
        if (fVar42 <= fVar38) {
          fVar42 = fVar38;
          bVar6 = fVar40 < fVar41;
        }
        bVar7 = 3;
        if (fVar44 <= fVar42) {
          fVar44 = fVar42;
          bVar7 = bVar6;
        }
        fVar42 = SQRT(fVar44 + 1.0) * 0.5;
        fVar39 = 0.25 / fVar42;
        fVar40 = (fVar37 - fVar32) * fVar39;
        fVar41 = (fVar33 + fVar36) * fVar39;
        fVar43 = (fVar26 + fVar29) * fVar39;
        fVar38 = (fVar33 - fVar36) * fVar39;
        fVar44 = (fVar32 + fVar37) * fVar39;
        fVar32 = fVar40;
        fVar33 = fVar43;
        fVar36 = fVar42;
        fVar37 = fVar41;
        if (bVar7 != 2) {
          fVar32 = fVar38;
          fVar33 = fVar42;
          fVar36 = fVar43;
          fVar37 = fVar44;
        }
        fVar39 = (fVar26 - fVar29) * fVar39;
        fVar26 = fVar42;
        if (bVar7 != 0) {
          fVar26 = fVar39;
          fVar38 = fVar44;
          fVar40 = fVar41;
          fVar39 = fVar42;
        }
        if (bVar7 < 2) {
          fVar32 = fVar26;
          fVar33 = fVar38;
          fVar36 = fVar40;
          fVar37 = fVar39;
        }
        *(float *)((long)register0x00000008 + -0x310) = fVar37;
        *(float *)((long)register0x00000008 + -0x30c) = fVar36;
        *(float *)((long)register0x00000008 + -0x308) = fVar33;
        *(float *)((long)register0x00000008 + -0x304) = fVar32;
        *(undefined8 *)((long)register0x00000008 + -0x338) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x340) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x328) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x330) = 0;
        *(undefined4 *)((long)register0x00000008 + -800) = *(undefined4 *)(unaff_x24 + 7);
        puVar9 = (undefined8 *)unaff_x24[4];
        FUN_10a075d04((undefined1 *)((long)register0x00000008 + -0x340));
        puVar25 = (undefined8 *)unaff_x24[5];
        if (puVar25 != (undefined8 *)0x0) {
          unaff_x26 = (code *)0x9ddfea08eb382d69;
          *(undefined1 **)((long)register0x00000008 + -0x370) =
               (undefined1 *)((long)register0x00000008 + -0x330);
          do {
            uVar12 = puVar25[2];
            uVar17 = ((ulong)(uint)((int)uVar12 << 3) + 8 ^ uVar12 >> 0x20) * -0x622015f714c7d297;
            uVar17 = (uVar12 >> 0x20 ^ uVar17 >> 0x2f ^ uVar17) * -0x622015f714c7d297;
            ppuVar24 = (undefined **)((uVar17 ^ uVar17 >> 0x2f) * -0x622015f714c7d297);
            unaff_x21 = *(undefined ***)((long)register0x00000008 + -0x338);
            if (unaff_x21 != (undefined **)0x0) {
              uVar17 = (long)unaff_x21 - 1;
              if (((ulong)unaff_x21 & uVar17) == 0) {
                unaff_x27 = (undefined **)((ulong)ppuVar24 & uVar17);
              }
              else {
                unaff_x27 = ppuVar24;
                if (unaff_x21 <= ppuVar24) {
                  uVar5 = 0;
                  if (unaff_x21 != (undefined **)0x0) {
                    uVar5 = (ulong)ppuVar24 / (ulong)unaff_x21;
                  }
                  unaff_x27 = (undefined **)((long)ppuVar24 - uVar5 * (long)unaff_x21);
                }
              }
              plVar18 = *(long **)(*(long *)((long)register0x00000008 + -0x340) +
                                  (long)unaff_x27 * 8);
              if (plVar18 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar18 = (long *)*plVar18;
                    if (plVar18 == (long *)0x0) goto LAB_10a037ba4;
                    ppuVar19 = (undefined **)plVar18[1];
                    if (ppuVar19 != ppuVar24) break;
                    if (plVar18[2] == uVar12) goto LAB_10a037d08;
                  }
                  if (((ulong)unaff_x21 & uVar17) == 0) {
                    ppuVar19 = (undefined **)((ulong)ppuVar19 & uVar17);
                  }
                  else if (unaff_x21 <= ppuVar19) {
                    uVar5 = 0;
                    if (unaff_x21 != (undefined **)0x0) {
                      uVar5 = (ulong)ppuVar19 / (ulong)unaff_x21;
                    }
                    ppuVar19 = (undefined **)((long)ppuVar19 - uVar5 * (long)unaff_x21);
                  }
                } while (ppuVar19 == unaff_x27);
              }
            }
LAB_10a037ba4:
            unaff_x22 = (long *)0x68;
            __Znwm();
            *unaff_x22 = 0;
            unaff_x22[1] = (long)ppuVar24;
            lVar16 = puVar25[3];
            lVar27 = puVar25[2];
            unaff_x22[3] = puVar25[3];
            unaff_x22[2] = lVar27;
            if (lVar16 != 0) {
              plVar18 = (long *)(lVar16 + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar3) {
                  *plVar18 = *plVar18 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            *(undefined1 *)(unaff_x22 + 0xc) = 3;
            *(long **)((long)register0x00000008 + -0x1d0) = unaff_x22 + 4;
            if (*(char *)(puVar25 + 0xc) == '\0') {
              uVar10 = 0;
            }
            else {
              puVar9 = puVar25 + 4;
              FUN_10a005398((undefined1 *)((long)register0x00000008 + -0x1d0));
              uVar10 = *(undefined1 *)(puVar25 + 0xc);
            }
            *(undefined1 *)(unaff_x22 + 0xc) = uVar10;
            if ((unaff_x21 == (undefined **)0x0) ||
               (*(float *)((long)register0x00000008 + -800) * (float)unaff_x21 <
                (float)(*(long *)((long)register0x00000008 + -0x328) + 1))) {
              uVar12 = 1;
              if ((undefined **)0x2 < unaff_x21) {
                uVar12 = (ulong)(((ulong)unaff_x21 & (long)unaff_x21 - 1U) != 0);
              }
              puVar9 = (undefined8 *)(uVar12 | (long)unaff_x21 << 1);
              puVar23 = (undefined8 *)
                        (long)((float)(*(long *)((long)register0x00000008 + -0x328) + 1) /
                              *(float *)((long)register0x00000008 + -800));
              if (puVar9 <= puVar23) {
                puVar9 = puVar23;
              }
              FUN_10a075d04((undefined1 *)((long)register0x00000008 + -0x340));
              unaff_x21 = *(undefined ***)((long)register0x00000008 + -0x338);
              if (((ulong)unaff_x21 & (long)unaff_x21 - 1U) == 0) {
                unaff_x27 = (undefined **)((long)unaff_x21 - 1U & (ulong)ppuVar24);
              }
              else {
                unaff_x27 = ppuVar24;
                if (unaff_x21 <= ppuVar24) {
                  uVar12 = 0;
                  if (unaff_x21 != (undefined **)0x0) {
                    uVar12 = (ulong)ppuVar24 / (ulong)unaff_x21;
                  }
                  unaff_x27 = (undefined **)((long)ppuVar24 - uVar12 * (long)unaff_x21);
                }
              }
            }
            lVar16 = *(long *)((long)register0x00000008 + -0x340);
            plVar18 = *(long **)(lVar16 + (long)unaff_x27 * 8);
            if (plVar18 == (long *)0x0) {
              *unaff_x22 = *(long *)((long)register0x00000008 + -0x330);
              *(long **)((long)register0x00000008 + -0x330) = unaff_x22;
              *(undefined8 *)(lVar16 + (long)unaff_x27 * 8) =
                   *(undefined8 *)((long)register0x00000008 + -0x370);
              if (*unaff_x22 != 0) {
                ppuVar24 = *(undefined ***)(*unaff_x22 + 8);
                if (((ulong)unaff_x21 & (long)unaff_x21 - 1U) == 0) {
                  ppuVar24 = (undefined **)((ulong)ppuVar24 & (long)unaff_x21 - 1U);
                }
                else if (unaff_x21 <= ppuVar24) {
                  uVar12 = 0;
                  if (unaff_x21 != (undefined **)0x0) {
                    uVar12 = (ulong)ppuVar24 / (ulong)unaff_x21;
                  }
                  ppuVar24 = (undefined **)((long)ppuVar24 - uVar12 * (long)unaff_x21);
                }
                *(long **)(*(long *)((long)register0x00000008 + -0x340) + (long)ppuVar24 * 8) =
                     unaff_x22;
              }
            }
            else {
              *unaff_x22 = *plVar18;
              *plVar18 = (long)unaff_x22;
            }
            *(long *)((long)register0x00000008 + -0x328) =
                 *(long *)((long)register0x00000008 + -0x328) + 1;
LAB_10a037d08:
            puVar25 = (undefined8 *)*puVar25;
          } while (puVar25 != (undefined8 *)0x0);
        }
        unaff_x25 = (undefined **)0x0;
        plVar18 = *(long **)((long)register0x00000008 + -0x330);
        if (plVar18 != (long *)0x0) {
          unaff_x25 = (undefined **)((long)register0x00000008 + -0x2f8);
          unaff_x21 = (undefined **)((long)register0x00000008 + -0x1d0);
          unaff_x26 = FUN_10a07a4f0;
          unaff_d8 = 0x100000001;
          unaff_x27 = &PTR_DAT_110b9e598;
          do {
            puVar25 = (undefined8 *)plVar18[2];
            ppuVar24 = unaff_x24 + 3;
            FUN_10a076714();
            puVar9 = puVar25;
            if (ppuVar24 != (undefined **)0x0) {
              if ((char)plVar18[0xc] == '\x01') {
                puVar9 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x374);
                (*(code *)plVar18[4])
                          ((undefined1 *)((long)register0x00000008 + -0x310),puVar9,plVar18 + 4);
              }
              else if ((char)plVar18[0xc] == '\x02') {
                unaff_x22 = plVar18 + 4;
                FUN_10a688b40();
                if (unaff_x22 == (long *)0x0) {
                  puVar9 = (undefined8 *)0x0;
                  if (puVar25 != (undefined8 *)0x0) {
                    lVar27 = plVar18[5];
                    lVar16 = plVar18[4];
                    if (plVar18[5] != 0) {
                      plVar21 = (long *)(plVar18[5] + 8);
                      do {
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                        if (bVar3) {
                          *plVar21 = *plVar21 + 1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                    }
                    *(undefined8 *)((long)register0x00000008 + -0x2e0) =
                         *(undefined8 *)((long)register0x00000008 + -0x308);
                    *(undefined8 *)((long)register0x00000008 + -0x2e8) =
                         *(undefined8 *)((long)register0x00000008 + -0x310);
                    *(undefined4 *)((long)register0x00000008 + -0x2d8) =
                         *(undefined4 *)((long)register0x00000008 + -0x374);
                    *(code **)((long)register0x00000008 + -0x1d0) = FUN_10a07a4f0;
                    *(undefined ***)((long)register0x00000008 + -0x1c8) = &PTR_DAT_110b9e598;
                    *(long *)((long)register0x00000008 + -0x1b8) = lVar27;
                    *(long *)((long)register0x00000008 + -0x1c0) = lVar16;
                    *(undefined8 *)((long)register0x00000008 + -0x2f8) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x2f0) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x1a8) =
                         *(undefined8 *)((long)register0x00000008 + -0x308);
                    *(undefined8 *)((long)register0x00000008 + -0x1b0) =
                         *(undefined8 *)((long)register0x00000008 + -0x310);
                    *(undefined4 *)((long)register0x00000008 + -0x1a0) =
                         *(undefined4 *)((long)register0x00000008 + -0x2d8);
                    puVar9 = (undefined8 *)((long)register0x00000008 + -0x1d0);
                    FUN_10a4634ec(puVar25);
                    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x1c8))
                              ((undefined1 *)((long)register0x00000008 + -0x1c8));
                  }
                }
                else {
                  *unaff_x22 = CONCAT44((int)((ulong)*unaff_x22 >> 0x20) + 1,(int)*unaff_x22 + 1);
                  puVar9 = (undefined8 *)((long)register0x00000008 + -0x310);
                  FUN_10a07a178(plVar18[4],puVar9,(undefined1 *)((long)register0x00000008 + -0x368))
                  ;
                  iVar4 = *(int *)((long)unaff_x22 + 4) + -1;
                  *(int *)((long)unaff_x22 + 4) = iVar4;
                  if (iVar4 == 0) {
                    *(undefined4 *)unaff_x22 = 0;
                  }
                }
              }
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        unaff_x23 = (undefined1 *)0x0;
        FUN_10a07a0f8((undefined1 *)((long)register0x00000008 + -0x340));
      }
    }
    unaff_x28 = (undefined8 *)((long)register0x00000008 + -0x1d0);
    __ZNSt3__15mutex4lockEv(param_1 + 0x18);
    unaff_x20 = param_1;
    if ((param_1[0x17] == (undefined *)0x0) && (param_1[0x20] == param_1[0x21])) {
      unaff_x19 = param_1 + 0x18;
      __ZNSt3__15mutex6unlockEv();
    }
    else {
      unaff_x19 = param_1 + 0x18;
      __ZNSt3__15mutex6unlockEv();
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (1999999999 < (long)unaff_x19 - (long)param_1[0x24]) {
        *(undefined8 *)((long)register0x00000008 + -0x310) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x308) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x300) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x328) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x330) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x318) = 0;
        *(undefined8 *)((long)register0x00000008 + -800) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x338) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x340) = 0;
        __ZNSt3__15mutex4lockEv(param_1 + 0x18);
        puVar35 = param_1[0x21];
        puVar34 = param_1[0x20];
        param_1[0x21] = (undefined *)0x0;
        param_1[0x20] = (undefined *)0x0;
        puVar13 = param_1[0x22];
        param_1[0x22] = (undefined *)0x0;
        *(undefined **)((long)register0x00000008 + -0x300) = puVar13;
        puVar28 = param_1[0x13];
        puVar13 = param_1[0x12];
        puVar31 = param_1[0x15];
        puVar30 = param_1[0x14];
        param_1[0x13] = (undefined *)0x0;
        param_1[0x12] = (undefined *)0x0;
        param_1[0x15] = (undefined *)0x0;
        param_1[0x14] = (undefined *)0x0;
        *(undefined **)((long)register0x00000008 + -0x338) = puVar28;
        *(undefined **)((long)register0x00000008 + -0x340) = puVar13;
        *(undefined **)((long)register0x00000008 + -0x328) = puVar31;
        *(undefined **)((long)register0x00000008 + -0x330) = puVar30;
        puVar28 = param_1[0x17];
        puVar13 = param_1[0x16];
        param_1[0x17] = (undefined *)0x0;
        param_1[0x16] = (undefined *)0x0;
        *(undefined **)((long)register0x00000008 + -0x318) = puVar28;
        *(undefined **)((long)register0x00000008 + -800) = puVar13;
        *(undefined **)((long)register0x00000008 + -0x308) = puVar35;
        *(undefined **)((long)register0x00000008 + -0x310) = puVar34;
        ppuVar24 = param_1 + 0x18;
        __ZNSt3__15mutex6unlockEv();
        *(undefined8 *)((long)register0x00000008 + -0x348) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x350) = 0;
        puVar9 = (undefined8 *)param_2[0x1d];
        if (puVar9 == (undefined8 *)0x0) {
          unaff_x22 = (long *)0x0;
          if (*(char *)(param_1 + 0x23) == '\x01') {
            *(undefined1 *)(param_1 + 0x23) = 0;
            if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
              func_0x00010ae06f08(1,2,&UNK_10f632cca,&UNK_10f632d07,0x25,&UNK_10f632d39);
            }
            uVar20 = *(undefined8 *)(param_1[10] + 3000);
            func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x1d0),
                                "lens_string_location_ar_location_cannot_be_determined_title");
            func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x2f8),
                                "lens_string_location_ar_location_cannot_be_determined_desc");
            FUN_10a79ba1c(uVar20,3,(undefined1 *)((long)register0x00000008 + -0x1d0),
                          (undefined1 *)((long)register0x00000008 + -0x2f8));
            if (*(char *)((long)register0x00000008 + -0x2e1) < '\0') {
              __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2f8));
            }
            goto LAB_10a0380ec;
          }
        }
        else {
          puVar13 = (undefined *)puVar9[7];
          param_1[0xe] = puVar13;
          if (*(int *)(puVar9 + 0xb) == 2) {
            if (*(char *)(param_1 + 0x26) == '\x01') {
              puVar13 = param_1[0x25];
            }
            else {
              __ZNSt3__16chrono12system_clock3nowEv();
              puVar13 = (undefined *)
                        (long)(((double)(long)ppuVar24 +
                               (*(double *)(*(long *)(param_1[10] + 0x850) + 8) +
                               *(double *)(*(long *)(param_1[10] + 0x850) + 0x18)) * -1000000.0) *
                              1000.0);
              if (((ulong)param_1[0x26] & 1) == 0) {
                *(undefined1 *)(param_1 + 0x26) = 1;
              }
              param_1[0x25] = puVar13;
            }
            puVar13 = puVar13 + puVar9[7];
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (param_1 + 0xf,puVar9 + 8);
          if ((*(char *)(param_2 + 0x20) == '\x01') && (1 < *(int *)(param_2 + 0x1e) + 1U)) {
            uVar20 = param_2[0x1f];
            uVar22 = 1;
          }
          else {
            uVar20 = 0;
            uVar22 = 0;
          }
          *(long *)((long)register0x00000008 + -0x2f8) = (long)puVar13 / 1000000;
          func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x1d0),
                              (&PTR_DAT_110b9feb8)[*(uint *)(puVar9 + 0xb)]);
          unaff_d8 = *puVar9;
          unaff_d9 = puVar9[1];
          unaff_d10 = puVar9[2];
          unaff_d11 = puVar9[3];
          unaff_d12 = puVar9[4];
          unaff_x22 = (long *)0x88;
          __Znwm();
          unaff_x22[1] = 0;
          unaff_x22[2] = 0;
          plVar18 = unaff_x22 + 3;
          *unaff_x22 = (long)&PTR_FUN_110b9e5c0;
          FUN_10a0503d0(unaff_d8,unaff_d9,unaff_d10,unaff_d11,unaff_d12,plVar18,uVar20,uVar22,
                        (undefined1 *)((long)register0x00000008 + -0x2f8),
                        (undefined1 *)((long)register0x00000008 + -0x1d0));
          plVar21 = *(long **)((long)register0x00000008 + -0x348);
          *(long **)((long)register0x00000008 + -0x350) = plVar18;
          *(long **)((long)register0x00000008 + -0x348) = unaff_x22;
          if (plVar21 != (long *)0x0) {
            plVar18 = plVar21 + 1;
            do {
              lVar16 = *plVar18;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar3) {
                *plVar18 = lVar16 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
            }
          }
LAB_10a0380ec:
          if (*(char *)((long)register0x00000008 + -0x1b9) < '\0') {
            __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1d0));
          }
        }
        puVar9 = (undefined8 *)&UNK_10f632e2a;
        func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x368));
        if (*(long *)((long)register0x00000008 + -0x318) != 0) {
          unaff_x22 = (long *)((long)register0x00000008 + -0x2f8);
          unaff_x24 = (undefined **)((long)register0x00000008 + -0x1d0);
          puVar23 = *(undefined8 **)((long)register0x00000008 + -0x338);
          puVar14 = *(undefined1 **)((long)register0x00000008 + -800);
          unaff_x25 = &PTR_FUN_110b9e600;
          unaff_x26 = FUN_10a07a7fc;
          unaff_d8 = 0x100000001;
          puVar25 = puVar9;
          do {
            puVar9 = puVar25;
            if (param_2[0x1d] == 0) {
              puVar25 = *(undefined8 **)
                         (puVar23[(ulong)puVar14 >> 7] + ((ulong)puVar14 & 0x7f) * 0x20 + 0x10);
              if (puVar25 == (undefined8 *)0x0 || *(char *)(puVar25 + 8) != '\x02') {
                if (puVar25 != (undefined8 *)0x0 && *(char *)(puVar25 + 8) == '\x01') {
                  (*(code *)*puVar25)((undefined1 *)((long)register0x00000008 + -0x368));
                  puVar9 = puVar25;
                }
              }
              else {
                puVar9 = (undefined8 *)((long)register0x00000008 + -0x368);
                FUN_10a05aad0(puVar25);
              }
            }
            else {
              puVar23 = *(undefined8 **)
                         (puVar23[(ulong)puVar14 >> 7] + ((ulong)puVar14 & 0x7f) * 0x20);
              if (puVar23 == (undefined8 *)0x0 || *(char *)(puVar23 + 8) != '\x02') {
                if (puVar23 != (undefined8 *)0x0 && *(char *)(puVar23 + 8) == '\x01') {
                  pcVar15 = (code *)*puVar23;
                  *(undefined8 *)((long)register0x00000008 + -0x1c8) =
                       *(undefined8 *)((long)register0x00000008 + -0x348);
                  *unaff_x28 = *(undefined8 *)((long)register0x00000008 + -0x350);
                  if (*(long *)((long)register0x00000008 + -0x348) != 0) {
                    plVar18 = (long *)(*(long *)((long)register0x00000008 + -0x348) + 8);
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                      if (bVar3) {
                        *plVar18 = *plVar18 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  (*pcVar15)((undefined1 *)((long)register0x00000008 + -0x1d0));
                  plVar18 = *(long **)((long)register0x00000008 + -0x1c8);
                  puVar9 = puVar23;
                  if (plVar18 != (long *)0x0) {
                    plVar21 = plVar18 + 1;
                    do {
                      lVar16 = *plVar21;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                      if (bVar3) {
                        *plVar21 = lVar16 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
LAB_10a038330:
                    puVar9 = puVar23;
                    if (lVar16 == 0) {
                      (**(code **)(*plVar18 + 0x10))(plVar18);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
                      puVar9 = puVar23;
                    }
                  }
                }
              }
              else {
                puVar8 = puVar23;
                FUN_10a688b40();
                if (puVar8 == (undefined8 *)0x0) {
                  puVar9 = (undefined8 *)0x0;
                  if (puVar25 != (undefined8 *)0x0) {
                    uVar20 = *puVar23;
                    lVar16 = puVar23[1];
                    if (lVar16 != 0) {
                      plVar18 = (long *)(lVar16 + 8);
                      do {
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                        if (bVar3) {
                          *plVar18 = *plVar18 + 1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                    }
                    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x350);
                    plVar18 = *(long **)((long)register0x00000008 + -0x348);
                    *(undefined8 *)((long)register0x00000008 + -0x2e8) = uVar22;
                    *(long **)((long)register0x00000008 + -0x2e0) = plVar18;
                    if (plVar18 == (long *)0x0) {
                      *(undefined ***)((long)register0x00000008 + -0x1c8) = &PTR_FUN_110b9e600;
                      *(undefined8 *)((long)register0x00000008 + -0x1c0) = uVar20;
                      *(undefined8 *)((long)register0x00000008 + -0x2f8) = 0;
                      *(undefined8 *)((long)register0x00000008 + -0x2f0) = 0;
                      *(long *)((long)register0x00000008 + -0x1b8) = lVar16;
                      *(undefined8 *)((long)register0x00000008 + -0x1b0) = uVar22;
                      *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0;
                    }
                    else {
                      plVar21 = plVar18 + 1;
                      do {
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                        if (bVar3) {
                          *plVar21 = *plVar21 + 1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      *(undefined ***)((long)register0x00000008 + -0x1c8) = &PTR_FUN_110b9e600;
                      *(undefined8 *)((long)register0x00000008 + -0x1c0) = uVar20;
                      *(undefined8 *)((long)register0x00000008 + -0x2f8) = 0;
                      *(undefined8 *)((long)register0x00000008 + -0x2f0) = 0;
                      *(long *)((long)register0x00000008 + -0x1b8) = lVar16;
                      *(undefined8 *)((long)register0x00000008 + -0x1b0) = uVar22;
                      *(long **)((long)register0x00000008 + -0x1a8) = plVar18;
                      do {
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                        if (bVar3) {
                          *plVar21 = *plVar21 + 1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                    }
                    *(code **)((long)register0x00000008 + -0x1d0) = FUN_10a07a7fc;
                    puVar23 = (undefined8 *)((long)register0x00000008 + -0x1d0);
                    FUN_10a4634ec(puVar25);
                    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x1c8))
                              ((undefined1 *)((long)register0x00000008 + -0x1c8));
                    if (plVar18 != (long *)0x0) {
                      plVar21 = plVar18 + 1;
                      do {
                        lVar16 = *plVar21;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                        if (bVar3) {
                          *plVar21 = lVar16 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (lVar16 == 0) {
                        (**(code **)(*plVar18 + 0x10))(plVar18);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
                      }
                    }
                    plVar18 = *(long **)((long)register0x00000008 + -0x2f0);
                    puVar9 = puVar23;
                    if (plVar18 != (long *)0x0) {
                      plVar21 = plVar18 + 1;
                      do {
                        lVar16 = *plVar21;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                        if (bVar3) {
                          *plVar21 = lVar16 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      goto LAB_10a038330;
                    }
                  }
                }
                else {
                  *puVar8 = CONCAT44((int)((ulong)*puVar8 >> 0x20) + 1,(int)*puVar8 + 1);
                  puVar9 = (undefined8 *)((long)register0x00000008 + -0x350);
                  FUN_10a07a5d0(*puVar23);
                  iVar4 = *(int *)((long)puVar8 + 4) + -1;
                  *(int *)((long)puVar8 + 4) = iVar4;
                  if (iVar4 == 0) {
                    *(undefined4 *)puVar8 = 0;
                  }
                }
              }
            }
            unaff_x27 = *(undefined ***)((long)register0x00000008 + -0x318);
            if (unaff_x27 == (undefined **)0x0) {
                    /* WARNING: Does not return */
              pcVar15 = (code *)SoftwareBreakpoint(1,0x10a0384f4);
              (*pcVar15)();
            }
            puVar25 = *(undefined8 **)((long)register0x00000008 + -0x338);
            unaff_x23 = *(undefined1 **)((long)register0x00000008 + -800);
            lVar16 = puVar25[(ulong)unaff_x23 >> 7] + ((ulong)unaff_x23 & 0x7f) * 0x20;
            func_0x00010a07a8a8(lVar16 + 0x10);
            FUN_10a04f83c(lVar16);
            puVar14 = unaff_x23 + 1;
            *(undefined1 **)((long)register0x00000008 + -800) = puVar14;
            *(long *)((long)register0x00000008 + -0x318) = (long)unaff_x27 + -1;
            puVar23 = puVar25;
            if ((undefined1 *)0xff < puVar14) {
              puVar23 = puVar25 + 1;
              __ZdlPv(*puVar25);
              puVar14 = unaff_x23 + -0x7f;
              *(undefined8 **)((long)register0x00000008 + -0x338) = puVar23;
              *(undefined1 **)((long)register0x00000008 + -800) = puVar14;
            }
            puVar25 = puVar9;
          } while ((long)unaff_x27 + -1 != 0);
        }
        unaff_x20 = *(undefined ***)((long)register0x00000008 + -0x310);
        unaff_x21 = *(undefined ***)((long)register0x00000008 + -0x308);
        if (unaff_x20 != unaff_x21) {
          unaff_x22 = (long *)((long)register0x00000008 + -0x1d0);
          unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x2f8);
          unaff_x24 = &PTR_FUN_110b99e70;
          do {
            if (param_2[0x1d] == 0) {
              FUN_10a002a94((undefined1 *)((long)register0x00000008 + -0x2f8),
                            (undefined1 *)((long)register0x00000008 + -0x368));
              *(undefined ***)((long)register0x00000008 + -0x2f8) = &PTR_FUN_110b99e70;
              __ZNSt13runtime_errorC2ERKS_
                        ((undefined1 *)((long)register0x00000008 + -0x1d0),
                         (undefined1 *)((long)register0x00000008 + -0x2f8));
              _memcpy((undefined1 *)((long)register0x00000008 + -0x1c0),
                      (undefined1 *)((long)register0x00000008 + -0x2e8),0x110);
              *(undefined ***)((long)register0x00000008 + -0x1d0) = &PTR_FUN_110b99e70;
              FUN_10a05bde0((undefined1 *)((long)register0x00000008 + -0x1d8),
                            (undefined1 *)((long)register0x00000008 + -0x1d0));
              __ZNSt13runtime_errorD2Ev((undefined1 *)((long)register0x00000008 + -0x1d0));
              puVar9 = (undefined8 *)((long)register0x00000008 + -0x1d8);
              func_0x000109d1b350(*unaff_x20);
              __ZNSt13exception_ptrD1Ev((undefined1 *)((long)register0x00000008 + -0x1d8));
              __ZNSt13runtime_errorD2Ev((undefined1 *)((long)register0x00000008 + -0x2f8));
            }
            else {
              puVar9 = (undefined8 *)((long)register0x00000008 + -0x350);
              FUN_10a079848(*unaff_x20);
            }
            unaff_x20 = unaff_x20 + 1;
          } while (unaff_x20 != unaff_x21);
        }
        if (*(char *)((long)register0x00000008 + -0x351) < '\0') {
          __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x368));
        }
        plVar18 = *(long **)((long)register0x00000008 + -0x348);
        if (plVar18 != (long *)0x0) {
          plVar21 = plVar18 + 1;
          do {
            lVar16 = *plVar21;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar3) {
              *plVar21 = lVar16 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
          }
        }
        FUN_10a04f6ac((undefined1 *)((long)register0x00000008 + -0x340));
        unaff_x19 = (undefined **)((long)register0x00000008 + -0x310);
        FUN_10a04f638();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xa8)) {
      return;
    }
    ___stack_chk_fail();
    param_2 = puVar9;
    if (*(char *)((long)register0x00000008 + -0x2e1) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2f8));
      param_2 = puVar9;
    }
    if (*(char *)((long)register0x00000008 + -0x1b9) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1d0));
    }
    FUN_10a07a538((undefined1 *)((long)register0x00000008 + -0x350));
    FUN_10a04f6ac((undefined1 *)((long)register0x00000008 + -0x340));
    FUN_10a04f638((undefined1 *)((long)register0x00000008 + -0x310));
    unaff_x30 = FUN_10a038674;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -3;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x380);
  } while( true );
}



/* Entry: 10a038674; end: 10a03867b;  */

void FUN_10a038674(undefined1 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  byte bVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  float *pfVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  code *pcVar16;
  ulong uVar17;
  long *plVar18;
  undefined **ppuVar19;
  undefined1 *unaff_x19;
  long *plVar20;
  undefined **unaff_x20;
  long lVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined **unaff_x21;
  long *unaff_x22;
  undefined **ppuVar24;
  undefined1 *unaff_x23;
  undefined **unaff_x24;
  undefined8 *puVar25;
  undefined **unaff_x25;
  code *unaff_x26;
  undefined **unaff_x27;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar26;
  long lVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  
  do {
    ppuVar9 = (undefined **)(param_1 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d13;
    *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_d12;
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_d11;
    *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_d10;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(undefined8 **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined ***)((long)register0x00000008 + -0x58) = unaff_x27;
    *(code **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined ***)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined ***)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined ***)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0xa8) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar10 = param_2;
    (**(code **)(*(long *)((long)ppuVar9 + *(long *)(*ppuVar9 + -0x18)) + 0x28))
              ((long)ppuVar9 + *(long *)(*ppuVar9 + -0x18));
    unaff_x24 = *(undefined ***)(param_1 + 0x28);
    if (unaff_x24[6] != (undefined *)0x0) {
      *(undefined4 *)((long)register0x00000008 + -0x368) = 0xffffffff;
      pfVar12 = (float *)param_2[0x15];
      if (pfVar12 != (float *)0x0) {
        fVar37 = *pfVar12;
        fVar32 = pfVar12[1];
        fVar31 = pfVar12[2];
        fVar35 = pfVar12[3];
        fVar38 = pfVar12[4];
        fVar26 = pfVar12[5];
        fVar36 = pfVar12[6];
        fVar28 = pfVar12[7];
        fVar39 = pfVar12[8];
        if (*(char *)(param_2 + 0x20) == '\x01') {
          uVar1 = *(undefined4 *)(param_2 + 0x1e);
          *(undefined4 *)((long)register0x00000008 + -0x374) = uVar1;
          *(undefined4 *)((long)register0x00000008 + -0x368) = uVar1;
        }
        else {
          *(undefined4 *)((long)register0x00000008 + -0x374) = 0xffffffff;
        }
        fVar40 = (fVar37 - fVar38) - fVar39;
        fVar41 = (fVar38 - fVar37) - fVar39;
        fVar43 = (fVar39 - fVar37) - fVar38;
        fVar39 = fVar37 + fVar38 + fVar39;
        fVar37 = fVar40;
        if (fVar40 <= fVar39) {
          fVar37 = fVar39;
        }
        bVar6 = 2;
        if (fVar41 <= fVar37) {
          fVar41 = fVar37;
          bVar6 = fVar39 < fVar40;
        }
        bVar7 = 3;
        if (fVar43 <= fVar41) {
          fVar43 = fVar41;
          bVar7 = bVar6;
        }
        fVar41 = SQRT(fVar43 + 1.0) * 0.5;
        fVar38 = 0.25 / fVar41;
        fVar39 = (fVar36 - fVar31) * fVar38;
        fVar40 = (fVar32 + fVar35) * fVar38;
        fVar42 = (fVar26 + fVar28) * fVar38;
        fVar37 = (fVar32 - fVar35) * fVar38;
        fVar43 = (fVar31 + fVar36) * fVar38;
        fVar31 = fVar39;
        fVar32 = fVar42;
        fVar35 = fVar41;
        fVar36 = fVar40;
        if (bVar7 != 2) {
          fVar31 = fVar37;
          fVar32 = fVar41;
          fVar35 = fVar42;
          fVar36 = fVar43;
        }
        fVar38 = (fVar26 - fVar28) * fVar38;
        fVar26 = fVar41;
        if (bVar7 != 0) {
          fVar26 = fVar38;
          fVar37 = fVar43;
          fVar39 = fVar40;
          fVar38 = fVar41;
        }
        if (bVar7 < 2) {
          fVar31 = fVar26;
          fVar32 = fVar37;
          fVar35 = fVar39;
          fVar36 = fVar38;
        }
        *(float *)((long)register0x00000008 + -0x310) = fVar36;
        *(float *)((long)register0x00000008 + -0x30c) = fVar35;
        *(float *)((long)register0x00000008 + -0x308) = fVar32;
        *(float *)((long)register0x00000008 + -0x304) = fVar31;
        *(undefined8 *)((long)register0x00000008 + -0x338) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x340) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x328) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x330) = 0;
        *(undefined4 *)((long)register0x00000008 + -800) = *(undefined4 *)(unaff_x24 + 7);
        puVar10 = (undefined8 *)unaff_x24[4];
        FUN_10a075d04((undefined1 *)((long)register0x00000008 + -0x340));
        puVar25 = (undefined8 *)unaff_x24[5];
        if (puVar25 != (undefined8 *)0x0) {
          unaff_x26 = (code *)0x9ddfea08eb382d69;
          *(undefined1 **)((long)register0x00000008 + -0x370) =
               (undefined1 *)((long)register0x00000008 + -0x330);
          do {
            uVar13 = puVar25[2];
            uVar17 = ((ulong)(uint)((int)uVar13 << 3) + 8 ^ uVar13 >> 0x20) * -0x622015f714c7d297;
            uVar17 = (uVar13 >> 0x20 ^ uVar17 >> 0x2f ^ uVar17) * -0x622015f714c7d297;
            ppuVar24 = (undefined **)((uVar17 ^ uVar17 >> 0x2f) * -0x622015f714c7d297);
            unaff_x21 = *(undefined ***)((long)register0x00000008 + -0x338);
            if (unaff_x21 != (undefined **)0x0) {
              uVar17 = (long)unaff_x21 - 1;
              if (((ulong)unaff_x21 & uVar17) == 0) {
                unaff_x27 = (undefined **)((ulong)ppuVar24 & uVar17);
              }
              else {
                unaff_x27 = ppuVar24;
                if (unaff_x21 <= ppuVar24) {
                  uVar5 = 0;
                  if (unaff_x21 != (undefined **)0x0) {
                    uVar5 = (ulong)ppuVar24 / (ulong)unaff_x21;
                  }
                  unaff_x27 = (undefined **)((long)ppuVar24 - uVar5 * (long)unaff_x21);
                }
              }
              plVar18 = *(long **)(*(long *)((long)register0x00000008 + -0x340) +
                                  (long)unaff_x27 * 8);
              if (plVar18 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar18 = (long *)*plVar18;
                    if (plVar18 == (long *)0x0) goto LAB_10a037ba4;
                    ppuVar19 = (undefined **)plVar18[1];
                    if (ppuVar19 != ppuVar24) break;
                    if (plVar18[2] == uVar13) goto LAB_10a037d08;
                  }
                  if (((ulong)unaff_x21 & uVar17) == 0) {
                    ppuVar19 = (undefined **)((ulong)ppuVar19 & uVar17);
                  }
                  else if (unaff_x21 <= ppuVar19) {
                    uVar5 = 0;
                    if (unaff_x21 != (undefined **)0x0) {
                      uVar5 = (ulong)ppuVar19 / (ulong)unaff_x21;
                    }
                    ppuVar19 = (undefined **)((long)ppuVar19 - uVar5 * (long)unaff_x21);
                  }
                } while (ppuVar19 == unaff_x27);
              }
            }
LAB_10a037ba4:
            unaff_x22 = (long *)0x68;
            __Znwm();
            *unaff_x22 = 0;
            unaff_x22[1] = (long)ppuVar24;
            lVar21 = puVar25[3];
            lVar27 = puVar25[2];
            unaff_x22[3] = puVar25[3];
            unaff_x22[2] = lVar27;
            if (lVar21 != 0) {
              plVar18 = (long *)(lVar21 + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar3) {
                  *plVar18 = *plVar18 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            *(undefined1 *)(unaff_x22 + 0xc) = 3;
            *(long **)((long)register0x00000008 + -0x1d0) = unaff_x22 + 4;
            if (*(char *)(puVar25 + 0xc) == '\0') {
              uVar11 = 0;
            }
            else {
              puVar10 = puVar25 + 4;
              FUN_10a005398((undefined1 *)((long)register0x00000008 + -0x1d0));
              uVar11 = *(undefined1 *)(puVar25 + 0xc);
            }
            *(undefined1 *)(unaff_x22 + 0xc) = uVar11;
            if ((unaff_x21 == (undefined **)0x0) ||
               (*(float *)((long)register0x00000008 + -800) * (float)unaff_x21 <
                (float)(*(long *)((long)register0x00000008 + -0x328) + 1))) {
              uVar13 = 1;
              if ((undefined **)0x2 < unaff_x21) {
                uVar13 = (ulong)(((ulong)unaff_x21 & (long)unaff_x21 - 1U) != 0);
              }
              puVar10 = (undefined8 *)(uVar13 | (long)unaff_x21 << 1);
              puVar23 = (undefined8 *)
                        (long)((float)(*(long *)((long)register0x00000008 + -0x328) + 1) /
                              *(float *)((long)register0x00000008 + -800));
              if (puVar10 <= puVar23) {
                puVar10 = puVar23;
              }
              FUN_10a075d04((undefined1 *)((long)register0x00000008 + -0x340));
              unaff_x21 = *(undefined ***)((long)register0x00000008 + -0x338);
              if (((ulong)unaff_x21 & (long)unaff_x21 - 1U) == 0) {
                unaff_x27 = (undefined **)((long)unaff_x21 - 1U & (ulong)ppuVar24);
              }
              else {
                unaff_x27 = ppuVar24;
                if (unaff_x21 <= ppuVar24) {
                  uVar13 = 0;
                  if (unaff_x21 != (undefined **)0x0) {
                    uVar13 = (ulong)ppuVar24 / (ulong)unaff_x21;
                  }
                  unaff_x27 = (undefined **)((long)ppuVar24 - uVar13 * (long)unaff_x21);
                }
              }
            }
            lVar21 = *(long *)((long)register0x00000008 + -0x340);
            plVar18 = *(long **)(lVar21 + (long)unaff_x27 * 8);
            if (plVar18 == (long *)0x0) {
              *unaff_x22 = *(long *)((long)register0x00000008 + -0x330);
              *(long **)((long)register0x00000008 + -0x330) = unaff_x22;
              *(undefined8 *)(lVar21 + (long)unaff_x27 * 8) =
                   *(undefined8 *)((long)register0x00000008 + -0x370);
              if (*unaff_x22 != 0) {
                ppuVar24 = *(undefined ***)(*unaff_x22 + 8);
                if (((ulong)unaff_x21 & (long)unaff_x21 - 1U) == 0) {
                  ppuVar24 = (undefined **)((ulong)ppuVar24 & (long)unaff_x21 - 1U);
                }
                else if (unaff_x21 <= ppuVar24) {
                  uVar13 = 0;
                  if (unaff_x21 != (undefined **)0x0) {
                    uVar13 = (ulong)ppuVar24 / (ulong)unaff_x21;
                  }
                  ppuVar24 = (undefined **)((long)ppuVar24 - uVar13 * (long)unaff_x21);
                }
                *(long **)(*(long *)((long)register0x00000008 + -0x340) + (long)ppuVar24 * 8) =
                     unaff_x22;
              }
            }
            else {
              *unaff_x22 = *plVar18;
              *plVar18 = (long)unaff_x22;
            }
            *(long *)((long)register0x00000008 + -0x328) =
                 *(long *)((long)register0x00000008 + -0x328) + 1;
LAB_10a037d08:
            puVar25 = (undefined8 *)*puVar25;
          } while (puVar25 != (undefined8 *)0x0);
        }
        unaff_x25 = (undefined **)0x0;
        plVar18 = *(long **)((long)register0x00000008 + -0x330);
        if (plVar18 != (long *)0x0) {
          unaff_x25 = (undefined **)((long)register0x00000008 + -0x2f8);
          unaff_x21 = (undefined **)((long)register0x00000008 + -0x1d0);
          unaff_x26 = FUN_10a07a4f0;
          unaff_d8 = 0x100000001;
          unaff_x27 = &PTR_DAT_110b9e598;
          do {
            puVar25 = (undefined8 *)plVar18[2];
            ppuVar24 = unaff_x24 + 3;
            FUN_10a076714();
            puVar10 = puVar25;
            if (ppuVar24 != (undefined **)0x0) {
              if ((char)plVar18[0xc] == '\x01') {
                puVar10 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x374);
                (*(code *)plVar18[4])
                          ((undefined1 *)((long)register0x00000008 + -0x310),puVar10,plVar18 + 4);
              }
              else if ((char)plVar18[0xc] == '\x02') {
                unaff_x22 = plVar18 + 4;
                FUN_10a688b40();
                if (unaff_x22 == (long *)0x0) {
                  puVar10 = (undefined8 *)0x0;
                  if (puVar25 != (undefined8 *)0x0) {
                    lVar27 = plVar18[5];
                    lVar21 = plVar18[4];
                    if (plVar18[5] != 0) {
                      plVar20 = (long *)(plVar18[5] + 8);
                      do {
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                        if (bVar3) {
                          *plVar20 = *plVar20 + 1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                    }
                    *(undefined8 *)((long)register0x00000008 + -0x2e0) =
                         *(undefined8 *)((long)register0x00000008 + -0x308);
                    *(undefined8 *)((long)register0x00000008 + -0x2e8) =
                         *(undefined8 *)((long)register0x00000008 + -0x310);
                    *(undefined4 *)((long)register0x00000008 + -0x2d8) =
                         *(undefined4 *)((long)register0x00000008 + -0x374);
                    *(code **)((long)register0x00000008 + -0x1d0) = FUN_10a07a4f0;
                    *(undefined ***)((long)register0x00000008 + -0x1c8) = &PTR_DAT_110b9e598;
                    *(long *)((long)register0x00000008 + -0x1b8) = lVar27;
                    *(long *)((long)register0x00000008 + -0x1c0) = lVar21;
                    *(undefined8 *)((long)register0x00000008 + -0x2f8) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x2f0) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x1a8) =
                         *(undefined8 *)((long)register0x00000008 + -0x308);
                    *(undefined8 *)((long)register0x00000008 + -0x1b0) =
                         *(undefined8 *)((long)register0x00000008 + -0x310);
                    *(undefined4 *)((long)register0x00000008 + -0x1a0) =
                         *(undefined4 *)((long)register0x00000008 + -0x2d8);
                    puVar10 = (undefined8 *)((long)register0x00000008 + -0x1d0);
                    FUN_10a4634ec(puVar25);
                    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x1c8))
                              ((undefined1 *)((long)register0x00000008 + -0x1c8));
                  }
                }
                else {
                  *unaff_x22 = CONCAT44((int)((ulong)*unaff_x22 >> 0x20) + 1,(int)*unaff_x22 + 1);
                  puVar10 = (undefined8 *)((long)register0x00000008 + -0x310);
                  FUN_10a07a178(plVar18[4],puVar10,(undefined1 *)((long)register0x00000008 + -0x368)
                               );
                  iVar4 = *(int *)((long)unaff_x22 + 4) + -1;
                  *(int *)((long)unaff_x22 + 4) = iVar4;
                  if (iVar4 == 0) {
                    *(undefined4 *)unaff_x22 = 0;
                  }
                }
              }
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        unaff_x23 = (undefined1 *)0x0;
        FUN_10a07a0f8((undefined1 *)((long)register0x00000008 + -0x340));
      }
    }
    unaff_x28 = (undefined8 *)((long)register0x00000008 + -0x1d0);
    __ZNSt3__15mutex4lockEv(param_1 + 0xa8);
    if ((*(long *)(param_1 + 0xa0) == 0) && (*(long *)(param_1 + 0xe8) == *(long *)(param_1 + 0xf0))
       ) {
      unaff_x19 = param_1 + 0xa8;
      __ZNSt3__15mutex6unlockEv();
    }
    else {
      unaff_x19 = param_1 + 0xa8;
      __ZNSt3__15mutex6unlockEv();
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (1999999999 < (long)unaff_x19 - *(long *)(param_1 + 0x108)) {
        *(undefined8 *)((long)register0x00000008 + -0x310) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x308) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x300) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x328) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x330) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x318) = 0;
        *(undefined8 *)((long)register0x00000008 + -800) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x338) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x340) = 0;
        __ZNSt3__15mutex4lockEv(param_1 + 0xa8);
        uVar34 = *(undefined8 *)(param_1 + 0xf0);
        uVar33 = *(undefined8 *)(param_1 + 0xe8);
        *(undefined8 *)(param_1 + 0xf0) = 0;
        *(undefined8 *)(param_1 + 0xe8) = 0;
        uVar14 = *(undefined8 *)(param_1 + 0xf8);
        *(undefined8 *)(param_1 + 0xf8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x300) = uVar14;
        uVar22 = *(undefined8 *)(param_1 + 0x80);
        uVar14 = *(undefined8 *)(param_1 + 0x78);
        uVar30 = *(undefined8 *)(param_1 + 0x90);
        uVar29 = *(undefined8 *)(param_1 + 0x88);
        *(undefined8 *)(param_1 + 0x80) = 0;
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0x88) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x338) = uVar22;
        *(undefined8 *)((long)register0x00000008 + -0x340) = uVar14;
        *(undefined8 *)((long)register0x00000008 + -0x328) = uVar30;
        *(undefined8 *)((long)register0x00000008 + -0x330) = uVar29;
        uVar22 = *(undefined8 *)(param_1 + 0xa0);
        uVar14 = *(undefined8 *)(param_1 + 0x98);
        *(undefined8 *)(param_1 + 0xa0) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x318) = uVar22;
        *(undefined8 *)((long)register0x00000008 + -800) = uVar14;
        *(undefined8 *)((long)register0x00000008 + -0x308) = uVar34;
        *(undefined8 *)((long)register0x00000008 + -0x310) = uVar33;
        puVar15 = param_1 + 0xa8;
        __ZNSt3__15mutex6unlockEv();
        *(undefined8 *)((long)register0x00000008 + -0x348) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x350) = 0;
        puVar10 = (undefined8 *)param_2[0x1d];
        if (puVar10 == (undefined8 *)0x0) {
          unaff_x22 = (long *)0x0;
          if (param_1[0x100] == '\x01') {
            param_1[0x100] = 0;
            if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
              func_0x00010ae06f08(1,2,&UNK_10f632cca,&UNK_10f632d07,0x25,&UNK_10f632d39);
            }
            uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 3000);
            func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x1d0),
                                "lens_string_location_ar_location_cannot_be_determined_title");
            func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x2f8),
                                "lens_string_location_ar_location_cannot_be_determined_desc");
            FUN_10a79ba1c(uVar14,3,(undefined1 *)((long)register0x00000008 + -0x1d0),
                          (undefined1 *)((long)register0x00000008 + -0x2f8));
            if (*(char *)((long)register0x00000008 + -0x2e1) < '\0') {
              __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2f8));
            }
            goto LAB_10a0380ec;
          }
        }
        else {
          lVar21 = puVar10[7];
          *(long *)(param_1 + 0x58) = lVar21;
          if (*(int *)(puVar10 + 0xb) == 2) {
            if (param_1[0x118] == '\x01') {
              lVar21 = *(long *)(param_1 + 0x110);
            }
            else {
              __ZNSt3__16chrono12system_clock3nowEv();
              lVar21 = (long)(((double)(long)puVar15 +
                              (*(double *)(*(long *)(*(long *)(param_1 + 0x38) + 0x850) + 8) +
                              *(double *)(*(long *)(*(long *)(param_1 + 0x38) + 0x850) + 0x18)) *
                              -1000000.0) * 1000.0);
              if ((param_1[0x118] & 1) == 0) {
                param_1[0x118] = 1;
              }
              *(long *)(param_1 + 0x110) = lVar21;
            }
            lVar21 = puVar10[7] + lVar21;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (param_1 + 0x60,puVar10 + 8);
          if ((*(char *)(param_2 + 0x20) == '\x01') && (1 < *(int *)(param_2 + 0x1e) + 1U)) {
            uVar14 = param_2[0x1f];
            uVar22 = 1;
          }
          else {
            uVar14 = 0;
            uVar22 = 0;
          }
          *(long *)((long)register0x00000008 + -0x2f8) = lVar21 / 1000000;
          func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x1d0),
                              (&PTR_DAT_110b9feb8)[*(uint *)(puVar10 + 0xb)]);
          unaff_d8 = *puVar10;
          unaff_d9 = puVar10[1];
          unaff_d10 = puVar10[2];
          unaff_d11 = puVar10[3];
          unaff_d12 = puVar10[4];
          unaff_x22 = (long *)0x88;
          __Znwm();
          unaff_x22[1] = 0;
          unaff_x22[2] = 0;
          plVar18 = unaff_x22 + 3;
          *unaff_x22 = (long)&PTR_FUN_110b9e5c0;
          FUN_10a0503d0(unaff_d8,unaff_d9,unaff_d10,unaff_d11,unaff_d12,plVar18,uVar14,uVar22,
                        (undefined1 *)((long)register0x00000008 + -0x2f8),
                        (undefined1 *)((long)register0x00000008 + -0x1d0));
          plVar20 = *(long **)((long)register0x00000008 + -0x348);
          *(long **)((long)register0x00000008 + -0x350) = plVar18;
          *(long **)((long)register0x00000008 + -0x348) = unaff_x22;
          if (plVar20 != (long *)0x0) {
            plVar18 = plVar20 + 1;
            do {
              lVar21 = *plVar18;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar3) {
                *plVar18 = lVar21 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar21 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
            }
          }
LAB_10a0380ec:
          if (*(char *)((long)register0x00000008 + -0x1b9) < '\0') {
            __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1d0));
          }
        }
        puVar10 = (undefined8 *)&UNK_10f632e2a;
        func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x368));
        if (*(long *)((long)register0x00000008 + -0x318) != 0) {
          unaff_x22 = (long *)((long)register0x00000008 + -0x2f8);
          unaff_x24 = (undefined **)((long)register0x00000008 + -0x1d0);
          puVar23 = *(undefined8 **)((long)register0x00000008 + -0x338);
          puVar15 = *(undefined1 **)((long)register0x00000008 + -800);
          unaff_x25 = &PTR_FUN_110b9e600;
          unaff_x26 = FUN_10a07a7fc;
          unaff_d8 = 0x100000001;
          puVar25 = puVar10;
          do {
            puVar10 = puVar25;
            if (param_2[0x1d] == 0) {
              puVar25 = *(undefined8 **)
                         (puVar23[(ulong)puVar15 >> 7] + ((ulong)puVar15 & 0x7f) * 0x20 + 0x10);
              if (puVar25 == (undefined8 *)0x0 || *(char *)(puVar25 + 8) != '\x02') {
                if (puVar25 != (undefined8 *)0x0 && *(char *)(puVar25 + 8) == '\x01') {
                  (*(code *)*puVar25)((undefined1 *)((long)register0x00000008 + -0x368));
                  puVar10 = puVar25;
                }
              }
              else {
                puVar10 = (undefined8 *)((long)register0x00000008 + -0x368);
                FUN_10a05aad0(puVar25);
              }
            }
            else {
              puVar23 = *(undefined8 **)
                         (puVar23[(ulong)puVar15 >> 7] + ((ulong)puVar15 & 0x7f) * 0x20);
              if (puVar23 == (undefined8 *)0x0 || *(char *)(puVar23 + 8) != '\x02') {
                if (puVar23 != (undefined8 *)0x0 && *(char *)(puVar23 + 8) == '\x01') {
                  pcVar16 = (code *)*puVar23;
                  *(undefined8 *)((long)register0x00000008 + -0x1c8) =
                       *(undefined8 *)((long)register0x00000008 + -0x348);
                  *unaff_x28 = *(undefined8 *)((long)register0x00000008 + -0x350);
                  if (*(long *)((long)register0x00000008 + -0x348) != 0) {
                    plVar18 = (long *)(*(long *)((long)register0x00000008 + -0x348) + 8);
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                      if (bVar3) {
                        *plVar18 = *plVar18 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  (*pcVar16)((undefined1 *)((long)register0x00000008 + -0x1d0));
                  plVar18 = *(long **)((long)register0x00000008 + -0x1c8);
                  puVar10 = puVar23;
                  if (plVar18 != (long *)0x0) {
                    plVar20 = plVar18 + 1;
                    do {
                      lVar21 = *plVar20;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                      if (bVar3) {
                        *plVar20 = lVar21 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
LAB_10a038330:
                    puVar10 = puVar23;
                    if (lVar21 == 0) {
                      (**(code **)(*plVar18 + 0x10))(plVar18);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
                      puVar10 = puVar23;
                    }
                  }
                }
              }
              else {
                puVar8 = puVar23;
                FUN_10a688b40();
                if (puVar8 == (undefined8 *)0x0) {
                  puVar10 = (undefined8 *)0x0;
                  if (puVar25 != (undefined8 *)0x0) {
                    uVar14 = *puVar23;
                    lVar21 = puVar23[1];
                    if (lVar21 != 0) {
                      plVar18 = (long *)(lVar21 + 8);
                      do {
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                        if (bVar3) {
                          *plVar18 = *plVar18 + 1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                    }
                    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x350);
                    plVar18 = *(long **)((long)register0x00000008 + -0x348);
                    *(undefined8 *)((long)register0x00000008 + -0x2e8) = uVar22;
                    *(long **)((long)register0x00000008 + -0x2e0) = plVar18;
                    if (plVar18 == (long *)0x0) {
                      *(undefined ***)((long)register0x00000008 + -0x1c8) = &PTR_FUN_110b9e600;
                      *(undefined8 *)((long)register0x00000008 + -0x1c0) = uVar14;
                      *(undefined8 *)((long)register0x00000008 + -0x2f8) = 0;
                      *(undefined8 *)((long)register0x00000008 + -0x2f0) = 0;
                      *(long *)((long)register0x00000008 + -0x1b8) = lVar21;
                      *(undefined8 *)((long)register0x00000008 + -0x1b0) = uVar22;
                      *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0;
                    }
                    else {
                      plVar20 = plVar18 + 1;
                      do {
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                        if (bVar3) {
                          *plVar20 = *plVar20 + 1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      *(undefined ***)((long)register0x00000008 + -0x1c8) = &PTR_FUN_110b9e600;
                      *(undefined8 *)((long)register0x00000008 + -0x1c0) = uVar14;
                      *(undefined8 *)((long)register0x00000008 + -0x2f8) = 0;
                      *(undefined8 *)((long)register0x00000008 + -0x2f0) = 0;
                      *(long *)((long)register0x00000008 + -0x1b8) = lVar21;
                      *(undefined8 *)((long)register0x00000008 + -0x1b0) = uVar22;
                      *(long **)((long)register0x00000008 + -0x1a8) = plVar18;
                      do {
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                        if (bVar3) {
                          *plVar20 = *plVar20 + 1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                    }
                    *(code **)((long)register0x00000008 + -0x1d0) = FUN_10a07a7fc;
                    puVar23 = (undefined8 *)((long)register0x00000008 + -0x1d0);
                    FUN_10a4634ec(puVar25);
                    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x1c8))
                              ((undefined1 *)((long)register0x00000008 + -0x1c8));
                    if (plVar18 != (long *)0x0) {
                      plVar20 = plVar18 + 1;
                      do {
                        lVar21 = *plVar20;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                        if (bVar3) {
                          *plVar20 = lVar21 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (lVar21 == 0) {
                        (**(code **)(*plVar18 + 0x10))(plVar18);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
                      }
                    }
                    plVar18 = *(long **)((long)register0x00000008 + -0x2f0);
                    puVar10 = puVar23;
                    if (plVar18 != (long *)0x0) {
                      plVar20 = plVar18 + 1;
                      do {
                        lVar21 = *plVar20;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                        if (bVar3) {
                          *plVar20 = lVar21 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      goto LAB_10a038330;
                    }
                  }
                }
                else {
                  *puVar8 = CONCAT44((int)((ulong)*puVar8 >> 0x20) + 1,(int)*puVar8 + 1);
                  puVar10 = (undefined8 *)((long)register0x00000008 + -0x350);
                  FUN_10a07a5d0(*puVar23);
                  iVar4 = *(int *)((long)puVar8 + 4) + -1;
                  *(int *)((long)puVar8 + 4) = iVar4;
                  if (iVar4 == 0) {
                    *(undefined4 *)puVar8 = 0;
                  }
                }
              }
            }
            unaff_x27 = *(undefined ***)((long)register0x00000008 + -0x318);
            if (unaff_x27 == (undefined **)0x0) {
                    /* WARNING: Does not return */
              pcVar16 = (code *)SoftwareBreakpoint(1,0x10a0384f4);
              (*pcVar16)();
            }
            puVar25 = *(undefined8 **)((long)register0x00000008 + -0x338);
            unaff_x23 = *(undefined1 **)((long)register0x00000008 + -800);
            lVar21 = puVar25[(ulong)unaff_x23 >> 7] + ((ulong)unaff_x23 & 0x7f) * 0x20;
            func_0x00010a07a8a8(lVar21 + 0x10);
            FUN_10a04f83c(lVar21);
            puVar15 = unaff_x23 + 1;
            *(undefined1 **)((long)register0x00000008 + -800) = puVar15;
            *(long *)((long)register0x00000008 + -0x318) = (long)unaff_x27 + -1;
            puVar23 = puVar25;
            if ((undefined1 *)0xff < puVar15) {
              puVar23 = puVar25 + 1;
              __ZdlPv(*puVar25);
              puVar15 = unaff_x23 + -0x7f;
              *(undefined8 **)((long)register0x00000008 + -0x338) = puVar23;
              *(undefined1 **)((long)register0x00000008 + -800) = puVar15;
            }
            puVar25 = puVar10;
          } while ((long)unaff_x27 + -1 != 0);
        }
        ppuVar9 = *(undefined ***)((long)register0x00000008 + -0x310);
        unaff_x21 = *(undefined ***)((long)register0x00000008 + -0x308);
        if (ppuVar9 != unaff_x21) {
          unaff_x22 = (long *)((long)register0x00000008 + -0x1d0);
          unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x2f8);
          unaff_x24 = &PTR_FUN_110b99e70;
          do {
            if (param_2[0x1d] == 0) {
              FUN_10a002a94((undefined1 *)((long)register0x00000008 + -0x2f8),
                            (undefined1 *)((long)register0x00000008 + -0x368));
              *(undefined ***)((long)register0x00000008 + -0x2f8) = &PTR_FUN_110b99e70;
              __ZNSt13runtime_errorC2ERKS_
                        ((undefined1 *)((long)register0x00000008 + -0x1d0),
                         (undefined1 *)((long)register0x00000008 + -0x2f8));
              _memcpy((undefined1 *)((long)register0x00000008 + -0x1c0),
                      (undefined1 *)((long)register0x00000008 + -0x2e8),0x110);
              *(undefined ***)((long)register0x00000008 + -0x1d0) = &PTR_FUN_110b99e70;
              FUN_10a05bde0((undefined1 *)((long)register0x00000008 + -0x1d8),
                            (undefined1 *)((long)register0x00000008 + -0x1d0));
              __ZNSt13runtime_errorD2Ev((undefined1 *)((long)register0x00000008 + -0x1d0));
              puVar10 = (undefined8 *)((long)register0x00000008 + -0x1d8);
              func_0x000109d1b350(*ppuVar9);
              __ZNSt13exception_ptrD1Ev((undefined1 *)((long)register0x00000008 + -0x1d8));
              __ZNSt13runtime_errorD2Ev((undefined1 *)((long)register0x00000008 + -0x2f8));
            }
            else {
              puVar10 = (undefined8 *)((long)register0x00000008 + -0x350);
              FUN_10a079848(*ppuVar9);
            }
            ppuVar9 = ppuVar9 + 1;
          } while (ppuVar9 != unaff_x21);
        }
        if (*(char *)((long)register0x00000008 + -0x351) < '\0') {
          __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x368));
        }
        plVar18 = *(long **)((long)register0x00000008 + -0x348);
        if (plVar18 != (long *)0x0) {
          plVar20 = plVar18 + 1;
          do {
            lVar21 = *plVar20;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar3) {
              *plVar20 = lVar21 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar21 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
          }
        }
        FUN_10a04f6ac((undefined1 *)((long)register0x00000008 + -0x340));
        unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x310);
        FUN_10a04f638();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xa8)) {
      return;
    }
    ___stack_chk_fail();
    param_2 = puVar10;
    if (*(char *)((long)register0x00000008 + -0x2e1) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2f8));
      param_2 = puVar10;
    }
    if (*(char *)((long)register0x00000008 + -0x1b9) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x1d0));
    }
    FUN_10a07a538((undefined1 *)((long)register0x00000008 + -0x350));
    FUN_10a04f6ac((undefined1 *)((long)register0x00000008 + -0x340));
    FUN_10a04f638((undefined1 *)((long)register0x00000008 + -0x310));
    unaff_x30 = FUN_10a038674;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x380);
    unaff_x20 = ppuVar9;
  } while( true );
}



/* Entry: 10a03867c; end: 10a03878b;  */

void FUN_10a03867c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plStack_40;
  long lStack_38;
  
  FUN_10a03878c(&plStack_40);
  __ZNSt3__15mutex4lockEv(param_2 + 0xc0);
  FUN_10a0387fc(param_2 + 0x100,&lStack_38);
  __ZNSt3__15mutex6unlockEv(param_2 + 0xc0);
  if (*(long *)(param_2 + 0x120) == 0x7fffffffffffffff) {
    FUN_10a03773c(param_2);
  }
  *param_1 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lStack_38 != 0) {
    func_0x0001092b4274(&lStack_38);
  }
  if (plStack_40 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_40 + 1);
    do {
      uVar5 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar5 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar5 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plStack_40 + 8))();
      }
    }
  }
  return;
}



/* Entry: 10a03878c; end: 10a0387fb;  */

void FUN_10a03878c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  *(undefined2 *)(puVar1 + 3) = 4;
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_FUN_110b9f028;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a0387fc; end: 10a03893f;  */

void FUN_10a0387fc(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[1];
  if (plVar4 < (long *)param_1[2]) {
    lVar5 = *param_2;
    *plVar4 = lVar5;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 0x200000000;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar4 = plVar4 + 1;
  }
  else {
    plVar4 = param_1;
    FUN_10a04f894();
  }
  param_1[1] = (long)plVar4;
  return;
}



/* Entry: 10a038940; end: 10a038adf;  */

void FUN_10a038940(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong *puVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  
  dVar9 = *(double *)(param_2 + 0xc0);
  if ((dVar9 == 0.0) || (dVar8 = *(double *)(param_2 + 0xd0), dVar8 == 0.0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      puVar2 = (ulong *)(*(ulong *)(param_2 + 0x78) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        puVar2 = (ulong *)*puVar2;
      }
      func_0x00010ae06f08(1,4,&UNK_10f632cca,&UNK_10f632f8e,0x136,&UNK_10f632ffc,in_x6,in_x7,puVar2)
      ;
      dVar8 = *(double *)(param_2 + 0xd0);
      dVar9 = *(double *)(param_2 + 0xc0);
    }
    puVar1 = (undefined8 *)0x88;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_110b9e5c0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[3] = &PTR_DAT_110b9f078;
    *(undefined1 *)(puVar1 + 6) = 0;
    puVar1[7] = 0;
    puVar1[8] = dVar8;
    puVar1[9] = dVar9;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x10] = 0;
    *param_1 = puVar1 + 3;
    param_1[1] = puVar1;
    if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
      lVar3 = *(long *)(param_2 + 0xb0);
      dVar4 = 180.0;
      dVar9 = (dVar8 * 3.141592653589793) / 180.0;
      ___sincos_stret();
      dVar8 = dVar9 * dVar9 * -0.006694379990141316 + 1.0;
      dVar5 = SQRT(dVar8);
      _pow(dVar8,0x3ff8000000000000);
      dVar6 = *(double *)(lVar3 + 0x10);
      dVar9 = *(double *)(lVar3 + 0x20);
      auVar7 = NEON_fmov(0x3fe0000000000000,8);
      puVar1[0xc] = (19903369.647886984 / (dVar8 * 180.0)) *
                    (*(double *)(lVar3 + 0x28) - *(double *)(lVar3 + 0x18)) * auVar7._8_8_;
      puVar1[0xb] = ((dVar4 * 20037508.342789244) / (dVar5 * 180.0)) *
                    (dVar9 - dVar6) * auVar7._0_8_;
    }
  }
  return;
}



/* Entry: 10a038ae0; end: 10a038be7;  */

void FUN_10a038ae0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_80;
  double dStack_78;
  double dStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_39;
  undefined1 *puStack_38;
  
  uStack_58 = *(undefined8 *)(param_2 + 0x30);
  uStack_60 = *(undefined8 *)(param_2 + 0x28);
  uStack_50 = *(undefined8 *)(param_2 + 0x38);
  if (*(long *)(param_1 + 0x10) == 0) {
    *(undefined8 *)(param_1 + 0x20) = uStack_58;
    *(undefined8 *)(param_1 + 0x18) = uStack_60;
    *(undefined8 *)(param_1 + 0x28) = uStack_50;
  }
  func_0x0001094a293c(&dStack_78,&uStack_60,param_1 + 0x18);
  uStack_80 = CONCAT44((int)(dStack_70 / *(double *)(param_1 + 0x30)),
                       (int)(dStack_78 / *(double *)(param_1 + 0x30)));
  lVar1 = param_1;
  FUN_10a07a940(param_1,&uStack_80);
  if ((param_1 + 8 == lVar1) || (*(double *)(param_2 + 0x40) < *(double *)(lVar1 + 0x68))) {
    puStack_38 = (undefined1 *)&uStack_80;
    FUN_10a07a9f4(param_1,&uStack_80,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
    func_0x00010a04a7fc(param_1 + 0x30,param_2 + 8);
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    uVar6 = *(undefined8 *)(param_2 + 0x50);
    uVar5 = *(undefined8 *)(param_2 + 0x48);
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x60) = uVar4;
    *(undefined8 *)(param_1 + 0x78) = uVar6;
    *(undefined8 *)(param_1 + 0x70) = uVar5;
    *(undefined8 *)(param_1 + 0x48) = uVar8;
    *(undefined8 *)(param_1 + 0x40) = uVar7;
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_1 + 0x80,param_2 + 0x58);
  }
  return;
}



/* Entry: 10a038be8; end: 10a038c97;  */

void FUN_10a038be8(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a038c98(param_1,param_2[2]);
  plVar3 = (long *)*param_2;
  while (plVar3 != param_2 + 1) {
    FUN_10a038d7c(param_1,plVar3 + 5);
    plVar1 = (long *)plVar3[1];
    plVar4 = plVar3;
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar4[2];
        bVar2 = (long *)*plVar3 != plVar4;
        plVar4 = plVar3;
      } while (bVar2);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a038c98; end: 10a038d7b;  */

void FUN_10a038c98(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar3 = *param_1;
  if ((ulong)((param_1[2] - lVar3 >> 4) * 0x6db6db6db6db6db7) < param_2) {
    if (0x249249249249249 < param_2) {
      FUN_10a04ffd4();
      FUN_10a0501b4(&plStack_58);
      __Unwind_Resume();
      uVar1 = param_1[1];
      if (uVar1 < (ulong)param_1[2]) {
        FUN_10a0500e4(uVar1);
        plVar2 = (long *)(uVar1 + 0x70);
        param_1[1] = (long)plVar2;
      }
      else {
        plVar2 = param_1;
        FUN_10a050204();
      }
      param_1[1] = (long)plVar2;
      return;
    }
    lVar4 = param_1[1];
    plVar2 = param_1;
    plStack_38 = param_1;
    FUN_10a04ffe8();
    lVar3 = (long)plVar2 + (lVar4 - lVar3);
    lVar4 = lVar3 + (*param_1 - param_1[1]);
    plStack_58 = plVar2;
    plStack_50 = (long *)lVar3;
    plStack_48 = (long *)lVar3;
    plStack_40 = plVar2 + param_2 * 0xe;
    FUN_10a050030(param_1,*param_1,param_1[1],lVar4);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar4;
    param_1[1] = lVar3;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + param_2 * 0xe);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    FUN_10a0501b4(&plStack_58);
  }
  return;
}



/* Entry: 10a038d7c; end: 10a038dcb;  */

void FUN_10a038d7c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10a0500e4(uVar1);
    lVar2 = uVar1 + 0x70;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    lVar2 = param_1;
    FUN_10a050204();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 10a038dcc; end: 10a039077;  */

/* WARNING: Removing unreachable block (ram,0x00010a038ee0) */
/* WARNING: Removing unreachable block (ram,0x00010a039010) */

void FUN_10a038dcc(undefined1 *param_1,long *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dStack_150;
  double dStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  if (*param_2 == param_2[1]) {
    *param_1 = 0;
    param_1[0x70] = 0;
  }
  else {
    func_0x000107c2b054(&uStack_c0,&DAT_10f36f61e);
    lVar1 = *param_2;
    lVar2 = param_2[1];
    if (lVar1 == lVar2) {
      dVar18 = 0.0;
      dVar15 = 0.0;
      dVar13 = 0.0;
      dVar17 = 0.0;
      dVar16 = 0.0;
      dVar14 = 0.0;
      dVar12 = 0.0;
      dVar11 = 0.0;
      lVar2 = lVar1;
    }
    else {
      dVar11 = 0.0;
      auVar4 = NEON_fmov(0x3ff0000000000000,8);
      dVar12 = 0.0;
      dVar7 = 1.79769313486232e+308;
      dVar14 = 0.0;
      dVar16 = 0.0;
      dVar17 = 0.0;
      dVar13 = 0.0;
      dVar15 = 0.0;
      dVar18 = 0.0;
      do {
        dVar9 = (double)(((ulong)*(double *)(lVar1 + 0x40) ^ 0x3cb0000000000000) &
                         ~-(ulong)(*(double *)(lVar1 + 0x40) < 2.220446049250313e-16) ^
                        0x3cb0000000000000);
        dVar10 = (double)((*(ulong *)(lVar1 + 0x48) ^ 0x3cb0000000000000) &
                          ~-(ulong)(*(double *)(lVar1 + 0x48) < 2.220446049250313e-16) ^
                         0x3cb0000000000000);
        dStack_150 = auVar4._0_8_;
        dStack_148 = auVar4._8_8_;
        if (param_3 == 0) {
          dStack_150 = auVar4._0_8_ / (dVar9 * dVar9);
          dStack_148 = auVar4._8_8_ / (dVar10 * dVar10);
        }
        dVar8 = *(double *)(lVar1 + 0x28);
        dVar5 = *(double *)(lVar1 + 0x30);
        dVar6 = *(double *)(lVar1 + 0x38);
        lVar3 = *(long *)(lVar1 + 0x50);
        if (dVar9 < dVar7) {
          func_0x000107c2b054(&uStack_138,&DAT_10f36f61e);
          uStack_b8 = uStack_130;
          uStack_c0 = uStack_138;
          uStack_b0 = uStack_128;
          dVar7 = dVar9;
        }
        dVar11 = dVar11 + dStack_150 * dVar8;
        dVar12 = dVar12 + dStack_150 * dVar5;
        dVar14 = dVar14 + dVar6 * dStack_148;
        dVar13 = dVar13 + dStack_150;
        dVar15 = dVar15 + dStack_148;
        dVar16 = dVar16 + dVar9;
        dVar17 = dVar17 + dVar10;
        dVar18 = dVar18 + (double)(lVar3 / 1000);
        lVar1 = lVar1 + 0x70;
      } while (lVar1 != lVar2);
      lVar1 = param_2[1];
      lVar2 = *param_2;
    }
    dVar7 = (double)(ulong)((lVar1 - lVar2 >> 4) * 0x6db6db6db6db6db7);
    lVar1 = (long)(dVar18 / dVar7);
    __ZNSt3__16chrono12system_clock11from_time_tEl();
    lStack_c8 = lVar1 / 1000;
    FUN_10a0503d0(dVar11 / dVar13,dVar12 / dVar13,dVar14 / dVar15,dVar16 / dVar7,dVar17 / dVar7,
                  &uStack_138,0,0,&lStack_c8,&uStack_c0);
    FUN_10a050480(param_1,&uStack_138);
    func_0x00010a052168(&uStack_138);
  }
  return;
}



/* Entry: 10a039078; end: 10a0390ef;  */

undefined1  [16] FUN_10a039078(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 9;
  auVar1._0_8_ = &UNK_10f63446b;
  return auVar1;
}



/* Entry: 10a0390f0; end: 10a0393a7;  */

void FUN_10a0390f0(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f63446b,9);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110b9c8c8;
  pppuVar2 = (undefined8 ***)&UNK_10f630f1d;
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
    ppuStack_b0 = &PTR_DAT_110b9c8c8;
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
    FUN_10a0605c4(param_1,&DAT_10f437164,FUN_10a07ab70,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f3005c3,FUN_10a07ac94,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f2dd3dd,FUN_10a07b2c8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"id",FUN_10a07b514,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f63446b,9);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a03938c);
  (*pcVar6)();
}



/* Entry: 10a0393a8; end: 10a03959f;  */

void FUN_10a0393a8(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f633038;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_4c._4_4_,
                uStack_78 & 0xffffffff,uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f30064f;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0395a0(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f633045;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0395a0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f601d63;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0395a0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f633050;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0395a0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f3506e9;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0395a0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f63305a;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0395a0();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a0395a0; end: 10a039647;  */

undefined8 * FUN_10a0395a0(undefined8 *param_1,undefined8 *param_2,byte param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a039648);
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



/* Entry: 10a039648; end: 10a03970f;  */

bool FUN_10a039648(double param_1,double param_2,double param_3,double param_4,double *param_5,
                  ulong param_6)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  double dVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (param_6 < 2) {
    bVar1 = false;
  }
  else {
    lVar2 = param_6 - 1;
    bVar1 = true;
    uVar3 = 2;
    do {
      uStack_78 = CONCAT44((float)param_5[3],(float)param_5[2]);
      uStack_80 = CONCAT44((float)param_5[1],(float)*param_5);
      dVar4 = (double)(ulong)(uint)(float)param_1;
      FUN_10a039710((ulong)(uint)(float)param_1,(float)param_2,&uStack_80);
      if (param_3 * (dVar4 + -0.5) <= param_4) {
        return bVar1;
      }
      bVar1 = uVar3 < param_6;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + -1;
      param_5 = param_5 + 2;
    } while (lVar2 != 0);
  }
  return bVar1;
}



/* Entry: 10a039710; end: 10a039813;  */

double FUN_10a039710(float param_1,float param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = (float)*param_3;
  fVar4 = (float)((ulong)*param_3 >> 0x20);
  fVar5 = (float)param_3[1] - fVar3;
  fVar6 = (float)((ulong)param_3[1] >> 0x20) - fVar4;
  fVar7 = fVar5 * fVar5 + fVar6 * fVar6;
  if (1.1920929e-07 <= fVar7) {
    fVar7 = ((param_2 - fVar4) * fVar6 + fVar5 * (param_1 - fVar3)) / fVar7;
    fVar1 = 1.0;
    if (fVar7 <= 1.0) {
      fVar1 = fVar7;
    }
    fVar2 = 0.0;
    if (0.0 <= fVar7) {
      fVar2 = fVar1;
    }
    param_1 = (fVar3 + fVar5 * fVar2) - param_1;
    param_2 = (fVar4 + fVar6 * fVar2) - param_2;
  }
  else {
    param_1 = param_1 - fVar3;
    param_2 = param_2 - fVar4;
  }
  return (double)SQRT(param_1 * param_1 + param_2 * param_2);
}



/* Entry: 10a039814; end: 10a039c07;  */

void FUN_10a039814(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *extraout_x8;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000109887da8(appuStack_c8,&UNK_10f633082,10);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110b9c938;
  pppuVar2 = (undefined8 ***)&UNK_10f630f1d;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0x13c;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110b9c938;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    ppuStack_98 = (undefined **)0x0;
    pcStack_90 = (code *)CONCAT71(pcStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a039bdc;
    FUN_10a054dac(param_1,&UNK_10f633067,FUN_10a07b914,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a039bdc;
    FUN_10a054dac(param_1,&UNK_10f633070,FUN_10a07c084,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&DAT_10f6846a0,FUN_10a07d8b8,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    ppuStack_98 = *(undefined ***)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar10 = *(ulong *)(lVar3 + -0x48);
    uVar11 = *(ulong *)(lVar3 + -0x50);
    pcStack_90 = *(code **)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar12 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar12;
    uStack_4c = (undefined4)(uVar12 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar11 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar10 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar11;
    uStack_80 = uVar10;
    FUN_10a0051e8(param_1,uVar11 & 0xffffffff,uVar4,uVar12 & 0xffffffff,uVar10 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f633082,10);
      FUN_10a05431c(param_1);
    }
    ppuStack_98 = (undefined **)0x0;
    pcStack_90 = (code *)0x0;
    ppuStack_a0 = (undefined8 **)&UNK_10f633082;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x200000019;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_a0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,0x19,1,0x13c,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      ppuStack_a0 = (undefined8 **)FUN_10a07da58;
      ppuStack_98 = &PTR_FUN_110b9e758;
      pcStack_90 = FUN_10a039c08;
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a039bdc;
      FUN_10a0544d8(param_1,&DAT_10f68efec,&ppuStack_a0,0,*(long *)(param_1 + 0x18) + -8);
      (*(code *)*ppuStack_98)(&ppuStack_98);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,0x19,1,0x13c,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a039bdc;
      FUN_10a054dac(param_1,&UNK_10f63308d,FUN_10a07dbd8,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    if (cStack_b1 < '\0') {
      __ZdlPv(appuStack_c8[0]);
    }
    __Unwind_Resume();
    puVar8 = (undefined8 *)0x48;
    __Znwm();
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = &PTR_DAT_110b9c8f0;
    *puVar8 = &PTR_DAT_110b9e830;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = param_1;
    puVar9 = (undefined8 *)0x98;
    __Znwm();
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = &PTR_FUN_110b9a070;
    puVar9[0xd] = 0;
    puVar9[0xc] = 0;
    puVar9[0xf] = 0;
    puVar9[0xe] = 0;
    puVar9[0x11] = 0;
    puVar9[0x10] = 0;
    puVar9[0x12] = 0;
    puVar9[3] = &PTR_FUN_110b9a0c0;
    puVar9[9] = 0;
    puVar9[8] = 0;
    puVar9[0xb] = 0;
    puVar9[10] = 0;
    *(undefined4 *)(puVar9 + 10) = 0x3f800000;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[0xb] = FUN_10a004c4c;
    puVar9[0xc] = &PTR_DAT_110ae9180;
    puVar8[7] = puVar9 + 3;
    puVar8[8] = puVar9;
    *extraout_x8 = puVar8 + 3;
    extraout_x8[1] = puVar8;
    return;
  }
LAB_10a039bdc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a039be0);
  (*pcVar6)();
}



/* Entry: 10a039c08; end: 10a039cff;  */

void FUN_10a039c08(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = &PTR_DAT_110b9c8f0;
  *puVar1 = &PTR_DAT_110b9e830;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = param_2;
  puVar2 = (undefined8 *)0x98;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110b9a070;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[0x12] = 0;
  puVar2[3] = &PTR_FUN_110b9a0c0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  *(undefined4 *)(puVar2 + 10) = 0x3f800000;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[0xb] = FUN_10a004c4c;
  puVar2[0xc] = &PTR_DAT_110ae9180;
  puVar1[7] = puVar2 + 3;
  puVar1[8] = puVar2;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a039d00; end: 10a039d7b;  */

ulong * FUN_10a039d00(ulong *param_1,int param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  
  if (param_2 - 1U < 9) {
    puVar5 = (ulong *)(&PTR_DAT_110b9fed8)[(ulong)(param_2 - 1U) & 0xff];
  }
  else {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f6344ab,&UNK_10f6344e7,0x26,&UNK_10f63455b);
    }
    puVar5 = (ulong *)&UNK_10f630f1d;
  }
  puVar2 = puVar5;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar2) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar2 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar2 != 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar4;
        puVar4[1] = 0x434948504152475f;
        *puVar4 = 0x45524f43534e454c;
        puVar4[3] = 0x525f595a414c5f54;
        puVar4[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar4 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar5 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar5;
      }
    }
    return puVar2;
  }
  if (puVar2 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar2;
    puVar3 = param_1;
    if (puVar2 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar2 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar2 | 7) + 1);
    }
    puVar3 = puVar1;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar2;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,puVar5,puVar2);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar3 + (long)puVar2) = 0;
  return param_1;
}



/* Entry: 10a039d7c; end: 10a039e43;  */

undefined8 FUN_10a039d7c(long param_1,ulong param_2,byte param_3)

{
  undefined *puVar1;
  
  if (ABS(*(double *)(param_1 + 0x20)) <= 180.0) {
    if (ABS(*(double *)(param_1 + 0x28)) <= 90.0) {
      if (*(double *)(param_1 + 0x30) <= 0.0) {
        puVar1 = &UNK_10f634573;
      }
      else if (*(char *)(param_1 + 0x38) == '\0') {
        puVar1 = &UNK_10f634584;
      }
      else {
        if (-1 < (char)param_3) {
          param_2 = (ulong)param_3;
        }
        if (param_2 != 0) {
          return 1;
        }
        puVar1 = &UNK_10f634599;
      }
    }
    else {
      puVar1 = &UNK_10f6331c9;
    }
  }
  else {
    puVar1 = &UNK_10f6331b5;
  }
  func_0x00010ae06f08(1,0x14,&UNK_10f630f1d,&UNK_10f630f1d,0xffffffff,puVar1);
  return 0;
}



/* Entry: 10a039e44; end: 10a03ae7b;  */

/* WARNING: Removing unreachable block (ram,0x00010a03a538) */
/* WARNING: Removing unreachable block (ram,0x00010a039f50) */
/* WARNING: Removing unreachable block (ram,0x00010a03a6c4) */
/* WARNING: Removing unreachable block (ram,0x00010a03a448) */
/* WARNING: Removing unreachable block (ram,0x00010a03a7a8) */
/* WARNING: Removing unreachable block (ram,0x00010a03a82c) */
/* WARNING: Removing unreachable block (ram,0x00010a03a8b0) */

void FUN_10a039e44(long *param_1,ulong *param_2,ulong *param_3,long param_4,ulong *param_5)

{
  code *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 uVar7;
  char cVar8;
  bool bVar9;
  ulong *puVar10;
  code *pcVar11;
  ulong *puVar12;
  long *plVar13;
  long *plVar14;
  float *pfVar15;
  ulong *puVar16;
  long *plVar17;
  char *pcVar18;
  code **ppcVar19;
  undefined **ppuVar20;
  long *plVar21;
  ulong uVar22;
  int *piVar23;
  undefined8 *puVar24;
  long lVar25;
  int iVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  ulong uVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  double dVar35;
  double unaff_d11;
  code *unaff_d12;
  long *unaff_d13;
  ulong *puStack_220;
  ulong *puStack_218;
  long lStack_210;
  ulong *puStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  ulong *puStack_1d8;
  ulong *puStack_1d0;
  ulong *puStack_1c8;
  ulong *puStack_1c0;
  undefined8 uStack_1b8;
  ulong *puStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined1 uStack_190;
  undefined **ppuStack_188;
  undefined1 uStack_180;
  code *pcStack_178;
  undefined1 uStack_170;
  code *pcStack_168;
  undefined1 uStack_160;
  code *pcStack_158;
  ulong uStack_150;
  code *pcStack_148;
  code *pcStack_140;
  long *plStack_138;
  undefined8 *puStack_130;
  ulong *puStack_100;
  long *plStack_f8;
  ulong *puStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong *puStack_d0;
  ulong *puStack_c8;
  ulong *puStack_c0;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar21 = param_1 + 0xc;
  if (*plVar21 == 0) {
    lVar25 = param_1[0xe];
    puVar12 = (ulong *)0x28;
    __Znwm();
    puStack_f0 = (ulong *)0x8000000000000028;
    plStack_f8 = (long *)0x24;
    *(undefined4 *)(puVar12 + 4) = 0x34323566;
    puVar12[1] = 0x39342d636366322d;
    *puVar12 = 0x3263373764343265;
    puVar12[3] = 0x6263643962313861;
    puVar12[2] = 0x2d383537392d3734;
    *(undefined1 *)((long)puVar12 + 0x24) = 0;
    puStack_1c8 = (ulong *)CONCAT44(puStack_1c8._4_4_,1);
    puStack_100 = puVar12;
    FUN_10a03d494(&pcStack_140,lVar25,&puStack_100,&puStack_1c8);
    FUN_10a03d558(plVar21,&pcStack_140);
    plVar13 = plStack_138;
    if (plStack_138 != (long *)0x0) {
      plVar14 = plStack_138 + 1;
      do {
        lVar25 = *plVar14;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar9) {
          *plVar14 = lVar25 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plStack_138 + 0x10))(plStack_138);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
  }
  plVar13 = *(long **)(*(long *)(param_1[0xe] + 0x100) + 0x1c8);
  (**(code **)(*plVar13 + 0xb0))();
  plStack_1a0 = (long *)0x0;
  plStack_198 = (long *)0x0;
  plVar14 = (long *)plVar13[1];
  if (((plVar14 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_198 = plVar14, plVar14 == (long *)0x0)) ||
     (plStack_1a0 = (long *)*plVar13, plStack_1a0 == (long *)0x0)) {
    puVar12 = (ulong *)0x18;
    __Znwm();
    puVar12[2] = 0;
    *puVar12 = (ulong)&PTR_DAT_1107eaf18;
    puVar12[1] = 0;
    plVar13 = (long *)0x28;
    puStack_1b0 = puVar12;
    __Znwm();
    *plVar13 = (long)&PTR_FUN_110b9e3b8;
    plVar13[1] = 0;
    plVar13[2] = 0;
    plVar13[3] = (long)puVar12;
    plVar13[4] = (long)&UNK_104c2f000;
    plStack_1a8 = plVar13;
  }
  else {
    (**(code **)(*plStack_1a0 + 0x10))(&puStack_1b0);
    if (puStack_1b0 == (ulong *)0x0) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f6332f0,&UNK_10f63332c,0x194,&UNK_10f6333e8);
      }
      (*(code *)*param_5)(param_5);
      goto LAB_10a03aa54;
    }
  }
  puStack_1c8 = (ulong *)0x0;
  puStack_1c0 = (ulong *)0x0;
  uStack_1b8 = 0;
  uVar22 = *param_3;
  unaff_d12 = *(code **)(uVar22 + 0x20);
  unaff_d13 = *(long **)(uVar22 + 0x28);
  unaff_d11 = *(double *)(uVar22 + 0x30);
  puVar12 = (ulong *)0x1137e93b8;
  puStack_220 = param_5;
  puStack_218 = param_3;
  lStack_210 = param_4;
  puStack_200 = param_2;
  if ((bRam00000001137e9338 & 1) == 0) goto LAB_10a03ab2c;
  do {
    dVar35 = ((double)unaff_d13 * 3.141592653589793) / 180.0;
    plVar13 = (long *)(long)((((double)unaff_d12 + 180.0) * 65536.0) / 360.0);
    dVar28 = dVar35;
    _tan();
    _cos();
    dVar28 = dVar28 + 1.0 / dVar35;
    _log();
    uVar32 = 0x3fe0000000000000;
    dVar28 = (1.0 - dVar28 / 3.141592653589793) * 65536.0 * 0.5;
    iVar26 = (int)dVar28;
    puStack_100 = (ulong *)0x10;
    puStack_f0 = (ulong *)(long)iVar26;
    pcStack_140 = unaff_d12;
    plStack_138 = unaff_d13;
    plStack_f8 = plVar13;
    FUN_10a833d04(&pcStack_140,0x10,0x200);
    piVar23 = (int *)*puVar12;
    piVar6 = (int *)puVar12[1];
    if (piVar23 != piVar6) {
      unaff_d12 = (code *)0x4400000044000000;
      unaff_d13 = (long *)0xbf800000;
      do {
        iVar4 = *piVar23;
        iVar5 = piVar23[1];
        pfVar15 = (float *)0x40;
        __Znwm();
        lVar25 = 0;
        iVar4 = iVar4 + (int)plVar13;
        fVar27 = (float)(iVar4 * 0x200);
        iVar5 = iVar5 + iVar26;
        fVar31 = (float)(iVar5 * 0x200);
        fVar33 = fVar27 + 512.0 + -1.0;
        *pfVar15 = fVar27;
        pfVar15[1] = fVar31;
        fVar34 = fVar31 + 512.0 + -1.0;
        pfVar15[2] = fVar27;
        pfVar15[3] = fVar34;
        pfVar15[4] = fVar27;
        pfVar15[5] = fVar31;
        pfVar15[6] = fVar33;
        pfVar15[7] = fVar31;
        pfVar15[8] = fVar33;
        pfVar15[9] = fVar34;
        pfVar15[10] = fVar33;
        pfVar15[0xb] = fVar31;
        pfVar15[0xc] = fVar27;
        pfVar15[0xd] = fVar34;
        pfVar15[0xe] = fVar33;
        pfVar15[0xf] = fVar34;
        do {
          dVar29 = dVar28;
          FUN_10a039710(dVar28,uVar32,(long)pfVar15 + lVar25);
          if ((dVar35 + dVar35) * 3.141592653589793 * 6378137.0 * 2.9802322387695312e-08 * dVar29 <=
              unaff_d11) {
            __ZdlPv(pfVar15);
            puStack_130 = (undefined8 *)(long)iVar5;
            plStack_138 = (long *)(long)iVar4;
            pcStack_140 = (code *)0x10;
            FUN_10a050be0(&puStack_1c8,&pcStack_140);
            goto LAB_10a03a208;
          }
          lVar25 = lVar25 + 0x10;
        } while (lVar25 != 0x40);
        __ZdlPv(pfVar15);
LAB_10a03a208:
        piVar23 = piVar23 + 2;
      } while (piVar23 != piVar6);
    }
    FUN_10a050be0(&puStack_1c8,&puStack_100);
    param_5 = puStack_1c0;
    puVar12 = puStack_1c8;
    puVar16 = (ulong *)0x138;
    __Znwm();
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = (ulong)&PTR_FUN_110b9e950;
    uVar22 = *puStack_218;
    pcVar11 = (code *)puStack_218[1];
    if (pcVar11 != (code *)0x0) {
      pcVar1 = pcVar11 + 8;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar9) {
          *(long *)pcVar1 = *(long *)pcVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    puStack_c0._0_1_ = 2;
    uStack_150 = uVar22;
    pcStack_148 = pcVar11;
    FUN_10a082210(&puStack_100,lStack_210,*(undefined1 *)(lStack_210 + 0x40));
    puStack_c0 = (ulong *)CONCAT71(puStack_c0._1_7_,*(undefined1 *)(lStack_210 + 0x40));
    pcStack_140 = (code *)*puStack_220;
    (**(code **)(puStack_220[1] + 0x18))(&plStack_138);
    puVar2 = puVar16 + 3;
    if (*(char *)((long)puStack_200 + 0x17) < '\0') {
      func_0x000107c3192c(puVar2,*puStack_200,puStack_200[1]);
    }
    else {
      uVar30 = *puStack_200;
      puVar16[4] = puStack_200[1];
      *puVar2 = uVar30;
      puVar16[5] = puStack_200[2];
    }
    puVar16[6] = uVar22;
    puVar16[7] = (ulong)pcVar11;
    if (pcVar11 != (code *)0x0) {
      pcVar1 = pcVar11 + 8;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar9) {
          *(long *)pcVar1 = *(long *)pcVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    puVar16[8] = 0x32aaaba7;
    puVar16[10] = 0;
    puVar16[9] = 0;
    puVar16[0xc] = 0;
    puVar16[0xb] = 0;
    puVar16[0xe] = 0;
    puVar16[0xd] = 0;
    *(undefined8 *)((long)puVar16 + 0x79) = 0;
    *(undefined8 *)((long)puVar16 + 0x71) = 0;
    *(int *)((long)puVar16 + 0x84) = (int)((long)param_5 - (long)puVar12 >> 3) * -0x55555555;
    *(undefined1 *)(puVar16 + 0x19) = 2;
    FUN_10a082210(puVar16 + 0x11,&puStack_100,(ulong)puStack_c0 & 0xff);
    *(undefined1 *)(puVar16 + 0x19) = puStack_c0._0_1_;
    puVar16[0x1a] = (ulong)pcStack_140;
    (*(code *)plStack_138[3])(puVar16 + 0x1b,&plStack_138);
    puVar16[0x23] = 0;
    puVar16[0x22] = 0;
    puVar16[0x25] = 0;
    puVar16[0x24] = 0;
    *(undefined4 *)(puVar16 + 0x26) = 0x3f800000;
    (*(code *)*plStack_138)(&plStack_138);
    if (2 < ((ulong)puStack_c0 & 0xff)) {
LAB_10a03acb4:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10a03acb8);
      (*pcVar11)();
    }
    (*(code *)(&PTR_DAT_110b9e7a8)[(ulong)puStack_c0 & 0xff])(&puStack_100);
    if (pcVar11 != (code *)0x0) {
      pcVar1 = pcVar11 + 8;
      do {
        lVar25 = *(long *)pcVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar9) {
          *(long *)pcVar1 = lVar25 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*(long *)pcVar11 + 0x10))(pcVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar11);
      }
    }
    puVar10 = puStack_1c0;
    puStack_200 = puStack_1c0;
    puVar12 = puStack_1c8;
    puStack_1d8 = puVar2;
    puStack_1d0 = puVar16;
    if (puStack_1c8 == puStack_1c0) {
LAB_10a03aa18:
      puVar16 = puStack_1d0;
      puVar12 = puStack_1d0 + 1;
      do {
        uVar22 = *puVar12;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar9) {
          *puVar12 = uVar22 - 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (uVar22 == 0) {
        (**(code **)(*puStack_1d0 + 0x10))(puStack_1d0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(puVar16);
      }
    }
    else {
      do {
        FUN_10a82c03c(&puStack_100,puVar12);
        plVar13 = param_1 + 0xf;
        FUN_109ce5028(plVar13,&puStack_100);
        if (plVar13 == (long *)0x0) {
          FUN_10a03d5bc(&puStack_100,param_1[3],param_1[4]);
          plVar13 = plStack_1a8;
          param_5 = puStack_1b0;
          puVar2 = puStack_1d0;
          puVar16 = puStack_1d8;
          puStack_f0 = puStack_1b0;
          plStack_e8 = plStack_1a8;
          if (plStack_1a8 != (long *)0x0) {
            plVar14 = plStack_1a8 + 1;
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar9) {
                *plVar14 = *plVar14 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          uStack_d8 = puVar12[1];
          uStack_e0 = *puVar12;
          puStack_d0 = (ulong *)puVar12[2];
          puStack_c8 = puStack_1d8;
          puStack_c0 = puStack_1d0;
          if (puStack_1d0 != (ulong *)0x0) {
            puVar3 = puStack_1d0 + 1;
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar9) {
                *puVar3 = *puVar3 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          plVar14 = (long *)0x60;
          __Znwm();
          plVar14[1] = 0;
          plVar14[2] = 0;
          *plVar14 = (long)&PTR_FUN_110b9f318;
          plVar14[3] = (long)FUN_10a082324;
          *(undefined1 *)(plVar14 + 0xb) = 3;
          plVar14[4] = (long)&PTR_DAT_110b9e990;
          puVar24 = (undefined8 *)0x48;
          __Znwm();
          puVar24[1] = plStack_f8;
          *puVar24 = puStack_100;
          puStack_100 = (ulong *)0x0;
          plStack_f8 = (long *)0x0;
          puVar24[2] = param_5;
          puVar24[3] = plVar13;
          puStack_f0 = (ulong *)0x0;
          plStack_e8 = (long *)0x0;
          puVar24[5] = uStack_d8;
          puVar24[4] = uStack_e0;
          puVar24[6] = puStack_d0;
          puVar24[7] = puVar16;
          puVar24[8] = puVar2;
          plVar14[5] = (long)puVar24;
          *(undefined1 *)(plVar14 + 0xb) = 1;
          lVar25 = *plVar21;
          plVar13 = (long *)0xb8;
          plStack_1e8 = plVar14 + 3;
          plStack_1e0 = plVar14;
          __Znwm();
          plVar13[1] = 0;
          plVar13[2] = 0;
          *plVar13 = (long)&PTR_FUN_110b9f2c8;
          plVar14 = plVar13 + 3;
          *plVar14 = (long)&PTR_FUN_110c35450;
          plVar13[9] = 0;
          plVar13[8] = 0;
          plVar13[0xb] = 0;
          plVar13[10] = 0;
          plVar13[0xf] = 0;
          plVar13[0xe] = 0;
          plVar13[0x11] = 0;
          plVar13[0x10] = 0;
          plVar13[0x13] = 0;
          plVar13[0x12] = 0;
          plVar17 = plVar13 + 6;
          plVar13[7] = 0;
          *plVar17 = 0;
          plVar13[5] = 0;
          plVar13[4] = 0;
          plVar13[7] = 0;
          plVar13[8] = 0;
          *plVar17 = 0;
          *(undefined1 *)(plVar13 + 9) = 0;
          plVar13[0xd] = 0;
          plVar13[0xc] = 0;
          plVar13[0xe] = 0;
          *(undefined4 *)(plVar13 + 0xf) = 0x3f800000;
          plVar13[0x10] = 0;
          plVar13[0x11] = 0;
          *(undefined1 *)(plVar13 + 0x13) = 0;
          plVar13[0x12] = 0;
          plVar13[0x14] = 0;
          plVar13[0x15] = 0;
          plVar13[0x16] = 0;
          plStack_1f8 = plVar14;
          plStack_1f0 = plVar13;
          func_0x000107c2b054(&puStack_100,&UNK_10f40a5d1);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (plVar17,&puStack_100);
          pcStack_140 = (code *)((ulong)pcStack_140 & 0xffffffffffffff00);
          plStack_138 = (long *)0x0;
          pcStack_148 = (code *)0x0;
          uStack_150._0_1_ = 3;
          pcVar18 = "all";
          func_0x0001094a94ec();
          ppcVar19 = &pcStack_140;
          pcStack_148 = (code *)pcVar18;
          func_0x00010945a80c(ppcVar19,&DAT_10f2c3ed3);
          uVar7 = *(undefined1 *)ppcVar19;
          *(undefined1 *)ppcVar19 = (undefined1)uStack_150;
          uStack_150 = CONCAT71(uStack_150._1_7_,uVar7);
          pcVar11 = ppcVar19[1];
          ppcVar19[1] = pcStack_148;
          pcStack_148 = pcVar11;
          func_0x000109380ffc(&pcStack_148);
          __ZNSt3__19to_stringEi(&puStack_100,(int)*puVar12);
          pcStack_158 = (code *)0x0;
          uStack_160 = 3;
          pcVar11 = (code *)0x18;
          __Znwm();
          *(long **)(pcVar11 + 8) = plStack_f8;
          *(ulong **)pcVar11 = puStack_100;
          *(ulong **)(pcVar11 + 0x10) = puStack_f0;
          plStack_f8 = (long *)0x0;
          puStack_f0 = (ulong *)0x0;
          puStack_100 = (ulong *)0x0;
          ppcVar19 = &pcStack_140;
          pcStack_158 = pcVar11;
          func_0x00010945a80c(ppcVar19,&DAT_10f34b835);
          uVar7 = *(undefined1 *)ppcVar19;
          *(undefined1 *)ppcVar19 = uStack_160;
          pcVar11 = ppcVar19[1];
          uStack_160 = uVar7;
          ppcVar19[1] = pcStack_158;
          pcStack_158 = pcVar11;
          func_0x000109380ffc(&pcStack_158);
          __ZNSt3__19to_stringEi(&puStack_100,(int)puVar12[1]);
          pcStack_168 = (code *)0x0;
          uStack_170 = 3;
          pcVar11 = (code *)0x18;
          __Znwm();
          *(long **)(pcVar11 + 8) = plStack_f8;
          *(ulong **)pcVar11 = puStack_100;
          *(ulong **)(pcVar11 + 0x10) = puStack_f0;
          plStack_f8 = (long *)0x0;
          puStack_f0 = (ulong *)0x0;
          puStack_100 = (ulong *)0x0;
          ppcVar19 = &pcStack_140;
          pcStack_168 = pcVar11;
          func_0x00010945a80c(ppcVar19,&DAT_10f62b0e2);
          uStack_170 = *(undefined1 *)ppcVar19;
          *(undefined1 *)ppcVar19 = 3;
          pcVar11 = ppcVar19[1];
          ppcVar19[1] = pcStack_168;
          pcStack_168 = pcVar11;
          func_0x000109380ffc(&pcStack_168);
          __ZNSt3__19to_stringEi(&puStack_100,(int)puVar12[2]);
          pcStack_178 = (code *)0x0;
          uStack_180 = 3;
          pcVar11 = (code *)0x18;
          __Znwm();
          *(long **)(pcVar11 + 8) = plStack_f8;
          *(ulong **)pcVar11 = puStack_100;
          *(ulong **)(pcVar11 + 0x10) = puStack_f0;
          plStack_f8 = (long *)0x0;
          puStack_f0 = (ulong *)0x0;
          puStack_100 = (ulong *)0x0;
          ppcVar19 = &pcStack_140;
          pcStack_178 = pcVar11;
          func_0x00010945a80c(ppcVar19,"y");
          uStack_180 = *(undefined1 *)ppcVar19;
          *(undefined1 *)ppcVar19 = 3;
          pcVar11 = ppcVar19[1];
          ppcVar19[1] = pcStack_178;
          pcStack_178 = pcVar11;
          func_0x000109380ffc(&pcStack_178);
          ppuStack_188 = (undefined **)0x0;
          uStack_190 = 3;
          ppuVar20 = &PTR_DAT_110b9d940;
          func_0x0001098c7050();
          ppcVar19 = &pcStack_140;
          ppuStack_188 = ppuVar20;
          func_0x00010945a80c(ppcVar19,&UNK_10f634647);
          uStack_190 = *(undefined1 *)ppcVar19;
          *(undefined1 *)ppcVar19 = 3;
          ppuVar20 = (undefined **)ppcVar19[1];
          ppcVar19[1] = (code *)ppuStack_188;
          ppuStack_188 = ppuVar20;
          func_0x000109380ffc(&ppuStack_188);
          FUN_10a050e1c(plVar14,&pcStack_140);
          func_0x000109380ffc(&plStack_138,(ulong)pcStack_140 & 0xff);
          FUN_10a342ec0(lVar25,&plStack_1f8,&plStack_1e8);
          plVar13 = plStack_1f0;
          if (plStack_1f0 != (long *)0x0) {
            plVar14 = plStack_1f0 + 1;
            do {
              lVar25 = *plVar14;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar9) {
                *plVar14 = lVar25 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar25 == 0) {
              (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
            }
          }
          plVar13 = plStack_1e0;
          if (plStack_1e0 != (long *)0x0) {
            plVar14 = plStack_1e0 + 1;
            do {
              lVar25 = *plVar14;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar9) {
                *plVar14 = lVar25 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar25 == 0) {
              (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
            }
          }
        }
        else {
          FUN_10a82c03c(&puStack_100,puVar12);
          plVar13 = param_1 + 0xf;
          FUN_109ce5028(plVar13,&puStack_100);
          if (plVar13 == (long *)0x0) {
            FUN_109ffdddc(&UNK_10f633e07);
            goto LAB_10a03acb4;
          }
          plVar17 = plVar13;
          FUN_109d1a80c();
          plVar14 = plStack_1a8;
          param_5 = puStack_1b0;
          puVar2 = puStack_1d0;
          puVar16 = puStack_1d8;
          puVar24 = (undefined8 *)*plVar17;
          puStack_100 = puStack_1b0;
          plStack_f8 = plStack_1a8;
          if (plStack_1a8 != (long *)0x0) {
            plVar17 = plStack_1a8 + 1;
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar9) {
                *plVar17 = *plVar17 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          puStack_f0 = (ulong *)(plVar13 + 5);
          uStack_e0 = puVar12[1];
          plStack_e8 = (long *)*puVar12;
          uStack_d8 = puVar12[2];
          puStack_d0 = puStack_1d8;
          puStack_c8 = puStack_1d0;
          if (puStack_1d0 != (ulong *)0x0) {
            puVar3 = puStack_1d0 + 1;
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar9) {
                *puVar3 = *puVar3 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          plVar13 = (long *)puVar24[2];
          if (plVar13 == (long *)0x0) {
            plVar13 = (long *)0x50;
            __Znwm();
            *plVar13 = (long)param_5;
            plVar13[1] = (long)plVar14;
            puStack_100 = (ulong *)0x0;
            plStack_f8 = (long *)0x0;
            plVar13[3] = (long)plStack_e8;
            plVar13[2] = (long)puStack_f0;
            plVar13[5] = uStack_d8;
            plVar13[4] = uStack_e0;
            plVar13[6] = (long)puVar16;
            plVar13[7] = (long)puVar2;
            plVar13[9] = 0x10a084240;
            pcStack_140 = FUN_10a0840f8;
            plStack_138 = plVar13;
            puStack_130 = puVar24;
            (**(code **)*puVar24)(puVar24,&pcStack_140);
          }
          else {
            uStack_150 = 0;
            (**(code **)(*plVar13 + 0x28))(plVar13,0,&uStack_150);
            if (uStack_150 != 0) {
              func_0x0001092af97c(&uStack_150);
              goto LAB_10a03acb4;
            }
            plVar17 = (long *)0x58;
            __Znwm();
            *plVar17 = (long)param_5;
            plVar17[1] = (long)plVar14;
            puStack_100 = (ulong *)0x0;
            plStack_f8 = (long *)0x0;
            plVar17[3] = (long)plStack_e8;
            plVar17[2] = (long)puStack_f0;
            plVar17[5] = uStack_d8;
            plVar17[4] = uStack_e0;
            plVar17[6] = (long)puVar16;
            plVar17[7] = (long)puVar2;
            puStack_d0 = (ulong *)0x0;
            puStack_c8 = (ulong *)0x0;
            plVar17[9] = (long)FUN_10a08420c;
            plVar17[10] = (long)plVar13;
            pcStack_140 = (code *)0x10a0840c8;
            plStack_138 = plVar17;
            puStack_130 = puVar24;
            (**(code **)*puVar24)(puVar24,&pcStack_140);
            __ZNSt13exception_ptrD1Ev(&uStack_150);
          }
          uStack_150 = 0;
          __ZNSt13exception_ptrD1Ev(&uStack_150);
        }
        puVar12 = puVar12 + 3;
      } while (puVar12 != puVar10);
      if (puStack_1d0 != (ulong *)0x0) goto LAB_10a03aa18;
    }
    if (puStack_1c8 != (ulong *)0x0) {
      __ZdlPv();
    }
LAB_10a03aa54:
    plVar13 = plStack_1a8;
    if (plStack_1a8 != (long *)0x0) {
      plVar14 = plStack_1a8 + 1;
      do {
        lVar25 = *plVar14;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar9) {
          *plVar14 = lVar25 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    param_1 = plStack_198;
    if (plStack_198 != (long *)0x0) {
      plVar13 = plStack_198 + 1;
      do {
        lVar25 = *plVar13;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar9) {
          *plVar13 = lVar25 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plStack_198 + 0x10))(plStack_198);
        __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      return;
    }
    ___stack_chk_fail();
    puVar12 = param_5;
LAB_10a03ab2c:
    iVar26 = 0x137e9338;
    ___cxa_guard_acquire();
    if (iVar26 != 0) {
      plStack_f8 = (long *)0xffffffff;
      puStack_100 = (ulong *)0xffffffffffffffff;
      plStack_e8 = (long *)0x100000000;
      puStack_f0 = (ulong *)0x1ffffffff;
      uStack_d8 = 1;
      uStack_e0 = 0x100000001;
      puStack_c8 = (ulong *)0xffffffff00000000;
      puStack_d0 = (ulong *)0xffffffff00000001;
      puVar12[1] = 0;
      puVar12[2] = 0;
      *puVar12 = 0;
      FUN_10a050ce8(&puStack_100,&puStack_c0);
      ___cxa_atexit(FUN_10a050bb0,0x1137e93b8,0x100000000);
      ___cxa_guard_release(0x1137e9338);
    }
  } while( true );
}



/* Entry: 10a03ae7c; end: 10a03af07;  */

undefined1  [16] FUN_10a03ae7c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f6345b2;
  return auVar1;
}



/* Entry: 10a03af08; end: 10a03b24f;  */

void FUN_10a03af08(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6345b2,0x11);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110b9c950;
  pppuVar2 = (undefined8 ***)&UNK_10f630f1d;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
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
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110b9c950;
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
    FUN_10a052828(param_1,"start",FUN_10a07f024,FUN_10a07f0e0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"limit",FUN_10a07f29c,FUN_10a07f358);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f632beb,FUN_10a07f448,FUN_10a07f500);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f632be2,FUN_10a07f658,FUN_10a07f710);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"radius",FUN_10a07f7c8,FUN_10a07f880);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f3d02a1,FUN_10a07f938,FUN_10a07f9f4);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6345b2,0x11);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a03b234);
  (*pcVar6)();
}



/* Entry: 10a03b250; end: 10a03b52b;  */

void FUN_10a03b250(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63309b;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x200000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_4c._4_4_,
                uStack_78 & 0xffffffff,uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f317050;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a03b52c(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6330a8;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a03b52c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6330b3;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a03b52c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6330bd;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a03b52c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6330c3;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a03b52c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6330cb;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a03b52c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6330d2;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a03b52c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6330e3;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a03b52c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6330e9;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a03b52c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6330f1;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a03b52c();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a03b52c; end: 10a03b5d3;  */

undefined8 * FUN_10a03b52c(undefined8 *param_1,undefined8 *param_2,byte param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a03b5d4);
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



/* Entry: 10a03b5d4; end: 10a03b6f7;  */

void FUN_10a03b5d4(double param_1,long param_2)

{
  if (0.0 < param_1) {
    *(double *)(param_2 + 0x30) = param_1;
    return;
  }
  FUN_10ae06f30(1,0x14,&UNK_10f630f1d,&UNK_10f630f1d,0xffffffff,&UNK_10f633179,&stack0x00000000);
  return;
}



/* Entry: 10a03b6f8; end: 10a03b827;  */

void FUN_10a03b6f8(undefined8 param_1)

{
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  ppuStack_a0 = (undefined **)0xffffffff00000001;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f630f1d;
  uStack_88 = 0;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_70 = 0xca;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  FUN_10a03b828(param_1,&puStack_a8);
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6331dc;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f630f1d;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xe4;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a07fbd4();
  puStack_b8 = &DAT_10f632be2;
  puStack_c0 = &DAT_10f632beb;
  puStack_b0 = &DAT_10f632cc1;
  puStack_a8 = &UNK_10f6331f5;
  ppuStack_a0 = &puStack_c0;
  uStack_98 = 3;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f630f1d;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xe4;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a07fda4(param_1,&puStack_a8,0);
  FUN_10a080094(param_1);
  return;
}



/* Entry: 10a03b828; end: 10a03b8ff;  */

/* WARNING: Removing unreachable block (ram,0x00010a03b8c0) */

undefined1  [16] FUN_10a03b828(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6345c4,0xf);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a07fad8(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a03b900; end: 10a03b907;  */

void FUN_10a03b900(long param_1,long *param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(*param_2 + 0xa8))(&uStack_38,param_2,&PTR_DAT_110c3fbe8,&UNK_10f68c0c1,0);
  if (*(char *)(param_1 + 0x6f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x60) = uStack_30;
  *(undefined8 *)(param_1 + 0x58) = uStack_38;
  *(undefined8 *)(param_1 + 0x68) = uStack_28;
  return;
}



/* Entry: 10a03b908; end: 10a03bffb;  */

/* WARNING: Removing unreachable block (ram,0x00010a03bdcc) */
/* WARNING: Removing unreachable block (ram,0x00010a03bdd0) */
/* WARNING: Removing unreachable block (ram,0x00010a03bdd8) */
/* WARNING: Removing unreachable block (ram,0x00010a03bde0) */
/* WARNING: Removing unreachable block (ram,0x00010a03bde4) */

undefined *** FUN_10a03b908(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined ***pppuVar5;
  undefined ****ppppuVar6;
  undefined ****ppppuVar7;
  undefined ***pppuVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined ***pppuVar11;
  long lVar12;
  long *plVar13;
  float fVar14;
  undefined ***pppuVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined ***pppuStack_158;
  undefined8 uStack_150;
  undefined4 auStack_148 [2];
  long lStack_140;
  undefined ***pppuStack_110;
  undefined ***pppuStack_108;
  undefined ***pppuStack_100;
  undefined ***pppuStack_f8;
  undefined ***pppuStack_f0;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  undefined ***pppuStack_d8;
  code *pcStack_d0;
  undefined **appuStack_c8 [8];
  undefined ***pppuStack_88;
  undefined ***pppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  uVar17 = (undefined4)((ulong)param_3 >> 0x20);
  uVar16 = (undefined4)param_3;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *(long *)(param_4 + 0xe0);
  plVar4 = (long *)0x320;
  __Znwm();
  plVar13 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar13 = 0;
  pppuVar5 = (undefined ***)(plVar4 + 3);
  *plVar4 = (long)&PTR_FUN_110b9e8d0;
  plVar4[0x60] = (long)&PTR_FUN_110c383b8;
  *(undefined2 *)(plVar4 + 99) = 0x100;
  plVar4[0x62] = 0;
  plVar4[0x61] = 0;
  ppuVar10 = &PTR_PTR_110b9ef58;
  FUN_10a080194(pppuVar5,&PTR_PTR_110b9ef58,lVar12);
  plVar4[3] = (long)&PTR_DAT_110b9ecd0;
  plVar4[5] = (long)&PTR_FUN_110b9ee40;
  plVar4[8] = (long)&PTR_FUN_110b9ee70;
  plVar4[0x60] = (long)&PTR_FUN_110b9ef18;
  plVar4[0x18] = (long)&PTR_FUN_110b9eec8;
  lVar9 = plVar4[0xc];
  pppuStack_110 = pppuVar5;
  pppuStack_108 = (undefined ***)plVar4;
  if (lVar9 == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = *plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4[0xb] = (long)pppuVar5;
    plVar4[0xc] = (long)plVar4;
LAB_10a03ba28:
    do {
      lVar9 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 != 0) goto LAB_10a03ba3c;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    if (lVar12 == 0) goto LAB_10a03bc60;
LAB_10a03ba40:
    pppuStack_100 = *(undefined ****)(lVar12 + 0x858);
    pppuStack_f8 = *(undefined ****)(lVar12 + 0x860);
    if (pppuStack_f8 != (undefined ***)0x0) {
      pppuVar5 = pppuStack_f8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
        if (bVar3) {
          *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuVar6 = (undefined ****)0x2a8;
    __Znwm(0x2a8);
    pppuVar5 = pppuStack_108;
    pppuVar15 = pppuStack_110;
    pppuStack_d8 = pppuStack_108;
    pppuStack_e0 = pppuStack_110;
    pppuStack_110 = (undefined ***)0x0;
    pppuStack_108 = (undefined ***)0x0;
    ppppuVar7 = ppppuVar6;
    func_0x00010a0fda30();
    FUN_10ab6a888(ppppuVar6,lVar12,&pppuStack_e0,ppppuVar7,ppuVar10);
    if (pppuVar5 != (undefined ***)0x0) {
      plVar4 = (long *)(pppuVar5 + 1);
      do {
        lVar9 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)((long)*pppuVar5 + 0x10))(pppuVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar5);
      }
    }
    pppuVar11 = pppuStack_f8;
    pppuVar5 = pppuStack_100;
    pppuStack_f0 = pppuStack_100;
    pppuStack_e8 = pppuStack_f8;
    if (pppuStack_f8 != (undefined ***)0x0) {
      pppuVar8 = pppuStack_f8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar3) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pppuVar8 = pppuStack_f8 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar3) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar3) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_f8);
    }
    pppuStack_e0 = pppuVar5;
    pppuStack_d8 = pppuVar11;
    FUN_10a05b208(&pppuStack_88,ppppuVar6,&pppuStack_e0);
    FUN_10a05b04c(param_1);
    pppuVar5 = pppuStack_80;
    if (pppuStack_80 != (undefined ***)0x0) {
      pppuVar11 = pppuStack_80 + 1;
      do {
        ppuVar10 = *pppuVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar11,0x10);
        if (bVar3) {
          *pppuVar11 = (undefined **)((long)ppuVar10 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar10 == (undefined **)0x0) {
        (*(code *)(*pppuStack_80)[2])(pppuStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar5);
      }
    }
    if (pppuStack_d8 != (undefined ***)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    pppuVar5 = pppuStack_e8;
    if (pppuStack_e8 != (undefined ***)0x0) {
      pppuVar11 = pppuStack_e8 + 1;
      do {
        ppuVar10 = *pppuVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar11,0x10);
        if (bVar3) {
          *pppuVar11 = (undefined **)((long)ppuVar10 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar10 == (undefined **)0x0) {
        (*(code *)(*pppuStack_e8)[2])(pppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar5);
      }
    }
    pppuVar5 = pppuStack_100;
    if ((pppuStack_100 != (undefined ***)0x0) &&
       (pppuVar11 = (undefined ***)*param_1, pppuVar11 != (undefined ***)0x0)) {
      pppuStack_80 = (undefined ***)param_1[1];
      if (pppuStack_80 != (undefined ***)0x0) {
        pppuVar8 = pppuStack_80 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar3) {
            *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      ppppuVar6 = &pppuStack_88;
      pppuStack_88 = pppuVar11;
      FUN_10aa88c30(pppuStack_100,ppppuVar6);
      pppuVar11 = pppuStack_80;
      if (pppuStack_80 != (undefined ***)0x0) {
        pppuVar8 = pppuStack_80 + 1;
        do {
          ppuVar10 = *pppuVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar3) {
            *pppuVar8 = (undefined **)((long)ppuVar10 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppuVar10 == (undefined **)0x0) {
          (*(code *)(*pppuStack_80)[2])(pppuStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar11);
          pppuVar5 = pppuVar11;
        }
      }
    }
    if (pppuStack_f8 == (undefined ***)0x0) goto LAB_10a03bed0;
    pppuVar11 = pppuStack_f8 + 1;
    do {
      ppuVar10 = *pppuVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar11,0x10);
      if (bVar3) {
        *pppuVar11 = (undefined **)((long)ppuVar10 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      pppuVar8 = pppuStack_f8;
    } while (cVar2 != '\0');
  }
  else {
    if (*(long *)(lVar9 + 8) == -1) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = *plVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar4 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar4[0xb] = (long)pppuVar5;
      plVar4[0xc] = (long)plVar4;
      __ZNSt3__119__shared_weak_count14__release_weakEv(lVar9);
      goto LAB_10a03ba28;
    }
LAB_10a03ba3c:
    if (lVar12 != 0) goto LAB_10a03ba40;
LAB_10a03bc60:
    pppuVar8 = (undefined ***)0x2c0;
    __Znwm();
    pppuVar15 = pppuStack_108;
    pppuVar8[1] = (undefined **)0x0;
    pppuVar8[2] = (undefined **)0x0;
    *pppuVar8 = &PTR_DAT_110b9fda0;
    pppuVar5 = pppuVar8 + 3;
    pppuStack_d8 = pppuStack_108;
    pppuStack_e0 = pppuStack_110;
    pppuStack_110 = (undefined ***)0x0;
    pppuStack_108 = (undefined ***)0x0;
    pppuVar11 = pppuVar8;
    func_0x00010a0fda30();
    FUN_10ab6a888(pppuVar5,0,&pppuStack_e0,pppuVar11,ppuVar10);
    if (pppuVar15 != (undefined ***)0x0) {
      plVar4 = (long *)(pppuVar15 + 1);
      do {
        lVar9 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)((long)*pppuVar15 + 0x10))(pppuVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar15);
      }
    }
    ppppuVar6 = (undefined ****)(pppuVar8 + 8);
    pppuStack_88 = pppuVar5;
    pppuStack_80 = pppuVar8;
    FUN_10a05b2a8(&pppuStack_88,ppppuVar6,pppuVar5);
    FUN_10a05b04c(&pppuStack_f0,&pppuStack_88);
    pppuVar5 = pppuStack_80;
    if (pppuStack_80 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_80 + 1;
      do {
        ppuVar10 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar10 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar10 == (undefined **)0x0) {
        (*(code *)(*pppuStack_80)[2])(pppuStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar5);
      }
    }
    if (pppuStack_e8 == (undefined ***)0x0) {
      pppuStack_d8 = (undefined ***)0x0;
    }
    else {
      pppuVar5 = pppuStack_e8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
        if (bVar3) {
          *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pppuStack_d8 = pppuStack_e8;
      if (pppuStack_e8 != (undefined ***)0x0) {
        pppuVar5 = pppuStack_e8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
          if (bVar3) {
            *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    uStack_70 = 0;
    uStack_78 = 0;
    pppuStack_88 = (undefined ***)&UNK_1053a6a3c;
    appuStack_c8[0] = &PTR_DAT_110b9e910;
    pcStack_d0 = FUN_10a080368;
    pppuStack_e0 = pppuStack_f0;
    pppuStack_80 = (undefined ***)&PTR_DAT_110ae9180;
    FUN_10a044790(&pppuStack_88);
    (*(code *)*pppuStack_80)(&pppuStack_80);
    pppuVar5 = pppuStack_e8;
    if (pppuStack_e8 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_e8 + 1;
      do {
        ppuVar10 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar10 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar10 == (undefined **)0x0) {
        (*(code *)(*pppuStack_e8)[2])(pppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar5);
      }
    }
    param_1[1] = pppuStack_d8;
    *param_1 = pppuStack_e0;
    if (pppuStack_d8 != (undefined ***)0x0) {
      pppuVar5 = pppuStack_d8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
        if (bVar3) {
          *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppuVar15 = pppuStack_e0;
    FUN_10a044790(&pcStack_d0);
    pppuVar5 = appuStack_c8;
    (*(code *)*appuStack_c8[0])(pppuVar5);
    if (pppuStack_d8 == (undefined ***)0x0) goto LAB_10a03bed0;
    pppuVar11 = pppuStack_d8 + 1;
    do {
      ppuVar10 = *pppuVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar11,0x10);
      if (bVar3) {
        *pppuVar11 = (undefined **)((long)ppuVar10 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      pppuVar8 = pppuStack_d8;
    } while (cVar2 != '\0');
  }
  if (ppuVar10 == (undefined **)0x0) {
    (*(code *)(*pppuVar8)[2])(pppuVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar8);
    pppuVar5 = pppuVar8;
  }
LAB_10a03bed0:
  pppuVar11 = pppuStack_108;
  if (pppuStack_108 != (undefined ***)0x0) {
    pppuVar8 = pppuStack_108 + 1;
    do {
      ppuVar10 = *pppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
      if (bVar3) {
        *pppuVar8 = (undefined **)((long)ppuVar10 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar10 == (undefined **)0x0) {
      (*(code *)(*pppuStack_108)[2])(pppuStack_108);
      pppuVar5 = pppuVar11;
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar11);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar15;
  }
  ___stack_chk_fail();
  func_0x00010a0536d4(&pppuStack_88);
  func_0x00010a05248c(pppuVar11);
  FUN_10a054c5c(&pppuStack_100);
  FUN_10a080310(&pppuStack_110);
  __Unwind_Resume(pppuVar5);
  pppuVar5 = pppuVar15;
  FUN_10a82be98(auStack_148,ppppuVar6 + 0x1d);
  fVar14 = SUB84(pppuVar5,0);
  pppuStack_158 = pppuVar15;
  uStack_150 = CONCAT44(uVar17,uVar16);
  FUN_10a833d04(&pppuStack_158,auStack_148[0],0x200);
  return (undefined ***)(ulong)(uint)((fVar14 - (float)(ulong)(lStack_140 << 9)) * 0.001953125);
}



/* Entry: 10a03bffc; end: 10a03c06b;  */

float FUN_10a03bffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  float fVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 auStack_38 [2];
  long lStack_30;
  
  fVar1 = (float)param_1;
  FUN_10a82be98(auStack_38,param_4 + 0xe8);
  uStack_48 = param_1;
  uStack_40 = param_2;
  FUN_10a833d04(&uStack_48,auStack_38[0],0x200);
  return (fVar1 - (float)(ulong)(lStack_30 << 9)) * 0.001953125;
}



/* Entry: 10a03c06c; end: 10a03c0cf;  */

undefined8 * FUN_10a03c06c(undefined8 *param_1,undefined8 *param_2)

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
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10a03c0d0; end: 10a03c14b;  */

undefined8 * FUN_10a03c0d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b9f9a8;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[1] = puVar1 + 3;
  param_1[2] = puVar1;
  FUN_10a5cf1fc(param_1 + 1);
  param_1[3] = 0;
  return param_1;
}



/* Entry: 10a03c14c; end: 10a03c1d7;  */

undefined1  [16] FUN_10a03c14c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1b;
  auVar1._0_8_ = &UNK_10f6345d4;
  return auVar1;
}



/* Entry: 10a03c1d8; end: 10a03c30b;  */

void FUN_10a03c1d8(undefined8 param_1)

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
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0xffffffff00000001;
  puStack_98 = (undefined *)0x0;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f630f1d;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xe4;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a03c30c(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f631549;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f630f1d;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  FUN_10a0804f4();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f633209;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f630f1d;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  func_0x00010a080738(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f632cc1;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f630f1d;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f630f1d;
  uStack_38 = 0;
  FUN_10a080858(param_1,&puStack_98);
  FUN_10a080bdc(param_1);
  return;
}



/* Entry: 10a03c30c; end: 10a03c3e3;  */

/* WARNING: Removing unreachable block (ram,0x00010a03c3a4) */

undefined1  [16] FUN_10a03c30c(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6345d4,0x1b);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a0803f8(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a03c3e4; end: 10a03c45f;  */

undefined8 FUN_10a03c3e4(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  ulong auStack_28 [3];
  
  if (*(char *)(*param_2 + 0xe0) == '\x03') {
    FUN_10a82be98(auStack_28,*param_2 + 0xe8);
    if (auStack_28[0] < 0x16) {
      return 1;
    }
    puVar1 = &UNK_10f63323f;
  }
  else {
    puVar1 = &UNK_10f633211;
  }
  func_0x00010ae06f08(1,0x14,&UNK_10f630f1d,&UNK_10f630f1d,0xffffffff,puVar1);
  return 0;
}



/* Entry: 10a03c460; end: 10a03c47f;  */

bool FUN_10a03c460(undefined8 param_1,long *param_2)

{
  return *(char *)(*param_2 + 0xe0) == '\x03';
}



/* Entry: 10a03c480; end: 10a03c53f;  */

bool FUN_10a03c480(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long **pplVar4;
  long *plVar5;
  long lVar6;
  long *plStack_30;
  undefined1 *puStack_28;
  
  pplVar4 = &plStack_30;
  FUN_10a03c540(&plStack_30,*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x970),
                *(long *)(param_1 + 0x288) + 0xe8);
  __ZNSt3__16chrono12steady_clock3nowEv();
  plVar5 = plStack_30;
  puStack_28 = (undefined1 *)pplVar4;
  func_0x0001093f25b0(plStack_30,&puStack_28);
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
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
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
    }
  }
  return (int)plVar5 == 0;
}



/* Entry: 10a03c540; end: 10a03cae3;  */

void FUN_10a03c540(long *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  plVar11 = (long *)(param_2 + 0x50);
  plVar7 = param_1;
  if (*plVar11 == 0) {
    FUN_10a03d37c(&plStack_60,*(undefined8 *)(param_2 + 0x70));
    FUN_10a03d430(plVar11,&plStack_60);
    plVar7 = plVar11;
    if (plStack_58 != (long *)0x0) {
      plVar11 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar7 = plStack_58;
      }
    }
  }
  if (500 < *(ulong *)(param_2 + 0x40)) {
    plVar11 = *(long **)(param_2 + 0x38);
    while (plVar4 = plVar11, plVar4 != (long *)0x0) {
      plVar11 = (long *)plVar4[5];
      if (plVar11 == (long *)0x0) {
LAB_10a03c5ac:
        plVar11 = (long *)*plVar4;
      }
      else {
        __ZNSt3__16chrono12steady_clock3nowEv();
        plStack_60 = plVar7;
        func_0x0001093f25b0(plVar11,&plStack_60);
        plVar7 = plVar11;
        if ((int)plVar11 != 0) goto LAB_10a03c5ac;
        uVar12 = *(ulong *)(param_2 + 0x30);
        uVar6 = plVar4[1];
        uVar13 = uVar12 - 1;
        if ((uVar12 & uVar13) == 0) {
          uVar6 = uVar13 & uVar6;
        }
        else if (uVar12 <= uVar6) {
          uVar14 = 0;
          if (uVar12 != 0) {
            uVar14 = uVar6 / uVar12;
          }
          uVar6 = uVar6 - uVar14 * uVar12;
        }
        plVar11 = (long *)*plVar4;
        plVar7 = *(long **)(*(long *)(param_2 + 0x28) + uVar6 * 8);
        do {
          plVar10 = plVar7;
          plVar7 = (long *)*plVar10;
        } while ((long *)*plVar10 != plVar4);
        plVar7 = plVar11;
        if (plVar10 == (long *)(param_2 + 0x38)) {
LAB_10a03c634:
          if (plVar11 == (long *)0x0) {
LAB_10a03c66c:
            *(undefined8 *)(*(long *)(param_2 + 0x28) + uVar6 * 8) = 0;
            plVar7 = (long *)*plVar4;
            goto LAB_10a03c674;
          }
          uVar14 = plVar11[1];
          if ((uVar12 & uVar13) == 0) {
            uVar8 = uVar14 & uVar13;
          }
          else {
            uVar8 = uVar14;
            if (uVar12 <= uVar14) {
              uVar8 = 0;
              if (uVar12 != 0) {
                uVar8 = uVar14 / uVar12;
              }
              uVar8 = uVar14 - uVar8 * uVar12;
            }
          }
          if (uVar8 != uVar6) goto LAB_10a03c66c;
LAB_10a03c67c:
          if ((uVar12 & uVar13) == 0) {
            uVar14 = uVar14 & uVar13;
          }
          else if (uVar12 <= uVar14) {
            uVar13 = 0;
            if (uVar12 != 0) {
              uVar13 = uVar14 / uVar12;
            }
            uVar14 = uVar14 - uVar13 * uVar12;
          }
          if (uVar14 != uVar6) {
            *(long **)(*(long *)(param_2 + 0x28) + uVar14 * 8) = plVar10;
            plVar7 = (long *)*plVar4;
          }
        }
        else {
          uVar14 = plVar10[1];
          if ((uVar12 & uVar13) == 0) {
            uVar14 = uVar14 & uVar13;
          }
          else if (uVar12 <= uVar14) {
            uVar8 = 0;
            if (uVar12 != 0) {
              uVar8 = uVar14 / uVar12;
            }
            uVar14 = uVar14 - uVar8 * uVar12;
          }
          if (uVar14 != uVar6) goto LAB_10a03c634;
LAB_10a03c674:
          if (plVar7 != (long *)0x0) {
            uVar14 = plVar7[1];
            goto LAB_10a03c67c;
          }
        }
        *plVar10 = (long)plVar7;
        *plVar4 = 0;
        *(long *)(param_2 + 0x40) = *(long *)(param_2 + 0x40) + -1;
        func_0x00010a081068(plVar4 + 2);
        __ZdlPv();
        plVar7 = plVar4;
      }
    }
  }
  uVar6 = param_2 + 0x28;
  func_0x000107c2b05c(uVar6,param_3);
  uVar12 = *(ulong *)(param_2 + 0x30);
  if (uVar12 != 0) {
    uVar13 = uVar12 - 1;
    if ((uVar12 & uVar13) == 0) {
      uVar14 = uVar13 & uVar6;
    }
    else {
      uVar14 = uVar6;
      if (uVar12 <= uVar6) {
        uVar14 = 0;
        if (uVar12 != 0) {
          uVar14 = uVar6 / uVar12;
        }
        uVar14 = uVar6 - uVar14 * uVar12;
      }
    }
    plVar7 = *(long **)(*(long *)(param_2 + 0x28) + uVar14 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar8 = plVar7[1];
        if (uVar8 == uVar6) {
          uVar8 = param_2 + 0x28;
          func_0x000107c2b068(uVar8,plVar7 + 2,param_3);
          if ((uVar8 & 1) != 0) {
            param_2 = param_2 + 0x28;
            FUN_10a0849d8(param_2,param_3,param_3);
            lVar9 = *(long *)(param_2 + 0x28);
            *param_1 = lVar9;
            if (lVar9 == 0) {
              return;
            }
            plVar7 = (long *)(lVar9 + 8);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar2) {
                *plVar7 = *plVar7 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            return;
          }
        }
        else {
          if ((uVar12 & uVar13) == 0) {
            uVar8 = uVar8 & uVar13;
          }
          else if (uVar12 <= uVar8) {
            uVar3 = 0;
            if (uVar12 != 0) {
              uVar3 = uVar8 / uVar12;
            }
            uVar8 = uVar8 - uVar3 * uVar12;
          }
          if (uVar8 != uVar14) break;
        }
      }
    }
  }
  plVar7 = (long *)0x20;
  __Znwm();
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110b9ea00;
  puVar5 = (undefined8 *)0xa0;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0x32aaaba7;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0x3cb0b1bb;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  *(undefined8 *)((long)puVar5 + 0x84) = 0;
  *(undefined8 *)((long)puVar5 + 0x7c) = 0;
  *puVar5 = &PTR_FUN_110b9ea50;
  plStack_60 = plVar7 + 3;
  *plStack_60 = (long)puVar5;
  plStack_58 = plVar7;
  FUN_10a085024();
  lVar9 = param_2 + 0x28;
  FUN_10a0849d8(lVar9,param_3,param_3);
  plVar7 = *(long **)(lVar9 + 0x28);
  *(undefined8 **)(lVar9 + 0x28) = puVar5;
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = (long *)0x20;
  __Znwm();
  plVar11 = plVar7 + 1;
  *plVar11 = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_DAT_110b3f0e8;
  plStack_90 = plVar7 + 3;
  *(undefined4 *)plStack_90 = 3;
  plStack_80 = plStack_60;
  plStack_78 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar4 = plStack_58 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar2) {
      *plVar11 = *plVar11 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_88 = plVar7;
  plStack_70 = plStack_90;
  plStack_68 = plVar7;
  FUN_10a03d6e4(param_2,param_3,plStack_60,plStack_58,&plStack_90);
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
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
  plVar7 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar11 = plStack_78 + 1;
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
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  param_2 = param_2 + 0x28;
  FUN_10a0849d8(param_2,param_3,param_3);
  plVar7 = plStack_68;
  lVar9 = *(long *)(param_2 + 0x28);
  *param_1 = lVar9;
  if (lVar9 != 0) {
    plVar11 = (long *)(lVar9 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (plStack_68 != (long *)0x0) {
    plVar11 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar11 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10a03cae4; end: 10a03cb87;  */

void FUN_10a03cae4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = param_1;
  do {
    if (plVar2 == (long *)0x0) {
LAB_10a03cb28:
      *(undefined4 *)((long)param_1 + 0x74) = 1;
      return;
    }
    plVar1 = plVar2;
    (**(code **)(*plVar2 + 0x80))();
    if ((int)plVar1 != 2) {
      if ((int)plVar1 == 1) {
        return;
      }
      goto LAB_10a03cb28;
    }
    plVar2 = (long *)plVar2[0x13];
  } while( true );
}



/* Entry: 10a03cb88; end: 10a03cd43;  */

void FUN_10a03cb88(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  undefined8 uStack_48;
  long *plStack_40;
  char cStack_38;
  
  FUN_10a03c540(&plStack_68,*(undefined8 *)(*(long *)(param_2 + 0x90) + 0x970),
                *(long *)(param_2 + 0x288) + 0xe8);
  plStack_40 = plStack_68 + 3;
  cStack_38 = '\x01';
  __ZNSt3__15mutex4lockEv();
  __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(plStack_68,&plStack_40);
  lVar6 = plStack_68[2];
  uStack_48 = 0;
  __ZNSt13exception_ptrD1Ev(&uStack_48);
  if (lVar6 != 0) {
    __ZNSt13exception_ptrC1ERKS_(&uStack_48,plStack_68 + 2);
    __ZSt17rethrow_exceptionSt13exception_ptr(&uStack_48);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a03ccd4);
    (*pcVar5)();
  }
  if (cStack_38 == '\x01') {
    __ZNSt3__15mutex6unlockEv(plStack_40);
  }
  plStack_58 = (long *)plStack_68[0x13];
  lStack_60 = plStack_68[0x12];
  if (plStack_68[0x13] != 0) {
    plVar1 = (long *)(plStack_68[0x13] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar1 = plStack_68 + 1;
  do {
    lVar6 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plStack_68 + 0x10))(plStack_68);
  }
  FUN_10a03cd44(param_1,lStack_60);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar1);
      return;
    }
  }
  return;
}



/* Entry: 10a03cd44; end: 10a03cdaf;  */

void FUN_10a03cd44(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_2 + 0x268);
  if ((lVar4 == 0) || (___dynamic_cast(lVar4,&PTR_DAT_110bb3788,&PTR_DAT_110c681a0,0), lVar4 == 0))
  {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(param_2 + 0x270);
    *param_1 = lVar4;
    param_1[1] = lVar5;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
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
  return;
}



/* Entry: 10a03cdb0; end: 10a03ce63;  */

undefined *** FUN_10a03cdb0(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined ***pppuVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 uStack_1c0;
  undefined ***pppuStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined ***pppuStack_1a0;
  undefined8 **ppuStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 uStack_160;
  undefined8 *apuStack_158 [7];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  code *pcStack_108;
  undefined **ppuStack_100;
  undefined8 *puStack_f8;
  long lStack_c8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = 0x10a080f54;
  ppuStack_60 = &PTR_DAT_110b9e928;
  ppuVar10 = &PTR_DAT_110b9bdf0;
  puVar5 = &uStack_68;
  uVar9 = 0;
  uStack_58 = param_1;
  FUN_10a03ce64(param_2,&PTR_DAT_110b9bdf0,puVar5,0);
  pppuVar4 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  pcStack_78 = FUN_10a03ce64;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_160 = *puVar5;
  puStack_80 = &stack0xfffffffffffffff0;
  (**(code **)(puVar5[1] + 0x10))(apuStack_158,puVar5 + 1);
  FUN_109ffe064(&uStack_120,*ppuVar10,ppuVar10[1]);
  pcStack_108 = FUN_10a080c98;
  ppuStack_100 = &PTR_FUN_110b9f0c0;
  puVar5 = (undefined8 *)0x58;
  __Znwm();
  *puVar5 = uStack_160;
  (*(code *)apuStack_158[0][2])(puVar5 + 1,apuStack_158);
  puVar5[9] = uStack_118;
  puVar5[8] = uStack_120;
  puVar5[10] = lStack_110;
  uStack_118 = 0;
  lStack_110 = 0;
  uStack_120 = 0;
  puStack_f8 = puVar5;
  func_0x000107c2b054(auStack_178,&UNK_10f630f1d);
  pppuVar8 = (undefined ***)ppuVar10;
  (*(code *)(*pppuVar4)[0x4a])(pppuVar4,ppuVar10,&pcStack_108,uVar9,auStack_178);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  (*(code *)*ppuStack_100)(&ppuStack_100);
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  ppuVar6 = apuStack_158;
  (*(code *)*apuStack_158[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    if (cStack_161 < '\0') {
      __ZdlPv(auStack_178[0]);
    }
    (*(code *)*ppuStack_100)(&ppuStack_100);
    if (lStack_110 < 0) {
      __ZdlPv(uStack_120);
    }
    (*(code *)*apuStack_158[0])(apuStack_158);
    ppuVar7 = ppuVar6;
    __Unwind_Resume();
    pcStack_188 = FUN_10a03d030;
    puStack_1b0 = &UNK_10f6345d4;
    uStack_1a8 = 0x1b;
    pppuStack_1a0 = (undefined ***)ppuVar10;
    ppuStack_198 = ppuVar6;
    ppuStack_190 = &puStack_80;
    (*(code *)(*pppuVar8)[6])(pppuVar8,&PTR_DAT_110b9d920,&puStack_1b0);
    puVar5 = ppuVar7[0x51];
    if (puVar5 == (undefined8 *)0x0) {
      uStack_1c0 = 0;
      pppuStack_1b8 = (undefined ***)0x0;
    }
    else {
      FUN_10a03d13c(&uStack_1c0,puVar5);
    }
    puStack_1b0 = &UNK_10f6345f0;
    uStack_1a8 = 0x13;
    (*(code *)(*pppuVar8)[0x21])(pppuVar8,&PTR_DAT_110b9bdf0,&uStack_1c0,&puStack_1b0);
    pppuVar4 = pppuStack_1b8;
    if (puVar5 == (undefined8 *)0x0) {
      if (pppuStack_1b8 == (undefined ***)0x0) {
        return pppuVar8;
      }
      pppuVar1 = pppuStack_1b8 + 1;
      do {
        ppuVar10 = *pppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
        if (bVar3) {
          *pppuVar1 = (undefined **)((long)ppuVar10 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      if (pppuStack_1b8 == (undefined ***)0x0) {
        return pppuVar8;
      }
      pppuVar1 = pppuStack_1b8 + 1;
      do {
        ppuVar10 = *pppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
        if (bVar3) {
          *pppuVar1 = (undefined **)((long)ppuVar10 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (ppuVar10 == (undefined **)0x0) {
      (*(code *)(*pppuStack_1b8)[2])(pppuStack_1b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar4);
      pppuVar8 = pppuVar4;
    }
    return pppuVar8;
  }
  return pppuVar4;
}



/* Entry: 10a03ce64; end: 10a03d02f;  */

long * FUN_10a03ce64(long *param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  long *plStack_130;
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
  pcStack_98 = FUN_10a080c98;
  ppuStack_90 = &PTR_FUN_110b9f0c0;
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  *puVar4 = uStack_f0;
  (*(code *)apuStack_e8[0][2])(puVar4 + 1,apuStack_e8);
  puVar4[9] = uStack_a8;
  puVar4[8] = uStack_b0;
  puVar4[10] = lStack_a0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  uStack_b0 = 0;
  puStack_88 = puVar4;
  func_0x000107c2b054(auStack_108,&UNK_10f630f1d);
  plVar7 = param_2;
  (**(code **)(*param_1 + 0x250))(param_1,param_2,&pcStack_98,param_4,auStack_108);
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  ppuVar5 = apuStack_e8;
  (*(code *)*apuStack_e8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (cStack_f1 < '\0') {
      __ZdlPv(auStack_108[0]);
    }
    (*(code *)*ppuStack_90)(&ppuStack_90);
    if (lStack_a0 < 0) {
      __ZdlPv(uStack_b0);
    }
    (*(code *)*apuStack_e8[0])(apuStack_e8);
    ppuVar6 = ppuVar5;
    __Unwind_Resume();
    pcStack_118 = FUN_10a03d030;
    puStack_140 = &UNK_10f6345d4;
    uStack_138 = 0x1b;
    plStack_130 = param_2;
    ppuStack_128 = ppuVar5;
    puStack_120 = &stack0xfffffffffffffff0;
    (**(code **)(*plVar7 + 0x30))(plVar7,&PTR_DAT_110b9d920,&puStack_140);
    puVar4 = ppuVar6[0x51];
    if (puVar4 == (undefined8 *)0x0) {
      uStack_150 = 0;
      plStack_148 = (long *)0x0;
    }
    else {
      FUN_10a03d13c(&uStack_150,puVar4);
    }
    puStack_140 = &UNK_10f6345f0;
    uStack_138 = 0x13;
    (**(code **)(*plVar7 + 0x108))(plVar7,&PTR_DAT_110b9bdf0,&uStack_150,&puStack_140);
    plVar8 = plStack_148;
    if (puVar4 == (undefined8 *)0x0) {
      if (plStack_148 == (long *)0x0) {
        return plVar7;
      }
      plVar1 = plStack_148 + 1;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      if (plStack_148 == (long *)0x0) {
        return plVar7;
      }
      plVar1 = plStack_148 + 1;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lVar9 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      plVar7 = plVar8;
    }
    return plVar7;
  }
  return param_1;
}



/* Entry: 10a03d030; end: 10a03d13b;  */

void FUN_10a03d030(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f6345d4;
  uStack_28 = 0x1b;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110b9d920,&puStack_30);
  lVar5 = *(long *)(param_1 + 0x288);
  if (lVar5 == 0) {
    uStack_40 = 0;
    plStack_38 = (long *)0x0;
  }
  else {
    FUN_10a03d13c(&uStack_40,lVar5);
  }
  puStack_30 = &UNK_10f6345f0;
  uStack_28 = 0x13;
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110b9bdf0,&uStack_40,&puStack_30);
  plVar4 = plStack_38;
  if (lVar5 == 0) {
    if (plStack_38 == (long *)0x0) {
      return;
    }
    plVar1 = plStack_38 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (plStack_38 == (long *)0x0) {
      return;
    }
    plVar1 = plStack_38 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lVar5 == 0) {
    (**(code **)(*plStack_38 + 0x10))(plStack_38);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  return;
}



/* Entry: 10a03d13c; end: 10a03d1cb;  */

void FUN_10a03d13c(undefined8 *param_1,long *param_2)

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



/* Entry: 10a03d1cc; end: 10a03d293;  */

void FUN_10a03d1cc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x2d8);
  uVar5 = *(undefined8 *)(param_2 + 0x2d0);
  param_1[1] = *(undefined8 *)(param_2 + 0x2d8);
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



/* Entry: 10a03d294; end: 10a03d363;  */

undefined8 * FUN_10a03d294(undefined8 *param_1)

{
  (**(code **)param_1[0xc])(param_1 + 0xc);
  if ((*(char *)(param_1 + 9) == '\x01') && (*(char *)((long)param_1 + 0x47) < '\0')) {
    __ZdlPv(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a03d364; end: 10a03d367;  */

undefined8 * FUN_10a03d364(undefined8 *param_1)

{
  func_0x000104c4f944(param_1 + 0xf);
  func_0x00010a081120(param_1 + 0xc);
  func_0x00010a0810c8(param_1 + 10);
  func_0x00010a080ff4(param_1 + 5);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a03d368; end: 10a03d37b;  */

void FUN_10a03d368(void)

{
  func_0x00010a03d304();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a03d37c; end: 10a03d42f;  */

void FUN_10a03d37c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = param_1;
  if (param_1 == 0) {
    uStack_40 = 0;
    FUN_10a08135c(&uStack_40);
  }
  else {
    uStack_38 = *(undefined8 *)(param_1 + 0x858);
    plStack_30 = *(long **)(param_1 + 0x860);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a081178(&uStack_38,&lStack_28);
    plVar1 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      plVar2 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a03d430; end: 10a03d493;  */

undefined8 * FUN_10a03d430(undefined8 *param_1,undefined8 *param_2)

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
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10a03d494; end: 10a03d557;  */

void FUN_10a03d494(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = param_1;
  if (param_1 == 0) {
    uStack_40 = 0;
    FUN_10a081abc(&uStack_40,param_2,param_3);
  }
  else {
    uStack_38 = *(undefined8 *)(param_1 + 0x858);
    plStack_30 = *(long **)(param_1 + 0x860);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a0818d0(&uStack_38,&lStack_28);
    plVar1 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      plVar2 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a03d558; end: 10a03d5bb;  */

undefined8 * FUN_10a03d558(undefined8 *param_1,undefined8 *param_2)

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
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10a03d5bc; end: 10a03d64f;  */

long * FUN_10a03d5bc(long *param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = param_1;
  if ((param_3 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar3 = (long *)0x0, param_3 == (long *)0x0)) {
    FUN_10a043ecc();
    func_0x00010a03d68c(plVar3 + 7);
    func_0x00010a073f00(plVar3 + 2);
    if (plVar3[1] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    return plVar3;
  }
  *param_1 = param_2;
  param_1[1] = (long)param_3;
  plVar3 = param_3 + 2;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = *plVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar3 = param_3 + 1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 != 0) {
    return param_3;
  }
  (**(code **)(*param_3 + 0x10))(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(param_3);
  return param_3;
}



/* Entry: 10a03d650; end: 10a03d6e3;  */

long FUN_10a03d650(long param_1)

{
  func_0x00010a03d68c(param_1 + 0x38);
  func_0x00010a073f00(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a03d6e4; end: 10a03ddcf;  */

/* WARNING: Removing unreachable block (ram,0x00010a03db30) */
/* WARNING: Removing unreachable block (ram,0x00010a03db00) */
/* WARNING: Removing unreachable block (ram,0x00010a03db20) */
/* WARNING: Removing unreachable block (ram,0x00010a03db50) */

void FUN_10a03d6e4(long param_1,long *param_2,long param_3,long param_4,long *param_5)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 ***pppuVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined4 auStack_1e8 [2];
  undefined4 uStack_1e0;
  undefined4 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long *plStack_198;
  long lStack_190;
  long *plStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  undefined8 **ppuStack_148;
  ulong uStack_140;
  byte bStack_131;
  undefined8 **ppuStack_130;
  ulong uStack_128;
  byte bStack_119;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  if (param_4 != 0) {
    plVar6 = (long *)(param_4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = (long *)0x60;
  lStack_1b0 = param_3;
  lStack_1a8 = param_4;
  __Znwm();
  plVar6[1] = 0;
  plVar6[2] = 0;
  plStack_158 = plVar6 + 3;
  *plStack_158 = (long)FUN_10a0842cc;
  *plVar6 = (long)&PTR_DAT_110b9f5b8;
  plVar6[4] = (long)&PTR_FUN_110b9e9b0;
  plVar6[5] = param_3;
  plVar6[6] = param_4;
  *(undefined1 *)(plVar6 + 0xb) = 1;
  plStack_150 = plVar6;
  FUN_10a03d5bc(&lStack_1b0,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  if (param_4 != 0) {
    plVar6 = (long *)(param_4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_188 = (long *)param_5[1];
  lStack_190 = *param_5;
  if (param_5[1] != 0) {
    plVar6 = (long *)(param_5[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    lStack_1a0 = param_3;
    plStack_198 = (long *)param_4;
    func_0x000107c3192c(&lStack_180,*param_2,param_2[1]);
  }
  else {
    lStack_178 = param_2[1];
    lStack_180 = *param_2;
    lStack_170 = param_2[2];
    lStack_1a0 = param_3;
    plStack_198 = (long *)param_4;
  }
  plVar6 = (long *)0x60;
  __Znwm();
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_DAT_110b9f608;
  plVar11 = plVar6 + 3;
  *plVar11 = (long)FUN_10a08455c;
  *(undefined1 *)(plVar6 + 0xb) = 3;
  plVar6[4] = (long)&PTR_FUN_110b9e9d0;
  plVar7 = (long *)0x48;
  __Znwm();
  plVar7[1] = lStack_1a8;
  *plVar7 = lStack_1b0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  plVar7[3] = (long)plStack_198;
  plVar7[2] = lStack_1a0;
  lStack_1a0 = 0;
  plStack_198 = (long *)0x0;
  plVar7[5] = (long)plStack_188;
  plVar7[4] = lStack_190;
  lStack_190 = 0;
  plStack_188 = (long *)0x0;
  plStack_168 = plVar11;
  plStack_160 = plVar6;
  if (lStack_170 < 0) {
    func_0x000107c3192c(plVar7 + 6,lStack_180,lStack_178);
    plVar6[5] = (long)plVar7;
    *(undefined1 *)(plVar6 + 0xb) = 1;
    if (lStack_170 < 0) {
      __ZdlPv(lStack_180);
    }
  }
  else {
    plVar7[7] = lStack_178;
    plVar7[6] = lStack_180;
    plVar7[8] = lStack_170;
    plVar6[5] = (long)plVar7;
    *(undefined1 *)(plVar6 + 0xb) = 1;
  }
  plVar6 = plStack_188;
  if (plStack_188 != (long *)0x0) {
    plVar7 = plStack_188 + 1;
    do {
      lVar9 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_188 + 0x10))(plStack_188);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = plStack_198;
  if (plStack_198 != (long *)0x0) {
    plVar7 = plStack_198 + 1;
    do {
      lVar9 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_198 + 0x10))(plStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (lStack_1a8 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  FUN_10a82be98(auStack_1e8,param_2);
  puVar8 = (undefined8 *)0x1138347a0;
  FUN_10a051594();
  __ZNSt3__19to_stringEi(auStack_118,auStack_1e8[0]);
  uVar1 = puVar8[1];
  puVar4 = (undefined8 *)*puVar8;
  if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)puVar8 + 0x17);
    puVar4 = puVar8;
  }
  puVar8 = auStack_118;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar8,0,puVar4,uVar1);
  uStack_f8 = puVar8[1];
  uStack_100 = *puVar8;
  lStack_f0 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = &uStack_100;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar8,"/",1);
  uStack_d8 = puVar8[1];
  uStack_e0 = *puVar8;
  uStack_d0 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  __ZNSt3__19to_stringEi(&ppuStack_130,uStack_1e0);
  pppuVar5 = (undefined8 ***)ppuStack_130;
  if (-1 < (char)bStack_119) {
    uStack_128 = (ulong)bStack_119;
    pppuVar5 = &ppuStack_130;
  }
  puVar8 = &uStack_e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,pppuVar5,uStack_128);
  uStack_b8 = puVar8[1];
  uStack_c0 = *puVar8;
  uStack_b0 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  plVar6 = &uStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(plVar6,"/",1);
  uStack_98 = plVar6[1];
  lStack_a0 = *plVar6;
  uStack_90 = plVar6[2];
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = 0;
  __ZNSt3__19to_stringEi(&ppuStack_148,uStack_1d8);
  pppuVar5 = (undefined8 ***)ppuStack_148;
  if (-1 < (char)bStack_131) {
    uStack_140 = (ulong)bStack_131;
    pppuVar5 = &ppuStack_148;
  }
  plVar6 = &lStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar6,pppuVar5,uStack_140);
  lStack_78 = plVar6[1];
  lStack_80 = *plVar6;
  lStack_70 = plVar6[2];
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = 0;
  plVar6 = &lStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar6,&UNK_10f634682,0x10);
  lStack_1a8 = plVar6[1];
  lStack_1b0 = *plVar6;
  lStack_1a0 = plVar6[2];
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = 0;
  plVar6 = &lStack_1b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar6,&DAT_10f545122,0xb);
  lStack_1c8 = plVar6[1];
  lStack_1d0 = *plVar6;
  lStack_1c0 = plVar6[2];
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = 0;
  if (lStack_1a0 < 0) {
    __ZdlPv(lStack_1b0);
  }
  if ((char)bStack_131 < '\0') {
    __ZdlPv(ppuStack_148);
  }
  if ((char)bStack_119 < '\0') {
    __ZdlPv(ppuStack_130);
  }
  if (lStack_f0 < 0) {
    __ZdlPv(uStack_100);
  }
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  FUN_10a340494(uVar10,&lStack_1d0,&plStack_158,&plStack_168);
  if (lStack_1c0 < 0) {
    __ZdlPv(lStack_1d0);
  }
  plVar6 = plStack_160;
  if (plStack_160 != (long *)0x0) {
    plVar7 = plStack_160 + 1;
    do {
      lVar9 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_160 + 0x10))(plStack_160);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    plVar7 = plStack_150 + 1;
    do {
      lVar9 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 10a03ddd0; end: 10a03de1b;  */

long FUN_10a03ddd0(long param_1)

{
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  func_0x00010a084504(param_1 + 0x20);
  func_0x00010a084274(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a03de1c; end: 10a03deb3;  */

undefined8 FUN_10a03de1c(void)

{
  return 0x400;
}



/* Entry: 10a03deb4; end: 10a03df07;  */

void FUN_10a03deb4(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000002;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_1c = 0x13c00000124;
  FUN_10a03df08(param_1,&uStack_58);
  FUN_10a08518c();
  return;
}



/* Entry: 10a03df08; end: 10a03dfdf;  */

/* WARNING: Removing unreachable block (ram,0x00010a03dfa0) */

undefined1  [16] FUN_10a03df08(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6346b2,0x19);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a085090(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a03dfe0; end: 10a03dfef;  */

void FUN_10a03dfe0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a03dff0; end: 10a03e077;  */

void FUN_10a03dff0(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  FUN_10a087660(auStack_58,param_1 + 0x18);
  for (plVar2 = (long *)lStack_48; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    lVar1 = param_1 + 0x18;
    FUN_10a0861cc(lVar1,plVar2 + 2);
    if (lVar1 != 0) {
      FUN_10a087a3c(plVar2 + 4,param_2);
    }
  }
  FUN_10a0048c0(auStack_58);
  return;
}



/* Entry: 10a03e078; end: 10a03e113;  */

undefined8 FUN_10a03e078(void)

{
  return 0x100000;
}



/* Entry: 10a03e114; end: 10a03e18f;  */

undefined8 * FUN_10a03e114(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b9fa98;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[1] = puVar1 + 3;
  param_1[2] = puVar1;
  FUN_10a5cf1fc(param_1 + 1);
  param_1[3] = 0;
  return param_1;
}


