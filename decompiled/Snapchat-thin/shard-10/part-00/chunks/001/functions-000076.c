/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107435484; end: 1074354a3;  */

void FUN_107435484(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x00010743b63c();
  func_0x00010743b73c(param_1,unaff_x19 + 8);
  FUN_10743b554(&PTR_SUB_1109af6b0);
  return;
}



/* Entry: 1074354a4; end: 1074354c3;  */

void FUN_1074354a4(long param_1,undefined8 param_2)

{
  func_0x00010743b73c(param_2,param_1 + 8);
  FUN_10743b554(&PTR_SUB_1109af6b0);
  return;
}



/* Entry: 1074354c4; end: 1074355c7;  */

void FUN_1074354c4(int param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined1 *unaff_x23;
  long unaff_x24;
  undefined1 auStack_118 [56];
  undefined1 auStack_e0 [128];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010743c434();
  func_0x00010743b2e8();
  func_0x00010743b8a0();
  func_0x00010743c1dc();
  if (param_1 != 0) {
    func_0x00010743c408();
    unaff_x23 = &stack0xfffffffffffffed0;
    func_0x00010743ba50(auStack_118);
    func_0x00010743be0c();
    lVar1 = unaff_x24 + 0x18;
    func_0x000107435644(lVar1,&stack0xfffffffffffffed0);
    uStack_60 = 0;
    func_0x00010743bb3c();
    func_0x00010743bd0c(&PTR_SUB_1109af730);
    *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(unaff_x24 + 0x28);
    lVar1 = lVar1 + 0x38;
    func_0x000104c2fe00(lVar1,unaff_x24 + 0x30);
    func_0x00010743bf9c();
    func_0x00010743b728();
    func_0x00010743bb28();
    if (lVar1 != 0) {
      func_0x00010743b2a4();
      func_0x00010743c12c();
      if (lVar1 != 0) {
        func_0x00010743b2a4();
      }
    }
    func_0x00010743bb20();
    func_0x000107435620(auStack_e0);
    func_0x000104c2f714();
  }
  func_0x00010743b7fc();
  func_0x00010743b264(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010743bb20();
  func_0x000107435620(auStack_e0);
  func_0x000104c2f714(unaff_x23 + 0x18);
  func_0x00010743b7fc();
  func_0x00010743b660();
  func_0x00010743b95c();
  func_0x00010743b7c8();
  func_0x00010743b3cc();
  return;
}



/* Entry: 1074355c8; end: 1074355ef;  */

void FUN_1074355c8(undefined8 param_1)

{
  func_0x00010743b95c();
  func_0x00010743b7c8(param_1,&PTR_DAT_1109af820);
  func_0x00010743b3cc();
  return;
}



/* Entry: 1074355f0; end: 1074355fb;  */

undefined ** FUN_1074355f0(void)

{
  return &PTR_DAT_1109af820;
}



/* Entry: 1074355fc; end: 1074356a3;  */

void FUN_1074355fc(void)

{
  func_0x00010743b73c();
  FUN_10743b554(&PTR_SUB_1109af6b0);
  return;
}



/* Entry: 1074356a4; end: 1074356b7;  */

void FUN_1074356a4(void)

{
  func_0x000107435678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074356b8; end: 1074356db;  */

undefined8 FUN_1074356b8(void)

{
  undefined8 unaff_x20;
  
  func_0x00010743bb3c();
  func_0x00010743b73c();
  func_0x00010743b340(&PTR_SUB_1109af730);
  func_0x000107435644();
  return unaff_x20;
}



/* Entry: 1074356dc; end: 1074356ff;  */

void FUN_1074356dc(long param_1,undefined8 param_2)

{
  func_0x00010743b73c(param_2,param_1 + 8);
  func_0x00010743b340(&PTR_SUB_1109af730);
  func_0x000107435644();
  return;
}



/* Entry: 107435700; end: 1074358bb;  */

void FUN_107435700(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined8 extraout_x8;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_398 [184];
  long lStack_2e0;
  undefined1 auStack_2d8 [128];
  undefined1 auStack_258 [56];
  undefined4 auStack_220 [6];
  undefined4 auStack_208 [4];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1d8;
  undefined1 uStack_1d4;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 *puStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_58;
  
  func_0x00010743be78();
  func_0x00010743b2e8();
  puVar3 = auStack_398;
  uStack_58 = extraout_x8;
  func_0x00010743bc40();
  func_0x00010743bc38();
  if ((int)puVar3 != 0) {
    puVar1 = *(undefined8 **)(unaff_x20 + 0x28);
    lVar2 = *(long *)(unaff_x20 + 0x30);
    lVar5 = *(long *)(unaff_x20 + 0x20);
    __ZNSt3__16chrono12steady_clock3nowEv();
    lStack_2e0 = ((long)puVar3 - lVar2) / 1000;
    auStack_220[0] = 0x5f;
    auStack_208[0] = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    func_0x00010743bffc();
    uStack_1f8 = 0;
    uStack_1d8 = 0;
    uStack_1d4 = 1;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d0 = 0;
    uStack_128 = *puVar1;
    uStack_120 = 3;
    func_0x00010743c284();
    func_0x000107262330(auStack_220);
    lStack_2e0 = lVar5;
    func_0x00010743bf4c(auStack_2d8);
    func_0x000104c2fe00(auStack_258,unaff_x20 + 0x38);
    func_0x00010743bbe8();
    puVar4 = auStack_208;
    FUN_107435968(puVar4,&lStack_2e0);
    puStack_130 = (undefined4 *)0x0;
    func_0x00010743ba68();
    func_0x00010743b698(auStack_220);
    func_0x00010743b864();
    func_0x00010743b8e8();
    puStack_130 = puVar4;
    func_0x00010743b8d8();
    func_0x00010743b42c();
    func_0x00010743c3f0();
    func_0x00010743bcac();
    func_0x00010743bcb8();
    func_0x00010743bc10();
    func_0x00010743bca4();
    FUN_107435928(auStack_220);
    func_0x000107435948(&lStack_2e0);
  }
  func_0x00010743b7fc();
  func_0x00010743b264(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010743bcb8();
    func_0x00010743bc10();
    func_0x00010743bca4();
    FUN_107435928(auStack_220);
    func_0x000107435948(&lStack_2e0);
    do {
      func_0x00010743b7fc();
      func_0x00010743b660();
    } while( true );
  }
  return;
}



/* Entry: 1074358bc; end: 1074358e3;  */

void FUN_1074358bc(undefined8 param_1)

{
  func_0x00010743b95c();
  func_0x00010743b7c8(param_1,&PTR_DAT_1109af810);
  func_0x00010743b3cc();
  return;
}



/* Entry: 1074358e4; end: 1074358ef;  */

undefined ** FUN_1074358e4(void)

{
  return &PTR_DAT_1109af810;
}



/* Entry: 1074358f0; end: 107435927;  */

void FUN_1074358f0(void)

{
  func_0x00010743b73c();
  func_0x00010743b340(&PTR_SUB_1109af730);
  func_0x000107435644();
  return;
}



/* Entry: 107435928; end: 107435967;  */

long FUN_107435928(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010743bb14();
  func_0x000107435948();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 107435968; end: 10743598b;  */

void FUN_107435968(void)

{
  func_0x00010743b320();
  func_0x00010743b8bc();
  return;
}



/* Entry: 10743598c; end: 1074359b7;  */

undefined8 * FUN_10743598c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109af7a0;
  FUN_107435928(param_1 + 1);
  return param_1;
}



/* Entry: 1074359b8; end: 1074359cb;  */

void FUN_1074359b8(void)

{
  FUN_10743598c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074359cc; end: 1074359ff;  */

undefined8 FUN_1074359cc(undefined8 param_1)

{
  func_0x00010743b8f4();
  FUN_107435c64();
  return param_1;
}



/* Entry: 107435a00; end: 107435a23;  */

void FUN_107435a00(long param_1,undefined8 param_2)

{
  func_0x00010743b804(param_2,param_1 + 8);
  func_0x00010743b340(&PTR_FUN_1109af7a0);
  func_0x00010743c4c0();
  FUN_107435968();
  return;
}



/* Entry: 107435a24; end: 107435c2f;  */

void FUN_107435a24(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long *plVar3;
  undefined1 *unaff_x21;
  undefined8 uVar4;
  undefined1 auStack_348 [16];
  long alStack_338 [2];
  undefined1 auStack_328 [8];
  undefined1 auStack_320 [72];
  undefined4 auStack_2d8 [2];
  undefined8 auStack_2d0 [2];
  undefined4 uStack_2c0;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_290;
  undefined1 uStack_28c;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 *puStack_268;
  undefined1 auStack_260 [256];
  undefined1 auStack_160 [264];
  undefined8 uStack_58;
  
  func_0x00010743b2e8();
  iVar1 = (int)auStack_348;
  uStack_58 = extraout_x8;
  func_0x00010743be24();
  func_0x00010743be64();
  if (iVar1 != 0) {
    unaff_x21 = *(undefined1 **)(param_1 + 0x20);
    auStack_2d8[0] = 0x60;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    func_0x00010743bffc();
    uStack_2b0 = 0;
    uStack_290 = 0;
    uStack_28c = 1;
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_288 = 0;
    FUN_10743cc34(&puStack_268,auStack_2d8,1);
    FUN_10743d7bc(auStack_160,&puStack_268);
    func_0x000107288cd8(&puStack_268);
    func_0x000107262330(auStack_2d8);
    plVar3 = *(long **)(unaff_x21 + 0x20);
    func_0x00010724ef84(&puStack_268,param_1 + 0xa8);
    (**(code **)(*plVar3 + 0x10))(auStack_328,plVar3,param_1 + 0x28,&puStack_268);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_268);
    func_0x00010724bb70(alStack_338,unaff_x21 + 0x198);
    if (alStack_338[0] != 0) {
      uVar4 = *(undefined8 *)(unaff_x21 + 400);
      unaff_x21 = auStack_328;
      puVar2 = auStack_2d0;
      FUN_10743aedc(puVar2,auStack_320);
      func_0x00010743bb3c();
      FUN_10743aedc(auStack_260,auStack_2d0);
      *puVar2 = &PTR_DAT_1109b0020;
      puVar2[1] = uVar4;
      puVar2[2] = FUN_107432750;
      puVar2[3] = 0;
      FUN_10743aedc(puVar2 + 5,auStack_260);
      FUN_1073f01e4(auStack_260);
      puStack_268 = puVar2;
      FUN_1073f01e4(auStack_2d0);
      FUN_1073ae140(alStack_338[0],&puStack_268);
      puVar2 = puStack_268;
      puStack_268 = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        func_0x00010743b2a4();
      }
    }
    func_0x00010724bcd8(alStack_338);
    FUN_1073f01e4(auStack_320);
    FUN_10743d7e4();
  }
  func_0x00010743b7fc();
  func_0x00010743b264(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puStack_268;
  puStack_268 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010743b2a4();
  }
  func_0x00010724bcd8(alStack_338);
  FUN_1073f01e4(unaff_x21 + 8);
  FUN_10743d7e4(auStack_160);
  func_0x00010743b7fc();
  func_0x00010743b660();
  func_0x00010743b95c();
  func_0x00010743b7c8();
  func_0x00010743b3cc();
  return;
}



/* Entry: 107435c30; end: 107435c57;  */

void FUN_107435c30(undefined8 param_1)

{
  func_0x00010743b95c();
  func_0x00010743b7c8(param_1,&PTR_DAT_1109af800);
  func_0x00010743b3cc();
  return;
}



/* Entry: 107435c58; end: 107435c63;  */

undefined ** FUN_107435c58(void)

{
  return &PTR_DAT_1109af800;
}



/* Entry: 107435c64; end: 107435c9f;  */

void FUN_107435c64(void)

{
  func_0x00010743b804();
  func_0x00010743b340(&PTR_FUN_1109af7a0);
  func_0x00010743c4c0();
  FUN_107435968();
  return;
}



/* Entry: 107435ca0; end: 107435cd3;  */

void FUN_107435ca0(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010743bcf0();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010743b824(uVar1);
  return;
}



/* Entry: 107435cd4; end: 107435ceb;  */

void FUN_107435cd4(void)

{
  func_0x00010743b8c8();
  return;
}



/* Entry: 107435cec; end: 107435e6b;  */

void FUN_107435cec(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  long *extraout_x9;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar3 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    func_0x00010743bafc((float)(ulong)param_1[3],(int)param_1[4]);
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      FUN_10743b20c();
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_107435e6c(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_107435e6c(param_1,lVar2);
    plVar3 = (long *)0x0;
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    while (param_2 != plVar3) {
      func_0x00010743baf0();
      lVar2 = extraout_x8;
      plVar3 = extraout_x9;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar5 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar5 / (ulong)param_2;
      }
      plVar7 = plVar5;
      if (param_2 <= plVar5) {
        plVar7 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      if (((ulong)param_2 & uVar4) == 0) {
        plVar7 = (long *)((ulong)plVar5 & uVar4);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = param_1 + 2;
      while (plVar5 = plVar3, plVar3 = (long *)*plVar5, plVar3 != (long *)0x0) {
        plVar6 = (long *)plVar3[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar5;
            plVar7 = plVar6;
          }
          else {
            *plVar5 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar2 + (long)plVar6 * 8);
            **(long **)(lVar2 + (long)plVar6 * 8) = (long)plVar3;
            plVar3 = plVar5;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar3;
  *plVar3 = (long)plVar5;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107435e6c; end: 107435e83;  */

void FUN_107435e6c(long *param_1,long param_2)

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



/* Entry: 107435e84; end: 107435ea3;  */

void FUN_107435e84(void)

{
  func_0x00010743ba18();
  FUN_107435ea4();
  return;
}



/* Entry: 107435ea4; end: 107435ebb;  */

void FUN_107435ea4(long *param_1,long param_2)

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



/* Entry: 107435ebc; end: 107435eef;  */

void FUN_107435ebc(void)

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



/* Entry: 107435ef0; end: 10743612f;  */

long * FUN_107435ef0(ulong param_1)

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
          if (unaff_x20 == (long *)0x0) goto LAB_107435f78;
          func_0x00010743c048();
          if (!(bool)in_ZR) break;
          func_0x00010743b818();
          if ((param_1 & 1) != 0) goto LAB_107436110;
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
LAB_107435f78:
  func_0x00010743ba58();
  func_0x00010743b288();
  func_0x00010743c370();
  *(undefined4 *)(unaff_x20 + 0xb) = 0;
  func_0x00010743b584();
  if ((unaff_x24 != 0) && (func_0x00010743b688(), !(bool)in_NG)) goto LAB_1074360d0;
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
        if (unaff_x22 != 0) goto LAB_107435fd4;
        func_0x00010743c108();
        FUN_1074361f4();
        func_0x00010743c150();
      }
    }
  }
  else {
LAB_107435fd4:
    if (unaff_x22 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x107436124);
      (*pcVar1)();
    }
    __Znwm(unaff_x22 << 3);
    FUN_1074361f4();
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
LAB_1074360d0:
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
  func_0x000107434c2c();
LAB_107436110:
  return unaff_x20 + 9;
}



/* Entry: 107436130; end: 1074361cb;  */

long FUN_107436130(long param_1)

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



/* Entry: 1074361cc; end: 1074361f3;  */

undefined8 * FUN_1074361cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 1074361f4; end: 10743620b;  */

void FUN_1074361f4(long *param_1,long param_2)

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



/* Entry: 10743620c; end: 107436233;  */

undefined8 FUN_10743620c(undefined8 param_1)

{
  func_0x00010743bbcc(&PTR_FUN_1109af840);
  return param_1;
}



/* Entry: 107436234; end: 107436247;  */

void FUN_107436234(void)

{
  FUN_10743620c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107436248; end: 107436267;  */

void FUN_107436248(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x00010743b63c();
  func_0x00010743b73c(param_1,unaff_x19 + 8);
  FUN_10743b554(&PTR_FUN_1109af840);
  return;
}



/* Entry: 107436268; end: 107436287;  */

void FUN_107436268(long param_1,undefined8 param_2)

{
  func_0x00010743b73c(param_2,param_1 + 8);
  FUN_10743b554(&PTR_FUN_1109af840);
  return;
}



/* Entry: 107436288; end: 107436313;  */

void FUN_107436288(void)

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
    FUN_107434ad0(auStack_a0);
    func_0x00010743b9a0();
    func_0x0001074329c4(auStack_88,lVar2 + 0x50);
    FUN_10743636c(unaff_x20 + 8);
    func_0x000107435084(auStack_a0);
  }
  func_0x00010743b890();
  func_0x00010743b24c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010743bd3c();
  FUN_10743636c();
  func_0x000107435084(auStack_a0);
  func_0x00010743b890();
  func_0x00010743b660();
  func_0x00010743b95c();
  func_0x00010743b7c8();
  func_0x00010743b3cc();
  return;
}



/* Entry: 107436314; end: 10743633b;  */

void FUN_107436314(undefined8 param_1)

{
  func_0x00010743b95c();
  func_0x00010743b7c8(param_1,&PTR_DAT_1109af8c0);
  func_0x00010743b3cc();
  return;
}



/* Entry: 10743633c; end: 107436347;  */

undefined ** FUN_10743633c(void)

{
  return &PTR_DAT_1109af8c0;
}



/* Entry: 107436348; end: 10743636b;  */

void FUN_107436348(void)

{
  func_0x00010743b73c();
  FUN_10743b554(&PTR_FUN_1109af840);
  return;
}



/* Entry: 10743636c; end: 1074363af;  */

void FUN_10743636c(long param_1)

{
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    func_0x00010743b5c8((&PTR_FUN_1109af8b0)[*(uint *)(param_1 + 0x40)]);
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 1074363b0; end: 1074363bf;  */

void FUN_1074363b0(undefined8 param_1,long param_2)

{
  func_0x00010743bdf8();
  if (param_2 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1074363c0; end: 10743641b;  */

void FUN_1074363c0(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010743bcf0();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010743b824(uVar1);
  return;
}



/* Entry: 10743641c; end: 10743642f;  */

void FUN_10743641c(void)

{
  func_0x0001074363f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107436430; end: 10743644f;  */

void FUN_107436430(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x00010743b63c();
  func_0x00010743b73c(param_1,unaff_x19 + 8);
  FUN_10743b554(&PTR_SUB_1109af8e0);
  return;
}



/* Entry: 107436450; end: 10743646f;  */

void FUN_107436450(long param_1,undefined8 param_2)

{
  func_0x00010743b73c(param_2,param_1 + 8);
  FUN_10743b554(&PTR_SUB_1109af8e0);
  return;
}



/* Entry: 107436470; end: 10743656b;  */

void FUN_107436470(int param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  long unaff_x24;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [56];
  undefined1 auStack_e0 [96];
  undefined8 uStack_80;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010743c434();
  func_0x00010743b2e8();
  func_0x00010743b8a0();
  func_0x00010743c1dc();
  if (param_1 != 0) {
    func_0x00010743c408();
    func_0x00010743ba50(auStack_120);
    func_0x00010743be0c();
    lVar1 = unaff_x24 + 0x18;
    func_0x0001074365e8(lVar1,auStack_130);
    uStack_60 = 0;
    func_0x00010743bb3c();
    lVar2 = lVar1;
    func_0x00010743bd0c(&PTR_SUB_1109af950);
    lVar2 = lVar2 + 0x30;
    func_0x000104c2fe00(lVar2,unaff_x24 + 0x28);
    *(undefined8 *)(lVar1 + 0x68) = uStack_80;
    func_0x00010743bf9c();
    func_0x00010743b728();
    func_0x00010743bb28();
    if (lVar2 != 0) {
      func_0x00010743b2a4();
      func_0x00010743c12c();
      if (lVar2 != 0) {
        func_0x00010743b2a4();
      }
    }
    func_0x00010743bb20();
    func_0x0001074365c4();
    func_0x00010743be04();
  }
  func_0x00010743b7fc();
  func_0x00010743b264(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010743bb20();
  func_0x0001074365c4(auStack_e0);
  func_0x00010743be04();
  func_0x00010743b7fc();
  func_0x00010743b660();
  func_0x00010743b95c();
  func_0x00010743b7c8();
  func_0x00010743b3cc();
  return;
}



/* Entry: 10743656c; end: 107436593;  */

void FUN_10743656c(undefined8 param_1)

{
  func_0x00010743b95c();
  func_0x00010743b7c8(param_1,&PTR_DAT_1109afa40);
  func_0x00010743b3cc();
  return;
}



/* Entry: 107436594; end: 10743659f;  */

undefined ** FUN_107436594(void)

{
  return &PTR_DAT_1109afa40;
}



/* Entry: 1074365a0; end: 107436643;  */

void FUN_1074365a0(void)

{
  func_0x00010743b73c();
  FUN_10743b554(&PTR_SUB_1109af8e0);
  return;
}



/* Entry: 107436644; end: 107436657;  */

void FUN_107436644(void)

{
  func_0x000107436618();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107436658; end: 10743667b;  */

undefined8 FUN_107436658(void)

{
  undefined8 unaff_x20;
  
  func_0x00010743bb3c();
  func_0x00010743b73c();
  func_0x00010743b340(&PTR_SUB_1109af950);
  func_0x0001074365e8();
  return unaff_x20;
}



/* Entry: 10743667c; end: 10743669f;  */

void FUN_10743667c(long param_1,undefined8 param_2)

{
  func_0x00010743b73c(param_2,param_1 + 8);
  func_0x00010743b340(&PTR_SUB_1109af950);
  func_0x0001074365e8();
  return;
}



/* Entry: 1074366a0; end: 1074367df;  */

void FUN_1074366a0(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long unaff_x20;
  undefined8 uVar3;
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
    uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
    FUN_10743684c(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x20));
    uStack_2d0 = uVar3;
    func_0x00010743bf4c(auStack_2c8);
    func_0x000104c2fe00(auStack_248,unaff_x20 + 0x30);
    func_0x00010743bbe8();
    puVar2 = auStack_1f8;
    FUN_107436928(puVar2,&uStack_2d0);
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
    FUN_1074368e8(auStack_210);
    func_0x000107436908();
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
  FUN_1074368e8(auStack_210);
  func_0x000107436908(&uStack_2d0);
  func_0x00010743b7fc();
  func_0x00010743b660();
  func_0x00010743b95c();
  func_0x00010743b7c8();
  func_0x00010743b3cc();
  return;
}



/* Entry: 1074367e0; end: 107436807;  */

void FUN_1074367e0(undefined8 param_1)

{
  func_0x00010743b95c();
  func_0x00010743b7c8(param_1,&PTR_DAT_1109afa30);
  func_0x00010743b3cc();
  return;
}



/* Entry: 107436808; end: 107436813;  */

undefined ** FUN_107436808(void)

{
  return &PTR_DAT_1109afa30;
}



/* Entry: 107436814; end: 10743684b;  */

void FUN_107436814(void)

{
  func_0x00010743b73c();
  func_0x00010743b340(&PTR_SUB_1109af950);
  func_0x0001074365e8();
  return;
}



/* Entry: 10743684c; end: 1074368e7;  */

void FUN_10743684c(long param_1)

{
  long unaff_x20;
  undefined4 auStack_98 [6];
  undefined4 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  func_0x00010743b73c();
  __ZNSt3__16chrono12steady_clock3nowEv();
  lStack_28 = (param_1 - unaff_x20) / 1000;
  auStack_98[0] = 0x129;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  func_0x00010743bffc();
  uStack_70 = 0;
  uStack_50 = 0;
  uStack_4c = 1;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  func_0x00010743c284();
  func_0x000107262330(auStack_98);
  return;
}



/* Entry: 1074368e8; end: 107436927;  */

long FUN_1074368e8(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010743bb14();
  func_0x000107436908();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 107436928; end: 10743694b;  */

void FUN_107436928(void)

{
  func_0x00010743b320();
  func_0x00010743b8bc();
  return;
}



/* Entry: 10743694c; end: 107436977;  */

undefined8 * FUN_10743694c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109af9c0;
  FUN_1074368e8(param_1 + 1);
  return param_1;
}



/* Entry: 107436978; end: 10743698b;  */

void FUN_107436978(void)

{
  FUN_10743694c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10743698c; end: 1074369bf;  */

undefined8 FUN_10743698c(undefined8 param_1)

{
  func_0x00010743b8f4();
  FUN_107436a58();
  return param_1;
}



/* Entry: 1074369c0; end: 1074369e3;  */

void FUN_1074369c0(long param_1,undefined8 param_2)

{
  func_0x00010743b804(param_2,param_1 + 8);
  func_0x00010743b340(&PTR_FUN_1109af9c0);
  func_0x00010743c4c0();
  FUN_107436928();
  return;
}



/* Entry: 1074369e4; end: 107436a23;  */

void FUN_1074369e4(int param_1)

{
  long unaff_x19;
  
  func_0x00010743ba90();
  func_0x00010743be24();
  func_0x00010743be64();
  if (param_1 != 0) {
    func_0x00010743c260(*(undefined8 *)(unaff_x19 + 0x20));
  }
  func_0x00010743b890();
  return;
}



/* Entry: 107436a24; end: 107436a4b;  */

void FUN_107436a24(undefined8 param_1)

{
  func_0x00010743b95c();
  func_0x00010743b7c8(param_1,&PTR_DAT_1109afa20);
  func_0x00010743b3cc();
  return;
}



/* Entry: 107436a4c; end: 107436a57;  */

undefined ** FUN_107436a4c(void)

{
  return &PTR_DAT_1109afa20;
}



/* Entry: 107436a58; end: 107436a93;  */

void FUN_107436a58(void)

{
  func_0x00010743b804();
  func_0x00010743b340(&PTR_FUN_1109af9c0);
  func_0x00010743c4c0();
  FUN_107436928();
  return;
}



/* Entry: 107436a94; end: 107436a9b;  */

void FUN_107436a94(void)

{
  return;
}



/* Entry: 107436a9c; end: 107436ac3;  */

void FUN_107436a9c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010743c378();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109afa60;
  param_1[1] = uVar1;
  return;
}



/* Entry: 107436ac4; end: 107436ae7;  */

void FUN_107436ac4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109afa60;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107436ae8; end: 107436b6f;  */

void FUN_107436ae8(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long lVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010743b2e8();
  lVar1 = *(long *)(param_1 + 8);
  uStack_28 = extraout_x8;
  FUN_107434ad0(&uStack_90);
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_30 = 0;
  func_0x0001074329c4(auStack_78,lVar1 + 0x50);
  FUN_10743636c(&uStack_70);
  func_0x000107435084(&uStack_90);
  func_0x00010743b264(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010743c384(auStack_78);
  func_0x000107435084(&uStack_90);
  func_0x00010743b660();
  func_0x00010743b95c();
  func_0x00010743b7c8();
  func_0x00010743b3cc();
  return;
}



/* Entry: 107436b70; end: 107436b97;  */

void FUN_107436b70(undefined8 param_1)

{
  func_0x00010743b95c();
  func_0x00010743b7c8(param_1,&PTR_DAT_1109afac0);
  func_0x00010743b3cc();
  return;
}



/* Entry: 107436b98; end: 107436bab;  */

undefined ** FUN_107436b98(void)

{
  return &PTR_DAT_1109afac0;
}



/* Entry: 107436bac; end: 107436bd3;  */

void FUN_107436bac(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010743c378();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109afae0;
  param_1[1] = uVar1;
  return;
}



/* Entry: 107436bd4; end: 107436bf7;  */

void FUN_107436bd4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109afae0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107436bf8; end: 107436d0b;  */

void FUN_107436bf8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long lVar4;
  undefined8 extraout_x8;
  long *unaff_x19;
  long *plVar5;
  undefined8 *puVar6;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [7];
  undefined8 *puStack_70;
  undefined1 auStack_68 [24];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  func_0x00010743c434();
  func_0x00010743b2e8();
  puVar6 = *(undefined8 **)(param_1 + 8);
  uStack_b0 = *(undefined8 *)(param_2 + 8);
  uStack_b8 = puVar6[2];
  plVar5 = (long *)*puVar6;
  puVar3 = auStack_a8;
  uStack_48 = extraout_x8;
  func_0x000104c2fe00(puVar3,param_4);
  puStack_50 = (undefined8 *)0x0;
  puStack_70 = puVar6;
  func_0x00010743c1e4();
  *puVar3 = &PTR_FUN_1109afb50;
  uVar2 = uStack_b8;
  puVar3[2] = uStack_b0;
  puVar3[1] = uVar2;
  func_0x000104c2fe00(puVar3 + 3,auStack_a8);
  puVar3[10] = puStack_70;
  puStack_50 = puVar3;
  (**(code **)(*plVar5 + 0x10))(&lStack_c0,plVar5);
  lVar1 = lStack_c0;
  lStack_c0 = 0;
  lVar4 = *unaff_x19;
  *unaff_x19 = lVar1;
  if (lVar4 != 0) {
    func_0x00010743b2a4();
    func_0x00010743c18c();
    if (lVar4 != 0) {
      func_0x00010743b2a4();
    }
  }
  func_0x0001072ad0c8();
  func_0x00010743be04();
  func_0x00010743b264(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ad0c8(auStack_68);
  func_0x00010743be04();
  func_0x00010743b660();
  func_0x00010743b95c();
  func_0x00010743b7c8();
  func_0x00010743b3cc();
  return;
}



/* Entry: 107436d0c; end: 107436d33;  */

void FUN_107436d0c(undefined8 param_1)

{
  func_0x00010743b95c();
  func_0x00010743b7c8(param_1,&PTR_DAT_1109afc40);
  func_0x00010743b3cc();
  return;
}



/* Entry: 107436d34; end: 107436d3f;  */

undefined ** FUN_107436d34(void)

{
  return &PTR_DAT_1109afc40;
}



/* Entry: 107436d40; end: 107436d6b;  */

undefined8 * FUN_107436d40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109afb50;
  func_0x000104c2f714(param_1 + 3);
  return param_1;
}



/* Entry: 107436d6c; end: 107436d7f;  */

void FUN_107436d6c(void)

{
  FUN_107436d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107436d80; end: 107436da3;  */

long FUN_107436d80(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x00010743c1e4();
  param_1 = param_1 + 1;
  func_0x00010743b73c();
  *puVar1 = &PTR_FUN_1109afb50;
  uVar2 = *param_1;
  puVar1[2] = param_1[1];
  puVar1[1] = uVar2;
  func_0x000104c2fe00(puVar1 + 3,param_1 + 2);
  *(undefined8 *)(unaff_x20 + 0x50) = *(undefined8 *)(unaff_x19 + 0x48);
  return unaff_x20;
}



/* Entry: 107436da4; end: 107436dc7;  */

void FUN_107436da4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  func_0x00010743b73c();
  *param_2 = &PTR_FUN_1109afb50;
  uVar2 = *puVar1;
  param_2[2] = puVar1[1];
  param_2[1] = uVar2;
  func_0x000104c2fe00(param_2 + 3,puVar1 + 2);
  *(undefined8 *)(unaff_x20 + 0x50) = *(undefined8 *)(unaff_x19 + 0x48);
  return;
}



/* Entry: 107436dc8; end: 107436f6f;  */

void FUN_107436dc8(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_388 [32];
  undefined1 uStack_368;
  undefined1 uStack_350;
  undefined1 uStack_348;
  undefined1 uStack_330;
  undefined1 uStack_328;
  undefined1 uStack_2f0;
  undefined1 uStack_2e8;
  undefined1 uStack_2e4;
  long lStack_2e0;
  undefined1 auStack_2d8 [128];
  undefined1 auStack_258 [56];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 auStack_208 [24];
  undefined1 auStack_148 [24];
  undefined8 *puStack_130;
  undefined1 auStack_128 [208];
  undefined8 uStack_58;
  
  func_0x00010743be78();
  func_0x00010743b2e8();
  lVar3 = *(long *)(param_1 + 0x50);
  uStack_58 = extraout_x8;
  FUN_10743684c(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(unaff_x20 + 8));
  uVar2 = *(undefined8 *)(lVar3 + 0x1a8);
  lStack_2e0 = lVar3;
  func_0x00010743bf4c(auStack_2d8);
  func_0x000104c2fe00(auStack_258,unaff_x20 + 0x18);
  func_0x000107432aac(&uStack_220,lVar3 + 0x260);
  puVar1 = auStack_208;
  FUN_107437024(puVar1,&lStack_2e0);
  puStack_130 = (undefined8 *)0x0;
  func_0x00010743ba68();
  *puVar1 = &PTR_FUN_1109afbc0;
  puVar1[2] = uStack_218;
  puVar1[1] = uStack_220;
  uStack_220 = 0;
  uStack_218 = 0;
  puVar1[4] = auStack_208[0];
  puVar1[3] = uStack_210;
  func_0x00010743b864();
  func_0x00010743b8e8();
  puStack_130 = puVar1;
  FUN_1073a471c(auStack_388,&UNK_10f41561c);
  uStack_368 = 0;
  uStack_350 = 0;
  uStack_348 = 0;
  uStack_330 = 0;
  uStack_328 = 0;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  uStack_2e4 = 0;
  func_0x000107273dcc(auStack_128,auStack_148,auStack_388);
  func_0x00010743c3f0();
  (*extraout_x8_00)(uVar2,auStack_128);
  func_0x000107273efc(auStack_128);
  func_0x000107273f24(auStack_388);
  func_0x0001006393ec(auStack_148);
  func_0x000107436fe4(&uStack_220);
  func_0x000107437004(&lStack_2e0);
  func_0x00010743b264(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107273efc(auStack_128);
  func_0x000107273f24(auStack_388);
  func_0x0001006393ec(auStack_148);
  func_0x000107436fe4(&uStack_220);
  func_0x000107437004(&lStack_2e0);
  do {
    func_0x00010743b660();
  } while( true );
}



/* Entry: 107436f70; end: 107436f97;  */

void FUN_107436f70(undefined8 param_1)

{
  func_0x00010743b95c();
  func_0x00010743b7c8(param_1,&PTR_DAT_1109afc30);
  func_0x00010743b3cc();
  return;
}



/* Entry: 107436f98; end: 107436fa3;  */

undefined ** FUN_107436f98(void)

{
  return &PTR_DAT_1109afc30;
}



/* Entry: 107436fa4; end: 107437023;  */

void FUN_107436fa4(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010743b73c();
  *param_1 = &PTR_FUN_1109afb50;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  func_0x000104c2fe00(param_1 + 3,param_2 + 2);
  *(undefined8 *)(unaff_x20 + 0x50) = *(undefined8 *)(unaff_x19 + 0x48);
  return;
}



/* Entry: 107437024; end: 107437047;  */

void FUN_107437024(void)

{
  func_0x00010743b320();
  func_0x00010743b8bc();
  return;
}



/* Entry: 107437048; end: 107437073;  */

undefined8 * FUN_107437048(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109afbc0;
  func_0x000107436fe4(param_1 + 1);
  return param_1;
}



/* Entry: 107437074; end: 107437087;  */

void FUN_107437074(void)

{
  FUN_107437048();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107437088; end: 1074370bb;  */

undefined8 FUN_107437088(undefined8 param_1)

{
  func_0x00010743b8f4();
  FUN_107437154();
  return param_1;
}



/* Entry: 1074370bc; end: 1074370df;  */

void FUN_1074370bc(long param_1,undefined8 param_2)

{
  func_0x00010743b804(param_2,param_1 + 8);
  func_0x00010743b340(&PTR_FUN_1109afbc0);
  func_0x00010743c4c0();
  FUN_107437024();
  return;
}



/* Entry: 1074370e0; end: 10743711f;  */

void FUN_1074370e0(int param_1)

{
  long unaff_x19;
  
  func_0x00010743ba90();
  func_0x00010743be24();
  func_0x00010743be64();
  if (param_1 != 0) {
    func_0x00010743c260(*(undefined8 *)(unaff_x19 + 0x20));
  }
  func_0x00010743b890();
  return;
}



/* Entry: 107437120; end: 107437147;  */

void FUN_107437120(undefined8 param_1)

{
  func_0x00010743b95c();
  func_0x00010743b7c8(param_1,&PTR_DAT_1109afc20);
  func_0x00010743b3cc();
  return;
}



/* Entry: 107437148; end: 107437153;  */

undefined ** FUN_107437148(void)

{
  return &PTR_DAT_1109afc20;
}



/* Entry: 107437154; end: 10743718f;  */

void FUN_107437154(void)

{
  func_0x00010743b804();
  func_0x00010743b340(&PTR_FUN_1109afbc0);
  func_0x00010743c4c0();
  FUN_107437024();
  return;
}



/* Entry: 107437190; end: 1074371a7;  */

void FUN_107437190(void)

{
  func_0x00010743b8c8();
  return;
}



/* Entry: 1074371a8; end: 1074371bf;  */

void FUN_1074371a8(long *param_1,long param_2)

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


