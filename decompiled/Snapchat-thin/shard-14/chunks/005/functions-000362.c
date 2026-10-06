/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b4957f0; end: 10b49582b;  */

void FUN_10b4957f0(void)

{
  func_0x00010b49583c();
  return;
}



/* Entry: 10b49582c; end: 10b495847;  */

void FUN_10b49582c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cec988;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b495848; end: 10b495a7f;  */

void FUN_10b495848(long *param_1,undefined1 *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [16];
  undefined8 *puStack_108;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar2 = param_2;
  func_0x00010bf529e0();
  if ((undefined1 *)(param_1[2] - *param_1 >> 4) < puVar2) {
    if ((ulong)puVar2 >> 0x3c != 0) goto LAB_10b495a24;
    func_0x00010b495c1c();
    func_0x00010b495c10();
    func_0x00010b495bb0(auStack_118);
  }
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  puVar2 = param_2;
  _objc_retain();
  func_0x00010b495bfc();
  if (puVar2 != (undefined1 *)0x0) {
    lVar5 = *plStack_150;
    do {
      puVar6 = (undefined1 *)0x0;
      do {
        if (*plStack_150 != lVar5) {
          _objc_enumerationMutation(param_2);
        }
        uVar4 = *(undefined8 *)(lStack_158 + (long)puVar6 * 8);
        _objc_retain(uVar4);
        func_0x000107c281c4(&uStack_170,uVar4);
        puVar3 = (undefined8 *)param_1[1];
        if (puVar3 < (undefined8 *)param_1[2]) {
          puVar7 = puVar3 + 2;
          puVar3[1] = uStack_168;
          *puVar3 = uStack_170;
          uStack_170 = 0;
          uStack_168 = 0;
        }
        else {
          if (((long)puVar3 - *param_1 >> 4) + 1U >> 0x3c != 0) {
            FUN_10b17d6fc();
            goto LAB_10b495a28;
          }
          func_0x00010b495c1c();
          puStack_108[1] = uStack_168;
          *puStack_108 = uStack_170;
          uStack_170 = 0;
          uStack_168 = 0;
          puStack_108 = puStack_108 + 2;
          func_0x00010b495c10();
          puVar7 = (undefined8 *)param_1[1];
          func_0x00010b495bb0(auStack_118);
        }
        param_1[1] = (long)puVar7;
        puVar3 = &uStack_170;
        func_0x000107c27d78();
        func_0x000107c394b8();
        puVar6 = puVar6 + 1;
      } while (puVar6 < puVar2);
      func_0x00010b495bfc();
      puVar2 = (undefined1 *)puVar3;
    } while (puVar3 != (undefined8 *)0x0);
  }
  func_0x000107c394b4();
  func_0x000107c394b4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_10b495a24:
  FUN_10b17d6fc();
LAB_10b495a28:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b495a2c);
  (*pcVar1)();
}



/* Entry: 10b495a80; end: 10b495b63;  */

void FUN_10b495a80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  puVar3 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar3 + (param_2[1] - (long)puVar2));
  puStack_60 = param_1 + 2;
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = puVar1;
  for (puVar5 = puVar3; puVar5 != puVar2; puVar5 = puVar5 + 2) {
    uVar4 = *puVar5;
    puStack_38[1] = puVar5[1];
    *puStack_38 = uVar4;
    *puVar5 = 0;
    puVar5[1] = 0;
    puStack_38 = puStack_38 + 2;
  }
  uStack_48 = 1;
  puStack_40 = puVar1;
  for (; puVar3 != puVar2; puVar3 = puVar3 + 2) {
    func_0x000107c27d78();
  }
  FUN_10b17d7b8(&puStack_60);
  param_2[1] = puVar1;
  uVar4 = *param_1;
  param_1[1] = uVar4;
  *param_1 = param_2[1];
  param_2[1] = uVar4;
  uVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar4;
  uVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10b495b64; end: 10b495bfb;  */

long * FUN_10b495b64(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_10b17d708();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10b495bfc; end: 10b495c27;  */

void FUN_10b495bfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b495c28; end: 10b495c5f;  */

void FUN_10b495c28(void)

{
  _objc_alloc(PTR_PTR_1126e0218);
  func_0x00010bff29e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b495c60; end: 10b495cbf; -[SCNNetworkTypesConnectivityChangeListener onConnectivityChanged:] */

void FUN_10b495c60(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 10b495cc0; end: 10b495d0f;  */

void FUN_10b495cc0(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x000107c394bc();
      } while (extraout_w10 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b495d10; end: 10b495d63; -[SCNNetworkTypesConnectivityChangeListener .cxx_destruct] */

void FUN_10b495d10(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110ceca28;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c27f84((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b495d64; end: 10b495d6b;  */

void FUN_10b495d64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b495d6c; end: 10b495de3; -[SCNNetworkTypesConnectivityChangeNotifierCppProxy initWithCpp:] */

undefined1 * FUN_10b495d6c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112706410;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000107c394cc();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c27f5c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b495de4; end: 10b495e43; -[SCNNetworkTypesConnectivityChangeNotifierCppProxy notifyListener:] */

void FUN_10b495de4(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 10b495e44; end: 10b495ea3; -[SCNNetworkTypesConnectivityChangeNotifierCppProxy notifyRadioAccessType:] */

void FUN_10b495e44(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 10b495ea4; end: 10b495f3b; -[SCNNetworkTypesConnectivityChangeNotifierCppProxy registerListener:] */

long FUN_10b495ea4(void)

{
  int unaff_w19;
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x00010b49613c();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_10b495cc0(auStack_40);
  func_0x00010b496154(*(undefined8 *)(*plVar1 + 0x20));
  func_0x000107c27f84(auStack_40);
  func_0x000107c394d0();
  return (long)unaff_w19;
}



/* Entry: 10b495f3c; end: 10b495fd3; -[SCNNetworkTypesConnectivityChangeNotifierCppProxy registerRadioAccessTypeListener:] */

long FUN_10b495f3c(void)

{
  int unaff_w19;
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x00010b49613c();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_10b498d20(auStack_40);
  func_0x00010b496154(*(undefined8 *)(*plVar1 + 0x28));
  func_0x000107c2c5cc(auStack_40);
  func_0x000107c394d0();
  return (long)unaff_w19;
}



/* Entry: 10b495fd4; end: 10b49602f; -[SCNNetworkTypesConnectivityChangeNotifierCppProxy .cxx_destruct] */

void FUN_10b495fd4(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cecb90;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c27f5c((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b496030; end: 10b49606f; -[SCNNetworkTypesConnectivityChangeNotifierCppProxy .cxx_construct] */

undefined8 * FUN_10b496030(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c394cc();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b496070; end: 10b496073;  */

void FUN_10b496070(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cecad0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b496074; end: 10b496087;  */

void FUN_10b496074(void)

{
  FUN_10b496124();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b496088; end: 10b4960c3;  */

void FUN_10b496088(void)

{
  func_0x00010b496160();
  return;
}



/* Entry: 10b4960c4; end: 10b496123;  */

void FUN_10b4960c4(undefined8 param_1,undefined8 param_2)

{
  int unaff_w19;
  long unaff_x20;
  
  func_0x00010b49616c();
  func_0x00010c0dd340(*(undefined8 *)(unaff_x20 + 0x18),param_2,(long)unaff_w19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10b496124; end: 10b496183;  */

void FUN_10b496124(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cecad0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b496184; end: 10b49634f;  */

void FUN_10b496184(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  char cStack_68;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c136740();
  uVar2 = param_2;
  func_0x00010bf87320();
  uVar3 = param_2;
  func_0x00010bf872c0();
  uVar4 = param_2;
  func_0x00010bf48340();
  uVar5 = param_2;
  func_0x00010bf482a0();
  uVar6 = param_2;
  func_0x00010c24cd00();
  uVar7 = param_2;
  func_0x00010c24cc40();
  uVar8 = param_2;
  func_0x00010c15e060();
  uVar9 = param_2;
  func_0x00010c15e000();
  uVar10 = param_2;
  func_0x00010c11c320();
  uVar11 = param_2;
  func_0x00010c11c100();
  uVar12 = param_2;
  func_0x00010c13bc60();
  uVar13 = param_2;
  func_0x00010c135300();
  uVar14 = param_2;
  func_0x00010c2463c0();
  uVar15 = param_2;
  func_0x00010c15e280();
  uVar16 = param_2;
  func_0x00010c122220();
  func_0x00010c15efa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(&uStack_80);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  param_1[8] = uVar9;
  param_1[9] = uVar10;
  param_1[10] = uVar11;
  param_1[0xb] = uVar12;
  param_1[0xc] = uVar13;
  *(char *)(param_1 + 0xd) = (char)uVar14;
  param_1[0xe] = uVar15;
  param_1[0xf] = uVar16;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  if (cStack_68 == '\x01') {
    param_1[0x11] = uStack_78;
    param_1[0x10] = uStack_80;
    param_1[0x12] = uStack_70;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  func_0x000107c279a4(&uStack_80);
  _objc_release(param_2);
  func_0x000107c394e0();
  return;
}



/* Entry: 10b496350; end: 10b49648f;  */

void FUN_10b496350(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bf99800(param_2);
  uVar2 = param_2;
  func_0x00010c0b5180(param_2);
  uVar3 = param_2;
  func_0x00010bf27aa0(param_2);
  uVar4 = param_2;
  func_0x00010c0d7d60(param_2);
  uVar5 = param_2;
  func_0x00010bf4f420(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b496490(auStack_70);
  func_0x00010c08ad80(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b4964e0(auStack_90);
  func_0x00010c080f00(param_2);
  func_0x000107c2ff7c(param_1,uVar1,uVar2,uVar3,uVar4,auStack_70,auStack_90,param_2);
  func_0x000107c2c630(auStack_90);
  func_0x00010b496b48();
  func_0x000107c2c634(auStack_70);
  _objc_release(uVar5);
  func_0x000107c394e4();
  return;
}



/* Entry: 10b496490; end: 10b4964df;  */

void FUN_10b496490(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_40 [32];
  
  func_0x00010b496b50();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0x18] = 0;
  }
  else {
    FUN_10b496530(auStack_40);
    func_0x00010b496aa8();
    func_0x000107c2c638();
  }
  func_0x000107c394e4();
  return;
}



/* Entry: 10b4964e0; end: 10b49652f;  */

void FUN_10b4964e0(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_40 [32];
  
  func_0x00010b496b50();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0x18] = 0;
  }
  else {
    FUN_10b4966f8(auStack_40);
    func_0x00010b496aa8();
    func_0x000107c2be38();
  }
  func_0x000107c394e4();
  return;
}



/* Entry: 10b496530; end: 10b4966f7;  */

void FUN_10b496530(void)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 *puVar2;
  long *plVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x23;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_180 [64];
  long *plStack_140;
  undefined1 auStack_110 [16];
  long lStack_100;
  
  puVar5 = auStack_180;
  func_0x00010b496a8c();
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  func_0x00010bf529e0();
  func_0x00010b496ae4();
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x00010b496b78();
    if ((bool)in_CY) goto LAB_10b496694;
    func_0x00010b496b64();
    func_0x000107c2c81c(auStack_180);
    FUN_10b2e1278();
    func_0x000107c2c820();
    unaff_x19 = puVar5;
  }
  func_0x00010b496ad0();
  func_0x00010b496a40();
  if (unaff_x19 != (undefined1 *)0x0) {
    lVar4 = *plStack_140;
    do {
      puVar5 = (undefined1 *)0x0;
      do {
        if (*plStack_140 != lVar4) {
          _objc_enumerationMutation();
        }
        func_0x00010b496b0c();
        puVar2 = unaff_x23;
        FUN_10b498dcc(auStack_180);
        if ((ulong)unaff_x20[1] < (ulong)unaff_x20[2]) {
          func_0x00010b496a54();
          lVar6 = extraout_x8 + 0x30;
        }
        else {
          plVar3 = unaff_x20;
          func_0x000107c2c818();
          func_0x000107c2c81c(auStack_110,plVar3,(unaff_x20[1] - *unaff_x20) / 0x30);
          func_0x00010b496a54(lStack_100);
          lStack_100 = extraout_x8_00 + 0x30;
          FUN_10b2e1278();
          lVar6 = unaff_x20[1];
          puVar2 = auStack_110;
          func_0x000107c2c820();
        }
        unaff_x20[1] = lVar6;
        func_0x00010b496b04();
        puVar5 = puVar5 + 1;
        in_ZR = puVar5 == unaff_x19;
      } while (puVar5 < unaff_x19);
      func_0x00010b496a40();
      unaff_x19 = puVar2;
    } while (puVar2 != (undefined1 *)0x0);
  }
  func_0x000107c394e4();
  func_0x000107c394e4();
  func_0x00010b496b1c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10b496694:
  FUN_10b2d89f8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b49669c);
  (*pcVar1)();
}



/* Entry: 10b4966f8; end: 10b4968bf;  */

void FUN_10b4966f8(void)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 *puVar2;
  long *plVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x23;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_180 [64];
  long *plStack_140;
  undefined1 auStack_110 [16];
  long lStack_100;
  
  puVar5 = auStack_180;
  func_0x00010b496a8c();
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  func_0x00010bf529e0();
  func_0x00010b496ae4();
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x00010b496b78();
    if ((bool)in_CY) goto LAB_10b49685c;
    func_0x00010b496b64();
    FUN_10b49694c(auStack_180);
    FUN_10b4968c0();
    func_0x00010b49699c();
    unaff_x19 = puVar5;
  }
  func_0x00010b496ad0();
  func_0x00010b496a40();
  if (unaff_x19 != (undefined1 *)0x0) {
    lVar4 = *plStack_140;
    do {
      puVar5 = (undefined1 *)0x0;
      do {
        if (*plStack_140 != lVar4) {
          _objc_enumerationMutation();
        }
        func_0x00010b496b0c();
        puVar2 = unaff_x23;
        FUN_10b498428(auStack_180);
        if ((ulong)unaff_x20[1] < (ulong)unaff_x20[2]) {
          func_0x00010b496a54();
          lVar6 = extraout_x8 + 0x30;
        }
        else {
          plVar3 = unaff_x20;
          FUN_10b4969f0();
          FUN_10b49694c(auStack_110,plVar3,(unaff_x20[1] - *unaff_x20) / 0x30);
          func_0x00010b496a54(lStack_100);
          lStack_100 = extraout_x8_00 + 0x30;
          FUN_10b4968c0();
          lVar6 = unaff_x20[1];
          puVar2 = auStack_110;
          func_0x00010b49699c();
        }
        unaff_x20[1] = lVar6;
        func_0x00010b496b04();
        puVar5 = puVar5 + 1;
        in_ZR = puVar5 == unaff_x19;
      } while (puVar5 < unaff_x19);
      func_0x00010b496a40();
      unaff_x19 = puVar2;
    } while (puVar2 != (undefined1 *)0x0);
  }
  func_0x000107c394e4();
  func_0x000107c394e4();
  func_0x00010b496b1c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10b49685c:
  FUN_10b2d8ae0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b496864);
  (*pcVar1)();
}



/* Entry: 10b4968c0; end: 10b49694b;  */

void FUN_10b4968c0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x30) * 0x30;
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10b49694c; end: 10b4969cb;  */

long * FUN_10b49694c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_10b2d8aec();
  }
  lVar1 = param_4 + param_3 * 0x30;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x30;
  return param_1;
}



/* Entry: 10b4969cc; end: 10b4969ef;  */

void FUN_10b4969cc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x30;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10b4969f0; end: 10b496a3f;  */

ulong FUN_10b4969f0(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x19;
  
  if (0x555555555555555 < param_2) {
    FUN_10b2d8ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return unaff_x19;
  }
  uVar1 = (param_1[2] - *param_1) / 0x30;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  if (0x2aaaaaaaaaaaaa9 < uVar1) {
    uVar2 = 0x555555555555555;
  }
  return uVar2;
}



/* Entry: 10b496a40; end: 10b496b8b;  */

void FUN_10b496a40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b496b8c; end: 10b496bdb;  */

void FUN_10b496b8c(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x000107c394f0();
      } while (extraout_w10 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b496bdc; end: 10b496c2f; -[SCNNetworkTypesDeckTransitionEventListener .cxx_destruct] */

void FUN_10b496bdc(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cecba0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c2c6e8((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b496c30; end: 10b496c37;  */

void FUN_10b496c30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b496c38; end: 10b496caf; -[SCNNetworkTypesDeckTransitionEventNotifierCppProxy initWithCpp:] */

undefined1 * FUN_10b496c38(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112706420;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000107c394fc();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c2c544(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b496cb0; end: 10b496d67; -[SCNNetworkTypesDeckTransitionEventNotifierCppProxy subscribe:] */

long * FUN_10b496cb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b496b8c(auStack_40,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_40);
  func_0x000107c2c6e8(auStack_40);
  func_0x000107c39500();
  return plVar1;
}



/* Entry: 10b496d68; end: 10b496dc3; -[SCNNetworkTypesDeckTransitionEventNotifierCppProxy .cxx_destruct] */

void FUN_10b496d68(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110ceccd8;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c2c544((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b496dc4; end: 10b496e03; -[SCNNetworkTypesDeckTransitionEventNotifierCppProxy .cxx_construct] */

undefined8 * FUN_10b496dc4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c394fc();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b496e04; end: 10b496e07;  */

void FUN_10b496e04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cecc48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b496e08; end: 10b496e1b;  */

void FUN_10b496e08(void)

{
  FUN_10b496e58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b496e1c; end: 10b496e57;  */

void FUN_10b496e1c(void)

{
  func_0x00010b496e68();
  return;
}



/* Entry: 10b496e58; end: 10b496e73;  */

void FUN_10b496e58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cecc48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b496e74; end: 10b496f63;  */

void FUN_10b496e74(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bf98940();
  uVar2 = param_2;
  func_0x00010c0cb140(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(&uStack_58);
  uVar3 = param_2;
  func_0x00010c069360();
  uVar4 = param_2;
  func_0x00010bfe9d20();
  func_0x00010c11e1c0();
  *param_1 = (int)uVar1;
  *(undefined8 *)(param_1 + 4) = uStack_50;
  *(undefined8 *)(param_1 + 2) = uStack_58;
  *(undefined8 *)(param_1 + 6) = uStack_48;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[8] = (int)uVar3;
  *(char *)(param_1 + 9) = (char)uVar4;
  param_1[10] = (int)param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
  _objc_release(uVar2);
  FUN_10b496fe8();
  return;
}



/* Entry: 10b496f64; end: 10b496fe7;  */

void FUN_10b496f64(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  
  puVar2 = PTR_PTR_1126dff10;
  _objc_alloc(PTR_PTR_1126dff10);
  uVar1 = *param_1;
  puVar3 = param_1 + 2;
  func_0x000107c27f28(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010840(puVar2,param_2,uVar1,puVar3,param_1[8],*(undefined1 *)(param_1 + 9),
                      param_1[10]);
  FUN_10b496fe8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b496fe8; end: 10b496fef;  */

void FUN_10b496fe8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b496ff0; end: 10b497047;  */

void FUN_10b496ff0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1 = (undefined8 *)*param_1;
  if (param_1 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    ___dynamic_cast(param_1,&PTR_DAT_110cecce8,&PTR_DAT_110ceccf8,0);
    if (param_1 == (undefined8 *)0x0) {
      ___cxa_bad_cast();
      *param_1 = &PTR_FUN_110cecd80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
      return;
    }
    uVar1 = param_1[3];
    _objc_retain(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b497048; end: 10b49704b;  */

void FUN_10b497048(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cecd80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b49704c; end: 10b49705f;  */

void FUN_10b49704c(void)

{
  FUN_10b497114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b497060; end: 10b49709f;  */

void FUN_10b497060(void)

{
  func_0x00010b497124();
  return;
}



/* Entry: 10b4970a0; end: 10b497113;  */

void FUN_10b4970a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_10b499274(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aec0(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b497114; end: 10b49712f;  */

void FUN_10b497114(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cecd80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b497130; end: 10b4971a7; -[SCNNetworkTypesHttpRequestAndInfo initWithCpp:] */

undefined1 * FUN_10b497130(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112706428;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010b497a18();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c2c6a4(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b4971a8; end: 10b49722b; -[SCNNetworkTypesHttpRequestAndInfo getHttpRequest] */

void FUN_10b4971a8(void)

{
  undefined1 auStack_80 [96];
  
  func_0x00010b497a0c();
  func_0x00010b497a04();
  func_0x000107c2ff94(auStack_80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b4979c8();
  func_0x000107c2c528();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b49722c; end: 10b4972af; -[SCNNetworkTypesHttpRequestAndInfo getDownloadFilePath] */

void FUN_10b49722c(void)

{
  undefined1 auStack_40 [32];
  
  func_0x00010b497a0c();
  func_0x00010b497a04();
  func_0x000107c27f68(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b4979c8();
  func_0x000107c279a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b4972b0; end: 10b49732b; -[SCNNetworkTypesHttpRequestAndInfo getExecutor] */

void FUN_10b4972b0(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b497a0c();
  func_0x00010b497a04();
  FUN_10b496ff0(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b4979c8();
  func_0x000107c2c538();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b49732c; end: 10b4973a7; -[SCNNetworkTypesHttpRequestAndInfo getHttpRequestCallback] */

void FUN_10b49732c(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b497a0c();
  func_0x00010b497a04();
  FUN_10b498054(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b4979c8();
  func_0x000107c2c53c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b4973a8; end: 10b497423; -[SCNNetworkTypesHttpRequestAndInfo getUploadDataProvider] */

void FUN_10b4973a8(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b497a0c();
  func_0x00010b497a04();
  FUN_10b49971c(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b4979c8();
  func_0x000107c27f50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b497424; end: 10b497477; -[SCNNetworkTypesHttpRequestAndInfo getBytesConsumptionType] */

long FUN_10b497424(int param_1)

{
  long extraout_x8;
  
  func_0x00010b497a0c();
  (**(code **)(extraout_x8 + 0x38))();
  return (long)param_1;
}



/* Entry: 10b497478; end: 10b4974c7; -[SCNNetworkTypesHttpRequestAndInfo hashKey] */

void FUN_10b497478(void)

{
  long extraout_x8;
  
  func_0x00010b497a0c();
  (**(code **)(extraout_x8 + 0x40))();
  return;
}



/* Entry: 10b4974c8; end: 10b4977fb; +[SCNNetworkTypesHttpRequestAndInfo getKeys:] */

void FUN_10b4974c8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  int extraout_w10;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined1 auStack_188 [24];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  puStack_198 = (undefined8 *)0x0;
  puStack_190 = (undefined8 *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puVar3 = param_3;
  func_0x00010bf529e0();
  if (puVar3 != (undefined8 *)0x0) {
    if ((ulong)puVar3 >> 0x3c != 0) goto LAB_10b497754;
    FUN_10b4978f4(&puStack_f0,puVar3,0,&puStack_190);
    puVar7 = (undefined8 *)((long)puStack_e8 - ((long)puStack_198 - (long)puStack_1a0));
    _memcpy(puVar7);
    puVar3 = puStack_190;
    puStack_190 = puStack_d8;
    puStack_198 = puStack_e0;
    puStack_e0 = puStack_1a0;
    puStack_d8 = puVar3;
    puStack_f0 = puStack_1a0;
    puStack_e8 = puStack_1a0;
    puStack_1a0 = puVar7;
    FUN_10b497954(&puStack_f0);
  }
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  puVar3 = param_3;
  _objc_retain();
  func_0x00010b4979e8();
  if (puVar3 != (undefined8 *)0x0) {
    lVar10 = *plStack_150;
    do {
      puVar7 = (undefined8 *)0x0;
      do {
        if (*plStack_150 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        lVar8 = *(long *)(lStack_158 + (long)puVar7 * 8);
        _objc_retain(lVar8);
        _objc_retain(lVar8);
        if (lVar8 == 0) {
          uStack_170 = 0;
          uStack_168 = 0;
        }
        else {
          uStack_168 = *(undefined8 *)(lVar8 + 0x20);
          uStack_170 = *(undefined8 *)(lVar8 + 0x18);
          if (*(long *)(lVar8 + 0x20) != 0) {
            do {
              func_0x00010b497a18();
            } while (extraout_w10 != 0);
          }
        }
        func_0x00010b497a3c();
        if (puStack_198 < puStack_190) {
          puVar11 = puStack_198 + 2;
          puStack_198[1] = uStack_168;
          *puStack_198 = uStack_170;
          uStack_170 = 0;
          uStack_168 = 0;
        }
        else {
          lVar8 = (long)puStack_198 - (long)puStack_1a0 >> 4;
          uVar1 = lVar8 + 1;
          if (uVar1 >> 0x3c != 0) {
            FUN_10b4978e0();
            goto LAB_10b4977cc;
          }
          uVar6 = (long)puStack_190 - (long)puStack_1a0 >> 3;
          if (uVar6 <= uVar1) {
            uVar6 = uVar1;
          }
          if (0x7fffffffffffffef < (ulong)((long)puStack_190 - (long)puStack_1a0)) {
            uVar6 = 0xfffffffffffffff;
          }
          FUN_10b4978f4(&puStack_118,uVar6,lVar8,&puStack_190);
          puVar11 = puStack_108 + 2;
          puStack_108[1] = uStack_168;
          *puStack_108 = uStack_170;
          uStack_170 = 0;
          uStack_168 = 0;
          puVar9 = (undefined8 *)((long)puStack_110 - ((long)puStack_198 - (long)puStack_1a0));
          _memcpy(puVar9);
          puVar4 = puStack_190;
          puStack_190 = puStack_100;
          puStack_108 = puStack_1a0;
          puStack_100 = puVar4;
          puStack_118 = puStack_1a0;
          puStack_110 = puStack_1a0;
          puStack_1a0 = puVar9;
          puStack_198 = puVar11;
          FUN_10b497954(&puStack_118);
        }
        puVar4 = &uStack_170;
        puStack_198 = puVar11;
        func_0x000107c2c6a4();
        func_0x00010b497a3c();
        puVar7 = (undefined8 *)((long)puVar7 + 1);
      } while (puVar7 < puVar3);
      func_0x00010b4979e8();
      puVar3 = puVar4;
    } while (puVar4 != (undefined8 *)0x0);
  }
  func_0x00010b4979e0();
  func_0x00010b4979e0();
  FUN_10b4b2c38(auStack_188,&puStack_1a0);
  func_0x00010b497a34();
  puVar5 = auStack_188;
  func_0x00010863360c(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27ae4(auStack_188);
  func_0x00010b4979e0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
LAB_10b497754:
  FUN_10b4978e0();
LAB_10b4977cc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10b4977d0);
  (*pcVar2)();
}



/* Entry: 10b4977fc; end: 10b497857; -[SCNNetworkTypesHttpRequestAndInfo .cxx_destruct] */

void FUN_10b4977fc(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cece10;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c2c6a4((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b497858; end: 10b4978df; -[SCNNetworkTypesHttpRequestAndInfo .cxx_construct] */

undefined8 * FUN_10b497858(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b497a18();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b4978e0; end: 10b4978f3;  */

long * FUN_10b4978e0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x19;
  ulong unaff_x20;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x00010b4979ac();
  plVar2[3] = 0;
  plVar2[4] = param_4;
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    if (unaff_x20 >> 0x3c != 0) {
      func_0x000104bd35f4();
      lVar3 = plVar2[1];
      while (lVar3 != plVar2[2]) {
        plVar2[2] = plVar2[2] + -0x10;
        func_0x000107c2c6a4();
      }
      if (*plVar2 != 0) {
        __ZdlPv();
      }
      return plVar2;
    }
    lVar3 = unaff_x20 << 4;
    __Znwm();
  }
  lVar1 = lVar3 + param_3 * 0x10;
  *unaff_x19 = lVar3;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar3 + unaff_x20 * 0x10;
  return unaff_x19;
}



/* Entry: 10b4978f4; end: 10b497953;  */

long * FUN_10b4978f4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x00010b4979ac();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3c != 0) {
      func_0x000104bd35f4();
      lVar2 = param_1[1];
      while (lVar2 != param_1[2]) {
        param_1[2] = param_1[2] + -0x10;
        func_0x000107c2c6a4();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar2 = unaff_x20 << 4;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 0x10;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 0x10;
  return unaff_x19;
}



/* Entry: 10b497954; end: 10b49799b;  */

long * FUN_10b497954(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x10;
    func_0x000107c2c6a4();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b49799c; end: 10b497a43;  */

void FUN_10b49799c(void)

{
  return;
}



/* Entry: 10b497a44; end: 10b497afb; -[SCNNetworkTypesHttpRequestBuilder setFallbackUrlProvider:] */

void FUN_10b497a44(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c39508();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_10b49ad68(auStack_50);
  func_0x000107c39528(&uStack_40);
  func_0x000107c27f1c(auStack_50);
  func_0x000107c2ff98(uStack_40,uStack_38);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c3950c();
  func_0x000107c39510();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b497afc; end: 10b497b33;  */

void FUN_10b497afc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b497b34; end: 10b497b83; -[SCNNetworkTypesHttpRequestCallbackCppProxy initWithCpp:] */

undefined1 * FUN_10b497b34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706438;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c2ffa0((undefined1 *)((long)puVar1 + 0x18),param_3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b497b84; end: 10b497c2f; -[SCNNetworkTypesHttpRequestCallbackCppProxy onRequestStarted:] */

void FUN_10b497b84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_90 [96];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c2ff90(auStack_90,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_90);
  func_0x000107c2c528(auStack_90);
  func_0x000107c39538();
  return;
}



/* Entry: 10b497c30; end: 10b497cbf; -[SCNNetworkTypesHttpRequestCallbackCppProxy onResponseStarted:info:] */

void FUN_10b497c30(long param_1)

{
  long *plVar1;
  undefined1 auStack_240 [528];
  
  func_0x00010b4983a4();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010b4983e0(auStack_240);
  func_0x00010b4983d0(*(undefined8 *)(*plVar1 + 0x18));
  func_0x00010b4983bc();
  func_0x000107c39538();
  return;
}



/* Entry: 10b497cc0; end: 10b497d97; -[SCNNetworkTypesHttpRequestCallbackCppProxy onReadCompleted:buffer:wireBytesReadSinceLast:wireBytesReadTotal:decompressedBytesTotal:bytesInBuffer:] */

void FUN_10b497cc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined1 auStack_68 [24];
  
  func_0x00010b4983a4();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c281cc(auStack_68,param_4);
  (**(code **)(*plVar1 + 0x20))(plVar1,param_3,auStack_68,param_5,param_6,param_7,param_8);
  func_0x00010b4983b4();
  func_0x000107c39538();
  return;
}



/* Entry: 10b497d98; end: 10b497dff; -[SCNNetworkTypesHttpRequestCallbackCppProxy onWriteCompleted:totalBytesWritten:totalBytesExpectedToWrite:] */

void FUN_10b497d98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
            (*(long **)(param_1 + 0x18),param_3,param_4,param_5);
  return;
}



/* Entry: 10b497e00; end: 10b497ed7; -[SCNNetworkTypesHttpRequestCallbackCppProxy onSucceeded:info:buffer:willRetry:] */

void FUN_10b497e00(void)

{
  long unaff_x23;
  long *plVar1;
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [528];
  
  func_0x00010b498374();
  _objc_retain();
  plVar1 = *(long **)(unaff_x23 + 0x18);
  func_0x00010b4983e0(auStack_250);
  func_0x000107c281cc(auStack_268);
  func_0x00010b4983e8(*(undefined8 *)(*plVar1 + 0x30));
  func_0x00010b4983b4();
  func_0x000107c2c67c(auStack_250);
  func_0x000107c3953c();
  func_0x000107c39538();
  return;
}



/* Entry: 10b497ed8; end: 10b497fc3; -[SCNNetworkTypesHttpRequestCallbackCppProxy onFailed:info:error:willRetry:] */

void FUN_10b497ed8(void)

{
  long unaff_x23;
  long *plVar1;
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [40];
  undefined1 auStack_260 [528];
  
  func_0x00010b498374();
  _objc_retain();
  plVar1 = *(long **)(unaff_x23 + 0x18);
  func_0x00010b4983e0(auStack_260);
  FUN_10b496e74(auStack_290);
  func_0x00010b4983e8(*(undefined8 *)(*plVar1 + 0x38));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_288);
  func_0x000107c2c67c(auStack_260);
  func_0x000107c3953c();
  func_0x000107c39538();
  return;
}



/* Entry: 10b497fc4; end: 10b498053; -[SCNNetworkTypesHttpRequestCallbackCppProxy onCanceled:info:] */

void FUN_10b497fc4(long param_1)

{
  long *plVar1;
  undefined1 auStack_240 [528];
  
  func_0x00010b4983a4();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010b4983e0(auStack_240);
  func_0x00010b4983d0(*(undefined8 *)(*plVar1 + 0x40));
  func_0x00010b4983bc();
  func_0x000107c39538();
  return;
}



/* Entry: 10b498054; end: 10b4980c3;  */

void FUN_10b498054(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110cd2808,&PTR_DAT_110cece30,0);
    if (lVar1 == 0) {
      FUN_10b498290(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = *(long **)(lVar1 + 0x18);
      _objc_retain(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b4980c4; end: 10b498117; -[SCNNetworkTypesHttpRequestCallbackCppProxy .cxx_destruct] */

void FUN_10b4980c4(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cecfa8;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c2c53c((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b498118; end: 10b498157; -[SCNNetworkTypesHttpRequestCallbackCppProxy .cxx_construct] */

undefined8 * FUN_10b498118(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c39534();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b498158; end: 10b49815b;  */

void FUN_10b498158(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ceceb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b49815c; end: 10b49816f;  */

void FUN_10b49815c(void)

{
  FUN_10b498280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b498170; end: 10b4981ab;  */

void FUN_10b498170(void)

{
  func_0x00010b498410();
  return;
}



/* Entry: 10b4981ac; end: 10b498223;  */

void FUN_10b4981ac(undefined8 param_1)

{
  func_0x000107c39550();
  func_0x000107c2ffb0();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b496f64();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c39558();
  func_0x00010c0e40e0();
  func_0x000107c3955c();
  func_0x000107c39538();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10b498224; end: 10b49827f;  */

void FUN_10b498224(undefined8 param_1)

{
  long unaff_x22;
  undefined8 uVar1;
  
  func_0x000107c39544();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c2ffb0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e2ce0(uVar1);
  func_0x000107c3953c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10b498280; end: 10b49828f;  */

void FUN_10b498280(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ceceb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b498290; end: 10b498303;  */

void FUN_10b498290(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cecfa8;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000107c39534();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b498304);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b49841c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b498304; end: 10b49836b;  */

void FUN_10b498304(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  
  puVar1 = PTR_PTR_1126e0258;
  _objc_alloc();
  if (param_2[1] != 0) {
    do {
      func_0x000107c39534();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000107c39564();
  return;
}



/* Entry: 10b49836c; end: 10b498427;  */

void FUN_10b49836c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b498428; end: 10b4984cf;  */

void FUN_10b498428(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain();
  uVar1 = param_3;
  func_0x00010bfb6240();
  uVar2 = param_3;
  func_0x00010c08ae80();
  uVar3 = param_3;
  func_0x00010c142500();
  uVar4 = param_3;
  func_0x00010c26d700();
  func_0x00010c26d720(param_3);
  uVar5 = param_3;
  func_0x00010bf996e0();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = param_2;
  param_1[5] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b4984d0; end: 10b49850b;  */

void FUN_10b4984d0(long param_1)

{
  _objc_alloc(PTR_PTR_1126e0260);
  func_0x00010c013da0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b49850c; end: 10b498513;  */

void FUN_10b49850c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b498514; end: 10b4985b7;  */

void FUN_10b498514(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c225ec0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0,param_2,
                      *(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  plVar3 = (long *)(param_1 + 0x10);
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    lVar2 = (long)(plVar3 + 2);
    func_0x000108619710(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    func_0x000107c39574();
  }
  func_0x00010bf51e00(puVar1);
  func_0x000107c39570();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b4985b8; end: 10b4985cb;  */

void FUN_10b4985b8(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(param_2 + 0x30);
  *(long *)(param_2 + 0x30) = 0;
  *(long *)(param_1 + 0x30) = lVar2;
  lVar4 = *(long *)(param_2 + 0x40);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  *(undefined8 *)(param_2 + 0x38) = 0;
  lVar3 = *(long *)(param_2 + 0x48);
  *(long *)(param_1 + 0x48) = lVar3;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = *(ulong *)(param_1 + 0x38);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long *)(lVar2 + uVar5 * 8) = param_1 + 0x40;
    *(long *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  return;
}



/* Entry: 10b4985cc; end: 10b498833;  */

void FUN_10b4985cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong unaff_x23;
  float fVar11;
  undefined1 auStack_a0 [72];
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c067fc0();
  func_0x000107c39578();
  func_0x000107c2ffb4(auStack_a0,param_3);
  func_0x000107c39574();
  iVar7 = (int)param_2;
  uVar9 = (ulong)iVar7;
  uVar8 = *(ulong *)(lVar10 + 0x38);
  if (uVar8 != 0) {
    uVar3 = uVar8 - 1;
    if ((uVar8 & uVar3) == 0) {
      unaff_x23 = uVar3 & uVar9;
    }
    else {
      unaff_x23 = uVar9;
      if (uVar8 <= uVar9) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar9 / uVar8;
        }
        unaff_x23 = uVar9 - uVar6 * uVar8;
      }
    }
    plVar4 = *(long **)(*(long *)(lVar10 + 0x30) + unaff_x23 * 8);
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_10b4986b4;
          uVar6 = plVar4[1];
          if (uVar6 != uVar9) break;
          if (*(int *)(plVar4 + 2) == iVar7) goto LAB_10b4987e8;
        }
        if ((uVar8 & uVar3) == 0) {
          uVar6 = uVar6 & uVar3;
        }
        else if (uVar8 <= uVar6) {
          uVar1 = 0;
          if (uVar8 != 0) {
            uVar1 = uVar6 / uVar8;
          }
          uVar6 = uVar6 - uVar1 * uVar8;
        }
      } while (uVar6 == unaff_x23);
    }
  }
LAB_10b4986b4:
  plVar2 = (long *)0x60;
  __Znwm();
  plVar4 = (long *)(lVar10 + 0x40);
  uStack_48 = 1;
  *plVar2 = 0;
  plVar2[1] = uVar9;
  *(int *)(plVar2 + 2) = iVar7;
  plStack_58 = plVar2;
  plStack_50 = plVar4;
  func_0x000107c2c4ec(plVar2 + 3,auStack_a0);
  fVar11 = (float)(*(long *)(lVar10 + 0x48) + 1);
  if ((uVar8 == 0) || (*(float *)(lVar10 + 0x50) * (float)uVar8 < fVar11)) {
    uVar3 = 1;
    if (2 < uVar8) {
      uVar3 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar3 = uVar3 | uVar8 << 1;
    uVar8 = (ulong)(fVar11 / *(float *)(lVar10 + 0x50));
    if (uVar3 <= uVar8) {
      uVar3 = uVar8;
    }
    func_0x000107c2c59c(lVar10 + 0x30,uVar3);
    uVar8 = *(ulong *)(lVar10 + 0x38);
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x23 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x23 = uVar9;
      if (uVar8 <= uVar9) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar9 / uVar8;
        }
        unaff_x23 = uVar9 - uVar3 * uVar8;
      }
    }
  }
  lVar5 = *(long *)(lVar10 + 0x30);
  plVar2 = *(long **)(lVar5 + unaff_x23 * 8);
  if (plVar2 == (long *)0x0) {
    *plStack_58 = *plVar4;
    *plVar4 = (long)plStack_58;
    *(long **)(lVar5 + unaff_x23 * 8) = plVar4;
    if (*plStack_58 != 0) {
      uVar9 = *(ulong *)(*plStack_58 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar9 = uVar9 & uVar8 - 1;
      }
      else if (uVar8 <= uVar9) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar3 * uVar8;
      }
      *(long **)(lVar5 + uVar9 * 8) = plStack_58;
    }
  }
  else {
    *plStack_58 = *plVar2;
    *plVar2 = (long)plStack_58;
  }
  plStack_58 = (long *)0x0;
  *(long *)(lVar10 + 0x48) = *(long *)(lVar10 + 0x48) + 1;
  func_0x00010b2d6f98(&plStack_58);
LAB_10b4987e8:
  FUN_10b498834();
  return;
}



/* Entry: 10b498834; end: 10b498843;  */

undefined8 * FUN_10b498834(void)

{
  long lVar1;
  long *plVar2;
  long in_stack_00000018;
  long in_stack_00000028;
  
  plVar2 = (long *)in_stack_00000028;
  lVar1 = in_stack_00000018;
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    in_stack_00000018 = lVar1;
    func_0x000107c60e14();
    lVar1 = in_stack_00000018;
  }
  in_stack_00000018 = 0;
  if (lVar1 != 0) {
    func_0x000107c60e14();
  }
  return &stack0x00000018;
}



/* Entry: 10b498844; end: 10b498857;  */

void FUN_10b498844(void)

{
  FUN_10b4989b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b498858; end: 10b498863;  */

long FUN_10b498858(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110ced040;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}


