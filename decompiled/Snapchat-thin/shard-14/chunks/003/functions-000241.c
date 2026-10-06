/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b1457f4; end: 10b145cbf;  */

void FUN_10b1457f4(long *param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 *puVar10;
  long extraout_x9;
  ulong extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined4 extraout_w10_02;
  undefined4 extraout_var;
  int extraout_w11;
  long lVar11;
  long unaff_x23;
  undefined8 *puVar12;
  long *unaff_x25;
  undefined8 in_register_00005008;
  undefined8 uVar13;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar6 = (undefined8 *)0xe0;
  __Znwm();
  *puVar6 = FUN_10b14cfb4;
  puVar6[1] = FUN_10b14d138;
  FUN_10b14704c(puVar6 + 2);
  FUN_10b147440(puVar6 + 0x17,puVar6 + 2);
  lVar7 = 0x98;
  __Znwm();
  func_0x00010b1505b4();
  func_0x00010b15013c(&PTR_FUN_110cbeb98);
  puVar12 = (undefined8 *)(lVar7 + 0x18);
  *(undefined8 *)(lVar7 + 0x20) = in_register_00005008;
  *puVar12 = param_2;
  func_0x00010b14ecec();
  *(undefined8 *)(lVar7 + 0x90) = in_register_00005008;
  *(undefined8 *)(lVar7 + 0x88) = param_2;
  func_0x00010b1502f4();
  puVar1 = puVar6 + 0x11;
  *(undefined1 *)(unaff_x23 + 0x58) = 0;
  *(undefined1 *)(unaff_x23 + 0x78) = 0;
  *(undefined8 *)(unaff_x23 + 0x88) = 0;
  *(undefined8 *)(unaff_x23 + 0x90) = 0;
  *(undefined8 *)(unaff_x23 + 0x80) = 0;
  *param_1 = (long)puVar12;
  param_1[1] = unaff_x23;
  puVar6[0x15] = puVar12;
  puVar6[0x16] = unaff_x23;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(unaff_x25,0x10);
    if (bVar4) {
      *unaff_x25 = *unaff_x25 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  FUN_10b1473e4(&puStack_80,puVar6 + 0x17,puVar6 + 0xf);
  FUN_10b14740c(puVar6 + 0xc,&puStack_80);
  func_0x00010b14f348();
  func_0x00010b147278(puVar6 + 0xf);
  func_0x000107c27b48(puVar6 + 0x19);
  func_0x000107c27b4c(&puStack_60,puVar6[0x19]);
  puVar6[0x15] = 0;
  puVar6[0x16] = 0;
  uVar9 = puVar6[0x19];
  puVar6[0x19] = 0;
  puStack_90 = (undefined8 *)0x0;
  lStack_88 = 0;
  puStack_80 = puVar12;
  func_0x00010b14f420(puVar6[0xc] + 0x50);
  __ZNSt3__15mutex4lockEv();
  puVar12 = (undefined8 *)puVar6[0xc];
  FUN_10b147530();
  if ((int)puVar12 == 0) {
    func_0x00010b14f254();
    *puVar12 = &PTR_FUN_110cbebe8;
    puVar12[2] = unaff_x23;
    puVar12[1] = puStack_80;
    puStack_80 = (undefined8 *)0x0;
    unaff_x23 = 0;
    puVar12[3] = uVar9;
    lVar7 = *(long *)(puVar6[0xc] + 0x98);
    *(undefined8 **)(puVar6[0xc] + 0x98) = puVar12;
    if (lVar7 != 0) {
      func_0x00010b14e9b4();
    }
  }
  else {
    FUN_10b14740c(&puStack_90,puVar6 + 0xc);
  }
  func_0x00010b14f5e4();
  puVar12 = puStack_90;
  if (puStack_90 != (undefined8 *)0x0) {
    puVar6[0x11] = puStack_90;
    puVar6[0x12] = lStack_88;
    if (lStack_88 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10 != 0);
    }
    FUN_10b147568(&puStack_80);
    func_0x00010b14f57c();
  }
  puVar6[0x14] = puStack_58;
  puVar6[0x13] = puStack_60;
  puStack_60 = (undefined8 *)0x0;
  puStack_58 = (undefined8 *)0x0;
  func_0x00010b14f3e4();
  FUN_10b147900(&puStack_80);
  func_0x000107c27b58(&puStack_60);
  lVar7 = puVar6[0x19];
  puVar6[0x19] = 0;
  if (lVar7 != 0) {
    func_0x00010b14e9f4();
  }
  func_0x00010b147278(puVar6 + 0xc);
  func_0x000107c27b58(puVar6 + 0x13);
  func_0x00010b147920(puVar6 + 0x15);
  func_0x00010b147278(puVar6 + 0x17);
  puVar10 = (undefined8 *)*param_3;
  lVar7 = puVar10[1];
  uVar13 = puVar10[1];
  uVar9 = *puVar10;
  puVar6[0xd] = uVar13;
  puVar6[0xc] = uVar9;
  if (lVar7 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_00 != 0);
  }
  puVar10 = puVar6 + 0xc;
  func_0x00010b143580();
  if (((ulong)puVar10 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x1b) = 0;
    func_0x00010b14f0e8();
    lVar7 = puVar6[0xc];
    if ((*(byte *)(lVar7 + 0x58) & 1) == 0) {
      func_0x00010b1500dc();
      if ((bool)in_CY) {
        lVar11 = *(long *)(lVar7 + 0x60);
        func_0x00010b14ea1c();
        if (CONCAT44(extraout_var,extraout_w10_02) != 0) {
          func_0x00010552fc6c();
LAB_10b145ba8:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10b145bac);
          (*pcVar5)();
        }
        func_0x00010b14e8b4(extraout_x8_00 - lVar11);
        uVar2 = extraout_x9_00;
        if ((bool)in_CY) {
          uVar2 = extraout_x8_01;
        }
        if (uVar2 != 0) {
          if (uVar2 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b145ba8;
          }
          __Znwm(uVar2 << 3);
        }
        func_0x00010b14e894();
        func_0x00010b1500b8();
        if (lVar11 != 0) {
          func_0x00010b14f3dc();
        }
      }
      else {
        *unaff_x25 = (long)puVar6;
        unaff_x25 = unaff_x25 + 1;
      }
      *(long **)(lVar7 + 0x68) = unaff_x25;
      func_0x00010b14f014();
    }
    else {
      func_0x00010b14f014();
      func_0x00010b14efec(*puVar6);
    }
  }
  else {
    FUN_10b1435a8(puVar6 + 0xc);
    func_0x00010b1500ac();
    puVar6[0x10] = uVar13;
    puVar6[0xf] = uVar9;
    if (extraout_x8 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010b14fa24();
    plVar8 = (long *)puVar6[0xf];
    puVar6[0x1a] = plVar8;
    if (plVar8 == (long *)0x0) {
      func_0x00010b14fe50();
    }
    else {
      (**(code **)(*plVar8 + 0x38))(puVar1);
      puVar10 = puVar1;
      FUN_10b1479ac();
      if (((ulong)puVar10 & 1) == 0) {
        *(undefined1 *)(puVar6 + 0x1b) = 1;
        puStack_60 = puVar6;
        puStack_58 = puVar1;
        FUN_10b147a3c(&puStack_80,puVar1,&puStack_60);
        if (unaff_x23 == 0) {
          return;
        }
        do {
          func_0x00010b14ea74();
        } while (extraout_w11 != 0);
        if (extraout_x9 != 0) {
          return;
        }
        func_0x00010b14e9c4();
        func_0x00010b14f3ec();
        return;
      }
      func_0x00010b150278();
    }
    func_0x00010b150480();
    lVar7 = puVar6[0x1a];
    func_0x00010b14fc80();
    if (lVar7 != 0) {
      func_0x00010b14f57c();
    }
    func_0x00010b14f470();
    func_0x00010b14f4a8();
    func_0x00010b1505dc();
    if ((bool)in_ZR) {
      puStack_90 = puVar12;
      func_0x00010b14fe78();
      FUN_10b147d74();
    }
    else {
      func_0x00010b14f27c();
      __ZNSt13exception_ptrC1ERKS_();
      puStack_90 = puVar1;
      func_0x00010b14fe78();
      FUN_10b147358();
      func_0x00010b14f0a4();
    }
    func_0x00010b14fe94();
    func_0x00010b14efd4();
  }
  return;
}



/* Entry: 10b145cc0; end: 10b145cc3;  */

undefined8 * FUN_10b145cc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbe900;
  func_0x00010b1257f8(param_1 + 0x5f);
  FUN_10b12878c(param_1 + 0x5d);
  FUN_10b14a4ec(param_1 + 0x5c);
  func_0x00010b121af0(param_1 + 0xd);
  func_0x00010b147920(param_1 + 0xb);
  func_0x00010b142b88(param_1 + 9);
  func_0x00010b143298(param_1 + 7);
  func_0x00010b146f48(param_1 + 5);
  func_0x00010b14640c(param_1 + 3);
  func_0x00010b14a528(param_1 + 1);
  return param_1;
}



/* Entry: 10b145cc4; end: 10b145cfb;  */

void FUN_10b145cc4(void)

{
  func_0x00010b14a54c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b145cfc; end: 10b145d0b;  */

void FUN_10b145cfc(undefined8 param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x9;
  int extraout_w10;
  undefined4 extraout_w10_00;
  undefined4 extraout_var;
  int unaff_w20;
  long lVar5;
  undefined8 *unaff_x25;
  undefined8 in_register_00005008;
  
  puVar3 = (undefined8 *)(param_2 + 0x48);
  func_0x00010b14fbc4();
  func_0x00010b14f3b4();
  *puVar3 = FUN_10b14df9c;
  puVar3[1] = FUN_10b14e03c;
  func_0x000105c40d24(puVar3 + 2);
  func_0x000105c407c0(puVar3 + 2);
  FUN_10b14a400();
  if (unaff_w20 == 0) {
    func_0x00010b14f8d0();
    puVar3[0x13] = in_register_00005008;
    puVar3[0x12] = param_1;
    if (extraout_x8 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10 != 0);
    }
    puVar4 = puVar3 + 0x12;
    FUN_10b14a400();
    if (((ulong)puVar4 & 1) == 0) {
      *(undefined1 *)(puVar3 + 0x14) = 0;
      func_0x00010b14f0e8();
      lVar5 = puVar3[0x12];
      if ((*(byte *)(lVar5 + 0x90) & 1) != 0) {
        func_0x00010b14f014();
        func_0x00010b14efec(*puVar3);
        return;
      }
      func_0x00010b14fe9c();
      if ((bool)in_CY) {
        lVar5 = *(long *)(lVar5 + 0x98);
        func_0x00010b14ea1c();
        if (CONCAT44(extraout_var,extraout_w10_00) != 0) {
          func_0x00010552fc6c();
LAB_10b14aa7c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b14aa80);
          (*pcVar2)();
        }
        func_0x00010b14e8b4(extraout_x8_00 - lVar5);
        uVar1 = extraout_x9;
        if ((bool)in_CY) {
          uVar1 = extraout_x8_01;
        }
        if (uVar1 != 0) {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b14aa7c;
          }
          __Znwm(uVar1 << 3);
        }
        func_0x00010b14e894();
        func_0x00010b14fe6c();
        if (lVar5 != 0) {
          func_0x00010b14f3dc();
        }
      }
      else {
        *unaff_x25 = puVar3;
      }
      func_0x00010b14fe60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
      return;
    }
    FUN_10b14a428();
    func_0x00010b1504a4();
    func_0x00010b14fadc();
  }
  else {
    FUN_10b14a428();
    func_0x00010b1504a4();
  }
  func_0x00010b14ecd0();
  if ((bool)in_ZR) {
    func_0x00010b14f0b4();
    func_0x000105c4120c();
  }
  else {
    func_0x00010b14f27c();
    __ZNSt13exception_ptrC1ERKS_();
    func_0x00010b14f0b4();
    func_0x000105c410b8();
    func_0x00010b14f0a4();
  }
  func_0x00010b14f4dc();
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b145d0c; end: 10b145d9f;  */

void FUN_10b145d0c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x9;
  int extraout_w10;
  undefined4 extraout_w10_00;
  undefined4 extraout_var;
  undefined8 *unaff_x20;
  long lVar5;
  undefined8 unaff_x21;
  long lVar6;
  undefined8 *unaff_x25;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lVar5 = *(long *)(param_2 + 0x2e0);
  lStack_40 = lVar5 + 0x18;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(lVar5,&lStack_40);
  lVar6 = *(long *)(lVar5 + 0x10);
  uStack_48 = 0;
  func_0x00010b14efe4();
  if (lVar6 != 0) {
    func_0x00010b14fc4c(&uStack_48);
    func_0x00010b14f374();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b145d8c);
    (*pcVar2)();
  }
  func_0x00010b14f89c();
  puVar3 = (undefined8 *)(lVar5 + 0x90);
  func_0x00010b14fbc4(param_1);
  func_0x00010b14f3b4();
  *puVar3 = FUN_10b14dde8;
  puVar3[1] = FUN_10b14dea0;
  func_0x00010b139e74(puVar3 + 2);
  FUN_10b139a94(unaff_x21,puVar3 + 2);
  puVar4 = unaff_x20;
  FUN_10b149e58();
  if ((int)puVar4 == 0) {
    lVar5 = unaff_x20[1];
    puVar3[0x12] = *unaff_x20;
    puVar3[0x13] = lVar5;
    if (lVar5 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10 != 0);
    }
    puVar4 = puVar3 + 0x12;
    FUN_10b149e58();
    if (((ulong)puVar4 & 1) == 0) {
      *(undefined1 *)(puVar3 + 0x14) = 0;
      func_0x00010b14f0e8();
      lVar5 = puVar3[0x12];
      if ((*(byte *)(lVar5 + 0x90) & 1) != 0) {
        func_0x00010b14f014();
        func_0x00010b14efec(*puVar3);
        return;
      }
      func_0x00010b14fe9c();
      if ((bool)in_CY) {
        lVar5 = *(long *)(lVar5 + 0x98);
        func_0x00010b14ea1c();
        if (CONCAT44(extraout_var,extraout_w10_00) != 0) {
          func_0x00010552fc6c();
LAB_10b14ae70:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b14ae74);
          (*pcVar2)();
        }
        func_0x00010b14e8b4(extraout_x8 - lVar5);
        uVar1 = extraout_x9;
        if ((bool)in_CY) {
          uVar1 = extraout_x8_00;
        }
        if (uVar1 != 0) {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b14ae70;
          }
          __Znwm(uVar1 << 3);
        }
        func_0x00010b14e894();
        func_0x00010b14fe6c();
        if (lVar5 != 0) {
          func_0x00010b14f3dc();
        }
      }
      else {
        *unaff_x25 = puVar3;
      }
      func_0x00010b14fe60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
      return;
    }
    FUN_10b149e80();
    func_0x00010b15048c();
    func_0x00010b14fe38();
  }
  else {
    FUN_10b149e80();
    func_0x00010b15048c();
  }
  func_0x00010b14ecd0();
  if ((bool)in_ZR) {
    func_0x00010b14f0b4();
    FUN_10b0fb514();
  }
  else {
    func_0x00010b14f27c();
    __ZNSt13exception_ptrC1ERKS_();
    func_0x00010b14f0b4();
    FUN_10b0fb468();
    func_0x00010b14f0a4();
  }
  func_0x00010b14f5c4();
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b145da0; end: 10b145de7;  */

void FUN_10b145da0(void)

{
  long unaff_x19;
  undefined1 auStack_a8 [120];
  undefined1 auStack_30 [16];
  
  func_0x00010b14f0c8();
  FUN_10b121fd0();
  FUN_10b14af1c(auStack_30,unaff_x19 + 0x28,auStack_a8);
  func_0x000107c27b58(auStack_30);
  func_0x00010b14feb0();
  return;
}



/* Entry: 10b145de8; end: 10b145fcb;  */

void FUN_10b145de8(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  long lVar2;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 auStack_d0 [6];
  undefined1 auStack_a0 [40];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_48;
  
  lVar2 = param_1;
  func_0x00010b14ead4();
  lVar2 = *(long *)(lVar2 + 0x2e8);
  uStack_48 = extraout_x8;
  FUN_10b13f754(auStack_120,param_2);
  uStack_d8 = param_3[1];
  uStack_e0 = *param_3;
  auStack_d0[0] = param_3[2];
  func_0x000104be0ccc(auStack_140,param_4);
  FUN_10b14b2f8(&uStack_100,param_1,auStack_120,&uStack_e0,auStack_140);
  lVar2 = *(long *)(lVar2 + 0x88);
  if (lVar2 == 0) {
    *unaff_x19 = uStack_100;
    unaff_x19[1] = uStack_f8;
    uStack_100 = 0;
    uStack_f8 = 0;
  }
  else {
    uStack_f0 = uStack_100;
    uStack_e8 = uStack_f8;
    uStack_100 = 0;
    uStack_f8 = 0;
    FUN_10b14b870(auStack_a0);
    FUN_10b14b830();
    uStack_d8 = uStack_e8;
    uStack_e0 = uStack_f0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    FUN_10b14bbfc(auStack_d0,auStack_a0);
    pcStack_78 = FUN_10b14bc40;
    ppuStack_70 = &PTR_DAT_110cbed50;
    puVar1 = (undefined8 *)0x38;
    __Znwm();
    puVar1[1] = uStack_d8;
    *puVar1 = uStack_e0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    FUN_10b14bbfc(puVar1 + 2,auStack_d0);
    puStack_68 = puVar1;
    FUN_10b1491bc(lVar2,&pcStack_78);
    func_0x00010b14ed98(ppuStack_70);
    FUN_10b14bdc0(&uStack_e0);
    FUN_10b14bab0(auStack_a0);
    func_0x0001052a55c0(&uStack_f0);
  }
  func_0x0001052a55c0(&uStack_100);
  func_0x000107c279c4(auStack_140);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
  func_0x00010b14e980(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b14ed98(ppuStack_70);
  FUN_10b14bdc0(&uStack_e0);
  func_0x0001052a55c0();
  FUN_10b14bab0(auStack_a0);
  func_0x0001052a55c0(&uStack_f0);
  func_0x0001052a55c0(&uStack_100);
  func_0x000107c279c4(auStack_140);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
  do {
    func_0x00010b14efdc();
  } while( true );
}



/* Entry: 10b145fcc; end: 10b146047;  */

void FUN_10b145fcc(long *param_1,undefined8 param_2,long *param_3)

{
  uint auStack_40 [2];
  long lStack_38;
  ulong uStack_30;
  undefined1 uStack_28;
  undefined1 auStack_20 [16];
  
  if (((char)param_3[2] == '\x01') && (*param_3 == 0 && param_3[1] == 0x7fffffffffffffff)) {
    auStack_40[0] = auStack_40[0] & 0xffffff00;
    uStack_30 = uStack_30 & 0xffffffffffffff00;
    (**(code **)(*param_1 + 0x40))(param_1,param_2,auStack_40);
  }
  else {
    auStack_40[0] = (uint)param_2;
    uStack_30 = param_3[1];
    lStack_38 = *param_3;
    uStack_28 = (undefined1)param_3[2];
    FUN_10b14bfac(auStack_20,param_1 + 5,auStack_40);
    func_0x000107c27b58(auStack_20);
  }
  return;
}



/* Entry: 10b146048; end: 10b14604b;  */

void FUN_10b146048(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbe9a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b14604c; end: 10b14605f;  */

void FUN_10b14604c(void)

{
  FUN_10b146084();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b146060; end: 10b146083;  */

void FUN_10b146060(void)

{
  long unaff_x19;
  
  func_0x00010b14f948();
  FUN_10b142424(unaff_x19 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b146084; end: 10b146093;  */

void FUN_10b146084(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b146094; end: 10b1460c3;  */

undefined8 FUN_10b146094(long param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    func_0x00010b14ea5c();
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 10b1460c4; end: 10b146267;  */

void FUN_10b1460c4(long *param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined1 extraout_w8;
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long lVar1;
  long unaff_x21;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_40 [16];
  
  if (param_3 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = *param_1;
  uStack_70 = param_2;
  lStack_68 = param_3;
  func_0x00010b14f0e8();
  FUN_10b1462f0(auStack_40,&uStack_70);
  func_0x00010b14f83c();
  if ((bool)in_ZR) {
    if (*(char *)(unaff_x21 + 0x50) == '\x01') {
      func_0x00010b150668();
      func_0x00010b1423dc();
    }
    else {
      func_0x00010b14f7fc();
      func_0x00010b150070();
    }
  }
  else {
    func_0x00010b150070();
    *(undefined1 *)(unaff_x21 + 0x58) = extraout_w8;
  }
  func_0x0001052aad20(auStack_40);
  func_0x00010b14ec48();
  func_0x00010b14ff24();
  while (unaff_x21 != lVar1) {
    func_0x00010b14fd54();
    (*extraout_x8)();
  }
  func_0x00010b14f7f4();
  func_0x00010b15040c();
  func_0x00010b14f4c4();
  func_0x000107c27b68(param_1[2]);
  return;
}



/* Entry: 10b146268; end: 10b14626b;  */

undefined8 * FUN_10b146268(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbe9f0;
  FUN_10b1463ec(param_1 + 1);
  return param_1;
}



/* Entry: 10b14626c; end: 10b14627f;  */

void FUN_10b14626c(void)

{
  FUN_10b1462c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b146280; end: 10b1462c3;  */

void FUN_10b146280(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b14eb80();
  if (param_3 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  FUN_10b1460c4(param_1 + 8);
  func_0x00010b14f4fc();
  return;
}



/* Entry: 10b1462c4; end: 10b1462ef;  */

undefined8 * FUN_10b1462c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbe9f0;
  FUN_10b1463ec(param_1 + 1);
  return param_1;
}



/* Entry: 10b1462f0; end: 10b1463b3;  */

void FUN_10b1462f0(void)

{
  code *pcVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  undefined1 auStack_30 [16];
  
  func_0x00010b14f670();
  func_0x00010b1504fc();
  FUN_10b142160();
  func_0x00010b1504f0();
  FUN_10b142188();
  func_0x00010b15040c();
  func_0x00010b14f4c4();
  func_0x00010b150034();
  func_0x00010b14f600();
  __ZNSt3__15mutex4lockEv();
  func_0x00010b150680();
  lVar2 = extraout_x8;
  if (extraout_x9 != 0) {
    do {
      func_0x00010b14eb14();
      lVar2 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  func_0x00010b150558(lVar2 + 0x18);
  FUN_10b1463b4();
  func_0x00010b14fe10();
  func_0x00010b14ff74();
  if (extraout_x9_00 != 0) {
    func_0x00010b1503e8();
    func_0x00010b14f374();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b146380);
    (*pcVar1)();
  }
  func_0x00010b150004();
  func_0x00010b14f4ec();
  FUN_10b141ff4(auStack_30);
  return;
}



/* Entry: 10b1463b4; end: 10b1463e3;  */

void FUN_10b1463b4(void)

{
  ulong uVar1;
  ulong unaff_x19;
  
  func_0x00010b14f108();
  while (uVar1 = unaff_x19, FUN_10b1463e4(), (uVar1 & 1) == 0) {
    func_0x00010b14f320();
  }
  return;
}



/* Entry: 10b1463e4; end: 10b1463eb;  */

undefined8 FUN_10b1463e4(long *param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(*param_1 + 0x10) & 1) == 0) {
    func_0x00010b14ea5c();
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 10b1463ec; end: 10b14642f;  */

long FUN_10b1463ec(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b14ed08();
  lVar1 = unaff_x19;
  func_0x00010b14f1cc();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b146430; end: 10b14670b;  */

void FUN_10b146430(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  long lVar4;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar5;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined1 auStack_70 [8];
  long lStack_68;
  undefined8 *puStack_60;
  
  puVar2 = (undefined8 *)0x80;
  __Znwm();
  *puVar2 = FUN_10b14cdc0;
  puVar2[1] = FUN_10b14cf80;
  puVar6 = puVar2 + 2;
  *puVar6 = &PTR_FUN_110cbea88;
  puVar3 = puVar2;
  func_0x00010b14fddc();
  func_0x00010b14f160();
  puVar1 = puVar2 + 0xd;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110cbeaa8;
  func_0x00010b14eb94();
  do {
    func_0x00010b14eb14();
  } while (extraout_w11 != 0);
  puVar7 = puVar2 + 7;
  *(undefined1 *)puVar7 = 0;
  puVar2[2] = &PTR_FUN_110cbea40;
  *(undefined1 *)(puVar2 + 10) = 0;
  do {
    func_0x00010b14eb14();
  } while (extraout_w11_00 != 0);
  do {
    func_0x00010b14eb14();
  } while (extraout_w11_01 != 0);
  *param_1 = extraout_x8;
  param_1[1] = puVar3;
  func_0x00010b150404();
  lVar4 = param_2[1];
  uVar8 = param_2[1];
  uVar5 = *param_2;
  puVar2[0xc] = uVar8;
  puVar2[0xb] = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  FUN_10b14670c(puVar1,puVar2 + 0xb);
  puVar3 = puVar1;
  FUN_10b12d174();
  if (((ulong)puVar3 & 1) == 0) {
    *(undefined1 *)(puVar2 + 0xf) = 0;
    puStack_80 = puVar2;
    puStack_78 = puVar1;
    FUN_10b12d1c8(auStack_70,puVar1,&puStack_80);
    if (lStack_68 != 0) {
      do {
        func_0x00010b14ea74();
      } while (extraout_w11_02 != 0);
      if (extraout_x9 == 0) {
        func_0x00010b14e9c4();
        func_0x00010b14f3ec();
      }
    }
  }
  else {
    FUN_10b12d0d0(puVar1);
    func_0x000107c27b58(puVar1);
    FUN_10b146ae4(puVar2 + 0xb);
    func_0x00010b1500ac();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_00 != 0);
    }
    FUN_10b146a9c(puVar7);
    puVar2[8] = uVar8;
    puVar2[7] = uVar5;
    puStack_60 = (undefined8 *)0x0;
    func_0x00010b14ecc0();
    FUN_10b146b38(&puStack_60);
    func_0x00010b14fb04();
    func_0x00010b14f01c();
    *(undefined1 *)(puVar2 + 0xf) = extraout_w8;
    func_0x00010b14f9d4();
    if ((bool)in_ZR) {
      func_0x00010b150260();
      func_0x00010b14fcec();
      func_0x00010b14f310();
      puStack_60 = param_2;
      func_0x00010b15024c();
      func_0x00010b14ffd4();
      if ((bool)in_ZR) {
        uVar5 = puVar2[8];
        *puVar7 = 0;
        puVar2[8] = 0;
        lVar4 = param_2[1];
        *param_2 = extraout_x8_01;
        param_2[1] = uVar5;
        if (lVar4 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      else {
        func_0x00010b14f144();
      }
      func_0x00010b14fbfc();
      if (puVar7 == (undefined8 *)0x0) {
        __ZNSt3__118condition_variable10notify_allEv(param_2 + 3);
      }
      else {
        func_0x00010b14f450();
        func_0x00010b14fd2c();
        func_0x00010b14eab4();
      }
      if (unaff_x22 != 0) {
        do {
          func_0x00010b14ea74();
        } while (extraout_w11_03 != 0);
        if (extraout_x9_00 == 0) {
          func_0x00010b14e970();
          func_0x00010b14f25c();
        }
      }
    }
    else {
      func_0x00010b14fc4c(&puStack_60);
      FUN_10b1469a8(puVar6,&puStack_60);
      __ZNSt13exception_ptrD1Ev(&puStack_60);
    }
    FUN_10b146b74(puVar6);
    func_0x00010b14efd4();
  }
  return;
}



/* Entry: 10b14670c; end: 10b14687b;  */

void FUN_10b14670c(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x9;
  long extraout_x10;
  ulong unaff_x20;
  long *unaff_x21;
  long lVar3;
  long lVar4;
  long *unaff_x25;
  
  func_0x00010b14fbc4();
  func_0x00010b14ec10();
  func_0x00010b14fde4(FUN_10b14cd18);
  func_0x00010b14f5bc();
  func_0x00010b14ef78();
  func_0x00010b143580();
  if ((unaff_x20 & 1) == 0) {
    func_0x00010b14f118();
    func_0x00010b14f0e8();
    lVar4 = *unaff_x21;
    if ((*(byte *)(lVar4 + 0x58) & 1) == 0) {
      func_0x00010b1500dc();
      if ((bool)in_CY) {
        lVar3 = *(long *)(lVar4 + 0x60);
        func_0x00010b14ea1c();
        if (extraout_x10 != 0) {
          func_0x00010552fc6c();
LAB_10b146824:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b146828);
          (*pcVar2)();
        }
        func_0x00010b14e8b4(extraout_x8 - lVar3);
        uVar1 = extraout_x9;
        if ((bool)in_CY) {
          uVar1 = extraout_x8_00;
        }
        if (uVar1 != 0) {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b146824;
          }
          __Znwm(uVar1 << 3);
        }
        func_0x00010b14e894();
        func_0x00010b1500b8();
        if (lVar3 != 0) {
          func_0x00010b14f3dc();
        }
      }
      else {
        *unaff_x25 = (long)param_1;
        unaff_x25 = unaff_x25 + 1;
      }
      *(long **)(lVar4 + 0x68) = unaff_x25;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
      return;
    }
    func_0x00010b14f014();
    func_0x00010b14efec(*param_1);
  }
  else {
    FUN_10b1435a8(param_1[10]);
    func_0x00010b14f184();
    func_0x00010b14e930();
    if ((bool)in_ZR) {
      func_0x00010b14ec20();
      func_0x00010b14eb5c();
    }
    else {
      func_0x00010b14e960();
      func_0x00010b14eb68();
      func_0x00010b14f0a4();
    }
    func_0x00010b14f084();
    func_0x00010b14efd4();
  }
  return;
}



/* Entry: 10b14687c; end: 10b14687f;  */

long FUN_10b14687c(long param_1)

{
  long extraout_x8;
  
  func_0x00010b14f004(&PTR_FUN_110cbea88);
  if (extraout_x8 != 0) {
    func_0x00010b14eb24();
    func_0x00010b14fb60();
    FUN_10b1469a8();
    func_0x00010b14f244();
    func_0x00010b14f4cc();
    func_0x00010b14f5d4();
  }
  FUN_10b14691c(param_1 + 0x18);
  FUN_10b14691c();
  return param_1;
}



/* Entry: 10b146880; end: 10b146893;  */

void FUN_10b146880(void)

{
  FUN_10b146940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b146894; end: 10b146897;  */

long FUN_10b146894(long param_1)

{
  long extraout_x8;
  
  func_0x00010b14f004(&PTR_FUN_110cbea88);
  if (extraout_x8 != 0) {
    func_0x00010b14eb24();
    func_0x00010b14fb60();
    FUN_10b1469a8();
    func_0x00010b14f244();
    func_0x00010b14f4cc();
    func_0x00010b14f5d4();
  }
  FUN_10b14691c(param_1 + 0x18);
  FUN_10b14691c();
  return param_1;
}



/* Entry: 10b146898; end: 10b1468ab;  */

void FUN_10b146898(void)

{
  FUN_10b146940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1468ac; end: 10b1468af;  */

void FUN_10b1468ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbeaa8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1468b0; end: 10b1468c3;  */

void FUN_10b1468b0(void)

{
  FUN_10b14690c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1468c4; end: 10b14690b;  */

long FUN_10b1468c4(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b150014();
  if (param_1 != 0) {
    func_0x00010b14e9f4();
  }
  func_0x00010b150218();
  func_0x00010b150210();
  func_0x00010b150208();
  if (*(char *)(unaff_x19 + 0x28) == '\x01') {
    lVar1 = unaff_x19 + 0x18;
    func_0x00010b14f1cc();
    if (lVar1 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    return unaff_x19;
  }
  return param_1;
}



/* Entry: 10b14690c; end: 10b14691b;  */

void FUN_10b14690c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b14691c; end: 10b14693f;  */

void FUN_10b14691c(long param_1)

{
  func_0x00010b14f1cc();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b146940; end: 10b1469a7;  */

long FUN_10b146940(long param_1)

{
  long extraout_x8;
  
  func_0x00010b14f004(&PTR_FUN_110cbea88);
  if (extraout_x8 != 0) {
    func_0x00010b14eb24();
    func_0x00010b14fb60();
    FUN_10b1469a8();
    func_0x00010b14f244();
    func_0x00010b14f4cc();
    func_0x00010b14f5d4();
  }
  FUN_10b14691c(param_1 + 0x18);
  FUN_10b14691c();
  return param_1;
}



/* Entry: 10b1469a8; end: 10b146a4b;  */

void FUN_10b1469a8(void)

{
  long extraout_x8;
  long lVar1;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  long lStack_30;
  
  func_0x00010b1504d0();
  FUN_10b146a4c(auStack_40,extraout_x8 + 8,auStack_50);
  func_0x00010b14f55c();
  FUN_10b146a78();
  FUN_10b14691c(auStack_40);
  FUN_10b14691c(auStack_50);
  func_0x00010b14fa04();
  func_0x00010b14fcb4(lStack_30 + 0x88);
  lVar1 = *(long *)(lStack_30 + 0x90);
  *(undefined8 *)(lStack_30 + 0x90) = 0;
  func_0x00010b14f6a4();
  if (lVar1 == 0) {
    __ZNSt3__118condition_variable10notify_allEv(lStack_30 + 0x18);
  }
  else {
    func_0x00010b14f20c();
    func_0x00010b14ec30();
    func_0x00010b14e920();
  }
  func_0x00010b14fdb4();
  return;
}



/* Entry: 10b146a4c; end: 10b146a77;  */

void FUN_10b146a4c(void)

{
  func_0x00010b14ef5c();
  func_0x00010b14f4e4();
  func_0x00010b14e948();
  func_0x00010b14eff4();
  return;
}



/* Entry: 10b146a78; end: 10b146a9b;  */

void FUN_10b146a78(void)

{
  func_0x00010b14e8d0();
  FUN_10b14691c();
  return;
}



/* Entry: 10b146a9c; end: 10b146ae3;  */

void FUN_10b146a9c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010b146ac0();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10b146ae4; end: 10b146b07;  */

void FUN_10b146ae4(long *param_1)

{
  code *pcVar1;
  
  FUN_10b146b08();
  if ((*(byte *)(*param_1 + 0x50) & 1) == 0) {
    func_0x00010b14ed8c();
    func_0x00010b14f374();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b1435e4);
    (*pcVar1)();
  }
  if ((*(byte *)(*param_1 + 0x50) & 1) != 0) {
    return;
  }
  func_0x00010b150270();
  func_0x00010b14ff40();
  func_0x00010b1500a0();
  func_0x00010552fc08();
  func_0x00010b14fa3c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b143c50);
  (*pcVar1)();
}



/* Entry: 10b146b08; end: 10b146b37;  */

void FUN_10b146b08(void)

{
  undefined1 auStack_30 [16];
  
  FUN_10b14670c(auStack_30);
  func_0x00010b14fafc();
  func_0x00010b14f24c();
  return;
}



/* Entry: 10b146b38; end: 10b146b5b;  */

void FUN_10b146b38(long param_1)

{
  func_0x00010b14f1cc();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b146b5c; end: 10b146b73;  */

void FUN_10b146b5c(long param_1)

{
  __ZNSt13exception_ptrC1ERKS_();
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10b146b74; end: 10b146b97;  */

void FUN_10b146b74(void)

{
  long extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010b14fec8();
  FUN_10b146b98();
  func_0x00010b14f004(&PTR_FUN_110cbea88);
  if (extraout_x8 != 0) {
    func_0x00010b14eb24();
    func_0x00010b14fb60();
    FUN_10b1469a8();
    func_0x00010b14f244();
    func_0x00010b14f4cc();
    func_0x00010b14f5d4();
  }
  FUN_10b14691c(unaff_x19 + 0x18);
  FUN_10b14691c(unaff_x20);
  return;
}



/* Entry: 10b146b98; end: 10b146bb7;  */

void FUN_10b146b98(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010b146ac0();
  }
  return;
}



/* Entry: 10b146bb8; end: 10b146bbb;  */

void FUN_10b146bb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbeaf8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b146bbc; end: 10b146bcf;  */

void FUN_10b146bbc(void)

{
  FUN_10b146bf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b146bd0; end: 10b146bf3;  */

void FUN_10b146bd0(void)

{
  long unaff_x19;
  
  func_0x00010b14f948();
  FUN_10b146b98(unaff_x19 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b146bf4; end: 10b146c03;  */

void FUN_10b146bf4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b146c04; end: 10b146c33;  */

undefined8 FUN_10b146c04(long param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    func_0x00010b14ea5c();
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 10b146c34; end: 10b146e9b;  */

void FUN_10b146c34(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined1 extraout_w8;
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *puVar5;
  undefined8 *unaff_x21;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  long lStack_48;
  
  if (param_3 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_00 != 0);
  }
  puVar5 = (undefined8 *)*param_1;
  uStack_c0 = param_2;
  lStack_b8 = param_3;
  func_0x00010b14f0e8();
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_10b146a4c(auStack_60,&uStack_c0,&uStack_70);
  FUN_10b146a78(&uStack_50,auStack_60);
  FUN_10b14691c(auStack_60);
  FUN_10b14691c(&uStack_70);
  func_0x00010b1500c4();
  __ZNSt3__15mutex4lockEv();
  if (lStack_48 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_01 != 0);
  }
  while (puVar4 = unaff_x21, FUN_10b146c04(), ((ulong)puVar4 & 1) == 0) {
    func_0x00010b150254();
  }
  FUN_10b14691c(&stack0xffffffffffffff80);
  if (unaff_x21[0x11] != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_88);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_88);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10b146da4);
    (*pcVar3)();
  }
  uVar1 = *unaff_x21;
  uVar2 = unaff_x21[1];
  *unaff_x21 = 0;
  unaff_x21[1] = 0;
  func_0x00010b14fc70();
  FUN_10b14691c(&uStack_50);
  func_0x00010b14f83c();
  if ((bool)in_ZR) {
    if (*(char *)(unaff_x21 + 10) == '\x01') {
      uStack_98 = 0;
      uStack_90 = 0;
      lStack_48 = unaff_x21[9];
      uStack_50 = unaff_x21[8];
      unaff_x21[8] = uVar1;
      unaff_x21[9] = uVar2;
      FUN_10b146b38();
    }
    else {
      func_0x00010b14f7fc();
      unaff_x21[8] = uVar1;
      unaff_x21[9] = uVar2;
      func_0x00010b14f764();
    }
  }
  else {
    unaff_x21[8] = uVar1;
    unaff_x21[9] = uVar2;
    func_0x00010b14f764();
    *(undefined1 *)(unaff_x21 + 0xb) = extraout_w8;
  }
  FUN_10b146b38(&uStack_98);
  func_0x00010b14ec48();
  func_0x00010b14ff24();
  while (unaff_x21 != puVar5) {
    func_0x00010b14fd54();
    (*extraout_x8)();
  }
  func_0x00010b14f7f4();
  func_0x00010b150404();
  func_0x00010b14fdb4();
  func_0x000107c27b68(param_1[2]);
  return;
}



/* Entry: 10b146e9c; end: 10b146e9f;  */

undefined8 * FUN_10b146e9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbeb48;
  func_0x00010b146f28(param_1 + 1);
  return param_1;
}



/* Entry: 10b146ea0; end: 10b146eb3;  */

void FUN_10b146ea0(void)

{
  FUN_10b146efc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b146eb4; end: 10b146efb;  */

void FUN_10b146eb4(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010b14eb80();
  if (param_3 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  FUN_10b146c34(param_1 + 8);
  FUN_10b14691c(auStack_30);
  return;
}



/* Entry: 10b146efc; end: 10b146f6b;  */

undefined8 * FUN_10b146efc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbeb48;
  func_0x00010b146f28(param_1 + 1);
  return param_1;
}



/* Entry: 10b146f6c; end: 10b147017;  */

void FUN_10b146f6c(void)

{
  undefined8 extraout_x9;
  int extraout_w11;
  int extraout_w12;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  func_0x00010b14f670();
  FUN_10b1473e4(auStack_40);
  FUN_10b14740c(auStack_30,auStack_40);
  func_0x00010b14f348();
  func_0x00010b14f3e4();
  if (lStack_28 == 0) {
    uStack_38 = 0;
  }
  else {
    do {
      func_0x00010b14ec7c();
      uStack_38 = extraout_x9;
    } while (extraout_w12 != 0);
    do {
      func_0x00010b14ee64();
    } while (extraout_w11 != 0);
  }
  FUN_10b1477d0(auStack_40);
  func_0x00010b14f348();
  func_0x00010b14f26c();
  func_0x00010b14f6b4();
  return;
}



/* Entry: 10b147018; end: 10b14704b;  */

void FUN_10b147018(void)

{
  func_0x00010b14f2cc();
  func_0x00010b14f710();
  FUN_10b147d44();
  func_0x00010b14efe4();
  return;
}



/* Entry: 10b14704c; end: 10b14708b;  */

void FUN_10b14704c(long param_1)

{
  func_0x00010b147068();
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 10b14708c; end: 10b1470cb;  */

undefined8 FUN_10b14708c(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b14fff4(&UNK_110cbeeb8);
  func_0x00010b1470e4();
  func_0x00010b14ff84();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 10b1470cc; end: 10b1470cf;  */

long FUN_10b1470cc(long param_1)

{
  long extraout_x8;
  
  func_0x00010b14f004(&PTR_FUN_110cbeec8);
  if (extraout_x8 != 0) {
    func_0x00010b14ed54();
    func_0x00010b14f444();
    FUN_10b147304();
    func_0x00010b14f5d4();
  }
  func_0x00010b147278(param_1 + 0x18);
  func_0x00010b14f57c();
  return param_1;
}



/* Entry: 10b1470d0; end: 10b1470ff;  */

void FUN_10b1470d0(void)

{
  FUN_10b1472ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b147100; end: 10b147103;  */

long FUN_10b147100(long param_1)

{
  long extraout_x8;
  
  func_0x00010b14f004(&PTR_FUN_110cbeec8);
  if (extraout_x8 != 0) {
    func_0x00010b14ed54();
    func_0x00010b14f444();
    FUN_10b147304();
    func_0x00010b14f5d4();
  }
  func_0x00010b147278(param_1 + 0x18);
  func_0x00010b14f57c();
  return param_1;
}



/* Entry: 10b147104; end: 10b147117;  */

void FUN_10b147104(void)

{
  FUN_10b1472ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b147118; end: 10b14719b;  */

void FUN_10b147118(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010b14ea9c();
  func_0x00010b14fb78();
  FUN_10b14719c();
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_110cbeee8;
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  puStack_30[4] = 0;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  func_0x00010b150514();
  *(undefined8 *)(extraout_x8 + 0x38) = extraout_x9;
  *(ulong *)(extraout_x8 + 0x48) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8 + 0x40) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(extraout_x8 + 0x58) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8 + 0x50) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  func_0x00010b150508();
  *(undefined8 *)(extraout_x8_00 + 0x60) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x68) = extraout_x9_00;
  *(ulong *)(extraout_x8_00 + 0x78) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8_00 + 0x70) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(extraout_x8_00 + 0x88) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8_00 + 0x80) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(extraout_x8_00 + 0x98) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8_00 + 0x90) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(extraout_x8_00 + 0xa8) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8_00 + 0xa0) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(undefined8 *)(extraout_x8_00 + 0xb0) = 0;
  func_0x00010b14ea84();
  FUN_10b14729c();
  func_0x00010b14e980(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010b14fb6c();
  FUN_10b1471bc();
  func_0x00010b14fb14();
  return;
}



/* Entry: 10b14719c; end: 10b1471bb;  */

void FUN_10b14719c(void)

{
  func_0x00010b14fb6c();
  FUN_10b1471bc();
  func_0x00010b14fb14();
  return;
}



/* Entry: 10b1471bc; end: 10b1471e7;  */

void FUN_10b1471bc(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x1642c8590b21643) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xb8);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cbeee8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1471e8; end: 10b1471eb;  */

void FUN_10b1471e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbeee8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1471ec; end: 10b1471ff;  */

void FUN_10b1471ec(void)

{
  func_0x00010b14720c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b147200; end: 10b147217;  */

void FUN_10b147200(long param_1)

{
  func_0x00010b147254(param_1 + 0xb0);
  func_0x00010b1503b4();
  __ZNSt3__15mutexD1Ev(param_1 + 0x68);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x38);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 10b147218; end: 10b14729b;  */

void FUN_10b147218(long param_1)

{
  func_0x00010b147254(param_1 + 0x98);
  func_0x00010b1503b4();
  __ZNSt3__15mutexD1Ev(param_1 + 0x50);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x20);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 10b14729c; end: 10b1472ab;  */

void FUN_10b14729c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1472ac; end: 10b147303;  */

long FUN_10b1472ac(long param_1)

{
  long extraout_x8;
  
  func_0x00010b14f004(&PTR_FUN_110cbeec8);
  if (extraout_x8 != 0) {
    func_0x00010b14ed54();
    func_0x00010b14f444();
    FUN_10b147304();
    func_0x00010b14f5d4();
  }
  func_0x00010b147278(param_1 + 0x18);
  func_0x00010b14f57c();
  return param_1;
}



/* Entry: 10b147304; end: 10b14733b;  */

void FUN_10b147304(void)

{
  func_0x00010b14ed14();
  func_0x00010b14f444();
  FUN_10b14733c();
  func_0x00010b14efe4();
  func_0x00010b14f988();
  return;
}



/* Entry: 10b14733c; end: 10b147357;  */

void FUN_10b14733c(void)

{
  func_0x00010b14ff50();
  FUN_10b147358();
  return;
}



/* Entry: 10b147358; end: 10b1473e3;  */

void FUN_10b147358(void)

{
  long unaff_x19;
  undefined8 uStack_30;
  
  func_0x00010b14ede4();
  func_0x00010b14ee9c();
  FUN_10b1473e4();
  func_0x00010b14f55c();
  FUN_10b14740c();
  func_0x00010b14f3e4();
  func_0x00010b14f26c();
  __ZNSt3__15mutex4lockEv(uStack_30 + 0x50);
  func_0x00010b14f1d8();
  FUN_10b147430();
  func_0x00010b14fac8();
  if (unaff_x19 == 0) {
    func_0x00010b15036c();
  }
  else {
    func_0x00010b14f20c();
    func_0x00010b14ec30();
    func_0x00010b14e920();
  }
  func_0x00010b14f348();
  return;
}



/* Entry: 10b1473e4; end: 10b14740b;  */

void FUN_10b1473e4(void)

{
  func_0x00010b14ec8c();
  func_0x00010b14f4e4();
  func_0x00010b14e948();
  func_0x00010b14eff4();
  return;
}



/* Entry: 10b14740c; end: 10b14742f;  */

void FUN_10b14740c(void)

{
  func_0x00010b14e8d0();
  func_0x00010b147278();
  return;
}



/* Entry: 10b147430; end: 10b14743f;  */

void FUN_10b147430(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(*param_2 + 0x90,*param_1);
  return;
}



/* Entry: 10b147440; end: 10b147457;  */

void FUN_10b147440(void)

{
  FUN_10b147458();
  return;
}



/* Entry: 10b147458; end: 10b147493;  */

void FUN_10b147458(undefined8 *param_1,long param_2)

{
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  undefined8 uVar1;
  undefined8 extraout_x10;
  undefined8 uVar2;
  int extraout_w13;
  int extraout_w13_00;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = 0;
  if (*(long *)(param_2 + 0x20) != 0) {
    do {
      func_0x00010b14ee2c();
    } while (extraout_w13 != 0);
    do {
      func_0x00010b14ee2c();
      param_1 = extraout_x8;
      uVar1 = extraout_x9;
      uVar2 = extraout_x10;
    } while (extraout_w13_00 != 0);
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  func_0x00010b14f26c();
  return;
}



/* Entry: 10b147494; end: 10b147497;  */

void FUN_10b147494(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbeb98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b147498; end: 10b1474ab;  */

void FUN_10b147498(void)

{
  FUN_10b1474d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1474ac; end: 10b1474d7;  */

void FUN_10b1474ac(long param_1)

{
  func_0x000107c281bc(param_1 + 0x80);
  FUN_10b1474e8(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)(param_1 + 0x18);
  return;
}



/* Entry: 10b1474d8; end: 10b1474e7;  */

void FUN_10b1474d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1474e8; end: 10b14752f;  */

void FUN_10b1474e8(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x00010b147508();
  }
  return;
}



/* Entry: 10b147530; end: 10b147567;  */

undefined8 FUN_10b147530(long param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x00010b14eb40(*(undefined8 *)(param_1 + 0x90));
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 10b147568; end: 10b147747;  */

void FUN_10b147568(long *param_1,undefined8 param_2,long param_3)

{
  undefined1 extraout_w8;
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  uStack_88 = param_2;
  lStack_80 = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = *param_1;
  uStack_78 = param_2;
  lStack_70 = param_3;
  func_0x00010b14f0e8();
  FUN_10b1477d0(auStack_48,&uStack_78);
  lVar2 = *param_1;
  if (*(char *)(lVar2 + 0x60) == '\x01') {
    if (*(char *)(lVar2 + 0x58) == '\x01') {
      func_0x00010b15065c();
      func_0x000107c27b9c();
    }
    else {
      func_0x00010b14f7fc();
      func_0x00010b14f9e0();
    }
  }
  else {
    func_0x00010b14f9e0();
    *(undefined1 *)(lVar2 + 0x60) = extraout_w8;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  lVar2 = *param_1;
  lVar3 = *(long *)(lVar2 + 0x68);
  uStack_58 = *(undefined8 *)(lVar2 + 0x78);
  uStack_60 = *(undefined8 *)(lVar2 + 0x70);
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  lStack_68 = lVar3;
  func_0x00010b14f014();
  func_0x00010b14ff24();
  while (lVar3 != lVar1) {
    func_0x00010b14fd54();
    (*extraout_x8)();
  }
  func_0x00010b14f6ac();
  func_0x00010b147278(&uStack_78);
  func_0x00010b147278(&uStack_88);
  func_0x000107c27b68(param_1[2]);
  return;
}



/* Entry: 10b147748; end: 10b14774b;  */

undefined8 * FUN_10b147748(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbebe8;
  FUN_10b147900(param_1 + 1);
  return param_1;
}



/* Entry: 10b14774c; end: 10b14775f;  */

void FUN_10b14774c(void)

{
  FUN_10b1477a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b147760; end: 10b1477a3;  */

void FUN_10b147760(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b14eb80();
  if (param_3 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  FUN_10b147568(param_1 + 8);
  func_0x00010b14f26c();
  return;
}



/* Entry: 10b1477a4; end: 10b1477cf;  */

undefined8 * FUN_10b1477a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbebe8;
  FUN_10b147900(param_1 + 1);
  return param_1;
}



/* Entry: 10b1477d0; end: 10b1478af;  */

void FUN_10b1477d0(void)

{
  code *pcVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  int extraout_w11;
  undefined8 *unaff_x19;
  undefined8 uVar3;
  undefined8 *apuStack_40 [2];
  undefined8 *puStack_30;
  
  func_0x00010b14f670();
  func_0x00010b1504fc();
  FUN_10b1473e4();
  func_0x00010b1504f0();
  FUN_10b14740c();
  func_0x00010b147278(apuStack_40);
  func_0x00010b14f348();
  apuStack_40[0] = puStack_30 + 10;
  func_0x00010b14f600();
  __ZNSt3__15mutex4lockEv();
  func_0x00010b150680();
  lVar2 = extraout_x8;
  if (extraout_x9 != 0) {
    do {
      func_0x00010b14eb14();
      lVar2 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  func_0x00010b150558(lVar2 + 0x20);
  FUN_10b1478b0();
  func_0x00010b14f3e4();
  if (puStack_30[0x12] != 0) {
    func_0x00010b1503e8();
    func_0x00010b14f374();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b147880);
    (*pcVar1)();
  }
  uVar3 = *puStack_30;
  unaff_x19[1] = puStack_30[1];
  *unaff_x19 = uVar3;
  unaff_x19[2] = puStack_30[2];
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = 0;
  func_0x00010b14f4ec();
  func_0x00010b14f6b4();
  return;
}



/* Entry: 10b1478b0; end: 10b1478df;  */

void FUN_10b1478b0(void)

{
  ulong uVar1;
  ulong unaff_x19;
  
  func_0x00010b14f108();
  while (uVar1 = unaff_x19, FUN_10b1478e0(), (uVar1 & 1) == 0) {
    func_0x00010b14f320();
  }
  return;
}



/* Entry: 10b1478e0; end: 10b1478e7;  */

undefined8 FUN_10b1478e0(long *param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(*param_1 + 0x18) & 1) == 0) {
    func_0x00010b14eb40(*(undefined8 *)(*param_1 + 0x90));
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 10b1478e8; end: 10b1478ff;  */

void FUN_10b1478e8(long param_1)

{
  __ZNSt13exception_ptrC1ERKS_();
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10b147900; end: 10b147987;  */

long FUN_10b147900(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b14ed08();
  lVar1 = unaff_x19;
  func_0x00010b14f1cc();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b147988; end: 10b1479ab;  */

void FUN_10b147988(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x00010b147508();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10b1479ac; end: 10b1479ff;  */

long FUN_10b1479ac(void)

{
  long lVar1;
  long alStack_30 [2];
  
  FUN_10b147a00(alStack_30);
  func_0x00010b14f420(alStack_30[0] + 0x50);
  __ZNSt3__15mutex4lockEv();
  lVar1 = alStack_30[0];
  FUN_10b147530(alStack_30[0]);
  func_0x00010b14f5e4();
  func_0x00010b14f3e4();
  return lVar1;
}



/* Entry: 10b147a00; end: 10b147a3b;  */

void FUN_10b147a00(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  undefined8 *unaff_x21;
  undefined8 in_register_00005008;
  
  func_0x00010b14edb0();
  func_0x00010b14fed4();
  func_0x00010b14f8d0();
  unaff_x21[1] = in_register_00005008;
  *unaff_x21 = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)();
  return;
}



/* Entry: 10b147a3c; end: 10b147b8f;  */

void FUN_10b147a3c(void)

{
  undefined1 *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x9;
  int extraout_w10;
  undefined1 auStack_b8 [40];
  long lStack_90;
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  
  func_0x00010b14f1e4();
  func_0x00010b150674();
  FUN_10b1473e4();
  func_0x00010b1504e4();
  FUN_10b14740c();
  func_0x00010b147278(auStack_80);
  func_0x00010b147278(auStack_40);
  func_0x00010b14fa0c();
  func_0x00010b14fefc(uStack_48);
  func_0x00010b150624();
  func_0x00010b14efa0();
  func_0x00010b14f400(extraout_x8 + 0x50);
  __ZNSt3__15mutex4lockEv();
  FUN_10b147530();
  if ((int)puStack_30 == 0) {
    func_0x00010b150778();
    FUN_10b147c34();
    func_0x00010b14f694();
    puVar1 = *(undefined1 **)(extraout_x8_00 + 0x98);
    *(undefined8 *)(extraout_x8_00 + 0x98) = extraout_x9;
    if (puVar1 != (undefined1 *)0x0) {
      func_0x00010b14e9f4();
      func_0x00010b150744();
      if (puVar1 != (undefined1 *)0x0) {
        func_0x00010b14e9f4();
      }
    }
  }
  else {
    func_0x00010b150738();
    FUN_10b14740c();
    puVar1 = puStack_30;
  }
  func_0x00010b14f4bc();
  if (lStack_90 != 0) {
    func_0x00010b150644();
    if (extraout_x8_01 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10 != 0);
    }
    func_0x00010b150650();
    FUN_10b147b90();
    puVar1 = auStack_b8;
    func_0x00010b147278();
  }
  func_0x00010b14f1f8();
  func_0x00010b147278();
  func_0x00010b1506d4();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010b14e9f4();
  }
  func_0x00010b14f498();
  func_0x00010b14f5f4();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010b14e9f4();
  }
  func_0x00010b14f6b4();
  return;
}



/* Entry: 10b147b90; end: 10b147c33;  */

void FUN_10b147b90(void)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w12;
  long unaff_x19;
  
  func_0x00010b14f918();
  if (extraout_x9 != 0) {
    do {
      func_0x00010b14ec7c();
    } while (extraout_w12 != 0);
    do {
      func_0x00010b14ee64();
    } while (extraout_w11 != 0);
  }
  func_0x00010b14f1d8();
  FUN_10b147cdc();
  func_0x00010b14f348();
  func_0x00010b14f3e4();
  func_0x000107c27b68(*(undefined8 *)(unaff_x19 + 0x10));
  return;
}


