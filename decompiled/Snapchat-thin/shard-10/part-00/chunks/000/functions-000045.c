/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1073adaac; end: 1073adb17;  */

void FUN_1073adaac(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_20 = param_3;
    func_0x0001073add44(param_2,&uStack_20);
    func_0x00010724bcd8(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1073adb18; end: 1073adb1b;  */

void FUN_1073adb18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073adb1c; end: 1073adb2f;  */

void FUN_1073adb1c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073adb30; end: 1073adb37;  */

void FUN_1073adb30(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1073adb90(*(long *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073adb38; end: 1073adb6f;  */

long FUN_1073adb38(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109ab138);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1073adb70; end: 1073adb73;  */

void FUN_1073adb70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073adb74; end: 1073adb8f;  */

void FUN_1073adb74(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1073adb90(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073adb90; end: 1073adcdb;  */

undefined8 FUN_1073adb90(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = (long *)(*(long *)(param_1 + 0x1a0) + (*(ulong *)(param_1 + 0x1b8) >> 9) * 8);
  if (*(long *)(param_1 + 0x1a8) == *(long *)(param_1 + 0x1a0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = *plVar6 + (*(ulong *)(param_1 + 0x1b8) & 0x1ff) * 8;
  }
  FUN_1073adcdc(param_1 + 0x198);
  do {
    lVar7 = lVar3 + -0x1000;
    do {
      if (lVar3 == param_2) {
        *(undefined8 *)(param_1 + 0x1c0) = 0;
        puVar4 = *(undefined8 **)(param_1 + 0x1a0);
        while( true ) {
          puVar5 = *(undefined8 **)(param_1 + 0x1a8);
          uVar1 = (long)puVar5 - (long)puVar4 >> 3;
          if (uVar1 < 3) break;
          __ZdlPv(*puVar4);
          puVar4 = (undefined8 *)(*(long *)(param_1 + 0x1a0) + 8);
          *(undefined8 **)(param_1 + 0x1a0) = puVar4;
        }
        if (uVar1 == 1) {
          uVar2 = 0x100;
        }
        else {
          if (uVar1 != 2) goto LAB_1073adc70;
          uVar2 = 0x200;
        }
        *(undefined8 *)(param_1 + 0x1b8) = uVar2;
LAB_1073adc70:
        for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
          __ZdlPv(*puVar4);
        }
        lVar3 = *(long *)(param_1 + 0x1a8);
        while (lVar3 != *(long *)(param_1 + 0x1a0)) {
          lVar3 = lVar3 + -8;
          *(long *)(param_1 + 0x1a8) = lVar3;
        }
        if (*(long *)(param_1 + 0x198) != 0) {
          __ZdlPv();
        }
        __ZNSt3__15mutexD1Ev(param_1 + 0x158);
        __ZNSt3__15mutexD1Ev(param_1 + 0x110);
        __ZNSt3__115recursive_mutexD1Ev(param_1 + 0xd0);
        func_0x000107273f24(param_1 + 0x28);
        func_0x00010725b1d4(param_1 + 0x10);
        func_0x00010724ce4c();
        if (param_1 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        return unaff_x19;
      }
      FUN_1073add10(lVar3);
      lVar3 = lVar3 + 8;
      lVar7 = lVar7 + 8;
    } while (*plVar6 != lVar7);
    plVar6 = plVar6 + 1;
    lVar3 = *plVar6;
  } while( true );
}



/* Entry: 1073adcdc; end: 1073add0f;  */

void FUN_1073adcdc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 1073add10; end: 1073addbb;  */

long * FUN_1073add10(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 1073addbc; end: 1073ade1b;  */

void FUN_1073addbc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1073adb90(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073ade1c; end: 1073ade4f;  */

void FUN_1073ade1c(void)

{
  func_0x0001073aef9c();
  func_0x000107313254();
  func_0x0001073aef68();
  func_0x0001073aeeb4();
  return;
}



/* Entry: 1073ade50; end: 1073ade93;  */

void FUN_1073ade50(void)

{
  long unaff_x19;
  
  func_0x0001073af044();
  func_0x0001073aefd4();
  func_0x000107313254(unaff_x19 + 0x28);
  func_0x0001073aef68();
  func_0x0001073aeeb4();
  return;
}



/* Entry: 1073ade94; end: 1073adee7;  */

void FUN_1073ade94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  
  func_0x0001073af044();
  func_0x0001073aefd4();
  FUN_1073ae318(unaff_x19 + 0x28,param_3);
  func_0x0001073aef68();
  func_0x0001073aeeb4();
  return;
}



/* Entry: 1073adee8; end: 1073adf0f;  */

void FUN_1073adee8(void)

{
  func_0x0001073aef9c();
  func_0x000107273e00();
  func_0x0001073aef68();
  func_0x0001073aeeb4();
  return;
}



/* Entry: 1073adf10; end: 1073ae087;  */

void FUN_1073adf10(void)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  undefined8 *extraout_x8_01;
  int extraout_w10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 auStack_1e8 [3];
  undefined1 auStack_1d0 [168];
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [208];
  undefined8 uStack_38;
  
  func_0x0001073aef80();
  func_0x0001073aef8c();
  uStack_38 = extraout_x8;
  func_0x0001073af024();
  func_0x0001072ab574(unaff_x19 + 0x110);
  (**(code **)(*unaff_x20 + 0x20))(auStack_1e8);
  FUN_10738debc(unaff_x19 + 0x10,auStack_1e8);
  func_0x00010725b1d4(auStack_1e8);
  func_0x0001073af038();
  if (((extraout_x8_00 & 1) == 0) && (*(long *)(unaff_x19 + 0x1c0) != 0)) {
    func_0x0001073aeffc(auStack_1e8);
    plVar1 = (long *)(unaff_x19 + 0x10);
    func_0x0001072842e4();
    if ((int)plVar1 != 0) {
      func_0x0001073af00c();
      func_0x0001073af01c(&uStack_210);
      lStack_1f8 = lStack_208;
      uStack_200 = uStack_210;
      if (lStack_208 != 0) {
        do {
          func_0x0001073aef38();
        } while (extraout_w10 != 0);
      }
      FUN_1073ae088(auStack_128,&uStack_200);
      func_0x0001073aefec(auStack_1d0);
      func_0x0001073aefe0(auStack_108);
      (**(code **)(*plVar1 + 0x18))(plVar1,auStack_108);
      func_0x000107273efc(auStack_108);
      func_0x0001073aef50();
      func_0x0001073aef48();
      func_0x0001073aef58();
      func_0x0001073aef20();
    }
    func_0x000107270b00(auStack_1e8);
  }
  func_0x0001073aef30();
  func_0x0001073aef28();
  func_0x0001073aef00(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107273efc(auStack_108);
    func_0x0001073aef50();
    func_0x0001073aef48();
    func_0x0001073aef58();
    func_0x0001073aef20();
    puVar2 = auStack_1e8;
    func_0x000107270b00();
    func_0x0001073aef30();
    func_0x0001073aef28();
    func_0x0001073aeef8();
    pcStack_218 = FUN_1073ae088;
    uVar4 = puVar2[1];
    uVar3 = *puVar2;
    puStack_220 = &stack0xfffffffffffffff0;
    *puVar2 = 0;
    puVar2[1] = 0;
    *extraout_x8_01 = &PTR_SUB_1109ab170;
    extraout_x8_01[2] = uVar4;
    extraout_x8_01[1] = uVar3;
    uStack_230 = 0;
    uStack_228 = 0;
    extraout_x8_01[3] = extraout_x8_01;
    func_0x00010724ae28(&uStack_230);
    return;
  }
  return;
}



/* Entry: 1073ae088; end: 1073ae0c7;  */

void FUN_1073ae088(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  *param_1 = &PTR_SUB_1109ab170;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  uStack_20 = 0;
  uStack_18 = 0;
  param_1[3] = param_1;
  func_0x00010724ae28(&uStack_20);
  return;
}



/* Entry: 1073ae0c8; end: 1073ae10f;  */

void FUN_1073ae0c8(long param_1)

{
  func_0x0001073af024();
  func_0x0001072ab574(param_1 + 0x110);
  *(undefined1 *)(param_1 + 0x150) = 1;
  func_0x0001073aef30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(param_1 + 0xd0);
  return;
}



/* Entry: 1073ae110; end: 1073ae13f;  */

void FUN_1073ae110(int param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001072842e4();
  if (param_1 != 0) {
    func_0x0001073af038();
  }
  return;
}



/* Entry: 1073ae140; end: 1073ae2bb;  */

void FUN_1073ae140(undefined1 *param_1)

{
  byte *pbVar1;
  undefined1 in_ZR;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long lVar4;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [168];
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [208];
  undefined8 uStack_38;
  
  func_0x0001073aef8c();
  pbVar1 = param_1 + 0x150;
  uStack_38 = extraout_x8;
  if ((*pbVar1 & 1) == 0) {
    func_0x0001073aef80();
    param_1 = param_1 + 0x110;
    func_0x0001072ab574();
    if ((*pbVar1 & 1) == 0) {
      func_0x0001072ab574(unaff_x19 + 0x158);
      lVar4 = *(long *)(unaff_x19 + 0x1c0);
      func_0x0001073ae5d4(unaff_x19 + 0x198);
      func_0x0001073aeffc(auStack_1e0);
      if (lVar4 == 0) {
        plVar2 = (long *)(unaff_x19 + 0x10);
        func_0x0001072842e4();
        if ((int)plVar2 != 0) {
          func_0x0001073af00c();
          func_0x0001073af01c(&uStack_200);
          lStack_1e8 = lStack_1f8;
          uStack_1f0 = uStack_200;
          if (lStack_1f8 != 0) {
            do {
              func_0x0001073aef38();
            } while (extraout_w10 != 0);
          }
          FUN_1073ae088(auStack_128,&uStack_1f0);
          func_0x0001073aefec(auStack_1d0);
          func_0x000107273dcc(auStack_108,auStack_128,auStack_1d0);
          (**(code **)(*plVar2 + 0x18))(plVar2,auStack_108);
          func_0x000107273efc(auStack_108);
          func_0x000107273f24(auStack_1d0);
          func_0x0001006393ec(auStack_128);
          func_0x0001073aef58();
          func_0x0001073aef20();
        }
      }
      param_1 = auStack_1e0;
      func_0x000107270b00();
      func_0x0001073aef60();
    }
    func_0x0001073aef30();
  }
  func_0x0001073aef00(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107273efc(auStack_108);
    func_0x000107273f24(auStack_1d0);
    func_0x0001006393ec(auStack_128);
    func_0x0001073aef58();
    func_0x0001073aef20();
    puVar3 = auStack_1e0;
    func_0x000107270b00();
    func_0x0001073aef60();
    func_0x0001073aef30();
    func_0x0001073aeef8();
    if ((puVar3[0x150] & 1) == 0) {
      func_0x0001073aef80();
      func_0x0001073af024();
      if ((puVar3[0x150] & 1) == 0) {
        func_0x000104c003e8(param_1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 0xd0);
      return;
    }
  }
  return;
}



/* Entry: 1073ae2bc; end: 1073ae317;  */

void FUN_1073ae2bc(long param_1)

{
  long unaff_x19;
  
  if ((*(byte *)(param_1 + 0x150) & 1) != 0) {
    return;
  }
  func_0x0001073aef80();
  func_0x0001073af024();
  if ((*(byte *)(param_1 + 0x150) & 1) == 0) {
    func_0x000104c003e8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 0xd0);
  return;
}



/* Entry: 1073ae318; end: 1073ae393;  */

void FUN_1073ae318(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073aef80();
  func_0x00010028af84();
  FUN_1073ae394(param_1 + 0x20,unaff_x20 + 0x20);
  FUN_1073ae434(unaff_x19 + 0x40,unaff_x20 + 0x40);
  func_0x000107263b58(unaff_x19 + 0x60,unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x20 + 0xa0);
  return;
}



/* Entry: 1073ae394; end: 1073ae3cb;  */

undefined1 * FUN_1073ae394(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  FUN_1073ae3cc();
  return param_1;
}



/* Entry: 1073ae3cc; end: 1073ae3df;  */

void FUN_1073ae3cc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_1073ae3fc();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  return;
}



/* Entry: 1073ae3e0; end: 1073ae3fb;  */

void FUN_1073ae3e0(long param_1)

{
  FUN_1073ae3fc();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1073ae3fc; end: 1073ae433;  */

undefined8 * FUN_1073ae3fc(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00010509292c(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 2);
  return param_1;
}



/* Entry: 1073ae434; end: 1073ae46b;  */

undefined1 * FUN_1073ae434(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  FUN_1073ae46c();
  return param_1;
}



/* Entry: 1073ae46c; end: 1073ae47f;  */

void FUN_1073ae46c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_1073658bc();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  return;
}



/* Entry: 1073ae480; end: 1073ae49b;  */

void FUN_1073ae480(long param_1)

{
  FUN_1073658bc();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1073ae49c; end: 1073ae597;  */

void FUN_1073ae49c(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  __ZNSt3__115recursive_mutex8try_lockEv();
  if ((uVar1 & 1) == 0) {
    __ZNSt3__115recursive_mutex4lockEv(param_1);
  }
  return;
}



/* Entry: 1073ae598; end: 1073ae61f;  */

undefined8 * FUN_1073ae598(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  lVar1 = param_2[1];
  *param_1 = *param_2;
  if (lVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      return param_1;
    }
  }
  lVar1 = 0;
  func_0x00010527822c();
  func_0x0001073aef80();
  FUN_1073ae620();
  if (lVar1 == 0) {
    FUN_1073ae648(param_1);
  }
  puVar2 = param_1;
  FUN_1073adcdc(param_1);
  uVar3 = *unaff_x20;
  *unaff_x20 = 0;
  *param_2 = uVar3;
  param_1[5] = param_1[5] + 1;
  return puVar2;
}



/* Entry: 1073ae620; end: 1073ae647;  */

long FUN_1073ae620(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) * 0x40 + -1;
  }
  return lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
}



/* Entry: 1073ae648; end: 1073ae96f;  */

void FUN_1073ae648(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  long *plStack_68;
  
  if ((ulong)param_1[4] < 0x200) {
    puVar12 = (undefined8 *)param_1[1];
    puVar16 = (undefined8 *)param_1[2];
    puVar15 = (undefined8 *)*param_1;
    uVar17 = (long)puVar16 - (long)puVar12;
    plVar13 = param_1 + 3;
    puVar14 = (undefined8 *)*plVar13;
    if (uVar17 < (ulong)((long)puVar14 - (long)puVar15)) {
      uVar7 = 0x1000;
      __Znwm();
      if (puVar14 == puVar16) {
        if (puVar12 == puVar15) {
          lVar11 = (long)puVar14 - (long)puVar12 >> 2;
          if (puVar16 == puVar12) {
            lVar11 = 1;
          }
          plStack_70 = plVar13;
          FUN_1073aea84();
          func_0x0001073aefb4(lVar11 * 2 + 6);
          FUN_1073aea5c(&puStack_90,param_1[1],param_1[2]);
          puVar16 = (undefined8 *)param_1[1];
          puVar12 = (undefined8 *)*param_1;
          puVar15 = (undefined8 *)param_1[3];
          puVar14 = (undefined8 *)param_1[2];
          param_1[1] = (long)puStack_88;
          *param_1 = (long)puStack_90;
          param_1[3] = (long)puStack_78;
          param_1[2] = (long)puStack_80;
          puStack_90 = puVar12;
          puStack_88 = puVar16;
          puStack_80 = puVar14;
          puStack_78 = puVar15;
          func_0x0001073aeff4();
          puVar12 = (undefined8 *)param_1[1];
        }
        puVar12[-1] = uVar7;
        param_1[1] = (long)puVar12;
        FUN_1073ae970(param_1,uVar7);
      }
      else {
        *puVar16 = uVar7;
        param_1[2] = (long)(puVar16 + 1);
      }
    }
    else {
      puVar9 = (undefined8 *)((long)puVar14 - (long)puVar15 >> 2);
      if (puVar14 == puVar15) {
        puVar9 = (undefined8 *)0x1;
      }
      plStack_98 = plVar13;
      FUN_1073aea84();
      puVar14 = (undefined8 *)((long)puVar9 + uVar17);
      puVar15 = puVar9 + param_2;
      uVar7 = 0x1000;
      lVar11 = param_2;
      puStack_b8 = puVar9;
      puStack_b0 = puVar14;
      puStack_a8 = puVar14;
      puStack_a0 = puVar15;
      __Znwm();
      plStack_c8 = param_1 + 5;
      uStack_c0 = 0x200;
      puVar10 = puVar14;
      if (uVar17 == param_2 * 8) {
        if (puVar16 == puVar12) {
          puVar12 = (undefined8 *)0x1;
          uStack_d0 = uVar7;
          plStack_70 = plVar13;
          FUN_1073aea84();
          puStack_78 = puVar12 + lVar11;
          puStack_90 = puVar12;
          puStack_88 = puVar12;
          puStack_80 = puVar12;
          FUN_1073aea5c(&puStack_90,puVar14,puVar14);
          puVar1 = puStack_78;
          puVar10 = puStack_80;
          puVar16 = puStack_88;
          puVar12 = puStack_90;
          puStack_b8 = puStack_90;
          puStack_b0 = puStack_88;
          puStack_a8 = puStack_80;
          puStack_a0 = puStack_78;
          puStack_90 = puVar9;
          puStack_88 = puVar14;
          puStack_80 = puVar14;
          puStack_78 = puVar15;
          func_0x0001073aeff4();
          puVar9 = puVar12;
          puVar14 = puVar16;
          puVar15 = puVar1;
        }
        else {
          puVar14 = puVar14 + (((long)puVar14 - (long)puVar9 >> 3) + 1) / -2;
          puVar10 = puVar14;
          puStack_b0 = puVar14;
        }
      }
      puVar12 = puVar10 + 1;
      *puVar10 = uVar7;
      uStack_d0 = 0;
      puVar16 = (undefined8 *)param_1[2];
      puStack_a8 = puVar12;
      while (puVar10 = (undefined8 *)param_1[1], puVar16 != puVar10) {
        puVar10 = puVar14;
        if (puVar14 == puVar9) {
          if (puVar12 < puVar15) {
            lVar11 = (long)puVar12 - (long)puVar9;
            puVar1 = puVar12 + (((long)puVar15 - (long)puVar12 >> 3) + 1) / 2;
            puVar10 = (undefined8 *)((long)puVar1 - ((long)puVar12 - (long)puVar9));
            puVar12 = puVar1;
            if (lVar11 != 0) {
              _memmove(puVar10,puVar14,lVar11);
            }
          }
          else {
            lVar11 = (long)puVar15 - (long)puVar9 >> 2;
            if ((long)puVar15 - (long)puVar9 == 0) {
              lVar11 = 1;
            }
            plStack_70 = plVar13;
            FUN_1073aea84(lVar11);
            func_0x0001073aefb4(lVar11 * 2 + 6);
            FUN_1073aea5c(&puStack_90,puVar9,puVar12);
            puVar5 = puStack_78;
            puVar4 = puStack_80;
            puVar10 = puStack_88;
            puVar1 = puStack_90;
            puStack_90 = puVar9;
            puStack_88 = puVar14;
            puStack_80 = puVar12;
            puStack_78 = puVar15;
            func_0x0001073aeff4();
            puVar9 = puVar1;
            puVar12 = puVar4;
            puVar15 = puVar5;
          }
        }
        puVar16 = puVar16 + -1;
        puVar14 = puVar10 + -1;
        *puVar14 = *puVar16;
      }
      puStack_b8 = (undefined8 *)*param_1;
      *param_1 = (long)puVar9;
      param_1[1] = (long)puVar14;
      puStack_a0 = (undefined8 *)param_1[3];
      puStack_a8 = (undefined8 *)param_1[2];
      param_1[2] = (long)puVar12;
      param_1[3] = (long)puVar15;
      puStack_b0 = puVar10;
      func_0x0001073aeab8(&uStack_d0);
      func_0x0001073aeae4(&puStack_b8);
    }
    return;
  }
  param_1[4] = param_1[4] - 0x200;
  uVar7 = *(undefined8 *)param_1[1];
  param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  func_0x0001073aef80(param_1,uVar7);
  puVar12 = (undefined8 *)param_1[2];
  if (puVar12 == (undefined8 *)param_1[3]) {
    uVar17 = *unaff_x19;
    uVar8 = unaff_x19[1];
    if (uVar8 < uVar17 || uVar8 - uVar17 == 0) {
      plVar13 = (long *)((long)((long)puVar12 - uVar17) >> 2);
      if ((long)puVar12 - uVar17 == 0) {
        plVar13 = (long *)0x1;
      }
      plVar6 = plVar13;
      FUN_1073aea84();
      plStack_70 = plVar6;
      plStack_68 = plVar6 + ((ulong)plVar13 >> 2);
      FUN_1073aea5c(&plStack_70,unaff_x19[1],unaff_x19[2]);
      uVar17 = unaff_x19[1];
      plVar18 = (long *)*unaff_x19;
      unaff_x19[1] = (ulong)plStack_68;
      *unaff_x19 = (ulong)plStack_70;
      unaff_x19[3] = (ulong)(plVar6 + uVar8);
      unaff_x19[2] = (ulong)(plVar6 + ((ulong)plVar13 >> 2));
      plStack_70 = plVar18;
      plStack_68 = (long *)uVar17;
      func_0x0001073aeae4(&plStack_70);
      puVar12 = (undefined8 *)unaff_x19[2];
    }
    else {
      lVar2 = (((long)(uVar8 - uVar17) >> 3) + 1) / -2;
      lVar11 = uVar8 + lVar2 * 8;
      lVar3 = (long)puVar12 - uVar8;
      if (lVar3 != 0) {
        _memmove(lVar11,uVar8,lVar3);
        uVar8 = unaff_x19[1];
      }
      puVar12 = (undefined8 *)(lVar11 + lVar3);
      unaff_x19[1] = uVar8 + lVar2 * 8;
    }
  }
  *puVar12 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar12 + 1);
  return;
}



/* Entry: 1073ae970; end: 1073aea5b;  */

void FUN_1073ae970(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  
  func_0x0001073aef80();
  puStack_50 = (ulong *)(param_1 + 0x18);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 == (undefined8 *)*puStack_50) {
    uVar7 = *unaff_x19;
    uVar4 = unaff_x19[1];
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar6 = (long)((long)puVar5 - uVar7) >> 2;
      if ((long)puVar5 - uVar7 == 0) {
        uVar6 = 1;
      }
      uVar7 = uVar6;
      FUN_1073aea84();
      uStack_68 = uVar7 + (uVar6 >> 2) * 8;
      uStack_58 = uVar7 + uVar4 * 8;
      uStack_70 = uVar7;
      uStack_60 = uStack_68;
      FUN_1073aea5c(&uStack_70,unaff_x19[1],unaff_x19[2]);
      uVar4 = unaff_x19[1];
      uVar7 = *unaff_x19;
      uVar8 = unaff_x19[3];
      uVar6 = unaff_x19[2];
      unaff_x19[1] = uStack_68;
      *unaff_x19 = uStack_70;
      unaff_x19[3] = uStack_58;
      unaff_x19[2] = uStack_60;
      uStack_70 = uVar7;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      uStack_58 = uVar8;
      func_0x0001073aeae4(&uStack_70);
      puVar5 = (undefined8 *)unaff_x19[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar7) >> 3) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 8;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = unaff_x19[1];
      }
      puVar5 = (undefined8 *)(lVar1 + lVar3);
      unaff_x19[1] = uVar4 + lVar2 * 8;
    }
  }
  *puVar5 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 1073aea5c; end: 1073aea83;  */

void FUN_1073aea5c(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1073aea84; end: 1073aeb4f;  */

undefined1  [16] FUN_1073aea84(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1073aeb50; end: 1073aeb63;  */

void FUN_1073aeb50(void)

{
  func_0x0001073aeb24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073aeb64; end: 1073aebab;  */

void FUN_1073aeb64(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_SUB_1109ab170;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001073aef38();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1073aebac; end: 1073aebfb;  */

void FUN_1073aebac(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_SUB_1109ab170;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001073aef38(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1073aebfc; end: 1073aee6f;  */

undefined1 * FUN_1073aebfc(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long lVar4;
  int extraout_w10;
  long *plVar5;
  long lVar6;
  byte unaff_w22;
  long alStack_220 [2];
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [168];
  undefined1 auStack_138 [32];
  undefined1 auStack_118 [208];
  undefined8 uStack_48;
  
  func_0x0001073aef8c();
  puVar3 = (undefined1 *)(param_1 + 8);
  uStack_48 = extraout_x8;
  func_0x00010724bb70(alStack_220,puVar3);
  if ((alStack_220[0] == 0) || (func_0x0001073af038(), (extraout_x8_00 & 1) != 0))
  goto LAB_1073aedbc;
  puVar3 = (undefined1 *)(alStack_220[0] + 0xd0);
  FUN_1073ae49c(puVar3);
  func_0x0001073af038();
  if ((extraout_x8_01 & 1) == 0) {
    func_0x0001073aeffc(auStack_1f0);
    func_0x0001072ab574(alStack_220[0] + 0x158);
    lVar6 = *(long *)(alStack_220[0] + 0x1c0);
    if (lVar6 == 0) {
      func_0x00010002b838(auStack_118,&DAT_10f40eb4f);
      func_0x0001073aefcc();
      func_0x00010002b838(auStack_118,&UNK_10f40eb57);
      param_2 = auStack_118;
      func_0x00010786df04(1,param_2,0,1);
      func_0x0001073aefcc();
      plVar5 = (long *)0x0;
    }
    else {
      puVar2 = (undefined8 *)
               (*(long *)(*(long *)(alStack_220[0] + 0x1a0) +
                         (*(ulong *)(alStack_220[0] + 0x1b8) >> 9) * 8) +
               (*(ulong *)(alStack_220[0] + 0x1b8) & 0x1ff) * 8);
      plVar5 = (long *)*puVar2;
      *puVar2 = 0;
      FUN_1073add10();
      lVar4 = *(long *)(alStack_220[0] + 0x1c0) + -1;
      uVar1 = *(long *)(alStack_220[0] + 0x1b8) + 1;
      *(ulong *)(alStack_220[0] + 0x1b8) = uVar1;
      *(long *)(alStack_220[0] + 0x1c0) = lVar4;
      if (0x3ff < uVar1) {
        __ZdlPv(**(undefined8 **)(alStack_220[0] + 0x1a0));
        *(long *)(alStack_220[0] + 0x1a0) = *(long *)(alStack_220[0] + 0x1a0) + 8;
        lVar4 = *(long *)(alStack_220[0] + 0x1c0);
        *(long *)(alStack_220[0] + 0x1b8) = *(long *)(alStack_220[0] + 0x1b8) + -0x200;
      }
      in_ZR = lVar4 == 0;
      unaff_w22 = in_ZR;
    }
    func_0x0001073aef60();
    if (lVar6 == 0) {
      if (plVar5 != (long *)0x0) goto LAB_1073aedac;
    }
    else {
      (**(code **)(*plVar5 + 0x10))();
      if ((unaff_w22 & 1) == 0) {
        func_0x0001073af00c();
        func_0x0001073af01c(&uStack_210);
        lStack_1f8 = lStack_208;
        uStack_200 = uStack_210;
        if (lStack_208 != 0) {
          do {
            func_0x0001073aef38();
          } while (extraout_w10 != 0);
        }
        FUN_1073ae088(auStack_138,&uStack_200);
        func_0x0001073aefec(auStack_1e0);
        func_0x0001073aefe0(auStack_118);
        param_2 = auStack_118;
        (**(code **)(*plVar5 + 0x18))(plVar5);
        func_0x000107273efc(auStack_118);
        func_0x0001073aef50();
        func_0x0001073aef48();
        func_0x00010724ae28(&uStack_200);
        func_0x00010724bcd8(&uStack_210);
      }
LAB_1073aedac:
      func_0x0001073aef70();
    }
    puVar3 = auStack_1f0;
    func_0x000107270b00(puVar3);
  }
  func_0x0001073aef28();
LAB_1073aedbc:
  func_0x0001073aef20();
  func_0x0001073aef00(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107273efc(auStack_118);
    func_0x0001073aef50();
    func_0x0001073aef48();
    func_0x00010724ae28(&uStack_200);
    func_0x00010724bcd8(&uStack_210);
    func_0x0001073aef70();
    func_0x000107270b00(auStack_1f0);
    func_0x0001073aef28();
    func_0x0001073aef20();
    __Unwind_Resume(puVar3);
    func_0x0001004a5364(param_2,&PTR_DAT_1109ab1d0);
    puVar3 = puVar3 + 8;
    if ((int)param_2 == 0) {
      puVar3 = (undefined1 *)0x0;
    }
    return puVar3;
  }
  return puVar3;
}



/* Entry: 1073aee70; end: 1073aeea7;  */

long FUN_1073aee70(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109ab1d0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1073aeea8; end: 1073af057;  */

undefined ** FUN_1073aeea8(void)

{
  return &PTR_DAT_1109ab1d0;
}



/* Entry: 1073af058; end: 1073af0df;  */

void FUN_1073af058(long *param_1)

{
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_30 = 0x1138221a0;
  uStack_28 = 1;
  func_0x000107279a5c();
  (**(code **)(*param_1 + 0x20))(auStack_48,param_1);
  FUN_1073af938(0x113822248,auStack_48);
  func_0x00010725b1d4(auStack_48);
  func_0x000107279ee0(&uStack_30);
  return;
}



/* Entry: 1073af0e0; end: 1073af1a3;  */

undefined8 * FUN_1073af0e0(undefined1 *param_1,long *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  puVar2 = &uStack_70;
  func_0x0001073b09a4();
  uStack_38 = extraout_x8;
  (**(code **)(*param_2 + 0x20))(&uStack_70);
  func_0x000105302f48(auStack_58,param_3);
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *puVar1 = &PTR_FUN_1109ab210;
  puVar1[2] = uStack_68;
  puVar1[1] = uStack_70;
  uStack_70 = 0;
  uStack_68 = 0;
  puVar1[3] = uStack_60;
  func_0x000105302f48(puVar1 + 4,auStack_58);
  *(undefined8 **)(param_1 + 0x18) = puVar1;
  FUN_1073af1a4();
  func_0x0001073b096c(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001073b0a68();
  FUN_1073af1a4();
  func_0x0001073b098c();
  func_0x0001006393ec((undefined1 *)((long)puVar2 + 0x18));
  func_0x00010725c0a0();
  if (puVar2 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return (undefined8 *)param_1;
}



/* Entry: 1073af1a4; end: 1073af1f7;  */

undefined8 FUN_1073af1a4(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001006393ec(param_1 + 0x18);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1073af1f8; end: 1073af25f;  */

void FUN_1073af1f8(void)

{
  int iVar1;
  
  if ((bRam00000001138222b0 & 1) == 0) {
    iVar1 = 0x138222b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001078a9570(0x1138222a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1138222b0);
      return;
    }
  }
  return;
}



/* Entry: 1073af260; end: 1073af27b;  */

void FUN_1073af260(void)

{
  FUN_1073af1f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_getspecific_11034c8c0)(uRam00000001138222a8);
  return;
}



/* Entry: 1073af27c; end: 1073af28b;  */

void FUN_1073af27c(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long lVar6;
  long *extraout_x8_00;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  undefined1 *unaff_x20;
  long *unaff_x21;
  undefined1 *unaff_x22;
  undefined8 *puVar9;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar3 = (undefined1 *)0x0;
  puVar2 = (undefined1 *)register0x00000008;
  while( true ) {
    *(undefined1 **)(puVar2 + -0x40) = unaff_x24;
    *(undefined1 **)(puVar2 + -0x38) = unaff_x23;
    *(undefined1 **)(puVar2 + -0x30) = unaff_x22;
    *(long **)(puVar2 + -0x28) = unaff_x21;
    *(undefined1 **)(puVar2 + -0x20) = unaff_x20;
    *(long *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(code **)(puVar2 + -8) = unaff_x30;
    unaff_x29 = puVar2 + -0x10;
    puVar4 = puVar3;
    puVar5 = param_2;
    func_0x0001073b09a4();
    *(undefined8 *)(puVar2 + -0x48) = extraout_x8;
    unaff_x19 = ((ulong)puVar4 & 0xffffffff) * 0x40 + 0x1131ad4a0;
    func_0x0001072ab574(unaff_x19);
    unaff_x21 = (long *)((long)puVar3 * 0x10 + 0x113822288);
    FUN_1073af654(puVar2 + -0x90,unaff_x21);
    lVar6 = *(long *)(puVar2 + -0x90);
    unaff_x22 = param_3;
    unaff_x23 = puVar3;
    unaff_x24 = param_2;
    if (lVar6 == 0) {
      unaff_x24 = (undefined1 *)0x4;
      if (((ulong)param_3 & 0x100000000) != 0) {
        unaff_x24 = param_2;
      }
      ppuVar1 = &PTR_DAT_1109ab1f0;
      if ((int)puVar3 == 0) {
        ppuVar1 = &PTR_DAT_1109ab1e0;
      }
      func_0x000100060b18(puVar2 + -0xb8,ppuVar1);
      func_0x000107313a6c(puVar2 + -0x60,1);
      puVar9 = *(undefined8 **)(puVar2 + -0x50);
      puVar9[2] = 0;
      *puVar9 = &PTR_DAT_11099f968;
      puVar9[1] = 0;
      *(undefined8 *)(puVar2 + -0x78) = *(undefined8 *)(puVar2 + -0xb0);
      *(undefined8 *)(puVar2 + -0x80) = *(undefined8 *)(puVar2 + -0xb8);
      *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0xa8);
      *(undefined8 *)(puVar2 + -0xb8) = 0;
      *(undefined8 *)(puVar2 + -0xb0) = 0;
      *(undefined8 *)(puVar2 + -0xa8) = 0;
      uVar7 = (ulong)unaff_x24 >> 0x20 | 0x100000000;
      if (((ulong)param_3 & 0x100000001) != 0x100000001) {
        uVar7 = 0x100000000;
      }
      func_0x000107313ae4(puVar9 + 3,(uint)unaff_x24 & 0xff,uVar7,puVar2 + -0x80);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2 + -0x80);
      unaff_x22 = *(undefined1 **)(puVar2 + -0x50);
      *(undefined8 *)(puVar2 + -0x50) = 0;
      unaff_x23 = unaff_x22 + 0x18;
      func_0x0001073141d4(puVar2 + -0x60);
      *(undefined8 *)(puVar2 + -0xa0) = 0;
      *(undefined8 *)(puVar2 + -0x98) = 0;
      *(undefined8 *)(puVar2 + -0x78) = *(undefined8 *)(puVar2 + -0x88);
      *(undefined8 *)(puVar2 + -0x80) = *(undefined8 *)(puVar2 + -0x90);
      *(undefined1 **)(puVar2 + -0x90) = unaff_x23;
      *(undefined1 **)(puVar2 + -0x88) = unaff_x22;
      func_0x00010724b8b8(puVar2 + -0x80);
      puVar5 = puVar2 + -0x90;
      func_0x0001073af738(unaff_x21);
      func_0x000107313354(puVar2 + -0xa0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2 + -0xb8);
      func_0x0001073b0a38();
      in_ZR = cRam00000001138222d8 == '\x01';
      if ((bool)in_ZR) {
        unaff_x21 = *(long **)(puVar2 + -0x90);
        FUN_1073b04cc(puVar2 + -0xe0,0x1138222b8);
        puVar5 = puVar2 + -0xe0;
        (**(code **)(*unaff_x21 + 0x28))(unaff_x21);
        FUN_1073b0514(puVar2 + -0xe0);
      }
      func_0x0001073b09bc();
      lVar6 = *(long *)(puVar2 + -0x90);
    }
    lVar8 = *(long *)(puVar2 + -0x88);
    *(undefined8 *)(puVar2 + -0x90) = 0;
    *(undefined8 *)(puVar2 + -0x88) = 0;
    *param_1 = lVar6;
    param_1[1] = lVar8;
    *(undefined8 *)(puVar2 + -0xf0) = 0;
    *(undefined8 *)(puVar2 + -0xe8) = 0;
    func_0x0001073b09b4();
    unaff_x20 = puVar2 + -0x90;
    func_0x00010724b8b8();
    func_0x0001073b09dc();
    func_0x0001073b096c(*(undefined8 *)(puVar2 + -0x48));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    FUN_1073b0514(puVar2 + -0xe0);
    func_0x0001073b09bc();
    param_2 = puVar2 + -0x90;
    func_0x00010724b8b8();
    func_0x0001073b09dc();
    unaff_x30 = FUN_1073af4d0;
    func_0x0001073b0994();
    puVar3 = (undefined1 *)0x1;
    puVar2 = puVar2 + -0xf0;
    param_3 = puVar5;
    param_1 = extraout_x8_00;
  }
  return;
}



/* Entry: 1073af28c; end: 1073af4cf;  */

void FUN_1073af28c(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined **ppuVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long lVar4;
  long *extraout_x8_00;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  undefined1 *unaff_x20;
  long *unaff_x21;
  undefined1 *unaff_x22;
  undefined8 *puVar7;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar2 = param_2;
    puVar3 = param_3;
    func_0x0001073b09a4();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    unaff_x19 = ((ulong)puVar2 & 0xffffffff) * 0x40 + 0x1131ad4a0;
    func_0x0001072ab574(unaff_x19);
    unaff_x21 = (long *)(((ulong)param_2 & 0xffffffff) * 0x10 + 0x113822288);
    FUN_1073af654((undefined1 *)((long)register0x00000008 + -0x90),unaff_x21);
    lVar4 = *(long *)((long)register0x00000008 + -0x90);
    unaff_x22 = param_4;
    unaff_x23 = param_2;
    unaff_x24 = param_3;
    if (lVar4 == 0) {
      unaff_x24 = (undefined1 *)0x4;
      if (((ulong)param_4 & 0x100000000) != 0) {
        unaff_x24 = param_3;
      }
      ppuVar1 = &PTR_DAT_1109ab1f0;
      if (((ulong)param_2 & 1) == 0) {
        ppuVar1 = &PTR_DAT_1109ab1e0;
      }
      func_0x000100060b18((undefined1 *)((long)register0x00000008 + -0xb8),ppuVar1);
      func_0x000107313a6c((undefined1 *)((long)register0x00000008 + -0x60),1);
      puVar7 = *(undefined8 **)((long)register0x00000008 + -0x50);
      puVar7[2] = 0;
      *puVar7 = &PTR_DAT_11099f968;
      puVar7[1] = 0;
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0xb0);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0xb8);
      *(undefined8 *)((long)register0x00000008 + -0x70) =
           *(undefined8 *)((long)register0x00000008 + -0xa8);
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
      uVar5 = (ulong)unaff_x24 >> 0x20 | 0x100000000;
      if (((ulong)param_4 & 0x100000001) != 0x100000001) {
        uVar5 = 0x100000000;
      }
      func_0x000107313ae4(puVar7 + 3,(uint)unaff_x24 & 0xff,uVar5,
                          (undefined1 *)((long)register0x00000008 + -0x80));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                ((undefined1 *)((long)register0x00000008 + -0x80));
      unaff_x22 = *(undefined1 **)((long)register0x00000008 + -0x50);
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
      unaff_x23 = unaff_x22 + 0x18;
      func_0x0001073141d4((undefined1 *)((long)register0x00000008 + -0x60));
      *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined1 **)((long)register0x00000008 + -0x90) = unaff_x23;
      *(undefined1 **)((long)register0x00000008 + -0x88) = unaff_x22;
      func_0x00010724b8b8((undefined1 *)((long)register0x00000008 + -0x80));
      puVar3 = (undefined1 *)((long)register0x00000008 + -0x90);
      func_0x0001073af738(unaff_x21);
      func_0x000107313354((undefined1 *)((long)register0x00000008 + -0xa0));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                ((undefined1 *)((long)register0x00000008 + -0xb8));
      func_0x0001073b0a38();
      in_ZR = cRam00000001138222d8 == '\x01';
      if ((bool)in_ZR) {
        unaff_x21 = *(long **)((long)register0x00000008 + -0x90);
        FUN_1073b04cc((undefined1 *)((long)register0x00000008 + -0xe0),0x1138222b8);
        puVar3 = (undefined1 *)((long)register0x00000008 + -0xe0);
        (**(code **)(*unaff_x21 + 0x28))(unaff_x21);
        FUN_1073b0514((undefined1 *)((long)register0x00000008 + -0xe0));
      }
      func_0x0001073b09bc();
      lVar4 = *(long *)((long)register0x00000008 + -0x90);
    }
    lVar6 = *(long *)((long)register0x00000008 + -0x88);
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
    *param_1 = lVar4;
    param_1[1] = lVar6;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
    func_0x0001073b09b4();
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x90);
    func_0x00010724b8b8();
    func_0x0001073b09dc();
    func_0x0001073b096c(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    FUN_1073b0514((undefined1 *)((long)register0x00000008 + -0xe0));
    func_0x0001073b09bc();
    param_3 = (undefined1 *)((long)register0x00000008 + -0x90);
    func_0x00010724b8b8();
    func_0x0001073b09dc();
    unaff_x30 = FUN_1073af4d0;
    func_0x0001073b0994();
    param_2 = (undefined1 *)0x1;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
    param_4 = puVar3;
    param_1 = extraout_x8_00;
  }
  return;
}



/* Entry: 1073af4d0; end: 1073af4df;  */

/* WARNING: Removing unreachable block (ram,0x0001073af314) */

void FUN_1073af4d0(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long lVar3;
  long *extraout_x8_00;
  long lVar4;
  long unaff_x19;
  undefined1 *unaff_x20;
  long *unaff_x21;
  undefined8 *puVar5;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    uVar1 = 1;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x23 = (undefined1 *)0x1;
    puVar2 = param_2;
    func_0x0001073b09a4();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    unaff_x19 = (uVar1 & 0xffffffff) * 0x40 + 0x1131ad4a0;
    func_0x0001072ab574(unaff_x19);
    unaff_x21 = (long *)0x113822298;
    FUN_1073af654((undefined1 *)((long)register0x00000008 + -0x90),0x113822298);
    lVar3 = *(long *)((long)register0x00000008 + -0x90);
    unaff_x22 = param_3;
    unaff_x24 = param_2;
    if (lVar3 == 0) {
      unaff_x24 = (undefined1 *)0x4;
      if (((ulong)param_3 & 0x100000000) != 0) {
        unaff_x24 = param_2;
      }
      func_0x000100060b18((undefined1 *)((long)register0x00000008 + -0xb8),&PTR_DAT_1109ab1f0);
      func_0x000107313a6c((undefined1 *)((long)register0x00000008 + -0x60),1);
      puVar5 = *(undefined8 **)((long)register0x00000008 + -0x50);
      puVar5[2] = 0;
      *puVar5 = &PTR_DAT_11099f968;
      puVar5[1] = 0;
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0xb0);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0xb8);
      *(undefined8 *)((long)register0x00000008 + -0x70) =
           *(undefined8 *)((long)register0x00000008 + -0xa8);
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
      uVar1 = (ulong)unaff_x24 >> 0x20 | 0x100000000;
      if (((ulong)param_3 & 0x100000001) != 0x100000001) {
        uVar1 = 0x100000000;
      }
      func_0x000107313ae4(puVar5 + 3,(uint)unaff_x24 & 0xff,uVar1,
                          (undefined1 *)((long)register0x00000008 + -0x80));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                ((undefined1 *)((long)register0x00000008 + -0x80));
      unaff_x22 = *(undefined1 **)((long)register0x00000008 + -0x50);
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
      unaff_x23 = unaff_x22 + 0x18;
      func_0x0001073141d4((undefined1 *)((long)register0x00000008 + -0x60));
      *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined1 **)((long)register0x00000008 + -0x90) = unaff_x23;
      *(undefined1 **)((long)register0x00000008 + -0x88) = unaff_x22;
      func_0x00010724b8b8((undefined1 *)((long)register0x00000008 + -0x80));
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x90);
      func_0x0001073af738(0x113822298);
      func_0x000107313354((undefined1 *)((long)register0x00000008 + -0xa0));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                ((undefined1 *)((long)register0x00000008 + -0xb8));
      func_0x0001073b0a38();
      in_ZR = cRam00000001138222d8 == '\x01';
      if ((bool)in_ZR) {
        unaff_x21 = *(long **)((long)register0x00000008 + -0x90);
        FUN_1073b04cc((undefined1 *)((long)register0x00000008 + -0xe0),0x1138222b8);
        puVar2 = (undefined1 *)((long)register0x00000008 + -0xe0);
        (**(code **)(*unaff_x21 + 0x28))(unaff_x21);
        FUN_1073b0514((undefined1 *)((long)register0x00000008 + -0xe0));
      }
      func_0x0001073b09bc();
      lVar3 = *(long *)((long)register0x00000008 + -0x90);
    }
    lVar4 = *(long *)((long)register0x00000008 + -0x88);
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
    *param_1 = lVar3;
    param_1[1] = lVar4;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
    func_0x0001073b09b4();
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x90);
    func_0x00010724b8b8();
    func_0x0001073b09dc();
    func_0x0001073b096c(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    FUN_1073b0514((undefined1 *)((long)register0x00000008 + -0xe0));
    func_0x0001073b09bc();
    param_2 = (undefined1 *)((long)register0x00000008 + -0x90);
    func_0x00010724b8b8();
    func_0x0001073b09dc();
    unaff_x30 = FUN_1073af4d0;
    func_0x0001073b0994();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
    param_3 = puVar2;
    param_1 = extraout_x8_00;
  }
  return;
}



/* Entry: 1073af4e0; end: 1073af653;  */

void FUN_1073af4e0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long alStack_70 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000113822278 & 1) == 0) {
    iVar5 = 0x13822278;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      FUN_1073afd04(0x113822260,10);
      ___cxa_guard_release(0x113822278);
    }
  }
  func_0x0001072ab574(0x1131ad420);
  lVar7 = 0;
  lVar6 = 0;
  lVar1 = 0;
  if (lRam0000000113822280 != 9) {
    lVar1 = lRam0000000113822280 + 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  lRam0000000113822280 = lVar1;
  do {
    lVar1 = lRam0000000113822260;
    if (lVar6 == 10) {
LAB_1073af5c0:
      uVar4 = uStack_58;
      uVar3 = uStack_60;
      uStack_60 = 0;
      uStack_58 = 0;
      param_1[1] = uVar4;
      *param_1 = uVar3;
      func_0x0001073b09b4();
      func_0x00010724b8b8(&uStack_60);
      func_0x0001073b0a0c();
      return;
    }
    FUN_1073af654(alStack_70,lRam0000000113822260 + lVar7);
    lVar2 = alStack_70[0];
    if (alStack_70[0] != 0 && lVar6 == lRam0000000113822280) {
      func_0x0001073af690(&uStack_60,alStack_70);
    }
    func_0x00010724b8b8(alStack_70);
    if (lVar2 == 0) {
      FUN_1073af6e0(alStack_70);
      FUN_1073af700(&uStack_60,alStack_70);
      FUN_1073b0918(alStack_70);
      func_0x0001073af738(lVar1 + lVar7,&uStack_60);
      lRam0000000113822280 = lVar6;
      goto LAB_1073af5c0;
    }
    lVar6 = lVar6 + 1;
    lVar7 = lVar7 + 0x10;
  } while( true );
}



/* Entry: 1073af654; end: 1073af6df;  */

void FUN_1073af654(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 1073af6e0; end: 1073af6ff;  */

void FUN_1073af6e0(void)

{
  undefined1 uStack_11;
  
  FUN_1073b0740(&uStack_11);
  return;
}



/* Entry: 1073af700; end: 1073af78b;  */

undefined8 * FUN_1073af700(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001073b09b4();
  return param_1;
}



/* Entry: 1073af78c; end: 1073af893;  */

void FUN_1073af78c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_78 [40];
  long *aplStack_50 [2];
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x0001073b0a38();
    FUN_1073afee0(0x1138222b8,param_1);
    func_0x0001073b09bc();
    lVar2 = 0x1131ad4a0;
    lVar4 = 2;
    lVar3 = 0x113822288;
    do {
      func_0x0001072ab574(lVar2);
      FUN_1073af654(aplStack_50,lVar3);
      plVar1 = aplStack_50[0];
      if (aplStack_50[0] != (long *)0x0) {
        FUN_1073b04cc(auStack_78,param_1);
        (**(code **)(*plVar1 + 0x28))(plVar1,auStack_78);
        FUN_1073b0514(auStack_78);
      }
      func_0x00010724b8b8(aplStack_50);
      __ZNSt3__15mutex6unlockEv(lVar2);
      lVar2 = lVar2 + 0x40;
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 1073af894; end: 1073af937;  */

void FUN_1073af894(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *aplStack_50 [2];
  
  lVar1 = 0x1131ad4a0;
  lVar3 = 2;
  lVar2 = 0x113822288;
  do {
    func_0x0001072ab574(lVar1);
    FUN_1073af654(aplStack_50,lVar2);
    if (aplStack_50[0] != (long *)0x0) {
      (**(code **)(*aplStack_50[0] + 0x30))(aplStack_50[0],param_1,param_2);
    }
    func_0x0001073b09b4();
    func_0x0001073b09dc();
    lVar1 = lVar1 + 0x40;
    lVar2 = lVar2 + 0x10;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}



/* Entry: 1073af938; end: 1073af973;  */

long FUN_1073af938(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_1073af974();
    lVar2 = uVar1 + 0x18;
  }
  else {
    lVar2 = param_1;
    FUN_1073af998();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x18;
}



/* Entry: 1073af974; end: 1073af997;  */

void FUN_1073af974(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  puVar1[2] = param_2[2];
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 1073af998; end: 1073afa43;  */

long FUN_1073af998(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  plVar1 = param_1;
  FUN_1073afa44(param_1,(param_1[1] - *param_1) / 0x18 + 1);
  FUN_1073afb28(auStack_58,plVar1,(param_1[1] - *param_1) / 0x18,param_1 + 2);
  uVar3 = *param_2;
  puStack_48[1] = param_2[1];
  *puStack_48 = uVar3;
  *param_2 = 0;
  param_2[1] = 0;
  puStack_48[2] = param_2[2];
  puStack_48 = puStack_48 + 3;
  FUN_1073afa94(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x0001073afc9c(auStack_58);
  return lVar2;
}



/* Entry: 1073afa44; end: 1073afa93;  */

long * FUN_1073afa44(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    uVar1 = (param_1[2] - *param_1) / 0x18;
    plVar3 = (long *)(uVar1 * 2);
    if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
      plVar3 = param_2;
    }
    if (0x555555555555554 < uVar1) {
      plVar3 = (long *)0xaaaaaaaaaaaaaaa;
    }
    return plVar3;
  }
  FUN_1073afb1c();
  func_0x0001073b0a50();
  plVar3 = param_1 + 2;
  lVar4 = param_2[1] + ((param_1[1] - *param_1) / -0x18) * 0x18;
  FUN_1073afbc4(plVar3,*param_1,param_1[1],lVar4);
  unaff_x19[1] = lVar4;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return plVar3;
}



/* Entry: 1073afa94; end: 1073afb1b;  */

void FUN_1073afa94(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x0001073b0a50();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18;
  FUN_1073afbc4(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1073afb1c; end: 1073afb27;  */

long * FUN_1073afb1c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x0001073b0a44();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001073afb74();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 1073afb28; end: 1073afb97;  */

long * FUN_1073afb28(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001073afb74();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 1073afb98; end: 1073afbc3;  */

void FUN_1073afb98(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = param_4;
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 3) {
    uVar2 = *puVar1;
    puStack_38[1] = puVar1[1];
    *puStack_38 = uVar2;
    *puVar1 = 0;
    puVar1[1] = 0;
    puStack_38[2] = puVar1[2];
    puStack_38 = puStack_38 + 3;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  puStack_40 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    func_0x00010725b1d4(param_2);
  }
  func_0x0001073afc58(&uStack_60);
  return;
}



/* Entry: 1073afbc4; end: 1073afcc7;  */

void FUN_1073afbc4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 3) {
    uVar2 = *puVar1;
    puStack_28[1] = puVar1[1];
    *puStack_28 = uVar2;
    *puVar1 = 0;
    puVar1[1] = 0;
    puStack_28[2] = puVar1[2];
    puStack_28 = puStack_28 + 3;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    func_0x00010725b1d4(param_2);
  }
  func_0x0001073afc58(&uStack_50);
  return;
}



/* Entry: 1073afcc8; end: 1073afccf;  */

void FUN_1073afcc8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073b0a50(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    func_0x00010725b1d4();
  }
  return;
}



/* Entry: 1073afcd0; end: 1073afd03;  */

void FUN_1073afcd0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073b0a50();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    func_0x00010725b1d4();
  }
  return;
}



/* Entry: 1073afd04; end: 1073afd6b;  */

undefined8 * FUN_1073afd04(undefined8 *param_1,long param_2)

{
  undefined8 *puStack_30;
  undefined1 uStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_28 = 0;
  puStack_30 = param_1;
  if (param_2 != 0) {
    FUN_1073afd6c(param_1);
    FUN_1073afda4(param_1,param_2);
  }
  uStack_28 = 1;
  FUN_1073afe14(&puStack_30);
  return param_1;
}



/* Entry: 1073afd6c; end: 1073afda3;  */

void FUN_1073afd6c(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_2 >> 0x3c != 0) {
    FUN_1073afdc8();
    puVar3 = (undefined8 *)param_1[1];
    puVar1 = puVar3;
    for (lVar4 = param_2 << 4; lVar4 != 0; lVar4 = lVar4 + -0x10) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 2;
    }
    param_1[1] = (long)(puVar3 + param_2 * 2);
    return;
  }
  plVar2 = param_1 + 2;
  FUN_1073afdd4();
  *param_1 = (long)plVar2;
  param_1[1] = (long)plVar2;
  param_1[2] = (long)(plVar2 + param_2 * 2);
  return;
}



/* Entry: 1073afda4; end: 1073afdc7;  */

void FUN_1073afda4(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar1 = puVar2;
  for (lVar3 = param_2 << 4; lVar3 != 0; lVar3 = lVar3 + -0x10) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
  }
  *(undefined8 **)(param_1 + 8) = puVar2 + param_2 * 2;
  return;
}



/* Entry: 1073afdc8; end: 1073afdd3;  */

void FUN_1073afdc8(void)

{
  func_0x0001073b0a44();
  FUN_1073afdf8();
  return;
}



/* Entry: 1073afdd4; end: 1073afdf7;  */

void FUN_1073afdd4(void)

{
  FUN_1073afdf8();
  return;
}



/* Entry: 1073afdf8; end: 1073afe13;  */

long FUN_1073afdf8(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001073afe40(param_1);
  }
  return param_1;
}



/* Entry: 1073afe14; end: 1073afe7b;  */

long FUN_1073afe14(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001073afe40(param_1);
  }
  return param_1;
}



/* Entry: 1073afe7c; end: 1073afe83;  */

void FUN_1073afe7c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073b0a50(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x0001073afeb8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073afe84; end: 1073afedf;  */

void FUN_1073afe84(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073b0a50();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x0001073afeb8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073afee0; end: 1073aff07;  */

void FUN_1073afee0(long param_1,long param_2)

{
  char cVar1;
  undefined8 *unaff_x19;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 != *(char *)(param_2 + 0x20)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x20) == '\x01') {
        FUN_1073b0384();
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      return;
    }
    FUN_1073b03fc();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x0001073b0a68();
    FUN_1073aff8c();
    uVar5 = unaff_x19[1];
    uVar4 = *unaff_x19;
    uVar3 = unaff_x19[3];
    uVar2 = unaff_x19[2];
    unaff_x19[1] = uStack_38;
    *unaff_x19 = uStack_40;
    unaff_x19[3] = uStack_28;
    unaff_x19[2] = uStack_30;
    uStack_40 = uVar4;
    uStack_38 = uVar5;
    uStack_30 = uVar2;
    uStack_28 = uVar3;
    FUN_1073b0384(&uStack_40);
    return;
  }
  return;
}



/* Entry: 1073aff08; end: 1073aff47;  */

void FUN_1073aff08(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1073b0384();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 1073aff48; end: 1073aff8b;  */

void FUN_1073aff48(void)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001073b0a68();
  FUN_1073aff8c();
  uVar4 = unaff_x19[1];
  uVar3 = *unaff_x19;
  uVar2 = unaff_x19[3];
  uVar1 = unaff_x19[2];
  unaff_x19[1] = uStack_38;
  *unaff_x19 = uStack_40;
  unaff_x19[3] = uStack_28;
  unaff_x19[2] = uStack_30;
  uStack_40 = uVar3;
  uStack_38 = uVar4;
  uStack_30 = uVar1;
  uStack_28 = uVar2;
  FUN_1073b0384(&uStack_40);
  return;
}



/* Entry: 1073aff8c; end: 1073b0033;  */

undefined8 FUN_1073aff8c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  uint unaff_w22;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_2;
  FUN_1073b0034(param_1,param_2,param_2,param_3);
  if (*(long *)(param_2 + 0x18) != 0) {
    func_0x0001073b0a20();
    FUN_1073b0290();
    lStack_40 = param_2;
    lStack_38 = lVar1;
    while (lStack_40 != 0) {
      func_0x000104c2fe38(lStack_38);
      func_0x0001073b09e4();
      func_0x0001073b0940(unaff_w22 & 0x7f);
      func_0x0001073b0a2c();
      FUN_1073b0350(&lStack_40);
    }
    func_0x0001073b09f4();
  }
  return param_1;
}



/* Entry: 1073b0034; end: 1073b00af;  */

/* WARNING: Removing unreachable block (ram,0x0001073b00d4) */

undefined8 * FUN_1073b0034(undefined8 *param_1)

{
  *param_1 = &UNK_10e52b660;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



/* Entry: 1073b00b0; end: 1073b014f;  */

undefined8 * FUN_1073b00b0(undefined8 *param_1,long param_2)

{
  *param_1 = &UNK_10e52b660;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 != 0) {
    param_1[2] = 0xffffffffffffffff >> (LZCOUNT(param_2) & 0x3fU);
    func_0x0001073b00f8(param_1);
  }
  return param_1;
}



/* Entry: 1073b0150; end: 1073b020b;  */

void FUN_1073b0150(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = *param_1;
  lVar4 = param_1[1];
  lVar5 = param_1[2];
  param_1[2] = param_2;
  func_0x0001073b00f8();
  lVar7 = param_1[1];
  for (lVar6 = 0; lVar5 != lVar6; lVar6 = lVar6 + 1) {
    if (-1 < *(char *)(lVar1 + lVar6)) {
      lVar2 = lVar4;
      func_0x000104c2fe38(lVar4);
      plVar3 = param_1;
      func_0x000100061de0(param_1,lVar2);
      FUN_1073b0940((uint)lVar2 & 0x7f);
      FUN_1073b020c(param_1,lVar7 + (long)plVar3 * 0x110,lVar4);
    }
    lVar4 = lVar4 + 0x110;
  }
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 1073b020c; end: 1073b028f;  */

long FUN_1073b020c(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x0001073b0238(param_2,param_3);
  func_0x000107266968(param_3 + 0x38);
  func_0x000104c2f714(param_3);
  return param_3;
}



/* Entry: 1073b0290; end: 1073b02bb;  */

undefined1  [16] FUN_1073b0290(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_1073b02bc(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 1073b02bc; end: 1073b0313;  */

void FUN_1073b02bc(long *param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    uVar3 = *(undefined8 *)pcVar1;
    uVar2 = CONCAT17(-(-2 < (char)((ulong)uVar3 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar3 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar3 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar3 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar3 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar3 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar3 >> 8)),-(-2 < (char)uVar3))))))));
    uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
    pcVar1 = pcVar1 + (uVar2 >> 3);
    *param_1 = (long)pcVar1;
    param_1[1] = param_1[1] + (uVar2 >> 3) * 0x110;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 1073b0314; end: 1073b034f;  */

long FUN_1073b0314(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000104c2fe00();
  func_0x0001077b3f48(lVar1 + 0x38,param_2 + 0x38);
  return param_1;
}



/* Entry: 1073b0350; end: 1073b0383;  */

long * FUN_1073b0350(long *param_1)

{
  param_1[1] = param_1[1] + 0x110;
  *param_1 = *param_1 + 1;
  FUN_1073b02bc();
  return param_1;
}



/* Entry: 1073b0384; end: 1073b03bf;  */

long * FUN_1073b0384(long *param_1)

{
  if (param_1[2] != 0) {
    FUN_1073b03c0(param_1);
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 1073b03c0; end: 1073b03fb;  */

void FUN_1073b03c0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x0001073b0264(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x110;
  }
  return;
}



/* Entry: 1073b03fc; end: 1073b041b;  */

void FUN_1073b03fc(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_1073b041c(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 1073b041c; end: 1073b04cb;  */

undefined8 FUN_1073b041c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint unaff_w22;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  FUN_1073b00b0(param_1,0,param_2,param_2,param_3);
  if (*(long *)(param_2 + 0x18) != 0) {
    func_0x0001073b0a20();
    FUN_1073b0290();
    lStack_40 = param_2;
    uStack_38 = uVar1;
    while (lStack_40 != 0) {
      func_0x000104c2fe38(uStack_38);
      func_0x0001073b09e4();
      func_0x0001073b0940(unaff_w22 & 0x7f);
      func_0x0001073b0a2c();
      FUN_1073b0350(&lStack_40);
    }
    func_0x0001073b09f4();
  }
  return param_1;
}



/* Entry: 1073b04cc; end: 1073b04ff;  */

undefined1 * FUN_1073b04cc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x20] = 0;
  FUN_1073b0500();
  return param_1;
}



/* Entry: 1073b0500; end: 1073b0513;  */

void FUN_1073b0500(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_1073b03fc();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 1073b0514; end: 1073b0533;  */

void FUN_1073b0514(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1073b0384();
  }
  return;
}



/* Entry: 1073b0534; end: 1073b055f;  */

undefined8 * FUN_1073b0534(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ab210;
  FUN_1073af1a4(param_1 + 1);
  return param_1;
}



/* Entry: 1073b0560; end: 1073b0573;  */

void FUN_1073b0560(void)

{
  FUN_1073b0534();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073b0574; end: 1073b05af;  */

undefined8 FUN_1073b0574(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x40;
  __Znwm(0x40);
  FUN_1073b06e0();
  return uVar1;
}



/* Entry: 1073b05b0; end: 1073b05db;  */

undefined8 * FUN_1073b05b0(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109ab210;
  func_0x000107283e34(param_2 + 1);
  func_0x00010724cbe8(param_2 + 4,param_1 + 0x20);
  return param_2;
}



/* Entry: 1073b05dc; end: 1073b069b;  */

undefined1 * FUN_1073b05dc(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x0001073b09a4();
  uStack_28 = extraout_x8;
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x000107284284(auStack_58,param_1 + 8);
    iVar1 = (int)param_1 + 8;
    func_0x0001072842e4();
    if (iVar1 != 0) {
      plVar2 = (long *)(param_1 + 8);
      func_0x00010728433c();
      func_0x000105302f48(auStack_48,param_1 + 0x20);
      param_2 = auStack_48;
      (**(code **)(*plVar2 + 0x10))(plVar2);
      func_0x0001006393ec(auStack_48);
    }
    param_1 = auStack_58;
    func_0x000107270b00();
  }
  func_0x0001073b096c(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001006393ec(auStack_48);
  puVar3 = auStack_58;
  func_0x000107270b00(puVar3);
  func_0x0001073b098c();
  func_0x0001004a5364(param_2,&PTR_DAT_1109ab270);
  puVar3 = puVar3 + 8;
  if ((int)param_2 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  return puVar3;
}


