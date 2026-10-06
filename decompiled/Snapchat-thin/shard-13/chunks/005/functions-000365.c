/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a7ec630; end: 10a7ec93f;  */

void FUN_10a7ec630(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f66222f,0x30);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c1e758;
  pppuVar2 = (undefined8 ***)&UNK_10f678718;
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
  uStack_58 = 0x124;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c1e758;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bb3788;
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
    FUN_10a052828(param_1,&DAT_10f679207,FUN_10a810154,FUN_10a810258);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f679092,FUN_10a81044c,FUN_10a81050c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644824,FUN_10a8105d0,FUN_10a810688);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f679221,FUN_10a8107a4,FUN_10a81085c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f67922c,FUN_10a81091c,FUN_10a8109d4);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f66222f,0x30);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a7ec924);
  (*pcVar6)();
}



/* Entry: 10a7ec940; end: 10a7ec98b;  */

long FUN_10a7ec940(long param_1)

{
  FUN_10a0da1b8(param_1 + 0x58,*(undefined8 *)(param_1 + 0x60));
  func_0x00010a061678(param_1 + 0x48);
  FUN_10a0617bc(param_1 + 0x28);
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
  return param_1;
}



/* Entry: 10a7ec98c; end: 10a7eccab;  */

undefined8 * FUN_10a7ec98c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined *puStack_50;
  long *plStack_48;
  
  param_1[0x6f] = &PTR_FUN_110c383b8;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  *(undefined2 *)(param_1 + 0x72) = 0x100;
  puVar6 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110c1c628,param_2);
  puVar1 = puVar6 + 0x51;
  puVar6[0x55] = 0;
  puVar6[0x52] = 0;
  *puVar1 = 0;
  puVar6[0x54] = 0;
  puVar6[0x53] = 0;
  FUN_10a0040d0(puVar1,&PTR_PTR_110c1c648);
  puStack_50 = (undefined *)((ulong)puStack_50 & 0xffffffffffff0000);
  FUN_10a00db68(param_1 + 0x56,param_2,&puStack_50);
  *param_1 = &PTR_FUN_110c1c348;
  param_1[2] = &PTR_FUN_110c1c498;
  param_1[5] = &PTR_FUN_110c1c4c8;
  param_1[0x6f] = &PTR_FUN_110c1c5e8;
  param_1[0x15] = &PTR_FUN_110c1c520;
  param_1[0x51] = &PTR_FUN_110c1c548;
  param_1[0x56] = &PTR_DAT_110c1c590;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  plStack_48 = (long *)0x3f80000000000000;
  puStack_50 = (undefined *)0x0;
  FUN_10a7f812c(param_1 + 0x5f,param_2,1,&UNK_10f679eff,0x2e,&puStack_50);
  param_1[0x6d] = 0;
  *(undefined2 *)(param_1 + 0x6e) = 1;
  plVar7 = (long *)((long)puVar1 + *(long *)(param_1[0x51] + -0x18));
  if ((*(byte *)(plVar7 + 3) & 1) == 0) {
    *(undefined1 *)(plVar7 + 3) = 1;
    plVar7[2] = param_2;
    if (param_2 != 0) {
      plVar7[1] = *(long *)(*(long *)(param_2 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar7 + 0x18))();
  }
  FUN_10a5ae998(param_1[0x54],&PTR_DAT_110b99f08,param_2,puVar1);
  param_1[0x57] = param_2;
  FUN_10a5ae998(param_1[0x59],&PTR_DAT_110b9f720,param_2,param_1 + 0x56);
  lVar8 = *(long *)(*(long *)(param_2 + 0x100) + 0x260);
  puStack_50 = &UNK_10f653c20;
  plStack_48 = (long *)0x21;
  if (lVar8 != 0) {
    FUN_10a026ab4(param_1 + 0x5d,lVar8 + 0x118);
    FUN_10a1da3a4(param_1,1,1,0,0,4,0,0);
    *(undefined4 *)((long)param_1 + 0x74) = 0;
    lVar8 = 0x80;
    __Znwm();
    FUN_10ab0e794();
    plVar7 = (long *)param_1[0x6d];
    param_1[0x6d] = lVar8;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
      lVar8 = param_1[0x6d];
    }
    *(undefined4 *)(lVar8 + 100) = 1;
    *(undefined4 *)(lVar8 + 0x20) = 0x3ba3d70a;
    *(undefined8 *)(lVar8 + 0x74) = 0x3f6666663e99999a;
    FUN_10a7ea4c0(&puStack_50,param_2,0);
    func_0x00010a4c390c(param_1 + 0x5b,&puStack_50);
    plVar7 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar2 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    return param_1;
  }
  FUN_10a0edfc4(&puStack_50);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a7ecc18);
  (*pcVar5)();
}



/* Entry: 10a7eccac; end: 10a7ecdb7;  */

void FUN_10a7eccac(undefined8 param_1)

{
  undefined **appuStack_150 [2];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_109febc44(appuStack_150);
  FUN_10a002568(&ppuStack_140,&UNK_10f679237,0x35);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_10a002568();
  func_0x00010a002480(param_1,&ppuStack_138,&uStack_31);
  appuStack_150[0] = &PTR_SUB_1108a5a38;
  ppuStack_140 = &PTR_DAT_1108a5a60;
  appuStack_d0[0] = &PTR_DAT_1108a5a88;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_150,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10a7ecdb8; end: 10a7ecdbf;  */

void FUN_10a7ecdb8(undefined8 param_1)

{
  undefined **appuStack_150 [2];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_109febc44(appuStack_150);
  FUN_10a002568(&ppuStack_140,&UNK_10f679237,0x35);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_10a002568();
  func_0x00010a002480(param_1,&ppuStack_138,&uStack_31);
  appuStack_150[0] = &PTR_SUB_1108a5a38;
  ppuStack_140 = &PTR_DAT_1108a5a60;
  appuStack_d0[0] = &PTR_DAT_1108a5a88;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_150,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10a7ecdc0; end: 10a7ecec7;  */

void FUN_10a7ecdc0(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puStack_b0;
  long *plStack_a8;
  long lStack_a0;
  undefined ***pppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c1c668,0);
  *(char *)(param_1 + 0x370) = (char)plVar4;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c1c688,0);
  *(char *)(param_1 + 0x371) = (char)plVar4;
  FUN_10a80fc44(param_2,param_1 + 0x2d8);
  pcStack_78 = FUN_10a810a94;
  ppuStack_70 = &PTR_DAT_110c1ff90;
  ppuVar7 = &PTR_DAT_110c1c6a8;
  lStack_68 = param_1;
  FUN_10a7e353c(param_2,&PTR_DAT_110c1c6a8,&pcStack_78,0);
  pppuVar5 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  pppuVar6 = pppuVar5;
  __Unwind_Resume();
  pcStack_88 = FUN_10a7ecec8;
  puStack_b0 = &UNK_10f66222f;
  plStack_a8 = (long *)0x30;
  lStack_a0 = param_1;
  pppuStack_98 = pppuVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  (**(code **)(*ppuVar7 + 0x30))(ppuVar7,&PTR_DAT_110c1f658,&puStack_b0);
  (**(code **)(*ppuVar7 + 0x70))(ppuVar7,&PTR_DAT_110c1c668,*(undefined1 *)(pppuVar6 + 0x6e));
  (**(code **)(*ppuVar7 + 0x70))(ppuVar7,&PTR_DAT_110c1c688,*(undefined1 *)((long)pppuVar6 + 0x371))
  ;
  FUN_10a4c3afc(ppuVar7,&PTR_DAT_110bb3700,pppuVar6 + 0x5b,&UNK_10f65ce18,0x19);
  FUN_10a7ecfec(&puStack_b0,pppuVar6);
  FUN_10a009b20(ppuVar7,&PTR_DAT_110c1c6a8,&puStack_b0,&UNK_10f63349d,0xe);
  plVar4 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar1 = plStack_a8 + 1;
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
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a7ecec8; end: 10a7ecfeb;  */

void FUN_10a7ecec8(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined *puStack_30;
  long *plStack_28;
  
  puStack_30 = &UNK_10f66222f;
  plStack_28 = (long *)0x30;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c1f658,&puStack_30);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c1c668,*(undefined1 *)(param_1 + 0x370));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c1c688,*(undefined1 *)(param_1 + 0x371));
  FUN_10a4c3afc(param_2,&PTR_DAT_110bb3700,param_1 + 0x2d8,&UNK_10f65ce18,0x19);
  FUN_10a7ecfec(&puStack_30,param_1);
  FUN_10a009b20(param_2,&PTR_DAT_110c1c6a8,&puStack_30,&UNK_10f63349d,0xe);
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



/* Entry: 10a7ecfec; end: 10a7ed063;  */

void FUN_10a7ecfec(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined1 *puStack_28;
  
  uStack_2a = 3;
  puStack_28 = &uStack_2a;
  lVar4 = *(long *)(param_2 + 0x2d8) + 0x108;
  FUN_10a814778(lVar4,&uStack_2a,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
  lVar5 = *(long *)(lVar4 + 0x20);
  uVar6 = *(undefined8 *)(lVar4 + 0x18);
  param_1[1] = *(undefined8 *)(lVar4 + 0x20);
  *param_1 = uVar6;
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
  return;
}



/* Entry: 10a7ed064; end: 10a7ed0c7;  */

undefined1 * FUN_10a7ed064(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_80 [44];
  uint uStack_54;
  char cStack_48;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  ppuVar1 = &puStack_20;
  if ((*(int *)(param_1 + 0x1e8) == 1) && (*(int *)(param_1 + 0x1ec) == 1)) {
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x100) + 0x260);
    puStack_20 = &UNK_10f653c20;
    uStack_18 = 0x21;
    if (lVar4 == 0) {
      FUN_10a0edfc4();
      puVar3 = auStack_80;
      FUN_10a7e2370(*(long *)((long)ppuVar1 + 0x2d8) + 0xe8,3);
      puVar2 = (undefined1 *)(*(long *)((long)ppuVar1 + 0x2d8) + 0xe8);
      FUN_10a7e26a4(puVar2,3);
      if ((int)puVar2 != 0) {
        FUN_10a7eb2e8(auStack_80,*(undefined8 *)((long)ppuVar1 + 0x2d8));
        if (cStack_48 == '\x01') {
          uStack_54 = uStack_54 | 0x20;
          if ((*(byte *)(param_2 + 0x2b0) & 1) == 0) {
            *(undefined8 *)(param_2 + 0x298) = 0;
            *(undefined8 *)(param_2 + 0x2a0) = 0;
            *(undefined8 *)(param_2 + 0x2a8) = 0;
            *(undefined1 *)(param_2 + 0x2b0) = 1;
          }
          FUN_10aad0050((undefined8 *)(param_2 + 0x298),auStack_80);
        }
        func_0x00010a7fd678(auStack_80);
        puVar2 = puVar3;
      }
      return puVar2;
    }
    puVar2 = (undefined1 *)(lVar4 + 0x118);
  }
  else {
    puVar2 = (undefined1 *)(param_1 + 0x2e8);
  }
  return puVar2;
}



/* Entry: 10a7ed0c8; end: 10a7ed177;  */

void FUN_10a7ed0c8(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_60 [44];
  uint uStack_34;
  char cStack_28;
  
  FUN_10a7e2370(*(long *)(param_1 + 0x2d8) + 0xe8,3);
  lVar1 = *(long *)(param_1 + 0x2d8) + 0xe8;
  FUN_10a7e26a4(lVar1,3);
  if ((int)lVar1 != 0) {
    FUN_10a7eb2e8(auStack_60,*(undefined8 *)(param_1 + 0x2d8));
    if (cStack_28 == '\x01') {
      uStack_34 = uStack_34 | 0x20;
      if ((*(byte *)(param_2 + 0x2b0) & 1) == 0) {
        *(undefined8 *)(param_2 + 0x298) = 0;
        *(undefined8 *)(param_2 + 0x2a0) = 0;
        *(undefined8 *)(param_2 + 0x2a8) = 0;
        *(undefined1 *)(param_2 + 0x2b0) = 1;
      }
      FUN_10aad0050((undefined8 *)(param_2 + 0x298),auStack_60);
    }
    func_0x00010a7fd678(auStack_60);
  }
  return;
}



/* Entry: 10a7ed178; end: 10a7ed17f;  */

void FUN_10a7ed178(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_60 [44];
  uint uStack_34;
  char cStack_28;
  
  FUN_10a7e2370(*(long *)(param_1 + 0x50) + 0xe8,3);
  lVar1 = *(long *)(param_1 + 0x50) + 0xe8;
  FUN_10a7e26a4(lVar1,3);
  if ((int)lVar1 != 0) {
    FUN_10a7eb2e8(auStack_60,*(undefined8 *)(param_1 + 0x50));
    if (cStack_28 == '\x01') {
      uStack_34 = uStack_34 | 0x20;
      if ((*(byte *)(param_2 + 0x2b0) & 1) == 0) {
        *(undefined8 *)(param_2 + 0x298) = 0;
        *(undefined8 *)(param_2 + 0x2a0) = 0;
        *(undefined8 *)(param_2 + 0x2a8) = 0;
        *(undefined1 *)(param_2 + 0x2b0) = 1;
      }
      FUN_10aad0050((undefined8 *)(param_2 + 0x298),auStack_60);
    }
    func_0x00010a7fd678(auStack_60);
  }
  return;
}



/* Entry: 10a7ed180; end: 10a7ed4ff;  */

void FUN_10a7ed180(long param_1,long param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ulong *puVar11;
  long *plVar12;
  uint uVar13;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long lStack_88;
  long *plStack_80;
  uint uStack_74;
  uint uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined1 uStack_5c;
  undefined8 uStack_58;
  
  FUN_10a1da3a4(param_1,1,1,0,0,4,0,0);
  *(undefined4 *)(param_1 + 0x74) = 2;
  lVar6 = *(long *)(param_2 + 0x78);
  FUN_10aacfcb0(lVar6,"body",4);
  if (lVar6 == 0) {
    lVar10 = 0;
    plStack_b8 = (long *)0x0;
  }
  else {
    lVar10 = *(long *)(lVar6 + 0x18);
    plStack_b8 = *(long **)(lVar6 + 0x20);
    if (plStack_b8 != (long *)0x0) {
      plVar7 = plStack_b8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  lVar6 = lVar10;
  FUN_10aacfdd8(lVar10,*(undefined4 *)(*(long *)(param_1 + 0x2d8) + 0xe0));
  if (lVar6 != 0) {
    ppuVar1 = &PTR_PTR_1132cf7b0;
    if (*(undefined ***)(lVar6 + 200) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(lVar6 + 200);
    }
    if ((*(int *)(ppuVar1 + 6) != 0) && (*(int *)((long)ppuVar1 + 0x34) != 0)) {
      uVar8 = *(ulong *)(lVar10 + 0xa0);
      FUN_10a1da3a4(param_1,uVar8,uVar8 >> 0x20,0,0,4,0,0);
      plVar12 = *(long **)(param_1 + 0x2e8);
      plVar7 = plVar12;
      (**(code **)(*plVar12 + 0x28))();
      (**(code **)(*plVar12 + 0x30))();
      uVar13 = (uint)plVar7;
      if (uVar13 < 2) {
        uVar13 = 1;
      }
      uVar5 = (uint)plVar12;
      if (uVar5 < 2) {
        uVar5 = 1;
      }
      uVar9 = (uint)(uVar8 >> 0x20);
      if (uVar13 != (uint)uVar8 || uVar5 != uVar9) {
        lVar6 = 0;
        FUN_10a2421c8();
        uStack_58 = 0x100000000;
        uStack_64 = 0x100000001;
        uStack_6c = 0x400000001;
        uStack_5c = 0;
        uStack_74 = (uint)uVar8;
        uStack_70 = uVar9;
        FUN_10a048f04(&lStack_b0,*(undefined8 *)(lVar6 + 0x1e0),&uStack_74);
        *(undefined1 *)(lStack_b0 + 0x19) = 1;
        FUN_10a00e5c4(param_1 + 0x2e8,&lStack_b0);
        if (plStack_a8 != (long *)0x0) {
          plVar7 = plStack_a8 + 1;
          do {
            lVar6 = *plVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
          }
        }
      }
      puVar11 = (ulong *)((ulong)ppuVar1[5] & 0xfffffffffffffffc);
      if (*(char *)((long)puVar11 + 0x17) < '\0') {
        puVar11 = (ulong *)*puVar11;
      }
      uVar13 = *(uint *)(ppuVar1 + 6);
      uVar5 = *(uint *)((long)ppuVar1 + 0x34);
      puVar4 = ppuVar1[6];
      FUN_10aaca044(&lStack_b0,ppuVar1[4],(long)*(int *)(ppuVar1 + 3));
      plVar12 = *(long **)(param_1 + 0x340);
      plVar7 = plVar12;
      (**(code **)(*plVar12 + 0xb0))();
      (**(code **)(*plVar12 + 0xb8))();
      if ((uint)plVar7 != uVar13 || (uint)plVar12 != uVar5) {
        lVar6 = *(long *)(param_1 + 0x2f8);
        FUN_10a2421c8();
        uStack_58 = 0x100000000;
        uStack_6c = CONCAT44(*(undefined4 *)(param_1 + 0x300),1);
        uStack_64 = 0x100000000;
        uStack_5c = 0;
        uStack_74 = uVar13;
        uStack_70 = uVar5;
        FUN_10a048f04(&lStack_88,*(undefined8 *)(lVar6 + 0x1e0),&uStack_74);
        *(undefined1 *)(lStack_88 + 0x19) = 1;
        FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x340),&lStack_88);
        if (plStack_80 != (long *)0x0) {
          plVar7 = plStack_80 + 1;
          do {
            lVar6 = *plVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plStack_80 + 0x10))(plStack_80);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
          }
        }
      }
      plVar7 = *(long **)(*(long *)(param_1 + 0x340) + 0x288);
      (**(code **)(*plVar7 + 0xa0))(plVar7,0,0,0,uVar13,uVar5,0,puVar11,0);
      plVar7 = *(long **)(param_1 + 0x340);
      FUN_10aaca268(&uStack_74,uVar8,puVar4,&lStack_b0);
      (**(code **)(*plVar7 + 0x98))(plVar7,&uStack_74);
    }
  }
  if (plStack_b8 != (long *)0x0) {
    plVar7 = plStack_b8 + 1;
    do {
      lVar6 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
    }
  }
  return;
}



/* Entry: 10a7ed500; end: 10a7ed507;  */

void FUN_10a7ed500(long param_1,long param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ulong *puVar11;
  long *plVar12;
  uint uVar13;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long lStack_88;
  long *plStack_80;
  uint uStack_74;
  uint uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined1 uStack_5c;
  undefined8 uStack_58;
  
  FUN_10a1da3a4(param_1 + -0x288,1,1,0,0,4,0,0);
  *(undefined4 *)(param_1 + -0x214) = 2;
  lVar6 = *(long *)(param_2 + 0x78);
  FUN_10aacfcb0(lVar6,"body",4);
  if (lVar6 == 0) {
    lVar10 = 0;
    plStack_b8 = (long *)0x0;
  }
  else {
    lVar10 = *(long *)(lVar6 + 0x18);
    plStack_b8 = *(long **)(lVar6 + 0x20);
    if (plStack_b8 != (long *)0x0) {
      plVar7 = plStack_b8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  lVar6 = lVar10;
  FUN_10aacfdd8(lVar10,*(undefined4 *)(*(long *)(param_1 + 0x50) + 0xe0));
  if (lVar6 != 0) {
    ppuVar1 = &PTR_PTR_1132cf7b0;
    if (*(undefined ***)(lVar6 + 200) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(lVar6 + 200);
    }
    if ((*(int *)(ppuVar1 + 6) != 0) && (*(int *)((long)ppuVar1 + 0x34) != 0)) {
      uVar8 = *(ulong *)(lVar10 + 0xa0);
      FUN_10a1da3a4(param_1 + -0x288,uVar8,uVar8 >> 0x20,0,0,4,0,0);
      plVar12 = *(long **)(param_1 + 0x60);
      plVar7 = plVar12;
      (**(code **)(*plVar12 + 0x28))();
      (**(code **)(*plVar12 + 0x30))();
      uVar13 = (uint)plVar7;
      if (uVar13 < 2) {
        uVar13 = 1;
      }
      uVar5 = (uint)plVar12;
      if (uVar5 < 2) {
        uVar5 = 1;
      }
      uVar9 = (uint)(uVar8 >> 0x20);
      if (uVar13 != (uint)uVar8 || uVar5 != uVar9) {
        lVar6 = 0;
        FUN_10a2421c8();
        uStack_58 = 0x100000000;
        uStack_64 = 0x100000001;
        uStack_6c = 0x400000001;
        uStack_5c = 0;
        uStack_74 = (uint)uVar8;
        uStack_70 = uVar9;
        FUN_10a048f04(&lStack_b0,*(undefined8 *)(lVar6 + 0x1e0),&uStack_74);
        *(undefined1 *)(lStack_b0 + 0x19) = 1;
        FUN_10a00e5c4(param_1 + 0x60,&lStack_b0);
        if (plStack_a8 != (long *)0x0) {
          plVar7 = plStack_a8 + 1;
          do {
            lVar6 = *plVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
          }
        }
      }
      puVar11 = (ulong *)((ulong)ppuVar1[5] & 0xfffffffffffffffc);
      if (*(char *)((long)puVar11 + 0x17) < '\0') {
        puVar11 = (ulong *)*puVar11;
      }
      uVar13 = *(uint *)(ppuVar1 + 6);
      uVar5 = *(uint *)((long)ppuVar1 + 0x34);
      puVar4 = ppuVar1[6];
      FUN_10aaca044(&lStack_b0,ppuVar1[4],(long)*(int *)(ppuVar1 + 3));
      plVar12 = *(long **)(param_1 + 0xb8);
      plVar7 = plVar12;
      (**(code **)(*plVar12 + 0xb0))();
      (**(code **)(*plVar12 + 0xb8))();
      if ((uint)plVar7 != uVar13 || (uint)plVar12 != uVar5) {
        lVar6 = *(long *)(param_1 + 0x70);
        FUN_10a2421c8();
        uStack_58 = 0x100000000;
        uStack_6c = CONCAT44(*(undefined4 *)(param_1 + 0x78),1);
        uStack_64 = 0x100000000;
        uStack_5c = 0;
        uStack_74 = uVar13;
        uStack_70 = uVar5;
        FUN_10a048f04(&lStack_88,*(undefined8 *)(lVar6 + 0x1e0),&uStack_74);
        *(undefined1 *)(lStack_88 + 0x19) = 1;
        FUN_10a1db4cc(*(undefined8 *)(param_1 + 0xb8),&lStack_88);
        if (plStack_80 != (long *)0x0) {
          plVar7 = plStack_80 + 1;
          do {
            lVar6 = *plVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plStack_80 + 0x10))(plStack_80);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
          }
        }
      }
      plVar7 = *(long **)(*(long *)(param_1 + 0xb8) + 0x288);
      (**(code **)(*plVar7 + 0xa0))(plVar7,0,0,0,uVar13,uVar5,0,puVar11,0);
      plVar7 = *(long **)(param_1 + 0xb8);
      FUN_10aaca268(&uStack_74,uVar8,puVar4,&lStack_b0);
      (**(code **)(*plVar7 + 0x98))(plVar7,&uStack_74);
    }
  }
  if (plStack_b8 != (long *)0x0) {
    plVar7 = plStack_b8 + 1;
    do {
      lVar6 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
    }
  }
  return;
}



/* Entry: 10a7ed508; end: 10a7ed69f;  */

void FUN_10a7ed508(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long lStack_30;
  long *plStack_28;
  
  lStack_30 = *param_2;
  plStack_28 = (long *)param_2[1];
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
  if (lStack_30 == 0) {
    FUN_10a7ea4c0(&lStack_40,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x2d8));
    plVar1 = plStack_28;
    plStack_28 = plStack_38;
    lStack_30 = lStack_40;
    lStack_40 = 0;
    plStack_38 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      plVar2 = plVar1 + 1;
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
        (**(code **)(*plVar1 + 0x10))(plVar1);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
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
  }
  lVar5 = lStack_30;
  FUN_10a7ecfec(&lStack_40,param_1);
  func_0x00010a7e2008(lVar5 + 0xe8,3,&lStack_40);
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
  func_0x00010a3a78dc(param_1 + 0x2d8,&lStack_30);
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



/* Entry: 10a7ed6a0; end: 10a7ed9b3;  */

void FUN_10a7ed6a0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_80;
  long *plStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  long lStack_60;
  long *aplStack_58 [3];
  
  ppuVar10 = &puStack_a0;
  if ((*(int *)(param_1 + 0x1e8) != 1) || (*(int *)(param_1 + 0x1ec) != 1)) {
    plVar9 = *(long **)(param_1 + 0x90);
    lVar6 = *(long *)(param_1 + 0x2d8);
    FUN_10ab6e450();
    if (lVar6 == 0) {
      FUN_10a3dedfc();
      plStack_78 = (long *)plVar9[1];
      plStack_80 = (long *)*plVar9;
      if (plVar9[1] != 0) {
        plVar9 = (long *)(plVar9[1] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = *plVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    else {
      lVar2 = *(long *)(lVar6 + 0xe0);
      plVar9 = *(long **)(lVar6 + 0xe8);
      if (plVar9 != (long *)0x0) {
        plVar7 = plVar9 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = *plVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plStack_80 = *(long **)(lVar2 + 0x268);
      plStack_78 = *(long **)(lVar2 + 0x270);
      if (plStack_78 != (long *)0x0) {
        plVar7 = plStack_78 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = *plVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (plVar9 != (long *)0x0) {
        plVar7 = plVar9 + 1;
        do {
          lVar6 = *plVar7;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
    plVar9 = plStack_80;
    if (*(char *)(param_1 + 0x370) == '\x01') {
      for (; plVar9 != (long *)0x0; plVar9 = (long *)plVar9[0x13]) {
        plVar7 = plVar9;
        (**(code **)(*plVar9 + 0x80))();
        if ((int)plVar7 != 2) goto LAB_10a7ed850;
      }
      plVar9 = *(long **)(param_1 + 0x368);
      *(undefined1 *)((long)plVar9 + 0x7c) = *(undefined1 *)(param_1 + 0x371);
      uVar8 = *(undefined8 *)(param_1 + 0x90);
      aplStack_58[0] = *(long **)(param_1 + 0x348);
      lStack_60 = *(long *)(param_1 + 0x340);
      if (*(long *)(param_1 + 0x348) != 0) {
        plVar7 = (long *)(*(long *)(param_1 + 0x348) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = *plVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      (**(code **)(*plVar9 + 0x18))(plVar9,uVar8,param_2,&plStack_80,&lStack_60,param_1 + 0x2e8,0);
      plVar9 = aplStack_58[0];
      if (aplStack_58[0] != (long *)0x0) {
        plVar7 = aplStack_58[0] + 1;
        do {
          lVar6 = *plVar7;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*aplStack_58[0] + 0x10))(aplStack_58[0]);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
    else {
LAB_10a7ed850:
      uStack_98 = 0xb;
      puStack_a0 = &DAT_10f67926d;
      uStack_90 = 0x80ffeb02f35f22da;
      bVar3 = *(byte *)(param_1 + 0x371);
      if (bVar3 == 0) {
        ppuVar10 = (undefined **)0x0;
      }
      puVar1 = (undefined8 *)(param_1 + 0x358);
      FUN_10a0da1b8(param_1 + 0x350,*(undefined8 *)(param_1 + 0x358));
      *(undefined8 **)(param_1 + 0x350) = puVar1;
      *(undefined8 *)(param_1 + 0x360) = 0;
      *puVar1 = 0;
      if (bVar3 != 0) {
        uVar11 = (ulong)bVar3 << 3 | (ulong)bVar3 << 4;
        do {
          FUN_10a810ac8(&lStack_60,param_1 + 0x350,ppuVar10);
          plVar9 = (long *)(param_1 + 0x350);
          FUN_10a0da010(plVar9,puVar1,&uStack_68,auStack_70,lStack_60 + 0x20);
          lVar6 = lStack_60;
          if (*plVar9 == 0) {
            func_0x00010a0479ec(param_1 + 0x350,uStack_68,plVar9,lStack_60);
          }
          else {
            lStack_60 = 0;
            if (lVar6 != 0) {
              func_0x00010a047a40(aplStack_58);
            }
          }
          ppuVar10 = (undefined **)((long)ppuVar10 + 0x18);
          uVar11 = uVar11 - 0x18;
        } while (uVar11 != 0);
      }
      FUN_10a7ed9b4(param_1 + 0x2f8,param_2,param_1 + 0x2e8);
    }
    plVar9 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar7 = plStack_78 + 1;
      do {
        lVar6 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
  }
  return;
}



/* Entry: 10a7ed9b4; end: 10a7edee7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a7ed9b4(undefined8 *******param_1,long *param_2,undefined8 *param_3)

{
  long *****ppppplVar1;
  long ******pppppplVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long *****ppppplVar7;
  long *******ppppppplVar8;
  undefined8 *******pppppppuVar9;
  long *******ppppppplVar10;
  long *plVar11;
  long *******ppppppplVar12;
  undefined8 ******ppppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined8 ***pppuVar15;
  long ****pppplVar16;
  long *****ppppplVar17;
  long ******pppppplVar18;
  long lVar19;
  long ******pppppplVar20;
  undefined **ppuVar21;
  undefined8 ****ppppuVar22;
  ulong uVar23;
  undefined8 *******pppppppuVar24;
  long *plVar25;
  undefined *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long *****ppppplStack_370;
  long *****ppppplStack_368;
  undefined1 auStack_360 [8];
  undefined8 uStack_358;
  long ******pppppplStack_350;
  long ******apppppplStack_348 [3];
  undefined8 *******pppppppuStack_330;
  long *******ppppppplStack_328;
  undefined8 *******pppppppuStack_320;
  undefined8 *puStack_318;
  undefined8 *******pppppppuStack_310;
  long *******ppppppplStack_308;
  undefined1 *puStack_300;
  code *pcStack_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 auStack_288 [4];
  undefined8 uStack_284;
  undefined8 uStack_27c;
  undefined8 ******ppppppuStack_274;
  undefined8 ******ppppppuStack_26c;
  undefined4 uStack_264;
  undefined8 *******pppppppuStack_260;
  long *******ppppppplStack_258;
  long *plStack_250;
  long ******pppppplStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar9 = param_1 + 5;
  ppppppuVar13 = *pppppppuVar9;
  if (ppppppuVar13 == (undefined8 ******)0x0) {
    ppppppuVar13 = (undefined8 ******)(long)*(char *)((long)param_1 + 0x27);
    if ((long)ppppppuVar13 < 0) {
      pppppppuVar14 = (undefined8 *******)param_1[2];
      ppppppuVar13 = param_1[3];
    }
    else {
      pppppppuVar14 = param_1 + 2;
    }
    FUN_10ab451f4(&pppppppuStack_260,*param_1,&UNK_10f6798a6,0x13,&UNK_10f6798ba,0xf,pppppppuVar14,
                  ppppppuVar13,1);
    pppppppuVar14 = &pppppppuStack_260;
    func_0x00010a015c50(pppppppuVar9,pppppppuVar14);
    ppppppuVar13 = *pppppppuVar9;
    if (ppppppuVar13 != (undefined8 ******)0x0) {
      *(undefined1 *)(ppppppuVar13 + 1) = 1;
      if (ppppppuVar13[0x45] == ppppppuVar13[0x46]) {
        ppppuVar22 = (undefined8 ****)0x0;
      }
      else {
        ppppuVar22 = *ppppppuVar13[0x45];
      }
      pppuVar15 = ppppuVar22[0x4b];
      pppuVar15[6] = (undefined8 **)0x0;
      pppuVar15[5] = (undefined8 **)0x6;
      pppuVar15[8] = (undefined8 **)0x0;
      pppuVar15[7] = (undefined8 **)0x0;
      pppuVar15[10] = (undefined8 **)0x0;
      pppuVar15[9] = (undefined8 **)0x0;
      func_0x00010a3326b8(ppppuVar22 + 0x43,0);
      func_0x00010a332748((long)ppppuVar22 + 0x219,0);
      func_0x00010a332700((long)ppppuVar22 + 0x21a,0);
      pppppppuVar14 = (undefined8 *******)0x0;
      func_0x00010a3325d0(ppppuVar22,0);
      *(undefined4 *)((long)ppppuVar22 + 0x21e) = 0x1010101;
      *(undefined1 *)(ppppuVar22 + 1) = 1;
    }
    FUN_10a044790(&plStack_250);
    ppppppplVar8 = &pppppplStack_248;
    (*(code *)*pppppplStack_248)();
    ppppppplVar10 = ppppppplStack_258;
    if (ppppppplStack_258 != (long *******)0x0) {
      ppppppplVar12 = ppppppplStack_258 + 1;
      do {
        pppppplVar18 = *ppppppplVar12;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppppplVar12,0x10);
        if (bVar6) {
          *ppppppplVar12 = (long ******)((long)pppppplVar18 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppppplVar18 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_258)[2])(ppppppplStack_258);
        ppppppplVar8 = ppppppplVar10;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    pppppppuVar24 = (undefined8 *******)0x0;
    if (ppppppuVar13 == (undefined8 ******)0x0) goto LAB_10a7ede40;
    ppppppuVar13 = *pppppppuVar9;
  }
  pppppppuVar9 = (undefined8 *******)(param_2 + 4);
  FUN_10a5dfd94(pppppppuVar9,ppppppuVar13);
  plVar11 = param_2 + 4;
  FUN_10a01eacc(plVar11,pppppppuVar9);
  auStack_288[0] = 0;
  uStack_27c = 0x300000003;
  uStack_284 = 0x300000001;
  ppppppuStack_26c = param_1[8];
  ppppppuStack_274 = param_1[7];
  uStack_264 = 0x3e80000;
  func_0x000107c2b074(&pppppppuStack_260,&PTR_DAT_110c1f860);
  FUN_10a5e17a8(plVar11,&pppppppuStack_260,param_1[9],auStack_288);
  if ((long)plStack_250 < 0) {
    __ZdlPv(pppppppuStack_260);
  }
  if ((undefined8 *******)plVar11[0x2b] != param_1 + 0xb) {
    FUN_10a1f503c((undefined8 *******)plVar11[0x2b],param_1[0xb],param_1 + 0xc);
  }
  pppppppuStack_260 = (undefined8 *******)0x0;
  uStack_b8 = 0;
  uStack_a8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_a0 = 0xffffffffffffffff;
  uStack_98 = 0xffffffffffffffff;
  uStack_90 = 0;
  plStack_88 = (long *)0x0;
  uStack_80 = 0;
  uStack_78 = 0xffffffffffffffff;
  uStack_70 = 0xffffffffffffffff;
  uStack_68 = 0x3f800000;
  uStack_60 = 0x200000002;
  uStack_298 = 0;
  uStack_2e8 = 0;
  uStack_2e4 = 0;
  uStack_2f0 = 0;
  uStack_2ec = 0;
  uStack_2e0 = 0;
  uStack_2dc = 0;
  uStack_2d8 = 0xffffffffffffffff;
  uStack_2d0 = 0xffffffffffffffff;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2b0 = 0xffffffffffffffff;
  uStack_2a8 = 0xffffffffffffffff;
  uStack_2a0 = 0;
  uStack_290 = 0;
  FUN_10a061728(&pppppppuStack_260,&uStack_2f0);
  plVar11 = (long *)CONCAT44(uStack_2bc,uStack_2c0);
  if (plVar11 != (long *)0x0) {
    plVar25 = plVar11 + 1;
    do {
      lVar19 = *plVar25;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar6) {
        *plVar25 = lVar19 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = (long *)CONCAT44(uStack_2e4,uStack_2e8);
  if (plVar11 != (long *)0x0) {
    plVar25 = plVar11 + 1;
    do {
      lVar19 = *plVar25;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar6) {
        *plVar25 = lVar19 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = plStack_250;
  pppppppuVar24 = &pppppppuStack_260;
  plVar25 = (long *)param_3[1];
  ppppppplStack_258 = (long *******)*param_3;
  if (param_3[1] != 0) {
    plVar3 = (long *)(param_3[1] + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *plVar3 = *plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (plStack_250 != (long *)0x0) {
    plVar3 = plStack_250 + 1;
    do {
      lVar19 = *plVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *plVar3 = lVar19 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar19 == 0) {
      lVar19 = *plStack_250;
      plStack_250 = plVar25;
      (**(code **)(lVar19 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      plVar25 = plStack_250;
    }
  }
  plStack_250 = plVar25;
  pppppplStack_248 = (long ******)0x0;
  uStack_240 = 0xffffffffffffffff;
  uStack_238 = 0xffffffffffffffff;
  uStack_200 = 0x3f80000000000000;
  uStack_208 = 0;
  (**(code **)(*param_2 + 0x88))(param_2,&pppppppuStack_260);
  ppppppplVar10 = (long *******)*param_3;
  (*(code *)(*ppppppplVar10)[5])();
  plVar11 = (long *)*param_3;
  (**(code **)(*plVar11 + 0x30))();
  uStack_2f0 = 0;
  uStack_2ec = 0;
  uStack_2e8 = SUB84(ppppppplVar10,0);
  uStack_2e4 = SUB84(plVar11,0);
  (**(code **)(*param_2 + 0xc0))(param_2,&uStack_2f0);
  ppppppuVar13 = *param_1;
  FUN_10a2421c8();
  uStack_2f0 = 0x3f800000;
  uStack_2e4 = 0;
  uStack_2e0 = 0;
  uStack_2ec = 0;
  uStack_2e8 = 0;
  uStack_2dc = 0x3f800000;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  uStack_2c8 = 0x3f800000;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2b4 = 0x3f800000;
  (**(code **)(*param_2 + 0x58))(param_2,ppppppuVar13[0x41],pppppppuVar9,&uStack_2f0,3);
  (**(code **)(*param_2 + 0x90))(param_2,0,3,3);
  plVar11 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar25 = plStack_88 + 1;
    do {
      lVar19 = *plVar25;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar6) {
        *plVar25 = lVar19 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = plStack_b0;
  param_1 = &pppppppuStack_260;
  if (plStack_b0 != (long *)0x0) {
    plVar25 = plStack_b0 + 1;
    do {
      lVar19 = *plVar25;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar6) {
        *plVar25 = lVar19 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  ppppppplVar8 = (long *******)&ppppppplStack_258;
  pppppppuVar14 = pppppppuStack_260;
  func_0x00010a048e34(ppppppplVar8,pppppppuStack_260);
LAB_10a7ede40:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a023a44(&pppppppuStack_260);
  ppppppplVar12 = ppppppplVar8;
  __Unwind_Resume();
  ppuVar21 = &puStack_390;
  pppppppuStack_330 = pppppppuVar24;
  ppppppplStack_328 = ppppppplVar10;
  pppppppuStack_320 = pppppppuVar9;
  puStack_318 = param_3;
  pppppppuStack_310 = param_1;
  ppppppplStack_308 = ppppppplVar8;
  puStack_300 = &stack0xfffffffffffffff0;
  pcStack_2f8 = FUN_10a7edee8;
  if ((*(int *)(ppppppplVar12 + -0x19) != 1) || (*(int *)((long)ppppppplVar12 + -0xc4) != 1)) {
    pppppplVar20 = ppppppplVar12[-0x44];
    pppppplVar18 = ppppppplVar12[5];
    FUN_10ab6e450();
    if (pppppplVar18 == (long ******)0x0) {
      FUN_10a3dedfc();
      ppppplStack_368 = pppppplVar20[1];
      ppppplStack_370 = *pppppplVar20;
      if (pppppplVar20[1] != (long *****)0x0) {
        ppppplVar17 = pppppplVar20[1] + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppplVar17,0x10);
          if (bVar6) {
            *ppppplVar17 = (long ****)((long)*ppppplVar17 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
    else {
      ppppplVar17 = pppppplVar18[0x1c];
      ppppplVar7 = pppppplVar18[0x1d];
      if (ppppplVar7 != (long *****)0x0) {
        ppppplVar1 = ppppplVar7 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppplVar1,0x10);
          if (bVar6) {
            *ppppplVar1 = (long ****)((long)*ppppplVar1 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      ppppplStack_368 = (long *****)ppppplVar17[0x4e];
      ppppplStack_370 = (long *****)ppppplVar17[0x4d];
      if (ppppplStack_368 != (long *****)0x0) {
        ppppplVar17 = ppppplStack_368 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppplVar17,0x10);
          if (bVar6) {
            *ppppplVar17 = (long ****)((long)*ppppplVar17 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (ppppplVar7 != (long *****)0x0) {
        ppppplVar17 = ppppplVar7 + 1;
        do {
          pppplVar16 = *ppppplVar17;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppplVar17,0x10);
          if (bVar6) {
            *ppppplVar17 = (long ****)((long)pppplVar16 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppplVar16 == (long ****)0x0) {
          (*(code *)(*ppppplVar7)[2])(ppppplVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar7);
        }
      }
    }
    ppppplVar17 = ppppplStack_370;
    if (*(char *)(ppppppplVar12 + 0x18) == '\x01') {
      for (; ppppplVar17 != (long *****)0x0; ppppplVar17 = (long *****)ppppplVar17[0x13]) {
        ppppplVar7 = ppppplVar17;
        (*(code *)(*ppppplVar17)[0x10])();
        if ((int)ppppplVar7 != 2) goto LAB_10a7ed850;
      }
      pppppplVar18 = ppppppplVar12[0x17];
      *(undefined1 *)((long)pppppplVar18 + 0x7c) = *(undefined1 *)((long)ppppppplVar12 + 0xc1);
      pppppplVar20 = ppppppplVar12[-0x44];
      apppppplStack_348[0] = ppppppplVar12[0x13];
      pppppplStack_350 = ppppppplVar12[0x12];
      if (ppppppplVar12[0x13] != (long ******)0x0) {
        pppppplVar2 = ppppppplVar12[0x13] + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppplVar2,0x10);
          if (bVar6) {
            *pppppplVar2 = (long *****)((long)*pppppplVar2 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      (*(code *)(*pppppplVar18)[3])
                (pppppplVar18,pppppplVar20,pppppppuVar14,&ppppplStack_370,&pppppplStack_350,
                 ppppppplVar12 + 7,0);
      pppppplVar18 = apppppplStack_348[0];
      if (apppppplStack_348[0] != (long ******)0x0) {
        pppppplVar20 = apppppplStack_348[0] + 1;
        do {
          ppppplVar17 = *pppppplVar20;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppplVar20,0x10);
          if (bVar6) {
            *pppppplVar20 = (long *****)((long)ppppplVar17 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppppplVar17 == (long *****)0x0) {
          (*(code *)(*apppppplStack_348[0])[2])(apppppplStack_348[0]);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar18);
        }
      }
    }
    else {
LAB_10a7ed850:
      uStack_388 = 0xb;
      puStack_390 = &DAT_10f67926d;
      uStack_380 = 0x80ffeb02f35f22da;
      bVar4 = *(byte *)((long)ppppppplVar12 + 0xc1);
      if (bVar4 == 0) {
        ppuVar21 = (undefined **)0x0;
      }
      ppppppplVar8 = ppppppplVar12 + 0x15;
      FUN_10a0da1b8(ppppppplVar12 + 0x14,ppppppplVar12[0x15]);
      ppppppplVar12[0x14] = (long ******)ppppppplVar8;
      ppppppplVar12[0x16] = (long ******)0x0;
      *ppppppplVar8 = (long ******)0x0;
      if (bVar4 != 0) {
        uVar23 = (ulong)bVar4 << 3 | (ulong)bVar4 << 4;
        do {
          FUN_10a810ac8(&pppppplStack_350,ppppppplVar12 + 0x14,ppuVar21);
          ppppppplVar10 = ppppppplVar12 + 0x14;
          FUN_10a0da010(ppppppplVar10,ppppppplVar8,&uStack_358,auStack_360,pppppplStack_350 + 4);
          pppppplVar18 = pppppplStack_350;
          if (*ppppppplVar10 == (long ******)0x0) {
            func_0x00010a0479ec(ppppppplVar12 + 0x14,uStack_358,ppppppplVar10,pppppplStack_350);
          }
          else {
            pppppplStack_350 = (long ******)0x0;
            if (pppppplVar18 != (long ******)0x0) {
              func_0x00010a047a40(apppppplStack_348);
            }
          }
          ppuVar21 = (undefined **)((long)ppuVar21 + 0x18);
          uVar23 = uVar23 - 0x18;
        } while (uVar23 != 0);
      }
      FUN_10a7ed9b4(ppppppplVar12 + 9,pppppppuVar14,ppppppplVar12 + 7);
    }
    ppppplVar17 = ppppplStack_368;
    if (ppppplStack_368 != (long *****)0x0) {
      ppppplVar7 = ppppplStack_368 + 1;
      do {
        pppplVar16 = *ppppplVar7;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
        if (bVar6) {
          *ppppplVar7 = (long ****)((long)pppplVar16 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppplVar16 == (long ****)0x0) {
        (*(code *)(*ppppplStack_368)[2])(ppppplStack_368);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar17);
      }
    }
  }
  return;
}



/* Entry: 10a7edee8; end: 10a7edf0f;  */

void FUN_10a7edee8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_80;
  long *plStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  long lStack_60;
  long *aplStack_58 [3];
  
  ppuVar10 = &puStack_a0;
  if ((*(int *)(param_1 + -200) != 1) || (*(int *)(param_1 + -0xc4) != 1)) {
    plVar9 = *(long **)(param_1 + -0x220);
    lVar6 = *(long *)(param_1 + 0x28);
    FUN_10ab6e450();
    if (lVar6 == 0) {
      FUN_10a3dedfc();
      plStack_78 = (long *)plVar9[1];
      plStack_80 = (long *)*plVar9;
      if (plVar9[1] != 0) {
        plVar9 = (long *)(plVar9[1] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = *plVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    else {
      lVar2 = *(long *)(lVar6 + 0xe0);
      plVar9 = *(long **)(lVar6 + 0xe8);
      if (plVar9 != (long *)0x0) {
        plVar7 = plVar9 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = *plVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plStack_80 = *(long **)(lVar2 + 0x268);
      plStack_78 = *(long **)(lVar2 + 0x270);
      if (plStack_78 != (long *)0x0) {
        plVar7 = plStack_78 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = *plVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (plVar9 != (long *)0x0) {
        plVar7 = plVar9 + 1;
        do {
          lVar6 = *plVar7;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
    plVar9 = plStack_80;
    if (*(char *)(param_1 + 0xc0) == '\x01') {
      for (; plVar9 != (long *)0x0; plVar9 = (long *)plVar9[0x13]) {
        plVar7 = plVar9;
        (**(code **)(*plVar9 + 0x80))();
        if ((int)plVar7 != 2) goto LAB_10a7ed850;
      }
      plVar9 = *(long **)(param_1 + 0xb8);
      *(undefined1 *)((long)plVar9 + 0x7c) = *(undefined1 *)(param_1 + 0xc1);
      uVar8 = *(undefined8 *)(param_1 + -0x220);
      aplStack_58[0] = *(long **)(param_1 + 0x98);
      lStack_60 = *(long *)(param_1 + 0x90);
      if (*(long *)(param_1 + 0x98) != 0) {
        plVar7 = (long *)(*(long *)(param_1 + 0x98) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = *plVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      (**(code **)(*plVar9 + 0x18))(plVar9,uVar8,param_2,&plStack_80,&lStack_60,param_1 + 0x38,0);
      plVar9 = aplStack_58[0];
      if (aplStack_58[0] != (long *)0x0) {
        plVar7 = aplStack_58[0] + 1;
        do {
          lVar6 = *plVar7;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*aplStack_58[0] + 0x10))(aplStack_58[0]);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
    else {
LAB_10a7ed850:
      uStack_98 = 0xb;
      puStack_a0 = &DAT_10f67926d;
      uStack_90 = 0x80ffeb02f35f22da;
      bVar3 = *(byte *)(param_1 + 0xc1);
      if (bVar3 == 0) {
        ppuVar10 = (undefined **)0x0;
      }
      puVar1 = (undefined8 *)(param_1 + 0xa8);
      FUN_10a0da1b8(param_1 + 0xa0,*(undefined8 *)(param_1 + 0xa8));
      *(undefined8 **)(param_1 + 0xa0) = puVar1;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *puVar1 = 0;
      if (bVar3 != 0) {
        uVar11 = (ulong)bVar3 << 3 | (ulong)bVar3 << 4;
        do {
          FUN_10a810ac8(&lStack_60,param_1 + 0xa0,ppuVar10);
          plVar9 = (long *)(param_1 + 0xa0);
          FUN_10a0da010(plVar9,puVar1,&uStack_68,auStack_70,lStack_60 + 0x20);
          lVar6 = lStack_60;
          if (*plVar9 == 0) {
            func_0x00010a0479ec(param_1 + 0xa0,uStack_68,plVar9,lStack_60);
          }
          else {
            lStack_60 = 0;
            if (lVar6 != 0) {
              func_0x00010a047a40(aplStack_58);
            }
          }
          ppuVar10 = (undefined **)((long)ppuVar10 + 0x18);
          uVar11 = uVar11 - 0x18;
        } while (uVar11 != 0);
      }
      FUN_10a7ed9b4(param_1 + 0x48,param_2,param_1 + 0x38);
    }
    plVar9 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar7 = plStack_78 + 1;
      do {
        lVar6 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
  }
  return;
}



/* Entry: 10a7edf10; end: 10a7edf77;  */

bool FUN_10a7edf10(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x23) {
    iVar2 = 0xf6621a5;
    _memcmp(&UNK_10f6621a5,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a7edf78; end: 10a7edf7f;  */

bool FUN_10a7edf78(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x23) {
    iVar2 = 0xf6621a5;
    _memcmp(&UNK_10f6621a5,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a7edf80; end: 10a7ee28f;  */

void FUN_10a7edf80(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6621a5,0x23);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c1eb38;
  pppuVar2 = (undefined8 ***)&UNK_10f678718;
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
  uStack_58 = 0xab;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c1eb38;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bb3788;
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
    FUN_10a052828(param_1,&DAT_10f678e4a,FUN_10a810b48,FUN_10a810bf8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f679074,FUN_10a810f1c,FUN_10a810fcc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f67907e,FUN_10a811084,FUN_10a811134);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f679092,FUN_10a8111ec,FUN_10a8112ac);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644824,FUN_10a811370,FUN_10a811428);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6621a5,0x23);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a7ee274);
  (*pcVar6)();
}



/* Entry: 10a7ee290; end: 10a7ee51b;  */

undefined8 * FUN_10a7ee290(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *puStack_50;
  long *plStack_48;
  
  param_1[0x6d] = &PTR_FUN_110c383b8;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  *(undefined2 *)(param_1 + 0x70) = 0x100;
  puVar6 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110c1c9d8,param_2);
  plVar1 = puVar6 + 0x51;
  FUN_10a0040d0(plVar1,&PTR_PTR_110c1c9f8);
  puStack_50 = (undefined *)((ulong)puStack_50 & 0xffffffffffff0000);
  FUN_10a00db68(param_1 + 0x56,param_2,&puStack_50);
  *param_1 = &PTR_FUN_110c1c6f8;
  param_1[2] = &PTR_FUN_110c1c848;
  param_1[5] = &PTR_FUN_110c1c878;
  param_1[0x6d] = &PTR_FUN_110c1c998;
  param_1[0x15] = &PTR_FUN_110c1c8d0;
  param_1[0x51] = &PTR_FUN_110c1c8f8;
  param_1[0x56] = &PTR_DAT_110c1c940;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  plStack_48 = (long *)0x3f800000;
  puStack_50 = (undefined *)0x3f8000003f800000;
  FUN_10a7f812c(param_1 + 0x5f,param_2,4,&UNK_10f679f2e,0x20,&puStack_50);
  plVar2 = (long *)((long)plVar1 + *(long *)(*plVar1 + -0x18));
  if ((*(byte *)(plVar2 + 3) & 1) == 0) {
    *(undefined1 *)(plVar2 + 3) = 1;
    plVar2[2] = param_2;
    if (param_2 != 0) {
      plVar2[1] = *(long *)(*(long *)(param_2 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar2 + 0x18))();
  }
  FUN_10a5ae998(param_1[0x54],&PTR_DAT_110b99f08,param_2,plVar1);
  param_1[0x57] = param_2;
  FUN_10a5ae998(param_1[0x59],&PTR_DAT_110b9f720,param_2,param_1 + 0x56);
  FUN_10a7ea4c0(&puStack_50,param_2,0);
  func_0x00010a4c390c(param_1 + 0x5b,&puStack_50);
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
  lVar7 = *(long *)(*(long *)(param_2 + 0x100) + 0x260);
  puStack_50 = &UNK_10f653c20;
  plStack_48 = (long *)0x21;
  if (lVar7 != 0) {
    FUN_10a026ab4(param_1 + 0x5d,lVar7 + 0x128);
    FUN_10a1da3a4(param_1,1,1,0,0,4,0,0);
    *(undefined4 *)((long)param_1 + 0x74) = 0;
    return param_1;
  }
  FUN_10a0edfc4(&puStack_50);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a7ee4b4);
  (*pcVar5)();
}



/* Entry: 10a7ee51c; end: 10a7ee627;  */

void FUN_10a7ee51c(undefined8 param_1)

{
  undefined **appuStack_150 [2];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_109febc44(appuStack_150);
  FUN_10a002568(&ppuStack_140,&UNK_10f679279,0x28);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_10a002568();
  func_0x00010a002480(param_1,&ppuStack_138,&uStack_31);
  appuStack_150[0] = &PTR_SUB_1108a5a38;
  ppuStack_140 = &PTR_DAT_1108a5a60;
  appuStack_d0[0] = &PTR_DAT_1108a5a88;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_150,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10a7ee628; end: 10a7ee62f;  */

void FUN_10a7ee628(undefined8 param_1)

{
  undefined **appuStack_150 [2];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_109febc44(appuStack_150);
  FUN_10a002568(&ppuStack_140,&UNK_10f679279,0x28);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_10a002568();
  func_0x00010a002480(param_1,&ppuStack_138,&uStack_31);
  appuStack_150[0] = &PTR_SUB_1108a5a38;
  ppuStack_140 = &PTR_DAT_1108a5a60;
  appuStack_d0[0] = &PTR_DAT_1108a5a88;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_150,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10a7ee630; end: 10a7ee70b;  */

void FUN_10a7ee630(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puStack_b0;
  long *plStack_a8;
  long lStack_a0;
  undefined ***pppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_2;
  FUN_10a80fc44(param_2,(undefined8 *)(param_1 + 0x2d8));
  if ((uVar5 & 1) == 0) {
    FUN_10a7eb02c(*(undefined8 *)(param_1 + 0x2d8),param_2);
  }
  pcStack_78 = FUN_10a811544;
  ppuStack_70 = &PTR_FUN_110c1ffa8;
  ppuVar8 = &PTR_DAT_110c1bf80;
  lStack_68 = param_1;
  FUN_10a7e353c(param_2,&PTR_DAT_110c1bf80,&pcStack_78,0);
  pppuVar6 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  pppuVar7 = pppuVar6;
  __Unwind_Resume(pppuVar6);
  pcStack_88 = FUN_10a7ee70c;
  puStack_b0 = &UNK_10f6621a5;
  plStack_a8 = (long *)0x23;
  lStack_a0 = param_1;
  pppuStack_98 = pppuVar6;
  puStack_90 = &stack0xfffffffffffffff0;
  (**(code **)(*ppuVar8 + 0x30))(ppuVar8,&PTR_DAT_110c1f658,&puStack_b0);
  FUN_10a4c3afc(ppuVar8,&PTR_DAT_110bb3700,pppuVar7 + 0x5b,&UNK_10f65ce18,0x19);
  FUN_10a7ee7f8(&puStack_b0,pppuVar7);
  FUN_10a009b20(ppuVar8,&PTR_DAT_110c1bf80,&puStack_b0,&UNK_10f63349d,0xe);
  plVar4 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar1 = plStack_a8 + 1;
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
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a7ee70c; end: 10a7ee7f7;  */

void FUN_10a7ee70c(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined *puStack_30;
  long *plStack_28;
  
  puStack_30 = &UNK_10f6621a5;
  plStack_28 = (long *)0x23;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c1f658,&puStack_30);
  FUN_10a4c3afc(param_2,&PTR_DAT_110bb3700,param_1 + 0x2d8,&UNK_10f65ce18,0x19);
  FUN_10a7ee7f8(&puStack_30,param_1);
  FUN_10a009b20(param_2,&PTR_DAT_110c1bf80,&puStack_30,&UNK_10f63349d,0xe);
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



/* Entry: 10a7ee7f8; end: 10a7ee86f;  */

void FUN_10a7ee7f8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined1 *puStack_28;
  
  uStack_2a = 2;
  puStack_28 = &uStack_2a;
  lVar4 = *(long *)(param_2 + 0x2d8) + 0x108;
  FUN_10a814778(lVar4,&uStack_2a,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
  lVar5 = *(long *)(lVar4 + 0x20);
  uVar6 = *(undefined8 *)(lVar4 + 0x18);
  param_1[1] = *(undefined8 *)(lVar4 + 0x20);
  *param_1 = uVar6;
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
  return;
}



/* Entry: 10a7ee870; end: 10a7ee8d3;  */

undefined1 * FUN_10a7ee870(long param_1,long param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_80 [44];
  uint uStack_54;
  byte bStack_48;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  ppuVar2 = &puStack_20;
  if ((*(int *)(param_1 + 0x1e8) == 1) && (*(int *)(param_1 + 0x1ec) == 1)) {
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x100) + 0x260);
    puStack_20 = &UNK_10f653c20;
    uStack_18 = 0x21;
    if (lVar5 == 0) {
      FUN_10a0edfc4();
      puVar4 = auStack_80;
      FUN_10a7eb2e8(auStack_80,*(undefined8 *)((long)ppuVar2 + 0x2d8));
      if (bStack_48 == 1) {
        uVar3 = *(long *)((long)ppuVar2 + 0x2d8) + 0xe8;
        FUN_10a7e26a4(uVar3,2);
        if ((uVar3 & 1) != 0) {
          if ((bStack_48 & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7ee96c);
            (*pcVar1)();
          }
          uStack_54 = uStack_54 | 0x10;
          if ((*(byte *)(param_2 + 0x2b0) & 1) == 0) {
            *(undefined8 *)(param_2 + 0x298) = 0;
            *(undefined8 *)(param_2 + 0x2a0) = 0;
            *(undefined8 *)(param_2 + 0x2a8) = 0;
            *(undefined1 *)(param_2 + 0x2b0) = 1;
          }
          FUN_10aad0050((undefined8 *)(param_2 + 0x298),auStack_80);
        }
      }
      func_0x00010a7fd678(auStack_80);
      return puVar4;
    }
    puVar4 = (undefined1 *)(lVar5 + 0x128);
  }
  else {
    puVar4 = (undefined1 *)(param_1 + 0x2e8);
  }
  return puVar4;
}



/* Entry: 10a7ee8d4; end: 10a7ee97f;  */

void FUN_10a7ee8d4(long param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 auStack_60 [44];
  uint uStack_34;
  byte bStack_28;
  
  FUN_10a7eb2e8(auStack_60,*(undefined8 *)(param_1 + 0x2d8));
  if (bStack_28 == 1) {
    uVar2 = *(long *)(param_1 + 0x2d8) + 0xe8;
    FUN_10a7e26a4(uVar2,2);
    if ((uVar2 & 1) != 0) {
      if ((bStack_28 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7ee96c);
        (*pcVar1)();
      }
      uStack_34 = uStack_34 | 0x10;
      if ((*(byte *)(param_2 + 0x2b0) & 1) == 0) {
        *(undefined8 *)(param_2 + 0x298) = 0;
        *(undefined8 *)(param_2 + 0x2a0) = 0;
        *(undefined8 *)(param_2 + 0x2a8) = 0;
        *(undefined1 *)(param_2 + 0x2b0) = 1;
      }
      FUN_10aad0050((undefined8 *)(param_2 + 0x298),auStack_60);
    }
  }
  func_0x00010a7fd678(auStack_60);
  return;
}



/* Entry: 10a7ee980; end: 10a7ee987;  */

void FUN_10a7ee980(long param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 auStack_60 [44];
  uint uStack_34;
  byte bStack_28;
  
  FUN_10a7eb2e8(auStack_60,*(undefined8 *)(param_1 + 0x50));
  if (bStack_28 == 1) {
    uVar2 = *(long *)(param_1 + 0x50) + 0xe8;
    FUN_10a7e26a4(uVar2,2);
    if ((uVar2 & 1) != 0) {
      if ((bStack_28 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7ee96c);
        (*pcVar1)();
      }
      uStack_34 = uStack_34 | 0x10;
      if ((*(byte *)(param_2 + 0x2b0) & 1) == 0) {
        *(undefined8 *)(param_2 + 0x298) = 0;
        *(undefined8 *)(param_2 + 0x2a0) = 0;
        *(undefined8 *)(param_2 + 0x2a8) = 0;
        *(undefined1 *)(param_2 + 0x2b0) = 1;
      }
      FUN_10aad0050((undefined8 *)(param_2 + 0x298),auStack_60);
    }
  }
  func_0x00010a7fd678(auStack_60);
  return;
}



/* Entry: 10a7ee988; end: 10a7eed0b;  */

void FUN_10a7ee988(long param_1,long param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  long *plVar11;
  ulong *puVar12;
  long *plVar13;
  uint uVar14;
  long lStack_b0;
  long *plStack_a8;
  long lStack_88;
  long *plStack_80;
  uint uStack_74;
  uint uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined1 uStack_5c;
  undefined8 uStack_58;
  
  FUN_10a7eed0c(*(undefined8 *)(param_1 + 0x2d8));
  FUN_10a1da3a4(param_1,1,1,0,0,4,0,0);
  *(undefined4 *)(param_1 + 0x74) = 2;
  lVar6 = *(long *)(param_2 + 0x78);
  FUN_10aacfcb0(lVar6,"body",4);
  if (lVar6 != 0) {
    lVar7 = *(long *)(lVar6 + 0x18);
    plVar11 = *(long **)(lVar6 + 0x20);
    if (plVar11 != (long *)0x0) {
      plVar8 = plVar11 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lVar7 != 0) {
      uVar9 = *(ulong *)(lVar7 + 0xa0);
      FUN_10aacfdd8(lVar7,*(undefined4 *)(*(long *)(param_1 + 0x2d8) + 0xe0));
      if (lVar7 != 0) {
        ppuVar1 = &PTR_PTR_1132cf778;
        if (*(undefined ***)(lVar7 + 0xf0) != (undefined **)0x0) {
          ppuVar1 = *(undefined ***)(lVar7 + 0xf0);
        }
        if ((*(int *)(ppuVar1 + 6) != 0) && (*(int *)((long)ppuVar1 + 0x34) != 0)) {
          FUN_10a1da3a4(param_1,uVar9,uVar9 >> 0x20,0,0,4,0,0);
          plVar13 = *(long **)(param_1 + 0x2e8);
          plVar8 = plVar13;
          (**(code **)(*plVar13 + 0x28))();
          (**(code **)(*plVar13 + 0x30))();
          uVar14 = (uint)plVar8;
          if (uVar14 < 2) {
            uVar14 = 1;
          }
          uVar5 = (uint)plVar13;
          if (uVar5 < 2) {
            uVar5 = 1;
          }
          uVar10 = (uint)(uVar9 >> 0x20);
          if (uVar14 != (uint)uVar9 || uVar5 != uVar10) {
            lVar6 = 0;
            FUN_10a2421c8();
            uStack_58 = 0x100000000;
            uStack_64 = 0x100000001;
            uStack_6c = 0x400000001;
            uStack_5c = 0;
            uStack_74 = (uint)uVar9;
            uStack_70 = uVar10;
            FUN_10a048f04(&lStack_b0,*(undefined8 *)(lVar6 + 0x1e0),&uStack_74);
            *(undefined1 *)(lStack_b0 + 0x19) = 1;
            FUN_10a00e5c4(param_1 + 0x2e8,&lStack_b0);
            if (plStack_a8 != (long *)0x0) {
              plVar8 = plStack_a8 + 1;
              do {
                lVar6 = *plVar8;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar3) {
                  *plVar8 = lVar6 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar6 == 0) {
                (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
              }
            }
          }
          puVar12 = (ulong *)((ulong)ppuVar1[5] & 0xfffffffffffffffc);
          if (*(char *)((long)puVar12 + 0x17) < '\0') {
            puVar12 = (ulong *)*puVar12;
          }
          uVar14 = *(uint *)(ppuVar1 + 6);
          uVar5 = *(uint *)((long)ppuVar1 + 0x34);
          puVar4 = ppuVar1[6];
          FUN_10aaca044(&lStack_b0,ppuVar1[4],(long)*(int *)(ppuVar1 + 3));
          plVar13 = *(long **)(param_1 + 0x340);
          plVar8 = plVar13;
          (**(code **)(*plVar13 + 0xb0))();
          (**(code **)(*plVar13 + 0xb8))();
          if ((uint)plVar8 != uVar14 || (uint)plVar13 != uVar5) {
            lVar6 = *(long *)(param_1 + 0x2f8);
            FUN_10a2421c8();
            uStack_58 = 0x100000000;
            uStack_6c = CONCAT44(*(undefined4 *)(param_1 + 0x300),1);
            uStack_64 = 0x100000000;
            uStack_5c = 0;
            uStack_74 = uVar14;
            uStack_70 = uVar5;
            FUN_10a048f04(&lStack_88,*(undefined8 *)(lVar6 + 0x1e0),&uStack_74);
            *(undefined1 *)(lStack_88 + 0x19) = 1;
            FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x340),&lStack_88);
            if (plStack_80 != (long *)0x0) {
              plVar8 = plStack_80 + 1;
              do {
                lVar6 = *plVar8;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar3) {
                  *plVar8 = lVar6 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar6 == 0) {
                (**(code **)(*plStack_80 + 0x10))(plStack_80);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
              }
            }
          }
          plVar8 = *(long **)(*(long *)(param_1 + 0x340) + 0x288);
          (**(code **)(*plVar8 + 0xa0))(plVar8,0,0,0,uVar14,uVar5,0,puVar12,0);
          plVar8 = *(long **)(param_1 + 0x340);
          FUN_10aaca268(&uStack_74,uVar9,puVar4,&lStack_b0);
          (**(code **)(*plVar8 + 0x98))(plVar8,&uStack_74);
        }
      }
    }
    if (plVar11 != (long *)0x0) {
      plVar8 = plVar11 + 1;
      do {
        lVar6 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
  }
  return;
}



/* Entry: 10a7eed0c; end: 10a7eed43;  */

undefined8 FUN_10a7eed0c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined1 **ppuVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  char *pcStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  char cStack_41;
  
  FUN_10a7e20bc(param_1 + 0xe8);
  FUN_10a7e2370(param_1 + 0xe8,0);
  lVar10 = param_1 + 0xe8;
  ppuVar6 = &puStack_c0;
  cStack_41 = '\x02';
  pcStack_70 = &cStack_41;
  param_1 = param_1 + 0x108;
  FUN_10a814778(param_1,&cStack_41,&UNK_10dd5b8f9,&pcStack_70,&uStack_90);
  lVar12 = *(long *)(param_1 + 0x18);
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_58 = lVar12;
  plStack_50 = plVar2;
  FUN_10a7e20bc(lVar10);
  FUN_10a7f8334(lVar10,cStack_41);
  if (lVar10 != 0) {
    uVar9 = *(ulong *)(lVar10 + 0x38) & 0xfffffffffffffffc;
    lVar8 = (long)*(char *)(uVar9 + 0x17);
    if (lVar8 < 0) {
      lVar8 = *(long *)(uVar9 + 8);
    }
    if ((lVar8 == 0 && lVar12 != 0) && (func_0x00010aae9fd8(), lVar12 != 0)) {
      lVar8 = lVar12;
      func_0x00010ad031c0();
      *(uint *)(lVar10 + 0x10) = *(uint *)(lVar10 + 0x10) | 4;
      uVar9 = *(ulong *)(lVar10 + 8);
      if ((uVar9 & 1) != 0) {
        uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(lVar10 + 0x40,lVar8,uVar9);
      FUN_10a08d2e0(auStack_a8,lVar12 + 0x10);
      puVar5 = auStack_a8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar5,"/",1);
      uStack_88 = puVar5[1];
      uStack_90 = *puVar5;
      lStack_80 = puVar5[2];
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      if (cStack_41 == '\x03') {
        ppuVar6 = (undefined1 **)0x20;
        __Znwm();
        uStack_b0 = 0x8000000000000020;
        uStack_b8 = 0x18;
        puVar7 = &UNK_10f67a01b;
        lVar12 = 0x18;
        puStack_c0 = (undefined1 *)ppuVar6;
      }
      else {
        if (cStack_41 == '\x02') {
          puVar7 = &UNK_10f67a008;
          lVar12 = 0x12;
        }
        else if (cStack_41 == '\x01') {
          puVar7 = &UNK_10f679fff;
          lVar12 = 8;
        }
        else {
          puVar7 = &UNK_10f5722f7;
          lVar12 = 9;
        }
        uStack_b0 = CONCAT17((char)lVar12,(undefined7)uStack_b0);
      }
      _memcpy(ppuVar6,puVar7,lVar12);
      *(undefined1 *)((long)ppuVar6 + lVar12) = 0;
      uVar9 = uStack_b8;
      ppuVar6 = (undefined1 **)puStack_c0;
      if (-1 < (long)uStack_b0) {
        uVar9 = uStack_b0 >> 0x38;
        ppuVar6 = &puStack_c0;
      }
      puVar5 = &uStack_90;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar5,ppuVar6,uVar9);
      uStack_68 = puVar5[1];
      pcStack_70 = (char *)*puVar5;
      lStack_60 = puVar5[2];
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      *(uint *)(lVar10 + 0x10) = *(uint *)(lVar10 + 0x10) | 2;
      uVar9 = *(ulong *)(lVar10 + 8);
      if ((uVar9 & 1) != 0) {
        uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
      }
      func_0x000107c3024c((ulong *)(lVar10 + 0x38),&pcStack_70,uVar9);
      if (lStack_60 < 0) {
        __ZdlPv(pcStack_70);
      }
      if ((long)uStack_b0 < 0) {
        __ZdlPv(puStack_c0);
      }
      if (lStack_80 < 0) {
        __ZdlPv(uStack_90);
      }
      if (cStack_91 < '\0') {
        __ZdlPv(auStack_a8[0]);
      }
      uVar11 = 1;
      goto joined_r0x00010a7e24b0;
    }
  }
  uVar11 = 0;
joined_r0x00010a7e24b0:
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return uVar11;
}



/* Entry: 10a7eed44; end: 10a7eed4b;  */

void FUN_10a7eed44(long param_1,long param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  long *plVar11;
  ulong *puVar12;
  long *plVar13;
  uint uVar14;
  long lStack_b0;
  long *plStack_a8;
  long lStack_88;
  long *plStack_80;
  uint uStack_74;
  uint uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined1 uStack_5c;
  undefined8 uStack_58;
  
  FUN_10a7eed0c(*(undefined8 *)(param_1 + 0x50));
  FUN_10a1da3a4(param_1 + -0x288,1,1,0,0,4,0,0);
  *(undefined4 *)(param_1 + -0x214) = 2;
  lVar6 = *(long *)(param_2 + 0x78);
  FUN_10aacfcb0(lVar6,"body",4);
  if (lVar6 != 0) {
    lVar7 = *(long *)(lVar6 + 0x18);
    plVar11 = *(long **)(lVar6 + 0x20);
    if (plVar11 != (long *)0x0) {
      plVar8 = plVar11 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lVar7 != 0) {
      uVar9 = *(ulong *)(lVar7 + 0xa0);
      FUN_10aacfdd8(lVar7,*(undefined4 *)(*(long *)(param_1 + 0x50) + 0xe0));
      if (lVar7 != 0) {
        ppuVar1 = &PTR_PTR_1132cf778;
        if (*(undefined ***)(lVar7 + 0xf0) != (undefined **)0x0) {
          ppuVar1 = *(undefined ***)(lVar7 + 0xf0);
        }
        if ((*(int *)(ppuVar1 + 6) != 0) && (*(int *)((long)ppuVar1 + 0x34) != 0)) {
          FUN_10a1da3a4(param_1 + -0x288,uVar9,uVar9 >> 0x20,0,0,4,0,0);
          plVar13 = *(long **)(param_1 + 0x60);
          plVar8 = plVar13;
          (**(code **)(*plVar13 + 0x28))();
          (**(code **)(*plVar13 + 0x30))();
          uVar14 = (uint)plVar8;
          if (uVar14 < 2) {
            uVar14 = 1;
          }
          uVar5 = (uint)plVar13;
          if (uVar5 < 2) {
            uVar5 = 1;
          }
          uVar10 = (uint)(uVar9 >> 0x20);
          if (uVar14 != (uint)uVar9 || uVar5 != uVar10) {
            lVar6 = 0;
            FUN_10a2421c8();
            uStack_58 = 0x100000000;
            uStack_64 = 0x100000001;
            uStack_6c = 0x400000001;
            uStack_5c = 0;
            uStack_74 = (uint)uVar9;
            uStack_70 = uVar10;
            FUN_10a048f04(&lStack_b0,*(undefined8 *)(lVar6 + 0x1e0),&uStack_74);
            *(undefined1 *)(lStack_b0 + 0x19) = 1;
            FUN_10a00e5c4(param_1 + 0x60,&lStack_b0);
            if (plStack_a8 != (long *)0x0) {
              plVar8 = plStack_a8 + 1;
              do {
                lVar6 = *plVar8;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar3) {
                  *plVar8 = lVar6 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar6 == 0) {
                (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
              }
            }
          }
          puVar12 = (ulong *)((ulong)ppuVar1[5] & 0xfffffffffffffffc);
          if (*(char *)((long)puVar12 + 0x17) < '\0') {
            puVar12 = (ulong *)*puVar12;
          }
          uVar14 = *(uint *)(ppuVar1 + 6);
          uVar5 = *(uint *)((long)ppuVar1 + 0x34);
          puVar4 = ppuVar1[6];
          FUN_10aaca044(&lStack_b0,ppuVar1[4],(long)*(int *)(ppuVar1 + 3));
          plVar13 = *(long **)(param_1 + 0xb8);
          plVar8 = plVar13;
          (**(code **)(*plVar13 + 0xb0))();
          (**(code **)(*plVar13 + 0xb8))();
          if ((uint)plVar8 != uVar14 || (uint)plVar13 != uVar5) {
            lVar6 = *(long *)(param_1 + 0x70);
            FUN_10a2421c8();
            uStack_58 = 0x100000000;
            uStack_6c = CONCAT44(*(undefined4 *)(param_1 + 0x78),1);
            uStack_64 = 0x100000000;
            uStack_5c = 0;
            uStack_74 = uVar14;
            uStack_70 = uVar5;
            FUN_10a048f04(&lStack_88,*(undefined8 *)(lVar6 + 0x1e0),&uStack_74);
            *(undefined1 *)(lStack_88 + 0x19) = 1;
            FUN_10a1db4cc(*(undefined8 *)(param_1 + 0xb8),&lStack_88);
            if (plStack_80 != (long *)0x0) {
              plVar8 = plStack_80 + 1;
              do {
                lVar6 = *plVar8;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar3) {
                  *plVar8 = lVar6 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar6 == 0) {
                (**(code **)(*plStack_80 + 0x10))(plStack_80);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
              }
            }
          }
          plVar8 = *(long **)(*(long *)(param_1 + 0xb8) + 0x288);
          (**(code **)(*plVar8 + 0xa0))(plVar8,0,0,0,uVar14,uVar5,0,puVar12,0);
          plVar8 = *(long **)(param_1 + 0xb8);
          FUN_10aaca268(&uStack_74,uVar9,puVar4,&lStack_b0);
          (**(code **)(*plVar8 + 0x98))(plVar8,&uStack_74);
        }
      }
    }
    if (plVar11 != (long *)0x0) {
      plVar8 = plVar11 + 1;
      do {
        lVar6 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
  }
  return;
}



/* Entry: 10a7eed4c; end: 10a7eeee3;  */

void FUN_10a7eed4c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long lStack_30;
  long *plStack_28;
  
  lStack_30 = *param_2;
  plStack_28 = (long *)param_2[1];
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
  if (lStack_30 == 0) {
    FUN_10a7ea4c0(&lStack_40,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x2d8));
    plVar1 = plStack_28;
    plStack_28 = plStack_38;
    lStack_30 = lStack_40;
    lStack_40 = 0;
    plStack_38 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      plVar2 = plVar1 + 1;
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
        (**(code **)(*plVar1 + 0x10))(plVar1);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
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
  }
  lVar5 = lStack_30;
  FUN_10a7ee7f8(&lStack_40,param_1);
  func_0x00010a7e2008(lVar5 + 0xe8,2,&lStack_40);
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
  func_0x00010a3a78dc(param_1 + 0x2d8,&lStack_30);
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



/* Entry: 10a7eeee4; end: 10a7eef0f;  */

undefined8 FUN_10a7eeee4(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 **ppuVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  char *pcStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  char cStack_41;
  
  FUN_10a7e1f90(*(long *)(param_1 + 0x2d8) + 0xe8);
  lVar9 = *(long *)(param_1 + 0x2d8);
  FUN_10a7e20bc(lVar9 + 0xe8);
  FUN_10a7e2370(lVar9 + 0xe8,0);
  lVar5 = lVar9 + 0xe8;
  ppuVar8 = &puStack_c0;
  cStack_41 = '\x02';
  pcStack_70 = &cStack_41;
  lVar9 = lVar9 + 0x108;
  FUN_10a814778(lVar9,&cStack_41,&UNK_10dd5b8f9,&pcStack_70,&uStack_90);
  lVar6 = *(long *)(lVar9 + 0x18);
  plVar2 = *(long **)(lVar9 + 0x20);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_58 = lVar6;
  plStack_50 = plVar2;
  FUN_10a7e20bc(lVar5);
  FUN_10a7f8334(lVar5,cStack_41);
  if (lVar5 != 0) {
    uVar11 = *(ulong *)(lVar5 + 0x38) & 0xfffffffffffffffc;
    lVar9 = (long)*(char *)(uVar11 + 0x17);
    if (lVar9 < 0) {
      lVar9 = *(long *)(uVar11 + 8);
    }
    if ((lVar9 == 0 && lVar6 != 0) && (func_0x00010aae9fd8(), lVar6 != 0)) {
      lVar9 = lVar6;
      func_0x00010ad031c0();
      *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 4;
      uVar11 = *(ulong *)(lVar5 + 8);
      if ((uVar11 & 1) != 0) {
        uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(lVar5 + 0x40,lVar9,uVar11);
      FUN_10a08d2e0(auStack_a8,lVar6 + 0x10);
      puVar7 = auStack_a8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar7,"/",1);
      uStack_88 = puVar7[1];
      uStack_90 = *puVar7;
      lStack_80 = puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      if (cStack_41 == '\x03') {
        ppuVar8 = (undefined1 **)0x20;
        __Znwm();
        uStack_b0 = 0x8000000000000020;
        uStack_b8 = 0x18;
        puVar10 = &UNK_10f67a01b;
        lVar9 = 0x18;
        puStack_c0 = (undefined1 *)ppuVar8;
      }
      else {
        if (cStack_41 == '\x02') {
          puVar10 = &UNK_10f67a008;
          lVar9 = 0x12;
        }
        else if (cStack_41 == '\x01') {
          puVar10 = &UNK_10f679fff;
          lVar9 = 8;
        }
        else {
          puVar10 = &UNK_10f5722f7;
          lVar9 = 9;
        }
        uStack_b0 = CONCAT17((char)lVar9,(undefined7)uStack_b0);
      }
      _memcpy(ppuVar8,puVar10,lVar9);
      *(undefined1 *)((long)ppuVar8 + lVar9) = 0;
      uVar11 = uStack_b8;
      ppuVar8 = (undefined1 **)puStack_c0;
      if (-1 < (long)uStack_b0) {
        uVar11 = uStack_b0 >> 0x38;
        ppuVar8 = &puStack_c0;
      }
      puVar7 = &uStack_90;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar7,ppuVar8,uVar11);
      uStack_68 = puVar7[1];
      pcStack_70 = (char *)*puVar7;
      lStack_60 = puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 2;
      uVar11 = *(ulong *)(lVar5 + 8);
      if ((uVar11 & 1) != 0) {
        uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
      }
      func_0x000107c3024c((ulong *)(lVar5 + 0x38),&pcStack_70,uVar11);
      if (lStack_60 < 0) {
        __ZdlPv(pcStack_70);
      }
      if ((long)uStack_b0 < 0) {
        __ZdlPv(puStack_c0);
      }
      if (lStack_80 < 0) {
        __ZdlPv(uStack_90);
      }
      if (cStack_91 < '\0') {
        __ZdlPv(auStack_a8[0]);
      }
      uVar12 = 1;
      goto joined_r0x00010a7e24b0;
    }
  }
  uVar12 = 0;
joined_r0x00010a7e24b0:
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return uVar12;
}



/* Entry: 10a7eef10; end: 10a7eef3b;  */

void FUN_10a7eef10(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(param_2 + 0x2d8);
  lVar4 = *(long *)(lVar5 + 0xf0);
  uVar6 = *(undefined8 *)(lVar5 + 0xe8);
  param_1[1] = *(undefined8 *)(lVar5 + 0xf0);
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



/* Entry: 10a7eef3c; end: 10a7ef017;  */

undefined8 FUN_10a7eef3c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 **ppuVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  char *pcStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  char cStack_41;
  
  func_0x00010a7e2008(*(long *)(param_1 + 0x2d8) + 0xe8,0,param_2);
  lVar9 = *(long *)(param_1 + 0x2d8);
  FUN_10a7e20bc(lVar9 + 0xe8);
  FUN_10a7e2370(lVar9 + 0xe8,0);
  lVar5 = lVar9 + 0xe8;
  ppuVar8 = &puStack_c0;
  cStack_41 = '\x02';
  pcStack_70 = &cStack_41;
  lVar9 = lVar9 + 0x108;
  FUN_10a814778(lVar9,&cStack_41,&UNK_10dd5b8f9,&pcStack_70,&uStack_90);
  lVar6 = *(long *)(lVar9 + 0x18);
  plVar2 = *(long **)(lVar9 + 0x20);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_58 = lVar6;
  plStack_50 = plVar2;
  FUN_10a7e20bc(lVar5);
  FUN_10a7f8334(lVar5,cStack_41);
  if (lVar5 != 0) {
    uVar11 = *(ulong *)(lVar5 + 0x38) & 0xfffffffffffffffc;
    lVar9 = (long)*(char *)(uVar11 + 0x17);
    if (lVar9 < 0) {
      lVar9 = *(long *)(uVar11 + 8);
    }
    if ((lVar9 == 0 && lVar6 != 0) && (func_0x00010aae9fd8(), lVar6 != 0)) {
      lVar9 = lVar6;
      func_0x00010ad031c0();
      *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 4;
      uVar11 = *(ulong *)(lVar5 + 8);
      if ((uVar11 & 1) != 0) {
        uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(lVar5 + 0x40,lVar9,uVar11);
      FUN_10a08d2e0(auStack_a8,lVar6 + 0x10);
      puVar7 = auStack_a8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar7,"/",1);
      uStack_88 = puVar7[1];
      uStack_90 = *puVar7;
      lStack_80 = puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      if (cStack_41 == '\x03') {
        ppuVar8 = (undefined1 **)0x20;
        __Znwm();
        uStack_b0 = 0x8000000000000020;
        uStack_b8 = 0x18;
        puVar10 = &UNK_10f67a01b;
        lVar9 = 0x18;
        puStack_c0 = (undefined1 *)ppuVar8;
      }
      else {
        if (cStack_41 == '\x02') {
          puVar10 = &UNK_10f67a008;
          lVar9 = 0x12;
        }
        else if (cStack_41 == '\x01') {
          puVar10 = &UNK_10f679fff;
          lVar9 = 8;
        }
        else {
          puVar10 = &UNK_10f5722f7;
          lVar9 = 9;
        }
        uStack_b0 = CONCAT17((char)lVar9,(undefined7)uStack_b0);
      }
      _memcpy(ppuVar8,puVar10,lVar9);
      *(undefined1 *)((long)ppuVar8 + lVar9) = 0;
      uVar11 = uStack_b8;
      ppuVar8 = (undefined1 **)puStack_c0;
      if (-1 < (long)uStack_b0) {
        uVar11 = uStack_b0 >> 0x38;
        ppuVar8 = &puStack_c0;
      }
      puVar7 = &uStack_90;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar7,ppuVar8,uVar11);
      uStack_68 = puVar7[1];
      pcStack_70 = (char *)*puVar7;
      lStack_60 = puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 2;
      uVar11 = *(ulong *)(lVar5 + 8);
      if ((uVar11 & 1) != 0) {
        uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
      }
      func_0x000107c3024c((ulong *)(lVar5 + 0x38),&pcStack_70,uVar11);
      if (lStack_60 < 0) {
        __ZdlPv(pcStack_70);
      }
      if ((long)uStack_b0 < 0) {
        __ZdlPv(puStack_c0);
      }
      if (lStack_80 < 0) {
        __ZdlPv(uStack_90);
      }
      if (cStack_91 < '\0') {
        __ZdlPv(auStack_a8[0]);
      }
      uVar12 = 1;
      goto joined_r0x00010a7e24b0;
    }
  }
  uVar12 = 0;
joined_r0x00010a7e24b0:
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return uVar12;
}



/* Entry: 10a7ef018; end: 10a7ef08f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a7ef018(long param_1,long *param_2)

{
  long *****ppppplVar1;
  long ******pppppplVar2;
  long *plVar3;
  undefined8 *puVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long *****ppppplVar8;
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  long *plVar11;
  undefined8 ******ppppppuVar12;
  long *******ppppppplVar13;
  long lVar14;
  undefined8 *******pppppppuVar15;
  long lVar16;
  long ****pppplVar17;
  long *****ppppplVar18;
  long ******pppppplVar19;
  undefined8 *******pppppppuVar20;
  long ******pppppplVar21;
  undefined **ppuVar22;
  long *plVar23;
  long lVar24;
  ulong uVar25;
  undefined8 *******pppppppuVar26;
  long *plVar27;
  undefined *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long *****ppppplStack_370;
  long *****ppppplStack_368;
  undefined1 auStack_360 [8];
  undefined8 uStack_358;
  long ******pppppplStack_350;
  long ******apppppplStack_348 [3];
  undefined8 *******pppppppuStack_330;
  long *******ppppppplStack_328;
  long *plStack_320;
  undefined8 *puStack_318;
  undefined8 *******pppppppuStack_310;
  long *******ppppppplStack_308;
  undefined1 *puStack_300;
  code *pcStack_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 auStack_288 [4];
  undefined8 uStack_284;
  undefined8 uStack_27c;
  undefined8 uStack_274;
  undefined8 uStack_26c;
  undefined4 uStack_264;
  undefined8 *******pppppppuStack_260;
  long *******ppppppplStack_258;
  long *plStack_250;
  long ******pppppplStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if ((*(int *)(param_1 + 0x1e8) == 1) && (*(int *)(param_1 + 0x1ec) == 1)) {
    return;
  }
  pppppppuVar20 = (undefined8 *******)(param_1 + 0x2f8);
  puVar4 = (undefined8 *)(param_1 + 0x2e8);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar23 = (long *)(param_1 + 800);
  lVar14 = *plVar23;
  if (lVar14 == 0) {
    lVar14 = (long)*(char *)(param_1 + 799);
    if (lVar14 < 0) {
      lVar24 = *(long *)(param_1 + 0x308);
      lVar14 = *(long *)(param_1 + 0x310);
    }
    else {
      lVar24 = param_1 + 0x308;
    }
    FUN_10ab451f4(&pppppppuStack_260,*pppppppuVar20,&UNK_10f6798a6,0x13,&UNK_10f6798ba,0xf,lVar24,
                  lVar14,1);
    pppppppuVar15 = &pppppppuStack_260;
    func_0x00010a015c50(plVar23,pppppppuVar15);
    lVar14 = *plVar23;
    if (lVar14 != 0) {
      *(undefined1 *)(lVar14 + 8) = 1;
      if (*(long **)(lVar14 + 0x228) == *(long **)(lVar14 + 0x230)) {
        lVar24 = 0;
      }
      else {
        lVar24 = **(long **)(lVar14 + 0x228);
      }
      lVar16 = *(long *)(lVar24 + 600);
      *(undefined8 *)(lVar16 + 0x30) = 0;
      *(undefined8 *)(lVar16 + 0x28) = 6;
      *(undefined8 *)(lVar16 + 0x40) = 0;
      *(undefined8 *)(lVar16 + 0x38) = 0;
      *(undefined8 *)(lVar16 + 0x50) = 0;
      *(undefined8 *)(lVar16 + 0x48) = 0;
      func_0x00010a3326b8(lVar24 + 0x218,0);
      func_0x00010a332748(lVar24 + 0x219,0);
      func_0x00010a332700(lVar24 + 0x21a,0);
      pppppppuVar15 = (undefined8 *******)0x0;
      func_0x00010a3325d0(lVar24,0);
      *(undefined4 *)(lVar24 + 0x21e) = 0x1010101;
      *(undefined1 *)(lVar24 + 8) = 1;
    }
    FUN_10a044790(&plStack_250);
    ppppppplVar9 = &pppppplStack_248;
    (*(code *)*pppppplStack_248)();
    ppppppplVar10 = ppppppplStack_258;
    if (ppppppplStack_258 != (long *******)0x0) {
      ppppppplVar13 = ppppppplStack_258 + 1;
      do {
        pppppplVar19 = *ppppppplVar13;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppppplVar13,0x10);
        if (bVar7) {
          *ppppppplVar13 = (long ******)((long)pppppplVar19 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (pppppplVar19 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_258)[2])(ppppppplStack_258);
        ppppppplVar9 = ppppppplVar10;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    pppppppuVar26 = (undefined8 *******)0x0;
    if (lVar14 == 0) goto LAB_10a7ede40;
    lVar14 = *plVar23;
  }
  plVar23 = param_2 + 4;
  FUN_10a5dfd94(plVar23,lVar14);
  plVar11 = param_2 + 4;
  FUN_10a01eacc(plVar11,plVar23);
  auStack_288[0] = 0;
  uStack_27c = 0x300000003;
  uStack_284 = 0x300000001;
  uStack_26c = *(undefined8 *)(param_1 + 0x338);
  uStack_274 = *(undefined8 *)(param_1 + 0x330);
  uStack_264 = 0x3e80000;
  func_0x000107c2b074(&pppppppuStack_260,&PTR_DAT_110c1f860);
  FUN_10a5e17a8(plVar11,&pppppppuStack_260,*(undefined8 *)(param_1 + 0x340),auStack_288);
  if ((long)plStack_250 < 0) {
    __ZdlPv(pppppppuStack_260);
  }
  if (plVar11[0x2b] != param_1 + 0x350) {
    FUN_10a1f503c(plVar11[0x2b],*(undefined8 *)(param_1 + 0x350),param_1 + 0x358);
  }
  pppppppuStack_260 = (undefined8 *******)0x0;
  uStack_b8 = 0;
  uStack_a8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_a0 = 0xffffffffffffffff;
  uStack_98 = 0xffffffffffffffff;
  uStack_90 = 0;
  plStack_88 = (long *)0x0;
  uStack_80 = 0;
  uStack_78 = 0xffffffffffffffff;
  uStack_70 = 0xffffffffffffffff;
  uStack_68 = 0x3f800000;
  uStack_60 = 0x200000002;
  uStack_298 = 0;
  uStack_2e8 = 0;
  uStack_2e4 = 0;
  uStack_2f0 = 0;
  uStack_2ec = 0;
  uStack_2e0 = 0;
  uStack_2dc = 0;
  uStack_2d8 = 0xffffffffffffffff;
  uStack_2d0 = 0xffffffffffffffff;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2b0 = 0xffffffffffffffff;
  uStack_2a8 = 0xffffffffffffffff;
  uStack_2a0 = 0;
  uStack_290 = 0;
  FUN_10a061728(&pppppppuStack_260,&uStack_2f0);
  plVar11 = (long *)CONCAT44(uStack_2bc,uStack_2c0);
  if (plVar11 != (long *)0x0) {
    plVar27 = plVar11 + 1;
    do {
      lVar14 = *plVar27;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar7) {
        *plVar27 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = (long *)CONCAT44(uStack_2e4,uStack_2e8);
  if (plVar11 != (long *)0x0) {
    plVar27 = plVar11 + 1;
    do {
      lVar14 = *plVar27;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar7) {
        *plVar27 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = plStack_250;
  pppppppuVar26 = &pppppppuStack_260;
  plVar27 = *(long **)(param_1 + 0x2f0);
  ppppppplStack_258 = (long *******)*puVar4;
  if (*(long *)(param_1 + 0x2f0) != 0) {
    plVar3 = (long *)(*(long *)(param_1 + 0x2f0) + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = *plVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (plStack_250 != (long *)0x0) {
    plVar3 = plStack_250 + 1;
    do {
      lVar14 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      lVar14 = *plStack_250;
      plStack_250 = plVar27;
      (**(code **)(lVar14 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      plVar27 = plStack_250;
    }
  }
  plStack_250 = plVar27;
  pppppplStack_248 = (long ******)0x0;
  uStack_240 = 0xffffffffffffffff;
  uStack_238 = 0xffffffffffffffff;
  uStack_200 = 0x3f80000000000000;
  uStack_208 = 0;
  (**(code **)(*param_2 + 0x88))(param_2,&pppppppuStack_260);
  ppppppplVar10 = (long *******)*puVar4;
  (*(code *)(*ppppppplVar10)[5])();
  plVar11 = (long *)*puVar4;
  (**(code **)(*plVar11 + 0x30))();
  uStack_2f0 = 0;
  uStack_2ec = 0;
  uStack_2e8 = SUB84(ppppppplVar10,0);
  uStack_2e4 = SUB84(plVar11,0);
  (**(code **)(*param_2 + 0xc0))(param_2,&uStack_2f0);
  ppppppuVar12 = *pppppppuVar20;
  FUN_10a2421c8();
  uStack_2f0 = 0x3f800000;
  uStack_2e4 = 0;
  uStack_2e0 = 0;
  uStack_2ec = 0;
  uStack_2e8 = 0;
  uStack_2dc = 0x3f800000;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  uStack_2c8 = 0x3f800000;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2b4 = 0x3f800000;
  (**(code **)(*param_2 + 0x58))(param_2,ppppppuVar12[0x41],plVar23,&uStack_2f0,3);
  (**(code **)(*param_2 + 0x90))(param_2,0,3,3);
  plVar11 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar27 = plStack_88 + 1;
    do {
      lVar14 = *plVar27;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar7) {
        *plVar27 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = plStack_b0;
  pppppppuVar20 = &pppppppuStack_260;
  if (plStack_b0 != (long *)0x0) {
    plVar27 = plStack_b0 + 1;
    do {
      lVar14 = *plVar27;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar7) {
        *plVar27 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  ppppppplVar9 = (long *******)&ppppppplStack_258;
  pppppppuVar15 = pppppppuStack_260;
  func_0x00010a048e34(ppppppplVar9,pppppppuStack_260);
LAB_10a7ede40:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a023a44(&pppppppuStack_260);
  ppppppplVar13 = ppppppplVar9;
  __Unwind_Resume();
  ppuVar22 = &puStack_390;
  pppppppuStack_330 = pppppppuVar26;
  ppppppplStack_328 = ppppppplVar10;
  plStack_320 = plVar23;
  puStack_318 = puVar4;
  pppppppuStack_310 = pppppppuVar20;
  ppppppplStack_308 = ppppppplVar9;
  puStack_300 = &stack0xfffffffffffffff0;
  pcStack_2f8 = FUN_10a7edee8;
  if ((*(int *)(ppppppplVar13 + -0x19) != 1) || (*(int *)((long)ppppppplVar13 + -0xc4) != 1)) {
    pppppplVar21 = ppppppplVar13[-0x44];
    pppppplVar19 = ppppppplVar13[5];
    FUN_10ab6e450();
    if (pppppplVar19 == (long ******)0x0) {
      FUN_10a3dedfc();
      ppppplStack_368 = pppppplVar21[1];
      ppppplStack_370 = *pppppplVar21;
      if (pppppplVar21[1] != (long *****)0x0) {
        ppppplVar18 = pppppplVar21[1] + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar18,0x10);
          if (bVar7) {
            *ppppplVar18 = (long ****)((long)*ppppplVar18 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
    }
    else {
      ppppplVar18 = pppppplVar19[0x1c];
      ppppplVar8 = pppppplVar19[0x1d];
      if (ppppplVar8 != (long *****)0x0) {
        ppppplVar1 = ppppplVar8 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar1,0x10);
          if (bVar7) {
            *ppppplVar1 = (long ****)((long)*ppppplVar1 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      ppppplStack_368 = (long *****)ppppplVar18[0x4e];
      ppppplStack_370 = (long *****)ppppplVar18[0x4d];
      if (ppppplStack_368 != (long *****)0x0) {
        ppppplVar18 = ppppplStack_368 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar18,0x10);
          if (bVar7) {
            *ppppplVar18 = (long ****)((long)*ppppplVar18 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (ppppplVar8 != (long *****)0x0) {
        ppppplVar18 = ppppplVar8 + 1;
        do {
          pppplVar17 = *ppppplVar18;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar18,0x10);
          if (bVar7) {
            *ppppplVar18 = (long ****)((long)pppplVar17 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (pppplVar17 == (long ****)0x0) {
          (*(code *)(*ppppplVar8)[2])(ppppplVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar8);
        }
      }
    }
    ppppplVar18 = ppppplStack_370;
    if (*(char *)(ppppppplVar13 + 0x18) == '\x01') {
      for (; ppppplVar18 != (long *****)0x0; ppppplVar18 = (long *****)ppppplVar18[0x13]) {
        ppppplVar8 = ppppplVar18;
        (*(code *)(*ppppplVar18)[0x10])();
        if ((int)ppppplVar8 != 2) goto LAB_10a7ed850;
      }
      pppppplVar19 = ppppppplVar13[0x17];
      *(undefined1 *)((long)pppppplVar19 + 0x7c) = *(undefined1 *)((long)ppppppplVar13 + 0xc1);
      pppppplVar21 = ppppppplVar13[-0x44];
      apppppplStack_348[0] = ppppppplVar13[0x13];
      pppppplStack_350 = ppppppplVar13[0x12];
      if (ppppppplVar13[0x13] != (long ******)0x0) {
        pppppplVar2 = ppppppplVar13[0x13] + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppplVar2,0x10);
          if (bVar7) {
            *pppppplVar2 = (long *****)((long)*pppppplVar2 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      (*(code *)(*pppppplVar19)[3])
                (pppppplVar19,pppppplVar21,pppppppuVar15,&ppppplStack_370,&pppppplStack_350,
                 ppppppplVar13 + 7,0);
      pppppplVar19 = apppppplStack_348[0];
      if (apppppplStack_348[0] != (long ******)0x0) {
        pppppplVar21 = apppppplStack_348[0] + 1;
        do {
          ppppplVar18 = *pppppplVar21;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppplVar21,0x10);
          if (bVar7) {
            *pppppplVar21 = (long *****)((long)ppppplVar18 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppppplVar18 == (long *****)0x0) {
          (*(code *)(*apppppplStack_348[0])[2])(apppppplStack_348[0]);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar19);
        }
      }
    }
    else {
LAB_10a7ed850:
      uStack_388 = 0xb;
      puStack_390 = &DAT_10f67926d;
      uStack_380 = 0x80ffeb02f35f22da;
      bVar5 = *(byte *)((long)ppppppplVar13 + 0xc1);
      if (bVar5 == 0) {
        ppuVar22 = (undefined **)0x0;
      }
      ppppppplVar9 = ppppppplVar13 + 0x15;
      FUN_10a0da1b8(ppppppplVar13 + 0x14,ppppppplVar13[0x15]);
      ppppppplVar13[0x14] = (long ******)ppppppplVar9;
      ppppppplVar13[0x16] = (long ******)0x0;
      *ppppppplVar9 = (long ******)0x0;
      if (bVar5 != 0) {
        uVar25 = (ulong)bVar5 << 3 | (ulong)bVar5 << 4;
        do {
          FUN_10a810ac8(&pppppplStack_350,ppppppplVar13 + 0x14,ppuVar22);
          ppppppplVar10 = ppppppplVar13 + 0x14;
          FUN_10a0da010(ppppppplVar10,ppppppplVar9,&uStack_358,auStack_360,pppppplStack_350 + 4);
          pppppplVar19 = pppppplStack_350;
          if (*ppppppplVar10 == (long ******)0x0) {
            func_0x00010a0479ec(ppppppplVar13 + 0x14,uStack_358,ppppppplVar10,pppppplStack_350);
          }
          else {
            pppppplStack_350 = (long ******)0x0;
            if (pppppplVar19 != (long ******)0x0) {
              func_0x00010a047a40(apppppplStack_348);
            }
          }
          ppuVar22 = (undefined **)((long)ppuVar22 + 0x18);
          uVar25 = uVar25 - 0x18;
        } while (uVar25 != 0);
      }
      FUN_10a7ed9b4(ppppppplVar13 + 9,pppppppuVar15,ppppppplVar13 + 7);
    }
    ppppplVar18 = ppppplStack_368;
    if (ppppplStack_368 != (long *****)0x0) {
      ppppplVar8 = ppppplStack_368 + 1;
      do {
        pppplVar17 = *ppppplVar8;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppplVar8,0x10);
        if (bVar7) {
          *ppppplVar8 = (long ****)((long)pppplVar17 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (pppplVar17 == (long ****)0x0) {
        (*(code *)(*ppppplStack_368)[2])(ppppplStack_368);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar18);
      }
    }
  }
  return;
}



/* Entry: 10a7ef090; end: 10a7ef0f7;  */

bool FUN_10a7ef090(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x21) {
    iVar2 = 0xf662183;
    _memcmp(&UNK_10f662183,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x624f7265646e6552 && param_2[1] == 0x766f72507463656a) &&
      (int)param_2[2] == 0x72656469)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a7ef0f8; end: 10a7ef0ff;  */

bool FUN_10a7ef0f8(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x21) {
    iVar2 = 0xf662183;
    _memcmp(&UNK_10f662183,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x624f7265646e6552 && param_2[1] == 0x766f72507463656a) &&
      (int)param_2[2] == 0x72656469)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a7ef100; end: 10a7ef667;  */

void FUN_10a7ef100(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f662183,0x21);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c1f000;
  pppuVar2 = (undefined8 ***)&UNK_10f678718;
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
  uStack_58 = 0x92;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c1f000;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bb37d0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7ef648;
    FUN_10a054dac(param_1,&UNK_10f6792a2,FUN_10a811594,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7ef648;
    FUN_10a054dac(param_1,&UNK_10f6792b7,FUN_10a8116c8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a7ef648;
    FUN_10a054dac(param_1,&UNK_10f64c1f7,FUN_10a811848,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f679092,FUN_10a8118f8,FUN_10a8119b8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f679074,FUN_10a811ae4,FUN_10a811b94);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6792d4,FUN_10a811de8,FUN_10a811ea0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f678e72,FUN_10a811f60,FUN_10a812010);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f678e4a,FUN_10a8120c8,FUN_10a812178);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6792e8,FUN_10a812230,FUN_10a8122ec);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6792fc,FUN_10a8123c0,FUN_10a81247c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f679314,FUN_10a812550,FUN_10a81260c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67932d,FUN_10a8126e0,FUN_10a81279c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644824,FUN_10a812870,FUN_10a812928);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f679341,FUN_10a812a44,FUN_10a812afc);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f662183,0x21);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a7ef648:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a7ef64c);
  (*pcVar6)();
}



/* Entry: 10a7ef668; end: 10a7ef9fb;  */

long * FUN_10a7ef668(long *param_1,long param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long **pplStack_38;
  
  param_1[0x43] = (long)&PTR_FUN_110c383b8;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  *(undefined2 *)(param_1 + 0x46) = 0x100;
  plVar3 = param_1;
  FUN_10ac63ebc(param_1,&PTR_PTR_110c1cc60,param_2);
  FUN_10a0040d0(plVar3 + 0x1d,&PTR_PTR_110c1cc90);
  *param_1 = (long)&PTR_FUN_110c1ca30;
  param_1[2] = (long)&PTR_FUN_110c1cb18;
  param_1[5] = (long)&PTR_FUN_110c1cb48;
  param_1[0x43] = (long)&PTR_DAT_110c1cc20;
  param_1[0x1d] = (long)&PTR_FUN_110c1cba8;
  *(undefined1 *)(param_1 + 0x22) = 1;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0x3f0000003f800000;
  param_1[0x36] = 0x3f8000003f800000;
  param_1[0x39] = 0x400000000;
  param_1[0x38] = 3;
  param_1[0x42] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  if (param_3 != 0) {
    if ((*(byte *)(param_1 + 0x46) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x46) = 1;
      param_1[0x45] = param_2;
      if (param_2 != 0) {
        param_1[0x44] = *(long *)(*(long *)(param_2 + 0x850) + 0x2c);
      }
    }
    FUN_10a5ae998(param_1[0x20],&PTR_DAT_110b99f08,param_2,param_1 + 0x1d);
  }
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  plVar3 = (long *)0x1b0;
  __Znwm();
  FUN_10ab46d7c();
  plStack_80 = plVar3;
  FUN_10a7cccf8(param_1 + 0x2a,&plStack_80);
  plVar3 = plStack_80;
  plStack_80 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined8 *)(param_1[0x2a] + 0xe8) = 1;
  FUN_10a7e2c24(&plStack_80);
  lVar4 = param_1[0x2a];
  *(undefined4 *)(lVar4 + 0xf0) = plStack_80._0_4_;
  if ((long **)(lVar4 + 0xf0) != &plStack_80) {
    FUN_10a1903c4(lVar4 + 0xf8,plStack_78,lStack_70,
                  (lStack_70 - (long)plStack_78 >> 3) * 0x6db6db6db6db6db7);
  }
  *(undefined8 *)(lVar4 + 0x118) = uStack_58;
  *(undefined8 *)(lVar4 + 0x110) = uStack_60;
  *(undefined8 *)(lVar4 + 0x128) = uStack_48;
  *(undefined8 *)(lVar4 + 0x120) = uStack_50;
  *(undefined8 *)(lVar4 + 0x130) = uStack_40;
  pplStack_38 = &plStack_78;
  func_0x00010a190844(&pplStack_38);
  if (*(char *)((long)param_1 + 0xba) != '\x01') {
    *(undefined1 *)((long)param_1 + 0xba) = 1;
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  if (*(char *)((long)param_1 + 0xb9) != '\x01') {
    *(undefined1 *)((long)param_1 + 0xb9) = 1;
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  if (param_2 != 0) {
    FUN_10a7ea4c0(&plStack_80,param_2,0);
    func_0x00010a4c390c(param_1 + 0x23,&plStack_80);
    if (plStack_78 != (long *)0x0) {
      plVar3 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
      }
    }
  }
  return param_1;
}



/* Entry: 10a7ef9fc; end: 10a7efb77;  */

void FUN_10a7ef9fc(undefined8 param_1)

{
  undefined **appuStack_150 [2];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_109febc44(appuStack_150);
  FUN_10a002568(&ppuStack_140,&UNK_10f679352,0x26);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb();
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb();
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb();
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb();
  FUN_10a002568();
  func_0x00010a002480(param_1,&ppuStack_138,&uStack_31);
  appuStack_150[0] = &PTR_SUB_1108a5a38;
  ppuStack_140 = &PTR_DAT_1108a5a60;
  appuStack_d0[0] = &PTR_DAT_1108a5a88;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_150,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10a7efb78; end: 10a7efb7f;  */

void FUN_10a7efb78(undefined8 param_1)

{
  undefined **appuStack_150 [2];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_109febc44(appuStack_150);
  FUN_10a002568(&ppuStack_140,&UNK_10f679352,0x26);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb();
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb();
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb();
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb();
  FUN_10a002568();
  func_0x00010a002480(param_1,&ppuStack_138,&uStack_31);
  appuStack_150[0] = &PTR_SUB_1108a5a38;
  ppuStack_140 = &PTR_DAT_1108a5a60;
  appuStack_d0[0] = &PTR_DAT_1108a5a88;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_150,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10a7efb80; end: 10a7f01ab;  */

void FUN_10a7efb80(undefined8 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                  long *param_5)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uVar12;
  undefined8 uStack_130;
  long *plStack_128;
  long lStack_120;
  long *plStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_5;
  FUN_10a80fc44(param_5,param_4 + 0x118);
  if (((ulong)plVar8 & 1) == 0) {
    FUN_10a7eb02c(*(undefined8 *)(param_4 + 0x118),param_5);
  }
  plVar8 = param_5;
  (**(code **)(*param_5 + 0x58))(param_5,&PTR_DAT_110c1ccb0,1);
  *(char *)(param_4 + 0x110) = (char)plVar8;
  pcStack_88 = FUN_10a812bbc;
  ppuStack_80 = &PTR_FUN_110c1ffc0;
  lStack_78 = param_4;
  FUN_10a7e353c(param_5,&PTR_DAT_110c1ccd0,&pcStack_88,0);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  ppuVar7 = &PTR_DAT_110c1f728;
  lVar11 = 0xa0;
  do {
    uVar2 = *(uint *)(ppuVar7 + 4);
    plVar8 = param_5;
    (**(code **)(*param_5 + 0x58))(param_5,ppuVar7,1);
    if ((uint)plVar8 != (uint)((*(uint *)(param_4 + 0x170) & uVar2) != 0)) {
      *(uint *)(param_4 + 0x170) = *(uint *)(param_4 + 0x170) ^ uVar2;
    }
    ppuVar7 = ppuVar7 + 5;
    lVar11 = lVar11 + -0x28;
  } while (lVar11 != 0);
  uStack_f8 = 0;
  plStack_f0 = (long *)0x0;
  FUN_10a7f01ac(param_4,&uStack_f8);
  plVar8 = plStack_f0;
  if (plStack_f0 != (long *)0x0) {
    plVar6 = plStack_f0 + 1;
    do {
      lVar11 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  uStack_f8 = 0;
  plStack_f0 = (long *)0x0;
  FUN_10a7f0dd8(param_4 + 0x188,&uStack_f8);
  func_0x00010a7f0e54(param_4 + 0x1d0,0);
  plVar8 = plStack_f0;
  *(undefined8 *)(param_4 + 0x1f0) = *(undefined8 *)(param_4 + 0x1e8);
  if (plStack_f0 != (long *)0x0) {
    plVar6 = plStack_f0 + 1;
    do {
      lVar11 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  *(undefined8 *)(param_4 + 0x1a0) = 0;
  *(undefined8 *)(param_4 + 0x1a8) = 0;
  *(undefined8 *)(param_4 + 0x198) = 0;
  *(undefined4 *)(param_4 + 0x1c0) = 3;
  *(undefined8 *)(param_4 + 0x1b8) = 0x3f0000003f800000;
  *(undefined8 *)(param_4 + 0x1b0) = 0x3f8000003f800000;
  ppuVar7 = &PTR_DAT_110c1ccf0;
  plVar8 = param_5;
  (**(code **)(*param_5 + 0x200))();
  if ((int)plVar8 == 0) goto LAB_10a7f0090;
  (**(code **)(*param_5 + 0x210))(param_5,&PTR_DAT_110c1ccf0);
  pcStack_c8 = FUN_10a812c0c;
  ppuStack_c0 = &PTR_FUN_110c1ffd8;
  lStack_b8 = param_4;
  FUN_10a38b538(param_5,&PTR_DAT_110c1cd10,&pcStack_c8,0);
  (*(code *)*ppuStack_c0)(&ppuStack_c0);
  plVar8 = param_5;
  (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c1cd30);
  if ((int)plVar8 == 0) {
    uStack_f8 = 0;
    plStack_f0 = (long *)0x0;
    FUN_10a7f03b4(param_4 + 0x188,&uStack_f8);
    plVar8 = plStack_f0;
    if (plStack_f0 != (long *)0x0) {
      plVar6 = plStack_f0 + 1;
      do {
        lVar11 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  else {
    (**(code **)(*param_5 + 0x210))(param_5,&PTR_DAT_110c1cd30);
    FUN_10a7f02bc(&uStack_f8,param_5,0);
    FUN_10a7f03b4(param_4 + 0x188,&uStack_f8);
    plVar8 = plStack_f0;
    if (plStack_f0 != (long *)0x0) {
      plVar6 = plStack_f0 + 1;
      do {
        lVar11 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    (**(code **)(*param_5 + 0x220))(param_5);
    FUN_10a7f0dd8(param_4 + 0x188,param_4 + 0x188);
    func_0x00010a7f0e54(param_4 + 0x1d0,0);
    *(undefined8 *)(param_4 + 0x1f0) = *(undefined8 *)(param_4 + 0x1e8);
    lVar11 = *(long *)(param_4 + 0x188);
    if (lVar11 != 0) {
      plVar8 = (long *)0x1;
      FUN_10a37d18c();
      if (((plVar8 != (long *)0x0) && ((int)lVar11 == 2)) && (lVar11 = *plVar8, lVar11 != 0)) {
        puVar5 = (undefined8 *)0x28;
        __Znwm();
        *puVar5 = &PTR_DAT_110c4db20;
        puVar5[1] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[2] = 0;
        uStack_f8 = 0;
        func_0x00010a7f0e54(param_4 + 0x1d0);
        func_0x00010a7f0e54(&uStack_f8,0);
        uVar10 = *(undefined8 *)(param_4 + 0x1d0);
        FUN_10ac5b0a8(&uStack_f8,param_4,lVar11 + 0x10);
        FUN_10ab52bc8(uVar10,&uStack_f8);
        FUN_10a0f1ea0(&uStack_f8);
      }
    }
  }
  while( true ) {
    plVar8 = param_5;
    (**(code **)(*param_5 + 0x30))(param_5,&PTR_DAT_110c1cd50);
    *(int *)(param_4 + 0x1c8) = (int)plVar8;
    plVar8 = param_5;
    (**(code **)(*param_5 + 0x38))(param_5,&PTR_DAT_110c1f7c8,4);
    *(int *)(param_4 + 0x1cc) = (int)plVar8;
    uVar12 = 0x3f000000;
    (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110c1cd70);
    *(undefined4 *)(param_4 + 0x1bc) = uVar12;
    if (*(int *)(param_4 + 0x1c8) == 0) {
      uStack_f8 = 0;
      plStack_f0 = (long *)((ulong)plStack_f0 & 0xffffffff00000000);
      (**(code **)(*param_5 + 0xf0))(param_5,&PTR_DAT_110c1cd90,&uStack_f8);
      *(undefined4 *)(param_4 + 0x198) = uVar12;
      *(undefined4 *)(param_4 + 0x19c) = param_2;
      *(undefined4 *)(param_4 + 0x1a0) = param_3;
      uStack_f8 = 0;
      plStack_f0 = (long *)((ulong)plStack_f0 & 0xffffffff00000000);
      (**(code **)(*param_5 + 0xf0))(param_5,&PTR_DAT_110c1cdb0,&uStack_f8);
      *(undefined4 *)(param_4 + 0x1a4) = uVar12;
      *(undefined4 *)(param_4 + 0x1a8) = param_2;
      *(undefined4 *)(param_4 + 0x1ac) = param_3;
      uVar10 = NEON_fmov(0x3f800000,4);
      plStack_f0 = (long *)CONCAT44(plStack_f0._4_4_,0x3f800000);
      uStack_f8 = uVar10;
      (**(code **)(*param_5 + 0xf0))(param_5,&PTR_s_scale_110c1f7e8,&uStack_f8);
      *(int *)(param_4 + 0x1b0) = (int)uVar10;
      *(undefined4 *)(param_4 + 0x1b4) = param_2;
      *(undefined4 *)(param_4 + 0x1b8) = param_3;
    }
    plVar8 = param_5;
    (**(code **)(*param_5 + 0x38))(param_5,&PTR_DAT_110c1cdd0,0);
    *(int *)(param_4 + 0x1c4) = (int)plVar8;
    ppuVar7 = &PTR_DAT_110c1cdf0;
    plVar8 = param_5;
    (**(code **)(*param_5 + 0x38))(param_5,&PTR_DAT_110c1cdf0,3);
    *(int *)(param_4 + 0x1c0) = (int)plVar8;
    plVar8 = param_5;
    (**(code **)(*param_5 + 0x220))();
LAB_10a7f0090:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
    ppuVar9 = ppuVar7;
    FUN_10a0f1ea0(&uStack_f8);
    if ((int)ppuVar7 != 1) break;
    ___cxa_begin_catch();
    if ((bRam000000011330a9e8 & 1) != 0) {
      (**(code **)(*plVar8 + 0x10))();
      plStack_100 = plVar8;
      func_0x00010ae06f08(0,1,&UNK_10f6793e2,&UNK_10f6794d2,0x206,&UNK_10f679521);
    }
    func_0x00010a7f0e54(param_4 + 0x1d0,0);
    ___cxa_end_catch();
  }
  __Unwind_Resume();
  pcStack_108 = FUN_10a7f01ac;
  plVar6 = plVar8;
  lStack_120 = param_4;
  plStack_118 = param_5;
  puStack_110 = &stack0xfffffffffffffff0;
  FUN_10a7f07a0();
  if ((int)plVar6 == 0) {
    uStack_130 = 0;
    plStack_128 = (long *)0x0;
    FUN_10a192264(plVar8 + 0x2f,&uStack_130);
    plVar6 = plStack_128;
    if (plStack_128 != (long *)0x0) {
      plVar1 = plStack_128 + 1;
      do {
        lVar11 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_128 + 0x10))(plStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    FUN_10a19ad28(plVar8 + 0x2f,ppuVar9);
    plVar6 = *(long **)(plVar8[0x2f] + 0xe0);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x90))();
      if (*plVar6 != 0) {
        lVar11 = *plVar6 + 0xf0;
        FUN_10ab6f6c8(lVar11,*(undefined4 *)((long)plVar8 + 0x1cc));
        if (lVar11 != 0) goto LAB_10a7f0294;
      }
    }
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f6793e2,&UNK_10f67942c,0x1c8,&UNK_10f6794a6);
    }
  }
  *(undefined4 *)((long)plVar8 + 0x1cc) = 4;
LAB_10a7f0294:
  lVar11 = plVar8[0x3c];
  plVar8[0x3c] = 0;
  if (lVar11 != 0) {
    FUN_10a812cc0();
  }
  plVar8[0x3e] = plVar8[0x3d];
  return;
}



/* Entry: 10a7f01ac; end: 10a7f02bb;  */

void FUN_10a7f01ac(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  lVar5 = param_1;
  FUN_10a7f07a0(param_1,*param_2);
  if ((int)lVar5 == 0) {
    uStack_30 = 0;
    plStack_28 = (long *)0x0;
    FUN_10a192264(param_1 + 0x178,&uStack_30);
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
  }
  else {
    FUN_10a19ad28(param_1 + 0x178,param_2);
    plVar4 = *(long **)(*(long *)(param_1 + 0x178) + 0xe0);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x90))();
      if (*plVar4 != 0) {
        lVar5 = *plVar4 + 0xf0;
        FUN_10ab6f6c8(lVar5,*(undefined4 *)(param_1 + 0x1cc));
        if (lVar5 != 0) goto LAB_10a7f0294;
      }
    }
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f6793e2,&UNK_10f67942c,0x1c8,&UNK_10f6794a6);
    }
  }
  *(undefined4 *)(param_1 + 0x1cc) = 4;
LAB_10a7f0294:
  lVar5 = *(long *)(param_1 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  if (lVar5 != 0) {
    FUN_10a812cc0();
  }
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0x1e8);
  return;
}



/* Entry: 10a7f02bc; end: 10a7f03b3;  */

void FUN_10a7f02bc(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_40;
  long *plStack_38;
  
  (**(code **)(*param_2 + 600))(&lStack_40);
  if ((lStack_40 != 0) &&
     (___dynamic_cast(lStack_40,&PTR_DAT_110b9fe10,&PTR_DAT_110c5ef38,0), lStack_40 != 0)) {
    *param_1 = lStack_40;
    param_1[1] = (long)plStack_38;
    param_1 = &lStack_40;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a7f03b4; end: 10a7f0417;  */

undefined8 * FUN_10a7f03b4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a7f0418; end: 10a7f0727;  */

void FUN_10a7f0418(ulong param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puStack_40;
  long *plStack_38;
  
  puStack_40 = &UNK_10f662183;
  plStack_38 = (long *)0x21;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c1f658,&puStack_40);
  FUN_10a4c3afc(param_2,&PTR_DAT_110bb3700,param_1 + 0x118,&UNK_10f65ce18,0x19);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c1ccb0,*(undefined1 *)(param_1 + 0x110));
  FUN_10a7f0728(&puStack_40,param_1);
  FUN_10a009b20(param_2,&PTR_DAT_110c1ccd0,&puStack_40,&UNK_10f63349d,0xe);
  plVar2 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  ppuVar7 = &PTR_DAT_110c1f728;
  lVar6 = 0xa0;
  do {
    (**(code **)(*param_2 + 0x70))
              (param_2,ppuVar7,(*(uint *)(param_1 + 0x170) & *(uint *)(ppuVar7 + 4)) != 0);
    ppuVar7 = ppuVar7 + 5;
    lVar6 = lVar6 + -0x28;
  } while (lVar6 != 0);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c1ccf0);
  uVar5 = param_1;
  FUN_10a7f07a0(param_1,*(undefined8 *)(param_1 + 0x178));
  if ((uVar5 & 1) == 0) {
    puStack_40 = (undefined *)0x0;
    plStack_38 = (long *)0x0;
  }
  else {
    puStack_40 = *(undefined **)(param_1 + 0x178);
    plStack_38 = *(long **)(param_1 + 0x180);
    if (plStack_38 != (long *)0x0) {
      plVar2 = plStack_38 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  FUN_10a38b7b4(param_2,&PTR_DAT_110c1cd10,&puStack_40,&UNK_10f6512b9,0x10);
  plVar2 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c1cd30,*(undefined8 *)(param_1 + 0x188));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c1cd50,*(undefined4 *)(param_1 + 0x1c8));
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x1bc),param_2,&PTR_DAT_110c1cd70);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c1f7c8,*(undefined4 *)(param_1 + 0x1cc));
  (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110c1cd90,param_1 + 0x198);
  (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110c1cdb0,param_1 + 0x1a4);
  (**(code **)(*param_2 + 0x80))(param_2,&PTR_s_scale_110c1f7e8,param_1 + 0x1b0);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c1cdd0,*(undefined4 *)(param_1 + 0x1c4));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c1cdf0,*(undefined4 *)(param_1 + 0x1c0));
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10a7f0728; end: 10a7f079f;  */

void FUN_10a7f0728(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined1 *puStack_28;
  
  uStack_2a = 1;
  puStack_28 = &uStack_2a;
  lVar4 = *(long *)(param_2 + 0x118) + 0x108;
  FUN_10a814778(lVar4,&uStack_2a,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
  lVar5 = *(long *)(lVar4 + 0x20);
  uVar6 = *(undefined8 *)(lVar4 + 0x18);
  param_1[1] = *(undefined8 *)(lVar4 + 0x20);
  *param_1 = uVar6;
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
  return;
}



/* Entry: 10a7f07a0; end: 10a7f080f;  */

bool FUN_10a7f07a0(long param_1,long param_2)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  if ((param_2 != 0) && (*(long *)(param_2 + 0xe0) == param_1)) {
    func_0x000107c2b054(auStack_38,&UNK_10f6795bd);
    FUN_10a812dd4(auStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7f07f4);
    (*pcVar1)();
  }
  return param_2 != 0;
}



/* Entry: 10a7f0810; end: 10a7f0843;  */

void FUN_10a7f0810(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lStack_50;
  long *plStack_48;
  
  func_0x00010a7e2008(*(long *)(param_1 + 0x118) + 0xe8,0,param_2);
  lVar9 = *(long *)(param_1 + 0x118);
  FUN_10a7e20bc(lVar9 + 0xe8);
  FUN_10a7e2370(lVar9 + 0xe8,0);
  FUN_10a7e2370(lVar9 + 0xe8,1);
  lStack_50 = *(long *)(lVar9 + 0xf8);
  plVar3 = *(long **)(lVar9 + 0x100);
  if (plVar3 == (long *)0x0) {
    if (*(long *)(param_1 + 0x130) == lStack_50) {
      return;
    }
    plStack_48 = (long *)0x0;
  }
  else {
    plVar1 = plVar3 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar10 = *(long *)(param_1 + 0x130);
    do {
      lVar7 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
    if (lVar10 == lStack_50) {
      return;
    }
    plStack_48 = *(long **)(lVar9 + 0x100);
    lStack_50 = *(long *)(lVar9 + 0xf8);
    if (*(long *)(lVar9 + 0x100) != 0) {
      plVar3 = (long *)(*(long *)(lVar9 + 0x100) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = *plVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  FUN_10a009fa8(param_1 + 0x130,&lStack_50);
  plVar3 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  FUN_10ab4cb54(*(undefined8 *)(param_1 + 0x150),0);
  *(undefined4 *)(param_1 + 0x174) = 0;
  lVar9 = *(long *)(*(long *)(param_1 + 0x118) + 0xf8);
  plVar3 = *(long **)(*(long *)(param_1 + 0x118) + 0x100);
  if (plVar3 == (long *)0x0) {
    ppuVar8 = *(undefined ***)(lVar9 + 0x68);
    ppuVar2 = &PTR_PTR_1132cfc60;
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar2 = ppuVar8;
    }
    if ((*(byte *)(ppuVar2 + 2) >> 3 & 1) != 0) goto LAB_10a7f09b8;
  }
  else {
    plVar1 = plVar3 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    ppuVar8 = *(undefined ***)(lVar9 + 0x68);
    ppuVar2 = &PTR_PTR_1132cfc60;
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar2 = ppuVar8;
    }
    uVar4 = *(uint *)(ppuVar2 + 2);
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
    if ((uVar4 >> 3 & 1) != 0) goto LAB_10a7f09b8;
  }
  *(undefined4 *)(param_1 + 0x1c4) = 0;
LAB_10a7f09b8:
  lVar9 = *(long *)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if (lVar9 != 0) {
    FUN_10a812cc0();
  }
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0x1e8);
  return;
}



/* Entry: 10a7f0844; end: 10a7f0a27;  */

void FUN_10a7f0844(long param_1)

{
  long *plVar1;
  undefined **ppuVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lStack_50;
  long *plStack_48;
  
  lVar9 = *(long *)(param_1 + 0x118);
  FUN_10a7e20bc(lVar9 + 0xe8);
  FUN_10a7e2370(lVar9 + 0xe8,0);
  FUN_10a7e2370(lVar9 + 0xe8,1);
  lStack_50 = *(long *)(lVar9 + 0xf8);
  plVar3 = *(long **)(lVar9 + 0x100);
  if (plVar3 == (long *)0x0) {
    if (*(long *)(param_1 + 0x130) == lStack_50) {
      return;
    }
    plStack_48 = (long *)0x0;
  }
  else {
    plVar1 = plVar3 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar10 = *(long *)(param_1 + 0x130);
    do {
      lVar7 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
    if (lVar10 == lStack_50) {
      return;
    }
    plStack_48 = *(long **)(lVar9 + 0x100);
    lStack_50 = *(long *)(lVar9 + 0xf8);
    if (*(long *)(lVar9 + 0x100) != 0) {
      plVar3 = (long *)(*(long *)(lVar9 + 0x100) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = *plVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  FUN_10a009fa8(param_1 + 0x130,&lStack_50);
  plVar3 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  FUN_10ab4cb54(*(undefined8 *)(param_1 + 0x150),0);
  *(undefined4 *)(param_1 + 0x174) = 0;
  lVar9 = *(long *)(*(long *)(param_1 + 0x118) + 0xf8);
  plVar3 = *(long **)(*(long *)(param_1 + 0x118) + 0x100);
  if (plVar3 == (long *)0x0) {
    ppuVar8 = *(undefined ***)(lVar9 + 0x68);
    ppuVar2 = &PTR_PTR_1132cfc60;
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar2 = ppuVar8;
    }
    if ((*(byte *)(ppuVar2 + 2) >> 3 & 1) != 0) goto LAB_10a7f09b8;
  }
  else {
    plVar1 = plVar3 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    ppuVar8 = *(undefined ***)(lVar9 + 0x68);
    ppuVar2 = &PTR_PTR_1132cfc60;
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar2 = ppuVar8;
    }
    uVar4 = *(uint *)(ppuVar2 + 2);
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
    if ((uVar4 >> 3 & 1) != 0) goto LAB_10a7f09b8;
  }
  *(undefined4 *)(param_1 + 0x1c4) = 0;
LAB_10a7f09b8:
  lVar9 = *(long *)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if (lVar9 != 0) {
    FUN_10a812cc0();
  }
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0x1e8);
  return;
}



/* Entry: 10a7f0a28; end: 10a7f0afb;  */

void FUN_10a7f0a28(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined1 *puStack_28;
  
  uStack_2a = 0;
  puStack_28 = &uStack_2a;
  lVar4 = *(long *)(param_2 + 0x118) + 0x108;
  FUN_10a814778(lVar4,&uStack_2a,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
  lVar5 = *(long *)(lVar4 + 0x20);
  uVar6 = *(undefined8 *)(lVar4 + 0x18);
  param_1[1] = *(undefined8 *)(lVar4 + 0x20);
  *param_1 = uVar6;
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
  return;
}



/* Entry: 10a7f0afc; end: 10a7f0b27;  */

void FUN_10a7f0afc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(param_2 + 0x118);
  lVar4 = *(long *)(lVar5 + 0xf0);
  uVar6 = *(undefined8 *)(lVar5 + 0xe8);
  param_1[1] = *(undefined8 *)(lVar5 + 0xf0);
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



/* Entry: 10a7f0b28; end: 10a7f0cbf;  */

void FUN_10a7f0b28(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long lStack_30;
  long *plStack_28;
  
  lStack_30 = *param_2;
  plStack_28 = (long *)param_2[1];
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
  if (lStack_30 == 0) {
    FUN_10a7ea4c0(&lStack_40,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x118));
    plVar1 = plStack_28;
    plStack_28 = plStack_38;
    lStack_30 = lStack_40;
    lStack_40 = 0;
    plStack_38 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      plVar2 = plVar1 + 1;
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
        (**(code **)(*plVar1 + 0x10))(plVar1);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
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
  }
  lVar5 = lStack_30;
  FUN_10a7f0728(&lStack_40,param_1);
  func_0x00010a7e2008(lVar5 + 0xe8,1,&lStack_40);
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
  func_0x00010a3a78dc(param_1 + 0x118,&lStack_30);
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



/* Entry: 10a7f0cc0; end: 10a7f0dc3;  */

void FUN_10a7f0cc0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)(*(long *)(param_2 + 0x118) + 0xf8);
  plVar2 = *(long **)(*(long *)(param_2 + 0x118) + 0x100);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((lVar6 == 0) || ((*(byte *)(lVar6 + 0x10) >> 4 & 1) == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar6 + 0x68);
    uVar8 = *(undefined8 *)(*(long *)(param_2 + 0x90) + 0x870);
    uVar5 = uVar7;
    func_0x0001093112d0(uVar7);
    FUN_10a1c3d88(param_1,uVar8,uVar5);
    func_0x00010b4d1758(uVar7,*(undefined8 *)*param_1,*(undefined4 *)((undefined8 *)*param_1 + 1));
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar2);
      return;
    }
  }
  return;
}



/* Entry: 10a7f0dc4; end: 10a7f0dd7;  */

void FUN_10a7f0dc4(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x140);
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x90) + 0x870);
  if (lVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar1 = lVar3;
    func_0x00010930f628(lVar3);
    FUN_10a1c3d88(param_1,uVar2,lVar1);
    func_0x00010b4d1758(lVar3,*(undefined8 *)*param_1,*(undefined4 *)((undefined8 *)*param_1 + 1));
  }
  return;
}



/* Entry: 10a7f0dd8; end: 10a7f0e97;  */

undefined8 * FUN_10a7f0dd8(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
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



/* Entry: 10a7f0e98; end: 10a7f0fbf;  */

void FUN_10a7f0e98(long param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined1 auStack_60 [44];
  uint uStack_34;
  undefined1 uStack_30;
  byte bStack_28;
  
  FUN_10a7f0844();
  FUN_10a7eb2e8(auStack_60,*(undefined8 *)(param_1 + 0x118));
  if (bStack_28 != 1) goto LAB_10a7f0f90;
  uStack_30 = *(int *)(param_1 + 0x1c4) == 1;
  if (*(char *)(param_1 + 0x110) == '\x01') {
    uVar3 = *(long *)(param_1 + 0x118) + 0xe8;
    FUN_10a7e26a4(uVar3,1);
    if ((uVar3 & 1) != 0) {
      uVar1 = *(uint *)(param_1 + 0x170);
      if ((uVar1 >> 1 & 1) == 0) {
        if ((uVar1 >> 2 & 1) == 0) goto LAB_10a7f0f40;
        if ((bStack_28 & 1) == 0) goto LAB_10a7f0fa8;
      }
      else {
        if ((bStack_28 & 1) == 0) goto LAB_10a7f0fa8;
        uStack_34 = uStack_34 | 1;
        if ((uVar1 >> 2 & 1) == 0) goto LAB_10a7f0f3c;
      }
      uStack_34 = uStack_34 | 2;
      goto LAB_10a7f0f3c;
    }
  }
  else {
LAB_10a7f0f3c:
    bStack_28 = 1;
  }
LAB_10a7f0f40:
  if (*(char *)(param_1 + 0x128) == '\x01') {
    if ((bStack_28 & 1) == 0) {
LAB_10a7f0fa8:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7f0fac);
      (*pcVar2)();
    }
    uStack_34 = uStack_34 | 4;
  }
  else if ((bStack_28 & 1) == 0) goto LAB_10a7f0fa8;
  uStack_34 = uStack_34 | 0x40;
  if ((*(byte *)(param_2 + 0x2b0) & 1) == 0) {
    *(undefined8 *)(param_2 + 0x298) = 0;
    *(undefined8 *)(param_2 + 0x2a0) = 0;
    *(undefined8 *)(param_2 + 0x2a8) = 0;
    *(undefined1 *)(param_2 + 0x2b0) = 1;
  }
  FUN_10aad0050((undefined8 *)(param_2 + 0x298),auStack_60);
LAB_10a7f0f90:
  func_0x00010a7fd678(auStack_60);
  return;
}



/* Entry: 10a7f0fc0; end: 10a7f0fc7;  */

void FUN_10a7f0fc0(long param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined1 auStack_60 [44];
  uint uStack_34;
  undefined1 uStack_30;
  byte bStack_28;
  
  FUN_10a7f0844();
  FUN_10a7eb2e8(auStack_60,*(undefined8 *)(param_1 + 0x30));
  if (bStack_28 != 1) goto LAB_10a7f0f90;
  uStack_30 = *(int *)(param_1 + 0xdc) == 1;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar3 = *(long *)(param_1 + 0x30) + 0xe8;
    FUN_10a7e26a4(uVar3,1);
    if ((uVar3 & 1) != 0) {
      uVar1 = *(uint *)(param_1 + 0x88);
      if ((uVar1 >> 1 & 1) == 0) {
        if ((uVar1 >> 2 & 1) == 0) goto LAB_10a7f0f40;
        if ((bStack_28 & 1) == 0) goto LAB_10a7f0fa8;
      }
      else {
        if ((bStack_28 & 1) == 0) goto LAB_10a7f0fa8;
        uStack_34 = uStack_34 | 1;
        if ((uVar1 >> 2 & 1) == 0) goto LAB_10a7f0f3c;
      }
      uStack_34 = uStack_34 | 2;
      goto LAB_10a7f0f3c;
    }
  }
  else {
LAB_10a7f0f3c:
    bStack_28 = 1;
  }
LAB_10a7f0f40:
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if ((bStack_28 & 1) == 0) {
LAB_10a7f0fa8:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7f0fac);
      (*pcVar2)();
    }
    uStack_34 = uStack_34 | 4;
  }
  else if ((bStack_28 & 1) == 0) goto LAB_10a7f0fa8;
  uStack_34 = uStack_34 | 0x40;
  if ((*(byte *)(param_2 + 0x2b0) & 1) == 0) {
    *(undefined8 *)(param_2 + 0x298) = 0;
    *(undefined8 *)(param_2 + 0x2a0) = 0;
    *(undefined8 *)(param_2 + 0x2a8) = 0;
    *(undefined1 *)(param_2 + 0x2b0) = 1;
  }
  FUN_10aad0050((undefined8 *)(param_2 + 0x298),auStack_60);
LAB_10a7f0f90:
  func_0x00010a7fd678(auStack_60);
  return;
}



/* Entry: 10a7f0fc8; end: 10a7f11ef;  */

void FUN_10a7f0fc8(long *param_1,long param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  undefined8 uStack_40;
  long *plStack_38;
  
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  lVar6 = *(long *)(param_1[0x23] + 0xf8);
  plVar3 = *(long **)(param_1[0x23] + 0x100);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (lVar6 != 0) {
    lVar6 = *(long *)(param_2 + 0x78);
    FUN_10aacfcb0(lVar6,"body",4);
    if (lVar6 == 0) {
      uStack_40 = 0;
      plStack_38 = (long *)0x0;
    }
    else {
      plStack_38 = *(long **)(lVar6 + 0x20);
      uStack_40 = *(undefined8 *)(lVar6 + 0x18);
      if (*(long *)(lVar6 + 0x20) != 0) {
        plVar3 = (long *)(*(long *)(lVar6 + 0x20) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *plVar3 = *plVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    func_0x00010a504104(param_1 + 0x28,&uStack_40);
    plVar3 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar6 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    lVar6 = param_1[0x28];
    if (lVar6 != 0) {
      uVar7 = *(ulong *)(lVar6 + 0x18);
      puVar8 = (ulong *)(lVar6 + 0x18);
      if ((uVar7 & 1) != 0) {
        puVar8 = (ulong *)(uVar7 + 7);
      }
      if (*(int *)(lVar6 + 0x20) != 0) {
        lVar6 = (long)*(int *)(lVar6 + 0x20) << 3;
        do {
          uVar7 = *puVar8;
          if ((((*(char *)(uVar7 + 0x13c) == '\x01') && ((*(byte *)(uVar7 + 0x12) >> 5 & 1) != 0))
              && (*(int *)(uVar7 + 0x144) == *(int *)(param_1[0x23] + 0xe0))) &&
             (*(int *)(uVar7 + 0x38) != 0)) {
            FUN_10a7f11f0(param_1,uVar7);
            ppuVar2 = &PTR_PTR_1132d6de0;
            if (*(undefined ***)(uVar7 + 0xd0) != (undefined **)0x0) {
              ppuVar2 = *(undefined ***)(uVar7 + 0xd0);
            }
            FUN_10a7f416c(&uStack_40,*(undefined8 *)(param_1[0x12] + 0x870),ppuVar2);
            func_0x00010a36f2e0(param_1 + 0x2c,&uStack_40);
            plVar3 = plStack_38;
            if (plStack_38 != (long *)0x0) {
              plVar1 = plStack_38 + 1;
              do {
                lVar6 = *plVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *plVar1 = lVar6 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar6 == 0) {
                (**(code **)(*plStack_38 + 0x10))(plStack_38);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
              }
            }
            *(undefined4 *)((long)param_1 + 0x74) = 2;
            break;
          }
          puVar8 = puVar8 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
    }
  }
  (**(code **)(*param_1 + 0xa0))(param_1);
  return;
}



/* Entry: 10a7f11f0; end: 10a7f3ec7;  */

/* WARNING: Removing unreachable block (ram,0x00010a7f2594) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a7f11f0(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,long param_5)

{
  long ******pppppplVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  code *pcVar11;
  bool bVar12;
  long *plVar13;
  long *******ppppppplVar14;
  long *******ppppppplVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long *******ppppppplVar19;
  long ******pppppplVar20;
  long *plVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  ulong *puVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  long *plVar29;
  ulong uVar30;
  uint *puVar31;
  int iVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 *puVar35;
  float *pfVar36;
  long *****ppppplVar37;
  undefined4 *puVar38;
  undefined *puVar39;
  ulong uVar40;
  long lVar41;
  long lVar42;
  undefined4 *puVar43;
  long *plVar44;
  long lVar45;
  long lVar46;
  ushort *puVar47;
  undefined **ppuVar48;
  long lVar49;
  ulong uVar50;
  undefined **ppuVar51;
  long *plVar52;
  long lVar53;
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined8 uVar69;
  ulong uStack_330;
  undefined8 *puStack_328;
  ulong uStack_318;
  long lStack_310;
  ulong uStack_2f0;
  long lStack_2e8;
  ulong uStack_2e0;
  long lStack_2d8;
  ulong uStack_2d0;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined1 auStack_280 [8];
  float fStack_278;
  undefined8 uStack_270;
  float fStack_268;
  undefined8 uStack_260;
  float fStack_258;
  ulong uStack_250;
  float fStack_248;
  undefined1 auStack_240 [4];
  undefined1 auStack_23c [8];
  undefined8 uStack_234;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  long lStack_200;
  long *plStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *******ppppppplStack_1a8;
  undefined8 uStack_1a0;
  float fStack_198;
  undefined4 uStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  undefined8 uStack_184;
  undefined8 uStack_17c;
  undefined4 uStack_174;
  long lStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  long ******pppppplStack_150;
  long ******pppppplStack_148;
  long ******pppppplStack_138;
  long ******pppppplStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *******ppppppplStack_118;
  long *******ppppppplStack_110;
  long *******ppppppplStack_108;
  long *******ppppppplStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = *(long *)(param_4[0x23] + 0xf8);
  plVar21 = *(long **)(param_4[0x23] + 0x100);
  if (plVar21 != (long *)0x0) {
    plVar13 = plVar21 + 1;
    do {
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar12) {
        *plVar13 = *plVar13 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  plVar13 = param_4;
  lStack_200 = lVar24;
  plStack_1f8 = plVar21;
  FUN_10a7f07a0(param_4,param_4[0x2f]);
  if (((int)plVar13 == 0) || (param_4[0x3a] == 0)) {
    uVar6 = *(uint *)(param_4 + 0x2e);
    if (uVar6 != *(uint *)((long)param_4 + 0x174)) {
      lVar42 = 0x40;
      fStack_f8 = 0.0;
      fStack_f4 = 0.0;
      ppppppplStack_100 = (long *******)0x0;
      fStack_e8 = 0.0;
      fStack_e4 = 0.0;
      fStack_f0 = 0.0;
      fStack_ec = 0.0;
      fStack_e0 = 1.0;
      puVar26 = (ulong *)&UNK_110c1f810;
      do {
        puVar31 = (uint *)puVar26[-1];
        ppppppplVar15 = (long *******)*puVar26;
        if (ppppppplVar15 == (long *******)0xa) {
          if (*(long *)puVar31 != 0x61685f7468676972 || (short)puVar31[2] != 0x646e)
          goto LAB_10a7f14ec;
          uVar23 = 4;
        }
        else if (ppppppplVar15 == (long *******)0x9) {
          if (*(long *)puVar31 != 0x6e61685f7466656c || (char)puVar31[2] != 'd') goto LAB_10a7f14ec;
          uVar23 = 2;
        }
        else if (ppppppplVar15 == (long *******)0x4) {
          if (*puVar31 == 0x79646f62) {
            uVar23 = 1;
          }
          else {
            uVar23 = (*puVar31 & 0xff00ff00) >> 8 | (*puVar31 & 0xff00ff) << 8;
            uVar23 = uVar23 >> 0x10 | uVar23 << 0x10;
            uVar22 = (uint)(0x68656164 < uVar23);
            if (uVar23 < 0x68656164) {
              uVar22 = 0xffffffff;
            }
            uVar23 = 8;
            if (uVar22 != 0) {
              uVar23 = 0;
            }
          }
        }
        else {
LAB_10a7f14ec:
          uVar23 = 0;
        }
        if ((uVar23 & uVar6) != 0) {
          if ((long *******)0x7ffffffffffffff7 < ppppppplVar15) {
            func_0x000109ffde50();
            goto LAB_10a7f3b94;
          }
          if (ppppppplVar15 < (long *******)0x17) {
            uStack_1a0 = CONCAT17((char)ppppppplVar15,(undefined7)uStack_1a0);
            ppppppplVar14 = (long *******)&uStack_1b0;
            if (ppppppplVar15 != (long *******)0x0) goto LAB_10a7f153c;
          }
          else {
            ppppppplVar19 = (long *******)0x19;
            if (((ulong)ppppppplVar15 | 7) != 0x17) {
              ppppppplVar19 = (long *******)(((ulong)ppppppplVar15 | 7) + 1);
            }
            ppppppplVar14 = ppppppplVar19;
            __Znwm();
            uStack_1a0 = (ulong)ppppppplVar19 | 0x8000000000000000;
            uStack_1b0 = ppppppplVar14;
            ppppppplStack_1a8 = ppppppplVar15;
LAB_10a7f153c:
            _memmove(ppppppplVar14,puVar31,ppppppplVar15);
          }
          *(undefined1 *)((long)ppppppplVar14 + (long)ppppppplVar15) = 0;
          func_0x00010726db4c(&ppppppplStack_100,&uStack_1b0,&uStack_1b0);
          if ((long)uStack_1a0 < 0) {
            __ZdlPv(uStack_1b0);
          }
        }
        lVar24 = lStack_200;
        puVar26 = puVar26 + 2;
        lVar42 = lVar42 + -0x10;
      } while (lVar42 != 0);
      ppuVar28 = &PTR_PTR_1132cfc60;
      if (*(undefined ***)(lStack_200 + 0x68) != (undefined **)0x0) {
        ppuVar28 = *(undefined ***)(lStack_200 + 0x68);
      }
      FUN_10a7e3e7c(param_4[0x2a],ppuVar28,&ppppppplStack_100);
      *(int *)((long)param_4 + 0x174) = (int)param_4[0x2e];
      func_0x000107c2826c(&ppppppplStack_100);
    }
    ppuVar28 = &PTR_PTR_1132cfc60;
    if (*(undefined ***)(lVar24 + 0x68) != (undefined **)0x0) {
      ppuVar28 = *(undefined ***)(lVar24 + 0x68);
    }
    FUN_10a7e4114(param_4[0x2a],param_5,ppuVar28,&UNK_10e482af0);
    param_4 = plStack_1f8;
LAB_10a7f15ec:
    if (param_4 != (long *)0x0) {
      plVar21 = param_4 + 1;
      do {
        lVar24 = *plVar21;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar12) {
          *plVar21 = lVar24 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*param_4 + 0x10))(param_4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(param_4);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar24 = 0;
    auStack_240 = (undefined1  [4])0x3f800000;
    ppuVar28 = &PTR_PTR_1132d6de0;
    if (*(undefined ***)(param_5 + 0xd0) != (undefined **)0x0) {
      ppuVar28 = *(undefined ***)(param_5 + 0xd0);
    }
    uStack_234 = 0;
    auStack_23c = (undefined1  [8])0x0;
    uStack_22c = 0x3f800000;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_218 = 0x3f800000;
    uStack_204 = 0x3f800000;
    puVar38 = (undefined4 *)ppuVar28[10];
    do {
      lVar41 = 0;
      lVar42 = 0;
      puVar43 = puVar38;
      do {
        puVar16 = (undefined8 *)((long)auStack_23c + lVar42 * 0x10 + 4);
        if ((int)lVar24 != 2) {
          puVar16 = (undefined8 *)((long)auStack_240 + lVar41);
        }
        puVar35 = (undefined8 *)((long)auStack_23c + lVar42 * 2 * 8);
        if ((int)lVar24 != 1) {
          puVar35 = puVar16;
        }
        *(undefined4 *)puVar35 = *puVar43;
        lVar42 = lVar42 + 1;
        lVar41 = lVar41 + 0x10;
        puVar43 = puVar43 + 1;
      } while (lVar41 != 0x30);
      lVar24 = lVar24 + 1;
      puVar38 = puVar38 + 3;
    } while (lVar24 != 3);
    uStack_208 = *(undefined4 *)((long)ppuVar28[8] + 8);
    uStack_210 = *(undefined8 *)ppuVar28[8];
    func_0x0001094f5708(auStack_280,auStack_240);
    FUN_10a1322a0(&puStack_298,(long)*(int *)(param_5 + 0x38));
    uVar25 = *(ulong *)(param_5 + 0x30);
    puVar26 = (ulong *)(param_5 + 0x30);
    if ((uVar25 & 1) != 0) {
      puVar26 = (ulong *)(uVar25 + 7);
    }
    if (*(int *)(param_5 + 0x38) != 0) {
      lVar24 = (long)*(int *)(param_5 + 0x38) << 3;
      puVar16 = puStack_298;
      do {
        uVar25 = *puVar26;
        fVar54 = *(float *)(uVar25 + 0x18);
        fVar57 = *(float *)(uVar25 + 0x1c);
        fVar60 = *(float *)(uVar25 + 0x20);
        *puVar16 = CONCAT44(auStack_280._4_4_ * fVar54 + (float)((ulong)uStack_270 >> 0x20) * fVar57
                            + (float)((ulong)uStack_260 >> 0x20) * fVar60 +
                              (float)(uStack_250 >> 0x20),
                            auStack_280._0_4_ * fVar54 + (float)uStack_270 * fVar57 +
                            (float)uStack_260 * fVar60 + (float)uStack_250);
        *(float *)(puVar16 + 1) =
             fVar54 * fStack_278 + fVar57 * fStack_268 + fVar60 * fStack_258 + fStack_248;
        puVar16 = (undefined8 *)((long)puVar16 + 0xc);
        lVar24 = lVar24 + -8;
        puVar26 = puVar26 + 1;
        param_3 = uStack_250;
      } while (lVar24 != 0);
    }
    plVar13 = *(long **)(param_4[0x2f] + 0xe0);
    if (plVar13 == (long *)0x0) {
      lVar24 = 0;
    }
    else {
      (**(code **)(*plVar13 + 0x90))();
      lVar24 = *plVar13;
    }
    FUN_10ab6f160();
    lVar42 = *(long *)(lVar24 + 0x100);
    lVar24 = *(long *)(lVar24 + 0xf8);
    lVar41 = lVar24;
    for (; (lVar24 != lVar42 && (lVar41 = lVar24, *(long *)(lVar24 + 0x18) != lRam00000001138358d8))
        ; lVar24 = lVar24 + 0x38) {
      lVar41 = lVar42;
    }
    FUN_10a7e2c24(&ppppppplStack_100);
    func_0x000107c2b074(&uStack_1b0,&PTR_DAT_110c1f848);
    ppppppplVar15 = (long *******)&ppppppplStack_100;
    FUN_10ab6f7f8(ppppppplVar15,&uStack_1b0,5,2,0);
    if ((long)uStack_1a0 < 0) {
      __ZdlPv(uStack_1b0);
      ppppppplVar15 = uStack_1b0;
    }
    if (lVar41 != lVar42 && lVar41 != 0) {
      FUN_10ab6f160();
      FUN_10ab6f958(&fStack_f8,ppppppplVar15);
      FUN_10ab6f86c(&ppppppplStack_100);
    }
    lVar24 = param_4[0x2a];
    *(undefined4 *)(lVar24 + 0xf0) = ppppppplStack_100._0_4_;
    if ((long ********)(lVar24 + 0xf0) != &ppppppplStack_100) {
      FUN_10a1903c4(lVar24 + 0xf8,CONCAT44(fStack_f4,fStack_f8),CONCAT44(fStack_ec,fStack_f0),
                    (CONCAT44(fStack_ec,fStack_f0) - CONCAT44(fStack_f4,fStack_f8) >> 3) *
                    0x6db6db6db6db6db7);
    }
    ppppppplVar15 = (long *******)CONCAT44(fStack_dc,fStack_e0);
    *(ulong *)(lVar24 + 0x118) = CONCAT44(fStack_d4,fStack_d8);
    *(long ********)(lVar24 + 0x110) = ppppppplVar15;
    *(undefined8 *)(lVar24 + 0x128) = uStack_c8;
    *(ulong *)(lVar24 + 0x120) = uStack_d0;
    *(undefined8 *)(lVar24 + 0x130) = uStack_c0;
    uStack_1b0 = (long *******)&fStack_f8;
    uVar25 = uStack_d0;
    func_0x00010a190844(&uStack_1b0);
    lVar24 = *(long *)(param_4[0x3a] + 0x10);
    lVar42 = *(long *)(param_4[0x3a] + 0x18);
    plVar13 = *(long **)(param_4[0x2f] + 0xe0);
    if (plVar13 == (long *)0x0) {
      lVar41 = 0;
    }
    else {
      (**(code **)(*plVar13 + 0x90))();
      lVar41 = *plVar13;
    }
    uVar6 = *(uint *)(lVar41 + 0xf0);
    if (uVar6 == 0) {
      uVar33 = 0;
    }
    else {
      uVar33 = 0;
      if ((ulong)uVar6 != 0) {
        uVar33 = (ulong)(*(long *)(lVar41 + 0x18) - *(long *)(lVar41 + 0x10)) / (ulong)uVar6;
      }
      uVar33 = uVar33 & 0xffffffff;
    }
    if ((lVar42 - lVar24 >> 3) * -0x5555555555555555 - uVar33 == 0) {
      lVar24 = *(long *)(param_4[0x23] + 0xf8);
      plVar13 = *(long **)(param_4[0x23] + 0x100);
      if (plVar13 != (long *)0x0) {
        plVar29 = plVar13 + 1;
        do {
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar12) {
            *plVar29 = *plVar29 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      lVar42 = param_4[0x3b];
      if (lVar24 == 0) {
        param_4[0x3b] = 0;
        if (lVar42 != 0) {
          FUN_10a812cc0();
        }
        param_4[0x3e] = param_4[0x3d];
      }
      else if (lVar42 == 0) {
        puVar16 = (undefined8 *)0x90;
        __Znwm();
        puVar16[0xf] = 0;
        puVar16[0xe] = 0;
        puVar16[0x11] = 0;
        puVar16[0x10] = 0;
        puVar16[0xb] = 0;
        puVar16[10] = 0;
        puVar16[0xd] = 0;
        puVar16[0xc] = 0;
        puVar16[7] = 0;
        puVar16[6] = 0;
        puVar16[9] = 0;
        puVar16[8] = 0;
        puVar16[3] = 0;
        puVar16[2] = 0;
        puVar16[5] = 0;
        puVar16[4] = 0;
        puVar16[1] = 0;
        *puVar16 = 0;
        param_4[0x3b] = (long)puVar16;
        ppuVar28 = &PTR_PTR_1132cfc60;
        if (*(undefined ***)(lVar24 + 0x68) != (undefined **)0x0) {
          ppuVar28 = *(undefined ***)(lVar24 + 0x68);
        }
        puVar39 = ppuVar28[0x13];
        ppuVar48 = ppuVar28 + 0x13;
        if (((ulong)puVar39 & 1) != 0) {
          ppuVar48 = (undefined **)(puVar39 + 7);
        }
        if (*(int *)(ppuVar28 + 0x14) != 0) {
          ppuVar51 = ppuVar28 + 9;
          ppuVar28 = ppuVar48 + *(int *)(ppuVar28 + 0x14);
          do {
            puVar26 = (ulong *)(*ppuVar48 + 0x18);
            uVar33 = *puVar26;
            if ((uVar33 & 1) != 0) {
              puVar26 = (ulong *)(uVar33 + 7);
            }
            iVar32 = *(int *)(*ppuVar48 + 0x20);
            if (iVar32 != 0) {
              puVar2 = puVar26 + iVar32;
              do {
                uVar33 = *puVar26;
                ppuVar27 = *(undefined ***)(uVar33 + 0x28);
                ppuVar3 = &PTR_PTR_1132d7ff8;
                if (ppuVar27 != (undefined **)0x0) {
                  ppuVar3 = ppuVar27;
                }
                lVar42 = (long)*(int *)(ppuVar3 + 3);
                if (*(int *)(ppuVar3 + 3) < *(int *)((long)ppuVar3 + 0x1c)) {
                  lVar41 = lVar42 * 8;
                  do {
                    ppuVar3 = ppuVar51;
                    if (((ulong)*ppuVar51 & 1) != 0) {
                      ppuVar3 = (undefined **)(*ppuVar51 + lVar41 + 7);
                    }
                    ppppppplStack_100._0_4_ = *(undefined4 *)(*ppuVar3 + 0x18);
                    FUN_109febd04(param_4[0x3b] + 0x60,&ppppppplStack_100);
                    ppuVar3 = ppuVar51;
                    if (((ulong)*ppuVar51 & 1) != 0) {
                      ppuVar3 = (undefined **)(*ppuVar51 + lVar41 + 7);
                    }
                    ppppppplStack_100._0_4_ = *(undefined4 *)(*ppuVar3 + 0x1c);
                    FUN_109febd04(param_4[0x3b] + 0x60,&ppppppplStack_100);
                    ppuVar3 = ppuVar51;
                    if (((ulong)*ppuVar51 & 1) != 0) {
                      ppuVar3 = (undefined **)(*ppuVar51 + lVar41 + 7);
                    }
                    ppppppplStack_100 =
                         (long *******)
                         CONCAT44(ppppppplStack_100._4_4_,*(undefined4 *)(*ppuVar3 + 0x20));
                    FUN_109febd04(param_4[0x3b] + 0x60,&ppppppplStack_100);
                    lVar42 = lVar42 + 1;
                    ppuVar27 = *(undefined ***)(uVar33 + 0x28);
                    ppuVar3 = &PTR_PTR_1132d7ff8;
                    if (ppuVar27 != (undefined **)0x0) {
                      ppuVar3 = ppuVar27;
                    }
                    lVar41 = lVar41 + 8;
                  } while (lVar42 < *(int *)((long)ppuVar3 + 0x1c));
                }
                puVar26 = puVar26 + 1;
              } while (puVar26 != puVar2);
            }
            ppuVar48 = ppuVar48 + 1;
          } while (ppuVar48 != ppuVar28);
        }
        func_0x0001096b5198();
        ppuVar28 = &PTR_PTR_1132cfc60;
        if (*(undefined ***)(lVar24 + 0x68) != (undefined **)0x0) {
          ppuVar28 = *(undefined ***)(lVar24 + 0x68);
        }
        func_0x0001096b5544(param_4[0x3b] + 0x48,(long)*(int *)(ppuVar28 + 0xf));
        ppuVar28 = &PTR_PTR_1132cfc60;
        if (*(undefined ***)(lVar24 + 0x68) != (undefined **)0x0) {
          ppuVar28 = *(undefined ***)(lVar24 + 0x68);
        }
        func_0x0001096b5198(param_4[0x3b] + 0x18,(long)*(int *)(ppuVar28 + 0xf));
        ppuVar28 = &PTR_PTR_1132cfc60;
        if (*(undefined ***)(lVar24 + 0x68) != (undefined **)0x0) {
          ppuVar28 = *(undefined ***)(lVar24 + 0x68);
        }
        func_0x00010983d048(param_4[0x3b] + 0x30,(long)*(int *)(ppuVar28 + 0xf));
        ppuVar28 = &PTR_PTR_1132cfc60;
        if (*(undefined ***)(lVar24 + 0x68) != (undefined **)0x0) {
          ppuVar28 = *(undefined ***)(lVar24 + 0x68);
        }
        if (0 < *(int *)(ppuVar28 + 0xf)) {
          lVar42 = 0;
          uVar33 = 0;
          do {
            lVar41 = *(long *)(param_4[0x3b] + 0x48);
            if ((ulong)(*(long *)(param_4[0x3b] + 0x50) - lVar41 >> 3) <= uVar33)
            goto LAB_10a7f3b94;
            uVar7 = *(undefined4 *)(ppuVar28[0x12] + uVar33 * 4);
            puVar38 = (undefined4 *)(lVar41 + lVar42);
            *puVar38 = *(undefined4 *)(ppuVar28[0x10] + uVar33 * 4);
            puVar38[1] = uVar7;
            uVar33 = uVar33 + 1;
            ppuVar28 = &PTR_PTR_1132cfc60;
            if (*(undefined ***)(lVar24 + 0x68) != (undefined **)0x0) {
              ppuVar28 = *(undefined ***)(lVar24 + 0x68);
            }
            lVar42 = lVar42 + 8;
          } while ((long)uVar33 < (long)*(int *)(ppuVar28 + 0xf));
        }
        if (0 < *(int *)(ppuVar28 + 0x1b)) {
          lVar42 = 0;
          uVar33 = 0;
          lVar41 = 8;
          do {
            if (*(int *)((long)param_4 + 0x1c4) == 1) {
              ppuVar28 = ppuVar28 + 0x16;
            }
            else {
              ppuVar48 = &PTR_PTR_1132d70f0;
              if ((undefined **)ppuVar28[0x1a] != (undefined **)0x0) {
                ppuVar48 = (undefined **)ppuVar28[0x1a];
              }
              ppuVar28 = ppuVar48 + 0x1e;
            }
            if (((ulong)*ppuVar28 & 1) != 0) {
              ppuVar28 = (undefined **)(*ppuVar28 + lVar41 + -1);
            }
            func_0x000109340914(&ppppppplStack_100,0,*ppuVar28);
            lVar49 = *(long *)param_4[0x3b];
            uVar25 = (((long *)param_4[0x3b])[1] - lVar49 >> 2) * -0x5555555555555555;
            if (uVar25 < uVar33 || uVar25 - uVar33 == 0) goto LAB_10a7f3b94;
            puVar26 = (ulong *)(lVar49 + lVar42);
            uVar25 = CONCAT44(fStack_e4,fStack_e8);
            *puVar26 = uVar25;
            *(float *)(puVar26 + 1) = fStack_e0;
            if (((uint)fStack_f8 & 1) != 0) {
              func_0x0001053936ac(&fStack_f8);
            }
            uVar33 = uVar33 + 1;
            ppuVar28 = &PTR_PTR_1132cfc60;
            if (*(undefined ***)(lVar24 + 0x68) != (undefined **)0x0) {
              ppuVar28 = *(undefined ***)(lVar24 + 0x68);
            }
            lVar42 = lVar42 + 0xc;
            lVar41 = lVar41 + 8;
          } while ((long)uVar33 < (long)*(int *)(ppuVar28 + 0x1b));
        }
        lVar24 = *(long *)param_4[0x3b];
        FUN_10a7f41e0(&ppppppplStack_100,
                      (int)((ulong)(((long *)param_4[0x3b])[1] - lVar24) >> 2) * -0x55555555,lVar24,
                      0,0);
        plVar44 = (long *)param_4[0x3b];
        lVar24 = plVar44[0xf];
        plVar29 = plVar44;
        if (lVar24 != 0) {
          plVar44[0x10] = lVar24;
          __ZdlPv();
          plVar44[0xf] = 0;
          plVar44[0x10] = 0;
          plVar44[0x11] = 0;
          plVar29 = (long *)param_4[0x3b];
        }
        plVar44[0x10] = CONCAT44(fStack_f4,fStack_f8);
        plVar44[0xf] = (long)ppppppplStack_100;
        plVar44[0x11] = CONCAT44(fStack_ec,fStack_f0);
        ppppppplVar15 = ppppppplStack_100;
        func_0x000109699628((int)((ulong)(plVar29[4] - plVar29[3]) >> 2) * -0x55555555,plVar29[3],
                            (ulong)(plVar29[0xd] - plVar29[0xc]) >> 2 & 0xffffffff,plVar29[0xc],
                            (int)((ulong)(plVar29[1] - *plVar29) >> 2) * -0x55555555,*plVar29,
                            (ulong)(plVar29[0x10] - plVar29[0xf]) >> 3 & 0xffffffff);
        plVar29 = (long *)param_4[0x3b];
        func_0x000109699804((ulong)(plVar29[7] - plVar29[6]) >> 4 & 0xffffffff,plVar29[6],
                            (ulong)(plVar29[0xd] - plVar29[0xc]) >> 2 & 0xffffffff,plVar29[0xc],
                            (int)((ulong)(plVar29[1] - *plVar29) >> 2) * -0x55555555,*plVar29,
                            (int)((ulong)(plVar29[4] - plVar29[3]) >> 2) * -0x55555555,plVar29[3],
                            (ulong)(plVar29[10] - plVar29[9]) >> 3 & 0xffffffff,plVar29[9]);
      }
      if (plVar13 != (long *)0x0) {
        plVar29 = plVar13 + 1;
        do {
          lVar24 = *plVar29;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar12) {
            *plVar29 = lVar24 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      plVar13 = param_4;
      FUN_10a7f07a0(param_4,param_4[0x2f]);
      lVar24 = param_4[0x3c];
      if (((ulong)plVar13 & 1) == 0) {
        param_4[0x3c] = 0;
        if (lVar24 != 0) {
          FUN_10a812cc0();
        }
        param_4[0x3e] = param_4[0x3d];
      }
      else if (lVar24 == 0) {
        plVar13 = *(long **)(param_4[0x2f] + 0xe0);
        if (plVar13 == (long *)0x0) {
          lVar24 = 0;
        }
        else {
          (**(code **)(*plVar13 + 0x90))();
          lVar24 = *plVar13;
        }
        puVar16 = (undefined8 *)0x90;
        __Znwm();
        puVar16[0xf] = 0;
        puVar16[0xe] = 0;
        puVar16[0x11] = 0;
        puVar16[0x10] = 0;
        puVar16[0xb] = 0;
        puVar16[10] = 0;
        puVar16[0xd] = 0;
        puVar16[0xc] = 0;
        puVar16[7] = 0;
        puVar16[6] = 0;
        puVar16[9] = 0;
        puVar16[8] = 0;
        puVar16[3] = 0;
        puVar16[2] = 0;
        puVar16[5] = 0;
        puVar16[4] = 0;
        puVar16[1] = 0;
        *puVar16 = 0;
        lVar42 = param_4[0x3c];
        param_4[0x3c] = (long)puVar16;
        if (lVar42 != 0) {
          FUN_10a812cc0(lVar42);
          puVar16 = (undefined8 *)param_4[0x3c];
        }
        puVar47 = *(ushort **)(lVar24 + 0x28);
        uVar40 = *(long *)(lVar24 + 0x30) - (long)puVar47;
        uVar33 = 0;
        if (uVar40 != 0 && *(int *)(lVar24 + 0xe8) != 0) {
          uVar33 = uVar40 >> 1;
        }
        func_0x000108a5942c(puVar16 + 0xc,uVar33);
        if (uVar33 != 0) {
          puVar31 = *(uint **)(param_4[0x3c] + 0x60);
          lVar42 = *(long *)(param_4[0x3c] + 0x68) - (long)puVar31 >> 2;
          do {
            if (lVar42 == 0) goto LAB_10a7f3b94;
            *puVar31 = (uint)*puVar47;
            lVar42 = lVar42 + -1;
            uVar33 = uVar33 - 1;
            puVar31 = puVar31 + 1;
            puVar47 = puVar47 + 1;
          } while (uVar33 != 0);
        }
        uVar33 = (ulong)*(uint *)(lVar24 + 0x110);
        uVar40 = (*(long *)(lVar24 + 0x100) - *(long *)(lVar24 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
        if (uVar40 < uVar33 || uVar40 - uVar33 == 0) {
          FUN_10ab725fc();
        }
        else {
          func_0x00010ab4d7d8(&ppppppplStack_118,lVar24,*(long *)(lVar24 + 0xf8) + uVar33 * 0x38);
          uVar6 = *(uint *)(lVar24 + 0xf0);
          if (uVar6 == 0) {
            uVar33 = 0;
          }
          else {
            uVar33 = 0;
            if ((ulong)uVar6 != 0) {
              uVar33 = (ulong)(*(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10)) / (ulong)uVar6;
            }
            uVar33 = uVar33 & 0xffffffff;
          }
          func_0x0001096b5198(param_4[0x3c],uVar33);
          ppppppplVar19 = ppppppplStack_118;
          lVar42 = 0;
          uVar33 = 0;
          uVar56 = 0x3f800000;
          while( true ) {
            uVar6 = *(uint *)(lVar24 + 0xf0);
            if (uVar6 == 0) {
              uVar40 = 0;
            }
            else {
              uVar40 = 0;
              if ((ulong)uVar6 != 0) {
                uVar40 = (ulong)(*(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10)) / (ulong)uVar6
                ;
              }
              uVar40 = uVar40 & 0xffffffff;
            }
            if (uVar40 <= uVar33) break;
            *(undefined8 *)((ulong)&lStack_1f0 | 4) = 0;
            ((undefined8 *)((ulong)&lStack_1f0 | 4))[1] = 0;
            lStack_1f0 = CONCAT44(lStack_1f0._4_4_,0x3f800000);
            uStack_1e0 = CONCAT44(0x3f800000,(undefined4)uStack_1e0);
            uStack_1d8 = 0;
            uStack_1d0 = 0;
            fVar67 = 0.0;
            fVar54 = *(float *)(param_4 + 0x34) * 0.0;
            fVar57 = (float)param_4[0x33];
            fVar62 = fVar57 * 0.0;
            fVar60 = (float)((ulong)param_4[0x33] >> 0x20);
            fVar64 = fVar60 * 0.0;
            uVar56 = NEON_rev64(CONCAT44(fVar64,fVar62),4);
            fVar62 = fVar62 + fVar64;
            uStack_1c0 = CONCAT44(fVar60 + (float)((ulong)uVar56 >> 0x20) + fVar54 + 0.0,
                                  fVar57 + (float)uVar56 + fVar54 + 0.0);
            fVar66 = 1.0;
            uStack_1c8 = 0x3f800000;
            uStack_1b8 = CONCAT44(fVar62 + fVar54 + 1.0,*(float *)(param_4 + 0x34) + fVar62 + 0.0);
            fVar59 = *(float *)(param_4 + 0x35) * 0.017453292;
            fVar60 = *(float *)((long)param_4 + 0x1a4) * 0.017453292 * 0.5;
            fVar62 = fVar59 * 0.5;
            fVar64 = *(float *)((long)param_4 + 0x1ac) * 0.017453292 * 0.5;
            ___sincosf_stret();
            fVar57 = fVar59;
            ___sincosf_stret();
            fVar54 = fVar57;
            ___sincosf_stret();
            fVar61 = fVar60 * fVar62 * fVar64 + fVar54 * fVar59 * fVar57;
            fVar63 = -(fVar59 * fVar62 * fVar64) + fVar54 * fVar60 * fVar57;
            fVar65 = fVar60 * fVar57 * fVar64 + fVar54 * fVar59 * fVar62;
            fVar57 = -(fVar60 * fVar62 * fVar54) + fVar64 * fVar59 * fVar57;
            fVar54 = fVar61 * fVar61 + fVar63 * fVar63 + fVar65 * fVar65 + fVar57 * fVar57;
            if (fVar54 == 0.0) {
              fVar65 = 0.0;
              fVar57 = 0.0;
            }
            else {
              fVar54 = 1.0 / SQRT(fVar54);
              fVar66 = fVar61 * fVar54;
              fVar67 = fVar63 * fVar54;
              fVar65 = fVar65 * fVar54;
              fVar57 = fVar57 * fVar54;
            }
            fVar60 = fVar67 * fVar65 + fVar57 * fVar66;
            fVar62 = fVar67 * fVar57 - fVar65 * fVar66;
            fVar54 = fVar67 * fVar65 - fVar57 * fVar66;
            fStack_198 = fVar65 * fVar57 + fVar67 * fVar66;
            fStack_198 = fStack_198 + fStack_198;
            fStack_190 = fVar67 * fVar57 + fVar65 * fVar66;
            fStack_190 = fStack_190 + fStack_190;
            fStack_18c = fVar65 * fVar57 - fVar67 * fVar66;
            fStack_18c = fStack_18c + fStack_18c;
            uStack_1b0 = (long *******)
                         CONCAT44(fVar60 + fVar60,(fVar65 * fVar65 + fVar57 * fVar57) * -2.0 + 1.0);
            ppppppplStack_1a8 = (long *******)(ulong)(uint)(fVar62 + fVar62);
            uStack_1a0 = CONCAT44((fVar67 * fVar67 + fVar57 * fVar57) * -2.0 + 1.0,fVar54 + fVar54);
            uStack_194 = 0;
            fStack_188 = (fVar67 * fVar67 + fVar65 * fVar65) * -2.0 + 1.0;
            uStack_17c = 0;
            uStack_184 = 0;
            uStack_174 = 0x3f800000;
            func_0x000109519fd0(&ppppppplStack_100,&lStack_1f0,&uStack_1b0);
            uStack_1b8 = uStack_c8;
            uStack_1c0 = uStack_d0;
            fVar54 = *(float *)(param_4 + 0x36);
            fVar57 = *(float *)((long)param_4 + 0x1b4);
            lStack_1f0 = CONCAT44((float)((ulong)ppppppplStack_100 >> 0x20) * fVar54,
                                  SUB84(ppppppplStack_100,0) * fVar54);
            lStack_1e8 = CONCAT44(fStack_f4 * fVar54,fStack_f8 * fVar54);
            fVar54 = *(float *)(param_4 + 0x37);
            uVar69 = CONCAT44(fStack_ec * fVar57,fStack_f0 * fVar57);
            uStack_1d8 = CONCAT44(fStack_e4 * fVar57,fStack_e8 * fVar57);
            uVar56 = CONCAT44(fStack_dc * fVar54,fStack_e0 * fVar54);
            uStack_1c8 = CONCAT44(fStack_d4 * fVar54,fStack_d8 * fVar54);
            uStack_1e0 = uVar69;
            uStack_1d0 = uVar56;
            (*(code *)(*ppppppplVar19)[2])(ppppppplVar19,uVar33);
            lVar41 = *(long *)param_4[0x3c];
            uVar25 = (((long *)param_4[0x3c])[1] - lVar41 >> 2) * -0x5555555555555555;
            if (uVar25 < uVar33 || uVar25 - uVar33 == 0) goto LAB_10a7f3b94;
            fVar57 = (float)uVar56;
            fVar60 = (float)uVar69;
            puVar16 = (undefined8 *)(lVar41 + lVar42);
            fVar62 = (float)uStack_1d0 * fVar54 + (float)uStack_1c0;
            fVar64 = (float)((ulong)uStack_1d0 >> 0x20) * fVar54 + (float)(uStack_1c0 >> 0x20);
            uVar25 = CONCAT44(fVar64,fVar62);
            uVar56 = CONCAT44((float)((ulong)lStack_1f0 >> 0x20) * fVar57 +
                              (float)((ulong)uStack_1e0 >> 0x20) * fVar60 + fVar64,
                              (float)lStack_1f0 * fVar57 + (float)uStack_1e0 * fVar60 + fVar62);
            *puVar16 = uVar56;
            *(float *)(puVar16 + 1) =
                 fVar57 * (float)lStack_1e8 + fVar60 * (float)uStack_1d8 +
                 fVar54 * (float)uStack_1c8 + (float)uStack_1b8;
            uVar33 = uVar33 + 1;
            lVar42 = lVar42 + 0xc;
            param_3 = uStack_1c0;
          }
          uVar6 = *(uint *)(lVar24 + 0x120);
          if (uVar6 == 0xffffffff) {
            *(undefined8 *)(param_4[0x3c] + 0x50) = *(undefined8 *)(param_4[0x3c] + 0x48);
            goto LAB_10a7f38c4;
          }
          lVar42 = *(long *)(lVar24 + 0xf8);
          uVar33 = (*(long *)(lVar24 + 0x100) - lVar42 >> 3) * 0x6db6db6db6db6db7;
          if (uVar6 <= uVar33 && uVar33 - uVar6 != 0) {
            *(undefined8 *)(param_4[0x3c] + 0x50) = *(undefined8 *)(param_4[0x3c] + 0x48);
            if (lVar42 == 0) goto LAB_10a7f38c4;
            func_0x00010ab4d4d0(&ppppppplStack_100,lVar24,lVar42 + (ulong)uVar6 * 0x38);
            uVar6 = *(uint *)(lVar24 + 0xf0);
            if (uVar6 == 0) {
              uVar33 = 0;
            }
            else {
              uVar33 = 0;
              if ((ulong)uVar6 != 0) {
                uVar33 = (ulong)(*(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10)) / (ulong)uVar6
                ;
              }
              uVar33 = uVar33 & 0xffffffff;
            }
            func_0x0001096b5544(param_4[0x3c] + 0x48,uVar33);
            ppppppplVar15 = ppppppplStack_100;
            lVar42 = 0;
            uVar33 = 0;
            goto LAB_10a7f384c;
          }
          FUN_10ab725fc();
        }
        goto LAB_10a7f3b94;
      }
LAB_10a7f1ce8:
      puVar35 = (undefined8 *)param_4[0x3d];
      puVar16 = (undefined8 *)param_4[0x3e];
      if ((puVar35 == puVar16) &&
         (lVar24 = *(long *)(param_4[0x3a] + 0x18) - *(long *)(param_4[0x3a] + 0x10), lVar24 != 0))
      {
        lVar24 = lVar24 >> 3;
        uVar33 = lVar24 * -0x5555555555555555;
        lVar42 = param_4[0x3f] - (long)puVar35 >> 4;
        uVar25 = lVar42 * -0x5555555555555555;
        if (uVar25 < uVar33) {
          if (0x555555555555555 < uVar33) {
            func_0x00010a7fe684();
            goto LAB_10a7f3b94;
          }
          uVar40 = lVar42 * 0x5555555555555556;
          if (uVar40 < uVar33 || uVar40 + lVar24 * 0x5555555555555555 == 0) {
            uVar40 = uVar33;
          }
          if (0x2aaaaaaaaaaaaa9 < uVar25) {
            uVar40 = 0x555555555555555;
          }
          if (0x555555555555555 < uVar40) {
            func_0x000109ffded8();
            goto LAB_10a7f3b94;
          }
          puVar17 = (undefined8 *)(uVar40 * 0x30);
          __Znwm();
          uVar25 = 0x3f800000;
          puVar16 = puVar17;
          do {
            *puVar16 = 0;
            *(undefined4 *)(puVar16 + 1) = 0;
            *(undefined4 *)((long)puVar16 + 0x2c) = 0x3f800000;
            *(undefined8 *)((long)puVar16 + 0x14) = 0;
            *(undefined8 *)((long)puVar16 + 0xc) = 0x3f800000;
            *(undefined8 *)((long)puVar16 + 0x24) = 0;
            *(undefined8 *)((long)puVar16 + 0x1c) = 0x3f800000;
            puVar16 = puVar16 + 6;
          } while (puVar16 != puVar17 + lVar24 * 2);
          param_4[0x3d] = (long)puVar17;
          param_4[0x3e] = (long)(puVar17 + lVar24 * 2);
          param_4[0x3f] = (long)(puVar17 + uVar40 * 6);
          if (puVar35 != (undefined8 *)0x0) {
            __ZdlPv(puVar35);
          }
        }
        else {
          puVar35 = puVar16 + lVar24 * 2;
          uVar25 = 0x3f800000;
          do {
            *puVar16 = 0;
            *(undefined4 *)(puVar16 + 1) = 0;
            *(undefined4 *)((long)puVar16 + 0x2c) = 0x3f800000;
            *(undefined8 *)((long)puVar16 + 0x14) = 0;
            *(undefined8 *)((long)puVar16 + 0xc) = 0x3f800000;
            *(undefined8 *)((long)puVar16 + 0x24) = 0;
            *(undefined8 *)((long)puVar16 + 0x1c) = 0x3f800000;
            puVar16 = puVar16 + 6;
          } while (puVar16 != puVar35);
          param_4[0x3e] = (long)puVar35;
        }
        lVar42 = 0;
        lVar24 = 0;
        uVar40 = 0;
        do {
          lVar41 = *(long *)(param_4[0x3a] + 0x10);
          uVar34 = (*(long *)(param_4[0x3a] + 0x18) - lVar41 >> 3) * -0x5555555555555555;
          if (uVar34 < uVar40 || uVar34 - uVar40 == 0) goto LAB_10a7f3b94;
          puVar16 = (undefined8 *)(lVar41 + lVar42);
          puVar35 = (undefined8 *)param_4[0x3b];
          FUN_10a7f4608(&ppppppplStack_100,*puVar16,puVar16[1],*puVar35,puVar35[1],puVar35[3],
                        puVar35[4],puVar35[6],puVar35[7]);
          uVar34 = (param_4[0x3e] - param_4[0x3d] >> 4) * -0x5555555555555555;
          if (uVar34 < uVar40 || uVar34 - uVar40 == 0) goto LAB_10a7f3b94;
          puVar26 = (ulong *)(param_4[0x3d] + lVar24);
          *puVar26 = (ulong)ppppppplStack_100;
          *(float *)(puVar26 + 1) = fStack_f8;
          *(ulong *)((long)puVar26 + 0x14) = CONCAT44(fStack_e8,fStack_ec);
          *(ulong *)((long)puVar26 + 0xc) = CONCAT44(fStack_f0,fStack_f4);
          ppppppplVar15 = (long *******)CONCAT44(fStack_e0,fStack_e4);
          *(ulong *)((long)puVar26 + 0x24) = CONCAT44(fStack_d8,fStack_dc);
          *(long ********)((long)puVar26 + 0x1c) = ppppppplVar15;
          *(float *)((long)puVar26 + 0x2c) = fStack_d4;
          uVar40 = uVar40 + 1;
          lVar24 = lVar24 + 0x30;
          lVar42 = lVar42 + 0x18;
        } while (uVar33 - uVar40 != 0);
      }
      FUN_10ab4cb54(param_4[0x2a],
                    *(long *)(param_4[0x3c] + 0x68) - *(long *)(param_4[0x3c] + 0x60) >> 2);
      FUN_10ab4ccac(&ppppppplStack_100,param_4[0x2a]);
      lVar24 = *(long *)(param_4[0x3c] + 0x60);
      uVar33 = *(long *)(param_4[0x3c] + 0x68) - lVar24 >> 2;
      if (2 < uVar33) {
        uVar34 = 0;
        uVar40 = 0;
        do {
          if (uVar33 <= uVar34) goto LAB_10a7f3b94;
          uVar7 = *(undefined4 *)(lVar24 + uVar34 * 4);
          FUN_10ab4e710(&lStack_1f0,&ppppppplStack_100,uVar40);
          FUN_10ab4e794(&uStack_1b0,&lStack_1f0,0);
          FUN_10a557ab0(&uStack_1b0,uVar7);
          lVar24 = *(long *)(param_4[0x3c] + 0x60);
          if ((ulong)(*(long *)(param_4[0x3c] + 0x68) - lVar24 >> 2) <= uVar34 + 1)
          goto LAB_10a7f3b94;
          uVar7 = *(undefined4 *)(lVar24 + uVar34 * 4 + 4);
          FUN_10ab4e710(&lStack_1f0,&ppppppplStack_100,uVar40);
          FUN_10ab4e794(&uStack_1b0,&lStack_1f0,1);
          FUN_10a557ab0(&uStack_1b0,uVar7);
          lVar24 = *(long *)(param_4[0x3c] + 0x60);
          if ((ulong)(*(long *)(param_4[0x3c] + 0x68) - lVar24 >> 2) <= uVar34 + 2)
          goto LAB_10a7f3b94;
          uVar7 = *(undefined4 *)(lVar24 + uVar34 * 4 + 8);
          FUN_10ab4e710(&lStack_1f0,&ppppppplStack_100,uVar40);
          FUN_10ab4e794(&uStack_1b0,&lStack_1f0,2);
          FUN_10a557ab0(&uStack_1b0,uVar7);
          uVar40 = uVar40 + 1;
          lVar24 = *(long *)(param_4[0x3c] + 0x60);
          uVar33 = *(long *)(param_4[0x3c] + 0x68) - lVar24 >> 2;
          uVar34 = uVar34 + 3;
        } while (uVar40 < uVar33 / 3);
      }
      FUN_10a0d2960(param_4[0x2a] + 0x40,1);
      puVar16 = *(undefined8 **)(param_4[0x2a] + 0x40);
      if (*(undefined8 **)(param_4[0x2a] + 0x48) == puVar16) goto LAB_10a7f3b94;
      if (*(char *)((long)puVar16 + 0x17) < '\0') {
        puVar16[1] = 0xc;
        puVar16 = (undefined8 *)*puVar16;
      }
      else {
        *(undefined1 *)((long)puVar16 + 0x17) = 0xc;
      }
      *(undefined4 *)(puVar16 + 1) = 0x6873654d;
      *puVar16 = 0x6c616e7265747845;
      *(undefined1 *)((long)puVar16 + 0xc) = 0;
      plVar13 = *(long **)(param_4[0x2f] + 0xe0);
      (**(code **)(*plVar13 + 0x90))();
      puVar35 = *(undefined8 **)(*plVar13 + 0x48);
      for (puVar16 = *(undefined8 **)(*plVar13 + 0x40); puVar16 != puVar35; puVar16 = puVar16 + 9) {
        plVar13 = (long *)(param_4[0x2a] + 0x40);
        puVar17 = (undefined8 *)*plVar13;
        puVar5 = *(undefined8 **)(param_4[0x2a] + 0x48);
        if (puVar17 == puVar5) {
LAB_10a7f20ec:
          if (puVar17 == puVar5) goto LAB_10a7f20f4;
        }
        else {
          bVar8 = *(byte *)((long)puVar16 + 0x17);
          uVar33 = puVar16[1];
          if (-1 < (char)bVar8) {
            uVar33 = (ulong)bVar8;
          }
          do {
            bVar9 = *(byte *)((long)puVar17 + 0x17);
            uVar40 = puVar17[1];
            if (-1 < (char)bVar9) {
              uVar40 = (ulong)bVar9;
            }
            if (uVar40 == uVar33) {
              puVar18 = (undefined8 *)*puVar17;
              if (-1 < (char)bVar9) {
                puVar18 = puVar17;
              }
              puVar4 = (undefined8 *)*puVar16;
              if (-1 < (char)bVar8) {
                puVar4 = puVar16;
              }
              _memcmp(puVar18,puVar4,uVar33);
              if ((int)puVar18 == 0) goto LAB_10a7f20ec;
            }
            puVar17 = puVar17 + 9;
          } while (puVar17 != puVar5);
LAB_10a7f20f4:
          FUN_10a7f4aac(plVar13,puVar16);
        }
      }
      lVar24 = *(long *)(param_4[0x3a] + 0x10);
      lVar41 = *(long *)(param_4[0x3a] + 0x18);
      FUN_10a1322a0(&uStack_1b0,((long)puStack_290 - (long)puStack_298 >> 2) * -0x5555555555555555);
      lVar42 = param_4[0x3b];
      func_0x000109699628((int)((ulong)((long)ppppppplStack_1a8 - (long)uStack_1b0) >> 2) *
                          -0x55555555,uStack_1b0,
                          (ulong)(*(long *)(lVar42 + 0x68) - *(long *)(lVar42 + 0x60)) >> 2 &
                          0xffffffff,*(long *)(lVar42 + 0x60),
                          (int)((ulong)((long)puStack_290 - (long)puStack_298) >> 2) * -0x55555555,
                          puStack_298,
                          (ulong)(*(long *)(lVar42 + 0x80) - *(long *)(lVar42 + 0x78)) >> 3 &
                          0xffffffff);
      FUN_10a5e3a78(&lStack_1f0,((long)puStack_290 - (long)puStack_298 >> 2) * -0x5555555555555555);
      lVar42 = param_4[0x3b];
      func_0x000109699804((ulong)(lStack_1e8 - lStack_1f0) >> 4 & 0xffffffff,lStack_1f0,
                          (ulong)(*(long *)(lVar42 + 0x68) - *(long *)(lVar42 + 0x60)) >> 2 &
                          0xffffffff,*(long *)(lVar42 + 0x60),
                          (int)((ulong)((long)puStack_290 - (long)puStack_298) >> 2) * -0x55555555,
                          puStack_298,
                          (int)((ulong)((long)ppppppplStack_1a8 - (long)uStack_1b0) >> 2) *
                          -0x55555555,uStack_1b0,
                          (ulong)(*(long *)(lVar42 + 0x50) - *(long *)(lVar42 + 0x48)) >> 3 &
                          0xffffffff,*(long *)(lVar42 + 0x48));
      uVar40 = lVar41 - lVar24;
      uVar33 = ((long)uVar40 >> 3) * -0x5555555555555555;
      FUN_10ab4a154(param_4[0x2a]);
      lVar45 = param_4[0x2a];
      lVar42 = *(long *)(lVar45 + 0x88);
      lVar49 = *(long *)(lVar45 + 0x90);
      lVar53 = lVar45;
      if (lVar49 != lVar42) {
        do {
          lVar49 = lVar49 + -0x30;
          func_0x00010a0d3994(lVar49);
        } while (lVar49 != lVar42);
        lVar53 = param_4[0x2a];
      }
      *(long *)(lVar45 + 0x90) = lVar42;
      FUN_10ab6e728();
      lVar42 = *(long *)(lVar53 + 0xf8);
      lVar49 = lVar42;
      for (; (lVar42 != *(long *)(lVar53 + 0x100) &&
             (lVar49 = lVar42, *(long *)(lVar42 + 0x18) != lRam00000001138356d8));
          lVar42 = lVar42 + 0x38) {
        lVar49 = *(long *)(lVar53 + 0x100);
      }
      uVar6 = *(int *)(lVar49 + 0x24) - 1;
      if (uVar6 < 7) {
        iVar32 = *(int *)(&UNK_10e4dcfd0 + (ulong)uVar6 * 4);
      }
      else {
        iVar32 = 0;
      }
      if (*(int *)(lVar49 + 0x28) * iVar32 == 0xc) {
        lStack_2c8 = *(long *)(lVar53 + 0x10) + (ulong)*(uint *)(lVar49 + 0x30);
        uStack_2d0 = (ulong)*(uint *)(lVar53 + 0xf0);
      }
      else {
        uStack_2d0 = 0;
        lStack_2c8 = 0;
      }
      lVar45 = param_4[0x2a];
      FUN_10ab6e9d8();
      lVar42 = *(long *)(lVar53 + 0xf8);
      lVar49 = lVar42;
      for (; (lVar42 != *(long *)(lVar53 + 0x100) &&
             (lVar49 = lVar42, *(long *)(lVar42 + 0x18) != lRam0000000113835758));
          lVar42 = lVar42 + 0x38) {
        lVar49 = *(long *)(lVar53 + 0x100);
      }
      uVar6 = *(int *)(lVar49 + 0x24) - 1;
      if (uVar6 < 7) {
        iVar32 = *(int *)(&UNK_10e4dcfd0 + (ulong)uVar6 * 4);
      }
      else {
        iVar32 = 0;
      }
      if (*(int *)(lVar49 + 0x28) * iVar32 == 0xc) {
        puStack_2c0 = (undefined8 *)(*(long *)(lVar45 + 0x10) + (ulong)*(uint *)(lVar49 + 0x30));
        uVar34 = (ulong)*(uint *)(lVar45 + 0xf0);
      }
      else {
        puStack_2c0 = (undefined8 *)0x0;
        uVar34 = 0;
      }
      lVar45 = param_4[0x2a];
      FUN_10ab6eb18();
      lVar42 = *(long *)(lVar53 + 0xf8);
      lVar49 = lVar42;
      for (; (lVar42 != *(long *)(lVar53 + 0x100) &&
             (lVar49 = lVar42, *(long *)(lVar42 + 0x18) != lRam0000000113835798));
          lVar42 = lVar42 + 0x38) {
        lVar49 = *(long *)(lVar53 + 0x100);
      }
      uVar6 = *(int *)(lVar49 + 0x24) - 1;
      if (uVar6 < 7) {
        iVar32 = *(int *)(&UNK_10e4dcfd0 + (ulong)uVar6 * 4);
      }
      else {
        iVar32 = 0;
      }
      if (*(int *)(lVar49 + 0x28) * iVar32 == 0x10) {
        puStack_328 = (undefined8 *)(*(long *)(lVar45 + 0x10) + (ulong)*(uint *)(lVar49 + 0x30));
        uStack_330 = (ulong)*(uint *)(lVar45 + 0xf0);
      }
      else {
        uStack_330 = 0;
        puStack_328 = (undefined8 *)0x0;
      }
      lVar45 = param_4[0x2a];
      FUN_10ab6ec58();
      lVar42 = *(long *)(lVar53 + 0xf8);
      lVar49 = lVar42;
      for (; (lVar42 != *(long *)(lVar53 + 0x100) &&
             (lVar49 = lVar42, *(long *)(lVar42 + 0x18) != lRam00000001138357d8));
          lVar42 = lVar42 + 0x38) {
        lVar49 = *(long *)(lVar53 + 0x100);
      }
      uVar6 = *(int *)(lVar49 + 0x24) - 1;
      if (uVar6 < 7) {
        iVar32 = *(int *)(&UNK_10e4dcfd0 + (ulong)uVar6 * 4);
      }
      else {
        iVar32 = 0;
      }
      if (*(int *)(lVar49 + 0x28) * iVar32 == 0x10) {
        lStack_2d8 = *(long *)(lVar45 + 0x10) + (ulong)*(uint *)(lVar49 + 0x30);
        uStack_2e0 = (ulong)*(uint *)(lVar45 + 0xf0);
      }
      else {
        uStack_2e0 = 0;
        lStack_2d8 = 0;
      }
      lVar45 = param_4[0x2a];
      FUN_10ab6f020();
      lVar42 = *(long *)(lVar53 + 0xf8);
      lVar49 = lVar42;
      for (; (lVar42 != *(long *)(lVar53 + 0x100) &&
             (lVar49 = lVar42, *(long *)(lVar42 + 0x18) != lRam0000000113835898));
          lVar42 = lVar42 + 0x38) {
        lVar49 = *(long *)(lVar53 + 0x100);
      }
      uVar6 = *(int *)(lVar49 + 0x24) - 1;
      if (uVar6 < 7) {
        iVar32 = *(int *)(&UNK_10e4dcfd0 + (ulong)uVar6 * 4);
      }
      else {
        iVar32 = 0;
      }
      if (*(int *)(lVar49 + 0x28) * iVar32 == 8) {
        lStack_310 = *(long *)(lVar45 + 0x10) + (ulong)*(uint *)(lVar49 + 0x30);
        uStack_318 = (ulong)*(uint *)(lVar45 + 0xf0);
      }
      else {
        uStack_318 = 0;
        lStack_310 = 0;
      }
      lVar46 = param_4[0x2a];
      func_0x000107c2b074(&ppppppplStack_100,&PTR_DAT_110c1f848);
      lVar42 = *(long *)(lVar53 + 0xf8);
      lVar49 = *(long *)(lVar53 + 0x100);
      lVar45 = lVar42;
      if (lVar42 != lVar49) {
        do {
          lVar45 = lVar42;
          if (*(long *)(lVar42 + 0x18) == CONCAT44(fStack_e4,fStack_e8)) break;
          lVar42 = lVar42 + 0x38;
          lVar45 = lVar49;
        } while (lVar42 != lVar49);
      }
      uVar6 = *(int *)(lVar45 + 0x24) - 1;
      if (uVar6 < 7) {
        iVar32 = *(int *)(&UNK_10e4dcfd0 + (ulong)uVar6 * 4);
      }
      else {
        iVar32 = 0;
      }
      if (*(int *)(lVar45 + 0x28) * iVar32 == 8) {
        lStack_2e8 = *(long *)(lVar46 + 0x10) + (ulong)*(uint *)(lVar45 + 0x30);
        uStack_2f0 = (ulong)*(uint *)(lVar46 + 0xf0);
      }
      else {
        uStack_2f0 = 0;
        lStack_2e8 = 0;
      }
      ppppppplStack_108 = (long *******)0x0;
      ppppppplStack_118 = (long *******)0x0;
      ppppppplStack_110 = (long *******)0x0;
      ppppppplStack_100 = (long *******)&ppppppplStack_118;
      fStack_f8 = (float)((uint)fStack_f8 & 0xffffff00);
      lVar42 = *(long *)(param_4[0x2a] + 0x48) - *(long *)(param_4[0x2a] + 0x40);
      if (lVar42 == 0) {
LAB_10a7f2808:
        plVar29 = (long *)0x0;
        plVar13 = (long *)0x0;
      }
      else {
        lVar42 = lVar42 >> 3;
        uVar50 = lVar42 * -0x71c71c71c71c71c7;
        if (uVar50 >> 0x3c != 0) {
          func_0x00010a7fe698();
          goto LAB_10a7f3b94;
        }
        ppppppplVar19 = (long *******)&ppppppplStack_118;
        FUN_10a7fe6ac();
        ppppppplStack_108 = ppppppplVar19 + uVar50 * 2;
        ppppppplStack_118 = ppppppplVar19;
        _bzero();
        ppppppplStack_110 = ppppppplVar19 + lVar42 * -0x38e38e38e38e38e;
        if (*(long *)(param_4[0x2a] + 0x48) == *(long *)(param_4[0x2a] + 0x40)) goto LAB_10a7f2808;
        uVar50 = 0;
        do {
          FUN_10a7f4888(&ppppppplStack_100,param_4 + 0x40);
          if ((ulong)((long)ppppppplStack_110 - (long)ppppppplStack_118 >> 4) <= uVar50)
          goto LAB_10a7f3b94;
          FUN_10a7f49a0(ppppppplStack_118 + uVar50 * 2,&ppppppplStack_100);
          plVar13 = (long *)CONCAT44(fStack_f4,fStack_f8);
          if (plVar13 == (long *)0x0) {
LAB_10a7f2678:
            if (uVar50 != 0) goto LAB_10a7f267c;
LAB_10a7f273c:
            if (ppppppplStack_110 == ppppppplStack_118) goto LAB_10a7f3b94;
            ppppppplStack_100 = (long *******)((ulong)ppppppplStack_100 & 0xffffffffffffff00);
            func_0x000108a39c34(*ppppppplStack_118,uVar40,&ppppppplStack_100);
          }
          else {
            plVar29 = plVar13 + 1;
            do {
              lVar42 = *plVar29;
              cVar10 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar12) {
                *plVar29 = lVar42 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (lVar42 != 0) goto LAB_10a7f2678;
            (**(code **)(*plVar13 + 0x10))(plVar13);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
            if (uVar50 == 0) goto LAB_10a7f273c;
LAB_10a7f267c:
            lVar42 = *(long *)(param_4[0x2a] + 0x40);
            uVar30 = (*(long *)(param_4[0x2a] + 0x48) - lVar42 >> 3) * -0x71c71c71c71c71c7;
            if ((uVar30 < uVar50 || uVar30 - uVar50 == 0) ||
               (uVar30 = (long)ppppppplStack_110 - (long)ppppppplStack_118 >> 4, uVar30 <= uVar50))
            goto LAB_10a7f3b94;
            if (ppppppplStack_118[uVar50 * 2] != *(long *******)(lVar42 + uVar50 * 0x48 + 0x38)) {
              FUN_10a0cf2cc();
              uVar30 = (long)ppppppplStack_110 - (long)ppppppplStack_118 >> 4;
            }
            if (uVar30 <= uVar50) goto LAB_10a7f3b94;
            pppppplVar20 = ppppppplStack_118[uVar50 * 2];
            ppppppplStack_100 = (long *******)((ulong)ppppppplStack_100 & 0xffffffffffffff00);
            uVar30 = (long)pppppplVar20[1] - (long)*pppppplVar20;
            if (uVar40 < uVar30 || uVar40 - uVar30 == 0) {
              if (uVar40 < uVar30) {
                pppppplVar20[1] = (long *****)((long)*pppppplVar20 + uVar40);
              }
            }
            else {
              func_0x000105343774(pppppplVar20,uVar40 - uVar30,&ppppppplStack_100);
            }
          }
          uVar50 = uVar50 + 1;
          lVar49 = param_4[0x2a];
          lVar42 = *(long *)(lVar49 + 0x48) - *(long *)(lVar49 + 0x40) >> 3;
          uVar30 = lVar42 * -0x71c71c71c71c71c7;
        } while (uVar50 < uVar30);
        if (*(long *)(lVar49 + 0x48) == *(long *)(lVar49 + 0x40)) {
          plVar29 = (long *)0x0;
          plVar13 = (long *)0x0;
        }
        else {
          if (uVar30 >> 0x3d != 0) {
            FUN_10a7fe880();
            goto LAB_10a7f3b94;
          }
          plVar29 = (long *)(lVar42 * 0x71c71c71c71c71c8);
          __Znwm();
          _bzero();
          plVar13 = plVar29 + lVar42 * 0xe38e38e38e38e39;
          if (*(long *)(lVar49 + 0x48) != *(long *)(lVar49 + 0x40)) {
            uVar40 = 0;
            ppppppplVar19 = ppppppplStack_118;
            do {
              if (((long)ppppppplStack_110 - (long)ppppppplStack_118 >> 4 == uVar40) ||
                 (uVar30 - uVar40 == 0)) goto LAB_10a7f3b94;
              plVar29[uVar40] = (long)**ppppppplVar19;
              uVar40 = uVar40 + 1;
              ppppppplVar19 = ppppppplVar19 + 2;
            } while (uVar40 < (ulong)((*(long *)(lVar49 + 0x48) - *(long *)(lVar49 + 0x40) >> 3) *
                                     -0x71c71c71c71c71c7));
          }
        }
      }
      plVar44 = *(long **)(param_4[0x2f] + 0xe0);
      if (plVar44 == (long *)0x0) {
        lVar42 = 0;
      }
      else {
        (**(code **)(*plVar44 + 0x90))();
        lVar42 = *plVar44;
      }
      FUN_10ab6ec58();
      lVar49 = *(long *)(lVar42 + 0xf8);
      lVar42 = *(long *)(lVar42 + 0x100);
      if (lVar49 == lVar42) {
LAB_10a7f2874:
        if ((lVar49 == lVar42) || (lVar49 == 0)) goto LAB_10a7f28ac;
        plVar44 = *(long **)(param_4[0x2f] + 0xe0);
        lVar42 = 0;
        if (plVar44 != (long *)0x0) {
          (**(code **)(*plVar44 + 0x90))();
          lVar42 = *plVar44;
        }
        func_0x00010ab4dae0(&plStack_120,lVar42,lVar49);
      }
      else {
        do {
          if (*(long *)(lVar49 + 0x18) == lRam00000001138357d8) goto LAB_10a7f2874;
          lVar49 = lVar49 + 0x38;
        } while (lVar49 != lVar42);
LAB_10a7f28ac:
        plStack_120 = (long *)0x0;
      }
      uStack_128 = 0;
      pppppplStack_138 = (long ******)0x0;
      pppppplStack_130 = (long ******)0x0;
      ppppppplStack_100 = &pppppplStack_138;
      fStack_f8 = (float)((uint)fStack_f8 & 0xffffff00);
      lVar42 = *(long *)(param_4[0x2a] + 0x48) - *(long *)(param_4[0x2a] + 0x40);
      if (lVar42 != 0) {
        lVar42 = lVar42 >> 3;
        func_0x00010a614b6c(&pppppplStack_138,lVar42 * -0x71c71c71c71c71c7);
        pppppplVar20 = pppppplStack_130;
        uVar40 = (lVar42 * 0x5555555555555558 - 0x18U) / 0x18;
        _bzero(pppppplStack_130,uVar40 * 0x18 + 0x18);
        pppppplStack_130 = pppppplVar20 + uVar40 * 3 + 3;
        if (*(long *)(param_4[0x2a] + 0x48) != *(long *)(param_4[0x2a] + 0x40)) {
          lVar42 = 0;
          uVar40 = 0;
          do {
            uVar50 = ((long)pppppplStack_130 - (long)pppppplStack_138 >> 3) * -0x5555555555555555;
            if (uVar50 < uVar40 || uVar50 - uVar40 == 0) goto LAB_10a7f3b94;
            func_0x0001096b5198((long)pppppplStack_138 + lVar42,uVar33);
            uVar40 = uVar40 + 1;
            lVar42 = lVar42 + 0x18;
          } while (uVar40 < (ulong)((*(long *)(param_4[0x2a] + 0x48) -
                                     *(long *)(param_4[0x2a] + 0x40) >> 3) * -0x71c71c71c71c71c7));
        }
      }
      plVar44 = plStack_120;
      if (lVar41 != lVar24) {
        uVar40 = 0;
        uVar50 = (long)plVar13 - (long)plVar29 >> 3;
        if (uVar50 < 2) {
          uVar50 = 1;
        }
        do {
          lVar42 = *(long *)(param_4[0x3a] + 0x10);
          uVar25 = (*(long *)(param_4[0x3a] + 0x18) - lVar42 >> 3) * -0x5555555555555555;
          if ((uVar25 < uVar40 || uVar25 - uVar40 == 0) ||
             (uVar25 = (param_4[0x3e] - param_4[0x3d] >> 4) * -0x5555555555555555,
             uVar25 < uVar40 || uVar25 - uVar40 == 0)) goto LAB_10a7f3b94;
          pfVar36 = (float *)(param_4[0x3d] + uVar40 * 0x30);
          fVar60 = *pfVar36;
          fVar54 = pfVar36[1];
          fVar62 = pfVar36[2];
          fVar61 = pfVar36[3];
          plVar52 = (long *)(lVar42 + uVar40 * 0x18);
          fVar66 = pfVar36[4];
          fVar63 = pfVar36[5];
          fVar64 = pfVar36[6];
          fVar59 = pfVar36[7];
          fVar65 = pfVar36[8];
          fVar57 = pfVar36[9];
          fVar68 = pfVar36[10];
          fVar67 = pfVar36[0xb];
          FUN_10a7f4608(&ppppppplStack_100,*plVar52,plVar52[1],puStack_298,puStack_290,uStack_1b0,
                        ppppppplStack_1a8,lStack_1f0,lStack_1e8);
          puVar26 = (ulong *)(lStack_2c8 + uVar40 * uStack_2d0);
          *puVar26 = (ulong)ppppppplStack_100;
          *(float *)(puVar26 + 1) = fStack_f8;
          pfVar36 = (float *)((long)puStack_2c0 + uVar40 * uVar34);
          *pfVar36 = fStack_ec;
          pfVar36[1] = fStack_e0;
          pfVar36[2] = fStack_d4;
          lVar42 = *(long *)param_4[0x3c];
          uVar25 = (((long *)param_4[0x3c])[1] - lVar42 >> 2) * -0x5555555555555555;
          if ((uVar25 < uVar40 || uVar25 - uVar40 == 0) || (plVar13 == plVar29)) goto LAB_10a7f3b94;
          fVar55 = fVar66 * fStack_f0 + fVar61 * fStack_f4 + fVar63 * fStack_ec;
          fVar58 = fVar66 * fStack_e4 + fVar61 * fStack_e8 + fVar63 * fStack_e0;
          fVar61 = fVar66 * fStack_d8 + fVar61 * fStack_dc + fVar63 * fStack_d4;
          fVar63 = fVar59 * fStack_f0 + fVar64 * fStack_f4 + fVar65 * fStack_ec;
          fVar66 = fVar59 * fStack_e4 + fVar64 * fStack_e8 + fVar65 * fStack_e0;
          fVar64 = fVar59 * fStack_d8 + fVar64 * fStack_dc + fVar65 * fStack_d4;
          fVar65 = fVar68 * fStack_f0 + fVar57 * fStack_f4 + fVar67 * fStack_ec;
          fVar59 = fVar68 * fStack_e4 + fVar57 * fStack_e8 + fVar67 * fStack_e0;
          fVar57 = fVar68 * fStack_d8 + fVar57 * fStack_dc + fVar67 * fStack_d4;
          pfVar36 = (float *)(lVar42 + uVar40 * 0xc);
          fVar62 = pfVar36[2] - fVar62;
          fVar60 = *pfVar36 - fVar60;
          fVar54 = pfVar36[1] - fVar54;
          pfVar36 = (float *)(*plVar29 + uVar40 * 0x18);
          *pfVar36 = fVar63 * fVar54 + fVar60 * fVar55 + fVar62 * fVar65;
          pfVar36[1] = fVar66 * fVar54 + fVar60 * fVar58 + fVar62 * fVar59;
          pfVar36[2] = fVar64 * fVar54 + fVar60 * fVar61 + fVar62 * fVar57;
          if ((pppppplStack_130 == pppppplStack_138) ||
             (uVar25 = ((long)pppppplStack_138[1] - (long)*pppppplStack_138 >> 2) *
                       -0x5555555555555555, uVar25 < uVar40 || uVar25 - uVar40 == 0))
          goto LAB_10a7f3b94;
          puVar16 = (undefined8 *)(*plVar29 + uVar40 * 0x18);
          uVar56 = *puVar16;
          fVar54 = (float)((ulong)ppppppplStack_100 >> 0x20);
          fVar60 = *(float *)(puVar16 + 1);
          puVar16 = (undefined8 *)((long)*pppppplStack_138 + uVar40 * 0xc);
          *puVar16 = CONCAT44(fVar54 + (float)((ulong)uVar56 >> 0x20),
                              SUB84(ppppppplStack_100,0) + (float)uVar56);
          *(float *)(puVar16 + 1) = fStack_f8 + fVar60;
          if (1 < (ulong)((*(long *)(param_4[0x2a] + 0x48) - *(long *)(param_4[0x2a] + 0x40) >> 3) *
                         -0x71c71c71c71c71c7)) {
            lVar42 = 0;
            uVar25 = 1;
            do {
              if (uVar50 == uVar25) goto LAB_10a7f3b94;
              pfVar36 = (float *)(plVar29[uVar25] + uVar40 * 0x18);
              fVar60 = *pfVar36;
              fVar62 = pfVar36[1];
              fVar67 = pfVar36[2];
              *pfVar36 = fVar63 * fVar62 + fVar60 * fVar55 + fVar67 * fVar65;
              pfVar36[1] = fVar66 * fVar62 + fVar60 * fVar58 + fVar67 * fVar59;
              pfVar36[2] = fVar64 * fVar62 + fVar60 * fVar61 + fVar67 * fVar57;
              uVar30 = ((long)pppppplStack_130 - (long)pppppplStack_138 >> 3) * -0x5555555555555555;
              if ((uVar30 < uVar25 || uVar30 - uVar25 == 0) ||
                 (lVar49 = *(long *)((long)pppppplStack_138 + lVar42 + 0x18),
                 uVar30 = (*(long *)((long)pppppplStack_138 + lVar42 + 0x20) - lVar49 >> 2) *
                          -0x5555555555555555, uVar30 < uVar40 || uVar30 - uVar40 == 0))
              goto LAB_10a7f3b94;
              puVar16 = (undefined8 *)(*plVar29 + uVar40 * 0x18);
              fVar60 = *(float *)(puVar16 + 1);
              puVar35 = (undefined8 *)(plVar29[uVar25] + uVar40 * 0x18);
              uVar56 = *puVar16;
              uVar69 = *puVar35;
              fVar62 = *(float *)(puVar35 + 1);
              puVar16 = (undefined8 *)(lVar49 + uVar40 * 0xc);
              *puVar16 = CONCAT44(fVar54 + (float)((ulong)uVar56 >> 0x20) +
                                  (float)((ulong)uVar69 >> 0x20),
                                  SUB84(ppppppplStack_100,0) + (float)uVar56 + (float)uVar69);
              *(float *)(puVar16 + 1) = fStack_f8 + fVar60 + fVar62;
              uVar25 = uVar25 + 1;
              lVar42 = lVar42 + 0x18;
            } while (uVar25 < (ulong)((*(long *)(param_4[0x2a] + 0x48) -
                                       *(long *)(param_4[0x2a] + 0x40) >> 3) * -0x71c71c71c71c71c7))
            ;
          }
          if (plVar44 == (long *)0x0) {
            fVar55 = 1.0;
            fVar58 = 1.0;
            fVar61 = 1.0;
            fVar63 = 1.0;
          }
          else {
            (**(code **)(*plVar44 + 0x10))(plVar44,uVar40);
          }
          pfVar36 = (float *)(lStack_2d8 + uVar40 * uStack_2e0);
          *pfVar36 = fVar55;
          pfVar36[1] = fVar58;
          pfVar36[2] = fVar61;
          pfVar36[3] = fVar63;
          lVar42 = *(long *)(param_4[0x3c] + 0x48);
          if (uVar33 == *(long *)(param_4[0x3c] + 0x50) - lVar42 >> 3) {
            *(undefined8 *)(lStack_310 + uVar40 * uStack_318) = *(undefined8 *)(lVar42 + uVar40 * 8)
            ;
          }
          lVar42 = plVar52[1] - *plVar52;
          if (lVar42 == 0) goto LAB_10a7f3b94;
          fVar57 = 1.0 / *(float *)(*plVar52 + 0x18);
          fVar60 = *(float *)((long)param_4 + 0x1bc);
          fVar54 = fVar60;
          if (fVar57 <= fVar60) {
            fVar54 = fVar57;
          }
          fVar62 = 0.0;
          if (fVar57 <= fVar60) {
            fVar62 = (float)(ulong)((lVar42 >> 2) * 0x6db6db6db6db6db7);
          }
          fVar62 = fVar62 / (float)(int)param_4[0x38];
          uVar25 = (ulong)(uint)fVar62;
          ppppppplVar15 = (long *******)(ulong)(uint)(fVar54 / fVar60);
          pfVar36 = (float *)(lStack_2e8 + uVar40 * uStack_2f0);
          *pfVar36 = fVar62;
          pfVar36[1] = fVar54 / fVar60;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar33);
      }
      plVar44 = *(long **)(param_4[0x2f] + 0xe0);
      if (plVar44 == (long *)0x0) {
        lVar42 = 0;
      }
      else {
        (**(code **)(*plVar44 + 0x90))();
        lVar42 = *plVar44;
      }
      FUN_10ab6f160();
      lVar49 = *(long *)(lVar42 + 0xf8);
      lVar42 = *(long *)(lVar42 + 0x100);
      if (lVar49 == lVar42) {
LAB_10a7f2dec:
        if ((lVar49 != lVar42) && (lVar49 != 0)) {
          plVar44 = *(long **)(param_4[0x2f] + 0xe0);
          lVar42 = 0;
          if (plVar44 != (long *)0x0) {
            (**(code **)(*plVar44 + 0x90))();
            lVar42 = *plVar44;
          }
          func_0x00010ab4d4d0(&ppppppplStack_100,lVar42,lVar49);
          lVar45 = param_4[0x2a];
          FUN_10ab6f160();
          ppppppplVar19 = ppppppplStack_100;
          lVar42 = *(long *)(lVar53 + 0xf8);
          lVar49 = lVar42;
          for (; (lVar42 != *(long *)(lVar53 + 0x100) &&
                 (lVar49 = lVar42, *(long *)(lVar42 + 0x18) != lRam00000001138358d8));
              lVar42 = lVar42 + 0x38) {
            lVar49 = *(long *)(lVar53 + 0x100);
          }
          uVar6 = *(int *)(lVar49 + 0x24) - 1;
          if (uVar6 < 7) {
            iVar32 = *(int *)(&UNK_10e4dcfd0 + (ulong)uVar6 * 4);
          }
          else {
            iVar32 = 0;
          }
          if (*(int *)(lVar49 + 0x28) * iVar32 == 8) {
            lVar42 = *(long *)(lVar45 + 0x10) + (ulong)*(uint *)(lVar49 + 0x30);
            uVar40 = (ulong)*(uint *)(lVar45 + 0xf0);
          }
          else {
            lVar42 = 0;
            uVar40 = 0;
          }
          if (lVar41 == lVar24) {
            if (ppppppplStack_100 == (long *******)0x0) goto LAB_10a7f2f08;
          }
          else {
            uVar50 = 0;
            puVar38 = (undefined4 *)(lVar42 + 4);
            do {
              (*(code *)(*ppppppplVar19)[2])(ppppppplVar19,uVar50);
              puVar38[-1] = (int)ppppppplVar15;
              *puVar38 = (int)uVar25;
              uVar50 = uVar50 + 1;
              puVar38 = (undefined4 *)((long)puVar38 + uVar40);
            } while (uVar33 != uVar50);
          }
          (*(code *)(*ppppppplVar19)[1])(ppppppplVar19);
        }
      }
      else {
        do {
          if (*(long *)(lVar49 + 0x18) == lRam00000001138358d8) goto LAB_10a7f2dec;
          lVar49 = lVar49 + 0x38;
        } while (lVar49 != lVar42);
      }
LAB_10a7f2f08:
      if (pppppplStack_130 == pppppplStack_138) goto LAB_10a7f3b94;
      FUN_10a1322a0(&ppppppplStack_100,
                    ((long)pppppplStack_138[1] - (long)*pppppplStack_138 >> 2) * -0x5555555555555555
                   );
      if (pppppplStack_130 != pppppplStack_138) {
        uVar25 = 0;
        uVar40 = uVar33;
        if (uVar33 < 2) {
          uVar40 = 1;
        }
        do {
          lVar42 = param_4[0x3c];
          ppppplVar37 = pppppplStack_138[uVar25 * 3];
          func_0x000109699628((int)((ulong)(CONCAT44(fStack_f4,fStack_f8) - (long)ppppppplStack_100)
                                   >> 2) * -0x55555555,ppppppplStack_100,
                              (ulong)(*(long *)(lVar42 + 0x68) - *(long *)(lVar42 + 0x60)) >> 2 &
                              0xffffffff,*(long *)(lVar42 + 0x60),
                              (int)((ulong)((long)(pppppplStack_138 + uVar25 * 3)[1] -
                                           (long)ppppplVar37) >> 2) * -0x55555555,ppppplVar37,
                              (ulong)(*(long *)(lVar42 + 0x80) - *(long *)(lVar42 + 0x78)) >> 3 &
                              0xffffffff);
          if (lVar41 != lVar24) {
            lVar49 = 0;
            lVar42 = 0;
            uVar50 = 0;
            puVar16 = puStack_2c0;
            do {
              uVar30 = (CONCAT44(fStack_f4,fStack_f8) - (long)ppppppplStack_100 >> 2) *
                       -0x5555555555555555;
              bVar12 = uVar30 - uVar50 == 0;
              if (uVar25 == 0) {
                if (uVar30 < uVar50 || bVar12) goto LAB_10a7f3b94;
                uVar56 = *(undefined8 *)((long)ppppppplStack_100 + lVar42);
                uVar56 = CONCAT44((float)((ulong)uVar56 >> 0x20) - (float)((ulong)*puVar16 >> 0x20),
                                  (float)uVar56 - (float)*puVar16);
                fVar54 = *(float *)((undefined8 *)((long)ppppppplStack_100 + lVar42) + 1);
                puVar35 = puVar16;
              }
              else {
                if ((uVar30 < uVar50 || bVar12) || (plVar13 == plVar29)) goto LAB_10a7f3b94;
                fVar54 = *(float *)((undefined8 *)((long)ppppppplStack_100 + lVar42) + 1) -
                         *(float *)(puVar16 + 1);
                uVar56 = *(undefined8 *)((long)ppppppplStack_100 + lVar42);
                uVar69 = *(undefined8 *)(*plVar29 + lVar49 + 0xc);
                uVar56 = CONCAT44(((float)((ulong)uVar56 >> 0x20) - (float)((ulong)*puVar16 >> 0x20)
                                  ) - (float)((ulong)uVar69 >> 0x20),
                                  ((float)uVar56 - (float)*puVar16) - (float)uVar69);
                puVar35 = (undefined8 *)(*plVar29 + uVar50 * 0x18 + 0xc);
              }
              if ((ulong)((long)plVar13 - (long)plVar29 >> 3) <= uVar25) goto LAB_10a7f3b94;
              fVar57 = *(float *)(puVar35 + 1);
              lVar53 = plVar29[uVar25];
              uVar50 = uVar50 + 1;
              *(undefined8 *)(lVar53 + lVar49 + 0xc) = uVar56;
              *(float *)(lVar53 + lVar49 + 0x14) = fVar54 - fVar57;
              puVar16 = (undefined8 *)((long)puVar16 + uVar34);
              lVar42 = lVar42 + 0xc;
              lVar49 = lVar49 + 0x18;
            } while (uVar40 != uVar50);
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 < (ulong)(((long)pppppplStack_130 - (long)pppppplStack_138 >> 3) *
                                 -0x5555555555555555));
      }
      lVar42 = *(long *)(param_4[0x2a] + 0x40);
      if (*(long *)(param_4[0x2a] + 0x48) != lVar42) {
        uVar25 = 0;
        do {
          if ((ulong)((long)ppppppplStack_110 - (long)ppppppplStack_118 >> 4) <= uVar25)
          goto LAB_10a7f3b94;
          ppppppplVar15 = ppppppplStack_118 + uVar25 * 2;
          pppppplStack_148 = ppppppplVar15[1];
          pppppplStack_150 = *ppppppplVar15;
          *ppppppplVar15 = (long ******)0x0;
          ppppppplVar15[1] = (long ******)0x0;
          func_0x00010a7f4a04(lVar42 + uVar25 * 0x48,&pppppplStack_150);
          pppppplVar20 = pppppplStack_148;
          if (pppppplStack_148 != (long ******)0x0) {
            pppppplVar1 = pppppplStack_148 + 1;
            do {
              ppppplVar37 = *pppppplVar1;
              cVar10 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppppplVar1,0x10);
              if (bVar12) {
                *pppppplVar1 = (long *****)((long)ppppplVar37 + -1);
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (ppppplVar37 == (long *****)0x0) {
              (*(code *)(*pppppplStack_148)[2])(pppppplStack_148);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar20);
            }
          }
          uVar25 = uVar25 + 1;
          lVar42 = *(long *)(param_4[0x2a] + 0x40);
        } while (uVar25 < (ulong)((*(long *)(param_4[0x2a] + 0x48) - lVar42 >> 3) *
                                 -0x71c71c71c71c71c7));
      }
      if (pppppplStack_130 == pppppplStack_138) goto LAB_10a7f3b94;
      if (*(long *)(param_4[0x3c] + 0x50) - *(long *)(param_4[0x3c] + 0x48) >> 3 ==
          ((long)pppppplStack_138[1] - (long)*pppppplStack_138 >> 2) * -0x5555555555555555) {
        FUN_10a5e3a78(&lStack_168);
        if (pppppplStack_130 == pppppplStack_138) goto LAB_10a7f3b94;
        lVar42 = param_4[0x3c];
        func_0x000109699804((ulong)(CONCAT44(uStack_15c,uStack_160) - lStack_168) >> 4 & 0xffffffff,
                            lStack_168,
                            (ulong)(*(long *)(lVar42 + 0x68) - *(long *)(lVar42 + 0x60)) >> 2 &
                            0xffffffff,*(long *)(lVar42 + 0x60),
                            (int)((ulong)((long)pppppplStack_138[1] - (long)*pppppplStack_138) >> 2)
                            * -0x55555555,*pppppplStack_138,
                            (int)((ulong)(CONCAT44(fStack_f4,fStack_f8) - (long)ppppppplStack_100)
                                 >> 2) * -0x55555555,ppppppplStack_100,
                            (ulong)(*(long *)(lVar42 + 0x50) - *(long *)(lVar42 + 0x48)) >> 3 &
                            0xffffffff,*(long *)(lVar42 + 0x48));
        if (lVar41 != lVar24) {
          lVar24 = 0;
          uVar25 = 0;
          do {
            if ((ulong)(CONCAT44(uStack_15c,uStack_160) - lStack_168 >> 4) <= uVar25)
            goto LAB_10a7f3b94;
            uVar56 = *(undefined8 *)(lStack_168 + lVar24);
            puStack_328[1] = ((undefined8 *)(lStack_168 + lVar24))[1];
            *puStack_328 = uVar56;
            uVar25 = uVar25 + 1;
            puStack_328 = (undefined8 *)((long)puStack_328 + uStack_330);
            lVar24 = lVar24 + 0x10;
          } while (uVar33 != uVar25);
        }
        if (lStack_168 != 0) {
          uStack_160 = (undefined4)lStack_168;
          uStack_15c = (undefined4)((ulong)lStack_168 >> 0x20);
          __ZdlPv();
        }
      }
      plVar13 = *(long **)(param_4[0x2f] + 0xe0);
      (**(code **)(*plVar13 + 0x90))();
      lVar42 = *(long *)(*plVar13 + 0x90);
      for (lVar24 = *(long *)(*plVar13 + 0x88); lVar24 != lVar42; lVar24 = lVar24 + 0x30) {
        lVar41 = param_4[0x2a];
        uVar25 = *(ulong *)(lVar41 + 0x90);
        if (uVar25 < *(ulong *)(lVar41 + 0x98)) {
          FUN_10a3aaa74(uVar25,lVar24);
          lVar49 = uVar25 + 0x30;
          *(long *)(lVar41 + 0x90) = lVar49;
        }
        else {
          lVar49 = lVar41 + 0x88;
          FUN_10a3aa94c(lVar49,lVar24);
        }
        *(long *)(lVar41 + 0x90) = lVar49;
      }
      if (pppppplStack_130 == pppppplStack_138) goto LAB_10a7f3b94;
      func_0x00010a008f4c(&lStack_168,*pppppplStack_138,
                          ((long)pppppplStack_138[1] - (long)*pppppplStack_138 >> 2) *
                          -0x5555555555555555);
      lVar24 = param_4[0x2a];
      *(undefined4 *)(lVar24 + 0x14c) = uStack_160;
      *(long *)(lVar24 + 0x144) = lStack_168;
      *(ulong *)(lVar24 + 0x138) = CONCAT44(uStack_158,uStack_15c);
      *(undefined4 *)(lVar24 + 0x140) = uStack_154;
      if (ppppppplStack_100 != (long *******)0x0) {
        fStack_f8 = SUB84(ppppppplStack_100,0);
        fStack_f4 = (float)((ulong)ppppppplStack_100 >> 0x20);
        __ZdlPv();
      }
      ppppppplStack_100 = &pppppplStack_138;
      func_0x00010a60f324(&ppppppplStack_100);
      if (plStack_120 != (long *)0x0) {
        (**(code **)(*plStack_120 + 8))();
      }
      if (plVar29 != (long *)0x0) {
        __ZdlPv(plVar29);
      }
      ppppppplStack_100 = (long *******)&ppppppplStack_118;
      FUN_10a7fe6e0(&ppppppplStack_100);
      if (lStack_1f0 != 0) {
        lStack_1e8 = lStack_1f0;
        __ZdlPv();
      }
      if (uStack_1b0 != (long *******)0x0) {
        ppppppplStack_1a8 = uStack_1b0;
        __ZdlPv();
      }
      param_4 = plVar21;
      if (puStack_298 != (undefined8 *)0x0) {
        puStack_290 = puStack_298;
        __ZdlPv();
      }
      goto LAB_10a7f15ec;
    }
  }
  lVar24 = param_4[0x3a];
  plVar21 = *(long **)(param_4[0x2f] + 0xe0);
  if (plVar21 == (long *)0x0) {
    lVar42 = 0;
  }
  else {
    (**(code **)(*plVar21 + 0x90))();
    lVar42 = *plVar21;
  }
  uVar6 = *(uint *)(lVar42 + 0xf0);
  if (uVar6 == 0) {
    uVar25 = 0;
  }
  else {
    uVar25 = 0;
    if ((ulong)uVar6 != 0) {
      uVar25 = (ulong)(*(long *)(lVar42 + 0x18) - *(long *)(lVar42 + 0x10)) / (ulong)uVar6;
    }
    uVar25 = uVar25 & 0xffffffff;
  }
  fStack_f8 = 0.0;
  fStack_f4 = 0.0;
  fStack_f0 = 0.0;
  fStack_ec = 0.0;
  ppppppplStack_100 = (long *******)0xffffffffffff;
  fStack_e8 = 1.0;
  ppppppplStack_1a8 = (long *******)0x0;
  uStack_1a0 = 0;
  uStack_1b0 = (long *******)0x0;
  FUN_10a7fe5d4(&uStack_1b0,&ppppppplStack_100,&fStack_e4);
  ppppppplVar15 = uStack_1b0;
  FUN_10a7f3f4c(lVar24 + 0x10,uVar25,uStack_1b0,ppppppplStack_1a8);
  if (ppppppplVar15 != (long *******)0x0) {
    __ZdlPv(ppppppplVar15);
  }
  lVar24 = param_4[0x3c];
  param_4[0x3c] = 0;
  if (lVar24 != 0) {
    FUN_10a812cc0();
  }
  param_4[0x3e] = param_4[0x3d];
  uVar56 = 0x120;
  ___cxa_allocate_exception(0x120);
  FUN_10a009538();
  ___cxa_throw(uVar56,&PTR_DAT_110b99e48,FUN_10a002a90);
LAB_10a7f3b94:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10a7f3b98);
  (*pcVar11)();
LAB_10a7f384c:
  uVar6 = *(uint *)(lVar24 + 0xf0);
  if (uVar6 == 0) {
    uVar40 = 0;
  }
  else {
    uVar40 = 0;
    if ((ulong)uVar6 != 0) {
      uVar40 = (ulong)(*(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10)) / (ulong)uVar6;
    }
    uVar40 = uVar40 & 0xffffffff;
  }
  if (uVar40 <= uVar33) {
    if (ppppppplVar15 != (long *******)0x0) {
      (*(code *)(*ppppppplVar15)[1])(ppppppplVar15);
    }
LAB_10a7f38c4:
    uVar6 = *(uint *)(lVar24 + 0x114);
    if (uVar6 == 0xffffffff) {
      lVar24 = 0;
      ppppppplStack_100 = (long *******)0x0;
      fStack_f8 = 0.0;
      fStack_f4 = 0.0;
      fStack_f0 = 0.0;
      fStack_ec = 0.0;
    }
    else {
      lVar42 = *(long *)(lVar24 + 0xf8);
      uVar33 = (*(long *)(lVar24 + 0x100) - lVar42 >> 3) * 0x6db6db6db6db6db7;
      if (uVar33 < uVar6 || uVar33 - uVar6 == 0) {
        FUN_10ab725fc();
        goto LAB_10a7f3b94;
      }
      ppppppplStack_100 = (long *******)0x0;
      fStack_f8 = 0.0;
      fStack_f4 = 0.0;
      fStack_f0 = 0.0;
      fStack_ec = 0.0;
      if (lVar42 == 0) {
        lVar24 = 0;
      }
      else {
        func_0x00010ab4d7d8(&uStack_1b0,lVar24,lVar42 + (ulong)uVar6 * 0x38);
        uVar6 = *(uint *)(lVar24 + 0xf0);
        if (uVar6 == 0) {
          uVar33 = 0;
        }
        else {
          uVar33 = 0;
          if ((ulong)uVar6 != 0) {
            uVar33 = (ulong)(*(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10)) / (ulong)uVar6;
          }
          uVar33 = uVar33 & 0xffffffff;
        }
        func_0x0001096b5198(&ppppppplStack_100,uVar33);
        ppppppplVar15 = uStack_1b0;
        lVar42 = 0;
        uVar33 = 0;
        while( true ) {
          uVar6 = *(uint *)(lVar24 + 0xf0);
          if (uVar6 == 0) {
            uVar40 = 0;
          }
          else {
            uVar40 = 0;
            if ((ulong)uVar6 != 0) {
              uVar40 = (ulong)(*(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10)) / (ulong)uVar6;
            }
            uVar40 = uVar40 & 0xffffffff;
          }
          if (uVar40 <= uVar33) break;
          (*(code *)(*ppppppplVar15)[2])(ppppppplVar15,uVar33);
          uVar40 = (CONCAT44(fStack_f4,fStack_f8) - (long)ppppppplStack_100 >> 2) *
                   -0x5555555555555555;
          if (uVar40 < uVar33 || uVar40 - uVar33 == 0) goto LAB_10a7f3b94;
          puVar38 = (undefined4 *)((long)ppppppplStack_100 + lVar42);
          *puVar38 = (int)uVar56;
          puVar38[1] = (int)uVar25;
          puVar38[2] = (int)param_3;
          uVar33 = uVar33 + 1;
          lVar42 = lVar42 + 0xc;
        }
        if (ppppppplVar15 != (long *******)0x0) {
          (*(code *)(*ppppppplVar15)[1])(ppppppplVar15);
        }
        lVar24 = CONCAT44(fStack_f4,fStack_f8);
      }
    }
    lVar42 = *(long *)param_4[0x3c];
    FUN_10a7f41e0(&uStack_1b0,(int)((ulong)(((long *)param_4[0x3c])[1] - lVar42) >> 2) * -0x55555555
                  ,lVar42,(int)((ulong)(lVar24 - (long)ppppppplStack_100) >> 2) * -0x55555555);
    lVar42 = param_4[0x3c];
    lVar24 = *(long *)(lVar42 + 0x78);
    if (lVar24 != 0) {
      *(long *)(lVar42 + 0x80) = lVar24;
      __ZdlPv();
      *(long *)(lVar42 + 0x78) = 0;
      *(undefined8 *)(lVar42 + 0x80) = 0;
      *(undefined8 *)(lVar42 + 0x88) = 0;
    }
    *(long ********)(lVar42 + 0x80) = ppppppplStack_1a8;
    *(long ********)(lVar42 + 0x78) = uStack_1b0;
    *(ulong *)(lVar42 + 0x88) = uStack_1a0;
    ppppppplVar15 = uStack_1b0;
    if (ppppppplStack_100 != (long *******)0x0) {
      fStack_f8 = SUB84(ppppppplStack_100,0);
      fStack_f4 = (float)((ulong)ppppppplStack_100 >> 0x20);
      __ZdlPv();
    }
    if (ppppppplVar19 != (long *******)0x0) {
      (*(code *)(*ppppppplVar19)[1])(ppppppplVar19);
    }
    goto LAB_10a7f1ce8;
  }
  (*(code *)(*ppppppplVar15)[2])(ppppppplVar15,uVar33);
  lVar41 = *(long *)(param_4[0x3c] + 0x48);
  if (uVar33 < (ulong)(*(long *)(param_4[0x3c] + 0x50) - lVar41 >> 3)) goto code_r0x00010a7f389c;
  goto LAB_10a7f3b94;
code_r0x00010a7f389c:
  puVar38 = (undefined4 *)(lVar41 + lVar42);
  *puVar38 = (int)uVar56;
  puVar38[1] = (int)uVar25;
  uVar33 = uVar33 + 1;
  lVar42 = lVar42 + 8;
  goto LAB_10a7f384c;
}



/* Entry: 10a7f3ec8; end: 10a7f3ecf;  */

void FUN_10a7f3ec8(long param_1,long param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 uStack_40;
  long *plStack_38;
  
  plVar7 = (long *)(param_1 + -0xe8);
  *(undefined4 *)(param_1 + -0x74) = 0;
  lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0xf8);
  plVar3 = *(long **)(*(long *)(param_1 + 0x30) + 0x100);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (lVar6 != 0) {
    lVar6 = *(long *)(param_2 + 0x78);
    FUN_10aacfcb0(lVar6,"body",4);
    if (lVar6 == 0) {
      uStack_40 = 0;
      plStack_38 = (long *)0x0;
    }
    else {
      plStack_38 = *(long **)(lVar6 + 0x20);
      uStack_40 = *(undefined8 *)(lVar6 + 0x18);
      if (*(long *)(lVar6 + 0x20) != 0) {
        plVar3 = (long *)(*(long *)(lVar6 + 0x20) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *plVar3 = *plVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    func_0x00010a504104(param_1 + 0x58,&uStack_40);
    plVar3 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar6 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    lVar6 = *(long *)(param_1 + 0x58);
    if (lVar6 != 0) {
      uVar8 = *(ulong *)(lVar6 + 0x18);
      puVar9 = (ulong *)(lVar6 + 0x18);
      if ((uVar8 & 1) != 0) {
        puVar9 = (ulong *)(uVar8 + 7);
      }
      if (*(int *)(lVar6 + 0x20) != 0) {
        lVar6 = (long)*(int *)(lVar6 + 0x20) << 3;
        do {
          uVar8 = *puVar9;
          if ((((*(char *)(uVar8 + 0x13c) == '\x01') && ((*(byte *)(uVar8 + 0x12) >> 5 & 1) != 0))
              && (*(int *)(uVar8 + 0x144) == *(int *)(*(long *)(param_1 + 0x30) + 0xe0))) &&
             (*(int *)(uVar8 + 0x38) != 0)) {
            FUN_10a7f11f0(plVar7,uVar8);
            ppuVar2 = &PTR_PTR_1132d6de0;
            if (*(undefined ***)(uVar8 + 0xd0) != (undefined **)0x0) {
              ppuVar2 = *(undefined ***)(uVar8 + 0xd0);
            }
            FUN_10a7f416c(&uStack_40,*(undefined8 *)(*(long *)(param_1 + -0x58) + 0x870),ppuVar2);
            func_0x00010a36f2e0(param_1 + 0x78,&uStack_40);
            plVar3 = plStack_38;
            if (plStack_38 != (long *)0x0) {
              plVar1 = plStack_38 + 1;
              do {
                lVar6 = *plVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *plVar1 = lVar6 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar6 == 0) {
                (**(code **)(*plStack_38 + 0x10))(plStack_38);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
              }
            }
            *(undefined4 *)(param_1 + -0x74) = 2;
            break;
          }
          puVar9 = puVar9 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
    }
  }
  (**(code **)(*plVar7 + 0xa0))(plVar7);
  return;
}



/* Entry: 10a7f3ed0; end: 10a7f3f4b;  */

void FUN_10a7f3ed0(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = param_2;
  while( true ) {
    if (plVar5 == (long *)0x0) {
      lVar4 = param_2[0x2b];
      lVar6 = param_2[0x2a];
      param_1[1] = param_2[0x2b];
      *param_1 = lVar6;
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      return;
    }
    plVar3 = plVar5;
    (**(code **)(*plVar5 + 0x80))();
    if ((int)plVar3 != 2) break;
    plVar5 = (long *)plVar5[0x13];
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a7f3f4c; end: 10a7f416b;  */

void FUN_10a7f3f4c(long *param_1,ulong param_2,long param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  lVar10 = *param_1;
  plVar9 = (long *)param_1[1];
  lVar6 = (long)plVar9 - lVar10 >> 3;
  bVar3 = param_2 < (ulong)(lVar6 * -0x5555555555555555);
  uVar1 = param_2 + lVar6 * 0x5555555555555555;
  if (bVar3 || uVar1 == 0) {
    if (bVar3) {
      plVar7 = (long *)(lVar10 + param_2 * 0x18);
      while (plVar2 = plVar9, plVar2 != plVar7) {
        plVar9 = plVar2 + -3;
        if (*plVar9 != 0) {
          plVar2[-2] = *plVar9;
          __ZdlPv();
        }
      }
      param_1[1] = (long)plVar7;
    }
  }
  else if ((ulong)((param_1[2] - (long)plVar9 >> 3) * -0x5555555555555555) < uVar1) {
    lVar4 = param_1[2] - lVar10 >> 3;
    uVar5 = lVar4 * 0x5555555555555556;
    if (uVar5 < param_2 || uVar5 - param_2 == 0) {
      uVar5 = param_2;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar5 = 0xaaaaaaaaaaaaaaa;
    }
    plVar7 = param_1;
    plStack_58 = param_1;
    FUN_10a7fe504();
    puVar8 = (undefined8 *)((long)plVar7 + ((long)plVar9 - lVar10));
    plStack_60 = plVar7 + uVar5 * 3;
    puVar11 = puVar8 + uVar1 * 3;
    lVar10 = param_2 * 0x18 + lVar6 * -8;
    plStack_78 = plVar7;
    plStack_70 = puVar8;
    plStack_68 = puVar8;
    do {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      FUN_10a7fe3e8(puVar8,param_3,param_4,(param_4 - param_3 >> 2) * 0x6db6db6db6db6db7);
      puVar8 = puVar8 + 3;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != 0);
    lVar10 = (long)plStack_70 - (param_1[1] - *param_1);
    _memcpy(lVar10);
    plStack_78 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = (long)puVar11;
    lVar10 = param_1[2];
    param_1[2] = (long)plStack_60;
    plStack_70 = plStack_78;
    plStack_68 = plStack_78;
    plStack_60 = (long *)lVar10;
    func_0x00010a7fe548(&plStack_78);
  }
  else {
    plVar7 = plVar9 + uVar1 * 3;
    lVar10 = param_2 * 0x18 + lVar6 * -8;
    do {
      *plVar9 = 0;
      plVar9[1] = 0;
      plVar9[2] = 0;
      FUN_10a7fe3e8(plVar9,param_3,param_4,(param_4 - param_3 >> 2) * 0x6db6db6db6db6db7);
      plVar9 = plVar9 + 3;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != 0);
    param_1[1] = (long)plVar7;
  }
  return;
}



/* Entry: 10a7f416c; end: 10a7f41df;  */

void FUN_10a7f416c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  float *pfVar2;
  float *pfVar3;
  
  FUN_10a7f8494(param_1,param_2,(long)*(int *)(param_3 + 0x18) + 1);
  pfVar3 = *(float **)*param_1;
  *pfVar3 = 1.0;
  uVar1 = (ulong)*(uint *)(param_3 + 0x18);
  if (0 < (int)*(uint *)(param_3 + 0x18)) {
    pfVar2 = *(float **)(param_3 + 0x20);
    do {
      pfVar3 = pfVar3 + 1;
      *pfVar3 = *pfVar2 * 0.33333334;
      uVar1 = uVar1 - 1;
      pfVar2 = pfVar2 + 1;
    } while (uVar1 != 0);
  }
  return;
}



/* Entry: 10a7f41e0; end: 10a7f4607;  */

void FUN_10a7f41e0(long *param_1,int param_2,long param_3,int param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  int *piVar10;
  float *pfVar12;
  float *pfVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  int *piStack_a0;
  int *piStack_98;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  int *piVar11;
  
  FUN_109ffe1f4(&piStack_a0,(long)param_2);
  if (piStack_a0 != piStack_98) {
    iVar9 = 0;
    piVar10 = piStack_a0;
    do {
      piVar11 = piVar10 + 1;
      *piVar10 = iVar9;
      iVar9 = iVar9 + 1;
      piVar10 = piVar11;
    } while (piVar11 != piStack_98);
  }
  uVar6 = (long)piStack_98 - (long)piStack_a0;
  iVar9 = (int)(uVar6 >> 2);
  if (param_4 == 0) {
    plVar15 = (long *)0x0;
    lStack_88 = 0;
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    if (1 < iVar9) {
      plVar15 = (long *)0x0;
      uVar14 = 1;
      do {
        piVar10 = piStack_a0;
        uVar17 = 0;
        uVar7 = (long)piStack_98 - (long)piStack_a0 >> 2;
        do {
          if ((uVar7 == uVar17) || (uVar7 <= uVar14)) goto LAB_10a7f45cc;
          pfVar12 = (float *)(param_3 + (long)piStack_a0[uVar17] * 0xc);
          pfVar13 = (float *)(param_3 + (long)piStack_a0[uVar14] * 0xc);
          if ((ABS(*pfVar12 - *pfVar13) < 0.001) &&
             ((ABS(pfVar12[1] - pfVar13[1]) < 0.001 && (ABS(pfVar12[2] - pfVar13[2]) < 0.001)))) {
            if (plVar15 < plStack_78) {
              *(int *)plVar15 = piStack_a0[uVar17];
              *(int *)((long)plVar15 + 4) = piVar10[uVar14];
              plVar15 = plVar15 + 1;
              plStack_80 = plVar15;
            }
            else {
              lVar16 = (long)plVar15 - lStack_88;
              uVar7 = (lVar16 >> 3) + 1;
              if (uVar7 >> 0x3d != 0) {
                FUN_10a050dc0();
                goto LAB_10a7f45cc;
              }
              uVar8 = (long)plStack_78 - lStack_88 >> 2;
              if (uVar8 <= uVar7) {
                uVar8 = uVar7;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)plStack_78 - lStack_88)) {
                uVar8 = 0x1fffffffffffffff;
              }
              plVar4 = &lStack_88;
              FUN_10a050dd4();
              lVar2 = lStack_88;
              lVar5 = (long)plStack_80 - lStack_88;
              piVar11 = (int *)((long)plVar4 + lVar16);
              *piVar11 = piVar10[uVar17];
              piVar11[1] = piVar10[uVar14];
              plVar15 = (long *)(piVar11 + 2);
              lVar5 = (long)piVar11 - lVar5;
              _memcpy(lVar5,lVar2);
              bVar1 = lStack_88 != 0;
              lStack_88 = lVar5;
              plStack_80 = plVar15;
              plStack_78 = plVar4 + uVar8;
              if (bVar1) {
                __ZdlPv();
                plStack_80 = plVar15;
              }
            }
            break;
          }
          uVar17 = uVar17 + 1;
        } while (uVar14 != uVar17);
        uVar14 = uVar14 + 1;
      } while (uVar14 != (uVar6 >> 2 & 0x7fffffff));
    }
    *param_1 = lStack_88;
    param_1[1] = (long)plVar15;
  }
  else {
    plVar15 = (long *)0x0;
    lStack_88 = 0;
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    if (1 < iVar9) {
      plVar15 = (long *)0x0;
      uVar14 = 1;
      do {
        piVar10 = piStack_a0;
        uVar17 = 0;
        uVar7 = (long)piStack_98 - (long)piStack_a0 >> 2;
        do {
          if ((uVar7 == uVar17) || (uVar7 <= uVar14)) goto LAB_10a7f45cc;
          iVar9 = piStack_a0[uVar17];
          pfVar12 = (float *)(param_3 + (long)iVar9 * 0xc);
          pfVar13 = (float *)(param_3 + (long)piStack_a0[uVar14] * 0xc);
          if ((ABS(*pfVar12 - *pfVar13) < 0.001) &&
             ((ABS(pfVar12[1] - pfVar13[1]) < 0.001 && (ABS(pfVar12[2] - pfVar13[2]) < 0.001)))) {
            pfVar12 = (float *)(param_5 + (long)iVar9 * 0xc);
            pfVar13 = (float *)(param_5 + (long)piStack_a0[uVar14] * 0xc);
            if ((ABS(*pfVar12 - *pfVar13) < 0.001) &&
               ((ABS(pfVar12[1] - pfVar13[1]) < 0.001 && (ABS(pfVar12[2] - pfVar13[2]) < 0.001)))) {
              if (plVar15 < plStack_78) {
                *(int *)plVar15 = iVar9;
                *(int *)((long)plVar15 + 4) = piVar10[uVar14];
                plVar15 = plVar15 + 1;
                plStack_80 = plVar15;
              }
              else {
                lVar16 = (long)plVar15 - lStack_88;
                uVar7 = (lVar16 >> 3) + 1;
                if (uVar7 >> 0x3d != 0) {
                  FUN_10a050dc0();
LAB_10a7f45cc:
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a7f45d0);
                  (*pcVar3)();
                }
                uVar8 = (long)plStack_78 - lStack_88 >> 2;
                if (uVar8 <= uVar7) {
                  uVar8 = uVar7;
                }
                if (0x7ffffffffffffff7 < (ulong)((long)plStack_78 - lStack_88)) {
                  uVar8 = 0x1fffffffffffffff;
                }
                plVar4 = &lStack_88;
                FUN_10a050dd4();
                lVar2 = lStack_88;
                lVar5 = (long)plStack_80 - lStack_88;
                piVar11 = (int *)((long)plVar4 + lVar16);
                *piVar11 = piVar10[uVar17];
                piVar11[1] = piVar10[uVar14];
                plVar15 = (long *)(piVar11 + 2);
                lVar5 = (long)piVar11 - lVar5;
                _memcpy(lVar5,lVar2);
                bVar1 = lStack_88 != 0;
                lStack_88 = lVar5;
                plStack_80 = plVar15;
                plStack_78 = plVar4 + uVar8;
                if (bVar1) {
                  __ZdlPv();
                  plStack_80 = plVar15;
                }
              }
              break;
            }
          }
          uVar17 = uVar17 + 1;
        } while (uVar14 != uVar17);
        uVar14 = uVar14 + 1;
      } while (uVar14 != (uVar6 >> 2 & 0x7fffffff));
    }
    *param_1 = lStack_88;
    param_1[1] = (long)plVar15;
  }
  param_1[2] = (long)plStack_78;
  if (piStack_a0 != (int *)0x0) {
    piStack_98 = piStack_a0;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a7f4608; end: 10a7f4887;  */

void FUN_10a7f4608(float *param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7,long param_8,long param_9)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  code *pcVar4;
  float *pfVar5;
  undefined8 *puVar6;
  float *pfVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  
  if (param_2 == param_3) {
    uVar23 = 0;
    fVar15 = 0.0;
    fVar16 = 0.0;
    fVar14 = 0.0;
    fVar17 = 0.0;
    fVar30 = 0.0;
    fVar29 = 0.0;
    fVar19 = 0.0;
    fVar25 = 0.0;
    uVar21 = 0;
    uVar20 = 0;
  }
  else {
    uVar8 = (param_5 - param_4 >> 2) * -0x5555555555555555;
    uVar9 = (param_7 - param_6 >> 2) * -0x5555555555555555;
    fVar15 = 0.0;
    fVar16 = 0.0;
    fVar14 = 0.0;
    uVar18 = 0;
    uVar23 = 0x3f800000;
    uVar24 = 0x3f800000;
    uVar22 = 0;
    fVar17 = 0.0;
    fVar19 = 0.0;
    fVar25 = 0.0;
    uVar21 = 0;
    uVar20 = 0;
    do {
      lVar11 = 0;
      pfVar1 = (float *)(param_2 + 8);
      pfVar2 = (float *)(param_2 + 0xc);
      pfVar3 = (float *)(param_2 + 0x10);
      do {
        uVar12 = (ulong)*(ushort *)(param_2 + lVar11 * 2);
        if (uVar12 == 0xffff) {
          uVar20 = 0;
          fVar19 = 1.0;
          fVar17 = 0.0;
          goto LAB_10a7f4868;
        }
        iVar10 = (int)lVar11;
        pfVar5 = pfVar3;
        if ((iVar10 != 2) && (pfVar5 = pfVar1, iVar10 == 1)) {
          pfVar5 = pfVar2;
        }
        if (uVar8 < uVar12 || uVar8 - uVar12 == 0) {
LAB_10a7f4884:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a7f4888);
          (*pcVar4)();
        }
        pfVar7 = pfVar3;
        if ((iVar10 != 2) && (pfVar7 = pfVar1, iVar10 == 1)) {
          pfVar7 = pfVar2;
        }
        if (uVar9 < uVar12 || uVar9 - uVar12 == 0) goto LAB_10a7f4884;
        pfVar13 = pfVar3;
        if ((iVar10 != 2) && (pfVar13 = pfVar1, iVar10 == 1)) {
          pfVar13 = pfVar2;
        }
        if ((ulong)(param_9 - param_8 >> 4) <= uVar12) goto LAB_10a7f4884;
        fVar29 = *pfVar5;
        pfVar5 = (float *)(param_4 + uVar12 * 0xc);
        fVar28 = *(float *)(param_2 + 0x18);
        uVar32 = *(undefined8 *)(pfVar5 + 1);
        fVar17 = fVar17 + fVar29 * *pfVar5 * fVar28;
        fVar15 = fVar15 + (float)uVar32 * fVar29 * fVar28;
        fVar16 = fVar16 + (float)((ulong)uVar32 >> 0x20) * fVar29 * fVar28;
        fVar30 = *pfVar7;
        puVar6 = (undefined8 *)(param_6 + uVar12 * 0xc);
        uVar32 = *puVar6;
        fVar29 = (float)((ulong)uVar21 >> 0x20) + (float)((ulong)uVar32 >> 0x20) * fVar30 * fVar28;
        uVar21 = CONCAT44(fVar29,(float)uVar21 + (float)uVar32 * fVar30 * fVar28);
        fVar19 = fVar19 + fVar28 * fVar30 * *(float *)(puVar6 + 1);
        fVar31 = *pfVar13;
        pfVar5 = (float *)(param_8 + uVar12 * 0x10);
        fVar25 = fVar25 + fVar28 * fVar31 * pfVar5[1];
        fVar30 = (float)uVar20 + pfVar5[2] * fVar31 * fVar28;
        uVar20 = CONCAT44((float)((ulong)uVar20 >> 0x20) + *pfVar5 * fVar31 * fVar28,fVar30);
        lVar11 = lVar11 + 1;
      } while (lVar11 != 3);
      fVar14 = fVar14 + fVar28;
      param_2 = param_2 + 0x1c;
    } while (param_2 != param_3);
    uVar23 = NEON_ext(uVar20,uVar21,4,1);
  }
  fVar28 = (float)uVar23;
  fVar31 = (float)((ulong)uVar23 >> 0x20);
  uVar23 = NEON_fmov(0x3f800000,4);
  fVar26 = (float)uVar23 / SQRT(fVar30 * fVar30 + fVar25 * fVar25 + fVar28 * fVar28);
  fVar27 = (float)((ulong)uVar23 >> 0x20) /
           SQRT(fVar19 * fVar19 + fVar29 * fVar29 + fVar31 * fVar31);
  fVar29 = (float)((ulong)uVar21 >> 0x20) * fVar27;
  uVar23 = NEON_rev64(CONCAT44(fVar27,fVar26),4);
  fVar19 = fVar19 * (float)uVar23;
  fVar25 = fVar25 * (float)((ulong)uVar23 >> 0x20);
  fVar30 = (float)uVar20 * fVar26;
  uVar24 = CONCAT44(-fVar25 * fVar19 + fVar30 * fVar29,fVar28 * fVar26);
  uVar22 = CONCAT44(fVar16 / fVar14,fVar15 / fVar14);
  fVar17 = fVar17 / fVar14;
  uVar23 = CONCAT44(fVar29,(float)uVar21 * fVar27 * -fVar30 + fVar19 * fVar28 * fVar26);
  uVar18 = CONCAT44(fVar29 * -((float)((ulong)uVar20 >> 0x20) * fVar26) + fVar25 * fVar31 * fVar27,
                    fVar30);
  uVar20 = CONCAT44(fVar25,fVar31 * fVar27);
LAB_10a7f4868:
  *param_1 = fVar17;
  *(undefined8 *)(param_1 + 3) = uVar24;
  *(undefined8 *)(param_1 + 1) = uVar22;
  *(undefined8 *)(param_1 + 5) = uVar20;
  *(undefined8 *)(param_1 + 9) = uVar18;
  *(undefined8 *)(param_1 + 7) = uVar23;
  param_1[0xb] = fVar19;
  return;
}



/* Entry: 10a7f4888; end: 10a7f499f;  */

void FUN_10a7f4888(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plStack_40;
  long *plStack_38;
  
  puVar6 = (undefined8 *)*param_2;
  do {
    if (puVar6 == (undefined8 *)param_2[1]) {
      plVar5 = (long *)0x30;
      __Znwm();
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_DAT_11087c6f8;
      plVar5[1] = 0;
      plVar5[4] = 0;
      plVar5[5] = 0;
      plStack_40 = plVar5 + 3;
      *plStack_40 = 0;
      plStack_38 = plVar5;
      func_0x00010a7fe750(param_2,&plStack_40);
      plVar5 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar1 = plStack_38 + 1;
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
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      lVar7 = param_2[1];
      if (*param_2 == lVar7) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a7f498c);
        (*pcVar4)();
      }
      lVar8 = *(long *)(lVar7 + -8);
      uVar9 = *(undefined8 *)(lVar7 + -0x10);
      param_1[1] = *(undefined8 *)(lVar7 + -8);
      *param_1 = uVar9;
      if (lVar8 != 0) {
LAB_10a7f4960:
        plVar5 = (long *)(lVar8 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
    lVar8 = puVar6[1];
    if ((lVar8 != 0) && (*(long *)(lVar8 + 8) == 0)) {
      *param_1 = *puVar6;
      param_1[1] = lVar8;
      goto LAB_10a7f4960;
    }
    puVar6 = puVar6 + 2;
  } while( true );
}



/* Entry: 10a7f49a0; end: 10a7f4aab;  */

undefined8 * FUN_10a7f49a0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a7f4aac; end: 10a7f4afb;  */

void FUN_10a7f4aac(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10a7fe9d4(uVar1);
    lVar2 = uVar1 + 0x48;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    lVar2 = param_1;
    FUN_10a7fe894();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 10a7f4afc; end: 10a7f4c97;  */

void FUN_10a7f4afc(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 uStack_74;
  char cStack_69;
  undefined8 uStack_68;
  undefined1 uStack_59;
  undefined1 *puStack_58;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (((*(long *)(param_2 + 0x178) != 0) &&
      (plVar3 = *(long **)(*(long *)(param_2 + 0x178) + 0xe0), plVar3 != (long *)0x0)) &&
     ((**(code **)(*plVar3 + 0x90))(), *plVar3 != 0)) {
    uStack_80 = 0x6c616e7265747845;
    uStack_78 = 0x6873654d;
    uStack_74 = 0;
    cStack_69 = '\f';
    uStack_68 = 0;
    func_0x000107c2b080(&uStack_80);
    puVar4 = param_1;
    puStack_58 = (undefined1 *)&uStack_80;
    FUN_10a1f9da4(param_1,&uStack_80,&UNK_10dd5b8f9,&puStack_58,&uStack_59);
    *(undefined4 *)(puVar4 + 6) = 0x3f800000;
    if (cStack_69 < '\0') {
      __ZdlPv(uStack_80);
    }
    plVar3 = *(long **)(*(long *)(param_2 + 0x178) + 0xe0);
    (**(code **)(*plVar3 + 0x90))();
    lVar2 = *(long *)(*plVar3 + 0x48);
    for (lVar1 = *(long *)(*plVar3 + 0x40); lVar1 != lVar2; lVar1 = lVar1 + 0x48) {
      uVar5 = *(undefined4 *)(lVar1 + 0x18);
      FUN_10a0d09b4(&uStack_80,lVar1);
      puVar4 = param_1;
      puStack_58 = (undefined1 *)&uStack_80;
      FUN_10a1f9da4(param_1,&uStack_80,&UNK_10dd5b8f9,&puStack_58,&uStack_59);
      *(undefined4 *)(puVar4 + 6) = uVar5;
      if (cStack_69 < '\0') {
        __ZdlPv(uStack_80);
      }
    }
  }
  return;
}



/* Entry: 10a7f4c98; end: 10a7f4d8b;  */

undefined8 * FUN_10a7f4c98(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  uVar4 = *param_2;
  lVar5 = param_2[1];
  *param_1 = &PTR_DAT_110c1ce20;
  param_1[1] = uVar4;
  param_1[2] = lVar5;
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar4 = *param_2;
    plVar6 = (long *)param_2[1];
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
      param_1[3] = uVar4;
      param_1[4] = plVar6;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar3 = false;
      goto LAB_10a7f4d18;
    }
  }
  plVar6 = (long *)0x0;
  param_1[3] = uVar4;
  param_1[4] = 0;
  bVar3 = true;
LAB_10a7f4d18:
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  if (!bVar3) {
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
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return param_1;
}



/* Entry: 10a7f4d8c; end: 10a7f4e6f;  */

void FUN_10a7f4d8c(long param_1,long param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined1 auStack_60 [40];
  undefined4 uStack_38;
  uint uStack_34;
  byte bStack_28;
  
  FUN_10a7eb2e8(auStack_60,*(undefined8 *)(*(long *)(param_1 + 8) + 0x138));
  if (bStack_28 == 1) {
    lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x138);
    puVar1 = (undefined4 *)(param_1 + 0xa0);
    if (*(char *)(lVar3 + 0x140) == '\0') {
      puVar1 = (undefined4 *)(lVar3 + 0xe0);
    }
    uStack_38 = *puVar1;
    if (*(char *)(*(long *)(param_1 + 8) + 0x130) == '\x01') {
      lVar3 = lVar3 + 0xe8;
      FUN_10a7e26a4(lVar3,1);
      if ((int)lVar3 == 0) {
        if (bStack_28 == 0) goto LAB_10a7f4e40;
      }
      else {
        if ((bStack_28 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7f4e5c);
          (*pcVar2)();
        }
        uStack_34 = uStack_34 | 3;
      }
    }
    if ((*(byte *)(param_2 + 0x2b0) & 1) == 0) {
      *(undefined8 *)(param_2 + 0x298) = 0;
      *(undefined8 *)(param_2 + 0x2a0) = 0;
      *(undefined8 *)(param_2 + 0x2a8) = 0;
      *(undefined1 *)(param_2 + 0x2b0) = 1;
    }
    FUN_10aad0050((undefined8 *)(param_2 + 0x298),auStack_60);
  }
LAB_10a7f4e40:
  func_0x00010a7fd678(auStack_60);
  return;
}



/* Entry: 10a7f4e70; end: 10a7f4eaf;  */

void FUN_10a7f4e70(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  return;
}



/* Entry: 10a7f4eb0; end: 10a7f50e7;  */

uint FUN_10a7f4eb0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined8 uStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  func_0x00010a504104(param_1 + 0xa8,&lStack_60);
  plVar2 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar9 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x138);
  lStack_60 = *(long *)(lVar9 + 0xf8);
  plStack_58 = *(long **)(lVar9 + 0x100);
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = *plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (lStack_60 == 0) {
    uVar10 = 0;
    plVar2 = plStack_58;
  }
  else {
    lVar9 = *(long *)(param_2 + 0x78);
    FUN_10aacfcb0(lVar9,"body",4);
    if (lVar9 == 0) {
      uStack_70 = 0;
      plStack_68 = (long *)0x0;
    }
    else {
      plStack_68 = *(long **)(lVar9 + 0x20);
      uStack_70 = *(undefined8 *)(lVar9 + 0x18);
      if (*(long *)(lVar9 + 0x20) != 0) {
        plVar2 = (long *)(*(long *)(lVar9 + 0x20) + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = *plVar2 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
    }
    func_0x00010a504104(param_1 + 0xa8,&uStack_70);
    plVar2 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        lVar9 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar9 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    lVar9 = *(long *)(param_1 + 0xa8);
    lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x138);
    puVar3 = (undefined4 *)(param_1 + 0xa0);
    if (*(char *)(lVar8 + 0x140) == '\0') {
      puVar3 = (undefined4 *)(lVar8 + 0xe0);
    }
    FUN_10aacfdd8(lVar9,*puVar3);
    uVar10 = 0;
    if (lVar9 != 0) {
      ppuVar4 = &PTR_PTR_1132cfc60;
      if (*(undefined ***)(lStack_60 + 0x68) != (undefined **)0x0) {
        ppuVar4 = *(undefined ***)(lStack_60 + 0x68);
      }
      ppuVar5 = &PTR_PTR_1132d70f0;
      if ((undefined **)ppuVar4[0x1a] != (undefined **)0x0) {
        ppuVar5 = (undefined **)ppuVar4[0x1a];
      }
      param_1 = param_1 + 0x18;
      FUN_10a7e6300(param_1,lVar9,ppuVar5,param_3,param_4,param_5,param_6,&UNK_10e482af0);
      uVar10 = (uint)param_1;
    }
    uVar10 = lVar9 != 0 & uVar10;
    plVar2 = plStack_58;
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar9 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      plStack_58 = plVar2;
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return uVar10;
}



/* Entry: 10a7f50e8; end: 10a7f53e3;  */

undefined1  [16] FUN_10a7f50e8(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined ***pppuVar2;
  code *pcVar3;
  undefined **ppuVar4;
  char cVar5;
  bool bVar6;
  code **ppcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined *puVar11;
  long lVar12;
  undefined **ppuVar13;
  code *pcVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uStack_f8;
  long *plStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 *puStack_d8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f8 = 0;
  plStack_f0 = (long *)0x0;
  lVar12 = *(long *)(param_2 + 8);
  pcStack_e8 = FUN_10a812f88;
  ppuStack_e0 = &PTR_FUN_110c1fff0;
  puStack_d8 = &uStack_f8;
  if (lVar12 == 0) {
    pcStack_a8 = (code *)0x0;
    FUN_10a2e9e64(&pcStack_e8,&pcStack_a8);
    goto LAB_10a7f52ac;
  }
  if (param_3 == 0) {
    FUN_10a7f7a94(&pcStack_a8,lVar12);
    FUN_10a812efc(&pcStack_e8,&pcStack_a8);
    if (ppuStack_a0 == (undefined **)0x0) goto LAB_10a7f52ac;
    ppuVar4 = ppuStack_a0 + 1;
    do {
      puVar11 = *ppuVar4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
      if (bVar6) {
        *ppuVar4 = puVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_10a7f5290:
    ppuVar4 = ppuStack_a0;
    if (puVar11 == (undefined *)0x0) {
      (**(code **)(*ppuStack_a0 + 0x10))(ppuStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar4);
    }
  }
  else {
    pcVar3 = *(code **)(lVar12 + 0x40);
    ppuVar4 = *(undefined ***)(lVar12 + 0x48);
    if (*(char *)(param_3 + 0xb8) == '\x01') {
      pcStack_a8 = FUN_10a812f88;
      ppuStack_a0 = &PTR_FUN_110c1fff0;
      puStack_98 = &uStack_f8;
      FUN_10a069d9c(param_3,pcVar3,ppuVar4,&pcStack_a8);
    }
    else {
      lVar8 = param_3 + 0x88;
      pcStack_a8 = pcVar3;
      ppuStack_a0 = ppuVar4;
      func_0x00010a35bf90(lVar8,&pcStack_a8);
      pppuVar2 = &ppuStack_a0;
      ppcVar7 = &pcStack_a8;
      if (lVar8 != 0) {
        pppuVar2 = (undefined ***)(lVar8 + 0x28);
        ppcVar7 = (code **)(lVar8 + 0x20);
      }
      ppuVar13 = *pppuVar2;
      pcVar14 = *ppcVar7;
      if (pcVar3 == pcVar14 && ppuVar4 == ppuVar13) {
        FUN_10a7f7a94(&pcStack_a8,lVar12);
        FUN_10a812efc(&pcStack_e8,&pcStack_a8);
        if (ppuStack_a0 == (undefined **)0x0) goto LAB_10a7f52ac;
        ppuVar4 = ppuStack_a0 + 1;
        do {
          puVar11 = *ppuVar4;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
          if (bVar6) {
            *ppuVar4 = puVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        goto LAB_10a7f5290;
      }
      pcStack_a8 = pcStack_e8;
      (*(code *)ppuStack_e0[3])(&ppuStack_a0,&ppuStack_e0);
      FUN_10a069d9c(param_3,pcVar14,ppuVar13,&pcStack_a8);
    }
    (*(code *)*ppuStack_a0)(&ppuStack_a0);
  }
LAB_10a7f52ac:
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  lVar12 = 0xb8;
  __Znwm();
  FUN_10a7f4c98();
  *(undefined4 *)(lVar12 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  plVar9 = (long *)(lVar12 + 0x18);
  FUN_10a7e7b20(plVar9,param_3,param_2 + 0x18);
  plVar10 = plStack_f0;
  *param_1 = lVar12;
  if (plStack_f0 != (long *)0x0) {
    plVar1 = plStack_f0 + 1;
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
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      plVar9 = plVar10;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    FUN_10a812ea4(&pcStack_a8);
    (*(code *)*ppuStack_e0)(&ppuStack_e0);
    FUN_10a812ea4(&uStack_f8);
    __Unwind_Resume(plVar9);
    auVar16._8_8_ = 0x17;
    auVar16._0_8_ = &UNK_10f66216b;
    return auVar16;
  }
  auVar15._8_8_ = param_3;
  auVar15._0_8_ = plVar9;
  return auVar15;
}



/* Entry: 10a7f53e4; end: 10a7f5467;  */

undefined1  [16] FUN_10a7f53e4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10f66216b;
  return auVar1;
}



/* Entry: 10a7f5468; end: 10a7f554b;  */

void FUN_10a7f5468(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000002;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10a7f554c(param_1,&puStack_88);
  FUN_10a813168();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f67963e;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x200000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a004eb4(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f678a89;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0x8e;
  uStack_38 = 0x124;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a7f5624(param_1,&puStack_88);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a7f554c; end: 10a7f5623;  */

/* WARNING: Removing unreachable block (ram,0x00010a7f55e4) */

undefined1  [16] FUN_10a7f554c(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f67963e,0x18);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a81306c(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a7f5624; end: 10a7f568b;  */

ulong FUN_10a7f5624(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7f568c);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a813224,0,*(long *)(param_1 + 0x18) + -8);
  }
  return param_1;
}



/* Entry: 10a7f568c; end: 10a7f6797;  */

/* WARNING: Removing unreachable block (ram,0x00010a7f73a0) */

void FUN_10a7f568c(ulong param_1)

{
  undefined8 ****ppppuVar1;
  undefined8 ****ppppuVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *extraout_x8;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plStack_130;
  long *plStack_128;
  undefined8 ***apppuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000109887da8(apppuStack_c8,&UNK_10f66216b,0x17);
  ppppuVar1 = (undefined8 ****)apppuStack_c8[0];
  if (-1 < cStack_b1) {
    ppppuVar1 = apppuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c1f050;
  ppppuVar2 = (undefined8 ****)&UNK_10f678718;
  if (ppppuVar1 != (undefined8 ****)0x0) {
    ppppuVar2 = ppppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,ppppuVar2);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x8e;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  pppuStack_a0 = ppppuVar1;
  func_0x00010a052690(param_1 + 0x168,&pppuStack_a0);
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c1f050;
    uStack_a8 = 0;
    pppuStack_a0 = (undefined8 ***)&PTR_DAT_110bc8450;
    ppuStack_98 = (undefined **)0x0;
    pcStack_90 = (code *)CONCAT71(pcStack_90._1_7_,1);
    func_0x0001098949cc(param_1,ppppuVar1,&ppuStack_b0,&pppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(apppuStack_c8[0]);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6792d4,FUN_10a8133a4,FUN_10a81345c);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f679074,FUN_10a8135f4,FUN_10a8136e4);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f678e72,FUN_10a81387c,FUN_10a813970);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f678e4a,FUN_10a813a28,FUN_10a813ae4);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644824,FUN_10a813b9c,FUN_10a813c54);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar13 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) == lVar13) {
LAB_10a7f676c:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10a7f6770);
    (*pcVar7)();
  }
  ppuStack_98 = *(undefined ***)(lVar13 + -0x60);
  pppuStack_a0 = *(undefined8 ****)(lVar13 + -0x68);
  puStack_78 = *(undefined **)(lVar13 + -0x40);
  uVar14 = *(ulong *)(lVar13 + -0x48);
  uVar15 = *(ulong *)(lVar13 + -0x50);
  pcStack_90 = *(code **)(lVar13 + -0x58);
  uStack_68 = *(undefined8 *)(lVar13 + -0x30);
  uStack_70 = *(undefined8 *)(lVar13 + -0x38);
  uStack_58 = *(undefined8 *)(lVar13 + -0x20);
  uStack_60 = *(undefined8 *)(lVar13 + -0x28);
  uStack_40 = *(undefined8 *)(lVar13 + -8);
  uStack_48 = *(undefined8 *)(lVar13 + -0x10);
  uStack_50 = *(ulong *)(lVar13 + -0x18);
  *(long *)(param_1 + 0x170) = lVar13 + -0x68;
  uStack_88._4_4_ = (undefined4)(uVar15 >> 0x20);
  uVar5 = uStack_88._4_4_;
  uStack_80._4_4_ = (undefined4)(uVar14 >> 0x20);
  uVar6 = uStack_80._4_4_;
  uVar8 = param_1;
  uStack_88 = uVar15;
  uStack_80 = uVar14;
  FUN_10a0051e8(param_1,uVar15 & 0xffffffff,uVar5,uStack_50 & 0xffffffff,uVar14 & 0xffffffff,uVar6);
  if ((uVar8 & 1) == 0) {
    func_0x000109894f40(param_1,0);
    FUN_10a054234(param_1,&pppuStack_a0,param_1 + 0x1b8,&UNK_10f66216b,0x17);
    FUN_10a05431c(param_1);
  }
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&UNK_10f6553de;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x00010a004eb4(param_1,&pppuStack_a0);
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x124,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    pppuStack_a0 = (undefined8 ***)FUN_10a813d70;
    ppuStack_98 = &PTR_FUN_110c20028;
    pcStack_90 = FUN_10a7f6798;
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a7f676c;
    FUN_10a0544d8(param_1,&UNK_10f678a89,&pppuStack_a0,1,*(long *)(param_1 + 0x18) + -8);
    (*(code *)*ppuStack_98)(&ppuStack_98);
  }
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f6334b3;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1ce68);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f6334b8;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1ce78);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f6334be;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1ce88);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f6334c5;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1ce98);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f63085a;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1cea8);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f5884ee;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1ceb8);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f6334cc;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1cec8);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f6334d9;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1ced8);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f679657;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1cee8);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f679663;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1cef8);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f6334e1;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1cf08);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f6334ef;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1cf18);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f67966c;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1cf28);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f679679;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1cf38);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f679683;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1cf48);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f67968d;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1cf58);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f679695;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1cf68);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f67969e;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1cf78);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f6796aa;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1cf88);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f6796b5;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1cf98);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f6796be;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1cfa8);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f6796c8;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1cfb8);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f6796d5;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1cfc8);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f6796e4;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1cfd8);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f6796f3;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1cfe8);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f679702;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1cff8);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f679711;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d008);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f679720;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d018);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f67972f;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d028);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f67973f;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d038);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f67974f;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d048);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f67975f;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d058);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f67976d;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d068);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f67977b;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d078);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f679789;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d088);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f679798;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d098);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f6797a7;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d0a8);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f6797b6;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d0b8);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f6797c6;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d0c8);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f6797d6;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d0d8);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f6797e6;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d0e8);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f6797f6;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d0f8);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f679806;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d108);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f679816;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d118);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f679827;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d128);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f679838;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d138);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f679849;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d148);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f679858;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d158);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f679867;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d168);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f679876;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d178);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f679886;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d188);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  pppuStack_a0 = (undefined8 ***)&DAT_10f679896;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a2ad5cc(param_1,&pppuStack_a0,&PTR_DAT_110c1d198);
  func_0x00010a004064();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_b1 < '\0') {
    __ZdlPv(apppuStack_c8[0]);
  }
  __Unwind_Resume();
  if (param_1 == 0) {
    plVar9 = (long *)0x160;
    __Znwm();
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_DAT_110c201a0;
    plVar12 = plVar9 + 3;
    FUN_10a7f67a4(plVar12,0);
    plStack_130 = plVar12;
    plStack_128 = plVar9;
    FUN_10a81433c(&plStack_130,plVar9 + 8,plVar12);
    FUN_10a8141d8(extraout_x8,&plStack_130);
    plVar12 = plStack_128;
    if (plStack_128 != (long *)0x0) {
      plVar9 = plStack_128 + 1;
      do {
        lVar13 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_128 + 0x10))(plStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
  }
  else {
    lVar13 = *(long *)(param_1 + 0x858);
    plVar12 = *(long **)(param_1 + 0x860);
    if (plVar12 != (long *)0x0) {
      plVar9 = plVar12 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar9 = (long *)0x148;
    __Znwm();
    FUN_10a7f67a4();
    if (plVar12 != (long *)0x0) {
      plVar10 = plVar12 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar10 = plVar12 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
    plVar10 = (long *)0x30;
    plStack_130 = plVar9;
    __Znwm();
    *plVar10 = (long)&PTR_DAT_110c20140;
    plVar10[1] = 0;
    plVar10[2] = 0;
    plVar10[3] = (long)plVar9;
    plVar10[4] = lVar13;
    plVar10[5] = (long)plVar12;
    plStack_128 = plVar10;
    FUN_10a81433c(&plStack_130,plVar9 + 5,plVar9);
    FUN_10a8141d8(extraout_x8,&plStack_130);
    plVar9 = plStack_128;
    if (plStack_128 != (long *)0x0) {
      plVar10 = plStack_128 + 1;
      do {
        lVar11 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_128 + 0x10))(plStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    if (plVar12 != (long *)0x0) {
      plVar9 = plVar12 + 1;
      do {
        lVar11 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    if ((lVar13 != 0) && (plVar9 = (long *)*extraout_x8, plVar9 != (long *)0x0)) {
      plStack_128 = (long *)extraout_x8[1];
      if (plStack_128 != (long *)0x0) {
        plVar10 = plStack_128 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = *plVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plStack_130 = plVar9;
      FUN_10aa88c30(lVar13,&plStack_130);
      plVar9 = plStack_128;
      if (plStack_128 != (long *)0x0) {
        plVar10 = plStack_128 + 1;
        do {
          lVar13 = *plVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_128 + 0x10))(plStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
    if (plVar12 != (long *)0x0) {
      plVar9 = plVar12 + 1;
      do {
        lVar13 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar12);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a7f6798; end: 10a7f67a3;  */

/* WARNING: Removing unreachable block (ram,0x00010a7f73a0) */

void FUN_10a7f6798(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plStack_50;
  long *plStack_48;
  
  if (param_2 == 0) {
    plVar3 = (long *)0x160;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110c201a0;
    plVar6 = plVar3 + 3;
    FUN_10a7f67a4(plVar6,0);
    plStack_50 = plVar6;
    plStack_48 = plVar3;
    FUN_10a81433c(&plStack_50,plVar3 + 8,plVar6);
    FUN_10a8141d8(param_1,&plStack_50);
    plVar6 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar3 = plStack_48 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar7 = *(long *)(param_2 + 0x858);
    plVar6 = *(long **)(param_2 + 0x860);
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0x148;
    __Znwm();
    FUN_10a7f67a4();
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar6 + 2;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    plVar4 = (long *)0x30;
    plStack_50 = plVar3;
    __Znwm();
    *plVar4 = (long)&PTR_DAT_110c20140;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar6;
    plStack_48 = plVar4;
    FUN_10a81433c(&plStack_50,plVar3 + 5,plVar3);
    FUN_10a8141d8(param_1,&plStack_50);
    plVar3 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if ((lVar7 != 0) && (plVar3 = (long *)*param_1, plVar3 != (long *)0x0)) {
      plStack_48 = (long *)param_1[1];
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plStack_50 = plVar3;
      FUN_10aa88c30(lVar7,&plStack_50);
      plVar3 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar7 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
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



/* Entry: 10a7f67a4; end: 10a7f6873;  */

undefined8 * FUN_10a7f67a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  uVar2 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar1,uVar2);
  *param_1 = &PTR_FUN_110c1d1b8;
  param_1[2] = &PTR_FUN_110c1d288;
  param_1[7] = &PTR_FUN_110c1d2e0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  FUN_10a7f6874();
  return param_1;
}



/* Entry: 10a7f6874; end: 10a7f68eb;  */

void FUN_10a7f6874(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  FUN_10a7ea4c0(auStack_30,*(undefined8 *)(param_1 + 0x50),0);
  func_0x00010a4c390c(param_1 + 0x138,auStack_30);
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



/* Entry: 10a7f68ec; end: 10a7f69a3;  */

undefined8 * FUN_10a7f68ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_10aa7093c();
  *puVar1 = &PTR_FUN_110c1d1b8;
  puVar1[2] = &PTR_FUN_110c1d288;
  puVar1[7] = &PTR_FUN_110c1d2e0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  puVar1[0x23] = 0;
  puVar1[0x22] = 0;
  puVar1[0x24] = 0;
  *(undefined4 *)(puVar1 + 0x25) = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x26) = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  FUN_10a7f6874();
  return param_1;
}



/* Entry: 10a7f69a4; end: 10a7f6b33;  */

void FUN_10a7f69a4(long param_1,long *param_2)

{
  long *plVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 uStack_12a;
  undefined1 uStack_129;
  undefined1 *puStack_128;
  undefined ***pppuStack_120;
  undefined ***pppuStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  code *pcStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010aa70acc();
  FUN_10a80fc44(param_2,param_1 + 0x138);
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c1ccb0,0);
  *(char *)(param_1 + 0x130) = (char)plVar1;
  FUN_10a7f6bec(param_1);
  uStack_78 = 0x10a8140d0;
  ppuStack_70 = &PTR_FUN_110c200e8;
  lStack_68 = param_1;
  FUN_10a7e353c(param_2,&PTR_DAT_110c1ccd0,&uStack_78,0);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  pcStack_b8 = FUN_10a814128;
  ppuStack_b0 = &PTR_FUN_110c20100;
  lStack_a8 = param_1;
  FUN_10a7e353c(param_2,&PTR_DAT_110c1d2f0,&pcStack_b8,0);
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  pcStack_f8 = FUN_10a814180;
  ppuStack_f0 = &PTR_FUN_110c20118;
  ppuVar5 = &PTR_DAT_110c1d310;
  lStack_e8 = param_1;
  FUN_10a7e353c(param_2,&PTR_DAT_110c1d310,&pcStack_f8,0);
  pppuVar2 = &ppuStack_f0;
  (*(code *)*ppuStack_f0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_f0)(&ppuStack_f0);
  pppuVar3 = pppuVar2;
  __Unwind_Resume();
  pcStack_108 = FUN_10a7f6b34;
  pppuStack_120 = &ppuStack_f0;
  pppuStack_118 = pppuVar2;
  puStack_110 = &stack0xfffffffffffffff0;
  func_0x00010aa70b70();
  FUN_10a4c3afc(ppuVar5,&PTR_DAT_110bb3700,pppuVar3 + 0x27,&UNK_10f65ce18,0x19);
  uStack_12a = 1;
  puStack_128 = &uStack_12a;
  ppuVar4 = pppuVar3[0x27] + 0x21;
  FUN_10a814778(ppuVar4,&uStack_12a,&UNK_10dd5b8f9,&puStack_128,&uStack_129);
  FUN_10a009b20(ppuVar5,&PTR_DAT_110c1ccd0,ppuVar4 + 3,&UNK_10f63349d,0xe);
  (**(code **)(*ppuVar5 + 0x70))(ppuVar5,&PTR_DAT_110c1ccb0,*(undefined1 *)(pppuVar3 + 0x26));
  return;
}



/* Entry: 10a7f6b34; end: 10a7f6beb;  */

void FUN_10a7f6b34(long param_1,long *param_2)

{
  long lVar1;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined1 *puStack_28;
  
  func_0x00010aa70b70();
  FUN_10a4c3afc(param_2,&PTR_DAT_110bb3700,param_1 + 0x138,&UNK_10f65ce18,0x19);
  uStack_2a = 1;
  puStack_28 = &uStack_2a;
  lVar1 = *(long *)(param_1 + 0x138) + 0x108;
  FUN_10a814778(lVar1,&uStack_2a,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
  FUN_10a009b20(param_2,&PTR_DAT_110c1ccd0,lVar1 + 0x18,&UNK_10f63349d,0xe);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c1ccb0,*(undefined1 *)(param_1 + 0x130));
  return;
}



/* Entry: 10a7f6bec; end: 10a7f6ecb;  */

void FUN_10a7f6bec(long param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined4 *puVar3;
  char cVar4;
  bool bVar5;
  undefined4 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long *plStack_60;
  undefined1 *puStack_58;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0x138) + 0xf8);
  plVar2 = *(long **)(*(long *)(param_1 + 0x138) + 0x100);
  if (plVar2 != (long *)0x0) {
    plVar8 = plVar2 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar8 = (long *)(param_1 + 0xf0);
  lVar13 = *plVar8;
  lVar9 = *(long *)(param_1 + 0xf8);
  lStack_68 = lVar7;
  plStack_60 = plVar2;
  while (lVar9 != lVar13) {
    lVar9 = lVar9 + -0x80;
    FUN_10a042100(lVar9);
  }
  *(long *)(param_1 + 0xf8) = lVar13;
  if (lVar7 != 0) {
    FUN_10a05485c(param_1 + 0x108);
    ppuVar10 = &PTR_DAT_110c1d330;
    lVar13 = 0x160;
    do {
      func_0x000107c2b038(param_1 + 0x108,ppuVar10,ppuVar10);
      ppuVar10 = ppuVar10 + 2;
      lVar13 = lVar13 + -0x10;
    } while (lVar13 != 0);
    if (*(char *)(param_1 + 0x130) == '\x01') {
      ppuVar10 = &PTR_DAT_110c1d490;
      lVar13 = 0x1e0;
      do {
        func_0x000107c2b038(param_1 + 0x108,ppuVar10,ppuVar10);
        ppuVar10 = ppuVar10 + 2;
        lVar13 = lVar13 + -0x10;
      } while (lVar13 != 0);
    }
    ppuVar10 = &PTR_PTR_1132cfc60;
    if (*(undefined ***)(lVar7 + 0x68) != (undefined **)0x0) {
      ppuVar10 = *(undefined ***)(lVar7 + 0x68);
    }
    ppuVar1 = &PTR_PTR_1132d70f0;
    if ((undefined **)ppuVar10[0x1a] != (undefined **)0x0) {
      ppuVar1 = (undefined **)ppuVar10[0x1a];
    }
    FUN_10a7f75e0(&puStack_80,ppuVar1);
    func_0x00010a0421b4(plVar8);
    *(ulong *)(param_1 + 0xf8) = uStack_78;
    *(undefined8 **)(param_1 + 0xf0) = puStack_80;
    *(undefined8 *)(param_1 + 0x100) = uStack_70;
    uStack_78 = 0;
    uStack_70 = 0;
    puStack_80 = (undefined8 *)0x0;
    puStack_58 = (undefined1 *)&puStack_80;
    func_0x00010a042144(&puStack_58);
    puVar3 = *(undefined4 **)(param_1 + 0xf8);
    for (puVar12 = *(undefined4 **)(param_1 + 0xf0); puVar11 = puVar3, puVar12 != puVar3;
        puVar12 = puVar12 + 0x20) {
      uStack_78 = *(ulong *)(puVar12 + 4);
      puStack_80 = *(undefined8 **)(puVar12 + 2);
      if (-1 < (char)*(byte *)((long)puVar12 + 0x1f)) {
        uStack_78 = (ulong)*(byte *)((long)puVar12 + 0x1f);
        puStack_80 = (undefined8 *)(puVar12 + 2);
      }
      lVar7 = param_1 + 0x108;
      func_0x0001086eb2c8(lVar7,&puStack_80);
      if (lVar7 == 0) {
        puVar14 = puVar12;
        if (puVar12 != puVar3) {
          while (puVar6 = puVar14, puVar14 = puVar6 + 0x20, puVar11 = puVar12, puVar14 != puVar3) {
            puVar15 = (undefined8 *)(puVar6 + 0x22);
            uStack_78 = *(ulong *)(puVar6 + 0x24);
            puStack_80 = (undefined8 *)*puVar15;
            if (-1 < (char)*(byte *)((long)puVar6 + 0x9f)) {
              uStack_78 = (ulong)*(byte *)((long)puVar6 + 0x9f);
              puStack_80 = puVar15;
            }
            lVar7 = param_1 + 0x108;
            func_0x0001086eb2c8(lVar7,&puStack_80);
            if (lVar7 != 0) {
              *puVar12 = *puVar14;
              if (*(char *)((long)puVar12 + 0x1f) < '\0') {
                __ZdlPv(*(undefined8 *)(puVar12 + 2));
              }
              uVar17 = *(undefined8 *)(puVar6 + 0x24);
              uVar16 = *puVar15;
              *(undefined8 *)(puVar12 + 6) = *(undefined8 *)(puVar6 + 0x26);
              *(undefined8 *)(puVar12 + 4) = uVar17;
              *(undefined8 *)(puVar12 + 2) = uVar16;
              *(undefined1 *)((long)puVar6 + 0x9f) = 0;
              *(undefined1 *)(puVar6 + 0x22) = 0;
              if (*(char *)((long)puVar12 + 0x37) < '\0') {
                __ZdlPv(*(undefined8 *)(puVar12 + 8));
              }
              uVar17 = *(undefined8 *)(puVar6 + 0x2a);
              uVar16 = *(undefined8 *)(puVar6 + 0x28);
              *(undefined8 *)(puVar12 + 0xc) = *(undefined8 *)(puVar6 + 0x2c);
              *(undefined8 *)(puVar12 + 10) = uVar17;
              *(undefined8 *)(puVar12 + 8) = uVar16;
              *(undefined1 *)((long)puVar6 + 0xb7) = 0;
              *(undefined1 *)(puVar6 + 0x28) = 0;
              uVar16 = *(undefined8 *)(puVar6 + 0x2e);
              *(undefined8 *)(puVar12 + 0x10) = *(undefined8 *)(puVar6 + 0x30);
              *(undefined8 *)(puVar12 + 0xe) = uVar16;
              uVar17 = *(undefined8 *)(puVar6 + 0x34);
              uVar16 = *(undefined8 *)(puVar6 + 0x32);
              uVar19 = *(undefined8 *)(puVar6 + 0x38);
              uVar18 = *(undefined8 *)(puVar6 + 0x36);
              uVar21 = *(undefined8 *)(puVar6 + 0x3c);
              uVar20 = *(undefined8 *)(puVar6 + 0x3a);
              puVar12[0x1e] = puVar6[0x3e];
              *(undefined8 *)(puVar12 + 0x1c) = uVar21;
              *(undefined8 *)(puVar12 + 0x1a) = uVar20;
              *(undefined8 *)(puVar12 + 0x18) = uVar19;
              *(undefined8 *)(puVar12 + 0x16) = uVar18;
              *(undefined8 *)(puVar12 + 0x14) = uVar17;
              *(undefined8 *)(puVar12 + 0x12) = uVar16;
              puVar12 = puVar12 + 0x20;
            }
          }
        }
        break;
      }
    }
    func_0x00010a042218(plVar8,puVar11,*(undefined8 *)(param_1 + 0xf8));
  }
  if (plVar2 != (long *)0x0) {
    plVar8 = plVar2 + 1;
    do {
      lVar7 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return;
}



/* Entry: 10a7f6ecc; end: 10a7f6f77;  */

void FUN_10a7f6ecc(long *param_1,undefined8 param_2)

{
  func_0x00010a7e2008(param_1[0x27] + 0xe8,0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010a7f6f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}



/* Entry: 10a7f6f78; end: 10a7f70a7;  */

void FUN_10a7f6f78(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_50;
  long *plStack_48;
  
  lVar6 = *(long *)(param_1 + 0x138);
  FUN_10a7e20bc(lVar6 + 0xe8);
  FUN_10a7e2370(lVar6 + 0xe8,0);
  FUN_10a7e2370(lVar6 + 0xe8,1);
  lStack_50 = *(long *)(lVar6 + 0xf8);
  plVar2 = *(long **)(lVar6 + 0x100);
  if (plVar2 == (long *)0x0) {
    if (*(long *)(param_1 + 0xe0) == lStack_50) {
      return;
    }
    plStack_48 = (long *)0x0;
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar7 = *(long *)(param_1 + 0xe0);
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
    if (lVar7 == lStack_50) {
      return;
    }
    plStack_48 = *(long **)(lVar6 + 0x100);
    lStack_50 = *(long *)(lVar6 + 0xf8);
    if (*(long *)(lVar6 + 0x100) != 0) {
      plVar2 = (long *)(*(long *)(lVar6 + 0x100) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  FUN_10a009fa8(param_1 + 0xe0,&lStack_50);
  plVar2 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  FUN_10a7f6bec(param_1);
  return;
}



/* Entry: 10a7f70a8; end: 10a7f70cb;  */

void FUN_10a7f70a8(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *(long *)(param_2 + 0xf0);
  lVar2 = *(long *)(param_2 + 0xf8);
  lVar4 = lVar2 - lVar1 >> 7;
  if (lVar4 != 0) {
    FUN_10a041f30(param_1,lVar4);
    puVar3 = param_1;
    FUN_10a041fb0(param_1,lVar1,lVar2,param_1[1]);
    param_1[1] = puVar3;
  }
  return;
}



/* Entry: 10a7f70cc; end: 10a7f7243;  */

void FUN_10a7f70cc(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puStack_50;
  long *plStack_48;
  undefined1 *puStack_40;
  long *plStack_38;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  puStack_40 = (undefined1 *)*param_2;
  plStack_38 = (long *)param_2[1];
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (puStack_40 == (undefined1 *)0x0) {
    FUN_10a7ea4c0(&puStack_50,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x138));
    plVar1 = plStack_38;
    plStack_38 = plStack_48;
    puStack_40 = puStack_50;
    puStack_50 = (undefined1 *)0x0;
    plStack_48 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      plVar2 = plVar1 + 1;
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
        (**(code **)(*plVar1 + 0x10))(plVar1);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    plVar1 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar2 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  puVar5 = puStack_40;
  uStack_22 = 1;
  puStack_50 = &uStack_22;
  lVar6 = *(long *)(param_1 + 0x138) + 0x108;
  FUN_10a814778(lVar6,&uStack_22,&UNK_10dd5b8f9,&puStack_50,&uStack_21);
  func_0x00010a7e2008(puVar5 + 0xe8,1,lVar6 + 0x18);
  func_0x00010a3a78dc(param_1 + 0x138,&puStack_40);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a7f7244; end: 10a7f7273;  */

bool FUN_10a7f7244(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  param_1 = param_1 + 0x108;
  uStack_20 = param_2;
  uStack_18 = param_3;
  func_0x0001086eb2c8(param_1,&uStack_20);
  return param_1 != 0;
}



/* Entry: 10a7f7274; end: 10a7f75df;  */

/* WARNING: Removing unreachable block (ram,0x00010a7f73a0) */

void FUN_10a7f7274(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plStack_50;
  long *plStack_48;
  
  if (param_2 == 0) {
    plVar3 = (long *)0x160;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110c201a0;
    plVar6 = plVar3 + 3;
    FUN_10a7f67a4(plVar6,0);
    plStack_50 = plVar6;
    plStack_48 = plVar3;
    FUN_10a81433c(&plStack_50,plVar3 + 8,plVar6);
    FUN_10a8141d8(param_1,&plStack_50);
    plVar6 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar3 = plStack_48 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar7 = *(long *)(param_2 + 0x858);
    plVar6 = *(long **)(param_2 + 0x860);
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0x148;
    __Znwm();
    FUN_10a7f67a4();
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar6 + 2;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    plVar4 = (long *)0x30;
    plStack_50 = plVar3;
    __Znwm();
    *plVar4 = (long)&PTR_DAT_110c20140;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar6;
    plStack_48 = plVar4;
    FUN_10a81433c(&plStack_50,plVar3 + 5,plVar3);
    FUN_10a8141d8(param_1,&plStack_50);
    plVar3 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if ((lVar7 != 0) && (plVar3 = (long *)*param_1, plVar3 != (long *)0x0)) {
      plStack_48 = (long *)param_1[1];
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plStack_50 = plVar3;
      FUN_10aa88c30(lVar7,&plStack_50);
      plVar3 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar7 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
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



/* Entry: 10a7f75e0; end: 10a7f7943;  */

void FUN_10a7f75e0(long *param_1,long param_2)

{
  ulong *puVar1;
  undefined4 *puVar2;
  ulong *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 auStack_a0 [2];
  char cStack_89;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (0 < *(int *)(param_2 + 0x20)) {
    lVar13 = 0;
    puVar1 = (ulong *)(param_2 + 0x18);
    do {
      puVar3 = puVar1;
      if ((*puVar1 & 1) != 0) {
        puVar3 = (ulong *)(*puVar1 + lVar13 * 8 + 7);
      }
      puVar9 = (undefined8 *)*puVar3;
      uVar5 = puVar9[1];
      puVar7 = (undefined8 *)*puVar9;
      if (-1 < (char)*(byte *)((long)puVar9 + 0x17)) {
        uVar5 = (ulong)*(byte *)((long)puVar9 + 0x17);
        puVar7 = puVar9;
      }
      if (uVar5 == 0) {
LAB_10a7f7688:
        uVar12 = 0;
      }
      else {
        do {
          uVar12 = uVar5;
          if (uVar12 == 0) goto LAB_10a7f7688;
          uVar5 = uVar12 - 1;
        } while (*(char *)((long)puVar7 + (uVar12 - 1)) != ':');
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (auStack_a0,puVar9,uVar12,0xffffffffffffffff,&plStack_88);
      iVar6 = *(int *)(*(long *)(param_2 + 0x38) + lVar13 * 4);
      lVar14 = (long)iVar6;
      uStack_c0 = 0;
      uStack_b8 = 0;
      lStack_b0 = 0;
      if (iVar6 != -1) {
        puVar3 = puVar1;
        if ((*puVar1 & 1) != 0) {
          puVar3 = (ulong *)(*puVar1 + lVar14 * 8 + 7);
        }
        puVar9 = (undefined8 *)*puVar3;
        uVar5 = puVar9[1];
        puVar7 = (undefined8 *)*puVar9;
        if (-1 < (char)*(byte *)((long)puVar9 + 0x17)) {
          uVar5 = (ulong)*(byte *)((long)puVar9 + 0x17);
          puVar7 = puVar9;
        }
        if (uVar5 == 0) {
LAB_10a7f7708:
          uVar12 = 0;
        }
        else {
          do {
            uVar12 = uVar5;
            if (uVar12 == 0) goto LAB_10a7f7708;
            uVar5 = uVar12 - 1;
          } while (*(char *)((long)puVar7 + (uVar12 - 1)) != ':');
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                  (&uStack_100,puVar9,uVar12,0xffffffffffffffff,&plStack_88);
        if (lStack_b0 < 0) {
          __ZdlPv(uStack_c0);
        }
        uStack_b8 = CONCAT44(uStack_f4,uStack_f8);
        uStack_c0 = CONCAT44(uStack_fc,uStack_100);
        lStack_b0 = CONCAT44(uStack_ec,uStack_f0);
      }
      ppuVar4 = &PTR_PTR_1132d6d90;
      if (*(undefined ***)(param_2 + 0x118) != (undefined **)0x0) {
        ppuVar4 = *(undefined ***)(param_2 + 0x118);
      }
      puVar2 = (undefined4 *)(ppuVar4[4] + lVar13 * 0x40);
      uStack_100 = *puVar2;
      uStack_f0 = puVar2[1];
      uStack_e0 = puVar2[2];
      uStack_d0 = puVar2[3];
      uStack_fc = puVar2[4];
      uStack_ec = puVar2[5];
      uStack_dc = puVar2[6];
      uStack_cc = puVar2[7];
      uStack_f8 = puVar2[8];
      uStack_e8 = puVar2[9];
      uStack_d8 = puVar2[10];
      uStack_c8 = puVar2[0xb];
      uStack_f4 = puVar2[0xc];
      uStack_e4 = puVar2[0xd];
      uStack_d4 = puVar2[0xe];
      uStack_c4 = puVar2[0xf];
      uVar5 = param_1[1];
      if (uVar5 < (ulong)param_1[2]) {
        FUN_10a7fd6bc(uVar5,lVar13,auStack_a0,&uStack_c0,lVar14,&uStack_100);
        plVar11 = (long *)(uVar5 + 0x80);
      }
      else {
        lVar15 = uVar5 - *param_1;
        uVar5 = (lVar15 >> 7) + 1;
        if (uVar5 >> 0x39 != 0) {
          FUN_10a041f68();
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10a7f78e0);
          (*pcVar8)();
        }
        uVar10 = param_1[2] - *param_1;
        uVar12 = (long)uVar10 >> 6;
        if (uVar12 <= uVar5) {
          uVar12 = uVar5;
        }
        if (0x7fffffffffffff7f < uVar10) {
          uVar12 = 0x1ffffffffffffff;
        }
        plStack_68 = param_1;
        if (uVar12 == 0) {
          plVar11 = (long *)0x0;
        }
        else {
          plVar11 = param_1;
          FUN_10a041f7c();
        }
        lVar15 = (long)plVar11 + lVar15;
        plStack_70 = plVar11 + uVar12 * 0x10;
        plStack_88 = plVar11;
        plStack_80 = (long *)lVar15;
        plStack_78 = (long *)lVar15;
        FUN_10a7fd6bc(lVar15,lVar13,auStack_a0,&uStack_c0,lVar14,&uStack_100);
        plStack_78 = (long *)(lVar15 + 0x80);
        lVar15 = lVar15 + (*param_1 - param_1[1]);
        FUN_10a7fd788(param_1,*param_1,param_1[1],lVar15);
        plVar11 = plStack_78;
        plStack_88 = (long *)*param_1;
        *param_1 = lVar15;
        lVar14 = param_1[2];
        param_1[2] = (long)plStack_70;
        param_1[1] = (long)plStack_78;
        plStack_80 = plStack_88;
        plStack_78 = plStack_88;
        plStack_70 = (long *)lVar14;
        func_0x00010a7fd838(&plStack_88);
      }
      param_1[1] = (long)plVar11;
      if (lStack_b0 < 0) {
        __ZdlPv(uStack_c0);
      }
      if (cStack_89 < '\0') {
        __ZdlPv(auStack_a0[0]);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_2 + 0x20));
  }
  return;
}



/* Entry: 10a7f7944; end: 10a7f79e3;  */

void FUN_10a7f7944(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x19;
  __Znwm();
  *param_1 = puVar1;
  param_1[2] = 0x8000000000000019;
  param_1[1] = 0x17;
  puVar1[1] = 0x696b636172547964;
  *puVar1 = 0x6f422e7465737341;
  *(undefined8 *)((long)puVar1 + 0xf) = 0x7465737341676e69;
  *(undefined1 *)((long)puVar1 + 0x17) = 0;
  return;
}



/* Entry: 10a7f79e4; end: 10a7f7a93;  */

void FUN_10a7f79e4(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  FUN_10a7f7a94(auStack_30,param_2);
  uVar4 = 0xb8;
  __Znwm();
  FUN_10a7f4c98();
  *param_1 = uVar4;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10a7f7a94; end: 10a7f7b27;  */

void FUN_10a7f7a94(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  (**(code **)(*param_2 + 0x50))(&uStack_30,param_2);
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



/* Entry: 10a7f7b28; end: 10a7f812b;  */

void FUN_10a7f7b28(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puStack_a0;
  long *plStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  long *plStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  uStack_80 = 0;
  puStack_60 = &uStack_80;
  lVar6 = *(long *)(param_2 + 0x138) + 0x108;
  FUN_10a814778(lVar6,&uStack_80,&UNK_10dd5b8f9,&puStack_60,&puStack_70);
  puVar5 = *(undefined1 **)(lVar6 + 0x18);
  plVar2 = *(long **)(lVar6 + 0x20);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_90 = 1;
  puStack_70 = &uStack_90;
  lVar6 = *(long *)(param_2 + 0x138) + 0x108;
  lStack_50 = (long)puVar5;
  plStack_48 = plVar2;
  FUN_10a814778(lVar6,&uStack_90,&UNK_10dd5b8f9,&puStack_70,&uStack_80);
  puVar7 = *(undefined1 **)(lVar6 + 0x18);
  plStack_58 = *(long **)(lVar6 + 0x20);
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
  }
  lVar6 = *(long *)(param_2 + 0x138);
  plStack_68 = *(long **)(lVar6 + 0xf0);
  puStack_70 = *(undefined1 **)(lVar6 + 0xe8);
  if (*(long *)(lVar6 + 0xf0) != 0) {
    plVar1 = (long *)(*(long *)(lVar6 + 0xf0) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_60 = puVar7;
  FUN_10a7f7274(&uStack_80,*(undefined8 *)(param_2 + 0x50));
  if (puVar5 != (undefined1 *)0x0) {
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_a0 = puVar5;
    plStack_98 = plVar2;
    FUN_10a5726c4(&uStack_90,param_4,&puStack_a0);
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 1;
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plVar2 = (long *)CONCAT71(uStack_7f,uStack_80);
    puVar5 = (undefined1 *)CONCAT71(uStack_8f,uStack_90);
    if ((puVar5 == (undefined1 *)0x0) ||
       (___dynamic_cast(puVar5,&PTR_DAT_110bf32c0,&PTR_DAT_110c46558,0), puVar5 == (undefined1 *)0x0
       )) {
      puStack_a0 = (undefined1 *)0x0;
      plStack_98 = (long *)0x0;
    }
    else {
      plStack_98 = plStack_88;
      puStack_a0 = puVar5;
      if (plStack_88 != (long *)0x0) {
        plVar1 = plStack_88 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    func_0x00010a7e2008(plVar2[0x27] + 0xe8,0,&puStack_a0);
    (**(code **)(*plVar2 + 0x90))(plVar2);
    plVar2 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
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
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plVar2 = plStack_88;
    puVar7 = puStack_60;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
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
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        puVar7 = puStack_60;
      }
    }
  }
  plVar2 = plStack_58;
  if (puVar7 != (undefined1 *)0x0) {
    plStack_98 = plStack_58;
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
    }
    puStack_a0 = puVar7;
    FUN_10a5726c4(&uStack_90,param_4,&puStack_a0);
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 1;
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plVar2 = (long *)CONCAT71(uStack_7f,uStack_80);
    puVar5 = (undefined1 *)CONCAT71(uStack_8f,uStack_90);
    if ((puVar5 == (undefined1 *)0x0) ||
       (___dynamic_cast(puVar5,&PTR_DAT_110bf32c0,&PTR_DAT_110c46558,0), puVar5 == (undefined1 *)0x0
       )) {
      puStack_a0 = (undefined1 *)0x0;
      plStack_98 = (long *)0x0;
    }
    else {
      plStack_98 = plStack_88;
      puStack_a0 = puVar5;
      if (plStack_88 != (long *)0x0) {
        plVar1 = plStack_88 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    func_0x00010a7e2008(plVar2[0x27] + 0xe8,1,&puStack_a0);
    (**(code **)(*plVar2 + 0x90))(plVar2);
    plVar2 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
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
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plVar2 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
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
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
  }
  plVar2 = plStack_68;
  if (puStack_70 != (undefined1 *)0x0) {
    puStack_a0 = puStack_70;
    plStack_98 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a5726c4(&uStack_90,param_4,&puStack_a0);
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 1;
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plVar2 = (long *)CONCAT71(uStack_7f,uStack_80);
    puVar5 = (undefined1 *)CONCAT71(uStack_8f,uStack_90);
    if ((puVar5 == (undefined1 *)0x0) ||
       (___dynamic_cast(puVar5,&PTR_DAT_110bf32c0,&PTR_DAT_110c46558,0), puVar5 == (undefined1 *)0x0
       )) {
      puStack_a0 = (undefined1 *)0x0;
      plStack_98 = (long *)0x0;
    }
    else {
      plStack_98 = plStack_88;
      puStack_a0 = puVar5;
      if (plStack_88 != (long *)0x0) {
        plVar1 = plStack_88 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    func_0x00010a7e1f90(plVar2[0x27] + 0xe8,&puStack_a0);
    (**(code **)(*plVar2 + 0x90))(plVar2);
    plVar2 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
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
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (plStack_88 != (long *)0x0) {
      plVar2 = plStack_88 + 1;
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
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      }
    }
  }
  plVar2 = plStack_68;
  param_1[1] = uStack_78;
  *param_1 = CONCAT71(uStack_7f,uStack_80);
  if (plStack_68 != (long *)0x0) {
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return;
}


