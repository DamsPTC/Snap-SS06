/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a97d6ec; end: 10a97d98b;  */

void FUN_10a97d6ec(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f66361a,0x10);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c33958;
  pppuVar2 = (undefined8 ***)&UNK_10f68581c;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x10000000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x8f;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x100,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c33958;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a97d96c;
    FUN_10a054dac(param_1,"scan",FUN_10a9b6aac,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a97d96c;
    FUN_10a054dac(param_1,&UNK_10f686cd9,FUN_10a9b7488,5,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f686ce6,FUN_10a9b7c9c,FUN_10a9b7da0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f66361a,0x10);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a97d96c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a97d970);
  (*pcVar6)();
}



/* Entry: 10a97d98c; end: 10a97dd43;  */

void FUN_10a97d98c(undefined8 param_1)

{
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
  
  FUN_10a003e74(param_1,&UNK_10f654f46,10);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f686cf1;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f68581c;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a004eb4(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f686cfa;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f68581c;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a2ad5cc(param_1,&puStack_98,&PTR_DAT_110c326a0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6330cb;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f68581c;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a2ad5cc(param_1,&puStack_98,&PTR_DAT_110c326b0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f686d02;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f68581c;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a2ad5cc(param_1,&puStack_98,&PTR_DAT_110c326c0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f686d07;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x200000064;
  puStack_70 = &UNK_10f68581c;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a2ad5cc(param_1,&puStack_98,&PTR_DAT_110c326d0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f686d0c;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x200000019;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a2ad5cc(param_1,&puStack_98,&PTR_DAT_110c326e0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f686d1c;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x200000019;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a2ad5cc(param_1,&puStack_98,&PTR_DAT_110c326f0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f686d21;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x200000019;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a2ad5cc(param_1,&puStack_98,&PTR_DAT_110c32700);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f686d28;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x200000019;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a2ad5cc(param_1,&puStack_98,&PTR_DAT_110c32710);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f36bd2c;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x200000019;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a2ad5cc(param_1,&puStack_98,&PTR_DAT_110c32720);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f686d2e;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x200000019;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a2ad5cc(param_1,&puStack_98,&PTR_DAT_110c32730);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f686d38;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x200000019;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a2ad5cc(param_1,&puStack_98,&PTR_DAT_110c32740);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f35bb5d;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x200000019;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a2ad5cc(param_1,&puStack_98,&PTR_DAT_110c32750);
  func_0x00010a004064(param_1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a97dd44; end: 10a97ddd7;  */

undefined8 * FUN_10a97dd44(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 uStack_31;
  
  puVar1 = param_1;
  FUN_10aa7093c();
  *puVar1 = &PTR_DAT_110c32770;
  puVar1[2] = &PTR_FUN_110c32818;
  puVar1[7] = &PTR_FUN_110c32870;
  puVar1[0x1c] = param_2;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  FUN_10a05a5d4(puVar1 + 0x1f,&uStack_31);
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  return param_1;
}



/* Entry: 10a97ddd8; end: 10a97de97;  */

void FUN_10a97ddd8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined ***pppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010aa70acc();
  pcStack_78 = FUN_10a9b7eac;
  ppuStack_70 = &PTR_DAT_110c34e98;
  ppuVar6 = &PTR_DAT_110c32880;
  uStack_68 = param_1;
  FUN_10a02d928(param_2,&PTR_DAT_110c32880,&pcStack_78,0);
  pppuVar4 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  pppuVar5 = pppuVar4;
  __Unwind_Resume();
  pcStack_88 = FUN_10a97de98;
  uStack_a0 = param_1;
  pppuStack_98 = pppuVar4;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010aa70b70();
  puStack_b0 = &UNK_10f633e9d;
  uStack_a8 = 0xd;
  ppuStack_b8 = pppuVar5[0x1e];
  ppuStack_c0 = pppuVar5[0x1d];
  if (pppuVar5[0x1e] != (undefined **)0x0) {
    ppuVar1 = pppuVar5[0x1e] + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = *ppuVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*ppuVar6 + 0x108))(ppuVar6,&PTR_DAT_110c32880,&ppuStack_c0,&puStack_b0);
  ppuVar6 = ppuStack_b8;
  if (ppuStack_b8 != (undefined **)0x0) {
    ppuVar1 = ppuStack_b8 + 1;
    do {
      puVar7 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = puVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar7 == (undefined *)0x0) {
      (**(code **)(*ppuStack_b8 + 0x10))(ppuStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
    }
  }
  return;
}



/* Entry: 10a97de98; end: 10a97ded7;  */

void FUN_10a97de98(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010aa70b70();
  puStack_30 = &UNK_10f633e9d;
  uStack_28 = 0xd;
  plStack_38 = *(long **)(param_1 + 0xf0);
  uStack_40 = *(undefined8 *)(param_1 + 0xe8);
  if (*(long *)(param_1 + 0xf0) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0xf0) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110c32880,&uStack_40,&puStack_30);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a97ded8; end: 10a97e05f;  */

void FUN_10a97ded8(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plStack_120;
  long *plStack_118;
  long lStack_108;
  long *plStack_100;
  long alStack_f8 [26];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = (ulong)*(byte *)(*(long *)(param_1 + 0xe0) + 0x29);
  if (uVar8 < 6) {
    FUN_10aba1500(&lStack_108,*(undefined8 *)(*(long *)(param_1 + 0xe0) + uVar8 * 8 + 0x30),
                  *(undefined8 *)(param_1 + 0xe8),0);
    FUN_10a12add4(alStack_f8,lStack_108 + 0x10);
    plVar5 = alStack_f8;
    FUN_10a1a577c(&plStack_120,plVar5,3);
    if (plStack_120 != plStack_118) {
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
      uVar8 = *(ulong *)(param_2 + 0x20);
      if (uVar8 == 0) {
        uVar8 = *(ulong *)(param_2 + 8);
        if ((uVar8 & 1) != 0) {
          uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
        }
        func_0x0001098d98b0();
        *(ulong *)(param_2 + 0x20) = uVar8;
      }
      if ((long)plStack_118 - (long)plStack_120 < 0) goto LAB_10a97e014;
      plVar5 = (long *)(uVar8 + 0x10);
      func_0x00010b4bf088();
    }
    plVar6 = plStack_120;
    if (plStack_120 != (long *)0x0) {
      plStack_118 = plStack_120;
      plVar5 = plStack_120;
      __ZdlPv();
    }
    if (plStack_100 != (long *)0x0) {
      plVar1 = plStack_100 + 1;
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
        (**(code **)(*plStack_100 + 0x10))(plStack_100);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar5 = plStack_100;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
      ___stack_chk_fail();
      if (plStack_120 != (long *)0x0) {
        plStack_118 = plStack_120;
        __ZdlPv();
      }
      func_0x00010a136de4(&lStack_108);
      __Unwind_Resume();
      lVar9 = plVar6[0x4d];
      if ((lVar9 == 0) ||
         (___dynamic_cast(lVar9,&PTR_DAT_110bb3788,&PTR_DAT_110c5a9c8,0), lVar9 == 0)) {
        *plVar5 = 0;
        plVar5[1] = 0;
      }
      else {
        lVar7 = plVar6[0x4e];
        *plVar5 = lVar9;
        plVar5[1] = lVar7;
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
      }
      return;
    }
    return;
  }
LAB_10a97e014:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a97e018);
  (*pcVar4)();
}



/* Entry: 10a97e060; end: 10a97e0cb;  */

void FUN_10a97e060(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_2 + 0x268);
  if ((lVar4 == 0) || (___dynamic_cast(lVar4,&PTR_DAT_110bb3788,&PTR_DAT_110c5a9c8,0), lVar4 == 0))
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



/* Entry: 10a97e0cc; end: 10a97e373;  */

undefined8 * FUN_10a97e0cc(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  lVar8 = *param_3;
  plVar7 = (long *)param_3[1];
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar1 = param_3[2];
  plVar2 = (long *)param_3[3];
  if (plVar2 != (long *)0x0) {
    plVar5 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_a0 = &PTR_FUN_110c33bc0;
  if (plVar7 != (long *)0x0) {
    plVar5 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (plVar2 != (long *)0x0) {
    plVar5 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar5 = (long *)0x48;
  lStack_c0 = lVar8;
  plStack_b8 = plVar7;
  lStack_b0 = lVar1;
  plStack_a8 = plVar2;
  lStack_98 = lVar8;
  plStack_90 = plVar7;
  lStack_88 = lVar1;
  plStack_80 = plVar2;
  __Znwm();
  plVar5[2] = (long)&PTR_FUN_110c33bc0;
  plVar5[3] = lVar8;
  plVar5[4] = (long)plVar7;
  if (plVar7 != (long *)0x0) {
    plVar7 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar5[5] = lVar1;
  plVar5[6] = (long)plVar2;
  if (plVar2 != (long *)0x0) {
    plVar7 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar6 = (undefined8 *)param_2[0xb];
  lVar8 = param_2[0xc];
  *plVar5 = (long)(param_2 + 10);
  plVar5[1] = (long)puVar6;
  *puVar6 = plVar5;
  param_2[0xb] = plVar5;
  param_2[0xc] = lVar8 + 1;
  if (plVar2 != (long *)0x0) {
    plVar7 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar7 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    plVar5 = plStack_90 + 1;
    do {
      lVar8 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (plVar2 != (long *)0x0) {
    plVar7 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar7 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar2 = plStack_b8 + 1;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  uVar9 = param_2[0xb];
  puVar6 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar11 = param_2[1];
  uVar10 = *param_2;
  if (param_2[1] != 0) {
    plVar7 = (long *)(param_2[1] + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = uVar9;
  param_1[2] = uVar11;
  param_1[1] = uVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar6;
  }
  ___stack_chk_fail();
  FUN_10a1c9d6c(&lStack_88);
  FUN_10a1c9d6c(&lStack_98);
  FUN_10a1c9d6c(&lStack_b0);
  FUN_10a1c9d6c(&lStack_c0);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  __Unwind_Resume();
  plVar7 = (long *)puVar6[2];
  if (plVar7 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar7 != (long *)0x0) {
      if (puVar6[1] != 0) {
        FUN_10a05c0fc(puVar6[1],*puVar6);
      }
      plVar2 = plVar7 + 1;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (puVar6[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return puVar6;
}



/* Entry: 10a97e374; end: 10a97e3f3;  */

undefined8 * FUN_10a97e374(undefined8 *param_1)

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



/* Entry: 10a97e3f4; end: 10a97e57f;  */

void FUN_10a97e3f4(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined ***pppuStack_168;
  long lStack_160;
  undefined7 uStack_158;
  char cStack_151;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 auStack_140 [56];
  undefined8 uStack_108;
  char cStack_f1;
  undefined **appuStack_e0 [19];
  undefined1 uStack_41;
  
  FUN_109fed7e0(&ppuStack_150);
  lVar3 = *param_2;
  lVar2 = param_2[1];
  lStack_160 = *param_3;
  pppuStack_168 = &ppuStack_150;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    lStack_160 = (long)param_3;
  }
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x18) {
    FUN_10a5bdf1c(&pppuStack_168,lVar3);
  }
  func_0x00010a002480(&pppuStack_168,&ppuStack_148,&uStack_41);
  if ((long)cStack_151 < 0) {
    lVar3 = lStack_160;
    if (lStack_160 == 0) goto LAB_10a97e4bc;
  }
  else {
    lVar3 = (long)cStack_151;
    if (cStack_151 == '\0') {
LAB_10a97e4bc:
      param_1[1] = lStack_160;
      *param_1 = (long)pppuStack_168;
      param_1[2] = CONCAT17(cStack_151,uStack_158);
      goto LAB_10a97e4cc;
    }
  }
  uVar1 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
            (param_1,&pppuStack_168,0,lVar3 - uVar1,&uStack_41);
  if (cStack_151 < '\0') {
    __ZdlPv(pppuStack_168);
  }
LAB_10a97e4cc:
  appuStack_e0[0] = &PTR_DAT_11088d708;
  ppuStack_150 = &PTR_DAT_11088d6e0;
  ppuStack_148 = &PTR_DAT_11088d7b0;
  if (cStack_f1 < '\0') {
    __ZdlPv(uStack_108);
  }
  ppuStack_148 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_140);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_150,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_e0);
  return;
}



/* Entry: 10a97e580; end: 10a97e82f;  */

undefined8 * FUN_10a97e580(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  lVar8 = *param_3;
  lVar2 = param_3[1];
  plVar10 = (long *)param_3[2];
  if (plVar10 != (long *)0x0) {
    plVar3 = plVar10 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = *plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar1 = param_3[3];
  plVar3 = (long *)param_3[4];
  if (plVar3 != (long *)0x0) {
    plVar6 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = *plVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppuStack_a0 = &PTR_FUN_110c33bd8;
  if (plVar10 != (long *)0x0) {
    plVar6 = plVar10 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = *plVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar3 != (long *)0x0) {
    plVar6 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = *plVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar6 = (long *)0x48;
  lStack_c0 = lVar2;
  plStack_b8 = plVar10;
  lStack_b0 = lVar1;
  plStack_a8 = plVar3;
  lStack_98 = lVar8;
  lStack_90 = lVar2;
  plStack_88 = plVar10;
  lStack_80 = lVar1;
  plStack_78 = plVar3;
  __Znwm();
  plVar6[2] = (long)&PTR_FUN_110c33bd8;
  plVar6[3] = lVar8;
  plVar6[4] = lVar2;
  plVar6[5] = (long)plVar10;
  if (plVar10 != (long *)0x0) {
    plVar10 = plVar10 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar6[6] = lVar1;
  plVar6[7] = (long)plVar3;
  if (plVar3 != (long *)0x0) {
    plVar10 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar7 = (undefined8 *)param_2[0xb];
  lVar8 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar7;
  *puVar7 = plVar6;
  param_2[0xb] = plVar6;
  param_2[0xc] = lVar8 + 1;
  if (plVar3 != (long *)0x0) {
    plVar10 = plVar3 + 1;
    do {
      lVar8 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  plVar10 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar6 = plStack_88 + 1;
    do {
      lVar8 = *plVar6;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar10 = plVar3 + 1;
    do {
      lVar8 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  plVar10 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar3 = plStack_b8 + 1;
    do {
      lVar8 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  uVar9 = param_2[0xb];
  puVar7 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar12 = param_2[1];
  uVar11 = *param_2;
  if (param_2[1] != 0) {
    plVar10 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = uVar9;
  param_1[2] = uVar12;
  param_1[1] = uVar11;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar7;
  }
  ___stack_chk_fail();
  FUN_10a1c9d6c(&lStack_80);
  FUN_10a1c9d6c(&lStack_90);
  FUN_10a1c9d6c(&lStack_b0);
  FUN_10a1c9d6c(&lStack_c0);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  __Unwind_Resume();
  plVar10 = (long *)puVar7[2];
  if (plVar10 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar10 != (long *)0x0) {
      if (puVar7[1] != 0) {
        FUN_10a05c0fc(puVar7[1],*puVar7);
      }
      plVar3 = plVar10 + 1;
      do {
        lVar8 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if (puVar7[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return puVar7;
}



/* Entry: 10a97e830; end: 10a97e8af;  */

undefined8 * FUN_10a97e830(undefined8 *param_1)

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



/* Entry: 10a97e8b0; end: 10a97ec47;  */

void FUN_10a97e8b0(undefined8 *param_1,float param_2,long *param_3)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  ulong uVar12;
  undefined8 **ppuVar13;
  undefined8 *puVar15;
  double dVar16;
  undefined8 *puVar17;
  undefined4 uStack_148;
  int iStack_144;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long lStack_b0;
  undefined4 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 **ppuStack_70;
  undefined8 **ppuStack_68;
  undefined8 uStack_60;
  double dStack_58;
  undefined8 **ppuVar14;
  
  if (*param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    puStack_88 = (undefined8 *)0x0;
    puStack_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    FUN_10a0f3910(&uStack_148,*param_3 + 0x10,0);
    uStack_e8._0_4_ = 0x42ff0000;
    ppuStack_68 = (undefined8 **)&uStack_e8;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_e8._4_4_ = 0;
    uStack_e0 = 0;
    puStack_a8 = &uStack_e0;
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_bc = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    lStack_b0 = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_70 = (undefined8 **)CONCAT44(ppuStack_70._4_4_,0x2010000);
    uStack_60 = 0;
    puStack_a0 = &uStack_98;
    func_0x000109a479a0(&uStack_148,&ppuStack_70);
    if (lStack_110 != 0) {
      piVar2 = (int *)(lStack_110 + 0x14);
      do {
        iVar3 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_148);
      }
    }
    lStack_110 = 0;
    uStack_130 = 0;
    uStack_138 = 0;
    uStack_120 = 0;
    uStack_128 = 0;
    if (0 < iStack_144) {
      lVar9 = 0;
      do {
        *(undefined4 *)(lStack_108 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iStack_144);
    }
    if (puStack_100 != auStack_f8 && puStack_100 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_100 + -8));
    }
    uStack_148 = 0x1010000;
    uStack_138 = 0;
    ppuStack_70._0_4_ = 0x2010000;
    dVar16 = (double)param_2;
    uStack_60 = 0;
    puVar8 = &uStack_148;
    puStack_140 = &uStack_e8;
    ppuStack_68 = (undefined8 **)&uStack_e8;
    func_0x000109b59078(dVar16,0x406fe00000000000,puVar8,&ppuStack_70,0);
    uStack_148 = 0x3010000;
    uStack_138 = 0;
    ppuStack_70 = (undefined8 **)CONCAT44(ppuStack_70._4_4_,0x8204000c);
    ppuStack_68 = &puStack_88;
    uStack_60 = 0;
    puStack_140 = &uStack_e8;
    func_0x000109a91d90();
    dStack_58 = 0.0;
    func_0x000109adf8b0(&uStack_148,&ppuStack_70,puVar8,0,2,&dStack_58);
    puVar17 = puStack_80;
    if (puStack_88 == puStack_80) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      ppuStack_70 = (undefined8 **)0x0;
      ppuStack_68 = (undefined8 **)0x0;
      uStack_60 = 0;
      puVar15 = puStack_88;
      do {
        uStack_138 = 0;
        uStack_148 = 0x8103000c;
        puStack_140 = puVar15;
        func_0x000109b415b4(&uStack_148,0);
        dStack_58 = dVar16;
        FUN_10a229d94(&ppuStack_70,&dStack_58);
        puVar15 = puVar15 + 3;
      } while (puVar15 != puVar17);
      ppuVar11 = ppuStack_70;
      if (ppuStack_70 != ppuStack_68 && ppuStack_70 + 1 != ppuStack_68) {
        puVar17 = *ppuStack_70;
        ppuVar10 = ppuStack_70;
        ppuVar13 = ppuStack_70 + 1;
        do {
          ppuVar14 = ppuVar13 + 1;
          ppuVar11 = ppuVar13;
          puVar15 = *ppuVar13;
          if ((double)*ppuVar13 <= (double)puVar17) {
            ppuVar11 = ppuVar10;
            puVar15 = puVar17;
          }
          puVar17 = puVar15;
          ppuVar10 = ppuVar11;
          ppuVar13 = ppuVar14;
        } while (ppuVar14 != ppuStack_68);
      }
      uVar12 = ((long)puStack_80 - (long)puStack_88 >> 3) * -0x5555555555555555;
      uVar1 = (long)ppuVar11 - (long)ppuStack_70 >> 3;
      if (uVar12 < uVar1 || uVar12 - uVar1 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10a97ebe0);
        (*pcVar7)();
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      lVar9 = puStack_88[uVar1 * 3];
      lVar4 = (puStack_88 + uVar1 * 3)[1];
      FUN_10a000fa0(param_1,lVar9,lVar4,lVar4 - lVar9 >> 3);
      if (ppuStack_70 != (undefined8 **)0x0) {
        ppuStack_68 = ppuStack_70;
        __ZdlPv();
      }
    }
    if (lStack_b0 != 0) {
      piVar2 = (int *)(lStack_b0 + 0x14);
      do {
        iVar3 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_e8);
      }
    }
    lStack_b0 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    if (0 < uStack_e8._4_4_) {
      lVar9 = 0;
      do {
        puStack_a8[lVar9] = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < uStack_e8._4_4_);
    }
    if (puStack_a0 != &uStack_98 && puStack_a0 != (undefined8 *)0x0) {
      _free(puStack_a0[-1]);
    }
    uStack_e8 = &puStack_88;
    func_0x00010a001298(&uStack_e8);
  }
  return;
}



/* Entry: 10a97ec48; end: 10a97ecd7;  */

bool FUN_10a97ec48(float param_1,float param_2,float param_3,float param_4,long *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  
  if ((0.0 < param_2) && (0.0 < param_3)) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (0.0 < param_4) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_4)) {
        bVar1 = param_4 < 1.0;
        bVar2 = param_4 == 1.0;
        bVar3 = false;
      }
    }
    if ((bVar2 || bVar1 != bVar3) && (lVar4 = *param_5, lVar4 != 0)) {
      uVar6 = (uint)(param_2 * (float)*(int *)(lVar4 + 0x10));
      uVar7 = (uint)(param_3 * (float)*(int *)(lVar4 + 0x14));
      pbVar5 = *(byte **)(lVar4 + 0x28);
      if (((int)uVar7 < *(int *)(lVar4 + 0x14) && (int)uVar6 < *(int *)(lVar4 + 0x10)) &&
         (-1 < (int)(uVar7 | uVar6))) {
        pbVar5 = pbVar5 + (long)*(int *)(lVar4 + 0x20) * (long)(int)uVar6 +
                          *(long *)(lVar4 + 0x18) * (ulong)uVar7;
      }
      fVar8 = (float)NEON_ucvtf((uint)*pbVar5);
      return param_1 < fVar8;
    }
  }
  return false;
}



/* Entry: 10a97ecd8; end: 10a97edd3;  */

float FUN_10a97ecd8(long *param_1)

{
  int iVar1;
  float fVar2;
  undefined4 auStack_130 [2];
  long *plStack_128;
  undefined8 uStack_120;
  double dStack_118;
  double dStack_110;
  long lStack_58;
  long lStack_50;
  
  FUN_10a97e8b0(&lStack_58);
  if (lStack_58 == lStack_50) {
    fVar2 = -1.0;
  }
  else {
    iVar1 = *(int *)(*param_1 + 0x10);
    uStack_120 = 0;
    auStack_130[0] = 0x8103000c;
    plStack_128 = &lStack_58;
    func_0x000109b2f34c(&dStack_118,auStack_130,0);
    fVar2 = -1.0;
    if (1.1920928955078125e-07 <= ABS(dStack_118)) {
      fVar2 = (float)(dStack_110 / (dStack_118 * (double)iVar1));
    }
  }
  if (lStack_58 != 0) {
    __ZdlPv();
  }
  return fVar2;
}



/* Entry: 10a97edd4; end: 10a97f7ff;  */

void FUN_10a97edd4(undefined8 param_1,undefined2 *param_2,long *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (undefined4)param_1;
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110c32c10);
  if ((int)plVar1 != 0) {
    *param_2 = 0x100;
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x50))(param_3,&PTR_DAT_110c32c10);
    *(char *)param_2 = (char)plVar1;
  }
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110c32c30);
  if ((int)plVar1 != 0) {
    param_2[1] = 0x100;
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x50))(param_3,&PTR_DAT_110c32c30);
    *(char *)(param_2 + 1) = (char)plVar1;
  }
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110c32c50);
  if ((int)plVar1 != 0) {
    param_2[2] = 0x100;
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x50))(param_3,&PTR_DAT_110c32c50);
    *(char *)(param_2 + 2) = (char)plVar1;
  }
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110c32c70);
  if ((int)plVar1 != 0) {
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined1 *)(param_2 + 8) = 1;
    (**(code **)(*param_3 + 0xb8))(param_3,&PTR_DAT_110c32c70);
    *(ulong *)(param_2 + 4) = CONCAT44(uVar3,uVar2);
  }
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110c32c90);
  if ((int)plVar1 != 0) {
    param_2[0xc] = 0x100;
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x50))(param_3,&PTR_DAT_110c32c90);
    *(char *)(param_2 + 0xc) = (char)plVar1;
  }
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110c32cb0);
  if ((int)plVar1 != 0) {
    *(undefined4 *)(param_2 + 0xe) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x30))(param_3,&PTR_DAT_110c32cb0);
    *(int *)(param_2 + 0xe) = (int)plVar1;
  }
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110c32cd0);
  if ((int)plVar1 != 0) {
    *(undefined4 *)(param_2 + 0x12) = 0;
    *(undefined1 *)(param_2 + 0x14) = 1;
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x30))(param_3,&PTR_DAT_110c32cd0);
    *(int *)(param_2 + 0x12) = (int)plVar1;
  }
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110c32cf0);
  if ((int)plVar1 != 0) {
    param_2[0x16] = 0x100;
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x50))(param_3,&PTR_DAT_110c32cf0);
    *(char *)(param_2 + 0x16) = (char)plVar1;
  }
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110c32d10);
  if ((int)plVar1 != 0) {
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined1 *)(param_2 + 0x1a) = 1;
    (**(code **)(*param_3 + 0x40))(param_3,&PTR_DAT_110c32d10);
    *(undefined4 *)(param_2 + 0x18) = uVar2;
  }
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110c32d30);
  if ((int)plVar1 != 0) {
    param_2[0x1c] = 0x100;
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x50))(param_3,&PTR_DAT_110c32d30);
    *(char *)(param_2 + 0x1c) = (char)plVar1;
  }
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110c32d50);
  if ((int)plVar1 != 0) {
    param_2[0x1d] = 0x100;
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x50))(param_3,&PTR_DAT_110c32d50);
    *(char *)(param_2 + 0x1d) = (char)plVar1;
  }
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110c32d70);
  if ((int)plVar1 != 0) {
    *(undefined4 *)(param_2 + 0x1e) = 0;
    *(undefined1 *)(param_2 + 0x20) = 1;
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x30))(param_3,&PTR_DAT_110c32d70);
    *(int *)(param_2 + 0x1e) = (int)plVar1;
  }
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110c32d90);
  if ((int)plVar1 != 0) {
    *(undefined4 *)(param_2 + 0x22) = 0;
    *(undefined1 *)(param_2 + 0x24) = 1;
    (**(code **)(*param_3 + 0x40))(param_3,&PTR_DAT_110c32d90);
    *(undefined4 *)(param_2 + 0x22) = uVar2;
  }
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110c32db0);
  if ((int)plVar1 != 0) {
    param_2[0x26] = 0x100;
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x50))(param_3,&PTR_DAT_110c32db0);
    *(char *)(param_2 + 0x26) = (char)plVar1;
  }
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110c32dd0);
  if ((int)plVar1 != 0) {
    param_2[0x27] = 0x100;
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x50))(param_3,&PTR_DAT_110c32dd0);
    *(char *)(param_2 + 0x27) = (char)plVar1;
  }
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110c32df0);
  if ((int)plVar1 != 0) {
    param_2[0x28] = 0x100;
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x50))(param_3,&PTR_DAT_110c32df0);
    *(char *)(param_2 + 0x28) = (char)plVar1;
  }
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110c32e10);
  if ((int)plVar1 != 0) {
    *(undefined4 *)(param_2 + 0x2a) = 0;
    *(undefined1 *)(param_2 + 0x2c) = 1;
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x30))(param_3,&PTR_DAT_110c32e10);
    *(int *)(param_2 + 0x2a) = (int)plVar1;
  }
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110c32e30);
  if ((int)plVar1 != 0) {
    param_2[0x2e] = 0x100;
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x50))(param_3,&PTR_DAT_110c32e30);
    *(char *)(param_2 + 0x2e) = (char)plVar1;
  }
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110c32e50);
  if ((int)plVar1 != 0) {
    *(undefined4 *)(param_2 + 0x30) = 0;
    *(undefined1 *)(param_2 + 0x32) = 1;
    (**(code **)(*param_3 + 0x40))(param_3,&PTR_DAT_110c32e50);
    *(undefined4 *)(param_2 + 0x30) = uVar2;
  }
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110c32e70);
  if ((int)plVar1 != 0) {
    param_2[0x34] = 0x100;
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x50))(param_3,&PTR_DAT_110c32e70);
    *(char *)(param_2 + 0x34) = (char)plVar1;
  }
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110c32e90);
  if ((int)plVar1 != 0) {
    param_2[0x35] = 0x100;
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x50))(param_3,&PTR_DAT_110c32e90);
    *(char *)(param_2 + 0x35) = (char)plVar1;
  }
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110c32eb0);
  if ((int)plVar1 != 0) {
    param_2[0x36] = 0x100;
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x50))(param_3,&PTR_DAT_110c32eb0);
    *(char *)(param_2 + 0x36) = (char)plVar1;
  }
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110c32ed0);
  if ((int)plVar1 != 0) {
    param_2[0x37] = 0x100;
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x50))(param_3,&PTR_DAT_110c32ed0);
    *(char *)(param_2 + 0x37) = (char)plVar1;
  }
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110c32ef0);
  if ((int)plVar1 != 0) {
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined1 *)(param_2 + 0x3c) = 1;
    (**(code **)(*param_3 + 0xb8))(param_3,&PTR_DAT_110c32ef0);
    *(ulong *)(param_2 + 0x38) = CONCAT44(uVar3,uVar2);
  }
  return;
}



/* Entry: 10a97f800; end: 10a97fa67;  */

void FUN_10a97f800(long param_1,byte *param_2,undefined8 param_3,int param_4)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  *(byte *)(param_1 + 0x34) = param_2[1] & *param_2;
  lVar2 = param_1 + 0x98;
  uStack_48 = param_3;
  FUN_10a4f5f30(lVar2,param_3,&UNK_10dd5b8f9,&uStack_48,&uStack_49);
  if (param_4 == 0) {
    if (param_2[3] == 1) {
      *(byte *)(lVar2 + 0x72) = param_2[2];
    }
    if (param_2[0x20] == 1) {
      *(undefined4 *)(lVar2 + 0x68) = *(undefined4 *)(param_2 + 0x1c);
    }
    if (param_2[0x28] == 1) {
      *(undefined4 *)(lVar2 + 0x6c) = *(undefined4 *)(param_2 + 0x24);
    }
    if (param_2[0x39] == 1) {
      *(byte *)(lVar2 + 0x39) = param_2[0x38];
    }
    if (param_2[0x40] == 1) {
      *(undefined4 *)(lVar2 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    }
    if (param_2[0x48] == 1) {
      *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)(param_2 + 0x44);
    }
  }
  else {
    *(undefined1 *)(lVar2 + 0x48) = 0;
    *(undefined1 *)(lVar2 + 0x39) = 0;
    *(undefined1 *)(lVar2 + 0x72) = 1;
  }
  if (param_2[0x19] == 1) {
    *(byte *)(lVar2 + 100) = param_2[0x18];
  }
  if (param_2[0x2d] == 1) {
    *(byte *)(lVar2 + 0x38) = param_2[0x2c];
  }
  if (param_2[0x34] == 1) {
    *(undefined4 *)(lVar2 + 0x44) = *(undefined4 *)(param_2 + 0x30);
  }
  if (param_2[0x3b] == 1) {
    *(byte *)(lVar2 + 0x3a) = param_2[0x3a];
  }
  *(byte *)(param_1 + 0x5c) = param_2[0x4d] & param_2[0x4c];
  if (param_2[0x4f] == 1) {
    *(byte *)(param_1 + 0x5d) = param_2[0x4e];
  }
  if (param_2[0x51] == 1) {
    *(byte *)(param_1 + 0x5e) = param_2[0x50];
  }
  if (param_2[0x58] == 1) {
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x54);
  }
  if (param_2[0x5d] == 1) {
    *(byte *)(param_1 + 100) = param_2[0x5c];
  }
  if (param_2[100] == 1) {
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x60);
  }
  if (param_2[0x69] == 1) {
    *(byte *)(param_1 + 0x6c) = param_2[0x68];
  }
  if (param_2[0x6b] == 1) {
    *(byte *)(lVar2 + 0x70) = param_2[0x6a];
  }
  if (param_2[0x6d] == 1) {
    *(byte *)(lVar2 + 0x71) = param_2[0x6c];
  }
  if (param_2[0x6f] == 1) {
    bVar1 = param_2[0x6e];
    lVar2 = param_1 + 0x98;
    uStack_48 = param_3;
    FUN_10a4f5f30(lVar2,param_3,&UNK_10dd5b8f9,&uStack_48,&uStack_49);
    *(byte *)(lVar2 + 0x78) = bVar1;
  }
  if (param_2[0x78] == 1) {
    uVar3 = *(undefined8 *)(param_2 + 0x70);
    param_1 = param_1 + 0x98;
    uStack_48 = param_3;
    FUN_10a4f5f30(param_1,param_3,&UNK_10dd5b8f9,&uStack_48,&uStack_49);
    *(undefined8 *)(param_1 + 0x80) = uVar3;
  }
  return;
}



/* Entry: 10a97fa68; end: 10a97fb23;  */

undefined8 * FUN_10a97fa68(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  lVar1 = 0x80;
  __Znwm();
  FUN_10ab0e794();
  plVar2 = (long *)param_1[2];
  param_1[2] = lVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    lVar1 = param_1[2];
  }
  *(undefined4 *)(lVar1 + 0x20) = 0x3ba3d70a;
  return param_1;
}



/* Entry: 10a97fb24; end: 10a980147;  */

void FUN_10a97fb24(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,long *param_5,
                  long *param_6,int param_7,int *param_8)

{
  undefined **ppuVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined *puVar13;
  int *piVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 auStack_1a0 [2];
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined4 auStack_188 [2];
  undefined **ppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_138;
  long lStack_130;
  undefined8 *puStack_128;
  undefined8 auStack_120 [2];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_d8;
  int *piStack_d0;
  undefined8 *puStack_c8;
  undefined8 auStack_c0 [2];
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  code *pcStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_4 + 0x1150) == '\x01') {
    FUN_10a0f3910(&uStack_110,*param_5 + 0x10,0);
    if ((int)uStack_110._4_4_ < 3) {
      lVar12 = (long)uStack_108._4_4_ * (long)(int)uStack_108;
      if (0 < (int)uStack_110._4_4_) goto LAB_10a97fbd8;
      lVar10 = 0;
    }
    else {
      lVar12 = 1;
      piVar14 = piStack_d0;
      uVar8 = (ulong)uStack_110._4_4_;
      do {
        lVar12 = lVar12 * *piVar14;
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 1;
      } while (uVar8 != 0);
LAB_10a97fbd8:
      lVar10 = puStack_c8[(ulong)uStack_110._4_4_ - 1];
    }
    lVar12 = lVar12 * lVar10 * 2;
    FUN_10a1b29f0(lVar12);
    func_0x00010936ff7c(&uStack_170,(int)uStack_108 << 1,uStack_108._4_4_,(uint)uStack_110 & 0xfff,
                        lVar12,*puStack_c8);
    pcStack_a0 = (code *)0x0;
    ppuStack_b0 = (undefined **)CONCAT44(ppuStack_b0._4_4_,0x1010000);
    ppuStack_180 = (undefined **)&uStack_110;
    uStack_178 = 0;
    auStack_188[0] = 0x1010000;
    auStack_1a0[0] = 0x2010000;
    uStack_190 = 0;
    puStack_198 = &uStack_170;
    ppuStack_a8 = ppuStack_180;
    func_0x000109a923a8(&ppuStack_b0,auStack_188,auStack_1a0);
    uVar15 = *puStack_128;
    ppuVar6 = (undefined **)0xa8;
    __Znwm();
    ppuVar6[1] = (undefined *)0x0;
    ppuVar6[2] = (undefined *)0x0;
    *ppuVar6 = (undefined *)&PTR_FUN_110baa4d8;
    ppuVar1 = ppuVar6 + 3;
    ppuStack_b0 = (undefined **)0x109d138c8;
    ppuStack_a8 = &PTR_DAT_110b3e838;
    pcStack_a0 = FUN_10a1b1e10;
    FUN_10a1b2668(ppuVar1,lVar12,CONCAT44(uStack_168,uStack_164),uVar15,7,&ppuStack_b0,0,0);
    (*(code *)*ppuStack_a8)(&ppuStack_a8);
    ppuStack_b0 = ppuVar1;
    ppuStack_a8 = ppuVar6;
    if (lStack_138 != 0) {
      piVar14 = (int *)(lStack_138 + 0x14);
      do {
        iVar3 = *piVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_170);
      }
    }
    lStack_138 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    if (0 < uStack_170._4_4_) {
      lVar12 = 0;
      do {
        *(undefined4 *)(lStack_130 + lVar12 * 4) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < uStack_170._4_4_);
    }
    if (puStack_128 != auStack_120 && puStack_128 != (undefined8 *)0x0) {
      _free(puStack_128[-1]);
    }
    if (lStack_d8 != 0) {
      piVar14 = (int *)(lStack_d8 + 0x14);
      do {
        iVar3 = *piVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_110);
      }
    }
    lStack_d8 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    if (0 < (int)uStack_110._4_4_) {
      lVar12 = 0;
      do {
        piStack_d0[lVar12] = 0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)uStack_110._4_4_);
    }
    if (puStack_c8 != auStack_c0 && puStack_c8 != (undefined8 *)0x0) {
      _free(puStack_c8[-1]);
    }
    FUN_10a16b1ec(param_5,&ppuStack_b0);
    ppuVar1 = ppuStack_a8;
    if (ppuStack_a8 != (undefined **)0x0) {
      ppuVar6 = ppuStack_a8 + 1;
      do {
        puVar13 = *ppuVar6;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
        if (bVar5) {
          *ppuVar6 = puVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuStack_a8 + 0x10))(ppuStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar1);
      }
    }
  }
  if ((param_7 == 0) || (*param_6 == 0)) {
    param_4 = *param_5;
    plVar7 = (long *)(param_2 + 0x28);
    FUN_10a980148();
    lVar12 = *(long *)(param_2 + 0x30);
    uVar15 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = *(undefined8 *)(param_2 + 0x30);
    *param_1 = uVar15;
    if (lVar12 != 0) {
      plVar16 = (long *)(lVar12 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = *plVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar11 = (undefined8 *)&UNK_10e482b00;
    goto LAB_10a980078;
  }
  FUN_10a980148(param_2,*param_5);
  lVar12 = *(long *)(param_2 + 0x18);
  if (lVar12 == 0) {
    uStack_170 = param_4;
    FUN_10a0dbc78(&uStack_110,&ppuStack_b0,&uStack_170,param_2);
    FUN_10a02bf24((long *)(param_2 + 0x18),&uStack_110);
    if (uStack_108 != (long *)0x0) {
      plVar7 = uStack_108 + 1;
      do {
        lVar12 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*uStack_108 + 0x10))(uStack_108);
        __ZNSt3__119__shared_weak_count14__release_weakEv(uStack_108);
      }
    }
  }
  else {
    FUN_10a1db4cc(lVar12,param_2);
  }
  (**(code **)(**(long **)(param_2 + 0x18) + 0x98))(*(long **)(param_2 + 0x18),&UNK_10e482b00);
  plVar16 = (long *)*param_6;
  plVar7 = plVar16;
  (**(code **)(*plVar16 + 0xb0))(plVar16);
  (**(code **)(*plVar16 + 0xb8))(plVar16);
  FUN_10a98019c(param_2 + 0x28,CONCAT44((int)plVar16 / 2,(int)plVar7 / 2),4,1);
  if (*(char *)((long)param_8 + 0x17) < '\0') {
    if (*(long *)(param_8 + 2) == 4) {
      param_8 = *(int **)param_8;
      goto LAB_10a97ffa0;
    }
LAB_10a97ffb4:
    uVar9 = 1;
  }
  else {
    if (*(char *)((long)param_8 + 0x17) != '\x04') goto LAB_10a97ffb4;
LAB_10a97ffa0:
    if (*param_8 != 0x72696168) goto LAB_10a97ffb4;
    uVar9 = 2;
  }
  plVar7 = *(long **)(param_2 + 0x10);
  *(undefined4 *)((long)plVar7 + 100) = uVar9;
  plVar7[0xd] = 0xa800000060;
  uStack_108 = *(long **)(param_2 + 0x20);
  uStack_110 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar16 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = *plVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  (**(code **)(*plVar7 + 0x18))(plVar7,param_4,param_3,param_6,&uStack_110,param_2 + 0x28,0);
  plVar16 = uStack_108;
  if (uStack_108 != (long *)0x0) {
    plVar2 = uStack_108 + 1;
    do {
      lVar12 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*uStack_108 + 0x10))(uStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar7 = plVar16;
    }
  }
  lVar12 = *(long *)(param_2 + 0x30);
  uVar15 = *(undefined8 *)(param_2 + 0x28);
  param_1[1] = *(undefined8 *)(param_2 + 0x30);
  *param_1 = uVar15;
  if (lVar12 != 0) {
    plVar16 = (long *)(lVar12 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = *plVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar11 = (undefined8 *)&UNK_10e482b24;
LAB_10a980078:
  uVar15 = *puVar11;
  uVar18 = puVar11[3];
  uVar17 = puVar11[2];
  param_1[3] = puVar11[1];
  param_1[2] = uVar15;
  param_1[5] = uVar18;
  param_1[4] = uVar17;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(puVar11 + 4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_4 != 0) {
    func_0x000104bd46a0();
    FUN_10a05b1b0(&uStack_110);
  }
  __Unwind_Resume();
  uVar8 = (ulong)*(uint *)(param_4 + 0x24);
  FUN_10ab79c98(uVar8);
  FUN_10a98019c(plVar7,*(undefined8 *)(param_4 + 0x10),uVar8,0);
                    /* WARNING: Could not recover jumptable at 0x00010a980198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*plVar7 + 0x98))((long *)*plVar7,*(undefined8 *)(param_4 + 0x28),0,0);
  return;
}



/* Entry: 10a980148; end: 10a98019b;  */

void FUN_10a980148(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(uint *)(param_2 + 0x24);
  FUN_10ab79c98(uVar1);
  FUN_10a98019c(param_1,*(undefined8 *)(param_2 + 0x10),uVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010a980198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x98))((long *)*param_1,*(undefined8 *)(param_2 + 0x28),0,0);
  return;
}



/* Entry: 10a98019c; end: 10a9802c7;  */

void FUN_10a98019c(undefined8 *param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  long lStack_88;
  long *plStack_80;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined8 uStack_58;
  
  plVar7 = (long *)*param_1;
  uVar8 = (uint)((ulong)param_2 >> 0x20);
  if (plVar7 != (long *)0x0) {
    plVar5 = plVar7;
    (**(code **)(*plVar7 + 0x28))();
    uVar3 = (uint)plVar5;
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    (**(code **)(*plVar7 + 0x30))();
    uVar4 = (uint)plVar7;
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    if (uVar3 == (uint)param_2 && uVar4 == uVar8) {
      plVar7 = (long *)*param_1;
      (**(code **)(*plVar7 + 0x50))();
      if ((int)plVar7 == param_3) {
        return;
      }
    }
  }
  lVar6 = 0;
  FUN_10a2421c8();
  uStack_58 = 0x100000000;
  uStack_6c = 1;
  uStack_60 = 1;
  uStack_5c = 0;
  uStack_74 = (uint)param_2;
  uStack_70 = uVar8;
  iStack_68 = param_3;
  uStack_64 = param_4;
  FUN_10a048f04(&lStack_88,*(undefined8 *)(lVar6 + 0x1e0),&uStack_74);
  *(undefined1 *)(lStack_88 + 0x19) = 1;
  FUN_10a00e5c4(param_1,&lStack_88);
  if (plStack_80 != (long *)0x0) {
    plVar7 = plStack_80 + 1;
    do {
      lVar6 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
    }
  }
  return;
}



/* Entry: 10a9802c8; end: 10a98035f;  */

undefined1  [16] FUN_10a9802c8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x18;
  auVar1._0_8_ = &UNK_10f6878f5;
  return auVar1;
}



/* Entry: 10a980360; end: 10a980447;  */

void FUN_10a980360(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0xffffffff00000001;
  puStack_88 = (undefined *)0x0;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  puStack_70 = &UNK_10f68581c;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xa2;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10a980448(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f686fe3;
  uStack_68 = 0xffffffffffffffff;
  puStack_70 = (undefined *)0x100000064;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a9b82a0();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f686ff4;
  uStack_68 = 0xffffffffffffffff;
  puStack_70 = (undefined *)0x100000064;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a9b84b4(param_1,&puStack_88);
  FUN_10a9b85c0(param_1);
  return;
}



/* Entry: 10a980448; end: 10a98051f;  */

/* WARNING: Removing unreachable block (ram,0x00010a9804e0) */

undefined1  [16] FUN_10a980448(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6878f5,0x18);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9b81a4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a980520; end: 10a980573;  */

undefined8 * FUN_10a980520(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c32f20;
  FUN_10a9b814c(param_1 + 5);
  FUN_10a9b814c(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a980574; end: 10a980577;  */

undefined8 * FUN_10a980574(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c32f20;
  FUN_10a9b814c(param_1 + 5);
  FUN_10a9b814c(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a980578; end: 10a98058b;  */

void FUN_10a980578(void)

{
  FUN_10a980520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a98058c; end: 10a9805ff;  */

undefined8 * FUN_10a98058c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10a980600; end: 10a98067b;  */

undefined1  [16] FUN_10a980600(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10f6627fe;
  return auVar1;
}



/* Entry: 10a98067c; end: 10a9809f7;  */

void FUN_10a98067c(undefined8 param_1)

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
  
  puStack_98 = &UNK_10f68790e;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f68581c;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a9b867c(param_1,&puStack_98,100);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f685be6;
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
  FUN_10a9b876c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f687002;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a9b893c(param_1,&puStack_98);
  FUN_10a9b8a70(param_1);
  return;
}



/* Entry: 10a9809f8; end: 10a980dd7;  */

void FUN_10a9809f8(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6627fe,0x14);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c33a48;
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
  uStack_58 = 0x99;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c33a48;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a980db8;
    FUN_10a054dac(param_1,&UNK_10f687015,FUN_10a9b91d0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a980db8;
    FUN_10a054dac(param_1,&UNK_10f687024,FUN_10a9b9398,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a980db8;
    FUN_10a054dac(param_1,&UNK_10f687037,FUN_10a9b94dc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f687045,FUN_10a9b95a4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c34f30,FUN_10a9b9b18);
    FUN_10a0605c4(param_1,&DAT_10f6846a0,FUN_10a9ba844,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110ba6f40,FUN_10a134564);
    FUN_10a0605c4(param_1,&UNK_10f68704d,FUN_10a9ba974,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110ba6f40,FUN_10a134564);
    FUN_10a0605c4(param_1,&UNK_10f687062,FUN_10a9baa2c,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6627fe,0x14);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a980db8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a980dbc);
  (*pcVar6)();
}



/* Entry: 10a980dd8; end: 10a98101f;  */

undefined8 * FUN_10a980dd8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 uStack_51;
  
  puVar1 = param_1;
  FUN_10aa7093c();
  FUN_10a03c0d0(puVar1 + 0x1c);
  *param_1 = &PTR_FUN_110c32f78;
  param_1[2] = &PTR_DAT_110c33028;
  param_1[7] = &PTR_DAT_110c33080;
  param_1[0x1c] = &PTR_FUN_110c330a0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((long)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x27] = param_2;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110c34f58;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110c34fa8;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a9badb8;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x2b] = puVar1 + 3;
  param_1[0x2c] = puVar1;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110ba6f68;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[3] = &PTR_FUN_110ba6fb8;
  puVar1[0x12] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a135c10;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x2d] = puVar1 + 3;
  param_1[0x2e] = puVar1;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110ba6f68;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110ba6fb8;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a135c10;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x2f] = puVar1 + 3;
  param_1[0x30] = puVar1;
  FUN_10a05a5d4(param_1 + 0x31,&uStack_51);
  FUN_10a5ae998(param_1[0x1d],&PTR_DAT_110b9f988,param_2,param_1 + 0x1c);
  return param_1;
}



/* Entry: 10a981020; end: 10a98138b;  */

void FUN_10a981020(long param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  func_0x00010aa70acc();
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c330b8);
  if ((int)plVar4 == 0) {
    return;
  }
  ppuVar5 = &PTR_DAT_110c330b8;
  (**(code **)(*param_2 + 0x210))(param_2);
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x208))();
  uVar13 = (ulong)plVar4 & 0xffffffff;
  puVar11 = *(undefined8 **)(param_1 + 0x140);
  puVar14 = *(undefined8 **)(param_1 + 0x148);
  lVar15 = (long)puVar14 - (long)puVar11;
  lVar6 = lVar15 >> 4;
  bVar3 = uVar13 < (ulong)(lVar6 * 0x6db6db6db6db6db7);
  uVar12 = uVar13 + lVar6 * -0x6db6db6db6db6db7;
  if (bVar3 || uVar12 == 0) {
    if (bVar3) {
      while (puVar14 != puVar11 + uVar13 * 0xe) {
        puVar14 = puVar14 + -0xe;
        (**(code **)*puVar14)(puVar14);
      }
      *(undefined8 **)(param_1 + 0x148) = puVar11 + uVar13 * 0xe;
    }
  }
  else if ((ulong)((*(long *)(param_1 + 0x150) - (long)puVar14 >> 4) * 0x6db6db6db6db6db7) < uVar12)
  {
    lVar7 = *(long *)(param_1 + 0x150) - (long)puVar11 >> 4;
    uVar8 = lVar7 * -0x2492492492492492;
    if (uVar8 < uVar13 || uVar8 - uVar13 == 0) {
      uVar8 = uVar13;
    }
    if (0x124924924924923 < (ulong)(lVar7 * 0x6db6db6db6db6db7)) {
      uVar8 = 0x249249249249249;
    }
    if (0x249249249249249 < uVar8) {
      func_0x000109ffded8();
      func_0x00010aa70b70();
      (**(code **)(*ppuVar5 + 0x18))(ppuVar5,&PTR_DAT_110c330b8);
      plVar1 = (long *)plVar4[0x29];
      for (plVar4 = (long *)plVar4[0x28]; plVar4 != plVar1; plVar4 = plVar4 + 0xe) {
        (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
        (**(code **)(*plVar4 + 0x18))(plVar4,ppuVar5);
        (**(code **)(*ppuVar5 + 0x20))(ppuVar5);
      }
                    /* WARNING: Could not recover jumptable at 0x00010a981428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*ppuVar5 + 0x20))(ppuVar5);
      return;
    }
    lVar7 = uVar8 * 0x70;
    __Znwm();
    lVar6 = uVar13 * 0x70 + lVar6 * -0x10;
    puVar10 = (undefined8 *)(lVar15 + lVar7 + 8);
    do {
      puVar10[-1] = &PTR_DAT_110c339f8;
      *puVar10 = 0;
      puVar10[2] = 0;
      puVar10[1] = 0;
      puVar10[4] = 0;
      puVar10[3] = 0;
      puVar10[6] = 0;
      puVar10[5] = 0;
      puVar10[8] = 0;
      puVar10[7] = 0;
      puVar10[10] = 0;
      puVar10[9] = 0;
      puVar10[0xc] = 0;
      puVar10[0xb] = 0;
      puVar10 = puVar10 + 0xe;
      lVar6 = lVar6 + -0x70;
    } while (lVar6 != 0);
    lVar6 = (lVar7 + lVar15) - lVar15;
    if (puVar11 != puVar14) {
      lVar9 = 0;
      do {
        puVar10 = (undefined8 *)(lVar6 + lVar9);
        *(undefined1 *)(puVar10 + 1) = *(undefined1 *)((long)puVar11 + lVar9 + 8);
        *puVar10 = &PTR_DAT_110c339f8;
        uVar17 = *(undefined8 *)((long)puVar11 + lVar9 + 0x18);
        uVar16 = *(undefined8 *)((long)puVar11 + lVar9 + 0x10);
        puVar10[4] = *(undefined8 *)((long)puVar11 + lVar9 + 0x20);
        puVar10[3] = uVar17;
        puVar10[2] = uVar16;
        *(undefined8 *)((long)puVar11 + lVar9 + 0x18) = 0;
        *(undefined8 *)((long)puVar11 + lVar9 + 0x20) = 0;
        *(undefined8 *)((long)puVar11 + lVar9 + 0x10) = 0;
        uVar17 = *(undefined8 *)((long)puVar11 + lVar9 + 0x30);
        uVar16 = *(undefined8 *)((long)puVar11 + lVar9 + 0x28);
        puVar10[7] = *(undefined8 *)((long)puVar11 + lVar9 + 0x38);
        puVar10[6] = uVar17;
        puVar10[5] = uVar16;
        *(undefined8 *)((long)puVar11 + lVar9 + 0x30) = 0;
        *(undefined8 *)((long)puVar11 + lVar9 + 0x38) = 0;
        *(undefined8 *)((long)puVar11 + lVar9 + 0x28) = 0;
        uVar17 = *(undefined8 *)((long)puVar11 + lVar9 + 0x48);
        uVar16 = *(undefined8 *)((long)puVar11 + lVar9 + 0x40);
        puVar10[10] = *(undefined8 *)((long)puVar11 + lVar9 + 0x50);
        puVar10[9] = uVar17;
        puVar10[8] = uVar16;
        *(undefined8 *)((long)puVar11 + lVar9 + 0x48) = 0;
        *(undefined8 *)((long)puVar11 + lVar9 + 0x50) = 0;
        *(undefined8 *)((long)puVar11 + lVar9 + 0x40) = 0;
        uVar16 = *(undefined8 *)((long)puVar11 + lVar9 + 0x58);
        puVar10[0xc] = *(undefined8 *)((long)puVar11 + lVar9 + 0x60);
        puVar10[0xb] = uVar16;
        puVar10[0xd] = *(undefined8 *)((long)puVar11 + lVar9 + 0x68);
        *(undefined8 *)((long)puVar11 + lVar9 + 0x58) = 0;
        *(undefined8 *)((long)puVar11 + lVar9 + 0x60) = 0;
        *(undefined8 *)((long)puVar11 + lVar9 + 0x68) = 0;
        lVar9 = lVar9 + 0x70;
      } while ((undefined8 *)((long)puVar11 + lVar9) != puVar14);
      do {
        puVar10 = puVar11 + 0xe;
        (**(code **)*puVar11)(puVar11);
        puVar11 = puVar10;
      } while (puVar10 != puVar14);
      puVar11 = *(undefined8 **)(param_1 + 0x140);
    }
    *(long *)(param_1 + 0x140) = lVar6;
    *(ulong *)(param_1 + 0x148) = lVar7 + lVar15 + (uVar12 & 0xffffffff) * 0x70;
    *(ulong *)(param_1 + 0x150) = lVar7 + uVar8 * 0x70;
    if (puVar11 != (undefined8 *)0x0) {
      __ZdlPv(puVar11);
    }
  }
  else {
    lVar6 = uVar13 * 0x70 + lVar6 * -0x10;
    puVar11 = puVar14 + 2;
    do {
      puVar11[-2] = &PTR_DAT_110c339f8;
      puVar11[-1] = 0;
      puVar11[1] = 0;
      *puVar11 = 0;
      puVar11[3] = 0;
      puVar11[2] = 0;
      puVar11[5] = 0;
      puVar11[4] = 0;
      puVar11[7] = 0;
      puVar11[6] = 0;
      puVar11[9] = 0;
      puVar11[8] = 0;
      puVar11[0xb] = 0;
      puVar11[10] = 0;
      puVar11 = puVar11 + 0xe;
      lVar6 = lVar6 + -0x70;
    } while (lVar6 != 0);
    *(undefined8 **)(param_1 + 0x148) = puVar14 + (uVar12 & 0xffffffff) * 0xe;
  }
  if ((int)plVar4 != 0) {
    lVar6 = 0;
    uVar12 = 0;
    do {
      lVar15 = *(long *)(param_1 + 0x140);
      uVar8 = (*(long *)(param_1 + 0x148) - lVar15 >> 4) * 0x6db6db6db6db6db7;
      if (uVar8 < uVar12 || uVar8 - uVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a981388);
        (*pcVar2)();
      }
      (**(code **)(*param_2 + 0x218))(param_2,uVar12);
      (**(code **)(*(long *)(lVar15 + lVar6) + 0x10))(lVar15 + lVar6,param_2);
      (**(code **)(*param_2 + 0x220))(param_2);
      uVar12 = uVar12 + 1;
      lVar6 = lVar6 + 0x70;
    } while (uVar13 != uVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a981380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x220))(param_2);
  return;
}



/* Entry: 10a98138c; end: 10a98142b;  */

void FUN_10a98138c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  func_0x00010aa70b70();
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c330b8);
  plVar1 = *(long **)(param_1 + 0x148);
  for (plVar2 = *(long **)(param_1 + 0x140); plVar2 != plVar1; plVar2 = plVar2 + 0xe) {
    (**(code **)(*param_2 + 0x10))(param_2);
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a981428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10a98142c; end: 10a98158b;  */

void FUN_10a98142c(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c330d8);
  if ((int)plVar1 == 0) {
    if (*(char *)(param_1 + 0x27) < '\0') {
      *(undefined8 *)(param_1 + 0x18) = 0xd;
      puVar2 = *(undefined8 **)(param_1 + 0x10);
    }
    else {
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x27) = 0xd;
    }
    *puVar2 = 0x206e776f6e6b6e55;
    *(undefined8 *)((long)puVar2 + 5) = 0x6574617453206e77;
    *(undefined1 *)((long)puVar2 + 0xd) = 0;
  }
  else {
    (**(code **)(*param_2 + 0xa0))(&uStack_38,param_2,&PTR_DAT_110c330d8);
    if (*(char *)(param_1 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x10));
    }
    *(undefined8 *)(param_1 + 0x18) = uStack_30;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
    *(undefined8 *)(param_1 + 0x20) = uStack_28;
  }
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c330f8);
  if ((int)plVar1 != 0) {
    (**(code **)(*param_2 + 0xa0))(&uStack_38,param_2,&PTR_DAT_110c330f8);
    if (*(char *)(param_1 + 0x3f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x28));
    }
    *(undefined8 *)(param_1 + 0x30) = uStack_30;
    *(undefined8 *)(param_1 + 0x28) = uStack_38;
    *(undefined8 *)(param_1 + 0x38) = uStack_28;
  }
  return;
}



/* Entry: 10a98158c; end: 10a9819bb;  */

void FUN_10a98158c(long param_1,long *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c33118);
  if ((int)plVar3 == 0) {
    if (*(char *)(param_1 + 0x27) < '\0') {
      *(undefined8 *)(param_1 + 0x18) = 0xe;
      puVar6 = *(undefined8 **)(param_1 + 0x10);
    }
    else {
      puVar6 = (undefined8 *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x27) = 0xe;
    }
    *puVar6 = 0x206e776f6e6b6e55;
    *(undefined8 *)((long)puVar6 + 6) = 0x6e69616d6f64206e;
    *(undefined1 *)((long)puVar6 + 0xe) = 0;
  }
  else {
    (**(code **)(*param_2 + 0xa0))(&uStack_68,param_2,&PTR_DAT_110c33118);
    if (*(char *)(param_1 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x10));
    }
    *(undefined8 *)(param_1 + 0x18) = uStack_60;
    *(undefined8 *)(param_1 + 0x10) = uStack_68;
    *(undefined8 *)(param_1 + 0x20) = uStack_58;
  }
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c33138);
  if ((int)plVar3 != 0) {
    (**(code **)(*param_2 + 0xa0))(&uStack_68,param_2,&PTR_DAT_110c33138);
    if (*(char *)(param_1 + 0x3f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x28));
    }
    *(undefined8 *)(param_1 + 0x30) = uStack_60;
    *(undefined8 *)(param_1 + 0x28) = uStack_68;
    *(undefined8 *)(param_1 + 0x38) = uStack_58;
  }
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c33158);
  if ((int)plVar3 == 0) {
    if (*(char *)(param_1 + 0x57) < '\0') {
      *(undefined8 *)(param_1 + 0x48) = 4;
      puVar7 = *(undefined4 **)(param_1 + 0x40);
    }
    else {
      puVar7 = (undefined4 *)(param_1 + 0x40);
      *(undefined1 *)(param_1 + 0x57) = 4;
    }
    *puVar7 = 0x656e6f6e;
    *(undefined1 *)(puVar7 + 1) = 0;
  }
  else {
    (**(code **)(*param_2 + 0xa0))(&uStack_68,param_2,&PTR_DAT_110c33158);
    if (*(char *)(param_1 + 0x57) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x40));
    }
    *(undefined8 *)(param_1 + 0x48) = uStack_60;
    *(undefined8 *)(param_1 + 0x40) = uStack_68;
    *(undefined8 *)(param_1 + 0x50) = uStack_58;
  }
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c33178);
  if ((int)plVar3 != 0) {
    ppuVar5 = &PTR_DAT_110c33178;
    (**(code **)(*param_2 + 0x210))(param_2);
    plVar3 = param_2;
    (**(code **)(*param_2 + 0x208))();
    uVar14 = (ulong)plVar3 & 0xffffffff;
    lVar11 = *(long *)(param_1 + 0x58);
    puVar6 = *(undefined8 **)(param_1 + 0x60);
    lVar16 = (long)puVar6 - lVar11;
    uVar15 = lVar16 >> 6;
    if (uVar15 < uVar14) {
      uVar13 = uVar14 - uVar15;
      if ((ulong)(*(long *)(param_1 + 0x68) - (long)puVar6 >> 6) < uVar13) {
        uVar8 = *(long *)(param_1 + 0x68) - lVar11;
        uVar10 = (long)uVar8 >> 5;
        if (uVar10 <= uVar14) {
          uVar10 = uVar14;
        }
        if (0x7fffffffffffffbf < uVar8) {
          uVar10 = 0x3ffffffffffffff;
        }
        FUN_10a9b9ae4();
        lVar11 = uVar14 * 0x40 + uVar15 * -0x40;
        puVar6 = (undefined8 *)(lVar16 + uVar10 + 8);
        do {
          puVar6[-1] = &PTR_DAT_110c33998;
          *puVar6 = 0;
          puVar6[2] = 0;
          puVar6[1] = 0;
          puVar6[4] = 0;
          puVar6[3] = 0;
          puVar6[6] = 0;
          puVar6[5] = 0;
          puVar6 = puVar6 + 8;
          lVar11 = lVar11 + -0x40;
        } while (lVar11 != 0);
        puVar4 = *(undefined8 **)(param_1 + 0x58);
        puVar1 = *(undefined8 **)(param_1 + 0x60);
        puVar9 = (undefined8 *)((long)puVar4 + ((uVar10 + lVar16) - (long)puVar1));
        puVar6 = puVar4;
        puVar12 = puVar9;
        if (puVar1 != puVar4) {
          do {
            *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar6 + 1);
            *puVar12 = &PTR_DAT_110c33998;
            uVar18 = puVar6[3];
            uVar17 = puVar6[2];
            puVar12[4] = puVar6[4];
            puVar12[3] = uVar18;
            puVar12[2] = uVar17;
            puVar6[3] = 0;
            puVar6[4] = 0;
            puVar6[2] = 0;
            uVar18 = puVar6[6];
            uVar17 = puVar6[5];
            puVar12[7] = puVar6[7];
            puVar12[6] = uVar18;
            puVar12[5] = uVar17;
            puVar6[6] = 0;
            puVar6[7] = 0;
            puVar6[5] = 0;
            puVar6 = puVar6 + 8;
            puVar12 = puVar12 + 8;
          } while (puVar6 != puVar1);
          do {
            puVar6 = puVar4 + 8;
            (**(code **)*puVar4)(puVar4);
            puVar4 = puVar6;
          } while (puVar6 != puVar1);
          puVar4 = *(undefined8 **)(param_1 + 0x58);
        }
        *(undefined8 **)(param_1 + 0x58) = puVar9;
        *(ulong *)(param_1 + 0x60) = uVar10 + lVar16 + uVar13 * 0x40;
        *(ulong *)(param_1 + 0x68) = uVar10 + (long)ppuVar5 * 0x40;
        if (puVar4 != (undefined8 *)0x0) {
          __ZdlPv();
        }
      }
      else {
        puVar9 = puVar6 + 2;
        lVar11 = uVar14 * 0x40 + uVar15 * -0x40;
        do {
          puVar9[-2] = &PTR_DAT_110c33998;
          puVar9[-1] = 0;
          puVar9[1] = 0;
          *puVar9 = 0;
          puVar9[3] = 0;
          puVar9[2] = 0;
          puVar9[5] = 0;
          puVar9[4] = 0;
          puVar9 = puVar9 + 8;
          lVar11 = lVar11 + -0x40;
        } while (lVar11 != 0);
        *(undefined8 **)(param_1 + 0x60) = puVar6 + uVar13 * 8;
      }
    }
    else if (uVar14 < uVar15) {
      puVar9 = (undefined8 *)(lVar11 + uVar14 * 0x40);
      while (puVar6 != puVar9) {
        puVar6 = puVar6 + -8;
        (**(code **)*puVar6)(puVar6);
      }
      *(undefined8 **)(param_1 + 0x60) = puVar9;
    }
    if ((int)plVar3 != 0) {
      lVar11 = 0;
      uVar15 = 0;
      do {
        lVar16 = *(long *)(param_1 + 0x58);
        if ((ulong)(*(long *)(param_1 + 0x60) - lVar16 >> 6) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9819bc);
          (*pcVar2)();
        }
        (**(code **)(*param_2 + 0x218))(param_2,uVar15);
        (**(code **)(*(long *)(lVar16 + lVar11) + 0x10))(lVar16 + lVar11,param_2);
        (**(code **)(*param_2 + 0x220))(param_2);
        uVar15 = uVar15 + 1;
        lVar11 = lVar11 + 0x40;
      } while (uVar14 != uVar15);
    }
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  return;
}



/* Entry: 10a9819bc; end: 10a981c13;  */

/* WARNING: Removing unreachable block (ram,0x00010a981de4) */
/* WARNING: Removing unreachable block (ram,0x00010a98201c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a9819bc(long param_1,code *******param_2)

{
  code ******ppppppcVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code ******ppppppcVar5;
  code ****ppppcVar6;
  code ***pppcVar7;
  code *******pppppppcVar8;
  code *******pppppppcVar9;
  code *******pppppppcVar10;
  code ******ppppppcVar11;
  undefined **ppuVar12;
  undefined8 in_x7;
  code *****pppppcVar13;
  code **ppcVar14;
  code ******ppppppcVar15;
  long lVar16;
  long *plVar17;
  code *****pppppcVar18;
  code *******pppppppcVar19;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  code *******pppppppcStack_1f8;
  code *******pppppppcStack_1f0;
  code *******pppppppcStack_1e8;
  code *******pppppppcStack_1e0;
  long alStack_1d8 [7];
  undefined8 uStack_1a0;
  code *******pppppppcStack_198;
  code *******pppppppcStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  code *******pppppppcStack_158;
  code *******pppppppcStack_150;
  undefined1 auStack_148 [56];
  undefined8 uStack_110;
  long lStack_108;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long *aplStack_80 [3];
  undefined1 auStack_68 [24];
  undefined8 auStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a00d760(param_2,&PTR_DAT_110c33118,param_1 + 0x10);
  FUN_10a00d760(param_2,&PTR_DAT_110c33138,param_1 + 0x28);
  func_0x000107c2b054(aplStack_80,"none");
  func_0x000107c2b054(auStack_68,&DAT_10f2f4aa3);
  func_0x000107c2b054(auStack_50,&UNK_10f6870f7);
  lStack_98 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  FUN_10a102f04(&lStack_98,aplStack_80,&lStack_38,3);
  lVar16 = 0;
  do {
    if ((&cStack_39)[lVar16] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_50 + lVar16));
    }
    lVar16 = lVar16 + -0x18;
  } while (lVar16 != -0x48);
  lVar16 = lStack_98;
  FUN_10a7a42ec(lStack_98,lStack_90,param_1 + 0x40,aplStack_80);
  if (lVar16 == lStack_90) {
    FUN_10a0b4ec0(&lStack_98,param_1 + 0x40);
  }
  pppppcVar13 = (code *****)(param_1 + 0x40);
  (*(code *)(*param_2)[7])(param_2,&PTR_DAT_110c33158,pppppcVar13,&lStack_98);
  aplStack_80[0] = &lStack_98;
  FUN_10a0426d8(aplStack_80);
  ppuVar12 = &PTR_DAT_110c33178;
  (*(code *)(*param_2)[3])(param_2);
  plVar2 = *(long **)(param_1 + 0x60);
  for (plVar17 = *(long **)(param_1 + 0x58); plVar17 != plVar2; plVar17 = plVar17 + 8) {
    (*(code *)(*param_2)[2])(param_2);
    ppuVar12 = (undefined **)param_2;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    (*(code *)(*param_2)[4])(param_2);
  }
  (*(code *)(*param_2)[4])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  aplStack_80[0] = plVar17;
  FUN_10a0426d8(aplStack_80);
  __Unwind_Resume();
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppcVar9 = param_2;
  if ((*(byte *)((long)param_2 + 0x104) & 1) == 0) {
    FUN_10a3bf120(&pppppppcStack_1e8);
    pppppcVar18 = param_2[0x27][0x20];
    FUN_10a982300(&uStack_210,param_2[0x31],param_2);
    ppppppcVar5 = (code ******)0x138;
    __Znwm();
    pppppppcStack_158 = pppppppcStack_1e8;
    ppppppcVar11 = ppppppcVar5 + 1;
    *ppppppcVar11 = (code *****)0x0;
    ppppppcVar5[2] = (code *****)0x0;
    *ppppppcVar5 = (code *****)&PTR_FUN_110b9f3b0;
    ppppppcVar15 = ppppppcVar5 + 3;
    pppppppcStack_1e8 = (code *******)0x0;
    pppppppcStack_150 = pppppppcStack_1e0;
    (**(code **)(alStack_1d8[0] + 0x10))(auStack_148,alStack_1d8);
    uStack_110 = uStack_1a0;
    ppppcVar6 = pppppcVar18[0x42];
    pppppcVar13 = (code *****)pppppcVar18[0x41];
    if (-1 < (char)*(byte *)((long)pppppcVar18 + 0x21f)) {
      ppppcVar6 = (code ****)(ulong)*(byte *)((long)pppppcVar18 + 0x21f);
      pppppcVar13 = pppppcVar18 + 0x41;
    }
    pppppppcStack_198 = (code *******)FUN_10a9bb2d0;
    pppppppcStack_190 = (code *******)&PTR_FUN_110c35008;
    uStack_188 = uStack_210;
    uStack_178 = uStack_200;
    uStack_180 = uStack_208;
    uStack_208 = 0;
    uStack_200 = 0;
    FUN_10a23708c(ppppppcVar15,&UNK_10f6870ae,0x20,&DAT_10f685c76,3,&pppppppcStack_158,4,in_x7,
                  pppppcVar13,ppppcVar6,&pppppppcStack_198);
    (*(code *)*pppppppcStack_190)(&pppppppcStack_190);
    FUN_10a042634(&pppppppcStack_158);
    pppppppcStack_1f8 = (code *******)ppppppcVar15;
    pppppppcStack_1f0 = (code *******)ppppppcVar5;
    FUN_10a9823a8(&uStack_210);
    FUN_10a042634(&pppppppcStack_1e8);
    ppppcVar6 = param_2[0x27][0x20][0x39];
    (*(code *)(*ppppcVar6)[0xc])();
    pppppppcStack_1e8 = (code *******)0x0;
    pppppppcStack_1e0 = (code *******)0x0;
    pppcVar7 = ppppcVar6[1];
    if (((pppcVar7 != (code ***)0x0) &&
        (__ZNSt3__119__shared_weak_count4lockEv(), pppppppcStack_1e0 = (code *******)pppcVar7,
        pppcVar7 != (code ***)0x0)) &&
       (pppppppcStack_1e8 = (code *******)*ppppcVar6, pppppppcStack_1e8 != (code *******)0x0)) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppcVar11,0x10);
        if (bVar4) {
          *ppppppcVar11 = (code *****)((long)*ppppppcVar11 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      pppppppcStack_198 = (code *******)ppppppcVar15;
      pppppppcStack_190 = (code *******)ppppppcVar5;
      (*(code *)(*pppppppcStack_1e8)[2])(&pppppppcStack_158,pppppppcStack_1e8,&pppppppcStack_198);
      pppppppcVar9 = pppppppcStack_190;
      if (pppppppcStack_190 != (code *******)0x0) {
        ppppppcVar15 = (code ******)(pppppppcStack_190 + 1);
        do {
          pppppcVar13 = *ppppppcVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppppcVar15,0x10);
          if (bVar4) {
            *ppppppcVar15 = (code *****)((long)pppppcVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (pppppcVar13 == (code *****)0x0) {
          (*(code *)(*pppppppcStack_190)[2])(pppppppcStack_190);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar9);
        }
      }
    }
    pppppppcVar9 = pppppppcStack_1e0;
    if (pppppppcStack_1e0 != (code *******)0x0) {
      pppcVar7 = (code ***)(pppppppcStack_1e0 + 1);
      do {
        ppcVar14 = *pppcVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppcVar7,0x10);
        if (bVar4) {
          *pppcVar7 = (code **)((long)ppcVar14 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppcVar14 == (code **)0x0) {
        (*(code *)(*pppppppcStack_1e0)[2])(pppppppcStack_1e0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar9);
      }
    }
    pppppppcVar9 = pppppppcStack_1f0;
    if (pppppppcStack_1f0 != (code *******)0x0) {
      ppppppcVar15 = (code ******)(pppppppcStack_1f0 + 1);
      do {
        pppppcVar13 = *ppppppcVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppcVar15,0x10);
        if (bVar4) {
          *ppppppcVar15 = (code *****)((long)pppppcVar13 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppppcVar13 == (code *****)0x0) {
        (*(code *)(*pppppppcStack_1f0)[2])(pppppppcStack_1f0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar9);
      }
    }
    FUN_10a3bf120(&pppppppcStack_1e8);
    pppppcVar13 = param_2[0x27][0x20];
    FUN_10a9821d8(&uStack_210,param_2[0x31],param_2);
    pppppppcVar8 = (code *******)0x138;
    __Znwm();
    pppppppcStack_158 = pppppppcStack_1e8;
    pppppppcVar19 = pppppppcVar8 + 1;
    *pppppppcVar19 = (code ******)0x0;
    pppppppcVar8[2] = (code ******)0x0;
    *pppppppcVar8 = (code ******)&PTR_FUN_110b9f3b0;
    pppppppcVar10 = pppppppcVar8 + 3;
    pppppppcStack_1e8 = (code *******)0x0;
    pppppppcStack_150 = pppppppcStack_1e0;
    (**(code **)(alStack_1d8[0] + 0x10))(auStack_148,alStack_1d8);
    uStack_110 = uStack_1a0;
    ppppcVar6 = pppppcVar13[0x42];
    pppppcVar18 = (code *****)pppppcVar13[0x41];
    if (-1 < (char)*(byte *)((long)pppppcVar13 + 0x21f)) {
      ppppcVar6 = (code ****)(ulong)*(byte *)((long)pppppcVar13 + 0x21f);
      pppppcVar18 = pppppcVar13 + 0x41;
    }
    pppppppcStack_198 = (code *******)FUN_10a9bae48;
    pppppppcStack_190 = (code *******)&PTR_FUN_110c34ff0;
    uStack_188 = uStack_210;
    uStack_178 = uStack_200;
    uStack_180 = uStack_208;
    uStack_208 = 0;
    uStack_200 = 0;
    ppuVar12 = (undefined **)&UNK_10f687090;
    pppppcVar13 = (code *****)0x1d;
    FUN_10a23708c(pppppppcVar10,&UNK_10f687090,0x1d,&DAT_10f685c76,3,&pppppppcStack_158,4,in_x7,
                  pppppcVar18,ppppcVar6,&pppppppcStack_198);
    (*(code *)*pppppppcStack_190)(&pppppppcStack_190);
    FUN_10a042634(&pppppppcStack_158);
    pppppppcStack_1f8 = pppppppcVar10;
    pppppppcStack_1f0 = pppppppcVar8;
    FUN_10a982280(&uStack_210);
    FUN_10a042634(&pppppppcStack_1e8);
    ppppcVar6 = param_2[0x27][0x20][0x39];
    (*(code *)(*ppppcVar6)[0xc])();
    pppppppcStack_1e8 = (code *******)0x0;
    pppppppcStack_1e0 = (code *******)0x0;
    pppppppcVar9 = (code *******)ppppcVar6[1];
    if (((pppppppcVar9 != (code *******)0x0) &&
        (__ZNSt3__119__shared_weak_count4lockEv(), pppppppcStack_1e0 = pppppppcVar9,
        pppppppcVar9 != (code *******)0x0)) &&
       (pppppppcVar9 = (code *******)*ppppcVar6, pppppppcStack_1e8 = pppppppcVar9,
       pppppppcVar9 != (code *******)0x0)) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar19,0x10);
        if (bVar4) {
          *pppppppcVar19 = (code ******)((long)*pppppppcVar19 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      ppuVar12 = (undefined **)&pppppppcStack_198;
      pppppppcStack_198 = pppppppcVar10;
      pppppppcStack_190 = pppppppcVar8;
      (*(code *)(*pppppppcVar9)[2])(&pppppppcStack_158);
      pppppppcVar10 = pppppppcStack_190;
      if (pppppppcStack_190 != (code *******)0x0) {
        pppppppcVar8 = pppppppcStack_190 + 1;
        do {
          ppppppcVar15 = *pppppppcVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar8,0x10);
          if (bVar4) {
            *pppppppcVar8 = (code ******)((long)ppppppcVar15 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppppppcVar15 == (code ******)0x0) {
          (*(code *)(*pppppppcStack_190)[2])(pppppppcStack_190);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppppppcVar9 = pppppppcVar10;
        }
      }
    }
    pppppppcVar10 = pppppppcStack_1e0;
    if (pppppppcStack_1e0 != (code *******)0x0) {
      pppppppcVar8 = pppppppcStack_1e0 + 1;
      do {
        ppppppcVar15 = *pppppppcVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar8,0x10);
        if (bVar4) {
          *pppppppcVar8 = (code ******)((long)ppppppcVar15 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppppcVar15 == (code ******)0x0) {
        (*(code *)(*pppppppcStack_1e0)[2])(pppppppcStack_1e0);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppppcVar9 = pppppppcVar10;
      }
    }
    pppppppcVar10 = pppppppcStack_1f0;
    if (pppppppcStack_1f0 != (code *******)0x0) {
      pppppppcVar8 = pppppppcStack_1f0 + 1;
      do {
        ppppppcVar15 = *pppppppcVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar8,0x10);
        if (bVar4) {
          *pppppppcVar8 = (code ******)((long)ppppppcVar15 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppppcVar15 == (code ******)0x0) {
        (*(code *)(*pppppppcStack_1f0)[2])(pppppppcStack_1f0);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppppcVar9 = pppppppcVar10;
      }
    }
    *(undefined1 *)((long)param_2 + 0x104) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&pppppppcStack_198);
  func_0x00010a05a8c4(&pppppppcStack_1e8);
  FUN_10a05bd88(&pppppppcStack_1f8);
  __Unwind_Resume();
  __ZNSt3__115recursive_mutex4lockEv(ppuVar12 + 2);
  ppppppcVar11 = (code ******)0x48;
  __Znwm();
  ppppppcVar11[2] = (code *****)&PTR_FUN_110c33bf0;
  ppppppcVar11[3] = pppppcVar13;
  ppppppcVar15 = (code ******)ppuVar12[0xb];
  ppppppcVar5 = (code ******)ppuVar12[0xc];
  *ppppppcVar11 = (code *****)(ppuVar12 + 10);
  ppppppcVar11[1] = (code *****)ppppppcVar15;
  *ppppppcVar15 = (code *****)ppppppcVar11;
  ppuVar12[0xb] = (undefined *)ppppppcVar11;
  ppuVar12[0xc] = (undefined *)((long)ppppppcVar5 + 1);
  __ZNSt3__115recursive_mutex6unlockEv(ppuVar12 + 2);
  ppppppcVar5 = (code ******)ppuVar12[1];
  ppppppcVar15 = (code ******)*ppuVar12;
  if ((code ******)ppuVar12[1] != (code ******)0x0) {
    ppppppcVar1 = (code ******)((long)ppuVar12[1] + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppcVar1,0x10);
      if (bVar4) {
        *ppppppcVar1 = (code *****)((long)*ppppppcVar1 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *pppppppcVar9 = ppppppcVar11;
  pppppppcVar9[2] = ppppppcVar5;
  pppppppcVar9[1] = ppppppcVar15;
  return;
}



/* Entry: 10a981c14; end: 10a9821d7;  */

/* WARNING: Removing unreachable block (ram,0x00010a981de4) */
/* WARNING: Removing unreachable block (ram,0x00010a98201c) */

void FUN_10a981c14(undefined **param_1,undefined ***param_2,undefined *param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 in_x7;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  long alStack_138 [7];
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined1 auStack_a8 [56];
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = param_1;
  if ((*(byte *)((long)param_1 + 0x104) & 1) == 0) {
    FUN_10a3bf120(&ppuStack_148);
    lVar13 = *(long *)(param_1[0x27] + 0x100);
    FUN_10a982300(&uStack_170,param_1[0x31],param_1);
    ppuVar5 = (undefined **)0x138;
    __Znwm();
    ppuStack_b8 = ppuStack_148;
    ppuVar8 = ppuVar5 + 1;
    *ppuVar8 = (undefined *)0x0;
    ppuVar5[2] = (undefined *)0x0;
    *ppuVar5 = (undefined *)&PTR_FUN_110b9f3b0;
    ppuVar9 = ppuVar5 + 3;
    ppuStack_148 = (undefined **)0x0;
    ppuStack_b0 = ppuStack_140;
    (**(code **)(alStack_138[0] + 0x10))(auStack_a8,alStack_138);
    uStack_70 = uStack_100;
    uVar2 = *(ulong *)(lVar13 + 0x210);
    lVar12 = *(long *)(lVar13 + 0x208);
    if (-1 < (char)*(byte *)(lVar13 + 0x21f)) {
      uVar2 = (ulong)*(byte *)(lVar13 + 0x21f);
      lVar12 = lVar13 + 0x208;
    }
    ppuStack_f8 = (undefined **)FUN_10a9bb2d0;
    ppuStack_f0 = &PTR_FUN_110c35008;
    uStack_e8 = uStack_170;
    uStack_d8 = uStack_160;
    uStack_e0 = uStack_168;
    uStack_168 = 0;
    uStack_160 = 0;
    FUN_10a23708c(ppuVar9,&UNK_10f6870ae,0x20,&DAT_10f685c76,3,&ppuStack_b8,4,in_x7,lVar12,uVar2,
                  &ppuStack_f8);
    (*(code *)*ppuStack_f0)(&ppuStack_f0);
    FUN_10a042634(&ppuStack_b8);
    ppuStack_158 = ppuVar9;
    ppuStack_150 = ppuVar5;
    FUN_10a9823a8(&uStack_170);
    FUN_10a042634(&ppuStack_148);
    plVar6 = *(long **)(*(long *)(param_1[0x27] + 0x100) + 0x1c8);
    (**(code **)(*plVar6 + 0x60))();
    ppuStack_148 = (undefined **)0x0;
    ppuStack_140 = (undefined **)0x0;
    plVar7 = (long *)plVar6[1];
    if (((plVar7 != (long *)0x0) &&
        (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_140 = (undefined **)plVar7,
        plVar7 != (long *)0x0)) &&
       (ppuStack_148 = (undefined **)*plVar6, ppuStack_148 != (undefined **)0x0)) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
        if (bVar4) {
          *ppuVar8 = *ppuVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      ppuStack_f8 = ppuVar9;
      ppuStack_f0 = ppuVar5;
      (**(code **)(*ppuStack_148 + 0x10))(&ppuStack_b8,ppuStack_148,&ppuStack_f8);
      ppuVar9 = ppuStack_f0;
      if (ppuStack_f0 != (undefined **)0x0) {
        ppuVar5 = ppuStack_f0 + 1;
        do {
          puVar11 = *ppuVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
          if (bVar4) {
            *ppuVar5 = puVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar11 == (undefined *)0x0) {
          (**(code **)(*ppuStack_f0 + 0x10))(ppuStack_f0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
        }
      }
    }
    ppuVar9 = ppuStack_140;
    if (ppuStack_140 != (undefined **)0x0) {
      plVar6 = (long *)(ppuStack_140 + 1);
      do {
        lVar12 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)((long)*ppuStack_140 + 0x10))(ppuStack_140);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
      }
    }
    ppuVar9 = ppuStack_150;
    if (ppuStack_150 != (undefined **)0x0) {
      ppuVar5 = ppuStack_150 + 1;
      do {
        puVar11 = *ppuVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
        if (bVar4) {
          *ppuVar5 = puVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar11 == (undefined *)0x0) {
        (**(code **)(*ppuStack_150 + 0x10))(ppuStack_150);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
      }
    }
    FUN_10a3bf120(&ppuStack_148);
    lVar13 = *(long *)(param_1[0x27] + 0x100);
    FUN_10a9821d8(&uStack_170,param_1[0x31],param_1);
    ppuVar8 = (undefined **)0x138;
    __Znwm();
    ppuStack_b8 = ppuStack_148;
    ppuVar10 = ppuVar8 + 1;
    *ppuVar10 = (undefined *)0x0;
    ppuVar8[2] = (undefined *)0x0;
    *ppuVar8 = (undefined *)&PTR_FUN_110b9f3b0;
    ppuVar5 = ppuVar8 + 3;
    ppuStack_148 = (undefined **)0x0;
    ppuStack_b0 = ppuStack_140;
    (**(code **)(alStack_138[0] + 0x10))(auStack_a8,alStack_138);
    uStack_70 = uStack_100;
    uVar2 = *(ulong *)(lVar13 + 0x210);
    lVar12 = *(long *)(lVar13 + 0x208);
    if (-1 < (char)*(byte *)(lVar13 + 0x21f)) {
      uVar2 = (ulong)*(byte *)(lVar13 + 0x21f);
      lVar12 = lVar13 + 0x208;
    }
    ppuStack_f8 = (undefined **)FUN_10a9bae48;
    ppuStack_f0 = &PTR_FUN_110c34ff0;
    uStack_e8 = uStack_170;
    uStack_d8 = uStack_160;
    uStack_e0 = uStack_168;
    uStack_168 = 0;
    uStack_160 = 0;
    param_2 = (undefined ***)&UNK_10f687090;
    param_3 = (undefined *)0x1d;
    FUN_10a23708c(ppuVar5,&UNK_10f687090,0x1d,&DAT_10f685c76,3,&ppuStack_b8,4,in_x7,lVar12,uVar2,
                  &ppuStack_f8);
    (*(code *)*ppuStack_f0)(&ppuStack_f0);
    FUN_10a042634(&ppuStack_b8);
    ppuStack_158 = ppuVar5;
    ppuStack_150 = ppuVar8;
    FUN_10a982280(&uStack_170);
    FUN_10a042634(&ppuStack_148);
    plVar6 = *(long **)(*(long *)(param_1[0x27] + 0x100) + 0x1c8);
    (**(code **)(*plVar6 + 0x60))();
    ppuStack_148 = (undefined **)0x0;
    ppuStack_140 = (undefined **)0x0;
    ppuVar9 = (undefined **)plVar6[1];
    if (((ppuVar9 != (undefined **)0x0) &&
        (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_140 = ppuVar9,
        ppuVar9 != (undefined **)0x0)) &&
       (ppuVar9 = (undefined **)*plVar6, ppuStack_148 = ppuVar9, ppuVar9 != (undefined **)0x0)) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
        if (bVar4) {
          *ppuVar10 = *ppuVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      param_2 = &ppuStack_f8;
      ppuStack_f8 = ppuVar5;
      ppuStack_f0 = ppuVar8;
      (**(code **)(*ppuVar9 + 0x10))(&ppuStack_b8);
      ppuVar5 = ppuStack_f0;
      if (ppuStack_f0 != (undefined **)0x0) {
        ppuVar8 = ppuStack_f0 + 1;
        do {
          puVar11 = *ppuVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
          if (bVar4) {
            *ppuVar8 = puVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar11 == (undefined *)0x0) {
          (**(code **)(*ppuStack_f0 + 0x10))(ppuStack_f0);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar9 = ppuVar5;
        }
      }
    }
    ppuVar5 = ppuStack_140;
    if (ppuStack_140 != (undefined **)0x0) {
      ppuVar8 = ppuStack_140 + 1;
      do {
        puVar11 = *ppuVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
        if (bVar4) {
          *ppuVar8 = puVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar11 == (undefined *)0x0) {
        (**(code **)(*ppuStack_140 + 0x10))(ppuStack_140);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar9 = ppuVar5;
      }
    }
    ppuVar5 = ppuStack_150;
    if (ppuStack_150 != (undefined **)0x0) {
      ppuVar8 = ppuStack_150 + 1;
      do {
        puVar11 = *ppuVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
        if (bVar4) {
          *ppuVar8 = puVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar11 == (undefined *)0x0) {
        (**(code **)(*ppuStack_150 + 0x10))(ppuStack_150);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar9 = ppuVar5;
      }
    }
    *(undefined1 *)((long)param_1 + 0x104) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&ppuStack_f8);
  func_0x00010a05a8c4(&ppuStack_148);
  FUN_10a05bd88(&ppuStack_158);
  __Unwind_Resume();
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  ppuVar10 = (undefined **)0x48;
  __Znwm();
  ppuVar10[2] = (undefined *)&PTR_FUN_110c33bf0;
  ppuVar10[3] = param_3;
  ppuVar5 = param_2[0xb];
  ppuVar8 = param_2[0xc];
  *ppuVar10 = (undefined *)(param_2 + 10);
  ppuVar10[1] = (undefined *)ppuVar5;
  *ppuVar5 = (undefined *)ppuVar10;
  param_2[0xb] = ppuVar10;
  param_2[0xc] = (undefined **)((long)ppuVar8 + 1);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  ppuVar8 = param_2[1];
  ppuVar5 = *param_2;
  if (param_2[1] != (undefined **)0x0) {
    ppuVar1 = param_2[1] + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar4) {
        *ppuVar1 = *ppuVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *ppuVar9 = (undefined *)ppuVar10;
  ppuVar9[2] = (undefined *)ppuVar8;
  ppuVar9[1] = (undefined *)ppuVar5;
  return;
}



/* Entry: 10a9821d8; end: 10a98227f;  */

void FUN_10a9821d8(undefined8 *param_1,undefined8 *param_2,long param_3)

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
  plVar6[2] = (long)&PTR_FUN_110c33bf0;
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



/* Entry: 10a982280; end: 10a9822ff;  */

undefined8 * FUN_10a982280(undefined8 *param_1)

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



/* Entry: 10a982300; end: 10a9823a7;  */

void FUN_10a982300(undefined8 *param_1,undefined8 *param_2,long param_3)

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
  plVar6[2] = (long)&PTR_DAT_110c33c08;
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



/* Entry: 10a9823a8; end: 10a982427;  */

undefined8 * FUN_10a9823a8(undefined8 *param_1)

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



/* Entry: 10a982428; end: 10a98281f;  */

/* WARNING: Removing unreachable block (ram,0x00010a981de4) */
/* WARNING: Removing unreachable block (ram,0x00010a98201c) */

void FUN_10a982428(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *****pppppuVar6;
  undefined ***pppuVar7;
  long *plVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined1 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined ****ppppuVar17;
  undefined8 in_x7;
  undefined8 uVar18;
  undefined8 *extraout_x8;
  undefined **ppuVar19;
  undefined **ppuVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined ***pppuVar24;
  long *plVar25;
  undefined ***pppuVar26;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined ***pppuStack_428;
  undefined ***pppuStack_420;
  undefined ***pppuStack_418;
  undefined ***pppuStack_410;
  long alStack_408 [7];
  undefined8 uStack_3d0;
  undefined ***pppuStack_3c8;
  undefined ***pppuStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined ***pppuStack_388;
  undefined ***pppuStack_380;
  undefined1 auStack_378 [56];
  undefined8 uStack_340;
  long lStack_338;
  undefined ****ppppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined8 uStack_2c0;
  long *plStack_2b8;
  undefined8 auStack_2b0 [2];
  char cStack_299;
  code *pcStack_298;
  undefined **ppuStack_290;
  undefined8 *puStack_288;
  int iStack_280;
  code *pcStack_258;
  undefined **ppuStack_250;
  undefined8 *puStack_248;
  int iStack_240;
  long lStack_218;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  long *plStack_180;
  long *plStack_178;
  undefined8 ****ppppuStack_170;
  ulong uStack_168;
  byte bStack_159;
  undefined1 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_130;
  long alStack_128 [7];
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined1 auStack_98 [56];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_148[0] = 0;
  uStack_140 = 0;
  uStack_150 = 0;
  uStack_158 = 3;
  func_0x00010938229c();
  puVar11 = auStack_148;
  uStack_150 = param_2;
  func_0x00010945a80c(puVar11,&DAT_10f3696e6);
  uVar3 = *puVar11;
  *puVar11 = uStack_158;
  uVar18 = *(undefined8 *)(puVar11 + 8);
  uStack_158 = uVar3;
  *(undefined8 *)(puVar11 + 8) = uStack_150;
  uStack_150 = uVar18;
  func_0x000109380ffc(&uStack_150);
  FUN_10a0c32e4(&ppppuStack_170,auStack_148,0xffffffff,0x20,0,0);
  pppppuVar6 = (undefined8 *****)ppppuStack_170;
  if (-1 < (char)bStack_159) {
    uStack_168 = (ulong)bStack_159;
    pppppuVar6 = &ppppuStack_170;
  }
  FUN_10a3bf330(&plStack_138,pppppuVar6,uStack_168);
  plVar12 = (long *)0x138;
  __Znwm();
  plStack_a8 = plStack_138;
  plVar25 = plVar12 + 1;
  *plVar25 = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&PTR_FUN_110b9f3b0;
  plVar8 = plVar12 + 3;
  plStack_138 = (long *)0x0;
  plStack_a0 = plStack_130;
  (**(code **)(alStack_128[0] + 0x10))(auStack_98,alStack_128);
  uStack_60 = uStack_f0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  pcStack_e8 = FUN_10a282dc4;
  ppuStack_e0 = &PTR_DAT_110ae9180;
  FUN_10a23708c(plVar8,&UNK_10f6870cf,0x27,&DAT_10f685c7a,4,&plStack_a8,1);
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  FUN_10a042634(&plStack_a8);
  plStack_180 = plVar8;
  plStack_178 = plVar12;
  FUN_10a042634(&plStack_138);
  plVar13 = *(long **)(*(long *)(*(long *)(param_1 + 0x138) + 0x100) + 0x1c8);
  (**(code **)(*plVar13 + 0x60))();
  plVar14 = (long *)plVar13[1];
  if ((plVar14 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_a0 = plVar14, plVar14 != (long *)0x0)) {
    plStack_a8 = (long *)*plVar13;
    if (plStack_a8 != (long *)0x0) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar5) {
          *plVar25 = *plVar25 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plStack_1a8 = plVar8;
      plStack_1a0 = plVar12;
      (**(code **)(*plStack_a8 + 0x10))(auStack_198,plStack_a8,&plStack_1a8);
      if (cStack_181 < '\0') {
        __ZdlPv(auStack_198[0]);
      }
      plVar8 = plStack_1a0;
      if (plStack_1a0 != (long *)0x0) {
        plVar12 = plStack_1a0 + 1;
        do {
          lVar21 = *plVar12;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = lVar21 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      *(undefined1 *)(param_1 + 0x104) = 1;
      if (plStack_a0 == (long *)0x0) goto LAB_10a9826e8;
    }
    plVar12 = plStack_a0;
    plVar8 = plStack_a0 + 1;
    do {
      lVar21 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
LAB_10a9826e8:
  plVar8 = plStack_178;
  if (plStack_178 != (long *)0x0) {
    plVar12 = plStack_178 + 1;
    do {
      lVar21 = *plVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = lVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_178 + 0x10))(plStack_178);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if ((char)bStack_159 < '\0') {
    __ZdlPv(ppppuStack_170);
  }
  puVar15 = &uStack_140;
  func_0x000109380ffc(puVar15,auStack_148[0]);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&plStack_1a8);
  func_0x00010a05a8c4(&plStack_a8);
  FUN_10a05bd88(&plStack_180);
  if ((char)bStack_159 < '\0') {
    __ZdlPv(ppppuStack_170);
  }
  func_0x000109380ffc(&uStack_140,auStack_148[0]);
  __Unwind_Resume();
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = *(int *)(puVar15 + 0x20) + 1;
  *(int *)(puVar15 + 0x20) = iVar1;
  func_0x000107c2b054(auStack_2b0,"start");
  FUN_10a982428(puVar15,auStack_2b0);
  if (cStack_299 < '\0') {
    __ZdlPv(auStack_2b0[0]);
  }
  puVar16 = (undefined8 *)0x50;
  __Znwm();
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &PTR_DAT_110c35030;
  puVar16[4] = 0;
  puVar16[5] = 0;
  puVar16[3] = &PTR_FUN_110c32f20;
  puVar16[7] = 0;
  puVar16[6] = 0;
  puVar16[9] = 0;
  puVar16[8] = 0;
  *extraout_x8 = puVar16 + 3;
  extraout_x8[1] = puVar16;
  pcStack_258 = FUN_10a9bb6e0;
  ppuStack_250 = &PTR_FUN_110c35118;
  puStack_248 = puVar15;
  iStack_240 = iVar1;
  FUN_10a9bb4c0(&uStack_2c0,&pcStack_258);
  pcStack_298 = FUN_10a9bb790;
  ppuStack_290 = &PTR_FUN_110c35138;
  puStack_288 = puVar15;
  iStack_280 = iVar1;
  FUN_10a9bb4c0(&ppppuStack_2d0,&pcStack_298);
  FUN_10a98058c(puVar16 + 6,uStack_2c0,plStack_2b8);
  ppuVar19 = ppuStack_2c8;
  FUN_10a98058c(puVar16 + 8);
  ppppuVar17 = ppppuStack_2d0;
  if (ppuStack_2c8 != (undefined **)0x0) {
    ppuVar20 = ppuStack_2c8 + 1;
    do {
      puVar22 = *ppuVar20;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
      if (bVar5) {
        *ppuVar20 = puVar22 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar22 == (undefined *)0x0) {
      (**(code **)(*ppuStack_2c8 + 0x10))(ppuStack_2c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_2c8);
      ppppuVar17 = ppppuStack_2d0;
    }
  }
  (*(code *)*ppuStack_290)(&ppuStack_290);
  if (plStack_2b8 != (long *)0x0) {
    plVar8 = plStack_2b8 + 1;
    do {
      lVar21 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2b8);
    }
  }
  pppuVar26 = &ppuStack_250;
  (*(code *)*ppuStack_250)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_290)(&ppuStack_290);
    FUN_10a9b814c(&uStack_2c0);
    (*(code *)*ppuStack_250)(&ppuStack_250);
    FUN_10a9bb468(plStack_2b8);
    __Unwind_Resume();
    lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuVar10 = pppuVar26;
    if ((*(byte *)((long)pppuVar26 + 0x104) & 1) == 0) {
      FUN_10a3bf120(&pppuStack_418);
      puVar23 = pppuVar26[0x27][0x20];
      FUN_10a982300(&uStack_440,pppuVar26[0x31],pppuVar26);
      pppuVar7 = (undefined ***)0x138;
      __Znwm();
      pppuStack_388 = pppuStack_418;
      pppuVar9 = pppuVar7 + 1;
      *pppuVar9 = (undefined **)0x0;
      pppuVar7[2] = (undefined **)0x0;
      *pppuVar7 = &PTR_FUN_110b9f3b0;
      pppuVar10 = pppuVar7 + 3;
      pppuStack_418 = (undefined ***)0x0;
      pppuStack_380 = pppuStack_410;
      (**(code **)(alStack_408[0] + 0x10))(auStack_378,alStack_408);
      uStack_340 = uStack_3d0;
      uVar2 = *(ulong *)(puVar23 + 0x210);
      puVar22 = *(undefined **)(puVar23 + 0x208);
      if (-1 < (char)puVar23[0x21f]) {
        uVar2 = (ulong)(byte)puVar23[0x21f];
        puVar22 = puVar23 + 0x208;
      }
      pppuStack_3c8 = (undefined ***)FUN_10a9bb2d0;
      pppuStack_3c0 = (undefined ***)&PTR_FUN_110c35008;
      uStack_3b8 = uStack_440;
      uStack_3a8 = uStack_430;
      uStack_3b0 = uStack_438;
      uStack_438 = 0;
      uStack_430 = 0;
      FUN_10a23708c(pppuVar10,&UNK_10f6870ae,0x20,&DAT_10f685c76,3,&pppuStack_388,4,in_x7,puVar22,
                    uVar2,&pppuStack_3c8);
      (*(code *)*pppuStack_3c0)(&pppuStack_3c0);
      FUN_10a042634(&pppuStack_388);
      pppuStack_428 = pppuVar10;
      pppuStack_420 = pppuVar7;
      FUN_10a9823a8(&uStack_440);
      FUN_10a042634(&pppuStack_418);
      plVar8 = *(long **)(pppuVar26[0x27][0x20] + 0x1c8);
      (**(code **)(*plVar8 + 0x60))();
      pppuStack_418 = (undefined ***)0x0;
      pppuStack_410 = (undefined ***)0x0;
      plVar12 = (long *)plVar8[1];
      if (((plVar12 != (long *)0x0) &&
          (__ZNSt3__119__shared_weak_count4lockEv(), pppuStack_410 = (undefined ***)plVar12,
          plVar12 != (long *)0x0)) &&
         (pppuStack_418 = (undefined ***)*plVar8, pppuStack_418 != (undefined ***)0x0)) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
          if (bVar5) {
            *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        pppuStack_3c8 = pppuVar10;
        pppuStack_3c0 = pppuVar7;
        (*(code *)(*pppuStack_418)[2])(&pppuStack_388,pppuStack_418,&pppuStack_3c8);
        pppuVar10 = pppuStack_3c0;
        if (pppuStack_3c0 != (undefined ***)0x0) {
          pppuVar7 = pppuStack_3c0 + 1;
          do {
            ppuVar19 = *pppuVar7;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
            if (bVar5) {
              *pppuVar7 = (undefined **)((long)ppuVar19 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (ppuVar19 == (undefined **)0x0) {
            (*(code *)(*pppuStack_3c0)[2])(pppuStack_3c0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar10);
          }
        }
      }
      pppuVar10 = pppuStack_410;
      if (pppuStack_410 != (undefined ***)0x0) {
        plVar8 = (long *)(pppuStack_410 + 1);
        do {
          lVar21 = *plVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar21 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar21 == 0) {
          (**(code **)((long)*pppuStack_410 + 0x10))(pppuStack_410);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar10);
        }
      }
      pppuVar10 = pppuStack_420;
      if (pppuStack_420 != (undefined ***)0x0) {
        pppuVar7 = pppuStack_420 + 1;
        do {
          ppuVar19 = *pppuVar7;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar5) {
            *pppuVar7 = (undefined **)((long)ppuVar19 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppuVar19 == (undefined **)0x0) {
          (*(code *)(*pppuStack_420)[2])(pppuStack_420);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar10);
        }
      }
      FUN_10a3bf120(&pppuStack_418);
      puVar23 = pppuVar26[0x27][0x20];
      FUN_10a9821d8(&uStack_440,pppuVar26[0x31],pppuVar26);
      pppuVar9 = (undefined ***)0x138;
      __Znwm();
      pppuStack_388 = pppuStack_418;
      pppuVar24 = pppuVar9 + 1;
      *pppuVar24 = (undefined **)0x0;
      pppuVar9[2] = (undefined **)0x0;
      *pppuVar9 = &PTR_FUN_110b9f3b0;
      pppuVar7 = pppuVar9 + 3;
      pppuStack_418 = (undefined ***)0x0;
      pppuStack_380 = pppuStack_410;
      (**(code **)(alStack_408[0] + 0x10))(auStack_378,alStack_408);
      uStack_340 = uStack_3d0;
      uVar2 = *(ulong *)(puVar23 + 0x210);
      puVar22 = *(undefined **)(puVar23 + 0x208);
      if (-1 < (char)puVar23[0x21f]) {
        uVar2 = (ulong)(byte)puVar23[0x21f];
        puVar22 = puVar23 + 0x208;
      }
      pppuStack_3c8 = (undefined ***)FUN_10a9bae48;
      pppuStack_3c0 = (undefined ***)&PTR_FUN_110c34ff0;
      uStack_3b8 = uStack_440;
      uStack_3a8 = uStack_430;
      uStack_3b0 = uStack_438;
      uStack_438 = 0;
      uStack_430 = 0;
      ppppuVar17 = (undefined ****)&UNK_10f687090;
      ppuVar19 = (undefined **)0x1d;
      FUN_10a23708c(pppuVar7,&UNK_10f687090,0x1d,&DAT_10f685c76,3,&pppuStack_388,4,in_x7,puVar22,
                    uVar2,&pppuStack_3c8);
      (*(code *)*pppuStack_3c0)(&pppuStack_3c0);
      FUN_10a042634(&pppuStack_388);
      pppuStack_428 = pppuVar7;
      pppuStack_420 = pppuVar9;
      FUN_10a982280(&uStack_440);
      FUN_10a042634(&pppuStack_418);
      plVar8 = *(long **)(pppuVar26[0x27][0x20] + 0x1c8);
      (**(code **)(*plVar8 + 0x60))();
      pppuStack_418 = (undefined ***)0x0;
      pppuStack_410 = (undefined ***)0x0;
      pppuVar10 = (undefined ***)plVar8[1];
      if (((pppuVar10 != (undefined ***)0x0) &&
          (__ZNSt3__119__shared_weak_count4lockEv(), pppuStack_410 = pppuVar10,
          pppuVar10 != (undefined ***)0x0)) &&
         (pppuVar10 = (undefined ***)*plVar8, pppuStack_418 = pppuVar10,
         pppuVar10 != (undefined ***)0x0)) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar24,0x10);
          if (bVar5) {
            *pppuVar24 = (undefined **)((long)*pppuVar24 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        ppppuVar17 = &pppuStack_3c8;
        pppuStack_3c8 = pppuVar7;
        pppuStack_3c0 = pppuVar9;
        (*(code *)(*pppuVar10)[2])(&pppuStack_388);
        pppuVar7 = pppuStack_3c0;
        if (pppuStack_3c0 != (undefined ***)0x0) {
          pppuVar9 = pppuStack_3c0 + 1;
          do {
            ppuVar20 = *pppuVar9;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
            if (bVar5) {
              *pppuVar9 = (undefined **)((long)ppuVar20 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (ppuVar20 == (undefined **)0x0) {
            (*(code *)(*pppuStack_3c0)[2])(pppuStack_3c0);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppuVar10 = pppuVar7;
          }
        }
      }
      pppuVar7 = pppuStack_410;
      if (pppuStack_410 != (undefined ***)0x0) {
        pppuVar9 = pppuStack_410 + 1;
        do {
          ppuVar20 = *pppuVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
          if (bVar5) {
            *pppuVar9 = (undefined **)((long)ppuVar20 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppuVar20 == (undefined **)0x0) {
          (*(code *)(*pppuStack_410)[2])(pppuStack_410);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar10 = pppuVar7;
        }
      }
      pppuVar7 = pppuStack_420;
      if (pppuStack_420 != (undefined ***)0x0) {
        pppuVar9 = pppuStack_420 + 1;
        do {
          ppuVar20 = *pppuVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
          if (bVar5) {
            *pppuVar9 = (undefined **)((long)ppuVar20 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppuVar20 == (undefined **)0x0) {
          (*(code *)(*pppuStack_420)[2])(pppuStack_420);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar10 = pppuVar7;
        }
      }
      *(undefined1 *)((long)pppuVar26 + 0x104) = 1;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_338) {
      ___stack_chk_fail();
      FUN_10a05bd88(&pppuStack_3c8);
      func_0x00010a05a8c4(&pppuStack_418);
      FUN_10a05bd88(&pppuStack_428);
      __Unwind_Resume();
      __ZNSt3__115recursive_mutex4lockEv(ppppuVar17 + 2);
      pppuVar9 = (undefined ***)0x48;
      __Znwm();
      pppuVar9[2] = &PTR_FUN_110c33bf0;
      pppuVar9[3] = ppuVar19;
      pppuVar26 = ppppuVar17[0xb];
      pppuVar7 = ppppuVar17[0xc];
      *pppuVar9 = (undefined **)(ppppuVar17 + 10);
      pppuVar9[1] = (undefined **)pppuVar26;
      *pppuVar26 = (undefined **)pppuVar9;
      ppppuVar17[0xb] = pppuVar9;
      ppppuVar17[0xc] = (undefined ***)((long)pppuVar7 + 1);
      __ZNSt3__115recursive_mutex6unlockEv(ppppuVar17 + 2);
      pppuVar7 = ppppuVar17[1];
      pppuVar26 = *ppppuVar17;
      if (ppppuVar17[1] != (undefined ***)0x0) {
        pppuVar24 = ppppuVar17[1] + 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar24,0x10);
          if (bVar5) {
            *pppuVar24 = (undefined **)((long)*pppuVar24 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *pppuVar10 = (undefined **)pppuVar9;
      pppuVar10[2] = (undefined **)pppuVar7;
      pppuVar10[1] = (undefined **)pppuVar26;
      return;
    }
    return;
  }
  return;
}



/* Entry: 10a982820; end: 10a982a6b;  */

/* WARNING: Removing unreachable block (ram,0x00010a981de4) */
/* WARNING: Removing unreachable block (ram,0x00010a98201c) */

void FUN_10a982820(undefined8 *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  long *plVar6;
  long *plVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined8 *puVar10;
  undefined ****ppppuVar11;
  undefined8 in_x7;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined ***pppuVar17;
  undefined ***pppuVar18;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined ***pppuStack_268;
  undefined ***pppuStack_260;
  undefined ***pppuStack_258;
  undefined ***pppuStack_250;
  long alStack_248 [7];
  undefined8 uStack_210;
  undefined ***pppuStack_208;
  undefined ***pppuStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined ***pppuStack_1c8;
  undefined ***pppuStack_1c0;
  undefined1 auStack_1b8 [56];
  undefined8 uStack_180;
  long lStack_178;
  undefined ****ppppuStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  undefined8 auStack_f0 [2];
  char cStack_d9;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  int iStack_c0;
  code *pcStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  int iStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = *(int *)(param_2 + 0x100) + 1;
  *(int *)(param_2 + 0x100) = iVar1;
  func_0x000107c2b054(auStack_f0,"start");
  FUN_10a982428(param_2,auStack_f0);
  if (cStack_d9 < '\0') {
    __ZdlPv(auStack_f0[0]);
  }
  puVar10 = (undefined8 *)0x50;
  __Znwm();
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &PTR_DAT_110c35030;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[3] = &PTR_FUN_110c32f20;
  puVar10[7] = 0;
  puVar10[6] = 0;
  puVar10[9] = 0;
  puVar10[8] = 0;
  *param_1 = puVar10 + 3;
  param_1[1] = puVar10;
  pcStack_98 = FUN_10a9bb6e0;
  ppuStack_90 = &PTR_FUN_110c35118;
  lStack_88 = param_2;
  iStack_80 = iVar1;
  FUN_10a9bb4c0(&uStack_100,&pcStack_98);
  pcStack_d8 = FUN_10a9bb790;
  ppuStack_d0 = &PTR_FUN_110c35138;
  lStack_c8 = param_2;
  iStack_c0 = iVar1;
  FUN_10a9bb4c0(&ppppuStack_110,&pcStack_d8);
  FUN_10a98058c(puVar10 + 6,uStack_100,plStack_f8);
  ppuVar12 = ppuStack_108;
  FUN_10a98058c(puVar10 + 8);
  ppppuVar11 = ppppuStack_110;
  if (ppuStack_108 != (undefined **)0x0) {
    ppuVar13 = ppuStack_108 + 1;
    do {
      puVar14 = *ppuVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
      if (bVar4) {
        *ppuVar13 = puVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar14 == (undefined *)0x0) {
      (**(code **)(*ppuStack_108 + 0x10))(ppuStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_108);
      ppppuVar11 = ppppuStack_110;
    }
  }
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  if (plStack_f8 != (long *)0x0) {
    plVar6 = plStack_f8 + 1;
    do {
      lVar15 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
    }
  }
  pppuVar18 = &ppuStack_90;
  (*(code *)*ppuStack_90)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  FUN_10a9b814c(&uStack_100);
  (*(code *)*ppuStack_90)(&ppuStack_90);
  FUN_10a9bb468(plStack_f8);
  __Unwind_Resume();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar9 = pppuVar18;
  if ((*(byte *)((long)pppuVar18 + 0x104) & 1) == 0) {
    FUN_10a3bf120(&pppuStack_258);
    puVar16 = pppuVar18[0x27][0x20];
    FUN_10a982300(&uStack_280,pppuVar18[0x31],pppuVar18);
    pppuVar5 = (undefined ***)0x138;
    __Znwm();
    pppuStack_1c8 = pppuStack_258;
    pppuVar8 = pppuVar5 + 1;
    *pppuVar8 = (undefined **)0x0;
    pppuVar5[2] = (undefined **)0x0;
    *pppuVar5 = &PTR_FUN_110b9f3b0;
    pppuVar9 = pppuVar5 + 3;
    pppuStack_258 = (undefined ***)0x0;
    pppuStack_1c0 = pppuStack_250;
    (**(code **)(alStack_248[0] + 0x10))(auStack_1b8,alStack_248);
    uStack_180 = uStack_210;
    uVar2 = *(ulong *)(puVar16 + 0x210);
    puVar14 = *(undefined **)(puVar16 + 0x208);
    if (-1 < (char)puVar16[0x21f]) {
      uVar2 = (ulong)(byte)puVar16[0x21f];
      puVar14 = puVar16 + 0x208;
    }
    pppuStack_208 = (undefined ***)FUN_10a9bb2d0;
    pppuStack_200 = (undefined ***)&PTR_FUN_110c35008;
    uStack_1f8 = uStack_280;
    uStack_1e8 = uStack_270;
    uStack_1f0 = uStack_278;
    uStack_278 = 0;
    uStack_270 = 0;
    FUN_10a23708c(pppuVar9,&UNK_10f6870ae,0x20,&DAT_10f685c76,3,&pppuStack_1c8,4,in_x7,puVar14,uVar2
                  ,&pppuStack_208);
    (*(code *)*pppuStack_200)(&pppuStack_200);
    FUN_10a042634(&pppuStack_1c8);
    pppuStack_268 = pppuVar9;
    pppuStack_260 = pppuVar5;
    FUN_10a9823a8(&uStack_280);
    FUN_10a042634(&pppuStack_258);
    plVar6 = *(long **)(pppuVar18[0x27][0x20] + 0x1c8);
    (**(code **)(*plVar6 + 0x60))();
    pppuStack_258 = (undefined ***)0x0;
    pppuStack_250 = (undefined ***)0x0;
    plVar7 = (long *)plVar6[1];
    if (((plVar7 != (long *)0x0) &&
        (__ZNSt3__119__shared_weak_count4lockEv(), pppuStack_250 = (undefined ***)plVar7,
        plVar7 != (long *)0x0)) &&
       (pppuStack_258 = (undefined ***)*plVar6, pppuStack_258 != (undefined ***)0x0)) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar4) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      pppuStack_208 = pppuVar9;
      pppuStack_200 = pppuVar5;
      (*(code *)(*pppuStack_258)[2])(&pppuStack_1c8,pppuStack_258,&pppuStack_208);
      pppuVar9 = pppuStack_200;
      if (pppuStack_200 != (undefined ***)0x0) {
        pppuVar5 = pppuStack_200 + 1;
        do {
          ppuVar12 = *pppuVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
          if (bVar4) {
            *pppuVar5 = (undefined **)((long)ppuVar12 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar12 == (undefined **)0x0) {
          (*(code *)(*pppuStack_200)[2])(pppuStack_200);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
        }
      }
    }
    pppuVar9 = pppuStack_250;
    if (pppuStack_250 != (undefined ***)0x0) {
      plVar6 = (long *)(pppuStack_250 + 1);
      do {
        lVar15 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)((long)*pppuStack_250 + 0x10))(pppuStack_250);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    pppuVar9 = pppuStack_260;
    if (pppuStack_260 != (undefined ***)0x0) {
      pppuVar5 = pppuStack_260 + 1;
      do {
        ppuVar12 = *pppuVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
        if (bVar4) {
          *pppuVar5 = (undefined **)((long)ppuVar12 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppuVar12 == (undefined **)0x0) {
        (*(code *)(*pppuStack_260)[2])(pppuStack_260);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    FUN_10a3bf120(&pppuStack_258);
    puVar16 = pppuVar18[0x27][0x20];
    FUN_10a9821d8(&uStack_280,pppuVar18[0x31],pppuVar18);
    pppuVar8 = (undefined ***)0x138;
    __Znwm();
    pppuStack_1c8 = pppuStack_258;
    pppuVar17 = pppuVar8 + 1;
    *pppuVar17 = (undefined **)0x0;
    pppuVar8[2] = (undefined **)0x0;
    *pppuVar8 = &PTR_FUN_110b9f3b0;
    pppuVar5 = pppuVar8 + 3;
    pppuStack_258 = (undefined ***)0x0;
    pppuStack_1c0 = pppuStack_250;
    (**(code **)(alStack_248[0] + 0x10))(auStack_1b8,alStack_248);
    uStack_180 = uStack_210;
    uVar2 = *(ulong *)(puVar16 + 0x210);
    puVar14 = *(undefined **)(puVar16 + 0x208);
    if (-1 < (char)puVar16[0x21f]) {
      uVar2 = (ulong)(byte)puVar16[0x21f];
      puVar14 = puVar16 + 0x208;
    }
    pppuStack_208 = (undefined ***)FUN_10a9bae48;
    pppuStack_200 = (undefined ***)&PTR_FUN_110c34ff0;
    uStack_1f8 = uStack_280;
    uStack_1e8 = uStack_270;
    uStack_1f0 = uStack_278;
    uStack_278 = 0;
    uStack_270 = 0;
    ppppuVar11 = (undefined ****)&UNK_10f687090;
    ppuVar12 = (undefined **)0x1d;
    FUN_10a23708c(pppuVar5,&UNK_10f687090,0x1d,&DAT_10f685c76,3,&pppuStack_1c8,4,in_x7,puVar14,uVar2
                  ,&pppuStack_208);
    (*(code *)*pppuStack_200)(&pppuStack_200);
    FUN_10a042634(&pppuStack_1c8);
    pppuStack_268 = pppuVar5;
    pppuStack_260 = pppuVar8;
    FUN_10a982280(&uStack_280);
    FUN_10a042634(&pppuStack_258);
    plVar6 = *(long **)(pppuVar18[0x27][0x20] + 0x1c8);
    (**(code **)(*plVar6 + 0x60))();
    pppuStack_258 = (undefined ***)0x0;
    pppuStack_250 = (undefined ***)0x0;
    pppuVar9 = (undefined ***)plVar6[1];
    if (((pppuVar9 != (undefined ***)0x0) &&
        (__ZNSt3__119__shared_weak_count4lockEv(), pppuStack_250 = pppuVar9,
        pppuVar9 != (undefined ***)0x0)) &&
       (pppuVar9 = (undefined ***)*plVar6, pppuStack_258 = pppuVar9, pppuVar9 != (undefined ***)0x0)
       ) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar17,0x10);
        if (bVar4) {
          *pppuVar17 = (undefined **)((long)*pppuVar17 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      ppppuVar11 = &pppuStack_208;
      pppuStack_208 = pppuVar5;
      pppuStack_200 = pppuVar8;
      (*(code *)(*pppuVar9)[2])(&pppuStack_1c8);
      pppuVar5 = pppuStack_200;
      if (pppuStack_200 != (undefined ***)0x0) {
        pppuVar8 = pppuStack_200 + 1;
        do {
          ppuVar13 = *pppuVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar4) {
            *pppuVar8 = (undefined **)((long)ppuVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar13 == (undefined **)0x0) {
          (*(code *)(*pppuStack_200)[2])(pppuStack_200);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar9 = pppuVar5;
        }
      }
    }
    pppuVar5 = pppuStack_250;
    if (pppuStack_250 != (undefined ***)0x0) {
      pppuVar8 = pppuStack_250 + 1;
      do {
        ppuVar13 = *pppuVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar4) {
          *pppuVar8 = (undefined **)((long)ppuVar13 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppuVar13 == (undefined **)0x0) {
        (*(code *)(*pppuStack_250)[2])(pppuStack_250);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppuVar9 = pppuVar5;
      }
    }
    pppuVar5 = pppuStack_260;
    if (pppuStack_260 != (undefined ***)0x0) {
      pppuVar8 = pppuStack_260 + 1;
      do {
        ppuVar13 = *pppuVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar4) {
          *pppuVar8 = (undefined **)((long)ppuVar13 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppuVar13 == (undefined **)0x0) {
        (*(code *)(*pppuStack_260)[2])(pppuStack_260);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppuVar9 = pppuVar5;
      }
    }
    *(undefined1 *)((long)pppuVar18 + 0x104) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&pppuStack_208);
  func_0x00010a05a8c4(&pppuStack_258);
  FUN_10a05bd88(&pppuStack_268);
  __Unwind_Resume();
  __ZNSt3__115recursive_mutex4lockEv(ppppuVar11 + 2);
  pppuVar8 = (undefined ***)0x48;
  __Znwm();
  pppuVar8[2] = &PTR_FUN_110c33bf0;
  pppuVar8[3] = ppuVar12;
  pppuVar18 = ppppuVar11[0xb];
  pppuVar5 = ppppuVar11[0xc];
  *pppuVar8 = (undefined **)(ppppuVar11 + 10);
  pppuVar8[1] = (undefined **)pppuVar18;
  *pppuVar18 = (undefined **)pppuVar8;
  ppppuVar11[0xb] = pppuVar8;
  ppppuVar11[0xc] = (undefined ***)((long)pppuVar5 + 1);
  __ZNSt3__115recursive_mutex6unlockEv(ppppuVar11 + 2);
  pppuVar5 = ppppuVar11[1];
  pppuVar18 = *ppppuVar11;
  if (ppppuVar11[1] != (undefined ***)0x0) {
    pppuVar17 = ppppuVar11[1] + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar17,0x10);
      if (bVar4) {
        *pppuVar17 = (undefined **)((long)*pppuVar17 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *pppuVar9 = (undefined **)pppuVar8;
  pppuVar9[2] = (undefined **)pppuVar5;
  pppuVar9[1] = (undefined **)pppuVar18;
  return;
}



/* Entry: 10a982a6c; end: 10a982a77;  */

/* WARNING: Removing unreachable block (ram,0x00010a981de4) */
/* WARNING: Removing unreachable block (ram,0x00010a98201c) */

void FUN_10a982a6c(undefined **param_1,undefined ***param_2,undefined *param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 in_x7;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  long alStack_138 [7];
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined1 auStack_a8 [56];
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = param_1;
  if ((*(byte *)((long)param_1 + 0x104) & 1) == 0) {
    FUN_10a3bf120(&ppuStack_148);
    lVar13 = *(long *)(param_1[0x27] + 0x100);
    FUN_10a982300(&uStack_170,param_1[0x31],param_1);
    ppuVar5 = (undefined **)0x138;
    __Znwm();
    ppuStack_b8 = ppuStack_148;
    ppuVar8 = ppuVar5 + 1;
    *ppuVar8 = (undefined *)0x0;
    ppuVar5[2] = (undefined *)0x0;
    *ppuVar5 = (undefined *)&PTR_FUN_110b9f3b0;
    ppuVar9 = ppuVar5 + 3;
    ppuStack_148 = (undefined **)0x0;
    ppuStack_b0 = ppuStack_140;
    (**(code **)(alStack_138[0] + 0x10))(auStack_a8,alStack_138);
    uStack_70 = uStack_100;
    uVar2 = *(ulong *)(lVar13 + 0x210);
    lVar12 = *(long *)(lVar13 + 0x208);
    if (-1 < (char)*(byte *)(lVar13 + 0x21f)) {
      uVar2 = (ulong)*(byte *)(lVar13 + 0x21f);
      lVar12 = lVar13 + 0x208;
    }
    ppuStack_f8 = (undefined **)FUN_10a9bb2d0;
    ppuStack_f0 = &PTR_FUN_110c35008;
    uStack_e8 = uStack_170;
    uStack_d8 = uStack_160;
    uStack_e0 = uStack_168;
    uStack_168 = 0;
    uStack_160 = 0;
    FUN_10a23708c(ppuVar9,&UNK_10f6870ae,0x20,&DAT_10f685c76,3,&ppuStack_b8,4,in_x7,lVar12,uVar2,
                  &ppuStack_f8);
    (*(code *)*ppuStack_f0)(&ppuStack_f0);
    FUN_10a042634(&ppuStack_b8);
    ppuStack_158 = ppuVar9;
    ppuStack_150 = ppuVar5;
    FUN_10a9823a8(&uStack_170);
    FUN_10a042634(&ppuStack_148);
    plVar6 = *(long **)(*(long *)(param_1[0x27] + 0x100) + 0x1c8);
    (**(code **)(*plVar6 + 0x60))();
    ppuStack_148 = (undefined **)0x0;
    ppuStack_140 = (undefined **)0x0;
    plVar7 = (long *)plVar6[1];
    if (((plVar7 != (long *)0x0) &&
        (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_140 = (undefined **)plVar7,
        plVar7 != (long *)0x0)) &&
       (ppuStack_148 = (undefined **)*plVar6, ppuStack_148 != (undefined **)0x0)) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
        if (bVar4) {
          *ppuVar8 = *ppuVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      ppuStack_f8 = ppuVar9;
      ppuStack_f0 = ppuVar5;
      (**(code **)(*ppuStack_148 + 0x10))(&ppuStack_b8,ppuStack_148,&ppuStack_f8);
      ppuVar9 = ppuStack_f0;
      if (ppuStack_f0 != (undefined **)0x0) {
        ppuVar5 = ppuStack_f0 + 1;
        do {
          puVar11 = *ppuVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
          if (bVar4) {
            *ppuVar5 = puVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar11 == (undefined *)0x0) {
          (**(code **)(*ppuStack_f0 + 0x10))(ppuStack_f0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
        }
      }
    }
    ppuVar9 = ppuStack_140;
    if (ppuStack_140 != (undefined **)0x0) {
      plVar6 = (long *)(ppuStack_140 + 1);
      do {
        lVar12 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)((long)*ppuStack_140 + 0x10))(ppuStack_140);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
      }
    }
    ppuVar9 = ppuStack_150;
    if (ppuStack_150 != (undefined **)0x0) {
      ppuVar5 = ppuStack_150 + 1;
      do {
        puVar11 = *ppuVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
        if (bVar4) {
          *ppuVar5 = puVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar11 == (undefined *)0x0) {
        (**(code **)(*ppuStack_150 + 0x10))(ppuStack_150);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
      }
    }
    FUN_10a3bf120(&ppuStack_148);
    lVar13 = *(long *)(param_1[0x27] + 0x100);
    FUN_10a9821d8(&uStack_170,param_1[0x31],param_1);
    ppuVar8 = (undefined **)0x138;
    __Znwm();
    ppuStack_b8 = ppuStack_148;
    ppuVar10 = ppuVar8 + 1;
    *ppuVar10 = (undefined *)0x0;
    ppuVar8[2] = (undefined *)0x0;
    *ppuVar8 = (undefined *)&PTR_FUN_110b9f3b0;
    ppuVar5 = ppuVar8 + 3;
    ppuStack_148 = (undefined **)0x0;
    ppuStack_b0 = ppuStack_140;
    (**(code **)(alStack_138[0] + 0x10))(auStack_a8,alStack_138);
    uStack_70 = uStack_100;
    uVar2 = *(ulong *)(lVar13 + 0x210);
    lVar12 = *(long *)(lVar13 + 0x208);
    if (-1 < (char)*(byte *)(lVar13 + 0x21f)) {
      uVar2 = (ulong)*(byte *)(lVar13 + 0x21f);
      lVar12 = lVar13 + 0x208;
    }
    ppuStack_f8 = (undefined **)FUN_10a9bae48;
    ppuStack_f0 = &PTR_FUN_110c34ff0;
    uStack_e8 = uStack_170;
    uStack_d8 = uStack_160;
    uStack_e0 = uStack_168;
    uStack_168 = 0;
    uStack_160 = 0;
    param_2 = (undefined ***)&UNK_10f687090;
    param_3 = (undefined *)0x1d;
    FUN_10a23708c(ppuVar5,&UNK_10f687090,0x1d,&DAT_10f685c76,3,&ppuStack_b8,4,in_x7,lVar12,uVar2,
                  &ppuStack_f8);
    (*(code *)*ppuStack_f0)(&ppuStack_f0);
    FUN_10a042634(&ppuStack_b8);
    ppuStack_158 = ppuVar5;
    ppuStack_150 = ppuVar8;
    FUN_10a982280(&uStack_170);
    FUN_10a042634(&ppuStack_148);
    plVar6 = *(long **)(*(long *)(param_1[0x27] + 0x100) + 0x1c8);
    (**(code **)(*plVar6 + 0x60))();
    ppuStack_148 = (undefined **)0x0;
    ppuStack_140 = (undefined **)0x0;
    ppuVar9 = (undefined **)plVar6[1];
    if (((ppuVar9 != (undefined **)0x0) &&
        (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_140 = ppuVar9,
        ppuVar9 != (undefined **)0x0)) &&
       (ppuVar9 = (undefined **)*plVar6, ppuStack_148 = ppuVar9, ppuVar9 != (undefined **)0x0)) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
        if (bVar4) {
          *ppuVar10 = *ppuVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      param_2 = &ppuStack_f8;
      ppuStack_f8 = ppuVar5;
      ppuStack_f0 = ppuVar8;
      (**(code **)(*ppuVar9 + 0x10))(&ppuStack_b8);
      ppuVar5 = ppuStack_f0;
      if (ppuStack_f0 != (undefined **)0x0) {
        ppuVar8 = ppuStack_f0 + 1;
        do {
          puVar11 = *ppuVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
          if (bVar4) {
            *ppuVar8 = puVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar11 == (undefined *)0x0) {
          (**(code **)(*ppuStack_f0 + 0x10))(ppuStack_f0);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar9 = ppuVar5;
        }
      }
    }
    ppuVar5 = ppuStack_140;
    if (ppuStack_140 != (undefined **)0x0) {
      ppuVar8 = ppuStack_140 + 1;
      do {
        puVar11 = *ppuVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
        if (bVar4) {
          *ppuVar8 = puVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar11 == (undefined *)0x0) {
        (**(code **)(*ppuStack_140 + 0x10))(ppuStack_140);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar9 = ppuVar5;
      }
    }
    ppuVar5 = ppuStack_150;
    if (ppuStack_150 != (undefined **)0x0) {
      ppuVar8 = ppuStack_150 + 1;
      do {
        puVar11 = *ppuVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
        if (bVar4) {
          *ppuVar8 = puVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar11 == (undefined *)0x0) {
        (**(code **)(*ppuStack_150 + 0x10))(ppuStack_150);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar9 = ppuVar5;
      }
    }
    *(undefined1 *)((long)param_1 + 0x104) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&ppuStack_f8);
  func_0x00010a05a8c4(&ppuStack_148);
  FUN_10a05bd88(&ppuStack_158);
  __Unwind_Resume();
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  ppuVar10 = (undefined **)0x48;
  __Znwm();
  ppuVar10[2] = (undefined *)&PTR_FUN_110c33bf0;
  ppuVar10[3] = param_3;
  ppuVar5 = param_2[0xb];
  ppuVar8 = param_2[0xc];
  *ppuVar10 = (undefined *)(param_2 + 10);
  ppuVar10[1] = (undefined *)ppuVar5;
  *ppuVar5 = (undefined *)ppuVar10;
  param_2[0xb] = ppuVar10;
  param_2[0xc] = (undefined **)((long)ppuVar8 + 1);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  ppuVar8 = param_2[1];
  ppuVar5 = *param_2;
  if (param_2[1] != (undefined **)0x0) {
    ppuVar1 = param_2[1] + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar4) {
        *ppuVar1 = *ppuVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *ppuVar9 = (undefined *)ppuVar10;
  ppuVar9[2] = (undefined *)ppuVar8;
  ppuVar9[1] = (undefined *)ppuVar5;
  return;
}



/* Entry: 10a982a78; end: 10a982b9f;  */

/* WARNING: Removing unreachable block (ram,0x00010a982c6c) */

void FUN_10a982a78(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  code **ppcVar5;
  long ****pppplVar6;
  long *plVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  int iVar10;
  undefined8 uVar11;
  code *pcVar12;
  long ***ppplVar13;
  long ****pppplVar14;
  long lVar15;
  undefined1 uStack_299;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long ***ppplStack_230;
  long ***ppplStack_228;
  undefined1 **ppuStack_220;
  undefined8 uStack_218;
  long lStack_210;
  ulong uStack_208;
  code **ppcStack_200;
  long ***ppplStack_1f0;
  long ***ppplStack_1e8;
  long ***appplStack_1e0 [2];
  char cStack_1c9;
  long ***ppplStack_1c8;
  long ***ppplStack_1c0;
  undefined1 uStack_1b8;
  code *pcStack_1b0;
  long ***ppplStack_1a8;
  undefined8 uStack_1a0;
  long alStack_198 [7];
  undefined8 uStack_160;
  code *pcStack_158;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long ****pppplStack_118;
  long ***ppplStack_110;
  undefined1 auStack_108 [7];
  byte bStack_101;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_2 + 0x11f) < '\0') {
    if (*(long *)(param_2 + 0x110) == 0) goto LAB_10a982ab0;
  }
  else if (*(char *)(param_2 + 0x11f) == '\0') {
LAB_10a982ab0:
    lVar15 = (long)*(char *)(param_2 + 0x137);
    if (lVar15 < 0) {
      lVar15 = *(long *)(param_2 + 0x128);
    }
    if (lVar15 == 0) goto LAB_10a982b60;
  }
  uVar3 = param_2 + 0x108;
  FUN_10a453ab8(uVar3,param_3);
  if ((uVar3 & 1) == 0) {
    uVar3 = param_2 + 0x120;
    uVar11 = param_3;
    FUN_10a453ab8();
    if ((uVar3 & 1) == 0) {
      FUN_10a00946c(&UNK_10f687141);
      param_3 = uVar11;
LAB_10a982b60:
      iVar10 = (int)param_3;
      puVar4 = &UNK_10f68710a;
      FUN_10a00946c();
      if (cStack_59 < '\0') {
        __ZdlPv(auStack_70[0]);
      }
      if (cStack_41 < '\0') {
        __ZdlPv(auStack_58[0]);
      }
      __Unwind_Resume();
      pcStack_78 = FUN_10a982ba0;
      lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcStack_158 = (code *)((ulong)pcStack_158 & 0xffffffffffffff00);
      ppuStack_150 = (undefined **)0x0;
      pcStack_1b0 = (code *)(long)iVar10;
      uStack_1b8 = 5;
      ppcVar5 = &pcStack_158;
      puStack_80 = &stack0xfffffffffffffff0;
      func_0x00010945a80c(ppcVar5,&DAT_10f369560);
      uStack_1b8 = *(undefined1 *)ppcVar5;
      *(undefined1 *)ppcVar5 = 5;
      pcVar12 = ppcVar5[1];
      ppcVar5[1] = pcStack_1b0;
      pcStack_1b0 = pcVar12;
      func_0x000109380ffc(&pcStack_1b0);
      FUN_10a0c32e4(&pppplStack_118,&pcStack_158,0xffffffff,0x20,0,0);
      if (-1 < (char)bStack_101) {
        ppplStack_110 = (long ***)(ulong)bStack_101;
        pppplStack_118 = (long ****)&pppplStack_118;
      }
      FUN_10a3bf330(&ppplStack_1a8,pppplStack_118,ppplStack_110);
      func_0x000109380ffc(&ppuStack_150,(ulong)pcStack_158 & 0xff);
      lVar15 = *(long *)(*(long *)(puVar4 + 0x138) + 0x100);
      pppplVar6 = (long ****)0x138;
      __Znwm();
      pppplStack_118 = (long ****)ppplStack_1a8;
      pppplVar14 = pppplVar6 + 1;
      *pppplVar14 = (long ***)0x0;
      pppplVar6[2] = (long ***)0x0;
      *pppplVar6 = (long ***)&PTR_FUN_110b9f3b0;
      pppplVar9 = pppplVar6 + 3;
      ppplStack_1a8 = (long ***)0x0;
      ppplStack_110 = (long ***)uStack_1a0;
      (**(code **)(alStack_198[0] + 0x10))(auStack_108,alStack_198);
      uStack_d0 = uStack_160;
      uStack_208 = *(ulong *)(lVar15 + 0x210);
      lStack_210 = *(long *)(lVar15 + 0x208);
      if (-1 < (char)*(byte *)(lVar15 + 0x21f)) {
        uStack_208 = (ulong)*(byte *)(lVar15 + 0x21f);
        lStack_210 = lVar15 + 0x208;
      }
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_120 = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_148 = 0;
      ppcStack_200 = &pcStack_158;
      pcStack_158 = FUN_10a282dc4;
      ppuStack_150 = &PTR_DAT_110ae9180;
      FUN_10a23708c(pppplVar9,&UNK_10f687183,0x24,&DAT_10f685c7a,4,&pppplStack_118,1);
      (*(code *)*ppuStack_150)(&ppuStack_150);
      FUN_10a042634(&pppplStack_118);
      ppplStack_1c8 = (long ***)pppplVar9;
      ppplStack_1c0 = (long ***)pppplVar6;
      FUN_10a042634(&ppplStack_1a8);
      plVar7 = *(long **)(*(long *)(*(long *)(puVar4 + 0x138) + 0x100) + 0x1c8);
      (**(code **)(*plVar7 + 0x60))();
      pppplStack_118 = (long ****)0x0;
      ppplStack_110 = (long ***)0x0;
      pppplVar8 = (long ****)plVar7[1];
      if (((pppplVar8 != (long ****)0x0) &&
          (__ZNSt3__119__shared_weak_count4lockEv(), ppplStack_110 = (long ***)pppplVar8,
          pppplVar8 != (long ****)0x0)) &&
         (pppplVar8 = (long ****)*plVar7, pppplStack_118 = pppplVar8, pppplVar8 != (long ****)0x0))
      {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pppplVar14,0x10);
          if (bVar2) {
            *pppplVar14 = (long ***)((long)*pppplVar14 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        ppplStack_1f0 = (long ***)pppplVar9;
        ppplStack_1e8 = (long ***)pppplVar6;
        (*(code *)(*pppplVar8)[2])(appplStack_1e0,pppplVar8,&ppplStack_1f0);
        if (cStack_1c9 < '\0') {
          __ZdlPv();
          pppplVar8 = (long ****)appplStack_1e0[0];
        }
        pppplVar9 = (long ****)ppplStack_1e8;
        if ((long ****)ppplStack_1e8 != (long ****)0x0) {
          pppplVar14 = (long ****)(ppplStack_1e8 + 1);
          do {
            ppplVar13 = *pppplVar14;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppplVar14,0x10);
            if (bVar2) {
              *pppplVar14 = (long ***)((long)ppplVar13 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (ppplVar13 == (long ***)0x0) {
            (*(code *)(*ppplStack_1e8)[2])(ppplStack_1e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppplVar8 = pppplVar9;
          }
        }
      }
      pppplVar9 = (long ****)ppplStack_110;
      if ((long ****)ppplStack_110 != (long ****)0x0) {
        pppplVar14 = (long ****)(ppplStack_110 + 1);
        do {
          ppplVar13 = *pppplVar14;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pppplVar14,0x10);
          if (bVar2) {
            *pppplVar14 = (long ***)((long)ppplVar13 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (ppplVar13 == (long ***)0x0) {
          (*(code *)(*ppplStack_110)[2])(ppplStack_110);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppplVar8 = pppplVar9;
        }
      }
      pppplVar9 = (long ****)ppplStack_1c0;
      ppplStack_228 = (long ***)pppplVar8;
      if ((long ****)ppplStack_1c0 != (long ****)0x0) {
        pppplVar14 = (long ****)(ppplStack_1c0 + 1);
        do {
          ppplVar13 = *pppplVar14;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pppplVar14,0x10);
          if (bVar2) {
            *pppplVar14 = (long ***)((long)ppplVar13 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (ppplVar13 == (long ***)0x0) {
          (*(code *)(*ppplStack_1c0)[2])(ppplStack_1c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppplStack_228 = (long ***)pppplVar9;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
        return;
      }
      ___stack_chk_fail();
      FUN_10a05bd88(&ppplStack_1f0);
      func_0x00010a05a8c4(&pppplStack_118);
      FUN_10a05bd88(&ppplStack_1c8);
      pppplVar9 = (long ****)ppplStack_228;
      __Unwind_Resume(ppplStack_228);
      uStack_218 = 0x10a982f78;
      uStack_290 = 0;
      uStack_288 = 0;
      puStack_298 = &UNK_10f6871a8;
      uStack_278 = 0xffffffffffffffff;
      uStack_280 = 0x100000064;
      puStack_270 = &UNK_10f68581c;
      uStack_268 = 0;
      uStack_258 = 0;
      uStack_250 = 0;
      puStack_260 = &UNK_10f68581c;
      uStack_248 = 0xffffffff;
      uStack_240 = 0;
      uStack_238 = 0;
      ppplStack_230 = (long ***)pppplVar6;
      ppuStack_220 = &puStack_80;
      func_0x00010a983070();
      uStack_290 = 0;
      uStack_288 = 0;
      puStack_298 = &UNK_10f6871b1;
      uStack_278 = 0xffffffffffffffff;
      uStack_280 = 0x100000064;
      uStack_268 = 0;
      puStack_270 = (undefined *)0x0;
      uStack_258 = 0;
      puStack_260 = (undefined *)0x0;
      uStack_250 = 0;
      uStack_248 = 0xffffffff;
      uStack_240 = 0;
      uStack_238 = 0;
      uStack_299 = 0;
      FUN_10a9830c8(pppplVar9,&puStack_298,&uStack_299);
      uStack_290 = 0;
      uStack_288 = 0;
      puStack_298 = &UNK_10f6871bb;
      uStack_278 = 0xffffffffffffffff;
      uStack_280 = 0x100000064;
      uStack_268 = 0;
      puStack_270 = (undefined *)0x0;
      uStack_258 = 0;
      puStack_260 = (undefined *)0x0;
      uStack_250 = 0;
      uStack_248 = 0xffffffff;
      uStack_240 = 0;
      uStack_238 = 0;
      uStack_299 = 1;
      FUN_10a9830c8(pppplVar9,&puStack_298,&uStack_299);
      FUN_10a003ff4(pppplVar9);
      return;
    }
  }
  func_0x000107c2b054(auStack_58,&UNK_10f68581c);
  func_0x000107c2b054(auStack_70,&UNK_10f68581c);
  FUN_10a00d0e0(&uStack_40,param_3,auStack_58,auStack_70);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return;
}



/* Entry: 10a982ba0; end: 10a982f77;  */

/* WARNING: Removing unreachable block (ram,0x00010a982c6c) */

void FUN_10a982ba0(long param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  code **ppcVar3;
  long ****pppplVar4;
  long *plVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  code *pcVar8;
  long ***ppplVar9;
  long ****pppplVar10;
  long lVar11;
  undefined1 uStack_229;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long ***ppplStack_1c0;
  long ***ppplStack_1b8;
  undefined1 *puStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  code **ppcStack_190;
  long ***ppplStack_180;
  long ***ppplStack_178;
  long ***appplStack_170 [2];
  char cStack_159;
  long ***ppplStack_158;
  long ***ppplStack_150;
  undefined1 uStack_148;
  code *pcStack_140;
  long ***ppplStack_138;
  undefined8 uStack_130;
  long alStack_128 [7];
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long ****pppplStack_a8;
  long ***ppplStack_a0;
  undefined1 auStack_98 [7];
  byte bStack_91;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_e8 = (code *)((ulong)pcStack_e8 & 0xffffffffffffff00);
  ppuStack_e0 = (undefined **)0x0;
  pcStack_140 = (code *)(long)param_2;
  uStack_148 = 5;
  ppcVar3 = &pcStack_e8;
  func_0x00010945a80c(ppcVar3,&DAT_10f369560);
  uStack_148 = *(undefined1 *)ppcVar3;
  *(undefined1 *)ppcVar3 = 5;
  pcVar8 = ppcVar3[1];
  ppcVar3[1] = pcStack_140;
  pcStack_140 = pcVar8;
  func_0x000109380ffc(&pcStack_140);
  FUN_10a0c32e4(&pppplStack_a8,&pcStack_e8,0xffffffff,0x20,0,0);
  if (-1 < (char)bStack_91) {
    ppplStack_a0 = (long ***)(ulong)bStack_91;
    pppplStack_a8 = (long ****)&pppplStack_a8;
  }
  FUN_10a3bf330(&ppplStack_138,pppplStack_a8,ppplStack_a0);
  func_0x000109380ffc(&ppuStack_e0,(ulong)pcStack_e8 & 0xff);
  lVar11 = *(long *)(*(long *)(param_1 + 0x138) + 0x100);
  pppplVar4 = (long ****)0x138;
  __Znwm();
  pppplStack_a8 = (long ****)ppplStack_138;
  pppplVar10 = pppplVar4 + 1;
  *pppplVar10 = (long ***)0x0;
  pppplVar4[2] = (long ***)0x0;
  *pppplVar4 = (long ***)&PTR_FUN_110b9f3b0;
  pppplVar7 = pppplVar4 + 3;
  ppplStack_138 = (long ***)0x0;
  ppplStack_a0 = (long ***)uStack_130;
  (**(code **)(alStack_128[0] + 0x10))(auStack_98,alStack_128);
  uStack_60 = uStack_f0;
  uStack_198 = *(ulong *)(lVar11 + 0x210);
  lStack_1a0 = *(long *)(lVar11 + 0x208);
  if (-1 < (char)*(byte *)(lVar11 + 0x21f)) {
    uStack_198 = (ulong)*(byte *)(lVar11 + 0x21f);
    lStack_1a0 = lVar11 + 0x208;
  }
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  ppcStack_190 = &pcStack_e8;
  pcStack_e8 = FUN_10a282dc4;
  ppuStack_e0 = &PTR_DAT_110ae9180;
  FUN_10a23708c(pppplVar7,&UNK_10f687183,0x24,&DAT_10f685c7a,4,&pppplStack_a8,1);
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  FUN_10a042634(&pppplStack_a8);
  ppplStack_158 = (long ***)pppplVar7;
  ppplStack_150 = (long ***)pppplVar4;
  FUN_10a042634(&ppplStack_138);
  plVar5 = *(long **)(*(long *)(*(long *)(param_1 + 0x138) + 0x100) + 0x1c8);
  (**(code **)(*plVar5 + 0x60))();
  pppplStack_a8 = (long ****)0x0;
  ppplStack_a0 = (long ***)0x0;
  pppplVar6 = (long ****)plVar5[1];
  if (((pppplVar6 != (long ****)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), ppplStack_a0 = (long ***)pppplVar6,
      pppplVar6 != (long ****)0x0)) &&
     (pppplVar6 = (long ****)*plVar5, pppplStack_a8 = pppplVar6, pppplVar6 != (long ****)0x0)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppplVar10,0x10);
      if (bVar2) {
        *pppplVar10 = (long ***)((long)*pppplVar10 + 1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    ppplStack_180 = (long ***)pppplVar7;
    ppplStack_178 = (long ***)pppplVar4;
    (*(code *)(*pppplVar6)[2])(appplStack_170,pppplVar6,&ppplStack_180);
    if (cStack_159 < '\0') {
      __ZdlPv();
      pppplVar6 = (long ****)appplStack_170[0];
    }
    pppplVar7 = (long ****)ppplStack_178;
    if ((long ****)ppplStack_178 != (long ****)0x0) {
      pppplVar10 = (long ****)(ppplStack_178 + 1);
      do {
        ppplVar9 = *pppplVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppplVar10,0x10);
        if (bVar2) {
          *pppplVar10 = (long ***)((long)ppplVar9 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (ppplVar9 == (long ***)0x0) {
        (*(code *)(*ppplStack_178)[2])(ppplStack_178);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppplVar6 = pppplVar7;
      }
    }
  }
  pppplVar7 = (long ****)ppplStack_a0;
  if ((long ****)ppplStack_a0 != (long ****)0x0) {
    pppplVar10 = (long ****)(ppplStack_a0 + 1);
    do {
      ppplVar9 = *pppplVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppplVar10,0x10);
      if (bVar2) {
        *pppplVar10 = (long ***)((long)ppplVar9 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (ppplVar9 == (long ***)0x0) {
      (*(code *)(*ppplStack_a0)[2])(ppplStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppplVar6 = pppplVar7;
    }
  }
  pppplVar7 = (long ****)ppplStack_150;
  ppplStack_1b8 = (long ***)pppplVar6;
  if ((long ****)ppplStack_150 != (long ****)0x0) {
    pppplVar10 = (long ****)(ppplStack_150 + 1);
    do {
      ppplVar9 = *pppplVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppplVar10,0x10);
      if (bVar2) {
        *pppplVar10 = (long ***)((long)ppplVar9 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (ppplVar9 == (long ***)0x0) {
      (*(code *)(*ppplStack_150)[2])(ppplStack_150);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppplStack_1b8 = (long ***)pppplVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&ppplStack_180);
  func_0x00010a05a8c4(&pppplStack_a8);
  FUN_10a05bd88(&ppplStack_158);
  pppplVar7 = (long ****)ppplStack_1b8;
  __Unwind_Resume(ppplStack_1b8);
  uStack_1a8 = 0x10a982f78;
  uStack_220 = 0;
  uStack_218 = 0;
  puStack_228 = &UNK_10f6871a8;
  uStack_208 = 0xffffffffffffffff;
  uStack_210 = 0x100000064;
  puStack_200 = &UNK_10f68581c;
  uStack_1f8 = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  puStack_1f0 = &UNK_10f68581c;
  uStack_1d8 = 0xffffffff;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  ppplStack_1c0 = (long ***)pppplVar4;
  puStack_1b0 = &stack0xfffffffffffffff0;
  func_0x00010a983070();
  uStack_220 = 0;
  uStack_218 = 0;
  puStack_228 = &UNK_10f6871b1;
  uStack_208 = 0xffffffffffffffff;
  uStack_210 = 0x100000064;
  uStack_1f8 = 0;
  puStack_200 = (undefined *)0x0;
  uStack_1e8 = 0;
  puStack_1f0 = (undefined *)0x0;
  uStack_1e0 = 0;
  uStack_1d8 = 0xffffffff;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_229 = 0;
  FUN_10a9830c8(pppplVar7,&puStack_228,&uStack_229);
  uStack_220 = 0;
  uStack_218 = 0;
  puStack_228 = &UNK_10f6871bb;
  uStack_208 = 0xffffffffffffffff;
  uStack_210 = 0x100000064;
  uStack_1f8 = 0;
  puStack_200 = (undefined *)0x0;
  uStack_1e8 = 0;
  puStack_1f0 = (undefined *)0x0;
  uStack_1e0 = 0;
  uStack_1d8 = 0xffffffff;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_229 = 1;
  FUN_10a9830c8(pppplVar7,&puStack_228,&uStack_229);
  FUN_10a003ff4(pppplVar7);
  return;
}



/* Entry: 10a982f78; end: 10a9830c7;  */

void FUN_10a982f78(undefined8 param_1)

{
  undefined1 uStack_89;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6871a8;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  puStack_60 = &UNK_10f68581c;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  puStack_50 = &UNK_10f68581c;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a983070(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6871b1;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  puStack_50 = (undefined *)0x0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_89 = 0;
  FUN_10a9830c8(param_1,&puStack_88,&uStack_89);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6871bb;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  puStack_50 = (undefined *)0x0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_89 = 1;
  FUN_10a9830c8(param_1,&puStack_88,&uStack_89);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a9830c8; end: 10a98311f;  */

ulong FUN_10a9830c8(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a9bb840(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a983120; end: 10a9833fb;  */

undefined8 * FUN_10a983120(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110c331a8;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
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
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x45] = param_2;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = &PTR_DAT_110bd3ea8;
  *(undefined4 *)(param_1 + 0x51) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x294) = 0;
  *(undefined8 *)((long)param_1 + 0x28c) = 0;
  *(undefined4 *)((long)param_1 + 0x29c) = 0x3f800000;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 700) = 0;
  *(undefined8 *)((long)param_1 + 0x2b4) = 0;
  *(undefined4 *)((long)param_1 + 0x2c4) = 0x3f800000;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  param_1[0x5d] = &PTR_DAT_110bd3ea8;
  *(undefined4 *)(param_1 + 0x5e) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x2fc) = 0;
  *(undefined8 *)((long)param_1 + 0x2f4) = 0;
  *(undefined4 *)((long)param_1 + 0x304) = 0x3f800000;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 99) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x324) = 0;
  *(undefined8 *)((long)param_1 + 0x31c) = 0;
  *(undefined4 *)((long)param_1 + 0x32c) = 0x3f800000;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0x3f800000;
  FUN_10a8f95c4(param_1 + 0x6a);
  return param_1;
}



/* Entry: 10a9833fc; end: 10a9833ff;  */

undefined8 * FUN_10a9833fc(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c331a8;
  FUN_10a98a754(param_1 + 0x4d);
  FUN_10a98a754(param_1 + 0x4a);
  if (param_1[0x47] != 0) {
    param_1[0x48] = param_1[0x47];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x42;
  func_0x00010a1f4bf4(&puStack_28);
  puStack_28 = param_1 + 0x3f;
  func_0x00010a1f4bf4(&puStack_28);
  if (param_1[0x3c] != 0) {
    param_1[0x3d] = param_1[0x3c];
    __ZdlPv();
  }
  if (param_1[0x39] != 0) {
    param_1[0x3a] = param_1[0x39];
    __ZdlPv();
  }
  if (param_1[0x36] != 0) {
    param_1[0x37] = param_1[0x36];
    __ZdlPv();
  }
  if (param_1[0x33] != 0) {
    param_1[0x34] = param_1[0x33];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x30;
  func_0x00010a1f4bf4(&puStack_28);
  if (param_1[0x2d] != 0) {
    param_1[0x2e] = param_1[0x2d];
    __ZdlPv();
  }
  if (param_1[0x2a] != 0) {
    param_1[0x2b] = param_1[0x2a];
    __ZdlPv();
  }
  if (param_1[0x27] != 0) {
    param_1[0x28] = param_1[0x27];
    __ZdlPv();
  }
  if (param_1[0x24] != 0) {
    param_1[0x25] = param_1[0x24];
    __ZdlPv();
  }
  if (param_1[0x21] != 0) {
    param_1[0x22] = param_1[0x21];
    __ZdlPv();
  }
  if (param_1[0x1e] != 0) {
    param_1[0x1f] = param_1[0x1e];
    __ZdlPv();
  }
  if (param_1[0x1b] != 0) {
    param_1[0x1c] = param_1[0x1b];
    __ZdlPv();
  }
  if (param_1[0x18] != 0) {
    param_1[0x19] = param_1[0x18];
    __ZdlPv();
  }
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
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a983400; end: 10a983413;  */

void FUN_10a983400(void)

{
  func_0x00010a983258();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a983414; end: 10a983a83;  */

void FUN_10a983414(float param_1,long param_2,long *param_3,ulong *param_4,int param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  float *pfVar21;
  undefined8 *puVar22;
  int iVar23;
  undefined8 uVar24;
  int *piVar25;
  ulong uVar26;
  float *pfVar27;
  float *pfVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined4 uStack_a4;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  ulong *puStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined4 uStack_64;
  
  *(long *)(param_2 + 8) = (param_3[1] - *param_3 >> 2) * -0x5555555555555555;
  func_0x00010a11b708(param_2 + 0xa8);
  puVar9 = (undefined8 *)(param_2 + 0x28);
  *(char *)(param_2 + 0x20) = (char)param_5;
  *(undefined8 *)(param_2 + 0x30) = *puVar9;
  uVar12 = ((long)(param_4[1] - *param_4) >> 2) * -0x5555555555555555;
  *(ulong *)(param_2 + 0x18) = uVar12;
  if (param_5 == 0) {
    *(ulong *)(param_2 + 0x10) = uVar12;
    puVar30 = (undefined8 *)*param_3;
    puVar22 = (undefined8 *)param_3[1];
    uVar14 = (long)puVar22 - (long)puVar30;
    lVar15 = *(long *)(param_2 + 0xb8);
    puVar29 = *(undefined8 **)(param_2 + 0xa8);
    if (uVar14 <= (ulong)(lVar15 - (long)puVar29)) {
      puVar9 = *(undefined8 **)(param_2 + 0xb0);
      if ((ulong)((long)puVar9 - (long)puVar29) < uVar14) {
        puVar1 = (undefined8 *)(((long)puVar9 - (long)puVar29) + (long)puVar30);
        puVar19 = puVar9;
        if (puVar9 != puVar29) {
          _memmove(puVar29,puVar30);
          puVar9 = *(undefined8 **)(param_2 + 0xb0);
          puVar19 = puVar9;
        }
        for (; puVar1 != puVar22; puVar1 = (undefined8 *)((long)puVar1 + 0xc)) {
          uVar24 = *puVar1;
          *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar1 + 1);
          *puVar9 = uVar24;
          puVar9 = (undefined8 *)((long)puVar9 + 0xc);
          puVar19 = (undefined8 *)((long)puVar19 + 0xc);
        }
      }
      else {
        if (puVar22 != puVar30) {
          _memmove(puVar29,puVar30,uVar14);
        }
        puVar19 = (undefined8 *)((long)puVar29 + uVar14);
      }
      *(undefined8 **)(param_2 + 0xb0) = puVar19;
LAB_10a983868:
      func_0x0001096b5198(param_2 + 0xd8,*(undefined8 *)(param_2 + 0x10));
      uVar12 = *param_4;
      puVar9 = (undefined8 *)(param_2 + 0xd8);
      FUN_10a60f628();
      goto LAB_10a983894;
    }
    uVar17 = ((long)uVar14 >> 2) * -0x5555555555555555;
    if (puVar29 != (undefined8 *)0x0) {
      *(undefined8 **)(param_2 + 0xb0) = puVar29;
      puVar9 = puVar29;
      __ZdlPv();
      lVar15 = 0;
      *(undefined8 *)(param_2 + 0xa8) = 0;
      *(undefined8 *)(param_2 + 0xb0) = 0;
      *(undefined8 *)(param_2 + 0xb8) = 0;
    }
    if (uVar17 < 0x1555555555555556) {
      uVar12 = (lVar15 >> 2) * 0x5555555555555556;
      if (uVar12 < uVar17 || uVar12 + ((long)uVar14 >> 2) * 0x5555555555555555 == 0) {
        uVar12 = uVar17;
      }
      if (0xaaaaaaaaaaaaaa9 < (ulong)((lVar15 >> 2) * -0x5555555555555555)) {
        uVar12 = 0x1555555555555555;
      }
      if (uVar12 < 0x1555555555555556) {
        puVar9 = (undefined8 *)(param_2 + 0xa8);
        FUN_10a13225c();
        *(undefined8 **)(param_2 + 0xa8) = puVar9;
        *(undefined8 **)(param_2 + 0xb0) = puVar9;
        *(ulong *)(param_2 + 0xb8) = (long)puVar9 + uVar12 * 0xc;
        puVar29 = puVar9;
        for (; puVar30 != puVar22; puVar30 = (undefined8 *)((long)puVar30 + 0xc)) {
          uVar24 = *puVar30;
          *(undefined4 *)(puVar29 + 1) = *(undefined4 *)(puVar30 + 1);
          *puVar29 = uVar24;
          puVar9 = (undefined8 *)((long)puVar9 + 0xc);
          puVar29 = (undefined8 *)((long)puVar29 + 0xc);
        }
        *(undefined8 **)(param_2 + 0xb0) = puVar9;
        goto LAB_10a983868;
      }
    }
    FUN_10a132248();
  }
  else {
    uStack_64 = 0xffffffff;
    func_0x0001094f81d8(puVar9,uVar12,&uStack_64);
    *(undefined8 *)(param_2 + 0x10) = 0;
    uVar14 = *(ulong *)(param_2 + 0x18);
    if (uVar14 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      uVar26 = 0;
      lVar15 = *(long *)(param_2 + 0x28);
      uVar18 = *(long *)(param_2 + 0x30) - lVar15 >> 2;
      uVar17 = *param_4;
      uVar20 = ((long)(param_4[1] - uVar17) >> 2) * -0x5555555555555555;
      pfVar21 = (float *)(uVar17 + 0x14);
      do {
        if (uVar26 == uVar18) goto LAB_10a983844;
        if (*(int *)(lVar15 + uVar26 * 4) == -1) {
          *(int *)(lVar15 + uVar26 * 4) = (int)uVar12;
          if (uVar20 < uVar26 || uVar20 - uVar26 == 0) goto LAB_10a983844;
          uVar10 = uVar26 + 1;
          if (uVar10 < uVar14) {
            pfVar27 = (float *)(uVar17 + uVar26 * 0xc);
            pfVar28 = pfVar21;
            do {
              if (uVar18 == uVar10) goto LAB_10a983844;
              if (*(int *)(lVar15 + uVar10 * 4) == -1) {
                if (uVar20 < uVar10 || uVar20 - uVar10 == 0) goto LAB_10a983844;
                if (((ABS(*pfVar27 - pfVar28[-2]) < param_1) &&
                    (ABS(pfVar27[1] - pfVar28[-1]) < param_1)) &&
                   (ABS(pfVar27[2] - *pfVar28) < param_1)) {
                  *(int *)(lVar15 + uVar10 * 4) = (int)uVar12;
                }
              }
              uVar10 = uVar10 + 1;
              pfVar28 = pfVar28 + 3;
            } while (uVar14 != uVar10);
          }
          uVar12 = uVar12 + 1;
          *(ulong *)(param_2 + 0x10) = uVar12;
        }
        uVar26 = uVar26 + 1;
        pfVar21 = pfVar21 + 3;
      } while (uVar26 != uVar14);
    }
    uVar14 = *(ulong *)(param_2 + 8);
    if (uVar14 != 0) {
      uVar17 = 0;
      lVar15 = *param_3;
      lVar11 = param_3[1];
LAB_10a983718:
      if (uVar17 != (lVar11 - lVar15 >> 2) * -0x5555555555555555) {
        iVar23 = 0;
        piVar25 = (int *)(lVar15 + uVar17 * 0xc);
        lVar5 = *(long *)(param_2 + 0x28);
        lVar6 = *(long *)(param_2 + 0x30);
        do {
          piVar3 = piVar25 + 2;
          if (iVar23 != 2) {
            piVar3 = piVar25;
          }
          piVar4 = piVar25 + 1;
          if (iVar23 != 1) {
            piVar4 = piVar3;
          }
          if (((ulong)(lVar6 - lVar5 >> 2) <= (ulong)(long)*piVar4) ||
             (uVar18 = (*(long *)(param_2 + 0xb0) - *(long *)(param_2 + 0xa8) >> 2) *
                       -0x5555555555555555, uVar18 < uVar17 || uVar18 - uVar17 == 0)) break;
          uVar7 = *(undefined4 *)(lVar5 + (long)*piVar4 * 4);
          puVar13 = (undefined4 *)(*(long *)(param_2 + 0xa8) + uVar17 * 0xc);
          if (iVar23 == 1) {
            puVar13 = puVar13 + 1;
          }
          else if (iVar23 == 2) goto LAB_10a98379c;
          *puVar13 = uVar7;
          iVar23 = iVar23 + 1;
        } while( true );
      }
      goto LAB_10a983844;
    }
LAB_10a9837ac:
    puVar9 = (undefined8 *)(param_2 + 0xd8);
    func_0x0001096b5198();
    if (*(long *)(param_2 + 0x18) != 0) {
      lVar15 = 0;
      uVar14 = 0;
      do {
        uVar17 = ((long)(param_4[1] - *param_4) >> 2) * -0x5555555555555555;
        if ((uVar17 < uVar14 || uVar17 - uVar14 == 0) ||
           ((ulong)(*(long *)(param_2 + 0x30) - *(long *)(param_2 + 0x28) >> 2) <= uVar14)) {
LAB_10a983844:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10a983848);
          (*pcVar8)();
        }
        iVar23 = *(int *)(*(long *)(param_2 + 0x28) + uVar14 * 4);
        uVar17 = (*(long *)(param_2 + 0xe0) - *(long *)(param_2 + 0xd8) >> 2) * -0x5555555555555555;
        if (uVar17 < (ulong)(long)iVar23 || uVar17 - (long)iVar23 == 0) goto LAB_10a983844;
        puVar30 = (undefined8 *)(*param_4 + lVar15);
        puVar22 = (undefined8 *)(*(long *)(param_2 + 0xd8) + (long)iVar23 * 0xc);
        uVar24 = *puVar30;
        *(undefined4 *)(puVar22 + 1) = *(undefined4 *)(puVar30 + 1);
        *puVar22 = uVar24;
        uVar14 = uVar14 + 1;
        lVar15 = lVar15 + 0xc;
      } while (uVar14 < *(ulong *)(param_2 + 0x18));
    }
LAB_10a983894:
    puVar22 = *(undefined8 **)(param_2 + 0x10);
    param_4 = *(ulong **)(param_2 + 0xc0);
    puVar13 = *(undefined4 **)(param_2 + 200);
    puVar29 = (undefined8 *)((long)puVar13 - (long)param_4);
    puVar30 = (undefined8 *)((long)puVar29 >> 5);
    if (puVar22 <= puVar30) {
      if (puVar22 < puVar30) {
        *(ulong **)(param_2 + 200) = param_4 + (long)puVar22 * 4;
      }
LAB_10a9839b0:
      func_0x0001096b5198(param_2 + 0x108,*(undefined8 *)(param_2 + 0x10));
      func_0x0001096b5198(param_2 + 0xf0,*(undefined8 *)(param_2 + 0x10));
      func_0x0001096b5198(param_2 + 0x120,*(undefined8 *)(param_2 + 0x10));
      func_0x0001096b5198(param_2 + 0x48,*(undefined8 *)(param_2 + 0x10));
      if (*(char *)(param_2 + 0x20) == '\x01') {
        func_0x0001096b5198(param_2 + 0x138,*(undefined8 *)(param_2 + 0x18));
        func_0x0001096b5198(param_2 + 0x60,*(undefined8 *)(param_2 + 0x18));
      }
      lVar11 = *(long *)(param_2 + 0x78);
      uVar12 = *(ulong *)(param_2 + 0x10);
      lVar15 = *(long *)(param_2 + 0x80);
      uVar14 = lVar15 - lVar11;
      if (uVar12 < uVar14 || uVar12 - uVar14 == 0) {
        if (uVar12 < uVar14) {
          lVar15 = lVar11 + uVar12;
          *(long *)(param_2 + 0x80) = lVar15;
        }
      }
      else {
        func_0x000107c27d58((long *)(param_2 + 0x78),uVar12 - uVar14);
        lVar11 = *(long *)(param_2 + 0x78);
        lVar15 = *(long *)(param_2 + 0x80);
      }
      if (0 < lVar15 - lVar11) {
        _memset(lVar11,1);
      }
      *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_2 + 0x90);
      return;
    }
    uVar14 = (long)puVar22 - (long)puVar30;
    if (uVar14 <= (ulong)(*(long *)(param_2 + 0xd0) - (long)puVar13 >> 5)) {
      puVar2 = puVar13 + uVar14 * 8;
      do {
        *puVar13 = 0;
        *(undefined8 *)(puVar13 + 3) = 0x3f800000;
        *(undefined8 *)(puVar13 + 1) = 0x3f800000;
        *(undefined8 *)(puVar13 + 5) = 0x3f800000;
        puVar13[7] = 0x3f800000;
        puVar13 = puVar13 + 8;
      } while (puVar13 != puVar2);
      *(undefined4 **)(param_2 + 200) = puVar2;
      goto LAB_10a9839b0;
    }
    if ((ulong)puVar22 >> 0x3b == 0) {
      uVar17 = *(long *)(param_2 + 0xd0) - (long)param_4;
      puVar19 = (undefined8 *)((long)uVar17 >> 4);
      if (puVar19 <= puVar22) {
        puVar19 = puVar22;
      }
      if (0x7fffffffffffffdf < uVar17) {
        puVar19 = (undefined8 *)0x7ffffffffffffff;
      }
      if ((ulong)puVar19 >> 0x3b == 0) {
        lVar15 = (long)puVar19 << 5;
        __Znwm();
        puVar2 = (undefined4 *)(lVar15 + (long)puVar29);
        puVar13 = puVar2;
        do {
          *puVar13 = 0;
          *(undefined8 *)(puVar13 + 3) = 0x3f800000;
          *(undefined8 *)(puVar13 + 1) = 0x3f800000;
          *(undefined8 *)(puVar13 + 5) = 0x3f800000;
          puVar13[7] = 0x3f800000;
          puVar13 = puVar13 + 8;
        } while (puVar13 != puVar2 + uVar14 * 8);
        _memcpy(puVar2 + (long)puVar30 * -8,param_4,puVar29);
        *(undefined4 **)(param_2 + 0xc0) = puVar2 + (long)puVar30 * -8;
        *(undefined4 **)(param_2 + 200) = puVar2 + uVar14 * 8;
        *(long *)(param_2 + 0xd0) = lVar15 + (long)puVar19 * 0x20;
        if (param_4 != (ulong *)0x0) {
          __ZdlPv(param_4);
        }
        goto LAB_10a9839b0;
      }
      goto LAB_10a983a80;
    }
  }
  FUN_10a98a7cc();
LAB_10a983a80:
  func_0x000109ffded8();
  pcStack_78 = FUN_10a983a84;
  puStack_a0 = puVar30;
  puStack_98 = puVar29;
  puStack_90 = param_4;
  lStack_88 = param_2;
  puStack_80 = &stack0xfffffffffffffff0;
  if (0 < (long)(puVar9[0x10] - puVar9[0xf])) {
    _memset(puVar9[0xf],1);
  }
  for (plVar16 = *(long **)(uVar12 + 0x10); plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
    uVar12 = (ulong)*(uint *)(plVar16 + 2);
    if (*(char *)(puVar9 + 4) == '\x01') {
      if ((ulong)((long)(puVar9[6] - puVar9[5]) >> 2) <= uVar12) goto LAB_10a983bf0;
      uVar12 = (ulong)*(int *)(puVar9[5] + uVar12 * 4);
      if ((ulong)(puVar9[0x10] - puVar9[0xf]) <= uVar12) goto LAB_10a983bf0;
      *(undefined1 *)(puVar9[0xf] + uVar12) = 0;
      if ((ulong)((long)(puVar9[6] - puVar9[5]) >> 2) <= (ulong)*(uint *)(plVar16 + 2))
      goto LAB_10a983bf0;
      iVar23 = *(int *)(puVar9[5] + (ulong)*(uint *)(plVar16 + 2) * 4);
      uVar12 = ((long)(puVar9[0x1f] - puVar9[0x1e]) >> 2) * -0x5555555555555555;
      if (uVar12 < (ulong)(long)iVar23 || uVar12 - (long)iVar23 == 0) goto LAB_10a983bf0;
      puVar30 = (undefined8 *)(puVar9[0x1e] + (long)iVar23 * 0xc);
    }
    else {
      if ((ulong)(puVar9[0x10] - puVar9[0xf]) <= uVar12) goto LAB_10a983bf0;
      *(undefined1 *)(puVar9[0xf] + uVar12) = 0;
      uVar12 = (ulong)*(uint *)(plVar16 + 2);
      uVar14 = ((long)(puVar9[0x1f] - puVar9[0x1e]) >> 2) * -0x5555555555555555;
      if (uVar14 < uVar12 || uVar14 - uVar12 == 0) goto LAB_10a983bf0;
      puVar30 = (undefined8 *)(puVar9[0x1e] + uVar12 * 0xc);
    }
    uVar24 = *(undefined8 *)((long)plVar16 + 0x14);
    *(undefined4 *)(puVar30 + 1) = *(undefined4 *)((long)plVar16 + 0x1c);
    *puVar30 = uVar24;
  }
  puVar9[0x13] = puVar9[0x12];
  uVar12 = puVar9[2];
  if (uVar12 != 0) {
    uVar14 = 0;
    do {
      if ((ulong)(puVar9[0x10] - puVar9[0xf]) <= uVar14) {
LAB_10a983bf0:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10a983bf4);
        (*pcVar8)();
      }
      if (*(char *)(puVar9[0xf] + uVar14) == '\0') {
        uStack_a4 = (undefined4)uVar14;
        FUN_109febd04(puVar9 + 0x12,&uStack_a4);
        uVar12 = puVar9[2];
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar12);
  }
  return;
LAB_10a98379c:
  puVar13[2] = uVar7;
  uVar17 = uVar17 + 1;
  if (uVar17 == uVar14) goto LAB_10a9837ac;
  goto LAB_10a983718;
}



/* Entry: 10a983a84; end: 10a983bf3;  */

void FUN_10a983a84(long param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uStack_34;
  
  if (0 < *(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78)) {
    _memset(*(long *)(param_1 + 0x78),1);
  }
  for (plVar3 = *(long **)(param_2 + 0x10); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    uVar4 = (ulong)*(uint *)(plVar3 + 2);
    if (*(char *)(param_1 + 0x20) == '\x01') {
      if ((ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 2) <= uVar4)
      goto LAB_10a983bf0;
      uVar4 = (ulong)*(int *)(*(long *)(param_1 + 0x28) + uVar4 * 4);
      if ((ulong)(*(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78)) <= uVar4)
      goto LAB_10a983bf0;
      *(undefined1 *)(*(long *)(param_1 + 0x78) + uVar4) = 0;
      if ((ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 2) <=
          (ulong)*(uint *)(plVar3 + 2)) goto LAB_10a983bf0;
      iVar1 = *(int *)(*(long *)(param_1 + 0x28) + (ulong)*(uint *)(plVar3 + 2) * 4);
      uVar4 = (*(long *)(param_1 + 0xf8) - *(long *)(param_1 + 0xf0) >> 2) * -0x5555555555555555;
      if (uVar4 < (ulong)(long)iVar1 || uVar4 - (long)iVar1 == 0) goto LAB_10a983bf0;
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0xf0) + (long)iVar1 * 0xc);
    }
    else {
      if ((ulong)(*(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78)) <= uVar4)
      goto LAB_10a983bf0;
      *(undefined1 *)(*(long *)(param_1 + 0x78) + uVar4) = 0;
      uVar4 = (ulong)*(uint *)(plVar3 + 2);
      uVar7 = (*(long *)(param_1 + 0xf8) - *(long *)(param_1 + 0xf0) >> 2) * -0x5555555555555555;
      if (uVar7 < uVar4 || uVar7 - uVar4 == 0) goto LAB_10a983bf0;
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0xf0) + uVar4 * 0xc);
    }
    uVar6 = *(undefined8 *)((long)plVar3 + 0x14);
    *(undefined4 *)(puVar5 + 1) = *(undefined4 *)((long)plVar3 + 0x1c);
    *puVar5 = uVar6;
  }
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x90);
  uVar4 = *(ulong *)(param_1 + 0x10);
  if (uVar4 != 0) {
    uVar7 = 0;
    do {
      if ((ulong)(*(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78)) <= uVar7) {
LAB_10a983bf0:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a983bf4);
        (*pcVar2)();
      }
      if (*(char *)(*(long *)(param_1 + 0x78) + uVar7) == '\0') {
        uStack_34 = (undefined4)uVar7;
        FUN_109febd04((undefined8 *)(param_1 + 0x90),&uStack_34);
        uVar4 = *(ulong *)(param_1 + 0x10);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  return;
}



/* Entry: 10a983bf4; end: 10a983c4f;  */

void FUN_10a983bf4(long param_1,ulong param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    if (param_2 < (ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 2)) {
      uVar2 = (ulong)*(int *)(*(long *)(param_1 + 0x28) + param_2 * 4);
      if (uVar2 < (ulong)(*(long *)(param_1 + 200) - *(long *)(param_1 + 0xc0) >> 5)) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0xc0) + uVar2 * 0x20);
        goto LAB_10a983c40;
      }
    }
  }
  else if (param_2 < (ulong)(*(long *)(param_1 + 200) - *(long *)(param_1 + 0xc0) >> 5)) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0xc0) + param_2 * 0x20);
LAB_10a983c40:
    uVar4 = *param_3;
    uVar6 = param_3[3];
    uVar5 = param_3[2];
    puVar3[1] = param_3[1];
    *puVar3 = uVar4;
    puVar3[3] = uVar6;
    puVar3[2] = uVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a983c50);
  (*pcVar1)();
}



/* Entry: 10a983c50; end: 10a9846cb;  */

void FUN_10a983c50(long param_1,long param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  bool bVar10;
  code *pcVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  long *plVar25;
  long lVar26;
  undefined4 *puVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
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
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  float fStack_f0;
  float fStack_ec;
  long lStack_e8;
  long lStack_e0;
  long *plStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  float fStack_90;
  undefined8 uStack_88;
  float fStack_80;
  undefined8 uStack_78;
  float fStack_70;
  
  uVar17 = *(undefined8 *)(param_2 + 8);
  uVar32 = *(undefined8 *)(param_2 + 0x20);
  uVar31 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x2f0) = uVar17;
  *(undefined8 *)(param_1 + 0x308) = uVar32;
  *(undefined8 *)(param_1 + 0x300) = uVar31;
  uVar31 = *(undefined8 *)(param_2 + 0x30);
  uVar17 = *(undefined8 *)(param_2 + 0x28);
  uVar33 = *(undefined8 *)(param_2 + 0x40);
  uVar32 = *(undefined8 *)(param_2 + 0x38);
  uVar35 = *(undefined8 *)(param_2 + 0x50);
  uVar34 = *(undefined8 *)(param_2 + 0x48);
  uVar36 = *(undefined8 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x344) = *(undefined8 *)(param_2 + 0x5c);
  *(undefined8 *)(param_1 + 0x33c) = uVar36;
  *(undefined8 *)(param_1 + 0x328) = uVar33;
  *(undefined8 *)(param_1 + 800) = uVar32;
  *(undefined8 *)(param_1 + 0x338) = uVar35;
  *(undefined8 *)(param_1 + 0x330) = uVar34;
  *(undefined8 *)(param_1 + 0x318) = uVar31;
  *(undefined8 *)(param_1 + 0x310) = uVar17;
  uVar32 = *(undefined8 *)(param_2 + 0x10);
  uVar31 = *(undefined8 *)(param_2 + 8);
  uVar34 = *(undefined8 *)(param_2 + 0x20);
  uVar33 = *(undefined8 *)(param_2 + 0x18);
  uVar36 = *(undefined8 *)(param_2 + 0x30);
  uVar35 = *(undefined8 *)(param_2 + 0x28);
  uVar40 = *(undefined8 *)(param_2 + 0x40);
  uVar39 = *(undefined8 *)(param_2 + 0x38);
  uVar42 = *(undefined8 *)(param_2 + 0x50);
  uVar41 = *(undefined8 *)(param_2 + 0x48);
  uVar17 = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x2d8) = uVar17;
  *(undefined8 *)(param_1 + 0x2c0) = uVar40;
  *(undefined8 *)(param_1 + 0x2b8) = uVar39;
  *(undefined8 *)(param_1 + 0x2d0) = uVar42;
  *(undefined8 *)(param_1 + 0x2c8) = uVar41;
  *(undefined8 *)(param_1 + 0x2a0) = uVar34;
  *(undefined8 *)(param_1 + 0x298) = uVar33;
  *(undefined8 *)(param_1 + 0x2b0) = uVar36;
  *(undefined8 *)(param_1 + 0x2a8) = uVar35;
  *(undefined8 *)(param_1 + 0x290) = uVar32;
  *(undefined8 *)(param_1 + 0x288) = uVar31;
  *(undefined4 *)(param_1 + 0x230) = 0;
  uVar15 = *(long *)(param_1 + 0x128) - *(long *)(param_1 + 0x120);
  if (0 < (long)uVar15) {
    _bzero(*(long *)(param_1 + 0x120),(uVar15 / 0xc - (ulong)(0xb < uVar15)) * 0xc + 0xc);
  }
  uStack_128 = 0x3f800000;
  uStack_120._4_4_ = 0;
  uStack_118._0_4_ = 0;
  uStack_124 = 0;
  uStack_120._0_4_ = 0;
  uStack_118._4_4_ = 0x3f800000;
  uStack_110 = 0;
  uStack_108 = 0;
  fVar37 = *(float *)(param_1 + 0x338) * 0.0;
  fVar38 = (float)*(undefined8 *)(param_1 + 0x330);
  fVar44 = fVar38 * 0.0;
  fVar43 = (float)((ulong)*(undefined8 *)(param_1 + 0x330) >> 0x20);
  fVar45 = fVar43 * 0.0;
  uVar17 = NEON_rev64(CONCAT44(fVar45,fVar44),4);
  fVar44 = fVar44 + fVar45;
  uStack_f8 = CONCAT44(fVar43 + (float)((ulong)uVar17 >> 0x20) + fVar37 + 0.0,
                       fVar38 + (float)uVar17 + fVar37 + 0.0);
  fStack_f0 = *(float *)(param_1 + 0x338) + fVar44 + 0.0;
  fStack_ec = fVar44 + fVar37 + 1.0;
  uStack_100 = 0x3f800000;
  fVar37 = *(float *)(param_1 + 0x33c);
  fVar38 = *(float *)(param_1 + 0x340);
  fVar43 = *(float *)(param_1 + 0x344);
  fVar44 = *(float *)(param_1 + 0x348);
  fStack_168 = (fVar38 * fVar38 + fVar43 * fVar43) * -2.0 + 1.0;
  fStack_164 = fVar37 * fVar38 + fVar43 * fVar44;
  fStack_164 = fStack_164 + fStack_164;
  fStack_160 = fVar37 * fVar43 - fVar38 * fVar44;
  fStack_160 = fStack_160 + fStack_160;
  fStack_158 = fVar37 * fVar38 - fVar43 * fVar44;
  fStack_158 = fStack_158 + fStack_158;
  fStack_154 = (fVar37 * fVar37 + fVar43 * fVar43) * -2.0 + 1.0;
  fStack_150 = fVar38 * fVar43 + fVar37 * fVar44;
  fStack_150 = fStack_150 + fStack_150;
  fStack_148 = fVar37 * fVar43 + fVar38 * fVar44;
  fStack_148 = fStack_148 + fStack_148;
  fStack_144 = fVar38 * fVar43 - fVar37 * fVar44;
  fStack_144 = fStack_144 + fStack_144;
  uStack_15c = 0;
  uStack_14c = 0;
  fStack_140 = (fVar37 * fVar37 + fVar38 * fVar38) * -2.0 + 1.0;
  uStack_134 = 0;
  uStack_13c = 0;
  uStack_12c = 0x3f800000;
  func_0x000109519fd0(&lStack_e8,&uStack_128,&fStack_168);
  func_0x000109519fd0(&plStack_a8,&lStack_e8,param_1 + 0x2f0);
  uVar15 = *(ulong *)(param_1 + 0x10);
  if (uVar15 != 0) {
    lVar16 = 0;
    uVar18 = 0;
    do {
      uStack_120 = CONCAT44(uStack_120._4_4_,(undefined4)uStack_120);
      uStack_118 = CONCAT44(uStack_118._4_4_,(undefined4)uStack_118);
      if ((ulong)(*(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78)) <= uVar18)
      goto LAB_10a98466c;
      if (*(char *)(*(long *)(param_1 + 0x78) + uVar18) != '\0') {
        uVar15 = (*(long *)(param_1 + 0xe0) - *(long *)(param_1 + 0xd8) >> 2) * -0x5555555555555555;
        uStack_120 = CONCAT44(uStack_120._4_4_,(undefined4)uStack_120);
        uStack_118 = CONCAT44(uStack_118._4_4_,(undefined4)uStack_118);
        if ((uVar15 < uVar18 || uVar15 - uVar18 == 0) ||
           (uVar15 = (*(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108) >> 2) *
                     -0x5555555555555555,
           uStack_120 = CONCAT44(uStack_120._4_4_,(undefined4)uStack_120),
           uStack_118 = CONCAT44(uStack_118._4_4_,(undefined4)uStack_118),
           uVar15 < uVar18 || uVar15 - uVar18 == 0)) goto LAB_10a98466c;
        pfVar1 = (float *)(*(long *)(param_1 + 0xd8) + lVar16);
        fVar43 = pfVar1[1];
        fVar37 = pfVar1[2];
        fVar38 = *pfVar1;
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x108) + lVar16);
        *puVar2 = CONCAT44((float)((ulong)uStack_78 >> 0x20) +
                           (float)((ulong)uStack_98 >> 0x20) * fVar43 +
                           (float)((ulong)plStack_a8 >> 0x20) * fVar38 +
                           (float)((ulong)uStack_88 >> 0x20) * fVar37,
                           (float)uStack_78 +
                           (float)uStack_98 * fVar43 + SUB84(plStack_a8,0) * fVar38 +
                           (float)uStack_88 * fVar37);
        *(float *)(puVar2 + 1) =
             fStack_70 + fStack_90 * fVar43 + fVar38 * (float)lStack_a0 + fVar37 * fStack_80;
        uVar15 = (*(long *)(param_1 + 0xf8) - *(long *)(param_1 + 0xf0) >> 2) * -0x5555555555555555;
        uStack_120 = CONCAT44(uStack_120._4_4_,(undefined4)uStack_120);
        uStack_118 = CONCAT44(uStack_118._4_4_,(undefined4)uStack_118);
        if (uVar15 < uVar18 || uVar15 - uVar18 == 0) goto LAB_10a98466c;
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0xf0) + lVar16);
        uVar17 = *puVar2;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar2 + 1);
        *puVar3 = uVar17;
        uVar15 = *(ulong *)(param_1 + 0x10);
      }
      uVar18 = uVar18 + 1;
      lVar16 = lVar16 + 0xc;
    } while (uVar18 < uVar15);
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  FUN_10a9846cc(param_1);
  FUN_10a984938(param_1);
  FUN_10a7fda98(&lStack_e8,*(undefined8 *)(param_1 + 0x10));
  uVar15 = *(ulong *)(param_1 + 0x10);
  uStack_120._0_4_ = 0;
  uStack_120._4_4_ = 0;
  uStack_118._0_4_ = 0;
  uStack_118._4_4_ = 0;
  uStack_118 = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  if (uVar15 == 0) {
    lVar29 = 0;
    lVar16 = 0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar15) {
      func_0x00010a98a7f4();
LAB_10a98466c:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10a984670);
      (*pcVar11)();
    }
    lVar29 = uVar15 * 0x18;
    __Znwm();
    uStack_118 = lVar29 + uVar15 * 0x18;
    uStack_128 = (undefined4)lVar29;
    uStack_124 = (undefined4)((ulong)lVar29 >> 0x20);
    _bzero();
    lVar16 = lVar29 + ((uVar15 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
  }
  uStack_120 = lVar16;
  if (*(long *)(param_1 + 8) != 0) {
    uVar15 = 0;
    uVar18 = (lVar16 - lVar29 >> 3) * -0x5555555555555555;
    do {
      iVar28 = 0;
LAB_10a984018:
      do {
        uVar19 = (*(long *)(param_1 + 0xb0) - *(long *)(param_1 + 0xa8) >> 2) * -0x5555555555555555;
        if (uVar19 < uVar15 || uVar19 - uVar15 == 0) goto LAB_10a98466c;
        puVar20 = (uint *)(*(long *)(param_1 + 0xa8) + uVar15 * 0xc);
        if (iVar28 == 1) {
          uVar8 = puVar20[1];
          uVar23 = puVar20[2];
          uVar14 = uVar8;
          if ((int)uVar8 <= (int)uVar23) {
            uVar14 = uVar23;
            uVar23 = uVar8;
          }
          plStack_a8 = (long *)CONCAT44(plStack_a8._4_4_,uVar14);
          iVar28 = 2;
          bVar10 = true;
        }
        else if (iVar28 == 2) {
          bVar10 = false;
          uVar8 = puVar20[2];
          uVar23 = *puVar20;
          uVar14 = uVar8;
          if ((int)uVar8 <= (int)uVar23) {
            uVar14 = uVar23;
          }
          plStack_a8 = (long *)CONCAT44(plStack_a8._4_4_,uVar14);
          if ((int)uVar8 <= (int)uVar23) {
            uVar23 = uVar8;
          }
          iVar28 = 3;
          puVar20 = puVar20 + 1;
        }
        else {
          uVar8 = *puVar20;
          uVar23 = puVar20[1];
          uVar14 = uVar8;
          if ((int)uVar8 <= (int)uVar23) {
            uVar14 = uVar23;
          }
          plStack_a8 = (long *)CONCAT44(plStack_a8._4_4_,uVar14);
          if ((int)uVar8 <= (int)uVar23) {
            uVar23 = uVar8;
          }
          bVar10 = true;
          iVar28 = 1;
          puVar20 = puVar20 + 2;
        }
        uVar19 = (lStack_e0 - lStack_e8 >> 3) * -0x5555555555555555;
        if (uVar19 < (ulong)(long)(int)uVar23 || uVar19 - (long)(int)uVar23 == 0)
        goto LAB_10a98466c;
        uVar8 = *puVar20;
        uVar19 = (ulong)(int)uVar23;
        plVar12 = (long *)(lStack_e8 + (long)(int)uVar23 * 0x18);
        lVar30 = plVar12[1] - *plVar12;
        if (lVar30 != 0) {
          uVar21 = 0;
          lVar24 = 4;
          do {
            if (*(uint *)(*plVar12 + uVar21 * 4) == uVar14) {
              if ((uVar18 < uVar19 || uVar18 - uVar19 == 0) ||
                 (plVar12 = (long *)(lVar29 + (long)(int)uVar23 * 0x18), lVar30 = *plVar12,
                 (ulong)(plVar12[1] - lVar30 >> 3) <= uVar21)) goto LAB_10a98466c;
              *(uint *)(lVar30 + lVar24) = uVar8;
              if (!bVar10) goto LAB_10a984154;
              goto LAB_10a984018;
            }
            uVar21 = uVar21 + 1;
            lVar24 = lVar24 + 8;
          } while (lVar30 >> 2 != uVar21);
        }
        func_0x000109febdc8(plVar12,&plStack_a8);
        if (uVar18 < uVar19 || uVar18 - uVar19 == 0) goto LAB_10a98466c;
        FUN_10a987cac(lVar29 + (long)(int)uVar23 * 0x18,(ulong)uVar8 | 0xffffffff00000000);
      } while (bVar10);
LAB_10a984154:
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(ulong *)(param_1 + 8));
    uVar15 = *(ulong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x1b0);
  if (uVar15 != 0) {
    uVar18 = 0;
    lVar29 = CONCAT44(uStack_124,uStack_128);
    lVar30 = lStack_e0;
    lVar24 = lStack_e8;
    do {
      uVar19 = (lVar30 - lVar24 >> 3) * -0x5555555555555555;
      if (uVar19 < uVar18 || uVar19 - uVar18 == 0) goto LAB_10a98466c;
      plVar12 = (long *)(lVar24 + uVar18 * 0x18);
      lVar13 = *plVar12;
      if (plVar12[1] != lVar13) {
        lVar30 = 0;
        uVar15 = 0;
        plVar12 = (long *)(lVar29 + uVar18 * 0x18);
        do {
          uVar14 = *(uint *)(lVar13 + uVar15 * 4);
          FUN_10a987cac(param_1 + 0x150,uVar18 & 0xffffffff | (ulong)uVar14 << 0x20);
          if (((ulong)((lVar16 - lVar29 >> 3) * -0x5555555555555555) <= uVar18) ||
             (lVar24 = *plVar12, (ulong)(plVar12[1] - lVar24 >> 3) <= uVar15)) goto LAB_10a98466c;
          puVar4 = (undefined4 *)(lVar24 + lVar30);
          iVar28 = puVar4[1];
          if (iVar28 != -1) {
            uVar9 = *puVar4;
            if (**(char **)(param_1 + 0x228) == '\x01') {
              FUN_10a987cac(param_1 + 0x1b0,CONCAT44(iVar28,uVar9));
            }
            else if (**(char **)(param_1 + 0x228) == '\0') {
              puVar4 = *(undefined4 **)(param_1 + 0x1a0);
              if (puVar4 < *(undefined4 **)(param_1 + 0x1a8)) {
                *puVar4 = (int)uVar18;
                puVar4[1] = uVar14;
                puVar27 = puVar4 + 4;
                puVar4[2] = uVar9;
                puVar4[3] = iVar28;
              }
              else {
                lVar24 = (long)puVar4 - *(long *)(param_1 + 0x198);
                uVar19 = (lVar24 >> 4) + 1;
                if (uVar19 >> 0x3c != 0) {
                  FUN_10a36b1bc();
                  goto LAB_10a98466c;
                }
                uVar22 = (long)*(undefined4 **)(param_1 + 0x1a8) - *(long *)(param_1 + 0x198);
                uVar21 = (long)uVar22 >> 3;
                if (uVar21 <= uVar19) {
                  uVar21 = uVar19;
                }
                if (0x7fffffffffffffef < uVar22) {
                  uVar21 = 0xfffffffffffffff;
                }
                lVar13 = param_1 + 0x198;
                FUN_10a36b1d0();
                puVar4 = (undefined4 *)(lVar13 + lVar24);
                *puVar4 = (int)uVar18;
                puVar4[1] = uVar14;
                puVar4[2] = uVar9;
                puVar4[3] = iVar28;
                puVar27 = puVar4 + 4;
                lVar26 = (long)puVar4 - (*(long *)(param_1 + 0x1a0) - *(long *)(param_1 + 0x198));
                _memcpy(lVar26);
                lVar24 = *(long *)(param_1 + 0x198);
                *(long *)(param_1 + 0x198) = lVar26;
                *(undefined4 **)(param_1 + 0x1a0) = puVar27;
                *(ulong *)(param_1 + 0x1a8) = lVar13 + uVar21 * 0x10;
                if (lVar24 != 0) {
                  __ZdlPv();
                }
              }
              *(undefined4 **)(param_1 + 0x1a0) = puVar27;
            }
          }
          uVar19 = (lStack_e0 - lStack_e8 >> 3) * -0x5555555555555555;
          if (uVar19 < uVar18 || uVar19 - uVar18 == 0) goto LAB_10a98466c;
          uVar15 = uVar15 + 1;
          plVar25 = (long *)(lStack_e8 + uVar18 * 0x18);
          lVar13 = *plVar25;
          lVar30 = lVar30 + 8;
        } while (uVar15 < (ulong)(plVar25[1] - lVar13 >> 2));
        uVar15 = *(ulong *)(param_1 + 0x10);
        lVar30 = lStack_e0;
        lVar24 = lStack_e8;
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar15);
  }
  FUN_10a987d68(param_1,param_1 + 0x150,param_1 + 0x180);
  FUN_10a1f4c34(param_1 + 0x1f8);
  plStack_a8 = (long *)0x0;
  lStack_a0 = 0;
  uStack_98 = 0;
  lVar16 = *(long *)(param_1 + 0x198);
  if (*(long *)(param_1 + 0x1a0) == lVar16) {
LAB_10a9845c4:
    FUN_10a9bbb80(&plStack_a8);
    FUN_10a987d68(param_1,param_1 + 0x1b0,param_1 + 0x210);
    func_0x00010742a308(param_1 + 0x168,*(long *)(param_1 + 0x158) - *(long *)(param_1 + 0x150) >> 3
                       );
    FUN_10a01066c(param_1 + 0x1c8,*(long *)(param_1 + 0x1a0) - *(long *)(param_1 + 0x198) >> 4);
    func_0x00010742a308(param_1 + 0x1e0,*(long *)(param_1 + 0x1b8) - *(long *)(param_1 + 0x1b0) >> 3
                       );
    FUN_10a9872b4(param_1);
    FUN_10a98a808(&uStack_128);
    plStack_a8 = &lStack_e8;
    func_0x00010a1f4bf4(&plStack_a8);
    FUN_10a8f458c(param_1 + 0x350);
    return;
  }
  plVar12 = (long *)0x0;
  lVar29 = 0;
  uVar15 = 0;
LAB_10a984398:
  fVar37 = (float)uVar15;
  piVar5 = (int *)(lVar16 + uVar15 * 0x10);
  lVar16 = *(long *)(param_1 + 0x200) - *(long *)(param_1 + 0x1f8);
  if (lVar16 == 0) {
    lVar30 = (lVar29 - (long)plVar12 >> 3) * -0x5555555555555555;
  }
  else {
    lVar24 = 0;
    lVar30 = (lVar29 - (long)plVar12 >> 3) * -0x5555555555555555;
    do {
      if (lVar24 == lVar30) goto LAB_10a98466c;
      iVar28 = 0;
      plVar25 = plVar12 + lVar24 * 3;
      while( true ) {
        piVar7 = piVar5 + 3;
        if (iVar28 != 3) {
          piVar7 = piVar5;
        }
        piVar6 = piVar5 + 2;
        if (iVar28 != 2) {
          piVar6 = piVar7;
        }
        piVar7 = piVar5 + 1;
        if (iVar28 != 1) {
          piVar7 = piVar6;
        }
        if ((ulong)(plVar25[1] - *plVar25) <= (ulong)(long)*piVar7) goto LAB_10a98466c;
        if (*(char *)(*plVar25 + (long)*piVar7) != '\0') break;
        iVar28 = iVar28 + 1;
        if (iVar28 == 4) {
          fStack_168 = fVar37;
          func_0x000109febd04(*(long *)(param_1 + 0x1f8) + lVar24 * 0x18,&fStack_168);
          iVar28 = 0;
          goto LAB_10a98445c;
        }
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 != (lVar16 >> 3) * -0x5555555555555555);
  }
  FUN_10a9bb8b4(&plStack_a8,lVar30 + 1);
  lVar29 = lStack_a0;
  plVar12 = plStack_a8;
  lVar16 = lStack_a0 - (long)plStack_a8;
  if (lVar16 != 0) {
    uVar15 = *(ulong *)(param_1 + 0x10);
    lVar30 = *(long *)(lStack_a0 + -0x18);
    fStack_168 = (float)((uint)fStack_168 & 0xffffff00);
    uVar18 = *(long *)(lStack_a0 + -0x10) - lVar30;
    if (uVar15 < uVar18 || uVar15 - uVar18 == 0) {
      if (uVar15 < uVar18) {
        *(ulong *)(lStack_a0 + -0x10) = lVar30 + uVar15;
      }
    }
    else {
      FUN_10a9bba74((long *)(lStack_a0 + -0x18),uVar15 - uVar18,&fStack_168);
    }
    func_0x000109634dec(param_1 + 0x1f8,
                        (*(long *)(param_1 + 0x200) - *(long *)(param_1 + 0x1f8) >> 3) *
                        -0x5555555555555555 + 1);
    if (*(long *)(param_1 + 0x200) != *(long *)(param_1 + 0x1f8)) {
      fStack_168 = fVar37;
      func_0x000109febd04(*(long *)(param_1 + 0x200) + -0x18,&fStack_168);
      iVar28 = 0;
      uVar15 = (lVar16 >> 3) * -0x5555555555555555;
      do {
        uVar18 = (*(long *)(param_1 + 0x200) - *(long *)(param_1 + 0x1f8) >> 3) *
                 -0x5555555555555555 - 1;
        if (uVar15 < uVar18 || uVar15 - uVar18 == 0) goto LAB_10a98466c;
        piVar7 = piVar5;
        if (iVar28 == 1) {
          piVar7 = piVar5 + 1;
        }
        piVar6 = piVar5 + 2;
        if (iVar28 != 2) {
          piVar6 = piVar7;
        }
        piVar7 = piVar5 + 3;
        if (iVar28 != 3) {
          piVar7 = piVar6;
        }
        lVar16 = plVar12[uVar18 * 3];
        if ((ulong)((plVar12 + uVar18 * 3)[1] - lVar16) <= (ulong)(long)*piVar7) goto LAB_10a98466c;
        *(undefined1 *)(lVar16 + *piVar7) = 1;
        iVar28 = iVar28 + 1;
      } while (iVar28 != 4);
      goto LAB_10a9845ac;
    }
  }
  goto LAB_10a98466c;
  while( true ) {
    *(undefined1 *)(*plVar25 + (long)*piVar7) = 1;
    iVar28 = iVar28 + 1;
    if (iVar28 == 4) break;
LAB_10a98445c:
    piVar7 = piVar5;
    if (iVar28 == 1) {
      piVar7 = piVar5 + 1;
    }
    piVar6 = piVar5 + 2;
    if (iVar28 != 2) {
      piVar6 = piVar7;
    }
    piVar7 = piVar5 + 3;
    if (iVar28 != 3) {
      piVar7 = piVar6;
    }
    if ((ulong)(plVar25[1] - *plVar25) <= (ulong)(long)*piVar7) goto LAB_10a98466c;
  }
LAB_10a9845ac:
  uVar15 = (ulong)((int)fVar37 + 1);
  lVar16 = *(long *)(param_1 + 0x198);
  if ((ulong)(*(long *)(param_1 + 0x1a0) - lVar16 >> 4) <= uVar15) goto LAB_10a9845c4;
  goto LAB_10a984398;
}



/* Entry: 10a9846cc; end: 10a984937;  */

void FUN_10a9846cc(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  ulong uVar9;
  float *pfVar10;
  int *piVar11;
  undefined8 *puVar12;
  float *pfVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  
  uVar5 = *(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48);
  if (0 < (long)uVar5) {
    _bzero(*(long *)(param_1 + 0x48),(uVar5 / 0xc - (ulong)(0xb < uVar5)) * 0xc + 0xc);
  }
  if (*(long *)(param_1 + 8) != 0) {
    uVar5 = 0;
    do {
      uVar9 = (*(long *)(param_1 + 0xb0) - *(long *)(param_1 + 0xa8) >> 2) * -0x5555555555555555;
      if (uVar9 < uVar5 || uVar9 - uVar5 == 0) goto LAB_10a984934;
      piVar8 = (int *)(*(long *)(param_1 + 0xa8) + uVar5 * 0xc);
      iVar1 = *piVar8;
      lVar6 = *(long *)(param_1 + 0xf0);
      uVar9 = (*(long *)(param_1 + 0xf8) - lVar6 >> 2) * -0x5555555555555555;
      if (((uVar9 < (ulong)(long)iVar1 || uVar9 - (long)iVar1 == 0) ||
          (iVar2 = piVar8[1], uVar9 < (ulong)(long)iVar2 || uVar9 - (long)iVar2 == 0)) ||
         (iVar3 = piVar8[2], uVar9 < (ulong)(long)iVar3 || uVar9 - (long)iVar3 == 0))
      goto LAB_10a984934;
      iVar7 = 0;
      pfVar13 = (float *)(lVar6 + (long)iVar1 * 0xc);
      pfVar14 = (float *)(lVar6 + (long)iVar2 * 0xc);
      pfVar10 = (float *)(lVar6 + (long)iVar3 * 0xc);
      fVar15 = *pfVar13;
      fVar16 = *pfVar14;
      fVar17 = *pfVar10;
      uVar21 = *(undefined8 *)(pfVar13 + 1);
      uVar23 = *(undefined8 *)(pfVar14 + 1);
      fVar19 = (float)((ulong)uVar21 >> 0x20);
      fVar24 = (float)((ulong)uVar23 >> 0x20);
      fVar22 = (float)uVar23;
      fVar20 = (float)uVar21 - fVar22;
      uVar21 = *(undefined8 *)(pfVar10 + 1);
      fVar22 = (float)uVar21 - fVar22;
      fVar25 = (float)((ulong)uVar21 >> 0x20);
      fVar18 = (fVar25 - fVar24) * -fVar20 + (fVar19 - fVar24) * fVar22;
      fVar19 = (fVar17 - fVar16) * -(fVar19 - fVar24) + (fVar15 - fVar16) * (fVar25 - fVar24);
      fVar15 = -(fVar15 - fVar16) * fVar22 + fVar20 * (fVar17 - fVar16);
      fVar16 = 1.0 / SQRT(fVar15 * fVar15 + fVar19 * fVar19 + fVar18 * fVar18);
      do {
        uVar9 = (*(long *)(param_1 + 0xb0) - *(long *)(param_1 + 0xa8) >> 2) * -0x5555555555555555;
        if (uVar9 < uVar5 || uVar9 - uVar5 == 0) goto LAB_10a984934;
        piVar11 = (int *)(*(long *)(param_1 + 0xa8) + uVar5 * 0xc);
        piVar8 = piVar11;
        if (iVar7 == 1) {
          piVar8 = piVar11 + 1;
        }
        piVar11 = piVar11 + 2;
        if (iVar7 != 2) {
          piVar11 = piVar8;
        }
        iVar1 = *piVar11;
        uVar9 = (*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2) * -0x5555555555555555;
        if (uVar9 < (ulong)(long)iVar1 || uVar9 - (long)iVar1 == 0) goto LAB_10a984934;
        puVar12 = (undefined8 *)(*(long *)(param_1 + 0x48) + (long)iVar1 * 0xc);
        *puVar12 = CONCAT44(fVar19 * fVar16 + (float)((ulong)*puVar12 >> 0x20),
                            fVar18 * fVar16 + (float)*puVar12);
        *(float *)(puVar12 + 1) = fVar15 * fVar16 + *(float *)(puVar12 + 1);
        iVar7 = iVar7 + 1;
      } while (iVar7 != 3);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ulong *)(param_1 + 8));
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar6 = 0;
    uVar5 = 0;
    do {
      uVar9 = (*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2) * -0x5555555555555555;
      if (uVar9 < uVar5 || uVar9 - uVar5 == 0) {
LAB_10a984934:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a984938);
        (*pcVar4)();
      }
      puVar12 = (undefined8 *)(*(long *)(param_1 + 0x48) + lVar6);
      fVar15 = *(float *)(puVar12 + 1);
      fVar17 = (float)*puVar12;
      fVar18 = (float)((ulong)*puVar12 >> 0x20);
      fVar16 = 1.0 / SQRT(fVar17 * fVar17 + fVar18 * fVar18 + fVar15 * fVar15);
      *puVar12 = CONCAT44(fVar18 * fVar16,fVar17 * fVar16);
      *(float *)(puVar12 + 1) = fVar15 * fVar16;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0xc;
    } while (uVar5 < *(ulong *)(param_1 + 0x10));
  }
  return;
}



/* Entry: 10a984938; end: 10a984a67;  */

void FUN_10a984938(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  if ((*(char *)(param_1 + 0x20) == '\x01') && (*(long *)(param_1 + 0x18) != 0)) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      if ((ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 2) <= uVar5)
      goto LAB_10a984a64;
      iVar2 = *(int *)(*(long *)(param_1 + 0x28) + uVar5 * 4);
      uVar7 = (*(long *)(param_1 + 0xf8) - *(long *)(param_1 + 0xf0) >> 2) * -0x5555555555555555;
      if ((uVar7 < (ulong)(long)iVar2 || uVar7 - (long)iVar2 == 0) ||
         (uVar7 = (*(long *)(param_1 + 0x140) - *(long *)(param_1 + 0x138) >> 2) *
                  -0x5555555555555555, uVar7 < uVar5 || uVar7 - uVar5 == 0)) goto LAB_10a984a64;
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0xf0) + (long)iVar2 * 0xc);
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x138) + lVar4);
      uVar8 = *puVar6;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar6 + 1);
      *puVar1 = uVar8;
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0xc;
    } while (uVar5 < *(ulong *)(param_1 + 0x18));
    if ((*(ulong *)(param_1 + 0x18) != 0) && ((*(byte *)(param_1 + 0x40) & 1) != 0)) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        if ((ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 2) <= uVar5) {
LAB_10a984a64:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10a984a68);
          (*pcVar3)();
        }
        iVar2 = *(int *)(*(long *)(param_1 + 0x28) + uVar5 * 4);
        uVar7 = (*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2) * -0x5555555555555555;
        if ((uVar7 < (ulong)(long)iVar2 || uVar7 - (long)iVar2 == 0) ||
           (uVar7 = (*(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60) >> 2) *
                    -0x5555555555555555, uVar7 < uVar5 || uVar7 - uVar5 == 0)) goto LAB_10a984a64;
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0x48) + (long)iVar2 * 0xc);
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
        uVar8 = *puVar6;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar6 + 1);
        *puVar1 = uVar8;
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0xc;
      } while (uVar5 < *(ulong *)(param_1 + 0x18));
    }
  }
  return;
}



/* Entry: 10a984a68; end: 10a9872b3;  */

void FUN_10a984a68(float param_1,long param_2,undefined1 param_3)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  float *pfVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  uint uVar27;
  int iVar28;
  long lVar29;
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
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar60;
  ulong uVar59;
  int iVar61;
  float fVar62;
  float fVar63;
  int iVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined8 uVar80;
  float fVar81;
  float fVar82;
  float fStack_360;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2d8;
  long lStack_2d0;
  undefined **ppuStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined8 uStack_26c;
  undefined8 uStack_264;
  float fStack_258;
  float fStack_254;
  ulong uStack_250;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  undefined4 uStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  undefined8 uStack_22c;
  undefined8 uStack_224;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  float fStack_168;
  undefined8 uStack_164;
  long lStack_15c;
  float fStack_154;
  ulong uStack_150;
  undefined8 uStack_148;
  float fStack_140;
  undefined8 uStack_13c;
  undefined8 uStack_134;
  undefined4 uStack_12c;
  float fStack_128;
  undefined8 uStack_124;
  long lStack_11c;
  float fStack_114;
  ulong uStack_110;
  undefined8 uStack_108;
  float fStack_100;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  float fStack_b0;
  float fStack_ac;
  
  *(undefined1 *)(param_2 + 0x40) = param_3;
  param_1 = param_1 + *(float *)(param_2 + 0x230);
  *(float *)(param_2 + 0x230) = param_1;
  uVar9 = *(uint *)(*(long *)(param_2 + 0x228) + 0x14);
  if ((int)uVar9 < 2) {
    uVar9 = 1;
  }
  uVar27 = (uint)(param_1 * (float)uVar9);
  if (uVar27 != 0) {
    if ((int)uVar27 < 5) {
      param_1 = (float)(int)uVar27 / (float)uVar9;
    }
    else {
      uVar27 = 4;
    }
    if ((((((*(float *)(param_2 + 0x288) != *(float *)(param_2 + 0x2f0)) ||
           (*(float *)(param_2 + 0x28c) != *(float *)(param_2 + 0x2f4))) ||
          (*(float *)(param_2 + 0x290) != *(float *)(param_2 + 0x2f8))) ||
         (((*(float *)(param_2 + 0x294) != *(float *)(param_2 + 0x2fc) ||
           (*(float *)(param_2 + 0x298) != *(float *)(param_2 + 0x300))) ||
          ((*(float *)(param_2 + 0x29c) != *(float *)(param_2 + 0x304) ||
           ((*(float *)(param_2 + 0x2a0) != *(float *)(param_2 + 0x308) ||
            (*(float *)(param_2 + 0x2a4) != *(float *)(param_2 + 0x30c))))))))) ||
        (*(float *)(param_2 + 0x2a8) != *(float *)(param_2 + 0x310))) ||
       ((((*(float *)(param_2 + 0x2ac) != *(float *)(param_2 + 0x314) ||
          (*(float *)(param_2 + 0x2b0) != *(float *)(param_2 + 0x318))) ||
         (*(float *)(param_2 + 0x2b4) != *(float *)(param_2 + 0x31c))) ||
        (((*(float *)(param_2 + 0x2b8) != *(float *)(param_2 + 800) ||
          (*(float *)(param_2 + 700) != *(float *)(param_2 + 0x324))) ||
         ((*(float *)(param_2 + 0x2c0) != *(float *)(param_2 + 0x328) ||
          (*(float *)(param_2 + 0x2c4) != *(float *)(param_2 + 0x32c))))))))) {
      FUN_10a9872b4(param_2);
    }
    FUN_10a1322a0(&lStack_2d8,*(long *)(param_2 + 0x98) - *(long *)(param_2 + 0x90) >> 2);
    FUN_10a1322a0(&lStack_2f0,*(long *)(param_2 + 0x98) - *(long *)(param_2 + 0x90) >> 2);
    lVar14 = *(long *)(param_2 + 0x90);
    if (*(long *)(param_2 + 0x98) != lVar14) {
      lVar10 = 0;
      uVar13 = 0;
      do {
        iVar28 = *(int *)(lVar14 + uVar13 * 4);
        uVar21 = (*(long *)(param_2 + 0x110) - *(long *)(param_2 + 0x108) >> 2) *
                 -0x5555555555555555;
        if ((uVar21 < (ulong)(long)iVar28 || uVar21 - (long)iVar28 == 0) ||
           (uVar21 = (lStack_2d0 - lStack_2d8 >> 2) * -0x5555555555555555,
           uVar21 < uVar13 || uVar21 - uVar13 == 0)) {
LAB_10a987068:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a98706c);
          (*pcVar6)();
        }
        puVar19 = (undefined8 *)(*(long *)(param_2 + 0x108) + (long)iVar28 * 0xc);
        uVar22 = *puVar19;
        *(undefined4 *)((undefined8 *)(lStack_2d8 + lVar10) + 1) = *(undefined4 *)(puVar19 + 1);
        *(undefined8 *)(lStack_2d8 + lVar10) = uVar22;
        if ((ulong)(*(long *)(param_2 + 0x98) - *(long *)(param_2 + 0x90) >> 2) <= uVar13)
        goto LAB_10a987068;
        iVar28 = *(int *)(*(long *)(param_2 + 0x90) + uVar13 * 4);
        uVar21 = (*(long *)(param_2 + 0xf8) - *(long *)(param_2 + 0xf0) >> 2) * -0x5555555555555555;
        if ((uVar21 < (ulong)(long)iVar28 || uVar21 - (long)iVar28 == 0) ||
           (uVar21 = (lStack_2e8 - lStack_2f0 >> 2) * -0x5555555555555555,
           uVar21 < uVar13 || uVar21 - uVar13 == 0)) goto LAB_10a987068;
        puVar19 = (undefined8 *)(*(long *)(param_2 + 0xf0) + (long)iVar28 * 0xc);
        uVar22 = *puVar19;
        *(undefined4 *)((undefined8 *)(lStack_2f0 + lVar10) + 1) = *(undefined4 *)(puVar19 + 1);
        *(undefined8 *)(lStack_2f0 + lVar10) = uVar22;
        uVar13 = uVar13 + 1;
        lVar14 = *(long *)(param_2 + 0x90);
        lVar10 = lVar10 + 0xc;
      } while (uVar13 < (ulong)(*(long *)(param_2 + 0x98) - lVar14 >> 2));
    }
    if ((*(byte *)(*(long *)(param_2 + 0x228) + 0x18) & 1) != 0) {
      if (*(long *)(param_2 + 0x238) != *(long *)(param_2 + 0x240)) {
        FUN_10a987a30(param_2 + 0x250,*(long *)(param_2 + 0x240) - *(long *)(param_2 + 0x238) >> 3);
        FUN_10a987a30(param_2 + 0x268,*(long *)(param_2 + 0x240) - *(long *)(param_2 + 0x238) >> 3);
      }
    }
    fVar56 = 1e-06;
    uVar9 = 0;
    while (uVar9 != (uVar27 & ((int)uVar27 >> 0x1f ^ 0xffffffffU))) {
      fVar47 = (float)(uVar9 + 1) / (float)(int)uVar27;
      lVar14 = *(long *)(param_2 + 0x90);
      if (*(long *)(param_2 + 0x98) != lVar14) {
        lVar10 = 0;
        uVar13 = 0;
        fVar30 = 1.0 - fVar47;
        do {
          uVar21 = (lStack_2d0 - lStack_2d8 >> 2) * -0x5555555555555555;
          if ((uVar21 < uVar13 || uVar21 - uVar13 == 0) ||
             (uVar21 = (lStack_2e8 - lStack_2f0 >> 2) * -0x5555555555555555,
             uVar21 < uVar13 || uVar21 - uVar13 == 0)) goto LAB_10a987068;
          iVar28 = *(int *)(lVar14 + uVar13 * 4);
          uVar21 = (*(long *)(param_2 + 0xf8) - *(long *)(param_2 + 0xf0) >> 2) *
                   -0x5555555555555555;
          if (uVar21 < (ulong)(long)iVar28 || uVar21 - (long)iVar28 == 0) goto LAB_10a987068;
          fVar34 = *(float *)((undefined8 *)(lStack_2d8 + lVar10) + 1);
          fVar38 = *(float *)((undefined8 *)(lStack_2f0 + lVar10) + 1);
          puVar19 = (undefined8 *)(*(long *)(param_2 + 0xf0) + (long)iVar28 * 0xc);
          uVar22 = *(undefined8 *)(lStack_2d8 + lVar10);
          uVar46 = *(undefined8 *)(lStack_2f0 + lVar10);
          *puVar19 = CONCAT44((float)((ulong)uVar22 >> 0x20) * fVar30 +
                              (float)((ulong)uVar46 >> 0x20) * fVar47,
                              (float)uVar22 * fVar30 + (float)uVar46 * fVar47);
          *(float *)(puVar19 + 1) = fVar30 * fVar34 + fVar47 * fVar38;
          uVar13 = uVar13 + 1;
          lVar14 = *(long *)(param_2 + 0x90);
          lVar10 = lVar10 + 0xc;
        } while (uVar13 < (ulong)(*(long *)(param_2 + 0x98) - lVar14 >> 2));
      }
      lVar14 = *(long *)(param_2 + 0x228);
      if (((*(byte *)(lVar14 + 0x18) & 1) != 0) &&
         (lVar10 = *(long *)(param_2 + 0x238), lVar10 != *(long *)(param_2 + 0x240))) {
        uVar13 = 0;
        lVar14 = 8;
        do {
          lVar10 = *(long *)(lVar10 + uVar13 * 8);
          FUN_10a8f494c(&uStack_218,(float)uVar9 / (float)(int)uVar27,lVar10 + 8,lVar10 + 0x70);
          uVar21 = (*(long *)(param_2 + 600) - *(long *)(param_2 + 0x250) >> 3) * 0x4ec4ec4ec4ec4ec5
          ;
          if (uVar21 < uVar13 || uVar21 - uVar13 == 0) goto LAB_10a987068;
          puVar19 = (undefined8 *)(*(long *)(param_2 + 0x250) + lVar14);
          puVar19[1] = CONCAT44(uStack_204,fStack_208);
          *puVar19 = CONCAT44(fStack_20c,fStack_210);
          puVar19[3] = uStack_1f8;
          puVar19[2] = CONCAT44(uStack_1fc,uStack_200);
          *(ulong *)((long)puVar19 + 0x54) = CONCAT44(fStack_1b8,fStack_1bc);
          *(ulong *)((long)puVar19 + 0x4c) = CONCAT44(fStack_1c0,fStack_1c4);
          puVar19[7] = CONCAT44(uStack_1d4,uStack_1d8);
          puVar19[6] = CONCAT44(uStack_1dc,uStack_1e0);
          puVar19[9] = CONCAT44(fStack_1c4,uStack_1c8);
          puVar19[8] = uStack_1d0;
          puVar19[5] = CONCAT44(uStack_1e4,uStack_1e8);
          puVar19[4] = uStack_1f0;
          if ((ulong)(*(long *)(param_2 + 0x240) - *(long *)(param_2 + 0x238) >> 3) <= uVar13)
          goto LAB_10a987068;
          lVar10 = *(long *)(*(long *)(param_2 + 0x238) + uVar13 * 8);
          FUN_10a8f494c(&uStack_218,fVar47,lVar10 + 8,lVar10 + 0x70);
          uVar21 = (*(long *)(param_2 + 0x270) - *(long *)(param_2 + 0x268) >> 3) *
                   0x4ec4ec4ec4ec4ec5;
          if (uVar21 < uVar13 || uVar21 - uVar13 == 0) goto LAB_10a987068;
          puVar19 = (undefined8 *)(*(long *)(param_2 + 0x268) + lVar14);
          puVar19[1] = CONCAT44(uStack_204,fStack_208);
          *puVar19 = CONCAT44(fStack_20c,fStack_210);
          puVar19[3] = uStack_1f8;
          puVar19[2] = CONCAT44(uStack_1fc,uStack_200);
          *(ulong *)((long)puVar19 + 0x54) = CONCAT44(fStack_1b8,fStack_1bc);
          *(ulong *)((long)puVar19 + 0x4c) = CONCAT44(fStack_1c0,fStack_1c4);
          puVar19[7] = CONCAT44(uStack_1d4,uStack_1d8);
          puVar19[6] = CONCAT44(uStack_1dc,uStack_1e0);
          puVar19[9] = CONCAT44(fStack_1c4,uStack_1c8);
          puVar19[8] = uStack_1d0;
          puVar19[5] = CONCAT44(uStack_1e4,uStack_1e8);
          puVar19[4] = uStack_1f0;
          uVar13 = uVar13 + 1;
          lVar10 = *(long *)(param_2 + 0x238);
          lVar14 = lVar14 + 0x68;
        } while (uVar13 < (ulong)(*(long *)(param_2 + 0x240) - lVar10 >> 3));
        lVar14 = *(long *)(param_2 + 0x228);
      }
      uVar5 = *(uint *)(lVar14 + 0x14);
      if ((int)uVar5 < 2) {
        uVar5 = 1;
      }
      fVar30 = (float)uVar5;
      fVar34 = 1.0 / fVar30;
      fVar47 = 0.0;
      if (0.0 <= *(float *)(lVar14 + 0x44)) {
        fVar47 = *(float *)(lVar14 + 0x44);
      }
      fVar38 = 1.0;
      if (fVar47 <= 1.0) {
        fVar38 = fVar47;
      }
      fVar47 = fVar56;
      if (1e-06 <= *(float *)(lVar14 + 0x2c)) {
        fVar47 = *(float *)(lVar14 + 0x2c);
      }
      uVar46 = *(undefined8 *)(lVar14 + 4);
      fVar54 = *(float *)(lVar14 + 0xc);
      uVar22 = *(undefined8 *)(lVar14 + 0x50);
      *(undefined4 *)(param_2 + 0x368) = *(undefined4 *)(lVar14 + 0x58);
      *(undefined8 *)(param_2 + 0x360) = uVar22;
      *(undefined4 *)(param_2 + 0x35c) = *(undefined4 *)(lVar14 + 0x5c);
      *(undefined8 *)(param_2 + 0x354) = *(undefined8 *)(lVar14 + 0x60);
      FUN_10a8f7d00(param_2 + 0x350);
      uVar13 = *(ulong *)(param_2 + 0x10);
      if (uVar13 != 0) {
        lVar10 = 0;
        lVar14 = 0;
        uVar21 = 0;
        fVar35 = 0.0;
        fVar37 = 0.0;
        fVar31 = 0.0;
        fVar39 = fVar56;
        do {
          if ((ulong)(*(long *)(param_2 + 0x80) - *(long *)(param_2 + 0x78)) <= uVar21)
          goto LAB_10a987068;
          if (*(char *)(*(long *)(param_2 + 0x78) + uVar21) == '\0') {
            uVar13 = (*(long *)(param_2 + 0xf8) - *(long *)(param_2 + 0xf0) >> 2) *
                     -0x5555555555555555;
            if (((uVar13 < uVar21 || uVar13 - uVar21 == 0) ||
                (uVar13 = (*(long *)(param_2 + 0x110) - *(long *)(param_2 + 0x108) >> 2) *
                          -0x5555555555555555, uVar13 < uVar21 || uVar13 - uVar21 == 0)) ||
               (uVar13 = (*(long *)(param_2 + 0x128) - *(long *)(param_2 + 0x120) >> 2) *
                         -0x5555555555555555, uVar13 < uVar21 || uVar13 - uVar21 == 0))
            goto LAB_10a987068;
            puVar19 = (undefined8 *)(*(long *)(param_2 + 0xf0) + lVar14);
            fVar44 = *(float *)(puVar19 + 1);
            puVar25 = (undefined8 *)(*(long *)(param_2 + 0x108) + lVar14);
            fVar32 = *(float *)(puVar25 + 1);
            puVar12 = (undefined8 *)(*(long *)(param_2 + 0x120) + lVar14);
            uVar22 = *puVar19;
            uVar80 = *puVar25;
            *puVar12 = CONCAT44(((float)((ulong)uVar22 >> 0x20) - (float)((ulong)uVar80 >> 0x20)) *
                                fVar30,((float)uVar22 - (float)uVar80) * fVar30);
            *(float *)(puVar12 + 1) = (fVar44 - fVar32) * fVar30;
            uVar13 = *(ulong *)(param_2 + 0x10);
          }
          else {
            if (((ulong)(*(long *)(param_2 + 200) - *(long *)(param_2 + 0xc0) >> 5) <= uVar21) ||
               (uVar23 = (*(long *)(param_2 + 0x128) - *(long *)(param_2 + 0x120) >> 2) *
                         -0x5555555555555555, uVar23 < uVar21 || uVar23 - uVar21 == 0))
            goto LAB_10a987068;
            pfVar16 = (float *)(*(long *)(param_2 + 0xc0) + lVar10);
            fVar44 = *pfVar16 * *(float *)(*(long *)(param_2 + 0x228) + 0x30) + pfVar16[1] * fVar47;
            fVar39 = fVar39 + fVar44;
            puVar19 = (undefined8 *)(*(long *)(param_2 + 0x120) + lVar14);
            uVar22 = *puVar19;
            fVar35 = fVar35 + (float)uVar22 * fVar44;
            fVar37 = fVar37 + (float)((ulong)uVar22 >> 0x20) * fVar44;
            fVar31 = fVar31 + fVar44 * *(float *)(puVar19 + 1);
          }
          uVar21 = uVar21 + 1;
          lVar14 = lVar14 + 0xc;
          lVar10 = lVar10 + 0x20;
        } while (uVar21 < uVar13);
        if (uVar13 != 0) {
          lVar10 = 0;
          lVar14 = 0;
          uVar13 = 0;
          do {
            if ((ulong)(*(long *)(param_2 + 0x80) - *(long *)(param_2 + 0x78)) <= uVar13)
            goto LAB_10a987068;
            if (*(char *)(*(long *)(param_2 + 0x78) + uVar13) == '\0') {
              uVar21 = (*(long *)(param_2 + 0x128) - *(long *)(param_2 + 0x120) >> 2) *
                       -0x5555555555555555;
              if ((uVar21 < uVar13 || uVar21 - uVar13 == 0) ||
                 (uVar21 = (*(long *)(param_2 + 0xf8) - *(long *)(param_2 + 0xf0) >> 2) *
                           -0x5555555555555555, uVar21 < uVar13 || uVar21 - uVar13 == 0))
              goto LAB_10a987068;
              puVar19 = (undefined8 *)(*(long *)(param_2 + 0x120) + lVar14);
              fVar44 = *(float *)(puVar19 + 1);
              puVar25 = (undefined8 *)(*(long *)(param_2 + 0xf0) + lVar14);
              uVar22 = *puVar19;
              *puVar25 = CONCAT44((float)((ulong)*puVar25 >> 0x20) -
                                  (float)((ulong)uVar22 >> 0x20) * fVar34,
                                  (float)*puVar25 - (float)uVar22 * fVar34);
              *(float *)(puVar25 + 1) = *(float *)(puVar25 + 1) - fVar34 * fVar44;
            }
            else {
              lVar11 = *(long *)(param_2 + 0xc0);
              if (((ulong)(*(long *)(param_2 + 200) - lVar11 >> 5) <= uVar13) ||
                 (uVar21 = (*(long *)(param_2 + 0x128) - *(long *)(param_2 + 0x120) >> 2) *
                           -0x5555555555555555, uVar21 < uVar13 || uVar21 - uVar13 == 0))
              goto LAB_10a987068;
              fVar32 = *(float *)(lVar11 + lVar10 + 0x18) *
                       *(float *)(*(long *)(param_2 + 0x228) + 0x48) +
                       *(float *)(lVar11 + lVar10 + 0x1c) * fVar38;
              fVar44 = 0.0;
              if (0.0 <= fVar32) {
                fVar44 = fVar32;
              }
              fVar32 = 1.0;
              if (fVar44 <= 1.0) {
                fVar32 = fVar44;
              }
              puVar19 = (undefined8 *)(*(long *)(param_2 + 0x120) + lVar14);
              fVar32 = 1.0 - fVar32;
              *puVar19 = CONCAT44((float)((ulong)*puVar19 >> 0x20) * fVar32,(float)*puVar19 * fVar32
                                 );
              *(float *)(puVar19 + 1) = *(float *)(puVar19 + 1) * fVar32;
              lVar29 = *(long *)(param_2 + 0x120);
              uVar21 = (*(long *)(param_2 + 0x128) - lVar29 >> 2) * -0x5555555555555555;
              if (uVar21 < uVar13 || uVar21 - uVar13 == 0) goto LAB_10a987068;
              puVar19 = (undefined8 *)(lVar29 + lVar14);
              fVar32 = (float)*puVar19 - fVar35 / fVar39;
              fVar33 = (float)((ulong)*puVar19 >> 0x20) - fVar37 / fVar39;
              fVar36 = *(float *)(puVar19 + 1) - fVar31 / fVar39;
              fVar40 = SQRT(fVar32 * fVar32 + fVar33 * fVar33 + fVar36 * fVar36) * fVar30;
              fVar44 = fVar56;
              if (1e-06 <= fVar40) {
                fVar44 = fVar40;
              }
              lVar17 = *(long *)(param_2 + 0x228);
              if (*(float *)(lVar17 + 0x28) < fVar44) {
                fVar44 = *(float *)(lVar17 + 0x28) / fVar44;
                *puVar19 = CONCAT44(fVar37 / fVar39 + fVar33 * fVar44,
                                    fVar35 / fVar39 + fVar32 * fVar44);
                *(float *)(puVar19 + 1) = fVar31 / fVar39 + fVar36 * fVar44;
                lVar17 = *(long *)(param_2 + 0x228);
                lVar29 = *(long *)(param_2 + 0x120);
                uVar21 = (*(long *)(param_2 + 0x128) - lVar29 >> 2) * -0x5555555555555555;
              }
              fVar32 = *(float *)(lVar11 + lVar10) * *(float *)(lVar17 + 0x30) +
                       ((float *)(lVar11 + lVar10))[1] * fVar47;
              fVar44 = fVar56;
              if (1e-06 <= fVar32) {
                fVar44 = fVar32;
              }
              if (uVar21 <= uVar13) goto LAB_10a987068;
              puVar19 = (undefined8 *)(lVar29 + lVar14);
              uVar22 = *puVar19;
              *puVar19 = CONCAT44((float)((ulong)uVar46 >> 0x20) * fVar34 * fVar44 +
                                  (float)((ulong)uVar22 >> 0x20),
                                  (float)uVar46 * fVar34 * fVar44 + (float)uVar22);
              fVar33 = *(float *)(puVar19 + 1);
              fVar32 = fVar34 * fVar54 * fVar44 + fVar33;
              *(float *)(puVar19 + 1) = fVar32;
              if (*(char *)(*(long *)(param_2 + 0x228) + 0x4c) == '\x01') {
                uVar21 = (*(long *)(param_2 + 0xf8) - *(long *)(param_2 + 0xf0) >> 2) *
                         -0x5555555555555555;
                if (uVar21 < uVar13 || uVar21 - uVar13 == 0) goto LAB_10a987068;
                FUN_10a8f7f6c(param_2 + 0x350,*(long *)(param_2 + 0xf0) + lVar14);
                uVar21 = (*(long *)(param_2 + 0x128) - *(long *)(param_2 + 0x120) >> 2) *
                         -0x5555555555555555;
                if (uVar21 < uVar13 || uVar21 - uVar13 == 0) goto LAB_10a987068;
                puVar19 = (undefined8 *)(*(long *)(param_2 + 0x120) + lVar14);
                *puVar19 = CONCAT44(fVar33 * fVar34 * fVar44 + (float)((ulong)*puVar19 >> 0x20),
                                    fVar32 * fVar34 * fVar44 + (float)*puVar19);
                *(float *)(puVar19 + 1) = fVar44 * fVar34 * (float)uVar22 + *(float *)(puVar19 + 1);
              }
            }
            uVar13 = uVar13 + 1;
            lVar14 = lVar14 + 0xc;
            lVar10 = lVar10 + 0x20;
          } while (uVar13 < *(ulong *)(param_2 + 0x10));
        }
      }
      lStack_178 = 0;
      lStack_180 = 0;
      uStack_170 = 0;
      lStack_190 = 0;
      lStack_198 = 0;
      uStack_188 = 0;
      lVar14 = *(long *)(param_2 + 0x228);
      if (*(char *)(lVar14 + 0x18) == '\x01') {
        if (*(long *)(param_2 + 0x238) != *(long *)(param_2 + 0x240)) {
          FUN_10a987fd0(&lStack_180,*(long *)(param_2 + 0x240) - *(long *)(param_2 + 0x238) >> 3);
          FUN_10a987fd0(&lStack_198,*(long *)(param_2 + 0x240) - *(long *)(param_2 + 0x238) >> 3);
          lVar14 = *(long *)(param_2 + 0x228);
        }
      }
      fVar47 = fVar56;
      if (1e-06 <= *(float *)(lVar14 + 0x2c)) {
        fVar47 = *(float *)(lVar14 + 0x2c);
      }
      fVar34 = *(float *)(lVar14 + 0x34);
      fVar30 = 0.0;
      if ((0.0 <= fVar34) && (fVar30 = 1.0, fVar34 <= 1.0)) {
        fVar30 = fVar34;
      }
      fVar38 = *(float *)(lVar14 + 0x3c);
      fVar34 = 0.0;
      if ((0.0 <= fVar38) && (fVar34 = 1.0, fVar38 <= 1.0)) {
        fVar34 = fVar38;
      }
      uVar5 = *(int *)(lVar14 + 0x10) * *(int *)(lVar14 + 0x14);
      if ((int)uVar5 < 2) {
        uVar5 = 1;
      }
      if (0 < *(int *)(lVar14 + 0x10)) {
        iVar28 = 0;
        fVar38 = 1.0 / (float)uVar5;
        do {
          if ((*(char *)(lVar14 + 0x18) == '\x01') &&
             (*(long *)(param_2 + 0x238) != *(long *)(param_2 + 0x240))) {
            lVar10 = 0;
            lVar14 = 0;
            uVar13 = 0;
            do {
              uVar21 = (*(long *)(param_2 + 600) - *(long *)(param_2 + 0x250) >> 3) *
                       0x4ec4ec4ec4ec4ec5;
              if ((uVar21 < uVar13 || uVar21 - uVar13 == 0) ||
                 (uVar21 = (*(long *)(param_2 + 0x270) - *(long *)(param_2 + 0x268) >> 3) *
                           0x4ec4ec4ec4ec4ec5, uVar21 < uVar13 || uVar21 - uVar13 == 0))
              goto LAB_10a987068;
              FUN_10a8f494c(&uStack_218,
                            (float)(iVar28 + 1) / (float)*(int *)(*(long *)(param_2 + 0x228) + 0x10)
                            ,*(long *)(param_2 + 0x250) + lVar14,*(long *)(param_2 + 0x268) + lVar14
                           );
              FUN_10a8f7b54(&ppuStack_2c0,&uStack_218);
              uVar21 = (lStack_178 - lStack_180 >> 4) * -0x5555555555555555;
              if (uVar21 < uVar13 || uVar21 - uVar13 == 0) goto LAB_10a987068;
              puVar19 = (undefined8 *)(lStack_180 + lVar10);
              puVar19[3] = uStack_2a8;
              puVar19[2] = uStack_2b0;
              puVar19[5] = uStack_298;
              puVar19[4] = uStack_2a0;
              puVar19[1] = uStack_2b8;
              *puVar19 = ppuStack_2c0;
              ppuStack_2c0 = &PTR_DAT_110bd3ea8;
              uStack_2b0 = CONCAT44(uStack_204,fStack_208);
              uStack_2b8 = CONCAT44(fStack_20c,fStack_210);
              uStack_2a8 = CONCAT44(uStack_1fc,uStack_200);
              uStack_2a0 = uStack_1f8;
              uStack_290 = CONCAT44(uStack_1e4,uStack_1e8);
              uStack_298 = uStack_1f0;
              uStack_280 = CONCAT44(uStack_1d4,uStack_1d8);
              uStack_288 = CONCAT44(uStack_1dc,uStack_1e0);
              uStack_278 = 0;
              uStack_270 = 0;
              uStack_264 = CONCAT44(fStack_1b8,fStack_1bc);
              uStack_26c = CONCAT44(fStack_1c0,fStack_1c4);
              lStack_15c = 0;
              uStack_164 = 0;
              fStack_168 = 1.0;
              fStack_154 = 1.0;
              uStack_150 = 0;
              uStack_148 = 0;
              uStack_134 = 0;
              uStack_13c = 0;
              fStack_140 = 1.0;
              uStack_12c = 0x3f800000;
              fStack_258 = (fStack_1c0 * fStack_1c0 + fStack_1bc * fStack_1bc) * -2.0 + 1.0;
              fStack_254 = fStack_1c4 * fStack_1c0 + fStack_1bc * fStack_1b8;
              fStack_254 = fStack_254 + fStack_254;
              fVar54 = fStack_1c4 * fStack_1bc - fStack_1c0 * fStack_1b8;
              fStack_248 = fStack_1c4 * fStack_1c0 - fStack_1bc * fStack_1b8;
              fStack_248 = fStack_248 + fStack_248;
              fStack_244 = (fStack_1c4 * fStack_1c4 + fStack_1bc * fStack_1bc) * -2.0 + 1.0;
              fStack_240 = fStack_1c0 * fStack_1bc + fStack_1c4 * fStack_1b8;
              fStack_240 = fStack_240 + fStack_240;
              fStack_238 = fStack_1c4 * fStack_1bc + fStack_1c0 * fStack_1b8;
              fStack_238 = fStack_238 + fStack_238;
              fStack_234 = fStack_1c0 * fStack_1bc - fStack_1c4 * fStack_1b8;
              fStack_234 = fStack_234 + fStack_234;
              fStack_230 = (fStack_1c4 * fStack_1c4 + fStack_1c0 * fStack_1c0) * -2.0 + 1.0;
              uStack_250 = (ulong)(uint)(fVar54 + fVar54);
              uStack_23c = 0;
              uStack_224 = 0;
              uStack_22c = 0;
              uStack_21c = 0x3f800000;
              func_0x000109519fd0(&fStack_128,&fStack_168,&fStack_258);
              func_0x000109519fd0(&uStack_e8,&fStack_128,&uStack_2b8);
              uVar21 = (lStack_190 - lStack_198 >> 4) * -0x5555555555555555;
              if (uVar21 < uVar13 || uVar21 - uVar13 == 0) goto LAB_10a987068;
              puVar19 = (undefined8 *)(lStack_198 + lVar10);
              *puVar19 = CONCAT44(uStack_e4,uStack_e8);
              *(undefined4 *)(puVar19 + 1) = uStack_e0;
              *(ulong *)((long)puVar19 + 0xc) = CONCAT44(uStack_d4,uStack_d8);
              *(undefined4 *)((long)puVar19 + 0x14) = (undefined4)uStack_d0;
              puVar19[3] = uStack_c8;
              *(undefined4 *)(puVar19 + 4) = (undefined4)uStack_c0;
              *(undefined8 *)((long)puVar19 + 0x24) = uStack_b8;
              *(float *)((long)puVar19 + 0x2c) = fStack_b0;
              uVar13 = uVar13 + 1;
              lVar14 = lVar14 + 0x68;
              lVar10 = lVar10 + 0x30;
            } while (uVar13 < (ulong)(*(long *)(param_2 + 0x240) - *(long *)(param_2 + 0x238) >> 3))
            ;
          }
          if (*(long *)(param_2 + 0x10) != 0) {
            lVar14 = 0;
            uVar13 = 0;
            do {
              uVar21 = (*(long *)(param_2 + 0x128) - *(long *)(param_2 + 0x120) >> 2) *
                       -0x5555555555555555;
              if ((uVar21 < uVar13 || uVar21 - uVar13 == 0) ||
                 (uVar21 = (*(long *)(param_2 + 0xf8) - *(long *)(param_2 + 0xf0) >> 2) *
                           -0x5555555555555555, uVar21 < uVar13 || uVar21 - uVar13 == 0))
              goto LAB_10a987068;
              puVar19 = (undefined8 *)(*(long *)(param_2 + 0x120) + lVar14);
              fVar54 = *(float *)(puVar19 + 1);
              puVar25 = (undefined8 *)(*(long *)(param_2 + 0xf0) + lVar14);
              uVar22 = *puVar19;
              *puVar25 = CONCAT44((float)((ulong)uVar22 >> 0x20) * fVar38 +
                                  (float)((ulong)*puVar25 >> 0x20),
                                  (float)uVar22 * fVar38 + (float)*puVar25);
              *(float *)(puVar25 + 1) = fVar38 * fVar54 + *(float *)(puVar25 + 1);
              uVar13 = uVar13 + 1;
              lVar14 = lVar14 + 0xc;
            } while (uVar13 < *(ulong *)(param_2 + 0x10));
          }
          lVar14 = *(long *)(param_2 + 0x180);
          lVar10 = *(long *)(param_2 + 0x188);
          uVar13 = NEON_fmov(0x3f800000,4);
          fVar54 = (float)(uVar13 >> 0x20);
          if (lVar10 != lVar14) {
            uVar21 = 0;
            do {
              plVar15 = (long *)(lVar14 + uVar21 * 0x18);
              lVar11 = *plVar15;
              if (plVar15[1] != lVar11) {
                uVar23 = 0;
                do {
                  uVar20 = (ulong)*(int *)(lVar11 + uVar23 * 4);
                  if ((ulong)(*(long *)(param_2 + 0x158) - *(long *)(param_2 + 0x150) >> 3) <=
                      uVar20) goto LAB_10a987068;
                  piVar1 = (int *)(*(long *)(param_2 + 0x150) + uVar20 * 8);
                  uVar18 = (ulong)piVar1[1];
                  lVar14 = *(long *)(param_2 + 0xf0);
                  uVar24 = (*(long *)(param_2 + 0xf8) - lVar14 >> 2) * -0x5555555555555555;
                  if (uVar24 < uVar18 || uVar24 - uVar18 == 0) goto LAB_10a987068;
                  uVar8 = (ulong)*piVar1;
                  if (uVar24 < uVar8 || uVar24 - uVar8 == 0) goto LAB_10a987068;
                  puVar25 = (undefined8 *)(lVar14 + (long)piVar1[1] * 0xc);
                  puVar19 = (undefined8 *)(lVar14 + (long)*piVar1 * 0xc);
                  uVar22 = *puVar25;
                  fVar39 = (float)*puVar19;
                  fVar35 = (float)uVar22 - fVar39;
                  fVar31 = (float)((ulong)*puVar19 >> 0x20);
                  fVar37 = (float)((ulong)uVar22 >> 0x20) - fVar31;
                  fVar44 = *(float *)(puVar25 + 1) - *(float *)(puVar19 + 1);
                  fVar32 = SQRT(fVar35 * fVar35 + fVar37 * fVar37 + fVar44 * fVar44);
                  if (1e-06 < fVar32) {
                    lVar14 = *(long *)(param_2 + 0xc0);
                    uVar24 = *(long *)(param_2 + 200) - lVar14 >> 5;
                    if ((uVar24 <= uVar8) || (uVar24 <= uVar18)) goto LAB_10a987068;
                    lVar10 = *(long *)(param_2 + 0x78);
                    uVar24 = *(long *)(param_2 + 0x80) - lVar10;
                    if (uVar24 <= uVar8) goto LAB_10a987068;
                    pfVar16 = (float *)(lVar14 + uVar8 * 0x20);
                    if (*(char *)(lVar10 + uVar8) == '\0') {
                      fVar33 = 0.0;
                    }
                    else {
                      fVar36 = *pfVar16 * *(float *)(*(long *)(param_2 + 0x228) + 0x30) +
                               pfVar16[1] * fVar47;
                      fVar33 = fVar56;
                      if (1e-06 <= fVar36) {
                        fVar33 = fVar36;
                      }
                      fVar33 = 1.0 / fVar33;
                    }
                    if (uVar24 <= uVar18) goto LAB_10a987068;
                    pfVar2 = (float *)(lVar14 + uVar18 * 0x20);
                    if (*(char *)(lVar10 + uVar18) == '\0') {
                      fVar36 = 0.0;
                    }
                    else {
                      fVar40 = *pfVar2 * *(float *)(*(long *)(param_2 + 0x228) + 0x30) +
                               pfVar2[1] * fVar47;
                      fVar36 = fVar56;
                      if (1e-06 <= fVar40) {
                        fVar36 = fVar40;
                      }
                      fVar36 = 1.0 / fVar36;
                    }
                    if ((ulong)(*(long *)(param_2 + 0x170) - *(long *)(param_2 + 0x168) >> 2) <=
                        uVar20) goto LAB_10a987068;
                    fVar40 = *(float *)(*(long *)(param_2 + 0x228) + 0x38);
                    fVar57 = (float)*(undefined8 *)(pfVar16 + 2) * fVar40 +
                             (float)((ulong)*(undefined8 *)(pfVar16 + 2) >> 0x20) * fVar30;
                    fVar60 = (float)*(undefined8 *)(pfVar2 + 2) * fVar40 +
                             (float)((ulong)*(undefined8 *)(pfVar2 + 2) >> 0x20) * fVar30;
                    iVar61 = -(uint)(fVar57 < 0.0);
                    iVar64 = -(uint)(fVar60 < 0.0);
                    fVar40 = (float)CONCAT13((byte)((uint)fVar57 >> 0x18) &
                                             ~(byte)((uint)iVar61 >> 0x18),
                                             CONCAT12((byte)((uint)fVar57 >> 0x10) &
                                                      ~(byte)((uint)iVar61 >> 0x10),
                                                      CONCAT11((byte)((uint)fVar57 >> 8) &
                                                               ~(byte)((uint)iVar61 >> 8),
                                                               SUB41(fVar57,0) & ~(byte)iVar61)));
                    uVar59 = CONCAT17((byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                                      CONCAT16((byte)((uint)fVar60 >> 0x10) &
                                               ~(byte)((uint)iVar64 >> 0x10),
                                               CONCAT15((byte)((uint)fVar60 >> 8) &
                                                        ~(byte)((uint)iVar64 >> 8),
                                                        CONCAT14(SUB41(fVar60,0) & ~(byte)iVar64,
                                                                 fVar40))));
                    uVar59 = uVar59 ^ (uVar59 ^ uVar13) &
                                      CONCAT44(-(uint)(fVar54 < (float)(uVar59 >> 0x20)),
                                               -(uint)((float)uVar13 < fVar40));
                    fVar32 = ((fVar32 - *(float *)(*(long *)(param_2 + 0x168) + uVar20 * 4)) *
                             ((float)uVar59 + (float)(uVar59 >> 0x20)) * 0.5) /
                             (fVar32 * (fVar33 + fVar36));
                    if (*(char *)(lVar10 + uVar8) != '\0') {
                      *puVar19 = CONCAT44(fVar31 + fVar37 * fVar32 * fVar33,
                                          fVar39 + fVar35 * fVar32 * fVar33);
                      *(float *)(puVar19 + 1) = *(float *)(puVar19 + 1) + fVar33 * fVar44 * fVar32;
                      uVar18 = (ulong)piVar1[1];
                      lVar10 = *(long *)(param_2 + 0x78);
                      uVar24 = *(long *)(param_2 + 0x80) - lVar10;
                    }
                    if (uVar24 <= uVar18) goto LAB_10a987068;
                    if (*(char *)(lVar10 + uVar18) != '\0') {
                      uVar20 = (*(long *)(param_2 + 0xf8) - *(long *)(param_2 + 0xf0) >> 2) *
                               -0x5555555555555555;
                      if (uVar20 < uVar18 || uVar20 - uVar18 == 0) goto LAB_10a987068;
                      puVar19 = (undefined8 *)(*(long *)(param_2 + 0xf0) + (long)(int)uVar18 * 0xc);
                      *puVar19 = CONCAT44((float)((ulong)*puVar19 >> 0x20) -
                                          fVar37 * fVar32 * fVar36,
                                          (float)*puVar19 - fVar35 * fVar32 * fVar36);
                      *(float *)(puVar19 + 1) = *(float *)(puVar19 + 1) - fVar36 * fVar44 * fVar32;
                    }
                  }
                  uVar23 = uVar23 + 1;
                  lVar11 = *plVar15;
                } while (uVar23 < (ulong)(plVar15[1] - lVar11 >> 2));
                lVar14 = *(long *)(param_2 + 0x180);
                lVar10 = *(long *)(param_2 + 0x188);
              }
              uVar21 = uVar21 + 1;
            } while (uVar21 < (ulong)((lVar10 - lVar14 >> 3) * -0x5555555555555555));
          }
          if (**(char **)(param_2 + 0x228) == '\0') {
            lVar14 = *(long *)(param_2 + 0x1f8);
            lVar10 = *(long *)(param_2 + 0x200);
            if (lVar10 != lVar14) {
              uVar13 = 0;
              do {
                plVar15 = (long *)(lVar14 + uVar13 * 0x18);
                lVar11 = *plVar15;
                if (plVar15[1] != lVar11) {
                  uVar21 = 0;
                  do {
                    uVar23 = (ulong)*(int *)(lVar11 + uVar21 * 4);
                    if (((ulong)(*(long *)(param_2 + 0x1a0) - *(long *)(param_2 + 0x198) >> 4) <=
                         uVar23) ||
                       ((ulong)(*(long *)(param_2 + 0x1d0) - *(long *)(param_2 + 0x1c8) >> 6) <=
                        uVar23)) goto LAB_10a987068;
                    piVar1 = (int *)(*(long *)(param_2 + 0x198) + uVar23 * 0x10);
                    uVar20 = (ulong)*piVar1;
                    lVar14 = *(long *)(param_2 + 0xf0);
                    uVar18 = (*(long *)(param_2 + 0xf8) - lVar14 >> 2) * -0x5555555555555555;
                    if (uVar18 < uVar20 || uVar18 - uVar20 == 0) goto LAB_10a987068;
                    uVar24 = (ulong)piVar1[1];
                    if (uVar18 < uVar24 || uVar18 - uVar24 == 0) goto LAB_10a987068;
                    uVar8 = (ulong)piVar1[2];
                    if (uVar18 < uVar8 || uVar18 - uVar8 == 0) goto LAB_10a987068;
                    uVar59 = (ulong)piVar1[3];
                    if (uVar18 < uVar59 || uVar18 - uVar59 == 0) goto LAB_10a987068;
                    pfVar16 = (float *)(*(long *)(param_2 + 0x1c8) + uVar23 * 0x40);
                    puVar25 = (undefined8 *)(lVar14 + (long)*piVar1 * 0xc);
                    puVar12 = (undefined8 *)(lVar14 + (long)piVar1[1] * 0xc);
                    puVar26 = (undefined8 *)(lVar14 + (long)piVar1[2] * 0xc);
                    puVar19 = (undefined8 *)(lVar14 + (long)piVar1[3] * 0xc);
                    fVar54 = *(float *)(puVar25 + 1);
                    fVar39 = *pfVar16;
                    fVar74 = pfVar16[1];
                    fVar62 = *(float *)(puVar12 + 1);
                    fVar44 = pfVar16[5];
                    fVar73 = pfVar16[6];
                    fVar65 = *(float *)(puVar26 + 1);
                    fVar70 = pfVar16[10];
                    fVar67 = pfVar16[0xb];
                    fVar69 = *(float *)(puVar19 + 1);
                    fVar50 = pfVar16[2];
                    fVar82 = pfVar16[3];
                    fVar72 = pfVar16[7];
                    uVar80 = *puVar12;
                    uVar22 = *puVar26;
                    uVar46 = *puVar19;
                    fVar36 = (float)*puVar25;
                    fVar40 = (float)((ulong)*puVar25 >> 0x20);
                    fVar79 = (float)uVar80;
                    fVar81 = (float)((ulong)uVar80 >> 0x20);
                    fVar75 = (float)uVar22;
                    fVar76 = (float)((ulong)uVar22 >> 0x20);
                    fVar77 = (float)uVar46;
                    fVar78 = (float)((ulong)uVar46 >> 0x20);
                    fVar60 = fVar36 * fVar39 + fVar79 * fVar74 + fVar75 * fVar50 + fVar77 * fVar82;
                    fVar48 = fVar40 * fVar39 + fVar81 * fVar74 + fVar76 * fVar50 + fVar78 * fVar82;
                    fVar32 = fVar79 * fVar44 + fVar36 * fVar74 + fVar75 * fVar73 + fVar77 * fVar72;
                    fVar33 = fVar81 * fVar44 + fVar40 * fVar74 + fVar76 * fVar73 + fVar78 * fVar72;
                    fVar31 = fVar75 * fVar70 + fVar36 * fVar50 + fVar79 * fVar73 + fVar77 * fVar67;
                    fVar35 = fVar76 * fVar70 + fVar40 * fVar50 + fVar81 * fVar73 + fVar78 * fVar67;
                    fVar71 = fVar39 * fVar54 + fVar62 * fVar74 + fVar65 * fVar50 + fVar69 * fVar82;
                    fVar58 = fVar44 * fVar62 + fVar54 * fVar74 + fVar65 * fVar73 + fVar69 * fVar72;
                    fVar57 = fVar70 * fVar65 + fVar54 * fVar50 + fVar62 * fVar73 + fVar69 * fVar67;
                    fVar49 = pfVar16[0xf];
                    fVar51 = fVar77 * fVar49 + fVar36 * fVar82 + fVar79 * fVar72 + fVar75 * fVar67;
                    fVar53 = fVar78 * fVar49 + fVar40 * fVar82 + fVar81 * fVar72 + fVar76 * fVar67;
                    fVar37 = fVar49 * fVar69 + fVar54 * fVar82 + fVar62 * fVar72 + fVar65 * fVar67;
                    fVar52 = fVar71 * fVar71 + fVar60 * fVar60 + fVar48 * fVar48 +
                             fVar58 * fVar58 + fVar32 * fVar32 + fVar33 * fVar33 +
                             fVar57 * fVar57 + fVar31 * fVar31 + fVar35 * fVar35 +
                             fVar37 * fVar37 + fVar51 * fVar51 + fVar53 * fVar53;
                    if (1e-06 < fVar52) {
                      lVar14 = *(long *)(param_2 + 0xc0);
                      uVar23 = *(long *)(param_2 + 200) - lVar14 >> 5;
                      if ((((uVar23 <= uVar20) || (uVar23 <= uVar24)) || (uVar23 <= uVar8)) ||
                         (uVar23 <= uVar59)) goto LAB_10a987068;
                      lVar10 = *(long *)(param_2 + 0x78);
                      uVar23 = *(long *)(param_2 + 0x80) - lVar10;
                      if (uVar23 <= uVar20) goto LAB_10a987068;
                      pfVar16 = (float *)(lVar14 + uVar20 * 0x20);
                      if (*(char *)(lVar10 + uVar20) == '\0') {
                        fVar55 = 0.0;
                      }
                      else {
                        fVar41 = *pfVar16 * *(float *)(*(long *)(param_2 + 0x228) + 0x30) +
                                 pfVar16[1] * fVar47;
                        fVar55 = fVar56;
                        if (1e-06 <= fVar41) {
                          fVar55 = fVar41;
                        }
                        fVar55 = 1.0 / fVar55;
                      }
                      if (uVar23 <= uVar24) goto LAB_10a987068;
                      pfVar2 = (float *)(lVar14 + uVar24 * 0x20);
                      if (*(char *)(lVar10 + uVar24) == '\0') {
                        fVar41 = 0.0;
                      }
                      else {
                        fVar42 = *pfVar2 * *(float *)(*(long *)(param_2 + 0x228) + 0x30) +
                                 pfVar2[1] * fVar47;
                        fVar41 = fVar56;
                        if (1e-06 <= fVar42) {
                          fVar41 = fVar42;
                        }
                        fVar41 = 1.0 / fVar41;
                      }
                      if (uVar23 <= uVar8) goto LAB_10a987068;
                      pfVar3 = (float *)(lVar14 + uVar8 * 0x20);
                      if (*(char *)(lVar10 + uVar8) == '\0') {
                        fVar42 = 0.0;
                      }
                      else {
                        fVar43 = *pfVar3 * *(float *)(*(long *)(param_2 + 0x228) + 0x30) +
                                 pfVar3[1] * fVar47;
                        fVar42 = fVar56;
                        if (1e-06 <= fVar43) {
                          fVar42 = fVar43;
                        }
                        fVar42 = 1.0 / fVar42;
                      }
                      if (uVar23 <= uVar59) goto LAB_10a987068;
                      pfVar4 = (float *)(lVar14 + uVar59 * 0x20);
                      if (*(char *)(lVar10 + uVar59) == '\0') {
                        fStack_360 = 0.0;
                      }
                      else {
                        fVar43 = *pfVar4 * *(float *)(*(long *)(param_2 + 0x228) + 0x30) +
                                 pfVar4[1] * fVar47;
                        fStack_360 = fVar56;
                        if (1e-06 <= fVar43) {
                          fStack_360 = fVar43;
                        }
                        fStack_360 = 1.0 / fStack_360;
                      }
                      fVar43 = *(float *)(*(long *)(param_2 + 0x228) + 0x40);
                      fVar45 = pfVar16[4] * fVar43 + pfVar16[5] * fVar34;
                      fVar63 = fVar43 * pfVar2[4] + pfVar2[5] * fVar34;
                      fVar68 = fVar43 * pfVar3[4] + pfVar3[5] * fVar34;
                      fVar66 = fVar43 * pfVar4[4] + pfVar4[5] * fVar34;
                      fVar43 = 0.0;
                      if (0.0 <= fVar45) {
                        fVar43 = fVar45;
                      }
                      fVar45 = 1.0;
                      if (fVar43 <= 1.0) {
                        fVar45 = fVar43;
                      }
                      fVar43 = 0.0;
                      if (0.0 <= fVar63) {
                        fVar43 = fVar63;
                      }
                      fVar63 = 1.0;
                      if (fVar43 <= 1.0) {
                        fVar63 = fVar43;
                      }
                      fVar43 = 0.0;
                      if (0.0 <= fVar68) {
                        fVar43 = fVar68;
                      }
                      fVar68 = 1.0;
                      if (fVar43 <= 1.0) {
                        fVar68 = fVar43;
                      }
                      fVar43 = 0.0;
                      if (0.0 <= fVar66) {
                        fVar43 = fVar66;
                      }
                      fVar66 = 1.0;
                      if (fVar43 <= 1.0) {
                        fVar66 = fVar43;
                      }
                      fVar39 = ((fVar36 * fVar36 * fVar39 + fVar40 * fVar40 * fVar39 +
                                 fVar54 * fVar39 * fVar54 +
                                 fVar79 * fVar79 * fVar44 + fVar81 * fVar81 * fVar44 +
                                 fVar62 * fVar44 * fVar62 +
                                 fVar75 * fVar75 * fVar70 + fVar76 * fVar76 * fVar70 +
                                 fVar65 * fVar70 * fVar65 +
                                 fVar77 * fVar77 * fVar49 + fVar78 * fVar78 * fVar49 +
                                 fVar69 * fVar49 * fVar69 +
                                ((fVar36 * fVar75 + fVar40 * fVar76 + fVar54 * fVar65) * fVar50 +
                                 (fVar36 * fVar79 + fVar40 * fVar81 + fVar54 * fVar62) * fVar74 +
                                 (fVar36 * fVar77 + fVar40 * fVar78 + fVar54 * fVar69) * fVar82 +
                                 (fVar79 * fVar75 + fVar81 * fVar76 + fVar62 * fVar65) * fVar73 +
                                 (fVar79 * fVar77 + fVar81 * fVar78 + fVar62 * fVar69) * fVar72 +
                                (fVar75 * fVar77 + fVar76 * fVar78 + fVar65 * fVar69) * fVar67) *
                                2.0) * (fVar45 + fVar63 + fVar68 + fVar66) * 0.25 * -4.0) /
                               (fVar52 * (fVar55 + fVar41 + fVar42 + fStack_360));
                      if (*(char *)(lVar10 + uVar20) != '\0') {
                        fVar55 = fVar55 * fVar39;
                        *puVar25 = CONCAT44(fVar40 + fVar48 * fVar55,fVar36 + fVar60 * fVar55);
                        *(float *)(puVar25 + 1) = fVar54 + fVar71 * fVar55;
                        lVar10 = *(long *)(param_2 + 0x78);
                        uVar23 = *(long *)(param_2 + 0x80) - lVar10;
                      }
                      uVar20 = (ulong)piVar1[1];
                      if (uVar23 <= uVar20) goto LAB_10a987068;
                      if (*(char *)(lVar10 + uVar20) != '\0') {
                        uVar23 = (*(long *)(param_2 + 0xf8) - *(long *)(param_2 + 0xf0) >> 2) *
                                 -0x5555555555555555;
                        if (uVar23 < uVar20 || uVar23 - uVar20 == 0) goto LAB_10a987068;
                        fVar41 = fVar41 * fVar39;
                        puVar19 = (undefined8 *)(*(long *)(param_2 + 0xf0) + (long)piVar1[1] * 0xc);
                        *puVar19 = CONCAT44(fVar33 * fVar41 + (float)((ulong)*puVar19 >> 0x20),
                                            fVar32 * fVar41 + (float)*puVar19);
                        *(float *)(puVar19 + 1) = fVar58 * fVar41 + *(float *)(puVar19 + 1);
                        lVar10 = *(long *)(param_2 + 0x78);
                        uVar23 = *(long *)(param_2 + 0x80) - lVar10;
                      }
                      uVar20 = (ulong)piVar1[2];
                      if (uVar23 <= uVar20) goto LAB_10a987068;
                      if (*(char *)(lVar10 + uVar20) != '\0') {
                        uVar23 = (*(long *)(param_2 + 0xf8) - *(long *)(param_2 + 0xf0) >> 2) *
                                 -0x5555555555555555;
                        if (uVar23 < uVar20 || uVar23 - uVar20 == 0) goto LAB_10a987068;
                        fVar42 = fVar42 * fVar39;
                        puVar19 = (undefined8 *)(*(long *)(param_2 + 0xf0) + (long)piVar1[2] * 0xc);
                        *puVar19 = CONCAT44(fVar35 * fVar42 + (float)((ulong)*puVar19 >> 0x20),
                                            fVar31 * fVar42 + (float)*puVar19);
                        *(float *)(puVar19 + 1) = fVar57 * fVar42 + *(float *)(puVar19 + 1);
                        lVar10 = *(long *)(param_2 + 0x78);
                        uVar23 = *(long *)(param_2 + 0x80) - lVar10;
                      }
                      uVar20 = (ulong)piVar1[3];
                      if (uVar23 <= uVar20) goto LAB_10a987068;
                      if (*(char *)(lVar10 + uVar20) != '\0') {
                        uVar23 = (*(long *)(param_2 + 0xf8) - *(long *)(param_2 + 0xf0) >> 2) *
                                 -0x5555555555555555;
                        if (uVar23 < uVar20 || uVar23 - uVar20 == 0) goto LAB_10a987068;
                        fStack_360 = fStack_360 * fVar39;
                        puVar19 = (undefined8 *)(*(long *)(param_2 + 0xf0) + (long)piVar1[3] * 0xc);
                        *puVar19 = CONCAT44(fVar53 * fStack_360 + (float)((ulong)*puVar19 >> 0x20),
                                            fVar51 * fStack_360 + (float)*puVar19);
                        *(float *)(puVar19 + 1) = fVar37 * fStack_360 + *(float *)(puVar19 + 1);
                      }
                    }
                    uVar21 = uVar21 + 1;
                    lVar11 = *plVar15;
                  } while (uVar21 < (ulong)(plVar15[1] - lVar11 >> 2));
                  lVar14 = *(long *)(param_2 + 0x1f8);
                  lVar10 = *(long *)(param_2 + 0x200);
                }
                uVar13 = uVar13 + 1;
              } while (uVar13 < (ulong)((lVar10 - lVar14 >> 3) * -0x5555555555555555));
            }
          }
          else if (**(char **)(param_2 + 0x228) == '\x01') {
            lVar14 = *(long *)(param_2 + 0x218);
            lVar10 = *(long *)(param_2 + 0x210);
            if (lVar14 != lVar10) {
              uVar21 = 0;
              do {
                plVar15 = (long *)(lVar10 + uVar21 * 0x18);
                lVar11 = *plVar15;
                if (plVar15[1] != lVar11) {
                  uVar23 = 0;
                  do {
                    uVar20 = (ulong)*(int *)(lVar11 + uVar23 * 4);
                    if ((ulong)(*(long *)(param_2 + 0x1b8) - *(long *)(param_2 + 0x1b0) >> 3) <=
                        uVar20) goto LAB_10a987068;
                    piVar1 = (int *)(*(long *)(param_2 + 0x1b0) + uVar20 * 8);
                    uVar18 = (ulong)piVar1[1];
                    lVar14 = *(long *)(param_2 + 0xf0);
                    uVar24 = (*(long *)(param_2 + 0xf8) - lVar14 >> 2) * -0x5555555555555555;
                    if (uVar24 < uVar18 || uVar24 - uVar18 == 0) goto LAB_10a987068;
                    uVar8 = (ulong)*piVar1;
                    if (uVar24 < uVar8 || uVar24 - uVar8 == 0) goto LAB_10a987068;
                    puVar25 = (undefined8 *)(lVar14 + (long)piVar1[1] * 0xc);
                    puVar19 = (undefined8 *)(lVar14 + (long)*piVar1 * 0xc);
                    uVar22 = *puVar25;
                    fVar39 = (float)*puVar19;
                    fVar35 = (float)uVar22 - fVar39;
                    fVar31 = (float)((ulong)*puVar19 >> 0x20);
                    fVar37 = (float)((ulong)uVar22 >> 0x20) - fVar31;
                    fVar44 = *(float *)(puVar25 + 1) - *(float *)(puVar19 + 1);
                    fVar32 = SQRT(fVar35 * fVar35 + fVar37 * fVar37 + fVar44 * fVar44);
                    if (1e-06 < fVar32) {
                      lVar14 = *(long *)(param_2 + 0xc0);
                      uVar24 = *(long *)(param_2 + 200) - lVar14 >> 5;
                      if ((uVar24 <= uVar8) || (uVar24 <= uVar18)) goto LAB_10a987068;
                      lVar10 = *(long *)(param_2 + 0x78);
                      uVar24 = *(long *)(param_2 + 0x80) - lVar10;
                      if (uVar24 <= uVar8) goto LAB_10a987068;
                      pfVar16 = (float *)(lVar14 + uVar8 * 0x20);
                      if (*(char *)(lVar10 + uVar8) == '\0') {
                        fVar33 = 0.0;
                      }
                      else {
                        fVar36 = *pfVar16 * *(float *)(*(long *)(param_2 + 0x228) + 0x30) +
                                 pfVar16[1] * fVar47;
                        fVar33 = fVar56;
                        if (1e-06 <= fVar36) {
                          fVar33 = fVar36;
                        }
                        fVar33 = 1.0 / fVar33;
                      }
                      if (uVar24 <= uVar18) goto LAB_10a987068;
                      pfVar2 = (float *)(lVar14 + uVar18 * 0x20);
                      if (*(char *)(lVar10 + uVar18) == '\0') {
                        fVar36 = 0.0;
                      }
                      else {
                        fVar40 = *pfVar2 * *(float *)(*(long *)(param_2 + 0x228) + 0x30) +
                                 pfVar2[1] * fVar47;
                        fVar36 = fVar56;
                        if (1e-06 <= fVar40) {
                          fVar36 = fVar40;
                        }
                        fVar36 = 1.0 / fVar36;
                      }
                      if ((ulong)(*(long *)(param_2 + 0x1e8) - *(long *)(param_2 + 0x1e0) >> 2) <=
                          uVar20) goto LAB_10a987068;
                      fVar40 = *(float *)(*(long *)(param_2 + 0x228) + 0x40);
                      fVar57 = (float)*(undefined8 *)(pfVar16 + 4) * fVar40 +
                               (float)((ulong)*(undefined8 *)(pfVar16 + 4) >> 0x20) * fVar34;
                      fVar60 = (float)*(undefined8 *)(pfVar2 + 4) * fVar40 +
                               (float)((ulong)*(undefined8 *)(pfVar2 + 4) >> 0x20) * fVar34;
                      iVar61 = -(uint)(fVar57 < 0.0);
                      iVar64 = -(uint)(fVar60 < 0.0);
                      fVar40 = (float)CONCAT13((byte)((uint)fVar57 >> 0x18) &
                                               ~(byte)((uint)iVar61 >> 0x18),
                                               CONCAT12((byte)((uint)fVar57 >> 0x10) &
                                                        ~(byte)((uint)iVar61 >> 0x10),
                                                        CONCAT11((byte)((uint)fVar57 >> 8) &
                                                                 ~(byte)((uint)iVar61 >> 8),
                                                                 SUB41(fVar57,0) & ~(byte)iVar61)));
                      uVar59 = CONCAT17((byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18)
                                        ,CONCAT16((byte)((uint)fVar60 >> 0x10) &
                                                  ~(byte)((uint)iVar64 >> 0x10),
                                                  CONCAT15((byte)((uint)fVar60 >> 8) &
                                                           ~(byte)((uint)iVar64 >> 8),
                                                           CONCAT14(SUB41(fVar60,0) & ~(byte)iVar64,
                                                                    fVar40))));
                      uVar59 = uVar59 ^ (uVar59 ^ uVar13) &
                                        CONCAT44(-(uint)(fVar54 < (float)(uVar59 >> 0x20)),
                                                 -(uint)((float)uVar13 < fVar40));
                      fVar32 = ((fVar32 - *(float *)(*(long *)(param_2 + 0x1e0) + uVar20 * 4)) *
                               ((float)uVar59 + (float)(uVar59 >> 0x20)) * 0.5) /
                               (fVar32 * (fVar33 + fVar36));
                      if (*(char *)(lVar10 + uVar8) != '\0') {
                        *puVar19 = CONCAT44(fVar31 + fVar37 * fVar32 * fVar33,
                                            fVar39 + fVar35 * fVar32 * fVar33);
                        *(float *)(puVar19 + 1) = *(float *)(puVar19 + 1) + fVar33 * fVar44 * fVar32
                        ;
                        uVar18 = (ulong)piVar1[1];
                        lVar10 = *(long *)(param_2 + 0x78);
                        uVar24 = *(long *)(param_2 + 0x80) - lVar10;
                      }
                      if (uVar24 <= uVar18) goto LAB_10a987068;
                      if (*(char *)(lVar10 + uVar18) != '\0') {
                        uVar20 = (*(long *)(param_2 + 0xf8) - *(long *)(param_2 + 0xf0) >> 2) *
                                 -0x5555555555555555;
                        if (uVar20 < uVar18 || uVar20 - uVar18 == 0) goto LAB_10a987068;
                        puVar19 = (undefined8 *)
                                  (*(long *)(param_2 + 0xf0) + (long)(int)uVar18 * 0xc);
                        *puVar19 = CONCAT44((float)((ulong)*puVar19 >> 0x20) -
                                            fVar37 * fVar32 * fVar36,
                                            (float)*puVar19 - fVar35 * fVar32 * fVar36);
                        *(float *)(puVar19 + 1) = *(float *)(puVar19 + 1) - fVar36 * fVar44 * fVar32
                        ;
                      }
                    }
                    uVar23 = uVar23 + 1;
                    lVar11 = *plVar15;
                  } while (uVar23 < (ulong)(plVar15[1] - lVar11 >> 2));
                  lVar14 = *(long *)(param_2 + 0x218);
                  lVar10 = *(long *)(param_2 + 0x210);
                }
                uVar21 = uVar21 + 1;
              } while (uVar21 < (ulong)((lVar14 - lVar10 >> 3) * -0x5555555555555555));
            }
          }
          lVar14 = *(long *)(param_2 + 0x228);
          if (*(char *)(lVar14 + 0x18) == '\x01') {
            lVar11 = *(long *)(param_2 + 0x238);
            lVar10 = *(long *)(param_2 + 0x240);
            if ((lVar11 != lVar10) && (uVar13 = *(ulong *)(param_2 + 0x10), uVar13 != 0)) {
              uVar21 = 0;
              do {
                if ((ulong)(*(long *)(param_2 + 0x80) - *(long *)(param_2 + 0x78)) <= uVar21)
                goto LAB_10a987068;
                if ((*(char *)(*(long *)(param_2 + 0x78) + uVar21) != '\0') &&
                   (bVar7 = lVar10 != lVar11, lVar10 = lVar11, bVar7)) {
                  lVar14 = 0;
                  uVar13 = 0;
                  do {
                    uVar23 = (lStack_178 - lStack_180 >> 4) * -0x5555555555555555;
                    if ((uVar23 < uVar13 || uVar23 - uVar13 == 0) ||
                       (uVar23 = (*(long *)(param_2 + 0xf8) - *(long *)(param_2 + 0xf0) >> 2) *
                                 -0x5555555555555555, uVar23 < uVar21 || uVar23 - uVar21 == 0))
                    goto LAB_10a987068;
                    puVar19 = (undefined8 *)(lStack_180 + lVar14);
                    pfVar16 = (float *)(*(long *)(param_2 + 0xf0) + uVar21 * 0xc);
                    fVar54 = *pfVar16;
                    fVar39 = pfVar16[1];
                    fVar31 = pfVar16[2];
                    ppuStack_2c0 = (undefined **)
                                   CONCAT44((float)((ulong)*(undefined8 *)((long)puVar19 + 0x24) >>
                                                   0x20) +
                                            (float)((ulong)*(undefined8 *)((long)puVar19 + 0xc) >>
                                                   0x20) * fVar39 +
                                            (float)((ulong)*puVar19 >> 0x20) * fVar54 +
                                            (float)((ulong)puVar19[3] >> 0x20) * fVar31,
                                            (float)*(undefined8 *)((long)puVar19 + 0x24) +
                                            (float)*(undefined8 *)((long)puVar19 + 0xc) * fVar39 +
                                            (float)*puVar19 * fVar54 + (float)puVar19[3] * fVar31);
                    plVar15 = *(long **)(lVar11 + uVar13 * 8);
                    uStack_2b8 = CONCAT44(*(undefined4 *)(*(long *)(param_2 + 0x228) + 0x1c),
                                          *(float *)((long)puVar19 + 0x2c) +
                                          fVar39 * *(float *)((long)puVar19 + 0x14) +
                                          fVar54 * *(float *)(puVar19 + 1) +
                                          fVar31 * *(float *)(puVar19 + 4));
                    (**(code **)(*plVar15 + 0x18))(&uStack_218,plVar15,&ppuStack_2c0);
                    if ((char)uStack_218 == '\x01') {
                      uVar23 = (lStack_190 - lStack_198 >> 4) * -0x5555555555555555;
                      if ((uVar23 < uVar13 || uVar23 - uVar13 == 0) ||
                         (uVar23 = (*(long *)(param_2 + 0xf8) - *(long *)(param_2 + 0xf0) >> 2) *
                                   -0x5555555555555555, uVar23 < uVar21 || uVar23 - uVar21 == 0))
                      goto LAB_10a987068;
                      puVar19 = (undefined8 *)(lStack_198 + lVar14);
                      fVar54 = *(float *)((long)puVar19 + 0x2c);
                      fVar39 = *(float *)(*(long *)(param_2 + 0x228) + 0x20);
                      fVar31 = *(float *)(puVar19 + 4);
                      fVar44 = fStack_208 * uStack_218._4_4_;
                      fVar33 = *(float *)(puVar19 + 1);
                      fVar37 = uStack_218._4_4_ * fStack_210;
                      fVar35 = uStack_218._4_4_ * fStack_20c;
                      fVar32 = *(float *)((long)puVar19 + 0x14);
                      puVar25 = (undefined8 *)(*(long *)(param_2 + 0xf0) + uVar21 * 0xc);
                      *puVar25 = CONCAT44((float)((ulong)*(undefined8 *)((long)puVar19 + 0x24) >>
                                                 0x20) * fVar39 +
                                          (float)((ulong)*(undefined8 *)((long)puVar19 + 0xc) >>
                                                 0x20) * fVar39 * fVar35 +
                                          (float)((ulong)*puVar19 >> 0x20) * fVar39 * fVar37 +
                                          (float)((ulong)puVar19[3] >> 0x20) * fVar39 * fVar44 +
                                          (float)((ulong)*puVar25 >> 0x20),
                                          (float)*(undefined8 *)((long)puVar19 + 0x24) * fVar39 +
                                          (float)*(undefined8 *)((long)puVar19 + 0xc) * fVar39 *
                                          fVar35 + (float)*puVar19 * fVar39 * fVar37 +
                                          (float)puVar19[3] * fVar39 * fVar44 + (float)*puVar25);
                      *(float *)(puVar25 + 1) =
                           fVar54 * fVar39 +
                           fVar35 * fVar39 * fVar32 + fVar37 * fVar39 * fVar33 +
                           fVar44 * fVar39 * fVar31 + *(float *)(puVar25 + 1);
                    }
                    uVar13 = uVar13 + 1;
                    lVar11 = *(long *)(param_2 + 0x238);
                    lVar14 = lVar14 + 0x30;
                  } while (uVar13 < (ulong)(*(long *)(param_2 + 0x240) - lVar11 >> 3));
                  uVar13 = *(ulong *)(param_2 + 0x10);
                  lVar10 = *(long *)(param_2 + 0x240);
                }
                uVar21 = uVar21 + 1;
              } while (uVar21 < uVar13);
              lVar14 = *(long *)(param_2 + 0x228);
            }
          }
          iVar28 = iVar28 + 1;
        } while (iVar28 < *(int *)(lVar14 + 0x10));
      }
      if (lStack_198 != 0) {
        lStack_190 = lStack_198;
        __ZdlPv();
      }
      if (lStack_180 != 0) {
        lStack_178 = lStack_180;
        __ZdlPv();
      }
      lVar14 = *(long *)(param_2 + 0x228);
      uVar5 = *(uint *)(lVar14 + 0x14);
      if ((int)uVar5 < 2) {
        uVar5 = 1;
      }
      uVar13 = *(ulong *)(param_2 + 0x10);
      if (uVar13 != 0) {
        lVar14 = 0;
        uVar21 = 0;
        fVar47 = (float)uVar5;
        do {
          if ((ulong)(*(long *)(param_2 + 0x80) - *(long *)(param_2 + 0x78)) <= uVar21)
          goto LAB_10a987068;
          if (*(char *)(*(long *)(param_2 + 0x78) + uVar21) != '\0') {
            uVar13 = (*(long *)(param_2 + 0xf8) - *(long *)(param_2 + 0xf0) >> 2) *
                     -0x5555555555555555;
            if (((uVar13 < uVar21 || uVar13 - uVar21 == 0) ||
                (uVar13 = (*(long *)(param_2 + 0x110) - *(long *)(param_2 + 0x108) >> 2) *
                          -0x5555555555555555, uVar13 < uVar21 || uVar13 - uVar21 == 0)) ||
               (uVar13 = (*(long *)(param_2 + 0x128) - *(long *)(param_2 + 0x120) >> 2) *
                         -0x5555555555555555, uVar13 < uVar21 || uVar13 - uVar21 == 0))
            goto LAB_10a987068;
            puVar19 = (undefined8 *)(*(long *)(param_2 + 0xf0) + lVar14);
            fVar30 = *(float *)(puVar19 + 1);
            puVar25 = (undefined8 *)(*(long *)(param_2 + 0x108) + lVar14);
            fVar34 = *(float *)(puVar25 + 1);
            puVar12 = (undefined8 *)(*(long *)(param_2 + 0x120) + lVar14);
            uVar22 = *puVar19;
            uVar46 = *puVar25;
            *puVar12 = CONCAT44(((float)((ulong)uVar22 >> 0x20) - (float)((ulong)uVar46 >> 0x20)) *
                                fVar47,((float)uVar22 - (float)uVar46) * fVar47);
            *(float *)(puVar12 + 1) = (fVar30 - fVar34) * fVar47;
            uVar13 = *(ulong *)(param_2 + 0x10);
          }
          uVar21 = uVar21 + 1;
          lVar14 = lVar14 + 0xc;
        } while (uVar21 < uVar13);
        lVar14 = *(long *)(param_2 + 0x228);
      }
      if (*(char *)(lVar14 + 0x18) == '\x01') {
        if (*(long *)(param_2 + 0x238) != *(long *)(param_2 + 0x240)) {
          FUN_10a90dfd0(&fStack_258,*(long *)(param_2 + 0x240) - *(long *)(param_2 + 0x238) >> 3);
          FUN_10a90dfd0(&lStack_180,*(long *)(param_2 + 0x240) - *(long *)(param_2 + 0x238) >> 3);
          FUN_10a90dfd0(&lStack_198,*(long *)(param_2 + 0x240) - *(long *)(param_2 + 0x238) >> 3);
          FUN_10a90dfd0(&lStack_1b0,*(long *)(param_2 + 0x240) - *(long *)(param_2 + 0x238) >> 3);
          lVar14 = *(long *)(param_2 + 0x240);
          lVar10 = *(long *)(param_2 + 0x238);
          if (lVar14 != lVar10) {
            lVar29 = 0;
            lVar11 = 0;
            uVar13 = 0;
            do {
              lVar14 = *(long *)(param_2 + 0x250);
              uVar21 = (*(long *)(param_2 + 600) - lVar14 >> 3) * 0x4ec4ec4ec4ec4ec5;
              if ((uVar21 < uVar13 || uVar21 - uVar13 == 0) ||
                 (uVar21 = (*(long *)(param_2 + 0x270) - *(long *)(param_2 + 0x268) >> 3) *
                           0x4ec4ec4ec4ec4ec5, uVar21 < uVar13 || uVar21 - uVar13 == 0))
              goto LAB_10a987068;
              lVar10 = *(long *)(param_2 + 0x268) + lVar11;
              uStack_dc = 0;
              uStack_d8 = 0;
              uStack_e4 = 0;
              uStack_e0 = 0;
              uStack_e8 = 0x3f800000;
              uStack_d4 = 0x3f800000;
              uStack_d0 = 0;
              uStack_c8 = 0;
              uStack_c0 = 0x3f800000;
              fVar47 = *(float *)(lVar10 + 0x50) * 0.0;
              fVar30 = (float)*(undefined8 *)(lVar10 + 0x48);
              fVar38 = fVar30 * 0.0;
              fVar34 = (float)((ulong)*(undefined8 *)(lVar10 + 0x48) >> 0x20);
              fVar54 = fVar34 * 0.0;
              uVar22 = NEON_rev64(CONCAT44(fVar54,fVar38),4);
              fVar38 = fVar38 + fVar54;
              uStack_b8 = CONCAT44(fVar34 + (float)((ulong)uVar22 >> 0x20) + fVar47 + 0.0,
                                   fVar30 + (float)uVar22 + fVar47 + 0.0);
              fStack_b0 = *(float *)(lVar10 + 0x50) + fVar38 + 0.0;
              fStack_ac = fVar38 + fVar47 + 1.0;
              fVar47 = *(float *)(lVar10 + 0x54);
              fVar34 = *(float *)(lVar10 + 0x58);
              fVar30 = *(float *)(lVar10 + 0x5c);
              fVar31 = *(float *)(lVar10 + 0x60);
              fStack_128 = (fVar34 * fVar34 + fVar30 * fVar30) * -2.0 + 1.0;
              fVar35 = fVar47 * fVar34 + fVar30 * fVar31;
              fVar37 = fVar47 * fVar30 - fVar34 * fVar31;
              fVar54 = fVar47 * fVar34 - fVar30 * fVar31;
              fStack_114 = (fVar47 * fVar47 + fVar30 * fVar30) * -2.0 + 1.0;
              fVar39 = fVar34 * fVar30 + fVar47 * fVar31;
              fVar38 = fVar47 * fVar30 + fVar34 * fVar31;
              fVar30 = fVar34 * fVar30 - fVar47 * fVar31;
              uStack_124 = CONCAT44(fVar37 + fVar37,fVar35 + fVar35);
              lStack_11c = (ulong)(uint)(fVar54 + fVar54) << 0x20;
              fStack_100 = (fVar47 * fVar47 + fVar34 * fVar34) * -2.0 + 1.0;
              uStack_110 = (ulong)(uint)(fVar39 + fVar39);
              uStack_108 = CONCAT44(fVar30 + fVar30,fVar38 + fVar38);
              uStack_f4 = 0;
              uStack_fc = 0;
              uStack_ec = 0x3f800000;
              func_0x000109519fd0(&ppuStack_2c0,&uStack_e8,&fStack_128);
              func_0x000109519fd0(&uStack_218,&ppuStack_2c0,lVar10 + 8);
              uVar21 = ((long)(uStack_250 - CONCAT44(fStack_254,fStack_258)) >> 4) *
                       -0x5555555555555555;
              if (uVar21 < uVar13 || uVar21 - uVar13 == 0) goto LAB_10a987068;
              puVar19 = (undefined8 *)(CONCAT44(fStack_254,fStack_258) + lVar29);
              *puVar19 = uStack_218;
              *(float *)(puVar19 + 1) = fStack_210;
              *(ulong *)((long)puVar19 + 0xc) = CONCAT44(uStack_204,fStack_208);
              *(undefined4 *)((long)puVar19 + 0x14) = uStack_200;
              puVar19[3] = uStack_1f8;
              *(undefined4 *)(puVar19 + 4) = (undefined4)uStack_1f0;
              *(ulong *)((long)puVar19 + 0x24) = CONCAT44(uStack_1e4,uStack_1e8);
              *(undefined4 *)((long)puVar19 + 0x2c) = uStack_1e0;
              lVar14 = lVar14 + lVar11;
              uStack_dc = 0;
              uStack_d8 = 0;
              uStack_e4 = 0;
              uStack_e0 = 0;
              uStack_e8 = 0x3f800000;
              uStack_d4 = 0x3f800000;
              uStack_d0 = 0;
              uStack_c8 = 0;
              uStack_c0 = 0x3f800000;
              fVar47 = *(float *)(lVar14 + 0x50) * 0.0;
              fVar30 = (float)*(undefined8 *)(lVar14 + 0x48);
              fVar38 = fVar30 * 0.0;
              fVar34 = (float)((ulong)*(undefined8 *)(lVar14 + 0x48) >> 0x20);
              fVar54 = fVar34 * 0.0;
              uVar22 = NEON_rev64(CONCAT44(fVar54,fVar38),4);
              fVar38 = fVar38 + fVar54;
              uStack_b8 = CONCAT44(fVar34 + (float)((ulong)uVar22 >> 0x20) + fVar47 + 0.0,
                                   fVar30 + (float)uVar22 + fVar47 + 0.0);
              fStack_b0 = *(float *)(lVar14 + 0x50) + fVar38 + 0.0;
              fStack_ac = fVar38 + fVar47 + 1.0;
              fVar47 = *(float *)(lVar14 + 0x54);
              fVar34 = *(float *)(lVar14 + 0x58);
              fVar30 = *(float *)(lVar14 + 0x5c);
              fVar39 = *(float *)(lVar14 + 0x60);
              fStack_128 = (fVar34 * fVar34 + fVar30 * fVar30) * -2.0 + 1.0;
              fVar35 = fVar47 * fVar34 + fVar30 * fVar39;
              fVar37 = fVar47 * fVar30 - fVar34 * fVar39;
              fVar54 = fVar47 * fVar34 - fVar30 * fVar39;
              fStack_114 = (fVar47 * fVar47 + fVar30 * fVar30) * -2.0 + 1.0;
              fVar31 = fVar34 * fVar30 + fVar47 * fVar39;
              fVar38 = fVar47 * fVar30 + fVar34 * fVar39;
              fVar30 = fVar34 * fVar30 - fVar47 * fVar39;
              fStack_100 = (fVar47 * fVar47 + fVar34 * fVar34) * -2.0 + 1.0;
              uStack_124 = CONCAT44(fVar37 + fVar37,fVar35 + fVar35);
              lStack_11c = (ulong)(uint)(fVar54 + fVar54) << 0x20;
              uStack_110 = (ulong)(uint)(fVar31 + fVar31);
              uStack_108 = CONCAT44(fVar30 + fVar30,fVar38 + fVar38);
              uStack_f4 = 0;
              uStack_fc = 0;
              uStack_ec = 0x3f800000;
              func_0x000109519fd0(&ppuStack_2c0,&uStack_e8,&fStack_128);
              func_0x000109519fd0(&uStack_218,&ppuStack_2c0,lVar14 + 8);
              uVar21 = (lStack_178 - lStack_180 >> 4) * -0x5555555555555555;
              if (uVar21 < uVar13 || uVar21 - uVar13 == 0) goto LAB_10a987068;
              puVar19 = (undefined8 *)(lStack_180 + lVar29);
              *puVar19 = uStack_218;
              *(float *)(puVar19 + 1) = fStack_210;
              *(ulong *)((long)puVar19 + 0xc) = CONCAT44(uStack_204,fStack_208);
              *(undefined4 *)((long)puVar19 + 0x14) = uStack_200;
              puVar19[3] = uStack_1f8;
              *(undefined4 *)(puVar19 + 4) = (undefined4)uStack_1f0;
              *(ulong *)((long)puVar19 + 0x24) = CONCAT44(uStack_1e4,uStack_1e8);
              *(undefined4 *)((long)puVar19 + 0x2c) = uStack_1e0;
              FUN_10a8f7b54(&uStack_218,lVar10);
              uVar21 = (lStack_190 - lStack_198 >> 4) * -0x5555555555555555;
              if (uVar21 < uVar13 || uVar21 - uVar13 == 0) goto LAB_10a987068;
              puVar19 = (undefined8 *)(lStack_198 + lVar29);
              puVar19[3] = CONCAT44(uStack_1fc,uStack_200);
              puVar19[2] = CONCAT44(uStack_204,fStack_208);
              puVar19[5] = uStack_1f0;
              puVar19[4] = uStack_1f8;
              puVar19[1] = CONCAT44(fStack_20c,fStack_210);
              *puVar19 = uStack_218;
              uStack_218 = &PTR_DAT_110bd3ea8;
              uStack_1c8 = 0;
              uStack_1d0 = 0;
              uStack_1f8 = *(undefined8 *)(lVar10 + 0x20);
              uStack_1f0 = *(undefined8 *)(lVar10 + 0x28);
              uStack_1d8 = (undefined4)*(undefined8 *)(lVar10 + 0x40);
              uStack_1d4 = (undefined4)((ulong)*(undefined8 *)(lVar10 + 0x40) >> 0x20);
              uStack_1e0 = (undefined4)*(undefined8 *)(lVar10 + 0x38);
              uStack_1dc = (undefined4)((ulong)*(undefined8 *)(lVar10 + 0x38) >> 0x20);
              uStack_1e8 = (undefined4)*(undefined8 *)(lVar10 + 0x30);
              uStack_1e4 = (undefined4)((ulong)*(undefined8 *)(lVar10 + 0x30) >> 0x20);
              uStack_200 = (undefined4)*(undefined8 *)(lVar10 + 0x18);
              uStack_1fc = (undefined4)((ulong)*(undefined8 *)(lVar10 + 0x18) >> 0x20);
              fStack_208 = (float)*(undefined8 *)(lVar10 + 0x10);
              uStack_204 = (undefined4)((ulong)*(undefined8 *)(lVar10 + 0x10) >> 0x20);
              fStack_210 = (float)*(undefined8 *)(lVar10 + 8);
              fStack_20c = (float)((ulong)*(undefined8 *)(lVar10 + 8) >> 0x20);
              uVar22 = *(undefined8 *)(lVar10 + 0x54);
              fStack_1bc = (float)*(undefined8 *)(lVar10 + 0x5c);
              fStack_1b8 = (float)((ulong)*(undefined8 *)(lVar10 + 0x5c) >> 0x20);
              fStack_1c4 = (float)uVar22;
              fStack_1c0 = (float)((ulong)uVar22 >> 0x20);
              lStack_11c = 0;
              uStack_124 = 0;
              fStack_128 = 1.0;
              fStack_114 = 1.0;
              uStack_110 = 0;
              uStack_108 = 0;
              uStack_f4 = 0;
              uStack_fc = 0;
              fStack_100 = 1.0;
              uStack_ec = 0x3f800000;
              fStack_168 = (fStack_1c0 * fStack_1c0 + fStack_1bc * fStack_1bc) * -2.0 + 1.0;
              fVar54 = fStack_1c4 * fStack_1c0 + fStack_1bc * fStack_1b8;
              fVar39 = fStack_1c4 * fStack_1bc - fStack_1c0 * fStack_1b8;
              fVar34 = fStack_1c4 * fStack_1c0 - fStack_1bc * fStack_1b8;
              fStack_154 = (fStack_1c4 * fStack_1c4 + fStack_1bc * fStack_1bc) * -2.0 + 1.0;
              fVar38 = fStack_1c0 * fStack_1bc + fStack_1c4 * fStack_1b8;
              fVar30 = fStack_1c4 * fStack_1bc + fStack_1c0 * fStack_1b8;
              fVar47 = fStack_1c0 * fStack_1bc - fStack_1c4 * fStack_1b8;
              fStack_140 = (fStack_1c4 * fStack_1c4 + fStack_1c0 * fStack_1c0) * -2.0 + 1.0;
              uStack_164 = CONCAT44(fVar39 + fVar39,fVar54 + fVar54);
              lStack_15c = (ulong)(uint)(fVar34 + fVar34) << 0x20;
              uStack_150 = (ulong)(uint)(fVar38 + fVar38);
              uStack_148 = CONCAT44(fVar47 + fVar47,fVar30 + fVar30);
              uStack_134 = 0;
              uStack_13c = 0;
              uStack_12c = 0x3f800000;
              func_0x000109519fd0(&uStack_e8,&fStack_128,&fStack_168);
              func_0x000109519fd0(&ppuStack_2c0,&uStack_e8,&fStack_210);
              uVar21 = (lStack_1a8 - lStack_1b0 >> 4) * -0x5555555555555555;
              if (uVar21 < uVar13 || uVar21 - uVar13 == 0) goto LAB_10a987068;
              puVar19 = (undefined8 *)(lStack_1b0 + lVar29);
              *puVar19 = ppuStack_2c0;
              *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_2b8;
              *(undefined8 *)((long)puVar19 + 0xc) = uStack_2b0;
              *(undefined4 *)((long)puVar19 + 0x14) = (undefined4)uStack_2a8;
              puVar19[3] = uStack_2a0;
              *(undefined4 *)(puVar19 + 4) = (undefined4)uStack_298;
              *(undefined8 *)((long)puVar19 + 0x24) = uStack_290;
              *(undefined4 *)((long)puVar19 + 0x2c) = (undefined4)uStack_288;
              uVar13 = uVar13 + 1;
              lVar14 = *(long *)(param_2 + 0x240);
              lVar10 = *(long *)(param_2 + 0x238);
              lVar11 = lVar11 + 0x68;
              lVar29 = lVar29 + 0x30;
            } while (uVar13 < (ulong)(lVar14 - lVar10 >> 3));
          }
          uVar5 = *(uint *)(*(long *)(param_2 + 0x228) + 0x14);
          if ((int)uVar5 < 2) {
            uVar5 = 1;
          }
          uVar13 = *(ulong *)(param_2 + 0x10);
          if (uVar13 != 0) {
            uVar21 = 0;
            fVar47 = (float)uVar5;
            do {
              if ((ulong)(*(long *)(param_2 + 0x80) - *(long *)(param_2 + 0x78)) <= uVar21)
              goto LAB_10a987068;
              if ((*(char *)(*(long *)(param_2 + 0x78) + uVar21) != '\0') &&
                 (bVar7 = lVar14 != lVar10, lVar14 = lVar10, bVar7)) {
                lVar14 = 0;
                uVar13 = 0;
                do {
                  uVar23 = (lStack_190 - lStack_198 >> 4) * -0x5555555555555555;
                  if ((uVar23 < uVar13 || uVar23 - uVar13 == 0) ||
                     (uVar23 = (*(long *)(param_2 + 0xf8) - *(long *)(param_2 + 0xf0) >> 2) *
                               -0x5555555555555555, uVar23 < uVar21 || uVar23 - uVar21 == 0))
                  goto LAB_10a987068;
                  puVar19 = (undefined8 *)(lStack_198 + lVar14);
                  pfVar16 = (float *)(*(long *)(param_2 + 0xf0) + uVar21 * 0xc);
                  fVar30 = *pfVar16;
                  fVar38 = pfVar16[1];
                  fVar54 = pfVar16[2];
                  fVar39 = *(float *)((long)puVar19 + 0x2c) +
                           fVar38 * *(float *)((long)puVar19 + 0x14) +
                           fVar30 * *(float *)(puVar19 + 1) + fVar54 * *(float *)(puVar19 + 4);
                  fVar34 = (float)*(undefined8 *)((long)puVar19 + 0x24) +
                           (float)*(undefined8 *)((long)puVar19 + 0xc) * fVar38 +
                           (float)*puVar19 * fVar30 + (float)puVar19[3] * fVar54;
                  fVar30 = (float)((ulong)*(undefined8 *)((long)puVar19 + 0x24) >> 0x20) +
                           (float)((ulong)*(undefined8 *)((long)puVar19 + 0xc) >> 0x20) * fVar38 +
                           (float)((ulong)*puVar19 >> 0x20) * fVar30 +
                           (float)((ulong)puVar19[3] >> 0x20) * fVar54;
                  ppuStack_2c0 = (undefined **)CONCAT44(fVar30,fVar34);
                  plVar15 = *(long **)(lVar10 + uVar13 * 8);
                  uStack_2b8 = CONCAT44(*(undefined4 *)(*(long *)(param_2 + 0x228) + 0x1c),fVar39);
                  (**(code **)(*plVar15 + 0x18))(&uStack_218,plVar15,&ppuStack_2c0);
                  if ((char)uStack_218 == '\x01') {
                    uVar23 = ((long)(uStack_250 - CONCAT44(fStack_254,fStack_258)) >> 4) *
                             -0x5555555555555555;
                    if ((((uVar23 < uVar13 || uVar23 - uVar13 == 0) ||
                         (uVar23 = (lStack_178 - lStack_180 >> 4) * -0x5555555555555555,
                         uVar23 < uVar13 || uVar23 - uVar13 == 0)) ||
                        (uVar23 = (lStack_1a8 - lStack_1b0 >> 4) * -0x5555555555555555,
                        uVar23 < uVar13 || uVar23 - uVar13 == 0)) ||
                       (uVar23 = (*(long *)(param_2 + 0x128) - *(long *)(param_2 + 0x120) >> 2) *
                                 -0x5555555555555555, uVar23 < uVar21 || uVar23 - uVar21 == 0))
                    goto LAB_10a987068;
                    fVar38 = uStack_218._4_4_ * fStack_210;
                    fVar35 = uStack_218._4_4_ * fStack_20c;
                    fVar54 = uStack_218._4_4_ * fStack_208;
                    fVar34 = fVar34 + fVar38;
                    fVar30 = fVar30 + fVar35;
                    fVar39 = fVar39 + fVar54;
                    puVar19 = (undefined8 *)(CONCAT44(fStack_254,fStack_258) + lVar14);
                    puVar25 = (undefined8 *)(lStack_180 + lVar14);
                    puVar12 = (undefined8 *)(lStack_1b0 + lVar14);
                    fVar37 = *(float *)((long)puVar12 + 0x2c) +
                             fVar35 * *(float *)((long)puVar12 + 0x14) +
                             fVar38 * *(float *)(puVar12 + 1) + fVar54 * *(float *)(puVar12 + 4);
                    fVar31 = (float)*(undefined8 *)((long)puVar12 + 0x24) +
                             (float)*(undefined8 *)((long)puVar12 + 0xc) * fVar35 +
                             (float)*puVar12 * fVar38 + (float)puVar12[3] * fVar54;
                    fVar35 = (float)((ulong)*(undefined8 *)((long)puVar12 + 0x24) >> 0x20) +
                             (float)((ulong)*(undefined8 *)((long)puVar12 + 0xc) >> 0x20) * fVar35 +
                             (float)((ulong)*puVar12 >> 0x20) * fVar38 +
                             (float)((ulong)puVar12[3] >> 0x20) * fVar54;
                    fVar54 = SQRT(fVar37 * fVar37 + fVar31 * fVar31 + fVar35 * fVar35);
                    fVar38 = fVar56;
                    if (1e-06 <= fVar54) {
                      fVar38 = fVar54;
                    }
                    fVar37 = fVar37 / fVar38;
                    fVar31 = fVar31 / fVar38;
                    fVar35 = fVar35 / fVar38;
                    puVar12 = (undefined8 *)(*(long *)(param_2 + 0x120) + uVar21 * 0xc);
                    fVar44 = *(float *)(puVar12 + 1) -
                             ((*(float *)((long)puVar19 + 0x2c) +
                              fVar30 * *(float *)((long)puVar19 + 0x14) +
                              fVar34 * *(float *)(puVar19 + 1) + fVar39 * *(float *)(puVar19 + 4)) -
                             (*(float *)((long)puVar25 + 0x2c) +
                             fVar30 * *(float *)((long)puVar25 + 0x14) +
                             fVar34 * *(float *)(puVar25 + 1) + fVar39 * *(float *)(puVar25 + 4))) *
                             fVar47;
                    fVar32 = fVar54 * fVar47;
                    fVar33 = *(float *)(*(long *)(param_2 + 0x228) + 0x24) * fVar32;
                    fVar36 = (float)*puVar12;
                    fVar38 = fVar36 - (((float)*(undefined8 *)((long)puVar19 + 0x24) +
                                       (float)*(undefined8 *)((long)puVar19 + 0xc) * fVar30 +
                                       (float)*puVar19 * fVar34 + (float)puVar19[3] * fVar39) -
                                      ((float)*(undefined8 *)((long)puVar25 + 0x24) +
                                      (float)*(undefined8 *)((long)puVar25 + 0xc) * fVar30 +
                                      (float)*puVar25 * fVar34 + (float)puVar25[3] * fVar39)) *
                                      fVar47;
                    fVar40 = (float)((ulong)*puVar12 >> 0x20);
                    fVar39 = fVar40 - (((float)((ulong)*(undefined8 *)((long)puVar19 + 0x24) >> 0x20
                                               ) +
                                       (float)((ulong)*(undefined8 *)((long)puVar19 + 0xc) >> 0x20)
                                       * fVar30 + (float)((ulong)*puVar19 >> 0x20) * fVar34 +
                                       (float)((ulong)puVar19[3] >> 0x20) * fVar39) -
                                      ((float)((ulong)*(undefined8 *)((long)puVar25 + 0x24) >> 0x20)
                                      + (float)((ulong)*(undefined8 *)((long)puVar25 + 0xc) >> 0x20)
                                        * fVar30 + (float)((ulong)*puVar25 >> 0x20) * fVar34 +
                                        (float)((ulong)puVar25[3] >> 0x20) * fVar39)) * fVar47;
                    fVar30 = fVar44 * fVar37 + fVar38 * fVar31 + fVar39 * fVar35;
                    fVar38 = fVar38 - fVar31 * fVar30;
                    fVar39 = fVar39 - fVar35 * fVar30;
                    fVar44 = fVar44 - fVar37 * fVar30;
                    fVar34 = SQRT(fVar44 * fVar44 + fVar38 * fVar38 + fVar39 * fVar39);
                    fVar30 = fVar56;
                    if (1e-06 <= fVar34) {
                      fVar30 = fVar34;
                    }
                    if (fVar33 <= fVar34) {
                      fVar34 = fVar33;
                    }
                    *puVar12 = CONCAT44(fVar40 + (fVar35 * fVar32 - (fVar39 / fVar30) * fVar34),
                                        fVar36 + (fVar31 * fVar32 - (fVar38 / fVar30) * fVar34));
                    *(float *)(puVar12 + 1) =
                         *(float *)(puVar12 + 1) + (fVar32 * fVar37 - fVar34 * (fVar44 / fVar30));
                    uVar23 = (*(long *)(param_2 + 0xf8) - *(long *)(param_2 + 0xf0) >> 2) *
                             -0x5555555555555555;
                    if (uVar23 < uVar21 || uVar23 - uVar21 == 0) goto LAB_10a987068;
                    puVar19 = (undefined8 *)(*(long *)(param_2 + 0xf0) + uVar21 * 0xc);
                    *puVar19 = CONCAT44(fVar35 * fVar54 + (float)((ulong)*puVar19 >> 0x20),
                                        fVar31 * fVar54 + (float)*puVar19);
                    *(float *)(puVar19 + 1) = fVar54 * fVar37 + *(float *)(puVar19 + 1);
                  }
                  uVar13 = uVar13 + 1;
                  lVar10 = *(long *)(param_2 + 0x238);
                  lVar14 = lVar14 + 0x30;
                } while (uVar13 < (ulong)(*(long *)(param_2 + 0x240) - lVar10 >> 3));
                uVar13 = *(ulong *)(param_2 + 0x10);
                lVar14 = *(long *)(param_2 + 0x240);
              }
              uVar21 = uVar21 + 1;
            } while (uVar21 < uVar13);
          }
          if (lStack_1b0 != 0) {
            lStack_1a8 = lStack_1b0;
            __ZdlPv();
          }
          if (lStack_198 != 0) {
            lStack_190 = lStack_198;
            __ZdlPv();
          }
          if (lStack_180 != 0) {
            lStack_178 = lStack_180;
            __ZdlPv();
          }
          if (CONCAT44(fStack_254,fStack_258) != 0) {
            uStack_250 = CONCAT44(fStack_254,fStack_258);
            __ZdlPv();
          }
        }
      }
      FUN_10a12d500(param_2 + 0x108,*(long *)(param_2 + 0xf0),*(long *)(param_2 + 0xf8),
                    (*(long *)(param_2 + 0xf8) - *(long *)(param_2 + 0xf0) >> 2) *
                    -0x5555555555555555);
      uVar9 = uVar9 + 1;
    }
    if ((*(byte *)(param_2 + 0x40) & 1) != 0) {
      FUN_10a9846cc(param_2);
    }
    FUN_10a984938(param_2);
    *(undefined8 *)(param_2 + 0x2b0) = *(undefined8 *)(param_2 + 0x318);
    *(undefined8 *)(param_2 + 0x2a8) = *(undefined8 *)(param_2 + 0x310);
    *(undefined8 *)(param_2 + 0x2c0) = *(undefined8 *)(param_2 + 0x328);
    *(undefined8 *)(param_2 + 0x2b8) = *(undefined8 *)(param_2 + 800);
    *(undefined8 *)(param_2 + 0x2d0) = *(undefined8 *)(param_2 + 0x338);
    *(undefined8 *)(param_2 + 0x2c8) = *(undefined8 *)(param_2 + 0x330);
    *(undefined8 *)(param_2 + 0x2dc) = *(undefined8 *)(param_2 + 0x344);
    *(undefined8 *)(param_2 + 0x2d4) = *(undefined8 *)(param_2 + 0x33c);
    *(undefined8 *)(param_2 + 0x290) = *(undefined8 *)(param_2 + 0x2f8);
    *(undefined8 *)(param_2 + 0x288) = *(undefined8 *)(param_2 + 0x2f0);
    *(undefined8 *)(param_2 + 0x2a0) = *(undefined8 *)(param_2 + 0x308);
    *(undefined8 *)(param_2 + 0x298) = *(undefined8 *)(param_2 + 0x300);
    *(float *)(param_2 + 0x230) = *(float *)(param_2 + 0x230) - param_1;
    if (lStack_2f0 != 0) {
      lStack_2e8 = lStack_2f0;
      __ZdlPv();
    }
    if (lStack_2d8 != 0) {
      lStack_2d0 = lStack_2d8;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a9872b4; end: 10a987a2f;  */

void FUN_10a9872b4(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
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
  undefined8 uVar29;
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
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  undefined4 uStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  undefined4 uStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  undefined8 uStack_134;
  undefined8 uStack_12c;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  undefined1 auStack_e0 [64];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_120 = 0x3f800000;
  uStack_114 = 0;
  uStack_11c = 0;
  uStack_10c = 0x3f800000;
  uStack_108 = 0;
  uStack_100 = 0;
  fVar17 = *(float *)(param_1 + 0x338) * 0.0;
  fVar18 = (float)*(undefined8 *)(param_1 + 0x330);
  fVar25 = fVar18 * 0.0;
  fVar22 = (float)((ulong)*(undefined8 *)(param_1 + 0x330) >> 0x20);
  fVar27 = fVar22 * 0.0;
  uVar29 = NEON_rev64(CONCAT44(fVar27,fVar25),4);
  fVar25 = fVar25 + fVar27;
  uStack_f0 = CONCAT44(fVar22 + (float)((ulong)uVar29 >> 0x20) + fVar17 + 0.0,
                       fVar18 + (float)uVar29 + fVar17 + 0.0);
  fStack_e8 = *(float *)(param_1 + 0x338) + fVar25 + 0.0;
  fStack_e4 = fVar25 + fVar17 + 1.0;
  uStack_f8 = 0x3f800000;
  fVar17 = *(float *)(param_1 + 0x33c);
  fVar18 = *(float *)(param_1 + 0x340);
  fVar22 = *(float *)(param_1 + 0x344);
  fVar25 = *(float *)(param_1 + 0x348);
  fStack_160 = (fVar18 * fVar18 + fVar22 * fVar22) * -2.0 + 1.0;
  fStack_15c = fVar17 * fVar18 + fVar22 * fVar25;
  fStack_15c = fStack_15c + fStack_15c;
  fStack_158 = fVar17 * fVar22 - fVar18 * fVar25;
  fStack_158 = fStack_158 + fStack_158;
  fStack_150 = fVar17 * fVar18 - fVar22 * fVar25;
  fStack_150 = fStack_150 + fStack_150;
  fStack_14c = (fVar17 * fVar17 + fVar22 * fVar22) * -2.0 + 1.0;
  fStack_148 = fVar18 * fVar22 + fVar17 * fVar25;
  fStack_148 = fStack_148 + fStack_148;
  fStack_140 = fVar17 * fVar22 + fVar18 * fVar25;
  fStack_140 = fStack_140 + fStack_140;
  fStack_13c = fVar18 * fVar22 - fVar17 * fVar25;
  fStack_13c = fStack_13c + fStack_13c;
  uStack_154 = 0;
  uStack_144 = 0;
  fStack_138 = (fVar17 * fVar17 + fVar18 * fVar18) * -2.0 + 1.0;
  uStack_12c = 0;
  uStack_134 = 0;
  uStack_124 = 0x3f800000;
  func_0x000109519fd0(auStack_e0,&uStack_120,&fStack_160);
  func_0x000109519fd0(&uStack_a0,auStack_e0,param_1 + 0x2f0);
  fVar17 = (float)uStack_98;
  fVar18 = (float)uStack_88;
  fVar22 = (float)uStack_78;
  fVar25 = (float)uStack_68;
  lVar11 = *(long *)(param_1 + 0x158) - *(long *)(param_1 + 0x150);
  fVar26 = (float)uStack_70;
  fVar28 = (float)((ulong)uStack_70 >> 0x20);
  fVar23 = (float)uStack_80;
  fVar24 = (float)((ulong)uStack_80 >> 0x20);
  fVar27 = (float)uStack_a0;
  fVar19 = (float)((ulong)uStack_a0 >> 0x20);
  fVar20 = (float)uStack_90;
  fVar21 = (float)((ulong)uStack_90 >> 0x20);
  if (lVar11 != 0) {
    uVar7 = 0;
    lVar14 = *(long *)(param_1 + 0xd8);
    uVar8 = (*(long *)(param_1 + 0xe0) - lVar14 >> 2) * -0x5555555555555555;
    piVar9 = (int *)(*(long *)(param_1 + 0x150) + 4);
    do {
      iVar12 = piVar9[-1];
      if (((uVar8 < (ulong)(long)iVar12 || uVar8 - (long)iVar12 == 0) ||
          (iVar3 = *piVar9, uVar8 < (ulong)(long)iVar3 || uVar8 - (long)iVar3 == 0)) ||
         ((ulong)(*(long *)(param_1 + 0x170) - *(long *)(param_1 + 0x168) >> 2) <= uVar7))
      goto LAB_10a987a2c;
      puVar15 = (undefined8 *)(lVar14 + (long)iVar3 * 0xc);
      fVar39 = *(float *)(puVar15 + 1);
      puVar13 = (undefined8 *)(lVar14 + (long)iVar12 * 0xc);
      fVar43 = *(float *)(puVar13 + 1);
      uVar29 = *puVar15;
      uVar50 = *puVar13;
      fVar47 = (float)((ulong)uVar29 >> 0x20);
      fVar45 = (float)((ulong)uVar50 >> 0x20);
      fVar30 = (float)uVar29;
      fVar41 = (float)uVar50;
      fVar40 = (fVar28 + fVar47 * fVar21 + fVar30 * fVar19 + fVar39 * fVar24) -
               (fVar28 + fVar45 * fVar21 + fVar41 * fVar19 + fVar43 * fVar24);
      fVar44 = ((float)uStack_68 +
               (float)uStack_88 * fVar47 + (float)uStack_98 * fVar30 + (float)uStack_78 * fVar39) -
               ((float)uStack_68 +
               (float)uStack_88 * fVar45 + (float)uStack_98 * fVar41 + (float)uStack_78 * fVar43);
      fVar47 = (fVar26 + fVar20 * fVar47 + fVar27 * fVar30 + fVar23 * fVar39) -
               (fVar26 + fVar20 * fVar45 + fVar27 * fVar41 + fVar23 * fVar43);
      *(float *)(*(long *)(param_1 + 0x168) + uVar7 * 4) =
           SQRT(fVar44 * fVar44 + fVar47 * fVar47 + fVar40 * fVar40);
      uVar7 = uVar7 + 1;
      piVar9 = piVar9 + 2;
    } while (lVar11 >> 3 != uVar7);
  }
  if (**(char **)(param_1 + 0x228) == '\0') {
    lVar11 = *(long *)(param_1 + 0x198);
    if (*(long *)(param_1 + 0x1a0) != lVar11) {
      uVar7 = 0;
      do {
        piVar9 = (int *)(lVar11 + uVar7 * 0x10);
        iVar12 = *piVar9;
        lVar11 = *(long *)(param_1 + 0xd8);
        uVar8 = (*(long *)(param_1 + 0xe0) - lVar11 >> 2) * -0x5555555555555555;
        if (((uVar8 < (ulong)(long)iVar12 || uVar8 - (long)iVar12 == 0) ||
            (iVar3 = piVar9[1], uVar8 < (ulong)(long)iVar3 || uVar8 - (long)iVar3 == 0)) ||
           ((iVar4 = piVar9[2], uVar8 < (ulong)(long)iVar4 || uVar8 - (long)iVar4 == 0 ||
            (iVar5 = piVar9[3], uVar8 < (ulong)(long)iVar5 || uVar8 - (long)iVar5 == 0))))
        goto LAB_10a987a2c;
        iVar10 = 0;
        pfVar16 = (float *)(lVar11 + (long)iVar12 * 0xc);
        fVar47 = *pfVar16;
        fVar41 = pfVar16[1];
        fVar45 = pfVar16[2];
        fVar49 = fVar26 + fVar20 * fVar41 + fVar47 * fVar27 + fVar45 * fVar23;
        fVar51 = fVar28 + fVar21 * fVar41 + fVar47 * fVar19 + fVar45 * fVar24;
        fVar53 = fVar25 + fVar18 * fVar41 + fVar47 * fVar17 + fVar45 * fVar22;
        pfVar16 = (float *)(lVar11 + (long)iVar3 * 0xc);
        fVar47 = *pfVar16;
        fVar41 = pfVar16[1];
        fVar45 = pfVar16[2];
        fVar44 = fVar26 + fVar20 * fVar41 + fVar47 * fVar27 + fVar45 * fVar23;
        fVar54 = fVar28 + fVar21 * fVar41 + fVar47 * fVar19 + fVar45 * fVar24;
        fVar41 = fVar25 + fVar18 * fVar41 + fVar47 * fVar17 + fVar45 * fVar22;
        pfVar16 = (float *)(lVar11 + (long)iVar4 * 0xc);
        fVar40 = pfVar16[1];
        fVar47 = pfVar16[2];
        fVar39 = *pfVar16;
        fVar45 = fVar25 + fVar18 * fVar40 + fVar39 * fVar17 + fVar47 * fVar22;
        fVar43 = fVar26 + fVar20 * fVar40 + fVar39 * fVar27 + fVar47 * fVar23;
        fVar30 = fVar28 + fVar21 * fVar40 + fVar39 * fVar19 + fVar47 * fVar24;
        pfVar16 = (float *)(lVar11 + (long)iVar5 * 0xc);
        fVar47 = *pfVar16;
        fVar39 = pfVar16[1];
        fVar40 = pfVar16[2];
        fVar31 = fVar26 + fVar20 * fVar39 + fVar47 * fVar27 + fVar40 * fVar23;
        fVar34 = fVar28 + fVar21 * fVar39 + fVar47 * fVar19 + fVar40 * fVar24;
        fVar35 = fVar25 + fVar18 * fVar39 + fVar47 * fVar17 + fVar40 * fVar22;
        fVar42 = fVar44 - fVar49;
        fVar46 = fVar54 - fVar51;
        fVar48 = fVar41 - fVar53;
        fVar55 = fVar43 - fVar49;
        fVar47 = fVar30 - fVar51;
        fVar52 = fVar45 - fVar53;
        fVar49 = fVar31 - fVar49;
        fVar51 = fVar34 - fVar51;
        fVar53 = fVar35 - fVar53;
        fVar43 = fVar43 - fVar44;
        fVar30 = fVar30 - fVar54;
        fVar45 = fVar45 - fVar41;
        fVar31 = fVar31 - fVar44;
        fVar34 = fVar34 - fVar54;
        fVar35 = fVar35 - fVar41;
        fVar36 = -(fVar47 * fVar48) + fVar52 * fVar46;
        fVar41 = -(fVar52 * fVar42) + fVar55 * fVar48;
        fVar39 = -(fVar55 * fVar46) + fVar47 * fVar42;
        fVar37 = -(fVar51 * fVar48) + fVar53 * fVar46;
        fVar40 = -(fVar53 * fVar42) + fVar49 * fVar48;
        fVar54 = -(fVar49 * fVar46) + fVar51 * fVar42;
        fVar38 = -(fVar30 * fVar48) + fVar45 * fVar46;
        fVar32 = -(fVar45 * fVar42) + fVar43 * fVar48;
        fVar33 = -(fVar43 * fVar46) + fVar30 * fVar42;
        fVar44 = -(fVar34 * fVar48) + fVar35 * fVar46;
        fVar30 = (fVar48 * fVar45 + fVar42 * fVar43 + fVar46 * fVar30) /
                 SQRT(fVar33 * fVar33 + fVar38 * fVar38 + fVar32 * fVar32);
        fVar45 = -(fVar35 * fVar42) + fVar31 * fVar48;
        fVar43 = -(fVar31 * fVar46) + fVar34 * fVar42;
        fVar41 = SQRT(fVar39 * fVar39 + fVar36 * fVar36 + fVar41 * fVar41);
        fVar39 = SQRT(fVar54 * fVar54 + fVar37 * fVar37 + fVar40 * fVar40);
        fVar54 = (fVar48 * fVar52 + fVar42 * fVar55 + fVar46 * fVar47) / fVar41;
        fVar40 = (fVar48 * fVar53 + fVar42 * fVar49 + fVar46 * fVar51) / fVar39;
        fVar43 = (fVar48 * fVar35 + fVar42 * fVar31 + fVar46 * fVar34) /
                 SQRT(fVar43 * fVar43 + fVar44 * fVar44 + fVar45 * fVar45);
        fVar47 = -fVar30 - fVar43;
        fVar45 = fVar54 + fVar40;
        fVar30 = fVar30 - fVar54;
        fVar43 = fVar43 - fVar40;
        uStack_98 = 0;
        uStack_a0 = 0x3f800000;
        uStack_88 = 0;
        uStack_90 = 0x3f80000000000000;
        uStack_78 = 0x3f800000;
        uStack_80 = 0;
        uStack_68 = 0x3f80000000000000;
        uStack_70 = 0;
        lVar11 = 1;
        do {
          lVar14 = 0;
          pfVar16 = (float *)&uStack_a0;
          do {
            fVar40 = fVar47;
            if (iVar10 == 1) {
              fVar40 = fVar45;
            }
            fVar44 = fVar30;
            if (iVar10 != 2) {
              fVar44 = fVar40;
            }
            fVar40 = fVar43;
            if (iVar10 != 3) {
              fVar40 = fVar44;
            }
            iVar12 = (int)lVar14;
            fVar44 = fVar47;
            if (iVar12 == 1) {
              fVar44 = fVar45;
            }
            fVar31 = fVar30;
            if (iVar12 != 2) {
              fVar31 = fVar44;
            }
            fVar44 = fVar43;
            if (iVar12 != 3) {
              fVar44 = fVar31;
            }
            pfVar2 = (float *)((long)&uStack_98 + lVar14 * 0x10 + 4);
            if (iVar10 != 3) {
              pfVar2 = pfVar16;
            }
            pfVar1 = (float *)(&uStack_98 + lVar14 * 2);
            if (iVar10 != 2) {
              pfVar1 = pfVar2;
            }
            pfVar2 = (float *)((long)&uStack_a0 + lVar14 * 0x10 + 4);
            if (iVar10 != 1) {
              pfVar2 = pfVar1;
            }
            *pfVar2 = (-3.0 / (fVar41 + fVar39)) * fVar40 * fVar44;
            lVar14 = lVar14 + 1;
            pfVar16 = pfVar16 + 4;
          } while (lVar11 != lVar14);
          iVar10 = iVar10 + 1;
          lVar11 = lVar11 + 1;
        } while (iVar10 != 4);
        if ((ulong)(*(long *)(param_1 + 0x1d0) - *(long *)(param_1 + 0x1c8) >> 6) <= uVar7)
        goto LAB_10a987a2c;
        puVar13 = (undefined8 *)(*(long *)(param_1 + 0x1c8) + uVar7 * 0x40);
        puVar13[1] = uStack_98;
        *puVar13 = uStack_a0;
        puVar13[3] = uStack_88;
        puVar13[2] = uStack_90;
        puVar13[5] = uStack_78;
        puVar13[4] = uStack_80;
        puVar13[7] = uStack_68;
        puVar13[6] = uStack_70;
        uVar7 = uVar7 + 1;
        lVar11 = *(long *)(param_1 + 0x198);
      } while (uVar7 < (ulong)(*(long *)(param_1 + 0x1a0) - lVar11 >> 4));
    }
  }
  else if (**(char **)(param_1 + 0x228) == '\x01') {
    lVar11 = *(long *)(param_1 + 0x1b8) - *(long *)(param_1 + 0x1b0);
    if (lVar11 != 0) {
      uVar7 = 0;
      lVar14 = *(long *)(param_1 + 0xd8);
      uVar8 = (*(long *)(param_1 + 0xe0) - lVar14 >> 2) * -0x5555555555555555;
      piVar9 = (int *)(*(long *)(param_1 + 0x1b0) + 4);
      do {
        iVar12 = piVar9[-1];
        if (((uVar8 < (ulong)(long)iVar12 || uVar8 - (long)iVar12 == 0) ||
            (iVar3 = *piVar9, uVar8 < (ulong)(long)iVar3 || uVar8 - (long)iVar3 == 0)) ||
           ((ulong)(*(long *)(param_1 + 0x1e8) - *(long *)(param_1 + 0x1e0) >> 2) <= uVar7)) {
LAB_10a987a2c:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a987a30);
          (*pcVar6)();
        }
        pfVar16 = (float *)(lVar14 + (long)iVar3 * 0xc);
        fVar22 = pfVar16[1];
        fVar17 = pfVar16[2];
        fVar18 = *pfVar16;
        pfVar16 = (float *)(lVar14 + (long)iVar12 * 0xc);
        fVar41 = pfVar16[1];
        fVar25 = pfVar16[2];
        fVar47 = *pfVar16;
        fVar45 = (fVar26 + fVar20 * fVar22 + fVar27 * fVar18 + fVar23 * fVar17) -
                 (fVar26 + fVar20 * fVar41 + fVar27 * fVar47 + fVar23 * fVar25);
        fVar39 = (fVar28 + fVar21 * fVar22 + fVar19 * fVar18 + fVar24 * fVar17) -
                 (fVar28 + fVar21 * fVar41 + fVar19 * fVar47 + fVar24 * fVar25);
        fVar17 = ((float)uStack_68 +
                 (float)uStack_88 * fVar22 + fVar18 * (float)uStack_98 + fVar17 * (float)uStack_78)
                 - ((float)uStack_68 +
                   (float)uStack_88 * fVar41 + fVar47 * (float)uStack_98 + fVar25 * (float)uStack_78
                   );
        *(float *)(*(long *)(param_1 + 0x1e0) + uVar7 * 4) =
             SQRT(fVar17 * fVar17 + fVar45 * fVar45 + fVar39 * fVar39);
        uVar7 = uVar7 + 1;
        piVar9 = piVar9 + 2;
      } while (lVar11 >> 3 != uVar7);
    }
  }
  return;
}



/* Entry: 10a987a30; end: 10a987cab;  */

void FUN_10a987a30(long *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  bool bVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint uStack_fc;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  
  puVar16 = (undefined8 *)*param_1;
  puVar17 = (undefined8 *)param_1[1];
  lVar18 = (long)puVar17 - (long)puVar16;
  bVar3 = param_2 < (long *)((lVar18 >> 3) * 0x4ec4ec4ec4ec4ec5);
  uVar21 = (long)param_2 + (lVar18 >> 3) * -0x4ec4ec4ec4ec4ec5;
  if (bVar3 || uVar21 == 0) {
    if (bVar3) {
      while (puVar17 != puVar16 + (long)param_2 * 0xd) {
        puVar17 = puVar17 + -0xd;
        (**(code **)*puVar17)(puVar17);
      }
      param_1[1] = (long)(puVar16 + (long)param_2 * 0xd);
    }
  }
  else {
    if ((ulong)((param_1[2] - (long)puVar17 >> 3) * 0x4ec4ec4ec4ec4ec5) < uVar21) {
      if (param_2 < (long *)0x276276276276277) {
        lVar9 = param_1[2] - (long)puVar16 >> 3;
        plVar10 = (long *)(lVar9 * -0x6276276276276276);
        if (plVar10 < param_2 || (long)plVar10 - (long)param_2 == 0) {
          plVar10 = param_2;
        }
        if (0x13b13b13b13b13a < (ulong)(lVar9 * 0x4ec4ec4ec4ec4ec5)) {
          plVar10 = (long *)0x276276276276276;
        }
        if (plVar10 < (long *)0x276276276276277) {
          lVar9 = (long)plVar10 * 0x68;
          __Znwm();
          puVar1 = (undefined8 *)(lVar9 + lVar18);
          puVar5 = puVar1;
          do {
            *puVar5 = &PTR_DAT_110bd3ea8;
            *(undefined4 *)(puVar5 + 1) = 0x3f800000;
            *(undefined8 *)((long)puVar5 + 0x14) = 0;
            *(undefined8 *)((long)puVar5 + 0xc) = 0;
            *(undefined4 *)((long)puVar5 + 0x1c) = 0x3f800000;
            puVar5[4] = 0;
            puVar5[5] = 0;
            *(undefined4 *)(puVar5 + 6) = 0x3f800000;
            *(undefined8 *)((long)puVar5 + 0x3c) = 0;
            *(undefined8 *)((long)puVar5 + 0x34) = 0;
            *(undefined4 *)((long)puVar5 + 0x44) = 0x3f800000;
            puVar5[10] = 0;
            puVar5[0xb] = 0;
            puVar5[9] = 0;
            *(undefined4 *)(puVar5 + 0xc) = 0x3f800000;
            puVar5 = puVar5 + 0xd;
          } while (puVar5 != puVar1 + uVar21 * 0xd);
          puVar5 = puVar16;
          puVar11 = (undefined8 *)((long)puVar1 - lVar18);
          if (puVar16 != puVar17) {
            do {
              *puVar11 = &PTR_DAT_110bd3ea8;
              uVar22 = puVar5[2];
              uVar13 = puVar5[1];
              uVar24 = puVar5[4];
              uVar23 = puVar5[3];
              uVar26 = puVar5[6];
              uVar25 = puVar5[5];
              uVar27 = puVar5[7];
              puVar11[8] = puVar5[8];
              puVar11[7] = uVar27;
              puVar11[6] = uVar26;
              puVar11[5] = uVar25;
              puVar11[4] = uVar24;
              puVar11[3] = uVar23;
              puVar11[2] = uVar22;
              puVar11[1] = uVar13;
              uVar13 = puVar5[9];
              *(undefined4 *)(puVar11 + 10) = *(undefined4 *)(puVar5 + 10);
              puVar11[9] = uVar13;
              uVar13 = *(undefined8 *)((long)puVar5 + 0x54);
              *(undefined8 *)((long)puVar11 + 0x5c) = *(undefined8 *)((long)puVar5 + 0x5c);
              *(undefined8 *)((long)puVar11 + 0x54) = uVar13;
              puVar5 = puVar5 + 0xd;
              puVar11 = puVar11 + 0xd;
            } while (puVar5 != puVar17);
            do {
              puVar5 = puVar16 + 0xd;
              (**(code **)*puVar16)(puVar16);
              puVar16 = puVar5;
            } while (puVar5 != puVar17);
            puVar16 = (undefined8 *)*param_1;
          }
          *param_1 = (long)puVar1 - lVar18;
          param_1[1] = (long)(puVar1 + uVar21 * 0xd);
          param_1[2] = lVar9 + (long)plVar10 * 0x68;
          if (puVar16 == (undefined8 *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(puVar16);
          return;
        }
      }
      else {
        func_0x00010a98a7e0();
      }
      func_0x000109ffded8();
      puVar17 = (undefined8 *)param_1[1];
      if (puVar17 < (undefined8 *)param_1[2]) {
        puVar16 = puVar17 + 1;
        *puVar17 = param_2;
      }
      else {
        lVar18 = (long)puVar17 - *param_1;
        uVar21 = (lVar18 >> 3) + 1;
        if (uVar21 >> 0x3d != 0) {
          FUN_10a001940();
          FUN_10a1f4c34(param_3);
          lStack_f8 = 0;
          lStack_f0 = 0;
          uStack_e8 = 0;
          lVar18 = *param_2;
          if (param_2[1] == lVar18) {
LAB_10a987f84:
            FUN_10a9bbb80(&lStack_f8);
            return;
          }
          lVar9 = 0;
          lVar19 = 0;
          uVar21 = 0;
LAB_10a987dd0:
          lVar18 = lVar18 + uVar21 * 8;
          lVar7 = (lVar19 - lVar9 >> 3) * -0x5555555555555555;
          lVar8 = param_3[1] - *param_3;
          uVar20 = (uint)uVar21;
          if (lVar8 != 0) {
            lVar12 = 0;
            do {
              if (lVar12 == lVar7) goto LAB_10a987fac;
              lVar14 = 0;
              plVar10 = (long *)(lVar9 + lVar12 * 0x18);
              bVar3 = false;
              while( true ) {
                bVar15 = bVar3;
                if ((ulong)(plVar10[1] - *plVar10) <= (ulong)(long)*(int *)(lVar18 + lVar14))
                goto LAB_10a987fac;
                if (*(char *)(*plVar10 + (long)*(int *)(lVar18 + lVar14)) != '\0') break;
                lVar14 = 4;
                bVar3 = true;
                if (bVar15) {
                  uStack_fc = uVar20;
                  FUN_109febd04(*param_3 + lVar12 * 0x18,&uStack_fc);
                  lVar8 = 0;
                  bVar3 = false;
                  goto LAB_10a987ea8;
                }
              }
              lVar12 = lVar12 + 1;
            } while (lVar12 != (lVar8 >> 3) * -0x5555555555555555);
          }
          FUN_10a9bb8b4(&lStack_f8,lVar7 + 1);
          lVar19 = lStack_f0;
          lVar9 = lStack_f8;
          lVar8 = lStack_f0 - lStack_f8;
          if (lVar8 == 0) {
LAB_10a987fac:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a987fb0);
            (*pcVar2)();
          }
          uVar21 = param_1[2];
          lVar7 = *(long *)(lStack_f0 + -0x18);
          uStack_fc = uStack_fc & 0xffffff00;
          uVar6 = *(long *)(lStack_f0 + -0x10) - lVar7;
          if (uVar21 < uVar6 || uVar21 - uVar6 == 0) {
            if (uVar21 < uVar6) {
              *(ulong *)(lStack_f0 + -0x10) = lVar7 + uVar21;
            }
          }
          else {
            FUN_10a9bba74((long *)(lStack_f0 + -0x18),uVar21 - uVar6,&uStack_fc);
          }
          func_0x000109634dec(param_3,(param_3[1] - *param_3 >> 3) * -0x5555555555555555 + 1);
          if (param_3[1] == *param_3) goto LAB_10a987fac;
          uStack_fc = uVar20;
          FUN_109febd04(param_3[1] + -0x18,&uStack_fc);
          lVar7 = 0;
          uVar21 = (lVar8 >> 3) * -0x5555555555555555;
          bVar3 = false;
          do {
            uVar6 = (param_3[1] - *param_3 >> 3) * -0x5555555555555555 - 1;
            if (uVar21 < uVar6 || uVar21 - uVar6 == 0) goto LAB_10a987fac;
            plVar10 = (long *)(lVar9 + uVar6 * 0x18);
            lVar8 = *plVar10;
            if ((ulong)(plVar10[1] - lVar8) <= (ulong)(long)*(int *)(lVar18 + lVar7))
            goto LAB_10a987fac;
            *(undefined1 *)(lVar8 + *(int *)(lVar18 + lVar7)) = 1;
            lVar7 = 4;
            bVar15 = !bVar3;
            bVar3 = true;
          } while (bVar15);
          goto LAB_10a987f6c;
        }
        uVar4 = param_1[2] - *param_1;
        uVar6 = (long)uVar4 >> 2;
        if (uVar6 <= uVar21) {
          uVar6 = uVar21;
        }
        if (0x7ffffffffffffff7 < uVar4) {
          uVar6 = 0x1fffffffffffffff;
        }
        plVar10 = param_1;
        FUN_10a001954();
        puVar17 = (undefined8 *)((long)plVar10 + lVar18);
        puVar16 = puVar17 + 1;
        *puVar17 = param_2;
        lVar9 = (long)puVar17 - (param_1[1] - *param_1);
        _memcpy(lVar9);
        lVar18 = *param_1;
        *param_1 = lVar9;
        param_1[1] = (long)puVar16;
        param_1[2] = (long)(plVar10 + uVar6);
        if (lVar18 != 0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)puVar16;
      return;
    }
    puVar16 = puVar17 + uVar21 * 0xd;
    do {
      *puVar17 = &PTR_DAT_110bd3ea8;
      *(undefined4 *)(puVar17 + 1) = 0x3f800000;
      *(undefined8 *)((long)puVar17 + 0x14) = 0;
      *(undefined8 *)((long)puVar17 + 0xc) = 0;
      *(undefined4 *)((long)puVar17 + 0x1c) = 0x3f800000;
      puVar17[4] = 0;
      puVar17[5] = 0;
      *(undefined4 *)(puVar17 + 6) = 0x3f800000;
      *(undefined8 *)((long)puVar17 + 0x3c) = 0;
      *(undefined8 *)((long)puVar17 + 0x34) = 0;
      *(undefined4 *)((long)puVar17 + 0x44) = 0x3f800000;
      puVar17[10] = 0;
      puVar17[0xb] = 0;
      puVar17[9] = 0;
      *(undefined4 *)(puVar17 + 0xc) = 0x3f800000;
      puVar17 = puVar17 + 0xd;
    } while (puVar17 != puVar16);
    param_1[1] = (long)puVar16;
  }
  return;
  while( true ) {
    *(undefined1 *)(*plVar10 + (long)*(int *)(lVar18 + lVar8)) = 1;
    lVar8 = 4;
    bVar3 = true;
    if (bVar15) break;
LAB_10a987ea8:
    bVar15 = bVar3;
    if ((ulong)(plVar10[1] - *plVar10) <= (ulong)(long)*(int *)(lVar18 + lVar8)) goto LAB_10a987fac;
  }
LAB_10a987f6c:
  uVar21 = (ulong)(uVar20 + 1);
  lVar18 = *param_2;
  if ((ulong)(param_2[1] - lVar18 >> 3) <= uVar21) goto LAB_10a987f84;
  goto LAB_10a987dd0;
}



/* Entry: 10a987cac; end: 10a987d67;  */

void FUN_10a987cac(long *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  bool bVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  uint uStack_ac;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar13 = puVar1 + 1;
    *puVar1 = param_2;
  }
  else {
    lVar12 = (long)puVar1 - *param_1;
    uVar17 = (lVar12 >> 3) + 1;
    if (uVar17 >> 0x3d != 0) {
      FUN_10a001940();
      FUN_10a1f4c34(param_3);
      lStack_a8 = 0;
      lStack_a0 = 0;
      uStack_98 = 0;
      lVar12 = *param_2;
      if (param_2[1] == lVar12) {
LAB_10a987f84:
        FUN_10a9bbb80(&lStack_a8);
        return;
      }
      lVar11 = 0;
      lVar15 = 0;
      uVar17 = 0;
LAB_10a987dd0:
      lVar12 = lVar12 + uVar17 * 8;
      lVar5 = (lVar15 - lVar11 >> 3) * -0x5555555555555555;
      lVar6 = param_3[1] - *param_3;
      uVar16 = (uint)uVar17;
      if (lVar6 != 0) {
        lVar7 = 0;
        do {
          if (lVar7 == lVar5) goto LAB_10a987fac;
          lVar9 = 0;
          plVar14 = (long *)(lVar11 + lVar7 * 0x18);
          bVar8 = false;
          while( true ) {
            bVar10 = bVar8;
            if ((ulong)(plVar14[1] - *plVar14) <= (ulong)(long)*(int *)(lVar12 + lVar9))
            goto LAB_10a987fac;
            if (*(char *)(*plVar14 + (long)*(int *)(lVar12 + lVar9)) != '\0') break;
            lVar9 = 4;
            bVar8 = true;
            if (bVar10) {
              uStack_ac = uVar16;
              FUN_109febd04(*param_3 + lVar7 * 0x18,&uStack_ac);
              lVar6 = 0;
              bVar8 = false;
              goto LAB_10a987ea8;
            }
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != (lVar6 >> 3) * -0x5555555555555555);
      }
      FUN_10a9bb8b4(&lStack_a8,lVar5 + 1);
      lVar15 = lStack_a0;
      lVar11 = lStack_a8;
      lVar6 = lStack_a0 - lStack_a8;
      if (lVar6 == 0) {
LAB_10a987fac:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a987fb0);
        (*pcVar2)();
      }
      uVar17 = param_1[2];
      lVar5 = *(long *)(lStack_a0 + -0x18);
      uStack_ac = uStack_ac & 0xffffff00;
      uVar4 = *(long *)(lStack_a0 + -0x10) - lVar5;
      if (uVar17 < uVar4 || uVar17 - uVar4 == 0) {
        if (uVar17 < uVar4) {
          *(ulong *)(lStack_a0 + -0x10) = lVar5 + uVar17;
        }
      }
      else {
        FUN_10a9bba74((long *)(lStack_a0 + -0x18),uVar17 - uVar4,&uStack_ac);
      }
      func_0x000109634dec(param_3,(param_3[1] - *param_3 >> 3) * -0x5555555555555555 + 1);
      if (param_3[1] == *param_3) goto LAB_10a987fac;
      uStack_ac = uVar16;
      FUN_109febd04(param_3[1] + -0x18,&uStack_ac);
      lVar5 = 0;
      uVar17 = (lVar6 >> 3) * -0x5555555555555555;
      bVar8 = false;
      do {
        uVar4 = (param_3[1] - *param_3 >> 3) * -0x5555555555555555 - 1;
        if (uVar17 < uVar4 || uVar17 - uVar4 == 0) goto LAB_10a987fac;
        plVar14 = (long *)(lVar11 + uVar4 * 0x18);
        lVar6 = *plVar14;
        if ((ulong)(plVar14[1] - lVar6) <= (ulong)(long)*(int *)(lVar12 + lVar5))
        goto LAB_10a987fac;
        *(undefined1 *)(lVar6 + *(int *)(lVar12 + lVar5)) = 1;
        lVar5 = 4;
        bVar10 = !bVar8;
        bVar8 = true;
      } while (bVar10);
      goto LAB_10a987f6c;
    }
    uVar3 = param_1[2] - *param_1;
    uVar4 = (long)uVar3 >> 2;
    if (uVar4 <= uVar17) {
      uVar4 = uVar17;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar4 = 0x1fffffffffffffff;
    }
    plVar14 = param_1;
    FUN_10a001954();
    puVar1 = (undefined8 *)((long)plVar14 + lVar12);
    puVar13 = puVar1 + 1;
    *puVar1 = param_2;
    lVar11 = (long)puVar1 - (param_1[1] - *param_1);
    _memcpy(lVar11);
    lVar12 = *param_1;
    *param_1 = lVar11;
    param_1[1] = (long)puVar13;
    param_1[2] = (long)(plVar14 + uVar4);
    if (lVar12 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar13;
  return;
  while( true ) {
    *(undefined1 *)(*plVar14 + (long)*(int *)(lVar12 + lVar6)) = 1;
    lVar6 = 4;
    bVar8 = true;
    if (bVar10) break;
LAB_10a987ea8:
    bVar10 = bVar8;
    if ((ulong)(plVar14[1] - *plVar14) <= (ulong)(long)*(int *)(lVar12 + lVar6)) goto LAB_10a987fac;
  }
LAB_10a987f6c:
  uVar17 = (ulong)(uVar16 + 1);
  lVar12 = *param_2;
  if ((ulong)(param_2[1] - lVar12 >> 3) <= uVar17) goto LAB_10a987f84;
  goto LAB_10a987dd0;
}



/* Entry: 10a987d68; end: 10a987fcf;  */

void FUN_10a987d68(long param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  long lVar8;
  bool bVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  uint uStack_7c;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  FUN_10a1f4c34(param_3);
  lStack_78 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  lVar2 = *param_2;
  if (param_2[1] == lVar2) {
LAB_10a987f84:
    FUN_10a9bbb80(&lStack_78);
    return;
  }
  lVar11 = 0;
  lVar12 = 0;
  uVar14 = 0;
LAB_10a987dd0:
  lVar2 = lVar2 + uVar14 * 8;
  lVar3 = (lVar12 - lVar11 >> 3) * -0x5555555555555555;
  lVar4 = param_3[1] - *param_3;
  uVar13 = (uint)uVar14;
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      if (lVar5 == lVar3) goto LAB_10a987fac;
      lVar8 = 0;
      plVar10 = (long *)(lVar11 + lVar5 * 0x18);
      bVar7 = false;
      while( true ) {
        bVar9 = bVar7;
        if ((ulong)(plVar10[1] - *plVar10) <= (ulong)(long)*(int *)(lVar2 + lVar8))
        goto LAB_10a987fac;
        if (*(char *)(*plVar10 + (long)*(int *)(lVar2 + lVar8)) != '\0') break;
        lVar8 = 4;
        bVar7 = true;
        if (bVar9) {
          uStack_7c = uVar13;
          FUN_109febd04(*param_3 + lVar5 * 0x18,&uStack_7c);
          lVar4 = 0;
          bVar7 = false;
          goto LAB_10a987ea8;
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != (lVar4 >> 3) * -0x5555555555555555);
  }
  FUN_10a9bb8b4(&lStack_78,lVar3 + 1);
  lVar12 = lStack_70;
  lVar11 = lStack_78;
  lVar4 = lStack_70 - lStack_78;
  if (lVar4 == 0) {
LAB_10a987fac:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a987fb0);
    (*pcVar1)();
  }
  uVar14 = *(ulong *)(param_1 + 0x10);
  lVar3 = *(long *)(lStack_70 + -0x18);
  uStack_7c = uStack_7c & 0xffffff00;
  uVar6 = *(long *)(lStack_70 + -0x10) - lVar3;
  if (uVar14 < uVar6 || uVar14 - uVar6 == 0) {
    if (uVar14 < uVar6) {
      *(ulong *)(lStack_70 + -0x10) = lVar3 + uVar14;
    }
  }
  else {
    FUN_10a9bba74((long *)(lStack_70 + -0x18),uVar14 - uVar6,&uStack_7c);
  }
  func_0x000109634dec(param_3,(param_3[1] - *param_3 >> 3) * -0x5555555555555555 + 1);
  if (param_3[1] == *param_3) goto LAB_10a987fac;
  uStack_7c = uVar13;
  FUN_109febd04(param_3[1] + -0x18,&uStack_7c);
  lVar3 = 0;
  uVar14 = (lVar4 >> 3) * -0x5555555555555555;
  bVar7 = false;
  do {
    uVar6 = (param_3[1] - *param_3 >> 3) * -0x5555555555555555 - 1;
    if (uVar14 < uVar6 || uVar14 - uVar6 == 0) goto LAB_10a987fac;
    plVar10 = (long *)(lVar11 + uVar6 * 0x18);
    lVar4 = *plVar10;
    if ((ulong)(plVar10[1] - lVar4) <= (ulong)(long)*(int *)(lVar2 + lVar3)) goto LAB_10a987fac;
    *(undefined1 *)(lVar4 + *(int *)(lVar2 + lVar3)) = 1;
    lVar3 = 4;
    bVar9 = !bVar7;
    bVar7 = true;
  } while (bVar9);
  goto LAB_10a987f6c;
  while( true ) {
    *(undefined1 *)(*plVar10 + (long)*(int *)(lVar2 + lVar4)) = 1;
    lVar4 = 4;
    bVar7 = true;
    if (bVar9) break;
LAB_10a987ea8:
    bVar9 = bVar7;
    if ((ulong)(plVar10[1] - *plVar10) <= (ulong)(long)*(int *)(lVar2 + lVar4)) goto LAB_10a987fac;
  }
LAB_10a987f6c:
  uVar14 = (ulong)(uVar13 + 1);
  lVar2 = *param_2;
  if ((ulong)(param_2[1] - lVar2 >> 3) <= uVar14) goto LAB_10a987f84;
  goto LAB_10a987dd0;
}



/* Entry: 10a987fd0; end: 10a98814b;  */

long * FUN_10a987fd0(long *param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long *plStack_68;
  ulong uStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  lVar7 = *param_1;
  puVar5 = (undefined8 *)param_1[1];
  lVar9 = (long)puVar5 - lVar7 >> 4;
  bVar2 = param_2 < (ulong)(lVar9 * -0x5555555555555555);
  uVar1 = param_2 + lVar9 * 0x5555555555555555;
  if (bVar2 || uVar1 == 0) {
    if (bVar2) {
      param_1[1] = lVar7 + param_2 * 0x30;
    }
  }
  else if ((ulong)((param_1[2] - (long)puVar5 >> 4) * -0x5555555555555555) < uVar1) {
    if (0x555555555555555 < param_2) {
      plVar4 = param_1;
      FUN_10a90e0a4();
      pcStack_48 = FUN_10a98814c;
      *plVar4 = (long)&PTR_FUN_110c331c8;
      plStack_68 = plVar4 + 4;
      uStack_60 = param_2;
      plStack_58 = param_1;
      puStack_50 = &stack0xfffffffffffffff0;
      func_0x00010a1f4bf4(&plStack_68);
      plStack_68 = plVar4 + 1;
      func_0x00010a1f4bf4(&plStack_68);
      return plVar4;
    }
    lVar6 = param_1[2] - lVar7 >> 4;
    uVar10 = lVar6 * 0x5555555555555556;
    if (uVar10 < param_2 || uVar10 - param_2 == 0) {
      uVar10 = param_2;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar10 = 0x555555555555555;
    }
    plVar4 = param_1;
    FUN_10a90e0b8();
    puVar8 = (undefined8 *)((long)plVar4 + ((long)puVar5 - lVar7));
    lVar7 = param_2 * 0x30 + lVar9 * -0x10;
    puVar5 = puVar8;
    do {
      puVar5[1] = 0;
      *puVar5 = 0x3f800000;
      puVar5[3] = 0;
      puVar5[2] = 0x3f800000;
      puVar5[5] = 0;
      puVar5[4] = 0x3f800000;
      puVar5 = puVar5 + 6;
      lVar7 = lVar7 + -0x30;
    } while (lVar7 != 0);
    lVar7 = (long)puVar8 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    plVar3 = (long *)*param_1;
    *param_1 = lVar7;
    param_1[1] = (long)(puVar8 + uVar1 * 6);
    param_1[2] = (long)(plVar4 + uVar10 * 6);
    param_1 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar3;
    }
  }
  else {
    puVar8 = puVar5 + uVar1 * 6;
    lVar7 = param_2 * 0x30 + lVar9 * -0x10;
    do {
      puVar5[1] = 0;
      *puVar5 = 0x3f800000;
      puVar5[3] = 0;
      puVar5[2] = 0x3f800000;
      puVar5[5] = 0;
      puVar5[4] = 0x3f800000;
      puVar5 = puVar5 + 6;
      lVar7 = lVar7 + -0x30;
    } while (lVar7 != 0);
    param_1[1] = (long)puVar8;
  }
  return param_1;
}



/* Entry: 10a98814c; end: 10a9881f7;  */

undefined8 * FUN_10a98814c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c331c8;
  puStack_28 = param_1 + 4;
  func_0x00010a1f4bf4(&puStack_28);
  puStack_28 = param_1 + 1;
  func_0x00010a1f4bf4(&puStack_28);
  return param_1;
}



/* Entry: 10a9881f8; end: 10a9887bf;  */

void FUN_10a9881f8(float param_1,long param_2,long *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  float *pfVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  float *pfVar23;
  float *pfVar24;
  ulong uVar25;
  int iVar26;
  ulong uVar27;
  long lVar28;
  long *plVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  ulong uStack_108;
  ulong uStack_d8;
  int iStack_a4;
  float fStack_a0;
  float afStack_9c [3];
  
  pfVar12 = (float *)*param_3;
  if (param_3[1] - (long)pfVar12 == 0) {
LAB_10a988790:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10a988794);
    (*pcVar8)();
  }
  uVar27 = (param_3[1] - (long)pfVar12 >> 2) * -0x5555555555555555;
  fVar35 = *pfVar12;
  fVar36 = pfVar12[1];
  fVar30 = pfVar12[2];
  afStack_9c[0] = fVar35;
  fStack_a0 = fVar36;
  iVar26 = (int)uVar27;
  fVar37 = fVar30;
  if (1 < iVar26) {
    uVar19 = 1;
    fVar32 = fVar30;
LAB_10a988278:
    iVar9 = 0;
    pfVar23 = pfVar12 + uVar19 * 3;
    do {
      fVar30 = fVar35;
      if (iVar9 == 1) {
        fVar30 = fVar36;
      }
      fVar33 = fVar37;
      if (iVar9 != 2) {
        fVar33 = fVar30;
      }
      if (uVar27 < uVar19 || uVar27 - uVar19 == 0) goto LAB_10a988790;
      if (iVar9 == 1) {
        fVar30 = pfVar23[1];
        fVar36 = fVar30;
        if (fVar33 <= fVar30) {
          fVar36 = fVar33;
        }
        pfVar24 = &fStack_a0;
      }
      else {
        if (iVar9 == 2) goto LAB_10a9882e4;
        fVar30 = *pfVar23;
        fVar35 = fVar30;
        if (fVar33 <= fVar30) {
          fVar35 = fVar33;
        }
        pfVar24 = afStack_9c;
      }
      if (fVar30 <= *pfVar24) {
        fVar30 = *pfVar24;
      }
      *pfVar24 = fVar30;
      iVar9 = iVar9 + 1;
    } while( true );
  }
LAB_10a98831c:
  fVar33 = (afStack_9c[0] - fVar35) / 50.0;
  fVar34 = (fStack_a0 - fVar36) / 50.0;
  fVar32 = (fVar30 - fVar37) / 50.0;
  if (fVar32 <= fVar34) {
    fVar32 = fVar34;
  }
  if (fVar32 <= fVar33) {
    fVar32 = fVar33;
  }
  if (fVar32 <= param_1) {
    fVar32 = param_1;
  }
  iVar9 = (int)((afStack_9c[0] - fVar35) / fVar32);
  if (0x31 < iVar9) {
    iVar9 = 0x32;
  }
  iVar10 = (int)((fStack_a0 - fVar36) / fVar32);
  iVar17 = (int)((fVar30 - fVar37) / fVar32);
  if (0x31 < iVar10) {
    iVar10 = 0x32;
  }
  if (0x31 < iVar17) {
    iVar17 = 0x32;
  }
  iVar4 = iVar9 * iVar10;
  uVar19 = (ulong)(uint)(iVar4 * iVar17);
  if (0 < iVar4 * iVar17) {
    lVar21 = (*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 3) * -0x5555555555555555;
    puVar13 = (undefined8 *)(*(long *)(param_2 + 8) + 8);
    do {
      if (lVar21 == 0) goto LAB_10a988790;
      *puVar13 = puVar13[-1];
      lVar21 = lVar21 + -1;
      uVar19 = uVar19 - 1;
      puVar13 = puVar13 + 3;
    } while (uVar19 != 0);
  }
  iStack_a4 = 0;
  if (0 < iVar26) {
    uVar5 = iVar9 - 1;
    uVar6 = iVar10 - 1;
    uVar7 = iVar17 - 1;
    do {
      uVar19 = (param_3[1] - *param_3 >> 2) * -0x5555555555555555;
      if (uVar19 < (ulong)(long)iStack_a4 || uVar19 - (long)iStack_a4 == 0) goto LAB_10a988790;
      pfVar12 = (float *)(*param_3 + (long)iStack_a4 * 0xc);
      uVar11 = (uint)((*pfVar12 - fVar35) / fVar32);
      uVar1 = uVar5;
      if ((int)uVar11 <= (int)uVar5) {
        uVar1 = uVar11;
      }
      uVar14 = (uint)((pfVar12[1] - fVar36) / fVar32);
      uVar11 = uVar6;
      if ((int)uVar14 <= (int)uVar6) {
        uVar11 = uVar14;
      }
      uVar18 = (uint)((pfVar12[2] - fVar37) / fVar32);
      uVar14 = uVar7;
      if ((int)uVar18 <= (int)uVar7) {
        uVar14 = uVar18;
      }
      iVar10 = (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) +
               (uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)) * iVar9 +
               (uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) * iVar4;
      uVar19 = (*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 3) * -0x5555555555555555;
      if (uVar19 < (ulong)(long)iVar10 || uVar19 - (long)iVar10 == 0) goto LAB_10a988790;
      func_0x000109febdc8(*(long *)(param_2 + 8) + (long)iVar10 * 0x18,&iStack_a4);
      iStack_a4 = iStack_a4 + 1;
    } while (iStack_a4 < iVar26);
    uVar19 = 0;
    do {
      uVar15 = (*(long *)(param_2 + 0x28) - *(long *)(param_2 + 0x20) >> 3) * -0x5555555555555555;
      if (uVar15 < uVar19 || uVar15 - uVar19 == 0) goto LAB_10a988790;
      puVar13 = (undefined8 *)(*(long *)(param_2 + 0x20) + uVar19 * 0x18);
      puVar13[1] = *puVar13;
      uVar15 = (param_3[1] - *param_3 >> 2) * -0x5555555555555555;
      if (uVar15 < uVar19 || uVar15 - uVar19 == 0) goto LAB_10a988790;
      pfVar12 = (float *)(*param_3 + uVar19 * 0xc);
      uVar11 = (uint)((pfVar12[2] - fVar37) / fVar32);
      uVar1 = uVar7;
      if ((int)uVar11 <= (int)uVar7) {
        uVar1 = uVar11;
      }
      uVar11 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
      if ((int)uVar1 < 2) {
        uVar1 = 1;
      }
      uVar14 = uVar7;
      if ((int)(uVar11 + 1) <= (int)uVar7) {
        uVar14 = uVar11 + 1;
      }
      if ((int)(uVar1 - 1) <= (int)uVar14) {
        uVar11 = (uint)((pfVar12[1] - fVar36) / fVar32);
        iVar26 = 0;
        if (param_4 != 0) {
          iVar26 = (int)uVar19 / param_4;
        }
        uVar18 = uVar6;
        if ((int)uVar11 <= (int)uVar6) {
          uVar18 = uVar11;
        }
        uVar11 = uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU);
        uVar22 = (uint)((*pfVar12 - fVar35) / fVar32);
        uVar3 = uVar5;
        if ((int)uVar22 <= (int)uVar5) {
          uVar3 = uVar22;
        }
        uVar22 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
        if ((int)uVar18 < 2) {
          uVar18 = 1;
        }
        uVar2 = uVar6;
        if ((int)(uVar11 + 1) <= (int)uVar6) {
          uVar2 = uVar11 + 1;
        }
        if ((int)uVar3 < 2) {
          uVar3 = 1;
        }
        uVar11 = uVar5;
        if ((int)(uVar22 + 1) <= (int)uVar5) {
          uVar11 = uVar22 + 1;
        }
        uStack_108 = (ulong)uVar1 - 1;
        do {
          if ((int)(uVar18 - 1) <= (int)uVar2) {
            uStack_d8 = (ulong)uVar18 - 1;
            do {
              if ((int)(uVar3 - 1) <= (int)uVar11) {
                uVar15 = (ulong)uVar3 - 1;
                do {
                  uVar25 = uStack_108 * (long)iVar4 + uStack_d8 * (long)iVar9 + uVar15;
                  uVar20 = (*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 3) *
                           -0x5555555555555555;
                  if (uVar20 < uVar25 || uVar20 - uVar25 == 0) goto LAB_10a988790;
                  plVar29 = (long *)(*(long *)(param_2 + 8) + uVar25 * 0x18);
                  lVar21 = *plVar29;
                  lVar16 = plVar29[1];
                  if (lVar16 != lVar21) {
                    lVar28 = 0;
                    uVar25 = 0;
                    do {
                      iVar10 = *(int *)(lVar21 + lVar28);
                      iVar17 = 0;
                      if (param_4 != 0) {
                        iVar17 = iVar10 / param_4;
                      }
                      if (iVar17 != iVar26) {
                        uVar20 = (param_3[1] - *param_3 >> 2) * -0x5555555555555555;
                        if (uVar20 < (ulong)(long)iVar10 || uVar20 - (long)iVar10 == 0)
                        goto LAB_10a988790;
                        puVar13 = (undefined8 *)(*param_3 + (long)iVar10 * 0xc);
                        fVar30 = *(float *)(puVar13 + 1) - pfVar12[2];
                        uVar31 = *puVar13;
                        fVar33 = (float)uVar31 - (float)*(undefined8 *)pfVar12;
                        fVar34 = (float)((ulong)uVar31 >> 0x20) -
                                 (float)((ulong)*(undefined8 *)pfVar12 >> 0x20);
                        if (fVar33 * fVar33 + fVar34 * fVar34 + fVar30 * fVar30 < param_1 * param_1)
                        {
                          uVar20 = (*(long *)(param_2 + 0x28) - *(long *)(param_2 + 0x20) >> 3) *
                                   -0x5555555555555555;
                          if (uVar20 < uVar19 || uVar20 - uVar19 == 0) goto LAB_10a988790;
                          func_0x000109febdc8(*(long *)(param_2 + 0x20) + uVar19 * 0x18,
                                              lVar21 + lVar28);
                          lVar21 = *plVar29;
                          lVar16 = plVar29[1];
                        }
                      }
                      uVar25 = uVar25 + 1;
                      lVar28 = lVar28 + 4;
                    } while (uVar25 < (ulong)(lVar16 - lVar21 >> 2));
                  }
                  uVar15 = uVar15 + 1;
                } while (uVar15 != uVar11 + 1);
              }
              uStack_d8 = uStack_d8 + 1;
            } while (uStack_d8 != uVar2 + 1);
          }
          uStack_108 = uStack_108 + 1;
        } while (uStack_108 != uVar14 + 1);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != (uVar27 & 0x7fffffff));
  }
  return;
LAB_10a9882e4:
  fVar30 = pfVar23[2];
  fVar37 = fVar30;
  if (fVar33 <= fVar30) {
    fVar37 = fVar33;
  }
  if (fVar30 <= fVar32) {
    fVar30 = fVar32;
  }
  uVar19 = uVar19 + 1;
  fVar32 = fVar30;
  if (uVar19 == (uVar27 & 0x7fffffff)) goto LAB_10a98831c;
  goto LAB_10a988278;
}



/* Entry: 10a9887c0; end: 10a988a2f;  */

undefined8 * FUN_10a9887c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c31820;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a988a30; end: 10a988a33;  */

undefined8 * FUN_10a988a30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c31a98;
  param_1[3] = &PTR_FUN_110c31af8;
  FUN_10a991b44(param_1 + 0x28);
  FUN_10a991b44(param_1 + 0x26);
  FUN_10a9917e0(param_1 + 0x24);
  FUN_10a9917e0(param_1 + 0x22);
  FUN_10a004cfc(param_1 + 0x20);
  FUN_10a004cfc(param_1 + 0x1e);
  func_0x00010a98ecf8(param_1 + 0x1c);
  FUN_10a991f9c(param_1 + 0x1a);
  func_0x00010a98b8b4(param_1 + 0x18);
  func_0x00010a991f24(param_1[0x16]);
  func_0x00010a991ea8(param_1[0x13]);
  func_0x00010a004e5c(param_1 + 0x10);
  func_0x00010a05a86c(param_1 + 0xe);
  FUN_10a98ce14(param_1 + 0xc);
  if (param_1[0xb] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  param_1[3] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[6] = 0;
  }
  func_0x00010a004e5c(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a988a34; end: 10a988a47;  */

void FUN_10a988a34(void)

{
  FUN_10a98a87c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a988a48; end: 10a988a4f;  */

undefined8 * FUN_10a988a48(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -3;
  *puVar1 = &PTR_FUN_110c31a98;
  *param_1 = &PTR_FUN_110c31af8;
  FUN_10a991b44(param_1 + 0x25);
  FUN_10a991b44(param_1 + 0x23);
  FUN_10a9917e0(param_1 + 0x21);
  FUN_10a9917e0(param_1 + 0x1f);
  FUN_10a004cfc(param_1 + 0x1d);
  FUN_10a004cfc(param_1 + 0x1b);
  func_0x00010a98ecf8(param_1 + 0x19);
  FUN_10a991f9c(param_1 + 0x17);
  func_0x00010a98b8b4(param_1 + 0x15);
  func_0x00010a991f24(param_1[0x13]);
  func_0x00010a991ea8(param_1[0x10]);
  func_0x00010a004e5c(param_1 + 0xd);
  func_0x00010a05a86c(param_1 + 0xb);
  FUN_10a98ce14(param_1 + 9);
  if (param_1[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  *param_1 = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  *puVar1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -2);
  return puVar1;
}



/* Entry: 10a988a50; end: 10a988a67;  */

void FUN_10a988a50(long param_1)

{
  FUN_10a98a87c(param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a988a68; end: 10a988ba7;  */

undefined8 * FUN_10a988a68(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a988ba8; end: 10a988bab;  */

undefined8 * FUN_10a988ba8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c31bd0;
  param_1[3] = &PTR_FUN_110c31c30;
  FUN_10a997490(param_1 + 0x22);
  FUN_10a997490(param_1 + 0x20);
  FUN_10a004cfc(param_1 + 0x1e);
  FUN_10a004cfc(param_1 + 0x1c);
  FUN_10a9978e0(param_1 + 0x1a);
  func_0x00010a98b8b4(param_1 + 0x18);
  func_0x00010a997870(param_1[0x16]);
  func_0x00010a9977f4(param_1[0x13]);
  func_0x00010a004e5c(param_1 + 0x10);
  func_0x00010a05a86c(param_1 + 0xe);
  FUN_10a98ce14(param_1 + 0xc);
  if (param_1[0xb] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  param_1[3] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[6] = 0;
  }
  func_0x00010a004e5c(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a988bac; end: 10a988bbf;  */

void FUN_10a988bac(void)

{
  func_0x00010a98a970();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a988bc0; end: 10a988bc7;  */

undefined8 * FUN_10a988bc0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -3;
  *puVar1 = &PTR_FUN_110c31bd0;
  *param_1 = &PTR_FUN_110c31c30;
  FUN_10a997490(param_1 + 0x1f);
  FUN_10a997490(param_1 + 0x1d);
  FUN_10a004cfc(param_1 + 0x1b);
  FUN_10a004cfc(param_1 + 0x19);
  FUN_10a9978e0(param_1 + 0x17);
  func_0x00010a98b8b4(param_1 + 0x15);
  func_0x00010a997870(param_1[0x13]);
  func_0x00010a9977f4(param_1[0x10]);
  func_0x00010a004e5c(param_1 + 0xd);
  func_0x00010a05a86c(param_1 + 0xb);
  FUN_10a98ce14(param_1 + 9);
  if (param_1[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  *param_1 = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  *puVar1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -2);
  return puVar1;
}



/* Entry: 10a988bc8; end: 10a988bdf;  */

void FUN_10a988bc8(long param_1)

{
  func_0x00010a98a970(param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a988be0; end: 10a988c3f;  */

undefined8 * FUN_10a988be0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a988c40; end: 10a988c43;  */

undefined8 * FUN_10a988c40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c31c58;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  func_0x00010a12c080(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a988c44; end: 10a988c57;  */

void FUN_10a988c44(void)

{
  func_0x00010a98aa4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a988c58; end: 10a988cef;  */

undefined8 * FUN_10a988c58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c332e8;
  func_0x000107c34ee4(param_1 + 3,param_1[4]);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a988cf0; end: 10a988cf3;  */

undefined8 * FUN_10a988cf0(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_110c31cb0;
  param_1[9] = &PTR_FUN_110c31ce8;
  if (*(char *)((long)param_1 + 0x97) < '\0') {
    __ZdlPv(param_1[0x10]);
  }
  FUN_10a99e77c(param_1 + 0xc);
  param_1[9] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 10);
  *param_1 = &PTR_FUN_110c33b08;
  if ((ulong)*(byte *)(param_1 + 8) < 4) {
    (*(code *)(&PTR_FUN_110bbab80)[*(byte *)(param_1 + 8)])(param_1 + 5);
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      __ZdlPv(param_1[1]);
    }
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a96fac0);
  (*pcVar1)();
}



/* Entry: 10a988cf4; end: 10a988d07;  */

void FUN_10a988cf4(void)

{
  func_0x00010a98aaa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a988d08; end: 10a988d0f;  */

undefined8 * FUN_10a988d08(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + -9;
  *puVar2 = &PTR_FUN_110c31cb0;
  *param_1 = &PTR_FUN_110c31ce8;
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  FUN_10a99e77c(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  *puVar2 = &PTR_FUN_110c33b08;
  if ((ulong)*(byte *)(param_1 + -1) < 4) {
    (*(code *)(&PTR_FUN_110bbab80)[*(byte *)(param_1 + -1)])(param_1 + -4);
    if (*(char *)((long)param_1 + -0x29) < '\0') {
      __ZdlPv(param_1[-8]);
    }
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a96fac0);
  (*pcVar1)();
}



/* Entry: 10a988d10; end: 10a988d27;  */

void FUN_10a988d10(long param_1)

{
  func_0x00010a98aaa4(param_1 + -0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a988d28; end: 10a988d2b;  */

undefined8 * FUN_10a988d28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c31d40;
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  FUN_10a99e77c(param_1 + 9);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a988d2c; end: 10a988d3f;  */

void FUN_10a988d2c(void)

{
  func_0x00010a98ab04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a988d40; end: 10a988d43;  */

undefined8 * FUN_10a988d40(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c35450;
  puStack_28 = param_1 + 0x11;
  FUN_10a352c44(&puStack_28);
  if ((ulong)*(byte *)(param_1 + 0x10) < 4) {
    (*(code *)(&PTR_FUN_110bbab80)[*(byte *)(param_1 + 0x10)])(param_1 + 0xd);
    func_0x000104c4f944(param_1 + 8);
    func_0x000109380ffc(param_1 + 7,*(undefined1 *)(param_1 + 6));
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      __ZdlPv(param_1[3]);
    }
    *param_1 = &PTR_DAT_110b17898;
    func_0x00010a004dac(param_1 + 1);
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a98ac18);
  (*pcVar1)();
}



/* Entry: 10a988d44; end: 10a988d57;  */

void FUN_10a988d44(void)

{
  func_0x00010a98ab78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a988d58; end: 10a988d5b;  */

undefined8 * FUN_10a988d58(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c32260;
  puStack_28 = param_1 + 0xe;
  FUN_10a352c44(&puStack_28);
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  func_0x000104c4f944(param_1 + 6);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a988d5c; end: 10a988d6f;  */

void FUN_10a988d5c(void)

{
  func_0x00010a98ac18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a988d70; end: 10a988d73;  */

undefined8 * FUN_10a988d70(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_110c33388;
  param_1[9] = &PTR_FUN_110c333b8;
  if (*(char *)((long)param_1 + 0x9f) < '\0') {
    __ZdlPv(param_1[0x11]);
  }
  func_0x000104c4f944(param_1 + 0xc);
  param_1[9] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 10);
  *param_1 = &PTR_FUN_110c33b08;
  if ((ulong)*(byte *)(param_1 + 8) < 4) {
    (*(code *)(&PTR_FUN_110bbab80)[*(byte *)(param_1 + 8)])(param_1 + 5);
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      __ZdlPv(param_1[1]);
    }
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a96fac0);
  (*pcVar1)();
}



/* Entry: 10a988d74; end: 10a988d87;  */

void FUN_10a988d74(void)

{
  func_0x00010a98ac94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a988d88; end: 10a988d8f;  */

undefined8 * FUN_10a988d88(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + -9;
  *puVar2 = &PTR_FUN_110c33388;
  *param_1 = &PTR_FUN_110c333b8;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  func_0x000104c4f944(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  *puVar2 = &PTR_FUN_110c33b08;
  if ((ulong)*(byte *)(param_1 + -1) < 4) {
    (*(code *)(&PTR_FUN_110bbab80)[*(byte *)(param_1 + -1)])(param_1 + -4);
    if (*(char *)((long)param_1 + -0x29) < '\0') {
      __ZdlPv(param_1[-8]);
    }
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a96fac0);
  (*pcVar1)();
}



/* Entry: 10a988d90; end: 10a988da7;  */

void FUN_10a988d90(long param_1)

{
  func_0x00010a98ac94(param_1 + -0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a988da8; end: 10a988dab;  */

undefined8 * FUN_10a988da8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c322b8;
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
  }
  func_0x000104c4f944(param_1 + 7);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a988dac; end: 10a988dbf;  */

void FUN_10a988dac(void)

{
  func_0x00010a98acf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a988dc0; end: 10a9895ef;  */

undefined8 * FUN_10a988dc0(undefined8 *param_1)

{
  func_0x000104c4f944(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9895f0; end: 10a9895f7;  */

undefined8 FUN_10a9895f0(void)

{
  return 1;
}



/* Entry: 10a9895f8; end: 10a98969b;  */

undefined8 * FUN_10a9895f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_DAT_110c32770;
  *param_1 = &PTR_FUN_110c32818;
  param_1[5] = &PTR_FUN_110c32870;
  func_0x00010a05a86c(param_1 + 0x1d);
  func_0x00010a05248c(param_1 + 0x1b);
  *puVar1 = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return puVar1;
}



/* Entry: 10a98969c; end: 10a9896a3;  */

undefined8 FUN_10a98969c(void)

{
  return 1;
}


