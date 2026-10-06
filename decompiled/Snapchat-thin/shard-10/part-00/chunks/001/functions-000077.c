/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1074371c0; end: 1074371df;  */

void FUN_1074371c0(void)

{
  func_0x00010743ba18();
  FUN_1074371e0();
  return;
}



/* Entry: 1074371e0; end: 1074371f7;  */

void FUN_1074371e0(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x00010743bfbc(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x00010743c22c();
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074371f8; end: 10743722b;  */

void FUN_1074371f8(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010743bfbc();
  if ((bool)in_ZR) {
    func_0x00010743c22c();
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10743722c; end: 10743746b;  */

long * FUN_10743722c(ulong param_1)

{
  code *pcVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar2;
  undefined1 uVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar4;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  ulong uVar5;
  long *extraout_x10;
  long *plVar6;
  long *extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar7;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  
  func_0x00010743c39c();
  func_0x00010743b648();
  func_0x00010743c1a4();
  if (unaff_x24 != 0) {
    func_0x00010743c3fc();
    if ((bool)in_ZR) {
      unaff_x25 = unaff_x23 & unaff_x21;
    }
    else {
      func_0x00010743c06c();
      if ((bool)in_CY) {
        func_0x00010743bad8();
      }
    }
    func_0x00010743c060();
    if (unaff_x20 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (long *)*unaff_x20;
          if (unaff_x20 == (long *)0x0) goto LAB_1074372b4;
          func_0x00010743c048();
          if (!(bool)in_ZR) break;
          func_0x00010743b818();
          if ((param_1 & 1) != 0) goto LAB_10743744c;
        }
        if ((unaff_x24 & unaff_x23) == 0) {
          uVar5 = extraout_x8 & unaff_x23;
        }
        else {
          uVar5 = extraout_x8;
          if (unaff_x24 <= extraout_x8) {
            func_0x00010743c03c();
            uVar5 = extraout_x8_00;
          }
        }
        in_NG = (long)(uVar5 - unaff_x25) < 0;
        in_ZR = uVar5 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_1074372b4:
  func_0x00010743ba58();
  func_0x00010743b288();
  func_0x00010743c370();
  *(undefined4 *)(unaff_x20 + 0xb) = 0;
  func_0x00010743b584();
  if ((unaff_x24 != 0) && (func_0x00010743b688(), !(bool)in_NG)) goto LAB_10743740c;
  func_0x00010743b2f8();
  uVar2 = 2 < unaff_x24;
  uVar3 = unaff_x24 == 3;
  func_0x00010743b2c0();
  func_0x00010743c1c8();
  if ((bool)uVar3) {
    unaff_x22 = 2;
  }
  else {
    uVar3 = (unaff_x22 & extraout_x8_01) == 0;
    uVar2 = 0;
    if (!(bool)uVar3) {
      func_0x00010743bd94();
      unaff_x22 = param_1;
    }
  }
  func_0x00010743c078();
  if (!(bool)uVar2 || (bool)uVar3) {
    if (!(bool)uVar2) {
      func_0x00010743b35c();
      if (((bool)uVar2) && (func_0x00010743bdec(), extraout_x8_04 == 0)) {
        func_0x00010743b20c();
      }
      else {
        __ZNSt3__112__next_primeEm();
      }
      func_0x00010743ba24();
      if ((bool)uVar2) {
        unaff_x24 = *(ulong *)(unaff_x19 + 8);
      }
      else {
        if (unaff_x22 != 0) goto LAB_107437310;
        func_0x00010743c108();
        FUN_107437508();
        func_0x00010743c150();
      }
    }
  }
  else {
LAB_107437310:
    if (unaff_x22 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x107437460);
      (*pcVar1)();
    }
    __Znwm(unaff_x22 << 3);
    FUN_107437508();
    func_0x00010743b9f8();
    uVar5 = extraout_x9;
    while (uVar3 = unaff_x22 == uVar5, !(bool)uVar3) {
      func_0x00010743baf0();
      uVar5 = extraout_x9_00;
    }
    unaff_x24 = unaff_x22;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x00010743b618();
      func_0x00010743b604();
      plVar6 = extraout_x10;
      while (*plVar6 != 0) {
        func_0x00010743c180();
        lVar4 = extraout_x8_02;
        plVar6 = extraout_x12;
        uVar5 = extraout_x11;
        if ((bool)uVar3) {
          uVar7 = extraout_x13 & extraout_x9_01;
        }
        else {
          uVar7 = extraout_x13;
          if (unaff_x22 <= extraout_x13) {
            func_0x00010743c1bc();
            lVar4 = extraout_x8_03;
            uVar5 = extraout_x11_00;
            plVar6 = extraout_x12_00;
            uVar7 = extraout_x13_00;
          }
        }
        uVar3 = uVar7 == uVar5;
        if (!(bool)uVar3) {
          if (*(long *)(lVar4 + uVar7 * 8) == 0) {
            func_0x00010743bc98();
            plVar6 = extraout_x12_01;
          }
          else {
            func_0x00010743b22c();
            plVar6 = extraout_x10_00;
          }
        }
      }
    }
  }
  func_0x00010743bce4();
  if ((bool)uVar3) {
    in_ZR = 1;
  }
  else {
    in_ZR = unaff_x21 == unaff_x24;
    if (unaff_x24 <= unaff_x21) {
      func_0x00010743bad8();
    }
  }
LAB_10743740c:
  func_0x00010743c054();
  if (extraout_x9_02 == 0) {
    func_0x00010743b4bc();
    if (extraout_x9_03 != 0) {
      func_0x00010743b678();
      lVar4 = extraout_x8_05;
      if ((bool)in_ZR) {
        uVar5 = extraout_x9_04 & extraout_x10_01;
      }
      else {
        uVar5 = extraout_x9_04;
        if (unaff_x24 <= extraout_x9_04) {
          func_0x00010743bccc();
          lVar4 = extraout_x8_06;
          uVar5 = extraout_x9_05;
        }
      }
      *(long **)(lVar4 + uVar5 * 8) = unaff_x20;
    }
  }
  else {
    func_0x00010743b7a8();
  }
  func_0x00010743b4d4();
  func_0x000107434e84();
LAB_10743744c:
  return unaff_x20 + 9;
}



/* Entry: 10743746c; end: 107437507;  */

long FUN_10743746c(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar1;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar2;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 != 0) && (func_0x00010743c198(), extraout_x8 != 0)) {
    func_0x00010743bd5c();
    func_0x00010743ba08();
    if ((bool)in_ZR) {
      unaff_x24 = unaff_x20 & unaff_x23;
    }
    else {
      func_0x00010743c174();
      if ((bool)in_CY) {
        func_0x00010743c0e4();
      }
    }
    func_0x00010743c120();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        func_0x00010743c564();
        if (!(bool)in_ZR) break;
        func_0x00010743b6d4();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar2 & unaff_x23) == 0) {
        uVar1 = extraout_x8_00 & unaff_x23;
      }
      else {
        uVar1 = extraout_x8_00;
        if (uVar2 <= extraout_x8_00) {
          func_0x00010743c0c0();
          uVar1 = extraout_x8_01;
        }
      }
      in_ZR = 1;
    } while (uVar1 == unaff_x24);
  }
  return 0;
}



/* Entry: 107437508; end: 10743751f;  */

void FUN_107437508(long *param_1,long param_2)

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



/* Entry: 107437520; end: 107437547;  */

undefined8 FUN_107437520(undefined8 param_1)

{
  func_0x00010743bbcc(&PTR_FUN_1109afc60);
  return param_1;
}



/* Entry: 107437548; end: 10743755b;  */

void FUN_107437548(void)

{
  FUN_107437520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10743755c; end: 10743757b;  */

void FUN_10743755c(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x00010743b63c();
  func_0x00010743b73c(param_1,unaff_x19 + 8);
  FUN_10743b554(&PTR_FUN_1109afc60);
  return;
}



/* Entry: 10743757c; end: 10743759b;  */

void FUN_10743757c(long param_1,undefined8 param_2)

{
  func_0x00010743b73c(param_2,param_1 + 8);
  FUN_10743b554(&PTR_FUN_1109afc60);
  return;
}



/* Entry: 10743759c; end: 107437627;  */

void FUN_10743759c(void)

{
  undefined1 in_ZR;
  int iVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [88];
  
  iVar1 = (int)auStack_b0;
  func_0x00010743b73c();
  func_0x00010743b2d4();
  func_0x00010743bc40();
  func_0x00010743bc38();
  if (iVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    func_0x000107434d58(auStack_a0);
    func_0x00010743b9a0();
    func_0x000107432a2c(auStack_88,lVar2 + 0x78);
    FUN_10742acc4(unaff_x20 + 8);
    FUN_10742ac74(auStack_a0);
  }
  func_0x00010743b890();
  func_0x00010743b24c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010743bd3c();
  FUN_10742acc4();
  FUN_10742ac74(auStack_a0);
  func_0x00010743b890();
  func_0x00010743b660();
  func_0x00010743b95c();
  func_0x00010743b7c8();
  func_0x00010743b3cc();
  return;
}



/* Entry: 107437628; end: 10743764f;  */

void FUN_107437628(undefined8 param_1)

{
  func_0x00010743b95c();
  func_0x00010743b7c8(param_1,&PTR_DAT_1109afcd0);
  func_0x00010743b3cc();
  return;
}



/* Entry: 107437650; end: 10743765b;  */

undefined ** FUN_107437650(void)

{
  return &PTR_DAT_1109afcd0;
}



/* Entry: 10743765c; end: 1074376db;  */

void FUN_10743765c(void)

{
  func_0x00010743b73c();
  FUN_10743b554(&PTR_FUN_1109afc60);
  return;
}



/* Entry: 1074376dc; end: 1074376ef;  */

void FUN_1074376dc(void)

{
  func_0x0001074376b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074376f0; end: 10743770f;  */

void FUN_1074376f0(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x00010743b63c();
  func_0x00010743b73c(param_1,unaff_x19 + 8);
  FUN_10743b554(&PTR_SUB_1109afcf0);
  return;
}



/* Entry: 107437710; end: 10743772f;  */

void FUN_107437710(long param_1,undefined8 param_2)

{
  func_0x00010743b73c(param_2,param_1 + 8);
  FUN_10743b554(&PTR_SUB_1109afcf0);
  return;
}



/* Entry: 107437730; end: 10743785b;  */

void FUN_107437730(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  long *unaff_x23;
  long lVar3;
  long lStack_110;
  undefined1 auStack_108 [56];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [80];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010743c434();
  lVar3 = param_1;
  func_0x00010743b2e8();
  iVar1 = (int)lVar3;
  func_0x00010743b8a0();
  func_0x00010743c1dc();
  if (iVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    unaff_x23 = &lStack_110;
    lStack_110 = lVar3;
    func_0x00010743ba50(auStack_108);
    func_0x000107432aac(&uStack_d0,lVar3 + 0x260);
    puVar2 = &uStack_b8;
    func_0x0001074378d8(puVar2,&lStack_110);
    uStack_60 = 0;
    func_0x00010743ba58();
    *puVar2 = &PTR_SUB_1109afd60;
    puVar2[2] = uStack_c8;
    puVar2[1] = uStack_d0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    puVar2[4] = uStack_b8;
    puVar2[3] = uStack_c0;
    puVar2 = puVar2 + 5;
    func_0x000104c2fe00(puVar2,auStack_b0);
    func_0x00010743bf9c();
    func_0x00010743b728();
    func_0x00010743bb28();
    if (puVar2 != (undefined8 *)0x0) {
      func_0x00010743b2a4();
      func_0x00010743c12c();
      if (puVar2 != (undefined8 *)0x0) {
        func_0x00010743b2a4();
      }
    }
    func_0x00010743bb20();
    func_0x0001074378b4(&uStack_d0);
    func_0x000104c2f714();
  }
  func_0x00010743b7fc();
  func_0x00010743b264(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010743bb20();
  func_0x0001074378b4(&uStack_d0);
  func_0x000104c2f714(unaff_x23 + 1);
  func_0x00010743b7fc();
  func_0x00010743b660();
  func_0x00010743b95c();
  func_0x00010743b7c8();
  func_0x00010743b3cc();
  return;
}



/* Entry: 10743785c; end: 107437883;  */

void FUN_10743785c(undefined8 param_1)

{
  func_0x00010743b95c();
  func_0x00010743b7c8(param_1,&PTR_DAT_1109afe50);
  func_0x00010743b3cc();
  return;
}



/* Entry: 107437884; end: 10743788f;  */

undefined ** FUN_107437884(void)

{
  return &PTR_DAT_1109afe50;
}



/* Entry: 107437890; end: 10743792b;  */

void FUN_107437890(void)

{
  func_0x00010743b73c();
  FUN_10743b554(&PTR_SUB_1109afcf0);
  return;
}



/* Entry: 10743792c; end: 10743793f;  */

void FUN_10743792c(void)

{
  func_0x000107437900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107437940; end: 107437963;  */

undefined8 FUN_107437940(void)

{
  undefined8 unaff_x20;
  
  func_0x00010743ba58();
  func_0x00010743b73c();
  func_0x00010743b340(&PTR_SUB_1109afd60);
  func_0x0001074378d8();
  return unaff_x20;
}



/* Entry: 107437964; end: 107437987;  */

void FUN_107437964(long param_1,undefined8 param_2)

{
  func_0x00010743b73c(param_2,param_1 + 8);
  func_0x00010743b340(&PTR_SUB_1109afd60);
  func_0x0001074378d8();
  return;
}



/* Entry: 107437988; end: 107437abf;  */

void FUN_107437988(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long unaff_x20;
  undefined1 auStack_388 [184];
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [128];
  undefined1 auStack_248 [56];
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [216];
  undefined1 *puStack_120;
  undefined8 uStack_48;
  
  func_0x00010743be78();
  func_0x00010743b2e8();
  iVar1 = (int)auStack_388;
  uStack_48 = extraout_x8;
  func_0x00010743bc40();
  func_0x00010743bc38();
  if (iVar1 != 0) {
    uStack_2d0 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x00010743bf4c(auStack_2c8);
    func_0x000104c2fe00(auStack_248,unaff_x20 + 0x28);
    func_0x00010743bbe8();
    puVar2 = auStack_1f8;
    FUN_107437b6c(puVar2,&uStack_2d0);
    puStack_120 = (undefined1 *)0x0;
    func_0x00010743ba68();
    func_0x00010743b698(auStack_210);
    func_0x00010743b864();
    func_0x00010743b8e8();
    puStack_120 = puVar2;
    func_0x00010743b8d8();
    func_0x00010743b42c();
    func_0x00010743c3f0();
    func_0x00010743bcac();
    func_0x00010743bcb8();
    func_0x00010743bc10();
    func_0x00010743bca4();
    FUN_107437b2c(auStack_210);
    func_0x000107437b4c(&uStack_2d0);
  }
  func_0x00010743b7fc();
  func_0x00010743b264(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010743bcb8();
  func_0x00010743bc10();
  func_0x00010743bca4();
  FUN_107437b2c(auStack_210);
  func_0x000107437b4c(&uStack_2d0);
  do {
    func_0x00010743b7fc();
    func_0x00010743b660();
  } while( true );
}



/* Entry: 107437ac0; end: 107437ae7;  */

void FUN_107437ac0(undefined8 param_1)

{
  func_0x00010743b95c();
  func_0x00010743b7c8(param_1,&PTR_DAT_1109afe40);
  func_0x00010743b3cc();
  return;
}



/* Entry: 107437ae8; end: 107437af3;  */

undefined ** FUN_107437ae8(void)

{
  return &PTR_DAT_1109afe40;
}



/* Entry: 107437af4; end: 107437b2b;  */

void FUN_107437af4(void)

{
  func_0x00010743b73c();
  func_0x00010743b340(&PTR_SUB_1109afd60);
  func_0x0001074378d8();
  return;
}



/* Entry: 107437b2c; end: 107437b6b;  */

long FUN_107437b2c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010743bb14();
  func_0x000107437b4c();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 107437b6c; end: 107437b8f;  */

void FUN_107437b6c(void)

{
  func_0x00010743b320();
  func_0x00010743b8bc();
  return;
}



/* Entry: 107437b90; end: 107437bbb;  */

undefined8 * FUN_107437b90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109afdd0;
  FUN_107437b2c(param_1 + 1);
  return param_1;
}



/* Entry: 107437bbc; end: 107437bcf;  */

void FUN_107437bbc(void)

{
  FUN_107437b90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107437bd0; end: 107437c03;  */

undefined8 FUN_107437bd0(undefined8 param_1)

{
  func_0x00010743b8f4();
  FUN_107437df8();
  return param_1;
}



/* Entry: 107437c04; end: 107437c27;  */

void FUN_107437c04(long param_1,undefined8 param_2)

{
  func_0x00010743b804(param_2,param_1 + 8);
  func_0x00010743b340(&PTR_FUN_1109afdd0);
  func_0x00010743c4c0();
  FUN_107437b6c();
  return;
}



/* Entry: 107437c28; end: 107437dc3;  */

void FUN_107437c28(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long lVar3;
  undefined1 *unaff_x21;
  undefined8 uVar4;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [24];
  long alStack_158 [2];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [80];
  undefined8 auStack_f0 [9];
  undefined8 *puStack_a8;
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  
  iVar1 = (int)auStack_180;
  func_0x00010743b2e8();
  uStack_58 = extraout_x8;
  func_0x00010743be24();
  func_0x00010743be64();
  if (iVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010724ef84(auStack_170,param_1 + 0xa8);
    (**(code **)(**(long **)(lVar3 + 0x20) + 0x18))
              (auStack_148,*(long **)(lVar3 + 0x20),param_1 + 0x28,auStack_170);
    func_0x00010724bb70(alStack_158,lVar3 + 0x198);
    if (alStack_158[0] != 0) {
      uVar4 = *(undefined8 *)(lVar3 + 400);
      unaff_x21 = auStack_148;
      puVar2 = auStack_f0;
      FUN_10743af9c(puVar2,auStack_140);
      func_0x00010743bb3c();
      FUN_10743af9c(auStack_a0,auStack_f0);
      *puVar2 = &PTR_DAT_1109b0070;
      puVar2[1] = uVar4;
      puVar2[2] = FUN_107432834;
      puVar2[3] = 0;
      FUN_10743af9c(puVar2 + 5,auStack_a0);
      FUN_10742acc4(auStack_a0);
      puStack_a8 = puVar2;
      FUN_10742acc4(auStack_f0);
      FUN_1073ae140(alStack_158[0],&puStack_a8);
      puVar2 = puStack_a8;
      puStack_a8 = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        func_0x00010743b2a4();
      }
    }
    func_0x00010724bcd8(alStack_158);
    FUN_10742acc4(auStack_140);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  func_0x00010743b890();
  func_0x00010743b264(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puStack_a8;
  puStack_a8 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010743b2a4();
  }
  func_0x00010724bcd8(alStack_158);
  FUN_10742acc4(unaff_x21 + 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_170);
  func_0x00010743b890();
  func_0x00010743b660();
  func_0x00010743b95c();
  func_0x00010743b7c8();
  func_0x00010743b3cc();
  return;
}



/* Entry: 107437dc4; end: 107437deb;  */

void FUN_107437dc4(undefined8 param_1)

{
  func_0x00010743b95c();
  func_0x00010743b7c8(param_1,&PTR_DAT_1109afe30);
  func_0x00010743b3cc();
  return;
}



/* Entry: 107437dec; end: 107437df7;  */

undefined ** FUN_107437dec(void)

{
  return &PTR_DAT_1109afe30;
}



/* Entry: 107437df8; end: 107437e33;  */

void FUN_107437df8(void)

{
  func_0x00010743b804();
  func_0x00010743b340(&PTR_FUN_1109afdd0);
  func_0x00010743c4c0();
  FUN_107437b6c();
  return;
}



/* Entry: 107437e34; end: 107437ed3;  */

long FUN_107437e34(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  ulong uVar1;
  ulong extraout_x8_00;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar2;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 != 0) && (func_0x00010743c198(), extraout_x8 != 0)) {
    func_0x00010743bd5c();
    func_0x00010743ba08();
    if ((bool)in_ZR) {
      unaff_x24 = unaff_x20 & unaff_x23;
    }
    else {
      func_0x00010743c174();
      if ((bool)in_CY) {
        func_0x00010743c0e4();
      }
    }
    func_0x00010743c120();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        uVar1 = unaff_x21[1];
        if (unaff_x20 != uVar1) break;
        func_0x00010743b6d4();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar2 & unaff_x23) == 0) {
        uVar1 = uVar1 & unaff_x23;
      }
      else if (uVar2 <= uVar1) {
        func_0x00010743c0c0();
        uVar1 = extraout_x8_00;
      }
    } while (uVar1 == unaff_x24);
  }
  return 0;
}



/* Entry: 107437ed4; end: 107437f07;  */

void FUN_107437ed4(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x00010743b62c();
  if (unaff_x20 != 0) {
    func_0x00010743bd30();
    if ((bool)in_ZR) {
      FUN_107433274(unaff_x20 + 0x10);
    }
    func_0x00010743b7f4();
  }
  return;
}



/* Entry: 107437f08; end: 107437f1f;  */

void FUN_107437f08(long *param_1,long param_2)

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



/* Entry: 107437f20; end: 107437ff7;  */

void FUN_107437f20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_390 [48];
  undefined1 auStack_360 [88];
  undefined1 auStack_308 [56];
  undefined1 *puStack_2d0;
  long lStack_2c8;
  undefined1 auStack_2a0 [40];
  undefined1 auStack_278 [152];
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [112];
  undefined8 uStack_168;
  undefined1 auStack_120 [40];
  undefined1 auStack_f8 [104];
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  
  func_0x00010743be78();
  func_0x00010743b2e8();
  uStack_48 = extraout_x8_00;
  FUN_107438188(auStack_90);
  func_0x000107432c64(auStack_f8,param_3);
  uVar2 = *(char *)(unaff_x20 + 0x60) == '\0';
  lVar1 = unaff_x20 + 0x48;
  if ((bool)uVar2) {
    lVar1 = unaff_x21 + 8;
  }
  func_0x00010743bc60(lVar1);
  puVar5 = auStack_f8;
  FUN_10743820c(extraout_x8,auStack_90,puVar5,auStack_120);
  FUN_1074335c8(auStack_f8);
  FUN_107432d98();
  func_0x00010743b264(uStack_48);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  FUN_1074335c8(auStack_f8);
  FUN_107432d98(auStack_90);
  func_0x00010743b660();
  func_0x00010743be78();
  func_0x00010743b2e8();
  uStack_168 = extraout_x8_02;
  FUN_1073243b8(auStack_1d8,unaff_x20 + 8);
  func_0x000107432e2c(auStack_278,puVar5);
  uVar2 = *(char *)(unaff_x20 + 0x90) == '\0';
  lVar1 = unaff_x20 + 0x78;
  if ((bool)uVar2) {
    lVar1 = unaff_x21 + 0x10;
  }
  func_0x00010743bc60(lVar1);
  puVar4 = auStack_1e0;
  puVar6 = auStack_278;
  FUN_1074382a8(extraout_x8_01,puVar4,puVar6,auStack_2a0);
  FUN_1074338c4(auStack_278);
  FUN_10732442c();
  func_0x00010743b264(uStack_168);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  FUN_1074338c4(auStack_278);
  puVar3 = auStack_1d8;
  FUN_10732442c();
  func_0x00010743b660();
  puStack_2d0 = puVar5;
  lStack_2c8 = unaff_x21 + 0x10;
  func_0x00010727d614(auStack_308,puVar3);
  func_0x000107432f04(auStack_360,puVar6);
  puVar5 = puVar3 + 0x38;
  if (puVar3[0x50] == '\0') {
    puVar5 = puVar4 + 8;
  }
  func_0x00010743bc60(puVar5);
  FUN_107438340(extraout_x8_03,auStack_308,auStack_360,auStack_390);
  func_0x000107410c2c(auStack_360);
  func_0x000107266a30(auStack_308);
  return;
}



/* Entry: 107437ff8; end: 1074380d3;  */

void FUN_107437ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_270 [48];
  undefined1 auStack_240 [88];
  undefined1 auStack_1e8 [56];
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined1 auStack_180 [40];
  undefined1 auStack_158 [152];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [112];
  undefined8 uStack_48;
  
  func_0x00010743be78();
  func_0x00010743b2e8();
  uStack_48 = extraout_x8_00;
  FUN_1073243b8(auStack_b8,unaff_x20 + 8);
  func_0x000107432e2c(auStack_158,param_3);
  uVar2 = *(char *)(unaff_x20 + 0x90) == '\0';
  lVar1 = unaff_x20 + 0x78;
  if ((bool)uVar2) {
    lVar1 = unaff_x21 + 8;
  }
  func_0x00010743bc60(lVar1);
  puVar4 = auStack_c0;
  puVar5 = auStack_158;
  FUN_1074382a8(extraout_x8,puVar4,puVar5,auStack_180);
  FUN_1074338c4(auStack_158);
  FUN_10732442c();
  func_0x00010743b264(uStack_48);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  FUN_1074338c4(auStack_158);
  puVar3 = auStack_b8;
  FUN_10732442c();
  func_0x00010743b660();
  uStack_1b0 = param_3;
  lStack_1a8 = unaff_x21 + 8;
  func_0x00010727d614(auStack_1e8,puVar3);
  func_0x000107432f04(auStack_240,puVar5);
  puVar5 = puVar3 + 0x38;
  if (puVar3[0x50] == '\0') {
    puVar5 = puVar4 + 8;
  }
  func_0x00010743bc60(puVar5);
  FUN_107438340(extraout_x8_01,auStack_1e8,auStack_240,auStack_270);
  func_0x000107410c2c(auStack_240);
  func_0x000107266a30(auStack_1e8);
  return;
}



/* Entry: 1074380d4; end: 107438187;  */

void FUN_1074380d4(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_f0 [48];
  undefined1 auStack_c0 [88];
  undefined1 auStack_68 [56];
  
  func_0x00010727d614(auStack_68,param_2);
  func_0x000107432f04(auStack_c0,param_4);
  lVar1 = param_2 + 0x38;
  if (*(char *)(param_2 + 0x50) == '\0') {
    lVar1 = param_3 + 8;
  }
  func_0x00010743bc60(lVar1);
  FUN_107438340(param_1,auStack_68,auStack_c0,auStack_f0);
  func_0x000107410c2c(auStack_c0);
  func_0x000107266a30(auStack_68);
  return;
}



/* Entry: 107438188; end: 1074381b7;  */

void FUN_107438188(long param_1)

{
  undefined4 extraout_w8;
  
  FUN_10743b574();
  *(undefined4 *)(param_1 + 0x40) = extraout_w8;
  FUN_1074381b8();
  return;
}



/* Entry: 1074381b8; end: 1074381f7;  */

void FUN_1074381b8(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x00010743b804();
  FUN_107432d98();
  func_0x00010743c0b4();
  if (!(bool)in_ZR) {
    func_0x00010743b310(&PTR_FUN_1109afe60);
    *(undefined4 *)(unaff_x19 + 0x40) = unaff_w21;
  }
  return;
}



/* Entry: 1074381f8; end: 10743820b;  */

void FUN_1074381f8(void)

{
  return;
}



/* Entry: 10743820c; end: 107438263;  */

void FUN_10743820c(long param_1)

{
  long unaff_x21;
  undefined1 auStack_40 [16];
  
  func_0x00010743b384();
  FUN_107432d30(param_1 + 0x20);
  if (((*(byte *)(unaff_x21 + 8) & 1) != 0) || ((*(byte *)(unaff_x21 + 0x18) & 1) != 0)) {
    FUN_107438264(auStack_40);
    func_0x00010743bde0();
    FUN_1074334f8();
    FUN_1074335f0(auStack_40);
  }
  return;
}



/* Entry: 107438264; end: 10743827b;  */

void FUN_107438264(void)

{
  FUN_10743827c();
  func_0x00010743bdc8();
  return;
}



/* Entry: 10743827c; end: 1074382a7;  */

undefined8 FUN_10743827c(undefined8 param_1,undefined8 param_2)

{
  FUN_107432d04(param_1,param_2);
  return param_1;
}



/* Entry: 1074382a8; end: 1074382fb;  */

void FUN_1074382a8(void)

{
  long unaff_x21;
  undefined1 auStack_40 [16];
  
  func_0x00010743b384();
  func_0x00010743c278();
  if (((*(byte *)(unaff_x21 + 8) & 1) != 0) || ((*(byte *)(unaff_x21 + 0x18) & 1) != 0)) {
    FUN_1074382fc(auStack_40);
    func_0x00010743bde0();
    FUN_1074337f4();
    FUN_1074338ec(auStack_40);
  }
  return;
}



/* Entry: 1074382fc; end: 107438313;  */

void FUN_1074382fc(void)

{
  FUN_107438314();
  func_0x00010743bdc8();
  return;
}



/* Entry: 107438314; end: 10743833f;  */

undefined8 FUN_107438314(undefined8 param_1,undefined8 param_2)

{
  FUN_107432ed8(param_1,param_2);
  return param_1;
}



/* Entry: 107438340; end: 107438397;  */

void FUN_107438340(long param_1)

{
  long unaff_x21;
  undefined1 auStack_40 [16];
  
  func_0x00010743b384();
  func_0x00010727d9cc(param_1 + 0x20);
  if (((*(byte *)(unaff_x21 + 8) & 1) != 0) || ((*(byte *)(unaff_x21 + 0x18) & 1) != 0)) {
    FUN_107438398(auStack_40);
    func_0x00010743bde0();
    FUN_10743390c();
    FUN_107410c54(auStack_40);
  }
  return;
}



/* Entry: 107438398; end: 1074383af;  */

void FUN_107438398(void)

{
  FUN_1074383b0();
  func_0x00010743bdc8();
  return;
}



/* Entry: 1074383b0; end: 1074383db;  */

undefined8 FUN_1074383b0(undefined8 param_1,undefined8 param_2)

{
  FUN_107432fa4(param_1,param_2);
  return param_1;
}



/* Entry: 1074383dc; end: 10743840b;  */

void FUN_1074383dc(long param_1)

{
  undefined4 extraout_w8;
  
  FUN_10743b574();
  *(undefined4 *)(param_1 + 0x38) = extraout_w8;
  FUN_10743840c();
  return;
}



/* Entry: 10743840c; end: 10743844b;  */

void FUN_10743840c(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x00010743b804();
  FUN_1073e64d8();
  func_0x00010743c41c();
  if (!(bool)in_ZR) {
    func_0x00010743b310(&PTR_FUN_1109afe78);
    *(undefined4 *)(unaff_x19 + 0x38) = unaff_w21;
  }
  return;
}



/* Entry: 10743844c; end: 10743845f;  */

void FUN_10743844c(void)

{
  return;
}



/* Entry: 107438460; end: 107438483;  */

void FUN_107438460(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x00010727d6bc();
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 107438484; end: 1074384fb;  */

long FUN_107438484(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107432c64();
  func_0x000107432e2c(lVar1 + 0x68,param_3);
  func_0x000107432f04(param_1 + 0x100,param_4);
  func_0x000107432f04(param_1 + 0x158,param_5);
  func_0x000107432e2c(param_1 + 0x1b0,param_6);
  func_0x000107432fcc(param_1 + 0x248,param_7);
  return param_1;
}



/* Entry: 1074384fc; end: 107438623;  */

undefined1 * FUN_1074384fc(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int iVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x25;
  undefined1 auStack_e8 [72];
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  
  func_0x00010743b7d0();
  func_0x00010743b2e8();
  uStack_58 = extraout_x8;
  func_0x00010743c52c(auStack_a0);
  FUN_107438660();
  if ((*(byte *)(unaff_x20 + 1) & 1) != 0) {
    func_0x00010743c4b4();
    if (in_NG != in_OV) {
      iVar1 = (int)unaff_x20 + 0x20;
      FUN_107438624();
      if (iVar1 == 0) {
        func_0x00010743c4f8();
        if (in_NG == in_OV) {
          func_0x00010743c4ec();
          func_0x00010743bae4(auStack_e8);
          FUN_1074384fc();
          func_0x00010743b538((float)unaff_x25,0x4e6e6b28);
          func_0x00010743c4cc();
          FUN_1073b426c();
          FUN_107438644(auStack_e8,auStack_a0);
          FUN_1073debc4(auStack_e8);
        }
        else {
          func_0x00010743b968(*unaff_x20);
          FUN_1074384fc();
        }
        goto LAB_107438564;
      }
    }
    func_0x00010743c474();
    FUN_1074334f8();
    FUN_1074335f0(auStack_e8);
  }
  func_0x00010743beac();
LAB_107438564:
  puVar2 = auStack_a0;
  FUN_1073debc4(puVar2);
  func_0x00010743b264(uStack_58);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = auStack_a0;
  FUN_1073debc4();
  func_0x00010743b660();
  if (*(int *)(puVar2 + 0x40) != 0) {
    return (undefined1 *)(ulong)((puVar2[0x10] & 2) == 0 && *(int *)(puVar2 + 0x40) != 1);
  }
  return (undefined1 *)0x0;
}



/* Entry: 107438624; end: 107438643;  */

bool FUN_107438624(long param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    return (*(byte *)(param_1 + 0x10) & 2) == 0 && *(int *)(param_1 + 0x40) != 1;
  }
  return false;
}



/* Entry: 107438644; end: 10743865f;  */

void FUN_107438644(void)

{
  func_0x00010743b7b8();
  FUN_107438a2c();
  return;
}



/* Entry: 107438660; end: 107438697;  */

void FUN_107438660(void)

{
  undefined8 extraout_x8;
  
  func_0x00010743b73c();
  FUN_107438698();
  func_0x00010743bdd4(extraout_x8);
  func_0x00010743c338();
  return;
}



/* Entry: 107438698; end: 1074386e3;  */

void FUN_107438698(long param_1)

{
  if (*(int *)(param_1 + 0x40) != -1) {
    return;
  }
  func_0x00010563ab98();
  func_0x00010743c338();
  return;
}



/* Entry: 1074386e4; end: 1074386f7;  */

void FUN_1074386e4(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5)

{
  undefined4 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x9;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 auStack_3a4 [20];
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined1 *puStack_380;
  undefined8 **ppuStack_370;
  code *pcStack_368;
  undefined1 auStack_360 [56];
  undefined1 uStack_328;
  undefined8 uStack_320;
  undefined1 auStack_318 [232];
  undefined8 uStack_230;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_148;
  undefined1 auStack_140 [80];
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_20;
  undefined8 uStack_18;
  
  lVar3 = *param_5;
  puVar7 = &uStack_60;
  func_0x00010743b2b0();
  uStack_58 = *(undefined8 *)(lVar3 + 0x10);
  uStack_60 = *(undefined8 *)(lVar3 + 8);
  uStack_20 = 0;
  uStack_18 = extraout_x9;
  FUN_107433134(extraout_x8);
  FUN_1073debc4();
  func_0x00010743b264(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_c0;
  puVar4 = &uStack_c0;
  pcStack_68 = FUN_107438748;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010743b2e8(extraout_x8_00);
  uStack_b8 = puVar7[1];
  uVar10 = *puVar7;
  uStack_80 = 0;
  uStack_c0 = uVar10;
  uStack_78 = extraout_x8_01;
  FUN_107433134();
  uVar9 = (undefined4)uVar10;
  FUN_1073debc4();
  func_0x00010743b264(uStack_78);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  plVar5 = (long *)*puVar4;
  pcStack_c8 = FUN_1074387a0;
  puVar6 = (undefined1 *)puVar8;
  ppuStack_d0 = &puStack_70;
  func_0x00010743b2d4();
  uVar2 = ((puVar6[0x10] ^ 0xff) & 6) == 0;
  if ((bool)uVar2) {
    uVar9 = *(undefined4 *)*plVar5;
    func_0x0001077512dc(auStack_318);
    uStack_230 = *(undefined8 *)(*plVar5 + 8);
    auStack_360[0] = 0;
    uStack_328 = 0;
    uStack_320 = *(undefined8 *)(*plVar5 + 0x40);
    func_0x00010743bfac();
    param_4 = 0;
    FUN_1074388a0(puVar8);
    uStack_148 = 0;
    uStack_188 = uVar9;
    uStack_184 = param_2;
    uStack_180 = param_3;
    uStack_17c = param_4;
    func_0x00010743beac();
    FUN_1073debc4(&uStack_188);
    func_0x00010724b3d8(auStack_360);
    func_0x000107267da8(auStack_318);
  }
  else {
    FUN_1074388f0(auStack_140,puVar8);
    func_0x00010743beac();
    FUN_1073debc4(auStack_140);
  }
  func_0x00010743b24c();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010743ba90();
  func_0x00010724b3d8();
  puVar6 = auStack_318;
  func_0x000107267da8();
  func_0x00010743b660();
  pcStack_368 = FUN_1074388a0;
  uStack_390 = uVar9;
  uStack_38c = param_2;
  uStack_388 = param_3;
  uStack_384 = param_4;
  puStack_380 = (undefined1 *)puVar8;
  ppuStack_370 = &ppuStack_d0;
  FUN_107438924(auStack_3a4);
  puVar1 = (undefined4 *)(puVar6 + 0x28);
  if (puVar6[0x38] == '\0') {
    puVar1 = &uStack_390;
  }
  FUN_1074389b0(auStack_3a4,puVar1);
  return;
}



/* Entry: 1074386f8; end: 107438747;  */

void FUN_1074386f8(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  undefined4 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x9;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 auStack_3a4 [20];
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined1 *puStack_380;
  undefined8 **ppuStack_370;
  code *pcStack_368;
  undefined1 auStack_360 [56];
  undefined1 uStack_328;
  undefined8 uStack_320;
  undefined1 auStack_318 [232];
  undefined8 uStack_230;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_148;
  undefined1 auStack_140 [80];
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_20;
  undefined8 uStack_18;
  
  puVar6 = &uStack_60;
  func_0x00010743b2b0();
  uStack_58 = *(undefined8 *)(param_5 + 0x10);
  uStack_60 = *(undefined8 *)(param_5 + 8);
  uStack_20 = 0;
  uStack_18 = extraout_x9;
  FUN_107433134(extraout_x8);
  FUN_1073debc4();
  func_0x00010743b264(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_c0;
  puVar3 = &uStack_c0;
  pcStack_68 = FUN_107438748;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010743b2e8(extraout_x8_00);
  uStack_b8 = puVar6[1];
  uVar9 = *puVar6;
  uStack_80 = 0;
  uStack_c0 = uVar9;
  uStack_78 = extraout_x8_01;
  FUN_107433134();
  uVar8 = (undefined4)uVar9;
  FUN_1073debc4();
  func_0x00010743b264(uStack_78);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  plVar4 = (long *)*puVar3;
  pcStack_c8 = FUN_1074387a0;
  puVar5 = (undefined1 *)puVar7;
  ppuStack_d0 = &puStack_70;
  func_0x00010743b2d4();
  uVar2 = ((puVar5[0x10] ^ 0xff) & 6) == 0;
  if ((bool)uVar2) {
    uVar8 = *(undefined4 *)*plVar4;
    func_0x0001077512dc(auStack_318);
    uStack_230 = *(undefined8 *)(*plVar4 + 8);
    auStack_360[0] = 0;
    uStack_328 = 0;
    uStack_320 = *(undefined8 *)(*plVar4 + 0x40);
    func_0x00010743bfac();
    param_4 = 0;
    FUN_1074388a0(puVar7);
    uStack_148 = 0;
    uStack_188 = uVar8;
    uStack_184 = param_2;
    uStack_180 = param_3;
    uStack_17c = param_4;
    func_0x00010743beac();
    FUN_1073debc4(&uStack_188);
    func_0x00010724b3d8(auStack_360);
    func_0x000107267da8(auStack_318);
  }
  else {
    FUN_1074388f0(auStack_140,puVar7);
    func_0x00010743beac();
    FUN_1073debc4(auStack_140);
  }
  func_0x00010743b24c();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010743ba90();
  func_0x00010724b3d8();
  puVar5 = auStack_318;
  func_0x000107267da8();
  func_0x00010743b660();
  pcStack_368 = FUN_1074388a0;
  uStack_390 = uVar8;
  uStack_38c = param_2;
  uStack_388 = param_3;
  uStack_384 = param_4;
  puStack_380 = (undefined1 *)puVar7;
  ppuStack_370 = &ppuStack_d0;
  FUN_107438924(auStack_3a4);
  puVar1 = (undefined4 *)(puVar5 + 0x28);
  if (puVar5[0x38] == '\0') {
    puVar1 = &uStack_390;
  }
  FUN_1074389b0(auStack_3a4,puVar1);
  return;
}



/* Entry: 107438748; end: 10743874f;  */

void FUN_107438748(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined4 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 auStack_344 [20];
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined1 *puStack_320;
  undefined1 **ppuStack_310;
  code *pcStack_308;
  undefined1 auStack_300 [56];
  undefined1 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 auStack_2b8 [232];
  undefined8 uStack_1d0;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_e8;
  undefined1 auStack_e0 [80];
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_20;
  undefined8 uStack_18;
  
  puVar6 = &uStack_60;
  puVar3 = &uStack_60;
  func_0x00010743b2e8(param_1);
  uStack_58 = param_7[1];
  uVar8 = *param_7;
  uStack_20 = 0;
  uStack_60 = uVar8;
  uStack_18 = extraout_x8;
  FUN_107433134();
  uVar7 = (undefined4)uVar8;
  FUN_1073debc4();
  func_0x00010743b264(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  plVar4 = (long *)*puVar3;
  pcStack_68 = FUN_1074387a0;
  puVar5 = (undefined1 *)puVar6;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010743b2d4();
  uVar2 = ((puVar5[0x10] ^ 0xff) & 6) == 0;
  if ((bool)uVar2) {
    uVar7 = *(undefined4 *)*plVar4;
    func_0x0001077512dc(auStack_2b8);
    uStack_1d0 = *(undefined8 *)(*plVar4 + 8);
    auStack_300[0] = 0;
    uStack_2c8 = 0;
    uStack_2c0 = *(undefined8 *)(*plVar4 + 0x40);
    func_0x00010743bfac();
    param_5 = 0;
    FUN_1074388a0(puVar6);
    uStack_e8 = 0;
    uStack_128 = uVar7;
    uStack_124 = param_3;
    uStack_120 = param_4;
    uStack_11c = param_5;
    func_0x00010743beac();
    FUN_1073debc4(&uStack_128);
    func_0x00010724b3d8(auStack_300);
    func_0x000107267da8(auStack_2b8);
  }
  else {
    FUN_1074388f0(auStack_e0,puVar6);
    func_0x00010743beac();
    FUN_1073debc4(auStack_e0);
  }
  func_0x00010743b24c();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010743ba90();
  func_0x00010724b3d8();
  puVar5 = auStack_2b8;
  func_0x000107267da8();
  func_0x00010743b660();
  pcStack_308 = FUN_1074388a0;
  uStack_330 = uVar7;
  uStack_32c = param_3;
  uStack_328 = param_4;
  uStack_324 = param_5;
  puStack_320 = (undefined1 *)puVar6;
  ppuStack_310 = &puStack_70;
  FUN_107438924(auStack_344);
  puVar1 = (undefined4 *)(puVar5 + 0x28);
  if (puVar5[0x38] == '\0') {
    puVar1 = &uStack_330;
  }
  FUN_1074389b0(auStack_344,puVar1);
  return;
}



/* Entry: 107438750; end: 10743879f;  */

void FUN_107438750(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined4 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 auStack_344 [20];
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined1 *puStack_320;
  undefined1 **ppuStack_310;
  code *pcStack_308;
  undefined1 auStack_300 [56];
  undefined1 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 auStack_2b8 [232];
  undefined8 uStack_1d0;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_e8;
  undefined1 auStack_e0 [80];
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_20;
  undefined8 uStack_18;
  
  puVar6 = &uStack_60;
  puVar3 = &uStack_60;
  func_0x00010743b2e8(param_1);
  uStack_58 = param_7[1];
  uVar8 = *param_7;
  uStack_20 = 0;
  uStack_60 = uVar8;
  uStack_18 = extraout_x8;
  FUN_107433134();
  uVar7 = (undefined4)uVar8;
  FUN_1073debc4();
  func_0x00010743b264(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  plVar4 = (long *)*puVar3;
  pcStack_68 = FUN_1074387a0;
  puVar5 = (undefined1 *)puVar6;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010743b2d4();
  uVar2 = ((puVar5[0x10] ^ 0xff) & 6) == 0;
  if ((bool)uVar2) {
    uVar7 = *(undefined4 *)*plVar4;
    func_0x0001077512dc(auStack_2b8);
    uStack_1d0 = *(undefined8 *)(*plVar4 + 8);
    auStack_300[0] = 0;
    uStack_2c8 = 0;
    uStack_2c0 = *(undefined8 *)(*plVar4 + 0x40);
    func_0x00010743bfac();
    param_5 = 0;
    FUN_1074388a0(puVar6);
    uStack_e8 = 0;
    uStack_128 = uVar7;
    uStack_124 = param_3;
    uStack_120 = param_4;
    uStack_11c = param_5;
    func_0x00010743beac();
    FUN_1073debc4(&uStack_128);
    func_0x00010724b3d8(auStack_300);
    func_0x000107267da8(auStack_2b8);
  }
  else {
    FUN_1074388f0(auStack_e0,puVar6);
    func_0x00010743beac();
    FUN_1073debc4(auStack_e0);
  }
  func_0x00010743b24c();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010743ba90();
  func_0x00010724b3d8();
  puVar5 = auStack_2b8;
  func_0x000107267da8();
  func_0x00010743b660();
  pcStack_308 = FUN_1074388a0;
  uStack_330 = uVar7;
  uStack_32c = param_3;
  uStack_328 = param_4;
  uStack_324 = param_5;
  puStack_320 = (undefined1 *)puVar6;
  ppuStack_310 = &puStack_70;
  FUN_107438924(auStack_344);
  puVar1 = (undefined4 *)(puVar5 + 0x28);
  if (puVar5[0x38] == '\0') {
    puVar1 = &uStack_330;
  }
  FUN_1074389b0(auStack_344,puVar1);
  return;
}



/* Entry: 1074387a0; end: 1074387a7;  */

void FUN_1074387a0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6,long param_7)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_2e4 [20];
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined1 *puStack_2b0;
  code *pcStack_2a8;
  undefined1 auStack_2a0 [56];
  undefined1 uStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [232];
  undefined8 uStack_170;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_88;
  undefined1 auStack_80 [80];
  
  plVar3 = (long *)*param_6;
  lVar5 = param_7;
  func_0x00010743b2d4();
  uVar2 = ((*(byte *)(lVar5 + 0x10) ^ 0xff) & 6) == 0;
  if ((bool)uVar2) {
    param_2 = *(undefined4 *)*plVar3;
    func_0x0001077512dc(auStack_258);
    uStack_170 = *(undefined8 *)(*plVar3 + 8);
    auStack_2a0[0] = 0;
    uStack_268 = 0;
    uStack_260 = *(undefined8 *)(*plVar3 + 0x40);
    func_0x00010743bfac();
    param_5 = 0;
    FUN_1074388a0(param_7);
    uStack_88 = 0;
    uStack_c8 = param_2;
    uStack_c4 = param_3;
    uStack_c0 = param_4;
    uStack_bc = param_5;
    func_0x00010743beac();
    FUN_1073debc4(&uStack_c8);
    func_0x00010724b3d8(auStack_2a0);
    func_0x000107267da8(auStack_258);
  }
  else {
    FUN_1074388f0(auStack_80,param_7);
    func_0x00010743beac();
    FUN_1073debc4(auStack_80);
  }
  func_0x00010743b24c();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010743ba90();
  func_0x00010724b3d8();
  puVar4 = auStack_258;
  func_0x000107267da8();
  func_0x00010743b660();
  pcStack_2a8 = FUN_1074388a0;
  uStack_2d0 = param_2;
  uStack_2cc = param_3;
  uStack_2c8 = param_4;
  uStack_2c4 = param_5;
  lStack_2c0 = param_7;
  uStack_2b8 = param_1;
  puStack_2b0 = &stack0xfffffffffffffff0;
  FUN_107438924(auStack_2e4);
  puVar1 = (undefined4 *)(puVar4 + 0x28);
  if (puVar4[0x38] == '\0') {
    puVar1 = &uStack_2d0;
  }
  FUN_1074389b0(auStack_2e4,puVar1);
  return;
}



/* Entry: 1074387a8; end: 10743889f;  */

void FUN_1074387a8(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,long *param_6,long param_7)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_2e4 [20];
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined1 *puStack_2b0;
  code *pcStack_2a8;
  undefined1 auStack_2a0 [56];
  undefined1 uStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [232];
  undefined8 uStack_170;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_88;
  undefined1 auStack_80 [80];
  
  lVar4 = param_7;
  func_0x00010743b2d4();
  uVar2 = ((*(byte *)(lVar4 + 0x10) ^ 0xff) & 6) == 0;
  if ((bool)uVar2) {
    param_2 = *(undefined4 *)*param_6;
    func_0x0001077512dc(auStack_258);
    uStack_170 = *(undefined8 *)(*param_6 + 8);
    auStack_2a0[0] = 0;
    uStack_268 = 0;
    uStack_260 = *(undefined8 *)(*param_6 + 0x40);
    func_0x00010743bfac();
    param_5 = 0;
    FUN_1074388a0(param_7);
    uStack_88 = 0;
    uStack_c8 = param_2;
    uStack_c4 = param_3;
    uStack_c0 = param_4;
    uStack_bc = param_5;
    func_0x00010743beac();
    FUN_1073debc4(&uStack_c8);
    func_0x00010724b3d8(auStack_2a0);
    func_0x000107267da8(auStack_258);
  }
  else {
    FUN_1074388f0(auStack_80,param_7);
    func_0x00010743beac();
    FUN_1073debc4(auStack_80);
  }
  func_0x00010743b24c();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010743ba90();
  func_0x00010724b3d8();
  puVar3 = auStack_258;
  func_0x000107267da8();
  func_0x00010743b660();
  pcStack_2a8 = FUN_1074388a0;
  uStack_2d0 = param_2;
  uStack_2cc = param_3;
  uStack_2c8 = param_4;
  uStack_2c4 = param_5;
  lStack_2c0 = param_7;
  uStack_2b8 = param_1;
  puStack_2b0 = &stack0xfffffffffffffff0;
  FUN_107438924(auStack_2e4);
  puVar1 = (undefined4 *)(puVar3 + 0x28);
  if (puVar3[0x38] == '\0') {
    puVar1 = &uStack_2d0;
  }
  FUN_1074389b0(auStack_2e4,puVar1);
  return;
}



/* Entry: 1074388a0; end: 1074388ef;  */

void FUN_1074388a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  undefined4 *puVar1;
  undefined1 auStack_44 [20];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  FUN_107438924(auStack_44);
  puVar1 = (undefined4 *)(param_5 + 0x28);
  if (*(char *)(param_5 + 0x38) == '\0') {
    puVar1 = &uStack_30;
  }
  FUN_1074389b0(auStack_44,puVar1);
  return;
}



/* Entry: 1074388f0; end: 107438907;  */

void FUN_1074388f0(void)

{
  FUN_107438908();
  return;
}



/* Entry: 107438908; end: 107438923;  */

void FUN_107438908(long param_1)

{
  FUN_1073dec2c();
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 107438924; end: 1074389af;  */

ulong FUN_107438924(undefined1 *param_1,undefined8 param_2,long *param_3,uint *param_4)

{
  undefined1 uVar1;
  uint *puVar2;
  undefined8 extraout_x8;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_a9 [121];
  int iStack_30;
  undefined8 uStack_28;
  
  uVar4 = (undefined4)((ulong)param_2 >> 0x20);
  uVar3 = (undefined4)param_2;
  func_0x00010743b2e8();
  puVar2 = (uint *)*param_3;
  uStack_28 = extraout_x8;
  func_0x000107753050(auStack_a9 + 1);
  uVar1 = iStack_30 == 1;
  if ((bool)uVar1) {
    puVar2 = (uint *)(auStack_a9 + 1);
    func_0x00010727f7dc();
    param_4 = (uint *)auStack_a9;
    FUN_1074389c8(param_1);
  }
  else {
    *param_1 = 0;
    param_1[0x10] = 0;
  }
  func_0x00010743b8b0();
  func_0x00010743b264(uStack_28);
  if ((bool)uVar1) {
    return CONCAT44(uVar4,uVar3);
  }
  ___stack_chk_fail();
  func_0x00010743b8b0();
  func_0x00010743b660();
  if ((char)puVar2[4] == '\0') {
    puVar2 = param_4;
  }
  return (ulong)*puVar2;
}



/* Entry: 1074389b0; end: 1074389c7;  */

undefined4 FUN_1074389b0(undefined4 *param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 4) == '\0') {
    param_1 = param_2;
  }
  return *param_1;
}



/* Entry: 1074389c8; end: 107438a0b;  */

void FUN_1074389c8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 0xd);
  if (iVar1 != 4) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_107438a0c();
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
  }
  *(bool *)(param_1 + 2) = iVar1 == 4;
  return;
}



/* Entry: 107438a0c; end: 107438a2b;  */

undefined4 *
FUN_107438a0c(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 uVar1;
  long lVar2;
  undefined4 extraout_w8;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined4 *unaff_x19;
  undefined8 uVar3;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_5[0x1a] == 4;
  if ((bool)uVar1) {
    return param_5 + 2;
  }
  func_0x00010563ab98();
  func_0x00010743b2e8();
  if (*(int *)(param_6 + 8) == 0 && *(int *)(param_7 + 8) == 0) {
    uStack_98 = param_6[1];
    uStack_a0 = *param_6;
    uStack_90 = 1;
    uStack_b8 = param_7[1];
    uVar3 = *param_7;
    uStack_b0 = 1;
    uStack_c0 = uVar3;
    uStack_38 = extraout_x8_00;
    FUN_107438adc(&uStack_a0,&uStack_c0);
    uStack_7c = (undefined4)uVar3;
    uStack_40 = 0;
    uStack_80 = param_1;
    uStack_78 = param_3;
    uStack_74 = param_4;
    func_0x00010743beac();
    param_5 = &uStack_80;
    FUN_1073debc4(param_5);
    func_0x00010743b264(uStack_38);
    if ((bool)uVar1) {
      return param_5;
    }
  }
  else {
    func_0x00010743b264(extraout_x8_00);
    if ((bool)uVar1) {
      lVar2 = extraout_x8;
      func_0x0001073e15fc();
      *(undefined4 *)(lVar2 + 0x40) = extraout_w8;
      FUN_1073deb80();
      return unaff_x19;
    }
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010743b7b8();
  FUN_107438afc();
  return param_5;
}



/* Entry: 107438a2c; end: 107438adb;  */

undefined4 *
FUN_107438a2c(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined1 in_ZR;
  undefined4 extraout_w8;
  undefined8 extraout_x8;
  undefined4 *unaff_x19;
  undefined8 uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010743b2e8();
  if (*(int *)(param_7 + 8) == 0 && *(int *)(param_8 + 8) == 0) {
    uStack_88 = param_7[1];
    uStack_90 = *param_7;
    uStack_80 = 1;
    uStack_a8 = param_8[1];
    uVar1 = *param_8;
    uStack_a0 = 1;
    uStack_b0 = uVar1;
    uStack_28 = extraout_x8;
    FUN_107438adc(&uStack_90,&uStack_b0);
    uStack_6c = (undefined4)uVar1;
    uStack_30 = 0;
    uStack_70 = param_2;
    uStack_68 = param_4;
    uStack_64 = param_5;
    func_0x00010743beac();
    param_6 = &uStack_70;
    FUN_1073debc4(param_6);
    func_0x00010743b264(uStack_28);
    if ((bool)in_ZR) {
      return param_6;
    }
  }
  else {
    func_0x00010743b264(extraout_x8);
    if ((bool)in_ZR) {
      func_0x0001073e15fc();
      *(undefined4 *)(param_1 + 0x40) = extraout_w8;
      FUN_1073deb80();
      return unaff_x19;
    }
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010743b7b8();
  FUN_107438afc();
  return param_6;
}



/* Entry: 107438adc; end: 107438afb;  */

void FUN_107438adc(void)

{
  func_0x00010743b7b8();
  FUN_107438afc();
  return;
}



/* Entry: 107438afc; end: 107438b3f;  */

float FUN_107438afc(double param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  return (float)((double)(float)*param_4 * param_1 + (double)(float)*param_3 * (1.0 - param_1));
}



/* Entry: 107438b40; end: 107438c5f;  */

undefined1 * FUN_107438b40(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int iVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x25;
  undefined1 auStack_148 [120];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [112];
  undefined8 uStack_58;
  
  func_0x00010743b7d0();
  func_0x00010743b2e8();
  uStack_58 = extraout_x8;
  func_0x00010743c52c(auStack_d0);
  FUN_1073ddb98();
  if ((*(byte *)(unaff_x20 + 1) & 1) != 0) {
    func_0x00010743c4b4();
    if (in_NG != in_OV) {
      iVar1 = (int)unaff_x20 + 0x20;
      FUN_107438c60();
      if (iVar1 == 0) {
        func_0x00010743c4f8();
        if (in_NG == in_OV) {
          func_0x00010743c4ec();
          func_0x00010743bae4(auStack_148);
          FUN_107438b40();
          func_0x00010743b538((float)unaff_x25,0x4e6e6b28);
          func_0x00010743c4cc();
          FUN_1073b426c();
          puVar2 = auStack_148;
          FUN_107438c80(puVar2,auStack_d0);
          func_0x00010743c2fc();
        }
        else {
          puVar2 = (undefined1 *)*unaff_x20;
          func_0x00010743b968();
          FUN_107438b40();
        }
        goto LAB_107438bb0;
      }
    }
    func_0x00010743c474();
    FUN_1074337f4();
    FUN_1074338ec(auStack_148);
  }
  puVar2 = (undefined1 *)(unaff_x19 + 8);
  FUN_1073ddccc(puVar2,auStack_c8);
LAB_107438bb0:
  func_0x00010743be44(auStack_d0);
  func_0x00010743b264(uStack_58);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010743be44(auStack_d0);
  func_0x00010743b660();
  if (*(int *)(puVar2 + 0x70) != 0) {
    return (undefined1 *)(ulong)((puVar2[0x18] & 2) == 0 && *(int *)(puVar2 + 0x70) != 1);
  }
  return (undefined1 *)0x0;
}



/* Entry: 107438c60; end: 107438c7f;  */

bool FUN_107438c60(long param_1)

{
  if (*(int *)(param_1 + 0x70) != 0) {
    return (*(byte *)(param_1 + 0x18) & 2) == 0 && *(int *)(param_1 + 0x70) != 1;
  }
  return false;
}



/* Entry: 107438c80; end: 107438c9b;  */

void FUN_107438c80(void)

{
  func_0x00010743b7b8();
  FUN_107438c9c();
  return;
}



/* Entry: 107438c9c; end: 107438d83;  */

undefined1 * FUN_107438c9c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined4 extraout_w8;
  undefined1 *unaff_x19;
  undefined1 auStack_168 [64];
  undefined1 auStack_128 [64];
  undefined1 auStack_e8 [56];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [120];
  
  func_0x00010743b2d4();
  if (*(int *)(param_3 + 0x70) == 0 && *(int *)(param_4 + 0x70) == 0) {
    FUN_107438d84(auStack_128,param_3);
    FUN_107438d84(auStack_168,param_4);
    func_0x000104c2fe00(auStack_e8,auStack_128);
    FUN_1073ddedc(auStack_b0,auStack_e8);
    FUN_1073ddccc(param_1 + 8,auStack_a8);
    func_0x00010743c2fc();
    func_0x000104c2f714(auStack_e8);
    func_0x00010724b3d8(auStack_168);
    puVar1 = auStack_128;
    func_0x00010724b3d8(puVar1);
    func_0x00010743b24c();
    if ((bool)in_ZR) {
      return puVar1;
    }
  }
  else {
    func_0x00010743b24c();
    if ((bool)in_ZR) {
      param_1 = param_1 + 8;
      func_0x00010743b574(param_1,param_3 + 8);
      *(undefined4 *)(param_1 + 0x68) = extraout_w8;
      FUN_107438df0();
      return unaff_x19;
    }
  }
  ___stack_chk_fail();
  puVar1 = auStack_128;
  func_0x00010724b3d8(puVar1);
  func_0x00010743b660();
  FUN_107438da0();
  return puVar1;
}



/* Entry: 107438d84; end: 107438d9f;  */

void FUN_107438d84(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_107438da0(param_1,&uStack_11);
  return;
}



/* Entry: 107438da0; end: 107438dbf;  */

void FUN_107438da0(undefined1 *param_1,long param_2)

{
  if (*(int *)(param_2 + 0x70) != 0) {
    *param_1 = 0;
    param_1[0x38] = 0;
    return;
  }
  func_0x000104c2fe00(param_1,param_2 + 8);
  param_1[0x38] = 1;
  return;
}



/* Entry: 107438dc0; end: 107438def;  */

void FUN_107438dc0(long param_1)

{
  undefined4 extraout_w8;
  
  FUN_10743b574();
  *(undefined4 *)(param_1 + 0x68) = extraout_w8;
  FUN_107438df0();
  return;
}



/* Entry: 107438df0; end: 107438e33;  */

void FUN_107438df0(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010743b804();
  FUN_1073dd470();
  iVar1 = *(int *)(unaff_x20 + 0x68);
  if (iVar1 != -1) {
    func_0x00010743b310(&PTR_FUN_1109afea8);
    *(int *)(unaff_x19 + 0x68) = iVar1;
  }
  return;
}



/* Entry: 107438e34; end: 107438e4b;  */

void FUN_107438e34(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(*param_1);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 107438e4c; end: 107438f57;  */

void FUN_107438e4c(void)

{
  char in_NG;
  char in_OV;
  int iVar1;
  undefined8 *unaff_x20;
  long unaff_x25;
  undefined1 auStack_c0 [56];
  undefined1 auStack_88 [56];
  
  func_0x00010743b7d0();
  func_0x00010743c52c(auStack_88);
  FUN_1073dd8d8();
  if ((*(byte *)(unaff_x20 + 1) & 1) != 0) {
    func_0x00010743c4b4();
    if (in_NG != in_OV) {
      iVar1 = (int)unaff_x20 + 0x20;
      FUN_107438f58();
      if (iVar1 == 0) {
        func_0x00010743c4f8();
        if (in_NG == in_OV) {
          func_0x00010743c4ec();
          func_0x00010743bae4(auStack_c0);
          FUN_107438e4c();
          func_0x00010743b538((float)unaff_x25,0x4e6e6b28);
          func_0x00010743c4cc();
          FUN_1073b426c();
          FUN_107438f78(auStack_c0,auStack_88);
          FUN_1073dd4c4(auStack_c0);
        }
        else {
          func_0x00010743b968(*unaff_x20);
          FUN_107438e4c();
        }
        goto LAB_107438eb0;
      }
    }
    func_0x00010743c584();
    FUN_10743390c();
    FUN_107410c54(auStack_c0);
  }
  FUN_1073dd9b0();
LAB_107438eb0:
  FUN_1073dd4c4(auStack_88);
  return;
}



/* Entry: 107438f58; end: 107438f77;  */

bool FUN_107438f58(long param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    return (*(byte *)(param_1 + 0x10) & 2) == 0 && *(int *)(param_1 + 0x30) != 1;
  }
  return false;
}



/* Entry: 107438f78; end: 107438ffb;  */

void FUN_107438f78(void)

{
  func_0x00010743b7b8();
  func_0x000107438f94();
  return;
}



/* Entry: 107438ffc; end: 1074390f7;  */

void FUN_107438ffc(void)

{
  char in_NG;
  char in_OV;
  int iVar1;
  undefined8 *unaff_x20;
  long unaff_x25;
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [64];
  
  func_0x00010743b7d0();
  func_0x00010743c52c(auStack_90);
  FUN_107439134();
  if ((*(byte *)(unaff_x20 + 1) & 1) != 0) {
    func_0x00010743c4b4();
    if (in_NG != in_OV) {
      iVar1 = (int)unaff_x20 + 0x20;
      FUN_1074390f8();
      if (iVar1 == 0) {
        func_0x00010743c4f8();
        if (in_NG == in_OV) {
          func_0x00010743c4ec();
          func_0x00010743bae4(auStack_d0);
          FUN_107438ffc();
          func_0x00010743b538((float)unaff_x25,0x4e6e6b28);
          func_0x00010743c4cc();
          FUN_1073b426c();
          FUN_107439118(auStack_d0,auStack_90);
          func_0x00010743bd78();
        }
        else {
          func_0x00010743b968(*unaff_x20);
          FUN_107438ffc();
        }
        goto LAB_10743905c;
      }
    }
    func_0x00010743c584();
    FUN_107433988();
    FUN_107433a80(auStack_d0);
  }
  func_0x00010743bec0();
LAB_10743905c:
  func_0x00010743c1ec();
  return;
}



/* Entry: 1074390f8; end: 107439117;  */

bool FUN_1074390f8(long param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    return (*(byte *)(param_1 + 0x10) & 2) == 0 && *(int *)(param_1 + 0x38) != 1;
  }
  return false;
}



/* Entry: 107439118; end: 107439133;  */

void FUN_107439118(void)

{
  func_0x00010743b7b8();
  FUN_1074394a4();
  return;
}



/* Entry: 107439134; end: 10743916b;  */

void FUN_107439134(void)

{
  undefined8 extraout_x8;
  
  func_0x00010743b73c();
  FUN_10743916c();
  func_0x00010743bdd4(extraout_x8);
  func_0x00010743c338();
  return;
}



/* Entry: 10743916c; end: 1074391b7;  */

void FUN_10743916c(long param_1)

{
  if (*(int *)(param_1 + 0x38) != -1) {
    return;
  }
  func_0x00010563ab98();
  func_0x00010743c338();
  return;
}



/* Entry: 1074391b8; end: 1074391cb;  */

void FUN_1074391b8(undefined8 param_1,long *param_2)

{
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_18;
  
  uStack_50 = *(undefined8 *)(*param_2 + 8);
  uStack_48 = *(undefined4 *)(*param_2 + 0x10);
  uStack_18 = 0;
  FUN_1074331ac(param_1,&uStack_50);
  func_0x00010743bd78();
  return;
}


