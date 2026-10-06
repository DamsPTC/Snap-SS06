/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072729e0; end: 107272a07;  */

void FUN_1072729e0(void)

{
  func_0x00010727420c();
  func_0x0001072750c0();
  FUN_107272a08();
  return;
}



/* Entry: 107272a08; end: 107272a4f;  */

void FUN_107272a08(void)

{
  long in_x3;
  
  func_0x000107274c2c();
  if (in_x3 != 0) {
    func_0x0001072741f4();
    FUN_107272a50();
    func_0x0001072743a8();
    FUN_107272a94();
  }
  func_0x0001072745c0();
  FUN_107272b38();
  return;
}



/* Entry: 107272a50; end: 107272a93;  */

void FUN_107272a50(undefined8 param_1,ulong param_2)

{
  undefined8 *unaff_x19;
  
  if (param_2 < 0x24924924924924a) {
    func_0x000107274c40();
    func_0x00010726d92c();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    func_0x0001072750a8(0x70);
  }
  else {
    FUN_10726d8d8();
    func_0x000107274d4c();
    func_0x000107274cd8();
    FUN_107272abc();
    unaff_x19[1] = param_1;
  }
  return;
}



/* Entry: 107272a94; end: 107272abb;  */

void FUN_107272a94(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x000107274d4c();
  func_0x000107274cd8();
  FUN_107272abc();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 107272abc; end: 107272acf;  */

void FUN_107272abc(void)

{
  FUN_107272ad0();
  return;
}



/* Entry: 107272ad0; end: 107272b37;  */

long FUN_107272ad0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x000107274180();
  for (; unaff_x21 != param_3; unaff_x21 = unaff_x21 + 0x70) {
    func_0x000107274c6c();
    FUN_10726933c();
    param_4 = uStack_38 + 0x70;
    uStack_38 = param_4;
  }
  func_0x00010727461c();
  FUN_10726da30();
  return param_4;
}



/* Entry: 107272b38; end: 107272b5f;  */

void FUN_107272b38(void)

{
  uint extraout_w8;
  
  func_0x000107274c84();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010726e460();
  }
  return;
}



/* Entry: 107272b60; end: 107272b87;  */

undefined8 FUN_107272b60(undefined8 param_1)

{
  FUN_107272b88(param_1);
  return param_1;
}



/* Entry: 107272b88; end: 107272b9f;  */

void FUN_107272b88(undefined8 param_1,long *param_2)

{
  int iVar1;
  long extraout_x8;
  int extraout_w10;
  
  if (*param_2 == param_2[1]) {
    if ((bRam00000001131acf28 & 1) == 0) {
      iVar1 = 0x131acf28;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        FUN_107272c24(0x1131acf18);
        ___cxa_guard_release(0x1131acf28);
      }
    }
    func_0x000107275304();
    if (extraout_x8 != 0) {
      do {
        func_0x000107274880();
      } while (extraout_w10 != 0);
    }
    return;
  }
  func_0x00010727527c(param_2);
  FUN_107272d44();
  return;
}



/* Entry: 107272ba0; end: 107272c23;  */

void FUN_107272ba0(void)

{
  int iVar1;
  long extraout_x8;
  int extraout_w10;
  
  if ((bRam00000001131acf28 & 1) == 0) {
    iVar1 = 0x131acf28;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_107272c24(0x1131acf18);
      ___cxa_guard_release(0x1131acf28);
    }
  }
  func_0x000107275304();
  if (extraout_x8 != 0) {
    do {
      func_0x000107274880();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107272c24; end: 107272c3f;  */

void FUN_107272c24(void)

{
  undefined1 uStack_11;
  
  FUN_107272c40(&uStack_11);
  return;
}



/* Entry: 107272c40; end: 107272ca7;  */

void FUN_107272c40(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x000107274260();
  func_0x000107275000();
  FUN_107272ca8();
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_1109966d0;
  puStack_30[4] = 0;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  func_0x00010727428c();
  func_0x000107272d18();
  func_0x00010727416c(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x0001072752c0();
  FUN_107272cc8();
  func_0x000107275158();
  return;
}



/* Entry: 107272ca8; end: 107272cc7;  */

void FUN_107272ca8(void)

{
  func_0x0001072752c0();
  FUN_107272cc8();
  func_0x000107275158();
  return;
}



/* Entry: 107272cc8; end: 107272ce7;  */

void FUN_107272cc8(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  undefined8 *unaff_x30;
  
  func_0x000107274e9c();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  *unaff_x30 = &PTR_FUN_1109966d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107272ce8; end: 107272ceb;  */

void FUN_107272ce8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109966d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107272cec; end: 107272cff;  */

void FUN_107272cec(void)

{
  func_0x000107272d0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107272d00; end: 107272d27;  */

void FUN_107272d00(long param_1)

{
  func_0x0001072745e4(param_1 + 0x18);
  func_0x00010726e460();
  return;
}



/* Entry: 107272d28; end: 107272d43;  */

void FUN_107272d28(void)

{
  func_0x00010727527c();
  FUN_107272d44();
  return;
}



/* Entry: 107272d44; end: 107272da7;  */

undefined8 * FUN_107272d44(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x000107274260();
  func_0x000107275000();
  FUN_107272ca8();
  FUN_107272da8(puStack_30,param_2);
  func_0x00010727428c();
  func_0x000107272d18();
  func_0x00010727416c(extraout_x8);
  if ((bool)in_ZR) {
    return puStack_30;
  }
  ___stack_chk_fail();
  func_0x0001072748a4();
  func_0x000107272d18();
  func_0x00010727477c();
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_1109966d0;
  puStack_30[1] = 0;
  FUN_107272ddc(puStack_30 + 3);
  return puStack_30;
}



/* Entry: 107272da8; end: 107272ddb;  */

undefined8 * FUN_107272da8(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109966d0;
  param_1[1] = 0;
  FUN_107272ddc(param_1 + 3);
  return param_1;
}



/* Entry: 107272ddc; end: 107272df3;  */

void FUN_107272ddc(long param_1)

{
  func_0x000107274934();
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 107272df4; end: 107272e07;  */

void FUN_107272df4(void)

{
  FUN_107272e64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107272e08; end: 107272e63;  */

void FUN_107272e08(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar2 = *(code **)(*plVar1 + ((ulong)pcVar2 & 0xffffffff));
  }
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  (*pcVar2)(plVar1,&uStack_30);
  FUN_10725af58(&uStack_30);
  return;
}



/* Entry: 107272e64; end: 10727300f;  */

undefined8 * FUN_107272e64(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109962c0;
  func_0x000107272e90(param_1 + 4);
  return param_1;
}



/* Entry: 107273010; end: 10727301f;  */

void FUN_107273010(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110996300;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107273020; end: 107273033;  */

void FUN_107273020(void)

{
  FUN_107273010();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107273034; end: 10727303b;  */

void FUN_107273034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010727574c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10727303c; end: 10727309b;  */

void FUN_10727303c(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0001072747cc();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  func_0x000104c2fe00(param_1 + 4,param_2 + 4);
  FUN_10726ec14(unaff_x19 + 0x58,unaff_x20 + 0x58);
  return;
}



/* Entry: 10727309c; end: 1072730c7;  */

undefined8 * FUN_10727309c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110996350;
  FUN_107261d10(param_1 + 1);
  return param_1;
}



/* Entry: 1072730c8; end: 1072730db;  */

void FUN_1072730c8(void)

{
  FUN_10727309c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072730dc; end: 107273117;  */

undefined8 FUN_1072730dc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xc0;
  __Znwm(0xc0);
  FUN_10727343c();
  return uVar1;
}



/* Entry: 107273118; end: 10727313b;  */

void FUN_107273118(long param_1,undefined8 param_2)

{
  func_0x0001072747cc(param_2,param_1 + 8);
  func_0x0001072751f0(&PTR_FUN_110996350);
  FUN_10726ea1c();
  return;
}



/* Entry: 10727313c; end: 107273407;  */

void FUN_10727313c(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_3a8 [16];
  undefined1 auStack_398 [32];
  undefined1 uStack_378;
  undefined1 uStack_360;
  undefined1 uStack_358;
  undefined1 uStack_340;
  undefined1 uStack_338;
  undefined1 uStack_300;
  undefined1 uStack_2f8;
  undefined1 uStack_2f4;
  undefined1 auStack_2f0 [56];
  undefined1 auStack_2b8 [48];
  long lStack_288;
  undefined1 auStack_280 [96];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 auStack_208 [56];
  undefined1 auStack_1d0 [48];
  undefined8 uStack_1a0;
  undefined1 auStack_198 [96];
  undefined1 auStack_138 [24];
  undefined8 *puStack_120;
  undefined1 auStack_118 [208];
  undefined8 uStack_48;
  
  func_0x000107274dcc();
  func_0x000107274388();
  uStack_48 = extraout_x8;
  FUN_10726fb28(auStack_3a8,unaff_x20 + 8);
  iVar1 = (int)unaff_x20 + 8;
  func_0x00010726fbb0();
  if (iVar1 != 0) {
    lVar5 = *(long *)(unaff_x20 + 0x20);
    in_ZR = *(int *)(unaff_x21 + 0x28) == 3;
    if ((bool)in_ZR) {
      uVar4 = *(undefined8 *)(lVar5 + 0xb8);
      func_0x00010002b838(&uStack_220,"error");
      func_0x00010002b838(auStack_118,&UNK_10f406d9e);
      FUN_1072734dc(uVar4,*(undefined4 *)(unaff_x20 + 0xb8),&uStack_220,auStack_118);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_220);
      func_0x000107272eb4(lVar5 + 0x2e0,unaff_x20 + 0x28);
    }
    else {
      in_ZR = *(int *)(unaff_x21 + 0x28) == 2;
      if ((bool)in_ZR) {
        plVar3 = *(long **)(lVar5 + 0x28);
        func_0x000104c2fe00(auStack_2f0,unaff_x20 + 0x28);
        FUN_10727347c(auStack_2b8);
        lStack_288 = lVar5;
        FUN_10726ec14(auStack_280,unaff_x20 + 0x60);
        FUN_107261d5c(&uStack_220,lVar5 + 0x3f0);
        FUN_107273600(auStack_208,auStack_2f0);
        puStack_120 = (undefined8 *)0x0;
        puVar2 = (undefined8 *)0xf0;
        __Znwm();
        *puVar2 = &PTR_FUN_1109963d0;
        puVar2[2] = uStack_218;
        puVar2[1] = uStack_220;
        uStack_220 = 0;
        uStack_218 = 0;
        puVar2[3] = uStack_210;
        func_0x000104c2fe00(puVar2 + 4,auStack_208);
        FUN_10727347c(puVar2 + 0xb,auStack_1d0);
        puVar2[0x11] = uStack_1a0;
        FUN_10726ec14(puVar2 + 0x12,auStack_198);
        puStack_120 = puVar2;
        FUN_107273db0(auStack_398,&UNK_10f406d7e);
        uStack_378 = 0;
        uStack_360 = 0;
        uStack_358 = 0;
        uStack_340 = 0;
        uStack_338 = 0;
        uStack_300 = 0;
        uStack_2f8 = 0;
        uStack_2f4 = 0;
        FUN_107273dcc(auStack_118,auStack_138,auStack_398);
        (**(code **)(*plVar3 + 0x18))(plVar3,auStack_118);
        FUN_107273efc(auStack_118);
        func_0x000107273f24(auStack_398);
        func_0x0001006393ec(auStack_138);
        FUN_107273488(&uStack_220);
        func_0x0001072734ac(auStack_2f0);
      }
    }
  }
  func_0x000107270b00();
  func_0x00010727416c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_107273efc(auStack_118);
  func_0x000107273f24(auStack_398);
  func_0x0001006393ec(auStack_138);
  FUN_107273488(&uStack_220);
  func_0x0001072734ac(auStack_2f0);
  func_0x000107270b00(auStack_3a8);
  func_0x00010727477c();
  func_0x000107275910();
  func_0x000107275248();
  func_0x000107274ebc();
  return;
}



/* Entry: 107273408; end: 10727342f;  */

void FUN_107273408(undefined8 param_1)

{
  func_0x000107275910();
  func_0x000107275248(param_1,&PTR_DAT_110996520);
  func_0x000107274ebc();
  return;
}



/* Entry: 107273430; end: 10727343b;  */

undefined ** FUN_107273430(void)

{
  return &PTR_DAT_110996520;
}



/* Entry: 10727343c; end: 10727347b;  */

void FUN_10727343c(void)

{
  func_0x0001072747cc();
  func_0x0001072751f0(&PTR_FUN_110996350);
  FUN_10726ea1c();
  return;
}



/* Entry: 10727347c; end: 107273487;  */

void FUN_10727347c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x000107946698(param_1,0,param_2);
  func_0x000107946d88(&PTR_DAT_1109ed730);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  uVar1 = *(uint *)(unaff_x21 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  uVar3 = *(uint *)(unaff_x21 + 0x28);
  *(uint *)(unaff_x19 + 0x28) = uVar3;
  if ((uVar1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x0001079451cc();
    uVar3 = *(uint *)(unaff_x19 + 0x28);
  }
  *(undefined8 *)(unaff_x19 + 0x18) = unaff_x20;
  if ((uVar3 & 0xfffffffe) == 2) {
    lVar2 = unaff_x21 + 0x20;
    func_0x000107946ba4();
    *(long *)(unaff_x19 + 0x20) = lVar2;
  }
  return;
}



/* Entry: 107273488; end: 1072734db;  */

long FUN_107273488(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107274b8c();
  func_0x0001072734ac();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1072734dc; end: 1072735ff;  */

void FUN_1072734dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined4 auStack_120 [6];
  undefined4 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_d8;
  undefined1 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [112];
  
  auStack_120[0] = 0x143;
  uStack_108 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  func_0x000107274ef4();
  uStack_f8 = 0;
  uStack_d8 = 0;
  uStack_d4 = 1;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d0 = 0;
  FUN_107267f50(auStack_138);
  puVar1 = auStack_120;
  FUN_10726e300(puVar1,&UNK_10f406af7,auStack_138);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_150,param_3);
  func_0x000107275600();
  FUN_107273f9c(puVar1,auStack_150,auStack_168);
  FUN_10726e6c0(auStack_b0,puVar1);
  func_0x000107274984();
  func_0x0001072751d8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
  FUN_107262330(auStack_120);
  FUN_10726e698(param_1,auStack_b0);
  FUN_107262330(auStack_b0);
  return;
}



/* Entry: 107273600; end: 107273657;  */

void FUN_107273600(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747cc();
  func_0x000104c2fe00();
  func_0x0001072751cc();
  FUN_10727347c();
  *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(unaff_x20 + 0x68);
  FUN_10726ec14(unaff_x19 + 0x70,unaff_x20 + 0x70);
  return;
}



/* Entry: 107273658; end: 107273683;  */

undefined8 * FUN_107273658(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109963d0;
  FUN_107273488(param_1 + 1);
  return param_1;
}



/* Entry: 107273684; end: 107273697;  */

void FUN_107273684(void)

{
  FUN_107273658();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107273698; end: 1072736d3;  */

undefined8 FUN_107273698(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xf0;
  __Znwm(0xf0);
  FUN_107273b20();
  return uVar1;
}



/* Entry: 1072736d4; end: 1072736f7;  */

void FUN_1072736d4(long param_1,undefined8 param_2)

{
  func_0x0001072747cc(param_2,param_1 + 8);
  func_0x0001072751f0(&PTR_FUN_1109963d0);
  FUN_107273600();
  return;
}



/* Entry: 1072736f8; end: 107273aeb;  */

void FUN_1072736f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 in_x7;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar5;
  long unaff_x23;
  undefined1 auStack_198 [20];
  undefined1 auStack_184 [16];
  undefined1 uStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined1 auStack_130 [16];
  undefined8 *puStack_120;
  undefined8 *apuStack_118 [7];
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 auStack_d0 [64];
  undefined8 *apuStack_90 [9];
  undefined8 uStack_48;
  
  func_0x000107274388();
  iVar2 = (int)auStack_198;
  uStack_48 = extraout_x8;
  func_0x000107275784();
  func_0x000107275688();
  if (iVar2 != 0) {
    unaff_x23 = param_1[0x11];
    in_ZR = *(int *)(param_1 + 0x10) == 2;
    puVar1 = (undefined8 *)(param_1[0xf] & 0xfffffffffffffffc);
    if (!(bool)in_ZR) {
      puVar1 = (undefined8 *)&DAT_11383d918;
    }
    lVar4 = (long)*(char *)((long)puVar1 + 0x17);
    puVar3 = puVar1;
    if (lVar4 < 0) {
      puVar3 = (undefined8 *)*puVar1;
      lVar4 = puVar1[1];
    }
    func_0x0001078ba1ec(apuStack_90,puVar3,lVar4);
    FUN_107273b60(auStack_130,1);
    puVar1 = puStack_120;
    puStack_120[2] = 0;
    *puStack_120 = &PTR_FUN_110996440;
    puStack_120[1] = 0;
    func_0x0001072757b8(apuStack_118);
    puStack_158 = (undefined8 *)0x0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_170 = 0;
    auStack_184[0] = 0;
    uStack_174 = 0;
    func_0x0001077814e8(0x3f800000,puVar1 + 3,apuStack_118,apuStack_90,0,&puStack_158,&uStack_170,
                        auStack_184,in_x7,0,0);
    FUN_10724e0ac(&uStack_170);
    FUN_10724e0ac(&puStack_158);
    func_0x000104c2f714(apuStack_118);
    puVar1 = puStack_120;
    puStack_120 = (undefined8 *)0x0;
    unaff_x21 = puVar1 + 3;
    FUN_107273c84(auStack_130);
    puStack_138 = puVar1;
    puStack_e0 = (undefined8 *)0x0;
    puStack_d8 = (undefined8 *)0x0;
    puStack_140 = unaff_x21;
    func_0x000107272e90(&puStack_e0);
    FUN_10724e5f4(apuStack_90);
    FUN_10726e534(*(undefined8 *)(unaff_x23 + 0xb8),0x142,*(undefined4 *)(param_1 + 0x1d));
    FUN_10724bb70(apuStack_118,unaff_x23 + 0x18);
    if (apuStack_118[0] != (undefined8 *)0x0) {
      uVar5 = *(undefined8 *)(unaff_x23 + 0x10);
      puStack_d8 = puStack_138;
      puStack_e0 = puStack_140;
      puStack_140 = (undefined8 *)0x0;
      puStack_138 = (undefined8 *)0x0;
      func_0x0001072757b8(auStack_d0);
      unaff_x21 = (undefined8 *)0x68;
      __Znwm();
      FUN_107273c94(apuStack_90,&puStack_e0);
      *unaff_x21 = &PTR_FUN_1109964a0;
      unaff_x21[1] = uVar5;
      unaff_x21[2] = FUN_1072619b0;
      unaff_x21[3] = 0;
      FUN_107273c94(unaff_x21 + 4,apuStack_90);
      func_0x000107273d2c(apuStack_90);
      puStack_158 = unaff_x21;
      func_0x000107273d2c(&puStack_e0);
      func_0x000107275764();
      puVar1 = puStack_158;
      puStack_158 = (undefined8 *)0x0;
      if (puVar1 != (undefined8 *)0x0) {
        func_0x000107274528();
      }
    }
    func_0x00010724bcd8(apuStack_118);
    func_0x000107272e90(&puStack_140);
    unaff_x20 = apuStack_118[0];
  }
  while( true ) {
    func_0x000107270b00(auStack_198);
    func_0x00010727416c(uStack_48);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000107274dcc();
    puVar1 = puStack_158;
    puStack_158 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      func_0x000107274528();
    }
    func_0x00010724bcd8(apuStack_118);
    func_0x000107272e90(&puStack_140);
    in_ZR = (int)unaff_x21 == 1;
    if (!(bool)in_ZR) break;
    ___cxa_begin_catch(unaff_x20);
    uVar5 = *(undefined8 *)(unaff_x23 + 0xb8);
    func_0x00010002b838(apuStack_90,"error");
    func_0x00010002b838(&puStack_e0,"decode_error");
    FUN_1072734dc(uVar5,*(undefined4 *)(param_1 + 0x1d),apuStack_90,&puStack_e0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_e0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_90);
    FUN_10724bb70(&puStack_140,unaff_x23 + 0x18);
    unaff_x20 = puStack_140;
    if (puStack_140 != (undefined8 *)0x0) {
      unaff_x21 = *(undefined8 **)(unaff_x23 + 0x10);
      func_0x0001072757b8(&puStack_e0);
      param_1 = (undefined8 *)0x58;
      __Znwm();
      func_0x000104c318bc(apuStack_90,&puStack_e0);
      *param_1 = &PTR_FUN_1109964e0;
      param_1[1] = unaff_x21;
      param_1[2] = FUN_107261d08;
      param_1[3] = 0;
      func_0x000104c318bc(param_1 + 4,apuStack_90);
      func_0x000104c2f714(apuStack_90);
      apuStack_90[0] = param_1;
      func_0x000104c2f714(&puStack_e0);
      func_0x000107275764();
      puVar1 = apuStack_90[0];
      apuStack_90[0] = (undefined8 *)0x0;
      if (puVar1 != (undefined8 *)0x0) {
        func_0x000107274528();
      }
    }
    func_0x00010724bcd8(&puStack_140);
    ___cxa_end_catch();
  }
  func_0x000107270b00(auStack_198);
  func_0x000107274794();
  func_0x000104bd46a0(unaff_x20);
  func_0x000107275910();
  func_0x000107275248();
  func_0x000107274ebc();
  return;
}



/* Entry: 107273aec; end: 107273b13;  */

void FUN_107273aec(undefined8 param_1)

{
  func_0x000107275910();
  func_0x000107275248(param_1,&PTR_DAT_110996510);
  func_0x000107274ebc();
  return;
}



/* Entry: 107273b14; end: 107273b1f;  */

undefined ** FUN_107273b14(void)

{
  return &PTR_DAT_110996510;
}



/* Entry: 107273b20; end: 107273b5f;  */

void FUN_107273b20(void)

{
  func_0x0001072747cc();
  func_0x0001072751f0(&PTR_FUN_1109963d0);
  FUN_107273600();
  return;
}



/* Entry: 107273b60; end: 107273b7f;  */

void FUN_107273b60(void)

{
  func_0x0001072752c0();
  FUN_107273b80();
  func_0x000107275158();
  return;
}



/* Entry: 107273b80; end: 107273baf;  */

void FUN_107273b80(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x13b13b13b13b13c) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xd0);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110996440;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107273bb0; end: 107273bb3;  */

void FUN_107273bb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110996440;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107273bb4; end: 107273bc7;  */

void FUN_107273bb4(void)

{
  func_0x000107273bd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107273bc8; end: 107273bdf;  */

void FUN_107273bc8(long param_1)

{
  func_0x000107274b80(param_1 + 0x18);
  FUN_107273c04();
  func_0x000107274878();
  return;
}



/* Entry: 107273be0; end: 107273c03;  */

void FUN_107273be0(void)

{
  func_0x000107274b80();
  FUN_107273c04();
  func_0x000107274878();
  return;
}



/* Entry: 107273c04; end: 107273c47;  */

void FUN_107273c04(long param_1)

{
  if (*(uint *)(param_1 + 0x78) != 0xffffffff) {
    func_0x0001072745a8((&PTR_FUN_110996480)[*(uint *)(param_1 + 0x78)]);
  }
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  return;
}



/* Entry: 107273c48; end: 107273c57;  */

void FUN_107273c48(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  int *extraout_x8;
  uint *unaff_x19;
  
  func_0x000107274b80(param_2);
  FUN_10724e0ac();
  FUN_10724e0ac(unaff_x19 + 8);
  if (((ulong)*unaff_x19 * (ulong)unaff_x19[1] & 0x3fffffffffffffff) != 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113823db0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        lRam0000000113823db0 = lRam0000000113823db0 + (ulong)unaff_x19[1] * (ulong)*unaff_x19 * -4;
      }
    } while (cVar1 != '\0');
    func_0x00010724e7c8();
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = *extraout_x8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10724e5b8(unaff_x19 + 2);
  return;
}



/* Entry: 107273c58; end: 107273c83;  */

void FUN_107273c58(void)

{
  char cVar1;
  bool bVar2;
  int *extraout_x8;
  uint *unaff_x19;
  
  func_0x000107274b80();
  FUN_10724e0ac();
  FUN_10724e0ac(unaff_x19 + 8);
  if (((ulong)*unaff_x19 * (ulong)unaff_x19[1] & 0x3fffffffffffffff) != 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113823db0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        lRam0000000113823db0 = lRam0000000113823db0 + (ulong)unaff_x19[1] * (ulong)*unaff_x19 * -4;
      }
    } while (cVar1 != '\0');
    func_0x00010724e7c8();
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = *extraout_x8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10724e5b8(unaff_x19 + 2);
  return;
}



/* Entry: 107273c84; end: 107273c93;  */

void FUN_107273c84(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107273c94; end: 107273cbf;  */

undefined8 * FUN_107273c94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x000104c318bc(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 107273cc0; end: 107273cc3;  */

undefined8 * FUN_107273cc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109964a0;
  func_0x000107273d2c(param_1 + 4);
  return param_1;
}



/* Entry: 107273cc4; end: 107273cd7;  */

void FUN_107273cc4(void)

{
  FUN_107273d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107273cd8; end: 107273cff;  */

void FUN_107273cd8(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x000107273cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20,param_1 + 0x30);
  return;
}



/* Entry: 107273d00; end: 107273d4f;  */

undefined8 * FUN_107273d00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109964a0;
  func_0x000107273d2c(param_1 + 4);
  return param_1;
}



/* Entry: 107273d50; end: 107273d53;  */

undefined8 * FUN_107273d50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109964e0;
  func_0x000104c2f714(param_1 + 4);
  return param_1;
}



/* Entry: 107273d54; end: 107273d67;  */

void FUN_107273d54(void)

{
  FUN_107273d84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107273d68; end: 107273d83;  */

void FUN_107273d68(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x000107275664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20);
  return;
}



/* Entry: 107273d84; end: 107273daf;  */

undefined8 * FUN_107273d84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109964e0;
  func_0x000104c2f714(param_1 + 4);
  return param_1;
}



/* Entry: 107273db0; end: 107273dcb;  */

void FUN_107273db0(long param_1)

{
  func_0x00010002b838();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 107273dcc; end: 107273e7b;  */

long FUN_107273dcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000105302f48();
  *(undefined4 *)(lVar1 + 0x20) = 0;
  func_0x000107273e00(lVar1 + 0x28,param_3);
  return param_1;
}



/* Entry: 107273e7c; end: 107273ea3;  */

void FUN_107273e7c(long param_1)

{
  func_0x000107274aa0();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_107273ea4();
  return;
}



/* Entry: 107273ea4; end: 107273ebb;  */

void FUN_107273ea4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  return;
}



/* Entry: 107273ebc; end: 107273ee3;  */

void FUN_107273ebc(long param_1)

{
  func_0x000107274aa0();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_107273ee4();
  return;
}



/* Entry: 107273ee4; end: 107273efb;  */

void FUN_107273ee4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  return;
}



/* Entry: 107273efc; end: 107273f5b;  */

long * FUN_107273efc(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  func_0x000107273f24(param_1 + 5);
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 107273f5c; end: 107273f9b;  */

void FUN_107273f5c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10725aef4();
  }
  return;
}



/* Entry: 107273f9c; end: 107274023;  */

long FUN_107273f9c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_50 = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  FUN_10726e37c(param_1 + 0x20,&uStack_40,&uStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  func_0x0001072751d8();
  *(undefined1 *)(param_1 + 0x4c) = 1;
  return param_1;
}



/* Entry: 107274024; end: 10727404f;  */

undefined8 * FUN_107274024(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110996540;
  FUN_1072740c8(param_1 + 1);
  return param_1;
}



/* Entry: 107274050; end: 107274063;  */

void FUN_107274050(void)

{
  FUN_107274024();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107274064; end: 10727406b;  */

void FUN_107274064(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107275728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x0001072753b4();
  if ((bool)in_ZR) {
    uVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    uVar2 = 0x28;
  }
  func_0x000107274e64(uVar2);
  return;
}



/* Entry: 10727406c; end: 1072740af;  */

long FUN_10727406c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x000107274e38();
  }
  else {
    func_0x00010727572c();
    *(long *)(param_1 + 0x18) = lVar1;
  }
  return param_1;
}



/* Entry: 1072740b0; end: 1072740c7;  */

void FUN_1072740b0(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107275728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x0001072753b4();
  if ((bool)in_ZR) {
    uVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    uVar2 = 0x28;
  }
  func_0x000107274e64(uVar2);
  return;
}



/* Entry: 1072740c8; end: 1072740fb;  */

void FUN_1072740c8(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x0001072753b4();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x000107274e64(uVar1);
  return;
}



/* Entry: 1072740fc; end: 1072759df;  */

ulong FUN_1072740fc(ulong param_1)

{
  if (1 < param_1) {
    param_1 = 1L << (-LZCOUNT(param_1 - 1) & 0x3fU);
  }
  return param_1;
}



/* Entry: 1072759e0; end: 107275adb;  */

long FUN_1072759e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uVar3;
  
  func_0x00010727a580();
  lVar1 = param_1;
  __ZNSt3__119__shared_mutex_baseC1Ev();
  puVar2 = (undefined8 *)(lVar1 + 0xa8);
  *puVar2 = &PTR_DAT_1109ede60;
  *(undefined8 *)(lVar1 + 0xb0) = 0;
  *(undefined8 *)(lVar1 + 0xc0) = 0;
  func_0x0001078696e8(lVar1 + 200);
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  FUN_107279118(param_1 + 0xf0);
  uVar3 = *unaff_x24;
  *(undefined8 *)(param_1 + 0x1d8) = unaff_x24[1];
  *(undefined8 *)(param_1 + 0x1d0) = uVar3;
  *unaff_x24 = 0;
  unaff_x24[1] = 0;
  uVar3 = *unaff_x23;
  *(undefined8 *)(param_1 + 0x1e8) = unaff_x23[1];
  *(undefined8 *)(param_1 + 0x1e0) = uVar3;
  *unaff_x23 = 0;
  unaff_x23[1] = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = param_4;
  FUN_107276b08(puVar2);
  FUN_107275adc(puVar2,(undefined1 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0x1f0));
  return param_1;
}



/* Entry: 107275adc; end: 107275c73;  */

void FUN_107275adc(undefined8 param_1,long *param_2,long *param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_118 [24];
  long lStack_100;
  undefined4 uStack_f8;
  long lStack_f0;
  undefined4 uStack_e8;
  undefined1 auStack_e0 [24];
  undefined4 auStack_c8 [6];
  undefined4 uStack_b0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_58 [24];
  
  FUN_107275c74(auStack_58);
  auStack_c8[0] = 0x119;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  func_0x00010727a3cc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_e0,auStack_58);
  puVar1 = auStack_c8;
  FUN_10726e300(puVar1,&DAT_10f406daf,auStack_e0);
  lStack_f0 = CONCAT44(lStack_f0._4_4_,1);
  uStack_e8 = 0;
  lStack_100 = *param_3;
  uStack_f8 = 3;
  plVar2 = param_3;
  func_0x00010743fa9c(param_3,puVar1,&lStack_f0,&lStack_100,7);
  func_0x00010727a618();
  func_0x00010727a608();
  __ZNSt3__16chrono12steady_clock3nowEv();
  if ((char)param_2[1] == '\x01') {
    lVar3 = *param_2;
    auStack_c8[0] = 0x11a;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    func_0x00010727a3cc();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_118,auStack_58)
    ;
    puVar1 = auStack_c8;
    FUN_10726e300(puVar1,&DAT_10f406daf,auStack_118);
    lStack_100 = ((long)plVar2 - lVar3) / 1000;
    lStack_f0 = *param_3;
    uStack_e8 = 3;
    func_0x00010743f9dc(param_3,puVar1,&lStack_100,&lStack_f0,7);
    func_0x00010727a5f4();
    func_0x00010727a608();
    if ((*(byte *)(param_2 + 1) & 1) != 0) goto LAB_107275c18;
  }
  *(undefined1 *)(param_2 + 1) = 1;
LAB_107275c18:
  *param_2 = (long)plVar2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  return;
}



/* Entry: 107275c74; end: 107275cab;  */

void FUN_107275c74(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x00010727a700();
  *param_1 = extraout_x8;
  func_0x000107279198(param_1 + 0x16);
  func_0x000107276ba4(param_1 + 1);
  return;
}



/* Entry: 107275cac; end: 107276997;  */

void FUN_107275cac(ulong param_1)

{
  undefined **ppuVar1;
  char cVar2;
  int iVar3;
  undefined8 ****ppppuVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  undefined ******ppppppuVar10;
  undefined *****pppppuVar11;
  undefined ****ppppuVar12;
  ulong *puVar13;
  long lVar14;
  undefined8 *puVar15;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  undefined8 extraout_x8;
  undefined8 uVar16;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined8 extraout_x8_08;
  long lVar17;
  undefined **extraout_x9;
  undefined **extraout_x9_00;
  undefined **extraout_x9_01;
  undefined **extraout_x9_02;
  undefined **extraout_x9_03;
  undefined **extraout_x9_04;
  undefined **extraout_x9_05;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  long *plVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  undefined8 ****ppppuVar22;
  long lStack_2f0;
  undefined1 uStack_2e8;
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  ulong uStack_270;
  undefined1 uStack_268;
  undefined *****pppppuStack_260;
  undefined ****ppppuStack_258;
  undefined ****ppppuStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined **ppuStack_218;
  undefined *puStack_210;
  undefined8 ****ppppuStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined ****ppppuStack_1f0;
  undefined *****pppppuStack_1e8;
  undefined8 ****ppppuStack_1e0;
  undefined8 *puStack_1d8;
  undefined *puStack_1c8;
  undefined ****ppppuStack_1c0;
  undefined *****pppppuStack_1b8;
  undefined8 ****ppppuStack_1b0;
  undefined *****pppppuStack_1a8;
  undefined ****ppppuStack_1a0;
  undefined4 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined *****pppppuStack_178;
  undefined8 ****ppppuStack_170;
  undefined *****pppppuStack_168;
  undefined ****appppuStack_160 [9];
  undefined4 uStack_118;
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x00010727a3f0();
  func_0x00010727a218();
  uStack_268 = 1;
  uStack_270 = param_1;
  uStack_58 = extraout_x8;
  __ZNSt3__119__shared_mutex_base4lockEv();
  iVar9 = (int)param_1;
  if (*(int *)(unaff_x20 + 0xc4) != *(int *)(unaff_x19 + 0x1c)) goto LAB_107275e08;
  iVar3 = *(int *)(unaff_x20 + 0xc4) + -2;
  uVar7 = iVar3 == 0xb;
  switch(iVar3) {
  case 0:
  case 7:
  case 0xb:
    lVar14 = *(long *)(unaff_x20 + 0xb8);
    lVar17 = *(long *)(unaff_x19 + 0x10);
code_r0x000107275d20:
    lVar14 = lVar14 + 0x10;
    FUN_107276bd4(lVar14,lVar17 + 0x10);
    uVar8 = (uint)lVar14;
    goto joined_r0x000107275d5c;
  case 1:
    lVar14 = *(long *)(unaff_x20 + 0xb8);
    lVar17 = *(long *)(unaff_x19 + 0x10);
    uVar7 = true;
    if (*(int *)(lVar14 + 0x28) == *(int *)(lVar17 + 0x28)) goto code_r0x000107275d20;
    break;
  default:
    goto LAB_1072766cc;
  case 3:
    lVar14 = *(long *)(unaff_x20 + 0xb8);
    func_0x00010727a2e0(*(undefined8 *)(lVar14 + 0x18));
    if ((int)param_1 != 0) {
      uVar16 = *(undefined8 *)(lVar14 + 0x20);
      goto code_r0x000107275e00;
    }
    break;
  case 4:
    lVar19 = *(long *)(unaff_x20 + 0xb8);
    lVar17 = *(long *)(unaff_x19 + 0x10);
    lVar14 = lVar19 + 0x10;
    FUN_107276bd4(lVar14,lVar17 + 0x10);
    uVar7 = *(char *)(lVar19 + 0x28) == *(char *)(lVar17 + 0x28);
    uVar8 = (uint)lVar14;
    if (!(bool)uVar7) {
      uVar8 = 1;
    }
    uVar8 = uVar8 & 1;
joined_r0x000107275d5c:
    if (uVar8 == 0) goto LAB_1072766cc;
    break;
  case 5:
    lVar14 = *(long *)(unaff_x20 + 0xb8);
    lVar17 = *(long *)(unaff_x19 + 0x10);
    func_0x00010727a2e0(*(undefined8 *)(lVar14 + 0x10));
    if ((((iVar9 != 0) && (*(char *)(lVar14 + 0x20) == *(char *)(lVar17 + 0x20))) &&
        (func_0x00010727a2e0(*(undefined8 *)(lVar14 + 0x18)), iVar9 != 0)) &&
       (*(char *)(lVar14 + 0x21) == *(char *)(lVar17 + 0x21))) {
      uVar7 = 1;
      goto LAB_1072766cc;
    }
    break;
  case 6:
    uVar16 = *(undefined8 *)(*(long *)(unaff_x20 + 0xb8) + 0x10);
code_r0x000107275e00:
    func_0x00010727a2e0(uVar16);
    if ((param_1 & 1) != 0) goto LAB_1072766cc;
  }
LAB_107275e08:
  func_0x000107277f0c(auStack_2a0,unaff_x20 + 200);
  ppppuStack_240 = (undefined ****)&UNK_10e52b660;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  pppppuStack_178 = &ppppuStack_240;
  uStack_180 = &PTR_FUN_1109969b0;
  pppppuStack_168 = (undefined *****)&uStack_180;
  func_0x000107869948(auStack_2a0,&uStack_180);
  FUN_107277390(&uStack_180);
  func_0x00010727a2c8();
  FUN_107275c74(&ppppuStack_1f0);
  func_0x00010727a670();
  puVar15 = &uStack_180;
  FUN_1072773cc(&ppuStack_218,&ppppuStack_240,puVar15,&ppppuStack_1c0);
  func_0x00010727a33c();
  func_0x00010727a45c();
  func_0x00010727a334();
  func_0x000107275c78(&pppppuStack_260);
  puStack_200 = &UNK_10f315928;
  uStack_1f8 = 5;
  ppppppuVar10 = &pppppuStack_260;
  func_0x0001005d466c();
  ppppuStack_1f0 = (undefined ****)&UNK_10de23253;
  pppppuStack_1e8 = (undefined *****)0x0;
  pppppuStack_178 = appppuStack_160;
  pppppuStack_168 = (undefined *****)0x100;
  ppppuStack_170 = (undefined ******)0x0;
  uStack_180 = &PTR_FUN_1109965d0;
  lStack_60 = 0;
  pppppuVar11 = (undefined *****)&UNK_10f315928;
  ppppuStack_1e0 = ppppppuVar10;
  puStack_1d8 = puVar15;
  func_0x00010727a648(&uStack_180,&UNK_10f315928,5);
  uVar21 = (long)ppppuStack_170 + lStack_60;
  ppuStack_218 = &puStack_200;
  puStack_210 = &UNK_10de23253;
  ppppuStack_208 = &pppppuStack_260;
  if (uVar21 < 0x26) {
    uStack_180 = (undefined **)
                 (CONCAT62((int6)((ulong)uStack_180 >> 0x10),(short)uVar21) & 0xffffffffff00ffff);
    *(undefined1 *)((long)&uStack_180 + 2 + uVar21) = 0;
    FUN_107277590(&ppuStack_218,(long)&uStack_180 + 2,0x26);
    pppppuStack_1b8 = pppppuStack_178;
    ppppuStack_1c0 = (undefined ****)uStack_180;
    pppppuStack_1a8 = pppppuStack_168;
    ppppuStack_1b0 = ppppuStack_170;
    ppppuStack_1a0 = appppuStack_160[0];
    uStack_198 = 1;
    uStack_190 = 0xffffffffffffffff;
  }
  else if (uVar21 < 0x52) {
    func_0x00010727a628(&uStack_180);
    *(short *)uStack_180 = (short)uVar21;
    *(undefined1 *)((long)uStack_180 + uVar21 + 2) = 0;
    FUN_107277590(&ppuStack_218,(undefined2 *)((long)uStack_180 + 2),0x52);
    pppppuStack_1b8 = pppppuStack_178;
    ppppuStack_1c0 = (undefined ****)uStack_180;
    if ((undefined8 *****)pppppuStack_178 != (undefined8 *****)0x0) {
      do {
        func_0x00010727a734();
      } while (extraout_w10 != 0);
    }
    uStack_198 = 2;
    uStack_190 = 0xffffffffffffffff;
    func_0x000104c2f784(&uStack_180);
  }
  else {
    ppppppuVar10 = &pppppuStack_260;
    func_0x0001005d466c();
    uStack_180 = (undefined **)&UNK_10de23253;
    pppppuStack_178 = (undefined *****)0x0;
    ppppuStack_170 = ppppppuVar10;
    pppppuStack_168 = pppppuVar11;
    func_0x0001003a9204(&ppppuStack_1f0,puStack_200,uStack_1f8,0xdc,&uStack_180);
    func_0x00010727a670();
    func_0x00010727a45c();
  }
  func_0x00010727a6d0();
  FUN_1072774cc(&uStack_180,&ppppuStack_240,&ppppuStack_1c0,&ppppuStack_1f0);
  func_0x00010727a33c();
  func_0x00010727a618();
  switch(*(undefined4 *)(unaff_x19 + 0x1c)) {
  case 2:
    func_0x00010727a31c(*(undefined8 *)(unaff_x19 + 0x10));
    func_0x00010727a23c();
    FUN_107276f7c(&ppuStack_218,ppppuStack_1c0,pppppuStack_1b8);
    FUN_1072775b8(&ppppuStack_1f0,&ppppuStack_240,&uStack_180,&ppuStack_218);
    FUN_10726b188(&ppuStack_218);
    goto code_r0x0001072761f4;
  case 5:
    func_0x00010727a2c8();
    func_0x00010727a364();
    ppuVar1 = extraout_x9_00;
    if (extraout_w8_00 != 5) {
      ppuVar1 = &PTR_PTR_113234508;
    }
    func_0x00010727a328(ppuVar1[3]);
    func_0x00010727a1f8();
    func_0x00010727a33c();
    func_0x00010727a334();
    func_0x00010727a2b4();
    func_0x00010727a58c(*(undefined8 *)(extraout_x8_00 + 0x18));
    func_0x00010727a6d0();
    func_0x00010727a284();
    func_0x00010727a334();
    func_0x00010727a2c8();
    func_0x00010727a2b4();
    func_0x00010727a328(*(undefined8 *)(extraout_x8_01 + 0x20));
    func_0x00010727a1f8();
    func_0x00010727a33c();
    func_0x00010727a334();
    func_0x000100060964(&ppppuStack_1c0,&UNK_10de232c2);
    func_0x00010727a2b4();
    ppuVar1 = &PTR_PTR_113233fe0;
    if (*(undefined ***)(extraout_x8_02 + 0x28) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(extraout_x8_02 + 0x28);
    }
    pppppuStack_178 = (undefined *****)ppuVar1[2];
    uStack_118 = 2;
    func_0x00010727a3fc();
    FUN_10726af18(&pppppuStack_178);
    func_0x00010727a33c();
    func_0x000100060964(&ppppuStack_1c0,&UNK_10de232e2);
    func_0x00010727a2b4();
    ppuVar1 = &PTR_PTR_113233fe0;
    if (*(undefined ***)(extraout_x8_03 + 0x28) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(extraout_x8_03 + 0x28);
    }
    pppppuStack_178 = (undefined *****)ppuVar1[3];
    uStack_118 = 2;
    func_0x00010727a3fc();
    func_0x00010727a4a8();
    pppppuVar11 = &ppppuStack_1c0;
    goto code_r0x0001072763a4;
  case 6:
    func_0x00010727a31c(*(undefined8 *)(unaff_x19 + 0x10));
    func_0x00010727a364();
    ppuVar1 = extraout_x9_02;
    if (extraout_w8_02 != 6) {
      ppuVar1 = &PTR_PTR_113233f60;
    }
    cVar2 = *(char *)(ppuVar1 + 5);
    func_0x00010727a23c();
    func_0x00010727a364();
    ppuVar1 = extraout_x9_03;
    if (extraout_w8_03 != 6) {
      ppuVar1 = &PTR_PTR_113233f60;
    }
    func_0x00010727a398(ppuVar1,&ppppuStack_1f0);
    func_0x00010727a610();
    func_0x00010727a298();
    func_0x00010727a620();
    func_0x00010727a668();
    func_0x00010727a334();
    if (cVar2 != '\0') {
      func_0x00010727a2c8();
      ppuStack_218 = (undefined **)CONCAT71(ppuStack_218._1_7_,1);
      FUN_1072774cc(&ppppuStack_1f0,&ppppuStack_240,&uStack_180,&ppuStack_218);
      goto code_r0x0001072761f4;
    }
    goto code_r0x0001072761f8;
  case 7:
    func_0x00010727a2c8();
    func_0x00010727a364();
    func_0x00010727a69c();
    func_0x00010727a328(*(undefined8 *)(extraout_x8_04 + 0x10));
    func_0x00010727a1f8();
    func_0x00010727a33c();
    func_0x00010727a334();
    func_0x00010727a364();
    func_0x00010727a69c();
    func_0x00010727a58c(*(undefined8 *)(extraout_x8_05 + 0x10));
    func_0x00010727a6d0();
    func_0x00010727a284();
    func_0x00010727a334();
    func_0x00010727a364();
    ppuVar1 = extraout_x9_04;
    if (extraout_w8_04 != 7) {
      ppuVar1 = &PTR_PTR_113233ee8;
    }
    if (*(char *)(ppuVar1 + 4) == '\x01') {
      func_0x00010727a23c();
      func_0x000107277eec(&ppppuStack_1f0);
      FUN_1072775b8(&ppppuStack_1c0,&ppppuStack_240,&uStack_180,&ppppuStack_1f0);
      FUN_10726b188(&ppppuStack_1f0);
      func_0x00010727a334();
      func_0x00010727a364();
    }
    func_0x00010727a69c();
    uVar21 = *(ulong *)(extraout_x8_06 + 0x18);
    func_0x00010727a2c8();
    FUN_107262e9c(&ppppuStack_1c0,uVar21 & 0xfffffffffffffffc);
    func_0x00010727a1f8();
    func_0x00010727a33c();
    func_0x00010727a334();
    func_0x00010727a364();
    func_0x00010727a69c();
    if (*(char *)(extraout_x8_07 + 0x21) == '\x01') {
      func_0x00010727a2c8();
      func_0x00010727a6d0();
      func_0x00010727a284();
      goto code_r0x0001072763a0;
    }
    break;
  case 8:
    func_0x00010727a2c8();
    func_0x00010727a364();
    ppuVar1 = extraout_x9_05;
    if (extraout_w8_05 != 8) {
      ppuVar1 = &PTR_PTR_113233f40;
    }
    func_0x00010727a328(ppuVar1[2]);
    func_0x00010727a1f8();
    func_0x00010727a33c();
code_r0x0001072763a0:
    pppppuVar11 = (undefined *****)&uStack_180;
code_r0x0001072763a4:
    func_0x000104c2f714(pppppuVar11);
    break;
  case 9:
    func_0x00010727a31c(*(undefined8 *)(unaff_x19 + 0x10));
    func_0x00010727a23c();
    func_0x00010727a364();
    ppuVar1 = extraout_x9;
    if (extraout_w8 != 9) {
      ppuVar1 = &PTR_PTR_113233f10;
    }
    func_0x00010727a398(ppuVar1,&ppppuStack_1f0);
    func_0x00010727a610();
    func_0x00010727a298();
    goto code_r0x0001072761ec;
  case 0xd:
    func_0x00010727a31c(*(undefined8 *)(unaff_x19 + 0x10));
    func_0x00010727a23c();
    func_0x00010727a364();
    ppuVar1 = extraout_x9_01;
    if (extraout_w8_01 != 0xd) {
      ppuVar1 = &PTR_PTR_113233eb8;
    }
    func_0x00010727a398(ppuVar1,&ppppuStack_1f0);
    func_0x00010727a610();
    func_0x00010727a298();
code_r0x0001072761ec:
    func_0x00010727a620();
    func_0x00010727a668();
code_r0x0001072761f4:
    func_0x00010727a334();
code_r0x0001072761f8:
    func_0x0001000e30f4(&ppppuStack_1c0);
  }
  func_0x0001078697d4(auStack_288,&ppppuStack_240);
  FUN_10726ae88(&ppppuStack_240);
  FUN_10726b264(auStack_2a0);
  (**(code **)(**(long **)(unaff_x20 + 0x1e0) + 0x28))(*(long **)(unaff_x20 + 0x1e0),auStack_288);
  if ((*(int *)(unaff_x19 + 0x1c) != 6) ||
     ((*(byte *)(*(long *)(unaff_x19 + 0x10) + 0x28) & 1) == 0)) {
    plVar18 = *(long **)(unaff_x20 + 0x1d0);
    func_0x000100060b18(&ppppuStack_1f0,&PTR_DAT_110996990);
    uStack_180 = (undefined **)&UNK_10e52b660;
    pppppuStack_178 = (undefined *****)0x0;
    ppppuStack_170 = (undefined ******)0x0;
    pppppuStack_168 = (undefined *****)0x0;
    pppppuStack_1b8 = (undefined *****)&uStack_180;
    ppppuStack_1c0 = (undefined ****)&PTR_DAT_110996a30;
    ppppuStack_1b0 = &ppppuStack_240;
    pppppuStack_1a8 = &ppppuStack_1c0;
    func_0x000107869948(unaff_x20 + 200,&ppppuStack_1c0);
    FUN_107277390(&ppppuStack_1c0);
    FUN_107278fec(&pppppuStack_260,&uStack_180);
    FUN_10726ae88(&uStack_180);
    if ((*(byte *)(plVar18 + 1) & 1) == 0) {
      plVar20 = plVar18;
      (**(code **)(*plVar18 + 0x10))();
      if ((int)plVar20 == 0) {
        (**(code **)(*plVar18 + 0x20))(&ppppuStack_1c0,plVar18);
        FUN_10724bb70(&ppuStack_218,&pppppuStack_1b8);
        ppuVar1 = ppuStack_218;
        if (ppuStack_218 != (undefined **)0x0) {
          uStack_238 = 1;
          ppppuStack_240 = (undefined ****)0x110;
          pppppuStack_178 = pppppuStack_1e8;
          uStack_180 = (undefined **)ppppuStack_1f0;
          ppppuStack_170 = ppppuStack_1e0;
          ppppuStack_1f0 = (undefined ****)0x0;
          pppppuStack_1e8 = (undefined *****)0x0;
          ppppuStack_1e0 = (undefined ******)0x0;
          appppuStack_160[0] = ppppuStack_258;
          pppppuStack_168 = pppppuStack_260;
          pppppuStack_260 = (undefined *****)0x0;
          ppppuStack_258 = (undefined ****)0x0;
          FUN_1072792e0(&puStack_200,ppppuStack_1c0,&ppppuStack_240,&uStack_180);
          puStack_1c8 = puStack_200;
          FUN_107279414(&uStack_180);
          func_0x0001073ae140(ppuVar1,&puStack_1c8);
          puVar5 = puStack_1c8;
          puStack_1c8 = (undefined *)0x0;
          if (puVar5 != (undefined *)0x0) {
            func_0x00010727a5d0();
          }
        }
        func_0x00010724bcd8(&ppuStack_218);
        FUN_10724ae28(&pppppuStack_1b8);
      }
      else {
        (**(code **)(*plVar18 + 0x18))();
        if (plVar18 != (long *)0x0) {
          uStack_180 = (undefined **)((ulong)uStack_180 & 0xffffffffffffff00);
          ppppuStack_170 = (undefined8 ****)((ulong)ppppuStack_170 & 0xffffffffffffff00);
          (**(code **)(*plVar18 + 0x110))();
          FUN_107279298(&uStack_180);
        }
      }
    }
    FUN_10726b264(&pppppuStack_260);
    func_0x00010727a45c();
  }
  FUN_10726c924(unaff_x20 + 200,auStack_288);
  func_0x00010794187c(unaff_x20 + 0xa8);
  FUN_107276998(&uStack_270);
  pppppuStack_178 = (undefined *****)0x0;
  uStack_180 = (undefined **)0x0;
  pppppuStack_168 = (undefined *****)0x0;
  ppppuStack_170 = (undefined8 ****)0x0;
  appppuStack_160[0] = (undefined ****)CONCAT44(appppuStack_160[0]._4_4_,0x3f800000);
  ppppuStack_1f0 = (undefined ****)(unaff_x20 + 0xf8);
  pppppuStack_1e8 = (undefined *****)CONCAT71(pppppuStack_1e8._1_7_,1);
  FUN_10724e404();
  ppppuVar22 = ppppuStack_170;
  uVar7 = &uStack_180 == (undefined8 *)(unaff_x20 + 0x1a0);
  if (!(bool)uVar7) {
    appppuStack_160[0] =
         (undefined ****)CONCAT44(appppuStack_160[0]._4_4_,*(undefined4 *)(unaff_x20 + 0x1c0));
    plVar18 = *(long **)(unaff_x20 + 0x1b0);
    ppppuVar4 = (undefined8 ****)uStack_180;
    pppppuVar11 = pppppuStack_178;
    if (pppppuStack_178 != (undefined *****)0x0) {
      for (; pppppuVar11 != (undefined *****)0x0;
          pppppuVar11 = (undefined *****)((long)pppppuVar11 + -1)) {
        *ppppuVar4 = (undefined8 ***)0x0;
        ppppuVar4 = ppppuVar4 + 1;
      }
      ppppuStack_170 = (undefined8 ****)0x0;
      pppppuStack_168 = (undefined *****)0x0;
      for (plVar20 = plVar18;
          (plVar18 = plVar20, ppppuVar22 != (undefined8 ****)0x0 &&
          (plVar18 = (long *)0x0, plVar20 != (long *)0x0)); plVar20 = (long *)*plVar20) {
        *(undefined4 *)(ppppuVar22 + 2) = *(undefined4 *)(plVar20 + 2);
        FUN_1072797b4(ppppuVar22 + 3,plVar20 + 3);
        ppppuVar22 = (undefined8 ****)*ppppuVar22;
        func_0x00010727a598();
      }
      func_0x00010727a5a4();
    }
    for (; plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
      ppppuVar12 = (undefined ****)0x38;
      __Znwm();
      ppppuStack_1b0 = (undefined8 ****)0x0;
      *ppppuVar12 = (undefined ***)0x0;
      ppppuVar12[1] = (undefined ***)0x0;
      *(undefined4 *)(ppppuVar12 + 2) = *(undefined4 *)(plVar18 + 2);
      ppppuStack_1c0 = ppppuVar12;
      pppppuStack_1b8 = (undefined *****)&ppppuStack_170;
      func_0x000107279810(ppppuVar12 + 3,plVar18 + 3);
      ppppuStack_1b0 = (undefined8 ****)CONCAT71(ppppuStack_1b0._1_7_,1);
      ppppuVar12[1] = (undefined ***)(ulong)*(uint *)(ppppuVar12 + 2);
      func_0x00010727a598();
      ppppuStack_1c0 = (undefined ****)0x0;
      FUN_1072799ac(&ppppuStack_1c0);
    }
  }
  FUN_10724e49c(&ppppuStack_1f0);
  for (ppppuVar22 = ppppuStack_170; ppppuVar22 != (undefined8 ****)0x0;
      ppppuVar22 = (undefined8 ****)*ppppuVar22) {
    if (ppppuVar22[6] == (undefined8 ***)0x0) {
      func_0x000104bfeb48();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x107276934);
      (*pcVar6)();
    }
    func_0x00010727a548((*ppppuVar22[6])[6]);
  }
  func_0x000107279198(&uStack_180);
  FUN_107275adc();
  FUN_10726b264(auStack_288);
LAB_1072766cc:
  func_0x000104c305a0();
  func_0x00010727a1d4(uStack_58);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(&uStack_180);
  FUN_10726ae88(&ppppuStack_240);
  FUN_10726b264(auStack_2a0);
  puVar13 = &uStack_270;
  func_0x000104c305a0();
  func_0x00010727a2ac();
  if ((puVar13[1] & 1) == 0) {
    lVar14 = 1;
    __ZNSt3__120__throw_system_errorEiPKc(1,&UNK_10f406df1);
    uStack_2e8 = 1;
    lStack_2f0 = lVar14;
    __ZNSt3__119__shared_mutex_base11lock_sharedEv();
    FUN_107276a2c(extraout_x8_08,lVar14 + 0xa8);
    func_0x000100100f40(&lStack_2f0);
    return;
  }
  __ZNSt3__119__shared_mutex_base6unlockEv(*puVar13);
  *(undefined1 *)(puVar13 + 1) = 0;
  return;
}



/* Entry: 107276998; end: 1072769d3;  */

void FUN_107276998(undefined8 *param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  long lStack_50;
  undefined1 uStack_48;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    __ZNSt3__119__shared_mutex_base6unlockEv(*param_1);
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  lVar1 = 1;
  __ZNSt3__120__throw_system_errorEiPKc(1,&UNK_10f406df1);
  uStack_48 = 1;
  lStack_50 = lVar1;
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  FUN_107276a2c(extraout_x8,lVar1 + 0xa8);
  func_0x000100100f40(&lStack_50);
  return;
}



/* Entry: 1072769d4; end: 107276a2b;  */

void FUN_1072769d4(undefined8 param_1,long param_2)

{
  long lStack_30;
  undefined1 uStack_28;
  
  uStack_28 = 1;
  lStack_30 = param_2;
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  FUN_107276a2c(param_1,param_2 + 0xa8);
  func_0x000100100f40(&lStack_30);
  return;
}



/* Entry: 107276a2c; end: 107276a37;  */

void FUN_107276a2c(undefined8 param_1,undefined8 param_2)

{
  ulong extraout_x8;
  long extraout_x8_00;
  
  func_0x000107946698(param_1,0,param_2);
  func_0x000107946d88(&PTR_DAT_1109ede60);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946c64();
  if ((uint)extraout_x8_00 < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x000107941154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_107941158 + (ulong)(byte)(&UNK_10dedef98)[extraout_x8_00] * 4))();
    return;
  }
  return;
}



/* Entry: 107276a38; end: 107276ab3;  */

int FUN_107276a38(long param_1)

{
  int iVar1;
  long unaff_x20;
  int iStack_34;
  long lStack_30;
  undefined1 uStack_28;
  
  func_0x00010727a3f0();
  lStack_30 = param_1 + 8;
  uStack_28 = 1;
  FUN_107279a5c();
  iStack_34 = *(int *)(unaff_x20 + 0xd8);
  *(int *)(unaff_x20 + 0xd8) = iStack_34 + 1;
  FUN_107279a2c(unaff_x20 + 0xb0,&iStack_34);
  FUN_1072797b4();
  iVar1 = iStack_34;
  FUN_107279ee0(&lStack_30);
  return iVar1;
}



/* Entry: 107276ab4; end: 107276b07;  */

void FUN_107276ab4(long param_1,undefined4 param_2)

{
  long lStack_38;
  undefined1 uStack_30;
  undefined4 uStack_24;
  
  lStack_38 = param_1 + 8;
  uStack_30 = 1;
  uStack_24 = param_2;
  FUN_107279a5c();
  FUN_107279fa0(param_1 + 0xb0,&uStack_24);
  FUN_107279ee0(&lStack_38);
  return;
}



/* Entry: 107276b08; end: 107276bd3;  */

void FUN_107276b08(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 1) {
    func_0x000107940ea0(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 1;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000107276b5c();
    *(ulong *)(param_1 + 0x10) = uVar1;
  }
  return;
}



/* Entry: 107276bd4; end: 107276d23;  */

bool FUN_107276bd4(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  long lStack_70;
  long *plStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  if (*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) {
    FUN_107276d24(&lStack_78,param_1);
    FUN_107276d24(&lStack_90,param_2);
    lStack_a8 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    lStack_50 = lStack_90;
    lStack_48 = lStack_78;
    plStack_60 = &lStack_a8;
    uStack_58 = 0;
    while ((lVar4 = lStack_48, lVar5 = lStack_50, lStack_48 != lStack_70 && (lStack_50 != lStack_88)
           )) {
      lVar3 = lStack_48;
      func_0x000100125af4(lStack_48,lStack_50);
      uVar2 = (uint)lVar3;
      if ((uVar2 >> 7 & 1) == 0) {
        func_0x00010014c53c();
        func_0x000100125af4();
        if ((uVar2 >> 7 & 1) == 0) {
          lStack_48 = lVar4 + 0x18;
        }
        lVar3 = -0x40;
        lVar4 = lVar5;
      }
      else {
        func_0x000107276ed0(&plStack_60,lVar4);
        lVar3 = -0x38;
      }
      *(long *)(&stack0xfffffffffffffff0 + lVar3) = lVar4 + 0x18;
    }
    uStack_38 = uStack_58;
    plStack_40 = plStack_60;
    for (lVar5 = lStack_48; lVar5 != lStack_70; lVar5 = lVar5 + 0x18) {
      func_0x000107276ed0(&plStack_40,lVar5);
    }
    bVar1 = lStack_a8 != lStack_a0;
    func_0x0001000e30f4(&lStack_a8);
    func_0x0001000e30f4(&lStack_90);
    func_0x0001000e30f4(&lStack_78);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 107276d24; end: 107276e33;  */

void FUN_107276d24(undefined8 *param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puStack_68;
  undefined1 uStack_5f;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0;
  puVar1 = param_2;
  if ((*param_2 & 1) != 0) {
    puVar1 = (ulong *)(*param_2 + 7);
  }
  puStack_58 = &uStack_50;
  for (lVar4 = (long)(int)param_2[1] << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    func_0x000100489a2c(&puStack_58,&uStack_50,*puVar1);
    puVar1 = puVar1 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001000fc044(param_1,uStack_48);
  puVar3 = puStack_58;
  while (puVar3 != &uStack_50) {
    puVar2 = puVar3;
    func_0x00010002c7d4();
    FUN_107276e34(&puStack_58,puVar3);
    uStack_5f = 1;
    puStack_68 = puVar3;
    func_0x0001000fecf4(param_1,puVar3 + 4);
    FUN_107276e88(&puStack_68);
    puVar3 = puVar2;
  }
  func_0x0001001c1d38(&puStack_58);
  return;
}



/* Entry: 107276e34; end: 107276e87;  */

long FUN_107276e34(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x00010002c7d4();
  if (*param_1 == param_2) {
    *param_1 = lVar1;
  }
  param_1[2] = param_1[2] + -1;
  func_0x00010530d618(param_1[1],param_2);
  return lVar1;
}



/* Entry: 107276e88; end: 107276f03;  */

void FUN_107276e88(long *param_1)

{
  undefined1 *puStack_38;
  undefined1 uStack_30;
  undefined1 uStack_21;
  
  if (*param_1 != 0) {
    puStack_38 = &uStack_21;
    uStack_30 = 1;
    func_0x000104bff15c(&puStack_38);
    *param_1 = 0;
  }
  return;
}



/* Entry: 107276f04; end: 107276f2b;  */

void FUN_107276f04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010014c49c(param_1,param_2,param_2,param_3);
  FUN_107276f2c();
  return;
}



/* Entry: 107276f2c; end: 107276f7b;  */

void FUN_107276f2c(void)

{
  long in_x3;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010014c4d0();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x18) {
    func_0x000100066230(in_x3,unaff_x21);
    in_x3 = in_x3 + 0x18;
  }
  func_0x00010014c53c();
  return;
}



/* Entry: 107276f7c; end: 107277053;  */

void FUN_107276f7c(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  undefined **ppuStack_2c8;
  undefined *puStack_2c0;
  long lStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 *puStack_278;
  long lStack_270;
  undefined *puStack_268;
  undefined8 auStack_260 [32];
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [56];
  undefined1 auStack_b8 [112];
  undefined8 uStack_48;
  
  func_0x00010727a218();
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_48 = extraout_x8;
  for (; uVar4 = param_2 == param_3, !(bool)uVar4; param_2 = param_2 + 0x18) {
    FUN_107262e9c(auStack_f0,param_2);
    FUN_107277488(auStack_b8,auStack_f0);
    FUN_107277668(&uStack_108,auStack_b8);
    func_0x00010727a410();
    func_0x000104c2f714(auStack_f0);
  }
  puVar6 = &uStack_108;
  FUN_107277aa4(param_1);
  puVar5 = &uStack_108;
  FUN_107277d70();
  func_0x00010727a1d4(uStack_48);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  FUN_107277d70(&uStack_108);
  func_0x00010727a2ac();
  func_0x00010727a484();
  func_0x00010727a218();
  puVar8 = &UNK_10f406dcf;
  puStack_2b0 = &UNK_10f406dcf;
  uStack_2a8 = 4;
  puVar7 = puVar6;
  uStack_158 = extraout_x8_00;
  func_0x0001005d466c();
  puStack_2a0 = &UNK_10de23296;
  uStack_298 = 0;
  puStack_278 = auStack_260;
  puStack_268 = (undefined *)0x100;
  lStack_270 = 0;
  uStack_280 = &PTR_FUN_1109965d0;
  lStack_160 = 0;
  puStack_290 = puVar6;
  puStack_288 = puVar7;
  func_0x00010727a648(&uStack_280,&UNK_10f406dcf,4);
  uVar1 = lStack_270 + lStack_160;
  ppuStack_2c8 = &puStack_2b0;
  puStack_2c0 = &UNK_10de23296;
  uVar4 = uVar1 == 0x25;
  lStack_2b8 = param_3;
  if (uVar1 < 0x26) {
    uStack_280 = (undefined **)
                 (CONCAT62((int6)((ulong)uStack_280 >> 0x10),(short)uVar1) & 0xffffffffff00ffff);
    *(undefined1 *)((long)&uStack_280 + 2 + uVar1) = 0;
    func_0x000107277e24(&ppuStack_2c8,(long)&uStack_280 + 2,0x26);
    puVar8 = puStack_268;
    lVar3 = lStack_270;
    ppuVar2 = uStack_280;
    puVar5[1] = puStack_278;
    *puVar5 = ppuVar2;
    puVar5[3] = puVar8;
    puVar5[2] = lVar3;
    puVar5[4] = auStack_260[0];
    *(undefined4 *)(puVar5 + 5) = 1;
    puVar5[6] = 0xffffffffffffffff;
  }
  else {
    uVar4 = uVar1 == 0x51;
    if (uVar1 < 0x52) {
      func_0x00010727a628(&uStack_280);
      *(short *)uStack_280 = (short)uVar1;
      *(undefined1 *)((long)uStack_280 + uVar1 + 2) = 0;
      func_0x000107277e24(&ppuStack_2c8,(undefined2 *)((long)uStack_280 + 2),0x52);
      puVar6 = puStack_278;
      ppuVar2 = uStack_280;
      puVar5[1] = puStack_278;
      *puVar5 = ppuVar2;
      if (puVar6 != (undefined8 *)0x0) {
        do {
          func_0x00010727a734();
        } while (extraout_w10 != 0);
      }
      *(undefined4 *)(puVar5 + 5) = 2;
      puVar5[6] = 0xffffffffffffffff;
      func_0x000104c2f784(&uStack_280);
    }
    else {
      func_0x0001005d466c();
      uStack_280 = (undefined **)&UNK_10de23296;
      puStack_278 = (undefined8 *)0x0;
      lStack_270 = param_3;
      puStack_268 = puVar8;
      func_0x0001003a9204(&puStack_2a0,puStack_2b0,uStack_2a8,0xdc,&uStack_280);
      FUN_1072625b4(puVar5,&puStack_2a0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_2a0);
    }
  }
  func_0x00010727a1d4(uStack_158);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x000104c2f784(&uStack_280);
    func_0x00010727a2ac();
    return;
  }
  return;
}


