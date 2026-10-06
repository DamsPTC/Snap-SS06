/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104bf51fc; end: 104bf52d7;  */

undefined8 FUN_104bf51fc(undefined8 param_1,long param_2)

{
  int iVar1;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  if ((bRam0000000113846a30 & 1) == 0) {
    iVar1 = 0x13846a30;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113846a28 = 1;
      uRam0000000113846a20 = 0;
      ___cxa_guard_release(0x113846a30);
    }
  }
  return 0x113846a20;
}



/* Entry: 104bf52d8; end: 104bf5577;  */

void FUN_104bf52d8(ulong param_1,ulong param_2)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000104bf59f0();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136a3908);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136a3908) = 1;
  if ((bVar1 & 1) != 0) goto LAB_104bf532c;
  if ((bRam00000001136a3910 & 1) == 0) goto LAB_104bf534c;
  while( true ) {
    func_0x000108b80888(0x1136a3928,param_1);
    param_2 = param_1;
LAB_104bf532c:
    param_1 = param_2;
    func_0x000104bf59c0();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_104bf534c:
    iVar2 = 0x136a3910;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_104bf5614();
      pcVar3 = "onWindowUpdated";
      func_0x0001003a83dc(&uStack_d0,"onWindowUpdated");
      func_0x0001003b166c(auStack_f0);
      func_0x00010529dde0();
      func_0x0001003adcc0(auStack_98,pcVar3);
      if ((bRam00000001136a3918 & 1) == 0) {
        iVar2 = 0x136a3918;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          FUN_104bf5970();
          func_0x00010b990784(0x1136a3938,0x1136a3948);
          ___cxa_guard_release(0x1136a3918);
        }
      }
      puVar4 = auStack_88;
      func_0x0001003adcc0(puVar4,0x1136a3938);
      func_0x000105294860();
      func_0x0001003adcc0(auStack_78,puVar4);
      FUN_104bdbd48(auStack_e0,auStack_f0,auStack_98,3);
      uStack_68 = uStack_d0;
      uStack_d0 = 0;
      func_0x0001003aef98(auStack_60,auStack_e0);
      pcVar3 = "onWindowInteractionError";
      func_0x0001003a83dc(&uStack_f8,"onWindowInteractionError");
      func_0x0001003b166c(auStack_118);
      func_0x00010529dde0();
      func_0x0001003adcc0(auStack_c8,pcVar3);
      FUN_104bf5970();
      puVar4 = auStack_b8;
      func_0x0001003adcc0(puVar4,0x1136a3948);
      FUN_104bf213c();
      func_0x0001003adcc0(auStack_a8,puVar4);
      FUN_104bdbd48(auStack_108,auStack_118,auStack_c8,3);
      uStack_50 = uStack_f8;
      uStack_f8 = 0;
      func_0x0001003aef98(auStack_48,auStack_108);
      FUN_104bdbd44(0x1136a3928,0x113815df0,1,&uStack_68,2);
      lVar5 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_60 + lVar5 + -8);
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != -0x18);
      func_0x000104bf59e8(auStack_108);
      lVar5 = 0x28;
      do {
        func_0x0001003adc18(auStack_c8 + lVar5);
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != -8);
      func_0x000104bf59e8(auStack_118);
      func_0x0001003a8c94(&uStack_f8);
      func_0x000104bf59e8(auStack_e0);
      lVar5 = 0x28;
      do {
        func_0x0001003adc18(auStack_98 + lVar5);
        lVar5 = lVar5 + -0x10;
        in_ZR = lVar5 == -8;
      } while (!(bool)in_ZR);
      func_0x000104bf59e8(auStack_f0);
      func_0x0001003a8c94(&uStack_d0);
      ___cxa_guard_release(0x1136a3910);
    }
  }
  return;
}



/* Entry: 104bf5578; end: 104bf5613;  */

undefined8 FUN_104bf5578(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113815de8 & 1) == 0) {
    iVar4 = 0x13815de8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_104bf5614();
      lStack_20 = lRam0000000113815df0;
      if (lRam0000000113815df0 != 0) {
        piVar1 = (int *)(lRam0000000113815df0 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x113815dd8,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113815de8);
    }
  }
  return 0x113815dd8;
}



/* Entry: 104bf5614; end: 104bf5667;  */

void FUN_104bf5614(void)

{
  int iVar1;
  
  if ((bRam0000000113815df8 & 1) == 0) {
    iVar1 = 0x13815df8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113815df0,"_djinni_interface_MessageWindowUpdatesListener");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113815df8);
      return;
    }
  }
  return;
}



/* Entry: 104bf5668; end: 104bf5753;  */

long FUN_104bf5668(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_f8 [32];
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined4 uStack_c8;
  undefined2 uStack_c0;
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 auStack_48 [24];
  
  uVar3 = param_3;
  func_0x000104bf59f0();
  func_0x000104bf5a0c();
  if ((param_3 >> 0x20 & 1) == 0) {
    uStack_58 = 0;
    uStack_50 = 1;
  }
  else {
    uStack_58 = CONCAT44(uStack_58._4_4_,(int)param_3);
    uStack_50 = 4;
  }
  uStack_4f = 0;
  func_0x0001052946c4(auStack_48,param_4);
  func_0x000104bf5a18();
  lVar4 = 3;
  FUN_104be6a78();
  func_0x00010b9a8d98(auStack_78);
  lVar5 = 0x20;
  do {
    lVar2 = param_4 + lVar5;
    func_0x00010b9a8d98();
    lVar5 = lVar5 + -0x10;
    bVar1 = lVar5 == -0x10;
  } while (!bVar1);
  func_0x000104bf59c0();
  if (!bVar1) {
    ___stack_chk_fail();
    param_4 = param_4 + 0x20;
    lVar5 = -0x30;
    do {
      func_0x00010b9a8d98(param_4);
      uStack_d8 = (undefined4)uVar3;
      param_4 = param_4 + -0x10;
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != 0);
    __Unwind_Resume(lVar2);
    func_0x000104bf59f0();
    func_0x000104bf5a0c();
    uStack_d0 = 4;
    uStack_c0 = 4;
    uStack_c8 = (undefined4)lVar4;
    func_0x000104bf5a18();
    FUN_104be6a78();
    func_0x00010b9a8d98(auStack_f8);
    lVar5 = 0x20;
    do {
      lVar2 = lVar4 + lVar5;
      func_0x00010b9a8d98();
      lVar5 = lVar5 + -0x10;
      bVar1 = lVar5 == -0x10;
    } while (!bVar1);
    func_0x000104bf59c0();
    if (!bVar1) {
      ___stack_chk_fail();
      lVar5 = 0x20;
      do {
        func_0x00010b9a8d98(lVar4 + lVar5);
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != -0x10);
      __Unwind_Resume(lVar2);
      func_0x000104bf5a00();
      return lVar2;
    }
  }
  return lVar2;
}



/* Entry: 104bf5754; end: 104bf5803;  */

long FUN_104bf5754(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_78 [32];
  undefined4 uStack_58;
  undefined2 uStack_50;
  undefined4 uStack_48;
  undefined2 uStack_40;
  
  func_0x000104bf59f0();
  func_0x000104bf5a0c();
  uStack_50 = 4;
  uStack_40 = 4;
  uStack_48 = (undefined4)param_4;
  uStack_58 = param_3;
  func_0x000104bf5a18();
  FUN_104be6a78();
  func_0x00010b9a8d98(auStack_78);
  lVar3 = 0x20;
  do {
    lVar2 = param_4 + lVar3;
    func_0x00010b9a8d98();
    lVar3 = lVar3 + -0x10;
    bVar1 = lVar3 == -0x10;
  } while (!bVar1);
  func_0x000104bf59c0();
  if (bVar1) {
    return lVar2;
  }
  ___stack_chk_fail();
  lVar3 = 0x20;
  do {
    func_0x00010b9a8d98(param_4 + lVar3);
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x10);
  __Unwind_Resume(lVar2);
  func_0x000104bf5a00();
  return lVar2;
}



/* Entry: 104bf5804; end: 104bf5843;  */

void FUN_104bf5804(void)

{
  func_0x000104bf5a00();
  return;
}



/* Entry: 104bf5844; end: 104bf584f;  */

undefined8 * FUN_104bf5844(undefined8 *param_1)

{
  undefined4 uStack_24;
  
  *param_1 = &PTR_FUN_1107e7df0;
  __ZNSt3__15mutex4lockEv(0x11328ad68);
  uStack_24 = *(undefined4 *)(param_1[1] + 0x18);
  FUN_104be7ab4(0x11328ad18,&uStack_24);
  __ZNSt3__15mutex6unlockEv(0x11328ad68);
  func_0x000104be7d74(param_1 + 5);
  FUN_104be7db4(param_1 + 2);
  FUN_104be7e54(param_1 + 1);
  return param_1;
}



/* Entry: 104bf5850; end: 104bf592b;  */

undefined8 FUN_104bf5850(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_104be16c8(param_1 + 0x88);
  func_0x000104bf5888(param_1 + 0x30);
  func_0x000104bf58b8(param_1 + 0x18);
  func_0x000100292090(param_1);
  func_0x00010066c40c();
  return unaff_x19;
}



/* Entry: 104bf592c; end: 104bf5933;  */

void FUN_104bf592c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x28;
    func_0x000100100fec();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 104bf5934; end: 104bf596f;  */

void FUN_104bf5934(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x28;
    func_0x000100100fec();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 104bf5970; end: 104bf59bf;  */

void FUN_104bf5970(void)

{
  int iVar1;
  
  if ((bRam00000001136a3920 & 1) == 0) {
    iVar1 = 0x136a3920;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1136a3948);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1136a3920);
      return;
    }
  }
  return;
}



/* Entry: 104bf59c0; end: 104bf5a2b;  */

void FUN_104bf59c0(void)

{
  return;
}



/* Entry: 104bf5a2c; end: 104bf5b9f;  */

void FUN_104bf5a2c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x20;
  undefined4 uVar3;
  undefined8 unaff_x23;
  undefined8 *in_stack_00000000;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000020;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  func_0x000104bfa7f4();
  func_0x000104bfa478();
  func_0x000104bfa634();
  func_0x000104bfa63c(&UNK_10dd5fffd,in_stack_00000000);
  func_0x000104bfa4f0();
  if (in_stack_00000000 == (undefined8 *)0x0) {
    func_0x000104bfa0b0();
    goto LAB_104bf5b74;
  }
  func_0x000104bfa10c(in_stack_00000000,&PTR_DAT_1107e6e38);
  if (in_stack_00000000 != (undefined8 *)0x0) {
    if ((in_stack_00000000[1] != 0) && (*(long *)(in_stack_00000000[1] + 0x10) != 0)) {
      do {
        func_0x000104bfa0c0();
      } while (extraout_w11 != 0);
    }
    func_0x000104bfa1c4();
    func_0x000104bfa3b0();
    goto LAB_104bf5b74;
  }
  func_0x000104bfa244();
  func_0x000104bfa6b0();
  func_0x000104bfa08c();
  puVar1 = in_stack_00000000;
  if (in_stack_00000000 == (undefined8 *)0x0) {
    uVar3 = 1;
LAB_104bf5afc:
    func_0x000104bfa6a4();
    FUN_104be80b0();
    if (in_stack_00000000 == (undefined8 *)0x0) {
      func_0x000104bfa688();
      func_0x000104bfa554();
      in_stack_00000020 = uVar3;
      func_0x000104bfa4d8();
      func_0x000104bfa25c(unaff_x20 + 0x10);
      puVar2 = puVar1 + 2;
      *puVar2 = unaff_x23;
      *puVar1 = 0;
      puVar1[1] = 0;
      FUN_104bfa180(in_stack_00000010);
      func_0x000104bfa364();
      if (((ulong)puVar2 & 1) != 0) {
        in_stack_00000038 = 0;
      }
      func_0x000104bfa43c();
      puVar1 = &stack0x00000010;
    }
    else {
      func_0x000104bfa578(in_stack_00000030);
      func_0x000104bfa1a4();
      puVar1 = &stack0x00000038;
    }
    func_0x000104bdc2a0(puVar1);
    func_0x000104bfa324();
    puVar1 = &stack0x00000030;
  }
  else {
    uVar3 = *(undefined4 *)(in_stack_00000000 + 5);
    func_0x000104bfa358();
    if (in_stack_00000038 == 0) {
      func_0x000104bfa330();
      goto LAB_104bf5afc;
    }
    if (*(long *)(in_stack_00000038 + 0x10) != 0) {
      do {
        func_0x000104bfa0c0();
      } while (extraout_w11_00 != 0);
    }
    func_0x000104bfa1b4();
    func_0x000104bfa3f4();
    puVar1 = &stack0x00000038;
  }
  FUN_104be7e54(puVar1);
  func_0x000104bfa250();
LAB_104bf5b74:
  FUN_104bef3b8();
  return;
}



/* Entry: 104bf5ba0; end: 104bf5d2b;  */

void FUN_104bf5ba0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *unaff_x20;
  long *plVar3;
  undefined4 uVar4;
  undefined8 unaff_x23;
  undefined8 *in_stack_00000000;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000020;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  func_0x000104bfa7f4();
  func_0x000104bfa03c();
  plVar3 = (long *)*unaff_x20;
  func_0x00010b9a9518();
  (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
  func_0x000104bfa63c(&UNK_10dd6003f,in_stack_00000000);
  func_0x000104bfa4f0();
  if (in_stack_00000000 == (undefined8 *)0x0) {
    func_0x000104bfa0b0();
    goto LAB_104bf5d00;
  }
  func_0x000104bfa10c(in_stack_00000000,&PTR_DAT_1107e7780);
  if (in_stack_00000000 != (undefined8 *)0x0) {
    if ((in_stack_00000000[1] != 0) && (*(long *)(in_stack_00000000[1] + 0x10) != 0)) {
      do {
        func_0x000104bfa0c0();
      } while (extraout_w11 != 0);
    }
    func_0x000104bfa1c4();
    func_0x000104bfa3b0();
    goto LAB_104bf5d00;
  }
  func_0x000104bfa244();
  func_0x000104bfa6b0();
  func_0x000104bfa08c();
  puVar1 = in_stack_00000000;
  if (in_stack_00000000 == (undefined8 *)0x0) {
    uVar4 = 1;
LAB_104bf5c88:
    func_0x000104bfa6a4();
    FUN_104bf0534();
    if (in_stack_00000000 == (undefined8 *)0x0) {
      func_0x000104bfa688();
      func_0x000104bfa554();
      in_stack_00000020 = uVar4;
      func_0x000104bfa4d8();
      func_0x000104bfa25c(plVar3 + 2);
      puVar2 = puVar1 + 2;
      *puVar2 = unaff_x23;
      *puVar1 = 0;
      puVar1[1] = 0;
      FUN_104bfa180(in_stack_00000010);
      func_0x000104bfa364();
      if (((ulong)puVar2 & 1) != 0) {
        in_stack_00000038 = 0;
      }
      func_0x000104bfa43c();
      puVar1 = &stack0x00000010;
    }
    else {
      func_0x000104bfa578(in_stack_00000030);
      func_0x000104bfa1a4();
      puVar1 = &stack0x00000038;
    }
    func_0x000104bdc2a0(puVar1);
    func_0x000104bfa324();
    puVar1 = &stack0x00000030;
  }
  else {
    uVar4 = *(undefined4 *)(in_stack_00000000 + 5);
    func_0x000104bfa358();
    if (in_stack_00000038 == 0) {
      func_0x000104bfa330();
      goto LAB_104bf5c88;
    }
    if (*(long *)(in_stack_00000038 + 0x10) != 0) {
      do {
        func_0x000104bfa0c0();
      } while (extraout_w11_00 != 0);
    }
    func_0x000104bfa1b4();
    func_0x000104bfa3f4();
    puVar1 = &stack0x00000038;
  }
  FUN_104be7e54(puVar1);
  func_0x000104bfa250();
LAB_104bf5d00:
  func_0x000104bf10f4();
  return;
}



/* Entry: 104bf5d2c; end: 104bf5e9f;  */

void FUN_104bf5d2c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x20;
  undefined4 uVar3;
  undefined8 unaff_x23;
  undefined8 *in_stack_00000000;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000020;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  func_0x000104bfa7f4();
  func_0x000104bfa478();
  func_0x000104bfa634();
  func_0x000104bfa63c(&UNK_10dd60079,in_stack_00000000);
  func_0x000104bfa4f0();
  if (in_stack_00000000 == (undefined8 *)0x0) {
    func_0x000104bfa0b0();
    goto LAB_104bf5e74;
  }
  func_0x000104bfa10c(in_stack_00000000,&PTR_DAT_1107e7960);
  if (in_stack_00000000 != (undefined8 *)0x0) {
    if ((in_stack_00000000[1] != 0) && (*(long *)(in_stack_00000000[1] + 0x10) != 0)) {
      do {
        func_0x000104bfa0c0();
      } while (extraout_w11 != 0);
    }
    func_0x000104bfa1c4();
    func_0x000104bfa3b0();
    goto LAB_104bf5e74;
  }
  func_0x000104bfa244();
  func_0x000104bfa6b0();
  func_0x000104bfa08c();
  puVar1 = in_stack_00000000;
  if (in_stack_00000000 == (undefined8 *)0x0) {
    uVar3 = 1;
LAB_104bf5dfc:
    func_0x000104bfa6a4();
    FUN_104bf222c();
    if (in_stack_00000000 == (undefined8 *)0x0) {
      func_0x000104bfa688();
      func_0x000104bfa554();
      in_stack_00000020 = uVar3;
      func_0x000104bfa4d8();
      func_0x000104bfa25c(unaff_x20 + 0x10);
      puVar2 = puVar1 + 2;
      *puVar2 = unaff_x23;
      *puVar1 = 0;
      puVar1[1] = 0;
      FUN_104bfa180(in_stack_00000010);
      func_0x000104bfa364();
      if (((ulong)puVar2 & 1) != 0) {
        in_stack_00000038 = 0;
      }
      func_0x000104bfa43c();
      puVar1 = &stack0x00000010;
    }
    else {
      func_0x000104bfa578(in_stack_00000030);
      func_0x000104bfa1a4();
      puVar1 = &stack0x00000038;
    }
    func_0x000104bdc2a0(puVar1);
    func_0x000104bfa324();
    puVar1 = &stack0x00000030;
  }
  else {
    uVar3 = *(undefined4 *)(in_stack_00000000 + 5);
    func_0x000104bfa358();
    if (in_stack_00000038 == 0) {
      func_0x000104bfa330();
      goto LAB_104bf5dfc;
    }
    if (*(long *)(in_stack_00000038 + 0x10) != 0) {
      do {
        func_0x000104bfa0c0();
      } while (extraout_w11_00 != 0);
    }
    func_0x000104bfa1b4();
    func_0x000104bfa3f4();
    puVar1 = &stack0x00000038;
  }
  FUN_104be7e54(puVar1);
  func_0x000104bfa250();
LAB_104bf5e74:
  func_0x000104bf3c24();
  return;
}



/* Entry: 104bf5ea0; end: 104bf6013;  */

void FUN_104bf5ea0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x20;
  undefined4 uVar3;
  undefined8 unaff_x23;
  undefined8 *in_stack_00000000;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000020;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  func_0x000104bfa7f4();
  func_0x000104bfa478();
  func_0x000104bfa634();
  func_0x000104bfa63c(&UNK_10dd600b5,in_stack_00000000);
  func_0x000104bfa4f0();
  if (in_stack_00000000 == (undefined8 *)0x0) {
    func_0x000104bfa0b0();
    goto LAB_104bf5fe8;
  }
  func_0x000104bfa10c(in_stack_00000000,&PTR_DAT_1107e7ba0);
  if (in_stack_00000000 != (undefined8 *)0x0) {
    if ((in_stack_00000000[1] != 0) && (*(long *)(in_stack_00000000[1] + 0x10) != 0)) {
      do {
        func_0x000104bfa0c0();
      } while (extraout_w11 != 0);
    }
    func_0x000104bfa1c4();
    func_0x000104bfa3b0();
    goto LAB_104bf5fe8;
  }
  func_0x000104bfa244();
  func_0x000104bfa6b0();
  func_0x000104bfa08c();
  puVar1 = in_stack_00000000;
  if (in_stack_00000000 == (undefined8 *)0x0) {
    uVar3 = 1;
LAB_104bf5f70:
    func_0x000104bfa6a4();
    FUN_104bf452c();
    if (in_stack_00000000 == (undefined8 *)0x0) {
      func_0x000104bfa688();
      func_0x000104bfa554();
      in_stack_00000020 = uVar3;
      func_0x000104bfa4d8();
      func_0x000104bfa25c(unaff_x20 + 0x10);
      puVar2 = puVar1 + 2;
      *puVar2 = unaff_x23;
      *puVar1 = 0;
      puVar1[1] = 0;
      FUN_104bfa180(in_stack_00000010);
      func_0x000104bfa364();
      if (((ulong)puVar2 & 1) != 0) {
        in_stack_00000038 = 0;
      }
      func_0x000104bfa43c();
      puVar1 = &stack0x00000010;
    }
    else {
      func_0x000104bfa578(in_stack_00000030);
      func_0x000104bfa1a4();
      puVar1 = &stack0x00000038;
    }
    func_0x000104bdc2a0(puVar1);
    func_0x000104bfa324();
    puVar1 = &stack0x00000030;
  }
  else {
    uVar3 = *(undefined4 *)(in_stack_00000000 + 5);
    func_0x000104bfa358();
    if (in_stack_00000038 == 0) {
      func_0x000104bfa330();
      goto LAB_104bf5f70;
    }
    if (*(long *)(in_stack_00000038 + 0x10) != 0) {
      do {
        func_0x000104bfa0c0();
      } while (extraout_w11_00 != 0);
    }
    func_0x000104bfa1b4();
    func_0x000104bfa3f4();
    puVar1 = &stack0x00000038;
  }
  FUN_104be7e54(puVar1);
  func_0x000104bfa250();
LAB_104bf5fe8:
  FUN_104bf4fd0();
  return;
}



/* Entry: 104bf6014; end: 104bf6187;  */

void FUN_104bf6014(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x20;
  undefined4 uVar3;
  undefined8 unaff_x23;
  undefined8 *in_stack_00000000;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000020;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  func_0x000104bfa7f4();
  func_0x000104bfa478();
  func_0x000104bfa634();
  func_0x000104bfa63c(&UNK_10dd600f8,in_stack_00000000);
  func_0x000104bfa4f0();
  if (in_stack_00000000 == (undefined8 *)0x0) {
    func_0x000104bfa0b0();
    goto LAB_104bf615c;
  }
  func_0x000104bfa10c(in_stack_00000000,&PTR_DAT_1107e7c40);
  if (in_stack_00000000 != (undefined8 *)0x0) {
    if ((in_stack_00000000[1] != 0) && (*(long *)(in_stack_00000000[1] + 0x10) != 0)) {
      do {
        func_0x000104bfa0c0();
      } while (extraout_w11 != 0);
    }
    func_0x000104bfa1c4();
    func_0x000104bfa3b0();
    goto LAB_104bf615c;
  }
  func_0x000104bfa244();
  func_0x000104bfa6b0();
  func_0x000104bfa08c();
  puVar1 = in_stack_00000000;
  if (in_stack_00000000 == (undefined8 *)0x0) {
    uVar3 = 1;
LAB_104bf60e4:
    func_0x000104bfa6a4();
    FUN_104bfafb8();
    if (in_stack_00000000 == (undefined8 *)0x0) {
      func_0x000104bfa688();
      func_0x000104bfa554();
      in_stack_00000020 = uVar3;
      func_0x000104bfa4d8();
      func_0x000104bfa25c(unaff_x20 + 0x10);
      puVar2 = puVar1 + 2;
      *puVar2 = unaff_x23;
      *puVar1 = 0;
      puVar1[1] = 0;
      FUN_104bfa180(in_stack_00000010);
      func_0x000104bfa364();
      if (((ulong)puVar2 & 1) != 0) {
        in_stack_00000038 = 0;
      }
      func_0x000104bfa43c();
      puVar1 = &stack0x00000010;
    }
    else {
      func_0x000104bfa578(in_stack_00000030);
      func_0x000104bfa1a4();
      puVar1 = &stack0x00000038;
    }
    func_0x000104bdc2a0(puVar1);
    func_0x000104bfa324();
    puVar1 = &stack0x00000030;
  }
  else {
    uVar3 = *(undefined4 *)(in_stack_00000000 + 5);
    func_0x000104bfa358();
    if (in_stack_00000038 == 0) {
      func_0x000104bfa330();
      goto LAB_104bf60e4;
    }
    if (*(long *)(in_stack_00000038 + 0x10) != 0) {
      do {
        func_0x000104bfa0c0();
      } while (extraout_w11_00 != 0);
    }
    func_0x000104bfa1b4();
    func_0x000104bfa3f4();
    puVar1 = &stack0x00000038;
  }
  FUN_104be7e54(puVar1);
  func_0x000104bfa250();
LAB_104bf615c:
  func_0x000104bf8338();
  return;
}



/* Entry: 104bf6188; end: 104bf62fb;  */

void FUN_104bf6188(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x20;
  undefined4 uVar3;
  undefined8 unaff_x23;
  undefined8 *in_stack_00000000;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000020;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  func_0x000104bfa7f4();
  func_0x000104bfa478();
  func_0x000104bfa634();
  func_0x000104bfa63c(&UNK_10dd60132,in_stack_00000000);
  func_0x000104bfa4f0();
  if (in_stack_00000000 == (undefined8 *)0x0) {
    func_0x000104bfa0b0();
    goto LAB_104bf62d0;
  }
  func_0x000104bfa10c(in_stack_00000000,&PTR_DAT_1107e8b78);
  if (in_stack_00000000 != (undefined8 *)0x0) {
    if ((in_stack_00000000[1] != 0) && (*(long *)(in_stack_00000000[1] + 0x10) != 0)) {
      do {
        func_0x000104bfa0c0();
      } while (extraout_w11 != 0);
    }
    func_0x000104bfa1c4();
    func_0x000104bfa3b0();
    goto LAB_104bf62d0;
  }
  func_0x000104bfa244();
  func_0x000104bfa6b0();
  func_0x000104bfa08c();
  puVar1 = in_stack_00000000;
  if (in_stack_00000000 == (undefined8 *)0x0) {
    uVar3 = 1;
LAB_104bf6258:
    func_0x000104bfa6a4();
    func_0x0001052c003c();
    if (in_stack_00000000 == (undefined8 *)0x0) {
      func_0x000104bfa688();
      func_0x000104bfa554();
      in_stack_00000020 = uVar3;
      func_0x000104bfa4d8();
      func_0x000104bfa25c(unaff_x20 + 0x10);
      puVar2 = puVar1 + 2;
      *puVar2 = unaff_x23;
      *puVar1 = 0;
      puVar1[1] = 0;
      FUN_104bfa180(in_stack_00000010);
      func_0x000104bfa364();
      if (((ulong)puVar2 & 1) != 0) {
        in_stack_00000038 = 0;
      }
      func_0x000104bfa43c();
      puVar1 = &stack0x00000010;
    }
    else {
      func_0x000104bfa578(in_stack_00000030);
      func_0x000104bfa1a4();
      puVar1 = &stack0x00000038;
    }
    func_0x000104bdc2a0(puVar1);
    func_0x000104bfa324();
    puVar1 = &stack0x00000030;
  }
  else {
    uVar3 = *(undefined4 *)(in_stack_00000000 + 5);
    func_0x000104bfa358();
    if (in_stack_00000038 == 0) {
      func_0x000104bfa330();
      goto LAB_104bf6258;
    }
    if (*(long *)(in_stack_00000038 + 0x10) != 0) {
      do {
        func_0x000104bfa0c0();
      } while (extraout_w11_00 != 0);
    }
    func_0x000104bfa1b4();
    func_0x000104bfa3f4();
    puVar1 = &stack0x00000038;
  }
  FUN_104be7e54(puVar1);
  func_0x000104bfa250();
LAB_104bf62d0:
  func_0x000104be5d84();
  return;
}



/* Entry: 104bf62fc; end: 104bf63ff;  */

void FUN_104bf62fc(code *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  code *pcVar2;
  int iVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 *puVar4;
  undefined **extraout_x8_03;
  undefined **ppuVar5;
  long extraout_x8_04;
  ulong extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined8 extraout_x9;
  long extraout_x9_00;
  undefined8 uVar6;
  long *extraout_x9_01;
  long *extraout_x9_02;
  long *extraout_x9_03;
  long *extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long lVar7;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long extraout_x10;
  code *extraout_x10_00;
  code *extraout_x10_01;
  long extraout_x10_02;
  long extraout_x10_03;
  code *extraout_x10_04;
  code *extraout_x10_05;
  code *pcVar8;
  int extraout_w11;
  int extraout_w11_00;
  undefined4 extraout_w11_01;
  undefined4 extraout_var;
  code *pcVar9;
  long *plVar10;
  undefined8 *unaff_x24;
  code *unaff_x26;
  code *unaff_x27;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_48;
  
  pcVar2 = param_1;
  func_0x000104bfa458();
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  plVar10 = (long *)param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  uStack_98 = uStack_b0;
  uStack_48 = extraout_x8;
  func_0x000104bfa488();
  pcStack_78 = FUN_104bf9b64;
  ppuStack_70 = &PTR_FUN_1107e8f48;
  uStack_60 = uStack_a8;
  uStack_68 = uStack_b0;
  uStack_90 = 0;
  uStack_88 = 0;
  plStack_58 = plVar10;
  func_0x00010b9ac22c();
  pcStack_80 = pcVar2;
  func_0x000104bfa4f8(ppuStack_70);
  do {
    func_0x000104bfa29c();
  } while (extraout_w10 != 0);
  iVar3 = (int)&pcStack_78;
  pcStack_78 = pcVar2;
  func_0x00010b9a8ef8(param_1);
  FUN_104bda388(&pcStack_78);
  FUN_104bda3d0(&pcStack_80);
  func_0x000104bfa4b8();
  func_0x000104bfa2ac(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    func_0x000104bfa3d8();
  }
  else {
    func_0x000104bfa4f8(ppuStack_70);
    __ZdlPv(pcVar2);
  }
  func_0x000104bfa404();
  func_0x000104bfa6cc();
  func_0x000104bfa03c();
  func_0x000104bfa524();
  if (!(bool)in_CY || (bool)in_ZR) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    goto LAB_104bf6680;
  }
  func_0x000104bfa430();
  if (pcStack_78 == (code *)0x0) {
    pcVar9 = (code *)0x0;
    pcVar8 = pcStack_78;
  }
  else {
    pcVar9 = pcStack_78;
    func_0x000104bfa6e8();
    func_0x000104bfa614();
    pcVar8 = pcVar9;
  }
  func_0x000104bfa3b0();
  if (pcVar9 != (code *)0x0) {
    func_0x000104bfa5e0();
    if (extraout_x8_00 != 0) {
      do {
        func_0x000104bfa0a0();
      } while (extraout_w10_00 != 0);
    }
    goto LAB_104bf6680;
  }
  func_0x000104bfa418();
  func_0x000104bfa7e8();
  uVar6 = 0;
  if (extraout_x8_01 != 0) {
    do {
      func_0x000104bfa3c8();
      uVar6 = extraout_x8_02;
    } while (extraout_w11 != 0);
  }
  uStack_88 = uVar6;
  func_0x000104bfa390();
  func_0x000104bfa5d0();
  func_0x000104bfa208();
  if (pcVar8 == (code *)0x0) {
LAB_104bf64e8:
    pcVar9 = pcStack_80;
    func_0x000104bfa624();
    func_0x000104bfa588(&PTR_FUN_1107e8b98);
    ppuVar5 = &PTR_DAT_1107e8be8;
    if (pcVar9 == (code *)0x0) {
      uVar6 = 0;
LAB_104bf653c:
      *unaff_x24 = ppuVar5;
      uStack_a0 = uVar6;
    }
    else {
      func_0x000104bfa7dc();
      ppuVar5 = extraout_x8_03;
      uVar6 = extraout_x9;
      if (extraout_x10 == 0) goto LAB_104bf653c;
      do {
        func_0x000104bfa0c0();
      } while (extraout_w11_00 != 0);
      func_0x000104bfa6bc();
      if (extraout_x9_00 != 0) {
        do {
          func_0x000104bfa0a0();
        } while (extraout_w10_02 != 0);
      }
    }
    func_0x000104bfa7d0();
    func_0x000104bfa444();
    func_0x000104bfa3b0();
    func_0x000104bfa7c4(&UNK_1107e9108);
    *plVar10 = extraout_x8_04 + 0x48;
    func_0x000104bfa3f4();
    func_0x000104bfa7b8();
    if (pcVar9 != (code *)0x0) {
      func_0x000104bfa608();
      if ((bool)in_ZR) {
        func_0x000104bfa794();
      }
      else {
        func_0x000104bfa7ac();
        if (!(bool)in_CY || (bool)in_ZR) {
          func_0x000104bfa7a0();
        }
      }
      func_0x000104bfa788();
      uVar1 = in_ZR;
      plVar10 = extraout_x9_01;
      if (extraout_x9_01 != (long *)0x0) {
        do {
          while( true ) {
            in_ZR = uVar1;
            if (*plVar10 == 0) goto LAB_104bf65d8;
            func_0x000104bfa77c();
            if (!(bool)in_ZR) break;
            func_0x000104bfa770();
            uVar1 = 0;
            plVar10 = extraout_x9_03;
            if ((bool)in_ZR) goto LAB_104bf666c;
          }
          plVar10 = extraout_x9_02;
          if (((ulong)pcVar9 & extraout_x8_05) == 0) {
            pcVar8 = (code *)((ulong)extraout_x10_00 & extraout_x8_05);
          }
          else {
            pcVar8 = extraout_x10_00;
            if (pcVar9 <= extraout_x10_00) {
              func_0x000104bfa5fc();
              plVar10 = extraout_x9_04;
              pcVar8 = extraout_x10_01;
            }
          }
          in_NG = (long)pcVar8 - (long)unaff_x27 < 0;
          in_ZR = pcVar8 == unaff_x27;
          uVar1 = in_ZR;
        } while ((bool)in_ZR);
      }
    }
LAB_104bf65d8:
    func_0x000104bfa61c();
    func_0x000104bfa144();
    do {
      func_0x000104bfa0a0();
    } while (extraout_w10_03 != 0);
    func_0x000104bfa3e0();
    if ((pcVar9 == (code *)0x0) || (func_0x000104bfa544(), (bool)in_NG)) {
      func_0x000104bfa30c();
      in_ZR = pcVar9 == (code *)0x3;
      func_0x000104bfa12c();
      func_0x000104bfa2e4();
      func_0x000104bfa534();
      if ((bool)in_ZR) {
        func_0x000104bfa758();
      }
      else {
        in_ZR = pcVar9 == unaff_x26;
        if (pcVar9 <= unaff_x26) {
          func_0x000104bfa74c();
        }
      }
    }
    func_0x000104bfa55c();
    if (extraout_x10_02 == 0) {
      func_0x000104bfa21c();
      if (extraout_x10_03 != 0) {
        func_0x000104bfa514();
        uVar6 = extraout_x8_06;
        lVar7 = extraout_x9_05;
        if ((bool)in_ZR) {
          pcVar8 = (code *)((ulong)extraout_x10_04 & CONCAT44(extraout_var,extraout_w11_01));
        }
        else {
          pcVar8 = extraout_x10_04;
          if (pcVar9 <= extraout_x10_04) {
            func_0x000104bfa5fc();
            uVar6 = extraout_x8_07;
            lVar7 = extraout_x9_06;
            pcVar8 = extraout_x10_05;
          }
        }
        *(undefined8 *)(lVar7 + (long)pcVar8 * 8) = uVar6;
      }
    }
    else {
      func_0x000104bfa468();
    }
    func_0x000104bfa168();
LAB_104bf666c:
    func_0x000104bfa504();
    func_0x000104bf835c();
  }
  else {
    func_0x000104bfa424();
    if (pcStack_78 == (code *)0x0) {
      func_0x000104bfa4a8();
      goto LAB_104bf64e8;
    }
    pcVar9 = pcStack_78;
    func_0x000104bfa5a8();
    func_0x000104bfa62c();
    puVar4 = (undefined8 *)0x0;
    if ((pcVar9 != (code *)0x0) && (&uStack_98 != (undefined8 *)0x0)) {
      do {
        func_0x000104bfa0a0();
        puVar4 = &uStack_98;
      } while (extraout_w10_01 != 0);
    }
    func_0x000104bfa598(puVar4);
    func_0x000104bf835c();
    func_0x000104bfa4a8();
  }
  func_0x000104bfa39c();
  func_0x000104bfa668();
  func_0x000104bfa670();
LAB_104bf6680:
  func_0x000104bfa2cc(*(undefined8 *)(*(long *)pcVar2 + 0x40));
  FUN_104be16e8(&uStack_b0);
  func_0x000104bfa0b0();
  return;
}



/* Entry: 104bf6400; end: 104bf66d3;  */

void FUN_104bf6400(void)

{
  undefined1 uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined **extraout_x8_01;
  undefined **ppuVar3;
  long extraout_x8_02;
  ulong extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 uVar4;
  long extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  long *extraout_x9_03;
  long *plVar5;
  long extraout_x9_04;
  long extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  long extraout_x10_02;
  long extraout_x10_03;
  ulong extraout_x10_04;
  ulong extraout_x10_05;
  ulong uVar6;
  int extraout_w11;
  int extraout_w11_00;
  undefined4 extraout_w11_01;
  undefined4 extraout_var;
  long *unaff_x20;
  long unaff_x21;
  long lVar7;
  long *unaff_x23;
  undefined8 *unaff_x24;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong in_stack_00000030;
  long in_stack_00000038;
  
  func_0x000104bfa6cc();
  func_0x000104bfa03c();
  func_0x000104bfa524();
  if (!(bool)in_CY || (bool)in_ZR) goto LAB_104bf6680;
  func_0x000104bfa430();
  if (in_stack_00000038 == 0) {
    lVar7 = 0;
    lVar2 = in_stack_00000038;
  }
  else {
    lVar7 = in_stack_00000038;
    func_0x000104bfa6e8();
    func_0x000104bfa614();
    lVar2 = lVar7;
  }
  func_0x000104bfa3b0();
  if (lVar7 != 0) {
    func_0x000104bfa5e0();
    if (extraout_x8 != 0) {
      do {
        func_0x000104bfa0a0();
      } while (extraout_w10 != 0);
    }
    goto LAB_104bf6680;
  }
  func_0x000104bfa418();
  func_0x000104bfa7e8();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000104bfa3c8();
    } while (extraout_w11 != 0);
  }
  func_0x000104bfa390();
  func_0x000104bfa5d0();
  func_0x000104bfa208();
  if (lVar2 == 0) {
LAB_104bf64e8:
    func_0x000104bfa624();
    func_0x000104bfa588(&PTR_FUN_1107e8b98);
    ppuVar3 = &PTR_DAT_1107e8be8;
    if ((in_stack_00000030 == 0) ||
       (func_0x000104bfa7dc(), ppuVar3 = extraout_x8_01, extraout_x10 == 0)) {
      *unaff_x24 = ppuVar3;
    }
    else {
      do {
        func_0x000104bfa0c0();
      } while (extraout_w11_00 != 0);
      func_0x000104bfa6bc();
      if (extraout_x9 != 0) {
        do {
          func_0x000104bfa0a0();
        } while (extraout_w10_01 != 0);
      }
    }
    func_0x000104bfa7d0();
    func_0x000104bfa444();
    func_0x000104bfa3b0();
    func_0x000104bfa7c4(&UNK_1107e9108);
    *unaff_x23 = extraout_x8_02 + 0x48;
    func_0x000104bfa3f4();
    func_0x000104bfa7b8();
    if (in_stack_00000030 != 0) {
      func_0x000104bfa608();
      if ((bool)in_ZR) {
        func_0x000104bfa794();
      }
      else {
        func_0x000104bfa7ac();
        if (!(bool)in_CY || (bool)in_ZR) {
          func_0x000104bfa7a0();
        }
      }
      func_0x000104bfa788();
      uVar1 = in_ZR;
      plVar5 = extraout_x9_00;
      if (extraout_x9_00 != (long *)0x0) {
        do {
          while( true ) {
            in_ZR = uVar1;
            if (*plVar5 == 0) goto LAB_104bf65d8;
            func_0x000104bfa77c();
            if (!(bool)in_ZR) break;
            func_0x000104bfa770();
            uVar1 = 0;
            plVar5 = extraout_x9_02;
            if ((bool)in_ZR) goto LAB_104bf666c;
          }
          plVar5 = extraout_x9_01;
          if ((in_stack_00000030 & extraout_x8_03) == 0) {
            uVar6 = extraout_x10_00 & extraout_x8_03;
          }
          else {
            uVar6 = extraout_x10_00;
            if (in_stack_00000030 <= extraout_x10_00) {
              func_0x000104bfa5fc();
              plVar5 = extraout_x9_03;
              uVar6 = extraout_x10_01;
            }
          }
          in_NG = (long)(uVar6 - unaff_x27) < 0;
          in_ZR = uVar6 == unaff_x27;
          uVar1 = in_ZR;
        } while ((bool)in_ZR);
      }
    }
LAB_104bf65d8:
    func_0x000104bfa61c();
    func_0x000104bfa144();
    do {
      func_0x000104bfa0a0();
    } while (extraout_w10_02 != 0);
    func_0x000104bfa3e0();
    if ((in_stack_00000030 == 0) || (func_0x000104bfa544(), (bool)in_NG)) {
      func_0x000104bfa30c();
      in_ZR = in_stack_00000030 == 3;
      func_0x000104bfa12c();
      func_0x000104bfa2e4();
      func_0x000104bfa534();
      if ((bool)in_ZR) {
        func_0x000104bfa758();
      }
      else {
        in_ZR = in_stack_00000030 == unaff_x26;
        if (in_stack_00000030 <= unaff_x26) {
          func_0x000104bfa74c();
        }
      }
    }
    func_0x000104bfa55c();
    if (extraout_x10_02 == 0) {
      func_0x000104bfa21c();
      if (extraout_x10_03 != 0) {
        func_0x000104bfa514();
        uVar4 = extraout_x8_04;
        lVar7 = extraout_x9_04;
        if ((bool)in_ZR) {
          uVar6 = extraout_x10_04 & CONCAT44(extraout_var,extraout_w11_01);
        }
        else {
          uVar6 = extraout_x10_04;
          if (in_stack_00000030 <= extraout_x10_04) {
            func_0x000104bfa5fc();
            uVar4 = extraout_x8_05;
            lVar7 = extraout_x9_05;
            uVar6 = extraout_x10_05;
          }
        }
        *(undefined8 *)(lVar7 + uVar6 * 8) = uVar4;
      }
    }
    else {
      func_0x000104bfa468();
    }
    func_0x000104bfa168();
LAB_104bf666c:
    func_0x000104bfa504();
    func_0x000104bf835c();
  }
  else {
    func_0x000104bfa424();
    if (in_stack_00000038 == 0) {
      func_0x000104bfa4a8();
      goto LAB_104bf64e8;
    }
    func_0x000104bfa5a8();
    func_0x000104bfa62c();
    if ((in_stack_00000038 != 0) && (unaff_x21 != 0)) {
      do {
        func_0x000104bfa0a0();
      } while (extraout_w10_00 != 0);
    }
    func_0x000104bfa598();
    func_0x000104bf835c();
    func_0x000104bfa4a8();
  }
  func_0x000104bfa39c();
  func_0x000104bfa668();
  func_0x000104bfa670();
LAB_104bf6680:
  func_0x000104bfa2cc(*(undefined8 *)(*unaff_x20 + 0x40));
  FUN_104be16e8();
  func_0x000104bfa0b0();
  return;
}



/* Entry: 104bf66d4; end: 104bf6717;  */

void FUN_104bf66d4(void)

{
  long *unaff_x20;
  undefined1 auStack_30 [16];
  
  func_0x000104bfa03c();
  func_0x000104bfa678();
  func_0x000104bfa2cc(*(undefined8 *)(*unaff_x20 + 0x48));
  FUN_104be17c4(auStack_30);
  func_0x000104bfa0b0();
  return;
}



/* Entry: 104bf6718; end: 104bf675b;  */

void FUN_104bf6718(void)

{
  long *unaff_x20;
  undefined1 auStack_30 [16];
  
  func_0x000104bfa03c();
  func_0x000104bfa678();
  func_0x000104bfa2cc(*(undefined8 *)(*unaff_x20 + 0x50));
  FUN_104be17c4(auStack_30);
  func_0x000104bfa0b0();
  return;
}



/* Entry: 104bf675c; end: 104bf6a2f;  */

void FUN_104bf675c(void)

{
  undefined1 uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined **extraout_x8_01;
  undefined **ppuVar3;
  long extraout_x8_02;
  ulong extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 uVar4;
  long extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  long *extraout_x9_03;
  long *plVar5;
  long extraout_x9_04;
  long extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  long extraout_x10_02;
  long extraout_x10_03;
  ulong extraout_x10_04;
  ulong extraout_x10_05;
  ulong uVar6;
  int extraout_w11;
  int extraout_w11_00;
  undefined4 extraout_w11_01;
  undefined4 extraout_var;
  long *unaff_x20;
  long unaff_x21;
  long lVar7;
  long *unaff_x23;
  undefined8 *unaff_x24;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong in_stack_00000030;
  long in_stack_00000038;
  
  func_0x000104bfa6cc();
  func_0x000104bfa03c();
  func_0x000104bfa524();
  if (!(bool)in_CY || (bool)in_ZR) goto LAB_104bf69dc;
  func_0x000104bfa430();
  if (in_stack_00000038 == 0) {
    lVar7 = 0;
    lVar2 = in_stack_00000038;
  }
  else {
    lVar7 = in_stack_00000038;
    func_0x000104bfa6e8();
    func_0x000104bfa614();
    lVar2 = lVar7;
  }
  func_0x000104bfa3b0();
  if (lVar7 != 0) {
    func_0x000104bfa5e0();
    if (extraout_x8 != 0) {
      do {
        func_0x000104bfa0a0();
      } while (extraout_w10 != 0);
    }
    goto LAB_104bf69dc;
  }
  func_0x000104bfa418();
  func_0x000104bfa7e8();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000104bfa3c8();
    } while (extraout_w11 != 0);
  }
  func_0x000104bfa390();
  func_0x000104bfa5d0();
  func_0x000104bfa208();
  if (lVar2 == 0) {
LAB_104bf6844:
    func_0x000104bfa624();
    func_0x000104bfa588(&PTR_FUN_1107e8ca0);
    ppuVar3 = &PTR_DAT_1107e8cf0;
    if ((in_stack_00000030 == 0) ||
       (func_0x000104bfa7dc(), ppuVar3 = extraout_x8_01, extraout_x10 == 0)) {
      *unaff_x24 = ppuVar3;
    }
    else {
      do {
        func_0x000104bfa0c0();
      } while (extraout_w11_00 != 0);
      func_0x000104bfa6bc();
      if (extraout_x9 != 0) {
        do {
          func_0x000104bfa0a0();
        } while (extraout_w10_01 != 0);
      }
    }
    func_0x000104bfa7d0();
    func_0x000104bfa444();
    func_0x000104bfa3b0();
    func_0x000104bfa7c4(&UNK_1107e8ac8);
    *unaff_x23 = extraout_x8_02 + 0x40;
    func_0x000104bfa3f4();
    func_0x000104bfa7b8();
    if (in_stack_00000030 != 0) {
      func_0x000104bfa608();
      if ((bool)in_ZR) {
        func_0x000104bfa794();
      }
      else {
        func_0x000104bfa7ac();
        if (!(bool)in_CY || (bool)in_ZR) {
          func_0x000104bfa7a0();
        }
      }
      func_0x000104bfa788();
      uVar1 = in_ZR;
      plVar5 = extraout_x9_00;
      if (extraout_x9_00 != (long *)0x0) {
        do {
          while( true ) {
            in_ZR = uVar1;
            if (*plVar5 == 0) goto LAB_104bf6934;
            func_0x000104bfa77c();
            if (!(bool)in_ZR) break;
            func_0x000104bfa770();
            uVar1 = 0;
            plVar5 = extraout_x9_02;
            if ((bool)in_ZR) goto LAB_104bf69c8;
          }
          plVar5 = extraout_x9_01;
          if ((in_stack_00000030 & extraout_x8_03) == 0) {
            uVar6 = extraout_x10_00 & extraout_x8_03;
          }
          else {
            uVar6 = extraout_x10_00;
            if (in_stack_00000030 <= extraout_x10_00) {
              func_0x000104bfa5fc();
              plVar5 = extraout_x9_03;
              uVar6 = extraout_x10_01;
            }
          }
          in_NG = (long)(uVar6 - unaff_x27) < 0;
          in_ZR = uVar6 == unaff_x27;
          uVar1 = in_ZR;
        } while ((bool)in_ZR);
      }
    }
LAB_104bf6934:
    func_0x000104bfa61c();
    func_0x000104bfa144();
    do {
      func_0x000104bfa0a0();
    } while (extraout_w10_02 != 0);
    func_0x000104bfa3e0();
    if ((in_stack_00000030 == 0) || (func_0x000104bfa544(), (bool)in_NG)) {
      func_0x000104bfa30c();
      in_ZR = in_stack_00000030 == 3;
      func_0x000104bfa12c();
      func_0x000104bfa2e4();
      func_0x000104bfa534();
      if ((bool)in_ZR) {
        func_0x000104bfa758();
      }
      else {
        in_ZR = in_stack_00000030 == unaff_x26;
        if (in_stack_00000030 <= unaff_x26) {
          func_0x000104bfa74c();
        }
      }
    }
    func_0x000104bfa55c();
    if (extraout_x10_02 == 0) {
      func_0x000104bfa21c();
      if (extraout_x10_03 != 0) {
        func_0x000104bfa514();
        uVar4 = extraout_x8_04;
        lVar7 = extraout_x9_04;
        if ((bool)in_ZR) {
          uVar6 = extraout_x10_04 & CONCAT44(extraout_var,extraout_w11_01);
        }
        else {
          uVar6 = extraout_x10_04;
          if (in_stack_00000030 <= extraout_x10_04) {
            func_0x000104bfa5fc();
            uVar4 = extraout_x8_05;
            lVar7 = extraout_x9_05;
            uVar6 = extraout_x10_05;
          }
        }
        *(undefined8 *)(lVar7 + uVar6 * 8) = uVar4;
      }
    }
    else {
      func_0x000104bfa468();
    }
    func_0x000104bfa168();
LAB_104bf69c8:
    func_0x000104bfa504();
    FUN_104bf8828();
  }
  else {
    func_0x000104bfa424();
    if (in_stack_00000038 == 0) {
      func_0x000104bfa4a8();
      goto LAB_104bf6844;
    }
    func_0x000104bfa5a8();
    func_0x000104bfa62c();
    if ((in_stack_00000038 != 0) && (unaff_x21 != 0)) {
      do {
        func_0x000104bfa0a0();
      } while (extraout_w10_00 != 0);
    }
    func_0x000104bfa598();
    FUN_104bf8828();
    func_0x000104bfa4a8();
  }
  func_0x000104bfa39c();
  func_0x000104bfa668();
  func_0x000104bfa670();
LAB_104bf69dc:
  func_0x000104bfa2cc(*(undefined8 *)(*unaff_x20 + 0x58));
  FUN_104be189c();
  func_0x000104bfa0b0();
  return;
}



/* Entry: 104bf6a30; end: 104bf6d03;  */

void FUN_104bf6a30(void)

{
  undefined1 uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined **extraout_x8_01;
  undefined **ppuVar3;
  long extraout_x8_02;
  ulong extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 uVar4;
  long extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  long *extraout_x9_03;
  long *plVar5;
  long extraout_x9_04;
  long extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  long extraout_x10_02;
  long extraout_x10_03;
  ulong extraout_x10_04;
  ulong extraout_x10_05;
  ulong uVar6;
  int extraout_w11;
  int extraout_w11_00;
  undefined4 extraout_w11_01;
  undefined4 extraout_var;
  long *unaff_x20;
  long unaff_x21;
  long lVar7;
  long *unaff_x23;
  undefined8 *unaff_x24;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong in_stack_00000030;
  long in_stack_00000038;
  
  func_0x000104bfa6cc();
  func_0x000104bfa03c();
  func_0x000104bfa524();
  if (!(bool)in_CY || (bool)in_ZR) goto LAB_104bf6cb0;
  func_0x000104bfa430();
  if (in_stack_00000038 == 0) {
    lVar7 = 0;
    lVar2 = in_stack_00000038;
  }
  else {
    lVar7 = in_stack_00000038;
    func_0x000104bfa6e8();
    func_0x000104bfa614();
    lVar2 = lVar7;
  }
  func_0x000104bfa3b0();
  if (lVar7 != 0) {
    func_0x000104bfa5e0();
    if (extraout_x8 != 0) {
      do {
        func_0x000104bfa0a0();
      } while (extraout_w10 != 0);
    }
    goto LAB_104bf6cb0;
  }
  func_0x000104bfa418();
  func_0x000104bfa7e8();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000104bfa3c8();
    } while (extraout_w11 != 0);
  }
  func_0x000104bfa390();
  func_0x000104bfa5d0();
  func_0x000104bfa208();
  if (lVar2 == 0) {
LAB_104bf6b18:
    func_0x000104bfa624();
    func_0x000104bfa588(&PTR_FUN_1107e8d20);
    ppuVar3 = &PTR_DAT_1107e8d70;
    if ((in_stack_00000030 == 0) ||
       (func_0x000104bfa7dc(), ppuVar3 = extraout_x8_01, extraout_x10 == 0)) {
      *unaff_x24 = ppuVar3;
    }
    else {
      do {
        func_0x000104bfa0c0();
      } while (extraout_w11_00 != 0);
      func_0x000104bfa6bc();
      if (extraout_x9 != 0) {
        do {
          func_0x000104bfa0a0();
        } while (extraout_w10_01 != 0);
      }
    }
    func_0x000104bfa7d0();
    func_0x000104bfa444();
    func_0x000104bfa3b0();
    func_0x000104bfa7c4(&UNK_1107e7cf8);
    *unaff_x23 = extraout_x8_02 + 0x40;
    func_0x000104bfa3f4();
    func_0x000104bfa7b8();
    if (in_stack_00000030 != 0) {
      func_0x000104bfa608();
      if ((bool)in_ZR) {
        func_0x000104bfa794();
      }
      else {
        func_0x000104bfa7ac();
        if (!(bool)in_CY || (bool)in_ZR) {
          func_0x000104bfa7a0();
        }
      }
      func_0x000104bfa788();
      uVar1 = in_ZR;
      plVar5 = extraout_x9_00;
      if (extraout_x9_00 != (long *)0x0) {
        do {
          while( true ) {
            in_ZR = uVar1;
            if (*plVar5 == 0) goto LAB_104bf6c08;
            func_0x000104bfa77c();
            if (!(bool)in_ZR) break;
            func_0x000104bfa770();
            uVar1 = 0;
            plVar5 = extraout_x9_02;
            if ((bool)in_ZR) goto LAB_104bf6c9c;
          }
          plVar5 = extraout_x9_01;
          if ((in_stack_00000030 & extraout_x8_03) == 0) {
            uVar6 = extraout_x10_00 & extraout_x8_03;
          }
          else {
            uVar6 = extraout_x10_00;
            if (in_stack_00000030 <= extraout_x10_00) {
              func_0x000104bfa5fc();
              plVar5 = extraout_x9_03;
              uVar6 = extraout_x10_01;
            }
          }
          in_NG = (long)(uVar6 - unaff_x27) < 0;
          in_ZR = uVar6 == unaff_x27;
          uVar1 = in_ZR;
        } while ((bool)in_ZR);
      }
    }
LAB_104bf6c08:
    func_0x000104bfa61c();
    func_0x000104bfa144();
    do {
      func_0x000104bfa0a0();
    } while (extraout_w10_02 != 0);
    func_0x000104bfa3e0();
    if ((in_stack_00000030 == 0) || (func_0x000104bfa544(), (bool)in_NG)) {
      func_0x000104bfa30c();
      in_ZR = in_stack_00000030 == 3;
      func_0x000104bfa12c();
      func_0x000104bfa2e4();
      func_0x000104bfa534();
      if ((bool)in_ZR) {
        func_0x000104bfa758();
      }
      else {
        in_ZR = in_stack_00000030 == unaff_x26;
        if (in_stack_00000030 <= unaff_x26) {
          func_0x000104bfa74c();
        }
      }
    }
    func_0x000104bfa55c();
    if (extraout_x10_02 == 0) {
      func_0x000104bfa21c();
      if (extraout_x10_03 != 0) {
        func_0x000104bfa514();
        uVar4 = extraout_x8_04;
        lVar7 = extraout_x9_04;
        if ((bool)in_ZR) {
          uVar6 = extraout_x10_04 & CONCAT44(extraout_var,extraout_w11_01);
        }
        else {
          uVar6 = extraout_x10_04;
          if (in_stack_00000030 <= extraout_x10_04) {
            func_0x000104bfa5fc();
            uVar4 = extraout_x8_05;
            lVar7 = extraout_x9_05;
            uVar6 = extraout_x10_05;
          }
        }
        *(undefined8 *)(lVar7 + uVar6 * 8) = uVar4;
      }
    }
    else {
      func_0x000104bfa468();
    }
    func_0x000104bfa168();
LAB_104bf6c9c:
    func_0x000104bfa504();
    FUN_104bf8878();
  }
  else {
    func_0x000104bfa424();
    if (in_stack_00000038 == 0) {
      func_0x000104bfa4a8();
      goto LAB_104bf6b18;
    }
    func_0x000104bfa5a8();
    func_0x000104bfa62c();
    if ((in_stack_00000038 != 0) && (unaff_x21 != 0)) {
      do {
        func_0x000104bfa0a0();
      } while (extraout_w10_00 != 0);
    }
    func_0x000104bfa598();
    FUN_104bf8878();
    func_0x000104bfa4a8();
  }
  func_0x000104bfa39c();
  func_0x000104bfa668();
  func_0x000104bfa670();
LAB_104bf6cb0:
  func_0x000104bfa2cc(*(undefined8 *)(*unaff_x20 + 0x60));
  FUN_104be1970();
  func_0x000104bfa0b0();
  return;
}



/* Entry: 104bf6d04; end: 104bf6fe7;  */

void FUN_104bf6d04(void)

{
  undefined1 uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined *extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar3;
  long extraout_x8_03;
  ulong extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 uVar4;
  long lVar5;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  long *plVar6;
  long extraout_x9_03;
  long extraout_x9_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  long extraout_x10_02;
  long extraout_x10_03;
  ulong extraout_x10_04;
  ulong extraout_x10_05;
  ulong uVar7;
  int extraout_w11;
  int extraout_w11_00;
  undefined4 extraout_w11_01;
  undefined4 extraout_var;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong in_stack_00000030;
  long in_stack_00000038;
  
  func_0x000104bfa6cc();
  func_0x000104bfa03c();
  func_0x000104bfa524();
  if (!(bool)in_CY || (bool)in_ZR) goto LAB_104bf6f94;
  func_0x000104bfa430();
  if (in_stack_00000038 == 0) {
    lVar5 = 0;
    lVar2 = in_stack_00000038;
  }
  else {
    lVar5 = in_stack_00000038;
    func_0x000104bfa6e8();
    func_0x000104bfa614();
    lVar2 = lVar5;
  }
  func_0x000104bfa3b0();
  if (lVar5 != 0) {
    func_0x000104bfa5e0();
    if (extraout_x8 != 0) {
      do {
        func_0x000104bfa0a0();
      } while (extraout_w10 != 0);
    }
    goto LAB_104bf6f94;
  }
  func_0x000104bfa418();
  func_0x000104bfa7e8();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000104bfa3c8();
    } while (extraout_w11 != 0);
  }
  func_0x000104bfa390();
  func_0x000104bfa5d0();
  func_0x000104bfa208();
  if (lVar2 == 0) {
LAB_104bf6dec:
    func_0x000104bfa624();
    func_0x000104bfa588(&PTR_FUN_1107e8db8);
    puVar3 = &UNK_1107e8df8;
    if ((in_stack_00000030 == 0) ||
       (func_0x000104bfa7dc(), puVar3 = extraout_x8_01, extraout_x10 == 0)) {
      *unaff_x24 = (long)(puVar3 + 0x10);
    }
    else {
      do {
        func_0x000104bfa0c0();
      } while (extraout_w11_00 != 0);
      lVar5 = *(long *)(in_stack_00000030 + 0x10);
      *unaff_x24 = extraout_x8_02 + 0x10;
      if (lVar5 != 0) {
        do {
          func_0x000104bfa0a0();
        } while (extraout_w10_01 != 0);
      }
    }
    func_0x000104bfa7d0();
    func_0x000104bfa444();
    func_0x000104bfa3b0();
    func_0x000104bfa7c4(&UNK_110875a08);
    *unaff_x23 = extraout_x8_03 + 0x50;
    func_0x000104bfa3f4();
    func_0x000104bfa7b8();
    if (in_stack_00000030 != 0) {
      func_0x000104bfa608();
      if ((bool)in_ZR) {
        func_0x000104bfa794();
      }
      else {
        func_0x000104bfa7ac();
        if (!(bool)in_CY || (bool)in_ZR) {
          func_0x000104bfa7a0();
        }
      }
      func_0x000104bfa788();
      uVar1 = in_ZR;
      plVar6 = extraout_x9;
      if (extraout_x9 != (long *)0x0) {
        do {
          while( true ) {
            in_ZR = uVar1;
            if (*plVar6 == 0) goto LAB_104bf6eec;
            func_0x000104bfa77c();
            if (!(bool)in_ZR) break;
            func_0x000104bfa770();
            uVar1 = 0;
            plVar6 = extraout_x9_01;
            if ((bool)in_ZR) goto LAB_104bf6f80;
          }
          plVar6 = extraout_x9_00;
          if ((in_stack_00000030 & extraout_x8_04) == 0) {
            uVar7 = extraout_x10_00 & extraout_x8_04;
          }
          else {
            uVar7 = extraout_x10_00;
            if (in_stack_00000030 <= extraout_x10_00) {
              func_0x000104bfa5fc();
              plVar6 = extraout_x9_02;
              uVar7 = extraout_x10_01;
            }
          }
          in_NG = (long)(uVar7 - unaff_x27) < 0;
          in_ZR = uVar7 == unaff_x27;
          uVar1 = in_ZR;
        } while ((bool)in_ZR);
      }
    }
LAB_104bf6eec:
    func_0x000104bfa61c();
    func_0x000104bfa144();
    do {
      func_0x000104bfa0a0();
    } while (extraout_w10_02 != 0);
    func_0x000104bfa3e0();
    if ((in_stack_00000030 == 0) || (func_0x000104bfa544(), (bool)in_NG)) {
      func_0x000104bfa30c();
      in_ZR = in_stack_00000030 == 3;
      func_0x000104bfa12c();
      func_0x000104bfa2e4();
      func_0x000104bfa534();
      if ((bool)in_ZR) {
        func_0x000104bfa758();
      }
      else {
        in_ZR = in_stack_00000030 == unaff_x26;
        if (in_stack_00000030 <= unaff_x26) {
          func_0x000104bfa74c();
        }
      }
    }
    func_0x000104bfa55c();
    if (extraout_x10_02 == 0) {
      func_0x000104bfa21c();
      if (extraout_x10_03 != 0) {
        func_0x000104bfa514();
        uVar4 = extraout_x8_05;
        lVar5 = extraout_x9_03;
        if ((bool)in_ZR) {
          uVar7 = extraout_x10_04 & CONCAT44(extraout_var,extraout_w11_01);
        }
        else {
          uVar7 = extraout_x10_04;
          if (in_stack_00000030 <= extraout_x10_04) {
            func_0x000104bfa5fc();
            uVar4 = extraout_x8_06;
            lVar5 = extraout_x9_04;
            uVar7 = extraout_x10_05;
          }
        }
        *(undefined8 *)(lVar5 + uVar7 * 8) = uVar4;
      }
    }
    else {
      func_0x000104bfa468();
    }
    func_0x000104bfa168();
LAB_104bf6f80:
    func_0x000104bfa504();
    FUN_104bf88c8();
  }
  else {
    func_0x000104bfa424();
    if (in_stack_00000038 == 0) {
      func_0x000104bfa4a8();
      goto LAB_104bf6dec;
    }
    func_0x000104bfa5a8();
    func_0x000104bfa62c();
    if ((in_stack_00000038 != 0) && (unaff_x21 != 0)) {
      do {
        func_0x000104bfa0a0();
      } while (extraout_w10_00 != 0);
    }
    func_0x000104bfa598();
    FUN_104bf88c8();
    func_0x000104bfa4a8();
  }
  func_0x000104bfa39c();
  func_0x000104bfa668();
  func_0x000104bfa670();
LAB_104bf6f94:
  func_0x000104bfa2cc(*(undefined8 *)(*unaff_x20 + 0x68));
  FUN_104bf8920();
  func_0x000104bfa0b0();
  return;
}



/* Entry: 104bf6fe8; end: 104bf758f;  */

void FUN_104bf6fe8(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined1 auStack_348 [16];
  undefined1 auStack_338 [16];
  undefined8 uStack_328;
  undefined1 auStack_320 [16];
  undefined1 auStack_310 [16];
  undefined8 uStack_300;
  undefined1 auStack_2f8 [16];
  undefined1 auStack_2e8 [16];
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [16];
  undefined1 auStack_2c0 [16];
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [16];
  undefined8 uStack_288;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined8 uStack_260;
  undefined1 auStack_258 [16];
  undefined8 uStack_248;
  undefined1 auStack_240 [16];
  undefined8 uStack_230;
  undefined1 auStack_228 [16];
  undefined8 uStack_218;
  undefined1 auStack_210 [16];
  undefined8 uStack_200;
  undefined1 auStack_1f8 [16];
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [16];
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined1 auStack_150 [16];
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000104bfa458();
  uStack_38 = extraout_x8;
  FUN_104be665c();
  FUN_104beb2e4(param_1);
  FUN_104bf0be0(param_1);
  FUN_104bf14f8(param_1);
  FUN_104bf2a50(param_1);
  FUN_104bf4ba4(param_1);
  FUN_104bf52d8(param_1);
  FUN_104bfa808(param_1);
  FUN_104bfb764(param_1);
  func_0x0001052c0f9c(param_1);
  func_0x0001052c3c3c(param_1);
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136a3958);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136a3958) = 1;
  if ((bVar1 & 1) != 0) goto LAB_104bf7094;
  if ((bRam00000001136a3970 & 1) == 0) goto LAB_104bf70b0;
  while( true ) {
    func_0x000108b80888(0x1136a39b0,param_1);
LAB_104bf7094:
    func_0x000104bfa2ac(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_104bf70b0:
    iVar2 = 0x136a3970;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_104bf7590();
      func_0x0001003a83dc(&uStack_1d0,"getConversationManager");
      FUN_104bec5bc();
      func_0x000104bfa2d8(auStack_1e0);
      uStack_158 = uStack_1d0;
      uStack_1d0 = 0;
      func_0x0001003aef98(auStack_150,auStack_1e0);
      pcVar3 = "getFeedManagerByType";
      func_0x0001003a83dc(&uStack_1e8,"getFeedManagerByType");
      FUN_104bf0f3c();
      pcVar4 = pcVar3;
      FUN_104bf8944();
      func_0x0001003adcc0(auStack_168,pcVar4);
      func_0x000104bfa4e8(auStack_1f8,pcVar3,auStack_168);
      uStack_140 = uStack_1e8;
      uStack_1e8 = 0;
      func_0x0001003aef98(auStack_138,auStack_1f8);
      func_0x0001003a83dc(&uStack_200,"getGroupsManager");
      FUN_104bf2c4c();
      func_0x000104bfa2d8(auStack_210);
      uStack_128 = uStack_200;
      uStack_200 = 0;
      func_0x0001003aef98(auStack_120,auStack_210);
      func_0x0001003a83dc(&uStack_218,"getMessageWindowManager");
      FUN_104bf4ee0();
      func_0x000104bfa2d8(auStack_228);
      uStack_110 = uStack_218;
      uStack_218 = 0;
      func_0x0001003aef98(auStack_108,auStack_228);
      func_0x0001003a83dc(&uStack_230,"getSnapManager");
      FUN_104bfb908();
      func_0x000104bfa2d8(auStack_240);
      uStack_f8 = uStack_230;
      uStack_230 = 0;
      func_0x0001003aef98(auStack_f0,auStack_240);
      func_0x0001003a83dc(&uStack_248,"getNotificationCenterManager");
      func_0x0001052c15c4();
      func_0x000104bfa2d8(auStack_258);
      uStack_e0 = uStack_248;
      uStack_248 = 0;
      func_0x0001003aef98(auStack_d8,auStack_258);
      pcVar3 = "setConversationListener";
      func_0x0001003a83dc(&uStack_260,"setConversationListener");
      func_0x0001003b166c(auStack_280);
      FUN_104bfab30();
      func_0x0001003adcc0(auStack_178,pcVar3);
      func_0x000104bfa4e8(auStack_270,auStack_280,auStack_178);
      uStack_c8 = uStack_260;
      uStack_260 = 0;
      func_0x0001003aef98(auStack_c0,auStack_270);
      pcVar3 = "setPublicGroupsFeedListener";
      func_0x0001003a83dc(&uStack_288,"setPublicGroupsFeedListener");
      func_0x0001003b166c(auStack_2a8);
      FUN_104bf180c();
      func_0x0001003adcc0(auStack_188,pcVar3);
      func_0x000104bfa4e8(auStack_298,auStack_2a8,auStack_188);
      uStack_b0 = uStack_288;
      uStack_288 = 0;
      func_0x0001003aef98(auStack_a8,auStack_298);
      pcVar3 = "setFriendsFeedListener";
      func_0x0001003a83dc(&uStack_2b0,"setFriendsFeedListener");
      func_0x0001003b166c(auStack_2d0);
      FUN_104bf180c();
      func_0x0001003adcc0(auStack_198,pcVar3);
      func_0x000104bfa4e8(auStack_2c0,auStack_2d0,auStack_198);
      uStack_98 = uStack_2b0;
      uStack_2b0 = 0;
      func_0x0001003aef98(auStack_90,auStack_2c0);
      pcVar3 = "setMessageWindowListener";
      func_0x0001003a83dc(&uStack_2d8,"setMessageWindowListener");
      func_0x0001003b166c(auStack_2f8);
      FUN_104bf5578();
      func_0x0001003adcc0(auStack_1a8,pcVar3);
      func_0x000104bfa4e8(auStack_2e8,auStack_2f8,auStack_1a8);
      uStack_80 = uStack_2d8;
      uStack_2d8 = 0;
      func_0x0001003aef98(auStack_78,auStack_2e8);
      pcVar3 = "setActiveConversationListener";
      func_0x0001003a83dc(&uStack_300);
      func_0x0001003b166c(auStack_320);
      FUN_104be689c();
      func_0x0001003adcc0(auStack_1b8,pcVar3);
      func_0x000104bfa4e8(auStack_310,auStack_320,auStack_1b8);
      uStack_68 = uStack_300;
      uStack_300 = 0;
      func_0x0001003aef98(auStack_60,auStack_310);
      pcVar3 = "setNotificationCenterListener";
      func_0x000104bfa718();
      func_0x0001003b166c(auStack_348);
      func_0x0001052c3f0c();
      func_0x0001003adcc0(auStack_1c8,pcVar3);
      func_0x000104bfa4e8(auStack_338,auStack_348,auStack_1c8);
      uStack_50 = uStack_328;
      uStack_328 = 0;
      func_0x0001003aef98(auStack_48,auStack_338);
      FUN_104bdbd44(0x1136a39b0,0x1136a3978,1,&uStack_158,0xc);
      lVar5 = 0x108;
      do {
        func_0x0001003b1c5c(auStack_150 + lVar5 + -8);
        lVar5 = lVar5 + -0x18;
        in_ZR = lVar5 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000104bfa3a8(auStack_338);
      func_0x000104bfa3a8(auStack_1c8);
      func_0x000104bfa3a8(auStack_348);
      func_0x000104bfa728();
      func_0x000104bfa3a8(auStack_310);
      func_0x000104bfa3a8(auStack_1b8);
      func_0x000104bfa3a8(auStack_320);
      func_0x0001003a8c94(&uStack_300);
      func_0x000104bfa3a8(auStack_2e8);
      func_0x000104bfa3a8(auStack_1a8);
      func_0x000104bfa3a8(auStack_2f8);
      func_0x0001003a8c94(&uStack_2d8);
      func_0x000104bfa3a8(auStack_2c0);
      func_0x000104bfa3a8(auStack_198);
      func_0x000104bfa3a8(auStack_2d0);
      func_0x0001003a8c94(&uStack_2b0);
      func_0x000104bfa3a8(auStack_298);
      func_0x000104bfa3a8(auStack_188);
      func_0x000104bfa3a8(auStack_2a8);
      func_0x0001003a8c94(&uStack_288);
      func_0x000104bfa3a8(auStack_270);
      func_0x000104bfa3a8(auStack_178);
      func_0x000104bfa3a8(auStack_280);
      func_0x0001003a8c94(&uStack_260);
      func_0x000104bfa3a8(auStack_258);
      func_0x0001003a8c94(&uStack_248);
      func_0x000104bfa3a8(auStack_240);
      func_0x0001003a8c94(&uStack_230);
      func_0x000104bfa3a8(auStack_228);
      func_0x0001003a8c94(&uStack_218);
      func_0x000104bfa3a8(auStack_210);
      func_0x0001003a8c94(&uStack_200);
      func_0x000104bfa3a8(auStack_1f8);
      func_0x000104bfa3a8(auStack_168);
      func_0x0001003a8c94(&uStack_1e8);
      func_0x000104bfa3a8(auStack_1e0);
      func_0x0001003a8c94(&uStack_1d0);
      ___cxa_guard_release(0x1136a3970);
    }
  }
  return;
}



/* Entry: 104bf7590; end: 104bf75eb;  */

void FUN_104bf7590(void)

{
  int iVar1;
  
  if ((bRam00000001136a3980 & 1) == 0) {
    iVar1 = 0x136a3980;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x1136a3978,"_djinni_interface_MessagingClient");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1136a3980);
      return;
    }
  }
  return;
}



/* Entry: 104bf75ec; end: 104bf7a2f;  */

void FUN_104bf75ec(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  code *pcVar8;
  code **ppcVar9;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long lVar10;
  code *apcStack_100 [2];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  code *pcStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [16];
  undefined **appuStack_b8 [3];
  undefined ***pppuStack_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  func_0x000104bfa458();
  uStack_48 = extraout_x8;
  func_0x0001003a83dc(auStack_d0,"_djinni_interface_MessagingClient_statics");
  func_0x000104bfa718("getMessagingClient");
  if ((bRam00000001136a3988 & 1) == 0) {
    iVar4 = 0x136a3988;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      if ((bRam00000001136a3960 & 1) == 0) goto LAB_104bf7958;
      goto LAB_104bf7934;
    }
  }
  while( true ) {
    func_0x000104bfa2d8(auStack_e8,0x1136a39c0);
    pcStack_78 = pcStack_d8;
    pcStack_d8 = (code *)0x0;
    func_0x0001003aef98(&ppuStack_70,auStack_e8);
    pcVar5 = "getOneOnOneConversationId";
    func_0x0001003a83dc(&uStack_f0,"getOneOnOneConversationId");
    func_0x00010529dde0();
    pcVar6 = pcVar5;
    func_0x00010529dde0();
    puVar7 = auStack_98;
    func_0x0001003adcc0(puVar7,pcVar6);
    func_0x00010529dde0();
    func_0x0001003adcc0(auStack_88,puVar7);
    FUN_104bdbd48(apcStack_100,pcVar5,auStack_98,2);
    uStack_60 = uStack_f0;
    uStack_f0 = 0;
    func_0x0001003aef98(auStack_58,apcStack_100);
    FUN_104bdbd44(auStack_c8,auStack_d0,0,&pcStack_78,2);
    lVar10 = 0x18;
    do {
      func_0x0001003b1c5c((long)&pcStack_78 + lVar10);
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x18);
    func_0x000104bfa3a8(apcStack_100);
    lVar10 = 0x18;
    do {
      func_0x0001003adc18(auStack_98 + lVar10);
      lVar10 = lVar10 + -0x10;
    } while (lVar10 != -8);
    func_0x0001003a8c94(&uStack_f0);
    func_0x0001003adc18(auStack_e0);
    func_0x000104bfa728();
    func_0x0001003a8c94(auStack_d0);
    pppuStack_a0 = appuStack_b8;
    appuStack_b8[0] = &PTR_DAT_1107e9020;
    func_0x000108b807f0(auStack_e8,auStack_c8,appuStack_b8);
    func_0x0001006393ec(appuStack_b8);
    pcVar8 = (code *)auStack_e0;
    func_0x0001003b2110(auStack_d0);
    func_0x000104bfa488();
    pcStack_78 = FUN_104bf9d7c;
    ppuStack_70 = &PTR_FUN_1107e9090;
    pcStack_68 = FUN_104bf7a30;
    func_0x00010b9ac22c();
    apcStack_100[0] = pcVar8;
    func_0x000104bfa4f8(ppuStack_70);
    do {
      func_0x000104bfa29c();
    } while (extraout_w10 != 0);
    pcStack_78 = pcVar8;
    func_0x00010b9a8ef8(auStack_98,&pcStack_78);
    FUN_104bda388(&pcStack_78);
    ppcVar9 = apcStack_100;
    FUN_104bda3d0();
    func_0x000104bfa488();
    pcStack_78 = FUN_104bf9f70;
    ppuStack_70 = &PTR_FUN_1107e90b0;
    pcStack_68 = FUN_104bf7cc8;
    func_0x00010b9ac22c();
    apcStack_100[0] = (code *)ppcVar9;
    (*(code *)*ppuStack_70)(&ppuStack_70);
    do {
      func_0x000104bfa29c();
    } while (extraout_w10_00 != 0);
    pcStack_78 = (code *)ppcVar9;
    func_0x00010b9a8ef8(auStack_88,&pcStack_78);
    FUN_104bda388(&pcStack_78);
    FUN_104bda3d0(apcStack_100);
    FUN_104bdb9bc(apcStack_100,auStack_d0,auStack_98,2);
    func_0x00010b9a8f60(&pcStack_78,apcStack_100);
    lVar10 = *param_1;
    func_0x000104bfa718("MessagingClient");
    func_0x000104bd9bd4(lVar10 + 0x10,&pcStack_d8);
    func_0x00010b9a9020();
    func_0x000104bfa728();
    func_0x00010b9a8d98(&pcStack_78);
    FUN_104bdbf78(apcStack_100);
    lVar10 = 0x10;
    do {
      func_0x00010b9a8d98(auStack_98 + lVar10);
      lVar10 = lVar10 + -0x10;
      uVar3 = lVar10 == -0x10;
    } while (!(bool)uVar3);
    func_0x0001003b1f60(auStack_d0);
    func_0x0001003adc18(auStack_e0);
    func_0x000104bfa3a8(auStack_c8);
    func_0x000104bfa2ac(uStack_48);
    if ((bool)uVar3) break;
    ___stack_chk_fail();
    param_1 = (long *)0xfffffffffffffff0;
LAB_104bf7958:
    iVar4 = 0x136a3960;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_104bf7590();
      pcStack_78 = pcRam00000001136a3978;
      if (pcRam00000001136a3978 != (code *)0x0) {
        pcVar8 = pcRam00000001136a3978 + 8;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
          if (bVar2) {
            *(int *)pcVar8 = *(int *)pcVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      ppuStack_70 = (undefined **)CONCAT62(ppuStack_70._2_6_,0xff00);
      func_0x0001003ad9a4(0x1136a3990,&pcStack_78);
      func_0x0001003a8c94(&pcStack_78);
      ___cxa_guard_release(0x1136a3960);
    }
LAB_104bf7934:
    func_0x00010b9911c4(0x1136a39c0);
    ___cxa_guard_release(0x1136a3988);
  }
  return;
}



/* Entry: 104bf7a30; end: 104bf7cc7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104bf7a30(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long *plVar4;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long alStack_58 [7];
  
  FUN_104bdf60c(&uStack_d0);
  uStack_d8 = uStack_c8;
  uStack_e0 = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  FUN_104bf2d3c(&lStack_98);
  lStack_b8 = lStack_98;
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      func_0x000104bfa0c0();
      lStack_b8 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  alStack_58[5] = 0;
  alStack_58[6] = 0;
  alStack_58[1] = 0;
  alStack_58[2] = 0;
  FUN_104bdfdd0(alStack_58 + 3,&uStack_e0,alStack_58 + 1);
  FUN_104bdfe04(alStack_58 + 5,alStack_58 + 3);
  func_0x000104bdfc18(alStack_58 + 3);
  func_0x000104bdfc18(alStack_58 + 1);
  func_0x0001003b69cc(alStack_58);
  func_0x0001003b6c18(alStack_58 + 3,alStack_58[0]);
  lStack_68 = alStack_58[0];
  lStack_70 = lStack_b8;
  lStack_b8 = 0;
  alStack_58[0] = 0;
  lStack_80 = 0;
  lStack_78 = 0;
  lStack_90 = alStack_58[5] + 0x48;
  lStack_88 = CONCAT71(lStack_88._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  lVar2 = alStack_58[5];
  FUN_104bf899c();
  if ((int)lVar2 == 0) {
    puVar3 = (undefined8 *)0x18;
    __Znwm();
    lVar1 = lStack_68;
    lVar2 = lStack_70;
    *puVar3 = &PTR_FUN_1107e8e48;
    lStack_70 = 0;
    lStack_68 = 0;
    puVar3[2] = lVar1;
    puVar3[1] = lVar2;
    plVar4 = *(long **)(alStack_58[5] + 0x90);
    *(undefined8 **)(alStack_58[5] + 0x90) = puVar3;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  else {
    FUN_104bdfe04(&lStack_80,alStack_58 + 5);
  }
  func_0x0001000df5a0(&lStack_90);
  if (lStack_80 != 0) {
    lStack_90 = lStack_80;
    lStack_88 = lStack_78;
    if (lStack_78 != 0) {
      do {
        func_0x000104bfa0a0();
      } while (extraout_w10 != 0);
    }
    FUN_104bf89e8(&lStack_70);
    func_0x000104bdfc18(&lStack_90);
  }
  uStack_a8 = alStack_58[4];
  uStack_b0 = alStack_58[3];
  alStack_58[3] = 0;
  alStack_58[4] = 0;
  func_0x000104bdfc18(&lStack_80);
  func_0x000104bf96f0(&lStack_70);
  func_0x0001003b6c64(alStack_58 + 3);
  lVar2 = alStack_58[0];
  alStack_58[0] = 0;
  if (lVar2 != 0) {
    func_0x000104bfa740();
  }
  func_0x000104bdfc18(alStack_58 + 5);
  func_0x0001003b6c64(&uStack_b0);
  FUN_104bf3564(&lStack_b8);
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      func_0x000104bfa0c0();
    } while (extraout_w11_00 != 0);
  }
  func_0x000104bfa738();
  FUN_104bddedc(alStack_58 + 5);
  FUN_104bf3564(&lStack_98);
  func_0x000104bfa69c();
  func_0x000104bdfc18(&uStack_d0);
  return;
}



/* Entry: 104bf7cc8; end: 104bf7d7f;  */

void FUN_104bf7cc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar1 = param_2;
  func_0x00010b9abfa4(param_2,0);
  func_0x00010b9abfa4(param_2,1);
  func_0x00010529dcb8(auStack_60,uVar1);
  func_0x00010529dcb8(auStack_78,param_2);
  func_0x00010867aae8(auStack_48,auStack_60,auStack_78);
  func_0x000100100fec(auStack_78);
  func_0x000100100fec(auStack_60);
  func_0x00010529dd1c(param_1,auStack_48);
  func_0x000100100fec(auStack_48);
  return;
}



/* Entry: 104bf7d80; end: 104bf7ea7;  */

void FUN_104bf7d80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000104bf7de4(&uStack_30);
  uVar1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  *param_1 = uVar1;
  func_0x000104bf7e20(&uStack_30);
  return;
}



/* Entry: 104bf7ea8; end: 104bf7eaf;  */

void FUN_104bf7ea8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_2;
  func_0x0001000df370(&uStack_18,8);
  return;
}



/* Entry: 104bf7eb0; end: 104bf7f97;  */

long FUN_104bf7eb0(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar4 = uVar3 - 1;
    if ((uVar3 & uVar4) == 0) {
      uVar5 = uVar4 & param_2;
    }
    else {
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = param_2 / uVar3;
      }
      uVar5 = param_2;
      if (uVar3 <= param_2) {
        uVar5 = param_2 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar2 != (long *)0x0) {
      do {
        while( true ) {
          plVar2 = (long *)*plVar2;
          if (plVar2 == (long *)0x0) goto LAB_104bf7f40;
          uVar6 = plVar2[1];
          if (uVar6 != param_2) break;
          if (plVar2[2] == *param_3) {
            return (long)plVar2;
          }
        }
        if ((uVar3 & uVar4) == 0) {
          uVar6 = uVar6 & uVar4;
        }
        else if (uVar3 <= uVar6) {
          uVar1 = 0;
          if (uVar3 != 0) {
            uVar1 = uVar6 / uVar3;
          }
          uVar6 = uVar6 - uVar1 * uVar3;
        }
      } while (uVar6 == uVar5);
    }
  }
LAB_104bf7f40:
  if ((uVar3 == 0) || (*(float *)(param_1 + 4) * (float)uVar3 < (float)(param_1[3] + 1))) {
    func_0x000104bfa12c(uVar3 << 1);
    FUN_104bf8034();
  }
  return 0;
}



/* Entry: 104bf7f98; end: 104bf8033;  */

void FUN_104bf7f98(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar2 = param_1[1];
  uVar5 = param_2[1];
  uVar3 = uVar2 - 1;
  if ((uVar2 & uVar3) == 0) {
    uVar5 = uVar3 & uVar5;
  }
  else if (uVar2 <= uVar5) {
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = uVar5 / uVar2;
    }
    uVar5 = uVar5 - uVar1 * uVar2;
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + uVar5 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *param_2 = *plVar6;
    *plVar6 = (long)param_2;
    *(long **)(lVar4 + uVar5 * 8) = plVar6;
    if (*param_2 != 0) {
      uVar5 = *(ulong *)(*param_2 + 8);
      if ((uVar2 & uVar3) == 0) {
        uVar5 = uVar5 & uVar3;
      }
      else if (uVar2 <= uVar5) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar5 / uVar2;
        }
        uVar5 = uVar5 - uVar3 * uVar2;
      }
      *(long **)(lVar4 + uVar5 * 8) = param_2;
    }
  }
  else {
    *param_2 = *plVar6;
    *plVar6 = (long)param_2;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 104bf8034; end: 104bf80fb;  */

void FUN_104bf8034(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar7) goto LAB_104bf807c;
    }
    return;
  }
LAB_104bf807c:
  if (param_2 == 0) {
    FUN_104bf81f8(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    FUN_104bf8210(plVar2);
    FUN_104bf81f8(param_1,plVar2);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar7 = 0; param_2 != uVar7; uVar7 = uVar7 + 1) {
      *(undefined8 *)(lVar1 + uVar7 * 8) = 0;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      uVar5 = plVar2[1];
      uVar4 = param_2 - 1;
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = uVar5 / param_2;
      }
      uVar6 = uVar5;
      if (param_2 <= uVar5) {
        uVar6 = uVar5 - uVar7 * param_2;
      }
      if ((param_2 & uVar4) == 0) {
        uVar6 = uVar5 & uVar4;
      }
      *(long **)(lVar1 + uVar6 * 8) = param_1 + 2;
      while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        if ((param_2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        if (uVar7 != uVar6) {
          if (*(long *)(lVar1 + uVar7 * 8) == 0) {
            *(long **)(lVar1 + uVar7 * 8) = plVar3;
            uVar6 = uVar7;
          }
          else {
            *plVar3 = *plVar2;
            *plVar2 = **(undefined8 **)(lVar1 + uVar7 * 8);
            **(long **)(lVar1 + uVar7 * 8) = (long)plVar2;
            plVar2 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 104bf80fc; end: 104bf81f7;  */

void FUN_104bf80fc(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_104bf81f8(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_104bf8210(plVar3);
    FUN_104bf81f8(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 104bf81f8; end: 104bf820f;  */

void FUN_104bf81f8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104bf8210; end: 104bf822b;  */

void FUN_104bf8210(undefined8 param_1,ulong param_2)

{
  undefined8 *extraout_x8;
  int extraout_w10;
  undefined8 uStack_40;
  long lStack_38;
  
  if (param_2 >> 0x3d != 0) {
    FUN_104bd35f4();
    func_0x000104bf8274(&uStack_40);
    extraout_x8[1] = lStack_38;
    *extraout_x8 = uStack_40;
    if (lStack_38 != 0) {
      do {
        func_0x000104bfa0a0();
      } while (extraout_w10 != 0);
    }
    func_0x000104bf7e20(&uStack_40);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 3);
  return;
}



/* Entry: 104bf822c; end: 104bf837f;  */

void FUN_104bf822c(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000104bf8274(&uStack_30);
  param_1[1] = lStack_28;
  *param_1 = uStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x000104bfa0a0();
    } while (extraout_w10 != 0);
  }
  func_0x000104bf7e20(&uStack_30);
  return;
}



/* Entry: 104bf8380; end: 104bf8383;  */

void FUN_104bf8380(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e8b98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bf8384; end: 104bf8397;  */

void FUN_104bf8384(void)

{
  func_0x000104bf83a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bf8398; end: 104bf83ab;  */

void FUN_104bf8398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bfa2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bf83ac; end: 104bf87d7;  */

void FUN_104bf83ac(long *param_1,long param_2)

{
  long **pplVar1;
  long **pplVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long **pplVar6;
  long **pplVar7;
  long lVar8;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  ulong uVar9;
  long *plVar10;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  ulong uVar11;
  int extraout_w11;
  int extraout_w11_00;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x26;
  long lVar15;
  long *plStack_90;
  undefined8 uStack_88;
  uint uStack_7c;
  undefined8 uStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  pplVar7 = &plStack_90;
  if (*(byte *)(param_2 + 8) < 2) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  func_0x00010b9a9810(&plStack_68,param_2);
  if (plStack_68 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    plVar10 = plStack_68;
    func_0x000104bfa6e8();
    func_0x000104bfa614();
  }
  func_0x000104bfa720();
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[6];
    lVar15 = plVar10[5];
    param_1[1] = plVar10[6];
    *param_1 = lVar15;
    if (lVar8 == 0) {
      return;
    }
    do {
      func_0x000104bfa0a0();
    } while (extraout_w10 != 0);
    return;
  }
  func_0x00010b9a9810(&plStack_70,param_2);
  uStack_78 = 0;
  if (plStack_70[4] != 0) {
    do {
      func_0x000104bfa3c8();
      uStack_78 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x000104bfa390();
  uStack_7c = *(uint *)(plStack_70 + 3);
  lVar8 = 0x11328ad18;
  FUN_104be7ae4(0x11328ad18,&uStack_7c);
  pplVar6 = (long **)0x0;
  if (lVar8 != 0) {
    FUN_104bec6ac(&plStack_68,lVar8 + 0x18);
    lVar8 = lStack_60;
    if (plStack_68 != (long *)0x0) {
      plVar10 = plStack_68;
      func_0x000104bfa62c(plStack_68,&PTR_DAT_1107e7dd0,&PTR_DAT_1107e8710);
      lVar15 = 0;
      if ((plVar10 != (long *)0x0) && (lVar8 != 0)) {
        do {
          func_0x000104bfa0a0();
          lVar15 = lVar8;
        } while (extraout_w10_00 != 0);
      }
      *param_1 = (long)plVar10;
      param_1[1] = lVar15;
      plStack_90 = (long *)0x0;
      uStack_88 = 0;
      FUN_104bf87d8(&plStack_90);
      func_0x000104bec70c(&plStack_68);
      goto LAB_104bf8770;
    }
    pplVar6 = &plStack_68;
    func_0x000104bec70c();
  }
  func_0x000104bfa624();
  pplVar6[1] = (long *)0x0;
  pplVar6[2] = (long *)0x0;
  *pplVar6 = (long *)&PTR_FUN_1107e8c20;
  pplVar1 = pplVar6 + 3;
  if (plStack_70 == (long *)0x0) {
    plStack_90 = (long *)0x0;
LAB_104bf8560:
    *pplVar1 = (long *)&PTR_DAT_1107e8c70;
  }
  else {
    plStack_90 = plStack_70;
    if (plStack_70[2] == 0) goto LAB_104bf8560;
    do {
      func_0x000104bfa0c0();
    } while (extraout_w11_00 != 0);
    lVar8 = plStack_70[2];
    *pplVar1 = extraout_x8_00;
    if (lVar8 != 0) {
      do {
        func_0x000104bfa0a0();
      } while (extraout_w10_01 != 0);
    }
  }
  pplVar2 = pplVar6 + 4;
  plStack_68 = plStack_70;
  FUN_104bec750(pplVar2,&plStack_68);
  func_0x000104bfa720();
  *pplVar1 = (long *)&PTR_FUN_1107e86d0;
  *pplVar2 = (long *)&PTR_FUN_1107e8700;
  FUN_104be7e54();
  uVar5 = uStack_7c;
  uVar13 = uRam000000011328ad20;
  uVar14 = (ulong)uStack_7c;
  if (uRam000000011328ad20 != 0) {
    uVar9 = uRam000000011328ad20 - 1;
    uVar12 = (uint)uRam000000011328ad20;
    if ((uRam000000011328ad20 & uVar9) == 0) {
      unaff_x26 = (ulong)(uVar12 - 1 & uStack_7c);
    }
    else {
      unaff_x26 = uVar14;
      if (uRam000000011328ad20 <= uVar14) {
        uVar3 = 0;
        if (uVar12 != 0) {
          uVar3 = uStack_7c / uVar12;
        }
        unaff_x26 = (ulong)(uStack_7c - uVar3 * uVar12);
      }
    }
    plVar10 = *(long **)(lRam000000011328ad18 + unaff_x26 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_104bf8634;
          uVar11 = plVar10[1];
          if (uVar11 != uVar14) break;
          if (*(uint *)(plVar10 + 2) == uStack_7c) goto LAB_104bf8760;
        }
        if ((uRam000000011328ad20 & uVar9) == 0) {
          uVar11 = uVar11 & uVar9;
        }
        else if (uRam000000011328ad20 <= uVar11) {
          uVar4 = 0;
          if (uRam000000011328ad20 != 0) {
            uVar4 = uVar11 / uRam000000011328ad20;
          }
          uVar11 = uVar11 - uVar4 * uRam000000011328ad20;
        }
      } while (uVar11 == unaff_x26);
    }
  }
LAB_104bf8634:
  func_0x000104bfa61c();
  lStack_60 = 0x11328ad28;
  uStack_58 = 1;
  plStack_68 = (long *)pplVar7;
  *pplVar7 = (long *)0x0;
  pplVar7[1] = (long *)uVar14;
  *(uint *)(pplVar7 + 2) = uVar5;
  pplVar7[3] = (long *)pplVar2;
  pplVar7[4] = (long *)pplVar6;
  do {
    func_0x000104bfa0a0();
  } while (extraout_w10_02 != 0);
  if ((uVar13 == 0) || (fRam000000011328ad38 * (float)uVar13 < (float)(lRam000000011328ad30 + 1))) {
    func_0x000104bfa12c(uVar13 << 1);
    FUN_104bed8ac(0x11328ad18);
    uVar13 = uRam000000011328ad20;
    if ((uRam000000011328ad20 & uRam000000011328ad20 - 1) == 0) {
      unaff_x26 = (ulong)((int)uRam000000011328ad20 - 1U & uVar5);
    }
    else {
      unaff_x26 = uVar14;
      if (uRam000000011328ad20 <= uVar14) {
        uVar9 = 0;
        if (uRam000000011328ad20 != 0) {
          uVar9 = uVar14 / uRam000000011328ad20;
        }
        unaff_x26 = uVar14 - uVar9 * uRam000000011328ad20;
      }
    }
  }
  lVar8 = lRam000000011328ad18;
  if (*(long *)(lRam000000011328ad18 + unaff_x26 * 8) == 0) {
    *plStack_68 = (long)plRam000000011328ad28;
    plRam000000011328ad28 = plStack_68;
    *(undefined8 *)(lRam000000011328ad18 + unaff_x26 * 8) = 0x11328ad28;
    if (*plStack_68 != 0) {
      uVar14 = *(ulong *)(*plStack_68 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar14 = uVar14 & uVar13 - 1;
      }
      else if (uVar13 <= uVar14) {
        uVar9 = 0;
        if (uVar13 != 0) {
          uVar9 = uVar14 / uVar13;
        }
        uVar14 = uVar14 - uVar9 * uVar13;
      }
      *(long **)(lVar8 + uVar14 * 8) = plStack_68;
    }
  }
  else {
    func_0x000104bfa468();
  }
  plStack_68 = (long *)0x0;
  lRam000000011328ad30 = lRam000000011328ad30 + 1;
  FUN_104be7cd0(&plStack_68);
LAB_104bf8760:
  *param_1 = (long)pplVar1;
  param_1[1] = (long)pplVar6;
  plStack_68 = (long *)0x0;
  lStack_60 = 0;
  FUN_104bf87d8(&plStack_68);
LAB_104bf8770:
  func_0x000104bfa39c();
  FUN_104bdbf78(&uStack_78);
  FUN_104be7e54(&plStack_70);
  return;
}



/* Entry: 104bf87d8; end: 104bf87fb;  */

void FUN_104bf87d8(long param_1)

{
  func_0x000104bfa5f0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bf87fc; end: 104bf87ff;  */

void FUN_104bf87fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e8c20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bf8800; end: 104bf8813;  */

void FUN_104bf8800(void)

{
  func_0x000104bf881c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bf8814; end: 104bf8827;  */

void FUN_104bf8814(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bfa2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bf8828; end: 104bf884b;  */

void FUN_104bf8828(long param_1)

{
  func_0x000104bfa5f0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bf884c; end: 104bf884f;  */

void FUN_104bf884c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e8ca0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bf8850; end: 104bf8863;  */

void FUN_104bf8850(void)

{
  func_0x000104bf886c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bf8864; end: 104bf8877;  */

void FUN_104bf8864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bfa2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bf8878; end: 104bf889b;  */

void FUN_104bf8878(long param_1)

{
  func_0x000104bfa5f0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bf889c; end: 104bf889f;  */

void FUN_104bf889c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e8d20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bf88a0; end: 104bf88b3;  */

void FUN_104bf88a0(void)

{
  func_0x000104bf88bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bf88b4; end: 104bf88c7;  */

void FUN_104bf88b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bfa2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bf88c8; end: 104bf88eb;  */

void FUN_104bf88c8(long param_1)

{
  func_0x000104bfa5f0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bf88ec; end: 104bf88ef;  */

void FUN_104bf88ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e8db8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bf88f0; end: 104bf8903;  */

void FUN_104bf88f0(void)

{
  func_0x000104bf8914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bf8904; end: 104bf891f;  */

void FUN_104bf8904(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bfa2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bf8920; end: 104bf8943;  */

void FUN_104bf8920(long param_1)

{
  func_0x000104bfa5f0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bf8944; end: 104bf899b;  */

undefined8 FUN_104bf8944(void)

{
  int iVar1;
  
  if ((bRam00000001130a8518 & 1) == 0) {
    iVar1 = 0x130a8518;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130a8508);
      ___cxa_guard_release(0x1130a8518);
    }
  }
  return 0x1130a8508;
}



/* Entry: 104bf899c; end: 104bf89e7;  */

bool FUN_104bf899c(long param_1)

{
  bool bVar1;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    uStack_28 = 0;
    bVar1 = *(long *)(param_1 + 0x88) != 0;
    __ZNSt13exception_ptrD1Ev(&uStack_28);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 104bf89e8; end: 104bf965b;  */

void FUN_104bf89e8(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 in_ZR;
  int iVar4;
  code ****ppppcVar5;
  code **ppcVar6;
  code **ppcVar7;
  undefined8 extraout_x8;
  code ***pppcVar8;
  code ***extraout_x8_00;
  code ***extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w11;
  int extraout_w11_00;
  long extraout_x11;
  long extraout_x11_00;
  code ***unaff_x22;
  code ***pppcVar9;
  long lVar10;
  int iVar11;
  code ***unaff_x28;
  code **ppcStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  code **ppcStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_298;
  undefined2 uStack_290;
  code *pcStack_288;
  code **appcStack_280 [2];
  code *pcStack_270;
  code **appcStack_268 [2];
  code *apcStack_258 [3];
  code ***apppcStack_240 [3];
  code ***pppcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  code ***pppcStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  code ***pppcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  code **ppcStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  code **ppcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  code **ppcStack_1b0;
  code **ppcStack_1a8;
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  code **ppcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  code **appcStack_170 [2];
  ulong auStack_160 [2];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  code ***pppcStack_b0;
  code **ppcStack_a8;
  code *pcStack_a0;
  code **ppcStack_98;
  undefined8 uStack_78;
  
  func_0x000104bfa458();
  uStack_2d0 = param_2;
  lStack_2c8 = param_3;
  uStack_78 = extraout_x8;
  if (param_3 != 0) {
    do {
      func_0x000104bfa0a0();
    } while (extraout_w10 != 0);
    do {
      func_0x000104bfa0a0();
    } while (extraout_w10_00 != 0);
  }
  appcStack_170[0] = (code **)0x0;
  appcStack_170[1] = (code **)0x0;
  ppcStack_188 = (code **)0x0;
  uStack_180 = 0;
  uStack_2c0 = param_2;
  lStack_2b8 = param_3;
  FUN_104bdfdd0(&pppcStack_b0,&uStack_2c0,&ppcStack_188);
  FUN_104bdfe04(appcStack_170,&pppcStack_b0);
  func_0x000104bdfc18(&pppcStack_b0);
  func_0x000104bdfc18(&ppcStack_188);
  pppcStack_b0 = (code ***)(appcStack_170[0] + 9);
  ppcStack_a8 = (code **)CONCAT71(ppcStack_a8._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  ppcVar7 = appcStack_170[0];
  ppcStack_1b0 = appcStack_170[0];
  ppcStack_1a8 = appcStack_170[1];
  if (appcStack_170[1] != (code **)0x0) {
    do {
      func_0x000104bfa0a0();
    } while (extraout_w10_01 != 0);
  }
  ppcVar6 = apcStack_258;
  while (pppcVar8 = (code ***)ppcVar7, FUN_104bf899c(), ((ulong)pppcVar8 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(ppcVar7 + 3,&pppcStack_b0);
  }
  func_0x000104bdfc18(&ppcStack_1b0);
  if ((code **)appcStack_170[0][0x11] != (code **)0x0) {
    __ZNSt13exception_ptrC1ERKS_(&ppcStack_1c8);
    __ZSt17rethrow_exceptionSt13exception_ptr(&ppcStack_1c8);
LAB_104bf93b0:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104bf93b4);
    (*pcVar3)();
  }
  pcStack_2a8 = appcStack_170[0][1];
  ppcStack_2b0 = (code **)*appcStack_170[0];
  *appcStack_170[0] = (code *)0x0;
  appcStack_170[0][1] = (code *)0x0;
  func_0x0001000df5a0(&pppcStack_b0);
  func_0x000104bdfc18(appcStack_170);
  func_0x000104bfa63c(&UNK_10dd60628,ppcStack_2b0);
  func_0x000104bfa4f0();
  if ((code ***)ppcStack_2b0 == (code ***)0x0) {
    uStack_290 = 1;
    uStack_298 = 0;
  }
  else {
    pppcVar8 = (code ***)ppcStack_2b0;
    func_0x000104bfa10c(ppcStack_2b0,&PTR_DAT_1107e69f8);
    if (pppcVar8 == (code ***)0x0) {
      func_0x000104bfa244();
      appcStack_170[0] = ppcStack_2b0;
      unaff_x22 = (code ***)0x11328ad40;
      FUN_104bdbfcc(0x11328ad40,appcStack_170);
      if (unaff_x22 == (code ***)0x0) {
        iVar11 = 1;
      }
      else {
        iVar11 = *(int *)(unaff_x22 + 5);
        func_0x000104bf7d80(appcStack_170,unaff_x22 + 3);
        if ((code ***)appcStack_170[0] != (code ***)0x0) {
          pppcVar8 = (code ***)appcStack_170[0];
          if ((code **)appcStack_170[0][2] != (code **)0x0) {
            do {
              func_0x000104bfa0c0();
              pppcVar8 = extraout_x8_01;
            } while (extraout_w11_00 != 0);
          }
          pppcStack_b0 = pppcVar8;
          func_0x00010b9a8f6c(&uStack_298,&pppcStack_b0);
          FUN_104be7e54(&pppcStack_b0);
          pppcVar8 = appcStack_170;
          goto LAB_104bf92a0;
        }
        iVar11 = iVar11 + 1;
        FUN_104be7e54(appcStack_170);
      }
      pppcVar9 = unaff_x22;
      if ((bRam00000001136a3968 & 1) == 0) goto LAB_104bf9330;
      goto LAB_104bf8bfc;
    }
    pppcVar8 = (code ***)pppcVar8[1];
    if ((pppcVar8 != (code ***)0x0) && (pppcVar8[2] != (code **)0x0)) {
      do {
        func_0x000104bfa0c0();
        pppcVar8 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    appcStack_170[0] = (code **)pppcVar8;
    func_0x00010b9a8f6c(&uStack_298,appcStack_170);
    FUN_104be7e54(appcStack_170);
  }
  do {
    iVar11 = (int)unaff_x28;
    func_0x000104bf351c(appcStack_170,&uStack_298);
    func_0x000104bfa730();
    FUN_104bda910(appcStack_170);
    func_0x00010b9a8d98(&uStack_298);
    func_0x000104bdfbf4(&ppcStack_2b0);
    func_0x000104bdfc18(&uStack_2c0);
    func_0x000104bdfc18(&uStack_2d0);
    func_0x0001003b8370(*(undefined8 *)(param_1 + 8));
    func_0x000104bfa2ac(uStack_78);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
LAB_104bf9330:
    iVar4 = 0x136a3968;
    ___cxa_guard_acquire();
    pppcVar9 = unaff_x22;
    if (iVar4 != 0) {
      FUN_104bf7590();
      FUN_104bf6fe8(0);
      FUN_104bf6fe8(1);
      func_0x00010b9941f8(&pppcStack_b0);
      func_0x00010b993b40(appcStack_170,pppcStack_b0,0x1136a3978);
      if ((auStack_160[0] & 1) == 0) {
        FUN_104bdc2c8();
        goto LAB_104bf93b0;
      }
      func_0x0001003adcc0(0x1136a39a0,appcStack_170);
      func_0x0001003b12dc(appcStack_170);
      FUN_104bdc2fc(&pppcStack_b0);
      ___cxa_guard_release(0x1136a3968);
    }
LAB_104bf8bfc:
    pppcVar8 = (code ***)0x1136a39a8;
    func_0x0001003b2110(auStack_198);
    ppcStack_1b0 = (code **)FUN_104bf5a2c;
    func_0x000104bfa3b8();
    lVar10 = extraout_x11;
    if (extraout_x8_02 != 0) {
      do {
        func_0x000104bfa0a0();
        lVar10 = extraout_x11_00;
      } while (extraout_w10_02 != 0);
    }
    ppcStack_188 = (code **)FUN_104bf5a2c;
    *(undefined8 *)(lVar10 + 8) = 0;
    *(undefined8 *)(lVar10 + 0x10) = 0;
    func_0x000104bfa488();
    pppcStack_b0 = (code ***)FUN_104bf9718;
    ppcStack_a8 = (code **)&PTR_FUN_1107e8e88;
    pcStack_a0 = FUN_104bf5a2c;
    ppcStack_98 = ppcStack_2f0;
    uStack_180 = 0;
    uStack_178 = 0;
    func_0x000104bfa5c0();
    ppcStack_1c8 = (code **)pppcVar8;
    func_0x000104bfa56c();
    (*extraout_x8_03)(&ppcStack_a8);
    do {
      func_0x000104bfa29c();
    } while (extraout_w10_03 != 0);
    pppcStack_b0 = pppcVar8;
    func_0x000104bfa5c8(appcStack_170);
    func_0x000104bfa5b8();
    pppcVar8 = &ppcStack_1c8;
    FUN_104bda3d0();
    func_0x000104bfa694();
    ppcStack_1c8 = (code **)FUN_104bf5ba0;
    func_0x000104bfa3b8();
    if (extraout_x8_04 != 0) {
      do {
        func_0x000104bfa0a0();
      } while (extraout_w10_04 != 0);
    }
    ppcStack_188 = (code **)FUN_104bf5ba0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    func_0x000104bfa488();
    pppcStack_b0 = (code ***)FUN_104bf97f4;
    ppcStack_a8 = (code **)&PTR_FUN_1107e8ea8;
    pcStack_a0 = FUN_104bf5ba0;
    ppcStack_98 = ppcStack_2f0;
    uStack_180 = 0;
    uStack_178 = 0;
    pcVar3 = pcStack_2e8;
    func_0x000104bfa5c0();
    ppcStack_1e0 = (code **)pppcVar8;
    func_0x000104bfa56c();
    (*extraout_x8_05)(&ppcStack_a8);
    do {
      func_0x000104bfa29c();
    } while (extraout_w10_05 != 0);
    pppcStack_b0 = pppcVar8;
    func_0x000104bfa5c8(auStack_160);
    func_0x000104bfa5b8();
    pppcVar8 = &ppcStack_1e0;
    FUN_104bda3d0();
    func_0x000104bfa694();
    ppcStack_1e0 = (code **)FUN_104bf5d2c;
    func_0x000104bfa3b8();
    if (extraout_x8_06 != 0) {
      do {
        func_0x000104bfa0a0();
      } while (extraout_w10_06 != 0);
    }
    ppcStack_188 = (code **)FUN_104bf5d2c;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    func_0x000104bfa488();
    func_0x000104bfa1e8(FUN_104bf98a4);
    func_0x000104bfa5c0();
    pppcStack_1f8 = pppcVar8;
    func_0x000104bfa33c();
    do {
      func_0x000104bfa29c();
    } while (extraout_w10_07 != 0);
    pppcStack_b0 = pppcVar8;
    func_0x000104bfa5c8(auStack_150);
    func_0x000104bfa5b8();
    ppppcVar5 = &pppcStack_1f8;
    FUN_104bda3d0();
    func_0x000104bfa4b8();
    pppcStack_1f8 = (code ***)FUN_104bf5ea0;
    func_0x000104bfa3b8();
    if (extraout_x8_07 != 0) {
      do {
        func_0x000104bfa0a0();
      } while (extraout_w10_08 != 0);
    }
    ppcStack_188 = (code **)FUN_104bf5ea0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    func_0x000104bfa488();
    func_0x000104bfa1e8(FUN_104bf9954);
    func_0x000104bfa5c0();
    pppcStack_210 = (code ***)ppppcVar5;
    func_0x000104bfa33c();
    do {
      func_0x000104bfa29c();
    } while (extraout_w10_09 != 0);
    pppcStack_b0 = (code ***)ppppcVar5;
    func_0x000104bfa5c8(auStack_140);
    func_0x000104bfa5b8();
    ppppcVar5 = &pppcStack_210;
    FUN_104bda3d0();
    func_0x000104bfa4b8();
    pppcStack_210 = (code ***)FUN_104bf6014;
    func_0x000104bfa3b8();
    if (extraout_x8_08 != 0) {
      do {
        func_0x000104bfa0a0();
      } while (extraout_w10_10 != 0);
    }
    ppcStack_188 = (code **)FUN_104bf6014;
    uStack_208 = 0;
    uStack_200 = 0;
    func_0x000104bfa488();
    func_0x000104bfa1e8(FUN_104bf9a04);
    func_0x000104bfa5c0();
    pppcStack_228 = (code ***)ppppcVar5;
    func_0x000104bfa33c();
    do {
      func_0x000104bfa29c();
    } while (extraout_w10_11 != 0);
    pppcStack_b0 = (code ***)ppppcVar5;
    func_0x000104bfa5c8(auStack_130);
    func_0x000104bfa5b8();
    ppppcVar5 = &pppcStack_228;
    FUN_104bda3d0();
    func_0x000104bfa4b8();
    pppcStack_228 = (code ***)FUN_104bf6188;
    func_0x000104bfa3b8();
    if (extraout_x8_09 != 0) {
      do {
        func_0x000104bfa0a0();
      } while (extraout_w10_12 != 0);
    }
    ppcStack_188 = (code **)FUN_104bf6188;
    uStack_220 = 0;
    uStack_218 = 0;
    func_0x000104bfa488();
    func_0x000104bfa1e8(FUN_104bf9ab4);
    func_0x000104bfa5c0();
    apppcStack_240[0] = (code ***)ppppcVar5;
    func_0x000104bfa33c();
    do {
      func_0x000104bfa29c();
    } while (extraout_w10_13 != 0);
    pppcStack_b0 = (code ***)ppppcVar5;
    func_0x000104bfa5c8(auStack_120);
    func_0x000104bfa5b8();
    FUN_104bda3d0(apppcStack_240);
    func_0x000104bfa4b8();
    pppcStack_b0 = (code ***)FUN_104bf6400;
    func_0x000104bfa49c();
    ppcStack_a8 = ppcStack_2f0;
    pcStack_a0 = pcVar3;
    if (extraout_x8_10 != 0) {
      do {
        func_0x000104bfa0a0();
      } while (extraout_w10_14 != 0);
    }
    FUN_104bf62fc(auStack_110,&pppcStack_b0);
    ppcStack_188 = (code **)FUN_104bf66d4;
    func_0x000104bfa49c();
    ppcVar6[0x1c] = pcVar3;
    ppcVar6[0x1b] = (code *)ppcStack_2f0;
    if (extraout_x8_11 != 0) {
      do {
        func_0x000104bfa0a0();
      } while (extraout_w10_15 != 0);
    }
    FUN_104bf62fc(auStack_100,&ppcStack_188);
    apppcStack_240[0] = (code ***)FUN_104bf6718;
    func_0x000104bfa49c();
    ppcVar6[5] = pcVar3;
    ppcVar6[4] = (code *)ppcStack_2f0;
    if (extraout_x8_12 != 0) {
      do {
        func_0x000104bfa0a0();
      } while (extraout_w10_16 != 0);
    }
    FUN_104bf62fc(auStack_f0,apppcStack_240);
    apcStack_258[0] = FUN_104bf675c;
    func_0x000104bfa49c();
    ppcVar6[2] = pcVar3;
    ppcVar6[1] = (code *)ppcStack_2f0;
    if (extraout_x8_13 != 0) {
      do {
        func_0x000104bfa0a0();
      } while (extraout_w10_17 != 0);
    }
    FUN_104bf62fc(auStack_e0,apcStack_258);
    pcStack_270 = FUN_104bf6a30;
    func_0x000104bfa49c();
    appcStack_268[0] = ppcStack_2f0;
    if (extraout_x8_14 != 0) {
      do {
        func_0x000104bfa0a0();
      } while (extraout_w10_18 != 0);
    }
    FUN_104bf62fc(auStack_d0,&pcStack_270);
    pcStack_288 = FUN_104bf6d04;
    func_0x000104bfa49c();
    appcStack_280[0] = ppcStack_2f0;
    if (extraout_x8_15 != 0) {
      do {
        func_0x000104bfa0a0();
      } while (extraout_w10_19 != 0);
    }
    FUN_104bf62fc(auStack_c0,&pcStack_288);
    unaff_x28 = appcStack_170;
    FUN_104bdb9bc(auStack_190,auStack_198,appcStack_170,0xc);
    lVar10 = 0xb0;
    do {
      func_0x00010b9a8d98((long)unaff_x28 + lVar10);
      lVar10 = lVar10 + -0x10;
      in_ZR = lVar10 == -0x10;
    } while (!(bool)in_ZR);
    func_0x000104bdfbf4(appcStack_280);
    func_0x000104bdfbf4(appcStack_268);
    func_0x000104bfa694();
    func_0x000104bfa4b8();
    func_0x000104bdfbf4(&uStack_180);
    func_0x000104bfa3fc(&pppcStack_b0);
    func_0x000104bfa3fc(&pppcStack_228);
    func_0x000104bfa3fc(&pppcStack_210);
    func_0x000104bfa3fc(&pppcStack_1f8);
    func_0x000104bfa3fc(&ppcStack_1e0);
    func_0x000104bfa3fc(&ppcStack_1c8);
    func_0x000104bfa3fc(&ppcStack_1b0);
    func_0x0001003b1f60(auStack_198);
    ppcVar6 = (code **)0x50;
    __Znwm();
    ppcVar7 = ppcVar6 + 1;
    *ppcVar7 = (code *)0x0;
    ppcVar6[2] = (code *)0x0;
    *ppcVar6 = (code *)&PTR_DAT_1107e8f78;
    unaff_x22 = (code ***)(ppcVar6 + 3);
    func_0x00010b9ace44(unaff_x22,auStack_190);
    ppcVar6[3] = (code *)&PTR_DAT_1107e8fc8;
    func_0x000104bfa49c();
    ppcVar6[9] = pcVar3;
    ppcVar6[8] = (code *)ppcStack_2f0;
    if (extraout_x8_16 != 0) {
      do {
        func_0x000104bfa0a0();
      } while (extraout_w10_20 != 0);
    }
    if ((ppcVar6[5] == (code *)0x0) || (in_ZR = *(long *)(ppcVar6[5] + 8) == -1, (bool)in_ZR)) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppcVar7,0x10);
        if (bVar2) {
          *ppcVar7 = *ppcVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      appcStack_170[0] = (code **)unaff_x22;
      appcStack_170[1] = ppcVar6;
      func_0x0001003a8180(ppcVar6 + 4,appcStack_170);
      func_0x0001003a90c4(appcStack_170);
      if (ppcVar6[5] != (code *)0x0) goto LAB_104bf91cc;
    }
    else {
LAB_104bf91cc:
      do {
        func_0x000104bfa0a0();
      } while (extraout_w10_21 != 0);
    }
    ppcStack_188 = (code **)unaff_x22;
    func_0x0001003a916c(unaff_x22);
    FUN_104bdbf78(auStack_190);
    ppcVar7 = ppcStack_2b0;
    if (pppcVar9 == (code ***)0x0) {
      FUN_104bf822c(&pppcStack_b0);
      pcStack_a0 = (code *)CONCAT44(pcStack_a0._4_4_,iVar11);
      func_0x000104bfa4d8();
      appcStack_170[1] = (code **)0x11328ad50;
      auStack_160[0] = 1;
      unaff_x22[2] = ppcVar7;
      *unaff_x22 = (code **)0x0;
      unaff_x22[1] = (code **)0x0;
      unaff_x22[4] = ppcStack_a8;
      unaff_x22[3] = (code **)pppcStack_b0;
      pppcStack_b0 = (code ***)0x0;
      ppcStack_a8 = (code **)0x0;
      *(int *)(unaff_x22 + 5) = iVar11;
      ppcVar7 = (code **)0x11328ad58;
      appcStack_170[0] = (code **)unaff_x22;
      FUN_104bf7ea8();
      unaff_x22[1] = ppcVar7;
      pppcVar8 = unaff_x22;
      func_0x000104bf7e44(0x11328ad40);
      if (((ulong)pppcVar8 & 1) != 0) {
        appcStack_170[0] = (code **)0x0;
      }
      FUN_104bdc220(appcStack_170);
      ppppcVar5 = &pppcStack_b0;
    }
    else {
      FUN_104bf822c(appcStack_170,unaff_x22);
      auStack_160[0] = CONCAT44(auStack_160[0]._4_4_,iVar11);
      func_0x000104bf7db8(pppcVar9 + 3,appcStack_170);
      ppppcVar5 = (code ****)appcStack_170;
      unaff_x22 = pppcVar9;
    }
    func_0x000104bdc2a0(ppppcVar5);
    func_0x00010b9a8f6c(&uStack_298,&ppcStack_188);
    pppcVar8 = &ppcStack_188;
    ppcStack_2f0 = (code **)pppcVar9;
LAB_104bf92a0:
    FUN_104be7e54(pppcVar8);
    func_0x000104bfa250();
  } while( true );
}



/* Entry: 104bf965c; end: 104bf965f;  */

undefined8 * FUN_104bf965c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e8e48;
  func_0x000104bf96f0(param_1 + 1);
  return param_1;
}



/* Entry: 104bf9660; end: 104bf9673;  */

void FUN_104bf9660(void)

{
  FUN_104bf96c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bf9674; end: 104bf96c3;  */

void FUN_104bf9674(long param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      func_0x000104bfa0a0();
    } while (extraout_w10 != 0);
  }
  FUN_104bf89e8(param_1 + 8);
  func_0x000104bfa69c();
  return;
}



/* Entry: 104bf96c4; end: 104bf9717;  */

undefined8 * FUN_104bf96c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e8e48;
  func_0x000104bf96f0(param_1 + 1);
  return param_1;
}



/* Entry: 104bf9718; end: 104bf97ab;  */

void FUN_104bf9718(void)

{
  func_0x000104bfa380();
  func_0x000104bfa34c();
  return;
}



/* Entry: 104bf97ac; end: 104bf97f3;  */

void FUN_104bf97ac(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f25d0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bf97f4; end: 104bf9887;  */

void FUN_104bf97f4(void)

{
  func_0x000104bfa380();
  func_0x000104bfa34c();
  return;
}



/* Entry: 104bf9888; end: 104bf98a3;  */

void FUN_104bf9888(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f25d0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bf98a4; end: 104bf9937;  */

void FUN_104bf98a4(void)

{
  func_0x000104bfa380();
  func_0x000104bfa34c();
  return;
}



/* Entry: 104bf9938; end: 104bf9953;  */

void FUN_104bf9938(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f25d0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bf9954; end: 104bf99e7;  */

void FUN_104bf9954(void)

{
  func_0x000104bfa380();
  func_0x000104bfa34c();
  return;
}



/* Entry: 104bf99e8; end: 104bf9a03;  */

void FUN_104bf99e8(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f25d0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bf9a04; end: 104bf9a97;  */

void FUN_104bf9a04(void)

{
  func_0x000104bfa380();
  func_0x000104bfa34c();
  return;
}



/* Entry: 104bf9a98; end: 104bf9ab3;  */

void FUN_104bf9a98(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f25d0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bf9ab4; end: 104bf9b47;  */

void FUN_104bf9ab4(void)

{
  func_0x000104bfa380();
  func_0x000104bfa34c();
  return;
}



/* Entry: 104bf9b48; end: 104bf9b63;  */

void FUN_104bf9b48(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f25d0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bf9b64; end: 104bf9bcf;  */

void FUN_104bf9b64(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))(param_2 + 0x18,param_1);
  return;
}



/* Entry: 104bf9bd0; end: 104bf9bef;  */

void FUN_104bf9bd0(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f25d0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bf9bf0; end: 104bf9c03;  */

void FUN_104bf9bf0(void)

{
  FUN_104bf9cbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bf9c04; end: 104bf9c0f;  */

void FUN_104bf9c04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bfa2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bf9c10; end: 104bf9c23;  */

void FUN_104bf9c10(void)

{
  FUN_104bf9c34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bf9c24; end: 104bf9c33;  */

undefined1  [16] FUN_104bf9c24(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = "Djinni C++ Proxy";
  return auVar1;
}



/* Entry: 104bf9c34; end: 104bf9cbb;  */

void FUN_104bf9c34(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_DAT_1107e8fc8;
  func_0x000104bfa244();
  puVar3 = param_1 + 5;
  uStack_28 = *puVar3;
  lVar2 = 0x11328ad40;
  FUN_104bdbfcc(0x11328ad40,&uStack_28);
  iVar1 = *(int *)(lVar2 + 0x28) + -1;
  *(int *)(lVar2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    uStack_28 = *puVar3;
    FUN_104bdc09c(0x11328ad40,&uStack_28);
  }
  func_0x000104bfa250();
  FUN_104bdfbf4(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 104bf9cbc; end: 104bf9ccf;  */

void FUN_104bf9cbc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107e8f78;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bf9cd0; end: 104bf9cf3;  */

void FUN_104bf9cd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_1107e9020;
  return;
}



/* Entry: 104bf9cf4; end: 104bf9d1b;  */

void FUN_104bf9cf4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1107e9020;
  return;
}



/* Entry: 104bf9d1c; end: 104bf9d37;  */

void FUN_104bf9d1c(void)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined1 auStack_348 [16];
  undefined1 auStack_338 [16];
  undefined8 uStack_328;
  undefined1 auStack_320 [16];
  undefined1 auStack_310 [16];
  undefined8 uStack_300;
  undefined1 auStack_2f8 [16];
  undefined1 auStack_2e8 [16];
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [16];
  undefined1 auStack_2c0 [16];
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [16];
  undefined8 uStack_288;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined8 uStack_260;
  undefined1 auStack_258 [16];
  undefined8 uStack_248;
  undefined1 auStack_240 [16];
  undefined8 uStack_230;
  undefined1 auStack_228 [16];
  undefined8 uStack_218;
  undefined1 auStack_210 [16];
  undefined8 uStack_200;
  undefined1 auStack_1f8 [16];
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [16];
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined1 auStack_150 [16];
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_104bf6fe8(0);
  func_0x000104bfa458();
  uStack_38 = extraout_x8;
  FUN_104be665c();
  FUN_104beb2e4(1);
  FUN_104bf0be0(1);
  FUN_104bf14f8(1);
  FUN_104bf2a50(1);
  FUN_104bf4ba4(1);
  FUN_104bf52d8(1);
  FUN_104bfa808(1);
  FUN_104bfb764(1);
  func_0x0001052c0f9c(1);
  func_0x0001052c3c3c(1);
  bVar1 = bRam00000001136a3959;
  bRam00000001136a3959 = 1;
  if ((bVar1 & 1) != 0) goto LAB_104bf7094;
  if ((bRam00000001136a3970 & 1) == 0) goto LAB_104bf70b0;
  while( true ) {
    func_0x000108b80888(0x1136a39b0,1);
LAB_104bf7094:
    func_0x000104bfa2ac(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_104bf70b0:
    iVar2 = 0x136a3970;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_104bf7590();
      func_0x0001003a83dc(&uStack_1d0,"getConversationManager");
      FUN_104bec5bc();
      func_0x000104bfa2d8(auStack_1e0);
      uStack_158 = uStack_1d0;
      uStack_1d0 = 0;
      func_0x0001003aef98(auStack_150,auStack_1e0);
      pcVar3 = "getFeedManagerByType";
      func_0x0001003a83dc(&uStack_1e8,"getFeedManagerByType");
      FUN_104bf0f3c();
      pcVar4 = pcVar3;
      FUN_104bf8944();
      func_0x0001003adcc0(auStack_168,pcVar4);
      func_0x000104bfa4e8(auStack_1f8,pcVar3,auStack_168);
      uStack_140 = uStack_1e8;
      uStack_1e8 = 0;
      func_0x0001003aef98(auStack_138,auStack_1f8);
      func_0x0001003a83dc(&uStack_200,"getGroupsManager");
      FUN_104bf2c4c();
      func_0x000104bfa2d8(auStack_210);
      uStack_128 = uStack_200;
      uStack_200 = 0;
      func_0x0001003aef98(auStack_120,auStack_210);
      func_0x0001003a83dc(&uStack_218,"getMessageWindowManager");
      FUN_104bf4ee0();
      func_0x000104bfa2d8(auStack_228);
      uStack_110 = uStack_218;
      uStack_218 = 0;
      func_0x0001003aef98(auStack_108,auStack_228);
      func_0x0001003a83dc(&uStack_230,"getSnapManager");
      FUN_104bfb908();
      func_0x000104bfa2d8(auStack_240);
      uStack_f8 = uStack_230;
      uStack_230 = 0;
      func_0x0001003aef98(auStack_f0,auStack_240);
      func_0x0001003a83dc(&uStack_248,"getNotificationCenterManager");
      func_0x0001052c15c4();
      func_0x000104bfa2d8(auStack_258);
      uStack_e0 = uStack_248;
      uStack_248 = 0;
      func_0x0001003aef98(auStack_d8,auStack_258);
      pcVar3 = "setConversationListener";
      func_0x0001003a83dc(&uStack_260,"setConversationListener");
      func_0x0001003b166c(auStack_280);
      FUN_104bfab30();
      func_0x0001003adcc0(auStack_178,pcVar3);
      func_0x000104bfa4e8(auStack_270,auStack_280,auStack_178);
      uStack_c8 = uStack_260;
      uStack_260 = 0;
      func_0x0001003aef98(auStack_c0,auStack_270);
      pcVar3 = "setPublicGroupsFeedListener";
      func_0x0001003a83dc(&uStack_288,"setPublicGroupsFeedListener");
      func_0x0001003b166c(auStack_2a8);
      FUN_104bf180c();
      func_0x0001003adcc0(auStack_188,pcVar3);
      func_0x000104bfa4e8(auStack_298,auStack_2a8,auStack_188);
      uStack_b0 = uStack_288;
      uStack_288 = 0;
      func_0x0001003aef98(auStack_a8,auStack_298);
      pcVar3 = "setFriendsFeedListener";
      func_0x0001003a83dc(&uStack_2b0,"setFriendsFeedListener");
      func_0x0001003b166c(auStack_2d0);
      FUN_104bf180c();
      func_0x0001003adcc0(auStack_198,pcVar3);
      func_0x000104bfa4e8(auStack_2c0,auStack_2d0,auStack_198);
      uStack_98 = uStack_2b0;
      uStack_2b0 = 0;
      func_0x0001003aef98(auStack_90,auStack_2c0);
      pcVar3 = "setMessageWindowListener";
      func_0x0001003a83dc(&uStack_2d8,"setMessageWindowListener");
      func_0x0001003b166c(auStack_2f8);
      FUN_104bf5578();
      func_0x0001003adcc0(auStack_1a8,pcVar3);
      func_0x000104bfa4e8(auStack_2e8,auStack_2f8,auStack_1a8);
      uStack_80 = uStack_2d8;
      uStack_2d8 = 0;
      func_0x0001003aef98(auStack_78,auStack_2e8);
      pcVar3 = "setActiveConversationListener";
      func_0x0001003a83dc(&uStack_300);
      func_0x0001003b166c(auStack_320);
      FUN_104be689c();
      func_0x0001003adcc0(auStack_1b8,pcVar3);
      func_0x000104bfa4e8(auStack_310,auStack_320,auStack_1b8);
      uStack_68 = uStack_300;
      uStack_300 = 0;
      func_0x0001003aef98(auStack_60,auStack_310);
      pcVar3 = "setNotificationCenterListener";
      func_0x000104bfa718();
      func_0x0001003b166c(auStack_348);
      func_0x0001052c3f0c();
      func_0x0001003adcc0(auStack_1c8,pcVar3);
      func_0x000104bfa4e8(auStack_338,auStack_348,auStack_1c8);
      uStack_50 = uStack_328;
      uStack_328 = 0;
      func_0x0001003aef98(auStack_48,auStack_338);
      FUN_104bdbd44(0x1136a39b0,0x1136a3978,1,&uStack_158,0xc);
      lVar5 = 0x108;
      do {
        func_0x0001003b1c5c(auStack_150 + lVar5 + -8);
        lVar5 = lVar5 + -0x18;
        in_ZR = lVar5 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000104bfa3a8(auStack_338);
      func_0x000104bfa3a8(auStack_1c8);
      func_0x000104bfa3a8(auStack_348);
      func_0x000104bfa728();
      func_0x000104bfa3a8(auStack_310);
      func_0x000104bfa3a8(auStack_1b8);
      func_0x000104bfa3a8(auStack_320);
      func_0x0001003a8c94(&uStack_300);
      func_0x000104bfa3a8(auStack_2e8);
      func_0x000104bfa3a8(auStack_1a8);
      func_0x000104bfa3a8(auStack_2f8);
      func_0x0001003a8c94(&uStack_2d8);
      func_0x000104bfa3a8(auStack_2c0);
      func_0x000104bfa3a8(auStack_198);
      func_0x000104bfa3a8(auStack_2d0);
      func_0x0001003a8c94(&uStack_2b0);
      func_0x000104bfa3a8(auStack_298);
      func_0x000104bfa3a8(auStack_188);
      func_0x000104bfa3a8(auStack_2a8);
      func_0x0001003a8c94(&uStack_288);
      func_0x000104bfa3a8(auStack_270);
      func_0x000104bfa3a8(auStack_178);
      func_0x000104bfa3a8(auStack_280);
      func_0x0001003a8c94(&uStack_260);
      func_0x000104bfa3a8(auStack_258);
      func_0x0001003a8c94(&uStack_248);
      func_0x000104bfa3a8(auStack_240);
      func_0x0001003a8c94(&uStack_230);
      func_0x000104bfa3a8(auStack_228);
      func_0x0001003a8c94(&uStack_218);
      func_0x000104bfa3a8(auStack_210);
      func_0x0001003a8c94(&uStack_200);
      func_0x000104bfa3a8(auStack_1f8);
      func_0x000104bfa3a8(auStack_168);
      func_0x0001003a8c94(&uStack_1e8);
      func_0x000104bfa3a8(auStack_1e0);
      func_0x0001003a8c94(&uStack_1d0);
      ___cxa_guard_release(0x1136a3970);
    }
  }
  return;
}



/* Entry: 104bf9d38; end: 104bf9d6f;  */

long FUN_104bf9d38(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1107e9080);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104bf9d70; end: 104bf9d7b;  */

undefined ** FUN_104bf9d70(void)

{
  return &PTR_DAT_1107e9080;
}



/* Entry: 104bf9d7c; end: 104bf9f53;  */

void FUN_104bf9d7c(undefined8 param_1,long ****param_2,long ***param_3)

{
  undefined1 in_ZR;
  long ****pppplVar1;
  int iVar2;
  undefined8 extraout_x8;
  long ***extraout_x8_00;
  long ***extraout_x8_01;
  long ***ppplVar3;
  long ***extraout_x8_02;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long ***ppplStack_78;
  long **pplStack_70;
  long **pplStack_68;
  long ***ppplStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long **pplStack_48;
  undefined8 uStack_38;
  
  func_0x000104bfa458();
  uStack_38 = extraout_x8;
  (*(code *)param_3[2])(param_1);
  while( true ) {
    func_0x000104bfa2ac(uStack_38);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    iVar2 = (int)param_3;
    if (iVar2 == 0) break;
    in_ZR = iVar2 == 3;
    if ((bool)in_ZR) {
      ___cxa_begin_catch();
      FUN_104bf2d3c(&ppplStack_60);
      uStack_50 = 2;
      ppplVar3 = (long ***)0x0;
      if (param_2[2] != (long ***)0x0) {
        do {
          func_0x000104bfa3c8();
          ppplVar3 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      pplStack_48 = (long **)ppplVar3;
      func_0x00010b9a4940();
      FUN_104bda910(&uStack_50);
      ppplVar3 = ppplStack_60;
      if ((ppplStack_60 != (long ***)0x0) && (ppplStack_60[2] != (long **)0x0)) {
        do {
          func_0x000104bfa0c0();
          ppplVar3 = extraout_x8_01;
        } while (extraout_w11_00 != 0);
      }
      param_3 = &pplStack_68;
      pplStack_68 = (long **)ppplVar3;
      func_0x000104bfa738();
      FUN_104bddedc(&pplStack_68);
      param_2 = &ppplStack_60;
      FUN_104bf3564();
    }
    else {
      in_ZR = iVar2 == 2;
      if (!(bool)in_ZR) goto LAB_104bf9f48;
      ___cxa_begin_catch();
      pppplVar1 = param_2;
      func_0x0001003a8364();
      (*(code *)(*param_2)[2])();
      uStack_58 = 0;
      ppplStack_60 = (long ***)param_2;
      func_0x000104bfa238();
      func_0x0001003a9204(&uStack_50);
      func_0x0001003ac750(&ppplStack_60,pppplVar1,&uStack_50);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_50);
      FUN_104bf2d3c(&pplStack_68);
      ppplStack_78 = ppplStack_60;
      ppplStack_60 = (long ***)0x0;
      func_0x00010b99f560(&pplStack_70,&ppplStack_78);
      uStack_50 = 2;
      pplStack_48 = pplStack_70;
      pplStack_70 = (long **)0x0;
      func_0x000104bfa730();
      func_0x000104bda914(&uStack_50);
      FUN_104bda93c(&pplStack_70);
      func_0x0001003a8c94(&ppplStack_78);
      ppplVar3 = (long ***)pplStack_68;
      if (((long ***)pplStack_68 != (long ***)0x0) && ((long **)pplStack_68[2] != (long **)0x0)) {
        do {
          func_0x000104bfa0c0();
          ppplVar3 = extraout_x8_02;
        } while (extraout_w11_01 != 0);
      }
      param_3 = &pplStack_70;
      pplStack_70 = (long **)ppplVar3;
      func_0x000104bfa738();
      FUN_104bddedc(&pplStack_70);
      FUN_104bf3564(&pplStack_68);
      param_2 = &ppplStack_60;
      func_0x0001003a8c94();
    }
    ___cxa_end_catch();
  }
LAB_104bf9f50:
  __Unwind_Resume();
  return;
LAB_104bf9f48:
  do {
    FUN_104bd46a0();
  } while ((int)param_3 != 0);
  goto LAB_104bf9f50;
}



/* Entry: 104bf9f54; end: 104bf9f6f;  */

void FUN_104bf9f54(void)

{
  return;
}



/* Entry: 104bf9f70; end: 104bfa003;  */

void FUN_104bf9f70(void)

{
  code *extraout_x9;
  
  func_0x000104bfa380();
  (*extraout_x9)();
  return;
}



/* Entry: 104bfa004; end: 104bfa17f;  */

void FUN_104bfa004(void)

{
  return;
}



/* Entry: 104bfa180; end: 104bfa1a3;  */

void FUN_104bfa180(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  undefined4 unaff_w22;
  undefined8 in_register_00005008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  *(undefined8 *)(param_2 + 0x20) = in_register_00005008;
  *(undefined8 *)(param_2 + 0x18) = param_1;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  *(undefined4 *)(param_2 + 0x28) = unaff_w22;
  lVar1 = unaff_x20 + 0x18;
  FUN_104bf7ea8();
  *(long *)(unaff_x21 + 8) = lVar1;
  return;
}



/* Entry: 104bfa1a4; end: 104bfa807;  */

long FUN_104bfa1a4(void)

{
  long unaff_x21;
  undefined4 unaff_w22;
  undefined4 uStack0000000000000048;
  
  uStack0000000000000048 = unaff_w22;
  func_0x000104bf82fc();
  *(undefined4 *)(unaff_x21 + 0x28) = uStack0000000000000048;
  return unaff_x21 + 0x18;
}



/* Entry: 104bfa808; end: 104bfab2f;  */

void FUN_104bfa808(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined8 uStack_138;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000104bfaf78();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136a39d0);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136a39d0) = 1;
  uStack_38 = extraout_x8;
  if ((bVar1 & 1) != 0) goto LAB_104bfa85c;
  if ((bRam00000001136a39d8 & 1) == 0) goto LAB_104bfa880;
  while( true ) {
    func_0x000108b80888(0x1136a39f0);
LAB_104bfa85c:
    func_0x000104bfaf5c(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_104bfa880:
    iVar2 = 0x136a39d8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_104bfabcc();
      pcVar3 = "onConversationUpdated";
      func_0x0001003a83dc(&uStack_e8,"onConversationUpdated");
      func_0x0001003b166c(auStack_108);
      FUN_104bfaf00();
      puVar4 = auStack_c0;
      func_0x0001003adcc0(puVar4,pcVar3);
      func_0x00010529dde0();
      puVar5 = auStack_b0;
      func_0x0001003adcc0(puVar5,puVar4);
      FUN_104be7878();
      puVar4 = auStack_a0;
      func_0x0001003adcc0(puVar4,puVar5);
      FUN_104be78d4();
      func_0x0001003adcc0(auStack_90,puVar4);
      FUN_104bdbd48(auStack_f8,auStack_108,auStack_c0,4);
      uStack_80 = uStack_e8;
      uStack_e8 = 0;
      func_0x0001003aef98(auStack_78,auStack_f8);
      func_0x0001003a83dc(&uStack_110,"onSendComplete");
      func_0x0001003b166c(auStack_130);
      if ((bRam00000001136a39e0 & 1) == 0) {
        iVar2 = 0x136a39e0;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          if ((bRam00000001136a39e8 & 1) == 0) {
            iVar2 = 0x136a39e8;
            ___cxa_guard_acquire();
            if (iVar2 != 0) {
              func_0x00010b990e20(0x1136a3a10);
              ___cxa_guard_release(0x1136a39e8);
            }
          }
          func_0x00010b990784(0x1136a3a10);
          ___cxa_guard_release(0x1136a39e0);
        }
      }
      func_0x0001003adcc0(auStack_d0,0x1136a3a00);
      FUN_104bdbd48(auStack_120,auStack_130,auStack_d0,1);
      uStack_68 = uStack_110;
      uStack_110 = 0;
      func_0x0001003aef98(auStack_60,auStack_120);
      pcVar3 = "onConversationRemoved";
      func_0x0001003a83dc(&uStack_138,"onConversationRemoved");
      func_0x0001003b166c(auStack_158);
      func_0x00010529dde0();
      func_0x0001003adcc0(auStack_e0,pcVar3);
      FUN_104bdbd48(auStack_148,auStack_158,auStack_e0,1);
      uStack_50 = uStack_138;
      uStack_138 = 0;
      func_0x0001003aef98(auStack_48,auStack_148);
      FUN_104bdbd44(0x1136a39f0,0x113815e18,1,&uStack_80,3);
      lVar6 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_78 + lVar6 + -8);
        lVar6 = lVar6 + -0x18;
      } while (lVar6 != -0x18);
      func_0x000104bfaf70(auStack_148);
      func_0x000104bfaf70(auStack_e0);
      func_0x000104bfaf70(auStack_158);
      func_0x0001003a8c94(&uStack_138);
      func_0x000104bfaf70(auStack_120);
      func_0x000104bfaf70(auStack_d0);
      func_0x000104bfaf70(auStack_130);
      func_0x0001003a8c94(&uStack_110);
      func_0x000104bfaf70(auStack_f8);
      lVar6 = 0x38;
      do {
        func_0x0001003adc18(auStack_c0 + lVar6);
        lVar6 = lVar6 + -0x10;
        in_ZR = lVar6 == -8;
      } while (!(bool)in_ZR);
      func_0x000104bfaf70(auStack_108);
      func_0x0001003a8c94(&uStack_e8);
      ___cxa_guard_release(0x1136a39d8);
    }
  }
  return;
}


