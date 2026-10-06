/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10726e5fc; end: 10726e697;  */

long FUN_10726e5fc(long param_1)

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
  if ((uVar2 != 0) && (func_0x0001072750b4(), extraout_x8 != 0)) {
    func_0x000107274e78();
    func_0x0001072746e8();
    if ((bool)in_ZR) {
      unaff_x24 = unaff_x20 & unaff_x23;
    }
    else {
      func_0x000107274fe8();
      if ((bool)in_CY) {
        func_0x000107274fdc();
      }
    }
    func_0x000107274ff4();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        func_0x000107274fd0();
        if (!(bool)in_ZR) break;
        func_0x00010727463c();
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
          func_0x000107274f40();
          uVar1 = extraout_x8_01;
        }
      }
      in_ZR = 1;
    } while (uVar1 == unaff_x24);
  }
  return 0;
}



/* Entry: 10726e698; end: 10726e6bf;  */

void FUN_10726e698(void)

{
  func_0x0001072750cc();
  func_0x00010743fa9c();
  return;
}



/* Entry: 10726e6c0; end: 10726e72f;  */

void FUN_10726e6c0(long param_1)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747cc();
  FUN_10726e730();
  FUN_10726e7b4(param_1 + 0x20,unaff_x20 + 0x20);
  uVar1 = *(undefined4 *)(unaff_x20 + 0x48);
  *(undefined1 *)(unaff_x19 + 0x4c) = *(undefined1 *)(unaff_x20 + 0x4c);
  *(undefined4 *)(unaff_x19 + 0x48) = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x50,unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(unaff_x20 + 0x68);
  return;
}



/* Entry: 10726e730; end: 10726e75f;  */

void FUN_10726e730(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x000107274918();
  *(undefined4 *)(param_1 + 0x18) = extraout_w8;
  FUN_10726e760();
  return;
}



/* Entry: 10726e760; end: 10726e7a7;  */

void FUN_10726e760(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747cc();
  FUN_1072622ec();
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 != 0xffffffff) {
    func_0x000107274690((&PTR_FUN_110995f98)[uVar1]);
    *(uint *)(unaff_x19 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 10726e7a8; end: 10726e7b3;  */

void FUN_10726e7a8(undefined8 *param_1,undefined4 *param_2)

{
  *(undefined4 *)*param_1 = *param_2;
  return;
}



/* Entry: 10726e7b4; end: 10726e80b;  */

void FUN_10726e7b4(undefined8 *param_1,long param_2)

{
  func_0x00010726e7e8();
  *param_1 = &PTR_FUN_110996720;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  return;
}



/* Entry: 10726e80c; end: 10726e84f;  */

void FUN_10726e80c(long param_1)

{
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    func_0x0001072745a8((&PTR_FUN_110995fa8)[*(uint *)(param_1 + 0x10)]);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 10726e850; end: 10726e863;  */

void FUN_10726e850(void)

{
  return;
}



/* Entry: 10726e864; end: 10726e987;  */

void FUN_10726e864(long *param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  ulong extraout_x10;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar4;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  long *extraout_x13;
  long *extraout_x13_00;
  long *plVar5;
  long *plVar6;
  
  plVar2 = param_1;
  if ((long)param_2 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else {
    plVar6 = param_2;
    if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
      func_0x000107275774();
      plVar6 = plVar2;
    }
  }
  uVar1 = (long *)param_1[1] <= plVar6;
  if (!(bool)uVar1 || plVar6 == (long *)param_1[1]) {
    if ((bool)uVar1) {
      return;
    }
    func_0x000107274568((float)(ulong)param_1[3],(int)param_1[4]);
    if (((bool)uVar1) && (func_0x000107274be4(), extraout_x8_01 == 0)) {
      func_0x0001072740fc();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x000107275314();
    if ((bool)uVar1) {
      return;
    }
    if (plVar6 == (long *)0x0) {
      FUN_10726e988(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)plVar6 >> 0x3d == 0) {
    __Znwm((long)plVar6 << 3);
    func_0x0001001686b8();
    FUN_10726e988();
    func_0x0001001686dc();
    plVar2 = extraout_x9;
    while (uVar1 = plVar6 == plVar2, !(bool)uVar1) {
      func_0x0001001686ec();
      plVar2 = extraout_x9_00;
    }
    if (param_1[2] != 0) {
      func_0x0001072742e0();
      func_0x0001072742f4();
      plVar2 = extraout_x9_01;
      while (*plVar2 != 0) {
        func_0x000107274bf0();
        lVar3 = extraout_x8;
        plVar2 = extraout_x12;
        plVar4 = extraout_x11;
        if ((bool)uVar1) {
          plVar5 = (long *)((ulong)extraout_x13 & extraout_x10);
        }
        else {
          plVar5 = extraout_x13;
          if (plVar6 <= extraout_x13) {
            func_0x000107274bd8();
            lVar3 = extraout_x8_00;
            plVar4 = extraout_x11_00;
            plVar2 = extraout_x12_00;
            plVar5 = extraout_x13_00;
          }
        }
        uVar1 = plVar5 == plVar4;
        if (!(bool)uVar1) {
          if (*(long *)(lVar3 + (long)plVar5 * 8) == 0) {
            func_0x000107274bcc();
            plVar2 = extraout_x12_01;
          }
          else {
            func_0x00010727411c();
            plVar2 = extraout_x9_02;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar3 = *plVar2;
  *plVar2 = (long)param_2;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10726e988; end: 10726e99f;  */

void FUN_10726e988(long *param_1,long param_2)

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



/* Entry: 10726e9a0; end: 10726ea1b;  */

void FUN_10726e9a0(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x000107274b40();
  if (unaff_x20 != 0) {
    func_0x000107275404();
    if ((bool)in_ZR) {
      func_0x00010726e9d4(unaff_x20 + 0x10);
    }
    func_0x000107274f38();
  }
  return;
}



/* Entry: 10726ea1c; end: 10726ea6f;  */

undefined8 * FUN_10726ea1c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000104c2fe00(param_1 + 1,param_2 + 1);
  func_0x000107275250();
  FUN_10726ec14();
  return param_1;
}



/* Entry: 10726ea70; end: 10726eae3;  */

undefined8 FUN_10726ea70(void)

{
  undefined8 unaff_x19;
  
  func_0x000107274b50();
  func_0x00010726ea94();
  func_0x000100168718();
  FUN_10726eae4();
  return unaff_x19;
}



/* Entry: 10726eae4; end: 10726eafb;  */

void FUN_10726eae4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10726eafc; end: 10726eb6f;  */

undefined8 FUN_10726eafc(void)

{
  undefined8 unaff_x19;
  
  func_0x000107274b50();
  func_0x00010726eb20();
  func_0x000100168718();
  FUN_10726eb70();
  return unaff_x19;
}



/* Entry: 10726eb70; end: 10726eb87;  */

void FUN_10726eb70(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10726eb88; end: 10726ebfb;  */

undefined8 FUN_10726eb88(void)

{
  undefined8 unaff_x19;
  
  func_0x000107274b50();
  func_0x00010726ebac();
  func_0x000100168718();
  FUN_10726ebfc();
  return unaff_x19;
}



/* Entry: 10726ebfc; end: 10726ec13;  */

void FUN_10726ebfc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10726ec14; end: 10726ec6b;  */

void FUN_10726ec14(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747cc();
  func_0x000107275140();
  uVar1 = *(uint *)(unaff_x20 + 0x58);
  if (uVar1 != 0xffffffff) {
    func_0x000107274690((&PTR_FUN_110995fc8)[uVar1]);
    *(uint *)(unaff_x19 + 0x58) = uVar1;
  }
  return;
}



/* Entry: 10726ec6c; end: 10726ec87;  */

void FUN_10726ec6c(undefined8 *param_1,undefined4 *param_2)

{
  *(undefined4 *)*param_1 = *param_2;
  return;
}



/* Entry: 10726ec88; end: 10726ecfb;  */

undefined8 FUN_10726ec88(void)

{
  undefined8 unaff_x19;
  
  func_0x000107274b50();
  func_0x00010726ecac();
  func_0x000100168718();
  FUN_10726ecfc();
  return unaff_x19;
}



/* Entry: 10726ecfc; end: 10726ed13;  */

void FUN_10726ecfc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10726ed14; end: 10726ed2f;  */

void FUN_10726ed14(void)

{
  undefined1 uStack_11;
  
  FUN_10726ed30(&uStack_11);
  return;
}



/* Entry: 10726ed30; end: 10726ed8b;  */

void FUN_10726ed30(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x000107274260();
  func_0x000107275000();
  FUN_10726ed8c();
  *puStack_30 = &PTR_FUN_110996810;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = 0;
  func_0x00010727428c();
  func_0x00010726edf4();
  func_0x00010727416c(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x0001072752c0();
  FUN_10726edac();
  func_0x000107275158();
  return;
}



/* Entry: 10726ed8c; end: 10726edab;  */

void FUN_10726ed8c(void)

{
  func_0x0001072752c0();
  FUN_10726edac();
  func_0x000107275158();
  return;
}



/* Entry: 10726edac; end: 10726edc7;  */

void FUN_10726edac(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110996810;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10726edc8; end: 10726edcb;  */

void FUN_10726edc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110996810;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10726edcc; end: 10726eddf;  */

void FUN_10726edcc(void)

{
  func_0x00010726ede8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10726ede0; end: 10726ee03;  */

void FUN_10726ede0(void)

{
  return;
}



/* Entry: 10726ee04; end: 10726ef73;  */

void FUN_10726ee04(long param_1)

{
  func_0x000107274970();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10726ef74; end: 10726ef8b;  */

void FUN_10726ef74(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10726ef8c; end: 10726efff;  */

undefined8 FUN_10726ef8c(void)

{
  undefined8 unaff_x19;
  
  func_0x000107274b50();
  func_0x00010726efb0();
  func_0x000100168718();
  FUN_10726f000();
  return unaff_x19;
}



/* Entry: 10726f000; end: 10726f017;  */

void FUN_10726f000(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10726f018; end: 10726f08b;  */

undefined8 FUN_10726f018(void)

{
  undefined8 unaff_x19;
  
  func_0x000107274b50();
  func_0x00010726f03c();
  func_0x000100168718();
  FUN_10726f08c();
  return unaff_x19;
}



/* Entry: 10726f08c; end: 10726f0a3;  */

void FUN_10726f08c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10726f0a4; end: 10726f117;  */

undefined8 FUN_10726f0a4(void)

{
  undefined8 unaff_x19;
  
  func_0x000107274b50();
  func_0x00010726f0c8();
  func_0x000100168718();
  FUN_10726f118();
  return unaff_x19;
}



/* Entry: 10726f118; end: 10726f12f;  */

void FUN_10726f118(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10726f130; end: 10726f173;  */

long * FUN_10726f130(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_10726f174();
  puVar1 = (undefined8 *)param_1[2];
  for (puVar2 = (undefined8 *)param_1[1]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    __ZdlPv(*puVar2);
  }
  FUN_10726f2c0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10726f174; end: 10726f25b;  */

void FUN_10726f174(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = (long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) / 0x2e) * 8);
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *plVar6 + (*(ulong *)(param_1 + 0x20) % 0x2e) * 0x58;
  }
  lVar1 = param_1;
  FUN_10726f25c();
  do {
    lVar7 = lVar5 + -0xfd0;
    do {
      if (lVar5 == lVar1) {
        *(undefined8 *)(param_1 + 0x28) = 0;
        puVar2 = *(undefined8 **)(param_1 + 8);
        while (uVar4 = *(long *)(param_1 + 0x10) - (long)puVar2 >> 3, 2 < uVar4) {
          __ZdlPv(*puVar2);
          puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
          *(undefined8 **)(param_1 + 8) = puVar2;
        }
        if (uVar4 == 1) {
          uVar3 = 0x17;
        }
        else {
          if (uVar4 != 2) {
            return;
          }
          uVar3 = 0x2e;
        }
        *(undefined8 *)(param_1 + 0x20) = uVar3;
        return;
      }
      func_0x000107264c34(lVar5);
      lVar5 = lVar5 + 0x58;
      lVar7 = lVar7 + 0x58;
    } while (*plVar6 != lVar7);
    plVar6 = plVar6 + 1;
    lVar5 = *plVar6;
  } while( true );
}



/* Entry: 10726f25c; end: 10726f293;  */

long FUN_10726f25c(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return 0;
  }
  uVar1 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
  return *(long *)(*(long *)(param_1 + 8) + (uVar1 / 0x2e) * 8) + (uVar1 % 0x2e) * 0x58;
}



/* Entry: 10726f294; end: 10726f2bf;  */

long * FUN_10726f294(long *param_1)

{
  FUN_10726f2c0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10726f2c0; end: 10726f2e3;  */

void FUN_10726f2c0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10726f2e4; end: 10726f34f;  */

undefined8 FUN_10726f2e4(void)

{
  undefined8 unaff_x19;
  
  func_0x000107274b50();
  func_0x00010726f308();
  func_0x000100168718();
  FUN_10726f350();
  return unaff_x19;
}



/* Entry: 10726f350; end: 10726f367;  */

void FUN_10726f350(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10726f368; end: 10726f38f;  */

long FUN_10726f368(long param_1)

{
  FUN_10726f390();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10726f390; end: 10726f3e3;  */

void FUN_10726f390(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107274b5c();
  if (param_1 != 0) {
    func_0x000107250860();
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  FUN_1072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10726f3e4; end: 10726f3f7;  */

void FUN_10726f3e4(void)

{
  func_0x00010726f3b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10726f3f8; end: 10726f41b;  */

long FUN_10726f3f8(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107275294();
  func_0x0001072747d8();
  *param_1 = &PTR_SUB_110995ff8;
  FUN_10726faf8(param_1 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return unaff_x20;
}



/* Entry: 10726f41c; end: 10726f43f;  */

void FUN_10726f41c(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747d8(param_2,param_1 + 8);
  *param_2 = &PTR_SUB_110995ff8;
  FUN_10726faf8(param_2 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10726f440; end: 10726fa8f;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010726f79c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10726f440(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *unaff_x20;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *unaff_x28;
  undefined1 auStack_600 [16];
  long alStack_5f0 [2];
  undefined1 auStack_5e0 [64];
  undefined1 auStack_5a0 [48];
  undefined1 uStack_570;
  undefined1 auStack_568 [48];
  undefined1 uStack_538;
  undefined1 auStack_530 [48];
  undefined1 uStack_500;
  undefined1 auStack_4f8 [40];
  undefined1 uStack_4d0;
  undefined1 auStack_4c8 [40];
  undefined1 uStack_4a0;
  undefined1 auStack_498 [32];
  undefined1 auStack_478 [32];
  undefined1 uStack_458;
  undefined1 auStack_450 [24];
  uint uStack_438;
  undefined1 uStack_430;
  undefined1 auStack_428 [32];
  undefined1 auStack_408 [32];
  undefined1 auStack_3e8 [88];
  undefined8 uStack_390;
  undefined1 auStack_388 [48];
  undefined1 auStack_358 [24];
  undefined1 uStack_340;
  undefined8 uStack_338;
  undefined4 uStack_330;
  ulong uStack_328;
  long *plStack_320;
  long *plStack_318;
  long lStack_310;
  undefined4 uStack_308;
  undefined1 uStack_300;
  long *plStack_2f8;
  long **pplStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_10;
  
  func_0x0001072754a0();
  func_0x000107274388();
  iVar5 = (int)auStack_600;
  uStack_10 = extraout_x8;
  func_0x000107275784();
  func_0x000107275688();
  if (iVar5 != 0) {
    lVar9 = *(long *)(param_2 + 0x20);
    FUN_10724bb70(alStack_5f0,lVar9 + 0x18);
    if (alStack_5f0[0] != 0) {
      lVar9 = *(long *)(lVar9 + 0x10);
      FUN_107263b58(auStack_5e0,param_3);
      auStack_5a0[0] = 0;
      uStack_570 = 0;
      if (*(char *)(param_3 + 0x70) == '\x01') {
        FUN_10726fcd0(auStack_5a0,param_3 + 0x40);
      }
      auStack_568[0] = 0;
      uStack_538 = 0;
      if (*(char *)(param_3 + 0xa8) == '\x01') {
        func_0x00010726fd14(auStack_568,param_3 + 0x78);
      }
      auStack_530[0] = 0;
      uStack_500 = 0;
      if (*(char *)(param_3 + 0xe0) == '\x01') {
        func_0x00010726fd58(auStack_530,param_3 + 0xb0);
      }
      auStack_4f8[0] = 0;
      uStack_4d0 = 0;
      bVar3 = *(char *)(param_3 + 0x110) == '\x01';
      if (bVar3) {
        FUN_107270b5c(auStack_4f8,param_3 + 0xe8);
      }
      auStack_4c8[0] = 0;
      uStack_4a0 = 0;
      bVar4 = *(char *)(param_3 + 0x140) == '\x01';
      uStack_4d0 = bVar3;
      if (bVar4) {
        FUN_1072716d4(auStack_4c8,param_3 + 0x118);
      }
      uStack_4a0 = bVar4;
      FUN_10726fdbc(auStack_498,param_3 + 0x148);
      auStack_478[0] = 0;
      uStack_458 = 0;
      if (*(char *)(param_3 + 0x188) == '\x01') {
        func_0x00010726ff3c(auStack_478,param_3 + 0x168);
      }
      auStack_450[0] = 0;
      uStack_430 = 0;
      if (*(char *)(param_3 + 0x1b0) == '\x01') {
        uStack_438 = 0xffffffff;
        FUN_10726ff9c(auStack_450);
        uVar1 = *(uint *)(param_3 + 0x1a8);
        if (uVar1 != 0xffffffff) {
          plStack_2f8 = (long *)auStack_450;
          (*(code *)(&PTR_DAT_110996088)[uVar1])(&plStack_2f8,param_3 + 400);
          uStack_438 = uVar1;
        }
        uStack_430 = 1;
      }
      func_0x00010028af84(auStack_428,param_3 + 0x1b8);
      func_0x00010028af84(auStack_408,param_3 + 0x1d8);
      FUN_107270038(auStack_3e8,param_3 + 0x1f8);
      uStack_390 = *(undefined8 *)(param_3 + 0x250);
      func_0x00010527d568(auStack_388,param_3 + 600);
      auStack_358[0] = 0;
      uStack_340 = 0;
      if (*(char *)(param_3 + 0x2a0) == '\x01') {
        FUN_10727007c(auStack_358,param_3 + 0x288);
      }
      uStack_338 = *(undefined8 *)(param_3 + 0x2a8);
      uStack_330 = *(undefined4 *)(param_3 + 0x2b0);
      uStack_328 = uStack_328 & 0xffffffffffffff00;
      uStack_300 = 0;
      uVar2 = (int)(*(byte *)(param_3 + 0x2e0) - 1) < 0;
      in_ZR = *(byte *)(param_3 + 0x2e0) == 1;
      if ((bool)in_ZR) {
        plStack_320 = (long *)0x0;
        uStack_328 = 0;
        lStack_310 = 0;
        plStack_318 = (long *)0x0;
        uStack_308 = *(undefined4 *)(param_3 + 0x2d8);
        FUN_1072700fc(&uStack_328,*(undefined8 *)(param_3 + 0x2c0));
        plVar13 = (long *)(param_3 + 0x2c8);
LAB_10726f6ac:
        plVar13 = (long *)*plVar13;
        if (plVar13 != (long *)0x0) {
          plVar8 = &lStack_310;
          func_0x000100102e7c(plVar8,plVar13 + 2);
          plVar11 = plStack_320;
          if (plStack_320 != (long *)0x0) {
            uVar12 = (long)plStack_320 - 1;
            if (((ulong)plStack_320 & uVar12) == 0) {
              unaff_x28 = (long *)(uVar12 & (ulong)plVar8);
              in_ZR = true;
              uVar2 = false;
            }
            else {
              uVar2 = (long)plVar8 - (long)plStack_320 < 0;
              in_ZR = plVar8 == plStack_320;
              unaff_x28 = plVar8;
              if (plStack_320 <= plVar8) {
                uVar6 = 0;
                if (plStack_320 != (long *)0x0) {
                  uVar6 = (ulong)plVar8 / (ulong)plStack_320;
                }
                unaff_x28 = (long *)((long)plVar8 - uVar6 * (long)plStack_320);
              }
            }
            plVar10 = *(long **)(uStack_328 + (long)unaff_x28 * 8);
            if (plVar10 != (long *)0x0) {
              do {
                while( true ) {
                  plVar10 = (long *)*plVar10;
                  if (plVar10 == (long *)0x0) goto LAB_10726f750;
                  plVar7 = (long *)plVar10[1];
                  uVar2 = (long)plVar7 - (long)plVar8 < 0;
                  in_ZR = plVar7 == plVar8;
                  if (!(bool)in_ZR) break;
                  uVar6 = (ulong)(plVar10 + 2);
                  func_0x0001000e107c(uVar6,plVar13 + 2);
                  if ((uVar6 & 1) != 0) goto LAB_10726f6ac;
                }
                if (((ulong)plVar11 & uVar12) == 0) {
                  plVar7 = (long *)((ulong)plVar7 & uVar12);
                }
                else if (plVar11 <= plVar7) {
                  uVar6 = 0;
                  if (plVar11 != (long *)0x0) {
                    uVar6 = (ulong)plVar7 / (ulong)plVar11;
                  }
                  plVar7 = (long *)((long)plVar7 - uVar6 * (long)plVar11);
                }
                uVar2 = (long)plVar7 - (long)unaff_x28 < 0;
                in_ZR = plVar7 == unaff_x28;
              } while ((bool)in_ZR);
            }
          }
LAB_10726f750:
          plVar10 = (long *)0x70;
          __Znwm();
          uStack_2e8 = 0;
          *plVar10 = 0;
          plVar10[1] = (long)plVar8;
          plStack_2f8 = plVar10;
          pplStack_2f0 = &plStack_318;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (plVar10 + 2,plVar13 + 2);
          func_0x00010793bd74(plVar10 + 5,0,plVar13 + 5);
          uStack_2e8 = CONCAT71(uStack_2e8._1_7_,1);
          func_0x000107274964(lStack_310);
          if (plVar11 == (long *)0x0) {
LAB_10726f7a4:
            func_0x000107275860();
            func_0x00010727413c();
            FUN_1072700fc(&uStack_328);
            plVar11 = plStack_320;
            if (((ulong)plStack_320 & (long)plStack_320 - 1U) == 0) {
              in_ZR = 1;
              bVar3 = false;
              unaff_x28 = (long *)((long)plStack_320 - 1U & (ulong)plVar8);
            }
            else {
              bVar3 = (long)plVar8 - (long)plStack_320 < 0;
              in_ZR = plVar8 == plStack_320;
              unaff_x28 = plVar8;
              if (plStack_320 <= plVar8) {
                uVar12 = 0;
                if (plStack_320 != (long *)0x0) {
                  uVar12 = (ulong)plVar8 / (ulong)plStack_320;
                }
                unaff_x28 = (long *)((long)plVar8 - uVar12 * (long)plStack_320);
              }
            }
          }
          else {
            func_0x000107274958(param_1,uStack_308,(float)plVar11);
            bVar3 = false;
            if ((bool)uVar2) goto LAB_10726f7a4;
          }
          uVar2 = bVar3;
          plVar8 = *(long **)(uStack_328 + (long)unaff_x28 * 8);
          if (plVar8 == (long *)0x0) {
            *plStack_2f8 = (long)plStack_318;
            plStack_318 = plStack_2f8;
            *(long ***)(uStack_328 + (long)unaff_x28 * 8) = &plStack_318;
            if (*plStack_2f8 != 0) {
              plVar8 = *(long **)(*plStack_2f8 + 8);
              if (((ulong)plVar11 & (long)plVar11 - 1U) == 0) {
                plVar8 = (long *)((ulong)plVar8 & (long)plVar11 - 1U);
                in_ZR = true;
                uVar2 = false;
              }
              else {
                uVar2 = (long)plVar8 - (long)plVar11 < 0;
                in_ZR = plVar8 == plVar11;
                if (plVar11 <= plVar8) {
                  uVar12 = 0;
                  if (plVar11 != (long *)0x0) {
                    uVar12 = (ulong)plVar8 / (ulong)plVar11;
                  }
                  plVar8 = (long *)((long)plVar8 - uVar12 * (long)plVar11);
                }
              }
              *(long **)(uStack_328 + (long)plVar8 * 8) = plStack_2f8;
            }
          }
          else {
            *plStack_2f8 = *plVar8;
            *plVar8 = (long)plStack_2f8;
          }
          plStack_2f8 = (long *)0x0;
          lStack_310 = lStack_310 + 1;
          FUN_107270254(&plStack_2f8);
          goto LAB_10726f6ac;
        }
        uStack_300 = 1;
      }
      unaff_x20 = (long *)0x308;
      __Znwm();
      FUN_107270358(&plStack_2f8,auStack_5e0);
      *unaff_x20 = (long)&PTR_DAT_1109960d8;
      unaff_x20[1] = lVar9;
      unaff_x20[2] = (long)FUN_10725f1dc;
      unaff_x20[3] = 0;
      FUN_107270358(unaff_x20 + 4,&plStack_2f8);
      func_0x000107270a74(&plStack_2f8);
      plStack_2f8 = unaff_x20;
      func_0x000107270a74(auStack_5e0);
      func_0x0001073ae140(alStack_5f0[0],&plStack_2f8);
      plVar13 = plStack_2f8;
      plStack_2f8 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        func_0x000107274528();
      }
    }
    func_0x00010724bcd8(alStack_5f0);
  }
  func_0x000107270b00();
  func_0x00010727416c(uStack_10);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10726ff9c(unaff_x20);
  FUN_107270008(unaff_x20);
  FUN_10726ff7c(auStack_478);
  func_0x00010726ff1c(auStack_498);
  func_0x00010726fd9c(auStack_4c8);
  FUN_107262afc(auStack_4f8);
  func_0x00010726fd7c(auStack_530);
  func_0x00010726fd38(auStack_568);
  func_0x00010726fcf4(auStack_5a0);
  func_0x00010724b3d8(auStack_5e0);
  func_0x00010724bcd8(alStack_5f0);
  func_0x000107270b00(auStack_600);
  func_0x00010727477c();
  func_0x000107275910();
  func_0x000107275248();
  func_0x000107274ebc();
  return;
}



/* Entry: 10726fa90; end: 10726fab7;  */

void FUN_10726fa90(undefined8 param_1)

{
  func_0x000107275910();
  func_0x000107275248(param_1,&PTR_DAT_110996108);
  func_0x000107274ebc();
  return;
}



/* Entry: 10726fab8; end: 10726fac3;  */

undefined ** FUN_10726fab8(void)

{
  return &PTR_DAT_110996108;
}



/* Entry: 10726fac4; end: 10726faf7;  */

void FUN_10726fac4(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747d8();
  *param_1 = &PTR_SUB_110995ff8;
  FUN_10726faf8(param_1 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10726faf8; end: 10726fb27;  */

void FUN_10726faf8(undefined8 *param_1,undefined8 *param_2)

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
      func_0x000107274880();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 10726fb28; end: 10726fccf;  */

void FUN_10726fb28(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long **pplVar3;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  pplVar3 = &plStack_50;
  func_0x00010726fc00(&plStack_30,param_2);
  if (plStack_30 != (long *)0x0) {
    func_0x00010726fc3c();
    uVar2 = uStack_28;
    plVar1 = plStack_30;
    if (*plStack_30 != -1) {
      plStack_30 = (long *)0x0;
      uStack_28 = 0;
      *param_1 = plVar1;
      param_1[1] = uVar2;
      uStack_40 = 0;
      uStack_38 = 0;
      FUN_1072508cc(&uStack_40);
      pplVar3 = &plStack_30;
      goto LAB_10726fba0;
    }
    func_0x00010726fc88();
  }
  FUN_1072508cc(&plStack_30);
  *param_1 = 0;
  param_1[1] = 0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
LAB_10726fba0:
  FUN_1072508cc(pplVar3);
  return;
}



/* Entry: 10726fcd0; end: 10726fce7;  */

void FUN_10726fcd0(void)

{
  FUN_10726fce8();
  func_0x000107275218();
  return;
}



/* Entry: 10726fce8; end: 10726fcf3;  */

void FUN_10726fce8(undefined8 param_1,undefined8 param_2)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x000107946698(param_1,0,param_2);
  func_0x000107946d88(&PTR_DAT_1109ee180);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946f70();
  func_0x0001079438d8();
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return;
}



/* Entry: 10726fcf4; end: 10726fd2b;  */

void FUN_10726fcf4(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000107937a10();
  }
  return;
}



/* Entry: 10726fd2c; end: 10726fd37;  */

void FUN_10726fd2c(undefined8 param_1,undefined8 param_2)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x000107946698(param_1,0,param_2);
  func_0x000107946d88(&PTR_DAT_1109ed5f0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946f70();
  func_0x000107943920();
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return;
}



/* Entry: 10726fd38; end: 10726fd6f;  */

void FUN_10726fd38(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000107938084();
  }
  return;
}



/* Entry: 10726fd70; end: 10726fd7b;  */

void FUN_10726fd70(undefined8 param_1,undefined8 param_2)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x000107946698(param_1,0,param_2);
  func_0x000107946d88(&PTR_DAT_1109ed820);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946f70();
  func_0x000107943968();
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return;
}



/* Entry: 10726fd7c; end: 10726fdbb;  */

void FUN_10726fd7c(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x00010793944c();
  }
  return;
}



/* Entry: 10726fdbc; end: 10726fdeb;  */

void FUN_10726fdbc(long param_1)

{
  func_0x000107274aa0();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_10726fdec();
  return;
}



/* Entry: 10726fdec; end: 10726fdff;  */

void FUN_10726fdec(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10726fe1c();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  return;
}



/* Entry: 10726fe00; end: 10726fe1b;  */

void FUN_10726fe00(long param_1)

{
  FUN_10726fe1c();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10726fe1c; end: 10726fe43;  */

void FUN_10726fe1c(void)

{
  func_0x00010727420c();
  func_0x0001072750c0();
  FUN_10726fe44();
  return;
}



/* Entry: 10726fe44; end: 10726fe8b;  */

void FUN_10726fe44(void)

{
  long in_x3;
  
  func_0x000107274c2c();
  if (in_x3 != 0) {
    func_0x0001072741f4();
    FUN_10726de5c();
    func_0x0001072743a8();
    FUN_10726fe8c();
  }
  func_0x0001072745c0();
  func_0x00010726dfe0();
  return;
}



/* Entry: 10726fe8c; end: 10726feb3;  */

void FUN_10726fe8c(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x000107274d4c();
  func_0x000107274cd8();
  FUN_10726feb4();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10726feb4; end: 10726fec7;  */

void FUN_10726feb4(void)

{
  FUN_10726fec8();
  return;
}



/* Entry: 10726fec8; end: 10726ff1b;  */

long FUN_10726fec8(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x0001072749e4();
  func_0x000107274180();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x38) {
    func_0x000107274b34();
    func_0x000104c2fe00();
    unaff_x19 = uStack_38 + 0x38;
    uStack_38 = unaff_x19;
  }
  func_0x00010727461c();
  FUN_10726df70();
  return unaff_x19;
}



/* Entry: 10726ff1c; end: 10726ff57;  */

void FUN_10726ff1c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10726e078();
  }
  return;
}



/* Entry: 10726ff58; end: 10726ff7b;  */

void FUN_10726ff58(long param_1,long param_2)

{
  FUN_10726fe1c();
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  return;
}



/* Entry: 10726ff7c; end: 10726ff9b;  */

void FUN_10726ff7c(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_10726e078();
  }
  return;
}



/* Entry: 10726ff9c; end: 10726ffd7;  */

void FUN_10726ff9c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  
  func_0x0001072753a4();
  if (!(bool)in_ZR) {
    func_0x0001072745a8((&PTR_FUN_110996068)[extraout_x8]);
  }
  *(undefined4 *)(unaff_x19 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 10726ffd8; end: 107270007;  */

void FUN_10726ffd8(void)

{
  return;
}



/* Entry: 107270008; end: 107270037;  */

long FUN_107270008(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_10726ff9c(param_1);
  }
  return param_1;
}



/* Entry: 107270038; end: 107270067;  */

void FUN_107270038(long param_1)

{
  func_0x000107274aa0();
  *(undefined1 *)(param_1 + 0x50) = 0;
  FUN_107270068();
  return;
}



/* Entry: 107270068; end: 10727007b;  */

void FUN_107270068(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_107263384();
    *(undefined1 *)(param_1 + 0x50) = 1;
    return;
  }
  return;
}



/* Entry: 10727007c; end: 107270097;  */

void FUN_10727007c(long param_1)

{
  FUN_107270098();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 107270098; end: 1072700a3;  */

undefined8 FUN_107270098(undefined8 param_1,undefined8 param_2)

{
  func_0x0001079473f4(param_1,0,param_2);
  func_0x00010793a790();
  return param_1;
}



/* Entry: 1072700a4; end: 1072700c3;  */

void FUN_1072700a4(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010793aa04();
  }
  return;
}



/* Entry: 1072700c4; end: 1072700e3;  */

void FUN_1072700c4(void)

{
  func_0x000100168718();
  FUN_1072700e4();
  return;
}



/* Entry: 1072700e4; end: 1072700fb;  */

void FUN_1072700e4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072700fc; end: 107270177;  */

void FUN_1072700fc(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  
  func_0x000100168540();
  if ((!(bool)in_ZR) && (func_0x000107274d1c(), !(bool)in_ZR)) {
    func_0x000107274b2c();
  }
  func_0x0001001685c8();
  if ((bool)in_CY && !(bool)in_ZR) {
LAB_107270134:
    func_0x0001001685d4();
    if (param_2 == 0) {
      FUN_107270224(param_1);
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      func_0x0001001685e0();
      FUN_10727023c();
      func_0x0001001686b8();
      FUN_107270224();
      func_0x0001001686dc();
      uVar3 = extraout_x9;
      while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
        func_0x0001001686ec();
        uVar3 = extraout_x9_00;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        func_0x0001072742e0();
        func_0x0001072742f4();
        plVar4 = extraout_x9_01;
        while (*plVar4 != 0) {
          func_0x000107274bf0();
          lVar2 = extraout_x8_00;
          plVar4 = extraout_x12;
          uVar3 = extraout_x11;
          if ((bool)uVar1) {
            uVar5 = extraout_x13 & extraout_x10;
          }
          else {
            uVar5 = extraout_x13;
            if (unaff_x19 <= extraout_x13) {
              func_0x000107274bd8();
              lVar2 = extraout_x8_01;
              uVar3 = extraout_x11_00;
              plVar4 = extraout_x12_00;
              uVar5 = extraout_x13_00;
            }
          }
          uVar1 = uVar5 == uVar3;
          if (!(bool)uVar1) {
            if (*(long *)(lVar2 + uVar5 * 8) == 0) {
              func_0x000107274bcc();
              plVar4 = extraout_x12_01;
            }
            else {
              func_0x00010727411c();
              plVar4 = extraout_x9_02;
            }
          }
        }
      }
    }
    return;
  }
  if (!(bool)in_CY) {
    func_0x00010727419c();
    if (((bool)in_CY) && (func_0x000107274be4(), extraout_x8 == 0)) {
      func_0x0001072740fc();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x00010727462c();
    if (!(bool)in_CY) goto LAB_107270134;
  }
  return;
}



/* Entry: 107270178; end: 107270223;  */

void FUN_107270178(long param_1,long param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  
  if (param_2 == 0) {
    FUN_107270224(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    func_0x0001001685e0();
    FUN_10727023c();
    func_0x0001001686b8();
    FUN_107270224();
    func_0x0001001686dc();
    uVar3 = extraout_x9;
    while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
      func_0x0001001686ec();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x0001072742e0();
      func_0x0001072742f4();
      plVar4 = extraout_x9_01;
      while (*plVar4 != 0) {
        func_0x000107274bf0();
        lVar2 = extraout_x8;
        plVar4 = extraout_x12;
        uVar3 = extraout_x11;
        if ((bool)uVar1) {
          uVar5 = extraout_x13 & extraout_x10;
        }
        else {
          uVar5 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x000107274bd8();
            lVar2 = extraout_x8_00;
            uVar3 = extraout_x11_00;
            plVar4 = extraout_x12_00;
            uVar5 = extraout_x13_00;
          }
        }
        uVar1 = uVar5 == uVar3;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + uVar5 * 8) == 0) {
            func_0x000107274bcc();
            plVar4 = extraout_x12_01;
          }
          else {
            func_0x00010727411c();
            plVar4 = extraout_x9_02;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 107270224; end: 10727023b;  */

void FUN_107270224(long *param_1,long param_2)

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



/* Entry: 10727023c; end: 107270253;  */

void FUN_10727023c(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000100168718();
  FUN_107270274();
  return;
}



/* Entry: 107270254; end: 107270273;  */

void FUN_107270254(void)

{
  func_0x000100168718();
  FUN_107270274();
  return;
}



/* Entry: 107270274; end: 10727028b;  */

void FUN_107270274(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x000107274adc(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x0001072702c4(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10727028c; end: 107270337;  */

void FUN_10727028c(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x000107274adc();
  if ((bool)in_ZR) {
    func_0x0001072702c4(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107270338; end: 107270357;  */

void FUN_107270338(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x0001072702e4();
  }
  return;
}



/* Entry: 107270358; end: 10727054f;  */

void FUN_107270358(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  
  func_0x0001072747cc();
  FUN_1072649c8();
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  if (*(char *)(unaff_x20 + 0x70) == '\x01') {
    FUN_107270550((undefined1 *)(param_1 + 0x40),unaff_x20 + 0x40);
  }
  *(undefined1 *)(unaff_x19 + 0x78) = 0;
  *(undefined1 *)(unaff_x19 + 0xa8) = 0;
  if (*(char *)(unaff_x20 + 0xa8) == '\x01') {
    FUN_1072705f8((undefined1 *)(unaff_x19 + 0x78),unaff_x20 + 0x78);
  }
  *(undefined1 *)(unaff_x19 + 0xb0) = 0;
  *(undefined1 *)(unaff_x19 + 0xe0) = 0;
  if (*(char *)(unaff_x20 + 0xe0) == '\x01') {
    FUN_1072706a0((undefined1 *)(unaff_x19 + 0xb0),unaff_x20 + 0xb0);
  }
  *(undefined1 *)(unaff_x19 + 0xe8) = 0;
  *(undefined1 *)(unaff_x19 + 0x110) = 0;
  if (*(char *)(unaff_x20 + 0x110) == '\x01') {
    FUN_107270748((undefined1 *)(unaff_x19 + 0xe8),unaff_x20 + 0xe8);
  }
  *(undefined1 *)(unaff_x19 + 0x118) = 0;
  *(undefined1 *)(unaff_x19 + 0x140) = 0;
  if (*(char *)(unaff_x20 + 0x140) == '\x01') {
    func_0x000107270764(unaff_x19 + 0x118,unaff_x20 + 0x118);
  }
  FUN_107270780(unaff_x19 + 0x148,unaff_x20 + 0x148);
  *(undefined1 *)(unaff_x19 + 0x168) = 0;
  *(undefined1 *)(unaff_x19 + 0x188) = 0;
  if (*(char *)(unaff_x20 + 0x188) == '\x01') {
    FUN_1072707c0(unaff_x19 + 0x168,unaff_x20 + 0x168);
  }
  *(undefined1 *)(unaff_x19 + 400) = 0;
  *(undefined1 *)(unaff_x19 + 0x1b0) = 0;
  uVar1 = *(char *)(unaff_x20 + 0x1b0) == '\x01';
  if ((bool)uVar1) {
    func_0x0001072758f0();
    FUN_1072707f4();
  }
  func_0x000107275880();
  if ((bool)uVar1) {
    func_0x000107274ce4();
  }
  *(undefined1 *)(unaff_x19 + 0x1d8) = 0;
  *(undefined1 *)(unaff_x19 + 0x1f0) = 0;
  if (*(char *)(unaff_x20 + 0x1f0) == '\x01') {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x1e0);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x1d8);
    *(undefined8 *)(unaff_x19 + 0x1e8) = *(undefined8 *)(unaff_x20 + 0x1e8);
    *(undefined8 *)(unaff_x19 + 0x1e0) = uVar3;
    *(undefined8 *)(unaff_x19 + 0x1d8) = uVar2;
    *(undefined8 *)(unaff_x20 + 0x1e0) = 0;
    *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
    *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
    *(undefined1 *)(unaff_x19 + 0x1f0) = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x1f8) = 0;
  *(undefined1 *)(unaff_x19 + 0x248) = 0;
  if (*(char *)(unaff_x20 + 0x248) == '\x01') {
    func_0x000107270898(unaff_x19 + 0x1f8,unaff_x20 + 0x1f8);
  }
  *(undefined8 *)(unaff_x19 + 0x250) = *(undefined8 *)(unaff_x20 + 0x250);
  func_0x000100626f0c(unaff_x19 + 600,unaff_x20 + 600);
  *(undefined1 *)(unaff_x19 + 0x288) = 0;
  *(undefined1 *)(unaff_x19 + 0x2a0) = 0;
  if (*(char *)(unaff_x20 + 0x2a0) == '\x01') {
    FUN_1072708f4(unaff_x19 + 0x288,unaff_x20 + 0x288);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x2a8);
  *(undefined4 *)(unaff_x19 + 0x2b0) = *(undefined4 *)(unaff_x20 + 0x2b0);
  *(undefined8 *)(unaff_x19 + 0x2a8) = uVar2;
  *(undefined1 *)(unaff_x19 + 0x2b8) = 0;
  *(undefined1 *)(unaff_x19 + 0x2e0) = 0;
  if (*(char *)(unaff_x20 + 0x2e0) == '\x01') {
    FUN_1072709b4(unaff_x19 + 0x2b8,unaff_x20 + 0x2b8);
  }
  return;
}



/* Entry: 107270550; end: 107270567;  */

void FUN_107270550(void)

{
  FUN_107270568();
  func_0x000107275218();
  return;
}



/* Entry: 107270568; end: 107270573;  */

undefined8 FUN_107270568(undefined8 param_1,undefined8 param_2)

{
  func_0x0001072748fc(&UNK_1109ee170,param_1,0,param_2);
  FUN_1072705a0();
  return param_1;
}



/* Entry: 107270574; end: 10727059f;  */

undefined8 FUN_107270574(undefined8 param_1)

{
  func_0x0001072748fc(&UNK_1109ee170);
  FUN_1072705a0();
  return param_1;
}



/* Entry: 1072705a0; end: 1072705f7;  */

void FUN_1072705a0(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x000107274d58();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010727511c();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x000107275110();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      func_0x000107937bc0();
    }
    else {
      func_0x000107937b90();
    }
  }
  return;
}



/* Entry: 1072705f8; end: 10727060f;  */

void FUN_1072705f8(void)

{
  FUN_107270610();
  func_0x000107275218();
  return;
}



/* Entry: 107270610; end: 10727061b;  */

undefined8 FUN_107270610(undefined8 param_1,undefined8 param_2)

{
  func_0x0001072748fc(&UNK_1109ed5e0,param_1,0,param_2);
  FUN_107270648();
  return param_1;
}



/* Entry: 10727061c; end: 107270647;  */

undefined8 FUN_10727061c(undefined8 param_1)

{
  func_0x0001072748fc(&UNK_1109ed5e0);
  FUN_107270648();
  return param_1;
}


