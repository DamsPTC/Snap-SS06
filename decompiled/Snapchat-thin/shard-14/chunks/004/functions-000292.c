/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2208bc; end: 10b220ee7;  */

void FUN_10b2208bc(long param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar6;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long lVar7;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  long unaff_x21;
  ulong unaff_x24;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plStack_190;
  undefined8 uStack_188;
  long lStack_160;
  long alStack_150 [2];
  long lStack_140;
  long lStack_138;
  undefined1 auStack_130 [16];
  long lStack_120;
  undefined1 auStack_118 [72];
  undefined1 auStack_d0 [16];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x00010b223a94();
  func_0x00010b223448();
  if ((long)unaff_x24 < 1) {
    func_0x00010b2236d8(auStack_d0);
    FUN_10b220fe4();
    func_0x00010b223cb4();
    lStack_140 = param_1;
    if (extraout_x8 != 0) {
      do {
        func_0x00010b2235d0();
      } while (extraout_w10 != 0);
    }
    plStack_190 = (long *)0x0;
    uStack_188 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    FUN_10b2221d0(&lStack_120,auStack_d0,&uStack_78);
    FUN_10b2221f8(&plStack_190,&lStack_120);
    func_0x00010b223f44();
    func_0x00010b2239a0();
    FUN_10b22221c(alStack_150);
    FUN_10b222258(&uStack_90,*(undefined8 *)(alStack_150[0] + 0x18),
                  *(undefined8 *)(alStack_150[0] + 0x20));
    func_0x00010b223c10();
    lStack_c0 = extraout_x8_00 + 0x60;
    lStack_b8 = CONCAT71(lStack_b8._1_7_,1);
    __ZNSt3__15mutex4lockEv();
    plVar11 = plStack_190;
    FUN_10b222294();
    if ((int)plVar11 == 0) {
      uVar5 = 0x20;
      __Znwm();
      func_0x00010b223ab8(&PTR_FUN_110cc8e48);
      lVar7 = *(long *)(extraout_x9 + 0xa8);
      *(undefined8 *)(extraout_x9 + 0xa8) = uVar5;
      if (lVar7 != 0) {
        func_0x00010b223680();
      }
    }
    else {
      FUN_10b2221f8(&lStack_b0,&plStack_190);
    }
    func_0x00010b223de0();
    if (lStack_b0 != 0) {
      lStack_c0 = lStack_b0;
      lStack_b8 = lStack_a8;
      if (lStack_a8 != 0) {
        do {
          func_0x00010b2235d0();
        } while (extraout_w10_00 != 0);
      }
      FUN_10b2222d4(&lStack_120);
      func_0x00010b223a84();
    }
    func_0x00010b224138();
    func_0x00010b2223d4();
    FUN_10b2229b8(&lStack_120);
    func_0x00010b223c2c();
    func_0x00010b2238b4();
    func_0x00010b223484(&lStack_140);
    func_0x00010b2239e8();
    goto LAB_10b220d8c;
  }
  func_0x00010b223ea8();
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  uVar8 = *(ulong *)(unaff_x21 + 0x160);
  if ((uVar8 != 0) && (*(long *)(unaff_x21 + 0x170) != 0)) {
    func_0x00010b223f64();
    uVar9 = uVar8 - 1;
    if ((uVar8 & uVar9) == 0) {
      uVar10 = param_2 & uVar9;
    }
    else {
      uVar10 = param_2;
      if (uVar8 <= param_2) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = param_2 / uVar8;
        }
        uVar10 = param_2 - uVar10 * uVar8;
      }
    }
    plVar11 = *(long **)(*(long *)(unaff_x21 + 0x158) + uVar10 * 8);
    uVar3 = param_2;
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_10b220ab0;
          uVar6 = plVar11[1];
          if (uVar6 != param_2) break;
          func_0x00010b223fc0();
          if ((int)uVar3 != 0) {
            param_4 = plVar11[6];
            FUN_10b221018(&lStack_140,plVar11[5]);
            goto LAB_10b220ab0;
          }
        }
        if ((uVar8 & uVar9) == 0) {
          uVar6 = uVar6 & uVar9;
        }
        else if (uVar8 <= uVar6) {
          uVar1 = 0;
          if (uVar8 != 0) {
            uVar1 = uVar6 / uVar8;
          }
          uVar6 = uVar6 - uVar1 * uVar8;
        }
      } while (uVar6 == uVar10);
    }
  }
LAB_10b220ab0:
  plVar11 = &lStack_120;
  func_0x000107c283c4();
  if (lStack_140 == 0) {
    func_0x00010b2236d8(alStack_150);
    FUN_10b220fe4();
    func_0x00010b223a44();
    if (extraout_x8_02 != 0) {
      do {
        func_0x00010b2235d0();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010b223cb4();
    lStack_160 = param_1;
    if (extraout_x8_03 != 0) {
      do {
        func_0x00010b2235d0();
      } while (extraout_w10_02 != 0);
    }
    func_0x00010b22409c();
    func_0x00010b2239c0();
    FUN_10b2221d0();
    func_0x00010b223f2c();
    func_0x00010b223f44();
    func_0x00010b223c3c();
    FUN_10b22221c(auStack_98);
    func_0x00010b2240b4();
    FUN_10b222258();
    func_0x00010b2237e8();
    func_0x00010b2239b0(extraout_x8_04 + 0x60);
    __ZNSt3__15mutex4lockEv();
    uVar5 = uStack_78;
    FUN_10b222294();
    if ((int)uVar5 == 0) {
      puVar4 = (undefined8 *)0x50;
      __Znwm();
      *puVar4 = &PTR_DAT_110cc8ee8;
      FUN_10b222b54(puVar4 + 1,&lStack_120);
      func_0x00010b2241a0();
      lVar7 = *(long *)(extraout_x8_07 + 0xa8);
      *(undefined8 **)(extraout_x8_07 + 0xa8) = puVar4;
      if (lVar7 != 0) {
        func_0x00010b2236a0();
      }
    }
    else {
      func_0x00010b224008();
    }
    func_0x00010b2238f8();
    if (lStack_c0 != 0) {
      func_0x00010b224194();
      if (param_4 != 0) {
        do {
          func_0x00010b2235d0();
        } while (extraout_w10_04 != 0);
      }
      FUN_10b222a0c(&lStack_120);
      func_0x00010b2239e8();
    }
    func_0x00010b2236f4();
    func_0x00010b2223d4();
    func_0x00010b222f14(&lStack_120);
    func_0x00010b223bd4();
    func_0x00010b2239a0();
    func_0x00010b222f3c(&plStack_190);
LAB_10b220d60:
    func_0x00010b2223d4(alStack_150);
  }
  else {
    func_0x00010b223d30();
    (*extraout_x8_01)();
    uVar8 = (long)plVar11 - *(long *)(lStack_140 + 0x28);
    uVar2 = uVar8 == unaff_x24;
    if (unaff_x24 <= uVar8) {
      func_0x00010b2236d8(alStack_150);
      FUN_10b220fe4();
      func_0x00010b223954();
      if (extraout_x8_05 != 0) {
        do {
          func_0x00010b2235d0();
        } while (extraout_w10_03 != 0);
      }
      func_0x00010b22409c();
      func_0x00010b2239c0();
      FUN_10b2221d0();
      func_0x00010b223f2c();
      func_0x00010b223f44();
      func_0x00010b223c3c();
      FUN_10b22221c(auStack_98);
      func_0x00010b224054();
      FUN_10b222258();
      func_0x00010b223878();
      func_0x00010b2239b0(extraout_x8_06 + 0x60);
      __ZNSt3__15mutex4lockEv();
      uVar5 = uStack_78;
      FUN_10b222294();
      if ((int)uVar5 == 0) {
        uVar5 = 0x40;
        __Znwm();
        func_0x00010b223838(&PTR_FUN_110cc8f28);
        lVar7 = *(long *)(extraout_x9_00 + 0xa8);
        *(undefined8 *)(extraout_x9_00 + 0xa8) = uVar5;
        if (lVar7 != 0) {
          func_0x00010b223680();
        }
      }
      else {
        func_0x00010b224008();
      }
      func_0x00010b2238f8();
      if (lStack_c0 != 0) {
        func_0x00010b224194();
        if (param_4 != 0) {
          do {
            func_0x00010b2235d0();
          } while (extraout_w10_06 != 0);
        }
        FUN_10b222f64(&lStack_120);
        func_0x00010b2239e8();
      }
      func_0x00010b2236f4();
      func_0x00010b2223d4();
      func_0x00010b223110(&lStack_120);
      func_0x00010b223bd4();
      func_0x00010b2239a0();
      func_0x00010b223134(&plStack_190);
      goto LAB_10b220d60;
    }
    func_0x00010b2223f8(&lStack_120);
    plStack_190 = (long *)0x0;
    uStack_188 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    FUN_10b2220d8(&uStack_78,auStack_118,&uStack_90);
    FUN_10b222100(&plStack_190,&uStack_78);
    FUN_10b222164(&uStack_78);
    func_0x00010b223c2c();
    __ZNSt3__15mutex4lockEv(plStack_190 + 9);
    plVar11 = plStack_190;
    lVar7 = lStack_140;
    func_0x00010b2240c8();
    if ((bool)uVar2) {
      FUN_10b221018();
    }
    else {
      *plVar11 = lVar7;
      plVar11[1] = lStack_138;
      if (lStack_138 != 0) {
        do {
          func_0x00010b2235d0();
        } while (extraout_w10_05 != 0);
      }
      *(undefined1 *)(plVar11 + 2) = 1;
    }
    func_0x00010b223db0();
    if (&stack0x00000000 == (undefined1 *)0x120) {
      func_0x00010b223efc();
    }
    else {
      func_0x00010b223f08(*(undefined8 *)(lStack_120 + 0x10));
      func_0x00010b223670();
    }
    func_0x00010b2238e8();
    FUN_10b222258();
    FUN_10b2224f8(&lStack_120);
  }
  func_0x00010b223d88();
LAB_10b220d8c:
  func_0x00010b223484(auStack_130);
  return;
}



/* Entry: 10b220ee8; end: 10b220fe3;  */

void FUN_10b220ee8(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [8];
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  long lStack_28;
  
  puStack_30 = (undefined8 *)0x0;
  lStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10b2220d8(auStack_40,param_2,&uStack_50);
  FUN_10b222100(&puStack_30,auStack_40);
  FUN_10b222164(auStack_40);
  func_0x00010b223a24();
  func_0x00010b223e38(puStack_30 + 9);
  __ZNSt3__15mutex4lockEv();
  puStack_60 = puStack_30;
  lStack_58 = lStack_28;
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
  FUN_10b222124(puStack_30 + 3,auStack_40,&puStack_60);
  func_0x00010b223c64();
  if (puStack_30[0x11] == 0) {
    uVar5 = *puStack_30;
    param_1[1] = puStack_30[1];
    *param_1 = uVar5;
    *puStack_30 = 0;
    puStack_30[1] = 0;
    func_0x00010b223a1c();
    FUN_10b222164(&puStack_30);
    return;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_68);
  func_0x00010b223fa0();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10b220fac);
  (*pcVar4)();
}



/* Entry: 10b220fe4; end: 10b221017;  */

void FUN_10b220fe4(void)

{
  func_0x00010b223900();
  func_0x00010b223b1c();
  func_0x00010b223830();
  return;
}



/* Entry: 10b221018; end: 10b22105b;  */

undefined8 * FUN_10b221018(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 != 0) {
    do {
      func_0x00010b2235d0();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_10b223518(&uStack_30);
  return param_1;
}



/* Entry: 10b22105c; end: 10b221083;  */

void FUN_10b22105c(long param_1)

{
  undefined1 uStack_11;
  
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_10b221084(*(long *)(param_1 + 0xa0),&uStack_11);
  }
  return;
}



/* Entry: 10b221084; end: 10b221113;  */

void FUN_10b221084(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 auStack_38 [3];
  
  func_0x00010b2236c8();
  __ZNSt3__17promiseIvEC1Ev(&uStack_40);
  func_0x00010b223fe4();
  auStack_38[0] = uStack_40;
  uStack_40 = 0;
  puVar1 = auStack_38;
  FUN_10b22353c(param_1,puVar1);
  func_0x00010b223cf8();
  __ZNSt3__117__assoc_sub_state4waitEv();
  func_0x00010b223d3c();
  func_0x00010b223c7c();
  func_0x00010b2235f0();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b223d3c();
  func_0x00010b223c7c();
  func_0x00010b2236c0();
  __ZNSt3__112__get_sp_mutEPKv(puVar1);
  func_0x00010b223cc0();
  func_0x00010b223608();
  func_0x00010b2239d8();
  return;
}



/* Entry: 10b221114; end: 10b22114b;  */

void FUN_10b221114(undefined8 param_1,undefined8 param_2)

{
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  func_0x00010b223cc0();
  func_0x00010b223608();
  func_0x00010b2239d8();
  return;
}



/* Entry: 10b22114c; end: 10b221193;  */

void FUN_10b22114c(void)

{
  func_0x00010b2235b0();
  func_0x00010b221170();
  return;
}



/* Entry: 10b221194; end: 10b2211bb;  */

void FUN_10b221194(void)

{
  func_0x00010b2237a0();
  func_0x00010b223cc0();
  func_0x00010b223608();
  func_0x00010b2239d8();
  return;
}



/* Entry: 10b2211bc; end: 10b2211df;  */

void FUN_10b2211bc(void)

{
  func_0x00010b2235b0();
  FUN_10b221398();
  return;
}



/* Entry: 10b2211e0; end: 10b22121b;  */

void FUN_10b2211e0(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b223ff0();
  func_0x00010b224110();
  func_0x00010b2213bc();
  *unaff_x20 = &PTR_FUN_110cc8bb8;
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 10b22121c; end: 10b221257;  */

void FUN_10b22121c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  
  if (param_3 != 0) {
    do {
      func_0x00010b2235d0();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b2235d0();
    } while (extraout_w10_00 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x00010b2238f0();
  return;
}



/* Entry: 10b221258; end: 10b221297;  */

bool FUN_10b221258(long param_1)

{
  bool bVar1;
  
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    bVar1 = *(long *)(param_1 + 0xd0) != 0;
    func_0x00010b223744();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10b221298; end: 10b221397;  */

void FUN_10b221298(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [88];
  
  uStack_b8 = param_2;
  lStack_b0 = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010b2235d0();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b2235d0();
    } while (extraout_w10_00 != 0);
  }
  uStack_a8 = param_2;
  lStack_a0 = param_3;
  FUN_10b2216fc(auStack_88,&uStack_a8);
  puVar1 = (undefined8 *)(*param_1 + 0x68);
  (*(code *)*puVar1)();
  FUN_10b221834(auStack_98,auStack_88,puVar1);
  FUN_10b48b188(auStack_88);
  func_0x00010b223f54();
  FUN_10b2232f0(auStack_98);
  FUN_10b221398(&uStack_a8);
  FUN_10b221398(&uStack_b8);
  return;
}



/* Entry: 10b221398; end: 10b221407;  */

void FUN_10b221398(long param_1)

{
  func_0x00010b223980();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b221408; end: 10b22140b;  */

undefined8 * FUN_10b221408(undefined8 *param_1)

{
  undefined1 auStack_38 [24];
  
  *param_1 = &PTR_FUN_110cc8c00;
  if (param_1[1] != 0) {
    func_0x00010b22391c();
    func_0x00010b223ce0();
    func_0x00010b223cf0();
    func_0x00010b223c5c();
    __ZNSt9exceptionD2Ev(auStack_38);
  }
  func_0x00010b221170(param_1 + 3);
  func_0x00010b221170(param_1 + 1);
  return param_1;
}



/* Entry: 10b22140c; end: 10b22141f;  */

void FUN_10b22140c(void)

{
  FUN_10b2214bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b221420; end: 10b221423;  */

undefined8 * FUN_10b221420(undefined8 *param_1)

{
  undefined1 auStack_38 [24];
  
  *param_1 = &PTR_FUN_110cc8c00;
  if (param_1[1] != 0) {
    func_0x00010b22391c();
    func_0x00010b223ce0();
    func_0x00010b223cf0();
    func_0x00010b223c5c();
    __ZNSt9exceptionD2Ev(auStack_38);
  }
  func_0x00010b221170(param_1 + 3);
  func_0x00010b221170(param_1 + 1);
  return param_1;
}



/* Entry: 10b221424; end: 10b221437;  */

void FUN_10b221424(void)

{
  FUN_10b2214bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b221438; end: 10b22143b;  */

void FUN_10b221438(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc8c20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b22143c; end: 10b22144f;  */

void FUN_10b22143c(void)

{
  FUN_10b2214ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b221450; end: 10b2214ab;  */

long FUN_10b221450(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (lVar1 != 0) {
    func_0x00010b2236a0();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xa0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x60);
  lVar1 = param_1 + 0x30;
  __ZNSt3__118condition_variableD1Ev(lVar1);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    param_1 = param_1 + 0x18;
    func_0x00010b223980();
    if (param_1 != 0) {
      func_0x000107c278a0();
    }
    return unaff_x19;
  }
  return lVar1;
}



/* Entry: 10b2214ac; end: 10b2214bb;  */

void FUN_10b2214ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2214bc; end: 10b221533;  */

undefined8 * FUN_10b2214bc(undefined8 *param_1)

{
  undefined1 auStack_38 [24];
  
  *param_1 = &PTR_FUN_110cc8c00;
  if (param_1[1] != 0) {
    func_0x00010b22391c();
    func_0x00010b223ce0();
    func_0x00010b223cf0();
    func_0x00010b223c5c();
    __ZNSt9exceptionD2Ev(auStack_38);
  }
  func_0x00010b221170(param_1 + 3);
  func_0x00010b221170(param_1 + 1);
  return param_1;
}



/* Entry: 10b221534; end: 10b2215b3;  */

void FUN_10b221534(void)

{
  long unaff_x19;
  undefined1 auStack_40 [32];
  
  func_0x00010b224068();
  func_0x00010b223c6c();
  func_0x00010b223f7c();
  func_0x00010b221170(auStack_40);
  func_0x00010b2238f0();
  func_0x00010b223c94();
  func_0x00010b223c84();
  func_0x00010b223af4();
  if (unaff_x19 == 0) {
    func_0x00010b2237b0();
  }
  else {
    func_0x00010b22407c();
    func_0x00010b2237c4();
    func_0x00010b2235e0();
  }
  func_0x00010b223a2c();
  return;
}



/* Entry: 10b2215b4; end: 10b2215b7;  */

undefined8 * FUN_10b2215b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc8c70;
  FUN_10b221904(param_1 + 1);
  return param_1;
}



/* Entry: 10b2215b8; end: 10b2215cb;  */

void FUN_10b2215b8(void)

{
  FUN_10b221610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2215cc; end: 10b22160f;  */

void FUN_10b2215cc(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b223644();
  if (param_3 != 0) {
    do {
      func_0x00010b2235d0();
    } while (extraout_w10 != 0);
  }
  FUN_10b221298(param_1 + 8);
  func_0x00010b2238bc();
  return;
}



/* Entry: 10b221610; end: 10b22163b;  */

undefined8 * FUN_10b221610(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc8c70;
  FUN_10b221904(param_1 + 1);
  return param_1;
}



/* Entry: 10b22163c; end: 10b2216d7;  */

void FUN_10b22163c(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  func_0x00010b224068();
  func_0x00010b223c6c();
  func_0x00010b223f7c();
  func_0x00010b221170(auStack_40);
  func_0x00010b2238f0();
  func_0x00010b223c94();
  func_0x00010b2240c8(uStack_30);
  if ((bool)in_ZR) {
    FUN_10b2216d8();
  }
  else {
    func_0x00010b223e78();
  }
  func_0x00010b223be4();
  if (unaff_x19 == 0) {
    func_0x00010b2237b0();
  }
  else {
    func_0x00010b22407c();
    func_0x00010b2237c4();
    func_0x00010b2235e0();
  }
  func_0x00010b223a2c();
  return;
}



/* Entry: 10b2216d8; end: 10b2216fb;  */

void FUN_10b2216d8(void)

{
  func_0x00010b2235b0();
  FUN_10b2232f0();
  return;
}



/* Entry: 10b2216fc; end: 10b221833;  */

void FUN_10b2216fc(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 extraout_x9;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  long lStack_28;
  
  func_0x00010b22402c();
  FUN_10b221194(auStack_40,extraout_x9,auStack_50);
  FUN_10b2211bc(&puStack_30,auStack_40);
  FUN_10b221398(auStack_40);
  func_0x00010b223a3c();
  func_0x00010b223e38(puStack_30 + 0x12);
  __ZNSt3__15mutex4lockEv();
  puVar1 = puStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x00010b2235d0();
    } while (extraout_w10 != 0);
  }
  while (puVar3 = puVar1, FUN_10b221258(), ((ulong)puVar3 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(puVar1 + 0xc,auStack_40);
  }
  func_0x00010b223aec();
  if (puStack_30[0x1a] != 0) {
    func_0x00010b223fa8();
    func_0x00010b223fa0();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b221804);
    (*pcVar2)();
  }
  *unaff_x19 = &PTR_FUN_110cec0f0;
  unaff_x19[1] = 0;
  unaff_x19[3] = 0;
  unaff_x19[2] = 0;
  unaff_x19[5] = 0;
  unaff_x19[4] = 0;
  unaff_x19[7] = 0;
  unaff_x19[6] = 0;
  unaff_x19[9] = 0;
  unaff_x19[8] = 0;
  *(undefined4 *)(unaff_x19 + 10) = 0;
  if (unaff_x19 != puStack_30) {
    uVar4 = puStack_30[1];
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    if (uVar4 == 0) {
      func_0x00010b48b608();
    }
    else {
      FUN_10b48b5d0();
    }
  }
  func_0x00010b223a1c();
  FUN_10b221398(&puStack_30);
  return;
}



/* Entry: 10b221834; end: 10b2218c7;  */

void FUN_10b221834(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [88];
  
  puVar1 = (undefined8 *)0x78;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110cc8cc0;
  func_0x00010b2218ec(auStack_88,param_2);
  func_0x00010b2218ec(puVar1 + 3,auStack_88);
  puVar1[0xe] = param_3;
  FUN_10b48b188(auStack_88);
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}



/* Entry: 10b2218c8; end: 10b2218cb;  */

void FUN_10b2218c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc8cc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2218cc; end: 10b2218df;  */

void FUN_10b2218cc(void)

{
  func_0x00010b2218f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2218e0; end: 10b221903;  */

long FUN_10b2218e0(long param_1)

{
  func_0x00010b48ba04();
  FUN_10b48b1b4(param_1 + 0x18);
  return param_1 + 0x18;
}



/* Entry: 10b221904; end: 10b221957;  */

undefined8 FUN_10b221904(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b22192c(param_1 + 0x10);
  func_0x00010b223980();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b221958; end: 10b221aaf;  */

void FUN_10b221958(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar2;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [88];
  
  if (param_3 != 0) {
    do {
      func_0x00010b2235d0();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b2235d0();
    } while (extraout_w10_00 != 0);
  }
  lVar2 = *(long *)(param_1 + 0x18);
  puVar1 = auStack_88;
  uStack_c0 = param_2;
  lStack_b8 = param_3;
  FUN_10b2216fc(puVar1,&uStack_c0);
  func_0x00010b223d30();
  (*extraout_x8)();
  FUN_10b221834(auStack_98,auStack_88,puVar1);
  FUN_10b2216d8(param_1 + 0x20,auStack_98);
  FUN_10b2232f0(auStack_98);
  func_0x00010b2240e8();
  __ZNSt3__119__shared_mutex_base4lockEv();
  FUN_10b221b3c(lVar2 + 0x158,param_1);
  FUN_10b2205f4();
  func_0x00010b223d54();
  uStack_a8 = *(undefined8 *)(param_1 + 0x28);
  uStack_b0 = *(undefined8 *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    do {
      func_0x00010b2235d0();
    } while (extraout_w10_01 != 0);
  }
  FUN_10b48b188(auStack_88);
  func_0x00010b223f54();
  func_0x00010b223d20();
  func_0x00010b223a3c();
  func_0x00010b223aec();
  return;
}



/* Entry: 10b221ab0; end: 10b221ab7;  */

void FUN_10b221ab0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_2[6] = 0;
  param_2[7] = 0;
  return;
}



/* Entry: 10b221ab8; end: 10b221acb;  */

void FUN_10b221ab8(void)

{
  FUN_10b221b10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b221acc; end: 10b221b0f;  */

void FUN_10b221acc(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b223644();
  if (param_3 != 0) {
    do {
      func_0x00010b2235d0();
    } while (extraout_w10 != 0);
  }
  FUN_10b221958(param_1 + 8);
  func_0x00010b2238bc();
  return;
}



/* Entry: 10b221b10; end: 10b221b3b;  */

undefined8 * FUN_10b221b10(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cc8d10;
  func_0x00010b221e70(param_1 + 1);
  return param_1;
}



/* Entry: 10b221b3c; end: 10b221df3;  */

undefined8 * FUN_10b221b3c(float param_1,float param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar6;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long extraout_x9_01;
  long *extraout_x10;
  long *plVar7;
  long *extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *plVar8;
  ulong uVar9;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar10;
  ulong unaff_x22;
  long *unaff_x23;
  ulong uVar11;
  ulong unaff_x25;
  
  func_0x00010b223de8();
  uVar11 = unaff_x19[1];
  uVar6 = param_3;
  if (uVar11 != 0) {
    unaff_x23 = (long *)(uVar11 - 1);
    if ((uVar11 & (ulong)unaff_x23) == 0) {
      unaff_x25 = (ulong)unaff_x23 & param_3;
    }
    else {
      unaff_x25 = param_3;
      if (uVar11 <= param_3) {
        func_0x00010b2240a8();
      }
    }
    puVar10 = *(undefined8 **)(*unaff_x19 + unaff_x25 * 8);
    unaff_x20 = (undefined8 *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (undefined8 *)*puVar10;
          if (unaff_x20 == (undefined8 *)0x0) goto LAB_10b221be4;
          uVar4 = unaff_x20[1];
          puVar10 = unaff_x20;
          if (uVar4 != param_3) break;
          func_0x00010b223f38();
          if ((uVar6 & 1) != 0) goto LAB_10b221dcc;
        }
        if ((uVar11 & (ulong)unaff_x23) == 0) {
          uVar4 = uVar4 & (ulong)unaff_x23;
        }
        else if (uVar11 <= uVar4) {
          uVar9 = 0;
          if (uVar11 != 0) {
            uVar9 = uVar4 / uVar11;
          }
          uVar4 = uVar4 - uVar9 * uVar11;
        }
      } while (uVar4 == unaff_x25);
    }
  }
LAB_10b221be4:
  func_0x00010b223f14();
  func_0x00010b224124();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x00010b223b58();
  if ((uVar11 != 0) && (uVar4 = unaff_x25, param_1 <= param_2 * (float)uVar11)) goto LAB_10b221d74;
  func_0x00010b223e60();
  bVar3 = uVar11 == 3;
  func_0x00010b223bb8();
  if (bVar3) {
    unaff_x22 = 2;
  }
  else if ((unaff_x22 & extraout_x8) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar6 = unaff_x22;
  }
  uVar11 = unaff_x19[1];
  bVar3 = uVar11 <= unaff_x22;
  if (bVar3 && unaff_x22 != uVar11) {
LAB_10b221c48:
    if (unaff_x22 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b221de0);
      (*pcVar2)();
    }
    __Znwm(unaff_x22 << 3);
    FUN_10b221df4();
    unaff_x19[1] = unaff_x22;
    lVar5 = *unaff_x19;
    for (uVar6 = 0; unaff_x22 != uVar6; uVar6 = uVar6 + 1) {
      *(undefined8 *)(lVar5 + uVar6 * 8) = 0;
    }
    uVar11 = unaff_x22;
    if (*unaff_x23 != 0) {
      func_0x00010b224174();
      func_0x00010b22414c();
      lVar5 = extraout_x8_00;
      uVar6 = extraout_x9;
      plVar8 = extraout_x10;
      uVar4 = extraout_x11;
      while (plVar7 = plVar8, plVar8 = (long *)*plVar7, plVar8 != (long *)0x0) {
        uVar9 = plVar8[1];
        if ((unaff_x22 & uVar6) == 0) {
          uVar9 = uVar9 & uVar6;
        }
        else if (unaff_x22 <= uVar9) {
          uVar1 = 0;
          if (unaff_x22 != 0) {
            uVar1 = uVar9 / unaff_x22;
          }
          uVar9 = uVar9 - uVar1 * unaff_x22;
        }
        if (uVar9 != uVar4) {
          if (*(long *)(lVar5 + uVar9 * 8) == 0) {
            *(long **)(lVar5 + uVar9 * 8) = plVar7;
            uVar4 = uVar9;
          }
          else {
            func_0x00010b223b98();
            lVar5 = extraout_x8_01;
            uVar6 = extraout_x9_00;
            plVar8 = extraout_x10_00;
            uVar4 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (!bVar3) {
    func_0x00010b223bf4();
    if ((bVar3) && ((uVar11 & uVar11 - 1) == 0)) {
      func_0x00010b223b78();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (unaff_x22 <= uVar6) {
      unaff_x22 = uVar6;
    }
    if (unaff_x22 < uVar11) {
      if (unaff_x22 != 0) goto LAB_10b221c48;
      FUN_10b221df4();
      unaff_x19[1] = 0;
      uVar11 = 0;
    }
    else {
      uVar11 = unaff_x19[1];
    }
  }
  if ((uVar11 & uVar11 - 1) == 0) {
    uVar4 = uVar11 - 1 & param_3;
  }
  else {
    uVar4 = param_3;
    if (uVar11 <= param_3) {
      func_0x00010b2240a8();
      uVar4 = unaff_x25;
    }
  }
LAB_10b221d74:
  puVar10 = *(undefined8 **)(*unaff_x19 + uVar4 * 8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x00010b223e90();
    if (extraout_x9_01 != 0) {
      uVar6 = *(ulong *)(extraout_x9_01 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar6 = uVar6 & uVar11 - 1;
      }
      else if (uVar11 <= uVar6) {
        uVar4 = 0;
        if (uVar11 != 0) {
          uVar4 = uVar6 / uVar11;
        }
        uVar6 = uVar6 - uVar4 * uVar11;
      }
      *(undefined8 **)(extraout_x8_02 + uVar6 * 8) = unaff_x20;
    }
  }
  else {
    *unaff_x20 = *puVar10;
    *puVar10 = unaff_x20;
  }
  func_0x00010b223e48();
  FUN_10b221e0c();
LAB_10b221dcc:
  return unaff_x20 + 5;
}



/* Entry: 10b221df4; end: 10b221e0b;  */

void FUN_10b221df4(long *param_1,long param_2)

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



/* Entry: 10b221e0c; end: 10b221ebf;  */

long * FUN_10b221e0c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010b221e4c(lVar1 + 0x10);
    }
    func_0x00010b223c9c();
  }
  return param_1;
}



/* Entry: 10b221ec0; end: 10b221fff;  */

void FUN_10b221ec0(long *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long lVar2;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [88];
  
  if (param_3 != 0) {
    do {
      func_0x00010b2235d0();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b2235d0();
    } while (extraout_w10_00 != 0);
  }
  lVar2 = *param_1;
  puVar1 = auStack_88;
  uStack_d0 = param_2;
  lStack_c8 = param_3;
  FUN_10b2216fc(puVar1,&uStack_d0);
  func_0x00010b223d30();
  (*extraout_x8)();
  FUN_10b221834(&uStack_a0,auStack_88,puVar1);
  func_0x00010b2240d4();
  __ZNSt3__119__shared_mutex_base4lockEv();
  FUN_10b221b3c(lVar2 + 0x158,param_1 + 1);
  FUN_10b2205f4();
  func_0x00010b223c54();
  uStack_b8 = uStack_98;
  uStack_c0 = uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  func_0x00010b223d90();
  FUN_10b48b188(auStack_88);
  func_0x00010b223f54();
  func_0x00010b223d20();
  func_0x00010b223a3c();
  func_0x00010b223aec();
  return;
}



/* Entry: 10b222000; end: 10b222003;  */

undefined8 * FUN_10b222000(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc8d50;
  func_0x00010b222088(param_1 + 1);
  return param_1;
}



/* Entry: 10b222004; end: 10b222017;  */

void FUN_10b222004(void)

{
  FUN_10b22205c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b222018; end: 10b22205b;  */

void FUN_10b222018(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b223644();
  if (param_3 != 0) {
    do {
      func_0x00010b2235d0();
    } while (extraout_w10 != 0);
  }
  FUN_10b221ec0(param_1 + 8);
  func_0x00010b2238bc();
  return;
}



/* Entry: 10b22205c; end: 10b2220d7;  */

undefined8 * FUN_10b22205c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc8d50;
  func_0x00010b222088(param_1 + 1);
  return param_1;
}



/* Entry: 10b2220d8; end: 10b2220ff;  */

void FUN_10b2220d8(void)

{
  func_0x00010b2237a0();
  func_0x00010b223cc0();
  func_0x00010b223608();
  func_0x00010b2239d8();
  return;
}



/* Entry: 10b222100; end: 10b222123;  */

void FUN_10b222100(void)

{
  func_0x00010b2235b0();
  FUN_10b222164();
  return;
}



/* Entry: 10b222124; end: 10b222163;  */

void FUN_10b222124(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  while (uVar1 = param_3, FUN_10b222188(), (uVar1 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(param_1,param_2);
  }
  return;
}



/* Entry: 10b222164; end: 10b222187;  */

void FUN_10b222164(long param_1)

{
  func_0x00010b223980();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b222188; end: 10b22218f;  */

bool FUN_10b222188(long *param_1)

{
  bool bVar1;
  
  if ((*(byte *)(*param_1 + 0x10) & 1) == 0) {
    bVar1 = *(long *)(*param_1 + 0x88) != 0;
    func_0x00010b223744();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10b222190; end: 10b2221cf;  */

bool FUN_10b222190(long param_1)

{
  bool bVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    bVar1 = *(long *)(param_1 + 0x88) != 0;
    func_0x00010b223744();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10b2221d0; end: 10b2221f7;  */

void FUN_10b2221d0(void)

{
  func_0x00010b2237a0();
  func_0x00010b223cc0();
  func_0x00010b223608();
  func_0x00010b2239d8();
  return;
}



/* Entry: 10b2221f8; end: 10b22221b;  */

void FUN_10b2221f8(void)

{
  func_0x00010b2235b0();
  FUN_10b2223d4();
  return;
}



/* Entry: 10b22221c; end: 10b222257;  */

void FUN_10b22221c(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b223ff0();
  func_0x00010b224110();
  func_0x00010b2223f8();
  *unaff_x20 = &PTR_FUN_110cc8d90;
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 10b222258; end: 10b222293;  */

void FUN_10b222258(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  
  if (param_3 != 0) {
    do {
      func_0x00010b2235d0();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b2235d0();
    } while (extraout_w10_00 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x00010b2238e8();
  return;
}



/* Entry: 10b222294; end: 10b2222d3;  */

bool FUN_10b222294(long param_1)

{
  bool bVar1;
  
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    bVar1 = *(long *)(param_1 + 0xa0) != 0;
    func_0x00010b223744();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10b2222d4; end: 10b2223d3;  */

void FUN_10b2222d4(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [40];
  
  uStack_88 = param_2;
  lStack_80 = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010b2235d0();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b2235d0();
    } while (extraout_w10_00 != 0);
  }
  uStack_78 = param_2;
  lStack_70 = param_3;
  FUN_10b222740(auStack_58,&uStack_78);
  puVar1 = (undefined8 *)(*param_1 + 0x68);
  (*(code *)*puVar1)();
  FUN_10b222828(auStack_68,auStack_58,puVar1);
  FUN_10b48baa0(auStack_58);
  func_0x00010b223f5c();
  FUN_10b223518(auStack_68);
  FUN_10b2223d4(&uStack_78);
  FUN_10b2223d4(&uStack_88);
  return;
}



/* Entry: 10b2223d4; end: 10b222443;  */

void FUN_10b2223d4(long param_1)

{
  func_0x00010b223980();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b222444; end: 10b222447;  */

undefined8 * FUN_10b222444(undefined8 *param_1)

{
  undefined1 auStack_38 [24];
  
  *param_1 = &PTR_FUN_110cc8dd8;
  if (param_1[1] != 0) {
    func_0x00010b22391c();
    func_0x00010b223cc8();
    func_0x00010b223cf0();
    func_0x00010b223c5c();
    __ZNSt9exceptionD2Ev(auStack_38);
  }
  FUN_10b222164(param_1 + 3);
  FUN_10b222164(param_1 + 1);
  return param_1;
}



/* Entry: 10b222448; end: 10b22245b;  */

void FUN_10b222448(void)

{
  FUN_10b2224f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b22245c; end: 10b22245f;  */

undefined8 * FUN_10b22245c(undefined8 *param_1)

{
  undefined1 auStack_38 [24];
  
  *param_1 = &PTR_FUN_110cc8dd8;
  if (param_1[1] != 0) {
    func_0x00010b22391c();
    func_0x00010b223cc8();
    func_0x00010b223cf0();
    func_0x00010b223c5c();
    __ZNSt9exceptionD2Ev(auStack_38);
  }
  FUN_10b222164(param_1 + 3);
  FUN_10b222164(param_1 + 1);
  return param_1;
}



/* Entry: 10b222460; end: 10b222473;  */

void FUN_10b222460(void)

{
  FUN_10b2224f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b222474; end: 10b222477;  */

void FUN_10b222474(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc8df8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b222478; end: 10b22248b;  */

void FUN_10b222478(void)

{
  FUN_10b2224e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b22248c; end: 10b2224e7;  */

long FUN_10b22248c(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (lVar1 != 0) {
    func_0x00010b2236a0();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xa0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x60);
  lVar1 = param_1 + 0x30;
  __ZNSt3__118condition_variableD1Ev(lVar1);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    param_1 = param_1 + 0x18;
    func_0x00010b223980();
    if (param_1 != 0) {
      func_0x000107c278a0();
    }
    return unaff_x19;
  }
  return lVar1;
}



/* Entry: 10b2224e8; end: 10b2224f7;  */

void FUN_10b2224e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2224f8; end: 10b22256f;  */

undefined8 * FUN_10b2224f8(undefined8 *param_1)

{
  undefined1 auStack_38 [24];
  
  *param_1 = &PTR_FUN_110cc8dd8;
  if (param_1[1] != 0) {
    func_0x00010b22391c();
    func_0x00010b223cc8();
    func_0x00010b223cf0();
    func_0x00010b223c5c();
    __ZNSt9exceptionD2Ev(auStack_38);
  }
  FUN_10b222164(param_1 + 3);
  FUN_10b222164(param_1 + 1);
  return param_1;
}



/* Entry: 10b222570; end: 10b2225f3;  */

void FUN_10b222570(undefined8 param_1,long param_2)

{
  func_0x00010b223dc0();
  func_0x00010b223f88();
  func_0x00010b223c64();
  func_0x00010b2238e8();
  func_0x00010b223c94();
  func_0x00010b223c84();
  func_0x00010b223af4();
  if (param_2 == 0) {
    func_0x00010b2237b0();
  }
  else {
    func_0x00010b22407c();
    func_0x00010b2237c4();
    func_0x00010b2235e0();
  }
  func_0x00010b223a24();
  return;
}



/* Entry: 10b2225f4; end: 10b2225f7;  */

undefined8 * FUN_10b2225f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc8e48;
  FUN_10b2229b8(param_1 + 1);
  return param_1;
}



/* Entry: 10b2225f8; end: 10b22260b;  */

void FUN_10b2225f8(void)

{
  FUN_10b222650();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b22260c; end: 10b22264f;  */

void FUN_10b22260c(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b223644();
  if (param_3 != 0) {
    do {
      func_0x00010b2235d0();
    } while (extraout_w10 != 0);
  }
  FUN_10b2222d4(param_1 + 8);
  func_0x00010b2238b4();
  return;
}



/* Entry: 10b222650; end: 10b22267b;  */

undefined8 * FUN_10b222650(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc8e48;
  FUN_10b2229b8(param_1 + 1);
  return param_1;
}



/* Entry: 10b22267c; end: 10b22271b;  */

void FUN_10b22267c(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  
  func_0x00010b223dc0();
  func_0x00010b223f88();
  func_0x00010b223c64();
  func_0x00010b2238e8();
  func_0x00010b223c94();
  func_0x00010b2240c8(0);
  if ((bool)in_ZR) {
    FUN_10b22271c();
  }
  else {
    func_0x00010b223e78();
  }
  func_0x00010b223be4();
  if (param_2 == 0) {
    func_0x00010b2237b0();
  }
  else {
    func_0x00010b22407c();
    func_0x00010b2237c4();
    func_0x00010b2235e0();
  }
  func_0x00010b223a24();
  return;
}



/* Entry: 10b22271c; end: 10b22273f;  */

void FUN_10b22271c(void)

{
  func_0x00010b2235b0();
  FUN_10b223518();
  return;
}



/* Entry: 10b222740; end: 10b222827;  */

void FUN_10b222740(void)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 extraout_x9;
  int extraout_w10;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  ulong uStack_30;
  long lStack_28;
  
  func_0x00010b22402c();
  FUN_10b2221d0(auStack_40,extraout_x9,auStack_50);
  FUN_10b2221f8(&uStack_30,auStack_40);
  FUN_10b2223d4(auStack_40);
  func_0x00010b223a34();
  func_0x00010b223e38(uStack_30 + 0x60);
  __ZNSt3__15mutex4lockEv();
  uVar1 = uStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x00010b2235d0();
    } while (extraout_w10 != 0);
  }
  while (uVar3 = uVar1, FUN_10b222294(), (uVar3 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(uVar1 + 0x30,auStack_40);
  }
  func_0x00010b223ae4();
  if (*(long *)(uStack_30 + 0xa0) != 0) {
    func_0x00010b223fa8();
    func_0x00010b223fa0();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b2227fc);
    (*pcVar2)();
  }
  FUN_10b2228c8();
  func_0x00010b223a1c();
  FUN_10b2223d4(&uStack_30);
  return;
}



/* Entry: 10b222828; end: 10b2228c7;  */

void FUN_10b222828(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110cc8e98;
  func_0x00010b2229a0(auStack_58,param_2);
  func_0x00010b2229a0(puVar1 + 3,auStack_58);
  puVar1[8] = param_3;
  FUN_10b48baa0(auStack_58);
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}



/* Entry: 10b2228c8; end: 10b2228d3;  */

undefined8 * FUN_10b2228c8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110cec258;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_10b222918(param_1,param_2);
  return param_1;
}



/* Entry: 10b2228d4; end: 10b222917;  */

undefined8 * FUN_10b2228d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110cec258;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  FUN_10b222918(param_1,param_3);
  return param_1;
}



/* Entry: 10b222918; end: 10b22297b;  */

long FUN_10b222918(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_10b48bcd8(param_1);
    }
    else {
      func_0x00010b48bca0(param_1);
    }
  }
  return param_1;
}



/* Entry: 10b22297c; end: 10b22297f;  */

void FUN_10b22297c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc8e98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b222980; end: 10b222993;  */

void FUN_10b222980(void)

{
  func_0x00010b2229ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b222994; end: 10b2229b7;  */

long FUN_10b222994(long param_1)

{
  func_0x000107c28090(param_1 + 0x20);
  func_0x00010598e0e4(param_1 + 0x28);
  return param_1 + 0x18;
}



/* Entry: 10b2229b8; end: 10b222a0b;  */

undefined8 FUN_10b2229b8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b2229e0(param_1 + 0x10);
  func_0x00010b223980();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b222a0c; end: 10b222b53;  */

void FUN_10b222a0c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar2;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [40];
  
  lVar1 = param_1;
  if (param_3 != 0) {
    do {
      func_0x00010b2235d0();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b2235d0();
    } while (extraout_w10_00 != 0);
  }
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010b223f70();
  func_0x00010b223d30();
  (*extraout_x8)();
  FUN_10b222828(auStack_68,auStack_58,lVar1);
  FUN_10b22271c(param_1 + 0x20,auStack_68);
  FUN_10b223518(auStack_68);
  func_0x00010b2240e8();
  __ZNSt3__119__shared_mutex_base4lockEv();
  FUN_10b222be0(lVar2 + 0x158,param_1);
  FUN_10b221018();
  func_0x00010b223d54();
  if (*(long *)(param_1 + 0x28) != 0) {
    do {
      func_0x00010b2235d0();
    } while (extraout_w10_01 != 0);
  }
  func_0x00010b223d28();
  func_0x00010b223f5c();
  func_0x00010b223d18();
  func_0x00010b223a34();
  func_0x00010b223ae4();
  return;
}



/* Entry: 10b222b54; end: 10b222b5b;  */

void FUN_10b222b54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_2[6] = 0;
  param_2[7] = 0;
  return;
}



/* Entry: 10b222b5c; end: 10b222b6f;  */

void FUN_10b222b5c(void)

{
  FUN_10b222bb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b222b70; end: 10b222bb3;  */

void FUN_10b222b70(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b223644();
  if (param_3 != 0) {
    do {
      func_0x00010b2235d0();
    } while (extraout_w10 != 0);
  }
  FUN_10b222a0c(param_1 + 8);
  func_0x00010b2238b4();
  return;
}



/* Entry: 10b222bb4; end: 10b222bdf;  */

undefined8 * FUN_10b222bb4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cc8ee8;
  func_0x00010b222f14(param_1 + 1);
  return param_1;
}



/* Entry: 10b222be0; end: 10b222e97;  */

undefined8 * FUN_10b222be0(float param_1,float param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar6;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long extraout_x9_01;
  long *extraout_x10;
  long *plVar7;
  long *extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *plVar8;
  ulong uVar9;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar10;
  ulong unaff_x22;
  long *unaff_x23;
  ulong uVar11;
  ulong unaff_x25;
  
  func_0x00010b223de8();
  uVar11 = unaff_x19[1];
  uVar6 = param_3;
  if (uVar11 != 0) {
    unaff_x23 = (long *)(uVar11 - 1);
    if ((uVar11 & (ulong)unaff_x23) == 0) {
      unaff_x25 = (ulong)unaff_x23 & param_3;
    }
    else {
      unaff_x25 = param_3;
      if (uVar11 <= param_3) {
        func_0x00010b2240a8();
      }
    }
    puVar10 = *(undefined8 **)(*unaff_x19 + unaff_x25 * 8);
    unaff_x20 = (undefined8 *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (undefined8 *)*puVar10;
          if (unaff_x20 == (undefined8 *)0x0) goto LAB_10b222c88;
          uVar4 = unaff_x20[1];
          puVar10 = unaff_x20;
          if (uVar4 != param_3) break;
          func_0x00010b223f38();
          if ((uVar6 & 1) != 0) goto LAB_10b222e70;
        }
        if ((uVar11 & (ulong)unaff_x23) == 0) {
          uVar4 = uVar4 & (ulong)unaff_x23;
        }
        else if (uVar11 <= uVar4) {
          uVar9 = 0;
          if (uVar11 != 0) {
            uVar9 = uVar4 / uVar11;
          }
          uVar4 = uVar4 - uVar9 * uVar11;
        }
      } while (uVar4 == unaff_x25);
    }
  }
LAB_10b222c88:
  func_0x00010b223f14();
  func_0x00010b224124();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x00010b223b58();
  if ((uVar11 != 0) && (uVar4 = unaff_x25, param_1 <= param_2 * (float)uVar11)) goto LAB_10b222e18;
  func_0x00010b223e60();
  bVar3 = uVar11 == 3;
  func_0x00010b223bb8();
  if (bVar3) {
    unaff_x22 = 2;
  }
  else if ((unaff_x22 & extraout_x8) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar6 = unaff_x22;
  }
  uVar11 = unaff_x19[1];
  bVar3 = uVar11 <= unaff_x22;
  if (bVar3 && unaff_x22 != uVar11) {
LAB_10b222cec:
    if (unaff_x22 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b222e84);
      (*pcVar2)();
    }
    __Znwm(unaff_x22 << 3);
    FUN_10b222e98();
    unaff_x19[1] = unaff_x22;
    lVar5 = *unaff_x19;
    for (uVar6 = 0; unaff_x22 != uVar6; uVar6 = uVar6 + 1) {
      *(undefined8 *)(lVar5 + uVar6 * 8) = 0;
    }
    uVar11 = unaff_x22;
    if (*unaff_x23 != 0) {
      func_0x00010b224174();
      func_0x00010b22414c();
      lVar5 = extraout_x8_00;
      uVar6 = extraout_x9;
      plVar8 = extraout_x10;
      uVar4 = extraout_x11;
      while (plVar7 = plVar8, plVar8 = (long *)*plVar7, plVar8 != (long *)0x0) {
        uVar9 = plVar8[1];
        if ((unaff_x22 & uVar6) == 0) {
          uVar9 = uVar9 & uVar6;
        }
        else if (unaff_x22 <= uVar9) {
          uVar1 = 0;
          if (unaff_x22 != 0) {
            uVar1 = uVar9 / unaff_x22;
          }
          uVar9 = uVar9 - uVar1 * unaff_x22;
        }
        if (uVar9 != uVar4) {
          if (*(long *)(lVar5 + uVar9 * 8) == 0) {
            *(long **)(lVar5 + uVar9 * 8) = plVar7;
            uVar4 = uVar9;
          }
          else {
            func_0x00010b223b98();
            lVar5 = extraout_x8_01;
            uVar6 = extraout_x9_00;
            plVar8 = extraout_x10_00;
            uVar4 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (!bVar3) {
    func_0x00010b223bf4();
    if ((bVar3) && ((uVar11 & uVar11 - 1) == 0)) {
      func_0x00010b223b78();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (unaff_x22 <= uVar6) {
      unaff_x22 = uVar6;
    }
    if (unaff_x22 < uVar11) {
      if (unaff_x22 != 0) goto LAB_10b222cec;
      FUN_10b222e98();
      unaff_x19[1] = 0;
      uVar11 = 0;
    }
    else {
      uVar11 = unaff_x19[1];
    }
  }
  if ((uVar11 & uVar11 - 1) == 0) {
    uVar4 = uVar11 - 1 & param_3;
  }
  else {
    uVar4 = param_3;
    if (uVar11 <= param_3) {
      func_0x00010b2240a8();
      uVar4 = unaff_x25;
    }
  }
LAB_10b222e18:
  puVar10 = *(undefined8 **)(*unaff_x19 + uVar4 * 8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x00010b223e90();
    if (extraout_x9_01 != 0) {
      uVar6 = *(ulong *)(extraout_x9_01 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar6 = uVar6 & uVar11 - 1;
      }
      else if (uVar11 <= uVar6) {
        uVar4 = 0;
        if (uVar11 != 0) {
          uVar4 = uVar6 / uVar11;
        }
        uVar6 = uVar6 - uVar4 * uVar11;
      }
      *(undefined8 **)(extraout_x8_02 + uVar6 * 8) = unaff_x20;
    }
  }
  else {
    *unaff_x20 = *puVar10;
    *puVar10 = unaff_x20;
  }
  func_0x00010b223e48();
  FUN_10b222eb0();
LAB_10b222e70:
  return unaff_x20 + 5;
}



/* Entry: 10b222e98; end: 10b222eaf;  */

void FUN_10b222e98(long *param_1,long param_2)

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



/* Entry: 10b222eb0; end: 10b222f63;  */

long * FUN_10b222eb0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010b222ef0(lVar1 + 0x10);
    }
    func_0x00010b223c9c();
  }
  return param_1;
}



/* Entry: 10b222f64; end: 10b223087;  */

void FUN_10b222f64(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long lVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [40];
  
  plVar1 = param_1;
  if (param_3 != 0) {
    do {
      func_0x00010b2235d0();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b2235d0();
    } while (extraout_w10_00 != 0);
  }
  lVar2 = *param_1;
  func_0x00010b223f70();
  func_0x00010b223d30();
  (*extraout_x8)();
  FUN_10b222828(&uStack_70,auStack_58,plVar1);
  func_0x00010b2240d4();
  __ZNSt3__119__shared_mutex_base4lockEv();
  FUN_10b222be0(lVar2 + 0x158,param_1 + 1);
  FUN_10b221018();
  func_0x00010b223c54();
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x00010b223d88();
  func_0x00010b223d28();
  func_0x00010b223f5c();
  func_0x00010b223d18();
  func_0x00010b223a34();
  func_0x00010b223ae4();
  return;
}



/* Entry: 10b223088; end: 10b22308b;  */

undefined8 * FUN_10b223088(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc8f28;
  func_0x00010b223110(param_1 + 1);
  return param_1;
}



/* Entry: 10b22308c; end: 10b22309f;  */

void FUN_10b22308c(void)

{
  FUN_10b2230e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2230a0; end: 10b2230e3;  */

void FUN_10b2230a0(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b223644();
  if (param_3 != 0) {
    do {
      func_0x00010b2235d0();
    } while (extraout_w10 != 0);
  }
  FUN_10b222f64(param_1 + 8);
  func_0x00010b2238b4();
  return;
}


