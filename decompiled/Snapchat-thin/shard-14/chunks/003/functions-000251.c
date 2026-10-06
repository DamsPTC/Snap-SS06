/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b16b810; end: 10b16b85f;  */

long FUN_10b16b810(void)

{
  undefined8 uStack_30;
  
  func_0x00010b177098();
  FUN_10b16b860();
  func_0x00010b174f34(uStack_30 + 0x88);
  __ZNSt3__15mutex4lockEv();
  FUN_10b164a64(uStack_30);
  func_0x00010b174d08();
  func_0x00010b175d5c();
  return uStack_30;
}



/* Entry: 10b16b860; end: 10b16b897;  */

void FUN_10b16b860(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b174884();
  func_0x00010b17551c();
  func_0x00010b174db8();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)();
  return;
}



/* Entry: 10b16b898; end: 10b16b957;  */

void FUN_10b16b898(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined1 auStack_40 [16];
  
  func_0x00010b1764d4();
  if (param_3 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b17493c();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b176334();
  func_0x00010b175db8();
  FUN_10b16b860();
  func_0x00010b1754f4();
  func_0x00010b175360();
  func_0x00010b174844();
  FUN_10b1643f8(auStack_40);
  func_0x00010b17594c();
  (*extraout_x8)();
  func_0x00010b175d98();
  func_0x00010b175d5c();
  func_0x000107c27b68(*(undefined8 *)(unaff_x19 + 0x10));
  return;
}



/* Entry: 10b16b958; end: 10b16b95b;  */

undefined8 FUN_10b16b958(undefined8 param_1)

{
  func_0x00010b1754dc(&PTR_FUN_110cc03a0);
  return param_1;
}



/* Entry: 10b16b95c; end: 10b16b96f;  */

void FUN_10b16b95c(void)

{
  FUN_10b16b9b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16b970; end: 10b16b9b3;  */

void FUN_10b16b970(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b17491c();
  if (param_3 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  FUN_10b16b898(param_1 + 8);
  func_0x00010b1756a0();
  return;
}



/* Entry: 10b16b9b4; end: 10b16b9db;  */

undefined8 FUN_10b16b9b4(undefined8 param_1)

{
  func_0x00010b1754dc(&PTR_FUN_110cc03a0);
  return param_1;
}



/* Entry: 10b16b9dc; end: 10b16ba2b;  */

void FUN_10b16b9dc(void)

{
  long alStack_30 [2];
  
  FUN_10b16ba2c(alStack_30);
  func_0x00010b174f34(alStack_30[0] + 0x48);
  __ZNSt3__15mutex4lockEv();
  FUN_10b164ecc(alStack_30[0]);
  func_0x00010b174d08();
  func_0x00010b175544();
  return;
}



/* Entry: 10b16ba2c; end: 10b16ba63;  */

void FUN_10b16ba2c(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b175354();
  func_0x00010b17551c();
  func_0x00010b174db8();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)();
  return;
}



/* Entry: 10b16ba64; end: 10b16bbdf;  */

void FUN_10b16ba64(void)

{
  long lVar1;
  long *plVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  int extraout_w10;
  undefined8 *unaff_x20;
  long lStack_b8;
  long lStack_b0;
  long *aplStack_a8 [3];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  int aiStack_30 [4];
  
  func_0x00010b175cd0();
  FUN_10b164d3c(&uStack_80);
  FUN_10b164d6c(aiStack_30,&uStack_80);
  FUN_10b164e6c(&uStack_80);
  FUN_10b164e6c(auStack_40);
  func_0x00010b175600();
  func_0x00010b1775ac(uStack_48);
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  func_0x00010b175408();
  func_0x00010b175ae0(extraout_x8 + 0x48);
  __ZNSt3__15mutex4lockEv();
  FUN_10b164ecc();
  if (aiStack_30[0] == 0) {
    FUN_10b16bc84(aplStack_a8,&uStack_80);
    func_0x00010b176cd8();
    lVar1 = *(long *)(extraout_x8_00 + 0x90);
    *(undefined8 *)(extraout_x8_00 + 0x90) = extraout_x9;
    plVar2 = (long *)0x0;
    if (lVar1 != 0) {
      func_0x00010b174910();
      plVar2 = aplStack_a8[0];
      aplStack_a8[0] = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        func_0x00010b174910();
      }
    }
  }
  else {
    plVar2 = &lStack_90;
    FUN_10b164d6c(plVar2,aiStack_30);
  }
  func_0x00010b175da0();
  if (lStack_90 != 0) {
    lStack_b8 = lStack_90;
    lStack_b0 = lStack_88;
    if (lStack_88 != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10 != 0);
    }
    FUN_10b16bbe0(&uStack_80,&lStack_b8);
    plVar2 = &lStack_b8;
    FUN_10b164e6c();
  }
  func_0x00010b175bdc();
  FUN_10b164e6c();
  func_0x00010b177ccc();
  if (plVar2 != (long *)0x0) {
    func_0x00010b174910();
  }
  func_0x00010b175a1c();
  func_0x00010b1753e0();
  if (plVar2 != (long *)0x0) {
    func_0x00010b174910();
  }
  func_0x00010b175ca0();
  return;
}



/* Entry: 10b16bbe0; end: 10b16bc83;  */

void FUN_10b16bbe0(void)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w12;
  long unaff_x19;
  
  func_0x00010b176da8();
  if (extraout_x9 != 0) {
    do {
      func_0x00010b174a1c();
    } while (extraout_w12 != 0);
    do {
      func_0x00010b174b1c();
    } while (extraout_w11 != 0);
  }
  func_0x00010b1750c8();
  FUN_10b16bd34();
  func_0x00010b1753d0();
  func_0x00010b175544();
  func_0x000107c27b68(*(undefined8 *)(unaff_x19 + 0x10));
  return;
}



/* Entry: 10b16bc84; end: 10b16bcab;  */

void FUN_10b16bc84(void)

{
  func_0x00010b177ef4();
  func_0x00010b1751e0();
  func_0x00010b176444(&PTR_FUN_110cc08b8);
  return;
}



/* Entry: 10b16bcac; end: 10b16bcaf;  */

undefined8 FUN_10b16bcac(undefined8 param_1)

{
  func_0x00010b1754dc(&PTR_FUN_110cc08b8);
  return param_1;
}



/* Entry: 10b16bcb0; end: 10b16bcc3;  */

void FUN_10b16bcb0(void)

{
  FUN_10b16bd0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16bcc4; end: 10b16bd0b;  */

void FUN_10b16bcc4(long param_1)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010b176d38();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  FUN_10b16bbe0(param_1 + 8,auStack_30);
  func_0x00010b1753c0();
  return;
}



/* Entry: 10b16bd0c; end: 10b16bd33;  */

undefined8 FUN_10b16bd0c(undefined8 param_1)

{
  func_0x00010b1754dc(&PTR_FUN_110cc08b8);
  return param_1;
}



/* Entry: 10b16bd34; end: 10b16bd7b;  */

void FUN_10b16bd34(undefined8 param_1,undefined8 param_2)

{
  code *extraout_x8;
  undefined1 auStack_30 [16];
  
  func_0x00010b177edc();
  FUN_10b16ba2c(auStack_30,param_2);
  func_0x00010b1754c8();
  FUN_10b16bd7c();
  func_0x00010b1753c0();
  func_0x00010b17594c();
  (*extraout_x8)();
  return;
}



/* Entry: 10b16bd7c; end: 10b16bda7;  */

void FUN_10b16bd7c(void)

{
  func_0x00010b175110();
  __ZNSt3__112__get_sp_mutEPKv();
  func_0x00010b175360();
  func_0x00010b17495c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)();
  return;
}



/* Entry: 10b16bda8; end: 10b16bdeb;  */

long * FUN_10b16bda8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b16bdec; end: 10b16be03;  */

void FUN_10b16bdec(long *param_1,long param_2)

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



/* Entry: 10b16be04; end: 10b16be4f;  */

void FUN_10b16be04(long param_1)

{
  func_0x00010b175d24();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10b16be50; end: 10b16be87;  */

void FUN_10b16be50(long param_1)

{
  func_0x00010b16be6c();
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 10b16be88; end: 10b16bef3;  */

void FUN_10b16be88(undefined8 param_1)

{
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b17515c();
  FUN_10b16bef4(param_1);
  uStack_38 = unaff_x19[1];
  uStack_40 = *unaff_x19;
  if (unaff_x19[1] != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  func_0x00010b174cf8();
  FUN_10b16bf10();
  func_0x00010b1777c0();
  FUN_10b166558(&uStack_40);
  return;
}



/* Entry: 10b16bef4; end: 10b16bf0f;  */

void FUN_10b16bef4(void)

{
  undefined1 uStack_11;
  
  FUN_10b16c08c(&uStack_11);
  return;
}



/* Entry: 10b16bf10; end: 10b16c08b;  */

void FUN_10b16bf10(void)

{
  long lVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  int extraout_w10;
  undefined8 *unaff_x20;
  long lStack_b8;
  long lStack_b0;
  long alStack_a8 [3];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  int aiStack_30 [4];
  
  func_0x00010b175cd0();
  func_0x0001052a5474(&uStack_80);
  func_0x0001052a549c(aiStack_30,&uStack_80);
  func_0x00010b17732c();
  func_0x0001052a55c0(auStack_40);
  func_0x00010b175600();
  func_0x00010b1775ac(uStack_48);
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  func_0x00010b175408();
  func_0x00010b175ae0(extraout_x8 + 0x80);
  __ZNSt3__15mutex4lockEv();
  func_0x0001052a54c0();
  if (aiStack_30[0] == 0) {
    FUN_10b16c2d8(alStack_a8,&uStack_80);
    func_0x00010b176cd8();
    lVar1 = *(long *)(extraout_x8_00 + 200);
    *(undefined8 *)(extraout_x8_00 + 200) = extraout_x9;
    if (lVar1 != 0) {
      func_0x00010b174910();
      lVar1 = alStack_a8[0];
      alStack_a8[0] = 0;
      if (lVar1 != 0) {
        func_0x00010b174910();
      }
    }
  }
  else {
    func_0x0001052a549c(&lStack_90,aiStack_30);
  }
  func_0x00010b175da0();
  if (lStack_90 != 0) {
    lStack_b8 = lStack_90;
    lStack_b0 = lStack_88;
    if (lStack_88 != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10 != 0);
    }
    FUN_10b16c224(&uStack_80,&lStack_b8);
    func_0x0001052a55c0(&lStack_b8);
  }
  func_0x00010b175bdc();
  func_0x0001052a55c0();
  puVar2 = &uStack_80;
  FUN_10b16c618();
  func_0x00010b175a1c();
  func_0x00010b1753e0();
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010b174910();
  }
  func_0x0001052a55c0(aiStack_30);
  return;
}



/* Entry: 10b16c08c; end: 10b16c0e7;  */

void FUN_10b16c08c(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_30;
  
  func_0x000107c350b4();
  func_0x000107c350e4();
  FUN_10b16c0e8();
  FUN_10b16c134(uStack_30);
  func_0x000107c350b8();
  FUN_10b16c214();
  func_0x000107c350b0(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b175048();
  FUN_10b16c214();
  func_0x00010b174f0c();
  func_0x00010b175f04();
  FUN_10b16c108();
  func_0x00010b175eec();
  return;
}



/* Entry: 10b16c0e8; end: 10b16c107;  */

void FUN_10b16c0e8(void)

{
  func_0x00010b175f04();
  FUN_10b16c108();
  func_0x00010b175eec();
  return;
}



/* Entry: 10b16c108; end: 10b16c133;  */

undefined8 * FUN_10b16c108(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x147ae147ae147af) {
    puVar1 = (undefined8 *)(param_2 * 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc06a0;
  param_1[1] = 0;
  FUN_10b16c198(param_1 + 3);
  return param_1;
}



/* Entry: 10b16c134; end: 10b16c173;  */

undefined8 * FUN_10b16c134(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc06a0;
  param_1[1] = 0;
  FUN_10b16c198(param_1 + 3);
  return param_1;
}



/* Entry: 10b16c174; end: 10b16c177;  */

void FUN_10b16c174(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc06a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b16c178; end: 10b16c18b;  */

void FUN_10b16c178(void)

{
  FUN_10b16c1e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16c18c; end: 10b16c197;  */

void FUN_10b16c18c(long param_1)

{
  long unaff_x19;
  
  func_0x00010b1777a8(param_1 + 0x18);
  FUN_10b14bf8c(unaff_x19 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)();
  return;
}



/* Entry: 10b16c198; end: 10b16c1bf;  */

void FUN_10b16c198(long param_1)

{
  _bzero(param_1,0xb0);
  __ZNSt3__115recursive_mutexC1Ev();
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  return;
}



/* Entry: 10b16c1c0; end: 10b16c1e3;  */

void FUN_10b16c1c0(long param_1)

{
  __ZNSt3__115recursive_mutexC1Ev();
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  return;
}



/* Entry: 10b16c1e4; end: 10b16c1ef;  */

void FUN_10b16c1e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc06a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b16c1f0; end: 10b16c213;  */

void FUN_10b16c1f0(void)

{
  long unaff_x19;
  
  func_0x00010b1777a8();
  FUN_10b14bf8c(unaff_x19 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)();
  return;
}



/* Entry: 10b16c214; end: 10b16c223;  */

void FUN_10b16c214(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b16c224; end: 10b16c2d7;  */

void FUN_10b16c224(void)

{
  long extraout_x9;
  undefined8 extraout_x9_00;
  int extraout_w11;
  int extraout_w12;
  long unaff_x19;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  func_0x00010b176da8();
  if (extraout_x9 == 0) {
    uStack_38 = 0;
  }
  else {
    do {
      func_0x00010b174a1c();
      uStack_38 = extraout_x9_00;
    } while (extraout_w12 != 0);
    do {
      func_0x00010b174b1c();
    } while (extraout_w11 != 0);
  }
  func_0x00010b1750c8();
  FUN_10b16c3b4();
  func_0x0001052a55c0(auStack_40);
  func_0x0001052a55c0(auStack_50);
  func_0x000107c27b68(*(undefined8 *)(unaff_x19 + 0x10));
  return;
}



/* Entry: 10b16c2d8; end: 10b16c2ff;  */

void FUN_10b16c2d8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x00010b177ef4();
  func_0x00010b1751e0();
  FUN_10b16c300();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10b16c300; end: 10b16c327;  */

void FUN_10b16c300(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x00010b175e54(&PTR_DAT_110cc06f0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 10b16c328; end: 10b16c33b;  */

void FUN_10b16c328(void)

{
  FUN_10b16c388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16c33c; end: 10b16c387;  */

void FUN_10b16c33c(long param_1)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010b176d38();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  FUN_10b16c224(param_1 + 8,auStack_30);
  func_0x0001052a55c0(auStack_30);
  return;
}



/* Entry: 10b16c388; end: 10b16c3b3;  */

undefined8 * FUN_10b16c388(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cc06f0;
  FUN_10b16c618(param_1 + 1);
  return param_1;
}



/* Entry: 10b16c3b4; end: 10b16c40b;  */

void FUN_10b16c3b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  
  uStack_48 = param_1;
  uStack_40 = param_2;
  FUN_10b16c40c(&puStack_38,&uStack_48);
  for (puVar1 = puStack_38; puVar1 != puStack_30; puVar1 = puVar1 + 1) {
    (**(code **)*puVar1)();
  }
  func_0x000107c281bc(&puStack_38);
  return;
}



/* Entry: 10b16c40c; end: 10b16c4ff;  */

void FUN_10b16c40c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar2 = *(undefined8 *)*param_2;
  __ZNSt3__115recursive_mutex4lockEv(uVar2);
  func_0x0001052a5804(auStack_78,param_2[1]);
  FUN_10b16c500(*(long *)*param_2 + 0x40,auStack_78);
  func_0x00010b1759f4();
  lVar1 = *(long *)*param_2;
  uVar3 = *(undefined8 *)(lVar1 + 0x98);
  param_1[1] = *(undefined8 *)(lVar1 + 0xa0);
  *param_1 = uVar3;
  param_1[2] = *(undefined8 *)(lVar1 + 0xa8);
  *(undefined8 *)(lVar1 + 0xa0) = 0;
  *(undefined8 *)(lVar1 + 0xa8) = 0;
  *(undefined8 *)(lVar1 + 0x98) = 0;
  __ZNSt3__115recursive_mutex6unlockEv(uVar2);
  return;
}



/* Entry: 10b16c500; end: 10b16c5e3;  */

void FUN_10b16c500(void)

{
  undefined1 in_ZR;
  
  func_0x00010b176d98();
  if ((bool)in_ZR) {
    func_0x00010b16c558();
  }
  else {
    FUN_10b16a234();
  }
  return;
}



/* Entry: 10b16c5e4; end: 10b16c5ff;  */

void FUN_10b16c5e4(long param_1)

{
  FUN_10b16c600();
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 10b16c600; end: 10b16c617;  */

void FUN_10b16c600(void)

{
  FUN_10b14bf50();
  return;
}



/* Entry: 10b16c618; end: 10b16c637;  */

long FUN_10b16c618(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b17537c();
  lVar1 = unaff_x19;
  func_0x00010b1750d4();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b16c638; end: 10b16c6cf;  */

void FUN_10b16c638(void)

{
  long unaff_x19;
  
  func_0x00010b174c44();
  func_0x00010b174c54();
  FUN_10b164d3c();
  func_0x00010b17522c();
  FUN_10b164d6c();
  func_0x00010b175544();
  func_0x00010b1753c0();
  func_0x00010b1754fc();
  func_0x00010b1750c8();
  FUN_10b16c6d0();
  func_0x00010b174894();
  if (unaff_x19 == 0) {
    func_0x00010b174cb4();
  }
  else {
    func_0x00010b174f84();
    func_0x00010b174a10();
    func_0x00010b1747fc();
  }
  func_0x00010b1753d0();
  return;
}



/* Entry: 10b16c6d0; end: 10b16c6df;  */

long FUN_10b16c6d0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*(char *)(lVar1 + 0x10) == '\x01') {
    FUN_10b11ffec(lVar1);
  }
  else {
    func_0x00010b176f18(lVar1,*param_1);
  }
  return lVar1;
}



/* Entry: 10b16c6e0; end: 10b16c73f;  */

long FUN_10b16c6e0(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10b11ffec(param_1);
  }
  else {
    func_0x00010b176f18();
  }
  return param_1;
}



/* Entry: 10b16c740; end: 10b16c763;  */

void FUN_10b16c740(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010b166958();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10b16c764; end: 10b16c797;  */

void FUN_10b16c764(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b16c798; end: 10b16c7bb;  */

void FUN_10b16c798(void)

{
  func_0x00010b175110();
  FUN_10b16c740();
  func_0x00010b174c70();
  func_0x00010b176cf8();
  return;
}



/* Entry: 10b16c7bc; end: 10b16c7f7;  */

void FUN_10b16c7bc(undefined8 *param_1,long param_2)

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
      func_0x00010b174e00();
    } while (extraout_w13 != 0);
    do {
      func_0x00010b174e00();
      param_1 = extraout_x8;
      uVar1 = extraout_x9;
      uVar2 = extraout_x10;
    } while (extraout_w13_00 != 0);
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  func_0x00010b1753c0();
  return;
}



/* Entry: 10b16c7f8; end: 10b16c823;  */

void FUN_10b16c7f8(void)

{
  FUN_10b16c740();
  func_0x00010b1751c8();
  FUN_10b16c824();
  func_0x00010b177c6c();
  return;
}



/* Entry: 10b16c824; end: 10b16c83b;  */

void FUN_10b16c824(long param_1)

{
  __ZNSt13exception_ptrC1ERKS_();
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10b16c83c; end: 10b16c863;  */

void FUN_10b16c83c(void)

{
  func_0x00010b175110();
  FUN_10b147988();
  func_0x00010b1751c8();
  FUN_10b16c864();
  return;
}



/* Entry: 10b16c864; end: 10b16c89b;  */

void FUN_10b16c864(long param_1)

{
  func_0x00010b16c880();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10b16c89c; end: 10b16c8fb;  */

undefined8 * FUN_10b16c89c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  if (param_3 == 0) {
    param_1[1] = 0;
    puVar1 = param_1;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = param_3;
    puVar1 = (undefined8 *)0x0;
    if (param_3 != 0) {
      return param_1;
    }
  }
  func_0x00010527822c();
  func_0x00010b1750d4();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b16c8fc; end: 10b16c943;  */

void FUN_10b16c8fc(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    FUN_10b166ce4();
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  return;
}



/* Entry: 10b16c944; end: 10b16c947;  */

void FUN_10b16c944(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc03f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b16c948; end: 10b16c95b;  */

void FUN_10b16c948(void)

{
  func_0x00010b16cb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16c95c; end: 10b16c96b;  */

void FUN_10b16c95c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b174b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b16c96c; end: 10b16c9a3;  */

void FUN_10b16c96c(void)

{
  undefined1 auStack_30 [16];
  
  FUN_10b16c9a4(auStack_30);
  FUN_10b124eb8(auStack_30);
  func_0x00010b175524();
  return;
}



/* Entry: 10b16c9a4; end: 10b16cb23;  */

void FUN_10b16c9a4(void)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar3;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x9;
  long extraout_x10;
  ulong unaff_x20;
  long *plVar4;
  long lVar5;
  undefined8 *unaff_x25;
  
  func_0x00010b1778a0();
  func_0x00010b175674();
  puVar3 = (undefined8 *)0x60;
  __Znwm();
  *puVar3 = FUN_10b17382c;
  puVar3[1] = FUN_10b1738c0;
  puVar3[10] = unaff_x20;
  func_0x00010b176290();
  func_0x00010b175014();
  FUN_10b15b3d4();
  if ((unaff_x20 & 1) == 0) {
    *(undefined1 *)(puVar3 + 0xb) = 0;
    plVar4 = (long *)puVar3[10];
    func_0x00010b1751f0();
    lVar5 = *plVar4;
    if ((*(byte *)(lVar5 + 0x90) & 1) == 0) {
      func_0x00010b177020();
      if ((bool)in_CY) {
        lVar5 = *(long *)(lVar5 + 0x98);
        func_0x00010b174a38();
        if (extraout_x10 != 0) {
          func_0x00010552fc6c();
LAB_10b16cacc:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b16cad0);
          (*pcVar2)();
        }
        func_0x00010b174770(extraout_x8 - lVar5);
        uVar1 = extraout_x9;
        if ((bool)in_CY) {
          uVar1 = extraout_x8_00;
        }
        if (uVar1 != 0) {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b16cacc;
          }
          __Znwm(uVar1 << 3);
        }
        func_0x00010b1747c8();
        func_0x00010b177dec();
        if (lVar5 != 0) {
          func_0x00010b175554();
        }
      }
      else {
        *unaff_x25 = puVar3;
      }
      func_0x00010b177de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
      return;
    }
    func_0x00010b175068();
    func_0x00010b174f14(*puVar3);
  }
  else {
    FUN_10b15b400(puVar3[10]);
    func_0x00010b174f74();
    func_0x00010b174e8c();
    if ((bool)in_ZR) {
      func_0x00010b174ea4();
      func_0x00010b174c9c();
    }
    else {
      func_0x00010b174a5c();
      func_0x00010b174c90();
      func_0x00010b175084();
    }
    func_0x00010b175038();
    func_0x00010b174f24();
  }
  return;
}



/* Entry: 10b16cb24; end: 10b16cb6b;  */

void FUN_10b16cb24(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010b1750d4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b16cb6c; end: 10b16cb8f;  */

void FUN_10b16cb6c(long param_1)

{
  func_0x00010b1750d4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b16cb90; end: 10b16cc1b;  */

void FUN_10b16cb90(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x9;
  undefined8 in_register_00005008;
  undefined8 uStack_30;
  
  func_0x000107c350b4();
  func_0x000107c350e4();
  FUN_10b16cc1c();
  func_0x00010b177b98(uStack_30);
  *(undefined8 *)(extraout_x8_00 + 0x10) = 0;
  *(undefined ***)(extraout_x8_00 + 0x18) = &PTR_DAT_110cc0c78;
  func_0x00010b177d54();
  *(undefined8 *)(extraout_x8_01 + 0x30) = extraout_x9;
  *(undefined8 *)(extraout_x8_01 + 0x28) = in_register_00005008;
  *(undefined8 *)(extraout_x8_01 + 0x20) = param_1;
  func_0x00010b175444();
  *(undefined4 *)(extraout_x8_02 + 0xd0) = 0;
  *(undefined ***)(extraout_x8_02 + 0x18) = &PTR_FUN_110cc92a8;
  func_0x000107c350b8();
  func_0x00010b16cc9c();
  func_0x000107c350b0(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010b175f04();
  FUN_10b16cc3c();
  func_0x00010b175eec();
  return;
}



/* Entry: 10b16cc1c; end: 10b16cc3b;  */

void FUN_10b16cc1c(void)

{
  func_0x00010b175f04();
  FUN_10b16cc3c();
  func_0x00010b175eec();
  return;
}



/* Entry: 10b16cc3c; end: 10b16cc67;  */

void FUN_10b16cc3c(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x12f684bda12f685) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xd8);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cc0c28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b16cc68; end: 10b16cc6b;  */

void FUN_10b16cc68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc0c28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b16cc6c; end: 10b16cc7f;  */

void FUN_10b16cc6c(void)

{
  func_0x00010b16cc90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16cc80; end: 10b16ccab;  */

void FUN_10b16cc80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b174b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b16ccac; end: 10b16ccd3;  */

long FUN_10b16ccac(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b16ccd4; end: 10b16ccdf;  */

void FUN_10b16ccd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc0458;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b16cce0; end: 10b16ccf3;  */

void FUN_10b16cce0(void)

{
  FUN_10b16ccd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16ccf4; end: 10b16ccfb;  */

void FUN_10b16ccf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b174b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b16ccfc; end: 10b16cd37;  */

undefined8 FUN_10b16ccfc(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  
  *param_1 = &PTR_FUN_110cc04a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 10);
  func_0x00010b175b94();
  func_0x00010b177f00();
  *param_1 = extraout_x8;
  FUN_10b14bab0(param_1 + 3);
  func_0x00010b176958();
  return unaff_x19;
}



/* Entry: 10b16cd38; end: 10b16cd4b;  */

void FUN_10b16cd38(void)

{
  FUN_10b16ccfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16cd4c; end: 10b16cd83;  */

void FUN_10b16cd4c(long param_1)

{
  undefined1 auStack_68 [64];
  undefined1 uStack_28;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b1ae534(*(long *)(param_1 + 0x40) + 0x30,param_1 + 0x50,0);
  }
  auStack_68[0] = 0;
  uStack_28 = 0;
  FUN_10b14bc84(param_1 + 0x18,auStack_68);
  func_0x00010b1759f4();
  func_0x00010b176a18();
  func_0x0001052aad48(auStack_68);
  return;
}



/* Entry: 10b16cd84; end: 10b16cdc7;  */

void FUN_10b16cd84(long param_1)

{
  long unaff_x19;
  long unaff_x21;
  undefined1 auStack_68 [56];
  
  func_0x00010b174be8();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b1ae534(*(long *)(param_1 + 0x40) + 0x30,unaff_x21 + 0x50,3);
  }
  func_0x00010b1770e0();
  func_0x000107c350d0();
  func_0x0001056429c0();
  FUN_10b14bc84(unaff_x19 + 0x18,auStack_68);
  func_0x00010b1759f4();
  func_0x00010b176a18();
  func_0x0001052aad48(auStack_68);
  return;
}



/* Entry: 10b16cdc8; end: 10b16cdeb;  */

void FUN_10b16cdc8(long param_1)

{
  func_0x00010b1750d4();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b16cdec; end: 10b16ce47;  */

void FUN_10b16cdec(long param_1)

{
  long lVar1;
  code *extraout_x8;
  long lStack_30;
  long lStack_28;
  
  lStack_30 = 0;
  lStack_28 = 0;
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_28 = lVar1;
    if (lVar1 != 0) {
      lStack_30 = *(long *)(param_1 + 0x10);
      if (lStack_30 != 0) {
        func_0x00010b175ad4();
        (*extraout_x8)();
      }
    }
  }
  func_0x0001052aad20(&lStack_30);
  return;
}



/* Entry: 10b16ce48; end: 10b16ce5f;  */

void FUN_10b16ce48(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010b1750d4();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b16ce60; end: 10b16ce73;  */

void FUN_10b16ce60(void)

{
  FUN_10b16cea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16ce74; end: 10b16ce9f;  */

void FUN_10b16ce74(long param_1)

{
  func_0x000107c281bc(param_1 + 0x398);
  FUN_10b163f9c(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)(param_1 + 0x18);
  return;
}



/* Entry: 10b16cea0; end: 10b16ceaf;  */

void FUN_10b16cea0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16ceb0; end: 10b16d0e7;  */

void FUN_10b16ceb0(long *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_3a0;
  long lStack_398;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  undefined8 uStack_380;
  undefined1 auStack_378 [816];
  undefined1 auStack_48 [8];
  
  if (param_3 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b17493c();
    } while (extraout_w10_00 != 0);
  }
  uStack_3a0 = param_2;
  lStack_398 = param_3;
  func_0x00010b1751f0();
  FUN_10b163fe4(auStack_378,&uStack_3a0);
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x378) == '\x01') {
    if (*(char *)(lVar1 + 0x370) == '\x01') {
      func_0x00010b175668();
      FUN_10b16a390();
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(auStack_48,lVar1 + 0x40);
      func_0x00010b1776e0();
      func_0x00010b175668();
      FUN_10b1640f4();
      *(undefined1 *)(lVar1 + 0x370) = 1;
      func_0x00010b177880();
    }
  }
  else {
    func_0x00010b175668();
    func_0x00010b16a7b4();
  }
  FUN_10b163f04(auStack_378);
  lVar1 = *param_1;
  puVar2 = *(undefined8 **)(lVar1 + 0x380);
  uStack_380 = *(undefined8 *)(lVar1 + 0x390);
  puVar3 = *(undefined8 **)(lVar1 + 0x388);
  *(undefined8 *)(lVar1 + 0x380) = 0;
  *(undefined8 *)(lVar1 + 0x388) = 0;
  *(undefined8 *)(lVar1 + 0x390) = 0;
  puStack_390 = puVar2;
  puStack_388 = puVar3;
  func_0x00010b175068();
  for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
    (**(code **)*puVar2)();
  }
  func_0x00010b1767c4();
  func_0x00010b175f34();
  func_0x00010b175248();
  func_0x000107c27b68(param_1[2]);
  return;
}



/* Entry: 10b16d0e8; end: 10b16d0eb;  */

undefined8 * FUN_10b16d0e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc0568;
  func_0x00010b16d170(param_1 + 1);
  return param_1;
}



/* Entry: 10b16d0ec; end: 10b16d0ff;  */

void FUN_10b16d0ec(void)

{
  FUN_10b16d144();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16d100; end: 10b16d143;  */

void FUN_10b16d100(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b17491c();
  if (param_3 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  FUN_10b16ceb0(param_1 + 8);
  func_0x00010b1753c8();
  return;
}



/* Entry: 10b16d144; end: 10b16d18f;  */

undefined8 * FUN_10b16d144(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc0568;
  func_0x00010b16d170(param_1 + 1);
  return param_1;
}



/* Entry: 10b16d190; end: 10b16d207;  */

void FUN_10b16d190(long *param_1,undefined8 *param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puStack_30;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  *param_1 = (long)param_2;
  param_1[1] = param_3;
  if ((param_2 != (undefined8 *)0x0) &&
     ((lStack_18 = param_2[1], lStack_18 == 0 || (*(long *)(lStack_18 + 8) == -1)))) {
    puStack_30 = param_2;
    lStack_28 = param_3;
    if (param_3 != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10 != 0);
      do {
        func_0x00010b17493c();
      } while (extraout_w10_00 != 0);
      lStack_18 = param_2[1];
    }
    uStack_20 = *param_2;
    *param_2 = param_2;
    param_2[1] = param_3;
    FUN_10b16d514(&uStack_20);
    func_0x00010b16a2a8(&puStack_30);
    return;
  }
  return;
}



/* Entry: 10b16d208; end: 10b16d20b;  */

void FUN_10b16d208(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc05a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b16d20c; end: 10b16d21f;  */

void FUN_10b16d20c(void)

{
  FUN_10b16d538();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16d220; end: 10b16d267;  */

undefined8 FUN_10b16d220(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010529fe04(param_1 + 0x98);
  FUN_10b12b860(param_1 + 0x88);
  FUN_10b12878c(param_1 + 0x70);
  func_0x000107c279a4(param_1 + 0x50);
  func_0x000107c279a4(param_1 + 0x30);
  param_1 = param_1 + 0x18;
  func_0x00010b1750d4();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10b16d268; end: 10b16d26b;  */

void FUN_10b16d268(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16d26c; end: 10b16d513;  */

undefined8 *
FUN_10b16d26c(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
             long *param_5,long param_6)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  long extraout_x8_01;
  long lVar3;
  undefined8 extraout_x9;
  int extraout_w11;
  undefined8 *unaff_x21;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [4];
  undefined1 uStack_cc;
  undefined4 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_60;
  undefined8 uStack_58;
  
  puVar2 = param_1;
  func_0x00010b1749f4();
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 2) = param_2;
  *(undefined1 *)(puVar2 + 3) = 0;
  *(undefined1 *)(puVar2 + 6) = 0;
  if (*(char *)(param_3 + 3) == '\x01') {
    uVar7 = param_3[1];
    uVar6 = *param_3;
    puVar2[5] = param_3[2];
    puVar2[4] = uVar7;
    puVar2[3] = uVar6;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  uStack_58 = extraout_x8;
  func_0x00010b177dc0();
  *(undefined1 *)(unaff_x21 + 3) = 0;
  if (*(char *)(param_4 + 3) == '\x01') {
    uVar7 = param_4[1];
    uVar6 = *param_4;
    unaff_x21[2] = param_4[2];
    unaff_x21[1] = uVar7;
    *unaff_x21 = uVar6;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  lVar3 = *param_5;
  plVar4 = param_1 + 0xb;
  param_1[0xc] = param_5[1];
  *plVar4 = lVar3;
  *param_5 = 0;
  param_5[1] = 0;
  lVar5 = *plVar4;
  *(bool *)(param_1 + 0xd) = *(int *)(lVar5 + 0x17c) == 1;
  *(bool *)((long)param_1 + 0x69) = *(int *)(lVar5 + 0x178) == 0;
  *(bool *)((long)param_1 + 0x6a) = *(int *)(lVar5 + 0x17c) == 2;
  *(undefined1 *)((long)param_1 + 0x6b) = *(undefined1 *)(lVar5 + 0x9a);
  FUN_10b12b4a0(auStack_d0,1);
  lVar3 = *(long *)(lVar5 + 0x60);
  uVar7 = *(undefined8 *)(lVar5 + 0x60);
  uVar6 = *(undefined8 *)(lVar5 + 0x58);
  puStack_c0[2] = 0;
  *puStack_c0 = &PTR_FUN_110cbdab0;
  puStack_c0[1] = 0;
  puVar2 = puStack_c0;
  if (lVar3 != 0) {
    do {
      func_0x00010b1749b8();
      puVar2 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[6] = uVar7;
  puVar2[5] = uVar6;
  uStack_e0 = 0;
  uStack_d8 = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  *(undefined1 *)(puVar2 + 9) = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[10] = 0;
  *(undefined4 *)(puVar2 + 0xd) = 0;
  func_0x00010b175ef8();
  *(undefined8 *)(extraout_x8_01 + 0x80) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x88) = extraout_x9;
  *(undefined8 *)(extraout_x8_01 + 0x98) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x90) = 0;
  *(undefined8 *)(extraout_x8_01 + 0xa8) = 0;
  *(undefined8 *)(extraout_x8_01 + 0xa0) = 0;
  *(undefined8 *)(extraout_x8_01 + 0xb8) = 0;
  *(undefined8 *)(extraout_x8_01 + 0xb0) = 0;
  *(undefined8 *)(extraout_x8_01 + 0xc0) = 0;
  func_0x000107c27c20(&uStack_e0);
  puVar2 = puStack_c0;
  puStack_c0 = (undefined8 *)0x0;
  FUN_10b12b488(param_1 + 0xe,puVar2 + 3);
  FUN_10b12b850(auStack_d0);
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_110 = 0;
  func_0x00010b177e80(*(undefined4 *)(param_1 + 2));
  uStack_cc = 0;
  uStack_c8 = 2;
  puStack_c0 = (undefined8 *)0x1f4;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_f8 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uVar1 = *(char *)(param_6 + 0x78) == '\x01';
  if ((bool)uVar1) {
    FUN_10b121fd0(param_1 + 0x10,param_6);
  }
  else {
    FUN_10b0fafd4(param_1 + 0x10,auStack_d0);
  }
  func_0x00010529fe04(auStack_d0);
  func_0x00010b175870();
  func_0x00010b17784c();
  func_0x000107c278a8(&uStack_f8);
  func_0x000107c278a8(&uStack_110);
  func_0x000107c350b0(uStack_58);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010529fe04(auStack_d0);
    func_0x00010b175870();
    func_0x00010b17784c();
    func_0x000107c278a8(&uStack_f8);
    func_0x000107c278a8(&uStack_110);
    FUN_10b12b860(param_1 + 0xe);
    FUN_10b12878c(plVar4);
    func_0x00010b1777f4();
    func_0x00010b1754e4();
    puVar2 = param_1;
    FUN_10b16d514();
    func_0x00010b177578();
    func_0x00010b1750d4();
    if (puVar2 != (undefined8 *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    return param_1;
  }
  return param_1;
}


