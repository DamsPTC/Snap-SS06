/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090ac238; end: 1090ac277;  */

void FUN_1090ac238(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001090ad70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090ac278; end: 1090ac2a7;  */

ulong FUN_1090ac278(ulong param_1)

{
  ulong uVar1;
  
  if ((param_1 != 0) && (uVar1 = param_1, func_0x00010b9a5818(), (uVar1 & 1) == 0)) {
    func_0x00010b9a5890();
    func_0x0001090ad7b0();
    FUN_1090ac2cc();
  }
  return param_1;
}



/* Entry: 1090ac2a8; end: 1090ac2cb;  */

void FUN_1090ac2a8(void)

{
  func_0x0001090ad7b0();
  FUN_1090ac2cc();
  return;
}



/* Entry: 1090ac2cc; end: 1090ac2d7;  */

void FUN_1090ac2cc(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1090ac2d8; end: 1090ac2fb;  */

void FUN_1090ac2d8(void)

{
  func_0x0001090ad7b0();
  FUN_1090ac238();
  return;
}



/* Entry: 1090ac2fc; end: 1090ac383;  */

void FUN_1090ac2fc(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  int extraout_w11;
  
  puVar1 = param_1;
  func_0x0001090adaa4();
  func_0x0001090ad7a0();
  func_0x0001090ad878();
  *puVar1 = &PTR_FUN_110ad81b0;
  puVar1[1] = 1;
  func_0x0001090ad7a0();
  puVar1[2] = param_2;
  lVar2 = *param_3;
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    do {
      func_0x0001090ad93c();
      lVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  puVar1[3] = lVar2;
  puVar1[4] = param_4;
  func_0x0001090ad798();
  *param_1 = puVar1;
  return;
}



/* Entry: 1090ac384; end: 1090ac387;  */

undefined8 * FUN_1090ac384(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad81b0;
  _objc_release(param_1[4]);
  FUN_1090958e8(param_1 + 3);
  _objc_release(param_1[2]);
  return param_1;
}



/* Entry: 1090ac388; end: 1090ac39b;  */

void FUN_1090ac388(void)

{
  FUN_1090ac5e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090ac39c; end: 1090ac57f;  */

long * FUN_1090ac39c(long param_1,undefined8 param_2,int param_3,long *param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined8 extraout_x8;
  undefined8 uVar8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x9;
  int extraout_w10;
  int extraout_w12;
  undefined **unaff_x20;
  long lStack_e8;
  uint uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long *plStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x0001090ad740();
  uStack_48 = extraout_x8;
  FUN_1090cae24(&lStack_58,param_2);
  uVar4 = lStack_58 == 1;
  if ((bool)uVar4) {
    plVar6 = *(long **)(*(long *)(param_1 + 0x18) + 0x28);
    lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x30);
    plStack_68 = plVar6;
    lStack_60 = lVar1;
    if (lVar1 != 0) {
      do {
        func_0x0001090ad7bc();
      } while (extraout_w10 != 0);
    }
    uVar4 = param_3 == 0;
    uVar7 = 5;
    if ((bool)uVar4) {
      uVar7 = 6;
    }
    plVar5 = plVar6;
    (**(code **)(*plVar6 + 0x10))(plVar6,uVar7);
    lStack_70 = *param_4;
    plStack_90 = plVar6;
    lStack_88 = lVar1;
    if (lStack_70 != 0) {
      plVar6 = (long *)(lStack_70 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plStack_90 = plStack_68;
        lStack_88 = lStack_60;
      } while (cVar2 != '\0');
    }
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc6000000;
    pcStack_a0 = FUN_1090ac628;
    puStack_98 = &UNK_110ad8210;
    if (lStack_88 != 0) {
      plVar6 = (long *)(lStack_88 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_78 = SUB84(plVar5,0);
    uStack_80 = 0;
    if (lStack_70 != 0) {
      do {
        func_0x0001090ad9f8();
        uVar8 = extraout_x8_00;
        uStack_80 = extraout_x9;
      } while (extraout_w12 != 0);
    }
    func_0x00010c115380(uVar8);
    FUN_1090ac804(&uStack_80);
    FUN_1090971c4(&plStack_90);
    FUN_1090ac804(&lStack_70);
    FUN_1090971c4(&plStack_68);
    unaff_x20 = &puStack_b0;
  }
  else {
    plStack_68 = (long *)0x2;
    lStack_60 = lStack_50;
    lStack_50 = 0;
    func_0x0001090ad99c(*param_4);
    (*extraout_x8_01)();
    FUN_1090ac798(&plStack_68);
  }
  plVar6 = &lStack_58;
  FUN_1090ac030();
  func_0x0001090ad6dc(uStack_48);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    FUN_1090ac804((undefined1 *)((long)unaff_x20 + 0x30));
    FUN_1090971c4((undefined1 *)((long)unaff_x20 + 0x20));
    FUN_1090ac804(&lStack_70);
    FUN_1090971c4(&plStack_68);
    plVar5 = &lStack_58;
    FUN_1090ac030();
    func_0x0001090ad868();
    pcStack_b8 = FUN_1090ac580;
    puStack_d0 = (undefined1 *)unaff_x20;
    plStack_c8 = plVar6;
    puStack_c0 = &stack0xfffffffffffffff0;
    func_0x0001090ad740();
    uStack_d8 = extraout_x8_02;
    func_0x00010c106dc0(plVar5[2]);
    FUN_1090cacb0(&lStack_e8);
    uVar4 = lStack_e8 == 1;
    if (!(bool)uVar4) {
      uStack_e0 = 0;
    }
    plVar6 = &lStack_e8;
    func_0x0001090ac84c();
    func_0x0001090ad6dc(uStack_d8);
    if (!(bool)uVar4) {
      ___stack_chk_fail();
      __Unwind_Resume();
      *plVar6 = (long)&PTR_FUN_110ad81b0;
      _objc_release(plVar6[4]);
      FUN_1090958e8(plVar6 + 3);
      _objc_release(plVar6[2]);
      return plVar6;
    }
    return (long *)(ulong)uStack_e0;
  }
  return plVar6;
}



/* Entry: 1090ac580; end: 1090ac5e7;  */

long * FUN_1090ac580(long param_1)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long lStack_38;
  uint uStack_30;
  undefined8 uStack_28;
  
  func_0x0001090ad740();
  uStack_28 = extraout_x8;
  func_0x00010c106dc0(*(undefined8 *)(param_1 + 0x10));
  FUN_1090cacb0(&lStack_38);
  uVar1 = lStack_38 == 1;
  if (!(bool)uVar1) {
    uStack_30 = 0;
  }
  plVar2 = &lStack_38;
  func_0x0001090ac84c();
  func_0x0001090ad6dc(uStack_28);
  if ((bool)uVar1) {
    return (long *)(ulong)uStack_30;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *plVar2 = (long)&PTR_FUN_110ad81b0;
  _objc_release(plVar2[4]);
  FUN_1090958e8(plVar2 + 3);
  _objc_release(plVar2[2]);
  return plVar2;
}



/* Entry: 1090ac5e8; end: 1090ac627;  */

undefined8 * FUN_1090ac5e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad81b0;
  _objc_release(param_1[4]);
  FUN_1090958e8(param_1 + 3);
  _objc_release(param_1[2]);
  return param_1;
}



/* Entry: 1090ac628; end: 1090ac727;  */

void FUN_1090ac628(long param_1,undefined1 *param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  long lVar3;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w11;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &uStack_50;
  func_0x0001090ad740();
  uStack_38 = extraout_x8;
  func_0x0001090ad838();
  uVar2 = (ulong)*(uint *)(param_1 + 0x38);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
  plVar4 = *(long **)(param_1 + 0x30);
  if (param_3 == 0) {
    FUN_1090cb570(&uStack_48);
    func_0x0001090ada68(*(undefined8 *)(*plVar4 + 0x20));
    func_0x0001090ad98c();
  }
  else {
    FUN_109095b5c(&uStack_50,param_3);
    uStack_48 = 2;
    uStack_40 = uStack_50;
    uStack_50 = 0;
    func_0x0001090ada68(*(undefined8 *)(*plVar4 + 0x20));
    func_0x0001090ad98c();
    func_0x000104bda93c();
    param_2 = (undefined1 *)puVar1;
  }
  func_0x0001090ad778();
  func_0x0001090ad6dc(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001090ad98c();
    func_0x0001090ad778();
    func_0x0001090ad860();
    lVar3 = *(long *)(uVar2 + 0x28);
    uVar5 = *(undefined8 *)(uVar2 + 0x20);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(uVar2 + 0x28);
    *(undefined8 *)(param_2 + 0x20) = uVar5;
    if (lVar3 != 0) {
      do {
        func_0x0001090ad7bc();
      } while (extraout_w10 != 0);
    }
    uVar5 = 0;
    if (*(long *)(uVar2 + 0x30) != 0) {
      do {
        func_0x0001090ad828();
        uVar5 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    *(undefined8 *)(param_2 + 0x30) = uVar5;
    return;
  }
  return;
}



/* Entry: 1090ac728; end: 1090ac76f;  */

void FUN_1090ac728(long param_1,long param_2)

{
  long lVar1;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w11;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001090ad7bc();
    } while (extraout_w10 != 0);
  }
  uVar2 = 0;
  if (*(long *)(param_2 + 0x30) != 0) {
    do {
      func_0x0001090ad828();
      uVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  return;
}



/* Entry: 1090ac770; end: 1090ac797;  */

long FUN_1090ac770(long param_1)

{
  FUN_1090ac804(param_1 + 0x30);
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000107c278a0();
  }
  return param_1 + 0x20;
}



/* Entry: 1090ac798; end: 1090ac7bb;  */

void FUN_1090ac798(long *param_1)

{
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return;
  }
  if (*param_1 == 1) {
    func_0x0001090ad7b0(param_1 + 1);
    FUN_1090ac7e0();
    return;
  }
  return;
}



/* Entry: 1090ac7bc; end: 1090ac7df;  */

void FUN_1090ac7bc(void)

{
  func_0x0001090ad7b0();
  FUN_1090ac7e0();
  return;
}



/* Entry: 1090ac7e0; end: 1090ac803;  */

void FUN_1090ac7e0(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001090ad70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090ac804; end: 1090ac827;  */

void FUN_1090ac804(void)

{
  func_0x0001090ad7b0();
  FUN_1090ac828();
  return;
}



/* Entry: 1090ac828; end: 1090ac85f;  */

void FUN_1090ac828(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001090ad70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090ac860; end: 1090ac90f;  */

void FUN_1090ac860(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  func_0x0001090ad7b0();
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + 8);
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
      func_0x0001090ad71c();
    }
  }
  return;
}



/* Entry: 1090ac910; end: 1090ac9bb;  */

undefined8 FUN_1090ac910(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1090ac2d8(param_1 + 0x10);
  func_0x0001090ad7b0(param_1 + 8);
  FUN_1090ac238();
  return unaff_x19;
}



/* Entry: 1090ac9bc; end: 1090ac9ff;  */

void FUN_1090ac9bc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110ad8260;
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x0001090ad878();
  param_1[1] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x0001090ad7a8();
  param_1[2] = uVar1;
  return;
}



/* Entry: 1090aca00; end: 1090aca23;  */

void FUN_1090aca00(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *unaff_x19;
  
  param_1 = param_1 + 0x10;
  func_0x0001090ad7b0();
  if (param_1 != 0) {
    *unaff_x19 = 0;
    plVar1 = (long *)(param_1 + 8);
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
      func_0x0001090ad71c();
    }
  }
  return;
}



/* Entry: 1090aca24; end: 1090aca63;  */

void FUN_1090aca24(long param_1,long param_2)

{
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  if (*(long *)(param_2 + 0x10) != 0) {
    do {
      func_0x0001090ad828();
      uStack_18 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_1090aa858(param_1 + 0x10,&uStack_18);
  FUN_1090ac2d8(&uStack_18);
  return;
}



/* Entry: 1090aca64; end: 1090acaa7;  */

void FUN_1090aca64(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  param_1 = param_1 + 8;
  func_0x0001090ad7b0();
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + 8);
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
      func_0x0001090ad71c();
    }
  }
  return;
}



/* Entry: 1090acaa8; end: 1090acb57;  */

void FUN_1090acaa8(long *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long lStack_30;
  long lStack_28;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else if (*(long *)(param_2 + 8) == 0) {
    lVar1 = *(long *)(param_2 + 0x10);
    *param_1 = param_2;
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      do {
        func_0x0001090ad7bc();
      } while (extraout_w10_00 != 0);
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
        do {
          func_0x0001090ad7bc();
        } while (extraout_w10 != 0);
      }
    }
    func_0x000107c278ec(&lStack_30);
  }
  return;
}



/* Entry: 1090acb58; end: 1090acb7b;  */

void FUN_1090acb58(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *unaff_x19;
  
  param_1 = param_1 + 0x28;
  func_0x0001090ad7b0();
  if (param_1 != 0) {
    *unaff_x19 = 0;
    plVar1 = (long *)(param_1 + 8);
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
      func_0x0001090ad71c();
    }
  }
  return;
}



/* Entry: 1090acb7c; end: 1090acbbb;  */

void FUN_1090acb7c(long param_1,long param_2)

{
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  if (*(long *)(param_2 + 0x10) != 0) {
    do {
      func_0x0001090ad828();
      uStack_18 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_1090aa858(param_1 + 0x28,&uStack_18);
  FUN_1090ac2d8(&uStack_18);
  return;
}



/* Entry: 1090acbbc; end: 1090acc03;  */

void FUN_1090acbbc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  param_1 = param_1 + 8;
  func_0x0001090ad7b0();
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + 8);
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
      func_0x0001090ad71c();
    }
  }
  return;
}



/* Entry: 1090acc04; end: 1090acc17;  */

void FUN_1090acc04(void)

{
  func_0x0001090ad080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090acc18; end: 1090acd8b;  */

void FUN_1090acc18(long param_1)

{
  long unaff_x19;
  
  FUN_1090ad0a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090ad8e8();
  FUN_1090aaf38();
  _objc_retainAutoreleasedReturnValue();
  if ((unaff_x19 != 0) && (param_1 != 0)) {
    func_0x0001090ad760();
    func_0x0001090ad6f0(FUN_1090ad0b8);
    func_0x0001090ad734();
    func_0x0001090ad6cc();
    func_0x0001090ad7f4();
    func_0x0001090ad858();
  }
  func_0x0001090ad798();
  func_0x0001090ad778();
  return;
}



/* Entry: 1090acd8c; end: 1090ace57;  */

void FUN_1090acd8c(long param_1,undefined8 param_2)

{
  long unaff_x19;
  
  FUN_1090ad0a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090ad8e8();
  FUN_1090aaf38();
  _objc_retainAutoreleasedReturnValue();
  if ((unaff_x19 != 0) && (param_1 != 0)) {
    FUN_109095ad0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090ad80c();
    func_0x0001090ad7a0();
    func_0x0001090ad7a8();
    func_0x0001090ad878();
    func_0x0001090ad7d8();
    _objc_release(param_2);
    func_0x0001090ad9c8();
    func_0x0001090ad7f4();
    func_0x0001090ad820();
  }
  func_0x0001090ad798();
  func_0x0001090ad778();
  return;
}



/* Entry: 1090ace58; end: 1090aced3;  */

void FUN_1090ace58(long param_1)

{
  long unaff_x19;
  
  FUN_1090ad0a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090ad8e8();
  FUN_1090aaf38();
  _objc_retainAutoreleasedReturnValue();
  if ((unaff_x19 != 0) && (param_1 != 0)) {
    func_0x0001090ad760();
    func_0x0001090ad6f0(0x1090ad0ec);
    func_0x0001090ad734();
    func_0x0001090ad6cc();
    func_0x0001090ad7f4();
    func_0x0001090ad858();
  }
  func_0x0001090ad798();
  func_0x0001090ad778();
  return;
}



/* Entry: 1090aced4; end: 1090ad003;  */

void FUN_1090aced4(long param_1)

{
  long unaff_x19;
  
  FUN_1090ad0a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090ad8e8();
  FUN_1090aaf38();
  _objc_retainAutoreleasedReturnValue();
  if ((unaff_x19 != 0) && (param_1 != 0)) {
    func_0x0001090ad80c();
    func_0x0001090ad7a0();
    func_0x0001090ad7a8();
    func_0x0001090ad7d8();
    func_0x0001090ad9c8();
    func_0x0001090ad7f4();
  }
  func_0x0001090ad798();
  func_0x0001090ad778();
  return;
}



/* Entry: 1090ad004; end: 1090ad0a3;  */

void FUN_1090ad004(long param_1)

{
  long unaff_x19;
  
  FUN_1090ad0a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090ad8e8();
  FUN_1090aaf38();
  _objc_retainAutoreleasedReturnValue();
  if ((unaff_x19 != 0) && (param_1 != 0)) {
    func_0x0001090ad760();
    func_0x0001090ad6f0(0x1090ad14c);
    func_0x0001090ad734();
    func_0x0001090ad6cc();
    func_0x0001090ad7f4();
    func_0x0001090ad858();
  }
  func_0x0001090ad798();
  func_0x0001090ad778();
  return;
}



/* Entry: 1090ad0a4; end: 1090ad0b7;  */

void FUN_1090ad0a4(void)

{
  func_0x0001090ada54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090ad0b8; end: 1090ad0f7;  */

void FUN_1090ad0b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c100a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_playerDidStartPlayback__11261dca0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1090ad0f8; end: 1090ad127;  */

void FUN_1090ad0f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = (ulong)*(uint *)(param_1 + 0x30);
  func_0x0001090aaf60(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c100830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_player_stateDidChange__11261dc28,uVar2,uVar3);
  return;
}



/* Entry: 1090ad128; end: 1090ad157;  */

void FUN_1090ad128(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1007b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)*(long *)(param_1 + 0x38) / 1000000000.0,*(undefined8 *)(param_1 + 0x20),
             PTR_s_player_didLoadSize_withLatency__11261dc08,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1090ad158; end: 1090ad193;  */

void FUN_1090ad158(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  func_0x0001090ad7b0();
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + 8);
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
      func_0x0001090ad71c();
    }
  }
  return;
}



/* Entry: 1090ad194; end: 1090ad237;  */

void FUN_1090ad194(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_3 + 0x10);
  FUN_1090ad0a4();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_3 + 0x10);
  FUN_1090aaf38();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar2 != 0)) {
    func_0x0001090ad760();
    func_0x0001090ad7a8();
    func_0x0001090ad7a0();
    func_0x0001090ad6cc();
    func_0x0001090ad7f4();
    func_0x0001090ad858();
  }
  func_0x0001090ad798();
  func_0x0001090ad778();
  return;
}



/* Entry: 1090ad238; end: 1090ad277;  */

void FUN_1090ad238(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1090caae4(auStack_38,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  func_0x00010c100740(uVar1);
  return;
}



/* Entry: 1090ad278; end: 1090ad2bb;  */

void FUN_1090ad278(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  param_1 = param_1 + 8;
  func_0x0001090ad7b0();
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + 8);
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
      func_0x0001090ad71c();
    }
  }
  return;
}



/* Entry: 1090ad2bc; end: 1090ad2db;  */

void FUN_1090ad2bc(void)

{
  func_0x0001090ad7b0();
  FUN_1090ac17c();
  return;
}



/* Entry: 1090ad2dc; end: 1090ad2df;  */

void FUN_1090ad2dc(void)

{
  long unaff_x19;
  
  func_0x0001090adad8();
  _objc_destroyWeak(unaff_x19 + 0x10);
  return;
}



/* Entry: 1090ad2e0; end: 1090ad2f3;  */

void FUN_1090ad2e0(void)

{
  FUN_1090ad574();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090ad2f4; end: 1090ad457;  */

void FUN_1090ad2f4(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  undefined1 auStack_48 [24];
  
  func_0x0001090ada54();
  func_0x0001090adaf0();
  if ((unaff_x19 != 0) && (param_1 != 0)) {
    lVar3 = *param_2;
    if (lVar3 == 0) {
      func_0x0001090ad80c();
      func_0x0001090ad7a0();
      func_0x0001090ad7a8();
      func_0x0001090ad7d8();
      func_0x0001090ad9c8();
    }
    else {
      uVar1 = *(ulong *)(lVar3 + 0x30);
      plVar2 = (long *)*(long *)(lVar3 + 0x28);
      if (-1 < (char)*(byte *)(lVar3 + 0x3f)) {
        uVar1 = (ulong)*(byte *)(lVar3 + 0x3f);
        plVar2 = (long *)(lVar3 + 0x28);
      }
      FUN_109095a94(plVar2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      FUN_1090caae4(auStack_48,*(undefined8 *)(*param_2 + 0x40),*(undefined8 *)(*param_2 + 0x48));
      func_0x0001090ad80c();
      func_0x0001090ad7a0();
      func_0x0001090ad7a8();
      func_0x0001090ad878();
      func_0x0001090ad9d8();
      _objc_release(plVar2);
      _objc_release(unaff_x19);
      _objc_release(param_1);
      param_1 = (long)plVar2;
    }
    _objc_release(param_1);
  }
  func_0x0001090ad798();
  func_0x0001090ad778();
  return;
}



/* Entry: 1090ad458; end: 1090ad573;  */

void FUN_1090ad458(long param_1,long *param_2)

{
  long unaff_x19;
  
  func_0x0001090ada54();
  func_0x0001090adaf0();
  if ((unaff_x19 != 0) && (param_1 != 0)) {
    if (*param_2 == 1) {
      func_0x0001090ad80c();
      func_0x0001090ad7a0();
      func_0x0001090ad7a8();
      func_0x0001090ad9d8();
      _objc_release(unaff_x19);
    }
    else {
      FUN_109095ad0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090ad760();
      func_0x0001090ad710(0x1090ad5f0);
      func_0x0001090ad734();
      func_0x0001090ad878();
      func_0x0001090ad6cc();
      func_0x0001090ad9c8();
      func_0x0001090ad7f4();
      func_0x0001090ad858();
    }
    func_0x0001090ad820();
  }
  func_0x0001090ad798();
  func_0x0001090ad778();
  return;
}



/* Entry: 1090ad574; end: 1090ad597;  */

void FUN_1090ad574(void)

{
  long unaff_x19;
  
  func_0x0001090adad8();
  _objc_destroyWeak(unaff_x19 + 0x10);
  return;
}



/* Entry: 1090ad598; end: 1090ad5d3;  */

void FUN_1090ad598(long param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x40);
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  uStack_20 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c100760(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),&uStack_30);
  return;
}



/* Entry: 1090ad5d4; end: 1090ad5ff;  */

void FUN_1090ad5d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1008f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_playerDidDeactivateSubtitle__11261dc58,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1090ad600; end: 1090ad63b;  */

void FUN_1090ad600(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  func_0x0001090ad7b0();
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + 8);
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
      func_0x0001090ad71c();
    }
  }
  return;
}



/* Entry: 1090ad63c; end: 1090ad65f;  */

void FUN_1090ad63c(void)

{
  func_0x0001090ad7b0();
  FUN_1090ad660();
  return;
}



/* Entry: 1090ad660; end: 1090ad683;  */

void FUN_1090ad660(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001090ad70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090ad684; end: 1090ad6a7;  */

void FUN_1090ad684(void)

{
  func_0x0001090ad7b0();
  func_0x0001090ad6a8();
  return;
}



/* Entry: 1090ad6a8; end: 1090adb13;  */

void FUN_1090ad6a8(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001090ad70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090adb14; end: 1090add37; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider initWithURL:dataProviderFactory:instruments:mediaAssetConfiguration:playerConfiguration:mediaQueue:] */

undefined8 *
FUN_1090adb14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  func_0x0001090aee28();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_112700560;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar3 = puVar2[3];
    puVar2[3] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[4];
    puVar2[4] = param_8;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126dd4c0;
    _objc_opt_new();
    uVar3 = puVar2[5];
    puVar2[5] = puVar4;
    func_0x0001090aede8(uVar3);
    uVar3 = puVar2[7];
    puVar2[7] = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar3);
    FUN_109095190(auStack_f0,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_1090d0bfc(&uStack_f8,auStack_f0);
    uVar3 = uStack_f8;
    puVar1 = puVar2 + 1;
    if (puVar1 != &uStack_f8) {
      uStack_f8 = 0;
      uVar5 = *puVar1;
      *puVar1 = uVar3;
      FUN_1090aebd8(uVar5);
    }
    FUN_1090aebb0(&uStack_f8);
    puVar6 = (undefined8 *)0x10;
    __Znwm();
    *puVar6 = &PTR_FUN_110ad8500;
    _objc_initWeak(puVar6 + 1,puVar2);
    lVar7 = puVar2[2];
    puVar2[2] = puVar6;
    if (lVar7 != 0) {
      func_0x0001090aee14();
      puVar6 = (undefined8 *)puVar2[2];
    }
    func_0x0001090e8f58(*puVar1,puVar6);
    FUN_1090aea18(auStack_f0);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  func_0x0001090aedf8();
  func_0x0001090aee00();
  func_0x0001090aedcc();
  func_0x0001090aed74();
  return puVar2;
}



/* Entry: 1090add38; end: 1090ade53; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider dealloc] */

void FUN_1090add38(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if (*(long *)(param_1 + 8) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x0001090aee28();
    uStack_40 = *(undefined8 *)(param_1 + 0x10);
    lStack_48 = *(long *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc6000000;
    pcStack_58 = FUN_1090ade54;
    puStack_50 = &UNK_110ad84c0;
    if ((lStack_48 != 0) && (*(long *)(lStack_48 + 0x10) != 0)) {
      plVar1 = (long *)(*(long *)(lStack_48 + 0x10) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_38 = lStack_48;
    func_0x00010bf850c0(uVar4);
    FUN_1090aebb0(&lStack_48);
    FUN_1090aebb0(&lStack_38);
    func_0x0001090aedcc();
  }
  puStack_70 = PTR_PTR_112700560;
  lStack_78 = param_1;
  _objc_msgSendSuper2(&lStack_78,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090ade54; end: 1090ade97;  */

void FUN_1090ade54(long param_1)

{
  func_0x0001090e8f58(*(undefined8 *)(param_1 + 0x20),0);
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001090ade88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x28) + 8))();
    return;
  }
  return;
}



/* Entry: 1090ade98; end: 1090adecb;  */

void FUN_1090ade98(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x20);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(long *)(param_1 + 0x20) = lVar4;
  return;
}



/* Entry: 1090adecc; end: 1090adee3; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider delegate] */

void FUN_1090adecc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090adee4; end: 1090adeef; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider setDelegate:] */

void FUN_1090adee4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 1090adef0; end: 1090ae19f; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider _refreshTrackInfos] */

void FUN_1090adef0(long param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long **pplVar6;
  undefined8 extraout_x8;
  undefined8 uVar7;
  long *plVar8;
  double dVar9;
  double dVar10;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  long *plStack_e8;
  long *plStack_e0;
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  undefined8 uStack_80;
  
  lVar3 = param_1;
  func_0x0001090aed9c();
  uStack_80 = extraout_x8;
  func_0x0001090e8fd8(&plStack_e8,*(undefined8 *)(lVar3 + 8));
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__CGAffineTransformIdentity_110347008;
  for (plVar8 = plStack_e8; uVar1 = plVar8 == plStack_e0, !(bool)uVar1; plVar8 = plVar8 + 1) {
    uStack_b8 = 0;
    dStack_108 = *(double *)(puVar5 + 8);
    dStack_110 = *(double *)puVar5;
    dStack_f8 = *(double *)(puVar5 + 0x18);
    dStack_100 = *(double *)(puVar5 + 0x10);
    dVar9 = *(double *)(puVar5 + 0x20);
    dVar10 = *(double *)(puVar5 + 0x28);
    if (*(long *)(*plVar8 + 0x38) != 0) {
      FUN_1090ca330(&dStack_b0);
      if (dStack_b0 == 4.94065645841247e-324) {
        func_0x0001090aea58(&uStack_b8,&dStack_a8);
        _CMFormatDescriptionGetMediaSubType(uStack_b8);
      }
      lVar3 = *plVar8;
      func_0x0001090e7d9c();
      if (lVar3 != 0) {
        dStack_100 = (double)(float)*(undefined8 *)(lVar3 + 0x24);
        dStack_f8 = (double)(float)((ulong)*(undefined8 *)(lVar3 + 0x24) >> 0x20);
        dStack_110 = (double)(float)*(undefined8 *)(lVar3 + 0x1c);
        dStack_108 = (double)(float)((ulong)*(undefined8 *)(lVar3 + 0x1c) >> 0x20);
        dVar9 = (double)*(float *)(lVar3 + 0x2c);
        dVar10 = (double)*(float *)(lVar3 + 0x30);
      }
      func_0x0001090aeac8(&dStack_b0);
    }
    puVar4 = PTR_PTR_1126dd350;
    _objc_alloc();
    FUN_1090caae4(auStack_d0,*(undefined8 *)(*plVar8 + 0x28),*(undefined8 *)(*plVar8 + 0x30));
    dStack_a8 = dStack_108;
    dStack_b0 = dStack_110;
    dStack_98 = dStack_f8;
    dStack_a0 = dStack_100;
    dStack_90 = dVar9;
    dStack_88 = dVar10;
    func_0x00010c055be0(0);
    FUN_1090aeaf0(&uStack_b8);
    if (puVar4 != (undefined *)0x0) {
      func_0x00010befa120(puVar2);
    }
    func_0x0001090aedf8();
  }
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  puVar5 = puVar2;
  func_0x00010bf51e00();
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar5;
  func_0x0001090aede8(uVar7);
  func_0x0001090aee38();
  func_0x0001090aed74();
  _objc_release(puVar2);
  FUN_1090aeb14(&plStack_e8);
  func_0x0001090aed60(uStack_80);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001090aee38();
  func_0x0001090aed74();
  _objc_release(puVar2);
  pplVar6 = &plStack_e8;
  FUN_1090aeb14(pplVar6);
  func_0x0001090aee20();
  func_0x00010be88b60();
  func_0x00010bf6b020(pplVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1496a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pplVar6);
  return;
}



/* Entry: 1090ae1a0; end: 1090ae1e3; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider _onLoadedTrackInfos] */

void FUN_1090ae1a0(undefined8 param_1)

{
  func_0x00010be88b60();
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1496a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090ae1e4; end: 1090ae21f; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider _onHasNewAudioBuffer] */

void FUN_1090ae1e4(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1496c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090ae220; end: 1090ae25b; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider _onHasNewVideoBuffer] */

void FUN_1090ae220(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1496e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090ae25c; end: 1090ae2d3; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider _onFailedWithError:] */

void FUN_1090ae25c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0e3f00(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c149640();
    func_0x0001090aee00();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090ae2d4; end: 1090ae333; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider _onLoadedDataSize:latency:] */

void FUN_1090ae2d4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c149660(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1090ae334; end: 1090ae36f; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider trackInfos] */

void FUN_1090ae334(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x0001090aee28();
  func_0x0001090aee38();
  func_0x0001090aed74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090ae370; end: 1090ae377; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider loadedTrackInfos] */

long * FUN_1090ae370(long param_1)

{
  long *plVar1;
  long unaff_x19;
  
  func_0x0001090e9ac4(*(undefined8 *)(param_1 + 8));
  plVar1 = *(long **)(unaff_x19 + 0x100);
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x28))();
  }
  func_0x0001090e9b10();
  return plVar1;
}



/* Entry: 1090ae378; end: 1090ae4a3; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider _trackInfoForTrackId:] */

void FUN_1090ae378(ulong param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  ulong unaff_x19;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  undefined8 uStack_58;
  
  puVar4 = &uStack_120;
  func_0x0001090aed9c();
  uStack_58 = extraout_x8;
  if ((int)param_3 == 0) {
    uVar6 = 0;
    uVar1 = param_1;
  }
  else {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    func_0x00010c277fa0();
    _objc_retainAutoreleasedReturnValue();
    param_4 = auStack_d8;
    uVar1 = param_1;
    func_0x00010bf52a60();
    if (uVar1 != 0) {
      lVar7 = *plStack_110;
      do {
        uVar8 = 0;
        do {
          if (*plStack_110 != lVar7) {
            _objc_enumerationMutation(param_1);
          }
          uVar6 = *(ulong *)(lStack_118 + uVar8 * 8);
          uVar2 = uVar6;
          func_0x00010c277e80();
          in_ZR = (int)uVar2 == (int)param_3;
          if ((bool)in_ZR) {
            uVar1 = uVar6;
            _objc_retain();
            goto LAB_1090ae44c;
          }
          uVar8 = uVar8 + 1;
          in_ZR = uVar8 == uVar1;
        } while (uVar8 < uVar1);
        param_4 = auStack_d8;
        uVar1 = param_1;
        puVar4 = &uStack_120;
        func_0x00010bf52a60();
      } while (uVar1 != 0);
    }
    uVar1 = 0;
    uVar6 = 0;
LAB_1090ae44c:
    func_0x0001090aed74();
    param_3 = (undefined1 *)puVar4;
    unaff_x19 = param_1;
  }
  func_0x0001090aed60(uStack_58);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
    return;
  }
  ___stack_chk_fail();
  func_0x0001090aed74();
  func_0x0001090aed7c();
  func_0x0001090aedac();
  uVar6 = uVar1;
  func_0x00010becdf20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(uVar1 + 0x40);
  *(ulong *)(uVar1 + 0x40) = uVar6;
  func_0x0001090aede8(uVar5);
  uVar6 = uVar1;
  func_0x00010becdf20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(uVar1 + 0x48);
  *(ulong *)(uVar1 + 0x48) = uVar6;
  func_0x0001090aede8(uVar5);
  func_0x0001090e9ac4(*(undefined8 *)(uVar1 + 8));
  plVar3 = *(long **)(unaff_x19 + 0x100);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x48))(plVar3,param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0xc0);
  return;
}



/* Entry: 1090ae4a4; end: 1090ae51f; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider setVideoTrackId:audioTrackId:currentTime:] */

void FUN_1090ae4a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x19;
  
  func_0x0001090aedac();
  lVar1 = param_1;
  func_0x00010becdf20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = lVar1;
  func_0x0001090aede8(uVar3);
  lVar1 = param_1;
  func_0x00010becdf20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = lVar1;
  func_0x0001090aede8(uVar3);
  func_0x0001090e9ac4(*(undefined8 *)(param_1 + 8));
  plVar2 = *(long **)(unaff_x19 + 0x100);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x48))(plVar2,param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0xc0);
  return;
}



/* Entry: 1090ae520; end: 1090ae653; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider _sampleBufferFromResult:trackInfo:error:] */

long * FUN_1090ae520(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5
                    )

{
  undefined1 uVar1;
  long *plVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long *plVar7;
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  long alStack_88 [2];
  undefined8 uStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  plVar5 = param_3;
  plVar2 = param_4;
  func_0x0001090aed9c();
  uStack_38 = extraout_x8;
  _objc_retain();
  uVar1 = *param_3 == 2;
  if ((bool)uVar1) {
    if (param_5 != (long *)0x0) {
      plVar2 = param_3 + 1;
      FUN_109095ad0();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      plVar7 = (long *)0x0;
      *param_5 = (long)plVar2;
      goto LAB_1090ae600;
    }
  }
  else if (param_3[1] != 0) {
    FUN_1090cae24(&lStack_48,param_3 + 1);
    uVar1 = lStack_48 == 2;
    if ((bool)uVar1) {
      if (param_5 == (long *)0x0) {
        plVar7 = (long *)0x0;
      }
      else {
        pplVar3 = &plStack_40;
        FUN_109095ad0();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        plVar7 = (long *)0x0;
        *param_5 = (long)pplVar3;
      }
    }
    else {
      plVar7 = (long *)PTR_PTR_1126dd358;
      func_0x00010c0c6520(PTR_PTR_1126dd358,param_2,plStack_40,param_4);
      _objc_retainAutoreleasedReturnValue();
      plVar5 = plStack_40;
    }
    plVar2 = &lStack_48;
    FUN_1090ac030();
    goto LAB_1090ae600;
  }
  plVar7 = (long *)0x0;
LAB_1090ae600:
  func_0x0001090aed74();
  func_0x0001090aed60(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    plVar4 = &lStack_48;
    FUN_1090ac030();
    func_0x0001090aed74();
    plVar7 = plVar5;
    func_0x0001090aed7c();
    pcStack_58 = FUN_1090ae654;
    plStack_70 = plVar2;
    plStack_68 = param_4;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x0001090aed9c();
    uStack_78 = extraout_x8_00;
    func_0x0001090aedac();
    FUN_1090e922c(alStack_88,plVar4[1]);
    plVar2 = alStack_88;
    plVar5 = plVar4;
    func_0x00010be98780();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090aed84();
    func_0x0001090aed60(uStack_78);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001090aed84();
      func_0x0001090aee30();
      pcStack_98 = FUN_1090ae6c8;
      plStack_b0 = plVar4;
      plStack_a8 = plVar7;
      ppuStack_a0 = &puStack_60;
      func_0x0001090aed9c();
      uStack_b8 = extraout_x8_01;
      func_0x0001090aedac();
      func_0x0001090e926c(auStack_c8,plVar5[1]);
      func_0x00010be98780(plVar5,param_2,auStack_c8,plVar5[8],plVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090aed84();
      func_0x0001090aed60(uStack_b8);
      plVar7 = plVar2;
      if (!(bool)uVar1) {
        ___stack_chk_fail();
        func_0x0001090aed84();
        func_0x0001090aee30();
        func_0x0001090aed90();
        lVar6 = plVar2[1];
        FUN_1090e918c(lVar6);
        return (long *)(ulong)((uint)lVar6 & 1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar7);
  return plVar7;
}



/* Entry: 1090ae654; end: 1090ae6c7; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider dequeueNextAudioSampleBufferWithError:] */

undefined1 * FUN_1090ae654(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x0001090aed9c();
  uStack_28 = extraout_x8;
  func_0x0001090aedac();
  FUN_1090e922c(auStack_38,*(undefined8 *)(param_1 + 8));
  puVar3 = auStack_38;
  lVar1 = param_1;
  func_0x00010be98780();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090aed84();
  func_0x0001090aed60(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001090aed84();
    func_0x0001090aee30();
    pcStack_48 = FUN_1090ae6c8;
    lStack_60 = param_1;
    puStack_58 = param_3;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x0001090aed9c();
    uStack_68 = extraout_x8_00;
    func_0x0001090aedac();
    func_0x0001090e926c(auStack_78,*(undefined8 *)(lVar1 + 8));
    func_0x00010be98780(lVar1,param_2,auStack_78,*(undefined8 *)(lVar1 + 0x40),puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090aed84();
    func_0x0001090aed60(uStack_68);
    param_3 = puVar3;
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001090aed84();
      func_0x0001090aee30();
      func_0x0001090aed90();
      uVar2 = *(undefined8 *)(puVar3 + 8);
      FUN_1090e918c(uVar2);
      return (undefined1 *)(ulong)((uint)uVar2 & 1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return param_3;
}



/* Entry: 1090ae6c8; end: 1090ae73b; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider dequeueNextVideoSampleBufferWithError:] */

ulong FUN_1090ae6c8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x0001090aed9c();
  uStack_28 = extraout_x8;
  func_0x0001090aedac();
  func_0x0001090e926c(auStack_38,*(undefined8 *)(param_1 + 8));
  func_0x00010be98780(param_1,param_2,auStack_38,*(undefined8 *)(param_1 + 0x40),param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090aed84();
  func_0x0001090aed60(uStack_28);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
    return param_3;
  }
  ___stack_chk_fail();
  func_0x0001090aed84();
  func_0x0001090aee30();
  func_0x0001090aed90();
  uVar1 = *(undefined8 *)(param_3 + 8);
  FUN_1090e918c(uVar1);
  return (ulong)((uint)uVar1 & 1);
}



/* Entry: 1090ae73c; end: 1090ae75f; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider hasNextAudioSampleBuffer] */

uint FUN_1090ae73c(void)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001090aed90();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  FUN_1090e918c(uVar1);
  return (uint)uVar1 & 1;
}



/* Entry: 1090ae760; end: 1090ae783; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider hasNextVideoSampleBuffer] */

uint FUN_1090ae760(void)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001090aed90();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001090e91dc(uVar1);
  return (uint)uVar1 & 1;
}



/* Entry: 1090ae784; end: 1090ae7a7; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider didReachEndOfAudioTrack] */

uint FUN_1090ae784(void)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001090aed90();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  FUN_1090e918c(uVar1);
  return (uint)uVar1 >> 8 & 1;
}



/* Entry: 1090ae7a8; end: 1090ae7cb; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider didReachEndOfVideoTrack] */

uint FUN_1090ae7a8(void)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001090aed90();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001090e91dc(uVar1);
  return (uint)uVar1 >> 8 & 1;
}



/* Entry: 1090ae7cc; end: 1090ae83b; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider seekToTime:toleranceBefore:toleranceAfter:] */

void FUN_1090ae7cc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  func_0x0001090aedac();
  FUN_1090e90f4(*(undefined8 *)(param_2 + 8),*param_4,(ulong)*(uint *)(param_4 + 1) | 0x100000000,
                *param_5,(ulong)*(uint *)(param_5 + 1) | 0x100000000,*param_6,
                (ulong)*(uint *)(param_6 + 1) | 0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CMTimeMake_110348440)(param_1);
  return;
}



/* Entry: 1090ae83c; end: 1090ae877; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider timebase] */

void FUN_1090ae83c(long param_1)

{
  func_0x00010bf99fe0(*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26fdc0();
  FUN_1090aed54();
  return;
}



/* Entry: 1090ae878; end: 1090ae883; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider loadedTimeRanges] */

undefined * FUN_1090ae878(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 1090ae884; end: 1090ae923; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider error] */

void FUN_1090ae884(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_30 [8];
  char cStack_28;
  
  puVar2 = auStack_30;
  puVar1 = *(undefined1 **)(param_1 + 0x28);
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined1 *)0x0) {
    FUN_1090e906c(auStack_30,*(undefined8 *)(param_1 + 8));
    if (cStack_28 == '\x01') {
      FUN_109095ad0(auStack_30);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = (undefined1 *)0x0;
    }
    FUN_1090ab420(auStack_30);
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  func_0x0001090aed74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1090ae924; end: 1090ae94b; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider duration] */

void FUN_1090ae924(undefined8 param_1,long param_2)

{
  FUN_1090e9014(*(undefined8 *)(param_2 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbb858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CMTimeMake_110348440)(param_1);
  return;
}



/* Entry: 1090ae94c; end: 1090ae9a7; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider computeMediaDataManagerMetrics] */

void FUN_1090ae94c(undefined8 *param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  func_0x0001090e92b4(&uStack_40,*(undefined8 *)(param_2 + 8));
  *param_1 = uStack_40;
  param_1[1] = (double)lStack_30 / 1000000000.0;
  param_1[2] = uStack_38;
  *(undefined1 *)(param_1 + 3) = uStack_28;
  return;
}



/* Entry: 1090ae9a8; end: 1090aea0f; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider .cxx_destruct] */

undefined8 * FUN_1090ae9a8(long param_1)

{
  long lVar1;
  
  func_0x0001090aedc4(param_1 + 0x48);
  func_0x0001090aedc4(param_1 + 0x40);
  func_0x0001090aedc4(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  func_0x0001090aedc4(param_1 + 0x28);
  func_0x0001090aedc4(param_1 + 0x20);
  func_0x0001090aedc4(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar1 != 0) {
    func_0x0001090aee14();
  }
  FUN_1090aebd8(*(undefined8 *)(param_1 + 8));
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 1090aea10; end: 1090aea17; -[SCNeoPlayerCPPDynamicMediaSampleBufferProvider .cxx_construct] */

void FUN_1090aea10(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 1090aea18; end: 1090aeab7;  */

undefined8 FUN_1090aea18(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10909595c(param_1 + 0x28);
  func_0x000104bd5214(param_1 + 0x20);
  FUN_1090958e8(param_1 + 0x18);
  FUN_109095890(param_1 + 8);
  func_0x00010007e5d0(param_1);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 1090aeab8; end: 1090aeaef;  */

void FUN_1090aeab8(long *param_1)

{
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRetain_11034a770)();
    return;
  }
  return;
}



/* Entry: 1090aeaf0; end: 1090aeb13;  */

undefined8 FUN_1090aeaf0(undefined8 param_1)

{
  func_0x0001090aea8c();
  return param_1;
}



/* Entry: 1090aeb14; end: 1090aeb5b;  */

long * FUN_1090aeb14(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -8;
      FUN_1090aeb5c();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1090aeb5c; end: 1090aeb83;  */

undefined8 * FUN_1090aeb5c(undefined8 *param_1)

{
  FUN_1090aeb84(*param_1);
  return param_1;
}



/* Entry: 1090aeb84; end: 1090aebaf;  */

void FUN_1090aeb84(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001090aeba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090aebb0; end: 1090aebd7;  */

undefined8 * FUN_1090aebb0(undefined8 *param_1)

{
  FUN_1090aebd8(*param_1);
  return param_1;
}



/* Entry: 1090aebd8; end: 1090aebe3;  */

void FUN_1090aebd8(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1090aebe4; end: 1090aec1f;  */

void FUN_1090aebe4(void)

{
  func_0x0001090aee40();
  return;
}



/* Entry: 1090aec20; end: 1090aec4b;  */

void FUN_1090aec20(undefined8 param_1)

{
  func_0x0001090aede0();
  func_0x00010be69e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090aec4c; end: 1090aec77;  */

void FUN_1090aec4c(undefined8 param_1)

{
  func_0x0001090aede0();
  func_0x00010be696e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090aec78; end: 1090aeca3;  */

void FUN_1090aec78(undefined8 param_1)

{
  func_0x0001090aede0();
  func_0x00010be69700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090aeca4; end: 1090aed07;  */

void FUN_1090aeca4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001090aede0();
  FUN_109095ad0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be69180(param_1,param_2,param_3);
  func_0x0001090aedcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


